// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x004B0410  DriveLocomotionClass::ComputeAudio3DRotation  this=DriveLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::sub_4B0410(_DWORD *a1, float *a2, _DWORD *a3)
{
  int v3; // edi
  double v4; // st7
  int v5; // edx
  int v6; // eax
  int v7; // edx
  float v9[12]; // [esp+Ch] [ebp-30h] BYREF

  v3 = a1[11]; /*0x4b0419*/
  if ( v3 ) /*0x4b0422*/
  {
    v5 = a1[8]; /*0x4b042c*/
    v6 = a1[10]; /*0x4b042f*/
    if ( v5 != -1 ) /*0x4b0435*/
    {
      if ( (int)MEMORY[0xA8ED84] - v5 >= v6 ) /*0x4b0441*/
        v6 = 0; /*0x4b0447*/
      else
        v6 -= (int)MEMORY[0xA8ED84] - v5; /*0x4b0443*/
    }
    v4 = (double)(v3 - v6) / (double)(int)a1[11]; /*0x4b0453*/
  }
  else
  {
    v4 = 1.0; /*0x4b0424*/
  }
  if ( v4 != 1.0 || (v7 = a1[2], fabs(*(float *)(v7 + 808)) >= 0.005) || fabs(*(float *)(v7 + 812)) >= 0.005 ) /*0x4b0493*/
  {
    if ( a3 ) /*0x4b0497*/
      *a3 = -1; /*0x4b0499*/
  }
  qmemcpy(a2, Audio3D::ComputeRotation((int)a1, v9, a3), 0x30u); /*0x4b04b8*/
  return a2; /*0x4b04ba*/
}


// ==== 0x004B04D0  DriveLocomotionClass::DispatchVirtualCall  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4B04D0(int *a1)
{
  int v1; // edi
  int v2; // eax

  v1 = *a1; /*0x4b04d9*/
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1[2] + 444))(a1[2]); /*0x4b04dd*/
  return (*(int (__stdcall **)(int *, _DWORD))(v1 + 124))(a1, *(unsigned __int8 *)(v2 + 284)); /*0x4b04f0*/
}


// ==== 0x004B0500  DriveLocomotionClass::ProcessJumpjetMotion  this=DriveLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass_Process(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int *v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  _DWORD *v12; // ecx
  _WORD *v13; // ebp
  _WORD *v14; // eax
  _DWORD *v15; // ecx
  _DWORD *v17; // ecx
  _BYTE *v18; // ecx
  void **v19; // eax
  int *v20; // ecx
  int v21; // ecx
  _BYTE *v22; // eax
  int v23; // eax
  int v24; // ecx
  _DWORD *v25; // eax
  _BYTE *v26; // ecx
  _DWORD *v27; // ecx
  int v28; // eax
  char v29; // [esp-4h] [ebp-24h]
  int v30; // [esp+10h] [ebp-10h] BYREF
  int v31; // [esp+14h] [ebp-Ch]
  int v32; // [esp+18h] [ebp-8h]

  v1 = a1; /*0x4b0506*/
  v2 = a1 - 4; /*0x4b0518*/
  v3 = *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 444))(*(_DWORD *)(a1 + 8)) + 284); /*0x4b0521*/
  v4 = *(_DWORD *)(v2 + 28); /*0x4b0523*/
  if ( v3 != v4 ) /*0x4b0528*/
  {
    *(_DWORD *)(v2 + 32) = v4; /*0x4b052a*/
    *(_DWORD *)(v2 + 28) = v3; /*0x4b0533*/
    Timer::Start(&v30, 3); /*0x4b0536*/
    *(_DWORD *)(v2 + 36) = v30; /*0x4b0547*/
    *(_DWORD *)(v2 + 40) = v31; /*0x4b054d*/
    *(_DWORD *)(v2 + 44) = v32; /*0x4b0554*/
    *(_DWORD *)(v2 + 48) = 3; /*0x4b0557*/
  }
  if ( *(_DWORD *)(v1 + 84) == -1 || !*(_BYTE *)(v1 + 95) ) /*0x4b056a*/
  {
    v11 = *(_DWORD *)(*(_DWORD *)(v1 + 8) + 1444); /*0x4b066f*/
    if ( v11 /*0x4b06ad*/
      && (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) == 11
      && (v12 = *(_DWORD **)(v1 + 8),
          v13 = (_WORD *)(v12[361] + 36),
          v14 = (_WORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v12 + 440))(v12, &a1),
          *v14 == *v13)
      && v14[1] == v13[1] )
    {
      v15 = *(_DWORD **)(v2 + 12); /*0x4b06af*/
      if ( !v15[358] ) /*0x4b06b2*/
        goto LABEL_27; /*0x4b06b8*/
    }
    else
    {
      v17 = *(_DWORD **)(v1 + 8); /*0x4b06d5*/
      if ( v17[43] != 5 /*0x4b0732*/
        || *(_BYTE *)(v1 + 95)
        || *(_DWORD *)(v1 + 48) == MEMORY[0x8A0790] && *(_QWORD *)(v1 + 52) == MEMORY[0x8A0794]
        || v17[39] != *(_DWORD *)(v1 + 48)
        || v17[40] != *(_DWORD *)(v1 + 52)
        || v17[41] != *(_DWORD *)(v1 + 56) )
      {
        if ( TimerClass::Active((int)(v17 + 226)) ) /*0x4b077b*/
        {
          *(_BYTE *)(v1 + 94) = 1; /*0x4b0788*/
          goto LABEL_39; /*0x4b0788*/
        }
        if ( *(_BYTE *)(v1 + 94) ) /*0x4b0896*/
        {
          *(_BYTE *)(v1 + 94) = 0; /*0x4b089b*/
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v1 + 8) + 396))(*(_DWORD *)(v1 + 8), 0); /*0x4b08a4*/
          v22 = *(_BYTE **)(v1 + 8); /*0x4b08aa*/
          if ( !v22[144] || v22[129] || v22[141] ) /*0x4b08bd*/
            return 0; /*0x4b08ce*/
        }
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 388))(*(_DWORD *)(v1 + 8)) == 5 /*0x4b08fd*/
          && !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1)
          || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 388))(*(_DWORD *)(v1 + 8)) == 16 )
        {
          goto LABEL_39; /*0x4b08fd*/
        }
        if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1) ) /*0x4b0906*/
        {
          v23 = *(_DWORD *)(v1 + 8); /*0x4b0911*/
          if ( *(_DWORD *)(v23 + 1504) == -1 ) /*0x4b091b*/
          {
            if ( *(_BYTE *)(v23 + 973) ) /*0x4b0921*/
            {
              if ( *(_DWORD *)(v2 + 64) != MEMORY[0x8A0790] || *(_QWORD *)(v2 + 68) != MEMORY[0x8A0794] ) /*0x4b0940*/
              {
                *(_DWORD *)(v2 + 64) = MEMORY[0x8A0790]; /*0x4b094f*/
                *(_QWORD *)(v2 + 68) = MEMORY[0x8A0794]; /*0x4b0957*/
                *(_BYTE *)(v2 + 99) = 0; /*0x4b0963*/
              }
              *(_DWORD *)(v1 + 76) = 0; /*0x4b0966*/
              *(_DWORD *)(v1 + 80) = 0; /*0x4b0969*/
            }
            else
            {
              v24 = *(_DWORD *)(v23 + 1444); /*0x4b0971*/
              if ( v24 ) /*0x4b0979*/
              {
                v25 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v24 + 76))( /*0x4b0987*/
                                  v24,
                                  &v30,
                                  *(_DWORD *)(v1 + 8));
                (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v1 + 68))(v1, *v25, v25[1], v25[2]); /*0x4b09a3*/
              }
            }
            goto LABEL_39; /*0x4b096c*/
          }
        }
        v26 = *(_BYTE **)(v1 + 8); /*0x4b09ab*/
        if ( v26[981] /*0x4b09e2*/
          && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v26 + 388))(v26) != 7
          && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1)
          && !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(v1 + 8) + 716))(
                *(_DWORD *)(v1 + 8),
                v1 + 48) )
        {
          if ( *(_DWORD *)(v2 + 64) != MEMORY[0x8A0790] || *(_QWORD *)(v2 + 68) != MEMORY[0x8A0794] ) /*0x4b0a03*/
          {
            *(_DWORD *)(v2 + 64) = MEMORY[0x8A0790]; /*0x4b0a12*/
            *(_QWORD *)(v2 + 68) = MEMORY[0x8A0794]; /*0x4b0a1a*/
            *(_BYTE *)(v2 + 99) = 0; /*0x4b0a26*/
          }
          v27 = *(_DWORD **)(v2 + 12); /*0x4b0a29*/
          if ( v27[358] ) /*0x4b0a2c*/
          {
            FootClass::ClearPathIndex(v27); /*0x4b0a44*/
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v2 + 12) + 1156))( /*0x4b0a51*/
                   *(_DWORD *)(v2 + 12),
                   0,
                   1) )
            {
              return 0; /*0x4b0a68*/
            }
          }
          else
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v27 + 1152))(v27, 0, 1); /*0x4b0a39*/
          }
          goto LABEL_39; /*0x4b0a3f*/
        }
        LOBYTE(a1) = 0; /*0x4b0a75*/
        JumpjetLocomotion::Update(v1 - 4, &a1, 1, 0); /*0x4b0a79*/
        if ( (_BYTE)a1 ) /*0x4b0a82*/
          return 0; /*0x4b0a8d*/
        if ( !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x4b0a93*/
          return 0; /*0x4b0aa4*/
        v29 = 0; /*0x4b0aa7*/
        goto LABEL_87; /*0x4b0aa7*/
      }
      v15 = *(_DWORD **)(v2 + 12); /*0x4b0734*/
      if ( !v15[358] ) /*0x4b073d*/
      {
LABEL_27:
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v15 + 1152))(v15, 0, 1); /*0x4b06be*/
        return 0; /*0x4b06d2*/
      }
    }
    FootClass::ClearPathIndex(v15); /*0x4b0756*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v2 + 12) + 1156))(*(_DWORD *)(v2 + 12), 0, 1); /*0x4b0763*/
    return 0; /*0x4b0772*/
  }
  if ( JumpjetLocomotion::ProcessCollision(v1 - 4, 0) || !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x4b0586*/
    return 0; /*0x4b058c*/
  if ( *(_DWORD *)(v1 + 84) == -1 /*0x4b05c4*/
    && ((*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1) || *(_DWORD *)(*(_DWORD *)(v1 + 8) + 1504) != -1)
    && ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 44))(*(_DWORD *)(v1 + 8)) != 1
     || !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 1745)) )
  {
    v5 = *(_DWORD *)(v1 + 8); /*0x4b05d0*/
    LOBYTE(a1) = 0; /*0x4b05d3*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 1 ) /*0x4b05df*/
    {
      v6 = *(_DWORD *)(*(_DWORD *)(v1 + 8) + 1444); /*0x4b05e4*/
      if ( v6 ) /*0x4b05ec*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6) == 15 ) /*0x4b05f6*/
        {
          v7 = (int *)(*(int (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(*(_DWORD *)(v1 + 8) + 1444) + 76))( /*0x4b060f*/
                        *(_DWORD *)(*(_DWORD *)(v1 + 8) + 1444),
                        &v30,
                        *(_DWORD *)(v1 + 8));
          v8 = *v7; /*0x4b0611*/
          v9 = v7[1]; /*0x4b0615*/
          v10 = v7[2]; /*0x4b0618*/
          if ( v8 != *(_DWORD *)(v1 + 48) || v9 != *(_DWORD *)(v1 + 52) || v10 != *(_DWORD *)(v1 + 56) ) /*0x4b0625*/
            (*(void (__stdcall **)(int, int, int, int))(*(_DWORD *)v1 + 68))(v1, v8, v9, v10); /*0x4b0638*/
        }
      }
    }
    JumpjetLocomotion::Update(v1 - 4, &a1, 1, 0); /*0x4b0647*/
    if ( (_BYTE)a1 || !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x4b0659*/
      return 0; /*0x4b065f*/
    v29 = 1; /*0x4b0665*/
LABEL_87:
    JumpjetLocomotion::ProcessCollision(v1 - 4, v29); /*0x4b0aa8*/
    v28 = *(_DWORD *)(v1 + 8); /*0x4b0aaf*/
    if ( !v28 || !*(_BYTE *)(v28 + 144) ) /*0x4b0ab6*/
      return 0; /*0x4b0ac5*/
  }
LABEL_39:
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 128))(v1) ) /*0x4b078f*/
  {
    if ( !((int)MEMORY[0xA8ED84] % 10) ) /*0x4b07a8*/
    {
      v18 = *(_BYTE **)(v1 + 8); /*0x4b07ae*/
      if ( !v18[140] && *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v18 + 444))(v18) + 236) == 2 ) /*0x4b07c8*/
      {
        if ( MEMORY[0x8871E0]->InfantryBrute ) /*0x4b07cf*/
        {
          v19 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4b07dc*/
          if ( v19 ) /*0x4b07e6*/
          {
            v20 = (int *)(*(_DWORD *)(v1 + 8) + 156); /*0x4b07ec*/
            v30 = *v20; /*0x4b07fd*/
            v31 = v20[1]; /*0x4b0804*/
            v32 = v20[2]; /*0x4b0810*/
            AnimClass::ctor(v19, (void *)MEMORY[0x8871E0]->InfantryBrute, &v30, 0, 1, (void *)0x600, 0, 0); /*0x4b0823*/
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(v1 + 48) == MEMORY[0x8A0790] /*0x4b0856*/
    && *(_DWORD *)(v1 + 52) == (_DWORD)MEMORY[0x8A0794]
    && *(_QWORD *)(v1 + 56) == __PAIR64__(MEMORY[0x8A0790], HIDWORD(MEMORY[0x8A0794]))
    && *(_QWORD *)(v1 + 64) == MEMORY[0x8A0794] )
  {
    v21 = *(_DWORD *)(v1 + 8); /*0x4b085d*/
    if ( *(_DWORD *)(v21 + 1504) == -1 && *(double *)(v21 + 1400) > 0.0 ) /*0x4b087a*/
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v21 + 1348))(v21, 0, 0); /*0x4b0880*/
  }
  return (*(int (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1); /*0x4b06cb*/
}


// ==== 0x004B0AD0  JumpjetLocomotion::MoveTo  this=ObjectClass  sig=csp ====
char __thiscall JumpjetLocomotion::MoveTo(int this, IUnknown *aP1, int aP3)
{
  IUnknown *v3; // edx
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  _DWORD v18[2]; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+18h] [ebp-Ch] BYREF
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]

  v3 = aP1; /*0x4b0ad0*/
  if ( aP1->field_0 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772] /*0x4b0afe*/
    || aP1->field_4 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
    || (v5 = aP1->field_8, v5 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780]) )
  {
    LOBYTE(v5) = *(_BYTE *)(this + 96); /*0x4b0b04*/
    v6 = aP3; /*0x4b0b07*/
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
            v9 = (_DWORD *)(v8 + 12 * v5); /*0x4b0b4d*/
            aP3 = v9[2]; /*0x4b0b53*/
            if ( *(_DWORD *)(this + 92) < v5 ) /*0x4b0b5c*/
            {
              v10 = v9[1]; /*0x4b0b64*/
              v18[0] = *v9; /*0x4b0b67*/
              v18[1] = v10; /*0x4b0b6f*/
              v5 = (int)JumpjetLocomotion::TransformCoords( /*0x4b0b80*/
                          (_DWORD *)this,
                          (IUnknown *)&v19,
                          (IUnknown *)v18,
                          (ObjectClass *)&aP3);
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
                LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, IUnknown *))(**(_DWORD **)(this + 12) + 244))( /*0x4b0bbf*/
                               *(_DWORD *)(this + 12),
                               aP1);
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
              v3 = aP1; /*0x4b0c00*/
            }
          }
        }
      }
    }
    if ( v6 ) /*0x4b0c06*/
    {
      if ( v6 == 1 || v6 == 3 ) /*0x4b0c26*/
        LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, IUnknown *))(**(_DWORD **)(this + 12) + 240))( /*0x4b0c2e*/
                       *(_DWORD *)(this + 12),
                       v3);
    }
    else
    {
      LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, IUnknown *))(**(_DWORD **)(this + 12) + 244))( /*0x4b0c0e*/
                     *(_DWORD *)(this + 12),
                     v3);
    }
  }
  return v5; /*0x4b0bc5*/
}


// ==== 0x004B0C40  DriveLocomotionClass::SetWaypointTarget  this=DriveLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_4B0C40(int a1, int a2, unsigned int a3, __int64 a4)
{
  int v4; // eax
  int v5; // esi
  unsigned int *v6; // edi
  int v7; // ecx
  __int64 v8; // kr00_8
  _DWORD *v9; // eax
  int v11; // [esp-4h] [ebp-20h]
  unsigned int v12; // [esp+10h] [ebp-Ch] BYREF
  __int64 v13; // [esp+14h] [ebp-8h]

  *(_DWORD *)(a1 + 84) = a2; /*0x4b0c53*/
  *(_DWORD *)(a1 + 88) = 0; /*0x4b0c56*/
  v4 = MEMORY[0x8A0790]; /*0x4b0c5d*/
  if ( a3 != MEMORY[0x8A0790] || a4 != MEMORY[0x8A0794] ) /*0x4b0c70*/
  {
    v5 = a1 - 4; /*0x4b0c88*/
    v13 = a4; /*0x4b0c8b*/
    v6 = (unsigned int *)(a1 - 4 + 64); /*0x4b0c93*/
    v12 = a3; /*0x4b0c9a*/
    if ( *v6 != MEMORY[0x8A0790] || __PAIR64__(*(_DWORD *)(a1 - 4 + 72), *(_DWORD *)(a1 + 64)) != MEMORY[0x8A0794] ) /*0x4b0ca5*/
    {
      *v6 = MEMORY[0x8A0790]; /*0x4b0cb6*/
      *(_DWORD *)(a1 + 64) = MEMORY[0x8A0794]; /*0x4b0cbd*/
      v7 = HIDWORD(MEMORY[0x8A0794]); /*0x4b0cc0*/
      *(_BYTE *)(v5 + 99) = 0; /*0x4b0cc6*/
      *(_DWORD *)(a1 - 4 + 72) = v7; /*0x4b0cca*/
      v4 = MEMORY[0x8A0790]; /*0x4b0ccd*/
    }
    if ( __PAIR64__(a4, a3) != __PAIR64__(MEMORY[0x8A0794], v4) /*0x4b0cee*/
      || (LOBYTE(v4) = BYTE4(MEMORY[0x8A0794]), HIDWORD(a4) != HIDWORD(MEMORY[0x8A0794])) )
    {
      v8 = v13; /*0x4b0cf4*/
      *(_BYTE *)(v5 + 99) = 1; /*0x4b0cfa*/
      *v6 = a3; /*0x4b0cfe*/
      *(_QWORD *)(a1 + 64) = v8; /*0x4b0d00*/
      v11 = *(_DWORD *)(v5 + 12); /*0x4b0d0d*/
      v9 = Coord::To_Cell(&MEMORY[0x87F7E8], &v12); /*0x4b0d14*/
      if ( !CrateClass::ProcessPickup(v9, v11) || *(_BYTE *)(*(_DWORD *)(v5 + 12) + 129) ) /*0x4b0d27*/
      {
        LOBYTE(v4) = *(_BYTE *)(*(_DWORD *)(v5 + 12) + 144); /*0x4b0d6d*/
        if ( (_BYTE)v4 ) /*0x4b0d75*/
        {
          LOBYTE(v4) = MEMORY[0x8A0790]; /*0x4b0d77*/
          *v6 = MEMORY[0x8A0790]; /*0x4b0d7c*/
          *(_QWORD *)(a1 + 64) = MEMORY[0x8A0794]; /*0x4b0d84*/
          *(_BYTE *)(v5 + 99) = 0; /*0x4b0d90*/
        }
      }
      else
      {
        JumpjetLocomotion::MoveTo(a1 - 4, &v12, 1); /*0x4b0d3a*/
        LOBYTE(v4) = a1 + 48; /*0x4b0d3f*/
        *(_DWORD *)(a1 + 48) = a3; /*0x4b0d4a*/
        *(_QWORD *)(a1 + 52) = a4; /*0x4b0d4c*/
        *(_DWORD *)(a1 + 76) = 0; /*0x4b0d52*/
        *(_DWORD *)(a1 + 80) = 1072693248; /*0x4b0d59*/
      }
    }
  }
  return v4; /*0x4b0d60*/
}


// ==== 0x004B0DF0  ObjectClass::method_4B0DF0  this=ObjectClass  sig=csp ====
char __thiscall sub_4B0DF0(int this, IUnknown *aP1)
{
  int v2; // eax
  int *v4; // edi
  TechnoClass *v5; // eax
  IUnknown *v6; // eax
  _DWORD *v7; // eax
  AbstractClass *v9; // [esp-4h] [ebp-10h]

  v2 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772]; /*0x4b0df1*/
  v4 = (int *)(this + 64); /*0x4b0dfd*/
  if ( *(_DWORD *)(this + 64) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772] /*0x4b0e1c*/
    || *(_DWORD *)(this + 68) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
    || *(_DWORD *)(this + 72) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780] )
  {
    *v4 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772]; /*0x4b0e20*/
    *(_DWORD *)(this + 68) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]; /*0x4b0e28*/
    v5 = *(TechnoClass **)&MEMORY[0x89F690].__pad_DFC[780]; /*0x4b0e2b*/
    *(_BYTE *)(this + 99) = 0; /*0x4b0e30*/
    *(_DWORD *)(this + 72) = v5; /*0x4b0e34*/
    v2 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772]; /*0x4b0e37*/
  }
  if ( aP1->field_0 != v2 /*0x4b0e5d*/
    || aP1->field_4 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
    || aP1->field_8 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780] )
  {
    *v4 = aP1->field_0; /*0x4b0e65*/
    *(_DWORD *)(this + 68) = aP1->field_4; /*0x4b0e6a*/
    v6 = (IUnknown *)aP1->field_8; /*0x4b0e6d*/
    *(_BYTE *)(this + 99) = 1; /*0x4b0e70*/
    *(_DWORD *)(this + 72) = v6; /*0x4b0e74*/
    v9 = *(AbstractClass **)(this + 12); /*0x4b0e7a*/
    v7 = Coord::To_Cell(&MEMORY[0x87F7E8], aP1); /*0x4b0e81*/
    if ( CrateClass::ProcessPickup(v7, v9) && !*(_BYTE *)(*(_DWORD *)(this + 12) + 129) ) /*0x4b0e94*/
    {
      JumpjetLocomotion::MoveTo(this, aP1, 1); /*0x4b0ea3*/
      return 1; /*0x4b0ead*/
    }
    if ( *(_BYTE *)(*(_DWORD *)(this + 12) + 144) ) /*0x4b0eb3*/
    {
      *v4 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772]; /*0x4b0ec3*/
      *(_DWORD *)(this + 68) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]; /*0x4b0ecb*/
      *(_DWORD *)(this + 72) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780]; /*0x4b0ed3*/
      *(_BYTE *)(this + 99) = 0; /*0x4b0ed6*/
    }
  }
  return 0; /*0x4b0ea8*/
}


// ==== 0x004B0EF0  DriveLocomotionClass::UpdateFacingDirection  this=DriveLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_4B0EF0(int a1, int a2)
{
  return FacingClass::Update((char *)(*(_DWORD *)(a1 + 8) + 904), &a2); /*0x4b0f0f*/
}


// ==== 0x004B0F20  JumpjetLocomotion::ProcessCollision  this=JumpjetLocomotion  sig=csp ====
char __thiscall JumpjetLocomotion::ProcessCollision(int this, char a2)
{
  int v3; // eax
  int v4; // edx
  bool v5; // al
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // edx
  int v10; // esi
  double v11; // st7
  int v12; // eax
  MouseClass *v13; // ecx
  int v14; // edi
  char v15; // bl
  int v16; // edx
  int v17; // eax
  int v18; // esi
  double v19; // st7
  double v20; // st7
  MouseClass *v21; // ecx
  double v22; // st7
  int v23; // eax
  double v24; // st7
  _DWORD *v25; // esi
  int v26; // eax
  MouseClass *v27; // ecx
  int v28; // edx
  int v29; // eax
  int v30; // edx
  _DWORD *v31; // esi
  TechnoClass *v32; // eax
  int v33; // edx
  int v34; // ebx
  int v35; // ecx
  MouseClass *v36; // eax
  int v37; // edx
  _DWORD *v38; // eax
  ObjectClass *Coords; // eax
  _DWORD *v40; // ecx
  int *v41; // ecx
  int GroundHeight; // esi
  int v43; // ebx
  char *v45; // esi
  char v46; // dl
  int v47; // edx
  int v48; // ebx
  __int16 v49; // cx
  int v50; // eax
  BuildingTypeClass *v51; // ecx
  MouseClass *v52; // ecx
  int v53; // eax
  IUnknown *v54; // edx
  int v55; // eax
  IUnknown *v56; // ecx
  int v57; // eax
  _DWORD *v58; // eax
  int v59; // esi
  int v60; // ecx
  int v61; // esi
  int v62; // ebx
  _DWORD *v63; // eax
  MouseClass *v64; // ecx
  int v65; // edx
  int v66; // edi
  TechnoClass *v67; // eax
  int v68; // eax
  IUnknown *v69; // esi
  IUnknown *v70; // ebx
  int v71; // ecx
  int v72; // eax
  MouseClass *v73; // edi
  TechnoClass *v74; // esi
  TechnoClass *v75; // eax
  TechnoClass *v76; // esi
  TechnoClass *nextObject; // ebx
  int v78; // edx
  int v79; // edx
  MouseClass *v80; // ecx
  int v81; // eax
  int v82; // esi
  char v83; // bl
  MouseClass *v84; // eax
  char v85; // bl
  __int16 v86; // cx
  int v87; // eax
  MouseClass *v88; // ecx
  IUnknown *v89; // ebx
  int v90; // eax
  __int16 v91; // dx
  char v92; // al
  MouseClass *v93; // ecx
  _DWORD *v94; // esi
  int v95; // eax
  int v96; // edx
  int v97; // eax
  int v98; // edi
  TechnoClass *v99; // edx
  int v100; // edi
  void *v101; // eax
  IUnknown *v102; // edx
  char *v103; // eax
  int v104; // eax
  bool v105; // zf
  TechnoClass *v106; // eax
  MouseClass *v107; // ecx
  MouseClass *v108; // eax
  int v109; // edx
  TechnoClass *v110; // edx
  int v111; // ecx
  int v112; // edi
  int v113; // edx
  _DWORD *v114; // eax
  _DWORD *eax140; // eax
  MouseClass *v115; // edx
  int ecx143; // ecx
  TechnoClass *v117; // edi
  int v119; // ecx
  _DWORD *v120; // eax
  bool cc146; // cc
  IUnknown *v121; // eax
  _BYTE *v123; // eax
  int eax150; // eax
  MouseClass *v124; // edi
  _DWORD *v126; // esi
  int v127; // ecx
  int v128; // edx
  int v129; // eax
  int ebx151; // ebx
  MouseClass *v130; // ecx
  MouseClass *v131; // ebx
  int v133; // eax
  int v134; // ecx
  char al154; // al
  TechnoClass *v135; // eax
  MouseClass *v136; // eax
  int v138; // ecx
  _DWORD *v139; // eax
  int v140; // edi
  int v141; // ebx
  _WORD *v142; // eax
  __int64 rax162; // rax
  MouseClass *v143; // ecx
  int v145; // edx
  int v146; // ecx
  IUnknown *v147; // esi
  int v148; // ecx
  BuildingTypeClass *v149; // eax
  int v150; // eax
  int v151; // esi
  int v152; // ebx
  int *v153; // eax
  int v154; // ecx
  TechnoClass *v155; // eax
  int v156; // ebx
  int v157; // ecx
  int esi185a; // esi
  TechnoClass *v158; // ebx
  IUnknown *v159; // esi
  double v161; // st7
  TechnoClass **eax185d; // eax
  TechnoClass *v162; // edx
  IUnknown *v163; // edi
  IUnknown *v165; // eax
  int v166; // ebx
  unsigned int edx185; // edx
  TechnoClass *v167; // ebx
  unsigned __int64 v169; // kr28_8
  void *eax191; // eax
  MouseClass *v170; // ecx
  int v172; // eax
  int v173; // edi
  int v174; // edi
  IUnknown *ecx193; // ecx
  IUnknown *v175; // eax
  char v177; // bl
  int LandHeight; // [esp+24h] [ebp-10Ch]
  AbstractClass *v179; // [esp+2Ch] [ebp-104h]
  float v180; // [esp+2Ch] [ebp-104h]
  bool v181; // [esp+43h] [ebp-EDh]
  char v182; // [esp+43h] [ebp-EDh]
  char v183; // [esp+43h] [ebp-EDh]
  IUnknown *aP4; // [esp+44h] [ebp-ECh] BYREF
  _BYTE v185[12]; // [esp+48h] [ebp-E8h] BYREF
  double varDC; // [esp+54h] [ebp-DCh] BYREF
  TechnoClass *v186; // [esp+5Ch] [ebp-D4h]
  IUnknown *aP3; // [esp+60h] [ebp-D0h] BYREF
  IUnknown *v188; // [esp+64h] [ebp-CCh] BYREF
  int aP3_8; // [esp+68h] [ebp-C8h]
  IUnknown *v190; // [esp+6Ch] [ebp-C4h]
  IUnknown *aP3_16; // [esp+70h] [ebp-C0h] BYREF
  int aP3_20; // [esp+74h] [ebp-BCh] BYREF
  IUnknown *v193; // [esp+78h] [ebp-B8h] BYREF
  int aP3_28; // [esp+7Ch] [ebp-B4h]
  TechnoClass *v195; // [esp+80h] [ebp-B0h]
  int aP3_36; // [esp+84h] [ebp-ACh] BYREF
  int aP3_40; // [esp+88h] [ebp-A8h]
  TechnoClass *aP3_44; // [esp+8Ch] [ebp-A4h]
  int aP3_48; // [esp+90h] [ebp-A0h]
  IUnknown *aP3_52; // [esp+94h] [ebp-9Ch]
  int aP3_56; // [esp+98h] [ebp-98h] BYREF
  unsigned __int64 aP3_60; // [esp+9Ch] [ebp-94h] BYREF
  TechnoClass *aP3_68; // [esp+A4h] [ebp-8Ch]
  int aP3_72; // [esp+A8h] [ebp-88h] BYREF
  IUnknown *v205; // [esp+ACh] [ebp-84h]
  int aP3_80; // [esp+B0h] [ebp-80h]
  IUnknown *v207; // [esp+B4h] [ebp-7Ch] BYREF
  BuildingTypeClass *v208; // [esp+B8h] [ebp-78h]
  char *aP3_92; // [esp+BCh] [ebp-74h]
  TechnoClass *v210; // [esp+C0h] [ebp-70h] BYREF
  int aP3_100; // [esp+C4h] [ebp-6Ch]
  TechnoClass *v212; // [esp+C8h] [ebp-68h]
  IUnknown *aP3_108; // [esp+CCh] [ebp-64h]
  int aP3_112; // [esp+D0h] [ebp-60h]
  IUnknown *aP3_116; // [esp+D4h] [ebp-5Ch]
  _DWORD aP3_120[3]; // [esp+D8h] [ebp-58h] BYREF
  unsigned __int64 aP3_132; // [esp+E4h] [ebp-4Ch] BYREF
  TechnoClass *aP3_140; // [esp+ECh] [ebp-44h]
  TechnoClass *v219; // [esp+F0h] [ebp-40h] BYREF
  TechnoClass *aP3_148; // [esp+F4h] [ebp-3Ch]
  TechnoClass *aP3_152; // [esp+F8h] [ebp-38h]
  int aP3_156; // [esp+FCh] [ebp-34h] BYREF
  int aP3_160; // [esp+100h] [ebp-30h]
  int aP3_164; // [esp+104h] [ebp-2Ch]
  int aP3_168; // [esp+108h] [ebp-28h] BYREF
  _DWORD v227[3]; // [esp+10Ch] [ebp-24h] BYREF
  int v228; // [esp+118h] [ebp-18h]
  TechnoClass *v229; // [esp+120h] [ebp-10h]
  int v230; // [esp+128h] [ebp-8h]
  int v231; // [esp+12Ch] [ebp-4h]

  if ( (!*(_BYTE *)(this + 99) || *(_DWORD *)(this + 88) == -1) && *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) != 8
    || *(_BYTE *)(this + 98)
    && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3233) )
  {
    *(_DWORD *)(this + 76) = 0;
    return 0;
  }
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12));
  v4 = **(_DWORD **)(this + 12);
  if ( *(_BYTE *)(v3 + 3517) )
  {
    v5 = (*(int (**)(void))(v4 + 44))() != 1 || !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 12) + 1732) + 3596);
    if ( *(int *)(this + 88) < 64 && v5 )
    {
      *(_DWORD *)v185 = *(_DWORD *)(this + 52);
      *(_DWORD *)&v185[4] = *(_DWORD *)(this + 56);
      *(_DWORD *)&v185[8] = *(_DWORD *)(this + 60);
      v6 = (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v185) + 80) & 0x100) != 0
         ? *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[824]
         : 0;
      v7 = v6 + Cell::GetGroundHeight(v185);
      v8 = (_DWORD *)(*(_DWORD *)(this + 12) + 156);
      *(_DWORD *)&v185[8] = v7;
      v9 = v8[1];
      aP3_120[0] = *v8 - *(_DWORD *)v185;
      v10 = v8[2];
      aP3_120[1] = v9 - *(_DWORD *)&v185[4];
      aP3_120[2] = v10 - v7;
      v11 = Math::Sqrt(
              (double)(v10 - v7) * (double)(v10 - v7)
            + (double)(v9 - *(_DWORD *)&v185[4]) * (double)(v9 - *(_DWORD *)&v185[4])
            + (double)aP3_120[0] * (double)aP3_120[0]);
      v12 = Math::RoundToInt(v11);
      v13 = *(MouseClass **)(this + 12);
      v14 = v12;
      v15 = 0;
      v16 = *(_DWORD *)&v13->__pad_1D4[936];
      LODWORD(varDC) = *(_DWORD *)&v13->__pad_1D4[932];
      v17 = v13->field_0;
      HIDWORD(varDC) = v16;
      v18 = (*(int (__thiscall **)(MouseClass *))(v17 + 132))(v13);
      aP3 = (IUnknown *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 908))(*(_DWORD *)(this + 12));
      if ( v14 >= *(_DWORD *)(v18 + 760) )
      {
        if ( *(_BYTE *)(*(_DWORD *)(this + 12) + 973) )
        {
          v20 = varDC - (double)(int)aP3 * 0.001500000013038516;
          if ( v20 >= 0.1000000014901161 )
            varDC = v20;
          else
            varDC = 0.1000000014901161;
          v15 = 1;
        }
      }
      else
      {
        v15 = 1;
        v19 = varDC - (double)(int)aP3 * *(double *)(v18 + 768);
        if ( v19 >= 0.300000011920929 )
          varDC = v19;
        else
          varDC = 0.300000011920929;
      }
      v21 = *(MouseClass **)(this + 12);
      if ( v21->__pad_1D4[1249] )
      {
        if ( *(double *)(this + 80) >= 0.2 )
          v22 = 0.2;
        else
          v22 = *(double *)(this + 80);
        varDC = v22;
        v23 = HIDWORD(varDC);
        *(double *)(this + 80) = v22;
        (*(void (__stdcall **)(_DWORD, int))(v21->field_0 + 1348))(LODWORD(varDC), v23);
      }
      else
      {
        if ( !v15 )
        {
          if ( *(double *)&v21->__pad_1D4[932] >= *(double *)(this + 80) )
          {
            if ( *(double *)&v21->__pad_1D4[932] <= *(double *)(this + 80) )
              goto LABEL_37;
            v24 = *(double *)&v21->__pad_1D4[932] - (double)(int)aP3 * *(double *)(v18 + 768);
            if ( *(double *)(this + 80) > v24 )
              v24 = *(double *)(this + 80);
          }
          else
          {
            v24 = *(double *)(v18 + 776) + *(double *)&v21->__pad_1D4[932];
            if ( *(double *)(this + 80) < v24 )
              v24 = *(double *)(this + 80);
          }
          varDC = v24;
          (*(void (__stdcall **)(_DWORD, _DWORD))(v21->field_0 + 1348))(
            LODWORD(v24),
            HIDWORD(*(unsigned __int64 *)&v24));
          goto LABEL_37;
        }
        (*(void (__stdcall **)(_DWORD, _DWORD))(v21->field_0 + 1348))(LODWORD(varDC), HIDWORD(varDC));
      }
LABEL_37:
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(*(_DWORD *)(this + 12)) == 1 )
      {
        v25 = *(_DWORD **)(*(_DWORD *)(this + 12) + 1736);
        if ( v25 )
        {
          do
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v25 + 1348))(
              v25,
              *(_DWORD *)(*(_DWORD *)(this + 12) + 1400),
              *(_DWORD *)(*(_DWORD *)(this + 12) + 1404));
            v25 = (_DWORD *)v25[434];
          }
          while ( v25 && v25 != (_DWORD *)v25[434] );
        }
      }
    }
  }
  else
  {
    (*(void (__stdcall **)(_DWORD, _DWORD))(v4 + 1348))(*(_DWORD *)(this + 80), *(_DWORD *)(this + 84));
  }
  v26 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 1336))(*(_DWORD *)(this + 12));
  v27 = *(MouseClass **)(this + 12);
  v28 = a2 == 0 ? v26 : 0;
  v29 = *(_DWORD *)&v27->__pad_1D4[1036];
  v30 = *(_DWORD *)(this + 76) + v28;
  aP3_8 = v30;
  aP3_48 = v29;
  if ( v29 == 8 && *(_DWORD *)(this + 88) == -1 )
  {
    (*(void (__thiscall **)(MouseClass *, _DWORD))(v27->field_0 + 292))(v27, 0);
    v31 = (_DWORD *)(this + 64);
    if ( *(_DWORD *)(this + 64) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772]
      || *(_DWORD *)(this + 68) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
      || *(_DWORD *)(this + 72) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780] )
    {
      *v31 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
      *(_DWORD *)(this + 68) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776];
      v32 = *(TechnoClass **)&MEMORY[0x89F690].__pad_DFC[780];
      *(_BYTE *)(this + 99) = 0;
      *(_DWORD *)(this + 72) = v32;
    }
    v33 = *(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 444))(*(_DWORD *)(this + 12)) + 278);
    if ( v33 >= 0 && v33 < *(int *)&MEMORY[0x89F690].__pad_579C[62236] )
    {
      v34 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62224] + 4 * v33);
      aP4 = *(IUnknown **)(v34 + 40);
      v35 = SHIWORD(aP4) << 8;
      *v31 = ((__int16)aP4 << 8) + 128;
      v36 = *(MouseClass **)(this + 12);
      *(_DWORD *)(this + 68) = v35 + 128;
      *(_DWORD *)(this + 72) = 0;
      qmemcpy(&v36->__pad_1D4[1036], &v36->__pad_1D4[1040], 0x5Cu);
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1596) = -1;
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1668) = v33;
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1669) = 0;
      v37 = *(_DWORD *)(v34 + 48) & 7;
      aP4 = *(IUnknown **)(v34 + 36);
      LOWORD(v190) = *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v37) + (_WORD)aP4;
      HIWORD(v190) = HIWORD(aP4) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v37);
      aP4 = v190;
      v38 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP4);
      Coords = (ObjectClass *)CellClass::GetCoords(v38, (int *)&v193);
      v40 = (_DWORD *)(*(_DWORD *)(this + 12) + 1384);
      *v40 = *(_DWORD *)Coords->__pad_0;
      v40[1] = *(_DWORD *)&Coords->__pad_0[4];
      v40[2] = *(_DWORD *)&Coords->__pad_0[8];
      v41 = (int *)(*(_DWORD *)(this + 12) + 156);
      aP3_36 = *v41;
      aP3_40 = v41[1];
      aP3_44 = (TechnoClass *)v41[2];
      GroundHeight = Cell::GetGroundHeight(&aP3_36);
      aP4 = *(IUnknown **)(v34 + 40);
      v43 = *(_DWORD *)(v34 + 448);
      aP3_40 = (SHIWORD(aP4) << 8) + 128;
      aP3_36 = ((__int16)aP4 << 8) + 128;
      aP3_44 = 0;
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1392) = GroundHeight + (Cell::GetGroundHeight(&aP3_36) - GroundHeight) / v43;
      *(_BYTE *)(this + 99) = 1;
      *(_DWORD *)(this + 88) = -1;
      return 0;
    }
    *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
    *(_DWORD *)(this + 88) = -1;
    *v31 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
    *(_DWORD *)(this + 68) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776];
    *(_DWORD *)(this + 72) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780];
    if ( *v31 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772]
      || *(_DWORD *)(this + 68) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
      || *(_DWORD *)(this + 72) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780] )
    {
      *v31 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
      *(_DWORD *)(this + 68) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776];
      *(_DWORD *)(this + 72) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780];
      *(_BYTE *)(this + 99) = 0;
      return 0;
    }
    return 0;
  }
  if ( v30 <= 7 )
    goto LABEL_147;
  v45 = (char *)(12 * *(_DWORD *)(this + 88) + 8289064);
  v46 = *(_BYTE *)(this + 96);
  aP3_92 = v45;
  if ( v46 )
    v47 = v45[1];
  else
    v47 = *v45;
  v190 = (IUnknown *)(16 * v47);
  v48 = dword_7E7A28[4 * v47];
  aP3_100 = v48;
  if ( v29 < -1 || v29 > 8 )
  {
    *(_DWORD *)&v27->__pad_1D4[1036] = -1;
    return 0;
  }
  v181 = 0;
  if ( v29 != 8 && v29 != -1 )
  {
    LOBYTE(v49) = 0;
    HIBYTE(v49) = v45[4];
    LOWORD(aP4) = v49;
    v181 = (((((unsigned int)aP4 >> 12) + 1) >> 1) & 7) != v29;
  }
  while ( 1 )
  {
    v50 = *(_DWORD *)(this + 92);
    aP3_8 -= 7;
    v51 = *(BuildingTypeClass **)(v48 + 12 * v50 + 4);
    v207 = *(IUnknown **)(v48 + 12 * v50);
    v208 = v51;
    if ( !v207 && !v51 && v50 )
      break;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 192))(*(_DWORD *)(this + 12)) )
    {
      v52 = *(MouseClass **)(this + 12);
      v227[0] = *(_DWORD *)&v52->__pad_74[40];
      v227[1] = *(_DWORD *)&v52->__pad_74[44];
      v227[2] = *(_DWORD *)&v52->__pad_74[48];
      (*(void (__thiscall **)(MouseClass *, _DWORD *))(v52->field_0 + 244))(v52, v227);
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1718) = 0;
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1719) = 0;
    }
    v53 = *(_DWORD *)(this + 92);
    if ( v53 )
    {
      v54 = *(IUnknown **)(v48 + 12 * v53 - 4);
      v55 = v48 + 12 * v53;
      aP3 = v54;
      v56 = *(IUnknown **)(v55 - 8);
      v57 = *(_DWORD *)(v55 - 12);
      v205 = v56;
      aP3_72 = v57;
      v58 = JumpjetLocomotion::TransformCoords(
              (_DWORD *)this,
              (IUnknown *)&v219,
              (IUnknown *)&aP3_72,
              (ObjectClass *)&aP3);
      v59 = v58[1];
      LOWORD(v212) = *v58 / 256;
      HIWORD(v212) = v59 / 256;
      v210 = v212;
    }
    else
    {
      v210 = *(TechnoClass **)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 440))(
                                *(_DWORD *)(this + 12),
                                &varDC);
    }
    v60 = *(_DWORD *)(this + 12) + 156;
    aP3 = *(IUnknown **)(v48 + 12 * *(_DWORD *)(this + 92) + 8);
    v61 = *(_DWORD *)v60;
    v62 = *(_DWORD *)(v60 + 4);
    v195 = *(TechnoClass **)(v60 + 8);
    v63 = JumpjetLocomotion::TransformCoords(
            (_DWORD *)this,
            (IUnknown *)aP3_120,
            (IUnknown *)&v207,
            (ObjectClass *)&aP3);
    v64 = *(MouseClass **)(this + 12);
    v65 = *v63 - v61;
    v66 = v63[1] - v62;
    v228 = *(_DWORD *)&v64->__pad_74[40];
    v67 = *(TechnoClass **)&v64->__pad_74[48];
    aP3_40 = v66 + *(_DWORD *)&v64->__pad_74[44];
    v229 = v67;
    aP3_44 = v67;
    aP3_36 = v228 + v65;
    v230 = *(_DWORD *)&v64->__pad_74[44];
    v68 = *(_DWORD *)&v64->__pad_74[40];
    v231 = *(_DWORD *)&v64->__pad_74[48];
    LOWORD(aP3_112) = (v228 + v65) / 256;
    HIWORD(aP3_112) = aP3_40 / 256;
    aP3_56 = aP3_112;
    if ( (_WORD)aP3_112 == (unsigned __int16)(v68 / 256)
      && (unsigned __int16)(aP3_40 / 256) == (unsigned __int16)(v230 / 256) )
    {
      v83 = v64->__pad_74[0];
      v64->__pad_74[0] = 0;
      (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), &aP3_36);
      *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v83;
      goto LABEL_107;
    }
    (*(void (__thiscall **)(MouseClass *, _DWORD))(v64->field_0 + 292))(v64, 0);
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), &aP3_36);
    v69 = (IUnknown *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v210);
    v70 = (IUnknown *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP3_56);
    v71 = SHIBYTE(v70->field_118);
    v72 = SHIBYTE(v69->field_118) - 4;
    aP3_16 = v70;
    if ( v71 == v72 )
    {
      if ( (v70->field_140 & 0x100) == 0 )
        goto LABEL_80;
      *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 1;
    }
    if ( (v70->field_140 & 0x100) == 0 )
    {
LABEL_80:
      if ( (v69->field_140 & 0x100) != 0 )
        *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 0;
    }
    if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3220) )
    {
      v73 = *(MouseClass **)(this + 12);
      if ( !v73->__pad_1D4[1276] )
      {
        if ( v73->__pad_74[24]
          || (v193 = *(IUnknown **)&v73->__pad_74[40],
              aP3_28 = *(_DWORD *)&v73->__pad_74[44],
              v74 = *(TechnoClass **)&v73->__pad_74[48],
              aP3_132 = *(_QWORD *)&v73->__pad_74[40],
              aP3_140 = *(TechnoClass **)&v73->__pad_74[48],
              (int)v74 >= *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[824] + Cell::GetGroundHeight(&aP3_132)) )
        {
          v75 = (TechnoClass *)*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP3_56) + 58);
        }
        else
        {
          v75 = (TechnoClass *)*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP3_56) + 57);
        }
        v76 = v75;
        if ( v75 )
        {
          do
          {
            nextObject = (TechnoClass *)v76->nextObject;
            if ( !ObjectClass::IsCrushable(v76, *(AbstractClass **)(this + 12)) )
            {
              v78 = *(_DWORD *)v76->__pad_0;
              aP3_20 = 10000;
              (*(void (__thiscall **)(TechnoClass *, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v78 + 364))(
                v76,
                &aP3_20,
                0,
                *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4008),
                0,
                1,
                1,
                0);
              v79 = v73->field_0;
              aP3_20 = 20;
              (*(void (__thiscall **)(MouseClass *, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(v79 + 364))(
                v73,
                &aP3_20,
                0,
                *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4008),
                0,
                1,
                0,
                0);
            }
            v76 = nextObject;
          }
          while ( nextObject );
          v70 = aP3_16;
        }
      }
    }
    v80 = *(MouseClass **)(this + 12);
    if ( !v80->__pad_74[28] )
      return 0;
    (*(void (__thiscall **)(MouseClass *, int))(v80->field_0 + 292))(v80, 1);
    v81 = v70->field_44;
    if ( v81 != -1 )
    {
      v82 = *(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * v81];
      if ( !*(_BYTE *)(this + 100) )
        goto LABEL_107;
      if ( (*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3368)
         || TechnoClass::HasVoiceResponse(*(float **)(this + 12), 17))
        && *(_BYTE *)(v82 + 680)
        && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3371) )
      {
        *(_DWORD *)(*(_DWORD *)(this + 12) + 820) = -1119040307;
      }
    }
    if ( *(_BYTE *)(this + 100) )
    {
      if ( CellClass::FindBuilding(v70, 0) )
      {
        if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 1460) == 12 )
        {
          *(_BYTE *)(*(_DWORD *)(this + 12) + 1717) = 1;
          if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3371) )
            *(_DWORD *)(*(_DWORD *)(this + 12) + 820) = -1119040307;
        }
      }
    }
LABEL_107:
    v84 = *(MouseClass **)(this + 12);
    if ( !v84->__pad_74[28] )
      return 0;
    v85 = v84->__pad_74[0];
    v84->__pad_74[0] = 0;
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), 0);
    LOBYTE(v86) = 0;
    *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v85;
    HIBYTE(v86) = (_BYTE)aP3;
    LOWORD(aP3_168) = v86;
    FacingClass::Set_SyncLog((char *)(*(_DWORD *)(this + 12) + 904), &aP3_168);
    v87 = *(_DWORD *)(this + 92);
    if ( v87 && *(int *)((char *)dword_7E7A34 + (_DWORD)v190) == v87 )
    {
      v88 = *(MouseClass **)(this + 12);
      aP3_156 = *(_DWORD *)&v88->__pad_74[40];
      aP3_160 = *(_DWORD *)&v88->__pad_74[44];
      aP3_164 = *(_DWORD *)&v88->__pad_74[48];
      (*(void (__thiscall **)(MouseClass *, int *))(v88->field_0 + 244))(v88, &aP3_156);
    }
    v89 = (IUnknown *)aP3_48;
    if ( aP3_48 != 8 && aP3_48 != -1 && v181 )
    {
      v90 = *(_DWORD *)(this + 92);
      if ( *(int *)((char *)dword_7E7A2C + (_DWORD)v190) == v90 )
      {
        if ( v90 )
        {
          LOBYTE(v91) = 0;
          HIBYTE(v91) = aP3_92[4];
          LOWORD(aP3_52) = v91;
          aP3_16 = (IUnknown *)(aP3_48 + 8 * (((((unsigned int)aP3_52 >> 12) + 1) >> 1) & 7));
          aP3_20 = 12 * (_DWORD)aP3_16 + 8289064;
          v92 = byte_7E7B28[12 * (_DWORD)aP3_16];
          if ( v92 )
          {
            if ( dword_7E7A30[4 * v92] )
            {
              v93 = *(MouseClass **)(this + 12);
              v94 = (_DWORD *)(this + 64);
              v95 = *(_DWORD *)&v93->__pad_1D4[936];
              LODWORD(aP3_60) = *(_DWORD *)&v93->__pad_1D4[932];
              v96 = aP3_48 & 7;
              HIDWORD(aP3_60) = v95;
              v97 = *(_DWORD *)&MEMORY[0x89F690].__pad_48[8 * v96] + *(_DWORD *)(this + 64);
              v98 = *(_DWORD *)(this + 68) + *(_DWORD *)&MEMORY[0x89F690].__pad_48[8 * v96 + 4];
              v99 = *(TechnoClass **)(this + 72);
              *(_DWORD *)v185 = v97;
              *(_DWORD *)&v185[8] = v99;
              *(_DWORD *)&v185[4] = v98;
              LOWORD(aP3_116) = v97 / 256;
              HIWORD(aP3_116) = v98 / 256;
              v188 = aP3_116;
              v100 = v93->field_0;
              LandHeight = ObjectClass::GetLandHeight(v93);
              v101 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v188);
              switch ( (*(int (__thiscall **)(_DWORD, void *, IUnknown *, int, _DWORD, int))(v100 + 428))(
                         *(_DWORD *)(this + 12),
                         v101,
                         v89,
                         LandHeight,
                         0,
                         1) )
              {
                case 0:
                case 2:
                  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(*(_DWORD *)(this + 12)) == 1
                    && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 12) + 1732) + 3596) )
                  {
                    break;
                  }
                  v102 = aP3_16;
                  v103 = (char *)aP3_20;
                  *(_BYTE *)(this + 96) = 0;
                  *(_DWORD *)(this + 88) = v102;
                  aP3_92 = v103;
                  v181 = 0;
                  v104 = 4 * *v103;
                  v190 = (IUnknown *)(v104 * 4);
                  *(_DWORD *)(this + 92) = dword_7E7A30[v104] - 1;
                  v105 = *v94 == *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
                  aP3_100 = dword_7E7A28[v104];
                  if ( !v105
                    || *(_DWORD *)(this + 68) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
                    || *(_DWORD *)(this + 72) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780] )
                  {
                    *v94 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
                    *(_DWORD *)(this + 68) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776];
                    v106 = *(TechnoClass **)&MEMORY[0x89F690].__pad_DFC[780];
                    *(_BYTE *)(this + 99) = 0;
                    *(_DWORD *)(this + 72) = v106;
                  }
                  v107 = *(MouseClass **)(this + 12);
                  *(_BYTE *)(this + 99) = 1;
                  (*(void (__thiscall **)(MouseClass *, int))(v107->field_0 + 396))(v107, 2);
                  v108 = *(MouseClass **)(this + 12);
                  *(_BYTE *)(this + 99) = 0;
                  if ( !v108->__pad_74[28] || v108->__pad_74[13] || v108->__pad_74[25] )
                    return 0;
                  v109 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
                  if ( *v94 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772]
                    || *(_DWORD *)(this + 68) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
                    || *(_DWORD *)(this + 72) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780] )
                  {
                    *v94 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
                    *(_DWORD *)(this + 68) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776];
                    v110 = *(TechnoClass **)&MEMORY[0x89F690].__pad_DFC[780];
                    *(_BYTE *)(this + 99) = 0;
                    *(_DWORD *)(this + 72) = v110;
                    v109 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
                  }
                  v111 = *(_DWORD *)v185;
                  v112 = *(_DWORD *)&v185[4];
                  v105 = *(_DWORD *)v185 == v109;
                  v113 = *(_DWORD *)&v185[8];
                  if ( !v105
                    || *(_DWORD *)&v185[4] != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
                    || *(_DWORD *)&v185[8] != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780] )
                  {
                    v179 = (AbstractClass *)v108;
                    *(_BYTE *)(this + 99) = 1;
                    *v94 = v111;
                    *(_DWORD *)(this + 68) = v112;
                    *(_DWORD *)(this + 72) = v113;
                    v114 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v185);
                    if ( !CrateClass::ProcessPickup(v114, v179) || *(_BYTE *)(*(_DWORD *)(this + 12) + 129) )
                    {
                      if ( *(_BYTE *)(*(_DWORD *)(this + 12) + 144) )
                      {
                        *v94 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
                        *(_DWORD *)(this + 68) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776];
                        *(_DWORD *)(this + 72) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780];
                        *(_BYTE *)(this + 99) = 0;
                      }
                    }
                    else
                    {
                      JumpjetLocomotion::MoveTo(this, (IUnknown *)v185, 1);
                      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))(
                        *(_DWORD *)(this + 12),
                        aP3_60,
                        HIDWORD(aP3_60));
                      qmemcpy(
                        (void *)(*(_DWORD *)(this + 12) + 1504),
                        (const void *)(*(_DWORD *)(this + 12) + 1508),
                        0x5Cu);
                      *(_DWORD *)(*(_DWORD *)(this + 12) + 1596) = -1;
                    }
                  }
                  break;
                case 1:
                  eax140 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v185);
                  CellClass::DamageAllObjects(eax140);
                  break;
                case 3:
                  LOWORD(aP3_108) = *(_DWORD *)v185 / 256;
                  v115 = *(MouseClass **)(this + 12);
                  HIWORD(aP3_108) = *(_DWORD *)&v185[4] / 256;
                  aP3_16 = aP3_108;
                  Cell::IsPassableAllied((int)v115, (__int16 *)&aP3_16);
                  break;
                case 6:
                  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v185) + 80) & 0x100) == 0
                    || (ecx143 = *(_DWORD *)(this + 12) + 156,
                        v193 = *(IUnknown **)ecx143,
                        aP3_28 = *(_DWORD *)(ecx143 + 4),
                        v117 = *(TechnoClass **)(ecx143 + 8),
                        v119 = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v185) + 283),
                        LOBYTE(aP4) = 1,
                        (int)abs32((int)v117 / *(_DWORD *)MEMORY[0x89F690].__pad_1140 - v119) <= 2) )
                  {
                    LOBYTE(aP4) = 0;
                  }
                  v120 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)(this + 64));
                  Cell::ApplyDamage(v120, (IUnknown *)&MEMORY[0x89F690].__pad_DFC[772], 1, 1, aP4);
                  break;
                default:
                  break;
              }
            }
          }
        }
      }
    }
    cc146 = aP3_8 <= 7;
    ++*(_DWORD *)(this + 92);
    if ( cc146 )
      goto LABEL_147;
    v48 = aP3_100;
  }
  v124 = *(MouseClass **)(this + 12);
  v126 = (_DWORD *)(this + 64);
  v127 = *(_DWORD *)&v124->__pad_74[40];
  v128 = *(_DWORD *)&v124->__pad_74[44];
  v195 = *(TechnoClass **)&v124->__pad_74[48];
  v188 = (IUnknown *)(abs32(*(_DWORD *)(this + 68) - v128) + abs32(*(_DWORD *)(this + 64) - v127));
  v129 = Math::RoundToInt((1.0 - (double)(int)v188 * 0.09090909090909091) * 7.0);
  ebx151 = aP3_8;
  v124->__pad_1D4[1250] = 1;
  v130 = *(MouseClass **)(this + 12);
  aP3_8 = v129 + ebx151;
  v130->__pad_1D4[1251] = 0;
  v131 = *(MouseClass **)(this + 12);
  v133 = *(_DWORD *)&v131->__pad_74[40];
  v134 = *(_DWORD *)&v131->__pad_74[44];
  v195 = *(TechnoClass **)&v131->__pad_74[48];
  HIWORD(v188) = v134 / 256;
  if ( (unsigned __int16)(v133 / 256) == (unsigned __int16)(*(_DWORD *)(this + 64) / 256)
    && HIWORD(v188) == (unsigned __int16)(*(_DWORD *)(this + 68) / 256) )
  {
    al154 = v131->__pad_74[0];
    v131->__pad_74[0] = 0;
    v182 = al154;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), this + 64);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), 0);
    *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v182;
  }
  else
  {
    (*(void (__thiscall **)(MouseClass *, _DWORD))(v131->field_0 + 292))(v131, 0);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), this + 64);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), 0);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 1);
  }
  if ( *v126 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772]
    || *(_DWORD *)(this + 68) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
    || *(_DWORD *)(this + 72) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780] )
  {
    *v126 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
    *(_DWORD *)(this + 68) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776];
    v135 = *(TechnoClass **)&MEMORY[0x89F690].__pad_DFC[780];
    *(_BYTE *)(this + 99) = 0;
    *(_DWORD *)(this + 72) = v135;
  }
  v136 = *(MouseClass **)(this + 12);
  *(_DWORD *)(this + 88) = -1;
  *(_DWORD *)(this + 92) = 0;
  v183 = 0;
  v138 = *(_DWORD *)&v136->__pad_1D4[976];
  if ( v138 )
  {
    v139 = (_DWORD *)(*(int (__thiscall **)(int, IUnknown **, MouseClass *))(*(_DWORD *)v138 + 76))(v138, &v193, v136);
    v140 = *v139 / 256;
    v141 = v139[1] / 256;
    v142 = (_WORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 440))(
                      *(_DWORD *)(this + 12),
                      &varDC);
    if ( *v142 == (_WORD)v140 && v142[1] == (_WORD)v141 )
    {
      rax162 = *(_DWORD *)((*(int (__stdcall **)(IUnknown **, _DWORD))(**(_DWORD **)(this + 12) + 76))(
                             &v193,
                             *(_DWORD *)(this + 12))
                         + 8)
             - *(_DWORD *)(this + 60);
      if ( (int)((HIDWORD(rax162) ^ rax162) - HIDWORD(rax162)) < 2 * *(_DWORD *)MEMORY[0x89F690].__pad_1140 )
      {
        v183 = 1;
        *(_DWORD *)(this + 52) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
        *(_DWORD *)(this + 56) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776];
        *(_DWORD *)(this + 60) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780];
        if ( *v126 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772]
          || *(_DWORD *)(this + 68) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
          || *(_DWORD *)(this + 72) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780] )
        {
          *v126 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
          *(_DWORD *)(this + 68) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776];
          *(_DWORD *)(this + 72) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780];
          *(_BYTE *)(this + 99) = 0;
        }
        *(_BYTE *)(this + 99) = 0;
      }
    }
  }
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 396))(*(_DWORD *)(this + 12), 2);
  v143 = *(MouseClass **)(this + 12);
  if ( !v143 || !v143->__pad_74[28] || v143->__pad_74[13] || v143->__pad_74[25] )
    return 1;
  if ( v183 )
  {
    FootClass::ClearPathIndex(v143);
    *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 388))(*(_DWORD *)(this + 12)) == 2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
             *(_DWORD *)(this + 12),
             0,
             1) )
      {
        return 1;
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 1284))(*(_DWORD *)(this + 12)) )
    return 1;
  if ( !*(_BYTE *)(*(_DWORD *)(this + 12) + 144) )
    return 0;
LABEL_147:
  cc146 = aP3_8 <= 0;
  *(_DWORD *)(this + 76) = aP3_8;
  if ( cc146 )
    return 0;
  v121 = *(IUnknown **)(this + 88);
  if ( (int)v121 <= -1 )
    return 0;
  v123 = (_BYTE *)(12 * (_DWORD)v121 + 8289064);
  eax150 = *(_BYTE *)(this + 96) ? (char)v123[1] : (char)*v123;
  v145 = *(_DWORD *)(this + 92);
  v146 = dword_7E7A28[4 * eax150];
  v147 = *(IUnknown **)(v146 + 12 * v145);
  v148 = v146 + 12 * v145;
  v149 = *(BuildingTypeClass **)(v148 + 4);
  v207 = v147;
  v208 = v149;
  if ( !v147 && !v149 && v145 )
    return 0;
  v150 = *(_DWORD *)(this + 12) + 156;
  aP3_72 = *(_DWORD *)v150;
  v205 = *(IUnknown **)(v150 + 4);
  aP3_80 = *(_DWORD *)(v150 + 8);
  v188 = *(IUnknown **)(v148 + 8);
  v151 = *(_DWORD *)v150;
  v152 = *(_DWORD *)(v150 + 4);
  v195 = *(TechnoClass **)(v150 + 8);
  v153 = JumpjetLocomotion::TransformCoords(
           (_DWORD *)this,
           (IUnknown *)aP3_120,
           (IUnknown *)&v207,
           (ObjectClass *)&v188);
  v154 = *v153;
  v155 = (TechnoClass *)(v153[1] - v152);
  v156 = *(_DWORD *)(this + 12) + 156;
  v219 = (TechnoClass *)(v154 - v151);
  aP3_148 = v155;
  aP3_152 = 0;
  v157 = *(_DWORD *)v156 + v154 - v151;
  esi185a = *(_DWORD *)(v156 + 4);
  v158 = *(TechnoClass **)(v156 + 8);
  HIDWORD(aP3_60) = (char *)v155 + esi185a;
  LODWORD(aP3_60) = v157;
  aP3_68 = v158;
  v159 = (IUnknown *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&aP3_60);
  v161 = (double)*(int *)(this + 76) * 0.1428571428571428;
  aP3_156 = 0;
  aP3_160 = 0;
  aP3_164 = 0;
  v180 = v161;
  eax185d = (TechnoClass **)Color::RGBFromFloat(&v193, (IUnknown *)&v219, v180);
  v219 = *eax185d;
  aP3_148 = eax185d[1];
  v162 = eax185d[2];
  LODWORD(varDC) = (char *)v219 + aP3_72;
  aP3_152 = v162;
  HIDWORD(varDC) = (char *)aP3_148 + (_DWORD)v205;
  v186 = (TechnoClass *)((char *)v162 + aP3_80);
  v163 = (IUnknown *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&aP3_72);
  aP3_52 = v163;
  v165 = (IUnknown *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&varDC);
  v166 = *(_DWORD *)(this + 12) + 156;
  *(_DWORD *)v185 = *(_DWORD *)v166;
  edx185 = *(_DWORD *)(v166 + 4);
  *(_DWORD *)&v185[4] = edx185;
  v167 = *(TechnoClass **)(v166 + 8);
  *(_DWORD *)&v185[8] = v167;
  v169 = __PAIR64__(edx185, *(unsigned int *)v185);
  if ( v165 == v159 || v165 == v163 )
  {
    v169 = *(_QWORD *)&varDC;
    v167 = v186;
    *(double *)v185 = varDC;
LABEL_190:
    *(_DWORD *)&v185[8] = v167;
  }
  else if ( *(int *)(this + 76) > 3 )
  {
    v167 = aP3_68;
    *(_QWORD *)v185 = aP3_60;
    v169 = aP3_60;
    goto LABEL_190;
  }
  aP3_132 = v169;
  aP3_140 = v167;
  eax191 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&aP3_132);
  v170 = *(MouseClass **)(this + 12);
  aP3_48 = (int)eax191;
  v172 = *(_DWORD *)&v170->__pad_74[40];
  v173 = *(_DWORD *)&v170->__pad_74[44];
  v195 = *(TechnoClass **)&v170->__pad_74[48];
  v174 = v173 / 256;
  if ( (unsigned __int16)(*(_DWORD *)v185 / 256) == (unsigned __int16)(v172 / 256)
    && (unsigned __int16)(*(_DWORD *)&v185[4] / 256) == (_WORD)v174 )
  {
    v177 = v170->__pad_74[0];
    v170->__pad_74[0] = 0;
    (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), v185);
    *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v177;
    return 0;
  }
  else
  {
    (*(void (__thiscall **)(MouseClass *, _DWORD))(v170->field_0 + 292))(v170, 0);
    (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), v185);
    ecx193 = aP3_52;
    v175 = (IUnknown *)aP3_48;
    if ( *(char *)(aP3_48 + 283) != SHIBYTE(aP3_52->field_118) - 4 )
      goto LABEL_196;
    if ( (*(_DWORD *)(aP3_48 + 320) & 0x100) == 0 )
      goto LABEL_197;
    *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 1;
LABEL_196:
    if ( (v175->field_140 & 0x100) == 0 )
    {
LABEL_197:
      if ( (ecx193->field_140 & 0x100) != 0 )
        *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 0;
    }
    (*(void (__thiscall **)(IUnknown *, int))(**(_DWORD **)(this + 12) + 292))(ecx193, 1);
    return 0;
  }
}


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
  _DWORD *v48; // ecx
  __int64 v49; // rax
  _DWORD *v50; // ecx
  _DWORD *v51; // ecx
  __int64 v52; // rax
  _DWORD *v53; // ecx
  int v54; // eax
  int v55; // eax
  _DWORD *v56; // ecx
  _DWORD *v57; // eax
  int v58; // kr10_4
  int v59; // edx
  __int16 v60; // cx
  _BYTE *v61; // ecx
  int v62; // esi
  void *v63; // eax
  int v64; // eax
  int v65; // eax
  _DWORD *v66; // esi
  _DWORD *v67; // ecx
  int v68; // edi
  int v69; // eax
  int v70; // eax
  _DWORD *v71; // eax
  _DWORD *v72; // eax
  _DWORD *v73; // ecx
  __int64 v74; // rax
  _DWORD *v75; // ecx
  _DWORD *v76; // ecx
  __int64 v77; // rax
  int *v78; // eax
  int v79; // ecx
  char *v80; // eax
  int v81; // ecx
  int v82; // edi
  _DWORD *v83; // eax
  _DWORD *v84; // eax
  int v85; // ecx
  int v86; // edx
  _DWORD *v87; // eax
  int v88; // ecx
  _DWORD *v89; // esi
  int v90; // eax
  int v91; // ecx
  int v92; // eax
  int v93; // edx
  int v94; // esi
  int v95; // edx
  _DWORD *v96; // ebx
  int v97; // eax
  int v98; // eax
  _DWORD *v99; // edx
  int v100; // ecx
  int v101; // ecx
  int v102; // edi
  int v103; // esi
  int v104; // eax
  int v105; // edx
  int v106; // eax
  char v107; // bl
  _DWORD *v108; // ecx
  _DWORD *v109; // edx
  wchar_t *v110; // eax
  _DWORD *v111; // eax
  _DWORD *v112; // eax
  int v113; // edx
  int v114; // eax
  double v115; // st7
  _DWORD *v116; // ecx
  __int64 v117; // rax
  _DWORD *v118; // ecx
  _DWORD *v119; // edx
  int v120; // esi
  int v121; // ecx
  _DWORD *v122; // eax
  _DWORD *v123; // eax
  char v124; // al
  int v125; // ecx
  wchar_t *v126; // esi
  wchar_t *v127; // eax
  wchar_t *v128; // ecx
  wchar_t **v129; // edx
  _DWORD *v130; // eax
  _DWORD *v131; // eax
  int Object; // eax
  int *v133; // ecx
  int v134; // esi
  _DWORD *v135; // eax
  int v136; // eax
  int v137; // esi
  void *v138; // eax
  _DWORD *v139; // eax
  int *Coords; // eax
  int v141; // esi
  _DWORD *v142; // edx
  int v143; // edi
  bool v144; // cc
  double v145; // st7
  double v147; // st7
  unsigned __int8 v148; // c0
  unsigned __int8 v149; // c3
  double *v150; // ecx
  int v151; // ecx
  _DWORD *v152; // ecx
  unsigned int v153; // esi
  _DWORD *v154; // eax
  int v155; // edi
  int v156; // ecx
  int v157; // edx
  int v158; // eax
  int v159; // ecx
  double v160; // st7
  char v161; // dl
  int v162; // ecx
  int v163; // ecx
  _DWORD *NeighbourContent; // eax
  _DWORD *v165; // edi
  int v166; // eax
  int v167; // eax
  unsigned int v168; // eax
  _DWORD *v169; // eax
  int v170; // eax
  int v171; // esi
  int *v172; // edi
  int v173; // edx
  int v174; // ecx
  int v175; // edi
  void *v176; // eax
  int v177; // ebx
  _DWORD *v178; // ecx
  _DWORD *v179; // eax
  int v180; // edi
  _DWORD *v181; // ecx
  int v182; // edx
  int v183; // eax
  int v184; // eax
  double v185; // st7
  _DWORD *v186; // ecx
  __int64 v187; // rax
  _DWORD *v188; // ecx
  _DWORD *v189; // ecx
  _DWORD *v190; // edx
  int v191; // edi
  __int64 v192; // rax
  _DWORD *v193; // eax
  _BYTE *v194; // edx
  int *v195; // esi
  int v196; // edx
  int v197; // eax
  int v198; // ecx
  int v199; // ecx
  int v200; // edx
  bool v201; // zf
  int v202; // eax
  _DWORD *v203; // eax
  int v204; // ecx
  int v205; // [esp+70h] [ebp-6Ch]
  int LandHeight; // [esp+74h] [ebp-68h]
  int v207; // [esp+74h] [ebp-68h]
  _BYTE *v208; // [esp+74h] [ebp-68h]
  int v209; // [esp+74h] [ebp-68h]
  char v210; // [esp+7Ch] [ebp-60h]
  int v211; // [esp+7Ch] [ebp-60h]
  int v212; // [esp+7Ch] [ebp-60h]
  int v213; // [esp+80h] [ebp-5Ch]
  char v214; // [esp+93h] [ebp-49h]
  int v215; // [esp+94h] [ebp-48h] BYREF
  double v216; // [esp+98h] [ebp-44h] BYREF
  int v217; // [esp+A0h] [ebp-3Ch]
  int v218; // [esp+A4h] [ebp-38h] BYREF
  int v219; // [esp+A8h] [ebp-34h] BYREF
  _DWORD *v220; // [esp+ACh] [ebp-30h] BYREF
  int v221; // [esp+B0h] [ebp-2Ch]
  int v222; // [esp+B4h] [ebp-28h]
  int v223; // [esp+B8h] [ebp-24h] BYREF
  int v224; // [esp+BCh] [ebp-20h]
  int v225; // [esp+C0h] [ebp-1Ch]
  _DWORD *v226; // [esp+C4h] [ebp-18h] BYREF
  wchar_t *v227; // [esp+C8h] [ebp-14h]
  int v228; // [esp+CCh] [ebp-10h]
  int v229; // [esp+D0h] [ebp-Ch] BYREF
  wchar_t *v230; // [esp+D4h] [ebp-8h]

  v5 = *(_DWORD *)(this + 4);
  v6 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1504);
  v215 = this + 4;
  if ( !(*(unsigned __int8 (__stdcall **)(int))(v5 + 16))(this + 4) && v6 == -1 )
  {
    *(_BYTE *)(this + 97) = 0;
    if ( *(_DWORD *)(this + 64) != MEMORY[0x8A0790]
      || *(_DWORD *)(this + 68) != MEMORY[0x8A0794]
      || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
    {
      *(_DWORD *)(this + 64) = MEMORY[0x8A0790];
      *(_DWORD *)(this + 68) = MEMORY[0x8A0794];
      *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
      *(_BYTE *)(this + 99) = 0;
    }
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 388))(*(_DWORD *)(this + 12)) == 2 )
    {
      v8 = (*(int (__thiscall **)(int, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(v7, 0, 1);
      *a2 = v8;
      return 0;
    }
    return 0;
  }
  if ( *(_DWORD *)(this + 52) == MEMORY[0x8A0790]
    && *(_DWORD *)(this + 56) == MEMORY[0x8A0794]
    && *(_DWORD *)(this + 60) == MEMORY[0x8A0798]
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 468))(*(_DWORD *)(this + 12))
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 472))(*(_DWORD *)(this + 12)) )
  {
    return 0;
  }
  if ( *(_DWORD *)(*(_DWORD *)(this + 12) + 720) && TechnoClass::CountPassengers() )
    return 1;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 892))(*(_DWORD *)(this + 12))
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 896))(*(_DWORD *)(this + 12)) )
  {
    return 1;
  }
  if ( v6 != -1 )
  {
    v10 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1444);
    if ( v10 && (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 44))(v10) == 1
      || (v11 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1444)) != 0
      && (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) == 15 )
    {
      v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(**(_DWORD **)(this + 12) + 72))(
                        *(_DWORD *)(this + 12),
                        &v226);
      v13 = Coord::Subtract(
              &v216,
              *v12 - *(_DWORD *)(this + 52),
              v12[1] - *(_DWORD *)(this + 56),
              v12[2] - *(_DWORD *)(this + 60));
      v220 = (_DWORD *)*v13;
      v221 = v13[1];
      v222 = v13[2];
      v14 = (int)Coord::Length((int *)&v220) / 256;
      if ( v14 < 24 )
      {
        *(_DWORD *)(*(_DWORD *)(this + 12) + 4 * v14 + 1504) = -1;
        v6 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1504);
      }
    }
    if ( v6 != -1 )
      goto LABEL_125;
  }
  v15 = *(_DWORD *)(this + 12);
  v16 = MEMORY[0xA8ED84];
  v17 = *(_DWORD *)(v15 + 1600);
  v18 = (wchar_t **)(v15 + 1600);
  v19 = *(_DWORD *)(v15 + 1608);
  if ( v17 != -1 )
  {
    if ( (int)MEMORY[0xA8ED84] - v17 >= v19 )
      goto LABEL_31;
    v19 -= (int)MEMORY[0xA8ED84] - v17;
  }
  if ( v19 )
    return 0;
LABEL_31:
  v20 = (wchar_t *)Math::RoundToInt(*((double *)MEMORY[0x8871E0] + 748) * 900.0);
  v21 = v227;
  *v18 = v16;
  v22 = (_DWORD *)(this + 52);
  v18[1] = v21;
  v18[2] = v20;
  v23 = *(_DWORD *)(this + 12);
  LOWORD(v216) = *(_DWORD *)(this + 52) / 256;
  WORD1(v216) = *(_DWORD *)(this + 56) / 256;
  v24 = FootClass::MovementStep(v23, (int)v16, SLODWORD(v216), 0, 0, v213);
  v25 = *(_DWORD **)(this + 12);
  if ( !v24 )
  {
    if ( !v25 )
    {
      *a2 = 1;
      return 0;
    }
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*v25 + 716))(v25, this + 52) )
    {
      (*(void (__thiscall **)(int, _DWORD, int))(**(_DWORD **)(this + 12) + 1152))(v26, 0, 1);
      return 0;
    }
    if ( *v22 == MEMORY[0x8A0790]
      && *(_DWORD *)(this + 56) == MEMORY[0x8A0794]
      && *(_DWORD *)(this + 60) == MEMORY[0x8A0798] )
    {
      return 0;
    }
    if ( !(unsigned __int8)FootClass::ClearSomeVector2(*(_DWORD *)(this + 12))
      && (v27 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(**(_DWORD **)(this + 12) + 72))(
                            *(_DWORD *)(this + 12),
                            &v226),
          v28 = Coord::Subtract(&v216, *v27 - *v22, v27[1] - *(_DWORD *)(this + 56), v27[2] - *(_DWORD *)(this + 60)),
          v220 = (_DWORD *)*v28,
          v221 = v28[1],
          v222 = v28[2],
          (int)Coord::Length((int *)&v220) < *((_DWORD *)MEMORY[0x8871E0] + 1478))
      && ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 388))(*(_DWORD *)(this + 12)) == 2
       || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 388))(*(_DWORD *)(this + 12)) == 11) )
    {
      if ( *(_DWORD *)(this + 64) != MEMORY[0x8A0790]
        || *(_DWORD *)(this + 68) != MEMORY[0x8A0794]
        || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
      {
        *(_DWORD *)(this + 64) = MEMORY[0x8A0790];
        *(_DWORD *)(this + 68) = MEMORY[0x8A0794];
        *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
        *(_BYTE *)(this + 99) = 0;
      }
      v29 = *(_DWORD **)(this + 12);
      if ( v29[358] )
      {
        FootClass::ClearPathIndex(v29);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
               *(_DWORD *)(this + 12),
               0,
               1) )
        {
          return 1;
        }
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v29 + 1152))(v29, 0, 1);
      }
      if ( !*(_BYTE *)(*(_DWORD *)(this + 12) + 144) )
        return 0;
    }
    else
    {
      Value = ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 12) + 904), &a3);
      v31 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(**(_DWORD **)(this + 12) + 72))(
                        *(_DWORD *)(this + 12),
                        &v226);
      v32 = v31[1];
      v33 = ((unsigned int)((*Value >> 12) + 1) >> 1) & 7;
      LOWORD(a2) = LOWORD(MEMORY[0x89F688][v33]) + *v31 / 256;
      HIWORD(a2) = v32 / 256 + HIWORD(MEMORY[0x89F688][v33]);
      a4 = (int)a2;
      if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&a4, 1) )
      {
        v34 = ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 12) + 904), &a2);
        v35 = *(_BYTE **)(this + 12);
        v36 = *(_DWORD *)v35;
        v37 = ((unsigned int)((*v34 >> 12) + 1) >> 1) & 7;
        LandHeight = ObjectClass::GetLandHeight(v35);
        v38 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a4);
        v39 = (*(int (__thiscall **)(_DWORD, void *, unsigned int, int, _DWORD, int))(v36 + 428))(
                *(_DWORD *)(this + 12),
                v38,
                v37,
                LandHeight,
                0,
                1);
        if ( v39 == 3 )
        {
          v40 = *(_DWORD *)(this + 12);
          a2 = (_BYTE *)a4;
          Cell::IsPassableAllied(v40, (__int16 *)&a2);
        }
        else if ( v39 == 6 )
        {
          v41 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a4);
          v42 = (_DWORD *)(*(_DWORD *)(this + 12) + 156);
          v226 = (_DWORD *)*v42;
          v43 = v42[2];
          v227 = (wchar_t *)v42[1];
          v217 = 0;
          v220 = 0;
          v221 = 0;
          LODWORD(v216) = ((__int16)a4 << 8) + 128;
          HIDWORD(v216) = (SHIWORD(a4) << 8) + 128;
          GroundHeight = Cell::GetGroundHeight(&v216);
          ClosestObject = Object::FindClosestObjectCell(v41, &v220, v43 > GroundHeight + 2 * MEMORY[0x8A07D0], 0);
          if ( ClosestObject )
          {
            if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(*(_DWORD *)(this + 12) + 540), ClosestObject)
              && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12))
                           + 3220) )
            {
              v46 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(**(_DWORD **)(this + 12) + 72))(
                                *(_DWORD *)(this + 12),
                                &v226);
              v47 = Coord::Subtract(
                      &v216,
                      *v46 - *v22,
                      v46[1] - *(_DWORD *)(this + 56),
                      v46[2] - *(_DWORD *)(this + 60));
              v220 = (_DWORD *)*v47;
              v221 = v47[1];
              v222 = v47[2];
              if ( (int)Coord::Length((int *)&v220) < *((_DWORD *)MEMORY[0x8871E0] + 1478)
                && !Team::AllMembersValid(*(int **)(this + 12)) )
              {
                v48 = (_DWORD *)(*(_DWORD *)(this + 12) + 156);
                v226 = (_DWORD *)*v48;
                v227 = (wchar_t *)v48[1];
                v49 = *(_DWORD *)(this + 60) - v48[2];
                if ( (int)((HIDWORD(v49) ^ v49) - HIDWORD(v49)) < 2 * MEMORY[0x8A07D0] )
                {
                  v220 = (_DWORD *)*v48;
                  v221 = v48[1];
                  v222 = v48[2];
                  if ( *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v220) + 59) != 10 )
                  {
                    if ( *(_DWORD *)(this + 64) != MEMORY[0x8A0790]
                      || *(_DWORD *)(this + 68) != MEMORY[0x8A0794]
                      || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
                    {
                      *(_DWORD *)(this + 64) = MEMORY[0x8A0790];
                      *(_DWORD *)(this + 68) = MEMORY[0x8A0794];
                      *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
                      *(_BYTE *)(this + 99) = 0;
                    }
                    v50 = *(_DWORD **)(this + 12);
                    if ( !v50[358] )
                    {
                      (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v50 + 1152))(v50, 0, 1);
                      return 0;
                    }
                    FootClass::ClearPathIndex(v50);
                    return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
                             *(_DWORD *)(this + 12),
                             0,
                             1) != 0;
                  }
                }
              }
              if ( (v41[80] & 0x100) == 0
                || (v51 = *(_DWORD **)(this + 12),
                    LOBYTE(a2) = 1,
                    v51 += 39,
                    v226 = (_DWORD *)*v51,
                    v227 = (wchar_t *)v51[1],
                    v52 = v51[2] / MEMORY[0x8A07D0] - *((char *)v41 + 283),
                    (int)((HIDWORD(v52) ^ v52) - HIDWORD(v52)) <= 2) )
              {
                LOBYTE(a2) = 0;
              }
              Cell::ApplyDamage(v41, (int)&MEMORY[0x8A0790], 1, 1, (char)a2);
            }
          }
        }
      }
      v53 = *(_DWORD **)(this + 12);
      v54 = v53[403];
      if ( v54 <= 0 )
      {
        if ( *(_DWORD *)(this + 64) != MEMORY[0x8A0790]
          || *(_DWORD *)(this + 68) != MEMORY[0x8A0794]
          || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
        {
          *(_DWORD *)(this + 64) = MEMORY[0x8A0790];
          *(_DWORD *)(this + 68) = MEMORY[0x8A0794];
          *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
          *(_BYTE *)(this + 99) = 0;
        }
        if ( v53[358] )
        {
          FootClass::ClearPathIndex(v53);
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
                 *(_DWORD *)(this + 12),
                 0,
                 1) )
          {
            return 1;
          }
        }
        else
        {
          (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v53 + 1152))(v53, 0, 1);
        }
        v55 = *(_DWORD *)(this + 12);
        if ( !*(_BYTE *)(v55 + 144) )
          return 0;
        if ( *(_BYTE *)(v55 + 1674) )
          PlayVocClass(*((_DWORD *)MEMORY[0x8871E0] + 448), 0x2000, 1.0, 0);
        *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0;
      }
      else
      {
        v53[403] = v54 - 1;
      }
    }
    if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v215 + 16))(v215) )
    {
      v56 = *(_DWORD **)(this + 12);
      if ( v56[173] )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v56 + 940))(v56, v56[173]) )
        {
          *(_BYTE *)(*(_DWORD *)(this + 12) + 1672) = 1;
          if ( *(_DWORD *)(*(_DWORD *)(this + 12) + 1492) )
            TeamClass::WakeUpAllMembers();
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 968))(*(_DWORD *)(this + 12), 0);
        }
      }
    }
    if ( *(_DWORD *)(this + 64) != MEMORY[0x8A0790]
      || *(_DWORD *)(this + 68) != MEMORY[0x8A0794]
      || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
    {
      *(_DWORD *)(this + 64) = MEMORY[0x8A0790];
      *(_DWORD *)(this + 68) = MEMORY[0x8A0794];
      *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
      *(_BYTE *)(this + 99) = 0;
    }
    *(_DWORD *)(this + 88) = -1;
    *(_BYTE *)(this + 97) = 0;
    return 0;
  }
  if ( v25[376] == 8 )
    return 0;
  v57 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD **))(*v25 + 72))(v25, &v226);
  v58 = v57[1];
  v59 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) & 7;
  v60 = HIWORD(MEMORY[0x89F688][v59]);
  LOWORD(v216) = *v57 / 256 + LOWORD(MEMORY[0x89F688][v59]);
  WORD1(v216) = v58 / 256 + v60;
  v218 = LODWORD(v216);
  if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v218, 1) )
  {
    v61 = *(_BYTE **)(this + 12);
    v62 = *(_DWORD *)v61;
    v207 = ObjectClass::GetLandHeight(v61);
    v205 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1504);
    v63 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v218);
    v64 = (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD, int))(v62 + 428))(
            *(_DWORD *)(this + 12),
            v63,
            v205,
            v207,
            0,
            1);
    if ( v64 == 3 )
    {
      v65 = *(_DWORD *)(this + 12);
      v219 = v218;
      Cell::IsPassableAllied(v65, (__int16 *)&v219);
    }
    else if ( v64 == 6 )
    {
      v66 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v218);
      v67 = (_DWORD *)(*(_DWORD *)(this + 12) + 156);
      LODWORD(v216) = ((__int16)v218 << 8) + 128;
      HIDWORD(v216) = (SHIWORD(v218) << 8) + 128;
      v217 = 0;
      v226 = (_DWORD *)*v67;
      v227 = (wchar_t *)v67[1];
      v68 = v67[2];
      v220 = 0;
      v221 = 0;
      v69 = Cell::GetGroundHeight(&v216);
      v70 = Object::FindClosestObjectCell(v66, &v220, v68 > v69 + 2 * MEMORY[0x8A07D0], 0);
      if ( v70 )
      {
        if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(*(_DWORD *)(this + 12) + 540), v70)
          && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3220) )
        {
          v71 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(**(_DWORD **)(this + 12) + 72))(
                            *(_DWORD *)(this + 12),
                            &v226);
          v72 = Coord::Subtract(&v216, *v71 - *v22, v71[1] - *(_DWORD *)(this + 56), v71[2] - *(_DWORD *)(this + 60));
          v220 = (_DWORD *)*v72;
          v221 = v72[1];
          v222 = v72[2];
          if ( (int)Coord::Length((int *)&v220) < *((_DWORD *)MEMORY[0x8871E0] + 1478)
            && !Team::AllMembersValid(*(int **)(this + 12)) )
          {
            v73 = (_DWORD *)(*(_DWORD *)(this + 12) + 156);
            v226 = (_DWORD *)*v73;
            v227 = (wchar_t *)v73[1];
            v74 = *(_DWORD *)(this + 60) - v73[2];
            if ( (int)((HIDWORD(v74) ^ v74) - HIDWORD(v74)) < 2 * MEMORY[0x8A07D0] )
            {
              v220 = (_DWORD *)*v73;
              v221 = v73[1];
              v222 = v73[2];
              if ( *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v220) + 59) != 10 )
              {
                if ( *(_DWORD *)(this + 64) == MEMORY[0x8A0790]
                  && *(_DWORD *)(this + 68) == MEMORY[0x8A0794]
                  && *(_DWORD *)(this + 72) == MEMORY[0x8A0798] )
                {
                  goto LABEL_118;
                }
                *(_DWORD *)(this + 64) = MEMORY[0x8A0790];
                *(_DWORD *)(this + 68) = MEMORY[0x8A0794];
                *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
                goto LABEL_117;
              }
            }
          }
          if ( (v66[80] & 0x100) == 0
            || (v76 = *(_DWORD **)(this + 12),
                LOBYTE(v216) = 1,
                v76 += 39,
                v226 = (_DWORD *)*v76,
                v227 = (wchar_t *)v76[1],
                v77 = v76[2] / MEMORY[0x8A07D0] - *((char *)v66 + 283),
                (int)((HIDWORD(v77) ^ v77) - HIDWORD(v77)) <= 2) )
          {
            LOBYTE(v216) = 0;
          }
          Cell::ApplyDamage(v66, (int)&MEMORY[0x8A0790], 1, 1, SLOBYTE(v216));
        }
      }
    }
  }
  *(_DWORD *)(*(_DWORD *)(this + 12) + 1612) = 10;
  v6 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1504);
LABEL_125:
  if ( v6 == 8 )
    return 0;
  v78 = Coord::Subtract(
          &v226,
          MEMORY[0x89F6D8][2 * (v6 & 7)] + *(_DWORD *)(*(_DWORD *)(this + 12) + 156),
          *(_DWORD *)(*(_DWORD *)(this + 12) + 160) + MEMORY[0x89F6DC][2 * (v6 & 7)],
          *(_DWORD *)(*(_DWORD *)(this + 12) + 164));
  v223 = *v78;
  v79 = *(_DWORD *)(this + 12) + 156;
  v224 = v78[1];
  v225 = v78[2];
  v220 = *(_DWORD **)v79;
  v221 = *(_DWORD *)(v79 + 4);
  v222 = *(_DWORD *)(v79 + 8);
  v80 = (char *)Coord::To_Cell(&MEMORY[0x87F7E8], &v220);
  v81 = *(_DWORD *)(this + 12);
  v82 = v80[283] + (*(_BYTE *)(v81 + 140) != 0 ? 4 : 0);
  v83 = Coord::Subtract(
          &v226,
          *(_DWORD *)(v81 + 156) + MEMORY[0x89F6D8][2 * (v6 & 7)],
          *(_DWORD *)(v81 + 160) + MEMORY[0x89F6DC][2 * (v6 & 7)],
          *(_DWORD *)(v81 + 164));
  v220 = (_DWORD *)*v83;
  v221 = v83[1];
  v222 = v83[2];
  v84 = Coord::To_Cell(&MEMORY[0x87F7E8], &v220);
  v85 = *(_DWORD *)(this + 12);
  if ( *(_BYTE *)(v85 + 140) != ((v84[80] >> 8) & 1) )
    *(_BYTE *)(v85 + 1675) = 1;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 668))(*(_DWORD *)(this + 12)) )
    return 1;
  LOWORD(v216) = v223 / 256;
  v86 = *(_DWORD *)(this + 12);
  WORD1(v216) = v224 / 256;
  v219 = LODWORD(v216);
  if ( !Cell::IsPassableAllied(v86, (__int16 *)&v219) )
    return 1;
  if ( abs16(*(_WORD *)ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 12) + 904), &v220) - ((_WORD)v6 << 13)) )
  {
    LOWORD(a4) = (_WORD)v6 << 13;
    (*(void (__stdcall **)(int, int))(*(_DWORD *)v215 + 76))(v215, a4);
    return 1;
  }
  LOWORD(v216) = v223 / 256;
  WORD1(v216) = v224 / 256;
  v215 = LODWORD(v216);
  v87 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
  v88 = *(_DWORD *)(this + 12);
  v89 = v87;
  v220 = v87;
  v214 = 0;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v88 + 292))(v88, 0);
  v90 = (*(int (__thiscall **)(_DWORD, _DWORD *, unsigned int, int, _DWORD, int))(**(_DWORD **)(this + 12) + 428))(
          *(_DWORD *)(this + 12),
          v89,
          v6,
          v82,
          0,
          1);
  v91 = *(_DWORD *)(this + 12);
  LODWORD(v216) = v90;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v91 + 292))(v91, 1);
  if ( SLODWORD(v216) < 7
    && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3220)
    || (LODWORD(v216) == 5 || LODWORD(v216) == 4)
    && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3368)
    && !v89[17] )
  {
    LODWORD(v216) = 0;
  }
  v92 = v89[17];
  v93 = LODWORD(v216);
  if ( v92 != -1 && !LODWORD(v216) && *(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84] + v92) + 557) )
  {
LABEL_148:
    v214 = 1;
    goto LABEL_149;
  }
  if ( v92 != -1 )
  {
    if ( !LODWORD(v216) )
    {
      if ( !*(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84] + v92) + 680)
        || *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 1460) != 12 )
      {
        goto LABEL_149;
      }
      goto LABEL_148;
    }
    goto LABEL_153;
  }
  if ( LODWORD(v216) )
  {
    v93 = LODWORD(v216);
LABEL_153:
    if ( v93 == 3 )
    {
      v95 = *(_DWORD *)(this + 12);
      a4 = v215;
      Cell::IsPassableAllied(v95, (__int16 *)&a4);
      goto LABEL_155;
    }
    if ( v93 == 6 )
    {
      if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3220) )
      {
        v108 = *(_DWORD **)(this + 12);
        if ( (_BYTE)a3 )
        {
          v108[376] = -1;
          v109 = (_DWORD *)(*(_DWORD *)(this + 12) + 1600);
          *v109 = MEMORY[0xA8ED84];
          v110 = v227;
          goto LABEL_329;
        }
        v111 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD **))(*v108 + 72))(v108, &v226);
        v112 = Coord::Subtract(
                 &v229,
                 *v111 - *(_DWORD *)(this + 52),
                 v111[1] - *(_DWORD *)(this + 56),
                 v111[2] - *(_DWORD *)(this + 60));
        v220 = (_DWORD *)*v112;
        v113 = v112[1];
        v114 = v112[2];
        v221 = v113;
        v222 = v114;
        v115 = Math::Sqrt((double)v114 * (double)v114 + (double)v113 * (double)v113 + (double)(int)v220
                                                                                    * (double)(int)v220);
        if ( (int)Math::RoundToInt(v115) >= *((_DWORD *)MEMORY[0x8871E0] + 1478)
          || (v116 = (_DWORD *)(*(_DWORD *)(this + 12) + 156),
              v226 = (_DWORD *)*v116,
              v227 = (wchar_t *)v116[1],
              v117 = *(_DWORD *)(this + 60) - v116[2],
              (int)((HIDWORD(v117) ^ v117) - HIDWORD(v117)) >= 2 * MEMORY[0x8A07D0])
          || (v220 = (_DWORD *)*v116,
              v221 = v116[1],
              v222 = v116[2],
              *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v220) + 59) == 10) )
        {
          if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 80) & 0x100) == 0
            || (v119 = (_DWORD *)(*(_DWORD *)(this + 12) + 156),
                v226 = (_DWORD *)*v119,
                v227 = (wchar_t *)v119[1],
                v120 = v119[2],
                v121 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 283),
                LOBYTE(a4) = 1,
                (int)abs32(v120 / MEMORY[0x8A07D0] - v121) <= 2) )
          {
            LOBYTE(a4) = 0;
          }
          v210 = a4;
          v122 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
          Cell::ApplyDamage(v122, (int)&MEMORY[0x8A0790], 1, 1, v210);
        }
        else
        {
          if ( *(_DWORD *)(this + 64) != MEMORY[0x8A0790]
            || *(_DWORD *)(this + 68) != MEMORY[0x8A0794]
            || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
          {
            *(_DWORD *)(this + 64) = MEMORY[0x8A0790];
            *(_DWORD *)(this + 68) = MEMORY[0x8A0794];
            *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
            *(_BYTE *)(this + 99) = 0;
          }
          v118 = *(_DWORD **)(this + 12);
          if ( v118[358] )
          {
            FootClass::ClearPathIndex(v118);
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
                   *(_DWORD *)(this + 12),
                   0,
                   1) )
            {
              return 1;
            }
          }
          else
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v118 + 1152))(v118, 0, 1);
          }
        }
      }
LABEL_155:
      v96 = (_DWORD *)(this + 64);
      if ( *(_DWORD *)(this + 64) != MEMORY[0x8A0790]
        || *(_DWORD *)(this + 68) != MEMORY[0x8A0794]
        || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
      {
        *v96 = MEMORY[0x8A0790];
        *(_DWORD *)(this + 68) = MEMORY[0x8A0794];
        v97 = MEMORY[0x8A0798];
        *(_BYTE *)(this + 99) = 0;
        *(_DWORD *)(this + 72) = v97;
      }
      if ( LODWORD(v216) == 2 )
      {
        v98 = *(_DWORD *)(this + 12);
        if ( !*(_BYTE *)(v98 + 1719) )
        {
          *(_BYTE *)(v98 + 1719) = 1;
          v99 = (_DWORD *)(*(_DWORD *)(this + 12) + 1640);
          v100 = *((_DWORD *)MEMORY[0x8871E0] + 1498);
          *v99 = MEMORY[0xA8ED84];
          v99[1] = v230;
          v99[2] = v100;
        }
        v101 = *(_DWORD *)(this + 12);
        v102 = (int)MEMORY[0xA8ED84];
        v103 = *(_DWORD *)(v101 + 1600);
        v104 = *(_DWORD *)(v101 + 1608);
        if ( v103 != -1 )
        {
          if ( (int)MEMORY[0xA8ED84] - v103 >= v104 )
            goto LABEL_166;
          v104 -= (int)MEMORY[0xA8ED84] - v103;
        }
        if ( !v104 )
        {
LABEL_166:
          if ( *(_BYTE *)(v101 + 1719) )
          {
            v105 = *(_DWORD *)(v101 + 1640);
            v106 = *(_DWORD *)(v101 + 1648);
            if ( v105 != -1 )
            {
              v102 = (int)MEMORY[0xA8ED84] - v105;
              if ( (int)MEMORY[0xA8ED84] - v105 >= v106 )
              {
LABEL_171:
                v107 = 1;
LABEL_199:
                LOWORD(a4) = *(_DWORD *)(this + 52) / 256;
                HIWORD(a4) = *(_DWORD *)(this + 56) / 256;
                v124 = FootClass::MovementStep(v101, v102, a4, 0, (v107 != 0) + 1, v213);
                v125 = *(_DWORD *)(this + 12);
                if ( !v125 )
                {
                  *a2 = 1;
                  return 0;
                }
                if ( v124 || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v125 + 716))(v125, this + 52) )
                {
                  v126 = MEMORY[0xA8ED84];
                  v127 = (wchar_t *)Math::RoundToInt(*((double *)MEMORY[0x8871E0] + 748) * 900.0);
                  v128 = v230;
                  v129 = (wchar_t **)(*(_DWORD *)(this + 12) + 1600);
                  *v129 = v126;
                  v129[1] = v128;
                  v129[2] = v127;
                  return 1;
                }
                v75 = *(_DWORD **)(this + 12);
LABEL_204:
                (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v75 + 1152))(v75, 0, 1);
                return 0;
              }
              v106 -= v102;
            }
            if ( !v106 )
              goto LABEL_171;
          }
          v107 = 0;
          goto LABEL_199;
        }
        goto LABEL_209;
      }
      if ( LODWORD(v216) != 5 && LODWORD(v216) != 4 )
      {
LABEL_209:
        if ( *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) )
          PlayVocClass(*((_DWORD *)MEMORY[0x8871E0] + 448), 0x2000, 1.0, 0);
        goto LABEL_219;
      }
      if ( !(_BYTE)a3 )
      {
        v220 = 0;
        v221 = 0;
        v130 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
        if ( Object::FindObjectCell(v130, &v220, 0) )
        {
          v220 = 0;
          v221 = 0;
          v131 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
          Object = Object::FindObjectCell(v131, &v220, 0);
          if ( !Object::IsAlliedWithObjectHouse(*(_DWORD **)(*(_DWORD *)(this + 12) + 540), Object) )
          {
            v133 = *(int **)(this + 12);
            v220 = 0;
            v221 = 0;
            v134 = *v133;
            v135 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
            v136 = Object::FindObjectCell(v135, &v220, 0);
            (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(v134 + 500))(*(_DWORD *)(this + 12), 1, v136, 0);
          }
        }
        else if ( *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 17) != -1
               && *(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84]
                             + *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 17))
                           + 680) )
        {
          v137 = **(_DWORD **)(this + 12);
          v138 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
          (*(void (__thiscall **)(_DWORD, int, void *, _DWORD))(v137 + 500))(*(_DWORD *)(this + 12), 1, v138, 0);
        }
LABEL_219:
        if ( LODWORD(v216) != 7 )
        {
          *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0;
          *(_DWORD *)(this + 88) = -1;
          return 1;
        }
        if ( (_BYTE)a3 )
        {
          *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
          v109 = (_DWORD *)(*(_DWORD *)(this + 12) + 1600);
          *v109 = MEMORY[0xA8ED84];
          v110 = v230;
          goto LABEL_329;
        }
        if ( *v96 != MEMORY[0x8A0790]
          || *(_DWORD *)(this + 68) != MEMORY[0x8A0794]
          || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
        {
          *v96 = MEMORY[0x8A0790];
          *(_DWORD *)(this + 68) = MEMORY[0x8A0794];
          *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
          goto LABEL_117;
        }
LABEL_118:
        v75 = *(_DWORD **)(this + 12);
        if ( !v75[358] )
          goto LABEL_119;
        goto LABEL_335;
      }
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
      v109 = (_DWORD *)(*(_DWORD *)(this + 12) + 1600);
      *v109 = MEMORY[0xA8ED84];
      v110 = v230;
LABEL_329:
      v109[1] = v110;
      v109[2] = 0;
      return JumpjetLocomotion::Update(a2, 0, 0);
    }
    if ( v93 != 1 )
      goto LABEL_155;
    v123 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
    CellClass::DamageAllObjects(v123);
    if ( (_BYTE)a3 )
    {
      v208 = a2;
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
      return JumpjetLocomotion::Update(v208, 0, 0);
    }
    if ( *(_DWORD *)(this + 64) == MEMORY[0x8A0790]
      && *(_DWORD *)(this + 68) == MEMORY[0x8A0794]
      && *(_DWORD *)(this + 72) == MEMORY[0x8A0798] )
    {
      goto LABEL_118;
    }
    *(_DWORD *)(this + 64) = MEMORY[0x8A0790];
    *(_DWORD *)(this + 68) = MEMORY[0x8A0794];
    *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
LABEL_117:
    *(_BYTE *)(this + 99) = 0;
    goto LABEL_118;
  }
LABEL_149:
  if ( (int)abs32(v82 - *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 283)) >= 2 )
  {
    v219 = v82;
    v94 = 1;
  }
  else
  {
    v219 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 283);
    v94 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 59);
  }
  v216 = MEMORY[0x89EA40][9 * v94
                        + *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12))
                                    + 1660)];
  if ( v216 > 1.0 )
    v216 = 1.0;
  v139 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
  Coords = CellClass::GetCoords(v139, &v229);
  v141 = Cell::GetGroundHeight(Coords);
  v142 = (_DWORD *)(*(_DWORD *)(this + 12) + 156);
  v226 = (_DWORD *)*v142;
  v227 = (wchar_t *)v142[1];
  v228 = v142[2];
  v143 = Cell::GetGroundHeight(&v226);
  v144 = v141 < v143;
  if ( v141 > v143 )
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(*(_DWORD *)(this + 12)) == 1 )
    {
      if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 1660) == 1 )
        v145 = v216 * *((double *)MEMORY[0x8871E0] + 237);
      else
        v145 = v216 * *((double *)MEMORY[0x8871E0] + 239);
LABEL_241:
      v216 = v145;
      goto LABEL_242;
    }
    v144 = v141 < v143;
  }
  if ( v144 && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(*(_DWORD *)(this + 12)) == 1 )
  {
    if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 1660) == 1 )
      v145 = v216 * *((double *)MEMORY[0x8871E0] + 238);
    else
      v145 = v216 * *((double *)MEMORY[0x8871E0] + 240);
    goto LABEL_241;
  }
LABEL_242:
  if ( v216 == 0.0 )
    v216 = 0.5;
  BuildingClass::GetHealthRatio(*(int **)(this + 12));
  v147 = v216;
  if ( v148 | v149 )
  {
    v147 = v216 * 0.75;
    v216 = v216 * 0.75;
  }
  if ( *(int *)(this + 88) >= 64 )
  {
    v150 = *(double **)(this + 12);
    if ( v147 != v150[175] )
      (*(void (__thiscall **)(double *, _DWORD, _DWORD))(*(_DWORD *)v150 + 1348))(v150, LODWORD(v216), HIDWORD(v216));
  }
  else
  {
    *(double *)(this + 80) = v147;
  }
  v151 = *(_DWORD *)(this + 12);
  LOWORD(v216) = v223 / 256;
  WORD1(v216) = v224 / 256;
  (*(void (__thiscall **)(int, double *, int))(*(_DWORD *)v151 + 1332))(v151, &v216, 1);
  v152 = *(_DWORD **)(this + 12);
  v153 = v152[377];
  if ( v153 == -1 )
  {
    v154 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v152 + 72))(v152, &v229);
    v155 = *(_DWORD *)(this + 56);
    v156 = *v154 - *(_DWORD *)(this + 52);
    v157 = v154[1];
    v158 = v154[2];
    LODWORD(v216) = v156;
    v159 = *(_DWORD *)(this + 60);
    HIDWORD(v216) = v157 - v155;
    v217 = v158 - v159;
    v160 = Math::Sqrt(
             (double)(v158 - v159) * (double)(v158 - v159)
           + (double)(v157 - v155) * (double)(v157 - v155)
           + (double)SLODWORD(v216) * (double)SLODWORD(v216));
    if ( (int)Math::RoundToInt(v160) <= 512 )
    {
LABEL_262:
      v153 = v6;
      goto LABEL_263;
    }
    v161 = *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3220);
    v162 = *(_DWORD *)(this + 12);
    LOWORD(v216) = *(_DWORD *)(this + 52) / 256;
    WORD1(v216) = *(_DWORD *)(this + 56) / 256;
    result = FootClass::MovementStep(v162, v155, SLODWORD(v216), v161 != 0, 0, v213);
    if ( !result )
    {
      v163 = *(_DWORD *)(this + 12);
      if ( !v163 )
      {
        *a2 = 1;
        return result;
      }
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v163 + 716))(v163, this + 52) )
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1152))(*(_DWORD *)(this + 12), 0, 1);
    }
    v153 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1508);
  }
  if ( v153 == 8 )
    v153 = v6;
  if ( v153 == -1 || (_BYTE)a4 )
    goto LABEL_262;
LABEL_263:
  if ( v153 != -1
    && (NeighbourContent = Cell::GetNeighbourContent(v220, v153), (v165 = NeighbourContent) != 0)
    && (v166 = NeighbourContent[17], v166 != -1)
    && ((v167 = *((_DWORD *)MEMORY[0xA83D84] + v166), *(_BYTE *)(v167 + 557))
     || *(_BYTE *)(v167 + 680)
     && *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 1460) == 12
     || *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 1460) == 12
     && CellClass::FindBuilding(v165, 0))
    || v214 )
  {
    v153 = v6;
    *(_BYTE *)(this + 100) = 1;
  }
  else
  {
    *(_BYTE *)(this + 100) = 0;
  }
  v168 = v153 + 8 * v6;
  *(_BYTE *)(this + 96) = 0;
  *(_DWORD *)(this + 88) = v168;
  if ( !byte_7E7B28[12 * v168] )
    *(_DWORD *)(this + 88) = 9 * v6;
  if ( (dword_7E7B30[3 * *(_DWORD *)(this + 88)] & 8) != 0 )
  {
    v211 = *(_DWORD *)(this + 12);
    v169 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
    if ( CrateClass::ProcessPickup(v169, v211) || (v170 = *(_DWORD *)(this + 12), *(_BYTE *)(v170 + 129)) )
    {
      v172 = *(int **)(this + 12);
      if ( !*((_BYTE *)v172 + 144) )
        return 0;
      v173 = v153 & 7;
      v174 = MEMORY[0x89F6DC][2 * v173];
      v223 += MEMORY[0x89F6D8][2 * v173];
      v224 += v174;
      LOWORD(a4) = v223 / 256;
      v209 = v219;
      HIWORD(a4) = v224 / 256;
      v215 = a4;
      v175 = *v172;
      v176 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
      v171 = (*(int (__thiscall **)(_DWORD, void *, unsigned int, int, _DWORD, int))(v175 + 428))(
               *(_DWORD *)(this + 12),
               v176,
               v153,
               v209,
               0,
               1);
      if ( v171 < 7
        && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3220)
        || (v171 == 4 || v171 == 5)
        && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3368)
        && !*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 17) )
      {
        v171 = 0;
      }
    }
    else
    {
      v171 = 7;
      if ( !*(_BYTE *)(v170 + 144) )
        return 0;
    }
    v75 = *(_DWORD **)(this + 12);
    if ( !*((_BYTE *)v75 + 144) )
      return 0;
    if ( v171 )
    {
      v177 = a3;
      switch ( v171 )
      {
        case 3:
          a4 = v215;
          Cell::IsPassableAllied((int)v75, (__int16 *)&a4);
          goto LABEL_293;
        case 2:
          return JumpjetLocomotion::Update(a2, a3, 1);
        case 6:
          if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v75 + 132))(v75) + 3220) )
            goto LABEL_293;
          v178 = *(_DWORD **)(this + 12);
          if ( (_BYTE)v177 )
          {
            v178[376] = -1;
            v109 = (_DWORD *)(*(_DWORD *)(this + 12) + 1600);
            *v109 = MEMORY[0xA8ED84];
            v110 = v230;
            goto LABEL_329;
          }
          v179 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v178 + 72))(v178, &v229);
          v180 = *(_DWORD *)(this + 56);
          v181 = (_DWORD *)(*v179 - *(_DWORD *)(this + 52));
          v182 = v179[1];
          v183 = v179[2];
          v220 = v181;
          v184 = v183 - *(_DWORD *)(this + 60);
          v221 = v182 - v180;
          v222 = v184;
          v185 = Math::Sqrt(
                   (double)(int)v181 * (double)(int)v181
                 + (double)v184 * (double)v184
                 + (double)(v182 - v180) * (double)(v182 - v180));
          if ( (int)Math::RoundToInt(v185) >= *((_DWORD *)MEMORY[0x8871E0] + 1478)
            || (v186 = (_DWORD *)(*(_DWORD *)(this + 12) + 156),
                v226 = (_DWORD *)*v186,
                v227 = (wchar_t *)v186[1],
                v187 = *(_DWORD *)(this + 60) - v186[2],
                (int)((HIDWORD(v187) ^ v187) - HIDWORD(v187)) >= 2 * MEMORY[0x8A07D0])
            || (v226 = (_DWORD *)*v186,
                v227 = (wchar_t *)v186[1],
                v228 = v186[2],
                *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v226) + 59) == 10) )
          {
            v189 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
            if ( (v189[80] & 0x100) == 0
              || (v190 = *(_DWORD **)(this + 12),
                  LOBYTE(a4) = 1,
                  v190 += 39,
                  v191 = *((char *)v189 + 283),
                  v226 = (_DWORD *)*v190,
                  v227 = (wchar_t *)v190[1],
                  v192 = v190[2] / MEMORY[0x8A07D0] - v191,
                  (int)((HIDWORD(v192) ^ v192) - HIDWORD(v192)) <= 2) )
            {
              LOBYTE(a4) = 0;
            }
            Cell::ApplyDamage(v189, (int)&MEMORY[0x8A0790], 1, 1, a4);
LABEL_293:
            *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
            *(_DWORD *)(this + 88) = -1;
            v223 = MEMORY[0x8A0790];
            v224 = MEMORY[0x8A0794];
            v225 = MEMORY[0x8A0798];
            if ( v171 == 5 || v171 == 4 )
              return JumpjetLocomotion::Update(a2, v177, 1);
            goto LABEL_338;
          }
          if ( *(_DWORD *)(this + 64) != MEMORY[0x8A0790]
            || *(_DWORD *)(this + 68) != MEMORY[0x8A0794]
            || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
          {
            *(_DWORD *)(this + 64) = MEMORY[0x8A0790];
            *(_DWORD *)(this + 68) = MEMORY[0x8A0794];
            *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
            *(_BYTE *)(this + 99) = 0;
          }
          v188 = *(_DWORD **)(this + 12);
          if ( !v188[358] )
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v188 + 1152))(v188, 0, 1);
            goto LABEL_293;
          }
          FootClass::ClearPathIndex(v188);
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
                  *(_DWORD *)(this + 12),
                  0,
                  1) )
            goto LABEL_293;
          return 1;
        case 1:
          v193 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
          CellClass::DamageAllObjects(v193);
          if ( (_BYTE)a3 )
          {
            v194 = a2;
            *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
            return JumpjetLocomotion::Update(v194, 0, 0);
          }
          if ( *(_DWORD *)(this + 64) != MEMORY[0x8A0790]
            || *(_DWORD *)(this + 68) != MEMORY[0x8A0794]
            || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
          {
            *(_DWORD *)(this + 64) = MEMORY[0x8A0790];
            *(_DWORD *)(this + 68) = MEMORY[0x8A0794];
            *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
            *(_BYTE *)(this + 99) = 0;
          }
          v75 = *(_DWORD **)(this + 12);
          if ( v75[358] )
            goto LABEL_335;
LABEL_119:
          (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v75 + 1152))(v75, 0, 1);
          return 0;
      }
      if ( v171 != 7 )
        goto LABEL_293;
      if ( (_BYTE)a3 )
      {
        v75[376] = -1;
        v109 = (_DWORD *)(*(_DWORD *)(this + 12) + 1600);
        *v109 = MEMORY[0xA8ED84];
        v110 = v230;
        goto LABEL_329;
      }
      if ( *(_DWORD *)(this + 64) != MEMORY[0x8A0790]
        || *(_DWORD *)(this + 68) != MEMORY[0x8A0794]
        || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
      {
        *(_DWORD *)(this + 64) = MEMORY[0x8A0790];
        *(_DWORD *)(this + 68) = MEMORY[0x8A0794];
        *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
        *(_BYTE *)(this + 99) = 0;
      }
      if ( v75[358] )
      {
LABEL_335:
        FootClass::ClearPathIndex(v75);
        return (*(int (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
                 *(_DWORD *)(this + 12),
                 0,
                 1);
      }
      goto LABEL_204;
    }
    qmemcpy(v75 + 376, v75 + 378, 0x58u);
    *(_DWORD *)(*(_DWORD *)(this + 12) + 1592) = -1;
    *(_BYTE *)(*(_DWORD *)(this + 12) + 1675) = 1;
  }
  else
  {
    qmemcpy((void *)(*(_DWORD *)(this + 12) + 1504), (const void *)(*(_DWORD *)(this + 12) + 1508), 0x5Cu);
  }
LABEL_338:
  v195 = (int *)(this + 64);
  *(_DWORD *)(*(_DWORD *)(this + 12) + 1596) = -1;
  LOWORD(a4) = v223 / 256;
  v196 = *(_DWORD *)(this + 12);
  HIWORD(a4) = v224 / 256;
  *(_DWORD *)(v196 + 1368) = a4;
  *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0;
  *(_DWORD *)(this + 92) = 0;
  v197 = MEMORY[0x8A0790];
  if ( *(_DWORD *)(this + 64) != MEMORY[0x8A0790]
    || *(_DWORD *)(this + 68) != MEMORY[0x8A0794]
    || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
  {
    *v195 = MEMORY[0x8A0790];
    *(_DWORD *)(this + 68) = MEMORY[0x8A0794];
    v198 = MEMORY[0x8A0798];
    *(_BYTE *)(this + 99) = 0;
    *(_DWORD *)(this + 72) = v198;
    v197 = MEMORY[0x8A0790];
  }
  v199 = v223;
  v200 = v225;
  v201 = v223 == v197;
  v202 = v224;
  if ( !v201 || v224 != MEMORY[0x8A0794] || v225 != MEMORY[0x8A0798] )
  {
    *(_BYTE *)(this + 99) = 1;
    *v195 = v199;
    *(_DWORD *)(this + 68) = v202;
    *(_DWORD *)(this + 72) = v200;
    v212 = *(_DWORD *)(this + 12);
    v203 = Coord::To_Cell(&MEMORY[0x87F7E8], &v223);
    if ( CrateClass::ProcessPickup(v203, v212) && !*(_BYTE *)(*(_DWORD *)(this + 12) + 129) )
    {
      JumpjetLocomotion::MoveTo(&v223, 1);
      return 0;
    }
    if ( *(_BYTE *)(*(_DWORD *)(this + 12) + 144) )
    {
      *v195 = MEMORY[0x8A0790];
      *(_DWORD *)(this + 68) = MEMORY[0x8A0794];
      *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
      *(_BYTE *)(this + 99) = 0;
    }
  }
  v204 = *(_DWORD *)(this + 12);
  *(_DWORD *)(this + 88) = -1;
  *(_DWORD *)(v204 + 1504) = -1;
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))(*(_DWORD *)(this + 12), 0, 0);
  return 0;
}



// ==== 0x004B4770  nullsub_118  this=-  sig=ida-proto ====
void nullsub_118()
{
  ; /*0x4b4770*/
}


// ==== 0x004B4780  JumpjetLocomotion::TransformCoords  this=ObjectClass  sig=csp ====
_DWORD *__thiscall JumpjetLocomotion::TransformCoords(_DWORD *this, IUnknown *aP1, IUnknown *aP2, ObjectClass *aP3)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // edx
  int v9; // ecx

  v4 = *(_DWORD *)aP3->__pad_0; /*0x4b478d*/
  v5 = dword_7E7B30[3 * this->q058]; /*0x4b4791*/
  v6 = aP2->field_0; /*0x4b479f*/
  v7 = aP2->field_4; /*0x4b47a1*/
  if ( (v5 & 1) != 0 ) /*0x4b47a4*/
  {
    v6 = aP2->field_4; /*0x4b47a8*/
    v7 = aP2->field_0; /*0x4b47aa*/
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
  *(_DWORD *)aP3->__pad_0 = v4; /*0x4b47df*/
  v8 = this->q040; /*0x4b47e2*/
  v9 = this->q044; /*0x4b47e5*/
  aP1->field_0 = v6 + v8; /*0x4b47f2*/
  aP1->field_4 = v7 + v9; /*0x4b47f5*/
  return &aP1->field_0; /*0x4b47f0*/
}


// ==== 0x004B4820  DriveLocomotionClass::StubReturnTwo  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4B4820(int a1)
{
  return 2; /*0x4b4825*/
}


// ==== 0x004B4830  DriveLocomotionClass::ddtor  this=DriveLocomotionClass  sig=csp ====
int __stdcall DriveLocomotionClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x4b4836*/
    return -2147467261; /*0x4b4838*/
  *a2 = 1247291201; /*0x4b4846*/
  a2[1] = 298948665; /*0x4b484e*/
  a2[2] = -1610610249; /*0x4b4857*/
  a2[3] = -777003740; /*0x4b4860*/
  return 0; /*0x4b483d*/
}


// ==== 0x004B4870  DriveLocomotionClass::StubReturnZero_1  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4B4870(int a1)
{
  return 0; /*0x4b4872*/
}


// ==== 0x004B4880  DriveLocomotionClass::DispatchCheckState  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchCheckState(TunnelLocomotionClass *aP0)
{
  return JumpjetLocomotionClass::CheckState(aP0); /*0x4b488a*/
}


// ==== 0x004B48D0  DriveLocomotionClass::MoveToChecked  this=DriveLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::MoveToChecked(DriveLocomotionClass *aP0, int a2)
{
  char result; // al

  result = (_BYTE)aP0 + 60; /*0x4b48de*/
  if ( aP0->Dest[2] != *(_DWORD *)&stru_89E138.__pad_14B0[4520] /*0x4b48fd*/
    || aP0->HeadToCoord[0] != *(_DWORD *)&stru_89E138.__pad_14B0[4524]
    || aP0->HeadToCoord[1] != *(_DWORD *)&stru_89E138.__pad_14B0[4528] )
  {
    return JumpjetLocomotion::MoveTo((int)&aP0[-1].Piggybackee, (IUnknown *)&aP0->Dest[2], a2); /*0x4b4908*/
  }
  return result; /*0x4b490d*/
}


// ==== 0x004B4920  DriveLocomotionClass::IsAtDestination  this=DriveLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_4B4920(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int *v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int *v13; // eax
  int v14; // edx
  int *v15; // eax
  int v16; // ebx
  int v17; // ebp
  _DWORD *v18; // eax
  int v20[2]; // [esp+Ch] [ebp-20h] BYREF
  _DWORD v21[2]; // [esp+14h] [ebp-18h] BYREF
  int v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+20h] [ebp-Ch]
  int v24; // [esp+24h] [ebp-8h]
  unsigned int v25; // [esp+28h] [ebp-4h]

  v4 = a1; /*0x4b4925*/
  v5 = (int *)(*(int (__stdcall **)(int, _DWORD *))(*(_DWORD *)a1 + 24))(a1, v21); /*0x4b4932*/
  v6 = *v5; /*0x4b4935*/
  v7 = v5[1]; /*0x4b4937*/
  v8 = v5[2]; /*0x4b4940*/
  v23 = v6; /*0x4b4945*/
  v24 = v7; /*0x4b4949*/
  v25 = v8; /*0x4b494d*/
  if ( v6 == MEMORY[0x8A0790] && __PAIR64__(v8, v7) == MEMORY[0x8A0794] ) /*0x4b4959*/
    return 0; /*0x4b4959*/
  if ( !*(_BYTE *)(v4 + 92) ) /*0x4b4967*/
  {
    v9 = *(_DWORD *)(v4 + 84); /*0x4b4972*/
    if ( v9 != -1 ) /*0x4b4978*/
    {
      v10 = byte_7E7B28[12 * v9]; /*0x4b4981*/
      if ( v10 ) /*0x4b498b*/
      {
        v11 = 4 * v10; /*0x4b4991*/
        v12 = dword_7E7A34[v11]; /*0x4b4994*/
        if ( v12 > -1 ) /*0x4b49a3*/
        {
          v13 = (int *)(dword_7E7A28[v11] + 12 * v12); /*0x4b49ac*/
          a1 = v13[2]; /*0x4b49b2*/
          if ( *(_DWORD *)(v4 + 88) < v12 ) /*0x4b49bb*/
          {
            v14 = v13[1]; /*0x4b49c3*/
            v20[0] = *v13; /*0x4b49c6*/
            v20[1] = v14; /*0x4b49cf*/
            v15 = JumpjetLocomotion::TransformCoords((_DWORD *)(v4 - 4), v21, v20, &a1); /*0x4b49e1*/
            v16 = *v15; /*0x4b49e6*/
            v17 = v15[1]; /*0x4b49e8*/
            v18 = (_DWORD *)(*(_DWORD *)(v4 + 8) + 156); /*0x4b49ee*/
            v21[0] = *v18; /*0x4b49f5*/
            v21[1] = v18[1]; /*0x4b49fc*/
            v22 = v18[2]; /*0x4b4a03*/
            if ( (unsigned __int16)(v16 / 256) == (unsigned __int16)(a2 / 256) /*0x4b4a6b*/
              && (unsigned __int16)(v17 / 256) == (unsigned __int16)(a3 / 256)
              && (int)abs32(v22 - a4) <= MEMORY[0x8A07D0] )
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
      && (int)abs32(v25 - a4) <= MEMORY[0x8A07D0];
}


// ==== 0x004B4B00  DriveLocomotionClass::StubReturnZero_2  this=DriveLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_4B4B00(unsigned int a1)
{
  unsigned int v1; // edi
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  __int16 v5; // bx
  int v6; // edx
  __int16 v7; // dx
  char v8; // al

  v1 = a1; /*0x4b4b02*/
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 1504); /*0x4b4b09*/
  if ( v2 < -1 || v2 > 8 ) /*0x4b4b1b*/
    return 0; /*0x4b4b1b*/
  v3 = 12 * *(_DWORD *)(a1 + 84) + 8289064; /*0x4b4b2c*/
  v4 = *(_BYTE *)(a1 + 92) ? (char)algn_7E7B29[12 * *(_DWORD *)(a1 + 84)] : byte_7E7B28[12 * *(_DWORD *)(a1 + 84)];
  if ( v2 == 8 ) /*0x4b4b43*/
    return 0; /*0x4b4b43*/
  if ( v2 == -1 ) /*0x4b4b4c*/
    return 0; /*0x4b4b4c*/
  LOBYTE(v5) = 0; /*0x4b4b53*/
  HIBYTE(v5) = algn_7E7B29[12 * *(_DWORD *)(a1 + 84) + 3]; /*0x4b4b55*/
  LOWORD(a1) = v5; /*0x4b4b58*/
  if ( ((((a1 >> 12) + 1) >> 1) & 7) == v2 ) /*0x4b4b78*/
    return 0; /*0x4b4b78*/
  v6 = *(_DWORD *)(v1 + 88); /*0x4b4b7a*/
  if ( dword_7E7A2C[4 * v4] == v6 /*0x4b4bc1*/
    && v6
    && (LOBYTE(v7) = 0,
        HIBYTE(v7) = *(_BYTE *)(v3 + 4),
        LOWORD(a1) = v7,
        (v8 = byte_7E7B28[96 * ((((a1 >> 12) + 1) >> 1) & 7) + 12 * v2]) != 0)
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
int __stdcall JumpjetLocomotionClass::sub_4B4BE0(int a1)
{
  *(_BYTE *)(a1 + 97) = 0; /*0x4b4be4*/
  return a1; /*0x4b4be8*/
}


// ==== 0x004B4BF0  DriveLocomotionClass::SetByteField_0  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4B4BF0(int a1)
{
  *(_BYTE *)(a1 + 97) = 1; /*0x4b4bf4*/
  return a1; /*0x4b4bf8*/
}


// ==== 0x004B4C00  DriveLocomotionClass::GetField_0x54  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4B4C00(int a1)
{
  return *(_DWORD *)(a1 + 84); /*0x4b4c07*/
}


// ==== 0x004B4C10  DriveLocomotionClass::GetField_0x58  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4B4C10(int a1)
{
  return *(_DWORD *)(a1 + 88); /*0x4b4c17*/
}


// ==== 0x004B4C20  DriveLocomotionClass::GetField_0x48  this=DriveLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4B4C20(int a1)
{
  return *(_DWORD *)(a1 + 72); /*0x4b4c27*/
}


// ==== 0x004B4C30  IUnknown::IsInactive  this=IUnknown  sig=csp ====
BOOL __stdcall StreamClass::IsInactive(IUnknown *aP0)
{
  return aP0->__pad_10[1] == 0; /*0x4b4c3e*/
}


// ==== 0x004B4C50  IUnknown::Vt32Thunk  this=IUnknown  sig=csp ====
int __stdcall StreamClass_Vt32Thunk(int a1)
{
  return (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 128))(a1); /*0x4b4c5d*/
}


// ==== 0x004B4C60  IUnknown::MissionStub6  this=IUnknown  sig=csp ====
int __stdcall NullStub_4b4c60(int a1)
{
  return 0; /*0x4b4c62*/
}


// ==== 0x004B4C70  IUnknown::Stub3  this=IUnknown  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub3(int a1)
{
  ; /*0x4b4c70*/
}


// ==== 0x004B4C80  IUnknown::MissionStub7  this=IUnknown  sig=csp ====
char __stdcall NullStub_4b4c80(int a1)
{
  return 0; /*0x4b4c82*/
}


// ==== 0x004B4C90  IUnknown::Stub4  this=IUnknown  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub4(int a1)
{
  ; /*0x4b4c90*/
}


// ==== 0x004B4CA0  IUnknown::Stub5  this=IUnknown  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub5(int a1)
{
  ; /*0x4b4ca0*/
}


// ==== 0x004B4CB0  DriveLocomotionClass::AddRef  this=DriveLocomotionClass  sig=csp ====
LONG __stdcall DriveLocomotionClass::_vt01(int a1)
{
  return COM::AddRef(a1); /*0x4b4cba*/
}


// ==== 0x004B4CC0  DriveLocomotionClass::Release  this=DriveLocomotionClass  sig=csp ====
LONG __stdcall DriveLocomotionClass::_vt02(volatile LONG *a1)
{
  return COM::ReleaseRef(a1); /*0x4b4cca*/
}


// ==== 0x004B4CD0  JumpjetLocomotionClass::GetLinkedLocomotorPointer  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_4B4CD0(int a1)
{
  return *(_DWORD *)(a1 + 80) != 0; /*0x4b4cde*/
}


// ==== 0x004B4CF0  DriveLocomotionClass::StubReturn112  this=DriveLocomotionClass  sig=csp ====
int DriveLocomotionClass::_vt09()
{
  return 112; /*0x4b4cf5*/
}


// ==== 0x004B4D00  DriveLocomotionClass::ProcessMove  this=DriveLocomotionClass  sig=csp ====
DriveLocomotionClass *__thiscall DriveLocomotionClass::ProcessMove(ILocomotion **Block, char a2)
{
  ILocomotion *v3; // eax

  *Block = (ILocomotion *)&DriveLocomotionClass::`vftable'; /*0x4b4d03*/
  *(Block + 1) = (ILocomotion *)&vt_DriveLocomotionClass; /*0x4b4d09*/
  *(Block + 6) = (ILocomotion *)&off_7E7E8C; /*0x4b4d10*/
  v3 = *(Block + 26); /*0x4b4d17*/
  if ( v3 ) /*0x4b4d1c*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)v3 + 8))(v3); /*0x4b4d21*/
  LocomotionClass::Construct(Block); /*0x4b4d26*/
  if ( (a2 & 1) != 0 ) /*0x4b4d30*/
    __3_YAXPAX_Z(Block); /*0x4b4d33*/
  return (DriveLocomotionClass *)Block; /*0x4b4d3d*/
}


// ==== 0x004B4D50  ComPtr::Release_Alt  this=ComPtr  sig=csp ====
int __thiscall ComPtr_Release_Alt(int *this)
{
  int result; // eax

  result = *this; /*0x4b4d50*/
  if ( *this ) /*0x4b4d50*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x4b4d59*/
  return result; /*0x4b4d5c*/
}


// ==== 0x004B4D60  Function::4B4D60  this=Function  sig=csp ====
int __thiscall MiniStub_4b4d60(int *this)
{
  int result; // eax

  result = *this; /*0x4b4d60*/
  if ( *this ) /*0x4b4d60*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x4b4d69*/
  return result; /*0x4b4d6c*/
}


// ==== 0x004B4D70  Timeout::GetRemaining  this=Timeout  sig=csp ====
int __thiscall Timeout_GetRemaining(int *this)
{
  int v1; // edx
  int result; // eax

  v1 = *this; /*0x4b4d70*/
  result = this->q008; /*0x4b4d72*/
  if ( *this != -1 ) /*0x4b4d78*/
  {
    if ( (int)MEMORY[0xA8ED84] - v1 >= result ) /*0x4b4d84*/
      return 0; /*0x4b4d89*/
    else
      result -= (int)MEMORY[0xA8ED84] - v1; /*0x4b4d86*/
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
  MEMORY[0x8A07D8] = 0; /*0x4b4df2*/
  MEMORY[0x8A07DC] = 0; /*0x4b4df7*/
  MEMORY[0x8A07E0] = 0; /*0x4b4dfc*/
  MEMORY[0x8A07E4] = 0; /*0x4b4e01*/
  return 0; /*0x4b4e06*/
}


// ==== 0x004B4E10  DropListClass::method_4B4E10  this=DropListClass  sig=csp ====
DropListClass *__thiscall sub_4B4E10(
        int this,
        DropListClass *aP1,
        wchar_t *String,
        int a4,
        DropListClass *aP4,
        ControlClass *aP5,
        ControlClass *aP6,
        ControlClass *aP7,
        int a9,
        ListClass *a10,
        int a11)
{
  AbstractClass *Instance; // eax
  int v13; // edx

  sub_4C2FC0((int *)this, aP1, (ControlClass *)String, a4, aP4, aP5, aP6, aP7, 18, 7); /*0x4b4e3f*/
  *(_BYTE *)(this + 72) = 0; /*0x4b4e62*/
  *(_DWORD *)(this + 76) = a9; /*0x4b4e66*/
  ShapeButtonClass::Constructor((_BYTE *)(this + 80), 0, a11, (int)&aP5->__pad_0[(_DWORD)aP7], (int)aP6, 0, 0, 0); /*0x4b4e69*/
  ListClass::Construct( /*0x4b4ea3*/
    this + 176,
    0,
    (int)aP5,
    (int)&aP6->__pad_0[*(__int16 *)(a11 + 4)],
    (ListClass *)&aP7->__pad_0[*(__int16 *)(a11 + 2)],
    a9,
    (ControlClass *)aP4,
    a10,
    a11);
  *(_DWORD *)this = &vt_DropListClass; /*0x4b4eac*/
  Instance = TextRenderer::GetInstance(); /*0x4b4eb2*/
  v13 = *(_DWORD *)(this + 176); /*0x4b4eba*/
  *(_DWORD *)(this + 24) = Instance->referenceCount + 1; /*0x4b4ebf*/
  (*(void (__thiscall **)(int, int))(v13 + 132))(this + 176, this); /*0x4b4ec4*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 80) + 132))(this + 80, this); /*0x4b4ecf*/
  return (DropListClass *)this; /*0x4b4ed7*/
}


// ==== 0x004B4EE0  DropListClass::OnClick  this=DropListClass  sig=csp ====
int __thiscall DropListClass::_vt08(int this)
{
  if ( *(_BYTE *)(this + 72) ) /*0x4b4ee3*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 176) + 36))(this + 176); /*0x4b4ef6*/
    *(_BYTE *)(this + 72) = 0; /*0x4b4ef9*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 176) + 32))(this + 176); /*0x4b4f09*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 80) + 32))(this + 80); /*0x4b4f12*/
  return Hash::Reset((_DWORD *)this); /*0x4b4f1c*/
}


// ==== 0x004B4F20  DropListClass::?  this=DropListClass  sig=csp ====
int __thiscall DropListClass::_vt03(_DWORD *this, int a2)
{
  (*(void (__thiscall **)(_DWORD *, int))(this->DropListClass_field_0x50 + 12))(this + 20, a2); /*0x4b4f2f*/
  return LinkedList::InsertAfter(this, a2); /*0x4b4f3a*/
}


// ==== 0x004B4F40  DropListClass::Draw  this=DropListClass  sig=csp ====
int __thiscall DropListClass::_vt04(_DWORD *this, int a2)
{
  (*(void (__thiscall **)(_DWORD *, int))(this->DropListClass_field_0x50 + 16))(this + 20, a2); /*0x4b4f4f*/
  return LinkedList::Append(this, a2); /*0x4b4f5a*/
}


// ==== 0x004B4F60  DropListClass::HitTest  this=DropListClass  sig=csp ====
_DWORD *__thiscall DropListClass::_vt05(_DWORD *this, int a2)
{
  (*(void (__thiscall **)(_DWORD *, int))(this->DropListClass_field_0x50 + 20))(this + 20, a2); /*0x4b4f6f*/
  return LinkedList::Attach(this, a2); /*0x4b4f7a*/
}


// ==== 0x004B4F80  DropListClass::OnDblClick  this=DropListClass  sig=csp ====
int __thiscall DropListClass::_vt09(int this)
{
  if ( *(_BYTE *)(this + 72) ) /*0x4b4f83*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 176) + 36))(this + 176); /*0x4b4f96*/
    *(_BYTE *)(this + 72) = 0; /*0x4b4f99*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 80) + 36))(this + 80); /*0x4b4fa3*/
  return LinkClass::Destroy((_DWORD *)this); /*0x4b4fad*/
}


// ==== 0x004B4FB0  DropListClass::SetFocus  this=DropListClass  sig=csp ====
int __thiscall DropListClass::_vt39(void *this, wchar_t *Source)
{
  wcsncpy(*((wchar_t **)this + 13), Source, this->DropListClass_field_0x38); /*0x4b4fc1*/
  (*(void (__thiscall **)(void *))(this->DropListClass_field_0x48)(this); /*0x4b4fcd*/
  return (*(int (__thiscall **)(int, wchar_t *))(this->DropListClass_field_0x2C + 136))((int)this + 176, Source); /*0x4b4fe3*/
}


// ==== 0x004B4FF0  DropListClass::KillFocus  this=DropListClass  sig=csp ====
int __thiscall DropListClass::_vt40(_DWORD *this)
{
  return (*(int (__thiscall **)(_DWORD *))(this->List + 156))(this + 44);
}


// ==== 0x004B5010  DropListClass::GetItemData  this=DropListClass  sig=csp ====
int __thiscall DropListClass::_vt41(_DWORD *this)
{
  return (*(int (__thiscall **)(_DWORD *))(this->List + 152))(this + 44);
}


// ==== 0x004B5030  DropListClass::OnKeyUp  this=DropListClass  sig=csp ====
wchar_t *__userpurge DropListClass::_vt43@<eax>(int a1@<ecx>, int a2@<ebx>, unsigned int a3)
{
  int *v4; // esi
  wchar_t *result; // eax
  int v6; // ebx
  int v7; // eax
  const wchar_t *v8; // eax

  v4 = (int *)(a1 + 176); /*0x4b503a*/
  result = (wchar_t *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 176) + 148))(a1 + 176); /*0x4b5042*/
  if ( a3 >= (unsigned int)result ) /*0x4b504e*/
  {
    **(_WORD **)(a1 + 52) = 0; /*0x4b5089*/
  }
  else
  {
    (*(void (__thiscall **)(int *, unsigned int, int))(*v4 + 184))(v4, a3, a2); /*0x4b5056*/
    v6 = *v4; /*0x4b505e*/
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 164))(a1); /*0x4b5062*/
    v8 = (const wchar_t *)(*(int (__thiscall **)(int *, int))(v6 + 160))(v4, v7); /*0x4b506b*/
    return wcscpy(*(wchar_t **)(a1 + 52), v8); /*0x4b5076*/
  }
  return result; /*0x4b507f*/
}


// ==== 0x004B50A0  DropListClass::AddItem  this=DropListClass  sig=csp ====
char __thiscall DropListClass::_vt21(int this)
{
  char result; // al

  result = *(_BYTE *)(this + 72); /*0x4b50a3*/
  if ( result ) /*0x4b50a8*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 176) + 36))(this + 176); /*0x4b50b6*/
    *(_BYTE *)(this + 72) = 0; /*0x4b50b9*/
  }
  return result; /*0x4b50bd*/
}


// ==== 0x004B50C0  DropListClass::Open  this=DropListClass  sig=csp ====
__int16 __thiscall DropListClass::_vt19(char *this, char a2, _DWORD *a3, char *a4)
{
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  const wchar_t *v13; // eax
  size_t v15; // [esp-4h] [ebp-Ch]

  if ( a4 == this + 80 && (a2 & 4) != 0 ) /*0x4b50d8*/
  {
    if ( this->DropListClass_field_0x48 ) /*0x4b50da*/
    {
      (*(void (__thiscall **)(char *))(this->DropListClass_field_0x2C + 36))(this + 176); /*0x4b50ed*/
      v5 = this->DropListClass_field_0x24; /*0x4b50f0*/
      this->DropListClass_field_0x48 = 0; /*0x4b50f3*/
      BYTE1(v5) |= 0x80u; /*0x4b50f7*/
      *a3 = v5; /*0x4b50fa*/
    }
    else
    {
      v6 = this->DropListClass_field_0x04; /*0x4b5101*/
      v7 = this->q005; /*0x4b5104*/
      v8 = this->DropListClass_field_0x2C; /*0x4b5108*/
      this->q0BC = this->DropListClass_field_0x0C; /*0x4b510e*/
      v9 = this->DropListClass_field_0x4C; /*0x4b5114*/
      this->DropListClass_field_0x30 = v6 + 18; /*0x4b511b*/
      v10 = *(_DWORD *)this; /*0x4b5121*/
      this->q0C8 = v9; /*0x4b5129*/
      this->q0C4 = v7; /*0x4b5131*/
      v11 = (*(int (__thiscall **)(char *))(v10 + 24))(this); /*0x4b5137*/
      (*(void (__thiscall **)(char *, int))(v8 + 12))(this + 176, v11); /*0x4b513d*/
      (*(void (__thiscall **)(char *))(this->DropListClass_field_0x2C + 72))(this + 176); /*0x4b5144*/
      this->DropListClass_field_0x48 = 1; /*0x4b5148*/
    }
  }
  LOWORD(v12) = (_WORD)a4; /*0x4b514d*/
  if ( a4 == this + 176 ) /*0x4b5159*/
  {
    v15 = this->DropListClass_field_0x38; /*0x4b5160*/
    v13 = (const wchar_t *)(*(int (__thiscall **)(char *))(this->DropListClass_field_0x2C + 156))(this + 176); /*0x4b5161*/
    wcsncpy(*((wchar_t **)this + 13), v13, v15); /*0x4b516c*/
    (*(void (__thiscall **)(char *))(this->DropListClass_field_0x48)(this); /*0x4b5178*/
    v12 = this->DropListClass_field_0x24; /*0x4b517b*/
    BYTE1(v12) |= 0x80u; /*0x4b517e*/
    *a3 = v12; /*0x4b5181*/
  }
  return v12; /*0x4b5183*/
}


// ==== 0x004B5210  TechnoClass::CopyStateFrom  this=TechnoClass  sig=csp ====
int __thiscall sub_4B5210(int this, int a2)
{
  if ( this == a2 ) /*0x4b521a*/
    return this; /*0x4b521c*/
  LinkedList::MoveNode((void *)this, (void *)a2); /*0x4b5228*/
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12); /*0x4b5236*/
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16); /*0x4b523c*/
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20); /*0x4b5242*/
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24); /*0x4b5248*/
  *(_BYTE *)(this + 28) = *(_BYTE *)(a2 + 28); /*0x4b524e*/
  *(_BYTE *)(this + 29) = *(_BYTE *)(a2 + 29); /*0x4b5254*/
  *(_BYTE *)(this + 30) = *(_BYTE *)(a2 + 30); /*0x4b525a*/
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32); /*0x4b5260*/
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 36); /*0x4b5266*/
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40); /*0x4b526c*/
  *(_DWORD *)(this + 44) = *(_DWORD *)(a2 + 44); /*0x4b5272*/
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48); /*0x4b5278*/
  *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52); /*0x4b527e*/
  *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56); /*0x4b5284*/
  *(_DWORD *)(this + 60) = *(_DWORD *)(a2 + 60); /*0x4b528a*/
  *(_DWORD *)(this + 64) = *(_DWORD *)(a2 + 64); /*0x4b5290*/
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68); /*0x4b529c*/
  sub_4B5780(this + 176, a2 + 176); /*0x4b52a2*/
  *(_DWORD *)(this + 212) = *(_DWORD *)(a2 + 212); /*0x4b52aa*/
  *(_DWORD *)(this + 216) = *(_DWORD *)(a2 + 216); /*0x4b52b0*/
  *(_DWORD *)(this + 220) = *(_DWORD *)(a2 + 220); /*0x4b52b6*/
  *(_DWORD *)(this + 224) = *(_DWORD *)(a2 + 224); /*0x4b52c3*/
  sub_4B5830((_DWORD *)(this + 228), (_DWORD *)(a2 + 228)); /*0x4b52c6*/
  *(_DWORD *)(this + 244) = *(_DWORD *)(a2 + 244); /*0x4b52ce*/
  *(_DWORD *)(this + 248) = *(_DWORD *)(a2 + 248); /*0x4b52d4*/
  *(_DWORD *)(this + 252) = *(_DWORD *)(a2 + 252); /*0x4b52da*/
  *(_DWORD *)(this + 256) = *(_DWORD *)(a2 + 256); /*0x4b52e0*/
  *(_BYTE *)(this + 260) = *(_BYTE *)(a2 + 260); /*0x4b52e9*/
  BlitterList::CopyEntry(this + 264, a2 + 264); /*0x4b52f0*/
  BlitterList::CopyEntry(this + 360, a2 + 360); /*0x4b5302*/
  sub_4B56E0(this + 456, a2 + 456); /*0x4b5314*/
  *(_DWORD *)(this + 540) = *(_DWORD *)(a2 + 540); /*0x4b531f*/
  *(_DWORD *)(this + 544) = *(_DWORD *)(a2 + 544); /*0x4b532b*/
  *(_BYTE *)(this + 72) = *(_BYTE *)(a2 + 72); /*0x4b5334*/
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76); /*0x4b5343*/
  sub_4B5780(this + 80, a2 + 80); /*0x4b5346*/
  *(_DWORD *)(this + 116) = *(_DWORD *)(a2 + 116); /*0x4b534f*/
  *(_DWORD *)(this + 120) = *(_DWORD *)(a2 + 120); /*0x4b5355*/
  *(_BYTE *)(this + 124) = *(_BYTE *)(a2 + 124); /*0x4b535b*/
  *(_BYTE *)(this + 125) = *(_BYTE *)(a2 + 125); /*0x4b5361*/
  *(_DWORD *)(this + 128) = *(_DWORD *)(a2 + 128); /*0x4b5367*/
  *(_BYTE *)(this + 132) = *(_BYTE *)(a2 + 132); /*0x4b536d*/
  *(_DWORD *)(this + 136) = *(_DWORD *)(a2 + 136); /*0x4b5373*/
  *(_DWORD *)(this + 140) = *(_DWORD *)(a2 + 140); /*0x4b5379*/
  *(_BYTE *)(this + 144) = *(_BYTE *)(a2 + 144); /*0x4b537f*/
  *(_DWORD *)(this + 148) = *(_DWORD *)(a2 + 148); /*0x4b5385*/
  *(_DWORD *)(this + 152) = *(_DWORD *)(a2 + 152); /*0x4b538b*/
  *(_BYTE *)(this + 156) = *(_BYTE *)(a2 + 156); /*0x4b5391*/
  *(_DWORD *)(this + 160) = *(_DWORD *)(a2 + 160); /*0x4b5397*/
  *(_BYTE *)(this + 164) = *(_BYTE *)(a2 + 164); /*0x4b539d*/
  *(_BYTE *)(this + 165) = *(_BYTE *)(a2 + 165); /*0x4b53a3*/
  *(_DWORD *)(this + 168) = *(_DWORD *)(a2 + 168); /*0x4b53a9*/
  *(_BYTE *)(this + 172) = *(_BYTE *)(a2 + 172); /*0x4b53af*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 176) + 132))(this + 176, this); /*0x4b53b7*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 80) + 132))(this + 80, this); /*0x4b53c2*/
  return this; /*0x4b521e*/
}


// ==== 0x004B53E0  EditClass::method_4B53E0  this=EditClass  sig=csp ====
int __thiscall sub_4B53E0(int this, int a2)
{
  int v3; // eax

  ControlClass::CtorFromData((_DWORD *)this, a2); /*0x4b53eb*/
  *(_DWORD *)(this + 44) = *(_DWORD *)(a2 + 44); /*0x4b53f6*/
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48); /*0x4b53fc*/
  *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52); /*0x4b5402*/
  *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56); /*0x4b5408*/
  *(_DWORD *)(this + 60) = *(_DWORD *)(a2 + 60); /*0x4b540e*/
  *(_DWORD *)(this + 64) = *(_DWORD *)(a2 + 64); /*0x4b5414*/
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68); /*0x4b541a*/
  *(_DWORD *)this = &vt_EditClass; /*0x4b541d*/
  *(_BYTE *)(this + 72) = *(_BYTE *)(a2 + 72); /*0x4b5429*/
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76); /*0x4b5432*/
  ControlClass::CtorFromData((_DWORD *)(this + 80), a2 + 80); /*0x4b5435*/
  *(_BYTE *)(this + 124) = *(_BYTE *)(a2 + 124); /*0x4b5443*/
  *(_BYTE *)(this + 125) = *(_BYTE *)(a2 + 125); /*0x4b5449*/
  *(_DWORD *)(this + 128) = *(_DWORD *)(a2 + 128); /*0x4b544f*/
  *(_DWORD *)(this + 80) = &vt_ToggleClass; /*0x4b5452*/
  *(_BYTE *)(this + 132) = *(_BYTE *)(a2 + 132); /*0x4b545c*/
  *(_DWORD *)(this + 136) = *(_DWORD *)(a2 + 136); /*0x4b5462*/
  *(_DWORD *)(this + 140) = *(_DWORD *)(a2 + 140); /*0x4b5468*/
  *(_BYTE *)(this + 144) = *(_BYTE *)(a2 + 144); /*0x4b546e*/
  *(_DWORD *)(this + 148) = *(_DWORD *)(a2 + 148); /*0x4b5474*/
  *(_DWORD *)(this + 152) = *(_DWORD *)(a2 + 152); /*0x4b547a*/
  *(_BYTE *)(this + 156) = *(_BYTE *)(a2 + 156); /*0x4b5480*/
  *(_DWORD *)(this + 160) = *(_DWORD *)(a2 + 160); /*0x4b5486*/
  *(_BYTE *)(this + 164) = *(_BYTE *)(a2 + 164); /*0x4b548c*/
  *(_BYTE *)(this + 165) = *(_BYTE *)(a2 + 165); /*0x4b5492*/
  *(_DWORD *)(this + 168) = *(_DWORD *)(a2 + 168); /*0x4b5498*/
  *(_BYTE *)(this + 172) = *(_BYTE *)(a2 + 172); /*0x4b54a4*/
  *(_DWORD *)(this + 80) = &vt_ShapeButtonClass; /*0x4b54a9*/
  sub_557380(this + 176, a2 + 176); /*0x4b54af*/
  v3 = *(_DWORD *)(this + 176); /*0x4b54b4*/
  *(_DWORD *)this = &vt_DropListClass; /*0x4b54b9*/
  (*(void (__thiscall **)(int, int))(v3 + 132))(this + 176, this); /*0x4b54bf*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 80) + 132))(this + 80, this); /*0x4b54ca*/
  return this; /*0x4b54d3*/
}


// ==== 0x004B54E0  DropListClass::RemoveItem  this=DropListClass  sig=csp ====
int __thiscall DropListClass::RemoveItem(_DWORD *this, SBGadgetClass_SidebarClass *aP1, int aP2)
{
  Rect_Point::Set(this, (GadgetClass *)aP1, (GadgetClass *)aP2); /*0x4b54ef*/
  (*(void (__thiscall **)(_DWORD *, SBGadgetClass_SidebarClass *, int))(this->List + 100))( /*0x4b550e*/
    this + 44,
    aP1,
    aP2 + *(__int16 *)(this->q0A8 + 4));
  return (*(int (__thiscall **)(_DWORD *, char *, int))(this->DropListClass_field_0x50 + 100))(this + 20, (char *)aP1 + this->DropListClass_field_0x14, aP2); /*0x4b5521*/
}


// ==== 0x004B5530  DropListClass::OnKeyDown  this=DropListClass  sig=csp ====
void __thiscall DropListClass::_vt42(_DWORD *this, wchar_t *String1)
{
  int v3; // edi
  const wchar_t *v4; // eax

  if ( String1 ) /*0x4b553c*/
  {
    v3 = 0; /*0x4b5540*/
    if ( (*(int (__thiscall **)(_DWORD *))(*this + 176))(this) > 0 ) /*0x4b554a*/
    {
      while ( 1 ) /*0x4b5557*/
      {
        v4 = (const wchar_t *)(*(int (__thiscall **)(_DWORD *, int))(this->List + 160))(this + 44, v3); /*0x4b5557*/
        if ( !_wcsicmp(String1, v4) ) /*0x4b555f*/
          break; /*0x4b555f*/
        if ( ++v3 >= (*(int (__thiscall **)(_DWORD *))(*this + 176))(this) ) /*0x4b5578*/
          return; /*0x4b5578*/
      }
      (*(void (__thiscall **)(_DWORD *, int))(*this + 172))(this, v3); /*0x4b5586*/
    }
  }
}


// ==== 0x004B55A0  EditClass::COMStub  this=EditClass  sig=csp ====
int __thiscall DropListClass::_vt35(_DWORD *this)
{
  return this->q034; /*0x4b55a3*/
}


// ==== 0x004B55B0  DropListClass::ScrollUp  this=DropListClass  sig=csp ====
int __thiscall DropListClass::_vt44(_DWORD *this)
{
  return (*(int (__thiscall **)(_DWORD *))(this->List + 148))(this + 44);
}


// ==== 0x004B55D0  DropListClass::ScrollDown  this=DropListClass  sig=csp ====
int __thiscall DropListClass::_vt45(_DWORD *this, int a2)
{
  return (*(int (__thiscall **)(_DWORD *, int))(this->List + 160))(this + 44, a2); /*0x4b55e7*/
}


// ==== 0x004B55F0  DropListClass::QueryInterface  this=DropListClass  sig=csp ====
DropListClass *__thiscall DropListClass::QueryInterface(_DWORD *Block, char a2)
{
  *Block = &vt_DropListClass; /*0x4b55f9*/
  ListClass::Destruct(Block + 44); /*0x4b55ff*/
  ShapeButtonClass::Destructor((int)(Block + 20)); /*0x4b5607*/
  DropListClass::Constructor(Block); /*0x4b560e*/
  if ( (a2 & 1) != 0 ) /*0x4b5618*/
    __3_YAXPAX_Z(Block); /*0x4b561b*/
  return (DropListClass *)Block; /*0x4b5625*/
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
EditClass *__thiscall EditClass::QueryInterface(_DWORD *Block, char a2)
{
  DropListClass::Constructor(Block); /*0x4b57d3*/
  if ( (a2 & 1) != 0 ) /*0x4b57dd*/
    __3_YAXPAX_Z(Block); /*0x4b57e0*/
  return (EditClass *)Block; /*0x4b57ea*/
}


// ==== 0x004B57F0  ShapeButtonClass::QueryInterface  this=ShapeButtonClass  sig=csp ====
ShapeButtonClass *__thiscall ShapeButtonClass_Destru::QueryInterface(void *Block, char a2)
{
  ShapeButtonClass::Destructor((int)Block); /*0x4b57f3*/
  if ( (a2 & 1) != 0 ) /*0x4b57fd*/
    __3_YAXPAX_Z(Block); /*0x4b5800*/
  return (ShapeButtonClass *)Block; /*0x4b580a*/
}


// ==== 0x004B5810  ToggleClass::QueryInterface  this=ToggleClass  sig=csp ====
ToggleClass *__thiscall ToggleClass::QueryInterface(_DWORD *Block, char a2)
{
  GadgetClass::Dtor(Block); /*0x4b5813*/
  if ( (a2 & 1) != 0 ) /*0x4b581d*/
    __3_YAXPAX_Z(Block); /*0x4b5820*/
  return (ToggleClass *)Block; /*0x4b582a*/
}


// ==== 0x004B5830  ObjectClass::method_4B5830  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_4B5830(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == a2 ) /*0x4b583a*/
    return this; /*0x4b583a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x4b583e*/
  v3 = a2[2]; /*0x4b5841*/
  this->vtable3 = v3; /*0x4b5846*/
  if ( !v3 ) /*0x4b5849*/
  {
    this->vtable2 = 0; /*0x4b588a*/
    this->attachedTag = 0; /*0x4b5891*/
    return this; /*0x4b5895*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x4b5853*/
  this->vtable2 = v4; /*0x4b585b*/
  if ( !v4 ) /*0x4b5860*/
    return this; /*0x4b5860*/
  v5 = this->vtable3; /*0x4b5862*/
  v6 = 0; /*0x4b5865*/
  this->attachedTag = 1; /*0x4b5869*/
  if ( v5 <= 0 ) /*0x4b586d*/
    return this; /*0x4b586d*/
  do /*0x4b5881*/
  {
    *(_DWORD *)(this->vtable2 + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x4b5878*/
    ++v6; /*0x4b587e*/
  }
  while ( v6 < this->vtable3 ); /*0x4b5881*/
  return this; /*0x4b5885*/
}


// ==== 0x004B58A0  sub_4B58A0  this=-  sig=ida-proto ====
void sub_4B58A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4b58ac*/
  MEMORY[0x8A0808] = Math::Sqrt(v0 + v0); /*0x4b58be*/
}


// ==== 0x004B58D0  sub_4B58D0  this=-  sig=ida-proto ====
void sub_4B58D0()
{
  MEMORY[0x8A0858] = MEMORY[0x8A0808] / 60.0; /*0x4b58dc*/
}


// ==== 0x004B58F0  sub_4B58F0  this=-  sig=ida-proto ====
void sub_4B58F0()
{
  MEMORY[0x8A0840] = 1.0 / MEMORY[0x8A0858]; /*0x4b58fc*/
}


// ==== 0x004B5910  sub_4B5910  this=-  sig=ida-proto ====
void sub_4B5910()
{
  MEMORY[0x8A0838] = 0.0174532925199433 * 45.0; /*0x4b591c*/
}


// ==== 0x004B5930  sub_4B5930  this=-  sig=ida-proto ====
void sub_4B5930()
{
  MEMORY[0x8A0810] = 0.0174532925199433 * 60.0; /*0x4b593c*/
}


// ==== 0x004B5950  sub_4B5950  this=-  sig=ida-proto ====
void sub_4B5950()
{
  MEMORY[0x8A07E8] = 0.0174532925199433 * 90.0; /*0x4b595c*/
}


// ==== 0x004B5970  sub_4B5970  this=-  sig=ida-proto ====
__int64 sub_4B5970()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A07E8] - MEMORY[0x8A0810]); /*0x4b5982*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A0808] * 0.5); /*0x4b5996*/
  MEMORY[0x8A0860] = result; /*0x4b599b*/
  return result; /*0x4b59a0*/
}


// ==== 0x004B59B0  sub_4B59B0  this=-  sig=ida-proto ====
void sub_4B59B0()
{
  MEMORY[0x8A0818] = Math::ArcTan((double)MEMORY[0x8A0860] * 0.00390625); /*0x4b59c7*/
}


// ==== 0x004B59E0  sub_4B59E0  this=-  sig=ida-proto ====
void sub_4B59E0()
{
  MEMORY[0x8A0830] = Math::ArcTan((double)(2 * MEMORY[0x8A0860]) / MEMORY[0x8A0808]); /*0x4b5a02*/
}


// ==== 0x004B5A10  sub_4B5A10  this=-  sig=ida-proto ====
__int64 sub_4B5A10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A0860]) + 0.5); /*0x4b5a2b*/
  MEMORY[0x8A0854] = result; /*0x4b5a30*/
  return result; /*0x4b5a36*/
}


// ==== 0x004B5A40  sub_4B5A40  this=-  sig=ida-proto ====
int sub_4B5A40()
{
  MEMORY[0x8A0800] = 0; /*0x4b5a42*/
  MEMORY[0x8A0802] = 0; /*0x4b5a48*/
  return 0; /*0x4b5a4e*/
}


// ==== 0x004B5A50  sub_4B5A50  this=-  sig=ida-proto ====
int sub_4B5A50()
{
  MEMORY[0x8A0820] = 0; /*0x4b5a52*/
  MEMORY[0x8A0824] = 0; /*0x4b5a57*/
  MEMORY[0x8A0828] = 0; /*0x4b5a5c*/
  return 0; /*0x4b5a61*/
}


// ==== 0x004B5A70  sub_4B5A70  this=-  sig=ida-proto ====
int sub_4B5A70()
{
  MEMORY[0x8A0850] = 0; /*0x4b5a75*/
  MEMORY[0x8A0848] = 128; /*0x4b5a7f*/
  MEMORY[0x8A084C] = 128; /*0x4b5a84*/
  return 128; /*0x4b5a89*/
}


// ==== 0x004B5A90  sub_4B5A90  this=-  sig=ida-proto ====
int sub_4B5A90()
{
  MEMORY[0x8A07F0] = 0; /*0x4b5a92*/
  MEMORY[0x8A07F4] = 0; /*0x4b5a97*/
  MEMORY[0x8A07F8] = 0; /*0x4b5a9c*/
  MEMORY[0x8A07FC] = 0; /*0x4b5aa1*/
  return 0; /*0x4b5aa6*/
}


// ==== 0x004B5AB0  DropPodLocomotionClass::SmallFunc_4B5AB0  this=DropPodLocomotionClass  sig=csp ====
int __thiscall sub_4B5AB0(int this)
{
  LocomotionClass::Init((_DWORD *)this); /*0x4b5ab3*/
  *(_BYTE *)(this + 28) = 0; /*0x4b5abd*/
  *(_DWORD *)(this + 32) = MEMORY[0x8A0820]; /*0x4b5ac6*/
  *(_DWORD *)(this + 36) = MEMORY[0x8A0824]; /*0x4b5ace*/
  *(_DWORD *)(this + 40) = MEMORY[0x8A0828]; /*0x4b5ad7*/
  *(_DWORD *)(this + 44) = 0; /*0x4b5ada*/
  *(_DWORD *)this = &DropPodLocomotionClass::`vftable'; /*0x4b5add*/
  *(_DWORD *)(this + 4) = &DropPodLocomotionClass::`vftable'; /*0x4b5ae3*/
  *(_DWORD *)(this + 24) = &vt_DropPodLocomotionClass; /*0x4b5aea*/
  return this; /*0x4b5af3*/
}


// ==== 0x004B5B30  JumpjetLocomotionClass::StubReturnTrue_1  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_4B5B30(int a1)
{
  return 1; /*0x4b5b32*/
}


// ==== 0x004B5B40  JumpjetLocomotionClass::GetSpeedCoordinate  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_4B5B40(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax

  v2 = a1[8]; /*0x4b5b4d*/
  v3 = a1[9]; /*0x4b5b50*/
  *a2 = a1[7]; /*0x4b5b55*/
  a2[1] = v2; /*0x4b5b57*/
  a2[2] = v3; /*0x4b5b5a*/
  return a2; /*0x4b5b5f*/
}


// ==== 0x004B5B70  DropPodLocomotionClass::ILoco_Process  this=DropPodLocomotionClass  sig=csp ====
char __stdcall DroppodLocomotionClass::ILoco_Process(int a1)
{
  int *v2; // ecx
  int v3; // esi
  double v4; // st7
  __int64 v5; // rax
  double v6; // st7
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int *v10; // esi
  int v11; // ebx
  _DWORD *v12; // ebp
  void **v13; // esi
  void *v14; // eax
  void **v16; // eax
  void **v17; // eax
  void **v18; // eax
  _DWORD *VeteranRatio_high; // esi
  void **v20; // ebp
  int Index; // eax
  _DWORD *v22; // eax
  int ClosestObjectCell; // eax
  int *v24; // eax
  unsigned int v25; // ebp
  unsigned int v26; // eax
  void **v27; // edi
  void *WarheadVersusMultiplier; // eax
  __int64 VeteranSpeed; // [esp-8h] [ebp-48h]
  void *v30; // [esp-8h] [ebp-48h]
  void *v31; // [esp-8h] [ebp-48h]
  double v32; // [esp+10h] [ebp-30h] BYREF
  int v33[2]; // [esp+1Ch] [ebp-24h] BYREF
  int v34; // [esp+24h] [ebp-1Ch]
  int v35; // [esp+28h] [ebp-18h] BYREF
  int v36; // [esp+2Ch] [ebp-14h]
  int v37; // [esp+30h] [ebp-10h]
  int v38[3]; // [esp+34h] [ebp-Ch] BYREF
  int VeteranCombat_high; // [esp+44h] [ebp+4h]

  v2 = *(int **)(a1 + 8); /*0x4b5b7b*/
  v35 = v2[39]; /*0x4b5b88*/
  v36 = v2[40]; /*0x4b5b8f*/
  v3 = v2[41]; /*0x4b5b93*/
  v38[0] = v35; /*0x4b5b96*/
  v37 = v3; /*0x4b5b9a*/
  v38[1] = v36; /*0x4b5b9e*/
  v38[2] = v3; /*0x4b5ba2*/
  VeteranCombat_high = (*(int (__thiscall **)(int *))(*v2 + 456))(v2) / 10 + 2; /*0x4b5bc9*/
  if ( SHIDWORD(MEMORY[0x8871E0]->DropPodHeight) > VeteranCombat_high ) /*0x4b5bd5*/
    VeteranCombat_high = HIDWORD(MEMORY[0x8871E0]->DropPodHeight); /*0x4b5bd7*/
  VeteranSpeed = MEMORY[0x8871E0]->DropPodAngle; /*0x4b5bf3*/
  if ( *(_BYTE *)(a1 + 24) ) /*0x4b5bdb*/
  {
    v32 = (double)VeteranCombat_high; /*0x4b5bf4*/
    v4 = Math::ArcTan2(*(double *)&VeteranSpeed) * v32 + (double)v35; /*0x4b5c04*/
  }
  else
  {
    *(double *)v33 = (double)v35; /*0x4b5c1c*/
    v32 = (double)VeteranCombat_high; /*0x4b5c24*/
    v4 = *(double *)v33 - Math::ArcTan2(*(double *)&VeteranSpeed) * v32; /*0x4b5c34*/
  }
  v35 = Math::RoundToInt(v4); /*0x4b5c41*/
  v5 = MEMORY[0x8871E0]->DropPodAngle; /*0x4b5c50*/
  *(double *)v33 = (double)v37; /*0x4b5c56*/
  v6 = Math::SinCos(*(double *)&v5); /*0x4b5c5c*/
  v7 = Math::RoundToInt(*(double *)v33 - v6 * v32); /*0x4b5c6c*/
  v8 = *(_DWORD *)(a1 + 8); /*0x4b5c71*/
  v37 = v7; /*0x4b5c74*/
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 456))(v8); /*0x4b5c7a*/
  v10 = *(int **)(a1 + 8); /*0x4b5c80*/
  if ( v9 > 0 ) /*0x4b5c87*/
  {
    (*(void (__thiscall **)(int *, int *))(*v10 + 436))(v10, &v35); /*0x4b5eaa*/
    VeteranRatio_high = (_DWORD *)HIDWORD(MEMORY[0x8871E0]->MissileSafetyAltitude); /*0x4b5eb6*/
    if ( VeteranRatio_high ) /*0x4b5ebe*/
    {
      if ( !((int)MEMORY[0xA8ED84] % 6) ) /*0x4b5ecf*/
      {
        v20 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4b5edf*/
        if ( v20 ) /*0x4b5ee6*/
        {
          Index = AnimTypeClass::FindIndex(&unk_820320); /*0x4b5eed*/
          AnimClass::ctor(v20, *((void **)MEMORY[0x8B4154] + Index), v38, 0, 1, (void *)0x600, 0, 0); /*0x4b5f0f*/
        }
      }
      if ( !((int)MEMORY[0xA8ED84] % 3) ) /*0x4b5f1f*/
      {
        v32 = 0.0; /*0x4b5f39*/
        v22 = Coord::To_Cell(&MEMORY[0x87F7E8], (_DWORD *)(a1 + 28)); /*0x4b5f41*/
        ClosestObjectCell = Object::FindClosestObjectCell(v22, &v32, 0, 0); /*0x4b5f48*/
        if ( !Object::IsAlliedWithObjectHouse(*(_DWORD **)(*(_DWORD *)(a1 + 8) + 540), ClosestObjectCell) ) /*0x4b5f57*/
        {
          v24 = RandomCoordScatter((int *)&v32, (int *)(a1 + 28), 85, 0); /*0x4b5f6d*/
          v25 = VeteranRatio_high[51]; /*0x4b5f74*/
          v33[0] = *v24; /*0x4b5f7a*/
          v33[1] = v24[1]; /*0x4b5f86*/
          v34 = v24[2]; /*0x4b5f8d*/
          v26 = Random::State(MEMORY[0x886B88]); /*0x4b5f91*/
          StartAudioControllerAt(*(_DWORD *)(VeteranRatio_high[48] + 4 * (v26 % v25)), (int)&v35, 0); /*0x4b5fa8*/
          PlaySoundEffectAt(v33, 2 * VeteranRatio_high[41], *(_DWORD **)(a1 + 8), VeteranRatio_high[43], 1, 0); /*0x4b5fc7*/
          v27 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4b5fd6*/
          if ( v27 ) /*0x4b5fdd*/
          {
            v31 = (void *)Return::HRESULT_Fail(v33[0], v33[1], v34); /*0x4b5ffe*/
            WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier( /*0x4b6020*/
                                                2 * VeteranRatio_high[41],
                                                VeteranRatio_high[43],
                                                0,
                                                v33);
            AnimClass::ctor(v27, WarheadVersusMultiplier, v33, 0, 1, (void *)0x2600, v31, 0); /*0x4b6028*/
          }
        }
      }
    }
    return 1; /*0x4b6030*/
  }
  else
  {
    (*(void (__thiscall **)(int *, _DWORD))(*v10 + 460))(v10, 0); /*0x4b5c92*/
    v35 = v10[39]; /*0x4b5ca4*/
    v36 = v10[40]; /*0x4b5cab*/
    v37 = v10[41]; /*0x4b5cb2*/
    (*(void (__thiscall **)(int *))(*v10 + 212))(v10); /*0x4b5cba*/
    v11 = a1 - 4; /*0x4b5cc3*/
    (*(void (__stdcall **)(int))(*(_DWORD *)(a1 - 4) + 4))(a1 - 4); /*0x4b5cc7*/
    v12 = (_DWORD *)(*(_DWORD *)(a1 + 8) + 1652); /*0x4b5ccd*/
    if ( *v12 ) /*0x4b5cd3*/
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v12 + 8))(*v12); /*0x4b5cdd*/
    *v12 = 0; /*0x4b5ce3*/
    (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)(a1 + 20) + 16))(a1 + 20, v12); /*0x4b5cee*/
    if ( (*(unsigned __int8 (__thiscall **)(int *, int *, _DWORD))(*v10 + 216))(v10, &v35, 0) ) /*0x4b5cfc*/
    {
      v16 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4b5dae*/
      if ( v16 ) /*0x4b5db8*/
        AnimClass::ctor(v16, (void *)MEMORY[0x8871E0]->FlashFrameTime, &v35, 0, 1, (void *)0x600, 0, 0); /*0x4b5dd8*/
      if ( *(_BYTE *)(a1 + 24) ) /*0x4b5ddd*/
      {
        v17 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4b5de9*/
        if ( v17 ) /*0x4b5df3*/
          AnimClass::ctor(v17, *(void **)(MEMORY[0x8871E0]->GUITabSound[3] + 4), &v35, 0, 1, (void *)0x600, 0, 0); /*0x4b5e16*/
      }
      else
      {
        v18 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4b5e18*/
        if ( v18 ) /*0x4b5e22*/
          AnimClass::ctor(v18, *(void **)MEMORY[0x8871E0]->GUITabSound[3], &v35, 0, 1, (void *)0x600, 0, 0); /*0x4b5e47*/
      }
      (*(void (__thiscall **)(int *, int))(*v10 + 292))(v10, 1); /*0x4b5e52*/
      (*(void (__thiscall **)(int *, _DWORD))(*v10 + 460))(v10, 0); /*0x4b5e5e*/
      (*(void (__thiscall **)(int *, _DWORD, int))(*v10 + 1156))(v10, 0, 1); /*0x4b5e6c*/
      (*(void (__thiscall **)(int *))(*v10 + 492))(v10); /*0x4b5e76*/
      (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD))(*v10 + 372))(v10, &MEMORY[0x8A0820], 0, 0); /*0x4b5e89*/
    }
    else
    {
      PlaySoundEffectAt(&v35, 100, *(_DWORD **)(a1 + 8), MEMORY[0x8871E0]->?[5], 1, 0); /*0x4b5d28*/
      v13 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4b5d37*/
      if ( v13 ) /*0x4b5d3e*/
      {
        v30 = (void *)Return::HRESULT_Fail(v35, v36, v37); /*0x4b5d64*/
        v14 = (void *)GetWarheadVersusMultiplier(100, MEMORY[0x8871E0]->?[5], 0, &v35); /*0x4b5d8a*/
        AnimClass::ctor(v13, v14, &v35, 0, 1, (void *)0x2600, v30, 0); /*0x4b5d92*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(a1 - 4); /*0x4b5d9a*/
        return 1; /*0x4b5da6*/
      }
    }
    (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(a1 - 4); /*0x4b5e92*/
    return 1; /*0x4b5e95*/
  }
}


// ==== 0x004B6040  DropPodLocomotionClass::UpdateMovementPosition  this=DropPodLocomotionClass  sig=csp ====
void **__stdcall JumpjetLocomotionClass::sub_4B6040(_DWORD *a1, double VeteranCombat_low, int a3)
{
  int v3; // edi
  void **result; // eax
  int *v5; // esi
  int v6; // ecx
  int v7; // edx
  double v8; // st7
  double v9; // st7
  char v10; // al
  int v11; // ecx
  int v12; // ecx
  __int64 VeteranSpeed; // [esp-Ch] [ebp-28h]
  _DWORD *v14; // [esp-8h] [ebp-24h]
  __int64 v15; // [esp-8h] [ebp-24h]
  double v16; // [esp+8h] [ebp-14h]
  int v17[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = (int)a1; /*0x4b604b*/
  result = (void **)a1[7]; /*0x4b604f*/
  v5 = a1 + 7; /*0x4b6052*/
  if ( result == (void **)MEMORY[0x8A0820] ) /*0x4b6057*/
  {
    result = (void **)MEMORY[0x8A0824]; /*0x4b6060*/
    if ( a1[8] == MEMORY[0x8A0824] ) /*0x4b6067*/
    {
      result = (void **)MEMORY[0x8A0828]; /*0x4b6070*/
      if ( a1[9] == MEMORY[0x8A0828] ) /*0x4b6077*/
      {
        v6 = HIDWORD(VeteranCombat_low); /*0x4b6081*/
        v7 = a3; /*0x4b6086*/
        v14 = a1 + 7; /*0x4b608c*/
        *v5 = LODWORD(VeteranCombat_low); /*0x4b608d*/
        v5[1] = v6; /*0x4b608f*/
        v5[2] = v7; /*0x4b6097*/
        *(_DWORD *)(v3 + 36) = Cell::GetGroundHeight(v14); /*0x4b609f*/
        v17[0] = *v5; /*0x4b60a6*/
        v17[1] = v5[1]; /*0x4b60ad*/
        v17[2] = LODWORD(MEMORY[0x8871E0]->DropPodHeight) + v5[2]; /*0x4b60c3*/
        VeteranSpeed = MEMORY[0x8871E0]->DropPodAngle; /*0x4b60da*/
        VeteranCombat_low = (double)SLODWORD(MEMORY[0x8871E0]->DropPodHeight); /*0x4b60db*/
        v8 = Math::Sin(*(double *)&VeteranSpeed); /*0x4b60df*/
        v17[0] = Math::RoundToInt(VeteranCombat_low / v8 + (double)v17[0]); /*0x4b60f4*/
        if ( !IsCoordVisibleMap(&MEMORY[0x87F7E8], v17) ) /*0x4b6102*/
        {
          *(_BYTE *)(v3 + 24) = 1; /*0x4b610c*/
          v15 = MEMORY[0x8871E0]->DropPodAngle; /*0x4b6124*/
          v16 = (double)*v5; /*0x4b6125*/
          VeteranCombat_low = (double)SLODWORD(MEMORY[0x8871E0]->DropPodHeight); /*0x4b612f*/
          v9 = Math::Sin(*(double *)&v15); /*0x4b6133*/
          v17[0] = Math::RoundToInt(v16 - VeteranCombat_low / v9); /*0x4b6148*/
        }
        (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v3 + 8) + 436))(*(_DWORD *)(v3 + 8), v17); /*0x4b6156*/
        v10 = (*(int (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)(v3 + 8) + 216))(*(_DWORD *)(v3 + 8), v17, 128); /*0x4b616b*/
        v11 = *(_DWORD *)(v3 + 8); /*0x4b6171*/
        if ( v10 ) /*0x4b6176*/
        {
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)v11 + 436))(v11, v17); /*0x4b617f*/
          v12 = *(_DWORD *)(v3 + 8); /*0x4b6185*/
          LOWORD(a1) = 0x8000; /*0x4b6193*/
          FacingClass::Set_SyncLog((char *)(v12 + 904), &a1); /*0x4b619a*/
          result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4b61a4*/
          if ( result ) /*0x4b61ae*/
            return AnimClass::ctor(result, (void *)MEMORY[0x8871E0]->?[2], v17, 0, 1, (void *)0x600, 0, 0); /*0x4b61d1*/
        }
        else
        {
          return (void **)(*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v11 + 216))(v11, v17, 128); /*0x4b61ea*/
        }
      }
    }
  }
  return result; /*0x4b61d6*/
}


// ==== 0x004B6200  DropPodLocomotionClass::ddtor  this=DropPodLocomotionClass  sig=csp ====
int __stdcall DropPodLocomotionClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x4b6206*/
    return -2147467261; /*0x4b6208*/
  *a2 = 1247291205; /*0x4b6216*/
  a2[1] = 298948665; /*0x4b621e*/
  a2[2] = -1610610249; /*0x4b6227*/
  a2[3] = -777003740; /*0x4b6230*/
  return 0; /*0x4b620d*/
}


// ==== 0x004B6240  DropPodLocomotionClass::BeginMove  this=DropPodLocomotionClass  sig=csp ====
HRESULT __stdcall DropPodLocomotionClass::_vt05(int *a1, int *pStm)
{
  IStream *v2; // edi
  int v3; // ebx
  int v4; // eax
  LPVOID *v5; // esi

  v2 = (IStream *)pStm; /*0x4b6247*/
  v3 = SwizzleManager::SaveLoad(a1, pStm); /*0x4b6252*/
  if ( v3 < 0 ) /*0x4b6256*/
    return v3; /*0x4b6256*/
  if ( a1 ) /*0x4b625a*/
  {
    a1[11] = 0; /*0x4b625c*/
    *a1 = (int)&DropPodLocomotionClass::`vftable'; /*0x4b6263*/
    a1[1] = (int)&DropPodLocomotionClass::`vftable'; /*0x4b6269*/
    a1[6] = (int)&vt_DropPodLocomotionClass; /*0x4b6270*/
  }
  v2->__pad_0->Read(v2, &pStm, 1, 0); /*0x4b6283*/
  if ( !(_BYTE)pStm ) /*0x4b628c*/
    return v3; /*0x4b62b8*/
  v4 = a1[11]; /*0x4b628e*/
  v5 = (LPVOID *)(a1 + 11); /*0x4b6291*/
  if ( v4 ) /*0x4b6296*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4b629b*/
  *v5 = 0; /*0x4b62a5*/
  return OleLoadFromStream(v2, &IID_ILocomotion, v5); /*0x4b62b1*/
}


// ==== 0x004B62C0  DropPodLocomotionClass::UpdateMovement  this=DropPodLocomotionClass  sig=csp ====
HRESULT __stdcall DropPodLocomotionClass::UpdateMovement(int *a1, int *pPStm, int a3)
{
  IStream *v3; // esi
  int *v4; // edi
  HRESULT result; // eax
  int v6; // ecx
  int (__stdcall ***v7)(_DWORD, void *, int **); // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v11; // edx

  v3 = (IStream *)pPStm; /*0x4b62c5*/
  v4 = a1; /*0x4b62ca*/
  result = LoadIPersistStream(a1, pPStm, a3); /*0x4b62d1*/
  if ( result >= 0 ) /*0x4b62d8*/
  {
    if ( v4[11] ) /*0x4b62de*/
    {
      v6 = *(_DWORD *)v3->__pad_0; /*0x4b62e9*/
      LOBYTE(a3) = 1; /*0x4b62f5*/
      (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x4b62fa*/
      v7 = (int (__stdcall ***)(_DWORD, void *, int **))v4[11]; /*0x4b62fd*/
      pPStm = 0; /*0x4b6300*/
      if ( v7 ) /*0x4b630a*/
      {
        v8 = (**v7)(v7, &unk_820270, &a1); /*0x4b631b*/
        if ( v8 >= 0 ) /*0x4b631f*/
        {
          v9 = a1; /*0x4b6339*/
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
      return (*(HRESULT (__stdcall **)(IStream *, int *, int, _DWORD))(v11 + 16))(v3, &a3, 1, 0); /*0x4b6392*/
    }
  }
  return result; /*0x4b637c*/
}


// ==== 0x004B63A0  DropPodLocomotionClass::Stub6  this=DropPodLocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub6(int a1)
{
  ; /*0x4b63a0*/
}


// ==== 0x004B63B0  JumpjetLocomotionClass::StubReturnZero_3  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4B63B0(int a1, int a2)
{
  if ( !a2 ) /*0x4b63b6*/
    return -2147467261; /*0x4b63b8*/
  if ( *(_DWORD *)(a1 + 20) ) /*0x4b63c4*/
    return -2147467259; /*0x4b63eb*/
  *(_DWORD *)(a1 + 20) = a2; /*0x4b63d2*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x4b63d8*/
  return 0; /*0x4b63bd*/
}


// ==== 0x004B6400  JumpjetLocomotionClass::StubReturnZero_4  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4B6400(int a1, _DWORD *a2)
{
  int v3; // eax

  if ( !a2 ) /*0x4b6406*/
    return -2147467261; /*0x4b6408*/
  v3 = *(_DWORD *)(a1 + 20); /*0x4b6414*/
  if ( !v3 ) /*0x4b6419*/
    return 1; /*0x4b6429*/
  *a2 = v3; /*0x4b641b*/
  *(_DWORD *)(a1 + 20) = 0; /*0x4b641d*/
  return 0; /*0x4b640d*/
}


// ==== 0x004B6440  JumpjetLocomotionClass::CheckBaseClassState  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_4B6440(int a1)
{
  return !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(a1 - 20) + 16))(a1 - 20) && *(_DWORD *)(a1 + 20); /*0x4b645c*/
}


// ==== 0x004B6470  DropPodLocomotionClass::QueryInterface  this=DropPodLocomotionClass  sig=csp ====
int __stdcall DropPodLocomotionClass::_vt00(int a1, const void *a2, int *a3)
{
  int result; // eax
  int v4; // eax

  result = LocomotionClass::QueryInterface(a1, a2, a3); /*0x4b6482*/
  if ( result == -2147467262 ) /*0x4b648c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x4b649b*/
    {
      if ( a1 ) /*0x4b64a2*/
        v4 = a1 + 24; /*0x4b64a4*/
      else
        v4 = 0; /*0x4b64a9*/
      *a3 = v4; /*0x4b64ab*/
    }
    if ( *a3 ) /*0x4b64ae*/
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x4b64c2*/
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
int __stdcall JumpjetLocomotionClass::sub_4B64D0(int a1)
{
  return 3; /*0x4b64d5*/
}


// ==== 0x004B64E0  JumpjetLocomotionClass::LoadLocomotionFromStream_0  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4B64E0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // ebp
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // edi

  v2 = a2; /*0x4b64e1*/
  if ( !a2 ) /*0x4b64e8*/
    return -2147467261; /*0x4b64f1*/
  v4 = a1 + 5; /*0x4b64fb*/
  if ( a1[5] ) /*0x4b64f8*/
  {
    a1 = 0; /*0x4b6504*/
    v5 = StreamClass::Set2(&a1, v4); /*0x4b6515*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x4b6523*/
      WinAPI::Wrapper(v5); /*0x4b6526*/
    if ( !a1 ) /*0x4b6531*/
      return -2147467259; /*0x4b653a*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*a1 + 12))(a1, v2); /*0x4b6544*/
    if ( a1 ) /*0x4b654c*/
    {
      (*(void (__stdcall **)(_DWORD *))(*a1 + 8))(a1); /*0x4b6555*/
      return v6; /*0x4b655c*/
    }
  }
  else
  {
    a2 = 0; /*0x4b6562*/
    if ( a1 == (_DWORD *)24 ) /*0x4b656c*/
      return -2147467259; /*0x4b656c*/
    v7 = (*(int (__stdcall **)(_DWORD *, void *, _DWORD **))*(a1 - 6))(a1 - 6, &unk_818858, &a1); /*0x4b657d*/
    if ( v7 >= 0 ) /*0x4b6581*/
    {
      v9 = a1; /*0x4b6595*/
      ComPtr::Release_Alt((int *)&a2); /*0x4b659d*/
      v8 = v9; /*0x4b65a2*/
      a2 = v9; /*0x4b65a5*/
    }
    else
    {
      ComPtr::Release_Alt((int *)&a2); /*0x4b6587*/
      v8 = 0; /*0x4b658c*/
      a2 = 0; /*0x4b658e*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x4b65b3*/
      WinAPI::Wrapper(v7); /*0x4b65b6*/
    if ( !v8 ) /*0x4b65c1*/
      return -2147467259; /*0x4b65ca*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*v8 + 12))(v8, v2); /*0x4b65d4*/
    if ( a2 ) /*0x4b65dc*/
      (*(void (__stdcall **)(_DWORD *))(*a2 + 8))(a2); /*0x4b65e1*/
  }
  return v6; /*0x4b64ea*/
}


// ==== 0x004B65F0  DropPodLocomotionClass::ShortFunc_4B65F0  this=DropPodLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::ShortFunc_4B65F0(DropPodLocomotionClass *aP0)
{
  return aP0->__pad_18[0] != 0; /*0x4b65fe*/
}


// ==== 0x004B6610  LocomotionClass::Thunk_VtableDispatch4  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_4B6610(int a1)
{
  return (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1); /*0x4b661a*/
}


// ==== 0x004B6620  LocomotionClass::Stub7  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub7(int a1, int a2)
{
  ; /*0x4b6620*/
}


// ==== 0x004B6630  LocomotionClass::MissionStub8  this=LocomotionClass  sig=csp ====
char __stdcall NullStub_4b6630(int a1, int a2, int a3, int a4)
{
  return 0; /*0x4b6632*/
}


// ==== 0x004B6640  LocomotionClass::MissionStub9  this=LocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::_vt41(int a1)
{
  return 0; /*0x4b6642*/
}


// ==== 0x004B6650  LocomotionClass::Stub8  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub8(int a1)
{
  ; /*0x4b6650*/
}


// ==== 0x004B6660  LocomotionClass::Stub9  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub9(int a1)
{
  ; /*0x4b6660*/
}


// ==== 0x004B6670  LocomotionClass::CheckState3  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::_vt47(int a1)
{
  return -1; /*0x4b6673*/
}


// ==== 0x004B6680  LocomotionClass::CheckState4  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::_vt48(int a1)
{
  return -1; /*0x4b6683*/
}


// ==== 0x004B6690  LocomotionClass::CheckState5  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::_vt49(int a1)
{
  return -1; /*0x4b6693*/
}


// ==== 0x004B66A0  DropPodLocomotionClass::AddRef  this=DropPodLocomotionClass  sig=csp ====
LONG __stdcall DropPodLocomotionClass::_vt01(int a1)
{
  return COM::AddRef(a1); /*0x4b66aa*/
}


// ==== 0x004B66B0  DropPodLocomotionClass::Release  this=DropPodLocomotionClass  sig=csp ====
LONG __stdcall DropPodLocomotionClass::_vt02(volatile LONG *a1)
{
  return COM::ReleaseRef(a1); /*0x4b66ba*/
}


// ==== 0x004B66C0  JumpjetLocomotionClass::ShortFunc_4B66C0  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_4B66C0(int a1)
{
  return *(_DWORD *)(a1 + 20) != 0; /*0x4b66ce*/
}


// ==== 0x004B66E0  DropPodLocomotionClass::StubReturn48  this=DropPodLocomotionClass  sig=csp ====
int DropPodLocomotionClass::_vt09()
{
  return 48; /*0x4b66e5*/
}


// ==== 0x004B66F0  DropPodLocomotionClass::ProcessMove  this=DropPodLocomotionClass  sig=csp ====
DropPodLocomotionClass *__thiscall DropPodLocomotionClass::ProcessMove(ILocomotion **Block, char a2)
{
  ILocomotion *v3; // eax

  *Block = (ILocomotion *)&DropPodLocomotionClass::`vftable'; /*0x4b66f3*/
  *(Block + 1) = (ILocomotion *)&DropPodLocomotionClass::`vftable'; /*0x4b66f9*/
  *(Block + 6) = (ILocomotion *)&vt_DropPodLocomotionClass; /*0x4b6700*/
  v3 = *(Block + 11); /*0x4b6707*/
  if ( v3 ) /*0x4b670c*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)v3 + 8))(v3); /*0x4b6711*/
  LocomotionClass::Construct(Block); /*0x4b6716*/
  if ( (a2 & 1) != 0 ) /*0x4b6720*/
    __3_YAXPAX_Z(Block); /*0x4b6723*/
  return (DropPodLocomotionClass *)Block; /*0x4b672d*/
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
  MEMORY[0x8A08A8] = Math::Sqrt(v0 + v0); /*0x4b67be*/
}


// ==== 0x004B67D0  sub_4B67D0  this=-  sig=ida-proto ====
void sub_4B67D0()
{
  MEMORY[0x8A0918] = MEMORY[0x8A08A8] / 60.0; /*0x4b67dc*/
}


// ==== 0x004B67F0  sub_4B67F0  this=-  sig=ida-proto ====
void sub_4B67F0()
{
  MEMORY[0x8A0900] = 1.0 / MEMORY[0x8A0918]; /*0x4b67fc*/
}


// ==== 0x004B6810  sub_4B6810  this=-  sig=ida-proto ====
void sub_4B6810()
{
  MEMORY[0x8A08F8] = 0.0174532925199433 * 45.0; /*0x4b681c*/
}


// ==== 0x004B6830  sub_4B6830  this=-  sig=ida-proto ====
void sub_4B6830()
{
  MEMORY[0x8A08B0] = 0.0174532925199433 * 60.0; /*0x4b683c*/
}


// ==== 0x004B6850  sub_4B6850  this=-  sig=ida-proto ====
void sub_4B6850()
{
  MEMORY[0x8A0868] = 0.0174532925199433 * 90.0; /*0x4b685c*/
}


// ==== 0x004B6870  sub_4B6870  this=-  sig=ida-proto ====
__int64 sub_4B6870()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A0868] - MEMORY[0x8A08B0]); /*0x4b6882*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A08A8] * 0.5); /*0x4b6896*/
  MEMORY[0x8A0920] = result; /*0x4b689b*/
  return result; /*0x4b68a0*/
}


// ==== 0x004B68B0  sub_4B68B0  this=-  sig=ida-proto ====
void sub_4B68B0()
{
  MEMORY[0x8A08B8] = Math::ArcTan((double)MEMORY[0x8A0920] * 0.00390625); /*0x4b68c7*/
}


// ==== 0x004B68E0  sub_4B68E0  this=-  sig=ida-proto ====
void sub_4B68E0()
{
  MEMORY[0x8A08F0] = Math::ArcTan((double)(2 * MEMORY[0x8A0920]) / MEMORY[0x8A08A8]); /*0x4b6902*/
}


// ==== 0x004B6910  sub_4B6910  this=-  sig=ida-proto ====
__int64 sub_4B6910()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A0920]) + 0.5); /*0x4b692b*/
  MEMORY[0x8A0914] = result; /*0x4b6930*/
  return result; /*0x4b6936*/
}


// ==== 0x004B6940  sub_4B6940  this=-  sig=ida-proto ====
int sub_4B6940()
{
  MEMORY[0x8A08A0] = 0; /*0x4b6942*/
  MEMORY[0x8A08A2] = 0; /*0x4b6948*/
  return 0; /*0x4b694e*/
}


// ==== 0x004B6950  sub_4B6950  this=-  sig=ida-proto ====
int sub_4B6950()
{
  MEMORY[0x8A08E0] = 0; /*0x4b6952*/
  MEMORY[0x8A08E4] = 0; /*0x4b6957*/
  MEMORY[0x8A08E8] = 0; /*0x4b695c*/
  return 0; /*0x4b6961*/
}


// ==== 0x004B6970  sub_4B6970  this=-  sig=ida-proto ====
int sub_4B6970()
{
  MEMORY[0x8A0910] = 0; /*0x4b6975*/
  MEMORY[0x8A0908] = 128; /*0x4b697f*/
  MEMORY[0x8A090C] = 128; /*0x4b6984*/
  return 128; /*0x4b6989*/
}


// ==== 0x004B6990  sub_4B6990  this=-  sig=ida-proto ====
int sub_4B6990()
{
  MEMORY[0x8A0890] = 0; /*0x4b6992*/
  MEMORY[0x8A0894] = 0; /*0x4b6997*/
  MEMORY[0x8A0898] = 0; /*0x4b699c*/
  MEMORY[0x8A089C] = 0; /*0x4b69a1*/
  return 0; /*0x4b69a6*/
}


// ==== 0x004B69B0  HouseClass::initDropshipData  this=HouseClass  sig=csp ====
_DWORD *__thiscall sub_4B69B0(_DWORD *this)
{
  *this = MEMORY[0xA8ED84]; /*0x4b69b8*/
  this->vtable3 = 0x7FFFFFFF; /*0x4b69bc*/
  this->relatedTagsCount = 0; /*0x4b69c3*/
  this->uniqueId = 0; /*0x4b69c6*/
  this->buildingType = 0; /*0x4b69c9*/
  return this; /*0x4b69cc*/
}


// ==== 0x004B69D0  ObjectClass::nullsub_126  this=ObjectClass  sig=csp ====
void nullsub_126()
{
  ; /*0x4b69d0*/
}


// ==== 0x004B69E0  ObjectClass::method_4B69E0  this=ObjectClass  sig=csp ====
char __thiscall sub_4B69E0(int *this, int a2)
{
  int v2; // edx
  int v3; // esi
  int v4; // eax

  if ( this->vtable2 >= 5 ) /*0x4b69f1*/
    return 0; /*0x4b69f1*/
  v2 = *((_DWORD *)MEMORY[0xA8B230] + 3385); /*0x4b6a01*/
  if ( v2 ) /*0x4b6a09*/
  {
    v4 = 0; /*0x4b6a10*/
    if ( v2 > 0 ) /*0x4b6a14*/
    {
      while ( *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3382) + 4 * v4) != a2 /*0x4b6a2c*/
           || *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3389) + 4 * v4) == -1 )
      {
        if ( ++v4 >= v2 ) /*0x4b6a31*/
        {
          v3 = -1; /*0x4b6a33*/
          goto LABEL_11; /*0x4b6a36*/
        }
      }
      v3 = v4; /*0x4b6a3b*/
      if ( v4 == -1 /*0x4b6a53*/
        || *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3396) + 4 * v4) < *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3389)
                                                                                  + 4 * v4) )
      {
        goto LABEL_11; /*0x4b6a53*/
      }
      return 0; /*0x4b6a9a*/
    }
  }
  v3 = -1; /*0x4b6a0b*/
LABEL_11:
  *(this + (this->vtable2)++ + 5) = a2; /*0x4b6a55*/
  this->owningHouseIndex += (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 172))(a2); /*0x4b6a74*/
  if ( v3 != -1 ) /*0x4b6a77*/
    ++*(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3396) + 4 * v3); /*0x4b6a8b*/
  return 1; /*0x4b6a8d*/
}


// ==== 0x004B6AB0  ObjectClass::method_4B6AB0  this=ObjectClass  sig=csp ====
char __thiscall sub_4B6AB0(int *this, int a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // eax

  v3 = this->vtable2; /*0x4b6ab4*/
  if ( v3 <= 0 || a2 < 0 || a2 >= v3 ) /*0x4b6acd*/
    return 0; /*0x4b6b72*/
  v4 = *((_DWORD *)MEMORY[0xA8B230] + 3385); /*0x4b6adb*/
  if ( v4 ) /*0x4b6ae3*/
  {
    v5 = 0; /*0x4b6ae5*/
    if ( v4 > 0 ) /*0x4b6ae9*/
    {
      while ( *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3382) + 4 * v5) != *(this + a2 + 5) /*0x4b6b05*/
           || *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3389) + 4 * v5) == -1 )
      {
        if ( ++v5 >= *((_DWORD *)MEMORY[0xA8B230] + 3385) ) /*0x4b6b10*/
          goto LABEL_12; /*0x4b6b10*/
      }
      if ( v5 != -1 ) /*0x4b6b17*/
        --*(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3396) + 4 * v5); /*0x4b6b22*/
    }
  }
LABEL_12:
  v6 = this->owningHouseIndex - (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + a2 + 5) + 172))(*(this + a2 + 5)); /*0x4b6b24*/
  v7 = this->vtable2 - 1; /*0x4b6b3c*/
  this->owningHouseIndex = v6; /*0x4b6b3d*/
  v8 = a2; /*0x4b6b42*/
  if ( a2 < v7 ) /*0x4b6b44*/
  {
    v9 = this + a2 + 5; /*0x4b6b46*/
    do /*0x4b6b57*/
    {
      ++v8; /*0x4b6b4b*/
      *v9 = v9[1]; /*0x4b6b4c*/
      ++v9; /*0x4b6b51*/
    }
    while ( v8 < this->vtable2 - 1 ); /*0x4b6b57*/
  }
  v10 = this->vtable2 - 1; /*0x4b6b5d*/
  this->vtable2 = v10; /*0x4b6b5f*/
  *(this + v10 + 5) = 0; /*0x4b6b62*/
  return 1; /*0x4b6b6a*/
}


// ==== 0x004B6B80  ObjectClass::method_4B6B80  this=ObjectClass  sig=csp ====
char __thiscall sub_4B6B80(int this)
{
  int v2; // edi
  char result; // al

  v2 = *(_DWORD *)(this + 16); /*0x4b6b87*/
  *(_BYTE *)(this + 12) = 0; /*0x4b6b8a*/
  if ( v2 > 0 ) /*0x4b6b8f*/
  {
    do /*0x4b6b9a*/
    {
      result = sub_4B6AB0((int *)this, 0); /*0x4b6b94*/
      --v2; /*0x4b6b99*/
    }
    while ( v2 ); /*0x4b6b9a*/
  }
  *(_DWORD *)(this + 16) = 0; /*0x4b6b9c*/
  *(_DWORD *)(this + 40) = 0; /*0x4b6b9f*/
  return result; /*0x4b6ba2*/
}


// ==== 0x004B6BB0  HouseClass::RegisterForSwizzleTracking  this=HouseClass  sig=csp ====
int __thiscall sub_4B6BB0(int *this)
{
  int v2; // esi
  int result; // eax
  int *v4; // edi

  v2 = 0; /*0x4b6bb4*/
  result = this->vtable2; /*0x4b6bb6*/
  if ( result > 0 ) /*0x4b6bbb*/
  {
    v4 = this + 5; /*0x4b6bbe*/
    do /*0x4b6bd5*/
    {
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v4); /*0x4b6bc7*/
      result = this->vtable2; /*0x4b6bcc*/
      ++v2; /*0x4b6bcf*/
      ++v4; /*0x4b6bd0*/
    }
    while ( v2 < result ); /*0x4b6bd5*/
  }
  return result; /*0x4b6bd8*/
}


// ==== 0x004B6BE0  ObjectClass::method_4B6BE0  this=ObjectClass  sig=csp ====
int __thiscall sub_4B6BE0(_DWORD *this, int a2)
{
  return *(this + a2 + 5); /*0x4b6be8*/
}


// ==== 0x004B6BF0  ObjectClass::method_4B6BF0  this=ObjectClass  sig=csp ====
int __thiscall sub_4B6BF0(void *this)
{
  int v1; // edx
  int result; // eax

  v1 = *((_DWORD *)MEMORY[0xA8B230] + 3385); /*0x4b6bf9*/
  if ( !v1 ) /*0x4b6c01*/
    return -1; /*0x4b6c01*/
  result = 0; /*0x4b6c03*/
  if ( v1 <= 0 ) /*0x4b6c07*/
    return -1; /*0x4b6c25*/
  while ( *(void **)(*((_DWORD *)MEMORY[0xA8B230] + 3382) + 4 * result) != this /*0x4b6c1e*/
       || *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3389) + 4 * result) == -1 )
  {
    if ( ++result >= v1 ) /*0x4b6c23*/
      return -1; /*0x4b6c23*/
  }
  return result; /*0x4b6c28*/
}


// ==== 0x004B6C30  LoadScreen::RenderLoop  this=LoadScreen  sig=csp ====
int LoadScreen_RenderLoop()
{
  int v0; // esi
  size_t Size; // eax
  void *v2; // edi
  signed int v3; // eax
  size_t v4; // eax
  __int16 *v5; // edi
  signed int v6; // eax
  int *v7; // esi
  int v8; // ebp
  int v9; // ebx
  int v10; // esi
  int v11; // edi
  _BYTE *v12; // esi
  int v13; // eax
  int v14; // edi
  const void *v15; // eax
  int i; // esi
  int v17; // eax
  _BYTE *v18; // ecx
  char v19; // dl
  _DWORD *v20; // eax
  _DWORD *v21; // ebp
  _DWORD *v22; // eax
  _DWORD *v23; // edi
  const void *v24; // eax
  int j; // esi
  int v26; // eax
  _BYTE *v27; // ecx
  char v28; // dl
  _DWORD *v29; // eax
  _DWORD *v30; // esi
  int v31; // ebp
  int v32; // ecx
  _DWORD *v33; // edx
  int v34; // eax
  _DWORD *v35; // ecx
  int v36; // edi
  int v37; // eax
  int v38; // ebx
  int v39; // esi
  int v40; // eax
  int k; // edi
  _DWORD *v42; // esi
  int v43; // eax
  int v44; // edi
  _DWORD *v45; // ebp
  int v46; // esi
  _BYTE *v47; // ebx
  int v48; // ecx
  _DWORD *v49; // eax
  _BYTE *v50; // edi
  int v51; // eax
  _BYTE *v52; // eax
  int v53; // esi
  _BYTE *v54; // edi
  int v55; // eax
  _BYTE *v56; // eax
  int v57; // ebp
  int v58; // esi
  int v59; // ebx
  int v60; // edi
  _BYTE *v61; // eax
  int v62; // ecx
  _DWORD *v63; // eax
  void *v64; // esi
  _DWORD *v65; // ebx
  int v66; // esi
  int v67; // eax
  int v68; // ebp
  _DWORD *v69; // edi
  int v70; // eax
  int v71; // ebx
  int v72; // esi
  signed int v73; // esi
  int v74; // ecx
  int v75; // ebx
  int v76; // ecx
  int v77; // eax
  int v78; // esi
  int v79; // eax
  int v80; // ebp
  int v81; // eax
  int v82; // eax
  _DWORD *v83; // edi
  int v84; // ebp
  _DWORD *v85; // esi
  int v86; // ebx
  _DWORD *v87; // esi
  int v88; // edx
  int v89; // ebx
  int v90; // eax
  int v91; // edi
  DWORD v92; // eax
  int v93; // ecx
  int v94; // edx
  int v95; // eax
  int v96; // eax
  int v97; // esi
  int v98; // eax
  char *v99; // edx
  int v100; // edi
  DWORD *v101; // esi
  int v102; // eax
  int v103; // eax
  int v104; // eax
  _DWORD *v105; // esi
  int v106; // edi
  int v107; // ebx
  int v108; // eax
  int v109; // ebp
  int v110; // eax
  bool v111; // zf
  int v112; // ebx
  _DWORD *v113; // edx
  int v114; // ecx
  int v115; // ebp
  int v116; // esi
  int v117; // edi
  _DWORD *v118; // eax
  DWORD *v119; // esi
  int v120; // eax
  int v121; // eax
  int v122; // eax
  _DWORD *v123; // edi
  int v124; // ebx
  _DWORD *v125; // esi
  int v126; // ebp
  int v127; // eax
  int v128; // ebx
  _DWORD *v129; // esi
  int v130; // ebp
  int v131; // eax
  _DWORD *v132; // esi
  int v133; // ecx
  int v134; // edx
  int v135; // eax
  int v136; // edi
  int v137; // eax
  int v138; // eax
  _DWORD *v139; // edi
  int v140; // ebp
  _DWORD *v141; // esi
  int v142; // ebx
  int v143; // eax
  _DWORD *v144; // esi
  int v145; // edx
  DWORD v146; // eax
  int v147; // edx
  int v148; // eax
  int v149; // eax
  _BYTE *v150; // ecx
  _BYTE *v151; // ecx
  DWORD (__stdcall *v152)(); // ebp
  int n; // edi
  unsigned int v154; // ebx
  signed int v155; // esi
  int v156; // eax
  __int16 *v157; // ecx
  int v158; // esi
  int v159; // ecx
  int v160; // ebx
  int v161; // edi
  double v162; // st7
  int v163; // esi
  int v164; // esi
  unsigned __int16 v165; // ax
  int v166; // eax
  int v167; // ebp
  int v168; // edx
  char v169; // bl
  int v170; // esi
  char *v171; // ecx
  int v172; // edi
  int v173; // eax
  DWORD v174; // edi
  int *v175; // ecx
  int *v176; // ecx
  int *v177; // ecx
  int *v178; // ecx
  int v179; // ecx
  int v180; // eax
  DWORD v181; // eax
  int v182; // esi
  unsigned int v183; // edi
  DWORD v184; // edx
  int v185; // edi
  int v186; // edi
  DWORD v187; // eax
  int v188; // ebp
  int v189; // esi
  DWORD v190; // ebx
  DWORD v191; // ecx
  int v192; // edi
  double v193; // st7
  int v194; // eax
  int v195; // ebp
  int v196; // esi
  wchar_t *String; // eax
  signed int v198; // edx
  int v199; // eax
  int v200; // esi
  signed int v201; // eax
  int *v202; // eax
  int v203; // esi
  wchar_t *v204; // ecx
  int v205; // ebx
  int v206; // edx
  int v207; // edx
  int v208; // edi
  _DWORD *v209; // ebx
  int v210; // edx
  int v211; // eax
  char v212; // al
  int v213; // esi
  int v214; // edx
  int v215; // edx
  int v216; // ecx
  int v217; // edx
  char *v218; // esi
  int v219; // edx
  int v220; // edi
  int v221; // edi
  int v222; // eax
  int v223; // eax
  void *v224; // ebx
  int v225; // ecx
  int v226; // eax
  char *v227; // esi
  int v228; // edi
  int *v229; // ebp
  int v230; // ecx
  int v231; // eax
  void *v232; // ebx
  int v233; // edx
  int v234; // eax
  char *v235; // esi
  int v236; // edi
  _DWORD *v237; // esi
  int v238; // edi
  void *v239; // esi
  _DWORD *v240; // eax
  void *v241; // esi
  _DWORD *v242; // eax
  int *v244; // [esp+12h] [ebp-698h]
  int *v245; // [esp+12h] [ebp-698h]
  int v246; // [esp+22h] [ebp-688h]
  int v247; // [esp+26h] [ebp-684h]
  int *v248; // [esp+2Ah] [ebp-680h]
  int v249; // [esp+2Eh] [ebp-67Ch]
  int *v250; // [esp+32h] [ebp-678h]
  char v251; // [esp+41h] [ebp-669h]
  int m; // [esp+42h] [ebp-668h]
  int v253; // [esp+42h] [ebp-668h]
  signed int v254; // [esp+42h] [ebp-668h]
  _DWORD *v255; // [esp+42h] [ebp-668h]
  int v256; // [esp+42h] [ebp-668h]
  int ii; // [esp+42h] [ebp-668h]
  int jj; // [esp+42h] [ebp-668h]
  int v259; // [esp+42h] [ebp-668h]
  char v260; // [esp+49h] [ebp-661h]
  char v261; // [esp+49h] [ebp-661h]
  int v262; // [esp+4Ah] [ebp-660h]
  int v263; // [esp+4Ah] [ebp-660h]
  signed int v264; // [esp+4Ah] [ebp-660h]
  float v265; // [esp+4Ah] [ebp-660h]
  int v266; // [esp+4Ah] [ebp-660h]
  int v267; // [esp+4Ah] [ebp-660h]
  bool v268; // [esp+51h] [ebp-659h]
  int v269; // [esp+52h] [ebp-658h]
  __int16 Blocka; // [esp+56h] [ebp-654h]
  __int16 Blockb; // [esp+56h] [ebp-654h]
  _DWORD *Block; // [esp+56h] [ebp-654h]
  bool v273; // [esp+5Ch] [ebp-64Eh]
  bool v274; // [esp+5Dh] [ebp-64Dh]
  void (__thiscall ***v275)(_DWORD, int); // [esp+5Eh] [ebp-64Ch]
  int v276; // [esp+62h] [ebp-648h]
  _DWORD *v277; // [esp+62h] [ebp-648h]
  int v278; // [esp+62h] [ebp-648h]
  int v279; // [esp+62h] [ebp-648h]
  int v280; // [esp+62h] [ebp-648h]
  int v281; // [esp+66h] [ebp-644h]
  int v282; // [esp+6Ah] [ebp-640h]
  int v283; // [esp+6Ah] [ebp-640h]
  int v284; // [esp+6Ah] [ebp-640h]
  int v285; // [esp+6Ah] [ebp-640h]
  int v286; // [esp+6Ah] [ebp-640h]
  int v287; // [esp+6Ah] [ebp-640h]
  double v288; // [esp+6Ah] [ebp-640h]
  __int16 v289; // [esp+73h] [ebp-637h]
  char v290; // [esp+75h] [ebp-635h]
  int v291; // [esp+76h] [ebp-634h]
  int v292; // [esp+76h] [ebp-634h]
  _DWORD *v293; // [esp+76h] [ebp-634h]
  _DWORD *v294; // [esp+76h] [ebp-634h]
  int v295; // [esp+7Ah] [ebp-630h]
  int v296; // [esp+7Ah] [ebp-630h]
  _DWORD *v297; // [esp+7Ah] [ebp-630h]
  int v298; // [esp+7Ah] [ebp-630h]
  int *v299; // [esp+7Eh] [ebp-62Ch]
  int v300; // [esp+82h] [ebp-628h]
  int v301; // [esp+8Ah] [ebp-620h]
  _DWORD *v302; // [esp+8Eh] [ebp-61Ch]
  int v303; // [esp+8Eh] [ebp-61Ch]
  int v304; // [esp+92h] [ebp-618h]
  _BYTE *v305; // [esp+96h] [ebp-614h]
  void **v306; // [esp+9Ah] [ebp-610h] BYREF
  void *v307; // [esp+9Eh] [ebp-60Ch]
  int v308; // [esp+A2h] [ebp-608h]
  int v309; // [esp+A6h] [ebp-604h]
  int v310; // [esp+AAh] [ebp-600h]
  int v311; // [esp+AEh] [ebp-5FCh]
  void **v312; // [esp+B2h] [ebp-5F8h] BYREF
  void *v313; // [esp+B6h] [ebp-5F4h]
  int v314; // [esp+BAh] [ebp-5F0h]
  int v315; // [esp+BEh] [ebp-5ECh]
  int kk; // [esp+C2h] [ebp-5E8h]
  int v317; // [esp+C6h] [ebp-5E4h]
  int v318; // [esp+CAh] [ebp-5E0h]
  int v319; // [esp+CEh] [ebp-5DCh]
  int v320; // [esp+D2h] [ebp-5D8h]
  int v321; // [esp+D6h] [ebp-5D4h]
  void **v322; // [esp+DAh] [ebp-5D0h] BYREF
  void *v323; // [esp+DEh] [ebp-5CCh]
  int v324; // [esp+E2h] [ebp-5C8h]
  int v325; // [esp+E6h] [ebp-5C4h]
  int v326; // [esp+EAh] [ebp-5C0h]
  int v327; // [esp+EEh] [ebp-5BCh]
  int SubFile; // [esp+F2h] [ebp-5B8h]
  void **v329; // [esp+F6h] [ebp-5B4h] BYREF
  void *v330; // [esp+FAh] [ebp-5B0h]
  int v331; // [esp+FEh] [ebp-5ACh]
  int v332; // [esp+102h] [ebp-5A8h]
  int v333; // [esp+106h] [ebp-5A4h]
  int v334; // [esp+10Ah] [ebp-5A0h]
  DWORD Ticks; // [esp+10Eh] [ebp-59Ch]
  int v336; // [esp+112h] [ebp-598h]
  int v337; // [esp+116h] [ebp-594h]
  void (__thiscall ***v338)(_DWORD, int); // [esp+11Ah] [ebp-590h]
  int v339; // [esp+11Eh] [ebp-58Ch]
  int v340; // [esp+122h] [ebp-588h]
  int SHPFrame; // [esp+126h] [ebp-584h]
  DWORD v342; // [esp+12Ah] [ebp-580h]
  int v343; // [esp+12Eh] [ebp-57Ch]
  __int16 *v344; // [esp+132h] [ebp-578h]
  DWORD v345; // [esp+136h] [ebp-574h]
  int v346; // [esp+13Ah] [ebp-570h]
  int v347; // [esp+13Eh] [ebp-56Ch]
  __int64 v348; // [esp+142h] [ebp-568h]
  double v349; // [esp+14Ah] [ebp-560h]
  DWORD v350; // [esp+152h] [ebp-558h]
  DWORD v351; // [esp+156h] [ebp-554h]
  int v352; // [esp+15Ah] [ebp-550h]
  wchar_t *v353; // [esp+15Eh] [ebp-54Ch]
  _DWORD v354[4]; // [esp+162h] [ebp-548h] BYREF
  DWORD Time; // [esp+172h] [ebp-538h]
  int v356; // [esp+176h] [ebp-534h]
  int v357[2]; // [esp+17Ah] [ebp-530h] BYREF
  int v358[2]; // [esp+182h] [ebp-528h] BYREF
  int v359[2]; // [esp+18Ah] [ebp-520h] BYREF
  int v360[3]; // [esp+192h] [ebp-518h] BYREF
  int v361; // [esp+19Eh] [ebp-50Ch]
  int v362; // [esp+1A2h] [ebp-508h]
  int v363; // [esp+1A6h] [ebp-504h]
  int v364[2]; // [esp+1AAh] [ebp-500h] BYREF
  __int64 v365; // [esp+1B2h] [ebp-4F8h]
  int v366; // [esp+1BAh] [ebp-4F0h]
  int v367; // [esp+1BEh] [ebp-4ECh]
  int v368[2]; // [esp+1C2h] [ebp-4E8h] BYREF
  int v369[2]; // [esp+1CAh] [ebp-4E0h] BYREF
  int v370[2]; // [esp+1D2h] [ebp-4D8h] BYREF
  int v371[2]; // [esp+1DAh] [ebp-4D0h] BYREF
  __int64 v372; // [esp+1E2h] [ebp-4C8h]
  int v373[2]; // [esp+1EAh] [ebp-4C0h] BYREF
  DWORD v374; // [esp+1F2h] [ebp-4B8h]
  int v375; // [esp+1F6h] [ebp-4B4h]
  int v376; // [esp+1FAh] [ebp-4B0h]
  DWORD v377; // [esp+1FEh] [ebp-4ACh]
  int v378; // [esp+202h] [ebp-4A8h]
  int v379; // [esp+206h] [ebp-4A4h]
  int v380[4]; // [esp+20Ah] [ebp-4A0h] BYREF
  int v381[4]; // [esp+21Ah] [ebp-490h] BYREF
  _DWORD v382[4]; // [esp+22Ah] [ebp-480h] BYREF
  int v383[4]; // [esp+23Ah] [ebp-470h] BYREF
  _DWORD v384[3]; // [esp+24Ah] [ebp-460h] BYREF
  int v385; // [esp+256h] [ebp-454h]
  _DWORD v386[4]; // [esp+25Ah] [ebp-450h] BYREF
  _DWORD v387[4]; // [esp+26Ah] [ebp-440h] BYREF
  int v388[4]; // [esp+27Ah] [ebp-430h] BYREF
  _DWORD v389[4]; // [esp+28Ah] [ebp-420h] BYREF
  int v390[6]; // [esp+29Ah] [ebp-410h] BYREF
  int v391; // [esp+2B2h] [ebp-3F8h]
  int v392; // [esp+2B6h] [ebp-3F4h]
  _DWORD v393[4]; // [esp+2BAh] [ebp-3F0h] BYREF
  char v394[8]; // [esp+2CAh] [ebp-3E0h] BYREF
  int v395[22]; // [esp+2D2h] [ebp-3D8h] BYREF
  char v396[12]; // [esp+32Ah] [ebp-380h] BYREF
  int v397; // [esp+336h] [ebp-374h]
  int v398[22]; // [esp+33Eh] [ebp-36Ch] BYREF
  char v399[12]; // [esp+396h] [ebp-314h] BYREF
  int v400; // [esp+3A2h] [ebp-308h]
  _BYTE v401[768]; // [esp+3AAh] [ebp-300h] BYREF

  v301 = *((_DWORD *)MEMORY[0xA8B230] + 3380);
  v0 = 0;
  v319 = (*(int (__stdcall **)(char *))(*((_DWORD *)HouseClass_Player + 9) + 24))((char *)HouseClass_Player + 36);
  LODWORD(v349) = 0;
  do
  {
    CCFileClass::Construct(v395, off_820334[v0]);
    Size = CCFileClass::GetSize(v395);
    v2 = __2_YAPAXI_Z(Size);
    v3 = CCFileClass::GetSize(v395);
    CCFileClass::Read(v395, v2, v3);
    v393[v0] = v2;
    v395[0] = (int)&vt_CCFileClass;
    v397 = 0;
    Vector::Clear((int)v396);
    v395[0] = (int)&off_7E1668;
    BufferIOFileClass::Dtor(v395);
    ++v0;
  }
  while ( v0 < 4 );
  v356 = SearchMIXFile(aLoadoutShp, 0);
  v344 = (__int16 *)SearchMIXFile(aPilotlitShp, 0);
  v352 = SearchMIXFile(g_Str_File_XXICON_SHP, 0);
  CCFileClass::Construct(v398, (&dword_820324)[v301]);
  v4 = CCFileClass::GetSize(v398);
  v5 = (__int16 *)__2_YAPAXI_Z(v4);
  v321 = (int)v5;
  v6 = CCFileClass::GetSize(v398);
  CCFileClass::Read(v398, v5, v6);
  v7 = (int *)__2_YAPAXI_Z(0x20u);
  if ( v7 )
  {
    v8 = v5[2];
    v9 = v5[1];
    SubFile = MixFileClass::GetSubFile((char **)v5, 0);
    Surface::Construct(v7, v9, v8);
    v246 = SubFile;
    v7[3] = 0;
    *v7 = (int)&XSurface_Vtable;
    v7[4] = 1;
    Buffer::Init(v7 + 5, v246, v8 * v9);
    *v7 = (int)&BSurface_Vtable;
    v299 = v7;
  }
  else
  {
    v299 = 0;
  }
  v10 = v5[2];
  v11 = v5[1];
  v269 = ((*(int (**)(void))(*(_DWORD *)MEMORY[0x88730C] + 128))() - v10) / 2;
  v12 = v401;
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88730C] + 124))(MEMORY[0x88730C]) - v11;
  v14 = 256;
  v300 = v13 / 2;
  do
  {
    Struct::Zero3(v12);
    v12 += 3;
    --v14;
  }
  while ( v14 );
  v15 = (const void *)SearchMIXFile(aDropshipPal, 0);
  memcpy(v401, v15, sizeof(v401));
  for ( i = 0; i < 256; ++i )
  {
    v17 = 3 * (i % 256);
    v18 = &v401[v17];
    LOBYTE(Blocka) = 4 * v401[v17];
    v19 = v401[v17 + 1];
    LOBYTE(v17) = v401[v17 + 2];
    HIBYTE(Blocka) = 4 * v19;
    *(_WORD *)v18 = Blocka;
    v18[2] = 4 * v17;
  }
  v20 = __2_YAPAXI_Z(0x188u);
  if ( v20 )
    v21 = ConvertClass::Construct(v20, (int)v401, (int)&MEMORY[0x885780], MEMORY[0x887308], 53, 0);
  else
    v21 = 0;
  v275 = (void (__thiscall ***)(_DWORD, int))v21;
  v22 = __2_YAPAXI_Z(0x188u);
  if ( v22 )
    v23 = ConvertClass::Construct(v22, (int)v401, (int)&MEMORY[0x885780], MEMORY[0x887308], 1, 0);
  else
    v23 = 0;
  SubFile = (int)v23;
  v24 = (const void *)SearchMIXFile(aCameoPal, 0);
  memcpy(v401, v24, sizeof(v401));
  for ( j = 0; j < 256; ++j )
  {
    v26 = 3 * (j % 256);
    v27 = &v401[v26];
    LOBYTE(Blockb) = 4 * v401[v26];
    v28 = v401[v26 + 1];
    LOBYTE(v26) = v401[v26 + 2];
    HIBYTE(Blockb) = 4 * v28;
    *(_WORD *)v27 = Blockb;
    v27[2] = 4 * v26;
  }
  v29 = __2_YAPAXI_Z(0x188u);
  if ( v29 )
    v30 = ConvertClass::Construct(v29, (int)v401, (int)&MEMORY[0x885780], MEMORY[0x887308], 1, 0);
  else
    v30 = 0;
  v338 = (void (__thiscall ***)(_DWORD, int))v30;
  SHPFrame = BuildingClass::GetSHPFrame(v21, 0);
  v340 = BuildingClass::GetSHPFrame(v30, 64);
  v343 = BuildingClass::GetSHPFrame(v23, 64);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x88730C] + 24))(MEMORY[0x88730C], 0);
  TypeList::TechnoTypeConstructor(&v306, 0, 0);
  v31 = g_CrateCount + MEMORY[0xA8E358];
  v32 = 0;
  v306 = &vt_DynamicVectorClass_TechnoTypeClass;
  v311 = 10;
  v310 = 0;
  if ( g_SuperWeaponTypeArray <= 0 )
  {
LABEL_25:
    LOBYTE(v32) = -1;
  }
  else
  {
    v33 = g_SuperWeaponTypeCount;
    while ( *v33 != *((_DWORD *)HouseClass_Player + 13) )
    {
      ++v32;
      ++v33;
      if ( v32 >= g_SuperWeaponTypeArray )
        goto LABEL_25;
    }
  }
  v34 = 1 << v32;
  v35 = MEMORY[0xA8B230];
  v318 = v34;
  if ( *((int *)MEMORY[0xA8B230] + 3385) > 0 )
  {
    v36 = 0;
    v37 = v308;
    v38 = v318;
    while ( 1 )
    {
      v39 = *(_DWORD *)(v35[3382] + 4 * v36);
      if ( (v38 & *(_DWORD *)(v39 + 1740)) != 0 && *(_DWORD *)(v35[3389] + 4 * v36) )
      {
        if ( v310 < v37 )
          goto LABEL_35;
        if ( !BYTE1(v309) && v37 || v311 <= 0 )
          goto LABEL_37;
        if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v306[2])(&v306, v311 + v37, 0) )
        {
LABEL_35:
          v40 = v310++;
          *((_DWORD *)v307 + v40) = v39;
        }
        v35 = MEMORY[0xA8B230];
        v37 = v308;
      }
LABEL_37:
      if ( ++v36 >= v35[3385] )
        goto LABEL_56;
    }
  }
  for ( k = 0; k < v31; ++k )
  {
    if ( k >= MEMORY[0xA8E358] )
      v42 = (_DWORD *)*((_DWORD *)g_UnitTypeCount2 + k - MEMORY[0xA8E358]);
    else
      v42 = (_DWORD *)*((_DWORD *)MEMORY[0xA8E34C] + k);
    if ( v42[397] <= *((_DWORD *)HouseClass_Player + 117)
      && ((*(int (__thiscall **)(_DWORD *))(*v42 + 44))(v42) != 16 || v42[239] != 1)
      && v42[397] != -1
      && (*(int (__thiscall **)(_DWORD *))(*v42 + 172))(v42) > 10
      && (v42[435] & v318) != 0
      && (v310 < v308
       || (BYTE1(v309) || !v308)
       && v311 > 0
       && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v306[2])(&v306, v311 + v308, 0)) )
    {
      v43 = v310++;
      *((_DWORD *)v307 + v43) = v42;
    }
  }
LABEL_56:
  v44 = 0;
  v281 = 0;
  v274 = 0;
  v318 = 5 * v301 + 10;
  v273 = v310 > 8;
  v45 = __2_YAPAXI_Z(4 * v318);
  Block = v45;
  v305 = 0;
  v46 = 1;
  do
  {
    v47 = __2_YAPAXI_Z(0x60u);
    if ( v47 )
    {
      if ( v44 >= v310 )
        v48 = v352;
      else
        v48 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)v307 + v44) + 152))(*((_DWORD *)v307 + v44));
      v49 = ShapeButtonClass::Constructor(
              v47,
              v46,
              v48,
              v300 + 68 * (v44 % 2) + 491,
              v269 + 50 * (v44 / 2) + 25,
              0,
              0,
              1);
    }
    else
    {
      v49 = 0;
    }
    v49[20] = MEMORY[0x87F6B0];
    v45[v44] = v49;
    if ( v44 )
      (*(void (__thiscall **)(_DWORD *, _BYTE *))(*v49 + 12))(v49, v305);
    else
      v305 = (_BYTE *)*v45;
    ++v46;
    ++v44;
  }
  while ( v44 < 8 );
  v50 = __2_YAPAXI_Z(0x60u);
  if ( v50 )
  {
    v51 = SearchMIXFile(aDropupShp, 0);
    v52 = ShapeButtonClass::Constructor(v50, v46, v51, v300 + 527, v269 + 229, 0, 0, 0);
  }
  else
  {
    v52 = 0;
  }
  *((_DWORD *)v52 + 20) = v275;
  v52[29] = 1;
  v45[8] = v52;
  (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v52 + 12))(v52, v305);
  v53 = v46 + 1;
  v54 = __2_YAPAXI_Z(0x60u);
  if ( v54 )
  {
    v55 = SearchMIXFile(aDropdownShp, 0);
    v56 = ShapeButtonClass::Constructor(v54, v53, v55, v300 + 557, v269 + 229, 0, 0, 0);
  }
  else
  {
    v56 = 0;
  }
  *((_DWORD *)v56 + 20) = v275;
  v56[29] = 1;
  v45[9] = v56;
  (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v56 + 12))(v56, v305);
  v57 = 0;
  v58 = v53 + 1;
  for ( m = 0; v57 < v301; m = v57 )
  {
    v59 = 0;
    v60 = 0;
    v302 = &Block[v58 - 1];
    do
    {
      v61 = __2_YAPAXI_Z(0x60u);
      if ( v61 )
      {
        v62 = v60;
        if ( v60 >= 132 )
          v62 = v60 - 132;
        v63 = ShapeButtonClass::Constructor(
                v61,
                v58,
                0,
                v62 + v300 + 53,
                v269 + dword_7E841C[8 * v301 - 15 + 4 * v57 + 4 * v301 + 2 * v301 + v59 + v57 + v301],
                0,
                0,
                0);
        v57 = m;
      }
      else
      {
        v63 = 0;
      }
      v63[20] = MEMORY[0x87F6B0];
      *v302 = v63;
      (*(void (__thiscall **)(_DWORD *, _BYTE *))(*v63 + 12))(v63, v305);
      ++v58;
      v60 += 66;
      ++v59;
      ++v302;
    }
    while ( v60 < 330 );
    ++v57;
  }
  GadgetClass::Show(v305);
  v289 = 1;
  v268 = 0;
  memset(v354, 255, sizeof(v354));
  v365 = 0;
  v366 = 0;
  v367 = 0;
  v260 = 0;
  ((void (__stdcall *)(_DWORD, _DWORD))LoadScreen::InitVtable)(0, 0);
  v322 = &DynamicVectorClass<ButtonFadeEffect *>::`vftable';
  v327 = 10;
  v326 = 0;
  Time = timeGetTime();
  v342 = Time;
  v350 = 0;
  v351 = 0;
  v303 = -1;
  Ticks = Timer::GetTicks();
  v337 = 5;
  v345 = 0;
  ((void (__stdcall *)(_DWORD, _DWORD))LoadScreen::Constructor)(0, 0);
  v312 = &DynamicVectorClass<CrossDissolveEffect *>::`vftable';
  v317 = 10;
  kk = 0;
  v290 = 0;
  v353 = 0;
  v320 = -1;
  v304 = 0;
  TypeList::TechnoTypeConstructor(&v329, 0, 0);
  v329 = &vt_DynamicVectorClass_TechnoTypeClass;
  v334 = 10;
  v333 = 0;
  v346 = *(_DWORD *)MEMORY[0x87E8A4];
  v347 = *((_DWORD *)MEMORY[0x87E8A4] + 1);
  v348 = *((_QWORD *)MEMORY[0x87E8A4] + 1);
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]);
  v64 = MEMORY[0x87E8A4];
  if ( MEMORY[0x87E8A4] )
  {
    StreamObj::Release(MEMORY[0x87E8A4]);
    __3_YAXPAX_Z(v64);
  }
  MEMORY[0x87E8A4] = 0;
  v65 = __2_YAPAXI_Z(0x30u);
  if ( v65 )
  {
    v66 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88730C] + 128))(MEMORY[0x88730C]);
    v67 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88730C] + 124))(MEMORY[0x88730C]);
    MEMORY[0x87E8A4] = BSurface::Construct(v65, 0, 0, v67, v66);
  }
  else
  {
    MEMORY[0x87E8A4] = 0;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]);
  MEMORY[0x887314] = MEMORY[0x88730C];
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]);
  do
  {
    v251 = 0;
    if ( MEMORY[0x8A00A0] )
    {
      MEMORY[0x8A00A0] = 0;
    }
    else if ( !(_BYTE)v289 )
    {
      goto LABEL_108;
    }
    v390[0] = v300;
    v68 = 0;
    v390[1] = v269;
    v390[2] = *(__int16 *)(v321 + 2);
    LOBYTE(v289) = 0;
    v251 = 1;
    v390[3] = *(__int16 *)(v321 + 4);
    v359[0] = 0;
    v359[1] = 0;
    DrawToSurfaceSHP(MEMORY[0x88730C], (int)v275, v321, 0, v359, v390, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
    v253 = 0;
    if ( v318 > 0 )
    {
      v69 = Block;
      v262 = 4 * v281;
      do
      {
        v70 = -1;
        if ( v68 + v281 < v310 )
        {
          v71 = *((_DWORD *)MEMORY[0xA8B230] + 3385);
          if ( v71 && (v70 = 0, v71 > 0) )
          {
            while ( *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3382) + 4 * v70) != *(_DWORD *)((char *)v307 + v262)
                 || *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3389) + 4 * v70) == -1 )
            {
              if ( ++v70 >= v71 )
              {
                v68 = v253;
                goto LABEL_100;
              }
            }
            v68 = v253;
          }
          else
          {
LABEL_100:
            v70 = -1;
          }
        }
        if ( v68 >= 8
          || v70 == -1
          || *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3396) + 4 * v70) < *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230]
                                                                                       + 3389)
                                                                                     + 4 * v70) )
        {
          StreamClass::WriteBytes(
            (_DWORD **)MEMORY[0x87E8A4],
            0x7Fu,
            v300 + *(_BYTE *)(*v69 + 12),
            v269 + *(_DWORD *)(*v69 + 16),
            64,
            48);
        }
        else
        {
          StreamClass::WriteBytes(
            (_DWORD **)MEMORY[0x87E8A4],
            0x3Fu,
            v300 + *(_BYTE *)(*v69 + 12),
            v269 + *(_DWORD *)(*v69 + 16),
            64,
            48);
        }
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*v69 + 108))(*v69, 0);
        ++v68;
        ++v69;
        v253 = v68;
        v262 += 4;
      }
      while ( v68 < v318 );
    }
LABEL_108:
    Event::Dispatch();
    v72 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v305 + 40))(v305);
    if ( v268 || (v72 & 0x8000) == 0 )
    {
      if ( v72 == 32 )
        HIBYTE(v289) = 1;
      goto LABEL_252;
    }
    v73 = v72 & 0xFFFF7FFF;
    v254 = v73;
    v350 = timeGetTime();
    if ( v73 <= 8 && v304 < 5 * v301 )
    {
      v74 = v73 + v281 - 1;
      v291 = v74;
      if ( v74 >= 0 && v74 < v310 )
      {
        v75 = *((_DWORD *)v307 + v73 + v281 - 1);
        v76 = *((_DWORD *)MEMORY[0xA8B230] + 3385);
        v295 = v75;
        if ( v76 && (v77 = 0, v76 > 0) )
        {
          while ( *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3382) + 4 * v77) != v75
               || *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3389) + 4 * v77) == -1 )
          {
            if ( ++v77 >= v76 )
              goto LABEL_119;
          }
          v78 = v77;
        }
        else
        {
LABEL_119:
          v78 = -1;
        }
        v263 = v78;
        v79 = (*(int (__thiscall **)(int))(*(_DWORD *)v75 + 172))(v75);
        if ( v319 - v79 >= 0
          && (v78 == -1
           || *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3396) + 4 * v78) < *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230]
                                                                                        + 3389)
                                                                                      + 4 * v78)) )
        {
          v80 = *(_DWORD *)Block[v304 + 10];
          v81 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v75 + 152))(v75, 0, 0);
          (*(void (__thiscall **)(_DWORD, int))(v80 + 136))(Block[v304 + 10], v81);
          v82 = (*(int (__thiscall **)(int))(*(_DWORD *)v75 + 152))(v75);
          v83 = (_DWORD *)Block[v304 + 10];
          v84 = v82;
          v85 = __2_YAPAXI_Z(0x20u);
          if ( v85 )
          {
            v86 = *(__int16 *)(v84 + 2);
            v276 = *(__int16 *)(v84 + 4);
            v282 = MixFileClass::GetSubFile((char **)v84, 0);
            Surface::Construct(v85, v86, v276);
            v85[3] = 0;
            *v85 = &XSurface_Vtable;
            v85[4] = 1;
            Buffer::Init(v85 + 5, v282, v276 * v86);
            *v85 = &BSurface_Vtable;
            v75 = v295;
            v277 = v85;
          }
          else
          {
            v277 = 0;
          }
          v87 = __2_YAPAXI_Z(0x4Cu);
          if ( v87 )
          {
            v88 = v83[3];
            v89 = v83[4];
            v283 = v83[5];
            v90 = *(__int16 *)(v84 + 4);
            v362 = *(__int16 *)(v84 + 2);
            v363 = v90;
            v91 = v83[6];
            v361 = 0;
            v87[14] = 0;
            *v87 = v88 - v300;
            v87[1] = v89 - v269;
            v87[2] = v283;
            v87[3] = v91;
            v87[4] = 0;
            v87[5] = v361;
            v87[6] = v362;
            v87[7] = v363;
            v87[8] = v88;
            v87[12] = v299;
            v87[9] = v89;
            v87[10] = v283;
            v87[13] = v277;
            v87[11] = v91;
            v92 = timeGetTime();
            v93 = v343;
            v94 = v340;
            v75 = v295;
            v87[15] = v92;
            v87[16] = v93;
            v87[17] = v94;
            *((_BYTE *)v87 + 72) = 0;
          }
          else
          {
            v87 = 0;
          }
          if ( kk < v314
            || (BYTE1(v315) || !v314)
            && v317 > 0
            && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v312[2])(&v312, v317 + v314, 0) )
          {
            v95 = kk++;
            *((_DWORD *)v313 + v95) = v87;
          }
          if ( v263 != -1 )
            ++*(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3396) + 4 * v263);
          if ( v333 < v331
            || (BYTE1(v332) || !v331)
            && v334 > 0
            && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v329[2])(&v329, v334 + v331, 0) )
          {
            v96 = v333++;
            *((_DWORD *)v330 + v96) = v75;
          }
          v251 = 1;
          ++v304;
          v268 = 1;
          v97 = (v254 - 1) / 2;
          if ( v354[v97] == -1 )
          {
            v354[v97] = 0;
            *((_DWORD *)&v365 + v97) = timeGetTime();
          }
          v98 = 0;
          v260 = 1;
          if ( v326 <= 0 )
          {
            v100 = v291;
LABEL_152:
            v101 = (DWORD *)__2_YAPAXI_Z(0x14u);
            if ( v101 )
            {
              *v101 = timeGetTime();
              v101[1] = v100;
              v101[2] = 1123942400;
              v101[3] = -1082130432;
              *((_BYTE *)v101 + 16) = 0;
            }
            else
            {
              v101 = 0;
            }
            if ( v263 != -1
              && *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3396) + 4 * v263) >= *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230]
                                                                                             + 3389)
                                                                                           + 4 * v263) )
            {
              v290 = 1;
              *((_BYTE *)v101 + 16) = 1;
            }
            if ( v326 < v324
              || (BYTE1(v325) || !v324)
              && v327 > 0
              && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v322[2])(&v322, v327 + v324, 0) )
            {
              v102 = v326++;
              *((_DWORD *)v323 + v102) = v101;
            }
          }
          else
          {
            v99 = (char *)v323;
            v100 = v291;
            while ( *(_DWORD *)(*(_DWORD *)v99 + 4) != v291 )
            {
              ++v98;
              v99 += 4;
              if ( v98 >= v326 )
                goto LABEL_152;
            }
          }
          v103 = (*(int (__thiscall **)(int))(*(_DWORD *)v75 + 172))(v75);
          v319 -= v103;
        }
      }
      goto LABEL_252;
    }
    if ( v73 == 9 )
    {
      if ( !v274 )
        goto LABEL_252;
      v104 = v281 - 2;
LABEL_171:
      v105 = Block;
      v106 = v104;
      v281 = v104;
      v292 = v104;
      v107 = 4 * v104;
      v278 = 8;
      v296 = 4 * v104;
      do
      {
        if ( v106 >= v310 )
          v108 = v352;
        else
          v108 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)((char *)v307 + v107) + 152))(*(_DWORD *)((char *)v307 + v107));
        (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(*(_DWORD *)*v105 + 136))(*v105, v108, 0, 0);
        if ( v106 >= v310 )
          goto LABEL_182;
        v109 = *((_DWORD *)MEMORY[0xA8B230] + 3385);
        if ( !v109 )
          goto LABEL_182;
        v110 = 0;
        if ( v109 <= 0 )
          goto LABEL_182;
        while ( *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3382) + 4 * v110) != *(_DWORD *)((char *)v307 + v107)
             || *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3389) + 4 * v110) == -1 )
        {
          if ( ++v110 >= v109 )
            goto LABEL_182;
        }
        if ( v110 == -1
          || *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3396) + 4 * v110) < *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230]
                                                                                        + 3389)
                                                                                      + 4 * v110) )
        {
LABEL_182:
          StreamClass::WriteBytes(
            (_DWORD **)MEMORY[0x87E8A4],
            0x7Fu,
            *(_DWORD *)(*v105 + 12),
            *(_DWORD *)(*v105 + 16),
            64,
            48);
        }
        else
        {
          StreamClass::WriteBytes(
            (_DWORD **)MEMORY[0x87E8A4],
            0x3Fu,
            *(_DWORD *)(*v105 + 12),
            *(_DWORD *)(*v105 + 16),
            64,
            48);
        }
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*v105 + 108))(*v105, 1);
        ++v105;
        v106 = v292 + 1;
        v107 = v296 + 4;
        v111 = v278 == 1;
        ++v292;
        v296 += 4;
        --v278;
      }
      while ( !v111 );
      *(_BYTE *)(Block[v254 - 1] + 44) = 0;
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)Block[v254 - 1] + 108))(Block[v254 - 1], 1);
      v274 = v281 != 0;
      v251 = 1;
      v273 = v281 < v310 - 8;
      goto LABEL_252;
    }
    if ( v73 == 10 )
    {
      if ( !v273 )
        goto LABEL_252;
      v104 = v281 + 2;
      goto LABEL_171;
    }
    if ( v73 >= 11 && v73 < 5 * v301 + 11 )
    {
      v112 = v73 - 11;
      if ( v73 - 11 < v333 )
      {
        v113 = MEMORY[0xA8B230];
        v114 = *((_DWORD *)MEMORY[0xA8B230] + 3385);
        if ( v114 )
        {
          v115 = 0;
          if ( v114 > 0 )
          {
            v116 = *((_DWORD *)v330 + v112);
            while ( *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3382) + 4 * v115) != v116
                 || *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3389) + 4 * v115) == -1 )
            {
              if ( ++v115 >= v114 )
                goto LABEL_216;
            }
            if ( v115 != -1 )
            {
              if ( *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3396) + 4 * v115) >= *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230]
                                                                                               + 3389)
                                                                                             + 4 * v115) )
              {
                v117 = 0;
                if ( v310 > 0 )
                {
                  v118 = v307;
                  while ( *v118 != v116 )
                  {
                    ++v117;
                    ++v118;
                    if ( v117 >= v310 )
                      goto LABEL_215;
                  }
                  v119 = (DWORD *)__2_YAPAXI_Z(0x14u);
                  if ( v119 )
                  {
                    *v119 = timeGetTime();
                    v119[1] = v117;
                    v119[2] = 1123942400;
                    v119[3] = -1082130432;
                    *((_BYTE *)v119 + 16) = 0;
                  }
                  else
                  {
                    v119 = 0;
                  }
                  v119[3] = 1065353216;
                  v119[2] = 1115422720;
                  if ( v326 < v324
                    || (BYTE1(v325) || !v324)
                    && v327 > 0
                    && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v322[2])(&v322, v327 + v324, 0) )
                  {
                    v120 = v326++;
                    *((_DWORD *)v323 + v120) = v119;
                  }
                  v113 = MEMORY[0xA8B230];
                }
              }
LABEL_215:
              --*(_DWORD *)(v113[3396] + 4 * v115);
            }
          }
        }
LABEL_216:
        v121 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)v330 + v112) + 172))(*((_DWORD *)v330 + v112));
        v319 += v121;
        if ( v112 < v333 )
        {
          v122 = v112;
          if ( v112 < --v333 )
          {
            do
            {
              ++v122;
              *((_DWORD *)v330 + v122 - 1) = *((_DWORD *)v330 + v122);
            }
            while ( v122 < v333 );
          }
        }
        v251 = 1;
        if ( v304 - v112 - 1 > 0 )
        {
          v279 = v304 - v112 - 1;
          v255 = &Block[v254];
          do
          {
            v123 = (_DWORD *)*(v255 - 1);
            v124 = v123[22];
            v125 = __2_YAPAXI_Z(0x20u);
            if ( v125 )
            {
              v126 = *(__int16 *)(v124 + 4);
              v284 = *(__int16 *)(v124 + 2);
              v127 = MixFileClass::GetSubFile((char **)v124, 0);
              v125[2] = v126;
              v125[3] = 0;
              *v125 = &XSurface_Vtable;
              v125[1] = v284;
              v125[4] = 1;
              Buffer::Init(v125 + 5, v127, v284 * v126);
              *v125 = &BSurface_Vtable;
              v293 = v125;
            }
            else
            {
              v293 = 0;
            }
            (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*v123 + 136))(
              v123,
              *(_DWORD *)(*v255 + 88),
              0,
              0);
            v128 = v123[22];
            v129 = __2_YAPAXI_Z(0x20u);
            if ( v129 )
            {
              v130 = *(__int16 *)(v128 + 2);
              v285 = *(__int16 *)(v128 + 4);
              v131 = MixFileClass::GetSubFile((char **)v128, 0);
              v129[1] = v130;
              v129[3] = 0;
              *v129 = &XSurface_Vtable;
              v129[2] = v285;
              v129[4] = 1;
              Buffer::Init(v129 + 5, v131, v285 * v130);
              *v129 = &BSurface_Vtable;
              v297 = v129;
            }
            else
            {
              v297 = 0;
            }
            v132 = __2_YAPAXI_Z(0x4Cu);
            if ( v132 )
            {
              v133 = v123[3];
              v134 = v123[4];
              v135 = v123[5];
              v136 = v123[6];
              v132[14] = 0;
              *v132 = 0;
              v132[1] = 0;
              v132[2] = v135;
              v132[3] = v136;
              v132[4] = 0;
              v132[5] = 0;
              v132[8] = v133;
              v132[6] = v135;
              v132[9] = v134;
              v132[7] = v136;
              v132[12] = v293;
              v132[10] = v135;
              v132[13] = v297;
              v132[11] = v136;
              v132[15] = timeGetTime();
              v137 = v340;
              v132[16] = v340;
              v132[17] = v137;
              *((_BYTE *)v132 + 72) = 0;
            }
            else
            {
              v132 = 0;
            }
            if ( kk < v314
              || (BYTE1(v315) || !v314)
              && v317 > 0
              && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v312[2])(&v312, v317 + v314, 0) )
            {
              v138 = kk++;
              *((_DWORD *)v313 + v138) = v132;
            }
            v111 = v279 == 1;
            ++v255;
            --v279;
          }
          while ( !v111 );
        }
        v139 = (_DWORD *)Block[v304 + 9];
        v140 = v139[22];
        v141 = __2_YAPAXI_Z(0x20u);
        if ( v141 )
        {
          v142 = *(__int16 *)(v140 + 2);
          v286 = *(__int16 *)(v140 + 4);
          v143 = MixFileClass::GetSubFile((char **)v140, 0);
          v141[1] = v142;
          v141[3] = 0;
          *v141 = &XSurface_Vtable;
          v141[2] = v286;
          v141[4] = 1;
          Buffer::Init(v141 + 5, v143, v286 * v142);
          *v141 = &BSurface_Vtable;
          v294 = v141;
        }
        else
        {
          v294 = 0;
        }
        v144 = __2_YAPAXI_Z(0x4Cu);
        if ( v144 )
        {
          v145 = v139[3];
          v287 = v139[5];
          v298 = v139[6];
          v280 = v139[4];
          v391 = *(__int16 *)(v140 + 2);
          v392 = *(__int16 *)(v140 + 4);
          v144[14] = 0;
          *v144 = 0;
          v144[1] = 0;
          v144[2] = v391;
          v144[3] = v392;
          v144[4] = v145 - v300;
          v144[5] = v280 - v269;
          v144[6] = v287;
          v144[7] = v298;
          v144[8] = v145;
          v144[9] = v280;
          v144[10] = v287;
          v144[12] = v294;
          v144[11] = v298;
          v144[13] = v299;
          v146 = timeGetTime();
          v147 = v340;
          v144[15] = v146;
          v148 = v343;
          v144[16] = v147;
          v144[17] = v148;
          *((_BYTE *)v144 + 72) = 0;
        }
        else
        {
          v144 = 0;
        }
        if ( kk < v314
          || (BYTE1(v315) || !v314)
          && v317 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v312[2])(&v312, v317 + v314, 0) )
        {
          v149 = kk++;
          *((_DWORD *)v313 + v149) = v144;
        }
        (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*v139 + 136))(v139, 0, 0, 0);
        --v304;
      }
    }
LABEL_252:
    v150 = (_BYTE *)Block[8];
    if ( v150[44] && v274 && !v268 )
    {
      (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v150 + 108))(v150, 0);
      v251 = 1;
    }
    v151 = (_BYTE *)Block[9];
    if ( v151[44] && v273 && !v268 )
    {
      (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v151 + 108))(v151, 0);
      v251 = 1;
    }
    v152 = timeGetTime;
    v256 = 0;
    for ( n = 0; n < 16; v256 = n )
    {
      v154 = *(_DWORD *)((char *)v354 + n);
      if ( v154 != -1 )
      {
        v155 = (v152() - *(_DWORD *)((char *)&v365 + n)) / 0x64;
        if ( v155 != v154 || v260 )
        {
          v156 = v269 + *(int *)((char *)&dword_7E84D0 + n);
          v157 = *(__int16 **)((char *)v393 + n);
          if ( v155 <= v157[3] )
          {
            v380[1] = v269 + *(int *)((char *)&dword_7E84D0 + n);
            v380[3] = v157[2];
            v380[0] = v300 + 371;
            v380[2] = v157[1];
            v358[0] = 0;
            v358[1] = 0;
            DrawToSurfaceSHP(MEMORY[0x88730C], (int)v275, (int)v157, v154, v358, v380, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
            n = v256;
            *(_DWORD *)((char *)v354 + v256) = v155;
          }
          else
          {
            v389[0] = v300 + 371;
            v158 = v157[1];
            v159 = v157[2];
            v387[0] = 371;
            v389[1] = v156;
            v387[1] = v156 - v269;
            v389[3] = v159;
            v387[3] = v159;
            v389[2] = v158;
            v364[0] = 0;
            v364[1] = 0;
            v387[2] = v158;
            BlitterDrawSHP(
              (int *)MEMORY[0x88730C],
              (int)v275,
              v299,
              v387,
              v364,
              v389,
              0,
              (int *)SHPFrame,
              0,
              0,
              1000,
              0,
              0);
            *(_DWORD *)((char *)v354 + n) = -1;
          }
          v152 = timeGetTime;
          v251 = 1;
        }
      }
      n += 4;
    }
    v160 = v326 - 1;
    for ( ii = v326 - 1; v160 >= 0; ii = v160 )
    {
      v161 = *((_DWORD *)v323 + v160);
      if ( *(float *)(v161 + 12) >= 0.0 )
      {
        v264 = (10 * v152() - 10 * *(_DWORD *)v161) / 0x46 + 63;
        if ( v264 > 127 )
          v264 = 127;
      }
      else
      {
        v264 = 127 - (10 * v152() - 10 * *(_DWORD *)v161) / 0x46;
        if ( v264 < 63 )
        {
          v264 = 63;
          *(_DWORD *)(v161 + 12) = 1065353216;
          *(_DWORD *)v161 = v152();
        }
      }
      v162 = (double)v264;
      v265 = v162;
      if ( v162 != *(float *)(v161 + 8) )
      {
        v163 = *(_DWORD *)(v161 + 4);
        *(float *)(v161 + 8) = v265;
        if ( v163 >= v281 && v163 <= v281 + 8 )
        {
          v164 = v163 - v281;
          v165 = Math::RoundToInt(v265);
          StreamClass::WriteBytes(
            (_DWORD **)MEMORY[0x87E8A4],
            v165,
            v300 + 68 * (v164 % 2) - 21,
            v269 + 50 * (v164 / 2) + 25,
            64,
            48);
          (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)Block[v164] + 108))(Block[v164], 1);
          v152 = timeGetTime;
          v160 = ii;
          v251 = 1;
        }
        if ( *(_DWORD *)(v161 + 8) == 1123942400 || *(_BYTE *)(v161 + 16) && *(_DWORD *)(v161 + 8) == 1115422720 )
        {
          __3_YAXPAX_Z((void *)v161);
          if ( v160 < v326 )
          {
            v166 = v160;
            if ( v160 < --v326 )
            {
              do
              {
                ++v166;
                *((_DWORD *)v323 + v166 - 1) = *((_DWORD *)v323 + v166);
              }
              while ( v166 < v326 );
            }
          }
        }
      }
      --v160;
    }
    if ( kk )
    {
      v167 = 0;
      v266 = 0;
      if ( kk > 0 )
      {
        v168 = 0;
        for ( jj = 0; ; v168 = jj )
        {
          v169 = 0;
          v261 = 1;
          v170 = *((_DWORD *)v313 + v167);
          if ( v168 >= 1 )
          {
            v171 = (char *)v313 + 4 * v167 - 4;
            v172 = v168;
            do
            {
              v173 = *(_DWORD *)v171;
              if ( *(_DWORD *)(*(_DWORD *)v171 + 32) == *(_DWORD *)(v170 + 32)
                && *(_DWORD *)(v173 + 36) == *(_DWORD *)(v170 + 36)
                && *(_DWORD *)(v173 + 40) == *(_DWORD *)(v170 + 40)
                && *(_DWORD *)(v173 + 44) == *(_DWORD *)(v170 + 44) )
              {
                v261 = 0;
                if ( v169 || *(_BYTE *)(v173 + 72) )
                  v169 = 1;
                v167 = v266;
              }
              v171 -= 4;
              --v172;
            }
            while ( v172 );
          }
          if ( (7 * timeGetTime() - 7 * *(_DWORD *)(v170 + 60)) / 0x1E <= 0xFF )
            v174 = (7 * timeGetTime() - 7 * *(_DWORD *)(v170 + 60)) / 0x1E;
          else
            v174 = 255;
          if ( v174 != *(_DWORD *)(v170 + 56) || v169 )
          {
            *(_DWORD *)(v170 + 56) = v174;
            if ( v261 )
            {
              v244 = *(int **)(v170 + 64);
              v175 = *(int **)(v170 + 48);
              v357[0] = 0;
              v357[1] = 0;
              BlitterDrawSHP(
                (int *)MEMORY[0x88730C],
                (int)v275,
                v175,
                (_DWORD *)v170,
                v357,
                (_DWORD *)(v170 + 32),
                0,
                v244,
                0,
                0,
                1000,
                0,
                0);
            }
            StreamClass::WriteBytes(
              (_DWORD **)MEMORY[0x87E8A4],
              *(_WORD *)(v170 + 56),
              *(_DWORD *)(v170 + 32),
              *(_DWORD *)(v170 + 36),
              *(_DWORD *)(v170 + 40),
              *(_DWORD *)(v170 + 44));
            v245 = *(int **)(v170 + 68);
            v176 = *(int **)(v170 + 52);
            v371[0] = 0;
            v371[1] = 0;
            BlitterDrawSHP(
              (int *)MEMORY[0x88730C],
              (int)v338,
              v176,
              (_DWORD *)(v170 + 16),
              v371,
              (_DWORD *)(v170 + 32),
              0,
              v245,
              0,
              0,
              1000,
              0,
              0);
            *(_BYTE *)(v170 + 72) = 1;
            v167 = v266;
            v251 = 1;
          }
          if ( v174 == 255 )
          {
            v177 = *(int **)(v170 + 48);
            if ( v177 != v299 && v177 )
              (*(void (__thiscall **)(int *, int))*v177)(v177, 1);
            v178 = *(int **)(v170 + 52);
            if ( v178 != v299 && v178 )
              (*(void (__thiscall **)(int *, int))*v178)(v178, 1);
            __3_YAXPAX_Z((void *)v170);
            v179 = kk;
            if ( v167 < kk )
            {
              v179 = kk - 1;
              v180 = v167;
              for ( kk = v179; v180 < kk; v179 = kk )
              {
                ++v180;
                *((_DWORD *)v313 + v180 - 1) = *((_DWORD *)v313 + v180);
              }
            }
            --v167;
            --jj;
          }
          else
          {
            v179 = kk;
          }
          v266 = ++v167;
          ++jj;
          if ( v167 >= v179 )
            break;
        }
      }
    }
    v181 = timeGetTime();
    v182 = v356;
    v183 = *(__int16 *)(v356 + 6);
    v268 = v181 - v350 < 0x12C;
    v184 = (timeGetTime() - Time) / 0xFA % v183;
    if ( v184 != v345 )
    {
      v388[0] = v300 + 45;
      v388[1] = v269;
      v185 = *(__int16 *)(v182 + 2);
      v373[0] = 0;
      v373[1] = 0;
      v388[2] = v185;
      v186 = *(__int16 *)(v182 + 4);
      v345 = v184;
      v388[3] = v186;
      DrawToSurfaceSHP(MEMORY[0x88730C], (int)v275, v182, v184, v373, v388, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
      v251 = 1;
    }
    v187 = timeGetTime();
    v188 = v319;
    v189 = LODWORD(v349);
    v190 = v187;
    if ( v319 == LODWORD(v349) )
    {
      v342 = v187;
LABEL_333:
      v195 = v300;
      goto LABEL_334;
    }
    v191 = v187 - v342;
    if ( v187 - v342 < 0x32 )
      goto LABEL_333;
    v372 = v191;
    v192 = LODWORD(v349);
    v288 = (double)(int)abs32(v319 - LODWORD(v349));
    v349 = (double)v191;
    if ( Math::Sqrt(v288) * v349 * 0.04 >= v288 )
      v193 = v288;
    else
      v193 = Math::Sqrt(v288) * v349 * 0.04;
    v194 = Math::RoundToInt(v193);
    if ( v188 < v189 )
      v194 = -v194;
    v195 = v300;
    v196 = v194 + v189;
    v247 = SHPFrame;
    v368[0] = v300 + 500;
    v368[1] = v269 + 385;
    LODWORD(v349) = v196;
    String = GetStringCSF(aTxtCreditsColo, 0, aDRa2mdpostDrop, 873);
    TextRenderer::RenderCentered(v192, v196, v299, v368, String, 0, (int)v275, v247, v248);
    v251 = 1;
    v342 = v190;
LABEL_334:
    if ( v303 < 0 )
    {
      v200 = v337;
      if ( Ticks != -1 )
      {
        v201 = Timer::GetTicks() - Ticks;
        if ( v201 >= v200 )
          goto LABEL_344;
        v200 -= v201;
      }
      if ( !v200 )
      {
LABEL_344:
        if ( (double)Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2147483646) * 4.656612877414201e-10 < 0.02 )
        {
          v303 = 0;
          v351 = timeGetTime();
          v381[0] = v195 + 284;
          v381[1] = v269 + 151;
          v381[2] = v344[1];
          v381[3] = v344[2];
          v370[0] = 0;
          v370[1] = 0;
          DrawToSurfaceSHP(MEMORY[0x88730C], (int)v275, (int)v344, 0, v370, v381, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
          v251 = 1;
        }
        v374 = Timer::GetTicks();
        Ticks = v374;
        v376 = 5;
        v336 = v375;
        v337 = 5;
      }
    }
    else
    {
      v198 = (timeGetTime() - v351) / 0x96;
      if ( v198 != v303 )
      {
        if ( v198 >= v344[3] )
        {
          v384[1] = v269 + 151;
          v199 = v344[1];
          v385 = v344[2];
          v386[3] = v385;
          v384[0] = v195 + 284;
          v384[2] = v199;
          v386[2] = v199;
          v303 = -1;
          v360[0] = 0;
          v360[1] = 0;
          v386[0] = 284;
          v386[1] = 151;
          BlitterDrawSHP(
            (int *)MEMORY[0x88730C],
            (int)v275,
            v299,
            v386,
            v360,
            v384,
            0,
            (int *)SHPFrame,
            0,
            0,
            1000,
            0,
            0);
          v377 = Timer::GetTicks();
          Ticks = v377;
          v379 = 60;
          v336 = v378;
          v337 = 60;
        }
        else
        {
          v383[0] = v195 + 284;
          v383[1] = v269 + 151;
          v383[2] = v344[1];
          v383[3] = v344[2];
          v303 = v198;
          v369[0] = 0;
          v369[1] = 0;
          DrawToSurfaceSHP(MEMORY[0x88730C], (int)v275, (int)v344, v198, v369, v383, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
        }
        v251 = 1;
      }
    }
    v202 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)MEMORY[0x887640] + 52))(MEMORY[0x887640], v394);
    v203 = *v202;
    v204 = 0;
    v205 = v202[1];
    if ( *v202 < v195 + 491 || v203 >= v195 + 627 || v205 < v269 + 25 || v205 >= v269 + 225 )
    {
      v208 = -1;
      v267 = v320;
      v320 = -1;
    }
    else
    {
      v206 = (v205 - v269 - 25) / 50;
      if ( v203 < v195 + 68 * ((v203 - v195 - 491) / 68) + 491
        || v203 >= v195 + 68 * ((v203 - v195 - 491) / 68) + 555
        || v205 < v269 + 50 * v206 + 25
        || v205 >= v269 + 50 * v206 + 73
        || (v207 = (v203 - v195 - 491) / 68 + 2 * v206, v207 + v281 >= v310) )
      {
        v195 = v300;
        v208 = -1;
        v267 = v320;
        v204 = 0;
        v320 = -1;
      }
      else
      {
        v195 = v300;
        v208 = v207;
        v204 = (wchar_t *)*((_DWORD *)v307 + v207 + v281);
        v267 = v320;
        v320 = v207;
      }
    }
    v209 = MEMORY[0xA8B230];
    v210 = *((_DWORD *)MEMORY[0xA8B230] + 3385);
    if ( !v210 )
      goto LABEL_364;
    v211 = 0;
    if ( v210 <= 0 )
      goto LABEL_364;
    while ( *(wchar_t **)(*((_DWORD *)MEMORY[0xA8B230] + 3382) + 4 * v211) != v204
         || *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3389) + 4 * v211) == -1 )
    {
      if ( ++v211 >= v210 )
        goto LABEL_364;
    }
    if ( v211 == -1 )
LABEL_364:
      LOBYTE(v339) = 1;
    else
      LOBYTE(v339) = *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3396) + 4 * v211) < *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230]
                                                                                                + 3389)
                                                                                              + 4 * v211);
    if ( v204 == v353 && !v290 )
    {
      v212 = v251;
    }
    else
    {
      v353 = v204;
      DisplayBuildingInfoPanel(v299, v275, v204, v339);
      v209 = MEMORY[0xA8B230];
      v212 = 1;
    }
    v260 = 0;
    if ( v212 )
    {
      if ( v208 != v267 && v267 != -1 )
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)Block[v267] + 108))(Block[v267], 1);
      if ( v208 != -1 )
      {
        if ( (_BYTE)v339 )
        {
          v213 = 255 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0];
          v214 = 0;
        }
        else
        {
          v214 = 255;
          v213 = 0;
        }
        v382[2] = 64;
        v382[3] = 48;
        v382[0] = v195 + 68 * (v208 % 2) + 491;
        v382[1] = v269 + 50 * (v208 / 2) + 25;
        (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x88730C] + 88))(
          MEMORY[0x88730C],
          v382,
          (v214 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) | v213);
      }
      Frame::Present(MEMORY[0x88730C], (int)v209, v195, v208, 0, (int)v248, v249, v250);
      v209 = MEMORY[0xA8B230];
    }
  }
  while ( !HIBYTE(v289) );
  v215 = 0;
  v259 = 0;
  if ( v333 > 0 )
  {
    while ( 1 )
    {
      v216 = *((_DWORD *)v330 + v215);
      v217 = 11 * (v215 / 5);
      v218 = (char *)HouseClass_Player + 4 * v217 + 22128;
      v219 = *((_DWORD *)HouseClass_Player + v217 + 5536);
      if ( v219 < 5 )
        break;
LABEL_396:
      v215 = ++v259;
      if ( v259 >= v333 )
        goto LABEL_397;
    }
    v220 = v209[3385];
    if ( v220 )
    {
      v222 = 0;
      if ( v220 > 0 )
      {
        while ( *(_DWORD *)(v209[3382] + 4 * v222) != v216 || *(_DWORD *)(v209[3389] + 4 * v222) == -1 )
        {
          if ( ++v222 >= v220 )
          {
            v221 = -1;
            goto LABEL_393;
          }
        }
        v221 = v222;
        if ( v222 == -1 || *(_DWORD *)(v209[3396] + 4 * v222) < *(_DWORD *)(v209[3389] + 4 * v222) )
        {
LABEL_393:
          *(_DWORD *)&v218[4 * v219 + 20] = v216;
          ++*((_DWORD *)v218 + 4);
          *((_DWORD *)v218 + 10) += (*(int (__thiscall **)(int))(*(_DWORD *)v216 + 172))(v216);
          if ( v221 != -1 )
            ++*(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3396) + 4 * v221);
        }
        v209 = MEMORY[0xA8B230];
        goto LABEL_396;
      }
    }
    v221 = -1;
    goto LABEL_393;
  }
LABEL_397:
  if ( v275 )
    (**v275)(v275, 1);
  if ( v338 )
    (**v338)(v338, 1);
  if ( SubFile )
    (**(void (__thiscall ***)(int, int))SubFile)(SubFile, 1);
  if ( v299 )
    (*(void (__thiscall **)(int *, int))*v299)(v299, 1);
  if ( v321 )
  {
    v223 = *(_DWORD *)(v321 - 4);
    v224 = (void *)(v321 - 4);
    v225 = 9 * v223;
    v226 = v223 - 1;
    v227 = (char *)(v321 + 4 * v225);
    if ( v226 >= 0 )
    {
      v228 = v226 + 1;
      do
      {
        v227 -= 36;
        FileTreeNode::Destroy(v227);
        --v228;
      }
      while ( v228 );
    }
    __3_YAXPAX_Z(v224);
  }
  v229 = v393;
  v321 = 4;
  do
  {
    v230 = *v229;
    if ( *v229 )
    {
      v231 = *(_DWORD *)(v230 - 4);
      v232 = (void *)(v230 - 4);
      v233 = 9 * v231;
      v234 = v231 - 1;
      v235 = (char *)(v230 + 4 * v233);
      if ( v234 >= 0 )
      {
        v236 = v234 + 1;
        do
        {
          v235 -= 36;
          FileTreeNode::Destroy(v235);
          --v236;
        }
        while ( v236 );
      }
      __3_YAXPAX_Z(v232);
    }
    ++v229;
    --v321;
  }
  while ( v321 );
  if ( v318 > 0 )
  {
    v237 = Block;
    v238 = v318;
    do
    {
      if ( *v237 )
        (**(void (__thiscall ***)(_DWORD, int))*v237)(*v237, 1);
      ++v237;
      --v238;
    }
    while ( v238 );
  }
  __3_YAXPAX_Z(Block);
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]);
  v239 = MEMORY[0x87E8A4];
  if ( MEMORY[0x87E8A4] )
  {
    StreamObj::Release(MEMORY[0x87E8A4]);
    __3_YAXPAX_Z(v239);
  }
  MEMORY[0x87E8A4] = 0;
  v240 = __2_YAPAXI_Z(0x30u);
  if ( v240 )
    MEMORY[0x87E8A4] = BSurface::Construct(v240, v346, v347, v348, SHIDWORD(v348));
  else
    MEMORY[0x87E8A4] = 0;
  v241 = MEMORY[0x887644];
  if ( MEMORY[0x887644] )
  {
    Stream::GetField(MEMORY[0x887644]);
    __3_YAXPAX_Z(v241);
    MEMORY[0x887644] = 0;
  }
  v242 = __2_YAPAXI_Z(0x30u);
  if ( v242 )
    MEMORY[0x887644] = BSurface::ConstructEx(v242, v346, v347, v348, SHIDWORD(v348));
  else
    MEMORY[0x887644] = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]);
  v329 = &vt_VectorClass_TechnoTypeClass;
  if ( v330 && BYTE1(v332) )
  {
    __3_YAXPAX_Z(v330);
    v330 = 0;
  }
  BYTE1(v332) = 0;
  v331 = 0;
  v312 = &vt_VectorClass_CrossDissolveEffect;
  if ( v313 && BYTE1(v315) )
  {
    __3_YAXPAX_Z(v313);
    v313 = 0;
  }
  BYTE1(v315) = 0;
  v314 = 0;
  v322 = (void **)&off_7E8500;
  if ( v323 && BYTE1(v325) )
  {
    __3_YAXPAX_Z(v323);
    v323 = 0;
  }
  BYTE1(v325) = 0;
  v324 = 0;
  v306 = &vt_VectorClass_TechnoTypeClass;
  if ( v307 && BYTE1(v309) )
  {
    __3_YAXPAX_Z(v307);
    v307 = 0;
  }
  BYTE1(v309) = 0;
  v308 = 0;
  v398[0] = (int)&vt_CCFileClass;
  v400 = 0;
  Vector::Clear((int)v399);
  v398[0] = (int)&off_7E1668;
  return BufferIOFileClass::Dtor(v398);
}



// ==== 0x004B96A0  TextRenderer::RenderCentered  this=TextRenderer  sig=csp ====
int *TextRenderer::RenderCentered(
        int a1,
        int a2,
        ObjectClass *aP2,
        int *a3,
        wchar_t *Format,
        char a6,
        int a7,
        int _6C,
        int *a8)
{
  CampaignScore *v9; // edx
  CampaignScore *v10; // ecx
  CampaignScore *v11; // esi
  CampaignScore *v12; // edi
  AbstractClass *v13; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // edx
  int v18; // edi
  int v19; // eax
  int v20; // edx
  int v21; // edi
  int BuildingAnimByName; // eax
  _DWORD *v23; // eax
  int v25; // [esp-10h] [ebp-5Ch]
  ObjectClass *v26; // [esp-Ch] [ebp-58h]
  int _FFFFFFF8; // [esp-8h] [ebp-54h]
  int v28; // [esp-4h] [ebp-50h]
  AbstractClass *v27; // [esp+14h] [ebp-38h] BYREF
  int v30; // [esp+18h] [ebp-34h]
  AbstractClass *v29; // [esp+1Ch] [ebp-30h]
  int v32; // [esp+20h] [ebp-2Ch]
  int v33; // [esp+24h] [ebp-28h]
  int v34; // [esp+28h] [ebp-24h]
  AbstractClass *v35; // [esp+2Ch] [ebp-20h]
  int v36; // [esp+30h] [ebp-1Ch]
  int v37; // [esp+34h] [ebp-18h]
  int v38; // [esp+38h] [ebp-14h]
  char v39[12]; // [esp+40h] [ebp-Ch] BYREF

  v11 = v10; /*0x4b96aa*/
  v12 = v9; /*0x4b96b2*/
  TextRenderer::GetInstance(); /*0x4b96c5*/
  swprintf( /*0x4b96dc*/
    (wchar_t *const)&stru_89E138.__pad_14B0[4744],
    (const size_t)&stru_820524.__pad_0[8],
    (const wchar_t *const)aP2,
    v11);
  swprintf( /*0x4b96ed*/
    (wchar_t *const)&stru_89E138.__pad_14B0[4824],
    (const size_t)&stru_820524.__pad_0[8],
    (const wchar_t *const)aP2,
    v12);
  if ( (_BYTE)a3 ) /*0x4b96f7*/
  {
    v13 = (AbstractClass *)(*(_DWORD *)a2 - Text::MeasureWidth((CampaignScore *)&stru_89E138.__pad_14B0[4744], 0) / 2); /*0x4b971b*/
    v14 = *(_DWORD *)a2 - Text::MeasureWidth((CampaignScore *)&stru_89E138.__pad_14B0[4824], 0) / 2; /*0x4b972b*/
  }
  else
  {
    v13 = *(AbstractClass **)a2; /*0x4b9733*/
    v14 = *(_DWORD *)a2; /*0x4b9735*/
  }
  v15 = *(_DWORD *)(a2 + 4); /*0x4b9737*/
  v16 = 110; /*0x4b9740*/
  if ( (int)v13 > v14 ) /*0x4b974a*/
  {
    v16 = (int)&v13[3].__pad_0[-v14 + 2]; /*0x4b9750*/
    v13 = (AbstractClass *)v14; /*0x4b9752*/
  }
  if ( (int)&v13->__pad_0[v16] < v14 + 110 ) /*0x4b9766*/
    v16 = v14 - (_DWORD)v13 + 111; /*0x4b976d*/
  v35 = v13; /*0x4b9784*/
  v29 = v13; /*0x4b9788*/
  v37 = v16; /*0x4b9790*/
  v33 = v16; /*0x4b9794*/
  v36 = v15; /*0x4b9798*/
  v17 = *(_DWORD *)a1; /*0x4b979c*/
  v32 = v15; /*0x4b979e*/
  v38 = 15; /*0x4b97a4*/
  v34 = 15; /*0x4b97a8*/
  v18 = (*(int (__thiscall **)(int))(v17 + 124))(a1); /*0x4b97b5*/
  v19 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 124))(*(_DWORD *)&stru_87C374.__pad_579C[22524]); /*0x4b97b9*/
  v20 = *(_DWORD *)a1; /*0x4b97c5*/
  v32 += (v19 - v18) / -2; /*0x4b97cd*/
  v21 = (*(int (__thiscall **)(int))(v20 + 128))(a1); /*0x4b97df*/
  v33 += ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 128))(*(_DWORD *)&stru_87C374.__pad_579C[22524]) /*0x4b97fc*/
        - v21)
       / -2;
  v30 = 0; /*0x4b982a*/
  v29 = 0; /*0x4b982e*/
  BlitterDrawSHP(*(IUnknown **)&stru_87C374.__pad_579C[22524]); /*0x4b9832*/
  BuildingAnimByName = FindBuildingAnimByName(&stru_820524, 1); /*0x4b9847*/
  v23 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *, ObjectClass *, int, _DWORD, AbstractClass *))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 120))( /*0x4b985f*/
                    *(_DWORD *)&stru_87C374.__pad_579C[22524],
                    v39,
                    aP2,
                    BuildingAnimByName,
                    0,
                    v27);
  return TextRenderer::DrawText( /*0x4b987c*/
           (int *)&v27,
           (size_t)&stru_89E138.__pad_14B0[4744],
           *(IUnknown **)&stru_87C374.__pad_579C[22524],
           v23,
           v25,
           v26,
           _FFFFFFF8,
           v28);
}


// ==== 0x004B9890  DisplayBuildingInfoPanel  this=-  sig=csp ====
char __fastcall DisplayBuildingInfoPanel(CampaignScore **a1, _DWORD *a2, wchar_t *a3, char a4)
{
  CampaignScore *v6; // eax
  CampaignScore *v7; // edi
  int v8; // edi
  CampaignScore *v9; // ebx
  int v10; // eax
  IUnknown *v11; // eax
  AbstractClass *v12; // eax
  char result; // al
  const wchar_t *v14; // eax
  int AudioEntry; // eax
  int *p_nextArrayIndex; // ecx
  CampaignScore *BuildingAnimByName; // esi
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  int v22; // [esp-10h] [ebp-174h]
  int v23; // [esp-Ch] [ebp-170h]
  ObjectClass *v24; // [esp-Ch] [ebp-170h]
  int v25; // [esp-8h] [ebp-16Ch]
  ObjectClass *v26; // [esp-8h] [ebp-16Ch]
  int v27; // [esp-8h] [ebp-16Ch]
  ObjectClass *v28; // [esp-4h] [ebp-168h]
  int v29; // [esp-4h] [ebp-168h]
  int v30; // [esp-4h] [ebp-168h]
  CampaignScore *v31; // [esp+0h] [ebp-164h]
  CampaignScore *v32; // [esp+0h] [ebp-164h]
  CampaignScore *v33; // [esp+0h] [ebp-164h]
  CampaignScore *v34; // [esp+0h] [ebp-164h]
  ObjectClass *v35; // [esp+0h] [ebp-164h]
  int v36; // [esp+0h] [ebp-164h]
  int v37; // [esp+0h] [ebp-164h]
  CampaignScore *v38; // [esp+4h] [ebp-160h]
  int v39; // [esp+4h] [ebp-160h]
  int v40; // [esp+8h] [ebp-15Ch]
  int v41; // [esp+10h] [ebp-154h] BYREF
  ObjectClass aP5; // [esp+14h] [ebp-150h] BYREF
  wchar_t v43; // [esp+D8h] [ebp-8Ch] BYREF
  size_t v44[14]; // [esp+DCh] [ebp-88h] BYREF
  wchar_t Buffer[6]; // [esp+114h] [ebp-50h] BYREF
  size_t BufferCount[17]; // [esp+120h] [ebp-44h] BYREF

  aP5.referenceCount = 450; /*0x4b98a8*/
  v6 = *a1; /*0x4b98ac*/
  aP5.NeedsSaveOrLink = (void *)300; /*0x4b98b8*/
  aP5.objectTypeFlags = 190; /*0x4b98be*/
  aP5.owningHouseIndex = 80; /*0x4b98c2*/
  v7 = (CampaignScore *)((int (__thiscall *)(CampaignScore **))v6[3].CampaignScore_field_0x14)(a1); /*0x4b98d2*/
  v8 = ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 128))(*(_DWORD *)&stru_87C374.__pad_579C[22524]) /*0x4b98e7*/
      - (int)v7)
     / 2;
  v9 = (CampaignScore *)((int (__thiscall *)(CampaignScore **))(*a1)[3].CampaignScore_field_0x10)(a1); /*0x4b98f2*/
  v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 124))(*(_DWORD *)&stru_87C374.__pad_579C[22524]); /*0x4b98f6*/
  aP5.nextArrayIndex = 300; /*0x4b9903*/
  *(_DWORD *)&aP5.__pad_0[4] = (v10 - (int)v9) / 2; /*0x4b9909*/
  aP5.abstractFlags = 450; /*0x4b9912*/
  *(_DWORD *)&aP5.__pad_0[8] = v8; /*0x4b992b*/
  v11 = (IUnknown *)Coord2D::Add( /*0x4b992f*/
                      &aP5.abstractFlags,
                      (AbstractClass *)&aP5.__pad_0[12],
                      (AbstractClass *)&aP5.__pad_0[4]);
  v12 = Rect::Construct(aP5.ambientSoundController, v11, (AbstractClass *)0xBE, (AbstractClass *)0x50); /*0x4b9939*/
  aP5.fallRate = *(_DWORD *)v12->__pad_0; /*0x4b9942*/
  aP5.nextObject = *(void **)&v12->__pad_0[4]; /*0x4b994b*/
  aP5.attachedTag = *(void **)&v12->__pad_0[8]; /*0x4b9958*/
  aP5.attachedBomb = *(void **)&v12->__pad_0[12]; /*0x4b9963*/
  v41 = 0; /*0x4b9967*/
  *(_DWORD *)aP5.__pad_0 = 0; /*0x4b996b*/
  BuildingClass::GetSHPFrame(a2, 0); /*0x4b996f*/
  result = BlitterDrawSHP(*(IUnknown **)&stru_87C374.__pad_579C[22524]); /*0x4b998e*/
  if ( a3 ) /*0x4b999c*/
  {
    swprintf(Buffer, (const size_t)&off_8205BC, a3 + 50, v31); /*0x4b99b3*/
    if ( a4 ) /*0x4b99c4*/
    {
      v14 = (const wchar_t *)(*(int (__thiscall **)(wchar_t *))(*(_DWORD *)a3 + 172))(a3); /*0x4b99ca*/
      swprintf((wchar_t *const)&aP5.ambientSoundController[4], (const size_t)&off_8205A8, v14, v32); /*0x4b99db*/
    }
    else
    {
      swprintf( /*0x4b99ef*/
        (wchar_t *const)&aP5.ambientSoundController[4],
        (const size_t)&off_820594,
        (const wchar_t *const)v32,
        v38);
    }
    if ( *(_DWORD *)TechnoClass::GetWeaponSlot(a3, 0) ) /*0x4b99ff*/
    {
      AudioEntry = TechnoClass::GetWeaponSlot(a3, 0); /*0x4b9a06*/
      swprintf( /*0x4b9a1e*/
        (wchar_t *const)&aP5.isOnMap,
        (const size_t)&off_820578,
        (const wchar_t *const)(*(_DWORD *)AudioEntry + 100),
        v33);
    }
    else
    {
      swprintf((wchar_t *const)&aP5.isOnMap, (const size_t)&off_820558, (const wchar_t *const)v33, v38); /*0x4b9a35*/
    }
    swprintf( /*0x4b9a58*/
      &v43,
      (const size_t)&stru_820524.NeedsSaveOrLink,
      *((const wchar_t *const *)&off_7E5210 + *((_DWORD *)a3 + 39)),
      v34);
    p_nextArrayIndex = &stru_820524.nextArrayIndex; /*0x4b9a6e*/
    if ( !a4 ) /*0x4b9a73*/
      p_nextArrayIndex = &stru_820524.abstractFlags; /*0x4b9a75*/
    BuildingAnimByName = (CampaignScore *)FindBuildingAnimByName((AbstractClass *)p_nextArrayIndex, 1); /*0x4b9a87*/
    *(_DWORD *)aP5.__pad_0 = *(_DWORD *)&aP5.__pad_0[8] + 300; /*0x4b9a97*/
    v41 = *(_DWORD *)&aP5.__pad_0[4] + 450; /*0x4b9aa8*/
    v18 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *, int *, CampaignScore *, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] /*0x4b9ab3*/
                                                                                         + 120))(
                      *(_DWORD *)&stru_87C374.__pad_579C[22524],
                      aP5.ambientSoundController,
                      &v41,
                      BuildingAnimByName,
                      0);
    TextRenderer::DrawText( /*0x4b9aca*/
      &aP5.nextArrayIndex,
      (size_t)BufferCount,
      *(IUnknown **)&stru_87C374.__pad_579C[22524],
      v18,
      70,
      v35,
      (int)v38,
      v40);
    *(_DWORD *)&aP5.__pad_0[12] = aP5.abstractFlags + 315; /*0x4b9ae0*/
    *(_DWORD *)&aP5.__pad_0[8] = aP5.uniqueId + 450; /*0x4b9af8*/
    v19 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *, char *, CampaignScore *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22524] /*0x4b9b03*/
                                                                                               + 120))(
                      *(_DWORD *)&stru_87C374.__pad_579C[22524],
                      &aP5.ambientSoundController[3],
                      &aP5.__pad_0[8],
                      BuildingAnimByName,
                      0,
                      70);
    TextRenderer::DrawText( /*0x4b9b1a*/
      &aP5.abstractFlags,
      (size_t)&aP5.visibilityFlags,
      *(IUnknown **)&stru_87C374.__pad_579C[22524],
      v19,
      v25,
      v28,
      v36,
      v39);
    *(_DWORD *)&aP5.__pad_0[8] = aP5.uniqueId + 330; /*0x4b9b30*/
    *(_DWORD *)&aP5.__pad_0[4] = *(_DWORD *)&aP5.__pad_0[12] + 450; /*0x4b9b48*/
    v20 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *, char *, CampaignScore *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22524] /*0x4b9b53*/
                                                                                               + 120))(
                      *(_DWORD *)&stru_87C374.__pad_579C[22524],
                      &aP5.ambientSoundController[2],
                      &aP5.__pad_0[4],
                      BuildingAnimByName,
                      0,
                      70);
    TextRenderer::DrawText( /*0x4b9b6a*/
      &aP5.uniqueId,
      (size_t)v44,
      *(IUnknown **)&stru_87C374.__pad_579C[22524],
      v20,
      v23,
      v26,
      v29,
      v37);
    *(_DWORD *)&aP5.__pad_0[4] = *(_DWORD *)&aP5.__pad_0[12] + 345; /*0x4b9b87*/
    *(_DWORD *)aP5.__pad_0 = *(_DWORD *)&aP5.__pad_0[8] + 450; /*0x4b9b98*/
    v21 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *, ObjectClass *, CampaignScore *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 120))( /*0x4b9ba3*/
                      *(_DWORD *)&stru_87C374.__pad_579C[22524],
                      &aP5.ambientSoundController[1],
                      &aP5,
                      BuildingAnimByName,
                      0,
                      70);
    return (unsigned __int8)TextRenderer::DrawText( /*0x4b9bb7*/
                              (int *)&aP5.__pad_0[12],
                              (size_t)&aP5.ambientSoundController[4],
                              *(IUnknown **)&stru_87C374.__pad_579C[22524],
                              v21,
                              v22,
                              v24,
                              v27,
                              v30);
  }
  return result; /*0x4b9bbf*/
}


// ==== 0x004B9BD0  Struct::Zero3  this=Struct  sig=csp ====
_BYTE *__thiscall Struct_Zero3(_BYTE *this)
{
  *this = 0; /*0x4b9bd4*/
  this->q004 = 0; /*0x4b9bd6*/
  this->q008 = 0; /*0x4b9bd9*/
  return this; /*0x4b9bdc*/
}


// ==== 0x004B9BE0  _DynamicVectorClass_PAUButtonFadeEffect::Clear  this=DynamicVector  sig=csp ====
void __thiscall FilePipe_30_::sub_4B9BE0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4b9be6*/
  *(_DWORD *)(this + 16) = 0; /*0x4b9be9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4b9bf0*/
  {
    __3_YAXPAX_Z(v2); /*0x4b9bf6*/
    *(_DWORD *)(this + 4) = 0; /*0x4b9bfe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4b9c01*/
  *(_DWORD *)(this + 8) = 0; /*0x4b9c04*/
}


// ==== 0x004B9C10  _DynamicVectorClass_PAUButtonFadeEffect::GetCount  this=DynamicVector  sig=csp ====
unsigned int __thiscall FilePipe_30_::sub_4B9C10(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4b9c10*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4b9c25*/
  else
    return 0; /*0x4b9c17*/
}


// ==== 0x004B9C30  _DynamicVectorClass_PAUButtonFadeEffect::GetItem  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_CrossDissolveEffect::sub_4B9C30(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4b9c3a*/
}


// ==== 0x004B9C40  _DynamicVectorClass_PAUCrossDissolveEffect::Clear_0  this=DynamicVector  sig=csp ====
void __thiscall FilePipe_30_::sub_4B9C40(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4b9c46*/
  *(_DWORD *)(this + 16) = 0; /*0x4b9c49*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4b9c50*/
  {
    __3_YAXPAX_Z(v2); /*0x4b9c56*/
    *(_DWORD *)(this + 4) = 0; /*0x4b9c5e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4b9c61*/
  *(_DWORD *)(this + 8) = 0; /*0x4b9c64*/
}


// ==== 0x004B9C70  _DynamicVectorClass_PAUCrossDissolveEffect::GetCount_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall FilePipe_30_::sub_4B9C70(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4b9c70*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4b9c85*/
  else
    return 0; /*0x4b9c77*/
}


// ==== 0x004B9C90  _VectorClass_PAUCrossDissolveEffect::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_CrossDissolveEffect::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x4b9c9a*/
}


// ==== 0x004B9CA0  _DynamicVectorClass_PAUButtonFadeEffect::FindItemIndex  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_CrossDissolveEffect::sub_4B9CA0(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->DynamicVector_field_0x8; /*0x4b9ca2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4b9cad*/
  {
    v3 = 0; /*0x4b9caf*/
    if ( v2 <= 0 ) /*0x4b9cb3*/
      return 1; /*0x4b9cd3*/
    v4 = (_DWORD *)this->Items; /*0x4b9cb5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4b9cbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4b9cc4*/
    {
      ++v3; /*0x4b9cc6*/
      ++v4; /*0x4b9cc7*/
      if ( v3 >= v2 ) /*0x4b9ccc*/
        return 1; /*0x4b9ccc*/
    }
  }
  return 0; /*0x4b9cce*/
}


// ==== 0x004B9CE0  VectorClass_ptr_CrossDissolveEffect::SetCapacity  this=VectorClass_ptr_CrossDissolveEffect  sig=csp ====
char __thiscall VectorClass_ptr_CrossDissolveEffect::sub_4B9CE0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4b9cec*/
  {
    this->IsInitialized = 0; /*0x4b9cf6*/
    if ( a3 ) /*0x4b9cfc*/
      v4 = a3; /*0x4b9d12*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4b9d0e*/
    this->IsInitialized = 1; /*0x4b9d16*/
    if ( v4 ) /*0x4b9d1a*/
    {
      if ( this->Items ) /*0x4b9d25*/
      {
        v6 = this->Capacity; /*0x4b9d2c*/
        if ( a2 < v6 ) /*0x4b9d31*/
          v6 = a2; /*0x4b9d33*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4b9d39*/
          ++i; /*0x4b9d3e*/
        if ( this->IsAllocated ) /*0x4b9d4b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4b9d56*/
          this->Items = 0; /*0x4b9d5e*/
        }
      }
      this->Items = v4; /*0x4b9d67*/
      this->Capacity = a2; /*0x4b9d6f*/
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
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4b9d82*/
    return 1; /*0x4b9d88*/
  }
}


// ==== 0x004B9D90  VectorClass_ptr_CrossDissolveEffect::Destroy  this=VectorClass_ptr_CrossDissolveEffect  sig=csp ====
void __thiscall VectorClass_ptr_CrossDissolveEffect::sub_4B9D90(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4b9d9d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4b9da3*/
    *(_DWORD *)(this + 4) = 0; /*0x4b9dab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4b9dae*/
  *(_DWORD *)(this + 8) = 0; /*0x4b9db1*/
}


// ==== 0x004B9DC0  VectorClass_ptr_CrossDissolveEffect::FindItemIndex_0  this=VectorClass_ptr_CrossDissolveEffect  sig=csp ====
int __thiscall VectorClass_ptr_CrossDissolveEffect::sub_4B9DC0(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4b9dc0*/
    return 0; /*0x4b9dc8*/
  v3 = *(_DWORD *)(this + 8); /*0x4b9dce*/
  result = 0; /*0x4b9dd1*/
  if ( v3 <= 0 ) /*0x4b9dd5*/
    return -1; /*0x4b9dec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4b9ddb*/
  {
    if ( ++result >= v3 ) /*0x4b9dea*/
      return -1; /*0x4b9dea*/
  }
  return result; /*0x4b9dca*/
}


// ==== 0x004B9E00  VectorClass_ptr_CrossDissolveEffect::GetItemIndex  this=VectorClass_ptr_CrossDissolveEffect  sig=csp ====
unsigned int __thiscall VectorClass_ptr_CrossDissolveEffect::sub_4B9E00(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4b9e00*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4b9e15*/
  else
    return 0; /*0x4b9e07*/
}


// ==== 0x004B9E20  _DynamicVectorClass_PAUButtonFadeEffect::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall FilePipe_30_::sub_4B9E20(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4b9e2c*/
  {
    this->IsInitialized = 0; /*0x4b9e32*/
    if ( a3 ) /*0x4b9e38*/
      v4 = a3; /*0x4b9e4e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4b9e4a*/
    this->IsInitialized = 1; /*0x4b9e52*/
    if ( !v4 ) /*0x4b9e56*/
      return 0; /*0x4b9eca*/
    if ( this->Items ) /*0x4b9e58*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x4b9e5f*/
      if ( a2 < v5 ) /*0x4b9e64*/
        v5 = a2; /*0x4b9e66*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4b9e6c*/
        ++i; /*0x4b9e71*/
      if ( this->IsAllocated ) /*0x4b9e7e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4b9e89*/
        this->Items = 0; /*0x4b9e91*/
      }
    }
    this->Items = v4; /*0x4b9e9a*/
    this->DynamicVector_field_0x8 = a2; /*0x4b9ea2*/
    this->IsAllocated = a3 == 0; /*0x4b9ea5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4b9eae*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x4b9eb1*/
  if ( v7 < this->Items ) /*0x4b9eb9*/
    this->Items = v7; /*0x4b9ebb*/
  return 1; /*0x4b9ebe*/
}


// ==== 0x004B9ED0  _DynamicVectorClass_PAUButtonFadeEffect::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall FilePipe_30_::sub_4B9ED0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4b9ed0*/
  result = 0; /*0x4b9ed3*/
  if ( v2 <= 0 ) /*0x4b9ed8*/
    return -1; /*0x4b9eef*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4b9ede*/
  {
    if ( ++result >= v2 ) /*0x4b9eed*/
      return -1; /*0x4b9eed*/
  }
  return result; /*0x4b9ef2*/
}


// ==== 0x004B9F00  _VectorClass_PAUCrossDissolveEffect::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CrossDissolveEffect::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x4b9f02*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4b9f0d*/
  {
    v3 = 0; /*0x4b9f0f*/
    if ( v2 <= 0 ) /*0x4b9f13*/
      return 1; /*0x4b9f33*/
    v4 = (_DWORD *)this->Items; /*0x4b9f15*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4b9f1b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4b9f24*/
    {
      ++v3; /*0x4b9f26*/
      ++v4; /*0x4b9f27*/
      if ( v3 >= v2 ) /*0x4b9f2c*/
        return 1; /*0x4b9f2c*/
    }
  }
  return 0; /*0x4b9f2e*/
}


// ==== 0x004B9F40  _VectorClass_PAUCrossDissolveEffect::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_CrossDissolveEffect::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4b9f4c*/
  {
    this->IsInitialized = 0; /*0x4b9f56*/
    if ( a3 ) /*0x4b9f5c*/
      v4 = a3; /*0x4b9f72*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4b9f6e*/
    this->IsInitialized = 1; /*0x4b9f76*/
    if ( v4 ) /*0x4b9f7a*/
    {
      if ( this->Items ) /*0x4b9f85*/
      {
        v6 = this->Capacity; /*0x4b9f8c*/
        if ( a2 < v6 ) /*0x4b9f91*/
          v6 = a2; /*0x4b9f93*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4b9f99*/
          ++i; /*0x4b9f9e*/
        if ( this->IsAllocated ) /*0x4b9fab*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4b9fb6*/
          this->Items = 0; /*0x4b9fbe*/
        }
      }
      this->Items = v4; /*0x4b9fc7*/
      this->Capacity = a2; /*0x4b9fcf*/
      this->IsAllocated = a3 == 0; /*0x4b9fd2*/
      return 1; /*0x4b9fd8*/
    }
    else
    {
      return 0; /*0x4b9f7f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4b9fe2*/
    return 1; /*0x4b9fe8*/
  }
}


// ==== 0x004B9FF0  _VectorClass_PAUCrossDissolveEffect::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_CrossDissolveEffect::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4b9ffd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4ba003*/
    *(_DWORD *)(this + 4) = 0; /*0x4ba00b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4ba00e*/
  *(_DWORD *)(this + 8) = 0; /*0x4ba011*/
}


// ==== 0x004BA020  _VectorClass_PAUCrossDissolveEffect::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_CrossDissolveEffect::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4ba020*/
    return 0; /*0x4ba028*/
  v3 = *(_DWORD *)(this + 8); /*0x4ba02e*/
  result = 0; /*0x4ba031*/
  if ( v3 <= 0 ) /*0x4ba035*/
    return -1; /*0x4ba04c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4ba03b*/
  {
    if ( ++result >= v3 ) /*0x4ba04a*/
      return -1; /*0x4ba04a*/
  }
  return result; /*0x4ba02a*/
}


// ==== 0x004BA060  _VectorClass_PAUCrossDissolveEffect::Get  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_CrossDissolveEffect::Get(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4ba060*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x4ba075*/
  else
    return 0; /*0x4ba067*/
}


// ==== 0x004BA080  _DynamicVectorClass_PAUCrossDissolveEffect::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall FilePipe_30_::sub_4BA080(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4ba08c*/
  {
    this->IsInitialized = 0; /*0x4ba092*/
    if ( a3 ) /*0x4ba098*/
      v4 = a3; /*0x4ba0ae*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ba0aa*/
    this->IsInitialized = 1; /*0x4ba0b2*/
    if ( !v4 ) /*0x4ba0b6*/
      return 0; /*0x4ba12a*/
    if ( this->Items ) /*0x4ba0b8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x4ba0bf*/
      if ( a2 < v5 ) /*0x4ba0c4*/
        v5 = a2; /*0x4ba0c6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x4ba0cc*/
        ++i; /*0x4ba0d1*/
      if ( this->IsAllocated ) /*0x4ba0de*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ba0e9*/
        this->Items = 0; /*0x4ba0f1*/
      }
    }
    this->Items = v4; /*0x4ba0fa*/
    this->DynamicVector_field_0x8 = a2; /*0x4ba102*/
    this->IsAllocated = a3 == 0; /*0x4ba105*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x4ba10e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x4ba111*/
  if ( v7 < this->Items ) /*0x4ba119*/
    this->Items = v7; /*0x4ba11b*/
  return 1; /*0x4ba11e*/
}


// ==== 0x004BA130  _DynamicVectorClass_PAUCrossDissolveEffect::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall FilePipe_30_::sub_4BA130(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x4ba130*/
  result = 0; /*0x4ba133*/
  if ( v2 <= 0 ) /*0x4ba138*/
    return -1; /*0x4ba14f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4ba13e*/
  {
    if ( ++result >= v2 ) /*0x4ba14d*/
      return -1; /*0x4ba14d*/
  }
  return result; /*0x4ba152*/
}


// ==== 0x004BA160  _DynamicVectorClass_PAVTechnoTypeClass::Destructor  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall FilePipe_30_::Destructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ba163*/
  *Block = &vt_VectorClass_TechnoTypeClass; /*0x4ba166*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ba170*/
  {
    __3_YAXPAX_Z(v3); /*0x4ba178*/
    *(Block + 1) = 0; /*0x4ba180*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ba18b*/
  *(Block + 2) = 0; /*0x4ba191*/
  if ( (a2 & 1) != 0 ) /*0x4ba198*/
    __3_YAXPAX_Z(Block); /*0x4ba19b*/
  return (DynamicVector *)Block; /*0x4ba1a5*/
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
DynamicVector *__thiscall FilePipe_30_::Destructor_0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ba203*/
  *Block = &off_7E8500; /*0x4ba206*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ba210*/
  {
    __3_YAXPAX_Z(v3); /*0x4ba218*/
    *(Block + 1) = 0; /*0x4ba220*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ba22b*/
  *(Block + 2) = 0; /*0x4ba231*/
  if ( (a2 & 1) != 0 ) /*0x4ba238*/
    __3_YAXPAX_Z(Block); /*0x4ba23b*/
  return (DynamicVector *)Block; /*0x4ba245*/
}


// ==== 0x004BA250  _VectorClass_PAUCrossDissolveEffect::Add  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_CrossDissolveEffect::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ba253*/
  *Block = &vt_VectorClass_CrossDissolveEffect; /*0x4ba256*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ba260*/
  {
    __3_YAXPAX_Z(v3); /*0x4ba268*/
    *(Block + 1) = 0; /*0x4ba270*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ba27b*/
  *(Block + 2) = 0; /*0x4ba281*/
  if ( (a2 & 1) != 0 ) /*0x4ba288*/
    __3_YAXPAX_Z(Block); /*0x4ba28b*/
  return (VectorClass *)Block; /*0x4ba295*/
}


// ==== 0x004BA2A0  _DynamicVectorClass_PAUCrossDissolveEffect::Destructor_1  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall FilePipe_30_::Destructor_1(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ba2a3*/
  *Block = &vt_VectorClass_CrossDissolveEffect; /*0x4ba2a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ba2b0*/
  {
    __3_YAXPAX_Z(v3); /*0x4ba2b8*/
    *(Block + 1) = 0; /*0x4ba2c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ba2cb*/
  *(Block + 2) = 0; /*0x4ba2d1*/
  if ( (a2 & 1) != 0 ) /*0x4ba2d8*/
    __3_YAXPAX_Z(Block); /*0x4ba2db*/
  return (DynamicVector *)Block; /*0x4ba2e5*/
}


// ==== 0x004BA2F0  LoadScreen::InitVtable  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_4BA2F0(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x4ba2fb*/
  this->Capacity = a2; /*0x4ba2fe*/
  this->q030 = 1; /*0x4ba301*/
  this->__pad_034 = 0; /*0x4ba305*/
  *this = &off_7E8500; /*0x4ba308*/
  if ( a2 ) /*0x4ba30e*/
  {
    if ( a3 ) /*0x4ba316*/
    {
      this->Items = a3; /*0x4ba318*/
      return this; /*0x4ba31e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x4ba32d*/
    this->__pad_034 = 1; /*0x4ba330*/
  }
  return this; /*0x4ba31d*/
}


// ==== 0x004BA340  LoadScreen::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_4BA340(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x4ba34b*/
  this->Capacity = a2; /*0x4ba34e*/
  this->q030 = 1; /*0x4ba351*/
  this->__pad_034 = 0; /*0x4ba355*/
  *this = &vt_VectorClass_CrossDissolveEffect; /*0x4ba358*/
  if ( a2 ) /*0x4ba35e*/
  {
    if ( a3 ) /*0x4ba366*/
    {
      this->Items = a3; /*0x4ba368*/
      return this; /*0x4ba36e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x4ba37d*/
    this->__pad_034 = 1; /*0x4ba380*/
  }
  return this; /*0x4ba36d*/
}


// ==== 0x004BA390  sub_4BA390  this=-  sig=ida-proto ====
int sub_4BA390()
{
  MEMORY[0x8A0930] = 0; /*0x4ba392*/
  MEMORY[0x8A0934] = 0; /*0x4ba397*/
  MEMORY[0x8A0938] = 0; /*0x4ba39c*/
  MEMORY[0x8A093C] = 0; /*0x4ba3a1*/
  return 0; /*0x4ba3a6*/
}


// ==== 0x004BA3B0  sub_4BA3B0  this=-  sig=ida-proto ====
void sub_4BA3B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4ba3bc*/
  MEMORY[0x8A0968] = Math::Sqrt(v0 + v0); /*0x4ba3ce*/
}


// ==== 0x004BA3E0  sub_4BA3E0  this=-  sig=ida-proto ====
void sub_4BA3E0()
{
  MEMORY[0x8A0DC0] = MEMORY[0x8A0968] / 60.0; /*0x4ba3ec*/
}


// ==== 0x004BA400  sub_4BA400  this=-  sig=ida-proto ====
void sub_4BA400()
{
  MEMORY[0x8A0DA8] = 1.0 / MEMORY[0x8A0DC0]; /*0x4ba40c*/
}


// ==== 0x004BA420  sub_4BA420  this=-  sig=ida-proto ====
void sub_4BA420()
{
  MEMORY[0x8A0DA0] = 0.0174532925199433 * 45.0; /*0x4ba42c*/
}


// ==== 0x004BA440  sub_4BA440  this=-  sig=ida-proto ====
void sub_4BA440()
{
  MEMORY[0x8A0970] = 0.0174532925199433 * 60.0; /*0x4ba44c*/
}


// ==== 0x004BA460  sub_4BA460  this=-  sig=ida-proto ====
void sub_4BA460()
{
  MEMORY[0x8A0928] = 0.0174532925199433 * 90.0; /*0x4ba46c*/
}


// ==== 0x004BA480  DSurface::ConstructFromHandle  this=DSurface  sig=ida-proto ====
__int64 sub_4BA480()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A0928] - MEMORY[0x8A0970]); /*0x4ba492*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A0968] * 0.5); /*0x4ba4a6*/
  MEMORY[0x8A0DC8] = result; /*0x4ba4ab*/
  return result; /*0x4ba4b0*/
}


// ==== 0x004BA4C0  sub_4BA4C0  this=-  sig=ida-proto ====
void sub_4BA4C0()
{
  MEMORY[0x8A0978] = Math::ArcTan((double)MEMORY[0x8A0DC8] * 0.00390625); /*0x4ba4d7*/
}


// ==== 0x004BA4F0  sub_4BA4F0  this=-  sig=ida-proto ====
void sub_4BA4F0()
{
  MEMORY[0x8A0D98] = Math::ArcTan((double)(2 * MEMORY[0x8A0DC8]) / MEMORY[0x8A0968]); /*0x4ba512*/
}


// ==== 0x004BA520  sub_4BA520  this=-  sig=ida-proto ====
__int64 sub_4BA520()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A0DC8]) + 0.5); /*0x4ba53b*/
  MEMORY[0x8A0DBC] = result; /*0x4ba540*/
  return result; /*0x4ba546*/
}


// ==== 0x004BA550  sub_4BA550  this=-  sig=ida-proto ====
int sub_4BA550()
{
  MEMORY[0x8A0940] = 0; /*0x4ba552*/
  MEMORY[0x8A0942] = 0; /*0x4ba558*/
  return 0; /*0x4ba55e*/
}


// ==== 0x004BA560  sub_4BA560  this=-  sig=ida-proto ====
int sub_4BA560()
{
  MEMORY[0x8A0D88] = 0; /*0x4ba562*/
  MEMORY[0x8A0D8C] = 0; /*0x4ba567*/
  MEMORY[0x8A0D90] = 0; /*0x4ba56c*/
  return 0; /*0x4ba571*/
}


// ==== 0x004BA580  sub_4BA580  this=-  sig=ida-proto ====
int sub_4BA580()
{
  MEMORY[0x8A0DB8] = 0; /*0x4ba585*/
  MEMORY[0x8A0DB0] = 128; /*0x4ba58f*/
  MEMORY[0x8A0DB4] = 128; /*0x4ba594*/
  return 128; /*0x4ba599*/
}


// ==== 0x004BA5A0  DSurface::Construct  this=DSurface  sig=csp ====
char *__thiscall DSurface::Construct(char *this, IUnknown *aP1, DSurface *aP2, ObjectClass *aP3, char a5)
{
  char *v6; // ebp
  ObjectClass *v7; // edi
  IUnknown *v8; // eax

  v6 = this + 28; /*0x4ba5b0*/
  this->DSurface_field_0x4 = aP1; /*0x4ba5b5*/
  this->DSurface_field_0x8 = aP2; /*0x4ba5b8*/
  this->DSurface_field_0xC = 0; /*0x4ba5bb*/
  this->DSurface_field_0x4 = 0; /*0x4ba5be*/
  this->DSurface_field_0x14 = 0; /*0x4ba5c1*/
  this->DSurface_field_0x18 = 0; /*0x4ba5c4*/
  this->q019 = 0; /*0x4ba5c7*/
  this->DSurface_field_0x1C = 0; /*0x4ba5ca*/
  this->DSurface_field_0x8 = 0; /*0x4ba5cd*/
  *(_DWORD *)this = &DSurface_Vtable; /*0x4ba5d0*/
  v7 = (ObjectClass *)__2_YAPAXI_Z(0x6Cu); /*0x4ba5db*/
  this->DSurface_field_0x8 = v7; /*0x4ba5e2*/
  if ( v7 ) /*0x4ba5e5*/
  {
    memset(v7, 0, 0x6Cu); /*0x4ba5f2*/
    **((_DWORD **)this + 8) = 108; /*0x4ba5f7*/
    *(_DWORD *)(this->DSurface_field_0x8 + 4) = 7; /*0x4ba604*/
    *(_DWORD *)(this->DSurface_field_0x8 + 12) = aP1; /*0x4ba60e*/
    *(_DWORD *)(this->DSurface_field_0x8 + 8) = aP2; /*0x4ba618*/
    if ( (_BYTE)aP3 == 1 ) /*0x4ba621*/
      *(_DWORD *)(this->DSurface_field_0x8 + 104) = 2048; /*0x4ba626*/
    if ( MEMORY[0x89F690].__pad_14B0[687] && a5 ) /*0x4ba639*/
      *(_DWORD *)(this->DSurface_field_0x8 + 104) = 8256; /*0x4ba63e*/
    (*(void (__stdcall **)(_DWORD, _DWORD, char *, _DWORD))(**(_DWORD **)&MEMORY[0x89F690].__pad_71C[744] + 24))( /*0x4ba653*/
      *(_DWORD *)&MEMORY[0x89F690].__pad_71C[744],
      this->DSurface_field_0x8,
      this + 28,
      0);
    if ( *(_DWORD *)v6 ) /*0x4ba656*/
    {
      memset(*((void **)this + 8), 0, 0x6Cu); /*0x4ba665*/
      **((_DWORD **)this + 8) = 108; /*0x4ba66a*/
      (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)v6 + 88))(*(_DWORD *)v6, this->DSurface_field_0x8); /*0x4ba67a*/
      v8 = (IUnknown *)this->DSurface_field_0x8; /*0x4ba67d*/
      this->DSurface_field_0x4 = (unsigned int)(v8->field_54 + 7) >> 3; /*0x4ba689*/
      this->q019 = (*(_DWORD *)v8->__pad_68 & 0x4000) != 0; /*0x4ba695*/
    }
  }
  return this; /*0x4ba69a*/
}


// ==== 0x004BA6B0  DSurface::Destroy  this=DSurface  sig=csp ====
int __thiscall DSurface_Destroy(void *this)
{
  char v2; // al
  int v3; // eax
  int result; // eax

  v2 = this->DSurface_field_0x18; /*0x4ba6b6*/
  *(_DWORD *)this = &DSurface_Vtable; /*0x4ba6b9*/
  if ( v2 ) /*0x4ba6c1*/
  {
    v3 = this->DSurface_field_0x1C; /*0x4ba6c3*/
    if ( v3 ) /*0x4ba6c8*/
    {
      if ( MEMORY[0x8A0DCC] ) /*0x4ba6d0*/
      {
        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v3 + 112))(v3, 0); /*0x4ba6d6*/
        (*(void (__stdcall **)(int))(*(_DWORD *)MEMORY[0x8A0DCC] + 8))(MEMORY[0x8A0DCC]); /*0x4ba6e1*/
        MEMORY[0x8A0DCC] = 0; /*0x4ba6e4*/
      }
    }
  }
  __3_YAXPAX_Z(*((void **)this + 8)); /*0x4ba6ee*/
  result = this->DSurface_field_0x1C; /*0x4ba6f3*/
  this->DSurface_field_0x8 = 0; /*0x4ba6fb*/
  if ( result ) /*0x4ba6fe*/
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x4ba703*/
  this->DSurface_field_0x1C = 0; /*0x4ba706*/
  *(_DWORD *)this = &Surface_Vtable; /*0x4ba709*/
  return result; /*0x4ba70f*/
}


// ==== 0x004BA770  DSurface::CreatePrimary  this=DSurface  sig=csp ====
_DWORD *__thiscall DSurface::CreatePrimary(_DWORD *this)
{
  char v1; // bl
  int v2; // eax
  int v3; // esi
  void *v4; // edi
  int v5; // ebp
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *BackBuffer; // eax
  _DWORD *v11; // eax
  bool v12; // dl
  int v13; // edx
  int v14; // eax
  int v15; // edi
  int v16; // eax
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
  BYTE2(MEMORY[0x87F7E8][34177]) = (v1 & 0x40) != 0; /*0x4ba79b*/
  Debug::Log(); /*0x4ba7b4*/
  if ( (v1 & 0x10) == 0 ) /*0x4ba7bf*/
    g_DDraw_UseHWBlit = 0; /*0x4ba7c1*/
  Debug::Log(); /*0x4ba7e3*/
  v2 = __2_YAPAXI_Z(36); /*0x4ba7ea*/
  v3 = v2; /*0x4ba7ef*/
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
    v4 = (void *)__2_YAPAXI_Z(108); /*0x4ba822*/
    *(_DWORD *)(v3 + 32) = v4; /*0x4ba82b*/
    v5 = v3; /*0x4ba82e*/
    memset(v4, 0, 0x6Cu); /*0x4ba830*/
    **(_DWORD **)(v3 + 32) = 108; /*0x4ba835*/
  }
  else
  {
    v5 = 0; /*0x4ba83d*/
  }
  *(_DWORD *)(*(_DWORD *)(v5 + 32) + 4) = 1; /*0x4ba84d*/
  *(_DWORD *)(*(_DWORD *)(v5 + 32) + 104) = 512; /*0x4ba85b*/
  if ( this ) /*0x4ba862*/
  {
    *(_DWORD *)(*(_DWORD *)(v5 + 32) + 104) |= 0x18u; /*0x4ba86d*/
    *(_DWORD *)(*(_DWORD *)(v5 + 32) + 4) |= 0x20u; /*0x4ba879*/
    *(_DWORD *)(*(_DWORD *)(v5 + 32) + 20) = this != 0; /*0x4ba87f*/
  }
  Debug::Log(); /*0x4ba887*/
  v6 = (_DWORD *)(v5 + 28); /*0x4ba897*/
  v7 = (*(int (__stdcall **)(_DWORD, _DWORD, int, _DWORD))(*(_DWORD *)MEMORY[0x87F7E8][33323] + 24))( /*0x4ba8a1*/
         MEMORY[0x87F7E8][33323],
         *(_DWORD *)(v5 + 32),
         v5 + 28,
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
        v9 = (_DWORD *)__2_YAPAXI_Z(36); /*0x4ba8df*/
        if ( v9 ) /*0x4ba8e9*/
          BackBuffer = DSurface::CreateBackBuffer(v9, v29); /*0x4ba8f2*/
        else
          BackBuffer = 0; /*0x4ba8f9*/
        *this = BackBuffer; /*0x4ba8ff*/
      }
    }
    memset(*(void **)(v5 + 32), 0, 0x6Cu); /*0x4ba90b*/
    **(_DWORD **)(v5 + 32) = 108; /*0x4ba910*/
    if ( (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*v6 + 88))(*v6, *(_DWORD *)(v5 + 32)) ) /*0x4ba91f*/
      Debug::Log(); /*0x4ba92b*/
    v11 = *(_DWORD **)(v5 + 32); /*0x4ba933*/
    *(_DWORD *)(v5 + 16) = (unsigned int)(v11[21] + 7) >> 3; /*0x4ba948*/
    v12 = (v11[26] & 0x4000) != 0; /*0x4ba951*/
    *(_BYTE *)(v5 + 24) = 1; /*0x4ba954*/
    *(_BYTE *)(v5 + 25) = v12; /*0x4ba958*/
    *(_DWORD *)(v5 + 4) = v11[3]; /*0x4ba95e*/
    v13 = v11[2]; /*0x4ba961*/
    v14 = *v6; /*0x4ba964*/
    *(_DWORD *)(v5 + 8) = v13; /*0x4ba966*/
    MEMORY[0x87F7E8][33325] = v14; /*0x4ba969*/
    if ( !(*(int (__stdcall **)(_DWORD, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)MEMORY[0x87F7E8][33323] + 16))( /*0x4ba976*/
            MEMORY[0x87F7E8][33323],
            0,
            &MEMORY[0x87F7E8][34169],
            0) )
    {
      v15 = *(_DWORD *)MEMORY[0x87F7E8][34169]; /*0x4ba983*/
      v16 = ((int (*)(void))GetActiveWindow)(); /*0x4ba985*/
      if ( !(*(int (__stdcall **)(_DWORD, _DWORD, int))(v15 + 32))(MEMORY[0x87F7E8][34169], 0, v16) ) /*0x4ba994*/
        (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*v6 + 112))(*v6, MEMORY[0x87F7E8][34169]); /*0x4ba9a7*/
    }
    qmemcpy(&MEMORY[0x87F7E8][33880], (const void *)(*(_DWORD *)(v5 + 32) + 72), 0x20u); /*0x4ba9ba*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 112))(v5) != 2 ) /*0x4ba9c7*/
      goto LABEL_60; /*0x4ba9c7*/
    v17 = MEMORY[0x87F7E8][33884]; /*0x4ba9cd*/
    v18 = 0; /*0x4ba9d2*/
    v19 = 0; /*0x4ba9d4*/
    MEMORY[0x87F7E8][34170] = 0; /*0x4ba9d6*/
    MEMORY[0x87F7E8][34171] = 0; /*0x4ba9dc*/
    do /*0x4ba9ec*/
    {
      if ( (v17 & 1) != 0 ) /*0x4ba9e4*/
        break; /*0x4ba9e4*/
      v17 >>= 1; /*0x4ba9e6*/
      ++v18; /*0x4ba9e8*/
    }
    while ( v18 < 16 ); /*0x4ba9ec*/
    MEMORY[0x87F7E8][34170] = v18; /*0x4ba9ee*/
    do /*0x4ba9fe*/
    {
      if ( (v17 & 0x80u) != 0 ) /*0x4ba9f6*/
        break; /*0x4ba9f6*/
      LOBYTE(v17) = 2 * v17; /*0x4ba9f8*/
      ++v19; /*0x4ba9fa*/
    }
    while ( v19 < 8 ); /*0x4ba9fe*/
    v20 = MEMORY[0x87F7E8][33885]; /*0x4baa00*/
    v21 = 0; /*0x4baa05*/
    v22 = 0; /*0x4baa07*/
    MEMORY[0x87F7E8][34171] = v19; /*0x4baa09*/
    MEMORY[0x87F7E8][34174] = 0; /*0x4baa0f*/
    MEMORY[0x87F7E8][34175] = 0; /*0x4baa15*/
    do /*0x4baa25*/
    {
      if ( (v20 & 1) != 0 ) /*0x4baa1d*/
        break; /*0x4baa1d*/
      ++v21; /*0x4baa1f*/
      v20 >>= 1; /*0x4baa20*/
    }
    while ( v21 < 16 ); /*0x4baa25*/
    MEMORY[0x87F7E8][34174] = v21; /*0x4baa27*/
    do /*0x4baa37*/
    {
      if ( (v20 & 0x80u) != 0 ) /*0x4baa2f*/
        break; /*0x4baa2f*/
      ++v22; /*0x4baa31*/
      LOBYTE(v20) = 2 * v20; /*0x4baa32*/
    }
    while ( v22 < 8 ); /*0x4baa37*/
    v23 = MEMORY[0x87F7E8][33886]; /*0x4baa39*/
    v24 = 0; /*0x4baa3f*/
    v25 = 0; /*0x4baa41*/
    MEMORY[0x87F7E8][34175] = v22; /*0x4baa43*/
    MEMORY[0x87F7E8][34172] = 0; /*0x4baa49*/
    MEMORY[0x87F7E8][34173] = 0; /*0x4baa4e*/
    do /*0x4baa5f*/
    {
      if ( (v23 & 1) != 0 ) /*0x4baa57*/
        break; /*0x4baa57*/
      ++v24; /*0x4baa59*/
      v23 >>= 1; /*0x4baa5a*/
    }
    while ( v24 < 16 ); /*0x4baa5f*/
    MEMORY[0x87F7E8][34172] = v24; /*0x4baa61*/
    do /*0x4baa71*/
    {
      if ( (v23 & 0x80u) != 0 ) /*0x4baa69*/
        break; /*0x4baa69*/
      ++v25; /*0x4baa6b*/
      LOBYTE(v23) = 2 * v23; /*0x4baa6c*/
    }
    while ( v25 < 8 ); /*0x4baa71*/
    MEMORY[0x87F7E8][34173] = v25; /*0x4baa83*/
    g_DDraw_PixelFormat = -1; /*0x4baa89*/
    LOWORD(MEMORY[0x87F7E8][34176]) = (127 >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170])) /*0x4baac1*/
                                    | (127 >> v22 << SLOBYTE(MEMORY[0x87F7E8][34174]))
                                    | (127 >> v25 << v24);
    HIWORD(MEMORY[0x87F7E8][34176]) = (63 >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170])) /*0x4baaff*/
                                    | (63 >> v22 << SLOBYTE(MEMORY[0x87F7E8][34174]))
                                    | (63 >> v25 << v24);
    LOWORD(MEMORY[0x87F7E8][34177]) = (31 >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170])) /*0x4bab38*/
                                    | (31 >> v22 << SLOBYTE(MEMORY[0x87F7E8][34174]))
                                    | (31 >> v25 << v24);
    if ( v24 ) /*0x4bab3f*/
      goto LABEL_60; /*0x4bab3f*/
    if ( v25 == 3 ) /*0x4bab4c*/
    {
      if ( MEMORY[0x87F7E8][34174] != 5 ) /*0x4bab55*/
        goto LABEL_60; /*0x4bab55*/
      if ( v22 != 3 ) /*0x4bab5d*/
      {
        if ( v22 == 2 && MEMORY[0x87F7E8][34170] == 11 && MEMORY[0x87F7E8][34171] == 3 ) /*0x4babd2*/
        {
          g_DDraw_PixelFormat = 2; /*0x4babd9*/
          Debug::Log(); /*0x4babdf*/
          return (_DWORD *)v5; /*0x4babf0*/
        }
        goto LABEL_60; /*0x4babd2*/
      }
      if ( MEMORY[0x87F7E8][34170] == 10 ) /*0x4bab66*/
      {
        if ( MEMORY[0x87F7E8][34171] == 3 ) /*0x4bab72*/
        {
          g_DDraw_PixelFormat = 0; /*0x4bab7d*/
          Debug::Log(); /*0x4bab87*/
          return (_DWORD *)v5; /*0x4bab98*/
        }
        goto LABEL_60; /*0x4bab72*/
      }
      if ( MEMORY[0x87F7E8][34170] != 11 || MEMORY[0x87F7E8][34171] != 2 ) /*0x4bac05*/
      {
LABEL_60:
        Debug::Log(); /*0x4bac11*/
        return (_DWORD *)v5; /*0x4bac27*/
      }
    }
    else if ( v25 != 2 /*0x4babba*/
           || MEMORY[0x87F7E8][34174] != 6
           || v22 != 3
           || MEMORY[0x87F7E8][34170] != 11
           || MEMORY[0x87F7E8][34171] != 3 )
    {
      goto LABEL_60; /*0x4babba*/
    }
    g_DDraw_PixelFormat = 1; /*0x4bac07*/
    goto LABEL_60; /*0x4bac07*/
  }
  DDraw::LogError(v7, 1); /*0x4bac2f*/
  Debug::Log(); /*0x4bac3a*/
  if ( v5 ) /*0x4bac44*/
    (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x4bac4d*/
  return 0; /*0x4bab91*/
}


// ==== 0x004BAC60  DSurface::CreateBackBuffer  this=DSurface  sig=csp ====
_DWORD *__thiscall sub_4BAC60(_DWORD *this, int a2)
{
  void *v3; // edi
  _DWORD *v4; // eax

  this->DSurface_field_0x4 = 0; /*0x4bac6b*/
  this->DSurface_field_0x8 = 0; /*0x4bac6e*/
  this->DSurface_field_0xC = 0; /*0x4bac71*/
  this->DSurface_field_0x10 = 0; /*0x4bac74*/
  this->DSurface_field_0x14 = 0; /*0x4bac77*/
  this->DSurface_field_0x18 = 0; /*0x4bac7a*/
  this->q019 = 0; /*0x4bac7d*/
  this->DSurface_field_0x1C = a2; /*0x4bac80*/
  this->DSurface_field_0x20 = 0; /*0x4bac83*/
  *this = &DSurface_Vtable; /*0x4bac86*/
  if ( a2 ) /*0x4bac8c*/
  {
    v3 = __2_YAPAXI_Z(0x6Cu); /*0x4bac96*/
    this->DSurface_field_0x20 = v3; /*0x4bac9f*/
    memset(v3, 0, 0x6Cu); /*0x4baca2*/
    *(_DWORD *)this->DSurface_field_0x20 = 108; /*0x4bacaa*/
    if ( !(*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)this->DSurface_field_0x1C + 88))(this->DSurface_field_0x1C, this->DSurface_field_0x20) ) /*0x4bacba*/
    {
      v4 = (_DWORD *)this->DSurface_field_0x20; /*0x4bacc2*/
      this->DSurface_field_0x10 = (unsigned int)(v4[21] + 7) >> 3; /*0x4bacce*/
      this->q019 = (v4[26] & 0x4000) != 0; /*0x4bacda*/
      this->DSurface_field_0x4 = v4[3]; /*0x4bace0*/
      this->DSurface_field_0x8 = v4[2]; /*0x4bace6*/
    }
  }
  return this; /*0x4baceb*/
}


// ==== 0x004BAD60  DSurface::GetBytesPerPixel  this=DSurface  sig=csp ====
int __thiscall DSurface_GetBytesPerPixel(_DWORD *this)
{
  return this->DSurface_field_0x10; /*0x4bad63*/
}


// ==== 0x004BAD70  DSurface::GetPitch  this=DSurface  sig=csp ====
int __thiscall DSurface_GetPitch(_DWORD *this)
{
  return *(_DWORD *)(this->DSurface_field_0x20 + 16); /*0x4bad76*/
}


// ==== 0x004BAD80  DSurface::Lock  this=DSurface  sig=csp ====
int __thiscall DSurface_Lock(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // esi
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // esi
  _DWORD v11[27]; // [esp+28h] [ebp-6Ch] BYREF

  if ( !MEMORY[0x89F978] && !MEMORY[0xA8ED80] ) /*0x4bad99*/
    return 0; /*0x4bad99*/
  v4 = this->DSurface_field_0x1C; /*0x4bad9f*/
  if ( v4 && (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 96))(this->DSurface_field_0x1C) == -2005532222 ) /*0x4badb1*/
  {
    if ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this->DSurface_field_0x1C + 108))(this->DSurface_field_0x1C) /*0x4badca*/
      || (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this->DSurface_field_0x1C + 96))(this->DSurface_field_0x1C) )
    {
      return 0; /*0x4badcf*/
    }
    v5 = this->DSurface_field_0xC; /*0x4badd5*/
    if ( v5 > 0 ) /*0x4badda*/
    {
      v6 = *this; /*0x4baddc*/
      this->DSurface_field_0xC = 0; /*0x4bade0*/
      (*(void (__thiscall **)(int *, _DWORD, _DWORD))(v6 + 92))(this, 0, 0); /*0x4bade7*/
      ++this->DSurface_field_0xC; /*0x4badf0*/
      (*(void (__thiscall **)(int *))(*this + 96))(this); /*0x4badf5*/
      this->DSurface_field_0xC = v5; /*0x4badf8*/
    }
  }
  if ( a2 >= 0 && a3 >= 0 ) /*0x4bae13*/
  {
    if ( this->DSurface_field_0xC ) /*0x4bae19*/
    {
LABEL_14:
      ++this->DSurface_field_0xC; /*0x4bae7c*/
      v9 = a3 * (*(int (__thiscall **)(int *))(*this + 116))(this); /*0x4bae90*/
      return a2 * (*(int (__thiscall **)(int *))(*this + 112))(this) + v9 + this->DSurface_field_0x14; /*0x4baeac*/
    }
    memset(v11, 0, sizeof(v11)); /*0x4bae2d*/
    v7 = this->DSurface_field_0x1C; /*0x4bae2f*/
    v11[0] = 108; /*0x4bae38*/
    if ( !(*(int (__stdcall **)(int, _DWORD, _DWORD *, int, _DWORD))(*(_DWORD *)v7 + 100))(v7, 0, v11, 1, 0) ) /*0x4bae46*/
    {
      qmemcpy((void *)this->DSurface_field_0x8, v11, 0x6Cu); /*0x4bae59*/
      v8 = (_DWORD *)this->DSurface_field_0x8; /*0x4bae5b*/
      this->DSurface_field_0x4 = (unsigned int)(v8[21] + 7) >> 3; /*0x4bae67*/
      this->q019 = (v8[26] & 0x4000) != 0; /*0x4bae73*/
      this->DSurface_field_0x14 = v8[9]; /*0x4bae79*/
      goto LABEL_14; /*0x4bae79*/
    }
  }
  return 0; /*0x4baea5*/
}


// ==== 0x004BAEC0  DSurface::CanLock  this=DSurface  sig=csp ====
char __thiscall DSurface_CanLock(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  _DWORD v6[27]; // [esp+4h] [ebp-6Ch] BYREF

  if ( !this->DSurface_field_0xC ) /*0x4baec6*/
  {
    memset(v6, 0, sizeof(v6)); /*0x4baed9*/
    v4 = this->DSurface_field_0x1C; /*0x4baedb*/
    v6[0] = 108; /*0x4baee6*/
    if ( (*(int (__stdcall **)(int, _DWORD, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v4 + 100))(v4, 0, v6, 0, 0) ) /*0x4baef4*/
      return 0; /*0x4baf02*/
    (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)this->DSurface_field_0x1C + 128))(this->DSurface_field_0x1C, v6[9]); /*0x4baf10*/
  }
  return 1; /*0x4baefe*/
}


// ==== 0x004BAF20  DSurface::CheckBltStatus  this=DSurface  sig=csp ====
BOOL __thiscall DSurface::CheckBltStatus(_DWORD **this)
{
  return (*(int (__stdcall **)(_DWORD, int))(*this->DSurface_field_0x1C + 52))(this->DSurface_field_0x1C, 1) == 0; /*0x4baf30*/
}


// ==== 0x004BAF40  DSurface::Unlock  this=DSurface  sig=csp ====
char __thiscall DSurface_Unlock(int *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // edx
  int v5; // eax
  int v6; // eax

  if ( MEMORY[0x89F978] || MEMORY[0xA8ED80] ) /*0x4baf54*/
  {
    v2 = this->DSurface_field_0x1C; /*0x4baf56*/
    if ( v2 ) /*0x4baf5b*/
    {
      if ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 96))(this->DSurface_field_0x1C) == -2005532222 /*0x4baf7d*/
        && !(*(int (__stdcall **)(_DWORD))(*(_DWORD *)this->DSurface_field_0x1C + 108))(this->DSurface_field_0x1C)
        && !(*(int (__stdcall **)(_DWORD))(*(_DWORD *)this->DSurface_field_0x1C + 96))(this->DSurface_field_0x1C) )
      {
        v3 = this->DSurface_field_0xC; /*0x4baf84*/
        if ( v3 > 0 ) /*0x4baf89*/
        {
          v4 = *this; /*0x4baf8b*/
          this->DSurface_field_0xC = 0; /*0x4baf93*/
          (*(void (__thiscall **)(int *, _DWORD, _DWORD))(v4 + 92))(this, 0, 0); /*0x4baf96*/
          ++this->DSurface_field_0xC; /*0x4baf9f*/
          (*(void (__thiscall **)(int *))(*this + 96))(this); /*0x4bafa4*/
          this->DSurface_field_0xC = v3; /*0x4bafa7*/
        }
      }
    }
  }
  v5 = this->DSurface_field_0xC; /*0x4bafaa*/
  if ( v5 <= 0 ) /*0x4bafaf*/
    return 0; /*0x4bafd6*/
  v6 = v5 - 1; /*0x4bafb1*/
  this->DSurface_field_0xC = v6; /*0x4bafb4*/
  if ( !v6 ) /*0x4bafb7*/
  {
    (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)this->DSurface_field_0x1C + 128))(this->DSurface_field_0x1C, this->DSurface_field_0x14); /*0x4bafc3*/
    this->DSurface_field_0x14 = 0; /*0x4bafc9*/
  }
  return 1; /*0x4bafd0*/
}


// ==== 0x004BAFE0  ObjectClass::method_4BAFE0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_4BAFE0(_DWORD *this)
{
  int v1; // eax

  v1 = this->referenceCount; /*0x4bafe0*/
  return v1 && (*(int (__stdcall **)(int))(*(_DWORD *)v1 + 96))(v1) == -2005532222; /*0x4baff9*/
}


// ==== 0x004BB000  DSurface::RestoreIfLost  this=DSurface  sig=csp ====
char __thiscall DSurface_RestoreIfLost(int *this)
{
  int v3; // eax
  int v4; // edi
  int v5; // edx

  if ( !MEMORY[0x89F978] && !MEMORY[0xA8ED80] ) /*0x4bb014*/
    return 0; /*0x4bb014*/
  v3 = this->DSurface_field_0x1C; /*0x4bb01b*/
  if ( v3 && (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 96))(this->DSurface_field_0x1C) == -2005532222 ) /*0x4bb02d*/
  {
    if ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this->DSurface_field_0x1C + 108))(this->DSurface_field_0x1C) /*0x4bb042*/
      || (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this->DSurface_field_0x1C + 96))(this->DSurface_field_0x1C) )
    {
      return 0; /*0x4bb01a*/
    }
    v4 = this->DSurface_field_0xC; /*0x4bb049*/
    if ( v4 > 0 ) /*0x4bb04e*/
    {
      v5 = *this; /*0x4bb050*/
      this->DSurface_field_0xC = 0; /*0x4bb058*/
      (*(void (__thiscall **)(int *, _DWORD, _DWORD))(v5 + 92))(this, 0, 0); /*0x4bb05b*/
      ++this->DSurface_field_0xC; /*0x4bb064*/
      (*(void (__thiscall **)(int *))(*this + 96))(this); /*0x4bb069*/
      this->DSurface_field_0xC = v4; /*0x4bb06c*/
    }
  }
  return 1; /*0x4bb016*/
}


// ==== 0x004BB080  DSurface::BlitPart  this=DSurface  sig=csp ====
int __thiscall DSurface_BlitPart(int *this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  _BYTE v11[28]; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v12[4]; // [esp+28h] [ebp-4h] BYREF

  v7 = *this; /*0x4bb098*/
  v8 = (*(int (__thiscall **)(int, _BYTE *, int, int, int))(*(_DWORD *)a3 + 120))(a3, v11, a4, a5, a6); /*0x4bb0a6*/
  v9 = (*(int (__thiscall **)(int *, _BYTE *, int, int, int))(*this + 120))(this, v12, a5, a3, v8); /*0x4bb0b9*/
  return (*(int (__thiscall **)(int *, int))(v7 + 12))(this, v9); /*0x4bb0c2*/
}


// ==== 0x004BB0D0  DSurface::Blit  this=DSurface  sig=csp ====
char __thiscall DSurface::Blit(int *this, int *a1, int *a2, _DWORD *a3, int *a4, DSurface *aP5, int a7, char a8)
{
  int v9; // ecx
  void **v10; // ebx
  int v11; // ebx
  bool v12; // zf
  char v13; // al
  int v14; // eax
  int v15; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  DSurface *v20; // ecx
  void *v21; // eax
  char *v22; // edx
  void *v23; // ecx
  DSurface *v24; // edx
  int v25; // eax
  DSurface *v26; // ecx
  int v27; // edx
  int v28; // esi
  DSurface *v29; // eax
  bool v30; // cc
  int v31; // ebx
  DSurface *v32; // eax
  int v33; // edx
  int v34; // edi
  DSurface *v35; // eax
  int v36; // ebx
  DSurface *v37; // ecx
  int v38; // edx
  int v39; // esi
  int v40; // edi
  int v41; // edx
  char v42; // [esp+1Bh] [ebp-85h]
  DSurface *v43; // [esp+1Ch] [ebp-84h] BYREF
  DSurface *v44; // [esp+20h] [ebp-80h]
  int v45; // [esp+24h] [ebp-7Ch]
  int v46; // [esp+28h] [ebp-78h]
  DSurface *v47; // [esp+2Ch] [ebp-74h]
  int v48; // [esp+30h] [ebp-70h]
  int v49; // [esp+34h] [ebp-6Ch]
  int v50; // [esp+38h] [ebp-68h]
  int *v51; // [esp+3Ch] [ebp-64h]
  int v52; // [esp+40h] [ebp-60h] BYREF
  int v53; // [esp+44h] [ebp-5Ch]
  int v54; // [esp+48h] [ebp-58h]
  int v55; // [esp+4Ch] [ebp-54h]
  _DWORD v56[2]; // [esp+50h] [ebp-50h] BYREF
  int v57; // [esp+58h] [ebp-48h]
  char *v58; // [esp+5Ch] [ebp-44h]
  DSurface *v59; // [esp+60h] [ebp-40h] BYREF
  char *aP2_4; // [esp+64h] [ebp-3Ch]
  unsigned int aP2_8; // [esp+68h] [ebp-38h]
  unsigned int aP2_12; // [esp+6Ch] [ebp-34h]
  DSurface *v63; // [esp+70h] [ebp-30h] BYREF
  DSurface *v64; // [esp+74h] [ebp-2Ch]
  int v65; // [esp+78h] [ebp-28h]
  int v66; // [esp+7Ch] [ebp-24h]
  int v67; // [esp+80h] [ebp-20h] BYREF
  DSurface *v68; // [esp+84h] [ebp-1Ch]
  int v69; // [esp+88h] [ebp-18h]
  int v70; // [esp+8Ch] [ebp-14h]
  int v71[4]; // [esp+90h] [ebp-10h] BYREF

  v9 = a1[2]; /*0x4bb0e1*/
  v51 = this; /*0x4bb0e8*/
  if ( v9 <= 0 /*0x4bb14e*/
    || a1[3] <= 0
    || a4[2] <= 0
    || a4[3] <= 0
    || a2[2] <= 0
    || a2[3] <= 0
    || (int)aP5->field_8 <= 0
    || (int)aP5->field_C <= 0 )
  {
    return 0; /*0x4bb14e*/
  }
  v10 = (void **)a3; /*0x4bb154*/
  v42 = 0; /*0x4bb15b*/
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a3 + 132))(a3) /*0x4bb19d*/
    || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a3 + 108))(a3) == 1
    || (_BYTE)a7 == 1
    || (v11 = (*(int (__thiscall **)(_DWORD *))(*a3 + 112))(a3),
        v12 = (*(int (__thiscall **)(int *))(*this + 112))(this) == v11,
        v10 = (void **)a3,
        !v12) )
  {
    v42 = 1; /*0x4bb19f*/
  }
  if ( this->DSurface_field_0x18 == 1 && stru_89E138.__pad_14B0[912] == 1 ) /*0x4bb1b1*/
    v13 = 0; /*0x4bb1b3*/
  else
    v13 = a8; /*0x4bb1b7*/
  if ( !v42 /*0x4bb1f8*/
    && v13 == 1
    && (!this->q019
     || (*((unsigned __int8 (__thiscall **)(void **))*v10 + 33))(v10) == 1 && !*((_BYTE *)v10 + 25))
    && aP5->field_8 == (void *)a2[2]
    && aP5->field_C == (void *)a2[3] )
  {
    v42 = 1; /*0x4bb1fa*/
  }
  if ( !stru_89E138.__pad_14B0[912] && !HouseClass_Player.__pad_5568[23244] ) /*0x4bb20f*/
    return 0; /*0x4bb20f*/
  v14 = this->DSurface_field_0x1C; /*0x4bb215*/
  if ( v14 && (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v14 + 96))(this->DSurface_field_0x1C) == -2005532222 ) /*0x4bb227*/
  {
    if ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this->DSurface_field_0x1C + 108))(this->DSurface_field_0x1C) /*0x4bb240*/
      || (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this->DSurface_field_0x1C + 96))(this->DSurface_field_0x1C) )
    {
      return 0; /*0x4bb245*/
    }
    v47 = (DSurface *)this->DSurface_field_0xC; /*0x4bb250*/
    if ( (int)v47 > 0 ) /*0x4bb254*/
    {
      v15 = *this; /*0x4bb256*/
      this->DSurface_field_0xC = 0; /*0x4bb25d*/
      (*(void (__thiscall **)(int *, _DWORD, _DWORD))(v15 + 92))(this, 0, 0); /*0x4bb264*/
      ++this->DSurface_field_0xC; /*0x4bb26d*/
      (*(void (__thiscall **)(int *))(*this + 96))(this); /*0x4bb273*/
      this->DSurface_field_0xC = (int)v47; /*0x4bb27a*/
    }
  }
  if ( v42 == 1 ) /*0x4bb282*/
    return XSurface::BlitPart(this, (void **)a2, v10, (void **)aP5, (void **)a7, 1); /*0x4bb2a2*/
  v17 = a2[1]; /*0x4bb2a7*/
  v18 = a2[2]; /*0x4bb2aa*/
  v52 = *a2; /*0x4bb2ad*/
  v19 = a2[3]; /*0x4bb2b1*/
  v53 = v17; /*0x4bb2b4*/
  v20 = (DSurface *)aP5->field_0; /*0x4bb2b8*/
  v55 = v19; /*0x4bb2ba*/
  v21 = aP5->field_8; /*0x4bb2be*/
  v54 = v18; /*0x4bb2c1*/
  v22 = (char *)aP5->field_4; /*0x4bb2c5*/
  v59 = v20; /*0x4bb2c8*/
  v23 = aP5->field_C; /*0x4bb2cc*/
  aP2_8 = (unsigned int)v21; /*0x4bb2cf*/
  aP2_4 = v22; /*0x4bb2d3*/
  v24 = (DSurface *)*v10; /*0x4bb2d7*/
  aP2_12 = (unsigned int)v23; /*0x4bb2dd*/
  v25 = (*(int (__thiscall **)(void **, _DWORD *))&v24->__pad_2C[76])(v10, v56); /*0x4bb2e4*/
  v26 = 0; /*0x4bb2eb*/
  v27 = 0; /*0x4bb2ed*/
  v28 = 0; /*0x4bb2f1*/
  v43 = *(DSurface **)v25; /*0x4bb2f3*/
  v44 = *(DSurface **)(v25 + 4); /*0x4bb2fa*/
  v45 = *(_DWORD *)(v25 + 8); /*0x4bb301*/
  v46 = *(_DWORD *)(v25 + 12); /*0x4bb30f*/
  v48 = a4[2]; /*0x4bb318*/
  if ( v48 <= 0 ) /*0x4bb31c*/
    goto LABEL_53; /*0x4bb31c*/
  v49 = a4[3]; /*0x4bb327*/
  if ( v49 <= 0 || *(int *)(v25 + 8) <= 0 || *(int *)(v25 + 12) <= 0 ) /*0x4bb341*/
    goto LABEL_53; /*0x4bb341*/
  v29 = (DSurface *)*a4; /*0x4bb352*/
  v30 = (int)v43 < *a4; /*0x4bb354*/
  v50 = *a4; /*0x4bb356*/
  if ( v30 ) /*0x4bb35a*/
  {
    v45 += (char *)v43 - (char *)v29; /*0x4bb364*/
    v43 = (DSurface *)v50; /*0x4bb36c*/
  }
  if ( v45 < 1 ) /*0x4bb375*/
    goto LABEL_53; /*0x4bb375*/
  v47 = (DSurface *)a4[1]; /*0x4bb38b*/
  if ( (int)v44 < (int)v47 ) /*0x4bb38f*/
  {
    v46 += (char *)v44 - (char *)v47; /*0x4bb399*/
    v44 = v47; /*0x4bb3a1*/
  }
  if ( v46 < 1 ) /*0x4bb3aa*/
    goto LABEL_53; /*0x4bb3aa*/
  if ( (int)v43 + v45 > v48 + v50 ) /*0x4bb3be*/
    v45 = v48 + v50 - (_DWORD)v43; /*0x4bb3cc*/
  if ( v45 < 1 ) /*0x4bb3d5*/
    goto LABEL_53; /*0x4bb3d5*/
  v31 = v46; /*0x4bb3e5*/
  if ( (int)v44 + v46 > (int)v47 + v49 ) /*0x4bb3ed*/
    v31 = (char *)v47 + v49 - (char *)v44; /*0x4bb3f3*/
  if ( v31 < 1 ) /*0x4bb3f8*/
  {
LABEL_53:
    v32 = 0; /*0x4bb40a*/
  }
  else
  {
    v32 = v43; /*0x4bb3fa*/
    v26 = v44; /*0x4bb3fe*/
    v27 = v45; /*0x4bb402*/
    v28 = v31; /*0x4bb406*/
  }
  v64 = v26; /*0x4bb40c*/
  v63 = v32; /*0x4bb414*/
  v65 = v27; /*0x4bb418*/
  v33 = *v51; /*0x4bb41c*/
  v66 = v28; /*0x4bb426*/
  v34 = (*(int (__thiscall **)(int *, int *))(v33 + 120))(v51, v71); /*0x4bb439*/
  Rect::Set(&v43, 0, 0, 0, 0); /*0x4bb43b*/
  v35 = *(DSurface **)v34; /*0x4bb449*/
  v36 = a1[2]; /*0x4bb44b*/
  v37 = *(DSurface **)(v34 + 4); /*0x4bb450*/
  v38 = *(_DWORD *)(v34 + 8); /*0x4bb453*/
  v57 = v38; /*0x4bb456*/
  v39 = *(_DWORD *)(v34 + 12); /*0x4bb45a*/
  if ( v36 <= 0 ) /*0x4bb45d*/
    goto LABEL_71; /*0x4bb45d*/
  v48 = a1[3]; /*0x4bb468*/
  if ( v48 <= 0 || *(int *)(v34 + 8) <= 0 || *(int *)(v34 + 12) <= 0 ) /*0x4bb47a*/
    goto LABEL_71; /*0x4bb47a*/
  v40 = *a1; /*0x4bb483*/
  if ( (int)v35 < *a1 ) /*0x4bb488*/
  {
    v38 += (int)v35 - v40; /*0x4bb48c*/
    v35 = (DSurface *)*a1; /*0x4bb48e*/
    v57 = v38; /*0x4bb490*/
  }
  if ( v38 < 1 ) /*0x4bb497*/
    goto LABEL_71; /*0x4bb497*/
  v49 = a1[1]; /*0x4bb49e*/
  if ( (int)v37 < v49 ) /*0x4bb4a2*/
  {
    v39 += (int)v37 - v49; /*0x4bb4a6*/
    v37 = (DSurface *)v49; /*0x4bb4a8*/
  }
  if ( v39 < 1 ) /*0x4bb4ad*/
    goto LABEL_71; /*0x4bb4ad*/
  v41 = (int)v35 + v38 <= v40 + v36 ? v57 : v36 + v40 - (_DWORD)v35;
  if ( v41 < 1 ) /*0x4bb4c7*/
    goto LABEL_71; /*0x4bb4c7*/
  if ( (int)v37 + v39 > v49 + v48 ) /*0x4bb4d8*/
    v39 = v49 + v48 - (_DWORD)v37; /*0x4bb4dc*/
  if ( v39 < 1 ) /*0x4bb4e1*/
  {
LABEL_71:
    v35 = v43; /*0x4bb4e3*/
    v37 = v44; /*0x4bb4e7*/
    v41 = v45; /*0x4bb4eb*/
    v39 = v46; /*0x4bb4ef*/
  }
  v68 = v37; /*0x4bb4f3*/
  v69 = v41; /*0x4bb4f7*/
  v67 = (int)v35; /*0x4bb513*/
  v70 = v39; /*0x4bb51a*/
  if ( IntersectSurfaceRects((IUnknown *)&v52, (int)&v67, (XSurface *)&v59, (int)&v63) ) /*0x4bb521*/
  {
    v56[0] = v67 + v52; /*0x4bb544*/
    v56[1] = (char *)v68 + v53; /*0x4bb552*/
    v58 = (char *)v68 + v55 + v53; /*0x4bb56e*/
    v57 = v52 + v67 + v54; /*0x4bb576*/
    v43 = (DSurface *)((char *)v59 + (_DWORD)v63); /*0x4bb57d*/
    v44 = (DSurface *)&aP2_4[(_DWORD)v64]; /*0x4bb588*/
    v46 = (int)v64 + aP2_12 + (_DWORD)aP2_4; /*0x4bb5a0*/
    v45 = (int)v63 + aP2_8 + (_DWORD)v59; /*0x4bb5a4*/
    return (*(int (__stdcall **)(int, _DWORD *, _DWORD, DSurface **, int, _DWORD))(*(_DWORD *)v51[7] + 20))( /*0x4bb5d5*/
             v51[7],
             v56,
             a3[7],
             &v43,
             0x1000000,
             0) == 0;
  }
  return 0; /*0x4bb298*/
}


// ==== 0x004BB5F0  DSurface::FillRect  this=DSurface  sig=csp ====
char __thiscall DSurface_FillRect(int *this, int a2, int a3)
{
  int v4; // eax
  _BYTE v6[16]; // [esp+4h] [ebp-10h] BYREF

  v4 = (*(int (__thiscall **)(int *, _BYTE *))(*this + 120))(this, v6); /*0x4bb609*/
  return DSurface::FillRectEx(this, v4, a2, a3); /*0x4bb614*/
}


// ==== 0x004BB620  DSurface::FillRectEx  this=DSurface  sig=csp ====
char __thiscall DSurface_FillRectEx(int *this, int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // ebx
  int v7; // edx
  int v8; // eax
  _DWORD *v9; // eax
  int *v10; // edi
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // edi
  int v15; // esi
  _DWORD v17[4]; // [esp+30h] [ebp-A4h] BYREF
  _DWORD v18[4]; // [esp+40h] [ebp-94h] BYREF
  char v19[16]; // [esp+60h] [ebp-74h] BYREF
  _DWORD v20[25]; // [esp+70h] [ebp-64h] BYREF

  if ( this->DSurface_field_0x1C && *(int *)(a3 + 8) > 0 && *(int *)(a3 + 12) > 0 ) /*0x4bb64d*/
  {
    if ( !g_DDraw_UseHWBlit /*0x4bb675*/
      || (*(unsigned __int8 (__thiscall **)(int *))(*this + 108))(this)
      || (*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)this->DSurface_field_0x1C + 52))(this->DSurface_field_0x1C, 1) )
    {
      return XSurface::FillRectEx(a2, a3, a4); /*0x4bb81d*/
    }
    if ( MEMORY[0x89F978] || MEMORY[0xA8ED80] ) /*0x4bb690*/
    {
      v5 = this->DSurface_field_0x1C; /*0x4bb696*/
      if ( !v5 || (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v5 + 96))(this->DSurface_field_0x1C) != -2005532222 ) /*0x4bb6a8*/
        goto LABEL_15; /*0x4bb6a8*/
      if ( !(*(int (__stdcall **)(_DWORD))(*(_DWORD *)this->DSurface_field_0x1C + 108))(this->DSurface_field_0x1C) /*0x4bb6c1*/
        && !(*(int (__stdcall **)(_DWORD))(*(_DWORD *)this->DSurface_field_0x1C + 96))(this->DSurface_field_0x1C) )
      {
        v6 = this->DSurface_field_0xC; /*0x4bb6cc*/
        if ( v6 > 0 ) /*0x4bb6d1*/
        {
          v7 = *this; /*0x4bb6d3*/
          this->DSurface_field_0xC = 0; /*0x4bb6db*/
          (*(void (__thiscall **)(int *, _DWORD, _DWORD))(v7 + 92))(this, 0, 0); /*0x4bb6de*/
          ++this->DSurface_field_0xC; /*0x4bb6e7*/
          (*(void (__thiscall **)(int *))(*this + 96))(this); /*0x4bb6ec*/
          this->DSurface_field_0xC = v6; /*0x4bb6ef*/
        }
LABEL_15:
        v8 = (*(int (__thiscall **)(int *, char *))(*this + 120))(this, v19); /*0x4bb6f2*/
        v9 = (_DWORD *)ClipRectIntersection(v8, 0, 0); /*0x4bb710*/
        v18[0] = *v9; /*0x4bb719*/
        v18[1] = v9[1]; /*0x4bb722*/
        v18[2] = v9[2]; /*0x4bb729*/
        v18[3] = v9[3]; /*0x4bb737*/
        v10 = (int *)ClipRectIntersection(v18, 0, 0); /*0x4bb76b*/
        v11 = *v10; /*0x4bb76d*/
        v12 = v10[1]; /*0x4bb773*/
        v13 = v10[2]; /*0x4bb77a*/
        v14 = v10[3]; /*0x4bb781*/
        if ( v13 > 0 && v14 > 0 ) /*0x4bb792*/
        {
          v15 = this->DSurface_field_0x1C; /*0x4bb79c*/
          v17[0] = v11; /*0x4bb79f*/
          v17[2] = v11 + v13; /*0x4bb7a3*/
          v17[3] = v12 + v14; /*0x4bb7a7*/
          v17[1] = v12; /*0x4bb7b6*/
          memset(v20, 0, sizeof(v20)); /*0x4bb7ba*/
          v20[20] = a4; /*0x4bb7c8*/
          v20[0] = 100; /*0x4bb7da*/
          return (*(int (__stdcall **)(int, _DWORD *, _DWORD, _DWORD, int, _DWORD *))(*(_DWORD *)v15 + 20))( /*0x4bb7f9*/
                   v15,
                   v17,
                   0,
                   0,
                   16778240,
                   v20) == 0;
        }
      }
    }
  }
  return 0; /*0x4bb7ef*/
}


// ==== 0x004BB830  DSurface::FillRectWithFlags  this=DSurface  sig=csp ====
char __userpurge DSurface_FillRectWithFlags@<al>(int a1@<ecx>, int a2@<ebx>, int a3, _BYTE *a4, unsigned int a5)
{
  int *v7; // eax
  int v8; // ecx
  unsigned int v9; // ebp
  unsigned int v10; // esi
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // edx
  unsigned int v14; // edi
  int v15; // edx
  int v16; // ebx
  int v17; // ebx
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // edx
  int v21; // esi
  int v22; // edi
  unsigned __int16 *v23; // eax
  int v24; // eax
  __int16 v25; // bp
  int v26; // ebx
  int v27; // [esp+10h] [ebp-5Ch]
  __int16 v28; // [esp+14h] [ebp-58h]
  __int16 v29; // [esp+18h] [ebp-54h]
  unsigned __int16 v31; // [esp+20h] [ebp-4Ch]
  unsigned int v32; // [esp+24h] [ebp-48h]
  int v33; // [esp+28h] [ebp-44h]
  unsigned int v34; // [esp+2Ch] [ebp-40h]
  __int16 i; // [esp+38h] [ebp-34h]
  _BYTE v36[16]; // [esp+3Ch] [ebp-30h] BYREF
  int v37; // [esp+4Ch] [ebp-20h]
  int v38; // [esp+50h] [ebp-1Ch]
  int v39; // [esp+54h] [ebp-18h]
  int v40; // [esp+58h] [ebp-14h]
  int v41; // [esp+70h] [ebp+4h]
  _WORD *v42; // [esp+74h] [ebp+8h]
  unsigned int v43; // [esp+78h] [ebp+Ch]

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 112))(a1) < 2 ) /*0x4bb845*/
    return 0; /*0x4bb847*/
  if ( *(int *)(a3 + 8) <= 0 || *(int *)(a3 + 12) <= 0 ) /*0x4bb863*/
    return 0; /*0x4bb865*/
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 120))(a1, v36); /*0x4bb87a*/
  v7 = (int *)ClipRectIntersection(a3, 0, 0); /*0x4bb888*/
  v37 = *v7; /*0x4bb891*/
  v38 = v7[1]; /*0x4bb898*/
  v39 = v7[2]; /*0x4bb89f*/
  v8 = v7[3]; /*0x4bb8a3*/
  v40 = v8; /*0x4bb8a8*/
  if ( v39 <= 0 || v8 <= 0 ) /*0x4bb8b0*/
    return 0; /*0x4bb8b2*/
  v9 = 0xFFu >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]; /*0x4bb8de*/
  v29 = v9; /*0x4bb8f1*/
  v10 = 0xFFu >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0]; /*0x4bb8f5*/
  v28 = v10; /*0x4bb908*/
  v32 = 0xFFu >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]; /*0x4bb917*/
  v11 = (_DWORD *)CellStruct::Copy(v36); /*0x4bb91b*/
  v33 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 92))(a1, *v11, v11[1]); /*0x4bb938*/
  if ( !v33 ) /*0x4bb93c*/
    return 0; /*0x4bb93e*/
  v12 = a5; /*0x4bb94a*/
  if ( a5 > 0x64 ) /*0x4bb951*/
    v12 = 100; /*0x4bb953*/
  v13 = (1374389535 * (unsigned __int64)(unsigned int)(255 * v12)) >> 32; /*0x4bb967*/
  v14 = 255 * v12 / 0x64u; /*0x4bb970*/
  v31 = 255 - v14; /*0x4bb97b*/
  v43 = v14; /*0x4bb983*/
  v41 = 0; /*0x4bb987*/
  LOWORD(a2) = (unsigned __int8)(a4[2] >> MEMORY[0x8A0DDC]); /*0x4bb99a*/
  LOWORD(v13) = (unsigned __int8)(a4[1] >> MEMORY[0x8A0DE4]); /*0x4bb9b1*/
  v15 = v13 << MEMORY[0x8A0DE0]; /*0x4bb9b5*/
  v16 = v15 | (a2 << MEMORY[0x8A0DD8]); /*0x4bb9c5*/
  LOWORD(v15) = (unsigned __int8)(*a4 >> MEMORY[0x8A0DD4]); /*0x4bb9ca*/
  v17 = (v15 << MEMORY[0x8A0DD0]) | v16; /*0x4bb9d2*/
  for ( i = v17; v41 < v40; ++v41 ) /*0x4bb9da*/
  {
    v27 = 0; /*0x4bb9ed*/
    v18 = v41 * ((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1) / 2); /*0x4bb9fa*/
    if ( v39 > 0 ) /*0x4bba01*/
    {
      v9 = (unsigned __int16)v9; /*0x4bba0f*/
      v19 = (unsigned __int16)v10; /*0x4bba15*/
      v20 = v14 * (v10 & (unsigned __int16)v17); /*0x4bba23*/
      v21 = v14 * (unsigned __int16)(v17 & v9); /*0x4bba26*/
      v22 = v43 * (unsigned __int16)(v17 & v32); /*0x4bba4b*/
      v23 = (unsigned __int16 *)(v33 + 2 * v18); /*0x4bba50*/
      v34 = (unsigned __int16)v9; /*0x4bba53*/
      v42 = v23; /*0x4bba57*/
      while ( 1 ) /*0x4bba68*/
      {
        v24 = *v23; /*0x4bba68*/
        v25 = v28 & ((v20 + v31 * (v24 & v19)) >> 8) | v29 & ((v21 + v31 * (v24 & v9)) >> 8); /*0x4bba8b*/
        v26 = (unsigned __int16)(v24 & v32); /*0x4bba91*/
        v23 = v42 + 1; /*0x4bba9c*/
        *v42++ = ((v22 + (unsigned int)v31 * v26) >> 8) | v25; /*0x4bbaa8*/
        if ( ++v27 >= v39 ) /*0x4bbabb*/
          break; /*0x4bbabb*/
        v9 = v34; /*0x4bba5d*/
      }
      LOWORD(v10) = v28; /*0x4bbabd*/
      LOWORD(v17) = i; /*0x4bbac1*/
      LOWORD(v9) = v29; /*0x4bbac5*/
      v14 = v43; /*0x4bbac9*/
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x4bbae8*/
  return 1; /*0x4bb849*/
}


// ==== 0x004BBB00  DSurface::BlitStretch  this=DSurface  sig=csp ====
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
        *(_WORD *)(a1 - 2) = (v8 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x4bbbec*/
                           | (v9 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                           | (v10 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
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
  return MEMORY[0x8A0DD0]; /*0x4bbc35*/
}


// ==== 0x004BBC40  GetBitShift_Green  this=Game  sig=ida-proto ====
int GetBitShift_Green()
{
  return MEMORY[0x8A0DD4]; /*0x4bbc45*/
}


// ==== 0x004BBC50  GetBitMask_Green  this=-  sig=ida-proto ====
int GetBitMask_Green()
{
  return MEMORY[0x8A0DE0]; /*0x4bbc55*/
}


// ==== 0x004BBC60  GetBitMask_Blue  this=-  sig=ida-proto ====
int GetBitMask_Blue()
{
  return MEMORY[0x8A0DE4]; /*0x4bbc65*/
}


// ==== 0x004BBC70  GetBitShift_Blue  this=-  sig=ida-proto ====
XSurface *GetBitShift_Blue()
{
  return *(XSurface **)&stru_89E138.__pad_14B0[6128]; /*0x4bbc75*/
}


// ==== 0x004BBC80  GetBitMask_Red  this=-  sig=ida-proto ====
int GetBitMask_Red()
{
  return MEMORY[0x8A0DDC]; /*0x4bbc85*/
}


// ==== 0x004BBC90  DDraw::GetStatus  this=AnimClass  sig=ida-proto ====
int DDraw_GetStatus()
{
  return g_DDraw_PixelFormat; /*0x4bbc95*/
}


// ==== 0x004BBCA0  DSurface::DrawLineModulated  this=DSurface  sig=csp ====
char __fastcall DSurface_DrawLineModulated(
        int *a1,
        int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        int a6,
        int a7,
        int a8,
        char a9)
{
  int v9; // eax
  int v10; // eax
  int *v11; // eax
  int v12; // esi
  int v13; // edi
  int v14; // ecx
  int v15; // esi
  __int64 v16; // rax
  unsigned int v17; // ebp
  __int64 v18; // rcx
  int v19; // edi
  unsigned int v20; // ebx
  unsigned int v21; // ebp
  int v22; // eax
  unsigned int v23; // eax
  double v24; // st7
  int v25; // eax
  double v26; // st6
  double v27; // st7
  int v28; // eax
  unsigned int v29; // eax
  int v30; // ebx
  int v31; // esi
  int v32; // ebp
  int v33; // ecx
  int v34; // ebp
  int v35; // esi
  int v36; // edi
  int v37; // ebp
  int v38; // eax
  int v39; // ecx
  int v40; // esi
  int v41; // eax
  int v42; // edx
  int v43; // ebp
  _DWORD *v44; // esi
  unsigned __int16 v45; // ax
  int v46; // edx
  int v47; // eax
  int v48; // esi
  int v49; // edi
  _WORD *v50; // eax
  int v51; // edx
  _WORD *v52; // ecx
  int v53; // ecx
  _WORD *v54; // eax
  bool v55; // zf
  _DWORD *v57; // edx
  unsigned __int16 v58; // ax
  int v59; // edx
  int v60; // eax
  int v61; // esi
  int v62; // esi
  _WORD *v63; // eax
  _WORD *v64; // ecx
  int v65; // ecx
  _WORD *v66; // eax
  _DWORD *v67; // esi
  unsigned __int16 v68; // ax
  int v69; // edx
  int v70; // eax
  int v71; // esi
  int v72; // edx
  _WORD *v73; // eax
  int v74; // ecx
  int v75; // edi
  _WORD *v76; // eax
  _WORD *v77; // ecx
  int v78; // [esp+1Ch] [ebp-68h]
  int v79; // [esp+20h] [ebp-64h]
  int v80; // [esp+24h] [ebp-60h]
  int v81; // [esp+28h] [ebp-5Ch]
  int v82; // [esp+2Ch] [ebp-58h]
  int v83; // [esp+30h] [ebp-54h]
  int v84; // [esp+34h] [ebp-50h]
  int v85; // [esp+34h] [ebp-50h]
  int v86; // [esp+34h] [ebp-50h]
  _DWORD v87[2]; // [esp+38h] [ebp-4Ch] BYREF
  int v88; // [esp+40h] [ebp-44h] BYREF
  int v89; // [esp+44h] [ebp-40h]
  _DWORD v90[5]; // [esp+50h] [ebp-34h] BYREF
  __int64 v91; // [esp+64h] [ebp-20h]
  __int64 v92; // [esp+6Ch] [ebp-18h]
  int v93; // [esp+74h] [ebp-10h] BYREF
  int v94; // [esp+78h] [ebp-Ch]
  int v95; // [esp+7Ch] [ebp-8h]
  int v96; // [esp+80h] [ebp-4h]
  int v97; // [esp+88h] [ebp+4h]
  int v98; // [esp+88h] [ebp+4h]
  int v99; // [esp+8Ch] [ebp+8h]
  int v100; // [esp+90h] [ebp+Ch]
  int v101; // [esp+90h] [ebp+Ch]
  int v102; // [esp+90h] [ebp+Ch]
  int v103; // [esp+90h] [ebp+Ch]
  int v104; // [esp+98h] [ebp+14h]
  int v105; // [esp+98h] [ebp+14h]
  _WORD *v106; // [esp+9Ch] [ebp+18h]

  v9 = *a1; /*0x4bbca3*/
  v90[0] = a1; /*0x4bbcae*/
  v10 = (*(int (__stdcall **)(_DWORD *))(v9 + 120))(&v90[1]); /*0x4bbcb2*/
  v11 = (int *)ClipRectIntersection(v10, 0, 0); /*0x4bbcc2*/
  v12 = *v11; /*0x4bbcc9*/
  v93 = *v11; /*0x4bbccb*/
  v13 = v11[1]; /*0x4bbccf*/
  v94 = v13; /*0x4bbcd2*/
  v95 = v11[2]; /*0x4bbcd9*/
  v14 = v11[3]; /*0x4bbcdd*/
  v96 = v14; /*0x4bbce2*/
  if ( v95 || v14 ) /*0x4bbcea*/
  {
    LODWORD(v16) = v12 + *a4; /*0x4bbd08*/
    LODWORD(v18) = v12 + *a5; /*0x4bbd0a*/
    v15 = a8; /*0x4bbd0c*/
    HIDWORD(v16) = v13 + a4[1]; /*0x4bbd13*/
    v17 = v16; /*0x4bbd15*/
    HIDWORD(v18) = v13 + a5[1]; /*0x4bbd17*/
    v19 = a7; /*0x4bbd19*/
    v91 = v16; /*0x4bbd22*/
    v92 = v18; /*0x4bbd2a*/
    if ( (int)v16 > (int)v18 ) /*0x4bbd32*/
    {
      v17 = v18; /*0x4bbd34*/
      v19 = a8; /*0x4bbd36*/
      v15 = a7; /*0x4bbd38*/
      v91 = v18; /*0x4bbd3f*/
      v92 = v16; /*0x4bbd47*/
    }
    *(_QWORD *)&v90[1] = v92; /*0x4bbd5b*/
    v20 = v17; /*0x4bbd60*/
    v21 = HIDWORD(v91); /*0x4bbd62*/
    if ( (unsigned __int8)ClipLine(&v93) ) /*0x4bbd72*/
    {
      v100 = v15; /*0x4bbd8d*/
      v104 = v19; /*0x4bbd94*/
      if ( v92 != *(_QWORD *)&v90[1] ) /*0x4bbd9b*/
      {
        v87[0] = v20 - v92; /*0x4bbdb3*/
        v87[1] = v21 - HIDWORD(v92); /*0x4bbdb7*/
        v88 = v20 - v90[1]; /*0x4bbdc7*/
        v89 = v21 - v90[2]; /*0x4bbdcb*/
        v97 = Vector::2DMagnitudeMath(&v88); /*0x4bbddc*/
        v22 = Vector::2DMagnitudeMath(v87); /*0x4bbde0*/
        v23 = abs32(Math::RoundToInt((double)v22 / (double)v97 * (double)(v19 - v15))); /*0x4bbe13*/
        if ( v19 >= v15 ) /*0x4bbe17*/
          v100 = v19 - v23; /*0x4bbe28*/
        else
          v100 = v19 + v23; /*0x4bbe1b*/
      }
      if ( v91 != __PAIR64__(v21, v20) ) /*0x4bbe39*/
      {
        v88 = v91 - v90[1]; /*0x4bbe52*/
        v89 = HIDWORD(v91) - v90[2]; /*0x4bbe56*/
        v24 = Math::Sqrt( /*0x4bbe73*/
                (double)((int)v91 - v90[1]) * (double)((int)v91 - v90[1])
              + (double)(HIDWORD(v91) - v90[2]) * (double)(HIDWORD(v91) - v90[2]));
        v25 = Math::RoundToInt(v24); /*0x4bbe78*/
        v88 = v20 - v90[1]; /*0x4bbe90*/
        v89 = v21 - v90[2]; /*0x4bbe94*/
        v26 = (double)(int)(v20 - v90[1]); /*0x4bbe9c*/
        *(double *)&v90[1] = (double)v25; /*0x4bbea7*/
        v27 = Math::Sqrt(v26 * v26 + (double)v89 * (double)v89); /*0x4bbebc*/
        v28 = Math::RoundToInt(v27); /*0x4bbec4*/
        v29 = abs32(Math::RoundToInt(*(double *)&v90[1] / (double)v28 * (double)(v19 - v15))); /*0x4bbef7*/
        if ( v15 <= v19 ) /*0x4bbefb*/
          v104 = v15 + v29; /*0x4bbf0a*/
        else
          v104 = v15 - v29; /*0x4bbeff*/
      }
      v30 = v90[0]; /*0x4bbf11*/
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v90[0] + 112))(v90[0]); /*0x4bbf19*/
      v31 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v30 + 92))(v30, v91, HIDWORD(v91)); /*0x4bbf33*/
      v98 = v31; /*0x4bbf37*/
      if ( MEMORY[0x887644] ) /*0x4bbf3b*/
      {
        v32 = *((_DWORD *)MEMORY[0x887644] + 1); /*0x4bbf45*/
        v90[2] = HIDWORD(v91); /*0x4bbf4c*/
        v106 = (_WORD *)Audio::GetSamplePosition(v91, HIDWORD(v91) - v32); /*0x4bbf5d*/
        v83 = -1; /*0x4bbf6d*/
        LOWORD(v33) = *((_WORD *)MEMORY[0x887644] + 2) + *((_WORD *)MEMORY[0x887644] + 18); /*0x4bbf79*/
        v99 = *((_DWORD *)MEMORY[0x887644] + 10); /*0x4bbf80*/
        v34 = v104; /*0x4bbf8b*/
        v105 = v104 + v33 - HIDWORD(v91) - v94; /*0x4bbf96*/
        if ( v31 ) /*0x4bbf9d*/
        {
          v35 = HIDWORD(v92) - HIDWORD(v91); /*0x4bbfb6*/
          v36 = v92 - v91; /*0x4bbfba*/
          v84 = v92 - v91; /*0x4bbfc0*/
          v37 = v100 - v34; /*0x4bbfc4*/
          v38 = (*(int (__thiscall **)(int))(*(_DWORD *)v30 + 116))(v30); /*0x4bbfc6*/
          v82 = v38; /*0x4bbfcb*/
          if ( v35 < 0 ) /*0x4bbfcf*/
          {
            v82 = -v38; /*0x4bbfd3*/
            v99 = -v99; /*0x4bbfe0*/
            v83 = 1; /*0x4bbfe7*/
          }
          v78 = 1; /*0x4bbff6*/
          v39 = abs32(v35); /*0x4bc000*/
          if ( v37 < 0 ) /*0x4bc004*/
            v78 = -1; /*0x4bc006*/
          v40 = 2 * v39; /*0x4bc010*/
          v79 = 2 * v39; /*0x4bc016*/
          v41 = abs32(v37); /*0x4bc01a*/
          v42 = 2 * v36; /*0x4bc01c*/
          v80 = 2 * v36; /*0x4bc021*/
          v43 = 2 * v41; /*0x4bc025*/
          v81 = 2 * v41; /*0x4bc028*/
          if ( v41 > v36 && v41 > v39 ) /*0x4bc034*/
          {
            v87[0] = v40 - v41; /*0x4bc03e*/
            v85 = v42 - v41; /*0x4bc048*/
            if ( v41 > 0 ) /*0x4bc04c*/
            {
              v44 = MEMORY[0x887644]; /*0x4bc052*/
              v101 = 0; /*0x4bc058*/
              v88 = v41; /*0x4bc05f*/
              do /*0x4bc27e*/
              {
                if ( (unsigned __int16)v105 < *v106 ) /*0x4bc075*/
                {
                  v45 = *(_WORD *)(v101 + v98); /*0x4bc092*/
                  LOBYTE(v90[1]) = (unsigned __int8)(v45 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bc0ab*/
                  BYTE1(v90[1]) = (unsigned __int8)(v45 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bc0cc*/
                  BYTE2(v90[1]) = (unsigned __int8)(v45 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bc0d2*/
                  v46 = ((a6 * LOBYTE(v90[1])) >> 8) + LOBYTE(v90[1]); /*0x4bc0f7*/
                  v47 = ((a6 * BYTE2(v90[1])) >> 8) + BYTE2(v90[1]); /*0x4bc11e*/
                  if ( v47 > 255 ) /*0x4bc125*/
                    v47 = 255; /*0x4bc127*/
                  v48 = 255; /*0x4bc132*/
                  if ( ((a6 * BYTE1(v90[1])) >> 8) + BYTE1(v90[1]) <= 255 ) /*0x4bc137*/
                    v48 = ((a6 * BYTE1(v90[1])) >> 8) + BYTE1(v90[1]); /*0x4bc139*/
                  if ( v46 > 255 ) /*0x4bc141*/
                    v46 = 255; /*0x4bc143*/
                  *(_WORD *)(v101 + v98) = (v47 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bc17b*/
                                         | (v48 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                         | (v46 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
                  if ( a9 ) /*0x4bc188*/
                    *v106 = v105; /*0x4bc199*/
                  v44 = MEMORY[0x887644]; /*0x4bc19c*/
                }
                v49 = v87[0]; /*0x4bc1a2*/
                if ( v87[0] <= 0 ) /*0x4bc1a8*/
                {
                  v51 = v105; /*0x4bc213*/
                }
                else
                {
                  v49 = v87[0] - v81; /*0x4bc1c6*/
                  v98 += v82; /*0x4bc1c8*/
                  v50 = &v106[v99]; /*0x4bc1ce*/
                  if ( v99 <= 0 ) /*0x4bc1d1*/
                  {
                    v52 = &v106[v99]; /*0x4bc1f2*/
                    if ( (unsigned int)v50 < v44[6] ) /*0x4bc1f6*/
                      v52 = (_WORD *)((char *)v50 + v44[8]); /*0x4bc1fb*/
                    v106 = v52; /*0x4bc208*/
                    v51 = v83 + v105; /*0x4bc20f*/
                  }
                  else
                  {
                    if ( (unsigned int)v50 >= v44[7] ) /*0x4bc1d6*/
                      v50 = (_WORD *)((char *)v50 - v44[8]); /*0x4bc1d8*/
                    v106 = v50; /*0x4bc1e2*/
                    v51 = v83 + v105; /*0x4bc1e9*/
                  }
                }
                v53 = v85; /*0x4bc21a*/
                if ( v85 > 0 ) /*0x4bc220*/
                {
                  v54 = v106 + 1; /*0x4bc233*/
                  v101 += 2; /*0x4bc23b*/
                  if ( (unsigned int)(v106 + 1) >= v44[7] ) /*0x4bc242*/
                    v54 = (_WORD *)((char *)v54 - v44[8]); /*0x4bc244*/
                  v106 = v54; /*0x4bc247*/
                  v53 = v85 - v81; /*0x4bc252*/
                }
                v105 = v78 + v51; /*0x4bc25e*/
                v85 = v80 + v53; /*0x4bc26b*/
                v55 = v88 == 1; /*0x4bc275*/
                v87[0] = v79 + v49; /*0x4bc276*/
                --v88; /*0x4bc27a*/
              }
              while ( !v55 ); /*0x4bc27e*/
            }
            goto LABEL_48; /*0x4bc27e*/
          }
          if ( v36 <= v39 ) /*0x4bc29b*/
          {
            v88 = v42 - v39; /*0x4bc501*/
            v87[0] = v43 - v39; /*0x4bc50b*/
            if ( v39 > 0 ) /*0x4bc50f*/
            {
              v67 = MEMORY[0x887644]; /*0x4bc515*/
              v103 = 0; /*0x4bc51b*/
              v86 = v39; /*0x4bc522*/
              do /*0x4bc728*/
              {
                if ( (unsigned __int16)v105 < *v106 ) /*0x4bc538*/
                {
                  v68 = *(_WORD *)(v103 + v98); /*0x4bc555*/
                  LOBYTE(v90[1]) = (unsigned __int8)(v68 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bc56e*/
                  BYTE1(v90[1]) = (unsigned __int8)(v68 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bc58f*/
                  BYTE2(v90[1]) = (unsigned __int8)(v68 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bc595*/
                  v69 = ((a6 * LOBYTE(v90[1])) >> 8) + LOBYTE(v90[1]); /*0x4bc5ba*/
                  v70 = ((a6 * BYTE2(v90[1])) >> 8) + BYTE2(v90[1]); /*0x4bc5e1*/
                  if ( v70 > 255 ) /*0x4bc5e8*/
                    v70 = 255; /*0x4bc5ea*/
                  v71 = 255; /*0x4bc5f5*/
                  if ( ((a6 * BYTE1(v90[1])) >> 8) + BYTE1(v90[1]) <= 255 ) /*0x4bc5fa*/
                    v71 = ((a6 * BYTE1(v90[1])) >> 8) + BYTE1(v90[1]); /*0x4bc5fc*/
                  if ( v69 > 255 ) /*0x4bc604*/
                    v69 = 255; /*0x4bc606*/
                  *(_WORD *)(v103 + v98) = (v70 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bc63e*/
                                         | (v71 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                         | (v69 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
                  if ( a9 ) /*0x4bc64b*/
                    *v106 = v105; /*0x4bc65c*/
                  v67 = MEMORY[0x887644]; /*0x4bc65f*/
                }
                v72 = v88; /*0x4bc665*/
                if ( v88 <= 0 ) /*0x4bc66b*/
                {
                  v73 = v106; /*0x4bc698*/
                }
                else
                {
                  v73 = v106 + 1; /*0x4bc67e*/
                  v103 += 2; /*0x4bc686*/
                  if ( (unsigned int)(v106 + 1) >= v67[7] ) /*0x4bc68d*/
                    v73 = (_WORD *)((char *)v73 - v67[8]); /*0x4bc68f*/
                  v72 = v88 - v79; /*0x4bc692*/
                }
                v74 = v87[0]; /*0x4bc69f*/
                v75 = v105; /*0x4bc6a3*/
                if ( v87[0] > 0 ) /*0x4bc6ac*/
                {
                  v75 = v78 + v105; /*0x4bc6b6*/
                  v74 = v87[0] - v79; /*0x4bc6b8*/
                }
                v88 = v80 + v72; /*0x4bc6c4*/
                v87[0] = v81 + v74; /*0x4bc6d5*/
                v76 = &v73[v99]; /*0x4bc6e2*/
                v98 += v82; /*0x4bc6e4*/
                if ( v99 <= 0 ) /*0x4bc6ea*/
                {
                  v77 = v76; /*0x4bc700*/
                  if ( (unsigned int)v76 < v67[6] ) /*0x4bc704*/
                    v77 = (_WORD *)((char *)v76 + v67[8]); /*0x4bc709*/
                  v106 = v77; /*0x4bc70b*/
                }
                else
                {
                  if ( (unsigned int)v76 >= v67[7] ) /*0x4bc6ef*/
                    v76 = (_WORD *)((char *)v76 - v67[8]); /*0x4bc6f1*/
                  v106 = v76; /*0x4bc6f4*/
                }
                v55 = v86 == 1; /*0x4bc71c*/
                v105 = v83 + v75; /*0x4bc71d*/
                --v86; /*0x4bc724*/
              }
              while ( !v55 ); /*0x4bc728*/
            }
            goto LABEL_48; /*0x4bc728*/
          }
          v102 = 0; /*0x4bc2a3*/
          v88 = v40 - v36; /*0x4bc2ac*/
          v87[0] = v43 - v36; /*0x4bc2b6*/
          if ( v36 <= 0 ) /*0x4bc2ba*/
          {
LABEL_48:
            (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v90[0] + 96))(v90[0]); /*0x4bc284*/
            return 1; /*0x4bc296*/
          }
          v57 = MEMORY[0x887644]; /*0x4bc2c0*/
          while ( 1 ) /*0x4bc2c6*/
          {
            if ( (unsigned __int16)v105 < *v106 ) /*0x4bc2d8*/
            {
              v58 = *(_WORD *)(v98 + 2 * v102); /*0x4bc2f5*/
              LOBYTE(v90[1]) = (unsigned __int8)(v58 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bc30e*/
              BYTE1(v90[1]) = (unsigned __int8)(v58 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bc32f*/
              BYTE2(v90[1]) = (unsigned __int8)(v58 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bc335*/
              v59 = ((a6 * LOBYTE(v90[1])) >> 8) + LOBYTE(v90[1]); /*0x4bc35a*/
              v60 = ((a6 * BYTE2(v90[1])) >> 8) + BYTE2(v90[1]); /*0x4bc381*/
              if ( v60 > 255 ) /*0x4bc388*/
                v60 = 255; /*0x4bc38a*/
              v61 = 255; /*0x4bc395*/
              if ( ((a6 * BYTE1(v90[1])) >> 8) + BYTE1(v90[1]) <= 255 ) /*0x4bc39a*/
                v61 = ((a6 * BYTE1(v90[1])) >> 8) + BYTE1(v90[1]); /*0x4bc39c*/
              if ( v59 > 255 ) /*0x4bc3a4*/
                v59 = 255; /*0x4bc3a6*/
              *(_WORD *)(v98 + 2 * v102) = (v60 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bc3de*/
                                         | (v61 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                         | (v59 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              if ( a9 ) /*0x4bc3eb*/
                *v106 = v105; /*0x4bc3fc*/
              v57 = MEMORY[0x887644]; /*0x4bc3ff*/
            }
            v62 = v88; /*0x4bc405*/
            if ( v88 <= 0 ) /*0x4bc40b*/
            {
              v63 = v106; /*0x4bc47c*/
              goto LABEL_71; /*0x4bc47c*/
            }
            v62 = v88 - v80; /*0x4bc429*/
            v98 += v82; /*0x4bc42b*/
            v63 = &v106[v99]; /*0x4bc431*/
            if ( v99 <= 0 ) /*0x4bc434*/
              break; /*0x4bc434*/
            if ( (unsigned int)v63 < v57[7] ) /*0x4bc439*/
              goto LABEL_69; /*0x4bc439*/
            v63 = (_WORD *)((char *)v63 - v57[8]); /*0x4bc445*/
            v105 += v83; /*0x4bc44d*/
LABEL_71:
            v65 = v87[0]; /*0x4bc483*/
            if ( v87[0] > 0 ) /*0x4bc489*/
            {
              v105 += v78; /*0x4bc49c*/
              v65 = v87[0] - v80; /*0x4bc4a3*/
            }
            v66 = v63 + 1; /*0x4bc4a9*/
            v88 = v79 + v62; /*0x4bc4ae*/
            v87[0] = v81 + v65; /*0x4bc4b8*/
            if ( (unsigned int)v66 >= v57[7] ) /*0x4bc4c1*/
              v66 = (_WORD *)((char *)v66 - v57[8]); /*0x4bc4c3*/
            v106 = v66; /*0x4bc4ca*/
            if ( ++v102 >= v84 ) /*0x4bc4e2*/
              goto LABEL_48; /*0x4bc4e2*/
          }
          v64 = &v106[v99]; /*0x4bc459*/
          if ( (unsigned int)v63 < v57[6] ) /*0x4bc45d*/
            v64 = (_WORD *)((char *)v63 + v57[8]); /*0x4bc462*/
          v63 = v64; /*0x4bc464*/
LABEL_69:
          v105 += v83; /*0x4bc466*/
          goto LABEL_71; /*0x4bc47a*/
        }
      }
    }
  }
  return 0; /*0x4bc28d*/
}


// ==== 0x004BC750  DSurface::DrawLineFaded  this=DSurface  sig=csp ====
char __thiscall DSurface_DrawLineFaded(
        void *this,
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
  unsigned int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  unsigned int v37; // eax
  void *v38; // esi
  int v39; // edi
  int v41; // ebx
  _WORD *v42; // eax
  int v43; // ebp
  int v44; // edi
  int v45; // esi
  int v46; // ebx
  int v47; // eax
  int v48; // ecx
  int v49; // esi
  int v50; // ebp
  signed int v51; // eax
  int v52; // ecx
  int v53; // eax
  _DWORD *v54; // ebx
  int v55; // ebp
  int v56; // esi
  int v57; // eax
  int v58; // edx
  int v59; // ebx
  int v60; // edi
  int v61; // esi
  int v62; // ecx
  int v63; // eax
  int v64; // edx
  int v65; // edx
  int v66; // esi
  int v67; // eax
  _WORD *v68; // eax
  _WORD *v69; // edx
  _WORD *v70; // ecx
  _DWORD *v71; // ebp
  _WORD *v72; // edi
  int v73; // esi
  _WORD *v74; // eax
  _WORD *v75; // eax
  _WORD *v76; // eax
  _DWORD *v77; // edi
  _DWORD *v78; // ebx
  int v79; // esi
  int v80; // eax
  int v81; // ebp
  int v82; // esi
  int v83; // edi
  int v84; // ebx
  int v85; // edx
  int v86; // ecx
  int v87; // eax
  int v88; // esi
  int v89; // esi
  int v90; // edx
  int v91; // esi
  int v92; // eax
  unsigned int v93; // ecx
  _WORD *v94; // eax
  _WORD *v95; // ecx
  _WORD *v96; // eax
  _WORD *v97; // ecx
  _WORD *v98; // edx
  _WORD *v99; // eax
  bool v100; // zf
  int v101; // eax
  _DWORD *v102; // edi
  _DWORD *v103; // ebx
  int v104; // esi
  int v105; // eax
  int v106; // ebp
  int v107; // esi
  int v108; // edi
  int v109; // ebx
  int v110; // edx
  int v111; // ecx
  int v112; // eax
  int v113; // esi
  int v114; // esi
  int v115; // edx
  int v116; // esi
  int v117; // eax
  _WORD *v118; // eax
  _WORD *v119; // edx
  _WORD *v120; // ecx
  _WORD *v121; // esi
  _WORD *v122; // eax
  int v123; // eax
  _WORD *v124; // eax
  _WORD *v125; // eax
  bool v126; // cc
  int v127; // eax
  _DWORD *v128; // ebx
  int v129; // esi
  int v130; // eax
  int v131; // ebp
  int v132; // esi
  int v133; // edi
  int v134; // ebx
  int v135; // edx
  int v136; // ecx
  int v137; // eax
  int v138; // esi
  int v139; // esi
  int v140; // edx
  int v141; // esi
  int v142; // eax
  _WORD *v143; // eax
  _WORD *v144; // edx
  int v145; // ecx
  int v146; // ebp
  _WORD *v147; // eax
  _WORD *v148; // ecx
  _WORD *v149; // edx
  _WORD *v150; // eax
  int v151; // [esp+10h] [ebp-C4h]
  int v152; // [esp+10h] [ebp-C4h]
  int v153; // [esp+10h] [ebp-C4h]
  int v154; // [esp+10h] [ebp-C4h]
  int v155; // [esp+10h] [ebp-C4h]
  int v156; // [esp+14h] [ebp-C0h]
  int v157; // [esp+14h] [ebp-C0h]
  int v158; // [esp+14h] [ebp-C0h]
  int v159; // [esp+14h] [ebp-C0h]
  _WORD *v160; // [esp+18h] [ebp-BCh]
  int v161; // [esp+1Ch] [ebp-B8h]
  int v162; // [esp+1Ch] [ebp-B8h]
  int v163; // [esp+20h] [ebp-B4h]
  int v164; // [esp+20h] [ebp-B4h]
  int v165; // [esp+20h] [ebp-B4h]
  int v166; // [esp+20h] [ebp-B4h]
  int v167; // [esp+20h] [ebp-B4h]
  int v168; // [esp+24h] [ebp-B0h]
  int v169; // [esp+24h] [ebp-B0h]
  int v170; // [esp+24h] [ebp-B0h]
  int v171; // [esp+28h] [ebp-ACh]
  _WORD *v172; // [esp+2Ch] [ebp-A8h]
  int v173; // [esp+30h] [ebp-A4h]
  int v174; // [esp+30h] [ebp-A4h]
  int v175; // [esp+30h] [ebp-A4h]
  int v176; // [esp+30h] [ebp-A4h]
  int v177; // [esp+30h] [ebp-A4h]
  int v178; // [esp+34h] [ebp-A0h]
  int v179; // [esp+38h] [ebp-9Ch]
  int v180; // [esp+3Ch] [ebp-98h]
  int v181; // [esp+3Ch] [ebp-98h]
  int v182; // [esp+3Ch] [ebp-98h]
  int v183; // [esp+3Ch] [ebp-98h]
  int v184; // [esp+40h] [ebp-94h]
  int v185; // [esp+40h] [ebp-94h]
  int v186; // [esp+40h] [ebp-94h]
  int v187; // [esp+40h] [ebp-94h]
  int v188; // [esp+44h] [ebp-90h]
  int v189; // [esp+44h] [ebp-90h]
  int v190; // [esp+48h] [ebp-8Ch]
  int v191; // [esp+48h] [ebp-8Ch]
  int v192; // [esp+48h] [ebp-8Ch]
  int v193; // [esp+4Ch] [ebp-88h]
  int v194; // [esp+4Ch] [ebp-88h]
  int v195; // [esp+4Ch] [ebp-88h]
  int v196; // [esp+4Ch] [ebp-88h]
  int v197; // [esp+50h] [ebp-84h]
  __int16 v198; // [esp+50h] [ebp-84h]
  int v199; // [esp+50h] [ebp-84h]
  int v200; // [esp+50h] [ebp-84h]
  int v201; // [esp+54h] [ebp-80h]
  _DWORD v202[2]; // [esp+58h] [ebp-7Ch] BYREF
  int v203; // [esp+60h] [ebp-74h]
  int v204; // [esp+64h] [ebp-70h]
  int v205; // [esp+6Ch] [ebp-68h]
  int v206; // [esp+70h] [ebp-64h]
  int v207; // [esp+74h] [ebp-60h]
  int v208; // [esp+78h] [ebp-5Ch]
  int v209; // [esp+7Ch] [ebp-58h] BYREF
  int v210; // [esp+80h] [ebp-54h]
  void *v211; // [esp+84h] [ebp-50h]
  int v212; // [esp+88h] [ebp-4Ch]
  int v213; // [esp+8Ch] [ebp-48h]
  int v214; // [esp+90h] [ebp-44h]
  int v215; // [esp+94h] [ebp-40h]
  int v216; // [esp+98h] [ebp-3Ch]
  int v217; // [esp+9Ch] [ebp-38h] BYREF
  int v218; // [esp+A0h] [ebp-34h]
  int v219; // [esp+ACh] [ebp-28h]
  int v220; // [esp+B0h] [ebp-24h]
  int v221; // [esp+B4h] [ebp-20h] BYREF
  int v222; // [esp+B8h] [ebp-1Ch]
  int v223; // [esp+BCh] [ebp-18h]
  int v224; // [esp+C0h] [ebp-14h]
  int v225; // [esp+C4h] [ebp-10h] BYREF
  int v226; // [esp+C8h] [ebp-Ch]
  int v227; // [esp+CCh] [ebp-8h]
  int v228; // [esp+D0h] [ebp-4h]

  v211 = this; /*0x4bc763*/
  if ( !MEMORY[0x8A0DF1] ) /*0x4bc76a*/
  {
    MEMORY[0x8A0DF1] = 1; /*0x4bc76c*/
    v207 = 0; /*0x4bc773*/
    v13 = MEMORY[0x8A0980]; /*0x4bc77b*/
    do /*0x4bc7c0*/
    {
      v14 = Math::RoundToInt((pow((double)v207 * 0.0078125 - 1.0, 3.0) + 1.0) * 128.0); /*0x4bc7a7*/
      v15 = v207; /*0x4bc7ac*/
      *v13++ = v14; /*0x4bc7b0*/
      v207 = v15 + 1; /*0x4bc7bc*/
    }
    while ( (int)v13 <= (int)&MEMORY[0x8A0D80] ); /*0x4bc7c0*/
  }
  v16 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 120))(this, &v217); /*0x4bc7ce*/
  v221 = *v16; /*0x4bc7d9*/
  v222 = v16[1]; /*0x4bc7e4*/
  v223 = v16[2]; /*0x4bc7ef*/
  v17 = v16[3]; /*0x4bc7f9*/
  v223 -= 2; /*0x4bc7fc*/
  ++v222; /*0x4bc80a*/
  ++v221; /*0x4bc823*/
  v224 = v17 - 2; /*0x4bc82a*/
  v18 = (int *)ClipRectIntersection(&v221, 0, 0); /*0x4bc831*/
  v19 = *v18; /*0x4bc838*/
  v225 = *v18; /*0x4bc83a*/
  v20 = v18[1]; /*0x4bc841*/
  v226 = v20; /*0x4bc844*/
  v227 = v18[2]; /*0x4bc84e*/
  v21 = v18[3]; /*0x4bc855*/
  v228 = v21; /*0x4bc85a*/
  if ( !v227 && !v21 ) /*0x4bc865*/
    return 0; /*0x4bc865*/
  v219 = *a5; /*0x4bc876*/
  v207 = a5[1]; /*0x4bc882*/
  v208 = a5[2]; /*0x4bc88d*/
  v22 = *a3 + v19; /*0x4bc89d*/
  v23 = v20 + a3[1]; /*0x4bc8a6*/
  v24 = v22; /*0x4bc8a8*/
  v25 = *a4; /*0x4bc8aa*/
  v205 = v22; /*0x4bc8ac*/
  v206 = v23; /*0x4bc8b2*/
  v26 = v25 + v19; /*0x4bc8b6*/
  v27 = a6; /*0x4bc8bb*/
  v28 = v20 + a4[1]; /*0x4bc8c2*/
  v29 = a7; /*0x4bc8c4*/
  v215 = v26; /*0x4bc8cd*/
  v216 = v28; /*0x4bc8d4*/
  if ( v22 > v26 ) /*0x4bc8db*/
  {
    v24 = v26; /*0x4bc8dd*/
    v27 = a7; /*0x4bc8df*/
    v29 = a6; /*0x4bc8e1*/
    v205 = v26; /*0x4bc8e8*/
    v206 = v28; /*0x4bc8ec*/
    v215 = v22; /*0x4bc8f0*/
    v216 = v23; /*0x4bc8f7*/
  }
  v217 = v215; /*0x4bc913*/
  v30 = v24; /*0x4bc91b*/
  v31 = v206; /*0x4bc91d*/
  v218 = v216; /*0x4bc92c*/
  if ( !(unsigned __int8)ClipLine(&v225) ) /*0x4bc933*/
    return 0; /*0x4bc93a*/
  v173 = v29; /*0x4bc957*/
  v151 = v27; /*0x4bc95b*/
  if ( v215 != v217 || v216 != v218 ) /*0x4bc968*/
  {
    v202[0] = v30 - v215; /*0x4bc979*/
    v202[1] = v206 - v216; /*0x4bc97d*/
    v209 = v30 - v217; /*0x4bc990*/
    v210 = v206 - v218; /*0x4bc994*/
    v193 = Vector::2DMagnitudeMath(&v209); /*0x4bc9a8*/
    v32 = Vector::2DMagnitudeMath(v202); /*0x4bc9ac*/
    v33 = abs32(Math::RoundToInt((double)v32 / (double)v193 * (double)(v27 - v29))); /*0x4bc9d3*/
    if ( v27 >= v29 ) /*0x4bc9d7*/
      v173 = v27 - v33; /*0x4bc9e5*/
    else
      v173 = v27 + v33; /*0x4bc9db*/
  }
  v34 = v205; /*0x4bc9e9*/
  v35 = v206; /*0x4bc9ed*/
  if ( v205 != v30 || v206 != v31 ) /*0x4bc9f7*/
  {
    v209 = v205 - v217; /*0x4bca16*/
    v210 = v206 - v218; /*0x4bca23*/
    v217 = v30 - v217; /*0x4bca2a*/
    v218 = v31 - v218; /*0x4bca31*/
    v194 = Vector::2DMagnitudeMath(&v217); /*0x4bca41*/
    v36 = Vector::2DMagnitudeMath(&v209); /*0x4bca45*/
    v37 = abs32(Math::RoundToInt((double)v36 / (double)v194 * (double)(v27 - v29))); /*0x4bca6c*/
    if ( v29 <= v27 ) /*0x4bca70*/
      v151 = v29 + v37; /*0x4bca7c*/
    else
      v151 = v29 - v37; /*0x4bca74*/
    v35 = v206; /*0x4bca80*/
    v34 = v205; /*0x4bca84*/
  }
  v38 = v211; /*0x4bca88*/
  v39 = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)v211 + 92))(v211, v34, v35); /*0x4bca9e*/
  v178 = v39; /*0x4bcaa2*/
  if ( !MEMORY[0x887644] ) /*0x4bcaa6*/
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)v38 + 96))(v38); /*0x4bcaac*/
    return 0; /*0x4bcabb*/
  }
  v41 = *((_DWORD *)MEMORY[0x887644] + 1); /*0x4bcac2*/
  v218 = v206; /*0x4bcac9*/
  v160 = (_WORD *)Audio::GetSamplePosition(v205, v206 - v41); /*0x4bcadf*/
  v42 = (_WORD *)StreamClass::ReadAndSeek(v205 - *(_DWORD *)MEMORY[0x87E8A4], v206 - *((_DWORD *)MEMORY[0x87E8A4] + 1)); /*0x4bcaf6*/
  v172 = v42; /*0x4bcb0c*/
  v43 = *((_DWORD *)MEMORY[0x887644] + 10); /*0x4bcb14*/
  LOWORD(v42) = *((_WORD *)MEMORY[0x887644] + 2) + *((_WORD *)MEMORY[0x887644] + 18); /*0x4bcb17*/
  v212 = v43; /*0x4bcb1b*/
  v203 = -1; /*0x4bcb22*/
  v171 = (int)v42 + v151 - v226 - v206; /*0x4bcb36*/
  if ( !v39 ) /*0x4bcb3a*/
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)v211 + 96))(v211); /*0x4bdeee*/
    return 0; /*0x4bdef4*/
  }
  v44 = v215 - v205; /*0x4bcb56*/
  v45 = v216 - v206; /*0x4bcb5f*/
  v168 = v215 - v205; /*0x4bcb65*/
  v46 = v173 - v151; /*0x4bcb69*/
  v47 = (*(int (__thiscall **)(void *))(*(_DWORD *)v211 + 116))(v211); /*0x4bcb6b*/
  v48 = v47; /*0x4bcb6e*/
  v213 = v47; /*0x4bcb72*/
  if ( v45 < 0 ) /*0x4bcb79*/
  {
    v48 = -v47; /*0x4bcb7b*/
    v213 = -v47; /*0x4bcb7f*/
    v212 = -v43; /*0x4bcb86*/
    v203 = 1; /*0x4bcb8d*/
  }
  v214 = 1; /*0x4bcb97*/
  v49 = abs32(v45); /*0x4bcba9*/
  v50 = v48 / 2; /*0x4bcbb4*/
  if ( v46 < 0 ) /*0x4bcbb8*/
    v214 = -1; /*0x4bcbba*/
  v202[0] = 2 * v49; /*0x4bcbcd*/
  v51 = abs32(v46); /*0x4bcbd1*/
  v52 = 2 * v51; /*0x4bcbd5*/
  v188 = 2 * v51; /*0x4bcbd8*/
  if ( v44 || v49 ) /*0x4bcbe0*/
  {
    if ( v51 <= v44 || v51 <= v49 ) /*0x4bcc07*/
    {
      v162 = 256; /*0x4bd558*/
      if ( v44 <= v49 ) /*0x4bd562*/
      {
        v201 = v52 - v49; /*0x4bda35*/
        v127 = Math::RoundToInt((double)v168 / (double)v49 * 256.0); /*0x4bda43*/
        v220 = v127; /*0x4bda4a*/
        if ( v49 > 0 ) /*0x4bda51*/
        {
          v128 = MEMORY[0x887644]; /*0x4bda57*/
          v170 = 0; /*0x4bda61*/
          v200 = -v127; /*0x4bda65*/
          v155 = 0; /*0x4bda69*/
          v177 = v49; /*0x4bda6d*/
          do /*0x4bdec4*/
          {
            v159 = (unsigned __int16)*v172; /*0x4bda7e*/
            if ( (unsigned __int16)v171 < *v160 && *v172 ) /*0x4bda7b*/
            {
              v129 = Math::RoundToInt((double)v162 * a12); /*0x4bdab0*/
              v130 = Math::RoundToInt((double)v155 * a12); /*0x4bdab9*/
              v131 = MEMORY[0x8A0980][v129]; /*0x4bdacc*/
              v132 = *((_DWORD *)&MEMORY[0x8A0D80] - v129); /*0x4bdad2*/
              v130 *= 4; /*0x4bdad9*/
              v133 = *(_DWORD *)((char *)&MEMORY[0x8A0D80] - v130); /*0x4bdaec*/
              v192 = *(int *)((char *)MEMORY[0x8A0980] + v130); /*0x4bdaf2*/
              LOWORD(v130) = *(_WORD *)(v170 + v178); /*0x4bdafd*/
              LOBYTE(v209) = (unsigned __int8)((unsigned __int16)v130 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bdb15*/
              BYTE1(v209) = (unsigned __int8)((unsigned __int16)v130 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bdb26*/
              BYTE2(v209) = (unsigned __int8)((unsigned __int16)v130 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bdb42*/
              LOWORD(v130) = *(_WORD *)(v170 + v178 + 2); /*0x4bdb46*/
              LOBYTE(v217) = (unsigned __int8)((unsigned __int16)v130 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bdb66*/
              v134 = (unsigned __int8)v209; /*0x4bdb8a*/
              BYTE1(v217) = (unsigned __int8)((unsigned __int16)v130 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bdb90*/
              v135 = BYTE1(v209); /*0x4bdb9b*/
              v167 = (unsigned __int8)v209; /*0x4bdba1*/
              v136 = BYTE2(v209); /*0x4bdbaf*/
              BYTE2(v217) = (unsigned __int8)((unsigned __int16)v130 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bdbb5*/
              v187 = (unsigned __int8)v217; /*0x4bdbc8*/
              v183 = BYTE1(v217); /*0x4bdbd8*/
              v137 = BYTE2(v217); /*0x4bdbe3*/
              if ( LOBYTE(a9) ) /*0x4bdbf0*/
              {
                v167 = (v159 * (v219 * v131 + (unsigned __int8)v209 * v132)) >> 15; /*0x4bdc14*/
                v135 = BYTE1(v209); /*0x4bdc2a*/
                v187 = (v159 * (v219 * v192 + (unsigned __int8)v217 * v133)) >> 15; /*0x4bdc31*/
                v134 = v167; /*0x4bdc35*/
              }
              if ( a10 ) /*0x4bdc41*/
              {
                v135 = (v159 * (v207 * v131 + v135 * v132)) >> 15; /*0x4bdc76*/
                v183 = (v159 * (v207 * v192 + BYTE1(v217) * v133)) >> 15; /*0x4bdc7d*/
                v134 = v167; /*0x4bdc81*/
              }
              if ( a11 ) /*0x4bdc8d*/
              {
                v136 = (v159 * (v208 * v131 + BYTE2(v209) * v132)) >> 15; /*0x4bdcb7*/
                v137 = (v159 * (v208 * v192 + BYTE2(v217) * v133)) >> 15; /*0x4bdcb9*/
              }
              v138 = 255; /*0x4bdcc1*/
              if ( v136 <= 255 ) /*0x4bdcc6*/
                v138 = v136; /*0x4bdcc8*/
              if ( v135 > 255 ) /*0x4bdcd0*/
                v135 = 255; /*0x4bdcd2*/
              if ( v134 > 255 ) /*0x4bdcdd*/
                v134 = 255; /*0x4bdcdf*/
              *(_WORD *)(v178 + v170) = (v138 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bdd25*/
                                      | (v135 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                      | (v134 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              if ( v137 > 255 ) /*0x4bdd29*/
                v137 = 255; /*0x4bdd2b*/
              v139 = v183; /*0x4bdd30*/
              if ( v183 > 255 ) /*0x4bdd3a*/
                v139 = 255; /*0x4bdd3c*/
              v140 = v187; /*0x4bdd41*/
              if ( v187 > 255 ) /*0x4bdd4b*/
                v140 = 255; /*0x4bdd4d*/
              *(_WORD *)(v178 + v170 + 2) = (v137 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bdd8f*/
                                          | (v139 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                          | (v140 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              if ( a8 ) /*0x4bdd94*/
                *v160 = v171; /*0x4bdd9f*/
              v128 = MEMORY[0x887644]; /*0x4bdda2*/
            }
            v141 = v162 - v220; /*0x4bddb7*/
            v162 -= v220; /*0x4bddbd*/
            v142 = v155 - v200; /*0x4bddc1*/
            v155 -= v200; /*0x4bddc8*/
            if ( v155 <= 256 ) /*0x4bddcc*/
            {
              v144 = v172; /*0x4bde16*/
              v143 = v160; /*0x4bde1a*/
            }
            else
            {
              v155 = v142 - 256; /*0x4bdddc*/
              v143 = v160 + 1; /*0x4bdde4*/
              v162 = v141 + 256; /*0x4bddf2*/
              v170 += 2; /*0x4bddf6*/
              if ( (unsigned int)(v160 + 1) >= v128[7] ) /*0x4bddfa*/
                v143 = (_WORD *)((char *)v143 - v128[8]); /*0x4bddfc*/
              v144 = v172 + 1; /*0x4bde03*/
              if ( (unsigned int)(v172 + 1) >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x4bde0f*/
                v144 = (_WORD *)((char *)v144 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4bde11*/
            }
            v145 = v201; /*0x4bde1e*/
            v146 = v171; /*0x4bde22*/
            if ( v201 > 0 ) /*0x4bde28*/
            {
              v146 = v214 + v171; /*0x4bde35*/
              v145 = v201 - v202[0]; /*0x4bde37*/
            }
            v201 = v188 + v145; /*0x4bde4a*/
            v178 += v213; /*0x4bde57*/
            v147 = &v143[v212]; /*0x4bde5e*/
            if ( v212 <= 0 ) /*0x4bde62*/
            {
              v148 = v147; /*0x4bde75*/
              if ( (unsigned int)v147 < v128[6] ) /*0x4bde77*/
                v148 = (_WORD *)((char *)v147 + v128[8]); /*0x4bde7c*/
              v160 = v148; /*0x4bde7e*/
            }
            else
            {
              if ( (unsigned int)v147 >= v128[7] ) /*0x4bde67*/
                v147 = (_WORD *)((char *)v147 - v128[8]); /*0x4bde69*/
              v160 = v147; /*0x4bde6c*/
            }
            v149 = &v144[v212]; /*0x4bde82*/
            if ( v212 <= 0 ) /*0x4bde86*/
            {
              v150 = v149; /*0x4bdea1*/
              if ( (unsigned int)v149 < *((_DWORD *)MEMORY[0x87E8A4] + 6) ) /*0x4bdea6*/
                v150 = (_WORD *)((char *)v149 + *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4bdeab*/
              v172 = v150; /*0x4bdead*/
            }
            else
            {
              if ( (unsigned int)v149 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x4bde90*/
                v149 = (_WORD *)((char *)v149 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4bde92*/
              v172 = v149; /*0x4bde95*/
            }
            v100 = v177 == 1; /*0x4bdebb*/
            v171 = v203 + v146; /*0x4bdebc*/
            --v177; /*0x4bdec0*/
          }
          while ( !v100 ); /*0x4bdec4*/
        }
      }
      else
      {
        v196 = v52 - v44; /*0x4bd56e*/
        v101 = Math::RoundToInt((double)v49 / (double)v168 * 256.0); /*0x4bd57c*/
        v220 = v101; /*0x4bd583*/
        v176 = 0; /*0x4bd58a*/
        if ( v44 > 0 ) /*0x4bd592*/
        {
          v102 = MEMORY[0x887644]; /*0x4bd598*/
          v103 = MEMORY[0x87E8A4]; /*0x4bd59e*/
          v204 = -v101; /*0x4bd5aa*/
          v154 = 2 * v50; /*0x4bd5ae*/
          v199 = 0; /*0x4bd5b2*/
          do /*0x4bda0e*/
          {
            v158 = (unsigned __int16)*v172; /*0x4bd5c7*/
            if ( (unsigned __int16)v171 < *v160 && *v172 ) /*0x4bd5c4*/
            {
              v104 = Math::RoundToInt((double)v162 * a12); /*0x4bd5f9*/
              v105 = Math::RoundToInt((double)v199 * a12); /*0x4bd602*/
              v106 = MEMORY[0x8A0980][v104]; /*0x4bd615*/
              v107 = *((_DWORD *)&MEMORY[0x8A0D80] - v104); /*0x4bd61b*/
              v105 *= 4; /*0x4bd622*/
              v108 = *(_DWORD *)((char *)&MEMORY[0x8A0D80] - v105); /*0x4bd635*/
              v191 = *(int *)((char *)MEMORY[0x8A0980] + v105); /*0x4bd63b*/
              LOWORD(v105) = *(_WORD *)(v178 + 2 * v176); /*0x4bd646*/
              LOBYTE(v209) = (unsigned __int8)((unsigned __int16)v105 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bd65e*/
              BYTE1(v209) = (unsigned __int8)((unsigned __int16)v105 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bd66f*/
              BYTE2(v209) = (unsigned __int8)((unsigned __int16)v105 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bd68b*/
              LOWORD(v105) = *(_WORD *)(v154 + v178); /*0x4bd68f*/
              LOBYTE(v202[0]) = (unsigned __int8)((unsigned __int16)v105 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bd6ae*/
              BYTE1(v202[0]) = (unsigned __int8)((unsigned __int16)v105 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bd6cb*/
              BYTE2(v202[0]) = (unsigned __int8)((unsigned __int16)v105 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bd6d1*/
              v186 = (unsigned __int8)v209; /*0x4bd6ea*/
              v109 = LOBYTE(v202[0]); /*0x4bd6f7*/
              v182 = BYTE1(v209); /*0x4bd6fd*/
              v110 = BYTE1(v202[0]); /*0x4bd705*/
              v111 = BYTE2(v202[0]); /*0x4bd70b*/
              v112 = BYTE2(v209); /*0x4bd711*/
              v166 = LOBYTE(v202[0]); /*0x4bd71e*/
              if ( LOBYTE(a9) ) /*0x4bd726*/
              {
                v166 = (v158 * (v219 * v106 + LOBYTE(v202[0]) * v107)) >> 15; /*0x4bd74a*/
                v186 = (v158 * (v219 * v191 + (unsigned __int8)v209 * v108)) >> 15; /*0x4bd767*/
                v109 = v166; /*0x4bd76b*/
              }
              if ( a10 ) /*0x4bd777*/
              {
                v110 = (v158 * (v207 * v106 + BYTE1(v202[0]) * v107)) >> 15; /*0x4bd7a3*/
                v182 = (v158 * (v207 * v191 + BYTE1(v209) * v108)) >> 15; /*0x4bd7b3*/
                v109 = v166; /*0x4bd7b7*/
              }
              if ( a11 ) /*0x4bd7c3*/
              {
                v111 = (v158 * (v208 * v106 + BYTE2(v202[0]) * v107)) >> 15; /*0x4bd7ed*/
                v112 = (v158 * (v208 * v191 + BYTE2(v209) * v108)) >> 15; /*0x4bd7ef*/
              }
              v113 = 255; /*0x4bd7f7*/
              if ( v111 <= 255 ) /*0x4bd7fc*/
                v113 = v111; /*0x4bd7fe*/
              if ( v110 > 255 ) /*0x4bd806*/
                v110 = 255; /*0x4bd808*/
              if ( v109 > 255 ) /*0x4bd813*/
                v109 = 255; /*0x4bd815*/
              *(_WORD *)(v178 + 2 * v176) = (v113 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bd85b*/
                                          | (v110 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                          | (v109 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              if ( v112 > 255 ) /*0x4bd85f*/
                v112 = 255; /*0x4bd861*/
              v114 = v182; /*0x4bd866*/
              if ( v182 > 255 ) /*0x4bd870*/
                v114 = 255; /*0x4bd872*/
              v115 = v186; /*0x4bd877*/
              if ( v186 > 255 ) /*0x4bd881*/
                v115 = 255; /*0x4bd883*/
              *(_WORD *)(v154 + v178) = (v112 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bd8c0*/
                                      | (v114 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                      | (v115 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              if ( a8 ) /*0x4bd8cd*/
                *v160 = v171; /*0x4bd8d8*/
              v102 = MEMORY[0x887644]; /*0x4bd8db*/
              v103 = MEMORY[0x87E8A4]; /*0x4bd8e1*/
            }
            v116 = v162 - v220; /*0x4bd8f6*/
            v162 -= v220; /*0x4bd8fc*/
            v117 = v199 - v204; /*0x4bd900*/
            v199 -= v204; /*0x4bd907*/
            if ( v199 <= 256 ) /*0x4bd90b*/
            {
              v121 = v172; /*0x4bd9a3*/
              v120 = v160; /*0x4bd9a7*/
            }
            else
            {
              v162 = v116 + 256; /*0x4bd921*/
              v178 += v213; /*0x4bd933*/
              v199 = v117 - 256; /*0x4bd93e*/
              v118 = &v160[v212]; /*0x4bd949*/
              v119 = &v172[v212]; /*0x4bd94b*/
              if ( v212 <= 0 ) /*0x4bd94f*/
              {
                v120 = &v160[v212]; /*0x4bd960*/
                if ( (unsigned int)v118 < v102[6] ) /*0x4bd964*/
                  v120 = (_WORD *)((char *)v118 + v102[8]); /*0x4bd969*/
              }
              else
              {
                if ( (unsigned int)v118 >= v102[7] ) /*0x4bd954*/
                  v118 = (_WORD *)((char *)v118 - v102[8]); /*0x4bd956*/
                v120 = v118; /*0x4bd959*/
              }
              if ( v212 <= 0 ) /*0x4bd96d*/
              {
                v122 = &v172[v212]; /*0x4bd98c*/
                if ( (unsigned int)v119 < v103[6] ) /*0x4bd990*/
                  v122 = (_WORD *)((char *)v119 + v103[8]); /*0x4bd995*/
                v121 = v122; /*0x4bd99b*/
                v171 += v203; /*0x4bd99d*/
              }
              else
              {
                if ( (unsigned int)v119 >= v103[7] ) /*0x4bd972*/
                  v119 = (_WORD *)((char *)v119 - v103[8]); /*0x4bd974*/
                v121 = v119; /*0x4bd97b*/
                v171 += v203; /*0x4bd983*/
              }
            }
            v123 = v196; /*0x4bd9ab*/
            if ( v196 > 0 ) /*0x4bd9b1*/
            {
              v171 += v214; /*0x4bd9c6*/
              v123 = v196 - 2 * v168; /*0x4bd9ca*/
            }
            v196 = v188 + v123; /*0x4bd9d0*/
            v124 = v120 + 1; /*0x4bd9d4*/
            if ( (unsigned int)(v120 + 1) >= v102[7] ) /*0x4bd9da*/
              v124 = (_WORD *)((char *)v124 - v102[8]); /*0x4bd9dc*/
            v160 = v124; /*0x4bd9e2*/
            v125 = v121 + 1; /*0x4bd9e6*/
            if ( (unsigned int)(v121 + 1) >= v103[7] ) /*0x4bd9eb*/
              v125 = (_WORD *)((char *)v125 - v103[8]); /*0x4bd9ed*/
            v172 = v125; /*0x4bd9f8*/
            v126 = ++v176 < v168; /*0x4bda04*/
            v154 += 2; /*0x4bda0a*/
          }
          while ( v126 ); /*0x4bda0e*/
        }
      }
    }
    else
    {
      v161 = 256; /*0x4bcc0f*/
      if ( v44 <= v49 ) /*0x4bcc17*/
      {
        v190 = Math::RoundToInt((double)v168 / (double)v49 * 256.0); /*0x4bd0de*/
        if ( v49 > 0 ) /*0x4bd0e2*/
        {
          v77 = MEMORY[0x887644]; /*0x4bd0f3*/
          v78 = MEMORY[0x87E8A4]; /*0x4bd0f9*/
          v198 = v203 + v214; /*0x4bd103*/
          v157 = 0; /*0x4bd10d*/
          v203 = 0; /*0x4bd115*/
          v175 = v49; /*0x4bd119*/
          do /*0x4bd535*/
          {
            v169 = (unsigned __int16)*v172; /*0x4bd12b*/
            if ( (unsigned __int16)v171 < *v160 && *v172 ) /*0x4bd128*/
            {
              v79 = Math::RoundToInt((double)v161 * a12); /*0x4bd15c*/
              v80 = Math::RoundToInt((double)v203 * a12); /*0x4bd165*/
              v81 = MEMORY[0x8A0980][v79]; /*0x4bd178*/
              v82 = *((_DWORD *)&MEMORY[0x8A0D80] - v79); /*0x4bd17e*/
              v80 *= 4; /*0x4bd185*/
              v83 = *(_DWORD *)((char *)&MEMORY[0x8A0D80] - v80); /*0x4bd198*/
              v153 = *(int *)((char *)MEMORY[0x8A0980] + v80); /*0x4bd19e*/
              LOWORD(v80) = *(_WORD *)(v157 + v178); /*0x4bd1a9*/
              LOBYTE(v202[0]) = (unsigned __int8)((unsigned __int16)v80 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bd1c1*/
              BYTE1(v202[0]) = (unsigned __int8)((unsigned __int16)v80 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bd1d2*/
              BYTE2(v202[0]) = (unsigned __int8)((unsigned __int16)v80 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bd1ee*/
              LOWORD(v80) = *(_WORD *)(v157 + v178 + 2); /*0x4bd1f2*/
              LOBYTE(v204) = (unsigned __int8)((unsigned __int16)v80 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bd212*/
              v84 = LOBYTE(v202[0]); /*0x4bd233*/
              BYTE1(v204) = (unsigned __int8)((unsigned __int16)v80 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bd239*/
              v85 = BYTE1(v202[0]); /*0x4bd241*/
              v165 = LOBYTE(v202[0]); /*0x4bd247*/
              v86 = BYTE2(v202[0]); /*0x4bd255*/
              BYTE2(v204) = (unsigned __int8)((unsigned __int16)v80 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bd25b*/
              v185 = (unsigned __int8)v204; /*0x4bd268*/
              v181 = BYTE1(v204); /*0x4bd275*/
              v87 = BYTE2(v204); /*0x4bd27d*/
              if ( LOBYTE(a9) ) /*0x4bd28a*/
              {
                v165 = (v169 * (v219 * v81 + LOBYTE(v202[0]) * v82)) >> 15; /*0x4bd2ae*/
                v85 = BYTE1(v202[0]); /*0x4bd2c4*/
                v185 = (v169 * (v219 * v153 + (unsigned __int8)v204 * v83)) >> 15; /*0x4bd2cb*/
                v84 = v165; /*0x4bd2cf*/
              }
              if ( a10 ) /*0x4bd2db*/
              {
                v85 = (v169 * (v207 * v81 + v85 * v82)) >> 15; /*0x4bd310*/
                v181 = (v169 * (v207 * v153 + BYTE1(v204) * v83)) >> 15; /*0x4bd317*/
                v84 = v165; /*0x4bd31b*/
              }
              if ( a11 ) /*0x4bd327*/
              {
                v86 = (v169 * (v208 * v81 + BYTE2(v202[0]) * v82)) >> 15; /*0x4bd351*/
                v87 = (v169 * (v208 * v153 + BYTE2(v204) * v83)) >> 15; /*0x4bd353*/
              }
              v88 = 255; /*0x4bd35b*/
              if ( v86 <= 255 ) /*0x4bd360*/
                v88 = v86; /*0x4bd362*/
              if ( v85 > 255 ) /*0x4bd36a*/
                v85 = 255; /*0x4bd36c*/
              if ( v84 > 255 ) /*0x4bd377*/
                v84 = 255; /*0x4bd379*/
              *(_WORD *)(v178 + v157) = (v88 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bd3bf*/
                                      | (v85 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                      | (v84 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              if ( v87 > 255 ) /*0x4bd3c3*/
                v87 = 255; /*0x4bd3c5*/
              v89 = v181; /*0x4bd3ca*/
              if ( v181 > 255 ) /*0x4bd3d4*/
                v89 = 255; /*0x4bd3d6*/
              v90 = v185; /*0x4bd3db*/
              if ( v185 > 255 ) /*0x4bd3e5*/
                v90 = 255; /*0x4bd3e7*/
              *(_WORD *)(v178 + v157 + 2) = (v87 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bd429*/
                                          | (v89 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                          | (v90 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              if ( a8 ) /*0x4bd42e*/
                *v160 = v171; /*0x4bd439*/
              v77 = MEMORY[0x887644]; /*0x4bd43c*/
              v78 = MEMORY[0x87E8A4]; /*0x4bd442*/
            }
            v91 = v161 - v190; /*0x4bd454*/
            v161 -= v190; /*0x4bd45a*/
            v92 = v203 + v190; /*0x4bd45e*/
            v203 += v190; /*0x4bd465*/
            if ( v203 <= 256 ) /*0x4bd469*/
            {
              v95 = v172; /*0x4bd4af*/
              v94 = v160; /*0x4bd4b3*/
            }
            else
            {
              v93 = v77[7]; /*0x4bd46f*/
              v203 = v92 - 256; /*0x4bd479*/
              v94 = v160 + 1; /*0x4bd481*/
              v161 = v91 + 256; /*0x4bd48f*/
              v157 += 2; /*0x4bd493*/
              if ( (unsigned int)(v160 + 1) >= v93 ) /*0x4bd497*/
                v94 = (_WORD *)((char *)v94 - v77[8]); /*0x4bd499*/
              v95 = v172 + 1; /*0x4bd4a3*/
              if ( (unsigned int)(v172 + 1) >= v78[7] ) /*0x4bd4a8*/
                v95 = (_WORD *)((char *)v95 - v78[8]); /*0x4bd4aa*/
            }
            v178 += v213; /*0x4bd4c4*/
            v96 = &v94[v212]; /*0x4bd4d2*/
            v97 = &v95[v212]; /*0x4bd4d4*/
            if ( v212 <= 0 ) /*0x4bd4d8*/
            {
              v98 = v96; /*0x4bd4eb*/
              if ( (unsigned int)v96 < v77[6] ) /*0x4bd4ef*/
                v98 = (_WORD *)((char *)v96 + v77[8]); /*0x4bd4f4*/
              v160 = v98; /*0x4bd4f6*/
            }
            else
            {
              if ( (unsigned int)v96 >= v77[7] ) /*0x4bd4dd*/
                v96 = (_WORD *)((char *)v96 - v77[8]); /*0x4bd4df*/
              v160 = v96; /*0x4bd4e2*/
            }
            if ( v212 <= 0 ) /*0x4bd4fc*/
            {
              v99 = v97; /*0x4bd50f*/
              if ( (unsigned int)v97 < v78[6] ) /*0x4bd513*/
                v99 = (_WORD *)((char *)v97 + v78[8]); /*0x4bd518*/
              v172 = v99; /*0x4bd51a*/
            }
            else
            {
              if ( (unsigned int)v97 >= v78[7] ) /*0x4bd501*/
                v97 = (_WORD *)((char *)v97 - v78[8]); /*0x4bd503*/
              v172 = v97; /*0x4bd506*/
            }
            v100 = v175 == 1; /*0x4bd52c*/
            LOWORD(v171) = v198 + v171; /*0x4bd52d*/
            --v175; /*0x4bd531*/
          }
          while ( !v100 ); /*0x4bd535*/
        }
      }
      else
      {
        v53 = Math::RoundToInt((double)v49 / (double)v168 * 256.0); /*0x4bcc2b*/
        v189 = v53; /*0x4bcc32*/
        v179 = 0; /*0x4bcc36*/
        if ( v44 > 0 ) /*0x4bcc3e*/
        {
          v54 = MEMORY[0x887644]; /*0x4bcc44*/
          v156 = 0; /*0x4bcc4a*/
          v195 = -v53; /*0x4bcc54*/
          v163 = 2 * v50; /*0x4bcc5c*/
          do /*0x4bd0a8*/
          {
            v55 = (unsigned __int16)*v172; /*0x4bcc6f*/
            if ( (unsigned __int16)v171 < *v160 && *v172 ) /*0x4bcc6d*/
            {
              v56 = Math::RoundToInt((double)v161 * a12); /*0x4bcc9b*/
              v57 = Math::RoundToInt((double)v156 * a12); /*0x4bcca4*/
              v58 = MEMORY[0x8A0980][v56]; /*0x4bccb7*/
              v57 *= 4; /*0x4bccc3*/
              v152 = *((_DWORD *)&MEMORY[0x8A0D80] - v56); /*0x4bccc6*/
              v197 = *(int *)((char *)MEMORY[0x8A0980] + v57); /*0x4bccd0*/
              v174 = *(_DWORD *)((char *)&MEMORY[0x8A0D80] - v57); /*0x4bcce1*/
              LOWORD(v57) = *(_WORD *)(v178 + 2 * v179); /*0x4bcce9*/
              LOBYTE(v204) = (unsigned __int8)((unsigned __int16)v57 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bcd08*/
              BYTE1(v204) = (unsigned __int8)((unsigned __int16)v57 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bcd29*/
              BYTE2(v204) = (unsigned __int8)((unsigned __int16)v57 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bcd33*/
              LOWORD(v57) = *(_WORD *)(v163 + v178); /*0x4bcd3b*/
              LOBYTE(v202[0]) = (unsigned __int8)((unsigned __int16)v57 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bcd5a*/
              BYTE1(v202[0]) = (unsigned __int8)((unsigned __int16)v57 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bcd7b*/
              v59 = BYTE1(v204); /*0x4bcd83*/
              v180 = BYTE1(v204); /*0x4bcd8b*/
              BYTE2(v202[0]) = (unsigned __int8)((unsigned __int16)v57 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bcd8f*/
              v184 = (unsigned __int8)v204; /*0x4bcda8*/
              v60 = LOBYTE(v202[0]); /*0x4bcdb0*/
              v61 = BYTE1(v202[0]); /*0x4bcdb6*/
              v62 = BYTE2(v202[0]); /*0x4bcdbc*/
              v63 = BYTE2(v204); /*0x4bcdc2*/
              if ( LOBYTE(a9) ) /*0x4bcdcf*/
              {
                v60 = (v55 * (v219 * v58 + v152 * LOBYTE(v202[0]))) >> 15; /*0x4bce04*/
                v184 = (v55 * (v219 * v197 + v174 * (unsigned __int8)v204)) >> 15; /*0x4bce0a*/
                v59 = BYTE1(v204); /*0x4bce0e*/
              }
              if ( a10 ) /*0x4bce1a*/
              {
                v61 = (v55 * (v207 * v58 + v152 * BYTE1(v202[0]))) >> 15; /*0x4bce4c*/
                v59 = (v55 * (v207 * v197 + v174 * BYTE1(v204))) >> 15; /*0x4bce4f*/
                v180 = v59; /*0x4bce52*/
              }
              if ( a11 ) /*0x4bce5e*/
              {
                v59 = v180; /*0x4bce81*/
                v62 = (v55 * (v208 * v58 + v152 * BYTE2(v202[0]))) >> 15; /*0x4bce88*/
                v63 = (v55 * (v208 * v197 + v174 * BYTE2(v204))) >> 15; /*0x4bce8e*/
              }
              v64 = 255; /*0x4bce96*/
              if ( v62 <= 255 ) /*0x4bce9b*/
                v64 = v62; /*0x4bce9d*/
              if ( v61 > 255 ) /*0x4bcea5*/
                v61 = 255; /*0x4bcea7*/
              if ( v60 > 255 ) /*0x4bceb2*/
                v60 = 255; /*0x4bceb4*/
              *(_WORD *)(v178 + 2 * v179) = (v64 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bcefa*/
                                          | (v61 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                          | (v60 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              if ( v63 > 255 ) /*0x4bcefe*/
                v63 = 255; /*0x4bcf00*/
              if ( v59 > 255 ) /*0x4bcf0b*/
                v59 = 255; /*0x4bcf0d*/
              v65 = v184; /*0x4bcf12*/
              if ( v184 > 255 ) /*0x4bcf1c*/
                v65 = 255; /*0x4bcf1e*/
              *(_WORD *)(v163 + v178) = (v63 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bcf5b*/
                                      | (v59 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                      | (v65 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              if ( a8 ) /*0x4bcf68*/
                *v160 = v171; /*0x4bcf73*/
              v54 = MEMORY[0x887644]; /*0x4bcf76*/
            }
            v66 = v161 - v189; /*0x4bcf88*/
            v161 -= v189; /*0x4bcf8e*/
            v67 = v156 - v195; /*0x4bcf92*/
            v156 -= v195; /*0x4bcf99*/
            if ( v156 <= 256 ) /*0x4bcf9d*/
            {
              v73 = v171; /*0x4bd043*/
              v72 = v172; /*0x4bd047*/
              v70 = v160; /*0x4bd04b*/
              v71 = MEMORY[0x87E8A4]; /*0x4bd04f*/
            }
            else
            {
              v156 = v67 - 256; /*0x4bcfaf*/
              v161 = v66 + 256; /*0x4bcfc8*/
              v178 += v213; /*0x4bcfd0*/
              v68 = &v160[v212]; /*0x4bcfdb*/
              v69 = &v172[v212]; /*0x4bcfdd*/
              if ( v212 <= 0 ) /*0x4bcfe1*/
              {
                v70 = &v160[v212]; /*0x4bcff2*/
                if ( (unsigned int)v68 < v54[6] ) /*0x4bcff6*/
                  v70 = (_WORD *)((char *)v68 + v54[8]); /*0x4bcffb*/
              }
              else
              {
                if ( (unsigned int)v68 >= v54[7] ) /*0x4bcfe6*/
                  v68 = (_WORD *)((char *)v68 - v54[8]); /*0x4bcfe8*/
                v70 = v68; /*0x4bcfeb*/
              }
              if ( v212 <= 0 ) /*0x4bcfff*/
              {
                v74 = &v172[v212]; /*0x4bd023*/
                if ( (unsigned int)v69 < *((_DWORD *)MEMORY[0x87E8A4] + 6) ) /*0x4bd028*/
                  v74 = (_WORD *)((char *)v69 + *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4bd02d*/
                v71 = MEMORY[0x87E8A4]; /*0x4bd033*/
                v72 = v74; /*0x4bd039*/
                v73 = v203 + v171; /*0x4bd03f*/
              }
              else
              {
                v71 = MEMORY[0x87E8A4]; /*0x4bd001*/
                if ( (unsigned int)v69 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x4bd00a*/
                  v69 = (_WORD *)((char *)v69 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4bd00c*/
                v72 = v69; /*0x4bd017*/
                v73 = v203 + v171; /*0x4bd019*/
              }
            }
            v164 = v163 + 2; /*0x4bd061*/
            v75 = v70 + 1; /*0x4bd065*/
            if ( (unsigned int)(v70 + 1) >= v54[7] ) /*0x4bd06b*/
              v75 = (_WORD *)((char *)v75 - v54[8]); /*0x4bd06d*/
            v160 = v75; /*0x4bd073*/
            v76 = v72 + 1; /*0x4bd077*/
            if ( (unsigned int)(v72 + 1) >= v71[7] ) /*0x4bd07c*/
              v76 = (_WORD *)((char *)v76 - v71[8]); /*0x4bd07e*/
            v172 = v76; /*0x4bd08c*/
            v171 = v214 + v73; /*0x4bd09c*/
            v179 += 2; /*0x4bd0a0*/
            v163 = v164 + 2; /*0x4bd0a4*/
          }
          while ( v179 < v168 ); /*0x4bd0a8*/
        }
      }
    }
    (*(void (__thiscall **)(void *))(*(_DWORD *)v211 + 96))(v211); /*0x4bda1d*/
    return 1; /*0x4bda23*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)v211 + 96))(v211); /*0x4bcbeb*/
    return 0; /*0x4bcbf1*/
  }
}


// ==== 0x004BDF00  DSurface::DrawLineZBufColored  this=DSurface  sig=csp ====
char __thiscall DSurface_DrawLineZBufColored(
        void *this,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned __int8 *a5,
        float a6,
        int a7,
        int a8)
{
  int v9; // ebp
  int v10; // eax
  int v11; // eax
  int *v12; // eax
  int v13; // esi
  int v14; // edi
  int v15; // ecx
  int v16; // ecx
  int v17; // ebp
  unsigned __int64 v18; // rax
  int v19; // ebx
  unsigned int v20; // esi
  int v21; // edi
  int v22; // esi
  unsigned int v23; // ebx
  double v24; // st7
  double v25; // st7
  int v26; // eax
  unsigned int v27; // eax
  double v28; // st7
  int v29; // eax
  double v30; // st7
  int v31; // eax
  unsigned int v32; // eax
  int v33; // ebx
  int v34; // edi
  _WORD *v35; // esi
  int v36; // edi
  _WORD *v37; // ebp
  int v38; // edi
  int v39; // ebx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // edi
  int v44; // ecx
  _DWORD *v45; // ebx
  int v46; // edx
  __int16 v47; // ax
  _WORD *v48; // eax
  _WORD *v49; // eax
  bool v50; // zf
  int v52; // edi
  _DWORD *v53; // ebx
  int v54; // edx
  _WORD *v55; // eax
  _WORD *v56; // eax
  int v57; // eax
  int v58; // edi
  int v59; // ebx
  _DWORD *v60; // ecx
  int v61; // edx
  _WORD *v62; // eax
  _WORD *v63; // eax
  int v64; // [esp+1Ch] [ebp-6Ch]
  int v65; // [esp+20h] [ebp-68h]
  int v66; // [esp+24h] [ebp-64h]
  int v67; // [esp+24h] [ebp-64h]
  int v68; // [esp+24h] [ebp-64h]
  int v69; // [esp+28h] [ebp-60h]
  int v70; // [esp+2Ch] [ebp-5Ch]
  int v71; // [esp+30h] [ebp-58h]
  int v72; // [esp+30h] [ebp-58h]
  int v73; // [esp+30h] [ebp-58h]
  int v74; // [esp+34h] [ebp-54h]
  int v75; // [esp+38h] [ebp-50h]
  int v76; // [esp+3Ch] [ebp-4Ch]
  unsigned __int64 v78; // [esp+44h] [ebp-44h]
  int v79; // [esp+44h] [ebp-44h]
  int v80; // [esp+44h] [ebp-44h]
  double v81; // [esp+48h] [ebp-40h]
  int v82; // [esp+48h] [ebp-40h]
  int v83; // [esp+48h] [ebp-40h]
  int v84; // [esp+48h] [ebp-40h]
  int v85; // [esp+4Ch] [ebp-3Ch]
  _DWORD v86[5]; // [esp+54h] [ebp-34h] BYREF
  unsigned __int64 v87; // [esp+68h] [ebp-20h]
  unsigned __int64 v88; // [esp+70h] [ebp-18h]
  int v89; // [esp+78h] [ebp-10h] BYREF
  int v90; // [esp+7Ch] [ebp-Ch]
  int v91; // [esp+80h] [ebp-8h]
  int v92; // [esp+84h] [ebp-4h]
  int v93; // [esp+8Ch] [ebp+4h]
  int v94; // [esp+90h] [ebp+8h]
  int v95; // [esp+94h] [ebp+Ch]
  int v96; // [esp+98h] [ebp+10h]
  int v97; // [esp+9Ch] [ebp+14h]
  int v98; // [esp+A0h] [ebp+18h]
  int v99; // [esp+A4h] [ebp+1Ch]

  v76 = Math::RoundToInt((double)*a5 * a6); /*0x4bdf39*/
  v9 = Math::RoundToInt((double)a5[1] * a6); /*0x4bdf59*/
  v75 = v9; /*0x4bdf5e*/
  v10 = Math::RoundToInt((double)a5[2] * a6); /*0x4bdf77*/
  v74 = v10; /*0x4bdf7f*/
  if ( v76 < 8 && v9 < 8 && v10 < 8 ) /*0x4bdf8d*/
    return 0; /*0x4bdf8d*/
  v11 = (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 120))(this, &v86[1]); /*0x4bdf9c*/
  v12 = (int *)ClipRectIntersection(v11, 0, 0); /*0x4bdfaf*/
  v13 = *v12; /*0x4bdfb6*/
  v89 = *v12; /*0x4bdfb8*/
  v14 = v12[1]; /*0x4bdfbc*/
  v90 = v14; /*0x4bdfbf*/
  v91 = v12[2]; /*0x4bdfc6*/
  v15 = v12[3]; /*0x4bdfca*/
  v92 = v15; /*0x4bdfcf*/
  if ( !v91 && !v15 ) /*0x4bdfd7*/
    return 0; /*0x4bdfd7*/
  LODWORD(v18) = v13 + *a3; /*0x4bdff3*/
  v16 = v13 + *a4; /*0x4bdff5*/
  v17 = a7; /*0x4bdffa*/
  HIDWORD(v18) = v14 + a3[1]; /*0x4be001*/
  v19 = v18; /*0x4be003*/
  v20 = v14 + a4[1]; /*0x4be005*/
  v21 = a8; /*0x4be007*/
  v87 = v18; /*0x4be010*/
  v88 = __PAIR64__(v20, v16); /*0x4be018*/
  if ( (int)v18 > v16 ) /*0x4be020*/
  {
    v19 = v16; /*0x4be022*/
    v17 = a8; /*0x4be024*/
    v21 = a7; /*0x4be026*/
    v87 = __PAIR64__(v20, v16); /*0x4be02d*/
    v88 = v18; /*0x4be035*/
  }
  v22 = v19; /*0x4be04e*/
  v23 = HIDWORD(v87); /*0x4be050*/
  *(_QWORD *)&v86[1] = v88; /*0x4be05c*/
  if ( !(unsigned __int8)ClipLine(&v89) ) /*0x4be060*/
    return 0; /*0x4be060*/
  v98 = v21; /*0x4be07b*/
  v97 = v17; /*0x4be082*/
  if ( v88 != *(_QWORD *)&v86[1] ) /*0x4be089*/
  {
    v24 = Math::Sqrt( /*0x4be0c1*/
            (double)(int)(v23 - HIDWORD(v88)) * (double)(int)(v23 - HIDWORD(v88))
          + (double)(v22 - (int)v88) * (double)(v22 - (int)v88));
    v81 = (double)(int)Math::RoundToInt(v24); /*0x4be0f9*/
    v25 = Math::Sqrt((double)(int)(v23 - v86[2]) * (double)(int)(v23 - v86[2]) + (double)(v22 - v86[1]) /*0x4be10e*/
                                                                               * (double)(v22 - v86[1]));
    v26 = Math::RoundToInt(v25); /*0x4be116*/
    v27 = abs32(Math::RoundToInt(v81 / (double)v26 * (double)(v17 - v21))); /*0x4be149*/
    if ( v17 >= v21 ) /*0x4be14d*/
      v98 = v17 - v27; /*0x4be15e*/
    else
      v98 = v17 + v27; /*0x4be151*/
  }
  if ( v87 != __PAIR64__(v23, v22) ) /*0x4be16f*/
  {
    v28 = Math::Sqrt( /*0x4be1a9*/
            (double)(HIDWORD(v87) - v86[2]) * (double)(HIDWORD(v87) - v86[2])
          + (double)((int)v87 - v86[1]) * (double)((int)v87 - v86[1]));
    v29 = Math::RoundToInt(v28); /*0x4be1ae*/
    v82 = v22 - v86[1]; /*0x4be1c0*/
    v85 = v23 - v86[2]; /*0x4be1ce*/
    *(double *)&v86[1] = (double)v29; /*0x4be1dd*/
    v30 = Math::Sqrt((double)v85 * (double)v85 + (double)v82 * (double)v82); /*0x4be1f2*/
    v31 = Math::RoundToInt(v30); /*0x4be1fa*/
    v32 = abs32(Math::RoundToInt(*(double *)&v86[1] / (double)v31 * (double)(v17 - v21))); /*0x4be22d*/
    if ( v21 <= v17 ) /*0x4be231*/
      v97 = v21 + v32; /*0x4be240*/
    else
      v97 = v21 - v32; /*0x4be235*/
  }
  (*(void (__thiscall **)(void *))(this->DSurface_field_0x1C)(this); /*0x4be24f*/
  v33 = (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this + 92))(this, v87, HIDWORD(v87)); /*0x4be269*/
  v96 = v33; /*0x4be26d*/
  if ( !MEMORY[0x887644] ) /*0x4be274*/
    return 0; /*0x4be274*/
  v34 = *((_DWORD *)MEMORY[0x887644] + 1); /*0x4be27e*/
  v86[2] = HIDWORD(v87); /*0x4be285*/
  v35 = (_WORD *)Audio::GetSamplePosition(v87, HIDWORD(v87) - v34); /*0x4be29c*/
  v36 = *((_DWORD *)MEMORY[0x87E8A4] + 1); /*0x4be2a2*/
  v86[2] = HIDWORD(v87); /*0x4be2a5*/
  v37 = (_WORD *)StreamClass::ReadAndSeek(v87, HIDWORD(v87) - v36); /*0x4be2b6*/
  v70 = -1; /*0x4be2c1*/
  LOWORD(v36) = *((_WORD *)MEMORY[0x887644] + 2) + *((_WORD *)MEMORY[0x887644] + 18); /*0x4be2cd*/
  v93 = *((_DWORD *)MEMORY[0x887644] + 10); /*0x4be2d4*/
  v99 = v97 + v36 - HIDWORD(v87) - v90; /*0x4be2ea*/
  if ( !v33 ) /*0x4be2f1*/
    return 0; /*0x4be9b9*/
  v71 = v88 - v87; /*0x4be305*/
  v38 = HIDWORD(v88) - HIDWORD(v87); /*0x4be310*/
  v39 = v98 - v97; /*0x4be31a*/
  v40 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4be31c*/
  v65 = v40; /*0x4be321*/
  if ( v38 < 0 ) /*0x4be325*/
  {
    v70 = 1; /*0x4be32e*/
    v65 = -v40; /*0x4be33a*/
    v93 = -v93; /*0x4be33e*/
  }
  v69 = 1; /*0x4be347*/
  v41 = abs32(v38); /*0x4be354*/
  if ( v39 < 0 ) /*0x4be358*/
    v69 = -1; /*0x4be35a*/
  v42 = abs32(v39); /*0x4be377*/
  v95 = 2 * v71; /*0x4be38a*/
  v94 = 2 * v41; /*0x4be394*/
  v64 = 2 * v42; /*0x4be39e*/
  if ( v42 <= v71 || v42 <= v41 ) /*0x4be3aa*/
  {
    if ( v71 <= v41 ) /*0x4be5aa*/
    {
      v58 = v95 - v41; /*0x4be7b5*/
      v59 = v64 - v41; /*0x4be7b7*/
      v84 = v95 - v41; /*0x4be7bb*/
      v80 = v64 - v41; /*0x4be7bf*/
      if ( v41 > 0 ) /*0x4be7c3*/
      {
        v86[1] = v41; /*0x4be7d0*/
        v60 = MEMORY[0x887644]; /*0x4be7d4*/
        v68 = 0; /*0x4be7da*/
        v73 = 2 * v93; /*0x4be7e5*/
        do /*0x4be99b*/
        {
          HIWORD(v61) = 0; /*0x4be7f1*/
          if ( (unsigned __int16)v99 < *v35 ) /*0x4be7fa*/
          {
            v58 = v84; /*0x4be89e*/
            LOWORD(v61) = *v37; /*0x4be7f6*/
            *(_WORD *)(v68 + v96) = BlendColorPack((v75 * v61) >> 7, (v74 * v61) >> 7); /*0x4be8a2*/
            v60 = MEMORY[0x887644]; /*0x4be8a6*/
            v59 = v80; /*0x4be8ac*/
          }
          if ( v58 > 0 ) /*0x4be8b2*/
          {
            ++v35; /*0x4be8bb*/
            v68 += 2; /*0x4be8c3*/
            if ( (unsigned int)v35 >= v60[7] ) /*0x4be8c7*/
              v35 = (_WORD *)((char *)v35 - v60[8]); /*0x4be8c9*/
            v58 -= v94; /*0x4be8cc*/
          }
          if ( v59 > 0 ) /*0x4be8d5*/
          {
            v99 += v69; /*0x4be8eb*/
            v59 -= v94; /*0x4be8f2*/
          }
          v58 += v95; /*0x4be8ff*/
          v59 += v64; /*0x4be908*/
          v96 += v65; /*0x4be914*/
          v35 = (_WORD *)((char *)v35 + v73); /*0x4be922*/
          v84 = v58; /*0x4be924*/
          v80 = v59; /*0x4be92a*/
          if ( v93 <= 0 ) /*0x4be92e*/
          {
            v62 = v35; /*0x4be93d*/
            if ( (unsigned int)v35 < v60[6] ) /*0x4be941*/
              v62 = (_WORD *)((char *)v35 + v60[8]); /*0x4be946*/
            v35 = v62; /*0x4be948*/
          }
          else if ( (unsigned int)v35 >= v60[7] ) /*0x4be933*/
          {
            v35 = (_WORD *)((char *)v35 - v60[8]); /*0x4be935*/
          }
          v37 = (_WORD *)((char *)v37 + v73); /*0x4be955*/
          if ( v93 <= 0 ) /*0x4be959*/
          {
            v63 = v37; /*0x4be970*/
            if ( (unsigned int)v37 < *((_DWORD *)MEMORY[0x87E8A4] + 6) ) /*0x4be975*/
              v63 = (_WORD *)((char *)v37 + *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4be97a*/
            v37 = v63; /*0x4be97c*/
          }
          else if ( (unsigned int)v37 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x4be963*/
          {
            v37 = (_WORD *)((char *)v37 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4be965*/
          }
          v50 = v86[1] == 1; /*0x4be98f*/
          v99 += v70; /*0x4be990*/
          --v86[1]; /*0x4be997*/
        }
        while ( !v50 ); /*0x4be99b*/
      }
    }
    else
    {
      v52 = v94 - v71; /*0x4be5bf*/
      v83 = v94 - v71; /*0x4be5c3*/
      v79 = v64 - v71; /*0x4be5c9*/
      v67 = 0; /*0x4be5cd*/
      if ( v71 > 0 ) /*0x4be5d5*/
      {
        v53 = MEMORY[0x887644]; /*0x4be5db*/
        do /*0x4be78f*/
        {
          HIWORD(v54) = 0; /*0x4be5e9*/
          if ( (unsigned __int16)v99 < *v35 ) /*0x4be5f2*/
          {
            v52 = v83; /*0x4be696*/
            LOWORD(v54) = *v37; /*0x4be5ee*/
            *(_WORD *)(v96 + 2 * v67) = BlendColorPack((v75 * v54) >> 7, (v74 * v54) >> 7); /*0x4be69a*/
            v53 = MEMORY[0x887644]; /*0x4be69e*/
          }
          if ( v52 > 0 ) /*0x4be6a6*/
          {
            v52 -= v95; /*0x4be6c0*/
            v96 += v65; /*0x4be6c9*/
            v35 += v93; /*0x4be6d3*/
            if ( v93 <= 0 ) /*0x4be6d7*/
            {
              v55 = v35; /*0x4be6e6*/
              if ( (unsigned int)v35 < v53[6] ) /*0x4be6ea*/
                v55 = (_WORD *)((char *)v35 + v53[8]); /*0x4be6ef*/
              v35 = v55; /*0x4be6f1*/
            }
            else if ( (unsigned int)v35 >= v53[7] ) /*0x4be6dc*/
            {
              v35 = (_WORD *)((char *)v35 - v53[8]); /*0x4be6de*/
            }
            v37 += v93; /*0x4be6fa*/
            if ( v93 <= 0 ) /*0x4be6fe*/
            {
              v56 = v37; /*0x4be715*/
              if ( (unsigned int)v37 < *((_DWORD *)MEMORY[0x87E8A4] + 6) ) /*0x4be71a*/
                v56 = (_WORD *)((char *)v37 + *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4be71f*/
              v37 = v56; /*0x4be721*/
            }
            else if ( (unsigned int)v37 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x4be708*/
            {
              v37 = (_WORD *)((char *)v37 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4be70a*/
            }
            v99 += v70; /*0x4be730*/
          }
          v57 = v79; /*0x4be737*/
          if ( v79 > 0 ) /*0x4be73d*/
          {
            v99 += v69; /*0x4be74c*/
            v57 = v79 - v95; /*0x4be75a*/
          }
          ++v35; /*0x4be769*/
          v79 = v64 + v57; /*0x4be76c*/
          v52 += v94; /*0x4be773*/
          v83 = v52; /*0x4be777*/
          if ( (unsigned int)v35 >= v53[7] ) /*0x4be77b*/
            v35 = (_WORD *)((char *)v35 - v53[8]); /*0x4be77d*/
          ++v67; /*0x4be78b*/
        }
        while ( v67 < v71 ); /*0x4be78f*/
      }
    }
  }
  else
  {
    v43 = v94 - v42; /*0x4be3be*/
    v44 = v95 - v42; /*0x4be3c0*/
    LODWORD(v78) = v94 - v42; /*0x4be3c4*/
    v72 = v95 - v42; /*0x4be3c8*/
    if ( v42 > 0 ) /*0x4be3cc*/
    {
      v45 = MEMORY[0x887644]; /*0x4be3d2*/
      v66 = 0; /*0x4be3d8*/
      HIDWORD(v78) = v42; /*0x4be3e0*/
      do /*0x4be58d*/
      {
        HIWORD(v46) = 0; /*0x4be3ec*/
        if ( (unsigned __int16)v99 < *v35 ) /*0x4be3f5*/
        {
          LOWORD(v46) = *v37; /*0x4be3f1*/
          v47 = BlendColorPack((v75 * v46) >> 7, (v74 * v46) >> 7); /*0x4be490*/
          v43 = v78; /*0x4be499*/
          v44 = v72; /*0x4be49d*/
          *(_WORD *)(v66 + v96) = v47; /*0x4be4a1*/
          v45 = MEMORY[0x887644]; /*0x4be4a5*/
        }
        if ( v43 > 0 ) /*0x4be4ad*/
        {
          v96 += v65; /*0x4be4c4*/
          v43 -= v64; /*0x4be4d2*/
          v35 += v93; /*0x4be4d7*/
          if ( v93 <= 0 ) /*0x4be4db*/
          {
            v48 = v35; /*0x4be4ea*/
            if ( (unsigned int)v35 < v45[6] ) /*0x4be4ec*/
              v48 = (_WORD *)((char *)v35 + v45[8]); /*0x4be4f1*/
            v35 = v48; /*0x4be4f3*/
          }
          else if ( (unsigned int)v35 >= v45[7] ) /*0x4be4e0*/
          {
            v35 = (_WORD *)((char *)v35 - v45[8]); /*0x4be4e2*/
          }
          v37 += v93; /*0x4be4f5*/
          if ( v93 <= 0 ) /*0x4be4f9*/
          {
            v49 = v37; /*0x4be510*/
            if ( (unsigned int)v37 < *((_DWORD *)MEMORY[0x87E8A4] + 6) ) /*0x4be515*/
              v49 = (_WORD *)((char *)v37 + *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4be51a*/
            v37 = v49; /*0x4be51c*/
          }
          else if ( (unsigned int)v37 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x4be503*/
          {
            v37 = (_WORD *)((char *)v37 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4be505*/
          }
          v44 = v72; /*0x4be52b*/
          v99 += v70; /*0x4be52f*/
        }
        if ( v44 > 0 ) /*0x4be538*/
        {
          ++v35; /*0x4be541*/
          v66 += 2; /*0x4be549*/
          if ( (unsigned int)v35 >= v45[7] ) /*0x4be54d*/
            v35 = (_WORD *)((char *)v35 - v45[8]); /*0x4be54f*/
          v44 -= v64; /*0x4be552*/
        }
        v99 += v69; /*0x4be56a*/
        v44 += v95; /*0x4be578*/
        v43 += v94; /*0x4be57e*/
        v50 = HIDWORD(v78) == 1; /*0x4be580*/
        v72 = v44; /*0x4be581*/
        v78 = __PAIR64__(HIDWORD(v78), v43) - 0x100000000LL; /*0x4be589*/
      }
      while ( !v50 ); /*0x4be58d*/
    }
  }
  (*(void (__thiscall **)(void *))(this->DSurface_field_0x18)(this); /*0x4be599*/
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
  return (v4 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x4bea7f*/
       | (v5 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
       | (v6 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
}


// ==== 0x004BEAC0  AudioStream::DrawWaveform  this=AbstractClass  sig=csp ====
char __thiscall AudioStream::DrawWaveform(
        void *this,
        IUnknown *aP1,
        IUnknown *aP2,
        IUnknown *aP3,
        IUnknown *aP4,
        int a6,
        int a7,
        int a8)
{
  int *v8; // eax
  IUnknown **v9; // eax
  IUnknown *v10; // esi
  IUnknown *v11; // edi
  IUnknown *v12; // ecx
  MouseClass *v13; // eax
  MouseClass *v14; // ecx
  int v15; // esi
  int v16; // edx
  MouseClass *v17; // ebx
  int v18; // ebp
  int v19; // edi
  MouseClass *v20; // ebp
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned int v27; // eax
  int v28; // edi
  _WORD *SamplePosition; // edi
  void *v30; // ebx
  unsigned int v31; // eax
  _WORD *v32; // ebx
  int v33; // ebp
  int v34; // esi
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  TacticalClass *v38; // edx
  int v39; // ecx
  int v40; // esi
  unsigned __int16 v41; // ax
  _WORD *v42; // eax
  int v43; // eax
  _WORD *v44; // eax
  bool v45; // zf
  int v47; // eax
  TacticalClass *v48; // edx
  int v49; // esi
  unsigned __int16 v50; // ax
  _WORD *v51; // ecx
  _WORD *v52; // ecx
  int v53; // edx
  int v54; // esi
  unsigned __int16 v55; // ax
  unsigned int v56; // ecx
  unsigned int v57; // edi
  int v58; // esi
  _WORD *v59; // eax
  int v60; // [esp+10h] [ebp-6Ch]
  int v61; // [esp+10h] [ebp-6Ch]
  int v62; // [esp+10h] [ebp-6Ch]
  int v63; // [esp+14h] [ebp-68h]
  int v64; // [esp+18h] [ebp-64h]
  int v65; // [esp+1Ch] [ebp-60h]
  int v66; // [esp+20h] [ebp-5Ch]
  int v67; // [esp+24h] [ebp-58h]
  int v68; // [esp+28h] [ebp-54h]
  int v70; // [esp+30h] [ebp-4Ch]
  int v71; // [esp+30h] [ebp-4Ch]
  int v72; // [esp+30h] [ebp-4Ch]
  int v73[2]; // [esp+34h] [ebp-48h] BYREF
  _WORD *v74; // [esp+3Ch] [ebp-40h] BYREF
  int v75; // [esp+40h] [ebp-3Ch]
  MouseClass *v76; // [esp+4Ch] [ebp-30h] BYREF
  int v77; // [esp+50h] [ebp-2Ch]
  MouseClass *aP1a; // [esp+5Ch] [ebp-20h] BYREF
  int v79; // [esp+60h] [ebp-1Ch]
  MouseClass *v80; // [esp+64h] [ebp-18h] BYREF
  int v81; // [esp+68h] [ebp-14h]
  IUnknown *v82; // [esp+6Ch] [ebp-10h] BYREF
  IUnknown *v83; // [esp+70h] [ebp-Ch]
  IUnknown *v84; // [esp+74h] [ebp-8h]
  IUnknown *v85; // [esp+78h] [ebp-4h]
  int v86; // [esp+80h] [ebp+4h]
  IUnknown *aP2a; // [esp+84h] [ebp+8h]
  IUnknown *aP2b; // [esp+84h] [ebp+8h]
  int aP2c; // [esp+84h] [ebp+8h]
  IUnknown *aP3a; // [esp+88h] [ebp+Ch]
  int aP3b; // [esp+88h] [ebp+Ch]
  IUnknown *aP4a; // [esp+8Ch] [ebp+10h]
  IUnknown *aP4b; // [esp+8Ch] [ebp+10h]
  IUnknown *aP4c; // [esp+8Ch] [ebp+10h]
  int v95; // [esp+90h] [ebp+14h]
  int v96; // [esp+90h] [ebp+14h]
  int v97; // [esp+94h] [ebp+18h]
  int v98; // [esp+94h] [ebp+18h]
  int v99; // [esp+94h] [ebp+18h]
  int v100; // [esp+98h] [ebp+1Ch]

  if ( a6 < 8 ) /*0x4bead5*/
    return 0; /*0x4bead5*/
  v8 = (int *)(*(int (__thiscall **)(void *, MouseClass **))(this->__pad_078)(this, &v76); /*0x4beae2*/
  v9 = (IUnknown **)ClipRectIntersection(&v74, &aP1->field_0, v8, 0, 0); /*0x4beaf5*/
  v10 = *v9; /*0x4beafc*/
  v82 = *v9; /*0x4beafe*/
  v11 = v9[1]; /*0x4beb02*/
  v83 = v11; /*0x4beb05*/
  v84 = v9[2]; /*0x4beb0c*/
  v12 = v9[3]; /*0x4beb10*/
  v85 = v12; /*0x4beb15*/
  if ( !v84 && !v12 ) /*0x4beb1d*/
    return 0; /*0x4beb1d*/
  v13 = (MouseClass *)((char *)v10 + aP2->field_0); /*0x4beb3c*/
  v14 = (MouseClass *)((char *)v10 + aP3->field_0); /*0x4beb3e*/
  v15 = a8; /*0x4beb40*/
  v16 = (int)v11 + aP2->field_4; /*0x4beb47*/
  v17 = v13; /*0x4beb49*/
  v18 = (int)v11 + aP3->field_4; /*0x4beb4b*/
  v19 = a7; /*0x4beb4d*/
  aP1a = v13; /*0x4beb56*/
  v79 = v16; /*0x4beb5a*/
  v80 = v14; /*0x4beb5e*/
  v81 = v18; /*0x4beb62*/
  if ( (int)v13 > (int)v14 ) /*0x4beb66*/
  {
    v17 = v14; /*0x4beb68*/
    v19 = a8; /*0x4beb6a*/
    v15 = a7; /*0x4beb6c*/
    aP1a = v14; /*0x4beb73*/
    v79 = v18; /*0x4beb77*/
    v80 = v13; /*0x4beb7b*/
    v81 = v16; /*0x4beb7f*/
  }
  v76 = v80; /*0x4beb8f*/
  v20 = v17; /*0x4beb94*/
  v21 = v79; /*0x4beb96*/
  v77 = v81; /*0x4beba2*/
  if ( !ClipLine((int *)&aP1a, (int *)&v80, (int *)&v82) ) /*0x4beba6*/
    return 0; /*0x4beba6*/
  aP3a = (IUnknown *)v15; /*0x4bebc1*/
  aP2a = (IUnknown *)v19; /*0x4bebc8*/
  if ( v80 != v76 || v81 != v77 ) /*0x4bebd5*/
  {
    v73[0] = (char *)v20 - (char *)v80; /*0x4bebe7*/
    v73[1] = v21 - v81; /*0x4bebeb*/
    v74 = (_WORD *)((char *)v20 - (char *)v76); /*0x4bebfb*/
    v75 = v21 - v77; /*0x4bebff*/
    Vector::2DMagnitudeMath((int *)&v74); /*0x4bec07*/
    v97 = v22; /*0x4bec10*/
    Vector::2DMagnitudeMath(v73); /*0x4bec17*/
    v24 = abs32(Math::RoundToInt((double)v23 / (double)v97 * (double)(v19 - v15))); /*0x4bec4d*/
    if ( v19 >= v15 ) /*0x4bec51*/
      aP3a = (IUnknown *)(v19 - v24); /*0x4bec62*/
    else
      aP3a = (IUnknown *)(v19 + v24); /*0x4bec55*/
  }
  if ( aP1a != v20 || v79 != v21 ) /*0x4bec77*/
  {
    v75 = v79 - v77; /*0x4bec8d*/
    v74 = (_WORD *)((char *)aP1a - (char *)v76); /*0x4bec97*/
    v76 = (MouseClass *)((char *)v20 - (char *)v76); /*0x4bec9b*/
    v77 = v21 - v77; /*0x4bec9f*/
    Vector::2DMagnitudeMath((int *)&v76); /*0x4beca3*/
    v98 = v25; /*0x4becac*/
    Vector::2DMagnitudeMath((int *)&v74); /*0x4becb3*/
    v27 = abs32(Math::RoundToInt((double)v26 / (double)v98 * (double)(v19 - v15))); /*0x4bece9*/
    if ( v15 <= v19 ) /*0x4beced*/
      aP2a = (IUnknown *)(v15 + v27); /*0x4becfc*/
    else
      aP2a = (IUnknown *)(v15 - v27); /*0x4becf1*/
  }
  (*(void (__thiscall **)(void *))(this->__pad_070)(this); /*0x4bed0b*/
  v99 = (*(int (__thiscall **)(void *, MouseClass *, int))(this->__pad_05C)(this, aP1a, v79); /*0x4bed25*/
  if ( !*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] ) /*0x4bed2e*/
    return 0; /*0x4bed2e*/
  v28 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 4); /*0x4bed38*/
  v77 = v79; /*0x4bed3f*/
  SamplePosition = (_WORD *)Audio::GetSamplePosition( /*0x4bed56*/
                              *(int *)&MEMORY[0x87F8E4].__pad_5568[10232],
                              aP1a,
                              (MouseClass *)(v79 - v28));
  v30 = MEMORY[0x87E8A4]->field_4; /*0x4bed5c*/
  v77 = v79; /*0x4bed5f*/
  v31 = StreamClass::ReadAndSeek((int)MEMORY[0x87E8A4], aP1a, (MouseClass *)(v79 - (_DWORD)v30)); /*0x4bed67*/
  v32 = (_WORD *)v31; /*0x4bed7a*/
  LOWORD(v31) = *(_WORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 4) /*0x4bed87*/
              + *(_WORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 36);
  v65 = -1; /*0x4bed8b*/
  v100 = (int)aP2a + v31 - v79 - (_DWORD)v83; /*0x4bed99*/
  v86 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 40); /*0x4beda3*/
  if ( !v99 ) /*0x4bedb3*/
    return 0; /*0x4bf63e*/
  v33 = 256 - a6; /*0x4bedd0*/
  v68 = (a6 * LOBYTE(aP4->field_0)) >> 8; /*0x4bedd8*/
  v67 = (a6 * BYTE1(aP4->field_0)) >> 8; /*0x4bede7*/
  v66 = (a6 * BYTE2(aP4->field_0)) >> 8; /*0x4bedfa*/
  v34 = (char *)v80 - (char *)aP1a; /*0x4bee06*/
  v70 = (char *)v80 - (char *)aP1a; /*0x4bee0c*/
  v95 = v81 - v79; /*0x4bee19*/
  aP2b = (IUnknown *)((char *)aP3a - (char *)aP2a); /*0x4bee2b*/
  v35 = (*(int (__thiscall **)(void *))(this->q074)(this); /*0x4bee32*/
  v64 = v35; /*0x4bee3c*/
  if ( v95 < 0 ) /*0x4bee42*/
  {
    v64 = -v35; /*0x4bee46*/
    v86 = -v86; /*0x4bee53*/
    v65 = 1; /*0x4bee5a*/
  }
  v63 = 1; /*0x4bee69*/
  v36 = abs32(v95); /*0x4bee7d*/
  if ( (int)aP2b < 0 ) /*0x4bee81*/
    v63 = -1; /*0x4bee83*/
  v37 = abs32((int)aP2b); /*0x4bee8e*/
  aP2c = 2 * v34; /*0x4bee93*/
  v96 = 2 * v36; /*0x4bee9d*/
  aP3b = 2 * v37; /*0x4beea9*/
  if ( v37 <= v34 || v37 <= v36 ) /*0x4beeb8*/
  {
    if ( v34 <= v36 ) /*0x4bf149*/
    {
      aP4c = (IUnknown *)(aP2c - v36); /*0x4bf3be*/
      v62 = aP3b - v36; /*0x4bf3d0*/
      if ( v36 > 0 ) /*0x4bf3d4*/
      {
        v53 = 0; /*0x4bf3da*/
        v72 = v36; /*0x4bf3dc*/
        v73[0] = 0; /*0x4bf3e0*/
        do /*0x4bf620*/
        {
          v54 = (unsigned __int16)*v32; /*0x4bf3f1*/
          if ( (unsigned __int16)v100 < *SamplePosition && *v32 ) /*0x4bf3ec*/
          {
            v55 = *(_WORD *)(v53 + v99); /*0x4bf409*/
            LOBYTE(v76) = (unsigned __int8)(v55 >> MEMORY[0x89F690].__pad_14B0[656]) << MEMORY[0x89F690].__pad_14B0[660]; /*0x4bf428*/
            BYTE1(v76) = (unsigned __int8)(v55 >> MEMORY[0x89F690].__pad_14B0[672]) << MEMORY[0x89F690].__pad_14B0[676]; /*0x4bf439*/
            BYTE2(v76) = (unsigned __int8)(v55 >> MEMORY[0x89F690].__pad_14B0[664]) << MEMORY[0x89F690].__pad_14B0[668]; /*0x4bf456*/
            v53 = v73[0]; /*0x4bf4e1*/
            *(_WORD *)(v73[0] + v99) = ((v54 * (v68 + ((v33 * (unsigned __int8)v76) >> 8))) >> 7 >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]) /*0x4bf4e5*/
                                     | ((v54 * (v67 + ((v33 * BYTE1(v76)) >> 8))) >> 7 >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
                                     | ((v54 * (v66 + ((v33 * BYTE2(v76)) >> 8))) >> 7 >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]);
          }
          if ( (int)aP4c > 0 ) /*0x4bf4f2*/
          {
            ++SamplePosition; /*0x4bf4f9*/
            v53 += 2; /*0x4bf4fc*/
            v56 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 28); /*0x4bf4ff*/
            v73[0] = v53; /*0x4bf502*/
            if ( (unsigned int)SamplePosition >= v56 ) /*0x4bf508*/
              SamplePosition = (_WORD *)((char *)SamplePosition /*0x4bf50a*/
                                       - *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 32));
            if ( (unsigned int)++v32 >= *(_DWORD *)&MEMORY[0x87E8A4]->__pad_18[4] ) /*0x4bf518*/
              v32 = (_WORD *)((char *)v32 - *(_DWORD *)&MEMORY[0x87E8A4]->__pad_18[8]); /*0x4bf51a*/
            aP4c = (IUnknown *)((char *)aP4c - v96); /*0x4bf52d*/
          }
          if ( v62 > 0 ) /*0x4bf53a*/
          {
            v100 += v63; /*0x4bf54d*/
            v62 -= v96; /*0x4bf55d*/
          }
          aP4c = (IUnknown *)((char *)aP4c + aP2c); /*0x4bf579*/
          v62 += aP3b; /*0x4bf592*/
          v99 += v64; /*0x4bf596*/
          v57 = (unsigned int)&SamplePosition[v86]; /*0x4bf5a7*/
          if ( v86 <= 0 ) /*0x4bf5ab*/
          {
            v74 = (_WORD *)v57; /*0x4bf5cd*/
            if ( v57 >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 24) ) /*0x4bf5d4*/
              v58 = (int)v74; /*0x4bf5dd*/
            else
              v58 = v57 + *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 32); /*0x4bf5d9*/
            SamplePosition = (_WORD *)v58; /*0x4bf5e1*/
          }
          else
          {
            v74 = (_WORD *)v57; /*0x4bf5b3*/
            if ( v57 < *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 28) ) /*0x4bf5ba*/
              SamplePosition = v74; /*0x4bf5c1*/
            else
              SamplePosition = (_WORD *)(v57 - *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 32)); /*0x4bf5bc*/
          }
          v32 += v86; /*0x4bf5e7*/
          v100 += v65; /*0x4bf5e9*/
          if ( v86 <= 0 ) /*0x4bf5f2*/
          {
            v59 = v32; /*0x4bf609*/
            if ( (unsigned int)v32 < *(_DWORD *)MEMORY[0x87E8A4]->__pad_18 ) /*0x4bf60e*/
              v59 = (_WORD *)((char *)v32 + *(_DWORD *)&MEMORY[0x87E8A4]->__pad_18[8]); /*0x4bf613*/
            v32 = v59; /*0x4bf615*/
          }
          else if ( (unsigned int)v32 >= *(_DWORD *)&MEMORY[0x87E8A4]->__pad_18[4] ) /*0x4bf5fc*/
          {
            v32 = (_WORD *)((char *)v32 - *(_DWORD *)&MEMORY[0x87E8A4]->__pad_18[8]); /*0x4bf5fe*/
          }
          --v72; /*0x4bf61c*/
        }
        while ( v72 ); /*0x4bf620*/
      }
    }
    else
    {
      aP4b = (IUnknown *)(v96 - v34); /*0x4bf158*/
      v61 = aP3b - v34; /*0x4bf168*/
      v47 = 0; /*0x4bf16c*/
      v73[0] = 0; /*0x4bf170*/
      if ( v34 > 0 ) /*0x4bf174*/
      {
        v48 = (TacticalClass *)MEMORY[0x87E8A4]; /*0x4bf17a*/
        do /*0x4bf39a*/
        {
          v49 = (unsigned __int16)*v32; /*0x4bf18d*/
          if ( (unsigned __int16)v100 < *SamplePosition && *v32 ) /*0x4bf188*/
          {
            v50 = *(_WORD *)(v99 + 2 * v47); /*0x4bf1ac*/
            LOBYTE(v74) = (unsigned __int8)(v50 >> MEMORY[0x89F690].__pad_14B0[656]) << MEMORY[0x89F690].__pad_14B0[660]; /*0x4bf1c4*/
            BYTE1(v74) = (unsigned __int8)(v50 >> MEMORY[0x89F690].__pad_14B0[672]) << MEMORY[0x89F690].__pad_14B0[676]; /*0x4bf1e5*/
            BYTE2(v74) = (unsigned __int8)(v50 >> MEMORY[0x89F690].__pad_14B0[664]) << MEMORY[0x89F690].__pad_14B0[668]; /*0x4bf1f1*/
            v47 = v73[0]; /*0x4bf27c*/
            *(_WORD *)(v99 + 2 * v73[0]) = ((v49 * (v68 + ((v33 * (unsigned __int8)v74) >> 8))) >> 7 >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]) /*0x4bf280*/
                                         | ((v49 * (v66 + ((v33 * BYTE2(v74)) >> 8))) >> 7 >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664])
                                         | ((v49 * (v67 + ((v33 * BYTE1(v74)) >> 8))) >> 7 >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672]);
            v48 = (TacticalClass *)MEMORY[0x87E8A4]; /*0x4bf284*/
          }
          if ( (int)aP4b > 0 ) /*0x4bf293*/
          {
            v99 += v64; /*0x4bf2a6*/
            aP4b = (IUnknown *)((char *)aP4b - aP2c); /*0x4bf2b6*/
            SamplePosition += v86; /*0x4bf2c7*/
            if ( v86 <= 0 ) /*0x4bf2cb*/
            {
              v51 = SamplePosition; /*0x4bf2e3*/
              if ( (unsigned int)SamplePosition < *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 24) ) /*0x4bf2e8*/
                v51 = (_WORD *)((char *)SamplePosition + *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 32)); /*0x4bf2ed*/
              SamplePosition = v51; /*0x4bf2ef*/
            }
            else if ( (unsigned int)SamplePosition >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 28) ) /*0x4bf2d6*/
            {
              SamplePosition = (_WORD *)((char *)SamplePosition /*0x4bf2d8*/
                                       - *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 32));
            }
            v48 = (TacticalClass *)MEMORY[0x87E8A4]; /*0x4bf2f5*/
            v100 += v65; /*0x4bf2fb*/
            v32 += v86; /*0x4bf309*/
            if ( v86 <= 0 ) /*0x4bf30d*/
            {
              v52 = v32; /*0x4bf31c*/
              if ( (unsigned int)v32 < *(_DWORD *)MEMORY[0x87E8A4]->__pad_18 ) /*0x4bf320*/
                v52 = (_WORD *)((char *)v32 + *(_DWORD *)&MEMORY[0x87E8A4]->__pad_18[8]); /*0x4bf325*/
              v32 = v52; /*0x4bf327*/
            }
            else if ( (unsigned int)v32 >= *(_DWORD *)&MEMORY[0x87E8A4]->__pad_18[4] ) /*0x4bf312*/
            {
              v32 = (_WORD *)((char *)v32 - *(_DWORD *)&MEMORY[0x87E8A4]->__pad_18[8]); /*0x4bf314*/
            }
          }
          if ( v61 > 0 ) /*0x4bf32f*/
          {
            v100 += v63; /*0x4bf335*/
            v61 -= aP2c; /*0x4bf345*/
          }
          aP4b = (IUnknown *)((char *)aP4b + v96); /*0x4bf360*/
          v61 += aP3b; /*0x4bf373*/
          if ( (unsigned int)++SamplePosition >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 28) ) /*0x4bf37d*/
            SamplePosition = (_WORD *)((char *)SamplePosition /*0x4bf37f*/
                                     - *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 32));
          if ( (unsigned int)++v32 >= v48->referenceCount ) /*0x4bf38a*/
            v32 = (_WORD *)((char *)v32 - (unsigned int)v48->NeedsSaveOrLink); /*0x4bf38c*/
          v73[0] = ++v47; /*0x4bf396*/
        }
        while ( v47 < v70 ); /*0x4bf39a*/
      }
    }
  }
  else
  {
    v60 = v96 - v37; /*0x4beec7*/
    aP4a = (IUnknown *)(aP2c - v37); /*0x4beed6*/
    if ( v37 > 0 ) /*0x4beedd*/
    {
      v38 = (TacticalClass *)MEMORY[0x87E8A4]; /*0x4beee3*/
      v39 = 0; /*0x4beee9*/
      v71 = 0; /*0x4beeeb*/
      v73[0] = v37; /*0x4beeef*/
      while ( 1 ) /*0x4bef00*/
      {
        v40 = (unsigned __int16)*v32; /*0x4bef00*/
        if ( (unsigned __int16)v100 < *SamplePosition && *v32 ) /*0x4beefb*/
        {
          v41 = *(_WORD *)(v39 + v99); /*0x4bef18*/
          LOBYTE(v74) = (unsigned __int8)(v41 >> MEMORY[0x89F690].__pad_14B0[656]) << MEMORY[0x89F690].__pad_14B0[660]; /*0x4bef37*/
          BYTE1(v74) = (unsigned __int8)(v41 >> MEMORY[0x89F690].__pad_14B0[672]) << MEMORY[0x89F690].__pad_14B0[676]; /*0x4bef58*/
          BYTE2(v74) = (unsigned __int8)(v41 >> MEMORY[0x89F690].__pad_14B0[664]) << MEMORY[0x89F690].__pad_14B0[668]; /*0x4bef68*/
          v39 = v71; /*0x4befe7*/
          *(_WORD *)(v71 + v99) = ((v40 * (v68 + ((v33 * (unsigned __int8)v74) >> 8))) >> 7 >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]) /*0x4beff4*/
                                | ((v40 * (v66 + ((v33 * BYTE2(v74)) >> 8))) >> 7 >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664])
                                | ((v40 * (v67 + ((v33 * BYTE1(v74)) >> 8))) >> 7 >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672]);
          v38 = (TacticalClass *)MEMORY[0x87E8A4]; /*0x4beff8*/
        }
        if ( v60 <= 0 ) /*0x4bf004*/
        {
          v43 = v100; /*0x4bf0a9*/
          goto LABEL_45; /*0x4bf0a9*/
        }
        v99 += v64; /*0x4bf017*/
        v60 -= aP3b; /*0x4bf027*/
        SamplePosition += v86; /*0x4bf035*/
        if ( v86 <= 0 ) /*0x4bf039*/
        {
          v42 = SamplePosition; /*0x4bf050*/
          if ( (unsigned int)SamplePosition < *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 24) ) /*0x4bf055*/
            v42 = (_WORD *)((char *)SamplePosition + *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 32)); /*0x4bf05a*/
          SamplePosition = v42; /*0x4bf05c*/
        }
        else if ( (unsigned int)SamplePosition >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 28) ) /*0x4bf043*/
        {
          SamplePosition = (_WORD *)((char *)SamplePosition /*0x4bf045*/
                                   - *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 32));
        }
        v38 = (TacticalClass *)MEMORY[0x87E8A4]; /*0x4bf065*/
        v32 += v86; /*0x4bf06b*/
        if ( v86 <= 0 ) /*0x4bf06f*/
          break; /*0x4bf06f*/
        if ( (unsigned int)v32 < *(_DWORD *)&MEMORY[0x87E8A4]->__pad_18[4] ) /*0x4bf074*/
          goto LABEL_43; /*0x4bf074*/
        v32 = (_WORD *)((char *)v32 - *(_DWORD *)&MEMORY[0x87E8A4]->__pad_18[8]); /*0x4bf07d*/
        v43 = v65 + v100; /*0x4bf086*/
LABEL_45:
        if ( (int)aP4a > 0 ) /*0x4bf0b9*/
        {
          ++SamplePosition; /*0x4bf0c1*/
          v39 += 2; /*0x4bf0c4*/
          v71 = v39; /*0x4bf0ca*/
          if ( (unsigned int)SamplePosition >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 28) ) /*0x4bf0ce*/
            SamplePosition = (_WORD *)((char *)SamplePosition /*0x4bf0d0*/
                                     - *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10232] + 32));
          if ( (unsigned int)++v32 >= v38->referenceCount ) /*0x4bf0db*/
            v32 = (_WORD *)((char *)v32 - (unsigned int)v38->NeedsSaveOrLink); /*0x4bf0dd*/
          aP4a = (IUnknown *)((char *)aP4a - aP3b); /*0x4bf0e7*/
        }
        v100 = v63 + v43; /*0x4bf0fb*/
        aP4a = (IUnknown *)((char *)aP4a + aP2c); /*0x4bf112*/
        v45 = v73[0] == 1; /*0x4bf123*/
        v60 += v96; /*0x4bf124*/
        --v73[0]; /*0x4bf128*/
        if ( v45 ) /*0x4bf12c*/
          goto LABEL_52; /*0x4bf12c*/
      }
      v44 = v32; /*0x4bf08d*/
      if ( (unsigned int)v32 < *(_DWORD *)MEMORY[0x87E8A4]->__pad_18 ) /*0x4bf091*/
        v44 = (_WORD *)((char *)v32 + *(_DWORD *)&MEMORY[0x87E8A4]->__pad_18[8]); /*0x4bf096*/
      v32 = v44; /*0x4bf098*/
LABEL_43:
      v43 = v65 + v100; /*0x4bf09a*/
      goto LABEL_45; /*0x4bf0a7*/
    }
  }
LABEL_52:
  (*(void (__thiscall **)(void *))(this->q060)(this); /*0x4bf132*/
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
      v3 = 4 * (HIWORD(MEMORY[0x8A0DE8]) & (a1 >> 2)); /*0x4bf6ba*/
      break; /*0x4bf6bd*/
    case 50: /*0x4bf664*/
      v3 = ((unsigned __int16)MEMORY[0x8A0DE8] & (a2 >> 1)) + ((unsigned __int16)MEMORY[0x8A0DE8] & (a1 >> 1)); /*0x4bf6a2*/
      break; /*0x4bf6a5*/
    case 75: /*0x4bf664*/
      v3 = 4 * (HIWORD(MEMORY[0x8A0DE8]) & (a1 >> 2)); /*0x4bf67d*/
      break; /*0x4bf680*/
    default:
      return v3;
  }
  return v3; /*0x4bf67c*/
}


// ==== 0x004BF750  DSurface::DrawGradientLine  this=DSurface  sig=csp ====
char __thiscall DSurface_DrawGradientLine(
        void *this,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        int a5,
        int a6,
        float *a7,
        float *a8)
{
  void *v8; // ebp
  int v9; // eax
  int *v10; // eax
  int v11; // eax
  int v12; // ecx
  _WORD *v13; // ebx
  int v15; // eax
  unsigned __int8 v16; // dl
  double v17; // st7
  char v19; // c0
  int v21; // eax
  int v22; // eax
  int v24; // eax
  unsigned __int8 v25; // dl
  double v26; // st7
  char v28; // c0
  bool v29; // zf
  int v30; // edi
  int v31; // eax
  int v32; // eax
  int v33; // ebx
  int v34; // ebp
  int v36; // eax
  unsigned __int8 v37; // dl
  double v38; // st7
  char v40; // c0
  int v41; // ebx
  int v43; // ebp
  int v44; // eax
  unsigned __int8 v45; // dl
  double v46; // st7
  char v48; // c0
  int v50; // [esp+10h] [ebp-48h]
  int v51; // [esp+14h] [ebp-44h]
  int v52; // [esp+18h] [ebp-40h]
  int v53; // [esp+1Ch] [ebp-3Ch]
  int v54; // [esp+20h] [ebp-38h]
  int v55; // [esp+24h] [ebp-34h]
  int v56; // [esp+28h] [ebp-30h] BYREF
  int v57; // [esp+2Ch] [ebp-2Ch]
  int v58; // [esp+30h] [ebp-28h]
  int v59; // [esp+34h] [ebp-24h]
  _BYTE v60[16]; // [esp+38h] [ebp-20h] BYREF
  _WORD *v61; // [esp+5Ch] [ebp+4h]
  int i; // [esp+5Ch] [ebp+4h]
  int v63; // [esp+60h] [ebp+8h]
  int v64; // [esp+60h] [ebp+8h]
  int v65; // [esp+64h] [ebp+Ch]
  int v66; // [esp+64h] [ebp+Ch]
  __int16 v67; // [esp+74h] [ebp+1Ch]
  __int16 v68; // [esp+74h] [ebp+1Ch]
  __int16 v69; // [esp+74h] [ebp+1Ch]
  __int16 v70; // [esp+74h] [ebp+1Ch]

  v8 = this; /*0x4bf755*/
  v9 = (*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 120))(this, v60); /*0x4bf766*/
  v10 = (int *)ClipRectIntersection(v9, 0, 0); /*0x4bf776*/
  v56 = *v10; /*0x4bf77d*/
  v57 = v10[1]; /*0x4bf784*/
  v58 = v10[2]; /*0x4bf78b*/
  v59 = v10[3]; /*0x4bf796*/
  v52 = v56 + *a3; /*0x4bf7a3*/
  v53 = v57 + a3[1]; /*0x4bf7a7*/
  v55 = v57 + a4[1]; /*0x4bf7b8*/
  v54 = v56 + *a4; /*0x4bf7c9*/
  if ( (unsigned __int8)ClipLine(&v56) ) /*0x4bf7cd*/
  {
    v11 = v52; /*0x4bf7da*/
    if ( v52 > v54 ) /*0x4bf7e4*/
    {
      v12 = v53; /*0x4bf7e6*/
      v52 = v54; /*0x4bf7ea*/
      v54 = v11; /*0x4bf7f2*/
      v53 = v55; /*0x4bf7f6*/
      v55 = v12; /*0x4bf7fa*/
    }
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v8 + 112))(v8) == 2 ) /*0x4bf809*/
    {
      v13 = (_WORD *)(*(int (__thiscall **)(void *, int, int))(*(_DWORD *)v8 + 92))(v8, v52, v53); /*0x4bf821*/
      v61 = v13; /*0x4bf825*/
      if ( v13 ) /*0x4bf829*/
      {
        if ( v53 == v55 ) /*0x4bf83a*/
        {
          for ( i = 0; i <= v54 - v52; ++i ) /*0x4bf852*/
          {
            v15 = Color::Lerp2(a5, a6, *a8); /*0x4bf874*/
            v67 = *(_WORD *)v15; /*0x4bf87f*/
            v16 = *(_BYTE *)(v15 + 2) >> MEMORY[0x8A0DDC]; /*0x4bf895*/
            LOWORD(v15) = (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)v15) >> MEMORY[0x8A0DE4]); /*0x4bf8ab*/
            *v13 = ((unsigned __int8)((unsigned __int8)v67 >> MEMORY[0x8A0DD4]) << MEMORY[0x8A0DD0]) /*0x4bf8cd*/
                 | (v15 << MEMORY[0x8A0DE0])
                 | (v16 << MEMORY[0x8A0DD8]);
            v17 = *a7 + *a8; /*0x4bf8d2*/
            *a8 = v17; /*0x4bf8da*/
            if ( v19 && *a7 < 0.0 ) /*0x4bf8f0*/
            {
              *a8 = 0.0; /*0x4bf8f4*/
            }
            else
            {
              if ( v17 <= 1.0 || *a7 <= 0.0 ) /*0x4bf916*/
                goto LABEL_15; /*0x4bf916*/
              *a8 = 1.0; /*0x4bf918*/
            }
            *a7 = -*a7; /*0x4bf922*/
LABEL_15:
            ++v13; /*0x4bf924*/
          }
LABEL_16:
          (*(void (__thiscall **)(void *))(*(_DWORD *)v8 + 96))(v8); /*0x4bf942*/
          return 1; /*0x4bf953*/
        }
        if ( v52 == v54 ) /*0x4bf960*/
        {
          if ( v53 <= v55 ) /*0x4bf968*/
            v21 = (*(int (__thiscall **)(void *))(*(_DWORD *)v8 + 116))(v8); /*0x4bf97b*/
          else
            v21 = -(*(int (__thiscall **)(void *))(*(_DWORD *)v8 + 116))(v8); /*0x4bf972*/
          v63 = v21; /*0x4bf982*/
          v22 = abs32(v55 - v53); /*0x4bf98f*/
          if ( v22 < 0 ) /*0x4bf991*/
            goto LABEL_16; /*0x4bf991*/
          v65 = v22 + 1; /*0x4bf9a4*/
          while ( 1 ) /*0x4bf9b8*/
          {
            v24 = Color::Lerp2(a5, a6, *a8); /*0x4bf9b8*/
            v68 = *(_WORD *)v24; /*0x4bf9c3*/
            v25 = *(_BYTE *)(v24 + 2) >> MEMORY[0x8A0DDC]; /*0x4bf9d9*/
            LOWORD(v24) = (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)v24) >> MEMORY[0x8A0DE4]); /*0x4bf9ef*/
            *v61 = ((unsigned __int8)((unsigned __int8)v68 >> MEMORY[0x8A0DD4]) << MEMORY[0x8A0DD0]) /*0x4bfa15*/
                 | (v24 << MEMORY[0x8A0DE0])
                 | (v25 << MEMORY[0x8A0DD8]);
            v26 = *a7 + *a8; /*0x4bfa1a*/
            *a8 = v26; /*0x4bfa22*/
            if ( v28 && *a7 < 0.0 ) /*0x4bfa38*/
            {
              *a8 = 0.0; /*0x4bfa3c*/
            }
            else
            {
              if ( v26 <= 1.0 || *a7 <= 0.0 ) /*0x4bfa5e*/
                goto LABEL_30; /*0x4bfa5e*/
              *a8 = 1.0; /*0x4bfa60*/
            }
            *a7 = -*a7; /*0x4bfa6a*/
LABEL_30:
            v29 = v65 == 1; /*0x4bfa6c*/
            v61 = (_WORD *)((char *)v61 + v63); /*0x4bfa7b*/
            --v65; /*0x4bfa7f*/
            if ( v29 ) /*0x4bfa83*/
              goto LABEL_16; /*0x4bfa83*/
          }
        }
        v30 = v54 - v52; /*0x4bfaa6*/
        v31 = (*(int (__thiscall **)(void *))(*(_DWORD *)v8 + 116))(v8); /*0x4bfaae*/
        v64 = v31; /*0x4bfab3*/
        if ( v55 - v53 < 0 ) /*0x4bfab7*/
          v64 = -v31; /*0x4bfabb*/
        v50 = 2 * v30; /*0x4bfac7*/
        v32 = abs32(v55 - v53); /*0x4bfacb*/
        v66 = 2 * v32; /*0x4bfad2*/
        if ( v30 > v32 ) /*0x4bfad6*/
        {
          v33 = 0; /*0x4bfade*/
          v34 = 2 * v32 - v30; /*0x4bfae0*/
          if ( v30 < 0 ) /*0x4bfae4*/
          {
LABEL_59:
            v8 = this; /*0x4bfd08*/
            goto LABEL_16; /*0x4bfd08*/
          }
          while ( 1 ) /*0x4bfb06*/
          {
            v36 = Color::Lerp2(a5, a6, *a8); /*0x4bfb06*/
            v69 = *(_WORD *)v36; /*0x4bfb11*/
            v37 = *(_BYTE *)(v36 + 2) >> MEMORY[0x8A0DDC]; /*0x4bfb27*/
            LOWORD(v36) = (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)v36) >> MEMORY[0x8A0DE4]); /*0x4bfb3d*/
            v61[v33] = ((unsigned __int8)((unsigned __int8)v69 >> MEMORY[0x8A0DD4]) << MEMORY[0x8A0DD0]) /*0x4bfb63*/
                     | (v36 << MEMORY[0x8A0DE0])
                     | (v37 << MEMORY[0x8A0DD8]);
            v38 = *a7 + *a8; /*0x4bfb69*/
            *a8 = v38; /*0x4bfb71*/
            if ( v40 && *a7 < 0.0 ) /*0x4bfb87*/
            {
              *a8 = 0.0; /*0x4bfb8b*/
            }
            else
            {
              if ( v38 <= 1.0 || *a7 <= 0.0 ) /*0x4bfbad*/
                goto LABEL_43; /*0x4bfbad*/
              *a8 = 1.0; /*0x4bfbaf*/
            }
            *a7 = -*a7; /*0x4bfbb9*/
LABEL_43:
            if ( v34 > 0 ) /*0x4bfbbd*/
            {
              v34 -= v50; /*0x4bfbc9*/
              v61 = (_WORD *)((char *)v61 + v64); /*0x4bfbcb*/
            }
            v34 += v66; /*0x4bfbd7*/
            if ( ++v33 > v54 - v52 ) /*0x4bfbdc*/
            {
              (*(void (__thiscall **)(void *))(this->DSurface_field_0x18)(this); /*0x4bfbeb*/
              return 1; /*0x4bfbf7*/
            }
          }
        }
        v41 = 2 * v30 - v32; /*0x4bfbfa*/
        if ( v32 < 0 ) /*0x4bfbfe*/
          goto LABEL_16; /*0x4bfbfe*/
        v43 = 0; /*0x4bfc0c*/
        v51 = v32 + 1; /*0x4bfc0f*/
        while ( 1 ) /*0x4bfc27*/
        {
          v44 = Color::Lerp2(a5, a6, *a8); /*0x4bfc27*/
          v70 = *(_WORD *)v44; /*0x4bfc32*/
          v45 = *(_BYTE *)(v44 + 2) >> MEMORY[0x8A0DDC]; /*0x4bfc48*/
          LOWORD(v44) = (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)v44) >> MEMORY[0x8A0DE4]); /*0x4bfc5e*/
          v61[v43] = ((unsigned __int8)((unsigned __int8)v70 >> MEMORY[0x8A0DD4]) << MEMORY[0x8A0DD0]) /*0x4bfc84*/
                   | (v44 << MEMORY[0x8A0DE0])
                   | (v45 << MEMORY[0x8A0DD8]);
          v46 = *a7 + *a8; /*0x4bfc8a*/
          *a8 = v46; /*0x4bfc92*/
          if ( v48 && *a7 < 0.0 ) /*0x4bfca8*/
          {
            *a8 = 0.0; /*0x4bfcac*/
          }
          else
          {
            if ( v46 <= 1.0 || *a7 <= 0.0 ) /*0x4bfcce*/
              goto LABEL_56; /*0x4bfcce*/
            *a8 = 1.0; /*0x4bfcd0*/
          }
          *a7 = -*a7; /*0x4bfcda*/
LABEL_56:
          if ( v41 > 0 ) /*0x4bfcde*/
          {
            ++v43; /*0x4bfce4*/
            v41 -= v66; /*0x4bfce7*/
          }
          v41 += v50; /*0x4bfcf1*/
          v29 = v51 == 1; /*0x4bfcf9*/
          v61 = (_WORD *)((char *)v61 + v64); /*0x4bfcfa*/
          --v51; /*0x4bfcfe*/
          if ( v29 ) /*0x4bfd02*/
            goto LABEL_59; /*0x4bfd02*/
        }
      }
    }
  }
  return 0; /*0x4bf94b*/
}


// ==== 0x004BFD30  DSurface::DrawLineZBuf  this=DSurface  sig=csp ====
char __fastcall DSurface_DrawLineZBuf(
        int a1,
        int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned __int16 a6,
        int a7,
        int a8,
        char a9)
{
  int v9; // eax
  int *v10; // eax
  int v11; // esi
  int v12; // edi
  int v13; // ecx
  int v14; // ecx
  int v15; // ebx
  unsigned __int64 v16; // rax
  int v17; // ebp
  unsigned int v18; // esi
  int v19; // edi
  int v20; // esi
  unsigned int v21; // ebp
  double v22; // st7
  double v23; // st7
  int v24; // eax
  unsigned int v25; // eax
  double v26; // st7
  int v27; // eax
  double v28; // st6
  double v29; // st7
  int v30; // eax
  unsigned int v31; // eax
  int v32; // ebp
  int v33; // ebx
  int v34; // edi
  _WORD *v35; // esi
  int v36; // edi
  _WORD *v37; // edi
  int v38; // ecx
  int v39; // ebx
  int v40; // ebp
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // ebp
  int v45; // ebx
  _DWORD *v46; // edx
  _DWORD *v47; // ebp
  int v48; // eax
  int v49; // edx
  int v50; // eax
  _WORD *v51; // eax
  _WORD *v52; // eax
  int v54; // ebx
  _DWORD *v55; // edx
  _DWORD *v56; // ebp
  int v57; // eax
  int v58; // edx
  _WORD *v59; // eax
  _WORD *v60; // eax
  int v61; // eax
  int v62; // ebp
  _DWORD *v63; // edx
  _DWORD *v64; // ecx
  int v65; // ebx
  int v66; // eax
  int v67; // eax
  _WORD *v68; // eax
  _WORD *v69; // eax
  int v70; // [esp+1Ch] [ebp-64h]
  int v71; // [esp+20h] [ebp-60h]
  int v72; // [esp+20h] [ebp-60h]
  int v73; // [esp+20h] [ebp-60h]
  int v74; // [esp+24h] [ebp-5Ch]
  int v75; // [esp+28h] [ebp-58h]
  int v76; // [esp+2Ch] [ebp-54h]
  int v77; // [esp+30h] [ebp-50h]
  int v78; // [esp+30h] [ebp-50h]
  int v79; // [esp+34h] [ebp-4Ch]
  int v80; // [esp+38h] [ebp-48h]
  double v81; // [esp+3Ch] [ebp-44h]
  int v82; // [esp+3Ch] [ebp-44h]
  int v83; // [esp+3Ch] [ebp-44h]
  _DWORD v84[5]; // [esp+4Ch] [ebp-34h] BYREF
  unsigned __int64 v85; // [esp+60h] [ebp-20h]
  unsigned __int64 v86; // [esp+68h] [ebp-18h]
  int v87; // [esp+70h] [ebp-10h] BYREF
  int v88; // [esp+74h] [ebp-Ch]
  int v89; // [esp+78h] [ebp-8h]
  int v90; // [esp+7Ch] [ebp-4h]
  int v91; // [esp+84h] [ebp+4h]
  int v92; // [esp+88h] [ebp+8h]
  int v93; // [esp+88h] [ebp+8h]
  int v94; // [esp+8Ch] [ebp+Ch]
  int v95; // [esp+8Ch] [ebp+Ch]
  int v96; // [esp+8Ch] [ebp+Ch]
  int v97; // [esp+94h] [ebp+14h]
  int v98; // [esp+98h] [ebp+18h]
  int v99; // [esp+98h] [ebp+18h]

  v84[0] = a1; /*0x4bfd3e*/
  v9 = (*(int (__stdcall **)(_DWORD *))(*(_DWORD *)a1 + 120))(&v84[1]); /*0x4bfd42*/
  v10 = (int *)ClipRectIntersection(v9, 0, 0); /*0x4bfd52*/
  v11 = *v10; /*0x4bfd59*/
  v87 = *v10; /*0x4bfd5b*/
  v12 = v10[1]; /*0x4bfd5f*/
  v88 = v12; /*0x4bfd62*/
  v89 = v10[2]; /*0x4bfd69*/
  v13 = v10[3]; /*0x4bfd6d*/
  v90 = v13; /*0x4bfd72*/
  if ( !v89 && !v13 ) /*0x4bfd7a*/
    return 0; /*0x4bfd7a*/
  LODWORD(v16) = v11 + *a4; /*0x4bfd92*/
  v14 = v11 + *a5; /*0x4bfd94*/
  v15 = a7; /*0x4bfd99*/
  HIDWORD(v16) = v12 + a4[1]; /*0x4bfda0*/
  v17 = v16; /*0x4bfda2*/
  v18 = v12 + a5[1]; /*0x4bfda4*/
  v19 = a8; /*0x4bfda6*/
  v85 = v16; /*0x4bfdaf*/
  v86 = __PAIR64__(v18, v14); /*0x4bfdb7*/
  if ( (int)v16 > v14 ) /*0x4bfdbf*/
  {
    v17 = v14; /*0x4bfdc1*/
    v15 = a8; /*0x4bfdc3*/
    v19 = a7; /*0x4bfdc5*/
    v85 = __PAIR64__(v18, v14); /*0x4bfdcc*/
    v86 = v16; /*0x4bfdd4*/
  }
  *(_QWORD *)&v84[1] = v86; /*0x4bfde8*/
  v20 = v17; /*0x4bfded*/
  v21 = HIDWORD(v85); /*0x4bfdef*/
  if ( !(unsigned __int8)ClipLine(&v87) ) /*0x4bfdff*/
    return 0; /*0x4bfe06*/
  v92 = v19; /*0x4bfe1a*/
  v98 = v15; /*0x4bfe1e*/
  if ( v86 != *(_QWORD *)&v84[1] ) /*0x4bfe25*/
  {
    v22 = Math::Sqrt( /*0x4bfe5d*/
            (double)(int)(v21 - HIDWORD(v86)) * (double)(int)(v21 - HIDWORD(v86))
          + (double)(v20 - (int)v86) * (double)(v20 - (int)v86));
    v81 = (double)(int)Math::RoundToInt(v22); /*0x4bfe95*/
    v23 = Math::Sqrt((double)(int)(v21 - v84[2]) * (double)(int)(v21 - v84[2]) + (double)(v20 - v84[1]) /*0x4bfeaa*/
                                                                               * (double)(v20 - v84[1]));
    v24 = Math::RoundToInt(v23); /*0x4bfeb2*/
    v25 = abs32(Math::RoundToInt(v81 / (double)v24 * (double)(v15 - v19))); /*0x4bfee5*/
    if ( v15 >= v19 ) /*0x4bfee9*/
      v92 = v15 - v25; /*0x4bfef7*/
    else
      v92 = v15 + v25; /*0x4bfeed*/
  }
  if ( v85 == __PAIR64__(v21, v20) ) /*0x4bff05*/
    goto LABEL_14; /*0x4bff05*/
  v26 = Math::Sqrt( /*0x4bff3f*/
          (double)(HIDWORD(v85) - v84[2]) * (double)(HIDWORD(v85) - v84[2])
        + (double)((int)v85 - v84[1]) * (double)((int)v85 - v84[1]));
  v27 = Math::RoundToInt(v26); /*0x4bff44*/
  v82 = v20 - v84[1]; /*0x4bff56*/
  v28 = (double)(int)(v21 - v84[2]); /*0x4bff68*/
  *(double *)&v84[1] = (double)v27; /*0x4bff73*/
  v29 = Math::Sqrt(v28 * v28 + (double)v82 * (double)v82); /*0x4bff88*/
  v30 = Math::RoundToInt(v29); /*0x4bff90*/
  v31 = abs32(Math::RoundToInt(*(double *)&v84[1] / (double)v30 * (double)(v15 - v19))); /*0x4bffc3*/
  if ( v19 <= v15 ) /*0x4bffc7*/
  {
    v98 = v19 + v31; /*0x4bffd1*/
LABEL_14:
    v32 = v98; /*0x4bffd8*/
    goto LABEL_15; /*0x4bffd8*/
  }
  v32 = v19 - v31; /*0x4bffcb*/
LABEL_15:
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v84[0] + 112))(v84[0]); /*0x4bffdf*/
  v33 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v84[0] + 92))(v84[0], v85, HIDWORD(v85)); /*0x4c0001*/
  v97 = v33; /*0x4c0005*/
  if ( !MEMORY[0x887644] ) /*0x4c000c*/
    return 0; /*0x4c000c*/
  v34 = *((_DWORD *)MEMORY[0x887644] + 1); /*0x4c0016*/
  v84[2] = HIDWORD(v85); /*0x4c001d*/
  v35 = (_WORD *)Audio::GetSamplePosition(v85, HIDWORD(v85) - v34); /*0x4c0034*/
  v36 = *((_DWORD *)MEMORY[0x87E8A4] + 1); /*0x4c003a*/
  v84[2] = HIDWORD(v85); /*0x4c003d*/
  v37 = (_WORD *)StreamClass::ReadAndSeek(v85, HIDWORD(v85) - v36); /*0x4c004e*/
  v76 = -1; /*0x4c0055*/
  LOWORD(v38) = *((_WORD *)MEMORY[0x887644] + 2) + *((_WORD *)MEMORY[0x887644] + 18); /*0x4c0061*/
  v91 = *((_DWORD *)MEMORY[0x887644] + 10); /*0x4c0068*/
  v99 = v32 + v38 - HIDWORD(v85) - v88; /*0x4c0076*/
  if ( !v33 ) /*0x4c007d*/
    return 0; /*0x4c073e*/
  LOBYTE(v84[1]) = (unsigned __int8)(a6 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4c00a5*/
  BYTE1(v84[1]) = (unsigned __int8)(a6 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4c00c6*/
  v39 = HIDWORD(v86) - HIDWORD(v85); /*0x4c00ce*/
  BYTE2(v84[1]) = (unsigned __int8)(a6 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4c00d6*/
  v79 = LOBYTE(v84[1]); /*0x4c00e3*/
  v80 = BYTE1(v84[1]); /*0x4c00f0*/
  v83 = BYTE2(v84[1]); /*0x4c00fd*/
  v94 = v86 - v85; /*0x4c010b*/
  v40 = v92 - v32; /*0x4c011a*/
  v41 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v84[0] + 116))(v84[0]); /*0x4c011c*/
  v75 = v41; /*0x4c0121*/
  if ( v39 < 0 ) /*0x4c0125*/
  {
    v75 = -v41; /*0x4c0129*/
    v91 = -v91; /*0x4c0133*/
    v76 = 1; /*0x4c0137*/
  }
  v74 = 1; /*0x4c0141*/
  v42 = abs32(v39); /*0x4c014e*/
  if ( v40 < 0 ) /*0x4c0152*/
    v74 = -1; /*0x4c0154*/
  v93 = 2 * v42; /*0x4c0164*/
  v43 = abs32(v40); /*0x4c0168*/
  v44 = 2 * v94; /*0x4c0173*/
  v77 = 2 * v94; /*0x4c0179*/
  v70 = 2 * v43; /*0x4c017d*/
  if ( v43 <= v94 || v43 <= v42 ) /*0x4c0189*/
  {
    if ( v94 <= v42 ) /*0x4c0375*/
    {
      v62 = v44 - v42; /*0x4c0559*/
      v84[1] = 2 * v43 - v42; /*0x4c055f*/
      if ( v42 > 0 ) /*0x4c0563*/
      {
        v63 = MEMORY[0x87E8A4]; /*0x4c0569*/
        v73 = v42; /*0x4c056f*/
        v64 = MEMORY[0x887644]; /*0x4c0573*/
        v96 = 0; /*0x4c0579*/
        do /*0x4c0720*/
        {
          v65 = v99; /*0x4c0584*/
          v66 = (unsigned __int16)*v37; /*0x4c0590*/
          if ( (unsigned __int16)v99 < *v35 && *v37 ) /*0x4c058b*/
          {
            if ( v66 == 127 ) /*0x4c05a4*/
            {
              *(_WORD *)(v96 + v97) = a6; /*0x4c0627*/
            }
            else
            {
              v65 = v99; /*0x4c05f2*/
              *(_WORD *)(v96 + v97) = ((v83 * v66) >> 7 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4c060b*/
                                    | ((v80 * v66) >> 7 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                    | ((v79 * v66) >> 7 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
            }
            if ( a9 ) /*0x4c0634*/
              *v35 = v65; /*0x4c0636*/
            v64 = MEMORY[0x887644]; /*0x4c0639*/
            v63 = MEMORY[0x87E8A4]; /*0x4c063f*/
          }
          if ( v62 > 0 ) /*0x4c0647*/
          {
            ++v35; /*0x4c0650*/
            v96 += 2; /*0x4c0656*/
            if ( (unsigned int)v35 >= v64[7] ) /*0x4c0662*/
              v35 = (_WORD *)((char *)v35 - v64[8]); /*0x4c0664*/
            if ( (unsigned int)++v37 >= v63[7] ) /*0x4c066f*/
              v37 = (_WORD *)((char *)v37 - v63[8]); /*0x4c0671*/
            v62 -= v93; /*0x4c0674*/
          }
          v67 = v84[1]; /*0x4c0678*/
          if ( v84[1] > 0 ) /*0x4c067e*/
          {
            v99 = v74 + v65; /*0x4c0684*/
            v67 = v84[1] - v93; /*0x4c068f*/
          }
          v62 += v77; /*0x4c0695*/
          v84[1] = v70 + v67; /*0x4c06a4*/
          v97 += v75; /*0x4c06ae*/
          v35 += v91; /*0x4c06bc*/
          if ( v91 <= 0 ) /*0x4c06c0*/
          {
            v68 = v35; /*0x4c06cf*/
            if ( (unsigned int)v35 < v64[6] ) /*0x4c06d3*/
              v68 = (_WORD *)((char *)v35 + v64[8]); /*0x4c06d8*/
            v35 = v68; /*0x4c06da*/
          }
          else if ( (unsigned int)v35 >= v64[7] ) /*0x4c06c5*/
          {
            v35 = (_WORD *)((char *)v35 - v64[8]); /*0x4c06c7*/
          }
          v99 += v76; /*0x4c06e9*/
          v37 += v91; /*0x4c06f7*/
          if ( v91 <= 0 ) /*0x4c06fb*/
          {
            v69 = v37; /*0x4c070a*/
            if ( (unsigned int)v37 < v63[6] ) /*0x4c070e*/
              v69 = (_WORD *)((char *)v37 + v63[8]); /*0x4c0713*/
            v37 = v69; /*0x4c0715*/
          }
          else if ( (unsigned int)v37 >= v63[7] ) /*0x4c0700*/
          {
            v37 = (_WORD *)((char *)v37 - v63[8]); /*0x4c0702*/
          }
          --v73; /*0x4c071c*/
        }
        while ( v73 ); /*0x4c0720*/
      }
    }
    else
    {
      v54 = v93 - v94; /*0x4c038a*/
      v72 = 0; /*0x4c038e*/
      v78 = v70 - v94; /*0x4c0398*/
      if ( v94 > 0 ) /*0x4c039c*/
      {
        v55 = MEMORY[0x887644]; /*0x4c03a2*/
        v56 = MEMORY[0x87E8A4]; /*0x4c03a8*/
        do /*0x4c053c*/
        {
          v57 = (unsigned __int16)*v37; /*0x4c03bb*/
          if ( (unsigned __int16)v99 < *v35 && *v37 ) /*0x4c03b6*/
          {
            if ( v57 == 127 ) /*0x4c03cf*/
              LOWORD(v58) = a6; /*0x4c0423*/
            else
              v58 = ((v83 * v57) >> 7 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4c041f*/
                  | ((v80 * v57) >> 7 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                  | ((v79 * v57) >> 7 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
            *(_WORD *)(v97 + 2 * v72) = v58; /*0x4c0436*/
            if ( a9 ) /*0x4c0443*/
              *v35 = v99; /*0x4c044d*/
            v55 = MEMORY[0x887644]; /*0x4c0450*/
            v56 = MEMORY[0x87E8A4]; /*0x4c0456*/
          }
          if ( v54 > 0 ) /*0x4c045e*/
          {
            v97 += v75; /*0x4c046d*/
            v54 -= 2 * v94; /*0x4c047e*/
            v35 += v91; /*0x4c0487*/
            if ( v91 <= 0 ) /*0x4c048b*/
            {
              v59 = v35; /*0x4c049a*/
              if ( (unsigned int)v35 < v55[6] ) /*0x4c049c*/
                v59 = (_WORD *)((char *)v35 + v55[8]); /*0x4c04a1*/
              v35 = v59; /*0x4c04a3*/
            }
            else if ( (unsigned int)v35 >= v55[7] ) /*0x4c0490*/
            {
              v35 = (_WORD *)((char *)v35 - v55[8]); /*0x4c0492*/
            }
            v37 += v91; /*0x4c04a9*/
            v99 += v76; /*0x4c04ab*/
            if ( v91 <= 0 ) /*0x4c04b8*/
            {
              v60 = v37; /*0x4c04c7*/
              if ( (unsigned int)v37 < v56[6] ) /*0x4c04cb*/
                v60 = (_WORD *)((char *)v37 + v56[8]); /*0x4c04d0*/
              v37 = v60; /*0x4c04d2*/
            }
            else if ( (unsigned int)v37 >= v56[7] ) /*0x4c04bd*/
            {
              v37 = (_WORD *)((char *)v37 - v56[8]); /*0x4c04bf*/
            }
          }
          v61 = v78; /*0x4c04d4*/
          if ( v78 > 0 ) /*0x4c04da*/
          {
            v99 += v74; /*0x4c04e9*/
            v61 = v78 - 2 * v94; /*0x4c04fe*/
          }
          ++v35; /*0x4c0504*/
          v54 += v93; /*0x4c0507*/
          v78 = v70 + v61; /*0x4c050f*/
          if ( (unsigned int)v35 >= v55[7] ) /*0x4c0518*/
            v35 = (_WORD *)((char *)v35 - v55[8]); /*0x4c051a*/
          if ( (unsigned int)++v37 >= v56[7] ) /*0x4c0525*/
            v37 = (_WORD *)((char *)v37 - v56[8]); /*0x4c0527*/
          ++v72; /*0x4c0538*/
        }
        while ( v72 < v94 ); /*0x4c053c*/
      }
    }
  }
  else
  {
    v45 = v93 - v43; /*0x4c0195*/
    v71 = v44 - v43; /*0x4c019b*/
    if ( v43 > 0 ) /*0x4c019f*/
    {
      v46 = MEMORY[0x887644]; /*0x4c01a5*/
      v47 = MEMORY[0x87E8A4]; /*0x4c01ab*/
      v95 = 0; /*0x4c01b1*/
      v84[1] = v43; /*0x4c01bc*/
      do /*0x4c0358*/
      {
        v48 = (unsigned __int16)*v37; /*0x4c01cd*/
        if ( (unsigned __int16)v99 < *v35 && *v37 ) /*0x4c01c8*/
        {
          if ( v48 == 127 ) /*0x4c01e1*/
            LOWORD(v49) = a6; /*0x4c0235*/
          else
            v49 = ((v83 * v48) >> 7 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4c0231*/
                | ((v80 * v48) >> 7 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                | ((v79 * v48) >> 7 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
          *(_WORD *)(v95 + v97) = v49; /*0x4c024b*/
          if ( a9 ) /*0x4c0258*/
            *v35 = v99; /*0x4c0262*/
          v46 = MEMORY[0x887644]; /*0x4c0265*/
          v47 = MEMORY[0x87E8A4]; /*0x4c026b*/
        }
        if ( v45 > 0 ) /*0x4c0273*/
        {
          v45 -= v70; /*0x4c0286*/
          v50 = v91; /*0x4c0288*/
          v97 += v75; /*0x4c028c*/
          v35 += v91; /*0x4c0296*/
          if ( v91 <= 0 ) /*0x4c029a*/
          {
            v51 = v35; /*0x4c02a9*/
            if ( (unsigned int)v35 < v46[6] ) /*0x4c02ab*/
              v51 = (_WORD *)((char *)v35 + v46[8]); /*0x4c02b0*/
            v35 = v51; /*0x4c02b2*/
            v50 = v91; /*0x4c02b4*/
          }
          else if ( (unsigned int)v35 >= v46[7] ) /*0x4c029f*/
          {
            v35 = (_WORD *)((char *)v35 - v46[8]); /*0x4c02a1*/
          }
          v37 += v91; /*0x4c02b8*/
          if ( v50 <= 0 ) /*0x4c02bc*/
          {
            v52 = v37; /*0x4c02cb*/
            if ( (unsigned int)v37 < v47[6] ) /*0x4c02cf*/
              v52 = (_WORD *)((char *)v37 + v47[8]); /*0x4c02d4*/
            v37 = v52; /*0x4c02d6*/
          }
          else if ( (unsigned int)v37 >= v47[7] ) /*0x4c02c1*/
          {
            v37 = (_WORD *)((char *)v37 - v47[8]); /*0x4c02c3*/
          }
          v99 += v76; /*0x4c02e5*/
        }
        if ( v71 > 0 ) /*0x4c02f2*/
        {
          ++v35; /*0x4c02fb*/
          v95 += 2; /*0x4c0301*/
          if ( (unsigned int)v35 >= v46[7] ) /*0x4c030d*/
            v35 = (_WORD *)((char *)v35 - v46[8]); /*0x4c030f*/
          if ( (unsigned int)++v37 >= v47[7] ) /*0x4c031a*/
            v37 = (_WORD *)((char *)v37 - v47[8]); /*0x4c031c*/
          v71 -= v70; /*0x4c0323*/
        }
        v99 += v74; /*0x4c0338*/
        v71 += v77; /*0x4c0349*/
        v45 += v93; /*0x4c0351*/
        --v84[1]; /*0x4c0354*/
      }
      while ( v84[1] ); /*0x4c0358*/
    }
  }
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v84[0] + 96))(v84[0]); /*0x4c0364*/
  return 1; /*0x4c0367*/
}

