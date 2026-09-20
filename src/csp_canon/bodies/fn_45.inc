// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00451690  BuildingClass::ClearSuperWeaponAnim  cls=BuildingClass  sig=csp  renamed_refs=2 ====
char BuildingClass::ClearSuperWeaponAnim()
{
{
    char result;
    int v3;
    bool v4;
    int v5;
    char v6;
    result = this->UpgradeLevel;
    if ( result )
  {
    v3 = result;
    v4 = 0;
    v5 = *(int *)(this + 4 * result + 1512);
    if ( v5 && (v4 = *(int *)(v5 + 5872) != -1, *(char *)(v5 + 3233)) )
    {
    BuildingClass::ClearAnims((int *)this, (TechnoClass *)9);
    *(int *)(this + 4 *(void**)this->UpgradeLevel + 1512) = 0;
    this->UpgradeLevel = 0;
    this->SuperWeaponToken = -1;
    if ( v4 )
      {
    SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(this->Owner);
    return 1;
      }
    }
    else
    {
    BuildingClass::ClearAnims((int *)this, (TechnoClass *)(v3 - 1));
    v6 = this->UpgradeLevel - 1;
    this->UpgradeLevel = v6;
    *(int *)(this + 4 * v6 + 1516) = 0;
    if ( v4 )
    SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(this->Owner);
    }
    return 1;
  }
    return result;
}
}

// ==== BACKFILL 0x00451750  BuildingClass::PlayUpgradeAnim  cls=BuildingClass  sig=csp  renamed_refs=0 ====
void BuildingClass::PlayUpgradeAnim(int a2, int a3, int a4, void * a5)
{
{
    int result;
    char *v6;
    if ( (char)a3 )
  {
    result = a2;
    v6 = (char *)(this->Type + 68 * a2 + 3932);
  }
    else
  {
    result = a2;
    if ( (char)a4 )
    v6 = (char *)(this->Type + 68 * a2 + 3948);
    else
    v6 = (char *)(this->Type + 68 * a2 + 3916);
  }
    if ( v6 )
  {
    if ( *v6 )
    return BuildingClass::PlayAnim(this, (int)v6, v6, result, a3, a4, a5);
  }
    return result;
}

/* ASM:
push    ebx
mov     ebx, [esp+4+arg_8]
push    esi
mov     esi, ecx
mov     ecx, [esp+8+arg_4]
push    edi
test    cl, cl
jz      short loc_45177B
mov     eax, [esp+0Ch+arg_0]
mov     edi, [esi+520h]
mov     edx, eax
shl     edx, 4
add     edx, eax
lea     edx, [edi+edx*4+0F5Ch]
jmp     short loc_4517AB
; ---------------------------------------------------------------------------

loc_45177B:                             ; CODE XREF: BuildingClass__PlayUpgradeAnim+F↑j
mov     eax, [esp+0Ch+arg_0]
test    bl, bl
mov     edx, eax
jz      short loc_451799
mov     edi, [esi+520h]
shl     edx, 4
add     edx, eax
lea     edx, [edi+edx*4+0F6Ch]
jmp     short loc_4517AB
; ---------------------------------------------------------------------------

loc_451799:                             ; CODE XREF: BuildingClass__PlayUpgradeAnim+33↑j
mov     edi, [esi+520h]
shl     edx, 4
add     edx, eax
lea     edx, [edi+edx*4+0F4Ch]

loc_4517AB:                             ; CODE XREF: BuildingClass__PlayUpgradeAnim+29↑j
; BuildingClass__PlayUpgradeAnim+47↑j
test    edx, edx
jz      short loc_4517C4
cmp     byte ptr [edx], 0
jz      short loc_4517C4
mov     edi, [esp+0Ch+arg_C]
push    edi             ; int
push    ebx             ; int
push    ecx             ; int
push    eax             ; int
push    edx             ; void *
mov     ecx, esi
call    BuildingClass__PlayAnim

loc_4517C4:                             ; CODE XREF: BuildingClass__PlayUpgradeAnim+5D↑j
; BuildingClass__PlayUpgradeAnim+62↑j
pop     edi
pop     esi
pop     ebx
retn    10h
*/
}

// ==== BACKFILL 0x004517D0  sub_4517D0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_4517D0::sub_4517D0()
{
{
    int *v2;
    int v3;
    int v4;
    int result;
    int *v6;
    int *v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int **v12;
    int v13;
    int v14;
    int v15;
    int v16[3];
    int v17[3];
    v2 = (int *)((int (__thiscall *)(int **, int *))(*(void**)this)[43])(this, v16);
    v3 = 0;
    v13 = *v2;
    v14 = v2[1];
    v4 = v2[2];
    result = (int)(this + 343);
    v15 = v4;
    v12 = this + 343;
    do
  {
    v6 = *v12;
    if ( *v12 )
    {
    v7 = Matrix3x4::TransformCell((float *)g_TacticalClass_Instance, v17, &(this->M1312)[v3 + 991]);
    v8 = v13 + *v7;
    v9 = v7[1];
    v10 = v7[2];
    v16[1] = v14 + v9;
    v11 = *v6;
    v16[2] = v15 + v10;
    v16[0] = v8;
    result = (*(int (__thiscall **)(int *, int *))(v11 + 436))(v6, v16);
    }
    v3 += 17;
    ++v12;
  }
    while ( v3 < 357 );
    return result;
}
}

// ==== BACKFILL 0x00451EE0  globalHelper_051EE0  cls=unknown  sig=csp  renamed_refs=0 ====
void globalHelper_051EE0(int a1, int a2, IUnknown * aP4)
{
{
    IUnknown *v4;
    IUnknown *v5;
    int v6;
    int *v7;
    char *v8;
    v4 = aP4;
    if ( *(char *)(a1 + 1766) != (char)aP4 )
  {
    v5 = 0;
    *(char *)(a1 + 1766) = (char)aP4;
    v6 = 0;
    v7 = (int *)(a1 + 1372);
    do
    {
    if ( *v7 )
      {
    if ( (char)v4 )
        {
    v8 = (char *)(*(int *)(a1 + 1312) + v6 + 3932);
        }
    else
        {
    a2 = *(int *)(a1 + 1312);
    v8 = (char *)(a2 + v6 + 3916);
        }
    if ( v8 )
        {
    if ( *v8 )
          {
    BuildingClass::PlayAnim((ObjectClass *)a1, a2, v8, v5, v4, 0, 0);
    v4 = aP4;
          }
        }
      }
    v6 += 68;
    v5 = (IUnknown *)((char *)(v5) + 1);
    ++v7;
    }
    while ( v6 < 1428 );
  }
}
}

