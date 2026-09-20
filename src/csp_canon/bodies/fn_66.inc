// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00660AD0  sub_660AD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_660AD0::sub_660AD0()
{
{
    return DataGlobal_7F099C[4 * *(void**)this];
}
}

// ==== BACKFILL 0x00660AE0  sub_660AE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_660AE0::sub_660AE0()
{
{
    return DataGlobal_7F09A0[4 * *(void**)this];
}
}

// ==== BACKFILL 0x00660AF0  sub_660AF0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_660AF0::sub_660AF0()
{
{
    return DataGlobal_7F0998[4 * *(void**)this];
}
}

// ==== BACKFILL 0x00660B00  Map_Load_660B00  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_660B00()
{
{
    int i;
    void *v1;
    int v2;
    int v3;
    for ( i = g_TriggerEventState - 1; i >= 0; --i )
  {
    v1 = (void *)*((int *)(g_TriggerPool) + i);
    if ( v1 )
    {
    v3 = *((int *)(g_TriggerPool) + i);
    v2 = (*(int (__thiscall **)(int *, int *))(DataGlobal_B04DA8 + 16))(&DataGlobal_B04DA8, &v3);
    if ( v2 != -1 && v2 < g_TriggerEventState && v2 < --g_TriggerEventState )
      {
    do
        {
    ++v2;
    *((int *)(g_TriggerPool) + v2 - 1) = *((int *)(g_TriggerPool) + v2);
        }
    while ( v2 < g_TriggerEventState );
      }
    __3_YAXPAX_Z(v1);
    }
  }
}
}

// ==== BACKFILL 0x00660C80  VectorClass_ptr_RadarEventClass::Destroy  cls=VectorClass_ptr_RadarEventClass  sig=csp  renamed_refs=0  residual=- ====
void VectorClass_ptr_RadarEventClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}

// ==== BACKFILL 0x00660CB0  VectorClass_ptr_RadarEventClass::GetItemIndex  cls=VectorClass_ptr_RadarEventClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int VectorClass_ptr_RadarEventClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x00660E60  VectorClass_ptr_RadarEventClass::SetCapacity  cls=VectorClass_ptr_RadarEventClass  sig=csp  renamed_refs=0  residual=- ====
char VectorClass_ptr_RadarEventClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->FindItemIndex();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}

// ==== BACKFILL 0x00660F50  VectorClass_ptr_RadarEventClass::FindItemIndex  cls=VectorClass_ptr_RadarEventClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_ptr_RadarEventClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}

// ==== BACKFILL 0x006614F0  RulesClass::readGeneralSection  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::readGeneralSection(TechnoTypeClass * aP1)
{
{
    return (*(int (__stdcall **)(TechnoTypeClass *, void *, int, int))(*(int *)aP1->vtable0 + 16))(aP1, this, 3, 0);
}
}

// ==== BACKFILL 0x00661510  RulesClass::readCombatDamage  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::readCombatDamage(int a2)
{
{
    return (*(int (__stdcall **)(int, void *, int, int))(*(int *)(a2) + 12))(a2, this, 3, 0);
}
}

// ==== BACKFILL 0x00661530  Map_Append_661530  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_661530(unsigned char * a1, unsigned char * a2, int a3)
{
{
    int v5;
    int result;
    int v7;
    char *v9;
    v5 = a3;
    result = 0;
    while ( v5 > 0 )
  {
    if ( *a1 )
    {
    if ( a2 )
    *a2++ = *a1;
    ++a1;
    ++result;
    --v5;
    }
    else
    {
    v7 = 0;
    do
      {
    if ( v7 > v5 )
    break;
      }
    while ( !a1[++v7] );
    if ( v7 >= 255 )
    v7 = 255;
    if ( a2 )
      {
    *a2 = 0;
    v9 = a2 + 1;
    *v9 = v7;
    a2 = v9 + 1;
      }
    result += 2;
    a1 += v7;
    v5 -= v7;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00661590  Map_Append  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_661590(unsigned char * a1, int a2, int a3)
{
{
    int result;
    if ( !a2 )
    return Map_Append_661530(a1, 0, a3) + 2;
    result = Map_Append_661530(a1, (char *)(a2 + 2), a3) + 2;
    *(short *)a2 = result;
    return result;
}
}

// ==== BACKFILL 0x006616B0  sub_6616B0  cls=Straw  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_6616B0::sub_6616B0()
{
{
    int v2;
    int *v3;
    v2 = 32;
    this->M4 = 0;
    this->M8 = 0;
    *(void**)this = &vt_Straw;
    this->M12 = 0;
    this->M16 = 0;
    v3 = this + 5;
    do
  {
    sub_65C890(v3, 0, 0);
    v3 += 2;
    --v2;
  }
    while ( v2 );
    this->M12 = 0;
    this->M16 = 0;
    *(void**)this = &vt_RandomStraw;
    memset(this + 5, 0, 0x100u);
    return this;
}
}

// ==== BACKFILL 0x00661960  sub_661960  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_661960::sub_661960(short a2)
{
{
    char *v3;
    int v4;
    unsigned int v5;
    char *v6;
    size_t v7;
    int result;
    int v9;
    char Src[20];
    int v11[29];
    v9 = 16;
    do
  {
    if ( (a2 & 1) != 0 )
    {
    v3 = this + (unsigned char)(this->M12 / 8) + 20;
    *v3 ^= 1 << (this->M12 & 7);
    }
    v4 = this->M12 + 1;
    this->M12 = v4;
    if ( v4 == 2048 )
    {
    v5 = 0;
    LOBYTE(v11[0]) = 0;
    v11[11] = 0;
    v11[12] = 0;
    v11[6] = 1732584193;
    v11[7] = -271733879;
    v11[8] = -1732584194;
    v11[9] = 271733878;
    v11[10] = -1009589776;
    v6 = this + 20;
    do
      {
    SHA1::Process(v11, (int)(this + 20), 256);
    SHA1::Compute(v11, Src);
    v7 = 256 - v5;
    if ( 256 - v5 > 0x14 )
    v7 = 20;
    memcpy(v6, Src, v7);
    ++v5;
    ++v6;
      }
    while ( v5 < 0x100 );
    }
    a2 >>= 1;
    result = --v9;
  }
    while ( v9 );
    return result;
}
}

// ==== BACKFILL 0x00661A60  sub_661A60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_661A60::sub_661A60(int a2)
{
{
    char *v3;
    int v4;
    unsigned int v5;
    char *v6;
    size_t v7;
    bool v8;
    int result;
    int v10;
    char Src[20];
    int v12[29];
    v10 = 32;
    do
  {
    if ( (a2 & 1) != 0 )
    {
    v3 = this + (unsigned char)(this->M12 / 8) + 20;
    *v3 ^= 1 << (this->M12 & 7);
    }
    v4 = this->M12 + 1;
    this->M12 = v4;
    if ( v4 == 2048 )
    {
    v5 = 0;
    LOBYTE(v12[0]) = 0;
    v12[11] = 0;
    v12[12] = 0;
    v12[6] = 1732584193;
    v12[7] = -271733879;
    v12[8] = -1732584194;
    v12[9] = 271733878;
    v12[10] = -1009589776;
    v6 = this + 20;
    do
      {
    SHA1::Process(v12, (int)(this + 20), 256);
    SHA1::Compute(v12, Src);
    v7 = 256 - v5;
    if ( 256 - v5 > 0x14 )
    v7 = 20;
    memcpy(v6, Src, v7);
    ++v5;
    ++v6;
      }
    while ( v5 < 0x100 );
    }
    result = v10 - 1;
    v8 = v10 == 1;
    a2 >>= 1;
    --v10;
  }
    while ( !v8 );
    return result;
}
}

// ==== BACKFILL 0x00661B70  sub_661B70  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void * E4Recv_661B70::sub_661B70()
{
{
    int v1;
    unsigned int v2;
    char *v3;
    size_t v4;
    void *result;
    char Src[20];
    int v7[29];
    v1 = (int)(this + 20);
    LOBYTE(v7[0]) = 0;
    v7[11] = 0;
    v7[12] = 0;
    v7[6] = 1732584193;
    v7[7] = -271733879;
    v7[8] = -1732584194;
    v7[9] = 271733878;
    v7[10] = -1009589776;
    v2 = 0;
    v3 = this + 20;
    do
  {
    SHA1::Process(v7, v1, 256);
    SHA1::Compute(v7, Src);
    v4 = 256 - v2;
    if ( 256 - v2 > 0x14 )
    v4 = 20;
    result = memcpy(v3, Src, v4);
    ++v2;
    ++v3;
  }
    while ( v2 < 0x100 );
    return result;
}
}

// ==== BACKFILL 0x00661F30  sub_661F30  cls=RocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_661F30::sub_661F30()
{
{
    *(void**)this = vt_RocketLocomotionClass;
    this->M4 = &vt_RocketLocomotionClass;
    LocomotionClass::Construct(this);
}
}

// ==== BACKFILL 0x00661F50  JumpjetLocomotionClass::HasFieldStateChanged  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
BOOL JumpjetLocomotionClass::HasFieldStateChanged(unsigned int * a1)
{
{
    return *((int*)(a1) + 5) != DataGlobal_B04E38 || *((int*)(a1) + 6) != DataGlobal_B04E3C || *((int*)(a1) + 7) != DataGlobal_B04E40;
}
}

// ==== BACKFILL 0x00661F90  JumpjetLocomotionClass::CheckCompositeState_0  cls=RocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::CheckCompositeState_0(int a1)
{
{
    int v1;
    v1 = *(int *)(a1 + 60);
    return v1 >= 3 && v1 <= 5;
}
}

// ==== BACKFILL 0x00661FB0  JumpjetLocomotionClass::GetCoordinate_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetCoordinate_0(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    v2 = *((int*)(a1) + 6);
    v3 = *((int*)(a1) + 7);
    *a2 = *((int*)(a1) + 5);
    *((int*)(a2) + 1) = v2;
    *((int*)(a2) + 2) = v3;
    return a2;
}
}

// ==== BACKFILL 0x006620F0  BulletClass::ComputeImpactTrajectory  cls=BulletClass  sig=csp  renamed_refs=5  residual=- ====
namespace gamemd { int BulletClass::ComputeImpactTrajectory(int a1) {
{
      _DWORD *v3;
      int v4;
      double v5;
      int v6;
      _DWORD *v7;
      int v8;
      double v10;
      double v11;
      int v12;
      int v13;
      _DWORD v14[2];
      int v15;

      v12 = *(_DWORD *)(a2 + 40);
      v3 = (_DWORD *)(this->vtable4 + 156);
      v10 = this->q054;
      v4 = *(_DWORD *)(this->vtable4 + 160);
      v14[0] = *v3;
      v14[1] = v4;
      v15 = v3[2];
      Math::ArcTan2(v10);
      v11 = (double)(*(__int16 *)ProgressTimer::GetValue((_WORD *)(this->vtable4 + 904), &v13) - 0x3FFF)
          * -0.00009587672516830327;
      Math::SinCos(v11);
      Math::ArcTan2(v11);
      v5 = Math::SinCos(this->q054);
      v6 = Math::RoundToInt(v5 * (double)v12 + (double)v15);
      if ( v6 > this->q020 )
      {
        v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 444))(this->vtable4);
        if ( !v7
          || (v7[80] & 0x100) == 0
          || (v8 = this->q020,
              *(_DWORD *)((*(int (__thiscall **)(_DWORD *, _DWORD *))(*v7 + 72))(v7, v14) + 8) != v8)
          || v6 > DataGlobal_B04E6C + v8 )
        {
          if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(this->vtable4) > 0 )
            return 0;
        }
      }
      TechnoClass::CalculateDamage(this);
      return 1;
}
} }

