// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00500200  BuildingPlacement::FindPosition  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * BuildingPlacement::FindPosition(int * a0, IUnknown * aP1, IUnknown)
{

  unsigned int *v3; // esi
  int v5; // ebx
  int v6; // ebx
  int v7; // eax
  int *v8; // eax
  unsigned int *v9; // edx
  int v10; // eax
  int v11; // esi
  int TileIndex; // eax
  int v13; // ecx
  int16_t v15[2]; // [esp+Ch] [ebp-18h] BYREF
  int v16; // [esp+10h] [ebp-14h] BYREF
  unsigned int v17[4]; // [esp+14h] [ebp-10h] BYREF

  v3 = a3; /*0x500205*/
  v5 = (*(int (**)(unsigned int *))(*a3 + 732))(a3); /*0x50021a*/
  v6 = (*(int (**)(unsigned int *))(*v3 + 728))(v3) + v5; /*0x500222*/
  if ( (*(int (**)(unsigned int *))(*v3 + 724))(v3) + v6 ) /*0x50022e*/
    v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 4); /*0x50024b*/
  else
    v7 = 0; /*0x500237*/
  v8 = HouseClass::GenerateAttackCoords(a0, &a3, v7); /*0x500258*/
  v9 = v3 + 39; /*0x500265*/
  v16 = *v8; /*0x500267*/
  v10 = v3[39]; /*0x500271*/
  v15[0] = 0; /*0x500276*/
  v11 = v3[40]; /*0x50027b*/
  v15[1] = 0; /*0x50027e*/
  v17[3] = v9[2]; /*0x500286*/
  LOWORD(a3) = v10 / 256; /*0x500296*/
  HIWORD(a3) = v11 / 256; /*0x5002b2*/
  TileIndex = ((MapClass *)((MapClass *)&stru_87F5F0.__pad_58[416]))->GetTileIndex((int16_t *)&a3, 0, 0); /*0x5002cf*/
  v13 = *LayerClass::Pathfinding_Find( /*0x5002ea*/
           &stru_87F5F0.__pad_58[416],
           (int)v17,
           v17,
           (int16_t *)&v16,
           1,
           TileIndex,
           0,
           0,
           1,
           1,
           0,
           0,
           0,
           1,
           v15,
           0,
           0);
  *aP1 = v13; /*0x5002f2*/
  return aP1; /*0x5002f0*/

}

// ==== BACKFILL 0x00500300  CellClass::ScanOccupiers  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
void* CellClass::ScanOccupiers(void* a1) {
  return nullptr;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00500510  HouseClass::GetBuildLimit  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::GetBuildLimit(int a1, int a2, int a3)
{
    (void)a1; (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00500510.json)
}

// ==== BACKFILL 0x00500700  SidebarClass::getTypeProductionCount  cls=SidebarClass  sig=csp  renamed_refs=0  residual=- ====
int SidebarClass::getTypeProductionCount(int a1, int a2, int a3) {
  return 0;  /* G42.33b2 restub: wrong-universe members */
}

// ==== BACKFILL 0x00500910  HouseClass::GetFactoryCount  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::GetFactoryCount(int a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00500910.json)
}

// ==== BACKFILL 0x005009B0  HouseClass::LoadTypeList  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::LoadTypeList()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005009B0.json)
}

// ==== BACKFILL 0x00501160  CCINIClass::WriteHouses  cls=CCINIClass  sig=csp  renamed_refs=0  residual=- ====
IUnknown * CCINIClass::WriteHouses()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x501160)
}

// ==== BACKFILL 0x00501210  HouseClass::SaveToINI  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::SaveToINI(void* a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00501210.json)
}

// ==== BACKFILL 0x005013A0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::ScalarDeletingDestructor  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_flat::ScalarDeletingDestructor(unsigned int * a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005013A0.json)
}

// ==== BACKFILL 0x00501AA0  sub_501AA0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_501AA0(unsigned int * a1, int a2, int a3)
{
  *a1 = 0; /*0x501ab5*/
  return a1; /*0x501ab8*/
}

