// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x007010D0  TechnoClass::HasValidWeapon  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int TechnoClass::HasValidWeapon() {
{
    int result;
    LOBYTE(result) = !this->isDeactivated
    && (result = House::IsHumanPlayer(*((HouseClass **)(this) + 135)), (char)result)
    && (result = this->GetPoweredWeaponSlot()) != 0 && *(int *)result && (result = this->HasPassengers(), !(char)result);
    return result;
}
} } }

// ==== BACKFILL 0x00701190  TacticalClass::StubReturnFalse11  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
char TacticalClass::StubReturnFalse11()
{
return 0;
}

// ==== BACKFILL 0x007011A0  sub_7011A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_7011A0::sub_7011A0()
{
{
    int v3;
    int v4;
    int v5;
    int *v6;
    char *v7;
    int v8;
    double v9;
    int v10;
    int v11;
    int v12;
    int v13;
    double v14;
    char v15[12];
    if ( this->Vf84() )
    return 0;
    v3 = g_RulesClass_Instance[1].?[11];
    if ( !v3 )
    return 0;
    v4 = g_RulesClass_Instance[1].?[0];
    v5 = *(void**)this;
    LODWORD(v14) = g_RulesClass_Instance[1].?[13];
    HIDWORD(v14) = v4;
    v6 = (int *)(*(int (__thiscall **)(int *, char *))(v5 + 72))(this, v15);
    LOWORD(v12) = *v6 / 256;
    HIWORD(v12) = v6[1] / 256;
    v13 = v12;
    v7 = (char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v13);
    v8 = ScenarioClass::CalcMinShroudLevel(&DataGlobal_87F7E8);
    v9 = (double)((v7[283] - v8) / v3) * v14;
    if ( v9 >= *(double *)&g_RulesClass_Instance[1].?[1] )
    v9 = *(double *)&g_RulesClass_Instance[1].?[1];
    v10 = DataGlobal_B0EB34 * v7[283];
    v11 = Math::RoundToInt(v9);
    Math::Sqrt((double)(v10 * v10 + (v11 << 8) * (v11 << 8)));
    return Math::RoundToInt(v9);
}
}

// ==== BACKFILL 0x007013A0  MissionClass::OverrideMission_SyncLog  cls=TechnoClass  sig=csp  renamed_refs=2  residual=- ====
namespace ra2 { namespace game { int MissionClass::OverrideMission_SyncLog() {
{
      int v3;
      int v4;
      TechnoClass *aP3;

      this->lastTarget = this->target;
      AbstractClass::COMStub_125((int)this, v3, v4, aP3);
      return this->vt242(v4);
}
} } }

// ==== BACKFILL 0x00703CC0  TechnoClass::ScanAdjacentCells  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
char TechnoClass::ScanAdjacentCells()
{
{
    int *v2;
    int *v3;
    int *v4;
    int *v5;
    int *v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    v12 = *(int *)this->GetCellCoords_Alt(&v16);
    v2 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v12);
    if ( !v2 || this->onBridge )
    return 0;
    LOWORD(v13) = v12 + g_DirectionOffsetPool;
    HIWORD(v13) = HIWORD(v12) + HIWORD(g_DirectionOffsetPool);
    v14 = v13;
    v3 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v14);
    HIWORD(v13) = HIWORD(v12) + HIWORD(Direction_X_Offsets[0]);
    LOWORD(v13) = v12 + LOWORD(Direction_X_Offsets[0]);
    v15 = v13;
    v4 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v15);
    HIWORD(v13) = HIWORD(v12) + HIWORD(g_CellDirectionOffsets);
    LOWORD(v13) = v12 + g_CellDirectionOffsets;
    v16 = v13;
    v5 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v16);
    LOWORD(v13) = v12 + Direction_Y_Offsets;
    HIWORD(v13) = HIWORD(v12) + HIWORD(Direction_Y_Offsets);
    v6 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v13);
    if ( (v2[80] & 0x400) != 0 )
    return 1;
    if ( v3 )
  {
    v7 = v3[80];
    if ( (v7 & 0x400) != 0 && (v7 & 0x800) != 0 )
    return 1;
  }
    if ( v6 )
  {
    v8 = v6[80];
    if ( (v8 & 0x400) != 0 && (v8 & 0x800) == 0 )
    return 1;
  }
    if ( v5 )
  {
    v9 = v5[80];
    if ( (v9 & 0x400) != 0 && (v9 & 0x800) == 0 )
    return 1;
  }
    if ( v4 && (v10 = v4[80], (v10 & 0x400) != 0) && (v10 & 0x800) != 0 )
    return 1;
    else
    return 0;
}
}