// ==== BACKFILL 0x00662240  sub_662240  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
double E4Recv_662240::sub_662240()
{
{
    int v1;
    int v2;
    double v3;
    int v5;
    v1 = this->M24 - *(int *)(this->M12 + 156);
    v2 = this->M28 - *(int *)(this->M12 + 160);
    v5 = this->M32 - *(int *)(this->M12 + 164);
    v3 = Math::Sqrt((double)(v2 * v2 + v1 * v1));
    if ( v3 <= 0.0 )
    return -1.570796326794897;
    else
    return Math::ArcTan((double)v5 / v3);
}
}

// ==== BACKFILL 0x006632E0  JumpjetLocomotionClass::ComputeFloatExpression_3  cls=RocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::ComputeFloatExpression_3(int a1, int a2, int a3, int a4)
{
{
    int result;
    int v5;
    char *p_TiberiumExplosionDamage;
    bool v7;
    int v8;
    int v9;
    result = a1;
    v5 = *(int *)(*(int *)(a1 + 8) + 1732);
    if ( v5 == LODWORD(g_RulesClass_Instance->?) )
  {
    p_TiberiumExplosionDamage = (char *)&g_RulesClass_Instance->?;
  }
    else
  {
    v7 = v5 == g_RulesClass_Instance->?[0];
    p_TiberiumExplosionDamage = (char *)&g_RulesClass_Instance->?;
    if ( !v7 )
    p_TiberiumExplosionDamage = (char *)&g_RulesClass_Instance->? + 4;
  }
    if ( *(int *)(a1 + 20) == DataGlobal_B04E38 && *(int *)(a1 + 24) == DataGlobal_B04E3C && *(int *)(a1 + 28) == DataGlobal_B04E40 )
  {
    if ( *(int *)p_TiberiumExplosionDamage )
    {
    *(int *)(a1 + 60) = 1;
    v8 = *(int *)p_TiberiumExplosionDamage;
    }
    else
    {
    *(int *)(a1 + 60) = 2;
    v8 = *((int *)(p_TiberiumExplosionDamage) + 1);
    }
    *(int *)(a1 + 32) = g_CurrentFrame;
    *(int *)(a1 + 36) = v9;
    *(int *)(a1 + 40) = v8;
    *(int *)(a1 + 44) = v8;
    *(float *)(a1 + 80) = *((float *)(p_TiberiumExplosionDamage) + 2) * 1.570796326794897;
    *(int *)(a1 + 20) = a2;
    *(int *)(a1 + 24) = a3;
    *(int *)(a1 + 28) = a4;
    return a2;
  }
    return result;
}
}

// ==== BACKFILL 0x006633C0  nullsub_224  cls=RocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_224(int a1)
{
  ;
}

// ==== BACKFILL 0x006633D0  RocketLocomotionClass::ddtor  cls=RocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int RocketLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1212901530;
  a2[1] = 299099510;
  a2[2] = 268491163;
  a2[3] = -399534261;
  return 0;
}

