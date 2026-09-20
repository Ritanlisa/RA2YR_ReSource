// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00710410  ObjectClass::ClearPointerRefs  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::ClearPointerRefs() {
{
      int v2;

      if ( v2 == this->q12C )
        this->q12C = 0;
      if ( v2 == this->q1D4 )
        this->q1D4 = 0;
      if ( v2 == this->q2C8 )
        this->q2C8 = 0;
      if ( v2 == this->q130 )
        this->q130 = 0;
      return ObjectClass::ResetPointerIfMatch(this);
}
} } }

// ==== BACKFILL 0x00710460  ObjectClass::FreeCaptureManager  cls=TechnoClass  sig=csp  renamed_refs=1  residual=- ====
namespace ra2 { namespace game { int ObjectClass::FreeCaptureManager() {
{
      _DWORD *v1;
      int result;

      v1 = (_DWORD *)this->rockerLinkedUnit;
      if ( v1 )
        return CaptureManager::FreeAll(v1);
      return result;
}
} } }

// ==== BACKFILL 0x00710550  CCINIClass::IterateNodes  cls=CCINIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CCINIClass::IterateNodes(int a1) {
{
    int result;
    int v3;
    result = CCINIClass::GetDB(this + 69);
    v3 = result;
    if ( result )
  {
    do
    {
    result = (*(int (__thiscall **)(int, IUnknown *))(*(int *)(v3) + 968))(v3, a1);
    v3 = *(int *)(v3 + 48);
    }
    while ( v3 && (*(char *)(v3 + 20) & 4) != 0 );
  }
    return result;
}
} }

// ==== BACKFILL 0x007105E0  BuildingClass::IsBeingRepairedOrCaptured  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
bool BuildingClass::IsBeingRepairedOrCaptured()
{
    // Binary: dword@+0x2C0 (locomotorTarget) nonzero OR byte@+0x2C4
    // (locomotorSource) nonzero. The old IsBeingRepaired||HasBeenCaptured
    // rendering read unrelated bools at +0x6E8/+0x6E3 (blind-verifier era).
    return locomotorTarget || locomotorSource;
}

// ==== BACKFILL 0x00711AE0  TechnoTypeClass::DTOR  cls=TechnoTypeClass  sig=csp  renamed_refs=9  residual=- ====
int TechnoTypeClass::DTOR()
{
    // 4x vftable installs: exempted (D1-6 #128 vocabulary)
    char v2 = this->CameoAllocated;
    if ( v2 && this->Cameo )
    {
        OperatorDelete(this->Cameo);
        this->Cameo = nullptr;
        this->CameoAllocated = 0;
    }
    if ( this->AltCameoAllocated && this->AltCameo )
    {
        OperatorDelete(this->AltCameo);
        this->AltCameo = nullptr;
        this->AltCameoAllocated = 0;
    }
    void* v17 = this;
    int v3 = g_AbstractClassArray.FindItemIndex(&v17);
    if ( v3 != -1 )
        DynamicVector::RemoveItem(&g_AbstractClassArray, v3);
    void* v17b = this;
    int v4 = g_TechnoTypes.FindItemIndex((TechnoTypeClass**)&v17b);
    if ( v4 != -1 )
        TechnoTypeClass::RemoveItem(&g_TechnoTypes, v4);
    VectorClass::Cleanup(this->DestroyParticleSystems);
    VectorClass::Cleanup(this->DamageParticleSystems);
    DynamicVectorClass::Destroy_Alt(this->DestroyAnim);
    DynamicVectorClass::Destroy_Alt(this->Explosion);
    VectorClass::Destroy(this->PrerequisiteOverride);
    VectorClass::Destroy(this->Prerequisite);
    DynamicVectorClass::Destroy_Alt(this->DebrisAnims);
    VectorClass::Destroy(this->DieSound);
    VectorClass::Destroy(this->MoveSound);
    void* v5 = this->VoiceFeedback_Items;
    if ( v5 && this->VoiceFeedback_FlagByte )
    {
        OperatorDelete(v5);
        this->VoiceFeedback_Items = nullptr;
    }
    this->VoiceFeedback_FlagByte = 0;
    this->VoiceFeedback_Capacity = 0;
    void* v6 = this->IntList_H_Items;
    if ( v6 && this->IntList_H_FlagByte )
    {
        OperatorDelete(v6);
        this->IntList_H_Items = nullptr;
    }
    this->IntList_H_FlagByte = 0;
    this->IntList_H_Capacity = 0;
    void* v7 = this->IntList_G_Items;
    if ( v7 && this->IntList_G_FlagByte )
    {
        OperatorDelete(v7);
        this->IntList_G_Items = nullptr;
    }
    this->IntList_G_FlagByte = 0;
    this->IntList_G_Capacity = 0;
    void* v8 = this->IntList_F_Items;
    if ( v8 && this->IntList_F_FlagByte )
    {
        OperatorDelete(v8);
        this->IntList_F_Items = nullptr;
    }
    this->IntList_F_FlagByte = 0;
    this->IntList_F_Capacity = 0;
    void* v9 = this->IntList_E_Items;
    if ( v9 && this->IntList_E_FlagByte )
    {
        OperatorDelete(v9);
        this->IntList_E_Items = nullptr;
    }
    this->IntList_E_FlagByte = 0;
    this->IntList_E_Capacity = 0;
    void* v10 = this->IntList_D_Items;
    if ( v10 && this->IntList_D_FlagByte )
    {
        OperatorDelete(v10);
        this->IntList_D_Items = nullptr;
    }
    this->IntList_D_FlagByte = 0;
    this->IntList_D_Capacity = 0;
    void* v11 = this->IntList_C_Items;
    if ( v11 && this->IntList_C_FlagByte )
    {
        OperatorDelete(v11);
        this->IntList_C_Items = nullptr;
    }
    this->IntList_C_FlagByte = 0;
    this->IntList_C_Capacity = 0;
    void* v12 = this->IntList_B_Items;
    if ( v12 && this->IntList_B_FlagByte )
    {
        OperatorDelete(v12);
        this->IntList_B_Items = nullptr;
    }
    this->IntList_B_FlagByte = 0;
    this->IntList_B_Capacity = 0;
    void* v13 = this->BuildingTypeList_Items;
    if ( v13 && this->BuildingTypeList_FlagByte )
    {
        OperatorDelete(v13);
        this->BuildingTypeList_Items = nullptr;
    }
    this->BuildingTypeList_FlagByte = 0;
    this->BuildingTypeList_Capacity = 0;
    void* v14 = this->IntList_A_Items;
    if ( v14 && this->IntList_A_FlagByte )
    {
        OperatorDelete(v14);
        this->IntList_A_Items = nullptr;
    }
    this->IntList_A_FlagByte = 0;
    this->IntList_A_Capacity = 0;
    void* v15 = this->VoxelAnimList_Items;
    if ( v15 && this->VoxelAnimList_FlagByte )
    {
        OperatorDelete(v15);
        this->VoxelAnimList_Items = nullptr;
    }
    this->VoxelAnimList_FlagByte = 0;
    this->VoxelAnimList_Capacity = 0;
    return ObjectTypeClass::Destruct(this);
}

// ==== BACKFILL 0x00711E80  AbstractClass::processWeaponFire  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
char AbstractClass::processWeaponFire()
{
return 1;
}

// ==== BACKFILL 0x00711E90  TechnoTypeClass::CanAttackMove_IgnoreWeapon  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
bool TechnoTypeClass::CanAttackMove_IgnoreWeapon()
{
{
    return this->Weapon && !this->PreventAttackMove;
}
}

// ==== BACKFILL 0x00711EB0  TechnoClass::GetMember388  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::GetMember388() const {
return this->q610;
}

// ==== BACKFILL 0x00711EE0  TechnoTypeClass::ComputeBuildTime  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
double TechnoTypeClass::ComputeBuildTime()
{
{
    double result;
    result = (double)this->Cost * *((double *)g_RulesClass_Instance + 745) * 0.9;
    Math::RoundToInt(result);
    return result;
}
}

// ==== BACKFILL 0x00712120  AircraftTypeClass::GetGameplayValue  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AircraftTypeClass::GetGameplayValue()
{
{
    return g_RulesClass_Instance[1].?;
}
}

// ==== BACKFILL 0x007177C0  TechnoClass::GetWeaponSlot  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
WeaponStruct* TechnoClass::GetWeaponSlot(int index) const { return nullptr; }

// ==== BACKFILL 0x00717890  BuildingClass::SetSlot  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
void BuildingClass::SetSlot(int a2, int a3)
{
{
    *(this + a3 + 517) = a2;
    return a3;
}

/* ASM:
mov     eax, [esp+arg_4]
mov     edx, [esp+arg_0]
mov     [ecx+eax*4+814h], edx
retn    8
*/
}

