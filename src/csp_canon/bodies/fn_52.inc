// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00520260  sub_520260  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_520260::sub_520260()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x520260)
}

// ==== BACKFILL 0x005202F0  ProcessTechnoSquadResponse  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_5202F0::ProcessTechnoSquadResponse() {

  int v2; // ecx
  ObjectClass *v3; // edi
  int *v4; // eax
  int vtable0; // edx
  int v6; // ebx
  int *v7; // eax
  unsigned int *v8; // ebx
  unsigned int *v9; // eax
  int *v10; // eax
  TeamClass *attachedTag; // ecx
  TechnoClass *v12; // ecx
  unsigned int *v14; // ebx
  unsigned int *v15; // eax
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
  unsigned int *v27; // eax
  int *v28; // eax
  int *v29; // eax
  int v30; // ecx
  int v31; // edx
  int v32; // eax
  unsigned int *v33; // eax
  int v34; // ebx
  int v35; // ebp
  unsigned int *v36; // edi
  int v37; // [esp+28h] [ebp-30h] BYREF
  int v38; // [esp+2Ch] [ebp-2Ch]
  int v39; // [esp+30h] [ebp-28h]
  unsigned int v40[3]; // [esp+34h] [ebp-24h] BYREF
  unsigned char v41[12]; // [esp+40h] [ebp-18h] BYREF
  unsigned int v42[3]; // [esp+4Ch] [ebp-Ch] BYREF

  if ( !*(unsigned char *)(*((unsigned int *)this + 432) + 3781) ) /*0x5202ff*/
    return 0; /*0x5202ff*/
  v2 = *((unsigned int *)this + 361); /*0x52030d*/
  if ( !v2 ) /*0x520315*/
    return 0; /*0x520315*/
  if ( (*(int (**)(int))(*(unsigned int *)v2 + 44))(v2) != 1 ) /*0x520323*/
    return 0; /*0x520323*/
  v3 = (ObjectClass *)*((unsigned int *)this + 361); /*0x520329*/
  if ( (uint8_t)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v3) ) /*0x520336*/
    return 0; /*0x52033d*/
  v4 = (int *)(*(int (**)(ObjectClass *, unsigned int *, TechnoClass *))(v3->vtable0 + 76))(v3, v40, this); /*0x52034d*/
  v37 = *v4; /*0x520352*/
  vtable0 = this->vtable0; /*0x520356*/
  v38 = v4[1]; /*0x52035b*/
  v6 = v4[2]; /*0x520361*/
  v7 = (int *)(*(int (**)(TechnoClass *, unsigned int *))(vtable0 + 72))(this, v40); /*0x520369*/
  v37 = *v7; /*0x52036e*/
  v38 = v7[1]; /*0x520375*/
  if ( (int)abs32(v6 - v7[2]) >= dword_A8F240 /*0x5203f1*/
    || (v8 = (unsigned int *)(*(int (**)(ObjectClass *, unsigned int *))(v3->vtable0 + 72))(v3, v40),
        v9 = (unsigned int *)(*(int (**)(TechnoClass *, unsigned char *))(this->vtable0 + 72))(this, v41),
        v10 = Coord::Subtract((Coord *)v42, *v9 - *v8, v9[1] - v8[1], v9[2] - v8[2]),
        v37 = *v10,
        v38 = v10[1],
        v39 = v10[2],
        (int)Coord::Length((Coord *)&v37) >= 128) )
  {
    v14 = (unsigned int *)(*(int (**)(ObjectClass *, unsigned int *))(v3->vtable0 + 72))(v3, v42); /*0x52048b*/
    v15 = (unsigned int *)(*(int (**)(TechnoClass *, unsigned char *))(this->vtable0 + 72))(this, v41); /*0x520494*/
    v16 = Coord::Subtract((Coord *)v40, *v15 - *v14, v15[1] - v14[1], v15[2] - v14[2]); /*0x5204b4*/
    v37 = *v16; /*0x5204bb*/
    v38 = v16[1]; /*0x5204c6*/
    v39 = v16[2]; /*0x5204cd*/
    v17 = (int)Coord::Length((Coord *)&v37) < 512; /*0x5204d6*/
    v18 = *((unsigned int *)this + 413); /*0x5204db*/
    if ( v17 ) /*0x5204e1*/
    {
      if ( !v18 ) /*0x5204e9*/
        WinAPI::Wrapper(-2147467261); /*0x5204f0*/
      v19 = (int *)(*(int (**)(unsigned int, unsigned int *))(**((unsigned int **)this + 413) + 20))( /*0x520503*/
                     *((unsigned int *)this + 413),
                     v42);
      v20 = *v19; /*0x520506*/
      v21 = v19[1]; /*0x52050e*/
      v22 = v19[2]; /*0x520511*/
      if ( v20 != dword_A8F200 || v21 != dword_A8F204 || v22 != dword_A8F208 ) /*0x520526*/
      {
        if ( !*((unsigned int *)this + 413) ) /*0x52052c*/
          WinAPI::Wrapper(-2147467261); /*0x52053b*/
        v23 = (int *)(*(int (**)(unsigned int, unsigned int *))(**((unsigned int **)this + 413) + 20))( /*0x52054e*/
                       *((unsigned int *)this + 413),
                       v42);
        v24 = *v23; /*0x520551*/
        v25 = v23[1]; /*0x520553*/
        v26 = v3->vtable0; /*0x520559*/
        v39 = v23[2]; /*0x52055b*/
        v27 = (unsigned int *)(*(int (**)(ObjectClass *, unsigned char *))(v26 + 72))(v3, v41); /*0x520566*/
        v28 = Coord::Subtract((Coord *)v40, *v27 - v24, v27[1] - v25, v27[2] - v39); /*0x520582*/
        v37 = *v28; /*0x520589*/
        v38 = v28[1]; /*0x520594*/
        v39 = v28[2]; /*0x52059b*/
        if ( (int)Coord::Length((Coord *)&v37) <= 128 ) /*0x5205a9*/
          return 0; /*0x5205a9*/
      }
      (*(void (**)(TechnoClass *, unsigned int, int))(this->vtable0 + 1152))(this, *((unsigned int *)this + 361), 1); /*0x5205bc*/
    }
    else
    {
      if ( !v18 ) /*0x5205c9*/
        WinAPI::Wrapper(-2147467261); /*0x5205d0*/
      v29 = (int *)(*(int (**)(unsigned int, unsigned int *))(**((unsigned int **)this + 413) + 20))( /*0x5205e3*/
                     *((unsigned int *)this + 413),
                     v42);
      v30 = *v29; /*0x5205e6*/
      v31 = v29[1]; /*0x5205ee*/
      v32 = v29[2]; /*0x5205f1*/
      if ( v30 != dword_A8F200 || v31 != dword_A8F204 || v32 != dword_A8F208 ) /*0x520606*/
      {
        if ( !*((unsigned int *)this + 413) ) /*0x52060c*/
          WinAPI::Wrapper(-2147467261); /*0x52061b*/
        v33 = (unsigned int *)(*(int (**)(unsigned int, unsigned int *))(**((unsigned int **)this + 413) + 20))( /*0x52062e*/
                          *((unsigned int *)this + 413),
                          v42);
        v34 = *v33 / 256; /*0x52065a*/
        v35 = v33[1] / 256; /*0x52065d*/
        v36 = (unsigned int *)(*(int (**)(ObjectClass *, unsigned char *, TechnoClass *))(v3->vtable0 + 76))(v3, v41, this); /*0x520663*/
        if ( (uint16_t)(*v36 / 256) == (unsigned short)v34 && (uint16_t)(v36[1] / 256) == (unsigned short)v35 ) /*0x52068c*/
          return 0; /*0x52068c*/
      }
    }
    (*(void (**)(TechnoClass *, unsigned int, int))(this->vtable0 + 1152))(this, *((unsigned int *)this + 361), 1); /*0x52069b*/
    return 0; /*0x5206a4*/
  }
  attachedTag = (TeamClass *)v3->attachedTag; /*0x5203f7*/
  if ( attachedTag ) /*0x5203fc*/
    TeamClass::Update_0(attachedTag, 1, (int)this, dword_A8F1E0, 0, 0); /*0x52040c*/
  (*(void (**)(ObjectClass *, int))(v3->vtable0 + 628))(v3, 3); /*0x520417*/
  (*(void (**)(ObjectClass *, unsigned int))(v3->vtable0 + 220))(v3, 0); /*0x520423*/
  v12 = (TechnoClass *)this->attachedTag; /*0x520429*/
  if ( v12 ) /*0x52042e*/
  {
    if ( (uint8_t)TechnoClass::HasAnyMission(v12) ) /*0x520430*/
      ObjectClass::SetReference(v3, this->attachedTag); /*0x52043f*/
  }
  (*(void (**)(ObjectClass *, int, int))(v3->vtable0 + 980))(v3, this->owner, 1); /*0x520451*/
  v3[4].parachute = *(unsigned int *)(*((unsigned int *)this + 432) + 3576); /*0x520465*/
  (*(void (**)(TechnoClass *))(this->vtable0 + 248))(this); /*0x52046d*/
  return 1; /*0x520473*/

}