// ==== BACKFILL 0x005024F0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::StubReturnNullPointer  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_flat::StubReturnNullPointer(int a1, unsigned int * a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005024F0.json)
}

// ==== BACKFILL 0x00502550  VectorClass_ptr_BuildChoiceClass_int_ouseClass::StubReturnNullPointer_0  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_flat::StubReturnNullPointer_0(int a1, const void * a2, unsigned int * a3)
{
    (void)a1; (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00502550.json)
}

// ==== BACKFILL 0x00502A80  HouseClass::RegisterGain_0  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::RegisterGain_0(void* a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00502A80.json)
}

// ==== BACKFILL 0x00502D30  HouseClass::FindOwner  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::FindOwner()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00502D30.json)
}

// ==== BACKFILL 0x00502D60  HouseClass::UpdatePowerTimers  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::UpdatePowerTimers(void* a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00502D60.json)
}

// ==== BACKFILL 0x00504740  HouseClass::EnsurePlanningPathExists  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::EnsurePlanningPathExists(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00504740.json)
}

// ==== BACKFILL 0x00504860  Team_Helper  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_504860::Team_Helper(int a2) {

  int result; // eax
  int i; // edx
  int v4; // eax
  int v5; // edi
  int v6; // eax

  result = *((unsigned int *)this + 5515); /*0x504860*/
  for ( i = 0; i < result; ++i ) /*0x50486a*/
  {
    v4 = *((unsigned int *)this + 5512); /*0x504872*/
    v5 = *(unsigned int *)(v4 + 8 * i); /*0x504878*/
    v6 = v4 + 8 * i; /*0x50487b*/
    if ( v5 == a2 ) /*0x504880*/
      *(unsigned char *)(v6 + 4) = 1; /*0x504882*/
    result = *((unsigned int *)this + 5515); /*0x504886*/
  }
  return result; /*0x504893*/

}

// ==== BACKFILL 0x00505180  TechnoClass::checkBuildLimit  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
void TechnoClass::checkBuildLimit() {
}

// ==== BACKFILL 0x00505FD0  globalHelper_005FD0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int globalHelper_005FD0(int a1, int * a2, int a3, int a4, void * a5)
{
  int v5; // esi
  int v6; // edx
  int v8; // edi
  int v9; // eax
  int64_t v10; // rax
  double v12; // [esp+0h] [ebp-24h]
  double v13; // [esp+8h] [ebp-1Ch]
  int v14; // [esp+1Ch] [ebp-8h]
  unsigned int v15; // [esp+2Ch] [ebp+8h]

  v5 = *((int16_t *)a2 + 1); /*0x505fd5*/
  v6 = *(int16_t *)a2; /*0x505ff7*/
  v8 = *(unsigned int *)(*(unsigned int *)(a1 + 90208) /*0x506002*/
                 + 4 * (v6 + *(unsigned int *)(a1 + 22364) * (v5 - *(unsigned int *)(a1 + 22360)) - *(unsigned int *)(a1 + 22356)));
  v9 = 0; /*0x506005*/
  if ( a5 != (void *)(-1) ) /*0x50600a*/
  {
    v14 = v6 - *(int16_t *)(a1 + 22352); /*0x50601e*/
    __asm { fild [esp+1Ch+var_8] } /*0x506025*/
    v15 = *(int16_t *)(a1 + 22354) - v5; /*0x50602b*/
    __asm /*0x50602f*/
    {
      fstp [esp+1Ch+var_1C]; double
      fild [esp+1Ch+arg_4]
    }
    __asm { fstp [esp+24h+var_24]; double }
    Math::CalcAngle(v12, v13); /*0x50603c*/
    __asm { fsub ds:dbl_7E2820 } /*0x506041*/
    __asm { fmul ds:dbl_7E2818 }
    IDA_LOWORD(v15) = Math::RoundToInt(a3); /*0x506055*/
    v10 = 32 * a5 - (uint8_t)(((v15 >> 7) + 1) >> 1); /*0x506071*/
    v9 = (IDA_HIDWORD(v10) ^ v10) - IDA_HIDWORD(v10); /*0x506074*/
    if ( v9 >= 128 ) /*0x50607b*/
      v9 = 255 - v9; /*0x506084*/
  }
  return a4 + 1000 * (v9 + (v8 << 7)); /*0x50608e*/
}