// ==== BACKFILL 0x00452170  BuildingClass::SetConnectedBuildingMission  cls=BuildingClass  sig=csp  renamed_refs=0 ====
void BuildingClass::SetConnectedBuildingMission(int a2)
{
{
    char v3;
    int *v4;
    int v5;
    int result;
    v3 = a2;
    if ( a2 == 15 && this->IsAboveScreenMargin(0, 0) == 5 )
    v3 = 16;
    v4 = this + 343;
    v5 = 21;
    do
  {
    result = *v4;
    if ( *v4 )
    *(char *)(result + 376) = v3;
    ++v4;
    --v5;
  }
    while ( v5 );
    return result;
}

/* ASM:
mov     eax, [esp+arg_0]
push    ebx
push    esi
cmp     eax, 0Fh
mov     esi, ecx
mov     ebx, eax
jnz     short loc_452192
mov     eax, [esi]
push    0
push    0
call    dword ptr [eax+68h]
cmp     eax, 5
jnz     short loc_452192
mov     ebx, 10h

loc_452192:                             ; CODE XREF: BuildingClass__SetConnectedBuildingMission+D↑j
; BuildingClass__SetConnectedBuildingMission+1B↑j
lea     ecx, [esi+55Ch]
mov     esi, 15h

loc_45219D:                             ; CODE XREF: BuildingClass__SetConnectedBuildingMission+3D↓j
mov     eax, [ecx]
test    eax, eax
jz      short loc_4521A9
mov     [eax+178h], bl

loc_4521A9:                             ; CODE XREF: BuildingClass__SetConnectedBuildingMission+31↑j
add     ecx, 4
dec     esi
jnz     short loc_45219D
pop     esi
pop     ebx
retn    4
*/
}

// ==== BACKFILL 0x00452250  FootClass::StubReturn0  cls=BuildingClass  sig=csp  renamed_refs=0 ====
int FootClass::StubReturn0() { return 0; }

// ==== BACKFILL 0x004525F0  BuildingClass::IsPoweredOn  cls=BuildingClass  sig=csp  renamed_refs=0 ====
bool BuildingClass::IsPoweredOn()
{
{
    if ( !*(char *)(this->Type + 5815) )
    return 1;
    return this->GetCurrentMission() == 24 && BuildingClass::CheckPowerFlags((char *)(this) + 848);
}
    return false; // TODO stub - retranslate via C-line pipeline
}

// ==== BACKFILL 0x00452630  BuildingClass::CheckHealthForRepair  cls=BuildingClass  sig=csp  renamed_refs=0 ====
bool BuildingClass::CheckHealthForRepair() {
    // IDA 0x452630, vtable slot 37. health@+0x6C (ASM: mov eax,[esi+6Ch]),
    // Type@+0x520, ClickRepairable@Type+0x157A; vtable[+128] = slot 32 =
    // IsFactorySelectable (binary vtable@0x7E3EBC slot32 = 0x457620, verified
    // this session; vtable_offsets.json slot-128 entry fixed accordingly).
    // The tail call is the original binary's direct cross-class call into
    // InfantryClass::CheckHealthDiff (0x701140) - generic Techno code with an
    // internal whatAmI guard (always false for buildings); passed through
    // unchanged (single-inheritance no-op rebind).
    // CFG mirrors the Hex-Rays single-exit shape (shared `return result` tail).
    bool result;
    if (this->health)
    {
        if (this->Type->ClickRepairable)
        {
            result = this->IsFactorySelectable();
            if (result)
                result = false;
            else
                result = ((InfantryClass*)(ra2::game::TechnoClass*)this)->CheckHealthDiff() != 0;
        }
        else
        {
            result = false;
        }
    }
    else
    {
        result = false;
    }
    return result;

/* ASM:
push    esi
mov     esi, ecx
mov     eax, [esi+6Ch]
test    eax, eax
jnz     short loc_45263E
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_45263E:                             ; CODE XREF: BuildingClass__CheckHealthForRepair+8↑j
mov     eax, [esi+520h]
mov     cl, [eax+157Ah]
test    cl, cl
jnz     short loc_452652
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_452652:                             ; CODE XREF: BuildingClass__CheckHealthForRepair+1C↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+80h]
test    al, al
jz      short loc_452664
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_452664:                             ; CODE XREF: BuildingClass__CheckHealthForRepair+2E↑j
mov     ecx, esi
call    InfantryClass__CheckHealthDiff
pop     esi
retn
*/
}

// ==== BACKFILL 0x00452670  BuildingClass::CanAcceptType  cls=BuildingClass  sig=csp  renamed_refs=0 ====
bool BuildingClass::CanAcceptType(int a2, int a3)
{
{
    int v4;
    if ( a3 != this->Owner || _strcmpi((const void *)(a2 + 3720), (const void *)(this->Type + 36)) )
  {
    return 0;
  }
    v4 = *(int *)(a2 + 5884);
    if ( v4 == -1 )
  {
    if ( this->UpgradeLevel < *(int *)(this->Type + 5344) )
    return 1;
  }
    else if ( v4 <= 0 || v4 > 3 )
  {
    return 0;
  }
    return !this->UpgradeLevel;
}

/* ASM:
mov     eax, [esp+arg_4]
push    esi
push    edi
mov     edi, ecx
cmp     eax, [edi+21Ch]
jnz     short loc_4526B5
mov     ecx, [edi+520h]
mov     esi, [esp+8+arg_0]
add     ecx, 24h ; '$'
lea     edx, [esi+0E88h]
push    ecx             ; void *
push    edx             ; void *
call    __strcmpi
add     esp, 8
test    eax, eax
jnz     short loc_4526B5
mov     eax, [esi+16FCh]
cmp     eax, 0FFFFFFFFh
jz      short loc_4526BC
test    eax, eax
jle     short loc_4526B5
cmp     eax, 3
jle     short loc_4526D8

loc_4526B5:                             ; CODE XREF: BuildingClass__CanAcceptType+E↑j
; BuildingClass__CanAcceptType+2F↑j ...
pop     edi
xor     al, al
pop     esi
retn    8
; ---------------------------------------------------------------------------

loc_4526BC:                             ; CODE XREF: BuildingClass__CanAcceptType+3A↑j
mov     ecx, [edi+520h]
movsx   eax, byte ptr [edi+702h]
cmp     eax, [ecx+14E0h]
jge     short loc_4526D8
pop     edi
mov     al, 1
pop     esi
retn    8
; ---------------------------------------------------------------------------

loc_4526D8:                             ; CODE XREF: BuildingClass__CanAcceptType+43↑j
; BuildingClass__CanAcceptType+5F↑j
mov     al, [edi+702h]
test    al, al
jnz     short loc_4526B5
pop     edi
mov     al, 1
pop     esi
retn    8
*/
}