// ==== BACKFILL 0x007178B0  UnitClass::processEnterTarget  cls=UnitClass  sig=csp  renamed_refs=0  residual=- ====
int UnitClass::processEnterTarget(int a2)
{
{
    return *(this + a2 + 517);
}

/* ASM:
mov     eax, [esp+arg_0]
mov     eax, [ecx+eax*4+814h]
retn    4
*/
}

// ==== BACKFILL 0x007179A0  TechnoTypeClass::ddtor  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
TechnoTypeClass * TechnoTypeClass::ddtor(char a2)
{
{
    TechnoTypeClass::DTOR((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TechnoTypeClass *)this;
}
}

// ==== BACKFILL 0x007179C0  nullsub_86  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_86()
{
  ;
}

// ==== BACKFILL 0x007179D0  ObjectTypeClass::loadTypeMember_57179D0  cls=ObjectTypeClass  sig=csp  renamed_refs=6  residual=- ====
int ObjectTypeClass::loadTypeMember_57179D0(WeaponTypeClass * aP1, CCINIClass * aP2)
{
{
    if ( this != (int *)aP2 )
  {
    *(void**)this = *(int *)aP2->__pad_0;
    this->vtable2 = aP2->headNode[0];
    this->vtable3 = aP2->headNode[1];
    this->vtable4 = aP2->headNode[2];
    this->uniqueId = aP2->sectionHead[0];
  }
    *(int *)aP1->__pad_0 = *(void**)this;
    *(int *)&aP1->__pad_0[4] = this->vtable2;
    *(int *)&aP1->__pad_0[8] = this->vtable3;
    *(int *)&aP1->__pad_0[12] = this->vtable4;
    LOWORD(aP1->uniqueId) = (unsigned short)this->uniqueId;
    return (int)aP1->__pad_0;
}
}

// ==== BACKFILL 0x00717A30  ObjectTypeClass::loadTypeMember_5717A30  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_5717A30(int a2)
{
{
    *(void**)this = a2;
    return a2;
}
}

// ==== BACKFILL 0x00717A40  ReadPointerFromECX4  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_717A40::ReadPointerFromECX4()
{
{
    return *(int *)this;
}
}

// ==== BACKFILL 0x00717A50  ObjectTypeClass::loadTypeMember_5717A50  cls=ObjectTypeClass  sig=csp  renamed_refs=1  residual=- ====
int ObjectTypeClass::loadTypeMember_5717A50(int a2)
{
{
    int result;
    result = a2;
    if ( a2 <= 0 )
    result = 1;
    this->vtable2 = result;
    return result;
}
}

// ==== BACKFILL 0x00717A70  ObjectTypeClass::loadTypeMember_5717A70  cls=ObjectTypeClass  sig=csp  renamed_refs=1  residual=- ====
int ObjectTypeClass::loadTypeMember_5717A70()
{
{
    return this->vtable2;
}
}

// ==== BACKFILL 0x00717A80  ObjectTypeClass::loadTypeMember_5717A80  cls=ObjectTypeClass  sig=csp  renamed_refs=1  residual=- ====
int ObjectTypeClass::loadTypeMember_5717A80(int a2)
{
{
    int result;
    result = a2;
    if ( a2 <= 0 )
    result = 1;
    this->vtable3 = result;
    return result;
}
}

// ==== BACKFILL 0x00717AA0  ObjectTypeClass::loadTypeMember_5717AA0  cls=ObjectTypeClass  sig=csp  renamed_refs=1  residual=- ====
int ObjectTypeClass::loadTypeMember_5717AA0()
{
{
    return this->vtable3;
}
}

// ==== BACKFILL 0x00717AB0  ObjectTypeClass::loadTypeMember_5717AB0  cls=ObjectTypeClass  sig=csp  renamed_refs=1  residual=- ====
int ObjectTypeClass::loadTypeMember_5717AB0(int a2)
{
{
    int result;
    result = a2;
    if ( a2 <= 0 )
    result = 1;
    this->vtable4 = result;
    return result;
}
}

// ==== BACKFILL 0x00717AD0  ObjectTypeClass::loadTypeMember_5717AD0  cls=ObjectTypeClass  sig=csp  renamed_refs=1  residual=- ====
int ObjectTypeClass::loadTypeMember_5717AD0()
{
{
    return this->vtable4;
}
}

// ==== BACKFILL 0x00717AE0  ObjectTypeClass::loadTypeMember_5717AE0  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
BOOL ObjectTypeClass::loadTypeMember_5717AE0()
{
{
    return *(void**)this == 0;
}
}

// ==== BACKFILL 0x00717AF0  TechnoTypeClass::Constructor  cls=TechnoTypeClass  sig=csp  renamed_refs=3  residual=IsAllocated ====
unsigned int * TechnoTypeClass::Constructor()
{
{
    this->vtable2 = 0;
    this->vtable3 = 0;
    this->vtable4 = 1;
    this->IsAllocated = 0;
    this->abstractFlags = 10;
    this->uniqueId = 0;
    *(void**)this = &vt_TypeList_ParticleSystemTypeClass_const;
    return this;
}
}

// ==== BACKFILL 0x00717B20  TechnoTypeClass::SaveLoadDataArray  cls=TechnoTypeClass  sig=csp  renamed_refs=3  residual=- ====
int TechnoTypeClass::SaveLoadDataArray(TechnoTypeClass * aP1)
{
{
    int v3;
    int result;
    int i;
    int v6;
    v3 = *(int *)aP1->vtable1;
    v6 = this->uniqueId;
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, int))(v3 + 16))(aP1, &v6, 4, 0);
    result = v6;
    for ( i = 0; i < v6; ++i )
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, int))(*(int *)aP1->vtable1 + 16))( aP1, this->vtable2 + 4 * i, 4, 0);
    result = v6;
  }
    return result;
}
}

// ==== BACKFILL 0x00717BC0  TechnoTypeClass::Constructor_0  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TechnoTypeClass::Constructor_0(ObjectTypeClass * aP1)
{
{
    *(void**)this = &vt_DynamicVectorClass_VoxelAnimTypeClass_const;
    return this;
}
}

// ==== BACKFILL 0x00717BE0  TechnoTypeClass::Constructor_1  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
VectorClass * TechnoTypeClass::Constructor_1(ObjectTypeClass * aP1)
{
{
    *(void**)this = &vt_DynamicVectorClass_BuildingTypeClass_const;
    return (VectorClass *)this;
}
}

// ==== BACKFILL 0x00717BF0  ObjectTypeClass::CheckFlag  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ObjectTypeClass::CheckFlag(ObjectTypeClass * aP1)
{
{
    *(void**)this = &vt_DynamicVectorClass_AnimTypeClass_const;
    return this;
}
}

// ==== BACKFILL 0x00717C70  TypeList::ParticleConstructor  cls=TypeList  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TypeList::ParticleConstructor(int a2, int a3)
{
{
    this->Items = 0;
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_ParticleSystemTypeClass_const;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = a3;
    }
    else
    {
    this->Items = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
    }
  }
    *(void**)this = &vt_DynamicVectorClass_ParticleSystemTypeClass_const;
    this->CapacityIncrement = 10;
    this->Count = 0;
    return this;
}
}

// ==== BACKFILL 0x00717CD0  TypeList::PushBack  cls=TypeList  sig=csp  renamed_refs=1  residual=- ====
char TypeList::PushBack(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->Capacity;
    if ( this->Count >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity(v3 + v4, 0) )
    return 0;
  }
    v6 = this->Count;
    v7 = this->Items;
    this->Count = v6 + 1;
    *(int *)(v7 + 4 * v6) = *(int *)aP1->vtable1;
    return 1;
}
}

// ==== BACKFILL 0x00717D20  VectorClass::CopyParticle  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * VectorClass::CopyParticle(DynamicVector * aP1)
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
    *(void**)this = &vt_VectorClass_ParticleSystemTypeClass_const;
    if ( this != (int *)aP1 )
  {
    VectorClass::Cleanup((int)this);
    v3 = aP1->field_8;
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
    *(int *)(this->Items + 4 * v6) = *(int *)(*(int *)&aP1->field_1[3] + 4 * v6);
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
    this->Count = aP1->field_10;
    this->CapacityIncrement = *(int *)aP1->__pad_14;
    *(void**)this = &vt_TypeList_ParticleSystemTypeClass_const;
    return this;
}
}

// ==== BACKFILL 0x00717DB0  TechnoTypeClass::RemoveItem  cls=TechnoTypeClass  sig=csp  renamed_refs=2  residual=- ====
char TechnoTypeClass::RemoveItem(int a2)
{
{
    int v2;
    int v3;
    int v4;
    v2 = this->uniqueId;
    v3 = a2;
    if ( a2 >= v2 )
    return 0;
    v4 = v2 - 1;
    this->uniqueId = v4;
    if ( a2 < v4 )
  {
    do
    {
    ++v3;
    *(int *)(this->vtable2 + 4 * v3 - 4) = *(int *)(this->vtable2 + 4 * v3);
    }
    while ( v3 < this->uniqueId );
  }
    return 1;
}
}