// ==== BACKFILL 0x00521320  InfantryClass::GetIdleTimer  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryClass::GetIdleTimer()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00521320.json)
}

// ==== BACKFILL 0x005216D0  InfantryClass::CanMoveFreely  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
bool InfantryClass::CanMoveFreely()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005216D0.json)
}

// ==== BACKFILL 0x005218E0  InfantryClass::GetDeployWeaponIndex  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryClass::GetDeployWeaponIndex(int weapon_index)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005218E0.json)
}

// ==== BACKFILL 0x00521C90  InfantryClass::PowerDrainUpdate  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryClass::PowerDrainUpdate(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00521C90.json)
}

// ==== BACKFILL 0x00521D80  InfantryClass::ComputeDeploySpeedFactor  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int * InfantryClass::ComputeDeploySpeedFactor()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00521D80.json)
}

// ==== BACKFILL 0x005220F0  InfantryClass::SetPermanentBerzerk  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
void InfantryClass::SetPermanentBerzerk()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5220f0)
}

// ==== BACKFILL 0x00522340  InfantryClass::CalculateApproachPath  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
void InfantryClass::CalculateApproachPath(char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522340.json)
}

// ==== BACKFILL 0x005224D0  InfantryClass::IsBridgeRepairEnabled  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
bool InfantryClass::IsBridgeRepairEnabled()
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5224d0)
}

