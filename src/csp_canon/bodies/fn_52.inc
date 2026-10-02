// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00520260  sub_520260  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_520260::sub_520260()
{
{
    int v2;
    int v4[3];
    v2 = this->M1492;
    if ( v2 && (unsigned char)this->M981 )
    *(char *)(v2 + 130) = 1;
    if ( this->M1492 )
    return 0;
    if ( this->Vf388() != 5 )
    return 0;
    v4[0] = this->M156;
    v4[1] = this->M160;
    v4[2] = this->M164;
    if ( Tactical::IsCellVisible(&DataGlobal_87F7E8, v4) )
    return 0;
    this->Vf928();
    this->Vf248();
    return 1;
}
}

// ==== BACKFILL 0x005202F0  ProcessTechnoSquadResponse  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { char Gap2Recv_5202F0::ProcessTechnoSquadResponse() {
{
      FootClass *v2;
      FootClass *v3;
      int *v4;
      FootClass *v5;
      int v6;
      int *v7;
      _DWORD *v8;
      _DWORD *v9;
      IUnknown *v10;
      void **attachedTag;
      _DWORD *v12;
      _DWORD *v14;
      _DWORD *v15;
      IUnknown *v16;
      bool v17;
      int v18;
      int *v19;
      int v20;
      int v21;
      int v22;
      int *v23;
      int v24;
      int v25;
      int v26;
      _DWORD *v27;
      IUnknown *v28;
      int *v29;
      int v30;
      int v31;
      int v32;
      _DWORD *v33;
      int v34;
      int v35;
      _DWORD *v36;
      int v37;
      int v38;
      int v39;
      _DWORD v40[3];
      _BYTE v41[12];
      _DWORD v42[3];

      if ( !BYTE1((this->M1728)[2].gattlingStage) )
        return 0;
      v2 = this->M1444;
      if ( !v2 )
        return 0;
      if ( (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v2->__pad_0 + 44))(v2) != 1 )
        return 0;
      v3 = this->M1444;
      if ( Object::IsAlliedWithObjectHouse(this->M540, (IUnknown *)v3) )
        return 0;
      v4 = (int *)(*(int (__thiscall **)(FootClass *, _DWORD *, FootClass **))(*(_DWORD *)v3->__pad_0 + 76))(v3, v40, this);
      v37 = *v4;
      v5 = *this;
      v38 = v4[1];
      v6 = v4[2];
      v7 = (int *)((int (__thiscall *)(FootClass **, _DWORD *))v5->ambientSoundController[3])(this, v40);
      v37 = *v7;
      v38 = v7[1];
      if ( (int)abs32(v6 - v7[2]) >= *(int *)&g_NetworkPlayerBuffer[7172]
        || (v8 = (_DWORD *)(*(int (__thiscall **)(FootClass *, _DWORD *))(*(_DWORD *)v3->__pad_0 + 72))(v3, v40),
            v9 = (_DWORD *)((int (__thiscall *)(FootClass **, _BYTE *))(*this)->ambientSoundController[3])(this, v41),
            v10 = Coord::Subtract(v42, (IUnknown *)(*v9 - *v8), (IUnknown *)(v9[1] - v8[1]), (IUnknown *)(v9[2] - v8[2])),
            v37 = v10->field_0,
            v38 = v10->field_4,
            v39 = v10->field_8,
            (int)Coord::Length(&v37) >= 128) )
      {
        v14 = (_DWORD *)(*(int (__thiscall **)(FootClass *, _DWORD *))(*(_DWORD *)v3->__pad_0 + 72))(v3, v42);
        v15 = (_DWORD *)((int (__thiscall *)(FootClass **, _BYTE *))(*this)->ambientSoundController[3])(this, v41);
        v16 = Coord::Subtract(v40, (IUnknown *)(*v15 - *v14), (IUnknown *)(v15[1] - v14[1]), (IUnknown *)(v15[2] - v14[2]));
        v37 = v16->field_0;
        v38 = v16->field_4;
        v39 = v16->field_8;
        v17 = (int)Coord::Length(&v37) < 512;
        v18 = (int)this->M1652;
        if ( v17 )
        {
          if ( !v18 )
            WinAPI::Wrapper(-2147467261);
          v19 = (int *)(*(int (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)(this->M1652)->__pad_0 + 20))(
                         this->M1652,
                         v42);
          v20 = *v19;
          v21 = v19[1];
          v22 = v19[2];
          if ( v20 != *(_DWORD *)&g_NetworkPlayerBuffer[7108]
            || v21 != *(_DWORD *)&g_NetworkPlayerBuffer[7112]
            || v22 != *(_DWORD *)&g_NetworkPlayerBuffer[7116] )
          {
            if ( !this->M1652 )
              WinAPI::Wrapper(-2147467261);
            v23 = (int *)(*(int (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)(this->M1652)->__pad_0 + 20))(
                           this->M1652,
                           v42);
            v24 = *v23;
            v25 = v23[1];
            v26 = *(_DWORD *)v3->__pad_0;
            v39 = v23[2];
            v27 = (_DWORD *)(*(int (__thiscall **)(FootClass *, _BYTE *))(v26 + 72))(v3, v41);
            v28 = Coord::Subtract(v40, (IUnknown *)(*v27 - v24), (IUnknown *)(v27[1] - v25), (IUnknown *)(v27[2] - v39));
            v37 = v28->field_0;
            v38 = v28->field_4;
            v39 = v28->field_8;
            if ( (int)Coord::Length(&v37) <= 128 )
              return 0;
          }
          ((void (__thiscall *)(FootClass **, _DWORD, int))(*this)->audioController4[1])(this, this->M1444, 1);
        }
        else
        {
          if ( !v18 )
            WinAPI::Wrapper(-2147467261);
          v29 = (int *)(*(int (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)(this->M1652)->__pad_0 + 20))(
                         this->M1652,
                         v42);
          v30 = *v29;
          v31 = v29[1];
          v32 = v29[2];
          if ( v30 != *(_DWORD *)&g_NetworkPlayerBuffer[7108]
            || v31 != *(_DWORD *)&g_NetworkPlayerBuffer[7112]
            || v32 != *(_DWORD *)&g_NetworkPlayerBuffer[7116] )
          {
            if ( !this->M1652 )
              WinAPI::Wrapper(-2147467261);
            v33 = (_DWORD *)(*(int (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)(this->M1652)->__pad_0 + 20))(
                              this->M1652,
                              v42);
            v34 = *v33 / 256;
            v35 = v33[1] / 256;
            v36 = (_DWORD *)(*(int (__thiscall **)(FootClass *, _BYTE *, FootClass **))(*(_DWORD *)v3->__pad_0 + 76))(
                              v3,
                              v41,
                              this);
            if ( (unsigned __int16)(*v36 / 256) == (_WORD)v34 && (unsigned __int16)(v36[1] / 256) == (_WORD)v35 )
              return 0;
          }
        }
        ((void (__thiscall *)(FootClass **, _DWORD, int))(*this)->audioController4[1])(this, this->M1444, 1);
        return 0;
      }
      attachedTag = (void **)v3->attachedTag;
      if ( attachedTag )
        TeamClass::Update_0(attachedTag, 1, (AbstractClass *)this, *(IUnknown **)&g_NetworkPlayerBuffer[7076], 0, 0);
      (*(void (__thiscall **)(FootClass *, int))(*(_DWORD *)v3->__pad_0 + 628))(v3, 3);
      (*(void (__thiscall **)(FootClass *, _DWORD))(*(_DWORD *)v3->__pad_0 + 220))(v3, 0);
      v12 = this->M52;
      if ( v12 )
      {
        if ( TechnoClass::HasAnyMission(v12) )
          ObjectClass::SetReference(v3, (int)this->M52);
      }
      (*(void (__thiscall **)(FootClass *, _DWORD, int))(*(_DWORD *)v3->__pad_0 + 980))(v3, this->M540, 1);
      v3->waveEffect = (void *)(this->M1728)[2].spawnStatus;
      ((void (__thiscall *)(FootClass **))(*this)->passengers[1])(this);
      return 1;
}
} }

// ==== BACKFILL 0x00521320  InfantryClass::GetIdleTimer  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryClass::GetIdleTimer()
{
{
    int v2;
    TechnoClass* v16;
    int* v18;
    int v19;
    int v20;
    int* v21;
    int v22;
    int v23;
    int v9;
    __int16* v5;
    __int16* v10;
    void* v6;
    unsigned int NumberOfActiveVirtualProcessors;
    int v8;
    void* v11;
    char* MissionControl;
    int v13;
    char* v12;
    char* v14;
    int v15;
    int v25;
    unsigned char v26[4];
    unsigned char v27[12];
    unsigned char v28[12];

    v2 = this->SequenceAnim;
    if ( v2 != 27 && v2 != 28 && v2 != 29 && v2 != 30 )
    {
        v16 = this->GetTarget();
        if ( !(unsigned __int8)House::IsCurrentPlayer(v16) )
        {
            if ( this->Type->Deployer )
            {
                if ( this->Type->DeployFire )
                {
                    if ( this->Type->UndeployDelay <= -1
                      && !this->Archive
                      && this->missionStartTime + *(_DWORD *)(*((_DWORD *)g_RulesClass_Instance + 908) + 4 * this->owner->memberAtOffset388) < dword_A8ED54 )
                    {
                        if ( !this->focus
                          || (v18 = this->GetExitCoords(v27),
                              v19 = *v18 / 256,
                              v20 = v18[1] / 256,
                              v21 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this->focus + 72))(this->focus, v28),
                              v22 = *v21,
                              v23 = v21[1] / 256,
                              (unsigned __int16)(v22 / 256) == (_WORD)v19)
                          && (_WORD)v23 == (_WORD)v20 )
                        {
                            if ( !this->Type->memberAtOffset3383 )
                            {
                                if ( !this->Locomotor )
                                    WinAPI::Wrapper(-2147467261);
                                if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 16))((_DWORD)this->Locomotor) )
                                {
                                    if ( !this->Locomotor )
                                        WinAPI::Wrapper(-2147467261);
                                    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 72))((_DWORD)this->Locomotor);
                                    this->ShouldDeploy = 1;
                                    MissionControl = MissionClass::GetMissionControl(this);
                                    v25 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
                                    return v25 + Random::Range((int *)g_ScenarioClass_Instance + 134, 0, 2);
                                }
                                else
                                {
                                    this->ProcessDeployAction(27, 0, 0);
                                    return *(int *)((char *)this->Type->Sequence + 976);
                                }
                            }
                        }
                    }
                }
            }
        }
        return -1;
    }
    if ( this->Type->UndeployDelay > -1 )
    {
        this->ProcessDeployAction(31, 0, 0);
        return *(int *)((char *)this->Type->Sequence + 1120);
    }
    if ( !this->Type->DeployFire )
        return -1;
    if ( this->Type->memberAtOffset3383 )
    {
        v5 = (__int16 *)this->GetCellCoords_Alt((CellStruct *)v26);
        v6 = CellCoord::To_CellObj((int *)DataGlobal_87F7E8, v5);
        NumberOfActiveVirtualProcessors = _GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ(v6);
        v8 = *(int *)((char *)this->SelectWeaponSlot(1) + 344);
        if ( !NumberOfActiveVirtualProcessors || CellClass::GetOccupiedRatio(NumberOfActiveVirtualProcessors) < v8 / 3 )
        {
            v9 = *(int *)this;
            v10 = (__int16 *)this->GetCellCoords_Alt((CellStruct *)v26);
            v11 = CellCoord::To_CellObj((int *)DataGlobal_87F7E8, v10);
            (*(void (__thiscall **)(int *, void *))((int *)v9 + 968))(this, v11);
            if ( !this->GetFireError((int *)this->target, 1, 1) )
            {
                this->FireWeaponWithCleanup((int)this->target, 1);
                this->AssignTarget_SyncLog(0);
                this->ProcessDeployAction(29, 0, 0);
                return *(int *)((char *)this->Type->Sequence + 1048);
            }
            this->AssignTarget_SyncLog(0);
        }
        v12 = MissionClass::GetMissionControl(this);
        v13 = Math::RoundToInt(*((double *)v12 + 2) * 900.0);
        return v13 + Random::Range((int *)g_ScenarioClass_Instance + 134, 10, 20);
    }
    else
    {
        this->FindPathToBuilding();
        v14 = MissionClass::GetMissionControl(this);
        v15 = Math::RoundToInt(*((double *)v14 + 2) * 900.0);
        return v15 + Random::Range((int *)g_ScenarioClass_Instance + 134, 0, 2);
    }
}

