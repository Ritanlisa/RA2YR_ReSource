// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00480110  BuildingClass::CalcDrawPos  cls=BuildingClass  sig=csp  renamed_refs=1  residual=q11B ====
Point2D* BuildingClass::CalcDrawPos(Point2D* out) const
{
Point2D out;
int* baseCoords = globalHelper_0FDCC0((int*)&out, this->q044);
int baseX = baseCoords[0];
int baseY = baseCoords[1];
if ((char)this->currentRank >= 0) {
    if (this->q044 == 239)
        baseY -= 15;
    else {
    }
} else {
    unsigned int gateStage = this->q11E;
    baseY -= 16;
    if (gateStage >= 9 && gateStage <= 0x11)
        baseY -= 15;
    else {
    }
}
int drawY = *(int*)&DataGlobal_87F8E4[14104] - 15 * (char)this->q11B + baseY;
out.X = baseX + 30;
out.Y = drawY + 15;
return out;
}

// ==== BACKFILL 0x00480A30  CellClass::GetCoords  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* CellClass::GetCoords(void* aP1) {
{
    ObjectClass *v2;
    int v3;
    AbstractClass *v4;
    int inited;
    int v7[2];
    v2 = (ObjectClass *)this->smudgeTypeIndex;
    v3 = ((short)v2 << 8) + 128;
    v4 = (AbstractClass *)((SHIWORD(v2) << 8) + 128);
    v7[0] = 128;
    v7[1] = 128;
    inited = Isometric::InitTables((int)this, (IUnknown *)v7);
    aP1->field_0 = v3;
    aP1->field_4 = (int)v4;
    aP1->field_8 = inited;
    return &aP1->field_0;
}
} }

// ==== BACKFILL 0x00481870  CellClass::SetThreatBounds  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::SetThreatBounds(int aP1, int a3) {
{
      int v3;
      IUnknown *result;
      int i;
      int v6;
      int v7;

      v7 = this->smudgeTypeIndex;
      v3 = Cell::PosToLinearIndex((__int16 *)&v7);
      result = HouseClass_Count;
      for ( i = 0; i < (int)HouseClass_Count; ++i )
      {
        v6 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * i];
        if ( v6 && *(BuildingTypeClass **)(v6 + 48) != aP1 && !HouseClass::IsAllied((_DWORD *)v6, (IUnknown *)aP1) )
          HouseClass::SetThreat_Bounds((char *)v6, v3, a3);
        result = HouseClass_Count;
      }
      return (int)result;
}
} }

// ==== BACKFILL 0x004818E0  ObjectClass::UpdateTiberiumGrowth  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::UpdateTiberiumGrowth(int a1) {
{
      int v3;
      int BuildingByTiberiumType;
      int v5;
      int v6;
      _DWORD *v7;
      int v8;
      bool v9;
      _DWORD *v10;
      int v11;
      unsigned __int8 v12;
      int v14;
      int v15;
      int v16;

      v3 = this->q044;
      if ( v3 == -1 )
        return 0;
      BuildingByTiberiumType = FindBuildingByTiberiumType(v3);
      v5 = BuildingByTiberiumType;
      if ( BuildingByTiberiumType == -1 )
        return 0;
      v6 = 0;
      v7 = *(_DWORD **)&BuildingClass_InstanceArray->__pad_0[4 * BuildingByTiberiumType];
      v15 = v7[46];
      if ( a2 )
        this->q044 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, v7[56], v7[56] + 700 * v7[58] - 700);
      v8 = 0;
      v9 = 1;
      do
      {
        if ( v9 )
        {
          v11 = v8 & 7;
          v14 = this->objectTypeFlags;
          LOWORD(v16) = v14 + LOWORD(Direction_X_Offsets[v11]);
          HIWORD(v16) = HIWORD(v14) + HIWORD(Direction_X_Offsets[v11]);
          v14 = v16;
          v10 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v14);
        }
        else
        {
          v10 = (_DWORD *)this;
        }
        if ( FindBuildingByTiberiumType(v10[17]) == v5 )
          ++v6;
        v9 = (unsigned int)++v8 < 8;
      }
      while ( v8 < 8 );
      v12 = DataGlobal_81CD28[4 * (v6 % *(_DWORD *)(*(_DWORD *)&BuildingClass_InstanceArray->__pad_0[4 * v5] + 228))];
      this->q11E = v12;
      return v15 * (v12 + 1);
}
} } }

// ==== BACKFILL 0x00483480  CellClass::DamageAllObjects  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::DamageAllObjects() {
{
    int *i;
    int result;
    i = (int *)this->firstObject;
    for ( ; i; i = (int *)i[12] )
    result = (*(int (__thiscall **)(int *))(*i + 252))(i);
    return result;
}
} }

// ==== BACKFILL 0x00483620  BuildingClass::IsTiberiumCollectorEligible  cls=BuildingClass  sig=csp  renamed_refs=1  residual=- ====
bool BuildingClass::IsTiberiumCollectorEligible() {
if (!*((_BYTE*)g_ScenarioClass_Instance + 13478))
    return false;
int storageTypeIndex = FindBuildingByTiberiumType(this->q044);
if (storageTypeIndex == -1)
    return false;
int storageType = ((int*)BuildingClass_InstanceArray)[storageTypeIndex];
if (this->q11C)
    return false;
if ((unsigned char)this->q11E < *(unsigned int*)(storageType + 228) - 1)
    return *(double*)(storageType + 176) >= 0.00001;
return false;

/* ASM:
mov     eax, ds:0A8B230h
push    esi
mov     esi, ecx
mov     cl, [eax+34A6h]
test    cl, cl
jnz     short loc_483636
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_483636:                             ; CODE XREF: BuildingClass__IsTiberiumCollectorEligible+10↑j
mov     ecx, [esi+44h]
call    FindBuildingByTiberiumType
cmp     eax, 0FFFFFFFFh
jnz     short loc_483647
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_483647:                             ; CODE XREF: BuildingClass__IsTiberiumCollectorEligible+21↑j
mov     ecx, dword_A8ED54+80798h
mov     eax, [ecx+eax*4]
mov     cl, [esi+11Ch]
test    cl, cl
jz      short loc_48365E
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_48365E:                             ; CODE XREF: BuildingClass__IsTiberiumCollectorEligible+38↑j
mov     ecx, [eax+0E4h]
xor     edx, edx
mov     dl, [esi+11Eh]
dec     ecx
cmp     edx, ecx
jl      short loc_483675
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_483675:                             ; CODE XREF: BuildingClass__IsTiberiumCollectorEligible+4F↑j
fld     qword ptr [eax+0B0h]
fcomp   ds:dbl_7E3810
fnstsw  ax
test    ah, 1
jz      short loc_48368C
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_48368C:                             ; CODE XREF: BuildingClass__IsTiberiumCollectorEligible+66↑j
mov     al, 1
pop     esi
retn
*/
}

// ==== BACKFILL 0x00483690  BuildingClass::IsTiberiumSiloEligible  cls=BuildingClass  sig=csp  renamed_refs=2  residual=- ====
bool BuildingClass::IsTiberiumSiloEligible() {
if (*(char*)g_ScenarioClass_Instance >= 0)
    return false;
int storageTypeIndex = FindBuildingByTiberiumType(this->q044);
if (storageTypeIndex == -1)
    return false;
int storageType = ((int*)BuildingClass_InstanceArray)[storageTypeIndex];
if ((unsigned char)this->q11E <= storageTypeIndex / 2)
    return false;
if (this->q11C)
    return false;
if (*(double*)(storageType + 160) >= 0.00001)
    return this->flashing == 0;
return false;

/* ASM:
mov     eax, ds:0A8B230h
push    esi
mov     esi, ecx
push    edi
test    byte ptr [eax], 80h
jnz     short loc_4836A3
pop     edi
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_4836A3:                             ; CODE XREF: BuildingClass__IsTiberiumSiloEligible+C↑j
mov     ecx, [esi+44h]
call    FindBuildingByTiberiumType
mov     edi, eax
cmp     edi, 0FFFFFFFFh
jnz     short loc_4836B7
pop     edi
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_4836B7:                             ; CODE XREF: BuildingClass__IsTiberiumSiloEligible+20↑j
mov     eax, edi
xor     ecx, ecx
mov     cl, [esi+11Eh]
cdq
sub     eax, edx
sar     eax, 1
cmp     ecx, eax
jg      short loc_4836CF
pop     edi
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_4836CF:                             ; CODE XREF: BuildingClass__IsTiberiumSiloEligible+38↑j
mov     al, [esi+11Ch]
test    al, al
jz      short loc_4836DE
pop     edi
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_4836DE:                             ; CODE XREF: BuildingClass__IsTiberiumSiloEligible+47↑j
mov     edx, dword_A8ED54+80798h
mov     eax, [edx+edi*4]
fld     qword ptr [eax+0A0h]
fcomp   ds:dbl_7E3810
fnstsw  ax
test    ah, 1
jz      short loc_4836FF
pop     edi
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_4836FF:                             ; CODE XREF: BuildingClass__IsTiberiumSiloEligible+68↑j
mov     eax, [esi+0E4h]
pop     edi
test    eax, eax
setz    al
pop     esi
retn
*/
}