// ==== BACKFILL 0x00663410  RocketLocomotionClass::BeginMove  cls=RocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int RocketLocomotionClass::BeginMove(int * a1, int * a2)
{
{
    int result;
    wchar_t *v3;
    result = SwizzleManager::SaveLoad(a1, a2);
    if ( result >= 0 )
  {
    if ( a1 )
    {
    *a1 = (int)(unsigned int)vt_LocomotionClass;
    *((int*)(a1) + 1) = (int)&vt_LocomotionClass;
    v3 = g_CurrentFrame;
    *((int*)(a1) + 15) = 0;
    *((int*)(a1) + 13) = (int)v3;
    *a1 = (int)(unsigned int)vt_RocketLocomotionClass;
    *((int*)(a1) + 1) = (int)&vt_RocketLocomotionClass;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00663460  JumpjetLocomotionClass::SmallStub_663460  cls=RocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_663460(int a1)
{
return 3;
}

// ==== BACKFILL 0x006635B0  RocketLocomotionClass::StubReturn96  cls=RocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int RocketLocomotionClass::StubReturn96()
{
return 96;
}

// ==== BACKFILL 0x006635C0  RocketLocomotionClass::ProcessMove  cls=RocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
RocketLocomotionClass * RocketLocomotionClass::ProcessMove(char a2)
{
{
    *(void**)this = vt_RocketLocomotionClass;
    *(this + 1) = &vt_RocketLocomotionClass;
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (RocketLocomotionClass *)this;
}
}

// ==== BACKFILL 0x006638E0  sub_6638E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_6638E0::sub_6638E0()
{
{
    this->M4 = 0;
    this->M8 = 0;
    this->M12 = 1;
    this->M13 = 0;
    *(void**)this = &vt_DynamicVectorClass_OwnerTalkClass_ConnectionListStruct;
    this->M20 = 10;
    this->M16 = 0;
    this->M24 = 0;
    this->M28 = 0;
    return this;
}
}

// ==== BACKFILL 0x00663960  sub_663960  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_663960::sub_663960()
{
{
    int v2;
    int v3;
    int v4;
    void *v5;
    while ( this->M16 )
  {
    __3_YAXPAX_Z(**((void ***)(this) + 1));
    v2 = this->M16;
    if ( v2 > 0 )
    {
    v3 = v2 - 1;
    v4 = 0;
    for ( this->M16 = v3;
    v4 < this->M16;
    *(int *)(this->M4 + 4 * v4 - 4) = *(int *)(this->M4 + 4 * v4) ) {
    ++v4;
      }
    }
  }
    v5 = (void *)this->M4;
    *(int *)this = &vt_VectorClass_OwnerTalkClass_ConnectionListStruct;
    if ( v5 && (unsigned char)this->M13 )
  {
    __3_YAXPAX_Z(v5);
    this->M4 = 0;
  }
    this->M13 = 0;
    this->M8 = 0;
}
}

// ==== BACKFILL 0x00663CD0  sub_663CD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_663CD0::sub_663CD0(unsigned char * a2)
{
{
    int *v2;
    char v5;
    int v6;
    int v7;
    int v8;
    int i;
    int v10;
    v2 = a2;
    if ( !a2 )
    return -1;
    if ( Network::IsBroadcastAddr(a2) )
    return -1;
    v5 = 0;
    Network::CopyAddress(v2, &a2, (int)&v10);
    v6 = this->M16;
    v7 = 0;
    if ( v6 > 0 )
  {
    v8 = this->M4;
    for ( i = v8; v10 != *(int *)(*(int *)(i) + 33); i += 4 )
    {
    if ( ++v7 >= v6 )
    return 0;
    }
    return *(char *)(*(int *)(v8 + 4 * v7) + 40);
  }
    return v5;
}
}

// ==== BACKFILL 0x00664610  Process::WaitForExit  cls=Process  sig=csp  renamed_refs=0  residual=- ====
bool Process::WaitForExit(DWORD dwMilliseconds, CellStruct * aP2)
{
{
    AnimClass *v3;
    int v5;
    v3 = (AnimClass *)&CONTAINING_RECORD(this, AnimClass, field_4)->__pad_18[8];
    Debug::Log();
    if ( !v3->field_0 )
    return 1;
    if ( WaitForMultipleObjects(1u, (const HANDLE *)v3, 0, dwMilliseconds) != 258 )
  {
    Debug::Log();
    v3->field_0 = 0;
    return 1;
  }
    if ( !(char)aP2 )
    return 0;
    Debug::Log();
    v5 = TerminateProcess((HANDLE)v3->field_0, 0);
    if ( v5 )
  {
    v3->field_0 = 0;
    return v5;
  }
    else
  {
    GetLastError();
    Debug::Log();
    return 0;
  }
}
}

// ==== BACKFILL 0x00664D20  HouseClass::InitTypeVectors  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* HouseClass::InitTypeVectors(int a1) {
{
      _DWORD *v3;

      v3 = this + 22;
      DynamicVector::Constructor_VoxelAnim(0, 0);
      *v3 = &vt_TypeList_VoxelAnimTypeClass_const;
      DynamicVectorClass::AnimTypeConstructor(this + 65, 0, 0);
      *(this + 65) = &vt_TypeList_AnimTypeClass_const;
      DynamicVectorClass::AnimTypeConstructor(this + 72, 0, 0);
      *(this + 72) = &vt_TypeList_AnimTypeClass_const;
      DynamicVectorClass::AnimTypeConstructor(this + 79, 0, 0);
      *(this + 79) = &vt_TypeList_AnimTypeClass_const;
      DynamicVectorClass::AnimTypeConstructor(this + 86, 0, 0);
      *(this + 86) = &vt_TypeList_AnimTypeClass_const;
      DynamicVectorClass::AnimTypeConstructor(this + 168, 0, 0);
      *(this + 168) = &vt_TypeList_AnimTypeClass_const;
      DynamicVectorClass::AnimTypeConstructor(this + 175, 0, 0);
      *(this + 175) = &vt_TypeList_AnimTypeClass_const;
      DynamicVectorClass::AnimTypeConstructor(this + 182, 0, 0);
      *(this + 182) = &vt_TypeList_AnimTypeClass_const;
      DynamicVectorClass::Construct(this + 214, 0, 0);
      *(this + 214) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 221, 0, 0);
      *(this + 221) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 228, 0, 0);
      *(this + 228) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 235, 0, 0);
      *(this + 235) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 242, 0, 0);
      *(this + 242) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 249, 0, 0);
      *(this + 249) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 271, 0, 0);
      *(this + 271) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 278, 0, 0);
      *(this + 278) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 285, 0, 0);
      *(this + 285) = &vt_TypeList_int;
      DynamicVector::Constructor_VoxelAnim(0, 0);
      *(this + 384) = &vt_TypeList_VoxelAnimTypeClass_const;
      DynamicVectorClass::Construct(this + 402, 0, 0);
      *(this + 402) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 435, 0, 0);
      *(this + 435) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 461, 0, 0);
      *(this + 461) = &vt_TypeList_int;
      SmudgeTypeVector::Construct(this + 497, 0, 0);
      *(this + 497) = &vt_TypeList_SmudgeTypeClass_const;
      SmudgeTypeVector::Construct(this + 504, 0, 0);
      *(this + 504) = &vt_TypeList_SmudgeTypeClass_const;
      SmudgeTypeVector::Construct(this + 511, 0, 0);
      *(this + 511) = &vt_TypeList_SmudgeTypeClass_const;
      SmudgeTypeVector::Construct(this + 518, 0, 0);
      *(this + 518) = &vt_TypeList_SmudgeTypeClass_const;
      SmudgeTypeVector::Construct(this + 525, 0, 0);
      *(this + 525) = &vt_TypeList_SmudgeTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 532, 0, 0);
      *(this + 532) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 544, 0, 0);
      *(this + 544) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 555, 0, 0);
      *(this + 555) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 562, 0, 0);
      *(this + 562) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 569, 0, 0);
      *(this + 569) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 576, 0, 0);
      *(this + 576) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 583, 0, 0);
      *(this + 583) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 590, 0, 0);
      *(this + 590) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 597, 0, 0);
      *(this + 597) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 604, 0, 0);
      *(this + 604) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 611, 0, 0);
      *(this + 611) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::Construct(this + 618, 0, 0);
      *(this + 618) = &vt_TypeList_int;
      DynamicVectorClass::BuildingTypeConstructor(this + 625, 0, 0);
      *(this + 625) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 632, 0, 0);
      *(this + 632) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 639, 0, 0);
      *(this + 639) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 646, 0, 0);
      *(this + 646) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 653, 0, 0);
      *(this + 653) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 660, 0, 0);
      *(this + 660) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 667, 0, 0);
      *(this + 667) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 674, 0, 0);
      *(this + 674) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 681, 0, 0);
      *(this + 681) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 688, 0, 0);
      *(this + 688) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 695, 0, 0);
      *(this + 695) = &vt_TypeList_BuildingTypeClass_const;
      UnitTypeVector::Construct(this + 712, 0, 0);
      *(this + 712) = &vt_TypeList_UnitTypeClass_const;
      UnitTypeVector::Construct(this + 719, 0, 0);
      *(this + 719) = &vt_TypeList_UnitTypeClass_const;
      HouseTypeClass::readDefaultAlly(0, 0);
      *(this + 726) = &vt_TypeList_AircraftTypeClass_const;
      DynamicVectorClass::AnimTypeConstructor(this + 733, 0, 0);
      *(this + 733) = &vt_TypeList_AnimTypeClass_const;
      DynamicVectorClass::AnimTypeConstructor(this + 740, 0, 0);
      *(this + 740) = &vt_TypeList_AnimTypeClass_const;
      DynamicVectorClass::AnimTypeConstructor(this + 752, 0, 0);
      *(this + 752) = &vt_TypeList_AnimTypeClass_const;
      InfantryTypeVector::Construct(this + 769, 0, 0);
      *(this + 769) = &vt_TypeList_InfantryTypeClass_const;
      DynamicVectorClass::Construct(this + 776, 0, 0);
      *(this + 776) = &vt_TypeList_int;
      InfantryTypeVector::Construct(this + 783, 0, 0);
      *(this + 783) = &vt_TypeList_InfantryTypeClass_const;
      DynamicVectorClass::Construct(this + 790, 0, 0);
      *(this + 790) = &vt_TypeList_int;
      InfantryTypeVector::Construct(this + 797, 0, 0);
      *(this + 797) = &vt_TypeList_InfantryTypeClass_const;
      DynamicVectorClass::Construct(this + 804, 0, 0);
      *(this + 804) = &vt_TypeList_int;
      InfantryTypeVector::Construct(this + 811, 0, 0);
      *(this + 811) = &vt_TypeList_InfantryTypeClass_const;
      DynamicVectorClass::Construct(this + 818, 0, 0);
      *(this + 818) = &vt_TypeList_int;
      InfantryTypeVector::Construct(this + 825, 0, 0);
      *(this + 825) = &vt_TypeList_InfantryTypeClass_const;
      InfantryTypeVector::Construct(this + 832, 0, 0);
      *(this + 832) = &vt_TypeList_InfantryTypeClass_const;
      UnitTypeVector::Construct(this + 839, 0, 0);
      *(this + 839) = &vt_TypeList_UnitTypeClass_const;
      DynamicVectorClass::BuildingTypeConstructor(this + 846, 0, 0);
      *(this + 846) = &vt_TypeList_BuildingTypeClass_const;
      DynamicVectorClass::Construct(this + 864, 0, 0);
      *(this + 864) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 871, 0, 0);
      *(this + 871) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 878, 0, 0);
      *(this + 878) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 885, 0, 0);
      *(this + 885) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 900, 0, 0);
      *(this + 900) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 907, 0, 0);
      *(this + 907) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 915, 0, 0);
      *(this + 915) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 922, 0, 0);
      *(this + 922) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 929, 0, 0);
      *(this + 929) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 936, 0, 0);
      *(this + 936) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 945, 0, 0);
      *(this + 945) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 954, 0, 0);
      *(this + 954) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 961, 0, 0);
      *(this + 961) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 968, 0, 0);
      *(this + 968) = &vt_TypeList_int;
      TerrainTypeVector::Construct(0, 0);
      *(this + 1022) = &vt_TypeList_TerrainTypeClass_const;
      DynamicVectorClass::Construct(this + 1110, 0, 0);
      *(this + 1110) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 1117, 0, 0);
      *(this + 1117) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 1125, 0, 0);
      *(this + 1125) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 1132, 0, 0);
      *(this + 1132) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 1139, 0, 0);
      *(this + 1139) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 1146, 0, 0);
      *(this + 1146) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 1153, 0, 0);
      *(this + 1153) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 1160, 0, 0);
      *(this + 1160) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 1167, 0, 0);
      *(this + 1167) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 1174, 0, 0);
      *(this + 1174) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 1181, 0, 0);
      *(this + 1181) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 1188, 0, 0);
      *(this + 1188) = &vt_TypeList_int;
      DynamicVectorClass::Construct(this + 1195, 0, 0);
      *(this + 1195) = &vt_TypeList_int;
      TypeList::Construct(this + 1202);
      TypeList::Construct(this + 1209);
      TypeList::Construct(this + 1217);
      TypeList::Construct(this + 1224);
      TypeList::Construct(this + 1231);
      TypeList::Construct(this + 1238);
      TypeList::Construct(this + 1245);
      TypeList::Construct(this + 1252);
      TypeList::Construct(this + 1259);
      TypeList::Construct(this + 1266);
      TypeList::Construct(this + 1276);
      Struct::Zero3(this + 1560);
      Array::ForEach((int)(this + 1565), 3, 16, Struct::Zero3);
      return this;
}
} }

