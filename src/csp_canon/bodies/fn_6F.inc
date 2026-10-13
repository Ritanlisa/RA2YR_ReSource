// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x006F03F0  sub_6F03F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6F03F0::sub_6F03F0()
{

  int *v1; // esi

  v1 = (int *)(&this->customSound_controller)[1]; /*0x6f03f2*/
  if ( !v1 ) /*0x6f03f9*/
    return 0; /*0x6f0423*/
  while ( *(int *)((*(int (**)(int *))(*v1 + 132))(v1) + 1668) > 0 && v1[191] <= 0 ) /*0x6f0417*/
  {
    v1 = (int *)v1[374]; /*0x6f0419*/
    if ( !v1 ) /*0x6f0421*/
      return 0; /*0x6f0421*/
  }
  return 1; /*0x6f0425*/

}

// ==== BACKFILL 0x006F0430  TeamClass::StubReturn160  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
int TeamClass::StubReturn160()
{

  return 160; /*0x6f0435*/

}

// ==== BACKFILL 0x006F0440  TeamClass::StubReturn34  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
int TeamClass::StubReturn34()
{

  return 34; /*0x6f0445*/

}

// ==== BACKFILL 0x006F0450  TeamClass::ProcessEvent  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
void * TeamClass::ProcessEvent(int a2) {
    this->Destructor(); /*0x6f0453*/
    if ( (a2 & 1) != 0 ) /*0x6f045d*/
      RA2_OPDEL(this); /*0x6f0460*/
    return this; /*0x6f046a*/
}

// ==== BACKFILL 0x006F09C0  TeamClass::CreateOneOf  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
int TeamClass::CreateOneOf(int a2) {
    TeamClass *OwnerHouse; // edi
    int v4; // eax
    int v6; // eax

    ; /*0x6f09c9 Debug::Log 无参载体缺席(G42.33 备注)*/
    OwnerHouse = (TeamClass *)a2; /*0x6f09ce*/
    if ( !a2 ) /*0x6f09d7*/
    {
      OwnerHouse = *(TeamClass **)(this + 196); /*0x6f09d9*/
      if ( !OwnerHouse ) /*0x6f09e1*/
      {
        if ( !(uint8_t)(*(BuildingTypeClass **)(this + 200))->IsSpecialType() ) /*0x6f09e9*/
          return 0; /*0x6f09e9*/
        OwnerHouse = (TeamClass *)(*(BuildingTypeClass **)(this + 200))->FindOwnerHouse(); /*0x6f09fd*/
        if ( !OwnerHouse ) /*0x6f0a01*/
          return 0; /*0x6f0a01*/
      }
    }
    if ( !dword_A8E7AC ) /*0x6f0a0a*/
    {
      v4 = *(unsigned int *)(this + 184); /*0x6f0a0c*/
      if ( v4 >= 0 ) /*0x6f0a14*/
      {
        if ( *(unsigned int *)&dword_A8B238 ) /*0x6f0a1e*/
        {
          if ( TeamClass::CountActiveTeamsForType((TeamTypeClass *)this) >= *(unsigned int *)(this + 184) ) /*0x6f0a3d 载体 static(TeamTypeClass*)*/
            return 0; /*0x6f0a3d*/
        }
        else if ( *(unsigned int *)(this + 220) >= v4 ) /*0x6f0a26*/
        {
          return 0; /*0x6f0a2c*/
        }
      }
    }
    ; /*0x6f0a48 Debug::Log 无参载体缺席(G42.33 备注)*/
    v6 = (int)RA2_OPNEW(0xA0u); /*0x6f0a52*/
    if ( !v6 ) /*0x6f0a5c*/
      return 0; /*0x6f0a5c*/
    return (int)((ra2::game::MissionClass *)v6)->Construct((int)this, (int)OwnerHouse, 0); /*0x6f0a28*/
}

// ==== BACKFILL 0x006F0FC0  TeamTypeClass::FindByName  cls=TeamTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TeamTypeClass::FindByName()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F0FC0)
}

// ==== BACKFILL 0x006F1AB0  TeamTypeClass::ReadScriptData  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
TeamTypeClass * TeamTypeClass::ReadScriptData(char * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F1AB0)
}

// ==== BACKFILL 0x006F1B90  TeamTypeClass::SaveToINI  cls=TeamTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TeamTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F1B90)
}

// ==== BACKFILL 0x006F1BB0  TeamTypeClass::LoadTypeData  cls=TeamTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TeamTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F1BB0)
}

// ==== BACKFILL 0x006F1C40  TeamTypeClass::GetClassIdentifier  cls=TeamTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TeamTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6f1c46*/
    return -2147467261; /*0x6f1c48*/
  *a2 = -774134194; /*0x6f1c56*/
  a2[1] = 298977144; /*0x6f1c5e*/
  a2[2] = 1610655148; /*0x6f1c67*/
  a2[3] = unk_7E978C; /*0x6f1c70*/
  return 0; /*0x6f1c4d*/

}