// ==== BACKFILL 0x00483710  E4Recv_483710::sub_483710  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_483710::sub_483710()
{
{
    int BuildingByTiberiumType;
    int v3;
    IUnknown *v4;
    if ( !*(char *)(*(int *)&HouseClass_Player.__pad_5568[8060] + 13478) )
    return 0;
    BuildingByTiberiumType = FindBuildingByTiberiumType(*(IUnknown **)(this + 68));
    if ( BuildingByTiberiumType == -1 )
    return 0;
    v3 = *(int *)(*(int *)&DataGlobal_B05488.__pad_579C[18632] + 4 * BuildingByTiberiumType);
    if ( (unsigned char)this->M284 || *(unsigned char *)(this + 286) >= *(int *)(v3 + 228) - 1 || *(double *)(v3 + 176) < 0.00001 )
  {
    return 0;
  }
    v4 = (IUnknown *)FindBuildingByTiberiumType(*(IUnknown **)(this + 68));
    return Crate::FindPlacement(this, v4, 1);
}
}

// ==== BACKFILL 0x00483780  CellClass::SpawnTiberiumTree  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::SpawnTiberiumTree(int a1) {
{
      int BuildingByTiberiumType;
      int v5;
      char v7;
      int v8;
      unsigned int v9;
      void *v10;
      int v11;
      int v12;
      ObjectClass *aP1;
      IUnknown *v14;

      if ( !a2 )
      {
        if ( (char)**(_BYTE **)&HouseClass_Player.__pad_5568[8060] >= 0 )
          return 0;
        BuildingByTiberiumType = FindBuildingByTiberiumType(*(IUnknown **)(this + 68));
        if ( BuildingByTiberiumType == -1
          || *(unsigned __int8 *)(this + 286) <= BuildingByTiberiumType / 2
          || this->slopeIndex
          || *(double *)(*(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18632] + 4 * BuildingByTiberiumType) + 160) < 0.00001
          || this->firstObject )
        {
          return 0;
        }
      }
      v5 = FindBuildingByTiberiumType(*(IUnknown **)(this + 68));
      v14 = (IUnknown *)v5;
      if ( a2 )
      {
        if ( v5 == -1 )
        {
          v14 = 0;
          v5 = 0;
        }
      }
      else if ( v5 == -1 )
      {
        return 0;
      }
      aP1 = *(ObjectClass **)(*(_DWORD *)&stru_B05488.__pad_579C[18632] + 4 * v5);
      v7 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)7);
      v8 = 0;
      while ( 1 )
      {
        v9 = ((_BYTE)v8 + v7) & 7;
        if ( v9 < 8 )
        {
          v12 = this->smudgeTypeIndex;
          LOWORD(v11) = *(_WORD *)&stru_89E138.__pad_14B0[4 * v9 + 160] + v12;
          HIWORD(v11) = HIWORD(v12) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v9 + 162];
          v12 = v11;
          v10 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v12);
        }
        else
        {
          v10 = (void *)this;
        }
        if ( v10 && IsCoordValidMap((int)v10, aP1) )
          break;
        if ( ++v8 >= 8 )
          return 0;
      }
      return Crate::FindPlacement((int)v10, v14, 3);
}
} }

// ==== BACKFILL 0x00483C10  CellClass::SaveLoad_Prefix_0  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::SaveLoad_Prefix_0() {
{
    int result;
    int v2;
    int v3;
    int i;
    int *v5;
    int *v6;
    int v7;
    result = AbstractClass::SaveLoad_Prefix(v5, v6, v7);
    if ( result >= 0 )
  {
    v2 = v5[10];
    if ( v2 )
    {
    v3 = *v6;
    v7 = *(int *)(v2 + 16);
    result = (*(int (__stdcall **)(int *, int *, int, int))(v3 + 16))(v6, &v7, 4, 0);
    if ( result < 0 )
    return result;
    for ( i = 0; i < v7; ++i )
      {
    if ( (*(int (__stdcall **)(int *, int, int, int))(*v6 + 16))(v6, *(int *)(v5[10] + 4) + 4 * i, 4, 0) < 0 )
    break;
      }
    }
    return 0;
  }
    return result;
}
} }

// ==== BACKFILL 0x00484A80  sub_484A80  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_484A80(int a1)
{
{
    ++*(int *)(a1 + 404);
    return a1;
}
}

// ==== BACKFILL 0x00484AB0  CellClass::IsTunnelEntrance  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::IsTunnelEntrance()
{
    /* IDA truth (live verified 2026-09-18):
       v1 = *(WORD*)(this+278);   // tubeIndex (CellClass own member)
       return v1 >= 0 && v1 < g_Tubes.Count && *(DWORD*)(this+236) == 10;  // landType == LandType::Tunnel */
    return tubeIndex >= 0
        && tubeIndex < (int)g_Tubes_Count
        && landType == (int)LandType::Tunnel;
}

// ==== BACKFILL 0x00484F10  globalHelper_084F10  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_484F10(int a1)
{
return 1;
}

// ==== BACKFILL 0x00484F20  InfantryClass::GetType  cls=InfantryClass  sig=csp  renamed_refs=0  residual=q116 ====
namespace gamemd { int InfantryClass::GetType() {
{
      __int16 v1;

      v1 = this->q116;
      if ( v1 < 0 || v1 >= g_Tubes_Count )
        return 0;
      else
        return *((_DWORD *)g_PathClass_State + v1);
}
} }

// ==== BACKFILL 0x00484F50  sub_484F50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_484F50::sub_484F50()
{
{
    int v2;
    int result;
    int *v4;
    int *v5;
    int v6;
    int *v7;
    char v8[40];
    v2 = 0;
    result = this->M228;
    if ( result )
  {
    v4 = (int *)v8;
    do
    {
    if ( v2 >= 10 )
    break;
    *v4 = result;
    result = *(int *)(result + 48);
    ++v2;
    ++v4;
    }
    while ( result );
  }
    if ( v2 > 0 )
  {
    v5 = v8;
    v6 = v2;
    do
    {
    v7 = (int *)*v5;
    (*(void (__thiscall **)(int, int))(*(int *)*v5 + 460))(*v5, 0);
    if ( (*(int (__thiscall **)(int *))(*v7 + 44))(v7) == 1 || (result = (*(int (__thiscall **)(int *))(*v7 + 44))(v7), result == 2) )
      {
    if ( !v7[413] )
    WinAPI::Wrapper(-2147467261);
    result = (*(int (__stdcall **)(int, int))(*(int *)v7[413] + 124))( v7[413], *(unsigned char *)(this + 284));
      }
    ++v5;
    --v6;
    }
    while ( v6 );
  }
    return result;
}
}

// ==== BACKFILL 0x00485200  CellClass::ddtor  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::ddtor() {
{
    int *v2;
    if ( !v2 )
    return -2147467261;
    *v2 = -1044407858;
    v2[1] = 298982028;
    v2[2] = 1610642817;
    v2[3] = -1252326136;
    return 0;
}
} }

// ==== BACKFILL 0x00485240  ObjectClass::SetMember09  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void* ObjectClass::SetMember09(void* a1) {
{
    this->objectTypeFlags = *a2;
    return a2;
}
} } }