// ==== BACKFILL 0x005224F0  TechnoClass::updateTurretRotation  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
bool TechnoClass::updateTurretRotation() {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x5224f0.json */
}

// ==== BACKFILL 0x00522510  TechnoClass::IsMission27to30  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::IsMission27to30() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522510.json)
}

// ==== BACKFILL 0x00522540  sub_522540  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_522540::sub_522540()
{

  return *(unsigned char *)(*((unsigned int *)this + 432) + 1708); /*0x52254c*/

}

// ==== BACKFILL 0x00522600  InfantryClass::FireAtTargetPos  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryClass::FireAtTargetPos()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522600.json)
}

// ==== BACKFILL 0x00522640  InfantryClass::GetProductionLimit  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryClass::GetProductionLimit()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522640.json)
}

// ==== BACKFILL 0x00522780  InfantryClass::InitProductionLimits  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryClass::InitProductionLimits()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522780.json)
}

// ==== BACKFILL 0x005227F0  InfantryClass::CanAttackTarget  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
bool InfantryClass::CanAttackTarget(HouseClass* other)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005227F0.json)
}

// ==== BACKFILL 0x00522A50  nullsub_146  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_146(int a1)
{
  ; /*0x522a50*/
}

// ==== BACKFILL 0x00522CB0  TechnoClass::IsEnteringOrCapturingStructure  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::IsEnteringOrCapturingStructure() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522CB0.json)
}