/* ASM:
sub     esp, 1Ch
push    ebx
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      short loc_521346
cmp     eax, 1Ch
jz      short loc_521346
cmp     eax, 1Dh
jz      short loc_521346
cmp     eax, 1Eh
jnz     loc_5214F7

loc_521346:                             ; CODE XREF: InfantryClass__GetIdleTimer+11↑j
; InfantryClass__GetIdleTimer+16↑j ...
mov     eax, [esi+6C0h]
cmp     dword ptr [eax+6C4h], 0FFFFFFFFh
jle     short loc_52137E
mov     eax, [esi]
push    0
push    0
push    1Fh
mov     ecx, esi
call    dword ptr [eax+558h]
mov     ecx, [esi+6C0h]
pop     edi
pop     esi
pop     ebx
mov     edx, [ecx+0E3Ch]
mov     eax, [edx+460h]
add     esp, 1Ch
retn
; ---------------------------------------------------------------------------

loc_52137E:                             ; CODE XREF: InfantryClass__GetIdleTimer+33↑j
mov     cl, [eax+6ACh]
test    cl, cl
jz      loc_5216B6
mov     cl, [eax+0D37h]
test    cl, cl
jz      loc_5214B9
mov     eax, [esi]
lea     ecx, [esp+28h+var_1C]
push    ecx
mov     ecx, esi
call    dword ptr [eax+1B8h]
push    eax
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, eax        ; this
call    ?GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ
mov     edx, [esi]
push    1
mov     ecx, esi
mov     edi, eax
call    dword ptr [edx+3F8h]
mov     eax, [eax]
mov     ecx, [eax+158h]
mov     eax, 55555556h
imul    ecx
mov     eax, edx
shr     eax, 1Fh
add     edx, eax
test    edi, edi
mov     ebx, edx
jz      short loc_5213F4
mov     ecx, edi
call    CellClass__GetOccupiedRatio
cmp     eax, ebx
jge     loc_521484

loc_5213F4:                             ; CODE XREF: InfantryClass__GetIdleTimer+C3↑j
mov     edi, [esi]
lea     ecx, [esp+28h+var_1C]
push    ecx
mov     ecx, esi
call    dword ptr [edi+1B8h]
push    eax
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
push    eax
mov     ecx, esi
call    dword ptr [edi+3C8h]
mov     eax, [esi+2B4h]
mov     edx, [esi]
push    1
push    1
push    eax
mov     ecx, esi
call    dword ptr [edx+3C0h]
test    eax, eax
jnz     short loc_521478
mov     eax, [esi+2B4h]
mov     edx, [esi]
push    1
push    eax
mov     ecx, esi
call    dword ptr [edx+3CCh]
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+3C8h]
mov     eax, [esi]
push    0
push    0
push    1Dh
mov     ecx, esi
call    dword ptr [eax+558h]
mov     ecx, [esi+6C0h]
pop     edi
pop     esi
pop     ebx
mov     edx, [ecx+0E3Ch]
mov     eax, [edx+418h]
add     esp, 1Ch
retn
; ---------------------------------------------------------------------------

loc_521478:                             ; CODE XREF: InfantryClass__GetIdleTimer+10E↑j
mov     eax, [esi]
push    0
mov     ecx, esi
call    dword ptr [eax+3C8h]

loc_521484:                             ; CODE XREF: InfantryClass__GetIdleTimer+CE↑j
mov     ecx, esi
call    MissionClass__GetMissionControl
fld     qword ptr [eax+10h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
mov     ecx, ds:0A8B230h
push    14h
push    0Ah
add     ecx, 218h
mov     esi, eax
call    Random__Range
add     eax, esi
pop     edi
pop     esi
pop     ebx
add     esp, 1Ch
retn
; ---------------------------------------------------------------------------

loc_5214B9:                             ; CODE XREF: InfantryClass__GetIdleTimer+74↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+428h]
mov     ecx, esi
call    MissionClass__GetMissionControl
fld     qword ptr [eax+10h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
mov     esi, eax
mov     eax, ds:0A8B230h
push    2
push    0
lea     ecx, [eax+218h]
call    Random__Range
add     eax, esi
pop     edi
pop     esi
pop     ebx
add     esp, 1Ch
retn
; ---------------------------------------------------------------------------

loc_5214F7:                             ; CODE XREF: InfantryClass__GetIdleTimer+20↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+3Ch]
mov     ecx, eax        ; this
call    House__IsCurrentPlayer
test    al, al
jnz     loc_5216B6
mov     eax, [esi+6C0h]
mov     cl, [eax+0EC8h]
test    cl, cl
jz      loc_5216B6
mov     cl, [eax+6ACh]
test    cl, cl
jz      loc_5216B6
cmp     dword ptr [eax+6C4h], 0FFFFFFFFh
jg      loc_5216B6
mov     eax, [esi+5A4h]
test    eax, eax
jnz     loc_5216B6
mov     eax, [esi+21Ch]
mov     edx, ds:8871E0h
mov     ecx, [eax+184h]
mov     eax, [edx+0E30h]
mov     edx, [esi+0C0h]
mov     ecx, [eax+ecx*4]
mov     eax, dword_A8ED54+30h
add     ecx, edx
cmp     ecx, eax
jge     loc_5216B6
mov     eax, [esi+218h]
test    eax, eax
jz      short loc_5215F9
mov     edx, [esi]
lea     eax, [esp+28h+var_18]
push    ebp
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
mov     edi, eax
mov     eax, [ecx+4]
mov     ecx, [esi+218h]
cdq
and     edx, 0FFh
add     eax, edx
mov     edx, [ecx]
mov     ebx, eax
lea     eax, [esp+2Ch+var_C]
push    eax
sar     edi, 8
sar     ebx, 8
call    dword ptr [edx+48h]
mov     ebp, eax
mov     eax, [ebp+0]
cdq
and     edx, 0FFh
add     eax, edx
mov     ecx, eax
mov     eax, [ebp+4]
cdq
and     edx, 0FFh
pop     ebp
add     eax, edx
sar     ecx, 8
sar     eax, 8
cmp     cx, di
jnz     loc_5216B6
cmp     ax, bx
jnz     loc_5216B6

loc_5215F9:                             ; CODE XREF: InfantryClass__GetIdleTimer+262↑j
mov     ecx, [esi+6C0h]
mov     al, [ecx+0D37h]
test    al, al
jnz     loc_5216B6
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_521621
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_521621:                             ; CODE XREF: InfantryClass__GetIdleTimer+2F5↑j
mov     eax, [esi+674h]
push    eax
mov     edx, [eax]
call    dword ptr [edx+10h]
test    al, al
jnz     short loc_52165A
mov     eax, [esi]
push    0
push    0
push    1Bh
mov     ecx, esi
call    dword ptr [eax+558h]
mov     ecx, [esi+6C0h]
pop     edi
pop     esi
pop     ebx
mov     edx, [ecx+0E3Ch]
mov     eax, [edx+3D0h]
add     esp, 1Ch
retn
; ---------------------------------------------------------------------------

loc_52165A:                             ; CODE XREF: InfantryClass__GetIdleTimer+30F↑j
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_52166E
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_52166E:                             ; CODE XREF: InfantryClass__GetIdleTimer+342↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+48h]
mov     ecx, esi
mov     byte ptr [esi+6E4h], 1
call    MissionClass__GetMissionControl
fld     qword ptr [eax+10h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
mov     edx, ds:0A8B230h
push    2
push    0
mov     esi, eax
lea     ecx, [edx+218h]
call    Random__Range
add     eax, esi
pop     edi
pop     esi
pop     ebx
add     esp, 1Ch
retn
; ---------------------------------------------------------------------------

loc_5216B6:                             ; CODE XREF: InfantryClass__GetIdleTimer+66↑j
; InfantryClass__GetIdleTimer+1E7↑j ...
pop     edi
pop     esi
or      eax, 0FFFFFFFFh
pop     ebx
add     esp, 1Ch
retn
*/
}

// ==== BACKFILL 0x005216D0  InfantryClass::CanMoveFreely  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
bool InfantryClass::CanMoveFreely()
{
    char result;

    result = TechnoClass::IsTimerExpired(this);
    if ( result )
    {
        if ( !this->Locomotor )
            WinAPI::Wrapper(-2147467261);
        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 16))((_DWORD)this->Locomotor) )
        {
            return 0;
        }
        else if ( this->Crawling )
        {
            return 0;
        }
        else if ( this->unknownBool68D )
        {
            return 0;
        }
        else
        {
            int v3 = (int)this->SequenceAnim;
            result = v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 && (v3 < 2 || v3 == 16);
            return result;
        }
    }
    return result;
}

// ==== BACKFILL 0x00521760  InfantryClass::ParachuteTo  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryClass::ParachuteTo()
{
    if (!(unsigned __int8)ObjectClass::ParachuteDrop(this))
        return 0;
    if ((unsigned __int8)this->owner->IsCurrentPlayer())
        this->queueMission(Mission::Guard, false);
    else
        this->queueMission(Mission::Hunt, false);
    this->ProcessDeployAction(33, true, false);
    return 1;
}