// ==== BACKFILL 0x00507D70  HouseClass::CollectInfantryBuildCandidates  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::CollectInfantryBuildCandidates(int a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00507D70.json)
}

// ==== BACKFILL 0x00507F60  HouseClass::CollectAircraftBuildCandidates  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::CollectAircraftBuildCandidates(int a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00507F60.json)
}

// ==== BACKFILL 0x00509130  HouseClass::AcquiredThreatNode  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
void HouseClass::AcquiredThreatNode()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x509130)
}

// ==== BACKFILL 0x005092F0  sub_5092F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::sub_5092F0(int a2)
{

  int result; // eax
  int i; // edi
  int *v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8[3]; // [esp+8h] [ebp-Ch] BYREF

  result = a2; /*0x5092f0*/
  *((unsigned int *)this + 5433) |= 1 << *(unsigned int *)(*(unsigned int *)(a2 + 52) + 184); /*0x509313*/
  if ( (Object *)a2 == (gamemd::Object *)(dword_A83D4C) ) /*0x509321*/
  {
    for ( i = 0; i < dword_A8EC88; ++i ) /*0x509330*/
    {
      v5 = (int *)*((unsigned int *)dword_A8EC7C + i); /*0x509337*/
      if ( v5 && !*((unsigned char *)v5 + 129) && (TechnoClass *)v5[135] == (gamemd::TechnoClass *)(this) ) /*0x50934e*/
      {
        v8[0] = v5[39]; /*0x509360*/
        v8[1] = v5[40]; /*0x50936a*/
        v6 = *v5; /*0x50936e*/
        v8[2] = v5[41]; /*0x509373*/
        v7 = (*(int (**)(int *))(v6 + 132))(v5); /*0x509377*/
        MapClass::RevealArea0((MapClass *)&dword_87F7E8, v8, *(unsigned int *)(v7 + 1512), this, 0, 0, 0, 1, 1); /*0x50938e*/
      }
    }
    return MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 2); /*0x5093a4*/
  }
  return result; /*0x5093a9*/

}

// ==== BACKFILL 0x005093C0  sub_5093C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5093C0::sub_5093C0(int a2)
{

  int v2; // esi
  int result; // eax
  unsigned int *i; // edx

  v2 = *((unsigned int *)this + 5509); /*0x5093c2*/
  result = 0; /*0x5093c8*/
  if ( v2 > 0 ) /*0x5093cd*/
  {
    for ( i = (unsigned int *)*((unsigned int *)this + 5506); *i != a2; i += 2 ) /*0x5093d9*/
    {
      if ( ++result >= v2 ) /*0x5093e5*/
        return result; /*0x5093e5*/
    }
    return UpdateHouseClassAnger( /*0x5093f5*/
             (unsigned int)this,
             (int)i,
             -*(unsigned int *)(*((unsigned int *)this + 5506) + 8 * result + 4),
             a2);
  }
  return result; /*0x5093e7*/

}

// ==== BACKFILL 0x00509400  HouseClass::UpdateFogVisibility  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::UpdateFogVisibility()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00509400.json)
}

// ==== BACKFILL 0x005095D0  TeamClass::CountActiveTeamsForType  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
int TeamClass::CountActiveTeamsForType(ObjectClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005095D0.json)
}