// ==== BACKFILL 0x00485250  ObjectClass::SetTriggerTarget  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::SetTriggerTarget(int a2) {
{
    int v3;
    int result;
    v3 = this->ambientSoundController;
    if ( v3 )
    --*(int *)(v3 + 44);
    result = a2;
    this->ambientSoundController = a2;
    if ( a2 )
  {
    result = DataGlobal_88094C;
    if ( DataGlobal_880954 < DataGlobal_88094C || (DataGlobal_880951 || !DataGlobal_88094C) && DataGlobal_880958 > 0 && (result = (*(int (__thiscall **)(int *, int, int))(DataGlobal_880944 + 8))( &DataGlobal_880944, DataGlobal_88094C + DataGlobal_880958, 0), (char)result) )
    {
    result = DataGlobal_880954++;
    *(int *)(DataGlobal_880948 + 4 * result) = this->objectTypeFlags;
    }
    ++*(int *)(this->ambientSoundController + 44);
  }
    return result;
}
} } }

// ==== BACKFILL 0x00485460  BuildingClass::CheckAdjacentCells  cls=BuildingClass  sig=csp  renamed_refs=3  residual=- ====
namespace gamemd { int BuildingClass::CheckAdjacentCells() {
{
      int v2;
      int v3;
      _DWORD *v4;
      int v5;
      bool v6;
      _DWORD *v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v13;
      int v14;

      if ( this->q11C <= 4u )
      {
        v2 = this->animation;
        if ( v2 != 2 && v2 != 3 && v2 != 8 && v2 != 6 )
        {
          v3 = this->q044;
          v4 = g_BuildingTypeClass_Array;
          if ( v3 == -1 || *(_BYTE *)(*((_DWORD *)g_BuildingTypeClass_Array + v3) + 686) )
          {
            v5 = 0;
            v6 = 1;
            while ( 1 )
            {
              if ( v6 )
              {
                v8 = v5 & 7;
                v14 = this->objectTypeFlags;
                LOWORD(v13) = v14 + LOWORD(Direction_X_Offsets[v8]);
                HIWORD(v13) = HIWORD(v14) + HIWORD(Direction_X_Offsets[v8]);
                v14 = v13;
                v7 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v14);
                v4 = g_BuildingTypeClass_Array;
              }
              else
              {
                v7 = (_DWORD *)this;
              }
              if ( *((_BYTE *)v7 + 284) > 4u && !this->q11C )
              {
                v9 = v7[17];
                if ( v9 == -1 || !*(_BYTE *)(v4[v9] + 686) )
                  break;
              }
              v10 = v7[59];
              if ( v10 == 2 )
                break;
              if ( v10 == 3 )
                break;
              if ( v10 == 8 )
                break;
              if ( v10 == 6 )
                break;
              v11 = v7[17];
              if ( v11 != -1 && !*(_BYTE *)(v4[v11] + 686) )
                break;
              v5 += 2;
              v6 = (unsigned int)v5 < 8;
              if ( v5 >= 8 )
                return 1;
            }
          }
        }
      }
      return 0;
}
} }

// ==== BACKFILL 0x004863A0  E4Recv_4863A0::sub_4863A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool E4Recv_4863A0::sub_4863A0()
{
{
    int v1;
    v1 = this->M56;
    return v1 >= g_CellTileLookup && v1 < g_CellTileLookup + 20 || v1 >= DataGlobal_AA1058 && v1 < DataGlobal_AA1058 + 12;
}
}

// ==== BACKFILL 0x004865B0  CellClass::IsTerrainType  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool CellClass::IsTerrainType() {
{
    int v1;
    v1 = *(this + 14);
    return v1 >= DataGlobal_ABAD28 && v1 < DataGlobal_ABAD28 + 42;
}
} }

// ==== BACKFILL 0x00486650  CellClass::InMapDataRange  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool CellClass::InMapDataRange() {
{
    int v1;
    v1 = *(this + 14);
    return v1 >= DataGlobal_AA10A4 && v1 < DataGlobal_AA10A4 + 14;
}
} }

// ==== BACKFILL 0x00486670  CellClass::InBounds  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool CellClass::InBounds() {
{
    int v1;
    v1 = *(this + 14);
    return v1 >= DataGlobal_ABC2B0 && v1 < DataGlobal_ABC2B0 + 16;
}
} }

// ==== BACKFILL 0x004866D0  sub_4866D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool E4Recv_4866D0::sub_4866D0()
{
{
    int v1;
    v1 = this->M56;
    return v1 >= g_CellTileTypeCache && v1 < g_CellTileTypeCache + 15;
}
}

// ==== BACKFILL 0x004866F0  sub_4866F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool E4Recv_4866F0::sub_4866F0()
{
{
    int v1;
    v1 = this->M56;
    return v1 >= DataGlobal_ABBEC4 && v1 < DataGlobal_ABBEC4 + 4;
}
}

// ==== BACKFILL 0x004867E0  CellClass::GetCellType  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::GetCellType() {
{
      int result;

      result = this->q038;
      LOBYTE(result) = result < g_CellPassabilityLUT || result >= g_CellPassabilityLUT + 14;
      return result;
}
} }

// ==== BACKFILL 0x00486840  CellClass::GetOccupier  cls=CellClass  sig=csp  renamed_refs=0  residual=q026 ====
namespace gamemd { int CellClass::GetOccupier() {
{
      int v1;
      int v2;
      int inited;
      _DWORD v5[2];
      _DWORD *v6;

      v2 = (this->q026 << 8) + 128;
      v5[0] = (this->smudgeTypeIndex << 8) + 128;
      v1 = v5[0];
      v5[1] = v2;
      inited = Isometric::InitTables((int)this, v5);
      *v6 = v1;
      v6[1] = v2;
      v6[2] = inited;
      return (int)v6;
}
} }

// ==== BACKFILL 0x00486890  CellClass::CheckProperty  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::CheckProperty() {
{
    int v1;
    int *v2;
    int v3;
    int v4;
    int v5;
    int *v7;
    char v8[12];
    int *v9;
    if ( (this->flags & 0x100) != 0 )
  {
    v1 = DataGlobal_89E7B4;
    v2 = (int *)this->GetOccupier(v8);
    v3 = *v2;
    v4 = v2[1];
    v5 = v1 + v2[2];
    *v9 = v3;
    v9[1] = v4;
    v9[2] = v5;
    return (int)v9;
  }
    else
  {
    v7 = (int *)this->GetOccupier(v8);
    *v9 = *v7;
    v9[1] = v7[1];
    v9[2] = v7[2];
    return (int)v9;
  }
}
} }

// ==== BACKFILL 0x00486900  CellClass::IsActiveOrNext  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool CellClass::IsActiveOrNext() {
{
    int v1;
    v1 = *(this + 14);
    return v1 == DataGlobal_ABC2C8 || v1 == DataGlobal_ABC2C8 + 1;
}
} }

// ==== BACKFILL 0x00486A70  CellClass::CreateFoggedObjects  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::CreateFoggedObjects() {
{
      int v1;
      int v2;
      _DWORD *v3;
      _DWORD *v4;
      int *v5;
      _DWORD *v6;
      char v7;
      int v9;
      int v10;
      int i;
      _BYTE v12[4];

      LOBYTE(v1) = (_BYTE)g_ScenarioClass_Instance;
      if ( (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) != 0 )
      {
        v2 = 1;
        v9 = this->smudgeTypeIndex;
        for ( i = 1; i <= 15; i += 2 )
        {
          v3 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v9);
          v1 = *((char *)v3 + 283);
          if ( v1 >= v2 - 2 && v1 <= v2 )
          {
            v1 = v3[80];
            if ( (v1 & 0x400000) == 0 )
            {
              v4 = __2_YAPAXI_Z(0x18u);
              if ( v4 )
              {
                v4[1] = 0;
                v4[2] = 0;
                *((_BYTE *)v4 + 12) = 1;
                *((_BYTE *)v4 + 13) = 0;
                *v4 = &vt_DynamicVectorClass_FoggedObjectClass;
                v4[5] = 10;
                v4[4] = 0;
                v5 = v4;
              }
              else
              {
                v5 = 0;
              }
              LOBYTE(v1) = (*(int (__thiscall **)(int *, int, _DWORD))(*v5 + 8))(v5, 1, 0);
              v5[5] = 1;
              v6 = (_DWORD *)v3[57];
              for ( v3[80] |= 0x400000u; v6; v6 = (_DWORD *)v6[12] )
              {
                v1 = (*(int (__stdcall **)(_DWORD *))(v6[1] + 12))(v6 + 1);
                if ( v1 == 6 )
                {
                  (*(void (__thiscall **)(_DWORD *, _BYTE *))(*v6 + 440))(v6, v12);
                  LOBYTE(v1) = sub_457A10((_DWORD **)v6);
                  if ( (_BYTE)v1 )
                  {
                    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v6 + 128))(v6)
                      || (v7 = *((_BYTE *)v6 + 1773), LOBYTE(v10) = 1, v7 == 15) )
                    {
                      LOBYTE(v10) = 0;
                    }
                    LOBYTE(v1) = BuildingClass::CreateFoggedObjects(v6, (int)v5, v3, v10);
                  }
                }
                else if ( v1 == 1 || v1 == 2 || v1 == 15 )
                {
                  LOBYTE(v1) = (*(int (__thiscall **)(_DWORD *))(*v6 + 336))(v6);
                }
              }
              if ( v5[4] <= 0 )
              {
                if ( v5 )
                  LOBYTE(v1) = (*(int (__thiscall **)(int *, int))*v5)(v5, 1);
              }
              else
              {
                v3[10] = v5;
              }
            }
          }
          LOWORD(v9) = v9 + 1;
          ++HIWORD(v9);
          v2 = i + 2;
        }
      }
      return v1;
}
} }