// ==== BACKFILL 0x006F1F30  TeamTypeClass::FlashAllInstances  cls=TeamTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TeamTypeClass::FlashAllInstances(AnimClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F1F30)
}

// ==== BACKFILL 0x006F1F70  TeamTypeClass::FindFirstInstance  cls=TeamTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TeamTypeClass::FindFirstInstance()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F1F70)
}

// ==== BACKFILL 0x006F20A0  TeamTypeClass::GetTypeIdentifier  cls=TeamTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TeamTypeClass::GetTypeIdentifier()
{

  return 35; /*0x6f20a5*/

}

// ==== BACKFILL 0x006F20B0  TeamTypeClass::GetObjectSize  cls=TeamTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TeamTypeClass::GetObjectSize()
{

  return 248; /*0x6f20b5*/

}

// ==== BACKFILL 0x006F2230  Team_Helper_6F2230  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6F2230::Team_Helper_6F2230(int a2, int a3) {

  this->Items = 0; /*0x6f2239*/
  this->Capacity = a2; /*0x6f2240*/
  this->IsInitialized = 1; /*0x6f2243*/
  this->IsAllocated = 0; /*0x6f2247*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x6f224b) */
  if ( a2 ) /*0x6f2251*/
  {
    if ( a3 ) /*0x6f2259*/
    {
      this->Items = (void *)a3; /*0x6f225b*/
    }
    else
    {
      this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x6f226c*/
      this->IsAllocated = 1; /*0x6f226f*/
    }
  }
  /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x6f2273) */
  *((unsigned int *)this + 5) = 10; /*0x6f2279*/
  *((unsigned int *)this + 4) = 0; /*0x6f2280*/
  return &this->vtable0; /*0x6f2289*/

}

// ==== BACKFILL 0x006F2780  Team_Helper_6F2780  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6F2780::Team_Helper_6F2780(void* aP1) {

  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  if ( this == (ObjectClass *)aP1 ) /*0x6f278a*/
    return this; /*0x6f278a*/
  (*((void (**)(ObjectClass *))this->vtable1 + 3))(this); /*0x6f278e*/
  v3 = (void *)aP1[2]; /*0x6f2791*/
  ((unsigned int *)this)[0] = v3; /*0x6f2796*/
  if ( !v3 ) /*0x6f2799*/
  {
    ((unsigned int *)this)[0] = 0; /*0x6f27da*/
    BYTE1(((unsigned int *)this)[0]) = 0; /*0x6f27e1*/
    return this; /*0x6f27e5*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (unsigned int)v3); /*0x6f27a3*/
  ((unsigned int *)this)[0] = v4; /*0x6f27ab*/
  if ( !v4 ) /*0x6f27b0*/
    return this; /*0x6f27b0*/
  vtable2 = ((unsigned int *)this)[0]; /*0x6f27b2*/
  v6 = 0; /*0x6f27b5*/
  BYTE1(((unsigned int *)this)[0]) = 1; /*0x6f27b9*/
  if ( (int)vtable2 <= 0 ) /*0x6f27bd*/
    return this; /*0x6f27bd*/
  do /*0x6f27d1*/
  {
    *((unsigned int *)((unsigned int *)this)[0] + v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x6f27c8*/
    ++v6; /*0x6f27ce*/
  }
  while ( v6 < (int)((unsigned int *)this)[0] ); /*0x6f27d1*/
  return this; /*0x6f27d5*/

}

// ==== BACKFILL 0x006F3D60  TechnoClass::GetTurretOffset  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
void* TechnoClass::GetTurretOffset(void* a1, int a2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x6f3d60.json */
}

// ==== BACKFILL 0x006F4500  TechnoClass::DTOR  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::DTOR()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F4500.json)
}

// ==== BACKFILL 0x006F5EF0  DrawTacticalLine3D  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Tactical_DrawLine3D(unsigned int * a1, int * a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F5EF0)
}

// ==== BACKFILL 0x006F6030  globalHelper_0F6030  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_6F6030(int * a1, unsigned int * a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F6030)
}

// ==== BACKFILL 0x006F9DB0  TechnoClass::GetID  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::GetID() const {
    return this->owner->relatedTagsCount; /*0x6f9db9*/
}

// ==== BACKFILL 0x006F9DC0  TechnoClass::GetTarget  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::GetTarget() const {
    return (int)this->owner; /*0x6f9dc6*/
}

// ==== BACKFILL 0x006FBFA0  TechnoClass::ExecuteMoveCommand  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::ExecuteMoveCommand() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 4 errs): wrong-universe gap2 body; truth func_0x6fbfa0.json */
}

// ==== BACKFILL 0x006FC090  TechnoClass::Vt240Thunk  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::Vt240Thunk() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 6 errs): wrong-universe gap2 body; truth func_0x6fc090.json */
}