// ==== BACKFILL 0x004528A0  sub_4528A0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
bool E4Recv_4528A0::sub_4528A0(int a2)
{
{
    int *v3;
    int v4;
    int v5;
    int v6;
    int *v7;
    int v8;
    int v9;
    double v10;
    int v12;
    int v13;
    int v14;
    v3 = (int *)this->Vf72(&v12);
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v7 = (int *)(*(int (__thiscall **)(int, int *))(*(int *)(a2) + 72))(a2, &v12);
    v8 = v4 - *v7;
    v9 = v7[2];
    v13 = v5 - v7[1];
    v12 = v8;
    v14 = v6 - v9;
    v10 = Math::Sqrt((double)v8 * (double)v8 + (double)(v6 - v9) * (double)(v6 - v9) + (double)v13 * (double)v13);
    return (int)Math::RoundToInt(v10) <= *(int *)(this->M1312 + 5900) << 8;
}
}

// ==== BACKFILL 0x00453D60  BuildingClass::MarkCellOccupied  cls=BuildingClass  sig=csp  renamed_refs=0 ====
void BuildingClass::MarkCellOccupied(int cell_x, int cell_y)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
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
  v2 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v5); /*0x453d9d*/
  v3 = v2[73]; /*0x453da2*/
  result = (int)(v2 + 73); /*0x453da8*/
  LOBYTE(v3) = v3 | 0x80; /*0x453dad*/
  *(_DWORD *)result = v3; /*0x453db0*/
  return result; /*0x453db2*/
}
}

// ==== BACKFILL 0x00453DC0  BuildingClass::ClearCellOccupied  cls=BuildingClass  sig=csp  renamed_refs=0 ====
void BuildingClass::ClearCellOccupied(int cell_x, int cell_y)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
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
  v2 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v5); /*0x453dfd*/
  v3 = v2[73]; /*0x453e02*/
  result = (int)(v2 + 73); /*0x453e08*/
  LOBYTE(v3) = v3 & 0x7F; /*0x453e0d*/
  *(_DWORD *)result = v3; /*0x453e10*/
  return result; /*0x453e12*/
}
}

// ==== BACKFILL 0x00454250  MissionClass::IsProducing  cls=BuildingClass  sig=csp  renamed_refs=1 ====
namespace ra2 { namespace game { int MissionClass::IsProducing() {
{
      int result;

      LOBYTE(result) = this->BuildingClass_field_bool_6DD != 0;
      return result;
}
} } }

// ==== BACKFILL 0x00454CE0  nullsub_5  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void nullsub_5()
{
  ;
}

// ==== BACKFILL 0x00455C20  ObjectClass::GetScreenCoords  cls=ObjectClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int ObjectClass::GetScreenCoords() {
{
      int *v2;
      bool v3;
      int v4;
      int v5;
      char *v6;
      BuildingTypeClass *v7;
      BuildingTypeClass *v8;
      BuildingTypeClass *v9;
      BuildingTypeClass *v10;
      int *v11;
      BuildingTypeClass *v12;
      int v13;
      BuildingTypeClass **v14;
      Tactical *lpVtbl;
      int v17;
      int v18;
      BuildingTypeClass *v19;
      BuildingTypeClass *v20;
      int v21;
      int a1;
      int v23;
      int v24;
      _BYTE v25[16];
      BuildingTypeClass **v26;

      v2 = (int *)this->vt43(&v18);
      a1 = *v2;
      v3 = a1 == this->q64C;
      v4 = v2[1];
      v23 = v4;
      v5 = v2[2];
      v24 = v5;
      lpVtbl = *(Tactical **)(*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9432] + 176);
      v17 = *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9432] + 180);
      if ( v3
        && v4 == this->q650
        && v5 == this->q654
        && *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9432] + 176) == this->q658
        && *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9432] + 180) == this->q65C )
      {
        v6 = (char *)this + 1596;
        v7 = (BuildingTypeClass *)this->q63C;
        v8 = (BuildingTypeClass *)this->q640;
        v9 = (BuildingTypeClass *)this->q644;
        v10 = (BuildingTypeClass *)*((_DWORD *)v6 + 3);
      }
      else
      {
        Coord::To_Screen(*(_DWORD **)&DataGlobal_87F8E4.__pad_5568[9432], &a1, (IUnknown *)&v18);
        v11 = CalculateBuildingFoundationBounds(*((int **)this + 328), (BuildingTypeClass *)v25);
        v7 = (BuildingTypeClass *)(v18 + *v11);
        v8 = (BuildingTypeClass *)((char *)v19 + v11[1]);
        v12 = (BuildingTypeClass *)v11[2];
        v13 = v11[3];
        this->q64C = a1;
        v20 = v12;
        this->q650 = v23;
        this->q654 = v24;
        this->q658 = lpVtbl;
        this->q65C = v17;
        v14 = (BuildingTypeClass **)((char *)this + 1596);
        v19 = v8;
        v21 = v13;
        *v14 = v7;
        v14[1] = v8;
        v14[2] = v12;
        v10 = (BuildingTypeClass *)v13;
        v14[3] = (BuildingTypeClass *)v13;
        v9 = v20;
      }
      *v26 = v7;
      v26[1] = v8;
      v26[2] = v9;
      v26[3] = v10;
      return (int)v26;
}
} } }

// ==== BACKFILL 0x00455DA0  BuildingClass::CheckSpecialUpdateFlags  cls=BuildingClass  sig=csp  renamed_refs=0 ====
void BuildingClass::CheckSpecialUpdateFlags()
{
{
    int result;
    int v2;
    result = this->Type;
    v2 = *(int *)(result + 3768);
    LOBYTE(result) = v2 == 40 || v2 == 16 || *(char *)(result + 5804) || *(char *)(result + 5801);
    return result;
}

/* ASM:
mov     eax, [ecx+520h]
mov     ecx, [eax+0EB8h]
cmp     ecx, 28h ; '('
jz      short loc_455DCD
cmp     ecx, 10h
jz      short loc_455DCD
mov     cl, [eax+16ACh]
test    cl, cl
jnz     short loc_455DCD
mov     cl, [eax+16A9h]
test    cl, cl
jnz     short loc_455DCD
xor     al, al
retn
; ---------------------------------------------------------------------------

loc_455DCD:                             ; CODE XREF: BuildingClass__CheckSpecialUpdateFlags+F↑j
; BuildingClass__CheckSpecialUpdateFlags+14↑j ...
mov     al, 1
retn
*/
}