// ==== BACKFILL 0x00718080  JumpjetLocomotionClass::ShortFunc_718080  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::ShortFunc_718080(int a1)
{
{
    return *(char *)(a1 + 48) == 1;
}
}

// ==== BACKFILL 0x007180A0  JumpjetLocomotionClass::GetCoordinateConditional  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetCoordinateConditional(unsigned int * a1, unsigned int * a2)
{
{
    int *result;
    int v3;
    int v4;
    int v5;
    if ( (*(unsigned char (__stdcall **)(int *))(*a1 + 16))(a1) )
  {
    result = a2;
    v3 = *((int*)(a1) + 6);
    v4 = *((int*)(a1) + 7);
    v5 = *((int*)(a1) + 8);
  }
    else
  {
    v3 = *(int *)(*((int*)(a1) + 2) + 156);
    v4 = *(int *)(*((int*)(a1) + 2) + 160);
    v5 = *(int *)(*((int*)(a1) + 2) + 164);
    result = a2;
  }
    *a2 = v3;
    *((int*)(a2) + 1) = v4;
    *((int*)(a2) + 2) = v5;
    return result;
}
}

// ==== BACKFILL 0x00718230  JumpjetLocomotionClass::ResetMovementState  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::ResetMovementState(int a1)
{
{
    *(int *)(a1 + 24) = DataGlobal_B0EBF8;
    *(int *)(a1 + 28) = DataGlobal_B0EBFC;
    *(int *)(a1 + 32) = DataGlobal_B0EC00;
    *(char *)(a1 + 48) = 0;
    *(char *)(a1 + 50) = 0;
    return a1;
}
}

// ==== BACKFILL 0x007192C0  JumpjetLocomotionClass::UpdateFacingDirection_3  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::UpdateFacingDirection_3(int a1, int a2)
{
{
    return FacingClass::Update((char *)(*(int *)(a1 + 8) + 904), &a2);
}
}

// ==== BACKFILL 0x00719C60  JumpjetLocomotionClass::StubReturnZero_17  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_17(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1247291207;
  a2[1] = 298948665;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// ==== BACKFILL 0x00719CA0  JumpjetLocomotionClass::InitMultiFieldArray_0  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
HRESULT JumpjetLocomotionClass::InitMultiFieldArray_0(int * a1, int * pStm)
{
{
    IStream *v2;
    int v3;
    wchar_t *v4;
    int v5;
    LPVOID *v6;
    v2 = (IStream *)pStm;
    v3 = SwizzleManager::SaveLoad(a1, pStm);
    if ( v3 < 0 )
    return v3;
    if ( a1 )
  {
    *a1 = (int)(unsigned int)vt_LocomotionClass;
    *((int*)(a1) + 1) = (int)&vt_LocomotionClass;
    v4 = g_CurrentFrame;
    *((int*)(a1) + 17) = 0;
    *((int*)(a1) + 15) = (int)v4;
    *((int*)(a1) + 18) = 0;
    *a1 = (int)(unsigned int)vt_TeleportLocomotionClass;
    a1[1] = (unsigned int)vt_TeleportLocomotionClass;
    *((int*)(a1) + 6) = (int)&vt_TeleportLocomotionClass;
  }
    v2->__pad_0->Read(v2, &pStm, 1, 0);
    if ( !(char)pStm )
    return v3;
    v5 = *((int*)(a1) + 18);
    v6 = (LPVOID *)(a1 + 18);
    if ( v5 )
    (*(void (__stdcall **)(int))(*(int *)(v5) + 8))(v5);
    *v6 = 0;
    return OleLoadFromStream(v2, &IID_ILocomotion, v6);
}
}

// ==== BACKFILL 0x00719D40  JumpjetLocomotionClass::CheckWindowsErrorWrapper_2  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
HRESULT JumpjetLocomotionClass::CheckWindowsErrorWrapper_2(int * a1, int * pPStm, int a3)
{
{
    IStream *v3;
    int *v4;
    int IPersistStream;
    int v6;
    int (__stdcall ***v7)(int, void *, int **);
    int v8;
    int *v9;
    HRESULT v10;
    int v12;
    v3 = (IStream *)pPStm;
    v4 = a1;
    IPersistStream = LoadIPersistStream(a1, pPStm, a3);
    if ( IPersistStream < 0 )
    return IPersistStream;
    if ( !v4[18] )
  {
    v12 = *(int *)v3->__pad_0;
    LOBYTE(a3) = 0;
    (*(void (__stdcall **)(IStream *, int *, int, int))(v12 + 16))(v3, &a3, 1, 0);
    return IPersistStream;
  }
    v6 = *(int *)v3->__pad_0;
    LOBYTE(a3) = 1;
    (*(void (__stdcall **)(IStream *, int *, int, int))(v6 + 16))(v3, &a3, 1, 0);
    v7 = (int (__stdcall ***)(int, void *, int **))v4[18];
    pPStm = 0;
    if ( v7 )
  {
    v8 = (**v7)(v7, &DataGlobal_820270, &a1);
    if ( v8 >= 0 )
    {
    v9 = a1;
    if ( pPStm )
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm);
    pPStm = v9;
    }
    else
    {
    Function::Method_4B4D60((int *)&pPStm);
    pPStm = 0;
    }
    if ( v8 < 0 && v8 != -2147467262 )
    WinAPI::Wrapper(v8);
  }
    v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3);
    if ( pPStm )
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm);
    return v10;
}
}

// ==== BACKFILL 0x00719E20  JumpjetLocomotionClass::SmallStub_719E20  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_719E20(int a1)
{
return 2;
}

