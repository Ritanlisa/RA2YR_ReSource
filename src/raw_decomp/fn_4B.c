// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x004B0410  DriveLocomotionClass::ComputeAudio3DRotation  this=DriveLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::ComputeAudio3DRotation(DriveLocomotionClass *this, float *a2, _DWORD *a3)
{
  int v3; // edi
  double v4; // st7
  int PreviousRamp; // edx
  int v6; // eax
  FootClass *Owner; // edx
  float v9[12]; // [esp+Ch] [ebp-30h] BYREF

  v3 = this->SlopeTimer[2]; /*0x4b0419*/
  if ( v3 ) /*0x4b0422*/
  {
    PreviousRamp = this->PreviousRamp; /*0x4b042c*/
    v6 = this->SlopeTimer[1]; /*0x4b042f*/
    if ( PreviousRamp != -1 ) /*0x4b0435*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - PreviousRamp >= v6 ) /*0x4b0441*/
        v6 = 0; /*0x4b0447*/
      else
        v6 -= *(_DWORD *)&stru_A8EB00.?[416] - PreviousRamp; /*0x4b0443*/
    }
    v4 = (double)(v3 - v6) / (double)this->SlopeTimer[2]; /*0x4b0453*/
  }
  else
  {
    v4 = 1.0; /*0x4b0424*/
  }
  if ( v4 != 1.0 || (Owner = this->?, fabs(*(float *)&Owner->?) >= 0.005) || fabs(*(float *)&Owner->?) >= 0.005 ) /*0x4b0493*/
  {
    if ( a3 ) /*0x4b0497*/
      *a3 = -1; /*0x4b0499*/
  }
  qmemcpy(a2, Audio3D::ComputeRotation((IUnknown *)this, v9, a3), 0x30u); /*0x4b04b8*/
  return a2; /*0x4b04ba*/
}



// ==== 0x004B04D0  DriveLocomotionClass::DispatchVirtualCall  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall(DriveLocomotionClass *this)
{
  int v1; // edi
  int v2; // eax

  v1 = *(_DWORD *)this->LocomotionClass; /*0x4b04d9*/
  v2 = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 111))(this->?); /*0x4b04dd*/
  return (*(int (__stdcall **)(DriveLocomotionClass *, _DWORD))(v1 + 124))(this, *(unsigned __int8 *)(v2 + 284)); /*0x4b04f0*/
}



// ==== 0x004B0500  DriveLocomotionClass::ProcessJumpjetMotion  this=DriveLocomotionClass  sig=csp ====
char __stdcall ProcessJumpjetMotion(DriveLocomotionClass *this)
{
  DriveLocomotionClass *v1; // esi
  char *v2; // edi
  int v3; // eax
  int v4; // ecx
  FootClass *v5; // ecx
  AbstractClass *v6; // ecx
  int *v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  AbstractClass *movementDestination; // ecx
  FootClass *v12; // ecx
  AbstractClass *v13; // ebp
  _WORD *v14; // eax
  FootClass *v15; // ecx
  FootClass *Owner; // ecx
  FootClass *v18; // ecx
  AnimClass *v19; // eax
  int *location; // ecx
  FootClass *v21; // ecx
  FootClass *v22; // eax
  FootClass *v23; // eax
  AbstractClass *v24; // ecx
  _DWORD *v25; // eax
  FootClass *v26; // ecx
  int v27; // ecx
  FootClass *v28; // eax
  char v29; // [esp-4h] [ebp-24h]
  int v30; // [esp+10h] [ebp-10h] BYREF
  int v31; // [esp+14h] [ebp-Ch]
  int v32; // [esp+18h] [ebp-8h]

  v1 = this; /*0x4b0506*/
  v2 = (char *)this - 4; /*0x4b0518*/
  v3 = *(unsigned __int8 *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 111))(this->?) + 284); /*0x4b0521*/
  v4 = *((_DWORD *)v2 + 7); /*0x4b0523*/
  if ( v3 != v4 ) /*0x4b0528*/
  {
    *((_DWORD *)v2 + 8) = v4; /*0x4b052a*/
    *((_DWORD *)v2 + 7) = v3; /*0x4b0533*/
    Timer::Start((Timer *)&v30, 3); /*0x4b0536*/
    *((_DWORD *)v2 + 9) = v30; /*0x4b0547*/
    *((_DWORD *)v2 + 10) = v31; /*0x4b054d*/
    *((_DWORD *)v2 + 11) = v32; /*0x4b0554*/
    *((_DWORD *)v2 + 12) = 3; /*0x4b0557*/
  }
  if ( v1->MovementSpeed[1] == -1 || !HIBYTE(v1->TrackIndex) ) /*0x4b056a*/
  {
    movementDestination = v1->?->movementDestination; /*0x4b066f*/
    if ( movementDestination /*0x4b06ad*/
      && (*((int (__thiscall **)(AbstractClass *))movementDestination->vtable0 + 11))(movementDestination) == 11
      && (v12 = v1->?,
          v13 = v12->movementDestination + 1,
          v14 = (_WORD *)(*((int (__thiscall **)(FootClass *, DriveLocomotionClass **))v12->TechnoClass + 110))(
                           v12,
                           &this),
          *v14 == LOWORD(v13->vtable0))
      && v14[1] == HIWORD(v13->vtable0) )
    {
      v15 = (FootClass *)*((_DWORD *)v2 + 3); /*0x4b06af*/
      if ( !*(_DWORD *)&v15->__pad_58C[12] ) /*0x4b06b2*/
        goto LABEL_27; /*0x4b06b8*/
    }
    else
    {
      Owner = v1->?; /*0x4b06d5*/
      if ( Owner->? != 5 /*0x4b0732*/
        || HIBYTE(v1->TrackIndex)
        || v1->SlopeTimer[3] == g_DDraw_ClipRect && *(_QWORD *)v1->Dest == qword_8A0794
        || Owner->?[0] != v1->SlopeTimer[3]
        || Owner->?[1] != v1->Dest[0]
        || Owner->?[2] != v1->Dest[1] )
      {
        if ( (unsigned __int8)TimerClass::Active((int)Owner->?) ) /*0x4b077b*/
        {
          BYTE2(v1->TrackIndex) = 1; /*0x4b0788*/
          goto LABEL_39; /*0x4b0788*/
        }
        if ( BYTE2(v1->TrackIndex) ) /*0x4b0896*/
        {
          BYTE2(v1->TrackIndex) = 0; /*0x4b089b*/
          (*((void (__thiscall **)(FootClass *, _DWORD))v1->?->TechnoClass + 99))(v1->?, 0); /*0x4b08a4*/
          v22 = v1->?; /*0x4b08aa*/
          if ( !v22->? || v22->? || v22->? ) /*0x4b08bd*/
            return 0; /*0x4b08ce*/
        }
        if ( (*((int (__thiscall **)(FootClass *))v1->?->TechnoClass + 97))(v1->?) == 5 /*0x4b08fd*/
          && !(*(unsigned __int8 (__stdcall **)(DriveLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1)
          || (*((int (__thiscall **)(FootClass *))v1->?->TechnoClass + 97))(v1->?) == 16 )
        {
          goto LABEL_39; /*0x4b08fd*/
        }
        if ( !(*(unsigned __int8 (__stdcall **)(DriveLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1) ) /*0x4b0906*/
        {
          v23 = v1->?; /*0x4b0911*/
          if ( v23->pathDirections[0] == -1 ) /*0x4b091b*/
          {
            if ( v23->? ) /*0x4b0921*/
            {
              if ( *((_DWORD *)v2 + 16) != g_DDraw_ClipRect || *(_QWORD *)(v2 + 68) != qword_8A0794 ) /*0x4b0940*/
              {
                *((_DWORD *)v2 + 16) = g_DDraw_ClipRect; /*0x4b094f*/
                *(_QWORD *)(v2 + 68) = qword_8A0794; /*0x4b0957*/
                v2[99] = 0; /*0x4b0963*/
              }
              v1->SpeedAccum = 0; /*0x4b0966*/
              v1->MovementSpeed[0] = 0; /*0x4b0969*/
            }
            else
            {
              v24 = v23->movementDestination; /*0x4b0971*/
              if ( v24 ) /*0x4b0979*/
              {
                v25 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, int *, FootClass *))v24->vtable0 + 19))( /*0x4b0987*/
                                  v24,
                                  &v30,
                                  v1->?);
                (*(void (__stdcall **)(DriveLocomotionClass *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v1->LocomotionClass /*0x4b09a3*/
                                                                                      + 68))(
                  v1,
                  *v25,
                  v25[1],
                  v25[2]);
              }
            }
            goto LABEL_39; /*0x4b096c*/
          }
        }
        v26 = v1->?; /*0x4b09ab*/
        if ( v26->? /*0x4b09e2*/
          && (*((int (__thiscall **)(FootClass *))v26->TechnoClass + 97))(v26) != 7
          && (*(unsigned __int8 (__stdcall **)(DriveLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1)
          && !(*((unsigned __int8 (__thiscall **)(FootClass *, int *))v1->?->TechnoClass + 179))(
                v1->?,
                &v1->SlopeTimer[3]) )
        {
          if ( *((_DWORD *)v2 + 16) != g_DDraw_ClipRect || *(_QWORD *)(v2 + 68) != qword_8A0794 ) /*0x4b0a03*/
          {
            *((_DWORD *)v2 + 16) = g_DDraw_ClipRect; /*0x4b0a12*/
            *(_QWORD *)(v2 + 68) = qword_8A0794; /*0x4b0a1a*/
            v2[99] = 0; /*0x4b0a26*/
          }
          v27 = *((_DWORD *)v2 + 3); /*0x4b0a29*/
          if ( *(_DWORD *)(v27 + 1432) ) /*0x4b0a2c*/
          {
            FootClass::ClearPathIndex((FootClass *)v27); /*0x4b0a44*/
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)v2 + 3) + 1156))( /*0x4b0a51*/
                   *((_DWORD *)v2 + 3),
                   0,
                   1) )
            {
              return 0; /*0x4b0a68*/
            }
          }
          else
          {
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v27 + 1152))(v27, 0, 1); /*0x4b0a39*/
          }
          goto LABEL_39; /*0x4b0a3f*/
        }
        LOBYTE(this) = 0; /*0x4b0a75*/
        JumpjetLocomotion::Update((int)&v1[-1].Piggybackee, &this, 1, 0); /*0x4b0a79*/
        if ( (_BYTE)this ) /*0x4b0a82*/
          return 0; /*0x4b0a8d*/
        if ( !v1->?->? ) /*0x4b0a93*/
          return 0; /*0x4b0aa4*/
        v29 = 0; /*0x4b0aa7*/
        goto LABEL_87; /*0x4b0aa7*/
      }
      v15 = (FootClass *)*((_DWORD *)v2 + 3); /*0x4b0734*/
      if ( !*(_DWORD *)&v15->__pad_58C[12] ) /*0x4b073d*/
      {
LABEL_27:
        (*((void (__thiscall **)(FootClass *, _DWORD, int))v15->TechnoClass + 288))(v15, 0, 1); /*0x4b06be*/
        return 0; /*0x4b06d2*/
      }
    }
    FootClass::ClearPathIndex(v15); /*0x4b0756*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)v2 + 3) + 1156))(*((_DWORD *)v2 + 3), 0, 1); /*0x4b0763*/
    return 0; /*0x4b0772*/
  }
  if ( JumpjetLocomotion::ProcessCollision((int)&v1[-1].Piggybackee, 0) || !v1->?->? ) /*0x4b0586*/
    return 0; /*0x4b058c*/
  if ( v1->MovementSpeed[1] == -1 /*0x4b05c4*/
    && ((*(unsigned __int8 (__stdcall **)(DriveLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1)
     || v1->?->pathDirections[0] != -1)
    && ((*((int (__thiscall **)(FootClass *))v1->?->TechnoClass + 11))(v1->?) != 1 || !BYTE1(v1->?[1].?)) )
  {
    v5 = v1->?; /*0x4b05d0*/
    LOBYTE(this) = 0; /*0x4b05d3*/
    if ( (*((int (__thiscall **)(FootClass *))v5->TechnoClass + 11))(v5) == 1 ) /*0x4b05df*/
    {
      v6 = v1->?->movementDestination; /*0x4b05e4*/
      if ( v6 ) /*0x4b05ec*/
      {
        if ( (*((int (__thiscall **)(AbstractClass *))v6->vtable0 + 11))(v6) == 15 ) /*0x4b05f6*/
        {
          v7 = (int *)(*((int (__thiscall **)(AbstractClass *, int *, FootClass *))v1->?->movementDestination->vtable0 /*0x4b060f*/
                       + 19))(
                        v1->?->movementDestination,
                        &v30,
                        v1->?);
          v8 = *v7; /*0x4b0611*/
          v9 = v7[1]; /*0x4b0615*/
          v10 = v7[2]; /*0x4b0618*/
          if ( v8 != v1->SlopeTimer[3] || v9 != v1->Dest[0] || v10 != v1->Dest[1] ) /*0x4b0625*/
            (*(void (__stdcall **)(DriveLocomotionClass *, int, int, int))(*(_DWORD *)v1->LocomotionClass + 68))( /*0x4b0638*/
              v1,
              v8,
              v9,
              v10);
        }
      }
    }
    JumpjetLocomotion::Update((int)&v1[-1].Piggybackee, &this, 1, 0); /*0x4b0647*/
    if ( (_BYTE)this || !v1->?->? ) /*0x4b0659*/
      return 0; /*0x4b065f*/
    v29 = 1; /*0x4b0665*/
LABEL_87:
    JumpjetLocomotion::ProcessCollision((int)&v1[-1].Piggybackee, v29); /*0x4b0aa8*/
    v28 = v1->?; /*0x4b0aaf*/
    if ( !v28 || !v28->? ) /*0x4b0ab6*/
      return 0; /*0x4b0ac5*/
  }
LABEL_39:
  if ( (*(unsigned __int8 (__stdcall **)(DriveLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 128))(v1) ) /*0x4b078f*/
  {
    if ( !(*(_DWORD *)&stru_A8EB00.?[416] % 10) ) /*0x4b07a8*/
    {
      v18 = v1->?; /*0x4b07ae*/
      if ( !v18->? && *(_DWORD *)((*((int (__thiscall **)(FootClass *))v18->TechnoClass + 111))(v18) + 236) == 2 ) /*0x4b07c8*/
      {
        if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 148) ) /*0x4b07cf*/
        {
          v19 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b07dc*/
          if ( v19 ) /*0x4b07e6*/
          {
            location = v1->?->?; /*0x4b07ec*/
            v30 = *location; /*0x4b07fd*/
            v31 = location[1]; /*0x4b0804*/
            v32 = location[2]; /*0x4b0810*/
            AnimClass::ctor( /*0x4b0823*/
              v19,
              *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 148),
              &v30,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
      }
    }
  }
  if ( v1->SlopeTimer[3] == g_DDraw_ClipRect /*0x4b0856*/
    && v1->Dest[0] == (_DWORD)qword_8A0794
    && *(_QWORD *)&v1->Dest[1] == __PAIR64__(g_DDraw_ClipRect, HIDWORD(qword_8A0794))
    && *(_QWORD *)v1->HeadToCoord == qword_8A0794 )
  {
    v21 = v1->?; /*0x4b085d*/
    if ( v21->pathDirections[0] == -1 && *(double *)v21->currentSpeed_percentage > 0.0 ) /*0x4b087a*/
      (*((void (__thiscall **)(FootClass *, _DWORD, _DWORD))v21->TechnoClass + 337))(v21, 0, 0); /*0x4b0880*/
  }
  return (*(char (__stdcall **)(DriveLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1); /*0x4b06cb*/
}



// ==== 0x004B0AD0  JumpjetLocomotion::MoveTo  this=IUnknown  sig=csp ====
char __thiscall JumpjetLocomotion::MoveTo(int this, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  int *v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v18[2]; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+18h] [ebp-Ch] BYREF
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]

  v3 = a2; /*0x4b0ad0*/
  if ( *a2 != g_DDraw_ClipRect || a2[1] != (_DWORD)qword_8A0794 || (v5 = a2[2], v5 != HIDWORD(qword_8A0794)) ) /*0x4b0afe*/
  {
    LOBYTE(v5) = *(_BYTE *)(this + 96); /*0x4b0b04*/
    v6 = a3; /*0x4b0b07*/
    if ( !(_BYTE)v5 ) /*0x4b0b0d*/
    {
      v5 = *(_DWORD *)(this + 88); /*0x4b0b13*/
      if ( v5 != -1 ) /*0x4b0b19*/
      {
        v5 = byte_7E7B28[12 * v5]; /*0x4b0b22*/
        if ( v5 ) /*0x4b0b2c*/
        {
          v7 = 4 * v5; /*0x4b0b32*/
          v8 = dword_7E7A28[v7]; /*0x4b0b35*/
          v5 = dword_7E7A34[v7]; /*0x4b0b3b*/
          if ( v5 > -1 ) /*0x4b0b44*/
          {
            v9 = (int *)(v8 + 12 * v5); /*0x4b0b4d*/
            a3 = v9[2]; /*0x4b0b53*/
            if ( *(_DWORD *)(this + 92) < v5 ) /*0x4b0b5c*/
            {
              v10 = v9[1]; /*0x4b0b64*/
              v18[0] = *v9; /*0x4b0b67*/
              v18[1] = v10; /*0x4b0b6f*/
              v5 = (int)JumpjetLocomotion::TransformCoords((JumpjetLocomotion *)this, &v19, v18, &a3); /*0x4b0b80*/
              v11 = *(_DWORD *)v5; /*0x4b0b85*/
              v12 = *(_DWORD *)(v5 + 4); /*0x4b0b89*/
              if ( !v6 ) /*0x4b0b8c*/
              {
                v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 464))(*(_DWORD *)(this + 12)); /*0x4b0b93*/
                v14 = *(_DWORD *)(this + 12); /*0x4b0b99*/
                v19 = v11; /*0x4b0b9c*/
                v20 = v12; /*0x4b0ba0*/
                v21 = v13; /*0x4b0ba4*/
                (*(void (__thiscall **)(int, int *))(*(_DWORD *)v14 + 244))(v14, &v19); /*0x4b0baf*/
                LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 12) + 244))( /*0x4b0bbf*/
                               *(_DWORD *)(this + 12),
                               a2);
                return v5; /*0x4b0bcc*/
              }
              if ( v6 == 1 || v6 == 3 ) /*0x4b0bd7*/
              {
                v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 464))(*(_DWORD *)(this + 12)); /*0x4b0bde*/
                v16 = *(_DWORD *)(this + 12); /*0x4b0be4*/
                v21 = v15; /*0x4b0be7*/
                v19 = v11; /*0x4b0beb*/
                v20 = v12; /*0x4b0bef*/
                LOBYTE(v5) = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v16 + 240))(v16, &v19); /*0x4b0bfa*/
              }
              v3 = a2; /*0x4b0c00*/
            }
          }
        }
      }
    }
    if ( v6 ) /*0x4b0c06*/
    {
      if ( v6 == 1 || v6 == 3 ) /*0x4b0c26*/
        LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 12) + 240))( /*0x4b0c2e*/
                       *(_DWORD *)(this + 12),
                       v3);
    }
    else
    {
      LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 12) + 244))( /*0x4b0c0e*/
                     *(_DWORD *)(this + 12),
                     v3);
    }
  }
  return v5; /*0x4b0bc5*/
}



// ==== 0x004B0C40  DriveLocomotionClass::SetWaypointTarget  this=DriveLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::SetWaypointTarget(
        DriveLocomotionClass *this,
        int a2,
        unsigned int a3,
        __int64 a4)
{
  int v4; // eax
  char *v5; // esi
  int *v6; // edi
  int v7; // ecx
  __int64 v8; // kr08_8
  CellClass *v9; // eax
  int v11; // [esp-4h] [ebp-20h]
  unsigned int v12; // [esp+10h] [ebp-Ch] BYREF
  __int64 v13; // [esp+14h] [ebp-8h]

  this->MovementSpeed[1] = a2; /*0x4b0c53*/
  this->TrackNumber = 0; /*0x4b0c56*/
  v4 = g_DDraw_ClipRect; /*0x4b0c5d*/
  if ( a3 != g_DDraw_ClipRect || a4 != qword_8A0794 ) /*0x4b0c70*/
  {
    v5 = (char *)this - 4; /*0x4b0c88*/
    v13 = a4; /*0x4b0c8f*/
    v6 = &this->Dest[2]; /*0x4b0c93*/
    v12 = a3; /*0x4b0c9a*/
    if ( *v6 != g_DDraw_ClipRect || __PAIR64__(this->HeadToCoord[1], this->HeadToCoord[0]) != qword_8A0794 ) /*0x4b0ca5*/
    {
      *v6 = g_DDraw_ClipRect; /*0x4b0cb6*/
      this->HeadToCoord[0] = qword_8A0794; /*0x4b0cbd*/
      v7 = HIDWORD(qword_8A0794); /*0x4b0cc0*/
      v5[99] = 0; /*0x4b0cc6*/
      this->HeadToCoord[1] = v7; /*0x4b0cca*/
      v4 = g_DDraw_ClipRect; /*0x4b0ccd*/
    }
    if ( __PAIR64__(a4, a3) != __PAIR64__(qword_8A0794, v4) /*0x4b0cee*/
      || (LOBYTE(v4) = BYTE4(qword_8A0794), HIDWORD(a4) != HIDWORD(qword_8A0794)) )
    {
      v8 = v13; /*0x4b0cf4*/
      v5[99] = 1; /*0x4b0cfa*/
      *v6 = a3; /*0x4b0cfe*/
      *(_QWORD *)this->HeadToCoord = v8; /*0x4b0d00*/
      v11 = *((_DWORD *)v5 + 3); /*0x4b0d0d*/
      v9 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12); /*0x4b0d14*/
      if ( !(unsigned __int8)CrateClass::ProcessPickup((CrateClass *)v9, v11) || *(_BYTE *)(*((_DWORD *)v5 + 3) + 129) ) /*0x4b0d27*/
      {
        LOBYTE(v4) = *(_BYTE *)(*((_DWORD *)v5 + 3) + 144); /*0x4b0d6d*/
        if ( (_BYTE)v4 ) /*0x4b0d75*/
        {
          LOBYTE(v4) = g_DDraw_ClipRect; /*0x4b0d77*/
          *v6 = g_DDraw_ClipRect; /*0x4b0d7c*/
          *(_QWORD *)this->HeadToCoord = qword_8A0794; /*0x4b0d84*/
          v5[99] = 0; /*0x4b0d90*/
        }
      }
      else
      {
        JumpjetLocomotion::MoveTo((int)this - 4, &v12, 1); /*0x4b0d3a*/
        LOBYTE(v4) = (_BYTE)this + 48; /*0x4b0d3f*/
        this->SlopeTimer[3] = a3; /*0x4b0d4a*/
        *(_QWORD *)this->Dest = a4; /*0x4b0d4c*/
        this->SpeedAccum = 0; /*0x4b0d52*/
        this->MovementSpeed[0] = 1072693248; /*0x4b0d59*/
      }
    }
  }
  return v4; /*0x4b0d60*/
}



// ==== 0x004B0DF0  ObjectClass::method_4B0DF0  this=ObjectClass  sig=csp ====
char __thiscall sub_4B0DF0(ObjectClass *this, _DWORD *a2)
{
  int v2; // eax
  int *v4; // edi
  int v5; // eax
  int v6; // eax
  CellClass *v7; // eax
  void *vtable3; // [esp-4h] [ebp-10h]

  v2 = g_DDraw_ClipRect; /*0x4b0df1*/
  v4 = &this->ambientSoundController[1]; /*0x4b0dfd*/
  if ( this->ambientSoundController[1] != g_DDraw_ClipRect /*0x4b0e0f*/
    || *(_QWORD *)&this->ambientSoundController[2] != qword_8A0794 )
  {
    *v4 = g_DDraw_ClipRect; /*0x4b0e20*/
    this->ambientSoundController[2] = qword_8A0794; /*0x4b0e28*/
    v5 = HIDWORD(qword_8A0794); /*0x4b0e2b*/
    HIBYTE(this->customSound_controller[4]) = 0; /*0x4b0e30*/
    this->ambientSoundController[3] = v5; /*0x4b0e34*/
    v2 = g_DDraw_ClipRect; /*0x4b0e37*/
  }
  if ( *a2 != v2 || *(_QWORD *)(a2 + 1) != qword_8A0794 ) /*0x4b0e50*/
  {
    *v4 = *a2; /*0x4b0e65*/
    this->ambientSoundController[2] = a2[1]; /*0x4b0e6a*/
    v6 = a2[2]; /*0x4b0e6d*/
    HIBYTE(this->customSound_controller[4]) = 1; /*0x4b0e70*/
    this->ambientSoundController[3] = v6; /*0x4b0e74*/
    vtable3 = this->?; /*0x4b0e7a*/
    v7 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x4b0e81*/
    if ( (unsigned __int8)CrateClass::ProcessPickup((CrateClass *)v7, (int)vtable3) && !*((_BYTE *)this->? + 129) ) /*0x4b0e94*/
    {
      JumpjetLocomotion::MoveTo((int)this, a2, 1); /*0x4b0ea3*/
      return 1; /*0x4b0ead*/
    }
    if ( *((_BYTE *)this->? + 144) ) /*0x4b0eb3*/
    {
      *v4 = g_DDraw_ClipRect; /*0x4b0ec3*/
      *(_QWORD *)&this->ambientSoundController[2] = qword_8A0794; /*0x4b0ecb*/
      HIBYTE(this->customSound_controller[4]) = 0; /*0x4b0ed6*/
    }
  }
  return 0; /*0x4b0ea8*/
}



// ==== 0x004B0EF0  DriveLocomotionClass::UpdateFacingDirection  this=DriveLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::UpdateFacingDirection(DriveLocomotionClass *this, int a2)
{
  return FacingClass::Update((char *)this->?->?, &a2); /*0x4b0f0f*/
}



// ==== 0x004B0F20  JumpjetLocomotion::ProcessCollision  this=JumpjetLocomotion  sig=csp ====
char __userpurge JumpjetLocomotion::ProcessCollision@<al>(int this@<ecx>, double a2@<st0>, char a3)
{
  int v4; // eax
  int v5; // edx
  bool v6; // al
  int v7; // esi
  int v8; // eax
  _DWORD *v9; // esi
  int v10; // edx
  int v11; // esi
  int v12; // eax
  int *v13; // ecx
  int v14; // edi
  char v15; // bl
  int v16; // edx
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // esi
  int v22; // eax
  _DWORD *v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // edx
  _DWORD *v27; // esi
  int v28; // eax
  int v29; // edx
  _DWORD *v30; // ebx
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  CellClass *v34; // eax
  int *Coords; // eax
  int *v36; // ecx
  int *v37; // ecx
  int GroundHeight; // esi
  int v39; // ebx
  char *v41; // esi
  char v42; // dl
  int v43; // edx
  int v44; // ebx
  __int16 v45; // cx
  int v46; // eax
  int v47; // ecx
  _DWORD *v48; // ecx
  int v49; // eax
  int v50; // edx
  int v51; // eax
  int ... [42175 chars total]



// ==== 0x004B2630  JumpjetLocomotion::Update  this=JumpjetLocomotion  sig=csp ====
char __thiscall JumpjetLocomotion_Update(int this, _BYTE *a2, int a3, int a4)
{
  int v5; // ecx
  unsigned int v6; // ebx
  int v7; // ecx
  char v8; // al
  char result; // al
  int v10; // ecx
  int v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // eax
  wchar_t *v16; // edi
  int v17; // edx
  wchar_t **v18; // esi
  int v19; // eax
  wchar_t *v20; // eax
  wchar_t *v21; // ecx
  _DWORD *v22; // ebx
  int v23; // ecx
  char v24; // al
  _DWORD *v25; // ecx
  int v26; // ecx
  _DWORD *v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // ecx
  _DWORD *Value; // edi
  _DWORD *v31; // esi
  int v32; // kr0C_4
  unsigned int v33; // edx
  _DWORD *v34; // eax
  _BYTE *v35; // ecx
  int v36; // edi
  unsigned int v37; // esi
  void *v38; // eax
  int v39; // eax
  int v40; // edx
  _DWORD *v41; // edi
  _DWORD *v42; // ecx
  int v43; // esi
  int GroundHeight; // eax
  int ClosestObject; // eax
  _DWORD *v46; // eax
  _DWORD *v47; // eax
  _DWORD *v48;... [57640 chars total]



// ==== 0x004B4770  nullsub_118  this=-  sig=ida-proto ====
void nullsub_118()
{
  ; /*0x4b4770*/
}



// ==== 0x004B4780  JumpjetLocomotion::TransformCoords  this=JumpjetLocomotion  sig=csp ====
_DWORD *__thiscall JumpjetLocomotion::TransformCoords(JumpjetLocomotion *this, _DWORD *a2, int *a3, int *a4)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  char *JumpjetLocomotion_field_0x40; // edx
  char *JumpjetLocomotion_field_0x44; // ecx

  v4 = *a4; /*0x4b478d*/
  v5 = dword_7E7B30[3 * (int)this->JumpjetLocomotion_field_0x58]; /*0x4b4791*/
  v6 = *a3; /*0x4b479f*/
  v7 = a3[1]; /*0x4b47a1*/
  if ( (v5 & 1) != 0 ) /*0x4b47a4*/
  {
    v6 = a3[1]; /*0x4b47a8*/
    v7 = *a3; /*0x4b47aa*/
    v4 = (unsigned __int8)(-64 - v4); /*0x4b47b9*/
  }
  if ( (v5 & 2) != 0 ) /*0x4b47be*/
  {
    v6 = -v6; /*0x4b47c2*/
    v4 = (unsigned __int8)-(char)v4; /*0x4b47c4*/
  }
  if ( (v5 & 4) != 0 ) /*0x4b47cc*/
  {
    v7 = -v7; /*0x4b47d5*/
    v4 = (unsigned __int8)(0x80 - v4); /*0x4b47dd*/
  }
  *a4 = v4; /*0x4b47df*/
  JumpjetLocomotion_field_0x40 = (char *)this->JumpjetLocomotion_field_0x40; /*0x4b47e2*/
  JumpjetLocomotion_field_0x44 = (char *)this->JumpjetLocomotion_field_0x44; /*0x4b47e5*/
  *a2 = &JumpjetLocomotion_field_0x40[v6]; /*0x4b47f2*/
  a2[1] = &JumpjetLocomotion_field_0x44[v7]; /*0x4b47f5*/
  return a2; /*0x4b47f0*/
}



// ==== 0x004B4820  DriveLocomotionClass::StubReturnTwo  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnTwo(DriveLocomotionClass *this)
{
  return 2; /*0x4b4825*/
}



// ==== 0x004B4830  DriveLocomotionClass::ddtor  this=DriveLocomotionClass  sig=csp ====
int __stdcall DriveLocomotionClass::ddtor(DriveLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x4b4836*/
    return -2147467261; /*0x4b4838*/
  *a2 = 1247291201; /*0x4b4846*/
  a2[1] = 298948665; /*0x4b484e*/
  a2[2] = -1610610249; /*0x4b4857*/
  a2[3] = unk_7E9A3C; /*0x4b4860*/
  return 0; /*0x4b483d*/
}



// ==== 0x004B4870  DriveLocomotionClass::StubReturnZero_1  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_1(DriveLocomotionClass *this)
{
  return 0; /*0x4b4872*/
}



// ==== 0x004B4880  DriveLocomotionClass::DispatchCheckState  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchCheckState(DriveLocomotionClass *this)
{
  return JumpjetLocomotionClass::CheckState((LocomotionClass *)this); /*0x4b488a*/
}



// ==== 0x004B48D0  DriveLocomotionClass::MoveToChecked  this=DriveLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::MoveToChecked(DriveLocomotionClass *this, int a2)
{
  char result; // al

  result = (_BYTE)this + 60; /*0x4b48de*/
  if ( this->Dest[2] != g_DDraw_ClipRect || *(_QWORD *)this->HeadToCoord != qword_8A0794 ) /*0x4b48f0*/
    return JumpjetLocomotion::MoveTo((int)this - 4, &this->Dest[2], a2); /*0x4b4908*/
  return result; /*0x4b490d*/
}



// ==== 0x004B4920  DriveLocomotionClass::IsAtDestination  this=DriveLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::IsAtDestination(DriveLocomotionClass *this, int a2, int a3, int a4)
{
  DriveLocomotionClass *v4; // esi
  int *v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int *v15; // eax
  int v16; // ebx
  int v17; // ebp
  int *location; // eax
  int v20[2]; // [esp+Ch] [ebp-20h] BYREF
  _DWORD v21[2]; // [esp+14h] [ebp-18h] BYREF
  int v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+20h] [ebp-Ch]
  int v24; // [esp+24h] [ebp-8h]
  unsigned int v25; // [esp+28h] [ebp-4h]

  v4 = this; /*0x4b4925*/
  v5 = (int *)(*(int (__stdcall **)(DriveLocomotionClass *, _DWORD *))(*(_DWORD *)this->LocomotionClass + 24))( /*0x4b4932*/
                this,
                v21);
  v6 = *v5; /*0x4b4935*/
  v7 = v5[1]; /*0x4b4937*/
  v8 = v5[2]; /*0x4b4940*/
  v23 = v6; /*0x4b4945*/
  v24 = v7; /*0x4b4949*/
  v25 = v8; /*0x4b494d*/
  if ( v6 == g_DDraw_ClipRect && __PAIR64__(v8, v7) == qword_8A0794 ) /*0x4b4959*/
    return 0; /*0x4b4959*/
  if ( !LOBYTE(v4->TrackIndex) ) /*0x4b4967*/
  {
    v9 = v4->MovementSpeed[1]; /*0x4b4972*/
    if ( v9 != -1 ) /*0x4b4978*/
    {
      v10 = byte_7E7B28[12 * v9]; /*0x4b4981*/
      if ( v10 ) /*0x4b498b*/
      {
        v11 = 4 * v10; /*0x4b4991*/
        v12 = dword_7E7A34[v11]; /*0x4b4994*/
        if ( v12 > -1 ) /*0x4b49a3*/
        {
          v13 = dword_7E7A28[v11] + 12 * v12; /*0x4b49ac*/
          this = *(DriveLocomotionClass **)(v13 + 8); /*0x4b49b2*/
          if ( v4->TrackNumber < v12 ) /*0x4b49bb*/
          {
            v14 = *(_DWORD *)(v13 + 4); /*0x4b49c3*/
            v20[0] = *(_DWORD *)v13; /*0x4b49c6*/
            v20[1] = v14; /*0x4b49cf*/
            v15 = JumpjetLocomotion::TransformCoords((JumpjetLocomotion *)&v4[-1].Piggybackee, v21, v20, (int *)&this); /*0x4b49e1*/
            v16 = *v15; /*0x4b49e6*/
            v17 = v15[1]; /*0x4b49e8*/
            location = v4->?->?; /*0x4b49ee*/
            v21[0] = *location; /*0x4b49f5*/
            v21[1] = location[1]; /*0x4b49fc*/
            v22 = location[2]; /*0x4b4a03*/
            if ( (unsigned __int16)(v16 / 256) == (unsigned __int16)(a2 / 256) /*0x4b4a6b*/
              && (unsigned __int16)(v17 / 256) == (unsigned __int16)(a3 / 256)
              && (int)abs32(v22 - a4) <= dword_8A07D0 )
            {
              return 1; /*0x4b4a75*/
            }
          }
        }
      }
    }
  }
  return (unsigned __int16)(v23 / 256) == (unsigned __int16)(a2 / 256) /*0x4b4aee*/
      && (unsigned __int16)(v24 / 256) == (unsigned __int16)(a3 / 256)
      && (int)abs32(v25 - a4) <= dword_8A07D0;
}



// ==== 0x004B4B00  DriveLocomotionClass::StubReturnZero_2  this=DriveLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::StubReturnZero_2(DriveLocomotionClass *this)
{
  DriveLocomotionClass *v1; // edi
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  __int16 v5; // bx
  int TrackNumber; // edx
  __int16 v7; // dx
  char v8; // al

  v1 = this; /*0x4b4b02*/
  v2 = this->?->pathDirections[0]; /*0x4b4b09*/
  if ( v2 < -1 || v2 > 8 ) /*0x4b4b1b*/
    return 0; /*0x4b4b1b*/
  v3 = 12 * this->MovementSpeed[1] + 8289064; /*0x4b4b2c*/
  v4 = LOBYTE(this->TrackIndex)
     ? (char)algn_7E7B29[12 * this->MovementSpeed[1]]
     : byte_7E7B28[12 * this->MovementSpeed[1]];
  if ( v2 == 8 ) /*0x4b4b43*/
    return 0; /*0x4b4b43*/
  if ( v2 == -1 ) /*0x4b4b4c*/
    return 0; /*0x4b4b4c*/
  LOBYTE(v5) = 0; /*0x4b4b53*/
  HIBYTE(v5) = algn_7E7B29[12 * this->MovementSpeed[1] + 3]; /*0x4b4b55*/
  LOWORD(this) = v5; /*0x4b4b58*/
  if ( (((((unsigned int)this >> 12) + 1) >> 1) & 7) == v2 ) /*0x4b4b78*/
    return 0; /*0x4b4b78*/
  TrackNumber = v1->TrackNumber; /*0x4b4b7a*/
  if ( dword_7E7A2C[4 * v4] == TrackNumber /*0x4b4bc1*/
    && TrackNumber
    && (LOBYTE(v7) = 0,
        HIBYTE(v7) = *(_BYTE *)(v3 + 4),
        LOWORD(this) = v7,
        (v8 = byte_7E7B28[96 * (((((unsigned int)this >> 12) + 1) >> 1) & 7) + 12 * v2]) != 0)
    && dword_7E7A30[4 * v8] )
  {
    return 1; /*0x4b4bcc*/
  }
  else
  {
    return 0; /*0x4b4bd3*/
  }
}



// ==== 0x004B4BE0  DriveLocomotionClass::SetByteField  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SetByteField(DriveLocomotionClass *this)
{
  this->IsTurretLockedDown = 0; /*0x4b4be4*/
  return (int)this->LocomotionClass; /*0x4b4be8*/
}



// ==== 0x004B4BF0  DriveLocomotionClass::SetByteField_0  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SetByteField_0(DriveLocomotionClass *this)
{
  this->IsTurretLockedDown = 1; /*0x4b4bf4*/
  return (int)this->LocomotionClass; /*0x4b4bf8*/
}



// ==== 0x004B4C00  DriveLocomotionClass::GetField_0x54  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::GetField_0x54(DriveLocomotionClass *this)
{
  return this->MovementSpeed[1]; /*0x4b4c07*/
}



// ==== 0x004B4C10  DriveLocomotionClass::GetField_0x58  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::GetField_0x58(DriveLocomotionClass *this)
{
  return this->TrackNumber; /*0x4b4c17*/
}



// ==== 0x004B4C20  DriveLocomotionClass::GetField_0x48  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::GetField_0x48(DriveLocomotionClass *this)
{
  return this->HeadToCoord[2]; /*0x4b4c27*/
}



// ==== 0x004B4C30  IUnknown::IsInactive  this=IUnknown  sig=csp ====
BOOL __stdcall StreamClass::IsInactive(IUnknown *this)
{
  return BYTE1(this->field_10) == 0; /*0x4b4c3e*/
}



// ==== 0x004B4C50  IUnknown::Vt32Thunk  this=IUnknown  sig=csp ====
int __stdcall StreamClass::Vt32Thunk(IUnknown *this)
{
  return (*(int (__stdcall **)(IUnknown *))(this->field_0 + 128))(this); /*0x4b4c5d*/
}



// ==== 0x004B4C60  IUnknown::MissionStub6  this=IUnknown  sig=csp ====
int __stdcall JumpjetLocomotionClass::MissionStub6(IUnknown *this)
{
  return 0; /*0x4b4c62*/
}



// ==== 0x004B4C70  IUnknown::Stub3  this=IUnknown  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub3(IUnknown *this)
{
  ; /*0x4b4c70*/
}



// ==== 0x004B4C80  IUnknown::MissionStub7  this=IUnknown  sig=csp ====
char __stdcall JumpjetLocomotionClass::MissionStub7(IUnknown *this)
{
  return 0; /*0x4b4c82*/
}



// ==== 0x004B4C90  IUnknown::Stub4  this=IUnknown  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub4(IUnknown *this)
{
  ; /*0x4b4c90*/
}



// ==== 0x004B4CA0  IUnknown::Stub5  this=IUnknown  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub5(IUnknown *this)
{
  ; /*0x4b4ca0*/
}



// ==== 0x004B4CB0  DriveLocomotionClass::AddRef  this=DriveLocomotionClass  sig=csp ====
LONG __stdcall DriveLocomotionClass::AddRef(DriveLocomotionClass *this)
{
  return COM::AddRef((LocomotionClass *)this); /*0x4b4cba*/
}



// ==== 0x004B4CC0  DriveLocomotionClass::Release  this=DriveLocomotionClass  sig=csp ====
LONG __stdcall DriveLocomotionClass::Release(DriveLocomotionClass *this)
{
  return COM::ReleaseRef((LocomotionClass *)this); /*0x4b4cca*/
}



// ==== 0x004B4CD0  JumpjetLocomotionClass::GetLinkedLocomotorPointer  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_4B4CD0(int a1)
{
  return *(_DWORD *)(a1 + 80) != 0; /*0x4b4cde*/
}



// ==== 0x004B4CF0  DriveLocomotionClass::StubReturn112  this=DriveLocomotionClass  sig=csp ====
int DriveLocomotionClass::StubReturn112(DriveLocomotionClass *this)
{
  return 112; /*0x4b4cf5*/
}



// ==== 0x004B4D00  DriveLocomotionClass::ProcessMove  this=DriveLocomotionClass  sig=csp ====
_DWORD *__thiscall DriveLocomotionClass::ProcessMove(DriveLocomotionClass *this, char a2)
{
  ILocomotion *Piggybackee; // eax

  *(_DWORD *)this->LocomotionClass = &DriveLocomotionClass::`vftable'; /*0x4b4d03*/
  *(_DWORD *)&this->LocomotionClass[4] = &DriveLocomotionClass::`vftable'; /*0x4b4d09*/
  *(_DWORD *)this->__pad_18 = &off_7E7E8C; /*0x4b4d10*/
  Piggybackee = this->Piggybackee; /*0x4b4d17*/
  if ( Piggybackee ) /*0x4b4d1c*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x4b4d21*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x4b4d26*/
  if ( (a2 & 1) != 0 ) /*0x4b4d30*/
    __3_YAXPAX_Z(this); /*0x4b4d33*/
  return this->LocomotionClass; /*0x4b4d3d*/
}



// ==== 0x004B4D50  ComPtr::Release_Alt  this=ComPtr  sig=csp ====
int __thiscall ComPtr::Release_Alt(ComPtr *this)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x4b4d50*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x4b4d50*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x4b4d59*/
  return result; /*0x4b4d5c*/
}



// ==== 0x004B4D60  Function::4B4D60  this=Function  sig=csp ====
int __thiscall Function::Method_4B4D60(Function *this)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x4b4d60*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x4b4d60*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x4b4d69*/
  return result; /*0x4b4d6c*/
}



// ==== 0x004B4D70  Timeout::GetRemaining  this=Timeout  sig=csp ====
int __thiscall Timeout::GetRemaining(Timeout *this)
{
  Timeout v1; // edx
  int result; // eax

  v1 = *this; /*0x4b4d70*/
  result = *((_DWORD *)this + 2); /*0x4b4d72*/
  if ( *this != -1 ) /*0x4b4d78*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - *(_DWORD *)&v1 >= result ) /*0x4b4d84*/
      return 0; /*0x4b4d89*/
    else
      result -= *(_DWORD *)&stru_A8EB00.?[416] - *(_DWORD *)&v1; /*0x4b4d86*/
  }
  return result; /*0x4b4d88*/
}



// ==== 0x004B4D90  JumpjetLocomotionClass::GetField_0x78  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4B4D90(int a1, const void *a2, int *a3)
{
  return DriveLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}



// ==== 0x004B4DA0  JumpjetLocomotionClass::GetField_0x7C  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_4B4DA0(int a1)
{
  return DriveLocomotionClass::AddRef(a1 - 4);
}



// ==== 0x004B4DB0  JumpjetLocomotionClass::GetField_0x80  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_4B4DB0(int a1)
{
  return DriveLocomotionClass::Release((volatile LONG *)(a1 - 4));
}



// ==== 0x004B4DF0  sub_4B4DF0  this=-  sig=ida-proto ====
int sub_4B4DF0()
{
  dword_8A07D8 = 0; /*0x4b4df2*/
  dword_8A07DC = 0; /*0x4b4df7*/
  dword_8A07E0 = 0; /*0x4b4dfc*/
  dword_8A07E4 = 0; /*0x4b4e01*/
  return 0; /*0x4b4e06*/
}



// ==== 0x004B4E10  DropListClass::method_4B4E10  this=DropListClass  sig=csp ====
int __thiscall sub_4B4E10(
        DropListClass *this,
        int a2,
        wchar_t *String,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int Instance; // eax
  int v13; // edx

  sub_4C2FC0((EditClass *)this, a2, String, a4, a5, a6, a7, a8, 18, 7); /*0x4b4e3f*/
  LOBYTE(this->DropListClass_field_0x48) = 0; /*0x4b4e62*/
  this->DropListClass_field_0x4C = a9; /*0x4b4e66*/
  ShapeButtonClass::Constructor((ShapeButtonClass *)&this->DropListClass_field_0x50, 0, a11, a8 + a6, a7, 0, 0, 0); /*0x4b4e69*/
  ListClass::Construct((int)this + 176, 0, a6, a7 + *(__int16 *)(a11 + 4), a8 + *(__int16 *)(a11 + 2), a9, a5, a10, a11); /*0x4b4ea3*/
  *(_DWORD *)this->__pad_0 = &DropListClass::`vftable'; /*0x4b4eac*/
  Instance = TextRenderer::GetInstance(); /*0x4b4eb2*/
  v13 = this->q02C; /*0x4b4eba*/
  this->DropListClass_field_0x18 = *(_DWORD *)(Instance + 28) + 1; /*0x4b4ebf*/
  (*(void (__thiscall **)(char *, DropListClass *))(v13 + 132))((char *)this + 176, this); /*0x4b4ec4*/
  (*(void (__thiscall **)(int *, DropListClass *))(this->DropListClass_field_0x50 + 132))( /*0x4b4ecf*/
    &this->DropListClass_field_0x50,
    this);
  return (int)this->__pad_0; /*0x4b4ed7*/
}



// ==== 0x004B4EE0  DropListClass::OnClick  this=DropListClass  sig=csp ====
int __thiscall DropListClass::OnClick(DropListClass *this)
{
  if ( LOBYTE(this->DropListClass_field_0x48) ) /*0x4b4ee3*/
  {
    (*(void (__thiscall **)(char *))(this->q02C + 36))((char *)this + 176); /*0x4b4ef6*/
    LOBYTE(this->DropListClass_field_0x48) = 0; /*0x4b4ef9*/
  }
  (*(void (__thiscall **)(char *))(this->q02C + 32))((char *)this + 176); /*0x4b4f09*/
  (*(void (__thiscall **)(int *))(this->DropListClass_field_0x50 + 32))(&this->DropListClass_field_0x50); /*0x4b4f12*/
  return Hash::Reset((LinkClass *)this); /*0x4b4f1c*/
}



// ==== 0x004B4F20  DropListClass::?  this=DropListClass  sig=csp ====
int __thiscall DropListClass::g_var_926b49(DropListClass *this, int a2)
{
  (*(void (__thiscall **)(int *, int))(this->DropListClass_field_0x50 + 12))(&this->DropListClass_field_0x50, a2); /*0x4b4f2f*/
  return LinkedList::InsertAfter((LinkClass *)this, a2); /*0x4b4f3a*/
}



// ==== 0x004B4F40  DropListClass::Draw  this=DropListClass  sig=csp ====
int __thiscall DropListClass::Draw(DropListClass *this, int a2)
{
  (*(void (__thiscall **)(int *, int))(this->DropListClass_field_0x50 + 16))(&this->DropListClass_field_0x50, a2); /*0x4b4f4f*/
  return LinkedList::Append((LinkClass *)this, a2); /*0x4b4f5a*/
}



// ==== 0x004B4F60  DropListClass::HitTest  this=DropListClass  sig=csp ====
_DWORD *__thiscall DropListClass::HitTest(DropListClass *this, int a2)
{
  (*(void (__thiscall **)(int *, int))(this->DropListClass_field_0x50 + 20))(&this->DropListClass_field_0x50, a2); /*0x4b4f6f*/
  return LinkedList::Attach((LinkClass *)this, a2); /*0x4b4f7a*/
}



// ==== 0x004B4F80  DropListClass::OnDblClick  this=DropListClass  sig=csp ====
int __thiscall DropListClass::OnDblClick(DropListClass *this)
{
  if ( LOBYTE(this->DropListClass_field_0x48) ) /*0x4b4f83*/
  {
    (*(void (__thiscall **)(char *))(this->q02C + 36))((char *)this + 176); /*0x4b4f96*/
    LOBYTE(this->DropListClass_field_0x48) = 0; /*0x4b4f99*/
  }
  (*(void (__thiscall **)(int *))(this->DropListClass_field_0x50 + 36))(&this->DropListClass_field_0x50); /*0x4b4fa3*/
  return LinkClass::Destroy((GadgetClass *)this); /*0x4b4fad*/
}



// ==== 0x004B4FB0  DropListClass::SetFocus  this=DropListClass  sig=csp ====
int __thiscall DropListClass::SetFocus(DropListClass *this, wchar_t *Source)
{
  wcsncpy((wchar_t *)this->DropListClass_field_0x34, Source, this->DropListClass_field_0x38); /*0x4b4fc1*/
  (*(void (__thiscall **)(DropListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x4b4fcd*/
  return (*(int (__thiscall **)(char *, wchar_t *))(this->q02C + 136))((char *)this + 176, Source); /*0x4b4fe3*/
}



// ==== 0x004B4FF0  DropListClass::KillFocus  this=DropListClass  sig=csp ====
int __thiscall DropListClass::KillFocus(DropListClass *this)
{
  return (*(int (__thiscall **)(char *))(this->q02C + 156))((char *)this + 176);
}



// ==== 0x004B5010  DropListClass::GetItemData  this=DropListClass  sig=csp ====
int __thiscall DropListClass::GetItemData(DropListClass *this)
{
  return (*(int (__thiscall **)(char *))(this->q02C + 152))((char *)this + 176);
}



// ==== 0x004B5030  DropListClass::OnKeyUp  this=DropListClass  sig=csp ====
wchar_t *__userpurge DropListClass::OnKeyUp@<eax>(DropListClass *this, int a2@<ebx>, unsigned int a3)
{
  int v3; // ecx
  wchar_t **v4; // edi
  int *v5; // esi
  wchar_t *result; // eax
  int v7; // ebx
  int v8; // eax
  const wchar_t *v9; // eax

  v4 = (wchar_t **)v3; /*0x4b5032*/
  v5 = (int *)(v3 + 176); /*0x4b503a*/
  result = (wchar_t *)(*(int (__thiscall **)(int))(*(_DWORD *)(v3 + 176) + 148))(v3 + 176); /*0x4b5042*/
  if ( this >= (DropListClass *)result ) /*0x4b504e*/
  {
    *v4[13] = 0; /*0x4b5089*/
  }
  else
  {
    (*(void (__thiscall **)(int *, DropListClass *, int))(*v5 + 184))(v5, this, a2); /*0x4b5056*/
    v7 = *v5; /*0x4b505e*/
    v8 = (*((int (__thiscall **)(wchar_t **))*v4 + 41))(v4); /*0x4b5062*/
    v9 = (const wchar_t *)(*(int (__thiscall **)(int *, int))(v7 + 160))(v5, v8); /*0x4b506b*/
    return wcscpy(v4[13], v9); /*0x4b5076*/
  }
  return result; /*0x4b507f*/
}



// ==== 0x004B50A0  DropListClass::AddItem  this=DropListClass  sig=csp ====
char __thiscall DropListClass::AddItem(DropListClass *this)
{
  char result; // al

  result = this->DropListClass_field_0x48; /*0x4b50a3*/
  if ( result ) /*0x4b50a8*/
  {
    result = (*(int (__thiscall **)(char *))(this->q02C + 36))((char *)this + 176); /*0x4b50b6*/
    LOBYTE(this->DropListClass_field_0x48) = 0; /*0x4b50b9*/
  }
  return result; /*0x4b50bd*/
}



// ==== 0x004B50C0  DropListClass::Open  this=DropListClass  sig=csp ====
__int16 __thiscall DropListClass::Open(DropListClass *this, char a2, _DWORD *a3, char *a4)
{
  int DropListClass_field_0x24; // eax
  int DropListClass_field_0x10; // edx
  int DropListClass_field_0x14; // eax
  int v8; // ebp
  int DropListClass_field_0x4C; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  const wchar_t *v13; // eax
  size_t DropListClass_field_0x38; // [esp-4h] [ebp-Ch]

  if ( a4 == (char *)&this->DropListClass_field_0x50 && (a2 & 4) != 0 ) /*0x4b50d8*/
  {
    if ( LOBYTE(this->DropListClass_field_0x48) ) /*0x4b50da*/
    {
      (*(void (__thiscall **)(char *))(this->q02C + 36))((char *)this + 176); /*0x4b50ed*/
      DropListClass_field_0x24 = this->DropListClass_field_0x24; /*0x4b50f0*/
      LOBYTE(this->DropListClass_field_0x48) = 0; /*0x4b50f3*/
      BYTE1(DropListClass_field_0x24) |= 0x80u; /*0x4b50f7*/
      *a3 = DropListClass_field_0x24; /*0x4b50fa*/
    }
    else
    {
      DropListClass_field_0x10 = this->DropListClass_field_0x10; /*0x4b5101*/
      DropListClass_field_0x14 = this->DropListClass_field_0x14; /*0x4b5104*/
      v8 = this->q02C; /*0x4b5108*/
      *((_DWORD *)this + 47) = this->DropListClass_field_0x0C; /*0x4b510e*/
      DropListClass_field_0x4C = this->DropListClass_field_0x4C; /*0x4b5114*/
      this->q030 = DropListClass_field_0x10 + 18; /*0x4b511b*/
      v10 = *(_DWORD *)this->__pad_0; /*0x4b5121*/
      *((_DWORD *)this + 50) = DropListClass_field_0x4C; /*0x4b5129*/
      *((_DWORD *)this + 49) = DropListClass_field_0x14; /*0x4b5131*/
      v11 = (*(int (__thiscall **)(DropListClass *))(v10 + 24))(this); /*0x4b5137*/
      (*(void (__thiscall **)(char *, int))(v8 + 12))((char *)this + 176, v11); /*0x4b513d*/
      (*(void (__thiscall **)(char *))(this->q02C + 72))((char *)this + 176); /*0x4b5144*/
      LOBYTE(this->DropListClass_field_0x48) = 1; /*0x4b5148*/
    }
  }
  LOWORD(v12) = (_WORD)a4; /*0x4b514d*/
  if ( a4 == (char *)this + 176 ) /*0x4b5159*/
  {
    DropListClass_field_0x38 = this->DropListClass_field_0x38; /*0x4b5160*/
    v13 = (const wchar_t *)(*(int (__thiscall **)(char *))(this->q02C + 156))((char *)this + 176); /*0x4b5161*/
    wcsncpy((wchar_t *)this->DropListClass_field_0x34, v13, DropListClass_field_0x38); /*0x4b516c*/
    (*(void (__thiscall **)(DropListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x4b5178*/
    v12 = this->DropListClass_field_0x24; /*0x4b517b*/
    BYTE1(v12) |= 0x80u; /*0x4b517e*/
    *a3 = v12; /*0x4b5181*/
  }
  return v12; /*0x4b5183*/
}



// ==== 0x004B5210  TechnoClass::CopyStateFrom  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CopyStateFrom(TechnoClass *this, int a2)
{
  if ( this == (TechnoClass *)a2 ) /*0x4b521a*/
    return (int)this; /*0x4b521c*/
  LinkedList::MoveNode((LinkedList *)this, (void *)a2); /*0x4b5228*/
  this->? = *(void **)(a2 + 12); /*0x4b5236*/
  this->? = *(_DWORD *)(a2 + 16); /*0x4b523c*/
  this->? = *(_DWORD *)(a2 + 20); /*0x4b5242*/
  this->? = *(_DWORD *)(a2 + 24); /*0x4b5248*/
  LOBYTE(this->?) = *(_BYTE *)(a2 + 28); /*0x4b524e*/
  BYTE1(this->?) = *(_BYTE *)(a2 + 29); /*0x4b5254*/
  BYTE2(this->?) = *(_BYTE *)(a2 + 30); /*0x4b525a*/
  this->? = *(void **)(a2 + 32); /*0x4b5260*/
  this->? = *(_DWORD *)(a2 + 36); /*0x4b5266*/
  this->? = *(_DWORD *)(a2 + 40); /*0x4b526c*/
  this->? = *(_DWORD *)(a2 + 44); /*0x4b5272*/
  this->? = *(ObjectClass **)(a2 + 48); /*0x4b5278*/
  this->? = *(TagClass **)(a2 + 52); /*0x4b527e*/
  this->? = *(BombClass **)(a2 + 56); /*0x4b5284*/
  this->?[0] = *(_DWORD *)(a2 + 60); /*0x4b528a*/
  this->?[1] = *(_DWORD *)(a2 + 64); /*0x4b5290*/
  this->?[2] = *(_DWORD *)(a2 + 68); /*0x4b529c*/
  sub_4B5780((int)&this->?, a2 + 176); /*0x4b52a2*/
  this->?[0] = *(_DWORD *)(a2 + 212); /*0x4b52aa*/
  this->?[1] = *(_DWORD *)(a2 + 216); /*0x4b52b0*/
  this->?[2] = *(_DWORD *)(a2 + 220); /*0x4b52b6*/
  this->?[0] = *(_DWORD *)(a2 + 224); /*0x4b52c3*/
  sub_4B5830((ObjectClass *)&this->?[1], (_DWORD *)(a2 + 228)); /*0x4b52c6*/
  this->flashing[1] = *(_DWORD *)(a2 + 244); /*0x4b52ce*/
  this->animation[0] = *(_DWORD *)(a2 + 248); /*0x4b52d4*/
  this->animation[1] = *(_DWORD *)(a2 + 252); /*0x4b52da*/
  this->animation[2] = *(_DWORD *)(a2 + 256); /*0x4b52e0*/
  LOBYTE(this->animation[3]) = *(_BYTE *)(a2 + 260); /*0x4b52e9*/
  BlitterList::CopyEntry((int)&this->animation[4], a2 + 264); /*0x4b52f0*/
  BlitterList::CopyEntry((int)this->idleActionTimer, a2 + 360); /*0x4b5302*/
  sub_4B56E0((int)&this->__pad_1C4[4], a2 + 456); /*0x4b5314*/
  this->owner = *(HouseClass **)(a2 + 540); /*0x4b531f*/
  this->cloakState = *(_DWORD *)(a2 + 544); /*0x4b532b*/
  LOBYTE(this->?[3]) = *(_BYTE *)(a2 + 72); /*0x4b5334*/
  this->?[4] = *(_DWORD *)(a2 + 76); /*0x4b5343*/
  sub_4B5780((int)this->?, a2 + 80); /*0x4b5346*/
  *(_DWORD *)&this->? = *(_DWORD *)(a2 + 116); /*0x4b534f*/
  this->? = *(_DWORD *)(a2 + 120); /*0x4b5355*/
  LOBYTE(this->?) = *(_BYTE *)(a2 + 124); /*0x4b535b*/
  BYTE1(this->?) = *(_BYTE *)(a2 + 125); /*0x4b5361*/
  *(_DWORD *)&this->? = *(_DWORD *)(a2 + 128); /*0x4b5367*/
  this->? = *(_BYTE *)(a2 + 132); /*0x4b536d*/
  this->? = *(AnimClass **)(a2 + 136); /*0x4b5373*/
  *(_DWORD *)&this->? = *(_DWORD *)(a2 + 140); /*0x4b5379*/
  this->? = *(_BYTE *)(a2 + 144); /*0x4b537f*/
  this->? = *(_DWORD *)(a2 + 148); /*0x4b5385*/
  *(_DWORD *)&this->? = *(_DWORD *)(a2 + 152); /*0x4b538b*/
  LOBYTE(this->?[0]) = *(_BYTE *)(a2 + 156); /*0x4b5391*/
  this->?[1] = *(_DWORD *)(a2 + 160); /*0x4b5397*/
  LOBYTE(this->?[2]) = *(_BYTE *)(a2 + 164); /*0x4b539d*/
  BYTE1(this->?[2]) = *(_BYTE *)(a2 + 165); /*0x4b53a3*/
  this->? = *(void **)(a2 + 168); /*0x4b53a9*/
  LOBYTE(this->?) = *(_BYTE *)(a2 + 172); /*0x4b53af*/
  (*(void (__thiscall **)(int *, TechnoClass *))(this->? + 132))(&this->?, this); /*0x4b53b7*/
  (*(void (__thiscall **)(int *, TechnoClass *))(this->?[0] + 132))(this->?, this); /*0x4b53c2*/
  return (int)this; /*0x4b521e*/
}



// ==== 0x004B53E0  EditClass::method_4B53E0  this=EditClass  sig=csp ====
int __thiscall sub_4B53E0(EditClass *this, int a2)
{
  int v3; // eax

  ControlClass::CtorFromData((ControlClass *)this, a2); /*0x4b53eb*/
  *(this + 11) = *(EditClass *)(a2 + 44); /*0x4b53f6*/
  *(this + 12) = *(EditClass *)(a2 + 48); /*0x4b53fc*/
  *(this + 13) = *(EditClass *)(a2 + 52); /*0x4b5402*/
  *(this + 14) = *(EditClass *)(a2 + 56); /*0x4b5408*/
  *(this + 15) = *(EditClass *)(a2 + 60); /*0x4b540e*/
  *(this + 16) = *(EditClass *)(a2 + 64); /*0x4b5414*/
  *(this + 17) = *(EditClass *)(a2 + 68); /*0x4b541a*/
  *this = (EditClass)&EditClass::`vftable'; /*0x4b541d*/
  *((_BYTE *)this + 72) = *(_BYTE *)(a2 + 72); /*0x4b5429*/
  *(this + 19) = *(EditClass *)(a2 + 76); /*0x4b5432*/
  ControlClass::CtorFromData((ControlClass *)this + 5, a2 + 80); /*0x4b5435*/
  *((_BYTE *)this + 124) = *(_BYTE *)(a2 + 124); /*0x4b5443*/
  *((_BYTE *)this + 125) = *(_BYTE *)(a2 + 125); /*0x4b5449*/
  *(this + 32) = *(EditClass *)(a2 + 128); /*0x4b544f*/
  *((_DWORD *)this + 20) = &ToggleClass::`vftable'; /*0x4b5452*/
  *((_BYTE *)this + 132) = *(_BYTE *)(a2 + 132); /*0x4b545c*/
  *(this + 34) = *(EditClass *)(a2 + 136); /*0x4b5462*/
  *(this + 35) = *(EditClass *)(a2 + 140); /*0x4b5468*/
  *((_BYTE *)this + 144) = *(_BYTE *)(a2 + 144); /*0x4b546e*/
  *(this + 37) = *(EditClass *)(a2 + 148); /*0x4b5474*/
  *(this + 38) = *(EditClass *)(a2 + 152); /*0x4b547a*/
  *((_BYTE *)this + 156) = *(_BYTE *)(a2 + 156); /*0x4b5480*/
  *(this + 40) = *(EditClass *)(a2 + 160); /*0x4b5486*/
  *((_BYTE *)this + 164) = *(_BYTE *)(a2 + 164); /*0x4b548c*/
  *((_BYTE *)this + 165) = *(_BYTE *)(a2 + 165); /*0x4b5492*/
  *(this + 42) = *(EditClass *)(a2 + 168); /*0x4b5498*/
  *((_BYTE *)this + 172) = *(_BYTE *)(a2 + 172); /*0x4b54a4*/
  *((_DWORD *)this + 20) = &ShapeButtonClass::`vftable'; /*0x4b54a9*/
  sub_557380((int)(this + 44), a2 + 176); /*0x4b54af*/
  v3 = *((_DWORD *)this + 44); /*0x4b54b4*/
  *this = (EditClass)&DropListClass::`vftable'; /*0x4b54b9*/
  (*(void (__thiscall **)(EditClass *, EditClass *))(v3 + 132))(this + 44, this); /*0x4b54bf*/
  (*(void (__thiscall **)(EditClass *, EditClass *))(*((_DWORD *)this + 20) + 132))(this + 20, this); /*0x4b54ca*/
  return (int)this; /*0x4b54d3*/
}



// ==== 0x004B54E0  DropListClass::RemoveItem  this=DropListClass  sig=csp ====
int __thiscall DropListClass::RemoveItem(DropListClass *this, int a2, int a3)
{
  Rect_Point::Set((GadgetClass *)this, a2, a3); /*0x4b54ef*/
  (*(void (__thiscall **)(char *, int, int))(this->q02C + 100))( /*0x4b550e*/
    (char *)this + 176,
    a2,
    a3 + *(__int16 *)(*((_DWORD *)this + 42) + 4));
  return (*(int (__thiscall **)(int *, int, int))(this->DropListClass_field_0x50 + 100))( /*0x4b5521*/
           &this->DropListClass_field_0x50,
           a2 + this->DropListClass_field_0x14,
           a3);
}



// ==== 0x004B5530  DropListClass::OnKeyDown  this=DropListClass  sig=csp ====
void __thiscall DropListClass::OnKeyDown(DropListClass *this, wchar_t *String1)
{
  int v3; // edi
  const wchar_t *v4; // eax

  if ( String1 ) /*0x4b553c*/
  {
    v3 = 0; /*0x4b5540*/
    if ( (*(int (__thiscall **)(DropListClass *))(*(_DWORD *)this->__pad_0 + 176))(this) > 0 ) /*0x4b554a*/
    {
      while ( 1 ) /*0x4b5557*/
      {
        v4 = (const wchar_t *)(*(int (__thiscall **)(char *, int))(this->q02C + 160))( /*0x4b5557*/
                                (char *)this + 176,
                                v3);
        if ( !_wcsicmp(String1, v4) ) /*0x4b555f*/
          break; /*0x4b555f*/
        if ( ++v3 >= (*(int (__thiscall **)(DropListClass *))(*(_DWORD *)this->__pad_0 + 176))(this) ) /*0x4b5578*/
          return; /*0x4b5578*/
      }
      (*(void (__thiscall **)(DropListClass *, int))(*(_DWORD *)this->__pad_0 + 172))(this, v3); /*0x4b5586*/
    }
  }
}



// ==== 0x004B55A0  EditClass::COMStub  this=EditClass  sig=csp ====
int __thiscall DropListClass::COMStub(EditClass *this)
{
  return *((_DWORD *)this + 13); /*0x4b55a3*/
}



// ==== 0x004B55B0  DropListClass::ScrollUp  this=DropListClass  sig=csp ====
int __thiscall DropListClass::ScrollUp(DropListClass *this)
{
  return (*(int (__thiscall **)(char *))(this->q02C + 148))((char *)this + 176);
}



// ==== 0x004B55D0  DropListClass::ScrollDown  this=DropListClass  sig=csp ====
int __thiscall DropListClass::ScrollDown(DropListClass *this, int a2)
{
  return (*(int (__thiscall **)(char *, int))(this->q02C + 160))((char *)this + 176, a2); /*0x4b55e7*/
}



// ==== 0x004B55F0  DropListClass::QueryInterface  this=DropListClass  sig=csp ====
_DWORD *__thiscall DropListClass::QueryInterface(DropListClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &DropListClass::`vftable'; /*0x4b55f9*/
  ListClass::Destruct((ListClass *)((char *)this + 176)); /*0x4b55ff*/
  ShapeButtonClass::Destructor((int)&this->DropListClass_field_0x50); /*0x4b5607*/
  DropListClass::Constructor(this); /*0x4b560e*/
  if ( (a2 & 1) != 0 ) /*0x4b5618*/
    __3_YAXPAX_Z(this); /*0x4b561b*/
  return this->__pad_0; /*0x4b5625*/
}



// ==== 0x004B5630  BlitterList::CopyEntry  this=BlitterList  sig=csp ====
int __thiscall sub_4B5630(int this, int a2)
{
  LinkedList::MoveNode((void *)this, (void *)a2); /*0x4b5639*/
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12); /*0x4b5641*/
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16); /*0x4b5647*/
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20); /*0x4b564d*/
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24); /*0x4b5653*/
  *(_BYTE *)(this + 28) = *(_BYTE *)(a2 + 28); /*0x4b5659*/
  *(_BYTE *)(this + 29) = *(_BYTE *)(a2 + 29); /*0x4b565f*/
  *(_BYTE *)(this + 30) = *(_BYTE *)(a2 + 30); /*0x4b5665*/
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32); /*0x4b566b*/
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 36); /*0x4b5671*/
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40); /*0x4b5677*/
  *(_BYTE *)(this + 44) = *(_BYTE *)(a2 + 44); /*0x4b567d*/
  *(_BYTE *)(this + 45) = *(_BYTE *)(a2 + 45); /*0x4b5683*/
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48); /*0x4b5689*/
  *(_BYTE *)(this + 52) = *(_BYTE *)(a2 + 52); /*0x4b568f*/
  *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56); /*0x4b5695*/
  *(_DWORD *)(this + 60) = *(_DWORD *)(a2 + 60); /*0x4b569b*/
  *(_BYTE *)(this + 64) = *(_BYTE *)(a2 + 64); /*0x4b56a1*/
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68); /*0x4b56a7*/
  *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72); /*0x4b56ad*/
  *(_BYTE *)(this + 76) = *(_BYTE *)(a2 + 76); /*0x4b56b3*/
  *(_DWORD *)(this + 80) = *(_DWORD *)(a2 + 80); /*0x4b56b9*/
  *(_BYTE *)(this + 84) = *(_BYTE *)(a2 + 84); /*0x4b56bf*/
  *(_BYTE *)(this + 85) = *(_BYTE *)(a2 + 85); /*0x4b56c5*/
  *(_DWORD *)(this + 88) = *(_DWORD *)(a2 + 88); /*0x4b56cb*/
  *(_BYTE *)(this + 92) = *(_BYTE *)(a2 + 92); /*0x4b56d1*/
  return this; /*0x4b56d6*/
}



// ==== 0x004B56E0  ObjectClass::method_4B56E0  this=ObjectClass  sig=csp ====
int __thiscall sub_4B56E0(int this, int a2)
{
  LinkedList::MoveNode((void *)this, (void *)a2); /*0x4b56e9*/
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12); /*0x4b56f1*/
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16); /*0x4b56f7*/
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20); /*0x4b56fd*/
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24); /*0x4b5703*/
  *(_BYTE *)(this + 28) = *(_BYTE *)(a2 + 28); /*0x4b5709*/
  *(_BYTE *)(this + 29) = *(_BYTE *)(a2 + 29); /*0x4b570f*/
  *(_BYTE *)(this + 30) = *(_BYTE *)(a2 + 30); /*0x4b5715*/
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32); /*0x4b571b*/
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 36); /*0x4b5721*/
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40); /*0x4b5727*/
  *(_BYTE *)(this + 44) = *(_BYTE *)(a2 + 44); /*0x4b572d*/
  *(_BYTE *)(this + 45) = *(_BYTE *)(a2 + 45); /*0x4b5733*/
  *(_BYTE *)(this + 46) = *(_BYTE *)(a2 + 46); /*0x4b5739*/
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48); /*0x4b573f*/
  *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52); /*0x4b5745*/
  *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56); /*0x4b574b*/
  *(_DWORD *)(this + 60) = *(_DWORD *)(a2 + 60); /*0x4b5751*/
  *(_DWORD *)(this + 64) = *(_DWORD *)(a2 + 64); /*0x4b5757*/
  *(_BYTE *)(this + 68) = *(_BYTE *)(a2 + 68); /*0x4b575d*/
  *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72); /*0x4b5763*/
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76); /*0x4b5769*/
  *(_DWORD *)(this + 80) = *(_DWORD *)(a2 + 80); /*0x4b576f*/
  return this; /*0x4b5774*/
}



// ==== 0x004B5780  ObjectClass::method_4B5780  this=ObjectClass  sig=csp ====
int __thiscall sub_4B5780(int this, int a2)
{
  LinkedList::MoveNode((void *)this, (void *)a2); /*0x4b5789*/
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12); /*0x4b5791*/
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16); /*0x4b5797*/
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20); /*0x4b579d*/
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24); /*0x4b57a3*/
  *(_BYTE *)(this + 28) = *(_BYTE *)(a2 + 28); /*0x4b57a9*/
  *(_BYTE *)(this + 29) = *(_BYTE *)(a2 + 29); /*0x4b57af*/
  *(_BYTE *)(this + 30) = *(_BYTE *)(a2 + 30); /*0x4b57b5*/
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32); /*0x4b57bb*/
  return this; /*0x4b57c0*/
}



// ==== 0x004B57D0  EditClass::QueryInterface  this=EditClass  sig=csp ====
_DWORD *__thiscall EditClass::QueryInterface(EditClass *this, char a2)
{
  DropListClass::Constructor((DropListClass *)this); /*0x4b57d3*/
  if ( (a2 & 1) != 0 ) /*0x4b57dd*/
    __3_YAXPAX_Z(this); /*0x4b57e0*/
  return this; /*0x4b57ea*/
}



// ==== 0x004B57F0  ShapeButtonClass::QueryInterface  this=ShapeButtonClass  sig=csp ====
void *__thiscall ShapeButtonClass_Destru::QueryInterface(ShapeButtonClass *this, char a2)
{
  ShapeButtonClass::Destructor((int)this); /*0x4b57f3*/
  if ( (a2 & 1) != 0 ) /*0x4b57fd*/
    __3_YAXPAX_Z(this); /*0x4b5800*/
  return this; /*0x4b580a*/
}



// ==== 0x004B5810  ToggleClass::QueryInterface  this=ToggleClass  sig=csp ====
_DWORD *__thiscall ToggleClass::QueryInterface(ToggleClass *this, char a2)
{
  GadgetClass::Dtor((GadgetClass *)this); /*0x4b5813*/
  if ( (a2 & 1) != 0 ) /*0x4b581d*/
    __3_YAXPAX_Z(this); /*0x4b5820*/
  return this->__pad_0; /*0x4b582a*/
}



// ==== 0x004B5830  ObjectClass::method_4B5830  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_4B5830(ObjectClass *this, _DWORD *a2)
{
  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  if ( this == (ObjectClass *)a2 ) /*0x4b583a*/
    return &this->AbstractClass; /*0x4b583a*/
  (*((void (__thiscall **)(ObjectClass *))this->AbstractClass + 3))(this); /*0x4b583e*/
  v3 = (void *)a2[2]; /*0x4b5841*/
  this->? = v3; /*0x4b5846*/
  if ( !v3 ) /*0x4b5849*/
  {
    this->? = 0; /*0x4b588a*/
    BYTE1(this->?) = 0; /*0x4b5891*/
    return &this->AbstractClass; /*0x4b5895*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (_DWORD)v3); /*0x4b5853*/
  this->? = v4; /*0x4b585b*/
  if ( !v4 ) /*0x4b5860*/
    return &this->AbstractClass; /*0x4b5860*/
  vtable2 = this->?; /*0x4b5862*/
  v6 = 0; /*0x4b5865*/
  BYTE1(this->?) = 1; /*0x4b5869*/
  if ( (int)vtable2 <= 0 ) /*0x4b586d*/
    return &this->AbstractClass; /*0x4b586d*/
  do /*0x4b5881*/
  {
    *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x4b5878*/
    ++v6; /*0x4b587e*/
  }
  while ( v6 < (int)this->? ); /*0x4b5881*/
  return &this->AbstractClass; /*0x4b5885*/
}



// ==== 0x004B58A0  sub_4B58A0  this=-  sig=ida-proto ====
void sub_4B58A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4b58ac*/
  dbl_8A0808 = Math::Sqrt(v0 + v0); /*0x4b58be*/
}



// ==== 0x004B58D0  sub_4B58D0  this=-  sig=ida-proto ====
void sub_4B58D0()
{
  dbl_8A0858 = dbl_8A0808 / 60.0; /*0x4b58dc*/
}



// ==== 0x004B58F0  sub_4B58F0  this=-  sig=ida-proto ====
void sub_4B58F0()
{
  dbl_8A0840 = 1.0 / dbl_8A0858; /*0x4b58fc*/
}



// ==== 0x004B5910  sub_4B5910  this=-  sig=ida-proto ====
void sub_4B5910()
{
  dbl_8A0838 = 0.0174532925199433 * 45.0; /*0x4b591c*/
}



// ==== 0x004B5930  sub_4B5930  this=-  sig=ida-proto ====
void sub_4B5930()
{
  dbl_8A0810 = 0.0174532925199433 * 60.0; /*0x4b593c*/
}



// ==== 0x004B5950  sub_4B5950  this=-  sig=ida-proto ====
void sub_4B5950()
{
  dbl_8A07E8 = 0.0174532925199433 * 90.0; /*0x4b595c*/
}



// ==== 0x004B5970  sub_4B5970  this=-  sig=ida-proto ====
__int64 sub_4B5970()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A07E8 - dbl_8A0810); /*0x4b5982*/
  result = Math::RoundToInt(v0 * dbl_8A0808 * 0.5); /*0x4b5996*/
  dword_8A0860 = result; /*0x4b599b*/
  return result; /*0x4b59a0*/
}



// ==== 0x004B59B0  sub_4B59B0  this=-  sig=ida-proto ====
void sub_4B59B0()
{
  dbl_8A0818 = Math::ArcTan((double)dword_8A0860 * 0.00390625); /*0x4b59c7*/
}



// ==== 0x004B59E0  sub_4B59E0  this=-  sig=ida-proto ====
void sub_4B59E0()
{
  dbl_8A0830 = Math::ArcTan((double)(2 * dword_8A0860) / dbl_8A0808); /*0x4b5a02*/
}



// ==== 0x004B5A10  sub_4B5A10  this=-  sig=ida-proto ====
__int64 sub_4B5A10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0860) + 0.5); /*0x4b5a2b*/
  dword_8A0854 = result; /*0x4b5a30*/
  return result; /*0x4b5a36*/
}



// ==== 0x004B5A40  sub_4B5A40  this=-  sig=ida-proto ====
int sub_4B5A40()
{
  word_8A0800 = 0; /*0x4b5a42*/
  word_8A0802 = 0; /*0x4b5a48*/
  return 0; /*0x4b5a4e*/
}



// ==== 0x004B5A50  sub_4B5A50  this=-  sig=ida-proto ====
int sub_4B5A50()
{
  dword_8A0820 = 0; /*0x4b5a52*/
  dword_8A0824 = 0; /*0x4b5a57*/
  dword_8A0828 = 0; /*0x4b5a5c*/
  return 0; /*0x4b5a61*/
}



// ==== 0x004B5A70  sub_4B5A70  this=-  sig=ida-proto ====
int sub_4B5A70()
{
  dword_8A0850 = 0; /*0x4b5a75*/
  dword_8A0848 = 128; /*0x4b5a7f*/
  dword_8A084C = 128; /*0x4b5a84*/
  return 128; /*0x4b5a89*/
}



// ==== 0x004B5A90  sub_4B5A90  this=-  sig=ida-proto ====
int sub_4B5A90()
{
  dword_8A07F0 = 0; /*0x4b5a92*/
  dword_8A07F4 = 0; /*0x4b5a97*/
  dword_8A07F8 = 0; /*0x4b5a9c*/
  dword_8A07FC = 0; /*0x4b5aa1*/
  return 0; /*0x4b5aa6*/
}



// ==== 0x004B5AB0  DropPodLocomotionClass::SmallFunc_4B5AB0  this=DropPodLocomotionClass  sig=csp ====
int __thiscall SmallFunc_4B5AB0(DropPodLocomotionClass *this)
{
  LocomotionClass::Init((LocomotionClass *)this); /*0x4b5ab3*/
  this->IsOutOfMap = 0; /*0x4b5abd*/
  this->DestinationCoords[0] = dword_8A0820; /*0x4b5ac6*/
  this->DestinationCoords[1] = dword_8A0824; /*0x4b5ace*/
  this->DestinationCoords[2] = dword_8A0828; /*0x4b5ad7*/
  this->Piggybackee = 0; /*0x4b5ada*/
  *(_DWORD *)this->LocomotionClass = &DropPodLocomotionClass::`vftable'; /*0x4b5add*/
  *(_DWORD *)&this->LocomotionClass[4] = &DropPodLocomotionClass::`vftable'; /*0x4b5ae3*/
  *(_DWORD *)this->__pad_18 = &DropPodLocomotionClass::`vftable'; /*0x4b5aea*/
  return (int)this->LocomotionClass; /*0x4b5af3*/
}



// ==== 0x004B5B30  JumpjetLocomotionClass::StubReturnTrue_1  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::StubReturnTrue_1(JumpjetLocomotionClass *this)
{
  return 1; /*0x4b5b32*/
}



// ==== 0x004B5B40  JumpjetLocomotionClass::GetSpeedCoordinate  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetSpeedCoordinate(JumpjetLocomotionClass *this, _DWORD *a2)
{
  float Climb; // edx
  float Crash; // eax

  Climb = this->Climb; /*0x4b5b4d*/
  Crash = this->Crash; /*0x4b5b50*/
  *a2 = this->Speed; /*0x4b5b55*/
  *((float *)a2 + 1) = Climb; /*0x4b5b57*/
  *((float *)a2 + 2) = Crash; /*0x4b5b5a*/
  return a2; /*0x4b5b5f*/
}



// ==== 0x004B5B70  DropPodLocomotionClass::ILoco_Process  this=DropPodLocomotionClass  sig=csp ====
char __stdcall DroppodLocomotionClass::ILoco_Process(DropPodLocomotionClass *this)
{
  double v1; // st7
  FootClass *Owner; // ecx
  int v4; // esi
  int v5; // eax
  double v6; // rax
  double v7; // st7
  int v8; // eax
  FootClass *v9; // ecx
  int v10; // eax
  FootClass *v11; // esi
  char *v12; // ebx
  int *locomotor; // ebp
  AnimClass *v14; // esi
  void *v15; // eax
  AnimClass *v17; // eax
  AnimClass *v18; // eax
  AnimClass *v19; // eax
  _DWORD *v20; // esi
  AnimClass *v21; // ebp
  int Index; // eax
  CellClass *v23; // eax
  int ClosestObjectCell; // eax
  int *v25; // eax
  unsigned int v26; // ebp
  unsigned int v27; // eax
  AnimClass *v28; // edi
  void *WarheadVersusMultiplier; // eax
  double v30; // [esp-8h] [ebp-48h]
  void *v31; // [esp-8h] [ebp-48h]
  void *v32; // [esp-8h] [ebp-48h]
  double v33; // [esp+10h] [ebp-30h] BYREF
  int v34[2]; // [esp+1Ch] [ebp-24h] BYREF
  int v35; // [esp+24h] [ebp-1Ch]
  int v36; // [esp+28h] [ebp-18h] BYREF
  int v37; // [esp+2Ch] [ebp-14h]
  int v38; // [esp+30h] [ebp-10h]
  int v39[3]; // [esp+34h] [ebp-Ch] BYREF
  DropPodLocomotionClass *thisa; // [esp+44h] [ebp+4h]

  Owner = this->?; /*0x4b5b7b*/
  v36 = Owner->?[0]; /*0x4b5b88*/
  v37 = Owner->?[1]; /*0x4b5b8f*/
  v4 = Owner->?[2]; /*0x4b5b93*/
  v39[0] = v36; /*0x4b5b96*/
  v38 = v4; /*0x4b5b9a*/
  v39[1] = v37; /*0x4b5b9e*/
  v39[2] = v4; /*0x4b5ba2*/
  thisa = (DropPodLocomotionClass *)((*((int (__thiscall **)(FootClass *))Owner->TechnoClass + 114))(Owner) / 10 + 2); /*0x4b5bc9*/
  if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1452) > (int)thisa ) /*0x4b5bd5*/
    thisa = *(DropPodLocomotionClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1452); /*0x4b5bd7*/
  v30 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1456); /*0x4b5bf3*/
  if ( !this->__pad_18[0] ) /*0x4b5bdb*/
    *(double *)v34 = (double)v36; /*0x4b5c1c*/
  v33 = (double)(int)thisa; /*0x4b5bf4*/
  Math::ArcTan2(v30); /*0x4b5bf8*/
  LOWORD(v5) = Math::RoundToInt(v1); /*0x4b5c38*/
  v36 = v5; /*0x4b5c41*/
  v6 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1456); /*0x4b5c50*/
  *(double *)v34 = (double)v38; /*0x4b5c56*/
  Math::SinCos(v6); /*0x4b5c5c*/
  v7 = *(double *)v34 - v1 * v33; /*0x4b5c68*/
  LOWORD(v8) = Math::RoundToInt(v7); /*0x4b5c6c*/
  v9 = this->?; /*0x4b5c71*/
  v38 = v8; /*0x4b5c74*/
  v10 = (*((int (__thiscall **)(FootClass *))v9->TechnoClass + 114))(v9); /*0x4b5c7a*/
  v11 = this->?; /*0x4b5c80*/
  if ( v10 > 0 ) /*0x4b5c87*/
  {
    (*((void (__thiscall **)(FootClass *, int *))v11->TechnoClass + 109))(v11, &v36); /*0x4b5eaa*/
    v20 = *(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1444); /*0x4b5eb6*/
    if ( v20 ) /*0x4b5ebe*/
    {
      if ( !(*(_DWORD *)&stru_A8EB00.?[416] % 6) ) /*0x4b5ecf*/
      {
        v21 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b5edf*/
        if ( v21 ) /*0x4b5ee6*/
        {
          Index = AnimTypeClass::FindIndex(&stru_820320); /*0x4b5eed*/
          AnimClass::ctor(v21, *(void **)(FootClass_Array.?[3] + 4 * Index), v39, 0, 1, (void *)0x600, 0, 0); /*0x4b5f0f*/
        }
      }
      if ( !(*(_DWORD *)&stru_A8EB00.?[416] % 3) ) /*0x4b5f1f*/
      {
        v33 = 0.0; /*0x4b5f39*/
        v23 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &this->IsOutOfMap); /*0x4b5f41*/
        ClosestObjectCell = Object::FindClosestObjectCell((Object *)v23, &v33, 0, 0); /*0x4b5f48*/
        if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?->?, ClosestObjectCell) ) /*0x4b5f57*/
        {
          v25 = RandomCoordScatter((int *)&v33, (int *)&this->IsOutOfMap, v7, 85, 0); /*0x4b5f6d*/
          v26 = v20[51]; /*0x4b5f74*/
          v34[0] = *v25; /*0x4b5f7a*/
          v34[1] = v25[1]; /*0x4b5f86*/
          v35 = v25[2]; /*0x4b5f8d*/
          v27 = Random::State(&Randomizer_Global); /*0x4b5f91*/
          StartAudioControllerAt(*(_DWORD *)(v20[48] + 4 * (v27 % v26)), &v36, 0); /*0x4b5fa8*/
          PlaySoundEffectAt(v34, 2 * v20[41], &this->?->TechnoClass, v20[43], 1, 0); /*0x4b5fc7*/
          v28 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b5fd6*/
          if ( v28 ) /*0x4b5fdd*/
          {
            v32 = (void *)Return::HRESULT_Fail(v34[0], v34[1], v35); /*0x4b5ffe*/
            WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier(2 * v20[41], v20[43], 0, v34); /*0x4b6020*/
            AnimClass::ctor(v28, WarheadVersusMultiplier, v34, 0, 1, (void *)0x2600, v32, 0); /*0x4b6028*/
          }
        }
      }
    }
    return 1; /*0x4b6030*/
  }
  else
  {
    (*((void (__thiscall **)(FootClass *, _DWORD))v11->TechnoClass + 115))(v11, 0); /*0x4b5c92*/
    v36 = v11->?[0]; /*0x4b5ca4*/
    v37 = v11->?[1]; /*0x4b5cab*/
    v38 = v11->?[2]; /*0x4b5cb2*/
    (*((void (__thiscall **)(FootClass *))v11->TechnoClass + 53))(v11); /*0x4b5cba*/
    v12 = (char *)this - 4; /*0x4b5cc3*/
    (*(void (__stdcall **)(char *))(*((_DWORD *)this - 1) + 4))((char *)this - 4); /*0x4b5cc7*/
    locomotor = this->?->locomotor; /*0x4b5ccd*/
    if ( *locomotor ) /*0x4b5cd3*/
      (*(void (__stdcall **)(int))(*(_DWORD *)*locomotor + 8))(*locomotor); /*0x4b5cdd*/
    *locomotor = 0; /*0x4b5ce3*/
    (*(void (__stdcall **)(int *, int *))(this->? + 16))(&this->?, locomotor); /*0x4b5cee*/
    if ( (*((unsigned __int8 (__thiscall **)(FootClass *, int *, _DWORD))v11->TechnoClass + 54))(v11, &v36, 0) ) /*0x4b5cfc*/
    {
      v17 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b5dae*/
      if ( v17 ) /*0x4b5db8*/
        AnimClass::ctor( /*0x4b5dd8*/
          v17,
          *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 76),
          &v36,
          0,
          1,
          (void *)0x600,
          0,
          0);
      if ( this->__pad_18[0] ) /*0x4b5ddd*/
      {
        v18 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b5de9*/
        if ( v18 ) /*0x4b5df3*/
          AnimClass::ctor( /*0x4b5e16*/
            v18,
            *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 264) + 4),
            &v36,
            0,
            1,
            (void *)0x600,
            0,
            0);
      }
      else
      {
        v19 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b5e18*/
        if ( v19 ) /*0x4b5e22*/
          AnimClass::ctor( /*0x4b5e47*/
            v19,
            **(void ***)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 264),
            &v36,
            0,
            1,
            (void *)0x600,
            0,
            0);
      }
      (*((void (__thiscall **)(FootClass *, int))v11->TechnoClass + 73))(v11, 1); /*0x4b5e52*/
      (*((void (__thiscall **)(FootClass *, _DWORD))v11->TechnoClass + 115))(v11, 0); /*0x4b5e5e*/
      (*((void (__thiscall **)(FootClass *, _DWORD, int))v11->TechnoClass + 289))(v11, 0, 1); /*0x4b5e6c*/
      (*((void (__thiscall **)(FootClass *))v11->TechnoClass + 123))(v11); /*0x4b5e76*/
      (*((void (__thiscall **)(FootClass *, int *, _DWORD, _DWORD))v11->TechnoClass + 93))(v11, &dword_8A0820, 0, 0); /*0x4b5e89*/
    }
    else
    {
      PlaySoundEffectAt( /*0x4b5d28*/
        &v36,
        100,
        &this->?->TechnoClass,
        *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
        1,
        0);
      v14 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b5d37*/
      if ( v14 ) /*0x4b5d3e*/
      {
        v31 = (void *)Return::HRESULT_Fail(v36, v37, v38); /*0x4b5d64*/
        v15 = (void *)GetWarheadVersusMultiplier( /*0x4b5d8a*/
                        100,
                        *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
                        0,
                        &v36);
        AnimClass::ctor(v14, v15, &v36, 0, 1, (void *)0x2600, v31, 0); /*0x4b5d92*/
        (*(void (__stdcall **)(char *))(*(_DWORD *)v12 + 8))((char *)this - 4); /*0x4b5d9a*/
        return 1; /*0x4b5da6*/
      }
    }
    (*(void (__stdcall **)(char *))(*(_DWORD *)v12 + 8))((char *)this - 4); /*0x4b5e92*/
    return 1; /*0x4b5e95*/
  }
}



// ==== 0x004B6040  DropPodLocomotionClass::UpdateMovementPosition  this=DropPodLocomotionClass  sig=csp ====
void **__stdcall JumpjetLocomotionClass::UpdateMovementPosition(
        DropPodLocomotionClass *this,
        double VeteranCombat_low,
        int a3)
{
  double v3; // st7
  DropPodLocomotionClass *v4; // edi
  void **result; // eax
  int v7; // edx
  int v9; // eax
  int v11; // eax
  char v12; // al
  FootClass *Owner; // ecx
  FootClass *v14; // ecx
  double v15; // [esp-Ch] [ebp-28h]
  char *p_IsOutOfMap; // [esp-8h] [ebp-24h]
  double v17; // [esp-8h] [ebp-24h]
  int v19[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = this; /*0x4b604b*/
  result = *(void ***)&this->IsOutOfMap; /*0x4b604f*/
  _ESI = &this->IsOutOfMap; /*0x4b6052*/
  if ( result == (void **)dword_8A0820 ) /*0x4b6057*/
  {
    result = (void **)dword_8A0824; /*0x4b6060*/
    if ( this->DestinationCoords[0] == dword_8A0824 ) /*0x4b6067*/
    {
      result = (void **)dword_8A0828; /*0x4b6070*/
      if ( this->DestinationCoords[1] == dword_8A0828 ) /*0x4b6077*/
      {
        v7 = a3; /*0x4b6086*/
        p_IsOutOfMap = &this->IsOutOfMap; /*0x4b608c*/
        *(double *)_ESI = VeteranCombat_low; /*0x4b608d*/
        *((_DWORD *)_ESI + 2) = v7; /*0x4b6097*/
        v4->DestinationCoords[1] = Cell::GetGroundHeight(p_IsOutOfMap); /*0x4b609f*/
        v19[0] = *(_DWORD *)_ESI; /*0x4b60a6*/
        v19[1] = *((_DWORD *)_ESI + 1); /*0x4b60ad*/
        _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4b60b4*/
        v19[2] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1448) + *((_DWORD *)_ESI + 2); /*0x4b60c3*/
        __asm { fild dword ptr [eax+5A8h] } /*0x4b60cd*/
        v15 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1456); /*0x4b60da*/
        __asm { fstp [esp+28h+VeteranCombat_low] } /*0x4b60db*/
        Math::Sin(v15); /*0x4b60df*/
        __asm { fdivr [esp+28h+VeteranCombat_low] } /*0x4b60e4*/
        __asm { fiadd [esp+20h+var_C] }
        LOWORD(v9) = Math::RoundToInt(v3); /*0x4b60ef*/
        v19[0] = v9; /*0x4b60f4*/
        if ( !(unsigned __int8)IsCoordVisibleMap((ObjectClass *)&stru_87F5F0.__pad_58[416], v19) ) /*0x4b6102*/
        {
          v4->__pad_18[0] = 1; /*0x4b610c*/
          _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4b6110*/
          __asm { fild dword ptr [esi] } /*0x4b6115*/
          v17 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1456); /*0x4b6124*/
          __asm /*0x4b6125*/
          {
            fstp [esp+24h+var_14]
            fild dword ptr [eax+5A8h]
            fstp [esp+24h+VeteranCombat_low]
          }
          Math::Sin(v17); /*0x4b6133*/
          __asm { fdivr [esp+24h+VeteranCombat_low] } /*0x4b6138*/
          __asm { fsubr [esp+1Ch+var_14] }
          LOWORD(v11) = Math::RoundToInt(v3); /*0x4b6143*/
          v19[0] = v11; /*0x4b6148*/
        }
        (*((void (__thiscall **)(FootClass *, int *))v4->?->TechnoClass + 109))(v4->?, v19); /*0x4b6156*/
        v12 = (*((int (__thiscall **)(FootClass *, int *, int))v4->?->TechnoClass + 54))(v4->?, v19, 128); /*0x4b616b*/
        Owner = v4->?; /*0x4b6171*/
        if ( v12 ) /*0x4b6176*/
        {
          (*((void (__thiscall **)(FootClass *, int *))Owner->TechnoClass + 109))(Owner, v19); /*0x4b617f*/
          v14 = v4->?; /*0x4b6185*/
          LOWORD(this) = 0x8000; /*0x4b6193*/
          FacingClass::Set_SyncLog((char *)v14->?, &this); /*0x4b619a*/
          result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4b61a4*/
          if ( result ) /*0x4b61ae*/
            return AnimClass::ctor( /*0x4b61d1*/
                     (AnimClass *)result,
                     *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 852),
                     v19,
                     0,
                     1,
                     (void *)0x600,
                     0,
                     0);
        }
        else
        {
          return (*((void **(__thiscall **)(FootClass *, int *, int))Owner->TechnoClass + 54))(Owner, v19, 128); /*0x4b61ea*/
        }
      }
    }
  }
  return result; /*0x4b61d6*/
}



// ==== 0x004B6200  DropPodLocomotionClass::ddtor  this=DropPodLocomotionClass  sig=csp ====
int __stdcall DropPodLocomotionClass::ddtor(DropPodLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x4b6206*/
    return -2147467261; /*0x4b6208*/
  *(IID *)a2 = g_CLSID_DriveLocomotion; /*0x4b6216*/
  a2[3] = unk_7E9A7C; /*0x4b6230*/
  return 0; /*0x4b620d*/
}



// ==== 0x004B6240  DropPodLocomotionClass::BeginMove  this=DropPodLocomotionClass  sig=csp ====
int __stdcall DropPodLocomotionClass::BeginMove(DropPodLocomotionClass *this, int *pStm)
{
  int *v2; // edi
  int v3; // ebx
  ILocomotion *Piggybackee; // eax
  LPVOID *p_Piggybackee; // esi

  v2 = pStm; /*0x4b6247*/
  v3 = SwizzleManager::SaveLoad((int *)this->LocomotionClass, pStm); /*0x4b6252*/
  if ( v3 < 0 ) /*0x4b6256*/
    return v3; /*0x4b6256*/
  if ( this ) /*0x4b625a*/
  {
    this->Piggybackee = 0; /*0x4b625c*/
    *(_DWORD *)this->LocomotionClass = &DropPodLocomotionClass::`vftable'; /*0x4b6263*/
    *(_DWORD *)&this->LocomotionClass[4] = &DropPodLocomotionClass::`vftable'; /*0x4b6269*/
    *(_DWORD *)this->__pad_18 = &DropPodLocomotionClass::`vftable'; /*0x4b6270*/
  }
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(*v2 + 12))(v2, &pStm, 1, 0); /*0x4b6283*/
  if ( !(_BYTE)pStm ) /*0x4b628c*/
    return v3; /*0x4b62b8*/
  Piggybackee = this->Piggybackee; /*0x4b628e*/
  p_Piggybackee = (LPVOID *)&this->Piggybackee; /*0x4b6291*/
  if ( Piggybackee ) /*0x4b6296*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x4b629b*/
  *p_Piggybackee = 0; /*0x4b62a5*/
  return OleLoadFromStream((LPSTREAM)v2, &IID_ILocomotion, p_Piggybackee); /*0x4b62b1*/
}



// ==== 0x004B62C0  DropPodLocomotionClass::UpdateMovement  this=DropPodLocomotionClass  sig=csp ====
int __stdcall DropPodLocomotionClass::UpdateMovement(DropPodLocomotionClass *this, int *pPStm, int a3)
{
  IStream *v3; // esi
  DropPodLocomotionClass *v4; // edi
  int result; // eax
  int v6; // ecx
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v11; // edx

  v3 = (IStream *)pPStm; /*0x4b62c5*/
  v4 = this; /*0x4b62ca*/
  result = LoadIPersistStream((LocomotionClass *)this, pPStm, a3); /*0x4b62d1*/
  if ( result >= 0 ) /*0x4b62d8*/
  {
    if ( v4->Piggybackee ) /*0x4b62de*/
    {
      v6 = *(_DWORD *)v3->__pad_0; /*0x4b62e9*/
      LOBYTE(a3) = 1; /*0x4b62f5*/
      (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x4b62fa*/
      Piggybackee = v4->Piggybackee; /*0x4b62fd*/
      pPStm = 0; /*0x4b6300*/
      if ( Piggybackee ) /*0x4b630a*/
      {
        v8 = (**(int (__stdcall ***)(ILocomotion *, void *, DropPodLocomotionClass **))Piggybackee)( /*0x4b631b*/
               Piggybackee,
               &unk_820270,
               &this);
        if ( v8 >= 0 ) /*0x4b631f*/
        {
          v9 = (int *)this; /*0x4b6339*/
          if ( pPStm ) /*0x4b633f*/
            (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x4b6344*/
          pPStm = v9; /*0x4b6347*/
        }
        else
        {
          Function::Method_4B4D60((int *)&pPStm); /*0x4b6325*/
          pPStm = 0; /*0x4b632a*/
        }
        if ( v8 < 0 && v8 != -2147467262 ) /*0x4b6356*/
          WinAPI::Wrapper(v8); /*0x4b6359*/
      }
      v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x4b636a*/
      if ( pPStm ) /*0x4b6372*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x4b6377*/
      return v10; /*0x4b637a*/
    }
    else
    {
      v11 = *(_DWORD *)v3->__pad_0; /*0x4b6381*/
      LOBYTE(a3) = 0; /*0x4b638d*/
      return (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v11 + 16))(v3, &a3, 1, 0); /*0x4b6392*/
    }
  }
  return result; /*0x4b637c*/
}



// ==== 0x004B63A0  DropPodLocomotionClass::Stub6  this=DropPodLocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub6(DropPodLocomotionClass *this)
{
  ; /*0x4b63a0*/
}



// ==== 0x004B63B0  JumpjetLocomotionClass::StubReturnZero_3  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_3(JumpjetLocomotionClass *this, int a2)
{
  if ( !a2 ) /*0x4b63b6*/
    return -2147467261; /*0x4b63b8*/
  if ( this->? ) /*0x4b63c4*/
    return -2147467259; /*0x4b63eb*/
  this->? = a2; /*0x4b63d2*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x4b63d8*/
  return 0; /*0x4b63bd*/
}



// ==== 0x004B6400  JumpjetLocomotionClass::StubReturnZero_4  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_4(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int RefCount; // eax

  if ( !a2 ) /*0x4b6406*/
    return -2147467261; /*0x4b6408*/
  RefCount = this->?; /*0x4b6414*/
  if ( !RefCount ) /*0x4b6419*/
    return 1; /*0x4b6429*/
  *a2 = RefCount; /*0x4b641b*/
  this->? = 0; /*0x4b641d*/
  return 0; /*0x4b640d*/
}



// ==== 0x004B6440  JumpjetLocomotionClass::CheckBaseClassState  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::CheckBaseClassState(JumpjetLocomotionClass *this)
{
  return !(*(unsigned __int8 (__stdcall **)(char *))(*((_DWORD *)this - 5) + 16))((char *)this - 20) && this->?; /*0x4b645c*/
}



// ==== 0x004B6470  DropPodLocomotionClass::QueryInterface  this=DropPodLocomotionClass  sig=csp ====
int __stdcall DropPodLocomotionClass::QueryInterface(DropPodLocomotionClass *this, const void *a2, int *a3)
{
  int result; // eax
  char *pad_18; // eax

  result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x4b6482*/
  if ( result == -2147467262 ) /*0x4b648c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x4b649b*/
    {
      if ( this ) /*0x4b64a2*/
        pad_18 = this->__pad_18; /*0x4b64a4*/
      else
        pad_18 = 0; /*0x4b64a9*/
      *a3 = (int)pad_18; /*0x4b64ab*/
    }
    if ( *a3 ) /*0x4b64ae*/
    {
      (*(void (__stdcall **)(DropPodLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 4))(this); /*0x4b64c2*/
      return 0; /*0x4b64c5*/
    }
    else
    {
      return -2147467262; /*0x4b64b6*/
    }
  }
  return result; /*0x4b64b4*/
}



// ==== 0x004B64D0  DropPodLocomotionClass::SmallStub_4B64D0  this=DropPodLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmallStub_4B64D0(DropPodLocomotionClass *this)
{
  return 3; /*0x4b64d5*/
}



// ==== 0x004B64E0  JumpjetLocomotionClass::LoadLocomotionFromStream_0  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::LoadLocomotionFromStream_0(JumpjetLocomotionClass *this, _DWORD *pad_0)
{
  _DWORD *v2; // ebp
  int *p_RefCount; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  JumpjetLocomotionClass *v8; // eax
  JumpjetLocomotionClass *v9; // edi

  v2 = pad_0; /*0x4b64e1*/
  if ( !pad_0 ) /*0x4b64e8*/
    return -2147467261; /*0x4b64f1*/
  p_RefCount = &this->?; /*0x4b64fb*/
  if ( this->? ) /*0x4b64f8*/
  {
    this = 0; /*0x4b6504*/
    v5 = StreamClass::Set2((StreamClass *)&this, p_RefCount); /*0x4b6515*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x4b6523*/
      WinAPI::Wrapper(v5); /*0x4b6526*/
    if ( !this ) /*0x4b6531*/
      return -2147467259; /*0x4b653a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(this->LocomotionClass[0] + 12))(this, v2); /*0x4b6544*/
    if ( this ) /*0x4b654c*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 8))(this); /*0x4b6555*/
      return v6; /*0x4b655c*/
    }
  }
  else
  {
    pad_0 = 0; /*0x4b6562*/
    if ( this == (JumpjetLocomotionClass *)24 ) /*0x4b656c*/
      return -2147467259; /*0x4b656c*/
    v7 = (**((int (__stdcall ***)(char *, void *, JumpjetLocomotionClass **))this - 6))( /*0x4b657d*/
           (char *)this - 24,
           &unk_818858,
           &this);
    if ( v7 >= 0 ) /*0x4b6581*/
    {
      v9 = this; /*0x4b6595*/
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x4b659d*/
      v8 = v9; /*0x4b65a2*/
      pad_0 = v9->LocomotionClass; /*0x4b65a5*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x4b6587*/
      v8 = 0; /*0x4b658c*/
      pad_0 = 0; /*0x4b658e*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x4b65b3*/
      WinAPI::Wrapper(v7); /*0x4b65b6*/
    if ( !v8 ) /*0x4b65c1*/
      return -2147467259; /*0x4b65ca*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(v8->LocomotionClass[0] + 12))(v8, v2); /*0x4b65d4*/
    if ( pad_0 ) /*0x4b65dc*/
      (*(void (__stdcall **)(_DWORD *))(*pad_0 + 8))(pad_0); /*0x4b65e1*/
  }
  return v6; /*0x4b64ea*/
}



// ==== 0x004B65F0  DropPodLocomotionClass::ShortFunc_4B65F0  this=DropPodLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::ShortFunc_4B65F0(DropPodLocomotionClass *this)
{
  return this->__pad_18[0] != 0; /*0x4b65fe*/
}



// ==== 0x004B6610  LocomotionClass::Thunk_VtableDispatch4  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::Thunk_VtableDispatch4(LocomotionClass *this)
{
  return (*(int (__stdcall **)(LocomotionClass *))(*(_DWORD *)this->ILocomotion + 16))(this); /*0x4b661a*/
}



// ==== 0x004B6620  LocomotionClass::Stub7  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub7(LocomotionClass *this, int a2)
{
  ; /*0x4b6620*/
}



// ==== 0x004B6630  LocomotionClass::MissionStub8  this=LocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::MissionStub8(LocomotionClass *this, int a2, int a3, int a4)
{
  return 0; /*0x4b6632*/
}



// ==== 0x004B6640  LocomotionClass::MissionStub9  this=LocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::MissionStub9(LocomotionClass *this)
{
  return 0; /*0x4b6642*/
}



// ==== 0x004B6650  LocomotionClass::Stub8  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub8(LocomotionClass *this)
{
  ; /*0x4b6650*/
}



// ==== 0x004B6660  LocomotionClass::Stub9  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub9(LocomotionClass *this)
{
  ; /*0x4b6660*/
}



// ==== 0x004B6670  LocomotionClass::CheckState3  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckState3(LocomotionClass *this)
{
  return -1; /*0x4b6673*/
}



// ==== 0x004B6680  LocomotionClass::CheckState4  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckState4(LocomotionClass *this)
{
  return -1; /*0x4b6683*/
}



// ==== 0x004B6690  LocomotionClass::CheckState5  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckState5(LocomotionClass *this)
{
  return -1; /*0x4b6693*/
}



// ==== 0x004B66A0  DropPodLocomotionClass::AddRef  this=DropPodLocomotionClass  sig=csp ====
LONG __stdcall DropPodLocomotionClass::AddRef(DropPodLocomotionClass *this)
{
  return COM::AddRef((LocomotionClass *)this); /*0x4b66aa*/
}



// ==== 0x004B66B0  DropPodLocomotionClass::Release  this=DropPodLocomotionClass  sig=csp ====
LONG __stdcall DropPodLocomotionClass::Release(DropPodLocomotionClass *this)
{
  return COM::ReleaseRef((LocomotionClass *)this); /*0x4b66ba*/
}



// ==== 0x004B66C0  JumpjetLocomotionClass::ShortFunc_4B66C0  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_4B66C0(int a1)
{
  return *(_DWORD *)(a1 + 20) != 0; /*0x4b66ce*/
}



// ==== 0x004B66E0  DropPodLocomotionClass::StubReturn48  this=DropPodLocomotionClass  sig=csp ====
int DropPodLocomotionClass::StubReturn48(DropPodLocomotionClass *this)
{
  return 48; /*0x4b66e5*/
}



// ==== 0x004B66F0  DropPodLocomotionClass::ProcessMove  this=DropPodLocomotionClass  sig=csp ====
_DWORD *__thiscall DropPodLocomotionClass::ProcessMove(DropPodLocomotionClass *this, char a2)
{
  ILocomotion *Piggybackee; // eax

  *(_DWORD *)this->LocomotionClass = &DropPodLocomotionClass::`vftable'; /*0x4b66f3*/
  *(_DWORD *)&this->LocomotionClass[4] = &DropPodLocomotionClass::`vftable'; /*0x4b66f9*/
  *(_DWORD *)this->__pad_18 = &DropPodLocomotionClass::`vftable'; /*0x4b6700*/
  Piggybackee = this->Piggybackee; /*0x4b6707*/
  if ( Piggybackee ) /*0x4b670c*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x4b6711*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x4b6716*/
  if ( (a2 & 1) != 0 ) /*0x4b6720*/
    __3_YAXPAX_Z(this); /*0x4b6723*/
  return this->LocomotionClass; /*0x4b672d*/
}



// ==== 0x004B6740  JumpjetLocomotionClass::SmallStub_4B6740  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4B6740(int a1, const void *a2, int *a3)
{
  return DropPodLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}



// ==== 0x004B6750  JumpjetLocomotionClass::SmallStub_4B6750  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_4B6750(int a1)
{
  return DropPodLocomotionClass::AddRef(a1 - 4);
}



// ==== 0x004B6760  JumpjetLocomotionClass::SmallStub_4B6760  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_4B6760(int a1)
{
  return DropPodLocomotionClass::Release((volatile LONG *)(a1 - 4));
}



// ==== 0x004B6770  JumpjetLocomotionClass::SmallStub_4B6770  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4B6770(int a1, const void *a2, int *a3)
{
  return DropPodLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}



// ==== 0x004B6780  JumpjetLocomotionClass::SmallStub_4B6780  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_4B6780(int a1)
{
  return DropPodLocomotionClass::AddRef(a1 - 24);
}



// ==== 0x004B6790  JumpjetLocomotionClass::SmallStub_4B6790  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_4B6790(int a1)
{
  return DropPodLocomotionClass::Release((volatile LONG *)(a1 - 24));
}



// ==== 0x004B67A0  sub_4B67A0  this=-  sig=ida-proto ====
void sub_4B67A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4b67ac*/
  dbl_8A08A8 = Math::Sqrt(v0 + v0); /*0x4b67be*/
}



// ==== 0x004B67D0  sub_4B67D0  this=-  sig=ida-proto ====
void sub_4B67D0()
{
  dbl_8A0918 = dbl_8A08A8 / 60.0; /*0x4b67dc*/
}



// ==== 0x004B67F0  sub_4B67F0  this=-  sig=ida-proto ====
void sub_4B67F0()
{
  dbl_8A0900 = 1.0 / dbl_8A0918; /*0x4b67fc*/
}



// ==== 0x004B6810  sub_4B6810  this=-  sig=ida-proto ====
void sub_4B6810()
{
  dbl_8A08F8 = 0.0174532925199433 * 45.0; /*0x4b681c*/
}



// ==== 0x004B6830  sub_4B6830  this=-  sig=ida-proto ====
void sub_4B6830()
{
  dbl_8A08B0 = 0.0174532925199433 * 60.0; /*0x4b683c*/
}



// ==== 0x004B6850  sub_4B6850  this=-  sig=ida-proto ====
void sub_4B6850()
{
  dbl_8A0868 = 0.0174532925199433 * 90.0; /*0x4b685c*/
}



// ==== 0x004B6870  sub_4B6870  this=-  sig=ida-proto ====
__int64 sub_4B6870()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A0868 - dbl_8A08B0); /*0x4b6882*/
  result = Math::RoundToInt(v0 * dbl_8A08A8 * 0.5); /*0x4b6896*/
  dword_8A0920 = result; /*0x4b689b*/
  return result; /*0x4b68a0*/
}



// ==== 0x004B68B0  sub_4B68B0  this=-  sig=ida-proto ====
void sub_4B68B0()
{
  dbl_8A08B8 = Math::ArcTan((double)dword_8A0920 * 0.00390625); /*0x4b68c7*/
}



// ==== 0x004B68E0  sub_4B68E0  this=-  sig=ida-proto ====
void sub_4B68E0()
{
  dbl_8A08F0 = Math::ArcTan((double)(2 * dword_8A0920) / dbl_8A08A8); /*0x4b6902*/
}



// ==== 0x004B6910  sub_4B6910  this=-  sig=ida-proto ====
__int64 sub_4B6910()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0920) + 0.5); /*0x4b692b*/
  dword_8A0914 = result; /*0x4b6930*/
  return result; /*0x4b6936*/
}



// ==== 0x004B6940  sub_4B6940  this=-  sig=ida-proto ====
int sub_4B6940()
{
  word_8A08A0 = 0; /*0x4b6942*/
  word_8A08A2 = 0; /*0x4b6948*/
  return 0; /*0x4b694e*/
}



// ==== 0x004B6950  sub_4B6950  this=-  sig=ida-proto ====
int sub_4B6950()
{
  dword_8A08E0 = 0; /*0x4b6952*/
  dword_8A08E4 = 0; /*0x4b6957*/
  dword_8A08E8 = 0; /*0x4b695c*/
  return 0; /*0x4b6961*/
}



// ==== 0x004B6970  sub_4B6970  this=-  sig=ida-proto ====
int sub_4B6970()
{
  dword_8A0910 = 0; /*0x4b6975*/
  dword_8A0908 = 128; /*0x4b697f*/
  dword_8A090C = 128; /*0x4b6984*/
  return 128; /*0x4b6989*/
}



// ==== 0x004B6990  sub_4B6990  this=-  sig=ida-proto ====
int sub_4B6990()
{
  dword_8A0890 = 0; /*0x4b6992*/
  dword_8A0894 = 0; /*0x4b6997*/
  dword_8A0898 = 0; /*0x4b699c*/
  dword_8A089C = 0; /*0x4b69a1*/
  return 0; /*0x4b69a6*/
}



// ==== 0x004B69B0  HouseClass::initDropshipData  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::initDropshipData(HouseClass *this)
{
  this->AbstractClass = *(void **)&stru_A8EB00.?[416]; /*0x4b69b8*/
  this->? = (void *)0x7FFFFFFF; /*0x4b69bc*/
  LOBYTE(this->?) = 0; /*0x4b69c3*/
  this->? = 0; /*0x4b69c6*/
  this->buildingType = 0; /*0x4b69c9*/
  return &this->AbstractClass; /*0x4b69cc*/
}



// ==== 0x004B69D0  ObjectClass::nullsub_126  this=ObjectClass  sig=csp ====
void nullsub_126(ObjectClass *this)
{
  ; /*0x4b69d0*/
}



// ==== 0x004B69E0  ObjectClass::method_4B69E0  this=ObjectClass  sig=csp ====
char __thiscall sub_4B69E0(ObjectClass *this, int a2)
{
  void *vtable1; // edx
  int v3; // esi
  int v4; // eax

  if ( this->? >= 5 ) /*0x4b69f1*/
    return 0; /*0x4b69f1*/
  vtable1 = dword_A8B230[376].vtable1; /*0x4b6a01*/
  if ( vtable1 ) /*0x4b6a09*/
  {
    v4 = 0; /*0x4b6a10*/
    if ( (int)vtable1 > 0 ) /*0x4b6a14*/
    {
      while ( *(_DWORD *)(dword_A8B230[375].referenceCount + 4 * v4) != a2 /*0x4b6a2c*/
           || *(_DWORD *)(dword_A8B230[376].abstractFlags + 4 * v4) == -1 )
      {
        if ( ++v4 >= (int)vtable1 ) /*0x4b6a31*/
        {
          v3 = -1; /*0x4b6a33*/
          goto LABEL_11; /*0x4b6a36*/
        }
      }
      v3 = v4; /*0x4b6a3b*/
      if ( v4 == -1 /*0x4b6a53*/
        || *((_DWORD *)dword_A8B230[377].vtable3 + v4) < *(_DWORD *)(dword_A8B230[376].abstractFlags + 4 * v4) )
      {
        goto LABEL_11; /*0x4b6a53*/
      }
      return 0; /*0x4b6a9a*/
    }
  }
  v3 = -1; /*0x4b6a0b*/
LABEL_11:
  *(&this->? + this->?++) = a2; /*0x4b6a55*/
  this->owningHouseIndex += (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 172))(a2); /*0x4b6a74*/
  if ( v3 != -1 ) /*0x4b6a77*/
    ++*((_DWORD *)dword_A8B230[377].vtable3 + v3); /*0x4b6a8b*/
  return 1; /*0x4b6a8d*/
}



// ==== 0x004B6AB0  ObjectClass::method_4B6AB0  this=ObjectClass  sig=csp ====
char __thiscall sub_4B6AB0(ObjectClass *this, int a2)
{
  int uniqueId; // eax
  void *vtable1; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // eax

  uniqueId = this->?; /*0x4b6ab4*/
  if ( uniqueId <= 0 || a2 < 0 || a2 >= uniqueId ) /*0x4b6acd*/
    return 0; /*0x4b6b72*/
  vtable1 = dword_A8B230[376].vtable1; /*0x4b6adb*/
  if ( vtable1 ) /*0x4b6ae3*/
  {
    v5 = 0; /*0x4b6ae5*/
    if ( (int)vtable1 > 0 ) /*0x4b6ae9*/
    {
      while ( *(_DWORD *)(dword_A8B230[375].referenceCount + 4 * v5) != *(&this->? + a2) /*0x4b6b05*/
           || *(_DWORD *)(dword_A8B230[376].abstractFlags + 4 * v5) == -1 )
      {
        if ( ++v5 >= (int)dword_A8B230[376].vtable1 ) /*0x4b6b10*/
          goto LABEL_12; /*0x4b6b10*/
      }
      if ( v5 != -1 ) /*0x4b6b17*/
        --*((_DWORD *)dword_A8B230[377].vtable3 + v5); /*0x4b6b22*/
    }
  }
LABEL_12:
  v6 = this->owningHouseIndex - (*(int (__thiscall **)(_DWORD))(**((_DWORD **)&this->? + a2) + 172))(*(&this->? + a2)); /*0x4b6b24*/
  v7 = this->? - 1; /*0x4b6b3c*/
  this->owningHouseIndex = v6; /*0x4b6b3d*/
  v8 = a2; /*0x4b6b42*/
  if ( a2 < v7 ) /*0x4b6b44*/
  {
    v9 = &this->? + a2; /*0x4b6b46*/
    do /*0x4b6b57*/
    {
      ++v8; /*0x4b6b4b*/
      *v9 = v9[1]; /*0x4b6b4c*/
      ++v9; /*0x4b6b51*/
    }
    while ( v8 < this->? - 1 ); /*0x4b6b57*/
  }
  v10 = this->? - 1; /*0x4b6b5d*/
  this->? = v10; /*0x4b6b5f*/
  *(&this->? + v10) = 0; /*0x4b6b62*/
  return 1; /*0x4b6b6a*/
}



// ==== 0x004B6B80  ObjectClass::method_4B6B80  this=ObjectClass  sig=csp ====
char __thiscall sub_4B6B80(ObjectClass *this)
{
  int uniqueId; // edi
  char result; // al

  uniqueId = this->?; /*0x4b6b87*/
  LOBYTE(this->?) = 0; /*0x4b6b8a*/
  if ( uniqueId > 0 ) /*0x4b6b8f*/
  {
    do /*0x4b6b9a*/
    {
      result = sub_4B6AB0(this, 0); /*0x4b6b94*/
      --uniqueId; /*0x4b6b99*/
    }
    while ( uniqueId ); /*0x4b6b9a*/
  }
  this->? = 0; /*0x4b6b9c*/
  this->owningHouseIndex = 0; /*0x4b6b9f*/
  return result; /*0x4b6ba2*/
}



// ==== 0x004B6BB0  HouseClass::RegisterForSwizzleTracking  this=HouseClass  sig=csp ====
int __thiscall HouseClass::RegisterForSwizzleTracking(HouseClass *this)
{
  int v2; // esi
  int result; // eax
  int *p_abstractFlags; // edi

  v2 = 0; /*0x4b6bb4*/
  result = this->?; /*0x4b6bb6*/
  if ( result > 0 ) /*0x4b6bbb*/
  {
    p_abstractFlags = &this->?; /*0x4b6bbe*/
    do /*0x4b6bd5*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, p_abstractFlags); /*0x4b6bc7*/
      result = this->?; /*0x4b6bcc*/
      ++v2; /*0x4b6bcf*/
      ++p_abstractFlags; /*0x4b6bd0*/
    }
    while ( v2 < result ); /*0x4b6bd5*/
  }
  return result; /*0x4b6bd8*/
}



// ==== 0x004B6BE0  ObjectClass::method_4B6BE0  this=ObjectClass  sig=csp ====
int __thiscall sub_4B6BE0(ObjectClass *this, int a2)
{
  return *(&this->? + a2); /*0x4b6be8*/
}



// ==== 0x004B6BF0  ObjectClass::method_4B6BF0  this=ObjectClass  sig=csp ====
int __thiscall sub_4B6BF0(ObjectClass *this)
{
  void *vtable1; // edx
  int result; // eax

  vtable1 = dword_A8B230[376].vtable1; /*0x4b6bf9*/
  if ( !vtable1 ) /*0x4b6c01*/
    return -1; /*0x4b6c01*/
  result = 0; /*0x4b6c03*/
  if ( (int)vtable1 <= 0 ) /*0x4b6c07*/
    return -1; /*0x4b6c25*/
  while ( *(ObjectClass **)(dword_A8B230[375].referenceCount + 4 * result) != this /*0x4b6c1e*/
       || *(_DWORD *)(dword_A8B230[376].abstractFlags + 4 * result) == -1 )
  {
    if ( ++result >= (int)vtable1 ) /*0x4b6c23*/
      return -1; /*0x4b6c23*/
  }
  return result; /*0x4b6c28*/
}



// ==== 0x004B6C30  LoadScreen::RenderLoop  this=LoadScreen  sig=csp ====
int LoadScreen::RenderLoop(LoadScreen *this)
{
  double v1; // st7
  int v2; // esi
  size_t Size; // eax
  void *v4; // edi
  signed int v5; // eax
  size_t v6; // eax
  int v7; // edi
  signed int v8; // eax
  int v9; // esi
  int v10; // ebp
  int v11; // ebx
  int v12; // esi
  int v13; // edi
  Struct *v14; // esi
  int v15; // eax
  int v16; // edi
  const void *v17; // eax
  int i; // esi
  int v19; // eax
  char *v20; // ecx
  char v21; // dl
  ConvertClass *v22; // eax
  BuildingClass *v23; // ebp
  ConvertClass *v24; // eax
  BuildingClass *v25; // edi
  const void *v26; // eax
  int j; // esi
  int v28; // eax
  char *v29; // ecx
  char v30; // dl
  ConvertClass *v31; // eax
  BuildingClass *v32; // esi
  int v33; // ebp
  int v34; // ecx
  void **v35; // edx
  int v36; // eax
  AbstractClass *v37; // ecx
  int v38; // edi
  int Capacity; // eax
  int v40; // ebx
  int v41; // esi
  int v42; // eax
  int k; // edi
  _DWORD *v44; // esi
  int v45; // eax
  int v46; // edi
  i... [75459 chars total]



// ==== 0x004B96A0  TextRenderer::RenderCentered  this=TextRenderer  sig=csp ====
int *__userpurge TextRenderer_RenderCentered@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        int *a3,
        int *a4,
        wchar_t *Format,
        char a6,
        int a7,
        int a8,
        int *a9)
{
  int v11; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // edx
  int v16; // edi
  int v17; // eax
  int v18; // edx
  int v19; // edi
  int v20; // eax
  _DWORD *v21; // eax
  int v23; // [esp-10h] [ebp-5Ch]
  int v24; // [esp-Ch] [ebp-58h]
  int v25; // [esp-8h] [ebp-54h]
  int v26; // [esp-4h] [ebp-50h]
  int v27; // [esp+14h] [ebp-38h] BYREF
  int v28; // [esp+18h] [ebp-34h] BYREF
  int v29; // [esp+1Ch] [ebp-30h]
  int v30; // [esp+20h] [ebp-2Ch] BYREF
  int v31; // [esp+24h] [ebp-28h]
  int v32; // [esp+28h] [ebp-24h]
  int v33; // [esp+2Ch] [ebp-20h]
  _DWORD v34[4]; // [esp+30h] [ebp-1Ch] BYREF
  char v35[12]; // [esp+40h] [ebp-Ch] BYREF

  TextRenderer::GetInstance(); /*0x4b96c5*/
  swprintf(&word_8A0870, (const size_t)&aSD, Format, a2); /*0x4b96dc*/
  swprintf(&word_8A08C0, (const size_t)&aSD, Format, a1); /*0x4b96ed*/
  if ( a6 ) /*0x4b96f7*/
  {
    v11 = *a4 - Text::MeasureWidth((int)&word_8A0870, 0) / 2; /*0x4b971b*/
    v12 = *a4 - Text::MeasureWidth((int)&word_8A08C0, 0) / 2; /*0x4b972b*/
  }
  else
  {
    v11 = *a4; /*0x4b9733*/
    v12 = *a4; /*0x4b9735*/
  }
  v13 = a4[1]; /*0x4b9737*/
  v14 = 110; /*0x4b9740*/
  if ( v11 > v12 ) /*0x4b974a*/
  {
    v14 = v11 - v12 + 110; /*0x4b9750*/
    v11 = v12; /*0x4b9752*/
  }
  if ( v14 + v11 < v12 + 110 ) /*0x4b9766*/
    v14 = v12 - v11 + 111; /*0x4b976d*/
  v33 = v11; /*0x4b9784*/
  v29 = v11; /*0x4b9788*/
  v34[1] = v14; /*0x4b9790*/
  v31 = v14; /*0x4b9794*/
  v34[0] = v13; /*0x4b9798*/
  v15 = *a3; /*0x4b979c*/
  v30 = v13; /*0x4b979e*/
  v34[2] = 15; /*0x4b97a4*/
  v32 = 15; /*0x4b97a8*/
  v16 = (*(int (__thiscall **)(int *))(v15 + 124))(a3); /*0x4b97b5*/
  v17 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden + 124))(g_DSurface_Hidden); /*0x4b97b9*/
  v18 = *a3; /*0x4b97c5*/
  v30 += (v17 - v16) / -2; /*0x4b97cd*/
  v19 = (*(int (__thiscall **)(int *))(v18 + 128))(a3); /*0x4b97df*/
  v31 += ((*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden + 128))(g_DSurface_Hidden) - v19) / -2; /*0x4b97fc*/
  v28 = 0; /*0x4b982a*/
  v29 = 0; /*0x4b982e*/
  BlitterDrawSHP((int *)g_DSurface_Hidden, a8, a3, &v30, &v28, v34, 0, a9, 0, 0, 1000, 0, 0); /*0x4b9832*/
  v20 = FindBuildingAnimByName(aYellow, 1); /*0x4b9847*/
  v21 = (_DWORD *)(*(int (__thiscall **)(int, char *, wchar_t *, int, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden + 120))( /*0x4b985f*/
                    g_DSurface_Hidden,
                    v35,
                    Format,
                    v20,
                    0,
                    v27);
  return TextRenderer::DrawText(&v27, (size_t)&word_8A0870, g_DSurface_Hidden, v21, v23, v24, v25, v26); /*0x4b987c*/
}



// ==== 0x004B9890  DisplayBuildingInfoPanel  this=-  sig=csp ====
int *__fastcall DisplayBuildingInfoPanel(int *a1, BuildingClass *a2, TechnoClass *a3, char a4)
{
  int v6; // eax
  int v7; // edi
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int *SHPFrame; // eax
  int *result; // eax
  const wchar_t *v15; // eax
  int AudioEntry; // eax
  char *v17; // ecx
  int BuildingAnimByName; // esi
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  int v23; // [esp-10h] [ebp-174h]
  int v24; // [esp-Ch] [ebp-170h]
  int v25; // [esp-Ch] [ebp-170h]
  int v26; // [esp-8h] [ebp-16Ch]
  int v27; // [esp-8h] [ebp-16Ch]
  int v28; // [esp-8h] [ebp-16Ch]
  int v29; // [esp-4h] [ebp-168h]
  int v30; // [esp-4h] [ebp-168h]
  int v31; // [esp-4h] [ebp-168h]
  const wchar_t *v32; // [esp+0h] [ebp-164h]
  int v33; // [esp+0h] [ebp-164h]
  int v34; // [esp+0h] [ebp-164h]
  int v35; // [esp+4h] [ebp-160h]
  int v36; // [esp+4h] [ebp-160h]
  int v37; // [esp+8h] [ebp-15Ch]
  int v38; // [esp+10h] [ebp-154h] BYREF
  int v39; // [esp+14h] [ebp-150h] BYREF
  int v40; // [esp+18h] [ebp-14Ch] BYREF
  int v41; // [esp+1Ch] [ebp-148h] BYREF
  int v42; // [esp+20h] [ebp-144h] BYREF
  int v43; // [esp+24h] [ebp-140h] BYREF
  Coord2D v44; // [esp+28h] [ebp-13Ch] BYREF
  _DWORD v45[4]; // [esp+30h] [ebp-134h] BYREF
  _DWORD v46[4]; // [esp+40h] [ebp-124h] BYREF
  Rect v47; // [esp+50h] [ebp-114h] BYREF
  wchar_t v48[20]; // [esp+60h] [ebp-104h] BYREF
  wchar_t v49[4]; // [esp+88h] [ebp-DCh] BYREF
  char v50[72]; // [esp+90h] [ebp-D4h] BYREF
  wchar_t v51; // [esp+D8h] [ebp-8Ch] BYREF
  char v52[56]; // [esp+DCh] [ebp-88h] BYREF
  wchar_t Buffer[6]; // [esp+114h] [ebp-50h] BYREF
  char v54[68]; // [esp+120h] [ebp-44h] BYREF

  v45[0] = 450; /*0x4b98a8*/
  v6 = *a1; /*0x4b98ac*/
  v45[1] = 300; /*0x4b98b8*/
  v45[2] = 190; /*0x4b98be*/
  v45[3] = 80; /*0x4b98c2*/
  v7 = (*(int (__thiscall **)(int *))(v6 + 128))(a1); /*0x4b98d2*/
  v8 = ((*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden) - v7) / 2; /*0x4b98e7*/
  v9 = (*(int (__thiscall **)(int *))(*a1 + 124))(a1); /*0x4b98f2*/
  v10 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 31))(g_DSurface_Hidden); /*0x4b98f6*/
  v44.Coord2D_field_0x04 = 300; /*0x4b9903*/
  v40 = (v10 - v9) / 2; /*0x4b9909*/
  *(_DWORD *)v44.__pad_0 = 450; /*0x4b9912*/
  v41 = v8; /*0x4b992b*/
  v11 = Coord2D::Add(&v44, &v42, &v40); /*0x4b992f*/
  v12 = Rect::Construct(&v47, v11, 190, 80); /*0x4b9939*/
  v46[0] = *v12; /*0x4b9942*/
  v46[1] = v12[1]; /*0x4b994b*/
  v46[2] = v12[2]; /*0x4b9958*/
  v46[3] = v12[3]; /*0x4b9963*/
  v38 = 0; /*0x4b9967*/
  v39 = 0; /*0x4b996b*/
  SHPFrame = (int *)BuildingClass::GetSHPFrame(a2, 0); /*0x4b996f*/
  result = (int *)BlitterDrawSHP((int *)g_DSurface_Hidden, (int)a2, a1, v45, &v38, v46, 0, SHPFrame, 0, 0, 1000, 0, 0); /*0x4b998e*/
  if ( a3 ) /*0x4b999c*/
  {
    swprintf(Buffer, (const size_t)&stru_820320.MiddleFrameHeight, (const wchar_t *const)&a3->?); /*0x4b99b3*/
    if ( a4 ) /*0x4b99c4*/
    {
      v15 = (const wchar_t *)(*((int (__thiscall **)(TechnoClass *))a3->RadioClass + 43))(a3); /*0x4b99ca*/
      swprintf(v48, (const size_t)&stru_820320.?[17], v15); /*0x4b99db*/
    }
    else
    {
      swprintf(v48, (const size_t)&stru_820320.?[12], v32); /*0x4b99ef*/
    }
    if ( *(_DWORD *)TechnoClass::GetAudioEntry(a3, 0) ) /*0x4b99ff*/
    {
      AudioEntry = TechnoClass::GetAudioEntry(a3, 0); /*0x4b9a06*/
      swprintf(v49, (const size_t)&stru_820320.?[5], (const wchar_t *const)(*(_DWORD *)AudioEntry + 100)); /*0x4b9a1e*/
    }
    else
    {
      swprintf(v49, (const size_t)&stru_820320.?, v32); /*0x4b9a35*/
    }
    swprintf(&v51, (const size_t)&stru_820320.?[17], (&off_7E5210)[a3->?[0]]); /*0x4b9a58*/
    v17 = &stru_820320.?[9]; /*0x4b9a6e*/
    if ( !a4 ) /*0x4b9a73*/
      v17 = &stru_820320.?[5]; /*0x4b9a75*/
    BuildingAnimByName = FindBuildingAnimByName(v17, 1); /*0x4b9a87*/
    v39 = v41 + 300; /*0x4b9a97*/
    v38 = v40 + 450; /*0x4b9aa8*/
    v19 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, Rect *, int *, int, _DWORD))g_DSurface_Hidden->AbstractClass /*0x4b9ab3*/
                     + 30))(
                      g_DSurface_Hidden,
                      &v47,
                      &v38,
                      BuildingAnimByName,
                      0);
    TextRenderer::DrawText(&v44.Coord2D_field_0x04, (size_t)v54, (int)g_DSurface_Hidden, v19, 70, (int)v32, v35, v37); /*0x4b9aca*/
    v42 = *(_DWORD *)v44.__pad_0 + 315; /*0x4b9ae0*/
    v41 = v43 + 450; /*0x4b9af8*/
    v20 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, int *, int *, int, _DWORD, int))g_DSurface_Hidden->AbstractClass /*0x4b9b03*/
                     + 30))(
                      g_DSurface_Hidden,
                      &v47.Height,
                      &v41,
                      BuildingAnimByName,
                      0,
                      70);
    TextRenderer::DrawText((int *)v44.__pad_0, (size_t)v50, (int)g_DSurface_Hidden, v20, v26, v29, v33, v36); /*0x4b9b1a*/
    v41 = v43 + 330; /*0x4b9b30*/
    v40 = v42 + 450; /*0x4b9b48*/
    v21 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, int *, int *, int, _DWORD, int))g_DSurface_Hidden->AbstractClass /*0x4b9b53*/
                     + 30))(
                      g_DSurface_Hidden,
                      &v47.Width,
                      &v40,
                      BuildingAnimByName,
                      0,
                      70);
    TextRenderer::DrawText(&v43, (size_t)v52, (int)g_DSurface_Hidden, v21, v24, v27, v30, v34); /*0x4b9b6a*/
    v40 = v42 + 345; /*0x4b9b87*/
    v39 = v41 + 450; /*0x4b9b98*/
    v22 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, int *, int *, int, _DWORD, int))g_DSurface_Hidden->AbstractClass /*0x4b9ba3*/
                     + 30))(
                      g_DSurface_Hidden,
                      &v47.Y,
                      &v39,
                      BuildingAnimByName,
                      0,
                      70);
    return TextRenderer::DrawText(&v42, (size_t)v48, (int)g_DSurface_Hidden, v22, v23, v25, v28, v31); /*0x4b9bb7*/
  }
  return result; /*0x4b9bbf*/
}



// ==== 0x004B9BD0  Struct::Zero3  this=Struct  sig=csp ====
_BYTE *__thiscall Struct::Zero3(Struct *this)
{
  LOBYTE(this->Struct_field_00) = 0; /*0x4b9bd4*/
  BYTE1(this->Struct_field_00) = 0; /*0x4b9bd6*/
  BYTE2(this->Struct_field_00) = 0; /*0x4b9bd9*/
  return this; /*0x4b9bdc*/
}



// ==== 0x004B9BE0  _DynamicVectorClass_PAUButtonFadeEffect::Clear  this=DynamicVector  sig=csp ====
void __thiscall FilePipe_30::Clear(_DynamicVectorClass_PAUButtonFadeEffect *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4b9be6*/
  this->m_10 = 0; /*0x4b9be9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4b9bf0*/
  {
    __3_YAXPAX_Z(v2); /*0x4b9bf6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4b9bfe*/
  }
  BYTE1(this->m_C) = 0; /*0x4b9c01*/
  this->m_8 = 0; /*0x4b9c04*/
}



// ==== 0x004B9C10  _DynamicVectorClass_PAUButtonFadeEffect::GetCount  this=DynamicVector  sig=csp ====
unsigned int __thiscall FilePipe_30::GetCount(_DynamicVectorClass_PAUButtonFadeEffect *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4b9c10*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4b9c25*/
  else
    return 0; /*0x4b9c17*/
}



// ==== 0x004B9C30  _DynamicVectorClass_PAUButtonFadeEffect::GetItem  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_CrossDissolveEffect::GetItem(_DynamicVectorClass_PAUButtonFadeEffect *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4b9c3a*/
}



// ==== 0x004B9C40  _DynamicVectorClass_PAUCrossDissolveEffect::Clear_0  this=DynamicVector  sig=csp ====
void __thiscall FilePipe_30::Clear_0(_DynamicVectorClass_PAUCrossDissolveEffect *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4b9c46*/
  this->m_10 = 0; /*0x4b9c49*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4b9c50*/
  {
    __3_YAXPAX_Z(v2); /*0x4b9c56*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4b9c5e*/
  }
  BYTE1(this->m_C) = 0; /*0x4b9c61*/
  this->m_8 = 0; /*0x4b9c64*/
}



// ==== 0x004B9C70  _DynamicVectorClass_PAUCrossDissolveEffect::GetCount_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall FilePipe_30::GetCount_0(_DynamicVectorClass_PAUCrossDissolveEffect *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4b9c70*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4b9c85*/
  else
    return 0; /*0x4b9c77*/
}



// ==== 0x004B9C90  _VectorClass_PAUCrossDissolveEffect::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_CrossDissolveEffect::Clear(_VectorClass_PAUCrossDissolveEffect *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4b9c9a*/
}



// ==== 0x004B9CA0  _DynamicVectorClass_PAUButtonFadeEffect::FindItemIndex  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_CrossDissolveEffect::FindItemIndex(
        _DynamicVectorClass_PAUButtonFadeEffect *this,
        int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4b9ca2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4b9cad*/
  {
    v3 = 0; /*0x4b9caf*/
    if ( m_8 <= 0 ) /*0x4b9cb3*/
      return 1; /*0x4b9cd3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4b9cb5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4b9cbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4b9cc4*/
    {
      ++v3; /*0x4b9cc6*/
      ++v4; /*0x4b9cc7*/
      if ( v3 >= m_8 ) /*0x4b9ccc*/
        return 1; /*0x4b9ccc*/
    }
  }
  return 0; /*0x4b9cce*/
}



// ==== 0x004B9CE0  VectorClass_ptr_CrossDissolveEffect::SetCapacity  this=VectorClass_ptr_CrossDissolveEffect  sig=csp ====
char __thiscall VectorClass_ptr_CrossDissolveEffect::SetCapacity(
        VectorClass_ptr_CrossDissolveEffect *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  void *Capacity; // ecx
  int i; // eax

  if ( a2 ) /*0x4b9cec*/
  {
    this->IsInitialized = 0; /*0x4b9cf6*/
    if ( a3 ) /*0x4b9cfc*/
      v4 = a3; /*0x4b9d12*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4b9d0e*/
    this->IsInitialized = 1; /*0x4b9d16*/
    if ( v4 ) /*0x4b9d1a*/
    {
      if ( this->Items ) /*0x4b9d25*/
      {
        Capacity = this->Capacity; /*0x4b9d2c*/
        if ( a2 < (int)Capacity ) /*0x4b9d31*/
          Capacity = (void *)a2; /*0x4b9d33*/
        for ( i = 0; i < (int)Capacity; v4[i - 1] = *((_DWORD *)this->Items + i - 1) ) /*0x4b9d39*/
          ++i; /*0x4b9d3e*/
        if ( this->IsAllocated ) /*0x4b9d4b*/
        {
          __3_YAXPAX_Z(this->Items); /*0x4b9d56*/
          this->Items = 0; /*0x4b9d5e*/
        }
      }
      this->Items = v4; /*0x4b9d67*/
      this->Capacity = (void *)a2; /*0x4b9d6f*/
      this->IsAllocated = a3 == 0; /*0x4b9d72*/
      return 1; /*0x4b9d78*/
    }
    else
    {
      return 0; /*0x4b9d1f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(VectorClass_ptr_CrossDissolveEffect *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4b9d82*/
    return 1; /*0x4b9d88*/
  }
}



// ==== 0x004B9D90  VectorClass_ptr_CrossDissolveEffect::Destroy  this=VectorClass_ptr_CrossDissolveEffect  sig=csp ====
void __thiscall VectorClass_ptr_CrossDissolveEffect::Destroy(VectorClass_ptr_CrossDissolveEffect *this)
{
  if ( this->Items && this->IsAllocated ) /*0x4b9d9d*/
  {
    __3_YAXPAX_Z(this->Items); /*0x4b9da3*/
    this->Items = 0; /*0x4b9dab*/
  }
  this->IsAllocated = 0; /*0x4b9dae*/
  this->Capacity = 0; /*0x4b9db1*/
}



// ==== 0x004B9DC0  VectorClass_ptr_CrossDissolveEffect::FindItemIndex_0  this=VectorClass_ptr_CrossDissolveEffect  sig=csp ====
int __thiscall VectorClass_ptr_CrossDissolveEffect::FindItemIndex_0(
        VectorClass_ptr_CrossDissolveEffect *this,
        _DWORD *a2)
{
  int result; // eax
  void *Capacity; // edx
  _DWORD *i; // ecx

  if ( !this->IsInitialized ) /*0x4b9dc0*/
    return 0; /*0x4b9dc8*/
  Capacity = this->Capacity; /*0x4b9dce*/
  result = 0; /*0x4b9dd1*/
  if ( (int)Capacity <= 0 ) /*0x4b9dd5*/
    return -1; /*0x4b9dec*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x4b9ddb*/
  {
    if ( ++result >= (int)Capacity ) /*0x4b9dea*/
      return -1; /*0x4b9dea*/
  }
  return result; /*0x4b9dca*/
}



// ==== 0x004B9E00  VectorClass_ptr_CrossDissolveEffect::GetItemIndex  this=VectorClass_ptr_CrossDissolveEffect  sig=csp ====
unsigned int __thiscall VectorClass_ptr_CrossDissolveEffect::GetItemIndex(
        VectorClass_ptr_CrossDissolveEffect *this,
        int a2)
{
  if ( this->IsInitialized ) /*0x4b9e00*/
    return (a2 - (unsigned int)this->Items) >> 2; /*0x4b9e15*/
  else
    return 0; /*0x4b9e07*/
}



// ==== 0x004B9E20  _DynamicVectorClass_PAUButtonFadeEffect::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall FilePipe_30::SetCapacity(_DynamicVectorClass_PAUButtonFadeEffect *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4b9e2c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4b9e32*/
    if ( a3 ) /*0x4b9e38*/
      v4 = a3; /*0x4b9e4e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4b9e4a*/
    LOBYTE(this->m_C) = 1; /*0x4b9e52*/
    if ( !v4 ) /*0x4b9e56*/
      return 0; /*0x4b9eca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4b9e58*/
    {
      m_8 = this->m_8; /*0x4b9e5f*/
      if ( a2 < m_8 ) /*0x4b9e64*/
        m_8 = a2; /*0x4b9e66*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4b9e6c*/
        ++i; /*0x4b9e71*/
      if ( BYTE1(this->m_C) ) /*0x4b9e7e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4b9e89*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4b9e91*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4b9e9a*/
    this->m_8 = a2; /*0x4b9ea2*/
    BYTE1(this->m_C) = a3 == 0; /*0x4b9ea5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUButtonFadeEffect *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4b9eae*/
  }
  v7 = this->m_8; /*0x4b9eb1*/
  if ( v7 < this->m_10 ) /*0x4b9eb9*/
    this->m_10 = v7; /*0x4b9ebb*/
  return 1; /*0x4b9ebe*/
}



// ==== 0x004B9ED0  _DynamicVectorClass_PAUButtonFadeEffect::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall FilePipe_30::FindItemIndex(_DynamicVectorClass_PAUButtonFadeEffect *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4b9ed0*/
  result = 0; /*0x4b9ed3*/
  if ( m_10 <= 0 ) /*0x4b9ed8*/
    return -1; /*0x4b9eef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4b9ede*/
  {
    if ( ++result >= m_10 ) /*0x4b9eed*/
      return -1; /*0x4b9eed*/
  }
  return result; /*0x4b9ef2*/
}



// ==== 0x004B9F00  _VectorClass_PAUCrossDissolveEffect::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CrossDissolveEffect::AddRef(_VectorClass_PAUCrossDissolveEffect *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4b9f02*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4b9f0d*/
  {
    v3 = 0; /*0x4b9f0f*/
    if ( m_8 <= 0 ) /*0x4b9f13*/
      return 1; /*0x4b9f33*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4b9f15*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4b9f1b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4b9f24*/
    {
      ++v3; /*0x4b9f26*/
      ++v4; /*0x4b9f27*/
      if ( v3 >= m_8 ) /*0x4b9f2c*/
        return 1; /*0x4b9f2c*/
    }
  }
  return 0; /*0x4b9f2e*/
}



// ==== 0x004B9F40  _VectorClass_PAUCrossDissolveEffect::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CrossDissolveEffect::Remove(
        _VectorClass_PAUCrossDissolveEffect *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4b9f4c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4b9f56*/
    if ( a3 ) /*0x4b9f5c*/
      v4 = a3; /*0x4b9f72*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4b9f6e*/
    LOBYTE(this->m_C) = 1; /*0x4b9f76*/
    if ( v4 ) /*0x4b9f7a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4b9f85*/
      {
        m_8 = this->m_8; /*0x4b9f8c*/
        if ( a2 < m_8 ) /*0x4b9f91*/
          m_8 = a2; /*0x4b9f93*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4b9f99*/
          ++i; /*0x4b9f9e*/
        if ( BYTE1(this->m_C) ) /*0x4b9fab*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4b9fb6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4b9fbe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x4b9fc7*/
      this->m_8 = a2; /*0x4b9fcf*/
      BYTE1(this->m_C) = a3 == 0; /*0x4b9fd2*/
      return 1; /*0x4b9fd8*/
    }
    else
    {
      return 0; /*0x4b9f7f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUCrossDissolveEffect *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4b9fe2*/
    return 1; /*0x4b9fe8*/
  }
}



// ==== 0x004B9FF0  _VectorClass_PAUCrossDissolveEffect::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_CrossDissolveEffect::ddtor(_VectorClass_PAUCrossDissolveEffect *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4b9ffd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4ba003*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4ba00b*/
  }
  BYTE1(this->m_C) = 0; /*0x4ba00e*/
  this->m_8 = 0; /*0x4ba011*/
}



// ==== 0x004BA020  _VectorClass_PAUCrossDissolveEffect::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_CrossDissolveEffect::GetSize(_VectorClass_PAUCrossDissolveEffect *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4ba020*/
    return 0; /*0x4ba028*/
  m_8 = this->m_8; /*0x4ba02e*/
  result = 0; /*0x4ba031*/
  if ( m_8 <= 0 ) /*0x4ba035*/
    return -1; /*0x4ba04c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4ba03b*/
  {
    if ( ++result >= m_8 ) /*0x4ba04a*/
      return -1; /*0x4ba04a*/
  }
  return result; /*0x4ba02a*/
}



// ==== 0x004BA060  _VectorClass_PAUCrossDissolveEffect::Get  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_CrossDissolveEffect::Get(_VectorClass_PAUCrossDissolveEffect *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4ba060*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4ba075*/
  else
    return 0; /*0x4ba067*/
}



// ==== 0x004BA080  _DynamicVectorClass_PAUCrossDissolveEffect::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall FilePipe_30::SetCapacity_0(_DynamicVectorClass_PAUCrossDissolveEffect *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ba08c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4ba092*/
    if ( a3 ) /*0x4ba098*/
      v4 = a3; /*0x4ba0ae*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4ba0aa*/
    LOBYTE(this->m_C) = 1; /*0x4ba0b2*/
    if ( !v4 ) /*0x4ba0b6*/
      return 0; /*0x4ba12a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4ba0b8*/
    {
      m_8 = this->m_8; /*0x4ba0bf*/
      if ( a2 < m_8 ) /*0x4ba0c4*/
        m_8 = a2; /*0x4ba0c6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4ba0cc*/
        ++i; /*0x4ba0d1*/
      if ( BYTE1(this->m_C) ) /*0x4ba0de*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4ba0e9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4ba0f1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4ba0fa*/
    this->m_8 = a2; /*0x4ba102*/
    BYTE1(this->m_C) = a3 == 0; /*0x4ba105*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUCrossDissolveEffect *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4ba10e*/
  }
  v7 = this->m_8; /*0x4ba111*/
  if ( v7 < this->m_10 ) /*0x4ba119*/
    this->m_10 = v7; /*0x4ba11b*/
  return 1; /*0x4ba11e*/
}



// ==== 0x004BA130  _DynamicVectorClass_PAUCrossDissolveEffect::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall FilePipe_30::FindItemIndex_0(_DynamicVectorClass_PAUCrossDissolveEffect *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4ba130*/
  result = 0; /*0x4ba133*/
  if ( m_10 <= 0 ) /*0x4ba138*/
    return -1; /*0x4ba14f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4ba13e*/
  {
    if ( ++result >= m_10 ) /*0x4ba14d*/
      return -1; /*0x4ba14d*/
  }
  return result; /*0x4ba152*/
}



// ==== 0x004BA160  _DynamicVectorClass_PAVTechnoTypeClass::Destructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall FilePipe_30::Destructor(_DynamicVectorClass_PAVTechnoTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4ba163*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x4ba166*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4ba170*/
  {
    __3_YAXPAX_Z(v3); /*0x4ba178*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4ba180*/
  }
  BYTE1(this->m_C) = 0; /*0x4ba18b*/
  this->m_8 = 0; /*0x4ba191*/
  if ( (a2 & 1) != 0 ) /*0x4ba198*/
    __3_YAXPAX_Z(this); /*0x4ba19b*/
  return this->__pad_0; /*0x4ba1a5*/
}



// ==== 0x004BA200  _DynamicVectorClass_PAUButtonFadeEffect::Destructor_0  this=DynamicVector  sig=csp ====
_DWORD *__thiscall FilePipe_30::Destructor_0(_DynamicVectorClass_PAUButtonFadeEffect *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4ba203*/
  *(_DWORD *)this->__pad_0 = &off_7E8500; /*0x4ba206*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4ba210*/
  {
    __3_YAXPAX_Z(v3); /*0x4ba218*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4ba220*/
  }
  BYTE1(this->m_C) = 0; /*0x4ba22b*/
  this->m_8 = 0; /*0x4ba231*/
  if ( (a2 & 1) != 0 ) /*0x4ba238*/
    __3_YAXPAX_Z(this); /*0x4ba23b*/
  return this->__pad_0; /*0x4ba245*/
}



// ==== 0x004BA250  _VectorClass_PAUCrossDissolveEffect::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_CrossDissolveEffect::Add(_VectorClass_PAUCrossDissolveEffect *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4ba253*/
  *(_DWORD *)this->__pad_0 = &VectorClass<CrossDissolveEffect *>::`vftable'; /*0x4ba256*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4ba260*/
  {
    __3_YAXPAX_Z(v3); /*0x4ba268*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4ba270*/
  }
  BYTE1(this->m_C) = 0; /*0x4ba27b*/
  this->m_8 = 0; /*0x4ba281*/
  if ( (a2 & 1) != 0 ) /*0x4ba288*/
    __3_YAXPAX_Z(this); /*0x4ba28b*/
  return this->__pad_0; /*0x4ba295*/
}



// ==== 0x004BA2A0  _DynamicVectorClass_PAUCrossDissolveEffect::Destructor_1  this=DynamicVector  sig=csp ====
_DWORD *__thiscall FilePipe_30::Destructor_1(_DynamicVectorClass_PAUCrossDissolveEffect *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4ba2a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<CrossDissolveEffect *>::`vftable'; /*0x4ba2a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4ba2b0*/
  {
    __3_YAXPAX_Z(v3); /*0x4ba2b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4ba2c0*/
  }
  BYTE1(this->m_C) = 0; /*0x4ba2cb*/
  this->m_8 = 0; /*0x4ba2d1*/
  if ( (a2 & 1) != 0 ) /*0x4ba2d8*/
    __3_YAXPAX_Z(this); /*0x4ba2db*/
  return this->__pad_0; /*0x4ba2e5*/
}



// ==== 0x004BA2F0  LoadScreen::InitVtable  this=VectorClass  sig=csp ====
_DWORD *__thiscall LoadScreen::InitVtable(LoadScreen *this, int a2, int a3)
{
  this->LoadScreen_field_0x04 = 0; /*0x4ba2fb*/
  this->LoadScreen_field_0x08 = a2; /*0x4ba2fe*/
  LOBYTE(this->LoadScreen_field_0x0C) = 1; /*0x4ba301*/
  BYTE1(this->LoadScreen_field_0x0C) = 0; /*0x4ba305*/
  *(_DWORD *)this->__pad_0 = &off_7E8500; /*0x4ba308*/
  if ( a2 ) /*0x4ba30e*/
  {
    if ( a3 ) /*0x4ba316*/
    {
      this->LoadScreen_field_0x04 = a3; /*0x4ba318*/
      return this->__pad_0; /*0x4ba31e*/
    }
    this->LoadScreen_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x4ba32d*/
    BYTE1(this->LoadScreen_field_0x0C) = 1; /*0x4ba330*/
  }
  return this->__pad_0; /*0x4ba31d*/
}



// ==== 0x004BA340  LoadScreen::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall LoadScreen::Constructor(LoadScreen *this, int a2, int a3)
{
  this->LoadScreen_field_0x04 = 0; /*0x4ba34b*/
  this->LoadScreen_field_0x08 = a2; /*0x4ba34e*/
  LOBYTE(this->LoadScreen_field_0x0C) = 1; /*0x4ba351*/
  BYTE1(this->LoadScreen_field_0x0C) = 0; /*0x4ba355*/
  *(_DWORD *)this->__pad_0 = &VectorClass<CrossDissolveEffect *>::`vftable'; /*0x4ba358*/
  if ( a2 ) /*0x4ba35e*/
  {
    if ( a3 ) /*0x4ba366*/
    {
      this->LoadScreen_field_0x04 = a3; /*0x4ba368*/
      return this->__pad_0; /*0x4ba36e*/
    }
    this->LoadScreen_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x4ba37d*/
    BYTE1(this->LoadScreen_field_0x0C) = 1; /*0x4ba380*/
  }
  return this->__pad_0; /*0x4ba36d*/
}



// ==== 0x004BA390  sub_4BA390  this=-  sig=ida-proto ====
int sub_4BA390()
{
  dword_8A0930 = 0; /*0x4ba392*/
  dword_8A0934 = 0; /*0x4ba397*/
  dword_8A0938 = 0; /*0x4ba39c*/
  dword_8A093C = 0; /*0x4ba3a1*/
  return 0; /*0x4ba3a6*/
}



// ==== 0x004BA3B0  sub_4BA3B0  this=-  sig=ida-proto ====
void sub_4BA3B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4ba3bc*/
  dbl_8A0968 = Math::Sqrt(v0 + v0); /*0x4ba3ce*/
}



// ==== 0x004BA3E0  sub_4BA3E0  this=-  sig=ida-proto ====
void sub_4BA3E0()
{
  dbl_8A0DC0 = dbl_8A0968 / 60.0; /*0x4ba3ec*/
}



// ==== 0x004BA400  sub_4BA400  this=-  sig=ida-proto ====
void sub_4BA400()
{
  dbl_8A0DA8 = 1.0 / dbl_8A0DC0; /*0x4ba40c*/
}



// ==== 0x004BA420  sub_4BA420  this=-  sig=ida-proto ====
void sub_4BA420()
{
  dbl_8A0DA0 = 0.0174532925199433 * 45.0; /*0x4ba42c*/
}



// ==== 0x004BA440  sub_4BA440  this=-  sig=ida-proto ====
void sub_4BA440()
{
  dbl_8A0970 = 0.0174532925199433 * 60.0; /*0x4ba44c*/
}



// ==== 0x004BA460  sub_4BA460  this=-  sig=ida-proto ====
void sub_4BA460()
{
  dbl_8A0928 = 0.0174532925199433 * 90.0; /*0x4ba46c*/
}



// ==== 0x004BA480  DSurface::ConstructFromHandle  this=DSurface  sig=ida-proto ====
__int64 sub_4BA480()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A0928 - dbl_8A0970); /*0x4ba492*/
  result = Math::RoundToInt(v0 * dbl_8A0968 * 0.5); /*0x4ba4a6*/
  dword_8A0DC8 = result; /*0x4ba4ab*/
  return result; /*0x4ba4b0*/
}



// ==== 0x004BA4C0  sub_4BA4C0  this=-  sig=ida-proto ====
void sub_4BA4C0()
{
  dbl_8A0978 = Math::ArcTan((double)dword_8A0DC8 * 0.00390625); /*0x4ba4d7*/
}



// ==== 0x004BA4F0  sub_4BA4F0  this=-  sig=ida-proto ====
void sub_4BA4F0()
{
  dbl_8A0D98 = Math::ArcTan((double)(2 * dword_8A0DC8) / dbl_8A0968); /*0x4ba512*/
}



// ==== 0x004BA520  sub_4BA520  this=-  sig=ida-proto ====
__int64 sub_4BA520()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0DC8) + 0.5); /*0x4ba53b*/
  dword_8A0DBC = result; /*0x4ba540*/
  return result; /*0x4ba546*/
}



// ==== 0x004BA550  sub_4BA550  this=-  sig=ida-proto ====
int sub_4BA550()
{
  word_8A0940 = 0; /*0x4ba552*/
  word_8A0942 = 0; /*0x4ba558*/
  return 0; /*0x4ba55e*/
}



// ==== 0x004BA560  sub_4BA560  this=-  sig=ida-proto ====
int sub_4BA560()
{
  dword_8A0D88 = 0; /*0x4ba562*/
  dword_8A0D8C = 0; /*0x4ba567*/
  dword_8A0D90 = 0; /*0x4ba56c*/
  return 0; /*0x4ba571*/
}



// ==== 0x004BA580  sub_4BA580  this=-  sig=ida-proto ====
int sub_4BA580()
{
  dword_8A0DB8 = 0; /*0x4ba585*/
  dword_8A0DB0 = 128; /*0x4ba58f*/
  dword_8A0DB4 = 128; /*0x4ba594*/
  return 128; /*0x4ba599*/
}



// ==== 0x004BA5A0  DSurface::Construct  this=DSurface  sig=csp ====
char *__thiscall DSurface_Constructor(char *this, int a2, int a3, char a4, char a5)
{
  _DWORD *v6; // ebp
  void *v7; // edi
  int v8; // eax

  v6 = this + 28; /*0x4ba5b0*/
  this->q004 = a2; /*0x4ba5b5*/
  this->q008 = a3; /*0x4ba5b8*/
  this->q00C = 0; /*0x4ba5bb*/
  this->q004 = 0; /*0x4ba5be*/
  this->q014 = 0; /*0x4ba5c1*/
  this->q018 = 0; /*0x4ba5c4*/
  this->q019 = 0; /*0x4ba5c7*/
  this->u32_1C = 0; /*0x4ba5ca*/
  this->q008 = 0; /*0x4ba5cd*/
  *(_DWORD *)this = &DSurface_Vtable; /*0x4ba5d0*/
  v7 = __2_YAPAXI_Z(0x6Cu); /*0x4ba5db*/
  this->q008 = v7; /*0x4ba5e2*/
  if ( v7 ) /*0x4ba5e5*/
  {
    memset(v7, 0, 0x6Cu); /*0x4ba5f2*/
    **((_DWORD **)this + 8) = 108; /*0x4ba5f7*/
    *(_DWORD *)(this->q008 + 4) = 7; /*0x4ba604*/
    *(_DWORD *)(this->q008 + 12) = a2; /*0x4ba60e*/
    *(_DWORD *)(this->q008 + 8) = a3; /*0x4ba618*/
    if ( a4 == 1 ) /*0x4ba621*/
      *(_DWORD *)(this->q008 + 104) = 2048; /*0x4ba626*/
    if ( g_DDraw_Force3D && a5 ) /*0x4ba639*/
      *(_DWORD *)(this->q008 + 104) = 8256; /*0x4ba63e*/
    g_lpDirectDraw7->lpVtbl->CreateSurface( /*0x4ba653*/
      g_lpDirectDraw7,
      (LPDDSURFACEDESC)this->q008,
      (LPDIRECTDRAWSURFACE *)(this + 28),
      0);
    if ( *v6 ) /*0x4ba656*/
    {
      memset(*((void **)this + 8), 0, 0x6Cu); /*0x4ba665*/
      **((_DWORD **)this + 8) = 108; /*0x4ba66a*/
      (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*v6 + 88))(*v6, this->q008); /*0x4ba67a*/
      v8 = this->q008; /*0x4ba67d*/
      this->q004 = (unsigned int)(*(_DWORD *)(v8 + 84) + 7) >> 3; /*0x4ba689*/
      this->q019 = (*(_DWORD *)(v8 + 104) & 0x4000) != 0; /*0x4ba695*/
    }
  }
  return this; /*0x4ba69a*/
}



// ==== 0x004BA6B0  DSurface::Destroy  this=DSurface  sig=csp ====
int __thiscall DSurface::Destroy(DSurface *this)
{
  char DSurface_field_0x18; // al
  int v3; // eax
  int result; // eax

  DSurface_field_0x18 = (char)this->DSurface_field_0x18; /*0x4ba6b6*/
  this->DSurface_field_0x0 = &DSurface_Vtable; /*0x4ba6b9*/
  if ( DSurface_field_0x18 ) /*0x4ba6c1*/
  {
    v3 = this->DSurface_field_0x1C[0]; /*0x4ba6c3*/
    if ( v3 ) /*0x4ba6c8*/
    {
      if ( g_DDraw_Clipper ) /*0x4ba6d0*/
      {
        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v3 + 112))(v3, 0); /*0x4ba6d6*/
        (*(void (__stdcall **)(int))(*(_DWORD *)g_DDraw_Clipper + 8))(g_DDraw_Clipper); /*0x4ba6e1*/
        g_DDraw_Clipper = 0; /*0x4ba6e4*/
      }
    }
  }
  __3_YAXPAX_Z(this->DSurface_field_0x20); /*0x4ba6ee*/
  result = this->DSurface_field_0x1C[0]; /*0x4ba6f3*/
  this->DSurface_field_0x20 = 0; /*0x4ba6fb*/
  if ( result ) /*0x4ba6fe*/
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x4ba703*/
  this->DSurface_field_0x1C[0] = 0; /*0x4ba706*/
  this->DSurface_field_0x0 = &Surface_Vtable; /*0x4ba709*/
  return result; /*0x4ba70f*/
}



// ==== 0x004BA770  DSurface::CreatePrimary  this=DSurface  sig=csp ====
_DWORD *__thiscall DSurface::CreatePrimary(DSurface *this)
{
  char v1; // bl
  int v2; // eax
  _DWORD *v3; // esi
  void *v4; // edi
  _DWORD *v5; // ebp
  int *v6; // esi
  UINT v7; // eax
  int v8; // eax
  DSurface *v9; // eax
  _DWORD *BackBuffer; // eax
  _DWORD *v11; // eax
  bool v12; // dl
  int v13; // edx
  int v14; // eax
  int v15; // edi
  HWND ActiveWindow; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // esi
  int v23; // ecx
  int v24; // eax
  int v25; // edx
  int v28; // [esp+20h] [ebp-8h] BYREF
  int v29; // [esp+24h] [ebp-4h] BYREF

  Debug::Log(); /*0x4ba780*/
  v1 = DDraw::CheckCapabilities(); /*0x4ba78d*/
  g_DDraw_AllowStretchBlits = (v1 & 0x40) != 0; /*0x4ba79b*/
  Debug::Log(); /*0x4ba7b4*/
  if ( (v1 & 0x10) == 0 ) /*0x4ba7bf*/
    LOBYTE(stru_820320.Start) = 0; /*0x4ba7c1*/
  Debug::Log(); /*0x4ba7e3*/
  v2 = __2_YAPAXI_Z(0x24u); /*0x4ba7ea*/
  v3 = (_DWORD *)v2; /*0x4ba7ef*/
  if ( v2 ) /*0x4ba7f8*/
  {
    *(_DWORD *)(v2 + 4) = 0; /*0x4ba7fc*/
    *(_DWORD *)(v2 + 8) = 0; /*0x4ba7ff*/
    *(_DWORD *)(v2 + 12) = 0; /*0x4ba802*/
    *(_DWORD *)(v2 + 16) = 0; /*0x4ba805*/
    *(_DWORD *)(v2 + 20) = 0; /*0x4ba808*/
    *(_BYTE *)(v2 + 24) = 0; /*0x4ba80b*/
    *(_BYTE *)(v2 + 25) = 0; /*0x4ba80e*/
    *(_DWORD *)(v2 + 28) = 0; /*0x4ba811*/
    *(_DWORD *)v2 = &DSurface_Vtable; /*0x4ba814*/
    v4 = (void *)__2_YAPAXI_Z(0x6Cu); /*0x4ba822*/
    v3[8] = v4; /*0x4ba82b*/
    v5 = v3; /*0x4ba82e*/
    memset(v4, 0, 0x6Cu); /*0x4ba830*/
    *(_DWORD *)v3[8] = 108; /*0x4ba835*/
  }
  else
  {
    v5 = 0; /*0x4ba83d*/
  }
  *(_DWORD *)(v5[8] + 4) = 1; /*0x4ba84d*/
  *(_DWORD *)(v5[8] + 104) = 512; /*0x4ba85b*/
  if ( this ) /*0x4ba862*/
  {
    *(_DWORD *)(v5[8] + 104) |= 0x18u; /*0x4ba86d*/
    *(_DWORD *)(v5[8] + 4) |= 0x20u; /*0x4ba879*/
    *(_DWORD *)(v5[8] + 20) = this != 0; /*0x4ba87f*/
  }
  Debug::Log(); /*0x4ba887*/
  v6 = v5 + 7; /*0x4ba897*/
  v7 = g_lpDirectDraw7->lpVtbl->CreateSurface( /*0x4ba8a1*/
         g_lpDirectDraw7,
         (LPDDSURFACEDESC)v5[8],
         (LPDIRECTDRAWSURFACE *)(v5 + 7),
         0);
  if ( !v7 ) /*0x4ba8a8*/
  {
    Debug::Log(); /*0x4ba8b3*/
    if ( this ) /*0x4ba8bd*/
    {
      v8 = *v6; /*0x4ba8bf*/
      v28 = 4; /*0x4ba8ca*/
      if ( !(*(int (__stdcall **)(int, int *, int *))(*(_DWORD *)v8 + 48))(v8, &v28, &v29) ) /*0x4ba8d6*/
      {
        v9 = (DSurface *)__2_YAPAXI_Z(0x24u); /*0x4ba8df*/
        if ( v9 ) /*0x4ba8e9*/
          BackBuffer = DSurface::CreateBackBuffer(v9, v29); /*0x4ba8f2*/
        else
          BackBuffer = 0; /*0x4ba8f9*/
        this->DSurface_field_0x0 = BackBuffer; /*0x4ba8ff*/
      }
    }
    memset((void *)v5[8], 0, 0x6Cu); /*0x4ba90b*/
    *(_DWORD *)v5[8] = 108; /*0x4ba910*/
    if ( (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)*v6 + 88))(*v6, v5[8]) ) /*0x4ba91f*/
      Debug::Log(); /*0x4ba92b*/
    v11 = (_DWORD *)v5[8]; /*0x4ba933*/
    v5[4] = (unsigned int)(v11[21] + 7) >> 3; /*0x4ba948*/
    v12 = (v11[26] & 0x4000) != 0; /*0x4ba951*/
    *((_BYTE *)v5 + 24) = 1; /*0x4ba954*/
    *((_BYTE *)v5 + 25) = v12; /*0x4ba958*/
    v5[1] = v11[3]; /*0x4ba95e*/
    v13 = v11[2]; /*0x4ba961*/
    v14 = *v6; /*0x4ba964*/
    v5[2] = v13; /*0x4ba966*/
    g_DDraw_PrimarySurface = v14; /*0x4ba969*/
    if ( !g_lpDirectDraw7->lpVtbl->CreateClipper(g_lpDirectDraw7, 0, (LPDIRECTDRAWCLIPPER *)&g_DDraw_Clipper, 0) ) /*0x4ba976*/
    {
      v15 = *(_DWORD *)g_DDraw_Clipper; /*0x4ba983*/
      ActiveWindow = GetActiveWindow(); /*0x4ba985*/
      if ( !(*(int (__stdcall **)(int, _DWORD, HWND))(v15 + 32))(g_DDraw_Clipper, 0, ActiveWindow) ) /*0x4ba994*/
        (*(void (__stdcall **)(int, int))(*(_DWORD *)*v6 + 112))(*v6, g_DDraw_Clipper); /*0x4ba9a7*/
    }
    qmemcpy(&g_DDraw_PixelFormatDesc, (const void *)(v5[8] + 72), 0x20u); /*0x4ba9ba*/
    if ( (*(int (__thiscall **)(_DWORD *))(*v5 + 112))(v5) != 2 ) /*0x4ba9c7*/
      goto LABEL_60; /*0x4ba9c7*/
    v17 = g_DDraw_RedMask; /*0x4ba9cd*/
    v18 = 0; /*0x4ba9d2*/
    v19 = 0; /*0x4ba9d4*/
    g_BitShift_Red = 0; /*0x4ba9d6*/
    g_BitShift_Green_0 = 0; /*0x4ba9dc*/
    do /*0x4ba9ec*/
    {
      if ( (v17 & 1) != 0 ) /*0x4ba9e4*/
        break; /*0x4ba9e4*/
      v17 >>= 1; /*0x4ba9e6*/
      ++v18; /*0x4ba9e8*/
    }
    while ( v18 < 16 ); /*0x4ba9ec*/
    g_BitShift_Red = v18; /*0x4ba9ee*/
    do /*0x4ba9fe*/
    {
      if ( (v17 & 0x80u) != 0 ) /*0x4ba9f6*/
        break; /*0x4ba9f6*/
      LOBYTE(v17) = 2 * v17; /*0x4ba9f8*/
      ++v19; /*0x4ba9fa*/
    }
    while ( v19 < 8 ); /*0x4ba9fe*/
    v20 = g_DDraw_GreenMask; /*0x4baa00*/
    v21 = 0; /*0x4baa05*/
    v22 = 0; /*0x4baa07*/
    g_BitShift_Green_0 = v19; /*0x4baa09*/
    g_BitMask_Green = 0; /*0x4baa0f*/
    g_BitMask_Blue = 0; /*0x4baa15*/
    do /*0x4baa25*/
    {
      if ( (v20 & 1) != 0 ) /*0x4baa1d*/
        break; /*0x4baa1d*/
      ++v21; /*0x4baa1f*/
      v20 >>= 1; /*0x4baa20*/
    }
    while ( v21 < 16 ); /*0x4baa25*/
    g_BitMask_Green = v21; /*0x4baa27*/
    do /*0x4baa37*/
    {
      if ( (v20 & 0x80u) != 0 ) /*0x4baa2f*/
        break; /*0x4baa2f*/
      ++v22; /*0x4baa31*/
      LOBYTE(v20) = 2 * v20; /*0x4baa32*/
    }
    while ( v22 < 8 ); /*0x4baa37*/
    v23 = g_DDraw_BlueMask; /*0x4baa39*/
    v24 = 0; /*0x4baa3f*/
    v25 = 0; /*0x4baa41*/
    g_BitMask_Blue = v22; /*0x4baa43*/
    g_BitShift_Blue = 0; /*0x4baa49*/
    g_BitMask_Red = 0; /*0x4baa4e*/
    do /*0x4baa5f*/
    {
      if ( (v23 & 1) != 0 ) /*0x4baa57*/
        break; /*0x4baa57*/
      ++v24; /*0x4baa59*/
      v23 >>= 1; /*0x4baa5a*/
    }
    while ( v24 < 16 ); /*0x4baa5f*/
    g_BitShift_Blue = v24; /*0x4baa61*/
    do /*0x4baa71*/
    {
      if ( (v23 & 0x80u) != 0 ) /*0x4baa69*/
        break; /*0x4baa69*/
      ++v25; /*0x4baa6b*/
      LOBYTE(v23) = 2 * v23; /*0x4baa6c*/
    }
    while ( v25 < 8 ); /*0x4baa71*/
    g_BitMask_Red = v25; /*0x4baa83*/
    stru_820320.Rate = -1; /*0x4baa89*/
    LOWORD(g_DDraw_Gray127) = (127 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4baac1*/
                            | (127 >> v22 << g_BitMask_Green)
                            | (127 >> v25 << v24);
    HIWORD(g_DDraw_Gray127) = (63 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4baaff*/
                            | (63 >> v22 << g_BitMask_Green)
                            | (63 >> v25 << v24);
    word_8A0DEC = (31 >> g_BitShift_Green_0 << g_BitShift_Red) | (31 >> v22 << g_BitMask_Green) | (31 >> v25 << v24); /*0x4bab38*/
    if ( v24 ) /*0x4bab3f*/
      goto LABEL_60; /*0x4bab3f*/
    if ( v25 == 3 ) /*0x4bab4c*/
    {
      if ( g_BitMask_Green != 5 ) /*0x4bab55*/
        goto LABEL_60; /*0x4bab55*/
      if ( v22 != 3 ) /*0x4bab5d*/
      {
        if ( v22 == 2 && g_BitShift_Red == 11 && g_BitShift_Green_0 == 3 ) /*0x4babd2*/
        {
          stru_820320.Rate = 2; /*0x4babd9*/
          Debug::Log(); /*0x4babdf*/
          return v5; /*0x4babf0*/
        }
        goto LABEL_60; /*0x4babd2*/
      }
      if ( g_BitShift_Red == 10 ) /*0x4bab66*/
      {
        if ( g_BitShift_Green_0 == 3 ) /*0x4bab72*/
        {
          stru_820320.Rate = 0; /*0x4bab7d*/
          Debug::Log(); /*0x4bab87*/
          return v5; /*0x4bab98*/
        }
        goto LABEL_60; /*0x4bab72*/
      }
      if ( g_BitShift_Red != 11 || g_BitShift_Green_0 != 2 ) /*0x4bac05*/
      {
LABEL_60:
        Debug::Log(); /*0x4bac11*/
        return v5; /*0x4bac27*/
      }
    }
    else if ( v25 != 2 || g_BitMask_Green != 6 || v22 != 3 || g_BitShift_Red != 11 || g_BitShift_Green_0 != 3 ) /*0x4babba*/
    {
      goto LABEL_60; /*0x4babba*/
    }
    stru_820320.Rate = 1; /*0x4bac07*/
    goto LABEL_60; /*0x4bac07*/
  }
  DDraw::LogError(v7, 1); /*0x4bac2f*/
  Debug::Log(); /*0x4bac3a*/
  if ( v5 ) /*0x4bac44*/
    (*(void (__thiscall **)(_DWORD *, int))*v5)(v5, 1); /*0x4bac4d*/
  return 0; /*0x4bab91*/
}



// ==== 0x004BAC60  DSurface::CreateBackBuffer  this=DSurface  sig=csp ====
_DWORD *__thiscall DSurface::CreateBackBuffer(DSurface *this, int a2)
{
  void *v3; // edi
  void *DSurface_field_0x20; // eax

  this->DSurface_field_0x4 = 0; /*0x4bac6b*/
  this->DSurface_field_0x8 = 0; /*0x4bac6e*/
  this->DSurface_field_0xC = 0; /*0x4bac71*/
  this->DSurface_field_0x10 = 0; /*0x4bac74*/
  this->DSurface_field_0x14 = 0; /*0x4bac77*/
  LOBYTE(this->DSurface_field_0x18) = 0; /*0x4bac7a*/
  BYTE1(this->DSurface_field_0x18) = 0; /*0x4bac7d*/
  this->DSurface_field_0x1C[0] = a2; /*0x4bac80*/
  this->DSurface_field_0x20 = 0; /*0x4bac83*/
  this->DSurface_field_0x0 = &DSurface_Vtable; /*0x4bac86*/
  if ( a2 ) /*0x4bac8c*/
  {
    v3 = (void *)__2_YAPAXI_Z(0x6Cu); /*0x4bac96*/
    this->DSurface_field_0x20 = v3; /*0x4bac9f*/
    memset(v3, 0, 0x6Cu); /*0x4baca2*/
    *(_DWORD *)this->DSurface_field_0x20 = 108; /*0x4bacaa*/
    if ( !(*(int (__stdcall **)(int, void *))(*(_DWORD *)this->DSurface_field_0x1C[0] + 88))( /*0x4bacba*/
            this->DSurface_field_0x1C[0],
            this->DSurface_field_0x20) )
    {
      DSurface_field_0x20 = this->DSurface_field_0x20; /*0x4bacc2*/
      this->DSurface_field_0x10 = (void *)((unsigned int)(*((_DWORD *)DSurface_field_0x20 + 21) + 7) >> 3); /*0x4bacce*/
      BYTE1(this->DSurface_field_0x18) = (*((_DWORD *)DSurface_field_0x20 + 26) & 0x4000) != 0; /*0x4bacda*/
      this->DSurface_field_0x4 = (void *)*((_DWORD *)DSurface_field_0x20 + 3); /*0x4bace0*/
      this->DSurface_field_0x8 = (void *)*((_DWORD *)DSurface_field_0x20 + 2); /*0x4bace6*/
    }
  }
  return &this->DSurface_field_0x0; /*0x4baceb*/
}



// ==== 0x004BAD60  DSurface::GetBytesPerPixel  this=DSurface  sig=csp ====
int __thiscall DSurface::GetBytesPerPixel(DSurface *this)
{
  return (int)this->DSurface_field_0x10; /*0x4bad63*/
}



// ==== 0x004BAD70  DSurface::GetPitch  this=DSurface  sig=csp ====
int __thiscall DSurface::GetPitch(DSurface *this)
{
  return *((_DWORD *)this->DSurface_field_0x20 + 4); /*0x4bad76*/
}



// ==== 0x004BAD80  DSurface::Lock  this=DSurface  sig=csp ====
void *__thiscall DSurface::Lock(DSurface *this, int a2, int a3)
{
  int v4; // eax
  void *DSurface_field_0xC; // esi
  void *DSurface_field_0x0; // edx
  int v7; // eax
  void *DSurface_field_0x20; // eax
  int v9; // esi
  _DWORD v11[27]; // [esp+28h] [ebp-6Ch] BYREF

  if ( !g_DDraw_Initialized && !stru_A8EB00.?[412] ) /*0x4bad99*/
    return 0; /*0x4bad99*/
  v4 = this->DSurface_field_0x1C[0]; /*0x4bad9f*/
  if ( v4 && (*(int (__stdcall **)(int))(*(_DWORD *)v4 + 96))(this->DSurface_field_0x1C[0]) == -2005532222 ) /*0x4badb1*/
  {
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0]) /*0x4badca*/
      || (*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
    {
      return 0; /*0x4badcf*/
    }
    DSurface_field_0xC = this->DSurface_field_0xC; /*0x4badd5*/
    if ( (int)DSurface_field_0xC > 0 ) /*0x4badda*/
    {
      DSurface_field_0x0 = this->DSurface_field_0x0; /*0x4baddc*/
      this->DSurface_field_0xC = 0; /*0x4bade0*/
      (*((void (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4bade7*/
      ++this->DSurface_field_0xC; /*0x4badf0*/
      (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4badf5*/
      this->DSurface_field_0xC = DSurface_field_0xC; /*0x4badf8*/
    }
  }
  if ( a2 >= 0 && a3 >= 0 ) /*0x4bae13*/
  {
    if ( this->DSurface_field_0xC ) /*0x4bae19*/
    {
LABEL_14:
      ++this->DSurface_field_0xC; /*0x4bae7c*/
      v9 = a3 * (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4bae90*/
      return (char *)this->DSurface_field_0x14 /*0x4baeac*/
           + a2 * (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this)
           + v9;
    }
    memset(v11, 0, sizeof(v11)); /*0x4bae2d*/
    v7 = this->DSurface_field_0x1C[0]; /*0x4bae2f*/
    v11[0] = 108; /*0x4bae38*/
    if ( !(*(int (__stdcall **)(int, _DWORD, _DWORD *, int, _DWORD))(*(_DWORD *)v7 + 100))(v7, 0, v11, 1, 0) ) /*0x4bae46*/
    {
      qmemcpy(this->DSurface_field_0x20, v11, 0x6Cu); /*0x4bae59*/
      DSurface_field_0x20 = this->DSurface_field_0x20; /*0x4bae5b*/
      this->DSurface_field_0x10 = (void *)((unsigned int)(*((_DWORD *)DSurface_field_0x20 + 21) + 7) >> 3); /*0x4bae67*/
      BYTE1(this->DSurface_field_0x18) = (*((_DWORD *)DSurface_field_0x20 + 26) & 0x4000) != 0; /*0x4bae73*/
      this->DSurface_field_0x14 = (void *)*((_DWORD *)DSurface_field_0x20 + 9); /*0x4bae79*/
      goto LABEL_14; /*0x4bae79*/
    }
  }
  return 0; /*0x4baea5*/
}



// ==== 0x004BAEC0  DSurface::CanLock  this=DSurface  sig=csp ====
int __thiscall DSurface::CanLock(DSurface *this, int a2, int a3)
{
  int result; // eax
  int v5; // eax
  _DWORD v6[27]; // [esp+4h] [ebp-6Ch] BYREF

  result = (int)this->DSurface_field_0xC; /*0x4baec6*/
  if ( !result ) /*0x4baecb*/
  {
    memset(v6, 0, sizeof(v6)); /*0x4baed9*/
    v5 = this->DSurface_field_0x1C[0]; /*0x4baedb*/
    v6[0] = 108; /*0x4baee6*/
    result = (*(int (__stdcall **)(int, _DWORD, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v5 + 100))(v5, 0, v6, 0, 0); /*0x4baef4*/
    if ( result ) /*0x4baefa*/
    {
      LOBYTE(result) = 0; /*0x4baefc*/
      return result; /*0x4baf02*/
    }
    result = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)this->DSurface_field_0x1C[0] + 128))( /*0x4baf10*/
               this->DSurface_field_0x1C[0],
               v6[9]);
  }
  LOBYTE(result) = 1; /*0x4baf16*/
  return result; /*0x4baefe*/
}



// ==== 0x004BAF20  DSurface::CheckBltStatus  this=DSurface  sig=csp ====
BOOL __thiscall DSurface::CheckBltStatus(DSurface *this)
{
  return (*(int (__stdcall **)(int, int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 52))( /*0x4baf30*/
           this->DSurface_field_0x1C[0],
           1) == 0;
}



// ==== 0x004BAF40  DSurface::Unlock  this=DSurface  sig=csp ====
int __thiscall DSurface::Unlock(DSurface *this)
{
  int v2; // eax
  void *DSurface_field_0xC; // edi
  void *DSurface_field_0x0; // edx
  int result; // eax

  if ( g_DDraw_Initialized || stru_A8EB00.?[412] ) /*0x4baf54*/
  {
    v2 = this->DSurface_field_0x1C[0]; /*0x4baf56*/
    if ( v2 ) /*0x4baf5b*/
    {
      if ( (*(int (__stdcall **)(int))(*(_DWORD *)v2 + 96))(this->DSurface_field_0x1C[0]) == -2005532222 /*0x4baf7d*/
        && !(*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0])
        && !(*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
      {
        DSurface_field_0xC = this->DSurface_field_0xC; /*0x4baf84*/
        if ( (int)DSurface_field_0xC > 0 ) /*0x4baf89*/
        {
          DSurface_field_0x0 = this->DSurface_field_0x0; /*0x4baf8b*/
          this->DSurface_field_0xC = 0; /*0x4baf93*/
          (*((void (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4baf96*/
          ++this->DSurface_field_0xC; /*0x4baf9f*/
          (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bafa4*/
          this->DSurface_field_0xC = DSurface_field_0xC; /*0x4bafa7*/
        }
      }
    }
  }
  result = (int)this->DSurface_field_0xC; /*0x4bafaa*/
  if ( result <= 0 ) /*0x4bafaf*/
  {
    LOBYTE(result) = 0; /*0x4bafd6*/
  }
  else
  {
    this->DSurface_field_0xC = (void *)--result; /*0x4bafb4*/
    if ( !result ) /*0x4bafb7*/
    {
      result = (*(int (__stdcall **)(int, void *))(*(_DWORD *)this->DSurface_field_0x1C[0] + 128))( /*0x4bafc3*/
                 this->DSurface_field_0x1C[0],
                 this->DSurface_field_0x14);
      this->DSurface_field_0x14 = 0; /*0x4bafc9*/
    }
    LOBYTE(result) = 1; /*0x4bafd1*/
  }
  return result; /*0x4bafd0*/
}



// ==== 0x004BAFE0  ObjectClass::method_4BAFE0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_4BAFE0(ObjectClass *this)
{
  int referenceCount; // eax

  referenceCount = this->?; /*0x4bafe0*/
  return referenceCount && (*(int (__stdcall **)(int))(*(_DWORD *)referenceCount + 96))(referenceCount) == -2005532222; /*0x4baff9*/
}



// ==== 0x004BB000  DSurface::RestoreIfLost  this=DSurface  sig=csp ====
char __thiscall DSurface::RestoreIfLost(DSurface *this)
{
  int v3; // eax
  void *DSurface_field_0xC; // edi
  void *DSurface_field_0x0; // edx

  if ( !g_DDraw_Initialized && !stru_A8EB00.?[412] ) /*0x4bb014*/
    return 0; /*0x4bb014*/
  v3 = this->DSurface_field_0x1C[0]; /*0x4bb01b*/
  if ( v3 && (*(int (__stdcall **)(int))(*(_DWORD *)v3 + 96))(this->DSurface_field_0x1C[0]) == -2005532222 ) /*0x4bb02d*/
  {
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0]) /*0x4bb042*/
      || (*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
    {
      return 0; /*0x4bb01a*/
    }
    DSurface_field_0xC = this->DSurface_field_0xC; /*0x4bb049*/
    if ( (int)DSurface_field_0xC > 0 ) /*0x4bb04e*/
    {
      DSurface_field_0x0 = this->DSurface_field_0x0; /*0x4bb050*/
      this->DSurface_field_0xC = 0; /*0x4bb058*/
      (*((void (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4bb05b*/
      ++this->DSurface_field_0xC; /*0x4bb064*/
      (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bb069*/
      this->DSurface_field_0xC = DSurface_field_0xC; /*0x4bb06c*/
    }
  }
  return 1; /*0x4bb016*/
}



// ==== 0x004BB080  DSurface::BlitPart  this=DSurface  sig=csp ====
int __thiscall DSurface::BlitPart(DSurface *this, int a2, int a3, int a4, int a5, int a6)
{
  int (__thiscall **DSurface_field_0x0)(DSurface *, int); // ebx
  int v8; // eax
  int v9; // eax
  _BYTE v11[28]; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v12[4]; // [esp+28h] [ebp-4h] BYREF

  DSurface_field_0x0 = (int (__thiscall **)(DSurface *, int))this->DSurface_field_0x0; /*0x4bb098*/
  v8 = (*(int (__thiscall **)(int, _BYTE *, int, int, int))(*(_DWORD *)a3 + 120))(a3, v11, a4, a5, a6); /*0x4bb0a6*/
  v9 = (*((int (__thiscall **)(DSurface *, _BYTE *, int, int, int))this->DSurface_field_0x0 + 30))( /*0x4bb0b9*/
         this,
         v12,
         a5,
         a3,
         v8);
  return DSurface_field_0x0[3](this, v9); /*0x4bb0c2*/
}



// ==== 0x004BB0D0  DSurface::Blit  this=DSurface  sig=csp ====
char __thiscall DSurface::Blit(DSurface *this, int *a2, int *a3, _DWORD *a4, int *a5, int *a6, int a7, char a8)
{
  int v9; // ecx
  void **v10; // ebx
  int v11; // ebx
  bool v12; // zf
  char v13; // al
  int v14; // eax
  void *DSurface_field_0x0; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int (__thiscall **v24)(void **, _DWORD *); // edx
  Rect *v25; // eax
  int Y; // ecx
  int Width; // edx
  int v28; // esi
  int v29; // eax
  bool v30; // cc
  int Height; // ebx
  int X; // eax
  int (__thiscall **v33)(DSurface *, int *); // edx
  int *v34; // edi
  int v35; // eax
  int v36; // ebx
  int v37; // ecx
  int v38; // edx
  int v39; // esi
  int v40; // edi
  int v41; // edx
  char v42; // [esp+1Bh] [ebp-85h]
  Rect v43; // [esp+1Ch] [ebp-84h] BYREF
  void *DSurface_field_0xC; // [esp+2Ch] [ebp-74h]
  int v45; // [esp+30h] [ebp-70h]
  int v46; // [esp+34h] [ebp-6Ch]
  int v47; // [esp+38h] [ebp-68h]
  DSurface *v48; // [esp+3Ch] [ebp-64h]
  int v49; // [esp+40h] [ebp-60h] BYREF
  int v50; // [esp+44h] [ebp-5Ch]
  int v51; // [esp+48h] [ebp-58h]
  int v52; // [esp+4Ch] [ebp-54h]
  _DWORD v53[2]; // [esp+50h] [ebp-50h] BYREF
  int v54; // [esp+58h] [ebp-48h]
  int v55; // [esp+5Ch] [ebp-44h]
  int v56; // [esp+60h] [ebp-40h] BYREF
  int v57; // [esp+64h] [ebp-3Ch]
  int v58; // [esp+68h] [ebp-38h]
  int v59; // [esp+6Ch] [ebp-34h]
  int v60; // [esp+70h] [ebp-30h] BYREF
  int v61; // [esp+74h] [ebp-2Ch]
  int v62; // [esp+78h] [ebp-28h]
  int v63; // [esp+7Ch] [ebp-24h]
  int v64; // [esp+80h] [ebp-20h] BYREF
  int v65; // [esp+84h] [ebp-1Ch]
  int v66; // [esp+88h] [ebp-18h]
  int v67; // [esp+8Ch] [ebp-14h]
  int v68[4]; // [esp+90h] [ebp-10h] BYREF

  v9 = a2[2]; /*0x4bb0e1*/
  v48 = this; /*0x4bb0e8*/
  if ( v9 <= 0 || a2[3] <= 0 || a5[2] <= 0 || a5[3] <= 0 || a3[2] <= 0 || a3[3] <= 0 || a6[2] <= 0 || a6[3] <= 0 ) /*0x4bb14e*/
    return 0; /*0x4bb14e*/
  v10 = (void **)a4; /*0x4bb154*/
  v42 = 0; /*0x4bb15b*/
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a4 + 132))(a4) /*0x4bb19d*/
    || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a4 + 108))(a4) == 1
    || (_BYTE)a7 == 1
    || (v11 = (*(int (__thiscall **)(_DWORD *))(*a4 + 112))(a4),
        v12 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this) == v11,
        v10 = (void **)a4,
        !v12) )
  {
    v42 = 1; /*0x4bb19f*/
  }
  if ( LOBYTE(this->DSurface_field_0x18) == 1 && g_DDraw_Initialized == 1 ) /*0x4bb1b1*/
    v13 = 0; /*0x4bb1b3*/
  else
    v13 = a8; /*0x4bb1b7*/
  if ( !v42 /*0x4bb1f8*/
    && v13 == 1
    && (!BYTE1(this->DSurface_field_0x18)
     || (*((unsigned __int8 (__thiscall **)(void **))*v10 + 33))(v10) == 1 && !*((_BYTE *)v10 + 25))
    && a6[2] == a3[2]
    && a6[3] == a3[3] )
  {
    v42 = 1; /*0x4bb1fa*/
  }
  if ( !g_DDraw_Initialized && !stru_A8EB00.?[412] ) /*0x4bb20f*/
    return 0; /*0x4bb20f*/
  v14 = this->DSurface_field_0x1C[0]; /*0x4bb215*/
  if ( v14 && (*(int (__stdcall **)(int))(*(_DWORD *)v14 + 96))(this->DSurface_field_0x1C[0]) == -2005532222 ) /*0x4bb227*/
  {
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0]) /*0x4bb240*/
      || (*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
    {
      return 0; /*0x4bb245*/
    }
    DSurface_field_0xC = this->DSurface_field_0xC; /*0x4bb250*/
    if ( (int)DSurface_field_0xC > 0 ) /*0x4bb254*/
    {
      DSurface_field_0x0 = this->DSurface_field_0x0; /*0x4bb256*/
      this->DSurface_field_0xC = 0; /*0x4bb25d*/
      (*((void (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4bb264*/
      ++this->DSurface_field_0xC; /*0x4bb26d*/
      (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bb273*/
      this->DSurface_field_0xC = DSurface_field_0xC; /*0x4bb27a*/
    }
  }
  if ( v42 == 1 ) /*0x4bb282*/
    return XSurface::BlitPart((XSurface *)this, (void **)a3, v10, (void **)a6, (void **)a7, 1); /*0x4bb2a2*/
  v17 = a3[1]; /*0x4bb2a7*/
  v18 = a3[2]; /*0x4bb2aa*/
  v49 = *a3; /*0x4bb2ad*/
  v19 = a3[3]; /*0x4bb2b1*/
  v50 = v17; /*0x4bb2b4*/
  v20 = *a6; /*0x4bb2b8*/
  v52 = v19; /*0x4bb2ba*/
  v21 = a6[2]; /*0x4bb2be*/
  v51 = v18; /*0x4bb2c1*/
  v22 = a6[1]; /*0x4bb2c5*/
  v56 = v20; /*0x4bb2c8*/
  v23 = a6[3]; /*0x4bb2cc*/
  v58 = v21; /*0x4bb2cf*/
  v57 = v22; /*0x4bb2d3*/
  v24 = (int (__thiscall **)(void **, _DWORD *))*v10; /*0x4bb2d7*/
  v59 = v23; /*0x4bb2dd*/
  v25 = (Rect *)v24[30](v10, v53); /*0x4bb2e4*/
  Y = 0; /*0x4bb2eb*/
  Width = 0; /*0x4bb2ed*/
  v28 = 0; /*0x4bb2f1*/
  v43 = *v25; /*0x4bb2f3*/
  v45 = a5[2]; /*0x4bb318*/
  if ( v45 <= 0 ) /*0x4bb31c*/
    goto LABEL_53; /*0x4bb31c*/
  v46 = a5[3]; /*0x4bb327*/
  if ( v46 <= 0 || v25->Width <= 0 || v25->Height <= 0 ) /*0x4bb341*/
    goto LABEL_53; /*0x4bb341*/
  v29 = *a5; /*0x4bb352*/
  v30 = v43.X < *a5; /*0x4bb354*/
  v47 = *a5; /*0x4bb356*/
  if ( v30 ) /*0x4bb35a*/
  {
    v43.Width += v43.X - v29; /*0x4bb364*/
    v43.X = v47; /*0x4bb36c*/
  }
  if ( v43.Width < 1 ) /*0x4bb375*/
    goto LABEL_53; /*0x4bb375*/
  DSurface_field_0xC = (void *)a5[1]; /*0x4bb38b*/
  if ( v43.Y < (int)DSurface_field_0xC ) /*0x4bb38f*/
  {
    v43.Height += v43.Y - (_DWORD)DSurface_field_0xC; /*0x4bb399*/
    v43.Y = (int)DSurface_field_0xC; /*0x4bb3a1*/
  }
  if ( v43.Height < 1 ) /*0x4bb3aa*/
    goto LABEL_53; /*0x4bb3aa*/
  if ( v43.X + v43.Width > v45 + v47 ) /*0x4bb3be*/
    v43.Width = v45 + v47 - v43.X; /*0x4bb3cc*/
  if ( v43.Width < 1 ) /*0x4bb3d5*/
    goto LABEL_53; /*0x4bb3d5*/
  Height = v43.Height; /*0x4bb3e5*/
  if ( v43.Height + v43.Y > (int)DSurface_field_0xC + v46 ) /*0x4bb3ed*/
    Height = (int)DSurface_field_0xC + v46 - v43.Y; /*0x4bb3f3*/
  if ( Height < 1 ) /*0x4bb3f8*/
  {
LABEL_53:
    X = 0; /*0x4bb40a*/
  }
  else
  {
    X = v43.X; /*0x4bb3fa*/
    Y = v43.Y; /*0x4bb3fe*/
    Width = v43.Width; /*0x4bb402*/
    v28 = Height; /*0x4bb406*/
  }
  v61 = Y; /*0x4bb40c*/
  v60 = X; /*0x4bb414*/
  v62 = Width; /*0x4bb418*/
  v33 = (int (__thiscall **)(DSurface *, int *))v48->DSurface_field_0x0; /*0x4bb41c*/
  v63 = v28; /*0x4bb426*/
  v34 = (int *)v33[30](v48, v68); /*0x4bb439*/
  Rect::Set(&v43, 0, 0, 0, 0); /*0x4bb43b*/
  v35 = *v34; /*0x4bb449*/
  v36 = a2[2]; /*0x4bb44b*/
  v37 = v34[1]; /*0x4bb450*/
  v38 = v34[2]; /*0x4bb453*/
  v54 = v38; /*0x4bb456*/
  v39 = v34[3]; /*0x4bb45a*/
  if ( v36 <= 0 ) /*0x4bb45d*/
    goto LABEL_71; /*0x4bb45d*/
  v45 = a2[3]; /*0x4bb468*/
  if ( v45 <= 0 || v34[2] <= 0 || v34[3] <= 0 ) /*0x4bb47a*/
    goto LABEL_71; /*0x4bb47a*/
  v40 = *a2; /*0x4bb483*/
  if ( v35 < *a2 ) /*0x4bb488*/
  {
    v38 += v35 - v40; /*0x4bb48c*/
    v35 = *a2; /*0x4bb48e*/
    v54 = v38; /*0x4bb490*/
  }
  if ( v38 < 1 ) /*0x4bb497*/
    goto LABEL_71; /*0x4bb497*/
  v46 = a2[1]; /*0x4bb49e*/
  if ( v37 < v46 ) /*0x4bb4a2*/
  {
    v39 += v37 - v46; /*0x4bb4a6*/
    v37 = v46; /*0x4bb4a8*/
  }
  if ( v39 < 1 ) /*0x4bb4ad*/
    goto LABEL_71; /*0x4bb4ad*/
  v41 = v35 + v38 <= v40 + v36 ? v54 : v36 + v40 - v35;
  if ( v41 < 1 ) /*0x4bb4c7*/
    goto LABEL_71; /*0x4bb4c7*/
  if ( v39 + v37 > v46 + v45 ) /*0x4bb4d8*/
    v39 = v46 + v45 - v37; /*0x4bb4dc*/
  if ( v39 < 1 ) /*0x4bb4e1*/
  {
LABEL_71:
    v35 = v43.X; /*0x4bb4e3*/
    v37 = v43.Y; /*0x4bb4e7*/
    v41 = v43.Width; /*0x4bb4eb*/
    v39 = v43.Height; /*0x4bb4ef*/
  }
  v65 = v37; /*0x4bb4f3*/
  v66 = v41; /*0x4bb4f7*/
  v64 = v35; /*0x4bb513*/
  v67 = v39; /*0x4bb51a*/
  if ( (unsigned __int8)IntersectSurfaceRects(&v49, (int)&v64, &v56, (int)&v60) ) /*0x4bb521*/
  {
    v53[0] = v64 + v49; /*0x4bb544*/
    v53[1] = v65 + v50; /*0x4bb552*/
    v55 = v50 + v65 + v52; /*0x4bb56e*/
    v54 = v49 + v64 + v51; /*0x4bb576*/
    v43.X = v60 + v56; /*0x4bb57d*/
    v43.Y = v61 + v57; /*0x4bb588*/
    v43.Height = v57 + v61 + v59; /*0x4bb5a0*/
    v43.Width = v56 + v60 + v58; /*0x4bb5a4*/
    return (*(int (__stdcall **)(int, _DWORD *, _DWORD, Rect *, int, _DWORD))(*(_DWORD *)v48->DSurface_field_0x1C[0] + 20))( /*0x4bb5d5*/
             v48->DSurface_field_0x1C[0],
             v53,
             a4[7],
             &v43,
             0x1000000,
             0) == 0;
  }
  return 0; /*0x4bb298*/
}



// ==== 0x004BB5F0  DSurface::FillRect  this=DSurface  sig=csp ====
int __thiscall DSurface::FillRect(DSurface *this, int a2, int a3)
{
  int v4; // eax
  int result; // eax
  _BYTE v6[16]; // [esp+4h] [ebp-10h] BYREF

  v4 = (*((int (__thiscall **)(DSurface *, _BYTE *))this->DSurface_field_0x0 + 30))(this, v6); /*0x4bb609*/
  LOBYTE(result) = DSurface::FillRectEx(this, v4, a2, a3); /*0x4bb60f*/
  return result; /*0x4bb614*/
}



// ==== 0x004BB620  DSurface::FillRectEx  this=DSurface  sig=csp ====
char __thiscall DSurface::FillRectEx(DSurface *this, int a2, int a3, int a4)
{
  int v5; // eax
  void *DSurface_field_0xC; // ebx
  void *DSurface_field_0x0; // edx
  int *v8; // eax
  int *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ebx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // edi
  int *v18; // edi
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // edi
  int v23; // esi
  int v25; // [esp+20h] [ebp-B4h] BYREF
  int v26; // [esp+24h] [ebp-B0h]
  int v27; // [esp+28h] [ebp-ACh]
  int v28; // [esp+2Ch] [ebp-A8h]
  _DWORD v29[4]; // [esp+30h] [ebp-A4h] BYREF
  int v30[4]; // [esp+40h] [ebp-94h] BYREF
  _DWORD v31[4]; // [esp+50h] [ebp-84h] BYREF
  char v32[16]; // [esp+60h] [ebp-74h] BYREF
  _DWORD v33[25]; // [esp+70h] [ebp-64h] BYREF

  if ( this->DSurface_field_0x1C[0] && *(int *)(a3 + 8) > 0 && *(int *)(a3 + 12) > 0 ) /*0x4bb64d*/
  {
    if ( !LOBYTE(stru_820320.Start) /*0x4bb675*/
      || (*((unsigned __int8 (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 27))(this)
      || (*(int (__stdcall **)(int, int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 52))(
           this->DSurface_field_0x1C[0],
           1) )
    {
      return XSurface::FillRectEx((XSurface *)this, (_DWORD *)a2, (int *)a3, a4); /*0x4bb81d*/
    }
    if ( g_DDraw_Initialized || stru_A8EB00.?[412] ) /*0x4bb690*/
    {
      v5 = this->DSurface_field_0x1C[0]; /*0x4bb696*/
      if ( !v5 || (*(int (__stdcall **)(int))(*(_DWORD *)v5 + 96))(this->DSurface_field_0x1C[0]) != -2005532222 ) /*0x4bb6a8*/
        goto LABEL_15; /*0x4bb6a8*/
      if ( !(*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0]) /*0x4bb6c1*/
        && !(*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
      {
        DSurface_field_0xC = this->DSurface_field_0xC; /*0x4bb6cc*/
        if ( (int)DSurface_field_0xC > 0 ) /*0x4bb6d1*/
        {
          DSurface_field_0x0 = this->DSurface_field_0x0; /*0x4bb6d3*/
          this->DSurface_field_0xC = 0; /*0x4bb6db*/
          (*((void (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4bb6de*/
          ++this->DSurface_field_0xC; /*0x4bb6e7*/
          (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bb6ec*/
          this->DSurface_field_0xC = DSurface_field_0xC; /*0x4bb6ef*/
        }
LABEL_15:
        v8 = (int *)(*((int (__thiscall **)(DSurface *, char *))this->DSurface_field_0x0 + 30))(this, v32); /*0x4bb6f2*/
        v9 = ClipRectIntersection(v31, (int *)a2, v8, 0, 0); /*0x4bb710*/
        v30[0] = *v9; /*0x4bb719*/
        v30[1] = v9[1]; /*0x4bb722*/
        v30[2] = v9[2]; /*0x4bb729*/
        v10 = *(_DWORD *)a3; /*0x4bb72d*/
        v11 = v9[3]; /*0x4bb72f*/
        v12 = *(_DWORD *)a2; /*0x4bb732*/
        v13 = *(_DWORD *)(a2 + 4); /*0x4bb734*/
        v30[3] = v11; /*0x4bb737*/
        v14 = *(_DWORD *)(a3 + 4); /*0x4bb73b*/
        v25 = v10 + v12; /*0x4bb740*/
        v15 = v13 + v14; /*0x4bb748*/
        v16 = *(_DWORD *)(a3 + 8); /*0x4bb74b*/
        v17 = *(_DWORD *)(a3 + 12); /*0x4bb74e*/
        v26 = v15; /*0x4bb751*/
        v27 = v16; /*0x4bb755*/
        v28 = v17; /*0x4bb762*/
        v18 = ClipRectIntersection(v31, &v25, v30, 0, 0); /*0x4bb76b*/
        v19 = *v18; /*0x4bb76d*/
        v25 = *v18; /*0x4bb76f*/
        v20 = v18[1]; /*0x4bb773*/
        v26 = v20; /*0x4bb776*/
        v21 = v18[2]; /*0x4bb77a*/
        v27 = v21; /*0x4bb77d*/
        v22 = v18[3]; /*0x4bb781*/
        v28 = v22; /*0x4bb786*/
        if ( v21 > 0 && v22 > 0 ) /*0x4bb792*/
        {
          v23 = this->DSurface_field_0x1C[0]; /*0x4bb79c*/
          v29[0] = v19; /*0x4bb79f*/
          v29[2] = v19 + v21; /*0x4bb7a3*/
          v29[3] = v20 + v22; /*0x4bb7a7*/
          v29[1] = v20; /*0x4bb7b6*/
          memset(v33, 0, sizeof(v33)); /*0x4bb7ba*/
          v33[20] = a4; /*0x4bb7c8*/
          v33[0] = 100; /*0x4bb7da*/
          return (*(int (__stdcall **)(int, _DWORD *, _DWORD, _DWORD, int, _DWORD *))(*(_DWORD *)v23 + 20))( /*0x4bb7f9*/
                   v23,
                   v29,
                   0,
                   0,
                   16778240,
                   v33) == 0;
        }
      }
    }
  }
  return 0; /*0x4bb7ef*/
}



// ==== 0x004BB830  DSurface::FillRectWithFlags  this=DSurface  sig=csp ====
char __userpurge DSurface::FillRectWithFlags@<al>(DSurface *this, int a2@<ebx>, int a3, _BYTE *a4, unsigned int a5)
{
  int v5; // ecx
  int v6; // edi
  int *v8; // eax
  _DWORD *v9; // eax
  int v10; // ecx
  unsigned int v11; // ebp
  unsigned int v12; // esi
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // edx
  unsigned int v16; // edi
  int v17; // edx
  int v18; // ebx
  int v19; // ebx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // edx
  int v23; // esi
  int v24; // edi
  unsigned __int16 *v25; // eax
  int v26; // eax
  __int16 v27; // bp
  int v28; // ebx
  int v29; // [esp+10h] [ebp-5Ch]
  __int16 v30; // [esp+14h] [ebp-58h]
  __int16 v31; // [esp+18h] [ebp-54h]
  int v32; // [esp+1Ch] [ebp-50h]
  unsigned __int16 v33; // [esp+20h] [ebp-4Ch]
  unsigned int v34; // [esp+24h] [ebp-48h]
  int v35; // [esp+28h] [ebp-44h]
  unsigned int v36; // [esp+2Ch] [ebp-40h]
  __int16 i; // [esp+38h] [ebp-34h]
  _DWORD v38[4]; // [esp+3Ch] [ebp-30h] BYREF
  _DWORD v39[2]; // [esp+4Ch] [ebp-20h] BYREF
  int v40; // [esp+54h] [ebp-18h]
  int v41; // [esp+58h] [ebp-14h]
  _DWORD v42[4]; // [esp+5Ch] [ebp-10h] BYREF
  DSurface *thisa; // [esp+70h] [ebp+4h]
  _WORD *v44; // [esp+74h] [ebp+8h]
  unsigned int v45; // [esp+78h] [ebp+Ch]

  v6 = v5; /*0x4bb837*/
  v32 = v5; /*0x4bb839*/
  if ( (*(int (**)(void))(*(_DWORD *)v5 + 112))() < 2 ) /*0x4bb845*/
    return 0; /*0x4bb847*/
  if ( (int)this->DSurface_field_0x8 <= 0 || (int)this->DSurface_field_0xC <= 0 ) /*0x4bb863*/
    return 0; /*0x4bb865*/
  v8 = (int *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v6 + 120))(v6, v38); /*0x4bb87a*/
  v9 = ClipRectIntersection(v42, v8, (int *)this, 0, 0); /*0x4bb888*/
  v39[0] = *v9; /*0x4bb891*/
  v39[1] = v9[1]; /*0x4bb898*/
  v40 = v9[2]; /*0x4bb89f*/
  v10 = v9[3]; /*0x4bb8a3*/
  v41 = v10; /*0x4bb8a8*/
  if ( v40 <= 0 || v10 <= 0 ) /*0x4bb8b0*/
    return 0; /*0x4bb8b2*/
  v11 = 0xFFu >> g_BitShift_Green_0 << g_BitShift_Red; /*0x4bb8de*/
  v31 = v11; /*0x4bb8f1*/
  v12 = 0xFFu >> g_BitMask_Blue << g_BitMask_Green; /*0x4bb8f5*/
  v30 = v12; /*0x4bb908*/
  v34 = 0xFFu >> g_BitMask_Red << g_BitShift_Blue; /*0x4bb917*/
  v13 = CellStruct::Copy((CellStruct *)v39, v38); /*0x4bb91b*/
  v35 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v6 + 92))(v6, *v13, v13[1]); /*0x4bb938*/
  if ( !v35 ) /*0x4bb93c*/
    return 0; /*0x4bb93e*/
  v14 = (int)a4; /*0x4bb94a*/
  if ( (unsigned int)a4 > 0x64 ) /*0x4bb951*/
    v14 = 100; /*0x4bb953*/
  v15 = (1374389535 * (unsigned __int64)(unsigned int)(255 * v14)) >> 32; /*0x4bb967*/
  v16 = 255 * v14 / 0x64u; /*0x4bb970*/
  v33 = 255 - v16; /*0x4bb97b*/
  v45 = v16; /*0x4bb983*/
  thisa = 0; /*0x4bb987*/
  LOWORD(a2) = (unsigned __int8)(*(_BYTE *)(a3 + 2) >> g_BitMask_Red); /*0x4bb99a*/
  LOWORD(v15) = (unsigned __int8)(*(_BYTE *)(a3 + 1) >> g_BitMask_Blue); /*0x4bb9b1*/
  v17 = v15 << g_BitMask_Green; /*0x4bb9b5*/
  v18 = v17 | (a2 << g_BitShift_Blue); /*0x4bb9c5*/
  LOWORD(v17) = (unsigned __int8)(*(_BYTE *)a3 >> g_BitShift_Green_0); /*0x4bb9ca*/
  v19 = (v17 << g_BitShift_Red) | v18; /*0x4bb9d2*/
  for ( i = v19; (int)thisa < v41; thisa = (DSurface *)((char *)thisa + 1) ) /*0x4bb9da*/
  {
    v29 = 0; /*0x4bb9ed*/
    v20 = (_DWORD)thisa * ((*(int (__thiscall **)(int))(*(_DWORD *)v32 + 116))(v32) / 2); /*0x4bb9fa*/
    if ( v40 > 0 ) /*0x4bba01*/
    {
      v11 = (unsigned __int16)v11; /*0x4bba0f*/
      v21 = (unsigned __int16)v12; /*0x4bba15*/
      v22 = v16 * (v12 & (unsigned __int16)v19); /*0x4bba23*/
      v23 = v16 * (unsigned __int16)(v19 & v11); /*0x4bba26*/
      v24 = v45 * (unsigned __int16)(v19 & v34); /*0x4bba4b*/
      v25 = (unsigned __int16 *)(v35 + 2 * v20); /*0x4bba50*/
      v36 = (unsigned __int16)v11; /*0x4bba53*/
      v44 = v25; /*0x4bba57*/
      while ( 1 ) /*0x4bba68*/
      {
        v26 = *v25; /*0x4bba68*/
        v27 = v30 & ((v22 + v33 * (v26 & v21)) >> 8) | v31 & ((v23 + v33 * (v26 & v11)) >> 8); /*0x4bba8b*/
        v28 = (unsigned __int16)(v26 & v34); /*0x4bba91*/
        v25 = v44 + 1; /*0x4bba9c*/
        *v44++ = ((v24 + (unsigned int)v33 * v28) >> 8) | v27; /*0x4bbaa8*/
        if ( ++v29 >= v40 ) /*0x4bbabb*/
          break; /*0x4bbabb*/
        v11 = v36; /*0x4bba5d*/
      }
      LOWORD(v12) = v30; /*0x4bbabd*/
      LOWORD(v19) = i; /*0x4bbac1*/
      LOWORD(v11) = v31; /*0x4bbac5*/
      v16 = v45; /*0x4bbac9*/
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v32 + 96))(v32); /*0x4bbae8*/
  return 1; /*0x4bb849*/
}



// ==== 0x004BBB00  DSurface::BlitStretch  this=CampaignClass  sig=csp ====
void __fastcall sub_4BBB00(int a1, int a2, int a3)
{
  int v3; // esi
  int v5; // eax
  int i; // ebp
  unsigned __int8 *v7; // ecx
  int v8; // esi
  int v9; // edi
  int v10; // edx
  bool v11; // zf
  int v12; // [esp+8h] [ebp-Ch]
  int v13; // [esp+Ch] [ebp-8h]

  v3 = a2; /*0x4bbb05*/
  if ( a2 >= 1 && a2 - 1 >= 0 )
  {
    v12 = 0; /*0x4bbb24*/
    v13 = a2; /*0x4bbb2c*/
    while ( 1 )
    {
      v5 = v3 <= 1 ? 0x10000 : v12 / (v3 - 1);
      for ( i = 0; i < 256; ++i ) /*0x4bbb4c*/
      {
        v7 = (unsigned __int8 *)(a3 + 2 * (i % 256) + i % 256); /*0x4bbb67*/
        v8 = (v5 * *v7) >> 16; /*0x4bbb84*/
        v9 = (v5 * v7[1]) >> 16; /*0x4bbb87*/
        v10 = (v5 * v7[2]) >> 16; /*0x4bbb8a*/
        if ( v8 >= 255 ) /*0x4bbb93*/
          v8 = 255; /*0x4bbb95*/
        if ( v9 >= 255 ) /*0x4bbba0*/
          v9 = 255; /*0x4bbba2*/
        if ( v10 >= 255 ) /*0x4bbbad*/
          v10 = 255; /*0x4bbbaf*/
        a1 += 2; /*0x4bbbba*/
        *(_WORD *)(a1 - 2) = (v8 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4bbbec*/
                           | (v9 >> g_BitMask_Blue << g_BitMask_Green)
                           | (v10 >> g_BitMask_Red << g_BitShift_Blue);
      }
      v11 = v13 == 1; /*0x4bbc0a*/
      v12 += 0x20000; /*0x4bbc0b*/
      --v13; /*0x4bbc0f*/
      if ( v11 ) /*0x4bbc13*/
        break; /*0x4bbc13*/
      v3 = a2; /*0x4bbb32*/
    }
  }
}



// ==== 0x004BBC30  GetBitShift_Red  this=-  sig=ida-proto ====
int GetBitShift_Red()
{
  return g_BitShift_Red; /*0x4bbc35*/
}



// ==== 0x004BBC40  GetBitShift_Green  this=AbstractClass  sig=ida-proto ====
int GetBitShift_Green()
{
  return g_BitShift_Green_0; /*0x4bbc45*/
}



// ==== 0x004BBC50  GetBitMask_Green  this=-  sig=ida-proto ====
int GetBitMask_Green()
{
  return g_BitMask_Green; /*0x4bbc55*/
}



// ==== 0x004BBC60  GetBitMask_Blue  this=-  sig=ida-proto ====
int GetBitMask_Blue()
{
  return g_BitMask_Blue; /*0x4bbc65*/
}



// ==== 0x004BBC70  GetBitShift_Blue  this=-  sig=ida-proto ====
int GetBitShift_Blue()
{
  return g_BitShift_Blue; /*0x4bbc75*/
}



// ==== 0x004BBC80  GetBitMask_Red  this=-  sig=ida-proto ====
int GetBitMask_Red()
{
  return g_BitMask_Red; /*0x4bbc85*/
}



// ==== 0x004BBC90  DDraw::GetStatus  this=DDraw  sig=ida-proto ====
int DDraw_GetStatus()
{
  return dword_8205D0; /*0x4bbc95*/
}



// ==== 0x004BBCA0  DSurface::DrawLineModulated  this=DSurface  sig=csp ====
char __fastcall DSurface::DrawLineModulated(
        DSurface *this,
        int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        int a6,
        int a7,
        int a8,
        char a9)
{
  double v9; // st7
  int (__stdcall **DSurface_field_0x0)(_DWORD *); // eax
  int *v11; // eax
  int *v12; // eax
  int v13; // esi
  int v14; // edi
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // esi
  int v19; // edx
  int v20; // ebp
  int v21; // ebx
  int v22; // edi
  int v23; // ebx
  int v24; // ebp
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  unsigned int v32; // eax
  int v33; // ebx
  int v34; // esi
  int Stream_field_04; // ebp
  int v36; // ecx
  int v37; // ebp
  int v38; // esi
  int v39; // edi
  int v40; // ebp
  int v41; // eax
  int v42; // ecx
  int v43; // esi
  int v44; // eax
  int v45; // edx
  int v46; // ebp
  Stream *v47; // esi
  unsigned __int16 v48; // ax
  int v49; // edx
  int v50; // eax
  int v51; // esi
  int v52; // edi
  _WORD *v53; // eax
  int v54; // edx
  _WORD *v55; // ecx
  int v56; // ecx
  _WORD *v57; // eax
  bool v58; // zf
  Stream *v60; // edx
  unsigned __int16 v61; // ax
  int v62; // edx
  int v63; // eax
  int v64; // esi
  int v65; // esi
  _WORD *v66; // eax
  _WORD *v67; // ecx
  int v68; // ecx
  _WORD *v69; // eax
  Stream *v70; // esi
  unsigned __int16 v71; // ax
  int v72; // edx
  int v73; // eax
  int v74; // esi
  int v75; // edx
  _WORD *v76; // eax
  int v77; // ecx
  int v78; // edi
  _WORD *v79; // eax
  _WORD *v80; // ecx
  double v81; // [esp+4h] [ebp-80h]
  double v82; // [esp+4h] [ebp-80h]
  int v83; // [esp+1Ch] [ebp-68h]
  int v84; // [esp+20h] [ebp-64h]
  int v85; // [esp+24h] [ebp-60h]
  int v86; // [esp+28h] [ebp-5Ch]
  int v87; // [esp+2Ch] [ebp-58h]
  int v88; // [esp+30h] [ebp-54h]
  int v89; // [esp+34h] [ebp-50h]
  int v90; // [esp+34h] [ebp-50h]
  int v91; // [esp+34h] [ebp-50h]
  int v92[2]; // [esp+38h] [ebp-4Ch] BYREF
  int v93; // [esp+40h] [ebp-44h] BYREF
  int v94; // [esp+44h] [ebp-40h]
  _DWORD v95[5]; // [esp+50h] [ebp-34h] BYREF
  int v96; // [esp+64h] [ebp-20h] BYREF
  int v97; // [esp+68h] [ebp-1Ch]
  int v98[2]; // [esp+6Ch] [ebp-18h] BYREF
  int v99; // [esp+74h] [ebp-10h] BYREF
  int v100; // [esp+78h] [ebp-Ch]
  int v101; // [esp+7Ch] [ebp-8h]
  int v102; // [esp+80h] [ebp-4h]
  int v103; // [esp+88h] [ebp+4h]
  int v104; // [esp+88h] [ebp+4h]
  int pad_0; // [esp+8Ch] [ebp+8h]
  _DWORD *v106; // [esp+90h] [ebp+Ch]
  _DWORD *v107; // [esp+90h] [ebp+Ch]
  int v108; // [esp+90h] [ebp+Ch]
  _DWORD *v109; // [esp+90h] [ebp+Ch]
  int v110; // [esp+98h] [ebp+14h]
  int v111; // [esp+98h] [ebp+14h]
  int v112; // [esp+9Ch] [ebp+18h]
  int v113; // [esp+9Ch] [ebp+18h]
  int v114; // [esp+9Ch] [ebp+18h]
  int v115; // [esp+9Ch] [ebp+18h]
  int v116; // [esp+9Ch] [ebp+18h]
  _WORD *SamplePosition; // [esp+9Ch] [ebp+18h]

  DSurface_field_0x0 = (int (__stdcall **)(_DWORD *))this->DSurface_field_0x0; /*0x4bbca3*/
  v95[0] = this; /*0x4bbcae*/
  v11 = (int *)DSurface_field_0x0[30](&v95[1]); /*0x4bbcb2*/
  v12 = ClipRectIntersection(&v93, (int *)a3, v11, 0, 0); /*0x4bbcc2*/
  v13 = *v12; /*0x4bbcc9*/
  v99 = *v12; /*0x4bbccb*/
  v14 = v12[1]; /*0x4bbccf*/
  v100 = v14; /*0x4bbcd2*/
  v101 = v12[2]; /*0x4bbcd9*/
  v15 = v12[3]; /*0x4bbcdd*/
  v102 = v15; /*0x4bbce2*/
  if ( v101 || v15 ) /*0x4bbcea*/
  {
    v16 = v13 + *a4; /*0x4bbd08*/
    v17 = v13 + *a5; /*0x4bbd0a*/
    v18 = a8; /*0x4bbd0c*/
    v19 = v14 + a4[1]; /*0x4bbd13*/
    v20 = v16; /*0x4bbd15*/
    v21 = v14 + a5[1]; /*0x4bbd17*/
    v22 = a7; /*0x4bbd19*/
    v96 = v16; /*0x4bbd22*/
    v97 = v19; /*0x4bbd26*/
    v98[0] = v17; /*0x4bbd2a*/
    v98[1] = v21; /*0x4bbd2e*/
    if ( v16 > v17 ) /*0x4bbd32*/
    {
      v20 = v17; /*0x4bbd34*/
      v22 = a8; /*0x4bbd36*/
      v18 = a7; /*0x4bbd38*/
      v96 = v17; /*0x4bbd3f*/
      v97 = v21; /*0x4bbd43*/
      v98[0] = v16; /*0x4bbd47*/
      v98[1] = v19; /*0x4bbd4b*/
    }
    v95[1] = v98[0]; /*0x4bbd5b*/
    v23 = v20; /*0x4bbd60*/
    v24 = v97; /*0x4bbd62*/
    v95[2] = v98[1]; /*0x4bbd6e*/
    if ( (unsigned __int8)ClipLine(&v96, v98, &v99) ) /*0x4bbd72*/
    {
      v106 = (_DWORD *)v18; /*0x4bbd8d*/
      v110 = v22; /*0x4bbd94*/
      if ( v98[0] != v95[1] || v98[1] != v95[2] ) /*0x4bbda1*/
      {
        v92[0] = v23 - v98[0]; /*0x4bbdb3*/
        v92[1] = v24 - v98[1]; /*0x4bbdb7*/
        v93 = v23 - v95[1]; /*0x4bbdc7*/
        v94 = v24 - v95[2]; /*0x4bbdcb*/
        Vector::TwoDMagnitudeMath(&v93); /*0x4bbdd3*/
        v103 = v25; /*0x4bbddc*/
        v9 = Vector::TwoDMagnitudeMath(v92); /*0x4bbde0*/
        v112 = v26; /*0x4bbde5*/
        __asm { fild [esp+78h+arg_14] } /*0x4bbdee*/
        v113 = v22 - v18; /*0x4bbdf7*/
        __asm /*0x4bbdfe*/
        {
          fidiv [esp+78h+arg_0]
          fild [esp+78h+arg_14]
          fmulp st(1), st
        }
        LOWORD(v27) = Math::RoundToInt(v9); /*0x4bbe0b*/
        v28 = abs32(v27); /*0x4bbe13*/
        if ( v22 >= v18 ) /*0x4bbe17*/
          v106 = (_DWORD *)(v22 - v28); /*0x4bbe28*/
        else
          v106 = (_DWORD *)(v22 + v28); /*0x4bbe1b*/
      }
      if ( v96 != v23 || v97 != v24 ) /*0x4bbe3d*/
      {
        v93 = v96 - v95[1]; /*0x4bbe52*/
        v94 = v97 - v95[2]; /*0x4bbe56*/
        __asm /*0x4bbe5a*/
        {
          fild dword ptr [esp+80h+var_4C.__pad_C]
          fild [esp+80h+var_4C.Vector_field_0x8]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+80h+var_84+4]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v81); /*0x4bbe73*/
        LOWORD(v29) = Math::RoundToInt(v9); /*0x4bbe78*/
        v114 = v29; /*0x4bbe81*/
        v93 = v23 - v95[1]; /*0x4bbe90*/
        v94 = v24 - v95[2]; /*0x4bbe94*/
        __asm /*0x4bbe98*/
        {
          fild dword ptr [esp+80h+var_4C.__pad_C]
          fild [esp+80h+var_4C.Vector_field_0x8]
          fild [esp+80h+arg_14]
          fstp qword ptr [esp+50h]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+80h+var_84+4]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v82); /*0x4bbebc*/
        LOWORD(v30) = Math::RoundToInt(v9); /*0x4bbec4*/
        v115 = v30; /*0x4bbec9*/
        __asm { fild [esp+78h+arg_14] } /*0x4bbed2*/
        v116 = v22 - v18; /*0x4bbedb*/
        __asm /*0x4bbee2*/
        {
          fdivr qword ptr [esp+48h]
          fild [esp+78h+arg_14]
          fmulp st(1), st
        }
        LOWORD(v31) = Math::RoundToInt(v9); /*0x4bbeef*/
        v32 = abs32(v31); /*0x4bbef7*/
        if ( v18 <= v22 ) /*0x4bbefb*/
          v110 = v18 + v32; /*0x4bbf0a*/
        else
          v110 = v18 - v32; /*0x4bbeff*/
      }
      v33 = v95[0]; /*0x4bbf11*/
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v95[0] + 112))(v95[0]); /*0x4bbf19*/
      v34 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v33 + 92))(v33, v96, v97); /*0x4bbf33*/
      v104 = v34; /*0x4bbf37*/
      if ( g_ZBufferDescriptor ) /*0x4bbf3b*/
      {
        Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4bbf45*/
        v95[2] = v97; /*0x4bbf4c*/
        SamplePosition = (_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v96, v97 - Stream_field_04); /*0x4bbf5d*/
        v88 = -1; /*0x4bbf6d*/
        LOWORD(v36) = LOWORD(g_ZBufferDescriptor->Stream_field_04) + LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4bbf79*/
        pad_0 = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4bbf80*/
        v37 = v110; /*0x4bbf8b*/
        v111 = v110 + v36 - v97 - v100; /*0x4bbf96*/
        if ( v34 ) /*0x4bbf9d*/
        {
          v38 = v98[1] - v97; /*0x4bbfb6*/
          v39 = v98[0] - v96; /*0x4bbfba*/
          v89 = v98[0] - v96; /*0x4bbfc0*/
          v40 = (int)v106 - v37; /*0x4bbfc4*/
          v41 = (*(int (__thiscall **)(int))(*(_DWORD *)v33 + 116))(v33); /*0x4bbfc6*/
          v87 = v41; /*0x4bbfcb*/
          if ( v38 < 0 ) /*0x4bbfcf*/
          {
            v87 = -v41; /*0x4bbfd3*/
            pad_0 = -pad_0; /*0x4bbfe0*/
            v88 = 1; /*0x4bbfe7*/
          }
          v83 = 1; /*0x4bbff6*/
          v42 = abs32(v38); /*0x4bc000*/
          if ( v40 < 0 ) /*0x4bc004*/
            v83 = -1; /*0x4bc006*/
          v43 = 2 * v42; /*0x4bc010*/
          v84 = 2 * v42; /*0x4bc016*/
          v44 = abs32(v40); /*0x4bc01a*/
          v45 = 2 * v39; /*0x4bc01c*/
          v85 = 2 * v39; /*0x4bc021*/
          v46 = 2 * v44; /*0x4bc025*/
          v86 = 2 * v44; /*0x4bc028*/
          if ( v44 > v39 && v44 > v42 ) /*0x4bc034*/
          {
            v92[0] = v43 - v44; /*0x4bc03e*/
            v90 = v45 - v44; /*0x4bc048*/
            if ( v44 > 0 ) /*0x4bc04c*/
            {
              v47 = g_ZBufferDescriptor; /*0x4bc052*/
              v107 = 0; /*0x4bc058*/
              v93 = v44; /*0x4bc05f*/
              do /*0x4bc27e*/
              {
                if ( (unsigned __int16)v111 < *SamplePosition ) /*0x4bc075*/
                {
                  v48 = *(_WORD *)((char *)v107 + v104); /*0x4bc092*/
                  LOBYTE(v95[1]) = (unsigned __int8)(v48 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc0ab*/
                  BYTE1(v95[1]) = (unsigned __int8)(v48 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc0cc*/
                  BYTE2(v95[1]) = (unsigned __int8)(v48 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc0d2*/
                  v49 = ((a6 * LOBYTE(v95[1])) >> 8) + LOBYTE(v95[1]); /*0x4bc0f7*/
                  v50 = ((a6 * BYTE2(v95[1])) >> 8) + BYTE2(v95[1]); /*0x4bc11e*/
                  if ( v50 > 255 ) /*0x4bc125*/
                    v50 = 255; /*0x4bc127*/
                  v51 = 255; /*0x4bc132*/
                  if ( ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]) <= 255 ) /*0x4bc137*/
                    v51 = ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]); /*0x4bc139*/
                  if ( v49 > 255 ) /*0x4bc141*/
                    v49 = 255; /*0x4bc143*/
                  *(_WORD *)((char *)v107 + v104) = (v50 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc17b*/
                                                  | (v51 >> g_BitMask_Blue << g_BitMask_Green)
                                                  | (v49 >> g_BitShift_Green_0 << g_BitShift_Red);
                  if ( a9 ) /*0x4bc188*/
                    *SamplePosition = v111; /*0x4bc199*/
                  v47 = g_ZBufferDescriptor; /*0x4bc19c*/
                }
                v52 = v92[0]; /*0x4bc1a2*/
                if ( v92[0] <= 0 ) /*0x4bc1a8*/
                {
                  v54 = v111; /*0x4bc213*/
                }
                else
                {
                  v52 = v92[0] - v86; /*0x4bc1c6*/
                  v104 += v87; /*0x4bc1c8*/
                  v53 = &SamplePosition[pad_0]; /*0x4bc1ce*/
                  if ( pad_0 <= 0 ) /*0x4bc1d1*/
                  {
                    v55 = &SamplePosition[pad_0]; /*0x4bc1f2*/
                    if ( (unsigned int)v53 < v47[1].Stream_field_04 ) /*0x4bc1f6*/
                      v55 = (_WORD *)((char *)v53 + v47[1].Stream_field_0C); /*0x4bc1fb*/
                    SamplePosition = v55; /*0x4bc208*/
                    v54 = v88 + v111; /*0x4bc20f*/
                  }
                  else
                  {
                    if ( (unsigned int)v53 >= v47[1].Stream_field_08 ) /*0x4bc1d6*/
                      v53 = (_WORD *)((char *)v53 - v47[1].Stream_field_0C); /*0x4bc1d8*/
                    SamplePosition = v53; /*0x4bc1e2*/
                    v54 = v88 + v111; /*0x4bc1e9*/
                  }
                }
                v56 = v90; /*0x4bc21a*/
                if ( v90 > 0 ) /*0x4bc220*/
                {
                  v57 = SamplePosition + 1; /*0x4bc233*/
                  v107 = (_DWORD *)((char *)v107 + 2); /*0x4bc23b*/
                  if ( (unsigned int)(SamplePosition + 1) >= v47[1].Stream_field_08 ) /*0x4bc242*/
                    v57 = (_WORD *)((char *)v57 - v47[1].Stream_field_0C); /*0x4bc244*/
                  SamplePosition = v57; /*0x4bc247*/
                  v56 = v90 - v86; /*0x4bc252*/
                }
                v111 = v83 + v54; /*0x4bc25e*/
                v90 = v85 + v56; /*0x4bc26b*/
                v58 = v93 == 1; /*0x4bc275*/
                v92[0] = v84 + v52; /*0x4bc276*/
                --v93; /*0x4bc27a*/
              }
              while ( !v58 ); /*0x4bc27e*/
            }
            goto LABEL_50; /*0x4bc27e*/
          }
          if ( v39 <= v42 ) /*0x4bc29b*/
          {
            v93 = v45 - v42; /*0x4bc501*/
            v92[0] = v46 - v42; /*0x4bc50b*/
            if ( v42 > 0 ) /*0x4bc50f*/
            {
              v70 = g_ZBufferDescriptor; /*0x4bc515*/
              v109 = 0; /*0x4bc51b*/
              v91 = v42; /*0x4bc522*/
              do /*0x4bc728*/
              {
                if ( (unsigned __int16)v111 < *SamplePosition ) /*0x4bc538*/
                {
                  v71 = *(_WORD *)((char *)v109 + v104); /*0x4bc555*/
                  LOBYTE(v95[1]) = (unsigned __int8)(v71 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc56e*/
                  BYTE1(v95[1]) = (unsigned __int8)(v71 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc58f*/
                  BYTE2(v95[1]) = (unsigned __int8)(v71 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc595*/
                  v72 = ((a6 * LOBYTE(v95[1])) >> 8) + LOBYTE(v95[1]); /*0x4bc5ba*/
                  v73 = ((a6 * BYTE2(v95[1])) >> 8) + BYTE2(v95[1]); /*0x4bc5e1*/
                  if ( v73 > 255 ) /*0x4bc5e8*/
                    v73 = 255; /*0x4bc5ea*/
                  v74 = 255; /*0x4bc5f5*/
                  if ( ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]) <= 255 ) /*0x4bc5fa*/
                    v74 = ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]); /*0x4bc5fc*/
                  if ( v72 > 255 ) /*0x4bc604*/
                    v72 = 255; /*0x4bc606*/
                  *(_WORD *)((char *)v109 + v104) = (v73 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc63e*/
                                                  | (v74 >> g_BitMask_Blue << g_BitMask_Green)
                                                  | (v72 >> g_BitShift_Green_0 << g_BitShift_Red);
                  if ( a9 ) /*0x4bc64b*/
                    *SamplePosition = v111; /*0x4bc65c*/
                  v70 = g_ZBufferDescriptor; /*0x4bc65f*/
                }
                v75 = v93; /*0x4bc665*/
                if ( v93 <= 0 ) /*0x4bc66b*/
                {
                  v76 = SamplePosition; /*0x4bc698*/
                }
                else
                {
                  v76 = SamplePosition + 1; /*0x4bc67e*/
                  v109 = (_DWORD *)((char *)v109 + 2); /*0x4bc686*/
                  if ( (unsigned int)(SamplePosition + 1) >= v70[1].Stream_field_08 ) /*0x4bc68d*/
                    v76 = (_WORD *)((char *)v76 - v70[1].Stream_field_0C); /*0x4bc68f*/
                  v75 = v93 - v84; /*0x4bc692*/
                }
                v77 = v92[0]; /*0x4bc69f*/
                v78 = v111; /*0x4bc6a3*/
                if ( v92[0] > 0 ) /*0x4bc6ac*/
                {
                  v78 = v83 + v111; /*0x4bc6b6*/
                  v77 = v92[0] - v84; /*0x4bc6b8*/
                }
                v93 = v85 + v75; /*0x4bc6c4*/
                v92[0] = v86 + v77; /*0x4bc6d5*/
                v79 = &v76[pad_0]; /*0x4bc6e2*/
                v104 += v87; /*0x4bc6e4*/
                if ( pad_0 <= 0 ) /*0x4bc6ea*/
                {
                  v80 = v79; /*0x4bc700*/
                  if ( (unsigned int)v79 < v70[1].Stream_field_04 ) /*0x4bc704*/
                    v80 = (_WORD *)((char *)v79 + v70[1].Stream_field_0C); /*0x4bc709*/
                  SamplePosition = v80; /*0x4bc70b*/
                }
                else
                {
                  if ( (unsigned int)v79 >= v70[1].Stream_field_08 ) /*0x4bc6ef*/
                    v79 = (_WORD *)((char *)v79 - v70[1].Stream_field_0C); /*0x4bc6f1*/
                  SamplePosition = v79; /*0x4bc6f4*/
                }
                v58 = v91 == 1; /*0x4bc71c*/
                v111 = v88 + v78; /*0x4bc71d*/
                --v91; /*0x4bc724*/
              }
              while ( !v58 ); /*0x4bc728*/
            }
            goto LABEL_50; /*0x4bc728*/
          }
          v108 = 0; /*0x4bc2a3*/
          v93 = v43 - v39; /*0x4bc2ac*/
          v92[0] = v46 - v39; /*0x4bc2b6*/
          if ( v39 <= 0 ) /*0x4bc2ba*/
          {
LABEL_50:
            (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v95[0] + 96))(v95[0]); /*0x4bc284*/
            return 1; /*0x4bc296*/
          }
          v60 = g_ZBufferDescriptor; /*0x4bc2c0*/
          while ( 1 ) /*0x4bc2c6*/
          {
            if ( (unsigned __int16)v111 < *SamplePosition ) /*0x4bc2d8*/
            {
              v61 = *(_WORD *)(v104 + 2 * v108); /*0x4bc2f5*/
              LOBYTE(v95[1]) = (unsigned __int8)(v61 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc30e*/
              BYTE1(v95[1]) = (unsigned __int8)(v61 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc32f*/
              BYTE2(v95[1]) = (unsigned __int8)(v61 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc335*/
              v62 = ((a6 * LOBYTE(v95[1])) >> 8) + LOBYTE(v95[1]); /*0x4bc35a*/
              v63 = ((a6 * BYTE2(v95[1])) >> 8) + BYTE2(v95[1]); /*0x4bc381*/
              if ( v63 > 255 ) /*0x4bc388*/
                v63 = 255; /*0x4bc38a*/
              v64 = 255; /*0x4bc395*/
              if ( ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]) <= 255 ) /*0x4bc39a*/
                v64 = ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]); /*0x4bc39c*/
              if ( v62 > 255 ) /*0x4bc3a4*/
                v62 = 255; /*0x4bc3a6*/
              *(_WORD *)(v104 + 2 * v108) = (v63 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc3de*/
                                          | (v64 >> g_BitMask_Blue << g_BitMask_Green)
                                          | (v62 >> g_BitShift_Green_0 << g_BitShift_Red);
              if ( a9 ) /*0x4bc3eb*/
                *SamplePosition = v111; /*0x4bc3fc*/
              v60 = g_ZBufferDescriptor; /*0x4bc3ff*/
            }
            v65 = v93; /*0x4bc405*/
            if ( v93 <= 0 ) /*0x4bc40b*/
            {
              v66 = SamplePosition; /*0x4bc47c*/
              goto LABEL_73; /*0x4bc47c*/
            }
            v65 = v93 - v85; /*0x4bc429*/
            v104 += v87; /*0x4bc42b*/
            v66 = &SamplePosition[pad_0]; /*0x4bc431*/
            if ( pad_0 <= 0 ) /*0x4bc434*/
              break; /*0x4bc434*/
            if ( (unsigned int)v66 < v60[1].Stream_field_08 ) /*0x4bc439*/
              goto LABEL_71; /*0x4bc439*/
            v66 = (_WORD *)((char *)v66 - v60[1].Stream_field_0C); /*0x4bc445*/
            v111 += v88; /*0x4bc44d*/
LABEL_73:
            v68 = v92[0]; /*0x4bc483*/
            if ( v92[0] > 0 ) /*0x4bc489*/
            {
              v111 += v83; /*0x4bc49c*/
              v68 = v92[0] - v85; /*0x4bc4a3*/
            }
            v69 = v66 + 1; /*0x4bc4a9*/
            v93 = v84 + v65; /*0x4bc4ae*/
            v92[0] = v86 + v68; /*0x4bc4b8*/
            if ( (unsigned int)v69 >= v60[1].Stream_field_08 ) /*0x4bc4c1*/
              v69 = (_WORD *)((char *)v69 - v60[1].Stream_field_0C); /*0x4bc4c3*/
            SamplePosition = v69; /*0x4bc4ca*/
            if ( ++v108 >= v89 ) /*0x4bc4e2*/
              goto LABEL_50; /*0x4bc4e2*/
          }
          v67 = &SamplePosition[pad_0]; /*0x4bc459*/
          if ( (unsigned int)v66 < v60[1].Stream_field_04 ) /*0x4bc45d*/
            v67 = (_WORD *)((char *)v66 + v60[1].Stream_field_0C); /*0x4bc462*/
          v66 = v67; /*0x4bc464*/
LABEL_71:
          v111 += v88; /*0x4bc466*/
          goto LABEL_73; /*0x4bc47a*/
        }
      }
    }
  }
  return 0; /*0x4bc28d*/
}



// ==== 0x004BC750  DSurface::DrawLineFaded  this=DSurface  sig=csp ====
char __thiscall DSurface::DrawLineFaded(
        DSurface *this,
        int a2,
        _DWORD *a3,
        int *a4,
        unsigned __int8 *a5,
        int a6,
        int a7,
        char a8,
        float a9,
        char a10,
        char a11,
        float a12)
{
  int *v13; // esi
  int v14; // eax
  int v15; // edx
  int *v16; // eax
  int v17; // esi
  int *v18; // eax
  int v19; // edx
  int v20; // esi
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // ebp
  int v25; // ebx
  int v26; // ebx
  int v27; // edi
  int v28; // edx
  int v29; // esi
  int v30; // ebx
  int v31; // ebp
  int v32; // eax
  int v33; // eax
  int v34; // eax
  unsigned int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  unsigned int v41; // eax
  DSurface *v42; // esi
  int v43; // edi
  int Stream_field_04; // ebx
  int v46; // eax
  int pad_0; // ebp
  int v48; // edi
  int v49; // esi
  int v50; // ebx
  int v51; // eax
  in... [41072 chars total]



// ==== 0x004BDF00  DSurface::DrawLineZBufColored  this=DSurface  sig=csp ====
char __thiscall DSurface::DrawLineZBufColored(
        DSurface *this,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned __int8 *a5,
        float a6,
        int a7,
        int a8)
{
  double v8; // st7
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  int *v16; // eax
  int *v17; // eax
  int v18; // esi
  int v19; // edi
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // ebp
  int v24; // edx
  int v25; // ebx
  int v26; // esi
  int v27; // edi
  int v28; // esi
  int v29; // ebx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  unsigned int v37; // eax
  int v38; // ebx
  int Stream_field_04; // edi
  _WORD *SamplePosition; // esi
  int v41; // edi
  unsigned __int16 *v42; // ebp
  int v43; // edi
  int v44; // ebx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // edi
  int v49; // ecx
  Stream *v50; // ebx
  int v51; // edx
  unsigned __int16 v52; // di
  __int16 v53; // ax
  _WORD *v54; // eax
  unsigned __int16 *v55; // eax
  bool v56; // zf
  int v58; // edi
  Stream *v59; // ebx
  int v60; // edx
  unsigned __int16 v61; // di
  __int16 v62; // ax
  _WORD *v63; // eax
  unsigned __int16 *v64; // eax
  int v65; // eax
  unsigned int Stream_field_08; // eax
  int v67; // edi
  int v68; // ebx
  Stream *v69; // ecx
  int v70; // edx
  unsigned __int16 v71; // di
  __int16 v72; // ax
  _WORD *v73; // eax
  unsigned __int16 *v74; // eax
  double v75; // [esp+4h] [ebp-84h]
  double v76; // [esp+4h] [ebp-84h]
  double v77; // [esp+4h] [ebp-84h]
  double v78; // [esp+4h] [ebp-84h]
  int v79; // [esp+1Ch] [ebp-6Ch]
  int v80; // [esp+20h] [ebp-68h]
  int v81; // [esp+24h] [ebp-64h]
  int v82; // [esp+24h] [ebp-64h]
  int v83; // [esp+24h] [ebp-64h]
  int v84; // [esp+28h] [ebp-60h]
  int v85; // [esp+2Ch] [ebp-5Ch]
  int v86; // [esp+30h] [ebp-58h]
  int v87; // [esp+30h] [ebp-58h]
  int v88; // [esp+30h] [ebp-58h]
  int v89; // [esp+34h] [ebp-54h]
  int v90; // [esp+38h] [ebp-50h]
  int v91; // [esp+3Ch] [ebp-4Ch]
  _BYTE v93[12]; // [esp+44h] [ebp-44h] BYREF
  _DWORD v94[5]; // [esp+54h] [ebp-34h] BYREF
  int v95; // [esp+68h] [ebp-20h] BYREF
  int v96; // [esp+6Ch] [ebp-1Ch]
  int v97[2]; // [esp+70h] [ebp-18h] BYREF
  int v98; // [esp+78h] [ebp-10h] BYREF
  int v99; // [esp+7Ch] [ebp-Ch]
  int v100; // [esp+80h] [ebp-8h]
  int v101; // [esp+84h] [ebp-4h]
  int pad_0; // [esp+8Ch] [ebp+4h]
  int v103; // [esp+90h] [ebp+8h]
  int v104; // [esp+94h] [ebp+Ch]
  unsigned __int8 *v105; // [esp+98h] [ebp+10h]
  unsigned __int8 *v106; // [esp+98h] [ebp+10h]
  unsigned __int8 *v107; // [esp+98h] [ebp+10h]
  unsigned __int8 *v108; // [esp+98h] [ebp+10h]
  int v109; // [esp+9Ch] [ebp+14h]
  int v110; // [esp+9Ch] [ebp+14h]
  int v111; // [esp+9Ch] [ebp+14h]
  int v112; // [esp+9Ch] [ebp+14h]
  __int16 v113; // [esp+9Ch] [ebp+14h]
  __int16 v114; // [esp+9Ch] [ebp+14h]
  __int16 v115; // [esp+9Ch] [ebp+14h]

  v105 = (unsigned __int8 *)*a5; /*0x4bdf18*/
  __asm /*0x4bdf1f*/
  {
    fild [esp+7Ch+arg_C]
    fmul [esp+7Ch+arg_10]
  }
  LOWORD(v11) = Math::RoundToInt(v8); /*0x4bdf2d*/
  v12 = v11; /*0x4bdf34*/
  v91 = v11; /*0x4bdf39*/
  v106 = (unsigned __int8 *)a5[1]; /*0x4bdf3d*/
  __asm /*0x4bdf44*/
  {
    fild [esp+7Ch+arg_C]
    fmul [esp+7Ch+arg_10]
  }
  LOWORD(v13) = Math::RoundToInt(v8); /*0x4bdf52*/
  v14 = v13; /*0x4bdf59*/
  v90 = v13; /*0x4bdf5e*/
  v107 = (unsigned __int8 *)a5[2]; /*0x4bdf62*/
  __asm /*0x4bdf69*/
  {
    fild [esp+7Ch+arg_C]
    fmul [esp+7Ch+arg_10]
  }
  LOWORD(v15) = Math::RoundToInt(v8); /*0x4bdf77*/
  v89 = v15; /*0x4bdf7f*/
  if ( v12 < 8 && v14 < 8 && v15 < 8 ) /*0x4bdf8d*/
    return 0; /*0x4bdf8d*/
  v16 = (int *)(*((int (__thiscall **)(DSurface *, _DWORD *))this->DSurface_field_0x0 + 30))(this, &v94[1]); /*0x4bdf9c*/
  v17 = ClipRectIntersection(&v93[4], (int *)a2, v16, 0, 0); /*0x4bdfaf*/
  v18 = *v17; /*0x4bdfb6*/
  v98 = *v17; /*0x4bdfb8*/
  v19 = v17[1]; /*0x4bdfbc*/
  v99 = v19; /*0x4bdfbf*/
  v100 = v17[2]; /*0x4bdfc6*/
  v20 = v17[3]; /*0x4bdfca*/
  v101 = v20; /*0x4bdfcf*/
  if ( !v100 && !v20 ) /*0x4bdfd7*/
    return 0; /*0x4bdfd7*/
  v21 = v18 + *a3; /*0x4bdff3*/
  v22 = v18 + *a4; /*0x4bdff5*/
  v23 = a7; /*0x4bdffa*/
  v24 = v19 + a3[1]; /*0x4be001*/
  v25 = v21; /*0x4be003*/
  v26 = v19 + a4[1]; /*0x4be005*/
  v27 = a8; /*0x4be007*/
  v95 = v21; /*0x4be010*/
  v96 = v24; /*0x4be014*/
  v97[0] = v22; /*0x4be018*/
  v97[1] = v26; /*0x4be01c*/
  if ( v21 > v22 ) /*0x4be020*/
  {
    v25 = v22; /*0x4be022*/
    v23 = a8; /*0x4be024*/
    v27 = a7; /*0x4be026*/
    v95 = v22; /*0x4be02d*/
    v96 = v26; /*0x4be031*/
    v97[0] = v21; /*0x4be035*/
    v97[1] = v24; /*0x4be039*/
  }
  v94[2] = v97[1]; /*0x4be049*/
  v28 = v25; /*0x4be04e*/
  v29 = v96; /*0x4be050*/
  v94[1] = v97[0]; /*0x4be05c*/
  if ( !(unsigned __int8)ClipLine(&v95, v97, &v98) ) /*0x4be060*/
    return 0; /*0x4be060*/
  a7 = v27; /*0x4be07b*/
  v109 = v23; /*0x4be082*/
  if ( v97[0] != v94[1] || v97[1] != v94[2] ) /*0x4be08f*/
  {
    *(_DWORD *)&v93[4] = v28 - v97[0]; /*0x4be09e*/
    __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be0a4*/
    *(_DWORD *)&v93[8] = v29 - v97[1]; /*0x4be0a8*/
    __asm /*0x4be0ac*/
    {
      fild [esp+84h+var_3C]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+84h+var_88+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v75); /*0x4be0c1*/
    LOWORD(v30) = Math::RoundToInt(v8); /*0x4be0c6*/
    a8 = v30; /*0x4be0d1*/
    *(_DWORD *)&v93[4] = v28 - v94[1]; /*0x4be0e0*/
    __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be0e6*/
    *(_DWORD *)&v93[8] = v29 - v94[2]; /*0x4be0ea*/
    __asm /*0x4be0ee*/
    {
      fild [esp+84h+var_3C]
      fild [esp+84h+arg_18]
      fstp [esp+84h+var_44+4]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+84h+var_88+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v76); /*0x4be10e*/
    LOWORD(v31) = Math::RoundToInt(v8); /*0x4be116*/
    a8 = v31; /*0x4be11b*/
    __asm { fild [esp+7Ch+arg_18] } /*0x4be124*/
    a8 = v23 - v27; /*0x4be12d*/
    __asm /*0x4be134*/
    {
      fdivr [esp+7Ch+var_44+4]
      fild [esp+7Ch+arg_18]
      fmulp st(1), st
    }
    LOWORD(v32) = Math::RoundToInt(v8); /*0x4be141*/
    v33 = abs32(v32); /*0x4be149*/
    if ( v23 >= v27 ) /*0x4be14d*/
      a7 = v23 - v33; /*0x4be15e*/
    else
      a7 = v23 + v33; /*0x4be151*/
  }
  if ( v95 != v28 || v96 != v29 ) /*0x4be173*/
  {
    *(_DWORD *)&v93[4] = v95 - v94[1]; /*0x4be182*/
    __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be18a*/
    *(_DWORD *)&v93[8] = v96 - v94[2]; /*0x4be190*/
    __asm /*0x4be194*/
    {
      fild [esp+84h+var_3C]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+84h+var_88+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v77); /*0x4be1a9*/
    LOWORD(v34) = Math::RoundToInt(v8); /*0x4be1ae*/
    v110 = v34; /*0x4be1b3*/
    *(_DWORD *)&v93[4] = v28 - v94[1]; /*0x4be1c0*/
    __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be1c8*/
    *(_DWORD *)&v93[8] = v29 - v94[2]; /*0x4be1ce*/
    __asm /*0x4be1d2*/
    {
      fild [esp+84h+var_3C]
      fild [esp+84h+arg_10]
      fstp qword ptr [esp+84h+var_34+4]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+84h+var_88+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v78); /*0x4be1f2*/
    LOWORD(v35) = Math::RoundToInt(v8); /*0x4be1fa*/
    v111 = v35; /*0x4be1ff*/
    __asm { fild [esp+7Ch+arg_10] } /*0x4be208*/
    v112 = v23 - v27; /*0x4be211*/
    __asm /*0x4be218*/
    {
      fdivr qword ptr [esp+7Ch+var_34+4]
      fild [esp+7Ch+arg_10]
      fmulp st(1), st
    }
    LOWORD(v36) = Math::RoundToInt(v8); /*0x4be225*/
    v37 = abs32(v36); /*0x4be22d*/
    if ( v27 <= v23 ) /*0x4be231*/
      v109 = v27 + v37; /*0x4be240*/
    else
      v109 = v27 - v37; /*0x4be235*/
  }
  (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this); /*0x4be24f*/
  v38 = (*((int (__thiscall **)(DSurface *, int, int))this->DSurface_field_0x0 + 23))(this, v95, v96); /*0x4be269*/
  v108 = (unsigned __int8 *)v38; /*0x4be26d*/
  if ( !g_ZBufferDescriptor ) /*0x4be274*/
    return 0; /*0x4be274*/
  Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4be27e*/
  v94[2] = v96; /*0x4be285*/
  SamplePosition = (_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v95, v96 - Stream_field_04); /*0x4be29c*/
  v41 = *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4); /*0x4be2a2*/
  v94[2] = v96; /*0x4be2a5*/
  v42 = (unsigned __int16 *)StreamClass::ReadAndSeek(*(int **)&stru_87E790.__pad_D8[60], v95, v96 - v41); /*0x4be2b6*/
  v85 = -1; /*0x4be2c1*/
  LOWORD(v41) = LOWORD(g_ZBufferDescriptor->Stream_field_04) + LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4be2cd*/
  pad_0 = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4be2d4*/
  a8 = v109 + v41 - v96 - v99; /*0x4be2ea*/
  if ( !v38 ) /*0x4be2f1*/
    return 0; /*0x4be9b9*/
  v86 = v97[0] - v95; /*0x4be305*/
  v43 = v97[1] - v96; /*0x4be310*/
  v44 = a7 - v109; /*0x4be31a*/
  v45 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4be31c*/
  v80 = v45; /*0x4be321*/
  if ( v43 < 0 ) /*0x4be325*/
  {
    v85 = 1; /*0x4be32e*/
    v80 = -v45; /*0x4be33a*/
    pad_0 = -pad_0; /*0x4be33e*/
  }
  v84 = 1; /*0x4be347*/
  v46 = abs32(v43); /*0x4be354*/
  if ( v44 < 0 ) /*0x4be358*/
    v84 = -1; /*0x4be35a*/
  LOWORD(a7) = 0; /*0x4be364*/
  v47 = abs32(v44); /*0x4be377*/
  BYTE2(a7) = 0; /*0x4be37f*/
  v104 = 2 * v86; /*0x4be38a*/
  v103 = 2 * v46; /*0x4be394*/
  v79 = 2 * v47; /*0x4be39e*/
  if ( v47 <= v86 || v47 <= v46 ) /*0x4be3aa*/
  {
    if ( v86 <= v46 ) /*0x4be5aa*/
    {
      v67 = v104 - v46; /*0x4be7b5*/
      v68 = v79 - v46; /*0x4be7b7*/
      *(_DWORD *)&v93[4] = v104 - v46; /*0x4be7bb*/
      *(_DWORD *)v93 = v79 - v46; /*0x4be7bf*/
      if ( v46 > 0 ) /*0x4be7c3*/
      {
        v94[1] = v46; /*0x4be7d0*/
        v69 = g_ZBufferDescriptor; /*0x4be7d4*/
        v83 = 0; /*0x4be7da*/
        v88 = 2 * pad_0; /*0x4be7e5*/
        do /*0x4be99b*/
        {
          v70 = *v42; /*0x4be7f6*/
          if ( (unsigned __int16)a8 < *SamplePosition ) /*0x4be7fa*/
          {
            v71 = *(_WORD *)&v108[v83]; /*0x4be80b*/
            LOBYTE(v115) = (unsigned __int8)(v71 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4be82a*/
            HIBYTE(v115) = (unsigned __int8)(v71 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4be845*/
            LOWORD(a7) = v115; /*0x4be861*/
            BYTE2(a7) = (unsigned __int8)(v71 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4be870*/
            v72 = BlendColorPack((unsigned __int8 *)&a7, (v91 * v70) >> 7, (v90 * v70) >> 7, (v89 * v70) >> 7); /*0x4be895*/
            v67 = *(_DWORD *)&v93[4]; /*0x4be89e*/
            *(_WORD *)&v108[v83] = v72; /*0x4be8a2*/
            v69 = g_ZBufferDescriptor; /*0x4be8a6*/
            v68 = *(_DWORD *)v93; /*0x4be8ac*/
          }
          if ( v67 > 0 ) /*0x4be8b2*/
          {
            ++SamplePosition; /*0x4be8bb*/
            v83 += 2; /*0x4be8c3*/
            if ( (unsigned int)SamplePosition >= v69[1].Stream_field_08 ) /*0x4be8c7*/
              SamplePosition = (_WORD *)((char *)SamplePosition - v69[1].Stream_field_0C); /*0x4be8c9*/
            v67 -= v103; /*0x4be8cc*/
          }
          if ( v68 > 0 ) /*0x4be8d5*/
          {
            a8 += v84; /*0x4be8eb*/
            v68 -= v103; /*0x4be8f2*/
          }
          v67 += v104; /*0x4be8ff*/
          v68 += v79; /*0x4be908*/
          v108 += v80; /*0x4be914*/
          SamplePosition = (_WORD *)((char *)SamplePosition + v88); /*0x4be922*/
          *(_DWORD *)&v93[4] = v67; /*0x4be924*/
          *(_DWORD *)v93 = v68; /*0x4be92a*/
          if ( pad_0 <= 0 ) /*0x4be92e*/
          {
            v73 = SamplePosition; /*0x4be93d*/
            if ( (unsigned int)SamplePosition < v69[1].Stream_field_04 ) /*0x4be941*/
              v73 = (_WORD *)((char *)SamplePosition + v69[1].Stream_field_0C); /*0x4be946*/
            SamplePosition = v73; /*0x4be948*/
          }
          else if ( (unsigned int)SamplePosition >= v69[1].Stream_field_08 ) /*0x4be933*/
          {
            SamplePosition = (_WORD *)((char *)SamplePosition - v69[1].Stream_field_0C); /*0x4be935*/
          }
          v42 = (unsigned __int16 *)((char *)v42 + v88); /*0x4be955*/
          if ( pad_0 <= 0 ) /*0x4be959*/
          {
            v74 = v42; /*0x4be970*/
            if ( (unsigned int)v42 < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4be975*/
              v74 = (unsigned __int16 *)((char *)v42 + *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be97a*/
            v42 = v74; /*0x4be97c*/
          }
          else if ( (unsigned int)v42 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4be963*/
          {
            v42 = (unsigned __int16 *)((char *)v42 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be965*/
          }
          v56 = v94[1] == 1; /*0x4be98f*/
          a8 += v85; /*0x4be990*/
          --v94[1]; /*0x4be997*/
        }
        while ( !v56 ); /*0x4be99b*/
      }
    }
    else
    {
      v58 = v103 - v86; /*0x4be5bf*/
      *(_DWORD *)&v93[4] = v103 - v86; /*0x4be5c3*/
      *(_DWORD *)v93 = v79 - v86; /*0x4be5c9*/
      v82 = 0; /*0x4be5cd*/
      if ( v86 > 0 ) /*0x4be5d5*/
      {
        v59 = g_ZBufferDescriptor; /*0x4be5db*/
        do /*0x4be78f*/
        {
          v60 = *v42; /*0x4be5ee*/
          if ( (unsigned __int16)a8 < *SamplePosition ) /*0x4be5f2*/
          {
            v61 = *(_WORD *)&v108[2 * v82]; /*0x4be603*/
            LOBYTE(v114) = (unsigned __int8)(v61 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4be622*/
            HIBYTE(v114) = (unsigned __int8)(v61 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4be63d*/
            LOWORD(a7) = v114; /*0x4be659*/
            BYTE2(a7) = (unsigned __int8)(v61 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4be668*/
            v62 = BlendColorPack((unsigned __int8 *)&a7, (v91 * v60) >> 7, (v90 * v60) >> 7, (v89 * v60) >> 7); /*0x4be68d*/
            v58 = *(_DWORD *)&v93[4]; /*0x4be696*/
            *(_WORD *)&v108[2 * v82] = v62; /*0x4be69a*/
            v59 = g_ZBufferDescriptor; /*0x4be69e*/
          }
          if ( v58 > 0 ) /*0x4be6a6*/
          {
            v58 -= v104; /*0x4be6c0*/
            v108 += v80; /*0x4be6c9*/
            SamplePosition += pad_0; /*0x4be6d3*/
            if ( pad_0 <= 0 ) /*0x4be6d7*/
            {
              v63 = SamplePosition; /*0x4be6e6*/
              if ( (unsigned int)SamplePosition < v59[1].Stream_field_04 ) /*0x4be6ea*/
                v63 = (_WORD *)((char *)SamplePosition + v59[1].Stream_field_0C); /*0x4be6ef*/
              SamplePosition = v63; /*0x4be6f1*/
            }
            else if ( (unsigned int)SamplePosition >= v59[1].Stream_field_08 ) /*0x4be6dc*/
            {
              SamplePosition = (_WORD *)((char *)SamplePosition - v59[1].Stream_field_0C); /*0x4be6de*/
            }
            v42 += pad_0; /*0x4be6fa*/
            if ( pad_0 <= 0 ) /*0x4be6fe*/
            {
              v64 = v42; /*0x4be715*/
              if ( (unsigned int)v42 < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4be71a*/
                v64 = (unsigned __int16 *)((char *)v42 + *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be71f*/
              v42 = v64; /*0x4be721*/
            }
            else if ( (unsigned int)v42 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4be708*/
            {
              v42 = (unsigned __int16 *)((char *)v42 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be70a*/
            }
            a8 += v85; /*0x4be730*/
          }
          v65 = *(_DWORD *)v93; /*0x4be737*/
          if ( *(int *)v93 > 0 ) /*0x4be73d*/
          {
            a8 += v84; /*0x4be74c*/
            v65 = *(_DWORD *)v93 - v104; /*0x4be75a*/
          }
          ++SamplePosition; /*0x4be769*/
          *(_DWORD *)v93 = v79 + v65; /*0x4be76c*/
          Stream_field_08 = v59[1].Stream_field_08; /*0x4be770*/
          v58 += v103; /*0x4be773*/
          *(_DWORD *)&v93[4] = v58; /*0x4be777*/
          if ( (unsigned int)SamplePosition >= Stream_field_08 ) /*0x4be77b*/
            SamplePosition = (_WORD *)((char *)SamplePosition - v59[1].Stream_field_0C); /*0x4be77d*/
          ++v82; /*0x4be78b*/
        }
        while ( v82 < v86 ); /*0x4be78f*/
      }
    }
  }
  else
  {
    v48 = v103 - v47; /*0x4be3be*/
    v49 = v104 - v47; /*0x4be3c0*/
    *(_DWORD *)v93 = v103 - v47; /*0x4be3c4*/
    v87 = v104 - v47; /*0x4be3c8*/
    if ( v47 > 0 ) /*0x4be3cc*/
    {
      v50 = g_ZBufferDescriptor; /*0x4be3d2*/
      v81 = 0; /*0x4be3d8*/
      *(_DWORD *)&v93[4] = v47; /*0x4be3e0*/
      do /*0x4be58d*/
      {
        v51 = *v42; /*0x4be3f1*/
        if ( (unsigned __int16)a8 < *SamplePosition ) /*0x4be3f5*/
        {
          v52 = *(_WORD *)&v108[v81]; /*0x4be406*/
          LOBYTE(v113) = (unsigned __int8)(v52 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4be425*/
          HIBYTE(v113) = (unsigned __int8)(v52 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4be440*/
          LOWORD(a7) = v113; /*0x4be45c*/
          BYTE2(a7) = (unsigned __int8)(v52 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4be46b*/
          v53 = BlendColorPack((unsigned __int8 *)&a7, (v91 * v51) >> 7, (v90 * v51) >> 7, (v89 * v51) >> 7); /*0x4be490*/
          v48 = *(_DWORD *)v93; /*0x4be499*/
          v49 = v87; /*0x4be49d*/
          *(_WORD *)&v108[v81] = v53; /*0x4be4a1*/
          v50 = g_ZBufferDescriptor; /*0x4be4a5*/
        }
        if ( v48 > 0 ) /*0x4be4ad*/
        {
          v108 += v80; /*0x4be4c4*/
          v48 -= v79; /*0x4be4d2*/
          SamplePosition += pad_0; /*0x4be4d7*/
          if ( pad_0 <= 0 ) /*0x4be4db*/
          {
            v54 = SamplePosition; /*0x4be4ea*/
            if ( (unsigned int)SamplePosition < v50[1].Stream_field_04 ) /*0x4be4ec*/
              v54 = (_WORD *)((char *)SamplePosition + v50[1].Stream_field_0C); /*0x4be4f1*/
            SamplePosition = v54; /*0x4be4f3*/
          }
          else if ( (unsigned int)SamplePosition >= v50[1].Stream_field_08 ) /*0x4be4e0*/
          {
            SamplePosition = (_WORD *)((char *)SamplePosition - v50[1].Stream_field_0C); /*0x4be4e2*/
          }
          v42 += pad_0; /*0x4be4f5*/
          if ( pad_0 <= 0 ) /*0x4be4f9*/
          {
            v55 = v42; /*0x4be510*/
            if ( (unsigned int)v42 < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4be515*/
              v55 = (unsigned __int16 *)((char *)v42 + *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be51a*/
            v42 = v55; /*0x4be51c*/
          }
          else if ( (unsigned int)v42 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4be503*/
          {
            v42 = (unsigned __int16 *)((char *)v42 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be505*/
          }
          v49 = v87; /*0x4be52b*/
          a8 += v85; /*0x4be52f*/
        }
        if ( v49 > 0 ) /*0x4be538*/
        {
          ++SamplePosition; /*0x4be541*/
          v81 += 2; /*0x4be549*/
          if ( (unsigned int)SamplePosition >= v50[1].Stream_field_08 ) /*0x4be54d*/
            SamplePosition = (_WORD *)((char *)SamplePosition - v50[1].Stream_field_0C); /*0x4be54f*/
          v49 -= v79; /*0x4be552*/
        }
        a8 += v84; /*0x4be56a*/
        v49 += v104; /*0x4be578*/
        v48 += v103; /*0x4be57e*/
        v56 = *(_DWORD *)&v93[4] == 1; /*0x4be580*/
        v87 = v49; /*0x4be581*/
        *(_QWORD *)v93 = __PAIR64__(*(unsigned int *)&v93[4], v48) - 0x100000000LL; /*0x4be589*/
      }
      while ( !v56 ); /*0x4be58d*/
    }
  }
  (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4be599*/
  return 1; /*0x4be59c*/
}



// ==== 0x004BE9D0  BlendColorPack  this=-  sig=csp ====
int __fastcall Color_BlendPack(unsigned __int8 *a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  bool v9; // cc

  v4 = a2 + *a1; /*0x4be9dc*/
  v5 = a3 + a1[1]; /*0x4be9ec*/
  v6 = a4 + a1[2]; /*0x4be9ee*/
  v7 = 0; /*0x4be9f0*/
  v8 = 0; /*0x4be9f2*/
  if ( v4 >= 255 ) /*0x4be9fa*/
  {
    v8 = 1; /*0x4be9fc*/
    v7 = v4 - 255; /*0x4bea01*/
  }
  if ( v5 >= 255 ) /*0x4bea0d*/
  {
    ++v8; /*0x4bea0f*/
    v7 = v7 + v5 - 255; /*0x4bea10*/
  }
  if ( v6 >= 255 ) /*0x4bea1c*/
  {
    ++v8; /*0x4bea1e*/
    v7 = v7 + v6 - 255; /*0x4bea1f*/
  }
  if ( !v8 || v8 >= 3 ) /*0x4bea2d*/
    goto LABEL_17; /*0x4bea2d*/
  if ( v8 == 1 ) /*0x4bea32*/
    v7 >>= 1; /*0x4bea34*/
  if ( v4 < 255 ) /*0x4bea3c*/
    v4 += v7; /*0x4bea3e*/
  if ( v5 < 255 ) /*0x4bea46*/
    v5 += v7; /*0x4bea48*/
  v9 = v6 <= 255; /*0x4bea4a*/
  if ( v6 < 255 ) /*0x4bea4f*/
  {
    v6 += v7; /*0x4bea51*/
LABEL_17:
    v9 = v6 <= 255; /*0x4bea53*/
  }
  if ( !v9 ) /*0x4bea58*/
    v6 = 255; /*0x4bea5a*/
  if ( v5 > 255 ) /*0x4bea65*/
    v5 = 255; /*0x4bea67*/
  if ( v4 > 255 ) /*0x4bea72*/
    v4 = 255; /*0x4bea74*/
  return (v4 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4bea7f*/
       | (v5 >> g_BitMask_Blue << g_BitMask_Green)
       | (v6 >> g_BitMask_Red << g_BitShift_Blue);
}



// ==== 0x004BEAC0  AudioStream::DrawWaveform  this=AudioStream  sig=csp ====
char __thiscall AudioStream::DrawWaveform(
        AudioStream *this,
        int *a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned __int8 *a5,
        int a6,
        int a7,
        int a8)
{
  int *v8; // eax
  int *v9; // eax
  int v10; // esi
  int v11; // edi
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // esi
  int v16; // edx
  int v17; // ebx
  int v18; // ebp
  int v19; // edi
  int v20; // ebp
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  int Stream_field_04; // edi
  _WORD *SamplePosition; // edi
  int v32; // ebx
  int v33; // eax
  _WORD *v34; // ebx
  int v35; // ebp
  int v36; // esi
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // edx
  int v41; // ecx
  int v42; // esi
  unsigned __int16 v43; // ax
  _WORD *v44; // eax
  int v45; // eax
  _WORD *v46; // eax
  bool v47; // zf
  int v49; // eax
  int v50; // edx
  int v51; // esi
  unsigned __int16 v52; // ax
  _WORD *v53; // ecx
  _WORD *v54; // ecx
  int v55; // edx
  int v56; // esi
  unsigned __int16 v57; // ax
  unsigned int Stream_field_08; // ecx
  unsigned int v59; // edi
  int v60; // esi
  _WORD *v61; // eax
  int v62; // [esp+10h] [ebp-6Ch]
  int v63; // [esp+10h] [ebp-6Ch]
  int v64; // [esp+10h] [ebp-6Ch]
  int v65; // [esp+14h] [ebp-68h]
  int v66; // [esp+18h] [ebp-64h]
  int v67; // [esp+1Ch] [ebp-60h]
  int v68; // [esp+20h] [ebp-5Ch]
  int v69; // [esp+24h] [ebp-58h]
  int v70; // [esp+28h] [ebp-54h]
  int v72; // [esp+30h] [ebp-4Ch]
  int v73; // [esp+30h] [ebp-4Ch]
  int v74; // [esp+30h] [ebp-4Ch]
  int v75[2]; // [esp+34h] [ebp-48h] BYREF
  _WORD *v76; // [esp+3Ch] [ebp-40h] BYREF
  int v77; // [esp+40h] [ebp-3Ch]
  int v78; // [esp+4Ch] [ebp-30h] BYREF
  int v79; // [esp+50h] [ebp-2Ch]
  int v80; // [esp+5Ch] [ebp-20h] BYREF
  int v81; // [esp+60h] [ebp-1Ch]
  int v82; // [esp+64h] [ebp-18h] BYREF
  int v83; // [esp+68h] [ebp-14h]
  int v84; // [esp+6Ch] [ebp-10h] BYREF
  int v85; // [esp+70h] [ebp-Ch]
  int v86; // [esp+74h] [ebp-8h]
  int v87; // [esp+78h] [ebp-4h]
  int pad_0; // [esp+80h] [ebp+4h]
  char *v89; // [esp+84h] [ebp+8h]
  _DWORD *v90; // [esp+84h] [ebp+8h]
  int v91; // [esp+84h] [ebp+8h]
  char *v92; // [esp+88h] [ebp+Ch]
  int v93; // [esp+88h] [ebp+Ch]
  unsigned __int8 *v94; // [esp+8Ch] [ebp+10h]
  unsigned __int8 *v95; // [esp+8Ch] [ebp+10h]
  unsigned __int8 *v96; // [esp+8Ch] [ebp+10h]
  int v97; // [esp+90h] [ebp+14h]
  int v98; // [esp+90h] [ebp+14h]
  int v99; // [esp+94h] [ebp+18h]
  int v100; // [esp+94h] [ebp+18h]
  int v101; // [esp+94h] [ebp+18h]
  int v102; // [esp+98h] [ebp+1Ch]

  if ( a6 < 8 ) /*0x4bead5*/
    return 0; /*0x4bead5*/
  v8 = (int *)(*(int (__thiscall **)(AudioStream *, int *))(*(_DWORD *)this->__pad_0 + 120))(this, &v78); /*0x4beae2*/
  v9 = ClipRectIntersection(&v76, a2, v8, 0, 0); /*0x4beaf5*/
  v10 = *v9; /*0x4beafc*/
  v84 = *v9; /*0x4beafe*/
  v11 = v9[1]; /*0x4beb02*/
  v85 = v11; /*0x4beb05*/
  v86 = v9[2]; /*0x4beb0c*/
  v12 = v9[3]; /*0x4beb10*/
  v87 = v12; /*0x4beb15*/
  if ( !v86 && !v12 ) /*0x4beb1d*/
    return 0; /*0x4beb1d*/
  v13 = v10 + *a3; /*0x4beb3c*/
  v14 = v10 + *a4; /*0x4beb3e*/
  v15 = a8; /*0x4beb40*/
  v16 = v11 + a3[1]; /*0x4beb47*/
  v17 = v13; /*0x4beb49*/
  v18 = v11 + a4[1]; /*0x4beb4b*/
  v19 = a7; /*0x4beb4d*/
  v80 = v13; /*0x4beb56*/
  v81 = v16; /*0x4beb5a*/
  v82 = v14; /*0x4beb5e*/
  v83 = v18; /*0x4beb62*/
  if ( v13 > v14 ) /*0x4beb66*/
  {
    v17 = v14; /*0x4beb68*/
    v19 = a8; /*0x4beb6a*/
    v15 = a7; /*0x4beb6c*/
    v80 = v14; /*0x4beb73*/
    v81 = v18; /*0x4beb77*/
    v82 = v13; /*0x4beb7b*/
    v83 = v16; /*0x4beb7f*/
  }
  v78 = v82; /*0x4beb8f*/
  v20 = v17; /*0x4beb94*/
  v21 = v81; /*0x4beb96*/
  v79 = v83; /*0x4beba2*/
  if ( !(unsigned __int8)ClipLine(&v80, &v82, &v84) ) /*0x4beba6*/
    return 0; /*0x4beba6*/
  v92 = (char *)v15; /*0x4bebc1*/
  v89 = (char *)v19; /*0x4bebc8*/
  if ( v82 != v78 || v83 != v79 ) /*0x4bebd5*/
  {
    v75[0] = v20 - v82; /*0x4bebe7*/
    v75[1] = v21 - v83; /*0x4bebeb*/
    v76 = (_WORD *)(v20 - v78); /*0x4bebfb*/
    v77 = v21 - v79; /*0x4bebff*/
    Vector::TwoDMagnitudeMath((int *)&v76); /*0x4bec07*/
    v99 = v22; /*0x4bec10*/
    Vector::TwoDMagnitudeMath(v75); /*0x4bec17*/
    LOWORD(v24) = Math::RoundToInt((double)v23 / (double)v99 * (double)(v19 - v15)); /*0x4bec45*/
    v25 = abs32(v24); /*0x4bec4d*/
    if ( v19 >= v15 ) /*0x4bec51*/
      v92 = (char *)(v19 - v25); /*0x4bec62*/
    else
      v92 = (char *)(v19 + v25); /*0x4bec55*/
  }
  if ( v80 != v20 || v81 != v21 ) /*0x4bec77*/
  {
    v77 = v81 - v79; /*0x4bec8d*/
    v76 = (_WORD *)(v80 - v78); /*0x4bec97*/
    v78 = v20 - v78; /*0x4bec9b*/
    v79 = v21 - v79; /*0x4bec9f*/
    Vector::TwoDMagnitudeMath(&v78); /*0x4beca3*/
    v100 = v26; /*0x4becac*/
    Vector::TwoDMagnitudeMath((int *)&v76); /*0x4becb3*/
    LOWORD(v28) = Math::RoundToInt((double)v27 / (double)v100 * (double)(v19 - v15)); /*0x4bece1*/
    v29 = abs32(v28); /*0x4bece9*/
    if ( v15 <= v19 ) /*0x4beced*/
      v89 = (char *)(v15 + v29); /*0x4becfc*/
    else
      v89 = (char *)(v15 - v29); /*0x4becf1*/
  }
  (*(void (__thiscall **)(AudioStream *))(*(_DWORD *)this->__pad_0 + 112))(this); /*0x4bed0b*/
  v101 = (*(int (__thiscall **)(AudioStream *, int, int))(*(_DWORD *)this->__pad_0 + 92))(this, v80, v81); /*0x4bed25*/
  if ( !g_ZBufferDescriptor ) /*0x4bed2e*/
    return 0; /*0x4bed2e*/
  Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4bed38*/
  v79 = v81; /*0x4bed3f*/
  SamplePosition = (_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v80, v81 - Stream_field_04); /*0x4bed56*/
  v32 = *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4); /*0x4bed5c*/
  v79 = v81; /*0x4bed5f*/
  v33 = StreamClass::ReadAndSeek(*(int **)&stru_87E790.__pad_D8[60], v80, v81 - v32); /*0x4bed67*/
  v34 = (_WORD *)v33; /*0x4bed7a*/
  LOWORD(v33) = LOWORD(g_ZBufferDescriptor->Stream_field_04) + LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4bed87*/
  v67 = -1; /*0x4bed8b*/
  v102 = (int)&v89[v33 - v81 - v85]; /*0x4bed99*/
  pad_0 = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4beda3*/
  if ( !v101 ) /*0x4bedb3*/
    return 0; /*0x4bf63e*/
  v35 = 256 - a6; /*0x4bedd0*/
  v70 = (a6 * *a5) >> 8; /*0x4bedd8*/
  v69 = (a6 * a5[1]) >> 8; /*0x4bede7*/
  v68 = (a6 * a5[2]) >> 8; /*0x4bedfa*/
  v36 = v82 - v80; /*0x4bee06*/
  v72 = v82 - v80; /*0x4bee0c*/
  v97 = v83 - v81; /*0x4bee19*/
  v90 = (_DWORD *)(v92 - v89); /*0x4bee2b*/
  v37 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)this->__pad_0 + 116))(this); /*0x4bee32*/
  v66 = v37; /*0x4bee3c*/
  if ( v97 < 0 ) /*0x4bee42*/
  {
    v66 = -v37; /*0x4bee46*/
    pad_0 = -pad_0; /*0x4bee53*/
    v67 = 1; /*0x4bee5a*/
  }
  v65 = 1; /*0x4bee69*/
  v38 = abs32(v97); /*0x4bee7d*/
  if ( (int)v90 < 0 ) /*0x4bee81*/
    v65 = -1; /*0x4bee83*/
  v39 = abs32((int)v90); /*0x4bee8e*/
  v91 = 2 * v36; /*0x4bee93*/
  v98 = 2 * v38; /*0x4bee9d*/
  v93 = 2 * v39; /*0x4beea9*/
  if ( v39 <= v36 || v39 <= v38 ) /*0x4beeb8*/
  {
    if ( v36 <= v38 ) /*0x4bf149*/
    {
      v96 = (unsigned __int8 *)(v91 - v38); /*0x4bf3be*/
      v64 = v93 - v38; /*0x4bf3d0*/
      if ( v38 > 0 ) /*0x4bf3d4*/
      {
        v55 = 0; /*0x4bf3da*/
        v74 = v38; /*0x4bf3dc*/
        v75[0] = 0; /*0x4bf3e0*/
        do /*0x4bf620*/
        {
          v56 = (unsigned __int16)*v34; /*0x4bf3f1*/
          if ( (unsigned __int16)v102 < *SamplePosition && *v34 ) /*0x4bf3ec*/
          {
            v57 = *(_WORD *)(v55 + v101); /*0x4bf409*/
            LOBYTE(v78) = (unsigned __int8)(v57 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bf428*/
            BYTE1(v78) = (unsigned __int8)(v57 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bf439*/
            BYTE2(v78) = (unsigned __int8)(v57 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bf456*/
            v55 = v75[0]; /*0x4bf4e1*/
            *(_WORD *)(v75[0] + v101) = ((v56 * (v70 + ((v35 * (unsigned __int8)v78) >> 8))) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4bf4e5*/
                                      | ((v56 * (v69 + ((v35 * BYTE1(v78)) >> 8))) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                                      | ((v56 * (v68 + ((v35 * BYTE2(v78)) >> 8))) >> 7 >> g_BitMask_Red << g_BitShift_Blue);
          }
          if ( (int)v96 > 0 ) /*0x4bf4f2*/
          {
            ++SamplePosition; /*0x4bf4f9*/
            v55 += 2; /*0x4bf4fc*/
            Stream_field_08 = g_ZBufferDescriptor[1].Stream_field_08; /*0x4bf4ff*/
            v75[0] = v55; /*0x4bf502*/
            if ( (unsigned int)SamplePosition >= Stream_field_08 ) /*0x4bf508*/
              SamplePosition = (_WORD *)((char *)SamplePosition - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf50a*/
            if ( (unsigned int)++v34 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4bf518*/
              v34 = (_WORD *)((char *)v34 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4bf51a*/
            v96 -= v98; /*0x4bf52d*/
          }
          if ( v64 > 0 ) /*0x4bf53a*/
          {
            v102 += v65; /*0x4bf54d*/
            v64 -= v98; /*0x4bf55d*/
          }
          v96 += v91; /*0x4bf579*/
          v64 += v93; /*0x4bf592*/
          v101 += v66; /*0x4bf596*/
          v59 = (unsigned int)&SamplePosition[pad_0]; /*0x4bf5a7*/
          if ( pad_0 <= 0 ) /*0x4bf5ab*/
          {
            v76 = (_WORD *)v59; /*0x4bf5cd*/
            if ( v59 >= g_ZBufferDescriptor[1].Stream_field_04 ) /*0x4bf5d4*/
              v60 = (int)v76; /*0x4bf5dd*/
            else
              v60 = v59 + g_ZBufferDescriptor[1].Stream_field_0C; /*0x4bf5d9*/
            SamplePosition = (_WORD *)v60; /*0x4bf5e1*/
          }
          else
          {
            v76 = (_WORD *)v59; /*0x4bf5b3*/
            if ( v59 < g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4bf5ba*/
              SamplePosition = v76; /*0x4bf5c1*/
            else
              SamplePosition = (_WORD *)(v59 - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf5bc*/
          }
          v34 += pad_0; /*0x4bf5e7*/
          v102 += v67; /*0x4bf5e9*/
          if ( pad_0 <= 0 ) /*0x4bf5f2*/
          {
            v61 = v34; /*0x4bf609*/
            if ( (unsigned int)v34 < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4bf60e*/
              v61 = (_WORD *)((char *)v34 + *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4bf613*/
            v34 = v61; /*0x4bf615*/
          }
          else if ( (unsigned int)v34 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4bf5fc*/
          {
            v34 = (_WORD *)((char *)v34 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4bf5fe*/
          }
          --v74; /*0x4bf61c*/
        }
        while ( v74 ); /*0x4bf620*/
      }
    }
    else
    {
      v95 = (unsigned __int8 *)(v98 - v36); /*0x4bf158*/
      v63 = v93 - v36; /*0x4bf168*/
      v49 = 0; /*0x4bf16c*/
      v75[0] = 0; /*0x4bf170*/
      if ( v36 > 0 ) /*0x4bf174*/
      {
        v50 = *(_DWORD *)&stru_87E790.__pad_D8[60]; /*0x4bf17a*/
        do /*0x4bf39a*/
        {
          v51 = (unsigned __int16)*v34; /*0x4bf18d*/
          if ( (unsigned __int16)v102 < *SamplePosition && *v34 ) /*0x4bf188*/
          {
            v52 = *(_WORD *)(v101 + 2 * v49); /*0x4bf1ac*/
            LOBYTE(v76) = (unsigned __int8)(v52 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bf1c4*/
            BYTE1(v76) = (unsigned __int8)(v52 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bf1e5*/
            BYTE2(v76) = (unsigned __int8)(v52 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bf1f1*/
            v49 = v75[0]; /*0x4bf27c*/
            *(_WORD *)(v101 + 2 * v75[0]) = ((v51 * (v70 + ((v35 * (unsigned __int8)v76) >> 8))) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4bf280*/
                                          | ((v51 * (v68 + ((v35 * BYTE2(v76)) >> 8))) >> 7 >> g_BitMask_Red << g_BitShift_Blue)
                                          | ((v51 * (v69 + ((v35 * BYTE1(v76)) >> 8))) >> 7 >> g_BitMask_Blue << g_BitMask_Green);
            v50 = *(_DWORD *)&stru_87E790.__pad_D8[60]; /*0x4bf284*/
          }
          if ( (int)v95 > 0 ) /*0x4bf293*/
          {
            v101 += v66; /*0x4bf2a6*/
            v95 -= v91; /*0x4bf2b6*/
            SamplePosition += pad_0; /*0x4bf2c7*/
            if ( pad_0 <= 0 ) /*0x4bf2cb*/
            {
              v53 = SamplePosition; /*0x4bf2e3*/
              if ( (unsigned int)SamplePosition < g_ZBufferDescriptor[1].Stream_field_04 ) /*0x4bf2e8*/
                v53 = (_WORD *)((char *)SamplePosition + g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf2ed*/
              SamplePosition = v53; /*0x4bf2ef*/
            }
            else if ( (unsigned int)SamplePosition >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4bf2d6*/
            {
              SamplePosition = (_WORD *)((char *)SamplePosition - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf2d8*/
            }
            v50 = *(_DWORD *)&stru_87E790.__pad_D8[60]; /*0x4bf2f5*/
            v102 += v67; /*0x4bf2fb*/
            v34 += pad_0; /*0x4bf309*/
            if ( pad_0 <= 0 ) /*0x4bf30d*/
            {
              v54 = v34; /*0x4bf31c*/
              if ( (unsigned int)v34 < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4bf320*/
                v54 = (_WORD *)((char *)v34 + *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4bf325*/
              v34 = v54; /*0x4bf327*/
            }
            else if ( (unsigned int)v34 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4bf312*/
            {
              v34 = (_WORD *)((char *)v34 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4bf314*/
            }
          }
          if ( v63 > 0 ) /*0x4bf32f*/
          {
            v102 += v65; /*0x4bf335*/
            v63 -= v91; /*0x4bf345*/
          }
          v95 += v98; /*0x4bf360*/
          v63 += v93; /*0x4bf373*/
          if ( (unsigned int)++SamplePosition >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4bf37d*/
            SamplePosition = (_WORD *)((char *)SamplePosition - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf37f*/
          if ( (unsigned int)++v34 >= *(_DWORD *)(v50 + 28) ) /*0x4bf38a*/
            v34 = (_WORD *)((char *)v34 - *(_DWORD *)(v50 + 32)); /*0x4bf38c*/
          v75[0] = ++v49; /*0x4bf396*/
        }
        while ( v49 < v72 ); /*0x4bf39a*/
      }
    }
  }
  else
  {
    v62 = v98 - v39; /*0x4beec7*/
    v94 = (unsigned __int8 *)(v91 - v39); /*0x4beed6*/
    if ( v39 > 0 ) /*0x4beedd*/
    {
      v40 = *(_DWORD *)&stru_87E790.__pad_D8[60]; /*0x4beee3*/
      v41 = 0; /*0x4beee9*/
      v73 = 0; /*0x4beeeb*/
      v75[0] = v39; /*0x4beeef*/
      while ( 1 ) /*0x4bef00*/
      {
        v42 = (unsigned __int16)*v34; /*0x4bef00*/
        if ( (unsigned __int16)v102 < *SamplePosition && *v34 ) /*0x4beefb*/
        {
          v43 = *(_WORD *)(v41 + v101); /*0x4bef18*/
          LOBYTE(v76) = (unsigned __int8)(v43 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bef37*/
          BYTE1(v76) = (unsigned __int8)(v43 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bef58*/
          BYTE2(v76) = (unsigned __int8)(v43 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bef68*/
          v41 = v73; /*0x4befe7*/
          *(_WORD *)(v73 + v101) = ((v42 * (v70 + ((v35 * (unsigned __int8)v76) >> 8))) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4beff4*/
                                 | ((v42 * (v68 + ((v35 * BYTE2(v76)) >> 8))) >> 7 >> g_BitMask_Red << g_BitShift_Blue)
                                 | ((v42 * (v69 + ((v35 * BYTE1(v76)) >> 8))) >> 7 >> g_BitMask_Blue << g_BitMask_Green);
          v40 = *(_DWORD *)&stru_87E790.__pad_D8[60]; /*0x4beff8*/
        }
        if ( v62 <= 0 ) /*0x4bf004*/
        {
          v45 = v102; /*0x4bf0a9*/
          goto LABEL_45; /*0x4bf0a9*/
        }
        v101 += v66; /*0x4bf017*/
        v62 -= v93; /*0x4bf027*/
        SamplePosition += pad_0; /*0x4bf035*/
        if ( pad_0 <= 0 ) /*0x4bf039*/
        {
          v44 = SamplePosition; /*0x4bf050*/
          if ( (unsigned int)SamplePosition < g_ZBufferDescriptor[1].Stream_field_04 ) /*0x4bf055*/
            v44 = (_WORD *)((char *)SamplePosition + g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf05a*/
          SamplePosition = v44; /*0x4bf05c*/
        }
        else if ( (unsigned int)SamplePosition >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4bf043*/
        {
          SamplePosition = (_WORD *)((char *)SamplePosition - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf045*/
        }
        v40 = *(_DWORD *)&stru_87E790.__pad_D8[60]; /*0x4bf065*/
        v34 += pad_0; /*0x4bf06b*/
        if ( pad_0 <= 0 ) /*0x4bf06f*/
          break; /*0x4bf06f*/
        if ( (unsigned int)v34 < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4bf074*/
          goto LABEL_43; /*0x4bf074*/
        v34 = (_WORD *)((char *)v34 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4bf07d*/
        v45 = v67 + v102; /*0x4bf086*/
LABEL_45:
        if ( (int)v94 > 0 ) /*0x4bf0b9*/
        {
          ++SamplePosition; /*0x4bf0c1*/
          v41 += 2; /*0x4bf0c4*/
          v73 = v41; /*0x4bf0ca*/
          if ( (unsigned int)SamplePosition >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4bf0ce*/
            SamplePosition = (_WORD *)((char *)SamplePosition - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf0d0*/
          if ( (unsigned int)++v34 >= *(_DWORD *)(v40 + 28) ) /*0x4bf0db*/
            v34 = (_WORD *)((char *)v34 - *(_DWORD *)(v40 + 32)); /*0x4bf0dd*/
          v94 -= v93; /*0x4bf0e7*/
        }
        v102 = v65 + v45; /*0x4bf0fb*/
        v94 += v91; /*0x4bf112*/
        v47 = v75[0] == 1; /*0x4bf123*/
        v62 += v98; /*0x4bf124*/
        --v75[0]; /*0x4bf128*/
        if ( v47 ) /*0x4bf12c*/
          goto LABEL_52; /*0x4bf12c*/
      }
      v46 = v34; /*0x4bf08d*/
      if ( (unsigned int)v34 < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4bf091*/
        v46 = (_WORD *)((char *)v34 + *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4bf096*/
      v34 = v46; /*0x4bf098*/
LABEL_43:
      v45 = v67 + v102; /*0x4bf09a*/
      goto LABEL_45; /*0x4bf0a7*/
    }
  }
LABEL_52:
  (*(void (__thiscall **)(AudioStream *))(*(_DWORD *)this->__pad_0 + 96))(this); /*0x4bf132*/
  return 1; /*0x4bf13b*/
}



// ==== 0x004BF650  BlendMinimapPixel  this=-  sig=csp ====
__int16 __fastcall BlendMinimapPixel(unsigned __int16 a1, unsigned __int16 a2, int a3)
{
  int v3; // eax

  LOWORD(v3) = a1; /*0x4bf658*/
  switch ( a3 ) /*0x4bf664*/
  {
    case 0: /*0x4bf664*/
      LOWORD(v3) = a2; /*0x4bf6c0*/
      break; /*0x4bf6c0*/
    case 25: /*0x4bf664*/
      v3 = 4 * (HIWORD(g_DDraw_Gray127) & (a1 >> 2)); /*0x4bf6ba*/
      break; /*0x4bf6bd*/
    case 50: /*0x4bf664*/
      v3 = ((unsigned __int16)g_DDraw_Gray127 & (a2 >> 1)) + ((unsigned __int16)g_DDraw_Gray127 & (a1 >> 1)); /*0x4bf6a2*/
      break; /*0x4bf6a5*/
    case 75: /*0x4bf664*/
      v3 = 4 * (HIWORD(g_DDraw_Gray127) & (a1 >> 2)); /*0x4bf67d*/
      break; /*0x4bf680*/
    default:
      return v3;
  }
  return v3; /*0x4bf67c*/
}



// ==== 0x004BF750  DSurface::DrawGradientLine  this=DSurface  sig=csp ====
char __thiscall DSurface::DrawGradientLine(
        DSurface *this,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        int a5,
        int a6,
        float *a7,
        float *a8)
{
  DSurface *v8; // ebp
  int *v9; // eax
  int *v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  _WORD *v15; // ebx
  float *v16; // esi
  float *v17; // edi
  _BYTE *v18; // eax
  unsigned __int8 v19; // dl
  double v20; // st7
  char v22; // c0
  int v24; // eax
  int v25; // eax
  float *v26; // esi
  float *v27; // edi
  _BYTE *v28; // eax
  unsigned __int8 v29; // dl
  double v30; // st7
  char v32; // c0
  bool v33; // zf
  int v34; // esi
  int v35; // edi
  int v36; // eax
  int v37; // eax
  int v38; // ebx
  int v39; // ebp
  float *v40; // esi
  float *v41; // edi
  _BYTE *v42; // eax
  unsigned __int8 v43; // dl
  double v44; // st7
  char v46; // c0
  int v47; // ebx
  float *v48; // esi
  float *v49; // edi
  int v50; // ebp
  _BYTE *v51; // eax
  unsigned __int8 v52; // dl
  double v53; // st7
  char v55; // c0
  int v57; // [esp+10h] [ebp-48h]
  int v58; // [esp+14h] [ebp-44h]
  int v59; // [esp+14h] [ebp-44h]
  int v60; // [esp+18h] [ebp-40h] BYREF
  int v61; // [esp+1Ch] [ebp-3Ch]
  int v62; // [esp+20h] [ebp-38h] BYREF
  int v63; // [esp+24h] [ebp-34h]
  int v64; // [esp+28h] [ebp-30h] BYREF
  int v65; // [esp+2Ch] [ebp-2Ch]
  int v66; // [esp+30h] [ebp-28h]
  int v67; // [esp+34h] [ebp-24h]
  _BYTE v68[16]; // [esp+38h] [ebp-20h] BYREF
  int v69[4]; // [esp+48h] [ebp-10h] BYREF
  _WORD *v70; // [esp+5Ch] [ebp+4h]
  int v71; // [esp+5Ch] [ebp+4h]
  _DWORD *v72; // [esp+60h] [ebp+8h]
  int v73; // [esp+60h] [ebp+8h]
  _DWORD *v74; // [esp+64h] [ebp+Ch]
  int v75; // [esp+64h] [ebp+Ch]

  v8 = this; /*0x4bf755*/
  v9 = (int *)(*((int (__thiscall **)(DSurface *, _BYTE *))this->DSurface_field_0x0 + 30))(this, v68); /*0x4bf766*/
  v10 = ClipRectIntersection(v69, (int *)a2, v9, 0, 0); /*0x4bf776*/
  v64 = *v10; /*0x4bf77d*/
  v65 = v10[1]; /*0x4bf784*/
  v66 = v10[2]; /*0x4bf78b*/
  v67 = v10[3]; /*0x4bf796*/
  v11 = v65 + a3[1]; /*0x4bf7a1*/
  v60 = v64 + *a3; /*0x4bf7a3*/
  v61 = v11; /*0x4bf7a7*/
  v12 = v64 + *a4; /*0x4bf7b6*/
  v63 = v65 + a4[1]; /*0x4bf7b8*/
  v62 = v12; /*0x4bf7c9*/
  if ( (unsigned __int8)ClipLine(&v60, &v62, &v64) ) /*0x4bf7cd*/
  {
    v13 = v60; /*0x4bf7da*/
    if ( v60 > v62 ) /*0x4bf7e4*/
    {
      v14 = v61; /*0x4bf7e6*/
      v60 = v62; /*0x4bf7ea*/
      v62 = v13; /*0x4bf7f2*/
      v61 = v63; /*0x4bf7f6*/
      v63 = v14; /*0x4bf7fa*/
    }
    if ( (*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 28))(v8) == 2 ) /*0x4bf809*/
    {
      v15 = (_WORD *)(*((int (__thiscall **)(DSurface *, int, int))v8->DSurface_field_0x0 + 23))(v8, v60, v61); /*0x4bf821*/
      v70 = v15; /*0x4bf825*/
      if ( v15 ) /*0x4bf829*/
      {
        if ( v61 == v63 ) /*0x4bf83a*/
        {
          v71 = 0; /*0x4bf84a*/
          if ( v62 - v60 >= 0 ) /*0x4bf852*/
          {
            v16 = a8; /*0x4bf858*/
            v17 = a7; /*0x4bf85c*/
            do /*0x4bf874*/
            {
              v18 = Color::Lerp2((Color *)&a7, a5, a6, *v16); /*0x4bf874*/
              LOWORD(a8) = *(_WORD *)v18; /*0x4bf87f*/
              v19 = v18[2] >> g_BitMask_Red; /*0x4bf895*/
              LOWORD(v18) = (unsigned __int8)(BYTE1(a8) >> g_BitMask_Blue); /*0x4bf8ab*/
              *v15 = ((unsigned __int8)((unsigned __int8)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bf8cd*/
                   | ((_DWORD)v18 << g_BitMask_Green)
                   | (v19 << g_BitShift_Blue);
              v20 = *v17 + *v16; /*0x4bf8d2*/
              *v16 = v20; /*0x4bf8da*/
              if ( v22 && *v17 < 0.0 ) /*0x4bf8f0*/
              {
                *v16 = 0.0; /*0x4bf8f4*/
              }
              else
              {
                if ( v20 <= 1.0 || *v17 <= 0.0 ) /*0x4bf916*/
                  goto LABEL_16; /*0x4bf916*/
                *v16 = 1.0; /*0x4bf918*/
              }
              *v17 = -*v17; /*0x4bf922*/
LABEL_16:
              ++v15; /*0x4bf924*/
              ++v71; /*0x4bf938*/
            }
            while ( v71 <= v62 - v60 ); /*0x4bf874*/
          }
LABEL_17:
          (*((void (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 24))(v8); /*0x4bf942*/
          return 1; /*0x4bf953*/
        }
        if ( v60 == v62 ) /*0x4bf960*/
        {
          if ( v61 <= v63 ) /*0x4bf968*/
            v24 = (*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 29))(v8); /*0x4bf97b*/
          else
            v24 = -(*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 29))(v8); /*0x4bf972*/
          v72 = (_DWORD *)v24; /*0x4bf982*/
          v25 = abs32(v63 - v61); /*0x4bf98f*/
          if ( v25 < 0 ) /*0x4bf991*/
            goto LABEL_17; /*0x4bf991*/
          v26 = a8; /*0x4bf997*/
          v27 = a7; /*0x4bf99b*/
          v74 = (_DWORD *)(v25 + 1); /*0x4bf9a4*/
          while ( 1 ) /*0x4bf9b8*/
          {
            v28 = Color::Lerp2((Color *)&a7, a5, a6, *v26); /*0x4bf9b8*/
            LOWORD(a8) = *(_WORD *)v28; /*0x4bf9c3*/
            v29 = v28[2] >> g_BitMask_Red; /*0x4bf9d9*/
            LOWORD(v28) = (unsigned __int8)(BYTE1(a8) >> g_BitMask_Blue); /*0x4bf9ef*/
            *v70 = ((unsigned __int8)((unsigned __int8)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfa15*/
                 | ((_DWORD)v28 << g_BitMask_Green)
                 | (v29 << g_BitShift_Blue);
            v30 = *v27 + *v26; /*0x4bfa1a*/
            *v26 = v30; /*0x4bfa22*/
            if ( v32 && *v27 < 0.0 ) /*0x4bfa38*/
            {
              *v26 = 0.0; /*0x4bfa3c*/
            }
            else
            {
              if ( v30 <= 1.0 || *v27 <= 0.0 ) /*0x4bfa5e*/
                goto LABEL_31; /*0x4bfa5e*/
              *v26 = 1.0; /*0x4bfa60*/
            }
            *v27 = -*v27; /*0x4bfa6a*/
LABEL_31:
            v33 = v74 == (_DWORD *)1; /*0x4bfa6c*/
            v70 = (_WORD *)((char *)v70 + (_DWORD)v72); /*0x4bfa7b*/
            v74 = (_DWORD *)((char *)v74 - 1); /*0x4bfa7f*/
            if ( v33 ) /*0x4bfa83*/
              goto LABEL_17; /*0x4bfa83*/
          }
        }
        v34 = v63 - v61; /*0x4bfaa1*/
        v35 = v62 - v60; /*0x4bfaa6*/
        v58 = v62 - v60; /*0x4bfaaa*/
        v36 = (*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 29))(v8); /*0x4bfaae*/
        v73 = v36; /*0x4bfab3*/
        if ( v34 < 0 ) /*0x4bfab7*/
          v73 = -v36; /*0x4bfabb*/
        v57 = 2 * v35; /*0x4bfac7*/
        v37 = abs32(v34); /*0x4bfacb*/
        v75 = 2 * v37; /*0x4bfad2*/
        if ( v35 > v37 ) /*0x4bfad6*/
        {
          v38 = 0; /*0x4bfade*/
          v39 = 2 * v37 - v35; /*0x4bfae0*/
          if ( v35 < 0 ) /*0x4bfae4*/
          {
LABEL_61:
            v8 = this; /*0x4bfd08*/
            goto LABEL_17; /*0x4bfd08*/
          }
          v40 = a8; /*0x4bfaea*/
          v41 = a7; /*0x4bfaee*/
          while ( 1 ) /*0x4bfb06*/
          {
            v42 = Color::Lerp2((Color *)&a7, a5, a6, *v40); /*0x4bfb06*/
            LOWORD(a8) = *(_WORD *)v42; /*0x4bfb11*/
            v43 = v42[2] >> g_BitMask_Red; /*0x4bfb27*/
            LOWORD(v42) = (unsigned __int8)(BYTE1(a8) >> g_BitMask_Blue); /*0x4bfb3d*/
            v70[v38] = ((unsigned __int8)((unsigned __int8)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfb63*/
                     | ((_DWORD)v42 << g_BitMask_Green)
                     | (v43 << g_BitShift_Blue);
            v44 = *v41 + *v40; /*0x4bfb69*/
            *v40 = v44; /*0x4bfb71*/
            if ( v46 && *v41 < 0.0 ) /*0x4bfb87*/
            {
              *v40 = 0.0; /*0x4bfb8b*/
            }
            else
            {
              if ( v44 <= 1.0 || *v41 <= 0.0 ) /*0x4bfbad*/
                goto LABEL_45; /*0x4bfbad*/
              *v40 = 1.0; /*0x4bfbaf*/
            }
            *v41 = -*v41; /*0x4bfbb9*/
LABEL_45:
            if ( v39 > 0 ) /*0x4bfbbd*/
            {
              v39 -= v57; /*0x4bfbc9*/
              v70 = (_WORD *)((char *)v70 + v73); /*0x4bfbcb*/
            }
            v39 += v75; /*0x4bfbd7*/
            if ( ++v38 > v58 ) /*0x4bfbdc*/
            {
              (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bfbeb*/
              return 1; /*0x4bfbf7*/
            }
          }
        }
        v47 = 2 * v35 - v37; /*0x4bfbfa*/
        if ( v37 < 0 ) /*0x4bfbfe*/
          goto LABEL_17; /*0x4bfbfe*/
        v48 = a8; /*0x4bfc04*/
        v49 = a7; /*0x4bfc08*/
        v50 = 0; /*0x4bfc0c*/
        v59 = v37 + 1; /*0x4bfc0f*/
        while ( 1 ) /*0x4bfc27*/
        {
          v51 = Color::Lerp2((Color *)&a7, a5, a6, *v48); /*0x4bfc27*/
          LOWORD(a8) = *(_WORD *)v51; /*0x4bfc32*/
          v52 = v51[2] >> g_BitMask_Red; /*0x4bfc48*/
          LOWORD(v51) = (unsigned __int8)(BYTE1(a8) >> g_BitMask_Blue); /*0x4bfc5e*/
          v70[v50] = ((unsigned __int8)((unsigned __int8)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfc84*/
                   | ((_DWORD)v51 << g_BitMask_Green)
                   | (v52 << g_BitShift_Blue);
          v53 = *v49 + *v48; /*0x4bfc8a*/
          *v48 = v53; /*0x4bfc92*/
          if ( v55 && *v49 < 0.0 ) /*0x4bfca8*/
          {
            *v48 = 0.0; /*0x4bfcac*/
          }
          else
          {
            if ( v53 <= 1.0 || *v49 <= 0.0 ) /*0x4bfcce*/
              goto LABEL_58; /*0x4bfcce*/
            *v48 = 1.0; /*0x4bfcd0*/
          }
          *v49 = -*v49; /*0x4bfcda*/
LABEL_58:
          if ( v47 > 0 ) /*0x4bfcde*/
          {
            ++v50; /*0x4bfce4*/
            v47 -= v75; /*0x4bfce7*/
          }
          v47 += v57; /*0x4bfcf1*/
          v33 = v59 == 1; /*0x4bfcf9*/
          v70 = (_WORD *)((char *)v70 + v73); /*0x4bfcfa*/
          --v59; /*0x4bfcfe*/
          if ( v33 ) /*0x4bfd02*/
            goto LABEL_61; /*0x4bfd02*/
        }
      }
    }
  }
  return 0; /*0x4bf94b*/
}



// ==== 0x004BFD30  DSurface::DrawLineZBuf  this=DSurface  sig=csp ====
int __fastcall DSurface::DrawLineZBuf(
        DSurface *this,
        int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned __int16 a6,
        int a7,
        int a8,
        char a9)
{
  double v9; // st7
  int (__stdcall **DSurface_field_0x0)(_DWORD *); // eax
  int *v11; // eax
  int *v12; // ecx
  int v13; // esi
  int v14; // edi
  int result; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // ebx
  int v20; // edx
  int v21; // ebp
  int v22; // esi
  int v23; // edi
  int v24; // esi
  int v25; // ebp
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // ebp
  int v35; // esi
  int v36; // ebx
  int Stream_field_04; // edi
  _WORD *SamplePosition; // esi
  int v39; // edi
  _WORD *v40; // edi
  int v41; // ecx
  int v42; // ebx
  int v43; // ebp
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // ebp
  int v48; // ebx
  Stream *v49; // edx
  _DWORD *v50; // ebp
  int v51; // eax
  int v52; // edx
  int v53; // eax
  _WORD *v54; // eax
  _WORD *v55; // eax
  int v56; // ebx
  Stream *v57; // edx
  _DWORD *v58; // ebp
  int v59; // eax
  int v60; // edx
  _WORD *v61; // eax
  _WORD *v62; // eax
  int v63; // eax
  int v64; // ebp
  _DWORD *v65; // edx
  Stream *v66; // ecx
  int v67; // ebx
  int v68; // eax
  int v69; // eax
  _WORD *v70; // eax
  _WORD *v71; // eax
  double v72; // [esp+4h] [ebp-7Ch]
  double v73; // [esp+4h] [ebp-7Ch]
  double v74; // [esp+4h] [ebp-7Ch]
  double v75; // [esp+4h] [ebp-7Ch]
  int v76; // [esp+1Ch] [ebp-64h]
  int v77; // [esp+20h] [ebp-60h]
  int v78; // [esp+20h] [ebp-60h]
  int v79; // [esp+20h] [ebp-60h]
  int v80; // [esp+24h] [ebp-5Ch]
  int v81; // [esp+28h] [ebp-58h]
  int v82; // [esp+2Ch] [ebp-54h]
  int v83; // [esp+30h] [ebp-50h]
  int v84; // [esp+30h] [ebp-50h]
  int v85; // [esp+34h] [ebp-4Ch]
  int v86; // [esp+38h] [ebp-48h]
  double v87; // [esp+3Ch] [ebp-44h] BYREF
  _DWORD v88[5]; // [esp+4Ch] [ebp-34h] BYREF
  int v89; // [esp+60h] [ebp-20h] BYREF
  int v90; // [esp+64h] [ebp-1Ch]
  int v91[2]; // [esp+68h] [ebp-18h] BYREF
  int v92; // [esp+70h] [ebp-10h] BYREF
  int v93; // [esp+74h] [ebp-Ch]
  int v94; // [esp+78h] [ebp-8h]
  int v95; // [esp+7Ch] [ebp-4h]
  int v96; // [esp+84h] [ebp+4h]
  _DWORD *v97; // [esp+88h] [ebp+8h]
  int v98; // [esp+88h] [ebp+8h]
  int v99; // [esp+8Ch] [ebp+Ch]
  _DWORD *v100; // [esp+8Ch] [ebp+Ch]
  _DWORD *v101; // [esp+8Ch] [ebp+Ch]
  int v102; // [esp+94h] [ebp+14h]
  int v103; // [esp+94h] [ebp+14h]
  int v104; // [esp+94h] [ebp+14h]
  int v105; // [esp+94h] [ebp+14h]
  int v106; // [esp+98h] [ebp+18h]
  int v107; // [esp+98h] [ebp+18h]
  int v108; // [esp+98h] [ebp+18h]
  int v109; // [esp+98h] [ebp+18h]
  int v110; // [esp+98h] [ebp+18h]

  DSurface_field_0x0 = (int (__stdcall **)(_DWORD *))this->DSurface_field_0x0; /*0x4bfd33*/
  v88[0] = this; /*0x4bfd3e*/
  v11 = (int *)DSurface_field_0x0[30](&v88[1]); /*0x4bfd42*/
  v12 = ClipRectIntersection(&v87, (int *)a3, v11, 0, 0); /*0x4bfd57*/
  v13 = *v12; /*0x4bfd59*/
  v92 = *v12; /*0x4bfd5b*/
  v14 = v12[1]; /*0x4bfd5f*/
  v93 = v14; /*0x4bfd62*/
  result = v12[2]; /*0x4bfd66*/
  v94 = result; /*0x4bfd69*/
  v16 = v12[3]; /*0x4bfd6d*/
  v95 = v16; /*0x4bfd72*/
  if ( !result && !v16 ) /*0x4bfd7a*/
    goto LABEL_121; /*0x4bfd7a*/
  v17 = v13 + *a4; /*0x4bfd92*/
  v18 = v13 + *a5; /*0x4bfd94*/
  v19 = a7; /*0x4bfd99*/
  v20 = v14 + a4[1]; /*0x4bfda0*/
  v21 = v17; /*0x4bfda2*/
  v22 = v14 + a5[1]; /*0x4bfda4*/
  v23 = a8; /*0x4bfda6*/
  v89 = v17; /*0x4bfdaf*/
  v90 = v20; /*0x4bfdb3*/
  v91[0] = v18; /*0x4bfdb7*/
  v91[1] = v22; /*0x4bfdbb*/
  if ( v17 > v18 ) /*0x4bfdbf*/
  {
    v21 = v18; /*0x4bfdc1*/
    v19 = a8; /*0x4bfdc3*/
    v23 = a7; /*0x4bfdc5*/
    v89 = v18; /*0x4bfdcc*/
    v90 = v22; /*0x4bfdd0*/
    v91[0] = v17; /*0x4bfdd4*/
    v91[1] = v20; /*0x4bfdd8*/
  }
  v88[1] = v91[0]; /*0x4bfde8*/
  v24 = v21; /*0x4bfded*/
  v25 = v90; /*0x4bfdef*/
  v88[2] = v91[1]; /*0x4bfdfb*/
  result = ClipLine(&v89, v91, &v92); /*0x4bfdff*/
  if ( !(_BYTE)result ) /*0x4bfe06*/
    goto LABEL_121; /*0x4bfe06*/
  v97 = (_DWORD *)v23; /*0x4bfe1a*/
  v106 = v19; /*0x4bfe1e*/
  if ( v91[0] != v88[1] || v91[1] != v88[2] ) /*0x4bfe2b*/
  {
    LODWORD(v87) = v24 - v91[0]; /*0x4bfe3a*/
    __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bfe40*/
    HIDWORD(v87) = v25 - v91[1]; /*0x4bfe44*/
    __asm /*0x4bfe48*/
    {
      fild [esp+7Ch+var_40]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+7Ch+var_80+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v72); /*0x4bfe5d*/
    LOWORD(v26) = Math::RoundToInt(v9); /*0x4bfe62*/
    v102 = v26; /*0x4bfe6d*/
    LODWORD(v87) = v24 - v88[1]; /*0x4bfe7c*/
    __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bfe82*/
    HIDWORD(v87) = v25 - v88[2]; /*0x4bfe86*/
    __asm /*0x4bfe8a*/
    {
      fild [esp+7Ch+var_40]
      fild [esp+7Ch+arg_10]
      fstp [esp+7Ch+var_48+4]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+7Ch+var_80+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v73); /*0x4bfeaa*/
    LOWORD(v27) = Math::RoundToInt(v9); /*0x4bfeb2*/
    v103 = v27; /*0x4bfeb7*/
    __asm { fild [esp+74h+arg_10] } /*0x4bfec0*/
    v104 = v19 - v23; /*0x4bfec9*/
    __asm /*0x4bfed0*/
    {
      fdivr [esp+74h+var_48+4]
      fild [esp+74h+arg_10]
      fmulp st(1), st
    }
    LOWORD(v28) = Math::RoundToInt(v9); /*0x4bfedd*/
    v29 = abs32(v28); /*0x4bfee5*/
    if ( v19 >= v23 ) /*0x4bfee9*/
      v97 = (_DWORD *)(v19 - v29); /*0x4bfef7*/
    else
      v97 = (_DWORD *)(v19 + v29); /*0x4bfeed*/
  }
  if ( v89 == v24 && v90 == v25 ) /*0x4bff09*/
    goto LABEL_16; /*0x4bff09*/
  LODWORD(v87) = v89 - v88[1]; /*0x4bff18*/
  __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bff20*/
  HIDWORD(v87) = v90 - v88[2]; /*0x4bff26*/
  __asm /*0x4bff2a*/
  {
    fild [esp+7Ch+var_40]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+7Ch+var_80+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v74); /*0x4bff3f*/
  LOWORD(v30) = Math::RoundToInt(v9); /*0x4bff44*/
  v107 = v30; /*0x4bff49*/
  LODWORD(v87) = v24 - v88[1]; /*0x4bff56*/
  __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bff5e*/
  HIDWORD(v87) = v25 - v88[2]; /*0x4bff64*/
  __asm /*0x4bff68*/
  {
    fild [esp+7Ch+var_40]
    fild [esp+7Ch+arg_14]
    fstp qword ptr [esp+7Ch+var_34+4]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+7Ch+var_80+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v75); /*0x4bff88*/
  LOWORD(v31) = Math::RoundToInt(v9); /*0x4bff90*/
  v108 = v31; /*0x4bff95*/
  __asm { fild [esp+74h+arg_14] } /*0x4bff9e*/
  v109 = v19 - v23; /*0x4bffa7*/
  __asm /*0x4bffae*/
  {
    fdivr qword ptr [esp+74h+var_34+4]
    fild [esp+74h+arg_14]
    fmulp st(1), st
  }
  LOWORD(v32) = Math::RoundToInt(v9); /*0x4bffbb*/
  v33 = abs32(v32); /*0x4bffc3*/
  if ( v23 <= v19 ) /*0x4bffc7*/
  {
    v106 = v23 + v33; /*0x4bffd1*/
LABEL_16:
    v34 = v106; /*0x4bffd8*/
    goto LABEL_17; /*0x4bffd8*/
  }
  v34 = v23 - v33; /*0x4bffcb*/
LABEL_17:
  v35 = v88[0]; /*0x4bffdf*/
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v88[0] + 112))(v88[0]); /*0x4bffe7*/
  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v35 + 92))(v35, v89, v90); /*0x4bfff8*/
  v36 = result; /*0x4c0001*/
  v105 = result; /*0x4c0005*/
  if ( !g_ZBufferDescriptor ) /*0x4c000c*/
    goto LABEL_121; /*0x4c000c*/
  Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4c0016*/
  v88[2] = v90; /*0x4c001d*/
  SamplePosition = (_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v89, v90 - Stream_field_04); /*0x4c0034*/
  v39 = *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4); /*0x4c003a*/
  v88[2] = v90; /*0x4c003d*/
  v40 = (_WORD *)StreamClass::ReadAndSeek(*(int **)&stru_87E790.__pad_D8[60], v89, v90 - v39); /*0x4c004e*/
  v82 = -1; /*0x4c0055*/
  LOWORD(v41) = LOWORD(g_ZBufferDescriptor->Stream_field_04) + LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4c0061*/
  result = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4c0065*/
  v96 = result; /*0x4c0068*/
  v110 = v34 + v41 - v90 - v93; /*0x4c0076*/
  if ( !v36 ) /*0x4c007d*/
  {
LABEL_121:
    LOBYTE(result) = 0; /*0x4c073b*/
    return result; /*0x4c073e*/
  }
  LOBYTE(v88[1]) = (unsigned __int8)(a6 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4c00a5*/
  BYTE1(v88[1]) = (unsigned __int8)(a6 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4c00c6*/
  v42 = v91[1] - v90; /*0x4c00ce*/
  BYTE2(v88[1]) = (unsigned __int8)(a6 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4c00d6*/
  v85 = LOBYTE(v88[1]); /*0x4c00e3*/
  v86 = BYTE1(v88[1]); /*0x4c00f0*/
  LODWORD(v87) = BYTE2(v88[1]); /*0x4c00fd*/
  v99 = v91[0] - v89; /*0x4c010b*/
  v43 = (int)v97 - v34; /*0x4c011a*/
  v44 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v88[0] + 116))(v88[0]); /*0x4c011c*/
  v81 = v44; /*0x4c0121*/
  if ( v42 < 0 ) /*0x4c0125*/
  {
    v81 = -v44; /*0x4c0129*/
    v96 = -v96; /*0x4c0133*/
    v82 = 1; /*0x4c0137*/
  }
  v80 = 1; /*0x4c0141*/
  v45 = abs32(v42); /*0x4c014e*/
  if ( v43 < 0 ) /*0x4c0152*/
    v80 = -1; /*0x4c0154*/
  v98 = 2 * v45; /*0x4c0164*/
  v46 = abs32(v43); /*0x4c0168*/
  v47 = 2 * v99; /*0x4c0173*/
  v83 = 2 * v99; /*0x4c0179*/
  v76 = 2 * v46; /*0x4c017d*/
  if ( v46 <= v99 || v46 <= v45 ) /*0x4c0189*/
  {
    if ( v99 <= v45 ) /*0x4c0375*/
    {
      v64 = v47 - v45; /*0x4c0559*/
      v88[1] = 2 * v46 - v45; /*0x4c055f*/
      if ( v45 > 0 ) /*0x4c0563*/
      {
        v65 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0569*/
        v79 = v45; /*0x4c056f*/
        v66 = g_ZBufferDescriptor; /*0x4c0573*/
        v101 = 0; /*0x4c0579*/
        do /*0x4c0720*/
        {
          v67 = v110; /*0x4c0584*/
          v68 = (unsigned __int16)*v40; /*0x4c0590*/
          if ( (unsigned __int16)v110 < *SamplePosition && *v40 ) /*0x4c058b*/
          {
            if ( v68 == 127 ) /*0x4c05a4*/
            {
              *(_WORD *)((char *)v101 + v105) = a6; /*0x4c0627*/
            }
            else
            {
              v67 = v110; /*0x4c05f2*/
              *(_WORD *)((char *)v101 + v105) = ((LODWORD(v87) * v68) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c060b*/
                                              | ((v86 * v68) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                                              | ((v85 * v68) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
            }
            if ( a9 ) /*0x4c0634*/
              *SamplePosition = v67; /*0x4c0636*/
            v66 = g_ZBufferDescriptor; /*0x4c0639*/
            v65 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c063f*/
          }
          if ( v64 > 0 ) /*0x4c0647*/
          {
            ++SamplePosition; /*0x4c0650*/
            v101 = (_DWORD *)((char *)v101 + 2); /*0x4c0656*/
            if ( (unsigned int)SamplePosition >= v66[1].Stream_field_08 ) /*0x4c0662*/
              SamplePosition = (_WORD *)((char *)SamplePosition - v66[1].Stream_field_0C); /*0x4c0664*/
            if ( (unsigned int)++v40 >= v65[7] ) /*0x4c066f*/
              v40 = (_WORD *)((char *)v40 - v65[8]); /*0x4c0671*/
            v64 -= v98; /*0x4c0674*/
          }
          v69 = v88[1]; /*0x4c0678*/
          if ( v88[1] > 0 ) /*0x4c067e*/
          {
            v110 = v80 + v67; /*0x4c0684*/
            v69 = v88[1] - v98; /*0x4c068f*/
          }
          v64 += v83; /*0x4c0695*/
          v88[1] = v76 + v69; /*0x4c06a4*/
          v105 += v81; /*0x4c06ae*/
          SamplePosition += v96; /*0x4c06bc*/
          if ( v96 <= 0 ) /*0x4c06c0*/
          {
            v70 = SamplePosition; /*0x4c06cf*/
            if ( (unsigned int)SamplePosition < v66[1].Stream_field_04 ) /*0x4c06d3*/
              v70 = (_WORD *)((char *)SamplePosition + v66[1].Stream_field_0C); /*0x4c06d8*/
            SamplePosition = v70; /*0x4c06da*/
          }
          else if ( (unsigned int)SamplePosition >= v66[1].Stream_field_08 ) /*0x4c06c5*/
          {
            SamplePosition = (_WORD *)((char *)SamplePosition - v66[1].Stream_field_0C); /*0x4c06c7*/
          }
          v110 += v82; /*0x4c06e9*/
          v40 += v96; /*0x4c06f7*/
          if ( v96 <= 0 ) /*0x4c06fb*/
          {
            v71 = v40; /*0x4c070a*/
            if ( (unsigned int)v40 < v65[6] ) /*0x4c070e*/
              v71 = (_WORD *)((char *)v40 + v65[8]); /*0x4c0713*/
            v40 = v71; /*0x4c0715*/
          }
          else if ( (unsigned int)v40 >= v65[7] ) /*0x4c0700*/
          {
            v40 = (_WORD *)((char *)v40 - v65[8]); /*0x4c0702*/
          }
          --v79; /*0x4c071c*/
        }
        while ( v79 ); /*0x4c0720*/
      }
    }
    else
    {
      v56 = v98 - v99; /*0x4c038a*/
      v78 = 0; /*0x4c038e*/
      v84 = v76 - v99; /*0x4c0398*/
      if ( v99 > 0 ) /*0x4c039c*/
      {
        v57 = g_ZBufferDescriptor; /*0x4c03a2*/
        v58 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c03a8*/
        do /*0x4c053c*/
        {
          v59 = (unsigned __int16)*v40; /*0x4c03bb*/
          if ( (unsigned __int16)v110 < *SamplePosition && *v40 ) /*0x4c03b6*/
          {
            if ( v59 == 127 ) /*0x4c03cf*/
              LOWORD(v60) = a6; /*0x4c0423*/
            else
              v60 = ((LODWORD(v87) * v59) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c041f*/
                  | ((v86 * v59) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                  | ((v85 * v59) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
            *(_WORD *)(v105 + 2 * v78) = v60; /*0x4c0436*/
            if ( a9 ) /*0x4c0443*/
              *SamplePosition = v110; /*0x4c044d*/
            v57 = g_ZBufferDescriptor; /*0x4c0450*/
            v58 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0456*/
          }
          if ( v56 > 0 ) /*0x4c045e*/
          {
            v105 += v81; /*0x4c046d*/
            v56 -= 2 * v99; /*0x4c047e*/
            SamplePosition += v96; /*0x4c0487*/
            if ( v96 <= 0 ) /*0x4c048b*/
            {
              v61 = SamplePosition; /*0x4c049a*/
              if ( (unsigned int)SamplePosition < v57[1].Stream_field_04 ) /*0x4c049c*/
                v61 = (_WORD *)((char *)SamplePosition + v57[1].Stream_field_0C); /*0x4c04a1*/
              SamplePosition = v61; /*0x4c04a3*/
            }
            else if ( (unsigned int)SamplePosition >= v57[1].Stream_field_08 ) /*0x4c0490*/
            {
              SamplePosition = (_WORD *)((char *)SamplePosition - v57[1].Stream_field_0C); /*0x4c0492*/
            }
            v40 += v96; /*0x4c04a9*/
            v110 += v82; /*0x4c04ab*/
            if ( v96 <= 0 ) /*0x4c04b8*/
            {
              v62 = v40; /*0x4c04c7*/
              if ( (unsigned int)v40 < v58[6] ) /*0x4c04cb*/
                v62 = (_WORD *)((char *)v40 + v58[8]); /*0x4c04d0*/
              v40 = v62; /*0x4c04d2*/
            }
            else if ( (unsigned int)v40 >= v58[7] ) /*0x4c04bd*/
            {
              v40 = (_WORD *)((char *)v40 - v58[8]); /*0x4c04bf*/
            }
          }
          v63 = v84; /*0x4c04d4*/
          if ( v84 > 0 ) /*0x4c04da*/
          {
            v110 += v80; /*0x4c04e9*/
            v63 = v84 - 2 * v99; /*0x4c04fe*/
          }
          ++SamplePosition; /*0x4c0504*/
          v56 += v98; /*0x4c0507*/
          v84 = v76 + v63; /*0x4c050f*/
          if ( (unsigned int)SamplePosition >= v57[1].Stream_field_08 ) /*0x4c0518*/
            SamplePosition = (_WORD *)((char *)SamplePosition - v57[1].Stream_field_0C); /*0x4c051a*/
          if ( (unsigned int)++v40 >= v58[7] ) /*0x4c0525*/
            v40 = (_WORD *)((char *)v40 - v58[8]); /*0x4c0527*/
          ++v78; /*0x4c0538*/
        }
        while ( v78 < v99 ); /*0x4c053c*/
      }
    }
  }
  else
  {
    v48 = v98 - v46; /*0x4c0195*/
    v77 = v47 - v46; /*0x4c019b*/
    if ( v46 > 0 ) /*0x4c019f*/
    {
      v49 = g_ZBufferDescriptor; /*0x4c01a5*/
      v50 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c01ab*/
      v100 = 0; /*0x4c01b1*/
      v88[1] = v46; /*0x4c01bc*/
      do /*0x4c0358*/
      {
        v51 = (unsigned __int16)*v40; /*0x4c01cd*/
        if ( (unsigned __int16)v110 < *SamplePosition && *v40 ) /*0x4c01c8*/
        {
          if ( v51 == 127 ) /*0x4c01e1*/
            LOWORD(v52) = a6; /*0x4c0235*/
          else
            v52 = ((LODWORD(v87) * v51) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c0231*/
                | ((v86 * v51) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                | ((v85 * v51) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
          *(_WORD *)((char *)v100 + v105) = v52; /*0x4c024b*/
          if ( a9 ) /*0x4c0258*/
            *SamplePosition = v110; /*0x4c0262*/
          v49 = g_ZBufferDescriptor; /*0x4c0265*/
          v50 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c026b*/
        }
        if ( v48 > 0 ) /*0x4c0273*/
        {
          v48 -= v76; /*0x4c0286*/
          v53 = v96; /*0x4c0288*/
          v105 += v81; /*0x4c028c*/
          SamplePosition += v96; /*0x4c0296*/
          if ( v96 <= 0 ) /*0x4c029a*/
          {
            v54 = SamplePosition; /*0x4c02a9*/
            if ( (unsigned int)SamplePosition < v49[1].Stream_field_04 ) /*0x4c02ab*/
              v54 = (_WORD *)((char *)SamplePosition + v49[1].Stream_field_0C); /*0x4c02b0*/
            SamplePosition = v54; /*0x4c02b2*/
            v53 = v96; /*0x4c02b4*/
          }
          else if ( (unsigned int)SamplePosition >= v49[1].Stream_field_08 ) /*0x4c029f*/
          {
            SamplePosition = (_WORD *)((char *)SamplePosition - v49[1].Stream_field_0C); /*0x4c02a1*/
          }
          v40 += v96; /*0x4c02b8*/
          if ( v53 <= 0 ) /*0x4c02bc*/
          {
            v55 = v40; /*0x4c02cb*/
            if ( (unsigned int)v40 < v50[6] ) /*0x4c02cf*/
              v55 = (_WORD *)((char *)v40 + v50[8]); /*0x4c02d4*/
            v40 = v55; /*0x4c02d6*/
          }
          else if ( (unsigned int)v40 >= v50[7] ) /*0x4c02c1*/
          {
            v40 = (_WORD *)((char *)v40 - v50[8]); /*0x4c02c3*/
          }
          v110 += v82; /*0x4c02e5*/
        }
        if ( v77 > 0 ) /*0x4c02f2*/
        {
          ++SamplePosition; /*0x4c02fb*/
          v100 = (_DWORD *)((char *)v100 + 2); /*0x4c0301*/
          if ( (unsigned int)SamplePosition >= v49[1].Stream_field_08 ) /*0x4c030d*/
            SamplePosition = (_WORD *)((char *)SamplePosition - v49[1].Stream_field_0C); /*0x4c030f*/
          if ( (unsigned int)++v40 >= v50[7] ) /*0x4c031a*/
            v40 = (_WORD *)((char *)v40 - v50[8]); /*0x4c031c*/
          v77 -= v76; /*0x4c0323*/
        }
        v110 += v80; /*0x4c0338*/
        v77 += v83; /*0x4c0349*/
        v48 += v98; /*0x4c0351*/
        --v88[1]; /*0x4c0354*/
      }
      while ( v88[1] ); /*0x4c0358*/
    }
  }
  result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v88[0] + 96))(v88[0]); /*0x4c0364*/
  LOBYTE(result) = 1; /*0x4c036a*/
  return result; /*0x4c0367*/
}



// ==== 0x004B0410  DriveLocomotionClass::ComputeAudio3DRotation  this=DriveLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::ComputeAudio3DRotation(DriveLocomotionClass *this, float *a2, _DWORD *a3)
{
  int v3; // edi
  double v4; // st7
  int PreviousRamp; // edx
  int v6; // eax
  FootClass *Owner; // edx
  float v9[12]; // [esp+Ch] [ebp-30h] BYREF

  v3 = this->SlopeTimer[2]; /*0x4b0419*/
  if ( v3 ) /*0x4b0422*/
  {
    PreviousRamp = this->PreviousRamp; /*0x4b042c*/
    v6 = this->SlopeTimer[1]; /*0x4b042f*/
    if ( PreviousRamp != -1 ) /*0x4b0435*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - PreviousRamp >= v6 ) /*0x4b0441*/
        v6 = 0; /*0x4b0447*/
      else
        v6 -= *(_DWORD *)&stru_A8EB00.?[416] - PreviousRamp; /*0x4b0443*/
    }
    v4 = (double)(v3 - v6) / (double)this->SlopeTimer[2]; /*0x4b0453*/
  }
  else
  {
    v4 = 1.0; /*0x4b0424*/
  }
  if ( v4 != 1.0 || (Owner = this->?, fabs(*(float *)&Owner->?) >= 0.005) || fabs(*(float *)&Owner->?) >= 0.005 ) /*0x4b0493*/
  {
    if ( a3 ) /*0x4b0497*/
      *a3 = -1; /*0x4b0499*/
  }
  qmemcpy(a2, Audio3D::ComputeRotation((IUnknown *)this, v9, a3), 0x30u); /*0x4b04b8*/
  return a2; /*0x4b04ba*/
}



// ==== 0x004B04D0  DriveLocomotionClass::DispatchVirtualCall  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall(DriveLocomotionClass *this)
{
  int v1; // edi
  int v2; // eax

  v1 = *(_DWORD *)this->LocomotionClass; /*0x4b04d9*/
  v2 = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 111))(this->?); /*0x4b04dd*/
  return (*(int (__stdcall **)(DriveLocomotionClass *, _DWORD))(v1 + 124))(this, *(unsigned __int8 *)(v2 + 284)); /*0x4b04f0*/
}



// ==== 0x004B0500  DriveLocomotionClass::ProcessJumpjetMotion  this=DriveLocomotionClass  sig=csp ====
char __stdcall ProcessJumpjetMotion(DriveLocomotionClass *this)
{
  DriveLocomotionClass *v1; // esi
  char *v2; // edi
  int v3; // eax
  int v4; // ecx
  FootClass *v5; // ecx
  AbstractClass *v6; // ecx
  int *v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  AbstractClass *movementDestination; // ecx
  FootClass *v12; // ecx
  AbstractClass *v13; // ebp
  _WORD *v14; // eax
  FootClass *v15; // ecx
  FootClass *Owner; // ecx
  FootClass *v18; // ecx
  AnimClass *v19; // eax
  int *location; // ecx
  FootClass *v21; // ecx
  FootClass *v22; // eax
  FootClass *v23; // eax
  AbstractClass *v24; // ecx
  _DWORD *v25; // eax
  FootClass *v26; // ecx
  int v27; // ecx
  FootClass *v28; // eax
  char v29; // [esp-4h] [ebp-24h]
  int v30; // [esp+10h] [ebp-10h] BYREF
  int v31; // [esp+14h] [ebp-Ch]
  int v32; // [esp+18h] [ebp-8h]

  v1 = this; /*0x4b0506*/
  v2 = (char *)this - 4; /*0x4b0518*/
  v3 = *(unsigned __int8 *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 111))(this->?) + 284); /*0x4b0521*/
  v4 = *((_DWORD *)v2 + 7); /*0x4b0523*/
  if ( v3 != v4 ) /*0x4b0528*/
  {
    *((_DWORD *)v2 + 8) = v4; /*0x4b052a*/
    *((_DWORD *)v2 + 7) = v3; /*0x4b0533*/
    Timer::Start((Timer *)&v30, 3); /*0x4b0536*/
    *((_DWORD *)v2 + 9) = v30; /*0x4b0547*/
    *((_DWORD *)v2 + 10) = v31; /*0x4b054d*/
    *((_DWORD *)v2 + 11) = v32; /*0x4b0554*/
    *((_DWORD *)v2 + 12) = 3; /*0x4b0557*/
  }
  if ( v1->MovementSpeed[1] == -1 || !HIBYTE(v1->TrackIndex) ) /*0x4b056a*/
  {
    movementDestination = v1->?->movementDestination; /*0x4b066f*/
    if ( movementDestination /*0x4b06ad*/
      && (*((int (__thiscall **)(AbstractClass *))movementDestination->vtable0 + 11))(movementDestination) == 11
      && (v12 = v1->?,
          v13 = v12->movementDestination + 1,
          v14 = (_WORD *)(*((int (__thiscall **)(FootClass *, DriveLocomotionClass **))v12->TechnoClass + 110))(
                           v12,
                           &this),
          *v14 == LOWORD(v13->vtable0))
      && v14[1] == HIWORD(v13->vtable0) )
    {
      v15 = (FootClass *)*((_DWORD *)v2 + 3); /*0x4b06af*/
      if ( !*(_DWORD *)&v15->__pad_58C[12] ) /*0x4b06b2*/
        goto LABEL_27; /*0x4b06b8*/
    }
    else
    {
      Owner = v1->?; /*0x4b06d5*/
      if ( Owner->? != 5 /*0x4b0732*/
        || HIBYTE(v1->TrackIndex)
        || v1->SlopeTimer[3] == g_DDraw_ClipRect && *(_QWORD *)v1->Dest == qword_8A0794
        || Owner->?[0] != v1->SlopeTimer[3]
        || Owner->?[1] != v1->Dest[0]
        || Owner->?[2] != v1->Dest[1] )
      {
        if ( (unsigned __int8)TimerClass::Active((int)Owner->?) ) /*0x4b077b*/
        {
          BYTE2(v1->TrackIndex) = 1; /*0x4b0788*/
          goto LABEL_39; /*0x4b0788*/
        }
        if ( BYTE2(v1->TrackIndex) ) /*0x4b0896*/
        {
          BYTE2(v1->TrackIndex) = 0; /*0x4b089b*/
          (*((void (__thiscall **)(FootClass *, _DWORD))v1->?->TechnoClass + 99))(v1->?, 0); /*0x4b08a4*/
          v22 = v1->?; /*0x4b08aa*/
          if ( !v22->? || v22->? || v22->? ) /*0x4b08bd*/
            return 0; /*0x4b08ce*/
        }
        if ( (*((int (__thiscall **)(FootClass *))v1->?->TechnoClass + 97))(v1->?) == 5 /*0x4b08fd*/
          && !(*(unsigned __int8 (__stdcall **)(DriveLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1)
          || (*((int (__thiscall **)(FootClass *))v1->?->TechnoClass + 97))(v1->?) == 16 )
        {
          goto LABEL_39; /*0x4b08fd*/
        }
        if ( !(*(unsigned __int8 (__stdcall **)(DriveLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1) ) /*0x4b0906*/
        {
          v23 = v1->?; /*0x4b0911*/
          if ( v23->pathDirections[0] == -1 ) /*0x4b091b*/
          {
            if ( v23->? ) /*0x4b0921*/
            {
              if ( *((_DWORD *)v2 + 16) != g_DDraw_ClipRect || *(_QWORD *)(v2 + 68) != qword_8A0794 ) /*0x4b0940*/
              {
                *((_DWORD *)v2 + 16) = g_DDraw_ClipRect; /*0x4b094f*/
                *(_QWORD *)(v2 + 68) = qword_8A0794; /*0x4b0957*/
                v2[99] = 0; /*0x4b0963*/
              }
              v1->SpeedAccum = 0; /*0x4b0966*/
              v1->MovementSpeed[0] = 0; /*0x4b0969*/
            }
            else
            {
              v24 = v23->movementDestination; /*0x4b0971*/
              if ( v24 ) /*0x4b0979*/
              {
                v25 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, int *, FootClass *))v24->vtable0 + 19))( /*0x4b0987*/
                                  v24,
                                  &v30,
                                  v1->?);
                (*(void (__stdcall **)(DriveLocomotionClass *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v1->LocomotionClass /*0x4b09a3*/
                                                                                      + 68))(
                  v1,
                  *v25,
                  v25[1],
                  v25[2]);
              }
            }
            goto LABEL_39; /*0x4b096c*/
          }
        }
        v26 = v1->?; /*0x4b09ab*/
        if ( v26->? /*0x4b09e2*/
          && (*((int (__thiscall **)(FootClass *))v26->TechnoClass + 97))(v26) != 7
          && (*(unsigned __int8 (__stdcall **)(DriveLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1)
          && !(*((unsigned __int8 (__thiscall **)(FootClass *, int *))v1->?->TechnoClass + 179))(
                v1->?,
                &v1->SlopeTimer[3]) )
        {
          if ( *((_DWORD *)v2 + 16) != g_DDraw_ClipRect || *(_QWORD *)(v2 + 68) != qword_8A0794 ) /*0x4b0a03*/
          {
            *((_DWORD *)v2 + 16) = g_DDraw_ClipRect; /*0x4b0a12*/
            *(_QWORD *)(v2 + 68) = qword_8A0794; /*0x4b0a1a*/
            v2[99] = 0; /*0x4b0a26*/
          }
          v27 = *((_DWORD *)v2 + 3); /*0x4b0a29*/
          if ( *(_DWORD *)(v27 + 1432) ) /*0x4b0a2c*/
          {
            FootClass::ClearPathIndex((FootClass *)v27); /*0x4b0a44*/
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)v2 + 3) + 1156))( /*0x4b0a51*/
                   *((_DWORD *)v2 + 3),
                   0,
                   1) )
            {
              return 0; /*0x4b0a68*/
            }
          }
          else
          {
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v27 + 1152))(v27, 0, 1); /*0x4b0a39*/
          }
          goto LABEL_39; /*0x4b0a3f*/
        }
        LOBYTE(this) = 0; /*0x4b0a75*/
        JumpjetLocomotion::Update((int)&v1[-1].Piggybackee, &this, 1, 0); /*0x4b0a79*/
        if ( (_BYTE)this ) /*0x4b0a82*/
          return 0; /*0x4b0a8d*/
        if ( !v1->?->? ) /*0x4b0a93*/
          return 0; /*0x4b0aa4*/
        v29 = 0; /*0x4b0aa7*/
        goto LABEL_87; /*0x4b0aa7*/
      }
      v15 = (FootClass *)*((_DWORD *)v2 + 3); /*0x4b0734*/
      if ( !*(_DWORD *)&v15->__pad_58C[12] ) /*0x4b073d*/
      {
LABEL_27:
        (*((void (__thiscall **)(FootClass *, _DWORD, int))v15->TechnoClass + 288))(v15, 0, 1); /*0x4b06be*/
        return 0; /*0x4b06d2*/
      }
    }
    FootClass::ClearPathIndex(v15); /*0x4b0756*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)v2 + 3) + 1156))(*((_DWORD *)v2 + 3), 0, 1); /*0x4b0763*/
    return 0; /*0x4b0772*/
  }
  if ( JumpjetLocomotion::ProcessCollision((int)&v1[-1].Piggybackee, 0) || !v1->?->? ) /*0x4b0586*/
    return 0; /*0x4b058c*/
  if ( v1->MovementSpeed[1] == -1 /*0x4b05c4*/
    && ((*(unsigned __int8 (__stdcall **)(DriveLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1)
     || v1->?->pathDirections[0] != -1)
    && ((*((int (__thiscall **)(FootClass *))v1->?->TechnoClass + 11))(v1->?) != 1 || !BYTE1(v1->?[1].?)) )
  {
    v5 = v1->?; /*0x4b05d0*/
    LOBYTE(this) = 0; /*0x4b05d3*/
    if ( (*((int (__thiscall **)(FootClass *))v5->TechnoClass + 11))(v5) == 1 ) /*0x4b05df*/
    {
      v6 = v1->?->movementDestination; /*0x4b05e4*/
      if ( v6 ) /*0x4b05ec*/
      {
        if ( (*((int (__thiscall **)(AbstractClass *))v6->vtable0 + 11))(v6) == 15 ) /*0x4b05f6*/
        {
          v7 = (int *)(*((int (__thiscall **)(AbstractClass *, int *, FootClass *))v1->?->movementDestination->vtable0 /*0x4b060f*/
                       + 19))(
                        v1->?->movementDestination,
                        &v30,
                        v1->?);
          v8 = *v7; /*0x4b0611*/
          v9 = v7[1]; /*0x4b0615*/
          v10 = v7[2]; /*0x4b0618*/
          if ( v8 != v1->SlopeTimer[3] || v9 != v1->Dest[0] || v10 != v1->Dest[1] ) /*0x4b0625*/
            (*(void (__stdcall **)(DriveLocomotionClass *, int, int, int))(*(_DWORD *)v1->LocomotionClass + 68))( /*0x4b0638*/
              v1,
              v8,
              v9,
              v10);
        }
      }
    }
    JumpjetLocomotion::Update((int)&v1[-1].Piggybackee, &this, 1, 0); /*0x4b0647*/
    if ( (_BYTE)this || !v1->?->? ) /*0x4b0659*/
      return 0; /*0x4b065f*/
    v29 = 1; /*0x4b0665*/
LABEL_87:
    JumpjetLocomotion::ProcessCollision((int)&v1[-1].Piggybackee, v29); /*0x4b0aa8*/
    v28 = v1->?; /*0x4b0aaf*/
    if ( !v28 || !v28->? ) /*0x4b0ab6*/
      return 0; /*0x4b0ac5*/
  }
LABEL_39:
  if ( (*(unsigned __int8 (__stdcall **)(DriveLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 128))(v1) ) /*0x4b078f*/
  {
    if ( !(*(_DWORD *)&stru_A8EB00.?[416] % 10) ) /*0x4b07a8*/
    {
      v18 = v1->?; /*0x4b07ae*/
      if ( !v18->? && *(_DWORD *)((*((int (__thiscall **)(FootClass *))v18->TechnoClass + 111))(v18) + 236) == 2 ) /*0x4b07c8*/
      {
        if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 148) ) /*0x4b07cf*/
        {
          v19 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b07dc*/
          if ( v19 ) /*0x4b07e6*/
          {
            location = v1->?->?; /*0x4b07ec*/
            v30 = *location; /*0x4b07fd*/
            v31 = location[1]; /*0x4b0804*/
            v32 = location[2]; /*0x4b0810*/
            AnimClass::ctor( /*0x4b0823*/
              v19,
              *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 148),
              &v30,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
      }
    }
  }
  if ( v1->SlopeTimer[3] == g_DDraw_ClipRect /*0x4b0856*/
    && v1->Dest[0] == (_DWORD)qword_8A0794
    && *(_QWORD *)&v1->Dest[1] == __PAIR64__(g_DDraw_ClipRect, HIDWORD(qword_8A0794))
    && *(_QWORD *)v1->HeadToCoord == qword_8A0794 )
  {
    v21 = v1->?; /*0x4b085d*/
    if ( v21->pathDirections[0] == -1 && *(double *)v21->currentSpeed_percentage > 0.0 ) /*0x4b087a*/
      (*((void (__thiscall **)(FootClass *, _DWORD, _DWORD))v21->TechnoClass + 337))(v21, 0, 0); /*0x4b0880*/
  }
  return (*(char (__stdcall **)(DriveLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1); /*0x4b06cb*/
}



// ==== 0x004B0AD0  JumpjetLocomotion::MoveTo  this=IUnknown  sig=csp ====
char __thiscall JumpjetLocomotion::MoveTo(int this, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  int *v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v18[2]; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+18h] [ebp-Ch] BYREF
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]

  v3 = a2; /*0x4b0ad0*/
  if ( *a2 != g_DDraw_ClipRect || a2[1] != (_DWORD)qword_8A0794 || (v5 = a2[2], v5 != HIDWORD(qword_8A0794)) ) /*0x4b0afe*/
  {
    LOBYTE(v5) = *(_BYTE *)(this + 96); /*0x4b0b04*/
    v6 = a3; /*0x4b0b07*/
    if ( !(_BYTE)v5 ) /*0x4b0b0d*/
    {
      v5 = *(_DWORD *)(this + 88); /*0x4b0b13*/
      if ( v5 != -1 ) /*0x4b0b19*/
      {
        v5 = byte_7E7B28[12 * v5]; /*0x4b0b22*/
        if ( v5 ) /*0x4b0b2c*/
        {
          v7 = 4 * v5; /*0x4b0b32*/
          v8 = dword_7E7A28[v7]; /*0x4b0b35*/
          v5 = dword_7E7A34[v7]; /*0x4b0b3b*/
          if ( v5 > -1 ) /*0x4b0b44*/
          {
            v9 = (int *)(v8 + 12 * v5); /*0x4b0b4d*/
            a3 = v9[2]; /*0x4b0b53*/
            if ( *(_DWORD *)(this + 92) < v5 ) /*0x4b0b5c*/
            {
              v10 = v9[1]; /*0x4b0b64*/
              v18[0] = *v9; /*0x4b0b67*/
              v18[1] = v10; /*0x4b0b6f*/
              v5 = (int)JumpjetLocomotion::TransformCoords((JumpjetLocomotion *)this, &v19, v18, &a3); /*0x4b0b80*/
              v11 = *(_DWORD *)v5; /*0x4b0b85*/
              v12 = *(_DWORD *)(v5 + 4); /*0x4b0b89*/
              if ( !v6 ) /*0x4b0b8c*/
              {
                v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 464))(*(_DWORD *)(this + 12)); /*0x4b0b93*/
                v14 = *(_DWORD *)(this + 12); /*0x4b0b99*/
                v19 = v11; /*0x4b0b9c*/
                v20 = v12; /*0x4b0ba0*/
                v21 = v13; /*0x4b0ba4*/
                (*(void (__thiscall **)(int, int *))(*(_DWORD *)v14 + 244))(v14, &v19); /*0x4b0baf*/
                LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 12) + 244))( /*0x4b0bbf*/
                               *(_DWORD *)(this + 12),
                               a2);
                return v5; /*0x4b0bcc*/
              }
              if ( v6 == 1 || v6 == 3 ) /*0x4b0bd7*/
              {
                v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 464))(*(_DWORD *)(this + 12)); /*0x4b0bde*/
                v16 = *(_DWORD *)(this + 12); /*0x4b0be4*/
                v21 = v15; /*0x4b0be7*/
                v19 = v11; /*0x4b0beb*/
                v20 = v12; /*0x4b0bef*/
                LOBYTE(v5) = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v16 + 240))(v16, &v19); /*0x4b0bfa*/
              }
              v3 = a2; /*0x4b0c00*/
            }
          }
        }
      }
    }
    if ( v6 ) /*0x4b0c06*/
    {
      if ( v6 == 1 || v6 == 3 ) /*0x4b0c26*/
        LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 12) + 240))( /*0x4b0c2e*/
                       *(_DWORD *)(this + 12),
                       v3);
    }
    else
    {
      LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 12) + 244))( /*0x4b0c0e*/
                     *(_DWORD *)(this + 12),
                     v3);
    }
  }
  return v5; /*0x4b0bc5*/
}



// ==== 0x004B0C40  DriveLocomotionClass::SetWaypointTarget  this=DriveLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::SetWaypointTarget(
        DriveLocomotionClass *this,
        int a2,
        unsigned int a3,
        __int64 a4)
{
  int v4; // eax
  char *v5; // esi
  int *v6; // edi
  int v7; // ecx
  __int64 v8; // kr08_8
  CellClass *v9; // eax
  int v11; // [esp-4h] [ebp-20h]
  unsigned int v12; // [esp+10h] [ebp-Ch] BYREF
  __int64 v13; // [esp+14h] [ebp-8h]

  this->MovementSpeed[1] = a2; /*0x4b0c53*/
  this->TrackNumber = 0; /*0x4b0c56*/
  v4 = g_DDraw_ClipRect; /*0x4b0c5d*/
  if ( a3 != g_DDraw_ClipRect || a4 != qword_8A0794 ) /*0x4b0c70*/
  {
    v5 = (char *)this - 4; /*0x4b0c88*/
    v13 = a4; /*0x4b0c8f*/
    v6 = &this->Dest[2]; /*0x4b0c93*/
    v12 = a3; /*0x4b0c9a*/
    if ( *v6 != g_DDraw_ClipRect || __PAIR64__(this->HeadToCoord[1], this->HeadToCoord[0]) != qword_8A0794 ) /*0x4b0ca5*/
    {
      *v6 = g_DDraw_ClipRect; /*0x4b0cb6*/
      this->HeadToCoord[0] = qword_8A0794; /*0x4b0cbd*/
      v7 = HIDWORD(qword_8A0794); /*0x4b0cc0*/
      v5[99] = 0; /*0x4b0cc6*/
      this->HeadToCoord[1] = v7; /*0x4b0cca*/
      v4 = g_DDraw_ClipRect; /*0x4b0ccd*/
    }
    if ( __PAIR64__(a4, a3) != __PAIR64__(qword_8A0794, v4) /*0x4b0cee*/
      || (LOBYTE(v4) = BYTE4(qword_8A0794), HIDWORD(a4) != HIDWORD(qword_8A0794)) )
    {
      v8 = v13; /*0x4b0cf4*/
      v5[99] = 1; /*0x4b0cfa*/
      *v6 = a3; /*0x4b0cfe*/
      *(_QWORD *)this->HeadToCoord = v8; /*0x4b0d00*/
      v11 = *((_DWORD *)v5 + 3); /*0x4b0d0d*/
      v9 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12); /*0x4b0d14*/
      if ( !(unsigned __int8)CrateClass::ProcessPickup((CrateClass *)v9, v11) || *(_BYTE *)(*((_DWORD *)v5 + 3) + 129) ) /*0x4b0d27*/
      {
        LOBYTE(v4) = *(_BYTE *)(*((_DWORD *)v5 + 3) + 144); /*0x4b0d6d*/
        if ( (_BYTE)v4 ) /*0x4b0d75*/
        {
          LOBYTE(v4) = g_DDraw_ClipRect; /*0x4b0d77*/
          *v6 = g_DDraw_ClipRect; /*0x4b0d7c*/
          *(_QWORD *)this->HeadToCoord = qword_8A0794; /*0x4b0d84*/
          v5[99] = 0; /*0x4b0d90*/
        }
      }
      else
      {
        JumpjetLocomotion::MoveTo((int)this - 4, &v12, 1); /*0x4b0d3a*/
        LOBYTE(v4) = (_BYTE)this + 48; /*0x4b0d3f*/
        this->SlopeTimer[3] = a3; /*0x4b0d4a*/
        *(_QWORD *)this->Dest = a4; /*0x4b0d4c*/
        this->SpeedAccum = 0; /*0x4b0d52*/
        this->MovementSpeed[0] = 1072693248; /*0x4b0d59*/
      }
    }
  }
  return v4; /*0x4b0d60*/
}



// ==== 0x004B0DF0  ObjectClass::method_4B0DF0  this=ObjectClass  sig=csp ====
char __thiscall sub_4B0DF0(ObjectClass *this, _DWORD *a2)
{
  int v2; // eax
  int *v4; // edi
  int v5; // eax
  int v6; // eax
  CellClass *v7; // eax
  void *vtable3; // [esp-4h] [ebp-10h]

  v2 = g_DDraw_ClipRect; /*0x4b0df1*/
  v4 = &this->ambientSoundController[1]; /*0x4b0dfd*/
  if ( this->ambientSoundController[1] != g_DDraw_ClipRect /*0x4b0e0f*/
    || *(_QWORD *)&this->ambientSoundController[2] != qword_8A0794 )
  {
    *v4 = g_DDraw_ClipRect; /*0x4b0e20*/
    this->ambientSoundController[2] = qword_8A0794; /*0x4b0e28*/
    v5 = HIDWORD(qword_8A0794); /*0x4b0e2b*/
    HIBYTE(this->customSound_controller[4]) = 0; /*0x4b0e30*/
    this->ambientSoundController[3] = v5; /*0x4b0e34*/
    v2 = g_DDraw_ClipRect; /*0x4b0e37*/
  }
  if ( *a2 != v2 || *(_QWORD *)(a2 + 1) != qword_8A0794 ) /*0x4b0e50*/
  {
    *v4 = *a2; /*0x4b0e65*/
    this->ambientSoundController[2] = a2[1]; /*0x4b0e6a*/
    v6 = a2[2]; /*0x4b0e6d*/
    HIBYTE(this->customSound_controller[4]) = 1; /*0x4b0e70*/
    this->ambientSoundController[3] = v6; /*0x4b0e74*/
    vtable3 = this->?; /*0x4b0e7a*/
    v7 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x4b0e81*/
    if ( (unsigned __int8)CrateClass::ProcessPickup((CrateClass *)v7, (int)vtable3) && !*((_BYTE *)this->? + 129) ) /*0x4b0e94*/
    {
      JumpjetLocomotion::MoveTo((int)this, a2, 1); /*0x4b0ea3*/
      return 1; /*0x4b0ead*/
    }
    if ( *((_BYTE *)this->? + 144) ) /*0x4b0eb3*/
    {
      *v4 = g_DDraw_ClipRect; /*0x4b0ec3*/
      *(_QWORD *)&this->ambientSoundController[2] = qword_8A0794; /*0x4b0ecb*/
      HIBYTE(this->customSound_controller[4]) = 0; /*0x4b0ed6*/
    }
  }
  return 0; /*0x4b0ea8*/
}



// ==== 0x004B0EF0  DriveLocomotionClass::UpdateFacingDirection  this=DriveLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::UpdateFacingDirection(DriveLocomotionClass *this, int a2)
{
  return FacingClass::Update((char *)this->?->?, &a2); /*0x4b0f0f*/
}



// ==== 0x004B0F20  JumpjetLocomotion::ProcessCollision  this=JumpjetLocomotion  sig=csp ====
char __userpurge JumpjetLocomotion::ProcessCollision@<al>(int this@<ecx>, double a2@<st0>, char a3)
{
  int v4; // eax
  int v5; // edx
  bool v6; // al
  int v7; // esi
  int v8; // eax
  _DWORD *v9; // esi
  int v10; // edx
  int v11; // esi
  int v12; // eax
  int *v13; // ecx
  int v14; // edi
  char v15; // bl
  int v16; // edx
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // esi
  int v22; // eax
  _DWORD *v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // edx
  _DWORD *v27; // esi
  int v28; // eax
  int v29; // edx
  _DWORD *v30; // ebx
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  CellClass *v34; // eax
  int *Coords; // eax
  int *v36; // ecx
  int *v37; // ecx
  int GroundHeight; // esi
  int v39; // ebx
  char *v41; // esi
  char v42; // dl
  int v43; // edx
  int v44; // ebx
  __int16 v45; // cx
  int v46; // eax
  int v47; // ecx
  _DWORD *v48; // ecx
  int v49; // eax
  int v50; // edx
  int v51; // eax
  int ... [42175 chars total]



// ==== 0x004B2630  JumpjetLocomotion::Update  this=JumpjetLocomotion  sig=csp ====
char __thiscall JumpjetLocomotion_Update(int this, _BYTE *a2, int a3, int a4)
{
  int v5; // ecx
  unsigned int v6; // ebx
  int v7; // ecx
  char v8; // al
  char result; // al
  int v10; // ecx
  int v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // eax
  wchar_t *v16; // edi
  int v17; // edx
  wchar_t **v18; // esi
  int v19; // eax
  wchar_t *v20; // eax
  wchar_t *v21; // ecx
  _DWORD *v22; // ebx
  int v23; // ecx
  char v24; // al
  _DWORD *v25; // ecx
  int v26; // ecx
  _DWORD *v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // ecx
  _DWORD *Value; // edi
  _DWORD *v31; // esi
  int v32; // kr0C_4
  unsigned int v33; // edx
  _DWORD *v34; // eax
  _BYTE *v35; // ecx
  int v36; // edi
  unsigned int v37; // esi
  void *v38; // eax
  int v39; // eax
  int v40; // edx
  _DWORD *v41; // edi
  _DWORD *v42; // ecx
  int v43; // esi
  int GroundHeight; // eax
  int ClosestObject; // eax
  _DWORD *v46; // eax
  _DWORD *v47; // eax
  _DWORD *v48;... [57640 chars total]



// ==== 0x004B4770  nullsub_118  this=-  sig=ida-proto ====
void nullsub_118()
{
  ; /*0x4b4770*/
}



// ==== 0x004B4780  JumpjetLocomotion::TransformCoords  this=JumpjetLocomotion  sig=csp ====
_DWORD *__thiscall JumpjetLocomotion::TransformCoords(JumpjetLocomotion *this, _DWORD *a2, int *a3, int *a4)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  char *JumpjetLocomotion_field_0x40; // edx
  char *JumpjetLocomotion_field_0x44; // ecx

  v4 = *a4; /*0x4b478d*/
  v5 = dword_7E7B30[3 * (int)this->JumpjetLocomotion_field_0x58]; /*0x4b4791*/
  v6 = *a3; /*0x4b479f*/
  v7 = a3[1]; /*0x4b47a1*/
  if ( (v5 & 1) != 0 ) /*0x4b47a4*/
  {
    v6 = a3[1]; /*0x4b47a8*/
    v7 = *a3; /*0x4b47aa*/
    v4 = (unsigned __int8)(-64 - v4); /*0x4b47b9*/
  }
  if ( (v5 & 2) != 0 ) /*0x4b47be*/
  {
    v6 = -v6; /*0x4b47c2*/
    v4 = (unsigned __int8)-(char)v4; /*0x4b47c4*/
  }
  if ( (v5 & 4) != 0 ) /*0x4b47cc*/
  {
    v7 = -v7; /*0x4b47d5*/
    v4 = (unsigned __int8)(0x80 - v4); /*0x4b47dd*/
  }
  *a4 = v4; /*0x4b47df*/
  JumpjetLocomotion_field_0x40 = (char *)this->JumpjetLocomotion_field_0x40; /*0x4b47e2*/
  JumpjetLocomotion_field_0x44 = (char *)this->JumpjetLocomotion_field_0x44; /*0x4b47e5*/
  *a2 = &JumpjetLocomotion_field_0x40[v6]; /*0x4b47f2*/
  a2[1] = &JumpjetLocomotion_field_0x44[v7]; /*0x4b47f5*/
  return a2; /*0x4b47f0*/
}



// ==== 0x004B4820  DriveLocomotionClass::StubReturnTwo  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnTwo(DriveLocomotionClass *this)
{
  return 2; /*0x4b4825*/
}



// ==== 0x004B4830  DriveLocomotionClass::ddtor  this=DriveLocomotionClass  sig=csp ====
int __stdcall DriveLocomotionClass::ddtor(DriveLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x4b4836*/
    return -2147467261; /*0x4b4838*/
  *a2 = 1247291201; /*0x4b4846*/
  a2[1] = 298948665; /*0x4b484e*/
  a2[2] = -1610610249; /*0x4b4857*/
  a2[3] = unk_7E9A3C; /*0x4b4860*/
  return 0; /*0x4b483d*/
}



// ==== 0x004B4870  DriveLocomotionClass::StubReturnZero_1  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_1(DriveLocomotionClass *this)
{
  return 0; /*0x4b4872*/
}



// ==== 0x004B4880  DriveLocomotionClass::DispatchCheckState  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchCheckState(DriveLocomotionClass *this)
{
  return JumpjetLocomotionClass::CheckState((LocomotionClass *)this); /*0x4b488a*/
}



// ==== 0x004B48D0  DriveLocomotionClass::MoveToChecked  this=DriveLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::MoveToChecked(DriveLocomotionClass *this, int a2)
{
  char result; // al

  result = (_BYTE)this + 60; /*0x4b48de*/
  if ( this->Dest[2] != g_DDraw_ClipRect || *(_QWORD *)this->HeadToCoord != qword_8A0794 ) /*0x4b48f0*/
    return JumpjetLocomotion::MoveTo((int)this - 4, &this->Dest[2], a2); /*0x4b4908*/
  return result; /*0x4b490d*/
}



// ==== 0x004B4920  DriveLocomotionClass::IsAtDestination  this=DriveLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::IsAtDestination(DriveLocomotionClass *this, int a2, int a3, int a4)
{
  DriveLocomotionClass *v4; // esi
  int *v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int *v15; // eax
  int v16; // ebx
  int v17; // ebp
  int *location; // eax
  int v20[2]; // [esp+Ch] [ebp-20h] BYREF
  _DWORD v21[2]; // [esp+14h] [ebp-18h] BYREF
  int v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+20h] [ebp-Ch]
  int v24; // [esp+24h] [ebp-8h]
  unsigned int v25; // [esp+28h] [ebp-4h]

  v4 = this; /*0x4b4925*/
  v5 = (int *)(*(int (__stdcall **)(DriveLocomotionClass *, _DWORD *))(*(_DWORD *)this->LocomotionClass + 24))( /*0x4b4932*/
                this,
                v21);
  v6 = *v5; /*0x4b4935*/
  v7 = v5[1]; /*0x4b4937*/
  v8 = v5[2]; /*0x4b4940*/
  v23 = v6; /*0x4b4945*/
  v24 = v7; /*0x4b4949*/
  v25 = v8; /*0x4b494d*/
  if ( v6 == g_DDraw_ClipRect && __PAIR64__(v8, v7) == qword_8A0794 ) /*0x4b4959*/
    return 0; /*0x4b4959*/
  if ( !LOBYTE(v4->TrackIndex) ) /*0x4b4967*/
  {
    v9 = v4->MovementSpeed[1]; /*0x4b4972*/
    if ( v9 != -1 ) /*0x4b4978*/
    {
      v10 = byte_7E7B28[12 * v9]; /*0x4b4981*/
      if ( v10 ) /*0x4b498b*/
      {
        v11 = 4 * v10; /*0x4b4991*/
        v12 = dword_7E7A34[v11]; /*0x4b4994*/
        if ( v12 > -1 ) /*0x4b49a3*/
        {
          v13 = dword_7E7A28[v11] + 12 * v12; /*0x4b49ac*/
          this = *(DriveLocomotionClass **)(v13 + 8); /*0x4b49b2*/
          if ( v4->TrackNumber < v12 ) /*0x4b49bb*/
          {
            v14 = *(_DWORD *)(v13 + 4); /*0x4b49c3*/
            v20[0] = *(_DWORD *)v13; /*0x4b49c6*/
            v20[1] = v14; /*0x4b49cf*/
            v15 = JumpjetLocomotion::TransformCoords((JumpjetLocomotion *)&v4[-1].Piggybackee, v21, v20, (int *)&this); /*0x4b49e1*/
            v16 = *v15; /*0x4b49e6*/
            v17 = v15[1]; /*0x4b49e8*/
            location = v4->?->?; /*0x4b49ee*/
            v21[0] = *location; /*0x4b49f5*/
            v21[1] = location[1]; /*0x4b49fc*/
            v22 = location[2]; /*0x4b4a03*/
            if ( (unsigned __int16)(v16 / 256) == (unsigned __int16)(a2 / 256) /*0x4b4a6b*/
              && (unsigned __int16)(v17 / 256) == (unsigned __int16)(a3 / 256)
              && (int)abs32(v22 - a4) <= dword_8A07D0 )
            {
              return 1; /*0x4b4a75*/
            }
          }
        }
      }
    }
  }
  return (unsigned __int16)(v23 / 256) == (unsigned __int16)(a2 / 256) /*0x4b4aee*/
      && (unsigned __int16)(v24 / 256) == (unsigned __int16)(a3 / 256)
      && (int)abs32(v25 - a4) <= dword_8A07D0;
}



// ==== 0x004B4B00  DriveLocomotionClass::StubReturnZero_2  this=DriveLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::StubReturnZero_2(DriveLocomotionClass *this)
{
  DriveLocomotionClass *v1; // edi
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  __int16 v5; // bx
  int TrackNumber; // edx
  __int16 v7; // dx
  char v8; // al

  v1 = this; /*0x4b4b02*/
  v2 = this->?->pathDirections[0]; /*0x4b4b09*/
  if ( v2 < -1 || v2 > 8 ) /*0x4b4b1b*/
    return 0; /*0x4b4b1b*/
  v3 = 12 * this->MovementSpeed[1] + 8289064; /*0x4b4b2c*/
  v4 = LOBYTE(this->TrackIndex)
     ? (char)algn_7E7B29[12 * this->MovementSpeed[1]]
     : byte_7E7B28[12 * this->MovementSpeed[1]];
  if ( v2 == 8 ) /*0x4b4b43*/
    return 0; /*0x4b4b43*/
  if ( v2 == -1 ) /*0x4b4b4c*/
    return 0; /*0x4b4b4c*/
  LOBYTE(v5) = 0; /*0x4b4b53*/
  HIBYTE(v5) = algn_7E7B29[12 * this->MovementSpeed[1] + 3]; /*0x4b4b55*/
  LOWORD(this) = v5; /*0x4b4b58*/
  if ( (((((unsigned int)this >> 12) + 1) >> 1) & 7) == v2 ) /*0x4b4b78*/
    return 0; /*0x4b4b78*/
  TrackNumber = v1->TrackNumber; /*0x4b4b7a*/
  if ( dword_7E7A2C[4 * v4] == TrackNumber /*0x4b4bc1*/
    && TrackNumber
    && (LOBYTE(v7) = 0,
        HIBYTE(v7) = *(_BYTE *)(v3 + 4),
        LOWORD(this) = v7,
        (v8 = byte_7E7B28[96 * (((((unsigned int)this >> 12) + 1) >> 1) & 7) + 12 * v2]) != 0)
    && dword_7E7A30[4 * v8] )
  {
    return 1; /*0x4b4bcc*/
  }
  else
  {
    return 0; /*0x4b4bd3*/
  }
}



// ==== 0x004B4BE0  DriveLocomotionClass::SetByteField  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SetByteField(DriveLocomotionClass *this)
{
  this->IsTurretLockedDown = 0; /*0x4b4be4*/
  return (int)this->LocomotionClass; /*0x4b4be8*/
}



// ==== 0x004B4BF0  DriveLocomotionClass::SetByteField_0  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SetByteField_0(DriveLocomotionClass *this)
{
  this->IsTurretLockedDown = 1; /*0x4b4bf4*/
  return (int)this->LocomotionClass; /*0x4b4bf8*/
}



// ==== 0x004B4C00  DriveLocomotionClass::GetField_0x54  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::GetField_0x54(DriveLocomotionClass *this)
{
  return this->MovementSpeed[1]; /*0x4b4c07*/
}



// ==== 0x004B4C10  DriveLocomotionClass::GetField_0x58  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::GetField_0x58(DriveLocomotionClass *this)
{
  return this->TrackNumber; /*0x4b4c17*/
}



// ==== 0x004B4C20  DriveLocomotionClass::GetField_0x48  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::GetField_0x48(DriveLocomotionClass *this)
{
  return this->HeadToCoord[2]; /*0x4b4c27*/
}



// ==== 0x004B4C30  IUnknown::IsInactive  this=IUnknown  sig=csp ====
BOOL __stdcall StreamClass::IsInactive(IUnknown *this)
{
  return BYTE1(this->field_10) == 0; /*0x4b4c3e*/
}



// ==== 0x004B4C50  IUnknown::Vt32Thunk  this=IUnknown  sig=csp ====
int __stdcall StreamClass::Vt32Thunk(IUnknown *this)
{
  return (*(int (__stdcall **)(IUnknown *))(this->field_0 + 128))(this); /*0x4b4c5d*/
}



// ==== 0x004B4C60  IUnknown::MissionStub6  this=IUnknown  sig=csp ====
int __stdcall JumpjetLocomotionClass::MissionStub6(IUnknown *this)
{
  return 0; /*0x4b4c62*/
}



// ==== 0x004B4C70  IUnknown::Stub3  this=IUnknown  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub3(IUnknown *this)
{
  ; /*0x4b4c70*/
}



// ==== 0x004B4C80  IUnknown::MissionStub7  this=IUnknown  sig=csp ====
char __stdcall JumpjetLocomotionClass::MissionStub7(IUnknown *this)
{
  return 0; /*0x4b4c82*/
}



// ==== 0x004B4C90  IUnknown::Stub4  this=IUnknown  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub4(IUnknown *this)
{
  ; /*0x4b4c90*/
}



// ==== 0x004B4CA0  IUnknown::Stub5  this=IUnknown  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub5(IUnknown *this)
{
  ; /*0x4b4ca0*/
}



// ==== 0x004B4CB0  DriveLocomotionClass::AddRef  this=DriveLocomotionClass  sig=csp ====
LONG __stdcall DriveLocomotionClass::AddRef(DriveLocomotionClass *this)
{
  return COM::AddRef((LocomotionClass *)this); /*0x4b4cba*/
}



// ==== 0x004B4CC0  DriveLocomotionClass::Release  this=DriveLocomotionClass  sig=csp ====
LONG __stdcall DriveLocomotionClass::Release(DriveLocomotionClass *this)
{
  return COM::ReleaseRef((LocomotionClass *)this); /*0x4b4cca*/
}



// ==== 0x004B4CD0  JumpjetLocomotionClass::GetLinkedLocomotorPointer  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_4B4CD0(int a1)
{
  return *(_DWORD *)(a1 + 80) != 0; /*0x4b4cde*/
}



// ==== 0x004B4CF0  DriveLocomotionClass::StubReturn112  this=DriveLocomotionClass  sig=csp ====
int DriveLocomotionClass::StubReturn112(DriveLocomotionClass *this)
{
  return 112; /*0x4b4cf5*/
}



// ==== 0x004B4D00  DriveLocomotionClass::ProcessMove  this=DriveLocomotionClass  sig=csp ====
_DWORD *__thiscall DriveLocomotionClass::ProcessMove(DriveLocomotionClass *this, char a2)
{
  ILocomotion *Piggybackee; // eax

  *(_DWORD *)this->LocomotionClass = &DriveLocomotionClass::`vftable'; /*0x4b4d03*/
  *(_DWORD *)&this->LocomotionClass[4] = &DriveLocomotionClass::`vftable'; /*0x4b4d09*/
  *(_DWORD *)this->__pad_18 = &off_7E7E8C; /*0x4b4d10*/
  Piggybackee = this->Piggybackee; /*0x4b4d17*/
  if ( Piggybackee ) /*0x4b4d1c*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x4b4d21*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x4b4d26*/
  if ( (a2 & 1) != 0 ) /*0x4b4d30*/
    __3_YAXPAX_Z(this); /*0x4b4d33*/
  return this->LocomotionClass; /*0x4b4d3d*/
}



// ==== 0x004B4D50  ComPtr::Release_Alt  this=ComPtr  sig=csp ====
int __thiscall ComPtr::Release_Alt(ComPtr *this)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x4b4d50*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x4b4d50*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x4b4d59*/
  return result; /*0x4b4d5c*/
}



// ==== 0x004B4D60  Function::4B4D60  this=Function  sig=csp ====
int __thiscall Function::Method_4B4D60(Function *this)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x4b4d60*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x4b4d60*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x4b4d69*/
  return result; /*0x4b4d6c*/
}



// ==== 0x004B4D70  Timeout::GetRemaining  this=Timeout  sig=csp ====
int __thiscall Timeout::GetRemaining(Timeout *this)
{
  Timeout v1; // edx
  int result; // eax

  v1 = *this; /*0x4b4d70*/
  result = *((_DWORD *)this + 2); /*0x4b4d72*/
  if ( *this != -1 ) /*0x4b4d78*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - *(_DWORD *)&v1 >= result ) /*0x4b4d84*/
      return 0; /*0x4b4d89*/
    else
      result -= *(_DWORD *)&stru_A8EB00.?[416] - *(_DWORD *)&v1; /*0x4b4d86*/
  }
  return result; /*0x4b4d88*/
}



// ==== 0x004B4D90  JumpjetLocomotionClass::GetField_0x78  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4B4D90(int a1, const void *a2, int *a3)
{
  return DriveLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}



// ==== 0x004B4DA0  JumpjetLocomotionClass::GetField_0x7C  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_4B4DA0(int a1)
{
  return DriveLocomotionClass::AddRef(a1 - 4);
}



// ==== 0x004B4DB0  JumpjetLocomotionClass::GetField_0x80  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_4B4DB0(int a1)
{
  return DriveLocomotionClass::Release((volatile LONG *)(a1 - 4));
}



// ==== 0x004B4DC0  JumpjetLocomotionClass::loc_4B4DC0  this=JumpjetLocomotionClass  sig=ida-proto ====
int __stdcall JumpjetLocomotionClass::loc_4B4DC0(int a1, const void *a2, int *a3)
{
  return DriveLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}


// ==== 0x004B4DD0  JumpjetLocomotionClass::loc_4B4DD0  this=JumpjetLocomotionClass  sig=ida-proto ====
LONG __stdcall JumpjetLocomotionClass::loc_4B4DD0(int a1)
{
  return DriveLocomotionClass::AddRef(a1 - 24);
}


// ==== 0x004B4DE0  JumpjetLocomotionClass::loc_4B4DE0  this=JumpjetLocomotionClass  sig=ida-proto ====
LONG __stdcall JumpjetLocomotionClass::loc_4B4DE0(int a1)
{
  return DriveLocomotionClass::Release((volatile LONG *)(a1 - 24));
}


// ==== 0x004B4DF0  sub_4B4DF0  this=-  sig=ida-proto ====
int sub_4B4DF0()
{
  dword_8A07D8 = 0; /*0x4b4df2*/
  dword_8A07DC = 0; /*0x4b4df7*/
  dword_8A07E0 = 0; /*0x4b4dfc*/
  dword_8A07E4 = 0; /*0x4b4e01*/
  return 0; /*0x4b4e06*/
}



// ==== 0x004B4E10  DropListClass::method_4B4E10  this=DropListClass  sig=csp ====
int __thiscall sub_4B4E10(
        DropListClass *this,
        int a2,
        wchar_t *String,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int Instance; // eax
  int v13; // edx

  sub_4C2FC0((EditClass *)this, a2, String, a4, a5, a6, a7, a8, 18, 7); /*0x4b4e3f*/
  LOBYTE(this->DropListClass_field_0x48) = 0; /*0x4b4e62*/
  this->DropListClass_field_0x4C = a9; /*0x4b4e66*/
  ShapeButtonClass::Constructor((ShapeButtonClass *)&this->DropListClass_field_0x50, 0, a11, a8 + a6, a7, 0, 0, 0); /*0x4b4e69*/
  ListClass::Construct((int)this + 176, 0, a6, a7 + *(__int16 *)(a11 + 4), a8 + *(__int16 *)(a11 + 2), a9, a5, a10, a11); /*0x4b4ea3*/
  *(_DWORD *)this->__pad_0 = &DropListClass::`vftable'; /*0x4b4eac*/
  Instance = TextRenderer::GetInstance(); /*0x4b4eb2*/
  v13 = this->q02C; /*0x4b4eba*/
  this->DropListClass_field_0x18 = *(_DWORD *)(Instance + 28) + 1; /*0x4b4ebf*/
  (*(void (__thiscall **)(char *, DropListClass *))(v13 + 132))((char *)this + 176, this); /*0x4b4ec4*/
  (*(void (__thiscall **)(int *, DropListClass *))(this->DropListClass_field_0x50 + 132))( /*0x4b4ecf*/
    &this->DropListClass_field_0x50,
    this);
  return (int)this->__pad_0; /*0x4b4ed7*/
}



// ==== 0x004B4EE0  DropListClass::OnClick  this=DropListClass  sig=csp ====
int __thiscall DropListClass::OnClick(DropListClass *this)
{
  if ( LOBYTE(this->DropListClass_field_0x48) ) /*0x4b4ee3*/
  {
    (*(void (__thiscall **)(char *))(this->q02C + 36))((char *)this + 176); /*0x4b4ef6*/
    LOBYTE(this->DropListClass_field_0x48) = 0; /*0x4b4ef9*/
  }
  (*(void (__thiscall **)(char *))(this->q02C + 32))((char *)this + 176); /*0x4b4f09*/
  (*(void (__thiscall **)(int *))(this->DropListClass_field_0x50 + 32))(&this->DropListClass_field_0x50); /*0x4b4f12*/
  return Hash::Reset((LinkClass *)this); /*0x4b4f1c*/
}



// ==== 0x004B4F20  DropListClass::?  this=DropListClass  sig=csp ====
int __thiscall DropListClass::g_var_926b49(DropListClass *this, int a2)
{
  (*(void (__thiscall **)(int *, int))(this->DropListClass_field_0x50 + 12))(&this->DropListClass_field_0x50, a2); /*0x4b4f2f*/
  return LinkedList::InsertAfter((LinkClass *)this, a2); /*0x4b4f3a*/
}



// ==== 0x004B4F40  DropListClass::Draw  this=DropListClass  sig=csp ====
int __thiscall DropListClass::Draw(DropListClass *this, int a2)
{
  (*(void (__thiscall **)(int *, int))(this->DropListClass_field_0x50 + 16))(&this->DropListClass_field_0x50, a2); /*0x4b4f4f*/
  return LinkedList::Append((LinkClass *)this, a2); /*0x4b4f5a*/
}



// ==== 0x004B4F60  DropListClass::HitTest  this=DropListClass  sig=csp ====
_DWORD *__thiscall DropListClass::HitTest(DropListClass *this, int a2)
{
  (*(void (__thiscall **)(int *, int))(this->DropListClass_field_0x50 + 20))(&this->DropListClass_field_0x50, a2); /*0x4b4f6f*/
  return LinkedList::Attach((LinkClass *)this, a2); /*0x4b4f7a*/
}



// ==== 0x004B4F80  DropListClass::OnDblClick  this=DropListClass  sig=csp ====
int __thiscall DropListClass::OnDblClick(DropListClass *this)
{
  if ( LOBYTE(this->DropListClass_field_0x48) ) /*0x4b4f83*/
  {
    (*(void (__thiscall **)(char *))(this->q02C + 36))((char *)this + 176); /*0x4b4f96*/
    LOBYTE(this->DropListClass_field_0x48) = 0; /*0x4b4f99*/
  }
  (*(void (__thiscall **)(int *))(this->DropListClass_field_0x50 + 36))(&this->DropListClass_field_0x50); /*0x4b4fa3*/
  return LinkClass::Destroy((GadgetClass *)this); /*0x4b4fad*/
}



// ==== 0x004B4FB0  DropListClass::SetFocus  this=DropListClass  sig=csp ====
int __thiscall DropListClass::SetFocus(DropListClass *this, wchar_t *Source)
{
  wcsncpy((wchar_t *)this->DropListClass_field_0x34, Source, this->DropListClass_field_0x38); /*0x4b4fc1*/
  (*(void (__thiscall **)(DropListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x4b4fcd*/
  return (*(int (__thiscall **)(char *, wchar_t *))(this->q02C + 136))((char *)this + 176, Source); /*0x4b4fe3*/
}



// ==== 0x004B4FF0  DropListClass::KillFocus  this=DropListClass  sig=csp ====
int __thiscall DropListClass::KillFocus(DropListClass *this)
{
  return (*(int (__thiscall **)(char *))(this->q02C + 156))((char *)this + 176);
}



// ==== 0x004B5010  DropListClass::GetItemData  this=DropListClass  sig=csp ====
int __thiscall DropListClass::GetItemData(DropListClass *this)
{
  return (*(int (__thiscall **)(char *))(this->q02C + 152))((char *)this + 176);
}



// ==== 0x004B5030  DropListClass::OnKeyUp  this=DropListClass  sig=csp ====
wchar_t *__userpurge DropListClass::OnKeyUp@<eax>(DropListClass *this, int a2@<ebx>, unsigned int a3)
{
  int v3; // ecx
  wchar_t **v4; // edi
  int *v5; // esi
  wchar_t *result; // eax
  int v7; // ebx
  int v8; // eax
  const wchar_t *v9; // eax

  v4 = (wchar_t **)v3; /*0x4b5032*/
  v5 = (int *)(v3 + 176); /*0x4b503a*/
  result = (wchar_t *)(*(int (__thiscall **)(int))(*(_DWORD *)(v3 + 176) + 148))(v3 + 176); /*0x4b5042*/
  if ( this >= (DropListClass *)result ) /*0x4b504e*/
  {
    *v4[13] = 0; /*0x4b5089*/
  }
  else
  {
    (*(void (__thiscall **)(int *, DropListClass *, int))(*v5 + 184))(v5, this, a2); /*0x4b5056*/
    v7 = *v5; /*0x4b505e*/
    v8 = (*((int (__thiscall **)(wchar_t **))*v4 + 41))(v4); /*0x4b5062*/
    v9 = (const wchar_t *)(*(int (__thiscall **)(int *, int))(v7 + 160))(v5, v8); /*0x4b506b*/
    return wcscpy(v4[13], v9); /*0x4b5076*/
  }
  return result; /*0x4b507f*/
}



// ==== 0x004B50A0  DropListClass::AddItem  this=DropListClass  sig=csp ====
char __thiscall DropListClass::AddItem(DropListClass *this)
{
  char result; // al

  result = this->DropListClass_field_0x48; /*0x4b50a3*/
  if ( result ) /*0x4b50a8*/
  {
    result = (*(int (__thiscall **)(char *))(this->q02C + 36))((char *)this + 176); /*0x4b50b6*/
    LOBYTE(this->DropListClass_field_0x48) = 0; /*0x4b50b9*/
  }
  return result; /*0x4b50bd*/
}



// ==== 0x004B50C0  DropListClass::Open  this=DropListClass  sig=csp ====
__int16 __thiscall DropListClass::Open(DropListClass *this, char a2, _DWORD *a3, char *a4)
{
  int DropListClass_field_0x24; // eax
  int DropListClass_field_0x10; // edx
  int DropListClass_field_0x14; // eax
  int v8; // ebp
  int DropListClass_field_0x4C; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  const wchar_t *v13; // eax
  size_t DropListClass_field_0x38; // [esp-4h] [ebp-Ch]

  if ( a4 == (char *)&this->DropListClass_field_0x50 && (a2 & 4) != 0 ) /*0x4b50d8*/
  {
    if ( LOBYTE(this->DropListClass_field_0x48) ) /*0x4b50da*/
    {
      (*(void (__thiscall **)(char *))(this->q02C + 36))((char *)this + 176); /*0x4b50ed*/
      DropListClass_field_0x24 = this->DropListClass_field_0x24; /*0x4b50f0*/
      LOBYTE(this->DropListClass_field_0x48) = 0; /*0x4b50f3*/
      BYTE1(DropListClass_field_0x24) |= 0x80u; /*0x4b50f7*/
      *a3 = DropListClass_field_0x24; /*0x4b50fa*/
    }
    else
    {
      DropListClass_field_0x10 = this->DropListClass_field_0x10; /*0x4b5101*/
      DropListClass_field_0x14 = this->DropListClass_field_0x14; /*0x4b5104*/
      v8 = this->q02C; /*0x4b5108*/
      *((_DWORD *)this + 47) = this->DropListClass_field_0x0C; /*0x4b510e*/
      DropListClass_field_0x4C = this->DropListClass_field_0x4C; /*0x4b5114*/
      this->q030 = DropListClass_field_0x10 + 18; /*0x4b511b*/
      v10 = *(_DWORD *)this->__pad_0; /*0x4b5121*/
      *((_DWORD *)this + 50) = DropListClass_field_0x4C; /*0x4b5129*/
      *((_DWORD *)this + 49) = DropListClass_field_0x14; /*0x4b5131*/
      v11 = (*(int (__thiscall **)(DropListClass *))(v10 + 24))(this); /*0x4b5137*/
      (*(void (__thiscall **)(char *, int))(v8 + 12))((char *)this + 176, v11); /*0x4b513d*/
      (*(void (__thiscall **)(char *))(this->q02C + 72))((char *)this + 176); /*0x4b5144*/
      LOBYTE(this->DropListClass_field_0x48) = 1; /*0x4b5148*/
    }
  }
  LOWORD(v12) = (_WORD)a4; /*0x4b514d*/
  if ( a4 == (char *)this + 176 ) /*0x4b5159*/
  {
    DropListClass_field_0x38 = this->DropListClass_field_0x38; /*0x4b5160*/
    v13 = (const wchar_t *)(*(int (__thiscall **)(char *))(this->q02C + 156))((char *)this + 176); /*0x4b5161*/
    wcsncpy((wchar_t *)this->DropListClass_field_0x34, v13, DropListClass_field_0x38); /*0x4b516c*/
    (*(void (__thiscall **)(DropListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x4b5178*/
    v12 = this->DropListClass_field_0x24; /*0x4b517b*/
    BYTE1(v12) |= 0x80u; /*0x4b517e*/
    *a3 = v12; /*0x4b5181*/
  }
  return v12; /*0x4b5183*/
}



// ==== 0x004B5210  TechnoClass::CopyStateFrom  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CopyStateFrom(TechnoClass *this, int a2)
{
  if ( this == (TechnoClass *)a2 ) /*0x4b521a*/
    return (int)this; /*0x4b521c*/
  LinkedList::MoveNode((LinkedList *)this, (void *)a2); /*0x4b5228*/
  this->? = *(void **)(a2 + 12); /*0x4b5236*/
  this->? = *(_DWORD *)(a2 + 16); /*0x4b523c*/
  this->? = *(_DWORD *)(a2 + 20); /*0x4b5242*/
  this->? = *(_DWORD *)(a2 + 24); /*0x4b5248*/
  LOBYTE(this->?) = *(_BYTE *)(a2 + 28); /*0x4b524e*/
  BYTE1(this->?) = *(_BYTE *)(a2 + 29); /*0x4b5254*/
  BYTE2(this->?) = *(_BYTE *)(a2 + 30); /*0x4b525a*/
  this->? = *(void **)(a2 + 32); /*0x4b5260*/
  this->? = *(_DWORD *)(a2 + 36); /*0x4b5266*/
  this->? = *(_DWORD *)(a2 + 40); /*0x4b526c*/
  this->? = *(_DWORD *)(a2 + 44); /*0x4b5272*/
  this->? = *(ObjectClass **)(a2 + 48); /*0x4b5278*/
  this->? = *(TagClass **)(a2 + 52); /*0x4b527e*/
  this->? = *(BombClass **)(a2 + 56); /*0x4b5284*/
  this->?[0] = *(_DWORD *)(a2 + 60); /*0x4b528a*/
  this->?[1] = *(_DWORD *)(a2 + 64); /*0x4b5290*/
  this->?[2] = *(_DWORD *)(a2 + 68); /*0x4b529c*/
  sub_4B5780((int)&this->?, a2 + 176); /*0x4b52a2*/
  this->?[0] = *(_DWORD *)(a2 + 212); /*0x4b52aa*/
  this->?[1] = *(_DWORD *)(a2 + 216); /*0x4b52b0*/
  this->?[2] = *(_DWORD *)(a2 + 220); /*0x4b52b6*/
  this->?[0] = *(_DWORD *)(a2 + 224); /*0x4b52c3*/
  sub_4B5830((ObjectClass *)&this->?[1], (_DWORD *)(a2 + 228)); /*0x4b52c6*/
  this->flashing[1] = *(_DWORD *)(a2 + 244); /*0x4b52ce*/
  this->animation[0] = *(_DWORD *)(a2 + 248); /*0x4b52d4*/
  this->animation[1] = *(_DWORD *)(a2 + 252); /*0x4b52da*/
  this->animation[2] = *(_DWORD *)(a2 + 256); /*0x4b52e0*/
  LOBYTE(this->animation[3]) = *(_BYTE *)(a2 + 260); /*0x4b52e9*/
  BlitterList::CopyEntry((int)&this->animation[4], a2 + 264); /*0x4b52f0*/
  BlitterList::CopyEntry((int)this->idleActionTimer, a2 + 360); /*0x4b5302*/
  sub_4B56E0((int)&this->__pad_1C4[4], a2 + 456); /*0x4b5314*/
  this->owner = *(HouseClass **)(a2 + 540); /*0x4b531f*/
  this->cloakState = *(_DWORD *)(a2 + 544); /*0x4b532b*/
  LOBYTE(this->?[3]) = *(_BYTE *)(a2 + 72); /*0x4b5334*/
  this->?[4] = *(_DWORD *)(a2 + 76); /*0x4b5343*/
  sub_4B5780((int)this->?, a2 + 80); /*0x4b5346*/
  *(_DWORD *)&this->? = *(_DWORD *)(a2 + 116); /*0x4b534f*/
  this->? = *(_DWORD *)(a2 + 120); /*0x4b5355*/
  LOBYTE(this->?) = *(_BYTE *)(a2 + 124); /*0x4b535b*/
  BYTE1(this->?) = *(_BYTE *)(a2 + 125); /*0x4b5361*/
  *(_DWORD *)&this->? = *(_DWORD *)(a2 + 128); /*0x4b5367*/
  this->? = *(_BYTE *)(a2 + 132); /*0x4b536d*/
  this->? = *(AnimClass **)(a2 + 136); /*0x4b5373*/
  *(_DWORD *)&this->? = *(_DWORD *)(a2 + 140); /*0x4b5379*/
  this->? = *(_BYTE *)(a2 + 144); /*0x4b537f*/
  this->? = *(_DWORD *)(a2 + 148); /*0x4b5385*/
  *(_DWORD *)&this->? = *(_DWORD *)(a2 + 152); /*0x4b538b*/
  LOBYTE(this->?[0]) = *(_BYTE *)(a2 + 156); /*0x4b5391*/
  this->?[1] = *(_DWORD *)(a2 + 160); /*0x4b5397*/
  LOBYTE(this->?[2]) = *(_BYTE *)(a2 + 164); /*0x4b539d*/
  BYTE1(this->?[2]) = *(_BYTE *)(a2 + 165); /*0x4b53a3*/
  this->? = *(void **)(a2 + 168); /*0x4b53a9*/
  LOBYTE(this->?) = *(_BYTE *)(a2 + 172); /*0x4b53af*/
  (*(void (__thiscall **)(int *, TechnoClass *))(this->? + 132))(&this->?, this); /*0x4b53b7*/
  (*(void (__thiscall **)(int *, TechnoClass *))(this->?[0] + 132))(this->?, this); /*0x4b53c2*/
  return (int)this; /*0x4b521e*/
}



// ==== 0x004B53E0  EditClass::method_4B53E0  this=EditClass  sig=csp ====
int __thiscall sub_4B53E0(EditClass *this, int a2)
{
  int v3; // eax

  ControlClass::CtorFromData((ControlClass *)this, a2); /*0x4b53eb*/
  *(this + 11) = *(EditClass *)(a2 + 44); /*0x4b53f6*/
  *(this + 12) = *(EditClass *)(a2 + 48); /*0x4b53fc*/
  *(this + 13) = *(EditClass *)(a2 + 52); /*0x4b5402*/
  *(this + 14) = *(EditClass *)(a2 + 56); /*0x4b5408*/
  *(this + 15) = *(EditClass *)(a2 + 60); /*0x4b540e*/
  *(this + 16) = *(EditClass *)(a2 + 64); /*0x4b5414*/
  *(this + 17) = *(EditClass *)(a2 + 68); /*0x4b541a*/
  *this = (EditClass)&EditClass::`vftable'; /*0x4b541d*/
  *((_BYTE *)this + 72) = *(_BYTE *)(a2 + 72); /*0x4b5429*/
  *(this + 19) = *(EditClass *)(a2 + 76); /*0x4b5432*/
  ControlClass::CtorFromData((ControlClass *)this + 5, a2 + 80); /*0x4b5435*/
  *((_BYTE *)this + 124) = *(_BYTE *)(a2 + 124); /*0x4b5443*/
  *((_BYTE *)this + 125) = *(_BYTE *)(a2 + 125); /*0x4b5449*/
  *(this + 32) = *(EditClass *)(a2 + 128); /*0x4b544f*/
  *((_DWORD *)this + 20) = &ToggleClass::`vftable'; /*0x4b5452*/
  *((_BYTE *)this + 132) = *(_BYTE *)(a2 + 132); /*0x4b545c*/
  *(this + 34) = *(EditClass *)(a2 + 136); /*0x4b5462*/
  *(this + 35) = *(EditClass *)(a2 + 140); /*0x4b5468*/
  *((_BYTE *)this + 144) = *(_BYTE *)(a2 + 144); /*0x4b546e*/
  *(this + 37) = *(EditClass *)(a2 + 148); /*0x4b5474*/
  *(this + 38) = *(EditClass *)(a2 + 152); /*0x4b547a*/
  *((_BYTE *)this + 156) = *(_BYTE *)(a2 + 156); /*0x4b5480*/
  *(this + 40) = *(EditClass *)(a2 + 160); /*0x4b5486*/
  *((_BYTE *)this + 164) = *(_BYTE *)(a2 + 164); /*0x4b548c*/
  *((_BYTE *)this + 165) = *(_BYTE *)(a2 + 165); /*0x4b5492*/
  *(this + 42) = *(EditClass *)(a2 + 168); /*0x4b5498*/
  *((_BYTE *)this + 172) = *(_BYTE *)(a2 + 172); /*0x4b54a4*/
  *((_DWORD *)this + 20) = &ShapeButtonClass::`vftable'; /*0x4b54a9*/
  sub_557380((int)(this + 44), a2 + 176); /*0x4b54af*/
  v3 = *((_DWORD *)this + 44); /*0x4b54b4*/
  *this = (EditClass)&DropListClass::`vftable'; /*0x4b54b9*/
  (*(void (__thiscall **)(EditClass *, EditClass *))(v3 + 132))(this + 44, this); /*0x4b54bf*/
  (*(void (__thiscall **)(EditClass *, EditClass *))(*((_DWORD *)this + 20) + 132))(this + 20, this); /*0x4b54ca*/
  return (int)this; /*0x4b54d3*/
}



// ==== 0x004B54E0  DropListClass::RemoveItem  this=DropListClass  sig=csp ====
int __thiscall DropListClass::RemoveItem(DropListClass *this, int a2, int a3)
{
  Rect_Point::Set((GadgetClass *)this, a2, a3); /*0x4b54ef*/
  (*(void (__thiscall **)(char *, int, int))(this->q02C + 100))( /*0x4b550e*/
    (char *)this + 176,
    a2,
    a3 + *(__int16 *)(*((_DWORD *)this + 42) + 4));
  return (*(int (__thiscall **)(int *, int, int))(this->DropListClass_field_0x50 + 100))( /*0x4b5521*/
           &this->DropListClass_field_0x50,
           a2 + this->DropListClass_field_0x14,
           a3);
}



// ==== 0x004B5530  DropListClass::OnKeyDown  this=DropListClass  sig=csp ====
void __thiscall DropListClass::OnKeyDown(DropListClass *this, wchar_t *String1)
{
  int v3; // edi
  const wchar_t *v4; // eax

  if ( String1 ) /*0x4b553c*/
  {
    v3 = 0; /*0x4b5540*/
    if ( (*(int (__thiscall **)(DropListClass *))(*(_DWORD *)this->__pad_0 + 176))(this) > 0 ) /*0x4b554a*/
    {
      while ( 1 ) /*0x4b5557*/
      {
        v4 = (const wchar_t *)(*(int (__thiscall **)(char *, int))(this->q02C + 160))( /*0x4b5557*/
                                (char *)this + 176,
                                v3);
        if ( !_wcsicmp(String1, v4) ) /*0x4b555f*/
          break; /*0x4b555f*/
        if ( ++v3 >= (*(int (__thiscall **)(DropListClass *))(*(_DWORD *)this->__pad_0 + 176))(this) ) /*0x4b5578*/
          return; /*0x4b5578*/
      }
      (*(void (__thiscall **)(DropListClass *, int))(*(_DWORD *)this->__pad_0 + 172))(this, v3); /*0x4b5586*/
    }
  }
}



// ==== 0x004B55A0  EditClass::COMStub  this=EditClass  sig=csp ====
int __thiscall DropListClass::COMStub(EditClass *this)
{
  return *((_DWORD *)this + 13); /*0x4b55a3*/
}



// ==== 0x004B55B0  DropListClass::ScrollUp  this=DropListClass  sig=csp ====
int __thiscall DropListClass::ScrollUp(DropListClass *this)
{
  return (*(int (__thiscall **)(char *))(this->q02C + 148))((char *)this + 176);
}



// ==== 0x004B55D0  DropListClass::ScrollDown  this=DropListClass  sig=csp ====
int __thiscall DropListClass::ScrollDown(DropListClass *this, int a2)
{
  return (*(int (__thiscall **)(char *, int))(this->q02C + 160))((char *)this + 176, a2); /*0x4b55e7*/
}



// ==== 0x004B55F0  DropListClass::QueryInterface  this=DropListClass  sig=csp ====
_DWORD *__thiscall DropListClass::QueryInterface(DropListClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &DropListClass::`vftable'; /*0x4b55f9*/
  ListClass::Destruct((ListClass *)((char *)this + 176)); /*0x4b55ff*/
  ShapeButtonClass::Destructor((int)&this->DropListClass_field_0x50); /*0x4b5607*/
  DropListClass::Constructor(this); /*0x4b560e*/
  if ( (a2 & 1) != 0 ) /*0x4b5618*/
    __3_YAXPAX_Z(this); /*0x4b561b*/
  return this->__pad_0; /*0x4b5625*/
}



// ==== 0x004B5630  BlitterList::CopyEntry  this=BlitterList  sig=csp ====
int __thiscall sub_4B5630(int this, int a2)
{
  LinkedList::MoveNode((void *)this, (void *)a2); /*0x4b5639*/
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12); /*0x4b5641*/
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16); /*0x4b5647*/
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20); /*0x4b564d*/
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24); /*0x4b5653*/
  *(_BYTE *)(this + 28) = *(_BYTE *)(a2 + 28); /*0x4b5659*/
  *(_BYTE *)(this + 29) = *(_BYTE *)(a2 + 29); /*0x4b565f*/
  *(_BYTE *)(this + 30) = *(_BYTE *)(a2 + 30); /*0x4b5665*/
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32); /*0x4b566b*/
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 36); /*0x4b5671*/
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40); /*0x4b5677*/
  *(_BYTE *)(this + 44) = *(_BYTE *)(a2 + 44); /*0x4b567d*/
  *(_BYTE *)(this + 45) = *(_BYTE *)(a2 + 45); /*0x4b5683*/
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48); /*0x4b5689*/
  *(_BYTE *)(this + 52) = *(_BYTE *)(a2 + 52); /*0x4b568f*/
  *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56); /*0x4b5695*/
  *(_DWORD *)(this + 60) = *(_DWORD *)(a2 + 60); /*0x4b569b*/
  *(_BYTE *)(this + 64) = *(_BYTE *)(a2 + 64); /*0x4b56a1*/
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68); /*0x4b56a7*/
  *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72); /*0x4b56ad*/
  *(_BYTE *)(this + 76) = *(_BYTE *)(a2 + 76); /*0x4b56b3*/
  *(_DWORD *)(this + 80) = *(_DWORD *)(a2 + 80); /*0x4b56b9*/
  *(_BYTE *)(this + 84) = *(_BYTE *)(a2 + 84); /*0x4b56bf*/
  *(_BYTE *)(this + 85) = *(_BYTE *)(a2 + 85); /*0x4b56c5*/
  *(_DWORD *)(this + 88) = *(_DWORD *)(a2 + 88); /*0x4b56cb*/
  *(_BYTE *)(this + 92) = *(_BYTE *)(a2 + 92); /*0x4b56d1*/
  return this; /*0x4b56d6*/
}



// ==== 0x004B56E0  ObjectClass::method_4B56E0  this=ObjectClass  sig=csp ====
int __thiscall sub_4B56E0(int this, int a2)
{
  LinkedList::MoveNode((void *)this, (void *)a2); /*0x4b56e9*/
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12); /*0x4b56f1*/
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16); /*0x4b56f7*/
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20); /*0x4b56fd*/
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24); /*0x4b5703*/
  *(_BYTE *)(this + 28) = *(_BYTE *)(a2 + 28); /*0x4b5709*/
  *(_BYTE *)(this + 29) = *(_BYTE *)(a2 + 29); /*0x4b570f*/
  *(_BYTE *)(this + 30) = *(_BYTE *)(a2 + 30); /*0x4b5715*/
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32); /*0x4b571b*/
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 36); /*0x4b5721*/
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40); /*0x4b5727*/
  *(_BYTE *)(this + 44) = *(_BYTE *)(a2 + 44); /*0x4b572d*/
  *(_BYTE *)(this + 45) = *(_BYTE *)(a2 + 45); /*0x4b5733*/
  *(_BYTE *)(this + 46) = *(_BYTE *)(a2 + 46); /*0x4b5739*/
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48); /*0x4b573f*/
  *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52); /*0x4b5745*/
  *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56); /*0x4b574b*/
  *(_DWORD *)(this + 60) = *(_DWORD *)(a2 + 60); /*0x4b5751*/
  *(_DWORD *)(this + 64) = *(_DWORD *)(a2 + 64); /*0x4b5757*/
  *(_BYTE *)(this + 68) = *(_BYTE *)(a2 + 68); /*0x4b575d*/
  *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72); /*0x4b5763*/
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76); /*0x4b5769*/
  *(_DWORD *)(this + 80) = *(_DWORD *)(a2 + 80); /*0x4b576f*/
  return this; /*0x4b5774*/
}



// ==== 0x004B5780  ObjectClass::method_4B5780  this=ObjectClass  sig=csp ====
int __thiscall sub_4B5780(int this, int a2)
{
  LinkedList::MoveNode((void *)this, (void *)a2); /*0x4b5789*/
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12); /*0x4b5791*/
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16); /*0x4b5797*/
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20); /*0x4b579d*/
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24); /*0x4b57a3*/
  *(_BYTE *)(this + 28) = *(_BYTE *)(a2 + 28); /*0x4b57a9*/
  *(_BYTE *)(this + 29) = *(_BYTE *)(a2 + 29); /*0x4b57af*/
  *(_BYTE *)(this + 30) = *(_BYTE *)(a2 + 30); /*0x4b57b5*/
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32); /*0x4b57bb*/
  return this; /*0x4b57c0*/
}



// ==== 0x004B57D0  EditClass::QueryInterface  this=EditClass  sig=csp ====
_DWORD *__thiscall EditClass::QueryInterface(EditClass *this, char a2)
{
  DropListClass::Constructor((DropListClass *)this); /*0x4b57d3*/
  if ( (a2 & 1) != 0 ) /*0x4b57dd*/
    __3_YAXPAX_Z(this); /*0x4b57e0*/
  return this; /*0x4b57ea*/
}



// ==== 0x004B57F0  ShapeButtonClass::QueryInterface  this=ShapeButtonClass  sig=csp ====
void *__thiscall ShapeButtonClass_Destru::QueryInterface(ShapeButtonClass *this, char a2)
{
  ShapeButtonClass::Destructor((int)this); /*0x4b57f3*/
  if ( (a2 & 1) != 0 ) /*0x4b57fd*/
    __3_YAXPAX_Z(this); /*0x4b5800*/
  return this; /*0x4b580a*/
}



// ==== 0x004B5810  ToggleClass::QueryInterface  this=ToggleClass  sig=csp ====
_DWORD *__thiscall ToggleClass::QueryInterface(ToggleClass *this, char a2)
{
  GadgetClass::Dtor((GadgetClass *)this); /*0x4b5813*/
  if ( (a2 & 1) != 0 ) /*0x4b581d*/
    __3_YAXPAX_Z(this); /*0x4b5820*/
  return this->__pad_0; /*0x4b582a*/
}



// ==== 0x004B5830  ObjectClass::method_4B5830  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_4B5830(ObjectClass *this, _DWORD *a2)
{
  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  if ( this == (ObjectClass *)a2 ) /*0x4b583a*/
    return &this->AbstractClass; /*0x4b583a*/
  (*((void (__thiscall **)(ObjectClass *))this->AbstractClass + 3))(this); /*0x4b583e*/
  v3 = (void *)a2[2]; /*0x4b5841*/
  this->? = v3; /*0x4b5846*/
  if ( !v3 ) /*0x4b5849*/
  {
    this->? = 0; /*0x4b588a*/
    BYTE1(this->?) = 0; /*0x4b5891*/
    return &this->AbstractClass; /*0x4b5895*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (_DWORD)v3); /*0x4b5853*/
  this->? = v4; /*0x4b585b*/
  if ( !v4 ) /*0x4b5860*/
    return &this->AbstractClass; /*0x4b5860*/
  vtable2 = this->?; /*0x4b5862*/
  v6 = 0; /*0x4b5865*/
  BYTE1(this->?) = 1; /*0x4b5869*/
  if ( (int)vtable2 <= 0 ) /*0x4b586d*/
    return &this->AbstractClass; /*0x4b586d*/
  do /*0x4b5881*/
  {
    *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x4b5878*/
    ++v6; /*0x4b587e*/
  }
  while ( v6 < (int)this->? ); /*0x4b5881*/
  return &this->AbstractClass; /*0x4b5885*/
}



// ==== 0x004B58A0  sub_4B58A0  this=-  sig=ida-proto ====
void sub_4B58A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4b58ac*/
  dbl_8A0808 = Math::Sqrt(v0 + v0); /*0x4b58be*/
}



// ==== 0x004B58D0  sub_4B58D0  this=-  sig=ida-proto ====
void sub_4B58D0()
{
  dbl_8A0858 = dbl_8A0808 / 60.0; /*0x4b58dc*/
}



// ==== 0x004B58F0  sub_4B58F0  this=-  sig=ida-proto ====
void sub_4B58F0()
{
  dbl_8A0840 = 1.0 / dbl_8A0858; /*0x4b58fc*/
}



// ==== 0x004B5910  sub_4B5910  this=-  sig=ida-proto ====
void sub_4B5910()
{
  dbl_8A0838 = 0.0174532925199433 * 45.0; /*0x4b591c*/
}



// ==== 0x004B5930  sub_4B5930  this=-  sig=ida-proto ====
void sub_4B5930()
{
  dbl_8A0810 = 0.0174532925199433 * 60.0; /*0x4b593c*/
}



// ==== 0x004B5950  sub_4B5950  this=-  sig=ida-proto ====
void sub_4B5950()
{
  dbl_8A07E8 = 0.0174532925199433 * 90.0; /*0x4b595c*/
}



// ==== 0x004B5970  sub_4B5970  this=-  sig=ida-proto ====
__int64 sub_4B5970()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A07E8 - dbl_8A0810); /*0x4b5982*/
  result = Math::RoundToInt(v0 * dbl_8A0808 * 0.5); /*0x4b5996*/
  dword_8A0860 = result; /*0x4b599b*/
  return result; /*0x4b59a0*/
}



// ==== 0x004B59B0  sub_4B59B0  this=-  sig=ida-proto ====
void sub_4B59B0()
{
  dbl_8A0818 = Math::ArcTan((double)dword_8A0860 * 0.00390625); /*0x4b59c7*/
}



// ==== 0x004B59E0  sub_4B59E0  this=-  sig=ida-proto ====
void sub_4B59E0()
{
  dbl_8A0830 = Math::ArcTan((double)(2 * dword_8A0860) / dbl_8A0808); /*0x4b5a02*/
}



// ==== 0x004B5A10  sub_4B5A10  this=-  sig=ida-proto ====
__int64 sub_4B5A10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0860) + 0.5); /*0x4b5a2b*/
  dword_8A0854 = result; /*0x4b5a30*/
  return result; /*0x4b5a36*/
}



// ==== 0x004B5A40  sub_4B5A40  this=-  sig=ida-proto ====
int sub_4B5A40()
{
  word_8A0800 = 0; /*0x4b5a42*/
  word_8A0802 = 0; /*0x4b5a48*/
  return 0; /*0x4b5a4e*/
}



// ==== 0x004B5A50  sub_4B5A50  this=-  sig=ida-proto ====
int sub_4B5A50()
{
  dword_8A0820 = 0; /*0x4b5a52*/
  dword_8A0824 = 0; /*0x4b5a57*/
  dword_8A0828 = 0; /*0x4b5a5c*/
  return 0; /*0x4b5a61*/
}



// ==== 0x004B5A70  sub_4B5A70  this=-  sig=ida-proto ====
int sub_4B5A70()
{
  dword_8A0850 = 0; /*0x4b5a75*/
  dword_8A0848 = 128; /*0x4b5a7f*/
  dword_8A084C = 128; /*0x4b5a84*/
  return 128; /*0x4b5a89*/
}



// ==== 0x004B5A90  sub_4B5A90  this=-  sig=ida-proto ====
int sub_4B5A90()
{
  dword_8A07F0 = 0; /*0x4b5a92*/
  dword_8A07F4 = 0; /*0x4b5a97*/
  dword_8A07F8 = 0; /*0x4b5a9c*/
  dword_8A07FC = 0; /*0x4b5aa1*/
  return 0; /*0x4b5aa6*/
}



// ==== 0x004B5AB0  DropPodLocomotionClass::SmallFunc_4B5AB0  this=DropPodLocomotionClass  sig=csp ====
int __thiscall SmallFunc_4B5AB0(DropPodLocomotionClass *this)
{
  LocomotionClass::Init((LocomotionClass *)this); /*0x4b5ab3*/
  this->IsOutOfMap = 0; /*0x4b5abd*/
  this->DestinationCoords[0] = dword_8A0820; /*0x4b5ac6*/
  this->DestinationCoords[1] = dword_8A0824; /*0x4b5ace*/
  this->DestinationCoords[2] = dword_8A0828; /*0x4b5ad7*/
  this->Piggybackee = 0; /*0x4b5ada*/
  *(_DWORD *)this->LocomotionClass = &DropPodLocomotionClass::`vftable'; /*0x4b5add*/
  *(_DWORD *)&this->LocomotionClass[4] = &DropPodLocomotionClass::`vftable'; /*0x4b5ae3*/
  *(_DWORD *)this->__pad_18 = &DropPodLocomotionClass::`vftable'; /*0x4b5aea*/
  return (int)this->LocomotionClass; /*0x4b5af3*/
}



// ==== 0x004B5B30  JumpjetLocomotionClass::StubReturnTrue_1  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::StubReturnTrue_1(JumpjetLocomotionClass *this)
{
  return 1; /*0x4b5b32*/
}



// ==== 0x004B5B40  JumpjetLocomotionClass::GetSpeedCoordinate  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetSpeedCoordinate(JumpjetLocomotionClass *this, _DWORD *a2)
{
  float Climb; // edx
  float Crash; // eax

  Climb = this->Climb; /*0x4b5b4d*/
  Crash = this->Crash; /*0x4b5b50*/
  *a2 = this->Speed; /*0x4b5b55*/
  *((float *)a2 + 1) = Climb; /*0x4b5b57*/
  *((float *)a2 + 2) = Crash; /*0x4b5b5a*/
  return a2; /*0x4b5b5f*/
}



// ==== 0x004B5B70  DropPodLocomotionClass::ILoco_Process  this=DropPodLocomotionClass  sig=csp ====
char __stdcall DroppodLocomotionClass::ILoco_Process(DropPodLocomotionClass *this)
{
  double v1; // st7
  FootClass *Owner; // ecx
  int v4; // esi
  int v5; // eax
  double v6; // rax
  double v7; // st7
  int v8; // eax
  FootClass *v9; // ecx
  int v10; // eax
  FootClass *v11; // esi
  char *v12; // ebx
  int *locomotor; // ebp
  AnimClass *v14; // esi
  void *v15; // eax
  AnimClass *v17; // eax
  AnimClass *v18; // eax
  AnimClass *v19; // eax
  _DWORD *v20; // esi
  AnimClass *v21; // ebp
  int Index; // eax
  CellClass *v23; // eax
  int ClosestObjectCell; // eax
  int *v25; // eax
  unsigned int v26; // ebp
  unsigned int v27; // eax
  AnimClass *v28; // edi
  void *WarheadVersusMultiplier; // eax
  double v30; // [esp-8h] [ebp-48h]
  void *v31; // [esp-8h] [ebp-48h]
  void *v32; // [esp-8h] [ebp-48h]
  double v33; // [esp+10h] [ebp-30h] BYREF
  int v34[2]; // [esp+1Ch] [ebp-24h] BYREF
  int v35; // [esp+24h] [ebp-1Ch]
  int v36; // [esp+28h] [ebp-18h] BYREF
  int v37; // [esp+2Ch] [ebp-14h]
  int v38; // [esp+30h] [ebp-10h]
  int v39[3]; // [esp+34h] [ebp-Ch] BYREF
  DropPodLocomotionClass *thisa; // [esp+44h] [ebp+4h]

  Owner = this->?; /*0x4b5b7b*/
  v36 = Owner->?[0]; /*0x4b5b88*/
  v37 = Owner->?[1]; /*0x4b5b8f*/
  v4 = Owner->?[2]; /*0x4b5b93*/
  v39[0] = v36; /*0x4b5b96*/
  v38 = v4; /*0x4b5b9a*/
  v39[1] = v37; /*0x4b5b9e*/
  v39[2] = v4; /*0x4b5ba2*/
  thisa = (DropPodLocomotionClass *)((*((int (__thiscall **)(FootClass *))Owner->TechnoClass + 114))(Owner) / 10 + 2); /*0x4b5bc9*/
  if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1452) > (int)thisa ) /*0x4b5bd5*/
    thisa = *(DropPodLocomotionClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1452); /*0x4b5bd7*/
  v30 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1456); /*0x4b5bf3*/
  if ( !this->__pad_18[0] ) /*0x4b5bdb*/
    *(double *)v34 = (double)v36; /*0x4b5c1c*/
  v33 = (double)(int)thisa; /*0x4b5bf4*/
  Math::ArcTan2(v30); /*0x4b5bf8*/
  LOWORD(v5) = Math::RoundToInt(v1); /*0x4b5c38*/
  v36 = v5; /*0x4b5c41*/
  v6 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1456); /*0x4b5c50*/
  *(double *)v34 = (double)v38; /*0x4b5c56*/
  Math::SinCos(v6); /*0x4b5c5c*/
  v7 = *(double *)v34 - v1 * v33; /*0x4b5c68*/
  LOWORD(v8) = Math::RoundToInt(v7); /*0x4b5c6c*/
  v9 = this->?; /*0x4b5c71*/
  v38 = v8; /*0x4b5c74*/
  v10 = (*((int (__thiscall **)(FootClass *))v9->TechnoClass + 114))(v9); /*0x4b5c7a*/
  v11 = this->?; /*0x4b5c80*/
  if ( v10 > 0 ) /*0x4b5c87*/
  {
    (*((void (__thiscall **)(FootClass *, int *))v11->TechnoClass + 109))(v11, &v36); /*0x4b5eaa*/
    v20 = *(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1444); /*0x4b5eb6*/
    if ( v20 ) /*0x4b5ebe*/
    {
      if ( !(*(_DWORD *)&stru_A8EB00.?[416] % 6) ) /*0x4b5ecf*/
      {
        v21 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b5edf*/
        if ( v21 ) /*0x4b5ee6*/
        {
          Index = AnimTypeClass::FindIndex(&stru_820320); /*0x4b5eed*/
          AnimClass::ctor(v21, *(void **)(FootClass_Array.?[3] + 4 * Index), v39, 0, 1, (void *)0x600, 0, 0); /*0x4b5f0f*/
        }
      }
      if ( !(*(_DWORD *)&stru_A8EB00.?[416] % 3) ) /*0x4b5f1f*/
      {
        v33 = 0.0; /*0x4b5f39*/
        v23 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &this->IsOutOfMap); /*0x4b5f41*/
        ClosestObjectCell = Object::FindClosestObjectCell((Object *)v23, &v33, 0, 0); /*0x4b5f48*/
        if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?->?, ClosestObjectCell) ) /*0x4b5f57*/
        {
          v25 = RandomCoordScatter((int *)&v33, (int *)&this->IsOutOfMap, v7, 85, 0); /*0x4b5f6d*/
          v26 = v20[51]; /*0x4b5f74*/
          v34[0] = *v25; /*0x4b5f7a*/
          v34[1] = v25[1]; /*0x4b5f86*/
          v35 = v25[2]; /*0x4b5f8d*/
          v27 = Random::State(&Randomizer_Global); /*0x4b5f91*/
          StartAudioControllerAt(*(_DWORD *)(v20[48] + 4 * (v27 % v26)), &v36, 0); /*0x4b5fa8*/
          PlaySoundEffectAt(v34, 2 * v20[41], &this->?->TechnoClass, v20[43], 1, 0); /*0x4b5fc7*/
          v28 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b5fd6*/
          if ( v28 ) /*0x4b5fdd*/
          {
            v32 = (void *)Return::HRESULT_Fail(v34[0], v34[1], v35); /*0x4b5ffe*/
            WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier(2 * v20[41], v20[43], 0, v34); /*0x4b6020*/
            AnimClass::ctor(v28, WarheadVersusMultiplier, v34, 0, 1, (void *)0x2600, v32, 0); /*0x4b6028*/
          }
        }
      }
    }
    return 1; /*0x4b6030*/
  }
  else
  {
    (*((void (__thiscall **)(FootClass *, _DWORD))v11->TechnoClass + 115))(v11, 0); /*0x4b5c92*/
    v36 = v11->?[0]; /*0x4b5ca4*/
    v37 = v11->?[1]; /*0x4b5cab*/
    v38 = v11->?[2]; /*0x4b5cb2*/
    (*((void (__thiscall **)(FootClass *))v11->TechnoClass + 53))(v11); /*0x4b5cba*/
    v12 = (char *)this - 4; /*0x4b5cc3*/
    (*(void (__stdcall **)(char *))(*((_DWORD *)this - 1) + 4))((char *)this - 4); /*0x4b5cc7*/
    locomotor = this->?->locomotor; /*0x4b5ccd*/
    if ( *locomotor ) /*0x4b5cd3*/
      (*(void (__stdcall **)(int))(*(_DWORD *)*locomotor + 8))(*locomotor); /*0x4b5cdd*/
    *locomotor = 0; /*0x4b5ce3*/
    (*(void (__stdcall **)(int *, int *))(this->? + 16))(&this->?, locomotor); /*0x4b5cee*/
    if ( (*((unsigned __int8 (__thiscall **)(FootClass *, int *, _DWORD))v11->TechnoClass + 54))(v11, &v36, 0) ) /*0x4b5cfc*/
    {
      v17 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b5dae*/
      if ( v17 ) /*0x4b5db8*/
        AnimClass::ctor( /*0x4b5dd8*/
          v17,
          *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 76),
          &v36,
          0,
          1,
          (void *)0x600,
          0,
          0);
      if ( this->__pad_18[0] ) /*0x4b5ddd*/
      {
        v18 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b5de9*/
        if ( v18 ) /*0x4b5df3*/
          AnimClass::ctor( /*0x4b5e16*/
            v18,
            *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 264) + 4),
            &v36,
            0,
            1,
            (void *)0x600,
            0,
            0);
      }
      else
      {
        v19 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b5e18*/
        if ( v19 ) /*0x4b5e22*/
          AnimClass::ctor( /*0x4b5e47*/
            v19,
            **(void ***)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 264),
            &v36,
            0,
            1,
            (void *)0x600,
            0,
            0);
      }
      (*((void (__thiscall **)(FootClass *, int))v11->TechnoClass + 73))(v11, 1); /*0x4b5e52*/
      (*((void (__thiscall **)(FootClass *, _DWORD))v11->TechnoClass + 115))(v11, 0); /*0x4b5e5e*/
      (*((void (__thiscall **)(FootClass *, _DWORD, int))v11->TechnoClass + 289))(v11, 0, 1); /*0x4b5e6c*/
      (*((void (__thiscall **)(FootClass *))v11->TechnoClass + 123))(v11); /*0x4b5e76*/
      (*((void (__thiscall **)(FootClass *, int *, _DWORD, _DWORD))v11->TechnoClass + 93))(v11, &dword_8A0820, 0, 0); /*0x4b5e89*/
    }
    else
    {
      PlaySoundEffectAt( /*0x4b5d28*/
        &v36,
        100,
        &this->?->TechnoClass,
        *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
        1,
        0);
      v14 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4b5d37*/
      if ( v14 ) /*0x4b5d3e*/
      {
        v31 = (void *)Return::HRESULT_Fail(v36, v37, v38); /*0x4b5d64*/
        v15 = (void *)GetWarheadVersusMultiplier( /*0x4b5d8a*/
                        100,
                        *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
                        0,
                        &v36);
        AnimClass::ctor(v14, v15, &v36, 0, 1, (void *)0x2600, v31, 0); /*0x4b5d92*/
        (*(void (__stdcall **)(char *))(*(_DWORD *)v12 + 8))((char *)this - 4); /*0x4b5d9a*/
        return 1; /*0x4b5da6*/
      }
    }
    (*(void (__stdcall **)(char *))(*(_DWORD *)v12 + 8))((char *)this - 4); /*0x4b5e92*/
    return 1; /*0x4b5e95*/
  }
}



// ==== 0x004B6040  DropPodLocomotionClass::UpdateMovementPosition  this=DropPodLocomotionClass  sig=csp ====
void **__stdcall JumpjetLocomotionClass::UpdateMovementPosition(
        DropPodLocomotionClass *this,
        double VeteranCombat_low,
        int a3)
{
  double v3; // st7
  DropPodLocomotionClass *v4; // edi
  void **result; // eax
  int v7; // edx
  int v9; // eax
  int v11; // eax
  char v12; // al
  FootClass *Owner; // ecx
  FootClass *v14; // ecx
  double v15; // [esp-Ch] [ebp-28h]
  char *p_IsOutOfMap; // [esp-8h] [ebp-24h]
  double v17; // [esp-8h] [ebp-24h]
  int v19[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = this; /*0x4b604b*/
  result = *(void ***)&this->IsOutOfMap; /*0x4b604f*/
  _ESI = &this->IsOutOfMap; /*0x4b6052*/
  if ( result == (void **)dword_8A0820 ) /*0x4b6057*/
  {
    result = (void **)dword_8A0824; /*0x4b6060*/
    if ( this->DestinationCoords[0] == dword_8A0824 ) /*0x4b6067*/
    {
      result = (void **)dword_8A0828; /*0x4b6070*/
      if ( this->DestinationCoords[1] == dword_8A0828 ) /*0x4b6077*/
      {
        v7 = a3; /*0x4b6086*/
        p_IsOutOfMap = &this->IsOutOfMap; /*0x4b608c*/
        *(double *)_ESI = VeteranCombat_low; /*0x4b608d*/
        *((_DWORD *)_ESI + 2) = v7; /*0x4b6097*/
        v4->DestinationCoords[1] = Cell::GetGroundHeight(p_IsOutOfMap); /*0x4b609f*/
        v19[0] = *(_DWORD *)_ESI; /*0x4b60a6*/
        v19[1] = *((_DWORD *)_ESI + 1); /*0x4b60ad*/
        _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4b60b4*/
        v19[2] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1448) + *((_DWORD *)_ESI + 2); /*0x4b60c3*/
        __asm { fild dword ptr [eax+5A8h] } /*0x4b60cd*/
        v15 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1456); /*0x4b60da*/
        __asm { fstp [esp+28h+VeteranCombat_low] } /*0x4b60db*/
        Math::Sin(v15); /*0x4b60df*/
        __asm { fdivr [esp+28h+VeteranCombat_low] } /*0x4b60e4*/
        __asm { fiadd [esp+20h+var_C] }
        LOWORD(v9) = Math::RoundToInt(v3); /*0x4b60ef*/
        v19[0] = v9; /*0x4b60f4*/
        if ( !(unsigned __int8)IsCoordVisibleMap((ObjectClass *)&stru_87F5F0.__pad_58[416], v19) ) /*0x4b6102*/
        {
          v4->__pad_18[0] = 1; /*0x4b610c*/
          _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4b6110*/
          __asm { fild dword ptr [esi] } /*0x4b6115*/
          v17 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1456); /*0x4b6124*/
          __asm /*0x4b6125*/
          {
            fstp [esp+24h+var_14]
            fild dword ptr [eax+5A8h]
            fstp [esp+24h+VeteranCombat_low]
          }
          Math::Sin(v17); /*0x4b6133*/
          __asm { fdivr [esp+24h+VeteranCombat_low] } /*0x4b6138*/
          __asm { fsubr [esp+1Ch+var_14] }
          LOWORD(v11) = Math::RoundToInt(v3); /*0x4b6143*/
          v19[0] = v11; /*0x4b6148*/
        }
        (*((void (__thiscall **)(FootClass *, int *))v4->?->TechnoClass + 109))(v4->?, v19); /*0x4b6156*/
        v12 = (*((int (__thiscall **)(FootClass *, int *, int))v4->?->TechnoClass + 54))(v4->?, v19, 128); /*0x4b616b*/
        Owner = v4->?; /*0x4b6171*/
        if ( v12 ) /*0x4b6176*/
        {
          (*((void (__thiscall **)(FootClass *, int *))Owner->TechnoClass + 109))(Owner, v19); /*0x4b617f*/
          v14 = v4->?; /*0x4b6185*/
          LOWORD(this) = 0x8000; /*0x4b6193*/
          FacingClass::Set_SyncLog((char *)v14->?, &this); /*0x4b619a*/
          result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4b61a4*/
          if ( result ) /*0x4b61ae*/
            return AnimClass::ctor( /*0x4b61d1*/
                     (AnimClass *)result,
                     *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 852),
                     v19,
                     0,
                     1,
                     (void *)0x600,
                     0,
                     0);
        }
        else
        {
          return (*((void **(__thiscall **)(FootClass *, int *, int))Owner->TechnoClass + 54))(Owner, v19, 128); /*0x4b61ea*/
        }
      }
    }
  }
  return result; /*0x4b61d6*/
}



// ==== 0x004B6200  DropPodLocomotionClass::ddtor  this=DropPodLocomotionClass  sig=csp ====
int __stdcall DropPodLocomotionClass::ddtor(DropPodLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x4b6206*/
    return -2147467261; /*0x4b6208*/
  *(IID *)a2 = g_CLSID_DriveLocomotion; /*0x4b6216*/
  a2[3] = unk_7E9A7C; /*0x4b6230*/
  return 0; /*0x4b620d*/
}



// ==== 0x004B6240  DropPodLocomotionClass::BeginMove  this=DropPodLocomotionClass  sig=csp ====
int __stdcall DropPodLocomotionClass::BeginMove(DropPodLocomotionClass *this, int *pStm)
{
  int *v2; // edi
  int v3; // ebx
  ILocomotion *Piggybackee; // eax
  LPVOID *p_Piggybackee; // esi

  v2 = pStm; /*0x4b6247*/
  v3 = SwizzleManager::SaveLoad((int *)this->LocomotionClass, pStm); /*0x4b6252*/
  if ( v3 < 0 ) /*0x4b6256*/
    return v3; /*0x4b6256*/
  if ( this ) /*0x4b625a*/
  {
    this->Piggybackee = 0; /*0x4b625c*/
    *(_DWORD *)this->LocomotionClass = &DropPodLocomotionClass::`vftable'; /*0x4b6263*/
    *(_DWORD *)&this->LocomotionClass[4] = &DropPodLocomotionClass::`vftable'; /*0x4b6269*/
    *(_DWORD *)this->__pad_18 = &DropPodLocomotionClass::`vftable'; /*0x4b6270*/
  }
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(*v2 + 12))(v2, &pStm, 1, 0); /*0x4b6283*/
  if ( !(_BYTE)pStm ) /*0x4b628c*/
    return v3; /*0x4b62b8*/
  Piggybackee = this->Piggybackee; /*0x4b628e*/
  p_Piggybackee = (LPVOID *)&this->Piggybackee; /*0x4b6291*/
  if ( Piggybackee ) /*0x4b6296*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x4b629b*/
  *p_Piggybackee = 0; /*0x4b62a5*/
  return OleLoadFromStream((LPSTREAM)v2, &IID_ILocomotion, p_Piggybackee); /*0x4b62b1*/
}



// ==== 0x004B62C0  DropPodLocomotionClass::UpdateMovement  this=DropPodLocomotionClass  sig=csp ====
int __stdcall DropPodLocomotionClass::UpdateMovement(DropPodLocomotionClass *this, int *pPStm, int a3)
{
  IStream *v3; // esi
  DropPodLocomotionClass *v4; // edi
  int result; // eax
  int v6; // ecx
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v11; // edx

  v3 = (IStream *)pPStm; /*0x4b62c5*/
  v4 = this; /*0x4b62ca*/
  result = LoadIPersistStream((LocomotionClass *)this, pPStm, a3); /*0x4b62d1*/
  if ( result >= 0 ) /*0x4b62d8*/
  {
    if ( v4->Piggybackee ) /*0x4b62de*/
    {
      v6 = *(_DWORD *)v3->__pad_0; /*0x4b62e9*/
      LOBYTE(a3) = 1; /*0x4b62f5*/
      (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x4b62fa*/
      Piggybackee = v4->Piggybackee; /*0x4b62fd*/
      pPStm = 0; /*0x4b6300*/
      if ( Piggybackee ) /*0x4b630a*/
      {
        v8 = (**(int (__stdcall ***)(ILocomotion *, void *, DropPodLocomotionClass **))Piggybackee)( /*0x4b631b*/
               Piggybackee,
               &unk_820270,
               &this);
        if ( v8 >= 0 ) /*0x4b631f*/
        {
          v9 = (int *)this; /*0x4b6339*/
          if ( pPStm ) /*0x4b633f*/
            (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x4b6344*/
          pPStm = v9; /*0x4b6347*/
        }
        else
        {
          Function::Method_4B4D60((int *)&pPStm); /*0x4b6325*/
          pPStm = 0; /*0x4b632a*/
        }
        if ( v8 < 0 && v8 != -2147467262 ) /*0x4b6356*/
          WinAPI::Wrapper(v8); /*0x4b6359*/
      }
      v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x4b636a*/
      if ( pPStm ) /*0x4b6372*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x4b6377*/
      return v10; /*0x4b637a*/
    }
    else
    {
      v11 = *(_DWORD *)v3->__pad_0; /*0x4b6381*/
      LOBYTE(a3) = 0; /*0x4b638d*/
      return (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v11 + 16))(v3, &a3, 1, 0); /*0x4b6392*/
    }
  }
  return result; /*0x4b637c*/
}



// ==== 0x004B63A0  DropPodLocomotionClass::Stub6  this=DropPodLocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub6(DropPodLocomotionClass *this)
{
  ; /*0x4b63a0*/
}



// ==== 0x004B63B0  JumpjetLocomotionClass::StubReturnZero_3  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_3(JumpjetLocomotionClass *this, int a2)
{
  if ( !a2 ) /*0x4b63b6*/
    return -2147467261; /*0x4b63b8*/
  if ( this->? ) /*0x4b63c4*/
    return -2147467259; /*0x4b63eb*/
  this->? = a2; /*0x4b63d2*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x4b63d8*/
  return 0; /*0x4b63bd*/
}



// ==== 0x004B6400  JumpjetLocomotionClass::StubReturnZero_4  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_4(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int RefCount; // eax

  if ( !a2 ) /*0x4b6406*/
    return -2147467261; /*0x4b6408*/
  RefCount = this->?; /*0x4b6414*/
  if ( !RefCount ) /*0x4b6419*/
    return 1; /*0x4b6429*/
  *a2 = RefCount; /*0x4b641b*/
  this->? = 0; /*0x4b641d*/
  return 0; /*0x4b640d*/
}



// ==== 0x004B6440  JumpjetLocomotionClass::CheckBaseClassState  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::CheckBaseClassState(JumpjetLocomotionClass *this)
{
  return !(*(unsigned __int8 (__stdcall **)(char *))(*((_DWORD *)this - 5) + 16))((char *)this - 20) && this->?; /*0x4b645c*/
}



// ==== 0x004B6470  DropPodLocomotionClass::QueryInterface  this=DropPodLocomotionClass  sig=csp ====
int __stdcall DropPodLocomotionClass::QueryInterface(DropPodLocomotionClass *this, const void *a2, int *a3)
{
  int result; // eax
  char *pad_18; // eax

  result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x4b6482*/
  if ( result == -2147467262 ) /*0x4b648c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x4b649b*/
    {
      if ( this ) /*0x4b64a2*/
        pad_18 = this->__pad_18; /*0x4b64a4*/
      else
        pad_18 = 0; /*0x4b64a9*/
      *a3 = (int)pad_18; /*0x4b64ab*/
    }
    if ( *a3 ) /*0x4b64ae*/
    {
      (*(void (__stdcall **)(DropPodLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 4))(this); /*0x4b64c2*/
      return 0; /*0x4b64c5*/
    }
    else
    {
      return -2147467262; /*0x4b64b6*/
    }
  }
  return result; /*0x4b64b4*/
}



// ==== 0x004B64D0  DropPodLocomotionClass::SmallStub_4B64D0  this=DropPodLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmallStub_4B64D0(DropPodLocomotionClass *this)
{
  return 3; /*0x4b64d5*/
}



// ==== 0x004B64E0  JumpjetLocomotionClass::LoadLocomotionFromStream_0  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::LoadLocomotionFromStream_0(JumpjetLocomotionClass *this, _DWORD *pad_0)
{
  _DWORD *v2; // ebp
  int *p_RefCount; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  JumpjetLocomotionClass *v8; // eax
  JumpjetLocomotionClass *v9; // edi

  v2 = pad_0; /*0x4b64e1*/
  if ( !pad_0 ) /*0x4b64e8*/
    return -2147467261; /*0x4b64f1*/
  p_RefCount = &this->?; /*0x4b64fb*/
  if ( this->? ) /*0x4b64f8*/
  {
    this = 0; /*0x4b6504*/
    v5 = StreamClass::Set2((StreamClass *)&this, p_RefCount); /*0x4b6515*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x4b6523*/
      WinAPI::Wrapper(v5); /*0x4b6526*/
    if ( !this ) /*0x4b6531*/
      return -2147467259; /*0x4b653a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(this->LocomotionClass[0] + 12))(this, v2); /*0x4b6544*/
    if ( this ) /*0x4b654c*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 8))(this); /*0x4b6555*/
      return v6; /*0x4b655c*/
    }
  }
  else
  {
    pad_0 = 0; /*0x4b6562*/
    if ( this == (JumpjetLocomotionClass *)24 ) /*0x4b656c*/
      return -2147467259; /*0x4b656c*/
    v7 = (**((int (__stdcall ***)(char *, void *, JumpjetLocomotionClass **))this - 6))( /*0x4b657d*/
           (char *)this - 24,
           &unk_818858,
           &this);
    if ( v7 >= 0 ) /*0x4b6581*/
    {
      v9 = this; /*0x4b6595*/
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x4b659d*/
      v8 = v9; /*0x4b65a2*/
      pad_0 = v9->LocomotionClass; /*0x4b65a5*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x4b6587*/
      v8 = 0; /*0x4b658c*/
      pad_0 = 0; /*0x4b658e*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x4b65b3*/
      WinAPI::Wrapper(v7); /*0x4b65b6*/
    if ( !v8 ) /*0x4b65c1*/
      return -2147467259; /*0x4b65ca*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(v8->LocomotionClass[0] + 12))(v8, v2); /*0x4b65d4*/
    if ( pad_0 ) /*0x4b65dc*/
      (*(void (__stdcall **)(_DWORD *))(*pad_0 + 8))(pad_0); /*0x4b65e1*/
  }
  return v6; /*0x4b64ea*/
}



// ==== 0x004B65F0  DropPodLocomotionClass::ShortFunc_4B65F0  this=DropPodLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::ShortFunc_4B65F0(DropPodLocomotionClass *this)
{
  return this->__pad_18[0] != 0; /*0x4b65fe*/
}



// ==== 0x004B6610  LocomotionClass::Thunk_VtableDispatch4  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::Thunk_VtableDispatch4(LocomotionClass *this)
{
  return (*(int (__stdcall **)(LocomotionClass *))(*(_DWORD *)this->ILocomotion + 16))(this); /*0x4b661a*/
}



// ==== 0x004B6620  LocomotionClass::Stub7  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub7(LocomotionClass *this, int a2)
{
  ; /*0x4b6620*/
}



// ==== 0x004B6630  LocomotionClass::MissionStub8  this=LocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::MissionStub8(LocomotionClass *this, int a2, int a3, int a4)
{
  return 0; /*0x4b6632*/
}



// ==== 0x004B6640  LocomotionClass::MissionStub9  this=LocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::MissionStub9(LocomotionClass *this)
{
  return 0; /*0x4b6642*/
}



// ==== 0x004B6650  LocomotionClass::Stub8  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub8(LocomotionClass *this)
{
  ; /*0x4b6650*/
}



// ==== 0x004B6660  LocomotionClass::Stub9  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub9(LocomotionClass *this)
{
  ; /*0x4b6660*/
}



// ==== 0x004B6670  LocomotionClass::CheckState3  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckState3(LocomotionClass *this)
{
  return -1; /*0x4b6673*/
}



// ==== 0x004B6680  LocomotionClass::CheckState4  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckState4(LocomotionClass *this)
{
  return -1; /*0x4b6683*/
}



// ==== 0x004B6690  LocomotionClass::CheckState5  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckState5(LocomotionClass *this)
{
  return -1; /*0x4b6693*/
}



// ==== 0x004B66A0  DropPodLocomotionClass::AddRef  this=DropPodLocomotionClass  sig=csp ====
LONG __stdcall DropPodLocomotionClass::AddRef(DropPodLocomotionClass *this)
{
  return COM::AddRef((LocomotionClass *)this); /*0x4b66aa*/
}



// ==== 0x004B66B0  DropPodLocomotionClass::Release  this=DropPodLocomotionClass  sig=csp ====
LONG __stdcall DropPodLocomotionClass::Release(DropPodLocomotionClass *this)
{
  return COM::ReleaseRef((LocomotionClass *)this); /*0x4b66ba*/
}



// ==== 0x004B66C0  JumpjetLocomotionClass::ShortFunc_4B66C0  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_4B66C0(int a1)
{
  return *(_DWORD *)(a1 + 20) != 0; /*0x4b66ce*/
}



// ==== 0x004B66E0  DropPodLocomotionClass::StubReturn48  this=DropPodLocomotionClass  sig=csp ====
int DropPodLocomotionClass::StubReturn48(DropPodLocomotionClass *this)
{
  return 48; /*0x4b66e5*/
}



// ==== 0x004B66F0  DropPodLocomotionClass::ProcessMove  this=DropPodLocomotionClass  sig=csp ====
_DWORD *__thiscall DropPodLocomotionClass::ProcessMove(DropPodLocomotionClass *this, char a2)
{
  ILocomotion *Piggybackee; // eax

  *(_DWORD *)this->LocomotionClass = &DropPodLocomotionClass::`vftable'; /*0x4b66f3*/
  *(_DWORD *)&this->LocomotionClass[4] = &DropPodLocomotionClass::`vftable'; /*0x4b66f9*/
  *(_DWORD *)this->__pad_18 = &DropPodLocomotionClass::`vftable'; /*0x4b6700*/
  Piggybackee = this->Piggybackee; /*0x4b6707*/
  if ( Piggybackee ) /*0x4b670c*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x4b6711*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x4b6716*/
  if ( (a2 & 1) != 0 ) /*0x4b6720*/
    __3_YAXPAX_Z(this); /*0x4b6723*/
  return this->LocomotionClass; /*0x4b672d*/
}



// ==== 0x004B6740  JumpjetLocomotionClass::SmallStub_4B6740  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4B6740(int a1, const void *a2, int *a3)
{
  return DropPodLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}



// ==== 0x004B6750  JumpjetLocomotionClass::SmallStub_4B6750  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_4B6750(int a1)
{
  return DropPodLocomotionClass::AddRef(a1 - 4);
}



// ==== 0x004B6760  JumpjetLocomotionClass::SmallStub_4B6760  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_4B6760(int a1)
{
  return DropPodLocomotionClass::Release((volatile LONG *)(a1 - 4));
}



// ==== 0x004B6770  JumpjetLocomotionClass::SmallStub_4B6770  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4B6770(int a1, const void *a2, int *a3)
{
  return DropPodLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}



// ==== 0x004B6780  JumpjetLocomotionClass::SmallStub_4B6780  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_4B6780(int a1)
{
  return DropPodLocomotionClass::AddRef(a1 - 24);
}



// ==== 0x004B6790  JumpjetLocomotionClass::SmallStub_4B6790  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_4B6790(int a1)
{
  return DropPodLocomotionClass::Release((volatile LONG *)(a1 - 24));
}



// ==== 0x004B67A0  sub_4B67A0  this=-  sig=ida-proto ====
void sub_4B67A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4b67ac*/
  dbl_8A08A8 = Math::Sqrt(v0 + v0); /*0x4b67be*/
}



// ==== 0x004B67D0  sub_4B67D0  this=-  sig=ida-proto ====
void sub_4B67D0()
{
  dbl_8A0918 = dbl_8A08A8 / 60.0; /*0x4b67dc*/
}



// ==== 0x004B67F0  sub_4B67F0  this=-  sig=ida-proto ====
void sub_4B67F0()
{
  dbl_8A0900 = 1.0 / dbl_8A0918; /*0x4b67fc*/
}



// ==== 0x004B6810  sub_4B6810  this=-  sig=ida-proto ====
void sub_4B6810()
{
  dbl_8A08F8 = 0.0174532925199433 * 45.0; /*0x4b681c*/
}



// ==== 0x004B6830  sub_4B6830  this=-  sig=ida-proto ====
void sub_4B6830()
{
  dbl_8A08B0 = 0.0174532925199433 * 60.0; /*0x4b683c*/
}



// ==== 0x004B6850  sub_4B6850  this=-  sig=ida-proto ====
void sub_4B6850()
{
  dbl_8A0868 = 0.0174532925199433 * 90.0; /*0x4b685c*/
}



// ==== 0x004B6870  sub_4B6870  this=-  sig=ida-proto ====
__int64 sub_4B6870()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A0868 - dbl_8A08B0); /*0x4b6882*/
  result = Math::RoundToInt(v0 * dbl_8A08A8 * 0.5); /*0x4b6896*/
  dword_8A0920 = result; /*0x4b689b*/
  return result; /*0x4b68a0*/
}



// ==== 0x004B68B0  sub_4B68B0  this=-  sig=ida-proto ====
void sub_4B68B0()
{
  dbl_8A08B8 = Math::ArcTan((double)dword_8A0920 * 0.00390625); /*0x4b68c7*/
}



// ==== 0x004B68E0  sub_4B68E0  this=-  sig=ida-proto ====
void sub_4B68E0()
{
  dbl_8A08F0 = Math::ArcTan((double)(2 * dword_8A0920) / dbl_8A08A8); /*0x4b6902*/
}



// ==== 0x004B6910  sub_4B6910  this=-  sig=ida-proto ====
__int64 sub_4B6910()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0920) + 0.5); /*0x4b692b*/
  dword_8A0914 = result; /*0x4b6930*/
  return result; /*0x4b6936*/
}



// ==== 0x004B6940  sub_4B6940  this=-  sig=ida-proto ====
int sub_4B6940()
{
  word_8A08A0 = 0; /*0x4b6942*/
  word_8A08A2 = 0; /*0x4b6948*/
  return 0; /*0x4b694e*/
}



// ==== 0x004B6950  sub_4B6950  this=-  sig=ida-proto ====
int sub_4B6950()
{
  dword_8A08E0 = 0; /*0x4b6952*/
  dword_8A08E4 = 0; /*0x4b6957*/
  dword_8A08E8 = 0; /*0x4b695c*/
  return 0; /*0x4b6961*/
}



// ==== 0x004B6970  sub_4B6970  this=-  sig=ida-proto ====
int sub_4B6970()
{
  dword_8A0910 = 0; /*0x4b6975*/
  dword_8A0908 = 128; /*0x4b697f*/
  dword_8A090C = 128; /*0x4b6984*/
  return 128; /*0x4b6989*/
}



// ==== 0x004B6990  sub_4B6990  this=-  sig=ida-proto ====
int sub_4B6990()
{
  dword_8A0890 = 0; /*0x4b6992*/
  dword_8A0894 = 0; /*0x4b6997*/
  dword_8A0898 = 0; /*0x4b699c*/
  dword_8A089C = 0; /*0x4b69a1*/
  return 0; /*0x4b69a6*/
}



// ==== 0x004B69B0  HouseClass::initDropshipData  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::initDropshipData(HouseClass *this)
{
  this->AbstractClass = *(void **)&stru_A8EB00.?[416]; /*0x4b69b8*/
  this->? = (void *)0x7FFFFFFF; /*0x4b69bc*/
  LOBYTE(this->?) = 0; /*0x4b69c3*/
  this->? = 0; /*0x4b69c6*/
  this->buildingType = 0; /*0x4b69c9*/
  return &this->AbstractClass; /*0x4b69cc*/
}



// ==== 0x004B69D0  ObjectClass::nullsub_126  this=ObjectClass  sig=csp ====
void nullsub_126(ObjectClass *this)
{
  ; /*0x4b69d0*/
}



// ==== 0x004B69E0  ObjectClass::method_4B69E0  this=ObjectClass  sig=csp ====
char __thiscall sub_4B69E0(ObjectClass *this, int a2)
{
  void *vtable1; // edx
  int v3; // esi
  int v4; // eax

  if ( this->? >= 5 ) /*0x4b69f1*/
    return 0; /*0x4b69f1*/
  vtable1 = dword_A8B230[376].vtable1; /*0x4b6a01*/
  if ( vtable1 ) /*0x4b6a09*/
  {
    v4 = 0; /*0x4b6a10*/
    if ( (int)vtable1 > 0 ) /*0x4b6a14*/
    {
      while ( *(_DWORD *)(dword_A8B230[375].referenceCount + 4 * v4) != a2 /*0x4b6a2c*/
           || *(_DWORD *)(dword_A8B230[376].abstractFlags + 4 * v4) == -1 )
      {
        if ( ++v4 >= (int)vtable1 ) /*0x4b6a31*/
        {
          v3 = -1; /*0x4b6a33*/
          goto LABEL_11; /*0x4b6a36*/
        }
      }
      v3 = v4; /*0x4b6a3b*/
      if ( v4 == -1 /*0x4b6a53*/
        || *((_DWORD *)dword_A8B230[377].vtable3 + v4) < *(_DWORD *)(dword_A8B230[376].abstractFlags + 4 * v4) )
      {
        goto LABEL_11; /*0x4b6a53*/
      }
      return 0; /*0x4b6a9a*/
    }
  }
  v3 = -1; /*0x4b6a0b*/
LABEL_11:
  *(&this->? + this->?++) = a2; /*0x4b6a55*/
  this->owningHouseIndex += (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 172))(a2); /*0x4b6a74*/
  if ( v3 != -1 ) /*0x4b6a77*/
    ++*((_DWORD *)dword_A8B230[377].vtable3 + v3); /*0x4b6a8b*/
  return 1; /*0x4b6a8d*/
}



// ==== 0x004B6AB0  ObjectClass::method_4B6AB0  this=ObjectClass  sig=csp ====
char __thiscall sub_4B6AB0(ObjectClass *this, int a2)
{
  int uniqueId; // eax
  void *vtable1; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // eax

  uniqueId = this->?; /*0x4b6ab4*/
  if ( uniqueId <= 0 || a2 < 0 || a2 >= uniqueId ) /*0x4b6acd*/
    return 0; /*0x4b6b72*/
  vtable1 = dword_A8B230[376].vtable1; /*0x4b6adb*/
  if ( vtable1 ) /*0x4b6ae3*/
  {
    v5 = 0; /*0x4b6ae5*/
    if ( (int)vtable1 > 0 ) /*0x4b6ae9*/
    {
      while ( *(_DWORD *)(dword_A8B230[375].referenceCount + 4 * v5) != *(&this->? + a2) /*0x4b6b05*/
           || *(_DWORD *)(dword_A8B230[376].abstractFlags + 4 * v5) == -1 )
      {
        if ( ++v5 >= (int)dword_A8B230[376].vtable1 ) /*0x4b6b10*/
          goto LABEL_12; /*0x4b6b10*/
      }
      if ( v5 != -1 ) /*0x4b6b17*/
        --*((_DWORD *)dword_A8B230[377].vtable3 + v5); /*0x4b6b22*/
    }
  }
LABEL_12:
  v6 = this->owningHouseIndex - (*(int (__thiscall **)(_DWORD))(**((_DWORD **)&this->? + a2) + 172))(*(&this->? + a2)); /*0x4b6b24*/
  v7 = this->? - 1; /*0x4b6b3c*/
  this->owningHouseIndex = v6; /*0x4b6b3d*/
  v8 = a2; /*0x4b6b42*/
  if ( a2 < v7 ) /*0x4b6b44*/
  {
    v9 = &this->? + a2; /*0x4b6b46*/
    do /*0x4b6b57*/
    {
      ++v8; /*0x4b6b4b*/
      *v9 = v9[1]; /*0x4b6b4c*/
      ++v9; /*0x4b6b51*/
    }
    while ( v8 < this->? - 1 ); /*0x4b6b57*/
  }
  v10 = this->? - 1; /*0x4b6b5d*/
  this->? = v10; /*0x4b6b5f*/
  *(&this->? + v10) = 0; /*0x4b6b62*/
  return 1; /*0x4b6b6a*/
}



// ==== 0x004B6B80  ObjectClass::method_4B6B80  this=ObjectClass  sig=csp ====
char __thiscall sub_4B6B80(ObjectClass *this)
{
  int uniqueId; // edi
  char result; // al

  uniqueId = this->?; /*0x4b6b87*/
  LOBYTE(this->?) = 0; /*0x4b6b8a*/
  if ( uniqueId > 0 ) /*0x4b6b8f*/
  {
    do /*0x4b6b9a*/
    {
      result = sub_4B6AB0(this, 0); /*0x4b6b94*/
      --uniqueId; /*0x4b6b99*/
    }
    while ( uniqueId ); /*0x4b6b9a*/
  }
  this->? = 0; /*0x4b6b9c*/
  this->owningHouseIndex = 0; /*0x4b6b9f*/
  return result; /*0x4b6ba2*/
}



// ==== 0x004B6BB0  HouseClass::RegisterForSwizzleTracking  this=HouseClass  sig=csp ====
int __thiscall HouseClass::RegisterForSwizzleTracking(HouseClass *this)
{
  int v2; // esi
  int result; // eax
  int *p_abstractFlags; // edi

  v2 = 0; /*0x4b6bb4*/
  result = this->?; /*0x4b6bb6*/
  if ( result > 0 ) /*0x4b6bbb*/
  {
    p_abstractFlags = &this->?; /*0x4b6bbe*/
    do /*0x4b6bd5*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, p_abstractFlags); /*0x4b6bc7*/
      result = this->?; /*0x4b6bcc*/
      ++v2; /*0x4b6bcf*/
      ++p_abstractFlags; /*0x4b6bd0*/
    }
    while ( v2 < result ); /*0x4b6bd5*/
  }
  return result; /*0x4b6bd8*/
}



// ==== 0x004B6BE0  ObjectClass::method_4B6BE0  this=ObjectClass  sig=csp ====
int __thiscall sub_4B6BE0(ObjectClass *this, int a2)
{
  return *(&this->? + a2); /*0x4b6be8*/
}



// ==== 0x004B6BF0  ObjectClass::method_4B6BF0  this=ObjectClass  sig=csp ====
int __thiscall sub_4B6BF0(ObjectClass *this)
{
  void *vtable1; // edx
  int result; // eax

  vtable1 = dword_A8B230[376].vtable1; /*0x4b6bf9*/
  if ( !vtable1 ) /*0x4b6c01*/
    return -1; /*0x4b6c01*/
  result = 0; /*0x4b6c03*/
  if ( (int)vtable1 <= 0 ) /*0x4b6c07*/
    return -1; /*0x4b6c25*/
  while ( *(ObjectClass **)(dword_A8B230[375].referenceCount + 4 * result) != this /*0x4b6c1e*/
       || *(_DWORD *)(dword_A8B230[376].abstractFlags + 4 * result) == -1 )
  {
    if ( ++result >= (int)vtable1 ) /*0x4b6c23*/
      return -1; /*0x4b6c23*/
  }
  return result; /*0x4b6c28*/
}



// ==== 0x004B6C30  LoadScreen::RenderLoop  this=LoadScreen  sig=csp ====
int LoadScreen::RenderLoop(LoadScreen *this)
{
  double v1; // st7
  int v2; // esi
  size_t Size; // eax
  void *v4; // edi
  signed int v5; // eax
  size_t v6; // eax
  int v7; // edi
  signed int v8; // eax
  int v9; // esi
  int v10; // ebp
  int v11; // ebx
  int v12; // esi
  int v13; // edi
  Struct *v14; // esi
  int v15; // eax
  int v16; // edi
  const void *v17; // eax
  int i; // esi
  int v19; // eax
  char *v20; // ecx
  char v21; // dl
  ConvertClass *v22; // eax
  BuildingClass *v23; // ebp
  ConvertClass *v24; // eax
  BuildingClass *v25; // edi
  const void *v26; // eax
  int j; // esi
  int v28; // eax
  char *v29; // ecx
  char v30; // dl
  ConvertClass *v31; // eax
  BuildingClass *v32; // esi
  int v33; // ebp
  int v34; // ecx
  void **v35; // edx
  int v36; // eax
  AbstractClass *v37; // ecx
  int v38; // edi
  int Capacity; // eax
  int v40; // ebx
  int v41; // esi
  int v42; // eax
  int k; // edi
  _DWORD *v44; // esi
  int v45; // eax
  int v46; // edi
  i... [75459 chars total]



// ==== 0x004B96A0  TextRenderer::RenderCentered  this=TextRenderer  sig=csp ====
int *__userpurge TextRenderer_RenderCentered@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        int *a3,
        int *a4,
        wchar_t *Format,
        char a6,
        int a7,
        int a8,
        int *a9)
{
  int v11; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // edx
  int v16; // edi
  int v17; // eax
  int v18; // edx
  int v19; // edi
  int v20; // eax
  _DWORD *v21; // eax
  int v23; // [esp-10h] [ebp-5Ch]
  int v24; // [esp-Ch] [ebp-58h]
  int v25; // [esp-8h] [ebp-54h]
  int v26; // [esp-4h] [ebp-50h]
  int v27; // [esp+14h] [ebp-38h] BYREF
  int v28; // [esp+18h] [ebp-34h] BYREF
  int v29; // [esp+1Ch] [ebp-30h]
  int v30; // [esp+20h] [ebp-2Ch] BYREF
  int v31; // [esp+24h] [ebp-28h]
  int v32; // [esp+28h] [ebp-24h]
  int v33; // [esp+2Ch] [ebp-20h]
  _DWORD v34[4]; // [esp+30h] [ebp-1Ch] BYREF
  char v35[12]; // [esp+40h] [ebp-Ch] BYREF

  TextRenderer::GetInstance(); /*0x4b96c5*/
  swprintf(&word_8A0870, (const size_t)&aSD, Format, a2); /*0x4b96dc*/
  swprintf(&word_8A08C0, (const size_t)&aSD, Format, a1); /*0x4b96ed*/
  if ( a6 ) /*0x4b96f7*/
  {
    v11 = *a4 - Text::MeasureWidth((int)&word_8A0870, 0) / 2; /*0x4b971b*/
    v12 = *a4 - Text::MeasureWidth((int)&word_8A08C0, 0) / 2; /*0x4b972b*/
  }
  else
  {
    v11 = *a4; /*0x4b9733*/
    v12 = *a4; /*0x4b9735*/
  }
  v13 = a4[1]; /*0x4b9737*/
  v14 = 110; /*0x4b9740*/
  if ( v11 > v12 ) /*0x4b974a*/
  {
    v14 = v11 - v12 + 110; /*0x4b9750*/
    v11 = v12; /*0x4b9752*/
  }
  if ( v14 + v11 < v12 + 110 ) /*0x4b9766*/
    v14 = v12 - v11 + 111; /*0x4b976d*/
  v33 = v11; /*0x4b9784*/
  v29 = v11; /*0x4b9788*/
  v34[1] = v14; /*0x4b9790*/
  v31 = v14; /*0x4b9794*/
  v34[0] = v13; /*0x4b9798*/
  v15 = *a3; /*0x4b979c*/
  v30 = v13; /*0x4b979e*/
  v34[2] = 15; /*0x4b97a4*/
  v32 = 15; /*0x4b97a8*/
  v16 = (*(int (__thiscall **)(int *))(v15 + 124))(a3); /*0x4b97b5*/
  v17 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden + 124))(g_DSurface_Hidden); /*0x4b97b9*/
  v18 = *a3; /*0x4b97c5*/
  v30 += (v17 - v16) / -2; /*0x4b97cd*/
  v19 = (*(int (__thiscall **)(int *))(v18 + 128))(a3); /*0x4b97df*/
  v31 += ((*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden + 128))(g_DSurface_Hidden) - v19) / -2; /*0x4b97fc*/
  v28 = 0; /*0x4b982a*/
  v29 = 0; /*0x4b982e*/
  BlitterDrawSHP((int *)g_DSurface_Hidden, a8, a3, &v30, &v28, v34, 0, a9, 0, 0, 1000, 0, 0); /*0x4b9832*/
  v20 = FindBuildingAnimByName(aYellow, 1); /*0x4b9847*/
  v21 = (_DWORD *)(*(int (__thiscall **)(int, char *, wchar_t *, int, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden + 120))( /*0x4b985f*/
                    g_DSurface_Hidden,
                    v35,
                    Format,
                    v20,
                    0,
                    v27);
  return TextRenderer::DrawText(&v27, (size_t)&word_8A0870, g_DSurface_Hidden, v21, v23, v24, v25, v26); /*0x4b987c*/
}



// ==== 0x004B9890  DisplayBuildingInfoPanel  this=-  sig=csp ====
int *__fastcall DisplayBuildingInfoPanel(int *a1, BuildingClass *a2, TechnoClass *a3, char a4)
{
  int v6; // eax
  int v7; // edi
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int *SHPFrame; // eax
  int *result; // eax
  const wchar_t *v15; // eax
  int AudioEntry; // eax
  char *v17; // ecx
  int BuildingAnimByName; // esi
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  int v23; // [esp-10h] [ebp-174h]
  int v24; // [esp-Ch] [ebp-170h]
  int v25; // [esp-Ch] [ebp-170h]
  int v26; // [esp-8h] [ebp-16Ch]
  int v27; // [esp-8h] [ebp-16Ch]
  int v28; // [esp-8h] [ebp-16Ch]
  int v29; // [esp-4h] [ebp-168h]
  int v30; // [esp-4h] [ebp-168h]
  int v31; // [esp-4h] [ebp-168h]
  const wchar_t *v32; // [esp+0h] [ebp-164h]
  int v33; // [esp+0h] [ebp-164h]
  int v34; // [esp+0h] [ebp-164h]
  int v35; // [esp+4h] [ebp-160h]
  int v36; // [esp+4h] [ebp-160h]
  int v37; // [esp+8h] [ebp-15Ch]
  int v38; // [esp+10h] [ebp-154h] BYREF
  int v39; // [esp+14h] [ebp-150h] BYREF
  int v40; // [esp+18h] [ebp-14Ch] BYREF
  int v41; // [esp+1Ch] [ebp-148h] BYREF
  int v42; // [esp+20h] [ebp-144h] BYREF
  int v43; // [esp+24h] [ebp-140h] BYREF
  Coord2D v44; // [esp+28h] [ebp-13Ch] BYREF
  _DWORD v45[4]; // [esp+30h] [ebp-134h] BYREF
  _DWORD v46[4]; // [esp+40h] [ebp-124h] BYREF
  Rect v47; // [esp+50h] [ebp-114h] BYREF
  wchar_t v48[20]; // [esp+60h] [ebp-104h] BYREF
  wchar_t v49[4]; // [esp+88h] [ebp-DCh] BYREF
  char v50[72]; // [esp+90h] [ebp-D4h] BYREF
  wchar_t v51; // [esp+D8h] [ebp-8Ch] BYREF
  char v52[56]; // [esp+DCh] [ebp-88h] BYREF
  wchar_t Buffer[6]; // [esp+114h] [ebp-50h] BYREF
  char v54[68]; // [esp+120h] [ebp-44h] BYREF

  v45[0] = 450; /*0x4b98a8*/
  v6 = *a1; /*0x4b98ac*/
  v45[1] = 300; /*0x4b98b8*/
  v45[2] = 190; /*0x4b98be*/
  v45[3] = 80; /*0x4b98c2*/
  v7 = (*(int (__thiscall **)(int *))(v6 + 128))(a1); /*0x4b98d2*/
  v8 = ((*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden) - v7) / 2; /*0x4b98e7*/
  v9 = (*(int (__thiscall **)(int *))(*a1 + 124))(a1); /*0x4b98f2*/
  v10 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 31))(g_DSurface_Hidden); /*0x4b98f6*/
  v44.Coord2D_field_0x04 = 300; /*0x4b9903*/
  v40 = (v10 - v9) / 2; /*0x4b9909*/
  *(_DWORD *)v44.__pad_0 = 450; /*0x4b9912*/
  v41 = v8; /*0x4b992b*/
  v11 = Coord2D::Add(&v44, &v42, &v40); /*0x4b992f*/
  v12 = Rect::Construct(&v47, v11, 190, 80); /*0x4b9939*/
  v46[0] = *v12; /*0x4b9942*/
  v46[1] = v12[1]; /*0x4b994b*/
  v46[2] = v12[2]; /*0x4b9958*/
  v46[3] = v12[3]; /*0x4b9963*/
  v38 = 0; /*0x4b9967*/
  v39 = 0; /*0x4b996b*/
  SHPFrame = (int *)BuildingClass::GetSHPFrame(a2, 0); /*0x4b996f*/
  result = (int *)BlitterDrawSHP((int *)g_DSurface_Hidden, (int)a2, a1, v45, &v38, v46, 0, SHPFrame, 0, 0, 1000, 0, 0); /*0x4b998e*/
  if ( a3 ) /*0x4b999c*/
  {
    swprintf(Buffer, (const size_t)&stru_820320.MiddleFrameHeight, (const wchar_t *const)&a3->?); /*0x4b99b3*/
    if ( a4 ) /*0x4b99c4*/
    {
      v15 = (const wchar_t *)(*((int (__thiscall **)(TechnoClass *))a3->RadioClass + 43))(a3); /*0x4b99ca*/
      swprintf(v48, (const size_t)&stru_820320.?[17], v15); /*0x4b99db*/
    }
    else
    {
      swprintf(v48, (const size_t)&stru_820320.?[12], v32); /*0x4b99ef*/
    }
    if ( *(_DWORD *)TechnoClass::GetAudioEntry(a3, 0) ) /*0x4b99ff*/
    {
      AudioEntry = TechnoClass::GetAudioEntry(a3, 0); /*0x4b9a06*/
      swprintf(v49, (const size_t)&stru_820320.?[5], (const wchar_t *const)(*(_DWORD *)AudioEntry + 100)); /*0x4b9a1e*/
    }
    else
    {
      swprintf(v49, (const size_t)&stru_820320.?, v32); /*0x4b9a35*/
    }
    swprintf(&v51, (const size_t)&stru_820320.?[17], (&off_7E5210)[a3->?[0]]); /*0x4b9a58*/
    v17 = &stru_820320.?[9]; /*0x4b9a6e*/
    if ( !a4 ) /*0x4b9a73*/
      v17 = &stru_820320.?[5]; /*0x4b9a75*/
    BuildingAnimByName = FindBuildingAnimByName(v17, 1); /*0x4b9a87*/
    v39 = v41 + 300; /*0x4b9a97*/
    v38 = v40 + 450; /*0x4b9aa8*/
    v19 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, Rect *, int *, int, _DWORD))g_DSurface_Hidden->AbstractClass /*0x4b9ab3*/
                     + 30))(
                      g_DSurface_Hidden,
                      &v47,
                      &v38,
                      BuildingAnimByName,
                      0);
    TextRenderer::DrawText(&v44.Coord2D_field_0x04, (size_t)v54, (int)g_DSurface_Hidden, v19, 70, (int)v32, v35, v37); /*0x4b9aca*/
    v42 = *(_DWORD *)v44.__pad_0 + 315; /*0x4b9ae0*/
    v41 = v43 + 450; /*0x4b9af8*/
    v20 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, int *, int *, int, _DWORD, int))g_DSurface_Hidden->AbstractClass /*0x4b9b03*/
                     + 30))(
                      g_DSurface_Hidden,
                      &v47.Height,
                      &v41,
                      BuildingAnimByName,
                      0,
                      70);
    TextRenderer::DrawText((int *)v44.__pad_0, (size_t)v50, (int)g_DSurface_Hidden, v20, v26, v29, v33, v36); /*0x4b9b1a*/
    v41 = v43 + 330; /*0x4b9b30*/
    v40 = v42 + 450; /*0x4b9b48*/
    v21 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, int *, int *, int, _DWORD, int))g_DSurface_Hidden->AbstractClass /*0x4b9b53*/
                     + 30))(
                      g_DSurface_Hidden,
                      &v47.Width,
                      &v40,
                      BuildingAnimByName,
                      0,
                      70);
    TextRenderer::DrawText(&v43, (size_t)v52, (int)g_DSurface_Hidden, v21, v24, v27, v30, v34); /*0x4b9b6a*/
    v40 = v42 + 345; /*0x4b9b87*/
    v39 = v41 + 450; /*0x4b9b98*/
    v22 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, int *, int *, int, _DWORD, int))g_DSurface_Hidden->AbstractClass /*0x4b9ba3*/
                     + 30))(
                      g_DSurface_Hidden,
                      &v47.Y,
                      &v39,
                      BuildingAnimByName,
                      0,
                      70);
    return TextRenderer::DrawText(&v42, (size_t)v48, (int)g_DSurface_Hidden, v22, v23, v25, v28, v31); /*0x4b9bb7*/
  }
  return result; /*0x4b9bbf*/
}



// ==== 0x004B9BD0  Struct::Zero3  this=Struct  sig=csp ====
_BYTE *__thiscall Struct::Zero3(Struct *this)
{
  LOBYTE(this->Struct_field_00) = 0; /*0x4b9bd4*/
  BYTE1(this->Struct_field_00) = 0; /*0x4b9bd6*/
  BYTE2(this->Struct_field_00) = 0; /*0x4b9bd9*/
  return this; /*0x4b9bdc*/
}



// ==== 0x004B9BE0  _DynamicVectorClass_PAUButtonFadeEffect::Clear  this=DynamicVector  sig=csp ====
void __thiscall FilePipe_30::Clear(_DynamicVectorClass_PAUButtonFadeEffect *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4b9be6*/
  this->m_10 = 0; /*0x4b9be9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4b9bf0*/
  {
    __3_YAXPAX_Z(v2); /*0x4b9bf6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4b9bfe*/
  }
  BYTE1(this->m_C) = 0; /*0x4b9c01*/
  this->m_8 = 0; /*0x4b9c04*/
}



// ==== 0x004B9C10  _DynamicVectorClass_PAUButtonFadeEffect::GetCount  this=DynamicVector  sig=csp ====
unsigned int __thiscall FilePipe_30::GetCount(_DynamicVectorClass_PAUButtonFadeEffect *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4b9c10*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4b9c25*/
  else
    return 0; /*0x4b9c17*/
}



// ==== 0x004B9C30  _DynamicVectorClass_PAUButtonFadeEffect::GetItem  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_CrossDissolveEffect::GetItem(_DynamicVectorClass_PAUButtonFadeEffect *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4b9c3a*/
}



// ==== 0x004B9C40  _DynamicVectorClass_PAUCrossDissolveEffect::Clear_0  this=DynamicVector  sig=csp ====
void __thiscall FilePipe_30::Clear_0(_DynamicVectorClass_PAUCrossDissolveEffect *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4b9c46*/
  this->m_10 = 0; /*0x4b9c49*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4b9c50*/
  {
    __3_YAXPAX_Z(v2); /*0x4b9c56*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4b9c5e*/
  }
  BYTE1(this->m_C) = 0; /*0x4b9c61*/
  this->m_8 = 0; /*0x4b9c64*/
}



// ==== 0x004B9C70  _DynamicVectorClass_PAUCrossDissolveEffect::GetCount_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall FilePipe_30::GetCount_0(_DynamicVectorClass_PAUCrossDissolveEffect *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4b9c70*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4b9c85*/
  else
    return 0; /*0x4b9c77*/
}



// ==== 0x004B9C90  _VectorClass_PAUCrossDissolveEffect::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_CrossDissolveEffect::Clear(_VectorClass_PAUCrossDissolveEffect *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4b9c9a*/
}



// ==== 0x004B9CA0  _DynamicVectorClass_PAUButtonFadeEffect::FindItemIndex  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_CrossDissolveEffect::FindItemIndex(
        _DynamicVectorClass_PAUButtonFadeEffect *this,
        int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4b9ca2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4b9cad*/
  {
    v3 = 0; /*0x4b9caf*/
    if ( m_8 <= 0 ) /*0x4b9cb3*/
      return 1; /*0x4b9cd3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4b9cb5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4b9cbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4b9cc4*/
    {
      ++v3; /*0x4b9cc6*/
      ++v4; /*0x4b9cc7*/
      if ( v3 >= m_8 ) /*0x4b9ccc*/
        return 1; /*0x4b9ccc*/
    }
  }
  return 0; /*0x4b9cce*/
}



// ==== 0x004B9CE0  VectorClass_ptr_CrossDissolveEffect::SetCapacity  this=VectorClass_ptr_CrossDissolveEffect  sig=csp ====
char __thiscall VectorClass_ptr_CrossDissolveEffect::SetCapacity(
        VectorClass_ptr_CrossDissolveEffect *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  void *Capacity; // ecx
  int i; // eax

  if ( a2 ) /*0x4b9cec*/
  {
    this->IsInitialized = 0; /*0x4b9cf6*/
    if ( a3 ) /*0x4b9cfc*/
      v4 = a3; /*0x4b9d12*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4b9d0e*/
    this->IsInitialized = 1; /*0x4b9d16*/
    if ( v4 ) /*0x4b9d1a*/
    {
      if ( this->Items ) /*0x4b9d25*/
      {
        Capacity = this->Capacity; /*0x4b9d2c*/
        if ( a2 < (int)Capacity ) /*0x4b9d31*/
          Capacity = (void *)a2; /*0x4b9d33*/
        for ( i = 0; i < (int)Capacity; v4[i - 1] = *((_DWORD *)this->Items + i - 1) ) /*0x4b9d39*/
          ++i; /*0x4b9d3e*/
        if ( this->IsAllocated ) /*0x4b9d4b*/
        {
          __3_YAXPAX_Z(this->Items); /*0x4b9d56*/
          this->Items = 0; /*0x4b9d5e*/
        }
      }
      this->Items = v4; /*0x4b9d67*/
      this->Capacity = (void *)a2; /*0x4b9d6f*/
      this->IsAllocated = a3 == 0; /*0x4b9d72*/
      return 1; /*0x4b9d78*/
    }
    else
    {
      return 0; /*0x4b9d1f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(VectorClass_ptr_CrossDissolveEffect *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4b9d82*/
    return 1; /*0x4b9d88*/
  }
}



// ==== 0x004B9D90  VectorClass_ptr_CrossDissolveEffect::Destroy  this=VectorClass_ptr_CrossDissolveEffect  sig=csp ====
void __thiscall VectorClass_ptr_CrossDissolveEffect::Destroy(VectorClass_ptr_CrossDissolveEffect *this)
{
  if ( this->Items && this->IsAllocated ) /*0x4b9d9d*/
  {
    __3_YAXPAX_Z(this->Items); /*0x4b9da3*/
    this->Items = 0; /*0x4b9dab*/
  }
  this->IsAllocated = 0; /*0x4b9dae*/
  this->Capacity = 0; /*0x4b9db1*/
}



// ==== 0x004B9DC0  VectorClass_ptr_CrossDissolveEffect::FindItemIndex_0  this=VectorClass_ptr_CrossDissolveEffect  sig=csp ====
int __thiscall VectorClass_ptr_CrossDissolveEffect::FindItemIndex_0(
        VectorClass_ptr_CrossDissolveEffect *this,
        _DWORD *a2)
{
  int result; // eax
  void *Capacity; // edx
  _DWORD *i; // ecx

  if ( !this->IsInitialized ) /*0x4b9dc0*/
    return 0; /*0x4b9dc8*/
  Capacity = this->Capacity; /*0x4b9dce*/
  result = 0; /*0x4b9dd1*/
  if ( (int)Capacity <= 0 ) /*0x4b9dd5*/
    return -1; /*0x4b9dec*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x4b9ddb*/
  {
    if ( ++result >= (int)Capacity ) /*0x4b9dea*/
      return -1; /*0x4b9dea*/
  }
  return result; /*0x4b9dca*/
}



// ==== 0x004B9E00  VectorClass_ptr_CrossDissolveEffect::GetItemIndex  this=VectorClass_ptr_CrossDissolveEffect  sig=csp ====
unsigned int __thiscall VectorClass_ptr_CrossDissolveEffect::GetItemIndex(
        VectorClass_ptr_CrossDissolveEffect *this,
        int a2)
{
  if ( this->IsInitialized ) /*0x4b9e00*/
    return (a2 - (unsigned int)this->Items) >> 2; /*0x4b9e15*/
  else
    return 0; /*0x4b9e07*/
}



// ==== 0x004B9E20  _DynamicVectorClass_PAUButtonFadeEffect::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall FilePipe_30::SetCapacity(_DynamicVectorClass_PAUButtonFadeEffect *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4b9e2c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4b9e32*/
    if ( a3 ) /*0x4b9e38*/
      v4 = a3; /*0x4b9e4e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4b9e4a*/
    LOBYTE(this->m_C) = 1; /*0x4b9e52*/
    if ( !v4 ) /*0x4b9e56*/
      return 0; /*0x4b9eca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4b9e58*/
    {
      m_8 = this->m_8; /*0x4b9e5f*/
      if ( a2 < m_8 ) /*0x4b9e64*/
        m_8 = a2; /*0x4b9e66*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4b9e6c*/
        ++i; /*0x4b9e71*/
      if ( BYTE1(this->m_C) ) /*0x4b9e7e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4b9e89*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4b9e91*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4b9e9a*/
    this->m_8 = a2; /*0x4b9ea2*/
    BYTE1(this->m_C) = a3 == 0; /*0x4b9ea5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUButtonFadeEffect *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4b9eae*/
  }
  v7 = this->m_8; /*0x4b9eb1*/
  if ( v7 < this->m_10 ) /*0x4b9eb9*/
    this->m_10 = v7; /*0x4b9ebb*/
  return 1; /*0x4b9ebe*/
}



// ==== 0x004B9ED0  _DynamicVectorClass_PAUButtonFadeEffect::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall FilePipe_30::FindItemIndex(_DynamicVectorClass_PAUButtonFadeEffect *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4b9ed0*/
  result = 0; /*0x4b9ed3*/
  if ( m_10 <= 0 ) /*0x4b9ed8*/
    return -1; /*0x4b9eef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4b9ede*/
  {
    if ( ++result >= m_10 ) /*0x4b9eed*/
      return -1; /*0x4b9eed*/
  }
  return result; /*0x4b9ef2*/
}



// ==== 0x004B9F00  _VectorClass_PAUCrossDissolveEffect::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CrossDissolveEffect::AddRef(_VectorClass_PAUCrossDissolveEffect *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4b9f02*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4b9f0d*/
  {
    v3 = 0; /*0x4b9f0f*/
    if ( m_8 <= 0 ) /*0x4b9f13*/
      return 1; /*0x4b9f33*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4b9f15*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4b9f1b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4b9f24*/
    {
      ++v3; /*0x4b9f26*/
      ++v4; /*0x4b9f27*/
      if ( v3 >= m_8 ) /*0x4b9f2c*/
        return 1; /*0x4b9f2c*/
    }
  }
  return 0; /*0x4b9f2e*/
}



// ==== 0x004B9F40  _VectorClass_PAUCrossDissolveEffect::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CrossDissolveEffect::Remove(
        _VectorClass_PAUCrossDissolveEffect *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4b9f4c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4b9f56*/
    if ( a3 ) /*0x4b9f5c*/
      v4 = a3; /*0x4b9f72*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4b9f6e*/
    LOBYTE(this->m_C) = 1; /*0x4b9f76*/
    if ( v4 ) /*0x4b9f7a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4b9f85*/
      {
        m_8 = this->m_8; /*0x4b9f8c*/
        if ( a2 < m_8 ) /*0x4b9f91*/
          m_8 = a2; /*0x4b9f93*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4b9f99*/
          ++i; /*0x4b9f9e*/
        if ( BYTE1(this->m_C) ) /*0x4b9fab*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4b9fb6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4b9fbe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x4b9fc7*/
      this->m_8 = a2; /*0x4b9fcf*/
      BYTE1(this->m_C) = a3 == 0; /*0x4b9fd2*/
      return 1; /*0x4b9fd8*/
    }
    else
    {
      return 0; /*0x4b9f7f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUCrossDissolveEffect *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4b9fe2*/
    return 1; /*0x4b9fe8*/
  }
}



// ==== 0x004B9FF0  _VectorClass_PAUCrossDissolveEffect::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_CrossDissolveEffect::ddtor(_VectorClass_PAUCrossDissolveEffect *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4b9ffd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4ba003*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4ba00b*/
  }
  BYTE1(this->m_C) = 0; /*0x4ba00e*/
  this->m_8 = 0; /*0x4ba011*/
}



// ==== 0x004BA020  _VectorClass_PAUCrossDissolveEffect::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_CrossDissolveEffect::GetSize(_VectorClass_PAUCrossDissolveEffect *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4ba020*/
    return 0; /*0x4ba028*/
  m_8 = this->m_8; /*0x4ba02e*/
  result = 0; /*0x4ba031*/
  if ( m_8 <= 0 ) /*0x4ba035*/
    return -1; /*0x4ba04c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4ba03b*/
  {
    if ( ++result >= m_8 ) /*0x4ba04a*/
      return -1; /*0x4ba04a*/
  }
  return result; /*0x4ba02a*/
}



// ==== 0x004BA060  _VectorClass_PAUCrossDissolveEffect::Get  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_CrossDissolveEffect::Get(_VectorClass_PAUCrossDissolveEffect *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4ba060*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4ba075*/
  else
    return 0; /*0x4ba067*/
}



// ==== 0x004BA080  _DynamicVectorClass_PAUCrossDissolveEffect::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall FilePipe_30::SetCapacity_0(_DynamicVectorClass_PAUCrossDissolveEffect *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ba08c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4ba092*/
    if ( a3 ) /*0x4ba098*/
      v4 = a3; /*0x4ba0ae*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x4ba0aa*/
    LOBYTE(this->m_C) = 1; /*0x4ba0b2*/
    if ( !v4 ) /*0x4ba0b6*/
      return 0; /*0x4ba12a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4ba0b8*/
    {
      m_8 = this->m_8; /*0x4ba0bf*/
      if ( a2 < m_8 ) /*0x4ba0c4*/
        m_8 = a2; /*0x4ba0c6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4ba0cc*/
        ++i; /*0x4ba0d1*/
      if ( BYTE1(this->m_C) ) /*0x4ba0de*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4ba0e9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4ba0f1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4ba0fa*/
    this->m_8 = a2; /*0x4ba102*/
    BYTE1(this->m_C) = a3 == 0; /*0x4ba105*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUCrossDissolveEffect *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4ba10e*/
  }
  v7 = this->m_8; /*0x4ba111*/
  if ( v7 < this->m_10 ) /*0x4ba119*/
    this->m_10 = v7; /*0x4ba11b*/
  return 1; /*0x4ba11e*/
}



// ==== 0x004BA130  _DynamicVectorClass_PAUCrossDissolveEffect::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall FilePipe_30::FindItemIndex_0(_DynamicVectorClass_PAUCrossDissolveEffect *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x4ba130*/
  result = 0; /*0x4ba133*/
  if ( m_10 <= 0 ) /*0x4ba138*/
    return -1; /*0x4ba14f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x4ba13e*/
  {
    if ( ++result >= m_10 ) /*0x4ba14d*/
      return -1; /*0x4ba14d*/
  }
  return result; /*0x4ba152*/
}



// ==== 0x004BA160  _DynamicVectorClass_PAVTechnoTypeClass::Destructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall FilePipe_30::Destructor(_DynamicVectorClass_PAVTechnoTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4ba163*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x4ba166*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4ba170*/
  {
    __3_YAXPAX_Z(v3); /*0x4ba178*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4ba180*/
  }
  BYTE1(this->m_C) = 0; /*0x4ba18b*/
  this->m_8 = 0; /*0x4ba191*/
  if ( (a2 & 1) != 0 ) /*0x4ba198*/
    __3_YAXPAX_Z(this); /*0x4ba19b*/
  return this->__pad_0; /*0x4ba1a5*/
}



// ==== 0x004BA1B0  VectorClass_ptr_CrossDissolveEffect::loc_4BA1B0  this=VectorClass_ptr_CrossDissolveEffect  sig=ida-proto ====
_DWORD *__thiscall VectorClass_ptr_CrossDissolveEffect::loc_4BA1B0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ba1b3*/
  *Block = &off_7E8500; /*0x4ba1b6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ba1c0*/
  {
    __3_YAXPAX_Z(v3); /*0x4ba1c8*/
    *(Block + 1) = 0; /*0x4ba1d0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ba1db*/
  *(Block + 2) = 0; /*0x4ba1e1*/
  if ( (a2 & 1) != 0 ) /*0x4ba1e8*/
    __3_YAXPAX_Z(Block); /*0x4ba1eb*/
  return Block; /*0x4ba1f5*/
}


// ==== 0x004BA200  _DynamicVectorClass_PAUButtonFadeEffect::Destructor_0  this=DynamicVector  sig=csp ====
_DWORD *__thiscall FilePipe_30::Destructor_0(_DynamicVectorClass_PAUButtonFadeEffect *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4ba203*/
  *(_DWORD *)this->__pad_0 = &off_7E8500; /*0x4ba206*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4ba210*/
  {
    __3_YAXPAX_Z(v3); /*0x4ba218*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4ba220*/
  }
  BYTE1(this->m_C) = 0; /*0x4ba22b*/
  this->m_8 = 0; /*0x4ba231*/
  if ( (a2 & 1) != 0 ) /*0x4ba238*/
    __3_YAXPAX_Z(this); /*0x4ba23b*/
  return this->__pad_0; /*0x4ba245*/
}



// ==== 0x004BA250  _VectorClass_PAUCrossDissolveEffect::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_CrossDissolveEffect::Add(_VectorClass_PAUCrossDissolveEffect *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4ba253*/
  *(_DWORD *)this->__pad_0 = &VectorClass<CrossDissolveEffect *>::`vftable'; /*0x4ba256*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4ba260*/
  {
    __3_YAXPAX_Z(v3); /*0x4ba268*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4ba270*/
  }
  BYTE1(this->m_C) = 0; /*0x4ba27b*/
  this->m_8 = 0; /*0x4ba281*/
  if ( (a2 & 1) != 0 ) /*0x4ba288*/
    __3_YAXPAX_Z(this); /*0x4ba28b*/
  return this->__pad_0; /*0x4ba295*/
}



// ==== 0x004BA2A0  _DynamicVectorClass_PAUCrossDissolveEffect::Destructor_1  this=DynamicVector  sig=csp ====
_DWORD *__thiscall FilePipe_30::Destructor_1(_DynamicVectorClass_PAUCrossDissolveEffect *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4ba2a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<CrossDissolveEffect *>::`vftable'; /*0x4ba2a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4ba2b0*/
  {
    __3_YAXPAX_Z(v3); /*0x4ba2b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4ba2c0*/
  }
  BYTE1(this->m_C) = 0; /*0x4ba2cb*/
  this->m_8 = 0; /*0x4ba2d1*/
  if ( (a2 & 1) != 0 ) /*0x4ba2d8*/
    __3_YAXPAX_Z(this); /*0x4ba2db*/
  return this->__pad_0; /*0x4ba2e5*/
}



// ==== 0x004BA2F0  LoadScreen::InitVtable  this=VectorClass  sig=csp ====
_DWORD *__thiscall LoadScreen::InitVtable(LoadScreen *this, int a2, int a3)
{
  this->LoadScreen_field_0x04 = 0; /*0x4ba2fb*/
  this->LoadScreen_field_0x08 = a2; /*0x4ba2fe*/
  LOBYTE(this->LoadScreen_field_0x0C) = 1; /*0x4ba301*/
  BYTE1(this->LoadScreen_field_0x0C) = 0; /*0x4ba305*/
  *(_DWORD *)this->__pad_0 = &off_7E8500; /*0x4ba308*/
  if ( a2 ) /*0x4ba30e*/
  {
    if ( a3 ) /*0x4ba316*/
    {
      this->LoadScreen_field_0x04 = a3; /*0x4ba318*/
      return this->__pad_0; /*0x4ba31e*/
    }
    this->LoadScreen_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x4ba32d*/
    BYTE1(this->LoadScreen_field_0x0C) = 1; /*0x4ba330*/
  }
  return this->__pad_0; /*0x4ba31d*/
}



// ==== 0x004BA340  LoadScreen::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall LoadScreen::Constructor(LoadScreen *this, int a2, int a3)
{
  this->LoadScreen_field_0x04 = 0; /*0x4ba34b*/
  this->LoadScreen_field_0x08 = a2; /*0x4ba34e*/
  LOBYTE(this->LoadScreen_field_0x0C) = 1; /*0x4ba351*/
  BYTE1(this->LoadScreen_field_0x0C) = 0; /*0x4ba355*/
  *(_DWORD *)this->__pad_0 = &VectorClass<CrossDissolveEffect *>::`vftable'; /*0x4ba358*/
  if ( a2 ) /*0x4ba35e*/
  {
    if ( a3 ) /*0x4ba366*/
    {
      this->LoadScreen_field_0x04 = a3; /*0x4ba368*/
      return this->__pad_0; /*0x4ba36e*/
    }
    this->LoadScreen_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x4ba37d*/
    BYTE1(this->LoadScreen_field_0x0C) = 1; /*0x4ba380*/
  }
  return this->__pad_0; /*0x4ba36d*/
}



// ==== 0x004BA390  sub_4BA390  this=-  sig=ida-proto ====
int sub_4BA390()
{
  dword_8A0930 = 0; /*0x4ba392*/
  dword_8A0934 = 0; /*0x4ba397*/
  dword_8A0938 = 0; /*0x4ba39c*/
  dword_8A093C = 0; /*0x4ba3a1*/
  return 0; /*0x4ba3a6*/
}



// ==== 0x004BA3B0  sub_4BA3B0  this=-  sig=ida-proto ====
void sub_4BA3B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4ba3bc*/
  dbl_8A0968 = Math::Sqrt(v0 + v0); /*0x4ba3ce*/
}



// ==== 0x004BA3E0  sub_4BA3E0  this=-  sig=ida-proto ====
void sub_4BA3E0()
{
  dbl_8A0DC0 = dbl_8A0968 / 60.0; /*0x4ba3ec*/
}



// ==== 0x004BA400  sub_4BA400  this=-  sig=ida-proto ====
void sub_4BA400()
{
  dbl_8A0DA8 = 1.0 / dbl_8A0DC0; /*0x4ba40c*/
}



// ==== 0x004BA420  sub_4BA420  this=-  sig=ida-proto ====
void sub_4BA420()
{
  dbl_8A0DA0 = 0.0174532925199433 * 45.0; /*0x4ba42c*/
}



// ==== 0x004BA440  sub_4BA440  this=-  sig=ida-proto ====
void sub_4BA440()
{
  dbl_8A0970 = 0.0174532925199433 * 60.0; /*0x4ba44c*/
}



// ==== 0x004BA460  sub_4BA460  this=-  sig=ida-proto ====
void sub_4BA460()
{
  dbl_8A0928 = 0.0174532925199433 * 90.0; /*0x4ba46c*/
}



// ==== 0x004BA480  DSurface::ConstructFromHandle  this=DSurface  sig=ida-proto ====
__int64 sub_4BA480()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8A0928 - dbl_8A0970); /*0x4ba492*/
  result = Math::RoundToInt(v0 * dbl_8A0968 * 0.5); /*0x4ba4a6*/
  dword_8A0DC8 = result; /*0x4ba4ab*/
  return result; /*0x4ba4b0*/
}



// ==== 0x004BA4C0  sub_4BA4C0  this=-  sig=ida-proto ====
void sub_4BA4C0()
{
  dbl_8A0978 = Math::ArcTan((double)dword_8A0DC8 * 0.00390625); /*0x4ba4d7*/
}



// ==== 0x004BA4F0  sub_4BA4F0  this=-  sig=ida-proto ====
void sub_4BA4F0()
{
  dbl_8A0D98 = Math::ArcTan((double)(2 * dword_8A0DC8) / dbl_8A0968); /*0x4ba512*/
}



// ==== 0x004BA520  sub_4BA520  this=-  sig=ida-proto ====
__int64 sub_4BA520()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0DC8) + 0.5); /*0x4ba53b*/
  dword_8A0DBC = result; /*0x4ba540*/
  return result; /*0x4ba546*/
}



// ==== 0x004BA550  sub_4BA550  this=-  sig=ida-proto ====
int sub_4BA550()
{
  word_8A0940 = 0; /*0x4ba552*/
  word_8A0942 = 0; /*0x4ba558*/
  return 0; /*0x4ba55e*/
}



// ==== 0x004BA560  sub_4BA560  this=-  sig=ida-proto ====
int sub_4BA560()
{
  dword_8A0D88 = 0; /*0x4ba562*/
  dword_8A0D8C = 0; /*0x4ba567*/
  dword_8A0D90 = 0; /*0x4ba56c*/
  return 0; /*0x4ba571*/
}



// ==== 0x004BA580  sub_4BA580  this=-  sig=ida-proto ====
int sub_4BA580()
{
  dword_8A0DB8 = 0; /*0x4ba585*/
  dword_8A0DB0 = 128; /*0x4ba58f*/
  dword_8A0DB4 = 128; /*0x4ba594*/
  return 128; /*0x4ba599*/
}



// ==== 0x004BA5A0  DSurface::Construct  this=DSurface  sig=csp ====
char *__thiscall DSurface_Constructor(char *this, int a2, int a3, char a4, char a5)
{
  _DWORD *v6; // ebp
  void *v7; // edi
  int v8; // eax

  v6 = this + 28; /*0x4ba5b0*/
  this->q004 = a2; /*0x4ba5b5*/
  this->q008 = a3; /*0x4ba5b8*/
  this->q00C = 0; /*0x4ba5bb*/
  this->q004 = 0; /*0x4ba5be*/
  this->q014 = 0; /*0x4ba5c1*/
  this->q018 = 0; /*0x4ba5c4*/
  this->q019 = 0; /*0x4ba5c7*/
  this->u32_1C = 0; /*0x4ba5ca*/
  this->q008 = 0; /*0x4ba5cd*/
  *(_DWORD *)this = &DSurface_Vtable; /*0x4ba5d0*/
  v7 = __2_YAPAXI_Z(0x6Cu); /*0x4ba5db*/
  this->q008 = v7; /*0x4ba5e2*/
  if ( v7 ) /*0x4ba5e5*/
  {
    memset(v7, 0, 0x6Cu); /*0x4ba5f2*/
    **((_DWORD **)this + 8) = 108; /*0x4ba5f7*/
    *(_DWORD *)(this->q008 + 4) = 7; /*0x4ba604*/
    *(_DWORD *)(this->q008 + 12) = a2; /*0x4ba60e*/
    *(_DWORD *)(this->q008 + 8) = a3; /*0x4ba618*/
    if ( a4 == 1 ) /*0x4ba621*/
      *(_DWORD *)(this->q008 + 104) = 2048; /*0x4ba626*/
    if ( g_DDraw_Force3D && a5 ) /*0x4ba639*/
      *(_DWORD *)(this->q008 + 104) = 8256; /*0x4ba63e*/
    g_lpDirectDraw7->lpVtbl->CreateSurface( /*0x4ba653*/
      g_lpDirectDraw7,
      (LPDDSURFACEDESC)this->q008,
      (LPDIRECTDRAWSURFACE *)(this + 28),
      0);
    if ( *v6 ) /*0x4ba656*/
    {
      memset(*((void **)this + 8), 0, 0x6Cu); /*0x4ba665*/
      **((_DWORD **)this + 8) = 108; /*0x4ba66a*/
      (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*v6 + 88))(*v6, this->q008); /*0x4ba67a*/
      v8 = this->q008; /*0x4ba67d*/
      this->q004 = (unsigned int)(*(_DWORD *)(v8 + 84) + 7) >> 3; /*0x4ba689*/
      this->q019 = (*(_DWORD *)(v8 + 104) & 0x4000) != 0; /*0x4ba695*/
    }
  }
  return this; /*0x4ba69a*/
}



// ==== 0x004BA6B0  DSurface::Destroy  this=DSurface  sig=csp ====
int __thiscall DSurface::Destroy(DSurface *this)
{
  char DSurface_field_0x18; // al
  int v3; // eax
  int result; // eax

  DSurface_field_0x18 = (char)this->DSurface_field_0x18; /*0x4ba6b6*/
  this->DSurface_field_0x0 = &DSurface_Vtable; /*0x4ba6b9*/
  if ( DSurface_field_0x18 ) /*0x4ba6c1*/
  {
    v3 = this->DSurface_field_0x1C[0]; /*0x4ba6c3*/
    if ( v3 ) /*0x4ba6c8*/
    {
      if ( g_DDraw_Clipper ) /*0x4ba6d0*/
      {
        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v3 + 112))(v3, 0); /*0x4ba6d6*/
        (*(void (__stdcall **)(int))(*(_DWORD *)g_DDraw_Clipper + 8))(g_DDraw_Clipper); /*0x4ba6e1*/
        g_DDraw_Clipper = 0; /*0x4ba6e4*/
      }
    }
  }
  __3_YAXPAX_Z(this->DSurface_field_0x20); /*0x4ba6ee*/
  result = this->DSurface_field_0x1C[0]; /*0x4ba6f3*/
  this->DSurface_field_0x20 = 0; /*0x4ba6fb*/
  if ( result ) /*0x4ba6fe*/
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x4ba703*/
  this->DSurface_field_0x1C[0] = 0; /*0x4ba706*/
  this->DSurface_field_0x0 = &Surface_Vtable; /*0x4ba709*/
  return result; /*0x4ba70f*/
}



// ==== 0x004BA770  DSurface::CreatePrimary  this=DSurface  sig=csp ====
_DWORD *__thiscall DSurface::CreatePrimary(DSurface *this)
{
  char v1; // bl
  int v2; // eax
  _DWORD *v3; // esi
  void *v4; // edi
  _DWORD *v5; // ebp
  int *v6; // esi
  UINT v7; // eax
  int v8; // eax
  DSurface *v9; // eax
  _DWORD *BackBuffer; // eax
  _DWORD *v11; // eax
  bool v12; // dl
  int v13; // edx
  int v14; // eax
  int v15; // edi
  HWND ActiveWindow; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // esi
  int v23; // ecx
  int v24; // eax
  int v25; // edx
  int v28; // [esp+20h] [ebp-8h] BYREF
  int v29; // [esp+24h] [ebp-4h] BYREF

  Debug::Log(); /*0x4ba780*/
  v1 = DDraw::CheckCapabilities(); /*0x4ba78d*/
  g_DDraw_AllowStretchBlits = (v1 & 0x40) != 0; /*0x4ba79b*/
  Debug::Log(); /*0x4ba7b4*/
  if ( (v1 & 0x10) == 0 ) /*0x4ba7bf*/
    LOBYTE(stru_820320.Start) = 0; /*0x4ba7c1*/
  Debug::Log(); /*0x4ba7e3*/
  v2 = __2_YAPAXI_Z(0x24u); /*0x4ba7ea*/
  v3 = (_DWORD *)v2; /*0x4ba7ef*/
  if ( v2 ) /*0x4ba7f8*/
  {
    *(_DWORD *)(v2 + 4) = 0; /*0x4ba7fc*/
    *(_DWORD *)(v2 + 8) = 0; /*0x4ba7ff*/
    *(_DWORD *)(v2 + 12) = 0; /*0x4ba802*/
    *(_DWORD *)(v2 + 16) = 0; /*0x4ba805*/
    *(_DWORD *)(v2 + 20) = 0; /*0x4ba808*/
    *(_BYTE *)(v2 + 24) = 0; /*0x4ba80b*/
    *(_BYTE *)(v2 + 25) = 0; /*0x4ba80e*/
    *(_DWORD *)(v2 + 28) = 0; /*0x4ba811*/
    *(_DWORD *)v2 = &DSurface_Vtable; /*0x4ba814*/
    v4 = (void *)__2_YAPAXI_Z(0x6Cu); /*0x4ba822*/
    v3[8] = v4; /*0x4ba82b*/
    v5 = v3; /*0x4ba82e*/
    memset(v4, 0, 0x6Cu); /*0x4ba830*/
    *(_DWORD *)v3[8] = 108; /*0x4ba835*/
  }
  else
  {
    v5 = 0; /*0x4ba83d*/
  }
  *(_DWORD *)(v5[8] + 4) = 1; /*0x4ba84d*/
  *(_DWORD *)(v5[8] + 104) = 512; /*0x4ba85b*/
  if ( this ) /*0x4ba862*/
  {
    *(_DWORD *)(v5[8] + 104) |= 0x18u; /*0x4ba86d*/
    *(_DWORD *)(v5[8] + 4) |= 0x20u; /*0x4ba879*/
    *(_DWORD *)(v5[8] + 20) = this != 0; /*0x4ba87f*/
  }
  Debug::Log(); /*0x4ba887*/
  v6 = v5 + 7; /*0x4ba897*/
  v7 = g_lpDirectDraw7->lpVtbl->CreateSurface( /*0x4ba8a1*/
         g_lpDirectDraw7,
         (LPDDSURFACEDESC)v5[8],
         (LPDIRECTDRAWSURFACE *)(v5 + 7),
         0);
  if ( !v7 ) /*0x4ba8a8*/
  {
    Debug::Log(); /*0x4ba8b3*/
    if ( this ) /*0x4ba8bd*/
    {
      v8 = *v6; /*0x4ba8bf*/
      v28 = 4; /*0x4ba8ca*/
      if ( !(*(int (__stdcall **)(int, int *, int *))(*(_DWORD *)v8 + 48))(v8, &v28, &v29) ) /*0x4ba8d6*/
      {
        v9 = (DSurface *)__2_YAPAXI_Z(0x24u); /*0x4ba8df*/
        if ( v9 ) /*0x4ba8e9*/
          BackBuffer = DSurface::CreateBackBuffer(v9, v29); /*0x4ba8f2*/
        else
          BackBuffer = 0; /*0x4ba8f9*/
        this->DSurface_field_0x0 = BackBuffer; /*0x4ba8ff*/
      }
    }
    memset((void *)v5[8], 0, 0x6Cu); /*0x4ba90b*/
    *(_DWORD *)v5[8] = 108; /*0x4ba910*/
    if ( (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)*v6 + 88))(*v6, v5[8]) ) /*0x4ba91f*/
      Debug::Log(); /*0x4ba92b*/
    v11 = (_DWORD *)v5[8]; /*0x4ba933*/
    v5[4] = (unsigned int)(v11[21] + 7) >> 3; /*0x4ba948*/
    v12 = (v11[26] & 0x4000) != 0; /*0x4ba951*/
    *((_BYTE *)v5 + 24) = 1; /*0x4ba954*/
    *((_BYTE *)v5 + 25) = v12; /*0x4ba958*/
    v5[1] = v11[3]; /*0x4ba95e*/
    v13 = v11[2]; /*0x4ba961*/
    v14 = *v6; /*0x4ba964*/
    v5[2] = v13; /*0x4ba966*/
    g_DDraw_PrimarySurface = v14; /*0x4ba969*/
    if ( !g_lpDirectDraw7->lpVtbl->CreateClipper(g_lpDirectDraw7, 0, (LPDIRECTDRAWCLIPPER *)&g_DDraw_Clipper, 0) ) /*0x4ba976*/
    {
      v15 = *(_DWORD *)g_DDraw_Clipper; /*0x4ba983*/
      ActiveWindow = GetActiveWindow(); /*0x4ba985*/
      if ( !(*(int (__stdcall **)(int, _DWORD, HWND))(v15 + 32))(g_DDraw_Clipper, 0, ActiveWindow) ) /*0x4ba994*/
        (*(void (__stdcall **)(int, int))(*(_DWORD *)*v6 + 112))(*v6, g_DDraw_Clipper); /*0x4ba9a7*/
    }
    qmemcpy(&g_DDraw_PixelFormatDesc, (const void *)(v5[8] + 72), 0x20u); /*0x4ba9ba*/
    if ( (*(int (__thiscall **)(_DWORD *))(*v5 + 112))(v5) != 2 ) /*0x4ba9c7*/
      goto LABEL_60; /*0x4ba9c7*/
    v17 = g_DDraw_RedMask; /*0x4ba9cd*/
    v18 = 0; /*0x4ba9d2*/
    v19 = 0; /*0x4ba9d4*/
    g_BitShift_Red = 0; /*0x4ba9d6*/
    g_BitShift_Green_0 = 0; /*0x4ba9dc*/
    do /*0x4ba9ec*/
    {
      if ( (v17 & 1) != 0 ) /*0x4ba9e4*/
        break; /*0x4ba9e4*/
      v17 >>= 1; /*0x4ba9e6*/
      ++v18; /*0x4ba9e8*/
    }
    while ( v18 < 16 ); /*0x4ba9ec*/
    g_BitShift_Red = v18; /*0x4ba9ee*/
    do /*0x4ba9fe*/
    {
      if ( (v17 & 0x80u) != 0 ) /*0x4ba9f6*/
        break; /*0x4ba9f6*/
      LOBYTE(v17) = 2 * v17; /*0x4ba9f8*/
      ++v19; /*0x4ba9fa*/
    }
    while ( v19 < 8 ); /*0x4ba9fe*/
    v20 = g_DDraw_GreenMask; /*0x4baa00*/
    v21 = 0; /*0x4baa05*/
    v22 = 0; /*0x4baa07*/
    g_BitShift_Green_0 = v19; /*0x4baa09*/
    g_BitMask_Green = 0; /*0x4baa0f*/
    g_BitMask_Blue = 0; /*0x4baa15*/
    do /*0x4baa25*/
    {
      if ( (v20 & 1) != 0 ) /*0x4baa1d*/
        break; /*0x4baa1d*/
      ++v21; /*0x4baa1f*/
      v20 >>= 1; /*0x4baa20*/
    }
    while ( v21 < 16 ); /*0x4baa25*/
    g_BitMask_Green = v21; /*0x4baa27*/
    do /*0x4baa37*/
    {
      if ( (v20 & 0x80u) != 0 ) /*0x4baa2f*/
        break; /*0x4baa2f*/
      ++v22; /*0x4baa31*/
      LOBYTE(v20) = 2 * v20; /*0x4baa32*/
    }
    while ( v22 < 8 ); /*0x4baa37*/
    v23 = g_DDraw_BlueMask; /*0x4baa39*/
    v24 = 0; /*0x4baa3f*/
    v25 = 0; /*0x4baa41*/
    g_BitMask_Blue = v22; /*0x4baa43*/
    g_BitShift_Blue = 0; /*0x4baa49*/
    g_BitMask_Red = 0; /*0x4baa4e*/
    do /*0x4baa5f*/
    {
      if ( (v23 & 1) != 0 ) /*0x4baa57*/
        break; /*0x4baa57*/
      ++v24; /*0x4baa59*/
      v23 >>= 1; /*0x4baa5a*/
    }
    while ( v24 < 16 ); /*0x4baa5f*/
    g_BitShift_Blue = v24; /*0x4baa61*/
    do /*0x4baa71*/
    {
      if ( (v23 & 0x80u) != 0 ) /*0x4baa69*/
        break; /*0x4baa69*/
      ++v25; /*0x4baa6b*/
      LOBYTE(v23) = 2 * v23; /*0x4baa6c*/
    }
    while ( v25 < 8 ); /*0x4baa71*/
    g_BitMask_Red = v25; /*0x4baa83*/
    stru_820320.Rate = -1; /*0x4baa89*/
    LOWORD(g_DDraw_Gray127) = (127 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4baac1*/
                            | (127 >> v22 << g_BitMask_Green)
                            | (127 >> v25 << v24);
    HIWORD(g_DDraw_Gray127) = (63 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4baaff*/
                            | (63 >> v22 << g_BitMask_Green)
                            | (63 >> v25 << v24);
    word_8A0DEC = (31 >> g_BitShift_Green_0 << g_BitShift_Red) | (31 >> v22 << g_BitMask_Green) | (31 >> v25 << v24); /*0x4bab38*/
    if ( v24 ) /*0x4bab3f*/
      goto LABEL_60; /*0x4bab3f*/
    if ( v25 == 3 ) /*0x4bab4c*/
    {
      if ( g_BitMask_Green != 5 ) /*0x4bab55*/
        goto LABEL_60; /*0x4bab55*/
      if ( v22 != 3 ) /*0x4bab5d*/
      {
        if ( v22 == 2 && g_BitShift_Red == 11 && g_BitShift_Green_0 == 3 ) /*0x4babd2*/
        {
          stru_820320.Rate = 2; /*0x4babd9*/
          Debug::Log(); /*0x4babdf*/
          return v5; /*0x4babf0*/
        }
        goto LABEL_60; /*0x4babd2*/
      }
      if ( g_BitShift_Red == 10 ) /*0x4bab66*/
      {
        if ( g_BitShift_Green_0 == 3 ) /*0x4bab72*/
        {
          stru_820320.Rate = 0; /*0x4bab7d*/
          Debug::Log(); /*0x4bab87*/
          return v5; /*0x4bab98*/
        }
        goto LABEL_60; /*0x4bab72*/
      }
      if ( g_BitShift_Red != 11 || g_BitShift_Green_0 != 2 ) /*0x4bac05*/
      {
LABEL_60:
        Debug::Log(); /*0x4bac11*/
        return v5; /*0x4bac27*/
      }
    }
    else if ( v25 != 2 || g_BitMask_Green != 6 || v22 != 3 || g_BitShift_Red != 11 || g_BitShift_Green_0 != 3 ) /*0x4babba*/
    {
      goto LABEL_60; /*0x4babba*/
    }
    stru_820320.Rate = 1; /*0x4bac07*/
    goto LABEL_60; /*0x4bac07*/
  }
  DDraw::LogError(v7, 1); /*0x4bac2f*/
  Debug::Log(); /*0x4bac3a*/
  if ( v5 ) /*0x4bac44*/
    (*(void (__thiscall **)(_DWORD *, int))*v5)(v5, 1); /*0x4bac4d*/
  return 0; /*0x4bab91*/
}



// ==== 0x004BAC60  DSurface::CreateBackBuffer  this=DSurface  sig=csp ====
_DWORD *__thiscall DSurface::CreateBackBuffer(DSurface *this, int a2)
{
  void *v3; // edi
  void *DSurface_field_0x20; // eax

  this->DSurface_field_0x4 = 0; /*0x4bac6b*/
  this->DSurface_field_0x8 = 0; /*0x4bac6e*/
  this->DSurface_field_0xC = 0; /*0x4bac71*/
  this->DSurface_field_0x10 = 0; /*0x4bac74*/
  this->DSurface_field_0x14 = 0; /*0x4bac77*/
  LOBYTE(this->DSurface_field_0x18) = 0; /*0x4bac7a*/
  BYTE1(this->DSurface_field_0x18) = 0; /*0x4bac7d*/
  this->DSurface_field_0x1C[0] = a2; /*0x4bac80*/
  this->DSurface_field_0x20 = 0; /*0x4bac83*/
  this->DSurface_field_0x0 = &DSurface_Vtable; /*0x4bac86*/
  if ( a2 ) /*0x4bac8c*/
  {
    v3 = (void *)__2_YAPAXI_Z(0x6Cu); /*0x4bac96*/
    this->DSurface_field_0x20 = v3; /*0x4bac9f*/
    memset(v3, 0, 0x6Cu); /*0x4baca2*/
    *(_DWORD *)this->DSurface_field_0x20 = 108; /*0x4bacaa*/
    if ( !(*(int (__stdcall **)(int, void *))(*(_DWORD *)this->DSurface_field_0x1C[0] + 88))( /*0x4bacba*/
            this->DSurface_field_0x1C[0],
            this->DSurface_field_0x20) )
    {
      DSurface_field_0x20 = this->DSurface_field_0x20; /*0x4bacc2*/
      this->DSurface_field_0x10 = (void *)((unsigned int)(*((_DWORD *)DSurface_field_0x20 + 21) + 7) >> 3); /*0x4bacce*/
      BYTE1(this->DSurface_field_0x18) = (*((_DWORD *)DSurface_field_0x20 + 26) & 0x4000) != 0; /*0x4bacda*/
      this->DSurface_field_0x4 = (void *)*((_DWORD *)DSurface_field_0x20 + 3); /*0x4bace0*/
      this->DSurface_field_0x8 = (void *)*((_DWORD *)DSurface_field_0x20 + 2); /*0x4bace6*/
    }
  }
  return &this->DSurface_field_0x0; /*0x4baceb*/
}



// ==== 0x004BAD60  DSurface::GetBytesPerPixel  this=DSurface  sig=csp ====
int __thiscall DSurface::GetBytesPerPixel(DSurface *this)
{
  return (int)this->DSurface_field_0x10; /*0x4bad63*/
}



// ==== 0x004BAD70  DSurface::GetPitch  this=DSurface  sig=csp ====
int __thiscall DSurface::GetPitch(DSurface *this)
{
  return *((_DWORD *)this->DSurface_field_0x20 + 4); /*0x4bad76*/
}



// ==== 0x004BAD80  DSurface::Lock  this=DSurface  sig=csp ====
void *__thiscall DSurface::Lock(DSurface *this, int a2, int a3)
{
  int v4; // eax
  void *DSurface_field_0xC; // esi
  void *DSurface_field_0x0; // edx
  int v7; // eax
  void *DSurface_field_0x20; // eax
  int v9; // esi
  _DWORD v11[27]; // [esp+28h] [ebp-6Ch] BYREF

  if ( !g_DDraw_Initialized && !stru_A8EB00.?[412] ) /*0x4bad99*/
    return 0; /*0x4bad99*/
  v4 = this->DSurface_field_0x1C[0]; /*0x4bad9f*/
  if ( v4 && (*(int (__stdcall **)(int))(*(_DWORD *)v4 + 96))(this->DSurface_field_0x1C[0]) == -2005532222 ) /*0x4badb1*/
  {
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0]) /*0x4badca*/
      || (*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
    {
      return 0; /*0x4badcf*/
    }
    DSurface_field_0xC = this->DSurface_field_0xC; /*0x4badd5*/
    if ( (int)DSurface_field_0xC > 0 ) /*0x4badda*/
    {
      DSurface_field_0x0 = this->DSurface_field_0x0; /*0x4baddc*/
      this->DSurface_field_0xC = 0; /*0x4bade0*/
      (*((void (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4bade7*/
      ++this->DSurface_field_0xC; /*0x4badf0*/
      (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4badf5*/
      this->DSurface_field_0xC = DSurface_field_0xC; /*0x4badf8*/
    }
  }
  if ( a2 >= 0 && a3 >= 0 ) /*0x4bae13*/
  {
    if ( this->DSurface_field_0xC ) /*0x4bae19*/
    {
LABEL_14:
      ++this->DSurface_field_0xC; /*0x4bae7c*/
      v9 = a3 * (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4bae90*/
      return (char *)this->DSurface_field_0x14 /*0x4baeac*/
           + a2 * (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this)
           + v9;
    }
    memset(v11, 0, sizeof(v11)); /*0x4bae2d*/
    v7 = this->DSurface_field_0x1C[0]; /*0x4bae2f*/
    v11[0] = 108; /*0x4bae38*/
    if ( !(*(int (__stdcall **)(int, _DWORD, _DWORD *, int, _DWORD))(*(_DWORD *)v7 + 100))(v7, 0, v11, 1, 0) ) /*0x4bae46*/
    {
      qmemcpy(this->DSurface_field_0x20, v11, 0x6Cu); /*0x4bae59*/
      DSurface_field_0x20 = this->DSurface_field_0x20; /*0x4bae5b*/
      this->DSurface_field_0x10 = (void *)((unsigned int)(*((_DWORD *)DSurface_field_0x20 + 21) + 7) >> 3); /*0x4bae67*/
      BYTE1(this->DSurface_field_0x18) = (*((_DWORD *)DSurface_field_0x20 + 26) & 0x4000) != 0; /*0x4bae73*/
      this->DSurface_field_0x14 = (void *)*((_DWORD *)DSurface_field_0x20 + 9); /*0x4bae79*/
      goto LABEL_14; /*0x4bae79*/
    }
  }
  return 0; /*0x4baea5*/
}



// ==== 0x004BAEC0  DSurface::CanLock  this=DSurface  sig=csp ====
int __thiscall DSurface::CanLock(DSurface *this, int a2, int a3)
{
  int result; // eax
  int v5; // eax
  _DWORD v6[27]; // [esp+4h] [ebp-6Ch] BYREF

  result = (int)this->DSurface_field_0xC; /*0x4baec6*/
  if ( !result ) /*0x4baecb*/
  {
    memset(v6, 0, sizeof(v6)); /*0x4baed9*/
    v5 = this->DSurface_field_0x1C[0]; /*0x4baedb*/
    v6[0] = 108; /*0x4baee6*/
    result = (*(int (__stdcall **)(int, _DWORD, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v5 + 100))(v5, 0, v6, 0, 0); /*0x4baef4*/
    if ( result ) /*0x4baefa*/
    {
      LOBYTE(result) = 0; /*0x4baefc*/
      return result; /*0x4baf02*/
    }
    result = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)this->DSurface_field_0x1C[0] + 128))( /*0x4baf10*/
               this->DSurface_field_0x1C[0],
               v6[9]);
  }
  LOBYTE(result) = 1; /*0x4baf16*/
  return result; /*0x4baefe*/
}



// ==== 0x004BAF20  DSurface::CheckBltStatus  this=DSurface  sig=csp ====
BOOL __thiscall DSurface::CheckBltStatus(DSurface *this)
{
  return (*(int (__stdcall **)(int, int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 52))( /*0x4baf30*/
           this->DSurface_field_0x1C[0],
           1) == 0;
}



// ==== 0x004BAF40  DSurface::Unlock  this=DSurface  sig=csp ====
int __thiscall DSurface::Unlock(DSurface *this)
{
  int v2; // eax
  void *DSurface_field_0xC; // edi
  void *DSurface_field_0x0; // edx
  int result; // eax

  if ( g_DDraw_Initialized || stru_A8EB00.?[412] ) /*0x4baf54*/
  {
    v2 = this->DSurface_field_0x1C[0]; /*0x4baf56*/
    if ( v2 ) /*0x4baf5b*/
    {
      if ( (*(int (__stdcall **)(int))(*(_DWORD *)v2 + 96))(this->DSurface_field_0x1C[0]) == -2005532222 /*0x4baf7d*/
        && !(*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0])
        && !(*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
      {
        DSurface_field_0xC = this->DSurface_field_0xC; /*0x4baf84*/
        if ( (int)DSurface_field_0xC > 0 ) /*0x4baf89*/
        {
          DSurface_field_0x0 = this->DSurface_field_0x0; /*0x4baf8b*/
          this->DSurface_field_0xC = 0; /*0x4baf93*/
          (*((void (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4baf96*/
          ++this->DSurface_field_0xC; /*0x4baf9f*/
          (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bafa4*/
          this->DSurface_field_0xC = DSurface_field_0xC; /*0x4bafa7*/
        }
      }
    }
  }
  result = (int)this->DSurface_field_0xC; /*0x4bafaa*/
  if ( result <= 0 ) /*0x4bafaf*/
  {
    LOBYTE(result) = 0; /*0x4bafd6*/
  }
  else
  {
    this->DSurface_field_0xC = (void *)--result; /*0x4bafb4*/
    if ( !result ) /*0x4bafb7*/
    {
      result = (*(int (__stdcall **)(int, void *))(*(_DWORD *)this->DSurface_field_0x1C[0] + 128))( /*0x4bafc3*/
                 this->DSurface_field_0x1C[0],
                 this->DSurface_field_0x14);
      this->DSurface_field_0x14 = 0; /*0x4bafc9*/
    }
    LOBYTE(result) = 1; /*0x4bafd1*/
  }
  return result; /*0x4bafd0*/
}



// ==== 0x004BAFE0  ObjectClass::method_4BAFE0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_4BAFE0(ObjectClass *this)
{
  int referenceCount; // eax

  referenceCount = this->?; /*0x4bafe0*/
  return referenceCount && (*(int (__stdcall **)(int))(*(_DWORD *)referenceCount + 96))(referenceCount) == -2005532222; /*0x4baff9*/
}



// ==== 0x004BB000  DSurface::RestoreIfLost  this=DSurface  sig=csp ====
char __thiscall DSurface::RestoreIfLost(DSurface *this)
{
  int v3; // eax
  void *DSurface_field_0xC; // edi
  void *DSurface_field_0x0; // edx

  if ( !g_DDraw_Initialized && !stru_A8EB00.?[412] ) /*0x4bb014*/
    return 0; /*0x4bb014*/
  v3 = this->DSurface_field_0x1C[0]; /*0x4bb01b*/
  if ( v3 && (*(int (__stdcall **)(int))(*(_DWORD *)v3 + 96))(this->DSurface_field_0x1C[0]) == -2005532222 ) /*0x4bb02d*/
  {
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0]) /*0x4bb042*/
      || (*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
    {
      return 0; /*0x4bb01a*/
    }
    DSurface_field_0xC = this->DSurface_field_0xC; /*0x4bb049*/
    if ( (int)DSurface_field_0xC > 0 ) /*0x4bb04e*/
    {
      DSurface_field_0x0 = this->DSurface_field_0x0; /*0x4bb050*/
      this->DSurface_field_0xC = 0; /*0x4bb058*/
      (*((void (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4bb05b*/
      ++this->DSurface_field_0xC; /*0x4bb064*/
      (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bb069*/
      this->DSurface_field_0xC = DSurface_field_0xC; /*0x4bb06c*/
    }
  }
  return 1; /*0x4bb016*/
}



// ==== 0x004BB080  DSurface::BlitPart  this=DSurface  sig=csp ====
int __thiscall DSurface::BlitPart(DSurface *this, int a2, int a3, int a4, int a5, int a6)
{
  int (__thiscall **DSurface_field_0x0)(DSurface *, int); // ebx
  int v8; // eax
  int v9; // eax
  _BYTE v11[28]; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v12[4]; // [esp+28h] [ebp-4h] BYREF

  DSurface_field_0x0 = (int (__thiscall **)(DSurface *, int))this->DSurface_field_0x0; /*0x4bb098*/
  v8 = (*(int (__thiscall **)(int, _BYTE *, int, int, int))(*(_DWORD *)a3 + 120))(a3, v11, a4, a5, a6); /*0x4bb0a6*/
  v9 = (*((int (__thiscall **)(DSurface *, _BYTE *, int, int, int))this->DSurface_field_0x0 + 30))( /*0x4bb0b9*/
         this,
         v12,
         a5,
         a3,
         v8);
  return DSurface_field_0x0[3](this, v9); /*0x4bb0c2*/
}



// ==== 0x004BB0D0  DSurface::Blit  this=DSurface  sig=csp ====
char __thiscall DSurface::Blit(DSurface *this, int *a2, int *a3, _DWORD *a4, int *a5, int *a6, int a7, char a8)
{
  int v9; // ecx
  void **v10; // ebx
  int v11; // ebx
  bool v12; // zf
  char v13; // al
  int v14; // eax
  void *DSurface_field_0x0; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int (__thiscall **v24)(void **, _DWORD *); // edx
  Rect *v25; // eax
  int Y; // ecx
  int Width; // edx
  int v28; // esi
  int v29; // eax
  bool v30; // cc
  int Height; // ebx
  int X; // eax
  int (__thiscall **v33)(DSurface *, int *); // edx
  int *v34; // edi
  int v35; // eax
  int v36; // ebx
  int v37; // ecx
  int v38; // edx
  int v39; // esi
  int v40; // edi
  int v41; // edx
  char v42; // [esp+1Bh] [ebp-85h]
  Rect v43; // [esp+1Ch] [ebp-84h] BYREF
  void *DSurface_field_0xC; // [esp+2Ch] [ebp-74h]
  int v45; // [esp+30h] [ebp-70h]
  int v46; // [esp+34h] [ebp-6Ch]
  int v47; // [esp+38h] [ebp-68h]
  DSurface *v48; // [esp+3Ch] [ebp-64h]
  int v49; // [esp+40h] [ebp-60h] BYREF
  int v50; // [esp+44h] [ebp-5Ch]
  int v51; // [esp+48h] [ebp-58h]
  int v52; // [esp+4Ch] [ebp-54h]
  _DWORD v53[2]; // [esp+50h] [ebp-50h] BYREF
  int v54; // [esp+58h] [ebp-48h]
  int v55; // [esp+5Ch] [ebp-44h]
  int v56; // [esp+60h] [ebp-40h] BYREF
  int v57; // [esp+64h] [ebp-3Ch]
  int v58; // [esp+68h] [ebp-38h]
  int v59; // [esp+6Ch] [ebp-34h]
  int v60; // [esp+70h] [ebp-30h] BYREF
  int v61; // [esp+74h] [ebp-2Ch]
  int v62; // [esp+78h] [ebp-28h]
  int v63; // [esp+7Ch] [ebp-24h]
  int v64; // [esp+80h] [ebp-20h] BYREF
  int v65; // [esp+84h] [ebp-1Ch]
  int v66; // [esp+88h] [ebp-18h]
  int v67; // [esp+8Ch] [ebp-14h]
  int v68[4]; // [esp+90h] [ebp-10h] BYREF

  v9 = a2[2]; /*0x4bb0e1*/
  v48 = this; /*0x4bb0e8*/
  if ( v9 <= 0 || a2[3] <= 0 || a5[2] <= 0 || a5[3] <= 0 || a3[2] <= 0 || a3[3] <= 0 || a6[2] <= 0 || a6[3] <= 0 ) /*0x4bb14e*/
    return 0; /*0x4bb14e*/
  v10 = (void **)a4; /*0x4bb154*/
  v42 = 0; /*0x4bb15b*/
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a4 + 132))(a4) /*0x4bb19d*/
    || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a4 + 108))(a4) == 1
    || (_BYTE)a7 == 1
    || (v11 = (*(int (__thiscall **)(_DWORD *))(*a4 + 112))(a4),
        v12 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this) == v11,
        v10 = (void **)a4,
        !v12) )
  {
    v42 = 1; /*0x4bb19f*/
  }
  if ( LOBYTE(this->DSurface_field_0x18) == 1 && g_DDraw_Initialized == 1 ) /*0x4bb1b1*/
    v13 = 0; /*0x4bb1b3*/
  else
    v13 = a8; /*0x4bb1b7*/
  if ( !v42 /*0x4bb1f8*/
    && v13 == 1
    && (!BYTE1(this->DSurface_field_0x18)
     || (*((unsigned __int8 (__thiscall **)(void **))*v10 + 33))(v10) == 1 && !*((_BYTE *)v10 + 25))
    && a6[2] == a3[2]
    && a6[3] == a3[3] )
  {
    v42 = 1; /*0x4bb1fa*/
  }
  if ( !g_DDraw_Initialized && !stru_A8EB00.?[412] ) /*0x4bb20f*/
    return 0; /*0x4bb20f*/
  v14 = this->DSurface_field_0x1C[0]; /*0x4bb215*/
  if ( v14 && (*(int (__stdcall **)(int))(*(_DWORD *)v14 + 96))(this->DSurface_field_0x1C[0]) == -2005532222 ) /*0x4bb227*/
  {
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0]) /*0x4bb240*/
      || (*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
    {
      return 0; /*0x4bb245*/
    }
    DSurface_field_0xC = this->DSurface_field_0xC; /*0x4bb250*/
    if ( (int)DSurface_field_0xC > 0 ) /*0x4bb254*/
    {
      DSurface_field_0x0 = this->DSurface_field_0x0; /*0x4bb256*/
      this->DSurface_field_0xC = 0; /*0x4bb25d*/
      (*((void (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4bb264*/
      ++this->DSurface_field_0xC; /*0x4bb26d*/
      (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bb273*/
      this->DSurface_field_0xC = DSurface_field_0xC; /*0x4bb27a*/
    }
  }
  if ( v42 == 1 ) /*0x4bb282*/
    return XSurface::BlitPart((XSurface *)this, (void **)a3, v10, (void **)a6, (void **)a7, 1); /*0x4bb2a2*/
  v17 = a3[1]; /*0x4bb2a7*/
  v18 = a3[2]; /*0x4bb2aa*/
  v49 = *a3; /*0x4bb2ad*/
  v19 = a3[3]; /*0x4bb2b1*/
  v50 = v17; /*0x4bb2b4*/
  v20 = *a6; /*0x4bb2b8*/
  v52 = v19; /*0x4bb2ba*/
  v21 = a6[2]; /*0x4bb2be*/
  v51 = v18; /*0x4bb2c1*/
  v22 = a6[1]; /*0x4bb2c5*/
  v56 = v20; /*0x4bb2c8*/
  v23 = a6[3]; /*0x4bb2cc*/
  v58 = v21; /*0x4bb2cf*/
  v57 = v22; /*0x4bb2d3*/
  v24 = (int (__thiscall **)(void **, _DWORD *))*v10; /*0x4bb2d7*/
  v59 = v23; /*0x4bb2dd*/
  v25 = (Rect *)v24[30](v10, v53); /*0x4bb2e4*/
  Y = 0; /*0x4bb2eb*/
  Width = 0; /*0x4bb2ed*/
  v28 = 0; /*0x4bb2f1*/
  v43 = *v25; /*0x4bb2f3*/
  v45 = a5[2]; /*0x4bb318*/
  if ( v45 <= 0 ) /*0x4bb31c*/
    goto LABEL_53; /*0x4bb31c*/
  v46 = a5[3]; /*0x4bb327*/
  if ( v46 <= 0 || v25->Width <= 0 || v25->Height <= 0 ) /*0x4bb341*/
    goto LABEL_53; /*0x4bb341*/
  v29 = *a5; /*0x4bb352*/
  v30 = v43.X < *a5; /*0x4bb354*/
  v47 = *a5; /*0x4bb356*/
  if ( v30 ) /*0x4bb35a*/
  {
    v43.Width += v43.X - v29; /*0x4bb364*/
    v43.X = v47; /*0x4bb36c*/
  }
  if ( v43.Width < 1 ) /*0x4bb375*/
    goto LABEL_53; /*0x4bb375*/
  DSurface_field_0xC = (void *)a5[1]; /*0x4bb38b*/
  if ( v43.Y < (int)DSurface_field_0xC ) /*0x4bb38f*/
  {
    v43.Height += v43.Y - (_DWORD)DSurface_field_0xC; /*0x4bb399*/
    v43.Y = (int)DSurface_field_0xC; /*0x4bb3a1*/
  }
  if ( v43.Height < 1 ) /*0x4bb3aa*/
    goto LABEL_53; /*0x4bb3aa*/
  if ( v43.X + v43.Width > v45 + v47 ) /*0x4bb3be*/
    v43.Width = v45 + v47 - v43.X; /*0x4bb3cc*/
  if ( v43.Width < 1 ) /*0x4bb3d5*/
    goto LABEL_53; /*0x4bb3d5*/
  Height = v43.Height; /*0x4bb3e5*/
  if ( v43.Height + v43.Y > (int)DSurface_field_0xC + v46 ) /*0x4bb3ed*/
    Height = (int)DSurface_field_0xC + v46 - v43.Y; /*0x4bb3f3*/
  if ( Height < 1 ) /*0x4bb3f8*/
  {
LABEL_53:
    X = 0; /*0x4bb40a*/
  }
  else
  {
    X = v43.X; /*0x4bb3fa*/
    Y = v43.Y; /*0x4bb3fe*/
    Width = v43.Width; /*0x4bb402*/
    v28 = Height; /*0x4bb406*/
  }
  v61 = Y; /*0x4bb40c*/
  v60 = X; /*0x4bb414*/
  v62 = Width; /*0x4bb418*/
  v33 = (int (__thiscall **)(DSurface *, int *))v48->DSurface_field_0x0; /*0x4bb41c*/
  v63 = v28; /*0x4bb426*/
  v34 = (int *)v33[30](v48, v68); /*0x4bb439*/
  Rect::Set(&v43, 0, 0, 0, 0); /*0x4bb43b*/
  v35 = *v34; /*0x4bb449*/
  v36 = a2[2]; /*0x4bb44b*/
  v37 = v34[1]; /*0x4bb450*/
  v38 = v34[2]; /*0x4bb453*/
  v54 = v38; /*0x4bb456*/
  v39 = v34[3]; /*0x4bb45a*/
  if ( v36 <= 0 ) /*0x4bb45d*/
    goto LABEL_71; /*0x4bb45d*/
  v45 = a2[3]; /*0x4bb468*/
  if ( v45 <= 0 || v34[2] <= 0 || v34[3] <= 0 ) /*0x4bb47a*/
    goto LABEL_71; /*0x4bb47a*/
  v40 = *a2; /*0x4bb483*/
  if ( v35 < *a2 ) /*0x4bb488*/
  {
    v38 += v35 - v40; /*0x4bb48c*/
    v35 = *a2; /*0x4bb48e*/
    v54 = v38; /*0x4bb490*/
  }
  if ( v38 < 1 ) /*0x4bb497*/
    goto LABEL_71; /*0x4bb497*/
  v46 = a2[1]; /*0x4bb49e*/
  if ( v37 < v46 ) /*0x4bb4a2*/
  {
    v39 += v37 - v46; /*0x4bb4a6*/
    v37 = v46; /*0x4bb4a8*/
  }
  if ( v39 < 1 ) /*0x4bb4ad*/
    goto LABEL_71; /*0x4bb4ad*/
  v41 = v35 + v38 <= v40 + v36 ? v54 : v36 + v40 - v35;
  if ( v41 < 1 ) /*0x4bb4c7*/
    goto LABEL_71; /*0x4bb4c7*/
  if ( v39 + v37 > v46 + v45 ) /*0x4bb4d8*/
    v39 = v46 + v45 - v37; /*0x4bb4dc*/
  if ( v39 < 1 ) /*0x4bb4e1*/
  {
LABEL_71:
    v35 = v43.X; /*0x4bb4e3*/
    v37 = v43.Y; /*0x4bb4e7*/
    v41 = v43.Width; /*0x4bb4eb*/
    v39 = v43.Height; /*0x4bb4ef*/
  }
  v65 = v37; /*0x4bb4f3*/
  v66 = v41; /*0x4bb4f7*/
  v64 = v35; /*0x4bb513*/
  v67 = v39; /*0x4bb51a*/
  if ( (unsigned __int8)IntersectSurfaceRects(&v49, (int)&v64, &v56, (int)&v60) ) /*0x4bb521*/
  {
    v53[0] = v64 + v49; /*0x4bb544*/
    v53[1] = v65 + v50; /*0x4bb552*/
    v55 = v50 + v65 + v52; /*0x4bb56e*/
    v54 = v49 + v64 + v51; /*0x4bb576*/
    v43.X = v60 + v56; /*0x4bb57d*/
    v43.Y = v61 + v57; /*0x4bb588*/
    v43.Height = v57 + v61 + v59; /*0x4bb5a0*/
    v43.Width = v56 + v60 + v58; /*0x4bb5a4*/
    return (*(int (__stdcall **)(int, _DWORD *, _DWORD, Rect *, int, _DWORD))(*(_DWORD *)v48->DSurface_field_0x1C[0] + 20))( /*0x4bb5d5*/
             v48->DSurface_field_0x1C[0],
             v53,
             a4[7],
             &v43,
             0x1000000,
             0) == 0;
  }
  return 0; /*0x4bb298*/
}



// ==== 0x004BB5F0  DSurface::FillRect  this=DSurface  sig=csp ====
int __thiscall DSurface::FillRect(DSurface *this, int a2, int a3)
{
  int v4; // eax
  int result; // eax
  _BYTE v6[16]; // [esp+4h] [ebp-10h] BYREF

  v4 = (*((int (__thiscall **)(DSurface *, _BYTE *))this->DSurface_field_0x0 + 30))(this, v6); /*0x4bb609*/
  LOBYTE(result) = DSurface::FillRectEx(this, v4, a2, a3); /*0x4bb60f*/
  return result; /*0x4bb614*/
}



// ==== 0x004BB620  DSurface::FillRectEx  this=DSurface  sig=csp ====
char __thiscall DSurface::FillRectEx(DSurface *this, int a2, int a3, int a4)
{
  int v5; // eax
  void *DSurface_field_0xC; // ebx
  void *DSurface_field_0x0; // edx
  int *v8; // eax
  int *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ebx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // edi
  int *v18; // edi
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // edi
  int v23; // esi
  int v25; // [esp+20h] [ebp-B4h] BYREF
  int v26; // [esp+24h] [ebp-B0h]
  int v27; // [esp+28h] [ebp-ACh]
  int v28; // [esp+2Ch] [ebp-A8h]
  _DWORD v29[4]; // [esp+30h] [ebp-A4h] BYREF
  int v30[4]; // [esp+40h] [ebp-94h] BYREF
  _DWORD v31[4]; // [esp+50h] [ebp-84h] BYREF
  char v32[16]; // [esp+60h] [ebp-74h] BYREF
  _DWORD v33[25]; // [esp+70h] [ebp-64h] BYREF

  if ( this->DSurface_field_0x1C[0] && *(int *)(a3 + 8) > 0 && *(int *)(a3 + 12) > 0 ) /*0x4bb64d*/
  {
    if ( !LOBYTE(stru_820320.Start) /*0x4bb675*/
      || (*((unsigned __int8 (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 27))(this)
      || (*(int (__stdcall **)(int, int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 52))(
           this->DSurface_field_0x1C[0],
           1) )
    {
      return XSurface::FillRectEx((XSurface *)this, (_DWORD *)a2, (int *)a3, a4); /*0x4bb81d*/
    }
    if ( g_DDraw_Initialized || stru_A8EB00.?[412] ) /*0x4bb690*/
    {
      v5 = this->DSurface_field_0x1C[0]; /*0x4bb696*/
      if ( !v5 || (*(int (__stdcall **)(int))(*(_DWORD *)v5 + 96))(this->DSurface_field_0x1C[0]) != -2005532222 ) /*0x4bb6a8*/
        goto LABEL_15; /*0x4bb6a8*/
      if ( !(*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0]) /*0x4bb6c1*/
        && !(*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
      {
        DSurface_field_0xC = this->DSurface_field_0xC; /*0x4bb6cc*/
        if ( (int)DSurface_field_0xC > 0 ) /*0x4bb6d1*/
        {
          DSurface_field_0x0 = this->DSurface_field_0x0; /*0x4bb6d3*/
          this->DSurface_field_0xC = 0; /*0x4bb6db*/
          (*((void (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4bb6de*/
          ++this->DSurface_field_0xC; /*0x4bb6e7*/
          (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bb6ec*/
          this->DSurface_field_0xC = DSurface_field_0xC; /*0x4bb6ef*/
        }
LABEL_15:
        v8 = (int *)(*((int (__thiscall **)(DSurface *, char *))this->DSurface_field_0x0 + 30))(this, v32); /*0x4bb6f2*/
        v9 = ClipRectIntersection(v31, (int *)a2, v8, 0, 0); /*0x4bb710*/
        v30[0] = *v9; /*0x4bb719*/
        v30[1] = v9[1]; /*0x4bb722*/
        v30[2] = v9[2]; /*0x4bb729*/
        v10 = *(_DWORD *)a3; /*0x4bb72d*/
        v11 = v9[3]; /*0x4bb72f*/
        v12 = *(_DWORD *)a2; /*0x4bb732*/
        v13 = *(_DWORD *)(a2 + 4); /*0x4bb734*/
        v30[3] = v11; /*0x4bb737*/
        v14 = *(_DWORD *)(a3 + 4); /*0x4bb73b*/
        v25 = v10 + v12; /*0x4bb740*/
        v15 = v13 + v14; /*0x4bb748*/
        v16 = *(_DWORD *)(a3 + 8); /*0x4bb74b*/
        v17 = *(_DWORD *)(a3 + 12); /*0x4bb74e*/
        v26 = v15; /*0x4bb751*/
        v27 = v16; /*0x4bb755*/
        v28 = v17; /*0x4bb762*/
        v18 = ClipRectIntersection(v31, &v25, v30, 0, 0); /*0x4bb76b*/
        v19 = *v18; /*0x4bb76d*/
        v25 = *v18; /*0x4bb76f*/
        v20 = v18[1]; /*0x4bb773*/
        v26 = v20; /*0x4bb776*/
        v21 = v18[2]; /*0x4bb77a*/
        v27 = v21; /*0x4bb77d*/
        v22 = v18[3]; /*0x4bb781*/
        v28 = v22; /*0x4bb786*/
        if ( v21 > 0 && v22 > 0 ) /*0x4bb792*/
        {
          v23 = this->DSurface_field_0x1C[0]; /*0x4bb79c*/
          v29[0] = v19; /*0x4bb79f*/
          v29[2] = v19 + v21; /*0x4bb7a3*/
          v29[3] = v20 + v22; /*0x4bb7a7*/
          v29[1] = v20; /*0x4bb7b6*/
          memset(v33, 0, sizeof(v33)); /*0x4bb7ba*/
          v33[20] = a4; /*0x4bb7c8*/
          v33[0] = 100; /*0x4bb7da*/
          return (*(int (__stdcall **)(int, _DWORD *, _DWORD, _DWORD, int, _DWORD *))(*(_DWORD *)v23 + 20))( /*0x4bb7f9*/
                   v23,
                   v29,
                   0,
                   0,
                   16778240,
                   v33) == 0;
        }
      }
    }
  }
  return 0; /*0x4bb7ef*/
}



// ==== 0x004BB830  DSurface::FillRectWithFlags  this=DSurface  sig=csp ====
char __userpurge DSurface::FillRectWithFlags@<al>(DSurface *this, int a2@<ebx>, int a3, _BYTE *a4, unsigned int a5)
{
  int v5; // ecx
  int v6; // edi
  int *v8; // eax
  _DWORD *v9; // eax
  int v10; // ecx
  unsigned int v11; // ebp
  unsigned int v12; // esi
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // edx
  unsigned int v16; // edi
  int v17; // edx
  int v18; // ebx
  int v19; // ebx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // edx
  int v23; // esi
  int v24; // edi
  unsigned __int16 *v25; // eax
  int v26; // eax
  __int16 v27; // bp
  int v28; // ebx
  int v29; // [esp+10h] [ebp-5Ch]
  __int16 v30; // [esp+14h] [ebp-58h]
  __int16 v31; // [esp+18h] [ebp-54h]
  int v32; // [esp+1Ch] [ebp-50h]
  unsigned __int16 v33; // [esp+20h] [ebp-4Ch]
  unsigned int v34; // [esp+24h] [ebp-48h]
  int v35; // [esp+28h] [ebp-44h]
  unsigned int v36; // [esp+2Ch] [ebp-40h]
  __int16 i; // [esp+38h] [ebp-34h]
  _DWORD v38[4]; // [esp+3Ch] [ebp-30h] BYREF
  _DWORD v39[2]; // [esp+4Ch] [ebp-20h] BYREF
  int v40; // [esp+54h] [ebp-18h]
  int v41; // [esp+58h] [ebp-14h]
  _DWORD v42[4]; // [esp+5Ch] [ebp-10h] BYREF
  DSurface *thisa; // [esp+70h] [ebp+4h]
  _WORD *v44; // [esp+74h] [ebp+8h]
  unsigned int v45; // [esp+78h] [ebp+Ch]

  v6 = v5; /*0x4bb837*/
  v32 = v5; /*0x4bb839*/
  if ( (*(int (**)(void))(*(_DWORD *)v5 + 112))() < 2 ) /*0x4bb845*/
    return 0; /*0x4bb847*/
  if ( (int)this->DSurface_field_0x8 <= 0 || (int)this->DSurface_field_0xC <= 0 ) /*0x4bb863*/
    return 0; /*0x4bb865*/
  v8 = (int *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v6 + 120))(v6, v38); /*0x4bb87a*/
  v9 = ClipRectIntersection(v42, v8, (int *)this, 0, 0); /*0x4bb888*/
  v39[0] = *v9; /*0x4bb891*/
  v39[1] = v9[1]; /*0x4bb898*/
  v40 = v9[2]; /*0x4bb89f*/
  v10 = v9[3]; /*0x4bb8a3*/
  v41 = v10; /*0x4bb8a8*/
  if ( v40 <= 0 || v10 <= 0 ) /*0x4bb8b0*/
    return 0; /*0x4bb8b2*/
  v11 = 0xFFu >> g_BitShift_Green_0 << g_BitShift_Red; /*0x4bb8de*/
  v31 = v11; /*0x4bb8f1*/
  v12 = 0xFFu >> g_BitMask_Blue << g_BitMask_Green; /*0x4bb8f5*/
  v30 = v12; /*0x4bb908*/
  v34 = 0xFFu >> g_BitMask_Red << g_BitShift_Blue; /*0x4bb917*/
  v13 = CellStruct::Copy((CellStruct *)v39, v38); /*0x4bb91b*/
  v35 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v6 + 92))(v6, *v13, v13[1]); /*0x4bb938*/
  if ( !v35 ) /*0x4bb93c*/
    return 0; /*0x4bb93e*/
  v14 = (int)a4; /*0x4bb94a*/
  if ( (unsigned int)a4 > 0x64 ) /*0x4bb951*/
    v14 = 100; /*0x4bb953*/
  v15 = (1374389535 * (unsigned __int64)(unsigned int)(255 * v14)) >> 32; /*0x4bb967*/
  v16 = 255 * v14 / 0x64u; /*0x4bb970*/
  v33 = 255 - v16; /*0x4bb97b*/
  v45 = v16; /*0x4bb983*/
  thisa = 0; /*0x4bb987*/
  LOWORD(a2) = (unsigned __int8)(*(_BYTE *)(a3 + 2) >> g_BitMask_Red); /*0x4bb99a*/
  LOWORD(v15) = (unsigned __int8)(*(_BYTE *)(a3 + 1) >> g_BitMask_Blue); /*0x4bb9b1*/
  v17 = v15 << g_BitMask_Green; /*0x4bb9b5*/
  v18 = v17 | (a2 << g_BitShift_Blue); /*0x4bb9c5*/
  LOWORD(v17) = (unsigned __int8)(*(_BYTE *)a3 >> g_BitShift_Green_0); /*0x4bb9ca*/
  v19 = (v17 << g_BitShift_Red) | v18; /*0x4bb9d2*/
  for ( i = v19; (int)thisa < v41; thisa = (DSurface *)((char *)thisa + 1) ) /*0x4bb9da*/
  {
    v29 = 0; /*0x4bb9ed*/
    v20 = (_DWORD)thisa * ((*(int (__thiscall **)(int))(*(_DWORD *)v32 + 116))(v32) / 2); /*0x4bb9fa*/
    if ( v40 > 0 ) /*0x4bba01*/
    {
      v11 = (unsigned __int16)v11; /*0x4bba0f*/
      v21 = (unsigned __int16)v12; /*0x4bba15*/
      v22 = v16 * (v12 & (unsigned __int16)v19); /*0x4bba23*/
      v23 = v16 * (unsigned __int16)(v19 & v11); /*0x4bba26*/
      v24 = v45 * (unsigned __int16)(v19 & v34); /*0x4bba4b*/
      v25 = (unsigned __int16 *)(v35 + 2 * v20); /*0x4bba50*/
      v36 = (unsigned __int16)v11; /*0x4bba53*/
      v44 = v25; /*0x4bba57*/
      while ( 1 ) /*0x4bba68*/
      {
        v26 = *v25; /*0x4bba68*/
        v27 = v30 & ((v22 + v33 * (v26 & v21)) >> 8) | v31 & ((v23 + v33 * (v26 & v11)) >> 8); /*0x4bba8b*/
        v28 = (unsigned __int16)(v26 & v34); /*0x4bba91*/
        v25 = v44 + 1; /*0x4bba9c*/
        *v44++ = ((v24 + (unsigned int)v33 * v28) >> 8) | v27; /*0x4bbaa8*/
        if ( ++v29 >= v40 ) /*0x4bbabb*/
          break; /*0x4bbabb*/
        v11 = v36; /*0x4bba5d*/
      }
      LOWORD(v12) = v30; /*0x4bbabd*/
      LOWORD(v19) = i; /*0x4bbac1*/
      LOWORD(v11) = v31; /*0x4bbac5*/
      v16 = v45; /*0x4bbac9*/
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v32 + 96))(v32); /*0x4bbae8*/
  return 1; /*0x4bb849*/
}



// ==== 0x004BBB00  DSurface::BlitStretch  this=CampaignClass  sig=csp ====
void __fastcall sub_4BBB00(int a1, int a2, int a3)
{
  int v3; // esi
  int v5; // eax
  int i; // ebp
  unsigned __int8 *v7; // ecx
  int v8; // esi
  int v9; // edi
  int v10; // edx
  bool v11; // zf
  int v12; // [esp+8h] [ebp-Ch]
  int v13; // [esp+Ch] [ebp-8h]

  v3 = a2; /*0x4bbb05*/
  if ( a2 >= 1 && a2 - 1 >= 0 )
  {
    v12 = 0; /*0x4bbb24*/
    v13 = a2; /*0x4bbb2c*/
    while ( 1 )
    {
      v5 = v3 <= 1 ? 0x10000 : v12 / (v3 - 1);
      for ( i = 0; i < 256; ++i ) /*0x4bbb4c*/
      {
        v7 = (unsigned __int8 *)(a3 + 2 * (i % 256) + i % 256); /*0x4bbb67*/
        v8 = (v5 * *v7) >> 16; /*0x4bbb84*/
        v9 = (v5 * v7[1]) >> 16; /*0x4bbb87*/
        v10 = (v5 * v7[2]) >> 16; /*0x4bbb8a*/
        if ( v8 >= 255 ) /*0x4bbb93*/
          v8 = 255; /*0x4bbb95*/
        if ( v9 >= 255 ) /*0x4bbba0*/
          v9 = 255; /*0x4bbba2*/
        if ( v10 >= 255 ) /*0x4bbbad*/
          v10 = 255; /*0x4bbbaf*/
        a1 += 2; /*0x4bbbba*/
        *(_WORD *)(a1 - 2) = (v8 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4bbbec*/
                           | (v9 >> g_BitMask_Blue << g_BitMask_Green)
                           | (v10 >> g_BitMask_Red << g_BitShift_Blue);
      }
      v11 = v13 == 1; /*0x4bbc0a*/
      v12 += 0x20000; /*0x4bbc0b*/
      --v13; /*0x4bbc0f*/
      if ( v11 ) /*0x4bbc13*/
        break; /*0x4bbc13*/
      v3 = a2; /*0x4bbb32*/
    }
  }
}



// ==== 0x004BBC30  GetBitShift_Red  this=-  sig=ida-proto ====
int GetBitShift_Red()
{
  return g_BitShift_Red; /*0x4bbc35*/
}



// ==== 0x004BBC40  GetBitShift_Green  this=AbstractClass  sig=ida-proto ====
int GetBitShift_Green()
{
  return g_BitShift_Green_0; /*0x4bbc45*/
}



// ==== 0x004BBC50  GetBitMask_Green  this=-  sig=ida-proto ====
int GetBitMask_Green()
{
  return g_BitMask_Green; /*0x4bbc55*/
}



// ==== 0x004BBC60  GetBitMask_Blue  this=-  sig=ida-proto ====
int GetBitMask_Blue()
{
  return g_BitMask_Blue; /*0x4bbc65*/
}



// ==== 0x004BBC70  GetBitShift_Blue  this=-  sig=ida-proto ====
int GetBitShift_Blue()
{
  return g_BitShift_Blue; /*0x4bbc75*/
}



// ==== 0x004BBC80  GetBitMask_Red  this=-  sig=ida-proto ====
int GetBitMask_Red()
{
  return g_BitMask_Red; /*0x4bbc85*/
}



// ==== 0x004BBC90  DDraw::GetStatus  this=DDraw  sig=ida-proto ====
int DDraw_GetStatus()
{
  return dword_8205D0; /*0x4bbc95*/
}



// ==== 0x004BBCA0  DSurface::DrawLineModulated  this=DSurface  sig=csp ====
char __fastcall DSurface::DrawLineModulated(
        DSurface *this,
        int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        int a6,
        int a7,
        int a8,
        char a9)
{
  double v9; // st7
  int (__stdcall **DSurface_field_0x0)(_DWORD *); // eax
  int *v11; // eax
  int *v12; // eax
  int v13; // esi
  int v14; // edi
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // esi
  int v19; // edx
  int v20; // ebp
  int v21; // ebx
  int v22; // edi
  int v23; // ebx
  int v24; // ebp
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  unsigned int v32; // eax
  int v33; // ebx
  int v34; // esi
  int Stream_field_04; // ebp
  int v36; // ecx
  int v37; // ebp
  int v38; // esi
  int v39; // edi
  int v40; // ebp
  int v41; // eax
  int v42; // ecx
  int v43; // esi
  int v44; // eax
  int v45; // edx
  int v46; // ebp
  Stream *v47; // esi
  unsigned __int16 v48; // ax
  int v49; // edx
  int v50; // eax
  int v51; // esi
  int v52; // edi
  _WORD *v53; // eax
  int v54; // edx
  _WORD *v55; // ecx
  int v56; // ecx
  _WORD *v57; // eax
  bool v58; // zf
  Stream *v60; // edx
  unsigned __int16 v61; // ax
  int v62; // edx
  int v63; // eax
  int v64; // esi
  int v65; // esi
  _WORD *v66; // eax
  _WORD *v67; // ecx
  int v68; // ecx
  _WORD *v69; // eax
  Stream *v70; // esi
  unsigned __int16 v71; // ax
  int v72; // edx
  int v73; // eax
  int v74; // esi
  int v75; // edx
  _WORD *v76; // eax
  int v77; // ecx
  int v78; // edi
  _WORD *v79; // eax
  _WORD *v80; // ecx
  double v81; // [esp+4h] [ebp-80h]
  double v82; // [esp+4h] [ebp-80h]
  int v83; // [esp+1Ch] [ebp-68h]
  int v84; // [esp+20h] [ebp-64h]
  int v85; // [esp+24h] [ebp-60h]
  int v86; // [esp+28h] [ebp-5Ch]
  int v87; // [esp+2Ch] [ebp-58h]
  int v88; // [esp+30h] [ebp-54h]
  int v89; // [esp+34h] [ebp-50h]
  int v90; // [esp+34h] [ebp-50h]
  int v91; // [esp+34h] [ebp-50h]
  int v92[2]; // [esp+38h] [ebp-4Ch] BYREF
  int v93; // [esp+40h] [ebp-44h] BYREF
  int v94; // [esp+44h] [ebp-40h]
  _DWORD v95[5]; // [esp+50h] [ebp-34h] BYREF
  int v96; // [esp+64h] [ebp-20h] BYREF
  int v97; // [esp+68h] [ebp-1Ch]
  int v98[2]; // [esp+6Ch] [ebp-18h] BYREF
  int v99; // [esp+74h] [ebp-10h] BYREF
  int v100; // [esp+78h] [ebp-Ch]
  int v101; // [esp+7Ch] [ebp-8h]
  int v102; // [esp+80h] [ebp-4h]
  int v103; // [esp+88h] [ebp+4h]
  int v104; // [esp+88h] [ebp+4h]
  int pad_0; // [esp+8Ch] [ebp+8h]
  _DWORD *v106; // [esp+90h] [ebp+Ch]
  _DWORD *v107; // [esp+90h] [ebp+Ch]
  int v108; // [esp+90h] [ebp+Ch]
  _DWORD *v109; // [esp+90h] [ebp+Ch]
  int v110; // [esp+98h] [ebp+14h]
  int v111; // [esp+98h] [ebp+14h]
  int v112; // [esp+9Ch] [ebp+18h]
  int v113; // [esp+9Ch] [ebp+18h]
  int v114; // [esp+9Ch] [ebp+18h]
  int v115; // [esp+9Ch] [ebp+18h]
  int v116; // [esp+9Ch] [ebp+18h]
  _WORD *SamplePosition; // [esp+9Ch] [ebp+18h]

  DSurface_field_0x0 = (int (__stdcall **)(_DWORD *))this->DSurface_field_0x0; /*0x4bbca3*/
  v95[0] = this; /*0x4bbcae*/
  v11 = (int *)DSurface_field_0x0[30](&v95[1]); /*0x4bbcb2*/
  v12 = ClipRectIntersection(&v93, (int *)a3, v11, 0, 0); /*0x4bbcc2*/
  v13 = *v12; /*0x4bbcc9*/
  v99 = *v12; /*0x4bbccb*/
  v14 = v12[1]; /*0x4bbccf*/
  v100 = v14; /*0x4bbcd2*/
  v101 = v12[2]; /*0x4bbcd9*/
  v15 = v12[3]; /*0x4bbcdd*/
  v102 = v15; /*0x4bbce2*/
  if ( v101 || v15 ) /*0x4bbcea*/
  {
    v16 = v13 + *a4; /*0x4bbd08*/
    v17 = v13 + *a5; /*0x4bbd0a*/
    v18 = a8; /*0x4bbd0c*/
    v19 = v14 + a4[1]; /*0x4bbd13*/
    v20 = v16; /*0x4bbd15*/
    v21 = v14 + a5[1]; /*0x4bbd17*/
    v22 = a7; /*0x4bbd19*/
    v96 = v16; /*0x4bbd22*/
    v97 = v19; /*0x4bbd26*/
    v98[0] = v17; /*0x4bbd2a*/
    v98[1] = v21; /*0x4bbd2e*/
    if ( v16 > v17 ) /*0x4bbd32*/
    {
      v20 = v17; /*0x4bbd34*/
      v22 = a8; /*0x4bbd36*/
      v18 = a7; /*0x4bbd38*/
      v96 = v17; /*0x4bbd3f*/
      v97 = v21; /*0x4bbd43*/
      v98[0] = v16; /*0x4bbd47*/
      v98[1] = v19; /*0x4bbd4b*/
    }
    v95[1] = v98[0]; /*0x4bbd5b*/
    v23 = v20; /*0x4bbd60*/
    v24 = v97; /*0x4bbd62*/
    v95[2] = v98[1]; /*0x4bbd6e*/
    if ( (unsigned __int8)ClipLine(&v96, v98, &v99) ) /*0x4bbd72*/
    {
      v106 = (_DWORD *)v18; /*0x4bbd8d*/
      v110 = v22; /*0x4bbd94*/
      if ( v98[0] != v95[1] || v98[1] != v95[2] ) /*0x4bbda1*/
      {
        v92[0] = v23 - v98[0]; /*0x4bbdb3*/
        v92[1] = v24 - v98[1]; /*0x4bbdb7*/
        v93 = v23 - v95[1]; /*0x4bbdc7*/
        v94 = v24 - v95[2]; /*0x4bbdcb*/
        Vector::TwoDMagnitudeMath(&v93); /*0x4bbdd3*/
        v103 = v25; /*0x4bbddc*/
        v9 = Vector::TwoDMagnitudeMath(v92); /*0x4bbde0*/
        v112 = v26; /*0x4bbde5*/
        __asm { fild [esp+78h+arg_14] } /*0x4bbdee*/
        v113 = v22 - v18; /*0x4bbdf7*/
        __asm /*0x4bbdfe*/
        {
          fidiv [esp+78h+arg_0]
          fild [esp+78h+arg_14]
          fmulp st(1), st
        }
        LOWORD(v27) = Math::RoundToInt(v9); /*0x4bbe0b*/
        v28 = abs32(v27); /*0x4bbe13*/
        if ( v22 >= v18 ) /*0x4bbe17*/
          v106 = (_DWORD *)(v22 - v28); /*0x4bbe28*/
        else
          v106 = (_DWORD *)(v22 + v28); /*0x4bbe1b*/
      }
      if ( v96 != v23 || v97 != v24 ) /*0x4bbe3d*/
      {
        v93 = v96 - v95[1]; /*0x4bbe52*/
        v94 = v97 - v95[2]; /*0x4bbe56*/
        __asm /*0x4bbe5a*/
        {
          fild dword ptr [esp+80h+var_4C.__pad_C]
          fild [esp+80h+var_4C.Vector_field_0x8]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+80h+var_84+4]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v81); /*0x4bbe73*/
        LOWORD(v29) = Math::RoundToInt(v9); /*0x4bbe78*/
        v114 = v29; /*0x4bbe81*/
        v93 = v23 - v95[1]; /*0x4bbe90*/
        v94 = v24 - v95[2]; /*0x4bbe94*/
        __asm /*0x4bbe98*/
        {
          fild dword ptr [esp+80h+var_4C.__pad_C]
          fild [esp+80h+var_4C.Vector_field_0x8]
          fild [esp+80h+arg_14]
          fstp qword ptr [esp+50h]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+80h+var_84+4]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v82); /*0x4bbebc*/
        LOWORD(v30) = Math::RoundToInt(v9); /*0x4bbec4*/
        v115 = v30; /*0x4bbec9*/
        __asm { fild [esp+78h+arg_14] } /*0x4bbed2*/
        v116 = v22 - v18; /*0x4bbedb*/
        __asm /*0x4bbee2*/
        {
          fdivr qword ptr [esp+48h]
          fild [esp+78h+arg_14]
          fmulp st(1), st
        }
        LOWORD(v31) = Math::RoundToInt(v9); /*0x4bbeef*/
        v32 = abs32(v31); /*0x4bbef7*/
        if ( v18 <= v22 ) /*0x4bbefb*/
          v110 = v18 + v32; /*0x4bbf0a*/
        else
          v110 = v18 - v32; /*0x4bbeff*/
      }
      v33 = v95[0]; /*0x4bbf11*/
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v95[0] + 112))(v95[0]); /*0x4bbf19*/
      v34 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v33 + 92))(v33, v96, v97); /*0x4bbf33*/
      v104 = v34; /*0x4bbf37*/
      if ( g_ZBufferDescriptor ) /*0x4bbf3b*/
      {
        Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4bbf45*/
        v95[2] = v97; /*0x4bbf4c*/
        SamplePosition = (_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v96, v97 - Stream_field_04); /*0x4bbf5d*/
        v88 = -1; /*0x4bbf6d*/
        LOWORD(v36) = LOWORD(g_ZBufferDescriptor->Stream_field_04) + LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4bbf79*/
        pad_0 = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4bbf80*/
        v37 = v110; /*0x4bbf8b*/
        v111 = v110 + v36 - v97 - v100; /*0x4bbf96*/
        if ( v34 ) /*0x4bbf9d*/
        {
          v38 = v98[1] - v97; /*0x4bbfb6*/
          v39 = v98[0] - v96; /*0x4bbfba*/
          v89 = v98[0] - v96; /*0x4bbfc0*/
          v40 = (int)v106 - v37; /*0x4bbfc4*/
          v41 = (*(int (__thiscall **)(int))(*(_DWORD *)v33 + 116))(v33); /*0x4bbfc6*/
          v87 = v41; /*0x4bbfcb*/
          if ( v38 < 0 ) /*0x4bbfcf*/
          {
            v87 = -v41; /*0x4bbfd3*/
            pad_0 = -pad_0; /*0x4bbfe0*/
            v88 = 1; /*0x4bbfe7*/
          }
          v83 = 1; /*0x4bbff6*/
          v42 = abs32(v38); /*0x4bc000*/
          if ( v40 < 0 ) /*0x4bc004*/
            v83 = -1; /*0x4bc006*/
          v43 = 2 * v42; /*0x4bc010*/
          v84 = 2 * v42; /*0x4bc016*/
          v44 = abs32(v40); /*0x4bc01a*/
          v45 = 2 * v39; /*0x4bc01c*/
          v85 = 2 * v39; /*0x4bc021*/
          v46 = 2 * v44; /*0x4bc025*/
          v86 = 2 * v44; /*0x4bc028*/
          if ( v44 > v39 && v44 > v42 ) /*0x4bc034*/
          {
            v92[0] = v43 - v44; /*0x4bc03e*/
            v90 = v45 - v44; /*0x4bc048*/
            if ( v44 > 0 ) /*0x4bc04c*/
            {
              v47 = g_ZBufferDescriptor; /*0x4bc052*/
              v107 = 0; /*0x4bc058*/
              v93 = v44; /*0x4bc05f*/
              do /*0x4bc27e*/
              {
                if ( (unsigned __int16)v111 < *SamplePosition ) /*0x4bc075*/
                {
                  v48 = *(_WORD *)((char *)v107 + v104); /*0x4bc092*/
                  LOBYTE(v95[1]) = (unsigned __int8)(v48 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc0ab*/
                  BYTE1(v95[1]) = (unsigned __int8)(v48 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc0cc*/
                  BYTE2(v95[1]) = (unsigned __int8)(v48 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc0d2*/
                  v49 = ((a6 * LOBYTE(v95[1])) >> 8) + LOBYTE(v95[1]); /*0x4bc0f7*/
                  v50 = ((a6 * BYTE2(v95[1])) >> 8) + BYTE2(v95[1]); /*0x4bc11e*/
                  if ( v50 > 255 ) /*0x4bc125*/
                    v50 = 255; /*0x4bc127*/
                  v51 = 255; /*0x4bc132*/
                  if ( ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]) <= 255 ) /*0x4bc137*/
                    v51 = ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]); /*0x4bc139*/
                  if ( v49 > 255 ) /*0x4bc141*/
                    v49 = 255; /*0x4bc143*/
                  *(_WORD *)((char *)v107 + v104) = (v50 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc17b*/
                                                  | (v51 >> g_BitMask_Blue << g_BitMask_Green)
                                                  | (v49 >> g_BitShift_Green_0 << g_BitShift_Red);
                  if ( a9 ) /*0x4bc188*/
                    *SamplePosition = v111; /*0x4bc199*/
                  v47 = g_ZBufferDescriptor; /*0x4bc19c*/
                }
                v52 = v92[0]; /*0x4bc1a2*/
                if ( v92[0] <= 0 ) /*0x4bc1a8*/
                {
                  v54 = v111; /*0x4bc213*/
                }
                else
                {
                  v52 = v92[0] - v86; /*0x4bc1c6*/
                  v104 += v87; /*0x4bc1c8*/
                  v53 = &SamplePosition[pad_0]; /*0x4bc1ce*/
                  if ( pad_0 <= 0 ) /*0x4bc1d1*/
                  {
                    v55 = &SamplePosition[pad_0]; /*0x4bc1f2*/
                    if ( (unsigned int)v53 < v47[1].Stream_field_04 ) /*0x4bc1f6*/
                      v55 = (_WORD *)((char *)v53 + v47[1].Stream_field_0C); /*0x4bc1fb*/
                    SamplePosition = v55; /*0x4bc208*/
                    v54 = v88 + v111; /*0x4bc20f*/
                  }
                  else
                  {
                    if ( (unsigned int)v53 >= v47[1].Stream_field_08 ) /*0x4bc1d6*/
                      v53 = (_WORD *)((char *)v53 - v47[1].Stream_field_0C); /*0x4bc1d8*/
                    SamplePosition = v53; /*0x4bc1e2*/
                    v54 = v88 + v111; /*0x4bc1e9*/
                  }
                }
                v56 = v90; /*0x4bc21a*/
                if ( v90 > 0 ) /*0x4bc220*/
                {
                  v57 = SamplePosition + 1; /*0x4bc233*/
                  v107 = (_DWORD *)((char *)v107 + 2); /*0x4bc23b*/
                  if ( (unsigned int)(SamplePosition + 1) >= v47[1].Stream_field_08 ) /*0x4bc242*/
                    v57 = (_WORD *)((char *)v57 - v47[1].Stream_field_0C); /*0x4bc244*/
                  SamplePosition = v57; /*0x4bc247*/
                  v56 = v90 - v86; /*0x4bc252*/
                }
                v111 = v83 + v54; /*0x4bc25e*/
                v90 = v85 + v56; /*0x4bc26b*/
                v58 = v93 == 1; /*0x4bc275*/
                v92[0] = v84 + v52; /*0x4bc276*/
                --v93; /*0x4bc27a*/
              }
              while ( !v58 ); /*0x4bc27e*/
            }
            goto LABEL_50; /*0x4bc27e*/
          }
          if ( v39 <= v42 ) /*0x4bc29b*/
          {
            v93 = v45 - v42; /*0x4bc501*/
            v92[0] = v46 - v42; /*0x4bc50b*/
            if ( v42 > 0 ) /*0x4bc50f*/
            {
              v70 = g_ZBufferDescriptor; /*0x4bc515*/
              v109 = 0; /*0x4bc51b*/
              v91 = v42; /*0x4bc522*/
              do /*0x4bc728*/
              {
                if ( (unsigned __int16)v111 < *SamplePosition ) /*0x4bc538*/
                {
                  v71 = *(_WORD *)((char *)v109 + v104); /*0x4bc555*/
                  LOBYTE(v95[1]) = (unsigned __int8)(v71 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc56e*/
                  BYTE1(v95[1]) = (unsigned __int8)(v71 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc58f*/
                  BYTE2(v95[1]) = (unsigned __int8)(v71 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc595*/
                  v72 = ((a6 * LOBYTE(v95[1])) >> 8) + LOBYTE(v95[1]); /*0x4bc5ba*/
                  v73 = ((a6 * BYTE2(v95[1])) >> 8) + BYTE2(v95[1]); /*0x4bc5e1*/
                  if ( v73 > 255 ) /*0x4bc5e8*/
                    v73 = 255; /*0x4bc5ea*/
                  v74 = 255; /*0x4bc5f5*/
                  if ( ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]) <= 255 ) /*0x4bc5fa*/
                    v74 = ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]); /*0x4bc5fc*/
                  if ( v72 > 255 ) /*0x4bc604*/
                    v72 = 255; /*0x4bc606*/
                  *(_WORD *)((char *)v109 + v104) = (v73 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc63e*/
                                                  | (v74 >> g_BitMask_Blue << g_BitMask_Green)
                                                  | (v72 >> g_BitShift_Green_0 << g_BitShift_Red);
                  if ( a9 ) /*0x4bc64b*/
                    *SamplePosition = v111; /*0x4bc65c*/
                  v70 = g_ZBufferDescriptor; /*0x4bc65f*/
                }
                v75 = v93; /*0x4bc665*/
                if ( v93 <= 0 ) /*0x4bc66b*/
                {
                  v76 = SamplePosition; /*0x4bc698*/
                }
                else
                {
                  v76 = SamplePosition + 1; /*0x4bc67e*/
                  v109 = (_DWORD *)((char *)v109 + 2); /*0x4bc686*/
                  if ( (unsigned int)(SamplePosition + 1) >= v70[1].Stream_field_08 ) /*0x4bc68d*/
                    v76 = (_WORD *)((char *)v76 - v70[1].Stream_field_0C); /*0x4bc68f*/
                  v75 = v93 - v84; /*0x4bc692*/
                }
                v77 = v92[0]; /*0x4bc69f*/
                v78 = v111; /*0x4bc6a3*/
                if ( v92[0] > 0 ) /*0x4bc6ac*/
                {
                  v78 = v83 + v111; /*0x4bc6b6*/
                  v77 = v92[0] - v84; /*0x4bc6b8*/
                }
                v93 = v85 + v75; /*0x4bc6c4*/
                v92[0] = v86 + v77; /*0x4bc6d5*/
                v79 = &v76[pad_0]; /*0x4bc6e2*/
                v104 += v87; /*0x4bc6e4*/
                if ( pad_0 <= 0 ) /*0x4bc6ea*/
                {
                  v80 = v79; /*0x4bc700*/
                  if ( (unsigned int)v79 < v70[1].Stream_field_04 ) /*0x4bc704*/
                    v80 = (_WORD *)((char *)v79 + v70[1].Stream_field_0C); /*0x4bc709*/
                  SamplePosition = v80; /*0x4bc70b*/
                }
                else
                {
                  if ( (unsigned int)v79 >= v70[1].Stream_field_08 ) /*0x4bc6ef*/
                    v79 = (_WORD *)((char *)v79 - v70[1].Stream_field_0C); /*0x4bc6f1*/
                  SamplePosition = v79; /*0x4bc6f4*/
                }
                v58 = v91 == 1; /*0x4bc71c*/
                v111 = v88 + v78; /*0x4bc71d*/
                --v91; /*0x4bc724*/
              }
              while ( !v58 ); /*0x4bc728*/
            }
            goto LABEL_50; /*0x4bc728*/
          }
          v108 = 0; /*0x4bc2a3*/
          v93 = v43 - v39; /*0x4bc2ac*/
          v92[0] = v46 - v39; /*0x4bc2b6*/
          if ( v39 <= 0 ) /*0x4bc2ba*/
          {
LABEL_50:
            (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v95[0] + 96))(v95[0]); /*0x4bc284*/
            return 1; /*0x4bc296*/
          }
          v60 = g_ZBufferDescriptor; /*0x4bc2c0*/
          while ( 1 ) /*0x4bc2c6*/
          {
            if ( (unsigned __int16)v111 < *SamplePosition ) /*0x4bc2d8*/
            {
              v61 = *(_WORD *)(v104 + 2 * v108); /*0x4bc2f5*/
              LOBYTE(v95[1]) = (unsigned __int8)(v61 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc30e*/
              BYTE1(v95[1]) = (unsigned __int8)(v61 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc32f*/
              BYTE2(v95[1]) = (unsigned __int8)(v61 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc335*/
              v62 = ((a6 * LOBYTE(v95[1])) >> 8) + LOBYTE(v95[1]); /*0x4bc35a*/
              v63 = ((a6 * BYTE2(v95[1])) >> 8) + BYTE2(v95[1]); /*0x4bc381*/
              if ( v63 > 255 ) /*0x4bc388*/
                v63 = 255; /*0x4bc38a*/
              v64 = 255; /*0x4bc395*/
              if ( ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]) <= 255 ) /*0x4bc39a*/
                v64 = ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]); /*0x4bc39c*/
              if ( v62 > 255 ) /*0x4bc3a4*/
                v62 = 255; /*0x4bc3a6*/
              *(_WORD *)(v104 + 2 * v108) = (v63 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc3de*/
                                          | (v64 >> g_BitMask_Blue << g_BitMask_Green)
                                          | (v62 >> g_BitShift_Green_0 << g_BitShift_Red);
              if ( a9 ) /*0x4bc3eb*/
                *SamplePosition = v111; /*0x4bc3fc*/
              v60 = g_ZBufferDescriptor; /*0x4bc3ff*/
            }
            v65 = v93; /*0x4bc405*/
            if ( v93 <= 0 ) /*0x4bc40b*/
            {
              v66 = SamplePosition; /*0x4bc47c*/
              goto LABEL_73; /*0x4bc47c*/
            }
            v65 = v93 - v85; /*0x4bc429*/
            v104 += v87; /*0x4bc42b*/
            v66 = &SamplePosition[pad_0]; /*0x4bc431*/
            if ( pad_0 <= 0 ) /*0x4bc434*/
              break; /*0x4bc434*/
            if ( (unsigned int)v66 < v60[1].Stream_field_08 ) /*0x4bc439*/
              goto LABEL_71; /*0x4bc439*/
            v66 = (_WORD *)((char *)v66 - v60[1].Stream_field_0C); /*0x4bc445*/
            v111 += v88; /*0x4bc44d*/
LABEL_73:
            v68 = v92[0]; /*0x4bc483*/
            if ( v92[0] > 0 ) /*0x4bc489*/
            {
              v111 += v83; /*0x4bc49c*/
              v68 = v92[0] - v85; /*0x4bc4a3*/
            }
            v69 = v66 + 1; /*0x4bc4a9*/
            v93 = v84 + v65; /*0x4bc4ae*/
            v92[0] = v86 + v68; /*0x4bc4b8*/
            if ( (unsigned int)v69 >= v60[1].Stream_field_08 ) /*0x4bc4c1*/
              v69 = (_WORD *)((char *)v69 - v60[1].Stream_field_0C); /*0x4bc4c3*/
            SamplePosition = v69; /*0x4bc4ca*/
            if ( ++v108 >= v89 ) /*0x4bc4e2*/
              goto LABEL_50; /*0x4bc4e2*/
          }
          v67 = &SamplePosition[pad_0]; /*0x4bc459*/
          if ( (unsigned int)v66 < v60[1].Stream_field_04 ) /*0x4bc45d*/
            v67 = (_WORD *)((char *)v66 + v60[1].Stream_field_0C); /*0x4bc462*/
          v66 = v67; /*0x4bc464*/
LABEL_71:
          v111 += v88; /*0x4bc466*/
          goto LABEL_73; /*0x4bc47a*/
        }
      }
    }
  }
  return 0; /*0x4bc28d*/
}



// ==== 0x004BC750  DSurface::DrawLineFaded  this=DSurface  sig=csp ====
char __thiscall DSurface::DrawLineFaded(
        DSurface *this,
        int a2,
        _DWORD *a3,
        int *a4,
        unsigned __int8 *a5,
        int a6,
        int a7,
        char a8,
        float a9,
        char a10,
        char a11,
        float a12)
{
  int *v13; // esi
  int v14; // eax
  int v15; // edx
  int *v16; // eax
  int v17; // esi
  int *v18; // eax
  int v19; // edx
  int v20; // esi
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // ebp
  int v25; // ebx
  int v26; // ebx
  int v27; // edi
  int v28; // edx
  int v29; // esi
  int v30; // ebx
  int v31; // ebp
  int v32; // eax
  int v33; // eax
  int v34; // eax
  unsigned int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  unsigned int v41; // eax
  DSurface *v42; // esi
  int v43; // edi
  int Stream_field_04; // ebx
  int v46; // eax
  int pad_0; // ebp
  int v48; // edi
  int v49; // esi
  int v50; // ebx
  int v51; // eax
  in... [41072 chars total]



// ==== 0x004BDF00  DSurface::DrawLineZBufColored  this=DSurface  sig=csp ====
char __thiscall DSurface::DrawLineZBufColored(
        DSurface *this,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned __int8 *a5,
        float a6,
        int a7,
        int a8)
{
  double v8; // st7
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  int *v16; // eax
  int *v17; // eax
  int v18; // esi
  int v19; // edi
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // ebp
  int v24; // edx
  int v25; // ebx
  int v26; // esi
  int v27; // edi
  int v28; // esi
  int v29; // ebx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  unsigned int v37; // eax
  int v38; // ebx
  int Stream_field_04; // edi
  _WORD *SamplePosition; // esi
  int v41; // edi
  unsigned __int16 *v42; // ebp
  int v43; // edi
  int v44; // ebx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // edi
  int v49; // ecx
  Stream *v50; // ebx
  int v51; // edx
  unsigned __int16 v52; // di
  __int16 v53; // ax
  _WORD *v54; // eax
  unsigned __int16 *v55; // eax
  bool v56; // zf
  int v58; // edi
  Stream *v59; // ebx
  int v60; // edx
  unsigned __int16 v61; // di
  __int16 v62; // ax
  _WORD *v63; // eax
  unsigned __int16 *v64; // eax
  int v65; // eax
  unsigned int Stream_field_08; // eax
  int v67; // edi
  int v68; // ebx
  Stream *v69; // ecx
  int v70; // edx
  unsigned __int16 v71; // di
  __int16 v72; // ax
  _WORD *v73; // eax
  unsigned __int16 *v74; // eax
  double v75; // [esp+4h] [ebp-84h]
  double v76; // [esp+4h] [ebp-84h]
  double v77; // [esp+4h] [ebp-84h]
  double v78; // [esp+4h] [ebp-84h]
  int v79; // [esp+1Ch] [ebp-6Ch]
  int v80; // [esp+20h] [ebp-68h]
  int v81; // [esp+24h] [ebp-64h]
  int v82; // [esp+24h] [ebp-64h]
  int v83; // [esp+24h] [ebp-64h]
  int v84; // [esp+28h] [ebp-60h]
  int v85; // [esp+2Ch] [ebp-5Ch]
  int v86; // [esp+30h] [ebp-58h]
  int v87; // [esp+30h] [ebp-58h]
  int v88; // [esp+30h] [ebp-58h]
  int v89; // [esp+34h] [ebp-54h]
  int v90; // [esp+38h] [ebp-50h]
  int v91; // [esp+3Ch] [ebp-4Ch]
  _BYTE v93[12]; // [esp+44h] [ebp-44h] BYREF
  _DWORD v94[5]; // [esp+54h] [ebp-34h] BYREF
  int v95; // [esp+68h] [ebp-20h] BYREF
  int v96; // [esp+6Ch] [ebp-1Ch]
  int v97[2]; // [esp+70h] [ebp-18h] BYREF
  int v98; // [esp+78h] [ebp-10h] BYREF
  int v99; // [esp+7Ch] [ebp-Ch]
  int v100; // [esp+80h] [ebp-8h]
  int v101; // [esp+84h] [ebp-4h]
  int pad_0; // [esp+8Ch] [ebp+4h]
  int v103; // [esp+90h] [ebp+8h]
  int v104; // [esp+94h] [ebp+Ch]
  unsigned __int8 *v105; // [esp+98h] [ebp+10h]
  unsigned __int8 *v106; // [esp+98h] [ebp+10h]
  unsigned __int8 *v107; // [esp+98h] [ebp+10h]
  unsigned __int8 *v108; // [esp+98h] [ebp+10h]
  int v109; // [esp+9Ch] [ebp+14h]
  int v110; // [esp+9Ch] [ebp+14h]
  int v111; // [esp+9Ch] [ebp+14h]
  int v112; // [esp+9Ch] [ebp+14h]
  __int16 v113; // [esp+9Ch] [ebp+14h]
  __int16 v114; // [esp+9Ch] [ebp+14h]
  __int16 v115; // [esp+9Ch] [ebp+14h]

  v105 = (unsigned __int8 *)*a5; /*0x4bdf18*/
  __asm /*0x4bdf1f*/
  {
    fild [esp+7Ch+arg_C]
    fmul [esp+7Ch+arg_10]
  }
  LOWORD(v11) = Math::RoundToInt(v8); /*0x4bdf2d*/
  v12 = v11; /*0x4bdf34*/
  v91 = v11; /*0x4bdf39*/
  v106 = (unsigned __int8 *)a5[1]; /*0x4bdf3d*/
  __asm /*0x4bdf44*/
  {
    fild [esp+7Ch+arg_C]
    fmul [esp+7Ch+arg_10]
  }
  LOWORD(v13) = Math::RoundToInt(v8); /*0x4bdf52*/
  v14 = v13; /*0x4bdf59*/
  v90 = v13; /*0x4bdf5e*/
  v107 = (unsigned __int8 *)a5[2]; /*0x4bdf62*/
  __asm /*0x4bdf69*/
  {
    fild [esp+7Ch+arg_C]
    fmul [esp+7Ch+arg_10]
  }
  LOWORD(v15) = Math::RoundToInt(v8); /*0x4bdf77*/
  v89 = v15; /*0x4bdf7f*/
  if ( v12 < 8 && v14 < 8 && v15 < 8 ) /*0x4bdf8d*/
    return 0; /*0x4bdf8d*/
  v16 = (int *)(*((int (__thiscall **)(DSurface *, _DWORD *))this->DSurface_field_0x0 + 30))(this, &v94[1]); /*0x4bdf9c*/
  v17 = ClipRectIntersection(&v93[4], (int *)a2, v16, 0, 0); /*0x4bdfaf*/
  v18 = *v17; /*0x4bdfb6*/
  v98 = *v17; /*0x4bdfb8*/
  v19 = v17[1]; /*0x4bdfbc*/
  v99 = v19; /*0x4bdfbf*/
  v100 = v17[2]; /*0x4bdfc6*/
  v20 = v17[3]; /*0x4bdfca*/
  v101 = v20; /*0x4bdfcf*/
  if ( !v100 && !v20 ) /*0x4bdfd7*/
    return 0; /*0x4bdfd7*/
  v21 = v18 + *a3; /*0x4bdff3*/
  v22 = v18 + *a4; /*0x4bdff5*/
  v23 = a7; /*0x4bdffa*/
  v24 = v19 + a3[1]; /*0x4be001*/
  v25 = v21; /*0x4be003*/
  v26 = v19 + a4[1]; /*0x4be005*/
  v27 = a8; /*0x4be007*/
  v95 = v21; /*0x4be010*/
  v96 = v24; /*0x4be014*/
  v97[0] = v22; /*0x4be018*/
  v97[1] = v26; /*0x4be01c*/
  if ( v21 > v22 ) /*0x4be020*/
  {
    v25 = v22; /*0x4be022*/
    v23 = a8; /*0x4be024*/
    v27 = a7; /*0x4be026*/
    v95 = v22; /*0x4be02d*/
    v96 = v26; /*0x4be031*/
    v97[0] = v21; /*0x4be035*/
    v97[1] = v24; /*0x4be039*/
  }
  v94[2] = v97[1]; /*0x4be049*/
  v28 = v25; /*0x4be04e*/
  v29 = v96; /*0x4be050*/
  v94[1] = v97[0]; /*0x4be05c*/
  if ( !(unsigned __int8)ClipLine(&v95, v97, &v98) ) /*0x4be060*/
    return 0; /*0x4be060*/
  a7 = v27; /*0x4be07b*/
  v109 = v23; /*0x4be082*/
  if ( v97[0] != v94[1] || v97[1] != v94[2] ) /*0x4be08f*/
  {
    *(_DWORD *)&v93[4] = v28 - v97[0]; /*0x4be09e*/
    __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be0a4*/
    *(_DWORD *)&v93[8] = v29 - v97[1]; /*0x4be0a8*/
    __asm /*0x4be0ac*/
    {
      fild [esp+84h+var_3C]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+84h+var_88+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v75); /*0x4be0c1*/
    LOWORD(v30) = Math::RoundToInt(v8); /*0x4be0c6*/
    a8 = v30; /*0x4be0d1*/
    *(_DWORD *)&v93[4] = v28 - v94[1]; /*0x4be0e0*/
    __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be0e6*/
    *(_DWORD *)&v93[8] = v29 - v94[2]; /*0x4be0ea*/
    __asm /*0x4be0ee*/
    {
      fild [esp+84h+var_3C]
      fild [esp+84h+arg_18]
      fstp [esp+84h+var_44+4]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+84h+var_88+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v76); /*0x4be10e*/
    LOWORD(v31) = Math::RoundToInt(v8); /*0x4be116*/
    a8 = v31; /*0x4be11b*/
    __asm { fild [esp+7Ch+arg_18] } /*0x4be124*/
    a8 = v23 - v27; /*0x4be12d*/
    __asm /*0x4be134*/
    {
      fdivr [esp+7Ch+var_44+4]
      fild [esp+7Ch+arg_18]
      fmulp st(1), st
    }
    LOWORD(v32) = Math::RoundToInt(v8); /*0x4be141*/
    v33 = abs32(v32); /*0x4be149*/
    if ( v23 >= v27 ) /*0x4be14d*/
      a7 = v23 - v33; /*0x4be15e*/
    else
      a7 = v23 + v33; /*0x4be151*/
  }
  if ( v95 != v28 || v96 != v29 ) /*0x4be173*/
  {
    *(_DWORD *)&v93[4] = v95 - v94[1]; /*0x4be182*/
    __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be18a*/
    *(_DWORD *)&v93[8] = v96 - v94[2]; /*0x4be190*/
    __asm /*0x4be194*/
    {
      fild [esp+84h+var_3C]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+84h+var_88+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v77); /*0x4be1a9*/
    LOWORD(v34) = Math::RoundToInt(v8); /*0x4be1ae*/
    v110 = v34; /*0x4be1b3*/
    *(_DWORD *)&v93[4] = v28 - v94[1]; /*0x4be1c0*/
    __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be1c8*/
    *(_DWORD *)&v93[8] = v29 - v94[2]; /*0x4be1ce*/
    __asm /*0x4be1d2*/
    {
      fild [esp+84h+var_3C]
      fild [esp+84h+arg_10]
      fstp qword ptr [esp+84h+var_34+4]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+84h+var_88+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v78); /*0x4be1f2*/
    LOWORD(v35) = Math::RoundToInt(v8); /*0x4be1fa*/
    v111 = v35; /*0x4be1ff*/
    __asm { fild [esp+7Ch+arg_10] } /*0x4be208*/
    v112 = v23 - v27; /*0x4be211*/
    __asm /*0x4be218*/
    {
      fdivr qword ptr [esp+7Ch+var_34+4]
      fild [esp+7Ch+arg_10]
      fmulp st(1), st
    }
    LOWORD(v36) = Math::RoundToInt(v8); /*0x4be225*/
    v37 = abs32(v36); /*0x4be22d*/
    if ( v27 <= v23 ) /*0x4be231*/
      v109 = v27 + v37; /*0x4be240*/
    else
      v109 = v27 - v37; /*0x4be235*/
  }
  (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this); /*0x4be24f*/
  v38 = (*((int (__thiscall **)(DSurface *, int, int))this->DSurface_field_0x0 + 23))(this, v95, v96); /*0x4be269*/
  v108 = (unsigned __int8 *)v38; /*0x4be26d*/
  if ( !g_ZBufferDescriptor ) /*0x4be274*/
    return 0; /*0x4be274*/
  Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4be27e*/
  v94[2] = v96; /*0x4be285*/
  SamplePosition = (_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v95, v96 - Stream_field_04); /*0x4be29c*/
  v41 = *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4); /*0x4be2a2*/
  v94[2] = v96; /*0x4be2a5*/
  v42 = (unsigned __int16 *)StreamClass::ReadAndSeek(*(int **)&stru_87E790.__pad_D8[60], v95, v96 - v41); /*0x4be2b6*/
  v85 = -1; /*0x4be2c1*/
  LOWORD(v41) = LOWORD(g_ZBufferDescriptor->Stream_field_04) + LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4be2cd*/
  pad_0 = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4be2d4*/
  a8 = v109 + v41 - v96 - v99; /*0x4be2ea*/
  if ( !v38 ) /*0x4be2f1*/
    return 0; /*0x4be9b9*/
  v86 = v97[0] - v95; /*0x4be305*/
  v43 = v97[1] - v96; /*0x4be310*/
  v44 = a7 - v109; /*0x4be31a*/
  v45 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4be31c*/
  v80 = v45; /*0x4be321*/
  if ( v43 < 0 ) /*0x4be325*/
  {
    v85 = 1; /*0x4be32e*/
    v80 = -v45; /*0x4be33a*/
    pad_0 = -pad_0; /*0x4be33e*/
  }
  v84 = 1; /*0x4be347*/
  v46 = abs32(v43); /*0x4be354*/
  if ( v44 < 0 ) /*0x4be358*/
    v84 = -1; /*0x4be35a*/
  LOWORD(a7) = 0; /*0x4be364*/
  v47 = abs32(v44); /*0x4be377*/
  BYTE2(a7) = 0; /*0x4be37f*/
  v104 = 2 * v86; /*0x4be38a*/
  v103 = 2 * v46; /*0x4be394*/
  v79 = 2 * v47; /*0x4be39e*/
  if ( v47 <= v86 || v47 <= v46 ) /*0x4be3aa*/
  {
    if ( v86 <= v46 ) /*0x4be5aa*/
    {
      v67 = v104 - v46; /*0x4be7b5*/
      v68 = v79 - v46; /*0x4be7b7*/
      *(_DWORD *)&v93[4] = v104 - v46; /*0x4be7bb*/
      *(_DWORD *)v93 = v79 - v46; /*0x4be7bf*/
      if ( v46 > 0 ) /*0x4be7c3*/
      {
        v94[1] = v46; /*0x4be7d0*/
        v69 = g_ZBufferDescriptor; /*0x4be7d4*/
        v83 = 0; /*0x4be7da*/
        v88 = 2 * pad_0; /*0x4be7e5*/
        do /*0x4be99b*/
        {
          v70 = *v42; /*0x4be7f6*/
          if ( (unsigned __int16)a8 < *SamplePosition ) /*0x4be7fa*/
          {
            v71 = *(_WORD *)&v108[v83]; /*0x4be80b*/
            LOBYTE(v115) = (unsigned __int8)(v71 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4be82a*/
            HIBYTE(v115) = (unsigned __int8)(v71 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4be845*/
            LOWORD(a7) = v115; /*0x4be861*/
            BYTE2(a7) = (unsigned __int8)(v71 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4be870*/
            v72 = BlendColorPack((unsigned __int8 *)&a7, (v91 * v70) >> 7, (v90 * v70) >> 7, (v89 * v70) >> 7); /*0x4be895*/
            v67 = *(_DWORD *)&v93[4]; /*0x4be89e*/
            *(_WORD *)&v108[v83] = v72; /*0x4be8a2*/
            v69 = g_ZBufferDescriptor; /*0x4be8a6*/
            v68 = *(_DWORD *)v93; /*0x4be8ac*/
          }
          if ( v67 > 0 ) /*0x4be8b2*/
          {
            ++SamplePosition; /*0x4be8bb*/
            v83 += 2; /*0x4be8c3*/
            if ( (unsigned int)SamplePosition >= v69[1].Stream_field_08 ) /*0x4be8c7*/
              SamplePosition = (_WORD *)((char *)SamplePosition - v69[1].Stream_field_0C); /*0x4be8c9*/
            v67 -= v103; /*0x4be8cc*/
          }
          if ( v68 > 0 ) /*0x4be8d5*/
          {
            a8 += v84; /*0x4be8eb*/
            v68 -= v103; /*0x4be8f2*/
          }
          v67 += v104; /*0x4be8ff*/
          v68 += v79; /*0x4be908*/
          v108 += v80; /*0x4be914*/
          SamplePosition = (_WORD *)((char *)SamplePosition + v88); /*0x4be922*/
          *(_DWORD *)&v93[4] = v67; /*0x4be924*/
          *(_DWORD *)v93 = v68; /*0x4be92a*/
          if ( pad_0 <= 0 ) /*0x4be92e*/
          {
            v73 = SamplePosition; /*0x4be93d*/
            if ( (unsigned int)SamplePosition < v69[1].Stream_field_04 ) /*0x4be941*/
              v73 = (_WORD *)((char *)SamplePosition + v69[1].Stream_field_0C); /*0x4be946*/
            SamplePosition = v73; /*0x4be948*/
          }
          else if ( (unsigned int)SamplePosition >= v69[1].Stream_field_08 ) /*0x4be933*/
          {
            SamplePosition = (_WORD *)((char *)SamplePosition - v69[1].Stream_field_0C); /*0x4be935*/
          }
          v42 = (unsigned __int16 *)((char *)v42 + v88); /*0x4be955*/
          if ( pad_0 <= 0 ) /*0x4be959*/
          {
            v74 = v42; /*0x4be970*/
            if ( (unsigned int)v42 < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4be975*/
              v74 = (unsigned __int16 *)((char *)v42 + *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be97a*/
            v42 = v74; /*0x4be97c*/
          }
          else if ( (unsigned int)v42 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4be963*/
          {
            v42 = (unsigned __int16 *)((char *)v42 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be965*/
          }
          v56 = v94[1] == 1; /*0x4be98f*/
          a8 += v85; /*0x4be990*/
          --v94[1]; /*0x4be997*/
        }
        while ( !v56 ); /*0x4be99b*/
      }
    }
    else
    {
      v58 = v103 - v86; /*0x4be5bf*/
      *(_DWORD *)&v93[4] = v103 - v86; /*0x4be5c3*/
      *(_DWORD *)v93 = v79 - v86; /*0x4be5c9*/
      v82 = 0; /*0x4be5cd*/
      if ( v86 > 0 ) /*0x4be5d5*/
      {
        v59 = g_ZBufferDescriptor; /*0x4be5db*/
        do /*0x4be78f*/
        {
          v60 = *v42; /*0x4be5ee*/
          if ( (unsigned __int16)a8 < *SamplePosition ) /*0x4be5f2*/
          {
            v61 = *(_WORD *)&v108[2 * v82]; /*0x4be603*/
            LOBYTE(v114) = (unsigned __int8)(v61 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4be622*/
            HIBYTE(v114) = (unsigned __int8)(v61 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4be63d*/
            LOWORD(a7) = v114; /*0x4be659*/
            BYTE2(a7) = (unsigned __int8)(v61 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4be668*/
            v62 = BlendColorPack((unsigned __int8 *)&a7, (v91 * v60) >> 7, (v90 * v60) >> 7, (v89 * v60) >> 7); /*0x4be68d*/
            v58 = *(_DWORD *)&v93[4]; /*0x4be696*/
            *(_WORD *)&v108[2 * v82] = v62; /*0x4be69a*/
            v59 = g_ZBufferDescriptor; /*0x4be69e*/
          }
          if ( v58 > 0 ) /*0x4be6a6*/
          {
            v58 -= v104; /*0x4be6c0*/
            v108 += v80; /*0x4be6c9*/
            SamplePosition += pad_0; /*0x4be6d3*/
            if ( pad_0 <= 0 ) /*0x4be6d7*/
            {
              v63 = SamplePosition; /*0x4be6e6*/
              if ( (unsigned int)SamplePosition < v59[1].Stream_field_04 ) /*0x4be6ea*/
                v63 = (_WORD *)((char *)SamplePosition + v59[1].Stream_field_0C); /*0x4be6ef*/
              SamplePosition = v63; /*0x4be6f1*/
            }
            else if ( (unsigned int)SamplePosition >= v59[1].Stream_field_08 ) /*0x4be6dc*/
            {
              SamplePosition = (_WORD *)((char *)SamplePosition - v59[1].Stream_field_0C); /*0x4be6de*/
            }
            v42 += pad_0; /*0x4be6fa*/
            if ( pad_0 <= 0 ) /*0x4be6fe*/
            {
              v64 = v42; /*0x4be715*/
              if ( (unsigned int)v42 < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4be71a*/
                v64 = (unsigned __int16 *)((char *)v42 + *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be71f*/
              v42 = v64; /*0x4be721*/
            }
            else if ( (unsigned int)v42 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4be708*/
            {
              v42 = (unsigned __int16 *)((char *)v42 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be70a*/
            }
            a8 += v85; /*0x4be730*/
          }
          v65 = *(_DWORD *)v93; /*0x4be737*/
          if ( *(int *)v93 > 0 ) /*0x4be73d*/
          {
            a8 += v84; /*0x4be74c*/
            v65 = *(_DWORD *)v93 - v104; /*0x4be75a*/
          }
          ++SamplePosition; /*0x4be769*/
          *(_DWORD *)v93 = v79 + v65; /*0x4be76c*/
          Stream_field_08 = v59[1].Stream_field_08; /*0x4be770*/
          v58 += v103; /*0x4be773*/
          *(_DWORD *)&v93[4] = v58; /*0x4be777*/
          if ( (unsigned int)SamplePosition >= Stream_field_08 ) /*0x4be77b*/
            SamplePosition = (_WORD *)((char *)SamplePosition - v59[1].Stream_field_0C); /*0x4be77d*/
          ++v82; /*0x4be78b*/
        }
        while ( v82 < v86 ); /*0x4be78f*/
      }
    }
  }
  else
  {
    v48 = v103 - v47; /*0x4be3be*/
    v49 = v104 - v47; /*0x4be3c0*/
    *(_DWORD *)v93 = v103 - v47; /*0x4be3c4*/
    v87 = v104 - v47; /*0x4be3c8*/
    if ( v47 > 0 ) /*0x4be3cc*/
    {
      v50 = g_ZBufferDescriptor; /*0x4be3d2*/
      v81 = 0; /*0x4be3d8*/
      *(_DWORD *)&v93[4] = v47; /*0x4be3e0*/
      do /*0x4be58d*/
      {
        v51 = *v42; /*0x4be3f1*/
        if ( (unsigned __int16)a8 < *SamplePosition ) /*0x4be3f5*/
        {
          v52 = *(_WORD *)&v108[v81]; /*0x4be406*/
          LOBYTE(v113) = (unsigned __int8)(v52 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4be425*/
          HIBYTE(v113) = (unsigned __int8)(v52 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4be440*/
          LOWORD(a7) = v113; /*0x4be45c*/
          BYTE2(a7) = (unsigned __int8)(v52 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4be46b*/
          v53 = BlendColorPack((unsigned __int8 *)&a7, (v91 * v51) >> 7, (v90 * v51) >> 7, (v89 * v51) >> 7); /*0x4be490*/
          v48 = *(_DWORD *)v93; /*0x4be499*/
          v49 = v87; /*0x4be49d*/
          *(_WORD *)&v108[v81] = v53; /*0x4be4a1*/
          v50 = g_ZBufferDescriptor; /*0x4be4a5*/
        }
        if ( v48 > 0 ) /*0x4be4ad*/
        {
          v108 += v80; /*0x4be4c4*/
          v48 -= v79; /*0x4be4d2*/
          SamplePosition += pad_0; /*0x4be4d7*/
          if ( pad_0 <= 0 ) /*0x4be4db*/
          {
            v54 = SamplePosition; /*0x4be4ea*/
            if ( (unsigned int)SamplePosition < v50[1].Stream_field_04 ) /*0x4be4ec*/
              v54 = (_WORD *)((char *)SamplePosition + v50[1].Stream_field_0C); /*0x4be4f1*/
            SamplePosition = v54; /*0x4be4f3*/
          }
          else if ( (unsigned int)SamplePosition >= v50[1].Stream_field_08 ) /*0x4be4e0*/
          {
            SamplePosition = (_WORD *)((char *)SamplePosition - v50[1].Stream_field_0C); /*0x4be4e2*/
          }
          v42 += pad_0; /*0x4be4f5*/
          if ( pad_0 <= 0 ) /*0x4be4f9*/
          {
            v55 = v42; /*0x4be510*/
            if ( (unsigned int)v42 < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4be515*/
              v55 = (unsigned __int16 *)((char *)v42 + *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be51a*/
            v42 = v55; /*0x4be51c*/
          }
          else if ( (unsigned int)v42 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4be503*/
          {
            v42 = (unsigned __int16 *)((char *)v42 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be505*/
          }
          v49 = v87; /*0x4be52b*/
          a8 += v85; /*0x4be52f*/
        }
        if ( v49 > 0 ) /*0x4be538*/
        {
          ++SamplePosition; /*0x4be541*/
          v81 += 2; /*0x4be549*/
          if ( (unsigned int)SamplePosition >= v50[1].Stream_field_08 ) /*0x4be54d*/
            SamplePosition = (_WORD *)((char *)SamplePosition - v50[1].Stream_field_0C); /*0x4be54f*/
          v49 -= v79; /*0x4be552*/
        }
        a8 += v84; /*0x4be56a*/
        v49 += v104; /*0x4be578*/
        v48 += v103; /*0x4be57e*/
        v56 = *(_DWORD *)&v93[4] == 1; /*0x4be580*/
        v87 = v49; /*0x4be581*/
        *(_QWORD *)v93 = __PAIR64__(*(unsigned int *)&v93[4], v48) - 0x100000000LL; /*0x4be589*/
      }
      while ( !v56 ); /*0x4be58d*/
    }
  }
  (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4be599*/
  return 1; /*0x4be59c*/
}



// ==== 0x004BE9D0  BlendColorPack  this=-  sig=csp ====
int __fastcall Color_BlendPack(unsigned __int8 *a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  bool v9; // cc

  v4 = a2 + *a1; /*0x4be9dc*/
  v5 = a3 + a1[1]; /*0x4be9ec*/
  v6 = a4 + a1[2]; /*0x4be9ee*/
  v7 = 0; /*0x4be9f0*/
  v8 = 0; /*0x4be9f2*/
  if ( v4 >= 255 ) /*0x4be9fa*/
  {
    v8 = 1; /*0x4be9fc*/
    v7 = v4 - 255; /*0x4bea01*/
  }
  if ( v5 >= 255 ) /*0x4bea0d*/
  {
    ++v8; /*0x4bea0f*/
    v7 = v7 + v5 - 255; /*0x4bea10*/
  }
  if ( v6 >= 255 ) /*0x4bea1c*/
  {
    ++v8; /*0x4bea1e*/
    v7 = v7 + v6 - 255; /*0x4bea1f*/
  }
  if ( !v8 || v8 >= 3 ) /*0x4bea2d*/
    goto LABEL_17; /*0x4bea2d*/
  if ( v8 == 1 ) /*0x4bea32*/
    v7 >>= 1; /*0x4bea34*/
  if ( v4 < 255 ) /*0x4bea3c*/
    v4 += v7; /*0x4bea3e*/
  if ( v5 < 255 ) /*0x4bea46*/
    v5 += v7; /*0x4bea48*/
  v9 = v6 <= 255; /*0x4bea4a*/
  if ( v6 < 255 ) /*0x4bea4f*/
  {
    v6 += v7; /*0x4bea51*/
LABEL_17:
    v9 = v6 <= 255; /*0x4bea53*/
  }
  if ( !v9 ) /*0x4bea58*/
    v6 = 255; /*0x4bea5a*/
  if ( v5 > 255 ) /*0x4bea65*/
    v5 = 255; /*0x4bea67*/
  if ( v4 > 255 ) /*0x4bea72*/
    v4 = 255; /*0x4bea74*/
  return (v4 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4bea7f*/
       | (v5 >> g_BitMask_Blue << g_BitMask_Green)
       | (v6 >> g_BitMask_Red << g_BitShift_Blue);
}



// ==== 0x004BEAC0  AudioStream::DrawWaveform  this=AudioStream  sig=csp ====
char __thiscall AudioStream::DrawWaveform(
        AudioStream *this,
        int *a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned __int8 *a5,
        int a6,
        int a7,
        int a8)
{
  int *v8; // eax
  int *v9; // eax
  int v10; // esi
  int v11; // edi
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // esi
  int v16; // edx
  int v17; // ebx
  int v18; // ebp
  int v19; // edi
  int v20; // ebp
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  int Stream_field_04; // edi
  _WORD *SamplePosition; // edi
  int v32; // ebx
  int v33; // eax
  _WORD *v34; // ebx
  int v35; // ebp
  int v36; // esi
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // edx
  int v41; // ecx
  int v42; // esi
  unsigned __int16 v43; // ax
  _WORD *v44; // eax
  int v45; // eax
  _WORD *v46; // eax
  bool v47; // zf
  int v49; // eax
  int v50; // edx
  int v51; // esi
  unsigned __int16 v52; // ax
  _WORD *v53; // ecx
  _WORD *v54; // ecx
  int v55; // edx
  int v56; // esi
  unsigned __int16 v57; // ax
  unsigned int Stream_field_08; // ecx
  unsigned int v59; // edi
  int v60; // esi
  _WORD *v61; // eax
  int v62; // [esp+10h] [ebp-6Ch]
  int v63; // [esp+10h] [ebp-6Ch]
  int v64; // [esp+10h] [ebp-6Ch]
  int v65; // [esp+14h] [ebp-68h]
  int v66; // [esp+18h] [ebp-64h]
  int v67; // [esp+1Ch] [ebp-60h]
  int v68; // [esp+20h] [ebp-5Ch]
  int v69; // [esp+24h] [ebp-58h]
  int v70; // [esp+28h] [ebp-54h]
  int v72; // [esp+30h] [ebp-4Ch]
  int v73; // [esp+30h] [ebp-4Ch]
  int v74; // [esp+30h] [ebp-4Ch]
  int v75[2]; // [esp+34h] [ebp-48h] BYREF
  _WORD *v76; // [esp+3Ch] [ebp-40h] BYREF
  int v77; // [esp+40h] [ebp-3Ch]
  int v78; // [esp+4Ch] [ebp-30h] BYREF
  int v79; // [esp+50h] [ebp-2Ch]
  int v80; // [esp+5Ch] [ebp-20h] BYREF
  int v81; // [esp+60h] [ebp-1Ch]
  int v82; // [esp+64h] [ebp-18h] BYREF
  int v83; // [esp+68h] [ebp-14h]
  int v84; // [esp+6Ch] [ebp-10h] BYREF
  int v85; // [esp+70h] [ebp-Ch]
  int v86; // [esp+74h] [ebp-8h]
  int v87; // [esp+78h] [ebp-4h]
  int pad_0; // [esp+80h] [ebp+4h]
  char *v89; // [esp+84h] [ebp+8h]
  _DWORD *v90; // [esp+84h] [ebp+8h]
  int v91; // [esp+84h] [ebp+8h]
  char *v92; // [esp+88h] [ebp+Ch]
  int v93; // [esp+88h] [ebp+Ch]
  unsigned __int8 *v94; // [esp+8Ch] [ebp+10h]
  unsigned __int8 *v95; // [esp+8Ch] [ebp+10h]
  unsigned __int8 *v96; // [esp+8Ch] [ebp+10h]
  int v97; // [esp+90h] [ebp+14h]
  int v98; // [esp+90h] [ebp+14h]
  int v99; // [esp+94h] [ebp+18h]
  int v100; // [esp+94h] [ebp+18h]
  int v101; // [esp+94h] [ebp+18h]
  int v102; // [esp+98h] [ebp+1Ch]

  if ( a6 < 8 ) /*0x4bead5*/
    return 0; /*0x4bead5*/
  v8 = (int *)(*(int (__thiscall **)(AudioStream *, int *))(*(_DWORD *)this->__pad_0 + 120))(this, &v78); /*0x4beae2*/
  v9 = ClipRectIntersection(&v76, a2, v8, 0, 0); /*0x4beaf5*/
  v10 = *v9; /*0x4beafc*/
  v84 = *v9; /*0x4beafe*/
  v11 = v9[1]; /*0x4beb02*/
  v85 = v11; /*0x4beb05*/
  v86 = v9[2]; /*0x4beb0c*/
  v12 = v9[3]; /*0x4beb10*/
  v87 = v12; /*0x4beb15*/
  if ( !v86 && !v12 ) /*0x4beb1d*/
    return 0; /*0x4beb1d*/
  v13 = v10 + *a3; /*0x4beb3c*/
  v14 = v10 + *a4; /*0x4beb3e*/
  v15 = a8; /*0x4beb40*/
  v16 = v11 + a3[1]; /*0x4beb47*/
  v17 = v13; /*0x4beb49*/
  v18 = v11 + a4[1]; /*0x4beb4b*/
  v19 = a7; /*0x4beb4d*/
  v80 = v13; /*0x4beb56*/
  v81 = v16; /*0x4beb5a*/
  v82 = v14; /*0x4beb5e*/
  v83 = v18; /*0x4beb62*/
  if ( v13 > v14 ) /*0x4beb66*/
  {
    v17 = v14; /*0x4beb68*/
    v19 = a8; /*0x4beb6a*/
    v15 = a7; /*0x4beb6c*/
    v80 = v14; /*0x4beb73*/
    v81 = v18; /*0x4beb77*/
    v82 = v13; /*0x4beb7b*/
    v83 = v16; /*0x4beb7f*/
  }
  v78 = v82; /*0x4beb8f*/
  v20 = v17; /*0x4beb94*/
  v21 = v81; /*0x4beb96*/
  v79 = v83; /*0x4beba2*/
  if ( !(unsigned __int8)ClipLine(&v80, &v82, &v84) ) /*0x4beba6*/
    return 0; /*0x4beba6*/
  v92 = (char *)v15; /*0x4bebc1*/
  v89 = (char *)v19; /*0x4bebc8*/
  if ( v82 != v78 || v83 != v79 ) /*0x4bebd5*/
  {
    v75[0] = v20 - v82; /*0x4bebe7*/
    v75[1] = v21 - v83; /*0x4bebeb*/
    v76 = (_WORD *)(v20 - v78); /*0x4bebfb*/
    v77 = v21 - v79; /*0x4bebff*/
    Vector::TwoDMagnitudeMath((int *)&v76); /*0x4bec07*/
    v99 = v22; /*0x4bec10*/
    Vector::TwoDMagnitudeMath(v75); /*0x4bec17*/
    LOWORD(v24) = Math::RoundToInt((double)v23 / (double)v99 * (double)(v19 - v15)); /*0x4bec45*/
    v25 = abs32(v24); /*0x4bec4d*/
    if ( v19 >= v15 ) /*0x4bec51*/
      v92 = (char *)(v19 - v25); /*0x4bec62*/
    else
      v92 = (char *)(v19 + v25); /*0x4bec55*/
  }
  if ( v80 != v20 || v81 != v21 ) /*0x4bec77*/
  {
    v77 = v81 - v79; /*0x4bec8d*/
    v76 = (_WORD *)(v80 - v78); /*0x4bec97*/
    v78 = v20 - v78; /*0x4bec9b*/
    v79 = v21 - v79; /*0x4bec9f*/
    Vector::TwoDMagnitudeMath(&v78); /*0x4beca3*/
    v100 = v26; /*0x4becac*/
    Vector::TwoDMagnitudeMath((int *)&v76); /*0x4becb3*/
    LOWORD(v28) = Math::RoundToInt((double)v27 / (double)v100 * (double)(v19 - v15)); /*0x4bece1*/
    v29 = abs32(v28); /*0x4bece9*/
    if ( v15 <= v19 ) /*0x4beced*/
      v89 = (char *)(v15 + v29); /*0x4becfc*/
    else
      v89 = (char *)(v15 - v29); /*0x4becf1*/
  }
  (*(void (__thiscall **)(AudioStream *))(*(_DWORD *)this->__pad_0 + 112))(this); /*0x4bed0b*/
  v101 = (*(int (__thiscall **)(AudioStream *, int, int))(*(_DWORD *)this->__pad_0 + 92))(this, v80, v81); /*0x4bed25*/
  if ( !g_ZBufferDescriptor ) /*0x4bed2e*/
    return 0; /*0x4bed2e*/
  Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4bed38*/
  v79 = v81; /*0x4bed3f*/
  SamplePosition = (_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v80, v81 - Stream_field_04); /*0x4bed56*/
  v32 = *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4); /*0x4bed5c*/
  v79 = v81; /*0x4bed5f*/
  v33 = StreamClass::ReadAndSeek(*(int **)&stru_87E790.__pad_D8[60], v80, v81 - v32); /*0x4bed67*/
  v34 = (_WORD *)v33; /*0x4bed7a*/
  LOWORD(v33) = LOWORD(g_ZBufferDescriptor->Stream_field_04) + LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4bed87*/
  v67 = -1; /*0x4bed8b*/
  v102 = (int)&v89[v33 - v81 - v85]; /*0x4bed99*/
  pad_0 = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4beda3*/
  if ( !v101 ) /*0x4bedb3*/
    return 0; /*0x4bf63e*/
  v35 = 256 - a6; /*0x4bedd0*/
  v70 = (a6 * *a5) >> 8; /*0x4bedd8*/
  v69 = (a6 * a5[1]) >> 8; /*0x4bede7*/
  v68 = (a6 * a5[2]) >> 8; /*0x4bedfa*/
  v36 = v82 - v80; /*0x4bee06*/
  v72 = v82 - v80; /*0x4bee0c*/
  v97 = v83 - v81; /*0x4bee19*/
  v90 = (_DWORD *)(v92 - v89); /*0x4bee2b*/
  v37 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)this->__pad_0 + 116))(this); /*0x4bee32*/
  v66 = v37; /*0x4bee3c*/
  if ( v97 < 0 ) /*0x4bee42*/
  {
    v66 = -v37; /*0x4bee46*/
    pad_0 = -pad_0; /*0x4bee53*/
    v67 = 1; /*0x4bee5a*/
  }
  v65 = 1; /*0x4bee69*/
  v38 = abs32(v97); /*0x4bee7d*/
  if ( (int)v90 < 0 ) /*0x4bee81*/
    v65 = -1; /*0x4bee83*/
  v39 = abs32((int)v90); /*0x4bee8e*/
  v91 = 2 * v36; /*0x4bee93*/
  v98 = 2 * v38; /*0x4bee9d*/
  v93 = 2 * v39; /*0x4beea9*/
  if ( v39 <= v36 || v39 <= v38 ) /*0x4beeb8*/
  {
    if ( v36 <= v38 ) /*0x4bf149*/
    {
      v96 = (unsigned __int8 *)(v91 - v38); /*0x4bf3be*/
      v64 = v93 - v38; /*0x4bf3d0*/
      if ( v38 > 0 ) /*0x4bf3d4*/
      {
        v55 = 0; /*0x4bf3da*/
        v74 = v38; /*0x4bf3dc*/
        v75[0] = 0; /*0x4bf3e0*/
        do /*0x4bf620*/
        {
          v56 = (unsigned __int16)*v34; /*0x4bf3f1*/
          if ( (unsigned __int16)v102 < *SamplePosition && *v34 ) /*0x4bf3ec*/
          {
            v57 = *(_WORD *)(v55 + v101); /*0x4bf409*/
            LOBYTE(v78) = (unsigned __int8)(v57 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bf428*/
            BYTE1(v78) = (unsigned __int8)(v57 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bf439*/
            BYTE2(v78) = (unsigned __int8)(v57 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bf456*/
            v55 = v75[0]; /*0x4bf4e1*/
            *(_WORD *)(v75[0] + v101) = ((v56 * (v70 + ((v35 * (unsigned __int8)v78) >> 8))) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4bf4e5*/
                                      | ((v56 * (v69 + ((v35 * BYTE1(v78)) >> 8))) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                                      | ((v56 * (v68 + ((v35 * BYTE2(v78)) >> 8))) >> 7 >> g_BitMask_Red << g_BitShift_Blue);
          }
          if ( (int)v96 > 0 ) /*0x4bf4f2*/
          {
            ++SamplePosition; /*0x4bf4f9*/
            v55 += 2; /*0x4bf4fc*/
            Stream_field_08 = g_ZBufferDescriptor[1].Stream_field_08; /*0x4bf4ff*/
            v75[0] = v55; /*0x4bf502*/
            if ( (unsigned int)SamplePosition >= Stream_field_08 ) /*0x4bf508*/
              SamplePosition = (_WORD *)((char *)SamplePosition - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf50a*/
            if ( (unsigned int)++v34 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4bf518*/
              v34 = (_WORD *)((char *)v34 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4bf51a*/
            v96 -= v98; /*0x4bf52d*/
          }
          if ( v64 > 0 ) /*0x4bf53a*/
          {
            v102 += v65; /*0x4bf54d*/
            v64 -= v98; /*0x4bf55d*/
          }
          v96 += v91; /*0x4bf579*/
          v64 += v93; /*0x4bf592*/
          v101 += v66; /*0x4bf596*/
          v59 = (unsigned int)&SamplePosition[pad_0]; /*0x4bf5a7*/
          if ( pad_0 <= 0 ) /*0x4bf5ab*/
          {
            v76 = (_WORD *)v59; /*0x4bf5cd*/
            if ( v59 >= g_ZBufferDescriptor[1].Stream_field_04 ) /*0x4bf5d4*/
              v60 = (int)v76; /*0x4bf5dd*/
            else
              v60 = v59 + g_ZBufferDescriptor[1].Stream_field_0C; /*0x4bf5d9*/
            SamplePosition = (_WORD *)v60; /*0x4bf5e1*/
          }
          else
          {
            v76 = (_WORD *)v59; /*0x4bf5b3*/
            if ( v59 < g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4bf5ba*/
              SamplePosition = v76; /*0x4bf5c1*/
            else
              SamplePosition = (_WORD *)(v59 - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf5bc*/
          }
          v34 += pad_0; /*0x4bf5e7*/
          v102 += v67; /*0x4bf5e9*/
          if ( pad_0 <= 0 ) /*0x4bf5f2*/
          {
            v61 = v34; /*0x4bf609*/
            if ( (unsigned int)v34 < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4bf60e*/
              v61 = (_WORD *)((char *)v34 + *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4bf613*/
            v34 = v61; /*0x4bf615*/
          }
          else if ( (unsigned int)v34 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4bf5fc*/
          {
            v34 = (_WORD *)((char *)v34 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4bf5fe*/
          }
          --v74; /*0x4bf61c*/
        }
        while ( v74 ); /*0x4bf620*/
      }
    }
    else
    {
      v95 = (unsigned __int8 *)(v98 - v36); /*0x4bf158*/
      v63 = v93 - v36; /*0x4bf168*/
      v49 = 0; /*0x4bf16c*/
      v75[0] = 0; /*0x4bf170*/
      if ( v36 > 0 ) /*0x4bf174*/
      {
        v50 = *(_DWORD *)&stru_87E790.__pad_D8[60]; /*0x4bf17a*/
        do /*0x4bf39a*/
        {
          v51 = (unsigned __int16)*v34; /*0x4bf18d*/
          if ( (unsigned __int16)v102 < *SamplePosition && *v34 ) /*0x4bf188*/
          {
            v52 = *(_WORD *)(v101 + 2 * v49); /*0x4bf1ac*/
            LOBYTE(v76) = (unsigned __int8)(v52 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bf1c4*/
            BYTE1(v76) = (unsigned __int8)(v52 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bf1e5*/
            BYTE2(v76) = (unsigned __int8)(v52 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bf1f1*/
            v49 = v75[0]; /*0x4bf27c*/
            *(_WORD *)(v101 + 2 * v75[0]) = ((v51 * (v70 + ((v35 * (unsigned __int8)v76) >> 8))) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4bf280*/
                                          | ((v51 * (v68 + ((v35 * BYTE2(v76)) >> 8))) >> 7 >> g_BitMask_Red << g_BitShift_Blue)
                                          | ((v51 * (v69 + ((v35 * BYTE1(v76)) >> 8))) >> 7 >> g_BitMask_Blue << g_BitMask_Green);
            v50 = *(_DWORD *)&stru_87E790.__pad_D8[60]; /*0x4bf284*/
          }
          if ( (int)v95 > 0 ) /*0x4bf293*/
          {
            v101 += v66; /*0x4bf2a6*/
            v95 -= v91; /*0x4bf2b6*/
            SamplePosition += pad_0; /*0x4bf2c7*/
            if ( pad_0 <= 0 ) /*0x4bf2cb*/
            {
              v53 = SamplePosition; /*0x4bf2e3*/
              if ( (unsigned int)SamplePosition < g_ZBufferDescriptor[1].Stream_field_04 ) /*0x4bf2e8*/
                v53 = (_WORD *)((char *)SamplePosition + g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf2ed*/
              SamplePosition = v53; /*0x4bf2ef*/
            }
            else if ( (unsigned int)SamplePosition >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4bf2d6*/
            {
              SamplePosition = (_WORD *)((char *)SamplePosition - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf2d8*/
            }
            v50 = *(_DWORD *)&stru_87E790.__pad_D8[60]; /*0x4bf2f5*/
            v102 += v67; /*0x4bf2fb*/
            v34 += pad_0; /*0x4bf309*/
            if ( pad_0 <= 0 ) /*0x4bf30d*/
            {
              v54 = v34; /*0x4bf31c*/
              if ( (unsigned int)v34 < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4bf320*/
                v54 = (_WORD *)((char *)v34 + *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4bf325*/
              v34 = v54; /*0x4bf327*/
            }
            else if ( (unsigned int)v34 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4bf312*/
            {
              v34 = (_WORD *)((char *)v34 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4bf314*/
            }
          }
          if ( v63 > 0 ) /*0x4bf32f*/
          {
            v102 += v65; /*0x4bf335*/
            v63 -= v91; /*0x4bf345*/
          }
          v95 += v98; /*0x4bf360*/
          v63 += v93; /*0x4bf373*/
          if ( (unsigned int)++SamplePosition >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4bf37d*/
            SamplePosition = (_WORD *)((char *)SamplePosition - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf37f*/
          if ( (unsigned int)++v34 >= *(_DWORD *)(v50 + 28) ) /*0x4bf38a*/
            v34 = (_WORD *)((char *)v34 - *(_DWORD *)(v50 + 32)); /*0x4bf38c*/
          v75[0] = ++v49; /*0x4bf396*/
        }
        while ( v49 < v72 ); /*0x4bf39a*/
      }
    }
  }
  else
  {
    v62 = v98 - v39; /*0x4beec7*/
    v94 = (unsigned __int8 *)(v91 - v39); /*0x4beed6*/
    if ( v39 > 0 ) /*0x4beedd*/
    {
      v40 = *(_DWORD *)&stru_87E790.__pad_D8[60]; /*0x4beee3*/
      v41 = 0; /*0x4beee9*/
      v73 = 0; /*0x4beeeb*/
      v75[0] = v39; /*0x4beeef*/
      while ( 1 ) /*0x4bef00*/
      {
        v42 = (unsigned __int16)*v34; /*0x4bef00*/
        if ( (unsigned __int16)v102 < *SamplePosition && *v34 ) /*0x4beefb*/
        {
          v43 = *(_WORD *)(v41 + v101); /*0x4bef18*/
          LOBYTE(v76) = (unsigned __int8)(v43 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bef37*/
          BYTE1(v76) = (unsigned __int8)(v43 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bef58*/
          BYTE2(v76) = (unsigned __int8)(v43 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bef68*/
          v41 = v73; /*0x4befe7*/
          *(_WORD *)(v73 + v101) = ((v42 * (v70 + ((v35 * (unsigned __int8)v76) >> 8))) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4beff4*/
                                 | ((v42 * (v68 + ((v35 * BYTE2(v76)) >> 8))) >> 7 >> g_BitMask_Red << g_BitShift_Blue)
                                 | ((v42 * (v69 + ((v35 * BYTE1(v76)) >> 8))) >> 7 >> g_BitMask_Blue << g_BitMask_Green);
          v40 = *(_DWORD *)&stru_87E790.__pad_D8[60]; /*0x4beff8*/
        }
        if ( v62 <= 0 ) /*0x4bf004*/
        {
          v45 = v102; /*0x4bf0a9*/
          goto LABEL_45; /*0x4bf0a9*/
        }
        v101 += v66; /*0x4bf017*/
        v62 -= v93; /*0x4bf027*/
        SamplePosition += pad_0; /*0x4bf035*/
        if ( pad_0 <= 0 ) /*0x4bf039*/
        {
          v44 = SamplePosition; /*0x4bf050*/
          if ( (unsigned int)SamplePosition < g_ZBufferDescriptor[1].Stream_field_04 ) /*0x4bf055*/
            v44 = (_WORD *)((char *)SamplePosition + g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf05a*/
          SamplePosition = v44; /*0x4bf05c*/
        }
        else if ( (unsigned int)SamplePosition >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4bf043*/
        {
          SamplePosition = (_WORD *)((char *)SamplePosition - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf045*/
        }
        v40 = *(_DWORD *)&stru_87E790.__pad_D8[60]; /*0x4bf065*/
        v34 += pad_0; /*0x4bf06b*/
        if ( pad_0 <= 0 ) /*0x4bf06f*/
          break; /*0x4bf06f*/
        if ( (unsigned int)v34 < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4bf074*/
          goto LABEL_43; /*0x4bf074*/
        v34 = (_WORD *)((char *)v34 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4bf07d*/
        v45 = v67 + v102; /*0x4bf086*/
LABEL_45:
        if ( (int)v94 > 0 ) /*0x4bf0b9*/
        {
          ++SamplePosition; /*0x4bf0c1*/
          v41 += 2; /*0x4bf0c4*/
          v73 = v41; /*0x4bf0ca*/
          if ( (unsigned int)SamplePosition >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4bf0ce*/
            SamplePosition = (_WORD *)((char *)SamplePosition - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf0d0*/
          if ( (unsigned int)++v34 >= *(_DWORD *)(v40 + 28) ) /*0x4bf0db*/
            v34 = (_WORD *)((char *)v34 - *(_DWORD *)(v40 + 32)); /*0x4bf0dd*/
          v94 -= v93; /*0x4bf0e7*/
        }
        v102 = v65 + v45; /*0x4bf0fb*/
        v94 += v91; /*0x4bf112*/
        v47 = v75[0] == 1; /*0x4bf123*/
        v62 += v98; /*0x4bf124*/
        --v75[0]; /*0x4bf128*/
        if ( v47 ) /*0x4bf12c*/
          goto LABEL_52; /*0x4bf12c*/
      }
      v46 = v34; /*0x4bf08d*/
      if ( (unsigned int)v34 < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4bf091*/
        v46 = (_WORD *)((char *)v34 + *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4bf096*/
      v34 = v46; /*0x4bf098*/
LABEL_43:
      v45 = v67 + v102; /*0x4bf09a*/
      goto LABEL_45; /*0x4bf0a7*/
    }
  }
LABEL_52:
  (*(void (__thiscall **)(AudioStream *))(*(_DWORD *)this->__pad_0 + 96))(this); /*0x4bf132*/
  return 1; /*0x4bf13b*/
}



// ==== 0x004BF650  BlendMinimapPixel  this=-  sig=csp ====
__int16 __fastcall BlendMinimapPixel(unsigned __int16 a1, unsigned __int16 a2, int a3)
{
  int v3; // eax

  LOWORD(v3) = a1; /*0x4bf658*/
  switch ( a3 ) /*0x4bf664*/
  {
    case 0: /*0x4bf664*/
      LOWORD(v3) = a2; /*0x4bf6c0*/
      break; /*0x4bf6c0*/
    case 25: /*0x4bf664*/
      v3 = 4 * (HIWORD(g_DDraw_Gray127) & (a1 >> 2)); /*0x4bf6ba*/
      break; /*0x4bf6bd*/
    case 50: /*0x4bf664*/
      v3 = ((unsigned __int16)g_DDraw_Gray127 & (a2 >> 1)) + ((unsigned __int16)g_DDraw_Gray127 & (a1 >> 1)); /*0x4bf6a2*/
      break; /*0x4bf6a5*/
    case 75: /*0x4bf664*/
      v3 = 4 * (HIWORD(g_DDraw_Gray127) & (a1 >> 2)); /*0x4bf67d*/
      break; /*0x4bf680*/
    default:
      return v3;
  }
  return v3; /*0x4bf67c*/
}



// ==== 0x004BF750  DSurface::DrawGradientLine  this=DSurface  sig=csp ====
char __thiscall DSurface::DrawGradientLine(
        DSurface *this,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        int a5,
        int a6,
        float *a7,
        float *a8)
{
  DSurface *v8; // ebp
  int *v9; // eax
  int *v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  _WORD *v15; // ebx
  float *v16; // esi
  float *v17; // edi
  _BYTE *v18; // eax
  unsigned __int8 v19; // dl
  double v20; // st7
  char v22; // c0
  int v24; // eax
  int v25; // eax
  float *v26; // esi
  float *v27; // edi
  _BYTE *v28; // eax
  unsigned __int8 v29; // dl
  double v30; // st7
  char v32; // c0
  bool v33; // zf
  int v34; // esi
  int v35; // edi
  int v36; // eax
  int v37; // eax
  int v38; // ebx
  int v39; // ebp
  float *v40; // esi
  float *v41; // edi
  _BYTE *v42; // eax
  unsigned __int8 v43; // dl
  double v44; // st7
  char v46; // c0
  int v47; // ebx
  float *v48; // esi
  float *v49; // edi
  int v50; // ebp
  _BYTE *v51; // eax
  unsigned __int8 v52; // dl
  double v53; // st7
  char v55; // c0
  int v57; // [esp+10h] [ebp-48h]
  int v58; // [esp+14h] [ebp-44h]
  int v59; // [esp+14h] [ebp-44h]
  int v60; // [esp+18h] [ebp-40h] BYREF
  int v61; // [esp+1Ch] [ebp-3Ch]
  int v62; // [esp+20h] [ebp-38h] BYREF
  int v63; // [esp+24h] [ebp-34h]
  int v64; // [esp+28h] [ebp-30h] BYREF
  int v65; // [esp+2Ch] [ebp-2Ch]
  int v66; // [esp+30h] [ebp-28h]
  int v67; // [esp+34h] [ebp-24h]
  _BYTE v68[16]; // [esp+38h] [ebp-20h] BYREF
  int v69[4]; // [esp+48h] [ebp-10h] BYREF
  _WORD *v70; // [esp+5Ch] [ebp+4h]
  int v71; // [esp+5Ch] [ebp+4h]
  _DWORD *v72; // [esp+60h] [ebp+8h]
  int v73; // [esp+60h] [ebp+8h]
  _DWORD *v74; // [esp+64h] [ebp+Ch]
  int v75; // [esp+64h] [ebp+Ch]

  v8 = this; /*0x4bf755*/
  v9 = (int *)(*((int (__thiscall **)(DSurface *, _BYTE *))this->DSurface_field_0x0 + 30))(this, v68); /*0x4bf766*/
  v10 = ClipRectIntersection(v69, (int *)a2, v9, 0, 0); /*0x4bf776*/
  v64 = *v10; /*0x4bf77d*/
  v65 = v10[1]; /*0x4bf784*/
  v66 = v10[2]; /*0x4bf78b*/
  v67 = v10[3]; /*0x4bf796*/
  v11 = v65 + a3[1]; /*0x4bf7a1*/
  v60 = v64 + *a3; /*0x4bf7a3*/
  v61 = v11; /*0x4bf7a7*/
  v12 = v64 + *a4; /*0x4bf7b6*/
  v63 = v65 + a4[1]; /*0x4bf7b8*/
  v62 = v12; /*0x4bf7c9*/
  if ( (unsigned __int8)ClipLine(&v60, &v62, &v64) ) /*0x4bf7cd*/
  {
    v13 = v60; /*0x4bf7da*/
    if ( v60 > v62 ) /*0x4bf7e4*/
    {
      v14 = v61; /*0x4bf7e6*/
      v60 = v62; /*0x4bf7ea*/
      v62 = v13; /*0x4bf7f2*/
      v61 = v63; /*0x4bf7f6*/
      v63 = v14; /*0x4bf7fa*/
    }
    if ( (*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 28))(v8) == 2 ) /*0x4bf809*/
    {
      v15 = (_WORD *)(*((int (__thiscall **)(DSurface *, int, int))v8->DSurface_field_0x0 + 23))(v8, v60, v61); /*0x4bf821*/
      v70 = v15; /*0x4bf825*/
      if ( v15 ) /*0x4bf829*/
      {
        if ( v61 == v63 ) /*0x4bf83a*/
        {
          v71 = 0; /*0x4bf84a*/
          if ( v62 - v60 >= 0 ) /*0x4bf852*/
          {
            v16 = a8; /*0x4bf858*/
            v17 = a7; /*0x4bf85c*/
            do /*0x4bf874*/
            {
              v18 = Color::Lerp2((Color *)&a7, a5, a6, *v16); /*0x4bf874*/
              LOWORD(a8) = *(_WORD *)v18; /*0x4bf87f*/
              v19 = v18[2] >> g_BitMask_Red; /*0x4bf895*/
              LOWORD(v18) = (unsigned __int8)(BYTE1(a8) >> g_BitMask_Blue); /*0x4bf8ab*/
              *v15 = ((unsigned __int8)((unsigned __int8)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bf8cd*/
                   | ((_DWORD)v18 << g_BitMask_Green)
                   | (v19 << g_BitShift_Blue);
              v20 = *v17 + *v16; /*0x4bf8d2*/
              *v16 = v20; /*0x4bf8da*/
              if ( v22 && *v17 < 0.0 ) /*0x4bf8f0*/
              {
                *v16 = 0.0; /*0x4bf8f4*/
              }
              else
              {
                if ( v20 <= 1.0 || *v17 <= 0.0 ) /*0x4bf916*/
                  goto LABEL_16; /*0x4bf916*/
                *v16 = 1.0; /*0x4bf918*/
              }
              *v17 = -*v17; /*0x4bf922*/
LABEL_16:
              ++v15; /*0x4bf924*/
              ++v71; /*0x4bf938*/
            }
            while ( v71 <= v62 - v60 ); /*0x4bf874*/
          }
LABEL_17:
          (*((void (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 24))(v8); /*0x4bf942*/
          return 1; /*0x4bf953*/
        }
        if ( v60 == v62 ) /*0x4bf960*/
        {
          if ( v61 <= v63 ) /*0x4bf968*/
            v24 = (*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 29))(v8); /*0x4bf97b*/
          else
            v24 = -(*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 29))(v8); /*0x4bf972*/
          v72 = (_DWORD *)v24; /*0x4bf982*/
          v25 = abs32(v63 - v61); /*0x4bf98f*/
          if ( v25 < 0 ) /*0x4bf991*/
            goto LABEL_17; /*0x4bf991*/
          v26 = a8; /*0x4bf997*/
          v27 = a7; /*0x4bf99b*/
          v74 = (_DWORD *)(v25 + 1); /*0x4bf9a4*/
          while ( 1 ) /*0x4bf9b8*/
          {
            v28 = Color::Lerp2((Color *)&a7, a5, a6, *v26); /*0x4bf9b8*/
            LOWORD(a8) = *(_WORD *)v28; /*0x4bf9c3*/
            v29 = v28[2] >> g_BitMask_Red; /*0x4bf9d9*/
            LOWORD(v28) = (unsigned __int8)(BYTE1(a8) >> g_BitMask_Blue); /*0x4bf9ef*/
            *v70 = ((unsigned __int8)((unsigned __int8)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfa15*/
                 | ((_DWORD)v28 << g_BitMask_Green)
                 | (v29 << g_BitShift_Blue);
            v30 = *v27 + *v26; /*0x4bfa1a*/
            *v26 = v30; /*0x4bfa22*/
            if ( v32 && *v27 < 0.0 ) /*0x4bfa38*/
            {
              *v26 = 0.0; /*0x4bfa3c*/
            }
            else
            {
              if ( v30 <= 1.0 || *v27 <= 0.0 ) /*0x4bfa5e*/
                goto LABEL_31; /*0x4bfa5e*/
              *v26 = 1.0; /*0x4bfa60*/
            }
            *v27 = -*v27; /*0x4bfa6a*/
LABEL_31:
            v33 = v74 == (_DWORD *)1; /*0x4bfa6c*/
            v70 = (_WORD *)((char *)v70 + (_DWORD)v72); /*0x4bfa7b*/
            v74 = (_DWORD *)((char *)v74 - 1); /*0x4bfa7f*/
            if ( v33 ) /*0x4bfa83*/
              goto LABEL_17; /*0x4bfa83*/
          }
        }
        v34 = v63 - v61; /*0x4bfaa1*/
        v35 = v62 - v60; /*0x4bfaa6*/
        v58 = v62 - v60; /*0x4bfaaa*/
        v36 = (*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 29))(v8); /*0x4bfaae*/
        v73 = v36; /*0x4bfab3*/
        if ( v34 < 0 ) /*0x4bfab7*/
          v73 = -v36; /*0x4bfabb*/
        v57 = 2 * v35; /*0x4bfac7*/
        v37 = abs32(v34); /*0x4bfacb*/
        v75 = 2 * v37; /*0x4bfad2*/
        if ( v35 > v37 ) /*0x4bfad6*/
        {
          v38 = 0; /*0x4bfade*/
          v39 = 2 * v37 - v35; /*0x4bfae0*/
          if ( v35 < 0 ) /*0x4bfae4*/
          {
LABEL_61:
            v8 = this; /*0x4bfd08*/
            goto LABEL_17; /*0x4bfd08*/
          }
          v40 = a8; /*0x4bfaea*/
          v41 = a7; /*0x4bfaee*/
          while ( 1 ) /*0x4bfb06*/
          {
            v42 = Color::Lerp2((Color *)&a7, a5, a6, *v40); /*0x4bfb06*/
            LOWORD(a8) = *(_WORD *)v42; /*0x4bfb11*/
            v43 = v42[2] >> g_BitMask_Red; /*0x4bfb27*/
            LOWORD(v42) = (unsigned __int8)(BYTE1(a8) >> g_BitMask_Blue); /*0x4bfb3d*/
            v70[v38] = ((unsigned __int8)((unsigned __int8)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfb63*/
                     | ((_DWORD)v42 << g_BitMask_Green)
                     | (v43 << g_BitShift_Blue);
            v44 = *v41 + *v40; /*0x4bfb69*/
            *v40 = v44; /*0x4bfb71*/
            if ( v46 && *v41 < 0.0 ) /*0x4bfb87*/
            {
              *v40 = 0.0; /*0x4bfb8b*/
            }
            else
            {
              if ( v44 <= 1.0 || *v41 <= 0.0 ) /*0x4bfbad*/
                goto LABEL_45; /*0x4bfbad*/
              *v40 = 1.0; /*0x4bfbaf*/
            }
            *v41 = -*v41; /*0x4bfbb9*/
LABEL_45:
            if ( v39 > 0 ) /*0x4bfbbd*/
            {
              v39 -= v57; /*0x4bfbc9*/
              v70 = (_WORD *)((char *)v70 + v73); /*0x4bfbcb*/
            }
            v39 += v75; /*0x4bfbd7*/
            if ( ++v38 > v58 ) /*0x4bfbdc*/
            {
              (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bfbeb*/
              return 1; /*0x4bfbf7*/
            }
          }
        }
        v47 = 2 * v35 - v37; /*0x4bfbfa*/
        if ( v37 < 0 ) /*0x4bfbfe*/
          goto LABEL_17; /*0x4bfbfe*/
        v48 = a8; /*0x4bfc04*/
        v49 = a7; /*0x4bfc08*/
        v50 = 0; /*0x4bfc0c*/
        v59 = v37 + 1; /*0x4bfc0f*/
        while ( 1 ) /*0x4bfc27*/
        {
          v51 = Color::Lerp2((Color *)&a7, a5, a6, *v48); /*0x4bfc27*/
          LOWORD(a8) = *(_WORD *)v51; /*0x4bfc32*/
          v52 = v51[2] >> g_BitMask_Red; /*0x4bfc48*/
          LOWORD(v51) = (unsigned __int8)(BYTE1(a8) >> g_BitMask_Blue); /*0x4bfc5e*/
          v70[v50] = ((unsigned __int8)((unsigned __int8)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfc84*/
                   | ((_DWORD)v51 << g_BitMask_Green)
                   | (v52 << g_BitShift_Blue);
          v53 = *v49 + *v48; /*0x4bfc8a*/
          *v48 = v53; /*0x4bfc92*/
          if ( v55 && *v49 < 0.0 ) /*0x4bfca8*/
          {
            *v48 = 0.0; /*0x4bfcac*/
          }
          else
          {
            if ( v53 <= 1.0 || *v49 <= 0.0 ) /*0x4bfcce*/
              goto LABEL_58; /*0x4bfcce*/
            *v48 = 1.0; /*0x4bfcd0*/
          }
          *v49 = -*v49; /*0x4bfcda*/
LABEL_58:
          if ( v47 > 0 ) /*0x4bfcde*/
          {
            ++v50; /*0x4bfce4*/
            v47 -= v75; /*0x4bfce7*/
          }
          v47 += v57; /*0x4bfcf1*/
          v33 = v59 == 1; /*0x4bfcf9*/
          v70 = (_WORD *)((char *)v70 + v73); /*0x4bfcfa*/
          --v59; /*0x4bfcfe*/
          if ( v33 ) /*0x4bfd02*/
            goto LABEL_61; /*0x4bfd02*/
        }
      }
    }
  }
  return 0; /*0x4bf94b*/
}



// ==== 0x004BFD30  DSurface::DrawLineZBuf  this=DSurface  sig=csp ====
int __fastcall DSurface::DrawLineZBuf(
        DSurface *this,
        int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned __int16 a6,
        int a7,
        int a8,
        char a9)
{
  double v9; // st7
  int (__stdcall **DSurface_field_0x0)(_DWORD *); // eax
  int *v11; // eax
  int *v12; // ecx
  int v13; // esi
  int v14; // edi
  int result; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // ebx
  int v20; // edx
  int v21; // ebp
  int v22; // esi
  int v23; // edi
  int v24; // esi
  int v25; // ebp
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // ebp
  int v35; // esi
  int v36; // ebx
  int Stream_field_04; // edi
  _WORD *SamplePosition; // esi
  int v39; // edi
  _WORD *v40; // edi
  int v41; // ecx
  int v42; // ebx
  int v43; // ebp
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // ebp
  int v48; // ebx
  Stream *v49; // edx
  _DWORD *v50; // ebp
  int v51; // eax
  int v52; // edx
  int v53; // eax
  _WORD *v54; // eax
  _WORD *v55; // eax
  int v56; // ebx
  Stream *v57; // edx
  _DWORD *v58; // ebp
  int v59; // eax
  int v60; // edx
  _WORD *v61; // eax
  _WORD *v62; // eax
  int v63; // eax
  int v64; // ebp
  _DWORD *v65; // edx
  Stream *v66; // ecx
  int v67; // ebx
  int v68; // eax
  int v69; // eax
  _WORD *v70; // eax
  _WORD *v71; // eax
  double v72; // [esp+4h] [ebp-7Ch]
  double v73; // [esp+4h] [ebp-7Ch]
  double v74; // [esp+4h] [ebp-7Ch]
  double v75; // [esp+4h] [ebp-7Ch]
  int v76; // [esp+1Ch] [ebp-64h]
  int v77; // [esp+20h] [ebp-60h]
  int v78; // [esp+20h] [ebp-60h]
  int v79; // [esp+20h] [ebp-60h]
  int v80; // [esp+24h] [ebp-5Ch]
  int v81; // [esp+28h] [ebp-58h]
  int v82; // [esp+2Ch] [ebp-54h]
  int v83; // [esp+30h] [ebp-50h]
  int v84; // [esp+30h] [ebp-50h]
  int v85; // [esp+34h] [ebp-4Ch]
  int v86; // [esp+38h] [ebp-48h]
  double v87; // [esp+3Ch] [ebp-44h] BYREF
  _DWORD v88[5]; // [esp+4Ch] [ebp-34h] BYREF
  int v89; // [esp+60h] [ebp-20h] BYREF
  int v90; // [esp+64h] [ebp-1Ch]
  int v91[2]; // [esp+68h] [ebp-18h] BYREF
  int v92; // [esp+70h] [ebp-10h] BYREF
  int v93; // [esp+74h] [ebp-Ch]
  int v94; // [esp+78h] [ebp-8h]
  int v95; // [esp+7Ch] [ebp-4h]
  int v96; // [esp+84h] [ebp+4h]
  _DWORD *v97; // [esp+88h] [ebp+8h]
  int v98; // [esp+88h] [ebp+8h]
  int v99; // [esp+8Ch] [ebp+Ch]
  _DWORD *v100; // [esp+8Ch] [ebp+Ch]
  _DWORD *v101; // [esp+8Ch] [ebp+Ch]
  int v102; // [esp+94h] [ebp+14h]
  int v103; // [esp+94h] [ebp+14h]
  int v104; // [esp+94h] [ebp+14h]
  int v105; // [esp+94h] [ebp+14h]
  int v106; // [esp+98h] [ebp+18h]
  int v107; // [esp+98h] [ebp+18h]
  int v108; // [esp+98h] [ebp+18h]
  int v109; // [esp+98h] [ebp+18h]
  int v110; // [esp+98h] [ebp+18h]

  DSurface_field_0x0 = (int (__stdcall **)(_DWORD *))this->DSurface_field_0x0; /*0x4bfd33*/
  v88[0] = this; /*0x4bfd3e*/
  v11 = (int *)DSurface_field_0x0[30](&v88[1]); /*0x4bfd42*/
  v12 = ClipRectIntersection(&v87, (int *)a3, v11, 0, 0); /*0x4bfd57*/
  v13 = *v12; /*0x4bfd59*/
  v92 = *v12; /*0x4bfd5b*/
  v14 = v12[1]; /*0x4bfd5f*/
  v93 = v14; /*0x4bfd62*/
  result = v12[2]; /*0x4bfd66*/
  v94 = result; /*0x4bfd69*/
  v16 = v12[3]; /*0x4bfd6d*/
  v95 = v16; /*0x4bfd72*/
  if ( !result && !v16 ) /*0x4bfd7a*/
    goto LABEL_121; /*0x4bfd7a*/
  v17 = v13 + *a4; /*0x4bfd92*/
  v18 = v13 + *a5; /*0x4bfd94*/
  v19 = a7; /*0x4bfd99*/
  v20 = v14 + a4[1]; /*0x4bfda0*/
  v21 = v17; /*0x4bfda2*/
  v22 = v14 + a5[1]; /*0x4bfda4*/
  v23 = a8; /*0x4bfda6*/
  v89 = v17; /*0x4bfdaf*/
  v90 = v20; /*0x4bfdb3*/
  v91[0] = v18; /*0x4bfdb7*/
  v91[1] = v22; /*0x4bfdbb*/
  if ( v17 > v18 ) /*0x4bfdbf*/
  {
    v21 = v18; /*0x4bfdc1*/
    v19 = a8; /*0x4bfdc3*/
    v23 = a7; /*0x4bfdc5*/
    v89 = v18; /*0x4bfdcc*/
    v90 = v22; /*0x4bfdd0*/
    v91[0] = v17; /*0x4bfdd4*/
    v91[1] = v20; /*0x4bfdd8*/
  }
  v88[1] = v91[0]; /*0x4bfde8*/
  v24 = v21; /*0x4bfded*/
  v25 = v90; /*0x4bfdef*/
  v88[2] = v91[1]; /*0x4bfdfb*/
  result = ClipLine(&v89, v91, &v92); /*0x4bfdff*/
  if ( !(_BYTE)result ) /*0x4bfe06*/
    goto LABEL_121; /*0x4bfe06*/
  v97 = (_DWORD *)v23; /*0x4bfe1a*/
  v106 = v19; /*0x4bfe1e*/
  if ( v91[0] != v88[1] || v91[1] != v88[2] ) /*0x4bfe2b*/
  {
    LODWORD(v87) = v24 - v91[0]; /*0x4bfe3a*/
    __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bfe40*/
    HIDWORD(v87) = v25 - v91[1]; /*0x4bfe44*/
    __asm /*0x4bfe48*/
    {
      fild [esp+7Ch+var_40]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+7Ch+var_80+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v72); /*0x4bfe5d*/
    LOWORD(v26) = Math::RoundToInt(v9); /*0x4bfe62*/
    v102 = v26; /*0x4bfe6d*/
    LODWORD(v87) = v24 - v88[1]; /*0x4bfe7c*/
    __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bfe82*/
    HIDWORD(v87) = v25 - v88[2]; /*0x4bfe86*/
    __asm /*0x4bfe8a*/
    {
      fild [esp+7Ch+var_40]
      fild [esp+7Ch+arg_10]
      fstp [esp+7Ch+var_48+4]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+7Ch+var_80+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v73); /*0x4bfeaa*/
    LOWORD(v27) = Math::RoundToInt(v9); /*0x4bfeb2*/
    v103 = v27; /*0x4bfeb7*/
    __asm { fild [esp+74h+arg_10] } /*0x4bfec0*/
    v104 = v19 - v23; /*0x4bfec9*/
    __asm /*0x4bfed0*/
    {
      fdivr [esp+74h+var_48+4]
      fild [esp+74h+arg_10]
      fmulp st(1), st
    }
    LOWORD(v28) = Math::RoundToInt(v9); /*0x4bfedd*/
    v29 = abs32(v28); /*0x4bfee5*/
    if ( v19 >= v23 ) /*0x4bfee9*/
      v97 = (_DWORD *)(v19 - v29); /*0x4bfef7*/
    else
      v97 = (_DWORD *)(v19 + v29); /*0x4bfeed*/
  }
  if ( v89 == v24 && v90 == v25 ) /*0x4bff09*/
    goto LABEL_16; /*0x4bff09*/
  LODWORD(v87) = v89 - v88[1]; /*0x4bff18*/
  __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bff20*/
  HIDWORD(v87) = v90 - v88[2]; /*0x4bff26*/
  __asm /*0x4bff2a*/
  {
    fild [esp+7Ch+var_40]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+7Ch+var_80+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v74); /*0x4bff3f*/
  LOWORD(v30) = Math::RoundToInt(v9); /*0x4bff44*/
  v107 = v30; /*0x4bff49*/
  LODWORD(v87) = v24 - v88[1]; /*0x4bff56*/
  __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bff5e*/
  HIDWORD(v87) = v25 - v88[2]; /*0x4bff64*/
  __asm /*0x4bff68*/
  {
    fild [esp+7Ch+var_40]
    fild [esp+7Ch+arg_14]
    fstp qword ptr [esp+7Ch+var_34+4]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+7Ch+var_80+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v75); /*0x4bff88*/
  LOWORD(v31) = Math::RoundToInt(v9); /*0x4bff90*/
  v108 = v31; /*0x4bff95*/
  __asm { fild [esp+74h+arg_14] } /*0x4bff9e*/
  v109 = v19 - v23; /*0x4bffa7*/
  __asm /*0x4bffae*/
  {
    fdivr qword ptr [esp+74h+var_34+4]
    fild [esp+74h+arg_14]
    fmulp st(1), st
  }
  LOWORD(v32) = Math::RoundToInt(v9); /*0x4bffbb*/
  v33 = abs32(v32); /*0x4bffc3*/
  if ( v23 <= v19 ) /*0x4bffc7*/
  {
    v106 = v23 + v33; /*0x4bffd1*/
LABEL_16:
    v34 = v106; /*0x4bffd8*/
    goto LABEL_17; /*0x4bffd8*/
  }
  v34 = v23 - v33; /*0x4bffcb*/
LABEL_17:
  v35 = v88[0]; /*0x4bffdf*/
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v88[0] + 112))(v88[0]); /*0x4bffe7*/
  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v35 + 92))(v35, v89, v90); /*0x4bfff8*/
  v36 = result; /*0x4c0001*/
  v105 = result; /*0x4c0005*/
  if ( !g_ZBufferDescriptor ) /*0x4c000c*/
    goto LABEL_121; /*0x4c000c*/
  Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4c0016*/
  v88[2] = v90; /*0x4c001d*/
  SamplePosition = (_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v89, v90 - Stream_field_04); /*0x4c0034*/
  v39 = *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4); /*0x4c003a*/
  v88[2] = v90; /*0x4c003d*/
  v40 = (_WORD *)StreamClass::ReadAndSeek(*(int **)&stru_87E790.__pad_D8[60], v89, v90 - v39); /*0x4c004e*/
  v82 = -1; /*0x4c0055*/
  LOWORD(v41) = LOWORD(g_ZBufferDescriptor->Stream_field_04) + LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4c0061*/
  result = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4c0065*/
  v96 = result; /*0x4c0068*/
  v110 = v34 + v41 - v90 - v93; /*0x4c0076*/
  if ( !v36 ) /*0x4c007d*/
  {
LABEL_121:
    LOBYTE(result) = 0; /*0x4c073b*/
    return result; /*0x4c073e*/
  }
  LOBYTE(v88[1]) = (unsigned __int8)(a6 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4c00a5*/
  BYTE1(v88[1]) = (unsigned __int8)(a6 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4c00c6*/
  v42 = v91[1] - v90; /*0x4c00ce*/
  BYTE2(v88[1]) = (unsigned __int8)(a6 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4c00d6*/
  v85 = LOBYTE(v88[1]); /*0x4c00e3*/
  v86 = BYTE1(v88[1]); /*0x4c00f0*/
  LODWORD(v87) = BYTE2(v88[1]); /*0x4c00fd*/
  v99 = v91[0] - v89; /*0x4c010b*/
  v43 = (int)v97 - v34; /*0x4c011a*/
  v44 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v88[0] + 116))(v88[0]); /*0x4c011c*/
  v81 = v44; /*0x4c0121*/
  if ( v42 < 0 ) /*0x4c0125*/
  {
    v81 = -v44; /*0x4c0129*/
    v96 = -v96; /*0x4c0133*/
    v82 = 1; /*0x4c0137*/
  }
  v80 = 1; /*0x4c0141*/
  v45 = abs32(v42); /*0x4c014e*/
  if ( v43 < 0 ) /*0x4c0152*/
    v80 = -1; /*0x4c0154*/
  v98 = 2 * v45; /*0x4c0164*/
  v46 = abs32(v43); /*0x4c0168*/
  v47 = 2 * v99; /*0x4c0173*/
  v83 = 2 * v99; /*0x4c0179*/
  v76 = 2 * v46; /*0x4c017d*/
  if ( v46 <= v99 || v46 <= v45 ) /*0x4c0189*/
  {
    if ( v99 <= v45 ) /*0x4c0375*/
    {
      v64 = v47 - v45; /*0x4c0559*/
      v88[1] = 2 * v46 - v45; /*0x4c055f*/
      if ( v45 > 0 ) /*0x4c0563*/
      {
        v65 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0569*/
        v79 = v45; /*0x4c056f*/
        v66 = g_ZBufferDescriptor; /*0x4c0573*/
        v101 = 0; /*0x4c0579*/
        do /*0x4c0720*/
        {
          v67 = v110; /*0x4c0584*/
          v68 = (unsigned __int16)*v40; /*0x4c0590*/
          if ( (unsigned __int16)v110 < *SamplePosition && *v40 ) /*0x4c058b*/
          {
            if ( v68 == 127 ) /*0x4c05a4*/
            {
              *(_WORD *)((char *)v101 + v105) = a6; /*0x4c0627*/
            }
            else
            {
              v67 = v110; /*0x4c05f2*/
              *(_WORD *)((char *)v101 + v105) = ((LODWORD(v87) * v68) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c060b*/
                                              | ((v86 * v68) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                                              | ((v85 * v68) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
            }
            if ( a9 ) /*0x4c0634*/
              *SamplePosition = v67; /*0x4c0636*/
            v66 = g_ZBufferDescriptor; /*0x4c0639*/
            v65 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c063f*/
          }
          if ( v64 > 0 ) /*0x4c0647*/
          {
            ++SamplePosition; /*0x4c0650*/
            v101 = (_DWORD *)((char *)v101 + 2); /*0x4c0656*/
            if ( (unsigned int)SamplePosition >= v66[1].Stream_field_08 ) /*0x4c0662*/
              SamplePosition = (_WORD *)((char *)SamplePosition - v66[1].Stream_field_0C); /*0x4c0664*/
            if ( (unsigned int)++v40 >= v65[7] ) /*0x4c066f*/
              v40 = (_WORD *)((char *)v40 - v65[8]); /*0x4c0671*/
            v64 -= v98; /*0x4c0674*/
          }
          v69 = v88[1]; /*0x4c0678*/
          if ( v88[1] > 0 ) /*0x4c067e*/
          {
            v110 = v80 + v67; /*0x4c0684*/
            v69 = v88[1] - v98; /*0x4c068f*/
          }
          v64 += v83; /*0x4c0695*/
          v88[1] = v76 + v69; /*0x4c06a4*/
          v105 += v81; /*0x4c06ae*/
          SamplePosition += v96; /*0x4c06bc*/
          if ( v96 <= 0 ) /*0x4c06c0*/
          {
            v70 = SamplePosition; /*0x4c06cf*/
            if ( (unsigned int)SamplePosition < v66[1].Stream_field_04 ) /*0x4c06d3*/
              v70 = (_WORD *)((char *)SamplePosition + v66[1].Stream_field_0C); /*0x4c06d8*/
            SamplePosition = v70; /*0x4c06da*/
          }
          else if ( (unsigned int)SamplePosition >= v66[1].Stream_field_08 ) /*0x4c06c5*/
          {
            SamplePosition = (_WORD *)((char *)SamplePosition - v66[1].Stream_field_0C); /*0x4c06c7*/
          }
          v110 += v82; /*0x4c06e9*/
          v40 += v96; /*0x4c06f7*/
          if ( v96 <= 0 ) /*0x4c06fb*/
          {
            v71 = v40; /*0x4c070a*/
            if ( (unsigned int)v40 < v65[6] ) /*0x4c070e*/
              v71 = (_WORD *)((char *)v40 + v65[8]); /*0x4c0713*/
            v40 = v71; /*0x4c0715*/
          }
          else if ( (unsigned int)v40 >= v65[7] ) /*0x4c0700*/
          {
            v40 = (_WORD *)((char *)v40 - v65[8]); /*0x4c0702*/
          }
          --v79; /*0x4c071c*/
        }
        while ( v79 ); /*0x4c0720*/
      }
    }
    else
    {
      v56 = v98 - v99; /*0x4c038a*/
      v78 = 0; /*0x4c038e*/
      v84 = v76 - v99; /*0x4c0398*/
      if ( v99 > 0 ) /*0x4c039c*/
      {
        v57 = g_ZBufferDescriptor; /*0x4c03a2*/
        v58 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c03a8*/
        do /*0x4c053c*/
        {
          v59 = (unsigned __int16)*v40; /*0x4c03bb*/
          if ( (unsigned __int16)v110 < *SamplePosition && *v40 ) /*0x4c03b6*/
          {
            if ( v59 == 127 ) /*0x4c03cf*/
              LOWORD(v60) = a6; /*0x4c0423*/
            else
              v60 = ((LODWORD(v87) * v59) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c041f*/
                  | ((v86 * v59) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                  | ((v85 * v59) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
            *(_WORD *)(v105 + 2 * v78) = v60; /*0x4c0436*/
            if ( a9 ) /*0x4c0443*/
              *SamplePosition = v110; /*0x4c044d*/
            v57 = g_ZBufferDescriptor; /*0x4c0450*/
            v58 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0456*/
          }
          if ( v56 > 0 ) /*0x4c045e*/
          {
            v105 += v81; /*0x4c046d*/
            v56 -= 2 * v99; /*0x4c047e*/
            SamplePosition += v96; /*0x4c0487*/
            if ( v96 <= 0 ) /*0x4c048b*/
            {
              v61 = SamplePosition; /*0x4c049a*/
              if ( (unsigned int)SamplePosition < v57[1].Stream_field_04 ) /*0x4c049c*/
                v61 = (_WORD *)((char *)SamplePosition + v57[1].Stream_field_0C); /*0x4c04a1*/
              SamplePosition = v61; /*0x4c04a3*/
            }
            else if ( (unsigned int)SamplePosition >= v57[1].Stream_field_08 ) /*0x4c0490*/
            {
              SamplePosition = (_WORD *)((char *)SamplePosition - v57[1].Stream_field_0C); /*0x4c0492*/
            }
            v40 += v96; /*0x4c04a9*/
            v110 += v82; /*0x4c04ab*/
            if ( v96 <= 0 ) /*0x4c04b8*/
            {
              v62 = v40; /*0x4c04c7*/
              if ( (unsigned int)v40 < v58[6] ) /*0x4c04cb*/
                v62 = (_WORD *)((char *)v40 + v58[8]); /*0x4c04d0*/
              v40 = v62; /*0x4c04d2*/
            }
            else if ( (unsigned int)v40 >= v58[7] ) /*0x4c04bd*/
            {
              v40 = (_WORD *)((char *)v40 - v58[8]); /*0x4c04bf*/
            }
          }
          v63 = v84; /*0x4c04d4*/
          if ( v84 > 0 ) /*0x4c04da*/
          {
            v110 += v80; /*0x4c04e9*/
            v63 = v84 - 2 * v99; /*0x4c04fe*/
          }
          ++SamplePosition; /*0x4c0504*/
          v56 += v98; /*0x4c0507*/
          v84 = v76 + v63; /*0x4c050f*/
          if ( (unsigned int)SamplePosition >= v57[1].Stream_field_08 ) /*0x4c0518*/
            SamplePosition = (_WORD *)((char *)SamplePosition - v57[1].Stream_field_0C); /*0x4c051a*/
          if ( (unsigned int)++v40 >= v58[7] ) /*0x4c0525*/
            v40 = (_WORD *)((char *)v40 - v58[8]); /*0x4c0527*/
          ++v78; /*0x4c0538*/
        }
        while ( v78 < v99 ); /*0x4c053c*/
      }
    }
  }
  else
  {
    v48 = v98 - v46; /*0x4c0195*/
    v77 = v47 - v46; /*0x4c019b*/
    if ( v46 > 0 ) /*0x4c019f*/
    {
      v49 = g_ZBufferDescriptor; /*0x4c01a5*/
      v50 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c01ab*/
      v100 = 0; /*0x4c01b1*/
      v88[1] = v46; /*0x4c01bc*/
      do /*0x4c0358*/
      {
        v51 = (unsigned __int16)*v40; /*0x4c01cd*/
        if ( (unsigned __int16)v110 < *SamplePosition && *v40 ) /*0x4c01c8*/
        {
          if ( v51 == 127 ) /*0x4c01e1*/
            LOWORD(v52) = a6; /*0x4c0235*/
          else
            v52 = ((LODWORD(v87) * v51) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c0231*/
                | ((v86 * v51) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                | ((v85 * v51) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
          *(_WORD *)((char *)v100 + v105) = v52; /*0x4c024b*/
          if ( a9 ) /*0x4c0258*/
            *SamplePosition = v110; /*0x4c0262*/
          v49 = g_ZBufferDescriptor; /*0x4c0265*/
          v50 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c026b*/
        }
        if ( v48 > 0 ) /*0x4c0273*/
        {
          v48 -= v76; /*0x4c0286*/
          v53 = v96; /*0x4c0288*/
          v105 += v81; /*0x4c028c*/
          SamplePosition += v96; /*0x4c0296*/
          if ( v96 <= 0 ) /*0x4c029a*/
          {
            v54 = SamplePosition; /*0x4c02a9*/
            if ( (unsigned int)SamplePosition < v49[1].Stream_field_04 ) /*0x4c02ab*/
              v54 = (_WORD *)((char *)SamplePosition + v49[1].Stream_field_0C); /*0x4c02b0*/
            SamplePosition = v54; /*0x4c02b2*/
            v53 = v96; /*0x4c02b4*/
          }
          else if ( (unsigned int)SamplePosition >= v49[1].Stream_field_08 ) /*0x4c029f*/
          {
            SamplePosition = (_WORD *)((char *)SamplePosition - v49[1].Stream_field_0C); /*0x4c02a1*/
          }
          v40 += v96; /*0x4c02b8*/
          if ( v53 <= 0 ) /*0x4c02bc*/
          {
            v55 = v40; /*0x4c02cb*/
            if ( (unsigned int)v40 < v50[6] ) /*0x4c02cf*/
              v55 = (_WORD *)((char *)v40 + v50[8]); /*0x4c02d4*/
            v40 = v55; /*0x4c02d6*/
          }
          else if ( (unsigned int)v40 >= v50[7] ) /*0x4c02c1*/
          {
            v40 = (_WORD *)((char *)v40 - v50[8]); /*0x4c02c3*/
          }
          v110 += v82; /*0x4c02e5*/
        }
        if ( v77 > 0 ) /*0x4c02f2*/
        {
          ++SamplePosition; /*0x4c02fb*/
          v100 = (_DWORD *)((char *)v100 + 2); /*0x4c0301*/
          if ( (unsigned int)SamplePosition >= v49[1].Stream_field_08 ) /*0x4c030d*/
            SamplePosition = (_WORD *)((char *)SamplePosition - v49[1].Stream_field_0C); /*0x4c030f*/
          if ( (unsigned int)++v40 >= v50[7] ) /*0x4c031a*/
            v40 = (_WORD *)((char *)v40 - v50[8]); /*0x4c031c*/
          v77 -= v76; /*0x4c0323*/
        }
        v110 += v80; /*0x4c0338*/
        v77 += v83; /*0x4c0349*/
        v48 += v98; /*0x4c0351*/
        --v88[1]; /*0x4c0354*/
      }
      while ( v88[1] ); /*0x4c0358*/
    }
  }
  result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v88[0] + 96))(v88[0]); /*0x4c0364*/
  LOBYTE(result) = 1; /*0x4c036a*/
  return result; /*0x4c0367*/
}