// ==== BACKFILL 0x005232F0  InfantryClass::StubReturn1776  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryClass::StubReturn1776()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5232f0)
}

// ==== BACKFILL 0x00523340  InfantryClass::StubReturn15  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryClass::StubReturn15()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x523340)
}

// ==== BACKFILL 0x00523370  InfantryClass::checkBridgeClearance  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
void* InfantryClass::checkBridgeClearance(int a1)
{
    (void)a1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00523370.json)
}

// ==== BACKFILL 0x005233A0  COMObject::SwapReference  cls=COMObject  sig=csp  renamed_refs=0  residual=- ====
void* COMObject::SwapReference(int a2) {
  int v3; // edi

  v3 = *(unsigned int *)this->__pad_0; /*0x5233a8*/
  if ( *(unsigned int *)this->__pad_0 != a2 ) /*0x5233ac*/
  {
    *(unsigned int *)this->__pad_0 = a2; /*0x5233b0*/
    if ( a2 ) /*0x5233b2*/
      (*(void (**)(int))(*(unsigned int *)a2 + 4))(a2); /*0x5233b7*/
    if ( v3 ) /*0x5233bc*/
      (*(void (**)(int))(*(unsigned int *)v3 + 8))(v3); /*0x5233c1*/
  }
  return (int *)this->__pad_0; /*0x5233c6*/
}

// ==== BACKFILL 0x005239D0  InfantryTypeClass::DTOR  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryTypeClass::DTOR()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005239D0.json)
}

// ==== BACKFILL 0x00523B10  InfantryTypeClass::ConstructInfantry  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
InfantryClass *  InfantryTypeClass::ConstructInfantry(AbstractClass * ppv)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00523B10.json)
}

// ==== BACKFILL 0x00523C20  InfantryTypeClass::GetDimensions  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
int * InfantryTypeClass::GetDimensions(int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00523C20.json)
}

// ==== BACKFILL 0x00523C90  Factory::FindExitCellByName  cls=Factory  sig=csp  renamed_refs=0  residual=- ====
int Factory::FindExitCellByName()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x523C90)
}

// ==== BACKFILL 0x00524760  InfantryTypeClass::GetDefaultDimensions  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * InfantryTypeClass::GetDefaultDimensions(unsigned int * a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00524760.json)
}

// ==== BACKFILL 0x00524790  InfantryTypeClass::GetGameplayValue  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryTypeClass::GetGameplayValue()
{

  return *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5848); /*0x52479b*/

}

// ==== BACKFILL 0x005247A0  InfantryTypeClass::StubReturnFalse  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryTypeClass::StubReturnFalse()
{

  return 0; /*0x5247a2*/

}

// ==== BACKFILL 0x005247B0  InfantryTypeClass::j_?do_always_noconv_codecvt_base_std__MBE_NXZ_19  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryTypeClass::j__do_always_noconv_codecvt_base_std__MBE_NXZ_19()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5247B0)
}

// ==== BACKFILL 0x005247D0  InfantryTypeClass::ClampToGroundHeight  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * InfantryTypeClass::ClampToGroundHeight(unsigned int * a1, int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005247D0.json)
}

// ==== BACKFILL 0x00524840  InfantryTypeClass::PowerDrainUpdate  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryTypeClass::PowerDrainUpdate(int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00524840.json)
}

// ==== BACKFILL 0x00524C70  InfantryTypeClass::GetClassIdentifier  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00524C70.json)
}

// ==== BACKFILL 0x00524D40  InfantryTypeClass::GetTypeIdentifier  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryTypeClass::GetTypeIdentifier()
{

  return 16; /*0x524d45*/

}