// ==== BACKFILL 0x00667A30  RulesClass::DTOR  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::DTOR()
{
int *v2;
void *v3;
void *HarvesterTooFarDistance;
void *SovietDisguise;
void *v6;
void *v7;
void *v8;
void *v9;
void *v10;
void *v11;
void *v12;
void *ChronoDelay;
void *v14;
void *v15;
void *v16;
void *v17;
void *ComputerBaseDefenseResponse;
void *GDIWallDefense_high;
void *v20;
void *v21;
void *v22;
void *v23;
void *v24;
void *v25;
void *v26;
void *v27;
void *v28;
void *CameraRange;
void *StopSound;
void *v31;
void *v32;
void *v33;
void *v34;
void *PrismSupportHeight;
void *IonCannonDamage;
void *v37;
void *WobblesPerSecond_high;
void *Climb;
void *PrerequisiteProcAlternate;
void *WarpIn;
void *DrainAnimationType;
void *DominatorSecondAnim;
void *GUIOpenSound;
void *CreateUnitSound;
void *v46;
void *v47;
int result;
    {
    v2 = &this->q13F0[2];
    VectorClass::Destroy((int)v2);
    VectorClass::Destroy(&this->q13C8);
    VectorClass::Destroy(this->q13AC);
    VectorClass::Destroy(&this->q1390);
    VectorClass::Destroy(&this->q1374);
    VectorClass::Destroy(&this->q1358);
    VectorClass::Destroy(&this->q133C);
    VectorClass::Destroy(&this->q1320);
    VectorClass::Destroy(&this->q1304);
    VectorClass::Destroy(&this->q12E4);
    VectorClass::Destroy(&this->q12C8);
    VectorClass::Destroy(this->q12AC);
    VectorClass::Destroy(&this->q1290);
    VectorClass::Destroy(&this->q1274 + 4);
    VectorClass::Destroy(&this->q1258);
    VectorClass::Destroy(&this->q123C + 4);
    VectorClass::Destroy(&this->q1220);
    VectorClass::Destroy(&this->q1204 + 4);
    VectorClass::Destroy(&this->q11E8);
    VectorClass::Destroy(this->q11CC);
    VectorClass::Destroy(&this->q11B0);
    this->q1194[17] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->q1194[17]);
    this->q1174[9] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->q1174[9]);
    this->q1158[2] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->q1158[2]);
    TypeList_cptr_TerrainTypeClass::TryFreeAndClear(&this->qFF8);
    VectorClass::Destroy(&this->qF20);
    this->qF04[3] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->qF04[3]);
    this->qEE8[0] = &vt_VectorClass_int;
    VectorClass::Destroy(this->qEE8);
    this->qEC4[3] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->qEC4[3]);
    this->qEA0[2] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->qEA0[2]);
    this->qE84[0] = &vt_VectorClass_int;
    VectorClass::Destroy(this->qE84);
    this->qE68[1] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->qE68[1]);
    this->qE4C[2] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->qE4C[2]);
    this->qE2C[2] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->qE2C[2]);
    this->qE10[3] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->qE10[3]);
    this->qDD4[0] = &vt_VectorClass_int;
    VectorClass::Destroy(this->qDD4);
    this->qDB8[2] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->qDB8[2]);
    VectorClass::Destroy(&this->qD9C + 4);
    VectorClass::Destroy(&this->qD80);
    DynamicVectorClass::Destroy(&this->qD38);
    Vector::Destructor(this->qD1C);
    Vector::Cleanup(&this->qD00);
    Vector::Cleanup(&this->qCE4 + 4);
    VectorClass::Destroy(&this->qCC8);
    Vector::Cleanup(&this->qCAC + 4);
    VectorClass::Destroy(&this->qC90);
    Vector::Cleanup(&this->qC74);
    VectorClass::Destroy(&this->qC58);
    Vector::Cleanup(&this->__pad_C3C);
    VectorClass::Destroy(&this->qC20);
    Vector::Cleanup(&this->qC04);
    DynamicVectorClass::Destroy_Alt(&this->qBC0);
    DynamicVectorClass::Destroy_Alt(&this->qB90);
    this->qB74[2] = &vt_VectorClass_AnimTypeClass_const;
    DynamicVectorClass::Destroy_Alt(&this->qB74[2]);
    VectorClass::ClearAndFree4(&this->qB58);
    Vector::Destructor(&this->HarvesterLoadRate);
    this->SovietSurvivorDivisor[1] = &vt_VectorClass_UnitTypeClass_const;
    Vector::Destructor(&this->SovietSurvivorDivisor[1]);
    this->BridgeDestruction[1] = &vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy(&this->BridgeDestruction[1]);
    DynamicVectorClass::Destroy(&this->MinUnitCount);
    this->SilverCrate[3] = &vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy(&this->SilverCrate[3]);
    v3 = (void *)this->Aircraft[1];
    this->Aircraft[0] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v3 && BYTE1(this->Aircraft[3]) )
    {
    __3_YAXPAX_Z(v3);
    this->Aircraft[1] = 0;
}
    BYTE1(this->Aircraft[3]) = 0;
    this->Aircraft[2] = 0;
    HarvesterTooFarDistance = (void *)this->Production;
    if ( HarvesterTooFarDistance && BYTE1(this->RepairSell[0]) )
    {
    __3_YAXPAX_Z(HarvesterTooFarDistance);
    this->Production = 0;
}
    BYTE1(this->RepairSell[0]) = 0;
    this->GuardArea = 0;
    SovietDisguise = (void *)this->BaseBias;
    if ( SovietDisguise && BYTE1(this->ExpSpread) )
    {
    __3_YAXPAX_Z(SovietDisguise);
    this->BaseBias = 0;
}
    BYTE1(this->ExpSpread) = 0;
    this->qA58 = 0;
    v6 = (void *)this->InfantryBaseMult[3];
    this->InfantryBaseMult[2] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v6 && BYTE1(this->PatrolScan[1]) )
    {
    __3_YAXPAX_Z(v6);
    this->InfantryBaseMult[3] = 0;
}
    BYTE1(this->PatrolScan[1]) = 0;
    this->PatrolScan[0] = 0;
    v7 = (void *)this->qA1C[0];
    this->RefineryRatio[3] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v7 && BYTE1(this->qA25[2]) )
    {
    __3_YAXPAX_Z(v7);
    this->qA1C[0] = 0;
}
    BYTE1(this->qA25[2]) = 0;
    this->BaseSizeAdd[1] = 0;
    v8 = (void *)this->WarRatio[1];
    this->WarRatio[0] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v8 && BYTE1(this->WarRatio[3]) )
    {
    __3_YAXPAX_Z(v8);
    this->WarRatio[1] = 0;
}
    BYTE1(this->WarRatio[3]) = 0;
    this->WarRatio[2] = 0;
    v9 = (void *)this->AARatio[2];
    this->TeslaLimit[1] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v9 && BYTE1(this->AALimit[0]) )
    {
    __3_YAXPAX_Z(v9);
    this->AARatio[2] = 0;
}
    BYTE1(this->AALimit[0]) = 0;
    this->q9E8[3] = 0;
    v10 = (void *)this->AirstripLimit[3];
    this->q9C4[2] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v10 && BYTE1(this->HelipadRatio[1]) )
    {
    __3_YAXPAX_Z(v10);
    this->AirstripLimit[3] = 0;
}
    BYTE1(this->HelipadRatio[1]) = 0;
    this->HelipadRatio[0] = 0;
    v11 = (void *)this->q9AC[0];
    this->AttackInterval[3] = &vt_VectorClass_int;
    if ( v11 && BYTE1(this->q9B5[2]) )
    {
    __3_YAXPAX_Z(v11);
    this->q9AC[0] = 0;
}
    BYTE1(this->q9B5[2]) = 0;
    this->AttackDelay[1] = 0;
    v12 = (void *)this->TargetDistanceCoefficientDefault[1];
    this->q98C[0] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v12 && BYTE1(this->q999[3]) )
    {
    __3_YAXPAX_Z(v12);
    this->TargetDistanceCoefficientDefault[1] = 0;
}
    BYTE1(this->q999[3]) = 0;
    this->q994[2] = 0;
    ChronoDelay = (void *)this->q974;
    if ( ChronoDelay && BYTE1(this->q97D) )
    {
    __3_YAXPAX_Z(ChronoDelay);
    this->q974 = 0;
}
    BYTE1(this->q97D) = 0;
    this->TargetEffectivenessCoefficientDefault = 0;
    v14 = (void *)this->q958[1];
    this->q954[0] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v14 && BYTE1(this->q961[3]) )
    {
    __3_YAXPAX_Z(v14);
    this->q958[1] = 0;
}
    BYTE1(this->q961[3]) = 0;
    this->q95C[2] = 0;
    v15 = (void *)this->CMisl[3];
    this->q938[2] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v15 && BYTE1(this->q945) )
    {
    __3_YAXPAX_Z(v15);
    this->CMisl[3] = 0;
}
    BYTE1(this->q945) = 0;
    this->q940 = 0;
    v16 = (void *)this->q920[0];
    this->q91C[3] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v16 && BYTE1(this->q929[2]) )
    {
    __3_YAXPAX_Z(v16);
    this->q920[0] = 0;
}
    BYTE1(this->q929[2]) = 0;
    this->q924[1] = 0;
    v17 = (void *)this->q904[1];
    this->q900[0] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v17 && BYTE1(this->q90D[3]) )
    {
    __3_YAXPAX_Z(v17);
    this->q904[1] = 0;
}
    BYTE1(this->q90D[3]) = 0;
    this->DMisl[2] = 0;
    ComputerBaseDefenseResponse = (void *)this->q8E8;
    if ( ComputerBaseDefenseResponse && BYTE1(this->q8F1[0]) )
    {
    __3_YAXPAX_Z(ComputerBaseDefenseResponse);
    this->q8E8 = 0;
}
    BYTE1(this->q8F1[0]) = 0;
    this->q8EC = 0;
    GDIWallDefense_high = (void *)HIDWORD(this->CHRONOSK_SHP);
    if ( GDIWallDefense_high && BYTE5(this->PsychicRevealRadius) )
    {
    __3_YAXPAX_Z(GDIWallDefense_high);
    HIDWORD(this->CHRONOSK_SHP) = 0;
}
    BYTE5(this->PsychicRevealRadius) = 0;
    LODWORD(this->PsychicRevealRadius) = 0;
    v20 = (void *)this->IvanWarhead[2];
    this->IvanWarhead[1] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v20 && BYTE1(this->CanDetonateTimeBomb[0]) )
    {
    __3_YAXPAX_Z(v20);
    this->IvanWarhead[2] = 0;
}
    BYTE1(this->CanDetonateTimeBomb[0]) = 0;
    this->IvanWarhead[3] = 0;
    v21 = (void *)this->NukeProjectile[3];
    this->NukeProjectile[2] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v21 && BYTE1(this->C4Warhead[1]) )
    {
    __3_YAXPAX_Z(v21);
    this->NukeProjectile[3] = 0;
}
    BYTE1(this->C4Warhead[1]) = 0;
    this->C4Warhead[0] = 0;
    v22 = (void *)this->AISafeDistance[3];
    this->AISafeDistance[2] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v22 && BYTE1(this->Engineer[1]) )
    {
    __3_YAXPAX_Z(v22);
    this->AISafeDistance[3] = 0;
}
    BYTE1(this->Engineer[1]) = 0;
    this->Engineer[0] = 0;
    v23 = (void *)this->SpyPowerBlackout[0];
    this->ChronoRangeMinimum[3] = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v23 && BYTE1(this->SpyPowerBlackout[2]) )
    {
    __3_YAXPAX_Z(v23);
    this->SpyPowerBlackout[0] = 0;
}
    BYTE1(this->SpyPowerBlackout[2]) = 0;
    this->SpyPowerBlackout[1] = 0;
    v24 = (void *)this->ChronoReinfDelay[1];
    this->ChronoReinfDelay[0] = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v24 && BYTE1(this->ChronoReinfDelay[3]) )
    {
    __3_YAXPAX_Z(v24);
    this->ChronoReinfDelay[1] = 0;
}
    BYTE1(this->ChronoReinfDelay[3]) = 0;
    this->ChronoReinfDelay[2] = 0;
    v25 = (void *)this->BombParachute[2];
    this->BombParachute[1] = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v25 && BYTE1(this->LargeFire[0]) )
    {
    __3_YAXPAX_Z(v25);
    this->BombParachute[2] = 0;
}
    BYTE1(this->LargeFire[0]) = 0;
    this->BombParachute[3] = 0;
    v26 = (void *)this->BaseUnit[3];
    this->BaseUnit[2] = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v26 && BYTE1(this->TreeFire[1]) )
    {
    __3_YAXPAX_Z(v26);
    this->BaseUnit[3] = 0;
}
    BYTE1(this->TreeFire[1]) = 0;
    this->TreeFire[0] = 0;
    v27 = (void *)this->GDIBaseDefenseCoefficient[0];
    this->GDIWallDefenseCoefficient[3] = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v27 && BYTE1(this->GDIBaseDefenseCoefficient[2]) )
    {
    __3_YAXPAX_Z(v27);
    this->GDIBaseDefenseCoefficient[0] = 0;
}
    BYTE1(this->GDIBaseDefenseCoefficient[2]) = 0;
    this->GDIBaseDefenseCoefficient[1] = 0;
    v28 = (void *)this->q738[1];
    this->q734[0] = &vt_VectorClass_int;
    if ( v28 && BYTE1(this->q741[3]) )
    {
    __3_YAXPAX_Z(v28);
    this->q738[1] = 0;
}
    BYTE1(this->q741[3]) = 0;
    this->q73C[2] = 0;
    CameraRange = (void *)this->ChuteSound;
    if ( CameraRange && BYTE1(this->GuardSound) )
    {
    __3_YAXPAX_Z(CameraRange);
    this->ChuteSound = 0;
}
    BYTE1(this->GuardSound) = 0;
    this->StopSound = 0;
    StopSound = (void *)this->q64C;
    if ( StopSound && BYTE1(this->q655) )
    {
    __3_YAXPAX_Z(StopSound);
    this->q64C = 0;
}
    BYTE1(this->q655) = 0;
    this->VeteranCap = 0;
    v31 = (void *)this->RevealTriggerRadius[0];
    if ( v31 && BYTE1(this->RevealTriggerRadius[2]) )
    {
    __3_YAXPAX_Z(v31);
    this->RevealTriggerRadius[0] = 0;
}
    BYTE1(this->RevealTriggerRadius[2]) = 0;
    this->RevealTriggerRadius[1] = 0;
    v32 = (void *)this->q478[7];
    this->q474[6] = &vt_VectorClass_int;
    if ( v32 && BYTE1(this->q481[9]) )
    {
    __3_YAXPAX_Z(v32);
    this->q478[7] = 0;
}
    BYTE1(this->q481[9]) = 0;
    this->q47C[8] = 0;
    v33 = (void *)this->q45C[0];
    this->q458[13] = &vt_VectorClass_int;
    if ( v33 && BYTE1(this->q465[2]) )
    {
    __3_YAXPAX_Z(v33);
    this->q45C[0] = 0;
}
    BYTE1(this->q465[2]) = 0;
    this->q460[1] = 0;
    v34 = (void *)this->q440[7];
    this->q43C[6] = &vt_VectorClass_int;
    if ( v34 && BYTE1(this->q449[9]) )
    {
    __3_YAXPAX_Z(v34);
    this->q440[7] = 0;
}
    BYTE1(this->q449[9]) = 0;
    this->q444[8] = 0;
    PrismSupportHeight = (void *)this->q3E8;
    if ( PrismSupportHeight && BYTE1(this->q3F1[1]) )
    {
    __3_YAXPAX_Z(PrismSupportHeight);
    this->q3E8 = 0;
}
    BYTE1(this->q3F1[1]) = 0;
    this->q3EC[0] = 0;
    IonCannonDamage = (void *)this->q3CC;
    this->q3C8[3] = &vt_VectorClass_int;
    if ( IonCannonDamage && BYTE1(this->q3D5) )
    {
    __3_YAXPAX_Z(IonCannonDamage);
    this->q3CC = 0;
}
    BYTE1(this->q3D5) = 0;
    this->q3D0 = 0;
    v37 = (void *)this->q3B0[1];
    this->q3AC[0] = &vt_VectorClass_int;
    if ( v37 && BYTE1(this->q3B9[3]) )
    {
    __3_YAXPAX_Z(v37);
    this->q3B0[1] = 0;
}
    BYTE1(this->q3B9[3]) = 0;
    this->q3B4[2] = 0;
    WobblesPerSecond_high = (void *)HIDWORD(this->q394);
    if ( WobblesPerSecond_high && BYTE1(this->q39D[0]) )
    {
    __3_YAXPAX_Z(WobblesPerSecond_high);
    HIDWORD(this->q394) = 0;
}
    BYTE1(this->q39D[0]) = 0;
    this->q398 = 0;
    Climb = (void *)this->q378;
    *(_DWORD *)&this->q374[4] = &vt_VectorClass_int;
    if ( Climb && BYTE1(this->q381) )
    {
    __3_YAXPAX_Z(Climb);
    LODWORD(this->q378) = 0;
}
    BYTE1(this->q381) = 0;
    HIDWORD(this->q37C) = 0;
    PrerequisiteProcAlternate = (void *)this->q35C;
    this->q358[3] = &vt_VectorClass_int;
    if ( PrerequisiteProcAlternate && BYTE1(this->q365) )
    {
    __3_YAXPAX_Z(PrerequisiteProcAlternate);
    this->q35C = 0;
}
    BYTE1(this->q365) = 0;
    this->q360 = 0;
    WarpIn = (void *)this->q2DC;
    if ( WarpIn && BYTE1(this->q2E5) )
    {
    __3_YAXPAX_Z(WarpIn);
    this->q2DC = 0;
}
    BYTE1(this->q2E5) = 0;
    this->q2E0 = 0;
    DrainAnimationType = (void *)this->q2C0;
    if ( DrainAnimationType && BYTE1(this->q2C9) )
    {
    __3_YAXPAX_Z(DrainAnimationType);
    this->q2C0 = 0;
}
    BYTE1(this->q2C9) = 0;
    this->q2C4 = 0;
    DominatorSecondAnim = (void *)this->q2A4;
    if ( DominatorSecondAnim && BYTE1(this->q2AD) )
    {
    __3_YAXPAX_Z(DominatorSecondAnim);
    this->q2A4 = 0;
}
    BYTE1(this->q2AD) = 0;
    this->q2A8 = 0;
    GUIOpenSound = (void *)this->CrateFireSound;
    if ( GUIOpenSound && BYTE1(this->CrateSpeedSound) )
    {
    __3_YAXPAX_Z(GUIOpenSound);
    this->CrateFireSound = 0;
}
    BYTE1(this->CrateSpeedSound) = 0;
    this->CrateArmourSound = 0;
    CreateUnitSound = (void *)this->DefaultChronoSound;
    if ( CreateUnitSound && BYTE1(this->AddPlanningModeCommandSound) )
    {
    __3_YAXPAX_Z(CreateUnitSound);
    this->DefaultChronoSound = 0;
}
    BYTE1(this->AddPlanningModeCommandSound) = 0;
    this->StartPlanningModeSound = 0;
    v46 = (void *)this->GUICheckboxSound[2];
    this->GUICheckboxSound[1] = &vt_VectorClass_AnimTypeClass_const;
    if ( v46 && BYTE1(this->BuildingGarrisonedSound[0]) )
    {
    __3_YAXPAX_Z(v46);
    this->GUICheckboxSound[2] = 0;
}
    BYTE1(this->BuildingGarrisonedSound[0]) = 0;
    this->GUICheckboxSound[3] = 0;
    v47 = (void *)this->GUITabSound[3];
    this->GUITabSound[2] = &vt_VectorClass_AnimTypeClass_const;
    if ( v47 && BYTE1(this->GUIMoveInSound[1]) )
    {
    __3_YAXPAX_Z(v47);
    this->GUITabSound[3] = 0;
}
    BYTE1(this->GUIMoveInSound[1]) = 0;
    this->GUIMoveInSound[0] = 0;
    result = this->RadarEventColorSpeed[1];
    this->RadarEventColorSpeed[0] = &vt_VectorClass_VoxelAnimTypeClass_const;
    if ( result && BYTE1(this->RadarEventColorSpeed[3]) )
    {
    __3_YAXPAX_Z((void *)result);
    this->RadarEventColorSpeed[1] = 0;
}
    BYTE1(this->RadarEventColorSpeed[3]) = 0;
    this->RadarEventColorSpeed[2] = 0;
    return result;
}
}