// ==== BACKFILL 0x00455DD0  globalHelper_055DD0  cls=unknown  sig=csp  renamed_refs=0 ====
unsigned int * sub_455DD0(int a1, unsigned int * a2)
{
{
    int v2;
    int *v3;
    int v4;
    int *v5;
    double v6;
    int v7;
    int v9;
    int v11;
    int *v12;
    int v14;
    int v15;
    int v16;
    int v17;
    v2 = a1;
    v3 = a2;
    v12 = 0;
    v9 = 0x7FFFFFFF;
    if ( (DataGlobal_89C828 & 1) == 0 )
  {
    DataGlobal_89C828 |= 1u;
    DataGlobal_89C7F0 = Math::RoundToInt(DataGlobal_89C820 * 20.0);
  }
    v4 = 0;
    v14 = *(int *)(v2 + 144);
    v11 = 0;
    if ( v14 <= 0 )
    return 0;
    while ( 1 )
  {
    v5 = *(int **)(*(int *)(v2 + 132) + 4 * v4);
    if ( (*(int (__thiscall **)(int *, int, int *))(*v3 + 632))(v3, 15, v5) )
    {
    v15 = v5[39] - v3[39];
    v16 = v5[40] - v3[40];
    v17 = v5[41] - v3[41];
    v6 = Math::Sqrt((double)v15 * (double)v15 + (double)v17 * (double)v17 + (double)v16 * (double)v16);
    v7 = Math::RoundToInt(v6);
    if ( v7 < v9 && v7 < DataGlobal_89C7F0 )
      {
    v12 = v5;
    v9 = v7;
      }
    v3 = a2;
    }
    v4 = ++v11;
    if ( v11 >= v14 )
    break;
    v2 = a1;
  }
    return v12;
}
}

// ==== BACKFILL 0x00456640  BuildingClass::UpdateDetectionField  cls=BuildingClass  sig=csp  renamed_refs=1 ====
void BuildingClass::UpdateDetectionField()
{
{
    char *Field;
    int v3;
    int result;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9[2];
    Field = Diplomacy::GetField((char *)&DataGlobal_87F7E8, this->Type);
    v3 = 0;
    result = *((int *)(Field) + 4);
    if ( result > 0 )
  {
    do
    {
    v5 = *((int *)(Field) + 1);
    v6 = *(int *)(v5 + 8 * v3) + this->currentBurstCount;
    v7 = this->currentBurstCount;
    v8 = *(int *)(v5 + 8 * v3 + 4);
    v9[0] = v6;
    v9[1] = v7 + v8;
    FogOfWar::RevealCell((int)&DataGlobal_87F7E8, v9);
    result = *((int *)(Field) + 4);
    ++v3;
    }
    while ( v3 < result );
  }
    return result;
}

/* ASM:
sub     esp, 8
push    ebx
push    esi
push    edi
mov     edi, ecx
mov     ecx, 87F7E8h
mov     eax, [edi+520h]
push    eax
call    Diplomacy__GetField
mov     ebx, eax
xor     esi, esi
mov     eax, [ebx+10h]
test    eax, eax
jle     short loc_45669F

loc_456664:                             ; CODE XREF: BuildingClass__UpdateDetectionField+5D↓j
mov     ecx, [ebx+4]
mov     eax, [edi+208h]
mov     edx, [ecx+esi*8]
lea     ecx, [ecx+esi*8]
add     eax, edx
mov     edx, [edi+20Ch]
mov     ecx, [ecx+4]
mov     [esp+14h+var_8], eax
add     ecx, edx
lea     edx, [esp+14h+var_8]
mov     [esp+14h+var_4], ecx
push    edx
mov     ecx, 87F7E8h
call    FogOfWar__RevealCell
mov     eax, [ebx+10h]
inc     esi
cmp     esi, eax
jl      short loc_456664

loc_45669F:                             ; CODE XREF: BuildingClass__UpdateDetectionField+22↑j
pop     edi
pop     esi
pop     ebx
add     esp, 8
retn
*/
}

// ==== BACKFILL 0x004566B0  BuildingClass::GetPowerFrame  cls=BuildingClass  sig=csp  renamed_refs=0 ====
int BuildingClass::GetPowerFrame()
{
    BuildingTypeClass* type = this->Type;                 // v2 = *(this + 1312)  [Type]
    int result = type->PsychicDetectionRadius;            // result = *(v2 + 5900)
    if (result <= 0)
    {
        if (type->GapGenerator)                           // *(v2 + 3281)
        {
            if (this->gapSuperCharged)                    // *(this + 616)
                return type->SuperGapRadiusInCells;       // *(v2 + 3283)
            else
                return type->GapRadiusInCells;            // *(v2 + 3282)
        }
        else if (type->SensorArray || type->CloakGenerator)   // *(v2 + 5832) || *(v2 + 5831)
        {
            return type->CloakRadiusInCells;              // *(v2 + 5895)
        }
        else
        {
            // 0x70E1A0 (TechnoClass::GetPoweredWeaponSlot) is a weapon-slot selector:
            // house-power-gated pick through vtable slot 254 (building impl
            // 0x4526F0 walks Upgrades@+0x5EC / UpgradeLevel@+0x702 / occupant
            // types), returning a pointer to the WeaponTypeClass* holder.
            WeaponTypeClass** weaponSlot = GetPoweredWeaponSlot();
            if (IsNonNullPtr(weaponSlot))                 // 0x70E240
            {
                // *(*(_DWORD*)updated + 180): WeaponTypeClass::MinimumRange
                // @+0xB4 (til-verified; same object's Name@+0x64 is rendered as
                // a string in DisplayBuildingInfoPanel @0x4B99FA).
                int minimumRange = (*weaponSlot)->MinimumRange;
                if (minimumRange > 0)
                    return minimumRange / 256;            // leptons -> cells
            }
            return 0;
        }
    }
    return result;
}

// ==== BACKFILL 0x004575B0  HouseClass::Add  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::Add() {
{
      char i;
      int v3;
      int v4;

      for ( i = this->q702; i > 0; i = this->q702 )
      {
        v3 = *((_DWORD *)this + i + 378);
        v4 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v3 + 184))(v3, this->q21C, 1);
        HouseClass::AddPower(*((_DWORD **)this + 135), v4);
        BuildingClass::ClearSuperWeaponAnim((int)this);
        *(_BYTE *)(this->q21C + 22392) = 1;
        *(_BYTE *)(this->q21C + 22393) = 1;
      }
      return this->vt104(1);
}
} }

// ==== BACKFILL 0x00457620  BuildingClass::IsFactorySelectable  cls=BuildingClass  sig=csp  renamed_refs=0 ====
bool BuildingClass::IsFactorySelectable()
// 0x457620
{
return this->Type->Is1x1AndUndeployable_BuildingMassSelectable();

/* ASM:
mov     ecx, [ecx+520h]
jmp     BuildingClass__Is1x1AndUndeployable_BuildingMassSelectable
*/
}