// ==== BACKFILL 0x00719E30  JumpjetLocomotionClass::UpdateAltitude  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::UpdateAltitude(int a1, const void * a2, int * a3)
{
{
    int result;
    int v4;
    result = LocomotionClass::QueryInterface(a1, a2, a3);
    if ( result == -2147467262 )
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) )
    {
    if ( a1 )
    v4 = a1 + 24;
    else
    v4 = 0;
    *a3 = v4;
    }
    if ( *a3 )
    {
    (*(void (__stdcall **)(int))(*(int *)(a1) + 4))(a1);
    return 0;
    }
    else
    {
    return -2147467262;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00719E90  JumpjetLocomotionClass::StubReturnZero_18  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_18(int a1, int a2)
{
{
    if ( !a2 )
    return -2147467261;
    if ( *(int *)(a1 + 48) )
    return -2147467259;
    *(int *)(a1 + 48) = a2;
    (*(void (__stdcall **)(int))(*(int *)(a2) + 4))(a2);
    return 0;
}
}

// ==== BACKFILL 0x00719EE0  JumpjetLocomotionClass::StubReturnZero_19  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_19(int a1, unsigned int * a2)
{
{
    int v3;
    int v4;
    if ( !a2 )
    return -2147467261;
    v3 = *(int *)(a1 - 12);
    if ( v3 )
  {
    *(int *)(v3 + 1064) = 0;
    *(int *)(*(int *)(a1 - 12) + 1068) = 0;
  }
    v4 = *(int *)(a1 + 48);
    if ( !v4 )
    return 1;
    *a2 = v4;
    *(int *)(a1 + 48) = 0;
    return 0;
}
}

// ==== BACKFILL 0x00719F30  JumpjetLocomotionClass::StubReturnTrue_7  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::StubReturnTrue_7(int a1)
{
{
    int v1;
    bool result;
    result = 0;
    if ( !(*(unsigned char (__stdcall **)(int))(*(int *)(a1 - 20) + 16))(a1 - 20) )
  {
    if ( *(int *)(a1 + 48) )
    {
    if ( !*(char *)(a1 + 29) )
      {
    v1 = *(int *)(a1 - 12);
    if ( !*(char *)(v1 + 636) && !*(int *)(a1 + 32) && !*(char *)(v1 + 1709) )
    return 1;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00719F80  JumpjetLocomotionClass::LoadLocomotionFromStream_3  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::LoadLocomotionFromStream_3(unsigned int * a1, unsigned int * a2)
{
{
    int *v2;
    int *v4;
    int v5;
    int v6;
    int v7;
    int *v8;
    int *v9;
    v2 = a2;
    if ( !a2 )
    return -2147467261;
    v4 = a1 + 12;
    if ( *((int*)(a1) + 12) )
  {
    a1 = 0;
    v5 = StreamClass::Set2(&a1, v4);
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    if ( !a1 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(int *, int *))(*a1 + 12))(a1, v2);
    if ( a1 )
    {
    (*(void (__stdcall **)(int *))(*a1 + 8))(a1);
    return v6;
    }
  }
    else
  {
    a2 = 0;
    if ( a1 == (int *)24 )
    return -2147467259;
    v7 = (*(int (__stdcall **)(int *, void *, int **))*(a1 - 6))(a1 - 6, &DataGlobal_818858, &a1);
    if ( v7 >= 0 )
    {
    v9 = a1;
    ComPtr::Release_Alt((int *)&a2);
    v8 = v9;
    a2 = v9;
    }
    else
    {
    ComPtr::Release_Alt((int *)&a2);
    v8 = 0;
    a2 = 0;
    }
    if ( v7 < 0 && v7 != -2147467262 )
    WinAPI::Wrapper(v7);
    if ( !v8 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(int *, int *))(*v8 + 12))(v8, v2);
    if ( a2 )
    (*(void (__stdcall **)(int *))(*a2 + 8))(a2);
  }
    return v6;
}
}

// ==== BACKFILL 0x0071A090  JumpjetLocomotionClass::DispatchVirtualCall_7  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::DispatchVirtualCall_7(unsigned int * a1, int a2)
{
{
    int result;
    int *v3;
    int v4;
    int v5[3];
    char v6[12];
    result = a2;
    if ( !a2 )
  {
    v3 = (int *)(*(int (__stdcall **)(int *, char *))(*a1 + 24))(a1, v6);
    v5[0] = *v3;
    v5[1] = v3[1];
    v4 = *((int*)(a1) + 2);
    v5[2] = v3[2];
    return (*(int (__thiscall **)(int, int *))(*(int *)(v4) + 244))(v4, v5);
  }
    return result;
}
}

// ==== BACKFILL 0x0071A0E0  JumpjetLocomotionClass::IUnknownAddRef  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::IUnknownAddRef(int a1)
{
{
    return COM::AddRef(a1);
}
}

// ==== BACKFILL 0x0071A0F0  JumpjetLocomotionClass::IUnknownRelease  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::IUnknownRelease(volatile LONG * a1)
{
{
    return COM::ReleaseRef(a1);
}
}

// ==== BACKFILL 0x0071A100  JumpjetLocomotionClass::ShortFunc_71A100  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
BOOL JumpjetLocomotionClass::ShortFunc_71A100(int a1)
{
{
    return *(int *)(a1 + 48) != 0;
}
}

// ==== BACKFILL 0x0071A120  JumpjetLocomotionClass::SmallStub_71A120  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_71A120()
{
return 76;
}

// ==== BACKFILL 0x0071A130  JumpjetLocomotionClass::ConstructLocomotor  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
TeleportLocomotionClass * JumpjetLocomotionClass::ConstructLocomotor(char a2)
{
{
    ILocomotion *v3;
    v3 = *(this + 18);
    if ( v3 )
    (*(void (__stdcall **)(ILocomotion *))(*(int *)(v3) + 8))(v3);
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TeleportLocomotionClass *)this;
}
}

// ==== BACKFILL 0x0071A160  JumpjetLocomotionClass::SmallStub_71A160  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_71A160(int a1, const void * a2, int * a3)
{
{
    return JumpjetLocomotionClass::UpdateAltitude(a1 - 4, a2, a3);
}
}

// ==== BACKFILL 0x0071A170  JumpjetLocomotionClass::SmallStub_71A170  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_71A170(int a1)
{
{
    return JumpjetLocomotionClass::IUnknownAddRef(a1 - 4);
}
}

// ==== BACKFILL 0x0071A180  JumpjetLocomotionClass::SmallStub_71A180  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_71A180(int a1)
{
{
    return JumpjetLocomotionClass::IUnknownRelease((volatile LONG *)(a1 - 4));
}
}

// ==== BACKFILL 0x0071A190  JumpjetLocomotionClass::SmallStub_71A190  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_71A190(int a1, const void * a2, int * a3)
{
{
    return JumpjetLocomotionClass::UpdateAltitude(a1 - 24, a2, a3);
}
}

// ==== BACKFILL 0x0071A1A0  JumpjetLocomotionClass::SmallStub_71A1A0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_71A1A0(int a1)
{
{
    return JumpjetLocomotionClass::IUnknownAddRef(a1 - 24);
}
}

// ==== BACKFILL 0x0071A1B0  JumpjetLocomotionClass::SmallStub_71A1B0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_71A1B0(int a1)
{
{
    return JumpjetLocomotionClass::IUnknownRelease((volatile LONG *)(a1 - 24));
}
}

// ==== BACKFILL 0x0071A650  TemporalClass::SetTarget  cls=TemporalClass  sig=csp  renamed_refs=0  residual=- ====
int TemporalClass::SetTarget(AbstractClass * aP1)
{
{
    return AbstractClass::ProcessPower((#378 *)this);
}
}

// ==== BACKFILL 0x0071A660  TemporalClass::LoadTemporal  cls=TemporalClass  sig=csp  renamed_refs=0  residual=- ====
int TemporalClass::LoadTemporal(AbstractClass * aP0, int aP1)
{
{
    AbstractClass *Prefix_0;
    Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( (int)Prefix_0 >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TemporalClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TemporalClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TemporalClass;
    *(int *)&aP0->__pad_0[12] = &vt_TemporalClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].referenceCount);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].NeedsSaveOrLink);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].abstractFlags);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].nextArrayIndex);
  }
    return (int)Prefix_0->__pad_0;
}
}

// ==== BACKFILL 0x0071A700  TemporalClass::SaveTemporal  cls=TemporalClass  sig=csp  renamed_refs=0  residual=- ====
int TemporalClass::SaveTemporal(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}

// ==== BACKFILL 0x0071A720  TemporalClass::ddtor  cls=TemporalClass  sig=csp  renamed_refs=0  residual=- ====
int TemporalClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1810815964;
  a2[1] = 299099139;
  a2[2] = 1342205582;
  a2[3] = -72177148;
  return 0;
}

// ==== BACKFILL 0x0071AB60  ObjectClass::UnlinkFromFactory  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void* ObjectClass::UnlinkFromFactory(void* a2) {
{
    int *result;
    int *v4;
    result = a2;
    v4 = (int *)this->objectTypeFlags;
    if ( a2 == v4 )
  {
    result = (int *)this->owningHouseIndex;
    if ( result )
    {
    result = FactoryClass::CompleteItem(this);
    this->owningHouseIndex = 0;
    }
  }
    else if ( a2 == (int *)this->owningHouseIndex )
  {
    this->owningHouseIndex = 0;
    this->TiberiumClass_field_F8 = 0;
    this->TiberiumClass_field_F4 = 0;
    this->ambientSoundController = 0;
    this->attachedBomb = 0;
    if ( v4 )
    return (int *)(*(int (__thiscall **)(int *, int, int))(*v4 + 1156))(v4, 0, 1);
  }
    return result;
}
} } }

// ==== BACKFILL 0x0071AD40  TriggerClass::UnlinkTags  cls=TriggerClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TriggerClass::UnlinkTags() {
{
      int v2;
      int v3;
      int result;

      v2 = this->nextTrigger;
      if ( v2 )
      {
        *(_BYTE *)(v2 + 624) = 0;
        *(_DWORD *)(this->nextTrigger + 632) = 0;
        this->nextTrigger = 0;
      }
      v3 = this->enabled;
      if ( v3 )
      {
        if ( *(_DWORD *)(v3 + 64) == this )
          *(_DWORD *)(v3 + 64) = 0;
        TagClass::Unlink(*(int **)(this + 68));
        this->enabled = 0;
      }
      result = this->occuredEvents;
      if ( result )
      {
        if ( *(_DWORD *)(result + 68) == this )
          *(_DWORD *)(result + 68) = 0;
        result = TagClass::Unlink(*(int **)(this + 64));
        this->occuredEvents = 0;
      }
      this->enabled = 0;
      this->occuredEvents = 0;
      this->q03C = 0;
      this->q038 = 0;
      return result;
}
} }