// ==== BACKFILL 0x00486BF0  CellClass::UpdateZone  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* CellClass::UpdateZone() {
{
    int i;
    int *result;
    int v3;
    int v4;
    v4 = this->smudgeTypeIndex;
    for ( i = 1; i < 15; i += 2 )
  {
    result = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v4);
    v3 = *((char *)(result) + 283);
    if ( v3 >= i - 2 && v3 <= i )
    {
    result[80] &= ~0x400000u;
    result = (int *)CellClass::ClearCellContents(result);
    }
    LOWORD(v4) = v4 + 1;
    ++HIWORD(v4);
  }
    return result;
}
} }

// ==== BACKFILL 0x00486C50  CellClass::ClearCellContents  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::ClearCellContents() {
{
      int result;
      int i;
      __int16 *j;
      __int16 v5;
      int v6;
      int v7;
      __int16 v8;
      int *v9;
      _DWORD *v10;
      int v11;
      int v12;
      int v13;
      int (__thiscall ***v14)(_DWORD, int); // ecx
      _DWORD *v15;
      __int16 v16;
      __int16 v17;
      int v18;
      _DWORD v19[4];

      result = this->attached1;
      if ( result )
      {
        for ( i = *(_DWORD *)(result + 16) - 1; i >= 0; --i )
        {
          v15 = *(_DWORD **)(*(_DWORD *)(this->attached1 + 4) + 4 * i);
          if ( CellClass::recalcPassability((int)v15) )
          {
            for ( j = (__int16 *)CellClass::recalcPassability((int)v15); ; j += 2 )
            {
              v5 = *j;
              if ( *j == 0x7FFF && j[1] == 0x7FFF )
                break;
              v6 = v15[13];
              v7 = v15[14];
              v19[3] = v15[15];
              v16 = v6 / 256;
              v8 = j[1];
              v17 = v7 / 256;
              LOWORD(v18) = v16 + v5;
              HIWORD(v18) = v17 + v8;
              v19[0] = v18;
              v9 = (int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)v19);
              if ( v9 != this )
              {
                v10 = (_DWORD *)v9[10];
                if ( v10 )
                {
                  v11 = (*(int (__thiscall **)(_DWORD *, _DWORD **))(*v10 + 16))(v10, &v15);
                  if ( v11 != -1 )
                  {
                    v12 = v10[4];
                    if ( v11 < v12 )
                    {
                      v13 = v12 - 1;
                      for ( v10[4] = v13; v11 < v10[4]; *(_DWORD *)(v10[1] + 4 * v11 - 4) = *(_DWORD *)(v10[1] + 4 * v11) )
                        ++v11;
                    }
                  }
                }
              }
            }
          }
          if ( v15 )
            (*(void (__thiscall **)(_DWORD *, int))(*v15 + 32))(v15, 1);
        }
        result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->attached1 + 12))(this->attached1);
        v14 = (int (__thiscall ***)(_DWORD, int))this->attached1;
        if ( v14 )
          result = (**v14)(v14, 1);
        this->attached1 = 0;
      }
      return result;
}
} }

// ==== BACKFILL 0x00486D90  sub_486D90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_486D90::sub_486D90(char a2)
{
{
    int v3;
    int v5;
    int v6;
    bool v7;
    int *v8;
    int v9;
    int v10;
    int v11;
    v3 = 1 << a2;
    if ( (this->M220 & (1 << a2)) == 0 )
    return -1;
    v5 = 0;
    v6 = 0;
    v7 = 1;
    do
  {
    if ( v7 )
    {
    v9 = v5 & 7;
    v10 = this->M36;
    LOWORD(v11) = LOWORD(Direction_X_Offsets[v9]) + v10;
    HIWORD(v11) = HIWORD(v10) + HIWORD(Direction_X_Offsets[v9]);
    v10 = v11;
    v8 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v10);
    }
    else
    {
    v8 = this;
    }
    if ( (v3 & v8[55]) != 0 )
    v6 |= 1 << v5;
    v7 = (unsigned int)++v5 < 8;
  }
    while ( v5 < 8 );
    return v6;
}
}

// ==== BACKFILL 0x004870D0  Cell::IsPassableOffset  cls=Cell  sig=csp  renamed_refs=0  residual=- ====
BOOL Cell::IsPassableOffset(IUnknown * aP1)
{
{
    return *(this + (int)aP1 + 62) > 0;
}
}

// ==== BACKFILL 0x00487110  BuildingClass::checkOccupant  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* BuildingClass::checkOccupant(int a2) {
{
    this->spawnStatus |= 1 << a2;
    return this;
}
} }

// ==== BACKFILL 0x00487130  BuildingClass::updateOccupiedState  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* BuildingClass::updateOccupiedState(int a2) {
{
    this->spawnStatus &= ~(1 << a2);
    return this;
}
} }

// ==== BACKFILL 0x00487150  FootClass::checkTerrainSpeed  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
int FootClass::checkTerrainSpeed() { return 0; }

// ==== BACKFILL 0x00487160  FootClass::updateLocomotion  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
int FootClass::updateLocomotion() { return 0; }

// ==== BACKFILL 0x00487170  BuildingClass::processGarrison  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int BuildingClass::processGarrison(int a2) {
{
    ++*(this + a2 + 86);
    return a2;
}
} }

// ==== BACKFILL 0x00487180  BuildingClass::evaulateDefense  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int BuildingClass::evaulateDefense(int a2) {
{
    --*(this + a2 + 86);
    return a2;
}
} }