// ==== BACKFILL 0x00509610  TriggerClass::ValidateTeamTriggerConditions  cls=TriggerClass  sig=csp  renamed_refs=0  residual=- ====
char TriggerClass::ValidateTeamTriggerConditions(int a2) {
    int v2; // esi
    int v4; // eax
    int v5; // ebx
    int v6; // edi
    TriggerClass **v7; // esi
    bool v8; // cc
    int v10; // [esp+10h] [ebp-8h]
    int v11; // [esp+14h] [ebp-4h]

    v2 = a2; /*0x509616*/
    if ( !a2 ) /*0x50961f*/
      return 0; /*0x50961f*/
    v4 = *(unsigned int *)(a2 + 228); /*0x509625*/
    if ( !v4 ) /*0x50962d*/
      return 0; /*0x5096f1*/
    v11 = 0; /*0x509639*/
    if ( *(int *)(v4 + 156) > 0 ) /*0x509643*/
    {
      v10 = 168; /*0x509649*/
      do /*0x509655*/
      {
        v5 = *(unsigned int *)(v10 + v4); /*0x509655*/
        if ( !v5 /*0x509667*/
          || !(*(int (__thiscall **)(int, int, int, unsigned int, TriggerClass *))(*(unsigned int *)v5 + 148))(v5, 1, 1, 0, this) )
        {
          if ( *(unsigned int *)&dword_A8B238 ) /*0x509678*/
            return 0; /*0x509678*/
          v6 = FootClass_Array - 1; /*0x50967f*/
          if ( FootClass_Array - 1 < 0 ) /*0x509684*/
            return 0; /*0x509684*/
          while ( 1 ) /*0x50968c*/
          {
            v7 = (TriggerClass **)*((unsigned int *)FootClass_Array + v6); /*0x50968c*/
            if ( v7[135] == this /*0x5096ab*/
              && v5 == ((int (__thiscall *)(unsigned int))(*(unsigned int **)*v7 + 33))(*((unsigned int *)FootClass_Array + v6)) /*0x50968c vt+0x84*/
              && ((TriggerClass *)a2)->EvaluateObjectForTrigger((int)v7, (int)this) )
            {
              break; /*0x5096ab*/
            }
            if ( --v6 < 0 ) /*0x5096b5*/
              return 0; /*0x5096b5*/
          }
          v2 = a2; /*0x5096b9*/
        }
        v4 = *(unsigned int *)(v2 + 228); /*0x5096bd*/
        v8 = ++v11 < *(unsigned int *)(v4 + 156); /*0x5096d5*/
        v10 += 8; /*0x5096db*/
      }
      while ( v8 ); /*0x509655*/
    }
    return 1; /*0x5096e5*/
}

// ==== BACKFILL 0x00509B20  HouseClass::Find  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
void HouseClass::Find(int a1)
{
    (void)a1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00509B20.json)
}

// ==== BACKFILL 0x00509C10  HouseClass::FireStoredSW  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
void HouseClass::FireStoredSW(int a1)
{
    (void)a1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00509C10.json)
}

// ==== BACKFILL 0x00509CC0  nullsub_144  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_144(int a1)
{
  ; /*0x509cc0*/
}

// ==== BACKFILL 0x00509CD0  HouseClass::Fire_ParaDrop  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::Fire_ParaDrop(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00509CD0.json)
}

// ==== BACKFILL 0x00509E00  HouseClass::Fire_LightningStorm  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::Fire_LightningStorm(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00509E00.json)
}

// ==== BACKFILL 0x00509F60  HouseClass::Fire_GenMutator  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::Fire_GenMutator(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00509F60.json)
}

// ==== BACKFILL 0x0050A150  HouseClass::Fire_PsyDom  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::Fire_PsyDom(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050A150.json)
}

// ==== BACKFILL 0x0050A350  HouseClass::FireSuperWeaponAtBestTarget  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::FireSuperWeaponAtBestTarget(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050A350.json)
}

// ==== BACKFILL 0x0050A490  HouseClass::RecordCratePlacement  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::RecordCratePlacement(void* a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050A490.json)
}

// ==== BACKFILL 0x0050B840  HouseClass::GetColor  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::GetColor()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050B840.json)
}