// ==== BACKFILL 0x0071AE50  TemporalClass::CanWarpTarget  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char TemporalClass::CanWarpTarget(unsigned int * a1)
{
{
    int Member;
    int *v3;
    int *v4;
    int v5[3];
    if ( !a1 )
    return 0;
    if ( !*(char *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 3386) )
    return 0;
    if ( (*(unsigned char (__thiscall **)(int *))(*a1 + 352))(a1) )
    return 0;
    if ( (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 1 )
  {
    Member = Team::GetMember(a1, 0);
    v3 = (int *)Member;
    if ( Member )
    {
    if ( (*(int (__thiscall **)(int))(*(int *)(Member) + 44))(Member) == 6 )
      {
    if ( *(char *)(v3[328] + 5821) )
        {
    v5[0] = *((int*)(a1) + 39);
    v5[1] = *((int*)(a1) + 40);
    v5[2] = *((int*)(a1) + 41);
    v4 = Coord::To_Cell(&DataGlobal_87F7E8, v5);
    if ( Cell::IsBridge(v4) == v3 )
    return 0;
        }
      }
    }
  }
    return 1;
}
}

// ==== BACKFILL 0x0071B190  TemporalClass::StubReturn80  cls=TemporalClass  sig=csp  renamed_refs=0  residual=- ====
int TemporalClass::StubReturn80() const { return 80; }

// ==== BACKFILL 0x0071B1A0  TemporalClass::StubReturn70  cls=TemporalClass  sig=csp  renamed_refs=0  residual=- ====
int TemporalClass::StubReturn70() const { return 70; }

// ==== BACKFILL 0x0071B7B0  TerrainClass::CleanupMembers  cls=TerrainClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int TerrainClass::CleanupMembers() {
{
      int v2;
      int v3;
      int Vtable3;
      int v5;
      int v6;
      int v7;
      int v8;
      signed int v9;
      size_t i;
      _DWORD *v11;
      int v13[2];

      v2 = this + 4;
      *(_DWORD *)this = &TerrainClass::`vftable';
      *(_DWORD *)(this + 8) = &TerrainClass::`vftable';
      *(_DWORD *)(this + 12) = &vt_TerrainClass;
      this->vtable2 = &off_7F5200;
      AbstractClass::AnnounceExpiredPointer((void **)this, 1);
      v13[0] = this;
      v3 = (*(int (__thiscall **)(int *, int *))(DataGlobal_A8E988 + 16))(&DataGlobal_A8E988, v13);
      if ( v3 != -1 && v3 < DataGlobal_A8E998 && v3 < --DataGlobal_A8E998 )
      {
        do
        {
          ++v3;
          *((_DWORD *)DataGlobal_A8E98C + v3 - 1) = *((_DWORD *)DataGlobal_A8E98C + v3);
        }
        while ( v3 < DataGlobal_A8E998 );
      }
      if ( g_WTFMode && this->q0C8 )
      {
        this->isAliveFlag = 1;
        TerrainClass::ApplyCellModifications((#374 *)this);
      }
      Vtable3 = AbstractClass::GetVtable3(v2);
      v5 = g_BuildingLoadQueue_Count;
      v6 = Vtable3;
      if ( g_BuildingLoadQueue_Count )
      {
        if ( !g_BuildingLoadQueue_Dirty )
        {
          qsort(g_BuildingLoadQueue_Array, g_BuildingLoadQueue_Count, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
          v5 = g_BuildingLoadQueue_Count;
          g_BuildingLoadQueue_Active = 0;
          g_BuildingLoadQueue_Dirty = 1;
        }
        v13[0] = v6;
        v7 = BinaryArraySearch((int)g_BuildingLoadQueue_Array, v5, v13);
        if ( v7 )
        {
          v8 = (v7 - (int)g_BuildingLoadQueue_Array) >> 3;
          if ( v8 != -1 )
          {
            v9 = v8 + 1;
            for ( i = g_BuildingLoadQueue_Count; v9 < (int)g_BuildingLoadQueue_Count; i = g_BuildingLoadQueue_Count )
            {
              v11 = (_DWORD *)((char *)g_BuildingLoadQueue_Array + 8 * v9++);
              *(v11 - 2) = *v11;
              *(v11 - 1) = v11[1];
            }
            g_BuildingLoadQueue_Count = i - 1;
            *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count) = 0;
            *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count + 1) = 0;
            g_BuildingLoadQueue_Active = 0;
          }
        }
      }
      return ObjectClass::Dtor((_DWORD *)this);
}
} }

// ==== BACKFILL 0x0071C070  TerrainClass::ClearCellFlags  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* TerrainClass::ClearCellFlags(void* a1) {
{
      int v2;
      _DWORD *v3;
      _BYTE *result;

      if ( *((_DWORD *)g_ScenarioClass_Instance + 1174) == 1 )
        v2 = *(_DWORD *)(this->q0C8 + 684);
      else
        v2 = *(_DWORD *)(this->q0C8 + 680);
      v3 = a2;
      LOWORD(a2) = *a2 / 256;
      HIWORD(a2) = v3[1] / 256;
      result = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a2);
      if ( (v2 & 1) != 0 )
        result[292] &= ~4u;
      if ( (v2 & 2) != 0 )
        result[292] &= ~8u;
      if ( (v2 & 4) != 0 )
        result[292] &= ~0x10u;
      return result;
}
} }

// ==== BACKFILL 0x0071C110  TerrainClass::SetOccupyBit_PassableTerrain  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* TerrainClass::SetOccupyBit_PassableTerrain(void* a1) {
{
      int v2;
      _DWORD *v3;
      _BYTE *result;

      if ( *((_DWORD *)g_ScenarioClass_Instance + 1174) == 1 )
        v2 = *(_DWORD *)(this->q0C8 + 684);
      else
        v2 = *(_DWORD *)(this->q0C8 + 680);
      v3 = a2;
      LOWORD(a2) = *a2 / 256;
      HIWORD(a2) = v3[1] / 256;
      result = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a2);
      if ( (v2 & 1) != 0 )
        result[292] |= 4u;
      if ( (v2 & 2) != 0 )
        result[292] |= 8u;
      if ( (v2 & 4) != 0 )
        result[292] |= 0x10u;
      return result;
}
} }

// ==== BACKFILL 0x0071C5B0  TerrainClass::PlayAmbientAnimation  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TerrainClass::PlayAmbientAnimation() {
{
      int v2;
      char v3;
      void **v4;
      int *v5;
      int v6;
      int v7;
      int v8;
      AnimClass *v9;
      AnimClass *v10;
      CoordStruct aP2;
      char v13[12];

      if ( this->__pad_A8[37] )
        return 0;
      if ( this->__pad_A8[36] )
        return 0;
      v2 = *(_DWORD *)&this->__pad_A8[32];
      if ( *(_DWORD *)(v2 + 156) != 6 || *(_BYTE *)(v2 + 689) )
        return 0;
      v3 = Random::State(&g_ScenarioClass_Instance->random[1]);
      v4 = (void **)__2_YAPAXI_Z(0x1C8u);
      if ( v4 )
      {
        v5 = (int *)(*(int (__thiscall **)(IUnknown *, char *))(this->field_0 + 72))(this, v13);
        v6 = *v5;
        v7 = v5[1];
        v8 = v5[2];
        aP2.Y = v7;
        aP2.X = v6;
        aP2.Z = v8 + 80;
        v9 = AnimClass::ctor(
               v4,
               *(CoordStruct **)(*(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 2964) + 4 * (v3 & 1)),
               &aP2,
               0,
               (CoordStruct *)0xFF,
               (void *)0x600,
               0,
               0);
        v10 = v9;
        if ( v9 )
          BuildingClass::AimTurret(v9, this);
      }
      else
      {
        v10 = 0;
      }
      v10->field_100 -= 20;
      this->__pad_A8[36] = 1;
      return 1;
}
} }

// ==== BACKFILL 0x0071C6B0  TerrainClass::ProcessTick  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TerrainClass::ProcessTick() {
{
      wchar_t *v2;
      int v4;

      LOBYTE(v2) = this->q0CC;
      if ( (_BYTE)v2 )
      {
        LOBYTE(v2) = this->q0CD;
        this->q0CC = 0;
        if ( !(_BYTE)v2 )
        {
          v2 = (wchar_t *)this->health;
          if ( !v2 )
          {
            this->vt55(1);
            this->vt73(2);
            LOBYTE(v2) = this->q0CD;
            if ( !(_BYTE)v2 )
            {
              this->q0CD = 1;
              v2 = g_CurrentFrame;
              this->q0C0 = 2;
              this->Type = v2;
              this->IsBurning = v4;
              this->height = 2;
              this->Animation = 0;
              LOBYTE(v2) = v4;
            }
          }
        }
      }
      return (char)v2;
}
} }