// ==== BACKFILL 0x00521C90  InfantryClass::PowerDrainUpdate  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryClass::PowerDrainUpdate(int a2)
{
    int v3;
    int v4;

    FootClass::BeginPowerUpdate(this, a2);
    Power::TimerProcess(a2, (int)this->SequenceAnim);
    v3 = this->InfantryClass_field_timer_6C8.StartTime;
    v4 = this->panicTimerTimeLeft;
    if ( v3 != -1 )
    {
        if ( g_CurrentFrame - v3 >= v4 )
            v4 = 0;
        else
            v4 -= g_CurrentFrame - v3;
    }
    Power::TimerProcess(a2, v4);
    Power::TimerProcess(a2, (int)this->PanicDurationLeft);
    Power::FlagProcess(a2, this->Technician);
    Power::FlagProcess(a2, this->InfantryClass_field_bool_6DA);
    Power::FlagProcess(a2, this->Crawling);
    Power::FlagProcess(a2, this->InfantryClass_field_bool_6DC);
    return Power::FlagProcess(a2, this->InfantryClass_field_bool_6DD);

/* ASM:
push    esi
push    edi
mov     edi, [esp+8+arg_0]
mov     esi, ecx
push    edi
call    FootClass__BeginPowerUpdate
mov     eax, [esi+6C4h]
mov     ecx, edi
push    eax
call    Power__TimerProcess
mov     edx, [esi+6C8h]
mov     eax, [esi+6D0h]
cmp     edx, 0FFFFFFFFh
jz      short loc_521CCF
mov     ecx, dword_A8ED54+30h
sub     ecx, edx
cmp     ecx, eax
jge     short loc_521CCD
sub     eax, ecx
jmp     short loc_521CCF
; ---------------------------------------------------------------------------

loc_521CCD:                             ; CODE XREF: InfantryClass__PowerDrainUpdate+37↑j
xor     eax, eax

loc_521CCF:                             ; CODE XREF: InfantryClass__PowerDrainUpdate+2B↑j
; InfantryClass__PowerDrainUpdate+3B↑j
push    eax
mov     ecx, edi
call    Power__TimerProcess
mov     ecx, [esi+6D4h]
push    ecx
mov     ecx, edi
call    Power__TimerProcess
mov     dl, [esi+6D9h]
mov     ecx, edi
push    edx
call    Power__FlagProcess
mov     al, [esi+6DAh]
mov     ecx, edi
push    eax
call    Power__FlagProcess
mov     cl, [esi+6DBh]
push    ecx
mov     ecx, edi
call    Power__FlagProcess
mov     dl, [esi+6DCh]
mov     ecx, edi
push    edx
call    Power__FlagProcess
mov     al, [esi+6DDh]
mov     ecx, edi
push    eax
call    Power__FlagProcess
pop     edi
pop     esi
retn    4
*/
}

// ==== BACKFILL 0x005220F0  InfantryClass::SetPermanentBerzerk  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
void InfantryClass::SetPermanentBerzerk()
{
PermanentBerzerk = true;
}

// ==== BACKFILL 0x00522340  InfantryClass::CalculateApproachPath  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
void InfantryClass::CalculateApproachPath(char a2)
{
    int v3;
    TechnoClass* v5;
    InfantryTypeClass* v6;
    int DeployFireWeapon;
    char v8;
    WeaponTypeClass* v9;
    int v10;

    if ( this->target )
    {
        v3 = this->SequenceAnim;
        if ( v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 )
        {
            FootClass::CalculateApproachPath(this, 0);
            return;
        }
        v5 = this->GetTarget();
        if ( !House::IsCurrentPlayer(v5) )
        {
            v6 = this->Type;
            if ( v6->Deployer )
            {
                if ( v6->DeployFire )
                {
                    DeployFireWeapon = v6->DeployFireWeapon;
                    v8 = this->ValidateTarget(this->target, DeployFireWeapon);
                    v9 = this->SelectWeaponSlot(DeployFireWeapon)->WeaponType;
                    if ( v9 )
                    {
                        if ( !v9->AreaFire )
                        {
                            v10 = this->SequenceAnim;
                            if ( v10 == 27 || v10 == 28 || v10 == 29 || v10 == 30 )
                            {
                                if ( !v8 && !a2 )
                                {
                                    this->ProcessDeployAction(31, 0, 0);
                                    return;
                                }
                            }
                            else if ( v8 && !a2 )
                            {
                                if ( !this->Locomotor )
                                    WinAPI::Wrapper(-2147467261);
                                if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 16))((_DWORD)this->Locomotor) )
                                {
                                    this->ProcessDeployAction(27, 0, 0);
                                    return;
                                }
                                if ( !this->Locomotor )
                                    WinAPI::Wrapper(-2147467261);
                                (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 72))((_DWORD)this->Locomotor);
                                this->ShouldDeploy = 1;
                                MissionClass::GetMissionControl(this);
                                Random::Range((int*)g_ScenarioClass_Instance + 134, 0, 2);
                            }
                        }
                    }
                }
            }
        }
    }
    return;

/* ASM:
push    ebx
push    esi
mov     esi, ecx
mov     eax, [esi+2B4h]
test    eax, eax
jz      loc_5224C2
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      short loc_522378
cmp     eax, 1Ch
jz      short loc_522378
cmp     eax, 1Dh
jz      short loc_522378
cmp     eax, 1Eh
jz      short loc_522378
push    0
call    FootClass__CalculateApproachPath
pop     esi
pop     ebx
retn    4
; ---------------------------------------------------------------------------

loc_522378:                             ; CODE XREF: InfantryClass__CalculateApproachPath+1B↑j
; InfantryClass__CalculateApproachPath+20↑j ...
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+3Ch]
mov     ecx, eax        ; this
call    House__IsCurrentPlayer
test    al, al
jnz     loc_5224C2
mov     eax, [esi+6C0h]
mov     cl, [eax+0EC8h]
test    cl, cl
jz      loc_5224C2
mov     cl, [eax+6ACh]
test    cl, cl
jz      loc_5224C2
mov     edx, [esi]
push    edi
mov     edi, [eax+6A8h]
mov     eax, [esi+2B4h]
push    edi
push    eax
mov     ecx, esi
call    dword ptr [edx+3A8h]
mov     edx, [esi]
push    edi
mov     ecx, esi
mov     bl, al
call    dword ptr [edx+3F8h]
mov     eax, [eax]
pop     edi
test    eax, eax
jz      loc_5224C2
mov     cl, [eax+150h]
test    cl, cl
jnz     loc_5224C2
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      short loc_522409
cmp     eax, 1Ch
jz      short loc_522409
cmp     eax, 1Dh
jz      short loc_522409
cmp     eax, 1Eh
jnz     short loc_522434

loc_522409:                             ; CODE XREF: InfantryClass__CalculateApproachPath+B8↑j
; InfantryClass__CalculateApproachPath+BD↑j ...
test    bl, bl
jnz     loc_5224C2
mov     al, [esp+8+arg_0]
test    al, al
jnz     loc_5224C2
mov     eax, [esi]
push    0
push    0
push    1Fh
mov     ecx, esi
call    dword ptr [eax+558h]
pop     esi
xor     eax, eax
pop     ebx
retn    4
; ---------------------------------------------------------------------------

loc_522434:                             ; CODE XREF: InfantryClass__CalculateApproachPath+C7↑j
test    bl, bl
jz      loc_5224C2
mov     al, [esp+8+arg_0]
test    al, al
jnz     short loc_5224C2
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_522458
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_522458:                             ; CODE XREF: InfantryClass__CalculateApproachPath+10C↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jnz     short loc_52247F
mov     edx, [esi]
push    0
push    0
push    1Bh
mov     ecx, esi
call    dword ptr [edx+558h]
pop     esi
xor     eax, eax
pop     ebx
retn    4
; ---------------------------------------------------------------------------

loc_52247F:                             ; CODE XREF: InfantryClass__CalculateApproachPath+126↑j
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_522493
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_522493:                             ; CODE XREF: InfantryClass__CalculateApproachPath+147↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+48h]
mov     ecx, esi
mov     byte ptr [esi+6E4h], 1
call    MissionClass__GetMissionControl
mov     edx, ds:0A8B230h
push    2
push    0
lea     ecx, [edx+218h]
call    Random__Range

loc_5224C2:                             ; CODE XREF: InfantryClass__CalculateApproachPath+C↑j
; InfantryClass__CalculateApproachPath+48↑j ...
pop     esi
xor     eax, eax
pop     ebx
retn    4
*/
}

// ==== BACKFILL 0x005224D0  InfantryClass::IsBridgeRepairEnabled  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
bool InfantryClass::IsBridgeRepairEnabled()
// 0x5224d0
{
return this->Type->Engineer;

/* ASM:
mov     eax, [ecx+6C0h]
mov     al, [eax+0EC3h]
retn
*/
}

// ==== BACKFILL 0x005224E0  TechnoClass::GetTypeFlag  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::GetTypeFlag() const {
return this->q6C0->qEC8;
}

// ==== BACKFILL 0x005224F0  TechnoClass::updateTurretRotation  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { bool TechnoClass::updateTurretRotation() {
{
    return *(int *)(*(this + 432) + 1732) > -1;
}
} } }

// ==== BACKFILL 0x00522510  TechnoClass::IsMission27to30  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::IsMission27to30() const {
int v1 = this->q6C4;
return v1 == 27 || v1 == 28 || v1 == 29 || v1 == 30;
}

// ==== BACKFILL 0x00522540  sub_522540  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_522540::sub_522540()
{
{
    return *(char *)(this->M1728 + 1708);
}
}

// ==== BACKFILL 0x00522640  InfantryClass::GetProductionLimit  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryClass::GetProductionLimit()
{
    int result;
    int v4;

    if ( (unsigned __int8)HouseClass::IsAlliedWith(this->owner, HouseClass_Player) && !a2 )
        return (int)this->Type;
    result = (int)this->disguiseAsType;
    if ( !result )
    {
        if ( !HouseClass_Player )
            return *(_DWORD *)((char *)g_RulesClass_Instance + 3416);
        v4 = *(_DWORD *)((char *)HouseClass_Player + 488);
        if ( !v4 )
            return *(_DWORD *)((char *)g_RulesClass_Instance + 3416);
        if ( v4 == 1 )
            return *(_DWORD *)((char *)g_RulesClass_Instance + 3420);
        else
            return *(_DWORD *)((char *)g_RulesClass_Instance + 3424);
    }
    return result;

/* ASM:
mov     eax, ds:0A83D4Ch
push    esi
mov     esi, ecx
push    eax             ; other
mov     ecx, [esi+21Ch] ; this
call    HouseClass__IsAlliedWith
test    al, al
jz      short loc_52266A
mov     al, [esp+4+arg_0]
test    al, al
jnz     short loc_52266A
mov     eax, [esi+6C0h]
pop     esi
retn    4
; ---------------------------------------------------------------------------

loc_52266A:                             ; CODE XREF: InfantryClass__GetProductionLimit+16↑j
; InfantryClass__GetProductionLimit+1E↑j
mov     eax, [esi+518h]
test    eax, eax
jnz     short loc_5226B7
mov     eax, ds:0A83D4Ch
test    eax, eax
jz      short loc_5226AC
mov     eax, [eax+1E8h]
test    eax, eax
jnz     short loc_522697
mov     ecx, ds:8871E0h
pop     esi
mov     eax, [ecx+0D58h]
retn    4
; ---------------------------------------------------------------------------

loc_522697:                             ; CODE XREF: InfantryClass__GetProductionLimit+45↑j
cmp     eax, 1
jnz     short loc_5226AC
mov     edx, ds:8871E0h
pop     esi
mov     eax, [edx+0D5Ch]
retn    4
; ---------------------------------------------------------------------------

loc_5226AC:                             ; CODE XREF: InfantryClass__GetProductionLimit+3B↑j
; InfantryClass__GetProductionLimit+5A↑j
mov     eax, ds:8871E0h
mov     eax, [eax+0D60h]

loc_5226B7:                             ; CODE XREF: InfantryClass__GetProductionLimit+32↑j
pop     esi
retn    4
*/
}