// ==== BACKFILL 0x00457630  BuildingClass::SWAvailable  cls=BuildingClass  sig=csp  renamed_refs=0 ====
bool BuildingClass::SWAvailable()
{
    // IDA 0x457630. SuperWeapon@Type+0x16F0, SWTypes array @0xA83CBC,
    // chain [SWType+0x28] -> [+0xC8] -> [+0xDF8] hands a pointer to
    // DynamicVector::GetOrGrow over Owner->SuperWeaponsAvailable (+0x5550).
    // Member identity of the two mid-hops sits in til gap regions; the
    // Type/SecretBuilding/ArrayIndex chain below is the semantic reading
    // (YR secret-building unlock rule) - verify in the A1 pass.
    int superWeaponIndex = this->Type->SuperWeapon;
    if (superWeaponIndex == -1)
        return false;

    SuperWeaponTypeClass* superWeaponType = g_SuperWeaponTypeItems[superWeaponIndex];
    BuildingTypeClass* owningType = superWeaponType->Type;
    BuildingTypeClass* requiredBuilding = owningType->SecretBuilding;

    if (!requiredBuilding
        || DynamicVector::GetOrGrow(&this->Owner->SuperWeaponsAvailable, requiredBuilding->ArrayIndex))
        return true;

    return false;
}

// ==== BACKFILL 0x00457A10  sub_457A10  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_457A10::sub_457A10()
{
{
    int v2;
    short *i;
    int v5;
    int v6;
    v2 = *(int *)((int (__thiscall *)(int **, int *))(*(void**)this)[110])(this, &v6);
    for ( i = (short *)(*(int (__thiscall **)(int, int))(*(void**)this->M1312 + 144))(this->M1312, 0);
    *i != 0x7FFF || i[1] != 0x7FFF;
    i += 2 ) {
    LOWORD(v5) = v2 + *i;
    HIWORD(v5) = HIWORD(v2) + i[1];
    v6 = v5;
    if ( (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v6) + 80) & 0x400000) == 0 )
    return 0;
  }
    return 1;
}
}

// ==== BACKFILL 0x004581F0  BuildingClass::MissionStubReturnZero6  cls=BuildingClass  sig=csp  renamed_refs=0 ====
int  BuildingClass::MissionStubReturnZero6() {
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BuildingClass::_vt258(#377 *this)
{
  return *((_DWORD *)this + 421); /*0x4581f6*/
}
}

// ==== BACKFILL 0x00458A00  UnitClass::IsCellBlockedByBridge  cls=UnitClass  sig=csp  renamed_refs=0 ====
int UnitClass::IsCellBlockedByBridge(void* aP1)
{
{
    MouseClass *v2;
    int v5;
    int v6;
    v2 = (MouseClass *)aP1;
    if ( Cell::IsBridge(aP1) != this )
    return 0;
    v5 = this->FootClass_field_520;
    if ( *(int *)(v5 + 5664) == -1 )
    return 1;
    if ( *(char *)(v5 + 5803) && this->spawnManager )
    return 1;
    v6 = *(short *)&v2->__pad_18[12];
    return *(short *)this->GetCellCoords_Alt(&aP1)
    + *(int *)(this->FootClass_field_520 + 5664) > v6;
}
}

// ==== BACKFILL 0x00458DB0  BuildingClass::HasActiveParam  cls=BuildingClass  sig=csp  renamed_refs=0 ====
bool BuildingClass::HasActiveParam()
{
    // Binary: virtual self-dispatch through vtable slot 256 (+1024) =
    // BuildingClass::CheckMissionGuard (binary-verified 2026-09-08; the old
    // member-read rendering was a mistranslation made under the verifier's
    // indirect-call blind spot).
    if (this->CheckMissionGuard())
        return true;
    return TechnoClass::HasActiveParam();
}

// ==== BACKFILL 0x00458DD0  BuildingClass::CheckMissionGuard  cls=BuildingClass  sig=csp  renamed_refs=0 ====
bool BuildingClass::CheckMissionGuard() {
    // IDA 0x458DD0, BuildingClass vtable slot 256 (IDA name BuildingClass::_vt256).
    // Type@+0x520 (ASM: mov eax,[ecx+520h]); CanBeOccupied@Type+0x157B,
    // CanOccupyFire@Type+0x157C (INI-verified YRpp flags); vtable[+1032] =
    // slot 258 = MissionStubReturnZero6 - returns 0 for buildings, so the
    // third clause is inert in the original binary (kept for fidelity).
    return this->Type->CanBeOccupied
        && this->Type->CanOccupyFire
        && this->MissionStubReturnZero6() > 0;

/* ASM:
mov     eax, [ecx+520h]
mov     dl, [eax+157Bh]
test    dl, dl
jz      short loc_458DFC
mov     dl, [eax+157Ch]
test    dl, dl
jz      short loc_458DFC
mov     eax, [ecx]
call    dword ptr [eax+408h]
test    eax, eax
jle     short loc_458DFC
mov     eax, 1
retn
; ---------------------------------------------------------------------------

loc_458DFC:                             ; CODE XREF: BuildingClass__CheckMissionGuard+E↑j
; BuildingClass__CheckMissionGuard+18↑j ...
xor     eax, eax
retn
*/
}

// ==== BACKFILL 0x00459870  BuildingClass::MissionStubReturnZero  cls=BuildingClass  sig=csp  renamed_refs=0 ====
int  BuildingClass::MissionStubReturnZero() {
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BuildingClass::_vt181(#377 *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 328) + 5412); /*0x45987c*/
}
}

// ==== BACKFILL 0x00459880  BuildingClass::MissionStubReturnZero2  cls=BuildingClass  sig=csp  renamed_refs=0 ====
int  BuildingClass::MissionStubReturnZero2() {
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BuildingClass::_vt182(#377 *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 328) + 5416); /*0x45988c*/
}
}

// ==== BACKFILL 0x00459890  BuildingClass::MissionStubReturnZero3  cls=BuildingClass  sig=csp  renamed_refs=0 ====
int  BuildingClass::MissionStubReturnZero3() {
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BuildingClass::_vt183(#377 *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 328) + 5420); /*0x45989c*/
}
}

// ==== BACKFILL 0x00459C00  BuildingClass::IsMassSelectable  cls=BuildingClass  sig=csp  renamed_refs=0 ====
bool BuildingClass::IsMassSelectable()
// 0x459c00
{
int result = 0;
if (this->Type->Is1x1AndUndeployable_BuildingMassSelectable())
    result = TechnoClass::CanMoveToCell();
return result != 0;

/* ASM:
push    esi
mov     esi, ecx
mov     ecx, [esi+520h]
call    BuildingClass__Is1x1AndUndeployable_BuildingMassSelectable
test    al, al
jnz     short loc_459C14
pop     esi
retn
; ---------------------------------------------------------------------------

loc_459C14:                             ; CODE XREF: BuildingClass__IsMassSelectable+10↑j
mov     ecx, esi
call    TechnoClass__CanMoveToCell
pop     esi
retn
*/
}

// ==== BACKFILL 0x00459D80  BuildingClass::StubReturnFalse  cls=TechnoClass  sig=csp  renamed_refs=0 ====
bool BuildingClass::StubReturnFalse()   { return false; }

// ==== BACKFILL 0x00459D90  TechnoClass::MissionStubReturnZero4  cls=TechnoClass  sig=csp  renamed_refs=0 ====
int TechnoClass::MissionStubReturnZero4() { return 0; }

// ==== BACKFILL 0x00459DA0  BuildingClass::MissionStubReturnZero5  cls=TechnoClass  sig=csp  renamed_refs=0 ====
int  BuildingClass::MissionStubReturnZero5() { return 0; }

// ==== BACKFILL 0x00459DB0  BuildingClass::ClearLimpetCheck  cls=TechnoClass  sig=csp  renamed_refs=0 ====
TechnoClass * BuildingClass::ClearLimpetCheck()
{
{
    TechnoClass *v2;
    *(int *)v2->__pad_0 = g_TerrainTypeTable;
    return v2;
}
}

// ==== BACKFILL 0x00459DC0  AbstractClass::COMStub_Return0_190  cls=TechnoClass  sig=csp  renamed_refs=0 ====
int AbstractClass::COMStub_Return0_190()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x00459DD0  TechnoClass::StubReturnFalse2  cls=TechnoClass  sig=csp  renamed_refs=0 ====
bool TechnoClass::StubReturnFalse2() { return false; }

// ==== BACKFILL 0x00459DE0  AbstractClass::COMStub_Return0_205  cls=TechnoClass  sig=csp  renamed_refs=0 ====
int AbstractClass::COMStub_Return0_205()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x00459DF0  BuildingClass::StubReturnFalse3  cls=TechnoClass  sig=csp  renamed_refs=0 ====
bool BuildingClass::StubReturnFalse3()  { return false; }

// ==== BACKFILL 0x00459E00  BuildingClass::StubReturnFalse4  cls=TechnoClass  sig=csp  renamed_refs=0 ====
bool BuildingClass::StubReturnFalse4()  { return false; }

// ==== BACKFILL 0x00459E10  BuildingClass::StubReturnFalse10  cls=TechnoClass  sig=csp  renamed_refs=0 ====
bool BuildingClass::StubReturnFalse10() { return false; }

// ==== BACKFILL 0x00459E20  BuildingClass::StubReturnFalse11  cls=TechnoClass  sig=csp  renamed_refs=0 ====
bool BuildingClass::StubReturnFalse11() { return false; }

// ==== BACKFILL 0x00459E30  BuildingClass::StubReturnFalse12  cls=TechnoClass  sig=csp  renamed_refs=0 ====
bool BuildingClass::StubReturnFalse12() { return false; }

// ==== BACKFILL 0x00459E40  BuildingClass::StubReturnFalse13  cls=TechnoClass  sig=csp  renamed_refs=0 ====
bool BuildingClass::StubReturnFalse13() { return false; }

// ==== BACKFILL 0x00459E50  BuildingClass::StubReturnFalse14  cls=TechnoClass  sig=csp  renamed_refs=0 ====
bool BuildingClass::StubReturnFalse14() { return false; }

// ==== BACKFILL 0x00459E60  AbstractClass::COMStub_Return0_270  cls=TechnoClass  sig=csp  renamed_refs=0 ====
int AbstractClass::COMStub_Return0_270()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x00459E70  BuildingClass::Mission_Guard  cls=BuildingClass  sig=csp  renamed_refs=0 ====
int BuildingClass::Mission_Guard()
{
return 1824;
}

// ==== BACKFILL 0x00459ED0  BuildingClass::GetTypeField60  cls=BuildingClass  sig=csp  renamed_refs=0 ====
const wchar_t* BuildingClass::GetTypeField60()
// 0x459ed0
{
return this->Type->UIName;

/* ASM:
mov     eax, [ecx+520h]
mov     eax, [eax+60h]
retn
*/
}

// ==== BACKFILL 0x00459EE0  BuildingClass::GetTypePtr  cls=BuildingClass  sig=csp  renamed_refs=0 ====
BuildingTypeClass* BuildingClass::GetTypePtr() { return Type; }

// ==== BACKFILL 0x00459FF0  BuildingClass::initBuildingData  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace gamemd { void BuildingClass::initBuildingData() {
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->uniqueId = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->vtable1 = 0;
  }
    this->IsAllocated = 0;
    this->vtable2 = 0;
}
} }