// ==== BACKFILL 0x00524D50  InfantryTypeClass::GetObjectSize  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryTypeClass::GetObjectSize()
{

  return 3792; /*0x524d55*/

}

// ==== BACKFILL 0x00524D60  InfantryTypeClass::GetAuxField  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryTypeClass::GetAuxField()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x524D60)
}

// ==== BACKFILL 0x00524D70  InfantryTypeClass::ddtor  cls=InfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
InfantryTypeClass * InfantryTypeClass::ddtor(int Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00524D70.json)
}

// ==== BACKFILL 0x00524EC0  ??0Iostream_init_QAE_XZ_4  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
Iostream_init * E4Recv_524EC0::__0Iostream_init_QAE_XZ_4()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x524EC0)
}

// ==== BACKFILL 0x00524FC0  TypeList::QueryInterface  cls=TypeList  sig=csp  renamed_refs=0  residual=- ====
TypeList_flat * WarheadTypeClass::QueryInterface(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00524FC0.json)
}

// ==== BACKFILL 0x00525060  VectorClass::CopyDefault  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * _::CopyDefault(unsigned int *a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00525060.json)
}

// ==== BACKFILL 0x00525250  DynamicVectorClass::AnimTypeConstructor  cls=DynamicVectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * _::AnimTypeConstructor(int a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00525250.json)
}

// ==== BACKFILL 0x005253B0  DynamicVector::Add_Alt4  cls=DynamicVector  sig=csp  renamed_refs=0  residual=DynamicVector_field_0x1 ====
char DynamicVector::Add_Alt4(unsigned int *aP1)
{

  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x5253b3*/
  result = (int)this->DynamicVector_field_0x10; /*0x5253b6*/
  if ( result < DynamicVector_field_0x8 /*0x5253dd*/
    || (this->__pad_C[1] || !DynamicVector_field_0x8)
    && (result = *(unsigned int *)this->__pad_14, result > 0)
    && (result = (*(int (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (unsigned char)result) )
  {
    result = (int)this->DynamicVector_field_0x10; /*0x5253e5*/
    v5 = (unsigned int)(*(unsigned int *)&(&this->DynamicVector_field_0x1)[3]); /*0x5253e8*/
    this->DynamicVector_field_0x10 = (unsigned int)((void *)(result + 1)); /*0x5253ee*/
    *(unsigned int *)(v5 + 4 * result) = (unsigned int)(*aP1); /*0x5253f8*/
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x5253fb*/
  }
  else
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x5253df*/
  }
  return result; /*0x5253e1*/

}

// ==== BACKFILL 0x005255F0  TypeList::AnimTypeCopy  cls=TypeList  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TypeList_flat::AnimTypeCopy(VectorClass_flat * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5255F0)
}

// ==== BACKFILL 0x005257C0  INIClass::ClearSection  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::ClearSection(int a1, void* a2) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00526420  INIClass::SaveToPipe  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::SaveToPipe(int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 5 errs): wrong-universe gap2 body; truth func_0x526420.json */
}

// ==== BACKFILL 0x00526950  sub_526950  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_526950::sub_526950()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x526950)
}

// ==== BACKFILL 0x00526B00  INIClass::ResetSection  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::ResetSection() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x526B00.json */
}

// ==== BACKFILL 0x00526CC0  INIClass::GetStringByIndex  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::GetStringByIndex(CCINIClass * aP1, CCINIClass * aP2, void *a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x526CC0)
}

// ==== BACKFILL 0x00526E80  INIClass::ReadBase64Data  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::ReadBase64Data(void* a1, int a2, int a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x005271C0  INIClass::ReadIntList2  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::ReadIntList2(void* a1, void* a2) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x005275C0  INIClass::SetInt  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::SetInt(void* a1, void* a2, int a3, int a4) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00527640  INIClass::SetIntFormat  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::SetIntFormat(void* a1, void* aP2, int a4, int aP4) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 14 errs): wrong-universe gap2 body; truth func_0x527640.json */
}