// ==== BACKFILL 0x00705D10  BuildingClass::SetPlanningToken  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
void BuildingClass::SetPlanningToken(ra2::game::PlanningTokenClass* token) {
    // IDA 0x705D10. Writes planningToken@+0x514 (ASM: mov [ecx+514h],eax).
    // The decompiler's "return a2" is the natural eax pass-through of
    // mov eax,[esp+arg_0]; the function is void (retn 4, no value contract).
    this->planningToken = token;
    return;

/* ASM:
mov     eax, [esp+arg_0]
mov     [ecx+514h], eax
retn    4
*/
}

// ==== BACKFILL 0x00705D20  BuildingClass::GetPlanningToken  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
ra2::game::PlanningTokenClass* BuildingClass::GetPlanningToken() {
    // IDA 0x705D20. Reads planningToken@+0x514 (ASM: mov eax,[ecx+514h]) - NOT
    // Type(+0x520); the real type getter is GetTypePtr@0x459EE0. Formerly
    // misnamed GetType (T19 caller-context heuristic); callers live in the
    // 0x633-0x639 production-planning region (planning-token queue code).
    return this->planningToken;

/* ASM:
mov     eax, [ecx+514h]
retn
*/
}

// ==== BACKFILL 0x00707CB0  TechnoClass::CleanupAll  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int TechnoClass::CleanupAll(int a1) {
{
      TechnoClass *result;
      int DB;
      int ecx2;
      ObjectClass *v5;
      ObjectClass *v6;

      for ( result = (TechnoClass *)this->q118; result; result = (TechnoClass *)this->q118 )
      {
        DB = CCINIClass::GetDB(this + 69);
        ecx2 = *(_DWORD *)(DB + 1492);
        if ( ecx2 )
          TeamClass::LiberateMember_Start(ecx2, (IUnknown *)DB, 0xFFFFFFFF, 0);
        v5 = (ObjectClass *)LinkedList::Pop(this + 69);
        v6 = v5;
        if ( v5 )
        {
          TechnoClass::CleanupAll(v5, (AbstractClass *)v5);
          (*(void (__thiscall **)(ObjectClass *, AbstractClass *))(*(_DWORD *)v6->__pad_0 + 224))(v6, aP1);
          (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)v6->__pad_0 + 248))(v6);
        }
      }
      return (int)result->__pad_0;
}
} } }

// ==== BACKFILL 0x00708C10  TechnoClass::GetGlobalValue  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::GetGlobalValue(int* outValue) const {
*outValue = g_TechnoHouseState;
return 0;
}

// ==== BACKFILL 0x007099D0  IPersistStream::IsDirty  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int IPersistStream::IsDirty(int a1, int a2)
{
return 0;
}

// ==== BACKFILL 0x00709A20  TechnoClass::COMStub_Return0_287  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::COMStub_Return0_287()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x00709A30  IPersistStream::Stub  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
void IPersistStream::Stub(BuildingTypeClass * aP0, int a2)
{
  ;
}

// ==== BACKFILL 0x0070C250  IPersistStream::GetSizeMax  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int IPersistStream::GetSizeMax(int a0, RadioClass * aP1, int a3)
{
{
    RadioClass::SaveState((int *)a0, aP1, a3);
    return 0;
}
}