// ==== BACKFILL 0x00522780  InfantryClass::InitProductionLimits  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryClass::InitProductionLimits()
{
    int result;
    InfantryTypeClass *v1;
    HouseClass *v2;
    int v3;
    void *v20;

    v1 = this->Type;
    result = (int)v1;
    if (*(_BYTE *)((char *)v1 + 3376))
    {
        v2 = this->owner;
        this->isDisguisedFlag = 1;
        this->isDisguisedFlag_as_house = v2;
        v3 = *(_DWORD *)((char *)v2 + 488);
        if (v3)
        {
            if (v3 == 1)
                v20 = *(void **)((char *)g_RulesClass_Instance + 3420);
            else
                v20 = *(void **)((char *)g_RulesClass_Instance + 3424);
            this->disguiseAsType = v20;
            result = (int)v20;
        }
        else
        {
            v20 = *(void **)((char *)g_RulesClass_Instance + 3416);
            this->disguiseAsType = v20;
            result = (int)v20;
        }
    }
    else
    {
        this->isDisguisedFlag = 0;
    }
    return result;
}

// ==== BACKFILL 0x005227F0  InfantryClass::CanAttackTarget  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
bool InfantryClass::CanAttackTarget(HouseClass* other)
{
    bool result;
    CoordStruct v9;
    int* v3;
    short v8[2];
    CellClass* v4;
    HouseClass* v5;

    result = false;
    if ( this->IsDisguised() )
    {
        v3 = (int*)this->GetExitCoords(&v9);
        v8[0] = (short)(v3[0] / 256);
        v8[1] = (short)(v3[1] / 256);
        v4 = (CellClass*)CellCoord::To_CellObj((int*)DataGlobal_87F7E8, v8);
        if ( !House::IsAlliedWith(this->owner, other)
          && !HouseClass::HasType(v4, other->relatedTagsCount) )
        {
            v5 = this->disguisedAsHouse;
            if ( v5 == other || !v5 || House::IsAlliedWith(other, v5) )
                return true;
        }
    }
    return result;
}

// ==== BACKFILL 0x00522A50  nullsub_146  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_146(int a1)
{
  ;
}

// ==== BACKFILL 0x00522CB0  TechnoClass::IsEnteringOrCapturingStructure  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::IsEnteringOrCapturingStructure() const {
int missionState = this->q6C4;
return missionState == 11
    || missionState == 12
    || missionState == 13
    || missionState == 14
    || missionState == 15
    || missionState == 34
    || missionState == 35
    || missionState == 36
    || missionState == 20
    || missionState == 21;
}

// ==== BACKFILL 0x005232F0  InfantryClass::StubReturn1776  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryClass::StubReturn1776()
{
    // IDA: 0x5232F0 — vtable[12] stub, returns 1776
    return 1776;
}

// ==== BACKFILL 0x00523340  InfantryClass::StubReturn15  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryClass::StubReturn15()
{
    // IDA: 0x523340 — vtable[11] stub, returns 15
    return 15;
}

// ==== BACKFILL 0x00523370  InfantryClass::checkBridgeClearance  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* InfantryClass::checkBridgeClearance(int a2) {
{
    int v3;
    v3 = *(void**)this;
    if ( *(void**)this != a2 )
  {
    *(void**)this = a2;
    if ( a2 )
    (*(void (__stdcall **)(int))(*(int *)(a2) + 4))(a2);
    if ( v3 )
    (*(void (__stdcall **)(int))(*(int *)(v3) + 8))(v3);
  }
    return this;
}
} }

// ==== BACKFILL 0x005233A0  COMObject::SwapReference  cls=COMObject  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* COMObject::SwapReference(int a2) {
{
    int v3;
    v3 = *(void**)this;
    if ( *(void**)this != a2 )
  {
    *(void**)this = a2;
    if ( a2 )
    (*(void (__stdcall **)(int))(*(int *)(a2) + 4))(a2);
    if ( v3 )
    (*(void (__stdcall **)(int))(*(int *)(v3) + 8))(v3);
  }
    return this;
}
} }

// ==== BACKFILL 0x005239D0  InfantryTypeClass::DTOR  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryTypeClass::DTOR()
{
    // 4x vftable installs (this+0/4/8/12): compiler-generated vptr writes --
    // exempted on the IDA side (D1-6 #128 trivial-vocabulary, G22).
    AbstractClass::AnnounceExpiredPointer(this, 1);
    InfantryTypeClass* v7 = this;
    int v2 = g_InfantryTypes.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < g_InfantryTypes_Count )
    {
        --g_InfantryTypes_Count;
        for ( ; v2 < g_InfantryTypes_Count ; *(g_InfantryTypes_Items + v2 - 1) = *(g_InfantryTypes_Items + v2) )
        {
            ++v2;
        }
    }
    OperatorDelete(this->RecordTable);
    this->RecordTable = nullptr;
    void* v3 = this->VoiceComment_Items;
    if ( v3 && this->VoiceComment_FlagByte )
    {
        OperatorDelete(v3);
        this->VoiceComment_Items = nullptr;
    }
    this->VoiceComment_FlagByte = 0;
    this->VoiceComment_Capacity = 0;
    void* v4 = this->DeathAnims_Items;
    if ( v4 && this->DeathAnims_FlagByte )
    {
        OperatorDelete(v4);
        this->DeathAnims_Items = nullptr;
    }
    this->DeathAnims_FlagByte = 0;
    this->DeathAnims_Capacity = 0;
    void* v5 = this->DeadBodies_Items;
    if ( v5 && this->DeadBodies_FlagByte )
    {
        OperatorDelete(v5);
        this->DeadBodies_Items = nullptr;
    }
    this->DeadBodies_FlagByte = 0;
    this->DeadBodies_Capacity = 0;
    return TechnoTypeClass::DTOR(this);
}

// ==== BACKFILL 0x00523B10  InfantryTypeClass::ConstructInfantry  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
InfantryClass * InfantryTypeClass::ConstructInfantry(AbstractClass * ppv)
{
{
    int v3;
    v3 = __2_YAPAXI_Z(0x6F0u);
    if ( v3 )
    return (InfantryClass *)InfantryClass::Construct(v3, this, ppv);
    else
    return 0;
}
}

// ==== BACKFILL 0x00523C20  InfantryTypeClass::GetDimensions  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
int * InfantryTypeClass::GetDimensions(int a1)
{
{
    if ( (DataGlobal_A8F2C8 & 1) == 0 )
  {
    DataGlobal_A8F2C8 |= 1u;
    DataGlobal_A8F28C = 0;
    DataGlobal_A8F290 = 2147450879;
    atexit(nullsub_147);
  }
    return &DataGlobal_A8F28C;
}
}

// ==== BACKFILL 0x00523C90  Factory::FindExitCellByName  cls=Factory  sig=csp  renamed_refs=0  residual=- ====
int Factory::FindExitCellByName()
{
{
    int v2;
    if ( !_strcmpi(this, &DataGlobal_817460.sectionHead[1]) )
    return -1;
    if ( !_strcmpi(this, g_Str_none) )
    return -1;
    v2 = 0;
    if ( *(int *)&HouseClass_Player[42508] <= 0 )
    return -1;
    while ( _strcmpi((const void *)(*(int *)(*(int *)&HouseClass_Player[42496] + 4 * v2) + 36), this) )
  {
    if ( ++v2 >= *(int *)&HouseClass_Player[42508] )
    return -1;
  }
    return v2;
}
}

// ==== BACKFILL 0x00524760  InfantryTypeClass::GetDefaultDimensions  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * InfantryTypeClass::GetDefaultDimensions(unsigned int * a1)
{
{
    int v1;
    v1 = 2 * DataGlobal_A8F2CC;
    *a1 = 85;
    *((int*)(a1) + 1) = 85;
    *((int*)(a1) + 2) = v1;
    return a1;
}
}

// ==== BACKFILL 0x00524790  InfantryTypeClass::GetGameplayValue  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryTypeClass::GetGameplayValue()
{
{
    return g_RulesClass_Instance[1].?;
}
}

// ==== BACKFILL 0x005247A0  InfantryTypeClass::StubReturnFalse  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryTypeClass::StubReturnFalse()
{
return 0;
}

// ==== BACKFILL 0x005247B0  InfantryTypeClass::j_?do_always_noconv_codecvt_base_std__MBE_NXZ_19  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryTypeClass::j__do_always_noconv_codecvt_base_std__MBE_NXZ_19()
{
    bool __thiscall InfantryTypeClass::j__do_always_noconv_codecvt_base_std__MBE_NXZ_19(std::codecvt_base *(void**)this)
{
    return AbstractClass::processWeaponFire(this);
}
}

// ==== BACKFILL 0x005247D0  InfantryTypeClass::ClampToGroundHeight  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * InfantryTypeClass::ClampToGroundHeight(unsigned int * a1, int * a2)
{
{
    int GroundHeight;
    int v3;
    int v5;
    int v6;
    int v7;
    v5 = *a2;
    v6 = *((int*)(a2) + 1);
    v7 = *((int*)(a2) + 2);
    GroundHeight = Cell::GetGroundHeight(&v5);
    v3 = v7;
    if ( v7 < GroundHeight )
    v3 = Cell::GetGroundHeight(&v5);
    *a1 = v5;
    *((int*)(a1) + 1) = v6;
    *((int*)(a1) + 2) = v3;
    return a1;
}
}