// ==== BACKFILL 0x00487190  Crate::FindPlacement  cls=Crate  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int Crate::FindPlacement(int a1, int a2) {
{
      ObjectClass *v4;
      void *v5;
      int v6;
      void *v7;
      int v8;
      int *v9;
      MouseClass *v10;
      _DWORD *v11;
      IUnknown *v12;
      AbstractClass *v13;
      int BuildingByTiberiumType;
      int v16;
      unsigned __int8 v17;
      void *attachedBomb;
      int *ScreenRect;
      int *v20;
      int v21;
      int v22;
      int v23;
      IUnknown *v24;
      int v25;
      bool v26;
      IUnknown *v27;
      int v28;
      int v29;
      IUnknown *v30;
      int *v31;
      int v32;
      IUnknown *v33;
      int v34;
      int v35;
      IUnknown *v36;
      int *v37;
      AbstractClass *v38;
      MouseClass *StartCoords;
      MouseClass *v40;
      const RECT *PlacementRect;
      IUnknown *v42;
      const RECT *v43;
      const RECT *v44;
      const RECT *v45;
      int v46;
      int v47[2];
      AbstractClass *v48;
      MouseClass *v49;
      int v50;
      IUnknown *v51;
      AbstractClass aP1a;
      int v53;
      int v54[4];
      int v55[4];
      int v56[4];

      v4 = *(ObjectClass **)(*(_DWORD *)&stru_B05488.__pad_579C[18632] + 4 * (_DWORD)aP1);
      aP1a.NeedsSaveOrLink = v4;
      if ( a3 >= (int)v4[1].attachedBomb )
        return 0;
      if ( IsCoordValidMap(this, v4) )
      {
        if ( this->q11C )
        {
          v5 = (void *)__2_YAPAXI_Z(0xB0u);
          if ( v5 )
          {
            v46 = this->q024;
            v6 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)1);
            Object::SpawnAtCell(
              v5,
              *(IUnknown **)(HouseClass_Player.field_38
                           + 4
                           * (v6
                            + v4[1].ambientSoundController[0]
                            + *((_DWORD *)v4[1].attachedTag + 165)
                            + 2 * *(unsigned __int8 *)(this + 284))
                           - 8),
              (IUnknown *)&v46,
              (BuildingTypeClass *)0xFFFFFFFF);
          }
        }
        else
        {
          v7 = (void *)__2_YAPAXI_Z(0xB0u);
          if ( v7 )
          {
            v46 = this->q024;
            v8 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)0xB);
            Object::SpawnAtCell(
              v7,
              *(IUnknown **)(HouseClass_Player.field_38 + 4 * (v8 + *((_DWORD *)v4[1].attachedTag + 165))),
              (IUnknown *)&v46,
              (BuildingTypeClass *)0xFFFFFFFF);
          }
        }
        CellClass::RegisterForRedraw((int)v4, (MouseClass *)(this + 36));
        this->q11E = a3;
        PlacementRect = (const RECT *)BuildingClass::GetPlacementRect(this, (IUnknown *)&aP1a.uniqueId);
        StartCoords = (MouseClass *)House::GetStartCoords(this, (IUnknown *)&aP1a.NeedsSaveOrLink);
        CellClass::GetScreenRect(this, (IUnknown *)&aP1a);
        Rect::Union((IUnknown *)StartCoords, PlacementRect, v43);
        v9 = (int *)Rect::Union(v42, v44, v45);
        v47[0] = *v9;
        v47[1] = v9[1];
        v48 = (AbstractClass *)v9[2];
        v10 = (MouseClass *)v9[3];
        aP1a.NeedsSaveOrLink = *(void **)&stru_87C374.__pad_579C[21648];
        v49 = v10;
        v40 = v10;
        v38 = v48;
        v53 = *(_DWORD *)&stru_87C374.__pad_579C[21652];
        v11 = CellStruct::Copy(v47, (IUnknown *)&v50);
        v12 = (IUnknown *)Coord2D::Sub(v11, &aP1a, (IUnknown *)&aP1a.NeedsSaveOrLink);
        v13 = Rect::Construct(v54, v12, v38, (AbstractClass *)v40);
        Cell::CreateCrater(
          *(_DWORD *)v13->__pad_0,
          *(_DWORD *)&v13->__pad_0[4],
          *(_DWORD *)&v13->__pad_0[8],
          *(_DWORD *)&v13->__pad_0[12],
          0);
        BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(this + 36));
        return 1;
      }
      if ( !*(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13478) )
        return 0;
      BuildingByTiberiumType = FindBuildingByTiberiumType(*(IUnknown **)(this + 68));
      if ( BuildingByTiberiumType == -1 )
        return 0;
      v16 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18632] + 4 * BuildingByTiberiumType);
      if ( this->q11C
        || *(unsigned __int8 *)(this + 286) >= *(_DWORD *)(v16 + 228) - 1
        || *(double *)(v16 + 176) < 0.00001
        || (IUnknown *)FindBuildingByTiberiumType(*(IUnknown **)(this + 68)) != aP1 )
      {
        return 0;
      }
      v17 = a3 + this->q11E;
      this->q11E = v17;
      attachedBomb = v4[1].attachedBomb;
      if ( v17 >= (int)attachedBomb - 1 )
        v17 = (_BYTE)attachedBomb - 1;
      this->q11E = v17;
      ScreenRect = CellClass::GetScreenRect(this, (IUnknown *)v54);
      v20 = House::GetStartCoords(this, (IUnknown *)v56);
      if ( ScreenRect[2] <= 0 || ScreenRect[3] <= 0 )
      {
        v21 = *v20;
        v29 = v20[2];
        v25 = v20[3];
        v51 = (IUnknown *)v20[1];
      }
      else
      {
        v46 = v20[2];
        if ( v46 <= 0 || (*(_DWORD *)aP1a.__pad_0 = v20[3], *(int *)aP1a.__pad_0 <= 0) )
        {
          v30 = (IUnknown *)ScreenRect[1];
          v21 = *ScreenRect;
          v29 = ScreenRect[2];
          v25 = ScreenRect[3];
          v51 = v30;
        }
        else
        {
          v21 = *ScreenRect;
          v22 = *v20;
          v23 = ScreenRect[2];
          v24 = (IUnknown *)ScreenRect[1];
          v25 = ScreenRect[3];
          v26 = v21 <= *v20;
          v48 = (AbstractClass *)v23;
          if ( !v26 )
          {
            v23 += v21 - v22;
            v21 = v22;
            v48 = (AbstractClass *)v23;
          }
          v27 = (IUnknown *)v20[1];
          v50 = (int)v27;
          if ( (int)v24 > (int)v27 )
          {
            v25 += (char *)v24 - (char *)v27;
            v24 = v27;
          }
          if ( v21 + v23 >= v22 + v46 )
            v28 = (int)v48;
          else
            v28 = v22 - v21 + v46 + 1;
          if ( (int)v24 + v25 < *(_DWORD *)aP1a.__pad_0 + v50 )
            v25 = *(_DWORD *)aP1a.__pad_0 + v50 - (_DWORD)v24 + 1;
          v51 = v24;
          v29 = v28;
        }
      }
      v31 = BuildingClass::GetPlacementRect(this, (IUnknown *)v55);
      if ( v29 <= 0 || v25 <= 0 )
      {
        v21 = *v31;
        v36 = (IUnknown *)v31[1];
        v29 = v31[2];
        v35 = v31[3];
      }
      else
      {
        v46 = v31[2];
        if ( v46 <= 0 || (*(_DWORD *)aP1a.__pad_0 = v31[3], *(int *)aP1a.__pad_0 <= 0) )
        {
          v36 = v51;
          v35 = v25;
        }
        else
        {
          v32 = *v31;
          v33 = v51;
          v26 = v21 <= *v31;
          v47[0] = v21;
          v49 = (MouseClass *)v25;
          if ( v26 )
          {
            v21 = v47[0];
          }
          else
          {
            v29 += v21 - v32;
            v21 = v32;
          }
          v34 = v31[1];
          v50 = v34;
          if ( (int)v51 > v34 )
          {
            v33 = (IUnknown *)v34;
            v49 = (MouseClass *)((char *)v49 + (_DWORD)v51 - v34);
          }
          if ( v21 + v29 < v32 + v46 )
            v29 = v32 - v21 + v46 + 1;
          v35 = (int)v49;
          if ( (int)v33 + (int)v49 < v50 + *(_DWORD *)aP1a.__pad_0 )
            v35 = v50 + *(_DWORD *)aP1a.__pad_0 - (_DWORD)v33 + 1;
          v36 = v33;
        }
      }
      aP1a.abstractFlags = (int)v36;
      *(_DWORD *)&aP1a.__pad_0[4] = *(_DWORD *)&stru_87C374.__pad_579C[21652];
      aP1a.referenceCount = v35;
      aP1a.uniqueId = v21;
      aP1a.nextArrayIndex = v29;
      *(_DWORD *)aP1a.__pad_0 = *(_DWORD *)&stru_87C374.__pad_579C[21648];
      v37 = Bounds::Subtract(&aP1a.uniqueId, (IUnknown *)v55, &aP1a);
      Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0);
      BuildingClass::AddOccupancy((int)aP1a.NeedsSaveOrLink, (__int16 *)(this + 36));
      return 1;
}
} }