// ==== BACKFILL 0x0045A020  BuildingClass::updateFactoryProduction  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace gamemd { int BuildingClass::updateFactoryProduction(int a2) {
{
    if ( this->vtable3 )
    return (unsigned int)(a2 - this->vtable1) >> 2;
    else
    return 0;
}
} }

// ==== BACKFILL 0x0045A050  Stream::GetChecked  cls=Stream  sig=csp  renamed_refs=0 ====
int Stream::GetChecked()
{
{
    if ( !*(int *)this )
    WinAPI::Wrapper(-2147467261);
    return *(int *)this;
}
}

// ==== BACKFILL 0x0045A130  Rect::Construct  cls=Rect  sig=csp  renamed_refs=0 ====
AbstractClass * Rect::Construct(IUnknown * aP1, AbstractClass * aP2, AbstractClass * aP3)
{
{
    *(void**)this = aP1->field_0;
    this->Y = aP1->field_4;
    this->Width = aP2;
    this->Height = aP3;
    return (AbstractClass *)this;
}
}

// ==== BACKFILL 0x0045A170  CellClass::SetField2C  cls=CellClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int CellClass::SetField2C() {
{
    int result;
    result = *(void**)this;
    if ( *(void**)this )
    return (*(int (__stdcall **)(int))(*(int *)(result) + 4))(result);
    return result;
}
} }

// ==== BACKFILL 0x0045A270  VectorClass::Cleanup  cls=VectorClass  sig=csp  renamed_refs=0 ====
void VectorClass::Cleanup()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// ==== BACKFILL 0x0045A420  FootClass::Release  cls=VectorClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int FootClass::Release(int a1, void* a2) {
{
      _DWORD *v4;
      int v6;
      int i;

      if ( a2 )
      {
        this->vfptr_3 = 0;
        if ( a3 )
          v4 = a3;
        else
          v4 = __2_YAPAXI_Z(4 * a2);
        this->vfptr_3 = 1;
        if ( v4 )
        {
          if ( this->vfptr_1 )
          {
            v6 = this->vfptr_2;
            if ( a2 < v6 )
              v6 = a2;
            for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->vfptr_1 + 4 * i - 4) )
              ++i;
            if ( this->q00D )
            {
              __3_YAXPAX_Z(*((void **)this + 1));
              this->vfptr_1 = 0;
            }
          }
          this->vfptr_1 = v4;
          this->vfptr_2 = a2;
          this->q00D = a3 == 0;
          return 1;
        }
        else
        {
          return 0;
        }
      }
      else
      {
        this->vt3();
        return 1;
      }
}
} } }