// ==== BACKFILL 0x00524840  InfantryTypeClass::PowerDrainUpdate  cls=InfantryTypeClass  sig=csp  renamed_refs=17  residual=- ====
int InfantryTypeClass::PowerDrainUpdate(int * a2)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    BuildingTypeClass::ProcessPower(this, a2);
    Power::TimerProcess(this->qDFC);
    Checksummer::Add_Buffer((unsigned int *)a2, *(unsigned char **)(this + 3644), 1512);
    Power::TimerProcess(this->qE40);
    Power::TimerProcess(this->qE44);
    Power::TimerProcess(this->qE88.Count);
    Power::TimerProcess(this->qE50.Count);
    Power::TimerProcess(this->qE6C.Count);
    LOBYTE(v3) = this->qEBC;
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = this->qEBD;
    v5 = Power::FlagProcess(a2, v4);
    LOBYTE(v5) = this->qEBE;
    Power::FlagProcess(a2, v5);
    LOBYTE(v6) = this->qEBF;
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = this->qEC0;
    v8 = Power::FlagProcess(a2, v7);
    LOBYTE(v8) = this->qEC1;
    Power::FlagProcess(a2, v8);
    LOBYTE(v9) = this->qEC2;
    Power::FlagProcess(a2, v9);
    LOBYTE(v10) = this->qEC3;
    v11 = Power::FlagProcess(a2, v10);
    LOBYTE(v11) = this->qEC4;
    Power::FlagProcess(a2, v11);
    LOBYTE(v12) = this->qEC5;
    Power::FlagProcess(a2, v12);
    LOBYTE(v13) = this->qEC6;
    return Power::FlagProcess(a2, v13);
}
}

// ==== BACKFILL 0x00524C70  InfantryTypeClass::GetClassIdentifier  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1366608936;
  a2[1] = 298976796;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x00524D40  InfantryTypeClass::GetTypeIdentifier  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryTypeClass::GetTypeIdentifier()
{
return 16;
}

// ==== BACKFILL 0x00524D50  InfantryTypeClass::GetObjectSize  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryTypeClass::GetObjectSize()
{
return 3792;
}

// ==== BACKFILL 0x00524D60  InfantryTypeClass::GetAuxField  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryTypeClass::GetAuxField()
{
{
    return this->ArrayIndex;
}
}

// ==== BACKFILL 0x00524D70  InfantryTypeClass::ddtor  cls=InfantryTypeClass  sig=csp  renamed_refs=2  residual=- ====
InfantryTypeClass * InfantryTypeClass::ddtor(char a2)
{
    InfantryTypeClass* v7 = this;
    InfantryTypeClass* blk = this;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    g_InfantryTypes;
    int v2 = g_InfantryTypes.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < g_InfantryTypes_Count && v2 < --g_InfantryTypes_Count )
    {
        do
        {
            ++v2;
            *(g_InfantryTypes_Items + v2 - 1) = *(g_InfantryTypes_Items + v2);
        }
        while ( v2 < g_InfantryTypes_Count );
    }
    OperatorDelete(blk->qE3C);
    blk->qE3C = nullptr;
    void *v3 = blk->VoiceComment_Items;
    blk->VoiceComment_Base = nullptr;
    if ( v3 && blk->VoiceComment_FlagByte )
    {
        OperatorDelete(v3);
        blk->VoiceComment_Items = nullptr;
    }
    blk->VoiceComment_FlagByte = 0;
    blk->VoiceComment_Capacity = 0;
    void *v4 = blk->DeathAnims_Items;
    blk->DeathAnims_Base = nullptr;
    if ( v4 && blk->DeathAnims_FlagByte )
    {
        OperatorDelete(v4);
        blk->DeathAnims_Items = nullptr;
    }
    blk->DeathAnims_FlagByte = 0;
    blk->DeathAnims_Capacity = 0;
    void *v5 = blk->DeadBodies_Items;
    blk->DeadBodies_Base = nullptr;
    if ( v5 && blk->DeadBodies_FlagByte )
    {
        OperatorDelete(v5);
        blk->DeadBodies_Items = nullptr;
    }
    blk->DeadBodies_FlagByte = 0;
    blk->DeadBodies_Capacity = 0;
    TechnoTypeClass::DTOR(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}

// ==== BACKFILL 0x00524EC0  ??0Iostream_init_QAE_XZ_4  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
Iostream_init * E4Recv_524EC0::__0Iostream_init_QAE_XZ_4()
{
{
    return this;
}
}

// ==== BACKFILL 0x00524FC0  WarheadTypeClass::QueryInterface  cls=TypeList  sig=csp  renamed_refs=0  residual=- ====
TypeList * WarheadTypeClass::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_AnimTypeClass_const;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TypeList *)this;
}
}

// ==== BACKFILL 0x00525060  VectorClass::CopyDefault  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * VectorClass::CopyDefault(VectorClass * aP1)
{
if ( this == aP1 )
    return (unsigned int *)this;
this->Clear();
int sourceCapacity = aP1->Capacity;
this->Capacity = sourceCapacity;
if ( !sourceCapacity )
{
    this->Items = 0;
    this->IsAllocated = 0;
    return (unsigned int *)this;
}
unsigned int* newItems = (unsigned int *)operator new(4 * sourceCapacity);
this->Items = (decltype(this->Items))newItems;
if ( !newItems )
    return (unsigned int *)this;
int capacity = this->Capacity;
int i = 0;
this->IsAllocated = 1;
if ( capacity <= 0 )
    return (unsigned int *)this;
do
{
    ((unsigned int *)this->Items)[i] = ((unsigned int *)aP1->Items)[i];
    ++i;
}
while ( i < this->Capacity );
return (unsigned int *)this;
}

// ==== BACKFILL 0x00525250  DynamicVectorClass::AnimTypeConstructor  cls=DynamicVectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * DynamicVectorClass::AnimTypeConstructor(DynamicVector * aP1, DynamicVector * aP2)
{
{
    this->Items = 0;
    this->Capacity = aP1;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_AnimTypeClass_const;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->Items = aP2;
    }
    else
    {
    this->Items = __2_YAPAXI_Z(4 * (int)aP1);
    this->IsAllocated = 1;
    }
  }
    *(void**)this = &vt_DynamicVectorClass_AnimTypeClass_const;
    this->CapacityIncrement = 10;
    this->Count = 0;
    return this;
}
}

// ==== BACKFILL 0x005253B0  DynamicVector::Add_Alt4  cls=DynamicVector  sig=csp  renamed_refs=6  residual=- ====
char DynamicVector::Add_Alt4(VectorClass * aP1)
{
{
    MapClass *v3;
    int v4;
    int v6;
    VectorClass *v7;
    v3 = (MapClass *)this->q008;
    if ( this->q010 >= (int)v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity((char *)(v3) + v4, 0) )
    return 0;
  }
    v6 = this->q010;
    v7 = (VectorClass *)this->Items;
    this->q010 = v6 + 1;
    *(int *)&v7->vtable1[4 * v6] = *(int *)aP1->vtable1;
    return 1;
}
}

// ==== BACKFILL 0x005255F0  TypeList::AnimTypeCopy  cls=TypeList  sig=csp  renamed_refs=1  residual=- ====
unsigned int * TypeList::AnimTypeCopy(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_AnimTypeClass_const;
    if ( this != (int *)aP1 )
  {
    DynamicVectorClass::Destroy_Alt((int)this);
    v3 = aP1->Capacity;
    this->Capacity = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( v4 )
      {
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->Items + 4 * v6) = *((int *)aP1->Items + v6);
    ++v6;
          }
    while ( v6 < this->Capacity );
        }
      }
    }
    else
    {
    this->Items = 0;
    this->IsAllocated = 0;
    }
  }
    this->Count = aP1[1].vtable1;
    this->CapacityIncrement = aP1[1].Items;
    *(void**)this = &vt_TypeList_AnimTypeClass_const;
    return this;
}
}

// ==== BACKFILL 0x005257C0  INIClass::ClearSection  cls=INIClass  sig=csp  renamed_refs=9  residual=- ====
namespace gamemd { int INIClass::ClearSection(int a1, void* a2) {
{
      INIClass *v3;
      bool v5;
      int v6;
      int v7;
      CCINIClass *v9;
      int v10;
      int *v11;
      int esi13;
      CCINIClass *v12;
      int *v14;
      int v15;
      unsigned __int8 *v16;
      size_t v17;
      int v18;
      int i;
      _DWORD *v20;
      int v21;
      int v22;
      unsigned __int8 *edx26;
      INIClass *v23;
      unsigned int v25;
      int v26;
      CCINIClass *v27;

      v3 = aP1;
      v5 = aP1 == 0;
      this->headNode = 0;
      this->q008 = 0;
      if ( v5 )
      {
        while ( 1 )
        {
          v6 = this->q014;
          if ( !v6 || !*(_DWORD *)(v6 + 4) || !*(_DWORD *)(v6 + 8) )
            break;
          (**(void (__thiscall ***)(int, int))v6)(v6, 1);
        }
        __3_YAXPAX_Z(*(void **)(this + 40));
        this->q028 = 0;
        this->INIClass_field_2C = 0;
        this->unknown30 = 0;
        this->needsSave_flag = 0;
        this->unknown38 = 0;
        if ( this->INIClass_field_3C )
        {
          do
          {
            free(**(void ***)(this + 60));
            v7 = *(_DWORD *)(this->INIClass_field_3C + 4);
            __3_YAXPAX_Z(*(void **)(this + 60));
            this->INIClass_field_3C = v7;
          }
          while ( v7 );
          return 1;
        }
        return 1;
      }
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v9 = (CCINIClass *)Checksummer::Add_Buffer(&v25, (unsigned __int8 *)v3, (IUnknown *)strlen(v3->__pad_0));
      v10 = this + 40;
      aP1 = (INIClass *)v9;
      if ( !HashTable::BinarySearch(this + 40, (ObjectClass *)&aP1) )
        return 1;
      v23 = (INIClass *)v9;
      v11 = HashTable::BinarySearch(this + 40, (ObjectClass *)&v23)
          ? (int *)(this->unknown38 + 4)
          : (int *)&DataGlobal_B7882C;
      esi13 = *v11;
      if ( !*v11 )
        return 1;
      if ( !aP2 )
      {
        edx26 = *(unsigned __int8 **)(esi13 + 12);
        v25 = 0;
        v26 = 0;
        v27 = 0;
        aP1 = (INIClass *)Checksummer::Add_Buffer(&v25, edx26, (IUnknown *)strlen((const char *)edx26));
        INIClass::deleteSection(v10, (int *)&aP1);
        (**(void (__thiscall ***)(int, int))esi13)(esi13, 1);
        return 1;
      }
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v12 = (CCINIClass *)(esi13 + 44);
      aP1 = (INIClass *)Checksummer::Add_Buffer(&v25, (unsigned __int8 *)aP2, (IUnknown *)strlen(aP2->__pad_0));
      if ( !SortedArray::Find((int)v12, (CCINIClass *)&aP1) )
        return 1;
      v14 = SortedArray::Find((int)v12, (CCINIClass *)&aP1) ? (int *)(v12->sectionHead[0] + 4) : (int *)&DataGlobal_B78830;
      v15 = *v14;
      if ( !*v14 )
        return 1;
      v16 = *(unsigned __int8 **)(v15 + 12);
      v25 = 0;
      v26 = 0;
      v27 = 0;
      aP2 = (AbstractClass *)Checksummer::Add_Buffer(&v25, v16, (IUnknown *)strlen((const char *)v16));
      v17 = HashTable::BinarySearchAlt((char **)v12, (CCINIClass *)&aP2);
      if ( v17 )
      {
        v18 = (int)(v17 - *(_DWORD *)v12->__pad_0) >> 3;
        if ( v18 != -1 )
        {
          for ( i = v18 + 1; i < v12->headNode[0]; *(v20 - 1) = v20[1] )
          {
            v20 = (_DWORD *)(*(_DWORD *)v12->__pad_0 + 8 * i++);
            *(v20 - 2) = *v20;
          }
          v21 = *(_DWORD *)v12->__pad_0;
          v22 = v12->headNode[0] - 1;
          v12->headNode[0] = v22;
          *(_DWORD *)(v21 + 8 * v22) = 0;
          *(_DWORD *)(v21 + 8 * v22 + 4) = 0;
          v12->sectionHead[0] = 0;
        }
      }
      (**(void (__thiscall ***)(int, int))v15)(v15, 1);
      return 1;
}
} }