// ==== BACKFILL 0x0070C5B0  ObjectClass::GetShroudByte  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::GetShroudByte() {
{
      int result;

      LOBYTE(result) = this->q270;
      return result;
}
} } }

// ==== BACKFILL 0x0070C5C0  ObjectClass::GetFogByte  cls=ObjectClass  sig=csp  renamed_refs=0  residual=q271 ====
namespace ra2 { namespace game { int ObjectClass::GetFogByte() {
{
      int result;

      LOBYTE(result) = this->q271;
      return result;
}
} } }

// ==== BACKFILL 0x0070C5D0  ObjectClass::HasSubObject  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::HasSubObject() {
{
      int result;

      result = this->q274;
      LOBYTE(result) = result && *(_DWORD *)(result + 40);
      return result;
}
} } }

// ==== BACKFILL 0x0070C5F0  ObjectClass::IsNotShrouded  cls=ObjectClass  sig=csp  renamed_refs=0  residual=q271 ====
namespace ra2 { namespace game { int ObjectClass::IsNotShrouded() {
{
      int result;

      LOBYTE(result) = !this->q270 && !this->q271;
      return result;
}
} } }

// ==== BACKFILL 0x0070D980  TacticalClass::StubReturnTrue3  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
void TacticalClass::StubReturnTrue3()
{
  ;
}

// ==== BACKFILL 0x0070DC50  TechnoClass::processEMPulse  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int TechnoClass::processEMPulse() {
{
    return *(char *)(this->Vt34Thunk() + 2054);
}
} } }

// ==== BACKFILL 0x0070DD70  ObjectClass::CheckTypeFlag1681  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::CheckTypeFlag1681() {
{
    return *(char *)(this->Constructor_BitFont() + 1681) == 0;
}
} } }

// ==== BACKFILL 0x0070DD90  TechnoClass::vt_entry_3E8  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::vt_entry_3E8() { return 0; }

// ==== BACKFILL 0x0070DDA0  ObjectClass::CheckTypeFlag1681_2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::CheckTypeFlag1681_2() {
{
    return *(char *)(this->Constructor_BitFont() + 1681) == 0;
}
} } }

// ==== BACKFILL 0x0070DDC0  BuildingClass::checkPlacement  cls=BuildingClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int BuildingClass::checkPlacement() {
{
    return this->q13C;
}
} }

// ==== BACKFILL 0x0070DE20  sub_70DE20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_70DE20::sub_70DE20(int a2)
{
{
    this->M324 += a2;
    return a2;
}
}

// ==== BACKFILL 0x0070E120  TechnoClass::Vt249to254  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int TechnoClass::Vt249to254() {
{
    int v2;
    int v3;
    v2 = *(int *)this;
    v3 = this->CheckTypeFlag1681();
    return (*(int (__thiscall **)(BuildingClass *, int))(v2 + 1016))(this, v3);
}
} } }

// ==== BACKFILL 0x0070E240  IsNonNullPtr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int IsNonNullPtr(int* ptr) {
return ptr != nullptr && *ptr != 0;

/* ASM:
mov     eax, [esp+arg_0]
test    eax, eax
jz      short loc_70E255
cmp     dword ptr [eax], 0
jz      short loc_70E255
mov     eax, 1
retn    4
; ---------------------------------------------------------------------------

loc_70E255:                             ; CODE XREF: IsNonNullPtr+6↑j
; IsNonNullPtr+B↑j
xor     eax, eax
retn    4
*/
} }

// ==== BACKFILL 0x0070E340  ObjectClass::ResetTimer2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::ResetTimer2() {
{
    int *v1;
    int v3;
    v1 = (int *)((char *)(this) + 424);
    *v1 = g_CurrentFrame;
    v1[1] = v3;
    v1[2] = 0;
    return v3;
}
} } }