// ==== BACKFILL 0x005278F0  INIClass::ReadInt  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int INIClass::ReadInt(String *a2, String *a3, int a4, int aP2, int aP1, int a1, int aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5278F0)
}

// ==== BACKFILL 0x00527B90  INIClass::ReadDouble  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::ReadDouble(void* a1, void* a2, void* a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00527C10  INIClass::SetRect  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::SetRect(void* a1, void* a2, void* a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00527C60  INIClass::ReadFloat  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::ReadFloat(void* a1, void* a2, void* a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00528170  INIClass::ReadDouble3  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::ReadDouble3(void* a1, void* a2, int a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x005281C0  INIClass::ReadDouble2  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::ReadDouble2(void* a1, void* a2, int a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x005285B0  INIClass::SetDouble  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::SetDouble(void* a1, void* a2, double a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00528600  INIClass::GetString2  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::GetString2(void* a1, void* a2, double a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x005289E0  INIClass::SetStringOrEmpty  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::SetStringOrEmpty(void* a1, void* a2, void* a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00528E00  INIClass::SetWideAsHex  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::SetWideAsHex(void* a1, void* a2, void* a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00529560  INIClass::SetBool  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::SetBool(void* a1, void* a2, int a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x005295A0  INIClass::ReadBool3  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::ReadBool3(void* a1, void* a2, int a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x005297E0  INIEntry::Write2Integers  cls=INIEntry  sig=csp  renamed_refs=0  residual=- ====
int INIEntry::Write2Integers(void* a1, void* a2, void* a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00529820  INIClass::GetInt  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
char INIClass::GetInt(char ** a2, char ** a3, unsigned int * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x529820)
}

// ==== BACKFILL 0x00529BF0  INIClass::ReadCoord3  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::ReadCoord3(void* a1, void* a2, void* a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00529C40  INIClass::ReadCoord2  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::ReadCoord2(void* a1, void* a2, void* a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0052A040  INIClass::ReadBool2  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::ReadBool2(void* a1, void* a2, void* a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0052A0A0  INIClass::ReadBool  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::ReadBool(void* a1, void* a2, void* a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0052A670  WinMain_Init  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_52A670::WinMain_Init(void* a2, char a3) {

  ObjectClass v5[3]; // [esp+8h] [ebp-504h] BYREF
  unsigned char v6[512]; // [esp+20Ch] [ebp-300h] BYREF
  unsigned int v7[64]; // [esp+40Ch] [ebp-100h] BYREF

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

// ==== BACKFILL 0x0052A940  INIClass::SaveTimeField  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::SaveTimeField(void* a1, void* a2, int a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0052AAF0  sub_52AAF0  cls=INIEntry@INIClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_52AAF0::sub_52AAF0()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52AAF0)
}

// ==== BACKFILL 0x0052AD50  WarheadTypeClass::parseModifiers  cls=WarheadTypeClass  sig=csp  renamed_refs=0  residual=- ====
void * WarheadTypeClass::parseModifiers(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0052AD50.json)
}

// ==== BACKFILL 0x0052AE00  WarheadTypeClass::parseAnimations  cls=WarheadTypeClass  sig=csp  renamed_refs=0  residual=- ====
WarheadTypeClass * WarheadTypeClass::parseAnimations(char * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0052AE00.json)
}

// ==== BACKFILL 0x0052AE20  Delegate::Constructor_GenericNode  cls=GenericNode  sig=csp  renamed_refs=0  residual=- ====
GenericNode * Delegate::Constructor_GenericNode(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52AE20)
}

// ==== BACKFILL 0x0052AE70  Delegate::ClearVectorAndStraw  cls=CacheStraw  sig=csp  renamed_refs=0  residual=- ====
int * Delegate::ClearVectorAndStraw(char a2)
{

  ((Vector *)((int)&this->__pad_0[12]))->Clear(); /*0x52ae76*/
  ((Straw*)(Straw *)this)->Dtor(); /*0x52ae7d*/
  if ( (a2 & 1) != 0 ) /*0x52ae87*/
    __3_YAXPAX_Z(this); /*0x52ae8a*/
  return (int *)this->__pad_0; /*0x52ae94*/

}