// ==== BACKFILL 0x00526420  INIClass::SaveToPipe  cls=INIClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int INIClass::SaveToPipe(int a1) {
{
      int v2;
      _DWORD v4[4];
      char v5;

      this->headNode = 0;
      this->q008 = 0;
      v4[1] = 0;
      v4[2] = 0;
      v5 = 0;
      v4[3] = a2;
      v4[0] = 0;
      v2 = INIClass::WriteToString(this, (int)v4);
      FilePipe::Destructor(v4);
      return v2;
}
} }

// ==== BACKFILL 0x00526950  sub_526950  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_526950::sub_526950()
{
{
    return this->M44;
}
}

// ==== BACKFILL 0x00526B00  INIClass::ResetSection  cls=INIClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int INIClass::ResetSection() {
{
      this->headNode = 0;
      this->q008 = 0;
      return 0;
}
} }

// ==== BACKFILL 0x00526CC0  INIClass::GetStringByIndex  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::GetStringByIndex(CCINIClass * aP1, CCINIClass * aP2)
{
{
    CCINIClass *v3;
    CCINIClass *v4;
    size_t v5;
    int v6;
    CCINIClass *v7;
    int *v8;
    unsigned int v10[3];
    if ( !aP1 )
    return 0;
    memset(v10, 0, sizeof(v10));
    v3 = (CCINIClass *)(this + 40);
    v4 = (CCINIClass *)Checksummer::Add_Buffer(v10, (unsigned char *)aP1, (IUnknown *)strlen(aP1->__pad_0));
    aP1 = v4;
    if ( !v3->headNode[0] )
    return 0;
    if ( !SortedArray::CheckCache(v3, &aP1) )
  {
    v5 = SortedArray::BinarySearch((char **)v3, (CCINIClass *)&aP1);
    if ( !v5 )
    return 0;
    v3->sectionHead[0] = v5;
  }
    aP1 = v4;
    v6 = *(int *)SortedArray::FindValue((int)v3, (INIClass *)&aP1);
    if ( v6 )
  {
    v7 = aP2;
    if ( (int)aP2 < *(int *)(v6 + 48) )
    {
    v8 = *(int **)(v6 + 24);
    if ( v8 )
      {
    while ( v8[1] && v8[2] )
        {
    if ( !v7 )
    return v8[3];
    v8 = (int *)v8[1];
    v7 = (CCINIClass *)((char *)v7 - 1);
        }
      }
    }
  }
    return 0;
}
}

// ==== BACKFILL 0x00526E80  INIClass::ReadBase64Data  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::ReadBase64Data(void* a1, int a2, int a3) {
{
      INIClass *v5;
      size_t v6;
      size_t v7;
      AbstractTypeClass aP1;

      if ( !Block || !aP2 || (int)aP3 < 1 )
        return 0;
      INIClass::ClearSection((int)this, (INIClass *)Block, 0);
      *(_DWORD *)&aP1[4] = 0;
      *(_DWORD *)&aP1[8] = 0;
      Buffer::Init(&aP1[12], (int)aP2, (AbstractClass *)aP3);
      aP1.nextArrayIndex = 0;
      *(_DWORD *)aP1[0] = &vt_BufferStraw;
      memset(&aP1.NeedsSaveOrLink, 0, 16);
      aP1.referenceCount = (int)0;
      Delegate::Set(&aP1.referenceCount, &aP1);
      v5 = (INIClass *)1;
      v6 = BitmapClass::ProcessFrame((Base64Straw *)&aP1.referenceCount, &aP1[56], 70);
      aP1[36][v6 + 20] = 0;
      if ( v6 )
      {
        do
        {
          sprintf(&aP1.Name[28], g_Str_Trace__d, v5);
          INIClass::SetString(this, (INIClass *)Block, (INIClass *)&aP1.Name[28], (INIClass *)&aP1[56]);
          v5 = (INIClass *)((char *)v5 + 1);
          v7 = BitmapClass::ProcessFrame((Base64Straw *)&aP1.referenceCount, &aP1[56], 70);
          aP1[36][v7 + 20] = 0;
        }
        while ( v7 );
      }
      Straw::Dtor(&aP1.referenceCount);
      Vector::Clear((int)&aP1[12]);
      Straw::Dtor((int *)aP1[0]);
      return 1;
}
} }

// ==== BACKFILL 0x005271C0  INIClass::ReadIntList2  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::ReadIntList2(void* a1, void* a2) {
{
    char *v4;
    INIClass *i;
    unsigned int v6;
    unsigned int v7;
    char v8;
    INIClass Buffer;
    char v11;
    if ( !a1 )
    return 0;
    INIClass::ClearSection((int)this, a1, 0);
    v4 = Source;
    for ( i = (INIClass *)1; v4; v4 += v7 )
  {
    if ( !*v4 )
    break;
    strncpy(Buffer[32], v4, 0x4Bu);
    v11 = 0;
    sprintf(Buffer[0], g_Str_Trace__d, i);
    v6 = strlen(Buffer[32]) + 1;
    v7 = v6 - 1;
    if ( (int)(v6 - 1) <= 0 )
    break;
    if ( (int)(v6 - 1) >= 75 )
    {
    while ( 1 )
      {
    v8 = Buffer[32][v7];
    if ( v8 )
        {
    if ( (unsigned char)v8 <= 0x20u )
    break;
        }
    if ( !--v7 )
    return 1;
      }
    if ( !v7 )
    return 1;
    Buffer[32][v7] = 0;
    }
    String::Trim(Buffer[32]);
    INIClass::SetString(this, a1, &Buffer, (INIClass *)Buffer[32]);
    i = (INIClass *)((char *)(i) + 1);
  }
    return 1;
}
} }

// ==== BACKFILL 0x005275C0  INIClass::SetInt  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::SetInt(void* aP1, void* aP2, int aP3, int a5) {
{
      ObjectClass *v7;
      INIClass Buffer[8];

      if ( a5 == 1 )
      {
        sprintf(Buffer[0].__pad_0, &stru_825BAC, aP3);
      }
      else
      {
        if ( a5 == 2 )
          v7 = (ObjectClass *)&stru_825BAC[4];
        else
          v7 = (ObjectClass *)&stru_817F40.fallRate;
        sprintf(Buffer[0].__pad_0, v7, aP3);
      }
      return INIClass::SetString(this, aP1, (INIClass *)aP2, Buffer);
}
} }

// ==== BACKFILL 0x00527640  INIClass::SetIntFormat  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::SetIntFormat(void* a1, void* aP2, int a4, int aP4) {
{
      INIClass *v6;
      INIClass *v7;
      const char *v9;
      INIClass Buffer[8];

      v6 = (INIClass *)String::GetOrEmpty_Alt((char **)aP2);
      v7 = (INIClass *)String::GetOrEmpty_Alt(a1);
      if ( aP4 == (GenericNode *)1 )
      {
        sprintf(Buffer[0].__pad_0, stru_825BAC, a4);
      }
      else
      {
        if ( aP4 == (GenericNode *)2 )
          v9 = (const char *)&DataGlobal_825BB0;
        else
          v9 = g_Str_Trace__d;
        sprintf(Buffer[0].__pad_0, v9, a4);
      }
      return INIClass::SetString(this, v7, v6, Buffer);
}
} }

// ==== BACKFILL 0x005278F0  INIClass::ReadInt  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int INIClass::ReadInt(ObjectClass * aP1, ReferenceCounted * aP2, INIClass * aP3)
{
{
    unsigned char *eax1a;
    ObjectClass *v5;
    v5 = (ObjectClass *)String::GetOrEmpty_Alt((char **)aP2);
    eax1a = (unsigned char *)String::GetOrEmpty_Alt((char **)aP1);
    return INIClass::ReadInt_Overwrite((int)this, eax1a, (CCINIClass *)v5, aP3);
}
}

// ==== BACKFILL 0x00527B90  INIClass::ReadDouble  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::ReadDouble(void* a1, void* a2, void* a3) {
{
    LPOLESTR lpsz;
    INIClass MultiByteStr[2];
    lpsz = 0;
    StringFromCLSID(rclsid, &lpsz);
    if ( !WideCharToMultiByte(0, 0, lpsz, -1, MultiByteStr[0].__pad_0, 128, 0, 0) )
    GetLastError();
    SysFreeString(lpsz);
    return INIClass::SetString(this, Block, a2, MultiByteStr);
}
} }

// ==== BACKFILL 0x00527C10  INIClass::SetRect  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::SetRect(void* a1, void* a2, void* a3) {
{
    INIClass Buffer;
    sprintf( Buffer[0], g_Str_Trace__d__d__d__d, *(int *)a3->__pad_0, a3->headNode[0], a3->headNode[1], a3->headNode[2]);
    return INIClass::SetString(this, a1, (INIClass *)a2, &Buffer);
}
} }

// ==== BACKFILL 0x00527C60  INIClass::ReadFloat  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::ReadFloat(void* a1, void* a2, void* a3) {
{
    INIClass *v5;
    INIClass *v6;
    INIClass Buffer;
    v5 = (INIClass *)String::GetOrEmpty_Alt(a3);
    v6 = (INIClass *)String::GetOrEmpty_Alt(a2);
    sprintf(Buffer[0], g_Str_Trace__d__d__d__d, *a4, *((int*)(a4) + 1), *((int*)(a4) + 2), *((int*)(a4) + 3));
    return INIClass::SetString(this, v6, v5, &Buffer);
}
} }

// ==== BACKFILL 0x00528170  INIClass::ReadDouble3  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::ReadDouble3(void* a1, void* a2, int a3) {
{
    INIClass Buffer[8];
    sprintf(Buffer[0].__pad_0, (ObjectClass *)&DataGlobal_825BAC.objectTypeFlags, a3);
    return INIClass::SetString(this, (INIClass *)a1, a2, Buffer);
}
} }

