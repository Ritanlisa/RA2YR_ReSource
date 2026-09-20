// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00510220  AbstractClass::updateThreatMap  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void* AbstractClass::updateThreatMap(int a2) {
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_ScoutStruct;
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

// ==== BACKFILL 0x00510460  HouseClass::updatePowerState  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void* HouseClass::updatePowerState(int a2) {
{
    char *v2;
    v2 = this;
    if ( (a2 & 2) != 0 )
  {
    v2 = this - 4;
    if ( (a2 & 1) != 0 )
    {
    __3_YAXPAX_Z(v2);
    return v2;
    }
  }
    else if ( (a2 & 1) != 0 )
  {
    __3_YAXPAX_Z(this);
  }
    return v2;
}
} }

// ==== BACKFILL 0x00510550  VectorClass::BuildingConstructor  cls=VectorClass  sig=csp  renamed_refs=0 ====
unsigned int * VectorClass::BuildingConstructor(int a2, int a3)
{
{
    this->Items = (void*)(0);
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_BuildingClass;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = (void*)(a3);
    return this;
    }
    this->Items = (void*)(__2_YAPAXI_Z(4 * a2));
    this->IsAllocated = 1;
  }
    return this;
}
}

// ==== BACKFILL 0x005105A0  VectorClass::BuildingTypeConstructor  cls=VectorClass  sig=csp  renamed_refs=0 ====
unsigned int * VectorClass::BuildingTypeConstructor(TechnoTypeClass * aP1, TechnoTypeClass * aP2)
{
{
    this->Items = (void*)(0);
    this->Capacity = aP1;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_BuildingTypeClass_const;
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

// ==== BACKFILL 0x00510820  HouseClass::processAIEvents  cls=HouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int HouseClass::processAIEvents(int a1) {
{
    int v2;
    BuildingClass *v3;
    int v4;
    v2 = this->uniqueId;
    v3 = (BuildingClass *)aP1;
    if ( (int)aP1 >= v2 )
    return 0;
    v4 = v2 - 1;
    this->uniqueId = v4;
    if ( (int)aP1 < v4 )
  {
    do
    {
    v3 = (BuildingClass *)((char *)(v3) + 1);
    *(int *)(*(this + 1) + 4 * (int)v3 - 4) = *(int *)(*(this + 1) + 4 * (int)v3);
    }
    while ( (int)v3 < this->uniqueId );
  }
    return 1;
}
} }

// ==== BACKFILL 0x00510A20  AbstractClass::saveToStream  cls=unknown  sig=csp  renamed_refs=0 ====
int AbstractClass::saveToStream(int a1, const void * a2, unsigned int * a3)
{
{
    return HouseClass::QueryInterface(a1 - 4, a2, a3);
}
}

// ==== BACKFILL 0x00510A30  AbstractClass::loadFromStream  cls=unknown  sig=csp  renamed_refs=0 ====
int AbstractClass::loadFromStream(int a1)
{
{
    return HouseClass::COMStub_Ret1_1(a1 - 4);
}
}

// ==== BACKFILL 0x00510A40  AbstractClass::computeSize  cls=unknown  sig=csp  renamed_refs=0 ====
int AbstractClass::computeSize(int a1)
{
{
    return HouseClass::COMStub_Ret1_2(a1 - 4);
}
}

// ==== BACKFILL 0x00510A50  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_2  cls=unknown  sig=csp  renamed_refs=0 ====
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_2(int a1, const void * a2, unsigned int * a3)
{
{
    return HouseClass::QueryInterface(a1 - 36, a2, a3);
}
}

// ==== BACKFILL 0x00510A60  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_3  cls=unknown  sig=csp  renamed_refs=0 ====
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_3(int a1)
{
{
    return HouseClass::COMStub_Ret1_1(a1 - 36);
}
}

// ==== BACKFILL 0x00510A70  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_4  cls=unknown  sig=csp  renamed_refs=0 ====
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_4(int a1)
{
{
    return HouseClass::COMStub_Ret1_2(a1 - 36);
}
}

// ==== BACKFILL 0x00510A80  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_5  cls=unknown  sig=csp  renamed_refs=0 ====
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_5(int a1, const void * a2, unsigned int * a3)
{
{
    return HouseClass::QueryInterface(a1 - 40, a2, a3);
}
}

// ==== BACKFILL 0x00510A90  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_6  cls=unknown  sig=csp  renamed_refs=0 ====
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_6(int a1)
{
{
    return HouseClass::COMStub_Ret1_1(a1 - 40);
}
}

// ==== BACKFILL 0x00510AA0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_7  cls=unknown  sig=csp  renamed_refs=0 ====
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_7(int a1)
{
{
    return HouseClass::COMStub_Ret1_2(a1 - 40);
}
}

// ==== BACKFILL 0x00510AB0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_8  cls=unknown  sig=csp  renamed_refs=0 ====
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_8(int a1)
{
{
    return VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_1(a1 - 4);
}
}

// ==== BACKFILL 0x00510AC0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_9  cls=unknown  sig=csp  renamed_refs=0 ====
BSTR VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_9(int a1)
{
{
    return VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex(a1 - 4);
}
}

// ==== BACKFILL 0x00510AD0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_10  cls=unknown  sig=csp  renamed_refs=0 ====
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_10(int a1, const void * a2, unsigned int * a3)
{
{
    return HouseClass::QueryInterface(a1 - 44, a2, a3);
}
}

// ==== BACKFILL 0x00510AE0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_11  cls=unknown  sig=csp  renamed_refs=0 ====
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_11(int a1)
{
{
    return HouseClass::COMStub_Ret1_1(a1 - 44);
}
}

// ==== BACKFILL 0x00510AF0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_12  cls=unknown  sig=csp  renamed_refs=0 ====
int VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_12(int a1)
{
{
    return HouseClass::COMStub_Ret1_2(a1 - 44);
}
}

// ==== BACKFILL 0x00510E10  FormatHouseClassPlayerName  cls=unknown  sig=csp  renamed_refs=0 ====
unsigned int HouseClass_FormatPlayerName(int a1, unsigned char * a2, int a3)
{
{
    unsigned int result;
    const char *v4;
    result = a3;
    if ( a3 < 16 )
  {
    if ( a3 < 1 )
    return result;
    *a2 = 0;
  }
    switch ( a1 )
  {
    case 4475: v4 = g_Str__Player___A_;
    break;
    case 4476: v4 = g_Str__Player___B_;
    break;
    case 4477: v4 = g_Str__Player___C_;
    break;
    case 4478: v4 = g_Str__Player___D_;
    break;
    case 4479: v4 = g_Str__Player___E_;
    break;
    case 4480: v4 = g_Str__Player___F_;
    break;
    case 4481: v4 = g_Str__Player___G_;
    break;
    default: v4 = g_Str__Player___H_;
    if ( a1 != 4482 )
    v4 = &g_INI_DefaultBuffer;
    break;
  }
    result = strlen(v4) + 1;
    qmemcpy(a2, v4, result);
    return result;
}
}