// ==== BACKFILL 0x0071C730  TerrainClass::Update  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TerrainClass::Update() {
{
      int v2;
      int v3;
      int v4;
      wchar_t *v5;
      int result;
      int v7;
      int v8;
      _BYTE *v9;
      int v10;
      wchar_t *v11;
      wchar_t **v12;
      int *v13;
      int v14;
      wchar_t *v15;
      int v16;

      ObjectClass::DetectCloaked((#374 *)this);
      if ( *(_BYTE *)(this->q0C8 + 691) )
      {
        if ( !this->q0C0 )
        {
          v2 = Random::State((_DWORD *)g_ScenarioClass_Instance + 134);
          v3 = this->q0C8;
          if ( (double)((int)abs32(v2) % 1000000) * 0.000001 < *(float *)(v3 + 676) )
          {
            this->Animation = 0;
            v4 = *(_DWORD *)(v3 + 672);
            v5 = g_CurrentFrame;
            this->q0C0 = v4;
            this->Type = v5;
            this->IsBurning = v15;
            this->height = v4;
          }
        }
      }
      result = CDTimerClass::TimeRemaining((int *)(this + 180));
      if ( result || (result = this->q0C0) == 0 )
      {
        this->q0B0 = 0;
      }
      else
      {
        v7 = this->q0C4 + this->Animation;
        this->q0B0 = 1;
        this->Animation = v7;
        this->Type = g_CurrentFrame;
        this->IsBurning = v15;
        this->height = result;
        if ( this->q0CD
          && (v8 = this->Animation,
              result = *(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 200) + 156))(this->q0C8)
                                  + 6)
                     - 1,
              v8 == result) )
        {
          return this->vt62();
        }
        else
        {
          v9 = *(_BYTE **)(this + 200);
          if ( v9[689] && v9[691] )
          {
            v10 = this->Animation;
            result = *(__int16 *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 156))(v9) + 6) / 2;
            if ( v10 == result )
            {
              this->Animation = 0;
              v11 = g_CurrentFrame;
              v12 = (wchar_t **)(this + 180);
              this->q0C0 = 0;
              v13 = (int *)(this + 156);
              *v12 = v11;
              v12[1] = v15;
              v12[2] = 0;
              v14 = *v13;
              v15 = (wchar_t *)v13[1];
              v16 = v13[2];
              Coord::To_Cell(&DataGlobal_87F7E8, &v14);
              return CellClass::SpawnTiberiumTree(1);
            }
          }
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x0071C8E0  sub_71C8E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_71C8E0::sub_71C8E0()
{
{
    char result;
    int v2;
    result = (unsigned char)this->M205;
    if ( !result )
  {
    this->M205 = 1;
    this->M180 = g_CurrentFrame;
    this->M192 = 2;
    this->M184 = v2;
    this->M188 = 2;
    this->M172 = 0;
    return v2;
  }
    return result;
}
}

// ==== BACKFILL 0x0071C930  TerrainClass::ApplyCellModifications  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TerrainClass::ApplyCellModifications() {
{
      int v2;
      int v3;
      int v4;
      __int16 v5;
      _BYTE *v6;
      _DWORD *v7;
      char v8;
      void *v9;
      int v11;
      int v12;
      int v13;
      _DWORD v14[3];

      if ( !this->inLimbo )
      {
        v2 = *(_DWORD *)this->vt110(&v13);
        v3 = 0;
        v12 = v2;
        do
        {
          v4 = v3 & 7;
          v5 = LOWORD(Direction_X_Offsets[v4]) + v2;
          LOWORD(v4) = HIWORD(Direction_X_Offsets[v4]);
          LOWORD(v12) = v5;
          HIWORD(v12) = HIWORD(v2) + v4;
          v13 = v12;
          v6 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v13);
          ++v3;
          --v6[290];
        }
        while ( v3 < 8 );
        v14[0] = this->location;
        v14[1] = this->q0A0;
        v14[2] = this->q0A4;
        v7 = Coord::To_Cell(&DataGlobal_87F7E8, v14);
        v7[73] &= ~0x40u;
      }
      v11 = *(_DWORD *)this->vt110(&v13);
      v8 = ObjectClass::Undeploy(this);
      v9 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v11);
      House::AnnounceUpgrade((int)v9, -1);
      if ( !g_IKnowWhatImDoing )
      {
        Cell::SetRadar(&DataGlobal_87F7E8.field_0, (__int16 *)&v11);
        Radar::Update(&DataGlobal_87F7E8, (__int16 *)&v11);
        BuildingClass::AddUpgrade((int)&DataGlobal_87F7E8, (int)&v11);
      }
      return v8;
}
} }

// ==== BACKFILL 0x0071CA70  CCINIClass::LoadTypeFromINI  cls=CCINIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CCINIClass::LoadTypeFromINI() {
{
    int result;
    CCINIClass *v3;
    unsigned char *StringByIndex;
    TerrainTypeClass *v5;
    int v6;
    int v7;
    void **v8;
    int v9;
    CCINIClass *v10;
    int v11;
    int i;
    INIClass Destination[2];
    INIClass::ResetSection(this);
    result = INIClass::GetKeyCount(this, (INIClass *)aTerrain);
    v3 = 0;
    for ( i = result; (int)v3 < i; v3 = (CCINIClass *)((char *)(v3) + 1) )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(this, (CCINIClass *)aTerrain, v3);
    if ( INIClass::GetString( (unsigned char ***)this, (INIClass *)aTerrain, StringByIndex, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], Destination, 128) )
    {
    v5 = TerrainTypeClass::FindOrCreate(Destination[0].__pad_0);
    }
    else
    {
    v5 = 0;
    }
    if ( *(int *)&g_NetworkPlayerBuffer.__pad_14B0[656] < 4 )
    {
    v7 = atoi((const char *)StringByIndex);
    LOWORD(v11) = v7 % 128;
    HIWORD(v11) = v7 / 128;
    v9 = v11;
    }
    else
    {
    v6 = atoi((const char *)StringByIndex);
    LOWORD(v10) = v6 % 1000;
    HIWORD(v10) = v6 / 1000;
    v9 = (int)v10;
    }
    if ( v5 )
    {
    v8 = (void **)__2_YAPAXI_Z(0xE0u);
    if ( v8 )
    TerrainClass::Construct(v8, v5, (short *)&v9);
    }
    result = i;
  }
    return result;
}
} }

// ==== BACKFILL 0x0071CB90  ObjectTypeClass::ReadDestroyAnim  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::ReadDestroyAnim()
{
{
    int result;
    int i;
    int v4;
    int v5;
    char v6[4];
    char Buffer[12];
    INIClass::ClearSection((int)this, (INIClass *)aTerrain, 0);
    result = *(int *)&g_NetworkPlayerBuffer.__pad_1258[260];
    for ( i = 0; i < *(int *)&g_NetworkPlayerBuffer.__pad_1258[260]; ++i )
  {
    v4 = *(int *)(*(int *)&g_NetworkPlayerBuffer.__pad_1258[248] + 4 * i);
    if ( v4 && !*(char *)(v4 + 129) )
    {
    if ( *(char *)(v4 + 144) )
      {
    v5 = *(int *)(*(int (__thiscall **)(int, char *))(*(int *)(v4) + 440))(v4, v6);
    sprintf(Buffer, g_Str_Trace__d, (short)v5 + 1000 * SHIWORD(v5));
    INIClass::SetString(this, (INIClass *)aTerrain, (INIClass *)Buffer, (INIClass *)(*(int *)(v4 + 200) + 36));
      }
    }
    result = *(int *)&g_NetworkPlayerBuffer.__pad_1258[260];
  }
    return result;
}
}

// ==== BACKFILL 0x0071CC50  TerrainClass::CheckSpawnConditions  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TerrainClass::CheckSpawnConditions(void* a1, int a2, int a3) {
{
    int *v5;
    int v6;
    int v7;
    int *v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int *v15;
    int v16;
    int v18;
    int v19;
    int v20[4];
    if ( !g_ArmageddonMode && g_hWnd && (!a3 && !this->needsRedraw || !this->isOnMap || this->inLimbo) )
    return 0;
    this->needsRedraw = 0;
    v5 = ClipRectIntersection(v20, a2, &DSurface_ViewBounds, 0, 0);
    *a2 = *v5;
    *((int*)(a2) + 1) = v5[1];
    *((int*)(a2) + 2) = v5[2];
    *((int*)(a2) + 3) = v5[3];
    v6 = DSurface_ViewBounds;
    v7 = g_Map_VisibleRect;
    v8 = (int *)this->Export(v20);
    v9 = v8[1];
    v10 = v6 + *v8;
    v11 = v8[2];
    v12 = v8[3];
    v13 = v9 + v7;
    if ( *a2 >= v10 + v11 )
    return 0;
    v14 = *((int*)(a2) + 1);
    if ( v14 >= v13 + v12 || *a2 + *((int*)(a2) + 2) <= v10 || v14 + *((int*)(a2) + 3) <= v13 )
    return 0;
    v15 = (int *)this->GetCoordsThunk2(v20);
    Coord::To_Screen(g_TacticalClass_Instance, v15, &v18);
    if ( *a2 > DSurface_ViewBounds )
    v18 += DSurface_ViewBounds - *a2;
    v16 = *((int*)(a2) + 1);
    if ( v16 > g_Map_VisibleRect )
    v19 += g_Map_VisibleRect - v16;
    this->Draw(&v18, a2);
    return 1;
}
} }

// ==== BACKFILL 0x0071CF30  TerrainClass::CheckFrameUpdate  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainClass::CheckFrameUpdate(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}