// ==== BACKFILL 0x005281C0  INIClass::ReadDouble2  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::ReadDouble2(void* a1, void* a2, int a3) {
{
    INIClass *v5;
    INIClass *v6;
    INIClass Buffer[8];
    v5 = (INIClass *)String::GetOrEmpty_Alt(a2);
    v6 = (INIClass *)String::GetOrEmpty_Alt(a1);
    sprintf(Buffer[0].__pad_0, (ObjectClass *)&DataGlobal_825BAC.objectTypeFlags, (INIClass *)a3);
    return INIClass::SetString(this, v6, v5, Buffer);
}
} }

// ==== BACKFILL 0x005285B0  INIClass::SetDouble  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::SetDouble(void* a1, void* a2, double a3) {
{
    INIClass Buffer[8];
    sprintf(Buffer[0].__pad_0, DataGlobal_825BD8, a4);
    return INIClass::SetString(this, (INIClass *)aP1, (INIClass *)a2, Buffer);
}
} }

// ==== BACKFILL 0x00528600  INIClass::GetString2  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::GetString2(void* a1, void* a2, double a3) {
{
    INIClass *v5;
    INIClass *v6;
    INIClass Buffer[8];
    v5 = (INIClass *)String::GetOrEmpty_Alt(a3);
    v6 = (INIClass *)String::GetOrEmpty_Alt(a2);
    sprintf(Buffer[0].__pad_0, DataGlobal_825BD8, a4);
    return INIClass::SetString(this, v6, v5, Buffer);
}
} }

// ==== BACKFILL 0x005289E0  INIClass::SetStringOrEmpty  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::SetStringOrEmpty(void* a1, void* a2, void* a3) {
{
    INIClass *v5;
    INIClass *v7;
    INIClass *v8;
    v8 = (INIClass *)String::GetOrEmpty_Alt((char **)a3);
    v7 = (INIClass *)String::GetOrEmpty_Alt(a2);
    v5 = (INIClass *)String::GetOrEmpty_Alt(a1);
    return INIClass::SetString(this, v5, v7, v8);
}
} }

// ==== BACKFILL 0x00528E00  INIClass::SetWideAsHex  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::SetWideAsHex(void* a1, void* a2, void* a3) {
{
    char v4;
    size_t v5;
    INIClass *v6;
    INIClass *v7;
    unsigned short v8;
    char *i;
    v4 = 0;
    if ( a3 )
  {
    v5 = wcslen((const wchar_t *)a3);
    v6 = (INIClass *)__2_YAPAXI_Z(8 * v5 + 1);
    v7 = v6;
    if ( v6 )
    {
    v6->__pad_0[0] = 0;
    v8 = *(short *)a3->__pad_0;
    for ( i = (char *)v7; *(short *)a3->__pad_0; i = &v7->__pad_0[strlen(v7->__pad_0)] )
      {
    _itoa(v8, i, 16);
    strcat(i, (const char *)&DataGlobal_817F40.nextObject);
    a3 = (CCINIClass *)((char *)(a3) + 2);
    v8 = *(short *)a3->__pad_0;
      }
    v4 = INIClass::SetString(this, a1, (INIClass *)a2, v7);
    __3_YAXPAX_Z(v7);
    }
  }
    return v4;
}
} }

// ==== BACKFILL 0x00529560  INIClass::SetBool  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::SetBool(void* a1, void* a2, int a3) {
{
    if ( (char)a3 )
    return INIClass::SetString(this, a1, (INIClass *)a2, (INIClass *)g_Str_no.headNode);
    else
    return INIClass::SetString(this, a1, (INIClass *)a2, &g_Str_no);
}
} }

// ==== BACKFILL 0x005295A0  INIClass::ReadBool3  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::ReadBool3(void* a1, void* a2, int a3) {
{
    INIClass *v5;
    INIClass *v6;
    v5 = (INIClass *)String::GetOrEmpty_Alt(a2);
    v6 = (INIClass *)String::GetOrEmpty_Alt(a1);
    if ( (char)a3 )
    return INIClass::SetString(this, v6, v5, (INIClass *)&DataGlobal_825BAC.ambientSoundController[4]);
    else
    return INIClass::SetString(this, v6, v5, (INIClass *)&DataGlobal_825BAC.ambientSoundController[3]);
}
} }

// ==== BACKFILL 0x005297E0  INIEntry::Write2Integers  cls=INIEntry  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIEntry::Write2Integers(void* a1, void* a2, void* a3) {
{
    char Buffer[56];
    sprintf(Buffer, g_INI_Key_Digest[32], *(int *)a3->__pad_0, a3->headNode[0]);
    return INIClass::SetString(this, (INIClass *)Block, (INIClass *)a2, (INIClass *)Buffer);
}
} }

// ==== BACKFILL 0x00529820  INIClass::GetInt  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
char INIClass::GetInt(char ** a2, char ** a3, unsigned int * a4)
{
{
    INIClass *v5;
    INIClass *v6;
    char Buffer[56];
    v5 = (INIClass *)String::GetOrEmpty_Alt(a3);
    v6 = (INIClass *)String::GetOrEmpty_Alt(a2);
    sprintf(Buffer, g_INI_Key_Digest[32], *a4, *((int*)(a4) + 1));
    return INIClass::SetString(this, v6, v5, (INIClass *)Buffer);
}
}

// ==== BACKFILL 0x00529BF0  INIClass::ReadCoord3  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::ReadCoord3(void* a1, void* a2, void* a3) {
{
    char Buffer[56];
    sprintf(Buffer, (ObjectClass *)&DataGlobal_81898C.objectTypeFlags, *(INIClass **)a3->__pad_0);
    return INIClass::SetString(this, Block, a2, (INIClass *)Buffer);
}
} }

// ==== BACKFILL 0x00529C40  INIClass::ReadCoord2  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::ReadCoord2(void* a1, void* a2, void* a3) {
{
    INIClass *v5;
    INIClass *v6;
    char Buffer[56];
    v5 = (INIClass *)String::GetOrEmpty_Alt(a3);
    v6 = (INIClass *)String::GetOrEmpty_Alt(a2);
    sprintf(Buffer, (const char *const)&DataGlobal_818994.sectionCount, *a4, *((int*)(a4) + 1), *((int*)(a4) + 2));
    return INIClass::SetString(this, v6, v5, (INIClass *)Buffer);
}
} }

// ==== BACKFILL 0x0052A040  INIClass::ReadBool2  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::ReadBool2(void* a1, void* a2, void* a3) {
{
    char Buffer[56];
    sprintf(Buffer, (const char *const)&g_Str_no.headNode[1], *a4, *((int*)(a4) + 1), *((int*)(a4) + 2));
    return INIClass::SetString(this, Block, aP2, (INIClass *)Buffer);
}
} }

// ==== BACKFILL 0x0052A0A0  INIClass::ReadBool  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::ReadBool(void* a1, void* a2, void* a3) {
{
    INIClass *v5;
    INIClass *v6;
    char Buffer[56];
    v5 = (INIClass *)String::GetOrEmpty_Alt(a3);
    v6 = (INIClass *)String::GetOrEmpty_Alt(a2);
    sprintf(Buffer, (const char *const)&g_Str_no.headNode[1], *a4, *((int*)(a4) + 1), *((int*)(a4) + 2));
    return INIClass::SetString(this, v6, v5, (INIClass *)Buffer);
}
} }

// ==== BACKFILL 0x0052A670  WinMain_Init  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* Gap2Recv_52A670::WinMain_Init(void* a2, char a3) {
{
    int v5[129];
    char v6[512];
    int v7[64];
    InitArrayWithValue(v5, 0, 64);
    InitArrayWithValue(&v5[64], 0, 64);
    v5[128] = 0;
    if ( a3 )
  {
    InitArrayWithValue(v7, 65537, 64);
    EncodeVarInt((int)v7, v6, 64);
  }
    else
  {
    INIClass::GetBase64Data(this, aPrivatekey, (int)v6, 512);
  }
    System_Init_632030(v5, v6);
    INIClass::GetBase64Data(this, aPublickey, (int)v6, 512);
    System_Init_632000(v5, v6);
    qmemcpy(a2, v5, 0x204u);
    return a2;
}

/* ASM:
sub     esp, 504h
push    esi
mov     esi, ecx
push    edi
push    40h ; '@'
xor     edx, edx
lea     ecx, [esp+510h+var_504]
call    InitArrayWithValue
push    40h ; '@'
xor     edx, edx
lea     ecx, [esp+510h+var_404]
call    InitArrayWithValue
mov     al, [esp+50Ch+arg_4]
mov     [esp+50Ch+var_304], 0
test    al, al
jz      short loc_52A6DF
push    40h ; '@'
mov     edx, 10001h
lea     ecx, [esp+510h+var_100]
call    InitArrayWithValue
push    40h ; '@'
lea     edx, [esp+510h+var_300]
lea     ecx, [esp+510h+var_100]
call    EncodeVarInt
lea     eax, [esp+50Ch+var_300]
push    eax
jmp     short loc_52A700
; ---------------------------------------------------------------------------

loc_52A6DF:                             ; CODE XREF: WinMain_Init+3B↑j
lea     ecx, [esp+50Ch+var_300]
push    200h            ; Size
push    ecx             ; int
push    offset aPrivatekey ; "PrivateKey"
mov     ecx, esi
call    INIClass__GetBase64Data
lea     edx, [esp+50Ch+var_300]
push    edx

loc_52A700:                             ; CODE XREF: WinMain_Init+6D↑j
lea     ecx, [esp+510h+var_504]
call    System_Init_632030
lea     eax, [esp+50Ch+var_300]
push    200h            ; Size
push    eax             ; int
push    offset aPublickey ; "PublicKey"
mov     ecx, esi
call    INIClass__GetBase64Data
lea     ecx, [esp+50Ch+var_300]
push    ecx
lea     ecx, [esp+510h+var_504]
call    System_Init_632000
mov     eax, [esp+50Ch+arg_0]
mov     ecx, 81h
lea     esi, [esp+50Ch+var_504]
mov     edi, eax
rep movsd
pop     edi
pop     esi
add     esp, 504h
retn    8
*/
} }

// ==== BACKFILL 0x0052A940  INIClass::SaveTimeField  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::SaveTimeField(void* a1, void* a2, int a3) {
{
    char Buffer[32];
    sprintf(Buffer, DataGlobal_81F0A8, (int)a3 / 60 / 60 / 60, (int)a3 / 60 / 60 % 60, (int)a3 / 60 % 60);
    return INIClass::SetString(this, (INIClass *)Block, (INIClass *)a2, (INIClass *)Buffer);
}
} }