// ==== BACKFILL 0x006FD800  SpreadRadiationAreaEffect  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_6FD800::SpreadRadiationAreaEffect(InfantryClass * aP1) {

  int *v2; // eax
  int result; // eax
  int v4; // ecx
  CellClass *v5; // eax
  int *Coords; // eax
  int v7; // esi
  int v8; // eax
  char *v9; // esi
  int v10; // edi
  int v11; // ebx
  int16_t v12; // [esp+1Ch] [ebp-50h] BYREF
  char v13; // [esp+1Eh] [ebp-4Eh]
  int v14; // [esp+20h] [ebp-4Ch]
  int v15; // [esp+24h] [ebp-48h]
  int v16; // [esp+28h] [ebp-44h]
  int v17; // [esp+2Ch] [ebp-40h]
  int16_t v18[2]; // [esp+30h] [ebp-3Ch] BYREF
  int v19; // [esp+34h] [ebp-38h]
  int16_t v20; // [esp+38h] [ebp-34h]
  int16_t v21; // [esp+3Ah] [ebp-32h]
  int16_t v22; // [esp+40h] [ebp-2Ch]
  int16_t v23; // [esp+42h] [ebp-2Ah]
  int v24; // [esp+48h] [ebp-24h] BYREF
  int v25; // [esp+4Ch] [ebp-20h]
  int v26; // [esp+50h] [ebp-1Ch]
  int v27; // [esp+54h] [ebp-18h] BYREF
  int v28; // [esp+58h] [ebp-14h]
  int v29; // [esp+5Ch] [ebp-10h]
  int v30[3]; // [esp+60h] [ebp-Ch] BYREF

  v2 = (int *)(*((int (**)(ObjectClass *, int *))this->vtable1 + 18))(this, &v24); /*0x6fd813*/
  v17 = 0; /*0x6fd818*/
  v27 = *v2; /*0x6fd822*/
  v28 = v2[1]; /*0x6fd829*/
  v29 = v2[2]; /*0x6fd830*/
  v22 = v27 / 256; /*0x6fd840*/
  v23 = v28 / 256; /*0x6fd853*/
  v12 = *(unsigned short *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6192); /*0x6fd865*/
  result = -1; /*0x6fd86d*/
  v13 = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6194); /*0x6fd870*/
  v15 = -1; /*0x6fd874*/
  do /*0x6fd9e6*/
  {
    v4 = -1; /*0x6fd878*/
    v14 = -1; /*0x6fd87b*/
    do /*0x6fd9d8*/
    {
      if ( result || v4 ) /*0x6fd885*/
      {
        v20 = aP1 * result; /*0x6fd89a*/
        v21 = v4 * aP1; /*0x6fd89f*/
        LOWORD(v16) = v22 + aP1 * result; /*0x6fd8ae*/
        HIWORD(v16) = v4 * aP1 + v23; /*0x6fd8bd*/
        *(unsigned int *)v18 = v16; /*0x6fd8ca*/
        v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18); /*0x6fd8d5*/
        Coords = CellClass::GetCoords(v5, v30); /*0x6fd8dc*/
        v24 = *Coords; /*0x6fd8e8*/
        v25 = Coords[1]; /*0x6fd8f6*/
        v26 = Coords[2]; /*0x6fd8fd*/
        v7 = Random::Range(&Randomizer_Global, -128, 128); /*0x6fd912*/
        v8 = Random::Range(&Randomizer_Global, -128, 128); /*0x6fd914*/
        v24 += v7; /*0x6fd925*/
        v25 += v8; /*0x6fd92e*/
        v9 = (char *)RadBeam::Create((RadBeam *)2); /*0x6fd93b*/
        TechnoClass::drawSelectionBox(v9, (int)&v12); /*0x6fd940*/
        v10 = Random::Range(&Randomizer_Global, 5, 20); /*0x6fd95f*/
        v19 = Random::Range(&Randomizer_Global, 100, 500); /*0x6fd96f*/
        v11 = Random::Range(&Randomizer_Global, 0, 20); /*0x6fd97f*/
        TechnoClass::drawPipScale((TechnoClass *)v9, &v27); /*0x6fd981*/
        TechnoClass::drawSpawnPips((TechnoClass *)v9, &v24); /*0x6fd98d*/
        TechnoClass::drawAmmoPips((TechnoClass *)v9, v10); /*0x6fd995*/
        TechnoClass::drawTiberiumPips( /*0x6fd9a6*/
          (TechnoClass *)v9,
          COERCE_UNSIGNED_INT64((double)v19),
          HIDWORD(COERCE_UNSIGNED_INT64((double)v19)));
        SpreadRadiationAreaEffect_Helper((ObjectClass *)v9, 0, 0); /*0x6fd9b1*/
        SpreadRadiationAreaEffect_Helper_659530((ObjectClass *)v9, v11); /*0x6fd9b9*/
        if ( v17 <= v10 ) /*0x6fd9c2*/
          v17 = v10; /*0x6fd9c4*/
        v4 = v14; /*0x6fd9c8*/
        result = v15; /*0x6fd9cc*/
      }
      v14 = ++v4; /*0x6fd9d4*/
    }
    while ( v4 <= 1 ); /*0x6fd9d8*/
    v15 = ++result; /*0x6fd9e2*/
  }
  while ( result <= 1 ); /*0x6fd9e6*/
  return result; /*0x6fd9ec*/

}