// ==== BACKFILL 0x00668BF0  RulesClass::Addition  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RulesClass::Addition() {
{
      char *v1;
      int v3;
      char *v4;
      unsigned __int8 *v5;
      int Coord;
      char *v7;
      char v8;
      bool v9;
      int v10;
      int i;
      unsigned __int8 *v12;
      int v13;
      int j;
      unsigned __int8 *v15;
      int v16;
      int k;
      unsigned __int8 *v18;
      int v19;
      int m;
      unsigned __int8 *v21;
      int v22;
      int n;
      unsigned __int8 *v24;
      int v25;
      int ii;
      unsigned __int8 *v27;
      char v29[4];
      unsigned __int8 *StringByIndex;
      int KeyCount;
      char Destination[32];
      #381 *v33; // [esp+40h] [ebp+4h] BYREF

      v1 = (char *)v33;
      RulesClass::ReadColors(this);
      if ( (unsigned __int8)INIEntry::Exists(aColoradd, 0) )
      {
        v3 = 0;
        KeyCount = INIClass::GetKeyCount(v1, (unsigned __int8 *)aColoradd);
        if ( KeyCount > 0 )
        {
          v4 = (char *)this + 6260;
          do
          {
            StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)aColoradd, v3);
            v5 = Palette::SixBitTo16Bit(&v33, 0, 0, 0);
            Coord = INIClass::GetCoord((unsigned __int8 ***)v1, (int)v29, (unsigned __int8 *)aColoradd, StringByIndex, v5);
            v7 = v4;
            ++v3;
            v4 += 3;
            v8 = *(_BYTE *)(Coord + 2);
            *(_WORD *)v7 = *(_WORD *)Coord;
            v9 = v3 < KeyCount;
            v7[2] = v8;
          }
          while ( v9 );
        }
      }
      v10 = INIClass::GetKeyCount(v1, (unsigned __int8 *)aCountries);
      for ( i = 0; i < v10; ++i )
      {
        v12 = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)aCountries, i);
        if ( INIClass::GetString(
               (unsigned __int8 ***)v1,
               (unsigned __int8 *)aCountries,
               v12,
               &g_INI_DefaultBuffer,
               Destination,
               32) )
        {
          WeaponTypeClass::Create(Destination);
        }
      }
      RulesClass::ReadDataList(this);
      v13 = INIClass::GetKeyCount(v1, (unsigned __int8 *)aOverlaytypes);
      for ( j = 0; j < v13; ++j )
      {
        v15 = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)aOverlaytypes, j);
        if ( INIClass::GetString(
               (unsigned __int8 ***)v1,
               (unsigned __int8 *)aOverlaytypes,
               v15,
               &g_INI_DefaultBuffer,
               Destination,
               32) )
        {
          BuildingTypeClass::FindOrCreate2(Destination);
        }
      }
      v16 = INIClass::GetKeyCount(v1, (unsigned __int8 *)aSuperweapontyp);
      for ( k = 0; k < v16; ++k )
      {
        v18 = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)aSuperweapontyp, k);
        if ( INIClass::GetString(
               (unsigned __int8 ***)v1,
               (unsigned __int8 *)aSuperweapontyp,
               v18,
               &g_INI_DefaultBuffer,
               Destination,
               32) )
        {
          WeaponTypeClass::Process(Destination);
        }
      }
      v19 = INIClass::GetKeyCount(v1, (unsigned __int8 *)g_INI_Key_Warheads);
      for ( m = 0; m < v19; ++m )
      {
        v21 = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)g_INI_Key_Warheads, m);
        if ( INIClass::GetString(
               (unsigned __int8 ***)v1,
               (unsigned __int8 *)g_INI_Key_Warheads,
               v21,
               &g_INI_DefaultBuffer,
               Destination,
               32) )
        {
          WarheadTypeClass::FindOrCreate(Destination);
        }
      }
      v22 = INIClass::GetKeyCount(v1, (unsigned __int8 *)aSmudgetypes);
      for ( n = 0; n < v22; ++n )
      {
        v24 = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)aSmudgetypes, n);
        if ( INIClass::GetString(
               (unsigned __int8 ***)v1,
               (unsigned __int8 *)aSmudgetypes,
               v24,
               &g_INI_DefaultBuffer,
               Destination,
               32) )
        {
          FactoryClass::FindOrCreate(Destination);
        }
      }
      v25 = INIClass::GetKeyCount(v1, (unsigned __int8 *)aTerraintypes);
      for ( ii = 0; ii < v25; ++ii )
      {
        v27 = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)aTerraintypes, ii);
        if ( INIClass::GetString(
               (unsigned __int8 ***)v1,
               (unsigned __int8 *)aTerraintypes,
               v27,
               &g_INI_DefaultBuffer,
               Destination,
               32) )
        {
          TerrainTypeClass::FindOrCreate(Destination);
        }
      }
      RulesClass::LoadBuildingTypes(this);
      CCINIClass::LoadBuildingTypes(this);
      RulesClass::readRadiation(this);
      RulesClass::readCrateRules(this);
      RulesClass::LoadAnimTypes(this);
      CCINIClass::LoadUnitTypes(this);
      RulesClass::readColors(this);
      CCINIClass::ReadBuildingSettings(this);
      RulesClass::readDifficulty(this);
      Dialog::ReadMultiplayerDialogSettings(this);
      RulesClass::ReadMultiplayerDefaults(this);
      RulesClass::ReadPowerupsSection(this);
      RulesClass::LoadSpeedTypes(this);
      RulesClass::ReadIQSection(this);
      RulesClass::LoadFromINI(this);
      SideClass::LoadAllFromINI(v1);
      INIClass::ReadDifficultyModifiers((#381 *)v1);
      INIClass::ReadDifficultyModifiers((#381 *)v1);
      INIClass::ReadDifficultyModifiers((#381 *)v1);
      ReadCrateRulesINI(this);
      Rules::ReadCombatINI(this);
      RulesClass::ReadCountryList(this);
      RulesClass::readAudioVisual(this);
      RulesClass::readSpecialWeapons(this);
      Rules::ReadMiscINI(this);
      RulesClass::LoadSpecialWeapons(this);
      SmallFunc_721D10(v1);
      return SidebarClass::ReadButtonList(this);
}
} }

// ==== BACKFILL 0x00668FB0  RulesClass::LoadSpecialWeapons  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RulesClass::LoadSpecialWeapons() {
{
      int result;
      int SellBack;
      int v4;
      int AIBaseSpacing;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v12;
      int v13;
      int v14;
      int v15;
      int v16;
      int i;
      char Destination[128];
      unsigned __int8 ***v19;

      result = INIClass::BinarySearchSection((int)v19, (unsigned __int8 *)DataGlobal_839EB4);
      if ( result )
      {
        SellBack = this->?;
        if ( INIClass::GetString(
               v19,
               (unsigned __int8 *)DataGlobal_839EB4,
               (unsigned __int8 *)DataGlobal_83A144,
               &g_INI_DefaultBuffer,
               Destination,
               128) )
        {
          v4 = WarheadTypeClass::FindOrCreate(Destination);
        }
        else
        {
          v4 = SellBack;
        }
        this->? = v4;
        AIBaseSpacing = this->?;
        if ( INIClass::GetString(
               v19,
               (unsigned __int8 *)DataGlobal_839EB4,
               (unsigned __int8 *)DataGlobal_83A134,
               &g_INI_DefaultBuffer,
               Destination,
               128) )
        {
          v6 = ObjectTypeClass::FindOrCreate(Destination);
        }
        else
        {
          v6 = AIBaseSpacing;
        }
        v7 = this->?[0];
        this->? = v6;
        if ( INIClass::GetString(
               v19,
               (unsigned __int8 *)DataGlobal_839EB4,
               (unsigned __int8 *)DataGlobal_83A128,
               &g_INI_DefaultBuffer,
               Destination,
               128) )
        {
          v8 = ObjectTypeClass::FindOrCreate(Destination);
        }
        else
        {
          v8 = v7;
        }
        v9 = this->?[1];
        this->?[0] = v8;
        if ( INIClass::GetString(
               v19,
               (unsigned __int8 *)DataGlobal_839EB4,
               (unsigned __int8 *)DataGlobal_83A118,
               &g_INI_DefaultBuffer,
               Destination,
               128) )
        {
          v10 = WarheadTypeClass::FindOrCreate(Destination);
        }
        else
        {
          v10 = v9;
        }
        this->?[1] = v10;
        v11 = this->?[2];
        if ( INIClass::GetString(
               v19,
               (unsigned __int8 *)DataGlobal_839EB4,
               (unsigned __int8 *)DataGlobal_83A100,
               &g_INI_DefaultBuffer,
               Destination,
               128) )
        {
          v12 = WarheadTypeClass::FindOrCreate(Destination);
        }
        else
        {
          v12 = v11;
        }
        v13 = this->?[3];
        this->?[2] = v12;
        if ( INIClass::GetString(
               v19,
               (unsigned __int8 *)DataGlobal_839EB4,
               (unsigned __int8 *)DataGlobal_83A0F0,
               &g_INI_DefaultBuffer,
               Destination,
               128) )
        {
          v14 = WarheadTypeClass::FindOrCreate(Destination);
        }
        else
        {
          v14 = v13;
        }
        v15 = this->?[4];
        this->?[3] = v14;
        if ( INIClass::GetString(
               v19,
               (unsigned __int8 *)DataGlobal_839EB4,
               (unsigned __int8 *)DataGlobal_83A0DC,
               &g_INI_DefaultBuffer,
               Destination,
               128) )
        {
          v16 = ObjectTypeClass::FindOrCreate(Destination);
        }
        else
        {
          v16 = v15;
        }
        this->?[4] = v16;
        result = g_WarheadTypePool;
        for ( i = 0; i < g_WarheadTypePool; ++i )
        {
          (*(void (__thiscall **)(_DWORD, unsigned __int8 ***))(**((_DWORD **)DataGlobal_8874C4 + i) + 100))(
            *((_DWORD *)DataGlobal_8874C4 + i),
            v19);
          result = g_WarheadTypePool;
        }
        LOBYTE(result) = 1;
      }
      else
      {
        LOBYTE(result) = 0;
      }
      return result;
}
} }

// ==== BACKFILL 0x0066CF70  RulesClass::ReadCountryList  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RulesClass::ReadCountryList() {
{
      int result;
      int Int_Overwrite;
      int v4;
      int v5;
      int v6;
      int v7;
      int v8;
      double Double_Overwrite;
      double v10;
      double v11;
      double v12;
      int Coord;
      int v14;
      double v15;
      _BYTE v16[4];
      char Destination[128];
      unsigned __int8 ***v18;

      result = INIClass::BinarySearchSection((int)v18, (unsigned __int8 *)DataGlobal_839E80);
      if ( result )
      {
        this->q1804 = INIClass::ReadInt_Overwrite(
                                     (int)v18,
                                     (unsigned __int8 *)DataGlobal_839E80,
                                     (unsigned __int8 *)DataGlobal_83B330,
                                     this->q1804);
        Int_Overwrite = INIClass::ReadInt_Overwrite(
                          (int)v18,
                          (unsigned __int8 *)DataGlobal_839E80,
                          (unsigned __int8 *)DataGlobal_83B31C,
                          this->q1808);
        v4 = this->OreTwinkleChance;
        this->q1808 = Int_Overwrite;
        v5 = INIClass::ReadInt_Overwrite(
               (int)v18,
               (unsigned __int8 *)DataGlobal_839E80,
               (unsigned __int8 *)DataGlobal_83B310,
               v4);
        v6 = this->OreTwinkle;
        this->OreTwinkleChance = v5;
        this->OreTwinkle = INIClass::ReadInt_Overwrite(
                                     (int)v18,
                                     (unsigned __int8 *)DataGlobal_839E80,
                                     (unsigned __int8 *)DataGlobal_83B300,
                                     v6);
        v7 = INIClass::ReadInt_Overwrite(
               (int)v18,
               (unsigned __int8 *)DataGlobal_839E80,
               (unsigned __int8 *)DataGlobal_83B2F0,
               this->ColorAdd);
        v8 = this->q181C;
        this->ColorAdd = v7;
        HIDWORD(v15) = v8;
        LODWORD(v15) = this->q1818;
        Double_Overwrite = INIClass::ReadDouble_Overwrite(
                             (int)v18,
                             (unsigned __int8 *)DataGlobal_839E80,
                             (unsigned __int8 *)DataGlobal_83B2E0,
                             v15);
        v10 = *((double *)this + 772);
        *((double *)this + 771) = Double_Overwrite;
        v11 = INIClass::ReadDouble_Overwrite(
                (int)v18,
                (unsigned __int8 *)DataGlobal_839E80,
                (unsigned __int8 *)DataGlobal_83B2D0,
                v10);
        v12 = *((double *)this + 773);
        *((double *)this + 772) = v11;
        *((double *)this + 773) = INIClass::ReadDouble_Overwrite(
                                    (int)v18,
                                    (unsigned __int8 *)DataGlobal_839E80,
                                    (unsigned __int8 *)DataGlobal_83B2C0,
                                    v12);
        Coord = INIClass::GetCoord(
                  v18,
                  (int)v16,
                  (unsigned __int8 *)DataGlobal_839E80,
                  (unsigned __int8 *)DataGlobal_83B2B4,
                  (unsigned __int8 *)this + 6192);
        this->q1830 = *(_WORD *)Coord;
        this->q1832 = *(_BYTE *)(Coord + 2);
        v14 = this->q1834;
        if ( INIClass::GetString(
               v18,
               (unsigned __int8 *)DataGlobal_839E80,
               (unsigned __int8 *)DataGlobal_83B2A4,
               &g_INI_DefaultBuffer,
               Destination,
               128) )
        {
          result = WarheadTypeClass::FindOrCreate(Destination);
          this->q1834 = result;
        }
        else
        {
          result = v14;
          this->q1834 = v14;
        }
        LOBYTE(result) = 1;
      }
      else
      {
        LOBYTE(result) = 0;
      }
      return result;
}
} }