// ==== BACKFILL 0x0052AAF0  sub_52AAF0  cls=INIEntry@INIClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_52AAF0::sub_52AAF0()
{
{
    CCINIClass *v2;
    int v3;
    int v4;
    int v5;
    int v6;
    void *v7;
    v2 = (CCINIClass *)this->field_C;
    *(int *)this->__pad_0 = &vt_INIClass_INIEntry;
    free(v2);
    v7 = (void *)this->field_10;
    this->field_C = 0;
    free(v7);
    v3 = *(int *)this->__pad_14;
    this->field_10 = 0;
    if ( v3 )
  {
    do
    {
    free(**(void ***)this->__pad_14);
    v4 = *(int *)(*(int *)this->__pad_14 + 4);
    __3_YAXPAX_Z(*(void **)this->__pad_14);
    *(int *)this->__pad_14 = v4;
    }
    while ( v4 );
  }
    free((void *)this->field_18);
    this->field_18 = 0;
    *(int *)this->__pad_0 = &vt_GenericNode;
    if ( this )
  {
    v5 = *(int *)&this->__pad_0[4];
    if ( v5 )
    {
    v6 = *(int *)&this->__pad_0[8];
    if ( v6 )
      {
    *(int *)(v6 + 4) = v5;
    *(int *)(*(int *)&this->__pad_0[4] + 8) = *(int *)&this->__pad_0[8];
    *(int *)&this->__pad_0[8] = 0;
    *(int *)&this->__pad_0[4] = 0;
      }
    }
  }
}
}

// ==== BACKFILL 0x0052AD50  WarheadTypeClass::parseModifiers  cls=WarheadTypeClass  sig=csp  renamed_refs=0  residual=- ====
void * WarheadTypeClass::parseModifiers(char a2)
{
{
    CCINIClass *v3;
    int v4;
    int v5;
    int v6;
    int v7;
    void *v9;
    v3 = (CCINIClass *)this->field_C;
    *(int *)this->__pad_0 = &vt_INIClass_INIEntry;
    free(v3);
    v9 = (void *)this->field_10;
    this->field_C = 0;
    free(v9);
    v4 = *(int *)this->__pad_14;
    this->field_10 = 0;
    if ( v4 )
  {
    do
    {
    free(**(void ***)this->__pad_14);
    v5 = *(int *)(*(int *)this->__pad_14 + 4);
    __3_YAXPAX_Z(*(void **)this->__pad_14);
    *(int *)this->__pad_14 = v5;
    }
    while ( v5 );
  }
    free((void *)this->field_18);
    this->field_18 = 0;
    *(int *)this->__pad_0 = &vt_GenericNode;
    if ( this )
  {
    v6 = *(int *)&this->__pad_0[4];
    if ( v6 )
    {
    v7 = *(int *)&this->__pad_0[8];
    if ( v7 )
      {
    *(int *)(v7 + 4) = v6;
    *(int *)(*(int *)&this->__pad_0[4] + 8) = *(int *)&this->__pad_0[8];
    *(int *)&this->__pad_0[8] = 0;
    *(int *)&this->__pad_0[4] = 0;
      }
    }
  }
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x0052AE00  WarheadTypeClass::parseAnimations  cls=WarheadTypeClass  sig=csp  renamed_refs=0  residual=- ====
WarheadTypeClass * WarheadTypeClass::parseAnimations(char a2)
{
{
    WarheadTypeClass::parseVerses(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (WarheadTypeClass *)this;
}
}

// ==== BACKFILL 0x0052AE20  Delegate::Constructor_GenericNode  cls=GenericNode  sig=csp  renamed_refs=0  residual=- ====
GenericNode * Delegate::Constructor_GenericNode(char a2)
{
{
    GenericNode *v3;
    GenericNode *v4;
    *(void**)this = (GenericNode *)&vt_GenericNode;
    if ( this )
  {
    v3 = *(this + 1);
    if ( v3 )
    {
    v4 = *(this + 2);
    if ( v4 )
      {
    v4->Previous = v3;
    *(int *)(*(this + 1))[1].__pad_0 = *(this + 2);
    *(this + 2) = 0;
    *(this + 1) = 0;
      }
    }
  }
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (GenericNode *)this;
}
}

// ==== BACKFILL 0x0052AE70  Delegate::ClearVectorAndStraw  cls=CacheStraw  sig=csp  renamed_refs=0  residual=- ====
int * Delegate::ClearVectorAndStraw(char a2)
{
{
    Vector::Clear((int)&this->__pad_0[12]);
    Straw::Dtor((int *)this->__pad_0);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int *)this->__pad_0;
}
}

// ==== BACKFILL 0x0052AEA0  Delegate::DestroyStraw  cls=Base64Straw  sig=csp  renamed_refs=0  residual=- ====
int * Delegate::DestroyStraw(char a2)
{
{
    Straw::Dtor((int *)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int *)this;
}
}

// ==== BACKFILL 0x0052AEE0  Delegate::DestroyPipe  cls=Base64Pipe  sig=csp  renamed_refs=0  residual=- ====
int * Delegate::DestroyPipe(char a2)
{
{
    Pipe::Dtor((int *)this->__pad_0);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int *)this->__pad_0;
}
}

// ==== BACKFILL 0x0052AF50  INIClass::sectionExists  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* INIClass::sectionExists() {
{
      _DWORD *result;
      _DWORD *v2;
      int v3;
      int v4;
      int v5;
      int v6;

      result = this;
      v2 = this + 4;
      this->q008 = 0;
      this->q00C = 0;
      *(this + 1) = &vt_GenericNode;
      this->q014 = 0;
      this->q018 = 0;
      *(this + 4) = &vt_GenericNode;
      *this = &vt_GenericList;
      if ( this != (_DWORD *)-16 )
      {
        v3 = this->q014;
        if ( v3 )
        {
          v4 = this->q018;
          if ( v4 )
          {
            *(_DWORD *)(v4 + 4) = v3;
            *(_DWORD *)(this->q014 + 8) = this->q018;
            this->q018 = 0;
            this->q014 = 0;
          }
        }
      }
      v5 = this->q008;
      this->q018 = this + 1;
      this->q014 = v5;
      v6 = this->q008;
      if ( v6 )
        *(_DWORD *)(v6 + 8) = v2;
      this->q008 = v2;
      *this = 0;
      return result;
}
} }

// ==== BACKFILL 0x0052B080  INIClass::getValue  cls=INIClass  sig=csp  renamed_refs=2  residual=- ====
namespace gamemd { void* INIClass::getValue() {
{
      *this = 0;
      this->headNode = 0;
      this->q008 = 0;
      this->q00C = 0;
      this->sectionHead = 0;
      return this;
}
} }

// ==== BACKFILL 0x0052B570  INIClass::mergeSection  cls=INIClass  sig=csp  renamed_refs=2  residual=- ====
namespace gamemd { int INIClass::mergeSection(int a1) {
{
      char *v3;
      int i;
      int v5;
      _DWORD *v6;
      int v7;

      if ( a2 < 0 )
        return 0;
      v3 = (char *)__2_YAPAXI_Z(8 * (a2 + this->q008));
      if ( !v3 )
        return 0;
      for ( i = 0; i < this->headNode; *(_DWORD *)&v3[v5 + 4] = v6[1] )
      {
        v5 = 8 * i;
        v6 = (_DWORD *)(*(_DWORD *)this + 8 * i++);
        *(_DWORD *)&v3[v5] = *v6;
      }
      __3_YAXPAX_Z(*(void **)this);
      v7 = a2 + this->q008;
      *(_DWORD *)this = v3;
      this->q008 = v7;
      this->sectionHead = 0;
      return 1;
}
} }

// ==== BACKFILL 0x0052B9B0  BINK::Background_Setup  cls=BINK  sig=csp  renamed_refs=0  residual=- ====
HWND BINK::Background_Setup()
{
{
    HWND result;
    HWND v2;
    int v3;
    int v4;
    result = GetDlgItem(this, 1818);
    v2 = result;
    if ( result )
  {
    if ( g_DisplayWidth > 800 )
    v3 = (g_DisplayWidth - 800) / 2;
    else
    v3 = 0;
    if ( *(&g_DisplayWidth + 1) > 600 )
    v4 = (*(&g_DisplayWidth + 1) - 600) / 2;
    else
    v4 = 0;
    SetWindowPos(v2, 0, v3, v4, -1, -1, 0xDu);
    SendMessageA(v2, 0x4E3u, 1u, 0);
    if ( g_DisplayWidth == 640 )
    return (HWND)SendMessageA(v2, 0x4E4u, 0, (LPARAM)aRa2tsS);
    else
    return (HWND)SendMessageA(v2, 0x4E4u, 0, (LPARAM)aRa2tsL);
  }
    return result;
}
}

// ==== BACKFILL 0x0052D430  ReadModConfigINI  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
INT_PTR ReadModConfigINI(HWND hDlg, UINT, WPARAM, int * a4)
{
{
    HWND v5;
    int i;
    HWND DlgItem;
    INT_PTR v8;
    char lParam[128];
    if ( a2 > 0x110 )
  {
    if ( a2 == 273 )
    {
    if ( ((unsigned short)a3 == 2 || (unsigned short)a3 == 1188) && !HIWORD(a3) )
      {
    DlgItem = GetDlgItem(hDlg, 1187);
    v8 = SendMessageA(DlgItem, 0x188u, 0, 0);
    EndDialog(hDlg, v8);
    DestroyWindow(hDlg);
      }
    }
    else if ( a2 == 534 )
    {
    return (unsigned char)Window::ClampToScreen(a4);
    }
    return 0;
  }
    if ( a2 != 272 )
  {
    if ( a2 == 83 )
    {
    System_Read_776880((HWND *)a4);
    return 0;
    }
    if ( a2 == 123 )
    {
    System_Read_7768A0((HWND)a3);
    return 0;
    }
    return 0;
  }
    Dialog::RestoreParent(hDlg);
    v5 = GetDlgItem(hDlg, 1187);
    for ( i = 0; i < *((int*)(a4) + 4); ++i )
  {
    INIClass::GetString( *(unsigned char ****)(*((int*)(a4) + 1) + 4 * i), (unsigned char *)g_INI_Key_General, (unsigned char *)g_INI_Key_Name, &g_INI_DefaultBuffer, lParam, 128);
    SendMessageA(v5, 0x180u, 0, (LPARAM)lParam);
  }
    SendMessageA(v5, 0x186u, 0, 0);
    return 0;
}
}

// ==== BACKFILL 0x0052D790  sub_52D790  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_52D790(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
{
    int result;
    int *WindowLongA;
    HWND DlgItem;
    result = BaseDialogProc(hWnd, a2, a3, a4);
    if ( result )
    return result;
    WindowLongA = (int *)GetWindowLongA(hWnd, 8);
    if ( a2 == 15 )
  {
    DlgItem = GetDlgItem(hWnd, 1818);
    SendMessageA(DlgItem, 0x4F0u, 0, 0);
    return 0;
  }
    if ( a2 != 273 )
    return 0;
    switch ( (short)a3 )
  {
    case 1670: *WindowLongA = 18;
    result = 0;
    break;
    case 1677: *WindowLongA = 13;
    result = 0;
    break;
    case 1678: *WindowLongA = 14;
    result = 0;
    break;
    case 1679: *WindowLongA = 15;
    result = 0;
    break;
    default: return 0;
  }
    return result;
}
}