// ==== BACKFILL 0x00487950  CellClass::QuickPassable  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
bool CellClass::QuickPassable() const
{
{
    int v1;
    int v2;
    int inited;
    int v5[2];
    int v6[3];
    v1 = ((short)this->smudgeTypeIndex << 8) + 128;
    v2 = ((short)HIWORD(this->smudgeTypeIndex) << 8) + 128;
    v5[0] = 128;
    v5[1] = 128;
    inited = Isometric::InitTables((int)this, v5);
    v6[0] = v1;
    v6[1] = v2;
    v6[2] = inited;
    return Cell::IsPassable(v6);
}
/* ASM:
sub     esp, 14h
mov     eax, [ecx+24h]
push    esi
push    edi
mov     [esp+1Ch+var_14], eax
movsx   edi, word ptr [esp+1Ch+var_14+2]
movsx   esi, ax
shl     esi, 8
mov     eax, 80h
shl     edi, 8
add     esi, eax
add     edi, eax
mov     [esp+1Ch+var_14], eax
mov     [esp+1Ch+var_10], eax
lea     eax, [esp+1Ch+var_14]
push    eax
call    Isometric__InitTables
lea     ecx, [esp+1Ch+var_C]
mov     [esp+1Ch+var_C], esi
push    ecx
mov     ecx, 87F7E8h
mov     [esp+20h+var_8], edi
mov     [esp+20h+var_4], eax
call    Cell__IsPassable
pop     edi
pop     esi
add     esp, 14h
retn
*/
    return false; // TODO stub - translate quarantined IDA block above
}

// ==== BACKFILL 0x004879B0  sub_4879B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_4879B0::sub_4879B0()
{
{
    int v1;
    int v2;
    int inited;
    int v5[2];
    int v6[3];
    v1 = ((short)this->M36 << 8) + 128;
    v2 = ((short)HIWORD(this->M36) << 8) + 128;
    v5[0] = 128;
    v5[1] = 128;
    inited = Isometric::InitTables((int)this, v5);
    v6[0] = v1;
    v6[1] = v2;
    v6[2] = inited;
    return Game::Stub3((int)v6);
}
}

// ==== BACKFILL 0x00487C10  BuildingClass::CheckC4Active  cls=BuildingClass  sig=csp  renamed_refs=4  residual=- ====
bool BuildingClass::CheckC4Active() {
{
    int *v3;
    if ( this->q130 )
    return 0;
    if ( !g_WTFMode )
    return DataGlobal_89EA60[36 *(void**)this->q0F8];
    v3 = *(int **)(this + 228);
    if ( !v3 )
    return DataGlobal_89EA60[36 *(void**)this->q0F8];
    while ( (*(int (__thiscall **)(int *))(*v3 + 44))(v3) != 6 )
  {
    v3 = (int *)v3[12];
    if ( !v3 )
    return DataGlobal_89EA60[36 *(void**)this->q0F8];
  }
    return 0;
}

/* ASM:
push    esi
push    edi
mov     edi, ecx
mov     al, [edi+11Ch]
test    al, al
jz      short loc_487C23
pop     edi
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_487C23:                             ; CODE XREF: BuildingClass__CheckC4Active+C↑j
mov     al, ds:0A8E9A0h
test    al, al
jz      short loc_487C49
mov     esi, [edi+0E4h]
test    esi, esi
jz      short loc_487C49

loc_487C36:                             ; CODE XREF: BuildingClass__CheckC4Active+37↓j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
cmp     eax, 6
jz      short loc_487C5C
mov     esi, [esi+30h]
test    esi, esi
jnz     short loc_487C36

loc_487C49:                             ; CODE XREF: BuildingClass__CheckC4Active+1A↑j
; BuildingClass__CheckC4Active+24↑j ...
mov     eax, [edi+0ECh]
pop     edi
pop     esi
lea     ecx, [eax+eax*8]
mov     al, ds:89EA60h[ecx*4]
retn
; ---------------------------------------------------------------------------

loc_487C5C:                             ; CODE XREF: BuildingClass__CheckC4Active+30↑j
test    esi, esi
jz      short loc_487C49
pop     edi
xor     al, al
pop     esi
retn
*/
}

// ==== BACKFILL 0x00487C70  TerrainClass::SetFieldF8  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TerrainClass::SetFieldF8(int a1) {
{
      this->q0F8 = a2;
      return a2;
}
} }

// ==== BACKFILL 0x00487C80  ?GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int E4Recv_487C80::_GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ()
{
{
    return this->M248;
}
}

// ==== BACKFILL 0x00487CE0  CellClass::RadLevel_Increase  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void CellClass::RadLevel_Increase(double a1) {
{
    this->cloakedByHouses = a2 + this->cloakedByHouses;
}
} }

// ==== BACKFILL 0x00487D00  CellClass::RadLevel_Decrease  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void CellClass::RadLevel_Decrease(double a1) {
{
      double v2;

      v2 = *(double *)(this + 240) - a2;
      *(double *)(this + 240) = v2;
      if ( v2 >= 0.0 )
      {
        *(double *)(this + 240) = v2;
      }
      else
      {
        this->radLevel = 0;
        this->q0F4 = 0;
      }
}
} }

// ==== BACKFILL 0x00487D70  CellClass::AttachObject  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::AttachObject(int a2) {
{
      int v3;

      v3 = this->jumpjet;
      if ( a2 )
      {
        if ( !v3 || v3 == a2 )
        {
          this->jumpjet = a2;
          if ( (*(_BYTE *)(a2 + 20) & 4) != 0 )
            FootClass::Jumpjet_OccupyCell(this->smudgeTypeIndex);
          return 1;
        }
        else
        {
          return 0;
        }
      }
      else
      {
        if ( v3 )
        {
          if ( (*(_BYTE *)(v3 + 20) & 4) != 0 )
            FootClass::Jumpjet_OccupyCell(DataGlobal_89E748);
        }
        this->jumpjet = 0;
        return 1;
      }
}
} }

// ==== BACKFILL 0x00487E50  AbstractClass::compareType  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::compareType(int a1)
{
return 11;
}

// ==== BACKFILL 0x00487E60  CellClass::StubReturn11  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::StubReturn11()
{
return 11;
}

// ==== BACKFILL 0x00487E70  CellClass::StubReturn328  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::StubReturn328()
{
return 328;
}

// ==== BACKFILL 0x00487E80  CellClass::CopyTo  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::CopyTo() {
{
    char v3;
    CellClass::DTOR(this);
    if ( (v3 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int)this;
}
} }

// ==== BACKFILL 0x00487EA0  NeighborCoord  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Coord_Neighbor(unsigned int * a1, unsigned short * a2, char a3)
{
{
    int *result;
    int v4;
    int v5;
    result = a1;
    v4 = a3 & 7;
    LOWORD(v5) = *a2 + LOWORD(Direction_X_Offsets[v4]);
    HIWORD(v5) = *((int*)(a2) + 1) + HIWORD(Direction_X_Offsets[v4]);
    *result = v5;
    return result;
}
}

// ==== BACKFILL 0x00488080  CellClass::clearOccupationFlags  cls=CellClass  sig=csp  renamed_refs=5  residual=IsAllocated ====
namespace gamemd { void* CellClass::clearOccupationFlags(int a2, int a3) {
{
    this->vtable2 = 0;
    this->vtable3 = a2;
    this->vtable4 = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_FoggedObjectClass;
    if ( a2 )
  {
    if ( a3 )
    {
    this->vtable2 = a3;
    return this;
    }
    this->vtable2 = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
  }
    return this;
}
} }

// ==== BACKFILL 0x00488210  sub_488210  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_488210::sub_488210(unsigned int a2, unsigned int * a3, int a4)
{
{
    if ( (a2 & 4) != 0 )
  {
    if ( this->M45 )
    {
    GadgetClass::Hide(this);
    return GadgetClass::ProcessMouseOver(this, a2, a3, 0);
    }
    GadgetClass::Show(this);
  }
    return GadgetClass::ProcessMouseOver(this, a2, a3, 0);
}
}

// ==== BACKFILL 0x00488280  sub_488280  cls=CheckListClass  sig=csp  renamed_refs=0  residual=- ====
CheckListClass * E4Recv_488280::sub_488280(ListClass * aP1, int a3, int a4, ListClass * aP4, int a6, ControlClass * aP6, ListClass * aP7, int a9)
{
{
    ListClass::Construct((int)this, aP1, a3, a4, aP4, a6, aP6, aP7, a9);
    this->M372 = 0;
    *(int *)this = &vt_CheckListClass;
    return (CheckListClass *)this;
}
}