// ==== BACKFILL 0x0050B920  globalHelper_00B920  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void sub_50B920(int a1, int a2, int a3)
{
  double v5; // st7
  double v6; // st6
  double v7; // st6
  double v8; // st7

  v5 = Math::Sqrt(*(double *)a1 * *(double *)a1 + *(double *)a3 * *(double *)a3 + *(double *)a2 * *(double *)a2); /*0x50b94d*/
  if ( v5 == 0.0 ) /*0x50b960*/
  {
    *(unsigned int *)a3 = 0; /*0x50b967*/
    *(unsigned int *)(a3 + 4) = 1081073664; /*0x50b96d*/
    *(unsigned int *)a2 = 0; /*0x50b970*/
    *(unsigned int *)(a2 + 4) = 1081073664; /*0x50b976*/
    *(unsigned int *)a1 = 0; /*0x50b979*/
    *(unsigned int *)(a1 + 4) = 1081073664; /*0x50b97f*/
  }
  else
  {
    v6 = *(double *)a1 * 240.0 / v5; /*0x50b997*/
    *(double *)a1 = v6; /*0x50b999*/
    if ( v6 > 255.0 ) /*0x50b9a6*/
    {
      *(unsigned int *)a1 = 0; /*0x50b9a8*/
      *(unsigned int *)(a1 + 4) = 1081073664; /*0x50b9ae*/
    }
    v7 = *(double *)a2 * 240.0 / v5; /*0x50b9b9*/
    *(double *)a2 = v7; /*0x50b9bb*/
    if ( v7 > 255.0 ) /*0x50b9c8*/
    {
      *(unsigned int *)a2 = 0; /*0x50b9ca*/
      *(unsigned int *)(a2 + 4) = 1081073664; /*0x50b9d0*/
    }
    v8 = *(double *)a3 * 240.0 / v5; /*0x50b9db*/
    *(double *)a3 = v8; /*0x50b9dd*/
    if ( v8 > 255.0 ) /*0x50b9ea*/
    {
      *(unsigned int *)a3 = 0; /*0x50b9ec*/
      *(unsigned int *)(a3 + 4) = 1081073664; /*0x50b9f2*/
    }
  }
}

// ==== BACKFILL 0x0050BD10  HouseClass::ReshroudMap  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
char HouseClass::ReshroudMap()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x50BD10)
}

// ==== BACKFILL 0x0050BF60  HouseClass::CalculateCostMultipliers  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::CalculateCostMultipliers()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050BF60.json)
}

// ==== BACKFILL 0x0050C0A0  HouseClass::GetBuildingDamageMultiplier  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
double HouseClass::GetBuildingDamageMultiplier(void* a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050C0A0.json)
}

// ==== BACKFILL 0x0050C160  sub_50C160  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
double E4Recv_50C160::sub_50C160()
{

  return *(float *)this->attachedTag[5].defaultCoords; /*0x50c169*/

}

// ==== BACKFILL 0x0050C170  HouseClass::FindByName  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::FindByName()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050C170.json)
}

// ==== BACKFILL 0x0050C8C0  HouseClass::NotifyImpactWater  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::NotifyImpactWater()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050C8C0.json)
}

// ==== BACKFILL 0x0050D250  CellClass::IterateOccupiers  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::IterateOccupiers(int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x50D250.json */
}

// ==== BACKFILL 0x0050D290  TActionClass::executeAttackAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
int TActionClass::executeAttackAction(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050D290.json)
}

// ==== BACKFILL 0x0050DA10  GlobalHelper_0E4440_Helper  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_50DA10::GlobalHelper_0E4440_Helper() {

  int result; // eax

  result = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 948); /*0x50da10*/
  *((unsigned int *)this + 5436) = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 948); /*0x50da15*/
  return result; /*0x50da1b*/

}

// ==== BACKFILL 0x0050DA40  sub_50DA40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_50DA40::sub_50DA40(int a2)
{

  *((unsigned int *)this + 5438) = a2; /*0x50da44*/
  return a2; /*0x50da4a*/

}