// ==== BACKFILL 0x0071CF50  TerrainClass::PowerDrainUpdate  cls=TerrainClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int TerrainClass::PowerDrainUpdate(void* a1) {
{
      int v3;
      int v4;
      int v5;
      int v6;

      HouseClass::ProcessPower((#374 *)this);
      v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 200) + 44))(this->q0C8);
      Power::TimerProcess(v3);
      v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(this->q0C8 + 4) + 16))(this->q0C8 + 4);
      Power::TimerProcess(v4);
      LOBYTE(v5) = this->q0CC;
      v6 = Power::FlagProcess(a2, v5);
      LOBYTE(v6) = this->q0CD;
      Power::FlagProcess(a2, v6);
      Power::TimerProcess(this->TerrainClass_field_rect_D0);
      return Power::TimerProcess(this->q0D4);
}
} }

// ==== BACKFILL 0x0071CFD0  TerrainClass::ProcessFrameStep  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TerrainClass::ProcessFrameStep(int a1, int a2) {
{
      int result;

      result = Object::Unlink((#374 *)this);
      if ( this->q0C8 == a2 )
        this->q0C8 = 0;
      return result;
}
} }

// ==== BACKFILL 0x0071D160  TerrainClass::Export  cls=TerrainClass  sig=csp  renamed_refs=2  residual=- ====
namespace gamemd { void* TerrainClass::Export(void* a1) {
{
      __int16 *HasC4;
      int *FoundationSize;
      int v5;
      int v6;
      int v7;
      int v8;
      int *v9;
      int v10;
      int v11;
      int v12;
      int v13;
      int v14;
      int v15;
      int v16;
      int v17;
      unsigned int v18;
      unsigned int v19;
      int v20;
      int v21;
      int v22;
      int v23;
      int v24;
      int v25;
      _DWORD v26[4];

      v18 = this->q0D8 - (unsigned int)g_TacticalClass_Instance[44].vtable1;
      v19 = this->q0DC - (unsigned int)g_TacticalClass_Instance[45].vtable1;
      HasC4 = (__int16 *)ObjectClass::HasC4((#374 *)this);
      if ( HasC4 )
      {
        FoundationSize = Building::GetFoundationSize(&v20, 0);
        v5 = *FoundationSize;
        v24 = FoundationSize[1];
        v6 = FoundationSize[2];
        v7 = FoundationSize[3];
        v8 = HasC4[3];
        v25 = v7;
        v9 = Building::GetFoundationSize(v26, v8 / 2);
        v10 = *v9;
        v21 = v9[1];
        v11 = v9[2];
        v22 = v11;
        v23 = v9[3];
        v16 = HasC4[1];
        v17 = HasC4[2];
        if ( v6 <= 0 || v25 <= 0 )
        {
          v13 = *v9;
          v12 = v9[1];
          v6 = v9[2];
          v15 = v9[3];
        }
        else if ( v11 <= 0 || v23 <= 0 )
        {
          v12 = v24;
          v13 = v5;
          v15 = v25;
        }
        else
        {
          v12 = v24;
          v13 = v5;
          v14 = v25;
          if ( v5 > v10 )
          {
            v13 = v10;
            v6 += v5 - v10;
          }
          if ( v24 > v21 )
          {
            v14 = v24 - v21 + v25;
            v12 = v21;
          }
          if ( v6 + v13 < v10 + v22 )
            v6 = v22 - v13 + v10 + 1;
          if ( v14 + v12 < v21 + v23 )
            v14 = v21 - v12 + v23 + 1;
          v15 = v14;
        }
        *a2 = v18 + v13 - v16 / 2;
        a2[1] = v19 + v12 - v17 / 2;
        a2[2] = v6;
        a2[3] = v15;
        return a2;
      }
      else
      {
        *a2 = DataGlobal_B0ECE0;
        a2[1] = DataGlobal_B0ECE4;
        a2[2] = DataGlobal_B0ECE8;
        a2[3] = DataGlobal_B0ECEC;
        return a2;
      }
}
} }

// ==== BACKFILL 0x0071D2F0  TerrainClass::MissionStubReturnZero  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainClass::MissionStubReturnZero()
{
return 224;
}

// ==== BACKFILL 0x0071D300  TerrainClass::MissionStubReturnZero2  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainClass::MissionStubReturnZero2()
{
return 36;
}

// ==== BACKFILL 0x0071D310  TerrainClass::MissionStubReturnZero3  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainClass::MissionStubReturnZero3(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448654;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// ==== BACKFILL 0x0071D350  TerrainClass::MissionStubReturnZero4  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* TerrainClass::MissionStubReturnZero4(int a2) {
{
    TerrainClass::CleanupMembers((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TerrainClass *)this;
}
} }

// ==== BACKFILL 0x0071DD80  Terrain::LookupByName  cls=Terrain  sig=csp  renamed_refs=0  residual=- ====
int Terrain::LookupByName()
{
{
    int v2;
    if ( !this )
    return -1;
    v2 = 0;
    if ( *(int *)&HouseClass_Player.__pad_5568[20596] <= 0 )
    return -1;
    while ( _strcmpi(this, (const void *)(*(int *)(*(int *)&HouseClass_Player.__pad_5568[20584] + 4 * v2) + 36)) )
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[20596] )
    return -1;
  }
    return v2;
}
}

// ==== BACKFILL 0x0071DDD0  TerrainTypeClass::GetHeight  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
bool TerrainTypeClass::GetHeight(TerrainClass * aP2, int a3)
{
{
    void **v4;
    v4 = (void **)__2_YAPAXI_Z(0xE0u);
    return v4 && TerrainClass::Construct(v4, this, aP2);
}
}

// ==== BACKFILL 0x0071DE10  TerrainTypeClass::GetTileIndex  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
TerrainClass * TerrainTypeClass::GetTileIndex(int a2)
{
{
    void **v3;
    v3 = (void **)__2_YAPAXI_Z(0xE0u);
    if ( v3 )
    return TerrainClass::Construct(v3, this, (TerrainClass *)&DataGlobal_B05488.__pad_579C[16728]);
    else
    return 0;
}
}

// ==== BACKFILL 0x0071E0D0  TerrainTypeClass::GetWidth  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TerrainTypeClass::GetWidth(unsigned int * a1, int * a2)
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

// ==== BACKFILL 0x0071E140  TerrainTypeClass::PowerDrainUpdate  cls=TerrainTypeClass  sig=csp  renamed_refs=8  residual=- ====
int TerrainTypeClass::PowerDrainUpdate(int * a2)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(this->Foundation);
    LOBYTE(v3) = this->IsVeinhole;
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = this->q2B1;
    v5 = Power::FlagProcess(a2, v4);
    LOBYTE(v5) = this->q2B2;
    Power::FlagProcess(a2, v5);
    Power::TimerProcess(this->RadarColor);
    LOBYTE(v6) = this->q2B3;
    Power::FlagProcess(a2, v6);
    Power::TimerProcess(this->AnimationProbability);
    return Checksummer::Add_float((unsigned int *)a2, this->TemperateOccupationBits);
}
}

// ==== BACKFILL 0x0071E1D0  TerrainTypeClass::SaveLoad_Prefix  cls=TerrainTypeClass  sig=csp  renamed_refs=8  residual=- ====
int TerrainTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
{
    int result;
    result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1);
    *(int *)aP0->vtable1 = (unsigned int)vt_TerrainTypeClass;
    *(int *)&aP0->vtable1[4] = (unsigned int)vt_TerrainTypeClass;
    *(int *)&aP0->vtable1[8] = (unsigned int)vt_TerrainTypeClass;
    *(int *)&aP0->vtable1[12] = &vt_TerrainTypeClass;
    }
    VoxelAnimType::LoadAnim(aP0->vtable1);
    ObjectTypeClass::Load2DArt(aP0->vtable1);
    *(int *)aP0[1].q024 = 40 * *(int *)&aP0[1].vtable1[4] + 11595200;
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x0071E240  TerrainTypeClass::SaveLoad_Prefix_0  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x0071E260  TerrainTypeClass::GetClassIdentifier  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1525862011;
  a2[1] = 298976820;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x0071E330  TerrainTypeClass::GetTypeIdentifier  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainTypeClass::GetTypeIdentifier()
{
return 37;
}

// ==== BACKFILL 0x0071E340  TerrainTypeClass::GetObjectSize  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainTypeClass::GetObjectSize()
{
return 700;
}

// ==== BACKFILL 0x0071E350  TerrainTypeClass::GetAuxField  cls=TerrainTypeClass  sig=csp  renamed_refs=1  residual=- ====
int TerrainTypeClass::GetAuxField()
{
{
    return this->RadarColor;
}
}