// ==== BACKFILL 0x004884A0  CheckListClass::GetItem  cls=CheckListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CheckListClass::GetItem(int a1, void* a2, int a3) {
{
      int v6;
      int Clamped;
      char v8;
      char v9;
      int v10;

      if ( this->q174 )
        return 0;
      v6 = CellClass::DrawWithFlags((_DWORD *)this, a2, a3, 0);
      if ( (a2 & 1) != 0 )
      {
        Clamped = Array::GetClamped((_DWORD *)this, *(CheckListClass **)(this + 364));
        if ( Clamped )
          v8 = *(_BYTE *)(Clamped + 4);
        else
          v8 = 0;
        v9 = v8 == 0;
        v10 = Array::GetClamped((_DWORD *)this, *(CheckListClass **)(this + 364));
        if ( v10 )
        {
          if ( *(_BYTE *)(v10 + 4) != v9 )
          {
            *(_BYTE *)(v10 + 4) = v9;
            this->vt18();
          }
        }
      }
      return v6;
}
} }

// ==== BACKFILL 0x004886A0  ObjectClass::GetStateFlag  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectClass::GetStateFlag()
{
{
    return this->referenceCount;
}
}

// ==== BACKFILL 0x004886C0  CheckListClass::SelectItem  cls=CheckListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CheckListClass::SelectItem(int a1) {
{
    return ListClass::RemoveItem(this, a2);
}
} }

// ==== BACKFILL 0x004886D0  CheckListClass::SetFocus  cls=CheckListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CheckListClass::SetFocus(int a1) {
{
    return ColorListClass::Clear(this, a2);
}
} }

// ==== BACKFILL 0x004886E0  CheckListClass::QueryInterface  cls=CheckListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* CheckListClass::QueryInterface(int a2) {
{
    CCINIClass *Clamped;
    *(void**)this = (unsigned int)&vt_CheckListClass;
    while ( *(this + 17) )
  {
    Clamped = (CCINIClass *)Array::GetClamped(this, 0);
    ListClass::RemoveItem(this, 0);
    __3_YAXPAX_Z(Clamped);
  }
    ListClass::Destruct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (CheckListClass *)this;
}
} }

// ==== BACKFILL 0x00488760  sub_488760  cls=ColorListClass  sig=csp  renamed_refs=0  residual=- ====
ColorListClass * E4Recv_488760::sub_488760(ListClass * aP1, int a3, int a4, ListClass * aP4, int a6, ControlClass * aP6, ListClass * aP7, int a9)
{
{
    ListClass::Construct((int)this, aP1, a3, a4, aP4, a6, aP6, aP7, a9);
    this->M376 = 0;
    this->M380 = 0;
    this->M384 = 1;
    this->M385 = 0;
    this->M372 = &vt_DynamicVectorClass_int;
    this->M392 = 10;
    this->M388 = 0;
    this->M400 = 0;
    this->M396 = 1;
    *(void**)this = &vt_ColorListClass;
    return (ColorListClass *)this;
}
}

// ==== BACKFILL 0x004887F0  sub_4887F0  cls=ColorListClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4887F0::sub_4887F0()
{
{
    int v2;
    int *v3;
    void *v4;
    v2 = this->M372;
    v3 = this + 93;
    *(void**)this = &vt_ColorListClass;
    (*(void (__thiscall **)(int *))(v2 + 12))(this + 93);
    this->M400 = 0;
    v4 = (void *)v3[1];
    *v3 = &vt_VectorClass_int;
    if ( v4 && *((char *)(v3) + 13) )
  {
    __3_YAXPAX_Z(v4);
    v3[1] = 0;
  }
    *((char *)(v3) + 13) = 0;
    v3[2] = 0;
    return ListClass::Destruct(this);
}
}

// ==== BACKFILL 0x00488EE0  ColorListClass::GetColor  cls=ColorListClass  sig=csp  renamed_refs=0  residual=- ====
int ColorListClass::GetColor(int a2)
{
{
    return this->GetIndex(a2, 0);
}
}

// ==== BACKFILL 0x00488F00  ColorListClass::QueryInterface  cls=ColorListClass  sig=csp  renamed_refs=0  residual=- ====
ColorListClass * ColorListClass::QueryInterface(char a2)
{
{
    int v3;
    char *v4;
    void *v5;
    v3 = *((int *)(this) + 93);
    v4 = this + 372;
    *(int *)this = &vt_ColorListClass;
    (*(void (__thiscall **)(char *))(v3 + 12))(this + 372);
    *((int *)(this) + 100) = 0;
    v5 = (void *)*((int *)(v4) + 1);
    *(int *)v4 = &vt_VectorClass_int;
    if ( v5 && v4[13] )
  {
    __3_YAXPAX_Z(v5);
    *((int *)(v4) + 1) = 0;
  }
    v4[13] = 0;
    *((int *)(v4) + 2) = 0;
    ListClass::Destruct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ColorListClass *)this;
}
}

// ==== BACKFILL 0x00489270  CellChainReact  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void CellChainReact()
{
  ;
}