// ==== BACKFILL 0x0070E360  Techno::StartInvulnerability  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BuildingTypeClass * Techno::StartInvulnerability(BuildingTypeClass * aP1)
{
{
    BuildingTypeClass *v1;
    v1 = TechnoClass::InvulnerabilityIntensity_SetContext(this, aP1);
    return TechnoClass::CalcFlashAlpha(this, v1);
}
}

// ==== BACKFILL 0x0070EFD0  TechnoClass::HasPassengers  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::HasPassengers() const {
return this->empLockRemaining > 0;
}

// ==== BACKFILL 0x0070F010  TechnoClass::COMStub_Return0_298  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::COMStub_Return0_298() { return 0; }

// ==== BACKFILL 0x0070F020  TechnoClass::StubReturnFalse5  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::StubReturnFalse5()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x0070F030  TechnoClass::StubReturnFalse6  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::StubReturnFalse6()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x0070F040  TechnoClass::checkMovementRestrictions  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::checkMovementRestrictions()
{
return -1;
}

// ==== BACKFILL 0x0070F050  TechnoClass::ProcessCellClearance  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::ProcessCellClearance() { return 0; }

// ==== BACKFILL 0x0070F0B0  TacticalClass::MapSpecialDrawMode  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::MapSpecialDrawMode(MouseClass * aP1)
{
{
    char v3;
    int result;
    bool v5;
    v3 = Render_Draw_731BF0();
    if ( this == (void *)1 )
  {
    if ( v3 )
    return 62;
    return (int)this;
  }
    if ( this != (void *)5 )
    return (int)this;
    v5 = v3 == 0;
    result = 63;
    if ( v5 )
    return (int)this;
    return result;
}
}

// ==== BACKFILL 0x0070F0E0  TechnoClass::StubReturnFalse7  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::StubReturnFalse7()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x0070F0F0  TechnoClass::StubReturnFalse8  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::StubReturnFalse8()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x0070F100  TechnoClass::COMStub_Return0_307  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::COMStub_Return0_307() { return 0; }

// ==== BACKFILL 0x0070F110  TechnoClass::StubReturnFalse9  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::StubReturnFalse9()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x0070F740  sub_70F740  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_70F740::sub_70F740(int a2)
{
{
    int *v2;
    int v4;
    v2 = this + 96;
    *v2 = g_CurrentFrame;
    v2[1] = v4;
    v2[2] = a2;
    return v4;
}
}

// ==== BACKFILL 0x0070F820  ObjectClass::GetPriorityTarget  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::GetPriorityTarget() {
{
      if ( this->q2C0 )
        return CaptureManagerClass::GetOriginalOwner(this);
      if ( this->q2CC )
        return this->q2E0;
      return this->q21C;
}
} } }

// ==== BACKFILL 0x0070FBD0  UnitClass::IsDeactivated  cls=UnitClass  sig=csp  renamed_refs=0  residual=- ====
bool UnitClass::IsDeactivated()
// 0x70fbd0
{
return isDeactivated;

/* ASM:
mov     al, [ecx+1C8h]
retn
*/
}

// ==== BACKFILL 0x0070FE40  sub_70FE40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_70FE40::sub_70FE40(int a2)
{
{
    this->M464 = a2;
    return a2;
}
}

// ==== BACKFILL 0x0070FE50  sub_70FE50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_70FE50::sub_70FE50()
{
{
    int v2;
    int result;
    v2 = this->M468;
    if ( v2 )
  {
    (*(void (__thiscall **)(int))(*(int *)(v2) + 248))(v2);
    this->M468 = 0;
  }
    result = this->M460;
    if ( result )
  {
    *(int *)(result + 464) = 0;
    result = *(int *)(this->M460 + 540);
    if ( result )
    *(char *)(result + 22392) = 1;
    this->M460 = 0;
  }
    return result;
}
}
