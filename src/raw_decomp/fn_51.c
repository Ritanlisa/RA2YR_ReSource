// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00510040  _DynamicVectorClass_PBVBuildingTypeClass::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_UScoutStruct___33::QueryInterface(
        _DynamicVectorClass_PBVBuildingTypeClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x510043*/
  *(_DWORD *)this->__pad_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x510046*/
  if ( v3 && BYTE1(this->m_C) ) /*0x510050*/
  {
    __3_YAXPAX_Z(v3); /*0x510058*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x510060*/
  }
  BYTE1(this->m_C) = 0; /*0x51006b*/
  this->m_8 = 0; /*0x510071*/
  if ( (a2 & 1) != 0 ) /*0x510078*/
    __3_YAXPAX_Z(this); /*0x51007b*/
  return this->__pad_0; /*0x510085*/
}



// ==== 0x00510090  _VectorClass_PAUStartingTechnoStruct_HouseClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UAngerStruct___16::QueryInterface(
        _VectorClass_PAUStartingTechnoStruct_HouseClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x510093*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HouseClass::StartingTechnoStruct *>::`vftable'; /*0x510096*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5100a0*/
  {
    __3_YAXPAX_Z(v3); /*0x5100a8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5100b0*/
  }
  BYTE1(this->m_C) = 0; /*0x5100bb*/
  this->m_8 = 0; /*0x5100c1*/
  if ( (a2 & 1) != 0 ) /*0x5100c8*/
    __3_YAXPAX_Z(this); /*0x5100cb*/
  return this->__pad_0; /*0x5100d5*/
}



// ==== 0x005100E0  _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_UAngerStruct::Constructor(
        _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5100e3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HouseClass::StartingTechnoStruct *>::`vftable'; /*0x5100e6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5100f0*/
  {
    __3_YAXPAX_Z(v3); /*0x5100f8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x510100*/
  }
  BYTE1(this->m_C) = 0; /*0x51010b*/
  this->m_8 = 0; /*0x510111*/
  if ( (a2 & 1) != 0 ) /*0x510118*/
    __3_YAXPAX_Z(this); /*0x51011b*/
  return this->__pad_0; /*0x510125*/
}



// ==== 0x00510130  _VectorClass_UAngerStruct::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UAngerStruct::QueryInterface(_VectorClass_UAngerStruct *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x510133*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AngerStruct>::`vftable'; /*0x510136*/
  if ( v3 && BYTE1(this->m_C) ) /*0x510140*/
  {
    __3_YAXPAX_Z(v3); /*0x510148*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x510150*/
  }
  BYTE1(this->m_C) = 0; /*0x51015b*/
  this->m_8 = 0; /*0x510161*/
  if ( (a2 & 1) != 0 ) /*0x510168*/
    __3_YAXPAX_Z(this); /*0x51016b*/
  return this->__pad_0; /*0x510175*/
}



// ==== 0x00510180  _DynamicVectorClass_UAngerStruct::Constructor_VectorClass_AngerStruct_  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_UAngerStruct::Constructor_VectorClass_AngerStruct_(
        _DynamicVectorClass_UAngerStruct *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x510183*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AngerStruct>::`vftable'; /*0x510186*/
  if ( v3 && BYTE1(this->m_C) ) /*0x510190*/
  {
    __3_YAXPAX_Z(v3); /*0x510198*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5101a0*/
  }
  BYTE1(this->m_C) = 0; /*0x5101ab*/
  this->m_8 = 0; /*0x5101b1*/
  if ( (a2 & 1) != 0 ) /*0x5101b8*/
    __3_YAXPAX_Z(this); /*0x5101bb*/
  return this->__pad_0; /*0x5101c5*/
}



// ==== 0x005101D0  _VectorClass_UScoutStruct::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UScoutStruct::QueryInterface(_VectorClass_UScoutStruct *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5101d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ScoutStruct>::`vftable'; /*0x5101d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5101e0*/
  {
    __3_YAXPAX_Z(v3); /*0x5101e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5101f0*/
  }
  BYTE1(this->m_C) = 0; /*0x5101fb*/
  this->m_8 = 0; /*0x510201*/
  if ( (a2 & 1) != 0 ) /*0x510208*/
    __3_YAXPAX_Z(this); /*0x51020b*/
  return this->__pad_0; /*0x510215*/
}



// ==== 0x00510220  ?$DynamicVectorClass@UScoutStruct@@::updateThreatMap  this=DynamicVector  sig=csp ====
_DWORD *__thiscall AbstractClass::sub_510220(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x510223*/
  *Block = &VectorClass<ScoutStruct>::`vftable'; /*0x510226*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x510230*/
  {
    __3_YAXPAX_Z(v3); /*0x510238*/
    *(Block + 1) = 0; /*0x510240*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x51024b*/
  *(Block + 2) = 0; /*0x510251*/
  if ( (a2 & 1) != 0 ) /*0x510258*/
    __3_YAXPAX_Z(Block); /*0x51025b*/
  return Block; /*0x510265*/
}



// ==== 0x00510270  _VectorClass_PAUBuildChoiceClass_HouseClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::QueryInterface(
        _VectorClass_PAUBuildChoiceClass_HouseClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x510273*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HouseClass::BuildChoiceClass *>::`vftable'; /*0x510276*/
  if ( v3 && BYTE1(this->m_C) ) /*0x510280*/
  {
    __3_YAXPAX_Z(v3); /*0x510288*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x510290*/
  }
  BYTE1(this->m_C) = 0; /*0x51029b*/
  this->m_8 = 0; /*0x5102a1*/
  if ( (a2 & 1) != 0 ) /*0x5102a8*/
    __3_YAXPAX_Z(this); /*0x5102ab*/
  return this->__pad_0; /*0x5102b5*/
}



// ==== 0x00510310  _VectorClass_PBVTeamTypeClass::Constructor_0  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_BuildingType::Constructor_0(_VectorClass_PBVTeamTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x510313*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TeamTypeClass const *>::`vftable'; /*0x510316*/
  if ( v3 && BYTE1(this->m_C) ) /*0x510320*/
  {
    __3_YAXPAX_Z(v3); /*0x510328*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x510330*/
  }
  BYTE1(this->m_C) = 0; /*0x51033b*/
  this->m_8 = 0; /*0x510341*/
  if ( (a2 & 1) != 0 ) /*0x510348*/
    __3_YAXPAX_Z(this); /*0x51034b*/
  return this->__pad_0; /*0x510355*/
}



// ==== 0x00510360  _VectorClass__N::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass__N::Add(_VectorClass__N *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x510363*/
  *(_DWORD *)this->__pad_0 = &VectorClass<bool>::`vftable'; /*0x510366*/
  if ( v3 && BYTE1(this->m_C) ) /*0x510370*/
  {
    __3_YAXPAX_Z(v3); /*0x510378*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x510380*/
  }
  BYTE1(this->m_C) = 0; /*0x51038b*/
  this->m_8 = 0; /*0x510391*/
  if ( (a2 & 1) != 0 ) /*0x510398*/
    __3_YAXPAX_Z(this); /*0x51039b*/
  return this->__pad_0; /*0x5103a5*/
}



// ==== 0x005103B0  _DynamicVectorClass__N::Constructor_VectorClass_bool_  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass__N::Constructor_VectorClass_bool_(_DynamicVectorClass__N *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5103b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<bool>::`vftable'; /*0x5103b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5103c0*/
  {
    __3_YAXPAX_Z(v3); /*0x5103c8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5103d0*/
  }
  BYTE1(this->m_C) = 0; /*0x5103db*/
  this->m_8 = 0; /*0x5103e1*/
  if ( (a2 & 1) != 0 ) /*0x5103e8*/
    __3_YAXPAX_Z(this); /*0x5103eb*/
  return this->__pad_0; /*0x5103f5*/
}



// ==== 0x00510400  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_flat::CopyConstructor(
        _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        char a2)
{
  int v3; // eax

  v3 = *(_DWORD *)&this->m_1[3]; /*0x510403*/
  *(_DWORD *)this->__pad_0 = &VectorClass<DiscreteDistributionClass<BuildingTypeClass>::DistributionObject<BuildingTypeClass *>>::`vftable'; /*0x510406*/
  if ( v3 && BYTE1(this->m_C) ) /*0x510410*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x510423*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x51042b*/
  }
  BYTE1(this->m_C) = 0; /*0x510436*/
  this->m_8 = 0; /*0x51043c*/
  if ( (a2 & 1) != 0 ) /*0x510443*/
    __3_YAXPAX_Z(this); /*0x510446*/
  return this->__pad_0; /*0x510450*/
}



// ==== 0x00510460  HouseClass::updatePowerState  this=HouseClass  sig=csp ====
char *__thiscall sub_510460(char *Block, char a2)
{
  char *v2; // esi

  v2 = Block; /*0x510461*/
  if ( (a2 & 2) != 0 ) /*0x51046a*/
  {
    v2 = Block - 4; /*0x51046f*/
    if ( (a2 & 1) != 0 ) /*0x510476*/
    {
      __3_YAXPAX_Z(v2); /*0x510479*/
      return v2; /*0x510484*/
    }
  }
  else if ( (a2 & 1) != 0 ) /*0x51048a*/
  {
    __3_YAXPAX_Z(Block); /*0x51048d*/
  }
  return v2; /*0x510483*/
}



// ==== 0x005104A0  _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::Constructor_0  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass__N_18::Constructor_0(
        _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        char a2)
{
  int v3; // eax

  v3 = *(_DWORD *)&this->m_1[3]; /*0x5104a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<DiscreteDistributionClass<BuildingTypeClass>::DistributionObject<BuildingTypeClass *>>::`vftable'; /*0x5104a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5104b0*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x5104c3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5104cb*/
  }
  BYTE1(this->m_C) = 0; /*0x5104d6*/
  this->m_8 = 0; /*0x5104dc*/
  if ( (a2 & 1) != 0 ) /*0x5104e3*/
    __3_YAXPAX_Z(this); /*0x5104e6*/
  return this->__pad_0; /*0x5104f0*/
}



// ==== 0x00510500  SuperClassVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall SuperClassVector::Construct(SuperClassVector *this, int a2, int a3)
{
  this->Items = 0; /*0x51050b*/
  this->Capacity = a2; /*0x51050e*/
  this->IsInitialized = 1; /*0x510511*/
  this->IsAllocated = 0; /*0x510515*/
  *this = (SuperClassVector)&VectorClass<SuperClass *>::`vftable'; /*0x510518*/
  if ( a2 ) /*0x51051e*/
  {
    if ( a3 ) /*0x510526*/
    {
      this->Items = a3; /*0x510528*/
      return this; /*0x51052e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x51053d*/
    this->IsAllocated = 1; /*0x510540*/
  }
  return this; /*0x51052d*/
}



// ==== 0x00510550  VectorClass::BuildingConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::BuildingConstructor(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x51055b*/
  this->Capacity = a2; /*0x51055e*/
  this->IsInitialized = 1; /*0x510561*/
  this->IsAllocated = 0; /*0x510565*/
  this->ptr_0 = &VectorClass<BuildingClass *>::`vftable'; /*0x510568*/
  if ( a2 ) /*0x51056e*/
  {
    if ( a3 ) /*0x510576*/
    {
      this->Items = (void *)a3; /*0x510578*/
      return &this->ptr_0; /*0x51057e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x51058d*/
    this->IsAllocated = 1; /*0x510590*/
  }
  return &this->ptr_0; /*0x51057d*/
}



// ==== 0x005105A0  VectorClass::BuildingTypeConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::BuildingTypeConstructor(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x5105ab*/
  this->Capacity = a2; /*0x5105ae*/
  this->IsInitialized = 1; /*0x5105b1*/
  this->IsAllocated = 0; /*0x5105b5*/
  this->ptr_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x5105b8*/
  if ( a2 ) /*0x5105be*/
  {
    if ( a3 ) /*0x5105c6*/
    {
      this->Items = (void *)a3; /*0x5105c8*/
      return &this->ptr_0; /*0x5105ce*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x5105dd*/
    this->IsAllocated = 1; /*0x5105e0*/
  }
  return &this->ptr_0; /*0x5105cd*/
}



// ==== 0x005105F0  ConnectionPointVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall ConnectionPointVector::Construct(ConnectionPointVector *this, int a2, int a3)
{
  this->Items = 0; /*0x5105fb*/
  this->Capacity = a2; /*0x5105fe*/
  this->IsInitialized = 1; /*0x510601*/
  this->IsAllocated = 0; /*0x510605*/
  *this = (ConnectionPointVector)&VectorClass<IConnectionPoint *>::`vftable'; /*0x510608*/
  if ( a2 ) /*0x51060e*/
  {
    if ( a3 ) /*0x510616*/
    {
      this->Items = a3; /*0x510618*/
      return this; /*0x51061e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x51062d*/
    this->IsAllocated = 1; /*0x510630*/
  }
  return this; /*0x51061d*/
}



// ==== 0x00510640  TagClassVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall TagClassVector::Construct(TagClassVector *this, int a2, int a3)
{
  this->Items = 0; /*0x51064b*/
  this->Capacity = a2; /*0x51064e*/
  this->IsInitialized = 1; /*0x510651*/
  this->IsAllocated = 0; /*0x510655*/
  *this = (TagClassVector)&VectorClass<TagClass *>::`vftable'; /*0x510658*/
  if ( a2 ) /*0x51065e*/
  {
    if ( a3 ) /*0x510666*/
    {
      this->Items = a3; /*0x510668*/
      return this; /*0x51066e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x51067d*/
    this->IsAllocated = 1; /*0x510680*/
  }
  return this; /*0x51066d*/
}



// ==== 0x00510690  StartingTechnoVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall StartingTechnoVector::Construct(StartingTechnoVector *this, int a2, int a3)
{
  this->Items = 0; /*0x51069b*/
  this->Capacity = a2; /*0x51069e*/
  this->IsInitialized = 1; /*0x5106a1*/
  this->IsAllocated = 0; /*0x5106a5*/
  *this = (StartingTechnoVector)&VectorClass<HouseClass::StartingTechnoStruct *>::`vftable'; /*0x5106a8*/
  if ( a2 ) /*0x5106ae*/
  {
    if ( a3 ) /*0x5106b6*/
    {
      this->Items = a3; /*0x5106b8*/
      return this; /*0x5106be*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5106cd*/
    this->IsAllocated = 1; /*0x5106d0*/
  }
  return this; /*0x5106bd*/
}



// ==== 0x005106E0  AngerVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall AngerVector::Construct(AngerVector *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // edx

  this->Items = 0; /*0x5106ed*/
  this->Capacity = a2; /*0x5106f0*/
  this->IsInitialized = 1; /*0x5106f3*/
  this->IsAllocated = 0; /*0x5106f7*/
  *this = (AngerVector)&VectorClass<AngerStruct>::`vftable'; /*0x5106fa*/
  if ( !a2 ) /*0x510700*/
    return this; /*0x510700*/
  if ( !a3 ) /*0x510708*/
  {
    v7 = __2_YAPAXI_Z(8 * a2); /*0x510732*/
    if ( v7 ) /*0x51073c*/
    {
      v8 = (_DWORD *)v7; /*0x510741*/
      if ( a2 - 1 >= 0 ) /*0x510745*/
      {
        v9 = a2; /*0x510747*/
        do /*0x510751*/
        {
          *v8 = 0; /*0x510748*/
          v8[1] = 0; /*0x51074a*/
          v8 += 2; /*0x51074d*/
          --v9; /*0x510750*/
        }
        while ( v9 ); /*0x510751*/
        this->Items = v7; /*0x510753*/
        this->IsAllocated = 1; /*0x510756*/
        return this; /*0x51075f*/
      }
    }
    else
    {
      v7 = 0; /*0x510762*/
    }
    this->Items = v7; /*0x510764*/
    this->IsAllocated = 1; /*0x510767*/
    return this; /*0x51076b*/
  }
  v4 = a3; /*0x51070d*/
  if ( a2 - 1 >= 0 ) /*0x510711*/
  {
    v5 = a2; /*0x510713*/
    do /*0x51071d*/
    {
      *v4 = 0; /*0x510714*/
      v4[1] = 0; /*0x510716*/
      v4 += 2; /*0x510719*/
      --v5; /*0x51071c*/
    }
    while ( v5 ); /*0x51071d*/
  }
  this->Items = a3; /*0x51071f*/
  return this; /*0x510724*/
}



// ==== 0x00510780  ScoutVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall ScoutVector::Construct(ScoutVector *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx

  this->Items = 0; /*0x51078d*/
  this->Capacity = a2; /*0x510790*/
  this->IsInitialized = 1; /*0x510793*/
  this->IsAllocated = 0; /*0x510797*/
  *this = (ScoutVector)&VectorClass<ScoutStruct>::`vftable'; /*0x51079a*/
  if ( !a2 ) /*0x5107a0*/
    return this; /*0x5107a0*/
  if ( !a3 ) /*0x5107a8*/
  {
    v7 = __2_YAPAXI_Z(8 * a2); /*0x5107d2*/
    if ( v7 ) /*0x5107dc*/
    {
      v8 = v7; /*0x5107e1*/
      if ( a2 - 1 >= 0 ) /*0x5107e5*/
      {
        v9 = a2; /*0x5107e7*/
        do /*0x5107f1*/
        {
          *(_DWORD *)v8 = 0; /*0x5107e8*/
          *(_BYTE *)(v8 + 4) = 0; /*0x5107ea*/
          v8 += 8; /*0x5107ed*/
          --v9; /*0x5107f0*/
        }
        while ( v9 ); /*0x5107f1*/
        this->Items = v7; /*0x5107f3*/
        this->IsAllocated = 1; /*0x5107f6*/
        return this; /*0x5107ff*/
      }
    }
    else
    {
      v7 = 0; /*0x510802*/
    }
    this->Items = v7; /*0x510804*/
    this->IsAllocated = 1; /*0x510807*/
    return this; /*0x51080b*/
  }
  v4 = a3; /*0x5107ad*/
  if ( a2 - 1 >= 0 ) /*0x5107b1*/
  {
    v5 = a2; /*0x5107b3*/
    do /*0x5107bd*/
    {
      *(_DWORD *)v4 = 0; /*0x5107b4*/
      *(_BYTE *)(v4 + 4) = 0; /*0x5107b6*/
      v4 += 8; /*0x5107b9*/
      --v5; /*0x5107bc*/
    }
    while ( v5 ); /*0x5107bd*/
  }
  this->Items = a3; /*0x5107bf*/
  return this; /*0x5107c4*/
}



// ==== 0x00510820  HouseClass::processAIEvents  this=HouseClass  sig=csp ====
char __thiscall HouseClass::processAIEvents(HouseClass *this, int a2)
{
  int uniqueId; // edx
  int v3; // eax
  int v4; // edx

  uniqueId = this->?; /*0x510820*/
  v3 = a2; /*0x510823*/
  if ( a2 >= uniqueId ) /*0x510829*/
    return 0; /*0x51084c*/
  v4 = uniqueId - 1; /*0x51082b*/
  this->? = v4; /*0x51082e*/
  if ( a2 < v4 ) /*0x510831*/
  {
    do /*0x510844*/
    {
      ++v3; /*0x510837*/
      *((_DWORD *)this->? + v3 - 1) = *((_DWORD *)this->? + v3); /*0x51083b*/
    }
    while ( v3 < this->? ); /*0x510844*/
  }
  return 1; /*0x510849*/
}



// ==== 0x00510860  BuildLocationVector::Grow  this=BuildLocationVector  sig=csp ====
char __thiscall BuildLocationVector::Grow(int this, int a2)
{
  char *v3; // edi
  int i; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x51086c*/
    return 0; /*0x51086c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *(_DWORD *)(this + 8))); /*0x510880*/
  if ( !v3 ) /*0x510887*/
    return 0; /*0x5108e0*/
  for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)&v3[v5 + 4] = v6[1] ) /*0x510895*/
  {
    v5 = 8 * i; /*0x510899*/
    v6 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x5108a2*/
    *(_DWORD *)&v3[v5] = *v6; /*0x5108a7*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x5108bb*/
  v7 = a2 + *(_DWORD *)(this + 8); /*0x5108c6*/
  *(_DWORD *)this = v3; /*0x5108c8*/
  *(_DWORD *)(this + 8) = v7; /*0x5108ca*/
  *(_DWORD *)(this + 16) = 0; /*0x5108cd*/
  return 1; /*0x5108d4*/
}



// ==== 0x005108F0  globalHelper_0108F0  this=-  sig=ida-proto ====
int __cdecl globalHelper_0108F0(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x510900*/
  else
    return *a1 >= *a2 ? 1 : -1;
}



// ==== 0x00510920  BoolVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall BoolVector::Construct(BoolVector *this, size_t Size, int a3)
{
  this->Items = 0; /*0x51092b*/
  this->Capacity = Size; /*0x51092e*/
  this->IsInitialized = 1; /*0x510931*/
  this->IsAllocated = 0; /*0x510935*/
  *this = (BoolVector)&VectorClass<bool>::`vftable'; /*0x510938*/
  if ( Size ) /*0x51093e*/
  {
    if ( a3 ) /*0x510946*/
    {
      this->Items = a3; /*0x510948*/
      return this; /*0x51094e*/
    }
    this->Items = __2_YAPAXI_Z(Size); /*0x51095a*/
    this->IsAllocated = 1; /*0x51095d*/
  }
  return this; /*0x51094d*/
}



// ==== 0x00510970  DistributionVector_BuildingType::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall DistributionVector_BuildingType::Construct(
        DistributionVector_BuildingType *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  int *v7; // eax
  _DWORD *v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx

  this->Items = 0; /*0x51097a*/
  this->Capacity = a2; /*0x510981*/
  this->IsInitialized = 1; /*0x510984*/
  this->IsAllocated = 0; /*0x510988*/
  *this = (DistributionVector_BuildingType)&VectorClass<DiscreteDistributionClass<BuildingTypeClass>::DistributionObject<BuildingTypeClass *>>::`vftable'; /*0x51098c*/
  if ( !a2 ) /*0x510992*/
    return this; /*0x510992*/
  if ( a3 ) /*0x51099a*/
  {
    *a3 = a2; /*0x51099f*/
    if ( a2 - 1 >= 0 ) /*0x5109a6*/
    {
      v4 = a3 + 2; /*0x5109a8*/
      v5 = a2; /*0x5109ab*/
      do /*0x5109b6*/
      {
        *v4 = 0; /*0x5109ac*/
        v4 += 2; /*0x5109b2*/
        --v5; /*0x5109b5*/
      }
      while ( v5 ); /*0x5109b6*/
    }
    this->Items = a3 + 1; /*0x5109b8*/
    return this; /*0x5109bf*/
  }
  v7 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x5109ca*/
  if ( !v7 ) /*0x5109d4*/
  {
    this->IsAllocated = 1; /*0x510a04*/
    this->Items = 0; /*0x510a08*/
    return this; /*0x510a0b*/
  }
  *v7 = a2; /*0x5109d9*/
  v8 = v7 + 1; /*0x5109dd*/
  if ( a2 - 1 >= 0 ) /*0x5109e0*/
  {
    v9 = v7 + 2; /*0x5109e2*/
    v10 = a2; /*0x5109e5*/
    do /*0x5109f0*/
    {
      *v9 = 0; /*0x5109e6*/
      v9 += 2; /*0x5109ec*/
      --v10; /*0x5109ef*/
    }
    while ( v10 ); /*0x5109f0*/
  }
  this->IsAllocated = 1; /*0x5109f4*/
  this->Items = v8; /*0x5109f8*/
  return this; /*0x5109bd*/
}



// ==== 0x00510A20  AbstractClass::saveToStream  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::sub_510A20(int a1, const void *a2, _DWORD *a3)
{
  return HouseClass::QueryInterface(a1 - 4, a2, a3);
}



// ==== 0x00510A30  AbstractClass::loadFromStream  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::sub_510A30(int a1)
{
  return HouseClass::COMStub_Ret1_1(a1 - 4);
}



// ==== 0x00510A40  AbstractClass::computeSize  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::sub_510A40(int a1)
{
  return HouseClass::COMStub_Ret1_2(a1 - 4);
}



// ==== 0x00510A50  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_2  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510A50(int a1, const void *a2, _DWORD *a3)
{
  return HouseClass::QueryInterface(a1 - 36, a2, a3);
}



// ==== 0x00510A60  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_3  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510A60(int a1)
{
  return HouseClass::COMStub_Ret1_1(a1 - 36);
}



// ==== 0x00510A70  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_4  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510A70(int a1)
{
  return HouseClass::COMStub_Ret1_2(a1 - 36);
}



// ==== 0x00510A80  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_5  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510A80(int a1, const void *a2, _DWORD *a3)
{
  return HouseClass::QueryInterface(a1 - 40, a2, a3);
}



// ==== 0x00510A90  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_6  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510A90(int a1)
{
  return HouseClass::COMStub_Ret1_1(a1 - 40);
}



// ==== 0x00510AA0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_7  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510AA0(int a1)
{
  return HouseClass::COMStub_Ret1_2(a1 - 40);
}



// ==== 0x00510AB0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_8  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510AB0(int a1)
{
  return VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_1(a1 - 4);
}



// ==== 0x00510AC0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_9  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
BSTR __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510AC0(int a1)
{
  return VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex(a1 - 4);
}



// ==== 0x00510AD0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_10  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510AD0(int a1, const void *a2, _DWORD *a3)
{
  return HouseClass::QueryInterface(a1 - 44, a2, a3);
}



// ==== 0x00510AE0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_11  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510AE0(int a1)
{
  return HouseClass::COMStub_Ret1_1(a1 - 44);
}



// ==== 0x00510AF0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_12  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510AF0(int a1)
{
  return HouseClass::COMStub_Ret1_2(a1 - 44);
}



// ==== 0x00510B00  sub_510B00  this=-  sig=ida-proto ====
void sub_510B00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x510b0c*/
  dbl_A8F068 = Math::Sqrt(v0 + v0); /*0x510b1e*/
}



// ==== 0x00510B30  sub_510B30  this=-  sig=ida-proto ====
void sub_510B30()
{
  dbl_A8F0B8 = dbl_A8F068 / 60.0; /*0x510b3c*/
}



// ==== 0x00510B50  sub_510B50  this=-  sig=ida-proto ====
void sub_510B50()
{
  dbl_A8F0A0 = 1.0 / dbl_A8F0B8; /*0x510b5c*/
}



// ==== 0x00510B70  sub_510B70  this=-  sig=ida-proto ====
void sub_510B70()
{
  dbl_A8F098 = 0.0174532925199433 * 45.0; /*0x510b7c*/
}



// ==== 0x00510B90  sub_510B90  this=-  sig=ida-proto ====
void sub_510B90()
{
  dbl_A8F070 = 0.0174532925199433 * 60.0; /*0x510b9c*/
}



// ==== 0x00510BB0  sub_510BB0  this=-  sig=ida-proto ====
void sub_510BB0()
{
  dbl_A8F048 = 0.0174532925199433 * 90.0; /*0x510bbc*/
}



// ==== 0x00510BD0  sub_510BD0  this=-  sig=ida-proto ====
__int64 sub_510BD0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A8F048 - dbl_A8F070); /*0x510be2*/
  result = Math::RoundToInt(v0 * dbl_A8F068 * 0.5); /*0x510bf6*/
  dword_A8F0C0 = result; /*0x510bfb*/
  return result; /*0x510c00*/
}



// ==== 0x00510C10  sub_510C10  this=-  sig=ida-proto ====
void sub_510C10()
{
  dbl_A8F078 = Math::ArcTan((double)dword_A8F0C0 * 0.00390625); /*0x510c27*/
}



// ==== 0x00510C40  sub_510C40  this=-  sig=ida-proto ====
void sub_510C40()
{
  dbl_A8F090 = Math::ArcTan((double)(2 * dword_A8F0C0) / dbl_A8F068); /*0x510c62*/
}



// ==== 0x00510C70  sub_510C70  this=-  sig=ida-proto ====
__int64 sub_510C70()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F0C0) + 0.5); /*0x510c8b*/
  dword_A8F0B4 = result; /*0x510c90*/
  return result; /*0x510c96*/
}



// ==== 0x00510CA0  sub_510CA0  this=-  sig=ida-proto ====
int sub_510CA0()
{
  word_A8F060 = 0; /*0x510ca2*/
  word_A8F062 = 0; /*0x510ca8*/
  return 0; /*0x510cae*/
}



// ==== 0x00510CB0  sub_510CB0  this=-  sig=ida-proto ====
int sub_510CB0()
{
  dword_A8F080 = 0; /*0x510cb2*/
  dword_A8F084 = 0; /*0x510cb7*/
  dword_A8F088 = 0; /*0x510cbc*/
  return 0; /*0x510cc1*/
}



// ==== 0x00510CD0  sub_510CD0  this=-  sig=ida-proto ====
int sub_510CD0()
{
  dword_A8F0B0 = 0; /*0x510cd5*/
  dword_A8F0A8 = 128; /*0x510cdf*/
  dword_A8F0AC = 128; /*0x510ce4*/
  return 128; /*0x510ce9*/
}



// ==== 0x00510CF0  sub_510CF0  this=-  sig=ida-proto ====
int sub_510CF0()
{
  dword_A8F050 = 0; /*0x510cf2*/
  dword_A8F054 = 0; /*0x510cf7*/
  dword_A8F058 = 0; /*0x510cfc*/
  dword_A8F05C = 0; /*0x510d01*/
  return 0; /*0x510d06*/
}



// ==== 0x00510E10  FormatHouseClassPlayerName  this=-  sig=csp ====
unsigned int __fastcall HouseClass_FormatPlayerName(int a1, _BYTE *a2, int a3)
{
  unsigned int result; // eax
  const char *v4; // edi

  result = a3; /*0x510e10*/
  if ( a3 < 16 ) /*0x510e19*/
  {
    if ( a3 < 1 ) /*0x510e1e*/
      return result; /*0x510e1e*/
    *a2 = 0; /*0x510e24*/
  }
  switch ( a1 ) /*0x510e2d*/
  {
    case 4475: /*0x510e2d*/
      v4 = g_Str__Player___A_; /*0x510e2f*/
      break;
    case 4476: /*0x510e2d*/
      v4 = g_Str__Player___B_; /*0x510e3e*/
      break;
    case 4477: /*0x510e2d*/
      v4 = g_Str__Player___C_; /*0x510e4d*/
      break;
    case 4478: /*0x510e2d*/
      v4 = g_Str__Player___D_; /*0x510e5c*/
      break;
    case 4479: /*0x510e2d*/
      v4 = aPlayerE; /*0x510e6b*/
      break;
    case 4480: /*0x510e2d*/
      v4 = aPlayerF; /*0x510e7a*/
      break;
    case 4481: /*0x510e2d*/
      v4 = aPlayerG; /*0x510e89*/
      break;
    default:
      v4 = unk_825000; /*0x510e96*/
      if ( a1 != 4482 ) /*0x510e9b*/
        v4 = &g_INI_DefaultBuffer; /*0x510e9d*/
      break;
  }
  result = strlen(v4) + 1; /*0x510ea7*/
  qmemcpy(a2, v4, result); /*0x510eb6*/
  return result; /*0x510ebf*/
}



// ==== 0x00510ED0  BuildingType::FindOwnerHouse  this=BuildingType  sig=csp ====
int __thiscall BuildingType::FindOwnerHouse(BuildingType *this)
{
  int v1; // eax

  if ( this == (BuildingType *)4475 ) /*0x510ed6*/
  {
    v1 = BuildingType::Init((BuildingType *)dword_A8B230, 0); /*0x510eda*/
  }
  else if ( this == (BuildingType *)4476 ) /*0x510ee2*/
  {
    v1 = BuildingType::Init((BuildingType *)dword_A8B230, 1u); /*0x510ee6*/
  }
  else if ( this == (BuildingType *)4477 ) /*0x510eee*/
  {
    v1 = BuildingType::Init((BuildingType *)dword_A8B230, 2u); /*0x510ef2*/
  }
  else if ( this == (BuildingType *)4478 ) /*0x510efa*/
  {
    v1 = BuildingType::Init((BuildingType *)dword_A8B230, 3u); /*0x510efe*/
  }
  else if ( this == (BuildingType *)4479 ) /*0x510f06*/
  {
    v1 = BuildingType::Init((BuildingType *)dword_A8B230, 4u); /*0x510f0a*/
  }
  else if ( this == (BuildingType *)4480 ) /*0x510f12*/
  {
    v1 = BuildingType::Init((BuildingType *)dword_A8B230, 5u); /*0x510f16*/
  }
  else if ( this == (BuildingType *)4481 ) /*0x510f1e*/
  {
    v1 = BuildingType::Init((BuildingType *)dword_A8B230, 6u); /*0x510f22*/
  }
  else
  {
    if ( this != (BuildingType *)4482 ) /*0x510f2a*/
      return 0; /*0x510f2a*/
    v1 = BuildingType::Init((BuildingType *)dword_A8B230, 7u); /*0x510f34*/
  }
  if ( v1 >= 0 && v1 < dword_A80238 ) /*0x510f43*/
    return *(&dword_A8022C->ptr_0 + v1); /*0x510f4e*/
  return 0; /*0x510f4e*/
}



// ==== 0x00510F60  BuildingType::IsSpecialType  this=IUnknown  sig=csp ====
int __thiscall BuildingType::IsSpecialType(BuildingType *this)
{
  int result; // eax

  LOBYTE(result) = this == (BuildingType *)4475 /*0x510fa3*/
                || this == (BuildingType *)4476
                || this == (BuildingType *)4477
                || this == (BuildingType *)4478
                || this == (BuildingType *)4479
                || this == (BuildingType *)4480
                || this == (BuildingType *)4481
                || this == (BuildingType *)4482;
  return result; /*0x510fa2*/
}



// ==== 0x00510FB0  PlayerSlot::NameToDialogID  this=PlayerSlot  sig=csp ====
int __thiscall PlayerSlot::NameToDialogID(const char *this)
{
  if ( !strcmp(this, g_Str__Player___A_) ) /*0x510fc4*/
    return 4475; /*0x510fef*/
  if ( !strcmp(this, g_Str__Player___B_) ) /*0x511005*/
    return 4476; /*0x511030*/
  if ( !strcmp(this, g_Str__Player___C_) ) /*0x511046*/
    return 4477; /*0x511071*/
  if ( !strcmp(this, g_Str__Player___D_) ) /*0x511087*/
    return 4478; /*0x5110b2*/
  if ( !strcmp(this, aPlayerE) ) /*0x5110c8*/
    return 4479; /*0x5110f3*/
  if ( !strcmp(this, aPlayerF) ) /*0x511109*/
    return 4480; /*0x511134*/
  if ( !strcmp(this, aPlayerG) ) /*0x51114a*/
    return 4481; /*0x511175*/
  if ( !strcmp(this, unk_825000) ) /*0x51118b*/
    return 4482; /*0x5111b5*/
  return -1; /*0x510fed*/
}



// ==== 0x005111E0  sub_5111E0  this=-  sig=ida-proto ====
int sub_5111E0()
{
  dword_A8F0D0 = 0; /*0x5111e2*/
  dword_A8F0D4 = 0; /*0x5111e7*/
  dword_A8F0D8 = 0; /*0x5111ec*/
  dword_A8F0DC = 0; /*0x5111f1*/
  return 0; /*0x5111f6*/
}



// ==== 0x00511200  sub_511200  this=-  sig=ida-proto ====
void sub_511200()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x51120c*/
  dbl_A8F0E8 = Math::Sqrt(v0 + v0); /*0x51121e*/
}



// ==== 0x00511230  sub_511230  this=-  sig=ida-proto ====
void sub_511230()
{
  dbl_A8F138 = dbl_A8F0E8 / 60.0; /*0x51123c*/
}



// ==== 0x00511250  sub_511250  this=-  sig=ida-proto ====
void sub_511250()
{
  dbl_A8F120 = 1.0 / dbl_A8F138; /*0x51125c*/
}



// ==== 0x00511270  sub_511270  this=-  sig=ida-proto ====
void sub_511270()
{
  dbl_A8F118 = 0.0174532925199433 * 45.0; /*0x51127c*/
}



// ==== 0x00511290  sub_511290  this=-  sig=ida-proto ====
void sub_511290()
{
  dbl_A8F0F0 = 0.0174532925199433 * 60.0; /*0x51129c*/
}



// ==== 0x005112B0  sub_5112B0  this=-  sig=ida-proto ====
void sub_5112B0()
{
  dbl_A8F0C8 = 0.0174532925199433 * 90.0; /*0x5112bc*/
}



// ==== 0x005112D0  sub_5112D0  this=-  sig=ida-proto ====
__int64 sub_5112D0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A8F0C8 - dbl_A8F0F0); /*0x5112e2*/
  result = Math::RoundToInt(v0 * dbl_A8F0E8 * 0.5); /*0x5112f6*/
  dword_A8F140 = result; /*0x5112fb*/
  return result; /*0x511300*/
}



// ==== 0x00511310  sub_511310  this=-  sig=ida-proto ====
void sub_511310()
{
  dbl_A8F0F8 = Math::ArcTan((double)dword_A8F140 * 0.00390625); /*0x511327*/
}



// ==== 0x00511340  sub_511340  this=-  sig=ida-proto ====
void sub_511340()
{
  dbl_A8F110 = Math::ArcTan((double)(2 * dword_A8F140) / dbl_A8F0E8); /*0x511362*/
}



// ==== 0x00511370  sub_511370  this=-  sig=ida-proto ====
__int64 sub_511370()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F140) + 0.5); /*0x51138b*/
  dword_A8F134 = result; /*0x511390*/
  return result; /*0x511396*/
}



// ==== 0x005113A0  sub_5113A0  this=-  sig=ida-proto ====
int sub_5113A0()
{
  word_A8F0E0 = 0; /*0x5113a2*/
  word_A8F0E2 = 0; /*0x5113a8*/
  return 0; /*0x5113ae*/
}



// ==== 0x005113B0  sub_5113B0  this=-  sig=ida-proto ====
int sub_5113B0()
{
  dword_A8F100 = 0; /*0x5113b2*/
  dword_A8F104 = 0; /*0x5113b7*/
  dword_A8F108 = 0; /*0x5113bc*/
  return 0; /*0x5113c1*/
}



// ==== 0x005113D0  sub_5113D0  this=-  sig=ida-proto ====
int sub_5113D0()
{
  dword_A8F130 = 0; /*0x5113d5*/
  dword_A8F128 = 128; /*0x5113df*/
  dword_A8F12C = 128; /*0x5113e4*/
  return 128; /*0x5113e9*/
}



// ==== 0x005113F0  SuperWeaponTypeClass::Construct  this=HouseTypeClass  sig=csp ====
_BYTE *__thiscall SuperWeaponTypeClass::Construct(SuperWeaponTypeClass *this, char *Source)
{
  BuildingTypeClass *v3; // ebx
  int v4; // eax
  bool v5; // zf
  int v6; // ecx
  SuperWeaponTypeClass **v7; // edx
  SuperWeaponTypeClass **v8; // ecx

  AbstractTypeClass::Constructor((int *)this, Source); /*0x5113fa*/
  v3 = 0; /*0x5113ff*/
  LOBYTE(this->ArrayIndex) = 0; /*0x511404*/
  this->Type = (BuildingTypeClass *)-1; /*0x51140a*/
  this->SidebarImage = (SHPStruct *)-1; /*0x511410*/
  this->ActionValue[0] = -1; /*0x511416*/
  this->SpecialSound = 0; /*0x51141c*/
  this->AuxBuilding = 0; /*0x511427*/
  this->SidebarImageFile[0] = 1072693248; /*0x51142d*/
  this->SidebarImageFile[1] = 0; /*0x511433*/
  this->SidebarImageFile[2] = 1072693248; /*0x511439*/
  this->SidebarImageFile[3] = 0; /*0x51143f*/
  this->SidebarImageFile[4] = 1072693248; /*0x511445*/
  this->SidebarImageFile[5] = 0; /*0x51144b*/
  *(_DWORD *)&this->zero_E4 = 1072693248; /*0x511451*/
  this->FlashSidebarTabFrames = 0; /*0x511457*/
  this->PreDependent = 0; /*0x51145d*/
  this->Range = 0.0; /*0x511463*/
  *(_DWORD *)&this->AIDefendAgainst = 1072693248; /*0x511469*/
  *(_DWORD *)&this->ShowTimer = 1072693248; /*0x51146f*/
  this->LineMultiplier = 1072693248; /*0x511475*/
  this->rofMult = 1065353216; /*0x51148a*/
  this->q104 = 1065353216; /*0x511490*/
  this->q042 = 1065353216; /*0x511496*/
  this->q10C = 1065353216; /*0x51149c*/
  this->q044 = 1065353216; /*0x5114a2*/
  this->q114 = 1065353216; /*0x5114a8*/
  this->q118 = 1065353216; /*0x5114ae*/
  this->q11C = 1065353216; /*0x5114b4*/
  this->costMult = 1065353216; /*0x5114ba*/
  this->q124 = 1065353216; /*0x5114c0*/
  this->q04A = 1065353216; /*0x5114c6*/
  this->q12C = 1065353216; /*0x5114cc*/
  this->q04C = 1065353216; /*0x5114d2*/
  this->q134 = 1065353216; /*0x5114d8*/
  this->q138 = 1065353216; /*0x5114de*/
  this->q04F = 1065353216; /*0x5114e4*/
  this->buildtimeMult = 1065353216; /*0x5114ea*/
  this->q144 = 1065353216; /*0x5114f0*/
  this->q148 = 1065353216; /*0x5114f6*/
  InfantryTypeVector::Construct2((InfantryTypeVector *)((char *)this + 332), 0, 0); /*0x5114fc*/
  this->armorInfantryMult = 10; /*0x511501*/
  this->q15C = 0; /*0x511508*/
  this->q14C = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x51150b*/
  UnitTypeVector::ConstructUnitTypeVectorClass((UnitTypeVector *)((char *)this + 360), 0, 0); /*0x51151b*/
  this->u32_17C = 10; /*0x511520*/
  this->u32_178 = 0; /*0x511527*/
  this->q168 = &TypeList<UnitTypeClass const *>::`vftable'; /*0x51152a*/
  AircraftTypeVector::Constructor((AircraftTypeVector *)this + 97, 0, 0); /*0x51153a*/
  this->q198 = 10; /*0x511542*/
  this->q194 = 0; /*0x511549*/
  this->q184 = &TypeList<AircraftTypeClass const *>::`vftable'; /*0x51154c*/
  this->q1A4 = 16777281; /*0x511552*/
  this->q1A8 = 0; /*0x51156c*/
  this->AbstractTypeClass = &HouseTypeClass::`vftable'; /*0x511572*/
  this->? = &HouseTypeClass::`vftable'; /*0x511578*/
  this->? = &HouseTypeClass::`vftable'; /*0x51157f*/
  this->? = &HouseTypeClass::`vftable'; /*0x511586*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x51158d*/
  this->q1A0 = 0; /*0x511592*/
  v4 = dword_A83CA8; /*0x511598*/
  if ( dword_A83CA8 < dword_A83CA0 /*0x5115d6*/
    || (byte_A83CA5 || !dword_A83CA0)
    && dword_A83CAC[0] > 0
    && (v5 = (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A83C98 + 8))(
               &dword_A83C98,
               dword_A83CA0 + dword_A83CAC[0],
               0) == 0,
        v4 = dword_A83CA8,
        !v5) )
  {
    dword_A83CA8 = v4 + 1; /*0x5115db*/
    *((_DWORD *)dword_A83C9C + v4) = this; /*0x5115e5*/
    v4 = dword_A83CA8; /*0x5115e8*/
  }
  v6 = 0; /*0x5115ed*/
  if ( v4 <= 0 ) /*0x5115f1*/
  {
LABEL_11:
    v6 = -1; /*0x511605*/
  }
  else
  {
    v7 = (SuperWeaponTypeClass **)dword_A83C9C; /*0x5115f3*/
    while ( *v7 != this ) /*0x5115fb*/
    {
      ++v6; /*0x5115fd*/
      ++v7; /*0x5115fe*/
      if ( v6 >= v4 ) /*0x511603*/
        goto LABEL_11; /*0x511603*/
    }
  }
  this->SidebarImage = (SHPStruct *)v6; /*0x511608*/
  if ( dword_A83CA8 <= 0 ) /*0x511615*/
  {
LABEL_16:
    this->Type = (BuildingTypeClass *)-1; /*0x511629*/
    return this; /*0x511633*/
  }
  else
  {
    v8 = (SuperWeaponTypeClass **)dword_A83C9C; /*0x511617*/
    while ( *v8 != this ) /*0x51161f*/
    {
      v3 = (BuildingTypeClass *)((char *)v3 + 1); /*0x511621*/
      ++v8; /*0x511622*/
      if ( (int)v3 >= dword_A83CA8 ) /*0x511627*/
        goto LABEL_16; /*0x511627*/
    }
    this->Type = v3; /*0x51163a*/
    return this; /*0x511640*/
  }
}



// ==== 0x00511650  HouseTypeClass::loadVeteranWeapons  this=HouseTypeClass  sig=csp ====
_DWORD *__thiscall HouseTypeClass::loadVeteranWeapons(HouseTypeClass *this, int a2)
{
  AbstractTypeClass::Init((int)this, a2); /*0x511658*/
  this->veteranInfantry[0] = (int)&TypeList<InfantryTypeClass const *>::`vftable'; /*0x51165d*/
  *(_DWORD *)&this->prefix = &TypeList<UnitTypeClass const *>::`vftable'; /*0x511667*/
  *(_DWORD *)&this->__pad_16D[23] = &TypeList<AircraftTypeClass const *>::`vftable'; /*0x511671*/
  this->AbstractClass = &HouseTypeClass::`vftable'; /*0x51167b*/
  this->? = &HouseTypeClass::`vftable'; /*0x511681*/
  this->? = &HouseTypeClass::`vftable'; /*0x511688*/
  this->? = &HouseTypeClass::`vftable'; /*0x51168f*/
  return &this->AbstractClass; /*0x511698*/
}



// ==== 0x005116A0  HouseTypeClass::Dtor  this=HouseTypeClass  sig=csp ====
int __thiscall HouseTypeClass::Dtor(HouseTypeClass *this)
{
  int v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *veteranInfantryCount; // eax
  HouseTypeClass *v7; // [esp+8h] [ebp-4h] BYREF

  this->AbstractClass = &HouseTypeClass::`vftable'; /*0x5116a7*/
  this->? = &HouseTypeClass::`vftable'; /*0x5116ad*/
  this->? = &HouseTypeClass::`vftable'; /*0x5116b4*/
  this->? = &HouseTypeClass::`vftable'; /*0x5116bb*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x5116c2*/
  v7 = this; /*0x5116d7*/
  v2 = (*(int (__thiscall **)(_DWORD *, HouseTypeClass **))(dword_A83C98 + 16))(&dword_A83C98, &v7); /*0x5116db*/
  if ( v2 != -1 && v2 < dword_A83CA8 && v2 < --dword_A83CA8 ) /*0x5116f6*/
  {
    do /*0x51170e*/
    {
      ++v2; /*0x5116fe*/
      *((_DWORD *)dword_A83C9C + v2 - 1) = *((_DWORD *)dword_A83C9C + v2); /*0x511702*/
    }
    while ( v2 < dword_A83CA8 ); /*0x51170e*/
  }
  v3 = *(void **)&this->__pad_16D[27]; /*0x511710*/
  *(_DWORD *)&this->__pad_16D[23] = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x51171a*/
  if ( v3 && this->__pad_16D[36] ) /*0x511726*/
  {
    __3_YAXPAX_Z(v3); /*0x51172f*/
    *(_DWORD *)&this->__pad_16D[27] = 0; /*0x511737*/
  }
  this->__pad_16D[36] = 0; /*0x51173d*/
  *(_DWORD *)&this->__pad_16D[31] = 0; /*0x511743*/
  v4 = *(void **)&this->smartAi; /*0x511749*/
  *(_DWORD *)&this->prefix = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x51174f*/
  if ( v4 && this->__pad_16D[8] ) /*0x51175d*/
  {
    __3_YAXPAX_Z(v4); /*0x511766*/
    *(_DWORD *)&this->smartAi = 0; /*0x51176e*/
  }
  this->__pad_16D[8] = 0; /*0x511774*/
  *(_DWORD *)&this->__pad_16D[3] = 0; /*0x51177a*/
  veteranInfantryCount = (void *)this->veteranInfantryCount; /*0x511780*/
  this->veteranInfantry[0] = (int)&VectorClass<InfantryTypeClass const *>::`vftable'; /*0x511786*/
  if ( veteranInfantryCount && BYTE1(this->veteranUnitsCount) ) /*0x511794*/
  {
    __3_YAXPAX_Z(veteranInfantryCount); /*0x51179d*/
    this->veteranInfantryCount = 0; /*0x5117a5*/
  }
  BYTE1(this->veteranUnitsCount) = 0; /*0x5117ad*/
  this->veteranUnits[0] = 0; /*0x5117b3*/
  return AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x5117be*/
}



// ==== 0x005117D0  SuperWeaponTypeClass::FindByName  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::FindByName(SuperWeaponTypeClass *this)
{
  int v3; // ebx
  int v4; // esi

  if ( !_strcmpi((char *)this, g_Str__random_) ) /*0x5117db*/
    return -2; /*0x5117e9*/
  if ( !this ) /*0x5117f2*/
    return -1; /*0x5117f2*/
  v3 = 0; /*0x5117f9*/
  if ( dword_A83CA8 <= 0 ) /*0x5117fd*/
    return -1; /*0x511833*/
  while ( 1 ) /*0x511805*/
  {
    v4 = *((_DWORD *)dword_A83C9C + v3); /*0x511805*/
    if ( !_strcmpi((char *)(v4 + 100), (char *)this) || !_strcmpi((char *)(v4 + 36), (char *)this) ) /*0x51181d*/
      break; /*0x51181d*/
    if ( ++v3 >= dword_A83CA8 ) /*0x511831*/
      return -1; /*0x511831*/
  }
  return *(_DWORD *)(v4 + 184); /*0x5117e7*/
}



// ==== 0x00511850  HouseTypeClass::LoadFromINI  this=HouseTypeClass  sig=csp ====
char __userpurge HouseTypeClass::LoadFromINI@<al>(HouseTypeClass *this, double a2@<st0>, unsigned __int8 ***a3)
{
  int v3; // ecx
  HouseTypeClass *v4; // esi
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  double v12; // rax
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  double v20; // rax
  char v22; // cl
  char Bool_Overwrite; // al
  char v25; // al
  char v26; // cl
  char v27; // al
  char *i; // eax
  int UnitTypeVector_field_0x10; // edx
  int UnitTypeVector_field_0x18; // ecx
  void *UnitTypeVector_field_0x04; // eax
  char *j; // eax
  int Alt; // edi
  int v34; // eax
  int InfantryTypeVector_field_0x10; // edx
  int InfantryTypeVector_field_0x18; // ecx
  void *InfantryTypeVector_field_0x04; // eax
  char *k; // eax
  int v39; // edi
  int v40; // eax
  int v41; // edx
  int v42; // ecx
  void *v43; // eax
  int v44; // edi
  int CountryData; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // edx
  int v49; // eax
  int v50; // edx
  int v51; // eax
  int v52; // esi
  int v53; // eax
  int v54; // ecx
  int v55; // esi
  int v56; // ecx
  int v57; // eax
  int v58; // edx
  double v60; // [esp+0h] [ebp-F8h]
  double v61; // [esp+0h] [ebp-F8h]
  double v62; // [esp+0h] [ebp-F8h]
  double v63; // [esp+0h] [ebp-F8h]
  double v64; // [esp+0h] [ebp-F8h]
  double v65; // [esp+0h] [ebp-F8h]
  double v66; // [esp+0h] [ebp-F8h]
  double v67; // [esp+0h] [ebp-F8h]
  double v68; // [esp+0h] [ebp-F8h]
  double v69; // [esp+0h] [ebp-F8h]
  double v70; // [esp+0h] [ebp-F8h]
  double v71; // [esp+0h] [ebp-F8h]
  double v72; // [esp+0h] [ebp-F8h]
  double v73; // [esp+0h] [ebp-F8h]
  double v74; // [esp+0h] [ebp-F8h]
  double v75; // [esp+0h] [ebp-F8h]
  double v76; // [esp+0h] [ebp-F8h]
  double v77; // [esp+0h] [ebp-F8h]
  double v78; // [esp+0h] [ebp-F8h]
  char v79; // [esp+4h] [ebp-F4h]
  UnitTypeVector Destination; // [esp+18h] [ebp-E0h] BYREF
  char v81[2]; // [esp+36h] [ebp-C2h] BYREF
  InfantryTypeVector v82; // [esp+38h] [ebp-C0h] BYREF
  char Source[32]; // [esp+58h] [ebp-A0h] BYREF
  char String[128]; // [esp+78h] [ebp-80h] BYREF

  v4 = this; /*0x51185e*/
  _EBX = v3; /*0x511861*/
  INIClass::ResetSection((INIClass *)this); /*0x511866*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)_EBX, (unsigned __int8 ***)this) ) /*0x51186e*/
    return 0; /*0x51215c*/
  INIClass::GetString((INIClass *)this, (unsigned __int8 *)(_EBX + 36), aSuffix, &g_INI_DefaultBuffer, Source, 4); /*0x511892*/
  if ( strlen(Source) ) /*0x51189b*/
  {
    strcpy((char *)(_EBX + 416), Source); /*0x5118c3*/
    v4 = this; /*0x5118cc*/
  }
  INIClass::GetString((INIClass *)v4, (unsigned __int8 *)(_EBX + 36), aParentcountry, (char *)(_EBX + 36), Source, 25); /*0x5118e2*/
  if ( Source ) /*0x5118ed*/
  {
    strncpy(Destination.__pad_0, Source, 0x18u); /*0x511901*/
    LOBYTE(Destination.UnitTypeVector_field_0x18) = 0; /*0x511909*/
  }
  else
  {
    Destination.__pad_0[0] = (unsigned __int8)Source; /*0x5118ef*/
  }
  if ( &Destination != (UnitTypeVector *)(_EBX + 152) ) /*0x51191a*/
  {
    qmemcpy((void *)(_EBX + 152), &Destination, 0x18u); /*0x511925*/
    *(_BYTE *)(_EBX + 176) = Destination.UnitTypeVector_field_0x18; /*0x511927*/
    v4 = this; /*0x511928*/
  }
  *(_DWORD *)(_EBX + 192) = BuildingTypeClass::FindAnimByName( /*0x511942*/
                              (BuildingTypeClass *)v4,
                              (unsigned __int8 *)(_EBX + 36),
                              (unsigned __int8 *)&stru_81AF8C.?[95],
                              *(_DWORD *)(_EBX + 192));
  Source[0] = *(_BYTE *)(_EBX + 420); /*0x51195a*/
  Source[1] = 0; /*0x511966*/
  INIClass::GetString((INIClass *)v4, (unsigned __int8 *)(_EBX + 36), aPrefix, Source, v81, 2); /*0x51196b*/
  *(_BYTE *)(_EBX + 420) = v81[0]; /*0x511974*/
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aFirepower, *(double *)(_EBX + 200)); /*0x511990*/
  v6 = *(_DWORD *)(_EBX + 212); /*0x511995*/
  v7 = *(_DWORD *)(_EBX + 208); /*0x51199b*/
  __asm { fstp qword ptr [ebx+0C8h] } /*0x5119a1*/
  *(double *)(_EBX + 200) = _RT1; /*0x5119a1*/
  INIClass::ReadDouble_Overwrite( /*0x5119b1*/
    (double *)v4,
    (unsigned __int8 *)(_EBX + 36),
    aGroundspeed,
    COERCE_DOUBLE(__PAIR64__(v6, v7)));
  v9 = *(_DWORD *)(_EBX + 220); /*0x5119b6*/
  v10 = *(_DWORD *)(_EBX + 216); /*0x5119bc*/
  __asm { fstp qword ptr [ebx+0D0h] } /*0x5119c2*/
  *(double *)(_EBX + 208) = _RT1; /*0x5119c2*/
  INIClass::ReadDouble_Overwrite( /*0x5119d2*/
    (double *)v4,
    (unsigned __int8 *)(_EBX + 36),
    aAirspeed,
    COERCE_DOUBLE(__PAIR64__(v9, v10)));
  v12 = *(double *)(_EBX + 224); /*0x5119dd*/
  __asm { fstp qword ptr [ebx+0D8h] } /*0x5119e3*/
  *(double *)(_EBX + 216) = _RT1; /*0x5119e3*/
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), g_INI_Key_Armor, v12); /*0x5119f3*/
  v14 = *(_DWORD *)(_EBX + 236); /*0x5119f8*/
  v15 = *(_DWORD *)(_EBX + 232); /*0x5119fe*/
  __asm { fstp qword ptr [ebx+0E0h] } /*0x511a04*/
  *(double *)(_EBX + 224) = _RT1; /*0x511a04*/
  INIClass::ReadDouble_Overwrite( /*0x511a14*/
    (double *)v4,
    (unsigned __int8 *)(_EBX + 36),
    &off_825478,
    COERCE_DOUBLE(__PAIR64__(v14, v15)));
  v17 = *(_DWORD *)(_EBX + 244); /*0x511a19*/
  v18 = *(_DWORD *)(_EBX + 240); /*0x511a1f*/
  __asm { fstp qword ptr [ebx+0E8h] } /*0x511a25*/
  *(double *)(_EBX + 232) = _RT1; /*0x511a25*/
  INIClass::ReadDouble_Overwrite( /*0x511a35*/
    (double *)v4,
    (unsigned __int8 *)(_EBX + 36),
    g_INI_Key_Cost,
    COERCE_DOUBLE(__PAIR64__(v17, v18)));
  v20 = *(double *)(_EBX + 248); /*0x511a40*/
  __asm { fstp qword ptr [ebx+0F0h] } /*0x511a46*/
  *(double *)(_EBX + 240) = _RT1; /*0x511a46*/
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aBuildtime, v20); /*0x511a56*/
  v22 = *(_BYTE *)(_EBX + 421); /*0x511a5b*/
  __asm { fstp qword ptr [ebx+0F8h] } /*0x511a61*/
  *(double *)(_EBX + 248) = _RT1; /*0x511a61*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)v4, (unsigned __int8 *)(_EBX + 36), aMultiplay, v22); /*0x511a70*/
  v79 = *(_BYTE *)(_EBX + 422); /*0x511a7d*/
  *(_BYTE *)(_EBX + 421) = Bool_Overwrite; /*0x511a84*/
  *(_BYTE *)(_EBX + 422) = INIClass::ReadBool_Overwrite((int *)v4, (unsigned __int8 *)(_EBX + 36), aMultiplaypassi, v79); /*0x511a8f*/
  v25 = INIClass::ReadBool_Overwrite((int *)v4, (unsigned __int8 *)(_EBX + 36), aWallowner, *(_BYTE *)(_EBX + 423)); /*0x511aa4*/
  v26 = *(_BYTE *)(_EBX + 424); /*0x511aa9*/
  *(_BYTE *)(_EBX + 423) = v25; /*0x511aaf*/
  v27 = INIClass::ReadBool_Overwrite((int *)v4, (unsigned __int8 *)(_EBX + 36), aSmartai, v26); /*0x511abe*/
  __asm { fld dword ptr [ebx+100h] } /*0x511ac3*/
  *(_BYTE *)(_EBX + 424) = v27; /*0x511ace*/
  __asm { fstp [esp+0F8h+var_F8]; double } /*0x511ad4*/
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aArmorinfantrym, v60); /*0x511add*/
  __asm { fstp dword ptr [ebx+100h] } /*0x511ae2*/
  *(float *)(_EBX + 256) = *(float *)&_RT1; /*0x511ae2*/
  __asm { fld dword ptr [ebx+104h] } /*0x511ae8*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aArmorunitsmult, v61); /*0x511afc*/
  __asm { fstp dword ptr [ebx+104h] } /*0x511b01*/
  *(float *)(_EBX + 260) = *(float *)&_RT1; /*0x511b01*/
  __asm { fld dword ptr [ebx+108h] } /*0x511b07*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aArmoraircraftm, v62); /*0x511b1b*/
  __asm { fstp dword ptr [ebx+108h] } /*0x511b20*/
  *(float *)(_EBX + 264) = *(float *)&_RT1; /*0x511b20*/
  __asm { fld dword ptr [ebx+10Ch] } /*0x511b26*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aArmorbuildings, v63); /*0x511b3a*/
  __asm { fstp dword ptr [ebx+10Ch] } /*0x511b3f*/
  *(float *)(_EBX + 268) = *(float *)&_RT1; /*0x511b3f*/
  __asm { fld dword ptr [ebx+110h] } /*0x511b45*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aArmordefensesm, v64); /*0x511b59*/
  __asm { fstp dword ptr [ebx+110h] } /*0x511b5e*/
  *(float *)(_EBX + 272) = *(float *)&_RT1; /*0x511b5e*/
  __asm { fld dword ptr [ebx+114h] } /*0x511b64*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aCostinfantrymu, v65); /*0x511b78*/
  __asm { fstp dword ptr [ebx+114h] } /*0x511b7d*/
  *(float *)(_EBX + 276) = *(float *)&_RT1; /*0x511b7d*/
  __asm { fld dword ptr [ebx+118h] } /*0x511b83*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aCostunitsmult, v66); /*0x511b97*/
  __asm { fstp dword ptr [ebx+118h] } /*0x511b9c*/
  *(float *)(_EBX + 280) = *(float *)&_RT1; /*0x511b9c*/
  __asm { fld dword ptr [ebx+11Ch] } /*0x511ba2*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aCostaircraftmu, v67); /*0x511bb6*/
  __asm { fstp dword ptr [ebx+11Ch] } /*0x511bbb*/
  *(float *)(_EBX + 284) = *(float *)&_RT1; /*0x511bbb*/
  __asm { fld dword ptr [ebx+120h] } /*0x511bc1*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aCostbuildingsm, v68); /*0x511bd5*/
  __asm { fstp dword ptr [ebx+120h] } /*0x511bda*/
  *(float *)(_EBX + 288) = *(float *)&_RT1; /*0x511bda*/
  __asm { fld dword ptr [ebx+124h] } /*0x511be0*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aCostdefensesmu, v69); /*0x511bf4*/
  __asm { fstp dword ptr [ebx+124h] } /*0x511bf9*/
  *(float *)(_EBX + 292) = *(float *)&_RT1; /*0x511bf9*/
  __asm { fld dword ptr [ebx+128h] } /*0x511bff*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aSpeedinfantrym, v70); /*0x511c13*/
  __asm { fstp dword ptr [ebx+128h] } /*0x511c18*/
  *(float *)(_EBX + 296) = *(float *)&_RT1; /*0x511c18*/
  __asm { fld dword ptr [ebx+12Ch] } /*0x511c1e*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aSpeedunitsmult, v71); /*0x511c32*/
  __asm { fstp dword ptr [ebx+12Ch] } /*0x511c37*/
  *(float *)(_EBX + 300) = *(float *)&_RT1; /*0x511c37*/
  __asm { fld dword ptr [ebx+130h] } /*0x511c3d*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aSpeedaircraftm, v72); /*0x511c51*/
  __asm { fstp dword ptr [ebx+130h] } /*0x511c56*/
  *(float *)(_EBX + 304) = *(float *)&_RT1; /*0x511c56*/
  __asm { fld dword ptr [ebx+134h] } /*0x511c5c*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aBuildtimeinfan, v73); /*0x511c70*/
  __asm { fstp dword ptr [ebx+134h] } /*0x511c75*/
  *(float *)(_EBX + 308) = *(float *)&_RT1; /*0x511c75*/
  __asm { fld dword ptr [ebx+138h] } /*0x511c7b*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aBuildtimeunits, v74); /*0x511c8f*/
  __asm { fstp dword ptr [ebx+138h] } /*0x511c94*/
  *(float *)(_EBX + 312) = *(float *)&_RT1; /*0x511c94*/
  __asm { fld dword ptr [ebx+13Ch] } /*0x511c9a*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aBuildtimeaircr, v75); /*0x511cae*/
  __asm { fstp dword ptr [ebx+13Ch] } /*0x511cb3*/
  *(float *)(_EBX + 316) = *(float *)&_RT1; /*0x511cb3*/
  __asm { fld dword ptr [ebx+140h] } /*0x511cb9*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aBuildtimebuild, v76); /*0x511ccd*/
  __asm { fstp dword ptr [ebx+140h] } /*0x511cd2*/
  *(float *)(_EBX + 320) = *(float *)&_RT1; /*0x511cd2*/
  __asm { fld dword ptr [ebx+144h] } /*0x511cd8*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aBuildtimedefen, v77); /*0x511cec*/
  __asm { fstp dword ptr [ebx+144h] } /*0x511cf1*/
  *(float *)(_EBX + 324) = *(float *)&_RT1; /*0x511cf1*/
  __asm { fld dword ptr [ebx+148h] } /*0x511cf7*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aIncomemult, v78); /*0x511d0b*/
  __asm { fstp dword ptr [ebx+148h] } /*0x511d10*/
  *(float *)(_EBX + 328) = *(float *)&_RT1; /*0x511d10*/
  if ( INIClass::GetString( /*0x511d2d*/
         (INIClass *)v4,
         (unsigned __int8 *)(_EBX + 36),
         aVeteraninfantr,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    InfantryTypeVector::Construct(&v82, 0, 0); /*0x511d42*/
    *(_DWORD *)v82.__pad_0 = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x511d56*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x511d64*/
    {
      if ( !*i ) /*0x511d66*/
        break; /*0x511d69*/
      v82.InfantryTypeVector_field_0x1C = KeywordType::FindOrCreate2(i); /*0x511d74*/
      if ( v82.InfantryTypeVector_field_0x1C ) /*0x511d78*/
        InfantryTypeVector::Add(&v82, &v82.InfantryTypeVector_field_0x1C); /*0x511d83*/
    }
    HouseTypeClass::readAllowedUnits((HouseTypeClass *)&Destination, &v82); /*0x511da4*/
    *(_DWORD *)Destination.__pad_0 = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x511dad*/
    *(_DWORD *)v82.__pad_0 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x511db1*/
    Vector::Cleanup((_VectorClass_PBVInfantryTypeClass *)&v82); /*0x511db9*/
  }
  else
  {
    HouseTypeClass::readAllowedUnits((HouseTypeClass *)&Destination, (_DWORD *)(_EBX + 332)); /*0x511dcb*/
    *(_DWORD *)Destination.__pad_0 = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x511dd0*/
  }
  HouseTypeClass::readStartInfantry((HouseTypeClass *)(_EBX + 332), &Destination); /*0x511de5*/
  UnitTypeVector_field_0x10 = Destination.UnitTypeVector_field_0x10; /*0x511dee*/
  UnitTypeVector_field_0x18 = Destination.UnitTypeVector_field_0x18; /*0x511df2*/
  *(_DWORD *)(_EBX + 352) = Destination.UnitTypeVector_field_0x14; /*0x511df6*/
  UnitTypeVector_field_0x04 = (void *)Destination.UnitTypeVector_field_0x04; /*0x511df9*/
  *(_DWORD *)(_EBX + 348) = UnitTypeVector_field_0x10; /*0x511dfd*/
  *(_DWORD *)(_EBX + 356) = UnitTypeVector_field_0x18; /*0x511e02*/
  *(_DWORD *)Destination.__pad_0 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x511e05*/
  if ( UnitTypeVector_field_0x04 && BYTE1(Destination.UnitTypeVector_field_0x0C) ) /*0x511e15*/
    __3_YAXPAX_Z(UnitTypeVector_field_0x04); /*0x511e18*/
  if ( INIClass::GetString( /*0x511e3a*/
         (INIClass *)v4,
         (unsigned __int8 *)(_EBX + 36),
         aVeteranunits,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    UnitTypeVector::Construct(&Destination, 0, 0); /*0x511e4f*/
    *(_DWORD *)Destination.__pad_0 = &TypeList<UnitTypeClass const *>::`vftable'; /*0x511e5e*/
    for ( j = strtok(String, Str); j; j = strtok(0, Str) ) /*0x511e70*/
    {
      if ( !*j ) /*0x511e72*/
        break; /*0x511e75*/
      Alt = BuildingTypeClass::FindOrCreateAlt(j); /*0x511e7e*/
      if ( Alt /*0x511eb1*/
        && (Destination.UnitTypeVector_field_0x10 < Destination.UnitTypeVector_field_0x08
         || (BYTE1(Destination.UnitTypeVector_field_0x0C) || !Destination.UnitTypeVector_field_0x08)
         && Destination.UnitTypeVector_field_0x14 > 0
         && (*(unsigned __int8 (__thiscall **)(UnitTypeVector *, int, _DWORD))(*(_DWORD *)Destination.__pad_0 + 8))(
              &Destination,
              Destination.UnitTypeVector_field_0x08 + Destination.UnitTypeVector_field_0x14,
              0)) )
      {
        v34 = Destination.UnitTypeVector_field_0x10++; /*0x511ebc*/
        *(_DWORD *)(Destination.UnitTypeVector_field_0x04 + 4 * v34) = Alt; /*0x511ec7*/
      }
    }
    TypeList::CopyConstructor((TypeList *)&v82, &Destination); /*0x511ee6*/
    *(_DWORD *)Destination.__pad_0 = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x511eef*/
    Vector::Destructor((_VectorClass_PBVUnitTypeClass *)&Destination); /*0x511ef7*/
  }
  else
  {
    TypeList::CopyConstructor((TypeList *)&v82, (_DWORD *)(_EBX + 360)); /*0x511f09*/
  }
  VectorClass::CopyConstructor((VectorClass *)(_EBX + 360), &v82); /*0x511f1b*/
  InfantryTypeVector_field_0x10 = v82.InfantryTypeVector_field_0x10; /*0x511f24*/
  InfantryTypeVector_field_0x18 = v82.InfantryTypeVector_field_0x18; /*0x511f28*/
  *(_DWORD *)(_EBX + 380) = v82.InfantryTypeVector_field_0x14; /*0x511f2c*/
  InfantryTypeVector_field_0x04 = (void *)v82.InfantryTypeVector_field_0x04; /*0x511f2f*/
  *(_DWORD *)(_EBX + 376) = InfantryTypeVector_field_0x10; /*0x511f33*/
  *(_DWORD *)(_EBX + 384) = InfantryTypeVector_field_0x18; /*0x511f38*/
  *(_DWORD *)v82.__pad_0 = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x511f3b*/
  if ( InfantryTypeVector_field_0x04 && BYTE1(v82.InfantryTypeVector_field_0x0C) ) /*0x511f4b*/
    __3_YAXPAX_Z(InfantryTypeVector_field_0x04); /*0x511f4e*/
  if ( INIClass::GetString( /*0x511f70*/
         (INIClass *)v4,
         (unsigned __int8 *)(_EBX + 36),
         aVeteranaircraf,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    HouseTypeClass::readDefaultAlly((HouseTypeClass *)&Destination, 0, 0); /*0x511f85*/
    *(_DWORD *)Destination.__pad_0 = &TypeList<AircraftTypeClass const *>::`vftable'; /*0x511f94*/
    for ( k = strtok(String, Str); k; k = strtok(0, Str) ) /*0x511fa6*/
    {
      if ( !*k ) /*0x511fa8*/
        break; /*0x511fab*/
      v39 = KeywordClass::FindOrCreate(k); /*0x511fb4*/
      if ( v39 /*0x511fe7*/
        && (Destination.UnitTypeVector_field_0x10 < Destination.UnitTypeVector_field_0x08
         || (BYTE1(Destination.UnitTypeVector_field_0x0C) || !Destination.UnitTypeVector_field_0x08)
         && Destination.UnitTypeVector_field_0x14 > 0
         && (*(unsigned __int8 (__thiscall **)(UnitTypeVector *, int, _DWORD))(*(_DWORD *)Destination.__pad_0 + 8))(
              &Destination,
              Destination.UnitTypeVector_field_0x08 + Destination.UnitTypeVector_field_0x14,
              0)) )
      {
        v40 = Destination.UnitTypeVector_field_0x10++; /*0x511ff2*/
        *(_DWORD *)(Destination.UnitTypeVector_field_0x04 + 4 * v40) = v39; /*0x511ffd*/
      }
    }
    HouseTypeClass::readParaDropTypes((HouseTypeClass *)&v82, &Destination); /*0x51201c*/
    *(_DWORD *)Destination.__pad_0 = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x512025*/
    VectorClass::ClearAndFree4((int)&Destination); /*0x51202d*/
  }
  else
  {
    HouseTypeClass::readParaDropTypes((HouseTypeClass *)&v82, (_DWORD *)(_EBX + 388)); /*0x51203f*/
  }
  HouseTypeClass::readBaseDefense((HouseTypeClass *)(_EBX + 388), &v82); /*0x512051*/
  v41 = v82.InfantryTypeVector_field_0x10; /*0x51205a*/
  v42 = v82.InfantryTypeVector_field_0x18; /*0x51205e*/
  *(_DWORD *)(_EBX + 408) = v82.InfantryTypeVector_field_0x14; /*0x512062*/
  v43 = (void *)v82.InfantryTypeVector_field_0x04; /*0x512065*/
  *(_DWORD *)(_EBX + 404) = v41; /*0x512069*/
  *(_DWORD *)(_EBX + 412) = v42; /*0x51206e*/
  *(_DWORD *)v82.__pad_0 = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x512071*/
  if ( v43 && BYTE1(v82.InfantryTypeVector_field_0x0C) ) /*0x512081*/
    __3_YAXPAX_Z(v43); /*0x512084*/
  v44 = *(_DWORD *)(_EBX + 188); /*0x51208c*/
  CountryData = HouseTypeClass::loadCountryData( /*0x51209e*/
                  v4,
                  (unsigned __int8 *)(_EBX + 36),
                  (unsigned __int8 *)&g_INI_Key_Special.?,
                  v44);
  *(_DWORD *)(_EBX + 188) = CountryData; /*0x5120a5*/
  if ( CountryData != v44 ) /*0x5120ab*/
  {
    if ( v44 != -1 ) /*0x5120b4*/
    {
      v46 = *(_DWORD *)(_EBX + 184); /*0x5120bc*/
      v47 = *(_DWORD *)(FootClass_Array.?[0] + 4 * v44); /*0x5120c2*/
      v48 = *(_DWORD *)(v47 + 168); /*0x5120c5*/
      v49 = v47 + 152; /*0x5120cb*/
      if ( v46 < v48 ) /*0x5120d2*/
      {
        v50 = v48 - 1; /*0x5120d4*/
        for ( *(_DWORD *)(v49 + 16) = v50; /*0x5120da*/
              v46 < *(_DWORD *)(v49 + 16);
              *(_DWORD *)(*(_DWORD *)(v49 + 4) + 4 * v46 - 4) = *(_DWORD *)(*(_DWORD *)(v49 + 4) + 4 * v46) )
        {
          ++v46; /*0x5120df*/
        }
      }
    }
    v51 = *(_DWORD *)(_EBX + 188); /*0x5120ee*/
    if ( v51 != -1 ) /*0x5120f7*/
    {
      v52 = *(_DWORD *)(FootClass_Array.?[0] + 4 * v51); /*0x5120ff*/
      v53 = *(_DWORD *)(v52 + 160); /*0x512102*/
      v54 = *(_DWORD *)(v52 + 168); /*0x512108*/
      v55 = v52 + 152; /*0x51210e*/
      if ( v54 < v53 /*0x512133*/
        || (*(_BYTE *)(v55 + 13) || !v53)
        && (v56 = *(_DWORD *)(v55 + 20), v56 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v55 + 8))(v55, v56 + v53, 0) )
      {
        v57 = *(_DWORD *)(v55 + 16); /*0x51213a*/
        v58 = *(_DWORD *)(v55 + 4); /*0x51213d*/
        *(_DWORD *)(v55 + 16) = v57 + 1; /*0x512143*/
        *(_DWORD *)(v58 + 4 * v57) = *(_DWORD *)(_EBX + 184); /*0x51214c*/
      }
    }
  }
  return 1; /*0x512151*/
}



// ==== 0x00512170  HouseTypeClass::ProcessPower  this=HouseTypeClass  sig=csp ====
int __thiscall HouseTypeClass::ProcessPower(HouseTypeClass *this, int *a2)
{
  int v3; // edx
  int v4; // eax

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x51217a*/
  Power::TimerProcess(this->arrayIndex2); /*0x512188*/
  Power::TimerProcess(this->sideIndex); /*0x512196*/
  Power::TimerProcess(this->colorSchemeIndex); /*0x5121a4*/
  Checksummer::Add_double((Checksummer *)a2, this->firepowerMult[0], this->firepowerMult[1]); /*0x5121b9*/
  Checksummer::Add_double((Checksummer *)a2, this->groundspeedMult[0], this->groundspeedMult[1]); /*0x5121ce*/
  Checksummer::Add_double((Checksummer *)a2, this->airspeedMult[0], this->airspeedMult[1]); /*0x5121e3*/
  Checksummer::Add_double((Checksummer *)a2, this->armorMult[0], this->armorMult[1]); /*0x5121f8*/
  Checksummer::Add_double((Checksummer *)a2, this->rofMult[0], this->rofMult[1]); /*0x51220d*/
  Checksummer::Add_double((Checksummer *)a2, this->costMult[0], this->costMult[1]); /*0x512222*/
  Checksummer::Add_double((Checksummer *)a2, this->buildtimeMult[0], this->buildtimeMult[1]); /*0x512237*/
  Checksummer::Add_Buffer((Checksummer *)a2, (unsigned __int8 *)&this->__pad_16D[51], strlen(&this->__pad_16D[51])); /*0x512252*/
  LOBYTE(v3) = this->__pad_16D[55]; /*0x512257*/
  v4 = Power::FinalizeDrain((Power *)a2, v3); /*0x512260*/
  LOBYTE(v4) = this->__pad_16D[56]; /*0x512265*/
  return Power::FlagProcess((Power *)a2, v4); /*0x512273*/
}



// ==== 0x00512280  HouseTypeClass::StubReturnFalse  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::StubReturnFalse(HouseTypeClass *this)
{
  return 0; /*0x512282*/
}



// ==== 0x00512290  HouseTypeClass::SaveLoad_Prefix  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::SaveLoad_Prefix(HouseTypeClass *this, int a2)
{
  HouseTypeClass *v2; // edi
  int *veteranInfantry; // ebx
  int v4; // esi
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // esi
  int m; // esi
  int n; // esi
  int v11; // [esp+58h] [ebp-4h] BYREF

  v2 = this; /*0x512295*/
  veteranInfantry = this->veteranInfantry; /*0x51229f*/
  (*(void (__thiscall **)(int *))(this->veteranInfantry[0] + 12))(this->veteranInfantry); /*0x5122a7*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&v2->prefix + 12))(&v2->prefix); /*0x5122b8*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&v2->__pad_16D[23] + 12))(&v2->__pad_16D[23]); /*0x5122c7*/
  v4 = a2; /*0x5122ca*/
  result = AbstractClass::SaveLoad_Prefix_0(v2, a2); /*0x5122d0*/
  if ( result >= 0 ) /*0x5122d7*/
  {
    if ( v2 ) /*0x5122df*/
      HouseTypeClass::loadVeteranWeapons(v2, (int)&this); /*0x5122e8*/
    if ( veteranInfantry ) /*0x5122ef*/
    {
      InfantryTypeVector::Construct((InfantryTypeVector *)veteranInfantry, 0, 0); /*0x5122f7*/
      *veteranInfantry = (int)&TypeList<InfantryTypeClass const *>::`vftable'; /*0x5122fc*/
    }
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x51230e*/
    for ( this = 0; (int)this < a2; this = (HouseTypeClass *)((char *)this + 1) ) /*0x51231f*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v11, 4, 0); /*0x51232d*/
      InfantryTypeVector::Add((InfantryTypeVector *)veteranInfantry, &v11); /*0x512337*/
    }
    if ( v2 != (HouseTypeClass *)-360 ) /*0x51234f*/
    {
      UnitTypeVector::Construct((UnitTypeVector *)&v2->prefix, 0, 0); /*0x512357*/
      *(_DWORD *)&v2->prefix = &TypeList<UnitTypeClass const *>::`vftable'; /*0x51235c*/
    }
    (*(void (__stdcall **)(int, HouseTypeClass **, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &this, 4, 0); /*0x51236f*/
    for ( i = 0; i < (int)this; ++i ) /*0x51237a*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x512388*/
      VectorClass::PushBack((VectorClass *)&v2->prefix, &a2); /*0x512392*/
    }
    if ( v2 != (HouseTypeClass *)-388 ) /*0x5123a6*/
      HouseTypeClass::readStartUnit((HouseTypeClass *)&v2->__pad_16D[23]); /*0x5123aa*/
    (*(void (__stdcall **)(int, HouseTypeClass **, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &this, 4, 0); /*0x5123bb*/
    for ( j = 0; j < (int)this; ++j ) /*0x5123c6*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x5123d4*/
      HouseTypeClass::readPowerPlants((HouseTypeClass *)&v2->__pad_16D[23], &a2); /*0x5123de*/
    }
    for ( k = 0; k < v2->veteranAircraft[0]; ++k ) /*0x5123f4*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2->veteranInfantryCount + 4 * k)); /*0x512405*/
    for ( m = 0; m < *(_DWORD *)&v2->__pad_16D[11]; ++m ) /*0x51241f*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)&v2->smartAi + 4 * m)); /*0x512430*/
    for ( n = 0; n < *(_DWORD *)&v2->__pad_16D[39]; ++n ) /*0x51244a*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)&v2->__pad_16D[27] + 4 * n)); /*0x51245b*/
    return 0; /*0x51246b*/
  }
  return result; /*0x51246d*/
}



// ==== 0x00512480  HouseTypeClass::SaveLoad_Prefix_0  this=HouseTypeClass  sig=csp ====
int __userpurge HouseTypeClass::SaveLoad_Prefix_0@<eax>(HouseTypeClass *this, int *a2, int *a3, int a4, int a5)
{
  int v5; // ebx
  int result; // eax
  int v7; // edx
  int i; // ebx
  int v9; // edx
  int j; // ebx
  int v11; // edx
  int k; // ebx

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, (int)a3); /*0x512491*/
  if ( result >= 0 ) /*0x512498*/
  {
    v7 = *a2; /*0x5124a4*/
    a3 = (int *)this->veteranAircraft[0]; /*0x5124b1*/
    (*(void (__stdcall **)(int *, int **, int, _DWORD, int))(v7 + 16))(a2, &a3, 4, 0, v5); /*0x5124b5*/
    for ( i = 0; i < a4; ++i ) /*0x5124c0*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->veteranInfantryCount + 4 * i, 4, 0); /*0x5124d3*/
    v9 = *a2; /*0x5124e3*/
    a4 = *(_DWORD *)&this->__pad_16D[11]; /*0x5124ef*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v9 + 16))(a2, &a4, 4, 0); /*0x5124f3*/
    for ( j = 0; j < a4; ++j ) /*0x5124fe*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->smartAi + 4 * j, 4, 0); /*0x512511*/
    v11 = *a2; /*0x512521*/
    a4 = *(_DWORD *)&this->__pad_16D[39]; /*0x51252d*/
    (*(void (__stdcall **)(int *, int *, int))(v11 + 16))(a2, &a4, 4); /*0x512531*/
    for ( k = 0; k < (int)a3; ++k ) /*0x51253c*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->__pad_16D[27] + 4 * k, 4, 0); /*0x51254f*/
    return 0; /*0x512559*/
  }
  return result; /*0x51255c*/
}



// ==== 0x00512570  HouseTypeClass::LoadHouse  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::LoadHouse(HouseTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x512576*/
    return -2147467261; /*0x512578*/
  a2[1] = 0; /*0x512580*/
  *a2 = 436; /*0x512587*/
  return 0; /*0x51257d*/
}



// ==== 0x005125A0  HouseTypeClass::QueryInterface  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::QueryInterface(HouseTypeClass *this, const void *a2, _DWORD *a3)
{
  void **p_vtable1; // ecx

  if ( !a3 ) /*0x5125a7*/
    return -2147467261; /*0x5125a9*/
  *a3 = 0; /*0x5125c6*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x5125d0*/
    *a3 = this; /*0x5125d4*/
  if ( !memcmp(a2, &IID_IPersist, 0x10u) ) /*0x5125e5*/
    *a3 = this; /*0x5125e9*/
  if ( !memcmp(a2, &IID_IPersistStream, 0x10u) ) /*0x5125f9*/
    *a3 = this; /*0x5125fe*/
  if ( !memcmp(a2, &IID_IRTTITypeInfo, 0x10u) ) /*0x51260e*/
  {
    if ( this ) /*0x512616*/
      p_vtable1 = &this->?; /*0x512618*/
    else
      p_vtable1 = 0; /*0x51261d*/
    *a3 = p_vtable1; /*0x51261f*/
  }
  if ( !*a3 ) /*0x512621*/
    return -2147467262; /*0x512626*/
  (*((void (__stdcall **)(HouseTypeClass *))this->AbstractClass + 1))(this); /*0x512632*/
  return 0; /*0x5125ae*/
}



// ==== 0x00512640  HouseTypeClass::GetClassIdentifier  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::GetClassIdentifier(HouseTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x512646*/
    return -2147467261; /*0x512648*/
  *a2 = 500447528; /*0x512656*/
  a2[1] = 298976363; /*0x51265e*/
  a2[2] = 1610654892; /*0x512667*/
  a2[3] = unk_7E963C; /*0x512670*/
  return 0; /*0x51264d*/
}



// ==== 0x00512680  WeaponTypeClass::Create  this=AbstractTypeClass  sig=csp ====
_BYTE *__thiscall WeaponTypeClass::Create(char *Source)
{
  int v2; // esi
  SuperWeaponTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x51269c*/
    return 0; /*0x5126ff*/
  v2 = 0; /*0x5126ad*/
  if ( dword_A83CA8 <= 0 ) /*0x5126b1*/
  {
LABEL_6:
    v3 = (SuperWeaponTypeClass *)__2_YAPAXI_Z(0x1B0u); /*0x5126d6*/
    if ( v3 ) /*0x5126e5*/
      return SuperWeaponTypeClass::Construct(v3, Source); /*0x5126f1*/
    return 0; /*0x5126e5*/
  }
  while ( _strcmpi((char *)(*((_DWORD *)dword_A83C9C + v2) + 36), Source) ) /*0x5126ca*/
  {
    if ( ++v2 >= dword_A83CA8 ) /*0x5126d4*/
      goto LABEL_6; /*0x5126d4*/
  }
  return (_BYTE *)*((_DWORD *)dword_A83C9C + v2); /*0x5126ef*/
}



// ==== 0x00512710  HouseTypeClass::GetTypeIdentifier  this=HouseTypeClass  sig=csp ====
int HouseTypeClass::GetTypeIdentifier(HouseTypeClass *this)
{
  return 14; /*0x512715*/
}



// ==== 0x00512720  HouseTypeClass::GetObjectSize  this=HouseTypeClass  sig=csp ====
int HouseTypeClass::GetObjectSize(HouseTypeClass *this)
{
  return 432; /*0x512725*/
}



// ==== 0x00512730  HouseTypeClass::loadBuildLimits  this=HouseTypeClass  sig=csp ====
unsigned int __thiscall HouseTypeClass::loadBuildLimits(HouseTypeClass *this)
{
  return this->arrayIndex; /*0x512736*/
}



// ==== 0x00512740  HouseTypeClass::AddRef  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::AddRef(HouseTypeClass *this)
{
  return 1; /*0x512745*/
}



// ==== 0x00512750  HouseTypeClass::Release  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::Release(HouseTypeClass *this)
{
  return 1; /*0x512755*/
}



// ==== 0x00512760  HouseTypeClass::Destructor  this=HouseTypeClass  sig=csp ====
void **__thiscall HouseTypeClass::Destructor(HouseTypeClass *this, char a2)
{
  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *veteranInfantryCount; // eax
  HouseTypeClass *v8; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &HouseTypeClass::`vftable'; /*0x512766*/
  this->? = &HouseTypeClass::`vftable'; /*0x51276c*/
  this->? = &HouseTypeClass::`vftable'; /*0x512773*/
  this->? = &HouseTypeClass::`vftable'; /*0x51277a*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x512781*/
  v8 = this; /*0x512796*/
  v3 = (*(int (__thiscall **)(_DWORD *, HouseTypeClass **))(dword_A83C98 + 16))(&dword_A83C98, &v8); /*0x51279a*/
  if ( v3 != -1 && v3 < dword_A83CA8 && v3 < --dword_A83CA8 ) /*0x5127b5*/
  {
    do /*0x5127cd*/
    {
      ++v3; /*0x5127bd*/
      *((_DWORD *)dword_A83C9C + v3 - 1) = *((_DWORD *)dword_A83C9C + v3); /*0x5127c1*/
    }
    while ( v3 < dword_A83CA8 ); /*0x5127cd*/
  }
  v4 = *(void **)&this->__pad_16D[27]; /*0x5127cf*/
  *(_DWORD *)&this->__pad_16D[23] = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x5127d8*/
  if ( v4 && this->__pad_16D[36] ) /*0x5127e6*/
  {
    __3_YAXPAX_Z(v4); /*0x5127ef*/
    *(_DWORD *)&this->__pad_16D[27] = 0; /*0x5127f7*/
  }
  this->__pad_16D[36] = 0; /*0x5127fd*/
  *(_DWORD *)&this->__pad_16D[31] = 0; /*0x512803*/
  v5 = *(void **)&this->smartAi; /*0x512809*/
  *(_DWORD *)&this->prefix = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x51280f*/
  if ( v5 && this->__pad_16D[8] ) /*0x51281d*/
  {
    __3_YAXPAX_Z(v5); /*0x512826*/
    *(_DWORD *)&this->smartAi = 0; /*0x51282e*/
  }
  this->__pad_16D[8] = 0; /*0x512834*/
  *(_DWORD *)&this->__pad_16D[3] = 0; /*0x51283a*/
  veteranInfantryCount = (void *)this->veteranInfantryCount; /*0x512840*/
  this->veteranInfantry[0] = (int)&VectorClass<InfantryTypeClass const *>::`vftable'; /*0x512846*/
  if ( veteranInfantryCount && BYTE1(this->veteranUnitsCount) ) /*0x512854*/
  {
    __3_YAXPAX_Z(veteranInfantryCount); /*0x51285d*/
    this->veteranInfantryCount = 0; /*0x512865*/
  }
  BYTE1(this->veteranUnitsCount) = 0; /*0x51286d*/
  this->veteranUnits[0] = 0; /*0x512873*/
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x512879*/
  if ( (a2 & 1) != 0 ) /*0x512885*/
    __3_YAXPAX_Z(this); /*0x512888*/
  return &this->AbstractClass; /*0x512892*/
}



// ==== 0x005128A0  _DynamicVectorClass_PBVInfantryTypeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall TypeList_Infantry::ddtor(_DynamicVectorClass_PBVInfantryTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5128a6*/
  this->m_10 = 0; /*0x5128a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5128b0*/
  {
    __3_YAXPAX_Z(v2); /*0x5128b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5128be*/
  }
  BYTE1(this->m_C) = 0; /*0x5128c1*/
  this->m_8 = 0; /*0x5128c4*/
}



// ==== 0x005128D0  _DynamicVectorClass_PBVInfantryTypeClass::GetIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall TypeList_Infantry::GetIndex(_DynamicVectorClass_PBVInfantryTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5128d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5128e5*/
  else
    return 0; /*0x5128d7*/
}



// ==== 0x005128F0  _VectorClass_PBVInfantryTypeClass::Clear  this=VectorClass  sig=csp ====
int __thiscall TypeList_Infantry::Clear(_VectorClass_PBVInfantryTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5128fa*/
}



// ==== 0x00512900  _DynamicVectorClass_PBVUnitTypeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall HouseTypeClass_36::ddtor(_DynamicVectorClass_PBVUnitTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x512906*/
  this->m_10 = 0; /*0x512909*/
  if ( v2 && BYTE1(this->m_C) ) /*0x512910*/
  {
    __3_YAXPAX_Z(v2); /*0x512916*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x51291e*/
  }
  BYTE1(this->m_C) = 0; /*0x512921*/
  this->m_8 = 0; /*0x512924*/
}



// ==== 0x00512930  _DynamicVectorClass_PBVUnitTypeClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall HouseTypeClass_36::Write(_DynamicVectorClass_PBVUnitTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x512930*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x512945*/
  else
    return 0; /*0x512937*/
}



// ==== 0x00512950  _VectorClass_PBVUnitTypeClass::Seek  this=VectorClass  sig=csp ====
int __thiscall HouseTypeClass_36::Seek(_VectorClass_PBVUnitTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x51295a*/
}



// ==== 0x00512960  HouseTypeClass::readStartUnit  this=TypeList  sig=csp ====
_DWORD *__thiscall HouseTypeClass::readStartUnit(HouseTypeClass *this)
{
  this->? = 0; /*0x512964*/
  this->? = 0; /*0x512967*/
  LOBYTE(this->?) = 1; /*0x51296a*/
  BYTE1(this->?) = 0; /*0x51296e*/
  this->? = 10; /*0x512971*/
  this->? = 0; /*0x512978*/
  this->AbstractClass = &TypeList<AircraftTypeClass const *>::`vftable'; /*0x51297b*/
  return &this->AbstractClass; /*0x512981*/
}



// ==== 0x00512990  _DynamicVectorClass_PBVAircraftTypeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall HouseTypeClass_28::ddtor(_DynamicVectorClass_PBVAircraftTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x512996*/
  this->m_10 = 0; /*0x512999*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5129a0*/
  {
    __3_YAXPAX_Z(v2); /*0x5129a6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5129ae*/
  }
  BYTE1(this->m_C) = 0; /*0x5129b1*/
  this->m_8 = 0; /*0x5129b4*/
}



// ==== 0x005129C0  _DynamicVectorClass_PBVAircraftTypeClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall HouseTypeClass_28::Write(_DynamicVectorClass_PBVAircraftTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5129c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5129d5*/
  else
    return 0; /*0x5129c7*/
}



// ==== 0x005129E0  _VectorClass_PBVAircraftTypeClass::Seek  this=VectorClass  sig=csp ====
int __thiscall HouseTypeClass_28::Seek(_VectorClass_PBVAircraftTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5129ea*/
}



// ==== 0x005129F0  _TypeList_PBVInfantryTypeClass::Add  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList_Infantry::Add(_TypeList_PBVInfantryTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x5129f3*/
  *(_DWORD *)this = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x5129f6*/
  if ( v3 && this->IsAllocated ) /*0x512a00*/
  {
    __3_YAXPAX_Z(v3); /*0x512a08*/
    this->Items = 0; /*0x512a10*/
  }
  this->IsAllocated = 0; /*0x512a1b*/
  this->Capacity = 0; /*0x512a21*/
  if ( (a2 & 1) != 0 ) /*0x512a28*/
    __3_YAXPAX_Z(this); /*0x512a2b*/
  return this; /*0x512a35*/
}



// ==== 0x00512A40  _TypeList_PBVUnitTypeClass::QueryInterface  this=TypeList  sig=csp ====
_DWORD *__thiscall HouseTypeClass_36::QueryInterface(_TypeList_PBVUnitTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x512a43*/
  this->vfptr = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x512a46*/
  if ( v3 && this->IsAllocated ) /*0x512a50*/
  {
    __3_YAXPAX_Z(v3); /*0x512a58*/
    this->Items = 0; /*0x512a60*/
  }
  this->IsAllocated = 0; /*0x512a6b*/
  this->Capacity = 0; /*0x512a71*/
  if ( (a2 & 1) != 0 ) /*0x512a78*/
    __3_YAXPAX_Z(this); /*0x512a7b*/
  return &this->vfptr; /*0x512a85*/
}



// ==== 0x00512A90  _TypeList_PBVAircraftTypeClass::QueryInterface  this=TypeList  sig=csp ====
_DWORD *__thiscall HouseTypeClass_28::QueryInterface(_TypeList_PBVAircraftTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x512a93*/
  this->vfptr = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x512a96*/
  if ( v3 && this->IsAllocated ) /*0x512aa0*/
  {
    __3_YAXPAX_Z(v3); /*0x512aa8*/
    this->Items = 0; /*0x512ab0*/
  }
  this->IsAllocated = 0; /*0x512abb*/
  this->Capacity = 0; /*0x512ac1*/
  if ( (a2 & 1) != 0 ) /*0x512ac8*/
    __3_YAXPAX_Z(this); /*0x512acb*/
  return &this->vfptr; /*0x512ad5*/
}



// ==== 0x00512AE0  _VectorClass_PBVInfantryTypeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall InfantryTypeVector::QueryInterface(_VectorClass_PBVInfantryTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x512ae3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x512ae6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x512af0*/
  {
    __3_YAXPAX_Z(v3); /*0x512af8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x512b00*/
  }
  BYTE1(this->m_C) = 0; /*0x512b0b*/
  this->m_8 = 0; /*0x512b11*/
  if ( (a2 & 1) != 0 ) /*0x512b18*/
    __3_YAXPAX_Z(this); /*0x512b1b*/
  return this->__pad_0; /*0x512b25*/
}



// ==== 0x00512B30  _VectorClass_PBVUnitTypeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall UnitTypeVector::QueryInterface(_VectorClass_PBVUnitTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x512b33*/
  *(_DWORD *)this->__pad_0 = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x512b36*/
  if ( v3 && BYTE1(this->m_C) ) /*0x512b40*/
  {
    __3_YAXPAX_Z(v3); /*0x512b48*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x512b50*/
  }
  BYTE1(this->m_C) = 0; /*0x512b5b*/
  this->m_8 = 0; /*0x512b61*/
  if ( (a2 & 1) != 0 ) /*0x512b68*/
    __3_YAXPAX_Z(this); /*0x512b6b*/
  return this->__pad_0; /*0x512b75*/
}



// ==== 0x00512B80  _VectorClass_PBVAircraftTypeClass::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall HouseTypeClass_36::Constructor(_VectorClass_PBVAircraftTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x512b83*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x512b86*/
  if ( v3 && BYTE1(this->m_C) ) /*0x512b90*/
  {
    __3_YAXPAX_Z(v3); /*0x512b98*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x512ba0*/
  }
  BYTE1(this->m_C) = 0; /*0x512bab*/
  this->m_8 = 0; /*0x512bb1*/
  if ( (a2 & 1) != 0 ) /*0x512bb8*/
    __3_YAXPAX_Z(this); /*0x512bbb*/
  return this->__pad_0; /*0x512bc5*/
}



// ==== 0x00512BD0  HouseTypeClass::readStartInfantry  this=HouseTypeClass  sig=csp ====
_DWORD *__thiscall HouseTypeClass::readStartInfantry(HouseTypeClass *this, _DWORD *a2)
{
  void *v3; // eax
  void *v4; // eax
  void *ptr_8; // ecx
  int v6; // eax

  if ( this == (HouseTypeClass *)a2 ) /*0x512bda*/
    return &this->AbstractClass; /*0x512bda*/
  (*((void (__thiscall **)(HouseTypeClass *))this->AbstractClass + 3))(this); /*0x512bde*/
  v3 = (void *)a2[2]; /*0x512be1*/
  this->? = v3; /*0x512be6*/
  if ( !v3 ) /*0x512be9*/
  {
    this->? = 0; /*0x512c2a*/
    BYTE1(this->?) = 0; /*0x512c31*/
    return &this->AbstractClass; /*0x512c35*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (_DWORD)v3); /*0x512bf3*/
  this->? = v4; /*0x512bfb*/
  if ( !v4 ) /*0x512c00*/
    return &this->AbstractClass; /*0x512c00*/
  ptr_8 = this->?; /*0x512c02*/
  v6 = 0; /*0x512c05*/
  BYTE1(this->?) = 1; /*0x512c09*/
  if ( (int)ptr_8 <= 0 ) /*0x512c0d*/
    return &this->AbstractClass; /*0x512c0d*/
  do /*0x512c21*/
  {
    *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x512c18*/
    ++v6; /*0x512c1e*/
  }
  while ( v6 < (int)this->? ); /*0x512c21*/
  return &this->AbstractClass; /*0x512c25*/
}



// ==== 0x00512C40  _VectorClass_PBVInfantryTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TypeList_Infantry::AddRef(_VectorClass_PBVInfantryTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x512c42*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x512c4d*/
  {
    v3 = 0; /*0x512c4f*/
    if ( m_8 <= 0 ) /*0x512c53*/
      return 1; /*0x512c73*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x512c55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x512c5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x512c64*/
    {
      ++v3; /*0x512c66*/
      ++v4; /*0x512c67*/
      if ( v3 >= m_8 ) /*0x512c6c*/
        return 1; /*0x512c6c*/
    }
  }
  return 0; /*0x512c6e*/
}



// ==== 0x00512C80  _VectorClass_PBVInfantryTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall InfantryTypeVector::Release(_VectorClass_PBVInfantryTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x512c8c*/
  {
    LOBYTE(this->m_C) = 0; /*0x512c96*/
    if ( a3 ) /*0x512c9c*/
      v4 = a3; /*0x512cb2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x512cae*/
    LOBYTE(this->m_C) = 1; /*0x512cb6*/
    if ( v4 ) /*0x512cba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x512cc5*/
      {
        m_8 = this->m_8; /*0x512ccc*/
        if ( a2 < m_8 ) /*0x512cd1*/
          m_8 = a2; /*0x512cd3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x512cd9*/
          ++i; /*0x512cde*/
        if ( BYTE1(this->m_C) ) /*0x512ceb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x512cf6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x512cfe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x512d07*/
      this->m_8 = a2; /*0x512d0f*/
      BYTE1(this->m_C) = a3 == 0; /*0x512d12*/
      return 1; /*0x512d18*/
    }
    else
    {
      return 0; /*0x512cbf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVInfantryTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x512d22*/
    return 1; /*0x512d28*/
  }
}



// ==== 0x00512D30  _VectorClass_PBVInfantryTypeClass::Cleanup  this=VectorClass  sig=csp ====
int __thiscall Vector::Cleanup(_VectorClass_PBVInfantryTypeClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->m_1[3]; /*0x512d36*/
  if ( result && BYTE1(this->m_C) ) /*0x512d3d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x512d43*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x512d4b*/
  }
  BYTE1(this->m_C) = 0; /*0x512d4e*/
  this->m_8 = 0; /*0x512d51*/
  return result; /*0x512d54*/
}



// ==== 0x00512D60  _VectorClass_PBVInfantryTypeClass::AddType  this=VectorClass  sig=csp ====
int __thiscall InfantryTypeVector::AddType(_VectorClass_PBVInfantryTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x512d60*/
    return 0; /*0x512d68*/
  m_8 = this->m_8; /*0x512d6e*/
  result = 0; /*0x512d71*/
  if ( m_8 <= 0 ) /*0x512d75*/
    return -1; /*0x512d8c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x512d7b*/
  {
    if ( ++result >= m_8 ) /*0x512d8a*/
      return -1; /*0x512d8a*/
  }
  return result; /*0x512d6a*/
}



// ==== 0x00512DA0  _VectorClass_PBVInfantryTypeClass::Remove  this=VectorClass  sig=csp ====
unsigned int __thiscall InfantryTypeVector::Remove(_VectorClass_PBVInfantryTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x512da0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x512db5*/
  else
    return 0; /*0x512da7*/
}



// ==== 0x00512DC0  InfantryTypeVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall InfantryTypeVector::Construct(InfantryTypeVector *this, int a2, int a3)
{
  this->InfantryTypeVector_field_0x04 = 0; /*0x512dc9*/
  this->InfantryTypeVector_field_0x08 = a2; /*0x512dd0*/
  LOBYTE(this->InfantryTypeVector_field_0x0C) = 1; /*0x512dd3*/
  BYTE1(this->InfantryTypeVector_field_0x0C) = 0; /*0x512dd7*/
  *(_DWORD *)this->__pad_0 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x512ddb*/
  if ( a2 ) /*0x512de1*/
  {
    if ( a3 ) /*0x512de9*/
    {
      this->InfantryTypeVector_field_0x04 = a3; /*0x512deb*/
    }
    else
    {
      this->InfantryTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x512dfc*/
      BYTE1(this->InfantryTypeVector_field_0x0C) = 1; /*0x512dff*/
    }
  }
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<InfantryTypeClass const *>::`vftable'; /*0x512e03*/
  this->InfantryTypeVector_field_0x14 = 10; /*0x512e09*/
  this->InfantryTypeVector_field_0x10 = 0; /*0x512e10*/
  return this->__pad_0; /*0x512e19*/
}



// ==== 0x00512E20  _DynamicVectorClass_PBVInfantryTypeClass::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall TypeList_Infantry::Constructor(_DynamicVectorClass_PBVInfantryTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x512e23*/
  *(_DWORD *)this->__pad_0 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x512e26*/
  if ( v3 && BYTE1(this->m_C) ) /*0x512e30*/
  {
    __3_YAXPAX_Z(v3); /*0x512e38*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x512e40*/
  }
  BYTE1(this->m_C) = 0; /*0x512e4b*/
  this->m_8 = 0; /*0x512e51*/
  if ( (a2 & 1) != 0 ) /*0x512e58*/
    __3_YAXPAX_Z(this); /*0x512e5b*/
  return this->__pad_0; /*0x512e65*/
}



// ==== 0x00512E70  _DynamicVectorClass_PBVInfantryTypeClass::Remove  this=DynamicVector  sig=csp ====
char __thiscall TypeList_Infantry::Remove(_DynamicVectorClass_PBVInfantryTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x512e7c*/
  {
    LOBYTE(this->m_C) = 0; /*0x512e82*/
    if ( a3 ) /*0x512e88*/
      v4 = a3; /*0x512e9e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x512e9a*/
    LOBYTE(this->m_C) = 1; /*0x512ea2*/
    if ( !v4 ) /*0x512ea6*/
      return 0; /*0x512f1a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x512ea8*/
    {
      m_8 = this->m_8; /*0x512eaf*/
      if ( a2 < m_8 ) /*0x512eb4*/
        m_8 = a2; /*0x512eb6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x512ebc*/
        ++i; /*0x512ec1*/
      if ( BYTE1(this->m_C) ) /*0x512ece*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x512ed9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x512ee1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x512eea*/
    this->m_8 = a2; /*0x512ef2*/
    BYTE1(this->m_C) = a3 == 0; /*0x512ef5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVInfantryTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x512efe*/
  }
  v7 = this->m_8; /*0x512f01*/
  if ( v7 < this->m_10 ) /*0x512f09*/
    this->m_10 = v7; /*0x512f0b*/
  return 1; /*0x512f0e*/
}



// ==== 0x00512F20  InfantryTypeVector::Add  this=InfantryTypeVector  sig=csp ====
char __thiscall InfantryTypeVector::Add(InfantryTypeVector *this, _DWORD *a2)
{
  int InfantryTypeVector_field_0x08; // ecx
  int InfantryTypeVector_field_0x14; // eax
  int InfantryTypeVector_field_0x10; // eax
  int InfantryTypeVector_field_0x04; // edx

  InfantryTypeVector_field_0x08 = this->InfantryTypeVector_field_0x08; /*0x512f23*/
  if ( this->InfantryTypeVector_field_0x10 >= InfantryTypeVector_field_0x08 ) /*0x512f2b*/
  {
    if ( !BYTE1(this->InfantryTypeVector_field_0x0C) && InfantryTypeVector_field_0x08 ) /*0x512f36*/
      return 0; /*0x512f36*/
    InfantryTypeVector_field_0x14 = this->InfantryTypeVector_field_0x14; /*0x512f38*/
    if ( InfantryTypeVector_field_0x14 <= 0 /*0x512f48*/
      || !(*(unsigned __int8 (__thiscall **)(InfantryTypeVector *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
            this,
            InfantryTypeVector_field_0x08 + InfantryTypeVector_field_0x14,
            0) )
    {
      return 0; /*0x512f4f*/
    }
  }
  InfantryTypeVector_field_0x10 = this->InfantryTypeVector_field_0x10; /*0x512f55*/
  InfantryTypeVector_field_0x04 = this->InfantryTypeVector_field_0x04; /*0x512f58*/
  this->InfantryTypeVector_field_0x10 = InfantryTypeVector_field_0x10 + 1; /*0x512f5e*/
  *(_DWORD *)(InfantryTypeVector_field_0x04 + 4 * InfantryTypeVector_field_0x10) = *a2; /*0x512f68*/
  return 1; /*0x512f51*/
}



// ==== 0x00512F70  _DynamicVectorClass_PBVInfantryTypeClass::GetSize  this=DynamicVector  sig=csp ====
int __thiscall TypeList_Infantry::GetSize(_DynamicVectorClass_PBVInfantryTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x512f70*/
  result = 0; /*0x512f73*/
  if ( m_10 <= 0 ) /*0x512f78*/
    return -1; /*0x512f8f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x512f7e*/
  {
    if ( ++result >= m_10 ) /*0x512f8d*/
      return -1; /*0x512f8d*/
  }
  return result; /*0x512f92*/
}



// ==== 0x00512FA0  VectorClass::CopyConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CopyConstructor(VectorClass *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)a2 ) /*0x512faa*/
    return &this->ptr_0; /*0x512faa*/
  (*((void (__thiscall **)(VectorClass *))this->ptr_0 + 3))(this); /*0x512fae*/
  v3 = a2[2]; /*0x512fb1*/
  this->Capacity = v3; /*0x512fb6*/
  if ( !v3 ) /*0x512fb9*/
  {
    this->Items = 0; /*0x512ffa*/
    this->IsAllocated = 0; /*0x513001*/
    return &this->ptr_0; /*0x513005*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x512fc3*/
  this->Items = v4; /*0x512fcb*/
  if ( !v4 ) /*0x512fd0*/
    return &this->ptr_0; /*0x512fd0*/
  Capacity = this->Capacity; /*0x512fd2*/
  v6 = 0; /*0x512fd5*/
  this->IsAllocated = 1; /*0x512fd9*/
  if ( Capacity <= 0 ) /*0x512fdd*/
    return &this->ptr_0; /*0x512fdd*/
  do /*0x512ff1*/
  {
    *((_DWORD *)this->Items + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x512fe8*/
    ++v6; /*0x512fee*/
  }
  while ( v6 < this->Capacity ); /*0x512ff1*/
  return &this->ptr_0; /*0x512ff5*/
}



// ==== 0x00513010  _VectorClass_PBVUnitTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall HouseTypeClass_36::AddRef(_VectorClass_PBVUnitTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x513012*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x51301d*/
  {
    v3 = 0; /*0x51301f*/
    if ( m_8 <= 0 ) /*0x513023*/
      return 1; /*0x513043*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x513025*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x51302b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x513034*/
    {
      ++v3; /*0x513036*/
      ++v4; /*0x513037*/
      if ( v3 >= m_8 ) /*0x51303c*/
        return 1; /*0x51303c*/
    }
  }
  return 0; /*0x51303e*/
}



// ==== 0x00513050  _VectorClass_PBVUnitTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall UnitTypeVector::Release(_VectorClass_PBVUnitTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x51305c*/
  {
    LOBYTE(this->m_C) = 0; /*0x513066*/
    if ( a3 ) /*0x51306c*/
      v4 = a3; /*0x513082*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x51307e*/
    LOBYTE(this->m_C) = 1; /*0x513086*/
    if ( v4 ) /*0x51308a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x513095*/
      {
        m_8 = this->m_8; /*0x51309c*/
        if ( a2 < m_8 ) /*0x5130a1*/
          m_8 = a2; /*0x5130a3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5130a9*/
          ++i; /*0x5130ae*/
        if ( BYTE1(this->m_C) ) /*0x5130bb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5130c6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5130ce*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5130d7*/
      this->m_8 = a2; /*0x5130df*/
      BYTE1(this->m_C) = a3 == 0; /*0x5130e2*/
      return 1; /*0x5130e8*/
    }
    else
    {
      return 0; /*0x51308f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVUnitTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5130f2*/
    return 1; /*0x5130f8*/
  }
}



// ==== 0x00513100  _VectorClass_PBVUnitTypeClass::Destructor  this=VectorClass  sig=csp ====
int __thiscall Vector::Destructor(_VectorClass_PBVUnitTypeClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->m_1[3]; /*0x513106*/
  if ( result && BYTE1(this->m_C) ) /*0x51310d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x513113*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x51311b*/
  }
  BYTE1(this->m_C) = 0; /*0x51311e*/
  this->m_8 = 0; /*0x513121*/
  return result; /*0x513124*/
}



// ==== 0x00513130  _VectorClass_PBVUnitTypeClass::Add  this=VectorClass  sig=csp ====
int __thiscall UnitTypeVector::Add(_VectorClass_PBVUnitTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x513130*/
    return 0; /*0x513138*/
  m_8 = this->m_8; /*0x51313e*/
  result = 0; /*0x513141*/
  if ( m_8 <= 0 ) /*0x513145*/
    return -1; /*0x51315c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x51314b*/
  {
    if ( ++result >= m_8 ) /*0x51315a*/
      return -1; /*0x51315a*/
  }
  return result; /*0x51313a*/
}



// ==== 0x00513170  _VectorClass_PBVUnitTypeClass::Remove  this=VectorClass  sig=csp ====
unsigned int __thiscall UnitTypeVector::Remove(_VectorClass_PBVUnitTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x513170*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x513185*/
  else
    return 0; /*0x513177*/
}



// ==== 0x00513190  UnitTypeVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall UnitTypeVector::Construct(UnitTypeVector *this, int a2, int a3)
{
  this->UnitTypeVector_field_0x04 = 0; /*0x513199*/
  this->UnitTypeVector_field_0x08 = a2; /*0x5131a0*/
  LOBYTE(this->UnitTypeVector_field_0x0C) = 1; /*0x5131a3*/
  BYTE1(this->UnitTypeVector_field_0x0C) = 0; /*0x5131a7*/
  *(_DWORD *)this->__pad_0 = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x5131ab*/
  if ( a2 ) /*0x5131b1*/
  {
    if ( a3 ) /*0x5131b9*/
    {
      this->UnitTypeVector_field_0x04 = a3; /*0x5131bb*/
    }
    else
    {
      this->UnitTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x5131cc*/
      BYTE1(this->UnitTypeVector_field_0x0C) = 1; /*0x5131cf*/
    }
  }
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<UnitTypeClass const *>::`vftable'; /*0x5131d3*/
  this->UnitTypeVector_field_0x14 = 10; /*0x5131d9*/
  this->UnitTypeVector_field_0x10 = 0; /*0x5131e0*/
  return this->__pad_0; /*0x5131e9*/
}



// ==== 0x005131F0  _DynamicVectorClass_PBVUnitTypeClass::Constructor_0  this=DynamicVector  sig=csp ====
_DWORD *__thiscall TypeList_Infantry::Constructor_0(_DynamicVectorClass_PBVUnitTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5131f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x5131f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x513200*/
  {
    __3_YAXPAX_Z(v3); /*0x513208*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x513210*/
  }
  BYTE1(this->m_C) = 0; /*0x51321b*/
  this->m_8 = 0; /*0x513221*/
  if ( (a2 & 1) != 0 ) /*0x513228*/
    __3_YAXPAX_Z(this); /*0x51322b*/
  return this->__pad_0; /*0x513235*/
}



// ==== 0x00513240  _DynamicVectorClass_PBVUnitTypeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall HouseTypeClass_36::Release(_DynamicVectorClass_PBVUnitTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x51324c*/
  {
    LOBYTE(this->m_C) = 0; /*0x513252*/
    if ( a3 ) /*0x513258*/
      v4 = a3; /*0x51326e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x51326a*/
    LOBYTE(this->m_C) = 1; /*0x513272*/
    if ( !v4 ) /*0x513276*/
      return 0; /*0x5132ea*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x513278*/
    {
      m_8 = this->m_8; /*0x51327f*/
      if ( a2 < m_8 ) /*0x513284*/
        m_8 = a2; /*0x513286*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x51328c*/
        ++i; /*0x513291*/
      if ( BYTE1(this->m_C) ) /*0x51329e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5132a9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5132b1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5132ba*/
    this->m_8 = a2; /*0x5132c2*/
    BYTE1(this->m_C) = a3 == 0; /*0x5132c5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVUnitTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5132ce*/
  }
  v7 = this->m_8; /*0x5132d1*/
  if ( v7 < this->m_10 ) /*0x5132d9*/
    this->m_10 = v7; /*0x5132db*/
  return 1; /*0x5132de*/
}



// ==== 0x005132F0  VectorClass::PushBack  this=VectorClass  sig=csp ====
char __thiscall VectorClass::PushBack(DynamicVectorClass *this, _DWORD *a2)
{
  int Capacity; // ecx
  int CapacityIncrement; // eax
  int Count; // eax
  int Items; // edx

  Capacity = this->Capacity; /*0x5132f3*/
  if ( this->Count >= Capacity ) /*0x5132fb*/
  {
    if ( !this->IsAllocated[0] && Capacity ) /*0x513306*/
      return 0; /*0x513306*/
    CapacityIncrement = this->CapacityIncrement; /*0x513308*/
    if ( CapacityIncrement <= 0 /*0x513318*/
      || !(*(unsigned __int8 (__thiscall **)(DynamicVectorClass *, int, _DWORD))(this->ptr_0 + 8))(
            this,
            Capacity + CapacityIncrement,
            0) )
    {
      return 0; /*0x51331f*/
    }
  }
  Count = this->Count; /*0x513325*/
  Items = this->Items; /*0x513328*/
  this->Count = Count + 1; /*0x51332e*/
  *(_DWORD *)(Items + 4 * Count) = *a2; /*0x513338*/
  return 1; /*0x513321*/
}



// ==== 0x00513340  _DynamicVectorClass_PBVUnitTypeClass::Read  this=DynamicVector  sig=csp ====
int __thiscall HouseTypeClass_36::Read(_DynamicVectorClass_PBVUnitTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x513340*/
  result = 0; /*0x513343*/
  if ( m_10 <= 0 ) /*0x513348*/
    return -1; /*0x51335f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x51334e*/
  {
    if ( ++result >= m_10 ) /*0x51335d*/
      return -1; /*0x51335d*/
  }
  return result; /*0x513362*/
}



// ==== 0x00513370  HouseTypeClass::readBaseDefense  this=TOP  sig=csp ====
_DWORD *__thiscall HouseTypeClass::readBaseDefense(HouseTypeClass *this, _DWORD *a2)
{
  void *v3; // eax
  void *v4; // eax
  void *ptr_8; // ecx
  int v6; // eax

  if ( this == (HouseTypeClass *)a2 ) /*0x51337a*/
    return &this->AbstractClass; /*0x51337a*/
  (*((void (__thiscall **)(HouseTypeClass *))this->AbstractClass + 3))(this); /*0x51337e*/
  v3 = (void *)a2[2]; /*0x513381*/
  this->? = v3; /*0x513386*/
  if ( !v3 ) /*0x513389*/
  {
    this->? = 0; /*0x5133ca*/
    BYTE1(this->?) = 0; /*0x5133d1*/
    return &this->AbstractClass; /*0x5133d5*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (_DWORD)v3); /*0x513393*/
  this->? = v4; /*0x51339b*/
  if ( !v4 ) /*0x5133a0*/
    return &this->AbstractClass; /*0x5133a0*/
  ptr_8 = this->?; /*0x5133a2*/
  v6 = 0; /*0x5133a5*/
  BYTE1(this->?) = 1; /*0x5133a9*/
  if ( (int)ptr_8 <= 0 ) /*0x5133ad*/
    return &this->AbstractClass; /*0x5133ad*/
  do /*0x5133c1*/
  {
    *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x5133b8*/
    ++v6; /*0x5133be*/
  }
  while ( v6 < (int)this->? ); /*0x5133c1*/
  return &this->AbstractClass; /*0x5133c5*/
}



// ==== 0x005133E0  _VectorClass_PBVAircraftTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall HouseTypeClass_28::AddRef(_VectorClass_PBVAircraftTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5133e2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5133ed*/
  {
    v3 = 0; /*0x5133ef*/
    if ( m_8 <= 0 ) /*0x5133f3*/
      return 1; /*0x513413*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5133f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5133fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x513404*/
    {
      ++v3; /*0x513406*/
      ++v4; /*0x513407*/
      if ( v3 >= m_8 ) /*0x51340c*/
        return 1; /*0x51340c*/
    }
  }
  return 0; /*0x51340e*/
}



// ==== 0x00513420  _VectorClass_PBVAircraftTypeClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall HouseTypeClass_36::SetCapacity(_VectorClass_PBVAircraftTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x51342c*/
  {
    LOBYTE(this->m_C) = 0; /*0x513436*/
    if ( a3 ) /*0x51343c*/
      v4 = a3; /*0x513452*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x51344e*/
    LOBYTE(this->m_C) = 1; /*0x513456*/
    if ( v4 ) /*0x51345a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x513465*/
      {
        m_8 = this->m_8; /*0x51346c*/
        if ( a2 < m_8 ) /*0x513471*/
          m_8 = a2; /*0x513473*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x513479*/
          ++i; /*0x51347e*/
        if ( BYTE1(this->m_C) ) /*0x51348b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x513496*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x51349e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5134a7*/
      this->m_8 = a2; /*0x5134af*/
      BYTE1(this->m_C) = a3 == 0; /*0x5134b2*/
      return 1; /*0x5134b8*/
    }
    else
    {
      return 0; /*0x51345f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVAircraftTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5134c2*/
    return 1; /*0x5134c8*/
  }
}



// ==== 0x005134D0  ?$VectorClass@PBVAircraftTypeClass@@::ClearAndFree4  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ClearAndFree4(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5134dd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5134e3*/
    *(_DWORD *)(this + 4) = 0; /*0x5134eb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5134ee*/
  *(_DWORD *)(this + 8) = 0; /*0x5134f1*/
}



// ==== 0x00513500  _VectorClass_PBVAircraftTypeClass::IndexOf  this=VectorClass  sig=csp ====
int __thiscall HouseTypeClass_36::IndexOf(_VectorClass_PBVAircraftTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x513500*/
    return 0; /*0x513508*/
  m_8 = this->m_8; /*0x51350e*/
  result = 0; /*0x513511*/
  if ( m_8 <= 0 ) /*0x513515*/
    return -1; /*0x51352c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x51351b*/
  {
    if ( ++result >= m_8 ) /*0x51352a*/
      return -1; /*0x51352a*/
  }
  return result; /*0x51350a*/
}



// ==== 0x00513540  _VectorClass_PBVAircraftTypeClass::PointerToIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall HouseTypeClass_36::PointerToIndex(_VectorClass_PBVAircraftTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x513540*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x513555*/
  else
    return 0; /*0x513547*/
}



// ==== 0x00513560  HouseTypeClass::readDefaultAlly  this=VectorClass  sig=csp ====
_DWORD *__thiscall HouseTypeClass::readDefaultAlly(HouseTypeClass *this, int a2, int a3)
{
  this->? = 0; /*0x513569*/
  this->? = (void *)a2; /*0x513570*/
  LOBYTE(this->?) = 1; /*0x513573*/
  BYTE1(this->?) = 0; /*0x513577*/
  this->AbstractClass = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x51357b*/
  if ( a2 ) /*0x513581*/
  {
    if ( a3 ) /*0x513589*/
    {
      this->? = (void *)a3; /*0x51358b*/
    }
    else
    {
      this->? = (void *)__2_YAPAXI_Z(4 * a2); /*0x51359c*/
      BYTE1(this->?) = 1; /*0x51359f*/
    }
  }
  this->AbstractClass = &DynamicVectorClass<AircraftTypeClass const *>::`vftable'; /*0x5135a3*/
  this->? = 10; /*0x5135a9*/
  this->? = 0; /*0x5135b0*/
  return &this->AbstractClass; /*0x5135b9*/
}



// ==== 0x005135C0  _DynamicVectorClass_PBVAircraftTypeClass::Constructor_1  this=DynamicVector  sig=csp ====
_DWORD *__thiscall TypeList_Infantry::Constructor_1(_DynamicVectorClass_PBVAircraftTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5135c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x5135c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5135d0*/
  {
    __3_YAXPAX_Z(v3); /*0x5135d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5135e0*/
  }
  BYTE1(this->m_C) = 0; /*0x5135eb*/
  this->m_8 = 0; /*0x5135f1*/
  if ( (a2 & 1) != 0 ) /*0x5135f8*/
    __3_YAXPAX_Z(this); /*0x5135fb*/
  return this->__pad_0; /*0x513605*/
}



// ==== 0x00513610  _DynamicVectorClass_PBVAircraftTypeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall HouseTypeClass_28::Release(_DynamicVectorClass_PBVAircraftTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x51361c*/
  {
    LOBYTE(this->m_C) = 0; /*0x513622*/
    if ( a3 ) /*0x513628*/
      v4 = a3; /*0x51363e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x51363a*/
    LOBYTE(this->m_C) = 1; /*0x513642*/
    if ( !v4 ) /*0x513646*/
      return 0; /*0x5136ba*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x513648*/
    {
      m_8 = this->m_8; /*0x51364f*/
      if ( a2 < m_8 ) /*0x513654*/
        m_8 = a2; /*0x513656*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x51365c*/
        ++i; /*0x513661*/
      if ( BYTE1(this->m_C) ) /*0x51366e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x513679*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x513681*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x51368a*/
    this->m_8 = a2; /*0x513692*/
    BYTE1(this->m_C) = a3 == 0; /*0x513695*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVAircraftTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x51369e*/
  }
  v7 = this->m_8; /*0x5136a1*/
  if ( v7 < this->m_10 ) /*0x5136a9*/
    this->m_10 = v7; /*0x5136ab*/
  return 1; /*0x5136ae*/
}



// ==== 0x005136C0  HouseTypeClass::readPowerPlants  this=HouseTypeClass  sig=csp ====
char __thiscall HouseTypeClass::readPowerPlants(HouseTypeClass *this, _DWORD *a2)
{
  void *ptr_8; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax
  _DWORD *ptr_4; // edx

  ptr_8 = this->?; /*0x5136c3*/
  if ( this->? >= (int)ptr_8 ) /*0x5136cb*/
  {
    if ( !BYTE1(this->?) && ptr_8 ) /*0x5136d6*/
      return 0; /*0x5136d6*/
    abstractFlags = this->?; /*0x5136d8*/
    if ( abstractFlags <= 0 /*0x5136e8*/
      || !(*((unsigned __int8 (__thiscall **)(HouseTypeClass *, int, _DWORD))this->AbstractClass + 2))(
            this,
            (int)ptr_8 + abstractFlags,
            0) )
    {
      return 0; /*0x5136ef*/
    }
  }
  uniqueId = this->?; /*0x5136f5*/
  ptr_4 = this->?; /*0x5136f8*/
  this->? = uniqueId + 1; /*0x5136fe*/
  ptr_4[uniqueId] = *a2; /*0x513708*/
  return 1; /*0x5136f1*/
}



// ==== 0x00513710  _DynamicVectorClass_PBVAircraftTypeClass::Read  this=DynamicVector  sig=csp ====
int __thiscall HouseTypeClass_28::Read(_DynamicVectorClass_PBVAircraftTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x513710*/
  result = 0; /*0x513713*/
  if ( m_10 <= 0 ) /*0x513718*/
    return -1; /*0x51372f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x51371e*/
  {
    if ( ++result >= m_10 ) /*0x51372d*/
      return -1; /*0x51372d*/
  }
  return result; /*0x513732*/
}



// ==== 0x00513740  TypeList::CopyConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList::CopyConstructor(TypeList *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  this->? = 0; /*0x51374d*/
  this->? = 0; /*0x513750*/
  this->? = 1; /*0x513753*/
  this->? = 0; /*0x513757*/
  this->DynamicVectorClass = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x51375a*/
  if ( this != (TypeList *)a2 ) /*0x513760*/
  {
    Vector::Destructor((_VectorClass_PBVUnitTypeClass *)this); /*0x513762*/
    v3 = a2[2]; /*0x513768*/
    this->? = v3; /*0x51376d*/
    if ( v3 ) /*0x513770*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x513776*/
      this->? = v4; /*0x513780*/
      if ( v4 ) /*0x513783*/
      {
        Capacity = this->?; /*0x513785*/
        v6 = 0; /*0x513788*/
        this->? = 1; /*0x51378c*/
        if ( Capacity > 0 ) /*0x513790*/
        {
          do /*0x5137a4*/
          {
            *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x51379b*/
            ++v6; /*0x5137a1*/
          }
          while ( v6 < this->? ); /*0x5137a4*/
        }
      }
    }
    else
    {
      this->? = 0; /*0x5137a8*/
      this->? = 0; /*0x5137ab*/
    }
  }
  this->? = a2[4]; /*0x5137b1*/
  this->? = a2[5]; /*0x5137b7*/
  this->DynamicVectorClass = &TypeList<UnitTypeClass const *>::`vftable'; /*0x5137ba*/
  return &this->DynamicVectorClass; /*0x5137c2*/
}



// ==== 0x005137D0  HouseTypeClass::readParaDropTypes  this=VectorClass  sig=csp ====
_DWORD *__thiscall HouseTypeClass::readParaDropTypes(HouseTypeClass *this, _DWORD *a2)
{
  void *v3; // eax
  void *v4; // eax
  void *ptr_8; // ecx
  int v6; // eax

  this->? = 0; /*0x5137dd*/
  this->? = 0; /*0x5137e0*/
  LOBYTE(this->?) = 1; /*0x5137e3*/
  BYTE1(this->?) = 0; /*0x5137e7*/
  this->AbstractClass = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x5137ea*/
  if ( this != (HouseTypeClass *)a2 ) /*0x5137f0*/
  {
    VectorClass::ClearAndFree4((int)this); /*0x5137f2*/
    v3 = (void *)a2[2]; /*0x5137f8*/
    this->? = v3; /*0x5137fd*/
    if ( v3 ) /*0x513800*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * (_DWORD)v3); /*0x513806*/
      this->? = v4; /*0x513810*/
      if ( v4 ) /*0x513813*/
      {
        ptr_8 = this->?; /*0x513815*/
        v6 = 0; /*0x513818*/
        BYTE1(this->?) = 1; /*0x51381c*/
        if ( (int)ptr_8 > 0 ) /*0x513820*/
        {
          do /*0x513834*/
          {
            *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x51382b*/
            ++v6; /*0x513831*/
          }
          while ( v6 < (int)this->? ); /*0x513834*/
        }
      }
    }
    else
    {
      this->? = 0; /*0x513838*/
      BYTE1(this->?) = 0; /*0x51383b*/
    }
  }
  this->? = a2[4]; /*0x513841*/
  this->? = a2[5]; /*0x513847*/
  this->AbstractClass = &TypeList<AircraftTypeClass const *>::`vftable'; /*0x51384a*/
  return &this->AbstractClass; /*0x513852*/
}



// ==== 0x00513860  HouseTypeClass::readAllowedUnits  this=VectorClass  sig=csp ====
_DWORD *__thiscall HouseTypeClass::readAllowedUnits(HouseTypeClass *this, _DWORD *a2)
{
  void *v3; // eax
  void *v4; // eax
  void *ptr_8; // ecx
  int v6; // eax

  this->? = 0; /*0x51386d*/
  this->? = 0; /*0x513870*/
  LOBYTE(this->?) = 1; /*0x513873*/
  BYTE1(this->?) = 0; /*0x513877*/
  this->AbstractClass = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x51387a*/
  if ( this != (HouseTypeClass *)a2 ) /*0x513880*/
  {
    Vector::Cleanup((_VectorClass_PBVInfantryTypeClass *)this); /*0x513882*/
    v3 = (void *)a2[2]; /*0x513888*/
    this->? = v3; /*0x51388d*/
    if ( v3 ) /*0x513890*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * (_DWORD)v3); /*0x513896*/
      this->? = v4; /*0x5138a0*/
      if ( v4 ) /*0x5138a3*/
      {
        ptr_8 = this->?; /*0x5138a5*/
        v6 = 0; /*0x5138a8*/
        BYTE1(this->?) = 1; /*0x5138ac*/
        if ( (int)ptr_8 > 0 ) /*0x5138b0*/
        {
          do /*0x5138c4*/
          {
            *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x5138bb*/
            ++v6; /*0x5138c1*/
          }
          while ( v6 < (int)this->? ); /*0x5138c4*/
        }
      }
    }
    else
    {
      this->? = 0; /*0x5138c8*/
      BYTE1(this->?) = 0; /*0x5138cb*/
    }
  }
  this->? = a2[4]; /*0x5138d1*/
  this->? = a2[5]; /*0x5138d7*/
  this->AbstractClass = &DynamicVectorClass<InfantryTypeClass const *>::`vftable'; /*0x5138da*/
  return &this->AbstractClass; /*0x5138e2*/
}



// ==== 0x005138F0  InfantryTypeVector::Construct2  this=VectorClass  sig=csp ====
_DWORD *__thiscall InfantryTypeVector::Construct2(InfantryTypeVector *this, int a2, int a3)
{
  this->InfantryTypeVector_field_0x04 = 0; /*0x5138fb*/
  this->InfantryTypeVector_field_0x08 = a2; /*0x5138fe*/
  LOBYTE(this->InfantryTypeVector_field_0x0C) = 1; /*0x513901*/
  BYTE1(this->InfantryTypeVector_field_0x0C) = 0; /*0x513905*/
  *(_DWORD *)this->__pad_0 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x513908*/
  if ( a2 ) /*0x51390e*/
  {
    if ( a3 ) /*0x513916*/
    {
      this->InfantryTypeVector_field_0x04 = a3; /*0x513918*/
      return this->__pad_0; /*0x51391e*/
    }
    this->InfantryTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x51392d*/
    BYTE1(this->InfantryTypeVector_field_0x0C) = 1; /*0x513930*/
  }
  return this->__pad_0; /*0x51391d*/
}



// ==== 0x00513940  UnitTypeVector::ConstructUnitTypeVectorClass  this=VectorClass  sig=csp ====
_DWORD *__thiscall UnitTypeVector::ConstructUnitTypeVectorClass(UnitTypeVector *this, int a2, int a3)
{
  this->UnitTypeVector_field_0x04 = 0; /*0x51394b*/
  this->UnitTypeVector_field_0x08 = a2; /*0x51394e*/
  LOBYTE(this->UnitTypeVector_field_0x0C) = 1; /*0x513951*/
  BYTE1(this->UnitTypeVector_field_0x0C) = 0; /*0x513955*/
  *(_DWORD *)this->__pad_0 = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x513958*/
  if ( a2 ) /*0x51395e*/
  {
    if ( a3 ) /*0x513966*/
    {
      this->UnitTypeVector_field_0x04 = a3; /*0x513968*/
      return this->__pad_0; /*0x51396e*/
    }
    this->UnitTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x51397d*/
    BYTE1(this->UnitTypeVector_field_0x0C) = 1; /*0x513980*/
  }
  return this->__pad_0; /*0x51396d*/
}



// ==== 0x00513990  AircraftTypeVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall AircraftTypeVector::Constructor(AircraftTypeVector *this, int a2, int a3)
{
  this->Items = 0; /*0x51399b*/
  this->Capacity = a2; /*0x51399e*/
  this->IsInitialized = 1; /*0x5139a1*/
  this->IsAllocated = 0; /*0x5139a5*/
  *this = (AircraftTypeVector)&VectorClass<AircraftTypeClass const *>::`vftable'; /*0x5139a8*/
  if ( a2 ) /*0x5139ae*/
  {
    if ( a3 ) /*0x5139b6*/
    {
      this->Items = a3; /*0x5139b8*/
      return this; /*0x5139be*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5139cd*/
    this->IsAllocated = 1; /*0x5139d0*/
  }
  return this; /*0x5139bd*/
}



// ==== 0x005139E0  HouseTypeClass::readBaseDefenses  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::sub_5139E0(int a1, const void *a2, _DWORD *a3)
{
  return HouseTypeClass::QueryInterface(a1 - 4, a2, a3);
}



// ==== 0x005139F0  HouseTypeClass::readAiBuildLists  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::sub_5139F0(int a1)
{
  return HouseTypeClass::AddRef(a1 - 4);
}



// ==== 0x00513A00  HouseTypeClass::readLoadoutData  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::sub_513A00(int a1)
{
  return HouseTypeClass::Release(a1 - 4);
}



// ==== 0x00513A10  sub_513A10  this=-  sig=ida-proto ====
void sub_513A10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x513a1c*/
  dbl_A8F168 = Math::Sqrt(v0 + v0); /*0x513a2e*/
}



// ==== 0x00513A40  sub_513A40  this=-  sig=ida-proto ====
void sub_513A40()
{
  dbl_A8F1B8 = dbl_A8F168 / 60.0; /*0x513a4c*/
}



// ==== 0x00513A60  sub_513A60  this=-  sig=ida-proto ====
void sub_513A60()
{
  dbl_A8F1A0 = 1.0 / dbl_A8F1B8; /*0x513a6c*/
}



// ==== 0x00513A80  sub_513A80  this=-  sig=ida-proto ====
void sub_513A80()
{
  dbl_A8F198 = 0.0174532925199433 * 45.0; /*0x513a8c*/
}



// ==== 0x00513AA0  sub_513AA0  this=-  sig=ida-proto ====
void sub_513AA0()
{
  dbl_A8F170 = 0.0174532925199433 * 60.0; /*0x513aac*/
}



// ==== 0x00513AC0  sub_513AC0  this=-  sig=ida-proto ====
void sub_513AC0()
{
  dbl_A8F148 = 0.0174532925199433 * 90.0; /*0x513acc*/
}



// ==== 0x00513AE0  sub_513AE0  this=-  sig=ida-proto ====
__int64 sub_513AE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A8F148 - dbl_A8F170); /*0x513af2*/
  result = Math::RoundToInt(v0 * dbl_A8F168 * 0.5); /*0x513b06*/
  dword_A8F1C0 = result; /*0x513b0b*/
  return result; /*0x513b10*/
}



// ==== 0x00513B20  sub_513B20  this=-  sig=ida-proto ====
void sub_513B20()
{
  dbl_A8F178 = Math::ArcTan((double)dword_A8F1C0 * 0.00390625); /*0x513b37*/
}



// ==== 0x00513B50  sub_513B50  this=-  sig=ida-proto ====
void sub_513B50()
{
  dbl_A8F190 = Math::ArcTan((double)(2 * dword_A8F1C0) / dbl_A8F168); /*0x513b72*/
}



// ==== 0x00513B80  sub_513B80  this=-  sig=ida-proto ====
__int64 sub_513B80()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F1C0) + 0.5); /*0x513b9b*/
  dword_A8F1B4 = result; /*0x513ba0*/
  return result; /*0x513ba6*/
}



// ==== 0x00513BB0  sub_513BB0  this=-  sig=ida-proto ====
int sub_513BB0()
{
  dword_A8F160 = 0; /*0x513bb2*/
  return 0; /*0x513bbe*/
}



// ==== 0x00513BC0  sub_513BC0  this=-  sig=ida-proto ====
int sub_513BC0()
{
  dword_A8F180 = 0; /*0x513bc2*/
  dword_A8F184 = 0; /*0x513bc7*/
  dword_A8F188 = 0; /*0x513bcc*/
  return 0; /*0x513bd1*/
}



// ==== 0x00513BE0  sub_513BE0  this=-  sig=ida-proto ====
int sub_513BE0()
{
  dword_A8F1B0 = 0; /*0x513be5*/
  dword_A8F1A8 = 128; /*0x513bef*/
  dword_A8F1AC = 128; /*0x513bf4*/
  return 128; /*0x513bf9*/
}



// ==== 0x00513C00  sub_513C00  this=-  sig=ida-proto ====
int sub_513C00()
{
  dword_A8F150 = 0; /*0x513c02*/
  dword_A8F154 = 0; /*0x513c07*/
  dword_A8F158 = 0; /*0x513c0c*/
  dword_A8F15C = 0; /*0x513c11*/
  return 0; /*0x513c16*/
}



// ==== 0x00513C20  LocomotionClass::ProcessData  this=HoverLocomotionClass  sig=csp ====
int __thiscall LocomotionClass::ProcessData(LocomotionClass *this)
{
  LocomotionClass::Init(this); /*0x513c24*/
  this->Dest = *(_DWORD *)&stru_A8EB00.?[1436]; /*0x513c34*/
  this->HoverLocomotionClass_field_bool_70 = *(_DWORD *)&stru_A8EB00.?[1440]; /*0x513c3d*/
  this->q008 = *(_DWORD *)&stru_A8EB00.?[1444]; /*0x513c49*/
  this->HeadToCoord = *(_DWORD *)&stru_A8EB00.?[1436]; /*0x513c51*/
  this->q028 = *(_DWORD *)&stru_A8EB00.?[1440]; /*0x513c59*/
  this->u32_2C = *(_DWORD *)&stru_A8EB00.?[1444]; /*0x513c64*/
  FrameSnapshot::InitMax((FrameSnapshot *)this + 6, 0); /*0x513c67*/
  this->MaxSpeed = 0; /*0x513c6c*/
  this->CurrentSpeed = 0; /*0x513c6f*/
  this->BoostSpeed = 0; /*0x513c72*/
  this->Dest = 0; /*0x513c75*/
  this->u32_4C = 0; /*0x513c78*/
  this->__pad_015 = 0; /*0x513c7b*/
  this->u32_5C = 1072693248; /*0x513c7e*/
  this->q064 = 0; /*0x513c85*/
  this->HoverLocomotionClass_field_bool_68 = 0; /*0x513c88*/
  this->HoverLocomotionClass_field_6C = 0; /*0x513c8b*/
  this->HoverLocomotionClass_field_bool_70 = 0; /*0x513c8e*/
  *(_DWORD *)this->ILocomotion = &HoverLocomotionClass::`vftable'; /*0x513c91*/
  *(_DWORD *)&this->ILocomotion[4] = &HoverLocomotionClass::`vftable'; /*0x513c97*/
  return (int)this->ILocomotion; /*0x513ca0*/
}



// ==== 0x00513CB0  HoverLocomotionClass::WriteObject  this=HoverLocomotionClass  sig=csp ====
int __stdcall SaveGame::WriteObject(HoverLocomotionClass *this, int a2)
{
  int v2; // ebx
  int v3; // eax
  FrameSnapshot v5[3]; // [esp+Ch] [ebp-18h] BYREF

  v2 = StreamClass::ResetPosition((LocomotionClass *)this, a2); /*0x513cc8*/
  v3 = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?); /*0x513ccc*/
  FrameSnapshot::InitMax(v5, 2 * *(_DWORD *)(v3 + 1820)); /*0x513cdf*/
  qmemcpy(&this->HeadToCoord[2], v5, 0x18u); /*0x513cf2*/
  return v2; /*0x513cf4*/
}



// ==== 0x00513D00  HoverLocomotionClass::method_513D00  this=HoverLocomotionClass  sig=csp ====
void __thiscall sub_513D00(HoverLocomotionClass *this)
{
  *(_DWORD *)this->LocomotionClass = &HoverLocomotionClass::`vftable'; /*0x513d00*/
  *(_DWORD *)&this->LocomotionClass[4] = &HoverLocomotionClass::`vftable'; /*0x513d06*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x513d0d*/
}



// ==== 0x00513D20  BuildingLightClass::UpdateOscillation  this=BuildingLightClass  sig=csp ====
signed int __thiscall BuildingLightClass::UpdateOscillation(BuildingLightClass *this)
{
  _DWORD *ptr_C; // eax
  int *v3; // eax
  int GroundHeight; // edi
  _DWORD *v5; // eax
  int *v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // ebx
  int v10; // ebp
  int v11; // ecx
  int v12; // eax
  double v13; // st7
  int v14; // eax
  int v15; // eax
  double v16; // st6
  int v17; // edi
  double v18; // st6
  int v19; // eax
  int v20; // eax
  _BYTE *v21; // ecx
  char v22; // bl
  signed int result; // eax
  int v24; // ecx
  double v25; // st7
  int v26; // [esp+1Ch] [ebp-18h]
  int v27; // [esp+1Ch] [ebp-18h]
  int v28; // [esp+20h] [ebp-14h]
  int v29; // [esp+28h] [ebp-Ch] BYREF
  int v30; // [esp+2Ch] [ebp-8h]
  int v31; // [esp+30h] [ebp-4h]

  v26 = (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 456))(this->?); /*0x513d3a*/
  v28 = v26; /*0x513d3e*/
  ptr_C = this->?; /*0x513d42*/
  if ( ptr_C[376] != -1 ) /*0x513d4c*/
  {
    v3 = ptr_C + 39; /*0x513d52*/
    v29 = *v3; /*0x513d59*/
    v30 = v3[1]; /*0x513d65*/
    v31 = v3[2]; /*0x513d71*/
    GroundHeight = Cell::GetGroundHeight(&v29); /*0x513d7a*/
    v5 = this->?; /*0x513d7c*/
    v6 = v5 + 39; /*0x513d8b*/
    v7 = v5[376] & 7; /*0x513d8d*/
    v8 = *v6; /*0x513d90*/
    v9 = v6[1]; /*0x513d92*/
    v10 = v6[2]; /*0x513d95*/
    v11 = 8 * v7 + 9041624; /*0x513d98*/
    v12 = v8 + g_DDrawSurfaceManager.scenario[2 * v7 + 102]; /*0x513dab*/
    v30 = v9 + *(_DWORD *)(v11 + 4); /*0x513dad*/
    v29 = v12; /*0x513dbb*/
    v31 = v10; /*0x513dbf*/
    if ( Cell::GetGroundHeight(&v29) > GroundHeight ) /*0x513dca*/
      v28 = v26 - *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1484); /*0x513ddc*/
  }
  v13 = (double)v26 + *(double *)&this->?[4]; /*0x513de4*/
  LOWORD(v14) = Math::RoundToInt(v13); /*0x513de7*/
  v27 = v14; /*0x513dec*/
  v15 = (*(int (__stdcall **)(char *))(*((_DWORD *)this->? + 1) + 16))((char *)this->? + 4); /*0x513df9*/
  if ( (v15 & 1) != 0 ) /*0x513dfe*/
    v16 = 1.0; /*0x513e00*/
  else
    v16 = 1.1; /*0x513e08*/
  v17 = *(_DWORD *)&stru_A8EB00.?[416] + 2 * v15; /*0x513e20*/
  v18 = v16 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1488) * 900.0; /*0x513e23*/
  LOWORD(v19) = Math::RoundToInt(v13); /*0x513e2b*/
  Math::SinCos((double)(v17 % v19) * 6.283185307179586 / v18); /*0x513e4f*/
  LOWORD(v20) = Math::RoundToInt(v13 + v13 + (double)v27); /*0x513e5d*/
  if ( v20 < 0 ) /*0x513e66*/
  {
    this->?[4] = 0; /*0x513e68*/
    this->? = 0; /*0x513e6b*/
    v20 = 0; /*0x513e6e*/
  }
  v21 = this->?; /*0x513e70*/
  v22 = v21[116]; /*0x513e74*/
  v21[116] = 0; /*0x513e77*/
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this->? + 460))(this->?, v20); /*0x513e7f*/
  result = (signed int)this->?; /*0x513e85*/
  *(_BYTE *)(result + 116) = v22; /*0x513e8c*/
  v24 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x513e8f*/
  if ( v28 < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1484) ) /*0x513e9b*/
  {
    if ( (unsigned __int8)StreamClass::GetDirty((IUnknown *)&this->?) ) /*0x513ea1*/
      *(double *)&this->?[4] = ((double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1484) /*0x513ec8*/
                              + (double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1484)
                              - (double)v28)
                             / (double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1484)
                             * (double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5816)
                             + *(double *)&this->?[4];
    v24 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x513ecd*/
    result = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1484) / 4; /*0x513edf*/
    if ( v28 < result ) /*0x513ee4*/
    {
      result = (unsigned int)((unsigned __int64)(1431655766LL /*0x513ef5*/
                                               * *(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5816)) >> 32) >> 31;
      *(double *)&this->?[4] = (double)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5816) / 3) /*0x513f05*/
                             + *(double *)&this->?[4];
      v24 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x513f08*/
    }
  }
  v25 = *(double *)&this->?[4] - (double)*(int *)(v24 + 5816); /*0x513f15*/
  *(double *)&this->?[4] = v25; /*0x513f18*/
  *(double *)&this->?[4] = v25 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1520); /*0x513f27*/
  return result; /*0x513f2a*/
}



// ==== 0x00513F40  ObjectClass::BuildTransform  this=ObjectClass  sig=csp ====
float *__stdcall ObjectClass::BuildTransform(TechnoClass *this, float *a2, _DWORD *a3)
{
  double v3; // st4
  double v4; // st5
  double v5; // st6
  int ptr_8; // ecx
  _DWORD *v7; // ecx
  int v8; // ebp
  float *v10; // eax
  long double v11; // st7
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  float v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  float *Transform; // eax
  float *v23; // eax
  float *v24; // esi
  float v25; // [esp+4h] [ebp-154h]
  float v26; // [esp+8h] [ebp-150h]
  float v27; // [esp+8h] [ebp-150h]
  float v28; // [esp+8h] [ebp-150h]
  float v29; // [esp+18h] [ebp-140h]
  int v30; // [esp+18h] [ebp-140h]
  float v31; // [esp+1Ch] [ebp-13Ch]
  int v32; // [esp+1Ch] [ebp-13Ch]
  float v33; // [esp+20h] [ebp-138h] BYREF
  int v34; // [esp+24h] [ebp-134h]
  float v35; // [esp+28h] [ebp-130h]
  _DWORD v36[3]; // [esp+2Ch] [ebp-12Ch] BYREF
  Matrix3x4 v37; // [esp+38h] [ebp-120h] BYREF
  Transform v38[12]; // [esp+68h] [ebp-F0h] BYREF
  Matrix3x4 v39; // [esp+98h] [ebp-C0h] BYREF
  float v40[12]; // [esp+C8h] [ebp-90h] BYREF
  float v41[12]; // [esp+F8h] [ebp-60h] BYREF
  float v42[12]; // [esp+128h] [ebp-30h] BYREF

  ptr_8 = this->ptr_8; /*0x513f50*/
  if ( fabs(*(float *)(ptr_8 + 808)) >= 0.005 || fabs(*(float *)(ptr_8 + 812)) >= 0.005 ) /*0x513f7f*/
  {
    if ( a3 ) /*0x5140a0*/
      *a3 = -1; /*0x5140a2*/
    Matrix3x4::Identity(&v39); /*0x5140af*/
    Matrix3x4::Identity(&v37); /*0x5140b8*/
    v11 = *(double *)((*(int (__thiscall **)(int))(*(_DWORD *)this->ptr_8 + 132))(this->ptr_8) + 864); /*0x5140cb*/
    v29 = v11; /*0x5140d3*/
    v31 = *(double *)((*(int (__thiscall **)(int))(*(_DWORD *)this->ptr_8 + 132))(this->ptr_8) + 872); /*0x5140e9*/
    Math::ArcTan2(*(float *)(this->ptr_8 + 812)); /*0x5140f6*/
    v12 = this->ptr_8; /*0x5140fb*/
    v35 = v3; /*0x5140fe*/
    Math::SinCos(*(float *)(v12 + 812)); /*0x51410b*/
    v13 = this->ptr_8; /*0x514110*/
    *(float *)&v34 = v4; /*0x514113*/
    Math::ArcTan2(*(float *)(v13 + 808)); /*0x514120*/
    v14 = this->ptr_8; /*0x514125*/
    v33 = v5; /*0x514128*/
    Math::SinCos(*(float *)(v14 + 808)); /*0x514135*/
    LOWORD(v15) = Math::RoundToInt(fabs(v11) * v29 + fabs(*(float *)&v34) * v31); /*0x51414f*/
    *(float *)&v34 = v15; /*0x51415c*/
    LOWORD(v16) = Math::RoundToInt(v35 * v31); /*0x514160*/
    v35 = *(float *)&v16; /*0x514165*/
    LOWORD(v17) = Math::RoundToInt(v31 - (double)v16); /*0x514171*/
    v18 = v17; /*0x51417e*/
    v32 = v17; /*0x514180*/
    LOWORD(v19) = Math::RoundToInt(v33 * v29); /*0x514184*/
    v33 = *(float *)&v19; /*0x514189*/
    LOWORD(v20) = Math::RoundToInt(v29 - (double)v19); /*0x514195*/
    v21 = this->ptr_8; /*0x51419a*/
    v30 = v20; /*0x51419f*/
    if ( *(float *)(v21 + 812) < 0.0 ) /*0x5141b4*/
      v32 = -v18; /*0x5141b8*/
    if ( *(float *)(v21 + 808) > 0.0 ) /*0x5141cd*/
      v30 = -v20; /*0x5141d1*/
    v26 = (float)v34; /*0x5141e1*/
    Matrix3x3::ApplyCol1(v39.m_Data, v26); /*0x5141e4*/
    v27 = (float)v32; /*0x5141f2*/
    Matrix3x4::Translate(v37.m_Data, v27); /*0x5141f5*/
    v28 = (float)v30; /*0x514203*/
    Matrix3x3::ApplyCol0(v37.m_Data, v28); /*0x514206*/
    Matrix3x3::RotateX(v37.m_Data, *(float *)(this->ptr_8 + 808)); /*0x514219*/
    Matrix3D::RotateZ(v37.m_Data, *(float *)(this->ptr_8 + 812)); /*0x51422c*/
    Transform = Turret::GetTransform((LocomotionClass *)this, v40, a3); /*0x51423b*/
    Transform::Copy(v38, Transform); /*0x514245*/
    v23 = MultiplyMatrix3x4(v41, (float *)v39.m_Data, (float *)&v38[0].Transform_field_00); /*0x514262*/
    v10 = MultiplyMatrix3x4(v42, v23, (float *)v37.m_Data); /*0x514270*/
    goto LABEL_16; /*0x514270*/
  }
  if ( (*(unsigned __int8 (__stdcall **)(TechnoClass *))(this->ptr_0 + 96))(this) ) /*0x513f88*/
  {
    v10 = Turret::GetTransform((LocomotionClass *)this, (float *)&v38[0].Transform_field_00, a3); /*0x51408d*/
LABEL_16:
    v24 = v10; /*0x514275*/
    qmemcpy(a2, v24, 0x30u); /*0x514285*/
    return a2; /*0x514277*/
  }
  v7 = (_DWORD *)(this->ptr_8 + 156); /*0x513f97*/
  v36[0] = *v7; /*0x513f9f*/
  v36[1] = v7[1]; /*0x513fab*/
  v36[2] = v7[2]; /*0x513fb2*/
  v8 = (unsigned __int8)Coord::To_Cell((Coord *)&dword_87F7E8, v36)->slopeIndex[0]; /*0x513fc8*/
  qmemcpy(&v37, CopyAudioData((char *)v38, v8), sizeof(v37)); /*0x513fe4*/
  v25 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(this->ptr_8 + 904), &v33) >> 10) + 1) >> 1) /*0x514016*/
                     & 0x1F)
                    - 8)
      * -0.1963495408493621;
  Matrix2D::Rotate(v37.m_Data, v25); /*0x514019*/
  if ( a3 ) /*0x514027*/
  {
    if ( *a3 != -1 ) /*0x51402e*/
    {
      *a3 = 32 * (v8 + (*a3 << 6)); /*0x51403c*/
      *a3 |= ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(this->ptr_8 + 904), &v33) >> 10) + 1) >> 1) /*0x51405c*/
           & 0x1F;
    }
  }
  qmemcpy(a2, &v37, 0x30u); /*0x514070*/
  return a2; /*0x514073*/
}



// ==== 0x005142A0  HoverLocomotionClass::ComputeAudio3DRotation_0  this=HoverLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::ComputeAudio3DRotation_0(HoverLocomotionClass *this, float *a2, _DWORD *a3)
{
  FootClass *Owner; // ecx
  float *v4; // esi
  float v6[12]; // [esp+8h] [ebp-30h] BYREF

  Owner = this->?; /*0x5142a7*/
  if ( fabs(*(float *)&Owner->?) >= 0.005 || fabs(*(float *)&Owner->?) >= 0.005 ) /*0x5142d8*/
  {
    if ( a3 ) /*0x5142dc*/
      *a3 = -1; /*0x5142de*/
  }
  v4 = Audio3D::ComputeRotation((IUnknown *)this, v6, a3); /*0x5142f0*/
  qmemcpy(a2, v4, 0x30u); /*0x5142fd*/
  return a2; /*0x5142ff*/
}



// ==== 0x00514310  HoverLocomotionClass::DeployAnimation  this=HoverLocomotionClass  sig=csp ====
char __stdcall InfantryClass::DeployAnimation(HoverLocomotionClass *this)
{
  char *v1; // edi
  FootClass *Owner; // ecx
  int v4; // eax
  FootClass *v5; // ecx
  double v6; // st7
  int v7; // eax
  FootClass *v8; // ecx
  int v9; // ebx
  __int16 v10; // bx
  int v11; // ebx
  CellStruct *v12; // eax
  bool v13; // bl
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int Member; // eax
  unsigned __int16 v20; // bx
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  bool v23; // al
  int v24; // eax
  FootClass *v25; // ecx
  int v26; // ebx
  FootClass *v27; // ecx
  FootClass *v28; // ecx
  unsigned int v29; // ebx
  unsigned int v30; // edi
  int v31; // eax
  int v32; // eax
  FootClass *v33; // ecx
  int v34; // eax
  CellClass *v35; // eax
  FootClass *v36; // ecx
  CellClass *v37; // edi
  FootClass *v38; // eax
  int v39; // ecx
  _DWORD *v40; // ebx
  char isOnMap; // bl
  FootClass *v42; // ecx
  AnimClass *v43; // eax
  int *location; // ecx
  _DWORD *Value; // eax
  FootClass *v46; // ecx
  int v47; // ecx
  int v48; // eax
  int v49; // ecx
  int *v50; // edx
  CellClass *v51; // eax
  int *v52; // ecx
  int *v53; // eax
  int v54; // edi
  _WORD *v55; // [esp+20h] [ebp-5Ch]
  double v56; // [esp+34h] [ebp-48h] BYREF
  double v57; // [esp+3Ch] [ebp-40h] BYREF
  int v58; // [esp+48h] [ebp-34h] BYREF
  int v59; // [esp+4Ch] [ebp-30h] BYREF
  int v60; // [esp+50h] [ebp-2Ch]
  int v61; // [esp+54h] [ebp-28h]
  int v62; // [esp+58h] [ebp-24h]
  double v63; // [esp+5Ch] [ebp-20h] BYREF
  int v64; // [esp+64h] [ebp-18h]
  int v65; // [esp+70h] [ebp-Ch] BYREF
  int v66; // [esp+74h] [ebp-8h]
  int v67; // [esp+78h] [ebp-4h]

  if ( (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) ) /*0x514322*/
  {
    v1 = (char *)this - 4; /*0x51432d*/
    if ( (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) ) /*0x514337*/
    {
      UpdateFootFacing((ObjectClass *)((char *)this - 4)); /*0x514344*/
      Owner = this->?; /*0x514349*/
      if ( !Owner->? ) /*0x51434c*/
        return 0; /*0x51435e*/
      v4 = (*((int (__thiscall **)(FootClass *))Owner->TechnoClass + 116))(Owner); /*0x514363*/
      v5 = this->?; /*0x514369*/
      v58 = v4; /*0x51436c*/
      LODWORD(v57) = (*((int (__thiscall **)(FootClass *))v5->TechnoClass + 334))(v5); /*0x514378*/
      v6 = (double)SLODWORD(v57) * *(double *)&this->MaxSpeed[1]; /*0x514380*/
      LOWORD(v7) = Math::RoundToInt(v6); /*0x514383*/
      v8 = this->?; /*0x514388*/
      LODWORD(v56) = v7; /*0x51438b*/
      v9 = (*((int (__thiscall **)(FootClass *, int *))v8->TechnoClass + 18))(v8, &v65); /*0x514399*/
      Int64::Equal((Int64 *)v9, &this->Dest[2]); /*0x5143a1*/
      Math::CalcAngle( /*0x5143be*/
        (double)*(int *)(v9 + 4) - (double)this->HeadToCoord[0],
        (double)this->Dest[2] - (double)*(int *)v9);
      v10 = Math::RoundToInt(v6); /*0x5143d7*/
      if ( !LODWORD(v56) /*0x514403*/
        && !abs16(*(_WORD *)ProgressTimer::GetValue((ProgressTimer *)&this->HeadToCoord[2], &v57) - v10) )
      {
        v13 = 1; /*0x514466*/
        if ( *((_DWORD *)v1 + 9) != *(_DWORD *)&stru_A8EB00.?[1436] /*0x514438*/
          || *((_DWORD *)v1 + 10) != *(_DWORD *)&stru_A8EB00.?[1440]
          || *((_DWORD *)v1 + 11) != *(_DWORD *)&stru_A8EB00.?[1444] )
        {
          v11 = *((_DWORD *)v1 + 3); /*0x51443a*/
          v55 = Coord::ToCell((Coord *)(v1 + 36), &v57); /*0x514449*/
          v12 = (CellStruct *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v11 + 440))(v11, &v56); /*0x514451*/
          if ( !(unsigned __int8)CellStruct::Equals(v12, v55) ) /*0x514459*/
            v13 = 0; /*0x514438*/
        }
        v14 = *((_DWORD *)v1 + 3); /*0x514468*/
        *((_DWORD *)v1 + 18) = 0; /*0x51446b*/
        *((_DWORD *)v1 + 19) = 1072693248; /*0x514472*/
        (*(void (__usercall **)(int@<ecx>, _DWORD, int, double@<st0>))(*(_DWORD *)v14 + 1348))(v14, 0, 1072693248, v6); /*0x514482*/
        MovementAI::StepFootClass((MovementAI *)((char *)this - 4), 0); /*0x51448c*/
        if ( v13 ) /*0x514493*/
          MovementAI::MainFootClass((MovementAI *)((char *)this - 4), 1); /*0x514499*/
        LODWORD(v57) = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 334))(this->?); /*0x5144a9*/
        LOWORD(v15) = Math::RoundToInt(v6); /*0x5144b4*/
        LODWORD(v56) = v15; /*0x5144b9*/
      }
      v16 = this->?->?[0]; /*0x5144ce*/
      v17 = this->?->?[2]; /*0x5144d5*/
      v60 = this->?->?[1] - this->HeadToCoord[0]; /*0x5144d8*/
      v67 = v17; /*0x5144e0*/
      v59 = v16 - this->Dest[2]; /*0x5144e9*/
      Math::Sqrt((double)v59 * (double)v59 + (double)v60 * (double)v60); /*0x514502*/
      LOWORD(v18) = Math::RoundToInt(v6); /*0x51450a*/
      if ( SLODWORD(v56) >= v18 ) /*0x514513*/
      {
        this->?->frozenStill = 1; /*0x51451e*/
        this->?->FootClass_field_bool_6B7 = 0; /*0x514528*/
        LOBYTE(this->HoverLocomotionClass_field_6C) = 0; /*0x514531*/
        MovementAI::StepFootClass((MovementAI *)((char *)this - 4), 0); /*0x514535*/
        if ( this->?->pathDirections[0] == -1 /*0x51456a*/
          && this->? == *(_DWORD *)&stru_A8EB00.?[1436]
          && this->Dest[0] == *(_DWORD *)&stru_A8EB00.?[1440]
          && this->Dest[1] == *(_DWORD *)&stru_A8EB00.?[1444] )
        {
          this->Dest[2] = *(_DWORD *)&stru_A8EB00.?[1436]; /*0x51456f*/
          this->HeadToCoord[0] = *(_DWORD *)&stru_A8EB00.?[1440]; /*0x514578*/
          this->HeadToCoord[1] = *(_DWORD *)&stru_A8EB00.?[1444]; /*0x514581*/
        }
        Member = Team::GetMember((Team *)this->?, 0); /*0x514589*/
        v20 = *(_WORD *)&stru_A8EB00.?[1404]; /*0x51458e*/
        LODWORD(v57) = *(_DWORD *)&stru_A8EB00.?[1404]; /*0x514596*/
        if ( Member ) /*0x51459a*/
        {
          v21 = (_DWORD *)(*(int (__thiscall **)(int, int *, FootClass *))(*(_DWORD *)Member + 76))( /*0x5145a9*/
                            Member,
                            &v65,
                            this->?);
          LOWORD(v57) = *v21 / 256; /*0x5145bc*/
          WORD1(v57) = v21[1] / 256; /*0x5145d0*/
          v20 = LOWORD(v57); /*0x5145d5*/
        }
        v22 = (_DWORD *)(*((int (__thiscall **)(FootClass *, int *))this->?->TechnoClass + 110))(this->?, &v59); /*0x5145e7*/
        v23 = *v22 == __PAIR32__(WORD1(v57), v20); /*0x5145f0*/
        if ( this->? != *(_DWORD *)&stru_A8EB00.?[1436] /*0x51462c*/
          || this->Dest[0] != *(_DWORD *)&stru_A8EB00.?[1440]
          || this->Dest[1] != *(_DWORD *)&stru_A8EB00.?[1444]
          || v23 )
        {
          v24 = MovementAI::MainFootClass((MovementAI *)((char *)this - 4), 1); /*0x514636*/
          v25 = this->?; /*0x51463b*/
          v26 = v24; /*0x51463e*/
          if ( !v25->? || v25->? || v25->? ) /*0x51465c*/
            return 7; /*0x5149f4*/
          if ( !v24 /*0x514696*/
            && this->Dest[2] == *(_DWORD *)&stru_A8EB00.?[1436]
            && this->HeadToCoord[0] == *(_DWORD *)&stru_A8EB00.?[1440]
            && this->HeadToCoord[1] == *(_DWORD *)&stru_A8EB00.?[1444] )
          {
            v65 = v25->?[0]; /*0x5146a4*/
            v66 = v25->?[1]; /*0x5146ab*/
            v67 = v25->?[2]; /*0x5146b2*/
            (*((void (__thiscall **)(FootClass *, int *))v25->TechnoClass + 60))(v25, &v65); /*0x5146bd*/
            (*((void (__thiscall **)(FootClass *, int))this->?->TechnoClass + 99))(this->?, 2); /*0x5146ca*/
            v25 = this->?; /*0x5146d0*/
            if ( !v25->? || v25->? || v25->? ) /*0x5146e7*/
              return 0; /*0x5146f9*/
          }
          if ( v26 == 7 ) /*0x5146ff*/
          {
            if ( v25->tubeIndex >= 0 ) /*0x51470d*/
              return 0; /*0x514717*/
            (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)v1 + 3) + 1152))(*((_DWORD *)v1 + 3), 0, 1); /*0x514723*/
            *((_DWORD *)v1 + 20) = 0; /*0x51472b*/
            *((_DWORD *)v1 + 18) = 0; /*0x51472e*/
            *((_DWORD *)v1 + 21) = 0; /*0x514731*/
            *((_DWORD *)v1 + 19) = 0; /*0x514734*/
            (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)v1 + 3) + 1348))(*((_DWORD *)v1 + 3), 0, 0); /*0x514740*/
          }
          else if ( v26 ) /*0x51497c*/
          {
            v39 = *((_DWORD *)v1 + 3); /*0x514982*/
            *((_DWORD *)v1 + 20) = 0; /*0x514985*/
            *((_DWORD *)v1 + 18) = 0; /*0x514988*/
            *((_DWORD *)v1 + 21) = 0; /*0x51498b*/
            *((_DWORD *)v1 + 19) = 0; /*0x51498e*/
            (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v39 + 1348))(v39, 0, 0); /*0x514995*/
            v40 = v1 + 36; /*0x5149a4*/
            if ( *((_DWORD *)v1 + 9) != *(_DWORD *)&stru_A8EB00.?[1436] /*0x5149c1*/
              || *((_DWORD *)v1 + 10) != *(_DWORD *)&stru_A8EB00.?[1440]
              || *((_DWORD *)v1 + 11) != *(_DWORD *)&stru_A8EB00.?[1444] )
            {
              (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)v1 + 3) + 244))(*((_DWORD *)v1 + 3), v40); /*0x5149cb*/
              *v40 = *(_DWORD *)&stru_A8EB00.?[1436]; /*0x5149d7*/
              *((_DWORD *)v1 + 10) = *(_DWORD *)&stru_A8EB00.?[1440]; /*0x5149df*/
              *((_DWORD *)v1 + 11) = *(_DWORD *)&stru_A8EB00.?[1444]; /*0x5149e7*/
            }
            goto LABEL_66; /*0x5149ea*/
          }
        }
      }
      if ( SLODWORD(v56) > 0 ) /*0x51474c*/
      {
        v27 = this->?; /*0x514752*/
        v65 = v27->?[0]; /*0x514761*/
        v66 = v27->?[1]; /*0x514768*/
        v67 = v27->?[2]; /*0x51476f*/
        if ( (*((unsigned __int8 (__thiscall **)(FootClass *))v27->TechnoClass + 48))(v27) /*0x5147a2*/
          && (this->Dest[2] != *(_DWORD *)&stru_A8EB00.?[1436]
           || this->HeadToCoord[0] != *(_DWORD *)&stru_A8EB00.?[1440]
           || this->HeadToCoord[1] != *(_DWORD *)&stru_A8EB00.?[1444]) )
        {
          v28 = this->?; /*0x5147a4*/
          v63 = *(double *)v28->?; /*0x5147b3*/
          v64 = v28->?[2]; /*0x5147c1*/
          (*((void (__thiscall **)(FootClass *, double *))v28->TechnoClass + 61))(v28, &v63); /*0x5147cc*/
          this->?->frozenStill = 0; /*0x5147d5*/
          this->?->FootClass_field_bool_6B7 = 0; /*0x5147df*/
        }
        v61 = v65; /*0x5147f2*/
        v62 = v66; /*0x5147fa*/
        v57 = (double)(*(__int16 *)ProgressTimer::GetValue((ProgressTimer *)&this->HeadToCoord[2], &v59) - 0x3FFF) /*0x51481a*/
            * -0.00009587672516830327;
        v29 = HIDWORD(v57); /*0x514822*/
        v30 = LODWORD(v57); /*0x514826*/
        v56 = (double)SLODWORD(v56); /*0x51482c*/
        v63 = (double)v62; /*0x514834*/
        Math::SinCos(v57); /*0x514838*/
        LOWORD(v31) = Math::RoundToInt(v6); /*0x514845*/
        LODWORD(v57) = v31; /*0x51484c*/
        Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v29, v30))); /*0x514850*/
        LOWORD(v32) = Math::RoundToInt(v6 * v56 + (double)v61); /*0x514860*/
        v33 = this->?; /*0x514865*/
        v65 = v32; /*0x51486e*/
        v66 = LODWORD(v57); /*0x514878*/
        v34 = v33->?[0]; /*0x51487c*/
        HIDWORD(v63) = v33->?[1]; /*0x514881*/
        v64 = v33->?[2]; /*0x514888*/
        WORD1(v56) = SHIDWORD(v63) / 256; /*0x5148a7*/
        if ( (unsigned __int16)(v65 / 256) == (unsigned __int16)(v34 / 256) /*0x5148d9*/
          && (unsigned __int16)(SLODWORD(v57) / 256) == WORD1(v56) )
        {
          isOnMap = v33->?; /*0x5149f7*/
          v33->? = 0; /*0x5149fa*/
          (*((void (__thiscall **)(FootClass *, int *))this->?->TechnoClass + 109))(this->?, &v65); /*0x514a08*/
          ObjectClass::SetAnim((ObjectClass *)this->?, v58); /*0x514a16*/
          this->?->? = isOnMap; /*0x514a1e*/
        }
        else
        {
          (*((void (__thiscall **)(FootClass *, _DWORD))v33->TechnoClass + 73))(v33, 0); /*0x5148e3*/
          (*((void (__thiscall **)(FootClass *, int *))this->?->TechnoClass + 109))(this->?, &v65); /*0x5148f3*/
          ObjectClass::SetAnim((ObjectClass *)this->?, v58); /*0x514901*/
          v35 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v65); /*0x514910*/
          v36 = this->?; /*0x514915*/
          v37 = v35; /*0x514918*/
          if ( !v36->? /*0x51493f*/
            && (v35->flags[0] & 0x100) != 0
            && (*((int (__thiscall **)(FootClass *))v36->TechnoClass + 114))(v36) >= *(int *)&stru_A8EB00.?[1488] )
          {
            this->?->? = 1; /*0x514944*/
          }
          v38 = this->?; /*0x51494b*/
          if ( v38->? == 1 && (v37->flags[0] & 0x100) == 0 ) /*0x51495d*/
            v38->? = 0; /*0x51495f*/
          (*((void (__thiscall **)(FootClass *, int))this->?->TechnoClass + 73))(this->?, 1); /*0x51496d*/
        }
      }
    }
  }
LABEL_66:
  if ( (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 128))(this) ) /*0x514a24*/
  {
    if ( !(*(_DWORD *)&stru_A8EB00.?[416] % 10) ) /*0x514a3d*/
    {
      v42 = this->?; /*0x514a47*/
      if ( !v42->? && *(_DWORD *)((*((int (__thiscall **)(FootClass *))v42->TechnoClass + 111))(v42) + 236) == 2 ) /*0x514a63*/
      {
        if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 148) ) /*0x514a6a*/
        {
          v43 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x514a79*/
          if ( v43 ) /*0x514a83*/
          {
            location = this->?->?; /*0x514a8a*/
            v65 = *location; /*0x514a9d*/
            v66 = location[1]; /*0x514aa4*/
            v67 = location[2]; /*0x514ab0*/
            AnimClass::ctor( /*0x514ac3*/
              v43,
              *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 148),
              &v65,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
      }
    }
  }
  BuildingLightClass::UpdateOscillation((BuildingLightClass *)((char *)this - 4)); /*0x514acb*/
  if ( LOBYTE(this->CurrentWobbles[1]) )
  {
    if ( !(*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 96))(this) ) /*0x514ade*/
      goto LABEL_81; /*0x514ade*/
    Value = ProgressTimer::GetValue((ProgressTimer *)this->?->?, &v59); /*0x514af3*/
    v46 = this->?; /*0x514b07*/
    LOWORD(v58) = *(_WORD *)Value + (*(_WORD *)&this->HoverLocomotionClass_field_bool_68 << 8); /*0x514b0a*/
    FacingClass::Set_SyncLog((char *)v46->?, &v58); /*0x514b1d*/
    v47 = *(_DWORD *)&this->HoverLocomotionClass_field_bool_68; /*0x514b22*/
    v48 = abs32(v47); /*0x514b2a*/
    if ( v48 >= 1 ) /*0x514b2f*/
      v48 = 1; /*0x514b31*/
    v49 = v47 >= 0 ? v47 - v48 : v48 + v47;
    *(_DWORD *)&this->HoverLocomotionClass_field_bool_68 = v49; /*0x514b42*/
    if ( !v49 ) /*0x514b47*/
LABEL_81:
      LOBYTE(this->CurrentWobbles[1]) = 0; /*0x514b49*/
    if ( !LOBYTE(this->CurrentWobbles[1]) ) /*0x514b4d*/
    {
      v50 = this->?->?; /*0x514b5b*/
      v65 = *v50; /*0x514b63*/
      v66 = v50[1]; /*0x514b6f*/
      v67 = v50[2]; /*0x514b7b*/
      v51 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v65); /*0x514b7f*/
      BuildingClass::CreateIdleAnim((BuildingClass *)v51); /*0x514b86*/
      v52 = this->?->?; /*0x514b8e*/
      v65 = *v52; /*0x514b96*/
      v66 = v52[1]; /*0x514ba2*/
      v67 = v52[2]; /*0x514ba9*/
      if ( Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v65)->landType == 2 ) /*0x514bbe*/
      {
        v53 = this->?->?; /*0x514bc3*/
        v65 = *v53; /*0x514bcc*/
        v66 = v53[1]; /*0x514bd3*/
        v54 = v53[2]; /*0x514bd7*/
        v65 = *v53; /*0x514bdc*/
        v66 = v53[1]; /*0x514be7*/
        v67 = v53[2]; /*0x514bf4*/
        if ( v54 < *(_DWORD *)&stru_A8EB00.?[1500] + Cell::GetGroundHeight(&v65) ) /*0x514c05*/
          (*((void (__thiscall **)(FootClass *))this->?->TechnoClass + 59))(this->?); /*0x514c0c*/
      }
    }
  }
  return (*(char (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this); /*0x514358*/
}



// ==== 0x00514C30  JumpjetLocomotionClass::HasScoreDisplayChanged  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::HasScoreDisplayChanged(JumpjetLocomotionClass *this)
{
  return this->? != *(_DWORD *)&stru_A8EB00.?[1436] /*0x514c6a*/
      || this->TurnRate != *(_DWORD *)&stru_A8EB00.?[1440]
      || this->Speed != *(_DWORD *)&stru_A8EB00.?[1444]
      || LODWORD(this->Climb) != *(_DWORD *)&stru_A8EB00.?[1436]
      || LODWORD(this->Crash) != *(_DWORD *)&stru_A8EB00.?[1440]
      || this->Height != *(_DWORD *)&stru_A8EB00.?[1444];
}



// ==== 0x00514C80  HoverLocomotionClass::ComputeFloatExpression_2  this=HoverLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::ComputeFloatExpression_2(HoverLocomotionClass *this)
{
  return (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) /*0x514ca4*/
      && *(double *)&this->LocomotionFacing[5] != 0.0;
}



// ==== 0x00514CB0  JumpjetLocomotionClass::HasScoreDisplayChanged_514CB0  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::HasScoreDisplayChanged_514CB0(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v2; // ecx
  int v3; // edx
  int TurnRate; // edx
  int Speed; // eax

  if ( this->? == *(_DWORD *)&stru_A8EB00.?[1436] /*0x514cd9*/
    && (v2 = *(_DWORD *)&stru_A8EB00.?[1440], this->TurnRate == *(_DWORD *)&stru_A8EB00.?[1440])
    && (v3 = *(_DWORD *)&stru_A8EB00.?[1444], this->Speed == *(_DWORD *)&stru_A8EB00.?[1444]) )
  {
    *a2 = *(_DWORD *)&stru_A8EB00.?[1436]; /*0x514cff*/
    a2[1] = v2; /*0x514d01*/
    a2[2] = v3; /*0x514d04*/
    return a2; /*0x514cf9*/
  }
  else
  {
    TurnRate = this->TurnRate; /*0x514ce2*/
    Speed = this->Speed; /*0x514ce5*/
    *a2 = this->?; /*0x514cea*/
    a2[1] = TurnRate; /*0x514cec*/
    a2[2] = Speed; /*0x514cef*/
    return a2; /*0x514cf2*/
  }
}



// ==== 0x00514D10  JumpjetLocomotionClass::HasScoreDisplayChanged_514D10  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::HasScoreDisplayChanged_514D10(JumpjetLocomotionClass *this, _DWORD *a2)
{
  float Crash; // edx
  int Height; // eax
  FootClass *Owner; // edx
  int *location; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi

  if ( LODWORD(this->Climb) == *(_DWORD *)&stru_A8EB00.?[1436] /*0x514d3b*/
    && LODWORD(this->Crash) == *(_DWORD *)&stru_A8EB00.?[1440]
    && this->Height == *(_DWORD *)&stru_A8EB00.?[1444] )
  {
    Owner = this->?; /*0x514d5b*/
    location = Owner->?; /*0x514d64*/
    v7 = Owner->?[0]; /*0x514d66*/
    v8 = Owner->?[1]; /*0x514d68*/
    v9 = location[2]; /*0x514d6b*/
    *a2 = v7; /*0x514d74*/
    a2[1] = v8; /*0x514d76*/
    a2[2] = v9; /*0x514d79*/
    return a2; /*0x514d6e*/
  }
  else
  {
    Crash = this->Crash; /*0x514d44*/
    Height = this->Height; /*0x514d47*/
    *a2 = LODWORD(this->Climb); /*0x514d4c*/
    *((float *)a2 + 1) = Crash; /*0x514d4e*/
    a2[2] = Height; /*0x514d51*/
    return a2; /*0x514d54*/
  }
}



// ==== 0x00514D90  HoverLocomotionClass::SetMovementTarget  this=HoverLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::SetMovementTarget(HoverLocomotionClass *this, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // ebx
  HoverLocomotionClass *v6; // esi
  int v7; // ebp
  int *p_RefCount; // edi
  int *v9; // eax
  _DWORD *result; // eax
  int v11; // edi
  MovementAI *v12; // esi
  int v13; // edi
  MovementAI *p_HoverLocomotionClass_field_bool_70; // esi
  int v15; // edi
  int v16; // ebx
  _WORD *v17; // eax
  bool v18; // bl
  int m_State; // ecx
  _DWORD v20[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = a4; /*0x514d93*/
  v5 = a2; /*0x514d99*/
  v6 = this; /*0x514d9e*/
  v7 = a3; /*0x514da2*/
  p_RefCount = &this->?; /*0x514da7*/
  v9 = &this->?; /*0x514daa*/
  this->? = a2; /*0x514dac*/
  v9[1] = v7; /*0x514dae*/
  v9[2] = v4; /*0x514db1*/
  result = (_DWORD *)(*((int (__thiscall **)(FootClass *))v6->?->TechnoClass + 224))(v6->?); /*0x514db9*/
  if ( !(_BYTE)result ) /*0x514dc1*/
  {
    if ( (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)v6->LocomotionClass + 96))(v6) /*0x514de4*/
      && (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)v6->LocomotionClass + 100))(v6)
      && HouseClass::IonSensitivesShouldBeOffline() )
    {
      (*(void (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)v6->LocomotionClass + 92))(v6); /*0x514df0*/
    }
    v6->Dest[1] = Cell::GetGroundHeight(p_RefCount); /*0x514e02*/
    v11 = a4; /*0x514e05*/
    v20[0] = v5; /*0x514e0f*/
    v20[1] = v7; /*0x514e13*/
    v20[2] = a4; /*0x514e17*/
    result = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v20); /*0x514e1b*/
    if ( (result[80] & 0x100) != 0 ) /*0x514e29*/
    {
      result = (_DWORD *)(*(_DWORD *)&stru_A8EB00.?[1488] + v6->Dest[1]); /*0x514e34*/
      v6->Dest[1] = (int)result; /*0x514e36*/
    }
    if ( v5 != *(_DWORD *)&stru_A8EB00.?[1436] /*0x514e4f*/
      || v7 != *(_DWORD *)&stru_A8EB00.?[1440]
      || v11 != *(_DWORD *)&stru_A8EB00.?[1444] )
    {
      result = (_DWORD *)(*(int (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)v6->LocomotionClass + 96))(v6); /*0x514e58*/
      if ( (_BYTE)result ) /*0x514e5d*/
      {
        if ( (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)v6->LocomotionClass + 128))(v6) ) /*0x514e66*/
        {
          result = *(_DWORD **)&stru_A8EB00.?[1436]; /*0x514ea1*/
          if ( v6->Dest[2] == *(_DWORD *)&stru_A8EB00.?[1436] /*0x514ecd*/
            && v6->HeadToCoord[0] == *(_DWORD *)&stru_A8EB00.?[1440]
            && v6->HeadToCoord[1] == *(_DWORD *)&stru_A8EB00.?[1444] )
          {
            v13 = v6->Dest[2]; /*0x514ed3*/
            p_HoverLocomotionClass_field_bool_70 = (MovementAI *)&v6[-1].HoverLocomotionClass_field_bool_70; /*0x514ed6*/
            v18 = 1; /*0x514f28*/
            if ( v13 != *(_DWORD *)&stru_A8EB00.?[1436] /*0x514ee5*/
              || p_HoverLocomotionClass_field_bool_70[1].m_State != *(_DWORD *)&stru_A8EB00.?[1440]
              || p_HoverLocomotionClass_field_bool_70[1].MovementAI_field_10 != *(_DWORD *)&stru_A8EB00.?[1444] )
            {
              v15 = p_HoverLocomotionClass_field_bool_70[1].m_Target[2] / 256; /*0x514f0d*/
              v16 = p_HoverLocomotionClass_field_bool_70[1].m_State / 256; /*0x514f10*/
              v17 = (_WORD *)(*(int (__thiscall **)(int, HoverLocomotionClass **))(*(_DWORD *)p_HoverLocomotionClass_field_bool_70->m_State /*0x514f13*/
                                                                                 + 440))(
                               p_HoverLocomotionClass_field_bool_70->m_State,
                               &this);
              if ( *v17 != (_WORD)v15 || v17[1] != (_WORD)v16 ) /*0x514f22*/
                v18 = 0; /*0x514ee5*/
            }
            m_State = p_HoverLocomotionClass_field_bool_70->m_State; /*0x514f2a*/
            p_HoverLocomotionClass_field_bool_70[2].MovementAI_field_10 = 0; /*0x514f2d*/
            p_HoverLocomotionClass_field_bool_70[2].MovementAI_field_14 = 1072693248; /*0x514f34*/
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)m_State + 1348))(m_State, 0, 1072693248); /*0x514f44*/
            result = (_DWORD *)MovementAI::StepFootClass(p_HoverLocomotionClass_field_bool_70, 0); /*0x514f4e*/
            if ( v18 ) /*0x514f55*/
              return (_DWORD *)MovementAI::MainFootClass(p_HoverLocomotionClass_field_bool_70, 1); /*0x514f5b*/
          }
        }
        else
        {
          (*((void (__thiscall **)(FootClass *, _DWORD, int))v6->?->TechnoClass + 337))(v6->?, 0, 1072693248); /*0x514e7c*/
          v12 = (MovementAI *)&v6[-1].HoverLocomotionClass_field_bool_70; /*0x514e82*/
          MovementAI::StepFootClass(v12, 0); /*0x514e89*/
          return (_DWORD *)MovementAI::MainFootClass(v12, 1); /*0x514e92*/
        }
      }
    }
  }
  return result; /*0x514e97*/
}



// ==== 0x00514F70  MovementAI::MainFootClass  this=MovementAI  sig=csp ====
int __thiscall MovementAI::MainFootClass(MovementAI *this, char a2)
{
  MovementAI *v3; // esi
  int result; // eax
  int *m_State; // ecx
  int *v6; // ecx
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  int v12; // edx
  int v13; // esi
  int v14; // edi
  CellClass *v15; // eax
  int *Coords; // eax
  int v17; // edx
  int v18; // ecx
  _DWORD *v19; // esi
  int v20; // edx
  int *v21; // eax
  int *v22; // edi
  int v23; // eax
  int v24; // edx
  int v25; // edi
  int v26; // esi
  int *v27; // ecx
  int GroundHeight; // edi
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // ecx
  _WORD *v33; // eax
  int v34; // edi
  __int16 v35; // dx
  int v36; // eax
  int *v37; // ecx
  CellClass *v38; // eax
  int v39; // eax
  int v40; // eax
  int *v41; // eax
  CellClass *v42; // eax
  int v43; // ecx
  ObjectClass *v44; // ecx
  int (__thiscall **ptr_0)(int, void *, int, int, _DWORD, int); // edi
  void *v46; // eax
  CellC... [28330 chars total]



// ==== 0x00515ED0  ObjectClass::UpdateFootFacing  this=ObjectClass  sig=csp ====
void __thiscall UpdateFootFacing(TechnoClass *this)
{
  double v1; // st7
  int *p_vtable1; // ebp
  int *p_occupant; // edi
  int v5; // ebx
  double v6; // st7
  _DWORD *Value; // eax
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  _DWORD *v12; // eax
  int referenceCount; // ebx
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  char estimatedHealth; // al
  int ptr_C; // eax
  int v21; // ecx
  double v22; // st7
  double v23; // st6
  char v25; // c0
  double v26; // st7
  unsigned __int8 v28; // c0
  unsigned __int8 v29; // c3
  double v30; // st7
  _DWORD *v31; // ecx
  int v32; // ebx
  int owningHouseIndex; // ebp
  int fallRate; // edi
  int v35; // eax
  int v36; // eax
  int v37; // edx
  int *v38; // eax
  __int16 v39; // ax
  int v40; // ecx
  int v41; // [esp+34h] [ebp-24h] BYREF
  int v42; // [esp+38h] [ebp-20h]
  int v43; // [esp+3Ch] [ebp-1Ch] BYREF
  int v44; // [esp+40h] [ebp-18h] BYREF
  int v45; // [esp+44h] [ebp-14h]
  int v46; // [esp+48h] [ebp-10h]
  _BYTE v47[12]; // [esp+4Ch] [ebp-Ch] BYREF

  p_vtable1 = &this->ptr_4; /*0x515ee2*/
  if ( !(*(unsigned __int8 (__stdcall **)(int *))(this->ptr_4 + 16))(&this->ptr_4) /*0x515f17*/
    || (p_occupant = &this->occupant, this->occupant == dword_A8F180)
    && this->owningHouseIndex == dword_A8F184
    && this->fallRate == dword_A8F188 )
  {
    if ( (*(unsigned __int8 (__stdcall **)(int *))(*p_vtable1 + 16))(p_vtable1) /*0x5162e8*/
      && this->occupant == dword_A8F180
      && this->owningHouseIndex == dword_A8F184
      && this->fallRate == dword_A8F188 )
    {
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->ptr_C + 1348))(this->ptr_C, 0, 1072693248); /*0x5162f6*/
      MovementAI::StepFootClass((MovementAI *)this, 0); /*0x516300*/
      MovementAI::MainFootClass((MovementAI *)this, 1); /*0x516309*/
    }
  }
  else
  {
    v5 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)this->ptr_C + 72))(this->ptr_C, &v44); /*0x515f2a*/
    Int64::Equal((Int64 *)v5, &this->occupant); /*0x515f2f*/
    Math::CalcAngle((double)*(int *)(v5 + 4) - (double)this->owningHouseIndex, (double)*p_occupant - (double)*(int *)v5); /*0x515f4b*/
    v6 = (v1 - 1.570796326794897) * -10430.06004058427; /*0x515f59*/
    LOWORD(v41) = Math::RoundToInt(v6); /*0x515f64*/
    if ( LOBYTE(this->estimatedHealth) ) /*0x515f69*/
      FacingClass::Set_SyncLog((char *)&this->nextObject, &v41); /*0x515f90*/
    else
      FacingClass::Update((char *)&this->nextObject, &v41); /*0x515f82*/
    if ( (*(unsigned __int8 (__stdcall **)(int *))(*p_vtable1 + 96))(p_vtable1) /*0x515fd1*/
      && (Value = ProgressTimer::GetValue((ProgressTimer *)&this->nextObject, &v43),
          abs16(*(_WORD *)Value - v41) <= 0x2000u)
      || LOBYTE(this->estimatedHealth) )
    {
      if ( this->nextArrayIndex == dword_A8F180 /*0x515fff*/
        && this->referenceCount == dword_A8F184
        && this->NeedsSaveOrLink == dword_A8F188 )
      {
        v8 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->ptr_C + 72))(this->ptr_C, v47); /*0x51600b*/
        v9 = *v8 - *p_occupant; /*0x516015*/
        v10 = v8[1] - this->owningHouseIndex; /*0x51601d*/
        v11 = v8[2] - this->fallRate; /*0x516022*/
        v44 = v9; /*0x516024*/
        v45 = v10; /*0x51602c*/
        v46 = v11; /*0x516030*/
        if ( (int)Coord::Length((Coord *)&v44) < 256 ) /*0x51603e*/
          goto LABEL_19; /*0x51603e*/
      }
      if ( this->nextArrayIndex == dword_A8F180 /*0x516068*/
        && this->referenceCount == dword_A8F184
        && this->NeedsSaveOrLink == dword_A8F188 )
      {
        goto LABEL_20; /*0x516068*/
      }
      v12 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->ptr_C + 72))(this->ptr_C, v47); /*0x516074*/
      referenceCount = this->referenceCount; /*0x51607c*/
      v14 = *v12 - this->nextArrayIndex; /*0x51607f*/
      v15 = v12[1]; /*0x516081*/
      v16 = v12[2]; /*0x516084*/
      v44 = v14; /*0x516087*/
      v17 = v16 - this->NeedsSaveOrLink; /*0x516090*/
      v45 = v15 - referenceCount; /*0x516092*/
      v46 = v17; /*0x516096*/
      Math::Sqrt( /*0x5160c2*/
        (double)v14 * (double)v14
      + (double)v17 * (double)v17
      + (double)(v15 - referenceCount) * (double)(v15 - referenceCount));
      LOWORD(v18) = Math::RoundToInt(v6); /*0x5160ca*/
      if ( v18 >= 256 ) /*0x5160d4*/
      {
LABEL_20:
        estimatedHealth = this->estimatedHealth; /*0x5160e6*/
        this->ambientSoundController[3] = 0; /*0x5160e9*/
        this->ambientSoundController[4] = 1072693248; /*0x5160f2*/
        if ( estimatedHealth ) /*0x5160f5*/
        {
          this->customSound_controller[0] = 0; /*0x5160f7*/
          this->customSound_controller[1] = 1072693248; /*0x5160fe*/
        }
      }
      else
      {
LABEL_19:
        this->ambientSoundController[3] = 0; /*0x5160d6*/
        this->ambientSoundController[4] = 1071644672; /*0x5160dd*/
      }
    }
    else
    {
      this->ambientSoundController[3] = 0; /*0x516105*/
      this->ambientSoundController[4] = 0; /*0x516108*/
    }
    if ( *(double *)&this->ambientSoundController[3] > 0.0 ) /*0x516119*/
    {
      ptr_C = this->ptr_C; /*0x51611b*/
      this->customSound_controller[2] = 0; /*0x51611e*/
      this->customSound_controller[3] = 1072693248; /*0x516125*/
      v21 = *(_DWORD *)(ptr_C + 1504); /*0x516128*/
      if ( v21 != -1 && v21 == *(_DWORD *)(ptr_C + 1508) ) /*0x516139*/
        *(_QWORD *)&this->customSound_controller[2] = *(_QWORD *)dword_8871E0->HoverBoost; /*0x516149*/
    }
    v22 = *(double *)&this->customSound_controller[2] * *(double *)&this->ambientSoundController[3]; /*0x516155*/
    if ( v22 > 1.0 ) /*0x516165*/
      v22 = 1.0; /*0x516169*/
    if ( v22 > *(double *)this->customSound_controller ) /*0x516177*/
    {
      v23 = 1.0 / (*(double *)dword_8871E0->HoverAcceleration * 900.0) + *(double *)this->customSound_controller; /*0x516191*/
      *(double *)this->customSound_controller = v23; /*0x516196*/
      if ( !v25 ) /*0x51619e*/
        v23 = v22; /*0x5161a2*/
      *(double *)this->customSound_controller = v23; /*0x5161a4*/
    }
    if ( v22 < *(double *)this->customSound_controller ) /*0x5161af*/
    {
      v26 = *(double *)this->customSound_controller - 1.0 / (*(double *)dword_8871E0->HoverBrake * 900.0); /*0x5161c9*/
      *(double *)this->customSound_controller = v26; /*0x5161d2*/
      if ( v28 | v29 ) /*0x5161d7*/
        v26 = 0.0; /*0x5161de*/
      *(double *)this->customSound_controller = v26; /*0x5161e4*/
    }
    v30 = *(double *)&this->ambientSoundController[3]; /*0x5161e7*/
    if ( v30 > 0.0 && !LOBYTE(this->estimatedHealth) ) /*0x5161fb*/
    {
      v31 = (_DWORD *)this->ptr_C; /*0x516206*/
      v32 = *p_occupant; /*0x516209*/
      owningHouseIndex = this->owningHouseIndex; /*0x51620b*/
      fallRate = this->fallRate; /*0x51620e*/
      v35 = v31[376]; /*0x516211*/
      v44 = v32; /*0x516217*/
      v45 = owningHouseIndex; /*0x51621e*/
      if ( v35 != -1 && v35 != 8 ) /*0x516227*/
      {
        v36 = v35 & 7; /*0x516229*/
        v46 = fallRate; /*0x51622c*/
        v37 = dword_89F6DC[2 * v36]; /*0x51623e*/
        v44 = v32 + dword_89F6D8[2 * v36]; /*0x516245*/
        v45 = owningHouseIndex + v37; /*0x516249*/
      }
      v38 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v31 + 72))(v31, v47); /*0x516254*/
      v42 = *v38; /*0x516260*/
      Math::CalcAngle((double)v38[1] - (double)v45, (double)v44 - (double)v42); /*0x516279*/
      v39 = Math::RoundToInt((v30 - 1.570796326794897) * -10430.06004058427); /*0x51628d*/
      v40 = this->ptr_C; /*0x516292*/
      LOWORD(v42) = v39; /*0x516295*/
      v43 = v42; /*0x5162a9*/
      FacingClass::Update((char *)(v40 + 904), &v43); /*0x5162ad*/
    }
  }
}



// ==== 0x00516320  HoverLocomotionClass::HasScoreDisplayChanged  this=HoverLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::HasScoreDisplayChanged_516320(HoverLocomotionClass *this)
{
  _DWORD *result; // eax

  result = this->LocomotionClass; /*0x516320*/
  if ( this->? != this->Dest[2] || this->Dest[0] != this->HeadToCoord[0] || this->Dest[1] != this->HeadToCoord[1] ) /*0x516340*/
  {
    this->? = *(_DWORD *)&stru_A8EB00.?[1436]; /*0x516348*/
    this->Dest[0] = *(_DWORD *)&stru_A8EB00.?[1440]; /*0x516351*/
    this->Dest[1] = *(_DWORD *)&stru_A8EB00.?[1444]; /*0x51635a*/
    result = &this->?->TechnoClass; /*0x51635d*/
    result[376] = -1; /*0x516360*/
  }
  return result; /*0x51636a*/
}



// ==== 0x00516370  HoverLocomotionClass::UpdateFacingDirection_0  this=HoverLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::UpdateFacingDirection_0(HoverLocomotionClass *this, int a2)
{
  return FacingClass::Update((char *)this->?->?, &a2); /*0x51638f*/
}



// ==== 0x005163B0  MovementAI::MarkOccupiedPathCell  this=MovementAI  sig=csp ====
char __thiscall MovementAI::MarkOccupiedPathCell(MovementAI *this)
{
  double v1; // st7
  int m_State; // eax
  int v4; // ecx
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // eax
  _DWORD *v10; // ecx
  int v11; // [esp+18h] [ebp-14h]
  int v12; // [esp+1Ch] [ebp-10h]
  _BYTE v13[12]; // [esp+20h] [ebp-Ch] BYREF

  if ( !(*(unsigned __int8 (__stdcall **)(int *))(this->m_Target[1] + 16))(&this->m_Target[1]) ) /*0x5163bd*/
    return 0; /*0x5163bd*/
  m_State = this->m_State; /*0x5163c8*/
  if ( *(_DWORD *)(m_State + 1504) == -1 ) /*0x5163d2*/
    return 0; /*0x5163d2*/
  v4 = *(_DWORD *)(m_State + 1444); /*0x5163d8*/
  if ( v4 && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 1 /*0x516405*/
    || (v5 = *(_DWORD *)(this->m_State + 1444)) != 0 && (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 15 )
  {
    v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->m_State + 72))(this->m_State, v13); /*0x516415*/
    v11 = v6[1] - *((_DWORD *)this + 7); /*0x516436*/
    v12 = v6[2] - this->u32_8; /*0x51643a*/
    Math::Sqrt( /*0x516463*/
      (double)(*v6 - this->MovementAI_field_18) * (double)(*v6 - this->MovementAI_field_18)
    + (double)v11 * (double)v11
    + (double)v12 * (double)v12);
    LOWORD(v7) = Math::RoundToInt(v1); /*0x51646b*/
    v8 = v7 / 256; /*0x516479*/
    if ( v8 < 24 ) /*0x51647f*/
    {
      *(_DWORD *)(this->m_State + 4 * v8 + 1504) = -1; /*0x516485*/
      return 1; /*0x516495*/
    }
  }
  v10 = (_DWORD *)this->m_State; /*0x516496*/
  if ( !v10[173] || !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v10 + 940))(v10, v10[173]) ) /*0x5164a6*/
    return 0; /*0x5164c4*/
  *(_DWORD *)(this->m_State + 1504) = -1; /*0x5164b4*/
  return 1; /*0x516484*/
}



// ==== 0x005164D0  MovementAI::StepFootClass  this=MovementAI  sig=csp ====
int __thiscall MovementAI::StepFootClass(MovementAI *this, int a2)
{
  _DWORD *m_State; // ecx
  int *p_MovementAI_field_18; // edi
  int result; // eax
  int v6; // ebp
  int v7; // ebx
  __int64 v8; // rax
  int v9; // ebp
  int v10; // ebx
  _WORD *v11; // eax
  __int64 v12; // rax
  int v13; // ecx
  int v14; // ebx
  int v15; // ebx
  double v16; // st7
  int v17; // eax
  int v18; // edx
  _DWORD *v19; // ecx
  _DWORD *v20; // eax
  int *v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // ecx
  int v26; // eax
  _DWORD *v27; // ecx
  TeamClass *v28; // ecx
  int v29; // ebp
  double v30; // st7
  int v31; // eax
  int v32; // edx
  _DWORD *v33; // ecx
  _DWORD *v34; // eax
  int v35; // edx
  ObjectClass *v36; // ebx
  int (__thiscall **ptr_0)(ObjectClass *, void *, int, int, _DWORD, int); // ebp
  void *v38; // eax
  Object *v39; // ebx
  int *v40; // edx
  int v41; // ebp
  int GroundHeight; // eax
  int ClosestObjectCell; // eax
  _DWORD *v44; // eax
  int v45; // ebp
  int v46; // ecx
  int v47; // edx
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int *v51; // ecx
  __int64 v52; // rax
  int *v53; // ecx
  __int64 v54; // rax
  int v55; // [esp+20h] [ebp-48h]
  int LandHeight; // [esp+24h] [ebp-44h]
  int v57; // [esp+30h] [ebp-38h]
  char v58[4]; // [esp+40h] [ebp-28h]
  int v59; // [esp+40h] [ebp-28h]
  int v60; // [esp+40h] [ebp-28h]
  char v61; // [esp+40h] [ebp-28h]
  int v62; // [esp+44h] [ebp-24h] BYREF
  int v63; // [esp+48h] [ebp-20h]
  int v64; // [esp+4Ch] [ebp-1Ch]
  int v65; // [esp+50h] [ebp-18h] BYREF
  int v66; // [esp+54h] [ebp-14h]
  int v67; // [esp+58h] [ebp-10h]
  _DWORD v68[3]; // [esp+5Ch] [ebp-Ch] BYREF

  MovementAI::MarkOccupiedPathCell(this); /*0x5164d9*/
  m_State = (_DWORD *)this->m_State; /*0x5164de*/
  p_MovementAI_field_18 = &this->MovementAI_field_18; /*0x5164e4*/
  *(_DWORD *)v58 = m_State[376]; /*0x5164ed*/
  if ( this->MovementAI_field_18 != *(_DWORD *)&stru_A8EB00.?[1436] /*0x516511*/
    || *((_DWORD *)this + 7) != *(_DWORD *)&stru_A8EB00.?[1440]
    || (result = *(_DWORD *)&stru_A8EB00.?[1444], this->u32_8 != *(_DWORD *)&stru_A8EB00.?[1444]) )
  {
    v6 = *p_MovementAI_field_18 / 256; /*0x516535*/
    v7 = *((_DWORD *)this + 7) / 256; /*0x516538*/
    result = (*(int (__thiscall **)(_DWORD *, int *))(*m_State + 440))(m_State, &v62); /*0x51653b*/
    if ( *(_WORD *)result == (_WORD)v6 && *(_WORD *)(result + 2) == (_WORD)v7 ) /*0x51654a*/
    {
      v8 = *(_DWORD *)((*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)this->m_State + 76))( /*0x516569*/
                         this->m_State,
                         &v65,
                         0)
                     + 8)
         - this->u32_8;
      result = (HIDWORD(v8) ^ v8) - HIDWORD(v8); /*0x51656c*/
      if ( result < 2 * *(_DWORD *)&stru_A8EB00.?[1500] ) /*0x516573*/
      {
        (*(void (__stdcall **)(int *))(this->m_Target[1] + 72))(&this->m_Target[1]); /*0x51657c*/
        return (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->m_State + 1152))(this->m_State, 0, 1); /*0x5166e4*/
      }
    }
  }
  if ( *(_DWORD *)v58 != -1 ) /*0x516589*/
    return result; /*0x516589*/
  if ( *p_MovementAI_field_18 == *(_DWORD *)&stru_A8EB00.?[1436] /*0x5165a5*/
    && *((_DWORD *)this + 7) == *(_DWORD *)&stru_A8EB00.?[1440] )
  {
    result = this->u32_8; /*0x5165ad*/
    if ( result == *(_DWORD *)&stru_A8EB00.?[1444] ) /*0x5165b2*/
      return result; /*0x5165b2*/
  }
  v9 = *p_MovementAI_field_18 / 256; /*0x5165dd*/
  v10 = *((_DWORD *)this + 7) / 256; /*0x5165e0*/
  v11 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->m_State + 440))(this->m_State, &v62); /*0x5165e3*/
  if ( *v11 == (_WORD)v9 && v11[1] == (_WORD)v10 ) /*0x5165f2*/
  {
    v12 = *(_DWORD *)((*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)this->m_State + 76))( /*0x516611*/
                        this->m_State,
                        &v65,
                        0)
                    + 8)
        - this->u32_8;
    result = (HIDWORD(v12) ^ v12) - HIDWORD(v12); /*0x516614*/
    if ( result <= 2 * *(_DWORD *)&stru_A8EB00.?[1500] ) /*0x51661b*/
      return result; /*0x51661b*/
  }
  v13 = this->m_State; /*0x516621*/
  v14 = *(_DWORD *)(v13 + 1600); /*0x516624*/
  result = *(_DWORD *)(v13 + 1608); /*0x51662a*/
  if ( v14 != -1 ) /*0x516633*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v14 >= result ) /*0x51663f*/
      goto LABEL_19; /*0x51663f*/
    result -= *(_DWORD *)&stru_A8EB00.?[416] - v14; /*0x516641*/
  }
  if ( result ) /*0x516645*/
    return result; /*0x516645*/
LABEL_19:
  LOWORD(v59) = *p_MovementAI_field_18 / 256; /*0x51664b*/
  HIWORD(v59) = *((_DWORD *)this + 7) / 256; /*0x51666d*/
  if ( (unsigned __int8)FootClass::MovementStep(v13, (int)p_MovementAI_field_18, v59, 0, a2, v57) ) /*0x51667e*/
  {
    v29 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5168d6*/
    v30 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5984) * 900.0; /*0x5168e2*/
    LOWORD(v31) = Math::RoundToInt(v30); /*0x5168e8*/
    v32 = v68[1]; /*0x5168f0*/
    v33 = (_DWORD *)(this->m_State + 1600); /*0x5168f4*/
    *v33 = v29; /*0x5168fa*/
    v33[1] = v32; /*0x5168fc*/
    v33[2] = v31; /*0x516904*/
    v34 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)this->m_State + 72))(this->m_State, v68); /*0x51690c*/
    v35 = *(_DWORD *)(this->m_State + 1504) & 7; /*0x516939*/
    LOWORD(v60) = *v34 / 256 + LOWORD(g_DDrawSurfaceManager.scenario[v35 + 82]); /*0x516955*/
    HIWORD(v60) = v34[1] / 256 + HIWORD(g_DDrawSurfaceManager.scenario[v35 + 82]); /*0x516961*/
    a2 = v60; /*0x516970*/
    if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2, 1) ) /*0x516974*/
    {
      v36 = (ObjectClass *)this->m_State; /*0x516981*/
      ptr_0 = (int (__thiscall **)(ObjectClass *, void *, int, int, _DWORD, int))v36->AbstractClass; /*0x51698a*/
      LandHeight = ObjectClass::GetLandHeight(v36); /*0x516994*/
      v55 = *(_DWORD *)(this->m_State + 1504); /*0x5169a4*/
      v38 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x5169a6*/
      if ( ptr_0[107](v36, v38, v55, LandHeight, 0, 1) == 6 ) /*0x5169b7*/
      {
        v39 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x5169cf*/
        v40 = (int *)(this->m_State + 156); /*0x5169d1*/
        v65 = *v40; /*0x5169d9*/
        v66 = v40[1]; /*0x5169e5*/
        v41 = v40[2]; /*0x5169ed*/
        v66 = (SHIWORD(a2) << 8) + 128; /*0x5169fd*/
        v65 = ((__int16)a2 << 8) + 128; /*0x516a13*/
        v67 = 0; /*0x516a17*/
        v62 = 0; /*0x516a1b*/
        v63 = 0; /*0x516a1f*/
        GroundHeight = Cell::GetGroundHeight(&v65); /*0x516a23*/
        ClosestObjectCell = Object::FindClosestObjectCell( /*0x516a41*/
                              v39,
                              &v62,
                              v41 > 3 * *(_DWORD *)&stru_A8EB00.?[1500] + GroundHeight,
                              0);
        if ( ClosestObjectCell ) /*0x516a48*/
        {
          if ( (unsigned __int8)Object::IsAlliedWithObjectHouse(*(Object **)(this->m_State + 540), ClosestObjectCell) ) /*0x516a58*/
          {
            v44 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)this->m_State + 72))(this->m_State, v68); /*0x516a6f*/
            v45 = *((_DWORD *)this + 7); /*0x516a76*/
            v46 = *v44 - *p_MovementAI_field_18; /*0x516a79*/
            v47 = v44[1]; /*0x516a7b*/
            v48 = v44[2]; /*0x516a7e*/
            v62 = v46; /*0x516a81*/
            v49 = v48 - this->u32_8; /*0x516a8a*/
            v63 = v47 - v45; /*0x516a8c*/
            v64 = v49; /*0x516a90*/
            Math::Sqrt((double)v46 * (double)v46 + (double)v49 * (double)v49 + (double)(v47 - v45) * (double)(v47 - v45)); /*0x516abc*/
            LOWORD(v50) = Math::RoundToInt(v30); /*0x516ac4*/
            if ( v50 < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5912) /*0x516ade*/
              && !(unsigned __int8)Team::AllMembersValid((Team *)this->m_State) )
            {
              v51 = (int *)(this->m_State + 156); /*0x516aee*/
              v65 = *v51; /*0x516af8*/
              v66 = v51[1]; /*0x516aff*/
              v52 = this->u32_8 - v51[2]; /*0x516b0b*/
              if ( (int)((HIDWORD(v52) ^ v52) - HIDWORD(v52)) < 2 * *(_DWORD *)&stru_A8EB00.?[1500] ) /*0x516b1a*/
              {
                v65 = *v51; /*0x516b1e*/
                v66 = v51[1]; /*0x516b25*/
                v67 = v51[2]; /*0x516b30*/
                if ( Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v65)->landType != 10 ) /*0x516b46*/
                {
                  (*(void (__stdcall **)(int *))(this->m_Target[1] + 72))(&this->m_Target[1]); /*0x516b4f*/
                  return (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->m_State + 1152))( /*0x516b6a*/
                           this->m_State,
                           0,
                           1);
                }
              }
            }
            if ( (*(_DWORD *)v39->__pad_140 & 0x100) == 0 /*0x516bae*/
              || (v61 = 1,
                  v53 = (int *)(this->m_State + 156),
                  v65 = *v53,
                  v66 = v53[1],
                  v54 = v53[2] / *(_DWORD *)&stru_A8EB00.?[1500] - v39->__pad_EC[47],
                  (int)((HIDWORD(v54) ^ v54) - HIDWORD(v54)) <= 2) )
            {
              v61 = 0; /*0x516bb0*/
            }
            Cell::ApplyDamage((Cell *)v39, (int)&stru_A8EB00.?[1436], 1, 1, v61); /*0x516bc5*/
          }
        }
      }
    }
    result = this->m_State; /*0x516bca*/
    *(_DWORD *)(result + 1612) = 10; /*0x516bcd*/
  }
  else
  {
    v15 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x516690*/
    v16 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5984) * 900.0; /*0x51669c*/
    LOWORD(v17) = Math::RoundToInt(v16); /*0x5166a2*/
    v18 = v66; /*0x5166aa*/
    v19 = (_DWORD *)(this->m_State + 1600); /*0x5166ae*/
    *v19 = v15; /*0x5166b5*/
    v19[1] = v18; /*0x5166b7*/
    v19[2] = v17; /*0x5166ba*/
    if ( !(*(unsigned __int8 (__thiscall **)(int, int *))(*(_DWORD *)this->m_State + 716))( /*0x5166c2*/
            this->m_State,
            &this->MovementAI_field_18) )
      return (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->m_State + 1152))(this->m_State, 0, 1); /*0x5166ca*/
    if ( (unsigned __int8)FootClass::ClearSomeVector2((FootClass *)this->m_State) ) /*0x5166ea*/
      goto LABEL_28; /*0x5166ea*/
    v20 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->m_State + 72))(this->m_State, &v65); /*0x516701*/
    v21 = Coord::Subtract( /*0x516721*/
            (Coord *)v68,
            *v20 - *p_MovementAI_field_18,
            v20[1] - *((_DWORD *)this + 7),
            v20[2] - this->u32_8);
    v62 = *v21; /*0x51672b*/
    v22 = v21[1]; /*0x51672f*/
    v23 = v21[2]; /*0x516736*/
    v63 = v22; /*0x516739*/
    v64 = v23; /*0x516741*/
    Math::Sqrt((double)v23 * (double)v23 + (double)v22 * (double)v22 + (double)v62 * (double)v62); /*0x516762*/
    LOWORD(v24) = Math::RoundToInt(v16); /*0x51676a*/
    if ( v24 >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5912) ) /*0x51677b*/
      goto LABEL_28; /*0x51677b*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this->m_State + 388))(this->m_State) == 2 /*0x51679b*/
      || (*(int (__thiscall **)(int))(*(_DWORD *)this->m_State + 388))(this->m_State) == 11 )
    {
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->m_State + 1152))(this->m_State, 0, 1); /*0x5167a6*/
      result = this->m_State; /*0x5167ac*/
      if ( !*(_BYTE *)(result + 144) ) /*0x5167b7*/
        return result; /*0x5167b7*/
    }
    else
    {
LABEL_28:
      v25 = (_DWORD *)this->m_State; /*0x5167bf*/
      v26 = v25[403]; /*0x5167c2*/
      if ( v26 <= 0 ) /*0x5167ca*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v25 + 1152))(v25, 0, 1); /*0x5167db*/
        result = this->m_State; /*0x5167e1*/
        if ( !*(_BYTE *)(result + 144) ) /*0x5167ec*/
          return result; /*0x5167ec*/
        if ( *(_BYTE *)(result + 1674) ) /*0x5167f2*/
          PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1792), 0x2000, 1.0, 0); /*0x516813*/
        *(_BYTE *)(this->m_State + 1674) = 0; /*0x51681b*/
      }
      else
      {
        v25[403] = v26 - 1; /*0x5167cd*/
      }
    }
    if ( !(*(unsigned __int8 (__stdcall **)(int *))(this->m_Target[1] + 16))(&this->m_Target[1]) ) /*0x516829*/
    {
      v27 = (_DWORD *)this->m_State; /*0x516830*/
      if ( v27[173] ) /*0x516833*/
      {
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v27 + 940))(v27, v27[173]) ) /*0x516840*/
        {
          *(_BYTE *)(this->m_State + 1672) = 1; /*0x51684d*/
          v28 = *(TeamClass **)(this->m_State + 1492); /*0x516857*/
          if ( v28 ) /*0x51685f*/
            TeamClass::WakeUpAllMembers(v28); /*0x516861*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this->m_State + 968))(this->m_State, 0); /*0x51686d*/
        }
      }
    }
    if ( *((_DWORD *)this + 9) != *(_DWORD *)&stru_A8EB00.?[1436] /*0x516899*/
      || *((_DWORD *)this + 10) != *(_DWORD *)&stru_A8EB00.?[1440]
      || *((_DWORD *)this + 11) != *(_DWORD *)&stru_A8EB00.?[1444] )
    {
      (*(void (__thiscall **)(int, char *))(*(_DWORD *)this->m_State + 244))(this->m_State, (char *)this + 36); /*0x5168a1*/
      *((_DWORD *)this + 9) = *(_DWORD *)&stru_A8EB00.?[1436]; /*0x5168ad*/
      *((_DWORD *)this + 10) = *(_DWORD *)&stru_A8EB00.?[1440]; /*0x5168b5*/
      *((_DWORD *)this + 11) = *(_DWORD *)&stru_A8EB00.?[1444]; /*0x5168bd*/
    }
    return (*(int (__stdcall **)(int *))(this->m_Target[1] + 72))(&this->m_Target[1]); /*0x5168c3*/
  }
  return result; /*0x5166dd*/
}



// ==== 0x00516BF0  HoverLocomotionClass::ClearLocomotionDirty_0  this=HoverLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ClearLocomotionDirty_0(HoverLocomotionClass *this)
{
  int currentMission; // eax

  if ( (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 96))(this) ) /*0x516bf8*/
  {
    currentMission = this->?->?; /*0x516c02*/
    if ( currentMission ) /*0x516c0a*/
    {
      if ( currentMission != 7 ) /*0x516c0f*/
      {
        LOBYTE(this->CurrentWobbles[1]) = 1; /*0x516c11*/
        *(_DWORD *)&this->HoverLocomotionClass_field_bool_68 = Random::Range( /*0x516c2a*/
                                                                 (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                                                                 20,
                                                                 30);
        if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 50 ) /*0x516c44*/
          *(_DWORD *)&this->HoverLocomotionClass_field_bool_68 = -*(_DWORD *)&this->HoverLocomotionClass_field_bool_68; /*0x516c4b*/
      }
    }
  }
  if ( (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) ) /*0x516c51*/
    (*(void (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 72))(this); /*0x516c5b*/
  return StreamClass::ClearDirty((IUnknown *)this); /*0x516c64*/
}



// ==== 0x00516C70  HoverLocomotionClass::DispatchVirtualCall_2  this=HoverLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::DispatchVirtualCall_2(HoverLocomotionClass *this)
{
  return (unsigned __int8)StreamClass::GetDirty((IUnknown *)this) /*0x516c90*/
      || (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 114))(this->?) > 0;
}



// ==== 0x00516CA0  HoverLocomotionClass::IsBridgeBlocking  this=HoverLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::IsBridgeBlocking(HoverLocomotionClass *this)
{
  int Member; // eax
  int *location; // ecx
  CellClass *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // edx
  int v7; // eax
  int v8; // ecx
  __int16 v9; // ax
  __int16 v10; // cx
  __int16 v11; // [esp+4h] [ebp-18h]
  _DWORD v12[2]; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+18h] [ebp-4h]

  if ( (unsigned __int8)Team::AllMembersValid((Team *)this->?) ) /*0x516cab*/
  {
    Member = Team::GetMember((Team *)this->?, 0); /*0x516cb9*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6 ) /*0x516cc8*/
    {
      if ( *(_BYTE *)(*(_DWORD *)(Team::GetMember((Team *)this->?, 0) + 1312) + 5821) ) /*0x516cda*/
        return 0; /*0x516cea*/
    }
  }
  location = this->?->?; /*0x516cf0*/
  v12[0] = *location; /*0x516cf8*/
  v12[1] = location[1]; /*0x516d04*/
  v13 = location[2]; /*0x516d0b*/
  v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v12); /*0x516d14*/
  v5 = Cell::IsBridge((Cell *)v4); /*0x516d1b*/
  if ( v5 && *(_BYTE *)(v5[328] + 5821) ) /*0x516d2e*/
  {
    v6 = v5 + 39; /*0x516d41*/
    v7 = v5[39]; /*0x516d43*/
    v8 = v6[1]; /*0x516d45*/
    v13 = v6[2]; /*0x516d4b*/
    LOWORD(v12[0]) = v7 / 256; /*0x516d5b*/
    HIWORD(v12[0]) = v8 / 256; /*0x516d6e*/
    v11 = this->?->?[0] / 256; /*0x516d99*/
    v9 = v11 - LOWORD(v12[0]); /*0x516db9*/
    v10 = this->?->?[1] / 256 - HIWORD(v12[0]); /*0x516dbf*/
    if ( v11 == LOWORD(v12[0]) ) /*0x516dc4*/
    {
      if ( v10 == 1 ) /*0x516dca*/
        return 0; /*0x516dd2*/
    }
    else if ( v9 == 2 ) /*0x516dd9*/
    {
      if ( v10 == 1 ) /*0x516ddf*/
        return 0; /*0x516de7*/
    }
    else if ( v9 == 3 && v10 == 1 ) /*0x516df4*/
    {
      return 0; /*0x516dfc*/
    }
  }
  return 1; /*0x516ce6*/
}



// ==== 0x00516E10  HoverLocomotionClass::TryMoveToAdjacentCell  this=HoverLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::TryMoveToAdjacentCell(HoverLocomotionClass *this, unsigned int a2)
{
  HoverLocomotionClass *v2; // esi
  _WORD *v3; // eax
  FootClass *Owner; // edi
  unsigned int v5; // ecx
  __int16 v6; // dx
  int (__thiscall **ptr_0)(FootClass *, void *, int, int, _DWORD, int); // ebx
  void *v8; // eax
  int v9; // ecx
  int GroundHeight; // eax
  int *location; // ecx
  _BYTE v13[4]; // [esp+20h] [ebp-10h] BYREF
  int v14; // [esp+24h] [ebp-Ch]
  int v15; // [esp+28h] [ebp-8h]

  v2 = this; /*0x516e15*/
  if ( !(*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 96))(this) ) /*0x516e1d*/
    return 0; /*0x516e1d*/
  if ( LOBYTE(v2->HoverLocomotionClass_field_6C) ) /*0x516e28*/
    return 0; /*0x516e28*/
  v3 = (_WORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))v2->?->TechnoClass + 110))(v2->?, v13); /*0x516e3d*/
  Owner = v2->?; /*0x516e46*/
  v5 = (((a2 >> 12) + 1) >> 1) & 7; /*0x516e57*/
  v6 = LOWORD(g_DDrawSurfaceManager.scenario[v5 + 82]) + *v3; /*0x516e5e*/
  LOWORD(v5) = HIWORD(g_DDrawSurfaceManager.scenario[v5 + 82]); /*0x516e6d*/
  LOWORD(a2) = v6; /*0x516e71*/
  HIWORD(a2) = v3[1] + v5; /*0x516e7f*/
  this = (HoverLocomotionClass *)a2; /*0x516e88*/
  ptr_0 = (int (__thiscall **)(FootClass *, void *, int, int, _DWORD, int))Owner->TechnoClass; /*0x516e8c*/
  v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&this); /*0x516e93*/
  if ( ptr_0[107](Owner, v8, -1, -1, 0, 1) ) /*0x516e9b*/
    return 0; /*0x516fb5*/
  LOBYTE(v2->HoverLocomotionClass_field_6C) = 1; /*0x516ea9*/
  if ( (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)v2->LocomotionClass + 16))(v2) ) /*0x516eb0*/
  {
    v2->?->pathDirections[0] = -1; /*0x516ec1*/
    if ( v2->Dest[2] != *(_DWORD *)&stru_A8EB00.?[1436] /*0x516eeb*/
      || v2->HeadToCoord[0] != *(_DWORD *)&stru_A8EB00.?[1440]
      || v2->HeadToCoord[1] != *(_DWORD *)&stru_A8EB00.?[1444] )
    {
      (*((void (__thiscall **)(FootClass *, int *))v2->?->TechnoClass + 61))(v2->?, &v2->Dest[2]); /*0x516ef3*/
    }
    v9 = SHIWORD(this) << 8; /*0x516f0d*/
    v2->Dest[2] = ((__int16)this << 8) + 128; /*0x516f10*/
    v2->HeadToCoord[0] = v9 + 128; /*0x516f1b*/
    v2->HeadToCoord[1] = 0; /*0x516f23*/
    GroundHeight = Cell::GetGroundHeight(&v2->Dest[2]); /*0x516f26*/
    v2->HeadToCoord[1] = GroundHeight; /*0x516f2b*/
    location = v2->?->?; /*0x516f31*/
    v14 = *location; /*0x516f39*/
    v15 = location[1]; /*0x516f40*/
    if ( location[2] >= GroundHeight + 2 * *(_DWORD *)&stru_A8EB00.?[1500] + *(_DWORD *)&stru_A8EB00.?[1500] ) /*0x516f54*/
      v2->HeadToCoord[1] = *(_DWORD *)&stru_A8EB00.?[1488] + GroundHeight; /*0x516f5e*/
    (*((void (__thiscall **)(FootClass *, int *))v2->?->TechnoClass + 60))(v2->?, &v2->Dest[2]); /*0x516f67*/
    return 1; /*0x516f6d*/
  }
  else
  {
    (*(void (__stdcall **)(HoverLocomotionClass *, int, int, _DWORD))(*(_DWORD *)v2->LocomotionClass + 68))( /*0x516fa5*/
      v2,
      ((__int16)this << 8) + 128,
      (SHIWORD(this) << 8) + 128,
      0);
    return 1; /*0x516fa8*/
  }
}



// ==== 0x00516FC0  HoverLocomotionClass::RandomizeLocomotionParam  this=HoverLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::RandomizeLocomotionParam(HoverLocomotionClass *this, int a2)
{
  if ( !(*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *, int))(*(_DWORD *)this->LocomotionClass + 104))( /*0x516fcd*/
          this,
          a2) )
    return 0; /*0x517017*/
  LOBYTE(this->CurrentWobbles[1]) = 1; /*0x516fd4*/
  *(_DWORD *)&this->HoverLocomotionClass_field_bool_68 = Random::Range( /*0x516fed*/
                                                           (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                                                           20,
                                                           30);
  if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 50 ) /*0x517007*/
    *(_DWORD *)&this->HoverLocomotionClass_field_bool_68 = -*(_DWORD *)&this->HoverLocomotionClass_field_bool_68; /*0x51700e*/
  return 1; /*0x517013*/
}



// ==== 0x00517070  HoverLocomotionClass::ddtor  this=HoverLocomotionClass  sig=csp ====
int __stdcall HoverLocomotionClass::ddtor(HoverLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x517076*/
    return -2147467261; /*0x517078*/
  *a2 = 1247291202; /*0x517086*/
  a2[1] = 298948665; /*0x51708e*/
  a2[2] = -1610610249; /*0x517097*/
  a2[3] = unk_7E9A4C; /*0x5170a0*/
  return 0; /*0x51707d*/
}



// ==== 0x005170B0  HoverLocomotionClass::BeginMove  this=HoverLocomotionClass  sig=csp ====
int __stdcall HoverLocomotionClass::BeginMove(HoverLocomotionClass *this, int *a2)
{
  int v2; // edi

  v2 = SwizzleManager::SaveLoad((int *)this->LocomotionClass, a2); /*0x5170c1*/
  if ( v2 >= 0 && this ) /*0x5170c9*/
  {
    *(_DWORD *)this->LocomotionClass = &LocomotionClass::`vftable'; /*0x5170ce*/
    *(_DWORD *)&this->LocomotionClass[4] = &LocomotionClass::`vftable'; /*0x5170d4*/
    FrameSnapshot::Init((FrameSnapshot *)this->LocomotionFacing); /*0x5170db*/
    *(_DWORD *)this->LocomotionClass = &HoverLocomotionClass::`vftable'; /*0x5170e0*/
    *(_DWORD *)&this->LocomotionClass[4] = &HoverLocomotionClass::`vftable'; /*0x5170e6*/
  }
  return v2; /*0x5170ef*/
}



// ==== 0x00517100  HoverLocomotionClass::SmallStub  this=HoverLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmallStub_517100(HoverLocomotionClass *this)
{
  return 2; /*0x517105*/
}



// ==== 0x00517110  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_517110(ObjectClass *this)
{
  int v2; // edi
  int v3; // ebx
  _WORD *v4; // eax
  bool v5; // bl
  void *ptr_C; // ecx
  int result; // eax
  _BYTE v8[4]; // [esp+8h] [ebp-4h] BYREF

  v5 = 1; /*0x51717d*/
  if ( this->occupant != *(_DWORD *)&stru_A8EB00.?[1436] /*0x517138*/
    || this->owningHouseIndex != *(_DWORD *)&stru_A8EB00.?[1440]
    || this->fallRate != *(_DWORD *)&stru_A8EB00.?[1444] )
  {
    v2 = this->occupant / 256; /*0x517161*/
    v3 = this->owningHouseIndex / 256; /*0x517164*/
    v4 = (_WORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this->? + 440))(this->?, v8); /*0x517167*/
    if ( *v4 != (_WORD)v2 || v4[1] != (_WORD)v3 ) /*0x517177*/
      v5 = 0; /*0x517138*/
  }
  ptr_C = this->?; /*0x51717f*/
  this->ambientSoundController[3] = 0; /*0x517182*/
  this->ambientSoundController[4] = 1072693248; /*0x517189*/
  (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)ptr_C + 1348))(ptr_C, 0, 1072693248); /*0x517199*/
  result = MovementAI::StepFootClass((MovementAI *)this, 0); /*0x5171a3*/
  if ( v5 ) /*0x5171aa*/
    return MovementAI::MainFootClass((MovementAI *)this, 1); /*0x5171b0*/
  return result; /*0x5171b5*/
}



// ==== 0x005171C0  HoverLocomotionClass::DispatchVirtualCall_3  this=HoverLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall_3(HoverLocomotionClass *this, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  FootClass *Owner; // ecx
  _DWORD v5[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x5171c0*/
  if ( !a2 ) /*0x5171c9*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(HoverLocomotionClass *, _BYTE *))(*(_DWORD *)this->LocomotionClass + 24))( /*0x5171d8*/
                     this,
                     v6);
    v5[0] = *v3; /*0x5171dd*/
    v5[1] = v3[1]; /*0x5171e4*/
    Owner = this->?; /*0x5171eb*/
    v5[2] = v3[2]; /*0x5171ee*/
    return (*((int (__thiscall **)(FootClass *, _DWORD *))Owner->TechnoClass + 61))(Owner, v5); /*0x5171f9*/
  }
  return result; /*0x517200*/
}



// ==== 0x00517210  HoverLocomotionClass::IsPositionWithinThreshold  this=HoverLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::IsPositionWithinThreshold(HoverLocomotionClass *this, int a2, int a3, int a4)
{
  int *v4; // eax
  int v5; // ebp
  int v6; // kr04_4
  int v7; // eax
  _BYTE v9[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (int *)(*(int (__stdcall **)(HoverLocomotionClass *, _BYTE *))(*(_DWORD *)this->LocomotionClass + 24))(this, v9); /*0x517223*/
  v5 = v4[2]; /*0x51722b*/
  v6 = *v4; /*0x517257*/
  v7 = v4[1] / 256; /*0x51726d*/
  return (unsigned __int16)(v6 / 256) == (unsigned __int16)(a2 / 256) /*0x517291*/
      && (_WORD)v7 == (unsigned __int16)(a3 / 256)
      && (int)abs32(v5 - a4) <= *(int *)&stru_A8EB00.?[1500];
}



// ==== 0x005172B0  HoverLocomotionClass::StubReturn120  this=HoverLocomotionClass  sig=csp ====
int HoverLocomotionClass::StubReturn120(HoverLocomotionClass *this)
{
  return 120; /*0x5172b5*/
}



// ==== 0x005172C0  HoverLocomotionClass::ProcessMove  this=HoverLocomotionClass  sig=csp ====
_DWORD *__thiscall HoverLocomotionClass::ProcessMove(HoverLocomotionClass *this, char a2)
{
  *(_DWORD *)this->LocomotionClass = &HoverLocomotionClass::`vftable'; /*0x5172c3*/
  *(_DWORD *)&this->LocomotionClass[4] = &HoverLocomotionClass::`vftable'; /*0x5172c9*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x5172d0*/
  if ( (a2 & 1) != 0 ) /*0x5172da*/
    __3_YAXPAX_Z(this); /*0x5172dd*/
  return this->LocomotionClass; /*0x5172e7*/
}



// ==== 0x005172F0  LocomotionClass::ProcessMove  this=LocomotionClass  sig=csp ====
_DWORD *__thiscall LocomotionClass::ProcessMove(LocomotionClass *this, char a2)
{
  LocomotionClass::Construct(this); /*0x5172f3*/
  if ( (a2 & 1) != 0 ) /*0x5172fd*/
    __3_YAXPAX_Z(this); /*0x517300*/
  return this->ILocomotion; /*0x51730a*/
}



// ==== 0x00517310  Int64::Equal  this=Int64  sig=csp ====
int __thiscall Int64::Equal(Int64 *this, _DWORD *a2)
{
  return *this == *a2 && *((_DWORD *)this + 1) == a2[1]; /*0x51731b*/
}



// ==== 0x00517340  sub_517340  this=-  sig=ida-proto ====
char sub_517340()
{
  byte_A8F1C4 = 0; /*0x517342*/
  byte_A8F1C5 = 0; /*0x517347*/
  byte_A8F1C6 = 0; /*0x51734c*/
  return 0; /*0x517351*/
}



// ==== 0x00517360  ObjectClass::method  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_517360(ObjectClass *this, unsigned __int8 a2, unsigned __int8 *a3)
{
  unsigned __int8 v3; // bl
  char v4; // al
  unsigned __int8 ptr_0; // bl
  unsigned int result; // eax

  v3 = BYTE1(this->AbstractClass); /*0x517394*/
  BYTE2(this->AbstractClass) += a2 * (a3[2] - BYTE2(this->AbstractClass)) / 256; /*0x517397*/
  v4 = v3 + a2 * (a3[1] - v3) / 256; /*0x5173b8*/
  ptr_0 = (unsigned __int8)this->AbstractClass; /*0x5173ba*/
  BYTE1(this->AbstractClass) = v4; /*0x5173bc*/
  result = a2 * (*a3 - ptr_0) / 256; /*0x5173db*/
  LOBYTE(result) = ptr_0 + result; /*0x5173de*/
  LOBYTE(this->AbstractClass) = result; /*0x5173e1*/
  return result; /*0x5173cb*/
}



// ==== 0x005173F0  ObjectClass::method_5173F0  this=ObjectClass  sig=csp ====
int __thiscall sub_5173F0(ObjectClass *this, unsigned __int8 *a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // eax

  v2 = LOBYTE(this->AbstractClass) - *a2; /*0x517400*/
  if ( v2 < 0 ) /*0x517402*/
    v2 = *a2 - LOBYTE(this->AbstractClass); /*0x517404*/
  v3 = BYTE1(this->AbstractClass) - a2[1]; /*0x517410*/
  if ( v3 < 0 ) /*0x517412*/
    v3 = a2[1] - BYTE1(this->AbstractClass); /*0x517414*/
  v4 = BYTE2(this->AbstractClass) - a2[2]; /*0x517422*/
  if ( v4 < 0 ) /*0x517424*/
    v4 = a2[2] - BYTE2(this->AbstractClass); /*0x517426*/
  return v2 * v2 + v3 * v3 + v4 * v4; /*0x517437*/
}



// ==== 0x00517440  Color::ConvertToRGB  this=Color  sig=csp ====
int __thiscall Color::ConvertToRGB(Color *this, int a2)
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

  v2 = BYTE2(this->Color_field_00); /*0x51744b*/
  v3 = BYTE1(this->Color_field_00); /*0x517453*/
  v4 = 3 * LOBYTE(this->Color_field_00); /*0x51745c*/
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



// ==== 0x00517590  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::HashEntryCompare  this=DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode  sig=csp ====
BOOL __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::HashEntryCompare(
        DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode *this,
        _BYTE *a2)
{
  return this->__pad_0[0] != *a2 || this->__pad_0[1] != a2[1] || this->__pad_0[2] != a2[2]; /*0x5175bd*/
}



// ==== 0x005175D0  VtableStub::Method_5175D0  this=VtableStub  sig=ida-proto ====
// attributes: thunk
void __noreturn VtableStub::5175D0()
{
  while ( 1 ) /*0x5175d0*/
    ; /*0x5175d0*/
}



// ==== 0x005175F0  ObjectClass::ReadRegistryOptionsWOL  this=ObjectClass  sig=csp ====
int __thiscall ReadRegistryOptionsWOL(ObjectClass *this)
{
  int result; // eax
  void *v3; // ecx
  BYTE Data[4]; // [esp+Ch] [ebp-90h] BYREF
  HKEY phkResult; // [esp+10h] [ebp-8Ch] BYREF
  DWORD cbData; // [esp+14h] [ebp-88h] BYREF
  DWORD Type; // [esp+18h] [ebp-84h] BYREF
  CHAR SubKey[128]; // [esp+1Ch] [ebp-80h] BYREF

  LOBYTE(this->?) = 0; /*0x517605*/
  strcpy(SubKey, g_Str_SOFTWARE_Westwood_WOLAPI_); /*0x517620*/
  cbData = 4; /*0x517624*/
  result = RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0xF003Fu, &phkResult); /*0x517643*/
  if ( !result ) /*0x51764b*/
  {
    *(_DWORD *)Data = 0; /*0x51764d*/
    if ( !RegQueryValueExA(phkResult, g_INI_Key_Options, 0, &Type, Data, &cbData) && Type == 4 ) /*0x51767b*/
    {
      v3 = *(void **)Data; /*0x51767d*/
      LOBYTE(this->?) = 1; /*0x517681*/
      this->AbstractClass = v3; /*0x517685*/
    }
    result = RegCloseKey(phkResult); /*0x51768d*/
  }
  LOBYTE(result) = this->?; /*0x517693*/
  return result; /*0x517696*/
}



// ==== 0x005176A0  InfantryClass::SetField6  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::SetField6(InfantryClass *this)
{
  return ((int)this->FootClass & 1) == 0; /*0x5176a6*/
}



// ==== 0x005176B0  Flag::IsNot2  this=Flag  sig=csp ====
int __thiscall Flag::IsNot2(Flag *this)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x5176b0*/
  LOBYTE(result) = (~(unsigned __int8)*(_DWORD *)this->__pad_0 & 2) != 0; /*0x5176b6*/
  return result; /*0x5176b8*/
}



// ==== 0x005176C0  ObjectClass::WinMain_Helper  this=ObjectClass  sig=csp ====
bool __thiscall WinMain_Helper(ObjectClass *this)
{
  return (~(unsigned __int8)this->AbstractClass & 4) != 0; /*0x5176c9*/
}



// ==== 0x005176D0  ObjectClass::method_5176D0  this=ObjectClass  sig=csp ====
char __thiscall sub_5176D0(ObjectClass *this, BYTE Data)
{
  void *v4; // ecx
  char v5; // [esp+13h] [ebp-119h]
  HKEY phkResult; // [esp+14h] [ebp-118h] BYREF
  BYTE v7[4]; // [esp+18h] [ebp-114h] BYREF
  HKEY hKey; // [esp+1Ch] [ebp-110h] BYREF
  DWORD cbData; // [esp+20h] [ebp-10Ch] BYREF
  DWORD Type; // [esp+24h] [ebp-108h] BYREF
  DWORD dwDisposition; // [esp+28h] [ebp-104h] BYREF
  CHAR SubKey[128]; // [esp+2Ch] [ebp-100h] BYREF
  CHAR v13[128]; // [esp+ACh] [ebp-80h] BYREF

  strcpy(SubKey, g_Str_SOFTWARE_Westwood_WOLAPI_); /*0x5176ff*/
  v5 = 0; /*0x51770a*/
  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0xF003Fu, &phkResult) /*0x51774a*/
    && RegCreateKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, &dwDisposition) )
  {
    return 0; /*0x517757*/
  }
  if ( !RegSetValueExA(phkResult, g_INI_Key_Options, 0, 4u, &Data, 4u) ) /*0x51777b*/
    v5 = 1; /*0x517785*/
  RegCloseKey(phkResult); /*0x51778f*/
  LOBYTE(this->?) = 0; /*0x51779f*/
  strcpy(v13, g_Str_SOFTWARE_Westwood_WOLAPI_); /*0x5177c0*/
  cbData = 4; /*0x5177c4*/
  if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, v13, 0, 0xF003Fu, &hKey) ) /*0x5177e3*/
  {
    *(_DWORD *)v7 = 0; /*0x5177e9*/
    if ( !RegQueryValueExA(hKey, g_INI_Key_Options, 0, &Type, v7, &cbData) && Type == 4 ) /*0x517817*/
    {
      v4 = *(void **)v7; /*0x517819*/
      LOBYTE(this->?) = 1; /*0x51781d*/
      this->AbstractClass = v4; /*0x517821*/
    }
    RegCloseKey(hKey); /*0x517829*/
  }
  return v5; /*0x517754*/
}



// ==== 0x00517840  sub_517840  this=-  sig=ida-proto ====
void sub_517840()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x51784c*/
  dbl_A8F1E8 = Math::Sqrt(v0 + v0); /*0x51785e*/
}



// ==== 0x00517870  sub_517870  this=-  sig=ida-proto ====
void sub_517870()
{
  dbl_A8F238 = dbl_A8F1E8 / 60.0; /*0x51787c*/
}



// ==== 0x00517890  sub_517890  this=-  sig=ida-proto ====
void sub_517890()
{
  dbl_A8F220 = 1.0 / dbl_A8F238; /*0x51789c*/
}



// ==== 0x005178B0  sub_5178B0  this=-  sig=ida-proto ====
void sub_5178B0()
{
  dbl_A8F218 = 0.0174532925199433 * 45.0; /*0x5178bc*/
}



// ==== 0x005178D0  sub_5178D0  this=-  sig=ida-proto ====
void sub_5178D0()
{
  dbl_A8F1F0 = 0.0174532925199433 * 60.0; /*0x5178dc*/
}



// ==== 0x005178F0  sub_5178F0  this=-  sig=ida-proto ====
void sub_5178F0()
{
  dbl_A8F1C8 = 0.0174532925199433 * 90.0; /*0x5178fc*/
}



// ==== 0x00517910  sub_517910  this=-  sig=ida-proto ====
__int64 sub_517910()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A8F1C8 - dbl_A8F1F0); /*0x517922*/
  result = Math::RoundToInt(v0 * dbl_A8F1E8 * 0.5); /*0x517936*/
  dword_A8F240 = result; /*0x51793b*/
  return result; /*0x517940*/
}



// ==== 0x00517950  sub_517950  this=-  sig=ida-proto ====
void sub_517950()
{
  dbl_A8F1F8 = Math::ArcTan((double)dword_A8F240 * 0.00390625); /*0x517967*/
}



// ==== 0x00517980  sub_517980  this=-  sig=ida-proto ====
void sub_517980()
{
  dbl_A8F210 = Math::ArcTan((double)(2 * dword_A8F240) / dbl_A8F1E8); /*0x5179a2*/
}



// ==== 0x005179B0  sub_5179B0  this=-  sig=ida-proto ====
__int64 sub_5179B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F240) + 0.5); /*0x5179cb*/
  dword_A8F234 = result; /*0x5179d0*/
  return result; /*0x5179d6*/
}



// ==== 0x005179E0  sub_5179E0  this=-  sig=ida-proto ====
int sub_5179E0()
{
  dword_A8F1E0 = 0; /*0x5179e2*/
  return 0; /*0x5179ee*/
}



// ==== 0x005179F0  sub_5179F0  this=-  sig=ida-proto ====
int sub_5179F0()
{
  dword_A8F200 = 0; /*0x5179f2*/
  dword_A8F204 = 0; /*0x5179f7*/
  dword_A8F208 = 0; /*0x5179fc*/
  return 0; /*0x517a01*/
}



// ==== 0x00517A10  sub_517A10  this=-  sig=ida-proto ====
int sub_517A10()
{
  dword_A8F230 = 0; /*0x517a15*/
  dword_A8F228 = 128; /*0x517a1f*/
  dword_A8F22C = 128; /*0x517a24*/
  return 128; /*0x517a29*/
}



// ==== 0x00517A30  sub_517A30  this=-  sig=ida-proto ====
int sub_517A30()
{
  dword_A8F1D0 = 0; /*0x517a32*/
  dword_A8F1D4 = 0; /*0x517a37*/
  dword_A8F1D8 = 0; /*0x517a3c*/
  dword_A8F1DC = 0; /*0x517a41*/
  return 0; /*0x517a46*/
}



// ==== 0x00517A50  InfantryClass::Construct  this=InfantryClass  sig=csp ====
int __userpurge InfantryClass::Construct@<eax>(int this@<ecx>, int a2@<edi>, int a3, IUnknown *ppv)
{
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // edi
  const IID *v8; // ebp
  int v9; // eax
  int ptr_8; // ebp
  _DWORD *v11; // edi
  int i; // eax
  _DWORD *v13; // edx
  InfantryClass *v15; // [esp+10h] [ebp-10h]
  int Vtable3; // [esp+24h] [ebp+4h]

  FootClass::Construct((FootClass *)this, (int)ppv); /*0x517a5b*/
  *(_DWORD *)(this + 1732) = -1; /*0x517a64*/
  *(_DWORD *)(this + 1728) = a3; /*0x517a6e*/
  *(_DWORD *)(this + 1736) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x517a7f*/
  *(_DWORD *)(this + 1744) = 0; /*0x517a85*/
  *(_DWORD *)(this + 1748) = 0; /*0x517a8c*/
  *(_BYTE *)(this + 1752) = 0; /*0x517a92*/
  *(_BYTE *)(this + 1753) = 0; /*0x517a98*/
  *(_BYTE *)(this + 1754) = 0; /*0x517a9e*/
  *(_BYTE *)(this + 1755) = 0; /*0x517aa4*/
  *(_BYTE *)(this + 1756) = 0; /*0x517aaa*/
  *(_BYTE *)(this + 1757) = 0; /*0x517ab0*/
  *(_DWORD *)(this + 1760) = 0; /*0x517ab6*/
  *(_BYTE *)(this + 1764) = 0; /*0x517abc*/
  *(_DWORD *)(this + 1768) = 2; /*0x517ac2*/
  *(_DWORD *)this = &InfantryClass::`vftable'; /*0x517acc*/
  *(_DWORD *)(this + 4) = &InfantryClass::`vftable'; /*0x517ad2*/
  *(_DWORD *)(this + 8) = &InfantryClass::`vftable'; /*0x517ad8*/
  *(_DWORD *)(this + 12) = &off_7EB02C; /*0x517adf*/
  AbstractClass::GenerateUniqueID((AbstractClass *)(this + 4)); /*0x517ae6*/
  if ( *(int *)&stru_A83D50.__pad_80[40] < *(int *)&stru_A83D50.__pad_80[32] /*0x517b1e*/
    || (stru_A83D50.__pad_80[37] || !*(_DWORD *)&stru_A83D50.__pad_80[32])
    && *(int *)&stru_A83D50.__pad_80[44] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_A83D50.__pad_80[24] + 8))(
         &stru_A83D50.__pad_80[24],
         *(_DWORD *)&stru_A83D50.__pad_80[32] + *(_DWORD *)&stru_A83D50.__pad_80[44],
         0) )
  {
    v5 = (*(_DWORD *)&stru_A83D50.__pad_80[40])++; /*0x517b2b*/
    *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * v5) = this; /*0x517b3a*/
  }
  InfantryClass::PerFrameUpdate(v15, a2); /*0x517b3f*/
  v6 = *(_DWORD *)(this + 1728); /*0x517b44*/
  if ( v6 ) /*0x517b4c*/
  {
    v7 = (_DWORD *)(this + 1652); /*0x517b4e*/
    v8 = (const IID *)(v6 + 844); /*0x517b54*/
    v9 = *(_DWORD *)(this + 1652); /*0x517b5a*/
    if ( v9 ) /*0x517b5e*/
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v9 + 8))(*(_DWORD *)(this + 1652)); /*0x517b63*/
    if ( CoCreateInstance(v8, 0, 7u, &riid, (LPVOID *)&ppv) >= 0 ) /*0x517b7c*/
    {
      if ( OleRun(ppv) >= 0 ) /*0x517b8b*/
        (*(void (__stdcall **)(IUnknown *, IID *, int))ppv->field_0)(ppv, &stru_817BB0, this + 1652); /*0x517b9a*/
      (*(void (__stdcall **)(IUnknown *))(ppv->field_0 + 8))(ppv); /*0x517ba3*/
    }
    if ( !*v7 ) /*0x517ba6*/
      WinAPI::Wrapper(-2147467261); /*0x517baf*/
    (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*v7 + 12))(*v7, this); /*0x517bba*/
  }
  BuildingTypeClass::GetPowerOutput((BuildingTypeClass *)(this + 904), 127); /*0x517bc5*/
  Vtable3 = AbstractClass::GetVtable3((AbstractClass *)(this + 4)); /*0x517bd3*/
  if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x517be6*/
    goto LABEL_25; /*0x517be6*/
  if ( g_BuildingLoadQueue_Array.? ) /*0x517bee*/
  {
    ptr_8 = (int)g_BuildingLoadQueue_Array.?; /*0x517bf7*/
    if ( (int)g_BuildingLoadQueue_Array.? < 0 ) /*0x517bfb*/
      return this; /*0x517bfb*/
  }
  else
  {
    ptr_8 = 10; /*0x517bf0*/
  }
  ppv = (IUnknown *)((char *)g_BuildingLoadQueue_Array.? + ptr_8); /*0x517c03*/
  v11 = (_DWORD *)__2_YAPAXI_Z(8 * ((int)g_BuildingLoadQueue_Array.? + ptr_8)); /*0x517c14*/
  if ( v11 ) /*0x517c1b*/
  {
    ppv = (IUnknown *)((char *)ppv - 1); /*0x517c2c*/
    for ( i = 0; i < (int)g_BuildingLoadQueue_Array.?; v11[2 * i - 1] = v13[1] ) /*0x517c34*/
    {
      v13 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * i++; /*0x517c3c*/
      v11[2 * i - 2] = *v13; /*0x517c42*/
    }
    __3_YAXPAX_Z(g_BuildingLoadQueue_Array.TechnoTypeClass); /*0x517c5d*/
    g_BuildingLoadQueue_Array.TechnoTypeClass = v11; /*0x517c6c*/
    g_BuildingLoadQueue_Array.? = (char *)g_BuildingLoadQueue_Array.? + ptr_8; /*0x517c72*/
    g_BuildingLoadQueue_Array.? = 0; /*0x517c77*/
LABEL_25:
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = Vtable3; /*0x517c7d*/
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = this; /*0x517c9b*/
    LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x517ca5*/
    ++g_BuildingLoadQueue_Array.?; /*0x517cab*/
  }
  return this; /*0x517cb2*/
}



// ==== 0x00517CC0  InfantryClass::PerFrameUpdate  this=InfantryClass  sig=csp ====
_DWORD *__usercall InfantryClass::PerFrameUpdate@<eax>(InfantryClass *this, int a2@<edi>)
{
  int v2; // ecx
  int v3; // esi
  _DWORD *result; // eax
  BuildingClass *v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // ecx
  TechnoClass *v14; // [esp+0h] [ebp-8h]

  v3 = v2; /*0x517cc2*/
  result = TechnoClass::Update(v14, a2); /*0x517cc4*/
  v5 = *(BuildingClass **)(v3 + 540); /*0x517cc9*/
  if ( v5 ) /*0x517cd1*/
    result = (_DWORD *)BuildingClass::PowerUpdate(v5, (_BYTE *)v3); /*0x517cd4*/
  v6 = *(_DWORD *)(v3 + 1728); /*0x517cd9*/
  if ( v6 ) /*0x517ce1*/
  {
    v7 = *(_DWORD *)(v3 + 540); /*0x517ce7*/
    if ( v7 ) /*0x517cef*/
    {
      v8 = 0; /*0x517cf4*/
      v9 = *(_DWORD *)(v7 + 52) + 332; /*0x517cf6*/
      v10 = *(_DWORD *)(v9 + 16); /*0x517cfb*/
      if ( v10 > 0 ) /*0x517d00*/
      {
        v11 = *(_DWORD **)(v9 + 4); /*0x517d02*/
        while ( *v11 != v6 ) /*0x517d07*/
        {
          ++v8; /*0x517d09*/
          ++v11; /*0x517d0a*/
          if ( v8 >= v10 ) /*0x517d0f*/
            goto LABEL_11; /*0x517d0f*/
        }
        Power::ChangedHouse((Power *)(v3 + 336), 1); /*0x517d1b*/
      }
    }
LABEL_11:
    v12 = *(_DWORD *)(v3 + 540); /*0x517d20*/
    if ( v12 && *(_BYTE *)(v12 + 703) && *(_BYTE *)(*(_DWORD *)(v3 + 1728) + 3214) ) /*0x517d3a*/
      Power::ChangedHouse((Power *)(v3 + 336), 1); /*0x517d4c*/
    result = *(_DWORD **)(v3 + 1728); /*0x517d51*/
    *(_DWORD *)(v3 + 108) = result[40]; /*0x517d5d*/
    *(_DWORD *)(v3 + 112) = result[40]; /*0x517d66*/
    v13 = result[416]; /*0x517d69*/
    if ( v13 == -1 ) /*0x517d72*/
      v13 = result[417]; /*0x517d74*/
    *(_DWORD *)(v3 + 764) = v13; /*0x517d7a*/
    *(_BYTE *)(v3 + 978) = *((_BYTE *)result + 3280); /*0x517d86*/
  }
  return result; /*0x517d8c*/
}



// ==== 0x00517D90  InfantryClass::Destruct  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::Destruct(InfantryClass *this)
{
  AbstractClass *p_vtable1; // edi
  InfantryTypeClass *Type; // eax
  int *team; // ecx
  TechnoClass *slaveOwner; // eax
  SlaveManagerClass *slaveManager; // eax
  int v7; // eax
  int Vtable3; // eax
  void *ptr_4; // edx
  int v10; // edi
  int v11; // eax
  signed int v12; // eax
  int v13; // ecx
  char *i; // eax
  _DWORD *v15; // eax
  int v17[2]; // [esp+Ch] [ebp-8h] BYREF

  p_vtable1 = (AbstractClass *)&this->?; /*0x517d9a*/
  this->FootClass = &InfantryClass::`vftable'; /*0x517d9d*/
  this->? = &InfantryClass::`vftable'; /*0x517da3*/
  this->? = &off_7EB02C; /*0x517daa*/
  this->? = &InfantryClass::`vftable'; /*0x517db1*/
  if ( byte_A8E9A0 ) /*0x517dbe*/
  {
    Type = this->Type; /*0x517dc4*/
    if ( Type ) /*0x517dcc*/
    {
      if ( HouseClass::CanBuild(this->?, (int)Type, 0, 0) == -1 ) /*0x517de3*/
        this->?->recheckTechTree = 1; /*0x517deb*/
      team = (int *)this->?; /*0x517df2*/
      if ( team ) /*0x517dfa*/
      {
        TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x517e00*/
        this->? = 0; /*0x517e05*/
      }
      slaveOwner = this->?; /*0x517e0b*/
      if ( slaveOwner ) /*0x517e13*/
      {
        slaveManager = slaveOwner->slaveManager; /*0x517e15*/
        if ( slaveManager ) /*0x517e1d*/
          SlaveManagerClass::LostSlave(slaveManager, (int)this); /*0x517e22*/
      }
      HouseClass::DecrementUnitCount(this->?, this); /*0x517e2e*/
      if ( !this->?[0] ) /*0x517e33*/
        WinAPI::Wrapper(-2147467261); /*0x517e40*/
      (*(void (__stdcall **)(int))(*(_DWORD *)this->?[0] + 172))(this->?[0]); /*0x517e4e*/
      this->unknown_int_6E8 = 2; /*0x517e56*/
      this->Crawling = 0; /*0x517e60*/
      this->SequenceAnim[0] = 0; /*0x517e66*/
      TechnoClass::CleanupDirection((FootClass *)this); /*0x517e6c*/
    }
  }
  AbstractClass::AnnounceExpiredPointer(&this->FootClass, 1); /*0x517e75*/
  v17[0] = (int)this; /*0x517e89*/
  v7 = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)&stru_A83D50.__pad_80[24] + 16))( /*0x517e8d*/
         &stru_A83D50.__pad_80[24],
         v17);
  if ( v7 != -1 && v7 < *(int *)&stru_A83D50.__pad_80[40] ) /*0x517e9d*/
  {
    --*(_DWORD *)&stru_A83D50.__pad_80[40]; /*0x517ea2*/
    for ( ; /*0x517ea8*/
          v7 < *(int *)&stru_A83D50.__pad_80[40];
          *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * v7 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_80[28]
                                                                                     + 4 * v7) )
    {
      ++v7; /*0x517eb0*/
    }
  }
  Vtable3 = AbstractClass::GetVtable3(p_vtable1); /*0x517ec3*/
  ptr_4 = g_BuildingLoadQueue_Array.?; /*0x517ec8*/
  v10 = Vtable3; /*0x517ece*/
  if ( g_BuildingLoadQueue_Array.? ) /*0x517ed2*/
  {
    if ( !LOBYTE(g_BuildingLoadQueue_Array.?) ) /*0x517ede*/
    {
      qsort( /*0x517eee*/
        g_BuildingLoadQueue_Array.TechnoTypeClass,
        (size_t)g_BuildingLoadQueue_Array.?,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      ptr_4 = g_BuildingLoadQueue_Array.?; /*0x517ef3*/
      g_BuildingLoadQueue_Array.? = 0; /*0x517efc*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 1; /*0x517f02*/
    }
    v17[0] = v10; /*0x517f0d*/
    v11 = BinaryArraySearch((int)g_BuildingLoadQueue_Array.TechnoTypeClass, (int)ptr_4, v17); /*0x517f18*/
    if ( v11 ) /*0x517f1f*/
    {
      v12 = (signed int)(v11 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x517f27*/
      if ( v12 != -1 ) /*0x517f2d*/
      {
        v13 = v12 + 1; /*0x517f2f*/
        for ( i = (char *)g_BuildingLoadQueue_Array.?; /*0x517f39*/
              v13 < (int)g_BuildingLoadQueue_Array.?;
              i = (char *)g_BuildingLoadQueue_Array.? )
        {
          v15 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v13++; /*0x517f41*/
          *(v15 - 2) = *v15; /*0x517f47*/
          *(v15 - 1) = v15[1]; /*0x517f4d*/
        }
        g_BuildingLoadQueue_Array.? = i - 1; /*0x517f62*/
        *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = 0; /*0x517f67*/
        *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = 0; /*0x517f77*/
        g_BuildingLoadQueue_Array.? = 0; /*0x517f7b*/
      }
    }
  }
  this->? = 0; /*0x517f83*/
  return FootClass::Destruct((FootClass *)this); /*0x517f8e*/
}



// ==== 0x00517FA0  InfantryClass::ProcessDeployment  this=InfantryClass  sig=csp ====
int __userpurge InfantryClass::ProcessDeployment@<eax>(
        InfantryClass *this,
        double a2@<st0>,
        int *a3,
        int a4,
        int a5,
        int *a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // ecx
  int v11; // esi
  int v12; // eax
  int result; // eax
  int v14; // ebp
  int v15; // eax
  SlaveManagerClass *v16; // eax
  int v17; // ecx
  int v18; // edi
  int v19; // eax
  AnimClass *v20; // eax
  int *v21; // edi
  AnimClass *v22; // eax
  AnimClass *v23; // eax
  int v24; // edx
  int v25; // ebx
  int v26; // edi
  int v27; // eax
  AnimClass *v28; // eax
  int v29; // edi
  AnimClass *v30; // eax
  void **v31; // edi
  _DWORD *v32; // edx
  int v33; // eax
  int v34; // ecx
  AnimClass *v35; // eax
  AnimClass *v36; // eax
  void **v37; // edi
  _DWORD *v38; // edx
  int v39; // edx
  AnimClass *v40; // eax
  AnimClass *v41; // eax
  AnimClass *v42; // eax
  AnimClass *v43; // eax
  AnimClass *v44; // eax
  AnimClass *v45; // eax
  F... [25076 chars total]



// ==== 0x00518D80  ObjectClass::CalculateLocomotionFrameIndex  this=ObjectClass  sig=csp ====
int __thiscall CalculateLocomotionFrameIndex(TechnoClass *this)
{
  int v2; // ebx
  __int16 *v3; // eax
  int m_Data; // esi
  int ptr_0; // edx
  int v6; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  _DWORD *v11; // ecx
  _DWORD *Value; // eax
  bool v14; // [esp+19h] [ebp-1Dh]
  int v15; // [esp+1Ah] [ebp-1Ch]
  StreamClass v16; // [esp+1Eh] [ebp-18h] BYREF

  v2 = *((_DWORD *)this + 433); /*0x518d88*/
  if ( v2 == -1 ) /*0x518d91*/
  {
    v3 = (__int16 *)(*(int (__thiscall **)(TechnoClass *, int *))(this->ptr_0 + 440))(this, &v16.m_Data); /*0x518d9d*/
    if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v3) + 59) != 2 || this->onBridge[0] ) /*0x518db7*/
      v2 = 0; /*0x518dc8*/
    else
      v2 = 16; /*0x518dc1*/
  }
  m_Data = this->health; /*0x518dcf*/
  ptr_0 = this->ptr_0; /*0x518dd5*/
  v16.m_Data = m_Data; /*0x518ddb*/
  if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *, Object *))(ptr_0 + 1088))(this, dword_A83D4C) ) /*0x518ddf*/
  {
    v16.m_Data = (*(int (__thiscall **)(TechnoClass *, int))(this->ptr_0 + 204))(this, 1); /*0x518df6*/
    m_Data = v16.m_Data; /*0x518dfa*/
  }
  v6 = 36 * v2; /*0x518e05*/
  v7 = *(_DWORD *)(*(_DWORD *)(m_Data + 3644) + v6 + 4); /*0x518e0f*/
  if ( v7 <= 1 ) /*0x518e11*/
    v7 = 1; /*0x518e13*/
  v15 = this->animation[0] % v7; /*0x518e2f*/
  if ( !*(_BYTE *)(this->health + 3476) ) /*0x518e33*/
    goto LABEL_25; /*0x518e33*/
  v8 = *((_DWORD *)this + 413); /*0x518e39*/
  *(_DWORD *)v16.__pad_0 = 0; /*0x518e47*/
  if ( !v8 ) /*0x518e4f*/
    goto LABEL_16; /*0x518e4f*/
  v9 = StreamClass::Set2(&v16, (_DWORD *)this + 413); /*0x518e56*/
  if ( v9 < 0 && v9 != -2147467262 ) /*0x518e64*/
    WinAPI::Wrapper(v9); /*0x518e67*/
  if ( !*(_DWORD *)v16.__pad_0 ) /*0x518e72*/
LABEL_16:
    WinAPI::Wrapper(-2147467261); /*0x518e79*/
  (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)v16.__pad_0 + 12))(*(_DWORD *)v16.__pad_0, &v16.m_Position); /*0x518e8b*/
  v14 = memcmp(&v16.m_Position, &g_CLSID_JumpjetLocomotion, 0x10u) == 0; /*0x518ea4*/
  if ( *(_DWORD *)v16.__pad_0 ) /*0x518eac*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v16.__pad_0 + 8))(*(_DWORD *)v16.__pad_0); /*0x518eb1*/
  if ( !v14 || !this->target || *(_BYTE *)(this->health + 3787) ) /*0x518ecc*/
  {
    m_Data = v16.m_Data; /*0x518f2f*/
LABEL_25:
    v11 = (_DWORD *)(v6 + *(_DWORD *)(m_Data + 3644)); /*0x518f33*/
    if ( (int)v11[2] > 0 ) /*0x518f40*/
    {
      Value = ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v16.m_Data); /*0x518f4d*/
      v11 = (_DWORD *)(v6 + *(_DWORD *)(m_Data + 3644)); /*0x518f5e*/
      v15 += v11[2] * dword_7EAEFC[((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F]; /*0x518f76*/
    }
    return v15 + *v11; /*0x518f76*/
  }
  v10 = v16.m_Data; /*0x518ed6*/
  v11 = (_DWORD *)(v6 + *(_DWORD *)(v16.m_Data + 3644)); /*0x518ee0*/
  if ( (int)v11[2] > 0 ) /*0x518ee7*/
    return *(_DWORD *)(v6 + *(_DWORD *)(v10 + 3644) + 8) /*0x518f2e*/
         * dword_7EAEFC[((((unsigned int)*ObjectClass::CalcTargetFacing(this, &v16.m_Data, this->target) >> 10) + 1) >> 1)
                      & 0x1F]
         + v15
         + *(_DWORD *)(v6 + *(_DWORD *)(v10 + 3644));
  return v15 + *v11; /*0x518f0d*/
}



// ==== 0x00518F90  InfantryClass::Draw  this=InfantryClass  sig=csp ====
void InfantryClass::Draw(
        InfantryClass *this,
        int *a2,
        int *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  int *v16; // ecx
  int v17; // ebp
  int ptr_4; // edx
  int v19; // eax
  int v20; // edx
  char v21; // al
  int FlashFrameTime; // eax
  char *v23; // edx
  unsigned __int8 v24; // bl
  int v25; // eax
  int v26; // edx
  int v27; // ecx
  int v28; // eax
  _DWORD *v29; // eax
  CellClass *v30; // eax
  int v31; // eax
  int **v32; // ebx
  int v33; // eax
  _DWORD *v34; // eax
  InfantryClass *v35; // edi
  int v36; // edx
  int v37; // ecx
  bool v38; // zf
  int *v39; // esi
  unsigned int v40; // eax
  int *v41; // ebx
  int v42; // ecx
  int v43; // eax
  int uniqueId; // ebx
  int *v45; // esi
  signed int v46; // edi
  int v47; // ecx
  int v48; // eax
  unsigned int v49; // esi
  int v50; // esi
  int v51; // edi
  int v52; // esi
  int v53; // ebx
  CellClass *m_Position; // ecx
  int flags; // edx
  int v56; // eax
  int v57; // edi
  int v58; // eax
  int v59; // eax
  InfantryClass *v60; // edi
  int v61; // eax
  int *v62; // [esp+8h] [ebp-88h]
  int *v63; // [esp+14h] [ebp-7Ch]
  int v64; // [esp+14h] [ebp-7Ch]
  int v65; // [esp+20h] [ebp-70h]
  unsigned __int8 v66; // [esp+4Eh] [ebp-42h]
  unsigned __int8 v67; // [esp+4Fh] [ebp-41h]
  int v68; // [esp+50h] [ebp-40h]
  StreamClass v69; // [esp+54h] [ebp-3Ch] BYREF
  int v70; // [esp+68h] [ebp-28h] BYREF
  int ptr_0; // [esp+6Ch] [ebp-24h] BYREF
  int v72; // [esp+70h] [ebp-20h]
  int v73; // [esp+74h] [ebp-1Ch] BYREF
  int v74; // [esp+78h] [ebp-18h]
  int v75; // [esp+7Ch] [ebp-14h]
  _DWORD v76[4]; // [esp+80h] [ebp-10h] BYREF

  v17 = (int)v16; /*0x518f99*/
  ptr_4 = this->ptr_4; /*0x518f9d*/
  v19 = *v16; /*0x518fa0*/
  ptr_0 = this->ptr_0; /*0x518fa3*/
  v72 = ptr_4; /*0x518fb0*/
  v20 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(v19 + 448))(v16, &v69.StreamClass_field_0C); /*0x518fba*/
  v21 = *(_BYTE *)(v17 + 664); /*0x518fbc*/
  v69.m_Data = v20; /*0x518fc4*/
  v68 = 0; /*0x518fca*/
  if ( v21 ) /*0x518fce*/
  {
    FlashFrameTime = dword_8871E0[1].FlashFrameTime; /*0x518fda*/
    v23 = (char *)dword_8871E0 + 2 * FlashFrameTime; /*0x518fe0*/
    v24 = v23[FlashFrameTime + 6261]; /*0x518fed*/
    v66 = v23[FlashFrameTime + 6260]; /*0x518ffa*/
    v67 = v23[FlashFrameTime + 6262]; /*0x519004*/
    v25 = DDraw::GetStatus() - 1; /*0x51900d*/
    if ( v25 ) /*0x51900e*/
    {
      v28 = v25 - 1; /*0x519010*/
      if ( v28 ) /*0x519011*/
      {
LABEL_6:
        LOWORD(v26) = v66; /*0x51905b*/
        LOWORD(v28) = v67; /*0x519061*/
        LOWORD(v27) = v24 >> 1; /*0x51906c*/
        v68 |= v28 | (32 * ((32 * v26) | v27)); /*0x51907e*/
        goto LABEL_7; /*0x51907e*/
      }
      LOWORD(v26) = v67; /*0x519019*/
      LOWORD(v27) = v24; /*0x519025*/
      v25 = v26 | (32 * (v27 | (v66 << 6))); /*0x51902c*/
      v68 = v25; /*0x51902e*/
    }
    LOWORD(v26) = v66; /*0x519032*/
    LOWORD(v27) = v24 >> 1; /*0x51903f*/
    LOWORD(v25) = v67; /*0x519041*/
    v26 *= 32; /*0x519047*/
    v27 = v25 | ((v26 | v27) << 6); /*0x51904f*/
    HIWORD(v28) = HIWORD(v27) | HIWORD(v68); /*0x519055*/
    v68 |= v27; /*0x519057*/
    goto LABEL_6; /*0x519057*/
  }
LABEL_7:
  v29 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v17 + 72))(v17, &v73); /*0x519082*/
  *(_WORD *)v69.__pad_0 = *v29 / 256; /*0x51909f*/
  *(_WORD *)&v69.__pad_0[2] = v29[1] / 256; /*0x5190b7*/
  v69.m_Position = *(_DWORD *)v69.__pad_0; /*0x5190c0*/
  v30 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v69.m_Position); /*0x5190ca*/
  if ( (unsigned __int8)CellClass::QuickPassable(v30) ) /*0x5190d1*/
    v68 = 0; /*0x5190da*/
  if ( *(_BYTE *)(v17 + 1668) != 0xFF ) /*0x5190e5*/
  {
    TacticalClass::AddToDrawQueue((TacticalClass *)g_TacticalClass_Instance, v17, ptr_0, v72); /*0x519609*/
LABEL_56:
    AbstractClass::COMStub_Return0_69((FootClass *)&ptr_0, (int)a2); /*0x51960e*/
    return; /*0x51961a*/
  }
  v31 = *(_DWORD *)(v17 + 1652); /*0x5190eb*/
  v32 = (int **)(v17 + 1652); /*0x5190f1*/
  *(_DWORD *)v69.__pad_0 = 0; /*0x5190f9*/
  if ( !v31 ) /*0x5190fd*/
    goto LABEL_15; /*0x5190fd*/
  v33 = StreamClass::Set2(&v69, (_DWORD *)(v17 + 1652)); /*0x519104*/
  if ( v33 < 0 && v33 != -2147467262 ) /*0x519112*/
    WinAPI::Wrapper(v33); /*0x519115*/
  if ( !*(_DWORD *)v69.__pad_0 ) /*0x519120*/
LABEL_15:
    WinAPI::Wrapper(-2147467261); /*0x519127*/
  (*(void (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)v69.__pad_0 + 12))(*(_DWORD *)v69.__pad_0, v76); /*0x519138*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 456))(v17) > 0 && !memcmp(v76, &g_CLSID_DriveLocomotion, 0x10u) ) /*0x51915e*/
  {
    v69.m_Position = (int)SearchMIXFile(aPodShp, 0); /*0x519172*/
    if ( !*v32 ) /*0x519176*/
      WinAPI::Wrapper(-2147467261); /*0x519181*/
    v34 = (_DWORD *)(*(int (__stdcall **)(int *, int *))(**v32 + 48))(*v32, &v73); /*0x519190*/
    v35 = this; /*0x519193*/
    v36 = v34[1]; /*0x519199*/
    v37 = this->ptr_4; /*0x5191a0*/
    v69.StreamClass_field_0C = *v34 + this->ptr_0; /*0x5191a3*/
    v38 = *v32 == 0; /*0x5191ab*/
    v70 = v36 + v37; /*0x5191ad*/
    if ( v38 ) /*0x5191b1*/
      WinAPI::Wrapper(-2147467261); /*0x5191b8*/
    v39 = *v32; /*0x5191c3*/
    v65 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v17 + 748))(v17, 0) - 2; /*0x5191e1*/
    v63 = a3; /*0x5191f1*/
    v40 = (*(int (**)(void))(*v39 + 136))(); /*0x5191f4*/
    DrawToSurfaceSHP( /*0x51920c*/
      (int)g_DSurface_Hidden_2,
      (int)dword_87F6C4,
      v69.m_Position,
      v40,
      v39,
      &v70,
      (int)v63,
      11777,
      0,
      v65,
      1000,
      v68,
      0,
      0,
      0,
      0);
    CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v69.m_Data); /*0x51921b*/
    CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v69.m_Data); /*0x51922a*/
    if ( !*v32 ) /*0x51922f*/
      WinAPI::Wrapper(-2147467261); /*0x51923c*/
    v41 = *v32; /*0x519248*/
    v42 = *v41; /*0x519255*/
    this = *(InfantryClass **)v17; /*0x519267*/
    v43 = (*(int (__stdcall **)(int *, InfantryClass *, int *, _DWORD, int, _DWORD, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v42 + 136))( /*0x519271*/
            v41,
            v35,
            a2,
            0,
            256,
            0,
            2,
            0,
            1000,
            0,
            0,
            0,
            0,
            0,
            0);
    (*(void (__thiscall **)(int, InfantryClass *, int))(a15 + 1292))(v17, this, v43); /*0x519286*/
LABEL_53:
    if ( *(_DWORD *)v69.__pad_0 ) /*0x5195ee*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v69.__pad_0 + 8))(*(_DWORD *)v69.__pad_0); /*0x5195f3*/
    goto LABEL_56; /*0x5195f6*/
  }
  v69.StreamClass_field_0C = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 108))(v17); /*0x51929d*/
  if ( v69.StreamClass_field_0C )
  {
    this = *(InfantryClass **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v17 + 448))(v17, &v69.m_Position); /*0x5192da*/
    TacticalClass::AddToDrawQueue((TacticalClass *)g_TacticalClass_Instance, v17, ptr_0, v72); /*0x5192e6*/
    if ( (unsigned __int8)LightningStorm::IsActive() ) /*0x5192eb*/
    {
      uniqueId = dword_A8B230[379].uniqueId; /*0x5192fa*/
    }
    else if ( (unsigned __int8)PsyDom::IsActive() ) /*0x519302*/
    {
      uniqueId = dword_A8B230[380].NeedsSaveOrLink; /*0x519311*/
    }
    else if ( NukeFlash::IsActive() ) /*0x519319*/
    {
      uniqueId = dword_A8B230[380].ptr_4; /*0x519327*/
    }
    else
    {
      uniqueId = dword_A8B230[378].referenceCount; /*0x519335*/
    }
    if ( *(_BYTE *)(v17 + 140) ) /*0x51933b*/
      goto LABEL_39; /*0x51933b*/
    v45 = (int *)(v17 + 156); /*0x519349*/
    v73 = *(_DWORD *)(v17 + 156); /*0x519353*/
    v74 = *(_DWORD *)(v17 + 160); /*0x51935f*/
    v75 = *(_DWORD *)(v17 + 164); /*0x51936b*/
    if ( (Coord::To_Cell((Coord *)&dword_87F7E8, &v73)->flags & 0x10000) == 0 ) /*0x51937e*/
      goto LABEL_38; /*0x51937e*/
    v73 = *v45; /*0x519384*/
    v74 = *(_DWORD *)(v17 + 160); /*0x51938b*/
    v46 = *(_DWORD *)(v17 + 164); /*0x51938f*/
    v73 = *v45; /*0x519394*/
    v74 = *(_DWORD *)(v17 + 160); /*0x5193a0*/
    v75 = *(_DWORD *)(v17 + 164); /*0x5193a7*/
    if ( v46 > (int)(dword_A8F234 / 2 + Cell::GetGroundHeight(&v73)) )
    {
LABEL_39:
      v51 = uniqueId * ((*(int (__thiscall **)(int))(*(_DWORD *)v17 + 456))(v17) / (2 * dword_A8F240)); /*0x51943c*/
      v50 = v51 + *((__int16 *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&this) + 133); /*0x51944b*/
    }
    else
    {
LABEL_38:
      v47 = *(_DWORD *)(v17 + 164); /*0x5193c9*/
      v48 = *(_DWORD *)(v17 + 160); /*0x5193cc*/
      v73 = *v45; /*0x5193cf*/
      v75 = v47; /*0x5193d7*/
      v74 = v48; /*0x5193e1*/
      v49 = (Coord::To_Cell((Coord *)&dword_87F7E8, &v73)->flags & 0x10000) != 0 ? 0xFFFFFE0C : 0;
      v50 = *((__int16 *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&this) + 133) + v49; /*0x519416*/
    }
    v52 = *(_DWORD *)dword_8871E0->RadColor + v50; /*0x519457*/
    v53 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 456))(v17); /*0x519469*/
    v73 = *(_DWORD *)(v17 + 156); /*0x51946f*/
    v74 = *(_DWORD *)(v17 + 160); /*0x519480*/
    v75 = *(_DWORD *)(v17 + 164); /*0x519487*/
    m_Position = Coord::To_Cell((Coord *)&dword_87F7E8, &v73); /*0x519490*/
    v69.m_Position = (int)m_Position; /*0x519492*/
    flags = m_Position->flags; /*0x519496*/
    if ( (flags & 0x100) == 0 || v53 < dword_A8F234 ) /*0x5194a7*/
      goto LABEL_48; /*0x5194a7*/
    if ( (flags & 0x800) != 0 ) /*0x5194ac*/
    {
      if ( (*((_DWORD *)Cell::GetNeighbourContent((Cell *)m_Position, 0) + 80) & 0x100) != 0 ) /*0x5194be*/
      {
LABEL_47:
        v53 -= dword_A8F234; /*0x5194e1*/
LABEL_48:
        if ( v53 > 0 && (dword_A8F244 || (dword_A8F244 = (int)SearchMIXFile(aInfshdwShp, 0)) != 0) ) /*0x51950b*/
        {
          v56 = *(_DWORD *)(v17 + 160); /*0x51950f*/
          v57 = *(_DWORD *)(v17 + 164); /*0x519512*/
          v73 = *(_DWORD *)(v17 + 156); /*0x519517*/
          v74 = v56; /*0x51951b*/
          v58 = ZCoordToScreenY(v53); /*0x51951f*/
          v69.m_Size = v72 - *(char *)(v17 + 1716) + v58; /*0x51953b*/
          v69.m_Position = ptr_0; /*0x51954e*/
          v59 = ZCoordToScreenY(v57 - v53); /*0x519552*/
          DrawToSurfaceSHP( /*0x519585*/
            (int)g_DSurface_Hidden_2,
            (int)dword_87F6C4,
            dword_A8F244,
            1u,
            &v69.m_Position,
            a2,
            9729,
            0,
            -5 - v59,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
        }
        v69.m_Size = v72 - *(char *)(v17 + 1716); /*0x5195ab*/
        v64 = dword_825500; /*0x5195b8*/
        v62 = a2; /*0x5195ca*/
        v69.m_Position = ptr_0; /*0x5195cb*/
        v60 = *(InfantryClass **)v17; /*0x5195cf*/
        v61 = CalculateLocomotionFrameIndex((TechnoClass *)v17); /*0x5195d5*/
        ((void (__thiscall *)(int, int, int, int *, int *, _DWORD, int, int, int, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v60->shouldLoseTarget)( /*0x5195e2*/
          v17,
          v69.StreamClass_field_0C,
          v61,
          &v69.m_Position,
          v62,
          0,
          256,
          v64,
          2,
          0,
          v52,
          v68,
          0,
          0,
          0,
          0,
          0);
        goto LABEL_53; /*0x5195e2*/
      }
      m_Position = (CellClass *)v69.m_Position; /*0x5194c0*/
    }
    if ( (m_Position->flags & 0x800) != 0 /*0x5194df*/
      || (*((_DWORD *)Cell::GetNeighbourContent((Cell *)m_Position, 6u) + 80) & 0x100) == 0 )
    {
      goto LABEL_48; /*0x5194df*/
    }
    goto LABEL_47; /*0x5194df*/
  }
  if ( *(_DWORD *)v69.__pad_0 ) /*0x5192a9*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v69.__pad_0 + 8))(*(_DWORD *)v69.__pad_0); /*0x5192b2*/
}



// ==== 0x00519630  InfantryClass::RepairBridge  this=InfantryClass  sig=csp ====
void __thiscall InfantryClass::RepairBridge(InfantryClass *this, CellClass *p_Cell_field_0x0, double a3, int *a4)
{
  CellClass *v4; // edi
  double v5; // st7
  Cell *location; // ebp
  int Type; // eax
  int movementDestination; // ecx
  BuildingClass *v10; // edi
  int ptr_0; // ebx
  int v12; // eax
  TeamClass *attachedTag; // ecx
  BuildingClass *v14; // eax
  BuildingClass *v15; // ebx
  TeamClass *v16; // ecx
  int v17; // edx
  int v18; // edi
  unsigned int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int v24; // edi
  unsigned int v25; // eax
  int v26; // eax
  TeamClass *v27; // ecx
  _DWORD *v28; // eax
  _BYTE *v31; // ecx
  ObjectClass *v32; // edi
  _WORD *v33; // ebx
  _WORD *v34; // eax
  TeamClass *v35; // ecx
  int v36; // edx
  TechnoClass *v37; // ecx
  TeamClass *v38; // ecx
  int *v39; // eax
  int v40; // ecx
  int v41; // ebx
  int v42; // eax
  int v43; // edi
  int v44; // ebx
  _WORD *v45; // eax
  BuildingClass *v46; // eax
  BuildingClass *v47; // edi
  TeamClass *v48; // ecx
  int v49; // eax
  __int64 v50; // rax
  int v51; // ebx
  _WORD *v52; // eax
  int v53; // ebp
  _WORD *v54; // eax
  int v55; // eax
  __int16 *v56; // eax
  int v57; // eax
  int i; // ebx
  char v59; // bl
  int v64; // eax
  CellClass *v65; // edx
  int v66; // eax
  int v70; // eax
  TeamClass *v71; // ecx
  TechnoClass *v72; // ecx
  int v73; // eax
  int v74; // ebx
  int v75; // eax
  CellClass *v76; // eax
  CellClass *v77; // eax
  _DWORD *Building; // edi
  PlacementList *v79; // eax
  Cell *v80; // eax
  _DWORD *v81; // eax
  Cell *v82; // eax
  PlacementList *v83; // eax
  CellClass *v84; // eax
  int v85; // ecx
  _DWORD *v86; // ebx
  _DWORD *v87; // eax
  CellClass *v88; // ebp
  _DWORD *v89; // eax
  TeamClass *v90; // ecx
  Cell *v91; // eax
  int mindControlledBy; // eax
  _DWORD *v93; // eax
  int v94; // eax
  _WORD *v95; // ebx
  _WORD *v96; // eax
  int v97; // eax
  _DWORD *v98; // eax
  _DWORD *v99; // edi
  TeamClass *v100; // ecx
  int v101; // eax
  int v102; // ebx
  int v103; // eax
  int v105; // ebx
  int v106; // eax
  int v107; // edx
  int v108; // kr00_4
  double v109; // st7
  wchar_t *v111; // ebx
  int v112; // eax
  int v113; // edx
  int v114; // eax
  int v115; // ebx
  int v116; // eax
  _DWORD *v117; // eax
  int *v118; // ebx
  _DWORD *Value; // eax
  int v120; // edx
  unsigned int v121; // eax
  int v122; // edi
  int v123; // ecx
  int v124; // eax
  int v125; // eax
  int v126; // edx
  int v127; // ecx
  _DWORD *v128; // eax
  int v129; // eax
  int lastSightRange; // ecx
  int v131; // ecx
  int v132; // edx
  int landType; // ebx
  int v134; // edx
  char v135; // [esp+0h] [ebp-54h]
  char v136; // [esp+0h] [ebp-54h]
  char v137; // [esp+0h] [ebp-54h]
  char v138; // [esp+0h] [ebp-54h]
  _DWORD *v139; // [esp+4h] [ebp-50h]
  int v140; // [esp+8h] [ebp-4Ch]
  _DWORD *v141; // [esp+Ch] [ebp-48h]
  Cell *v142; // [esp+18h] [ebp-3Ch]
  int v143; // [esp+18h] [ebp-3Ch]
  int v144; // [esp+1Ch] [ebp-38h]
  int v145; // [esp+20h] [ebp-34h]
  __int16 v146[2]; // [esp+24h] [ebp-30h] BYREF
  __int16 v147[2]; // [esp+28h] [ebp-2Ch] BYREF
  int v148; // [esp+2Ch] [ebp-28h] BYREF
  double v149; // [esp+30h] [ebp-24h] BYREF
  int v150; // [esp+38h] [ebp-1Ch]
  int Cell_field_0x0; // [esp+3Ch] [ebp-18h] BYREF
  int Cell_field_0x4; // [esp+40h] [ebp-14h]
  int Cell_field_0x8; // [esp+44h] [ebp-10h]
  int v154; // [esp+48h] [ebp-Ch] BYREF
  int v155; // [esp+4Ch] [ebp-8h]
  int v156; // [esp+50h] [ebp-4h]

  location = (Cell *)this->location; /*0x519639*/
  Cell_field_0x0 = this->location[0]; /*0x519643*/
  Cell_field_0x4 = this->location[1]; /*0x519654*/
  Cell_field_0x8 = this->location[2]; /*0x51965b*/
  v142 = (Cell *)Coord::To_Cell((Coord *)&dword_87F7E8, &Cell_field_0x0); /*0x519664*/
  if ( p_Cell_field_0x0 != (CellClass *)2 ) /*0x51966f*/
  {
LABEL_216:
    if ( this->isAliveFlag[0] ) /*0x51a9eb*/
      FootClass::UpdateAI((FootClass *)p_Cell_field_0x0, (int)location, (int)v4, v5, (int)v139); /*0x51a9fc*/
    return; /*0x51a9fc*/
  }
  if ( (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) == 8 ) /*0x519682*/
  {
    Type = this->Type; /*0x519688*/
    if ( *(_BYTE *)(Type + 3765) || *(_BYTE *)(Type + 3764) ) /*0x519698*/
    {
      movementDestination = this->movementDestination; /*0x5196a6*/
      if ( movementDestination ) /*0x5196ae*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)movementDestination + 44))(movementDestination) == 6 ) /*0x5196bc*/
        {
          v10 = (BuildingClass *)this->movementDestination; /*0x5196c2*/
          if ( v10 == (BuildingClass *)Cell::IsBridge(v142) ) /*0x5196cf*/
          {
            if ( (unsigned __int8)BuildingClass::CanRepair(v10, (int)this) ) /*0x5196d4*/
            {
              attachedTag = (TeamClass *)v10->attachedTag; /*0x519710*/
              if ( attachedTag ) /*0x519715*/
                TeamClass::Update_0(attachedTag, 1, (int)this, dword_A8F1E0, 0, 0); /*0x519725*/
              TechnoClass::GarrisonBuilding(this, v10); /*0x51972d*/
            }
            else
            {
              (*(void (__thiscall **)(InfantryClass *, _DWORD, int))(this->ptr_0 + 1152))(this, 0, 1); /*0x5196e5*/
              ptr_0 = this->ptr_0; /*0x5196ed*/
              v12 = (*(int (__thiscall **)(BuildingClass *, int *, int, int))(v10->ptr_0 + 72))(v10, &v154, 1, 1); /*0x5196fa*/
              (*(void (__thiscall **)(InfantryClass *, int))(ptr_0 + 372))(this, v12); /*0x519700*/
            }
            return; /*0x51970d*/
          }
        }
      }
    }
  }
  if ( (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) == 9 ) /*0x519749*/
  {
    v14 = (BuildingClass *)Cell::IsBridge(v142); /*0x519753*/
    v15 = v14; /*0x519758*/
    if ( v14 ) /*0x51975c*/
    {
      if ( v14 == (BuildingClass *)this->movementDestination || v14 == (BuildingClass *)this->target ) /*0x519770*/
      {
        v16 = (TeamClass *)v14->attachedTag; /*0x519776*/
        if ( v16 ) /*0x51977b*/
          TeamClass::Update_0(v16, 1, (int)this, dword_A8F1E0, 0, 0); /*0x51978b*/
        if ( *(int *)((*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 132))(this) + 1228) > 0 /*0x5197af*/
          && (unsigned __int8)House::IsHumanPlayer((House *)this->owner) )
        {
          Cell_field_0x0 = location->Cell_field_0x0; /*0x5197bc*/
          v17 = this->ptr_0; /*0x5197c0*/
          Cell_field_0x4 = location->Cell_field_0x4; /*0x5197c5*/
          Cell_field_0x8 = location->Cell_field_0x8; /*0x5197cc*/
          v18 = (*(int (__thiscall **)(InfantryClass *))(v17 + 132))(this) + 1212; /*0x5197df*/
          v19 = (unsigned int)Random::State(&Randomizer_Global) % *(_DWORD *)(v18 + 16); /*0x5197f0*/
          v20 = *(_DWORD *)(v18 + 4); /*0x5197f3*/
          p_Cell_field_0x0 = (CellClass *)&Cell_field_0x0; /*0x5197f6*/
          StartAudioControllerAt(*(_DWORD *)(v20 + 4 * v19), &Cell_field_0x0, 0); /*0x519803*/
        }
        if ( *(int *)((*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 132))(this) + 1312) > 0 ) /*0x51981f*/
        {
          v21 = location->Cell_field_0x0; /*0x519824*/
          v22 = location->Cell_field_0x8; /*0x519827*/
          Cell_field_0x4 = location->Cell_field_0x4; /*0x51982a*/
          v23 = this->ptr_0; /*0x51982e*/
          Cell_field_0x0 = v21; /*0x519830*/
          Cell_field_0x8 = v22; /*0x519836*/
          v24 = (*(int (__thiscall **)(InfantryClass *))(v23 + 132))(this) + 1296; /*0x519847*/
          v25 = Random::State(&Randomizer_Global); /*0x51984d*/
          StartAudioControllerAt( /*0x519865*/
            *(_DWORD *)(*(_DWORD *)(v24 + 4) + 4 * (v25 % *(_DWORD *)(v24 + 16))),
            &Cell_field_0x0,
            0);
        }
        v26 = (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 700))(this); /*0x51986e*/
        HouseClass::AddPower((HouseClass *)v15->owner, v26); /*0x51987b*/
        v27 = (TeamClass *)this->attachedTag; /*0x519880*/
        if ( v27 ) /*0x519885*/
          TeamClass::Update_0(v27, 48, (int)this, dword_A8F1E0, 0, 0); /*0x519894*/
        if ( *(_BYTE *)(v15->Type + 5805) ) /*0x51989f*/
        {
          v28 = (_DWORD *)(*(int (__thiscall **)(InfantryClass *, int *))(this->ptr_0 + 72))(this, &v154); /*0x5198b8*/
          StartAudioControllerAt(*(_DWORD *)&dword_8871E0->__pad_240[40], v28, 0); /*0x5198c9*/
          if ( v15->Anims[3] ) /*0x5198ce*/
          {
            BuildingClass::ClearAnims(v15, 3); /*0x5198e0*/
            BuildingClass::GetHealthRatio(v15); /*0x5198e7*/
            _EDX = dword_8871E0; /*0x5198ec*/
            __asm /*0x5198f2*/
            {
              fcomp qword ptr [edx+1700h]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x5198fd*/
              BuildingClass::PlayUpgradeAnim(v15, 10, 1, 0, 0); /*0x51990d*/
            else
              BuildingClass::PlayUpgradeAnim(v15, 10, 0, 0, 0); /*0x51992f*/
            (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 248))(this); /*0x519916*/
            return; /*0x519923*/
          }
        }
LABEL_114:
        (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 248))(this); /*0x51a02a*/
        return; /*0x51a03b*/
      }
    }
  }
  if ( (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) == 8 /*0x519973*/
    || (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) == 11
    || (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) == 25 )
  {
    v31 = (_BYTE *)this->movementDestination; /*0x519979*/
    if ( v31 ) /*0x519981*/
    {
      if ( (v31[20] & 1) != 0 ) /*0x519990*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v31 + 128))(v31) ) /*0x519998*/
        {
          v32 = (ObjectClass *)this->movementDestination; /*0x5199a6*/
          if ( v32 ) /*0x5199ae*/
          {
            if ( (*(int (__thiscall **)(int))(v32->ptr_0 + 44))(this->movementDestination) == 6 ) /*0x5199be*/
            {
              v33 = (_WORD *)(*(int (__thiscall **)(ObjectClass *, __int16 *))(v32->ptr_0 + 440))(v32, v147); /*0x5199d5*/
              v34 = (_WORD *)(*(int (__thiscall **)(InfantryClass *, __int16 *))(this->ptr_0 + 440))(this, v146); /*0x5199de*/
              if ( *v34 == *v33 && v34[1] == v33[1] ) /*0x5199f8*/
              {
                v35 = (TeamClass *)v32->attachedTag; /*0x5199fa*/
                if ( v35 ) /*0x5199ff*/
                  TeamClass::Update_0(v35, 1, (int)this, dword_A8F1E0, 0, 0); /*0x519a0e*/
                (*(void (__thiscall **)(ObjectClass *, _DWORD))(v32->ptr_0 + 220))(v32, 0); /*0x519a19*/
                (*(void (__thiscall **)(ObjectClass *, int, int))(v32->ptr_0 + 980))(v32, this->owner, 1); /*0x519a2c*/
                v36 = v32->ptr_0; /*0x519a40*/
                v32[4].parachute = *(_DWORD *)(this->Type + 3576); /*0x519a42*/
                (*(void (__thiscall **)(ObjectClass *))(v36 + 736))(v32); /*0x519a48*/
                v37 = (TechnoClass *)this->attachedTag; /*0x519a4e*/
                if ( v37 && (unsigned __int8)TechnoClass::HasAnyMission(v37) ) /*0x519a55*/
                  ObjectClass::SetReference(v32, this->attachedTag); /*0x519a64*/
                v38 = (TeamClass *)this->attachedTag; /*0x519a69*/
                if ( !v38 ) /*0x519a6e*/
                  goto LABEL_114; /*0x519a6e*/
                goto LABEL_113; /*0x519a6e*/
              }
              if ( !this->locomotor ) /*0x519a79*/
                WinAPI::Wrapper(-2147467261); /*0x519a88*/
              v39 = (int *)(*(int (__stdcall **)(int, int *))(*(_DWORD *)this->locomotor + 20))(this->locomotor, &v154); /*0x519a9b*/
              v40 = *v39; /*0x519a9e*/
              v41 = v39[1]; /*0x519aa6*/
              v42 = v39[2]; /*0x519aa9*/
              if ( v40 == dword_A8F200 && v41 == dword_A8F204 && v42 == dword_A8F208 /*0x519af8*/
                || (v43 = v40 / 256,
                    v44 = v41 / 256,
                    v45 = (_WORD *)(*(int (__thiscall **)(InfantryClass *, __int16 *))(this->ptr_0 + 440))(this, v147),
                    *v45 == (_WORD)v43)
                && v45[1] == (_WORD)v44 )
              {
                (*(void (__thiscall **)(InfantryClass *, int, int))(this->ptr_0 + 1152))( /*0x519b07*/
                  this,
                  this->movementDestination,
                  1);
                return; /*0x519b14*/
              }
            }
          }
        }
      }
    }
    v46 = (BuildingClass *)Cell::IsBridge(v142); /*0x519b1b*/
    v47 = v46; /*0x519b20*/
    if ( v46 && (v46 == (BuildingClass *)this->movementDestination || v46 == (BuildingClass *)this->target) ) /*0x519b38*/
    {
      v48 = (TeamClass *)v46->attachedTag; /*0x519b3e*/
      if ( v48 ) /*0x519b43*/
        TeamClass::Update_0(v48, 1, (int)this, dword_A8F1E0, 0, 0); /*0x519b53*/
      v49 = this->Type; /*0x519b58*/
      if ( *(_BYTE *)(v49 + 3779) ) /*0x519b5e*/
      {
        if ( (*(int (__thiscall **)(BuildingClass *))(v47->ptr_0 + 44))(v47) == 6 && *(_BYTE *)(v47->Type + 5814) ) /*0x519b82*/
        {
          if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) ) /*0x519b96*/
          {
            v50 = ((__int64 (__thiscall *)(InfantryClass *, CellClass **))*(_DWORD *)(this->ptr_0 + 440))( /*0x519ba8*/
                    this,
                    &p_Cell_field_0x0);
            if ( (unsigned __int8)CreateTriggerClassIfFarEnough(14, SHIDWORD(v50), *(_DWORD *)v50) ) /*0x519bb6*/
              VoxClass::FindAndPlay(&stru_825538, -1); /*0x519bc9*/
          }
          if ( *(_DWORD *)&dword_8871E0->__pad_240[8] != -1 ) /*0x519bda*/
          {
            Cell_field_0x0 = v47->location[0]; /*0x519be6*/
            Cell_field_0x4 = v47->location[1]; /*0x519bed*/
            Cell_field_0x8 = v47->location[2]; /*0x519bf4*/
            StartAudioControllerAt(*(_DWORD *)&dword_8871E0->__pad_240[8], &Cell_field_0x0, 0); /*0x519c02*/
          }
          LOBYTE(p_Cell_field_0x0) = 0; /*0x519c07*/
          v143 = -2; /*0x519c0c*/
          do /*0x519cd3*/
          {
            v51 = -2; /*0x519c14*/
            do /*0x519cc1*/
            {
              v52 = (_WORD *)(*(int (__thiscall **)(InfantryClass *, int *))(this->ptr_0 + 440))(this, &v148); /*0x519c22*/
              LOWORD(v144) = *v52 + v51; /*0x519c37*/
              HIWORD(v144) = v143 + v52[1]; /*0x519c40*/
              *(_DWORD *)v146 = v144; /*0x519c49*/
              v53 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v146) + 14); /*0x519c58*/
              v54 = (_WORD *)(*(int (__thiscall **)(InfantryClass *, double *))(this->ptr_0 + 440))(this, &v149); /*0x519c64*/
              LOWORD(v145) = v51 + *v54; /*0x519c79*/
              HIWORD(v145) = v143 + v54[1]; /*0x519c82*/
              *(_DWORD *)v147 = v145; /*0x519c8b*/
              v55 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v147) + 17); /*0x519ca0*/
              if ( v53 >= g_TerrainBridgeIndex && v53 < g_TerrainBridgeIndex + 16 || v55 >= 74 && v55 <= 101 ) /*0x519cb6*/
                LOBYTE(p_Cell_field_0x0) = 1; /*0x519cb8*/
              ++v51; /*0x519cbd*/
            }
            while ( v51 < 3 ); /*0x519cc1*/
            ++v143; /*0x519ccf*/
          }
          while ( v143 < 3 ); /*0x519cd3*/
          if ( (_BYTE)p_Cell_field_0x0 ) /*0x519cdf*/
          {
            v56 = (__int16 *)(*(int (__thiscall **)(InfantryClass *, CellClass **))(this->ptr_0 + 440))( /*0x519cea*/
                               this,
                               &p_Cell_field_0x0);
            Terrain::ProcessCellModification((Terrain *)&dword_87F7E8, v56); /*0x519cf6*/
          }
          else
          {
            v57 = (*(int (__thiscall **)(InfantryClass *, CellClass **))(this->ptr_0 + 440))(this, &p_Cell_field_0x0); /*0x519d06*/
            Terrain::RecursiveModify((Terrain *)&dword_87F7E8, v57); /*0x519d12*/
          }
          for ( i = dword_A83DF8 - 1; i >= 0; --i ) /*0x519d22*/
            (*(void (__thiscall **)(_DWORD, BuildingClass *, _DWORD))(**((_DWORD **)dword_A83DEC + i) + 40))( /*0x519d32*/
              *((_DWORD *)dword_A83DEC + i),
              v47,
              0);
          (*(void (__thiscall **)(BuildingClass *))(v47->ptr_0 + 736))(v47); /*0x519d3c*/
          goto LABEL_112; /*0x519d42*/
        }
        if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v47) /*0x519d74*/
          || *(_BYTE *)(*(_DWORD *)(v47->owner + 52) + 422) && *(_BYTE *)(v47->Type + 5499) )
        {
          if ( v47->health != *(_DWORD *)((*(int (__thiscall **)(BuildingClass *))(v47->ptr_0 + 132))(v47) + 160) ) /*0x519fb7*/
          {
            (*(void (__thiscall **)(BuildingClass *))(v47->ptr_0 + 1036))(v47); /*0x519ff0*/
            goto LABEL_112; /*0x519ff6*/
          }
        }
        else
        {
          v59 = 0; /*0x519d86*/
          if ( (*(int (__thiscall **)(BuildingClass *))(v47->ptr_0 + 44))(v47) == 6 ) /*0x519d8e*/
            v59 = *(_BYTE *)(v47->Type + 5490); /*0x519d96*/
          if ( *(_DWORD *)&dword_A8B238 ) /*0x519da3*/
          {
            if ( stru_A8B250.__pad_0[28] ) /*0x519db0*/
            {
              BuildingClass::GetHealthRatio(v47); /*0x519db8*/
              _EDX = dword_8871E0; /*0x519dbd*/
              __asm /*0x519dc3*/
              {
                fcomp qword ptr [edx+1708h]
                fnstsw ax
              }
              if ( (_AX & 0x4100) == 0 ) /*0x519dce*/
              {
                _EAX = (*(int (__thiscall **)(BuildingClass *))(v47->ptr_0 + 132))(v47); /*0x519dd8*/
                __asm { fild dword ptr [eax+0A0h] } /*0x519dde*/
                _ECX = dword_8871E0; /*0x519de4*/
                __asm /*0x519dea*/
                {
                  fmul qword ptr [ecx+1708h]
                  fmul ds:dbl_7E1738
                }
                LOWORD(v64) = Math::RoundToInt(v5); /*0x519df6*/
                v65 = (CellClass *)(v47->health - v64); /*0x519e00*/
                v66 = v47->ptr_0; /*0x519e02*/
                p_Cell_field_0x0 = v65; /*0x519e04*/
                __asm /*0x519e08*/
                {
                  fild [esp+50h+arg_0]
                  fstp qword ptr [esp+50h+var_24]
                }
                _EAX = (*(int (__thiscall **)(BuildingClass *))(v66 + 132))(v47); /*0x519e10*/
                _EBX = dword_8871E0; /*0x519e16*/
                __asm /*0x519e1c*/
                {
                  fild dword ptr [eax+0A0h]
                  fld qword ptr [ebx+1708h]
                  fmul ds:dbl_7E1738
                  fsubr ds:dbl_7E1718
                  fmul ds:dbl_7E1738
                  fmulp st(1), st
                  fcomp qword ptr [esp+50h+var_24]
                  fnstsw ax
                }
                if ( (_EAX & 0x100) != 0 ) /*0x519e45*/
                {
                  _EAX = (*(int (__thiscall **)(BuildingClass *))(v47->ptr_0 + 132))(v47); /*0x519e4b*/
                  _EBX = dword_8871E0; /*0x519e51*/
                  __asm /*0x519e57*/
                  {
                    fild dword ptr [eax+0A0h]
                    fld qword ptr [ebx+1708h]
                    fmul ds:dbl_7E1738
                    fsubr ds:dbl_7E1718
                    fmul ds:dbl_7E1738
                    fmulp st(1), st
                  }
                }
                else
                {
                  __asm { fld qword ptr [esp+50h+var_24] } /*0x519e79*/
                }
                LOWORD(v70) = Math::RoundToInt(v5); /*0x519e7d*/
                *(_DWORD *)v147 = v70; /*0x519e84*/
                (*(void (__thiscall **)(BuildingClass *, __int16 *, _DWORD, _DWORD, InfantryClass *, int, _DWORD, _DWORD))(v47->ptr_0 + 364))( /*0x519e9f*/
                  v47,
                  v147,
                  0,
                  *(_DWORD *)&_EBX->__pad_C3C[876],
                  this,
                  1,
                  0,
                  0);
                goto LABEL_112; /*0x519ea5*/
              }
            }
          }
          if ( !v59 ) /*0x519eac*/
            goto LABEL_112; /*0x519eac*/
          if ( v47->currentMission != 19 /*0x519ef2*/
            && !(*(unsigned __int8 (__thiscall **)(BuildingClass *))(v47->ptr_0 + 468))(v47) )
          {
            v71 = (TeamClass *)v47->attachedTag; /*0x519f2f*/
            if ( v71 ) /*0x519f34*/
              TeamClass::Update_0(v71, 1, (int)this, dword_A8F1E0, 0, 0); /*0x519f44*/
            *(_BYTE *)(v47->owner + 580) = 1; /*0x519f4f*/
            v72 = (TechnoClass *)this->attachedTag; /*0x519f56*/
            if ( v72 && (unsigned __int8)TechnoClass::HasAnyMission(v72) ) /*0x519f5d*/
              ObjectClass::SetReference(v47, this->attachedTag); /*0x519f6c*/
            (*(void (__thiscall **)(BuildingClass *, int, int))(v47->ptr_0 + 980))(v47, this->owner, 1); /*0x519f7e*/
            v73 = v47->ptr_0; /*0x519f8a*/
            v47->waveEffect = *(_DWORD *)(this->Type + 3576); /*0x519f94*/
            (*(void (__thiscall **)(BuildingClass *))(v73 + 736))(v47); /*0x519f9a*/
LABEL_112:
            v38 = (TeamClass *)this->attachedTag; /*0x51a010*/
            if ( !v38 ) /*0x51a015*/
              goto LABEL_114; /*0x51a015*/
LABEL_113:
            TeamClass::Update_0(v38, 48, (int)this, dword_A8F1E0, 0, 0); /*0x51a017*/
            goto LABEL_114; /*0x51a025*/
          }
        }
      }
      else if ( *(_BYTE *)(v49 + 3780) ) /*0x519ff8*/
      {
        BuildingClass::Infiltrate(v47, (void *)this->owner); /*0x51a00b*/
        goto LABEL_112; /*0x51a00b*/
      }
      (*(void (__thiscall **)(InfantryClass *, _DWORD, int))(this->ptr_0 + 1152))(this, 0, 1); /*0x519fc1*/
      v74 = this->ptr_0; /*0x519fc9*/
      v75 = (*(int (__thiscall **)(BuildingClass *, int *, int, int))(v47->ptr_0 + 72))(v47, &v154, 1, 1); /*0x519fd6*/
      (*(void (__thiscall **)(InfantryClass *, int))(v74 + 372))(this, v75); /*0x519fdc*/
      return; /*0x519fe9*/
    }
    if ( !this->movementDestination ) /*0x51a071*/
    {
      if ( this->currentMission != 11 ) /*0x51a082*/
        (*(void (__thiscall **)(InfantryClass *, _DWORD, int))(this->ptr_0 + 1156))(this, 0, 1); /*0x51a08c*/
      v149 = *(double *)&location->Cell_field_0x0; /*0x51a095*/
      v150 = location->Cell_field_0x8; /*0x51a0ad*/
      v76 = Coord::To_Cell((Coord *)&dword_87F7E8, &v149); /*0x51a0b1*/
      if ( Cell::IsBridge((Cell *)v76) ) /*0x51a0b8*/
        (*(void (__thiscall **)(InfantryClass *, int *, int, _DWORD))(this->ptr_0 + 372))(this, &dword_A8F200, 1, 0); /*0x51a0ce*/
    }
  }
  if ( *(_BYTE *)(this->Type + 3782) ) /*0x51a0da*/
  {
    v135 = this->onBridge[0]; /*0x51a0ec*/
    v77 = (CellClass *)(*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 444))(this); /*0x51a0ef*/
    Building = CellClass::FindBuilding(v77, v135); /*0x51a0fc*/
    if ( !Building ) /*0x51a100*/
    {
      v136 = this->onBridge[0]; /*0x51a10e*/
      v79 = (PlacementList *)(*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 444))(this); /*0x51a111*/
      Building = PlacementList::FindByType(v79, v136); /*0x51a11e*/
      if ( !Building ) /*0x51a122*/
      {
        v80 = (Cell *)(*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 444))(this); /*0x51a128*/
        v81 = Cell::IsBridge(v80); /*0x51a130*/
LABEL_128:
        Building = v81; /*0x51a184*/
      }
    }
  }
  else
  {
    v82 = (Cell *)(*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 444))(this); /*0x51a13b*/
    Building = Cell::IsBridge(v82); /*0x51a148*/
    if ( !Building ) /*0x51a14c*/
    {
      v137 = this->onBridge[0]; /*0x51a156*/
      v83 = (PlacementList *)(*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 444))(this); /*0x51a159*/
      Building = PlacementList::FindByType(v83, v137); /*0x51a166*/
      if ( !Building ) /*0x51a16a*/
      {
        v138 = this->onBridge[0]; /*0x51a174*/
        v84 = (CellClass *)(*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 444))(this); /*0x51a177*/
        v81 = CellClass::FindBuilding(v84, v138); /*0x51a17f*/
        goto LABEL_128; /*0x51a17f*/
      }
    }
  }
  v85 = this->movementDestination; /*0x51a186*/
  v86 = 0; /*0x51a18c*/
  if ( v85 && (*(int (__thiscall **)(int))(*(_DWORD *)v85 + 44))(v85) == 11 ) /*0x51a19e*/
  {
    v87 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->movementDestination + 72))( /*0x51a1ad*/
                      this->movementDestination,
                      &v154);
    v88 = Coord::To_Cell((Coord *)&dword_87F7E8, v87); /*0x51a1c1*/
    if ( *(_BYTE *)(this->Type + 3782) ) /*0x51a1c3*/
    {
      v86 = CellClass::FindBuilding(v88, 1); /*0x51a1d6*/
      if ( !v86 ) /*0x51a1da*/
      {
        v86 = PlacementList::FindByType((PlacementList *)v88, 1); /*0x51a1e5*/
        if ( !v86 ) /*0x51a1e9*/
        {
          v89 = Cell::IsBridge((Cell *)v88); /*0x51a1ed*/
LABEL_138:
          v86 = v89; /*0x51a219*/
        }
      }
    }
    else
    {
      v86 = Cell::IsBridge((Cell *)v88); /*0x51a1fb*/
      if ( !v86 ) /*0x51a1ff*/
      {
        v86 = PlacementList::FindByType((PlacementList *)v88, 1); /*0x51a20a*/
        if ( !v86 ) /*0x51a20e*/
        {
          v89 = CellClass::FindBuilding(v88, 1); /*0x51a214*/
          goto LABEL_138; /*0x51a214*/
        }
      }
    }
  }
  if ( (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) == 7 /*0x51a252*/
    && Building
    && ((_DWORD *)this->movementDestination == Building || (_DWORD *)this->target == Building || v86 && Building == v86) )
  {
    v90 = (TeamClass *)Building[13]; /*0x51a258*/
    if ( v90 ) /*0x51a25d*/
      TeamClass::Update_0(v90, 1, (int)this, dword_A8F1E0, 0, 0); /*0x51a26a*/
    if ( (*(int (__thiscall **)(_DWORD *))(*Building + 44))(Building) == 6 ) /*0x51a279*/
    {
      v91 = (Cell *)(*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 444))(this); /*0x51a283*/
      if ( Building == Cell::IsBridge(v91) /*0x51a2a7*/
        && (*(int (__thiscall **)(InfantryClass *, int))(this->ptr_0 + 628))(this, 21) == 1 )
      {
        this->missionData = 0; /*0x51a2b0*/
        TechnoClass::SetMember81(this, 0); /*0x51a2b6*/
        TechnoClass::SetSpread(this, 0); /*0x51a2be*/
        mindControlledBy = this->mindControlledBy; /*0x51a2c3*/
        if ( mindControlledBy && *(_DWORD *)(mindControlledBy + 700) ) /*0x51a2cd*/
          CaptureManagerClass::FreeUnit((CaptureManagerClass *)this, (int)v86, 0, v139, v140, v141); /*0x51a2da*/
        if ( *(_BYTE *)(Building[328] + 5807) ) /*0x51a2e5*/
        {
          v93 = (_DWORD *)(*(int (__thiscall **)(InfantryClass *, int *))(this->ptr_0 + 72))(this, &v154); /*0x51a2f9*/
          StartAudioControllerAt(*(_DWORD *)&dword_8871E0->__pad_240[48], v93, 0); /*0x51a30a*/
          this->isAbsorbed[0] = 1; /*0x51a30f*/
        }
        (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 212))(this); /*0x51a31a*/
        if ( InfantryClass::updateDeployAnimation((InfantryClass *)Building) && this->isCountedAsOwned_special[0] ) /*0x51a32b*/
        {
          --*(_DWORD *)(this->owner + 756); /*0x51a342*/
          this->isCountedAsOwned_special[0] = 0; /*0x51a348*/
        }
        v94 = Building[328]; /*0x51a34f*/
        if ( *(_BYTE *)(v94 + 5807) ) /*0x51a355*/
        {
          if ( *(int *)(v94 + 3816) > 0 ) /*0x51a374*/
            *(_BYTE *)(Building[135] + 22392) = 1; /*0x51a37c*/
        }
        else
        {
          (*(void (__thiscall **)(InfantryClass *, int, _DWORD *))(this->ptr_0 + 632))(this, 2, Building); /*0x51a366*/
        }
        CellClass::AddObject((CellClass *)(Building + 69), this); /*0x51a38a*/
        FootClass::ClearPathIndex(this); /*0x51a391*/
        return; /*0x51a39d*/
      }
    }
    else
    {
      v95 = (_WORD *)(*(int (__thiscall **)(_DWORD *, double *))(*Building + 440))(Building, &v149); /*0x51a3b1*/
      v96 = (_WORD *)(*(int (__thiscall **)(InfantryClass *, int *))(this->ptr_0 + 440))(this, &v148); /*0x51a3ba*/
      if ( *v96 == *v95 && v96[1] == v95[1] && Building == (_DWORD *)this->movementDestination ) /*0x51a3e0*/
      {
        if ( (*(int (__thiscall **)(InfantryClass *, int, _DWORD *))(this->ptr_0 + 632))(this, 15, Building) == 1 ) /*0x51a3f6*/
        {
          TechnoClass::SetFocus(this, 0); /*0x51a3ff*/
          this->onBridge[0] = 0; /*0x51a407*/
          this->missionData = 0; /*0x51a40e*/
          TechnoClass::SetMember81(this, 0); /*0x51a414*/
          TechnoClass::SetSpread(this, 0); /*0x51a41c*/
          v97 = this->mindControlledBy; /*0x51a421*/
          if ( v97 && *(_DWORD *)(v97 + 700) ) /*0x51a42b*/
            CaptureManagerClass::FreeUnit((CaptureManagerClass *)this, (int)v95, 0, v139, v140, v141); /*0x51a438*/
          (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 212))(this); /*0x51a441*/
          if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*Building + 132))(Building) + 1508) ) /*0x51a451*/
            TechnoClass::EnteredOpenTopped((int)this); /*0x51a45e*/
          this->transporter = (int)Building; /*0x51a463*/
          (*(void (__thiscall **)(_DWORD *, InfantryClass *))(*Building + 916))(Building, this); /*0x51a46e*/
          (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 284))(this); /*0x51a478*/
        }
        else
        {
          (*(void (__thiscall **)(InfantryClass *, _DWORD, int))(this->ptr_0 + 1152))(this, 0, 1); /*0x51a48f*/
          (*(void (__thiscall **)(InfantryClass *, int, _DWORD))(this->ptr_0 + 488))(this, 5, 0); /*0x51a49c*/
          (*(void (__thiscall **)(InfantryClass *, int *, int, int))(this->ptr_0 + 372))(this, &dword_A8F200, 1, 1); /*0x51a4af*/
        }
        return; /*0x51a485*/
      }
    }
  }
  if ( (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) != 17 || !*(_BYTE *)(this->Type + 3778) ) /*0x51a4d8*/
  {
    location = v142; /*0x51a7f4*/
LABEL_193:
    if ( this->isTether[0] ) /*0x51a7f8*/
    {
      (*(void (__thiscall **)(InfantryClass *, int))(this->ptr_0 + 628))(this, 8); /*0x51a80c*/
      v129 = this->Type; /*0x51a812*/
      if ( *(int *)(v129 + 3736) > 1 ) /*0x51a81f*/
      {
        v154 = this->location[0]; /*0x51a82b*/
        v155 = this->location[1]; /*0x51a832*/
        v156 = this->location[2]; /*0x51a83d*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)(v129 + 3724) + 4), &v154, 0); /*0x51a84a*/
      }
      if ( this->onBridge[0] ) /*0x51a84f*/
      {
        if ( (location->__pad_11F[9] & 0x1C) == 0x1C ) /*0x51a865*/
          Cell::ApplyDamage(location, (int)&dword_A8F200, 1, 1, 1); /*0x51a869*/
      }
      else if ( (location->__pad_11F[5] & 0x1C) == 0x1C ) /*0x51a877*/
      {
        Cell::ApplyDamage(location, (int)&dword_A8F200, 1, 1, 0); /*0x51a886*/
      }
    }
    if ( this->queuedMission == -1 /*0x51a8aa*/
      && !this->movementDestination
      && !this->target
      && !(unsigned __int8)Team::AllMembersValid((Team *)this) )
    {
      (*(void (__thiscall **)(InfantryClass *, _DWORD, int))(this->ptr_0 + 1156))(this, 0, 1); /*0x51a8bb*/
    }
    (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 492))(this); /*0x51a8c5*/
    (*(void (__thiscall **)(InfantryClass *, _DWORD, _DWORD, _DWORD, _DWORD))(this->ptr_0 + 1164))(this, 0, 0, 0, 0); /*0x51a8d7*/
    (*(void (__thiscall **)(InfantryClass *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(this->ptr_0 + 1160))( /*0x51a8eb*/
      this,
      0,
      0,
      0,
      0,
      0);
    v154 = this->location[0]; /*0x51a8fd*/
    lastSightRange = this->lastSightRange; /*0x51a901*/
    v155 = this->location[1]; /*0x51a90d*/
    v156 = this->location[2]; /*0x51a921*/
    MapClass::RevealArea2((MapClass *)&dword_87F7E8, &v154, 0, lastSightRange + 3, 0); /*0x51a925*/
    v131 = this->location[1]; /*0x51a92c*/
    v132 = this->location[2]; /*0x51a92f*/
    v154 = this->location[0]; /*0x51a932*/
    v155 = v131; /*0x51a93a*/
    v156 = v132; /*0x51a944*/
    v4 = Coord::To_Cell((Coord *)&dword_87F7E8, &v154); /*0x51a94d*/
    landType = v4->landType; /*0x51a957*/
    if ( !this->locomotor ) /*0x51a94f*/
      WinAPI::Wrapper(-2147467261); /*0x51a964*/
    if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->locomotor + 16))(this->locomotor) /*0x51a9b3*/
      && !*(_BYTE *)(this->Type + 3778)
      && !(unsigned __int8)TechnoTypeClass::HasVoiceResponse(&this->ptr_0, 14)
      && (landType == 3 || landType == 2)
      && (!this->onBridge[0] || (v4->flags & 0x100) == 0) )
    {
      v134 = this->ptr_0; /*0x51a9b8*/
      p_Cell_field_0x0 = (CellClass *)this->health; /*0x51a9ba*/
      (*(void (__thiscall **)(InfantryClass *, CellClass **, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(v134 + 364))( /*0x51a9db*/
        this,
        &p_Cell_field_0x0,
        0,
        *(_DWORD *)&dword_8871E0->__pad_C3C[876],
        0,
        1,
        0,
        0);
      return; /*0x51a9e8*/
    }
    goto LABEL_216; /*0x51a9b3*/
  }
  location = v142; /*0x51a4e6*/
  v98 = Cell::IsBridge(v142); /*0x51a4ec*/
  v99 = v98; /*0x51a4f1*/
  if ( !v98 || v98 != (_DWORD *)this->movementDestination ) /*0x51a501*/
  {
    v117 = (_DWORD *)(*(int (__thiscall **)(InfantryClass *, int *))(this->ptr_0 + 72))(this, &v154); /*0x51a670*/
    if ( Coord::To_Cell((Coord *)&dword_87F7E8, v117) == (CellClass *)this->movementDestination ) /*0x51a684*/
    {
      v118 = this->location; /*0x51a68a*/
      v149 = *(double *)this->location; /*0x51a698*/
      v150 = this->location[2]; /*0x51a6ab*/
      PlaySoundEffectAt(&v149, dword_8871E0->TiberiumLongScan, this, *(_DWORD *)&dword_8871E0->__pad_C3C[876], 1, 0); /*0x51a6c1*/
      (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 1280))(this); /*0x51a6ca*/
      Value = ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v149); /*0x51a6db*/
      v120 = this->location[1]; /*0x51a6ef*/
      v121 = ((unsigned int)((*Value >> 12) + 1) >> 1) & 7; /*0x51a6f2*/
      v122 = this->location[2]; /*0x51a6f7*/
      v123 = dword_89F6D8[2 * v121] + this->location[0]; /*0x51a6fc*/
      v124 = dword_89F6DC[2 * v121]; /*0x51a70a*/
      v154 = v123; /*0x51a70d*/
      v125 = v120 + v124; /*0x51a711*/
      v126 = this->ptr_0; /*0x51a713*/
      v155 = v125; /*0x51a715*/
      v156 = v122; /*0x51a720*/
      (*(void (__thiscall **)(InfantryClass *, int *, int, int))(v126 + 372))(this, &v154, 1, 1); /*0x51a724*/
      (*(void (__thiscall **)(InfantryClass *, int, _DWORD))(this->ptr_0 + 488))(this, 2, 0); /*0x51a732*/
      v127 = this->movementDestination; /*0x51a738*/
      if ( !v127 /*0x51a75e*/
        || (v128 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v127 + 72))(v127, &v154),
            Coord::To_Cell((Coord *)&dword_87F7E8, v128)->landType == 2) )
      {
        (*(void (__thiscall **)(InfantryClass *, int))(this->ptr_0 + 292))(this, 1); /*0x51a766*/
      }
      v154 = *v118; /*0x51a774*/
      v155 = this->location[1]; /*0x51a77b*/
      v156 = this->location[2]; /*0x51a787*/
      PlaySoundEffectAt(&v154, dword_8871E0->TiberiumLongScan, 0, *(_DWORD *)&dword_8871E0->__pad_C3C[876], 1, 0); /*0x51a79e*/
      v154 = *v118; /*0x51a7a7*/
      v155 = this->location[1]; /*0x51a7b5*/
      v156 = this->location[2]; /*0x51a7bc*/
      PlaySoundEffectAt(&v154, dword_8871E0->TiberiumLongScan, 0, *(_DWORD *)&dword_8871E0->__pad_C3C[876], 1, 0); /*0x51a7d3*/
      if ( !this->isAliveFlag[0] ) /*0x51a7e0*/
        return; /*0x51a7e0*/
      (*(void (__thiscall **)(InfantryClass *, int))(this->ptr_0 + 292))(this, 1); /*0x51a7ec*/
    }
    goto LABEL_193; /*0x51a7f2*/
  }
  v100 = (TeamClass *)v98[13]; /*0x51a507*/
  if ( v100 ) /*0x51a50c*/
    TeamClass::Update_0(v100, 1, (int)this, dword_A8F1E0, 0, 0); /*0x51a51c*/
  if ( (*(int (__thiscall **)(_DWORD *))(*v99 + 388))(v99) != 19 /*0x51a538*/
    && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v99 + 352))(v99) )
  {
    if ( *((_BYTE *)v99 + 1759) ) /*0x51a546*/
    {
      (*(void (__thiscall **)(InfantryClass *, _DWORD, int))(this->ptr_0 + 1152))(this, 0, 1); /*0x51a558*/
      v101 = (*(int (__thiscall **)(InfantryClass *, int))(this->ptr_0 + 792))(this, 1); /*0x51a564*/
      v102 = this->ptr_0; /*0x51a576*/
      this->diskLaserTimer[0] = (int)dword_A8ED84; /*0x51a57a*/
      this->diskLaserTimer[1] = v155; /*0x51a582*/
      this->diskLaserTimer[2] = v101; /*0x51a587*/
      v103 = (*(int (__thiscall **)(_DWORD *, int *, int, int))(*v99 + 72))(v99, &v154, 1, 1); /*0x51a591*/
      (*(void (__thiscall **)(InfantryClass *, int))(v102 + 372))(this, v103); /*0x51a597*/
      return; /*0x51a5a4*/
    }
    *((_BYTE *)v99 + 1759) = 1; /*0x51a5a7*/
    _ECX = dword_8871E0; /*0x51a5ae*/
    v105 = *v99; /*0x51a5b4*/
    __asm /*0x51a5b6*/
    {
      fld qword ptr [ecx+1750h]
      fmul ds:dbl_7E27F8
      fmul ds:dbl_7E1738
    }
    v108 = Math::RoundToInt(v5); /*0x51a5c8*/
    LOWORD(v107) = HIWORD(v108); /*0x51a5c8*/
    LOWORD(v106) = v108; /*0x51a5c8*/
    v109 = ((double (__fastcall *)(_DWORD *, int, int))*(_DWORD *)(v105 + 328))(v99, v107, v106); /*0x51a5d0*/
    _EDX = dword_8871E0; /*0x51a5d6*/
    v111 = dword_A8ED84; /*0x51a5dc*/
    __asm /*0x51a5e2*/
    {
      fld qword ptr [edx+1750h]
      fmul ds:dbl_7E27F8
    }
    LOWORD(v112) = Math::RoundToInt(v109); /*0x51a5ee*/
    v113 = v155; /*0x51a5f3*/
    v99[336] = this; /*0x51a5fd*/
    v99[330] = v111; /*0x51a603*/
    v99[331] = v113; /*0x51a605*/
    v99[332] = v112; /*0x51a608*/
  }
  FootClass::ClearPathIndex(this); /*0x51a60d*/
  (*(void (__thiscall **)(InfantryClass *, _DWORD))(this->ptr_0 + 1116))(this, 0); /*0x51a618*/
  v114 = (*(int (__thiscall **)(InfantryClass *, int))(this->ptr_0 + 792))(this, 1); /*0x51a624*/
  v115 = this->ptr_0; /*0x51a636*/
  this->diskLaserTimer[0] = (int)dword_A8ED84; /*0x51a63a*/
  this->diskLaserTimer[1] = v155; /*0x51a642*/
  this->diskLaserTimer[2] = v114; /*0x51a647*/
  v116 = (*(int (__thiscall **)(_DWORD *, int *, int, int))(*v99 + 72))(v99, &v154, 1, 1); /*0x51a651*/
  (*(void (__thiscall **)(InfantryClass *, int))(v115 + 372))(this, v116); /*0x51a657*/
}


// ==== 0x0051AA10  InfantryClass::HandleTargetDestroyed  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::HandleTargetDestroyed(InfantryClass *this, int *a2, int *a3)
{
  int result; // eax

  result = FootClass::HandleTargetDestroyed((FootClass *)this, a2, a3); /*0x51aa1e*/
  if ( (int *)this->Type == a2 ) /*0x51aa29*/
    this->Type = 0; /*0x51aa2b*/
  return result; /*0x51aa35*/
}



// ==== 0x0051AA40  InfantryClass::AssignDestination_SyncLog  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::AssignDestination_SyncLog(InfantryClass *this, int *a2, int a3)
{
  House *v4; // eax
  int result; // eax
  AbstractClass *v6; // ebx
  _DWORD *v7; // eax
  int v8; // esi
  int (__thiscall **ptr_0)(AbstractClass *, int *); // edx
  _DWORD *v10; // eax
  FootClass *rockerLinkedUnit; // eax
  _DWORD *v12; // eax
  bool *v13; // eax
  InfantryTypeClass *Type; // eax
  Team *v15; // eax
  Team *v16; // esi
  TechnoClass *v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int *v24; // eax
  _DWORD *v25; // eax
  int (__thiscall **v26)(InfantryClass *, int *, _DWORD); // edx
  _DWORD *v27; // eax
  bool v28; // al
  int v29; // ebx
  bool v30; // zf
  int v31; // eax
  int *locomotor; // esi
  int v33; // eax
  int *v34; // eax
  int InstanceCOM; // eax
  int v36; // eax
  int *v37; // eax
  int v38; // eax
  int *v39; // esi
  int v40; // eax
  int *v41; // eax
  int v42; // [esp+44h] [ebp-58h]
  bool CanDeployAtCell; // [esp+73h] [ebp-29h]
  ComPtr ppv; // [esp+74h] [ebp-28h] BYREF

  v4 = (House *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 15))(this); /*0x51aa4c*/
  if ( (unsigned __int8)House::IsCurrentPlayer(v4) ) /*0x51aa51*/
  {
    result = this->SequenceAnim[0]; /*0x51aa5a*/
    if ( result == 27 || result == 28 || result == 29 || result == 30 ) /*0x51aa7e*/
      return result; /*0x51aa7e*/
  }
  v6 = (AbstractClass *)a2; /*0x51aa8a*/
  if ( this->Type->? ) /*0x51aa90*/
  {
    if ( a2 ) /*0x51aaa0*/
    {
      v7 = (_DWORD *)(*((int (__thiscall **)(InfantryClass *, int *))this->FootClass + 18))( /*0x51aab0*/
                       this,
                       &ppv.ComPtr_field_0x0C);
      v8 = *(_DWORD *)CellStruct::Set((CellStruct *)&ppv.ComPtr_field_0x08, *v7 / 256, v7[1] / 256); /*0x51aadd*/
      ptr_0 = (int (__thiscall **)(AbstractClass *, int *))v6->ptr_0; /*0x51aadf*/
      *(_DWORD *)ppv.__pad_0 = v8; /*0x51aae8*/
      v10 = (_DWORD *)ptr_0[18](v6, &ppv.ComPtr_field_0x18); /*0x51aaec*/
      result = *(_DWORD *)CellStruct::Set((CellStruct *)&ppv.ComPtr_field_0x04, *v10 / 256, v10[1] / 256); /*0x51ab19*/
      ppv.ComPtr_field_0x04 = result; /*0x51ab1e*/
      if ( result == v8 ) /*0x51ab22*/
        return result; /*0x51ab22*/
    }
  }
  rockerLinkedUnit = this->?; /*0x51ab34*/
  if ( rockerLinkedUnit ) /*0x51ab3c*/
  {
    rockerLinkedUnit->? = 0; /*0x51ab3e*/
    this->? = 0; /*0x51ab44*/
  }
  if ( !this->?[0] ) /*0x51ab4a*/
    WinAPI::Wrapper(-2147467261); /*0x51ab57*/
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x51ab65*/
  {
    if ( v6 ) /*0x51ab71*/
    {
      v42 = this->Type->?[0]; /*0x51ab8e*/
      v12 = (_DWORD *)(*((int (__thiscall **)(InfantryClass *, int *))this->FootClass + 18))( /*0x51ab92*/
                        this,
                        &ppv.ComPtr_field_0x18);
      v13 = (bool *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v12); /*0x51ab9b*/
      if ( (unsigned __int8)Cell::IsBuildable(v13, v42, 1, 0, -1, 0, -1, 1) ) /*0x51aba2*/
      {
        if ( this->Type->? || this->? != 1 || this->? != v6 ) /*0x51abca*/
          (*((void (__thiscall **)(InfantryClass *))this->FootClass + 320))(this); /*0x51abd1*/
      }
    }
  }
  if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x51abdd*/
  {
    if ( v6 ) /*0x51abe8*/
    {
      if ( this->? == v6 ) /*0x51abf0*/
      {
        if ( this->Crawling ) /*0x51abf2*/
        {
          Type = this->Type; /*0x51abfc*/
          if ( !Type->Fraidycat && !Type->Cyborg ) /*0x51ac0c*/
            (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 7, 0, 0); /*0x51ac1f*/
        }
      }
    }
  }
  if ( (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) != 7 && this->? != 7 /*0x51ac44*/
    || (unsigned __int8)Team::AllMembersValid((Team *)this) )
  {
    this->?[0] = -1; /*0x51ad11*/
    goto LABEL_48; /*0x51ad11*/
  }
  v15 = (Team *)AbstractClass::IsTechnoType(v6); /*0x51ac53*/
  v16 = v15; /*0x51ac58*/
  if ( !v15 ) /*0x51ac5c*/
  {
LABEL_48:
    if ( v6 && this->Type->? ) /*0x51ad25*/
    {
      if ( !this->?[0] ) /*0x51ad33*/
        WinAPI::Wrapper(-2147467261); /*0x51ad42*/
      if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x51ad50*/
      {
        v19 = this->?[0]; /*0x51ad5b*/
        *(_DWORD *)ppv.__pad_0 = 0; /*0x51ad69*/
        if ( !v19 ) /*0x51ad71*/
          goto LABEL_58; /*0x51ad71*/
        v20 = StreamClass::Set2((StreamClass *)&ppv, this->?); /*0x51ad78*/
        if ( v20 < 0 && v20 != -2147467262 ) /*0x51ad86*/
          WinAPI::Wrapper(v20); /*0x51ad89*/
        if ( !*(_DWORD *)ppv.__pad_0 ) /*0x51ad94*/
LABEL_58:
          WinAPI::Wrapper(-2147467261); /*0x51ad9b*/
        (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)ppv.__pad_0 + 12))( /*0x51adac*/
          *(_DWORD *)ppv.__pad_0,
          &ppv.ComPtr_field_0x18);
        if ( !memcmp(&ppv.ComPtr_field_0x18, &g_CLSID_WalkLocomotion, 0x10u) ) /*0x51adbf*/
        {
          v21 = *(_DWORD *)&this->?[4]; /*0x51adc7*/
          if ( *(_DWORD *)&this->?[12] < v21 /*0x51adf8*/
            || (this->?[9] || !v21)
            && (v22 = *(_DWORD *)&this->?[16], v22 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->?[0] + 8))(this->?, v21 + v22, 0) )
          {
            v23 = *(_DWORD *)&this->?[12]; /*0x51adff*/
            if ( v23 ) /*0x51ae04*/
              memcpy((void *)(*(_DWORD *)this->? + 4), *(const void **)this->?, 4 * v23); /*0x51ae12*/
            **(_DWORD **)this->? = v6; /*0x51ae1d*/
            ++*(_DWORD *)&this->?[12]; /*0x51ae23*/
          }
          v24 = (int *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 113))(this); /*0x51ae2b*/
          v6 = (AbstractClass *)v24; /*0x51ae31*/
          a2 = v24; /*0x51ae35*/
          if ( v24 && (v24[80] & 0x100) != 0 ) /*0x51ae44*/
          {
            v6 = 0; /*0x51ae46*/
            a2 = 0; /*0x51ae48*/
          }
        }
        if ( *(_DWORD *)ppv.__pad_0 ) /*0x51ae52*/
          (*(void (__stdcall **)(_DWORD))(**(_DWORD **)ppv.__pad_0 + 8))(*(_DWORD *)ppv.__pad_0); /*0x51ae57*/
      }
    }
    goto LABEL_73; /*0x51ae57*/
  }
  if ( !(unsigned __int8)Team::AllMembersValid(v15) ) /*0x51ac6b*/
  {
    if ( (*((int (__thiscall **)(InfantryClass *, int, Team *))this->FootClass + 158))(this, 2, v16) == 1 ) /*0x51ace5*/
    {
      result = (*((int (__thiscall **)(InfantryClass *, int))this->FootClass + 157))(this, 14); /*0x51acee*/
      if ( result == 14 ) /*0x51acf7*/
        return result; /*0x51acf7*/
      if ( result != 1 ) /*0x51ad00*/
        (*((void (__thiscall **)(InfantryClass *, int))this->FootClass + 157))(this, 3); /*0x51ad09*/
    }
    goto LABEL_48; /*0x51ad0f*/
  }
  if ( (*(int (__thiscall **)(Team *))(*(_DWORD *)v16->__pad_0 + 44))(v16) != 1 )
  {
    if ( (*(int (__thiscall **)(Team *))(*(_DWORD *)v16->__pad_0 + 44))(v16) == 6 )
    {
      if ( !v6 ) /*0x51ac99*/
      {
        v17 = 0; /*0x51ac9b*/
        goto LABEL_41; /*0x51ac9d*/
      }
      v18 = (*((int (__thiscall **)(AbstractClass *))v6->ptr_0 + 11))(v6) - 6; /*0x51aca6*/
LABEL_40:
      v17 = v18 == 0 ? (TechnoClass *)v6 : 0;
      goto LABEL_41; /*0x51acaf*/
    }
    TechnoClass::SetFocus((TechnoClass *)this, (int)v6); /*0x51accd*/
    goto LABEL_48; /*0x51acd2*/
  }
  if ( v6 ) /*0x51ac7b*/
  {
    v18 = (*((int (__thiscall **)(AbstractClass *))v6->ptr_0 + 11))(v6) - 1; /*0x51ac88*/
    goto LABEL_40; /*0x51ac89*/
  }
  v17 = 0; /*0x51ac7d*/
LABEL_41:
  this->? = v17; /*0x51acb1*/
  TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x51acba*/
  v6 = 0; /*0x51acbf*/
  a2 = 0; /*0x51acc1*/
LABEL_73:
  if ( this->Type->? && v6 ) /*0x51ae72*/
  {
    if ( !this->?[0] ) /*0x51ae78*/
      WinAPI::Wrapper(-2147467261); /*0x51ae8d*/
    if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x51ae97*/
    {
      v25 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, int *))v6->ptr_0 + 18))(v6, &ppv.ComPtr_field_0x18); /*0x51aeab*/
      LOWORD(ppv.ComPtr_field_0x04) = *v25 / 256; /*0x51aebf*/
      v26 = (int (__thiscall **)(InfantryClass *, int *, _DWORD))this->FootClass; /*0x51aed0*/
      HIWORD(ppv.ComPtr_field_0x04) = v25[1] / 256; /*0x51aed6*/
      *(_DWORD *)ppv.__pad_0 = ppv.ComPtr_field_0x04; /*0x51aee3*/
      v27 = (_DWORD *)v26[19](this, &ppv.ComPtr_field_0x0C, 0); /*0x51aeea*/
      LOWORD(ppv.ComPtr_field_0x04) = *v27 / 256; /*0x51aefd*/
      HIWORD(ppv.ComPtr_field_0x04) = v27[1] / 256; /*0x51af15*/
      ppv.ComPtr_field_0x08 = ppv.ComPtr_field_0x04; /*0x51af22*/
      CanDeployAtCell = InfantryClass::CanDeployAtCell(this, (__int16 *)&ppv.ComPtr_field_0x08, (__int16 *)ppv.__pad_0); /*0x51af35*/
      if ( this->Type->? ) /*0x51af39*/
      {
        InfantryClass::updateOccupiedBuilding( /*0x51af4c*/
          (InfantryClass *)&ppv,
          (int (__stdcall ****)(_DWORD, void *, _DWORD *))this->?);
        if ( !*(_DWORD *)ppv.__pad_0 ) /*0x51af57*/
          WinAPI::Wrapper(-2147467261); /*0x51af5e*/
        (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)ppv.__pad_0 + 12))( /*0x51af6f*/
          *(_DWORD *)ppv.__pad_0,
          &ppv.ComPtr_field_0x18);
        v29 = memcmp((const char *)&ppv.ComPtr_field_0x18, g_CLSID_JumpjetLocomotion.Data2, 16); /*0x51af80*/
        ComPtr::Release_Alt(&ppv); /*0x51af8f*/
        v30 = v29 == 0; /*0x51af94*/
        v6 = (AbstractClass *)a2; /*0x51af96*/
        v28 = v30; /*0x51af9a*/
      }
      else
      {
        v28 = 0; /*0x51af43*/
      }
      if ( this->Type->? ) /*0x51afa5*/
        CanDeployAtCell = 1; /*0x51afaf*/
      if ( v28 ) /*0x51afba*/
      {
        if ( !CanDeployAtCell ) /*0x51afc2*/
        {
          v31 = this->?[0]; /*0x51afc8*/
          locomotor = this->?; /*0x51afce*/
          a2 = 0; /*0x51afd6*/
          if ( v31 ) /*0x51afda*/
          {
            v33 = StreamClass::Set((StreamClass *)&a2, this->?); /*0x51afe1*/
            if ( v33 < 0 && v33 != -2147467262 ) /*0x51afef*/
              WinAPI::Wrapper(v33); /*0x51aff2*/
            if ( a2 && (*(unsigned __int8 (__stdcall **)(int *))(*a2 + 28))(a2) ) /*0x51b002*/
            {
              if ( !a2 ) /*0x51b00f*/
                WinAPI::Wrapper(-2147467261); /*0x51b016*/
              if ( (*(unsigned __int8 (__stdcall **)(int *))(*a2 + 20))(a2) ) /*0x51b022*/
              {
                if ( *locomotor ) /*0x51b029*/
                  (*(void (__stdcall **)(int))(*(_DWORD *)*locomotor + 8))(*locomotor); /*0x51b032*/
                v34 = a2; /*0x51b035*/
                *locomotor = 0; /*0x51b039*/
                if ( !v34 ) /*0x51b03d*/
                  WinAPI::Wrapper(-2147467261); /*0x51b044*/
                (*(void (__stdcall **)(int *, int *))(*v34 + 16))(v34, this->?); /*0x51b051*/
              }
            }
          }
          *(_DWORD *)ppv.__pad_0 = 0; /*0x51b060*/
          InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)&g_CLSID_WalkLocomotion, 0, 7u); /*0x51b064*/
          if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x51b072*/
            WinAPI::Wrapper(InstanceCOM); /*0x51b075*/
          if ( !*(_DWORD *)ppv.__pad_0 ) /*0x51b080*/
            WinAPI::Wrapper(-2147467261); /*0x51b087*/
          (*(void (__stdcall **)(_DWORD, InfantryClass *))(**(_DWORD **)ppv.__pad_0 + 12))(*(_DWORD *)ppv.__pad_0, this); /*0x51b094*/
          ppv.ComPtr_field_0x04 = 0; /*0x51b09b*/
          if ( *(_DWORD *)ppv.__pad_0 ) /*0x51b0a1*/
          {
            v36 = StreamClass::Set((StreamClass *)&ppv.ComPtr_field_0x04, &ppv); /*0x51b0ac*/
            if ( v36 < 0 && v36 != -2147467262 ) /*0x51b0ba*/
              WinAPI::Wrapper(v36); /*0x51b0bd*/
          }
          COMObject::SwapReference((COMObject *)&a2, ppv.ComPtr_field_0x04); /*0x51b0cb*/
          if ( ppv.ComPtr_field_0x04 ) /*0x51b0d6*/
            (*(void (__stdcall **)(int))(*(_DWORD *)ppv.ComPtr_field_0x04 + 8))(ppv.ComPtr_field_0x04); /*0x51b0db*/
          v37 = a2; /*0x51b0de*/
          if ( a2 ) /*0x51b0e4*/
          {
            (*(void (__stdcall **)(int *, int))(*a2 + 12))(a2, *locomotor); /*0x51b0ec*/
            InfantryClass::checkBridgeClearance((InfantryClass *)this->?, *(int *)ppv.__pad_0); /*0x51b0f6*/
            v37 = a2; /*0x51b0fb*/
          }
          if ( *(_DWORD *)ppv.__pad_0 ) /*0x51b105*/
          {
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)ppv.__pad_0 + 8))(*(_DWORD *)ppv.__pad_0); /*0x51b10a*/
            v37 = a2; /*0x51b10d*/
          }
          if ( v37 ) /*0x51b113*/
            (*(void (__stdcall **)(int *))(*v37 + 8))(v37); /*0x51b11c*/
        }
      }
      else if ( CanDeployAtCell ) /*0x51b126*/
      {
        v38 = this->?[0]; /*0x51b12c*/
        v39 = this->?; /*0x51b132*/
        a2 = 0; /*0x51b13a*/
        if ( v38 ) /*0x51b13e*/
        {
          v40 = StreamClass::Set((StreamClass *)&a2, this->?); /*0x51b149*/
          if ( v40 < 0 && v40 != -2147467262 ) /*0x51b157*/
            WinAPI::Wrapper(v40); /*0x51b15a*/
          if ( a2 ) /*0x51b165*/
          {
            if ( (*(unsigned __int8 (__stdcall **)(int *))(*a2 + 28))(a2) ) /*0x51b16a*/
            {
              if ( !a2 ) /*0x51b177*/
                WinAPI::Wrapper(-2147467261); /*0x51b17e*/
              if ( (*(unsigned __int8 (__stdcall **)(int *))(*a2 + 20))(a2) ) /*0x51b18a*/
              {
                if ( *v39 ) /*0x51b191*/
                  (*(void (__stdcall **)(int))(*(_DWORD *)*v39 + 8))(*v39); /*0x51b19a*/
                v41 = a2; /*0x51b19d*/
                *v39 = 0; /*0x51b1a1*/
                if ( !v41 ) /*0x51b1a5*/
                  WinAPI::Wrapper(-2147467261); /*0x51b1ac*/
                (*(void (__stdcall **)(int *, int *))(*v41 + 16))(v41, this->?); /*0x51b1b9*/
              }
            }
            if ( a2 ) /*0x51b1c2*/
              (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x51b1c7*/
          }
        }
      }
    }
  }
  LOBYTE(result) = FootClass::AssignDestination((FootClass *)this, (int)v6, a3); /*0x51b1d2*/
  return result; /*0x51b1d7*/
}



// ==== 0x0051B1F0  InfantryClass::AssignTarget_SyncLog  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::AssignTarget_SyncLog(InfantryClass *this, int a2)
{
  int v3; // eax
  FootClass *rockerLinkedUnit; // eax
  int result; // eax

  if ( (AbstractClass *)a2 != this->? ) /*0x51b201*/
  {
    if ( this->? > 0 ) /*0x51b206*/
    {
      v3 = this->SequenceAnim[0]; /*0x51b208*/
      this->? = 0; /*0x51b20e*/
      if ( v3 == 27 || v3 == 28 || v3 == 29 || v3 == 30 ) /*0x51b226*/
      {
        (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 28, 0, 0); /*0x51b22e*/
      }
      else if ( this->Crawling ) /*0x51b230*/
      {
        (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 2, 0, 0); /*0x51b240*/
      }
      else
      {
        (*((void (__thiscall **)(InfantryClass *, _DWORD, _DWORD, _DWORD))this->FootClass + 342))(this, 0, 0, 0); /*0x51b24f*/
      }
    }
    if ( (AbstractClass *)a2 != this->? ) /*0x51b25b*/
    {
      rockerLinkedUnit = this->?; /*0x51b25d*/
      if ( rockerLinkedUnit ) /*0x51b265*/
      {
        rockerLinkedUnit->? = 0; /*0x51b267*/
        this->? = 0; /*0x51b26d*/
      }
    }
  }
  result = this->SequenceAnim[0]; /*0x51b273*/
  if ( result != 27 && result != 28 && result != 29 && result != 30 || this->Type->? ) /*0x51b293*/
  {
    this->?[0] = -1; /*0x51b2a2*/
    result = TechnoClass::AssignTarget_SyncLog((TechnoClass *)this, a2); /*0x51b2ac*/
    if ( !this->? && this->Type->Infiltrate ) /*0x51b2c3*/
    {
      if ( a2 && (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 ) /*0x51b2d9*/
        result = a2; /*0x51b2db*/
      else
        result = 0; /*0x51b2df*/
      if ( this->Type->Agent ) /*0x51b2e7*/
      {
        if ( result && *(_BYTE *)(*(_DWORD *)(result + 1312) + 5494) ) /*0x51b32a*/
          result = (*((int (__thiscall **)(InfantryClass *, int, int))this->FootClass + 288))(this, a2, 1); /*0x51b339*/
      }
      else if ( result && *(_BYTE *)(*(_DWORD *)(result + 1312) + 5490) ) /*0x51b2fb*/
      {
        result = (*((int (__thiscall **)(InfantryClass *, int, int))this->FootClass + 288))(this, a2, 1); /*0x51b30a*/
        this->? = 0; /*0x51b310*/
        return result; /*0x51b319*/
      }
    }
    this->? = 0; /*0x51b33f*/
  }
  return result; /*0x51b316*/
}



// ==== 0x0051B350  InfantryClass::CalcMoveTarget  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::CalcMoveTarget(InfantryClass *this)
{
  double v1; // st7
  Vector3 *v3; // eax
  int *unknownCoords568; // edi
  int *v5; // eax
  _DWORD *v6; // ebp
  int *v7; // eax
  int *Height; // eax
  InfantryTypeClass *Type; // edx
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int GroundHeight; // ebx
  int v14; // ebx
  void (__usercall **v15)(InfantryClass *@<ecx>, int *); // edx
  char v16; // al
  int v17; // ecx
  int *v18; // eax
  CellClass *v19; // eax
  int *Coords; // ebp
  CellClass *v21; // eax
  int *v22; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  int (__thiscall **v26)(InfantryClass *, ObjectVector *); // edx
  int *v27; // eax
  int v28; // eax
  int v29; // edi
  int v30; // eax
  int v31; // eax
  double v32; // st7
  int v33; // eax
  int v34; // edx
  int v35; // kr00_4
  int result; // eax
  int v37; // ebp
  int v38; // edi
  int v39; // eax
  int v40; // eax
  bool v41; // zf
  signed int v42; // ebp
  double v43; // st7
  int v44; // eax
  int (__thiscall **ptr_0)(InfantryClass *, _DWORD *); // edx
  int *location; // edi
  ObjectPlacement *v47; // ebp
  int ObjectPlacement_field_0x04; // ebx
  int ObjectVector_field_0x14; // ecx
  int ObjectVector_field_0x08; // eax
  int v51; // eax
  int i; // ebx
  _DWORD *v53; // edi
  int v54; // edx
  int *v55; // eax
  int v56; // eax
  void (__usercall **v57)(InfantryClass *@<ecx>, int *); // edx
  int v58; // eax
  int v59; // eax
  int v60; // edx
  void (__thiscall **v61)(InfantryClass *, int *); // eax
  void (__thiscall **v62)(InfantryClass *, int *, int, int); // edx
  int (__thiscall **v63)(InfantryClass *, int); // eax
  double v64; // [esp-10h] [ebp-A0h]
  int Speed; // [esp+18h] [ebp-78h]
  double v66; // [esp+18h] [ebp-78h]
  int v67; // [esp+20h] [ebp-70h]
  double v68; // [esp+20h] [ebp-70h]
  int v69; // [esp+2Ch] [ebp-64h]
  int v70; // [esp+2Ch] [ebp-64h]
  int v71; // [esp+2Ch] [ebp-64h]
  int v72; // [esp+30h] [ebp-60h]
  double v73; // [esp+30h] [ebp-60h]
  int v74[2]; // [esp+38h] [ebp-58h] BYREF
  int v75[2]; // [esp+40h] [ebp-50h] BYREF
  int v76; // [esp+48h] [ebp-48h]
  int v77; // [esp+54h] [ebp-3Ch] BYREF
  int v78; // [esp+58h] [ebp-38h]
  int v79; // [esp+5Ch] [ebp-34h] BYREF
  int v80; // [esp+60h] [ebp-30h] BYREF
  int v81; // [esp+64h] [ebp-2Ch]
  int v82; // [esp+68h] [ebp-28h] BYREF
  int v83; // [esp+6Ch] [ebp-24h] BYREF
  int v84; // [esp+70h] [ebp-20h]
  int v85; // [esp+74h] [ebp-1Ch]
  ObjectVector v86; // [esp+78h] [ebp-18h] BYREF

  if ( *(_DWORD *)(*(_DWORD *)(FootClass_Array.?[3] + 4 * this->?) + 4 * this->? + 48) != -1 ) /*0x51b383*/
  {
    v3 = (Vector3 *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 18))(this); /*0x51b392*/
    unknownCoords568 = this->?; /*0x51b395*/
    v5 = Vector3::Subtract(v3, &v79, this->?); /*0x51b3a3*/
    Coord::Length((Coord *)v5); /*0x51b3aa*/
    v6 = *(_DWORD **)(FootClass_Array.?[3] + 4 * this->?); /*0x51b3c2*/
    v7 = (int *)(*((int (__thiscall **)(InfantryClass *, int *, int *))this->FootClass + 18))(this, &v82, this->?); /*0x51b3cc*/
    Height = (int *)Cell::GetHeight((Cell *)&v74[1], v7, &v83); /*0x51b3d4*/
    Type = this->Type; /*0x51b3d9*/
    v74[1] = *Height; /*0x51b3e1*/
    Speed = Type->?; /*0x51b3eb*/
    v69 = v6[10]; /*0x51b3f2*/
    v10 = SHIWORD(v69) << 8; /*0x51b401*/
    v11 = (__int16)v69 << 8; /*0x51b404*/
    v70 = v6[9]; /*0x51b407*/
    v78 = v10 + 128; /*0x51b41a*/
    v77 = v11 + 128; /*0x51b423*/
    v79 = 0; /*0x51b42c*/
    v82 = 0; /*0x51b435*/
    v80 = ((__int16)v70 << 8) + 128; /*0x51b440*/
    v12 = v6[112]; /*0x51b444*/
    v81 = (SHIWORD(v70) << 8) + 128; /*0x51b456*/
    v71 = v12; /*0x51b45a*/
    GroundHeight = Cell::GetGroundHeight(&v80); /*0x51b46d*/
    v14 = (Cell::GetGroundHeight(&v77) - GroundHeight) / v71; /*0x51b47f*/
    if ( v67 > Speed ) /*0x51b48b*/
    {
      v37 = v6[this->? + 12]; /*0x51b6a8*/
      v83 = this->?[0]; /*0x51b6ae*/
      v84 = this->?[1]; /*0x51b6b5*/
      v38 = this->?[2]; /*0x51b6b9*/
      v74[1] = SLOWORD(v74[1]) - 0x3FFF; /*0x51b6c6*/
      v73 = (double)v74[1] * -0.00009587672516830327; /*0x51b6d4*/
      *(double *)v75 = (double)v84; /*0x51b6ee*/
      Math::SinCos(v73); /*0x51b6f2*/
      LOWORD(v39) = Math::RoundToInt(v1); /*0x51b6ff*/
      v74[1] = v39; /*0x51b70a*/
      Math::ArcTan2(v73); /*0x51b70e*/
      LOWORD(v40) = Math::RoundToInt(v1 * (double)Speed + (double)v83); /*0x51b71e*/
      Coord::Subtract((Coord *)&v80, v40, v74[1], v38); /*0x51b72e*/
      v42 = v37 & 0x80000001; /*0x51b73f*/
      v41 = v42 == 0; /*0x51b73f*/
      v77 = v80; /*0x51b745*/
      v78 = v81; /*0x51b749*/
      v79 = v82; /*0x51b74d*/
      if ( v42 < 0 ) /*0x51b751*/
        v41 = (((_BYTE)v42 - 1) | 0xFFFFFFFE) == -1; /*0x51b757*/
      if ( v41 ) /*0x51b758*/
        v43 = 256.0; /*0x51b762*/
      else
        v43 = 362.0386719675124; /*0x51b75a*/
      LOWORD(v44) = Math::RoundToInt(v43); /*0x51b776*/
      ptr_0 = (int (__thiscall **)(InfantryClass *, _DWORD *))this->FootClass; /*0x51b77b*/
      v79 = v44; /*0x51b77d*/
      return ptr_0[109](this, &v77); /*0x51b797*/
    }
    v15 = (void (__usercall **)(InfantryClass *@<ecx>, int *))this->FootClass; /*0x51b497*/
    v16 = this->? + 1; /*0x51b499*/
    this->? = v16; /*0x51b49f*/
    v72 = v6[v16 + 12]; /*0x51b4ae*/
    v15[109](this, this->?); /*0x51b4b7*/
    if ( v72 != -1 ) /*0x51b4c3*/
    {
      v17 = v6[this->? + 12]; /*0x51b4d3*/
      v18 = Coord::Subtract( /*0x51b4ff*/
              (Coord *)&v83,
              *unknownCoords568 + g_DDrawSurfaceManager.scenario[2 * (v17 & 7) + 102],
              this->?[1] + g_DDrawSurfaceManager.scenario[2 * (v17 & 7) + 103],
              this->?[2]);
      v77 = *v18; /*0x51b506*/
      v78 = v18[1]; /*0x51b512*/
      v79 = v18[2]; /*0x51b51f*/
      v19 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], this->?); /*0x51b523*/
      Coords = CellClass::GetCoords(v19, v75); /*0x51b52f*/
      v21 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v77); /*0x51b540*/
      v22 = CellClass::GetCoords(v21, (int *)v86.__pad_0); /*0x51b547*/
      v23 = *v22 - *Coords + *unknownCoords568; /*0x51b55f*/
      v24 = v22[1] - Coords[1] + this->?[1]; /*0x51b564*/
      v25 = this->?[2]; /*0x51b566*/
      *unknownCoords568 = v23; /*0x51b569*/
      v26 = (int (__thiscall **)(InfantryClass *, ObjectVector *))this->FootClass; /*0x51b56c*/
      this->?[1] = v24; /*0x51b56f*/
      this->?[2] = v25; /*0x51b574*/
      this->?[2] += v14; /*0x51b584*/
      v27 = (int *)v26[18](this, &v86); /*0x51b58a*/
      v28 = *(_DWORD *)Cell::GetHeight((Cell *)&v74[1], v27, this->?); /*0x51b597*/
      v83 = this->?[0]; /*0x51b5a5*/
      v29 = this->?[2]; /*0x51b5af*/
      v84 = this->?[1]; /*0x51b5c1*/
      v74[1] = Speed - v67; /*0x51b5c9*/
      v68 = (double)((__int16)v28 - 0x3FFF) * -0.00009587672516830327; /*0x51b5d7*/
      v66 = (double)v74[1]; /*0x51b5e9*/
      *(double *)v75 = (double)v84; /*0x51b5f1*/
      Math::SinCos(v68); /*0x51b5f5*/
      LOWORD(v30) = Math::RoundToInt(v1); /*0x51b602*/
      v64 = v68; /*0x51b608*/
      LODWORD(v68) = v30; /*0x51b609*/
      Math::ArcTan2(v64); /*0x51b60d*/
      LOWORD(v31) = Math::RoundToInt(v1 * v66 + (double)v83); /*0x51b61d*/
      Coord::Subtract((Coord *)&v77, v31, SLODWORD(v68), v29); /*0x51b62d*/
      v80 = v77; /*0x51b63e*/
      v81 = v78; /*0x51b646*/
      v82 = v79; /*0x51b650*/
      if ( v72 % 2 ) /*0x51b65a*/
        v32 = 362.0386719675124; /*0x51b65d*/
      else
        v32 = 256.0; /*0x51b665*/
      v35 = Math::RoundToInt(v32); /*0x51b679*/
      LOWORD(v34) = HIWORD(v35); /*0x51b679*/
      LOWORD(v33) = v35; /*0x51b679*/
      v82 = v33; /*0x51b682*/
      return (*((int (__fastcall **)(InfantryClass *, int, int *))this->FootClass + 109))(this, v34, &v80); /*0x51b69a*/
    }
  }
  location = this->?; /*0x51b798*/
  v83 = this->?[0]; /*0x51b7a2*/
  v84 = this->?[1]; /*0x51b7ae*/
  v85 = this->?[2]; /*0x51b7b5*/
  v47 = (ObjectPlacement *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v83); /*0x51b7c7*/
  ObjectPlacement_field_0x04 = v47[28].ObjectPlacement_field_0x04; /*0x51b7cf*/
  if ( (*((int (__thiscall **)(InfantryClass *, ObjectPlacement *, int, _DWORD, _DWORD, int))this->FootClass + 107))( /*0x51b7d8*/
         this,
         v47,
         -1,
         0,
         0,
         1) )
  {
    ObjectVector::Construct(&v86, 0, 0); /*0x51b7ee*/
    ObjectVector_field_0x14 = 10; /*0x51b7f3*/
    *(_DWORD *)v86.__pad_0 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x51b7fa*/
    v86.ObjectVector_field_0x14 = 10; /*0x51b802*/
    v86.ObjectVector_field_0x10 = 0; /*0x51b809*/
    if ( ObjectPlacement_field_0x04 ) /*0x51b810*/
    {
      ObjectVector_field_0x08 = v86.ObjectVector_field_0x08; /*0x51b812*/
      while ( 1 ) /*0x51b822*/
      {
        if ( v86.ObjectVector_field_0x10 < ObjectVector_field_0x08 ) /*0x51b829*/
          goto LABEL_23; /*0x51b829*/
        if ( (BYTE1(v86.ObjectVector_field_0x0C) || !ObjectVector_field_0x08) && ObjectVector_field_0x14 > 0 ) /*0x51b83c*/
          break; /*0x51b83c*/
LABEL_25:
        ObjectPlacement_field_0x04 = *(_DWORD *)(ObjectPlacement_field_0x04 + 48); /*0x51b873*/
        if ( !ObjectPlacement_field_0x04 ) /*0x51b878*/
          goto LABEL_26; /*0x51b878*/
        ObjectVector_field_0x14 = v86.ObjectVector_field_0x14; /*0x51b81b*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(ObjectVector *, int, _DWORD))(*(_DWORD *)v86.__pad_0 + 8))( /*0x51b84d*/
             &v86,
             ObjectVector_field_0x14 + ObjectVector_field_0x08,
             0) )
      {
LABEL_23:
        v51 = v86.ObjectVector_field_0x10++; /*0x51b854*/
        *(_DWORD *)(v86.ObjectVector_field_0x04 + 4 * v51) = ObjectPlacement_field_0x04; /*0x51b869*/
      }
      ObjectVector_field_0x08 = v86.ObjectVector_field_0x08; /*0x51b86c*/
      goto LABEL_25; /*0x51b86c*/
    }
LABEL_26:
    for ( i = 0; i < v86.ObjectVector_field_0x10; ++i ) /*0x51b885*/
    {
      v53 = *(_DWORD **)(v86.ObjectVector_field_0x04 + 4 * i); /*0x51b88b*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v53 + 44))(v53) == 1 /*0x51b8a4*/
        || (*(int (__thiscall **)(_DWORD *))(*v53 + 44))(v53) == 15 )
      {
        if ( !v53[413] ) /*0x51b8a6*/
          WinAPI::Wrapper(-2147467261); /*0x51b8b3*/
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v53[413] + 16))(v53[413]) ) /*0x51b8c1*/
        {
          v54 = *v53; /*0x51b8c8*/
          v83 = 0; /*0x51b8d5*/
          v84 = 0; /*0x51b8d9*/
          v85 = 0; /*0x51b8dd*/
          (*(void (__thiscall **)(_DWORD *, int *, int, int))(v54 + 372))(v53, &v83, 1, 1); /*0x51b8e4*/
        }
      }
    }
    (*((void (__thiscall **)(InfantryClass *, _DWORD, _DWORD))this->FootClass + 337))(this, 0, 0); /*0x51b8fc*/
    result = v86.ObjectVector_field_0x04; /*0x51b902*/
    *(_DWORD *)v86.__pad_0 = &VectorClass<ObjectClass *>::`vftable'; /*0x51b906*/
    if ( v86.ObjectVector_field_0x04 && BYTE1(v86.ObjectVector_field_0x0C) ) /*0x51b91f*/
      __3_YAXPAX_Z((void *)v86.ObjectVector_field_0x04); /*0x51b926*/
  }
  else
  {
    v83 = *location; /*0x51b940*/
    v84 = this->?[1]; /*0x51b94c*/
    v85 = this->?[2]; /*0x51b960*/
    v55 = ObjectPlacement::CalcPosition(v47, (int *)v86.__pad_0, &v83, 0, 0, 0); /*0x51b967*/
    v75[0] = *v55; /*0x51b96e*/
    v75[1] = v55[1]; /*0x51b97a*/
    v76 = v55[2]; /*0x51b986*/
    v56 = Cell::GetGroundHeight(v75); /*0x51b98a*/
    v57 = (void (__usercall **)(InfantryClass *@<ecx>, int *))this->FootClass; /*0x51b98f*/
    v76 = v56; /*0x51b991*/
    v57[109](this, v75); /*0x51b99c*/
    v58 = this->?[0]; /*0x51b9a2*/
    v84 = *(_DWORD *)&stru_A8EB00.?[1568]; /*0x51b9bc*/
    v85 = *(_DWORD *)&stru_A8EB00.?[1572]; /*0x51b9c0*/
    if ( !v58 ) /*0x51b9c4*/
      WinAPI::Wrapper(-2147467261); /*0x51b9cb*/
    (*(void (__stdcall **)(int, _DWORD, int, int))(*(_DWORD *)this->?[0] + 120))( /*0x51b9f4*/
      this->?[0],
      *(_DWORD *)&stru_A8EB00.?[1564],
      v84,
      v85);
    if ( !this->?[0] ) /*0x51b9f7*/
      WinAPI::Wrapper(-2147467261); /*0x51ba08*/
    (*(void (__stdcall **)(int))(*(_DWORD *)this->?[0] + 172))(this->?[0]); /*0x51ba16*/
    (*((void (__thiscall **)(InfantryClass *, int))this->FootClass + 73))(this, 1); /*0x51ba22*/
    v59 = *location; /*0x51ba2b*/
    v60 = this->?[2]; /*0x51ba2d*/
    v84 = this->?[1]; /*0x51ba30*/
    v83 = v59; /*0x51ba38*/
    v61 = (void (__thiscall **)(InfantryClass *, int *))this->FootClass; /*0x51ba3c*/
    v85 = v60; /*0x51ba41*/
    v61[60](this, &v83); /*0x51ba45*/
    if ( (ObjectPlacement *)this->? == v47 ) /*0x51ba51*/
    {
      v62 = (void (__thiscall **)(InfantryClass *, int *, int, int))this->FootClass; /*0x51ba53*/
      v83 = 0; /*0x51ba60*/
      v84 = 0; /*0x51ba64*/
      v85 = 0; /*0x51ba68*/
      v62[93](this, &v83, 1, 1); /*0x51ba6f*/
    }
    else
    {
      (*((void (__thiscall **)(InfantryClass *, _DWORD, int))this->FootClass + 337))(this, 0, 1072693248); /*0x51ba81*/
    }
    v63 = (int (__thiscall **)(InfantryClass *, int))this->FootClass; /*0x51ba87*/
    this->? = -1; /*0x51ba8d*/
    this->? = 1; /*0x51ba94*/
    return v63[99](this, 2); /*0x51ba9b*/
  }
  return result; /*0x51b693*/
}



// ==== 0x0051BAB0  InfantryClass::Update  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::Update(InfantryClass *this)
{
  int movementDestination; // eax
  AnimClass *v3; // eax
  int v4; // edi
  int v5; // ebp
  int temporalTargetingMe; // ecx
  int SequenceAnim; // eax
  CellClass *v8; // eax
  BuildingClass *v9; // eax
  BuildingClass *v10; // edi
  _BYTE *Type; // eax
  int LaserFenceFrame; // eax
  int slaveOwner; // eax
  void *v14; // eax
  int v15; // eax
  int team; // eax
  int v17; // edx
  int v18; // eax
  int v20; // [esp+28h] [ebp-Ch] BYREF
  int v21; // [esp+2Ch] [ebp-8h]
  int v22; // [esp+30h] [ebp-4h]

  if ( this->tubeIndex[0] >= 0 ) /*0x51bac0*/
  {
    InfantryClass::CalcMoveTarget(this); /*0x51bac2*/
    LOBYTE(movementDestination) = (*(char (__thiscall **)(InfantryClass *, _DWORD))(this->ptr_0 + 1184))(this, 0); /*0x51bacd*/
    return movementDestination; /*0x51bad9*/
  }
  if ( ((*(unsigned __int8 (__thiscall **)(InfantryClass *))(this->ptr_0 + 468))(this) /*0x51bb01*/
     || (*(unsigned __int8 (__thiscall **)(InfantryClass *))(this->ptr_0 + 472))(this))
    && !((int)dword_A8ED84 % 24) )
  {
    if ( *(_DWORD *)&dword_8871E0->__pad_240[260] ) /*0x51bb0d*/
    {
      v3 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x51bb1c*/
      if ( v3 ) /*0x51bb26*/
      {
        v4 = this->location[1]; /*0x51bb40*/
        v20 = this->location[0] + 120; /*0x51bb43*/
        v5 = this->location[2]; /*0x51bb4e*/
        v21 = v4 + 120; /*0x51bb57*/
        v22 = v5; /*0x51bb5b*/
        AnimClass::ctor(v3, *(void **)&dword_8871E0->__pad_240[260], &v20, 0, 1, (void *)0x600, 0, 0); /*0x51bb69*/
      }
    }
  }
  temporalTargetingMe = this->temporalTargetingMe; /*0x51bb6e*/
  if ( temporalTargetingMe ) /*0x51bb76*/
    (*(void (__thiscall **)(int))(*(_DWORD *)temporalTargetingMe + 92))(temporalTargetingMe); /*0x51bb7a*/
  if ( !(*(unsigned __int8 (__thiscall **)(InfantryClass *))(this->ptr_0 + 472))(this) /*0x51bb99*/
    && (!(*(unsigned __int8 (__thiscall **)(InfantryClass *))(this->ptr_0 + 468))(this) || !this->isImmobilized[0]) )
  {
    goto LABEL_98; /*0x51bb99*/
  }
  if ( !this->locomotor ) /*0x51bba3*/
    WinAPI::Wrapper(-2147467261); /*0x51bbb2*/
  (*(void (__stdcall **)(int))(*(_DWORD *)this->locomotor + 64))(this->locomotor); /*0x51bbc0*/
  LOBYTE(movementDestination) = this->isAliveFlag[0]; /*0x51bbc3*/
  if ( (_BYTE)movementDestination ) /*0x51bbcb*/
  {
LABEL_98:
    if ( (*(unsigned __int8 (__thiscall **)(InfantryClass *))(this->ptr_0 + 468))(this) ) /*0x51bbd5*/
    {
      if ( this->target ) /*0x51bbdf*/
        (*(void (__thiscall **)(InfantryClass *, _DWORD))(this->ptr_0 + 968))(this, 0); /*0x51bbef*/
      movementDestination = this->movementDestination; /*0x51bbf5*/
      if ( movementDestination ) /*0x51bbfd*/
        LOBYTE(movementDestination) = (*(char (__thiscall **)(InfantryClass *, _DWORD, int))(this->ptr_0 + 1152))( /*0x51bc0b*/
                                        this,
                                        0,
                                        1);
      return movementDestination; /*0x51bc17*/
    }
    if ( (*(unsigned __int8 (__thiscall **)(InfantryClass *))(this->ptr_0 + 512))(this) ) /*0x51bc1c*/
    {
      if ( (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) == -1 && this->queuedMission == -1 ) /*0x51bc3d*/
        (*(void (__thiscall **)(InfantryClass *, _DWORD, int))(this->ptr_0 + 1156))(this, 0, 1); /*0x51bc47*/
      (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 492))(this); /*0x51bc51*/
    }
    if ( this->health <= 0 ) /*0x51bc5c*/
    {
      SequenceAnim = this->SequenceAnim; /*0x51bc5e*/
      if ( SequenceAnim != 11 /*0x51bc94*/
        && SequenceAnim != 12
        && SequenceAnim != 13
        && SequenceAnim != 14
        && SequenceAnim != 15
        && SequenceAnim != 34
        && SequenceAnim != 35
        && SequenceAnim != 36
        && SequenceAnim != 20
        && SequenceAnim != 21 )
      {
        this->health = 1; /*0x51bc96*/
      }
    }
    FootClass::MovementAI(this); /*0x51bc9f*/
    LOBYTE(movementDestination) = this->isAliveFlag[0]; /*0x51bca4*/
    if ( (_BYTE)movementDestination ) /*0x51bcac*/
    {
      if ( this->inLimbo[0] /*0x51bcdc*/
        || (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) != 5
        && (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) != 11 )
      {
        goto LABEL_61; /*0x51bcdc*/
      }
      v20 = this->location[0]; /*0x51bcee*/
      v21 = this->location[1]; /*0x51bcff*/
      v22 = this->location[2]; /*0x51bd06*/
      v8 = Coord::To_Cell((Coord *)&dword_87F7E8, &v20); /*0x51bd0a*/
      v9 = (BuildingClass *)Cell::IsBridge((Cell *)v8); /*0x51bd11*/
      v10 = v9; /*0x51bd16*/
      if ( !v9 ) /*0x51bd1a*/
        goto LABEL_61; /*0x51bd1a*/
      Type = (_BYTE *)v9->Type; /*0x51bd20*/
      if ( !Type[5889] ) /*0x51bd26*/
      {
        if ( Type[5823] ) /*0x51bd30*/
        {
          LaserFenceFrame = v10->LaserFenceFrame; /*0x51bd3a*/
          if ( LaserFenceFrame != 12 && LaserFenceFrame != 8 ) /*0x51bd48*/
            goto LABEL_55; /*0x51bd48*/
        }
        else if ( Type[5824] ) /*0x51bd4c*/
        {
          if ( *(_BYTE *)(v10->owner + 506) ) /*0x51bd5c*/
            goto LABEL_55; /*0x51bd64*/
        }
        else if ( !Type[5815] || !(unsigned __int8)BuildingClass::IsPoweredOn(v10) ) /*0x51bd74*/
        {
          goto LABEL_55; /*0x51bd7b*/
        }
      }
      v10 = 0; /*0x51bd7d*/
LABEL_55:
      slaveOwner = this->slaveOwner; /*0x51bd7f*/
      if ( !slaveOwner /*0x51bdaf*/
        || !*(_DWORD *)(slaveOwner + 728)
        || v10 != (BuildingClass *)slaveOwner
        || (v14 = (void *)(*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 444))(this),
            !BuildingClass::CheckBridge(*(BuildingClass **)(this->slaveOwner + 728), (int)this, v14)) )
      {
        if ( v10 ) /*0x51bdba*/
          (*(void (__thiscall **)(InfantryClass *, int *, int, int))(this->ptr_0 + 372))(this, &dword_A8F200, 1, 1); /*0x51bdc9*/
      }
LABEL_61:
      if ( (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 120))(this) != 2 ) /*0x51bdd9*/
        (*(void (__thiscall **)(InfantryClass *, int))(this->ptr_0 + 292))(this, 2); /*0x51bde1*/
      if ( this->unknownBool68D[0] && !this->animation[5] ) /*0x51bdf1*/
      {
        v15 = this->SequenceAnim; /*0x51bdfb*/
        this->unknownBool68D[0] = 0; /*0x51be01*/
        if ( v15 == 27 || v15 == 28 || v15 == 29 || v15 == 30 ) /*0x51be1a*/
          (*(void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))(this->ptr_0 + 1368))(this, 28, 0, 0); /*0x51be26*/
        else
          (*(void (__thiscall **)(InfantryClass *, _DWORD, _DWORD, _DWORD))(this->ptr_0 + 1368))(this, 0, 0, 0); /*0x51be38*/
      }
      team = this->team; /*0x51be3e*/
      if ( team && this->isInPlayfield[0] ) /*0x51be48*/
        *(_BYTE *)(team + 130) = 1; /*0x51be52*/
      if ( !this->team && (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) == 5 ) /*0x51be70*/
      {
        v20 = this->location[0]; /*0x51be7e*/
        v21 = this->location[1]; /*0x51be8a*/
        v22 = this->location[2]; /*0x51be91*/
        if ( !(unsigned __int8)Tactical::IsCellVisible((Tactical *)&dword_87F7E8, &v20) ) /*0x51be9a*/
        {
          (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 928))(this); /*0x51bea7*/
          LOBYTE(movementDestination) = (*(char (__thiscall **)(InfantryClass *))(this->ptr_0 + 248))(this); /*0x51beb1*/
          return movementDestination; /*0x51bebd*/
        }
      }
      LOBYTE(movementDestination) = ProcessTechnoSquadResponse(this); /*0x51bec0*/
      if ( (_BYTE)movementDestination ) /*0x51bec7*/
        return movementDestination; /*0x51bec7*/
      if ( (*(unsigned __int8 (__thiscall **)(InfantryClass *))(this->ptr_0 + 512))(this) ) /*0x51bed1*/
      {
        if ( (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) == -1 && this->queuedMission == -1 ) /*0x51beef*/
          (*(void (__thiscall **)(InfantryClass *, _DWORD, int))(this->ptr_0 + 1156))(this, 0, 1); /*0x51bef9*/
        (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 492))(this); /*0x51bf03*/
      }
      InfantryClass::ProcessIdleDeploy(this); /*0x51bf0b*/
      if ( this->movementDestination || this->Crawling[0] || !this->InfantryClass_field_bool_6DA[0] ) /*0x51bf24*/
        goto LABEL_92; /*0x51bf2c*/
      v17 = this->InfantryClass_field_timer_6C8[0]; /*0x51bf2e*/
      v18 = this->InfantryClass_field_timer_6C8[2]; /*0x51bf34*/
      if ( v17 != -1 ) /*0x51bf3c*/
      {
        if ( (int)dword_A8ED84 - v17 >= v18 ) /*0x51bf48*/
          goto LABEL_91; /*0x51bf48*/
        v18 -= (int)dword_A8ED84 - v17; /*0x51bf4a*/
      }
      if ( v18 ) /*0x51bf4e*/
      {
LABEL_92:
        FireTechnoAtTarget(this); /*0x51bf57*/
        LOBYTE(movementDestination) = this->isAliveFlag[0]; /*0x51bf5e*/
        if ( (_BYTE)movementDestination ) /*0x51bf66*/
        {
          Mission::ExecuteTechnoMissionAction((Mission *)this); /*0x51bf6a*/
          LOBYTE(movementDestination) = this->isAliveFlag[0]; /*0x51bf6f*/
          if ( (_BYTE)movementDestination ) /*0x51bf77*/
            LOBYTE(movementDestination) = Mission::ProcessUnitMissionAI((Mission *)this); /*0x51bf7b*/
        }
        return movementDestination; /*0x51bf7b*/
      }
LABEL_91:
      this->InfantryClass_field_bool_6DA[0] = 0; /*0x51bf50*/
      goto LABEL_92; /*0x51bf50*/
    }
  }
  return movementDestination; /*0x51bad3*/
}



// ==== 0x0051BF90  InfantryClass::EvaluateTarget  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::EvaluateTarget(InfantryClass *this, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v7; // rax
  int v8; // edx
  bool v9; // al
  _DWORD *Type; // eax
  int result; // eax
  int v12; // eax
  InfantryClass *NeighbourContent; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  bool v17; // al
  int v18; // eax
  int v19; // ebx
  int v20; // esi
  InfantryClass **v21; // eax
  int v22; // edi
  int v23; // esi
  ParasiteClass *parasiteImUsing; // eax
  int v25; // ecx
  _WORD *v26; // edi
  _WORD *v27; // eax
  TechnoClass *slaveOwner; // eax
  BuildingClass *slaveManager; // ecx
  AbstractClass *v30; // eax
  AbstractClass *v31; // edi
  _DWORD *v32; // eax
  AbstractClass *focus; // ecx
  _BYTE *v34; // eax
  int v35; // ecx
  _DWORD *v36; // eax
  int v37; // edi
  char v38; // al
  bool v39; // zf
  bool v40; // [esp+29h] [ebp-23h] BYREF
  bool v41; // [esp+2Ah] [ebp-22h]
  char v42; // [esp+2Bh] [ebp-21h]
  int v43; // [esp+2Ch] [ebp-20h]
  int v44; // [esp+30h] [ebp-1Ch] BYREF
  _DWORD v45[3]; // [esp+34h] [ebp-18h] BYREF
  _BYTE v46[12]; // [esp+40h] [ebp-Ch] BYREF
  int v47; // [esp+54h] [ebp+8h]

  v40 = (*(_DWORD *)(a2 + 320) & 0x100) != 0 /*0x51bfc6*/
     && (a4 == -1 || (v7 = a4 - *(char *)(a2 + 283), (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) > 1));
  v8 = *(_DWORD *)(a2 + 84); /*0x51bfd8*/
  v42 = *(_BYTE *)(a2 + 292); /*0x51bfdb*/
  v9 = (*(_DWORD *)(a2 + 292) & 0x20) != 0; /*0x51bfe8*/
  v43 = v8; /*0x51bfea*/
  v41 = v9; /*0x51bfee*/
  Type = (_DWORD *)InfantryClass::GetType((InfantryClass *)a2); /*0x51bff2*/
  if ( a3 == 8 ) /*0x51c000*/
  {
    if ( Type && __PAIR32__(Type[10], HIWORD(Type[9])) != __PAIR32__(Type[9], HIWORD(Type[10])) ) /*0x51c01b*/
      return 0; /*0x51c036*/
    return 7; /*0x51c01b*/
  }
  if ( Type ) /*0x51c03b*/
  {
    v12 = abs32(a3 - Type[11]); /*0x51c047*/
    if ( v12 > 2 && v12 < 6 && a3 != -1 ) /*0x51c056*/
      return 7; /*0x51c064*/
  }
  NeighbourContent = (InfantryClass *)Cell::GetNeighbourContent((Cell *)a2, ((_BYTE)a3 - 4) & 7); /*0x51c072*/
  v14 = InfantryClass::GetType(NeighbourContent); /*0x51c07e*/
  if ( v14 ) /*0x51c082*/
  {
    v15 = abs32((((_BYTE)a3 - 4) & 7) - *(_DWORD *)(v14 + 44)); /*0x51c08e*/
    if ( v15 > 2 && v15 < 6 && a3 != -1 ) /*0x51c09d*/
      return 7; /*0x51c0ab*/
  }
  if ( a4 - *(char *)(a2 + 283) > 4 ) /*0x51c0c2*/
    return 0; /*0x51c0cd*/
  result = (*((int (__thiscall **)(InfantryClass *, int, int, int *, bool *, int))this->FootClass + 108))( /*0x51c0e6*/
             this,
             a2,
             a3,
             &a4,
             &v40,
             a5);
  if ( result != 7 )
  {
    if ( a4 != -1 && (*(_DWORD *)(a2 + 320) & 0x100) != 0 && a4 == *(char *)(a2 + 283) + 4 ) /*0x51c118*/
    {
      v16 = *(_DWORD *)(a2 + 88); /*0x51c120*/
      v42 = *(_BYTE *)(a2 + 296); /*0x51c123*/
      v17 = (*(_DWORD *)(a2 + 296) & 0x20) != 0; /*0x51c130*/
      v43 = v16; /*0x51c132*/
      v41 = v17; /*0x51c136*/
    }
    if ( this->? /*0x51c163*/
      && !dword_A8E7AC
      && !(unsigned __int8)Type::CheckAmbiguity((Type *)&stru_87F5F0.__pad_58[416], a2, 1)
      && !(*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 200))(this) )
    {
      return 7; /*0x51c179*/
    }
    v18 = *(_DWORD *)(a2 + 68); /*0x51c17c*/
    v19 = 0; /*0x51c17f*/
    if ( v18 != -1 ) /*0x51c184*/
    {
      v20 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v18); /*0x51c190*/
      if ( *(_BYTE *)(v20 + 682) && !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x51c1a3*/
        return 7; /*0x51c1b8*/
      if ( *(_BYTE *)(v20 + 680) && *(unsigned __int8 *)(a2 + 286) >> 4 != *(_DWORD *)(v20 + 672) ) /*0x51c1dc*/
      {
        if ( !(*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 171))(this) ) /*0x51c1e3*/
          return 7; /*0x51c1e3*/
        v21 = (InfantryClass **)(*((int (__thiscall **)(InfantryClass *, _DWORD))this->FootClass + 254))(this, 0); /*0x51c1f8*/
        if ( !InfantryClass::startPanic(*v21) ) /*0x51c200*/
          return 7; /*0x51c207*/
        v19 = 5 - ((unsigned __int8)HouseClass::IsAllied(this->?, *(_DWORD *)(a2 + 80)) != 0); /*0x51c223*/
      }
    }
    v22 = 0; /*0x51c229*/
    v47 = 0; /*0x51c22d*/
    if ( v40 ) /*0x51c231*/
      v23 = *(_DWORD *)(a2 + 232); /*0x51c237*/
    else
      v23 = *(_DWORD *)(a2 + 228); /*0x51c243*/
    if ( v23 ) /*0x51c24b*/
    {
      while ( 1 ) /*0x51c251*/
      {
        if ( (InfantryClass *)v23 != this ) /*0x51c253*/
        {
          parasiteImUsing = this->?; /*0x51c259*/
          if ( parasiteImUsing ) /*0x51c261*/
          {
            v25 = *(_DWORD *)parasiteImUsing->__pad_28; /*0x51c263*/
            if ( v25 ) /*0x51c268*/
            {
              v26 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v25 + 440))(v25, &a5); /*0x51c27b*/
              v27 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v23 + 440))(v23, &v44); /*0x51c282*/
              if ( *v27 == *v26 && v27[1] == v26[1] ) /*0x51c298*/
                return 0; /*0x51c298*/
            }
          }
          slaveOwner = this->?; /*0x51c29e*/
          if ( slaveOwner /*0x51c2bc*/
            && (slaveManager = (BuildingClass *)slaveOwner->slaveManager) != 0
            && (TechnoClass *)v23 == slaveOwner
            && BuildingClass::CheckBridge(slaveManager, (int)this, (void *)a2) )
          {
            v41 = 0; /*0x51c2c5*/
          }
          else
          {
            if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v23 + 468))(v23) /*0x51c36f*/
              && ((*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 7
               || (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 8
               || (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 9
               || (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 17 && this->Type->C4
               || ((*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 11
                || (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 25
                || (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 5)
               && this->Type->Engineer) )
            {
              if ( (AbstractClass *)v23 == this->? /*0x51c3c8*/
                || (v45[0] = *(_DWORD *)(v23 + 156),
                    v45[1] = *(_DWORD *)(v23 + 160),
                    v45[2] = *(_DWORD *)(v23 + 164),
                    Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v45) == (CellClass *)this->?)
                || (AbstractClass *)v23 == this->? )
              {
                if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v23 + 352))(v23) ) /*0x51c71f*/
                  return 7; /*0x51c727*/
                if ( !this->? && !v40 && flt_89EA40[9 * *(_DWORD *)(a2 + 236) + this->Type->?[0]] == 0.0 ) /*0x51c76c*/
                  return 7; /*0x51c77a*/
                return 0; /*0x51c788*/
              }
              v30 = (AbstractClass *)Cell::IsBridge((Cell *)a2); /*0x51c3d2*/
              v31 = v30; /*0x51c3d7*/
              if ( v30 ) /*0x51c3db*/
              {
                if ( (AbstractClass *)v23 != v30 ) /*0x51c3df*/
                {
                  if ( v30 == this->? ) /*0x51c3e7*/
                    goto LABEL_134; /*0x51c3e7*/
                  v32 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))v30->ptr_0 + 18))(v30, v46); /*0x51c3f6*/
                  if ( Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v32) == (CellClass *)this->? /*0x51c416*/
                    || v31 == this->? )
                  {
                    goto LABEL_134; /*0x51c416*/
                  }
                }
              }
            }
            if ( (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 11 ) /*0x51c42a*/
            {
              focus = this->?; /*0x51c42c*/
              if ( focus == (AbstractClass *)v23 /*0x51c43e*/
                && (*((int (__thiscall **)(AbstractClass *))focus->ptr_0 + 11))(focus) == 1 )
              {
                return 7; /*0x51c43e*/
              }
            }
            if ( this->Type->VehicleThief /*0x51c47c*/
              && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v23 + 128))(v23)
              && this->? == (AbstractClass *)v23
              && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v23 + 132))(v23) + 3220) )
            {
              return 0; /*0x51c47c*/
            }
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 44))(v23) != 6 ) /*0x51c48c*/
            {
LABEL_96:
              if ( (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 7 /*0x51c56b*/
                && (AbstractClass *)v23 == this->?
                && this->? )
              {
                return 0; /*0x51c573*/
              }
              if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, v23) || dword_A8E7AC ) /*0x51c594*/
              {
                switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 44))(v23) ) /*0x51c669*/
                {
                  case 1: /*0x51c669*/
                    if ( !*(_DWORD *)(v23 + 1652) ) /*0x51c670*/
                      WinAPI::Wrapper(-2147467261); /*0x51c67f*/
                    if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v23 + 1652) + 16))(*(_DWORD *)(v23 + 1652)) /*0x51c694*/
                      || *(_DWORD *)(v23 + 1444) )
                    {
                      if ( *(_BYTE *)(v23 + 1718) ) /*0x51c6aa*/
                        goto LABEL_128; /*0x51c6aa*/
                      if ( !*(_DWORD *)(v23 + 1652) ) /*0x51c6b4*/
                        WinAPI::Wrapper(-2147467261); /*0x51c6c3*/
                      if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v23 + 1652) + 164))(*(_DWORD *)(v23 + 1652)) ) /*0x51c6d1*/
                      {
LABEL_128:
                        if ( v19 < 2 ) /*0x51c6de*/
                          v19 = 2; /*0x51c6e0*/
                      }
                    }
                    else if ( v19 < 6 ) /*0x51c6a1*/
                    {
                      v19 = 6; /*0x51c6a3*/
                    }
                    goto LABEL_134; /*0x51c6a8*/
                  case 2: /*0x51c669*/
                  case 6: /*0x51c669*/
                    return 7;
                  case 15: /*0x51c669*/
                    if ( !*(_DWORD *)(v23 + 1652) ) /*0x51c6e7*/
                      WinAPI::Wrapper(-2147467261); /*0x51c6f6*/
                    if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v23 + 1652) + 16))(*(_DWORD *)(v23 + 1652)) ) /*0x51c704*/
                      ++v47; /*0x51c70b*/
                    goto LABEL_134; /*0x51c70b*/
                  default:
                    goto LABEL_134;
                }
              }
              v36 = AbstractClass::IsTechnoType((AbstractClass *)v23); /*0x51c59c*/
              if ( v36 && v36[136] == 2 ) /*0x51c5ac*/
              {
                if ( v19 < 1 ) /*0x51c5b1*/
                  v19 = 1; /*0x51c5b7*/
              }
              else
              {
                v37 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 44))(v23); /*0x51c5cc*/
                if ( TechnoClass::GetValue((TechnoClass *)this, -1) <= 0 && v37 != 36 ) /*0x51c5da*/
                  return 7; /*0x51c5da*/
                if ( v37 == 6 ) /*0x51c5e3*/
                {
                  if ( *(_BYTE *)(*(_DWORD *)(v23 + 1312) + 5814) ) /*0x51c62f*/
                    return 7; /*0x51c637*/
                  if ( v19 < 5 ) /*0x51c640*/
                    v19 = 5; /*0x51c646*/
                }
                else if ( v37 == 15 ) /*0x51c5e8*/
                {
                  if ( (*(unsigned __int8 (__thiscall **)(int, HouseClass *))(*(_DWORD *)v23 + 200))(v23, this->?) ) /*0x51c611*/
                    v19 = 6; /*0x51c61f*/
                }
                else if ( v37 != 36 && v19 < 5 ) /*0x51c5f6*/
                {
                  v19 = 5; /*0x51c5fc*/
                }
              }
              goto LABEL_134; /*0x51c5bc*/
            }
            v34 = *(_BYTE **)(v23 + 1312); /*0x51c492*/
            if ( !v34[5889] ) /*0x51c498*/
            {
              if ( !v34[5823] || (v35 = *(_DWORD *)(v23 + 1560), v35 != 12) && v35 != 8 ) /*0x51c4c2*/
              {
                if ( v34[5824] ) /*0x51c4c8*/
                {
                  if ( *(_BYTE *)(*(_DWORD *)(v23 + 540) + 506) ) /*0x51c4d8*/
                    return 7; /*0x51c4e0*/
                }
                else
                {
                  if ( !v34[5815] ) /*0x51c4f3*/
                    goto LABEL_96; /*0x51c4f3*/
                  if ( !(unsigned __int8)BuildingClass::IsPoweredOn((BuildingClass *)v23) ) /*0x51c4f7*/
                  {
                    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v23 + 540), (#375 *)this->?) ) /*0x51c511*/
                    {
                      if ( v19 < 3 ) /*0x51c51d*/
                        v19 = 3; /*0x51c523*/
                    }
                    else
                    {
                      if ( !(*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 171))(this) ) /*0x51c53a*/
                        return 7; /*0x51c53a*/
                      if ( v19 < 5 ) /*0x51c543*/
                        v19 = 5; /*0x51c549*/
                    }
                  }
                }
              }
            }
          }
        }
LABEL_134:
        v23 = *(_DWORD *)(v23 + 48); /*0x51c70f*/
        if ( !v23 ) /*0x51c714*/
        {
          v22 = v47; /*0x51c78b*/
          break; /*0x51c78b*/
        }
      }
    }
    if ( !this->? && !v40 && flt_89EA40[9 * *(_DWORD *)(a2 + 236) + this->Type->?[0]] == 0.0 ) /*0x51c7ce*/
      return 7; /*0x51c7dc*/
    if ( !v19 && v41 ) /*0x51c7e9*/
      return 2; /*0x51c7f7*/
    if ( v43 != -1 )
    {
      if ( (unsigned __int8)HouseClass::IsAllied(this->?, v43) )
      {
        v38 = v42; /*0x51c813*/
        if ( (v42 & 0x1C) == 0x1C && v19 < 2 )
          return v22 != 3 ? 2 : 6;
        goto LABEL_159; /*0x51c824*/
      }
      if ( TechnoClass::GetValue((TechnoClass *)this, -1) <= 0 ) /*0x51c84c*/
        return 7; /*0x51c84c*/
      if ( v19 < 5 ) /*0x51c851*/
        return 5; /*0x51c861*/
    }
    v38 = v42; /*0x51c864*/
LABEL_159:
    if ( v19 ) /*0x51c86a*/
      return v19; /*0x51c86a*/
    v39 = (v38 & 0x1C) == 28; /*0x51c86e*/
    result = 7; /*0x51c870*/
    if ( !v39 ) /*0x51c875*/
      return v19; /*0x51c877*/
  }
  return result; /*0x51c02d*/
}



// ==== 0x0051C8B0  InfantryClass::GetFireError  this=InfantryClass  sig=csp ====
int __fastcall InfantryClass::GetFireError(InfantryClass *this, int a2, int *a3, int a4, int a5)
{
  int v6; // eax
  int result; // eax
  int *v8; // edi
  int v11; // ecx
  unsigned int v12; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ebp
  int v18; // esi
  int v19; // esi
  char v20[16]; // [esp+14h] [ebp-10h] BYREF

  _EBX = this; /*0x51c8b4*/
  v6 = this->SequenceAnim[0]; /*0x51c8b8*/
  if ( v6 == 11 /*0x51c8ee*/
    || v6 == 12
    || v6 == 13
    || v6 == 14
    || v6 == 15
    || v6 == 34
    || v6 == 35
    || v6 == 36
    || v6 == 20
    || v6 == 21 )
  {
    return 6; /*0x51c8fb*/
  }
  v8 = a3; /*0x51c907*/
  if ( TechnoClass::GetValue((TechnoClass *)this, -1) < 0 ) /*0x51c90d*/
  {
    if ( !a3 ) /*0x51c911*/
      return 5; /*0x51c911*/
    if ( (*(int (__thiscall **)(int *))(*a3 + 44))(a3) != 15 ) /*0x51c91d*/
      return 5; /*0x51c91d*/
    BuildingClass::GetHealthRatio((BuildingClass *)a3); /*0x51c921*/
    _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x51c926*/
    __asm /*0x51c92c*/
    {
      fcomp qword ptr [ecx+16F8h]
      fnstsw ax
    }
    if ( (_AX & 0x100) == 0 ) /*0x51c937*/
      return 5; /*0x51c944*/
  }
  if ( a3 )
  {
    if ( (*(int (__thiscall **)(int *))(*a3 + 44))(a3) == 1 )
    {
      if ( *(_BYTE *)((*((int (__thiscall **)(InfantryClass *))_EBX->FootClass + 33))(_EBX) + 1682) )
      {
        v11 = a3[170]; /*0x51c96b*/
        if ( v11 )
        {
          v12 = _EBX ? ((_EBX->? & 1) != 0 ? (unsigned int)_EBX : 0) : 0;
          if ( v11 != v12 ) /*0x51c98a*/
            return 5; /*0x51c997*/
        }
      }
    }
  }
  result = TriggerTypeClass::ReadINI((TechnoClass *)_EBX, a4, a3, a4, a5); /*0x51c9a7*/
  if ( !result ) /*0x51c9b2*/
  {
    __asm /*0x51c9b8*/
    {
      fld qword ptr [ebx+578h]
      fcomp ds:dbl_7E3860
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x51c9c9*/
      return 7; /*0x51c9c9*/
    if ( _EBX->? ) /*0x51c9cf*/
    {
      v14 = _EBX->SequenceAnim[0]; /*0x51c9d9*/
      if ( v14 != -1 && !byte_7EAF7C[4 * v14] ) /*0x51c9e4*/
        return 7; /*0x51c9ed*/
    }
    if ( _EBX->Type->? ) /*0x51c9f9*/
    {
      v15 = _EBX->?[0]; /*0x51ca07*/
      a5 = 0; /*0x51ca15*/
      if ( !v15 ) /*0x51ca1d*/
        goto LABEL_37; /*0x51ca1d*/
      v16 = StreamClass::Set2((StreamClass *)&a5, _EBX->?); /*0x51ca24*/
      if ( v16 < 0 && v16 != -2147467262 ) /*0x51ca32*/
        WinAPI::Wrapper(v16); /*0x51ca35*/
      if ( !a5 ) /*0x51ca40*/
LABEL_37:
        WinAPI::Wrapper(-2147467261); /*0x51ca47*/
      (*(void (__stdcall **)(int, char *))(*(_DWORD *)a5 + 12))(a5, v20); /*0x51ca59*/
      v17 = memcmp(v20, g_CLSID_JumpjetLocomotion.Data2, 16); /*0x51ca6a*/
      ComPtr::Release_Alt((ComPtr *)&a5); /*0x51ca79*/
      if ( !v17 && _EBX->Type->JumpJetTurn ) /*0x51ca8e*/
      {
        if ( !_EBX->?[0] ) /*0x51ca98*/
          WinAPI::Wrapper(-2147467261); /*0x51caa7*/
        if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)_EBX->?[0] + 128))(_EBX->?[0]) ) /*0x51cab5*/
          return 7; /*0x51caca*/
      }
      v8 = a3; /*0x51cacd*/
    }
    v18 = *(_DWORD *)(*((int (__thiscall **)(InfantryClass *, int))_EBX->FootClass + 254))(_EBX, a4); /*0x51cae0*/
    if ( !v18 ) /*0x51cae4*/
      goto LABEL_64; /*0x51cae4*/
    if ( *(_BYTE *)(v18 + 297) && _EBX->? ) /*0x51caf0*/
      return 7; /*0x51cb05*/
    if ( *(_BYTE *)(v18 + 336) && v8 != (int *)(*((int (__thiscall **)(InfantryClass *))_EBX->FootClass + 111))(_EBX) ) /*0x51cb1e*/
      return 5; /*0x51cb2b*/
    v19 = *(_DWORD *)(v18 + 172); /*0x51cb2e*/
    if ( v19 && *(_BYTE *)(v19 + 343) && v8 && (v8[5] & 2) != 0 && v8[14] ) /*0x51cb4c*/
    {
      return 5; /*0x51cb55*/
    }
    else
    {
LABEL_64:
      if ( !_EBX->?[0] ) /*0x51cb61*/
        WinAPI::Wrapper(-2147467261); /*0x51cb70*/
      result = (*(int (__stdcall **)(int))(*(_DWORD *)_EBX->?[0] + 140))(_EBX->?[0]); /*0x51cb7e*/
      if ( !result ) /*0x51cb86*/
        return 0; /*0x51cb88*/
    }
  }
  return result; /*0x51c8f0*/
}



// ==== 0x0051CBA0  InfantryClass::ValidatePlacement  this=InfantryClass  sig=csp ====
int __userpurge InfantryClass::ValidatePlacement@<eax>(
        InfantryClass *this,
        __int16 a2@<bx>,
        int a3@<ebp>,
        int a4,
        int a5)
{
  InfantryClass *v5; // ecx
  InfantryClass *v6; // esi
  char v7; // bl
  int result; // eax
  int v9; // edi
  InfantryTypeClass *Type; // eax
  int v11; // [esp+0h] [ebp-Ch]

  v6 = v5; /*0x51cba6*/
  v7 = FootClass::ValidatePlacement((FootClass *)this, a2, a3, a4, v11); /*0x51cbba*/
  result = (*((int (__thiscall **)(InfantryClass *))v6->FootClass + 299))(v6); /*0x51cbbc*/
  if ( (_BYTE)result ) /*0x51cbc4*/
  {
    LOBYTE(result) = v7; /*0x51cbc7*/
    return result; /*0x51cbcb*/
  }
  result = (*((int (__thiscall **)(InfantryClass *))v6->FootClass + 97))(v6); /*0x51cbd2*/
  if ( result == 28 ) /*0x51cbdb*/
  {
    LOBYTE(result) = v7; /*0x51cbde*/
    return result; /*0x51cbe2*/
  }
  if ( v6->? ) /*0x51cbe5*/
  {
    v9 = 1; /*0x51cbf3*/
    if ( (*((int (__thiscall **)(InfantryClass *))v6->FootClass + 97))(v6) == 17 ) /*0x51cc01*/
      v9 = 17; /*0x51cc03*/
    if ( (*((int (__thiscall **)(InfantryClass *))v6->FootClass + 97))(v6) == 8 ) /*0x51cc12*/
      v9 = 8; /*0x51cc18*/
    goto LABEL_37; /*0x51cc1a*/
  }
  InfantryClass::ProcessExitQueue(v6); /*0x51cc21*/
  if ( v6->? ) /*0x51cc26*/
  {
    v9 = 2; /*0x51cc34*/
    if ( (*((int (__thiscall **)(InfantryClass *))v6->FootClass + 97))(v6) == 8 ) /*0x51cc42*/
      v9 = 8; /*0x51cc44*/
    if ( (*((int (__thiscall **)(InfantryClass *))v6->FootClass + 97))(v6) == 17 ) /*0x51cc53*/
      v9 = 17; /*0x51cc59*/
    goto LABEL_37; /*0x51cc5b*/
  }
  result = (*((int (__thiscall **)(InfantryClass *))v6->FootClass + 97))(v6); /*0x51cc64*/
  if ( result == 5 /*0x51ccae*/
    || (result = (*((int (__thiscall **)(InfantryClass *))v6->FootClass + 97))(v6), result == 11)
    || (*((int (__thiscall **)(InfantryClass *))v6->FootClass + 97))(v6) != -1
    && ((result = (int)MissionClass::GetMissionControl((MissionClass *)v6), *(_BYTE *)(result + 5))
     || (result = (int)MissionClass::GetMissionControl((MissionClass *)v6), *(_BYTE *)(result + 7))) )
  {
    LOBYTE(result) = 0; /*0x51cda6*/
    return result; /*0x51cda6*/
  }
  if ( (unsigned __int8)House::IsCurrentPlayer((House *)v6->?) || v6->? ) /*0x51ccc8*/
  {
    if ( v6->? != 11 /*0x51cd64*/
      && (!(unsigned __int8)TechnoTypeClass::HasVoiceResponse((int *)v6, 16) && !BYTE1(v6->Type->?[0]) || v6->?) )
    {
      v9 = 5; /*0x51cd6e*/
      goto LABEL_37; /*0x51cd73*/
    }
    goto LABEL_36; /*0x51cd6c*/
  }
  if ( v6->?->iqLevel2 >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5184) || v6->? == 11 ) /*0x51ccf5*/
  {
    if ( v6->? ) /*0x51ccfe*/
    {
      v9 = 5; /*0x51cd08*/
      goto LABEL_37; /*0x51cd0d*/
    }
    if ( !(*((unsigned __int8 (__thiscall **)(InfantryClass *))v6->FootClass + 171))(v6) ) /*0x51cd13*/
    {
      Type = v6->Type; /*0x51cd1d*/
      if ( !Type->Engineer && !Type->VehicleThief ) /*0x51cd2d*/
      {
        v9 = 5; /*0x51cd37*/
        goto LABEL_37; /*0x51cd3c*/
      }
    }
LABEL_36:
    v9 = 11; /*0x51cd75*/
    goto LABEL_37; /*0x51cd75*/
  }
  v9 = 5; /*0x51ccf7*/
LABEL_37:
  result = v6->?; /*0x51cd7a*/
  if ( result != 25 && result != 11 ) /*0x51cd88*/
    result = (*((int (__thiscall **)(InfantryClass *, int, _DWORD))v6->FootClass + 122))(v6, v9, 0); /*0x51cd96*/
  LOBYTE(result) = v7; /*0x51cd9d*/
  return result; /*0x51cbc6*/
}



// ==== 0x0051CDB0  InfantryClass::ProcessIdleAction  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessIdleAction(InfantryClass *this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  char v7; // bl
  __int16 v8; // ax
  InfantryTypeClass *Type; // eax
  __int16 v10; // cx
  __int16 v11; // dx
  unsigned int v12; // [esp+8h] [ebp-24h]
  int v13; // [esp+Ch] [ebp-20h] BYREF
  double v14; // [esp+10h] [ebp-1Ch] BYREF
  double v15; // [esp+18h] [ebp-14h] BYREF
  int v16; // [esp+20h] [ebp-Ch] BYREF
  int v17; // [esp+24h] [ebp-8h]
  int v18; // [esp+28h] [ebp-4h]

  result = (*((int (__thiscall **)(InfantryClass *))this->FootClass + 285))(this); /*0x51cdb9*/
  if ( (_BYTE)result ) /*0x51cdc1*/
  {
    v14 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5904) * 1800.0; /*0x51cdeb*/
    v15 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5904) * 450.0; /*0x51cdfb*/
    v12 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x51ce0c*/
    v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x51ce10*/
    LOWORD(v4) = Math::RoundToInt((v14 - v15) * ((double)(int)v12 * 4.656612877414201e-10) + v15); /*0x51ce26*/
    v5 = v17; /*0x51ce2b*/
    this->?[0] = v3; /*0x51ce35*/
    this->?[1] = v5; /*0x51ce3b*/
    this->?[2] = v4; /*0x51ce3e*/
    if ( !this->Type->Fraidycat /*0x51ce67*/
      || (unsigned __int8)House::IsCurrentPlayer((House *)this->?)
      || this->PanicDurationLeft <= 50 )
    {
      v6 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 10); /*0x51cea1*/
      v7 = ObjectClass::StepCleanup((ObjectClass *)this, &stru_825538.Name[5]); /*0x51cea8*/
      if ( v7 && Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 10) < 5 ) /*0x51cec6*/
        v6 = 8; /*0x51cec8*/
      result = v6 - 1; /*0x51cecd*/
      switch ( v6 ) /*0x51ced9*/
      {
        case 1: /*0x51ced9*/
        case 2: /*0x51ced9*/
        case 7: /*0x51ced9*/
          result = (*((int (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 10, 0, 0); /*0x51cf4c*/
          if ( this->? ) /*0x51cf52*/
            goto LABEL_22; /*0x51cf52*/
          result = House::IsHumanPlayer((House *)this->?); /*0x51cf66*/
          if ( !(_BYTE)result ) /*0x51cf6d*/
            goto LABEL_22; /*0x51cf6d*/
          result = (int)this->Type; /*0x51cf73*/
          if ( *(int *)(result + 3736) <= 0 ) /*0x51cf81*/
            goto LABEL_22; /*0x51cf81*/
          result = Random::Range(&Randomizer_Global, 0, 2); /*0x51cf90*/
          if ( result ) /*0x51cf97*/
            goto LABEL_22; /*0x51cf97*/
          v16 = this->?[0]; /*0x51cfa7*/
          v17 = this->?[1]; /*0x51cfb2*/
          Type = this->Type; /*0x51cfb6*/
          v18 = this->?[2]; /*0x51cfbf*/
          result = (int)StartAudioControllerAt(*(_DWORD *)Type->VoiceComment[1], &v16, 0); /*0x51cfcb*/
          LOBYTE(result) = 1; /*0x51cfd2*/
          break; /*0x51cfd8*/
        case 3: /*0x51ced9*/
        case 4: /*0x51ced9*/
        case 5: /*0x51ced9*/
          result = (*((int (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 9, 0, 0); /*0x51ceea*/
          LOBYTE(result) = 1; /*0x51cef2*/
          break; /*0x51cef8*/
        case 6: /*0x51ced9*/
          LOWORD(v12) = (unsigned __int16)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7) << 13; /*0x51cf11*/
          LOBYTE(v8) = 0; /*0x51cf16*/
          HIBYTE(v8) = ((v12 >> 7) + 1) >> 1; /*0x51cf27*/
          LOWORD(v13) = v8; /*0x51cf2f*/
          result = FacingClass::Set_SyncLog((char *)this->?, &v13); /*0x51cf34*/
          LOBYTE(result) = 1; /*0x51cf3b*/
          break; /*0x51cf41*/
        case 8: /*0x51ced9*/
          LOWORD(v12) = (unsigned __int16)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7) << 13; /*0x51cff1*/
          LOBYTE(v10) = 0; /*0x51cff6*/
          HIBYTE(v10) = ((v12 >> 7) + 1) >> 1; /*0x51d007*/
          LOWORD(v14) = v10; /*0x51d009*/
          FacingClass::Set_SyncLog((char *)this->?, &v14); /*0x51d014*/
          if ( !v7 ) /*0x51d01b*/
          {
            result = House::IsCurrentPlayer((House *)this->?); /*0x51d023*/
            if ( (_BYTE)result ) /*0x51d02a*/
              goto LABEL_22; /*0x51d02a*/
            result = (int)this->Type; /*0x51d02c*/
            if ( !*(_BYTE *)(result + 3775) ) /*0x51d032*/
              goto LABEL_22; /*0x51d03a*/
          }
          result = (*((int (__thiscall **)(InfantryClass *, _BYTE *, int, _DWORD))this->FootClass + 93))( /*0x51d049*/
                     this,
                     &stru_A8EB00.?[1564],
                     1,
                     0);
          LOBYTE(result) = 1; /*0x51d051*/
          break; /*0x51d057*/
        case 9: /*0x51ced9*/
        case 10: /*0x51ced9*/
          LOWORD(v12) = (unsigned __int16)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7) << 13; /*0x51d06f*/
          LOBYTE(v11) = 0; /*0x51d074*/
          HIBYTE(v11) = ((v12 >> 7) + 1) >> 1; /*0x51d085*/
          LOWORD(v15) = v11; /*0x51d08d*/
          result = FacingClass::Set_SyncLog((char *)this->?, &v15); /*0x51d092*/
          goto LABEL_22; /*0x51d092*/
        default:
LABEL_22:
          LOBYTE(result) = 1; /*0x51d097*/
          break; /*0x51d09f*/
      }
    }
    else
    {
      result = (*((int (__thiscall **)(InfantryClass *, _BYTE *, int, _DWORD))this->FootClass + 93))( /*0x51ce76*/
                 this,
                 &stru_A8EB00.?[1564],
                 1,
                 0);
      LOBYTE(result) = 1; /*0x51ce7d*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x51d0a1*/
  }
  return result; /*0x51ce7c*/
}



// ==== 0x0051D0D0  InfantryClass::FindMoveTarget  this=InfantryClass  sig=csp ====
char __userpurge InfantryClass::FindMoveTarget@<al>(
        InfantryClass *this,
        double a2@<st0>,
        unsigned int *a3,
        unsigned int ptr_0,
        unsigned int a5)
{
  int *v5; // ecx
  char v6; // bl
  int *v7; // esi
  int v8; // eax
  char *MissionControl; // eax
  int v11; // eax
  int v12; // edi
  _DWORD *v13; // eax
  int v14; // ecx
  unsigned int v15; // edi
  int v16; // eax
  int v17; // edx
  _DWORD *v18; // eax
  int v19; // edi
  void *v20; // eax
  int v21; // edx
  _DWORD *v22; // eax
  char *v23; // edi
  int v24; // edi
  int v25; // eax
  char v26; // di
  int v27; // edi
  int v28; // edx
  __int16 v29; // cx
  void *v30; // ebp
  int v31; // ebx
  int LandHeight; // eax
  __int16 v33; // cx
  __int16 v34; // dx
  _DWORD *v35; // eax
  int v36; // edi
  void *v37; // eax
  double v39; // [esp+20h] [ebp-60h]
  double v40; // [esp+20h] [ebp-60h]
  double v41; // [esp+28h] [ebp-58h]
  double v42; // [esp+28h] [ebp-58h]
  __int16 v43[2]; // [esp+40h] [ebp-40h] BYREF
  __int16 v44[2]; // [esp+44h] [ebp-3Ch] BYREF
  __int16 v45[2]; // [esp+48h] [ebp-38h] BYREF
  unsigned int v46; // [esp+4Ch] [ebp-34h]
  unsigned int v47; // [esp+50h] [ebp-30h]
  int v48; // [esp+54h] [ebp-2Ch] BYREF
  int v49; // [esp+58h] [ebp-28h] BYREF
  int v50; // [esp+5Ch] [ebp-24h] BYREF
  int v51; // [esp+60h] [ebp-20h]
  int v52; // [esp+64h] [ebp-1Ch]
  _DWORD v53[3]; // [esp+68h] [ebp-18h] BYREF
  _WORD v54[4]; // [esp+74h] [ebp-Ch] BYREF
  int v55; // [esp+7Ch] [ebp-4h]

  v6 = (char)a3; /*0x51d0d5*/
  v7 = v5; /*0x51d0da*/
  v8 = v5[433]; /*0x51d0dd*/
  if ( (v8 == 27 || v8 == 28 || v8 == 29 || v8 == 30) && (_BYTE)a3 && (_BYTE)ptr_0 ) /*0x51d101*/
  {
    (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*v5 + 1368))(v5, 31, 0, 0); /*0x51d10d*/
  }
  else if ( (unsigned __int8)House::IsCurrentPlayer((House *)v5[135]) ) /*0x51d11b*/
  {
    MissionControl = (char *)v7[433]; /*0x51d124*/
    if ( MissionControl == (char *)27 /*0x51d148*/
      || MissionControl == (char *)28
      || MissionControl == (char *)29
      || MissionControl == (char *)30 )
    {
      return (char)MissionControl; /*0x51d148*/
    }
  }
  if ( !v7[413] ) /*0x51d150*/
    WinAPI::Wrapper(-2147467261); /*0x51d15d*/
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v7[413] + 16))(v7[413]) ) /*0x51d16b*/
    v6 = 0; /*0x51d172*/
  MissionControl = MissionClass::GetMissionControl((MissionClass *)v7); /*0x51d176*/
  if ( MissionControl[9] || v6 )
  {
    LOBYTE(MissionControl) = *(_BYTE *)(v7[432] + 3775); /*0x51d190*/
    if ( (_BYTE)MissionControl || !v7[173] || v6 )
    {
      MissionControl = (char *)v7[433]; /*0x51d1aa*/
      if ( MissionControl == (char *)-1 || MissionControl == (char *)31 || byte_7EAF7C[4 * (_DWORD)MissionControl] )
      {
        if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6125) /*0x51d1fa*/
          || (unsigned __int8)TechnoTypeClass::HasVoiceResponse(v7, 3)
          || (_BYTE)ptr_0
          || (LOBYTE(MissionControl) = House::IsCurrentPlayer((House *)v7[135]), !(_BYTE)MissionControl) )
        {
          if ( !v6 ) /*0x51d210*/
          {
LABEL_33:
            LOBYTE(MissionControl) = *(_BYTE *)(v7[432] + 3775); /*0x51d212*/
            if ( !(_BYTE)MissionControl ) /*0x51d220*/
              return (char)MissionControl; /*0x51d220*/
          }
        }
        else if ( !v6 ) /*0x51d1fe*/
        {
          if ( !v7[373] ) /*0x51d206*/
            return (char)MissionControl; /*0x51d206*/
          goto LABEL_33; /*0x51d206*/
        }
        _EAX = this; /*0x51d226*/
        ptr_0 = (unsigned int)this->FootClass; /*0x51d234*/
        if ( ptr_0 == *(_DWORD *)&stru_A8EB00.?[1564] /*0x51d252*/
          && this->? == *(void **)&stru_A8EB00.?[1568]
          && this->? == *(void **)&stru_A8EB00.?[1572] )
        {
          v12 = (*(int (__thiscall **)(int *, _WORD *))(*v7 + 72))(v7, v54); /*0x51d2e7*/
          v13 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*v7 + 72))(v7, v53); /*0x51d2f0*/
          v14 = (unsigned __int8)*(_DWORD *)(v12 + 4); /*0x51d2fd*/
          v50 = (unsigned __int8)*v13; /*0x51d308*/
          v51 = v14; /*0x51d30c*/
          if ( v50 == 128 && v14 == 128 ) /*0x51d314*/
          {
            v15 = *ProgressTimer::GetValue((ProgressTimer *)(v7 + 226), &v49); /*0x51d36b*/
          }
          else
          {
            __asm { fild [esp+50h+var_24] } /*0x51d316*/
            __asm
            {
              fsub ds:dbl_7E2808
              fstp [esp+60h+var_5C+4]; double
              fild [esp+60h+var_20]
              fsubr ds:dbl_7E2808
              fstp [esp+60h+var_64+4]; double
            }
            Math::CalcAngle(v40, v42); /*0x51d337*/
            __asm { fsub ds:dbl_7E2820 } /*0x51d33c*/
            __asm { fmul ds:dbl_7E2818 }
            LOWORD(ptr_0) = Math::RoundToInt(a2); /*0x51d350*/
            v15 = ptr_0; /*0x51d355*/
          }
          v16 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 4); /*0x51d385*/
          v17 = *v7; /*0x51d38a*/
          v46 = ((((v15 >> 12) + 1) >> 1) & 7) + v16 - 2; /*0x51d390*/
          a3 = 0; /*0x51d39f*/
          v18 = (_DWORD *)(*(int (__thiscall **)(int *, _WORD *, _DWORD))(v17 + 76))(v7, v54, 0); /*0x51d3ae*/
          LOWORD(ptr_0) = *v18 / 256; /*0x51d3c5*/
          HIWORD(ptr_0) = v18[1] / 256; /*0x51d3de*/
          LOBYTE(v18) = *((_BYTE *)v7 + 140); /*0x51d3e7*/
          this = (InfantryClass *)ptr_0; /*0x51d3f1*/
          *(_DWORD *)v45 = *LayerClass::Pathfinding_Find( /*0x51d42b*/
                              &stru_87F5F0.__pad_58[416],
                              *(_DWORD *)(v7[432] + 1660),
                              &v48,
                              (__int16 *)&this,
                              *(_DWORD *)(v7[432] + 1660),
                              -1,
                              0,
                              (char)v18,
                              1,
                              1,
                              0,
                              1,
                              0,
                              1,
                              (__int16 *)&a3,
                              0,
                              0);
          if ( v45[0] != *(_WORD *)&stru_A8EB00.?[1532] || v45[1] != *(_WORD *)&stru_A8EB00.?[1534] ) /*0x51d43d*/
          {
            v19 = *v7; /*0x51d43f*/
            v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x51d44d*/
            (*(void (__thiscall **)(int *, void *, int))(v19 + 1152))(v7, v20, 1); /*0x51d455*/
            if ( !v7[413] ) /*0x51d45b*/
              WinAPI::Wrapper(-2147467261); /*0x51d46a*/
            LOBYTE(MissionControl) = (*(char (__stdcall **)(int))(*(_DWORD *)v7[413] + 64))(v7[413]); /*0x51d478*/
            return (char)MissionControl; /*0x51d482*/
          }
        }
        else
        {
          v50 = v7[39]; /*0x51d266*/
          __asm { fild [esp+60h+var_24] } /*0x51d26a*/
          v51 = v7[40]; /*0x51d271*/
          __asm { fisub dword ptr [esp+60h+arg_8] } /*0x51d275*/
          v52 = v7[41]; /*0x51d27c*/
          __asm /*0x51d280*/
          {
            fstp [esp+60h+var_5C+4]; double
            fild dword ptr [eax+4]
            fisub [esp+60h+var_20]
            fstp [esp+60h+var_64+4]; double
          }
          Math::CalcAngle(v39, v41); /*0x51d28e*/
          __asm { fsub ds:dbl_7E2820 } /*0x51d293*/
          __asm { fmul ds:dbl_7E2818 }
          LOWORD(ptr_0) = Math::RoundToInt(a2); /*0x51d2a7*/
          v11 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 4); /*0x51d2ba*/
          v46 = v11 + ((((ptr_0 >> 12) + 1) >> 1) & 7) - 2; /*0x51d2d0*/
        }
        v21 = *v7; /*0x51d487*/
        this = 0; /*0x51d491*/
        a3 = 0; /*0x51d49b*/
        v22 = (_DWORD *)(*(int (__thiscall **)(int *, _WORD *, _DWORD))(v21 + 76))(v7, v54, 0); /*0x51d4a5*/
        LOWORD(ptr_0) = *v22 / 256; /*0x51d4b8*/
        HIWORD(ptr_0) = v22[1] / 256; /*0x51d4d0*/
        *(_DWORD *)v43 = ptr_0; /*0x51d4d9*/
        v23 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v43); /*0x51d4e8*/
        v24 = v23[283] + (*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*v7 + 188))(v7, 0) != 0 ? 4 : 0;
        (*(void (__thiscall **)(int *, _WORD *, _DWORD))(*v7 + 76))(v7, v54, 0); /*0x51d516*/
        v25 = v24 * *(_DWORD *)&stru_A8EB00.?[1628]; /*0x51d51e*/
        v26 = 0; /*0x51d521*/
        v55 = v25; /*0x51d523*/
        v48 = 0; /*0x51d527*/
        while ( 1 ) /*0x51d536*/
        {
          v27 = ((_BYTE)v46 + v26) & 7; /*0x51d536*/
          v28 = v27 & 7; /*0x51d53b*/
          v29 = LOWORD(g_DDrawSurfaceManager.scenario[v28 + 82]) + v43[0]; /*0x51d53e*/
          LOWORD(v28) = HIWORD(g_DDrawSurfaceManager.scenario[v28 + 82]); /*0x51d54d*/
          LOWORD(v47) = v29; /*0x51d555*/
          HIWORD(v47) = v43[1] + v28; /*0x51d569*/
          ptr_0 = v47; /*0x51d572*/
          v30 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&ptr_0); /*0x51d587*/
          if ( (unsigned __int8)LayerClass::IsWithinUsableArea( /*0x51d589*/
                                  (LayerClass *)&stru_87F5F0.__pad_58[416],
                                  (__int16 *)&ptr_0,
                                  1) )
          {
            v31 = *v7; /*0x51d596*/
            LandHeight = ObjectClass::GetLandHeight((ObjectClass *)v7); /*0x51d59e*/
            if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v31 + 428))( /*0x51d5a8*/
                    v7,
                    v30,
                    v27,
                    LandHeight,
                    0,
                    1) )
            {
              v33 = *(_WORD *)&stru_A8EB00.?[1532]; /*0x51d5b6*/
              v34 = *(_WORD *)&stru_A8EB00.?[1534]; /*0x51d5bc*/
              if ( this == *(InfantryClass **)&stru_A8EB00.?[1532] ) /*0x51d5cc*/
                this = (InfantryClass *)ptr_0; /*0x51d5d5*/
              if ( *(_WORD *)&stru_A8EB00.?[1532] || *(_WORD *)&stru_A8EB00.?[1534] ) /*0x51d5e5*/
                goto LABEL_57; /*0x51d5e5*/
              v53[1] = (SHIWORD(ptr_0) << 8) + 128; /*0x51d606*/
              v53[0] = ((__int16)ptr_0 << 8) + 128; /*0x51d612*/
              v53[2] = v55; /*0x51d626*/
              v35 = Terrain::ClimbCheck(&v50, v53); /*0x51d62a*/
              if ( ptr_0 == *v35 /*0x51d65c*/
                && (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&ptr_0) + 80)
                  & 0x100) == 0 )
              {
                v34 = *(_WORD *)&stru_A8EB00.?[1534]; /*0x51d683*/
                a3 = (unsigned int *)ptr_0; /*0x51d68a*/
                v33 = *(_WORD *)&stru_A8EB00.?[1532]; /*0x51d68e*/
LABEL_60:
                LOWORD(MissionControl) = (_WORD)a3; /*0x51d694*/
                *(_DWORD *)v44 = a3; /*0x51d69b*/
                if ( (_WORD)a3 != v33 ) /*0x51d69f*/
                  goto LABEL_65; /*0x51d69f*/
                if ( HIWORD(a3) == v34 ) /*0x51d6a6*/
                {
                  LOWORD(MissionControl) = (_WORD)this; /*0x51d6a8*/
                  *(_DWORD *)v44 = this; /*0x51d6ac*/
                }
                if ( (_WORD)MissionControl != v33 || v44[1] != v34 ) /*0x51d6ba*/
                {
LABEL_65:
                  (*(void (__thiscall **)(int *, int, _DWORD))(*v7 + 488))(v7, 2, 0); /*0x51d6c4*/
                  v36 = *v7; /*0x51d6ca*/
                  v37 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v44); /*0x51d6d8*/
                  LOBYTE(MissionControl) = (*(char (__thiscall **)(int *, void *, int))(v36 + 1152))(v7, v37, 1); /*0x51d6e0*/
                }
                return (char)MissionControl; /*0x51d6e0*/
              }
            }
          }
          v33 = *(_WORD *)&stru_A8EB00.?[1532]; /*0x51d65e*/
          v34 = *(_WORD *)&stru_A8EB00.?[1534]; /*0x51d664*/
LABEL_57:
          v26 = ++v48; /*0x51d66b*/
          if ( v48 >= 8 ) /*0x51d677*/
            goto LABEL_60; /*0x51d677*/
        }
      }
    }
  }
  return (char)MissionControl; /*0x51d47b*/
}



// ==== 0x0051D6F0  InfantryClass::ProcessDeployAction  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::ProcessDeployAction(InfantryClass *this, int a2, char a3, char a4)
{
  int v4; // edi
  __int16 *v6; // eax
  int v7; // eax
  int v8; // ebp
  int unknown_int_6E8; // eax
  InfantryTypeClass *v10; // eax
  InfantryTypeClass *Type; // eax
  int v12; // eax
  int (__thiscall **ptr_0)(InfantryClass *); // edx
  int v14; // ecx
  int (__thiscall **v15)(InfantryClass *); // edx
  int v16; // ecx
  int ProductionTimeMult; // eax
  int *v18; // edx
  int v19; // ecx
  int v20; // eax
  int v21; // edi
  int v22; // edi
  int v24; // [esp+Ch] [ebp-Ch] BYREF
  int v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]

  v4 = a2; /*0x51d6f6*/
  if ( a2 == -1 || !*(_DWORD *)(this->Type->Sequence[0] + 36 * a2 + 4) || this->SequenceAnim[0] == 33 && this->? ) /*0x51d72b*/
    return 0; /*0x51d72b*/
  if ( this->? /*0x51d771*/
    && *(_DWORD *)((*((int (__thiscall **)(InfantryClass *))this->FootClass + 33))(this) + 2048)
    && ((double (__thiscall *)(InfantryClass *))*((_DWORD *)this->FootClass + 173))(this) == 1.0
    && v4 == 3 )
  {
    v4 = 39; /*0x51d773*/
    goto LABEL_12; /*0x51d778*/
  }
  if ( v4 == 5 && !this->Type->Crawls ) /*0x51d785*/
    return 0; /*0x51dadc*/
LABEL_12:
  if ( this->Type->?[0] == 3 ) /*0x51d7a0*/
  {
    v6 = (__int16 *)(*((int (__thiscall **)(InfantryClass *, int *))this->FootClass + 110))(this, &a2); /*0x51d7b0*/
    v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v6) + 59); /*0x51d7c1*/
    v8 = 1; /*0x51d7c7*/
    if ( (v7 == 6 || v7 == 2) && !this->? ) /*0x51d7d6*/
    {
      v8 = 0; /*0x51d7e0*/
      switch ( v4 ) /*0x51d7ea*/
      {
        case 3: /*0x51d7ea*/
        case 6: /*0x51d7ea*/
          v4 = 17; /*0x51d83d*/
          break;
        case 2: /*0x51d7ea*/
        case 0: /*0x51d7ea*/
          v4 = 16; /*0x51d836*/
          break;
        case 9: /*0x51d7ea*/
          v4 = 18; /*0x51d7fa*/
          break;
        case 10: /*0x51d7ea*/
          v4 = 19; /*0x51d806*/
          break;
        case 11: /*0x51d7ea*/
          v4 = 20; /*0x51d812*/
          break;
        case 12: /*0x51d7ea*/
          v4 = 21; /*0x51d81e*/
          break;
        case 4: /*0x51d7ea*/
        case 8: /*0x51d7ea*/
          v4 = 22; /*0x51d82f*/
          break;
      }
    }
    unknown_int_6E8 = this->unknown_int_6E8; /*0x51d842*/
    if ( unknown_int_6E8 || v8 != 1 ) /*0x51d84f*/
    {
      if ( unknown_int_6E8 == 1 && !v8 ) /*0x51d886*/
      {
        v24 = this->?[0]; /*0x51d891*/
        v25 = this->?[1]; /*0x51d89c*/
        Type = this->Type; /*0x51d8a0*/
        v26 = this->?[2]; /*0x51d8a9*/
        StartAudioControllerAt(Type->EnterWaterSound, &v24, 0); /*0x51d8b3*/
      }
    }
    else
    {
      v24 = this->?[0]; /*0x51d85b*/
      v25 = this->?[1]; /*0x51d866*/
      v10 = this->Type; /*0x51d86a*/
      v26 = this->?[2]; /*0x51d873*/
      StartAudioControllerAt(v10->LeaveWaterSound, &v24, 0); /*0x51d87d*/
    }
    this->unknown_int_6E8 = v8; /*0x51d8b8*/
  }
  if ( !(*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 21))(this) /*0x51d8ec*/
    || this->?
    || *(int *)(this->Type->Sequence[0] + 828) <= 0
    || v4 )
  {
    if ( v4 == 3 && this->PanicDurationLeft >= 200 ) /*0x51d904*/
      v4 = 37; /*0x51d906*/
  }
  else
  {
    v4 = 23; /*0x51d8ee*/
  }
  v12 = this->SequenceAnim[0]; /*0x51d90b*/
  if ( v4 == v12 || v12 != -1 && !a3 && !byte_7EAF7C[4 * v12] ) /*0x51d925*/
    return 0; /*0x51d92e*/
  if ( v4 == 27 ) /*0x51d937*/
  {
    if ( *(_DWORD *)((*((int (__thiscall **)(InfantryClass *))this->FootClass + 33))(this) + 1388) != -1 ) /*0x51d949*/
    {
      v24 = this->?[0]; /*0x51d95d*/
      v25 = this->?[1]; /*0x51d966*/
      ptr_0 = (int (__thiscall **)(InfantryClass *))this->FootClass; /*0x51d96a*/
      v26 = this->?[2]; /*0x51d96f*/
      v14 = *(_DWORD *)(ptr_0[33](this) + 1388); /*0x51d979*/
      StartAudioControllerAt(v14, &v24, 0); /*0x51d97f*/
    }
  }
  else if ( v4 == 31 && *(_DWORD *)((*((int (__thiscall **)(InfantryClass *))this->FootClass + 33))(this) + 1392) != -1 ) /*0x51d996*/
  {
    v24 = this->?[0]; /*0x51d9a6*/
    v15 = (int (__thiscall **)(InfantryClass *))this->FootClass; /*0x51d9aa*/
    v25 = this->?[1]; /*0x51d9af*/
    v26 = this->?[2]; /*0x51d9b6*/
    v16 = *(_DWORD *)(v15[33](this) + 1392); /*0x51d9c2*/
    StartAudioControllerAt(v16, &v24, 0); /*0x51d9ca*/
  }
  this->SequenceAnim[0] = v4; /*0x51d9d2*/
  if ( v4 == 9 || v4 == 10 || v4 == 18 || v4 == 19 || v4 == 23 || v4 == 32 ) /*0x51d9f1*/
  {
    ProductionTimeMult = (int)Rules::GetProductionTimeMult( /*0x51da02*/
                                (Rules *)&stru_A8EB00.ObjectTypeClass[24],
                                (unsigned __int8)byte_7EAF7F[4 * v4]);
    v18 = &this->?[2]; /*0x51da0d*/
    this->?[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x51da13*/
    v19 = v25; /*0x51da19*/
  }
  else
  {
    ProductionTimeMult = (unsigned __int8)byte_7EAF7F[4 * v4]; /*0x51da27*/
    v18 = &this->?[2]; /*0x51da2e*/
    this->?[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x51da34*/
    v19 = v25; /*0x51da3a*/
  }
  v18[1] = v19; /*0x51da3e*/
  v18[2] = ProductionTimeMult; /*0x51da41*/
  this->?[5] = ProductionTimeMult; /*0x51da44*/
  if ( a4 ) /*0x51da50*/
  {
    v20 = *(_DWORD *)(this->Type->Sequence[0] + 36 * v4 + 4); /*0x51da61*/
    if ( v20 <= 1 ) /*0x51da68*/
      v20 = 1; /*0x51da6a*/
    this->?[0] = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v20 - 1); /*0x51da84*/
  }
  else
  {
    this->?[0] = 0; /*0x51da8c*/
  }
  if ( !this->? ) /*0x51da96*/
    (*((void (__thiscall **)(InfantryClass *))this->FootClass + 320))(this); /*0x51daa1*/
  v21 = v4 - 5; /*0x51daa7*/
  if ( v21 ) /*0x51daaa*/
  {
    v22 = v21 - 2; /*0x51daac*/
    if ( !v22 || v22 == 20 ) /*0x51dab4*/
    {
      this->Crawling = 0; /*0x51dab6*/
      return 1; /*0x51dac5*/
    }
  }
  else
  {
    this->Crawling = 1; /*0x51dac8*/
  }
  return 1; /*0x51dabd*/
}



// ==== 0x0051DAF0  InfantryClass::PlayIdleAnim  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::PlayIdleAnim(InfantryClass *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int (__thiscall **ptr_0)(InfantryClass *, CellClass *, unsigned int, int, _DWORD, int); // ebx
  int v5; // eax
  int v6; // edx
  CellClass *v7; // eax
  int LandHeight; // [esp-Ch] [ebp-28h]
  int v10; // [esp+Ch] [ebp-10h] BYREF
  _DWORD v11[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = this->SequenceAnim[0]; /*0x51daf6*/
  if ( v2 == 27 || v2 == 28 || v2 == 29 || v2 == 30 ) /*0x51db0e*/
  {
    (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 28, 0, 0); /*0x51db18*/
  }
  else if ( this->Crawling ) /*0x51db1a*/
  {
    (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 2, 0, 0); /*0x51db2e*/
  }
  else
  {
    (*((void (__thiscall **)(InfantryClass *, _DWORD, _DWORD, _DWORD))this->FootClass + 342))(this, 0, 0, 0); /*0x51db40*/
  }
  v3 = *ProgressTimer::GetValue((ProgressTimer *)this->?, &v10); /*0x51db58*/
  ptr_0 = (int (__thiscall **)(InfantryClass *, CellClass *, unsigned int, int, _DWORD, int))this->FootClass; /*0x51db60*/
  v5 = this->?[0]; /*0x51db64*/
  v6 = this->?[2]; /*0x51db71*/
  v11[1] = this->?[1]; /*0x51db74*/
  v11[0] = v5; /*0x51db7d*/
  v11[2] = v6; /*0x51db81*/
  LandHeight = ObjectClass::GetLandHeight((ObjectClass *)this); /*0x51db8a*/
  v7 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v11); /*0x51db96*/
  if ( ptr_0[107](this, v7, (((v3 >> 12) + 1) >> 1) & 7, LandHeight, 0, 1) ) /*0x51db9e*/
    this->InfantryClass_field_bool_6DC = 1; /*0x51dbbe*/
  else
    this->InfantryClass_field_bool_6DC = 0; /*0x51dbac*/
  return FootClass::PlayCOM_audio((FootClass *)this); /*0x51dbb7*/
}



// ==== 0x0051DBD0  InfantryClass::CalcFacingToTarget  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::CalcFacingToTarget(InfantryClass *this, int *a2)
{
  double v2; // st7
  int (__thiscall **ptr_0)(InfantryClass *, int *); // edx
  int v5; // ebx
  __int16 v6; // ax
  int v7; // ebx
  int v8; // eax
  double v9; // st7
  int v10; // eax
  CellClass *v11; // eax
  int *v12; // eax
  int (__thiscall **v13)(InfantryClass *, CellClass *, int, int, _DWORD, int); // ebx
  CellClass *v14; // eax
  int v15; // ebx
  __int16 v16; // ax
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  CellClass *v20; // eax
  int *v21; // eax
  void (__thiscall **v22)(InfantryClass *, int *); // edx
  char v24; // [esp+24h] [ebp-58h]
  char v25; // [esp+24h] [ebp-58h]
  int v26; // [esp+3Ch] [ebp-40h]
  int v27; // [esp+3Ch] [ebp-40h]
  double v28; // [esp+44h] [ebp-38h]
  double v29; // [esp+44h] [ebp-38h]
  _DWORD v30[2]; // [esp+4Ch] [ebp-30h] BYREF
  int v31; // [esp+54h] [ebp-28h]
  int v32; // [esp+58h] [ebp-24h] BYREF
  int v33; // [esp+5Ch] [ebp-20h]
  int v34; // [esp+60h] [ebp-1Ch]
  int v35[3]; // [esp+64h] [ebp-18h] BYREF
  int v36[3]; // [esp+70h] [ebp-Ch] BYREF

  v30[0] = *a2; /*0x51dbe5*/
  v30[1] = a2[1]; /*0x51dbee*/
  ptr_0 = (int (__thiscall **)(InfantryClass *, int *))this->FootClass; /*0x51dbf2*/
  v31 = a2[2]; /*0x51dbf7*/
  v5 = ptr_0[18](this, v35); /*0x51dc03*/
  Int64::Equal((Int64 *)v5, a2); /*0x51dc08*/
  Math::CalcAngle((double)*(int *)(v5 + 4) - (double)a2[1], (double)*a2 - (double)*(int *)v5); /*0x51dc24*/
  v6 = Math::RoundToInt(v2); /*0x51dc35*/
  v7 = a2[2]; /*0x51dc43*/
  v28 = (double)((__int16)(v6 + 0x7FFF) - 0x3FFF) * -0.00009587672516830327; /*0x51dc63*/
  Math::SinCos(v28); /*0x51dc78*/
  LOWORD(v8) = Math::RoundToInt(v2); /*0x51dc87*/
  v26 = v8; /*0x51dc90*/
  Math::ArcTan2(v28); /*0x51dc9a*/
  v9 = v2 * 124.0 + (double)*a2; /*0x51dca8*/
  LOWORD(v10) = Math::RoundToInt(v9); /*0x51dcaa*/
  v33 = v26; /*0x51dcb5*/
  v32 = v10; /*0x51dcbf*/
  v34 = v7; /*0x51dcc3*/
  v24 = BYTE1(Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2)->flags[0]) & 1; /*0x51dcdc*/
  v11 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x51dceb*/
  v12 = ObjectPlacement::CalcPosition((ObjectPlacement *)v11, v36, &v32, 0, v24, 0); /*0x51dcf2*/
  *a2 = *v12; /*0x51dcfb*/
  a2[1] = v12[1]; /*0x51dd00*/
  a2[2] = v12[2]; /*0x51dd06*/
  if ( *a2 == *(_DWORD *)&stru_A8EB00.?[1564] /*0x51dd32*/
    && a2[1] == *(_DWORD *)&stru_A8EB00.?[1568]
    && a2[2] == *(_DWORD *)&stru_A8EB00.?[1572] )
  {
    v13 = (int (__thiscall **)(InfantryClass *, CellClass *, int, int, _DWORD, int))this->FootClass; /*0x51dd38*/
    v14 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v30); /*0x51dd4c*/
    if ( !v13[107](this, v14, -1, -1, 0, 1) ) /*0x51dd54*/
    {
      v15 = (*((int (__thiscall **)(InfantryClass *, int *))this->FootClass + 18))(this, v36); /*0x51dd6e*/
      Int64::Equal((Int64 *)v15, a2); /*0x51dd73*/
      Math::CalcAngle((double)*(int *)(v15 + 4) - (double)a2[1], (double)*a2 - (double)*(int *)v15); /*0x51dd8f*/
      v16 = Math::RoundToInt(v9); /*0x51dda0*/
      v17 = v31; /*0x51ddae*/
      v29 = (double)((__int16)(v16 + 0x7FFF) - 0x3FFF) * -0.00009587672516830327; /*0x51ddcf*/
      Math::SinCos(v29); /*0x51dde5*/
      LOWORD(v18) = Math::RoundToInt(v9); /*0x51ddf4*/
      v27 = v18; /*0x51ddfd*/
      Math::ArcTan2(v29); /*0x51de07*/
      LOWORD(v19) = Math::RoundToInt(v9 * 128.0 + (double)v30[0]); /*0x51de19*/
      v33 = v27; /*0x51de26*/
      v32 = v19; /*0x51de32*/
      v34 = v17; /*0x51de36*/
      v25 = BYTE1(Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v30)->flags[0]) & 1; /*0x51de52*/
      v20 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v30); /*0x51de61*/
      v21 = ObjectPlacement::CalcPosition((ObjectPlacement *)v20, v35, &v32, 1, v25, 0); /*0x51de68*/
      *a2 = *v21; /*0x51de71*/
      a2[1] = v21[1]; /*0x51de76*/
      a2[2] = v21[2]; /*0x51de7c*/
    }
  }
  if ( *a2 == *(_DWORD *)&stru_A8EB00.?[1564] /*0x51deb0*/
    && a2[1] == *(_DWORD *)&stru_A8EB00.?[1568]
    && a2[2] == *(_DWORD *)&stru_A8EB00.?[1572]
    || !FootClass::Destru_vt319((FootClass *)this, a2)
    || !this->? )
  {
    return 0; /*0x51deff*/
  }
  v32 = this->?[0]; /*0x51dec6*/
  v22 = (void (__thiscall **)(InfantryClass *, int *))this->FootClass; /*0x51deca*/
  v33 = this->?[1]; /*0x51decf*/
  v34 = this->?[2]; /*0x51dedb*/
  v22[61](this, &v32); /*0x51dee1*/
  (*((void (__thiscall **)(InfantryClass *, int *))this->FootClass + 60))(this, a2); /*0x51deec*/
  return 1; /*0x51def4*/
}



// ==== 0x0051DF10  InfantryClass::CancelMovement  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::CancelMovement(InfantryClass *this)
{
  if ( !this->?[0] ) /*0x51df13*/
    WinAPI::Wrapper(-2147467261); /*0x51df22*/
  (*(void (__stdcall **)(int))(*(_DWORD *)this->?[0] + 172))(this->?[0]); /*0x51df30*/
  this->unknown_int_6E8 = 2; /*0x51df38*/
  this->Crawling = 0; /*0x51df42*/
  this->SequenceAnim[0] = 0; /*0x51df49*/
  return TechnoClass::CleanupDirection((FootClass *)this); /*0x51df58*/
}



// ==== 0x0051DF60  InfantryClass::FireWeaponWithCleanup  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::FireWeaponWithCleanup(InfantryClass *this, int a2, int a3)
{
  int v4; // edi
  int (__thiscall **ptr_0)(InfantryClass *); // eax

  this->? = 0; /*0x51df70*/
  v4 = TechnoClass::FireWeapon((TechnoClass *)this); /*0x51df7c*/
  if ( v4 ) /*0x51df80*/
  {
    if ( !this->? ) /*0x51df82*/
    {
      if ( this->Type->Fraidycat ) /*0x51df92*/
      {
        if ( !this->? ) /*0x51df9c*/
        {
          ptr_0 = (int (__thiscall **)(InfantryClass *))this->FootClass; /*0x51dfa6*/
          this->PanicDurationLeft = 300; /*0x51dfaa*/
          if ( ptr_0[97](this) == 1 || (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 15 ) /*0x51dfcc*/
            (*((void (__thiscall **)(InfantryClass *, int, _DWORD))this->FootClass + 122))(this, 5, 0); /*0x51dfd6*/
        }
      }
    }
  }
  return v4; /*0x51dfde*/
}



// ==== 0x0051DFF0  InfantryClass::MoveToCell  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::MoveToCell(InfantryClass *this, int *a2, int a3)
{
  int *v3; // esi
  int GroundHeight; // ebx
  bool v6; // al
  CellClass *v7; // eax
  int *v8; // edx
  int result; // eax
  int v10; // ecx
  int v11; // edx
  char v12; // [esp-Ch] [ebp-30h]
  int v13; // [esp+Ch] [ebp-18h] BYREF
  int v14; // [esp+10h] [ebp-14h]
  int v15; // [esp+14h] [ebp-10h]
  int v16[3]; // [esp+18h] [ebp-Ch] BYREF

  v3 = a2; /*0x51dff5*/
  GroundHeight = Cell::GetGroundHeight(a2); /*0x51e007*/
  v13 = *v3; /*0x51e00d*/
  v14 = v3[1]; /*0x51e014*/
  v15 = v3[2]; /*0x51e01d*/
  if ( v15 == GroundHeight ) /*0x51e021*/
  {
    v6 = 1; /*0x51e078*/
    if ( !dword_A8E7AC ) /*0x51e02e*/
    {
      LOWORD(a2) = *v3 / 256; /*0x51e045*/
      HIWORD(a2) = v3[1] / 256; /*0x51e05e*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, (__int16 *)&a2, 1) ) /*0x51e06b*/
        v6 = 0; /*0x51e02e*/
    }
    v12 = v6; /*0x51e081*/
    v7 = Coord::To_Cell((Coord *)&dword_87F7E8, v3); /*0x51e08e*/
    v8 = ObjectPlacement::CalcPosition((ObjectPlacement *)v7, v16, v3, v12, 0, 0); /*0x51e0a0*/
    result = *v8; /*0x51e0a2*/
    v13 = result; /*0x51e0a4*/
    v10 = v8[1]; /*0x51e0aa*/
    v14 = v10; /*0x51e0ad*/
    v11 = v8[2]; /*0x51e0b1*/
    if ( result == dword_A8F200 && v10 == dword_A8F204 && v11 == dword_A8F208 ) /*0x51e0c4*/
      goto LABEL_16; /*0x51e0c4*/
    v15 = GroundHeight; /*0x51e0c6*/
  }
  if ( !FootClass::DispatchInput((double *)&this->ptr_0, (int)&v13, a3) ) /*0x51e0dd*/
  {
LABEL_16:
    LOBYTE(result) = 0; /*0x51e129*/
    return result; /*0x51e12b*/
  }
  if ( !*(_DWORD *)(this->Type + 1512) ) /*0x51e0e5*/
    this->isDiscoveredByCurrentPlayer[0] = 0; /*0x51e0ef*/
  result = GroundHeight + dword_A8F234; /*0x51e0ff*/
  if ( v15 <= GroundHeight + dword_A8F234 ) /*0x51e103*/
    result = (*(int (__thiscall **)(InfantryClass *, int *))(this->ptr_0 + 240))(this, &v13); /*0x51e10e*/
  this->unknown_int_6E8 = 2; /*0x51e114*/
  LOBYTE(result) = 1; /*0x51e120*/
  return result; /*0x51e11e*/
}



// ==== 0x0051E140  InfantryClass::SelectAutoTarget  this=InfantryClass  sig=csp ====
void *__userpurge InfantryClass::SelectAutoTarget@<eax>(
        InfantryClass *this,
        double a2@<st0>,
        unsigned int a3,
        __int64 a4)
{
  int v4; // ecx
  int v5; // esi
  int v6; // ecx
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  int v9; // eax
  InfantryClass *v11; // edi
  _BYTE *v12; // ecx
  int v13; // eax
  char v14; // cl
  Building **v15; // eax
  Building **v16; // eax
  int v17; // [esp+1Ch] [ebp-20h]
  int v18; // [esp+20h] [ebp-1Ch]
  _BYTE v19[12]; // [esp+24h] [ebp-18h] BYREF
  _DWORD v20[3]; // [esp+30h] [ebp-Ch] BYREF

  v5 = v4; /*0x51e144*/
  if ( (unsigned __int8)House::IsCurrentPlayer(*(House **)(v4 + 540)) || !*(_BYTE *)(*(_DWORD *)(v5 + 1728) + 3779) ) /*0x51e160*/
  {
    v11 = this; /*0x51e218*/
  }
  else
  {
    v6 = *(_DWORD *)(*(_DWORD *)(v5 + 540) + 21728); /*0x51e174*/
    if ( v6 ) /*0x51e17c*/
    {
      v7 = (_DWORD *)(*(int (__usercall **)@<eax>(int@<ecx>, _BYTE *, double@<st0>))(*(_DWORD *)v6 + 72))(v6, v19, a2); /*0x51e18e*/
      v8 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v5 + 72))(v5, v20); /*0x51e197*/
      v17 = v8[1] - v7[1]; /*0x51e1b5*/
      v18 = v8[2] - v7[2]; /*0x51e1bf*/
      Math::Sqrt((double)(*v8 - *v7) * (double)(*v8 - *v7) + (double)v18 * (double)v18 + (double)v17 * (double)v17); /*0x51e1e4*/
      LOWORD(v9) = Math::RoundToInt(a2); /*0x51e1ec*/
      if ( v9 < 3840 ) /*0x51e1f6*/
        return *(void **)(*(_DWORD *)(v5 + 540) + 21728); /*0x51e209*/
    }
    v11 = (InfantryClass *)((unsigned int)this | 0x200); /*0x51e210*/
  }
  if ( *(_BYTE *)(*(_DWORD *)(v5 + 1728) + 3782) ) /*0x51e222*/
  {
    v12 = *(_BYTE **)(v5 + 1444); /*0x51e22c*/
    if ( v12 ) /*0x51e234*/
    {
      if ( (v12[20] & 1) != 0 /*0x51e278*/
        && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v12 + 128))(v12)
        && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 1444) + 132))(*(_DWORD *)(v5 + 1444)) + 3220)
        && ObjectClass::DistanceTo((ObjectClass *)v5, *(_DWORD *)(v5 + 1444)) < 3840 )
      {
        return *(void **)(v5 + 1444); /*0x51e285*/
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 684))(v5) ) /*0x51e28c*/
    goto LABEL_21; /*0x51e294*/
  v13 = *(_DWORD *)(v5 + 1728); /*0x51e296*/
  v14 = *(_BYTE *)(v13 + 3782); /*0x51e2a4*/
  if ( !*(_BYTE *)(v13 + 3774) ) /*0x51e29c*/
  {
    if ( !v14 ) /*0x51e2ae*/
      return 0; /*0x51e2b7*/
    goto LABEL_20; /*0x51e2ae*/
  }
  if ( v14 ) /*0x51e2bc*/
LABEL_20:
    v11 = (InfantryClass *)((unsigned int)v11 & 0xFFFFFF4B | 0x10); /*0x51e2be*/
LABEL_21:
  if ( ((unsigned int)v11 & 0x1B978) == 0 ) /*0x51e2cd*/
  {
    if ( *(_DWORD *)(*(int (__usercall **)@<eax>(int@<ecx>, _DWORD, double@<st0>))(*(_DWORD *)v5 + 1016))(v5, 0, a2) ) /*0x51e2db*/
    {
      v15 = (Building **)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 1016))(v5, 0); /*0x51e2e6*/
      v11 = (InfantryClass *)(Building::GetRenderType(*v15) | (unsigned int)v11); /*0x51e2f3*/
    }
    if ( *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 1016))(v5, 1) ) /*0x51e301*/
    {
      v16 = (Building **)(*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 1016))(v5, 1); /*0x51e30c*/
      v11 = (InfantryClass *)(Building::GetRenderType(*v16) | (unsigned int)v11); /*0x51e319*/
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 684))(v5) /*0x51e33d*/
    && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 1016))(v5, 0) + 172) + 329) )
  {
    v11 = (InfantryClass *)((unsigned int)v11 & 0xFFFFFF4B); /*0x51e347*/
  }
  if ( (*(_BYTE *)(*(_DWORD *)(v5 + 1728) + 3778) || (unsigned __int8)TechnoTypeClass::HasVoiceResponse((int *)v5, 14)) /*0x51e370*/
    && !(unsigned __int8)House::IsCurrentPlayer(*(House **)(v5 + 540)) )
  {
    v11 = (InfantryClass *)((unsigned int)v11 | 0x20); /*0x51e379*/
  }
  if ( *(_BYTE *)(*(_DWORD *)(v5 + 1728) + 3781) ) /*0x51e382*/
    v11 = (InfantryClass *)((unsigned int)v11 | 0x240); /*0x51e38c*/
  return FootClass::SelectAutoTarget_Cloaked((FootClass *)v5, (int)v11, a3, a4); /*0x51e1fe*/
}



// ==== 0x0051E3B0  InfantryClass::GetCursorOverObject_EMP  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::GetCursorOverObject_EMP(InfantryClass *this, int *a2, int *a3)
{
  char v4; // bl
  int *v5; // esi
  int result; // eax
  int v7; // ebp
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v16; // eax
  void *v18; // eax
  int v19; // eax
  int v20; // edx
  int **i; // ecx
  InfantryTypeClass *Type; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // esi
  int (__thiscall **ptr_0)(InfantryClass *, int); // ebx
  int v29; // eax
  int v30; // eax
  int v31; // esi
  InfantryTypeClass *v32; // ecx
  int v33; // eax
  int v34; // eax
  InfantryTypeClass *v35; // eax
  int v36; // eax
  bool v37; // zf
  int v38; // eax
  int v39; // eax
  InfantryTypeClass *v40; // eax
  __int16 *v41; // eax
  int TileIndex; // eax
  int v43; // ecx
  int *v44; // eax
  __int16 v45; // bp
  __int16 v46; // bx
  int v47; // eax
  InfantryTypeClass *v48; // ecx
  int v49; // eax
  int v50; // eax
  char v51; // [esp+10h] [ebp-38h]
  char v52; // [esp+23h] [ebp-25h]
  __int16 v53; // [esp+24h] [ebp-24h]
  __int16 v54; // [esp+26h] [ebp-22h]
  int v55; // [esp+28h] [ebp-20h]
  int v56; // [esp+2Ch] [ebp-1Ch]
  _DWORD v57[2]; // [esp+34h] [ebp-14h] BYREF
  int v58[3]; // [esp+3Ch] [ebp-Ch] BYREF

  if ( !(_BYTE)a3 /*0x51e3e2*/
    && ((unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[36])
     || (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[40])) )
  {
    v4 = 1; /*0x51e3eb*/
  }
  else
  {
    v4 = 0; /*0x51e3f3*/
    if ( (_BYTE)a3 ) /*0x51e3f7*/
    {
LABEL_9:
      v52 = 0; /*0x51e42a*/
      goto LABEL_10; /*0x51e42a*/
    }
  }
  if ( !(unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[28]) /*0x51e421*/
    && !(unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[32]) )
  {
    goto LABEL_9; /*0x51e421*/
  }
  v52 = 1; /*0x51e423*/
LABEL_10:
  if ( v4 && v52 ) /*0x51e439*/
    v52 = 0; /*0x51e43b*/
  v5 = a2; /*0x51e444*/
  result = InfantryClass::GetCursorOverObject((FootClass *)this, (int)a2, (char)a3); /*0x51e44c*/
  v7 = result; /*0x51e451*/
  if ( result != 8 )
  {
    if ( this->Type->Engineer /*0x51e488*/
      && (unsigned __int8)House::IsHumanPlayer((House *)this->?)
      && v5[14]
      && *((_BYTE *)v5 + 104) )
    {
      return 57; /*0x51e49b*/
    }
    if ( !this->Type->Engineer ) /*0x51e4a4*/
      goto LABEL_39; /*0x51e4a4*/
    if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) != 6 ) /*0x51e4bc*/
      goto LABEL_39; /*0x51e4bc*/
    if ( !(unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x51e4c8*/
      goto LABEL_39; /*0x51e4c8*/
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*v5 + 128))(v5) ) /*0x51e4d9*/
      goto LABEL_39; /*0x51e4d9*/
    v8 = v5[328]; /*0x51e4e7*/
    if ( !*(_BYTE *)(v8 + 3276) ) /*0x51e4ed*/
      goto LABEL_39; /*0x51e4f5*/
    if ( *(_BYTE *)(v8 + 5814) ) /*0x51e4fb*/
    {
      v9 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*v5 + 72))(v5, v58); /*0x51e50e*/
      LOWORD(a3) = *v9 / 256; /*0x51e521*/
      HIWORD(a3) = v9[1] / 256; /*0x51e53a*/
      a2 = a3; /*0x51e547*/
      v10 = -(CellClass::CheckConnectivity((CellClass *)&stru_87F5F0.__pad_58[416], (int)&a2) != 0); /*0x51e553*/
      LOBYTE(v10) = v10 & 0xFD; /*0x51e556*/
      return v10 + 32; /*0x51e561*/
    }
    if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)v5)
      && (!*(_BYTE *)(*(_DWORD *)(v5[135] + 52) + 422)
       || !*(_BYTE *)(v5[328] + 5499)
       || (*(unsigned __int8 (__thiscall **)(int *))(*v5 + 468))(v5)) )
    {
      if ( *(_BYTE *)(v5[328] + 5490) ) /*0x51e5ab*/
      {
        BuildingClass::GetHealthRatio((BuildingClass *)v5); /*0x51e5bb*/
        _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x51e5c0*/
        __asm /*0x51e5c6*/
        {
          fld dword ptr [ecx+17F8h]
          fcompp
          fnstsw ax
        }
        if ( (_AX & 0x100) != 0 ) /*0x51e5d3*/
          return 28; /*0x51e5e5*/
        return 9; /*0x51e5d3*/
      }
LABEL_39:
      if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 6 /*0x51e6a3*/
        && (unsigned __int8)House::IsHumanPlayer((House *)this->?)
        && !(*(unsigned __int8 (__thiscall **)(int *))(*v5 + 468))(v5)
        && (unsigned __int8)BuildingClass::CanRepair((BuildingClass *)v5, (int)this)
        && !v52 )
      {
        return 9; /*0x51e6a3*/
      }
      if ( this->Type->Engineer && v7 == 5 ) /*0x51e6c7*/
        return 2; /*0x51e6d5*/
      if ( TechnoClass::GetValue((TechnoClass *)this, -1) < 0 && (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x51e6ef*/
      {
        if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)v5) ) /*0x51e70a*/
          return 59; /*0x51e7a3*/
        if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 15 ) /*0x51e71a*/
        {
          if ( v5 == (int *)this ) /*0x51e71e*/
            return 26; /*0x51e754*/
          BuildingClass::GetHealthRatio((BuildingClass *)v5); /*0x51e722*/
          _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x51e727*/
          __asm /*0x51e72c*/
          {
            fcomp qword ptr [eax+16F8h]
            fnstsw ax
          }
          if ( (_EAX & 0x100) != 0 ) /*0x51e737*/
            return 27; /*0x51e745*/
        }
        v18 = AbstractClass::IsTechno((AbstractClass *)v5); /*0x51e759*/
        if ( !v18 || !*(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)v18 + 132))(v18) + 1504) ) /*0x51e76c*/
        {
          if ( v7 != 26 && v7 != 1 ) /*0x51e782*/
            return 7; /*0x51e794*/
          return v7; /*0x51e782*/
        }
      }
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) /*0x51e7d1*/
        && this->Type->VehicleThief
        && (*(unsigned __int8 (__thiscall **)(int *))(*v5 + 128))(v5) )
      {
        if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*v5 + 132))(v5) + 3220) ) /*0x51e7e5*/
          return 7; /*0x51e7fb*/
        if ( (HouseClass *)v5[135] != this->? ) /*0x51e80c*/
        {
          if ( ((int)dword_A8B230->ptr_0 & 0x800) == 0 ) /*0x51e819*/
            return 9; /*0x51e819*/
          v19 = 0; /*0x51e825*/
          v20 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2892); /*0x51e827*/
          if ( v20 <= 0 ) /*0x51e82f*/
            return 9; /*0x51e6b1*/
          for ( i = *(int ***)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2880); *i != v5; ++i ) /*0x51e835*/
          {
            if ( ++v19 >= v20 ) /*0x51e849*/
              return 9; /*0x51e857*/
          }
          return 7; /*0x51e83d*/
        }
      }
      if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 6 /*0x51e8b1*/
        && (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)v5)
        && (unsigned __int8)House::IsHumanPlayer((House *)this->?)
        && !(*(unsigned __int8 (__thiscall **)(int *))(*v5 + 468))(v5)
        && *(_BYTE *)(v5[328] + 5825)
        && !v52 )
      {
        Type = this->Type; /*0x51e8b3*/
        if ( this->? >= Type->? ) /*0x51e8c2*/
          goto LABEL_88; /*0x51e8c2*/
        if ( !Type->Deployer || (v23 = this->SequenceAnim[0], v23 != 27) && v23 != 28 && v23 != 29 && v23 != 30 ) /*0x51e8e6*/
        {
          v24 = (*((int (__thiscall **)(InfantryClass *, int, int *))this->FootClass + 158))(this, 15, v5) - 1; /*0x51e8f5*/
          if ( !v24 ) /*0x51e8f6*/
          {
            v7 = 3; /*0x51e9ab*/
            goto LABEL_89; /*0x51e9b0*/
          }
          if ( v24 == 9 ) /*0x51e8ff*/
LABEL_88:
            v7 = 31; /*0x51e901*/
        }
      }
LABEL_89:
      if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) != 6 /*0x51e951*/
        || !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)v5)
        || !(unsigned __int8)House::IsHumanPlayer((House *)this->?)
        || (*(unsigned __int8 (__thiscall **)(int *))(*v5 + 468))(v5)
        || !*(_BYTE *)(v5[328] + 5826) )
      {
        goto LABEL_106; /*0x51e959*/
      }
      if ( !(unsigned __int8)Audio::IsLoud(this->?) ) /*0x51e961*/
      {
        if ( this->Type->Deployer ) /*0x51e970*/
        {
          v25 = this->SequenceAnim[0]; /*0x51e97a*/
          if ( v25 == 27 || v25 == 28 || v25 == 29 || v25 == 30 ) /*0x51e992*/
            goto LABEL_106; /*0x51e992*/
        }
        v26 = (*((int (__thiscall **)(InfantryClass *, int, int *))this->FootClass + 158))(this, 15, v5) - 1; /*0x51e9a1*/
        if ( !v26 ) /*0x51e9a2*/
        {
          v7 = 3; /*0x51e9b5*/
          goto LABEL_106; /*0x51e9ba*/
        }
        if ( v26 != 9 ) /*0x51e9a7*/
          goto LABEL_106; /*0x51e9a7*/
      }
      v7 = 31; /*0x51e9bc*/
LABEL_106:
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) /*0x51ea06*/
        && (this->Type->C4 || (unsigned __int8)TechnoTypeClass::HasVoiceResponse((int *)this, 14))
        && v7 == 5
        && (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 6
        && !(*(unsigned __int8 (__thiscall **)(int *))(*v5 + 128))(v5) )
      {
        if ( v5 ) /*0x51ea12*/
        {
          if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 6 ) /*0x51ea22*/
          {
            v27 = v5[328]; /*0x51ea28*/
            if ( *(_BYTE *)(v27 + 5495) ) /*0x51ea2e*/
            {
              if ( !*(_BYTE *)(v27 + 5889) ) /*0x51ea3c*/
                return 16; /*0x51ea56*/
            }
          }
        }
        return 5; /*0x51eb21*/
      }
      ptr_0 = (int (__thiscall **)(InfantryClass *, int))this->FootClass; /*0x51ea59*/
      v29 = (*((int (__thiscall **)(InfantryClass *, int *))this->FootClass + 185))(this, v5); /*0x51ea5e*/
      v30 = *(_DWORD *)ptr_0[254](this, v29); /*0x51ea6d*/
      if ( v7 == 5 && v30 )
      {
        if ( *(_BYTE *)(v30 + 313) )
        {
          if ( !v5
            || (*(int (__thiscall **)(int *))(*v5 + 44))(v5) != 1
            || !*((*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 1 ? v5 + 185 : (int *)740) )
          {
            return 64; /*0x51eacf*/
          }
          return 7; /*0x51eac0*/
        }
        if ( *(_BYTE *)(v30 + 314) ) /*0x51ead2*/
        {
          if ( v5 ) /*0x51eade*/
          {
            if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 6 ) /*0x51eaea*/
            {
              v31 = v5[328]; /*0x51eaec*/
              if ( *(_BYTE *)(v31 + 5495) ) /*0x51eaf2*/
              {
                if ( !*(_BYTE *)(v31 + 5889) ) /*0x51eafc*/
                  return 71; /*0x51eb12*/
              }
            }
          }
          return 5; /*0x51eb04*/
        }
      }
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) && v7 == 5 && this->Type->Ivan ) /*0x51eb3e*/
      {
        if ( !*(_BYTE *)((*(int (__thiscall **)(int *))(*v5 + 136))(v5) + 558) || v5[14] ) /*0x51eb5c*/
          return 54; /*0x51eb75*/
        else
          return 53; /*0x51eb66*/
      }
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x51eb87*/
      {
        v32 = this->Type; /*0x51eb94*/
        if ( v32->Deployer ) /*0x51eb9a*/
        {
          v33 = this->SequenceAnim[0]; /*0x51eba8*/
          if ( v33 == 27 || v33 == 28 || v33 == 29 || v33 == 30 ) /*0x51ebc0*/
          {
            switch ( v7 ) /*0x51ebc9*/
            {
              case 1: /*0x51ebc9*/
                return 2; /*0x51ebd7*/
              case 5: /*0x51ebc9*/
                if ( !v32->? ) /*0x51ebdf*/
                  return 2; /*0x51ebdf*/
                v34 = (*((int (__thiscall **)(InfantryClass *, _DWORD))this->FootClass + 185))(this, 0); /*0x51ebef*/
                if ( !(*((unsigned __int8 (__thiscall **)(InfantryClass *, int *, int))this->FootClass + 234))( /*0x51ebfb*/
                        this,
                        v5,
                        v34) )
                  return 2; /*0x51ec11*/
                break;
              case 4: /*0x51ebc9*/
                if ( !ScriptAction::SetField10((ScriptAction *)4) ) /*0x51ec1b*/
                  return 30; /*0x51ec30*/
                if ( this->Type->? > -1 ) /*0x51ec40*/
                  return 30; /*0x51ec4e*/
                break;
            }
          }
        }
      }
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) )
      {
        if ( v7 == 4 ) /*0x51ec63*/
        {
          v35 = this->Type; /*0x51ec69*/
          if ( v35->Deployer && v35->? > -1 && this->SequenceAnim[0] == 31 ) /*0x51ec89*/
            return 30; /*0x51ec97*/
          goto LABEL_163; /*0x51ec89*/
        }
      }
      else if ( v7 == 4 )
      {
LABEL_163:
        if ( ScriptAction::SetField10((ScriptAction *)4) ) /*0x51eca4*/
        {
          if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x51ecb3*/
          {
            if ( *(_DWORD *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 252))(this) /*0x51ecdb*/
              && *(_BYTE *)(*(_DWORD *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 252))(this) + 336) )
            {
              v7 = 52; /*0x51ece5*/
            }
            else if ( !this->Type->Deployer ) /*0x51ecf2*/
            {
              v7 = 0; /*0x51ecfc*/
            }
          }
          else
          {
            v7 = 0; /*0x51ecbc*/
          }
        }
        else
        {
          v7 = 30; /*0x51ed00*/
        }
LABEL_173:
        if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)v5) ) /*0x51ed17*/
        {
          if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x51ed2a*/
          {
            if ( AbstractClass::IsTechno((AbstractClass *)v5) ) /*0x51ed39*/
            {
              if ( !(*(unsigned __int8 (__thiscall **)(int *))(*v5 + 468))(v5) /*0x51ed76*/
                && !(*(unsigned __int8 (__thiscall **)(int *))(*v5 + 472))(v5)
                && v7 != 5
                && v7 != 26 )
              {
                v36 = (*(int (__thiscall **)(int *))(*v5 + 132))(v5); /*0x51ed80*/
                if ( v36 ) /*0x51ed88*/
                {
                  if ( *(int *)(v36 + 1504) > 0 /*0x51eda0*/
                    && (*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 40))(this) )
                  {
                    if ( BYTE2(this->Type->?) ) /*0x51edb4*/
                    {
                      v7 = 31; /*0x51edbe*/
                    }
                    else
                    {
                      if ( !v5 ) /*0x51edc7*/
                        goto LABEL_193; /*0x51edc7*/
                      v37 = (v5[5] & 4) == 0; /*0x51edcf*/
                      LOBYTE(a3) = (v5[5] & 4) != 0; /*0x51edd2*/
                      if ( v37 ) /*0x51edd6*/
                        goto LABEL_193; /*0x51edd6*/
                      v38 = v5[373]; /*0x51edd8*/
                      if ( v38 ) /*0x51ede0*/
                      {
                        if ( !*(_BYTE *)(*(_DWORD *)(v38 + 36) + 164) ) /*0x51ede5*/
                          goto LABEL_192; /*0x51ede5*/
                      }
                      if ( !v5[413] ) /*0x51edef*/
                        WinAPI::Wrapper(-2147467261); /*0x51edfe*/
                      if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v5[413] + 16))(v5[413]) ) /*0x51ee0c*/
                      {
LABEL_192:
                        v7 = 31; /*0x51ee13*/
                      }
                      else
                      {
LABEL_193:
                        v39 = (*((int (__thiscall **)(InfantryClass *, int, int *))this->FootClass + 158))(this, 15, v5) /*0x51ee27*/
                            - 1;
                        if ( v39 ) /*0x51ee28*/
                        {
                          if ( v39 == 9 ) /*0x51ee2d*/
                            v7 = 31; /*0x51ee2f*/
                        }
                        else
                        {
                          v7 = 3; /*0x51ee36*/
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_197:
        if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) && (v40 = this->Type, v40->Infiltrate) ) /*0x51ee54*/
        {
          if ( v7 == 5 ) /*0x51ee65*/
          {
            if ( !v40->Agent /*0x51eedf*/
              && !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)v5)
              && (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 6
              && *(_BYTE *)(v5[328] + 5490)
              || this->Type->Agent
              && !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)v5)
              && (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 6
              && *(_BYTE *)(v5[328] + 5494) )
            {
              v7 = 9; /*0x51eeef*/
              if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 6 ) /*0x51ef00*/
              {
                (*(void (__thiscall **)(int *))(*v5 + 72))(v5); /*0x51ef0f*/
                v41 = (__int16 *)(*((int (__thiscall **)(InfantryClass *, int **, int, _DWORD))this->FootClass + 112))( /*0x51ef58*/
                                   this,
                                   &a2,
                                   this->Type->?[0],
                                   (unsigned __int8)this->?);
                TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v41, (int)v58, v51); /*0x51ef64*/
                v43 = v5[328]; /*0x51ef69*/
                v58[0] = TileIndex; /*0x51ef71*/
                a2 = (int *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v43 + 144))(v43, 0); /*0x51ef7d*/
                LOBYTE(a3) = 0; /*0x51ef81*/
LABEL_210:
                while ( (*(_WORD *)a2 != 0x7FFF || *((_WORD *)a2 + 1) != 0x7FFF) && !(_BYTE)a3 ) /*0x51efa3*/
                {
                  v44 = a2++; /*0x51efb2*/
                  v55 = 0; /*0x51efbb*/
                  v45 = *(_WORD *)v44 + v53; /*0x51efc7*/
                  v46 = v54 + *((_WORD *)v44 + 1); /*0x51efca*/
                  while ( 1 ) /*0x51efd5*/
                  {
                    v47 = v55 & 7; /*0x51efd5*/
                    LOWORD(v56) = v45 + LOWORD(g_DDrawSurfaceManager.scenario[v47 + 82]); /*0x51eff5*/
                    v48 = this->Type; /*0x51effa*/
                    HIWORD(v56) = v46 + HIWORD(g_DDrawSurfaceManager.scenario[v47 + 82]); /*0x51f000*/
                    v57[0] = v56; /*0x51f009*/
                    v49 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], (__int16 *)v57, v48->?[0], 0); /*0x51f01e*/
                    if ( v49 == v57[1] ) /*0x51f027*/
                      break; /*0x51f027*/
                    if ( ++v55 >= 8 ) /*0x51f035*/
                    {
                      v7 = 9; /*0x51f037*/
                      goto LABEL_210; /*0x51f03b*/
                    }
                  }
                  v7 = 9; /*0x51f040*/
                  LOBYTE(a3) = 1; /*0x51f044*/
                }
              }
              goto LABEL_220; /*0x51efa3*/
            }
            if ( !(*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 171))(this) ) /*0x51f052*/
            {
              v7 = 0; /*0x51f05c*/
              goto LABEL_220; /*0x51f05c*/
            }
LABEL_225:
            if ( !(*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 171))(this) ) /*0x51f09e*/
              v7 = 59; /*0x51f0a8*/
            goto LABEL_220; /*0x51f0ad*/
          }
        }
        else if ( v7 == 5 ) /*0x51f098*/
        {
          goto LABEL_225; /*0x51f098*/
        }
        if ( v7 == 7
          && (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 6
          && (unsigned __int8)House::IsHumanPlayer((House *)this->?)
          && !(*(unsigned __int8 (__thiscall **)(int *))(*v5 + 128))(v5)
          && *(_BYTE *)(v5[328] + 5805) )
        {
          return dword_A83D4C != (Object *)(*(int (__thiscall **)(int *))(*v5 + 60))(v5) ? 31 : 11;
        }
LABEL_220:
        if ( !(unsigned __int8)House::IsHumanPlayer((House *)this->?) || v7 ) /*0x51f073*/
        {
          if ( v7 == 2 ) /*0x51f117*/
            goto LABEL_234; /*0x51f117*/
          if ( v7 == 5 && *(_BYTE *)((*(int (__thiscall **)(int *))(*v5 + 136))(v5) + 563) ) /*0x51f16f*/
            return 2; /*0x51f179*/
        }
        else if ( (*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 40))(this) ) /*0x51f07d*/
        {
          v7 = 2; /*0x51f08b*/
LABEL_234:
          if ( (*(unsigned __int8 (__thiscall **)(int *))(*v5 + 196))(v5) ) /*0x51f11d*/
          {
            if ( !(*(int (__thiscall **)(int *, int))(*v5 + 208))(v5, 1) ) /*0x51f12d*/
            {
              v50 = (*(int (__thiscall **)(int *, int))(*v5 + 204))(v5, 1); /*0x51f13d*/
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v50 + 44))(v50) == 21 ) /*0x51f14d*/
                return 1; /*0x51f15d*/
            }
          }
        }
        return v7; /*0x51f17f*/
      }
      if ( v7 == 31 ) /*0x51ed0a*/
        goto LABEL_197; /*0x51ed0a*/
      goto LABEL_173; /*0x51ed0a*/
    }
    if ( !*(_BYTE *)(v5[328] + 5825) ) /*0x51e5ee*/
      goto LABEL_36; /*0x51e5ee*/
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x51e5fa*/
    _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x51e5ff*/
    __asm /*0x51e604*/
    {
      fcomp qword ptr [eax+16F8h]
      fnstsw ax
    }
    if ( (_EAX & 0x100) != 0 ) /*0x51e60f*/
    {
      return 3; /*0x51e614*/
    }
    else
    {
LABEL_36:
      BuildingClass::GetHealthRatio((BuildingClass *)v5); /*0x51e622*/
      _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x51e627*/
      __asm /*0x51e62d*/
      {
        fcomp qword ptr [ecx+16F8h]
        fnstsw ax
      }
      if ( (_AX & 0x4000) != 0 ) /*0x51e638*/
      {
        v16 = -(*(_BYTE *)(v5[328] + 5805) != 0); /*0x51e64c*/
        LOBYTE(v16) = v16 & 0xEB; /*0x51e64e*/
        return v16 + 32; /*0x51e650*/
      }
      else
      {
        return 29; /*0x51e65c*/
      }
    }
  }
  return result; /*0x51e458*/
}


// ==== 0x0051F190  InfantryClass::ValidateTargetAndMove  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ValidateTargetAndMove(InfantryClass *this, int a2, int *a3, int a4)
{
  int result; // eax

  result = ((__int64 (__thiscall *)(InfantryClass *, int *, int))*((_DWORD *)this->FootClass + 29))(this, a3, a4); /*0x51f1a1*/
  switch ( result ) /*0x51f1b4*/
  {
    case 9: /*0x51f1b4*/
    case 28: /*0x51f1b4*/
    case 29: /*0x51f1b4*/
      result = 9; /*0x51f1bb*/
      break; /*0x51f1c0*/
    case 27: /*0x51f1b4*/
    case 57: /*0x51f1b4*/
      result = 5; /*0x51f1c2*/
      break; /*0x51f1c2*/
    default:
      break;
  }
  if ( a3 == (int *)this && result == 5 ) /*0x51f1ce*/
  {
    LOBYTE(result) = 0; /*0x51f1d2*/
  }
  else if ( this->? ) /*0x51f1d8*/
  {
    LOBYTE(result) = 0; /*0x51f1e4*/
  }
  else
  {
    return FootClass::ValidateMove((FootClass *)this, result, a3, a4); /*0x51f1ef*/
  }
  return result; /*0x51f1d0*/
}



// ==== 0x0051F250  InfantryClass::ProcessUpdate  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessUpdate(InfantryClass *this, int a2, __int16 *a3, __int16 *a4, void **a5)
{
  int result; // eax

  result = this->SequenceAnim; /*0x51f25d*/
  if ( (result == 27 || result == 28 || result == 29 || result == 30) /*0x51f285*/
    && (result = (*(int (__thiscall **)(InfantryClass *, __int16 *, _DWORD, void **))(this->ptr_0 + 112))(
                   this,
                   a3,
                   0,
                   a5),
        result == 2) )
  {
    LOBYTE(result) = 0; /*0x51f289*/
  }
  else if ( this->isBerserk[0] ) /*0x51f28f*/
  {
    LOBYTE(result) = 0; /*0x51f29b*/
  }
  else
  {
    LOBYTE(result) = ObjectClass::SpawnInfantry(this, a2, a3, a4, a5); /*0x51f2af*/
  }
  return result; /*0x51f287*/
}



// ==== 0x0051F2C0  InfantryClass::GetTooltipName  this=InfantryClass  sig=csp ====
wchar_t *__thiscall InfantryClass::GetTooltipName(InfantryClass *this)
{
  if ( this->Technician ) /*0x51f2c3*/
    return GetStringCSF((wchar_t *)&stru_825538.Name[6], 0, (const char *)&stru_825538.Volume, 4636); /*0x51f2de*/
  if ( !(*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 49))(this) /*0x51f300*/
    || (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->?, (#375 *)dword_A83D4C) )
  {
    return *(wchar_t **)&this->Type->?[3]; /*0x51f321*/
  }
  return *(wchar_t **)((*((int (__thiscall **)(InfantryClass *, int))this->FootClass + 51))(this, 1) + 96); /*0x51f2e3*/
}



// ==== 0x0051F330  InfantryClass::FindPathToBuilding  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::FindPathToBuilding(InfantryClass *this)
{
  int v2; // eax
  AbstractClass *target; // ecx
  int result; // eax
  void *ptr_0; // edx
  int v6; // edi
  _DWORD v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = (*((int (__thiscall **)(InfantryClass *, _DWORD))this->FootClass + 185))(this, 0); /*0x51f33b*/
  target = this->?; /*0x51f341*/
  if ( !target /*0x51f359*/
    || (result = (*((int (__thiscall **)(InfantryClass *, AbstractClass *, int))this->FootClass + 234))(
                   this,
                   target,
                   v2),
        !(_BYTE)result) )
  {
    if ( (v7[0] = this->?[0], /*0x51f3a5*/
          v7[1] = this->?[1],
          ptr_0 = this->FootClass,
          v7[2] = this->?[2],
          v6 = (*((int (__thiscall **)(InfantryClass *, int, _DWORD *, _DWORD))ptr_0 + 241))(this, 1, v7, 0),
          (result = (int)this->?) == 0)
      && !v6
      || (result = (*((int (__thiscall **)(InfantryClass *, int))this->FootClass + 242))(this, v6), !v6) )
    {
      if ( this->? != 5 ) /*0x51f3ae*/
      {
        result = (*((int (__thiscall **)(InfantryClass *))this->FootClass + 33))(this); /*0x51f3b4*/
        if ( !*(_BYTE *)(result + 3476) ) /*0x51f3ba*/
          return (*((int (__thiscall **)(InfantryClass *, _DWORD, int))this->FootClass + 289))(this, 0, 1); /*0x51f3cc*/
      }
    }
  }
  return result; /*0x51f3d2*/
}



// ==== 0x0051F3E0  InfantryClass::EnterBuilding  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::EnterBuilding(InfantryClass *this)
{
  AbstractClass *v2; // ecx
  AbstractClass *v3; // eax
  int uniqueId; // ecx
  AbstractClass *target; // ecx
  InfantryTypeClass *Type; // eax
  int v8; // eax
  char *MissionControl; // eax
  int v10; // eax

  if ( (this->Type->C4 || (unsigned __int8)TechnoTypeClass::HasVoiceResponse((int *)this, 14)) /*0x51f42a*/
    && (v2 = this->?) != 0
    && (*((int (__thiscall **)(AbstractClass *))v2->ptr_0 + 11))(v2) == 6
    && (v3 = this->?, uniqueId = v3[36].uniqueId, *(_BYTE *)(uniqueId + 5495))
    && !*(_BYTE *)(uniqueId + 5889) )
  {
    (*((void (__thiscall **)(InfantryClass *, AbstractClass *, int))this->FootClass + 288))(this, v3, 1); /*0x51f43b*/
    (*((void (__thiscall **)(InfantryClass *, int, _DWORD))this->FootClass + 122))(this, 17, 0); /*0x51f449*/
    return 1; /*0x51f44f*/
  }
  else if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) /*0x51f4a4*/
         && (target = this->?) != 0
         && (*((int (__thiscall **)(AbstractClass *))target->ptr_0 + 11))(target) == 6
         && ((Type = this->Type, Type->Infiltrate)
          || (Type->Occupier || Type->Assaulter)
          && (unsigned __int8)BuildingClass::CanRepair((BuildingClass *)this->?, (int)this)) )
  {
    (*((void (__thiscall **)(InfantryClass *, AbstractClass *, int))this->FootClass + 288))(this, this->?, 1); /*0x51f4ba*/
    (*((void (__thiscall **)(InfantryClass *, int))this->FootClass + 124))(this, 8); /*0x51f4c6*/
    return 1; /*0x51f4cc*/
  }
  else if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->?) /*0x51f4fa*/
         && ((v8 = this->SequenceAnim[0], v8 == 27) || v8 == 28 || v8 == 29 || v8 == 30) )
  {
    (*((void (__thiscall **)(InfantryClass *))this->FootClass + 266))(this); /*0x51f500*/
    MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x51f508*/
    LOWORD(v10) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x51f516*/
    return v10 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x51f532*/
  }
  else
  {
    return InfantryClass::ScanTarget((FootClass *)this); /*0x51f538*/
  }
}



// ==== 0x0051F540  InfantryClass::ProcessEnterOrRepair  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessEnterOrRepair(InfantryClass *this)
{
  AbstractClass *target; // ecx
  InfantryTypeClass *Type; // eax
  int v5; // eax

  if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) /*0x51f591*/
    && (target = this->?) != 0
    && (*((int (__thiscall **)(AbstractClass *))target->ptr_0 + 11))(target) == 6
    && ((Type = this->Type, Type->Infiltrate)
     || (Type->Occupier || Type->Assaulter)
     && (unsigned __int8)BuildingClass::CanRepair((BuildingClass *)this->?, (int)this)) )
  {
    (*((void (__thiscall **)(InfantryClass *, AbstractClass *, int))this->FootClass + 288))(this, this->?, 1); /*0x51f5a7*/
    (*((void (__thiscall **)(InfantryClass *, int))this->FootClass + 124))(this, 8); /*0x51f5b3*/
    return 1; /*0x51f5b9*/
  }
  else if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) /*0x51f5e9*/
         && ((v5 = this->SequenceAnim[0], v5 == 27) || v5 == 28 || v5 == 29 || v5 == 30)
         && !this->? )
  {
    (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 31, 0, 0); /*0x51f5fd*/
    return 1; /*0x51f603*/
  }
  else
  {
    return InfantryClass::ProcessDeploy((FootClass *)this); /*0x51f60c*/
  }
}



// ==== 0x0051F620  InfantryClass::FindIdleMovePosition  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::FindIdleMovePosition(InfantryClass *this)
{
  int result; // eax

  result = InfantryClass::GetIdleTimer(this); /*0x51f623*/
  if ( result == -1 ) /*0x51f62b*/
    return FootClass::FindMovePosition((FootClass *)this); /*0x51f62f*/
  return result; /*0x51f634*/
}



// ==== 0x0051F640  InfantryClass::FindIdleAITarget  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::FindIdleAITarget(InfantryClass *this)
{
  int result; // eax

  result = InfantryClass::GetIdleTimer(this); /*0x51f643*/
  if ( result == -1 ) /*0x51f64b*/
    return FootClass::FindAITarget((FootClass *)this); /*0x51f64f*/
  return result; /*0x51f654*/
}



// ==== 0x0051F660  InfantryClass::ProcessIvanBombResult  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessIvanBombResult(InfantryClass *this)
{
  int v2; // eax
  House *v3; // eax

  v2 = this->SequenceAnim[0]; /*0x51f663*/
  if ( v2 != 27 && v2 != 28 && v2 != 29 && v2 != 30 ) /*0x51f67b*/
    return FootClass::Destru_vt139((FootClass *)this); /*0x51f67b*/
  v3 = (House *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 15))(this); /*0x51f681*/
  if ( (unsigned __int8)House::IsCurrentPlayer(v3) ) /*0x51f686*/
  {
    (*((void (__thiscall **)(InfantryClass *, _DWORD, int))this->FootClass + 288))(this, 0, 1); /*0x51f697*/
    return 1; /*0x51f6a3*/
  }
  if ( this->Type->? > -1 ) /*0x51f6b1*/
    return FootClass::Destru_vt139((FootClass *)this); /*0x51f6d9*/
  (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 31, 0, 0); /*0x51f6bd*/
  return *(_DWORD *)(this->Type->Sequence[0] + 1120); /*0x51f6a2*/
}



// ==== 0x0051F6E0  InfantryClass::ProcessIvanBomb  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessIvanBomb(InfantryClass *this)
{
  InfantryTypeClass *Type; // ecx
  int v3; // eax
  int UndeployDelay; // ebx
  _DWORD *v5; // edi
  void (__thiscall **ptr_0)(InfantryClass *, void *); // edi
  __int16 *v7; // eax
  void *v8; // eax
  InfantryTypeClass *v9; // edx
  _BYTE v11[4]; // [esp+Ch] [ebp-4h] BYREF

  Type = this->Type; /*0x51f6e5*/
  if ( !Type->Deployer ) /*0x51f6eb*/
    return AbstractClass::COMStub_143(); /*0x51f6eb*/
  v3 = this->SequenceAnim[0]; /*0x51f6f9*/
  UndeployDelay = -1; /*0x51f6ff*/
  if ( v3 == 27 || v3 == 28 || v3 == 29 || v3 == 30 ) /*0x51f714*/
  {
    if ( Type->? <= -1 ) /*0x51f71d*/
      (*((void (__thiscall **)(InfantryClass *, int, int, _DWORD))this->FootClass + 342))(this, 31, 1, 0); /*0x51f72d*/
  }
  else
  {
    (*((void (__thiscall **)(InfantryClass *, int, int, _DWORD))this->FootClass + 342))(this, 27, 1, 0); /*0x51f743*/
    v5 = (_DWORD *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 252))(this); /*0x51f753*/
    if ( (unsigned __int8)IsNonNullPtr(v5) && *(_BYTE *)(*v5 + 336) ) /*0x51f763*/
    {
      if ( (unsigned __int8)ObjectClass::StepCleanup((ObjectClass *)this, &stru_825538.AlliedVoice[6]) ) /*0x51f774*/
      {
        UndeployDelay = *(_DWORD *)(this->Type->Sequence[0] + 976) + 1; /*0x51f78f*/
      }
      else
      {
        ptr_0 = (void (__thiscall **)(InfantryClass *, void *))this->FootClass; /*0x51f792*/
        v7 = (__int16 *)(*((int (__thiscall **)(InfantryClass *, _BYTE *))this->FootClass + 110))(this, v11); /*0x51f79b*/
        v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7); /*0x51f7a7*/
        ptr_0[242](this, v8); /*0x51f7af*/
      }
    }
    v9 = this->Type; /*0x51f7b5*/
    if ( v9->? > -1 ) /*0x51f7c5*/
      UndeployDelay = v9->?; /*0x51f7c7*/
  }
  (*((void (__thiscall **)(InfantryClass *, int))this->FootClass + 124))(this, 5); /*0x51f7cf*/
  (*((void (__thiscall **)(InfantryClass *, _DWORD, int))this->FootClass + 288))(this, 0, 1); /*0x51f7dd*/
  if ( UndeployDelay > -1 ) /*0x51f7e6*/
    return UndeployDelay; /*0x51f7e8*/
  else
    return AbstractClass::COMStub_143(); /*0x51f7f0*/
}



// ==== 0x0051F800  InfantryClass::HandleCursorOverCell  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::HandleCursorOverCell(InfantryClass *this, __int16 *a2, char a3, int a4)
{
  int v6; // ebx
  InfantryClass *v7; // eax
  InfantryClass *v8; // eax
  InfantryTypeClass *Type; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  unsigned __int8 (__thiscall **ptr_0)(InfantryClass *, _DWORD *, int); // edx
  _DWORD *v14; // eax
  int v15; // ebp
  int v16; // esi
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int *v20; // ecx
  InfantryClass *v21; // eax
  _DWORD *v22; // eax
  int v23; // eax
  _DWORD v24[3]; // [esp+Ch] [ebp-Ch] BYREF
  int v25; // [esp+20h] [ebp+8h]

  if ( !(unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x51f80e*/
    return 0; /*0x51f81f*/
  v6 = FootClass::HandleCursorWithCheck((FootClass *)this, a2, a3, a4); /*0x51f83c*/
  if ( TechnoClass::GetValue((TechnoClass *)this, -1) < 0 /*0x51f859*/
    && (unsigned __int8)House::IsHumanPlayer((House *)this->?)
    && v6 == 5 )
  {
    v6 = 26; /*0x51f85b*/
  }
  if ( this->Type->? && (v6 == 1 || v6 == 2) ) /*0x51f878*/
  {
    v7 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x51f880*/
    if ( InfantryClass::ValidateAttackPosition(v7) /*0x51f89d*/
      || (v8 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2),
          InfantryClass::CanMoveThroughCell(v8)) )
    {
      v6 = 0; /*0x51f8a6*/
    }
  }
  if ( !(unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x51f8ae*/
    goto LABEL_33; /*0x51f8ae*/
  Type = this->Type; /*0x51f8bb*/
  if ( !Type->Deployer ) /*0x51f8c1*/
    goto LABEL_33; /*0x51f8c1*/
  v10 = this->SequenceAnim[0]; /*0x51f8cf*/
  if ( v10 != 27 && v10 != 28 && v10 != 29 && v10 != 30 ) /*0x51f8e7*/
    goto LABEL_33; /*0x51f8e7*/
  if ( v6 != 1 ) /*0x51f8f0*/
  {
    if ( v6 == 5 ) /*0x51f8f5*/
    {
      if ( Type->? ) /*0x51f8fb*/
      {
        v11 = (*((int (__thiscall **)(InfantryClass *, _DWORD))this->FootClass + 185))(this, 0); /*0x51f90b*/
        v12 = *a2 << 8; /*0x51f91b*/
        v24[1] = (a2[1] << 8) + 128; /*0x51f92b*/
        ptr_0 = (unsigned __int8 (__thiscall **)(InfantryClass *, _DWORD *, int))this->FootClass; /*0x51f92f*/
        v24[0] = v12 + 128; /*0x51f935*/
        v24[2] = 0; /*0x51f93c*/
        if ( ptr_0[89](this, v24, v11) ) /*0x51f944*/
          goto LABEL_24; /*0x51f94c*/
      }
      goto LABEL_23; /*0x51f94c*/
    }
LABEL_33:
    if ( v6 == 1 ) /*0x51f9aa*/
    {
      v21 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x51f9b2*/
      if ( (unsigned __int8)InfantryClass::IsInBounds(v21) ) /*0x51f9b9*/
      {
        CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x51f9c9*/
        return 36 - (globalHelper_084F10((int)this) != 0); /*0x51f9e2*/
      }
    }
    goto LABEL_24; /*0x51f9c0*/
  }
LABEL_23:
  v6 = 2; /*0x51f94e*/
LABEL_24:
  v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x51f953*/
  v15 = 0; /*0x51f965*/
  v16 = 0; /*0x51f967*/
  if ( ((int)dword_A8B230->ptr_0 & 0x1000) != 0 ) /*0x51f96e*/
  {
    if ( a3 ) /*0x51f97a*/
    {
      v17 = v14[10]; /*0x51f97c*/
      if ( v17 ) /*0x51f981*/
      {
        v18 = *(_DWORD *)(v17 + 16); /*0x51f983*/
        v19 = 0; /*0x51f986*/
        if ( v18 > 0 ) /*0x51f98a*/
        {
          v20 = *(int **)(v17 + 4); /*0x51f98c*/
          while ( 1 ) /*0x51f98f*/
          {
            v16 = *v20; /*0x51f98f*/
            if ( *(_BYTE *)(*v20 + 116) ) /*0x51f991*/
            {
              if ( *(_DWORD *)(v16 + 48) == 6 ) /*0x51f99b*/
                break; /*0x51f99b*/
            }
            ++v19; /*0x51f99d*/
            ++v20; /*0x51f99e*/
            if ( v19 >= v18 ) /*0x51f9a3*/
              goto LABEL_37; /*0x51f9a3*/
          }
          v15 = **(_DWORD **)(v16 + 96); /*0x51f9ee*/
        }
      }
    }
  }
LABEL_37:
  if ( !this->Type->Engineer || !v15 || !(unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x51fa16*/
    goto LABEL_55; /*0x51fa16*/
  if ( *(_BYTE *)(v15 + 5814) ) /*0x51fa1f*/
  {
    v22 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v16 + 72))(v16, v24); /*0x51fa32*/
    LOWORD(v25) = *v22 / 256; /*0x51fa45*/
    HIWORD(v25) = v22[1] / 256; /*0x51fa5d*/
    a4 = v25; /*0x51fa66*/
    v23 = -(CellClass::CheckConnectivity((CellClass *)&stru_87F5F0.__pad_58[416], (int)&a4) != 0); /*0x51fa77*/
    LOBYTE(v23) = v23 & 0xFD; /*0x51fa79*/
    v6 = v23 + 32; /*0x51fa7e*/
    goto LABEL_47; /*0x51fa80*/
  }
  if ( !*(_BYTE *)(v15 + 3276) ) /*0x51fa82*/
  {
LABEL_55:
    if ( v6 == 5 && !(*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 171))(this) ) /*0x51fa9c*/
      v6 = 59; /*0x51faa6*/
    goto LABEL_47; /*0x51faa6*/
  }
  v6 = 9; /*0x51fa8c*/
LABEL_47:
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) && !v6 && !this->Type->? ) /*0x51fac5*/
  {
    if ( (*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 40))(this) ) /*0x51fad3*/
      return 2; /*0x51fadd*/
  }
  return v6; /*0x51f817*/
}



// ==== 0x0051FAF0  InfantryClass::GetTypePtr  this=InfantryClass  sig=csp ====
InfantryTypeClass *__thiscall InfantryClass::GetTypePtr(InfantryClass *this)
{
  return this->Type; /*0x51faf6*/
}



// ==== 0x0051FB00  ObjectClass::PlaceScenarioInfantry  this=ObjectClass  sig=csp ====
int __thiscall PlaceScenarioInfantry(INIClass *this)
{
  int result; // eax
  int v3; // ecx
  unsigned __int8 *StringByIndex; // eax
  char *v5; // eax
  int v6; // eax
  IUnknown *v7; // edi
  Factory *v8; // eax
  int ExitCellByName; // esi
  int v10; // eax
  int v11; // edi
  char *v12; // eax
  char *v13; // eax
  __int16 v14; // si
  char *v15; // eax
  int v16; // eax
  int v17; // ecx
  char *v18; // eax
  int v19; // eax
  char *v20; // eax
  int v21; // eax
  int v22; // esi
  int v23; // edx
  char *v24; // eax
  int v25; // ebx
  char *v26; // eax
  int v27; // esi
  char *v28; // eax
  TeamClass *v29; // eax
  int v30; // eax
  char *v31; // eax
  int v32; // eax
  char *v33; // eax
  char *v34; // eax
  bool v35; // al
  int GroundHeight; // eax
  char *v37; // eax
  char *v38; // eax
  int v39; // esi
  int v40; // eax
  int v41; // esi
  int v42; // eax
  int v43; // [esp+4h] [ebp-98h] BYREF
  int v44; // [esp+8h] [ebp-94h]
  int v45; // [esp+Ch] [ebp-90h]
  int i; // [esp+10h] [ebp-8Ch]
  int v47; // [esp+14h] [ebp-88h]
  int v48; // [esp+18h] [ebp-84h]
  char String[128]; // [esp+1Ch] [ebp-80h] BYREF

  INIClass::ResetSection(this); /*0x51fb09*/
  result = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)&g_INI_Key_Special.SidebarImage); /*0x51fb16*/
  v3 = 0; /*0x51fb1b*/
  v47 = result; /*0x51fb1f*/
  for ( i = 0; i < v47; ++i ) /*0x51fb27*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x51fb3a*/
                                         this->__pad_0,
                                         (unsigned __int8 *)&g_INI_Key_Special.SidebarImage,
                                         v3);
    INIClass::GetString(this, (unsigned __int8 *)&g_INI_Key_Special.SidebarImage, StringByIndex, 0, String, 128); /*0x51fb54*/
    v5 = strtok(String, Str); /*0x51fb63*/
    v6 = HouseClass::FindByName(v5); /*0x51fb6d*/
    if ( v6 != -1 ) /*0x51fb75*/
    {
      v7 = (IUnknown *)*((_DWORD *)stru_A80220.? + v6); /*0x51fb88*/
      v8 = (Factory *)strtok(0, Str); /*0x51fb8b*/
      ExitCellByName = Factory::FindExitCellByName(v8); /*0x51fb9a*/
      if ( ExitCellByName != -1 ) /*0x51fb9f*/
      {
        v10 = __2_YAPAXI_Z(0x6F0u); /*0x51fbaa*/
        if ( v10 ) /*0x51fbb4*/
        {
          v11 = InfantryClass::Construct(v10, (int)v7, *((_DWORD *)dword_A8E34C + ExitCellByName), v7); /*0x51fbcc*/
          if ( v11 ) /*0x51fbd0*/
          {
            v12 = strtok(0, Str); /*0x51fbdd*/
            v48 = atoi(v12); /*0x51fbeb*/
            if ( *(int *)&stru_A8EB00.?[408] < 4 ) /*0x51fbfe*/
            {
              v18 = strtok(0, Str); /*0x51fc27*/
              v19 = atoi(v18); /*0x51fc2d*/
              LOWORD(v17) = v19 % 128; /*0x51fc43*/
              v16 = v19 / 128; /*0x51fc4a*/
              v17 = (__int16)v17; /*0x51fc4d*/
            }
            else
            {
              v13 = strtok(0, Str); /*0x51fc00*/
              v14 = atoi(v13); /*0x51fc12*/
              v15 = strtok(0, Str); /*0x51fc14*/
              LOWORD(v16) = atoi(v15); /*0x51fc1a*/
              v17 = v14; /*0x51fc22*/
            }
            v43 = (v17 << 8) + 128; /*0x51fc6c*/
            v44 = ((__int16)v16 << 8) + 128; /*0x51fc70*/
            v45 = 0; /*0x51fc74*/
            v20 = strtok(0, Str); /*0x51fc78*/
            v21 = atoi(v20); /*0x51fc7e*/
            v22 = dword_89E9F4[3 * v21]; /*0x51fcc8*/
            v23 = dword_89E9F8[3 * v21]; /*0x51fccb*/
            v43 = dword_89E9F0[3 * v21] + ((v43 / 256) << 8); /*0x51fcce*/
            v44 = ((v44 / 256) << 8) + v22; /*0x51fcd9*/
            v45 += v23; /*0x51fcdd*/
            v24 = strtok(0, Str); /*0x51fce1*/
            v25 = LookupWaypointName((ObjectClass *)v24); /*0x51fcf0*/
            v26 = strtok(0, Str); /*0x51fcf9*/
            if ( v26 ) /*0x51fd03*/
              v27 = atoi(v26); /*0x51fd0e*/
            else
              v27 = 0; /*0x51fd12*/
            v28 = strtok(0, Str); /*0x51fd1b*/
            if ( v28 ) /*0x51fd25*/
            {
              v29 = (TeamClass *)ObjectTypeClass::FindByName((ObjectTypeClass *)v28); /*0x51fd29*/
              if ( v29 ) /*0x51fd30*/
              {
                v30 = TeamClass::FindOrCreate(v29); /*0x51fd34*/
                if ( v30 ) /*0x51fd3b*/
                  ObjectClass::SetReference((ObjectClass *)v11, v30); /*0x51fd40*/
              }
            }
            v31 = strtok(0, Str); /*0x51fd4c*/
            if ( v31 ) /*0x51fd56*/
            {
              v32 = atoi(v31); /*0x51fd59*/
              FootClass::SetField((int *)(v11 + 336), v32); /*0x51fd68*/
            }
            v33 = strtok(0, Str); /*0x51fd74*/
            if ( v33 ) /*0x51fd7e*/
              *(_DWORD *)(v11 + 532) = atoi(v33); /*0x51fd89*/
            v34 = strtok(0, Str); /*0x51fd96*/
            if ( v34 ) /*0x51fda0*/
            {
              v35 = atoi(v34) != 0; /*0x51fdad*/
              *(_BYTE *)(v11 + 140) = v35; /*0x51fdb2*/
              if ( v35 ) /*0x51fdb8*/
                GroundHeight = *(_DWORD *)&stru_A8EB00.?[1616] + Cell::GetGroundHeight(&v43); /*0x51fdc9*/
              else
                GroundHeight = Cell::GetGroundHeight(&v43); /*0x51fddb*/
              v45 = GroundHeight; /*0x51fde0*/
            }
            v37 = strtok(0, Str); /*0x51fdeb*/
            if ( v37 ) /*0x51fdf5*/
              *(_BYTE *)(v11 + 1057) = atoi(v37) != 0; /*0x51fe05*/
            v38 = strtok(0, Str); /*0x51fe12*/
            if ( v38 ) /*0x51fe1c*/
              *(_BYTE *)(v11 + 1058) = atoi(v38) != 0; /*0x51fe2c*/
            if ( Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v43) == (CellClass *)&g_MissionQueueFrame.briefing[130] /*0x51fe52*/
              || !(*(unsigned __int8 (__thiscall **)(int, int *, int))(*(_DWORD *)v11 + 216))(v11, &v43, v27) )
            {
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 32))(v11, 1); /*0x51febe*/
            }
            else
            {
              v39 = *(_DWORD *)(v11 + 1728); /*0x51fe60*/
              LOWORD(v40) = Math::RoundToInt((double)v48 * 0.00390625 * (double)*(int *)(v39 + 160)); /*0x51fe72*/
              *(_DWORD *)(v11 + 108) = v40; /*0x51fe77*/
              v41 = *(_DWORD *)(v39 + 160); /*0x51fe7a*/
              if ( v40 > v41 - 3 ) /*0x51fe85*/
                *(_DWORD *)(v11 + 108) = v41; /*0x51fe87*/
              if ( *(int *)(v11 + 108) < 1 ) /*0x51fe94*/
                *(_DWORD *)(v11 + 108) = 1; /*0x51fe96*/
              v42 = *(_DWORD *)v11; /*0x51fe9c*/
              *(_DWORD *)(v11 + 112) = *(_DWORD *)(v11 + 108); /*0x51fea3*/
              (*(void (__thiscall **)(int, int, _DWORD))(v42 + 488))(v11, v25, 0); /*0x51fea6*/
              (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 492))(v11); /*0x51feb0*/
            }
          }
        }
      }
    }
    result = v47; /*0x51fec5*/
    v3 = i + 1; /*0x51fec9*/
  }
  return result; /*0x51fed9*/
}



// ==== 0x0051FEF0  ObjectClass::SaveInfantryToINI  this=ObjectClass  sig=csp ====
int __usercall SaveInfantryToINI@<eax>(ObjectClass *this, int a2@<edi>, int a3@<esi>)
{
  int *v3; // ecx
  double v4; // st7
  int result; // eax
  BuildingClass *v6; // esi
  unsigned int v7; // edi
  HouseClass *owner; // ebp
  int v9; // ebx
  int isRecruitableByEnemy; // edx
  int isRecruitableByAlly; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [esp-34h] [ebp-F0h]
  char *v16; // [esp-20h] [ebp-DCh]
  int Field; // [esp-14h] [ebp-D0h]
  int controlGroup; // [esp-10h] [ebp-CCh]
  int onBridge; // [esp-Ch] [ebp-C8h]
  int i; // [esp+8h] [ebp-B4h]
  char *queuedMission; // [esp+14h] [ebp-A8h]
  Input v24; // [esp+20h] [ebp-9Ch] BYREF
  int v25; // [esp+24h] [ebp-98h]
  int v26; // [esp+28h] [ebp-94h]
  int v27; // [esp+2Ch] [ebp-90h] BYREF
  char Buffer[12]; // [esp+30h] [ebp-8Ch] BYREF
  char Source[128]; // [esp+3Ch] [ebp-80h] BYREF

  INIClass::ClearSection(v3, (int)&g_INI_Key_Special.SidebarImage, 0); /*0x51ff02*/
  result = 0; /*0x51ff0d*/
  for ( i = 0; result < *(int *)&stru_A83D50.__pad_80[40]; i = result ) /*0x51ff15*/
  {
    v6 = *(BuildingClass **)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * result); /*0x51ff25*/
    if ( !v6->? ) /*0x51ff28*/
    {
      sprintf(Buffer, "%d", result); /*0x51ff41*/
      if ( (*((int (__thiscall **)(BuildingClass *, int, int))v6->TechnoClass + 97))(v6, a2, a3) == -1 ) /*0x51ff71*/
        queuedMission = (char *)v6->?; /*0x51ff79*/
      else
        queuedMission = (char *)(*((int (__thiscall **)(BuildingClass *))v6->TechnoClass + 97))(v6); /*0x51ff89*/
      v7 = *ProgressTimer::GetValue((ProgressTimer *)v6->?, &v27); /*0x51ff9d*/
      owner = v6->?; /*0x51ffab*/
      v9 = *(_DWORD *)&v6->__pad_6B8[8] + 36; /*0x51ffb3*/
      v24.Input_field_00 = v6->?[0]; /*0x51ffb6*/
      isRecruitableByEnemy = (unsigned __int8)v6->?; /*0x51ffbf*/
      v25 = v6->?[1]; /*0x51ffc5*/
      isRecruitableByAlly = (unsigned __int8)v6->?; /*0x51ffce*/
      v26 = v6->?[2]; /*0x51ffd4*/
      a3 = isRecruitableByEnemy; /*0x51ffe0*/
      a2 = isRecruitableByAlly; /*0x51ffe7*/
      onBridge = (unsigned __int8)v6->?; /*0x51ffec*/
      controlGroup = v6->?; /*0x51ffef*/
      Field = FootClass::GetField(v6->?); /*0x52000b*/
      v16 = FromNameIndex((int)queuedMission); /*0x52001b*/
      v12 = Input::OffsetToDirection(&v24); /*0x52001c*/
      v13 = (*((int (__thiscall **)(BuildingClass *, char *, int, char *, _DWORD))v6->TechnoClass + 110))( /*0x52002b*/
              v6,
              Buffer,
              v12,
              v16,
              (unsigned __int8)(((v7 >> 7) + 1) >> 1));
      v15 = *(__int16 *)(*((int (__thiscall **)(BuildingClass *, char *, _DWORD))v6->TechnoClass + 110))( /*0x520048*/
                          v6,
                          Buffer,
                          *(__int16 *)(v13 + 2));
      BuildingClass::GetHealthRatio(v6); /*0x52004b*/
      v4 = v4 * 256.0; /*0x520050*/
      LOWORD(v14) = Math::RoundToInt(v4); /*0x520056*/
      sprintf(Source, (const char *const)stru_825538.Type, &owner->plainName[4], v9, v14, v15); /*0x520068*/
      INIClass::SetString(queuedMission, (unsigned __int8 *)&g_INI_Key_Special.SidebarImage, Buffer, Source); /*0x520085*/
      result = i; /*0x52008a*/
    }
    ++result; /*0x520094*/
  }
  return result; /*0x5200a5*/
}



// ==== 0x00510040  _DynamicVectorClass_PBVBuildingTypeClass::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_UScoutStruct___33::QueryInterface(
        _DynamicVectorClass_PBVBuildingTypeClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x510043*/
  *(_DWORD *)this->__pad_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x510046*/
  if ( v3 && BYTE1(this->m_C) ) /*0x510050*/
  {
    __3_YAXPAX_Z(v3); /*0x510058*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x510060*/
  }
  BYTE1(this->m_C) = 0; /*0x51006b*/
  this->m_8 = 0; /*0x510071*/
  if ( (a2 & 1) != 0 ) /*0x510078*/
    __3_YAXPAX_Z(this); /*0x51007b*/
  return this->__pad_0; /*0x510085*/
}



// ==== 0x00510090  _VectorClass_PAUStartingTechnoStruct_HouseClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UAngerStruct___16::QueryInterface(
        _VectorClass_PAUStartingTechnoStruct_HouseClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x510093*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HouseClass::StartingTechnoStruct *>::`vftable'; /*0x510096*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5100a0*/
  {
    __3_YAXPAX_Z(v3); /*0x5100a8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5100b0*/
  }
  BYTE1(this->m_C) = 0; /*0x5100bb*/
  this->m_8 = 0; /*0x5100c1*/
  if ( (a2 & 1) != 0 ) /*0x5100c8*/
    __3_YAXPAX_Z(this); /*0x5100cb*/
  return this->__pad_0; /*0x5100d5*/
}



// ==== 0x005100E0  _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_UAngerStruct::Constructor(
        _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5100e3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HouseClass::StartingTechnoStruct *>::`vftable'; /*0x5100e6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5100f0*/
  {
    __3_YAXPAX_Z(v3); /*0x5100f8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x510100*/
  }
  BYTE1(this->m_C) = 0; /*0x51010b*/
  this->m_8 = 0; /*0x510111*/
  if ( (a2 & 1) != 0 ) /*0x510118*/
    __3_YAXPAX_Z(this); /*0x51011b*/
  return this->__pad_0; /*0x510125*/
}



// ==== 0x00510130  _VectorClass_UAngerStruct::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UAngerStruct::QueryInterface(_VectorClass_UAngerStruct *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x510133*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AngerStruct>::`vftable'; /*0x510136*/
  if ( v3 && BYTE1(this->m_C) ) /*0x510140*/
  {
    __3_YAXPAX_Z(v3); /*0x510148*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x510150*/
  }
  BYTE1(this->m_C) = 0; /*0x51015b*/
  this->m_8 = 0; /*0x510161*/
  if ( (a2 & 1) != 0 ) /*0x510168*/
    __3_YAXPAX_Z(this); /*0x51016b*/
  return this->__pad_0; /*0x510175*/
}



// ==== 0x00510180  _DynamicVectorClass_UAngerStruct::Constructor_VectorClass_AngerStruct_  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_UAngerStruct::Constructor_VectorClass_AngerStruct_(
        _DynamicVectorClass_UAngerStruct *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x510183*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AngerStruct>::`vftable'; /*0x510186*/
  if ( v3 && BYTE1(this->m_C) ) /*0x510190*/
  {
    __3_YAXPAX_Z(v3); /*0x510198*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5101a0*/
  }
  BYTE1(this->m_C) = 0; /*0x5101ab*/
  this->m_8 = 0; /*0x5101b1*/
  if ( (a2 & 1) != 0 ) /*0x5101b8*/
    __3_YAXPAX_Z(this); /*0x5101bb*/
  return this->__pad_0; /*0x5101c5*/
}



// ==== 0x005101D0  _VectorClass_UScoutStruct::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UScoutStruct::QueryInterface(_VectorClass_UScoutStruct *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5101d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ScoutStruct>::`vftable'; /*0x5101d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5101e0*/
  {
    __3_YAXPAX_Z(v3); /*0x5101e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5101f0*/
  }
  BYTE1(this->m_C) = 0; /*0x5101fb*/
  this->m_8 = 0; /*0x510201*/
  if ( (a2 & 1) != 0 ) /*0x510208*/
    __3_YAXPAX_Z(this); /*0x51020b*/
  return this->__pad_0; /*0x510215*/
}



// ==== 0x00510220  ?$DynamicVectorClass@UScoutStruct@@::updateThreatMap  this=DynamicVector  sig=csp ====
_DWORD *__thiscall AbstractClass::sub_510220(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x510223*/
  *Block = &VectorClass<ScoutStruct>::`vftable'; /*0x510226*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x510230*/
  {
    __3_YAXPAX_Z(v3); /*0x510238*/
    *(Block + 1) = 0; /*0x510240*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x51024b*/
  *(Block + 2) = 0; /*0x510251*/
  if ( (a2 & 1) != 0 ) /*0x510258*/
    __3_YAXPAX_Z(Block); /*0x51025b*/
  return Block; /*0x510265*/
}



// ==== 0x00510270  _VectorClass_PAUBuildChoiceClass_HouseClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::QueryInterface(
        _VectorClass_PAUBuildChoiceClass_HouseClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x510273*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HouseClass::BuildChoiceClass *>::`vftable'; /*0x510276*/
  if ( v3 && BYTE1(this->m_C) ) /*0x510280*/
  {
    __3_YAXPAX_Z(v3); /*0x510288*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x510290*/
  }
  BYTE1(this->m_C) = 0; /*0x51029b*/
  this->m_8 = 0; /*0x5102a1*/
  if ( (a2 & 1) != 0 ) /*0x5102a8*/
    __3_YAXPAX_Z(this); /*0x5102ab*/
  return this->__pad_0; /*0x5102b5*/
}



// ==== 0x005102C0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::loc_5102C0  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=ida-proto ====
_DWORD *__thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::loc_5102C0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5102c3*/
  *Block = &g_ptr_7EA7D4; /*0x5102c6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5102d0*/
  {
    __3_YAXPAX_Z(v3); /*0x5102d8*/
    *(Block + 1) = 0; /*0x5102e0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5102eb*/
  *(Block + 2) = 0; /*0x5102f1*/
  if ( (a2 & 1) != 0 ) /*0x5102f8*/
    __3_YAXPAX_Z(Block); /*0x5102fb*/
  return Block; /*0x510305*/
}


// ==== 0x00510310  _VectorClass_PBVTeamTypeClass::Constructor_0  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_BuildingType::Constructor_0(_VectorClass_PBVTeamTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x510313*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TeamTypeClass const *>::`vftable'; /*0x510316*/
  if ( v3 && BYTE1(this->m_C) ) /*0x510320*/
  {
    __3_YAXPAX_Z(v3); /*0x510328*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x510330*/
  }
  BYTE1(this->m_C) = 0; /*0x51033b*/
  this->m_8 = 0; /*0x510341*/
  if ( (a2 & 1) != 0 ) /*0x510348*/
    __3_YAXPAX_Z(this); /*0x51034b*/
  return this->__pad_0; /*0x510355*/
}



// ==== 0x00510360  _VectorClass__N::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass__N::Add(_VectorClass__N *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x510363*/
  *(_DWORD *)this->__pad_0 = &VectorClass<bool>::`vftable'; /*0x510366*/
  if ( v3 && BYTE1(this->m_C) ) /*0x510370*/
  {
    __3_YAXPAX_Z(v3); /*0x510378*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x510380*/
  }
  BYTE1(this->m_C) = 0; /*0x51038b*/
  this->m_8 = 0; /*0x510391*/
  if ( (a2 & 1) != 0 ) /*0x510398*/
    __3_YAXPAX_Z(this); /*0x51039b*/
  return this->__pad_0; /*0x5103a5*/
}



// ==== 0x005103B0  _DynamicVectorClass__N::Constructor_VectorClass_bool_  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass__N::Constructor_VectorClass_bool_(_DynamicVectorClass__N *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5103b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<bool>::`vftable'; /*0x5103b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5103c0*/
  {
    __3_YAXPAX_Z(v3); /*0x5103c8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5103d0*/
  }
  BYTE1(this->m_C) = 0; /*0x5103db*/
  this->m_8 = 0; /*0x5103e1*/
  if ( (a2 & 1) != 0 ) /*0x5103e8*/
    __3_YAXPAX_Z(this); /*0x5103eb*/
  return this->__pad_0; /*0x5103f5*/
}



// ==== 0x00510400  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_flat::CopyConstructor(
        _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        char a2)
{
  int v3; // eax

  v3 = *(_DWORD *)&this->m_1[3]; /*0x510403*/
  *(_DWORD *)this->__pad_0 = &VectorClass<DiscreteDistributionClass<BuildingTypeClass>::DistributionObject<BuildingTypeClass *>>::`vftable'; /*0x510406*/
  if ( v3 && BYTE1(this->m_C) ) /*0x510410*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x510423*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x51042b*/
  }
  BYTE1(this->m_C) = 0; /*0x510436*/
  this->m_8 = 0; /*0x51043c*/
  if ( (a2 & 1) != 0 ) /*0x510443*/
    __3_YAXPAX_Z(this); /*0x510446*/
  return this->__pad_0; /*0x510450*/
}



// ==== 0x00510460  HouseClass::updatePowerState  this=HouseClass  sig=csp ====
char *__thiscall sub_510460(char *Block, char a2)
{
  char *v2; // esi

  v2 = Block; /*0x510461*/
  if ( (a2 & 2) != 0 ) /*0x51046a*/
  {
    v2 = Block - 4; /*0x51046f*/
    if ( (a2 & 1) != 0 ) /*0x510476*/
    {
      __3_YAXPAX_Z(v2); /*0x510479*/
      return v2; /*0x510484*/
    }
  }
  else if ( (a2 & 1) != 0 ) /*0x51048a*/
  {
    __3_YAXPAX_Z(Block); /*0x51048d*/
  }
  return v2; /*0x510483*/
}



// ==== 0x005104A0  _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::Constructor_0  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass__N_18::Constructor_0(
        _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        char a2)
{
  int v3; // eax

  v3 = *(_DWORD *)&this->m_1[3]; /*0x5104a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<DiscreteDistributionClass<BuildingTypeClass>::DistributionObject<BuildingTypeClass *>>::`vftable'; /*0x5104a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5104b0*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x5104c3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5104cb*/
  }
  BYTE1(this->m_C) = 0; /*0x5104d6*/
  this->m_8 = 0; /*0x5104dc*/
  if ( (a2 & 1) != 0 ) /*0x5104e3*/
    __3_YAXPAX_Z(this); /*0x5104e6*/
  return this->__pad_0; /*0x5104f0*/
}



// ==== 0x00510500  SuperClassVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall SuperClassVector::Construct(SuperClassVector *this, int a2, int a3)
{
  this->Items = 0; /*0x51050b*/
  this->Capacity = a2; /*0x51050e*/
  this->IsInitialized = 1; /*0x510511*/
  this->IsAllocated = 0; /*0x510515*/
  *this = (SuperClassVector)&VectorClass<SuperClass *>::`vftable'; /*0x510518*/
  if ( a2 ) /*0x51051e*/
  {
    if ( a3 ) /*0x510526*/
    {
      this->Items = a3; /*0x510528*/
      return this; /*0x51052e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x51053d*/
    this->IsAllocated = 1; /*0x510540*/
  }
  return this; /*0x51052d*/
}



// ==== 0x00510550  VectorClass::BuildingConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::BuildingConstructor(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x51055b*/
  this->Capacity = a2; /*0x51055e*/
  this->IsInitialized = 1; /*0x510561*/
  this->IsAllocated = 0; /*0x510565*/
  this->ptr_0 = &VectorClass<BuildingClass *>::`vftable'; /*0x510568*/
  if ( a2 ) /*0x51056e*/
  {
    if ( a3 ) /*0x510576*/
    {
      this->Items = (void *)a3; /*0x510578*/
      return &this->ptr_0; /*0x51057e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x51058d*/
    this->IsAllocated = 1; /*0x510590*/
  }
  return &this->ptr_0; /*0x51057d*/
}



// ==== 0x005105A0  VectorClass::BuildingTypeConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::BuildingTypeConstructor(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x5105ab*/
  this->Capacity = a2; /*0x5105ae*/
  this->IsInitialized = 1; /*0x5105b1*/
  this->IsAllocated = 0; /*0x5105b5*/
  this->ptr_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x5105b8*/
  if ( a2 ) /*0x5105be*/
  {
    if ( a3 ) /*0x5105c6*/
    {
      this->Items = (void *)a3; /*0x5105c8*/
      return &this->ptr_0; /*0x5105ce*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x5105dd*/
    this->IsAllocated = 1; /*0x5105e0*/
  }
  return &this->ptr_0; /*0x5105cd*/
}



// ==== 0x005105F0  ConnectionPointVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall ConnectionPointVector::Construct(ConnectionPointVector *this, int a2, int a3)
{
  this->Items = 0; /*0x5105fb*/
  this->Capacity = a2; /*0x5105fe*/
  this->IsInitialized = 1; /*0x510601*/
  this->IsAllocated = 0; /*0x510605*/
  *this = (ConnectionPointVector)&VectorClass<IConnectionPoint *>::`vftable'; /*0x510608*/
  if ( a2 ) /*0x51060e*/
  {
    if ( a3 ) /*0x510616*/
    {
      this->Items = a3; /*0x510618*/
      return this; /*0x51061e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x51062d*/
    this->IsAllocated = 1; /*0x510630*/
  }
  return this; /*0x51061d*/
}



// ==== 0x00510640  TagClassVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall TagClassVector::Construct(TagClassVector *this, int a2, int a3)
{
  this->Items = 0; /*0x51064b*/
  this->Capacity = a2; /*0x51064e*/
  this->IsInitialized = 1; /*0x510651*/
  this->IsAllocated = 0; /*0x510655*/
  *this = (TagClassVector)&VectorClass<TagClass *>::`vftable'; /*0x510658*/
  if ( a2 ) /*0x51065e*/
  {
    if ( a3 ) /*0x510666*/
    {
      this->Items = a3; /*0x510668*/
      return this; /*0x51066e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x51067d*/
    this->IsAllocated = 1; /*0x510680*/
  }
  return this; /*0x51066d*/
}



// ==== 0x00510690  StartingTechnoVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall StartingTechnoVector::Construct(StartingTechnoVector *this, int a2, int a3)
{
  this->Items = 0; /*0x51069b*/
  this->Capacity = a2; /*0x51069e*/
  this->IsInitialized = 1; /*0x5106a1*/
  this->IsAllocated = 0; /*0x5106a5*/
  *this = (StartingTechnoVector)&VectorClass<HouseClass::StartingTechnoStruct *>::`vftable'; /*0x5106a8*/
  if ( a2 ) /*0x5106ae*/
  {
    if ( a3 ) /*0x5106b6*/
    {
      this->Items = a3; /*0x5106b8*/
      return this; /*0x5106be*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5106cd*/
    this->IsAllocated = 1; /*0x5106d0*/
  }
  return this; /*0x5106bd*/
}



// ==== 0x005106E0  AngerVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall AngerVector::Construct(AngerVector *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // edx

  this->Items = 0; /*0x5106ed*/
  this->Capacity = a2; /*0x5106f0*/
  this->IsInitialized = 1; /*0x5106f3*/
  this->IsAllocated = 0; /*0x5106f7*/
  *this = (AngerVector)&VectorClass<AngerStruct>::`vftable'; /*0x5106fa*/
  if ( !a2 ) /*0x510700*/
    return this; /*0x510700*/
  if ( !a3 ) /*0x510708*/
  {
    v7 = __2_YAPAXI_Z(8 * a2); /*0x510732*/
    if ( v7 ) /*0x51073c*/
    {
      v8 = (_DWORD *)v7; /*0x510741*/
      if ( a2 - 1 >= 0 ) /*0x510745*/
      {
        v9 = a2; /*0x510747*/
        do /*0x510751*/
        {
          *v8 = 0; /*0x510748*/
          v8[1] = 0; /*0x51074a*/
          v8 += 2; /*0x51074d*/
          --v9; /*0x510750*/
        }
        while ( v9 ); /*0x510751*/
        this->Items = v7; /*0x510753*/
        this->IsAllocated = 1; /*0x510756*/
        return this; /*0x51075f*/
      }
    }
    else
    {
      v7 = 0; /*0x510762*/
    }
    this->Items = v7; /*0x510764*/
    this->IsAllocated = 1; /*0x510767*/
    return this; /*0x51076b*/
  }
  v4 = a3; /*0x51070d*/
  if ( a2 - 1 >= 0 ) /*0x510711*/
  {
    v5 = a2; /*0x510713*/
    do /*0x51071d*/
    {
      *v4 = 0; /*0x510714*/
      v4[1] = 0; /*0x510716*/
      v4 += 2; /*0x510719*/
      --v5; /*0x51071c*/
    }
    while ( v5 ); /*0x51071d*/
  }
  this->Items = a3; /*0x51071f*/
  return this; /*0x510724*/
}



// ==== 0x00510780  ScoutVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall ScoutVector::Construct(ScoutVector *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx

  this->Items = 0; /*0x51078d*/
  this->Capacity = a2; /*0x510790*/
  this->IsInitialized = 1; /*0x510793*/
  this->IsAllocated = 0; /*0x510797*/
  *this = (ScoutVector)&VectorClass<ScoutStruct>::`vftable'; /*0x51079a*/
  if ( !a2 ) /*0x5107a0*/
    return this; /*0x5107a0*/
  if ( !a3 ) /*0x5107a8*/
  {
    v7 = __2_YAPAXI_Z(8 * a2); /*0x5107d2*/
    if ( v7 ) /*0x5107dc*/
    {
      v8 = v7; /*0x5107e1*/
      if ( a2 - 1 >= 0 ) /*0x5107e5*/
      {
        v9 = a2; /*0x5107e7*/
        do /*0x5107f1*/
        {
          *(_DWORD *)v8 = 0; /*0x5107e8*/
          *(_BYTE *)(v8 + 4) = 0; /*0x5107ea*/
          v8 += 8; /*0x5107ed*/
          --v9; /*0x5107f0*/
        }
        while ( v9 ); /*0x5107f1*/
        this->Items = v7; /*0x5107f3*/
        this->IsAllocated = 1; /*0x5107f6*/
        return this; /*0x5107ff*/
      }
    }
    else
    {
      v7 = 0; /*0x510802*/
    }
    this->Items = v7; /*0x510804*/
    this->IsAllocated = 1; /*0x510807*/
    return this; /*0x51080b*/
  }
  v4 = a3; /*0x5107ad*/
  if ( a2 - 1 >= 0 ) /*0x5107b1*/
  {
    v5 = a2; /*0x5107b3*/
    do /*0x5107bd*/
    {
      *(_DWORD *)v4 = 0; /*0x5107b4*/
      *(_BYTE *)(v4 + 4) = 0; /*0x5107b6*/
      v4 += 8; /*0x5107b9*/
      --v5; /*0x5107bc*/
    }
    while ( v5 ); /*0x5107bd*/
  }
  this->Items = a3; /*0x5107bf*/
  return this; /*0x5107c4*/
}



// ==== 0x00510820  HouseClass::processAIEvents  this=HouseClass  sig=csp ====
char __thiscall HouseClass::processAIEvents(HouseClass *this, int a2)
{
  int uniqueId; // edx
  int v3; // eax
  int v4; // edx

  uniqueId = this->?; /*0x510820*/
  v3 = a2; /*0x510823*/
  if ( a2 >= uniqueId ) /*0x510829*/
    return 0; /*0x51084c*/
  v4 = uniqueId - 1; /*0x51082b*/
  this->? = v4; /*0x51082e*/
  if ( a2 < v4 ) /*0x510831*/
  {
    do /*0x510844*/
    {
      ++v3; /*0x510837*/
      *((_DWORD *)this->? + v3 - 1) = *((_DWORD *)this->? + v3); /*0x51083b*/
    }
    while ( v3 < this->? ); /*0x510844*/
  }
  return 1; /*0x510849*/
}



// ==== 0x00510860  BuildLocationVector::Grow  this=BuildLocationVector  sig=csp ====
char __thiscall BuildLocationVector::Grow(int this, int a2)
{
  char *v3; // edi
  int i; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x51086c*/
    return 0; /*0x51086c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *(_DWORD *)(this + 8))); /*0x510880*/
  if ( !v3 ) /*0x510887*/
    return 0; /*0x5108e0*/
  for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)&v3[v5 + 4] = v6[1] ) /*0x510895*/
  {
    v5 = 8 * i; /*0x510899*/
    v6 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x5108a2*/
    *(_DWORD *)&v3[v5] = *v6; /*0x5108a7*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x5108bb*/
  v7 = a2 + *(_DWORD *)(this + 8); /*0x5108c6*/
  *(_DWORD *)this = v3; /*0x5108c8*/
  *(_DWORD *)(this + 8) = v7; /*0x5108ca*/
  *(_DWORD *)(this + 16) = 0; /*0x5108cd*/
  return 1; /*0x5108d4*/
}



// ==== 0x005108F0  globalHelper_0108F0  this=-  sig=ida-proto ====
int __cdecl globalHelper_0108F0(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x510900*/
  else
    return *a1 >= *a2 ? 1 : -1;
}



// ==== 0x00510920  BoolVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall BoolVector::Construct(BoolVector *this, size_t Size, int a3)
{
  this->Items = 0; /*0x51092b*/
  this->Capacity = Size; /*0x51092e*/
  this->IsInitialized = 1; /*0x510931*/
  this->IsAllocated = 0; /*0x510935*/
  *this = (BoolVector)&VectorClass<bool>::`vftable'; /*0x510938*/
  if ( Size ) /*0x51093e*/
  {
    if ( a3 ) /*0x510946*/
    {
      this->Items = a3; /*0x510948*/
      return this; /*0x51094e*/
    }
    this->Items = __2_YAPAXI_Z(Size); /*0x51095a*/
    this->IsAllocated = 1; /*0x51095d*/
  }
  return this; /*0x51094d*/
}



// ==== 0x00510970  DistributionVector_BuildingType::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall DistributionVector_BuildingType::Construct(
        DistributionVector_BuildingType *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  int *v7; // eax
  _DWORD *v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx

  this->Items = 0; /*0x51097a*/
  this->Capacity = a2; /*0x510981*/
  this->IsInitialized = 1; /*0x510984*/
  this->IsAllocated = 0; /*0x510988*/
  *this = (DistributionVector_BuildingType)&VectorClass<DiscreteDistributionClass<BuildingTypeClass>::DistributionObject<BuildingTypeClass *>>::`vftable'; /*0x51098c*/
  if ( !a2 ) /*0x510992*/
    return this; /*0x510992*/
  if ( a3 ) /*0x51099a*/
  {
    *a3 = a2; /*0x51099f*/
    if ( a2 - 1 >= 0 ) /*0x5109a6*/
    {
      v4 = a3 + 2; /*0x5109a8*/
      v5 = a2; /*0x5109ab*/
      do /*0x5109b6*/
      {
        *v4 = 0; /*0x5109ac*/
        v4 += 2; /*0x5109b2*/
        --v5; /*0x5109b5*/
      }
      while ( v5 ); /*0x5109b6*/
    }
    this->Items = a3 + 1; /*0x5109b8*/
    return this; /*0x5109bf*/
  }
  v7 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x5109ca*/
  if ( !v7 ) /*0x5109d4*/
  {
    this->IsAllocated = 1; /*0x510a04*/
    this->Items = 0; /*0x510a08*/
    return this; /*0x510a0b*/
  }
  *v7 = a2; /*0x5109d9*/
  v8 = v7 + 1; /*0x5109dd*/
  if ( a2 - 1 >= 0 ) /*0x5109e0*/
  {
    v9 = v7 + 2; /*0x5109e2*/
    v10 = a2; /*0x5109e5*/
    do /*0x5109f0*/
    {
      *v9 = 0; /*0x5109e6*/
      v9 += 2; /*0x5109ec*/
      --v10; /*0x5109ef*/
    }
    while ( v10 ); /*0x5109f0*/
  }
  this->IsAllocated = 1; /*0x5109f4*/
  this->Items = v8; /*0x5109f8*/
  return this; /*0x5109bd*/
}



// ==== 0x00510A20  AbstractClass::saveToStream  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::sub_510A20(int a1, const void *a2, _DWORD *a3)
{
  return HouseClass::QueryInterface(a1 - 4, a2, a3);
}



// ==== 0x00510A30  AbstractClass::loadFromStream  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::sub_510A30(int a1)
{
  return HouseClass::COMStub_Ret1_1(a1 - 4);
}



// ==== 0x00510A40  AbstractClass::computeSize  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::sub_510A40(int a1)
{
  return HouseClass::COMStub_Ret1_2(a1 - 4);
}



// ==== 0x00510A50  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_2  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510A50(int a1, const void *a2, _DWORD *a3)
{
  return HouseClass::QueryInterface(a1 - 36, a2, a3);
}



// ==== 0x00510A60  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_3  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510A60(int a1)
{
  return HouseClass::COMStub_Ret1_1(a1 - 36);
}



// ==== 0x00510A70  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_4  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510A70(int a1)
{
  return HouseClass::COMStub_Ret1_2(a1 - 36);
}



// ==== 0x00510A80  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_5  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510A80(int a1, const void *a2, _DWORD *a3)
{
  return HouseClass::QueryInterface(a1 - 40, a2, a3);
}



// ==== 0x00510A90  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_6  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510A90(int a1)
{
  return HouseClass::COMStub_Ret1_1(a1 - 40);
}



// ==== 0x00510AA0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_7  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510AA0(int a1)
{
  return HouseClass::COMStub_Ret1_2(a1 - 40);
}



// ==== 0x00510AB0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_8  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510AB0(int a1)
{
  return VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_1(a1 - 4);
}



// ==== 0x00510AC0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_9  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
BSTR __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510AC0(int a1)
{
  return VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex(a1 - 4);
}



// ==== 0x00510AD0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_10  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510AD0(int a1, const void *a2, _DWORD *a3)
{
  return HouseClass::QueryInterface(a1 - 44, a2, a3);
}



// ==== 0x00510AE0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_11  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510AE0(int a1)
{
  return HouseClass::COMStub_Ret1_1(a1 - 44);
}



// ==== 0x00510AF0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_12  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510AF0(int a1)
{
  return HouseClass::COMStub_Ret1_2(a1 - 44);
}



// ==== 0x00510B00  sub_510B00  this=-  sig=ida-proto ====
void sub_510B00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x510b0c*/
  dbl_A8F068 = Math::Sqrt(v0 + v0); /*0x510b1e*/
}



// ==== 0x00510B30  sub_510B30  this=-  sig=ida-proto ====
void sub_510B30()
{
  dbl_A8F0B8 = dbl_A8F068 / 60.0; /*0x510b3c*/
}



// ==== 0x00510B50  sub_510B50  this=-  sig=ida-proto ====
void sub_510B50()
{
  dbl_A8F0A0 = 1.0 / dbl_A8F0B8; /*0x510b5c*/
}



// ==== 0x00510B70  sub_510B70  this=-  sig=ida-proto ====
void sub_510B70()
{
  dbl_A8F098 = 0.0174532925199433 * 45.0; /*0x510b7c*/
}



// ==== 0x00510B90  sub_510B90  this=-  sig=ida-proto ====
void sub_510B90()
{
  dbl_A8F070 = 0.0174532925199433 * 60.0; /*0x510b9c*/
}



// ==== 0x00510BB0  sub_510BB0  this=-  sig=ida-proto ====
void sub_510BB0()
{
  dbl_A8F048 = 0.0174532925199433 * 90.0; /*0x510bbc*/
}



// ==== 0x00510BD0  sub_510BD0  this=-  sig=ida-proto ====
__int64 sub_510BD0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A8F048 - dbl_A8F070); /*0x510be2*/
  result = Math::RoundToInt(v0 * dbl_A8F068 * 0.5); /*0x510bf6*/
  dword_A8F0C0 = result; /*0x510bfb*/
  return result; /*0x510c00*/
}



// ==== 0x00510C10  sub_510C10  this=-  sig=ida-proto ====
void sub_510C10()
{
  dbl_A8F078 = Math::ArcTan((double)dword_A8F0C0 * 0.00390625); /*0x510c27*/
}



// ==== 0x00510C40  sub_510C40  this=-  sig=ida-proto ====
void sub_510C40()
{
  dbl_A8F090 = Math::ArcTan((double)(2 * dword_A8F0C0) / dbl_A8F068); /*0x510c62*/
}



// ==== 0x00510C70  sub_510C70  this=-  sig=ida-proto ====
__int64 sub_510C70()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F0C0) + 0.5); /*0x510c8b*/
  dword_A8F0B4 = result; /*0x510c90*/
  return result; /*0x510c96*/
}



// ==== 0x00510CA0  sub_510CA0  this=-  sig=ida-proto ====
int sub_510CA0()
{
  word_A8F060 = 0; /*0x510ca2*/
  word_A8F062 = 0; /*0x510ca8*/
  return 0; /*0x510cae*/
}



// ==== 0x00510CB0  sub_510CB0  this=-  sig=ida-proto ====
int sub_510CB0()
{
  dword_A8F080 = 0; /*0x510cb2*/
  dword_A8F084 = 0; /*0x510cb7*/
  dword_A8F088 = 0; /*0x510cbc*/
  return 0; /*0x510cc1*/
}



// ==== 0x00510CD0  sub_510CD0  this=-  sig=ida-proto ====
int sub_510CD0()
{
  dword_A8F0B0 = 0; /*0x510cd5*/
  dword_A8F0A8 = 128; /*0x510cdf*/
  dword_A8F0AC = 128; /*0x510ce4*/
  return 128; /*0x510ce9*/
}



// ==== 0x00510CF0  sub_510CF0  this=-  sig=ida-proto ====
int sub_510CF0()
{
  dword_A8F050 = 0; /*0x510cf2*/
  dword_A8F054 = 0; /*0x510cf7*/
  dword_A8F058 = 0; /*0x510cfc*/
  dword_A8F05C = 0; /*0x510d01*/
  return 0; /*0x510d06*/
}



// ==== 0x00510E10  FormatHouseClassPlayerName  this=-  sig=csp ====
unsigned int __fastcall HouseClass_FormatPlayerName(int a1, _BYTE *a2, int a3)
{
  unsigned int result; // eax
  const char *v4; // edi

  result = a3; /*0x510e10*/
  if ( a3 < 16 ) /*0x510e19*/
  {
    if ( a3 < 1 ) /*0x510e1e*/
      return result; /*0x510e1e*/
    *a2 = 0; /*0x510e24*/
  }
  switch ( a1 ) /*0x510e2d*/
  {
    case 4475: /*0x510e2d*/
      v4 = g_Str__Player___A_; /*0x510e2f*/
      break;
    case 4476: /*0x510e2d*/
      v4 = g_Str__Player___B_; /*0x510e3e*/
      break;
    case 4477: /*0x510e2d*/
      v4 = g_Str__Player___C_; /*0x510e4d*/
      break;
    case 4478: /*0x510e2d*/
      v4 = g_Str__Player___D_; /*0x510e5c*/
      break;
    case 4479: /*0x510e2d*/
      v4 = aPlayerE; /*0x510e6b*/
      break;
    case 4480: /*0x510e2d*/
      v4 = aPlayerF; /*0x510e7a*/
      break;
    case 4481: /*0x510e2d*/
      v4 = aPlayerG; /*0x510e89*/
      break;
    default:
      v4 = unk_825000; /*0x510e96*/
      if ( a1 != 4482 ) /*0x510e9b*/
        v4 = &g_INI_DefaultBuffer; /*0x510e9d*/
      break;
  }
  result = strlen(v4) + 1; /*0x510ea7*/
  qmemcpy(a2, v4, result); /*0x510eb6*/
  return result; /*0x510ebf*/
}



// ==== 0x00510ED0  BuildingType::FindOwnerHouse  this=BuildingType  sig=csp ====
int __thiscall BuildingType::FindOwnerHouse(BuildingType *this)
{
  int v1; // eax

  if ( this == (BuildingType *)4475 ) /*0x510ed6*/
  {
    v1 = BuildingType::Init((BuildingType *)dword_A8B230, 0); /*0x510eda*/
  }
  else if ( this == (BuildingType *)4476 ) /*0x510ee2*/
  {
    v1 = BuildingType::Init((BuildingType *)dword_A8B230, 1u); /*0x510ee6*/
  }
  else if ( this == (BuildingType *)4477 ) /*0x510eee*/
  {
    v1 = BuildingType::Init((BuildingType *)dword_A8B230, 2u); /*0x510ef2*/
  }
  else if ( this == (BuildingType *)4478 ) /*0x510efa*/
  {
    v1 = BuildingType::Init((BuildingType *)dword_A8B230, 3u); /*0x510efe*/
  }
  else if ( this == (BuildingType *)4479 ) /*0x510f06*/
  {
    v1 = BuildingType::Init((BuildingType *)dword_A8B230, 4u); /*0x510f0a*/
  }
  else if ( this == (BuildingType *)4480 ) /*0x510f12*/
  {
    v1 = BuildingType::Init((BuildingType *)dword_A8B230, 5u); /*0x510f16*/
  }
  else if ( this == (BuildingType *)4481 ) /*0x510f1e*/
  {
    v1 = BuildingType::Init((BuildingType *)dword_A8B230, 6u); /*0x510f22*/
  }
  else
  {
    if ( this != (BuildingType *)4482 ) /*0x510f2a*/
      return 0; /*0x510f2a*/
    v1 = BuildingType::Init((BuildingType *)dword_A8B230, 7u); /*0x510f34*/
  }
  if ( v1 >= 0 && v1 < dword_A80238 ) /*0x510f43*/
    return *(&dword_A8022C->ptr_0 + v1); /*0x510f4e*/
  return 0; /*0x510f4e*/
}



// ==== 0x00510F60  BuildingType::IsSpecialType  this=IUnknown  sig=csp ====
int __thiscall BuildingType::IsSpecialType(BuildingType *this)
{
  int result; // eax

  LOBYTE(result) = this == (BuildingType *)4475 /*0x510fa3*/
                || this == (BuildingType *)4476
                || this == (BuildingType *)4477
                || this == (BuildingType *)4478
                || this == (BuildingType *)4479
                || this == (BuildingType *)4480
                || this == (BuildingType *)4481
                || this == (BuildingType *)4482;
  return result; /*0x510fa2*/
}



// ==== 0x00510FB0  PlayerSlot::NameToDialogID  this=PlayerSlot  sig=csp ====
int __thiscall PlayerSlot::NameToDialogID(const char *this)
{
  if ( !strcmp(this, g_Str__Player___A_) ) /*0x510fc4*/
    return 4475; /*0x510fef*/
  if ( !strcmp(this, g_Str__Player___B_) ) /*0x511005*/
    return 4476; /*0x511030*/
  if ( !strcmp(this, g_Str__Player___C_) ) /*0x511046*/
    return 4477; /*0x511071*/
  if ( !strcmp(this, g_Str__Player___D_) ) /*0x511087*/
    return 4478; /*0x5110b2*/
  if ( !strcmp(this, aPlayerE) ) /*0x5110c8*/
    return 4479; /*0x5110f3*/
  if ( !strcmp(this, aPlayerF) ) /*0x511109*/
    return 4480; /*0x511134*/
  if ( !strcmp(this, aPlayerG) ) /*0x51114a*/
    return 4481; /*0x511175*/
  if ( !strcmp(this, unk_825000) ) /*0x51118b*/
    return 4482; /*0x5111b5*/
  return -1; /*0x510fed*/
}



// ==== 0x005111E0  sub_5111E0  this=-  sig=ida-proto ====
int sub_5111E0()
{
  dword_A8F0D0 = 0; /*0x5111e2*/
  dword_A8F0D4 = 0; /*0x5111e7*/
  dword_A8F0D8 = 0; /*0x5111ec*/
  dword_A8F0DC = 0; /*0x5111f1*/
  return 0; /*0x5111f6*/
}



// ==== 0x00511200  sub_511200  this=-  sig=ida-proto ====
void sub_511200()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x51120c*/
  dbl_A8F0E8 = Math::Sqrt(v0 + v0); /*0x51121e*/
}



// ==== 0x00511230  sub_511230  this=-  sig=ida-proto ====
void sub_511230()
{
  dbl_A8F138 = dbl_A8F0E8 / 60.0; /*0x51123c*/
}



// ==== 0x00511250  sub_511250  this=-  sig=ida-proto ====
void sub_511250()
{
  dbl_A8F120 = 1.0 / dbl_A8F138; /*0x51125c*/
}



// ==== 0x00511270  sub_511270  this=-  sig=ida-proto ====
void sub_511270()
{
  dbl_A8F118 = 0.0174532925199433 * 45.0; /*0x51127c*/
}



// ==== 0x00511290  sub_511290  this=-  sig=ida-proto ====
void sub_511290()
{
  dbl_A8F0F0 = 0.0174532925199433 * 60.0; /*0x51129c*/
}



// ==== 0x005112B0  sub_5112B0  this=-  sig=ida-proto ====
void sub_5112B0()
{
  dbl_A8F0C8 = 0.0174532925199433 * 90.0; /*0x5112bc*/
}



// ==== 0x005112D0  sub_5112D0  this=-  sig=ida-proto ====
__int64 sub_5112D0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A8F0C8 - dbl_A8F0F0); /*0x5112e2*/
  result = Math::RoundToInt(v0 * dbl_A8F0E8 * 0.5); /*0x5112f6*/
  dword_A8F140 = result; /*0x5112fb*/
  return result; /*0x511300*/
}



// ==== 0x00511310  sub_511310  this=-  sig=ida-proto ====
void sub_511310()
{
  dbl_A8F0F8 = Math::ArcTan((double)dword_A8F140 * 0.00390625); /*0x511327*/
}



// ==== 0x00511340  sub_511340  this=-  sig=ida-proto ====
void sub_511340()
{
  dbl_A8F110 = Math::ArcTan((double)(2 * dword_A8F140) / dbl_A8F0E8); /*0x511362*/
}



// ==== 0x00511370  sub_511370  this=-  sig=ida-proto ====
__int64 sub_511370()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F140) + 0.5); /*0x51138b*/
  dword_A8F134 = result; /*0x511390*/
  return result; /*0x511396*/
}



// ==== 0x005113A0  sub_5113A0  this=-  sig=ida-proto ====
int sub_5113A0()
{
  word_A8F0E0 = 0; /*0x5113a2*/
  word_A8F0E2 = 0; /*0x5113a8*/
  return 0; /*0x5113ae*/
}



// ==== 0x005113B0  sub_5113B0  this=-  sig=ida-proto ====
int sub_5113B0()
{
  dword_A8F100 = 0; /*0x5113b2*/
  dword_A8F104 = 0; /*0x5113b7*/
  dword_A8F108 = 0; /*0x5113bc*/
  return 0; /*0x5113c1*/
}



// ==== 0x005113D0  sub_5113D0  this=-  sig=ida-proto ====
int sub_5113D0()
{
  dword_A8F130 = 0; /*0x5113d5*/
  dword_A8F128 = 128; /*0x5113df*/
  dword_A8F12C = 128; /*0x5113e4*/
  return 128; /*0x5113e9*/
}



// ==== 0x005113F0  SuperWeaponTypeClass::Construct  this=HouseTypeClass  sig=csp ====
_BYTE *__thiscall SuperWeaponTypeClass::Construct(SuperWeaponTypeClass *this, char *Source)
{
  BuildingTypeClass *v3; // ebx
  int v4; // eax
  bool v5; // zf
  int v6; // ecx
  SuperWeaponTypeClass **v7; // edx
  SuperWeaponTypeClass **v8; // ecx

  AbstractTypeClass::Constructor((int *)this, Source); /*0x5113fa*/
  v3 = 0; /*0x5113ff*/
  LOBYTE(this->ArrayIndex) = 0; /*0x511404*/
  this->Type = (BuildingTypeClass *)-1; /*0x51140a*/
  this->SidebarImage = (SHPStruct *)-1; /*0x511410*/
  this->ActionValue[0] = -1; /*0x511416*/
  this->SpecialSound = 0; /*0x51141c*/
  this->AuxBuilding = 0; /*0x511427*/
  this->SidebarImageFile[0] = 1072693248; /*0x51142d*/
  this->SidebarImageFile[1] = 0; /*0x511433*/
  this->SidebarImageFile[2] = 1072693248; /*0x511439*/
  this->SidebarImageFile[3] = 0; /*0x51143f*/
  this->SidebarImageFile[4] = 1072693248; /*0x511445*/
  this->SidebarImageFile[5] = 0; /*0x51144b*/
  *(_DWORD *)&this->zero_E4 = 1072693248; /*0x511451*/
  this->FlashSidebarTabFrames = 0; /*0x511457*/
  this->PreDependent = 0; /*0x51145d*/
  this->Range = 0.0; /*0x511463*/
  *(_DWORD *)&this->AIDefendAgainst = 1072693248; /*0x511469*/
  *(_DWORD *)&this->ShowTimer = 1072693248; /*0x51146f*/
  this->LineMultiplier = 1072693248; /*0x511475*/
  this->rofMult = 1065353216; /*0x51148a*/
  this->q104 = 1065353216; /*0x511490*/
  this->q042 = 1065353216; /*0x511496*/
  this->q10C = 1065353216; /*0x51149c*/
  this->q044 = 1065353216; /*0x5114a2*/
  this->q114 = 1065353216; /*0x5114a8*/
  this->q118 = 1065353216; /*0x5114ae*/
  this->q11C = 1065353216; /*0x5114b4*/
  this->costMult = 1065353216; /*0x5114ba*/
  this->q124 = 1065353216; /*0x5114c0*/
  this->q04A = 1065353216; /*0x5114c6*/
  this->q12C = 1065353216; /*0x5114cc*/
  this->q04C = 1065353216; /*0x5114d2*/
  this->q134 = 1065353216; /*0x5114d8*/
  this->q138 = 1065353216; /*0x5114de*/
  this->q04F = 1065353216; /*0x5114e4*/
  this->buildtimeMult = 1065353216; /*0x5114ea*/
  this->q144 = 1065353216; /*0x5114f0*/
  this->q148 = 1065353216; /*0x5114f6*/
  InfantryTypeVector::Construct2((InfantryTypeVector *)((char *)this + 332), 0, 0); /*0x5114fc*/
  this->armorInfantryMult = 10; /*0x511501*/
  this->q15C = 0; /*0x511508*/
  this->q14C = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x51150b*/
  UnitTypeVector::ConstructUnitTypeVectorClass((UnitTypeVector *)((char *)this + 360), 0, 0); /*0x51151b*/
  this->u32_17C = 10; /*0x511520*/
  this->u32_178 = 0; /*0x511527*/
  this->q168 = &TypeList<UnitTypeClass const *>::`vftable'; /*0x51152a*/
  AircraftTypeVector::Constructor((AircraftTypeVector *)this + 97, 0, 0); /*0x51153a*/
  this->q198 = 10; /*0x511542*/
  this->q194 = 0; /*0x511549*/
  this->q184 = &TypeList<AircraftTypeClass const *>::`vftable'; /*0x51154c*/
  this->q1A4 = 16777281; /*0x511552*/
  this->q1A8 = 0; /*0x51156c*/
  this->AbstractTypeClass = &HouseTypeClass::`vftable'; /*0x511572*/
  this->? = &HouseTypeClass::`vftable'; /*0x511578*/
  this->? = &HouseTypeClass::`vftable'; /*0x51157f*/
  this->? = &HouseTypeClass::`vftable'; /*0x511586*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x51158d*/
  this->q1A0 = 0; /*0x511592*/
  v4 = dword_A83CA8; /*0x511598*/
  if ( dword_A83CA8 < dword_A83CA0 /*0x5115d6*/
    || (byte_A83CA5 || !dword_A83CA0)
    && dword_A83CAC[0] > 0
    && (v5 = (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A83C98 + 8))(
               &dword_A83C98,
               dword_A83CA0 + dword_A83CAC[0],
               0) == 0,
        v4 = dword_A83CA8,
        !v5) )
  {
    dword_A83CA8 = v4 + 1; /*0x5115db*/
    *((_DWORD *)dword_A83C9C + v4) = this; /*0x5115e5*/
    v4 = dword_A83CA8; /*0x5115e8*/
  }
  v6 = 0; /*0x5115ed*/
  if ( v4 <= 0 ) /*0x5115f1*/
  {
LABEL_11:
    v6 = -1; /*0x511605*/
  }
  else
  {
    v7 = (SuperWeaponTypeClass **)dword_A83C9C; /*0x5115f3*/
    while ( *v7 != this ) /*0x5115fb*/
    {
      ++v6; /*0x5115fd*/
      ++v7; /*0x5115fe*/
      if ( v6 >= v4 ) /*0x511603*/
        goto LABEL_11; /*0x511603*/
    }
  }
  this->SidebarImage = (SHPStruct *)v6; /*0x511608*/
  if ( dword_A83CA8 <= 0 ) /*0x511615*/
  {
LABEL_16:
    this->Type = (BuildingTypeClass *)-1; /*0x511629*/
    return this; /*0x511633*/
  }
  else
  {
    v8 = (SuperWeaponTypeClass **)dword_A83C9C; /*0x511617*/
    while ( *v8 != this ) /*0x51161f*/
    {
      v3 = (BuildingTypeClass *)((char *)v3 + 1); /*0x511621*/
      ++v8; /*0x511622*/
      if ( (int)v3 >= dword_A83CA8 ) /*0x511627*/
        goto LABEL_16; /*0x511627*/
    }
    this->Type = v3; /*0x51163a*/
    return this; /*0x511640*/
  }
}



// ==== 0x00511650  HouseTypeClass::loadVeteranWeapons  this=HouseTypeClass  sig=csp ====
_DWORD *__thiscall HouseTypeClass::loadVeteranWeapons(HouseTypeClass *this, int a2)
{
  AbstractTypeClass::Init((int)this, a2); /*0x511658*/
  this->veteranInfantry[0] = (int)&TypeList<InfantryTypeClass const *>::`vftable'; /*0x51165d*/
  *(_DWORD *)&this->prefix = &TypeList<UnitTypeClass const *>::`vftable'; /*0x511667*/
  *(_DWORD *)&this->__pad_16D[23] = &TypeList<AircraftTypeClass const *>::`vftable'; /*0x511671*/
  this->AbstractClass = &HouseTypeClass::`vftable'; /*0x51167b*/
  this->? = &HouseTypeClass::`vftable'; /*0x511681*/
  this->? = &HouseTypeClass::`vftable'; /*0x511688*/
  this->? = &HouseTypeClass::`vftable'; /*0x51168f*/
  return &this->AbstractClass; /*0x511698*/
}



// ==== 0x005116A0  HouseTypeClass::Dtor  this=HouseTypeClass  sig=csp ====
int __thiscall HouseTypeClass::Dtor(HouseTypeClass *this)
{
  int v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *veteranInfantryCount; // eax
  HouseTypeClass *v7; // [esp+8h] [ebp-4h] BYREF

  this->AbstractClass = &HouseTypeClass::`vftable'; /*0x5116a7*/
  this->? = &HouseTypeClass::`vftable'; /*0x5116ad*/
  this->? = &HouseTypeClass::`vftable'; /*0x5116b4*/
  this->? = &HouseTypeClass::`vftable'; /*0x5116bb*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x5116c2*/
  v7 = this; /*0x5116d7*/
  v2 = (*(int (__thiscall **)(_DWORD *, HouseTypeClass **))(dword_A83C98 + 16))(&dword_A83C98, &v7); /*0x5116db*/
  if ( v2 != -1 && v2 < dword_A83CA8 && v2 < --dword_A83CA8 ) /*0x5116f6*/
  {
    do /*0x51170e*/
    {
      ++v2; /*0x5116fe*/
      *((_DWORD *)dword_A83C9C + v2 - 1) = *((_DWORD *)dword_A83C9C + v2); /*0x511702*/
    }
    while ( v2 < dword_A83CA8 ); /*0x51170e*/
  }
  v3 = *(void **)&this->__pad_16D[27]; /*0x511710*/
  *(_DWORD *)&this->__pad_16D[23] = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x51171a*/
  if ( v3 && this->__pad_16D[36] ) /*0x511726*/
  {
    __3_YAXPAX_Z(v3); /*0x51172f*/
    *(_DWORD *)&this->__pad_16D[27] = 0; /*0x511737*/
  }
  this->__pad_16D[36] = 0; /*0x51173d*/
  *(_DWORD *)&this->__pad_16D[31] = 0; /*0x511743*/
  v4 = *(void **)&this->smartAi; /*0x511749*/
  *(_DWORD *)&this->prefix = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x51174f*/
  if ( v4 && this->__pad_16D[8] ) /*0x51175d*/
  {
    __3_YAXPAX_Z(v4); /*0x511766*/
    *(_DWORD *)&this->smartAi = 0; /*0x51176e*/
  }
  this->__pad_16D[8] = 0; /*0x511774*/
  *(_DWORD *)&this->__pad_16D[3] = 0; /*0x51177a*/
  veteranInfantryCount = (void *)this->veteranInfantryCount; /*0x511780*/
  this->veteranInfantry[0] = (int)&VectorClass<InfantryTypeClass const *>::`vftable'; /*0x511786*/
  if ( veteranInfantryCount && BYTE1(this->veteranUnitsCount) ) /*0x511794*/
  {
    __3_YAXPAX_Z(veteranInfantryCount); /*0x51179d*/
    this->veteranInfantryCount = 0; /*0x5117a5*/
  }
  BYTE1(this->veteranUnitsCount) = 0; /*0x5117ad*/
  this->veteranUnits[0] = 0; /*0x5117b3*/
  return AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x5117be*/
}



// ==== 0x005117D0  SuperWeaponTypeClass::FindByName  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::FindByName(SuperWeaponTypeClass *this)
{
  int v3; // ebx
  int v4; // esi

  if ( !_strcmpi((char *)this, g_Str__random_) ) /*0x5117db*/
    return -2; /*0x5117e9*/
  if ( !this ) /*0x5117f2*/
    return -1; /*0x5117f2*/
  v3 = 0; /*0x5117f9*/
  if ( dword_A83CA8 <= 0 ) /*0x5117fd*/
    return -1; /*0x511833*/
  while ( 1 ) /*0x511805*/
  {
    v4 = *((_DWORD *)dword_A83C9C + v3); /*0x511805*/
    if ( !_strcmpi((char *)(v4 + 100), (char *)this) || !_strcmpi((char *)(v4 + 36), (char *)this) ) /*0x51181d*/
      break; /*0x51181d*/
    if ( ++v3 >= dword_A83CA8 ) /*0x511831*/
      return -1; /*0x511831*/
  }
  return *(_DWORD *)(v4 + 184); /*0x5117e7*/
}



// ==== 0x00511850  HouseTypeClass::LoadFromINI  this=HouseTypeClass  sig=csp ====
char __userpurge HouseTypeClass::LoadFromINI@<al>(HouseTypeClass *this, double a2@<st0>, unsigned __int8 ***a3)
{
  int v3; // ecx
  HouseTypeClass *v4; // esi
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  double v12; // rax
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  double v20; // rax
  char v22; // cl
  char Bool_Overwrite; // al
  char v25; // al
  char v26; // cl
  char v27; // al
  char *i; // eax
  int UnitTypeVector_field_0x10; // edx
  int UnitTypeVector_field_0x18; // ecx
  void *UnitTypeVector_field_0x04; // eax
  char *j; // eax
  int Alt; // edi
  int v34; // eax
  int InfantryTypeVector_field_0x10; // edx
  int InfantryTypeVector_field_0x18; // ecx
  void *InfantryTypeVector_field_0x04; // eax
  char *k; // eax
  int v39; // edi
  int v40; // eax
  int v41; // edx
  int v42; // ecx
  void *v43; // eax
  int v44; // edi
  int CountryData; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // edx
  int v49; // eax
  int v50; // edx
  int v51; // eax
  int v52; // esi
  int v53; // eax
  int v54; // ecx
  int v55; // esi
  int v56; // ecx
  int v57; // eax
  int v58; // edx
  double v60; // [esp+0h] [ebp-F8h]
  double v61; // [esp+0h] [ebp-F8h]
  double v62; // [esp+0h] [ebp-F8h]
  double v63; // [esp+0h] [ebp-F8h]
  double v64; // [esp+0h] [ebp-F8h]
  double v65; // [esp+0h] [ebp-F8h]
  double v66; // [esp+0h] [ebp-F8h]
  double v67; // [esp+0h] [ebp-F8h]
  double v68; // [esp+0h] [ebp-F8h]
  double v69; // [esp+0h] [ebp-F8h]
  double v70; // [esp+0h] [ebp-F8h]
  double v71; // [esp+0h] [ebp-F8h]
  double v72; // [esp+0h] [ebp-F8h]
  double v73; // [esp+0h] [ebp-F8h]
  double v74; // [esp+0h] [ebp-F8h]
  double v75; // [esp+0h] [ebp-F8h]
  double v76; // [esp+0h] [ebp-F8h]
  double v77; // [esp+0h] [ebp-F8h]
  double v78; // [esp+0h] [ebp-F8h]
  char v79; // [esp+4h] [ebp-F4h]
  UnitTypeVector Destination; // [esp+18h] [ebp-E0h] BYREF
  char v81[2]; // [esp+36h] [ebp-C2h] BYREF
  InfantryTypeVector v82; // [esp+38h] [ebp-C0h] BYREF
  char Source[32]; // [esp+58h] [ebp-A0h] BYREF
  char String[128]; // [esp+78h] [ebp-80h] BYREF

  v4 = this; /*0x51185e*/
  _EBX = v3; /*0x511861*/
  INIClass::ResetSection((INIClass *)this); /*0x511866*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)_EBX, (unsigned __int8 ***)this) ) /*0x51186e*/
    return 0; /*0x51215c*/
  INIClass::GetString((INIClass *)this, (unsigned __int8 *)(_EBX + 36), aSuffix, &g_INI_DefaultBuffer, Source, 4); /*0x511892*/
  if ( strlen(Source) ) /*0x51189b*/
  {
    strcpy((char *)(_EBX + 416), Source); /*0x5118c3*/
    v4 = this; /*0x5118cc*/
  }
  INIClass::GetString((INIClass *)v4, (unsigned __int8 *)(_EBX + 36), aParentcountry, (char *)(_EBX + 36), Source, 25); /*0x5118e2*/
  if ( Source ) /*0x5118ed*/
  {
    strncpy(Destination.__pad_0, Source, 0x18u); /*0x511901*/
    LOBYTE(Destination.UnitTypeVector_field_0x18) = 0; /*0x511909*/
  }
  else
  {
    Destination.__pad_0[0] = (unsigned __int8)Source; /*0x5118ef*/
  }
  if ( &Destination != (UnitTypeVector *)(_EBX + 152) ) /*0x51191a*/
  {
    qmemcpy((void *)(_EBX + 152), &Destination, 0x18u); /*0x511925*/
    *(_BYTE *)(_EBX + 176) = Destination.UnitTypeVector_field_0x18; /*0x511927*/
    v4 = this; /*0x511928*/
  }
  *(_DWORD *)(_EBX + 192) = BuildingTypeClass::FindAnimByName( /*0x511942*/
                              (BuildingTypeClass *)v4,
                              (unsigned __int8 *)(_EBX + 36),
                              (unsigned __int8 *)&stru_81AF8C.?[95],
                              *(_DWORD *)(_EBX + 192));
  Source[0] = *(_BYTE *)(_EBX + 420); /*0x51195a*/
  Source[1] = 0; /*0x511966*/
  INIClass::GetString((INIClass *)v4, (unsigned __int8 *)(_EBX + 36), aPrefix, Source, v81, 2); /*0x51196b*/
  *(_BYTE *)(_EBX + 420) = v81[0]; /*0x511974*/
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aFirepower, *(double *)(_EBX + 200)); /*0x511990*/
  v6 = *(_DWORD *)(_EBX + 212); /*0x511995*/
  v7 = *(_DWORD *)(_EBX + 208); /*0x51199b*/
  __asm { fstp qword ptr [ebx+0C8h] } /*0x5119a1*/
  *(double *)(_EBX + 200) = _RT1; /*0x5119a1*/
  INIClass::ReadDouble_Overwrite( /*0x5119b1*/
    (double *)v4,
    (unsigned __int8 *)(_EBX + 36),
    aGroundspeed,
    COERCE_DOUBLE(__PAIR64__(v6, v7)));
  v9 = *(_DWORD *)(_EBX + 220); /*0x5119b6*/
  v10 = *(_DWORD *)(_EBX + 216); /*0x5119bc*/
  __asm { fstp qword ptr [ebx+0D0h] } /*0x5119c2*/
  *(double *)(_EBX + 208) = _RT1; /*0x5119c2*/
  INIClass::ReadDouble_Overwrite( /*0x5119d2*/
    (double *)v4,
    (unsigned __int8 *)(_EBX + 36),
    aAirspeed,
    COERCE_DOUBLE(__PAIR64__(v9, v10)));
  v12 = *(double *)(_EBX + 224); /*0x5119dd*/
  __asm { fstp qword ptr [ebx+0D8h] } /*0x5119e3*/
  *(double *)(_EBX + 216) = _RT1; /*0x5119e3*/
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), g_INI_Key_Armor, v12); /*0x5119f3*/
  v14 = *(_DWORD *)(_EBX + 236); /*0x5119f8*/
  v15 = *(_DWORD *)(_EBX + 232); /*0x5119fe*/
  __asm { fstp qword ptr [ebx+0E0h] } /*0x511a04*/
  *(double *)(_EBX + 224) = _RT1; /*0x511a04*/
  INIClass::ReadDouble_Overwrite( /*0x511a14*/
    (double *)v4,
    (unsigned __int8 *)(_EBX + 36),
    &off_825478,
    COERCE_DOUBLE(__PAIR64__(v14, v15)));
  v17 = *(_DWORD *)(_EBX + 244); /*0x511a19*/
  v18 = *(_DWORD *)(_EBX + 240); /*0x511a1f*/
  __asm { fstp qword ptr [ebx+0E8h] } /*0x511a25*/
  *(double *)(_EBX + 232) = _RT1; /*0x511a25*/
  INIClass::ReadDouble_Overwrite( /*0x511a35*/
    (double *)v4,
    (unsigned __int8 *)(_EBX + 36),
    g_INI_Key_Cost,
    COERCE_DOUBLE(__PAIR64__(v17, v18)));
  v20 = *(double *)(_EBX + 248); /*0x511a40*/
  __asm { fstp qword ptr [ebx+0F0h] } /*0x511a46*/
  *(double *)(_EBX + 240) = _RT1; /*0x511a46*/
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aBuildtime, v20); /*0x511a56*/
  v22 = *(_BYTE *)(_EBX + 421); /*0x511a5b*/
  __asm { fstp qword ptr [ebx+0F8h] } /*0x511a61*/
  *(double *)(_EBX + 248) = _RT1; /*0x511a61*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)v4, (unsigned __int8 *)(_EBX + 36), aMultiplay, v22); /*0x511a70*/
  v79 = *(_BYTE *)(_EBX + 422); /*0x511a7d*/
  *(_BYTE *)(_EBX + 421) = Bool_Overwrite; /*0x511a84*/
  *(_BYTE *)(_EBX + 422) = INIClass::ReadBool_Overwrite((int *)v4, (unsigned __int8 *)(_EBX + 36), aMultiplaypassi, v79); /*0x511a8f*/
  v25 = INIClass::ReadBool_Overwrite((int *)v4, (unsigned __int8 *)(_EBX + 36), aWallowner, *(_BYTE *)(_EBX + 423)); /*0x511aa4*/
  v26 = *(_BYTE *)(_EBX + 424); /*0x511aa9*/
  *(_BYTE *)(_EBX + 423) = v25; /*0x511aaf*/
  v27 = INIClass::ReadBool_Overwrite((int *)v4, (unsigned __int8 *)(_EBX + 36), aSmartai, v26); /*0x511abe*/
  __asm { fld dword ptr [ebx+100h] } /*0x511ac3*/
  *(_BYTE *)(_EBX + 424) = v27; /*0x511ace*/
  __asm { fstp [esp+0F8h+var_F8]; double } /*0x511ad4*/
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aArmorinfantrym, v60); /*0x511add*/
  __asm { fstp dword ptr [ebx+100h] } /*0x511ae2*/
  *(float *)(_EBX + 256) = *(float *)&_RT1; /*0x511ae2*/
  __asm { fld dword ptr [ebx+104h] } /*0x511ae8*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aArmorunitsmult, v61); /*0x511afc*/
  __asm { fstp dword ptr [ebx+104h] } /*0x511b01*/
  *(float *)(_EBX + 260) = *(float *)&_RT1; /*0x511b01*/
  __asm { fld dword ptr [ebx+108h] } /*0x511b07*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aArmoraircraftm, v62); /*0x511b1b*/
  __asm { fstp dword ptr [ebx+108h] } /*0x511b20*/
  *(float *)(_EBX + 264) = *(float *)&_RT1; /*0x511b20*/
  __asm { fld dword ptr [ebx+10Ch] } /*0x511b26*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aArmorbuildings, v63); /*0x511b3a*/
  __asm { fstp dword ptr [ebx+10Ch] } /*0x511b3f*/
  *(float *)(_EBX + 268) = *(float *)&_RT1; /*0x511b3f*/
  __asm { fld dword ptr [ebx+110h] } /*0x511b45*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aArmordefensesm, v64); /*0x511b59*/
  __asm { fstp dword ptr [ebx+110h] } /*0x511b5e*/
  *(float *)(_EBX + 272) = *(float *)&_RT1; /*0x511b5e*/
  __asm { fld dword ptr [ebx+114h] } /*0x511b64*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aCostinfantrymu, v65); /*0x511b78*/
  __asm { fstp dword ptr [ebx+114h] } /*0x511b7d*/
  *(float *)(_EBX + 276) = *(float *)&_RT1; /*0x511b7d*/
  __asm { fld dword ptr [ebx+118h] } /*0x511b83*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aCostunitsmult, v66); /*0x511b97*/
  __asm { fstp dword ptr [ebx+118h] } /*0x511b9c*/
  *(float *)(_EBX + 280) = *(float *)&_RT1; /*0x511b9c*/
  __asm { fld dword ptr [ebx+11Ch] } /*0x511ba2*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aCostaircraftmu, v67); /*0x511bb6*/
  __asm { fstp dword ptr [ebx+11Ch] } /*0x511bbb*/
  *(float *)(_EBX + 284) = *(float *)&_RT1; /*0x511bbb*/
  __asm { fld dword ptr [ebx+120h] } /*0x511bc1*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aCostbuildingsm, v68); /*0x511bd5*/
  __asm { fstp dword ptr [ebx+120h] } /*0x511bda*/
  *(float *)(_EBX + 288) = *(float *)&_RT1; /*0x511bda*/
  __asm { fld dword ptr [ebx+124h] } /*0x511be0*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aCostdefensesmu, v69); /*0x511bf4*/
  __asm { fstp dword ptr [ebx+124h] } /*0x511bf9*/
  *(float *)(_EBX + 292) = *(float *)&_RT1; /*0x511bf9*/
  __asm { fld dword ptr [ebx+128h] } /*0x511bff*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aSpeedinfantrym, v70); /*0x511c13*/
  __asm { fstp dword ptr [ebx+128h] } /*0x511c18*/
  *(float *)(_EBX + 296) = *(float *)&_RT1; /*0x511c18*/
  __asm { fld dword ptr [ebx+12Ch] } /*0x511c1e*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aSpeedunitsmult, v71); /*0x511c32*/
  __asm { fstp dword ptr [ebx+12Ch] } /*0x511c37*/
  *(float *)(_EBX + 300) = *(float *)&_RT1; /*0x511c37*/
  __asm { fld dword ptr [ebx+130h] } /*0x511c3d*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aSpeedaircraftm, v72); /*0x511c51*/
  __asm { fstp dword ptr [ebx+130h] } /*0x511c56*/
  *(float *)(_EBX + 304) = *(float *)&_RT1; /*0x511c56*/
  __asm { fld dword ptr [ebx+134h] } /*0x511c5c*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aBuildtimeinfan, v73); /*0x511c70*/
  __asm { fstp dword ptr [ebx+134h] } /*0x511c75*/
  *(float *)(_EBX + 308) = *(float *)&_RT1; /*0x511c75*/
  __asm { fld dword ptr [ebx+138h] } /*0x511c7b*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aBuildtimeunits, v74); /*0x511c8f*/
  __asm { fstp dword ptr [ebx+138h] } /*0x511c94*/
  *(float *)(_EBX + 312) = *(float *)&_RT1; /*0x511c94*/
  __asm { fld dword ptr [ebx+13Ch] } /*0x511c9a*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aBuildtimeaircr, v75); /*0x511cae*/
  __asm { fstp dword ptr [ebx+13Ch] } /*0x511cb3*/
  *(float *)(_EBX + 316) = *(float *)&_RT1; /*0x511cb3*/
  __asm { fld dword ptr [ebx+140h] } /*0x511cb9*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aBuildtimebuild, v76); /*0x511ccd*/
  __asm { fstp dword ptr [ebx+140h] } /*0x511cd2*/
  *(float *)(_EBX + 320) = *(float *)&_RT1; /*0x511cd2*/
  __asm { fld dword ptr [ebx+144h] } /*0x511cd8*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aBuildtimedefen, v77); /*0x511cec*/
  __asm { fstp dword ptr [ebx+144h] } /*0x511cf1*/
  *(float *)(_EBX + 324) = *(float *)&_RT1; /*0x511cf1*/
  __asm { fld dword ptr [ebx+148h] } /*0x511cf7*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aIncomemult, v78); /*0x511d0b*/
  __asm { fstp dword ptr [ebx+148h] } /*0x511d10*/
  *(float *)(_EBX + 328) = *(float *)&_RT1; /*0x511d10*/
  if ( INIClass::GetString( /*0x511d2d*/
         (INIClass *)v4,
         (unsigned __int8 *)(_EBX + 36),
         aVeteraninfantr,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    InfantryTypeVector::Construct(&v82, 0, 0); /*0x511d42*/
    *(_DWORD *)v82.__pad_0 = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x511d56*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x511d64*/
    {
      if ( !*i ) /*0x511d66*/
        break; /*0x511d69*/
      v82.InfantryTypeVector_field_0x1C = KeywordType::FindOrCreate2(i); /*0x511d74*/
      if ( v82.InfantryTypeVector_field_0x1C ) /*0x511d78*/
        InfantryTypeVector::Add(&v82, &v82.InfantryTypeVector_field_0x1C); /*0x511d83*/
    }
    HouseTypeClass::readAllowedUnits((HouseTypeClass *)&Destination, &v82); /*0x511da4*/
    *(_DWORD *)Destination.__pad_0 = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x511dad*/
    *(_DWORD *)v82.__pad_0 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x511db1*/
    Vector::Cleanup((_VectorClass_PBVInfantryTypeClass *)&v82); /*0x511db9*/
  }
  else
  {
    HouseTypeClass::readAllowedUnits((HouseTypeClass *)&Destination, (_DWORD *)(_EBX + 332)); /*0x511dcb*/
    *(_DWORD *)Destination.__pad_0 = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x511dd0*/
  }
  HouseTypeClass::readStartInfantry((HouseTypeClass *)(_EBX + 332), &Destination); /*0x511de5*/
  UnitTypeVector_field_0x10 = Destination.UnitTypeVector_field_0x10; /*0x511dee*/
  UnitTypeVector_field_0x18 = Destination.UnitTypeVector_field_0x18; /*0x511df2*/
  *(_DWORD *)(_EBX + 352) = Destination.UnitTypeVector_field_0x14; /*0x511df6*/
  UnitTypeVector_field_0x04 = (void *)Destination.UnitTypeVector_field_0x04; /*0x511df9*/
  *(_DWORD *)(_EBX + 348) = UnitTypeVector_field_0x10; /*0x511dfd*/
  *(_DWORD *)(_EBX + 356) = UnitTypeVector_field_0x18; /*0x511e02*/
  *(_DWORD *)Destination.__pad_0 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x511e05*/
  if ( UnitTypeVector_field_0x04 && BYTE1(Destination.UnitTypeVector_field_0x0C) ) /*0x511e15*/
    __3_YAXPAX_Z(UnitTypeVector_field_0x04); /*0x511e18*/
  if ( INIClass::GetString( /*0x511e3a*/
         (INIClass *)v4,
         (unsigned __int8 *)(_EBX + 36),
         aVeteranunits,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    UnitTypeVector::Construct(&Destination, 0, 0); /*0x511e4f*/
    *(_DWORD *)Destination.__pad_0 = &TypeList<UnitTypeClass const *>::`vftable'; /*0x511e5e*/
    for ( j = strtok(String, Str); j; j = strtok(0, Str) ) /*0x511e70*/
    {
      if ( !*j ) /*0x511e72*/
        break; /*0x511e75*/
      Alt = BuildingTypeClass::FindOrCreateAlt(j); /*0x511e7e*/
      if ( Alt /*0x511eb1*/
        && (Destination.UnitTypeVector_field_0x10 < Destination.UnitTypeVector_field_0x08
         || (BYTE1(Destination.UnitTypeVector_field_0x0C) || !Destination.UnitTypeVector_field_0x08)
         && Destination.UnitTypeVector_field_0x14 > 0
         && (*(unsigned __int8 (__thiscall **)(UnitTypeVector *, int, _DWORD))(*(_DWORD *)Destination.__pad_0 + 8))(
              &Destination,
              Destination.UnitTypeVector_field_0x08 + Destination.UnitTypeVector_field_0x14,
              0)) )
      {
        v34 = Destination.UnitTypeVector_field_0x10++; /*0x511ebc*/
        *(_DWORD *)(Destination.UnitTypeVector_field_0x04 + 4 * v34) = Alt; /*0x511ec7*/
      }
    }
    TypeList::CopyConstructor((TypeList *)&v82, &Destination); /*0x511ee6*/
    *(_DWORD *)Destination.__pad_0 = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x511eef*/
    Vector::Destructor((_VectorClass_PBVUnitTypeClass *)&Destination); /*0x511ef7*/
  }
  else
  {
    TypeList::CopyConstructor((TypeList *)&v82, (_DWORD *)(_EBX + 360)); /*0x511f09*/
  }
  VectorClass::CopyConstructor((VectorClass *)(_EBX + 360), &v82); /*0x511f1b*/
  InfantryTypeVector_field_0x10 = v82.InfantryTypeVector_field_0x10; /*0x511f24*/
  InfantryTypeVector_field_0x18 = v82.InfantryTypeVector_field_0x18; /*0x511f28*/
  *(_DWORD *)(_EBX + 380) = v82.InfantryTypeVector_field_0x14; /*0x511f2c*/
  InfantryTypeVector_field_0x04 = (void *)v82.InfantryTypeVector_field_0x04; /*0x511f2f*/
  *(_DWORD *)(_EBX + 376) = InfantryTypeVector_field_0x10; /*0x511f33*/
  *(_DWORD *)(_EBX + 384) = InfantryTypeVector_field_0x18; /*0x511f38*/
  *(_DWORD *)v82.__pad_0 = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x511f3b*/
  if ( InfantryTypeVector_field_0x04 && BYTE1(v82.InfantryTypeVector_field_0x0C) ) /*0x511f4b*/
    __3_YAXPAX_Z(InfantryTypeVector_field_0x04); /*0x511f4e*/
  if ( INIClass::GetString( /*0x511f70*/
         (INIClass *)v4,
         (unsigned __int8 *)(_EBX + 36),
         aVeteranaircraf,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    HouseTypeClass::readDefaultAlly((HouseTypeClass *)&Destination, 0, 0); /*0x511f85*/
    *(_DWORD *)Destination.__pad_0 = &TypeList<AircraftTypeClass const *>::`vftable'; /*0x511f94*/
    for ( k = strtok(String, Str); k; k = strtok(0, Str) ) /*0x511fa6*/
    {
      if ( !*k ) /*0x511fa8*/
        break; /*0x511fab*/
      v39 = KeywordClass::FindOrCreate(k); /*0x511fb4*/
      if ( v39 /*0x511fe7*/
        && (Destination.UnitTypeVector_field_0x10 < Destination.UnitTypeVector_field_0x08
         || (BYTE1(Destination.UnitTypeVector_field_0x0C) || !Destination.UnitTypeVector_field_0x08)
         && Destination.UnitTypeVector_field_0x14 > 0
         && (*(unsigned __int8 (__thiscall **)(UnitTypeVector *, int, _DWORD))(*(_DWORD *)Destination.__pad_0 + 8))(
              &Destination,
              Destination.UnitTypeVector_field_0x08 + Destination.UnitTypeVector_field_0x14,
              0)) )
      {
        v40 = Destination.UnitTypeVector_field_0x10++; /*0x511ff2*/
        *(_DWORD *)(Destination.UnitTypeVector_field_0x04 + 4 * v40) = v39; /*0x511ffd*/
      }
    }
    HouseTypeClass::readParaDropTypes((HouseTypeClass *)&v82, &Destination); /*0x51201c*/
    *(_DWORD *)Destination.__pad_0 = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x512025*/
    VectorClass::ClearAndFree4((int)&Destination); /*0x51202d*/
  }
  else
  {
    HouseTypeClass::readParaDropTypes((HouseTypeClass *)&v82, (_DWORD *)(_EBX + 388)); /*0x51203f*/
  }
  HouseTypeClass::readBaseDefense((HouseTypeClass *)(_EBX + 388), &v82); /*0x512051*/
  v41 = v82.InfantryTypeVector_field_0x10; /*0x51205a*/
  v42 = v82.InfantryTypeVector_field_0x18; /*0x51205e*/
  *(_DWORD *)(_EBX + 408) = v82.InfantryTypeVector_field_0x14; /*0x512062*/
  v43 = (void *)v82.InfantryTypeVector_field_0x04; /*0x512065*/
  *(_DWORD *)(_EBX + 404) = v41; /*0x512069*/
  *(_DWORD *)(_EBX + 412) = v42; /*0x51206e*/
  *(_DWORD *)v82.__pad_0 = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x512071*/
  if ( v43 && BYTE1(v82.InfantryTypeVector_field_0x0C) ) /*0x512081*/
    __3_YAXPAX_Z(v43); /*0x512084*/
  v44 = *(_DWORD *)(_EBX + 188); /*0x51208c*/
  CountryData = HouseTypeClass::loadCountryData( /*0x51209e*/
                  v4,
                  (unsigned __int8 *)(_EBX + 36),
                  (unsigned __int8 *)&g_INI_Key_Special.?,
                  v44);
  *(_DWORD *)(_EBX + 188) = CountryData; /*0x5120a5*/
  if ( CountryData != v44 ) /*0x5120ab*/
  {
    if ( v44 != -1 ) /*0x5120b4*/
    {
      v46 = *(_DWORD *)(_EBX + 184); /*0x5120bc*/
      v47 = *(_DWORD *)(FootClass_Array.?[0] + 4 * v44); /*0x5120c2*/
      v48 = *(_DWORD *)(v47 + 168); /*0x5120c5*/
      v49 = v47 + 152; /*0x5120cb*/
      if ( v46 < v48 ) /*0x5120d2*/
      {
        v50 = v48 - 1; /*0x5120d4*/
        for ( *(_DWORD *)(v49 + 16) = v50; /*0x5120da*/
              v46 < *(_DWORD *)(v49 + 16);
              *(_DWORD *)(*(_DWORD *)(v49 + 4) + 4 * v46 - 4) = *(_DWORD *)(*(_DWORD *)(v49 + 4) + 4 * v46) )
        {
          ++v46; /*0x5120df*/
        }
      }
    }
    v51 = *(_DWORD *)(_EBX + 188); /*0x5120ee*/
    if ( v51 != -1 ) /*0x5120f7*/
    {
      v52 = *(_DWORD *)(FootClass_Array.?[0] + 4 * v51); /*0x5120ff*/
      v53 = *(_DWORD *)(v52 + 160); /*0x512102*/
      v54 = *(_DWORD *)(v52 + 168); /*0x512108*/
      v55 = v52 + 152; /*0x51210e*/
      if ( v54 < v53 /*0x512133*/
        || (*(_BYTE *)(v55 + 13) || !v53)
        && (v56 = *(_DWORD *)(v55 + 20), v56 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v55 + 8))(v55, v56 + v53, 0) )
      {
        v57 = *(_DWORD *)(v55 + 16); /*0x51213a*/
        v58 = *(_DWORD *)(v55 + 4); /*0x51213d*/
        *(_DWORD *)(v55 + 16) = v57 + 1; /*0x512143*/
        *(_DWORD *)(v58 + 4 * v57) = *(_DWORD *)(_EBX + 184); /*0x51214c*/
      }
    }
  }
  return 1; /*0x512151*/
}



// ==== 0x00512170  HouseTypeClass::ProcessPower  this=HouseTypeClass  sig=csp ====
int __thiscall HouseTypeClass::ProcessPower(HouseTypeClass *this, int *a2)
{
  int v3; // edx
  int v4; // eax

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x51217a*/
  Power::TimerProcess(this->arrayIndex2); /*0x512188*/
  Power::TimerProcess(this->sideIndex); /*0x512196*/
  Power::TimerProcess(this->colorSchemeIndex); /*0x5121a4*/
  Checksummer::Add_double((Checksummer *)a2, this->firepowerMult[0], this->firepowerMult[1]); /*0x5121b9*/
  Checksummer::Add_double((Checksummer *)a2, this->groundspeedMult[0], this->groundspeedMult[1]); /*0x5121ce*/
  Checksummer::Add_double((Checksummer *)a2, this->airspeedMult[0], this->airspeedMult[1]); /*0x5121e3*/
  Checksummer::Add_double((Checksummer *)a2, this->armorMult[0], this->armorMult[1]); /*0x5121f8*/
  Checksummer::Add_double((Checksummer *)a2, this->rofMult[0], this->rofMult[1]); /*0x51220d*/
  Checksummer::Add_double((Checksummer *)a2, this->costMult[0], this->costMult[1]); /*0x512222*/
  Checksummer::Add_double((Checksummer *)a2, this->buildtimeMult[0], this->buildtimeMult[1]); /*0x512237*/
  Checksummer::Add_Buffer((Checksummer *)a2, (unsigned __int8 *)&this->__pad_16D[51], strlen(&this->__pad_16D[51])); /*0x512252*/
  LOBYTE(v3) = this->__pad_16D[55]; /*0x512257*/
  v4 = Power::FinalizeDrain((Power *)a2, v3); /*0x512260*/
  LOBYTE(v4) = this->__pad_16D[56]; /*0x512265*/
  return Power::FlagProcess((Power *)a2, v4); /*0x512273*/
}



// ==== 0x00512280  HouseTypeClass::StubReturnFalse  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::StubReturnFalse(HouseTypeClass *this)
{
  return 0; /*0x512282*/
}



// ==== 0x00512290  HouseTypeClass::SaveLoad_Prefix  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::SaveLoad_Prefix(HouseTypeClass *this, int a2)
{
  HouseTypeClass *v2; // edi
  int *veteranInfantry; // ebx
  int v4; // esi
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // esi
  int m; // esi
  int n; // esi
  int v11; // [esp+58h] [ebp-4h] BYREF

  v2 = this; /*0x512295*/
  veteranInfantry = this->veteranInfantry; /*0x51229f*/
  (*(void (__thiscall **)(int *))(this->veteranInfantry[0] + 12))(this->veteranInfantry); /*0x5122a7*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&v2->prefix + 12))(&v2->prefix); /*0x5122b8*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&v2->__pad_16D[23] + 12))(&v2->__pad_16D[23]); /*0x5122c7*/
  v4 = a2; /*0x5122ca*/
  result = AbstractClass::SaveLoad_Prefix_0(v2, a2); /*0x5122d0*/
  if ( result >= 0 ) /*0x5122d7*/
  {
    if ( v2 ) /*0x5122df*/
      HouseTypeClass::loadVeteranWeapons(v2, (int)&this); /*0x5122e8*/
    if ( veteranInfantry ) /*0x5122ef*/
    {
      InfantryTypeVector::Construct((InfantryTypeVector *)veteranInfantry, 0, 0); /*0x5122f7*/
      *veteranInfantry = (int)&TypeList<InfantryTypeClass const *>::`vftable'; /*0x5122fc*/
    }
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x51230e*/
    for ( this = 0; (int)this < a2; this = (HouseTypeClass *)((char *)this + 1) ) /*0x51231f*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v11, 4, 0); /*0x51232d*/
      InfantryTypeVector::Add((InfantryTypeVector *)veteranInfantry, &v11); /*0x512337*/
    }
    if ( v2 != (HouseTypeClass *)-360 ) /*0x51234f*/
    {
      UnitTypeVector::Construct((UnitTypeVector *)&v2->prefix, 0, 0); /*0x512357*/
      *(_DWORD *)&v2->prefix = &TypeList<UnitTypeClass const *>::`vftable'; /*0x51235c*/
    }
    (*(void (__stdcall **)(int, HouseTypeClass **, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &this, 4, 0); /*0x51236f*/
    for ( i = 0; i < (int)this; ++i ) /*0x51237a*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x512388*/
      VectorClass::PushBack((VectorClass *)&v2->prefix, &a2); /*0x512392*/
    }
    if ( v2 != (HouseTypeClass *)-388 ) /*0x5123a6*/
      HouseTypeClass::readStartUnit((HouseTypeClass *)&v2->__pad_16D[23]); /*0x5123aa*/
    (*(void (__stdcall **)(int, HouseTypeClass **, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &this, 4, 0); /*0x5123bb*/
    for ( j = 0; j < (int)this; ++j ) /*0x5123c6*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x5123d4*/
      HouseTypeClass::readPowerPlants((HouseTypeClass *)&v2->__pad_16D[23], &a2); /*0x5123de*/
    }
    for ( k = 0; k < v2->veteranAircraft[0]; ++k ) /*0x5123f4*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2->veteranInfantryCount + 4 * k)); /*0x512405*/
    for ( m = 0; m < *(_DWORD *)&v2->__pad_16D[11]; ++m ) /*0x51241f*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)&v2->smartAi + 4 * m)); /*0x512430*/
    for ( n = 0; n < *(_DWORD *)&v2->__pad_16D[39]; ++n ) /*0x51244a*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)&v2->__pad_16D[27] + 4 * n)); /*0x51245b*/
    return 0; /*0x51246b*/
  }
  return result; /*0x51246d*/
}



// ==== 0x00512480  HouseTypeClass::SaveLoad_Prefix_0  this=HouseTypeClass  sig=csp ====
int __userpurge HouseTypeClass::SaveLoad_Prefix_0@<eax>(HouseTypeClass *this, int *a2, int *a3, int a4, int a5)
{
  int v5; // ebx
  int result; // eax
  int v7; // edx
  int i; // ebx
  int v9; // edx
  int j; // ebx
  int v11; // edx
  int k; // ebx

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, (int)a3); /*0x512491*/
  if ( result >= 0 ) /*0x512498*/
  {
    v7 = *a2; /*0x5124a4*/
    a3 = (int *)this->veteranAircraft[0]; /*0x5124b1*/
    (*(void (__stdcall **)(int *, int **, int, _DWORD, int))(v7 + 16))(a2, &a3, 4, 0, v5); /*0x5124b5*/
    for ( i = 0; i < a4; ++i ) /*0x5124c0*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->veteranInfantryCount + 4 * i, 4, 0); /*0x5124d3*/
    v9 = *a2; /*0x5124e3*/
    a4 = *(_DWORD *)&this->__pad_16D[11]; /*0x5124ef*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v9 + 16))(a2, &a4, 4, 0); /*0x5124f3*/
    for ( j = 0; j < a4; ++j ) /*0x5124fe*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->smartAi + 4 * j, 4, 0); /*0x512511*/
    v11 = *a2; /*0x512521*/
    a4 = *(_DWORD *)&this->__pad_16D[39]; /*0x51252d*/
    (*(void (__stdcall **)(int *, int *, int))(v11 + 16))(a2, &a4, 4); /*0x512531*/
    for ( k = 0; k < (int)a3; ++k ) /*0x51253c*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->__pad_16D[27] + 4 * k, 4, 0); /*0x51254f*/
    return 0; /*0x512559*/
  }
  return result; /*0x51255c*/
}



// ==== 0x00512570  HouseTypeClass::LoadHouse  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::LoadHouse(HouseTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x512576*/
    return -2147467261; /*0x512578*/
  a2[1] = 0; /*0x512580*/
  *a2 = 436; /*0x512587*/
  return 0; /*0x51257d*/
}



// ==== 0x005125A0  HouseTypeClass::QueryInterface  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::QueryInterface(HouseTypeClass *this, const void *a2, _DWORD *a3)
{
  void **p_vtable1; // ecx

  if ( !a3 ) /*0x5125a7*/
    return -2147467261; /*0x5125a9*/
  *a3 = 0; /*0x5125c6*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x5125d0*/
    *a3 = this; /*0x5125d4*/
  if ( !memcmp(a2, &IID_IPersist, 0x10u) ) /*0x5125e5*/
    *a3 = this; /*0x5125e9*/
  if ( !memcmp(a2, &IID_IPersistStream, 0x10u) ) /*0x5125f9*/
    *a3 = this; /*0x5125fe*/
  if ( !memcmp(a2, &IID_IRTTITypeInfo, 0x10u) ) /*0x51260e*/
  {
    if ( this ) /*0x512616*/
      p_vtable1 = &this->?; /*0x512618*/
    else
      p_vtable1 = 0; /*0x51261d*/
    *a3 = p_vtable1; /*0x51261f*/
  }
  if ( !*a3 ) /*0x512621*/
    return -2147467262; /*0x512626*/
  (*((void (__stdcall **)(HouseTypeClass *))this->AbstractClass + 1))(this); /*0x512632*/
  return 0; /*0x5125ae*/
}



// ==== 0x00512640  HouseTypeClass::GetClassIdentifier  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::GetClassIdentifier(HouseTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x512646*/
    return -2147467261; /*0x512648*/
  *a2 = 500447528; /*0x512656*/
  a2[1] = 298976363; /*0x51265e*/
  a2[2] = 1610654892; /*0x512667*/
  a2[3] = unk_7E963C; /*0x512670*/
  return 0; /*0x51264d*/
}



// ==== 0x00512680  WeaponTypeClass::Create  this=AbstractTypeClass  sig=csp ====
_BYTE *__thiscall WeaponTypeClass::Create(char *Source)
{
  int v2; // esi
  SuperWeaponTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x51269c*/
    return 0; /*0x5126ff*/
  v2 = 0; /*0x5126ad*/
  if ( dword_A83CA8 <= 0 ) /*0x5126b1*/
  {
LABEL_6:
    v3 = (SuperWeaponTypeClass *)__2_YAPAXI_Z(0x1B0u); /*0x5126d6*/
    if ( v3 ) /*0x5126e5*/
      return SuperWeaponTypeClass::Construct(v3, Source); /*0x5126f1*/
    return 0; /*0x5126e5*/
  }
  while ( _strcmpi((char *)(*((_DWORD *)dword_A83C9C + v2) + 36), Source) ) /*0x5126ca*/
  {
    if ( ++v2 >= dword_A83CA8 ) /*0x5126d4*/
      goto LABEL_6; /*0x5126d4*/
  }
  return (_BYTE *)*((_DWORD *)dword_A83C9C + v2); /*0x5126ef*/
}



// ==== 0x00512710  HouseTypeClass::GetTypeIdentifier  this=HouseTypeClass  sig=csp ====
int HouseTypeClass::GetTypeIdentifier(HouseTypeClass *this)
{
  return 14; /*0x512715*/
}



// ==== 0x00512720  HouseTypeClass::GetObjectSize  this=HouseTypeClass  sig=csp ====
int HouseTypeClass::GetObjectSize(HouseTypeClass *this)
{
  return 432; /*0x512725*/
}



// ==== 0x00512730  HouseTypeClass::loadBuildLimits  this=HouseTypeClass  sig=csp ====
unsigned int __thiscall HouseTypeClass::loadBuildLimits(HouseTypeClass *this)
{
  return this->arrayIndex; /*0x512736*/
}



// ==== 0x00512740  HouseTypeClass::AddRef  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::AddRef(HouseTypeClass *this)
{
  return 1; /*0x512745*/
}



// ==== 0x00512750  HouseTypeClass::Release  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::Release(HouseTypeClass *this)
{
  return 1; /*0x512755*/
}



// ==== 0x00512760  HouseTypeClass::Destructor  this=HouseTypeClass  sig=csp ====
void **__thiscall HouseTypeClass::Destructor(HouseTypeClass *this, char a2)
{
  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *veteranInfantryCount; // eax
  HouseTypeClass *v8; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &HouseTypeClass::`vftable'; /*0x512766*/
  this->? = &HouseTypeClass::`vftable'; /*0x51276c*/
  this->? = &HouseTypeClass::`vftable'; /*0x512773*/
  this->? = &HouseTypeClass::`vftable'; /*0x51277a*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x512781*/
  v8 = this; /*0x512796*/
  v3 = (*(int (__thiscall **)(_DWORD *, HouseTypeClass **))(dword_A83C98 + 16))(&dword_A83C98, &v8); /*0x51279a*/
  if ( v3 != -1 && v3 < dword_A83CA8 && v3 < --dword_A83CA8 ) /*0x5127b5*/
  {
    do /*0x5127cd*/
    {
      ++v3; /*0x5127bd*/
      *((_DWORD *)dword_A83C9C + v3 - 1) = *((_DWORD *)dword_A83C9C + v3); /*0x5127c1*/
    }
    while ( v3 < dword_A83CA8 ); /*0x5127cd*/
  }
  v4 = *(void **)&this->__pad_16D[27]; /*0x5127cf*/
  *(_DWORD *)&this->__pad_16D[23] = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x5127d8*/
  if ( v4 && this->__pad_16D[36] ) /*0x5127e6*/
  {
    __3_YAXPAX_Z(v4); /*0x5127ef*/
    *(_DWORD *)&this->__pad_16D[27] = 0; /*0x5127f7*/
  }
  this->__pad_16D[36] = 0; /*0x5127fd*/
  *(_DWORD *)&this->__pad_16D[31] = 0; /*0x512803*/
  v5 = *(void **)&this->smartAi; /*0x512809*/
  *(_DWORD *)&this->prefix = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x51280f*/
  if ( v5 && this->__pad_16D[8] ) /*0x51281d*/
  {
    __3_YAXPAX_Z(v5); /*0x512826*/
    *(_DWORD *)&this->smartAi = 0; /*0x51282e*/
  }
  this->__pad_16D[8] = 0; /*0x512834*/
  *(_DWORD *)&this->__pad_16D[3] = 0; /*0x51283a*/
  veteranInfantryCount = (void *)this->veteranInfantryCount; /*0x512840*/
  this->veteranInfantry[0] = (int)&VectorClass<InfantryTypeClass const *>::`vftable'; /*0x512846*/
  if ( veteranInfantryCount && BYTE1(this->veteranUnitsCount) ) /*0x512854*/
  {
    __3_YAXPAX_Z(veteranInfantryCount); /*0x51285d*/
    this->veteranInfantryCount = 0; /*0x512865*/
  }
  BYTE1(this->veteranUnitsCount) = 0; /*0x51286d*/
  this->veteranUnits[0] = 0; /*0x512873*/
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x512879*/
  if ( (a2 & 1) != 0 ) /*0x512885*/
    __3_YAXPAX_Z(this); /*0x512888*/
  return &this->AbstractClass; /*0x512892*/
}



// ==== 0x005128A0  _DynamicVectorClass_PBVInfantryTypeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall TypeList_Infantry::ddtor(_DynamicVectorClass_PBVInfantryTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5128a6*/
  this->m_10 = 0; /*0x5128a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5128b0*/
  {
    __3_YAXPAX_Z(v2); /*0x5128b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5128be*/
  }
  BYTE1(this->m_C) = 0; /*0x5128c1*/
  this->m_8 = 0; /*0x5128c4*/
}



// ==== 0x005128D0  _DynamicVectorClass_PBVInfantryTypeClass::GetIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall TypeList_Infantry::GetIndex(_DynamicVectorClass_PBVInfantryTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5128d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5128e5*/
  else
    return 0; /*0x5128d7*/
}



// ==== 0x005128F0  _VectorClass_PBVInfantryTypeClass::Clear  this=VectorClass  sig=csp ====
int __thiscall TypeList_Infantry::Clear(_VectorClass_PBVInfantryTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5128fa*/
}



// ==== 0x00512900  _DynamicVectorClass_PBVUnitTypeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall HouseTypeClass_36::ddtor(_DynamicVectorClass_PBVUnitTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x512906*/
  this->m_10 = 0; /*0x512909*/
  if ( v2 && BYTE1(this->m_C) ) /*0x512910*/
  {
    __3_YAXPAX_Z(v2); /*0x512916*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x51291e*/
  }
  BYTE1(this->m_C) = 0; /*0x512921*/
  this->m_8 = 0; /*0x512924*/
}



// ==== 0x00512930  _DynamicVectorClass_PBVUnitTypeClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall HouseTypeClass_36::Write(_DynamicVectorClass_PBVUnitTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x512930*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x512945*/
  else
    return 0; /*0x512937*/
}



// ==== 0x00512950  _VectorClass_PBVUnitTypeClass::Seek  this=VectorClass  sig=csp ====
int __thiscall HouseTypeClass_36::Seek(_VectorClass_PBVUnitTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x51295a*/
}



// ==== 0x00512960  HouseTypeClass::readStartUnit  this=TypeList  sig=csp ====
_DWORD *__thiscall HouseTypeClass::readStartUnit(HouseTypeClass *this)
{
  this->? = 0; /*0x512964*/
  this->? = 0; /*0x512967*/
  LOBYTE(this->?) = 1; /*0x51296a*/
  BYTE1(this->?) = 0; /*0x51296e*/
  this->? = 10; /*0x512971*/
  this->? = 0; /*0x512978*/
  this->AbstractClass = &TypeList<AircraftTypeClass const *>::`vftable'; /*0x51297b*/
  return &this->AbstractClass; /*0x512981*/
}



// ==== 0x00512990  _DynamicVectorClass_PBVAircraftTypeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall HouseTypeClass_28::ddtor(_DynamicVectorClass_PBVAircraftTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x512996*/
  this->m_10 = 0; /*0x512999*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5129a0*/
  {
    __3_YAXPAX_Z(v2); /*0x5129a6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5129ae*/
  }
  BYTE1(this->m_C) = 0; /*0x5129b1*/
  this->m_8 = 0; /*0x5129b4*/
}



// ==== 0x005129C0  _DynamicVectorClass_PBVAircraftTypeClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall HouseTypeClass_28::Write(_DynamicVectorClass_PBVAircraftTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5129c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5129d5*/
  else
    return 0; /*0x5129c7*/
}



// ==== 0x005129E0  _VectorClass_PBVAircraftTypeClass::Seek  this=VectorClass  sig=csp ====
int __thiscall HouseTypeClass_28::Seek(_VectorClass_PBVAircraftTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5129ea*/
}



// ==== 0x005129F0  _TypeList_PBVInfantryTypeClass::Add  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList_Infantry::Add(_TypeList_PBVInfantryTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x5129f3*/
  *(_DWORD *)this = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x5129f6*/
  if ( v3 && this->IsAllocated ) /*0x512a00*/
  {
    __3_YAXPAX_Z(v3); /*0x512a08*/
    this->Items = 0; /*0x512a10*/
  }
  this->IsAllocated = 0; /*0x512a1b*/
  this->Capacity = 0; /*0x512a21*/
  if ( (a2 & 1) != 0 ) /*0x512a28*/
    __3_YAXPAX_Z(this); /*0x512a2b*/
  return this; /*0x512a35*/
}



// ==== 0x00512A40  _TypeList_PBVUnitTypeClass::QueryInterface  this=TypeList  sig=csp ====
_DWORD *__thiscall HouseTypeClass_36::QueryInterface(_TypeList_PBVUnitTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x512a43*/
  this->vfptr = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x512a46*/
  if ( v3 && this->IsAllocated ) /*0x512a50*/
  {
    __3_YAXPAX_Z(v3); /*0x512a58*/
    this->Items = 0; /*0x512a60*/
  }
  this->IsAllocated = 0; /*0x512a6b*/
  this->Capacity = 0; /*0x512a71*/
  if ( (a2 & 1) != 0 ) /*0x512a78*/
    __3_YAXPAX_Z(this); /*0x512a7b*/
  return &this->vfptr; /*0x512a85*/
}



// ==== 0x00512A90  _TypeList_PBVAircraftTypeClass::QueryInterface  this=TypeList  sig=csp ====
_DWORD *__thiscall HouseTypeClass_28::QueryInterface(_TypeList_PBVAircraftTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x512a93*/
  this->vfptr = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x512a96*/
  if ( v3 && this->IsAllocated ) /*0x512aa0*/
  {
    __3_YAXPAX_Z(v3); /*0x512aa8*/
    this->Items = 0; /*0x512ab0*/
  }
  this->IsAllocated = 0; /*0x512abb*/
  this->Capacity = 0; /*0x512ac1*/
  if ( (a2 & 1) != 0 ) /*0x512ac8*/
    __3_YAXPAX_Z(this); /*0x512acb*/
  return &this->vfptr; /*0x512ad5*/
}



// ==== 0x00512AE0  _VectorClass_PBVInfantryTypeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall InfantryTypeVector::QueryInterface(_VectorClass_PBVInfantryTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x512ae3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x512ae6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x512af0*/
  {
    __3_YAXPAX_Z(v3); /*0x512af8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x512b00*/
  }
  BYTE1(this->m_C) = 0; /*0x512b0b*/
  this->m_8 = 0; /*0x512b11*/
  if ( (a2 & 1) != 0 ) /*0x512b18*/
    __3_YAXPAX_Z(this); /*0x512b1b*/
  return this->__pad_0; /*0x512b25*/
}



// ==== 0x00512B30  _VectorClass_PBVUnitTypeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall UnitTypeVector::QueryInterface(_VectorClass_PBVUnitTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x512b33*/
  *(_DWORD *)this->__pad_0 = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x512b36*/
  if ( v3 && BYTE1(this->m_C) ) /*0x512b40*/
  {
    __3_YAXPAX_Z(v3); /*0x512b48*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x512b50*/
  }
  BYTE1(this->m_C) = 0; /*0x512b5b*/
  this->m_8 = 0; /*0x512b61*/
  if ( (a2 & 1) != 0 ) /*0x512b68*/
    __3_YAXPAX_Z(this); /*0x512b6b*/
  return this->__pad_0; /*0x512b75*/
}



// ==== 0x00512B80  _VectorClass_PBVAircraftTypeClass::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall HouseTypeClass_36::Constructor(_VectorClass_PBVAircraftTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x512b83*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x512b86*/
  if ( v3 && BYTE1(this->m_C) ) /*0x512b90*/
  {
    __3_YAXPAX_Z(v3); /*0x512b98*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x512ba0*/
  }
  BYTE1(this->m_C) = 0; /*0x512bab*/
  this->m_8 = 0; /*0x512bb1*/
  if ( (a2 & 1) != 0 ) /*0x512bb8*/
    __3_YAXPAX_Z(this); /*0x512bbb*/
  return this->__pad_0; /*0x512bc5*/
}



// ==== 0x00512BD0  HouseTypeClass::readStartInfantry  this=HouseTypeClass  sig=csp ====
_DWORD *__thiscall HouseTypeClass::readStartInfantry(HouseTypeClass *this, _DWORD *a2)
{
  void *v3; // eax
  void *v4; // eax
  void *ptr_8; // ecx
  int v6; // eax

  if ( this == (HouseTypeClass *)a2 ) /*0x512bda*/
    return &this->AbstractClass; /*0x512bda*/
  (*((void (__thiscall **)(HouseTypeClass *))this->AbstractClass + 3))(this); /*0x512bde*/
  v3 = (void *)a2[2]; /*0x512be1*/
  this->? = v3; /*0x512be6*/
  if ( !v3 ) /*0x512be9*/
  {
    this->? = 0; /*0x512c2a*/
    BYTE1(this->?) = 0; /*0x512c31*/
    return &this->AbstractClass; /*0x512c35*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (_DWORD)v3); /*0x512bf3*/
  this->? = v4; /*0x512bfb*/
  if ( !v4 ) /*0x512c00*/
    return &this->AbstractClass; /*0x512c00*/
  ptr_8 = this->?; /*0x512c02*/
  v6 = 0; /*0x512c05*/
  BYTE1(this->?) = 1; /*0x512c09*/
  if ( (int)ptr_8 <= 0 ) /*0x512c0d*/
    return &this->AbstractClass; /*0x512c0d*/
  do /*0x512c21*/
  {
    *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x512c18*/
    ++v6; /*0x512c1e*/
  }
  while ( v6 < (int)this->? ); /*0x512c21*/
  return &this->AbstractClass; /*0x512c25*/
}



// ==== 0x00512C40  _VectorClass_PBVInfantryTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TypeList_Infantry::AddRef(_VectorClass_PBVInfantryTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x512c42*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x512c4d*/
  {
    v3 = 0; /*0x512c4f*/
    if ( m_8 <= 0 ) /*0x512c53*/
      return 1; /*0x512c73*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x512c55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x512c5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x512c64*/
    {
      ++v3; /*0x512c66*/
      ++v4; /*0x512c67*/
      if ( v3 >= m_8 ) /*0x512c6c*/
        return 1; /*0x512c6c*/
    }
  }
  return 0; /*0x512c6e*/
}



// ==== 0x00512C80  _VectorClass_PBVInfantryTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall InfantryTypeVector::Release(_VectorClass_PBVInfantryTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x512c8c*/
  {
    LOBYTE(this->m_C) = 0; /*0x512c96*/
    if ( a3 ) /*0x512c9c*/
      v4 = a3; /*0x512cb2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x512cae*/
    LOBYTE(this->m_C) = 1; /*0x512cb6*/
    if ( v4 ) /*0x512cba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x512cc5*/
      {
        m_8 = this->m_8; /*0x512ccc*/
        if ( a2 < m_8 ) /*0x512cd1*/
          m_8 = a2; /*0x512cd3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x512cd9*/
          ++i; /*0x512cde*/
        if ( BYTE1(this->m_C) ) /*0x512ceb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x512cf6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x512cfe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x512d07*/
      this->m_8 = a2; /*0x512d0f*/
      BYTE1(this->m_C) = a3 == 0; /*0x512d12*/
      return 1; /*0x512d18*/
    }
    else
    {
      return 0; /*0x512cbf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVInfantryTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x512d22*/
    return 1; /*0x512d28*/
  }
}



// ==== 0x00512D30  _VectorClass_PBVInfantryTypeClass::Cleanup  this=VectorClass  sig=csp ====
int __thiscall Vector::Cleanup(_VectorClass_PBVInfantryTypeClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->m_1[3]; /*0x512d36*/
  if ( result && BYTE1(this->m_C) ) /*0x512d3d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x512d43*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x512d4b*/
  }
  BYTE1(this->m_C) = 0; /*0x512d4e*/
  this->m_8 = 0; /*0x512d51*/
  return result; /*0x512d54*/
}



// ==== 0x00512D60  _VectorClass_PBVInfantryTypeClass::AddType  this=VectorClass  sig=csp ====
int __thiscall InfantryTypeVector::AddType(_VectorClass_PBVInfantryTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x512d60*/
    return 0; /*0x512d68*/
  m_8 = this->m_8; /*0x512d6e*/
  result = 0; /*0x512d71*/
  if ( m_8 <= 0 ) /*0x512d75*/
    return -1; /*0x512d8c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x512d7b*/
  {
    if ( ++result >= m_8 ) /*0x512d8a*/
      return -1; /*0x512d8a*/
  }
  return result; /*0x512d6a*/
}



// ==== 0x00512DA0  _VectorClass_PBVInfantryTypeClass::Remove  this=VectorClass  sig=csp ====
unsigned int __thiscall InfantryTypeVector::Remove(_VectorClass_PBVInfantryTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x512da0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x512db5*/
  else
    return 0; /*0x512da7*/
}



// ==== 0x00512DC0  InfantryTypeVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall InfantryTypeVector::Construct(InfantryTypeVector *this, int a2, int a3)
{
  this->InfantryTypeVector_field_0x04 = 0; /*0x512dc9*/
  this->InfantryTypeVector_field_0x08 = a2; /*0x512dd0*/
  LOBYTE(this->InfantryTypeVector_field_0x0C) = 1; /*0x512dd3*/
  BYTE1(this->InfantryTypeVector_field_0x0C) = 0; /*0x512dd7*/
  *(_DWORD *)this->__pad_0 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x512ddb*/
  if ( a2 ) /*0x512de1*/
  {
    if ( a3 ) /*0x512de9*/
    {
      this->InfantryTypeVector_field_0x04 = a3; /*0x512deb*/
    }
    else
    {
      this->InfantryTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x512dfc*/
      BYTE1(this->InfantryTypeVector_field_0x0C) = 1; /*0x512dff*/
    }
  }
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<InfantryTypeClass const *>::`vftable'; /*0x512e03*/
  this->InfantryTypeVector_field_0x14 = 10; /*0x512e09*/
  this->InfantryTypeVector_field_0x10 = 0; /*0x512e10*/
  return this->__pad_0; /*0x512e19*/
}



// ==== 0x00512E20  _DynamicVectorClass_PBVInfantryTypeClass::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall TypeList_Infantry::Constructor(_DynamicVectorClass_PBVInfantryTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x512e23*/
  *(_DWORD *)this->__pad_0 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x512e26*/
  if ( v3 && BYTE1(this->m_C) ) /*0x512e30*/
  {
    __3_YAXPAX_Z(v3); /*0x512e38*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x512e40*/
  }
  BYTE1(this->m_C) = 0; /*0x512e4b*/
  this->m_8 = 0; /*0x512e51*/
  if ( (a2 & 1) != 0 ) /*0x512e58*/
    __3_YAXPAX_Z(this); /*0x512e5b*/
  return this->__pad_0; /*0x512e65*/
}



// ==== 0x00512E70  _DynamicVectorClass_PBVInfantryTypeClass::Remove  this=DynamicVector  sig=csp ====
char __thiscall TypeList_Infantry::Remove(_DynamicVectorClass_PBVInfantryTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x512e7c*/
  {
    LOBYTE(this->m_C) = 0; /*0x512e82*/
    if ( a3 ) /*0x512e88*/
      v4 = a3; /*0x512e9e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x512e9a*/
    LOBYTE(this->m_C) = 1; /*0x512ea2*/
    if ( !v4 ) /*0x512ea6*/
      return 0; /*0x512f1a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x512ea8*/
    {
      m_8 = this->m_8; /*0x512eaf*/
      if ( a2 < m_8 ) /*0x512eb4*/
        m_8 = a2; /*0x512eb6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x512ebc*/
        ++i; /*0x512ec1*/
      if ( BYTE1(this->m_C) ) /*0x512ece*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x512ed9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x512ee1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x512eea*/
    this->m_8 = a2; /*0x512ef2*/
    BYTE1(this->m_C) = a3 == 0; /*0x512ef5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVInfantryTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x512efe*/
  }
  v7 = this->m_8; /*0x512f01*/
  if ( v7 < this->m_10 ) /*0x512f09*/
    this->m_10 = v7; /*0x512f0b*/
  return 1; /*0x512f0e*/
}



// ==== 0x00512F20  InfantryTypeVector::Add  this=InfantryTypeVector  sig=csp ====
char __thiscall InfantryTypeVector::Add(InfantryTypeVector *this, _DWORD *a2)
{
  int InfantryTypeVector_field_0x08; // ecx
  int InfantryTypeVector_field_0x14; // eax
  int InfantryTypeVector_field_0x10; // eax
  int InfantryTypeVector_field_0x04; // edx

  InfantryTypeVector_field_0x08 = this->InfantryTypeVector_field_0x08; /*0x512f23*/
  if ( this->InfantryTypeVector_field_0x10 >= InfantryTypeVector_field_0x08 ) /*0x512f2b*/
  {
    if ( !BYTE1(this->InfantryTypeVector_field_0x0C) && InfantryTypeVector_field_0x08 ) /*0x512f36*/
      return 0; /*0x512f36*/
    InfantryTypeVector_field_0x14 = this->InfantryTypeVector_field_0x14; /*0x512f38*/
    if ( InfantryTypeVector_field_0x14 <= 0 /*0x512f48*/
      || !(*(unsigned __int8 (__thiscall **)(InfantryTypeVector *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
            this,
            InfantryTypeVector_field_0x08 + InfantryTypeVector_field_0x14,
            0) )
    {
      return 0; /*0x512f4f*/
    }
  }
  InfantryTypeVector_field_0x10 = this->InfantryTypeVector_field_0x10; /*0x512f55*/
  InfantryTypeVector_field_0x04 = this->InfantryTypeVector_field_0x04; /*0x512f58*/
  this->InfantryTypeVector_field_0x10 = InfantryTypeVector_field_0x10 + 1; /*0x512f5e*/
  *(_DWORD *)(InfantryTypeVector_field_0x04 + 4 * InfantryTypeVector_field_0x10) = *a2; /*0x512f68*/
  return 1; /*0x512f51*/
}



// ==== 0x00512F70  _DynamicVectorClass_PBVInfantryTypeClass::GetSize  this=DynamicVector  sig=csp ====
int __thiscall TypeList_Infantry::GetSize(_DynamicVectorClass_PBVInfantryTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x512f70*/
  result = 0; /*0x512f73*/
  if ( m_10 <= 0 ) /*0x512f78*/
    return -1; /*0x512f8f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x512f7e*/
  {
    if ( ++result >= m_10 ) /*0x512f8d*/
      return -1; /*0x512f8d*/
  }
  return result; /*0x512f92*/
}



// ==== 0x00512FA0  VectorClass::CopyConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CopyConstructor(VectorClass *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)a2 ) /*0x512faa*/
    return &this->ptr_0; /*0x512faa*/
  (*((void (__thiscall **)(VectorClass *))this->ptr_0 + 3))(this); /*0x512fae*/
  v3 = a2[2]; /*0x512fb1*/
  this->Capacity = v3; /*0x512fb6*/
  if ( !v3 ) /*0x512fb9*/
  {
    this->Items = 0; /*0x512ffa*/
    this->IsAllocated = 0; /*0x513001*/
    return &this->ptr_0; /*0x513005*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x512fc3*/
  this->Items = v4; /*0x512fcb*/
  if ( !v4 ) /*0x512fd0*/
    return &this->ptr_0; /*0x512fd0*/
  Capacity = this->Capacity; /*0x512fd2*/
  v6 = 0; /*0x512fd5*/
  this->IsAllocated = 1; /*0x512fd9*/
  if ( Capacity <= 0 ) /*0x512fdd*/
    return &this->ptr_0; /*0x512fdd*/
  do /*0x512ff1*/
  {
    *((_DWORD *)this->Items + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x512fe8*/
    ++v6; /*0x512fee*/
  }
  while ( v6 < this->Capacity ); /*0x512ff1*/
  return &this->ptr_0; /*0x512ff5*/
}



// ==== 0x00513010  _VectorClass_PBVUnitTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall HouseTypeClass_36::AddRef(_VectorClass_PBVUnitTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x513012*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x51301d*/
  {
    v3 = 0; /*0x51301f*/
    if ( m_8 <= 0 ) /*0x513023*/
      return 1; /*0x513043*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x513025*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x51302b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x513034*/
    {
      ++v3; /*0x513036*/
      ++v4; /*0x513037*/
      if ( v3 >= m_8 ) /*0x51303c*/
        return 1; /*0x51303c*/
    }
  }
  return 0; /*0x51303e*/
}



// ==== 0x00513050  _VectorClass_PBVUnitTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall UnitTypeVector::Release(_VectorClass_PBVUnitTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x51305c*/
  {
    LOBYTE(this->m_C) = 0; /*0x513066*/
    if ( a3 ) /*0x51306c*/
      v4 = a3; /*0x513082*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x51307e*/
    LOBYTE(this->m_C) = 1; /*0x513086*/
    if ( v4 ) /*0x51308a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x513095*/
      {
        m_8 = this->m_8; /*0x51309c*/
        if ( a2 < m_8 ) /*0x5130a1*/
          m_8 = a2; /*0x5130a3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5130a9*/
          ++i; /*0x5130ae*/
        if ( BYTE1(this->m_C) ) /*0x5130bb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5130c6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5130ce*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5130d7*/
      this->m_8 = a2; /*0x5130df*/
      BYTE1(this->m_C) = a3 == 0; /*0x5130e2*/
      return 1; /*0x5130e8*/
    }
    else
    {
      return 0; /*0x51308f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVUnitTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5130f2*/
    return 1; /*0x5130f8*/
  }
}



// ==== 0x00513100  _VectorClass_PBVUnitTypeClass::Destructor  this=VectorClass  sig=csp ====
int __thiscall Vector::Destructor(_VectorClass_PBVUnitTypeClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->m_1[3]; /*0x513106*/
  if ( result && BYTE1(this->m_C) ) /*0x51310d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x513113*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x51311b*/
  }
  BYTE1(this->m_C) = 0; /*0x51311e*/
  this->m_8 = 0; /*0x513121*/
  return result; /*0x513124*/
}



// ==== 0x00513130  _VectorClass_PBVUnitTypeClass::Add  this=VectorClass  sig=csp ====
int __thiscall UnitTypeVector::Add(_VectorClass_PBVUnitTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x513130*/
    return 0; /*0x513138*/
  m_8 = this->m_8; /*0x51313e*/
  result = 0; /*0x513141*/
  if ( m_8 <= 0 ) /*0x513145*/
    return -1; /*0x51315c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x51314b*/
  {
    if ( ++result >= m_8 ) /*0x51315a*/
      return -1; /*0x51315a*/
  }
  return result; /*0x51313a*/
}



// ==== 0x00513170  _VectorClass_PBVUnitTypeClass::Remove  this=VectorClass  sig=csp ====
unsigned int __thiscall UnitTypeVector::Remove(_VectorClass_PBVUnitTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x513170*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x513185*/
  else
    return 0; /*0x513177*/
}



// ==== 0x00513190  UnitTypeVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall UnitTypeVector::Construct(UnitTypeVector *this, int a2, int a3)
{
  this->UnitTypeVector_field_0x04 = 0; /*0x513199*/
  this->UnitTypeVector_field_0x08 = a2; /*0x5131a0*/
  LOBYTE(this->UnitTypeVector_field_0x0C) = 1; /*0x5131a3*/
  BYTE1(this->UnitTypeVector_field_0x0C) = 0; /*0x5131a7*/
  *(_DWORD *)this->__pad_0 = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x5131ab*/
  if ( a2 ) /*0x5131b1*/
  {
    if ( a3 ) /*0x5131b9*/
    {
      this->UnitTypeVector_field_0x04 = a3; /*0x5131bb*/
    }
    else
    {
      this->UnitTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x5131cc*/
      BYTE1(this->UnitTypeVector_field_0x0C) = 1; /*0x5131cf*/
    }
  }
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<UnitTypeClass const *>::`vftable'; /*0x5131d3*/
  this->UnitTypeVector_field_0x14 = 10; /*0x5131d9*/
  this->UnitTypeVector_field_0x10 = 0; /*0x5131e0*/
  return this->__pad_0; /*0x5131e9*/
}



// ==== 0x005131F0  _DynamicVectorClass_PBVUnitTypeClass::Constructor_0  this=DynamicVector  sig=csp ====
_DWORD *__thiscall TypeList_Infantry::Constructor_0(_DynamicVectorClass_PBVUnitTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5131f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x5131f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x513200*/
  {
    __3_YAXPAX_Z(v3); /*0x513208*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x513210*/
  }
  BYTE1(this->m_C) = 0; /*0x51321b*/
  this->m_8 = 0; /*0x513221*/
  if ( (a2 & 1) != 0 ) /*0x513228*/
    __3_YAXPAX_Z(this); /*0x51322b*/
  return this->__pad_0; /*0x513235*/
}



// ==== 0x00513240  _DynamicVectorClass_PBVUnitTypeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall HouseTypeClass_36::Release(_DynamicVectorClass_PBVUnitTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x51324c*/
  {
    LOBYTE(this->m_C) = 0; /*0x513252*/
    if ( a3 ) /*0x513258*/
      v4 = a3; /*0x51326e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x51326a*/
    LOBYTE(this->m_C) = 1; /*0x513272*/
    if ( !v4 ) /*0x513276*/
      return 0; /*0x5132ea*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x513278*/
    {
      m_8 = this->m_8; /*0x51327f*/
      if ( a2 < m_8 ) /*0x513284*/
        m_8 = a2; /*0x513286*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x51328c*/
        ++i; /*0x513291*/
      if ( BYTE1(this->m_C) ) /*0x51329e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5132a9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5132b1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5132ba*/
    this->m_8 = a2; /*0x5132c2*/
    BYTE1(this->m_C) = a3 == 0; /*0x5132c5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVUnitTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5132ce*/
  }
  v7 = this->m_8; /*0x5132d1*/
  if ( v7 < this->m_10 ) /*0x5132d9*/
    this->m_10 = v7; /*0x5132db*/
  return 1; /*0x5132de*/
}



// ==== 0x005132F0  VectorClass::PushBack  this=VectorClass  sig=csp ====
char __thiscall VectorClass::PushBack(DynamicVectorClass *this, _DWORD *a2)
{
  int Capacity; // ecx
  int CapacityIncrement; // eax
  int Count; // eax
  int Items; // edx

  Capacity = this->Capacity; /*0x5132f3*/
  if ( this->Count >= Capacity ) /*0x5132fb*/
  {
    if ( !this->IsAllocated[0] && Capacity ) /*0x513306*/
      return 0; /*0x513306*/
    CapacityIncrement = this->CapacityIncrement; /*0x513308*/
    if ( CapacityIncrement <= 0 /*0x513318*/
      || !(*(unsigned __int8 (__thiscall **)(DynamicVectorClass *, int, _DWORD))(this->ptr_0 + 8))(
            this,
            Capacity + CapacityIncrement,
            0) )
    {
      return 0; /*0x51331f*/
    }
  }
  Count = this->Count; /*0x513325*/
  Items = this->Items; /*0x513328*/
  this->Count = Count + 1; /*0x51332e*/
  *(_DWORD *)(Items + 4 * Count) = *a2; /*0x513338*/
  return 1; /*0x513321*/
}



// ==== 0x00513340  _DynamicVectorClass_PBVUnitTypeClass::Read  this=DynamicVector  sig=csp ====
int __thiscall HouseTypeClass_36::Read(_DynamicVectorClass_PBVUnitTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x513340*/
  result = 0; /*0x513343*/
  if ( m_10 <= 0 ) /*0x513348*/
    return -1; /*0x51335f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x51334e*/
  {
    if ( ++result >= m_10 ) /*0x51335d*/
      return -1; /*0x51335d*/
  }
  return result; /*0x513362*/
}



// ==== 0x00513370  HouseTypeClass::readBaseDefense  this=TOP  sig=csp ====
_DWORD *__thiscall HouseTypeClass::readBaseDefense(HouseTypeClass *this, _DWORD *a2)
{
  void *v3; // eax
  void *v4; // eax
  void *ptr_8; // ecx
  int v6; // eax

  if ( this == (HouseTypeClass *)a2 ) /*0x51337a*/
    return &this->AbstractClass; /*0x51337a*/
  (*((void (__thiscall **)(HouseTypeClass *))this->AbstractClass + 3))(this); /*0x51337e*/
  v3 = (void *)a2[2]; /*0x513381*/
  this->? = v3; /*0x513386*/
  if ( !v3 ) /*0x513389*/
  {
    this->? = 0; /*0x5133ca*/
    BYTE1(this->?) = 0; /*0x5133d1*/
    return &this->AbstractClass; /*0x5133d5*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (_DWORD)v3); /*0x513393*/
  this->? = v4; /*0x51339b*/
  if ( !v4 ) /*0x5133a0*/
    return &this->AbstractClass; /*0x5133a0*/
  ptr_8 = this->?; /*0x5133a2*/
  v6 = 0; /*0x5133a5*/
  BYTE1(this->?) = 1; /*0x5133a9*/
  if ( (int)ptr_8 <= 0 ) /*0x5133ad*/
    return &this->AbstractClass; /*0x5133ad*/
  do /*0x5133c1*/
  {
    *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x5133b8*/
    ++v6; /*0x5133be*/
  }
  while ( v6 < (int)this->? ); /*0x5133c1*/
  return &this->AbstractClass; /*0x5133c5*/
}



// ==== 0x005133E0  _VectorClass_PBVAircraftTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall HouseTypeClass_28::AddRef(_VectorClass_PBVAircraftTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5133e2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5133ed*/
  {
    v3 = 0; /*0x5133ef*/
    if ( m_8 <= 0 ) /*0x5133f3*/
      return 1; /*0x513413*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5133f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5133fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x513404*/
    {
      ++v3; /*0x513406*/
      ++v4; /*0x513407*/
      if ( v3 >= m_8 ) /*0x51340c*/
        return 1; /*0x51340c*/
    }
  }
  return 0; /*0x51340e*/
}



// ==== 0x00513420  _VectorClass_PBVAircraftTypeClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall HouseTypeClass_36::SetCapacity(_VectorClass_PBVAircraftTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x51342c*/
  {
    LOBYTE(this->m_C) = 0; /*0x513436*/
    if ( a3 ) /*0x51343c*/
      v4 = a3; /*0x513452*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x51344e*/
    LOBYTE(this->m_C) = 1; /*0x513456*/
    if ( v4 ) /*0x51345a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x513465*/
      {
        m_8 = this->m_8; /*0x51346c*/
        if ( a2 < m_8 ) /*0x513471*/
          m_8 = a2; /*0x513473*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x513479*/
          ++i; /*0x51347e*/
        if ( BYTE1(this->m_C) ) /*0x51348b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x513496*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x51349e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5134a7*/
      this->m_8 = a2; /*0x5134af*/
      BYTE1(this->m_C) = a3 == 0; /*0x5134b2*/
      return 1; /*0x5134b8*/
    }
    else
    {
      return 0; /*0x51345f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVAircraftTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5134c2*/
    return 1; /*0x5134c8*/
  }
}



// ==== 0x005134D0  ?$VectorClass@PBVAircraftTypeClass@@::ClearAndFree4  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ClearAndFree4(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5134dd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5134e3*/
    *(_DWORD *)(this + 4) = 0; /*0x5134eb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5134ee*/
  *(_DWORD *)(this + 8) = 0; /*0x5134f1*/
}



// ==== 0x00513500  _VectorClass_PBVAircraftTypeClass::IndexOf  this=VectorClass  sig=csp ====
int __thiscall HouseTypeClass_36::IndexOf(_VectorClass_PBVAircraftTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x513500*/
    return 0; /*0x513508*/
  m_8 = this->m_8; /*0x51350e*/
  result = 0; /*0x513511*/
  if ( m_8 <= 0 ) /*0x513515*/
    return -1; /*0x51352c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x51351b*/
  {
    if ( ++result >= m_8 ) /*0x51352a*/
      return -1; /*0x51352a*/
  }
  return result; /*0x51350a*/
}



// ==== 0x00513540  _VectorClass_PBVAircraftTypeClass::PointerToIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall HouseTypeClass_36::PointerToIndex(_VectorClass_PBVAircraftTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x513540*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x513555*/
  else
    return 0; /*0x513547*/
}



// ==== 0x00513560  HouseTypeClass::readDefaultAlly  this=VectorClass  sig=csp ====
_DWORD *__thiscall HouseTypeClass::readDefaultAlly(HouseTypeClass *this, int a2, int a3)
{
  this->? = 0; /*0x513569*/
  this->? = (void *)a2; /*0x513570*/
  LOBYTE(this->?) = 1; /*0x513573*/
  BYTE1(this->?) = 0; /*0x513577*/
  this->AbstractClass = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x51357b*/
  if ( a2 ) /*0x513581*/
  {
    if ( a3 ) /*0x513589*/
    {
      this->? = (void *)a3; /*0x51358b*/
    }
    else
    {
      this->? = (void *)__2_YAPAXI_Z(4 * a2); /*0x51359c*/
      BYTE1(this->?) = 1; /*0x51359f*/
    }
  }
  this->AbstractClass = &DynamicVectorClass<AircraftTypeClass const *>::`vftable'; /*0x5135a3*/
  this->? = 10; /*0x5135a9*/
  this->? = 0; /*0x5135b0*/
  return &this->AbstractClass; /*0x5135b9*/
}



// ==== 0x005135C0  _DynamicVectorClass_PBVAircraftTypeClass::Constructor_1  this=DynamicVector  sig=csp ====
_DWORD *__thiscall TypeList_Infantry::Constructor_1(_DynamicVectorClass_PBVAircraftTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5135c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x5135c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5135d0*/
  {
    __3_YAXPAX_Z(v3); /*0x5135d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5135e0*/
  }
  BYTE1(this->m_C) = 0; /*0x5135eb*/
  this->m_8 = 0; /*0x5135f1*/
  if ( (a2 & 1) != 0 ) /*0x5135f8*/
    __3_YAXPAX_Z(this); /*0x5135fb*/
  return this->__pad_0; /*0x513605*/
}



// ==== 0x00513610  _DynamicVectorClass_PBVAircraftTypeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall HouseTypeClass_28::Release(_DynamicVectorClass_PBVAircraftTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x51361c*/
  {
    LOBYTE(this->m_C) = 0; /*0x513622*/
    if ( a3 ) /*0x513628*/
      v4 = a3; /*0x51363e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x51363a*/
    LOBYTE(this->m_C) = 1; /*0x513642*/
    if ( !v4 ) /*0x513646*/
      return 0; /*0x5136ba*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x513648*/
    {
      m_8 = this->m_8; /*0x51364f*/
      if ( a2 < m_8 ) /*0x513654*/
        m_8 = a2; /*0x513656*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x51365c*/
        ++i; /*0x513661*/
      if ( BYTE1(this->m_C) ) /*0x51366e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x513679*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x513681*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x51368a*/
    this->m_8 = a2; /*0x513692*/
    BYTE1(this->m_C) = a3 == 0; /*0x513695*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVAircraftTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x51369e*/
  }
  v7 = this->m_8; /*0x5136a1*/
  if ( v7 < this->m_10 ) /*0x5136a9*/
    this->m_10 = v7; /*0x5136ab*/
  return 1; /*0x5136ae*/
}



// ==== 0x005136C0  HouseTypeClass::readPowerPlants  this=HouseTypeClass  sig=csp ====
char __thiscall HouseTypeClass::readPowerPlants(HouseTypeClass *this, _DWORD *a2)
{
  void *ptr_8; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax
  _DWORD *ptr_4; // edx

  ptr_8 = this->?; /*0x5136c3*/
  if ( this->? >= (int)ptr_8 ) /*0x5136cb*/
  {
    if ( !BYTE1(this->?) && ptr_8 ) /*0x5136d6*/
      return 0; /*0x5136d6*/
    abstractFlags = this->?; /*0x5136d8*/
    if ( abstractFlags <= 0 /*0x5136e8*/
      || !(*((unsigned __int8 (__thiscall **)(HouseTypeClass *, int, _DWORD))this->AbstractClass + 2))(
            this,
            (int)ptr_8 + abstractFlags,
            0) )
    {
      return 0; /*0x5136ef*/
    }
  }
  uniqueId = this->?; /*0x5136f5*/
  ptr_4 = this->?; /*0x5136f8*/
  this->? = uniqueId + 1; /*0x5136fe*/
  ptr_4[uniqueId] = *a2; /*0x513708*/
  return 1; /*0x5136f1*/
}



// ==== 0x00513710  _DynamicVectorClass_PBVAircraftTypeClass::Read  this=DynamicVector  sig=csp ====
int __thiscall HouseTypeClass_28::Read(_DynamicVectorClass_PBVAircraftTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x513710*/
  result = 0; /*0x513713*/
  if ( m_10 <= 0 ) /*0x513718*/
    return -1; /*0x51372f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x51371e*/
  {
    if ( ++result >= m_10 ) /*0x51372d*/
      return -1; /*0x51372d*/
  }
  return result; /*0x513732*/
}



// ==== 0x00513740  TypeList::CopyConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList::CopyConstructor(TypeList *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  this->? = 0; /*0x51374d*/
  this->? = 0; /*0x513750*/
  this->? = 1; /*0x513753*/
  this->? = 0; /*0x513757*/
  this->DynamicVectorClass = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x51375a*/
  if ( this != (TypeList *)a2 ) /*0x513760*/
  {
    Vector::Destructor((_VectorClass_PBVUnitTypeClass *)this); /*0x513762*/
    v3 = a2[2]; /*0x513768*/
    this->? = v3; /*0x51376d*/
    if ( v3 ) /*0x513770*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x513776*/
      this->? = v4; /*0x513780*/
      if ( v4 ) /*0x513783*/
      {
        Capacity = this->?; /*0x513785*/
        v6 = 0; /*0x513788*/
        this->? = 1; /*0x51378c*/
        if ( Capacity > 0 ) /*0x513790*/
        {
          do /*0x5137a4*/
          {
            *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x51379b*/
            ++v6; /*0x5137a1*/
          }
          while ( v6 < this->? ); /*0x5137a4*/
        }
      }
    }
    else
    {
      this->? = 0; /*0x5137a8*/
      this->? = 0; /*0x5137ab*/
    }
  }
  this->? = a2[4]; /*0x5137b1*/
  this->? = a2[5]; /*0x5137b7*/
  this->DynamicVectorClass = &TypeList<UnitTypeClass const *>::`vftable'; /*0x5137ba*/
  return &this->DynamicVectorClass; /*0x5137c2*/
}



// ==== 0x005137D0  HouseTypeClass::readParaDropTypes  this=VectorClass  sig=csp ====
_DWORD *__thiscall HouseTypeClass::readParaDropTypes(HouseTypeClass *this, _DWORD *a2)
{
  void *v3; // eax
  void *v4; // eax
  void *ptr_8; // ecx
  int v6; // eax

  this->? = 0; /*0x5137dd*/
  this->? = 0; /*0x5137e0*/
  LOBYTE(this->?) = 1; /*0x5137e3*/
  BYTE1(this->?) = 0; /*0x5137e7*/
  this->AbstractClass = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x5137ea*/
  if ( this != (HouseTypeClass *)a2 ) /*0x5137f0*/
  {
    VectorClass::ClearAndFree4((int)this); /*0x5137f2*/
    v3 = (void *)a2[2]; /*0x5137f8*/
    this->? = v3; /*0x5137fd*/
    if ( v3 ) /*0x513800*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * (_DWORD)v3); /*0x513806*/
      this->? = v4; /*0x513810*/
      if ( v4 ) /*0x513813*/
      {
        ptr_8 = this->?; /*0x513815*/
        v6 = 0; /*0x513818*/
        BYTE1(this->?) = 1; /*0x51381c*/
        if ( (int)ptr_8 > 0 ) /*0x513820*/
        {
          do /*0x513834*/
          {
            *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x51382b*/
            ++v6; /*0x513831*/
          }
          while ( v6 < (int)this->? ); /*0x513834*/
        }
      }
    }
    else
    {
      this->? = 0; /*0x513838*/
      BYTE1(this->?) = 0; /*0x51383b*/
    }
  }
  this->? = a2[4]; /*0x513841*/
  this->? = a2[5]; /*0x513847*/
  this->AbstractClass = &TypeList<AircraftTypeClass const *>::`vftable'; /*0x51384a*/
  return &this->AbstractClass; /*0x513852*/
}



// ==== 0x00513860  HouseTypeClass::readAllowedUnits  this=VectorClass  sig=csp ====
_DWORD *__thiscall HouseTypeClass::readAllowedUnits(HouseTypeClass *this, _DWORD *a2)
{
  void *v3; // eax
  void *v4; // eax
  void *ptr_8; // ecx
  int v6; // eax

  this->? = 0; /*0x51386d*/
  this->? = 0; /*0x513870*/
  LOBYTE(this->?) = 1; /*0x513873*/
  BYTE1(this->?) = 0; /*0x513877*/
  this->AbstractClass = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x51387a*/
  if ( this != (HouseTypeClass *)a2 ) /*0x513880*/
  {
    Vector::Cleanup((_VectorClass_PBVInfantryTypeClass *)this); /*0x513882*/
    v3 = (void *)a2[2]; /*0x513888*/
    this->? = v3; /*0x51388d*/
    if ( v3 ) /*0x513890*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * (_DWORD)v3); /*0x513896*/
      this->? = v4; /*0x5138a0*/
      if ( v4 ) /*0x5138a3*/
      {
        ptr_8 = this->?; /*0x5138a5*/
        v6 = 0; /*0x5138a8*/
        BYTE1(this->?) = 1; /*0x5138ac*/
        if ( (int)ptr_8 > 0 ) /*0x5138b0*/
        {
          do /*0x5138c4*/
          {
            *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x5138bb*/
            ++v6; /*0x5138c1*/
          }
          while ( v6 < (int)this->? ); /*0x5138c4*/
        }
      }
    }
    else
    {
      this->? = 0; /*0x5138c8*/
      BYTE1(this->?) = 0; /*0x5138cb*/
    }
  }
  this->? = a2[4]; /*0x5138d1*/
  this->? = a2[5]; /*0x5138d7*/
  this->AbstractClass = &DynamicVectorClass<InfantryTypeClass const *>::`vftable'; /*0x5138da*/
  return &this->AbstractClass; /*0x5138e2*/
}



// ==== 0x005138F0  InfantryTypeVector::Construct2  this=VectorClass  sig=csp ====
_DWORD *__thiscall InfantryTypeVector::Construct2(InfantryTypeVector *this, int a2, int a3)
{
  this->InfantryTypeVector_field_0x04 = 0; /*0x5138fb*/
  this->InfantryTypeVector_field_0x08 = a2; /*0x5138fe*/
  LOBYTE(this->InfantryTypeVector_field_0x0C) = 1; /*0x513901*/
  BYTE1(this->InfantryTypeVector_field_0x0C) = 0; /*0x513905*/
  *(_DWORD *)this->__pad_0 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x513908*/
  if ( a2 ) /*0x51390e*/
  {
    if ( a3 ) /*0x513916*/
    {
      this->InfantryTypeVector_field_0x04 = a3; /*0x513918*/
      return this->__pad_0; /*0x51391e*/
    }
    this->InfantryTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x51392d*/
    BYTE1(this->InfantryTypeVector_field_0x0C) = 1; /*0x513930*/
  }
  return this->__pad_0; /*0x51391d*/
}



// ==== 0x00513940  UnitTypeVector::ConstructUnitTypeVectorClass  this=VectorClass  sig=csp ====
_DWORD *__thiscall UnitTypeVector::ConstructUnitTypeVectorClass(UnitTypeVector *this, int a2, int a3)
{
  this->UnitTypeVector_field_0x04 = 0; /*0x51394b*/
  this->UnitTypeVector_field_0x08 = a2; /*0x51394e*/
  LOBYTE(this->UnitTypeVector_field_0x0C) = 1; /*0x513951*/
  BYTE1(this->UnitTypeVector_field_0x0C) = 0; /*0x513955*/
  *(_DWORD *)this->__pad_0 = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x513958*/
  if ( a2 ) /*0x51395e*/
  {
    if ( a3 ) /*0x513966*/
    {
      this->UnitTypeVector_field_0x04 = a3; /*0x513968*/
      return this->__pad_0; /*0x51396e*/
    }
    this->UnitTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x51397d*/
    BYTE1(this->UnitTypeVector_field_0x0C) = 1; /*0x513980*/
  }
  return this->__pad_0; /*0x51396d*/
}



// ==== 0x00513990  AircraftTypeVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall AircraftTypeVector::Constructor(AircraftTypeVector *this, int a2, int a3)
{
  this->Items = 0; /*0x51399b*/
  this->Capacity = a2; /*0x51399e*/
  this->IsInitialized = 1; /*0x5139a1*/
  this->IsAllocated = 0; /*0x5139a5*/
  *this = (AircraftTypeVector)&VectorClass<AircraftTypeClass const *>::`vftable'; /*0x5139a8*/
  if ( a2 ) /*0x5139ae*/
  {
    if ( a3 ) /*0x5139b6*/
    {
      this->Items = a3; /*0x5139b8*/
      return this; /*0x5139be*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5139cd*/
    this->IsAllocated = 1; /*0x5139d0*/
  }
  return this; /*0x5139bd*/
}



// ==== 0x005139E0  HouseTypeClass::readBaseDefenses  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::sub_5139E0(int a1, const void *a2, _DWORD *a3)
{
  return HouseTypeClass::QueryInterface(a1 - 4, a2, a3);
}



// ==== 0x005139F0  HouseTypeClass::readAiBuildLists  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::sub_5139F0(int a1)
{
  return HouseTypeClass::AddRef(a1 - 4);
}



// ==== 0x00513A00  HouseTypeClass::readLoadoutData  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::sub_513A00(int a1)
{
  return HouseTypeClass::Release(a1 - 4);
}



// ==== 0x00513A10  sub_513A10  this=-  sig=ida-proto ====
void sub_513A10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x513a1c*/
  dbl_A8F168 = Math::Sqrt(v0 + v0); /*0x513a2e*/
}



// ==== 0x00513A40  sub_513A40  this=-  sig=ida-proto ====
void sub_513A40()
{
  dbl_A8F1B8 = dbl_A8F168 / 60.0; /*0x513a4c*/
}



// ==== 0x00513A60  sub_513A60  this=-  sig=ida-proto ====
void sub_513A60()
{
  dbl_A8F1A0 = 1.0 / dbl_A8F1B8; /*0x513a6c*/
}



// ==== 0x00513A80  sub_513A80  this=-  sig=ida-proto ====
void sub_513A80()
{
  dbl_A8F198 = 0.0174532925199433 * 45.0; /*0x513a8c*/
}



// ==== 0x00513AA0  sub_513AA0  this=-  sig=ida-proto ====
void sub_513AA0()
{
  dbl_A8F170 = 0.0174532925199433 * 60.0; /*0x513aac*/
}



// ==== 0x00513AC0  sub_513AC0  this=-  sig=ida-proto ====
void sub_513AC0()
{
  dbl_A8F148 = 0.0174532925199433 * 90.0; /*0x513acc*/
}



// ==== 0x00513AE0  sub_513AE0  this=-  sig=ida-proto ====
__int64 sub_513AE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A8F148 - dbl_A8F170); /*0x513af2*/
  result = Math::RoundToInt(v0 * dbl_A8F168 * 0.5); /*0x513b06*/
  dword_A8F1C0 = result; /*0x513b0b*/
  return result; /*0x513b10*/
}



// ==== 0x00513B20  sub_513B20  this=-  sig=ida-proto ====
void sub_513B20()
{
  dbl_A8F178 = Math::ArcTan((double)dword_A8F1C0 * 0.00390625); /*0x513b37*/
}



// ==== 0x00513B50  sub_513B50  this=-  sig=ida-proto ====
void sub_513B50()
{
  dbl_A8F190 = Math::ArcTan((double)(2 * dword_A8F1C0) / dbl_A8F168); /*0x513b72*/
}



// ==== 0x00513B80  sub_513B80  this=-  sig=ida-proto ====
__int64 sub_513B80()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F1C0) + 0.5); /*0x513b9b*/
  dword_A8F1B4 = result; /*0x513ba0*/
  return result; /*0x513ba6*/
}



// ==== 0x00513BB0  sub_513BB0  this=-  sig=ida-proto ====
int sub_513BB0()
{
  dword_A8F160 = 0; /*0x513bb2*/
  return 0; /*0x513bbe*/
}



// ==== 0x00513BC0  sub_513BC0  this=-  sig=ida-proto ====
int sub_513BC0()
{
  dword_A8F180 = 0; /*0x513bc2*/
  dword_A8F184 = 0; /*0x513bc7*/
  dword_A8F188 = 0; /*0x513bcc*/
  return 0; /*0x513bd1*/
}



// ==== 0x00513BE0  sub_513BE0  this=-  sig=ida-proto ====
int sub_513BE0()
{
  dword_A8F1B0 = 0; /*0x513be5*/
  dword_A8F1A8 = 128; /*0x513bef*/
  dword_A8F1AC = 128; /*0x513bf4*/
  return 128; /*0x513bf9*/
}



// ==== 0x00513C00  sub_513C00  this=-  sig=ida-proto ====
int sub_513C00()
{
  dword_A8F150 = 0; /*0x513c02*/
  dword_A8F154 = 0; /*0x513c07*/
  dword_A8F158 = 0; /*0x513c0c*/
  dword_A8F15C = 0; /*0x513c11*/
  return 0; /*0x513c16*/
}



// ==== 0x00513C20  LocomotionClass::ProcessData  this=HoverLocomotionClass  sig=csp ====
int __thiscall LocomotionClass::ProcessData(LocomotionClass *this)
{
  LocomotionClass::Init(this); /*0x513c24*/
  this->Dest = *(_DWORD *)&stru_A8EB00.?[1436]; /*0x513c34*/
  this->HoverLocomotionClass_field_bool_70 = *(_DWORD *)&stru_A8EB00.?[1440]; /*0x513c3d*/
  this->q008 = *(_DWORD *)&stru_A8EB00.?[1444]; /*0x513c49*/
  this->HeadToCoord = *(_DWORD *)&stru_A8EB00.?[1436]; /*0x513c51*/
  this->q028 = *(_DWORD *)&stru_A8EB00.?[1440]; /*0x513c59*/
  this->u32_2C = *(_DWORD *)&stru_A8EB00.?[1444]; /*0x513c64*/
  FrameSnapshot::InitMax((FrameSnapshot *)this + 6, 0); /*0x513c67*/
  this->MaxSpeed = 0; /*0x513c6c*/
  this->CurrentSpeed = 0; /*0x513c6f*/
  this->BoostSpeed = 0; /*0x513c72*/
  this->Dest = 0; /*0x513c75*/
  this->u32_4C = 0; /*0x513c78*/
  this->__pad_015 = 0; /*0x513c7b*/
  this->u32_5C = 1072693248; /*0x513c7e*/
  this->q064 = 0; /*0x513c85*/
  this->HoverLocomotionClass_field_bool_68 = 0; /*0x513c88*/
  this->HoverLocomotionClass_field_6C = 0; /*0x513c8b*/
  this->HoverLocomotionClass_field_bool_70 = 0; /*0x513c8e*/
  *(_DWORD *)this->ILocomotion = &HoverLocomotionClass::`vftable'; /*0x513c91*/
  *(_DWORD *)&this->ILocomotion[4] = &HoverLocomotionClass::`vftable'; /*0x513c97*/
  return (int)this->ILocomotion; /*0x513ca0*/
}



// ==== 0x00513CB0  HoverLocomotionClass::WriteObject  this=HoverLocomotionClass  sig=csp ====
int __stdcall SaveGame::WriteObject(HoverLocomotionClass *this, int a2)
{
  int v2; // ebx
  int v3; // eax
  FrameSnapshot v5[3]; // [esp+Ch] [ebp-18h] BYREF

  v2 = StreamClass::ResetPosition((LocomotionClass *)this, a2); /*0x513cc8*/
  v3 = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?); /*0x513ccc*/
  FrameSnapshot::InitMax(v5, 2 * *(_DWORD *)(v3 + 1820)); /*0x513cdf*/
  qmemcpy(&this->HeadToCoord[2], v5, 0x18u); /*0x513cf2*/
  return v2; /*0x513cf4*/
}



// ==== 0x00513D00  HoverLocomotionClass::method_513D00  this=HoverLocomotionClass  sig=csp ====
void __thiscall sub_513D00(HoverLocomotionClass *this)
{
  *(_DWORD *)this->LocomotionClass = &HoverLocomotionClass::`vftable'; /*0x513d00*/
  *(_DWORD *)&this->LocomotionClass[4] = &HoverLocomotionClass::`vftable'; /*0x513d06*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x513d0d*/
}



// ==== 0x00513D20  BuildingLightClass::UpdateOscillation  this=BuildingLightClass  sig=csp ====
signed int __thiscall BuildingLightClass::UpdateOscillation(BuildingLightClass *this)
{
  _DWORD *ptr_C; // eax
  int *v3; // eax
  int GroundHeight; // edi
  _DWORD *v5; // eax
  int *v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // ebx
  int v10; // ebp
  int v11; // ecx
  int v12; // eax
  double v13; // st7
  int v14; // eax
  int v15; // eax
  double v16; // st6
  int v17; // edi
  double v18; // st6
  int v19; // eax
  int v20; // eax
  _BYTE *v21; // ecx
  char v22; // bl
  signed int result; // eax
  int v24; // ecx
  double v25; // st7
  int v26; // [esp+1Ch] [ebp-18h]
  int v27; // [esp+1Ch] [ebp-18h]
  int v28; // [esp+20h] [ebp-14h]
  int v29; // [esp+28h] [ebp-Ch] BYREF
  int v30; // [esp+2Ch] [ebp-8h]
  int v31; // [esp+30h] [ebp-4h]

  v26 = (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 456))(this->?); /*0x513d3a*/
  v28 = v26; /*0x513d3e*/
  ptr_C = this->?; /*0x513d42*/
  if ( ptr_C[376] != -1 ) /*0x513d4c*/
  {
    v3 = ptr_C + 39; /*0x513d52*/
    v29 = *v3; /*0x513d59*/
    v30 = v3[1]; /*0x513d65*/
    v31 = v3[2]; /*0x513d71*/
    GroundHeight = Cell::GetGroundHeight(&v29); /*0x513d7a*/
    v5 = this->?; /*0x513d7c*/
    v6 = v5 + 39; /*0x513d8b*/
    v7 = v5[376] & 7; /*0x513d8d*/
    v8 = *v6; /*0x513d90*/
    v9 = v6[1]; /*0x513d92*/
    v10 = v6[2]; /*0x513d95*/
    v11 = 8 * v7 + 9041624; /*0x513d98*/
    v12 = v8 + g_DDrawSurfaceManager.scenario[2 * v7 + 102]; /*0x513dab*/
    v30 = v9 + *(_DWORD *)(v11 + 4); /*0x513dad*/
    v29 = v12; /*0x513dbb*/
    v31 = v10; /*0x513dbf*/
    if ( Cell::GetGroundHeight(&v29) > GroundHeight ) /*0x513dca*/
      v28 = v26 - *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1484); /*0x513ddc*/
  }
  v13 = (double)v26 + *(double *)&this->?[4]; /*0x513de4*/
  LOWORD(v14) = Math::RoundToInt(v13); /*0x513de7*/
  v27 = v14; /*0x513dec*/
  v15 = (*(int (__stdcall **)(char *))(*((_DWORD *)this->? + 1) + 16))((char *)this->? + 4); /*0x513df9*/
  if ( (v15 & 1) != 0 ) /*0x513dfe*/
    v16 = 1.0; /*0x513e00*/
  else
    v16 = 1.1; /*0x513e08*/
  v17 = *(_DWORD *)&stru_A8EB00.?[416] + 2 * v15; /*0x513e20*/
  v18 = v16 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1488) * 900.0; /*0x513e23*/
  LOWORD(v19) = Math::RoundToInt(v13); /*0x513e2b*/
  Math::SinCos((double)(v17 % v19) * 6.283185307179586 / v18); /*0x513e4f*/
  LOWORD(v20) = Math::RoundToInt(v13 + v13 + (double)v27); /*0x513e5d*/
  if ( v20 < 0 ) /*0x513e66*/
  {
    this->?[4] = 0; /*0x513e68*/
    this->? = 0; /*0x513e6b*/
    v20 = 0; /*0x513e6e*/
  }
  v21 = this->?; /*0x513e70*/
  v22 = v21[116]; /*0x513e74*/
  v21[116] = 0; /*0x513e77*/
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this->? + 460))(this->?, v20); /*0x513e7f*/
  result = (signed int)this->?; /*0x513e85*/
  *(_BYTE *)(result + 116) = v22; /*0x513e8c*/
  v24 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x513e8f*/
  if ( v28 < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1484) ) /*0x513e9b*/
  {
    if ( (unsigned __int8)StreamClass::GetDirty((IUnknown *)&this->?) ) /*0x513ea1*/
      *(double *)&this->?[4] = ((double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1484) /*0x513ec8*/
                              + (double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1484)
                              - (double)v28)
                             / (double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1484)
                             * (double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5816)
                             + *(double *)&this->?[4];
    v24 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x513ecd*/
    result = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1484) / 4; /*0x513edf*/
    if ( v28 < result ) /*0x513ee4*/
    {
      result = (unsigned int)((unsigned __int64)(1431655766LL /*0x513ef5*/
                                               * *(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5816)) >> 32) >> 31;
      *(double *)&this->?[4] = (double)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5816) / 3) /*0x513f05*/
                             + *(double *)&this->?[4];
      v24 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x513f08*/
    }
  }
  v25 = *(double *)&this->?[4] - (double)*(int *)(v24 + 5816); /*0x513f15*/
  *(double *)&this->?[4] = v25; /*0x513f18*/
  *(double *)&this->?[4] = v25 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1520); /*0x513f27*/
  return result; /*0x513f2a*/
}



// ==== 0x00513F40  ObjectClass::BuildTransform  this=ObjectClass  sig=csp ====
float *__stdcall ObjectClass::BuildTransform(TechnoClass *this, float *a2, _DWORD *a3)
{
  double v3; // st4
  double v4; // st5
  double v5; // st6
  int ptr_8; // ecx
  _DWORD *v7; // ecx
  int v8; // ebp
  float *v10; // eax
  long double v11; // st7
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  float v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  float *Transform; // eax
  float *v23; // eax
  float *v24; // esi
  float v25; // [esp+4h] [ebp-154h]
  float v26; // [esp+8h] [ebp-150h]
  float v27; // [esp+8h] [ebp-150h]
  float v28; // [esp+8h] [ebp-150h]
  float v29; // [esp+18h] [ebp-140h]
  int v30; // [esp+18h] [ebp-140h]
  float v31; // [esp+1Ch] [ebp-13Ch]
  int v32; // [esp+1Ch] [ebp-13Ch]
  float v33; // [esp+20h] [ebp-138h] BYREF
  int v34; // [esp+24h] [ebp-134h]
  float v35; // [esp+28h] [ebp-130h]
  _DWORD v36[3]; // [esp+2Ch] [ebp-12Ch] BYREF
  Matrix3x4 v37; // [esp+38h] [ebp-120h] BYREF
  Transform v38[12]; // [esp+68h] [ebp-F0h] BYREF
  Matrix3x4 v39; // [esp+98h] [ebp-C0h] BYREF
  float v40[12]; // [esp+C8h] [ebp-90h] BYREF
  float v41[12]; // [esp+F8h] [ebp-60h] BYREF
  float v42[12]; // [esp+128h] [ebp-30h] BYREF

  ptr_8 = this->ptr_8; /*0x513f50*/
  if ( fabs(*(float *)(ptr_8 + 808)) >= 0.005 || fabs(*(float *)(ptr_8 + 812)) >= 0.005 ) /*0x513f7f*/
  {
    if ( a3 ) /*0x5140a0*/
      *a3 = -1; /*0x5140a2*/
    Matrix3x4::Identity(&v39); /*0x5140af*/
    Matrix3x4::Identity(&v37); /*0x5140b8*/
    v11 = *(double *)((*(int (__thiscall **)(int))(*(_DWORD *)this->ptr_8 + 132))(this->ptr_8) + 864); /*0x5140cb*/
    v29 = v11; /*0x5140d3*/
    v31 = *(double *)((*(int (__thiscall **)(int))(*(_DWORD *)this->ptr_8 + 132))(this->ptr_8) + 872); /*0x5140e9*/
    Math::ArcTan2(*(float *)(this->ptr_8 + 812)); /*0x5140f6*/
    v12 = this->ptr_8; /*0x5140fb*/
    v35 = v3; /*0x5140fe*/
    Math::SinCos(*(float *)(v12 + 812)); /*0x51410b*/
    v13 = this->ptr_8; /*0x514110*/
    *(float *)&v34 = v4; /*0x514113*/
    Math::ArcTan2(*(float *)(v13 + 808)); /*0x514120*/
    v14 = this->ptr_8; /*0x514125*/
    v33 = v5; /*0x514128*/
    Math::SinCos(*(float *)(v14 + 808)); /*0x514135*/
    LOWORD(v15) = Math::RoundToInt(fabs(v11) * v29 + fabs(*(float *)&v34) * v31); /*0x51414f*/
    *(float *)&v34 = v15; /*0x51415c*/
    LOWORD(v16) = Math::RoundToInt(v35 * v31); /*0x514160*/
    v35 = *(float *)&v16; /*0x514165*/
    LOWORD(v17) = Math::RoundToInt(v31 - (double)v16); /*0x514171*/
    v18 = v17; /*0x51417e*/
    v32 = v17; /*0x514180*/
    LOWORD(v19) = Math::RoundToInt(v33 * v29); /*0x514184*/
    v33 = *(float *)&v19; /*0x514189*/
    LOWORD(v20) = Math::RoundToInt(v29 - (double)v19); /*0x514195*/
    v21 = this->ptr_8; /*0x51419a*/
    v30 = v20; /*0x51419f*/
    if ( *(float *)(v21 + 812) < 0.0 ) /*0x5141b4*/
      v32 = -v18; /*0x5141b8*/
    if ( *(float *)(v21 + 808) > 0.0 ) /*0x5141cd*/
      v30 = -v20; /*0x5141d1*/
    v26 = (float)v34; /*0x5141e1*/
    Matrix3x3::ApplyCol1(v39.m_Data, v26); /*0x5141e4*/
    v27 = (float)v32; /*0x5141f2*/
    Matrix3x4::Translate(v37.m_Data, v27); /*0x5141f5*/
    v28 = (float)v30; /*0x514203*/
    Matrix3x3::ApplyCol0(v37.m_Data, v28); /*0x514206*/
    Matrix3x3::RotateX(v37.m_Data, *(float *)(this->ptr_8 + 808)); /*0x514219*/
    Matrix3D::RotateZ(v37.m_Data, *(float *)(this->ptr_8 + 812)); /*0x51422c*/
    Transform = Turret::GetTransform((LocomotionClass *)this, v40, a3); /*0x51423b*/
    Transform::Copy(v38, Transform); /*0x514245*/
    v23 = MultiplyMatrix3x4(v41, (float *)v39.m_Data, (float *)&v38[0].Transform_field_00); /*0x514262*/
    v10 = MultiplyMatrix3x4(v42, v23, (float *)v37.m_Data); /*0x514270*/
    goto LABEL_16; /*0x514270*/
  }
  if ( (*(unsigned __int8 (__stdcall **)(TechnoClass *))(this->ptr_0 + 96))(this) ) /*0x513f88*/
  {
    v10 = Turret::GetTransform((LocomotionClass *)this, (float *)&v38[0].Transform_field_00, a3); /*0x51408d*/
LABEL_16:
    v24 = v10; /*0x514275*/
    qmemcpy(a2, v24, 0x30u); /*0x514285*/
    return a2; /*0x514277*/
  }
  v7 = (_DWORD *)(this->ptr_8 + 156); /*0x513f97*/
  v36[0] = *v7; /*0x513f9f*/
  v36[1] = v7[1]; /*0x513fab*/
  v36[2] = v7[2]; /*0x513fb2*/
  v8 = (unsigned __int8)Coord::To_Cell((Coord *)&dword_87F7E8, v36)->slopeIndex[0]; /*0x513fc8*/
  qmemcpy(&v37, CopyAudioData((char *)v38, v8), sizeof(v37)); /*0x513fe4*/
  v25 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(this->ptr_8 + 904), &v33) >> 10) + 1) >> 1) /*0x514016*/
                     & 0x1F)
                    - 8)
      * -0.1963495408493621;
  Matrix2D::Rotate(v37.m_Data, v25); /*0x514019*/
  if ( a3 ) /*0x514027*/
  {
    if ( *a3 != -1 ) /*0x51402e*/
    {
      *a3 = 32 * (v8 + (*a3 << 6)); /*0x51403c*/
      *a3 |= ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(this->ptr_8 + 904), &v33) >> 10) + 1) >> 1) /*0x51405c*/
           & 0x1F;
    }
  }
  qmemcpy(a2, &v37, 0x30u); /*0x514070*/
  return a2; /*0x514073*/
}



// ==== 0x005142A0  HoverLocomotionClass::ComputeAudio3DRotation_0  this=HoverLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::ComputeAudio3DRotation_0(HoverLocomotionClass *this, float *a2, _DWORD *a3)
{
  FootClass *Owner; // ecx
  float *v4; // esi
  float v6[12]; // [esp+8h] [ebp-30h] BYREF

  Owner = this->?; /*0x5142a7*/
  if ( fabs(*(float *)&Owner->?) >= 0.005 || fabs(*(float *)&Owner->?) >= 0.005 ) /*0x5142d8*/
  {
    if ( a3 ) /*0x5142dc*/
      *a3 = -1; /*0x5142de*/
  }
  v4 = Audio3D::ComputeRotation((IUnknown *)this, v6, a3); /*0x5142f0*/
  qmemcpy(a2, v4, 0x30u); /*0x5142fd*/
  return a2; /*0x5142ff*/
}



// ==== 0x00514310  HoverLocomotionClass::DeployAnimation  this=HoverLocomotionClass  sig=csp ====
char __stdcall InfantryClass::DeployAnimation(HoverLocomotionClass *this)
{
  char *v1; // edi
  FootClass *Owner; // ecx
  int v4; // eax
  FootClass *v5; // ecx
  double v6; // st7
  int v7; // eax
  FootClass *v8; // ecx
  int v9; // ebx
  __int16 v10; // bx
  int v11; // ebx
  CellStruct *v12; // eax
  bool v13; // bl
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int Member; // eax
  unsigned __int16 v20; // bx
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  bool v23; // al
  int v24; // eax
  FootClass *v25; // ecx
  int v26; // ebx
  FootClass *v27; // ecx
  FootClass *v28; // ecx
  unsigned int v29; // ebx
  unsigned int v30; // edi
  int v31; // eax
  int v32; // eax
  FootClass *v33; // ecx
  int v34; // eax
  CellClass *v35; // eax
  FootClass *v36; // ecx
  CellClass *v37; // edi
  FootClass *v38; // eax
  int v39; // ecx
  _DWORD *v40; // ebx
  char isOnMap; // bl
  FootClass *v42; // ecx
  AnimClass *v43; // eax
  int *location; // ecx
  _DWORD *Value; // eax
  FootClass *v46; // ecx
  int v47; // ecx
  int v48; // eax
  int v49; // ecx
  int *v50; // edx
  CellClass *v51; // eax
  int *v52; // ecx
  int *v53; // eax
  int v54; // edi
  _WORD *v55; // [esp+20h] [ebp-5Ch]
  double v56; // [esp+34h] [ebp-48h] BYREF
  double v57; // [esp+3Ch] [ebp-40h] BYREF
  int v58; // [esp+48h] [ebp-34h] BYREF
  int v59; // [esp+4Ch] [ebp-30h] BYREF
  int v60; // [esp+50h] [ebp-2Ch]
  int v61; // [esp+54h] [ebp-28h]
  int v62; // [esp+58h] [ebp-24h]
  double v63; // [esp+5Ch] [ebp-20h] BYREF
  int v64; // [esp+64h] [ebp-18h]
  int v65; // [esp+70h] [ebp-Ch] BYREF
  int v66; // [esp+74h] [ebp-8h]
  int v67; // [esp+78h] [ebp-4h]

  if ( (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) ) /*0x514322*/
  {
    v1 = (char *)this - 4; /*0x51432d*/
    if ( (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) ) /*0x514337*/
    {
      UpdateFootFacing((ObjectClass *)((char *)this - 4)); /*0x514344*/
      Owner = this->?; /*0x514349*/
      if ( !Owner->? ) /*0x51434c*/
        return 0; /*0x51435e*/
      v4 = (*((int (__thiscall **)(FootClass *))Owner->TechnoClass + 116))(Owner); /*0x514363*/
      v5 = this->?; /*0x514369*/
      v58 = v4; /*0x51436c*/
      LODWORD(v57) = (*((int (__thiscall **)(FootClass *))v5->TechnoClass + 334))(v5); /*0x514378*/
      v6 = (double)SLODWORD(v57) * *(double *)&this->MaxSpeed[1]; /*0x514380*/
      LOWORD(v7) = Math::RoundToInt(v6); /*0x514383*/
      v8 = this->?; /*0x514388*/
      LODWORD(v56) = v7; /*0x51438b*/
      v9 = (*((int (__thiscall **)(FootClass *, int *))v8->TechnoClass + 18))(v8, &v65); /*0x514399*/
      Int64::Equal((Int64 *)v9, &this->Dest[2]); /*0x5143a1*/
      Math::CalcAngle( /*0x5143be*/
        (double)*(int *)(v9 + 4) - (double)this->HeadToCoord[0],
        (double)this->Dest[2] - (double)*(int *)v9);
      v10 = Math::RoundToInt(v6); /*0x5143d7*/
      if ( !LODWORD(v56) /*0x514403*/
        && !abs16(*(_WORD *)ProgressTimer::GetValue((ProgressTimer *)&this->HeadToCoord[2], &v57) - v10) )
      {
        v13 = 1; /*0x514466*/
        if ( *((_DWORD *)v1 + 9) != *(_DWORD *)&stru_A8EB00.?[1436] /*0x514438*/
          || *((_DWORD *)v1 + 10) != *(_DWORD *)&stru_A8EB00.?[1440]
          || *((_DWORD *)v1 + 11) != *(_DWORD *)&stru_A8EB00.?[1444] )
        {
          v11 = *((_DWORD *)v1 + 3); /*0x51443a*/
          v55 = Coord::ToCell((Coord *)(v1 + 36), &v57); /*0x514449*/
          v12 = (CellStruct *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v11 + 440))(v11, &v56); /*0x514451*/
          if ( !(unsigned __int8)CellStruct::Equals(v12, v55) ) /*0x514459*/
            v13 = 0; /*0x514438*/
        }
        v14 = *((_DWORD *)v1 + 3); /*0x514468*/
        *((_DWORD *)v1 + 18) = 0; /*0x51446b*/
        *((_DWORD *)v1 + 19) = 1072693248; /*0x514472*/
        (*(void (__usercall **)(int@<ecx>, _DWORD, int, double@<st0>))(*(_DWORD *)v14 + 1348))(v14, 0, 1072693248, v6); /*0x514482*/
        MovementAI::StepFootClass((MovementAI *)((char *)this - 4), 0); /*0x51448c*/
        if ( v13 ) /*0x514493*/
          MovementAI::MainFootClass((MovementAI *)((char *)this - 4), 1); /*0x514499*/
        LODWORD(v57) = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 334))(this->?); /*0x5144a9*/
        LOWORD(v15) = Math::RoundToInt(v6); /*0x5144b4*/
        LODWORD(v56) = v15; /*0x5144b9*/
      }
      v16 = this->?->?[0]; /*0x5144ce*/
      v17 = this->?->?[2]; /*0x5144d5*/
      v60 = this->?->?[1] - this->HeadToCoord[0]; /*0x5144d8*/
      v67 = v17; /*0x5144e0*/
      v59 = v16 - this->Dest[2]; /*0x5144e9*/
      Math::Sqrt((double)v59 * (double)v59 + (double)v60 * (double)v60); /*0x514502*/
      LOWORD(v18) = Math::RoundToInt(v6); /*0x51450a*/
      if ( SLODWORD(v56) >= v18 ) /*0x514513*/
      {
        this->?->frozenStill = 1; /*0x51451e*/
        this->?->FootClass_field_bool_6B7 = 0; /*0x514528*/
        LOBYTE(this->HoverLocomotionClass_field_6C) = 0; /*0x514531*/
        MovementAI::StepFootClass((MovementAI *)((char *)this - 4), 0); /*0x514535*/
        if ( this->?->pathDirections[0] == -1 /*0x51456a*/
          && this->? == *(_DWORD *)&stru_A8EB00.?[1436]
          && this->Dest[0] == *(_DWORD *)&stru_A8EB00.?[1440]
          && this->Dest[1] == *(_DWORD *)&stru_A8EB00.?[1444] )
        {
          this->Dest[2] = *(_DWORD *)&stru_A8EB00.?[1436]; /*0x51456f*/
          this->HeadToCoord[0] = *(_DWORD *)&stru_A8EB00.?[1440]; /*0x514578*/
          this->HeadToCoord[1] = *(_DWORD *)&stru_A8EB00.?[1444]; /*0x514581*/
        }
        Member = Team::GetMember((Team *)this->?, 0); /*0x514589*/
        v20 = *(_WORD *)&stru_A8EB00.?[1404]; /*0x51458e*/
        LODWORD(v57) = *(_DWORD *)&stru_A8EB00.?[1404]; /*0x514596*/
        if ( Member ) /*0x51459a*/
        {
          v21 = (_DWORD *)(*(int (__thiscall **)(int, int *, FootClass *))(*(_DWORD *)Member + 76))( /*0x5145a9*/
                            Member,
                            &v65,
                            this->?);
          LOWORD(v57) = *v21 / 256; /*0x5145bc*/
          WORD1(v57) = v21[1] / 256; /*0x5145d0*/
          v20 = LOWORD(v57); /*0x5145d5*/
        }
        v22 = (_DWORD *)(*((int (__thiscall **)(FootClass *, int *))this->?->TechnoClass + 110))(this->?, &v59); /*0x5145e7*/
        v23 = *v22 == __PAIR32__(WORD1(v57), v20); /*0x5145f0*/
        if ( this->? != *(_DWORD *)&stru_A8EB00.?[1436] /*0x51462c*/
          || this->Dest[0] != *(_DWORD *)&stru_A8EB00.?[1440]
          || this->Dest[1] != *(_DWORD *)&stru_A8EB00.?[1444]
          || v23 )
        {
          v24 = MovementAI::MainFootClass((MovementAI *)((char *)this - 4), 1); /*0x514636*/
          v25 = this->?; /*0x51463b*/
          v26 = v24; /*0x51463e*/
          if ( !v25->? || v25->? || v25->? ) /*0x51465c*/
            return 7; /*0x5149f4*/
          if ( !v24 /*0x514696*/
            && this->Dest[2] == *(_DWORD *)&stru_A8EB00.?[1436]
            && this->HeadToCoord[0] == *(_DWORD *)&stru_A8EB00.?[1440]
            && this->HeadToCoord[1] == *(_DWORD *)&stru_A8EB00.?[1444] )
          {
            v65 = v25->?[0]; /*0x5146a4*/
            v66 = v25->?[1]; /*0x5146ab*/
            v67 = v25->?[2]; /*0x5146b2*/
            (*((void (__thiscall **)(FootClass *, int *))v25->TechnoClass + 60))(v25, &v65); /*0x5146bd*/
            (*((void (__thiscall **)(FootClass *, int))this->?->TechnoClass + 99))(this->?, 2); /*0x5146ca*/
            v25 = this->?; /*0x5146d0*/
            if ( !v25->? || v25->? || v25->? ) /*0x5146e7*/
              return 0; /*0x5146f9*/
          }
          if ( v26 == 7 ) /*0x5146ff*/
          {
            if ( v25->tubeIndex >= 0 ) /*0x51470d*/
              return 0; /*0x514717*/
            (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)v1 + 3) + 1152))(*((_DWORD *)v1 + 3), 0, 1); /*0x514723*/
            *((_DWORD *)v1 + 20) = 0; /*0x51472b*/
            *((_DWORD *)v1 + 18) = 0; /*0x51472e*/
            *((_DWORD *)v1 + 21) = 0; /*0x514731*/
            *((_DWORD *)v1 + 19) = 0; /*0x514734*/
            (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)v1 + 3) + 1348))(*((_DWORD *)v1 + 3), 0, 0); /*0x514740*/
          }
          else if ( v26 ) /*0x51497c*/
          {
            v39 = *((_DWORD *)v1 + 3); /*0x514982*/
            *((_DWORD *)v1 + 20) = 0; /*0x514985*/
            *((_DWORD *)v1 + 18) = 0; /*0x514988*/
            *((_DWORD *)v1 + 21) = 0; /*0x51498b*/
            *((_DWORD *)v1 + 19) = 0; /*0x51498e*/
            (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v39 + 1348))(v39, 0, 0); /*0x514995*/
            v40 = v1 + 36; /*0x5149a4*/
            if ( *((_DWORD *)v1 + 9) != *(_DWORD *)&stru_A8EB00.?[1436] /*0x5149c1*/
              || *((_DWORD *)v1 + 10) != *(_DWORD *)&stru_A8EB00.?[1440]
              || *((_DWORD *)v1 + 11) != *(_DWORD *)&stru_A8EB00.?[1444] )
            {
              (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)v1 + 3) + 244))(*((_DWORD *)v1 + 3), v40); /*0x5149cb*/
              *v40 = *(_DWORD *)&stru_A8EB00.?[1436]; /*0x5149d7*/
              *((_DWORD *)v1 + 10) = *(_DWORD *)&stru_A8EB00.?[1440]; /*0x5149df*/
              *((_DWORD *)v1 + 11) = *(_DWORD *)&stru_A8EB00.?[1444]; /*0x5149e7*/
            }
            goto LABEL_66; /*0x5149ea*/
          }
        }
      }
      if ( SLODWORD(v56) > 0 ) /*0x51474c*/
      {
        v27 = this->?; /*0x514752*/
        v65 = v27->?[0]; /*0x514761*/
        v66 = v27->?[1]; /*0x514768*/
        v67 = v27->?[2]; /*0x51476f*/
        if ( (*((unsigned __int8 (__thiscall **)(FootClass *))v27->TechnoClass + 48))(v27) /*0x5147a2*/
          && (this->Dest[2] != *(_DWORD *)&stru_A8EB00.?[1436]
           || this->HeadToCoord[0] != *(_DWORD *)&stru_A8EB00.?[1440]
           || this->HeadToCoord[1] != *(_DWORD *)&stru_A8EB00.?[1444]) )
        {
          v28 = this->?; /*0x5147a4*/
          v63 = *(double *)v28->?; /*0x5147b3*/
          v64 = v28->?[2]; /*0x5147c1*/
          (*((void (__thiscall **)(FootClass *, double *))v28->TechnoClass + 61))(v28, &v63); /*0x5147cc*/
          this->?->frozenStill = 0; /*0x5147d5*/
          this->?->FootClass_field_bool_6B7 = 0; /*0x5147df*/
        }
        v61 = v65; /*0x5147f2*/
        v62 = v66; /*0x5147fa*/
        v57 = (double)(*(__int16 *)ProgressTimer::GetValue((ProgressTimer *)&this->HeadToCoord[2], &v59) - 0x3FFF) /*0x51481a*/
            * -0.00009587672516830327;
        v29 = HIDWORD(v57); /*0x514822*/
        v30 = LODWORD(v57); /*0x514826*/
        v56 = (double)SLODWORD(v56); /*0x51482c*/
        v63 = (double)v62; /*0x514834*/
        Math::SinCos(v57); /*0x514838*/
        LOWORD(v31) = Math::RoundToInt(v6); /*0x514845*/
        LODWORD(v57) = v31; /*0x51484c*/
        Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v29, v30))); /*0x514850*/
        LOWORD(v32) = Math::RoundToInt(v6 * v56 + (double)v61); /*0x514860*/
        v33 = this->?; /*0x514865*/
        v65 = v32; /*0x51486e*/
        v66 = LODWORD(v57); /*0x514878*/
        v34 = v33->?[0]; /*0x51487c*/
        HIDWORD(v63) = v33->?[1]; /*0x514881*/
        v64 = v33->?[2]; /*0x514888*/
        WORD1(v56) = SHIDWORD(v63) / 256; /*0x5148a7*/
        if ( (unsigned __int16)(v65 / 256) == (unsigned __int16)(v34 / 256) /*0x5148d9*/
          && (unsigned __int16)(SLODWORD(v57) / 256) == WORD1(v56) )
        {
          isOnMap = v33->?; /*0x5149f7*/
          v33->? = 0; /*0x5149fa*/
          (*((void (__thiscall **)(FootClass *, int *))this->?->TechnoClass + 109))(this->?, &v65); /*0x514a08*/
          ObjectClass::SetAnim((ObjectClass *)this->?, v58); /*0x514a16*/
          this->?->? = isOnMap; /*0x514a1e*/
        }
        else
        {
          (*((void (__thiscall **)(FootClass *, _DWORD))v33->TechnoClass + 73))(v33, 0); /*0x5148e3*/
          (*((void (__thiscall **)(FootClass *, int *))this->?->TechnoClass + 109))(this->?, &v65); /*0x5148f3*/
          ObjectClass::SetAnim((ObjectClass *)this->?, v58); /*0x514901*/
          v35 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v65); /*0x514910*/
          v36 = this->?; /*0x514915*/
          v37 = v35; /*0x514918*/
          if ( !v36->? /*0x51493f*/
            && (v35->flags[0] & 0x100) != 0
            && (*((int (__thiscall **)(FootClass *))v36->TechnoClass + 114))(v36) >= *(int *)&stru_A8EB00.?[1488] )
          {
            this->?->? = 1; /*0x514944*/
          }
          v38 = this->?; /*0x51494b*/
          if ( v38->? == 1 && (v37->flags[0] & 0x100) == 0 ) /*0x51495d*/
            v38->? = 0; /*0x51495f*/
          (*((void (__thiscall **)(FootClass *, int))this->?->TechnoClass + 73))(this->?, 1); /*0x51496d*/
        }
      }
    }
  }
LABEL_66:
  if ( (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 128))(this) ) /*0x514a24*/
  {
    if ( !(*(_DWORD *)&stru_A8EB00.?[416] % 10) ) /*0x514a3d*/
    {
      v42 = this->?; /*0x514a47*/
      if ( !v42->? && *(_DWORD *)((*((int (__thiscall **)(FootClass *))v42->TechnoClass + 111))(v42) + 236) == 2 ) /*0x514a63*/
      {
        if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 148) ) /*0x514a6a*/
        {
          v43 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x514a79*/
          if ( v43 ) /*0x514a83*/
          {
            location = this->?->?; /*0x514a8a*/
            v65 = *location; /*0x514a9d*/
            v66 = location[1]; /*0x514aa4*/
            v67 = location[2]; /*0x514ab0*/
            AnimClass::ctor( /*0x514ac3*/
              v43,
              *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 148),
              &v65,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
      }
    }
  }
  BuildingLightClass::UpdateOscillation((BuildingLightClass *)((char *)this - 4)); /*0x514acb*/
  if ( LOBYTE(this->CurrentWobbles[1]) )
  {
    if ( !(*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 96))(this) ) /*0x514ade*/
      goto LABEL_81; /*0x514ade*/
    Value = ProgressTimer::GetValue((ProgressTimer *)this->?->?, &v59); /*0x514af3*/
    v46 = this->?; /*0x514b07*/
    LOWORD(v58) = *(_WORD *)Value + (*(_WORD *)&this->HoverLocomotionClass_field_bool_68 << 8); /*0x514b0a*/
    FacingClass::Set_SyncLog((char *)v46->?, &v58); /*0x514b1d*/
    v47 = *(_DWORD *)&this->HoverLocomotionClass_field_bool_68; /*0x514b22*/
    v48 = abs32(v47); /*0x514b2a*/
    if ( v48 >= 1 ) /*0x514b2f*/
      v48 = 1; /*0x514b31*/
    v49 = v47 >= 0 ? v47 - v48 : v48 + v47;
    *(_DWORD *)&this->HoverLocomotionClass_field_bool_68 = v49; /*0x514b42*/
    if ( !v49 ) /*0x514b47*/
LABEL_81:
      LOBYTE(this->CurrentWobbles[1]) = 0; /*0x514b49*/
    if ( !LOBYTE(this->CurrentWobbles[1]) ) /*0x514b4d*/
    {
      v50 = this->?->?; /*0x514b5b*/
      v65 = *v50; /*0x514b63*/
      v66 = v50[1]; /*0x514b6f*/
      v67 = v50[2]; /*0x514b7b*/
      v51 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v65); /*0x514b7f*/
      BuildingClass::CreateIdleAnim((BuildingClass *)v51); /*0x514b86*/
      v52 = this->?->?; /*0x514b8e*/
      v65 = *v52; /*0x514b96*/
      v66 = v52[1]; /*0x514ba2*/
      v67 = v52[2]; /*0x514ba9*/
      if ( Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v65)->landType == 2 ) /*0x514bbe*/
      {
        v53 = this->?->?; /*0x514bc3*/
        v65 = *v53; /*0x514bcc*/
        v66 = v53[1]; /*0x514bd3*/
        v54 = v53[2]; /*0x514bd7*/
        v65 = *v53; /*0x514bdc*/
        v66 = v53[1]; /*0x514be7*/
        v67 = v53[2]; /*0x514bf4*/
        if ( v54 < *(_DWORD *)&stru_A8EB00.?[1500] + Cell::GetGroundHeight(&v65) ) /*0x514c05*/
          (*((void (__thiscall **)(FootClass *))this->?->TechnoClass + 59))(this->?); /*0x514c0c*/
      }
    }
  }
  return (*(char (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this); /*0x514358*/
}



// ==== 0x00514C30  JumpjetLocomotionClass::HasScoreDisplayChanged  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::HasScoreDisplayChanged(JumpjetLocomotionClass *this)
{
  return this->? != *(_DWORD *)&stru_A8EB00.?[1436] /*0x514c6a*/
      || this->TurnRate != *(_DWORD *)&stru_A8EB00.?[1440]
      || this->Speed != *(_DWORD *)&stru_A8EB00.?[1444]
      || LODWORD(this->Climb) != *(_DWORD *)&stru_A8EB00.?[1436]
      || LODWORD(this->Crash) != *(_DWORD *)&stru_A8EB00.?[1440]
      || this->Height != *(_DWORD *)&stru_A8EB00.?[1444];
}



// ==== 0x00514C80  HoverLocomotionClass::ComputeFloatExpression_2  this=HoverLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::ComputeFloatExpression_2(HoverLocomotionClass *this)
{
  return (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) /*0x514ca4*/
      && *(double *)&this->LocomotionFacing[5] != 0.0;
}



// ==== 0x00514CB0  JumpjetLocomotionClass::HasScoreDisplayChanged_514CB0  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::HasScoreDisplayChanged_514CB0(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v2; // ecx
  int v3; // edx
  int TurnRate; // edx
  int Speed; // eax

  if ( this->? == *(_DWORD *)&stru_A8EB00.?[1436] /*0x514cd9*/
    && (v2 = *(_DWORD *)&stru_A8EB00.?[1440], this->TurnRate == *(_DWORD *)&stru_A8EB00.?[1440])
    && (v3 = *(_DWORD *)&stru_A8EB00.?[1444], this->Speed == *(_DWORD *)&stru_A8EB00.?[1444]) )
  {
    *a2 = *(_DWORD *)&stru_A8EB00.?[1436]; /*0x514cff*/
    a2[1] = v2; /*0x514d01*/
    a2[2] = v3; /*0x514d04*/
    return a2; /*0x514cf9*/
  }
  else
  {
    TurnRate = this->TurnRate; /*0x514ce2*/
    Speed = this->Speed; /*0x514ce5*/
    *a2 = this->?; /*0x514cea*/
    a2[1] = TurnRate; /*0x514cec*/
    a2[2] = Speed; /*0x514cef*/
    return a2; /*0x514cf2*/
  }
}



// ==== 0x00514D10  JumpjetLocomotionClass::HasScoreDisplayChanged_514D10  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::HasScoreDisplayChanged_514D10(JumpjetLocomotionClass *this, _DWORD *a2)
{
  float Crash; // edx
  int Height; // eax
  FootClass *Owner; // edx
  int *location; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi

  if ( LODWORD(this->Climb) == *(_DWORD *)&stru_A8EB00.?[1436] /*0x514d3b*/
    && LODWORD(this->Crash) == *(_DWORD *)&stru_A8EB00.?[1440]
    && this->Height == *(_DWORD *)&stru_A8EB00.?[1444] )
  {
    Owner = this->?; /*0x514d5b*/
    location = Owner->?; /*0x514d64*/
    v7 = Owner->?[0]; /*0x514d66*/
    v8 = Owner->?[1]; /*0x514d68*/
    v9 = location[2]; /*0x514d6b*/
    *a2 = v7; /*0x514d74*/
    a2[1] = v8; /*0x514d76*/
    a2[2] = v9; /*0x514d79*/
    return a2; /*0x514d6e*/
  }
  else
  {
    Crash = this->Crash; /*0x514d44*/
    Height = this->Height; /*0x514d47*/
    *a2 = LODWORD(this->Climb); /*0x514d4c*/
    *((float *)a2 + 1) = Crash; /*0x514d4e*/
    a2[2] = Height; /*0x514d51*/
    return a2; /*0x514d54*/
  }
}



// ==== 0x00514D90  HoverLocomotionClass::SetMovementTarget  this=HoverLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::SetMovementTarget(HoverLocomotionClass *this, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // ebx
  HoverLocomotionClass *v6; // esi
  int v7; // ebp
  int *p_RefCount; // edi
  int *v9; // eax
  _DWORD *result; // eax
  int v11; // edi
  MovementAI *v12; // esi
  int v13; // edi
  MovementAI *p_HoverLocomotionClass_field_bool_70; // esi
  int v15; // edi
  int v16; // ebx
  _WORD *v17; // eax
  bool v18; // bl
  int m_State; // ecx
  _DWORD v20[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = a4; /*0x514d93*/
  v5 = a2; /*0x514d99*/
  v6 = this; /*0x514d9e*/
  v7 = a3; /*0x514da2*/
  p_RefCount = &this->?; /*0x514da7*/
  v9 = &this->?; /*0x514daa*/
  this->? = a2; /*0x514dac*/
  v9[1] = v7; /*0x514dae*/
  v9[2] = v4; /*0x514db1*/
  result = (_DWORD *)(*((int (__thiscall **)(FootClass *))v6->?->TechnoClass + 224))(v6->?); /*0x514db9*/
  if ( !(_BYTE)result ) /*0x514dc1*/
  {
    if ( (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)v6->LocomotionClass + 96))(v6) /*0x514de4*/
      && (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)v6->LocomotionClass + 100))(v6)
      && HouseClass::IonSensitivesShouldBeOffline() )
    {
      (*(void (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)v6->LocomotionClass + 92))(v6); /*0x514df0*/
    }
    v6->Dest[1] = Cell::GetGroundHeight(p_RefCount); /*0x514e02*/
    v11 = a4; /*0x514e05*/
    v20[0] = v5; /*0x514e0f*/
    v20[1] = v7; /*0x514e13*/
    v20[2] = a4; /*0x514e17*/
    result = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v20); /*0x514e1b*/
    if ( (result[80] & 0x100) != 0 ) /*0x514e29*/
    {
      result = (_DWORD *)(*(_DWORD *)&stru_A8EB00.?[1488] + v6->Dest[1]); /*0x514e34*/
      v6->Dest[1] = (int)result; /*0x514e36*/
    }
    if ( v5 != *(_DWORD *)&stru_A8EB00.?[1436] /*0x514e4f*/
      || v7 != *(_DWORD *)&stru_A8EB00.?[1440]
      || v11 != *(_DWORD *)&stru_A8EB00.?[1444] )
    {
      result = (_DWORD *)(*(int (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)v6->LocomotionClass + 96))(v6); /*0x514e58*/
      if ( (_BYTE)result ) /*0x514e5d*/
      {
        if ( (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)v6->LocomotionClass + 128))(v6) ) /*0x514e66*/
        {
          result = *(_DWORD **)&stru_A8EB00.?[1436]; /*0x514ea1*/
          if ( v6->Dest[2] == *(_DWORD *)&stru_A8EB00.?[1436] /*0x514ecd*/
            && v6->HeadToCoord[0] == *(_DWORD *)&stru_A8EB00.?[1440]
            && v6->HeadToCoord[1] == *(_DWORD *)&stru_A8EB00.?[1444] )
          {
            v13 = v6->Dest[2]; /*0x514ed3*/
            p_HoverLocomotionClass_field_bool_70 = (MovementAI *)&v6[-1].HoverLocomotionClass_field_bool_70; /*0x514ed6*/
            v18 = 1; /*0x514f28*/
            if ( v13 != *(_DWORD *)&stru_A8EB00.?[1436] /*0x514ee5*/
              || p_HoverLocomotionClass_field_bool_70[1].m_State != *(_DWORD *)&stru_A8EB00.?[1440]
              || p_HoverLocomotionClass_field_bool_70[1].MovementAI_field_10 != *(_DWORD *)&stru_A8EB00.?[1444] )
            {
              v15 = p_HoverLocomotionClass_field_bool_70[1].m_Target[2] / 256; /*0x514f0d*/
              v16 = p_HoverLocomotionClass_field_bool_70[1].m_State / 256; /*0x514f10*/
              v17 = (_WORD *)(*(int (__thiscall **)(int, HoverLocomotionClass **))(*(_DWORD *)p_HoverLocomotionClass_field_bool_70->m_State /*0x514f13*/
                                                                                 + 440))(
                               p_HoverLocomotionClass_field_bool_70->m_State,
                               &this);
              if ( *v17 != (_WORD)v15 || v17[1] != (_WORD)v16 ) /*0x514f22*/
                v18 = 0; /*0x514ee5*/
            }
            m_State = p_HoverLocomotionClass_field_bool_70->m_State; /*0x514f2a*/
            p_HoverLocomotionClass_field_bool_70[2].MovementAI_field_10 = 0; /*0x514f2d*/
            p_HoverLocomotionClass_field_bool_70[2].MovementAI_field_14 = 1072693248; /*0x514f34*/
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)m_State + 1348))(m_State, 0, 1072693248); /*0x514f44*/
            result = (_DWORD *)MovementAI::StepFootClass(p_HoverLocomotionClass_field_bool_70, 0); /*0x514f4e*/
            if ( v18 ) /*0x514f55*/
              return (_DWORD *)MovementAI::MainFootClass(p_HoverLocomotionClass_field_bool_70, 1); /*0x514f5b*/
          }
        }
        else
        {
          (*((void (__thiscall **)(FootClass *, _DWORD, int))v6->?->TechnoClass + 337))(v6->?, 0, 1072693248); /*0x514e7c*/
          v12 = (MovementAI *)&v6[-1].HoverLocomotionClass_field_bool_70; /*0x514e82*/
          MovementAI::StepFootClass(v12, 0); /*0x514e89*/
          return (_DWORD *)MovementAI::MainFootClass(v12, 1); /*0x514e92*/
        }
      }
    }
  }
  return result; /*0x514e97*/
}



// ==== 0x00514F70  MovementAI::MainFootClass  this=MovementAI  sig=csp ====
int __thiscall MovementAI::MainFootClass(MovementAI *this, char a2)
{
  MovementAI *v3; // esi
  int result; // eax
  int *m_State; // ecx
  int *v6; // ecx
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  int v12; // edx
  int v13; // esi
  int v14; // edi
  CellClass *v15; // eax
  int *Coords; // eax
  int v17; // edx
  int v18; // ecx
  _DWORD *v19; // esi
  int v20; // edx
  int *v21; // eax
  int *v22; // edi
  int v23; // eax
  int v24; // edx
  int v25; // edi
  int v26; // esi
  int *v27; // ecx
  int GroundHeight; // edi
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // ecx
  _WORD *v33; // eax
  int v34; // edi
  __int16 v35; // dx
  int v36; // eax
  int *v37; // ecx
  CellClass *v38; // eax
  int v39; // eax
  int v40; // eax
  int *v41; // eax
  CellClass *v42; // eax
  int v43; // ecx
  ObjectClass *v44; // ecx
  int (__thiscall **ptr_0)(int, void *, int, int, _DWORD, int); // edi
  void *v46; // eax
  CellC... [28330 chars total]



// ==== 0x00515ED0  ObjectClass::UpdateFootFacing  this=ObjectClass  sig=csp ====
void __thiscall UpdateFootFacing(TechnoClass *this)
{
  double v1; // st7
  int *p_vtable1; // ebp
  int *p_occupant; // edi
  int v5; // ebx
  double v6; // st7
  _DWORD *Value; // eax
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  _DWORD *v12; // eax
  int referenceCount; // ebx
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  char estimatedHealth; // al
  int ptr_C; // eax
  int v21; // ecx
  double v22; // st7
  double v23; // st6
  char v25; // c0
  double v26; // st7
  unsigned __int8 v28; // c0
  unsigned __int8 v29; // c3
  double v30; // st7
  _DWORD *v31; // ecx
  int v32; // ebx
  int owningHouseIndex; // ebp
  int fallRate; // edi
  int v35; // eax
  int v36; // eax
  int v37; // edx
  int *v38; // eax
  __int16 v39; // ax
  int v40; // ecx
  int v41; // [esp+34h] [ebp-24h] BYREF
  int v42; // [esp+38h] [ebp-20h]
  int v43; // [esp+3Ch] [ebp-1Ch] BYREF
  int v44; // [esp+40h] [ebp-18h] BYREF
  int v45; // [esp+44h] [ebp-14h]
  int v46; // [esp+48h] [ebp-10h]
  _BYTE v47[12]; // [esp+4Ch] [ebp-Ch] BYREF

  p_vtable1 = &this->ptr_4; /*0x515ee2*/
  if ( !(*(unsigned __int8 (__stdcall **)(int *))(this->ptr_4 + 16))(&this->ptr_4) /*0x515f17*/
    || (p_occupant = &this->occupant, this->occupant == dword_A8F180)
    && this->owningHouseIndex == dword_A8F184
    && this->fallRate == dword_A8F188 )
  {
    if ( (*(unsigned __int8 (__stdcall **)(int *))(*p_vtable1 + 16))(p_vtable1) /*0x5162e8*/
      && this->occupant == dword_A8F180
      && this->owningHouseIndex == dword_A8F184
      && this->fallRate == dword_A8F188 )
    {
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->ptr_C + 1348))(this->ptr_C, 0, 1072693248); /*0x5162f6*/
      MovementAI::StepFootClass((MovementAI *)this, 0); /*0x516300*/
      MovementAI::MainFootClass((MovementAI *)this, 1); /*0x516309*/
    }
  }
  else
  {
    v5 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)this->ptr_C + 72))(this->ptr_C, &v44); /*0x515f2a*/
    Int64::Equal((Int64 *)v5, &this->occupant); /*0x515f2f*/
    Math::CalcAngle((double)*(int *)(v5 + 4) - (double)this->owningHouseIndex, (double)*p_occupant - (double)*(int *)v5); /*0x515f4b*/
    v6 = (v1 - 1.570796326794897) * -10430.06004058427; /*0x515f59*/
    LOWORD(v41) = Math::RoundToInt(v6); /*0x515f64*/
    if ( LOBYTE(this->estimatedHealth) ) /*0x515f69*/
      FacingClass::Set_SyncLog((char *)&this->nextObject, &v41); /*0x515f90*/
    else
      FacingClass::Update((char *)&this->nextObject, &v41); /*0x515f82*/
    if ( (*(unsigned __int8 (__stdcall **)(int *))(*p_vtable1 + 96))(p_vtable1) /*0x515fd1*/
      && (Value = ProgressTimer::GetValue((ProgressTimer *)&this->nextObject, &v43),
          abs16(*(_WORD *)Value - v41) <= 0x2000u)
      || LOBYTE(this->estimatedHealth) )
    {
      if ( this->nextArrayIndex == dword_A8F180 /*0x515fff*/
        && this->referenceCount == dword_A8F184
        && this->NeedsSaveOrLink == dword_A8F188 )
      {
        v8 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->ptr_C + 72))(this->ptr_C, v47); /*0x51600b*/
        v9 = *v8 - *p_occupant; /*0x516015*/
        v10 = v8[1] - this->owningHouseIndex; /*0x51601d*/
        v11 = v8[2] - this->fallRate; /*0x516022*/
        v44 = v9; /*0x516024*/
        v45 = v10; /*0x51602c*/
        v46 = v11; /*0x516030*/
        if ( (int)Coord::Length((Coord *)&v44) < 256 ) /*0x51603e*/
          goto LABEL_19; /*0x51603e*/
      }
      if ( this->nextArrayIndex == dword_A8F180 /*0x516068*/
        && this->referenceCount == dword_A8F184
        && this->NeedsSaveOrLink == dword_A8F188 )
      {
        goto LABEL_20; /*0x516068*/
      }
      v12 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->ptr_C + 72))(this->ptr_C, v47); /*0x516074*/
      referenceCount = this->referenceCount; /*0x51607c*/
      v14 = *v12 - this->nextArrayIndex; /*0x51607f*/
      v15 = v12[1]; /*0x516081*/
      v16 = v12[2]; /*0x516084*/
      v44 = v14; /*0x516087*/
      v17 = v16 - this->NeedsSaveOrLink; /*0x516090*/
      v45 = v15 - referenceCount; /*0x516092*/
      v46 = v17; /*0x516096*/
      Math::Sqrt( /*0x5160c2*/
        (double)v14 * (double)v14
      + (double)v17 * (double)v17
      + (double)(v15 - referenceCount) * (double)(v15 - referenceCount));
      LOWORD(v18) = Math::RoundToInt(v6); /*0x5160ca*/
      if ( v18 >= 256 ) /*0x5160d4*/
      {
LABEL_20:
        estimatedHealth = this->estimatedHealth; /*0x5160e6*/
        this->ambientSoundController[3] = 0; /*0x5160e9*/
        this->ambientSoundController[4] = 1072693248; /*0x5160f2*/
        if ( estimatedHealth ) /*0x5160f5*/
        {
          this->customSound_controller[0] = 0; /*0x5160f7*/
          this->customSound_controller[1] = 1072693248; /*0x5160fe*/
        }
      }
      else
      {
LABEL_19:
        this->ambientSoundController[3] = 0; /*0x5160d6*/
        this->ambientSoundController[4] = 1071644672; /*0x5160dd*/
      }
    }
    else
    {
      this->ambientSoundController[3] = 0; /*0x516105*/
      this->ambientSoundController[4] = 0; /*0x516108*/
    }
    if ( *(double *)&this->ambientSoundController[3] > 0.0 ) /*0x516119*/
    {
      ptr_C = this->ptr_C; /*0x51611b*/
      this->customSound_controller[2] = 0; /*0x51611e*/
      this->customSound_controller[3] = 1072693248; /*0x516125*/
      v21 = *(_DWORD *)(ptr_C + 1504); /*0x516128*/
      if ( v21 != -1 && v21 == *(_DWORD *)(ptr_C + 1508) ) /*0x516139*/
        *(_QWORD *)&this->customSound_controller[2] = *(_QWORD *)dword_8871E0->HoverBoost; /*0x516149*/
    }
    v22 = *(double *)&this->customSound_controller[2] * *(double *)&this->ambientSoundController[3]; /*0x516155*/
    if ( v22 > 1.0 ) /*0x516165*/
      v22 = 1.0; /*0x516169*/
    if ( v22 > *(double *)this->customSound_controller ) /*0x516177*/
    {
      v23 = 1.0 / (*(double *)dword_8871E0->HoverAcceleration * 900.0) + *(double *)this->customSound_controller; /*0x516191*/
      *(double *)this->customSound_controller = v23; /*0x516196*/
      if ( !v25 ) /*0x51619e*/
        v23 = v22; /*0x5161a2*/
      *(double *)this->customSound_controller = v23; /*0x5161a4*/
    }
    if ( v22 < *(double *)this->customSound_controller ) /*0x5161af*/
    {
      v26 = *(double *)this->customSound_controller - 1.0 / (*(double *)dword_8871E0->HoverBrake * 900.0); /*0x5161c9*/
      *(double *)this->customSound_controller = v26; /*0x5161d2*/
      if ( v28 | v29 ) /*0x5161d7*/
        v26 = 0.0; /*0x5161de*/
      *(double *)this->customSound_controller = v26; /*0x5161e4*/
    }
    v30 = *(double *)&this->ambientSoundController[3]; /*0x5161e7*/
    if ( v30 > 0.0 && !LOBYTE(this->estimatedHealth) ) /*0x5161fb*/
    {
      v31 = (_DWORD *)this->ptr_C; /*0x516206*/
      v32 = *p_occupant; /*0x516209*/
      owningHouseIndex = this->owningHouseIndex; /*0x51620b*/
      fallRate = this->fallRate; /*0x51620e*/
      v35 = v31[376]; /*0x516211*/
      v44 = v32; /*0x516217*/
      v45 = owningHouseIndex; /*0x51621e*/
      if ( v35 != -1 && v35 != 8 ) /*0x516227*/
      {
        v36 = v35 & 7; /*0x516229*/
        v46 = fallRate; /*0x51622c*/
        v37 = dword_89F6DC[2 * v36]; /*0x51623e*/
        v44 = v32 + dword_89F6D8[2 * v36]; /*0x516245*/
        v45 = owningHouseIndex + v37; /*0x516249*/
      }
      v38 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v31 + 72))(v31, v47); /*0x516254*/
      v42 = *v38; /*0x516260*/
      Math::CalcAngle((double)v38[1] - (double)v45, (double)v44 - (double)v42); /*0x516279*/
      v39 = Math::RoundToInt((v30 - 1.570796326794897) * -10430.06004058427); /*0x51628d*/
      v40 = this->ptr_C; /*0x516292*/
      LOWORD(v42) = v39; /*0x516295*/
      v43 = v42; /*0x5162a9*/
      FacingClass::Update((char *)(v40 + 904), &v43); /*0x5162ad*/
    }
  }
}



// ==== 0x00516320  HoverLocomotionClass::HasScoreDisplayChanged  this=HoverLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::HasScoreDisplayChanged_516320(HoverLocomotionClass *this)
{
  _DWORD *result; // eax

  result = this->LocomotionClass; /*0x516320*/
  if ( this->? != this->Dest[2] || this->Dest[0] != this->HeadToCoord[0] || this->Dest[1] != this->HeadToCoord[1] ) /*0x516340*/
  {
    this->? = *(_DWORD *)&stru_A8EB00.?[1436]; /*0x516348*/
    this->Dest[0] = *(_DWORD *)&stru_A8EB00.?[1440]; /*0x516351*/
    this->Dest[1] = *(_DWORD *)&stru_A8EB00.?[1444]; /*0x51635a*/
    result = &this->?->TechnoClass; /*0x51635d*/
    result[376] = -1; /*0x516360*/
  }
  return result; /*0x51636a*/
}



// ==== 0x00516370  HoverLocomotionClass::UpdateFacingDirection_0  this=HoverLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::UpdateFacingDirection_0(HoverLocomotionClass *this, int a2)
{
  return FacingClass::Update((char *)this->?->?, &a2); /*0x51638f*/
}



// ==== 0x005163B0  MovementAI::MarkOccupiedPathCell  this=MovementAI  sig=csp ====
char __thiscall MovementAI::MarkOccupiedPathCell(MovementAI *this)
{
  double v1; // st7
  int m_State; // eax
  int v4; // ecx
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // eax
  _DWORD *v10; // ecx
  int v11; // [esp+18h] [ebp-14h]
  int v12; // [esp+1Ch] [ebp-10h]
  _BYTE v13[12]; // [esp+20h] [ebp-Ch] BYREF

  if ( !(*(unsigned __int8 (__stdcall **)(int *))(this->m_Target[1] + 16))(&this->m_Target[1]) ) /*0x5163bd*/
    return 0; /*0x5163bd*/
  m_State = this->m_State; /*0x5163c8*/
  if ( *(_DWORD *)(m_State + 1504) == -1 ) /*0x5163d2*/
    return 0; /*0x5163d2*/
  v4 = *(_DWORD *)(m_State + 1444); /*0x5163d8*/
  if ( v4 && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 1 /*0x516405*/
    || (v5 = *(_DWORD *)(this->m_State + 1444)) != 0 && (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 15 )
  {
    v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->m_State + 72))(this->m_State, v13); /*0x516415*/
    v11 = v6[1] - *((_DWORD *)this + 7); /*0x516436*/
    v12 = v6[2] - this->u32_8; /*0x51643a*/
    Math::Sqrt( /*0x516463*/
      (double)(*v6 - this->MovementAI_field_18) * (double)(*v6 - this->MovementAI_field_18)
    + (double)v11 * (double)v11
    + (double)v12 * (double)v12);
    LOWORD(v7) = Math::RoundToInt(v1); /*0x51646b*/
    v8 = v7 / 256; /*0x516479*/
    if ( v8 < 24 ) /*0x51647f*/
    {
      *(_DWORD *)(this->m_State + 4 * v8 + 1504) = -1; /*0x516485*/
      return 1; /*0x516495*/
    }
  }
  v10 = (_DWORD *)this->m_State; /*0x516496*/
  if ( !v10[173] || !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v10 + 940))(v10, v10[173]) ) /*0x5164a6*/
    return 0; /*0x5164c4*/
  *(_DWORD *)(this->m_State + 1504) = -1; /*0x5164b4*/
  return 1; /*0x516484*/
}



// ==== 0x005164D0  MovementAI::StepFootClass  this=MovementAI  sig=csp ====
int __thiscall MovementAI::StepFootClass(MovementAI *this, int a2)
{
  _DWORD *m_State; // ecx
  int *p_MovementAI_field_18; // edi
  int result; // eax
  int v6; // ebp
  int v7; // ebx
  __int64 v8; // rax
  int v9; // ebp
  int v10; // ebx
  _WORD *v11; // eax
  __int64 v12; // rax
  int v13; // ecx
  int v14; // ebx
  int v15; // ebx
  double v16; // st7
  int v17; // eax
  int v18; // edx
  _DWORD *v19; // ecx
  _DWORD *v20; // eax
  int *v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // ecx
  int v26; // eax
  _DWORD *v27; // ecx
  TeamClass *v28; // ecx
  int v29; // ebp
  double v30; // st7
  int v31; // eax
  int v32; // edx
  _DWORD *v33; // ecx
  _DWORD *v34; // eax
  int v35; // edx
  ObjectClass *v36; // ebx
  int (__thiscall **ptr_0)(ObjectClass *, void *, int, int, _DWORD, int); // ebp
  void *v38; // eax
  Object *v39; // ebx
  int *v40; // edx
  int v41; // ebp
  int GroundHeight; // eax
  int ClosestObjectCell; // eax
  _DWORD *v44; // eax
  int v45; // ebp
  int v46; // ecx
  int v47; // edx
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int *v51; // ecx
  __int64 v52; // rax
  int *v53; // ecx
  __int64 v54; // rax
  int v55; // [esp+20h] [ebp-48h]
  int LandHeight; // [esp+24h] [ebp-44h]
  int v57; // [esp+30h] [ebp-38h]
  char v58[4]; // [esp+40h] [ebp-28h]
  int v59; // [esp+40h] [ebp-28h]
  int v60; // [esp+40h] [ebp-28h]
  char v61; // [esp+40h] [ebp-28h]
  int v62; // [esp+44h] [ebp-24h] BYREF
  int v63; // [esp+48h] [ebp-20h]
  int v64; // [esp+4Ch] [ebp-1Ch]
  int v65; // [esp+50h] [ebp-18h] BYREF
  int v66; // [esp+54h] [ebp-14h]
  int v67; // [esp+58h] [ebp-10h]
  _DWORD v68[3]; // [esp+5Ch] [ebp-Ch] BYREF

  MovementAI::MarkOccupiedPathCell(this); /*0x5164d9*/
  m_State = (_DWORD *)this->m_State; /*0x5164de*/
  p_MovementAI_field_18 = &this->MovementAI_field_18; /*0x5164e4*/
  *(_DWORD *)v58 = m_State[376]; /*0x5164ed*/
  if ( this->MovementAI_field_18 != *(_DWORD *)&stru_A8EB00.?[1436] /*0x516511*/
    || *((_DWORD *)this + 7) != *(_DWORD *)&stru_A8EB00.?[1440]
    || (result = *(_DWORD *)&stru_A8EB00.?[1444], this->u32_8 != *(_DWORD *)&stru_A8EB00.?[1444]) )
  {
    v6 = *p_MovementAI_field_18 / 256; /*0x516535*/
    v7 = *((_DWORD *)this + 7) / 256; /*0x516538*/
    result = (*(int (__thiscall **)(_DWORD *, int *))(*m_State + 440))(m_State, &v62); /*0x51653b*/
    if ( *(_WORD *)result == (_WORD)v6 && *(_WORD *)(result + 2) == (_WORD)v7 ) /*0x51654a*/
    {
      v8 = *(_DWORD *)((*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)this->m_State + 76))( /*0x516569*/
                         this->m_State,
                         &v65,
                         0)
                     + 8)
         - this->u32_8;
      result = (HIDWORD(v8) ^ v8) - HIDWORD(v8); /*0x51656c*/
      if ( result < 2 * *(_DWORD *)&stru_A8EB00.?[1500] ) /*0x516573*/
      {
        (*(void (__stdcall **)(int *))(this->m_Target[1] + 72))(&this->m_Target[1]); /*0x51657c*/
        return (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->m_State + 1152))(this->m_State, 0, 1); /*0x5166e4*/
      }
    }
  }
  if ( *(_DWORD *)v58 != -1 ) /*0x516589*/
    return result; /*0x516589*/
  if ( *p_MovementAI_field_18 == *(_DWORD *)&stru_A8EB00.?[1436] /*0x5165a5*/
    && *((_DWORD *)this + 7) == *(_DWORD *)&stru_A8EB00.?[1440] )
  {
    result = this->u32_8; /*0x5165ad*/
    if ( result == *(_DWORD *)&stru_A8EB00.?[1444] ) /*0x5165b2*/
      return result; /*0x5165b2*/
  }
  v9 = *p_MovementAI_field_18 / 256; /*0x5165dd*/
  v10 = *((_DWORD *)this + 7) / 256; /*0x5165e0*/
  v11 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->m_State + 440))(this->m_State, &v62); /*0x5165e3*/
  if ( *v11 == (_WORD)v9 && v11[1] == (_WORD)v10 ) /*0x5165f2*/
  {
    v12 = *(_DWORD *)((*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)this->m_State + 76))( /*0x516611*/
                        this->m_State,
                        &v65,
                        0)
                    + 8)
        - this->u32_8;
    result = (HIDWORD(v12) ^ v12) - HIDWORD(v12); /*0x516614*/
    if ( result <= 2 * *(_DWORD *)&stru_A8EB00.?[1500] ) /*0x51661b*/
      return result; /*0x51661b*/
  }
  v13 = this->m_State; /*0x516621*/
  v14 = *(_DWORD *)(v13 + 1600); /*0x516624*/
  result = *(_DWORD *)(v13 + 1608); /*0x51662a*/
  if ( v14 != -1 ) /*0x516633*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v14 >= result ) /*0x51663f*/
      goto LABEL_19; /*0x51663f*/
    result -= *(_DWORD *)&stru_A8EB00.?[416] - v14; /*0x516641*/
  }
  if ( result ) /*0x516645*/
    return result; /*0x516645*/
LABEL_19:
  LOWORD(v59) = *p_MovementAI_field_18 / 256; /*0x51664b*/
  HIWORD(v59) = *((_DWORD *)this + 7) / 256; /*0x51666d*/
  if ( (unsigned __int8)FootClass::MovementStep(v13, (int)p_MovementAI_field_18, v59, 0, a2, v57) ) /*0x51667e*/
  {
    v29 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5168d6*/
    v30 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5984) * 900.0; /*0x5168e2*/
    LOWORD(v31) = Math::RoundToInt(v30); /*0x5168e8*/
    v32 = v68[1]; /*0x5168f0*/
    v33 = (_DWORD *)(this->m_State + 1600); /*0x5168f4*/
    *v33 = v29; /*0x5168fa*/
    v33[1] = v32; /*0x5168fc*/
    v33[2] = v31; /*0x516904*/
    v34 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)this->m_State + 72))(this->m_State, v68); /*0x51690c*/
    v35 = *(_DWORD *)(this->m_State + 1504) & 7; /*0x516939*/
    LOWORD(v60) = *v34 / 256 + LOWORD(g_DDrawSurfaceManager.scenario[v35 + 82]); /*0x516955*/
    HIWORD(v60) = v34[1] / 256 + HIWORD(g_DDrawSurfaceManager.scenario[v35 + 82]); /*0x516961*/
    a2 = v60; /*0x516970*/
    if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2, 1) ) /*0x516974*/
    {
      v36 = (ObjectClass *)this->m_State; /*0x516981*/
      ptr_0 = (int (__thiscall **)(ObjectClass *, void *, int, int, _DWORD, int))v36->AbstractClass; /*0x51698a*/
      LandHeight = ObjectClass::GetLandHeight(v36); /*0x516994*/
      v55 = *(_DWORD *)(this->m_State + 1504); /*0x5169a4*/
      v38 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x5169a6*/
      if ( ptr_0[107](v36, v38, v55, LandHeight, 0, 1) == 6 ) /*0x5169b7*/
      {
        v39 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x5169cf*/
        v40 = (int *)(this->m_State + 156); /*0x5169d1*/
        v65 = *v40; /*0x5169d9*/
        v66 = v40[1]; /*0x5169e5*/
        v41 = v40[2]; /*0x5169ed*/
        v66 = (SHIWORD(a2) << 8) + 128; /*0x5169fd*/
        v65 = ((__int16)a2 << 8) + 128; /*0x516a13*/
        v67 = 0; /*0x516a17*/
        v62 = 0; /*0x516a1b*/
        v63 = 0; /*0x516a1f*/
        GroundHeight = Cell::GetGroundHeight(&v65); /*0x516a23*/
        ClosestObjectCell = Object::FindClosestObjectCell( /*0x516a41*/
                              v39,
                              &v62,
                              v41 > 3 * *(_DWORD *)&stru_A8EB00.?[1500] + GroundHeight,
                              0);
        if ( ClosestObjectCell ) /*0x516a48*/
        {
          if ( (unsigned __int8)Object::IsAlliedWithObjectHouse(*(Object **)(this->m_State + 540), ClosestObjectCell) ) /*0x516a58*/
          {
            v44 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)this->m_State + 72))(this->m_State, v68); /*0x516a6f*/
            v45 = *((_DWORD *)this + 7); /*0x516a76*/
            v46 = *v44 - *p_MovementAI_field_18; /*0x516a79*/
            v47 = v44[1]; /*0x516a7b*/
            v48 = v44[2]; /*0x516a7e*/
            v62 = v46; /*0x516a81*/
            v49 = v48 - this->u32_8; /*0x516a8a*/
            v63 = v47 - v45; /*0x516a8c*/
            v64 = v49; /*0x516a90*/
            Math::Sqrt((double)v46 * (double)v46 + (double)v49 * (double)v49 + (double)(v47 - v45) * (double)(v47 - v45)); /*0x516abc*/
            LOWORD(v50) = Math::RoundToInt(v30); /*0x516ac4*/
            if ( v50 < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5912) /*0x516ade*/
              && !(unsigned __int8)Team::AllMembersValid((Team *)this->m_State) )
            {
              v51 = (int *)(this->m_State + 156); /*0x516aee*/
              v65 = *v51; /*0x516af8*/
              v66 = v51[1]; /*0x516aff*/
              v52 = this->u32_8 - v51[2]; /*0x516b0b*/
              if ( (int)((HIDWORD(v52) ^ v52) - HIDWORD(v52)) < 2 * *(_DWORD *)&stru_A8EB00.?[1500] ) /*0x516b1a*/
              {
                v65 = *v51; /*0x516b1e*/
                v66 = v51[1]; /*0x516b25*/
                v67 = v51[2]; /*0x516b30*/
                if ( Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v65)->landType != 10 ) /*0x516b46*/
                {
                  (*(void (__stdcall **)(int *))(this->m_Target[1] + 72))(&this->m_Target[1]); /*0x516b4f*/
                  return (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->m_State + 1152))( /*0x516b6a*/
                           this->m_State,
                           0,
                           1);
                }
              }
            }
            if ( (*(_DWORD *)v39->__pad_140 & 0x100) == 0 /*0x516bae*/
              || (v61 = 1,
                  v53 = (int *)(this->m_State + 156),
                  v65 = *v53,
                  v66 = v53[1],
                  v54 = v53[2] / *(_DWORD *)&stru_A8EB00.?[1500] - v39->__pad_EC[47],
                  (int)((HIDWORD(v54) ^ v54) - HIDWORD(v54)) <= 2) )
            {
              v61 = 0; /*0x516bb0*/
            }
            Cell::ApplyDamage((Cell *)v39, (int)&stru_A8EB00.?[1436], 1, 1, v61); /*0x516bc5*/
          }
        }
      }
    }
    result = this->m_State; /*0x516bca*/
    *(_DWORD *)(result + 1612) = 10; /*0x516bcd*/
  }
  else
  {
    v15 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x516690*/
    v16 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5984) * 900.0; /*0x51669c*/
    LOWORD(v17) = Math::RoundToInt(v16); /*0x5166a2*/
    v18 = v66; /*0x5166aa*/
    v19 = (_DWORD *)(this->m_State + 1600); /*0x5166ae*/
    *v19 = v15; /*0x5166b5*/
    v19[1] = v18; /*0x5166b7*/
    v19[2] = v17; /*0x5166ba*/
    if ( !(*(unsigned __int8 (__thiscall **)(int, int *))(*(_DWORD *)this->m_State + 716))( /*0x5166c2*/
            this->m_State,
            &this->MovementAI_field_18) )
      return (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->m_State + 1152))(this->m_State, 0, 1); /*0x5166ca*/
    if ( (unsigned __int8)FootClass::ClearSomeVector2((FootClass *)this->m_State) ) /*0x5166ea*/
      goto LABEL_28; /*0x5166ea*/
    v20 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->m_State + 72))(this->m_State, &v65); /*0x516701*/
    v21 = Coord::Subtract( /*0x516721*/
            (Coord *)v68,
            *v20 - *p_MovementAI_field_18,
            v20[1] - *((_DWORD *)this + 7),
            v20[2] - this->u32_8);
    v62 = *v21; /*0x51672b*/
    v22 = v21[1]; /*0x51672f*/
    v23 = v21[2]; /*0x516736*/
    v63 = v22; /*0x516739*/
    v64 = v23; /*0x516741*/
    Math::Sqrt((double)v23 * (double)v23 + (double)v22 * (double)v22 + (double)v62 * (double)v62); /*0x516762*/
    LOWORD(v24) = Math::RoundToInt(v16); /*0x51676a*/
    if ( v24 >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5912) ) /*0x51677b*/
      goto LABEL_28; /*0x51677b*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this->m_State + 388))(this->m_State) == 2 /*0x51679b*/
      || (*(int (__thiscall **)(int))(*(_DWORD *)this->m_State + 388))(this->m_State) == 11 )
    {
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->m_State + 1152))(this->m_State, 0, 1); /*0x5167a6*/
      result = this->m_State; /*0x5167ac*/
      if ( !*(_BYTE *)(result + 144) ) /*0x5167b7*/
        return result; /*0x5167b7*/
    }
    else
    {
LABEL_28:
      v25 = (_DWORD *)this->m_State; /*0x5167bf*/
      v26 = v25[403]; /*0x5167c2*/
      if ( v26 <= 0 ) /*0x5167ca*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v25 + 1152))(v25, 0, 1); /*0x5167db*/
        result = this->m_State; /*0x5167e1*/
        if ( !*(_BYTE *)(result + 144) ) /*0x5167ec*/
          return result; /*0x5167ec*/
        if ( *(_BYTE *)(result + 1674) ) /*0x5167f2*/
          PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1792), 0x2000, 1.0, 0); /*0x516813*/
        *(_BYTE *)(this->m_State + 1674) = 0; /*0x51681b*/
      }
      else
      {
        v25[403] = v26 - 1; /*0x5167cd*/
      }
    }
    if ( !(*(unsigned __int8 (__stdcall **)(int *))(this->m_Target[1] + 16))(&this->m_Target[1]) ) /*0x516829*/
    {
      v27 = (_DWORD *)this->m_State; /*0x516830*/
      if ( v27[173] ) /*0x516833*/
      {
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v27 + 940))(v27, v27[173]) ) /*0x516840*/
        {
          *(_BYTE *)(this->m_State + 1672) = 1; /*0x51684d*/
          v28 = *(TeamClass **)(this->m_State + 1492); /*0x516857*/
          if ( v28 ) /*0x51685f*/
            TeamClass::WakeUpAllMembers(v28); /*0x516861*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this->m_State + 968))(this->m_State, 0); /*0x51686d*/
        }
      }
    }
    if ( *((_DWORD *)this + 9) != *(_DWORD *)&stru_A8EB00.?[1436] /*0x516899*/
      || *((_DWORD *)this + 10) != *(_DWORD *)&stru_A8EB00.?[1440]
      || *((_DWORD *)this + 11) != *(_DWORD *)&stru_A8EB00.?[1444] )
    {
      (*(void (__thiscall **)(int, char *))(*(_DWORD *)this->m_State + 244))(this->m_State, (char *)this + 36); /*0x5168a1*/
      *((_DWORD *)this + 9) = *(_DWORD *)&stru_A8EB00.?[1436]; /*0x5168ad*/
      *((_DWORD *)this + 10) = *(_DWORD *)&stru_A8EB00.?[1440]; /*0x5168b5*/
      *((_DWORD *)this + 11) = *(_DWORD *)&stru_A8EB00.?[1444]; /*0x5168bd*/
    }
    return (*(int (__stdcall **)(int *))(this->m_Target[1] + 72))(&this->m_Target[1]); /*0x5168c3*/
  }
  return result; /*0x5166dd*/
}



// ==== 0x00516BF0  HoverLocomotionClass::ClearLocomotionDirty_0  this=HoverLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ClearLocomotionDirty_0(HoverLocomotionClass *this)
{
  int currentMission; // eax

  if ( (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 96))(this) ) /*0x516bf8*/
  {
    currentMission = this->?->?; /*0x516c02*/
    if ( currentMission ) /*0x516c0a*/
    {
      if ( currentMission != 7 ) /*0x516c0f*/
      {
        LOBYTE(this->CurrentWobbles[1]) = 1; /*0x516c11*/
        *(_DWORD *)&this->HoverLocomotionClass_field_bool_68 = Random::Range( /*0x516c2a*/
                                                                 (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                                                                 20,
                                                                 30);
        if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 50 ) /*0x516c44*/
          *(_DWORD *)&this->HoverLocomotionClass_field_bool_68 = -*(_DWORD *)&this->HoverLocomotionClass_field_bool_68; /*0x516c4b*/
      }
    }
  }
  if ( (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) ) /*0x516c51*/
    (*(void (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 72))(this); /*0x516c5b*/
  return StreamClass::ClearDirty((IUnknown *)this); /*0x516c64*/
}



// ==== 0x00516C70  HoverLocomotionClass::DispatchVirtualCall_2  this=HoverLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::DispatchVirtualCall_2(HoverLocomotionClass *this)
{
  return (unsigned __int8)StreamClass::GetDirty((IUnknown *)this) /*0x516c90*/
      || (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 114))(this->?) > 0;
}



// ==== 0x00516CA0  HoverLocomotionClass::IsBridgeBlocking  this=HoverLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::IsBridgeBlocking(HoverLocomotionClass *this)
{
  int Member; // eax
  int *location; // ecx
  CellClass *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // edx
  int v7; // eax
  int v8; // ecx
  __int16 v9; // ax
  __int16 v10; // cx
  __int16 v11; // [esp+4h] [ebp-18h]
  _DWORD v12[2]; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+18h] [ebp-4h]

  if ( (unsigned __int8)Team::AllMembersValid((Team *)this->?) ) /*0x516cab*/
  {
    Member = Team::GetMember((Team *)this->?, 0); /*0x516cb9*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6 ) /*0x516cc8*/
    {
      if ( *(_BYTE *)(*(_DWORD *)(Team::GetMember((Team *)this->?, 0) + 1312) + 5821) ) /*0x516cda*/
        return 0; /*0x516cea*/
    }
  }
  location = this->?->?; /*0x516cf0*/
  v12[0] = *location; /*0x516cf8*/
  v12[1] = location[1]; /*0x516d04*/
  v13 = location[2]; /*0x516d0b*/
  v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v12); /*0x516d14*/
  v5 = Cell::IsBridge((Cell *)v4); /*0x516d1b*/
  if ( v5 && *(_BYTE *)(v5[328] + 5821) ) /*0x516d2e*/
  {
    v6 = v5 + 39; /*0x516d41*/
    v7 = v5[39]; /*0x516d43*/
    v8 = v6[1]; /*0x516d45*/
    v13 = v6[2]; /*0x516d4b*/
    LOWORD(v12[0]) = v7 / 256; /*0x516d5b*/
    HIWORD(v12[0]) = v8 / 256; /*0x516d6e*/
    v11 = this->?->?[0] / 256; /*0x516d99*/
    v9 = v11 - LOWORD(v12[0]); /*0x516db9*/
    v10 = this->?->?[1] / 256 - HIWORD(v12[0]); /*0x516dbf*/
    if ( v11 == LOWORD(v12[0]) ) /*0x516dc4*/
    {
      if ( v10 == 1 ) /*0x516dca*/
        return 0; /*0x516dd2*/
    }
    else if ( v9 == 2 ) /*0x516dd9*/
    {
      if ( v10 == 1 ) /*0x516ddf*/
        return 0; /*0x516de7*/
    }
    else if ( v9 == 3 && v10 == 1 ) /*0x516df4*/
    {
      return 0; /*0x516dfc*/
    }
  }
  return 1; /*0x516ce6*/
}



// ==== 0x00516E10  HoverLocomotionClass::TryMoveToAdjacentCell  this=HoverLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::TryMoveToAdjacentCell(HoverLocomotionClass *this, unsigned int a2)
{
  HoverLocomotionClass *v2; // esi
  _WORD *v3; // eax
  FootClass *Owner; // edi
  unsigned int v5; // ecx
  __int16 v6; // dx
  int (__thiscall **ptr_0)(FootClass *, void *, int, int, _DWORD, int); // ebx
  void *v8; // eax
  int v9; // ecx
  int GroundHeight; // eax
  int *location; // ecx
  _BYTE v13[4]; // [esp+20h] [ebp-10h] BYREF
  int v14; // [esp+24h] [ebp-Ch]
  int v15; // [esp+28h] [ebp-8h]

  v2 = this; /*0x516e15*/
  if ( !(*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 96))(this) ) /*0x516e1d*/
    return 0; /*0x516e1d*/
  if ( LOBYTE(v2->HoverLocomotionClass_field_6C) ) /*0x516e28*/
    return 0; /*0x516e28*/
  v3 = (_WORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))v2->?->TechnoClass + 110))(v2->?, v13); /*0x516e3d*/
  Owner = v2->?; /*0x516e46*/
  v5 = (((a2 >> 12) + 1) >> 1) & 7; /*0x516e57*/
  v6 = LOWORD(g_DDrawSurfaceManager.scenario[v5 + 82]) + *v3; /*0x516e5e*/
  LOWORD(v5) = HIWORD(g_DDrawSurfaceManager.scenario[v5 + 82]); /*0x516e6d*/
  LOWORD(a2) = v6; /*0x516e71*/
  HIWORD(a2) = v3[1] + v5; /*0x516e7f*/
  this = (HoverLocomotionClass *)a2; /*0x516e88*/
  ptr_0 = (int (__thiscall **)(FootClass *, void *, int, int, _DWORD, int))Owner->TechnoClass; /*0x516e8c*/
  v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&this); /*0x516e93*/
  if ( ptr_0[107](Owner, v8, -1, -1, 0, 1) ) /*0x516e9b*/
    return 0; /*0x516fb5*/
  LOBYTE(v2->HoverLocomotionClass_field_6C) = 1; /*0x516ea9*/
  if ( (*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *))(*(_DWORD *)v2->LocomotionClass + 16))(v2) ) /*0x516eb0*/
  {
    v2->?->pathDirections[0] = -1; /*0x516ec1*/
    if ( v2->Dest[2] != *(_DWORD *)&stru_A8EB00.?[1436] /*0x516eeb*/
      || v2->HeadToCoord[0] != *(_DWORD *)&stru_A8EB00.?[1440]
      || v2->HeadToCoord[1] != *(_DWORD *)&stru_A8EB00.?[1444] )
    {
      (*((void (__thiscall **)(FootClass *, int *))v2->?->TechnoClass + 61))(v2->?, &v2->Dest[2]); /*0x516ef3*/
    }
    v9 = SHIWORD(this) << 8; /*0x516f0d*/
    v2->Dest[2] = ((__int16)this << 8) + 128; /*0x516f10*/
    v2->HeadToCoord[0] = v9 + 128; /*0x516f1b*/
    v2->HeadToCoord[1] = 0; /*0x516f23*/
    GroundHeight = Cell::GetGroundHeight(&v2->Dest[2]); /*0x516f26*/
    v2->HeadToCoord[1] = GroundHeight; /*0x516f2b*/
    location = v2->?->?; /*0x516f31*/
    v14 = *location; /*0x516f39*/
    v15 = location[1]; /*0x516f40*/
    if ( location[2] >= GroundHeight + 2 * *(_DWORD *)&stru_A8EB00.?[1500] + *(_DWORD *)&stru_A8EB00.?[1500] ) /*0x516f54*/
      v2->HeadToCoord[1] = *(_DWORD *)&stru_A8EB00.?[1488] + GroundHeight; /*0x516f5e*/
    (*((void (__thiscall **)(FootClass *, int *))v2->?->TechnoClass + 60))(v2->?, &v2->Dest[2]); /*0x516f67*/
    return 1; /*0x516f6d*/
  }
  else
  {
    (*(void (__stdcall **)(HoverLocomotionClass *, int, int, _DWORD))(*(_DWORD *)v2->LocomotionClass + 68))( /*0x516fa5*/
      v2,
      ((__int16)this << 8) + 128,
      (SHIWORD(this) << 8) + 128,
      0);
    return 1; /*0x516fa8*/
  }
}



// ==== 0x00516FC0  HoverLocomotionClass::RandomizeLocomotionParam  this=HoverLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::RandomizeLocomotionParam(HoverLocomotionClass *this, int a2)
{
  if ( !(*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *, int))(*(_DWORD *)this->LocomotionClass + 104))( /*0x516fcd*/
          this,
          a2) )
    return 0; /*0x517017*/
  LOBYTE(this->CurrentWobbles[1]) = 1; /*0x516fd4*/
  *(_DWORD *)&this->HoverLocomotionClass_field_bool_68 = Random::Range( /*0x516fed*/
                                                           (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                                                           20,
                                                           30);
  if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 50 ) /*0x517007*/
    *(_DWORD *)&this->HoverLocomotionClass_field_bool_68 = -*(_DWORD *)&this->HoverLocomotionClass_field_bool_68; /*0x51700e*/
  return 1; /*0x517013*/
}



// ==== 0x00517070  HoverLocomotionClass::ddtor  this=HoverLocomotionClass  sig=csp ====
int __stdcall HoverLocomotionClass::ddtor(HoverLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x517076*/
    return -2147467261; /*0x517078*/
  *a2 = 1247291202; /*0x517086*/
  a2[1] = 298948665; /*0x51708e*/
  a2[2] = -1610610249; /*0x517097*/
  a2[3] = unk_7E9A4C; /*0x5170a0*/
  return 0; /*0x51707d*/
}



// ==== 0x005170B0  HoverLocomotionClass::BeginMove  this=HoverLocomotionClass  sig=csp ====
int __stdcall HoverLocomotionClass::BeginMove(HoverLocomotionClass *this, int *a2)
{
  int v2; // edi

  v2 = SwizzleManager::SaveLoad((int *)this->LocomotionClass, a2); /*0x5170c1*/
  if ( v2 >= 0 && this ) /*0x5170c9*/
  {
    *(_DWORD *)this->LocomotionClass = &LocomotionClass::`vftable'; /*0x5170ce*/
    *(_DWORD *)&this->LocomotionClass[4] = &LocomotionClass::`vftable'; /*0x5170d4*/
    FrameSnapshot::Init((FrameSnapshot *)this->LocomotionFacing); /*0x5170db*/
    *(_DWORD *)this->LocomotionClass = &HoverLocomotionClass::`vftable'; /*0x5170e0*/
    *(_DWORD *)&this->LocomotionClass[4] = &HoverLocomotionClass::`vftable'; /*0x5170e6*/
  }
  return v2; /*0x5170ef*/
}



// ==== 0x00517100  HoverLocomotionClass::SmallStub  this=HoverLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmallStub_517100(HoverLocomotionClass *this)
{
  return 2; /*0x517105*/
}



// ==== 0x00517110  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_517110(ObjectClass *this)
{
  int v2; // edi
  int v3; // ebx
  _WORD *v4; // eax
  bool v5; // bl
  void *ptr_C; // ecx
  int result; // eax
  _BYTE v8[4]; // [esp+8h] [ebp-4h] BYREF

  v5 = 1; /*0x51717d*/
  if ( this->occupant != *(_DWORD *)&stru_A8EB00.?[1436] /*0x517138*/
    || this->owningHouseIndex != *(_DWORD *)&stru_A8EB00.?[1440]
    || this->fallRate != *(_DWORD *)&stru_A8EB00.?[1444] )
  {
    v2 = this->occupant / 256; /*0x517161*/
    v3 = this->owningHouseIndex / 256; /*0x517164*/
    v4 = (_WORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this->? + 440))(this->?, v8); /*0x517167*/
    if ( *v4 != (_WORD)v2 || v4[1] != (_WORD)v3 ) /*0x517177*/
      v5 = 0; /*0x517138*/
  }
  ptr_C = this->?; /*0x51717f*/
  this->ambientSoundController[3] = 0; /*0x517182*/
  this->ambientSoundController[4] = 1072693248; /*0x517189*/
  (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)ptr_C + 1348))(ptr_C, 0, 1072693248); /*0x517199*/
  result = MovementAI::StepFootClass((MovementAI *)this, 0); /*0x5171a3*/
  if ( v5 ) /*0x5171aa*/
    return MovementAI::MainFootClass((MovementAI *)this, 1); /*0x5171b0*/
  return result; /*0x5171b5*/
}



// ==== 0x005171C0  HoverLocomotionClass::DispatchVirtualCall_3  this=HoverLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall_3(HoverLocomotionClass *this, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  FootClass *Owner; // ecx
  _DWORD v5[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x5171c0*/
  if ( !a2 ) /*0x5171c9*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(HoverLocomotionClass *, _BYTE *))(*(_DWORD *)this->LocomotionClass + 24))( /*0x5171d8*/
                     this,
                     v6);
    v5[0] = *v3; /*0x5171dd*/
    v5[1] = v3[1]; /*0x5171e4*/
    Owner = this->?; /*0x5171eb*/
    v5[2] = v3[2]; /*0x5171ee*/
    return (*((int (__thiscall **)(FootClass *, _DWORD *))Owner->TechnoClass + 61))(Owner, v5); /*0x5171f9*/
  }
  return result; /*0x517200*/
}



// ==== 0x00517210  HoverLocomotionClass::IsPositionWithinThreshold  this=HoverLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::IsPositionWithinThreshold(HoverLocomotionClass *this, int a2, int a3, int a4)
{
  int *v4; // eax
  int v5; // ebp
  int v6; // kr04_4
  int v7; // eax
  _BYTE v9[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (int *)(*(int (__stdcall **)(HoverLocomotionClass *, _BYTE *))(*(_DWORD *)this->LocomotionClass + 24))(this, v9); /*0x517223*/
  v5 = v4[2]; /*0x51722b*/
  v6 = *v4; /*0x517257*/
  v7 = v4[1] / 256; /*0x51726d*/
  return (unsigned __int16)(v6 / 256) == (unsigned __int16)(a2 / 256) /*0x517291*/
      && (_WORD)v7 == (unsigned __int16)(a3 / 256)
      && (int)abs32(v5 - a4) <= *(int *)&stru_A8EB00.?[1500];
}



// ==== 0x005172B0  HoverLocomotionClass::StubReturn120  this=HoverLocomotionClass  sig=csp ====
int HoverLocomotionClass::StubReturn120(HoverLocomotionClass *this)
{
  return 120; /*0x5172b5*/
}



// ==== 0x005172C0  HoverLocomotionClass::ProcessMove  this=HoverLocomotionClass  sig=csp ====
_DWORD *__thiscall HoverLocomotionClass::ProcessMove(HoverLocomotionClass *this, char a2)
{
  *(_DWORD *)this->LocomotionClass = &HoverLocomotionClass::`vftable'; /*0x5172c3*/
  *(_DWORD *)&this->LocomotionClass[4] = &HoverLocomotionClass::`vftable'; /*0x5172c9*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x5172d0*/
  if ( (a2 & 1) != 0 ) /*0x5172da*/
    __3_YAXPAX_Z(this); /*0x5172dd*/
  return this->LocomotionClass; /*0x5172e7*/
}



// ==== 0x005172F0  LocomotionClass::ProcessMove  this=LocomotionClass  sig=csp ====
_DWORD *__thiscall LocomotionClass::ProcessMove(LocomotionClass *this, char a2)
{
  LocomotionClass::Construct(this); /*0x5172f3*/
  if ( (a2 & 1) != 0 ) /*0x5172fd*/
    __3_YAXPAX_Z(this); /*0x517300*/
  return this->ILocomotion; /*0x51730a*/
}



// ==== 0x00517310  Int64::Equal  this=Int64  sig=csp ====
int __thiscall Int64::Equal(Int64 *this, _DWORD *a2)
{
  return *this == *a2 && *((_DWORD *)this + 1) == a2[1]; /*0x51731b*/
}



// ==== 0x00517340  sub_517340  this=-  sig=ida-proto ====
char sub_517340()
{
  byte_A8F1C4 = 0; /*0x517342*/
  byte_A8F1C5 = 0; /*0x517347*/
  byte_A8F1C6 = 0; /*0x51734c*/
  return 0; /*0x517351*/
}



// ==== 0x00517360  ObjectClass::method  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_517360(ObjectClass *this, unsigned __int8 a2, unsigned __int8 *a3)
{
  unsigned __int8 v3; // bl
  char v4; // al
  unsigned __int8 ptr_0; // bl
  unsigned int result; // eax

  v3 = BYTE1(this->AbstractClass); /*0x517394*/
  BYTE2(this->AbstractClass) += a2 * (a3[2] - BYTE2(this->AbstractClass)) / 256; /*0x517397*/
  v4 = v3 + a2 * (a3[1] - v3) / 256; /*0x5173b8*/
  ptr_0 = (unsigned __int8)this->AbstractClass; /*0x5173ba*/
  BYTE1(this->AbstractClass) = v4; /*0x5173bc*/
  result = a2 * (*a3 - ptr_0) / 256; /*0x5173db*/
  LOBYTE(result) = ptr_0 + result; /*0x5173de*/
  LOBYTE(this->AbstractClass) = result; /*0x5173e1*/
  return result; /*0x5173cb*/
}



// ==== 0x005173F0  ObjectClass::method_5173F0  this=ObjectClass  sig=csp ====
int __thiscall sub_5173F0(ObjectClass *this, unsigned __int8 *a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // eax

  v2 = LOBYTE(this->AbstractClass) - *a2; /*0x517400*/
  if ( v2 < 0 ) /*0x517402*/
    v2 = *a2 - LOBYTE(this->AbstractClass); /*0x517404*/
  v3 = BYTE1(this->AbstractClass) - a2[1]; /*0x517410*/
  if ( v3 < 0 ) /*0x517412*/
    v3 = a2[1] - BYTE1(this->AbstractClass); /*0x517414*/
  v4 = BYTE2(this->AbstractClass) - a2[2]; /*0x517422*/
  if ( v4 < 0 ) /*0x517424*/
    v4 = a2[2] - BYTE2(this->AbstractClass); /*0x517426*/
  return v2 * v2 + v3 * v3 + v4 * v4; /*0x517437*/
}



// ==== 0x00517440  Color::ConvertToRGB  this=Color  sig=csp ====
int __thiscall Color::ConvertToRGB(Color *this, int a2)
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

  v2 = BYTE2(this->Color_field_00); /*0x51744b*/
  v3 = BYTE1(this->Color_field_00); /*0x517453*/
  v4 = 3 * LOBYTE(this->Color_field_00); /*0x51745c*/
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



// ==== 0x00517590  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::HashEntryCompare  this=DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode  sig=csp ====
BOOL __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::HashEntryCompare(
        DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode *this,
        _BYTE *a2)
{
  return this->__pad_0[0] != *a2 || this->__pad_0[1] != a2[1] || this->__pad_0[2] != a2[2]; /*0x5175bd*/
}



// ==== 0x005175D0  VtableStub::Method_5175D0  this=VtableStub  sig=ida-proto ====
// attributes: thunk
void __noreturn VtableStub::5175D0()
{
  while ( 1 ) /*0x5175d0*/
    ; /*0x5175d0*/
}



// ==== 0x005175F0  ObjectClass::ReadRegistryOptionsWOL  this=ObjectClass  sig=csp ====
int __thiscall ReadRegistryOptionsWOL(ObjectClass *this)
{
  int result; // eax
  void *v3; // ecx
  BYTE Data[4]; // [esp+Ch] [ebp-90h] BYREF
  HKEY phkResult; // [esp+10h] [ebp-8Ch] BYREF
  DWORD cbData; // [esp+14h] [ebp-88h] BYREF
  DWORD Type; // [esp+18h] [ebp-84h] BYREF
  CHAR SubKey[128]; // [esp+1Ch] [ebp-80h] BYREF

  LOBYTE(this->?) = 0; /*0x517605*/
  strcpy(SubKey, g_Str_SOFTWARE_Westwood_WOLAPI_); /*0x517620*/
  cbData = 4; /*0x517624*/
  result = RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0xF003Fu, &phkResult); /*0x517643*/
  if ( !result ) /*0x51764b*/
  {
    *(_DWORD *)Data = 0; /*0x51764d*/
    if ( !RegQueryValueExA(phkResult, g_INI_Key_Options, 0, &Type, Data, &cbData) && Type == 4 ) /*0x51767b*/
    {
      v3 = *(void **)Data; /*0x51767d*/
      LOBYTE(this->?) = 1; /*0x517681*/
      this->AbstractClass = v3; /*0x517685*/
    }
    result = RegCloseKey(phkResult); /*0x51768d*/
  }
  LOBYTE(result) = this->?; /*0x517693*/
  return result; /*0x517696*/
}



// ==== 0x005176A0  InfantryClass::SetField6  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::SetField6(InfantryClass *this)
{
  return ((int)this->FootClass & 1) == 0; /*0x5176a6*/
}



// ==== 0x005176B0  Flag::IsNot2  this=Flag  sig=csp ====
int __thiscall Flag::IsNot2(Flag *this)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x5176b0*/
  LOBYTE(result) = (~(unsigned __int8)*(_DWORD *)this->__pad_0 & 2) != 0; /*0x5176b6*/
  return result; /*0x5176b8*/
}



// ==== 0x005176C0  ObjectClass::WinMain_Helper  this=ObjectClass  sig=csp ====
bool __thiscall WinMain_Helper(ObjectClass *this)
{
  return (~(unsigned __int8)this->AbstractClass & 4) != 0; /*0x5176c9*/
}



// ==== 0x005176D0  ObjectClass::method_5176D0  this=ObjectClass  sig=csp ====
char __thiscall sub_5176D0(ObjectClass *this, BYTE Data)
{
  void *v4; // ecx
  char v5; // [esp+13h] [ebp-119h]
  HKEY phkResult; // [esp+14h] [ebp-118h] BYREF
  BYTE v7[4]; // [esp+18h] [ebp-114h] BYREF
  HKEY hKey; // [esp+1Ch] [ebp-110h] BYREF
  DWORD cbData; // [esp+20h] [ebp-10Ch] BYREF
  DWORD Type; // [esp+24h] [ebp-108h] BYREF
  DWORD dwDisposition; // [esp+28h] [ebp-104h] BYREF
  CHAR SubKey[128]; // [esp+2Ch] [ebp-100h] BYREF
  CHAR v13[128]; // [esp+ACh] [ebp-80h] BYREF

  strcpy(SubKey, g_Str_SOFTWARE_Westwood_WOLAPI_); /*0x5176ff*/
  v5 = 0; /*0x51770a*/
  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0xF003Fu, &phkResult) /*0x51774a*/
    && RegCreateKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, &dwDisposition) )
  {
    return 0; /*0x517757*/
  }
  if ( !RegSetValueExA(phkResult, g_INI_Key_Options, 0, 4u, &Data, 4u) ) /*0x51777b*/
    v5 = 1; /*0x517785*/
  RegCloseKey(phkResult); /*0x51778f*/
  LOBYTE(this->?) = 0; /*0x51779f*/
  strcpy(v13, g_Str_SOFTWARE_Westwood_WOLAPI_); /*0x5177c0*/
  cbData = 4; /*0x5177c4*/
  if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, v13, 0, 0xF003Fu, &hKey) ) /*0x5177e3*/
  {
    *(_DWORD *)v7 = 0; /*0x5177e9*/
    if ( !RegQueryValueExA(hKey, g_INI_Key_Options, 0, &Type, v7, &cbData) && Type == 4 ) /*0x517817*/
    {
      v4 = *(void **)v7; /*0x517819*/
      LOBYTE(this->?) = 1; /*0x51781d*/
      this->AbstractClass = v4; /*0x517821*/
    }
    RegCloseKey(hKey); /*0x517829*/
  }
  return v5; /*0x517754*/
}



// ==== 0x00517840  sub_517840  this=-  sig=ida-proto ====
void sub_517840()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x51784c*/
  dbl_A8F1E8 = Math::Sqrt(v0 + v0); /*0x51785e*/
}



// ==== 0x00517870  sub_517870  this=-  sig=ida-proto ====
void sub_517870()
{
  dbl_A8F238 = dbl_A8F1E8 / 60.0; /*0x51787c*/
}



// ==== 0x00517890  sub_517890  this=-  sig=ida-proto ====
void sub_517890()
{
  dbl_A8F220 = 1.0 / dbl_A8F238; /*0x51789c*/
}



// ==== 0x005178B0  sub_5178B0  this=-  sig=ida-proto ====
void sub_5178B0()
{
  dbl_A8F218 = 0.0174532925199433 * 45.0; /*0x5178bc*/
}



// ==== 0x005178D0  sub_5178D0  this=-  sig=ida-proto ====
void sub_5178D0()
{
  dbl_A8F1F0 = 0.0174532925199433 * 60.0; /*0x5178dc*/
}



// ==== 0x005178F0  sub_5178F0  this=-  sig=ida-proto ====
void sub_5178F0()
{
  dbl_A8F1C8 = 0.0174532925199433 * 90.0; /*0x5178fc*/
}



// ==== 0x00517910  sub_517910  this=-  sig=ida-proto ====
__int64 sub_517910()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A8F1C8 - dbl_A8F1F0); /*0x517922*/
  result = Math::RoundToInt(v0 * dbl_A8F1E8 * 0.5); /*0x517936*/
  dword_A8F240 = result; /*0x51793b*/
  return result; /*0x517940*/
}



// ==== 0x00517950  sub_517950  this=-  sig=ida-proto ====
void sub_517950()
{
  dbl_A8F1F8 = Math::ArcTan((double)dword_A8F240 * 0.00390625); /*0x517967*/
}



// ==== 0x00517980  sub_517980  this=-  sig=ida-proto ====
void sub_517980()
{
  dbl_A8F210 = Math::ArcTan((double)(2 * dword_A8F240) / dbl_A8F1E8); /*0x5179a2*/
}



// ==== 0x005179B0  sub_5179B0  this=-  sig=ida-proto ====
__int64 sub_5179B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F240) + 0.5); /*0x5179cb*/
  dword_A8F234 = result; /*0x5179d0*/
  return result; /*0x5179d6*/
}



// ==== 0x005179E0  sub_5179E0  this=-  sig=ida-proto ====
int sub_5179E0()
{
  dword_A8F1E0 = 0; /*0x5179e2*/
  return 0; /*0x5179ee*/
}



// ==== 0x005179F0  sub_5179F0  this=-  sig=ida-proto ====
int sub_5179F0()
{
  dword_A8F200 = 0; /*0x5179f2*/
  dword_A8F204 = 0; /*0x5179f7*/
  dword_A8F208 = 0; /*0x5179fc*/
  return 0; /*0x517a01*/
}



// ==== 0x00517A10  sub_517A10  this=-  sig=ida-proto ====
int sub_517A10()
{
  dword_A8F230 = 0; /*0x517a15*/
  dword_A8F228 = 128; /*0x517a1f*/
  dword_A8F22C = 128; /*0x517a24*/
  return 128; /*0x517a29*/
}



// ==== 0x00517A30  sub_517A30  this=-  sig=ida-proto ====
int sub_517A30()
{
  dword_A8F1D0 = 0; /*0x517a32*/
  dword_A8F1D4 = 0; /*0x517a37*/
  dword_A8F1D8 = 0; /*0x517a3c*/
  dword_A8F1DC = 0; /*0x517a41*/
  return 0; /*0x517a46*/
}



// ==== 0x00517A50  InfantryClass::Construct  this=InfantryClass  sig=csp ====
int __userpurge InfantryClass::Construct@<eax>(int this@<ecx>, int a2@<edi>, int a3, IUnknown *ppv)
{
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // edi
  const IID *v8; // ebp
  int v9; // eax
  int ptr_8; // ebp
  _DWORD *v11; // edi
  int i; // eax
  _DWORD *v13; // edx
  InfantryClass *v15; // [esp+10h] [ebp-10h]
  int Vtable3; // [esp+24h] [ebp+4h]

  FootClass::Construct((FootClass *)this, (int)ppv); /*0x517a5b*/
  *(_DWORD *)(this + 1732) = -1; /*0x517a64*/
  *(_DWORD *)(this + 1728) = a3; /*0x517a6e*/
  *(_DWORD *)(this + 1736) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x517a7f*/
  *(_DWORD *)(this + 1744) = 0; /*0x517a85*/
  *(_DWORD *)(this + 1748) = 0; /*0x517a8c*/
  *(_BYTE *)(this + 1752) = 0; /*0x517a92*/
  *(_BYTE *)(this + 1753) = 0; /*0x517a98*/
  *(_BYTE *)(this + 1754) = 0; /*0x517a9e*/
  *(_BYTE *)(this + 1755) = 0; /*0x517aa4*/
  *(_BYTE *)(this + 1756) = 0; /*0x517aaa*/
  *(_BYTE *)(this + 1757) = 0; /*0x517ab0*/
  *(_DWORD *)(this + 1760) = 0; /*0x517ab6*/
  *(_BYTE *)(this + 1764) = 0; /*0x517abc*/
  *(_DWORD *)(this + 1768) = 2; /*0x517ac2*/
  *(_DWORD *)this = &InfantryClass::`vftable'; /*0x517acc*/
  *(_DWORD *)(this + 4) = &InfantryClass::`vftable'; /*0x517ad2*/
  *(_DWORD *)(this + 8) = &InfantryClass::`vftable'; /*0x517ad8*/
  *(_DWORD *)(this + 12) = &off_7EB02C; /*0x517adf*/
  AbstractClass::GenerateUniqueID((AbstractClass *)(this + 4)); /*0x517ae6*/
  if ( *(int *)&stru_A83D50.__pad_80[40] < *(int *)&stru_A83D50.__pad_80[32] /*0x517b1e*/
    || (stru_A83D50.__pad_80[37] || !*(_DWORD *)&stru_A83D50.__pad_80[32])
    && *(int *)&stru_A83D50.__pad_80[44] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_A83D50.__pad_80[24] + 8))(
         &stru_A83D50.__pad_80[24],
         *(_DWORD *)&stru_A83D50.__pad_80[32] + *(_DWORD *)&stru_A83D50.__pad_80[44],
         0) )
  {
    v5 = (*(_DWORD *)&stru_A83D50.__pad_80[40])++; /*0x517b2b*/
    *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * v5) = this; /*0x517b3a*/
  }
  InfantryClass::PerFrameUpdate(v15, a2); /*0x517b3f*/
  v6 = *(_DWORD *)(this + 1728); /*0x517b44*/
  if ( v6 ) /*0x517b4c*/
  {
    v7 = (_DWORD *)(this + 1652); /*0x517b4e*/
    v8 = (const IID *)(v6 + 844); /*0x517b54*/
    v9 = *(_DWORD *)(this + 1652); /*0x517b5a*/
    if ( v9 ) /*0x517b5e*/
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v9 + 8))(*(_DWORD *)(this + 1652)); /*0x517b63*/
    if ( CoCreateInstance(v8, 0, 7u, &riid, (LPVOID *)&ppv) >= 0 ) /*0x517b7c*/
    {
      if ( OleRun(ppv) >= 0 ) /*0x517b8b*/
        (*(void (__stdcall **)(IUnknown *, IID *, int))ppv->field_0)(ppv, &stru_817BB0, this + 1652); /*0x517b9a*/
      (*(void (__stdcall **)(IUnknown *))(ppv->field_0 + 8))(ppv); /*0x517ba3*/
    }
    if ( !*v7 ) /*0x517ba6*/
      WinAPI::Wrapper(-2147467261); /*0x517baf*/
    (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*v7 + 12))(*v7, this); /*0x517bba*/
  }
  BuildingTypeClass::GetPowerOutput((BuildingTypeClass *)(this + 904), 127); /*0x517bc5*/
  Vtable3 = AbstractClass::GetVtable3((AbstractClass *)(this + 4)); /*0x517bd3*/
  if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x517be6*/
    goto LABEL_25; /*0x517be6*/
  if ( g_BuildingLoadQueue_Array.? ) /*0x517bee*/
  {
    ptr_8 = (int)g_BuildingLoadQueue_Array.?; /*0x517bf7*/
    if ( (int)g_BuildingLoadQueue_Array.? < 0 ) /*0x517bfb*/
      return this; /*0x517bfb*/
  }
  else
  {
    ptr_8 = 10; /*0x517bf0*/
  }
  ppv = (IUnknown *)((char *)g_BuildingLoadQueue_Array.? + ptr_8); /*0x517c03*/
  v11 = (_DWORD *)__2_YAPAXI_Z(8 * ((int)g_BuildingLoadQueue_Array.? + ptr_8)); /*0x517c14*/
  if ( v11 ) /*0x517c1b*/
  {
    ppv = (IUnknown *)((char *)ppv - 1); /*0x517c2c*/
    for ( i = 0; i < (int)g_BuildingLoadQueue_Array.?; v11[2 * i - 1] = v13[1] ) /*0x517c34*/
    {
      v13 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * i++; /*0x517c3c*/
      v11[2 * i - 2] = *v13; /*0x517c42*/
    }
    __3_YAXPAX_Z(g_BuildingLoadQueue_Array.TechnoTypeClass); /*0x517c5d*/
    g_BuildingLoadQueue_Array.TechnoTypeClass = v11; /*0x517c6c*/
    g_BuildingLoadQueue_Array.? = (char *)g_BuildingLoadQueue_Array.? + ptr_8; /*0x517c72*/
    g_BuildingLoadQueue_Array.? = 0; /*0x517c77*/
LABEL_25:
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = Vtable3; /*0x517c7d*/
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = this; /*0x517c9b*/
    LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x517ca5*/
    ++g_BuildingLoadQueue_Array.?; /*0x517cab*/
  }
  return this; /*0x517cb2*/
}



// ==== 0x00517CC0  InfantryClass::PerFrameUpdate  this=InfantryClass  sig=csp ====
_DWORD *__usercall InfantryClass::PerFrameUpdate@<eax>(InfantryClass *this, int a2@<edi>)
{
  int v2; // ecx
  int v3; // esi
  _DWORD *result; // eax
  BuildingClass *v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // ecx
  TechnoClass *v14; // [esp+0h] [ebp-8h]

  v3 = v2; /*0x517cc2*/
  result = TechnoClass::Update(v14, a2); /*0x517cc4*/
  v5 = *(BuildingClass **)(v3 + 540); /*0x517cc9*/
  if ( v5 ) /*0x517cd1*/
    result = (_DWORD *)BuildingClass::PowerUpdate(v5, (_BYTE *)v3); /*0x517cd4*/
  v6 = *(_DWORD *)(v3 + 1728); /*0x517cd9*/
  if ( v6 ) /*0x517ce1*/
  {
    v7 = *(_DWORD *)(v3 + 540); /*0x517ce7*/
    if ( v7 ) /*0x517cef*/
    {
      v8 = 0; /*0x517cf4*/
      v9 = *(_DWORD *)(v7 + 52) + 332; /*0x517cf6*/
      v10 = *(_DWORD *)(v9 + 16); /*0x517cfb*/
      if ( v10 > 0 ) /*0x517d00*/
      {
        v11 = *(_DWORD **)(v9 + 4); /*0x517d02*/
        while ( *v11 != v6 ) /*0x517d07*/
        {
          ++v8; /*0x517d09*/
          ++v11; /*0x517d0a*/
          if ( v8 >= v10 ) /*0x517d0f*/
            goto LABEL_11; /*0x517d0f*/
        }
        Power::ChangedHouse((Power *)(v3 + 336), 1); /*0x517d1b*/
      }
    }
LABEL_11:
    v12 = *(_DWORD *)(v3 + 540); /*0x517d20*/
    if ( v12 && *(_BYTE *)(v12 + 703) && *(_BYTE *)(*(_DWORD *)(v3 + 1728) + 3214) ) /*0x517d3a*/
      Power::ChangedHouse((Power *)(v3 + 336), 1); /*0x517d4c*/
    result = *(_DWORD **)(v3 + 1728); /*0x517d51*/
    *(_DWORD *)(v3 + 108) = result[40]; /*0x517d5d*/
    *(_DWORD *)(v3 + 112) = result[40]; /*0x517d66*/
    v13 = result[416]; /*0x517d69*/
    if ( v13 == -1 ) /*0x517d72*/
      v13 = result[417]; /*0x517d74*/
    *(_DWORD *)(v3 + 764) = v13; /*0x517d7a*/
    *(_BYTE *)(v3 + 978) = *((_BYTE *)result + 3280); /*0x517d86*/
  }
  return result; /*0x517d8c*/
}



// ==== 0x00517D90  InfantryClass::Destruct  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::Destruct(InfantryClass *this)
{
  AbstractClass *p_vtable1; // edi
  InfantryTypeClass *Type; // eax
  int *team; // ecx
  TechnoClass *slaveOwner; // eax
  SlaveManagerClass *slaveManager; // eax
  int v7; // eax
  int Vtable3; // eax
  void *ptr_4; // edx
  int v10; // edi
  int v11; // eax
  signed int v12; // eax
  int v13; // ecx
  char *i; // eax
  _DWORD *v15; // eax
  int v17[2]; // [esp+Ch] [ebp-8h] BYREF

  p_vtable1 = (AbstractClass *)&this->?; /*0x517d9a*/
  this->FootClass = &InfantryClass::`vftable'; /*0x517d9d*/
  this->? = &InfantryClass::`vftable'; /*0x517da3*/
  this->? = &off_7EB02C; /*0x517daa*/
  this->? = &InfantryClass::`vftable'; /*0x517db1*/
  if ( byte_A8E9A0 ) /*0x517dbe*/
  {
    Type = this->Type; /*0x517dc4*/
    if ( Type ) /*0x517dcc*/
    {
      if ( HouseClass::CanBuild(this->?, (int)Type, 0, 0) == -1 ) /*0x517de3*/
        this->?->recheckTechTree = 1; /*0x517deb*/
      team = (int *)this->?; /*0x517df2*/
      if ( team ) /*0x517dfa*/
      {
        TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x517e00*/
        this->? = 0; /*0x517e05*/
      }
      slaveOwner = this->?; /*0x517e0b*/
      if ( slaveOwner ) /*0x517e13*/
      {
        slaveManager = slaveOwner->slaveManager; /*0x517e15*/
        if ( slaveManager ) /*0x517e1d*/
          SlaveManagerClass::LostSlave(slaveManager, (int)this); /*0x517e22*/
      }
      HouseClass::DecrementUnitCount(this->?, this); /*0x517e2e*/
      if ( !this->?[0] ) /*0x517e33*/
        WinAPI::Wrapper(-2147467261); /*0x517e40*/
      (*(void (__stdcall **)(int))(*(_DWORD *)this->?[0] + 172))(this->?[0]); /*0x517e4e*/
      this->unknown_int_6E8 = 2; /*0x517e56*/
      this->Crawling = 0; /*0x517e60*/
      this->SequenceAnim[0] = 0; /*0x517e66*/
      TechnoClass::CleanupDirection((FootClass *)this); /*0x517e6c*/
    }
  }
  AbstractClass::AnnounceExpiredPointer(&this->FootClass, 1); /*0x517e75*/
  v17[0] = (int)this; /*0x517e89*/
  v7 = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)&stru_A83D50.__pad_80[24] + 16))( /*0x517e8d*/
         &stru_A83D50.__pad_80[24],
         v17);
  if ( v7 != -1 && v7 < *(int *)&stru_A83D50.__pad_80[40] ) /*0x517e9d*/
  {
    --*(_DWORD *)&stru_A83D50.__pad_80[40]; /*0x517ea2*/
    for ( ; /*0x517ea8*/
          v7 < *(int *)&stru_A83D50.__pad_80[40];
          *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * v7 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_80[28]
                                                                                     + 4 * v7) )
    {
      ++v7; /*0x517eb0*/
    }
  }
  Vtable3 = AbstractClass::GetVtable3(p_vtable1); /*0x517ec3*/
  ptr_4 = g_BuildingLoadQueue_Array.?; /*0x517ec8*/
  v10 = Vtable3; /*0x517ece*/
  if ( g_BuildingLoadQueue_Array.? ) /*0x517ed2*/
  {
    if ( !LOBYTE(g_BuildingLoadQueue_Array.?) ) /*0x517ede*/
    {
      qsort( /*0x517eee*/
        g_BuildingLoadQueue_Array.TechnoTypeClass,
        (size_t)g_BuildingLoadQueue_Array.?,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      ptr_4 = g_BuildingLoadQueue_Array.?; /*0x517ef3*/
      g_BuildingLoadQueue_Array.? = 0; /*0x517efc*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 1; /*0x517f02*/
    }
    v17[0] = v10; /*0x517f0d*/
    v11 = BinaryArraySearch((int)g_BuildingLoadQueue_Array.TechnoTypeClass, (int)ptr_4, v17); /*0x517f18*/
    if ( v11 ) /*0x517f1f*/
    {
      v12 = (signed int)(v11 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x517f27*/
      if ( v12 != -1 ) /*0x517f2d*/
      {
        v13 = v12 + 1; /*0x517f2f*/
        for ( i = (char *)g_BuildingLoadQueue_Array.?; /*0x517f39*/
              v13 < (int)g_BuildingLoadQueue_Array.?;
              i = (char *)g_BuildingLoadQueue_Array.? )
        {
          v15 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v13++; /*0x517f41*/
          *(v15 - 2) = *v15; /*0x517f47*/
          *(v15 - 1) = v15[1]; /*0x517f4d*/
        }
        g_BuildingLoadQueue_Array.? = i - 1; /*0x517f62*/
        *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = 0; /*0x517f67*/
        *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = 0; /*0x517f77*/
        g_BuildingLoadQueue_Array.? = 0; /*0x517f7b*/
      }
    }
  }
  this->? = 0; /*0x517f83*/
  return FootClass::Destruct((FootClass *)this); /*0x517f8e*/
}



// ==== 0x00517FA0  InfantryClass::ProcessDeployment  this=InfantryClass  sig=csp ====
int __userpurge InfantryClass::ProcessDeployment@<eax>(
        InfantryClass *this,
        double a2@<st0>,
        int *a3,
        int a4,
        int a5,
        int *a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // ecx
  int v11; // esi
  int v12; // eax
  int result; // eax
  int v14; // ebp
  int v15; // eax
  SlaveManagerClass *v16; // eax
  int v17; // ecx
  int v18; // edi
  int v19; // eax
  AnimClass *v20; // eax
  int *v21; // edi
  AnimClass *v22; // eax
  AnimClass *v23; // eax
  int v24; // edx
  int v25; // ebx
  int v26; // edi
  int v27; // eax
  AnimClass *v28; // eax
  int v29; // edi
  AnimClass *v30; // eax
  void **v31; // edi
  _DWORD *v32; // edx
  int v33; // eax
  int v34; // ecx
  AnimClass *v35; // eax
  AnimClass *v36; // eax
  void **v37; // edi
  _DWORD *v38; // edx
  int v39; // edx
  AnimClass *v40; // eax
  AnimClass *v41; // eax
  AnimClass *v42; // eax
  AnimClass *v43; // eax
  AnimClass *v44; // eax
  AnimClass *v45; // eax
  F... [25076 chars total]



// ==== 0x00518D80  ObjectClass::CalculateLocomotionFrameIndex  this=ObjectClass  sig=csp ====
int __thiscall CalculateLocomotionFrameIndex(TechnoClass *this)
{
  int v2; // ebx
  __int16 *v3; // eax
  int m_Data; // esi
  int ptr_0; // edx
  int v6; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  _DWORD *v11; // ecx
  _DWORD *Value; // eax
  bool v14; // [esp+19h] [ebp-1Dh]
  int v15; // [esp+1Ah] [ebp-1Ch]
  StreamClass v16; // [esp+1Eh] [ebp-18h] BYREF

  v2 = *((_DWORD *)this + 433); /*0x518d88*/
  if ( v2 == -1 ) /*0x518d91*/
  {
    v3 = (__int16 *)(*(int (__thiscall **)(TechnoClass *, int *))(this->ptr_0 + 440))(this, &v16.m_Data); /*0x518d9d*/
    if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v3) + 59) != 2 || this->onBridge[0] ) /*0x518db7*/
      v2 = 0; /*0x518dc8*/
    else
      v2 = 16; /*0x518dc1*/
  }
  m_Data = this->health; /*0x518dcf*/
  ptr_0 = this->ptr_0; /*0x518dd5*/
  v16.m_Data = m_Data; /*0x518ddb*/
  if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *, Object *))(ptr_0 + 1088))(this, dword_A83D4C) ) /*0x518ddf*/
  {
    v16.m_Data = (*(int (__thiscall **)(TechnoClass *, int))(this->ptr_0 + 204))(this, 1); /*0x518df6*/
    m_Data = v16.m_Data; /*0x518dfa*/
  }
  v6 = 36 * v2; /*0x518e05*/
  v7 = *(_DWORD *)(*(_DWORD *)(m_Data + 3644) + v6 + 4); /*0x518e0f*/
  if ( v7 <= 1 ) /*0x518e11*/
    v7 = 1; /*0x518e13*/
  v15 = this->animation[0] % v7; /*0x518e2f*/
  if ( !*(_BYTE *)(this->health + 3476) ) /*0x518e33*/
    goto LABEL_25; /*0x518e33*/
  v8 = *((_DWORD *)this + 413); /*0x518e39*/
  *(_DWORD *)v16.__pad_0 = 0; /*0x518e47*/
  if ( !v8 ) /*0x518e4f*/
    goto LABEL_16; /*0x518e4f*/
  v9 = StreamClass::Set2(&v16, (_DWORD *)this + 413); /*0x518e56*/
  if ( v9 < 0 && v9 != -2147467262 ) /*0x518e64*/
    WinAPI::Wrapper(v9); /*0x518e67*/
  if ( !*(_DWORD *)v16.__pad_0 ) /*0x518e72*/
LABEL_16:
    WinAPI::Wrapper(-2147467261); /*0x518e79*/
  (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)v16.__pad_0 + 12))(*(_DWORD *)v16.__pad_0, &v16.m_Position); /*0x518e8b*/
  v14 = memcmp(&v16.m_Position, &g_CLSID_JumpjetLocomotion, 0x10u) == 0; /*0x518ea4*/
  if ( *(_DWORD *)v16.__pad_0 ) /*0x518eac*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v16.__pad_0 + 8))(*(_DWORD *)v16.__pad_0); /*0x518eb1*/
  if ( !v14 || !this->target || *(_BYTE *)(this->health + 3787) ) /*0x518ecc*/
  {
    m_Data = v16.m_Data; /*0x518f2f*/
LABEL_25:
    v11 = (_DWORD *)(v6 + *(_DWORD *)(m_Data + 3644)); /*0x518f33*/
    if ( (int)v11[2] > 0 ) /*0x518f40*/
    {
      Value = ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v16.m_Data); /*0x518f4d*/
      v11 = (_DWORD *)(v6 + *(_DWORD *)(m_Data + 3644)); /*0x518f5e*/
      v15 += v11[2] * dword_7EAEFC[((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F]; /*0x518f76*/
    }
    return v15 + *v11; /*0x518f76*/
  }
  v10 = v16.m_Data; /*0x518ed6*/
  v11 = (_DWORD *)(v6 + *(_DWORD *)(v16.m_Data + 3644)); /*0x518ee0*/
  if ( (int)v11[2] > 0 ) /*0x518ee7*/
    return *(_DWORD *)(v6 + *(_DWORD *)(v10 + 3644) + 8) /*0x518f2e*/
         * dword_7EAEFC[((((unsigned int)*ObjectClass::CalcTargetFacing(this, &v16.m_Data, this->target) >> 10) + 1) >> 1)
                      & 0x1F]
         + v15
         + *(_DWORD *)(v6 + *(_DWORD *)(v10 + 3644));
  return v15 + *v11; /*0x518f0d*/
}



// ==== 0x00518F90  InfantryClass::Draw  this=InfantryClass  sig=csp ====
void InfantryClass::Draw(
        InfantryClass *this,
        int *a2,
        int *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  int *v16; // ecx
  int v17; // ebp
  int ptr_4; // edx
  int v19; // eax
  int v20; // edx
  char v21; // al
  int FlashFrameTime; // eax
  char *v23; // edx
  unsigned __int8 v24; // bl
  int v25; // eax
  int v26; // edx
  int v27; // ecx
  int v28; // eax
  _DWORD *v29; // eax
  CellClass *v30; // eax
  int v31; // eax
  int **v32; // ebx
  int v33; // eax
  _DWORD *v34; // eax
  InfantryClass *v35; // edi
  int v36; // edx
  int v37; // ecx
  bool v38; // zf
  int *v39; // esi
  unsigned int v40; // eax
  int *v41; // ebx
  int v42; // ecx
  int v43; // eax
  int uniqueId; // ebx
  int *v45; // esi
  signed int v46; // edi
  int v47; // ecx
  int v48; // eax
  unsigned int v49; // esi
  int v50; // esi
  int v51; // edi
  int v52; // esi
  int v53; // ebx
  CellClass *m_Position; // ecx
  int flags; // edx
  int v56; // eax
  int v57; // edi
  int v58; // eax
  int v59; // eax
  InfantryClass *v60; // edi
  int v61; // eax
  int *v62; // [esp+8h] [ebp-88h]
  int *v63; // [esp+14h] [ebp-7Ch]
  int v64; // [esp+14h] [ebp-7Ch]
  int v65; // [esp+20h] [ebp-70h]
  unsigned __int8 v66; // [esp+4Eh] [ebp-42h]
  unsigned __int8 v67; // [esp+4Fh] [ebp-41h]
  int v68; // [esp+50h] [ebp-40h]
  StreamClass v69; // [esp+54h] [ebp-3Ch] BYREF
  int v70; // [esp+68h] [ebp-28h] BYREF
  int ptr_0; // [esp+6Ch] [ebp-24h] BYREF
  int v72; // [esp+70h] [ebp-20h]
  int v73; // [esp+74h] [ebp-1Ch] BYREF
  int v74; // [esp+78h] [ebp-18h]
  int v75; // [esp+7Ch] [ebp-14h]
  _DWORD v76[4]; // [esp+80h] [ebp-10h] BYREF

  v17 = (int)v16; /*0x518f99*/
  ptr_4 = this->ptr_4; /*0x518f9d*/
  v19 = *v16; /*0x518fa0*/
  ptr_0 = this->ptr_0; /*0x518fa3*/
  v72 = ptr_4; /*0x518fb0*/
  v20 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(v19 + 448))(v16, &v69.StreamClass_field_0C); /*0x518fba*/
  v21 = *(_BYTE *)(v17 + 664); /*0x518fbc*/
  v69.m_Data = v20; /*0x518fc4*/
  v68 = 0; /*0x518fca*/
  if ( v21 ) /*0x518fce*/
  {
    FlashFrameTime = dword_8871E0[1].FlashFrameTime; /*0x518fda*/
    v23 = (char *)dword_8871E0 + 2 * FlashFrameTime; /*0x518fe0*/
    v24 = v23[FlashFrameTime + 6261]; /*0x518fed*/
    v66 = v23[FlashFrameTime + 6260]; /*0x518ffa*/
    v67 = v23[FlashFrameTime + 6262]; /*0x519004*/
    v25 = DDraw::GetStatus() - 1; /*0x51900d*/
    if ( v25 ) /*0x51900e*/
    {
      v28 = v25 - 1; /*0x519010*/
      if ( v28 ) /*0x519011*/
      {
LABEL_6:
        LOWORD(v26) = v66; /*0x51905b*/
        LOWORD(v28) = v67; /*0x519061*/
        LOWORD(v27) = v24 >> 1; /*0x51906c*/
        v68 |= v28 | (32 * ((32 * v26) | v27)); /*0x51907e*/
        goto LABEL_7; /*0x51907e*/
      }
      LOWORD(v26) = v67; /*0x519019*/
      LOWORD(v27) = v24; /*0x519025*/
      v25 = v26 | (32 * (v27 | (v66 << 6))); /*0x51902c*/
      v68 = v25; /*0x51902e*/
    }
    LOWORD(v26) = v66; /*0x519032*/
    LOWORD(v27) = v24 >> 1; /*0x51903f*/
    LOWORD(v25) = v67; /*0x519041*/
    v26 *= 32; /*0x519047*/
    v27 = v25 | ((v26 | v27) << 6); /*0x51904f*/
    HIWORD(v28) = HIWORD(v27) | HIWORD(v68); /*0x519055*/
    v68 |= v27; /*0x519057*/
    goto LABEL_6; /*0x519057*/
  }
LABEL_7:
  v29 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v17 + 72))(v17, &v73); /*0x519082*/
  *(_WORD *)v69.__pad_0 = *v29 / 256; /*0x51909f*/
  *(_WORD *)&v69.__pad_0[2] = v29[1] / 256; /*0x5190b7*/
  v69.m_Position = *(_DWORD *)v69.__pad_0; /*0x5190c0*/
  v30 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v69.m_Position); /*0x5190ca*/
  if ( (unsigned __int8)CellClass::QuickPassable(v30) ) /*0x5190d1*/
    v68 = 0; /*0x5190da*/
  if ( *(_BYTE *)(v17 + 1668) != 0xFF ) /*0x5190e5*/
  {
    TacticalClass::AddToDrawQueue((TacticalClass *)g_TacticalClass_Instance, v17, ptr_0, v72); /*0x519609*/
LABEL_56:
    AbstractClass::COMStub_Return0_69((FootClass *)&ptr_0, (int)a2); /*0x51960e*/
    return; /*0x51961a*/
  }
  v31 = *(_DWORD *)(v17 + 1652); /*0x5190eb*/
  v32 = (int **)(v17 + 1652); /*0x5190f1*/
  *(_DWORD *)v69.__pad_0 = 0; /*0x5190f9*/
  if ( !v31 ) /*0x5190fd*/
    goto LABEL_15; /*0x5190fd*/
  v33 = StreamClass::Set2(&v69, (_DWORD *)(v17 + 1652)); /*0x519104*/
  if ( v33 < 0 && v33 != -2147467262 ) /*0x519112*/
    WinAPI::Wrapper(v33); /*0x519115*/
  if ( !*(_DWORD *)v69.__pad_0 ) /*0x519120*/
LABEL_15:
    WinAPI::Wrapper(-2147467261); /*0x519127*/
  (*(void (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)v69.__pad_0 + 12))(*(_DWORD *)v69.__pad_0, v76); /*0x519138*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 456))(v17) > 0 && !memcmp(v76, &g_CLSID_DriveLocomotion, 0x10u) ) /*0x51915e*/
  {
    v69.m_Position = (int)SearchMIXFile(aPodShp, 0); /*0x519172*/
    if ( !*v32 ) /*0x519176*/
      WinAPI::Wrapper(-2147467261); /*0x519181*/
    v34 = (_DWORD *)(*(int (__stdcall **)(int *, int *))(**v32 + 48))(*v32, &v73); /*0x519190*/
    v35 = this; /*0x519193*/
    v36 = v34[1]; /*0x519199*/
    v37 = this->ptr_4; /*0x5191a0*/
    v69.StreamClass_field_0C = *v34 + this->ptr_0; /*0x5191a3*/
    v38 = *v32 == 0; /*0x5191ab*/
    v70 = v36 + v37; /*0x5191ad*/
    if ( v38 ) /*0x5191b1*/
      WinAPI::Wrapper(-2147467261); /*0x5191b8*/
    v39 = *v32; /*0x5191c3*/
    v65 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v17 + 748))(v17, 0) - 2; /*0x5191e1*/
    v63 = a3; /*0x5191f1*/
    v40 = (*(int (**)(void))(*v39 + 136))(); /*0x5191f4*/
    DrawToSurfaceSHP( /*0x51920c*/
      (int)g_DSurface_Hidden_2,
      (int)dword_87F6C4,
      v69.m_Position,
      v40,
      v39,
      &v70,
      (int)v63,
      11777,
      0,
      v65,
      1000,
      v68,
      0,
      0,
      0,
      0);
    CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v69.m_Data); /*0x51921b*/
    CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v69.m_Data); /*0x51922a*/
    if ( !*v32 ) /*0x51922f*/
      WinAPI::Wrapper(-2147467261); /*0x51923c*/
    v41 = *v32; /*0x519248*/
    v42 = *v41; /*0x519255*/
    this = *(InfantryClass **)v17; /*0x519267*/
    v43 = (*(int (__stdcall **)(int *, InfantryClass *, int *, _DWORD, int, _DWORD, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v42 + 136))( /*0x519271*/
            v41,
            v35,
            a2,
            0,
            256,
            0,
            2,
            0,
            1000,
            0,
            0,
            0,
            0,
            0,
            0);
    (*(void (__thiscall **)(int, InfantryClass *, int))(a15 + 1292))(v17, this, v43); /*0x519286*/
LABEL_53:
    if ( *(_DWORD *)v69.__pad_0 ) /*0x5195ee*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v69.__pad_0 + 8))(*(_DWORD *)v69.__pad_0); /*0x5195f3*/
    goto LABEL_56; /*0x5195f6*/
  }
  v69.StreamClass_field_0C = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 108))(v17); /*0x51929d*/
  if ( v69.StreamClass_field_0C )
  {
    this = *(InfantryClass **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v17 + 448))(v17, &v69.m_Position); /*0x5192da*/
    TacticalClass::AddToDrawQueue((TacticalClass *)g_TacticalClass_Instance, v17, ptr_0, v72); /*0x5192e6*/
    if ( (unsigned __int8)LightningStorm::IsActive() ) /*0x5192eb*/
    {
      uniqueId = dword_A8B230[379].uniqueId; /*0x5192fa*/
    }
    else if ( (unsigned __int8)PsyDom::IsActive() ) /*0x519302*/
    {
      uniqueId = dword_A8B230[380].NeedsSaveOrLink; /*0x519311*/
    }
    else if ( NukeFlash::IsActive() ) /*0x519319*/
    {
      uniqueId = dword_A8B230[380].ptr_4; /*0x519327*/
    }
    else
    {
      uniqueId = dword_A8B230[378].referenceCount; /*0x519335*/
    }
    if ( *(_BYTE *)(v17 + 140) ) /*0x51933b*/
      goto LABEL_39; /*0x51933b*/
    v45 = (int *)(v17 + 156); /*0x519349*/
    v73 = *(_DWORD *)(v17 + 156); /*0x519353*/
    v74 = *(_DWORD *)(v17 + 160); /*0x51935f*/
    v75 = *(_DWORD *)(v17 + 164); /*0x51936b*/
    if ( (Coord::To_Cell((Coord *)&dword_87F7E8, &v73)->flags & 0x10000) == 0 ) /*0x51937e*/
      goto LABEL_38; /*0x51937e*/
    v73 = *v45; /*0x519384*/
    v74 = *(_DWORD *)(v17 + 160); /*0x51938b*/
    v46 = *(_DWORD *)(v17 + 164); /*0x51938f*/
    v73 = *v45; /*0x519394*/
    v74 = *(_DWORD *)(v17 + 160); /*0x5193a0*/
    v75 = *(_DWORD *)(v17 + 164); /*0x5193a7*/
    if ( v46 > (int)(dword_A8F234 / 2 + Cell::GetGroundHeight(&v73)) )
    {
LABEL_39:
      v51 = uniqueId * ((*(int (__thiscall **)(int))(*(_DWORD *)v17 + 456))(v17) / (2 * dword_A8F240)); /*0x51943c*/
      v50 = v51 + *((__int16 *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&this) + 133); /*0x51944b*/
    }
    else
    {
LABEL_38:
      v47 = *(_DWORD *)(v17 + 164); /*0x5193c9*/
      v48 = *(_DWORD *)(v17 + 160); /*0x5193cc*/
      v73 = *v45; /*0x5193cf*/
      v75 = v47; /*0x5193d7*/
      v74 = v48; /*0x5193e1*/
      v49 = (Coord::To_Cell((Coord *)&dword_87F7E8, &v73)->flags & 0x10000) != 0 ? 0xFFFFFE0C : 0;
      v50 = *((__int16 *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&this) + 133) + v49; /*0x519416*/
    }
    v52 = *(_DWORD *)dword_8871E0->RadColor + v50; /*0x519457*/
    v53 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 456))(v17); /*0x519469*/
    v73 = *(_DWORD *)(v17 + 156); /*0x51946f*/
    v74 = *(_DWORD *)(v17 + 160); /*0x519480*/
    v75 = *(_DWORD *)(v17 + 164); /*0x519487*/
    m_Position = Coord::To_Cell((Coord *)&dword_87F7E8, &v73); /*0x519490*/
    v69.m_Position = (int)m_Position; /*0x519492*/
    flags = m_Position->flags; /*0x519496*/
    if ( (flags & 0x100) == 0 || v53 < dword_A8F234 ) /*0x5194a7*/
      goto LABEL_48; /*0x5194a7*/
    if ( (flags & 0x800) != 0 ) /*0x5194ac*/
    {
      if ( (*((_DWORD *)Cell::GetNeighbourContent((Cell *)m_Position, 0) + 80) & 0x100) != 0 ) /*0x5194be*/
      {
LABEL_47:
        v53 -= dword_A8F234; /*0x5194e1*/
LABEL_48:
        if ( v53 > 0 && (dword_A8F244 || (dword_A8F244 = (int)SearchMIXFile(aInfshdwShp, 0)) != 0) ) /*0x51950b*/
        {
          v56 = *(_DWORD *)(v17 + 160); /*0x51950f*/
          v57 = *(_DWORD *)(v17 + 164); /*0x519512*/
          v73 = *(_DWORD *)(v17 + 156); /*0x519517*/
          v74 = v56; /*0x51951b*/
          v58 = ZCoordToScreenY(v53); /*0x51951f*/
          v69.m_Size = v72 - *(char *)(v17 + 1716) + v58; /*0x51953b*/
          v69.m_Position = ptr_0; /*0x51954e*/
          v59 = ZCoordToScreenY(v57 - v53); /*0x519552*/
          DrawToSurfaceSHP( /*0x519585*/
            (int)g_DSurface_Hidden_2,
            (int)dword_87F6C4,
            dword_A8F244,
            1u,
            &v69.m_Position,
            a2,
            9729,
            0,
            -5 - v59,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
        }
        v69.m_Size = v72 - *(char *)(v17 + 1716); /*0x5195ab*/
        v64 = dword_825500; /*0x5195b8*/
        v62 = a2; /*0x5195ca*/
        v69.m_Position = ptr_0; /*0x5195cb*/
        v60 = *(InfantryClass **)v17; /*0x5195cf*/
        v61 = CalculateLocomotionFrameIndex((TechnoClass *)v17); /*0x5195d5*/
        ((void (__thiscall *)(int, int, int, int *, int *, _DWORD, int, int, int, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v60->shouldLoseTarget)( /*0x5195e2*/
          v17,
          v69.StreamClass_field_0C,
          v61,
          &v69.m_Position,
          v62,
          0,
          256,
          v64,
          2,
          0,
          v52,
          v68,
          0,
          0,
          0,
          0,
          0);
        goto LABEL_53; /*0x5195e2*/
      }
      m_Position = (CellClass *)v69.m_Position; /*0x5194c0*/
    }
    if ( (m_Position->flags & 0x800) != 0 /*0x5194df*/
      || (*((_DWORD *)Cell::GetNeighbourContent((Cell *)m_Position, 6u) + 80) & 0x100) == 0 )
    {
      goto LABEL_48; /*0x5194df*/
    }
    goto LABEL_47; /*0x5194df*/
  }
  if ( *(_DWORD *)v69.__pad_0 ) /*0x5192a9*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v69.__pad_0 + 8))(*(_DWORD *)v69.__pad_0); /*0x5192b2*/
}



// ==== 0x00519630  InfantryClass::RepairBridge  this=InfantryClass  sig=csp ====
void __thiscall InfantryClass::RepairBridge(InfantryClass *this, CellClass *p_Cell_field_0x0, double a3, int *a4)
{
  CellClass *v4; // edi
  double v5; // st7
  Cell *location; // ebp
  int Type; // eax
  int movementDestination; // ecx
  BuildingClass *v10; // edi
  int ptr_0; // ebx
  int v12; // eax
  TeamClass *attachedTag; // ecx
  BuildingClass *v14; // eax
  BuildingClass *v15; // ebx
  TeamClass *v16; // ecx
  int v17; // edx
  int v18; // edi
  unsigned int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int v24; // edi
  unsigned int v25; // eax
  int v26; // eax
  TeamClass *v27; // ecx
  _DWORD *v28; // eax
  _BYTE *v31; // ecx
  ObjectClass *v32; // edi
  _WORD *v33; // ebx
  _WORD *v34; // eax
  TeamClass *v35; // ecx
  int v36; // edx
  TechnoClass *v37; // ecx
  TeamClass *v38; // ecx
  int *v39; // eax
  int v40; // ecx
  int v41; // ebx
  int v42; // eax
  int v43; // edi
  int v44; // ebx
  _WORD *v45; // eax
  BuildingClass *v46; // eax
  BuildingClass *v47; // edi
  TeamClass *v48; // ecx
  int v49; // eax
  __int64 v50; // rax
  int v51; // ebx
  _WORD *v52; // eax
  int v53; // ebp
  _WORD *v54; // eax
  int v55; // eax
  __int16 *v56; // eax
  int v57; // eax
  int i; // ebx
  char v59; // bl
  int v64; // eax
  CellClass *v65; // edx
  int v66; // eax
  int v70; // eax
  TeamClass *v71; // ecx
  TechnoClass *v72; // ecx
  int v73; // eax
  int v74; // ebx
  int v75; // eax
  CellClass *v76; // eax
  CellClass *v77; // eax
  _DWORD *Building; // edi
  PlacementList *v79; // eax
  Cell *v80; // eax
  _DWORD *v81; // eax
  Cell *v82; // eax
  PlacementList *v83; // eax
  CellClass *v84; // eax
  int v85; // ecx
  _DWORD *v86; // ebx
  _DWORD *v87; // eax
  CellClass *v88; // ebp
  _DWORD *v89; // eax
  TeamClass *v90; // ecx
  Cell *v91; // eax
  int mindControlledBy; // eax
  _DWORD *v93; // eax
  int v94; // eax
  _WORD *v95; // ebx
  _WORD *v96; // eax
  int v97; // eax
  _DWORD *v98; // eax
  _DWORD *v99; // edi
  TeamClass *v100; // ecx
  int v101; // eax
  int v102; // ebx
  int v103; // eax
  int v105; // ebx
  int v106; // eax
  int v107; // edx
  int v108; // kr00_4
  double v109; // st7
  wchar_t *v111; // ebx
  int v112; // eax
  int v113; // edx
  int v114; // eax
  int v115; // ebx
  int v116; // eax
  _DWORD *v117; // eax
  int *v118; // ebx
  _DWORD *Value; // eax
  int v120; // edx
  unsigned int v121; // eax
  int v122; // edi
  int v123; // ecx
  int v124; // eax
  int v125; // eax
  int v126; // edx
  int v127; // ecx
  _DWORD *v128; // eax
  int v129; // eax
  int lastSightRange; // ecx
  int v131; // ecx
  int v132; // edx
  int landType; // ebx
  int v134; // edx
  char v135; // [esp+0h] [ebp-54h]
  char v136; // [esp+0h] [ebp-54h]
  char v137; // [esp+0h] [ebp-54h]
  char v138; // [esp+0h] [ebp-54h]
  _DWORD *v139; // [esp+4h] [ebp-50h]
  int v140; // [esp+8h] [ebp-4Ch]
  _DWORD *v141; // [esp+Ch] [ebp-48h]
  Cell *v142; // [esp+18h] [ebp-3Ch]
  int v143; // [esp+18h] [ebp-3Ch]
  int v144; // [esp+1Ch] [ebp-38h]
  int v145; // [esp+20h] [ebp-34h]
  __int16 v146[2]; // [esp+24h] [ebp-30h] BYREF
  __int16 v147[2]; // [esp+28h] [ebp-2Ch] BYREF
  int v148; // [esp+2Ch] [ebp-28h] BYREF
  double v149; // [esp+30h] [ebp-24h] BYREF
  int v150; // [esp+38h] [ebp-1Ch]
  int Cell_field_0x0; // [esp+3Ch] [ebp-18h] BYREF
  int Cell_field_0x4; // [esp+40h] [ebp-14h]
  int Cell_field_0x8; // [esp+44h] [ebp-10h]
  int v154; // [esp+48h] [ebp-Ch] BYREF
  int v155; // [esp+4Ch] [ebp-8h]
  int v156; // [esp+50h] [ebp-4h]

  location = (Cell *)this->location; /*0x519639*/
  Cell_field_0x0 = this->location[0]; /*0x519643*/
  Cell_field_0x4 = this->location[1]; /*0x519654*/
  Cell_field_0x8 = this->location[2]; /*0x51965b*/
  v142 = (Cell *)Coord::To_Cell((Coord *)&dword_87F7E8, &Cell_field_0x0); /*0x519664*/
  if ( p_Cell_field_0x0 != (CellClass *)2 ) /*0x51966f*/
  {
LABEL_216:
    if ( this->isAliveFlag[0] ) /*0x51a9eb*/
      FootClass::UpdateAI((FootClass *)p_Cell_field_0x0, (int)location, (int)v4, v5, (int)v139); /*0x51a9fc*/
    return; /*0x51a9fc*/
  }
  if ( (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) == 8 ) /*0x519682*/
  {
    Type = this->Type; /*0x519688*/
    if ( *(_BYTE *)(Type + 3765) || *(_BYTE *)(Type + 3764) ) /*0x519698*/
    {
      movementDestination = this->movementDestination; /*0x5196a6*/
      if ( movementDestination ) /*0x5196ae*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)movementDestination + 44))(movementDestination) == 6 ) /*0x5196bc*/
        {
          v10 = (BuildingClass *)this->movementDestination; /*0x5196c2*/
          if ( v10 == (BuildingClass *)Cell::IsBridge(v142) ) /*0x5196cf*/
          {
            if ( (unsigned __int8)BuildingClass::CanRepair(v10, (int)this) ) /*0x5196d4*/
            {
              attachedTag = (TeamClass *)v10->attachedTag; /*0x519710*/
              if ( attachedTag ) /*0x519715*/
                TeamClass::Update_0(attachedTag, 1, (int)this, dword_A8F1E0, 0, 0); /*0x519725*/
              TechnoClass::GarrisonBuilding(this, v10); /*0x51972d*/
            }
            else
            {
              (*(void (__thiscall **)(InfantryClass *, _DWORD, int))(this->ptr_0 + 1152))(this, 0, 1); /*0x5196e5*/
              ptr_0 = this->ptr_0; /*0x5196ed*/
              v12 = (*(int (__thiscall **)(BuildingClass *, int *, int, int))(v10->ptr_0 + 72))(v10, &v154, 1, 1); /*0x5196fa*/
              (*(void (__thiscall **)(InfantryClass *, int))(ptr_0 + 372))(this, v12); /*0x519700*/
            }
            return; /*0x51970d*/
          }
        }
      }
    }
  }
  if ( (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) == 9 ) /*0x519749*/
  {
    v14 = (BuildingClass *)Cell::IsBridge(v142); /*0x519753*/
    v15 = v14; /*0x519758*/
    if ( v14 ) /*0x51975c*/
    {
      if ( v14 == (BuildingClass *)this->movementDestination || v14 == (BuildingClass *)this->target ) /*0x519770*/
      {
        v16 = (TeamClass *)v14->attachedTag; /*0x519776*/
        if ( v16 ) /*0x51977b*/
          TeamClass::Update_0(v16, 1, (int)this, dword_A8F1E0, 0, 0); /*0x51978b*/
        if ( *(int *)((*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 132))(this) + 1228) > 0 /*0x5197af*/
          && (unsigned __int8)House::IsHumanPlayer((House *)this->owner) )
        {
          Cell_field_0x0 = location->Cell_field_0x0; /*0x5197bc*/
          v17 = this->ptr_0; /*0x5197c0*/
          Cell_field_0x4 = location->Cell_field_0x4; /*0x5197c5*/
          Cell_field_0x8 = location->Cell_field_0x8; /*0x5197cc*/
          v18 = (*(int (__thiscall **)(InfantryClass *))(v17 + 132))(this) + 1212; /*0x5197df*/
          v19 = (unsigned int)Random::State(&Randomizer_Global) % *(_DWORD *)(v18 + 16); /*0x5197f0*/
          v20 = *(_DWORD *)(v18 + 4); /*0x5197f3*/
          p_Cell_field_0x0 = (CellClass *)&Cell_field_0x0; /*0x5197f6*/
          StartAudioControllerAt(*(_DWORD *)(v20 + 4 * v19), &Cell_field_0x0, 0); /*0x519803*/
        }
        if ( *(int *)((*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 132))(this) + 1312) > 0 ) /*0x51981f*/
        {
          v21 = location->Cell_field_0x0; /*0x519824*/
          v22 = location->Cell_field_0x8; /*0x519827*/
          Cell_field_0x4 = location->Cell_field_0x4; /*0x51982a*/
          v23 = this->ptr_0; /*0x51982e*/
          Cell_field_0x0 = v21; /*0x519830*/
          Cell_field_0x8 = v22; /*0x519836*/
          v24 = (*(int (__thiscall **)(InfantryClass *))(v23 + 132))(this) + 1296; /*0x519847*/
          v25 = Random::State(&Randomizer_Global); /*0x51984d*/
          StartAudioControllerAt( /*0x519865*/
            *(_DWORD *)(*(_DWORD *)(v24 + 4) + 4 * (v25 % *(_DWORD *)(v24 + 16))),
            &Cell_field_0x0,
            0);
        }
        v26 = (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 700))(this); /*0x51986e*/
        HouseClass::AddPower((HouseClass *)v15->owner, v26); /*0x51987b*/
        v27 = (TeamClass *)this->attachedTag; /*0x519880*/
        if ( v27 ) /*0x519885*/
          TeamClass::Update_0(v27, 48, (int)this, dword_A8F1E0, 0, 0); /*0x519894*/
        if ( *(_BYTE *)(v15->Type + 5805) ) /*0x51989f*/
        {
          v28 = (_DWORD *)(*(int (__thiscall **)(InfantryClass *, int *))(this->ptr_0 + 72))(this, &v154); /*0x5198b8*/
          StartAudioControllerAt(*(_DWORD *)&dword_8871E0->__pad_240[40], v28, 0); /*0x5198c9*/
          if ( v15->Anims[3] ) /*0x5198ce*/
          {
            BuildingClass::ClearAnims(v15, 3); /*0x5198e0*/
            BuildingClass::GetHealthRatio(v15); /*0x5198e7*/
            _EDX = dword_8871E0; /*0x5198ec*/
            __asm /*0x5198f2*/
            {
              fcomp qword ptr [edx+1700h]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x5198fd*/
              BuildingClass::PlayUpgradeAnim(v15, 10, 1, 0, 0); /*0x51990d*/
            else
              BuildingClass::PlayUpgradeAnim(v15, 10, 0, 0, 0); /*0x51992f*/
            (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 248))(this); /*0x519916*/
            return; /*0x519923*/
          }
        }
LABEL_114:
        (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 248))(this); /*0x51a02a*/
        return; /*0x51a03b*/
      }
    }
  }
  if ( (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) == 8 /*0x519973*/
    || (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) == 11
    || (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) == 25 )
  {
    v31 = (_BYTE *)this->movementDestination; /*0x519979*/
    if ( v31 ) /*0x519981*/
    {
      if ( (v31[20] & 1) != 0 ) /*0x519990*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v31 + 128))(v31) ) /*0x519998*/
        {
          v32 = (ObjectClass *)this->movementDestination; /*0x5199a6*/
          if ( v32 ) /*0x5199ae*/
          {
            if ( (*(int (__thiscall **)(int))(v32->ptr_0 + 44))(this->movementDestination) == 6 ) /*0x5199be*/
            {
              v33 = (_WORD *)(*(int (__thiscall **)(ObjectClass *, __int16 *))(v32->ptr_0 + 440))(v32, v147); /*0x5199d5*/
              v34 = (_WORD *)(*(int (__thiscall **)(InfantryClass *, __int16 *))(this->ptr_0 + 440))(this, v146); /*0x5199de*/
              if ( *v34 == *v33 && v34[1] == v33[1] ) /*0x5199f8*/
              {
                v35 = (TeamClass *)v32->attachedTag; /*0x5199fa*/
                if ( v35 ) /*0x5199ff*/
                  TeamClass::Update_0(v35, 1, (int)this, dword_A8F1E0, 0, 0); /*0x519a0e*/
                (*(void (__thiscall **)(ObjectClass *, _DWORD))(v32->ptr_0 + 220))(v32, 0); /*0x519a19*/
                (*(void (__thiscall **)(ObjectClass *, int, int))(v32->ptr_0 + 980))(v32, this->owner, 1); /*0x519a2c*/
                v36 = v32->ptr_0; /*0x519a40*/
                v32[4].parachute = *(_DWORD *)(this->Type + 3576); /*0x519a42*/
                (*(void (__thiscall **)(ObjectClass *))(v36 + 736))(v32); /*0x519a48*/
                v37 = (TechnoClass *)this->attachedTag; /*0x519a4e*/
                if ( v37 && (unsigned __int8)TechnoClass::HasAnyMission(v37) ) /*0x519a55*/
                  ObjectClass::SetReference(v32, this->attachedTag); /*0x519a64*/
                v38 = (TeamClass *)this->attachedTag; /*0x519a69*/
                if ( !v38 ) /*0x519a6e*/
                  goto LABEL_114; /*0x519a6e*/
                goto LABEL_113; /*0x519a6e*/
              }
              if ( !this->locomotor ) /*0x519a79*/
                WinAPI::Wrapper(-2147467261); /*0x519a88*/
              v39 = (int *)(*(int (__stdcall **)(int, int *))(*(_DWORD *)this->locomotor + 20))(this->locomotor, &v154); /*0x519a9b*/
              v40 = *v39; /*0x519a9e*/
              v41 = v39[1]; /*0x519aa6*/
              v42 = v39[2]; /*0x519aa9*/
              if ( v40 == dword_A8F200 && v41 == dword_A8F204 && v42 == dword_A8F208 /*0x519af8*/
                || (v43 = v40 / 256,
                    v44 = v41 / 256,
                    v45 = (_WORD *)(*(int (__thiscall **)(InfantryClass *, __int16 *))(this->ptr_0 + 440))(this, v147),
                    *v45 == (_WORD)v43)
                && v45[1] == (_WORD)v44 )
              {
                (*(void (__thiscall **)(InfantryClass *, int, int))(this->ptr_0 + 1152))( /*0x519b07*/
                  this,
                  this->movementDestination,
                  1);
                return; /*0x519b14*/
              }
            }
          }
        }
      }
    }
    v46 = (BuildingClass *)Cell::IsBridge(v142); /*0x519b1b*/
    v47 = v46; /*0x519b20*/
    if ( v46 && (v46 == (BuildingClass *)this->movementDestination || v46 == (BuildingClass *)this->target) ) /*0x519b38*/
    {
      v48 = (TeamClass *)v46->attachedTag; /*0x519b3e*/
      if ( v48 ) /*0x519b43*/
        TeamClass::Update_0(v48, 1, (int)this, dword_A8F1E0, 0, 0); /*0x519b53*/
      v49 = this->Type; /*0x519b58*/
      if ( *(_BYTE *)(v49 + 3779) ) /*0x519b5e*/
      {
        if ( (*(int (__thiscall **)(BuildingClass *))(v47->ptr_0 + 44))(v47) == 6 && *(_BYTE *)(v47->Type + 5814) ) /*0x519b82*/
        {
          if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) ) /*0x519b96*/
          {
            v50 = ((__int64 (__thiscall *)(InfantryClass *, CellClass **))*(_DWORD *)(this->ptr_0 + 440))( /*0x519ba8*/
                    this,
                    &p_Cell_field_0x0);
            if ( (unsigned __int8)CreateTriggerClassIfFarEnough(14, SHIDWORD(v50), *(_DWORD *)v50) ) /*0x519bb6*/
              VoxClass::FindAndPlay(&stru_825538, -1); /*0x519bc9*/
          }
          if ( *(_DWORD *)&dword_8871E0->__pad_240[8] != -1 ) /*0x519bda*/
          {
            Cell_field_0x0 = v47->location[0]; /*0x519be6*/
            Cell_field_0x4 = v47->location[1]; /*0x519bed*/
            Cell_field_0x8 = v47->location[2]; /*0x519bf4*/
            StartAudioControllerAt(*(_DWORD *)&dword_8871E0->__pad_240[8], &Cell_field_0x0, 0); /*0x519c02*/
          }
          LOBYTE(p_Cell_field_0x0) = 0; /*0x519c07*/
          v143 = -2; /*0x519c0c*/
          do /*0x519cd3*/
          {
            v51 = -2; /*0x519c14*/
            do /*0x519cc1*/
            {
              v52 = (_WORD *)(*(int (__thiscall **)(InfantryClass *, int *))(this->ptr_0 + 440))(this, &v148); /*0x519c22*/
              LOWORD(v144) = *v52 + v51; /*0x519c37*/
              HIWORD(v144) = v143 + v52[1]; /*0x519c40*/
              *(_DWORD *)v146 = v144; /*0x519c49*/
              v53 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v146) + 14); /*0x519c58*/
              v54 = (_WORD *)(*(int (__thiscall **)(InfantryClass *, double *))(this->ptr_0 + 440))(this, &v149); /*0x519c64*/
              LOWORD(v145) = v51 + *v54; /*0x519c79*/
              HIWORD(v145) = v143 + v54[1]; /*0x519c82*/
              *(_DWORD *)v147 = v145; /*0x519c8b*/
              v55 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v147) + 17); /*0x519ca0*/
              if ( v53 >= g_TerrainBridgeIndex && v53 < g_TerrainBridgeIndex + 16 || v55 >= 74 && v55 <= 101 ) /*0x519cb6*/
                LOBYTE(p_Cell_field_0x0) = 1; /*0x519cb8*/
              ++v51; /*0x519cbd*/
            }
            while ( v51 < 3 ); /*0x519cc1*/
            ++v143; /*0x519ccf*/
          }
          while ( v143 < 3 ); /*0x519cd3*/
          if ( (_BYTE)p_Cell_field_0x0 ) /*0x519cdf*/
          {
            v56 = (__int16 *)(*(int (__thiscall **)(InfantryClass *, CellClass **))(this->ptr_0 + 440))( /*0x519cea*/
                               this,
                               &p_Cell_field_0x0);
            Terrain::ProcessCellModification((Terrain *)&dword_87F7E8, v56); /*0x519cf6*/
          }
          else
          {
            v57 = (*(int (__thiscall **)(InfantryClass *, CellClass **))(this->ptr_0 + 440))(this, &p_Cell_field_0x0); /*0x519d06*/
            Terrain::RecursiveModify((Terrain *)&dword_87F7E8, v57); /*0x519d12*/
          }
          for ( i = dword_A83DF8 - 1; i >= 0; --i ) /*0x519d22*/
            (*(void (__thiscall **)(_DWORD, BuildingClass *, _DWORD))(**((_DWORD **)dword_A83DEC + i) + 40))( /*0x519d32*/
              *((_DWORD *)dword_A83DEC + i),
              v47,
              0);
          (*(void (__thiscall **)(BuildingClass *))(v47->ptr_0 + 736))(v47); /*0x519d3c*/
          goto LABEL_112; /*0x519d42*/
        }
        if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v47) /*0x519d74*/
          || *(_BYTE *)(*(_DWORD *)(v47->owner + 52) + 422) && *(_BYTE *)(v47->Type + 5499) )
        {
          if ( v47->health != *(_DWORD *)((*(int (__thiscall **)(BuildingClass *))(v47->ptr_0 + 132))(v47) + 160) ) /*0x519fb7*/
          {
            (*(void (__thiscall **)(BuildingClass *))(v47->ptr_0 + 1036))(v47); /*0x519ff0*/
            goto LABEL_112; /*0x519ff6*/
          }
        }
        else
        {
          v59 = 0; /*0x519d86*/
          if ( (*(int (__thiscall **)(BuildingClass *))(v47->ptr_0 + 44))(v47) == 6 ) /*0x519d8e*/
            v59 = *(_BYTE *)(v47->Type + 5490); /*0x519d96*/
          if ( *(_DWORD *)&dword_A8B238 ) /*0x519da3*/
          {
            if ( stru_A8B250.__pad_0[28] ) /*0x519db0*/
            {
              BuildingClass::GetHealthRatio(v47); /*0x519db8*/
              _EDX = dword_8871E0; /*0x519dbd*/
              __asm /*0x519dc3*/
              {
                fcomp qword ptr [edx+1708h]
                fnstsw ax
              }
              if ( (_AX & 0x4100) == 0 ) /*0x519dce*/
              {
                _EAX = (*(int (__thiscall **)(BuildingClass *))(v47->ptr_0 + 132))(v47); /*0x519dd8*/
                __asm { fild dword ptr [eax+0A0h] } /*0x519dde*/
                _ECX = dword_8871E0; /*0x519de4*/
                __asm /*0x519dea*/
                {
                  fmul qword ptr [ecx+1708h]
                  fmul ds:dbl_7E1738
                }
                LOWORD(v64) = Math::RoundToInt(v5); /*0x519df6*/
                v65 = (CellClass *)(v47->health - v64); /*0x519e00*/
                v66 = v47->ptr_0; /*0x519e02*/
                p_Cell_field_0x0 = v65; /*0x519e04*/
                __asm /*0x519e08*/
                {
                  fild [esp+50h+arg_0]
                  fstp qword ptr [esp+50h+var_24]
                }
                _EAX = (*(int (__thiscall **)(BuildingClass *))(v66 + 132))(v47); /*0x519e10*/
                _EBX = dword_8871E0; /*0x519e16*/
                __asm /*0x519e1c*/
                {
                  fild dword ptr [eax+0A0h]
                  fld qword ptr [ebx+1708h]
                  fmul ds:dbl_7E1738
                  fsubr ds:dbl_7E1718
                  fmul ds:dbl_7E1738
                  fmulp st(1), st
                  fcomp qword ptr [esp+50h+var_24]
                  fnstsw ax
                }
                if ( (_EAX & 0x100) != 0 ) /*0x519e45*/
                {
                  _EAX = (*(int (__thiscall **)(BuildingClass *))(v47->ptr_0 + 132))(v47); /*0x519e4b*/
                  _EBX = dword_8871E0; /*0x519e51*/
                  __asm /*0x519e57*/
                  {
                    fild dword ptr [eax+0A0h]
                    fld qword ptr [ebx+1708h]
                    fmul ds:dbl_7E1738
                    fsubr ds:dbl_7E1718
                    fmul ds:dbl_7E1738
                    fmulp st(1), st
                  }
                }
                else
                {
                  __asm { fld qword ptr [esp+50h+var_24] } /*0x519e79*/
                }
                LOWORD(v70) = Math::RoundToInt(v5); /*0x519e7d*/
                *(_DWORD *)v147 = v70; /*0x519e84*/
                (*(void (__thiscall **)(BuildingClass *, __int16 *, _DWORD, _DWORD, InfantryClass *, int, _DWORD, _DWORD))(v47->ptr_0 + 364))( /*0x519e9f*/
                  v47,
                  v147,
                  0,
                  *(_DWORD *)&_EBX->__pad_C3C[876],
                  this,
                  1,
                  0,
                  0);
                goto LABEL_112; /*0x519ea5*/
              }
            }
          }
          if ( !v59 ) /*0x519eac*/
            goto LABEL_112; /*0x519eac*/
          if ( v47->currentMission != 19 /*0x519ef2*/
            && !(*(unsigned __int8 (__thiscall **)(BuildingClass *))(v47->ptr_0 + 468))(v47) )
          {
            v71 = (TeamClass *)v47->attachedTag; /*0x519f2f*/
            if ( v71 ) /*0x519f34*/
              TeamClass::Update_0(v71, 1, (int)this, dword_A8F1E0, 0, 0); /*0x519f44*/
            *(_BYTE *)(v47->owner + 580) = 1; /*0x519f4f*/
            v72 = (TechnoClass *)this->attachedTag; /*0x519f56*/
            if ( v72 && (unsigned __int8)TechnoClass::HasAnyMission(v72) ) /*0x519f5d*/
              ObjectClass::SetReference(v47, this->attachedTag); /*0x519f6c*/
            (*(void (__thiscall **)(BuildingClass *, int, int))(v47->ptr_0 + 980))(v47, this->owner, 1); /*0x519f7e*/
            v73 = v47->ptr_0; /*0x519f8a*/
            v47->waveEffect = *(_DWORD *)(this->Type + 3576); /*0x519f94*/
            (*(void (__thiscall **)(BuildingClass *))(v73 + 736))(v47); /*0x519f9a*/
LABEL_112:
            v38 = (TeamClass *)this->attachedTag; /*0x51a010*/
            if ( !v38 ) /*0x51a015*/
              goto LABEL_114; /*0x51a015*/
LABEL_113:
            TeamClass::Update_0(v38, 48, (int)this, dword_A8F1E0, 0, 0); /*0x51a017*/
            goto LABEL_114; /*0x51a025*/
          }
        }
      }
      else if ( *(_BYTE *)(v49 + 3780) ) /*0x519ff8*/
      {
        BuildingClass::Infiltrate(v47, (void *)this->owner); /*0x51a00b*/
        goto LABEL_112; /*0x51a00b*/
      }
      (*(void (__thiscall **)(InfantryClass *, _DWORD, int))(this->ptr_0 + 1152))(this, 0, 1); /*0x519fc1*/
      v74 = this->ptr_0; /*0x519fc9*/
      v75 = (*(int (__thiscall **)(BuildingClass *, int *, int, int))(v47->ptr_0 + 72))(v47, &v154, 1, 1); /*0x519fd6*/
      (*(void (__thiscall **)(InfantryClass *, int))(v74 + 372))(this, v75); /*0x519fdc*/
      return; /*0x519fe9*/
    }
    if ( !this->movementDestination ) /*0x51a071*/
    {
      if ( this->currentMission != 11 ) /*0x51a082*/
        (*(void (__thiscall **)(InfantryClass *, _DWORD, int))(this->ptr_0 + 1156))(this, 0, 1); /*0x51a08c*/
      v149 = *(double *)&location->Cell_field_0x0; /*0x51a095*/
      v150 = location->Cell_field_0x8; /*0x51a0ad*/
      v76 = Coord::To_Cell((Coord *)&dword_87F7E8, &v149); /*0x51a0b1*/
      if ( Cell::IsBridge((Cell *)v76) ) /*0x51a0b8*/
        (*(void (__thiscall **)(InfantryClass *, int *, int, _DWORD))(this->ptr_0 + 372))(this, &dword_A8F200, 1, 0); /*0x51a0ce*/
    }
  }
  if ( *(_BYTE *)(this->Type + 3782) ) /*0x51a0da*/
  {
    v135 = this->onBridge[0]; /*0x51a0ec*/
    v77 = (CellClass *)(*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 444))(this); /*0x51a0ef*/
    Building = CellClass::FindBuilding(v77, v135); /*0x51a0fc*/
    if ( !Building ) /*0x51a100*/
    {
      v136 = this->onBridge[0]; /*0x51a10e*/
      v79 = (PlacementList *)(*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 444))(this); /*0x51a111*/
      Building = PlacementList::FindByType(v79, v136); /*0x51a11e*/
      if ( !Building ) /*0x51a122*/
      {
        v80 = (Cell *)(*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 444))(this); /*0x51a128*/
        v81 = Cell::IsBridge(v80); /*0x51a130*/
LABEL_128:
        Building = v81; /*0x51a184*/
      }
    }
  }
  else
  {
    v82 = (Cell *)(*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 444))(this); /*0x51a13b*/
    Building = Cell::IsBridge(v82); /*0x51a148*/
    if ( !Building ) /*0x51a14c*/
    {
      v137 = this->onBridge[0]; /*0x51a156*/
      v83 = (PlacementList *)(*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 444))(this); /*0x51a159*/
      Building = PlacementList::FindByType(v83, v137); /*0x51a166*/
      if ( !Building ) /*0x51a16a*/
      {
        v138 = this->onBridge[0]; /*0x51a174*/
        v84 = (CellClass *)(*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 444))(this); /*0x51a177*/
        v81 = CellClass::FindBuilding(v84, v138); /*0x51a17f*/
        goto LABEL_128; /*0x51a17f*/
      }
    }
  }
  v85 = this->movementDestination; /*0x51a186*/
  v86 = 0; /*0x51a18c*/
  if ( v85 && (*(int (__thiscall **)(int))(*(_DWORD *)v85 + 44))(v85) == 11 ) /*0x51a19e*/
  {
    v87 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->movementDestination + 72))( /*0x51a1ad*/
                      this->movementDestination,
                      &v154);
    v88 = Coord::To_Cell((Coord *)&dword_87F7E8, v87); /*0x51a1c1*/
    if ( *(_BYTE *)(this->Type + 3782) ) /*0x51a1c3*/
    {
      v86 = CellClass::FindBuilding(v88, 1); /*0x51a1d6*/
      if ( !v86 ) /*0x51a1da*/
      {
        v86 = PlacementList::FindByType((PlacementList *)v88, 1); /*0x51a1e5*/
        if ( !v86 ) /*0x51a1e9*/
        {
          v89 = Cell::IsBridge((Cell *)v88); /*0x51a1ed*/
LABEL_138:
          v86 = v89; /*0x51a219*/
        }
      }
    }
    else
    {
      v86 = Cell::IsBridge((Cell *)v88); /*0x51a1fb*/
      if ( !v86 ) /*0x51a1ff*/
      {
        v86 = PlacementList::FindByType((PlacementList *)v88, 1); /*0x51a20a*/
        if ( !v86 ) /*0x51a20e*/
        {
          v89 = CellClass::FindBuilding(v88, 1); /*0x51a214*/
          goto LABEL_138; /*0x51a214*/
        }
      }
    }
  }
  if ( (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) == 7 /*0x51a252*/
    && Building
    && ((_DWORD *)this->movementDestination == Building || (_DWORD *)this->target == Building || v86 && Building == v86) )
  {
    v90 = (TeamClass *)Building[13]; /*0x51a258*/
    if ( v90 ) /*0x51a25d*/
      TeamClass::Update_0(v90, 1, (int)this, dword_A8F1E0, 0, 0); /*0x51a26a*/
    if ( (*(int (__thiscall **)(_DWORD *))(*Building + 44))(Building) == 6 ) /*0x51a279*/
    {
      v91 = (Cell *)(*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 444))(this); /*0x51a283*/
      if ( Building == Cell::IsBridge(v91) /*0x51a2a7*/
        && (*(int (__thiscall **)(InfantryClass *, int))(this->ptr_0 + 628))(this, 21) == 1 )
      {
        this->missionData = 0; /*0x51a2b0*/
        TechnoClass::SetMember81(this, 0); /*0x51a2b6*/
        TechnoClass::SetSpread(this, 0); /*0x51a2be*/
        mindControlledBy = this->mindControlledBy; /*0x51a2c3*/
        if ( mindControlledBy && *(_DWORD *)(mindControlledBy + 700) ) /*0x51a2cd*/
          CaptureManagerClass::FreeUnit((CaptureManagerClass *)this, (int)v86, 0, v139, v140, v141); /*0x51a2da*/
        if ( *(_BYTE *)(Building[328] + 5807) ) /*0x51a2e5*/
        {
          v93 = (_DWORD *)(*(int (__thiscall **)(InfantryClass *, int *))(this->ptr_0 + 72))(this, &v154); /*0x51a2f9*/
          StartAudioControllerAt(*(_DWORD *)&dword_8871E0->__pad_240[48], v93, 0); /*0x51a30a*/
          this->isAbsorbed[0] = 1; /*0x51a30f*/
        }
        (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 212))(this); /*0x51a31a*/
        if ( InfantryClass::updateDeployAnimation((InfantryClass *)Building) && this->isCountedAsOwned_special[0] ) /*0x51a32b*/
        {
          --*(_DWORD *)(this->owner + 756); /*0x51a342*/
          this->isCountedAsOwned_special[0] = 0; /*0x51a348*/
        }
        v94 = Building[328]; /*0x51a34f*/
        if ( *(_BYTE *)(v94 + 5807) ) /*0x51a355*/
        {
          if ( *(int *)(v94 + 3816) > 0 ) /*0x51a374*/
            *(_BYTE *)(Building[135] + 22392) = 1; /*0x51a37c*/
        }
        else
        {
          (*(void (__thiscall **)(InfantryClass *, int, _DWORD *))(this->ptr_0 + 632))(this, 2, Building); /*0x51a366*/
        }
        CellClass::AddObject((CellClass *)(Building + 69), this); /*0x51a38a*/
        FootClass::ClearPathIndex(this); /*0x51a391*/
        return; /*0x51a39d*/
      }
    }
    else
    {
      v95 = (_WORD *)(*(int (__thiscall **)(_DWORD *, double *))(*Building + 440))(Building, &v149); /*0x51a3b1*/
      v96 = (_WORD *)(*(int (__thiscall **)(InfantryClass *, int *))(this->ptr_0 + 440))(this, &v148); /*0x51a3ba*/
      if ( *v96 == *v95 && v96[1] == v95[1] && Building == (_DWORD *)this->movementDestination ) /*0x51a3e0*/
      {
        if ( (*(int (__thiscall **)(InfantryClass *, int, _DWORD *))(this->ptr_0 + 632))(this, 15, Building) == 1 ) /*0x51a3f6*/
        {
          TechnoClass::SetFocus(this, 0); /*0x51a3ff*/
          this->onBridge[0] = 0; /*0x51a407*/
          this->missionData = 0; /*0x51a40e*/
          TechnoClass::SetMember81(this, 0); /*0x51a414*/
          TechnoClass::SetSpread(this, 0); /*0x51a41c*/
          v97 = this->mindControlledBy; /*0x51a421*/
          if ( v97 && *(_DWORD *)(v97 + 700) ) /*0x51a42b*/
            CaptureManagerClass::FreeUnit((CaptureManagerClass *)this, (int)v95, 0, v139, v140, v141); /*0x51a438*/
          (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 212))(this); /*0x51a441*/
          if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*Building + 132))(Building) + 1508) ) /*0x51a451*/
            TechnoClass::EnteredOpenTopped((int)this); /*0x51a45e*/
          this->transporter = (int)Building; /*0x51a463*/
          (*(void (__thiscall **)(_DWORD *, InfantryClass *))(*Building + 916))(Building, this); /*0x51a46e*/
          (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 284))(this); /*0x51a478*/
        }
        else
        {
          (*(void (__thiscall **)(InfantryClass *, _DWORD, int))(this->ptr_0 + 1152))(this, 0, 1); /*0x51a48f*/
          (*(void (__thiscall **)(InfantryClass *, int, _DWORD))(this->ptr_0 + 488))(this, 5, 0); /*0x51a49c*/
          (*(void (__thiscall **)(InfantryClass *, int *, int, int))(this->ptr_0 + 372))(this, &dword_A8F200, 1, 1); /*0x51a4af*/
        }
        return; /*0x51a485*/
      }
    }
  }
  if ( (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) != 17 || !*(_BYTE *)(this->Type + 3778) ) /*0x51a4d8*/
  {
    location = v142; /*0x51a7f4*/
LABEL_193:
    if ( this->isTether[0] ) /*0x51a7f8*/
    {
      (*(void (__thiscall **)(InfantryClass *, int))(this->ptr_0 + 628))(this, 8); /*0x51a80c*/
      v129 = this->Type; /*0x51a812*/
      if ( *(int *)(v129 + 3736) > 1 ) /*0x51a81f*/
      {
        v154 = this->location[0]; /*0x51a82b*/
        v155 = this->location[1]; /*0x51a832*/
        v156 = this->location[2]; /*0x51a83d*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)(v129 + 3724) + 4), &v154, 0); /*0x51a84a*/
      }
      if ( this->onBridge[0] ) /*0x51a84f*/
      {
        if ( (location->__pad_11F[9] & 0x1C) == 0x1C ) /*0x51a865*/
          Cell::ApplyDamage(location, (int)&dword_A8F200, 1, 1, 1); /*0x51a869*/
      }
      else if ( (location->__pad_11F[5] & 0x1C) == 0x1C ) /*0x51a877*/
      {
        Cell::ApplyDamage(location, (int)&dword_A8F200, 1, 1, 0); /*0x51a886*/
      }
    }
    if ( this->queuedMission == -1 /*0x51a8aa*/
      && !this->movementDestination
      && !this->target
      && !(unsigned __int8)Team::AllMembersValid((Team *)this) )
    {
      (*(void (__thiscall **)(InfantryClass *, _DWORD, int))(this->ptr_0 + 1156))(this, 0, 1); /*0x51a8bb*/
    }
    (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 492))(this); /*0x51a8c5*/
    (*(void (__thiscall **)(InfantryClass *, _DWORD, _DWORD, _DWORD, _DWORD))(this->ptr_0 + 1164))(this, 0, 0, 0, 0); /*0x51a8d7*/
    (*(void (__thiscall **)(InfantryClass *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(this->ptr_0 + 1160))( /*0x51a8eb*/
      this,
      0,
      0,
      0,
      0,
      0);
    v154 = this->location[0]; /*0x51a8fd*/
    lastSightRange = this->lastSightRange; /*0x51a901*/
    v155 = this->location[1]; /*0x51a90d*/
    v156 = this->location[2]; /*0x51a921*/
    MapClass::RevealArea2((MapClass *)&dword_87F7E8, &v154, 0, lastSightRange + 3, 0); /*0x51a925*/
    v131 = this->location[1]; /*0x51a92c*/
    v132 = this->location[2]; /*0x51a92f*/
    v154 = this->location[0]; /*0x51a932*/
    v155 = v131; /*0x51a93a*/
    v156 = v132; /*0x51a944*/
    v4 = Coord::To_Cell((Coord *)&dword_87F7E8, &v154); /*0x51a94d*/
    landType = v4->landType; /*0x51a957*/
    if ( !this->locomotor ) /*0x51a94f*/
      WinAPI::Wrapper(-2147467261); /*0x51a964*/
    if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->locomotor + 16))(this->locomotor) /*0x51a9b3*/
      && !*(_BYTE *)(this->Type + 3778)
      && !(unsigned __int8)TechnoTypeClass::HasVoiceResponse(&this->ptr_0, 14)
      && (landType == 3 || landType == 2)
      && (!this->onBridge[0] || (v4->flags & 0x100) == 0) )
    {
      v134 = this->ptr_0; /*0x51a9b8*/
      p_Cell_field_0x0 = (CellClass *)this->health; /*0x51a9ba*/
      (*(void (__thiscall **)(InfantryClass *, CellClass **, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(v134 + 364))( /*0x51a9db*/
        this,
        &p_Cell_field_0x0,
        0,
        *(_DWORD *)&dword_8871E0->__pad_C3C[876],
        0,
        1,
        0,
        0);
      return; /*0x51a9e8*/
    }
    goto LABEL_216; /*0x51a9b3*/
  }
  location = v142; /*0x51a4e6*/
  v98 = Cell::IsBridge(v142); /*0x51a4ec*/
  v99 = v98; /*0x51a4f1*/
  if ( !v98 || v98 != (_DWORD *)this->movementDestination ) /*0x51a501*/
  {
    v117 = (_DWORD *)(*(int (__thiscall **)(InfantryClass *, int *))(this->ptr_0 + 72))(this, &v154); /*0x51a670*/
    if ( Coord::To_Cell((Coord *)&dword_87F7E8, v117) == (CellClass *)this->movementDestination ) /*0x51a684*/
    {
      v118 = this->location; /*0x51a68a*/
      v149 = *(double *)this->location; /*0x51a698*/
      v150 = this->location[2]; /*0x51a6ab*/
      PlaySoundEffectAt(&v149, dword_8871E0->TiberiumLongScan, this, *(_DWORD *)&dword_8871E0->__pad_C3C[876], 1, 0); /*0x51a6c1*/
      (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 1280))(this); /*0x51a6ca*/
      Value = ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v149); /*0x51a6db*/
      v120 = this->location[1]; /*0x51a6ef*/
      v121 = ((unsigned int)((*Value >> 12) + 1) >> 1) & 7; /*0x51a6f2*/
      v122 = this->location[2]; /*0x51a6f7*/
      v123 = dword_89F6D8[2 * v121] + this->location[0]; /*0x51a6fc*/
      v124 = dword_89F6DC[2 * v121]; /*0x51a70a*/
      v154 = v123; /*0x51a70d*/
      v125 = v120 + v124; /*0x51a711*/
      v126 = this->ptr_0; /*0x51a713*/
      v155 = v125; /*0x51a715*/
      v156 = v122; /*0x51a720*/
      (*(void (__thiscall **)(InfantryClass *, int *, int, int))(v126 + 372))(this, &v154, 1, 1); /*0x51a724*/
      (*(void (__thiscall **)(InfantryClass *, int, _DWORD))(this->ptr_0 + 488))(this, 2, 0); /*0x51a732*/
      v127 = this->movementDestination; /*0x51a738*/
      if ( !v127 /*0x51a75e*/
        || (v128 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v127 + 72))(v127, &v154),
            Coord::To_Cell((Coord *)&dword_87F7E8, v128)->landType == 2) )
      {
        (*(void (__thiscall **)(InfantryClass *, int))(this->ptr_0 + 292))(this, 1); /*0x51a766*/
      }
      v154 = *v118; /*0x51a774*/
      v155 = this->location[1]; /*0x51a77b*/
      v156 = this->location[2]; /*0x51a787*/
      PlaySoundEffectAt(&v154, dword_8871E0->TiberiumLongScan, 0, *(_DWORD *)&dword_8871E0->__pad_C3C[876], 1, 0); /*0x51a79e*/
      v154 = *v118; /*0x51a7a7*/
      v155 = this->location[1]; /*0x51a7b5*/
      v156 = this->location[2]; /*0x51a7bc*/
      PlaySoundEffectAt(&v154, dword_8871E0->TiberiumLongScan, 0, *(_DWORD *)&dword_8871E0->__pad_C3C[876], 1, 0); /*0x51a7d3*/
      if ( !this->isAliveFlag[0] ) /*0x51a7e0*/
        return; /*0x51a7e0*/
      (*(void (__thiscall **)(InfantryClass *, int))(this->ptr_0 + 292))(this, 1); /*0x51a7ec*/
    }
    goto LABEL_193; /*0x51a7f2*/
  }
  v100 = (TeamClass *)v98[13]; /*0x51a507*/
  if ( v100 ) /*0x51a50c*/
    TeamClass::Update_0(v100, 1, (int)this, dword_A8F1E0, 0, 0); /*0x51a51c*/
  if ( (*(int (__thiscall **)(_DWORD *))(*v99 + 388))(v99) != 19 /*0x51a538*/
    && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v99 + 352))(v99) )
  {
    if ( *((_BYTE *)v99 + 1759) ) /*0x51a546*/
    {
      (*(void (__thiscall **)(InfantryClass *, _DWORD, int))(this->ptr_0 + 1152))(this, 0, 1); /*0x51a558*/
      v101 = (*(int (__thiscall **)(InfantryClass *, int))(this->ptr_0 + 792))(this, 1); /*0x51a564*/
      v102 = this->ptr_0; /*0x51a576*/
      this->diskLaserTimer[0] = (int)dword_A8ED84; /*0x51a57a*/
      this->diskLaserTimer[1] = v155; /*0x51a582*/
      this->diskLaserTimer[2] = v101; /*0x51a587*/
      v103 = (*(int (__thiscall **)(_DWORD *, int *, int, int))(*v99 + 72))(v99, &v154, 1, 1); /*0x51a591*/
      (*(void (__thiscall **)(InfantryClass *, int))(v102 + 372))(this, v103); /*0x51a597*/
      return; /*0x51a5a4*/
    }
    *((_BYTE *)v99 + 1759) = 1; /*0x51a5a7*/
    _ECX = dword_8871E0; /*0x51a5ae*/
    v105 = *v99; /*0x51a5b4*/
    __asm /*0x51a5b6*/
    {
      fld qword ptr [ecx+1750h]
      fmul ds:dbl_7E27F8
      fmul ds:dbl_7E1738
    }
    v108 = Math::RoundToInt(v5); /*0x51a5c8*/
    LOWORD(v107) = HIWORD(v108); /*0x51a5c8*/
    LOWORD(v106) = v108; /*0x51a5c8*/
    v109 = ((double (__fastcall *)(_DWORD *, int, int))*(_DWORD *)(v105 + 328))(v99, v107, v106); /*0x51a5d0*/
    _EDX = dword_8871E0; /*0x51a5d6*/
    v111 = dword_A8ED84; /*0x51a5dc*/
    __asm /*0x51a5e2*/
    {
      fld qword ptr [edx+1750h]
      fmul ds:dbl_7E27F8
    }
    LOWORD(v112) = Math::RoundToInt(v109); /*0x51a5ee*/
    v113 = v155; /*0x51a5f3*/
    v99[336] = this; /*0x51a5fd*/
    v99[330] = v111; /*0x51a603*/
    v99[331] = v113; /*0x51a605*/
    v99[332] = v112; /*0x51a608*/
  }
  FootClass::ClearPathIndex(this); /*0x51a60d*/
  (*(void (__thiscall **)(InfantryClass *, _DWORD))(this->ptr_0 + 1116))(this, 0); /*0x51a618*/
  v114 = (*(int (__thiscall **)(InfantryClass *, int))(this->ptr_0 + 792))(this, 1); /*0x51a624*/
  v115 = this->ptr_0; /*0x51a636*/
  this->diskLaserTimer[0] = (int)dword_A8ED84; /*0x51a63a*/
  this->diskLaserTimer[1] = v155; /*0x51a642*/
  this->diskLaserTimer[2] = v114; /*0x51a647*/
  v116 = (*(int (__thiscall **)(_DWORD *, int *, int, int))(*v99 + 72))(v99, &v154, 1, 1); /*0x51a651*/
  (*(void (__thiscall **)(InfantryClass *, int))(v115 + 372))(this, v116); /*0x51a657*/
}


// ==== 0x0051AA10  InfantryClass::HandleTargetDestroyed  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::HandleTargetDestroyed(InfantryClass *this, int *a2, int *a3)
{
  int result; // eax

  result = FootClass::HandleTargetDestroyed((FootClass *)this, a2, a3); /*0x51aa1e*/
  if ( (int *)this->Type == a2 ) /*0x51aa29*/
    this->Type = 0; /*0x51aa2b*/
  return result; /*0x51aa35*/
}



// ==== 0x0051AA40  InfantryClass::AssignDestination_SyncLog  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::AssignDestination_SyncLog(InfantryClass *this, int *a2, int a3)
{
  House *v4; // eax
  int result; // eax
  AbstractClass *v6; // ebx
  _DWORD *v7; // eax
  int v8; // esi
  int (__thiscall **ptr_0)(AbstractClass *, int *); // edx
  _DWORD *v10; // eax
  FootClass *rockerLinkedUnit; // eax
  _DWORD *v12; // eax
  bool *v13; // eax
  InfantryTypeClass *Type; // eax
  Team *v15; // eax
  Team *v16; // esi
  TechnoClass *v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int *v24; // eax
  _DWORD *v25; // eax
  int (__thiscall **v26)(InfantryClass *, int *, _DWORD); // edx
  _DWORD *v27; // eax
  bool v28; // al
  int v29; // ebx
  bool v30; // zf
  int v31; // eax
  int *locomotor; // esi
  int v33; // eax
  int *v34; // eax
  int InstanceCOM; // eax
  int v36; // eax
  int *v37; // eax
  int v38; // eax
  int *v39; // esi
  int v40; // eax
  int *v41; // eax
  int v42; // [esp+44h] [ebp-58h]
  bool CanDeployAtCell; // [esp+73h] [ebp-29h]
  ComPtr ppv; // [esp+74h] [ebp-28h] BYREF

  v4 = (House *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 15))(this); /*0x51aa4c*/
  if ( (unsigned __int8)House::IsCurrentPlayer(v4) ) /*0x51aa51*/
  {
    result = this->SequenceAnim[0]; /*0x51aa5a*/
    if ( result == 27 || result == 28 || result == 29 || result == 30 ) /*0x51aa7e*/
      return result; /*0x51aa7e*/
  }
  v6 = (AbstractClass *)a2; /*0x51aa8a*/
  if ( this->Type->? ) /*0x51aa90*/
  {
    if ( a2 ) /*0x51aaa0*/
    {
      v7 = (_DWORD *)(*((int (__thiscall **)(InfantryClass *, int *))this->FootClass + 18))( /*0x51aab0*/
                       this,
                       &ppv.ComPtr_field_0x0C);
      v8 = *(_DWORD *)CellStruct::Set((CellStruct *)&ppv.ComPtr_field_0x08, *v7 / 256, v7[1] / 256); /*0x51aadd*/
      ptr_0 = (int (__thiscall **)(AbstractClass *, int *))v6->ptr_0; /*0x51aadf*/
      *(_DWORD *)ppv.__pad_0 = v8; /*0x51aae8*/
      v10 = (_DWORD *)ptr_0[18](v6, &ppv.ComPtr_field_0x18); /*0x51aaec*/
      result = *(_DWORD *)CellStruct::Set((CellStruct *)&ppv.ComPtr_field_0x04, *v10 / 256, v10[1] / 256); /*0x51ab19*/
      ppv.ComPtr_field_0x04 = result; /*0x51ab1e*/
      if ( result == v8 ) /*0x51ab22*/
        return result; /*0x51ab22*/
    }
  }
  rockerLinkedUnit = this->?; /*0x51ab34*/
  if ( rockerLinkedUnit ) /*0x51ab3c*/
  {
    rockerLinkedUnit->? = 0; /*0x51ab3e*/
    this->? = 0; /*0x51ab44*/
  }
  if ( !this->?[0] ) /*0x51ab4a*/
    WinAPI::Wrapper(-2147467261); /*0x51ab57*/
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x51ab65*/
  {
    if ( v6 ) /*0x51ab71*/
    {
      v42 = this->Type->?[0]; /*0x51ab8e*/
      v12 = (_DWORD *)(*((int (__thiscall **)(InfantryClass *, int *))this->FootClass + 18))( /*0x51ab92*/
                        this,
                        &ppv.ComPtr_field_0x18);
      v13 = (bool *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v12); /*0x51ab9b*/
      if ( (unsigned __int8)Cell::IsBuildable(v13, v42, 1, 0, -1, 0, -1, 1) ) /*0x51aba2*/
      {
        if ( this->Type->? || this->? != 1 || this->? != v6 ) /*0x51abca*/
          (*((void (__thiscall **)(InfantryClass *))this->FootClass + 320))(this); /*0x51abd1*/
      }
    }
  }
  if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x51abdd*/
  {
    if ( v6 ) /*0x51abe8*/
    {
      if ( this->? == v6 ) /*0x51abf0*/
      {
        if ( this->Crawling ) /*0x51abf2*/
        {
          Type = this->Type; /*0x51abfc*/
          if ( !Type->Fraidycat && !Type->Cyborg ) /*0x51ac0c*/
            (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 7, 0, 0); /*0x51ac1f*/
        }
      }
    }
  }
  if ( (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) != 7 && this->? != 7 /*0x51ac44*/
    || (unsigned __int8)Team::AllMembersValid((Team *)this) )
  {
    this->?[0] = -1; /*0x51ad11*/
    goto LABEL_48; /*0x51ad11*/
  }
  v15 = (Team *)AbstractClass::IsTechnoType(v6); /*0x51ac53*/
  v16 = v15; /*0x51ac58*/
  if ( !v15 ) /*0x51ac5c*/
  {
LABEL_48:
    if ( v6 && this->Type->? ) /*0x51ad25*/
    {
      if ( !this->?[0] ) /*0x51ad33*/
        WinAPI::Wrapper(-2147467261); /*0x51ad42*/
      if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x51ad50*/
      {
        v19 = this->?[0]; /*0x51ad5b*/
        *(_DWORD *)ppv.__pad_0 = 0; /*0x51ad69*/
        if ( !v19 ) /*0x51ad71*/
          goto LABEL_58; /*0x51ad71*/
        v20 = StreamClass::Set2((StreamClass *)&ppv, this->?); /*0x51ad78*/
        if ( v20 < 0 && v20 != -2147467262 ) /*0x51ad86*/
          WinAPI::Wrapper(v20); /*0x51ad89*/
        if ( !*(_DWORD *)ppv.__pad_0 ) /*0x51ad94*/
LABEL_58:
          WinAPI::Wrapper(-2147467261); /*0x51ad9b*/
        (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)ppv.__pad_0 + 12))( /*0x51adac*/
          *(_DWORD *)ppv.__pad_0,
          &ppv.ComPtr_field_0x18);
        if ( !memcmp(&ppv.ComPtr_field_0x18, &g_CLSID_WalkLocomotion, 0x10u) ) /*0x51adbf*/
        {
          v21 = *(_DWORD *)&this->?[4]; /*0x51adc7*/
          if ( *(_DWORD *)&this->?[12] < v21 /*0x51adf8*/
            || (this->?[9] || !v21)
            && (v22 = *(_DWORD *)&this->?[16], v22 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->?[0] + 8))(this->?, v21 + v22, 0) )
          {
            v23 = *(_DWORD *)&this->?[12]; /*0x51adff*/
            if ( v23 ) /*0x51ae04*/
              memcpy((void *)(*(_DWORD *)this->? + 4), *(const void **)this->?, 4 * v23); /*0x51ae12*/
            **(_DWORD **)this->? = v6; /*0x51ae1d*/
            ++*(_DWORD *)&this->?[12]; /*0x51ae23*/
          }
          v24 = (int *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 113))(this); /*0x51ae2b*/
          v6 = (AbstractClass *)v24; /*0x51ae31*/
          a2 = v24; /*0x51ae35*/
          if ( v24 && (v24[80] & 0x100) != 0 ) /*0x51ae44*/
          {
            v6 = 0; /*0x51ae46*/
            a2 = 0; /*0x51ae48*/
          }
        }
        if ( *(_DWORD *)ppv.__pad_0 ) /*0x51ae52*/
          (*(void (__stdcall **)(_DWORD))(**(_DWORD **)ppv.__pad_0 + 8))(*(_DWORD *)ppv.__pad_0); /*0x51ae57*/
      }
    }
    goto LABEL_73; /*0x51ae57*/
  }
  if ( !(unsigned __int8)Team::AllMembersValid(v15) ) /*0x51ac6b*/
  {
    if ( (*((int (__thiscall **)(InfantryClass *, int, Team *))this->FootClass + 158))(this, 2, v16) == 1 ) /*0x51ace5*/
    {
      result = (*((int (__thiscall **)(InfantryClass *, int))this->FootClass + 157))(this, 14); /*0x51acee*/
      if ( result == 14 ) /*0x51acf7*/
        return result; /*0x51acf7*/
      if ( result != 1 ) /*0x51ad00*/
        (*((void (__thiscall **)(InfantryClass *, int))this->FootClass + 157))(this, 3); /*0x51ad09*/
    }
    goto LABEL_48; /*0x51ad0f*/
  }
  if ( (*(int (__thiscall **)(Team *))(*(_DWORD *)v16->__pad_0 + 44))(v16) != 1 )
  {
    if ( (*(int (__thiscall **)(Team *))(*(_DWORD *)v16->__pad_0 + 44))(v16) == 6 )
    {
      if ( !v6 ) /*0x51ac99*/
      {
        v17 = 0; /*0x51ac9b*/
        goto LABEL_41; /*0x51ac9d*/
      }
      v18 = (*((int (__thiscall **)(AbstractClass *))v6->ptr_0 + 11))(v6) - 6; /*0x51aca6*/
LABEL_40:
      v17 = v18 == 0 ? (TechnoClass *)v6 : 0;
      goto LABEL_41; /*0x51acaf*/
    }
    TechnoClass::SetFocus((TechnoClass *)this, (int)v6); /*0x51accd*/
    goto LABEL_48; /*0x51acd2*/
  }
  if ( v6 ) /*0x51ac7b*/
  {
    v18 = (*((int (__thiscall **)(AbstractClass *))v6->ptr_0 + 11))(v6) - 1; /*0x51ac88*/
    goto LABEL_40; /*0x51ac89*/
  }
  v17 = 0; /*0x51ac7d*/
LABEL_41:
  this->? = v17; /*0x51acb1*/
  TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x51acba*/
  v6 = 0; /*0x51acbf*/
  a2 = 0; /*0x51acc1*/
LABEL_73:
  if ( this->Type->? && v6 ) /*0x51ae72*/
  {
    if ( !this->?[0] ) /*0x51ae78*/
      WinAPI::Wrapper(-2147467261); /*0x51ae8d*/
    if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x51ae97*/
    {
      v25 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, int *))v6->ptr_0 + 18))(v6, &ppv.ComPtr_field_0x18); /*0x51aeab*/
      LOWORD(ppv.ComPtr_field_0x04) = *v25 / 256; /*0x51aebf*/
      v26 = (int (__thiscall **)(InfantryClass *, int *, _DWORD))this->FootClass; /*0x51aed0*/
      HIWORD(ppv.ComPtr_field_0x04) = v25[1] / 256; /*0x51aed6*/
      *(_DWORD *)ppv.__pad_0 = ppv.ComPtr_field_0x04; /*0x51aee3*/
      v27 = (_DWORD *)v26[19](this, &ppv.ComPtr_field_0x0C, 0); /*0x51aeea*/
      LOWORD(ppv.ComPtr_field_0x04) = *v27 / 256; /*0x51aefd*/
      HIWORD(ppv.ComPtr_field_0x04) = v27[1] / 256; /*0x51af15*/
      ppv.ComPtr_field_0x08 = ppv.ComPtr_field_0x04; /*0x51af22*/
      CanDeployAtCell = InfantryClass::CanDeployAtCell(this, (__int16 *)&ppv.ComPtr_field_0x08, (__int16 *)ppv.__pad_0); /*0x51af35*/
      if ( this->Type->? ) /*0x51af39*/
      {
        InfantryClass::updateOccupiedBuilding( /*0x51af4c*/
          (InfantryClass *)&ppv,
          (int (__stdcall ****)(_DWORD, void *, _DWORD *))this->?);
        if ( !*(_DWORD *)ppv.__pad_0 ) /*0x51af57*/
          WinAPI::Wrapper(-2147467261); /*0x51af5e*/
        (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)ppv.__pad_0 + 12))( /*0x51af6f*/
          *(_DWORD *)ppv.__pad_0,
          &ppv.ComPtr_field_0x18);
        v29 = memcmp((const char *)&ppv.ComPtr_field_0x18, g_CLSID_JumpjetLocomotion.Data2, 16); /*0x51af80*/
        ComPtr::Release_Alt(&ppv); /*0x51af8f*/
        v30 = v29 == 0; /*0x51af94*/
        v6 = (AbstractClass *)a2; /*0x51af96*/
        v28 = v30; /*0x51af9a*/
      }
      else
      {
        v28 = 0; /*0x51af43*/
      }
      if ( this->Type->? ) /*0x51afa5*/
        CanDeployAtCell = 1; /*0x51afaf*/
      if ( v28 ) /*0x51afba*/
      {
        if ( !CanDeployAtCell ) /*0x51afc2*/
        {
          v31 = this->?[0]; /*0x51afc8*/
          locomotor = this->?; /*0x51afce*/
          a2 = 0; /*0x51afd6*/
          if ( v31 ) /*0x51afda*/
          {
            v33 = StreamClass::Set((StreamClass *)&a2, this->?); /*0x51afe1*/
            if ( v33 < 0 && v33 != -2147467262 ) /*0x51afef*/
              WinAPI::Wrapper(v33); /*0x51aff2*/
            if ( a2 && (*(unsigned __int8 (__stdcall **)(int *))(*a2 + 28))(a2) ) /*0x51b002*/
            {
              if ( !a2 ) /*0x51b00f*/
                WinAPI::Wrapper(-2147467261); /*0x51b016*/
              if ( (*(unsigned __int8 (__stdcall **)(int *))(*a2 + 20))(a2) ) /*0x51b022*/
              {
                if ( *locomotor ) /*0x51b029*/
                  (*(void (__stdcall **)(int))(*(_DWORD *)*locomotor + 8))(*locomotor); /*0x51b032*/
                v34 = a2; /*0x51b035*/
                *locomotor = 0; /*0x51b039*/
                if ( !v34 ) /*0x51b03d*/
                  WinAPI::Wrapper(-2147467261); /*0x51b044*/
                (*(void (__stdcall **)(int *, int *))(*v34 + 16))(v34, this->?); /*0x51b051*/
              }
            }
          }
          *(_DWORD *)ppv.__pad_0 = 0; /*0x51b060*/
          InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)&g_CLSID_WalkLocomotion, 0, 7u); /*0x51b064*/
          if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x51b072*/
            WinAPI::Wrapper(InstanceCOM); /*0x51b075*/
          if ( !*(_DWORD *)ppv.__pad_0 ) /*0x51b080*/
            WinAPI::Wrapper(-2147467261); /*0x51b087*/
          (*(void (__stdcall **)(_DWORD, InfantryClass *))(**(_DWORD **)ppv.__pad_0 + 12))(*(_DWORD *)ppv.__pad_0, this); /*0x51b094*/
          ppv.ComPtr_field_0x04 = 0; /*0x51b09b*/
          if ( *(_DWORD *)ppv.__pad_0 ) /*0x51b0a1*/
          {
            v36 = StreamClass::Set((StreamClass *)&ppv.ComPtr_field_0x04, &ppv); /*0x51b0ac*/
            if ( v36 < 0 && v36 != -2147467262 ) /*0x51b0ba*/
              WinAPI::Wrapper(v36); /*0x51b0bd*/
          }
          COMObject::SwapReference((COMObject *)&a2, ppv.ComPtr_field_0x04); /*0x51b0cb*/
          if ( ppv.ComPtr_field_0x04 ) /*0x51b0d6*/
            (*(void (__stdcall **)(int))(*(_DWORD *)ppv.ComPtr_field_0x04 + 8))(ppv.ComPtr_field_0x04); /*0x51b0db*/
          v37 = a2; /*0x51b0de*/
          if ( a2 ) /*0x51b0e4*/
          {
            (*(void (__stdcall **)(int *, int))(*a2 + 12))(a2, *locomotor); /*0x51b0ec*/
            InfantryClass::checkBridgeClearance((InfantryClass *)this->?, *(int *)ppv.__pad_0); /*0x51b0f6*/
            v37 = a2; /*0x51b0fb*/
          }
          if ( *(_DWORD *)ppv.__pad_0 ) /*0x51b105*/
          {
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)ppv.__pad_0 + 8))(*(_DWORD *)ppv.__pad_0); /*0x51b10a*/
            v37 = a2; /*0x51b10d*/
          }
          if ( v37 ) /*0x51b113*/
            (*(void (__stdcall **)(int *))(*v37 + 8))(v37); /*0x51b11c*/
        }
      }
      else if ( CanDeployAtCell ) /*0x51b126*/
      {
        v38 = this->?[0]; /*0x51b12c*/
        v39 = this->?; /*0x51b132*/
        a2 = 0; /*0x51b13a*/
        if ( v38 ) /*0x51b13e*/
        {
          v40 = StreamClass::Set((StreamClass *)&a2, this->?); /*0x51b149*/
          if ( v40 < 0 && v40 != -2147467262 ) /*0x51b157*/
            WinAPI::Wrapper(v40); /*0x51b15a*/
          if ( a2 ) /*0x51b165*/
          {
            if ( (*(unsigned __int8 (__stdcall **)(int *))(*a2 + 28))(a2) ) /*0x51b16a*/
            {
              if ( !a2 ) /*0x51b177*/
                WinAPI::Wrapper(-2147467261); /*0x51b17e*/
              if ( (*(unsigned __int8 (__stdcall **)(int *))(*a2 + 20))(a2) ) /*0x51b18a*/
              {
                if ( *v39 ) /*0x51b191*/
                  (*(void (__stdcall **)(int))(*(_DWORD *)*v39 + 8))(*v39); /*0x51b19a*/
                v41 = a2; /*0x51b19d*/
                *v39 = 0; /*0x51b1a1*/
                if ( !v41 ) /*0x51b1a5*/
                  WinAPI::Wrapper(-2147467261); /*0x51b1ac*/
                (*(void (__stdcall **)(int *, int *))(*v41 + 16))(v41, this->?); /*0x51b1b9*/
              }
            }
            if ( a2 ) /*0x51b1c2*/
              (*(void (__stdcall **)(int *))(*a2 + 8))(a2); /*0x51b1c7*/
          }
        }
      }
    }
  }
  LOBYTE(result) = FootClass::AssignDestination((FootClass *)this, (int)v6, a3); /*0x51b1d2*/
  return result; /*0x51b1d7*/
}



// ==== 0x0051B1F0  InfantryClass::AssignTarget_SyncLog  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::AssignTarget_SyncLog(InfantryClass *this, int a2)
{
  int v3; // eax
  FootClass *rockerLinkedUnit; // eax
  int result; // eax

  if ( (AbstractClass *)a2 != this->? ) /*0x51b201*/
  {
    if ( this->? > 0 ) /*0x51b206*/
    {
      v3 = this->SequenceAnim[0]; /*0x51b208*/
      this->? = 0; /*0x51b20e*/
      if ( v3 == 27 || v3 == 28 || v3 == 29 || v3 == 30 ) /*0x51b226*/
      {
        (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 28, 0, 0); /*0x51b22e*/
      }
      else if ( this->Crawling ) /*0x51b230*/
      {
        (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 2, 0, 0); /*0x51b240*/
      }
      else
      {
        (*((void (__thiscall **)(InfantryClass *, _DWORD, _DWORD, _DWORD))this->FootClass + 342))(this, 0, 0, 0); /*0x51b24f*/
      }
    }
    if ( (AbstractClass *)a2 != this->? ) /*0x51b25b*/
    {
      rockerLinkedUnit = this->?; /*0x51b25d*/
      if ( rockerLinkedUnit ) /*0x51b265*/
      {
        rockerLinkedUnit->? = 0; /*0x51b267*/
        this->? = 0; /*0x51b26d*/
      }
    }
  }
  result = this->SequenceAnim[0]; /*0x51b273*/
  if ( result != 27 && result != 28 && result != 29 && result != 30 || this->Type->? ) /*0x51b293*/
  {
    this->?[0] = -1; /*0x51b2a2*/
    result = TechnoClass::AssignTarget_SyncLog((TechnoClass *)this, a2); /*0x51b2ac*/
    if ( !this->? && this->Type->Infiltrate ) /*0x51b2c3*/
    {
      if ( a2 && (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 ) /*0x51b2d9*/
        result = a2; /*0x51b2db*/
      else
        result = 0; /*0x51b2df*/
      if ( this->Type->Agent ) /*0x51b2e7*/
      {
        if ( result && *(_BYTE *)(*(_DWORD *)(result + 1312) + 5494) ) /*0x51b32a*/
          result = (*((int (__thiscall **)(InfantryClass *, int, int))this->FootClass + 288))(this, a2, 1); /*0x51b339*/
      }
      else if ( result && *(_BYTE *)(*(_DWORD *)(result + 1312) + 5490) ) /*0x51b2fb*/
      {
        result = (*((int (__thiscall **)(InfantryClass *, int, int))this->FootClass + 288))(this, a2, 1); /*0x51b30a*/
        this->? = 0; /*0x51b310*/
        return result; /*0x51b319*/
      }
    }
    this->? = 0; /*0x51b33f*/
  }
  return result; /*0x51b316*/
}



// ==== 0x0051B350  InfantryClass::CalcMoveTarget  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::CalcMoveTarget(InfantryClass *this)
{
  double v1; // st7
  Vector3 *v3; // eax
  int *unknownCoords568; // edi
  int *v5; // eax
  _DWORD *v6; // ebp
  int *v7; // eax
  int *Height; // eax
  InfantryTypeClass *Type; // edx
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int GroundHeight; // ebx
  int v14; // ebx
  void (__usercall **v15)(InfantryClass *@<ecx>, int *); // edx
  char v16; // al
  int v17; // ecx
  int *v18; // eax
  CellClass *v19; // eax
  int *Coords; // ebp
  CellClass *v21; // eax
  int *v22; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  int (__thiscall **v26)(InfantryClass *, ObjectVector *); // edx
  int *v27; // eax
  int v28; // eax
  int v29; // edi
  int v30; // eax
  int v31; // eax
  double v32; // st7
  int v33; // eax
  int v34; // edx
  int v35; // kr00_4
  int result; // eax
  int v37; // ebp
  int v38; // edi
  int v39; // eax
  int v40; // eax
  bool v41; // zf
  signed int v42; // ebp
  double v43; // st7
  int v44; // eax
  int (__thiscall **ptr_0)(InfantryClass *, _DWORD *); // edx
  int *location; // edi
  ObjectPlacement *v47; // ebp
  int ObjectPlacement_field_0x04; // ebx
  int ObjectVector_field_0x14; // ecx
  int ObjectVector_field_0x08; // eax
  int v51; // eax
  int i; // ebx
  _DWORD *v53; // edi
  int v54; // edx
  int *v55; // eax
  int v56; // eax
  void (__usercall **v57)(InfantryClass *@<ecx>, int *); // edx
  int v58; // eax
  int v59; // eax
  int v60; // edx
  void (__thiscall **v61)(InfantryClass *, int *); // eax
  void (__thiscall **v62)(InfantryClass *, int *, int, int); // edx
  int (__thiscall **v63)(InfantryClass *, int); // eax
  double v64; // [esp-10h] [ebp-A0h]
  int Speed; // [esp+18h] [ebp-78h]
  double v66; // [esp+18h] [ebp-78h]
  int v67; // [esp+20h] [ebp-70h]
  double v68; // [esp+20h] [ebp-70h]
  int v69; // [esp+2Ch] [ebp-64h]
  int v70; // [esp+2Ch] [ebp-64h]
  int v71; // [esp+2Ch] [ebp-64h]
  int v72; // [esp+30h] [ebp-60h]
  double v73; // [esp+30h] [ebp-60h]
  int v74[2]; // [esp+38h] [ebp-58h] BYREF
  int v75[2]; // [esp+40h] [ebp-50h] BYREF
  int v76; // [esp+48h] [ebp-48h]
  int v77; // [esp+54h] [ebp-3Ch] BYREF
  int v78; // [esp+58h] [ebp-38h]
  int v79; // [esp+5Ch] [ebp-34h] BYREF
  int v80; // [esp+60h] [ebp-30h] BYREF
  int v81; // [esp+64h] [ebp-2Ch]
  int v82; // [esp+68h] [ebp-28h] BYREF
  int v83; // [esp+6Ch] [ebp-24h] BYREF
  int v84; // [esp+70h] [ebp-20h]
  int v85; // [esp+74h] [ebp-1Ch]
  ObjectVector v86; // [esp+78h] [ebp-18h] BYREF

  if ( *(_DWORD *)(*(_DWORD *)(FootClass_Array.?[3] + 4 * this->?) + 4 * this->? + 48) != -1 ) /*0x51b383*/
  {
    v3 = (Vector3 *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 18))(this); /*0x51b392*/
    unknownCoords568 = this->?; /*0x51b395*/
    v5 = Vector3::Subtract(v3, &v79, this->?); /*0x51b3a3*/
    Coord::Length((Coord *)v5); /*0x51b3aa*/
    v6 = *(_DWORD **)(FootClass_Array.?[3] + 4 * this->?); /*0x51b3c2*/
    v7 = (int *)(*((int (__thiscall **)(InfantryClass *, int *, int *))this->FootClass + 18))(this, &v82, this->?); /*0x51b3cc*/
    Height = (int *)Cell::GetHeight((Cell *)&v74[1], v7, &v83); /*0x51b3d4*/
    Type = this->Type; /*0x51b3d9*/
    v74[1] = *Height; /*0x51b3e1*/
    Speed = Type->?; /*0x51b3eb*/
    v69 = v6[10]; /*0x51b3f2*/
    v10 = SHIWORD(v69) << 8; /*0x51b401*/
    v11 = (__int16)v69 << 8; /*0x51b404*/
    v70 = v6[9]; /*0x51b407*/
    v78 = v10 + 128; /*0x51b41a*/
    v77 = v11 + 128; /*0x51b423*/
    v79 = 0; /*0x51b42c*/
    v82 = 0; /*0x51b435*/
    v80 = ((__int16)v70 << 8) + 128; /*0x51b440*/
    v12 = v6[112]; /*0x51b444*/
    v81 = (SHIWORD(v70) << 8) + 128; /*0x51b456*/
    v71 = v12; /*0x51b45a*/
    GroundHeight = Cell::GetGroundHeight(&v80); /*0x51b46d*/
    v14 = (Cell::GetGroundHeight(&v77) - GroundHeight) / v71; /*0x51b47f*/
    if ( v67 > Speed ) /*0x51b48b*/
    {
      v37 = v6[this->? + 12]; /*0x51b6a8*/
      v83 = this->?[0]; /*0x51b6ae*/
      v84 = this->?[1]; /*0x51b6b5*/
      v38 = this->?[2]; /*0x51b6b9*/
      v74[1] = SLOWORD(v74[1]) - 0x3FFF; /*0x51b6c6*/
      v73 = (double)v74[1] * -0.00009587672516830327; /*0x51b6d4*/
      *(double *)v75 = (double)v84; /*0x51b6ee*/
      Math::SinCos(v73); /*0x51b6f2*/
      LOWORD(v39) = Math::RoundToInt(v1); /*0x51b6ff*/
      v74[1] = v39; /*0x51b70a*/
      Math::ArcTan2(v73); /*0x51b70e*/
      LOWORD(v40) = Math::RoundToInt(v1 * (double)Speed + (double)v83); /*0x51b71e*/
      Coord::Subtract((Coord *)&v80, v40, v74[1], v38); /*0x51b72e*/
      v42 = v37 & 0x80000001; /*0x51b73f*/
      v41 = v42 == 0; /*0x51b73f*/
      v77 = v80; /*0x51b745*/
      v78 = v81; /*0x51b749*/
      v79 = v82; /*0x51b74d*/
      if ( v42 < 0 ) /*0x51b751*/
        v41 = (((_BYTE)v42 - 1) | 0xFFFFFFFE) == -1; /*0x51b757*/
      if ( v41 ) /*0x51b758*/
        v43 = 256.0; /*0x51b762*/
      else
        v43 = 362.0386719675124; /*0x51b75a*/
      LOWORD(v44) = Math::RoundToInt(v43); /*0x51b776*/
      ptr_0 = (int (__thiscall **)(InfantryClass *, _DWORD *))this->FootClass; /*0x51b77b*/
      v79 = v44; /*0x51b77d*/
      return ptr_0[109](this, &v77); /*0x51b797*/
    }
    v15 = (void (__usercall **)(InfantryClass *@<ecx>, int *))this->FootClass; /*0x51b497*/
    v16 = this->? + 1; /*0x51b499*/
    this->? = v16; /*0x51b49f*/
    v72 = v6[v16 + 12]; /*0x51b4ae*/
    v15[109](this, this->?); /*0x51b4b7*/
    if ( v72 != -1 ) /*0x51b4c3*/
    {
      v17 = v6[this->? + 12]; /*0x51b4d3*/
      v18 = Coord::Subtract( /*0x51b4ff*/
              (Coord *)&v83,
              *unknownCoords568 + g_DDrawSurfaceManager.scenario[2 * (v17 & 7) + 102],
              this->?[1] + g_DDrawSurfaceManager.scenario[2 * (v17 & 7) + 103],
              this->?[2]);
      v77 = *v18; /*0x51b506*/
      v78 = v18[1]; /*0x51b512*/
      v79 = v18[2]; /*0x51b51f*/
      v19 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], this->?); /*0x51b523*/
      Coords = CellClass::GetCoords(v19, v75); /*0x51b52f*/
      v21 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v77); /*0x51b540*/
      v22 = CellClass::GetCoords(v21, (int *)v86.__pad_0); /*0x51b547*/
      v23 = *v22 - *Coords + *unknownCoords568; /*0x51b55f*/
      v24 = v22[1] - Coords[1] + this->?[1]; /*0x51b564*/
      v25 = this->?[2]; /*0x51b566*/
      *unknownCoords568 = v23; /*0x51b569*/
      v26 = (int (__thiscall **)(InfantryClass *, ObjectVector *))this->FootClass; /*0x51b56c*/
      this->?[1] = v24; /*0x51b56f*/
      this->?[2] = v25; /*0x51b574*/
      this->?[2] += v14; /*0x51b584*/
      v27 = (int *)v26[18](this, &v86); /*0x51b58a*/
      v28 = *(_DWORD *)Cell::GetHeight((Cell *)&v74[1], v27, this->?); /*0x51b597*/
      v83 = this->?[0]; /*0x51b5a5*/
      v29 = this->?[2]; /*0x51b5af*/
      v84 = this->?[1]; /*0x51b5c1*/
      v74[1] = Speed - v67; /*0x51b5c9*/
      v68 = (double)((__int16)v28 - 0x3FFF) * -0.00009587672516830327; /*0x51b5d7*/
      v66 = (double)v74[1]; /*0x51b5e9*/
      *(double *)v75 = (double)v84; /*0x51b5f1*/
      Math::SinCos(v68); /*0x51b5f5*/
      LOWORD(v30) = Math::RoundToInt(v1); /*0x51b602*/
      v64 = v68; /*0x51b608*/
      LODWORD(v68) = v30; /*0x51b609*/
      Math::ArcTan2(v64); /*0x51b60d*/
      LOWORD(v31) = Math::RoundToInt(v1 * v66 + (double)v83); /*0x51b61d*/
      Coord::Subtract((Coord *)&v77, v31, SLODWORD(v68), v29); /*0x51b62d*/
      v80 = v77; /*0x51b63e*/
      v81 = v78; /*0x51b646*/
      v82 = v79; /*0x51b650*/
      if ( v72 % 2 ) /*0x51b65a*/
        v32 = 362.0386719675124; /*0x51b65d*/
      else
        v32 = 256.0; /*0x51b665*/
      v35 = Math::RoundToInt(v32); /*0x51b679*/
      LOWORD(v34) = HIWORD(v35); /*0x51b679*/
      LOWORD(v33) = v35; /*0x51b679*/
      v82 = v33; /*0x51b682*/
      return (*((int (__fastcall **)(InfantryClass *, int, int *))this->FootClass + 109))(this, v34, &v80); /*0x51b69a*/
    }
  }
  location = this->?; /*0x51b798*/
  v83 = this->?[0]; /*0x51b7a2*/
  v84 = this->?[1]; /*0x51b7ae*/
  v85 = this->?[2]; /*0x51b7b5*/
  v47 = (ObjectPlacement *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v83); /*0x51b7c7*/
  ObjectPlacement_field_0x04 = v47[28].ObjectPlacement_field_0x04; /*0x51b7cf*/
  if ( (*((int (__thiscall **)(InfantryClass *, ObjectPlacement *, int, _DWORD, _DWORD, int))this->FootClass + 107))( /*0x51b7d8*/
         this,
         v47,
         -1,
         0,
         0,
         1) )
  {
    ObjectVector::Construct(&v86, 0, 0); /*0x51b7ee*/
    ObjectVector_field_0x14 = 10; /*0x51b7f3*/
    *(_DWORD *)v86.__pad_0 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x51b7fa*/
    v86.ObjectVector_field_0x14 = 10; /*0x51b802*/
    v86.ObjectVector_field_0x10 = 0; /*0x51b809*/
    if ( ObjectPlacement_field_0x04 ) /*0x51b810*/
    {
      ObjectVector_field_0x08 = v86.ObjectVector_field_0x08; /*0x51b812*/
      while ( 1 ) /*0x51b822*/
      {
        if ( v86.ObjectVector_field_0x10 < ObjectVector_field_0x08 ) /*0x51b829*/
          goto LABEL_23; /*0x51b829*/
        if ( (BYTE1(v86.ObjectVector_field_0x0C) || !ObjectVector_field_0x08) && ObjectVector_field_0x14 > 0 ) /*0x51b83c*/
          break; /*0x51b83c*/
LABEL_25:
        ObjectPlacement_field_0x04 = *(_DWORD *)(ObjectPlacement_field_0x04 + 48); /*0x51b873*/
        if ( !ObjectPlacement_field_0x04 ) /*0x51b878*/
          goto LABEL_26; /*0x51b878*/
        ObjectVector_field_0x14 = v86.ObjectVector_field_0x14; /*0x51b81b*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(ObjectVector *, int, _DWORD))(*(_DWORD *)v86.__pad_0 + 8))( /*0x51b84d*/
             &v86,
             ObjectVector_field_0x14 + ObjectVector_field_0x08,
             0) )
      {
LABEL_23:
        v51 = v86.ObjectVector_field_0x10++; /*0x51b854*/
        *(_DWORD *)(v86.ObjectVector_field_0x04 + 4 * v51) = ObjectPlacement_field_0x04; /*0x51b869*/
      }
      ObjectVector_field_0x08 = v86.ObjectVector_field_0x08; /*0x51b86c*/
      goto LABEL_25; /*0x51b86c*/
    }
LABEL_26:
    for ( i = 0; i < v86.ObjectVector_field_0x10; ++i ) /*0x51b885*/
    {
      v53 = *(_DWORD **)(v86.ObjectVector_field_0x04 + 4 * i); /*0x51b88b*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v53 + 44))(v53) == 1 /*0x51b8a4*/
        || (*(int (__thiscall **)(_DWORD *))(*v53 + 44))(v53) == 15 )
      {
        if ( !v53[413] ) /*0x51b8a6*/
          WinAPI::Wrapper(-2147467261); /*0x51b8b3*/
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v53[413] + 16))(v53[413]) ) /*0x51b8c1*/
        {
          v54 = *v53; /*0x51b8c8*/
          v83 = 0; /*0x51b8d5*/
          v84 = 0; /*0x51b8d9*/
          v85 = 0; /*0x51b8dd*/
          (*(void (__thiscall **)(_DWORD *, int *, int, int))(v54 + 372))(v53, &v83, 1, 1); /*0x51b8e4*/
        }
      }
    }
    (*((void (__thiscall **)(InfantryClass *, _DWORD, _DWORD))this->FootClass + 337))(this, 0, 0); /*0x51b8fc*/
    result = v86.ObjectVector_field_0x04; /*0x51b902*/
    *(_DWORD *)v86.__pad_0 = &VectorClass<ObjectClass *>::`vftable'; /*0x51b906*/
    if ( v86.ObjectVector_field_0x04 && BYTE1(v86.ObjectVector_field_0x0C) ) /*0x51b91f*/
      __3_YAXPAX_Z((void *)v86.ObjectVector_field_0x04); /*0x51b926*/
  }
  else
  {
    v83 = *location; /*0x51b940*/
    v84 = this->?[1]; /*0x51b94c*/
    v85 = this->?[2]; /*0x51b960*/
    v55 = ObjectPlacement::CalcPosition(v47, (int *)v86.__pad_0, &v83, 0, 0, 0); /*0x51b967*/
    v75[0] = *v55; /*0x51b96e*/
    v75[1] = v55[1]; /*0x51b97a*/
    v76 = v55[2]; /*0x51b986*/
    v56 = Cell::GetGroundHeight(v75); /*0x51b98a*/
    v57 = (void (__usercall **)(InfantryClass *@<ecx>, int *))this->FootClass; /*0x51b98f*/
    v76 = v56; /*0x51b991*/
    v57[109](this, v75); /*0x51b99c*/
    v58 = this->?[0]; /*0x51b9a2*/
    v84 = *(_DWORD *)&stru_A8EB00.?[1568]; /*0x51b9bc*/
    v85 = *(_DWORD *)&stru_A8EB00.?[1572]; /*0x51b9c0*/
    if ( !v58 ) /*0x51b9c4*/
      WinAPI::Wrapper(-2147467261); /*0x51b9cb*/
    (*(void (__stdcall **)(int, _DWORD, int, int))(*(_DWORD *)this->?[0] + 120))( /*0x51b9f4*/
      this->?[0],
      *(_DWORD *)&stru_A8EB00.?[1564],
      v84,
      v85);
    if ( !this->?[0] ) /*0x51b9f7*/
      WinAPI::Wrapper(-2147467261); /*0x51ba08*/
    (*(void (__stdcall **)(int))(*(_DWORD *)this->?[0] + 172))(this->?[0]); /*0x51ba16*/
    (*((void (__thiscall **)(InfantryClass *, int))this->FootClass + 73))(this, 1); /*0x51ba22*/
    v59 = *location; /*0x51ba2b*/
    v60 = this->?[2]; /*0x51ba2d*/
    v84 = this->?[1]; /*0x51ba30*/
    v83 = v59; /*0x51ba38*/
    v61 = (void (__thiscall **)(InfantryClass *, int *))this->FootClass; /*0x51ba3c*/
    v85 = v60; /*0x51ba41*/
    v61[60](this, &v83); /*0x51ba45*/
    if ( (ObjectPlacement *)this->? == v47 ) /*0x51ba51*/
    {
      v62 = (void (__thiscall **)(InfantryClass *, int *, int, int))this->FootClass; /*0x51ba53*/
      v83 = 0; /*0x51ba60*/
      v84 = 0; /*0x51ba64*/
      v85 = 0; /*0x51ba68*/
      v62[93](this, &v83, 1, 1); /*0x51ba6f*/
    }
    else
    {
      (*((void (__thiscall **)(InfantryClass *, _DWORD, int))this->FootClass + 337))(this, 0, 1072693248); /*0x51ba81*/
    }
    v63 = (int (__thiscall **)(InfantryClass *, int))this->FootClass; /*0x51ba87*/
    this->? = -1; /*0x51ba8d*/
    this->? = 1; /*0x51ba94*/
    return v63[99](this, 2); /*0x51ba9b*/
  }
  return result; /*0x51b693*/
}



// ==== 0x0051BAB0  InfantryClass::Update  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::Update(InfantryClass *this)
{
  int movementDestination; // eax
  AnimClass *v3; // eax
  int v4; // edi
  int v5; // ebp
  int temporalTargetingMe; // ecx
  int SequenceAnim; // eax
  CellClass *v8; // eax
  BuildingClass *v9; // eax
  BuildingClass *v10; // edi
  _BYTE *Type; // eax
  int LaserFenceFrame; // eax
  int slaveOwner; // eax
  void *v14; // eax
  int v15; // eax
  int team; // eax
  int v17; // edx
  int v18; // eax
  int v20; // [esp+28h] [ebp-Ch] BYREF
  int v21; // [esp+2Ch] [ebp-8h]
  int v22; // [esp+30h] [ebp-4h]

  if ( this->tubeIndex[0] >= 0 ) /*0x51bac0*/
  {
    InfantryClass::CalcMoveTarget(this); /*0x51bac2*/
    LOBYTE(movementDestination) = (*(char (__thiscall **)(InfantryClass *, _DWORD))(this->ptr_0 + 1184))(this, 0); /*0x51bacd*/
    return movementDestination; /*0x51bad9*/
  }
  if ( ((*(unsigned __int8 (__thiscall **)(InfantryClass *))(this->ptr_0 + 468))(this) /*0x51bb01*/
     || (*(unsigned __int8 (__thiscall **)(InfantryClass *))(this->ptr_0 + 472))(this))
    && !((int)dword_A8ED84 % 24) )
  {
    if ( *(_DWORD *)&dword_8871E0->__pad_240[260] ) /*0x51bb0d*/
    {
      v3 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x51bb1c*/
      if ( v3 ) /*0x51bb26*/
      {
        v4 = this->location[1]; /*0x51bb40*/
        v20 = this->location[0] + 120; /*0x51bb43*/
        v5 = this->location[2]; /*0x51bb4e*/
        v21 = v4 + 120; /*0x51bb57*/
        v22 = v5; /*0x51bb5b*/
        AnimClass::ctor(v3, *(void **)&dword_8871E0->__pad_240[260], &v20, 0, 1, (void *)0x600, 0, 0); /*0x51bb69*/
      }
    }
  }
  temporalTargetingMe = this->temporalTargetingMe; /*0x51bb6e*/
  if ( temporalTargetingMe ) /*0x51bb76*/
    (*(void (__thiscall **)(int))(*(_DWORD *)temporalTargetingMe + 92))(temporalTargetingMe); /*0x51bb7a*/
  if ( !(*(unsigned __int8 (__thiscall **)(InfantryClass *))(this->ptr_0 + 472))(this) /*0x51bb99*/
    && (!(*(unsigned __int8 (__thiscall **)(InfantryClass *))(this->ptr_0 + 468))(this) || !this->isImmobilized[0]) )
  {
    goto LABEL_98; /*0x51bb99*/
  }
  if ( !this->locomotor ) /*0x51bba3*/
    WinAPI::Wrapper(-2147467261); /*0x51bbb2*/
  (*(void (__stdcall **)(int))(*(_DWORD *)this->locomotor + 64))(this->locomotor); /*0x51bbc0*/
  LOBYTE(movementDestination) = this->isAliveFlag[0]; /*0x51bbc3*/
  if ( (_BYTE)movementDestination ) /*0x51bbcb*/
  {
LABEL_98:
    if ( (*(unsigned __int8 (__thiscall **)(InfantryClass *))(this->ptr_0 + 468))(this) ) /*0x51bbd5*/
    {
      if ( this->target ) /*0x51bbdf*/
        (*(void (__thiscall **)(InfantryClass *, _DWORD))(this->ptr_0 + 968))(this, 0); /*0x51bbef*/
      movementDestination = this->movementDestination; /*0x51bbf5*/
      if ( movementDestination ) /*0x51bbfd*/
        LOBYTE(movementDestination) = (*(char (__thiscall **)(InfantryClass *, _DWORD, int))(this->ptr_0 + 1152))( /*0x51bc0b*/
                                        this,
                                        0,
                                        1);
      return movementDestination; /*0x51bc17*/
    }
    if ( (*(unsigned __int8 (__thiscall **)(InfantryClass *))(this->ptr_0 + 512))(this) ) /*0x51bc1c*/
    {
      if ( (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) == -1 && this->queuedMission == -1 ) /*0x51bc3d*/
        (*(void (__thiscall **)(InfantryClass *, _DWORD, int))(this->ptr_0 + 1156))(this, 0, 1); /*0x51bc47*/
      (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 492))(this); /*0x51bc51*/
    }
    if ( this->health <= 0 ) /*0x51bc5c*/
    {
      SequenceAnim = this->SequenceAnim; /*0x51bc5e*/
      if ( SequenceAnim != 11 /*0x51bc94*/
        && SequenceAnim != 12
        && SequenceAnim != 13
        && SequenceAnim != 14
        && SequenceAnim != 15
        && SequenceAnim != 34
        && SequenceAnim != 35
        && SequenceAnim != 36
        && SequenceAnim != 20
        && SequenceAnim != 21 )
      {
        this->health = 1; /*0x51bc96*/
      }
    }
    FootClass::MovementAI(this); /*0x51bc9f*/
    LOBYTE(movementDestination) = this->isAliveFlag[0]; /*0x51bca4*/
    if ( (_BYTE)movementDestination ) /*0x51bcac*/
    {
      if ( this->inLimbo[0] /*0x51bcdc*/
        || (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) != 5
        && (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) != 11 )
      {
        goto LABEL_61; /*0x51bcdc*/
      }
      v20 = this->location[0]; /*0x51bcee*/
      v21 = this->location[1]; /*0x51bcff*/
      v22 = this->location[2]; /*0x51bd06*/
      v8 = Coord::To_Cell((Coord *)&dword_87F7E8, &v20); /*0x51bd0a*/
      v9 = (BuildingClass *)Cell::IsBridge((Cell *)v8); /*0x51bd11*/
      v10 = v9; /*0x51bd16*/
      if ( !v9 ) /*0x51bd1a*/
        goto LABEL_61; /*0x51bd1a*/
      Type = (_BYTE *)v9->Type; /*0x51bd20*/
      if ( !Type[5889] ) /*0x51bd26*/
      {
        if ( Type[5823] ) /*0x51bd30*/
        {
          LaserFenceFrame = v10->LaserFenceFrame; /*0x51bd3a*/
          if ( LaserFenceFrame != 12 && LaserFenceFrame != 8 ) /*0x51bd48*/
            goto LABEL_55; /*0x51bd48*/
        }
        else if ( Type[5824] ) /*0x51bd4c*/
        {
          if ( *(_BYTE *)(v10->owner + 506) ) /*0x51bd5c*/
            goto LABEL_55; /*0x51bd64*/
        }
        else if ( !Type[5815] || !(unsigned __int8)BuildingClass::IsPoweredOn(v10) ) /*0x51bd74*/
        {
          goto LABEL_55; /*0x51bd7b*/
        }
      }
      v10 = 0; /*0x51bd7d*/
LABEL_55:
      slaveOwner = this->slaveOwner; /*0x51bd7f*/
      if ( !slaveOwner /*0x51bdaf*/
        || !*(_DWORD *)(slaveOwner + 728)
        || v10 != (BuildingClass *)slaveOwner
        || (v14 = (void *)(*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 444))(this),
            !BuildingClass::CheckBridge(*(BuildingClass **)(this->slaveOwner + 728), (int)this, v14)) )
      {
        if ( v10 ) /*0x51bdba*/
          (*(void (__thiscall **)(InfantryClass *, int *, int, int))(this->ptr_0 + 372))(this, &dword_A8F200, 1, 1); /*0x51bdc9*/
      }
LABEL_61:
      if ( (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 120))(this) != 2 ) /*0x51bdd9*/
        (*(void (__thiscall **)(InfantryClass *, int))(this->ptr_0 + 292))(this, 2); /*0x51bde1*/
      if ( this->unknownBool68D[0] && !this->animation[5] ) /*0x51bdf1*/
      {
        v15 = this->SequenceAnim; /*0x51bdfb*/
        this->unknownBool68D[0] = 0; /*0x51be01*/
        if ( v15 == 27 || v15 == 28 || v15 == 29 || v15 == 30 ) /*0x51be1a*/
          (*(void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))(this->ptr_0 + 1368))(this, 28, 0, 0); /*0x51be26*/
        else
          (*(void (__thiscall **)(InfantryClass *, _DWORD, _DWORD, _DWORD))(this->ptr_0 + 1368))(this, 0, 0, 0); /*0x51be38*/
      }
      team = this->team; /*0x51be3e*/
      if ( team && this->isInPlayfield[0] ) /*0x51be48*/
        *(_BYTE *)(team + 130) = 1; /*0x51be52*/
      if ( !this->team && (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) == 5 ) /*0x51be70*/
      {
        v20 = this->location[0]; /*0x51be7e*/
        v21 = this->location[1]; /*0x51be8a*/
        v22 = this->location[2]; /*0x51be91*/
        if ( !(unsigned __int8)Tactical::IsCellVisible((Tactical *)&dword_87F7E8, &v20) ) /*0x51be9a*/
        {
          (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 928))(this); /*0x51bea7*/
          LOBYTE(movementDestination) = (*(char (__thiscall **)(InfantryClass *))(this->ptr_0 + 248))(this); /*0x51beb1*/
          return movementDestination; /*0x51bebd*/
        }
      }
      LOBYTE(movementDestination) = ProcessTechnoSquadResponse(this); /*0x51bec0*/
      if ( (_BYTE)movementDestination ) /*0x51bec7*/
        return movementDestination; /*0x51bec7*/
      if ( (*(unsigned __int8 (__thiscall **)(InfantryClass *))(this->ptr_0 + 512))(this) ) /*0x51bed1*/
      {
        if ( (*(int (__thiscall **)(InfantryClass *))(this->ptr_0 + 388))(this) == -1 && this->queuedMission == -1 ) /*0x51beef*/
          (*(void (__thiscall **)(InfantryClass *, _DWORD, int))(this->ptr_0 + 1156))(this, 0, 1); /*0x51bef9*/
        (*(void (__thiscall **)(InfantryClass *))(this->ptr_0 + 492))(this); /*0x51bf03*/
      }
      InfantryClass::ProcessIdleDeploy(this); /*0x51bf0b*/
      if ( this->movementDestination || this->Crawling[0] || !this->InfantryClass_field_bool_6DA[0] ) /*0x51bf24*/
        goto LABEL_92; /*0x51bf2c*/
      v17 = this->InfantryClass_field_timer_6C8[0]; /*0x51bf2e*/
      v18 = this->InfantryClass_field_timer_6C8[2]; /*0x51bf34*/
      if ( v17 != -1 ) /*0x51bf3c*/
      {
        if ( (int)dword_A8ED84 - v17 >= v18 ) /*0x51bf48*/
          goto LABEL_91; /*0x51bf48*/
        v18 -= (int)dword_A8ED84 - v17; /*0x51bf4a*/
      }
      if ( v18 ) /*0x51bf4e*/
      {
LABEL_92:
        FireTechnoAtTarget(this); /*0x51bf57*/
        LOBYTE(movementDestination) = this->isAliveFlag[0]; /*0x51bf5e*/
        if ( (_BYTE)movementDestination ) /*0x51bf66*/
        {
          Mission::ExecuteTechnoMissionAction((Mission *)this); /*0x51bf6a*/
          LOBYTE(movementDestination) = this->isAliveFlag[0]; /*0x51bf6f*/
          if ( (_BYTE)movementDestination ) /*0x51bf77*/
            LOBYTE(movementDestination) = Mission::ProcessUnitMissionAI((Mission *)this); /*0x51bf7b*/
        }
        return movementDestination; /*0x51bf7b*/
      }
LABEL_91:
      this->InfantryClass_field_bool_6DA[0] = 0; /*0x51bf50*/
      goto LABEL_92; /*0x51bf50*/
    }
  }
  return movementDestination; /*0x51bad3*/
}



// ==== 0x0051BF90  InfantryClass::EvaluateTarget  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::EvaluateTarget(InfantryClass *this, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v7; // rax
  int v8; // edx
  bool v9; // al
  _DWORD *Type; // eax
  int result; // eax
  int v12; // eax
  InfantryClass *NeighbourContent; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  bool v17; // al
  int v18; // eax
  int v19; // ebx
  int v20; // esi
  InfantryClass **v21; // eax
  int v22; // edi
  int v23; // esi
  ParasiteClass *parasiteImUsing; // eax
  int v25; // ecx
  _WORD *v26; // edi
  _WORD *v27; // eax
  TechnoClass *slaveOwner; // eax
  BuildingClass *slaveManager; // ecx
  AbstractClass *v30; // eax
  AbstractClass *v31; // edi
  _DWORD *v32; // eax
  AbstractClass *focus; // ecx
  _BYTE *v34; // eax
  int v35; // ecx
  _DWORD *v36; // eax
  int v37; // edi
  char v38; // al
  bool v39; // zf
  bool v40; // [esp+29h] [ebp-23h] BYREF
  bool v41; // [esp+2Ah] [ebp-22h]
  char v42; // [esp+2Bh] [ebp-21h]
  int v43; // [esp+2Ch] [ebp-20h]
  int v44; // [esp+30h] [ebp-1Ch] BYREF
  _DWORD v45[3]; // [esp+34h] [ebp-18h] BYREF
  _BYTE v46[12]; // [esp+40h] [ebp-Ch] BYREF
  int v47; // [esp+54h] [ebp+8h]

  v40 = (*(_DWORD *)(a2 + 320) & 0x100) != 0 /*0x51bfc6*/
     && (a4 == -1 || (v7 = a4 - *(char *)(a2 + 283), (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) > 1));
  v8 = *(_DWORD *)(a2 + 84); /*0x51bfd8*/
  v42 = *(_BYTE *)(a2 + 292); /*0x51bfdb*/
  v9 = (*(_DWORD *)(a2 + 292) & 0x20) != 0; /*0x51bfe8*/
  v43 = v8; /*0x51bfea*/
  v41 = v9; /*0x51bfee*/
  Type = (_DWORD *)InfantryClass::GetType((InfantryClass *)a2); /*0x51bff2*/
  if ( a3 == 8 ) /*0x51c000*/
  {
    if ( Type && __PAIR32__(Type[10], HIWORD(Type[9])) != __PAIR32__(Type[9], HIWORD(Type[10])) ) /*0x51c01b*/
      return 0; /*0x51c036*/
    return 7; /*0x51c01b*/
  }
  if ( Type ) /*0x51c03b*/
  {
    v12 = abs32(a3 - Type[11]); /*0x51c047*/
    if ( v12 > 2 && v12 < 6 && a3 != -1 ) /*0x51c056*/
      return 7; /*0x51c064*/
  }
  NeighbourContent = (InfantryClass *)Cell::GetNeighbourContent((Cell *)a2, ((_BYTE)a3 - 4) & 7); /*0x51c072*/
  v14 = InfantryClass::GetType(NeighbourContent); /*0x51c07e*/
  if ( v14 ) /*0x51c082*/
  {
    v15 = abs32((((_BYTE)a3 - 4) & 7) - *(_DWORD *)(v14 + 44)); /*0x51c08e*/
    if ( v15 > 2 && v15 < 6 && a3 != -1 ) /*0x51c09d*/
      return 7; /*0x51c0ab*/
  }
  if ( a4 - *(char *)(a2 + 283) > 4 ) /*0x51c0c2*/
    return 0; /*0x51c0cd*/
  result = (*((int (__thiscall **)(InfantryClass *, int, int, int *, bool *, int))this->FootClass + 108))( /*0x51c0e6*/
             this,
             a2,
             a3,
             &a4,
             &v40,
             a5);
  if ( result != 7 )
  {
    if ( a4 != -1 && (*(_DWORD *)(a2 + 320) & 0x100) != 0 && a4 == *(char *)(a2 + 283) + 4 ) /*0x51c118*/
    {
      v16 = *(_DWORD *)(a2 + 88); /*0x51c120*/
      v42 = *(_BYTE *)(a2 + 296); /*0x51c123*/
      v17 = (*(_DWORD *)(a2 + 296) & 0x20) != 0; /*0x51c130*/
      v43 = v16; /*0x51c132*/
      v41 = v17; /*0x51c136*/
    }
    if ( this->? /*0x51c163*/
      && !dword_A8E7AC
      && !(unsigned __int8)Type::CheckAmbiguity((Type *)&stru_87F5F0.__pad_58[416], a2, 1)
      && !(*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 200))(this) )
    {
      return 7; /*0x51c179*/
    }
    v18 = *(_DWORD *)(a2 + 68); /*0x51c17c*/
    v19 = 0; /*0x51c17f*/
    if ( v18 != -1 ) /*0x51c184*/
    {
      v20 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v18); /*0x51c190*/
      if ( *(_BYTE *)(v20 + 682) && !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x51c1a3*/
        return 7; /*0x51c1b8*/
      if ( *(_BYTE *)(v20 + 680) && *(unsigned __int8 *)(a2 + 286) >> 4 != *(_DWORD *)(v20 + 672) ) /*0x51c1dc*/
      {
        if ( !(*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 171))(this) ) /*0x51c1e3*/
          return 7; /*0x51c1e3*/
        v21 = (InfantryClass **)(*((int (__thiscall **)(InfantryClass *, _DWORD))this->FootClass + 254))(this, 0); /*0x51c1f8*/
        if ( !InfantryClass::startPanic(*v21) ) /*0x51c200*/
          return 7; /*0x51c207*/
        v19 = 5 - ((unsigned __int8)HouseClass::IsAllied(this->?, *(_DWORD *)(a2 + 80)) != 0); /*0x51c223*/
      }
    }
    v22 = 0; /*0x51c229*/
    v47 = 0; /*0x51c22d*/
    if ( v40 ) /*0x51c231*/
      v23 = *(_DWORD *)(a2 + 232); /*0x51c237*/
    else
      v23 = *(_DWORD *)(a2 + 228); /*0x51c243*/
    if ( v23 ) /*0x51c24b*/
    {
      while ( 1 ) /*0x51c251*/
      {
        if ( (InfantryClass *)v23 != this ) /*0x51c253*/
        {
          parasiteImUsing = this->?; /*0x51c259*/
          if ( parasiteImUsing ) /*0x51c261*/
          {
            v25 = *(_DWORD *)parasiteImUsing->__pad_28; /*0x51c263*/
            if ( v25 ) /*0x51c268*/
            {
              v26 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v25 + 440))(v25, &a5); /*0x51c27b*/
              v27 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v23 + 440))(v23, &v44); /*0x51c282*/
              if ( *v27 == *v26 && v27[1] == v26[1] ) /*0x51c298*/
                return 0; /*0x51c298*/
            }
          }
          slaveOwner = this->?; /*0x51c29e*/
          if ( slaveOwner /*0x51c2bc*/
            && (slaveManager = (BuildingClass *)slaveOwner->slaveManager) != 0
            && (TechnoClass *)v23 == slaveOwner
            && BuildingClass::CheckBridge(slaveManager, (int)this, (void *)a2) )
          {
            v41 = 0; /*0x51c2c5*/
          }
          else
          {
            if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v23 + 468))(v23) /*0x51c36f*/
              && ((*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 7
               || (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 8
               || (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 9
               || (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 17 && this->Type->C4
               || ((*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 11
                || (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 25
                || (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 5)
               && this->Type->Engineer) )
            {
              if ( (AbstractClass *)v23 == this->? /*0x51c3c8*/
                || (v45[0] = *(_DWORD *)(v23 + 156),
                    v45[1] = *(_DWORD *)(v23 + 160),
                    v45[2] = *(_DWORD *)(v23 + 164),
                    Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v45) == (CellClass *)this->?)
                || (AbstractClass *)v23 == this->? )
              {
                if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v23 + 352))(v23) ) /*0x51c71f*/
                  return 7; /*0x51c727*/
                if ( !this->? && !v40 && flt_89EA40[9 * *(_DWORD *)(a2 + 236) + this->Type->?[0]] == 0.0 ) /*0x51c76c*/
                  return 7; /*0x51c77a*/
                return 0; /*0x51c788*/
              }
              v30 = (AbstractClass *)Cell::IsBridge((Cell *)a2); /*0x51c3d2*/
              v31 = v30; /*0x51c3d7*/
              if ( v30 ) /*0x51c3db*/
              {
                if ( (AbstractClass *)v23 != v30 ) /*0x51c3df*/
                {
                  if ( v30 == this->? ) /*0x51c3e7*/
                    goto LABEL_134; /*0x51c3e7*/
                  v32 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))v30->ptr_0 + 18))(v30, v46); /*0x51c3f6*/
                  if ( Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v32) == (CellClass *)this->? /*0x51c416*/
                    || v31 == this->? )
                  {
                    goto LABEL_134; /*0x51c416*/
                  }
                }
              }
            }
            if ( (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 11 ) /*0x51c42a*/
            {
              focus = this->?; /*0x51c42c*/
              if ( focus == (AbstractClass *)v23 /*0x51c43e*/
                && (*((int (__thiscall **)(AbstractClass *))focus->ptr_0 + 11))(focus) == 1 )
              {
                return 7; /*0x51c43e*/
              }
            }
            if ( this->Type->VehicleThief /*0x51c47c*/
              && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v23 + 128))(v23)
              && this->? == (AbstractClass *)v23
              && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v23 + 132))(v23) + 3220) )
            {
              return 0; /*0x51c47c*/
            }
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 44))(v23) != 6 ) /*0x51c48c*/
            {
LABEL_96:
              if ( (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 7 /*0x51c56b*/
                && (AbstractClass *)v23 == this->?
                && this->? )
              {
                return 0; /*0x51c573*/
              }
              if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, v23) || dword_A8E7AC ) /*0x51c594*/
              {
                switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 44))(v23) ) /*0x51c669*/
                {
                  case 1: /*0x51c669*/
                    if ( !*(_DWORD *)(v23 + 1652) ) /*0x51c670*/
                      WinAPI::Wrapper(-2147467261); /*0x51c67f*/
                    if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v23 + 1652) + 16))(*(_DWORD *)(v23 + 1652)) /*0x51c694*/
                      || *(_DWORD *)(v23 + 1444) )
                    {
                      if ( *(_BYTE *)(v23 + 1718) ) /*0x51c6aa*/
                        goto LABEL_128; /*0x51c6aa*/
                      if ( !*(_DWORD *)(v23 + 1652) ) /*0x51c6b4*/
                        WinAPI::Wrapper(-2147467261); /*0x51c6c3*/
                      if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v23 + 1652) + 164))(*(_DWORD *)(v23 + 1652)) ) /*0x51c6d1*/
                      {
LABEL_128:
                        if ( v19 < 2 ) /*0x51c6de*/
                          v19 = 2; /*0x51c6e0*/
                      }
                    }
                    else if ( v19 < 6 ) /*0x51c6a1*/
                    {
                      v19 = 6; /*0x51c6a3*/
                    }
                    goto LABEL_134; /*0x51c6a8*/
                  case 2: /*0x51c669*/
                  case 6: /*0x51c669*/
                    return 7;
                  case 15: /*0x51c669*/
                    if ( !*(_DWORD *)(v23 + 1652) ) /*0x51c6e7*/
                      WinAPI::Wrapper(-2147467261); /*0x51c6f6*/
                    if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v23 + 1652) + 16))(*(_DWORD *)(v23 + 1652)) ) /*0x51c704*/
                      ++v47; /*0x51c70b*/
                    goto LABEL_134; /*0x51c70b*/
                  default:
                    goto LABEL_134;
                }
              }
              v36 = AbstractClass::IsTechnoType((AbstractClass *)v23); /*0x51c59c*/
              if ( v36 && v36[136] == 2 ) /*0x51c5ac*/
              {
                if ( v19 < 1 ) /*0x51c5b1*/
                  v19 = 1; /*0x51c5b7*/
              }
              else
              {
                v37 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 44))(v23); /*0x51c5cc*/
                if ( TechnoClass::GetValue((TechnoClass *)this, -1) <= 0 && v37 != 36 ) /*0x51c5da*/
                  return 7; /*0x51c5da*/
                if ( v37 == 6 ) /*0x51c5e3*/
                {
                  if ( *(_BYTE *)(*(_DWORD *)(v23 + 1312) + 5814) ) /*0x51c62f*/
                    return 7; /*0x51c637*/
                  if ( v19 < 5 ) /*0x51c640*/
                    v19 = 5; /*0x51c646*/
                }
                else if ( v37 == 15 ) /*0x51c5e8*/
                {
                  if ( (*(unsigned __int8 (__thiscall **)(int, HouseClass *))(*(_DWORD *)v23 + 200))(v23, this->?) ) /*0x51c611*/
                    v19 = 6; /*0x51c61f*/
                }
                else if ( v37 != 36 && v19 < 5 ) /*0x51c5f6*/
                {
                  v19 = 5; /*0x51c5fc*/
                }
              }
              goto LABEL_134; /*0x51c5bc*/
            }
            v34 = *(_BYTE **)(v23 + 1312); /*0x51c492*/
            if ( !v34[5889] ) /*0x51c498*/
            {
              if ( !v34[5823] || (v35 = *(_DWORD *)(v23 + 1560), v35 != 12) && v35 != 8 ) /*0x51c4c2*/
              {
                if ( v34[5824] ) /*0x51c4c8*/
                {
                  if ( *(_BYTE *)(*(_DWORD *)(v23 + 540) + 506) ) /*0x51c4d8*/
                    return 7; /*0x51c4e0*/
                }
                else
                {
                  if ( !v34[5815] ) /*0x51c4f3*/
                    goto LABEL_96; /*0x51c4f3*/
                  if ( !(unsigned __int8)BuildingClass::IsPoweredOn((BuildingClass *)v23) ) /*0x51c4f7*/
                  {
                    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v23 + 540), (#375 *)this->?) ) /*0x51c511*/
                    {
                      if ( v19 < 3 ) /*0x51c51d*/
                        v19 = 3; /*0x51c523*/
                    }
                    else
                    {
                      if ( !(*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 171))(this) ) /*0x51c53a*/
                        return 7; /*0x51c53a*/
                      if ( v19 < 5 ) /*0x51c543*/
                        v19 = 5; /*0x51c549*/
                    }
                  }
                }
              }
            }
          }
        }
LABEL_134:
        v23 = *(_DWORD *)(v23 + 48); /*0x51c70f*/
        if ( !v23 ) /*0x51c714*/
        {
          v22 = v47; /*0x51c78b*/
          break; /*0x51c78b*/
        }
      }
    }
    if ( !this->? && !v40 && flt_89EA40[9 * *(_DWORD *)(a2 + 236) + this->Type->?[0]] == 0.0 ) /*0x51c7ce*/
      return 7; /*0x51c7dc*/
    if ( !v19 && v41 ) /*0x51c7e9*/
      return 2; /*0x51c7f7*/
    if ( v43 != -1 )
    {
      if ( (unsigned __int8)HouseClass::IsAllied(this->?, v43) )
      {
        v38 = v42; /*0x51c813*/
        if ( (v42 & 0x1C) == 0x1C && v19 < 2 )
          return v22 != 3 ? 2 : 6;
        goto LABEL_159; /*0x51c824*/
      }
      if ( TechnoClass::GetValue((TechnoClass *)this, -1) <= 0 ) /*0x51c84c*/
        return 7; /*0x51c84c*/
      if ( v19 < 5 ) /*0x51c851*/
        return 5; /*0x51c861*/
    }
    v38 = v42; /*0x51c864*/
LABEL_159:
    if ( v19 ) /*0x51c86a*/
      return v19; /*0x51c86a*/
    v39 = (v38 & 0x1C) == 28; /*0x51c86e*/
    result = 7; /*0x51c870*/
    if ( !v39 ) /*0x51c875*/
      return v19; /*0x51c877*/
  }
  return result; /*0x51c02d*/
}



// ==== 0x0051C8B0  InfantryClass::GetFireError  this=InfantryClass  sig=csp ====
int __fastcall InfantryClass::GetFireError(InfantryClass *this, int a2, int *a3, int a4, int a5)
{
  int v6; // eax
  int result; // eax
  int *v8; // edi
  int v11; // ecx
  unsigned int v12; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ebp
  int v18; // esi
  int v19; // esi
  char v20[16]; // [esp+14h] [ebp-10h] BYREF

  _EBX = this; /*0x51c8b4*/
  v6 = this->SequenceAnim[0]; /*0x51c8b8*/
  if ( v6 == 11 /*0x51c8ee*/
    || v6 == 12
    || v6 == 13
    || v6 == 14
    || v6 == 15
    || v6 == 34
    || v6 == 35
    || v6 == 36
    || v6 == 20
    || v6 == 21 )
  {
    return 6; /*0x51c8fb*/
  }
  v8 = a3; /*0x51c907*/
  if ( TechnoClass::GetValue((TechnoClass *)this, -1) < 0 ) /*0x51c90d*/
  {
    if ( !a3 ) /*0x51c911*/
      return 5; /*0x51c911*/
    if ( (*(int (__thiscall **)(int *))(*a3 + 44))(a3) != 15 ) /*0x51c91d*/
      return 5; /*0x51c91d*/
    BuildingClass::GetHealthRatio((BuildingClass *)a3); /*0x51c921*/
    _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x51c926*/
    __asm /*0x51c92c*/
    {
      fcomp qword ptr [ecx+16F8h]
      fnstsw ax
    }
    if ( (_AX & 0x100) == 0 ) /*0x51c937*/
      return 5; /*0x51c944*/
  }
  if ( a3 )
  {
    if ( (*(int (__thiscall **)(int *))(*a3 + 44))(a3) == 1 )
    {
      if ( *(_BYTE *)((*((int (__thiscall **)(InfantryClass *))_EBX->FootClass + 33))(_EBX) + 1682) )
      {
        v11 = a3[170]; /*0x51c96b*/
        if ( v11 )
        {
          v12 = _EBX ? ((_EBX->? & 1) != 0 ? (unsigned int)_EBX : 0) : 0;
          if ( v11 != v12 ) /*0x51c98a*/
            return 5; /*0x51c997*/
        }
      }
    }
  }
  result = TriggerTypeClass::ReadINI((TechnoClass *)_EBX, a4, a3, a4, a5); /*0x51c9a7*/
  if ( !result ) /*0x51c9b2*/
  {
    __asm /*0x51c9b8*/
    {
      fld qword ptr [ebx+578h]
      fcomp ds:dbl_7E3860
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x51c9c9*/
      return 7; /*0x51c9c9*/
    if ( _EBX->? ) /*0x51c9cf*/
    {
      v14 = _EBX->SequenceAnim[0]; /*0x51c9d9*/
      if ( v14 != -1 && !byte_7EAF7C[4 * v14] ) /*0x51c9e4*/
        return 7; /*0x51c9ed*/
    }
    if ( _EBX->Type->? ) /*0x51c9f9*/
    {
      v15 = _EBX->?[0]; /*0x51ca07*/
      a5 = 0; /*0x51ca15*/
      if ( !v15 ) /*0x51ca1d*/
        goto LABEL_37; /*0x51ca1d*/
      v16 = StreamClass::Set2((StreamClass *)&a5, _EBX->?); /*0x51ca24*/
      if ( v16 < 0 && v16 != -2147467262 ) /*0x51ca32*/
        WinAPI::Wrapper(v16); /*0x51ca35*/
      if ( !a5 ) /*0x51ca40*/
LABEL_37:
        WinAPI::Wrapper(-2147467261); /*0x51ca47*/
      (*(void (__stdcall **)(int, char *))(*(_DWORD *)a5 + 12))(a5, v20); /*0x51ca59*/
      v17 = memcmp(v20, g_CLSID_JumpjetLocomotion.Data2, 16); /*0x51ca6a*/
      ComPtr::Release_Alt((ComPtr *)&a5); /*0x51ca79*/
      if ( !v17 && _EBX->Type->JumpJetTurn ) /*0x51ca8e*/
      {
        if ( !_EBX->?[0] ) /*0x51ca98*/
          WinAPI::Wrapper(-2147467261); /*0x51caa7*/
        if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)_EBX->?[0] + 128))(_EBX->?[0]) ) /*0x51cab5*/
          return 7; /*0x51caca*/
      }
      v8 = a3; /*0x51cacd*/
    }
    v18 = *(_DWORD *)(*((int (__thiscall **)(InfantryClass *, int))_EBX->FootClass + 254))(_EBX, a4); /*0x51cae0*/
    if ( !v18 ) /*0x51cae4*/
      goto LABEL_64; /*0x51cae4*/
    if ( *(_BYTE *)(v18 + 297) && _EBX->? ) /*0x51caf0*/
      return 7; /*0x51cb05*/
    if ( *(_BYTE *)(v18 + 336) && v8 != (int *)(*((int (__thiscall **)(InfantryClass *))_EBX->FootClass + 111))(_EBX) ) /*0x51cb1e*/
      return 5; /*0x51cb2b*/
    v19 = *(_DWORD *)(v18 + 172); /*0x51cb2e*/
    if ( v19 && *(_BYTE *)(v19 + 343) && v8 && (v8[5] & 2) != 0 && v8[14] ) /*0x51cb4c*/
    {
      return 5; /*0x51cb55*/
    }
    else
    {
LABEL_64:
      if ( !_EBX->?[0] ) /*0x51cb61*/
        WinAPI::Wrapper(-2147467261); /*0x51cb70*/
      result = (*(int (__stdcall **)(int))(*(_DWORD *)_EBX->?[0] + 140))(_EBX->?[0]); /*0x51cb7e*/
      if ( !result ) /*0x51cb86*/
        return 0; /*0x51cb88*/
    }
  }
  return result; /*0x51c8f0*/
}



// ==== 0x0051CBA0  InfantryClass::ValidatePlacement  this=InfantryClass  sig=csp ====
int __userpurge InfantryClass::ValidatePlacement@<eax>(
        InfantryClass *this,
        __int16 a2@<bx>,
        int a3@<ebp>,
        int a4,
        int a5)
{
  InfantryClass *v5; // ecx
  InfantryClass *v6; // esi
  char v7; // bl
  int result; // eax
  int v9; // edi
  InfantryTypeClass *Type; // eax
  int v11; // [esp+0h] [ebp-Ch]

  v6 = v5; /*0x51cba6*/
  v7 = FootClass::ValidatePlacement((FootClass *)this, a2, a3, a4, v11); /*0x51cbba*/
  result = (*((int (__thiscall **)(InfantryClass *))v6->FootClass + 299))(v6); /*0x51cbbc*/
  if ( (_BYTE)result ) /*0x51cbc4*/
  {
    LOBYTE(result) = v7; /*0x51cbc7*/
    return result; /*0x51cbcb*/
  }
  result = (*((int (__thiscall **)(InfantryClass *))v6->FootClass + 97))(v6); /*0x51cbd2*/
  if ( result == 28 ) /*0x51cbdb*/
  {
    LOBYTE(result) = v7; /*0x51cbde*/
    return result; /*0x51cbe2*/
  }
  if ( v6->? ) /*0x51cbe5*/
  {
    v9 = 1; /*0x51cbf3*/
    if ( (*((int (__thiscall **)(InfantryClass *))v6->FootClass + 97))(v6) == 17 ) /*0x51cc01*/
      v9 = 17; /*0x51cc03*/
    if ( (*((int (__thiscall **)(InfantryClass *))v6->FootClass + 97))(v6) == 8 ) /*0x51cc12*/
      v9 = 8; /*0x51cc18*/
    goto LABEL_37; /*0x51cc1a*/
  }
  InfantryClass::ProcessExitQueue(v6); /*0x51cc21*/
  if ( v6->? ) /*0x51cc26*/
  {
    v9 = 2; /*0x51cc34*/
    if ( (*((int (__thiscall **)(InfantryClass *))v6->FootClass + 97))(v6) == 8 ) /*0x51cc42*/
      v9 = 8; /*0x51cc44*/
    if ( (*((int (__thiscall **)(InfantryClass *))v6->FootClass + 97))(v6) == 17 ) /*0x51cc53*/
      v9 = 17; /*0x51cc59*/
    goto LABEL_37; /*0x51cc5b*/
  }
  result = (*((int (__thiscall **)(InfantryClass *))v6->FootClass + 97))(v6); /*0x51cc64*/
  if ( result == 5 /*0x51ccae*/
    || (result = (*((int (__thiscall **)(InfantryClass *))v6->FootClass + 97))(v6), result == 11)
    || (*((int (__thiscall **)(InfantryClass *))v6->FootClass + 97))(v6) != -1
    && ((result = (int)MissionClass::GetMissionControl((MissionClass *)v6), *(_BYTE *)(result + 5))
     || (result = (int)MissionClass::GetMissionControl((MissionClass *)v6), *(_BYTE *)(result + 7))) )
  {
    LOBYTE(result) = 0; /*0x51cda6*/
    return result; /*0x51cda6*/
  }
  if ( (unsigned __int8)House::IsCurrentPlayer((House *)v6->?) || v6->? ) /*0x51ccc8*/
  {
    if ( v6->? != 11 /*0x51cd64*/
      && (!(unsigned __int8)TechnoTypeClass::HasVoiceResponse((int *)v6, 16) && !BYTE1(v6->Type->?[0]) || v6->?) )
    {
      v9 = 5; /*0x51cd6e*/
      goto LABEL_37; /*0x51cd73*/
    }
    goto LABEL_36; /*0x51cd6c*/
  }
  if ( v6->?->iqLevel2 >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5184) || v6->? == 11 ) /*0x51ccf5*/
  {
    if ( v6->? ) /*0x51ccfe*/
    {
      v9 = 5; /*0x51cd08*/
      goto LABEL_37; /*0x51cd0d*/
    }
    if ( !(*((unsigned __int8 (__thiscall **)(InfantryClass *))v6->FootClass + 171))(v6) ) /*0x51cd13*/
    {
      Type = v6->Type; /*0x51cd1d*/
      if ( !Type->Engineer && !Type->VehicleThief ) /*0x51cd2d*/
      {
        v9 = 5; /*0x51cd37*/
        goto LABEL_37; /*0x51cd3c*/
      }
    }
LABEL_36:
    v9 = 11; /*0x51cd75*/
    goto LABEL_37; /*0x51cd75*/
  }
  v9 = 5; /*0x51ccf7*/
LABEL_37:
  result = v6->?; /*0x51cd7a*/
  if ( result != 25 && result != 11 ) /*0x51cd88*/
    result = (*((int (__thiscall **)(InfantryClass *, int, _DWORD))v6->FootClass + 122))(v6, v9, 0); /*0x51cd96*/
  LOBYTE(result) = v7; /*0x51cd9d*/
  return result; /*0x51cbc6*/
}



// ==== 0x0051CDB0  InfantryClass::ProcessIdleAction  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessIdleAction(InfantryClass *this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  char v7; // bl
  __int16 v8; // ax
  InfantryTypeClass *Type; // eax
  __int16 v10; // cx
  __int16 v11; // dx
  unsigned int v12; // [esp+8h] [ebp-24h]
  int v13; // [esp+Ch] [ebp-20h] BYREF
  double v14; // [esp+10h] [ebp-1Ch] BYREF
  double v15; // [esp+18h] [ebp-14h] BYREF
  int v16; // [esp+20h] [ebp-Ch] BYREF
  int v17; // [esp+24h] [ebp-8h]
  int v18; // [esp+28h] [ebp-4h]

  result = (*((int (__thiscall **)(InfantryClass *))this->FootClass + 285))(this); /*0x51cdb9*/
  if ( (_BYTE)result ) /*0x51cdc1*/
  {
    v14 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5904) * 1800.0; /*0x51cdeb*/
    v15 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5904) * 450.0; /*0x51cdfb*/
    v12 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x51ce0c*/
    v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x51ce10*/
    LOWORD(v4) = Math::RoundToInt((v14 - v15) * ((double)(int)v12 * 4.656612877414201e-10) + v15); /*0x51ce26*/
    v5 = v17; /*0x51ce2b*/
    this->?[0] = v3; /*0x51ce35*/
    this->?[1] = v5; /*0x51ce3b*/
    this->?[2] = v4; /*0x51ce3e*/
    if ( !this->Type->Fraidycat /*0x51ce67*/
      || (unsigned __int8)House::IsCurrentPlayer((House *)this->?)
      || this->PanicDurationLeft <= 50 )
    {
      v6 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 10); /*0x51cea1*/
      v7 = ObjectClass::StepCleanup((ObjectClass *)this, &stru_825538.Name[5]); /*0x51cea8*/
      if ( v7 && Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 10) < 5 ) /*0x51cec6*/
        v6 = 8; /*0x51cec8*/
      result = v6 - 1; /*0x51cecd*/
      switch ( v6 ) /*0x51ced9*/
      {
        case 1: /*0x51ced9*/
        case 2: /*0x51ced9*/
        case 7: /*0x51ced9*/
          result = (*((int (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 10, 0, 0); /*0x51cf4c*/
          if ( this->? ) /*0x51cf52*/
            goto LABEL_22; /*0x51cf52*/
          result = House::IsHumanPlayer((House *)this->?); /*0x51cf66*/
          if ( !(_BYTE)result ) /*0x51cf6d*/
            goto LABEL_22; /*0x51cf6d*/
          result = (int)this->Type; /*0x51cf73*/
          if ( *(int *)(result + 3736) <= 0 ) /*0x51cf81*/
            goto LABEL_22; /*0x51cf81*/
          result = Random::Range(&Randomizer_Global, 0, 2); /*0x51cf90*/
          if ( result ) /*0x51cf97*/
            goto LABEL_22; /*0x51cf97*/
          v16 = this->?[0]; /*0x51cfa7*/
          v17 = this->?[1]; /*0x51cfb2*/
          Type = this->Type; /*0x51cfb6*/
          v18 = this->?[2]; /*0x51cfbf*/
          result = (int)StartAudioControllerAt(*(_DWORD *)Type->VoiceComment[1], &v16, 0); /*0x51cfcb*/
          LOBYTE(result) = 1; /*0x51cfd2*/
          break; /*0x51cfd8*/
        case 3: /*0x51ced9*/
        case 4: /*0x51ced9*/
        case 5: /*0x51ced9*/
          result = (*((int (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 9, 0, 0); /*0x51ceea*/
          LOBYTE(result) = 1; /*0x51cef2*/
          break; /*0x51cef8*/
        case 6: /*0x51ced9*/
          LOWORD(v12) = (unsigned __int16)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7) << 13; /*0x51cf11*/
          LOBYTE(v8) = 0; /*0x51cf16*/
          HIBYTE(v8) = ((v12 >> 7) + 1) >> 1; /*0x51cf27*/
          LOWORD(v13) = v8; /*0x51cf2f*/
          result = FacingClass::Set_SyncLog((char *)this->?, &v13); /*0x51cf34*/
          LOBYTE(result) = 1; /*0x51cf3b*/
          break; /*0x51cf41*/
        case 8: /*0x51ced9*/
          LOWORD(v12) = (unsigned __int16)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7) << 13; /*0x51cff1*/
          LOBYTE(v10) = 0; /*0x51cff6*/
          HIBYTE(v10) = ((v12 >> 7) + 1) >> 1; /*0x51d007*/
          LOWORD(v14) = v10; /*0x51d009*/
          FacingClass::Set_SyncLog((char *)this->?, &v14); /*0x51d014*/
          if ( !v7 ) /*0x51d01b*/
          {
            result = House::IsCurrentPlayer((House *)this->?); /*0x51d023*/
            if ( (_BYTE)result ) /*0x51d02a*/
              goto LABEL_22; /*0x51d02a*/
            result = (int)this->Type; /*0x51d02c*/
            if ( !*(_BYTE *)(result + 3775) ) /*0x51d032*/
              goto LABEL_22; /*0x51d03a*/
          }
          result = (*((int (__thiscall **)(InfantryClass *, _BYTE *, int, _DWORD))this->FootClass + 93))( /*0x51d049*/
                     this,
                     &stru_A8EB00.?[1564],
                     1,
                     0);
          LOBYTE(result) = 1; /*0x51d051*/
          break; /*0x51d057*/
        case 9: /*0x51ced9*/
        case 10: /*0x51ced9*/
          LOWORD(v12) = (unsigned __int16)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7) << 13; /*0x51d06f*/
          LOBYTE(v11) = 0; /*0x51d074*/
          HIBYTE(v11) = ((v12 >> 7) + 1) >> 1; /*0x51d085*/
          LOWORD(v15) = v11; /*0x51d08d*/
          result = FacingClass::Set_SyncLog((char *)this->?, &v15); /*0x51d092*/
          goto LABEL_22; /*0x51d092*/
        default:
LABEL_22:
          LOBYTE(result) = 1; /*0x51d097*/
          break; /*0x51d09f*/
      }
    }
    else
    {
      result = (*((int (__thiscall **)(InfantryClass *, _BYTE *, int, _DWORD))this->FootClass + 93))( /*0x51ce76*/
                 this,
                 &stru_A8EB00.?[1564],
                 1,
                 0);
      LOBYTE(result) = 1; /*0x51ce7d*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x51d0a1*/
  }
  return result; /*0x51ce7c*/
}



// ==== 0x0051D0D0  InfantryClass::FindMoveTarget  this=InfantryClass  sig=csp ====
char __userpurge InfantryClass::FindMoveTarget@<al>(
        InfantryClass *this,
        double a2@<st0>,
        unsigned int *a3,
        unsigned int ptr_0,
        unsigned int a5)
{
  int *v5; // ecx
  char v6; // bl
  int *v7; // esi
  int v8; // eax
  char *MissionControl; // eax
  int v11; // eax
  int v12; // edi
  _DWORD *v13; // eax
  int v14; // ecx
  unsigned int v15; // edi
  int v16; // eax
  int v17; // edx
  _DWORD *v18; // eax
  int v19; // edi
  void *v20; // eax
  int v21; // edx
  _DWORD *v22; // eax
  char *v23; // edi
  int v24; // edi
  int v25; // eax
  char v26; // di
  int v27; // edi
  int v28; // edx
  __int16 v29; // cx
  void *v30; // ebp
  int v31; // ebx
  int LandHeight; // eax
  __int16 v33; // cx
  __int16 v34; // dx
  _DWORD *v35; // eax
  int v36; // edi
  void *v37; // eax
  double v39; // [esp+20h] [ebp-60h]
  double v40; // [esp+20h] [ebp-60h]
  double v41; // [esp+28h] [ebp-58h]
  double v42; // [esp+28h] [ebp-58h]
  __int16 v43[2]; // [esp+40h] [ebp-40h] BYREF
  __int16 v44[2]; // [esp+44h] [ebp-3Ch] BYREF
  __int16 v45[2]; // [esp+48h] [ebp-38h] BYREF
  unsigned int v46; // [esp+4Ch] [ebp-34h]
  unsigned int v47; // [esp+50h] [ebp-30h]
  int v48; // [esp+54h] [ebp-2Ch] BYREF
  int v49; // [esp+58h] [ebp-28h] BYREF
  int v50; // [esp+5Ch] [ebp-24h] BYREF
  int v51; // [esp+60h] [ebp-20h]
  int v52; // [esp+64h] [ebp-1Ch]
  _DWORD v53[3]; // [esp+68h] [ebp-18h] BYREF
  _WORD v54[4]; // [esp+74h] [ebp-Ch] BYREF
  int v55; // [esp+7Ch] [ebp-4h]

  v6 = (char)a3; /*0x51d0d5*/
  v7 = v5; /*0x51d0da*/
  v8 = v5[433]; /*0x51d0dd*/
  if ( (v8 == 27 || v8 == 28 || v8 == 29 || v8 == 30) && (_BYTE)a3 && (_BYTE)ptr_0 ) /*0x51d101*/
  {
    (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*v5 + 1368))(v5, 31, 0, 0); /*0x51d10d*/
  }
  else if ( (unsigned __int8)House::IsCurrentPlayer((House *)v5[135]) ) /*0x51d11b*/
  {
    MissionControl = (char *)v7[433]; /*0x51d124*/
    if ( MissionControl == (char *)27 /*0x51d148*/
      || MissionControl == (char *)28
      || MissionControl == (char *)29
      || MissionControl == (char *)30 )
    {
      return (char)MissionControl; /*0x51d148*/
    }
  }
  if ( !v7[413] ) /*0x51d150*/
    WinAPI::Wrapper(-2147467261); /*0x51d15d*/
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v7[413] + 16))(v7[413]) ) /*0x51d16b*/
    v6 = 0; /*0x51d172*/
  MissionControl = MissionClass::GetMissionControl((MissionClass *)v7); /*0x51d176*/
  if ( MissionControl[9] || v6 )
  {
    LOBYTE(MissionControl) = *(_BYTE *)(v7[432] + 3775); /*0x51d190*/
    if ( (_BYTE)MissionControl || !v7[173] || v6 )
    {
      MissionControl = (char *)v7[433]; /*0x51d1aa*/
      if ( MissionControl == (char *)-1 || MissionControl == (char *)31 || byte_7EAF7C[4 * (_DWORD)MissionControl] )
      {
        if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6125) /*0x51d1fa*/
          || (unsigned __int8)TechnoTypeClass::HasVoiceResponse(v7, 3)
          || (_BYTE)ptr_0
          || (LOBYTE(MissionControl) = House::IsCurrentPlayer((House *)v7[135]), !(_BYTE)MissionControl) )
        {
          if ( !v6 ) /*0x51d210*/
          {
LABEL_33:
            LOBYTE(MissionControl) = *(_BYTE *)(v7[432] + 3775); /*0x51d212*/
            if ( !(_BYTE)MissionControl ) /*0x51d220*/
              return (char)MissionControl; /*0x51d220*/
          }
        }
        else if ( !v6 ) /*0x51d1fe*/
        {
          if ( !v7[373] ) /*0x51d206*/
            return (char)MissionControl; /*0x51d206*/
          goto LABEL_33; /*0x51d206*/
        }
        _EAX = this; /*0x51d226*/
        ptr_0 = (unsigned int)this->FootClass; /*0x51d234*/
        if ( ptr_0 == *(_DWORD *)&stru_A8EB00.?[1564] /*0x51d252*/
          && this->? == *(void **)&stru_A8EB00.?[1568]
          && this->? == *(void **)&stru_A8EB00.?[1572] )
        {
          v12 = (*(int (__thiscall **)(int *, _WORD *))(*v7 + 72))(v7, v54); /*0x51d2e7*/
          v13 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*v7 + 72))(v7, v53); /*0x51d2f0*/
          v14 = (unsigned __int8)*(_DWORD *)(v12 + 4); /*0x51d2fd*/
          v50 = (unsigned __int8)*v13; /*0x51d308*/
          v51 = v14; /*0x51d30c*/
          if ( v50 == 128 && v14 == 128 ) /*0x51d314*/
          {
            v15 = *ProgressTimer::GetValue((ProgressTimer *)(v7 + 226), &v49); /*0x51d36b*/
          }
          else
          {
            __asm { fild [esp+50h+var_24] } /*0x51d316*/
            __asm
            {
              fsub ds:dbl_7E2808
              fstp [esp+60h+var_5C+4]; double
              fild [esp+60h+var_20]
              fsubr ds:dbl_7E2808
              fstp [esp+60h+var_64+4]; double
            }
            Math::CalcAngle(v40, v42); /*0x51d337*/
            __asm { fsub ds:dbl_7E2820 } /*0x51d33c*/
            __asm { fmul ds:dbl_7E2818 }
            LOWORD(ptr_0) = Math::RoundToInt(a2); /*0x51d350*/
            v15 = ptr_0; /*0x51d355*/
          }
          v16 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 4); /*0x51d385*/
          v17 = *v7; /*0x51d38a*/
          v46 = ((((v15 >> 12) + 1) >> 1) & 7) + v16 - 2; /*0x51d390*/
          a3 = 0; /*0x51d39f*/
          v18 = (_DWORD *)(*(int (__thiscall **)(int *, _WORD *, _DWORD))(v17 + 76))(v7, v54, 0); /*0x51d3ae*/
          LOWORD(ptr_0) = *v18 / 256; /*0x51d3c5*/
          HIWORD(ptr_0) = v18[1] / 256; /*0x51d3de*/
          LOBYTE(v18) = *((_BYTE *)v7 + 140); /*0x51d3e7*/
          this = (InfantryClass *)ptr_0; /*0x51d3f1*/
          *(_DWORD *)v45 = *LayerClass::Pathfinding_Find( /*0x51d42b*/
                              &stru_87F5F0.__pad_58[416],
                              *(_DWORD *)(v7[432] + 1660),
                              &v48,
                              (__int16 *)&this,
                              *(_DWORD *)(v7[432] + 1660),
                              -1,
                              0,
                              (char)v18,
                              1,
                              1,
                              0,
                              1,
                              0,
                              1,
                              (__int16 *)&a3,
                              0,
                              0);
          if ( v45[0] != *(_WORD *)&stru_A8EB00.?[1532] || v45[1] != *(_WORD *)&stru_A8EB00.?[1534] ) /*0x51d43d*/
          {
            v19 = *v7; /*0x51d43f*/
            v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x51d44d*/
            (*(void (__thiscall **)(int *, void *, int))(v19 + 1152))(v7, v20, 1); /*0x51d455*/
            if ( !v7[413] ) /*0x51d45b*/
              WinAPI::Wrapper(-2147467261); /*0x51d46a*/
            LOBYTE(MissionControl) = (*(char (__stdcall **)(int))(*(_DWORD *)v7[413] + 64))(v7[413]); /*0x51d478*/
            return (char)MissionControl; /*0x51d482*/
          }
        }
        else
        {
          v50 = v7[39]; /*0x51d266*/
          __asm { fild [esp+60h+var_24] } /*0x51d26a*/
          v51 = v7[40]; /*0x51d271*/
          __asm { fisub dword ptr [esp+60h+arg_8] } /*0x51d275*/
          v52 = v7[41]; /*0x51d27c*/
          __asm /*0x51d280*/
          {
            fstp [esp+60h+var_5C+4]; double
            fild dword ptr [eax+4]
            fisub [esp+60h+var_20]
            fstp [esp+60h+var_64+4]; double
          }
          Math::CalcAngle(v39, v41); /*0x51d28e*/
          __asm { fsub ds:dbl_7E2820 } /*0x51d293*/
          __asm { fmul ds:dbl_7E2818 }
          LOWORD(ptr_0) = Math::RoundToInt(a2); /*0x51d2a7*/
          v11 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 4); /*0x51d2ba*/
          v46 = v11 + ((((ptr_0 >> 12) + 1) >> 1) & 7) - 2; /*0x51d2d0*/
        }
        v21 = *v7; /*0x51d487*/
        this = 0; /*0x51d491*/
        a3 = 0; /*0x51d49b*/
        v22 = (_DWORD *)(*(int (__thiscall **)(int *, _WORD *, _DWORD))(v21 + 76))(v7, v54, 0); /*0x51d4a5*/
        LOWORD(ptr_0) = *v22 / 256; /*0x51d4b8*/
        HIWORD(ptr_0) = v22[1] / 256; /*0x51d4d0*/
        *(_DWORD *)v43 = ptr_0; /*0x51d4d9*/
        v23 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v43); /*0x51d4e8*/
        v24 = v23[283] + (*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*v7 + 188))(v7, 0) != 0 ? 4 : 0;
        (*(void (__thiscall **)(int *, _WORD *, _DWORD))(*v7 + 76))(v7, v54, 0); /*0x51d516*/
        v25 = v24 * *(_DWORD *)&stru_A8EB00.?[1628]; /*0x51d51e*/
        v26 = 0; /*0x51d521*/
        v55 = v25; /*0x51d523*/
        v48 = 0; /*0x51d527*/
        while ( 1 ) /*0x51d536*/
        {
          v27 = ((_BYTE)v46 + v26) & 7; /*0x51d536*/
          v28 = v27 & 7; /*0x51d53b*/
          v29 = LOWORD(g_DDrawSurfaceManager.scenario[v28 + 82]) + v43[0]; /*0x51d53e*/
          LOWORD(v28) = HIWORD(g_DDrawSurfaceManager.scenario[v28 + 82]); /*0x51d54d*/
          LOWORD(v47) = v29; /*0x51d555*/
          HIWORD(v47) = v43[1] + v28; /*0x51d569*/
          ptr_0 = v47; /*0x51d572*/
          v30 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&ptr_0); /*0x51d587*/
          if ( (unsigned __int8)LayerClass::IsWithinUsableArea( /*0x51d589*/
                                  (LayerClass *)&stru_87F5F0.__pad_58[416],
                                  (__int16 *)&ptr_0,
                                  1) )
          {
            v31 = *v7; /*0x51d596*/
            LandHeight = ObjectClass::GetLandHeight((ObjectClass *)v7); /*0x51d59e*/
            if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v31 + 428))( /*0x51d5a8*/
                    v7,
                    v30,
                    v27,
                    LandHeight,
                    0,
                    1) )
            {
              v33 = *(_WORD *)&stru_A8EB00.?[1532]; /*0x51d5b6*/
              v34 = *(_WORD *)&stru_A8EB00.?[1534]; /*0x51d5bc*/
              if ( this == *(InfantryClass **)&stru_A8EB00.?[1532] ) /*0x51d5cc*/
                this = (InfantryClass *)ptr_0; /*0x51d5d5*/
              if ( *(_WORD *)&stru_A8EB00.?[1532] || *(_WORD *)&stru_A8EB00.?[1534] ) /*0x51d5e5*/
                goto LABEL_57; /*0x51d5e5*/
              v53[1] = (SHIWORD(ptr_0) << 8) + 128; /*0x51d606*/
              v53[0] = ((__int16)ptr_0 << 8) + 128; /*0x51d612*/
              v53[2] = v55; /*0x51d626*/
              v35 = Terrain::ClimbCheck(&v50, v53); /*0x51d62a*/
              if ( ptr_0 == *v35 /*0x51d65c*/
                && (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&ptr_0) + 80)
                  & 0x100) == 0 )
              {
                v34 = *(_WORD *)&stru_A8EB00.?[1534]; /*0x51d683*/
                a3 = (unsigned int *)ptr_0; /*0x51d68a*/
                v33 = *(_WORD *)&stru_A8EB00.?[1532]; /*0x51d68e*/
LABEL_60:
                LOWORD(MissionControl) = (_WORD)a3; /*0x51d694*/
                *(_DWORD *)v44 = a3; /*0x51d69b*/
                if ( (_WORD)a3 != v33 ) /*0x51d69f*/
                  goto LABEL_65; /*0x51d69f*/
                if ( HIWORD(a3) == v34 ) /*0x51d6a6*/
                {
                  LOWORD(MissionControl) = (_WORD)this; /*0x51d6a8*/
                  *(_DWORD *)v44 = this; /*0x51d6ac*/
                }
                if ( (_WORD)MissionControl != v33 || v44[1] != v34 ) /*0x51d6ba*/
                {
LABEL_65:
                  (*(void (__thiscall **)(int *, int, _DWORD))(*v7 + 488))(v7, 2, 0); /*0x51d6c4*/
                  v36 = *v7; /*0x51d6ca*/
                  v37 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v44); /*0x51d6d8*/
                  LOBYTE(MissionControl) = (*(char (__thiscall **)(int *, void *, int))(v36 + 1152))(v7, v37, 1); /*0x51d6e0*/
                }
                return (char)MissionControl; /*0x51d6e0*/
              }
            }
          }
          v33 = *(_WORD *)&stru_A8EB00.?[1532]; /*0x51d65e*/
          v34 = *(_WORD *)&stru_A8EB00.?[1534]; /*0x51d664*/
LABEL_57:
          v26 = ++v48; /*0x51d66b*/
          if ( v48 >= 8 ) /*0x51d677*/
            goto LABEL_60; /*0x51d677*/
        }
      }
    }
  }
  return (char)MissionControl; /*0x51d47b*/
}



// ==== 0x0051D6F0  InfantryClass::ProcessDeployAction  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::ProcessDeployAction(InfantryClass *this, int a2, char a3, char a4)
{
  int v4; // edi
  __int16 *v6; // eax
  int v7; // eax
  int v8; // ebp
  int unknown_int_6E8; // eax
  InfantryTypeClass *v10; // eax
  InfantryTypeClass *Type; // eax
  int v12; // eax
  int (__thiscall **ptr_0)(InfantryClass *); // edx
  int v14; // ecx
  int (__thiscall **v15)(InfantryClass *); // edx
  int v16; // ecx
  int ProductionTimeMult; // eax
  int *v18; // edx
  int v19; // ecx
  int v20; // eax
  int v21; // edi
  int v22; // edi
  int v24; // [esp+Ch] [ebp-Ch] BYREF
  int v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]

  v4 = a2; /*0x51d6f6*/
  if ( a2 == -1 || !*(_DWORD *)(this->Type->Sequence[0] + 36 * a2 + 4) || this->SequenceAnim[0] == 33 && this->? ) /*0x51d72b*/
    return 0; /*0x51d72b*/
  if ( this->? /*0x51d771*/
    && *(_DWORD *)((*((int (__thiscall **)(InfantryClass *))this->FootClass + 33))(this) + 2048)
    && ((double (__thiscall *)(InfantryClass *))*((_DWORD *)this->FootClass + 173))(this) == 1.0
    && v4 == 3 )
  {
    v4 = 39; /*0x51d773*/
    goto LABEL_12; /*0x51d778*/
  }
  if ( v4 == 5 && !this->Type->Crawls ) /*0x51d785*/
    return 0; /*0x51dadc*/
LABEL_12:
  if ( this->Type->?[0] == 3 ) /*0x51d7a0*/
  {
    v6 = (__int16 *)(*((int (__thiscall **)(InfantryClass *, int *))this->FootClass + 110))(this, &a2); /*0x51d7b0*/
    v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v6) + 59); /*0x51d7c1*/
    v8 = 1; /*0x51d7c7*/
    if ( (v7 == 6 || v7 == 2) && !this->? ) /*0x51d7d6*/
    {
      v8 = 0; /*0x51d7e0*/
      switch ( v4 ) /*0x51d7ea*/
      {
        case 3: /*0x51d7ea*/
        case 6: /*0x51d7ea*/
          v4 = 17; /*0x51d83d*/
          break;
        case 2: /*0x51d7ea*/
        case 0: /*0x51d7ea*/
          v4 = 16; /*0x51d836*/
          break;
        case 9: /*0x51d7ea*/
          v4 = 18; /*0x51d7fa*/
          break;
        case 10: /*0x51d7ea*/
          v4 = 19; /*0x51d806*/
          break;
        case 11: /*0x51d7ea*/
          v4 = 20; /*0x51d812*/
          break;
        case 12: /*0x51d7ea*/
          v4 = 21; /*0x51d81e*/
          break;
        case 4: /*0x51d7ea*/
        case 8: /*0x51d7ea*/
          v4 = 22; /*0x51d82f*/
          break;
      }
    }
    unknown_int_6E8 = this->unknown_int_6E8; /*0x51d842*/
    if ( unknown_int_6E8 || v8 != 1 ) /*0x51d84f*/
    {
      if ( unknown_int_6E8 == 1 && !v8 ) /*0x51d886*/
      {
        v24 = this->?[0]; /*0x51d891*/
        v25 = this->?[1]; /*0x51d89c*/
        Type = this->Type; /*0x51d8a0*/
        v26 = this->?[2]; /*0x51d8a9*/
        StartAudioControllerAt(Type->EnterWaterSound, &v24, 0); /*0x51d8b3*/
      }
    }
    else
    {
      v24 = this->?[0]; /*0x51d85b*/
      v25 = this->?[1]; /*0x51d866*/
      v10 = this->Type; /*0x51d86a*/
      v26 = this->?[2]; /*0x51d873*/
      StartAudioControllerAt(v10->LeaveWaterSound, &v24, 0); /*0x51d87d*/
    }
    this->unknown_int_6E8 = v8; /*0x51d8b8*/
  }
  if ( !(*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 21))(this) /*0x51d8ec*/
    || this->?
    || *(int *)(this->Type->Sequence[0] + 828) <= 0
    || v4 )
  {
    if ( v4 == 3 && this->PanicDurationLeft >= 200 ) /*0x51d904*/
      v4 = 37; /*0x51d906*/
  }
  else
  {
    v4 = 23; /*0x51d8ee*/
  }
  v12 = this->SequenceAnim[0]; /*0x51d90b*/
  if ( v4 == v12 || v12 != -1 && !a3 && !byte_7EAF7C[4 * v12] ) /*0x51d925*/
    return 0; /*0x51d92e*/
  if ( v4 == 27 ) /*0x51d937*/
  {
    if ( *(_DWORD *)((*((int (__thiscall **)(InfantryClass *))this->FootClass + 33))(this) + 1388) != -1 ) /*0x51d949*/
    {
      v24 = this->?[0]; /*0x51d95d*/
      v25 = this->?[1]; /*0x51d966*/
      ptr_0 = (int (__thiscall **)(InfantryClass *))this->FootClass; /*0x51d96a*/
      v26 = this->?[2]; /*0x51d96f*/
      v14 = *(_DWORD *)(ptr_0[33](this) + 1388); /*0x51d979*/
      StartAudioControllerAt(v14, &v24, 0); /*0x51d97f*/
    }
  }
  else if ( v4 == 31 && *(_DWORD *)((*((int (__thiscall **)(InfantryClass *))this->FootClass + 33))(this) + 1392) != -1 ) /*0x51d996*/
  {
    v24 = this->?[0]; /*0x51d9a6*/
    v15 = (int (__thiscall **)(InfantryClass *))this->FootClass; /*0x51d9aa*/
    v25 = this->?[1]; /*0x51d9af*/
    v26 = this->?[2]; /*0x51d9b6*/
    v16 = *(_DWORD *)(v15[33](this) + 1392); /*0x51d9c2*/
    StartAudioControllerAt(v16, &v24, 0); /*0x51d9ca*/
  }
  this->SequenceAnim[0] = v4; /*0x51d9d2*/
  if ( v4 == 9 || v4 == 10 || v4 == 18 || v4 == 19 || v4 == 23 || v4 == 32 ) /*0x51d9f1*/
  {
    ProductionTimeMult = (int)Rules::GetProductionTimeMult( /*0x51da02*/
                                (Rules *)&stru_A8EB00.ObjectTypeClass[24],
                                (unsigned __int8)byte_7EAF7F[4 * v4]);
    v18 = &this->?[2]; /*0x51da0d*/
    this->?[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x51da13*/
    v19 = v25; /*0x51da19*/
  }
  else
  {
    ProductionTimeMult = (unsigned __int8)byte_7EAF7F[4 * v4]; /*0x51da27*/
    v18 = &this->?[2]; /*0x51da2e*/
    this->?[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x51da34*/
    v19 = v25; /*0x51da3a*/
  }
  v18[1] = v19; /*0x51da3e*/
  v18[2] = ProductionTimeMult; /*0x51da41*/
  this->?[5] = ProductionTimeMult; /*0x51da44*/
  if ( a4 ) /*0x51da50*/
  {
    v20 = *(_DWORD *)(this->Type->Sequence[0] + 36 * v4 + 4); /*0x51da61*/
    if ( v20 <= 1 ) /*0x51da68*/
      v20 = 1; /*0x51da6a*/
    this->?[0] = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v20 - 1); /*0x51da84*/
  }
  else
  {
    this->?[0] = 0; /*0x51da8c*/
  }
  if ( !this->? ) /*0x51da96*/
    (*((void (__thiscall **)(InfantryClass *))this->FootClass + 320))(this); /*0x51daa1*/
  v21 = v4 - 5; /*0x51daa7*/
  if ( v21 ) /*0x51daaa*/
  {
    v22 = v21 - 2; /*0x51daac*/
    if ( !v22 || v22 == 20 ) /*0x51dab4*/
    {
      this->Crawling = 0; /*0x51dab6*/
      return 1; /*0x51dac5*/
    }
  }
  else
  {
    this->Crawling = 1; /*0x51dac8*/
  }
  return 1; /*0x51dabd*/
}



// ==== 0x0051DAF0  InfantryClass::PlayIdleAnim  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::PlayIdleAnim(InfantryClass *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int (__thiscall **ptr_0)(InfantryClass *, CellClass *, unsigned int, int, _DWORD, int); // ebx
  int v5; // eax
  int v6; // edx
  CellClass *v7; // eax
  int LandHeight; // [esp-Ch] [ebp-28h]
  int v10; // [esp+Ch] [ebp-10h] BYREF
  _DWORD v11[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = this->SequenceAnim[0]; /*0x51daf6*/
  if ( v2 == 27 || v2 == 28 || v2 == 29 || v2 == 30 ) /*0x51db0e*/
  {
    (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 28, 0, 0); /*0x51db18*/
  }
  else if ( this->Crawling ) /*0x51db1a*/
  {
    (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 2, 0, 0); /*0x51db2e*/
  }
  else
  {
    (*((void (__thiscall **)(InfantryClass *, _DWORD, _DWORD, _DWORD))this->FootClass + 342))(this, 0, 0, 0); /*0x51db40*/
  }
  v3 = *ProgressTimer::GetValue((ProgressTimer *)this->?, &v10); /*0x51db58*/
  ptr_0 = (int (__thiscall **)(InfantryClass *, CellClass *, unsigned int, int, _DWORD, int))this->FootClass; /*0x51db60*/
  v5 = this->?[0]; /*0x51db64*/
  v6 = this->?[2]; /*0x51db71*/
  v11[1] = this->?[1]; /*0x51db74*/
  v11[0] = v5; /*0x51db7d*/
  v11[2] = v6; /*0x51db81*/
  LandHeight = ObjectClass::GetLandHeight((ObjectClass *)this); /*0x51db8a*/
  v7 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v11); /*0x51db96*/
  if ( ptr_0[107](this, v7, (((v3 >> 12) + 1) >> 1) & 7, LandHeight, 0, 1) ) /*0x51db9e*/
    this->InfantryClass_field_bool_6DC = 1; /*0x51dbbe*/
  else
    this->InfantryClass_field_bool_6DC = 0; /*0x51dbac*/
  return FootClass::PlayCOM_audio((FootClass *)this); /*0x51dbb7*/
}



// ==== 0x0051DBD0  InfantryClass::CalcFacingToTarget  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::CalcFacingToTarget(InfantryClass *this, int *a2)
{
  double v2; // st7
  int (__thiscall **ptr_0)(InfantryClass *, int *); // edx
  int v5; // ebx
  __int16 v6; // ax
  int v7; // ebx
  int v8; // eax
  double v9; // st7
  int v10; // eax
  CellClass *v11; // eax
  int *v12; // eax
  int (__thiscall **v13)(InfantryClass *, CellClass *, int, int, _DWORD, int); // ebx
  CellClass *v14; // eax
  int v15; // ebx
  __int16 v16; // ax
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  CellClass *v20; // eax
  int *v21; // eax
  void (__thiscall **v22)(InfantryClass *, int *); // edx
  char v24; // [esp+24h] [ebp-58h]
  char v25; // [esp+24h] [ebp-58h]
  int v26; // [esp+3Ch] [ebp-40h]
  int v27; // [esp+3Ch] [ebp-40h]
  double v28; // [esp+44h] [ebp-38h]
  double v29; // [esp+44h] [ebp-38h]
  _DWORD v30[2]; // [esp+4Ch] [ebp-30h] BYREF
  int v31; // [esp+54h] [ebp-28h]
  int v32; // [esp+58h] [ebp-24h] BYREF
  int v33; // [esp+5Ch] [ebp-20h]
  int v34; // [esp+60h] [ebp-1Ch]
  int v35[3]; // [esp+64h] [ebp-18h] BYREF
  int v36[3]; // [esp+70h] [ebp-Ch] BYREF

  v30[0] = *a2; /*0x51dbe5*/
  v30[1] = a2[1]; /*0x51dbee*/
  ptr_0 = (int (__thiscall **)(InfantryClass *, int *))this->FootClass; /*0x51dbf2*/
  v31 = a2[2]; /*0x51dbf7*/
  v5 = ptr_0[18](this, v35); /*0x51dc03*/
  Int64::Equal((Int64 *)v5, a2); /*0x51dc08*/
  Math::CalcAngle((double)*(int *)(v5 + 4) - (double)a2[1], (double)*a2 - (double)*(int *)v5); /*0x51dc24*/
  v6 = Math::RoundToInt(v2); /*0x51dc35*/
  v7 = a2[2]; /*0x51dc43*/
  v28 = (double)((__int16)(v6 + 0x7FFF) - 0x3FFF) * -0.00009587672516830327; /*0x51dc63*/
  Math::SinCos(v28); /*0x51dc78*/
  LOWORD(v8) = Math::RoundToInt(v2); /*0x51dc87*/
  v26 = v8; /*0x51dc90*/
  Math::ArcTan2(v28); /*0x51dc9a*/
  v9 = v2 * 124.0 + (double)*a2; /*0x51dca8*/
  LOWORD(v10) = Math::RoundToInt(v9); /*0x51dcaa*/
  v33 = v26; /*0x51dcb5*/
  v32 = v10; /*0x51dcbf*/
  v34 = v7; /*0x51dcc3*/
  v24 = BYTE1(Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2)->flags[0]) & 1; /*0x51dcdc*/
  v11 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x51dceb*/
  v12 = ObjectPlacement::CalcPosition((ObjectPlacement *)v11, v36, &v32, 0, v24, 0); /*0x51dcf2*/
  *a2 = *v12; /*0x51dcfb*/
  a2[1] = v12[1]; /*0x51dd00*/
  a2[2] = v12[2]; /*0x51dd06*/
  if ( *a2 == *(_DWORD *)&stru_A8EB00.?[1564] /*0x51dd32*/
    && a2[1] == *(_DWORD *)&stru_A8EB00.?[1568]
    && a2[2] == *(_DWORD *)&stru_A8EB00.?[1572] )
  {
    v13 = (int (__thiscall **)(InfantryClass *, CellClass *, int, int, _DWORD, int))this->FootClass; /*0x51dd38*/
    v14 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v30); /*0x51dd4c*/
    if ( !v13[107](this, v14, -1, -1, 0, 1) ) /*0x51dd54*/
    {
      v15 = (*((int (__thiscall **)(InfantryClass *, int *))this->FootClass + 18))(this, v36); /*0x51dd6e*/
      Int64::Equal((Int64 *)v15, a2); /*0x51dd73*/
      Math::CalcAngle((double)*(int *)(v15 + 4) - (double)a2[1], (double)*a2 - (double)*(int *)v15); /*0x51dd8f*/
      v16 = Math::RoundToInt(v9); /*0x51dda0*/
      v17 = v31; /*0x51ddae*/
      v29 = (double)((__int16)(v16 + 0x7FFF) - 0x3FFF) * -0.00009587672516830327; /*0x51ddcf*/
      Math::SinCos(v29); /*0x51dde5*/
      LOWORD(v18) = Math::RoundToInt(v9); /*0x51ddf4*/
      v27 = v18; /*0x51ddfd*/
      Math::ArcTan2(v29); /*0x51de07*/
      LOWORD(v19) = Math::RoundToInt(v9 * 128.0 + (double)v30[0]); /*0x51de19*/
      v33 = v27; /*0x51de26*/
      v32 = v19; /*0x51de32*/
      v34 = v17; /*0x51de36*/
      v25 = BYTE1(Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v30)->flags[0]) & 1; /*0x51de52*/
      v20 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v30); /*0x51de61*/
      v21 = ObjectPlacement::CalcPosition((ObjectPlacement *)v20, v35, &v32, 1, v25, 0); /*0x51de68*/
      *a2 = *v21; /*0x51de71*/
      a2[1] = v21[1]; /*0x51de76*/
      a2[2] = v21[2]; /*0x51de7c*/
    }
  }
  if ( *a2 == *(_DWORD *)&stru_A8EB00.?[1564] /*0x51deb0*/
    && a2[1] == *(_DWORD *)&stru_A8EB00.?[1568]
    && a2[2] == *(_DWORD *)&stru_A8EB00.?[1572]
    || !FootClass::Destru_vt319((FootClass *)this, a2)
    || !this->? )
  {
    return 0; /*0x51deff*/
  }
  v32 = this->?[0]; /*0x51dec6*/
  v22 = (void (__thiscall **)(InfantryClass *, int *))this->FootClass; /*0x51deca*/
  v33 = this->?[1]; /*0x51decf*/
  v34 = this->?[2]; /*0x51dedb*/
  v22[61](this, &v32); /*0x51dee1*/
  (*((void (__thiscall **)(InfantryClass *, int *))this->FootClass + 60))(this, a2); /*0x51deec*/
  return 1; /*0x51def4*/
}



// ==== 0x0051DF10  InfantryClass::CancelMovement  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::CancelMovement(InfantryClass *this)
{
  if ( !this->?[0] ) /*0x51df13*/
    WinAPI::Wrapper(-2147467261); /*0x51df22*/
  (*(void (__stdcall **)(int))(*(_DWORD *)this->?[0] + 172))(this->?[0]); /*0x51df30*/
  this->unknown_int_6E8 = 2; /*0x51df38*/
  this->Crawling = 0; /*0x51df42*/
  this->SequenceAnim[0] = 0; /*0x51df49*/
  return TechnoClass::CleanupDirection((FootClass *)this); /*0x51df58*/
}



// ==== 0x0051DF60  InfantryClass::FireWeaponWithCleanup  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::FireWeaponWithCleanup(InfantryClass *this, int a2, int a3)
{
  int v4; // edi
  int (__thiscall **ptr_0)(InfantryClass *); // eax

  this->? = 0; /*0x51df70*/
  v4 = TechnoClass::FireWeapon((TechnoClass *)this); /*0x51df7c*/
  if ( v4 ) /*0x51df80*/
  {
    if ( !this->? ) /*0x51df82*/
    {
      if ( this->Type->Fraidycat ) /*0x51df92*/
      {
        if ( !this->? ) /*0x51df9c*/
        {
          ptr_0 = (int (__thiscall **)(InfantryClass *))this->FootClass; /*0x51dfa6*/
          this->PanicDurationLeft = 300; /*0x51dfaa*/
          if ( ptr_0[97](this) == 1 || (*((int (__thiscall **)(InfantryClass *))this->FootClass + 97))(this) == 15 ) /*0x51dfcc*/
            (*((void (__thiscall **)(InfantryClass *, int, _DWORD))this->FootClass + 122))(this, 5, 0); /*0x51dfd6*/
        }
      }
    }
  }
  return v4; /*0x51dfde*/
}



// ==== 0x0051DFF0  InfantryClass::MoveToCell  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::MoveToCell(InfantryClass *this, int *a2, int a3)
{
  int *v3; // esi
  int GroundHeight; // ebx
  bool v6; // al
  CellClass *v7; // eax
  int *v8; // edx
  int result; // eax
  int v10; // ecx
  int v11; // edx
  char v12; // [esp-Ch] [ebp-30h]
  int v13; // [esp+Ch] [ebp-18h] BYREF
  int v14; // [esp+10h] [ebp-14h]
  int v15; // [esp+14h] [ebp-10h]
  int v16[3]; // [esp+18h] [ebp-Ch] BYREF

  v3 = a2; /*0x51dff5*/
  GroundHeight = Cell::GetGroundHeight(a2); /*0x51e007*/
  v13 = *v3; /*0x51e00d*/
  v14 = v3[1]; /*0x51e014*/
  v15 = v3[2]; /*0x51e01d*/
  if ( v15 == GroundHeight ) /*0x51e021*/
  {
    v6 = 1; /*0x51e078*/
    if ( !dword_A8E7AC ) /*0x51e02e*/
    {
      LOWORD(a2) = *v3 / 256; /*0x51e045*/
      HIWORD(a2) = v3[1] / 256; /*0x51e05e*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, (__int16 *)&a2, 1) ) /*0x51e06b*/
        v6 = 0; /*0x51e02e*/
    }
    v12 = v6; /*0x51e081*/
    v7 = Coord::To_Cell((Coord *)&dword_87F7E8, v3); /*0x51e08e*/
    v8 = ObjectPlacement::CalcPosition((ObjectPlacement *)v7, v16, v3, v12, 0, 0); /*0x51e0a0*/
    result = *v8; /*0x51e0a2*/
    v13 = result; /*0x51e0a4*/
    v10 = v8[1]; /*0x51e0aa*/
    v14 = v10; /*0x51e0ad*/
    v11 = v8[2]; /*0x51e0b1*/
    if ( result == dword_A8F200 && v10 == dword_A8F204 && v11 == dword_A8F208 ) /*0x51e0c4*/
      goto LABEL_16; /*0x51e0c4*/
    v15 = GroundHeight; /*0x51e0c6*/
  }
  if ( !FootClass::DispatchInput((double *)&this->ptr_0, (int)&v13, a3) ) /*0x51e0dd*/
  {
LABEL_16:
    LOBYTE(result) = 0; /*0x51e129*/
    return result; /*0x51e12b*/
  }
  if ( !*(_DWORD *)(this->Type + 1512) ) /*0x51e0e5*/
    this->isDiscoveredByCurrentPlayer[0] = 0; /*0x51e0ef*/
  result = GroundHeight + dword_A8F234; /*0x51e0ff*/
  if ( v15 <= GroundHeight + dword_A8F234 ) /*0x51e103*/
    result = (*(int (__thiscall **)(InfantryClass *, int *))(this->ptr_0 + 240))(this, &v13); /*0x51e10e*/
  this->unknown_int_6E8 = 2; /*0x51e114*/
  LOBYTE(result) = 1; /*0x51e120*/
  return result; /*0x51e11e*/
}



// ==== 0x0051E140  InfantryClass::SelectAutoTarget  this=InfantryClass  sig=csp ====
void *__userpurge InfantryClass::SelectAutoTarget@<eax>(
        InfantryClass *this,
        double a2@<st0>,
        unsigned int a3,
        __int64 a4)
{
  int v4; // ecx
  int v5; // esi
  int v6; // ecx
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  int v9; // eax
  InfantryClass *v11; // edi
  _BYTE *v12; // ecx
  int v13; // eax
  char v14; // cl
  Building **v15; // eax
  Building **v16; // eax
  int v17; // [esp+1Ch] [ebp-20h]
  int v18; // [esp+20h] [ebp-1Ch]
  _BYTE v19[12]; // [esp+24h] [ebp-18h] BYREF
  _DWORD v20[3]; // [esp+30h] [ebp-Ch] BYREF

  v5 = v4; /*0x51e144*/
  if ( (unsigned __int8)House::IsCurrentPlayer(*(House **)(v4 + 540)) || !*(_BYTE *)(*(_DWORD *)(v5 + 1728) + 3779) ) /*0x51e160*/
  {
    v11 = this; /*0x51e218*/
  }
  else
  {
    v6 = *(_DWORD *)(*(_DWORD *)(v5 + 540) + 21728); /*0x51e174*/
    if ( v6 ) /*0x51e17c*/
    {
      v7 = (_DWORD *)(*(int (__usercall **)@<eax>(int@<ecx>, _BYTE *, double@<st0>))(*(_DWORD *)v6 + 72))(v6, v19, a2); /*0x51e18e*/
      v8 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v5 + 72))(v5, v20); /*0x51e197*/
      v17 = v8[1] - v7[1]; /*0x51e1b5*/
      v18 = v8[2] - v7[2]; /*0x51e1bf*/
      Math::Sqrt((double)(*v8 - *v7) * (double)(*v8 - *v7) + (double)v18 * (double)v18 + (double)v17 * (double)v17); /*0x51e1e4*/
      LOWORD(v9) = Math::RoundToInt(a2); /*0x51e1ec*/
      if ( v9 < 3840 ) /*0x51e1f6*/
        return *(void **)(*(_DWORD *)(v5 + 540) + 21728); /*0x51e209*/
    }
    v11 = (InfantryClass *)((unsigned int)this | 0x200); /*0x51e210*/
  }
  if ( *(_BYTE *)(*(_DWORD *)(v5 + 1728) + 3782) ) /*0x51e222*/
  {
    v12 = *(_BYTE **)(v5 + 1444); /*0x51e22c*/
    if ( v12 ) /*0x51e234*/
    {
      if ( (v12[20] & 1) != 0 /*0x51e278*/
        && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v12 + 128))(v12)
        && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 1444) + 132))(*(_DWORD *)(v5 + 1444)) + 3220)
        && ObjectClass::DistanceTo((ObjectClass *)v5, *(_DWORD *)(v5 + 1444)) < 3840 )
      {
        return *(void **)(v5 + 1444); /*0x51e285*/
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 684))(v5) ) /*0x51e28c*/
    goto LABEL_21; /*0x51e294*/
  v13 = *(_DWORD *)(v5 + 1728); /*0x51e296*/
  v14 = *(_BYTE *)(v13 + 3782); /*0x51e2a4*/
  if ( !*(_BYTE *)(v13 + 3774) ) /*0x51e29c*/
  {
    if ( !v14 ) /*0x51e2ae*/
      return 0; /*0x51e2b7*/
    goto LABEL_20; /*0x51e2ae*/
  }
  if ( v14 ) /*0x51e2bc*/
LABEL_20:
    v11 = (InfantryClass *)((unsigned int)v11 & 0xFFFFFF4B | 0x10); /*0x51e2be*/
LABEL_21:
  if ( ((unsigned int)v11 & 0x1B978) == 0 ) /*0x51e2cd*/
  {
    if ( *(_DWORD *)(*(int (__usercall **)@<eax>(int@<ecx>, _DWORD, double@<st0>))(*(_DWORD *)v5 + 1016))(v5, 0, a2) ) /*0x51e2db*/
    {
      v15 = (Building **)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 1016))(v5, 0); /*0x51e2e6*/
      v11 = (InfantryClass *)(Building::GetRenderType(*v15) | (unsigned int)v11); /*0x51e2f3*/
    }
    if ( *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 1016))(v5, 1) ) /*0x51e301*/
    {
      v16 = (Building **)(*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 1016))(v5, 1); /*0x51e30c*/
      v11 = (InfantryClass *)(Building::GetRenderType(*v16) | (unsigned int)v11); /*0x51e319*/
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 684))(v5) /*0x51e33d*/
    && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 1016))(v5, 0) + 172) + 329) )
  {
    v11 = (InfantryClass *)((unsigned int)v11 & 0xFFFFFF4B); /*0x51e347*/
  }
  if ( (*(_BYTE *)(*(_DWORD *)(v5 + 1728) + 3778) || (unsigned __int8)TechnoTypeClass::HasVoiceResponse((int *)v5, 14)) /*0x51e370*/
    && !(unsigned __int8)House::IsCurrentPlayer(*(House **)(v5 + 540)) )
  {
    v11 = (InfantryClass *)((unsigned int)v11 | 0x20); /*0x51e379*/
  }
  if ( *(_BYTE *)(*(_DWORD *)(v5 + 1728) + 3781) ) /*0x51e382*/
    v11 = (InfantryClass *)((unsigned int)v11 | 0x240); /*0x51e38c*/
  return FootClass::SelectAutoTarget_Cloaked((FootClass *)v5, (int)v11, a3, a4); /*0x51e1fe*/
}



// ==== 0x0051E3B0  InfantryClass::GetCursorOverObject_EMP  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::GetCursorOverObject_EMP(InfantryClass *this, int *a2, int *a3)
{
  char v4; // bl
  int *v5; // esi
  int result; // eax
  int v7; // ebp
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v16; // eax
  void *v18; // eax
  int v19; // eax
  int v20; // edx
  int **i; // ecx
  InfantryTypeClass *Type; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // esi
  int (__thiscall **ptr_0)(InfantryClass *, int); // ebx
  int v29; // eax
  int v30; // eax
  int v31; // esi
  InfantryTypeClass *v32; // ecx
  int v33; // eax
  int v34; // eax
  InfantryTypeClass *v35; // eax
  int v36; // eax
  bool v37; // zf
  int v38; // eax
  int v39; // eax
  InfantryTypeClass *v40; // eax
  __int16 *v41; // eax
  int TileIndex; // eax
  int v43; // ecx
  int *v44; // eax
  __int16 v45; // bp
  __int16 v46; // bx
  int v47; // eax
  InfantryTypeClass *v48; // ecx
  int v49; // eax
  int v50; // eax
  char v51; // [esp+10h] [ebp-38h]
  char v52; // [esp+23h] [ebp-25h]
  __int16 v53; // [esp+24h] [ebp-24h]
  __int16 v54; // [esp+26h] [ebp-22h]
  int v55; // [esp+28h] [ebp-20h]
  int v56; // [esp+2Ch] [ebp-1Ch]
  _DWORD v57[2]; // [esp+34h] [ebp-14h] BYREF
  int v58[3]; // [esp+3Ch] [ebp-Ch] BYREF

  if ( !(_BYTE)a3 /*0x51e3e2*/
    && ((unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[36])
     || (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[40])) )
  {
    v4 = 1; /*0x51e3eb*/
  }
  else
  {
    v4 = 0; /*0x51e3f3*/
    if ( (_BYTE)a3 ) /*0x51e3f7*/
    {
LABEL_9:
      v52 = 0; /*0x51e42a*/
      goto LABEL_10; /*0x51e42a*/
    }
  }
  if ( !(unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[28]) /*0x51e421*/
    && !(unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[32]) )
  {
    goto LABEL_9; /*0x51e421*/
  }
  v52 = 1; /*0x51e423*/
LABEL_10:
  if ( v4 && v52 ) /*0x51e439*/
    v52 = 0; /*0x51e43b*/
  v5 = a2; /*0x51e444*/
  result = InfantryClass::GetCursorOverObject((FootClass *)this, (int)a2, (char)a3); /*0x51e44c*/
  v7 = result; /*0x51e451*/
  if ( result != 8 )
  {
    if ( this->Type->Engineer /*0x51e488*/
      && (unsigned __int8)House::IsHumanPlayer((House *)this->?)
      && v5[14]
      && *((_BYTE *)v5 + 104) )
    {
      return 57; /*0x51e49b*/
    }
    if ( !this->Type->Engineer ) /*0x51e4a4*/
      goto LABEL_39; /*0x51e4a4*/
    if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) != 6 ) /*0x51e4bc*/
      goto LABEL_39; /*0x51e4bc*/
    if ( !(unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x51e4c8*/
      goto LABEL_39; /*0x51e4c8*/
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*v5 + 128))(v5) ) /*0x51e4d9*/
      goto LABEL_39; /*0x51e4d9*/
    v8 = v5[328]; /*0x51e4e7*/
    if ( !*(_BYTE *)(v8 + 3276) ) /*0x51e4ed*/
      goto LABEL_39; /*0x51e4f5*/
    if ( *(_BYTE *)(v8 + 5814) ) /*0x51e4fb*/
    {
      v9 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*v5 + 72))(v5, v58); /*0x51e50e*/
      LOWORD(a3) = *v9 / 256; /*0x51e521*/
      HIWORD(a3) = v9[1] / 256; /*0x51e53a*/
      a2 = a3; /*0x51e547*/
      v10 = -(CellClass::CheckConnectivity((CellClass *)&stru_87F5F0.__pad_58[416], (int)&a2) != 0); /*0x51e553*/
      LOBYTE(v10) = v10 & 0xFD; /*0x51e556*/
      return v10 + 32; /*0x51e561*/
    }
    if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)v5)
      && (!*(_BYTE *)(*(_DWORD *)(v5[135] + 52) + 422)
       || !*(_BYTE *)(v5[328] + 5499)
       || (*(unsigned __int8 (__thiscall **)(int *))(*v5 + 468))(v5)) )
    {
      if ( *(_BYTE *)(v5[328] + 5490) ) /*0x51e5ab*/
      {
        BuildingClass::GetHealthRatio((BuildingClass *)v5); /*0x51e5bb*/
        _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x51e5c0*/
        __asm /*0x51e5c6*/
        {
          fld dword ptr [ecx+17F8h]
          fcompp
          fnstsw ax
        }
        if ( (_AX & 0x100) != 0 ) /*0x51e5d3*/
          return 28; /*0x51e5e5*/
        return 9; /*0x51e5d3*/
      }
LABEL_39:
      if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 6 /*0x51e6a3*/
        && (unsigned __int8)House::IsHumanPlayer((House *)this->?)
        && !(*(unsigned __int8 (__thiscall **)(int *))(*v5 + 468))(v5)
        && (unsigned __int8)BuildingClass::CanRepair((BuildingClass *)v5, (int)this)
        && !v52 )
      {
        return 9; /*0x51e6a3*/
      }
      if ( this->Type->Engineer && v7 == 5 ) /*0x51e6c7*/
        return 2; /*0x51e6d5*/
      if ( TechnoClass::GetValue((TechnoClass *)this, -1) < 0 && (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x51e6ef*/
      {
        if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)v5) ) /*0x51e70a*/
          return 59; /*0x51e7a3*/
        if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 15 ) /*0x51e71a*/
        {
          if ( v5 == (int *)this ) /*0x51e71e*/
            return 26; /*0x51e754*/
          BuildingClass::GetHealthRatio((BuildingClass *)v5); /*0x51e722*/
          _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x51e727*/
          __asm /*0x51e72c*/
          {
            fcomp qword ptr [eax+16F8h]
            fnstsw ax
          }
          if ( (_EAX & 0x100) != 0 ) /*0x51e737*/
            return 27; /*0x51e745*/
        }
        v18 = AbstractClass::IsTechno((AbstractClass *)v5); /*0x51e759*/
        if ( !v18 || !*(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)v18 + 132))(v18) + 1504) ) /*0x51e76c*/
        {
          if ( v7 != 26 && v7 != 1 ) /*0x51e782*/
            return 7; /*0x51e794*/
          return v7; /*0x51e782*/
        }
      }
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) /*0x51e7d1*/
        && this->Type->VehicleThief
        && (*(unsigned __int8 (__thiscall **)(int *))(*v5 + 128))(v5) )
      {
        if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*v5 + 132))(v5) + 3220) ) /*0x51e7e5*/
          return 7; /*0x51e7fb*/
        if ( (HouseClass *)v5[135] != this->? ) /*0x51e80c*/
        {
          if ( ((int)dword_A8B230->ptr_0 & 0x800) == 0 ) /*0x51e819*/
            return 9; /*0x51e819*/
          v19 = 0; /*0x51e825*/
          v20 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2892); /*0x51e827*/
          if ( v20 <= 0 ) /*0x51e82f*/
            return 9; /*0x51e6b1*/
          for ( i = *(int ***)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2880); *i != v5; ++i ) /*0x51e835*/
          {
            if ( ++v19 >= v20 ) /*0x51e849*/
              return 9; /*0x51e857*/
          }
          return 7; /*0x51e83d*/
        }
      }
      if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 6 /*0x51e8b1*/
        && (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)v5)
        && (unsigned __int8)House::IsHumanPlayer((House *)this->?)
        && !(*(unsigned __int8 (__thiscall **)(int *))(*v5 + 468))(v5)
        && *(_BYTE *)(v5[328] + 5825)
        && !v52 )
      {
        Type = this->Type; /*0x51e8b3*/
        if ( this->? >= Type->? ) /*0x51e8c2*/
          goto LABEL_88; /*0x51e8c2*/
        if ( !Type->Deployer || (v23 = this->SequenceAnim[0], v23 != 27) && v23 != 28 && v23 != 29 && v23 != 30 ) /*0x51e8e6*/
        {
          v24 = (*((int (__thiscall **)(InfantryClass *, int, int *))this->FootClass + 158))(this, 15, v5) - 1; /*0x51e8f5*/
          if ( !v24 ) /*0x51e8f6*/
          {
            v7 = 3; /*0x51e9ab*/
            goto LABEL_89; /*0x51e9b0*/
          }
          if ( v24 == 9 ) /*0x51e8ff*/
LABEL_88:
            v7 = 31; /*0x51e901*/
        }
      }
LABEL_89:
      if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) != 6 /*0x51e951*/
        || !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)v5)
        || !(unsigned __int8)House::IsHumanPlayer((House *)this->?)
        || (*(unsigned __int8 (__thiscall **)(int *))(*v5 + 468))(v5)
        || !*(_BYTE *)(v5[328] + 5826) )
      {
        goto LABEL_106; /*0x51e959*/
      }
      if ( !(unsigned __int8)Audio::IsLoud(this->?) ) /*0x51e961*/
      {
        if ( this->Type->Deployer ) /*0x51e970*/
        {
          v25 = this->SequenceAnim[0]; /*0x51e97a*/
          if ( v25 == 27 || v25 == 28 || v25 == 29 || v25 == 30 ) /*0x51e992*/
            goto LABEL_106; /*0x51e992*/
        }
        v26 = (*((int (__thiscall **)(InfantryClass *, int, int *))this->FootClass + 158))(this, 15, v5) - 1; /*0x51e9a1*/
        if ( !v26 ) /*0x51e9a2*/
        {
          v7 = 3; /*0x51e9b5*/
          goto LABEL_106; /*0x51e9ba*/
        }
        if ( v26 != 9 ) /*0x51e9a7*/
          goto LABEL_106; /*0x51e9a7*/
      }
      v7 = 31; /*0x51e9bc*/
LABEL_106:
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) /*0x51ea06*/
        && (this->Type->C4 || (unsigned __int8)TechnoTypeClass::HasVoiceResponse((int *)this, 14))
        && v7 == 5
        && (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 6
        && !(*(unsigned __int8 (__thiscall **)(int *))(*v5 + 128))(v5) )
      {
        if ( v5 ) /*0x51ea12*/
        {
          if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 6 ) /*0x51ea22*/
          {
            v27 = v5[328]; /*0x51ea28*/
            if ( *(_BYTE *)(v27 + 5495) ) /*0x51ea2e*/
            {
              if ( !*(_BYTE *)(v27 + 5889) ) /*0x51ea3c*/
                return 16; /*0x51ea56*/
            }
          }
        }
        return 5; /*0x51eb21*/
      }
      ptr_0 = (int (__thiscall **)(InfantryClass *, int))this->FootClass; /*0x51ea59*/
      v29 = (*((int (__thiscall **)(InfantryClass *, int *))this->FootClass + 185))(this, v5); /*0x51ea5e*/
      v30 = *(_DWORD *)ptr_0[254](this, v29); /*0x51ea6d*/
      if ( v7 == 5 && v30 )
      {
        if ( *(_BYTE *)(v30 + 313) )
        {
          if ( !v5
            || (*(int (__thiscall **)(int *))(*v5 + 44))(v5) != 1
            || !*((*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 1 ? v5 + 185 : (int *)740) )
          {
            return 64; /*0x51eacf*/
          }
          return 7; /*0x51eac0*/
        }
        if ( *(_BYTE *)(v30 + 314) ) /*0x51ead2*/
        {
          if ( v5 ) /*0x51eade*/
          {
            if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 6 ) /*0x51eaea*/
            {
              v31 = v5[328]; /*0x51eaec*/
              if ( *(_BYTE *)(v31 + 5495) ) /*0x51eaf2*/
              {
                if ( !*(_BYTE *)(v31 + 5889) ) /*0x51eafc*/
                  return 71; /*0x51eb12*/
              }
            }
          }
          return 5; /*0x51eb04*/
        }
      }
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) && v7 == 5 && this->Type->Ivan ) /*0x51eb3e*/
      {
        if ( !*(_BYTE *)((*(int (__thiscall **)(int *))(*v5 + 136))(v5) + 558) || v5[14] ) /*0x51eb5c*/
          return 54; /*0x51eb75*/
        else
          return 53; /*0x51eb66*/
      }
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x51eb87*/
      {
        v32 = this->Type; /*0x51eb94*/
        if ( v32->Deployer ) /*0x51eb9a*/
        {
          v33 = this->SequenceAnim[0]; /*0x51eba8*/
          if ( v33 == 27 || v33 == 28 || v33 == 29 || v33 == 30 ) /*0x51ebc0*/
          {
            switch ( v7 ) /*0x51ebc9*/
            {
              case 1: /*0x51ebc9*/
                return 2; /*0x51ebd7*/
              case 5: /*0x51ebc9*/
                if ( !v32->? ) /*0x51ebdf*/
                  return 2; /*0x51ebdf*/
                v34 = (*((int (__thiscall **)(InfantryClass *, _DWORD))this->FootClass + 185))(this, 0); /*0x51ebef*/
                if ( !(*((unsigned __int8 (__thiscall **)(InfantryClass *, int *, int))this->FootClass + 234))( /*0x51ebfb*/
                        this,
                        v5,
                        v34) )
                  return 2; /*0x51ec11*/
                break;
              case 4: /*0x51ebc9*/
                if ( !ScriptAction::SetField10((ScriptAction *)4) ) /*0x51ec1b*/
                  return 30; /*0x51ec30*/
                if ( this->Type->? > -1 ) /*0x51ec40*/
                  return 30; /*0x51ec4e*/
                break;
            }
          }
        }
      }
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) )
      {
        if ( v7 == 4 ) /*0x51ec63*/
        {
          v35 = this->Type; /*0x51ec69*/
          if ( v35->Deployer && v35->? > -1 && this->SequenceAnim[0] == 31 ) /*0x51ec89*/
            return 30; /*0x51ec97*/
          goto LABEL_163; /*0x51ec89*/
        }
      }
      else if ( v7 == 4 )
      {
LABEL_163:
        if ( ScriptAction::SetField10((ScriptAction *)4) ) /*0x51eca4*/
        {
          if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x51ecb3*/
          {
            if ( *(_DWORD *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 252))(this) /*0x51ecdb*/
              && *(_BYTE *)(*(_DWORD *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 252))(this) + 336) )
            {
              v7 = 52; /*0x51ece5*/
            }
            else if ( !this->Type->Deployer ) /*0x51ecf2*/
            {
              v7 = 0; /*0x51ecfc*/
            }
          }
          else
          {
            v7 = 0; /*0x51ecbc*/
          }
        }
        else
        {
          v7 = 30; /*0x51ed00*/
        }
LABEL_173:
        if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)v5) ) /*0x51ed17*/
        {
          if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x51ed2a*/
          {
            if ( AbstractClass::IsTechno((AbstractClass *)v5) ) /*0x51ed39*/
            {
              if ( !(*(unsigned __int8 (__thiscall **)(int *))(*v5 + 468))(v5) /*0x51ed76*/
                && !(*(unsigned __int8 (__thiscall **)(int *))(*v5 + 472))(v5)
                && v7 != 5
                && v7 != 26 )
              {
                v36 = (*(int (__thiscall **)(int *))(*v5 + 132))(v5); /*0x51ed80*/
                if ( v36 ) /*0x51ed88*/
                {
                  if ( *(int *)(v36 + 1504) > 0 /*0x51eda0*/
                    && (*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 40))(this) )
                  {
                    if ( BYTE2(this->Type->?) ) /*0x51edb4*/
                    {
                      v7 = 31; /*0x51edbe*/
                    }
                    else
                    {
                      if ( !v5 ) /*0x51edc7*/
                        goto LABEL_193; /*0x51edc7*/
                      v37 = (v5[5] & 4) == 0; /*0x51edcf*/
                      LOBYTE(a3) = (v5[5] & 4) != 0; /*0x51edd2*/
                      if ( v37 ) /*0x51edd6*/
                        goto LABEL_193; /*0x51edd6*/
                      v38 = v5[373]; /*0x51edd8*/
                      if ( v38 ) /*0x51ede0*/
                      {
                        if ( !*(_BYTE *)(*(_DWORD *)(v38 + 36) + 164) ) /*0x51ede5*/
                          goto LABEL_192; /*0x51ede5*/
                      }
                      if ( !v5[413] ) /*0x51edef*/
                        WinAPI::Wrapper(-2147467261); /*0x51edfe*/
                      if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v5[413] + 16))(v5[413]) ) /*0x51ee0c*/
                      {
LABEL_192:
                        v7 = 31; /*0x51ee13*/
                      }
                      else
                      {
LABEL_193:
                        v39 = (*((int (__thiscall **)(InfantryClass *, int, int *))this->FootClass + 158))(this, 15, v5) /*0x51ee27*/
                            - 1;
                        if ( v39 ) /*0x51ee28*/
                        {
                          if ( v39 == 9 ) /*0x51ee2d*/
                            v7 = 31; /*0x51ee2f*/
                        }
                        else
                        {
                          v7 = 3; /*0x51ee36*/
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_197:
        if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) && (v40 = this->Type, v40->Infiltrate) ) /*0x51ee54*/
        {
          if ( v7 == 5 ) /*0x51ee65*/
          {
            if ( !v40->Agent /*0x51eedf*/
              && !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)v5)
              && (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 6
              && *(_BYTE *)(v5[328] + 5490)
              || this->Type->Agent
              && !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)v5)
              && (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 6
              && *(_BYTE *)(v5[328] + 5494) )
            {
              v7 = 9; /*0x51eeef*/
              if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 6 ) /*0x51ef00*/
              {
                (*(void (__thiscall **)(int *))(*v5 + 72))(v5); /*0x51ef0f*/
                v41 = (__int16 *)(*((int (__thiscall **)(InfantryClass *, int **, int, _DWORD))this->FootClass + 112))( /*0x51ef58*/
                                   this,
                                   &a2,
                                   this->Type->?[0],
                                   (unsigned __int8)this->?);
                TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v41, (int)v58, v51); /*0x51ef64*/
                v43 = v5[328]; /*0x51ef69*/
                v58[0] = TileIndex; /*0x51ef71*/
                a2 = (int *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v43 + 144))(v43, 0); /*0x51ef7d*/
                LOBYTE(a3) = 0; /*0x51ef81*/
LABEL_210:
                while ( (*(_WORD *)a2 != 0x7FFF || *((_WORD *)a2 + 1) != 0x7FFF) && !(_BYTE)a3 ) /*0x51efa3*/
                {
                  v44 = a2++; /*0x51efb2*/
                  v55 = 0; /*0x51efbb*/
                  v45 = *(_WORD *)v44 + v53; /*0x51efc7*/
                  v46 = v54 + *((_WORD *)v44 + 1); /*0x51efca*/
                  while ( 1 ) /*0x51efd5*/
                  {
                    v47 = v55 & 7; /*0x51efd5*/
                    LOWORD(v56) = v45 + LOWORD(g_DDrawSurfaceManager.scenario[v47 + 82]); /*0x51eff5*/
                    v48 = this->Type; /*0x51effa*/
                    HIWORD(v56) = v46 + HIWORD(g_DDrawSurfaceManager.scenario[v47 + 82]); /*0x51f000*/
                    v57[0] = v56; /*0x51f009*/
                    v49 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], (__int16 *)v57, v48->?[0], 0); /*0x51f01e*/
                    if ( v49 == v57[1] ) /*0x51f027*/
                      break; /*0x51f027*/
                    if ( ++v55 >= 8 ) /*0x51f035*/
                    {
                      v7 = 9; /*0x51f037*/
                      goto LABEL_210; /*0x51f03b*/
                    }
                  }
                  v7 = 9; /*0x51f040*/
                  LOBYTE(a3) = 1; /*0x51f044*/
                }
              }
              goto LABEL_220; /*0x51efa3*/
            }
            if ( !(*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 171))(this) ) /*0x51f052*/
            {
              v7 = 0; /*0x51f05c*/
              goto LABEL_220; /*0x51f05c*/
            }
LABEL_225:
            if ( !(*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 171))(this) ) /*0x51f09e*/
              v7 = 59; /*0x51f0a8*/
            goto LABEL_220; /*0x51f0ad*/
          }
        }
        else if ( v7 == 5 ) /*0x51f098*/
        {
          goto LABEL_225; /*0x51f098*/
        }
        if ( v7 == 7
          && (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 6
          && (unsigned __int8)House::IsHumanPlayer((House *)this->?)
          && !(*(unsigned __int8 (__thiscall **)(int *))(*v5 + 128))(v5)
          && *(_BYTE *)(v5[328] + 5805) )
        {
          return dword_A83D4C != (Object *)(*(int (__thiscall **)(int *))(*v5 + 60))(v5) ? 31 : 11;
        }
LABEL_220:
        if ( !(unsigned __int8)House::IsHumanPlayer((House *)this->?) || v7 ) /*0x51f073*/
        {
          if ( v7 == 2 ) /*0x51f117*/
            goto LABEL_234; /*0x51f117*/
          if ( v7 == 5 && *(_BYTE *)((*(int (__thiscall **)(int *))(*v5 + 136))(v5) + 563) ) /*0x51f16f*/
            return 2; /*0x51f179*/
        }
        else if ( (*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 40))(this) ) /*0x51f07d*/
        {
          v7 = 2; /*0x51f08b*/
LABEL_234:
          if ( (*(unsigned __int8 (__thiscall **)(int *))(*v5 + 196))(v5) ) /*0x51f11d*/
          {
            if ( !(*(int (__thiscall **)(int *, int))(*v5 + 208))(v5, 1) ) /*0x51f12d*/
            {
              v50 = (*(int (__thiscall **)(int *, int))(*v5 + 204))(v5, 1); /*0x51f13d*/
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v50 + 44))(v50) == 21 ) /*0x51f14d*/
                return 1; /*0x51f15d*/
            }
          }
        }
        return v7; /*0x51f17f*/
      }
      if ( v7 == 31 ) /*0x51ed0a*/
        goto LABEL_197; /*0x51ed0a*/
      goto LABEL_173; /*0x51ed0a*/
    }
    if ( !*(_BYTE *)(v5[328] + 5825) ) /*0x51e5ee*/
      goto LABEL_36; /*0x51e5ee*/
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x51e5fa*/
    _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x51e5ff*/
    __asm /*0x51e604*/
    {
      fcomp qword ptr [eax+16F8h]
      fnstsw ax
    }
    if ( (_EAX & 0x100) != 0 ) /*0x51e60f*/
    {
      return 3; /*0x51e614*/
    }
    else
    {
LABEL_36:
      BuildingClass::GetHealthRatio((BuildingClass *)v5); /*0x51e622*/
      _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x51e627*/
      __asm /*0x51e62d*/
      {
        fcomp qword ptr [ecx+16F8h]
        fnstsw ax
      }
      if ( (_AX & 0x4000) != 0 ) /*0x51e638*/
      {
        v16 = -(*(_BYTE *)(v5[328] + 5805) != 0); /*0x51e64c*/
        LOBYTE(v16) = v16 & 0xEB; /*0x51e64e*/
        return v16 + 32; /*0x51e650*/
      }
      else
      {
        return 29; /*0x51e65c*/
      }
    }
  }
  return result; /*0x51e458*/
}


// ==== 0x0051F190  InfantryClass::ValidateTargetAndMove  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ValidateTargetAndMove(InfantryClass *this, int a2, int *a3, int a4)
{
  int result; // eax

  result = ((__int64 (__thiscall *)(InfantryClass *, int *, int))*((_DWORD *)this->FootClass + 29))(this, a3, a4); /*0x51f1a1*/
  switch ( result ) /*0x51f1b4*/
  {
    case 9: /*0x51f1b4*/
    case 28: /*0x51f1b4*/
    case 29: /*0x51f1b4*/
      result = 9; /*0x51f1bb*/
      break; /*0x51f1c0*/
    case 27: /*0x51f1b4*/
    case 57: /*0x51f1b4*/
      result = 5; /*0x51f1c2*/
      break; /*0x51f1c2*/
    default:
      break;
  }
  if ( a3 == (int *)this && result == 5 ) /*0x51f1ce*/
  {
    LOBYTE(result) = 0; /*0x51f1d2*/
  }
  else if ( this->? ) /*0x51f1d8*/
  {
    LOBYTE(result) = 0; /*0x51f1e4*/
  }
  else
  {
    return FootClass::ValidateMove((FootClass *)this, result, a3, a4); /*0x51f1ef*/
  }
  return result; /*0x51f1d0*/
}



// ==== 0x0051F250  InfantryClass::ProcessUpdate  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessUpdate(InfantryClass *this, int a2, __int16 *a3, __int16 *a4, void **a5)
{
  int result; // eax

  result = this->SequenceAnim; /*0x51f25d*/
  if ( (result == 27 || result == 28 || result == 29 || result == 30) /*0x51f285*/
    && (result = (*(int (__thiscall **)(InfantryClass *, __int16 *, _DWORD, void **))(this->ptr_0 + 112))(
                   this,
                   a3,
                   0,
                   a5),
        result == 2) )
  {
    LOBYTE(result) = 0; /*0x51f289*/
  }
  else if ( this->isBerserk[0] ) /*0x51f28f*/
  {
    LOBYTE(result) = 0; /*0x51f29b*/
  }
  else
  {
    LOBYTE(result) = ObjectClass::SpawnInfantry(this, a2, a3, a4, a5); /*0x51f2af*/
  }
  return result; /*0x51f287*/
}



// ==== 0x0051F2C0  InfantryClass::GetTooltipName  this=InfantryClass  sig=csp ====
wchar_t *__thiscall InfantryClass::GetTooltipName(InfantryClass *this)
{
  if ( this->Technician ) /*0x51f2c3*/
    return GetStringCSF((wchar_t *)&stru_825538.Name[6], 0, (const char *)&stru_825538.Volume, 4636); /*0x51f2de*/
  if ( !(*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 49))(this) /*0x51f300*/
    || (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->?, (#375 *)dword_A83D4C) )
  {
    return *(wchar_t **)&this->Type->?[3]; /*0x51f321*/
  }
  return *(wchar_t **)((*((int (__thiscall **)(InfantryClass *, int))this->FootClass + 51))(this, 1) + 96); /*0x51f2e3*/
}



// ==== 0x0051F330  InfantryClass::FindPathToBuilding  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::FindPathToBuilding(InfantryClass *this)
{
  int v2; // eax
  AbstractClass *target; // ecx
  int result; // eax
  void *ptr_0; // edx
  int v6; // edi
  _DWORD v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = (*((int (__thiscall **)(InfantryClass *, _DWORD))this->FootClass + 185))(this, 0); /*0x51f33b*/
  target = this->?; /*0x51f341*/
  if ( !target /*0x51f359*/
    || (result = (*((int (__thiscall **)(InfantryClass *, AbstractClass *, int))this->FootClass + 234))(
                   this,
                   target,
                   v2),
        !(_BYTE)result) )
  {
    if ( (v7[0] = this->?[0], /*0x51f3a5*/
          v7[1] = this->?[1],
          ptr_0 = this->FootClass,
          v7[2] = this->?[2],
          v6 = (*((int (__thiscall **)(InfantryClass *, int, _DWORD *, _DWORD))ptr_0 + 241))(this, 1, v7, 0),
          (result = (int)this->?) == 0)
      && !v6
      || (result = (*((int (__thiscall **)(InfantryClass *, int))this->FootClass + 242))(this, v6), !v6) )
    {
      if ( this->? != 5 ) /*0x51f3ae*/
      {
        result = (*((int (__thiscall **)(InfantryClass *))this->FootClass + 33))(this); /*0x51f3b4*/
        if ( !*(_BYTE *)(result + 3476) ) /*0x51f3ba*/
          return (*((int (__thiscall **)(InfantryClass *, _DWORD, int))this->FootClass + 289))(this, 0, 1); /*0x51f3cc*/
      }
    }
  }
  return result; /*0x51f3d2*/
}



// ==== 0x0051F3E0  InfantryClass::EnterBuilding  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::EnterBuilding(InfantryClass *this)
{
  AbstractClass *v2; // ecx
  AbstractClass *v3; // eax
  int uniqueId; // ecx
  AbstractClass *target; // ecx
  InfantryTypeClass *Type; // eax
  int v8; // eax
  char *MissionControl; // eax
  int v10; // eax

  if ( (this->Type->C4 || (unsigned __int8)TechnoTypeClass::HasVoiceResponse((int *)this, 14)) /*0x51f42a*/
    && (v2 = this->?) != 0
    && (*((int (__thiscall **)(AbstractClass *))v2->ptr_0 + 11))(v2) == 6
    && (v3 = this->?, uniqueId = v3[36].uniqueId, *(_BYTE *)(uniqueId + 5495))
    && !*(_BYTE *)(uniqueId + 5889) )
  {
    (*((void (__thiscall **)(InfantryClass *, AbstractClass *, int))this->FootClass + 288))(this, v3, 1); /*0x51f43b*/
    (*((void (__thiscall **)(InfantryClass *, int, _DWORD))this->FootClass + 122))(this, 17, 0); /*0x51f449*/
    return 1; /*0x51f44f*/
  }
  else if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) /*0x51f4a4*/
         && (target = this->?) != 0
         && (*((int (__thiscall **)(AbstractClass *))target->ptr_0 + 11))(target) == 6
         && ((Type = this->Type, Type->Infiltrate)
          || (Type->Occupier || Type->Assaulter)
          && (unsigned __int8)BuildingClass::CanRepair((BuildingClass *)this->?, (int)this)) )
  {
    (*((void (__thiscall **)(InfantryClass *, AbstractClass *, int))this->FootClass + 288))(this, this->?, 1); /*0x51f4ba*/
    (*((void (__thiscall **)(InfantryClass *, int))this->FootClass + 124))(this, 8); /*0x51f4c6*/
    return 1; /*0x51f4cc*/
  }
  else if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->?) /*0x51f4fa*/
         && ((v8 = this->SequenceAnim[0], v8 == 27) || v8 == 28 || v8 == 29 || v8 == 30) )
  {
    (*((void (__thiscall **)(InfantryClass *))this->FootClass + 266))(this); /*0x51f500*/
    MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x51f508*/
    LOWORD(v10) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x51f516*/
    return v10 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x51f532*/
  }
  else
  {
    return InfantryClass::ScanTarget((FootClass *)this); /*0x51f538*/
  }
}



// ==== 0x0051F540  InfantryClass::ProcessEnterOrRepair  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessEnterOrRepair(InfantryClass *this)
{
  AbstractClass *target; // ecx
  InfantryTypeClass *Type; // eax
  int v5; // eax

  if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) /*0x51f591*/
    && (target = this->?) != 0
    && (*((int (__thiscall **)(AbstractClass *))target->ptr_0 + 11))(target) == 6
    && ((Type = this->Type, Type->Infiltrate)
     || (Type->Occupier || Type->Assaulter)
     && (unsigned __int8)BuildingClass::CanRepair((BuildingClass *)this->?, (int)this)) )
  {
    (*((void (__thiscall **)(InfantryClass *, AbstractClass *, int))this->FootClass + 288))(this, this->?, 1); /*0x51f5a7*/
    (*((void (__thiscall **)(InfantryClass *, int))this->FootClass + 124))(this, 8); /*0x51f5b3*/
    return 1; /*0x51f5b9*/
  }
  else if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) /*0x51f5e9*/
         && ((v5 = this->SequenceAnim[0], v5 == 27) || v5 == 28 || v5 == 29 || v5 == 30)
         && !this->? )
  {
    (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 31, 0, 0); /*0x51f5fd*/
    return 1; /*0x51f603*/
  }
  else
  {
    return InfantryClass::ProcessDeploy((FootClass *)this); /*0x51f60c*/
  }
}



// ==== 0x0051F620  InfantryClass::FindIdleMovePosition  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::FindIdleMovePosition(InfantryClass *this)
{
  int result; // eax

  result = InfantryClass::GetIdleTimer(this); /*0x51f623*/
  if ( result == -1 ) /*0x51f62b*/
    return FootClass::FindMovePosition((FootClass *)this); /*0x51f62f*/
  return result; /*0x51f634*/
}



// ==== 0x0051F640  InfantryClass::FindIdleAITarget  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::FindIdleAITarget(InfantryClass *this)
{
  int result; // eax

  result = InfantryClass::GetIdleTimer(this); /*0x51f643*/
  if ( result == -1 ) /*0x51f64b*/
    return FootClass::FindAITarget((FootClass *)this); /*0x51f64f*/
  return result; /*0x51f654*/
}



// ==== 0x0051F660  InfantryClass::ProcessIvanBombResult  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessIvanBombResult(InfantryClass *this)
{
  int v2; // eax
  House *v3; // eax

  v2 = this->SequenceAnim[0]; /*0x51f663*/
  if ( v2 != 27 && v2 != 28 && v2 != 29 && v2 != 30 ) /*0x51f67b*/
    return FootClass::Destru_vt139((FootClass *)this); /*0x51f67b*/
  v3 = (House *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 15))(this); /*0x51f681*/
  if ( (unsigned __int8)House::IsCurrentPlayer(v3) ) /*0x51f686*/
  {
    (*((void (__thiscall **)(InfantryClass *, _DWORD, int))this->FootClass + 288))(this, 0, 1); /*0x51f697*/
    return 1; /*0x51f6a3*/
  }
  if ( this->Type->? > -1 ) /*0x51f6b1*/
    return FootClass::Destru_vt139((FootClass *)this); /*0x51f6d9*/
  (*((void (__thiscall **)(InfantryClass *, int, _DWORD, _DWORD))this->FootClass + 342))(this, 31, 0, 0); /*0x51f6bd*/
  return *(_DWORD *)(this->Type->Sequence[0] + 1120); /*0x51f6a2*/
}



// ==== 0x0051F6E0  InfantryClass::ProcessIvanBomb  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessIvanBomb(InfantryClass *this)
{
  InfantryTypeClass *Type; // ecx
  int v3; // eax
  int UndeployDelay; // ebx
  _DWORD *v5; // edi
  void (__thiscall **ptr_0)(InfantryClass *, void *); // edi
  __int16 *v7; // eax
  void *v8; // eax
  InfantryTypeClass *v9; // edx
  _BYTE v11[4]; // [esp+Ch] [ebp-4h] BYREF

  Type = this->Type; /*0x51f6e5*/
  if ( !Type->Deployer ) /*0x51f6eb*/
    return AbstractClass::COMStub_143(); /*0x51f6eb*/
  v3 = this->SequenceAnim[0]; /*0x51f6f9*/
  UndeployDelay = -1; /*0x51f6ff*/
  if ( v3 == 27 || v3 == 28 || v3 == 29 || v3 == 30 ) /*0x51f714*/
  {
    if ( Type->? <= -1 ) /*0x51f71d*/
      (*((void (__thiscall **)(InfantryClass *, int, int, _DWORD))this->FootClass + 342))(this, 31, 1, 0); /*0x51f72d*/
  }
  else
  {
    (*((void (__thiscall **)(InfantryClass *, int, int, _DWORD))this->FootClass + 342))(this, 27, 1, 0); /*0x51f743*/
    v5 = (_DWORD *)(*((int (__thiscall **)(InfantryClass *))this->FootClass + 252))(this); /*0x51f753*/
    if ( (unsigned __int8)IsNonNullPtr(v5) && *(_BYTE *)(*v5 + 336) ) /*0x51f763*/
    {
      if ( (unsigned __int8)ObjectClass::StepCleanup((ObjectClass *)this, &stru_825538.AlliedVoice[6]) ) /*0x51f774*/
      {
        UndeployDelay = *(_DWORD *)(this->Type->Sequence[0] + 976) + 1; /*0x51f78f*/
      }
      else
      {
        ptr_0 = (void (__thiscall **)(InfantryClass *, void *))this->FootClass; /*0x51f792*/
        v7 = (__int16 *)(*((int (__thiscall **)(InfantryClass *, _BYTE *))this->FootClass + 110))(this, v11); /*0x51f79b*/
        v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7); /*0x51f7a7*/
        ptr_0[242](this, v8); /*0x51f7af*/
      }
    }
    v9 = this->Type; /*0x51f7b5*/
    if ( v9->? > -1 ) /*0x51f7c5*/
      UndeployDelay = v9->?; /*0x51f7c7*/
  }
  (*((void (__thiscall **)(InfantryClass *, int))this->FootClass + 124))(this, 5); /*0x51f7cf*/
  (*((void (__thiscall **)(InfantryClass *, _DWORD, int))this->FootClass + 288))(this, 0, 1); /*0x51f7dd*/
  if ( UndeployDelay > -1 ) /*0x51f7e6*/
    return UndeployDelay; /*0x51f7e8*/
  else
    return AbstractClass::COMStub_143(); /*0x51f7f0*/
}



// ==== 0x0051F800  InfantryClass::HandleCursorOverCell  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::HandleCursorOverCell(InfantryClass *this, __int16 *a2, char a3, int a4)
{
  int v6; // ebx
  InfantryClass *v7; // eax
  InfantryClass *v8; // eax
  InfantryTypeClass *Type; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  unsigned __int8 (__thiscall **ptr_0)(InfantryClass *, _DWORD *, int); // edx
  _DWORD *v14; // eax
  int v15; // ebp
  int v16; // esi
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int *v20; // ecx
  InfantryClass *v21; // eax
  _DWORD *v22; // eax
  int v23; // eax
  _DWORD v24[3]; // [esp+Ch] [ebp-Ch] BYREF
  int v25; // [esp+20h] [ebp+8h]

  if ( !(unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x51f80e*/
    return 0; /*0x51f81f*/
  v6 = FootClass::HandleCursorWithCheck((FootClass *)this, a2, a3, a4); /*0x51f83c*/
  if ( TechnoClass::GetValue((TechnoClass *)this, -1) < 0 /*0x51f859*/
    && (unsigned __int8)House::IsHumanPlayer((House *)this->?)
    && v6 == 5 )
  {
    v6 = 26; /*0x51f85b*/
  }
  if ( this->Type->? && (v6 == 1 || v6 == 2) ) /*0x51f878*/
  {
    v7 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x51f880*/
    if ( InfantryClass::ValidateAttackPosition(v7) /*0x51f89d*/
      || (v8 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2),
          InfantryClass::CanMoveThroughCell(v8)) )
    {
      v6 = 0; /*0x51f8a6*/
    }
  }
  if ( !(unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x51f8ae*/
    goto LABEL_33; /*0x51f8ae*/
  Type = this->Type; /*0x51f8bb*/
  if ( !Type->Deployer ) /*0x51f8c1*/
    goto LABEL_33; /*0x51f8c1*/
  v10 = this->SequenceAnim[0]; /*0x51f8cf*/
  if ( v10 != 27 && v10 != 28 && v10 != 29 && v10 != 30 ) /*0x51f8e7*/
    goto LABEL_33; /*0x51f8e7*/
  if ( v6 != 1 ) /*0x51f8f0*/
  {
    if ( v6 == 5 ) /*0x51f8f5*/
    {
      if ( Type->? ) /*0x51f8fb*/
      {
        v11 = (*((int (__thiscall **)(InfantryClass *, _DWORD))this->FootClass + 185))(this, 0); /*0x51f90b*/
        v12 = *a2 << 8; /*0x51f91b*/
        v24[1] = (a2[1] << 8) + 128; /*0x51f92b*/
        ptr_0 = (unsigned __int8 (__thiscall **)(InfantryClass *, _DWORD *, int))this->FootClass; /*0x51f92f*/
        v24[0] = v12 + 128; /*0x51f935*/
        v24[2] = 0; /*0x51f93c*/
        if ( ptr_0[89](this, v24, v11) ) /*0x51f944*/
          goto LABEL_24; /*0x51f94c*/
      }
      goto LABEL_23; /*0x51f94c*/
    }
LABEL_33:
    if ( v6 == 1 ) /*0x51f9aa*/
    {
      v21 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x51f9b2*/
      if ( (unsigned __int8)InfantryClass::IsInBounds(v21) ) /*0x51f9b9*/
      {
        CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x51f9c9*/
        return 36 - (globalHelper_084F10((int)this) != 0); /*0x51f9e2*/
      }
    }
    goto LABEL_24; /*0x51f9c0*/
  }
LABEL_23:
  v6 = 2; /*0x51f94e*/
LABEL_24:
  v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x51f953*/
  v15 = 0; /*0x51f965*/
  v16 = 0; /*0x51f967*/
  if ( ((int)dword_A8B230->ptr_0 & 0x1000) != 0 ) /*0x51f96e*/
  {
    if ( a3 ) /*0x51f97a*/
    {
      v17 = v14[10]; /*0x51f97c*/
      if ( v17 ) /*0x51f981*/
      {
        v18 = *(_DWORD *)(v17 + 16); /*0x51f983*/
        v19 = 0; /*0x51f986*/
        if ( v18 > 0 ) /*0x51f98a*/
        {
          v20 = *(int **)(v17 + 4); /*0x51f98c*/
          while ( 1 ) /*0x51f98f*/
          {
            v16 = *v20; /*0x51f98f*/
            if ( *(_BYTE *)(*v20 + 116) ) /*0x51f991*/
            {
              if ( *(_DWORD *)(v16 + 48) == 6 ) /*0x51f99b*/
                break; /*0x51f99b*/
            }
            ++v19; /*0x51f99d*/
            ++v20; /*0x51f99e*/
            if ( v19 >= v18 ) /*0x51f9a3*/
              goto LABEL_37; /*0x51f9a3*/
          }
          v15 = **(_DWORD **)(v16 + 96); /*0x51f9ee*/
        }
      }
    }
  }
LABEL_37:
  if ( !this->Type->Engineer || !v15 || !(unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x51fa16*/
    goto LABEL_55; /*0x51fa16*/
  if ( *(_BYTE *)(v15 + 5814) ) /*0x51fa1f*/
  {
    v22 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v16 + 72))(v16, v24); /*0x51fa32*/
    LOWORD(v25) = *v22 / 256; /*0x51fa45*/
    HIWORD(v25) = v22[1] / 256; /*0x51fa5d*/
    a4 = v25; /*0x51fa66*/
    v23 = -(CellClass::CheckConnectivity((CellClass *)&stru_87F5F0.__pad_58[416], (int)&a4) != 0); /*0x51fa77*/
    LOBYTE(v23) = v23 & 0xFD; /*0x51fa79*/
    v6 = v23 + 32; /*0x51fa7e*/
    goto LABEL_47; /*0x51fa80*/
  }
  if ( !*(_BYTE *)(v15 + 3276) ) /*0x51fa82*/
  {
LABEL_55:
    if ( v6 == 5 && !(*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 171))(this) ) /*0x51fa9c*/
      v6 = 59; /*0x51faa6*/
    goto LABEL_47; /*0x51faa6*/
  }
  v6 = 9; /*0x51fa8c*/
LABEL_47:
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) && !v6 && !this->Type->? ) /*0x51fac5*/
  {
    if ( (*((unsigned __int8 (__thiscall **)(InfantryClass *))this->FootClass + 40))(this) ) /*0x51fad3*/
      return 2; /*0x51fadd*/
  }
  return v6; /*0x51f817*/
}



// ==== 0x0051FAF0  InfantryClass::GetTypePtr  this=InfantryClass  sig=csp ====
InfantryTypeClass *__thiscall InfantryClass::GetTypePtr(InfantryClass *this)
{
  return this->Type; /*0x51faf6*/
}



// ==== 0x0051FB00  ObjectClass::PlaceScenarioInfantry  this=ObjectClass  sig=csp ====
int __thiscall PlaceScenarioInfantry(INIClass *this)
{
  int result; // eax
  int v3; // ecx
  unsigned __int8 *StringByIndex; // eax
  char *v5; // eax
  int v6; // eax
  IUnknown *v7; // edi
  Factory *v8; // eax
  int ExitCellByName; // esi
  int v10; // eax
  int v11; // edi
  char *v12; // eax
  char *v13; // eax
  __int16 v14; // si
  char *v15; // eax
  int v16; // eax
  int v17; // ecx
  char *v18; // eax
  int v19; // eax
  char *v20; // eax
  int v21; // eax
  int v22; // esi
  int v23; // edx
  char *v24; // eax
  int v25; // ebx
  char *v26; // eax
  int v27; // esi
  char *v28; // eax
  TeamClass *v29; // eax
  int v30; // eax
  char *v31; // eax
  int v32; // eax
  char *v33; // eax
  char *v34; // eax
  bool v35; // al
  int GroundHeight; // eax
  char *v37; // eax
  char *v38; // eax
  int v39; // esi
  int v40; // eax
  int v41; // esi
  int v42; // eax
  int v43; // [esp+4h] [ebp-98h] BYREF
  int v44; // [esp+8h] [ebp-94h]
  int v45; // [esp+Ch] [ebp-90h]
  int i; // [esp+10h] [ebp-8Ch]
  int v47; // [esp+14h] [ebp-88h]
  int v48; // [esp+18h] [ebp-84h]
  char String[128]; // [esp+1Ch] [ebp-80h] BYREF

  INIClass::ResetSection(this); /*0x51fb09*/
  result = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)&g_INI_Key_Special.SidebarImage); /*0x51fb16*/
  v3 = 0; /*0x51fb1b*/
  v47 = result; /*0x51fb1f*/
  for ( i = 0; i < v47; ++i ) /*0x51fb27*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x51fb3a*/
                                         this->__pad_0,
                                         (unsigned __int8 *)&g_INI_Key_Special.SidebarImage,
                                         v3);
    INIClass::GetString(this, (unsigned __int8 *)&g_INI_Key_Special.SidebarImage, StringByIndex, 0, String, 128); /*0x51fb54*/
    v5 = strtok(String, Str); /*0x51fb63*/
    v6 = HouseClass::FindByName(v5); /*0x51fb6d*/
    if ( v6 != -1 ) /*0x51fb75*/
    {
      v7 = (IUnknown *)*((_DWORD *)stru_A80220.? + v6); /*0x51fb88*/
      v8 = (Factory *)strtok(0, Str); /*0x51fb8b*/
      ExitCellByName = Factory::FindExitCellByName(v8); /*0x51fb9a*/
      if ( ExitCellByName != -1 ) /*0x51fb9f*/
      {
        v10 = __2_YAPAXI_Z(0x6F0u); /*0x51fbaa*/
        if ( v10 ) /*0x51fbb4*/
        {
          v11 = InfantryClass::Construct(v10, (int)v7, *((_DWORD *)dword_A8E34C + ExitCellByName), v7); /*0x51fbcc*/
          if ( v11 ) /*0x51fbd0*/
          {
            v12 = strtok(0, Str); /*0x51fbdd*/
            v48 = atoi(v12); /*0x51fbeb*/
            if ( *(int *)&stru_A8EB00.?[408] < 4 ) /*0x51fbfe*/
            {
              v18 = strtok(0, Str); /*0x51fc27*/
              v19 = atoi(v18); /*0x51fc2d*/
              LOWORD(v17) = v19 % 128; /*0x51fc43*/
              v16 = v19 / 128; /*0x51fc4a*/
              v17 = (__int16)v17; /*0x51fc4d*/
            }
            else
            {
              v13 = strtok(0, Str); /*0x51fc00*/
              v14 = atoi(v13); /*0x51fc12*/
              v15 = strtok(0, Str); /*0x51fc14*/
              LOWORD(v16) = atoi(v15); /*0x51fc1a*/
              v17 = v14; /*0x51fc22*/
            }
            v43 = (v17 << 8) + 128; /*0x51fc6c*/
            v44 = ((__int16)v16 << 8) + 128; /*0x51fc70*/
            v45 = 0; /*0x51fc74*/
            v20 = strtok(0, Str); /*0x51fc78*/
            v21 = atoi(v20); /*0x51fc7e*/
            v22 = dword_89E9F4[3 * v21]; /*0x51fcc8*/
            v23 = dword_89E9F8[3 * v21]; /*0x51fccb*/
            v43 = dword_89E9F0[3 * v21] + ((v43 / 256) << 8); /*0x51fcce*/
            v44 = ((v44 / 256) << 8) + v22; /*0x51fcd9*/
            v45 += v23; /*0x51fcdd*/
            v24 = strtok(0, Str); /*0x51fce1*/
            v25 = LookupWaypointName((ObjectClass *)v24); /*0x51fcf0*/
            v26 = strtok(0, Str); /*0x51fcf9*/
            if ( v26 ) /*0x51fd03*/
              v27 = atoi(v26); /*0x51fd0e*/
            else
              v27 = 0; /*0x51fd12*/
            v28 = strtok(0, Str); /*0x51fd1b*/
            if ( v28 ) /*0x51fd25*/
            {
              v29 = (TeamClass *)ObjectTypeClass::FindByName((ObjectTypeClass *)v28); /*0x51fd29*/
              if ( v29 ) /*0x51fd30*/
              {
                v30 = TeamClass::FindOrCreate(v29); /*0x51fd34*/
                if ( v30 ) /*0x51fd3b*/
                  ObjectClass::SetReference((ObjectClass *)v11, v30); /*0x51fd40*/
              }
            }
            v31 = strtok(0, Str); /*0x51fd4c*/
            if ( v31 ) /*0x51fd56*/
            {
              v32 = atoi(v31); /*0x51fd59*/
              FootClass::SetField((int *)(v11 + 336), v32); /*0x51fd68*/
            }
            v33 = strtok(0, Str); /*0x51fd74*/
            if ( v33 ) /*0x51fd7e*/
              *(_DWORD *)(v11 + 532) = atoi(v33); /*0x51fd89*/
            v34 = strtok(0, Str); /*0x51fd96*/
            if ( v34 ) /*0x51fda0*/
            {
              v35 = atoi(v34) != 0; /*0x51fdad*/
              *(_BYTE *)(v11 + 140) = v35; /*0x51fdb2*/
              if ( v35 ) /*0x51fdb8*/
                GroundHeight = *(_DWORD *)&stru_A8EB00.?[1616] + Cell::GetGroundHeight(&v43); /*0x51fdc9*/
              else
                GroundHeight = Cell::GetGroundHeight(&v43); /*0x51fddb*/
              v45 = GroundHeight; /*0x51fde0*/
            }
            v37 = strtok(0, Str); /*0x51fdeb*/
            if ( v37 ) /*0x51fdf5*/
              *(_BYTE *)(v11 + 1057) = atoi(v37) != 0; /*0x51fe05*/
            v38 = strtok(0, Str); /*0x51fe12*/
            if ( v38 ) /*0x51fe1c*/
              *(_BYTE *)(v11 + 1058) = atoi(v38) != 0; /*0x51fe2c*/
            if ( Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v43) == (CellClass *)&g_MissionQueueFrame.briefing[130] /*0x51fe52*/
              || !(*(unsigned __int8 (__thiscall **)(int, int *, int))(*(_DWORD *)v11 + 216))(v11, &v43, v27) )
            {
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 32))(v11, 1); /*0x51febe*/
            }
            else
            {
              v39 = *(_DWORD *)(v11 + 1728); /*0x51fe60*/
              LOWORD(v40) = Math::RoundToInt((double)v48 * 0.00390625 * (double)*(int *)(v39 + 160)); /*0x51fe72*/
              *(_DWORD *)(v11 + 108) = v40; /*0x51fe77*/
              v41 = *(_DWORD *)(v39 + 160); /*0x51fe7a*/
              if ( v40 > v41 - 3 ) /*0x51fe85*/
                *(_DWORD *)(v11 + 108) = v41; /*0x51fe87*/
              if ( *(int *)(v11 + 108) < 1 ) /*0x51fe94*/
                *(_DWORD *)(v11 + 108) = 1; /*0x51fe96*/
              v42 = *(_DWORD *)v11; /*0x51fe9c*/
              *(_DWORD *)(v11 + 112) = *(_DWORD *)(v11 + 108); /*0x51fea3*/
              (*(void (__thiscall **)(int, int, _DWORD))(v42 + 488))(v11, v25, 0); /*0x51fea6*/
              (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 492))(v11); /*0x51feb0*/
            }
          }
        }
      }
    }
    result = v47; /*0x51fec5*/
    v3 = i + 1; /*0x51fec9*/
  }
  return result; /*0x51fed9*/
}



// ==== 0x0051FEF0  ObjectClass::SaveInfantryToINI  this=ObjectClass  sig=csp ====
int __usercall SaveInfantryToINI@<eax>(ObjectClass *this, int a2@<edi>, int a3@<esi>)
{
  int *v3; // ecx
  double v4; // st7
  int result; // eax
  BuildingClass *v6; // esi
  unsigned int v7; // edi
  HouseClass *owner; // ebp
  int v9; // ebx
  int isRecruitableByEnemy; // edx
  int isRecruitableByAlly; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [esp-34h] [ebp-F0h]
  char *v16; // [esp-20h] [ebp-DCh]
  int Field; // [esp-14h] [ebp-D0h]
  int controlGroup; // [esp-10h] [ebp-CCh]
  int onBridge; // [esp-Ch] [ebp-C8h]
  int i; // [esp+8h] [ebp-B4h]
  char *queuedMission; // [esp+14h] [ebp-A8h]
  Input v24; // [esp+20h] [ebp-9Ch] BYREF
  int v25; // [esp+24h] [ebp-98h]
  int v26; // [esp+28h] [ebp-94h]
  int v27; // [esp+2Ch] [ebp-90h] BYREF
  char Buffer[12]; // [esp+30h] [ebp-8Ch] BYREF
  char Source[128]; // [esp+3Ch] [ebp-80h] BYREF

  INIClass::ClearSection(v3, (int)&g_INI_Key_Special.SidebarImage, 0); /*0x51ff02*/
  result = 0; /*0x51ff0d*/
  for ( i = 0; result < *(int *)&stru_A83D50.__pad_80[40]; i = result ) /*0x51ff15*/
  {
    v6 = *(BuildingClass **)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * result); /*0x51ff25*/
    if ( !v6->? ) /*0x51ff28*/
    {
      sprintf(Buffer, "%d", result); /*0x51ff41*/
      if ( (*((int (__thiscall **)(BuildingClass *, int, int))v6->TechnoClass + 97))(v6, a2, a3) == -1 ) /*0x51ff71*/
        queuedMission = (char *)v6->?; /*0x51ff79*/
      else
        queuedMission = (char *)(*((int (__thiscall **)(BuildingClass *))v6->TechnoClass + 97))(v6); /*0x51ff89*/
      v7 = *ProgressTimer::GetValue((ProgressTimer *)v6->?, &v27); /*0x51ff9d*/
      owner = v6->?; /*0x51ffab*/
      v9 = *(_DWORD *)&v6->__pad_6B8[8] + 36; /*0x51ffb3*/
      v24.Input_field_00 = v6->?[0]; /*0x51ffb6*/
      isRecruitableByEnemy = (unsigned __int8)v6->?; /*0x51ffbf*/
      v25 = v6->?[1]; /*0x51ffc5*/
      isRecruitableByAlly = (unsigned __int8)v6->?; /*0x51ffce*/
      v26 = v6->?[2]; /*0x51ffd4*/
      a3 = isRecruitableByEnemy; /*0x51ffe0*/
      a2 = isRecruitableByAlly; /*0x51ffe7*/
      onBridge = (unsigned __int8)v6->?; /*0x51ffec*/
      controlGroup = v6->?; /*0x51ffef*/
      Field = FootClass::GetField(v6->?); /*0x52000b*/
      v16 = FromNameIndex((int)queuedMission); /*0x52001b*/
      v12 = Input::OffsetToDirection(&v24); /*0x52001c*/
      v13 = (*((int (__thiscall **)(BuildingClass *, char *, int, char *, _DWORD))v6->TechnoClass + 110))( /*0x52002b*/
              v6,
              Buffer,
              v12,
              v16,
              (unsigned __int8)(((v7 >> 7) + 1) >> 1));
      v15 = *(__int16 *)(*((int (__thiscall **)(BuildingClass *, char *, _DWORD))v6->TechnoClass + 110))( /*0x520048*/
                          v6,
                          Buffer,
                          *(__int16 *)(v13 + 2));
      BuildingClass::GetHealthRatio(v6); /*0x52004b*/
      v4 = v4 * 256.0; /*0x520050*/
      LOWORD(v14) = Math::RoundToInt(v4); /*0x520056*/
      sprintf(Source, (const char *const)stru_825538.Type, &owner->plainName[4], v9, v14, v15); /*0x520068*/
      INIClass::SetString(queuedMission, (unsigned __int8 *)&g_INI_Key_Special.SidebarImage, Buffer, Source); /*0x520085*/
      result = i; /*0x52008a*/
    }
    ++result; /*0x520094*/
  }
  return result; /*0x5200a5*/
}