// ==== BACKFILL 0x0045A500  FootClass::GetSize  cls=VectorClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int FootClass::GetSize(int * a2) {
{
    int result;
    int v3;
    int *i;
    if ( !this->vfptr_3 )
    return 0;
    v3 = this->vfptr_2;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
} } }

// ==== BACKFILL 0x0045A610  BuildingClass::FindInPointerArray  cls=DynamicVector  sig=csp  renamed_refs=0 ====
int BuildingClass::FindInPointerArray(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->uniqueId;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->vtable1; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

// ==== BACKFILL 0x0045AA60  FootClass::QueryInterface  cls=VectorClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void* FootClass::QueryInterface(int a2) {
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_InfantryClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
} } }

// ==== BACKFILL 0x0045AD80  VectorClass::ConstructorWithVtable  cls=VectorClass  sig=csp  renamed_refs=0 ====
unsigned int * VectorClass::ConstructorWithVtable(TechnoTypeClass * aP1, TechnoTypeClass * aP2)
{
{
    this->Items = (void*)(0);
    this->Capacity = aP1;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_ParticleSystemTypeClass_const;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->Items = (void*)(aP2);
    return this;
    }
    this->Items = (void*)(__2_YAPAXI_Z(4 * (int)aP1));
    this->IsAllocated = 1;
  }
    return this;
}
}

// ==== BACKFILL 0x0045ADD0  DynamicVector::RemoveItem  cls=DynamicVector  sig=csp  renamed_refs=2 ====
char DynamicVector::RemoveItem(IUnknown * aP1)
{
{
    int v2;
    IUnknown *v3;
    int v4;
    v2 = this->DynamicVector_field_0x10;
    v3 = aP1;
    if ( (int)aP1 >= v2 )
    return 0;
    v4 = v2 - 1;
    this->DynamicVector_field_0x10 = v4;
    if ( (int)aP1 < v4 )
  {
    do
    {
    v3 = (IUnknown *)((char *)(v3) + 1);
    *(int *)(this->q004 + 4 * (int)v3 - 4) = *(int *)(this->q004 + 4 * (int)v3);
    }
    while ( (int)v3 < this->DynamicVector_field_0x10 );
  }
    return 1;
}
}

// ==== BACKFILL 0x0045AE10  Vector::RemoveAt  cls=Vector  sig=csp  renamed_refs=5 ====
char Vector::RemoveAt(AbstractClass * aP1)
{
{
    int v2;
    AbstractClass *v3;
    int v4;
    v2 = this->Vector_field_0x10;
    v3 = aP1;
    if ( (int)aP1 >= v2 )
    return 0;
    v4 = v2 - 1;
    this->Vector_field_0x10 = v4;
    if ( (int)aP1 < v4 )
  {
    do
    {
    v3 = (AbstractClass *)((char *)(v3) + 1);
    *(int *)(this->Vector_field_0x4 + 4 * (int)v3 - 4) = *(int *)(this->Vector_field_0x4 + 4 * (int)v3);
    }
    while ( (int)v3 < this->Vector_field_0x10 );
  }
    return 1;
}
}

// ==== BACKFILL 0x0045DD50  sub_45DD50  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_45DD50::sub_45DD50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_45DD50(void *this)
{
  ObjectClass *v2; // edi
  const void **v3; // esi

  v2 = 0; /*0x45dd55*/
  v3 = (const void **)&off_819288; /*0x45dd57*/
  while ( _strcmpi(*v3, this) ) /*0x45dd6a*/
  {
    v3 += 2; /*0x45dd6c*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x45dd6f*/
    if ( (int)v3 >= (int)dword_8192B8 ) /*0x45dd76*/
      return 0; /*0x45dd7d*/
  }
  return dword_81928C[2 * (_DWORD)v2]; /*0x45dd78*/
}
}

// ==== BACKFILL 0x0045E7B0  BuildingTypeClass::FindIndexByName  cls=BuildingTypeClass  sig=csp  renamed_refs=0 ====
int BuildingTypeClass::FindIndexByName()
{
{
    int v2;
    if ( !this )
    return -1;
    v2 = 0;
    if ( (int)g_TriggerClassCount <= 0 )
    return -1;
    while ( _strcmpi((const void *)(*((int *)(g_TriggerTypeCount) + v2) + 36), this) )
  {
    if ( ++v2 >= (int)g_TriggerClassCount )
    return -1;
  }
    return v2;
}
}

// ==== BACKFILL 0x0045E800  AbstractClass::clearRefCount  cls=AbstractClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::clearRefCount(void* a1, int a2) {
{
    int v4;
    BuildingClass *v5;
    int v6;
    int v8[3];
    v4 = __2_YAPAXI_Z(0x720u);
    if ( !v4 )
    return 0;
    v5 = BuildingClass::Construct(v4, this, a2);
    if ( !v5 )
    return 0;
    v8[2] = 0;
    v6 = *a2 << 8;
    v8[1] = (*((int*)(a2) + 1) << 8) + 128;
    v8[0] = v6 + 128;
    return (*(char (__thiscall **)(BuildingClass *, int *, int))(*(int *)v5->__pad_0 + 216))(v5, v8, 0);
}
} } }

// ==== BACKFILL 0x0045E880  AbstractClass::addRefCount  cls=AbstractClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::addRefCount(int a1) {
{
    int v3;
    v3 = __2_YAPAXI_Z(0x720u);
    if ( v3 )
    return BuildingClass::Construct(v3, this, aP2);
    else
    return 0;
}
} } }

// ==== BACKFILL 0x0045E8B0  sub_45E8B0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_45E8B0::sub_45E8B0(int a2, int a3, int a4, int a5)
{
{
    int result;
    char *v6;
    result = 3 * a2 + 963;
    v6 = (char *)(this + 3 * a2);
    *((int *)(v6) + 961) = a3;
    *((int *)(v6) + 962) = a4;
    *(this + result) = a5;
    return result;
}
}

// ==== BACKFILL 0x0045E8F0  ProcessDataCCFileClass  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char sub_45E8F0()
{
{
    int SubFile;
    int v1;
    int v2;
    int v3;
    int i;
    int v6[4];
    LOBYTE(SubFile) = (char)DataGlobal_89DDBC;
    if ( !DataGlobal_89DDBC )
  {
    DataGlobal_89DDBC = (void *)SearchMIXFile(aBuildngzSha, 0);
    Building::GetFoundationSize(v6, 0);
    SubFile = MixFileClass::GetSubFile((char **)DataGlobal_89DDBC, 0);
    v1 = *((short *)(DataGlobal_89DDBC) + 1);
    if ( *((short *)(DataGlobal_89DDBC) + 2) > 0 )
    {
    v2 = SubFile;
    v3 = *((short *)(DataGlobal_89DDBC) + 2);
    do
      {
    for ( i = 0; i < v1; ++i )
        {
    LOBYTE(SubFile) = *(char *)(v2 + i);
    if ( (char)SubFile )
          {
    LOBYTE(SubFile) = SubFile - 65;
    *(char *)(v2 + i) = SubFile;
          }
        }
    v2 += v1;
    --v3;
      }
    while ( v3 );
    }
  }
    return SubFile;
}
}