// ==== BACKFILL 0x0050DA50  GlobalHelper_0E44C0_Helper  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_50DA50::GlobalHelper_0E44C0_Helper() {

  int result; // eax

  result = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 948); /*0x50da50*/
  *((unsigned int *)this + 5439) = -100; /*0x50da55*/
  *((unsigned int *)this + 5437) = result; /*0x50da5f*/
  *((unsigned int *)this + 5438) = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 948); /*0x50da6b*/
  return result; /*0x50da71*/

}

// ==== BACKFILL 0x0050DA80  HouseClass::GetTransitionCount  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::GetTransitionCount()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050DA80.json)
}

// ==== BACKFILL 0x0050DAA0  FootClass::checkTurning  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int FootClass::checkTurning()
{

  unsigned int result; // eax

  result = ((unsigned int *)this)[0]; /*0x50daa0*/
  if ( result >= 4 ) /*0x50daa8*/
    return 0; /*0x50daaf*/
  return result; /*0x50dab1*/

}

// ==== BACKFILL 0x0050DEF0  HouseClass::GetCurrentOption  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
void* HouseClass::GetCurrentOption(void* a1)
{
    (void)a1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050DEF0.json)
}

// ==== BACKFILL 0x0050DF30  HouseClass::GetStartCoords  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
void* HouseClass::GetStartCoords(void* a1)
{
    (void)a1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050DF30.json)
}

// ==== BACKFILL 0x0050DFF0  GlobalHelper_0E4540_Helper  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_50DFF0::GlobalHelper_0E4540_Helper() {

  int result; // eax

  result = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 948); /*0x50dff0*/
  *((unsigned int *)this + 5413) = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 948); /*0x50dff5*/
  return result; /*0x50dffb*/

}

// ==== BACKFILL 0x0050E000  HouseClass::SetMapSeed  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::SetMapSeed(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E000.json)
}

// ==== BACKFILL 0x0050E1B0  HouseClass::GainedPoweredCenter  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
BOOL HouseClass::GainedPoweredCenter(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x50E1B0)
}

// ==== BACKFILL 0x0050E340  HouseClass::COMStub_Ret1_1  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::COMStub_Ret1_1(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x50E340)
}

// ==== BACKFILL 0x0050E350  HouseClass::COMStub_Ret1_2  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::COMStub_Ret1_2(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x50E350)
}

// ==== BACKFILL 0x0050E360  AbstractClass::computeMovementCost  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::computeMovementCost()
{

  return 13; /*0x50e365*/

}

// ==== BACKFILL 0x0050E370  AbstractClass::checkPassability  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::checkPassability()
{

  return *((unsigned int *)this + 12); /*0x50e373*/

}

// ==== BACKFILL 0x0050E380  AbstractClass::getMovementSpeed  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
void* AbstractClass::getMovementSpeed(int a2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x50e380.json */
}

// ==== BACKFILL 0x0050E430  HouseClass::processRadar  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::processRadar(int a1, int a2, int a3)
{
    (void)a1; (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050E430.json)
}

// ==== BACKFILL 0x0050E5D0  AbstractClass::getTargetCoordinates  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::getTargetCoordinates() {
}

// ==== BACKFILL 0x0050E600  AbstractClass::setTargetCoordinates  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::setTargetCoordinates(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x50e600.json */
}

// ==== BACKFILL 0x0050E670  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex_1  cls=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::Get(int a2, void *a2_2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x50E690)
}

// ==== BACKFILL 0x0050F3A0  AbstractClass::evaluateTarget  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::evaluateTarget(int a1, void* a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 11 errs): wrong-universe gap2 body; truth func_0x50f3a0.json */
}

// ==== BACKFILL 0x0050F4A0  AbstractClass::selectBestTarget  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::selectBestTarget(int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x50f4a0.json */
}

// ==== BACKFILL 0x0050F710  VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex_1  cls=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp  renamed_refs=0  residual=- ====
char VectorClass_flat::CompareVectors(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050F740.json)
}