// ==== BACKFILL 0x0071E360  TerrainTypeClass::ddtor  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
TerrainTypeClass * TerrainTypeClass::ddtor(AbstractClass *a2, char a3)
{
    void *v3 = this->Image;
    if ( v3 )
    {
        OperatorDelete(v3);
        this->Image = 0;
    }
    AbstractClass::AnnounceExpiredPointer(this, 1);
    TerrainTypeClass* v7 = this;
    int v5 = SmudgeTypeRegistryX.FindItemIndex(&v7);
    if ( v5 != -1 && v5 < SmudgeTypeRegistryX_Count )
    {
        --SmudgeTypeRegistryX_Count;
        for ( ; v5 < SmudgeTypeRegistryX_Count ; *(SmudgeTypeRegistryX_Items + v5 - 1) = *(SmudgeTypeRegistryX_Items + v5) )
        {
            ++v5;
        }
    }
    ObjectTypeClass::Destruct(this);
    if ( a3 & 1 )
        OperatorDelete(this);
    return this;
}

// ==== BACKFILL 0x0071F4E0  TriggerTypeClass::ParseActionData  cls=TriggerTypeClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { void* TriggerTypeClass::ParseActionData() {
{
      char *v2;
      char *v3;
      int v4;
      char *v5;
      int v6;
      char *result;
      int v8;
      char Destination[24];
      char v10;

      this->q034 = 0;
      v2 = strtok(0, Delimiter);
      this->mustTransfer = atoi(v2);
      v3 = strtok(0, Delimiter);
      v4 = atoi(v3);
      v5 = strtok(0, Delimiter);
      v6 = atoi(v5);
      result = 0;
      if ( v4 == 2 )
        result = strtok(0, Delimiter);
      if ( v4 )
      {
        v8 = v4 - 1;
        if ( v8 )
        {
          if ( v8 == 1 )
          {
            this->q034 = v6;
            if ( result )
            {
              result = strncpy(Destination, result, 0x18u);
              v10 = 0;
            }
            else
            {
              Destination[0] = 0;
            }
            if ( Destination != (char *)(this + 56) )
            {
              qmemcpy((void *)(this + 56), Destination, 0x18u);
              this->q050 = v10;
            }
          }
        }
        else
        {
          result = (char *)TeamTypeClass::FindByName(v5);
          this->q030 = result;
        }
      }
      else
      {
        this->q034 = v6;
      }
      return result;
}
} }

// ==== BACKFILL 0x0071F680  TriggerTypeClass::GetActionCategoryFlags  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TriggerTypeClass::GetActionCategoryFlags() {
{
    int v1;
    v1 = 0;
    switch ( (unsigned int)this )
  {
    case 0u: case 1u: case 4u: case 8u: case 0x18u: case 0x19u: case 0x1Au: case 0x1Fu: case 0x35u: case 0x36u: case 0x3Bu: v1 = 1;
    break;
    default: break;
  }
    switch ( (unsigned int)this )
  {
    case 0u: case 1u: case 2u: case 4u: case 6u: case 7u: case 8u: case 0x1Du: case 0x21u: case 0x22u: case 0x23u: case 0x26u: case 0x27u: case 0x28u: case 0x29u: case 0x2Au: case 0x2Bu: case 0x2Cu: case 0x30u: case 0x31u: v1 |= 2u;
    break;
    default: break;
  }
    if ( this == (void *)8 || this == (void *)24 )
    v1 |= 4u;
    switch ( (unsigned int)this )
  {
    case 3u: case 5u: case 8u: case 9u: case 0xAu: case 0xBu: case 0xCu: case 0xFu: case 0x10u: case 0x11u: case 0x12u: case 0x13u: case 0x14u: case 0x15u: case 0x16u: case 0x1Eu: case 0x20u: case 0x34u: case 0x37u: case 0x38u: case 0x39u: case 0x3Au: v1 |= 8u;
    break;
    default: break;
  }
    switch ( (unsigned int)this )
  {
    case 8u: case 0xDu: case 0xEu: case 0x17u: case 0x1Bu: case 0x1Cu: case 0x24u: case 0x25u: case 0x2Du: case 0x2Eu: case 0x2Fu: case 0x32u: case 0x33u: case 0x3Cu: case 0x3Du: v1 |= 0x10u;
    break;
    default: return v1;
  }
    return v1;
}
} }

// ==== BACKFILL 0x0071F820  TEventClass::ProcessEvent  cls=TEventClass  sig=csp  renamed_refs=0  residual=- ====
int TEventClass::ProcessEvent(int a2)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    AbstractClass::ProcessPower((#378 *)this);
    v3 = this->TEventClass_field_28;
    if ( v3 )
  {
    v4 = (*(int (__stdcall **)(int))(*(int *)(v3 + 4) + 16))(v3 + 4);
    Power::TimerProcess(v4);
  }
    Power::TimerProcess(this->TEventClass_field_2C);
    v5 = this->TEventClass_field_30;
    if ( v5 )
  {
    v6 = (*(int (__stdcall **)(int))(*(int *)(v5 + 4) + 16))(v5 + 4);
    Power::TimerProcess(v6);
  }
    return Power::TimerProcess(this->TEventClass_field_34);
}
}

// ==== BACKFILL 0x0071F880  TEventClass::ddtor  cls=TEventClass  sig=csp  renamed_refs=0  residual=- ====
int TEventClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1326367635;
  a2[1] = 298977877;
  a2[2] = 1610655660;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x0071F8C0  TEventClass::SaveLoad_Prefix  cls=TEventClass  sig=csp  renamed_refs=0  residual=- ====
int TEventClass::SaveLoad_Prefix(AbstractClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TEventClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TEventClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TEventClass;
    *(int *)&aP0->__pad_0[12] = &vt_TEventClass;
    }
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_0[12]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[2].__pad_0[12]);
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x0071F930  TEventClass::SaveLoad_Prefix_0  cls=TEventClass  sig=csp  renamed_refs=0  residual=- ====
int TEventClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x0071F950  TEventClass::GetStateA  cls=TEventClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int TEventClass::GetStateA() const {
{
      char result;

      switch ( this->TEventClass_field_2C )
      {
        case 1:
        case 2:
        case 3:
        case 4:
        case 6:
        case 7:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1D:
        case 0x1F:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x2B:
        case 0x2C:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x35:
        case 0x36:
        case 0x3B:
          result = 1;
          break;
        default:
          result = 0;
          break;
      }
      return result;
}
} }

// ==== BACKFILL 0x0071F9C0  TEventClass::GetStateB_SpyEvent  cls=TEventClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int TEventClass::GetStateB_SpyEvent() const {
{
      char result;

      switch ( this->TEventClass_field_2C )
      {
        case 1:
        case 6:
        case 0x1F:
        case 0x2C:
        case 0x3B:
          result = 0;
          break;
        default:
          result = 1;
          break;
      }
      return result;
}
} }

// ==== BACKFILL 0x0071FA40  sub_71FA40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_71FA40::sub_71FA40(int a2)
{
{
    this->M84 = a2;
    return a2;
}
}

// ==== BACKFILL 0x0071FA50  TEventClass::StubReturn88  cls=TEventClass  sig=csp  renamed_refs=0  residual=- ====
int TEventClass::StubReturn88()
{
return 88;
}

// ==== BACKFILL 0x0071FA60  TEventClass::StubReturn48  cls=TEventClass  sig=csp  renamed_refs=0  residual=- ====
int TEventClass::StubReturn48()
{
return 48;
}

// ==== BACKFILL 0x0071FA70  TEventClass::Stub  cls=TEventClass  sig=csp  renamed_refs=0  residual=- ====
int TEventClass::Stub()
{
{
    return this->eventType;
}
}

// ==== BACKFILL 0x0071FF20  sub_71FF20  cls=TextButtonClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_71FF20::sub_71FF20(int aP1, int a3, int a4, int aP2, int aP3, int aP4, int aP5, char a9, ShapeButtonClass * aP9)
{
{
    ControlClass *Instance;
    ToggleClass::Construct( (int)this, (ControlClass *)aP1, (ControlClass *)aP2, (ControlClass *)aP3, (ControlClass *)aP4, (ControlClass *)aP5);
    this->__pad_0[53] = (char)aP9;
    this->__pad_0[52] = a9;
    this->field_38 = a3;
    this->M60 = a4;
    *(int *)this->__pad_0 = &vt_TextButtonClass;
    if ( aP4 == -1 || aP5 == -1 )
  {
    Instance = (ControlClass *)TextRenderer::GetInstance();
    if ( aP4 == -1 )
    *(int *)&this->__pad_0[20] = Text::MeasureWidth(this->field_38, 0) + 8;
    if ( aP5 == -1 )
    *(int *)&this->__pad_0[24] = Instance[1].ControlClass_field_0x0C + 2;
  }
    return (int)this->__pad_0;
}
}

// ==== BACKFILL 0x0071FFE0  AbstractClass::checkWeaponCooldown  cls=TextButtonClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::checkWeaponCooldown(int a2) {
{
      if ( !Control::DispatchClick(this, (ControlClass *)a2) )
        return 0;
      this->vt36();
      this->vt37(this->field_38);
      return 1;
}
} } }