// ==== BACKFILL 0x0045EBD0  AbstractClass::checkPointer  cls=AbstractClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void* AbstractClass::checkPointer(void* a1) {
{
      _DWORD *FoundationSize;
      int v3;
      int v4;
      _DWORD v6[4];

      if ( this->vt39() )
      {
        FoundationSize = Building::GetFoundationSize(v6, 0);
        v3 = FoundationSize[2];
        v4 = FoundationSize[3];
      }
      else
      {
        v3 = 0;
        v4 = 0;
      }
      *a2 = v3;
      a2[1] = v3;
      a2[2] = v4;
      return a2;
}
} } }

// ==== BACKFILL 0x0045EC20  AbstractClass::validatePointer  cls=AbstractClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void* AbstractClass::validatePointer(int a1) {
{
    int *result;
    if ( (DataGlobal_89C890 & 1) == 0 )
  {
    DataGlobal_89C890 |= 1u;
    DataGlobal_89C8E8 = 2147450879;
    atexit(nullsub_107);
  }
    result = *(this + 895);
    if ( !result )
    return &DataGlobal_89C8E8;
    return result;
}
} } }

// ==== BACKFILL 0x0045EC90  BuildingTypeClass::GetFoundationWidth  cls=BuildingTypeClass  sig=csp  renamed_refs=1 ====
namespace gamemd { short BuildingTypeClass::GetFoundationWidth() const {
{
    return DataGlobal_8192B8[this->DeployingAnim];
}
} }

// ==== BACKFILL 0x0045ECA0  BuildingTypeClass::GetFoundationHeight  cls=BuildingTypeClass  sig=csp  renamed_refs=2 ====
namespace gamemd { short BuildingTypeClass::GetFoundationHeight(IUnknown * aP1) const {
{
    if ( (char)aP1 && this->Bib )
    return DataGlobal_819310[this->DeployingAnim] + 1;
    else
    return DataGlobal_819310[this->DeployingAnim];
}
} }

// ==== BACKFILL 0x0045ECE0  BuildingTypeClass::GetMaxPips  cls=BuildingTypeClass  sig=csp  renamed_refs=2 ====
int BuildingTypeClass::GetMaxPips()
{
{
    int result;
    int v2;
    int v3;
    result = 60 * DataGlobal_8192B8[this->DeployingAnim] / 8;
    if ( this->PipScale == 2 )
  {
    if ( this->Weeder )
    {
    v2 = g_RulesClass_Instance[1].?[1];
    if ( v2 >= 0 )
      {
    if ( v2 <= result )
    return g_RulesClass_Instance[1].?[1];
      }
    else
      {
    return 0;
      }
    }
    else
    {
    v3 = this->q800;
    if ( v3 >= 0 )
      {
    if ( v3 <= result )
    return v3;
      }
    else
      {
    return 0;
      }
    }
  }
    else if ( this->PipScale != 4 )
  {
    return ObjectClass::GetModeSpecificValue((int *)this);
  }
    return result;
}
}

// ==== BACKFILL 0x0045ED50  AbstractClass::removePointer  cls=AbstractClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::removePointer() {
{
      int Member388;
      int *v3;
      int v4;
      int v5;
      int v6;
      int v7;

      Member388 = TechnoClass::GetMember388(this);
      v3 = (int *)g_RulesClass_Instance->?[0];
      v4 = *v3;
      if ( this == **(_DWORD ***)(*v3 + 1004) && !LOBYTE(g_RulesClass_Instance[1].?[3]) )
      {
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v3[1] + 172))(v3[1]);
        Member388 += (v5 + (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 172))(v4)) / -2;
      }
      v6 = this->qEA0;
      if ( !v6 )
        return Member388;
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 172))(v6);
      return (Member388 - v7) & ((Member388 - v7 <= 0) - 1);
}
} } }

// ==== BACKFILL 0x0045EDD0  AbstractClass::addPointer  cls=AbstractClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::addPointer(int a1) {
{
      int v4;
      int *v5;
      int v6;
      int v7;
      int v8;
      int v10;

      v4 = TechnoTypeClass::ComputeValueSimple(this, a2);
      v5 = (int *)g_RulesClass_Instance->?[0];
      v6 = *v5;
      if ( this == **(_DWORD ***)(*v5 + 1004) && !LOBYTE(g_RulesClass_Instance[1].?[3]) )
      {
        v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5[1] + 132))(v5[1], a2);
        v4 += (v10 + (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 132))(v6, a2)) / 2;
      }
      v7 = this->qEA0;
      if ( !v7 )
        return v4;
      v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 132))(v7, a2);
      return v8 + v4 <= 0 ? 0 : v8 + v4;
}
} } }

// ==== BACKFILL 0x0045F040  AbstractClass::LoadTypeFile  cls=AbstractClass  sig=csp  renamed_refs=2 ====
namespace ra2 { namespace game { int AbstractClass::LoadTypeFile() {
{
      int result;
      void *EntireFile;
      void *v4;
      _DWORD v5[22];
      _BYTE v6[12];
      int v7;
      _DWORD v8[22];
      _BYTE v9[12];
      int v10;
      char Destination[260];

      result = this->q0A4;
      if ( !result && this->q1760 )
      {
        if ( this->q176A )
        {
          CCFileClass::Construct(v5, (char *)(this + 5994));
          CCFileClass::Open(v5, 0);
          EntireFile = CCFileClass::ReadEntireFile(v5);
          this->q0A4 = EntireFile;
          if ( EntireFile )
          {
            this->__pad_0A8 = 1;
          }
          else
          {
            strncpy(Destination, (const char *)(this + 5994), 0x13u);
            ObjectTypeClass::SetRTTI71(Destination);
            CCFileClass::Construct(v8, Destination);
            v4 = CCFileClass::ReadEntireFile(v8);
            this->q0A4 = v4;
            if ( v4 )
              this->__pad_0A8 = 1;
            v8[0] = &vt_CCFileClass;
            v10 = 0;
            Vector::Clear((int)v9);
            v8[0] = &off_7E1668;
            BufferIOFileClass::Dtor(v8);
          }
          v5[0] = &vt_CCFileClass;
          v7 = 0;
          Vector::Clear((int)v6);
          v5[0] = &off_7E1668;
          BufferIOFileClass::Dtor(v5);
        }
        return this->q0A4;
      }
      return result;
}
} } }