// ==== BACKFILL 0x0052AEA0  Delegate::DestroyStraw  cls=Base64Straw  sig=csp  renamed_refs=0  residual=- ====
int * Delegate::DestroyStraw(char a2)
{

  ((Straw*)(Straw *)this)->Dtor(); /*0x52aea3*/
  if ( (a2 & 1) != 0 ) /*0x52aead*/
    __3_YAXPAX_Z(this); /*0x52aeb0*/
  return (int *)this->__pad_0; /*0x52aeba*/

}

// ==== BACKFILL 0x0052AEE0  Delegate::DestroyPipe  cls=Base64Pipe  sig=csp  renamed_refs=0  residual=- ====
int * Delegate::DestroyPipe(char a2)
{

  ((Pipe*)(Pipe *)this)->Dtor(); /*0x52aee3*/
  if ( (a2 & 1) != 0 ) /*0x52aeed*/
    __3_YAXPAX_Z(this); /*0x52aef0*/
  return (int *)this->__pad_0; /*0x52aefa*/

}

// ==== BACKFILL 0x0052AF50  INIClass::sectionExists  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * INIClass::sectionExists() {
    unsigned int *result; // eax
    int *sectionHead; // edx
    int v3; // ebx
    int v4; // edi
    int v5; // edi
    int v6; // edi

    result =(unsigned int *)(int *)(this->__pad_0); /*0x52af50*/
    sectionHead = (int *)(this->sectionHead); /*0x52af59*/
    this->headNode[1] = 0; /*0x52af5f*/
    this->headNode[2] = 0; /*0x52af62*/
    this->headNode[0] = (int)0; /*0x52af65*/
    this->sectionHead[1] = 0; /*0x52af6b*/
    this->sectionHead[2] = 0; /*0x52af6e*/
    this->sectionHead[0] = (int)0; /*0x52af71*/
    *(unsigned int *)this->__pad_0 = 0; /*0x52af77*/
    if ( this != (INIClass *)-16 ) /*0x52af7d*/
    {
      v3 = this->sectionHead[1]; /*0x52af7f*/
      if ( v3 ) /*0x52af84*/
      {
        v4 = this->sectionHead[2]; /*0x52af86*/
        if ( v4 ) /*0x52af8b*/
        {
          *(unsigned int *)(v4 + 4) = v3; /*0x52af8d*/
          *(unsigned int *)(this->sectionHead[1] + 8) = this->sectionHead[2]; /*0x52af96*/
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
      *(unsigned int *)(v6 + 8) = (unsigned int)(sectionHead); /*0x52afaf G42.34 T11: ptr-to-int cast (int* -> uint store)*/
    this->headNode[1] = (int)sectionHead; /*0x52afb2*/
    *(unsigned int *)this->__pad_0 = 0; /*0x52afb7*/
    return result; /*0x52afb5*/
}

// ==== BACKFILL 0x0052B080  INIClass::getValue  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
void* INIClass::getValue() {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 5 errs): wrong-universe gap2 body; truth func_0x52B080.json */
}

// ==== BACKFILL 0x0052B570  INIClass::mergeSection  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::mergeSection(int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x52B570.json */
}

// ==== BACKFILL 0x0052B9B0  BINK::Background_Setup  cls=BINK  sig=csp  renamed_refs=0  residual=- ====
HWND BINK::Background_Setup(HWND hDlg)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52B9B0)
}

// ==== BACKFILL 0x0052D430  ReadModConfigINI  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
INT_PTR ReadModConfigINI(HWND hDlg, UINT, WPARAM, int * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52D430)
}

// ==== BACKFILL 0x0052D790  sub_52D790  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_52D790(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52D790)
}