// ==== BACKFILL 0x0066D1F0  RulesClass::readSpecialWeapons  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::readSpecialWeapons()
{
{
    int result;
    char Bool_Overwrite;
    int v4;
    double v5;
    int v6;
    result = INIClass::BinarySearchSection(v6, (unsigned char *)DataGlobal_839E64);
    if ( result )
  {
    Bool_Overwrite = INIClass::ReadBool_Overwrite( v6, (unsigned char *)DataGlobal_839E64, (unsigned char *)DataGlobal_83B39C, (unsigned char)this->ForceShieldColor);
    v4 = this->FallBackCoefficient;
    this->ForceShieldColor = Bool_Overwrite;
    HIDWORD(v5) = this->CrewCount;
    LODWORD(v5) = v4;
    *((double *)(this) + 779) = INIClass::ReadDouble_Overwrite( v6, (unsigned char *)DataGlobal_839E64, (unsigned char *)DataGlobal_83B384, v5);
    LOBYTE(result) = 1;
  }
    else
  {
    LOBYTE(result) = 0;
  }
    return result;
}
}

// ==== BACKFILL 0x0066D3A0  RulesClass::ReadColors  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::ReadColors()
{
{
    char *v1;
    int result;
    int v3;
    int i;
    unsigned char *StringByIndex;
    int Color;
    unsigned char v7[4];
    char v8[4];
    char *v9;
    v1 = v9;
    result = INIClass::BinarySearchSection((int)v9, (unsigned char *)DataGlobal_839E5C);
    if ( result )
  {
    result = INIClass::GetKeyCount(v1, (unsigned char *)DataGlobal_839E5C);
    v3 = result;
    for ( i = 0; i < v3; ++i )
    {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v1, (unsigned char *)DataGlobal_839E5C, i);
    v7[0] = 0;
    v7[1] = 0;
    v7[2] = 0;
    Color = INIEntry::ReadColor( (unsigned char ***)v1, (int)v8, (unsigned char *)DataGlobal_839E5C, StringByIndex, v7);
    LOWORD(v9) = *(short *)Color;
    BYTE2(v9) = *(char *)(Color + 2);
    System_Read((const char *)StringByIndex, (int)&v9);
    System_Read_68C9C0((char *)StringByIndex, (int)&v9, (int)DataGlobal_886380, (int)&FileSystem_TEMPERAT_PAL, 1);
    result = System_Read_68C9C0((char *)StringByIndex, (int)&v9, (int)DataGlobal_886380, (int)&FileSystem_TEMPERAT_PAL, 53);
    }
    LOBYTE(result) = 1;
  }
    else
  {
    LOBYTE(result) = 0;
  }
    return result;
}
}