// ==== BACKFILL 0x00511650  HouseTypeClass::loadVeteranWeapons  cls=HouseTypeClass  sig=csp  renamed_refs=0 ====
unsigned int * HouseTypeClass::loadVeteranWeapons(HouseTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall HouseTypeClass::loadVeteranWeapons(_DWORD *this, HouseTypeClass *aP1)
{
  AbstractTypeClass::Init((int)this, (AbstractTypeClass *)aP1); /*0x511658*/
  *(this + 83) = &vt_TypeList_InfantryTypeClass_const; /*0x51165d*/
  *(this + 90) = &vt_TypeList_UnitTypeClass_const; /*0x511667*/
  *(this + 97) = &vt_TypeList_AircraftTypeClass_const; /*0x511671*/
  *this = &HouseTypeClass::`vftable'; /*0x51167b*/
  *(this + 1) = &HouseTypeClass::`vftable'; /*0x511681*/
  *(this + 2) = &HouseTypeClass::`vftable'; /*0x511688*/
  *(this + 3) = &vt_HouseTypeClass; /*0x51168f*/
  return this; /*0x511698*/
}
}

// ==== BACKFILL 0x005117D0  SuperWeaponTypeClass::FindByName  cls=SuperWeaponTypeClass  sig=csp  renamed_refs=0 ====
int SuperWeaponTypeClass::FindByName()
{
{
    int v3;
    int *v4;
    if ( !_strcmpi(this, &g_INI_Key_Digest.__pad_20[8]) )
    return -2;
    if ( !this )
    return -1;
    v3 = 0;
    if ( g_SuperWeaponTypeArray <= 0 )
    return -1;
    while ( 1 )
  {
    v4 = (int *)*((int *)(g_SuperWeaponTypeCount) + v3);
    if ( !_strcmpi(v4 + 25, this) || !_strcmpi(v4 + 9, this) )
    break;
    if ( ++v3 >= g_SuperWeaponTypeArray )
    return -1;
  }
    return v4[46];
}
}

// ==== BACKFILL 0x00512170  HouseTypeClass::ProcessPower  cls=HouseTypeClass  sig=csp  renamed_refs=4 ====
int HouseTypeClass::ProcessPower(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall HouseTypeClass::ProcessPower(int this, int *a2)
{
  int v3; // edx
  int v4; // eax

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x51217a*/
  Power::TimerProcess(this->uniqueId); /*0x512188*/
  Power::TimerProcess(this->abstractFlags); /*0x512196*/
  Power::TimerProcess(this->nextArrayIndex); /*0x5121a4*/
  Checksummer::Add_double(this->NeedsSaveOrLink, *(_DWORD *)(this + 204)); /*0x5121b9*/
  Checksummer::Add_double(this->groundspeedMult, *(_DWORD *)(this + 212)); /*0x5121ce*/
  Checksummer::Add_double(this->airspeedMult, *(_DWORD *)(this + 220)); /*0x5121e3*/
  Checksummer::Add_double(this->armorMult, *(_DWORD *)(this + 228)); /*0x5121f8*/
  Checksummer::Add_double(this->rofMult, *(_DWORD *)(this + 236)); /*0x51220d*/
  Checksummer::Add_double(this->costMult, *(_DWORD *)(this + 244)); /*0x512222*/
  Checksummer::Add_double(this->buildtimeMult, *(_DWORD *)(this + 252)); /*0x512237*/
  Checksummer::Add_Buffer((unsigned int *)a2, (unsigned __int8 *)(this + 416), strlen((const char *)(this + 416))); /*0x512252*/
  LOBYTE(v3) = *(_BYTE *)(this + 420); /*0x512257*/
  v4 = Power::FinalizeDrain(a2, v3); /*0x512260*/
  LOBYTE(v4) = *(_BYTE *)(this + 421); /*0x512265*/
  return Power::FlagProcess(a2, v4); /*0x512273*/
}
}

// ==== BACKFILL 0x00512280  HouseTypeClass::StubReturnFalse  cls=HouseTypeClass  sig=csp  renamed_refs=0 ====
int HouseTypeClass::StubReturnFalse(int a1)
{
return 0;
}

// ==== BACKFILL 0x00512570  HouseTypeClass::LoadHouse  cls=HouseTypeClass  sig=csp  renamed_refs=0 ====
int HouseTypeClass::LoadHouse(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  a2[1] = 0;
  *a2 = 436;
  return 0;
}

// ==== BACKFILL 0x005125A0  HouseTypeClass::QueryInterface  cls=HouseTypeClass  sig=csp  renamed_refs=0 ====
int HouseTypeClass::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
{
    int v4;
    if ( !a3 )
    return -2147467261;
    *a3 = 0;
    if ( !memcmp(a2, &IID_IUnknown, 0x10u) )
    *a3 = a1;
    if ( !memcmp(a2, &IID_IPersist, 0x10u) )
    *a3 = a1;
    if ( !memcmp(a2, &IID_IPersistStream, 0x10u) )
    *a3 = a1;
    if ( !memcmp(a2, &IID_IRTTITypeInfo, 0x10u) )
  {
    if ( a1 )
    v4 = a1 + 4;
    else
    v4 = 0;
    *a3 = v4;
  }
    if ( !*a3 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(int *)(a1) + 4))(a1);
    return 0;
}
}

// ==== BACKFILL 0x00512640  HouseTypeClass::GetClassIdentifier  cls=HouseTypeClass  sig=csp  renamed_refs=0 ====
int HouseTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 500447528;
  a2[1] = 298976363;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x00512710  HouseTypeClass::GetTypeIdentifier  cls=HouseTypeClass  sig=csp  renamed_refs=0 ====
int HouseTypeClass::GetTypeIdentifier()
{
return 14;
}

// ==== BACKFILL 0x00512720  HouseTypeClass::GetObjectSize  cls=HouseTypeClass  sig=csp  renamed_refs=0 ====
int HouseTypeClass::GetObjectSize()
{
return 432;
}

// ==== BACKFILL 0x00512730  HouseTypeClass::loadBuildLimits  cls=HouseTypeClass  sig=csp  renamed_refs=1 ====
unsigned int HouseTypeClass::loadBuildLimits()
{
{
    return this->__pad_00C;
}
}

// ==== BACKFILL 0x00512740  HouseTypeClass::AddRef  cls=HouseTypeClass  sig=csp  renamed_refs=0 ====
int HouseTypeClass::AddRef(int a1)
{
return 1;
}

// ==== BACKFILL 0x00512750  HouseTypeClass::Release  cls=HouseTypeClass  sig=csp  renamed_refs=0 ====
int HouseTypeClass::Release(int a1)
{
return 1;
}

// ==== BACKFILL 0x00512760  HouseTypeClass::Destructor  cls=HouseTypeClass  sig=csp  renamed_refs=0 ====
HouseTypeClass * HouseTypeClass::Destructor(char a2)
{
{
    int v3;
    UnitTypeClass *v4;
    void *v5;
    void *v6;
    void **v8;
    *(void**)this = vt_HouseTypeClass;
    *(this + 1) = (unsigned int)vt_HouseTypeClass;
    *(this + 2) = (unsigned int)vt_HouseTypeClass;
    *(this + 3) = &vt_HouseTypeClass;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    v8 = this;
    v3 = (*(int (__thiscall **)(int *, void ***))(DataGlobal_A83C98 + 16))(&DataGlobal_A83C98, &v8);
    if ( v3 != -1 && v3 < g_SuperWeaponTypeArray && v3 < --g_SuperWeaponTypeArray )
  {
    do
    {
    ++v3;
    *((int *)(g_SuperWeaponTypeCount) + v3 - 1) = *((int *)(g_SuperWeaponTypeCount) + v3);
    }
    while ( v3 < g_SuperWeaponTypeArray );
  }
    v4 = (UnitTypeClass *)*(this + 98);
    *(this + 97) = &vt_VectorClass_AircraftTypeClass_const;
    if ( v4 && *((char *)(this) + 401) )
  {
    __3_YAXPAX_Z(v4);
    *(this + 98) = 0;
  }
    *((char *)(this) + 401) = 0;
    *(this + 99) = 0;
    v5 = *(this + 91);
    *(this + 90) = &vt_VectorClass_UnitTypeClass_const;
    if ( v5 && *((char *)(this) + 373) )
  {
    __3_YAXPAX_Z(v5);
    *(this + 91) = 0;
  }
    *((char *)(this) + 373) = 0;
    *(this + 92) = 0;
    v6 = *(this + 84);
    *(this + 83) = &vt_VectorClass_InfantryTypeClass_const;
    if ( v6 && *((char *)(this) + 345) )
  {
    __3_YAXPAX_Z(v6);
    *(this + 84) = 0;
  }
    *((char *)(this) + 345) = 0;
    *(this + 85) = 0;
    AbstractTypeClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (HouseTypeClass *)this;
}
}

// ==== BACKFILL 0x00512960  HouseTypeClass::readStartUnit  cls=HouseTypeClass  sig=csp  renamed_refs=3 ====
unsigned int * HouseTypeClass::readStartUnit()
{
{
    this->__pad_004 = 0;
    this->vtable3 = 0;
    this->__pad_00C = 1;
    this->IsAllocated = 0;
    this->abstractFlags = 10;
    this->uniqueId = 0;
    *(void**)this = &vt_TypeList_AircraftTypeClass_const;
    return this;
}
}

// ==== BACKFILL 0x00512BD0  HouseTypeClass::readStartInfantry  cls=HouseTypeClass  sig=csp  renamed_refs=8 ====
unsigned int * HouseTypeClass::readStartInfantry(InfantryTypeClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    if ( this == (int *)aP1 )
    return this;
    this->GetClassIdentifier();
    v3 = *(int *)&aP1->vtable1[8];
    this->vtable3 = v3;
    if ( !v3 )
  {
    this->__pad_004 = 0;
    this->IsAllocated = 0;
    return this;
  }
    v4 = __2_YAPAXI_Z(4 * v3);
    this->__pad_004 = v4;
    if ( !v4 )
    return this;
    v5 = this->vtable3;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 <= 0 )
    return this;
    do
  {
    *(int *)(this->__pad_004 + 4 * v6) = *(int *)(*(int *)&aP1->vtable1[4] + 4 * v6);
    ++v6;
  }
    while ( v6 < this->vtable3 );
    return this;
}
}

// ==== BACKFILL 0x00512FA0  VectorClass::CopyConstructor  cls=VectorClass  sig=csp  renamed_refs=0 ====
unsigned int * VectorClass::CopyConstructor(InfantryTypeClass * aP1)
{
VectorClass* source = (VectorClass *)aP1;
if ( this == source )
    return (unsigned int *)this;
this->Clear();
int sourceCapacity = source->Capacity;
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
    ((unsigned int *)this->Items)[i] = ((unsigned int *)source->Items)[i];
    ++i;
}
while ( i < this->Capacity );
return (unsigned int *)this;
}

// ==== BACKFILL 0x005132F0  VectorClass::PushBack  cls=VectorClass  sig=csp  renamed_refs=2 ====
char VectorClass::PushBack(VectorClass * aP1)
{
{
    MapClass *v3;
    int v4;
    int v6;
    VectorClass *v7;
    v3 = (MapClass *)this->Capacity;
    if ( this->Count >= (int)v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity((char *)(v3) + v4, 0) )
    return 0;
  }
    v6 = this->Count;
    v7 = (VectorClass *)this->Items;
    this->Count = v6 + 1;
    *(int *)&v7->vtable1[4 * v6] = *(int *)aP1->vtable1;
    return 1;
}
}

// ==== BACKFILL 0x005134D0  VectorClass::ClearAndFree4  cls=VectorClass  sig=csp  renamed_refs=0 ====
void VectorClass::ClearAndFree4()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// ==== BACKFILL 0x00513560  HouseTypeClass::readDefaultAlly  cls=HouseTypeClass  sig=csp  renamed_refs=5 ====
unsigned int * HouseTypeClass::readDefaultAlly(int a2, int a3)
{
{
    this->__pad_004 = 0;
    this->vtable3 = a2;
    this->__pad_00C = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_AircraftTypeClass_const;
    if ( a2 )
  {
    if ( a3 )
    {
    this->__pad_004 = a3;
    }
    else
    {
    this->__pad_004 = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
    }
  }
    *(void**)this = &vt_DynamicVectorClass_AircraftTypeClass_const;
    this->abstractFlags = 10;
    this->uniqueId = 0;
    return this;
}
}

// ==== BACKFILL 0x005136C0  HouseTypeClass::readPowerPlants  cls=HouseTypeClass  sig=csp  renamed_refs=3 ====
char HouseTypeClass::readPowerPlants(TypeList * aP1)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->vtable3;
    if ( this->uniqueId >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->abstractFlags;
    if ( v4 <= 0 || !this->Release(v3 + v4, 0) )
    return 0;
  }
    v6 = this->uniqueId;
    v7 = this->__pad_004;
    this->uniqueId = v6 + 1;
    *(int *)(v7 + 4 * v6) = aP1->vtable1;
    return 1;
}
}

// ==== BACKFILL 0x00513740  TypeList::CopyConstructor  cls=TypeList  sig=csp  renamed_refs=15 ====
unsigned int * TypeList::CopyConstructor(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    this->q004 = 0;
    this->q008 = 0;
    this->q00C = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_UnitTypeClass_const;
    if ( this != (int *)aP1 )
  {
    Vector::Destructor((int)this);
    v3 = aP1->q008;
    this->q008 = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->q004 = v4;
    if ( v4 )
      {
    v5 = this->q008;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->q004 + 4 * v6) = *((int *)aP1->q004 + v6);
    ++v6;
          }
    while ( v6 < this->q008 );
        }
      }
    }
    else
    {
    this->q004 = 0;
    this->IsAllocated = 0;
    }
  }
    this->q010 = aP1[1].vtable1;
    this->q014 = aP1[1].q004;
    *(void**)this = &vt_TypeList_UnitTypeClass_const;
    return this;
}
}

// ==== BACKFILL 0x005137D0  HouseTypeClass::readParaDropTypes  cls=HouseTypeClass  sig=csp  renamed_refs=10 ====
unsigned int * HouseTypeClass::readParaDropTypes(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    this->__pad_004 = 0;
    this->vtable3 = 0;
    this->__pad_00C = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_AircraftTypeClass_const;
    if ( this != (int *)aP1 )
  {
    VectorClass::ClearAndFree4((int)this);
    v3 = aP1->Capacity;
    this->vtable3 = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->__pad_004 = v4;
    if ( v4 )
      {
    v5 = this->vtable3;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->__pad_004 + 4 * v6) = *((int *)aP1->Items + v6);
    ++v6;
          }
    while ( v6 < this->vtable3 );
        }
      }
    }
    else
    {
    this->__pad_004 = 0;
    this->IsAllocated = 0;
    }
  }
    this->uniqueId = aP1[1].vtable1;
    this->abstractFlags = aP1[1].Items;
    *(void**)this = &vt_TypeList_AircraftTypeClass_const;
    return this;
}
}

// ==== BACKFILL 0x00513860  HouseTypeClass::readAllowedUnits  cls=HouseTypeClass  sig=csp  renamed_refs=11 ====
unsigned int * HouseTypeClass::readAllowedUnits(InfantryTypeClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    this->__pad_004 = 0;
    this->vtable3 = 0;
    this->__pad_00C = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_InfantryTypeClass_const;
    if ( this != (int *)aP1 )
  {
    Vector::Cleanup((int)this);
    v3 = *(int *)&aP1->vtable1[8];
    this->vtable3 = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->__pad_004 = v4;
    if ( v4 )
      {
    v5 = this->vtable3;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->__pad_004 + 4 * v6) = *(int *)(*(int *)&aP1->vtable1[4] + 4 * v6);
    ++v6;
          }
    while ( v6 < this->vtable3 );
        }
      }
    }
    else
    {
    this->__pad_004 = 0;
    this->IsAllocated = 0;
    }
  }
    this->uniqueId = aP1->uniqueId;
    this->abstractFlags = aP1->abstractFlags;
    *(void**)this = &vt_DynamicVectorClass_InfantryTypeClass_const;
    return this;
}
}

// ==== BACKFILL 0x005139E0  HouseTypeClass::readBaseDefenses  cls=unknown  sig=csp  renamed_refs=0 ====
int HouseTypeClass::readBaseDefenses(int a1, const void * a2, unsigned int * a3)
{
{
    return HouseTypeClass::QueryInterface(a1 - 4, a2, a3);
}
}

// ==== BACKFILL 0x005139F0  HouseTypeClass::readAiBuildLists  cls=unknown  sig=csp  renamed_refs=0 ====
int HouseTypeClass::readAiBuildLists(int a1)
{
{
    return HouseTypeClass::AddRef(a1 - 4);
}
}

// ==== BACKFILL 0x00513A00  HouseTypeClass::readLoadoutData  cls=unknown  sig=csp  renamed_refs=0 ====
int HouseTypeClass::readLoadoutData(int a1)
{
{
    return HouseTypeClass::Release(a1 - 4);
}
}

// ==== BACKFILL 0x00513CB0  SaveGame::WriteObject  cls=HoverLocomotionClass  sig=csp  renamed_refs=0 ====
int SaveGame::WriteObject(int a1, int a2)
{
{
    int v2;
    int v3;
    char v5[24];
    v2 = StreamClass::ResetPosition(a1, a2);
    v3 = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 132))(*(int *)(a1 + 8));
    FrameSnapshot::InitMax(2 * *(int *)(v3 + 1820));
    qmemcpy((void *)(a1 + 44), v5, 0x18u);
    return v2;
}
}

// ==== BACKFILL 0x00513D00  sub_513D00  cls=HoverLocomotionClass  sig=csp  renamed_refs=0 ====
void E4Recv_513D00::sub_513D00()
{
{
    *(void**)this = vt_HoverLocomotionClass;
    this->M4 = &vt_HoverLocomotionClass;
    LocomotionClass::Construct(this);
}
}

// ==== BACKFILL 0x005142A0  JumpjetLocomotionClass::ComputeAudio3DRotation_0  cls=HoverLocomotionClass  sig=csp  renamed_refs=0 ====
float * JumpjetLocomotionClass::ComputeAudio3DRotation_0(int a1, float * a2, unsigned int * a3)
{
{
    int v3;
    float *v4;
    float v6[12];
    v3 = *(int *)(a1 + 8);
    if ( fabs(*(float *)(v3 + 808)) >= 0.005 || fabs(*(float *)(v3 + 812)) >= 0.005 )
  {
    if ( a3 )
    *a3 = -1;
  }
    v4 = Audio3D::ComputeRotation(a1, v6, a3);
    qmemcpy(a2, v4, 0x30u);
    return a2;
}
}

// ==== BACKFILL 0x00514C30  JumpjetLocomotionClass::HasScoreDisplayChanged  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
BOOL JumpjetLocomotionClass::HasScoreDisplayChanged(unsigned int * a1)
{
{
    return *((int*)(a1) + 5) != g_ScoreDisplayState1 || *((int*)(a1) + 6) != g_ScoreDisplayState2 || *((int*)(a1) + 7) != g_ScoreDisplayState3 || *((int*)(a1) + 8) != g_ScoreDisplayState1 || *((int*)(a1) + 9) != g_ScoreDisplayState2 || *((int*)(a1) + 10) != g_ScoreDisplayState3;
}
}

// ==== BACKFILL 0x00514C80  JumpjetLocomotionClass::ComputeFloatExpression_2  cls=HoverLocomotionClass  sig=csp  renamed_refs=0 ====
BOOL JumpjetLocomotionClass::ComputeFloatExpression_2(int a1)
{
{
    return (*(unsigned char (__stdcall **)(int))(*(int *)(a1) + 16))(a1) && *(double *)(a1 + 68) != 0.0;
}
}

// ==== BACKFILL 0x00514CB0  JumpjetLocomotionClass::HasScoreDisplayChanged_514CB0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
unsigned int * JumpjetLocomotionClass::HasScoreDisplayChanged_514CB0(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    if ( *((int*)(a1) + 5) == g_ScoreDisplayState1 && (v2 = g_ScoreDisplayState2, *((int*)(a1) + 6) == g_ScoreDisplayState2) && (v3 = g_ScoreDisplayState3, *((int*)(a1) + 7) == g_ScoreDisplayState3) )
  {
    *a2 = g_ScoreDisplayState1;
    *((int*)(a2) + 1) = v2;
    *((int*)(a2) + 2) = v3;
    return a2;
  }
    else
  {
    v4 = *((int*)(a1) + 6);
    v5 = *((int*)(a1) + 7);
    *a2 = *((int*)(a1) + 5);
    *((int*)(a2) + 1) = v4;
    *((int*)(a2) + 2) = v5;
    return a2;
  }
}
}

// ==== BACKFILL 0x00514D10  JumpjetLocomotionClass::HasScoreDisplayChanged_514D10  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
unsigned int * JumpjetLocomotionClass::HasScoreDisplayChanged_514D10(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    if ( *((int*)(a1) + 8) == g_ScoreDisplayState1 && *((int*)(a1) + 9) == g_ScoreDisplayState2 && *((int*)(a1) + 10) == g_ScoreDisplayState3 )
  {
    v5 = *((int*)(a1) + 2);
    v6 = v5 + 156;
    v7 = *(int *)(v5 + 156);
    v8 = *(int *)(v5 + 160);
    v9 = *(int *)(v6 + 8);
    *a2 = v7;
    *((int*)(a2) + 1) = v8;
    *((int*)(a2) + 2) = v9;
    return a2;
  }
    else
  {
    v2 = *((int*)(a1) + 9);
    v3 = *((int*)(a1) + 10);
    *a2 = *((int*)(a1) + 8);
    *((int*)(a2) + 1) = v2;
    *((int*)(a2) + 2) = v3;
    return a2;
  }
}
}

// ==== BACKFILL 0x00516320  JumpjetLocomotionClass::HasScoreDisplayChanged_516320  cls=HoverLocomotionClass  sig=csp  renamed_refs=0 ====
unsigned int * JumpjetLocomotionClass::HasScoreDisplayChanged_516320(unsigned int * a1)
{
{
    int *result;
    result = a1;
    if ( *((int*)(a1) + 5) != *((int*)(a1) + 8) || *((int*)(a1) + 6) != *((int*)(a1) + 9) || *((int*)(a1) + 7) != *((int*)(a1) + 10) )
  {
    *((int*)(a1) + 5) = g_ScoreDisplayState1;
    *((int*)(a1) + 6) = g_ScoreDisplayState2;
    *((int*)(a1) + 7) = g_ScoreDisplayState3;
    result = (int *)*((int*)(a1) + 2);
    result[376] = -1;
  }
    return result;
}
}

// ==== BACKFILL 0x00516370  JumpjetLocomotionClass::UpdateFacingDirection_0  cls=HoverLocomotionClass  sig=csp  renamed_refs=0 ====
char JumpjetLocomotionClass::UpdateFacingDirection_0(int a1, int a2)
{
return FacingClass::Update((char *)(a1[2] + 904), &a2);
}

// ==== BACKFILL 0x005163B0  MovementAI::MarkOccupiedPathCell  cls=MovementAI  sig=csp  renamed_refs=2 ====
namespace gamemd { int MovementAI::MarkOccupiedPathCell() {
{
      int v2;
      int v3;
      int v4;
      _DWORD *v5;
      double v6;
      int v7;
      _DWORD *v9;
      int v10;
      int v11;
      _BYTE v12[12];

      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD *))(this->q004 + 16))(this + 1) )
        return 0;
      v2 = this->m_State;
      if ( *(_DWORD *)(v2 + 1504) == -1 )
        return 0;
      v3 = *(_DWORD *)(v2 + 1444);
      if ( v3 && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 1
        || (v4 = *(_DWORD *)(this->m_State + 1444)) != 0 && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 15 )
      {
        v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this->m_State + 72))(this->m_State, v12);
        v10 = v5[1] - this->q01C;
        v11 = v5[2] - this->q020;
        v6 = Math::Sqrt(
               (double)(*v5 - this->MovementAI_field_18) * (double)(*v5 - this->MovementAI_field_18)
             + (double)v10 * (double)v10
             + (double)v11 * (double)v11);
        v7 = (int)Math::RoundToInt(v6) / 256;
        if ( v7 < 24 )
        {
          *(_DWORD *)(this->m_State + 4 * v7 + 1504) = -1;
          return 1;
        }
      }
      v9 = (_DWORD *)this->m_State;
      if ( !v9[173] || !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v9 + 940))(v9, v9[173]) )
        return 0;
      *(_DWORD *)(this->m_State + 1504) = -1;
      return 1;
}
} }

// ==== BACKFILL 0x00516C70  JumpjetLocomotionClass::DispatchVirtualCall_2  cls=HoverLocomotionClass  sig=csp  renamed_refs=0 ====
bool JumpjetLocomotionClass::DispatchVirtualCall_2(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_516C70(int a1)
{
  return StreamClass::GetDirty(a1) /*0x516c90*/
      || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 456))(*(_DWORD *)(a1 + 8)) > 0;
}
}

// ==== BACKFILL 0x00516CA0  JumpjetLocomotionClass::IsBridgeBlocking  cls=HoverLocomotionClass  sig=csp  renamed_refs=0 ====
char JumpjetLocomotionClass::IsBridgeBlocking(int a1)
{
{
    int Member;
    int *v3;
    int *v4;
    int *v5;
    int *v6;
    int v7;
    int v8;
    short v9;
    short v10;
    short v11;
    int v12[2];
    int v13;
    if ( Team::AllMembersValid(*(int **)(a1 + 8)) )
  {
    Member = Team::GetMember(*(int **)(a1 + 8), 0);
    if ( (*(int (__thiscall **)(int))(*(int *)(Member) + 44))(Member) == 6 )
    {
    if ( *(char *)(*(int *)(Team::GetMember(*(int **)(a1 + 8), 0) + 1312) + 5821) )
    return 0;
    }
  }
    v3 = (int *)(*(int *)(a1 + 8) + 156);
    v12[0] = *v3;
    v12[1] = v3[1];
    v13 = v3[2];
    v4 = Coord::To_Cell(&DataGlobal_87F7E8, v12);
    v5 = Cell::IsBridge(v4);
    if ( v5 && *(char *)(v5[328] + 5821) )
  {
    v6 = v5 + 39;
    v7 = v5[39];
    v8 = v6[1];
    v13 = v6[2];
    LOWORD(v12[0]) = v7 / 256;
    HIWORD(v12[0]) = v8 / 256;
    v11 = *(int *)(*(int *)(a1 + 8) + 156) / 256;
    v9 = v11 - LOWORD(v12[0]);
    v10 = *(int *)(*(int *)(a1 + 8) + 160) / 256 - HIWORD(v12[0]);
    if ( v11 == LOWORD(v12[0]) )
    {
    if ( v10 == 1 )
    return 0;
    }
    else if ( v9 == 2 )
    {
    if ( v10 == 1 )
    return 0;
    }
    else if ( v9 == 3 && v10 == 1 )
    {
    return 0;
    }
  }
    return 1;
}
}

// ==== BACKFILL 0x00516E10  JumpjetLocomotionClass::TryMoveToAdjacentCell  cls=HoverLocomotionClass  sig=csp  renamed_refs=0 ====
char JumpjetLocomotionClass::TryMoveToAdjacentCell(unsigned int a1, unsigned int a2)
{
{
    unsigned int v2;
    short *v3;
    int *v4;
    unsigned int v5;
    short v6;
    int v7;
    void *v8;
    int v9;
    int GroundHeight;
    int *v11;
    char v13[4];
    int v14;
    int v15;
    v2 = a1;
    if ( !(*(unsigned char (__stdcall **)(unsigned int))(*(int *)(a1) + 96))(a1) )
    return 0;
    if ( *(char *)(v2 + 108) )
    return 0;
    v3 = (short *)(*(int (__thiscall **)(int, char *))(**(int **)(v2 + 8) + 440))(*(int *)(v2 + 8), v13);
    v4 = *(int **)(v2 + 8);
    v5 = (((a2 >> 12) + 1) >> 1) & 7;
    v6 = LOWORD(Direction_X_Offsets[v5]) + *v3;
    LOWORD(v5) = HIWORD(Direction_X_Offsets[v5]);
    LOWORD(a2) = v6;
    HIWORD(a2) = v3[1] + v5;
    a1 = a2;
    v7 = *v4;
    v8 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&a1);
    if ( (*(int (__thiscall **)(int *, void *, int, int, int, int))(v7 + 428))(v4, v8, -1, -1, 0, 1) )
    return 0;
    *(char *)(v2 + 108) = 1;
    if ( (*(unsigned char (__stdcall **)(unsigned int))(*(int *)(v2) + 16))(v2) )
  {
    *(int *)(*(int *)(v2 + 8) + 1504) = -1;
    if ( *(int *)(v2 + 32) != g_ScoreDisplayState1 || *(int *)(v2 + 36) != g_ScoreDisplayState2 || *(int *)(v2 + 40) != g_ScoreDisplayState3 )
    {
    (*(void (__thiscall **)(int, unsigned int))(**(int **)(v2 + 8) + 244))(*(int *)(v2 + 8), v2 + 32);
    }
    v9 = SHIWORD(a1) << 8;
    *(int *)(v2 + 32) = ((short)a1 << 8) + 128;
    *(int *)(v2 + 36) = v9 + 128;
    *(int *)(v2 + 40) = 0;
    GroundHeight = Cell::GetGroundHeight((int *)(v2 + 32));
    *(int *)(v2 + 40) = GroundHeight;
    v11 = (int *)(*(int *)(v2 + 8) + 156);
    v14 = *v11;
    v15 = v11[1];
    if ( v11[2] >= GroundHeight + 2 * DataGlobal_A8F1C0 + DataGlobal_A8F1C0 )
    *(int *)(v2 + 40) = DataGlobal_A8F1B4 + GroundHeight;
    (*(void (__thiscall **)(int, unsigned int))(**(int **)(v2 + 8) + 240))(*(int *)(v2 + 8), v2 + 32);
    return 1;
  }
    else
  {
    (*(void (__stdcall **)(unsigned int, int, int, int))(*(int *)(v2) + 68))( v2, ((short)a1 << 8) + 128, (SHIWORD(a1) << 8) + 128, 0);
    return 1;
  }
}
}

// ==== BACKFILL 0x00516FC0  JumpjetLocomotionClass::RandomizeLocomotionParam  cls=HoverLocomotionClass  sig=csp  renamed_refs=0 ====
char JumpjetLocomotionClass::RandomizeLocomotionParam(HoverLocomotionClass * aP0, HoverLocomotionClass * aP1)
{
{
    if ( !(*(unsigned char (__stdcall **)(HoverLocomotionClass *, HoverLocomotionClass *))(*(int *)aP0->__pad_0 + 104))( aP0, aP1) )
    return 0;
    LOBYTE(aP0->CurrentWobbles[1]) = 1;
    *(int *)&aP0->HoverLocomotionClass_field_bool_68 = Random::Range( (int *)(*(int *)&HouseClass_Player.__pad_5568[8060] + 536), (IUnknown *)0x14, (IUnknown *)0x1E);
    if ( Random::Range((int *)(*(int *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)0x63) < 50 )
    *(int *)&aP0->HoverLocomotionClass_field_bool_68 = -*(int *)&aP0->HoverLocomotionClass_field_bool_68;
    return 1;
}
}

// ==== BACKFILL 0x00517070  HoverLocomotionClass::ddtor  cls=HoverLocomotionClass  sig=csp  renamed_refs=0 ====
int HoverLocomotionClass::ddtor(int a1, unsigned int * a2)
{
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1247291202;
    *((int*)(a2) + 1) = 298948665;
    *((int*)(a2) + 2) = -1610610249;
    *((int*)(a2) + 3) = -777003740;
    return 0;
}
}

// ==== BACKFILL 0x005170B0  HoverLocomotionClass::BeginMove  cls=HoverLocomotionClass  sig=csp  renamed_refs=0 ====
int HoverLocomotionClass::BeginMove(int a1, int * a2)
{
{
    int v2;
    v2 = SwizzleManager::SaveLoad((int *)a1, a2);
    if ( v2 >= 0 && a1 )
  {
    *(int *)a1 = (unsigned int)vt_LocomotionClass;
    *(int *)(a1 + 4) = &vt_LocomotionClass;
    FrameSnapshot::Init((short *)(a1 + 48));
    *(int *)a1 = (unsigned int)vt_HoverLocomotionClass;
    *(int *)(a1 + 4) = &vt_HoverLocomotionClass;
  }
    return v2;
}
}

// ==== BACKFILL 0x00517100  JumpjetLocomotionClass::SmallStub_517100  cls=HoverLocomotionClass  sig=csp  renamed_refs=0 ====
int JumpjetLocomotionClass::SmallStub_517100(int a1)
{
return 2;
}

// ==== BACKFILL 0x00517110  sub_517110  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_517110::sub_517110()
{
{
    int v2;
    int v3;
    short *v4;
    bool v5;
    int v6;
    int result;
    char v8[4];
    v5 = 1;
    if ( this->M36 != *(int *)&g_NetworkPlayerBuffer.__pad_14B0[1684] || this->M40 != *(int *)&g_NetworkPlayerBuffer.__pad_14B0[1688] || this->M44 != *(int *)&g_NetworkPlayerBuffer.__pad_14B0[1692] )
  {
    v2 = this->M36 / 256;
    v3 = this->M40 / 256;
    v4 = (short *)(*(int (__thiscall **)(int, char *))(**(int **)(this + 12) + 440))(this->M12, v8);
    if ( *v4 != (short)v2 || v4[1] != (short)v3 )
    v5 = 0;
  }
    v6 = this->M12;
    this->M72 = 0;
    this->M76 = 1072693248;
    (*(void (__thiscall **)(int, int, int))(*(int *)(v6) + 1348))(v6, 0, 1072693248);
    result = MovementAI::StepFootClass((int *)this, 0);
    if ( v5 )
    return MovementAI::MainFootClass((int *)this, 1);
    return result;
}
}

// ==== BACKFILL 0x005171C0  JumpjetLocomotionClass::DispatchVirtualCall_3  cls=HoverLocomotionClass  sig=csp  renamed_refs=0 ====
int JumpjetLocomotionClass::DispatchVirtualCall_3(unsigned int * a1, int a2)
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

// ==== BACKFILL 0x00517210  JumpjetLocomotionClass::IsPositionWithinThreshold  cls=HoverLocomotionClass  sig=csp  renamed_refs=0 ====
bool JumpjetLocomotionClass::IsPositionWithinThreshold(int a1, int a2, int a3, int a4)
{
{
    int *v4;
    int v5;
    int v6;
    int v7;
    char v9[12];
    v4 = (int *)(*(int (__stdcall **)(int, char *))(*(int *)(a1) + 24))(a1, v9);
    v5 = v4[2];
    v6 = *v4;
    v7 = v4[1] / 256;
    return (unsigned short)(v6 / 256) == (unsigned short)(a2 / 256)
    && (short)v7 == (unsigned short)(a3 / 256)
    && (int)abs32(v5 - a4) <= DataGlobal_A8F1C0;
}
}

// ==== BACKFILL 0x005172B0  HoverLocomotionClass::StubReturn120  cls=HoverLocomotionClass  sig=csp  renamed_refs=0 ====
int HoverLocomotionClass::StubReturn120()
{
return 120;
}

// ==== BACKFILL 0x005172C0  HoverLocomotionClass::ProcessMove  cls=HoverLocomotionClass  sig=csp  renamed_refs=0 ====
HoverLocomotionClass * HoverLocomotionClass::ProcessMove(char a2)
{
{
    *(void**)this = vt_HoverLocomotionClass;
    *(this + 1) = &vt_HoverLocomotionClass;
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (HoverLocomotionClass *)this;
}
}

// ==== BACKFILL 0x005172F0  LocomotionClass::ProcessMove  cls=LocomotionClass  sig=csp  renamed_refs=0 ====
LocomotionClass * LocomotionClass::ProcessMove(char a2)
{
{
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (LocomotionClass *)this;
}
}

// ==== BACKFILL 0x00517440  Color::ConvertToRGB  cls=Color  sig=csp  renamed_refs=0 ====
int Color::ConvertToRGB(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Color_ConvertToRGB(unsigned __int8 *this, int a2)
{
  int v2; // esi
  int v3; // ebx
  int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // edx
  __int16 v9; // [esp+10h] [ebp-20h]
  _DWORD v10[5]; // [esp+14h] [ebp-1Ch]
  int v11; // [esp+28h] [ebp-8h]
  unsigned int v12; // [esp+2Ch] [ebp-4h]

  v2 = *(this + 2); /*0x51744b*/
  v3 = *(this + 1); /*0x517453*/
  v4 = 3 * *this; /*0x51745c*/
  v10[2] = v2; /*0x51745f*/
  v4 *= 2; /*0x517463*/
  v10[1] = v2; /*0x517467*/
  v10[3] = v2 * (255 - v3 * (v4 % 255) / 0xFFu) / 0xFF; /*0x51749b*/
  v11 = v2 * (255 - v3) / 255; /*0x5174b7*/
  v10[4] = v11; /*0x5174bb*/
  v12 = v2 * (255 - v3 * (255 - v4 % 255) / 0xFFu) / 0xFF; /*0x5174e2*/
  v5 = ((unsigned int)(v4 / 255) > 4 ? -4 : 2) + v4 / 255;
  LOBYTE(v9) = v10[v5]; /*0x51750f*/
  v6 = (v5 > 4 ? -4 : 2) + v5;
  v7 = v6 + (v6 > 4 ? -4 : 2);
  LOBYTE(v6) = v10[v6]; /*0x51752c*/
  HIBYTE(v9) = v10[v7]; /*0x517535*/
  *(_WORD *)a2 = v9; /*0x517544*/
  *(_BYTE *)(a2 + 2) = v6; /*0x51754a*/
  return a2; /*0x517530*/
}
}

// ==== BACKFILL 0x00517590  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::HashEntryCompare  cls=DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode  sig=csp  renamed_refs=0 ====
BOOL DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::HashEntryCompare(unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall sub_517590(_BYTE *this, _BYTE *a2)
{
  return *this != *a2 || *(this + 1) != a2[1] || *(this + 2) != a2[2]; /*0x5175bd*/
}
}

// ==== BACKFILL 0x005176A0  InfantryClass::SetField6  cls=InfantryClass  sig=csp  renamed_refs=0 ====
namespace gamemd { bool InfantryClass::SetField6() {
{
    return (*(void**)this & 1) == 0;
}
} }

// ==== BACKFILL 0x005176D0  sub_5176D0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_5176D0::sub_5176D0(BYTE Data)
{
{
    int v4;
    char v5;
    HKEY phkResult;
    BYTE v7[4];
    HKEY hKey;
    DWORD cbData;
    DWORD Type;
    DWORD dwDisposition;
    CHAR SubKey[128];
    CHAR v13[128];
    strcpy(SubKey, g_Str_SOFTWARE_Westwood_WOLAPI_);
    v5 = 0;
    if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0xF003Fu, &phkResult) && RegCreateKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, &dwDisposition) )
  {
    return 0;
  }
    if ( !RegSetValueExA(phkResult, g_INI_Key_Options, 0, 4u, &Data, 4u) )
    v5 = 1;
    RegCloseKey(phkResult);
    this->M4 = 0;
    strcpy(v13, g_Str_SOFTWARE_Westwood_WOLAPI_);
    cbData = 4;
    if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, v13, 0, 0xF003Fu, &hKey) )
  {
    *(int *)v7 = 0;
    if ( !RegQueryValueExA(hKey, g_INI_Key_Options, 0, &Type, v7, &cbData) && Type == 4 )
    {
    v4 = *(int *)v7;
    this->M4 = 1;
    *(int *)this = v4;
    }
    RegCloseKey(hKey);
  }
    return v5;
}
}

// ==== BACKFILL 0x0051AA10  InfantryClass::HandleTargetDestroyed  cls=InfantryClass  sig=csp  renamed_refs=1 ====
int InfantryClass::HandleTargetDestroyed()
{
    int result;

    result = FootClass::HandleTargetDestroyed(this, a1, aP2);
    if ( this->Type == (InfantryTypeClass *)a1 )
    {
        this->Type = 0;
    }
    return result;

// 0x51f250
int InfantryClass::ProcessUpdate()
{
    int v6;

    v6 = this->SequenceAnim;
    if ( (v6 == 27 || v6 == 28 || v6 == 29 || v6 == 30)
      && this->HandleCursorOverCell(aP2, 0, aP4) == 2 )
    {
        return 0;
    }
    if ( this->storedTiberium )
        return 0;
    return ObjectClass::SpawnInfantry(this, aP1, aP2, aP3, aP4);

/* ASM:
push    ebx
mov     ebx, [esp+4+arg_C]
push    esi
mov     esi, ecx
push    edi
mov     edi, [esp+0Ch+arg_4]
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      short loc_51F277
cmp     eax, 1Ch
jz      short loc_51F277
cmp     eax, 1Dh
jz      short loc_51F277
cmp     eax, 1Eh
jnz     short loc_51F28F

loc_51F277:                             ; CODE XREF: InfantryClass__ProcessUpdate+16↑j
; InfantryClass__ProcessUpdate+1B↑j ...
mov     eax, [esi]
push    ebx
push    0
push    edi
mov     ecx, esi
call    dword ptr [eax+70h]
cmp     eax, 2
jnz     short loc_51F28F
pop     edi
pop     esi
xor     al, al
pop     ebx
retn    10h
; ---------------------------------------------------------------------------

loc_51F28F:                             ; CODE XREF: InfantryClass__ProcessUpdate+25↑j
; InfantryClass__ProcessUpdate+35↑j
mov     al, [esi+298h]
test    al, al
jz      short loc_51F2A1
pop     edi
pop     esi
xor     al, al
pop     ebx
retn    10h
; ---------------------------------------------------------------------------

loc_51F2A1:                             ; CODE XREF: InfantryClass__ProcessUpdate+47↑j
mov     ecx, [esp+0Ch+arg_8]
mov     edx, [esp+0Ch+arg_0]
push    ebx
push    ecx
push    edi
push    edx
mov     ecx, esi
call    ObjectClass__SpawnInfantry
pop     edi
pop     esi
pop     ebx
retn    10h
*/
}

// 0x51f190
int InfantryClass::ValidateTargetAndMove(AbstractClass* target, int flags)
{
    int v5 = this->GetActionOnObject_EMP(target, flags);
    switch (v5)
    {
    case 9:
    case 28:
    case 29:
        v5 = 9;
        break;
    case 27:
    case 57:
        v5 = 5;
        break;
    default:
        break;
    }
    if (target == this && v5 == 5)
        return 0;
    if (this->storedTiberium)
        return 0;
    return FootClass::ValidateMove(v5, target, flags);
}

/* ASM:
push    ebp
mov     ebp, [esp+4+arg_8]
push    esi
mov     esi, ecx
push    edi
mov     edi, [esp+0Ch+arg_4]
mov     eax, [esi]
push    ebp
push    edi
call    dword ptr [eax+74h]
lea     ecx, [eax-1]    ; switch 57 cases
cmp     ecx, 38h
ja      short def_51F1B4 ; jumptable 0051F1B4 default case, cases 1-8,10-26,30-56
xor     edx, edx
mov     dl, ds:byte_51F20C[ecx]
jmp     ds:jpt_51F1B4[edx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_51F1BB:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+24↑j
; DATA XREF: .text:jpt_51F1B4↓o
mov     eax, 9          ; jumptable 0051F1B4 cases 9,28,29
jmp     short def_51F1B4 ; jumptable 0051F1B4 default case, cases 1-8,10-26,30-56
; ---------------------------------------------------------------------------

loc_51F1C2:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+24↑j
; DATA XREF: .text:jpt_51F1B4↓o
mov     eax, 5          ; jumptable 0051F1B4 cases 27,57

def_51F1B4:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+1A↑j
; InfantryClass__ValidateTargetAndMove+24↑j ...
cmp     edi, esi        ; jumptable 0051F1B4 default case, cases 1-8,10-26,30-56
jnz     short loc_51F1D8
cmp     eax, 5
jnz     short loc_51F1D8
pop     edi
pop     esi
xor     al, al
pop     ebp
retn    0Ch
; ---------------------------------------------------------------------------

loc_51F1D8:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+39↑j
; InfantryClass__ValidateTargetAndMove+3E↑j
mov     cl, [esi+298h]
test    cl, cl
jz      short loc_51F1EA
pop     edi
pop     esi
xor     al, al
pop     ebp
retn    0Ch
; ---------------------------------------------------------------------------

loc_51F1EA:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+50↑j
push    ebp
push    edi
push    eax
mov     ecx, esi
call    FootClass__ValidateMove
pop     edi
pop     esi
pop     ebp
retn    0Ch
*/
}

// ==== BACKFILL 0x0051DF10  InfantryClass::CancelMovement  cls=InfantryClass  sig=csp  renamed_refs=0 ====
int InfantryClass::CancelMovement()
{
    if (!this->Locomotor)
        WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 172))((_DWORD)this->Locomotor);
    this->unknown_int_6E8 = 2;
    this->Crawling = 0;
    this->SequenceAnim = (Sequence)0;
    return TechnoClass::CleanupDirection(this);
}

// ==== BACKFILL 0x0051DF60  InfantryClass::FireWeaponWithCleanup  cls=InfantryClass  sig=csp  renamed_refs=1 ====
int InfantryClass::FireWeaponWithCleanup(int a2, int a3)
{
    int v4;

    this->unknownBool68D = 0;
    v4 = TechnoClass::FireWeapon(this);
    if (v4)
    {
        if (!this->inLimbo)
        {
            if ((_BYTE)this->Type->Fraidycat)
            {
                if (!this->barrelRecoil)
                {
                    this->PanicDurationLeft = 300;
                    if (this->GetPrimaryOrFallback() == 1
                        || this->GetPrimaryOrFallback() == 15)
                    {
                        this->QueueMission(5, 0);
                    }
                }
            }
        }
    }
    return v4;
}

// ==== BACKFILL 0x0051DFF0  InfantryClass::MoveToCell  cls=InfantryClass  sig=csp  renamed_refs=0 ====
int InfantryClass::MoveToCell(int* a2, int a3)
{
    int* v3;
    int GroundHeight;
    bool v6;
    int* v7;
    int* v8;
    int v9;
    char v11;
    int v12;
    int v13;
    int v14;
    int v15[3];
    short v16[2];

    v3 = a2;
    GroundHeight = Cell::GetGroundHeight(a2);
    v12 = v3[0];
    v13 = v3[1];
    v14 = v3[2];
    if ( v14 == GroundHeight )
    {
        v6 = 1;
        if ( !IKnowWhatImDoing )
        {
            v16[0] = (short)(v3[0] / 256);
            v16[1] = (short)(v3[1] / 256);
            if ( LayerClass::IsWithinUsableArea((int*)DataGlobal_87F7E8, v16, 1) )
                v6 = 0;
        }
        v11 = (char)v6;
        v7 = (int*)Coord::To_Cell((int*)DataGlobal_87F7E8, v3);
        v8 = (int*)ObjectPlacement::CalcPosition(v7, v15, v3, v11, 0, 0);
        v12 = v8[0];
        v9 = v8[1];
        v13 = v9;
        if ( v12 == *(int*)&DataGlobal_A8F200 && v9 == *(int*)&DataGlobal_A8F204 && v8[2] == *(int*)&DataGlobal_A8F208 )
            return 0;
        v14 = GroundHeight;
    }
    if ( !FootClass::DispatchInput(this, &v12, a3) )
        return 0;
    if ( !this->Type->Sight )
        this->isDiscoveredByCurrentPlayer = 0;
    if ( v14 <= GroundHeight + *(int*)&DataGlobal_A8F234 )
        this->MarkCellPassability(&v12);
    this->unknown_int_6E8 = 2;
    return 1;

/* ASM:
sub     esp, 18h
push    ebx
push    esi
mov     esi, [esp+20h+arg_0]
push    edi
mov     edi, ecx
push    esi
mov     ecx, 87F7E8h
call    Cell__GetGroundHeight
mov     ebx, eax
mov     eax, esi
mov     ecx, [eax]
mov     [esp+24h+var_18], ecx
mov     edx, [eax+4]
mov     [esp+24h+var_14], edx
mov     eax, [eax+8]
cmp     eax, ebx
mov     [esp+24h+var_10], eax
jnz     loc_51E0CA
mov     eax, ds:0A8E7ACh
test    eax, eax
jnz     short loc_51E078
mov     eax, [esi]
lea     ecx, [esp+24h+arg_0]
cdq
and     edx, 0FFh
push    1
add     eax, edx
push    ecx
sar     eax, 8
mov     word ptr [esp+2Ch+arg_0], ax
mov     eax, [esi+4]
cdq
and     edx, 0FFh
mov     ecx, 87F7E8h
add     eax, edx
sar     eax, 8
mov     word ptr [esp+2Ch+arg_0+2], ax
mov     eax, [esp+2Ch+arg_0]
mov     [esp+2Ch+arg_0], eax
call    LayerClass__IsWithinUsableArea
test    al, al
jz      short loc_51E078
xor     eax, eax
jmp     short loc_51E07D
; ---------------------------------------------------------------------------

loc_51E078:                             ; CODE XREF: InfantryClass__MoveToCell+3E↑j
; InfantryClass__MoveToCell+82↑j
mov     eax, 1

loc_51E07D:                             ; CODE XREF: InfantryClass__MoveToCell+86↑j
push    0
push    0
push    eax
lea     edx, [esp+30h+var_C]
push    esi
push    edx
push    esi
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    ObjectPlacement__CalcPosition
mov     esi, dword_A8ED54+4ACh
mov     edx, eax
mov     eax, [edx]
mov     [esp+24h+var_18], eax
cmp     eax, esi
mov     ecx, [edx+4]
mov     [esp+24h+var_14], ecx
mov     edx, [edx+8]
jnz     short loc_51E0C6
cmp     ecx, dword_A8ED54+4B0h
jnz     short loc_51E0C6
cmp     edx, dword_A8ED54+4B4h
jz      short loc_51E129

loc_51E0C6:                             ; CODE XREF: InfantryClass__MoveToCell+C4↑j
; InfantryClass__MoveToCell+CC↑j
mov     [esp+24h+var_10], ebx

loc_51E0CA:                             ; CODE XREF: InfantryClass__MoveToCell+31↑j
mov     eax, [esp+24h+arg_4]
lea     ecx, [esp+24h+var_18]
push    eax
push    ecx
mov     ecx, edi
call    FootClass__DispatchInput
test    al, al
jz      short loc_51E129
mov     edx, [edi+6C0h]
mov     eax, [edx+5E8h]
test    eax, eax
jnz     short loc_51E0F6
mov     byte ptr [edi+41Bh], 0

loc_51E0F6:                             ; CODE XREF: InfantryClass__MoveToCell+FD↑j
mov     eax, dword_A8ED54+4E0h
mov     ecx, [esp+24h+var_10]
add     eax, ebx
cmp     ecx, eax
jg      short loc_51E114
mov     edx, [edi]
lea     eax, [esp+24h+var_18]
push    eax
mov     ecx, edi
call    dword ptr [edx+0F0h]

loc_51E114:                             ; CODE XREF: InfantryClass__MoveToCell+113↑j
mov     dword ptr [edi+6E8h], 2
pop     edi
pop     esi
mov     al, 1
pop     ebx
add     esp, 18h
retn    8
; ---------------------------------------------------------------------------

loc_51E129:                             ; CODE XREF: InfantryClass__MoveToCell+D4↑j
; InfantryClass__MoveToCell+ED↑j
pop     edi
pop     esi
xor     al, al
pop     ebx
add     esp, 18h
retn    8
*/
}

// ==== BACKFILL 0x0051F330  InfantryClass::FindPathToBuilding  cls=InfantryClass  sig=csp  renamed_refs=4 ====
int InfantryClass::FindPathToBuilding()
{
    int v2;
    int result;
    TechnoClass* v3;
    int v6;
    int v7[3];

    v2 = this->GetDeployWeaponIndex(0);
    v3 = (TechnoClass*)this->q2B4;
    if ( !v3 || (result = this->ValidateTarget(v3, v2), !(_BYTE)result) )
    {
        v7[0] = this->location.X;
        v7[1] = this->q0A0;
        v7[2] = this->q0A4;
        v6 = (*(int (__thiscall **)(int *, int, _DWORD *, _DWORD))(*(int **)this + 964))(this, 1, v7, 0);
        if ( (result = (int)this->q2B4) == 0 && !v6
          || (result = this->AssignTarget_SyncLog(v6), !v6) )
        {
            if ( this->currentMission != 5 )
            {
                InfantryTypeClass* v5;
                v5 = this->GetTypePtr();
                result = (int)v5;
                if ( !v5->JumpJet )
                    return this->ValidatePlacement(0, 1);
            }
        }
    }
    return result;
}

// ==== BACKFILL 0x0051F3E0  InfantryClass::EnterBuilding  cls=InfantryClass  sig=csp  renamed_refs=6 ====
int InfantryClass::EnterBuilding()
{
    TechnoClass* v2;
    BuildingClass* v3;
    BuildingTypeClass* v4;
    InfantryTypeClass* v7;
    int v10;
    void* MissionControl;

    if ( (this->Type->C4 || TechnoClass::HasVoiceResponse(this, 14))
      && (v2 = this->q2B4) != 0
      && (int)v2->whatAmI() == 6
      && (v3 = (BuildingClass*)this->q2B4, v4 = v3->Type, v4->CanC4)
      && !v4->InvisibleInGame )
    {
        this->AssignDestination_SyncLog(v3, 1);
        this->QueueMission(17, 0);
        return 1;
    }
    else if ( !House::IsCurrentPlayer(this->q21C)
           && (v2 = this->q2B4) != 0
           && (int)v2->whatAmI() == 6
           && (v7 = this->Type, v7->Infiltrate || (v7->Occupier || v7->Assaulter) && BuildingClass::CanRepair(v2, this)) )
    {
        this->AssignDestination_SyncLog(this->q2B4, 1);
        this->ForceMission(8);
        return 1;
    }
    else if ( House::IsCurrentPlayer(this->q21C)
           && (v10 = this->SequenceAnim, v10 == 27 || v10 == 28 || v10 == 29 || v10 == 30) )
    {
        this->FindPathToBuilding();
        MissionControl = MissionClass::GetMissionControl(this);
        v10 = Math::RoundToInt(*((double*)MissionControl + 2) * 900.0);
        return v10 + Random::Range((int*)g_ScenarioClass_Instance + 134, 0, 2);
    }
    else
    {
        return InfantryClass::ScanTarget(this);
    }


/* ASM:
push    esi
mov     esi, ecx
mov     eax, [esi+6C0h]
mov     cl, [eax+0EC2h]
test    cl, cl
jnz     short loc_51F400
push    0Eh
mov     ecx, esi
call    TechnoTypeClass__HasVoiceResponse
test    al, al
jz      short loc_51F456

loc_51F400:                             ; CODE XREF: InfantryClass__EnterBuilding+11↑j
mov     ecx, [esi+2B4h]
test    ecx, ecx
jz      short loc_51F456
mov     edx, [ecx]
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_51F456
mov     eax, [esi+2B4h]
mov     ecx, [eax+520h]
mov     dl, [ecx+1577h]
test    dl, dl
jz      short loc_51F456
mov     dl, [ecx+1701h]
test    dl, dl
jnz     short loc_51F456
mov     edx, [esi]
push    1
push    eax
mov     ecx, esi
call    dword ptr [edx+480h]
mov     eax, [esi]
push    0
push    11h
mov     ecx, esi
call    dword ptr [eax+1E8h]
mov     eax, 1
pop     esi
retn
; ---------------------------------------------------------------------------

loc_51F456:                             ; CODE XREF: InfantryClass__EnterBuilding+1E↑j
; InfantryClass__EnterBuilding+28↑j ...
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     short loc_51F4D3
mov     ecx, [esi+2B4h]
test    ecx, ecx
jz      short loc_51F4D3
mov     edx, [ecx]
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_51F4D3
mov     eax, [esi+6C0h]
mov     cl, [eax+0EBEh]
test    cl, cl
jnz     short loc_51F4AD
mov     cl, [eax+0EB4h]
test    cl, cl
jnz     short loc_51F49D
mov     cl, [eax+0EB5h]
test    cl, cl
jz      short loc_51F4D3

loc_51F49D:                             ; CODE XREF: InfantryClass__EnterBuilding+B1↑j
mov     ecx, [esi+2B4h]
push    esi
call    BuildingClass__CanRepair
test    al, al
jz      short loc_51F4D3

loc_51F4AD:                             ; CODE XREF: InfantryClass__EnterBuilding+A7↑j
mov     ecx, [esi+2B4h]
mov     eax, [esi]
push    1
push    ecx
mov     ecx, esi
call    dword ptr [eax+480h]
mov     edx, [esi]
push    8
mov     ecx, esi
call    dword ptr [edx+1F0h]
mov     eax, 1
pop     esi
retn
; ---------------------------------------------------------------------------

loc_51F4D3:                             ; CODE XREF: InfantryClass__EnterBuilding+83↑j
; InfantryClass__EnterBuilding+8D↑j ...
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jz      short loc_51F536
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      short loc_51F4FC
cmp     eax, 1Ch
jz      short loc_51F4FC
cmp     eax, 1Dh
jz      short loc_51F4FC
cmp     eax, 1Eh
jnz     short loc_51F536

loc_51F4FC:                             ; CODE XREF: InfantryClass__EnterBuilding+10B↑j
; InfantryClass__EnterBuilding+110↑j ...
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+428h]
mov     ecx, esi
call    MissionClass__GetMissionControl
fld     qword ptr [eax+10h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
mov     ecx, ds:0A8B230h
push    2
push    0
add     ecx, 218h
mov     esi, eax
call    Random__Range
add     eax, esi
pop     esi
retn
; ---------------------------------------------------------------------------

loc_51F536:                             ; CODE XREF: InfantryClass__EnterBuilding+100↑j
; InfantryClass__EnterBuilding+11A↑j
mov     ecx, esi
call    InfantryClass__ScanTarget
pop     esi
retn
*/
}

// ==== BACKFILL 0x0051F540  InfantryClass::ProcessEnterOrRepair  cls=InfantryClass  sig=csp  renamed_refs=7 ====
int InfantryClass::ProcessEnterOrRepair()
{
    /* IDA truth (disasm verified):
       A: !owner->IsCurrentPlayer() && target && target->whatAmI()[vt+0x2C]==6(Building)
          && (Type->Infiltrate(+3774) || (Type->Occupier(+3764) || Type->Assaulter(+3765))
// 0x457ce0
              && BuildingClass::CanRepair(target, this))
          -> vt+1152 AssignDestination_SyncLog(target, 1); vt+496 ForceMission(8=Capture); ret 1
       B: !owner->IsCurrentPlayer() && SequenceAnim(+1732) in {27 Deploy, 28 Deployed,
          29 DeployedFire, 30 DeployedIdle} && !target
          -> vt+1368 ProcessDeployAction(31 Undeploy, 0, 0); ret 1
// 0x4d5350
       else: tail call InfantryClass::ProcessDeploy (0x4D5350), eax passthrough */
    if (!this->q21C->IsCurrentPlayer()
        && this->q2B4 != nullptr
        && this->q2B4->whatAmI() == AbstractType::Building
        && (this->Type->Infiltrate
            || ((this->Type->Occupier || this->Type->Assaulter)
                && dynamic_cast<BuildingClass*>(this->q2B4)->CanRepair(this))))
    {
        this->AssignDestination_SyncLog(this->q2B4, 1);
        this->forceMission(Mission::Capture);
        return 1;
    }
    if (!this->q21C->IsCurrentPlayer()
        && (this->SequenceAnim == Sequence::Deploy
            || this->SequenceAnim == Sequence::Deployed
            || this->SequenceAnim == Sequence::DeployedFire
            || this->SequenceAnim == Sequence::DeployedIdle)
        && !this->q2B4)
    {
        this->ProcessDeployAction((int)Sequence::Undeploy, false, false);
        return 1;
    }
    InfantryClass::ProcessDeploy();
    return 0;
}

// ==== BACKFILL 0x0051F6E0  InfantryClass::ProcessIvanBomb  cls=InfantryClass  sig=csp  renamed_refs=0 ====
int InfantryClass::ProcessIvanBomb()
{
    InfantryTypeClass* v2;
    int v3;
    int v4;
    int* v5;
    int v6;
    __int16* v7;
    void* v8;
    InfantryTypeClass* v9;
    unsigned char v11[4];

    v2 = this->Type;
    if ( !v2->Deployer )
        return AbstractClass::COMStub_143();
    v3 = this->SequenceAnim;
    v4 = -1;
    if ( v3 == 27 || v3 == 28 || v3 == 29 || v3 == 30 )
    {
        if ( v2->UndeployDelay <= -1 )
            this->ProcessDeployAction(31, 1, 0);
    }
    else
    {
        this->ProcessDeployAction(27, 1, 0);
        v5 = (int*)this->Vt249to254();
        if ( IsNonNullPtr(v5) && *(unsigned char*)(*(int**)v5 + 336) )
        {
            if ( ObjectClass::StepCleanup(this, "DESO") )
            {
                v4 = *(int*)((char*)this->Type->Sequence + 976) + 1;
            }
            else
            {
                v6 = *(int*)this;
                v7 = (__int16*)this->GetCellCoords_Alt(v11);
                v8 = CellCoord::To_CellObj((int*)DataGlobal_87F7E8, v7);
                (*(void (__thiscall **)(int*, void*))((int*)v6 + 968))(this, v8);
            }
        }
        v9 = this->Type;
        if ( v9->UndeployDelay > -1 )
            v4 = v9->UndeployDelay;
    }
    this->ForceMission(5);
    this->AssignDestination_SyncLog(0, 1);
    if ( v4 > -1 )
        return v4;
    else
        return AbstractClass::COMStub_143();

}

// ==== BACKFILL 0x0051FAF0  InfantryClass::GetTypePtr  cls=InfantryClass  sig=csp  renamed_refs=0 ====
InfantryTypeClass* InfantryClass::GetTypePtr()
{
    /* IDA truth: return *(this + 432);  // this[432] dword = byte 1728 = Type */
    return Type;
}