// ==== BACKFILL 0x0048A4F0  GetWarheadVersusMultiplier  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetWarheadVersusMultiplier(CoordStruct * aP0, BuildingTypeClass * aP1, CoordStruct * aP2, BulletClass * aP3)
{
{
    CoordStruct *v4;
    int v6;
    int v7;
    int v9;
    int v10;
    v4 = aP0;
    if ( !aP0 || !aP1 )
    return 0;
    if ( aP2 == (CoordStruct *)2 && aP1->__pad_14D[0] && (*((int *)Coord::To_Cell(&DataGlobal_87C374.__pad_14B0[8132], (IUnknown *)aP3) + 80) & 0x100) == 0 && (int)aP3->field_8 < Cell::GetGroundHeight((IUnknown *)aP3) + 2 * *(int *)&DataGlobal_89E138.__pad_71C[28] )
  {
    v6 = *(int *)(*(int *)&DataGlobal_87C374.__pad_579C[22224] + 3024);
    if ( v6 )
    {
    v7 = 35 * v6 - 1;
    if ( (int)v4 < v7 )
    v7 = (int)v4;
    return *(int *)(*(int *)(*(int *)&DataGlobal_87C374.__pad_579C[22224] + 3012) + 4 * (v7 / 35));
    }
    return 0;
  }
    if ( aP1 == *(BuildingTypeClass **)(*(int *)&DataGlobal_87C374.__pad_579C[22224] + 6068) )
    return *(int *)(*(int *)&DataGlobal_87C374.__pad_579C[22224] + 756);
    v9 = aP1->ChargerBarrels[4];
    if ( !v9 )
    return 0;
    if ( aP1->__pad_14D[7] )
    return *(int *)(aP1->ChargerBarrels[1] + 4 * Random::Range( (int *)(*(int *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)(v9 - 1)));
    v10 = 25 * v9 - 1;
    if ( (int)v4 >= v10 )
    v4 = (CoordStruct *)v10;
    return *(int *)(aP1->ChargerBarrels[1] + 4 * ((int)v4 / 25));
}
}

// ==== BACKFILL 0x0048A8D0  Math_ComputeFacingAngle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char Math_ComputeFacingAngle(char a1, int a2, int a3, int a4, double a5, unsigned int * a6)
{
{
    double v6;
    char v10;
    int v11[2];
    v6 = a5;
    if ( !(unsigned char)SolveMathTrajectory(a3, a4, a5, (int)&a5) )
    return 0;
    if ( a1 )
  {
    LOWORD(a4) = Math::RoundToInt((a5 - 1.570796326794897) * -10430.06004058427);
    *a6 = a4;
    return 1;
  }
    else
  {
    SolveMathTrajectory(a3 + 1, a4, v6, (int)v11);
    if ( v10 )
    LOWORD(a4) = Math::RoundToInt((-a5 - 1.570796326794897) * -10430.06004058427);
    else
    LOWORD(a4) = Math::RoundToInt((a5 - 1.570796326794897) * -10430.06004058427);
    *a6 = a4;
    return 1;
  }
}
}

// ==== BACKFILL 0x0048ABC0  globalHelper_08ABC0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool globalHelper_08ABC0(IUnknown * aP0, int a2, int a3, double a4)
{
{
    double v4;
    double v5;
    double v7;
    double v8;
    double v9;
    double v10;
    double aP0a;
    double v12;
    v4 = (double)(int)aP0;
    v5 = (double)a2;
    if ( v5 == 0.0 )
    v5 = 0.001;
    v8 = (double)a3;
    v7 = v4 * v4;
    v9 = v5 * v5;
    aP0a = v4 * (v7 * v4) - (v7 * v8 * a4 + v7 * v8 * a4) - a4 * a4 * v9;
    if ( aP0a < 0.0 )
    return 0;
    v12 = v8 * v8 / v9 + 1.0 + v8 * v8 / v9 + 1.0;
    if ( v12 == 0.0 )
    return 0;
    v10 = v7 - v8 * a4;
    return (Math::Sqrt((AbstractClass *)LODWORD(aP0a)) + v10) / v12 >= 0.0 || (v10 - Math::Sqrt((AbstractClass *)LODWORD(aP0a))) / v12 >= 0.0;
}
}

// ==== BACKFILL 0x0048ACE0  Return::HRESULT_Fail  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Return::HRESULT_Fail(BulletClass * aP0, int a2, int a3)
{
{
    return -15;
}
}

// ==== BACKFILL 0x0048B070  E4Recv_48B070::sub_48B070  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_48B070::sub_48B070(int a2, int a3)
{
{
    this->M4 = 0;
    this->M8 = a2;
    this->M12 = 1;
    this->M13 = 0;
    *(void**)this = &vt_VectorClass_DamageGroup;
    if ( a2 )
  {
    if ( a3 )
    {
    this->M4 = a3;
    return this;
    }
    this->M4 = __2_YAPAXI_Z(4 * a2);
    this->M13 = 1;
  }
    return this;
}
}

// ==== BACKFILL 0x0048B1F0  sub_48B1F0  cls=CommBufferClass  sig=csp  renamed_refs=0  residual=- ====
void CommBufferClass::sub_48B1F0()
{
{
    int v2;
    int v3;
    int v4;
    CCINIClass *v5;
    int v6;
    int v7;
    CCINIClass *v8;
    v2 = 0;
    v3 = *(int *)&this->__pad_0[4];
    *(int *)this->__pad_0 = &vt_CommBufferClass;
    if ( v3 > 0 )
  {
    v4 = 0;
    do
    {
    __3_YAXPAX_Z(*(void **)(this->field_24 + v4 * 4 + 20));
    v5 = (CCINIClass *)this->field_24;
    if ( v5->sectionHead[v4 + 3] )
    __3_YAXPAX_Z((void *)v5->sectionHead[v4 + 3]);
    ++v2;
    v4 += 9;
    }
    while ( v2 < *(int *)&this->__pad_0[4] );
  }
    v6 = 0;
    if ( this->field_8 > 0 )
  {
    v7 = 0;
    do
    {
    __3_YAXPAX_Z(*(void **)(this->field_34 + v7 * 4 + 12));
    v8 = (CCINIClass *)this->field_34;
    if ( v8->sectionHead[v7 + 1] )
    __3_YAXPAX_Z((void *)v8->sectionHead[v7 + 1]);
    ++v6;
    v7 += 6;
    }
    while ( v6 < this->field_8 );
  }
    __3_YAXPAX_Z((void *)this->field_24);
    __3_YAXPAX_Z((void *)this->field_34);
    __3_YAXPAX_Z(*(void **)&this->__pad_28[8]);
    __3_YAXPAX_Z(*((void **)(this) + 16));
}
}

// ==== BACKFILL 0x0048BA80  CellClass::GetBridgeIndex  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::GetBridgeIndex()
{
{
    return this->rubble;
}
}

// ==== BACKFILL 0x0048BAA0  Rect::SetRedraw  cls=Rect  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int Rect::SetRedraw(int a1) {
{
      int result;

      result = 0;
      if ( a2 )
      {
        this->q014 = 0;
        this->q018 = 0;
        this->q01C = 0;
      }
      else
      {
        result = this->q01C;
        this->q018 = 1;
        this->q014 = result;
      }
      this->q020 = result;
      return result;
}
} }

// ==== BACKFILL 0x0048BB00  sub_48BB00  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_48BB00::sub_48BB00(char a2)
{
{
    sub_48B1F0(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ObjectClass *)this;
}
}

// ==== BACKFILL 0x0048C590  ConnectionClass::StubReturnFalse  cls=ConnectionClass  sig=csp  renamed_refs=0  residual=- ====
int ConnectionClass::StubReturnFalse()
{
return 0;
}

// ==== BACKFILL 0x0048DBE0  ScenarioClass::FindTerrainTypeIndex  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::FindTerrainTypeIndex() {
{
    ObjectClass *v2;
    const char *v3;
    v2 = 0;
    v3 = "TEMPERATE";
    while ( _strcmpi(this, v3) )
  {
    v3 += 112;
    v2 = (ObjectClass *)((char *)(v2) + 1);
    if ( (int)v3 >= (int)&DataGlobal_7E1E18 )
    return (ObjectClass *)-1;
  }
    return v2;
}
} }

// ==== BACKFILL 0x0048DC90  MapClass::UnselectAll_ClearLimboLaunchers  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::UnselectAll_ClearLimboLaunchers()
{
{
    int result;
    int v1;
    int v2;
    int *v3;
    while ( g_SelectionManager )
    (*(void (__thiscall **)(int))(**(int **)g_ObjectClass_CurrentCount + 336))(*(int *)g_ObjectClass_CurrentCount);
    Selection::SetCurrent(0);
    v3 = g_VisibilitySystem;
    result = DataGlobal_89C410;
    if ( DataGlobal_89C410 )
  {
    v1 = 8;
    do
    {
    v2 = 3;
    do
      {
    result = *v3;
    if ( *v3 )
    *(char *)(result + 12) &= ~2u;
    ++v3;
    --v2;
      }
    while ( v2 );
    --v1;
    }
    while ( v1 );
  }
    return result;
}
}

// ==== BACKFILL 0x0048DE70  INIClass::readSection  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::readSection() {
{
      int v2;
      const void **v3;

      if ( !this )
        return 0;
      v2 = 0;
      v3 = (const void **)&off_7E523C;
      while ( _strcmpi(this, *v3) )
      {
        ++v3;
        ++v2;
        if ( (int)v3 >= (int)&off_7E5288 )
          return 0;
      }
      return v2;
}
} }

// ==== BACKFILL 0x0048DED0  nullsub_51  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_51()
{
  ;
}

// ==== BACKFILL 0x0048DF80  OverlayTypeClass::LookupByName  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
int OverlayTypeClass::LookupByName()
{
{
    int v2;
    const void **v3;
    if ( !_strcmpi(&DataGlobal_817460.sectionHead[1], this) || !this )
    return -1;
    v2 = 0;
    v3 = (const void **)&DataGlobal_81DA28;
    while ( _strcmpi(*v3, this) )
  {
    ++v3;
    ++v2;
    if ( (int)v3 >= (int)&DataGlobal_81DA58 )
    return -1;
  }
    return v2;
}
}

// ==== BACKFILL 0x0048DFD0  sub_48DFD0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * sub_48DFD0(unsigned int a1)
{
{
    if ( a1 >= 0xC )
    return g_Str__none_;
    else
    return DataGlobal_81DA28[a1];
}
}

// ==== BACKFILL 0x0048DFF0  ObjectTypeClass::loadTypeMember_48DFF0  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_48DFF0()
{
{
    int v2;
    const void **v3;
    if ( !this )
    return -1;
    v2 = 0;
    v3 = (const void **)&DataGlobal_81DA58;
    while ( _strcmpi(*v3, this) )
  {
    ++v3;
    ++v2;
    if ( (int)v3 >= (int)DataGlobal_81DA78 )
    return -1;
  }
    return v2;
}
}

// ==== BACKFILL 0x0048E030  sub_48E030  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * sub_48E030(unsigned int a1)
{
{
    if ( a1 >= 8 )
    return g_Str__none_;
    else
    return DataGlobal_81DA58[a1];
}
}

// ==== BACKFILL 0x0048E090  globalHelper_08E090  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * sub_48E090(unsigned int a1)
{
{
    if ( a1 >= 5 )
    return g_Str__none_;
    else
    return DataGlobal_81DA78[a1];
}
}

// ==== BACKFILL 0x0048E650  CheckListClass::StubReturnFalse  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
void CheckListClass::StubReturnFalse(int a1, int a2, int a3)
{
  ;
}