// ==== BACKFILL 0x0066D480  RulesClass::ReadColorAdd  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::ReadColorAdd()
{
{
    char *v1;
    int result;
    int v4;
    char *v5;
    unsigned char *StringByIndex;
    int Coord;
    char *v8;
    char v9;
    bool v10;
    char v11[4];
    int v12;
    char *v13;
    v1 = v13;
    result = INIClass::BinarySearchSection((int)v13, (unsigned char *)DataGlobal_839E50);
    if ( result )
  {
    result = INIClass::GetKeyCount(v1, (unsigned char *)DataGlobal_839E50);
    v4 = 0;
    v12 = result;
    if ( result > 0 )
    {
    v5 = (char *)(this) + 6260;
    do
      {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v1, (unsigned char *)DataGlobal_839E50, v4);
    LOWORD(v13) = 0;
    BYTE2(v13) = 0;
    Coord = INIClass::GetCoord( (unsigned char ***)v1, (int)v11, (unsigned char *)DataGlobal_839E50, StringByIndex, (unsigned char *)&v13);
    v8 = v5;
    ++v4;
    v5 += 3;
    v9 = *(char *)(Coord + 2);
    *(short *)v8 = *(short *)Coord;
    result = v12;
    v10 = v4 < v12;
    v8[2] = v9;
      }
    while ( v10 );
    }
    LOBYTE(result) = 1;
  }
    else
  {
    LOBYTE(result) = 0;
  }
    return result;
}
}
