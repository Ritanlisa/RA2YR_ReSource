// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00510040  _DynamicVectorClass_PBVBuildingTypeClass::QueryInterface  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_UScoutStruct___33_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x510043*/
  *Block = &vt_VectorClass_BuildingTypeClass_const; /*0x510046*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x510050*/
  {
    __3_YAXPAX_Z(v3); /*0x510058*/
    *(Block + 1) = 0; /*0x510060*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x51006b*/
  *(Block + 2) = 0; /*0x510071*/
  if ( (a2 & 1) != 0 ) /*0x510078*/
    __3_YAXPAX_Z(Block); /*0x51007b*/
  return (DynamicVector *)Block; /*0x510085*/
}


// ==== 0x00510090  _VectorClass_PAUStartingTechnoStruct_HouseClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_UAngerStruct___16_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x510093*/
  *Block = &vt_VectorClass_HouseClass_StartingTechnoStruct; /*0x510096*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5100a0*/
  {
    __3_YAXPAX_Z(v3); /*0x5100a8*/
    *(Block + 1) = 0; /*0x5100b0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5100bb*/
  *(Block + 2) = 0; /*0x5100c1*/
  if ( (a2 & 1) != 0 ) /*0x5100c8*/
    __3_YAXPAX_Z(Block); /*0x5100cb*/
  return (VectorClass *)Block; /*0x5100d5*/
}


// ==== 0x005100E0  _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass::Constructor  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_UAngerStruct::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5100e3*/
  *Block = &vt_VectorClass_HouseClass_StartingTechnoStruct; /*0x5100e6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5100f0*/
  {
    __3_YAXPAX_Z(v3); /*0x5100f8*/
    *(Block + 1) = 0; /*0x510100*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x51010b*/
  *(Block + 2) = 0; /*0x510111*/
  if ( (a2 & 1) != 0 ) /*0x510118*/
    __3_YAXPAX_Z(Block); /*0x51011b*/
  return (DynamicVector *)Block; /*0x510125*/
}


// ==== 0x00510130  _VectorClass_UAngerStruct::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_UAngerStruct::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x510133*/
  *Block = &vt_VectorClass_AngerStruct; /*0x510136*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x510140*/
  {
    __3_YAXPAX_Z(v3); /*0x510148*/
    *(Block + 1) = 0; /*0x510150*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x51015b*/
  *(Block + 2) = 0; /*0x510161*/
  if ( (a2 & 1) != 0 ) /*0x510168*/
    __3_YAXPAX_Z(Block); /*0x51016b*/
  return (VectorClass *)Block; /*0x510175*/
}


// ==== 0x00510180  _DynamicVectorClass_UAngerStruct::Constructor_VectorClass_AngerStruct_  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_UAngerStruct::Constructor_VectorClass_AngerStruct_(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x510183*/
  *Block = &vt_VectorClass_AngerStruct; /*0x510186*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x510190*/
  {
    __3_YAXPAX_Z(v3); /*0x510198*/
    *(Block + 1) = 0; /*0x5101a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5101ab*/
  *(Block + 2) = 0; /*0x5101b1*/
  if ( (a2 & 1) != 0 ) /*0x5101b8*/
    __3_YAXPAX_Z(Block); /*0x5101bb*/
  return (DynamicVector *)Block; /*0x5101c5*/
}


// ==== 0x005101D0  _VectorClass_UScoutStruct::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_UScoutStruct::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5101d3*/
  *Block = &vt_VectorClass_ScoutStruct; /*0x5101d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5101e0*/
  {
    __3_YAXPAX_Z(v3); /*0x5101e8*/
    *(Block + 1) = 0; /*0x5101f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5101fb*/
  *(Block + 2) = 0; /*0x510201*/
  if ( (a2 & 1) != 0 ) /*0x510208*/
    __3_YAXPAX_Z(Block); /*0x51020b*/
  return (VectorClass *)Block; /*0x510215*/
}


// ==== 0x00510220  ?$DynamicVectorClass@UScoutStruct@@::updateThreatMap  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall AbstractClass::updateThreatMap(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x510223*/
  *Block = &vt_VectorClass_ScoutStruct; /*0x510226*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x510230*/
  {
    __3_YAXPAX_Z(v3); /*0x510238*/
    *(Block + 1) = 0; /*0x510240*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x51024b*/
  *(Block + 2) = 0; /*0x510251*/
  if ( (a2 & 1) != 0 ) /*0x510258*/
    __3_YAXPAX_Z(Block); /*0x51025b*/
  return (DynamicVector *)Block; /*0x510265*/
}


// ==== 0x00510270  _VectorClass_PAUBuildChoiceClass_HouseClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x510273*/
  *Block = &vt_VectorClass_HouseClass_BuildChoiceClass; /*0x510276*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x510280*/
  {
    __3_YAXPAX_Z(v3); /*0x510288*/
    *(Block + 1) = 0; /*0x510290*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x51029b*/
  *(Block + 2) = 0; /*0x5102a1*/
  if ( (a2 & 1) != 0 ) /*0x5102a8*/
    __3_YAXPAX_Z(Block); /*0x5102ab*/
  return (VectorClass *)Block; /*0x5102b5*/
}


// ==== 0x005102C0  VectorClass_ptr_BuildChoiceClass_int_ouseClass::loc_5102C0  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=ida-proto ====
_DWORD *__thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::loc_5102C0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5102c3*/
  *Block = &vt_VectorClass_HouseClass_BuildChoiceClass; /*0x5102c6*/
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
VectorClass *__thiscall VectorClass_BuildingType::Constructor_0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x510313*/
  *Block = &vt_VectorClass_TeamTypeClass_const; /*0x510316*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x510320*/
  {
    __3_YAXPAX_Z(v3); /*0x510328*/
    *(Block + 1) = 0; /*0x510330*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x51033b*/
  *(Block + 2) = 0; /*0x510341*/
  if ( (a2 & 1) != 0 ) /*0x510348*/
    __3_YAXPAX_Z(Block); /*0x51034b*/
  return (VectorClass *)Block; /*0x510355*/
}


// ==== 0x00510360  _VectorClass__N::Add  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass__N::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x510363*/
  *Block = &vt_VectorClass_bool; /*0x510366*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x510370*/
  {
    __3_YAXPAX_Z(v3); /*0x510378*/
    *(Block + 1) = 0; /*0x510380*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x51038b*/
  *(Block + 2) = 0; /*0x510391*/
  if ( (a2 & 1) != 0 ) /*0x510398*/
    __3_YAXPAX_Z(Block); /*0x51039b*/
  return (VectorClass *)Block; /*0x5103a5*/
}


// ==== 0x005103B0  _DynamicVectorClass__N::Constructor_VectorClass_bool_  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass__N::Constructor_VectorClass_bool_(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5103b3*/
  *Block = &vt_VectorClass_bool; /*0x5103b6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5103c0*/
  {
    __3_YAXPAX_Z(v3); /*0x5103c8*/
    *(Block + 1) = 0; /*0x5103d0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5103db*/
  *(Block + 2) = 0; /*0x5103e1*/
  if ( (a2 & 1) != 0 ) /*0x5103e8*/
    __3_YAXPAX_Z(Block); /*0x5103eb*/
  return (DynamicVector *)Block; /*0x5103f5*/
}


// ==== 0x00510400  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::Add  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass__N_18_::Add(_DWORD *Block, char a2)
{
  int v3; // eax

  v3 = *(Block + 1); /*0x510403*/
  *Block = &vt_VectorClass_DiscreteDistributionClass_BuildingTypeClass_DistributionObject_BuildingTypeClass; /*0x510406*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x510410*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x510423*/
    *(Block + 1) = 0; /*0x51042b*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x510436*/
  *(Block + 2) = 0; /*0x51043c*/
  if ( (a2 & 1) != 0 ) /*0x510443*/
    __3_YAXPAX_Z(Block); /*0x510446*/
  return (VectorClass *)Block; /*0x510450*/
}


// ==== 0x00510460  HouseClass::updatePowerState  this=HouseClass  sig=csp ====
char *__thiscall HouseClass::updatePowerState(char *Block, char a2)
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
DynamicVector *__thiscall VectorClass__N_18_::Constructor_0(_DWORD *Block, char a2)
{
  int v3; // eax

  v3 = *(Block + 1); /*0x5104a3*/
  *Block = &vt_VectorClass_DiscreteDistributionClass_BuildingTypeClass_DistributionObject_BuildingTypeClass; /*0x5104a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5104b0*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x5104c3*/
    *(Block + 1) = 0; /*0x5104cb*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5104d6*/
  *(Block + 2) = 0; /*0x5104dc*/
  if ( (a2 & 1) != 0 ) /*0x5104e3*/
    __3_YAXPAX_Z(Block); /*0x5104e6*/
  return (DynamicVector *)Block; /*0x5104f0*/
}


// ==== 0x00510500  SuperClassVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_510500(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x51050b*/
  this->Capacity = a2; /*0x51050e*/
  this->q030 = 1; /*0x510511*/
  this->__pad_034 = 0; /*0x510515*/
  *this = &vt_VectorClass_SuperClass; /*0x510518*/
  if ( a2 ) /*0x51051e*/
  {
    if ( a3 ) /*0x510526*/
    {
      this->Items = a3; /*0x510528*/
      return this; /*0x51052e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x51053d*/
    this->__pad_034 = 1; /*0x510540*/
  }
  return this; /*0x51052d*/
}


// ==== 0x00510550  VectorClass::BuildingConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_Building_Constructor(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x51055b*/
  this->Capacity = a2; /*0x51055e*/
  this->q030 = 1; /*0x510561*/
  this->__pad_034 = 0; /*0x510565*/
  *this = &vt_VectorClass_BuildingClass; /*0x510568*/
  if ( a2 ) /*0x51056e*/
  {
    if ( a3 ) /*0x510576*/
    {
      this->Items = a3; /*0x510578*/
      return this; /*0x51057e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x51058d*/
    this->__pad_034 = 1; /*0x510590*/
  }
  return this; /*0x51057d*/
}


// ==== 0x005105A0  VectorClass::BuildingTypeConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::BuildingTypeConstructor(_DWORD *this, TechnoTypeClass *aP1, TechnoTypeClass *aP2)
{
  this->Items = 0; /*0x5105ab*/
  this->Capacity = aP1; /*0x5105ae*/
  this->q030 = 1; /*0x5105b1*/
  this->__pad_034 = 0; /*0x5105b5*/
  *this = &vt_VectorClass_BuildingTypeClass_const; /*0x5105b8*/
  if ( aP1 ) /*0x5105be*/
  {
    if ( aP2 ) /*0x5105c6*/
    {
      this->Items = aP2; /*0x5105c8*/
      return this; /*0x5105ce*/
    }
    this->Items = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x5105dd*/
    this->__pad_034 = 1; /*0x5105e0*/
  }
  return this; /*0x5105cd*/
}


// ==== 0x005105F0  ConnectionPointVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_5105F0(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x5105fb*/
  this->Capacity = a2; /*0x5105fe*/
  this->q030 = 1; /*0x510601*/
  this->__pad_034 = 0; /*0x510605*/
  *this = &vt_VectorClass_IConnectionPoint; /*0x510608*/
  if ( a2 ) /*0x51060e*/
  {
    if ( a3 ) /*0x510616*/
    {
      this->Items = a3; /*0x510618*/
      return this; /*0x51061e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x51062d*/
    this->__pad_034 = 1; /*0x510630*/
  }
  return this; /*0x51061d*/
}


// ==== 0x00510640  TagClassVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_510640(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x51064b*/
  this->Capacity = a2; /*0x51064e*/
  this->q030 = 1; /*0x510651*/
  this->__pad_034 = 0; /*0x510655*/
  *this = &vt_VectorClass_TagClass; /*0x510658*/
  if ( a2 ) /*0x51065e*/
  {
    if ( a3 ) /*0x510666*/
    {
      this->Items = a3; /*0x510668*/
      return this; /*0x51066e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x51067d*/
    this->__pad_034 = 1; /*0x510680*/
  }
  return this; /*0x51066d*/
}


// ==== 0x00510690  StartingTechnoVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_510690(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x51069b*/
  this->Capacity = a2; /*0x51069e*/
  this->q030 = 1; /*0x5106a1*/
  this->__pad_034 = 0; /*0x5106a5*/
  *this = &vt_VectorClass_HouseClass_StartingTechnoStruct; /*0x5106a8*/
  if ( a2 ) /*0x5106ae*/
  {
    if ( a3 ) /*0x5106b6*/
    {
      this->Items = a3; /*0x5106b8*/
      return this; /*0x5106be*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5106cd*/
    this->__pad_034 = 1; /*0x5106d0*/
  }
  return this; /*0x5106bd*/
}


// ==== 0x005106E0  AngerVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_5106E0(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // ecx
  int v9; // edx

  this->Items = 0; /*0x5106ed*/
  this->Capacity = a2; /*0x5106f0*/
  this->q030 = 1; /*0x5106f3*/
  this->__pad_034 = 0; /*0x5106f7*/
  *this = &vt_VectorClass_AngerStruct; /*0x5106fa*/
  if ( !a2 ) /*0x510700*/
    return this; /*0x510700*/
  if ( !a3 ) /*0x510708*/
  {
    v7 = __2_YAPAXI_Z(8 * a2); /*0x510732*/
    if ( v7 ) /*0x51073c*/
    {
      v8 = v7; /*0x510741*/
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
        this->__pad_034 = 1; /*0x510756*/
        return this; /*0x51075f*/
      }
    }
    else
    {
      v7 = 0; /*0x510762*/
    }
    this->Items = v7; /*0x510764*/
    this->__pad_034 = 1; /*0x510767*/
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
_DWORD *__thiscall sub_510780(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  char *v7; // eax
  char *v8; // ecx
  int v9; // edx

  this->Items = 0; /*0x51078d*/
  this->Capacity = a2; /*0x510790*/
  this->q030 = 1; /*0x510793*/
  this->__pad_034 = 0; /*0x510797*/
  *this = &vt_VectorClass_ScoutStruct; /*0x51079a*/
  if ( !a2 ) /*0x5107a0*/
    return this; /*0x5107a0*/
  if ( !a3 ) /*0x5107a8*/
  {
    v7 = (char *)__2_YAPAXI_Z(8 * a2); /*0x5107d2*/
    if ( v7 ) /*0x5107dc*/
    {
      v8 = v7; /*0x5107e1*/
      if ( a2 - 1 >= 0 ) /*0x5107e5*/
      {
        v9 = a2; /*0x5107e7*/
        do /*0x5107f1*/
        {
          *(_DWORD *)v8 = 0; /*0x5107e8*/
          v8[4] = 0; /*0x5107ea*/
          v8 += 8; /*0x5107ed*/
          --v9; /*0x5107f0*/
        }
        while ( v9 ); /*0x5107f1*/
        this->Items = v7; /*0x5107f3*/
        this->__pad_034 = 1; /*0x5107f6*/
        return this; /*0x5107ff*/
      }
    }
    else
    {
      v7 = 0; /*0x510802*/
    }
    this->Items = v7; /*0x510804*/
    this->__pad_034 = 1; /*0x510807*/
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


// ==== 0x00510820  HouseClass::processAIEvents  this=DynamicVector  sig=csp ====
char __thiscall HouseClass::processAIEvents(_DWORD *this, AbstractClass *aP1)
{
  int v2; // edx
  BuildingClass *v3; // eax
  int v4; // edx

  v2 = this->DynamicVector_field_0x10; /*0x510820*/
  v3 = (BuildingClass *)aP1; /*0x510823*/
  if ( (int)aP1 >= v2 ) /*0x510829*/
    return 0; /*0x51084c*/
  v4 = v2 - 1; /*0x51082b*/
  this->DynamicVector_field_0x10 = v4; /*0x51082e*/
  if ( (int)aP1 < v4 ) /*0x510831*/
  {
    do /*0x510844*/
    {
      v3 = (BuildingClass *)((char *)v3 + 1); /*0x510837*/
      *(_DWORD *)(this->Items + 4 * (_DWORD)v3 - 4) = *(_DWORD *)(this->Items + 4 * (_DWORD)v3); /*0x51083b*/
    }
    while ( (int)v3 < this->DynamicVector_field_0x10 ); /*0x510844*/
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
_DWORD *__thiscall BoolVector::Construct(_DWORD *this, MapClass *aP1, MapClass *aP2)
{
  this->Items = 0; /*0x51092b*/
  this->Capacity = aP1; /*0x51092e*/
  this->q030 = 1; /*0x510931*/
  this->__pad_034 = 0; /*0x510935*/
  *this = &vt_VectorClass_bool; /*0x510938*/
  if ( aP1 ) /*0x51093e*/
  {
    if ( aP2 ) /*0x510946*/
    {
      this->Items = aP2; /*0x510948*/
      return this; /*0x51094e*/
    }
    this->Items = __2_YAPAXI_Z((size_t)aP1); /*0x51095a*/
    this->__pad_034 = 1; /*0x51095d*/
  }
  return this; /*0x51094d*/
}


// ==== 0x00510970  DistributionVector_BuildingType::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_510970(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx

  this->Items = 0; /*0x51097a*/
  this->Capacity = a2; /*0x510981*/
  this->q030 = 1; /*0x510984*/
  this->__pad_034 = 0; /*0x510988*/
  *this = &vt_VectorClass_DiscreteDistributionClass_BuildingTypeClass_DistributionObject_BuildingTypeClass; /*0x51098c*/
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
  v7 = __2_YAPAXI_Z(8 * a2 + 4); /*0x5109ca*/
  if ( !v7 ) /*0x5109d4*/
  {
    this->__pad_034 = 1; /*0x510a04*/
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
  this->__pad_034 = 1; /*0x5109f4*/
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
  MEMORY[0xA8F068] = Math::Sqrt(v0 + v0); /*0x510b1e*/
}


// ==== 0x00510B30  sub_510B30  this=-  sig=ida-proto ====
void sub_510B30()
{
  MEMORY[0xA8F0B8] = MEMORY[0xA8F068] / 60.0; /*0x510b3c*/
}


// ==== 0x00510B50  sub_510B50  this=-  sig=ida-proto ====
void sub_510B50()
{
  MEMORY[0xA8F0A0] = 1.0 / MEMORY[0xA8F0B8]; /*0x510b5c*/
}


// ==== 0x00510B70  sub_510B70  this=-  sig=ida-proto ====
void sub_510B70()
{
  MEMORY[0xA8F098] = 0.0174532925199433 * 45.0; /*0x510b7c*/
}


// ==== 0x00510B90  sub_510B90  this=-  sig=ida-proto ====
void sub_510B90()
{
  MEMORY[0xA8F070] = 0.0174532925199433 * 60.0; /*0x510b9c*/
}


// ==== 0x00510BB0  sub_510BB0  this=-  sig=ida-proto ====
void sub_510BB0()
{
  MEMORY[0xA8F048] = 0.0174532925199433 * 90.0; /*0x510bbc*/
}


// ==== 0x00510BD0  sub_510BD0  this=-  sig=ida-proto ====
__int64 sub_510BD0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xA8F048] - MEMORY[0xA8F070]); /*0x510be2*/
  result = Math::RoundToInt(v0 * MEMORY[0xA8F068] * 0.5); /*0x510bf6*/
  MEMORY[0xA8F0C0] = result; /*0x510bfb*/
  return result; /*0x510c00*/
}


// ==== 0x00510C10  sub_510C10  this=-  sig=ida-proto ====
void sub_510C10()
{
  MEMORY[0xA8F078] = Math::ArcTan((double)MEMORY[0xA8F0C0] * 0.00390625); /*0x510c27*/
}


// ==== 0x00510C40  sub_510C40  this=-  sig=ida-proto ====
void sub_510C40()
{
  MEMORY[0xA8F090] = Math::ArcTan((double)(2 * MEMORY[0xA8F0C0]) / MEMORY[0xA8F068]); /*0x510c62*/
}


// ==== 0x00510C70  sub_510C70  this=-  sig=ida-proto ====
__int64 sub_510C70()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xA8F0C0]) + 0.5); /*0x510c8b*/
  MEMORY[0xA8F0B4] = result; /*0x510c90*/
  return result; /*0x510c96*/
}


// ==== 0x00510CA0  sub_510CA0  this=-  sig=ida-proto ====
int sub_510CA0()
{
  MEMORY[0xA8F060] = 0; /*0x510ca2*/
  MEMORY[0xA8F062] = 0; /*0x510ca8*/
  return 0; /*0x510cae*/
}


// ==== 0x00510CB0  sub_510CB0  this=-  sig=ida-proto ====
int sub_510CB0()
{
  MEMORY[0xA8F080] = 0; /*0x510cb2*/
  MEMORY[0xA8F084] = 0; /*0x510cb7*/
  MEMORY[0xA8F088] = 0; /*0x510cbc*/
  return 0; /*0x510cc1*/
}


// ==== 0x00510CD0  sub_510CD0  this=-  sig=ida-proto ====
int sub_510CD0()
{
  MEMORY[0xA8F0B0] = 0; /*0x510cd5*/
  MEMORY[0xA8F0A8] = 128; /*0x510cdf*/
  MEMORY[0xA8F0AC] = 128; /*0x510ce4*/
  return 128; /*0x510ce9*/
}


// ==== 0x00510CF0  sub_510CF0  this=-  sig=ida-proto ====
int sub_510CF0()
{
  MEMORY[0xA8F050] = 0; /*0x510cf2*/
  MEMORY[0xA8F054] = 0; /*0x510cf7*/
  MEMORY[0xA8F058] = 0; /*0x510cfc*/
  MEMORY[0xA8F05C] = 0; /*0x510d01*/
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
      v4 = g_Str__Player___E_; /*0x510e6b*/
      break;
    case 4480: /*0x510e2d*/
      v4 = g_Str__Player___F_; /*0x510e7a*/
      break;
    case 4481: /*0x510e2d*/
      v4 = g_Str__Player___G_; /*0x510e89*/
      break;
    default:
      v4 = g_Str__Player___H_; /*0x510e96*/
      if ( a1 != 4482 ) /*0x510e9b*/
        v4 = &MEMORY[0x889F64]; /*0x510e9d*/
      break;
  }
  result = strlen(v4) + 1; /*0x510ea7*/
  qmemcpy(a2, v4, result); /*0x510eb6*/
  return result; /*0x510ebf*/
}


// ==== 0x00510ED0  BuildingType::FindOwnerHouse  this=BuildingType  sig=csp ====
int __thiscall BuildingType_FindOwnerHouse(void *this)
{
  int v1; // eax

  if ( this == (void *)4475 ) /*0x510ed6*/
  {
    v1 = BuildingType::Init(0); /*0x510eda*/
  }
  else if ( this == (void *)4476 ) /*0x510ee2*/
  {
    v1 = BuildingType::Init(1); /*0x510ee6*/
  }
  else if ( this == (void *)4477 ) /*0x510eee*/
  {
    v1 = BuildingType::Init(2); /*0x510ef2*/
  }
  else if ( this == (void *)4478 ) /*0x510efa*/
  {
    v1 = BuildingType::Init(3); /*0x510efe*/
  }
  else if ( this == (void *)4479 ) /*0x510f06*/
  {
    v1 = BuildingType::Init(4); /*0x510f0a*/
  }
  else if ( this == (void *)4480 ) /*0x510f12*/
  {
    v1 = BuildingType::Init(5); /*0x510f16*/
  }
  else if ( this == (void *)4481 ) /*0x510f1e*/
  {
    v1 = BuildingType::Init(6); /*0x510f22*/
  }
  else
  {
    if ( this != (void *)4482 ) /*0x510f2a*/
      return 0; /*0x510f2a*/
    v1 = BuildingType::Init(7); /*0x510f34*/
  }
  if ( v1 >= 0 && v1 < HouseClass_Count ) /*0x510f43*/
    return *((_DWORD *)HouseClass_Array + v1); /*0x510f4e*/
  return 0; /*0x510f4e*/
}


// ==== 0x00510F60  BuildingType::IsSpecialType  this=IUnknown  sig=csp ====
bool __thiscall BuildingType_IsSpecialType(void *this)
{
  return this == (void *)4475 /*0x510fa2*/
      || this == (void *)4476
      || this == (void *)4477
      || this == (void *)4478
      || this == (void *)4479
      || this == (void *)4480
      || this == (void *)4481
      || this == (void *)4482;
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
  if ( !strcmp(this, g_Str__Player___E_) ) /*0x5110c8*/
    return 4479; /*0x5110f3*/
  if ( !strcmp(this, g_Str__Player___F_) ) /*0x511109*/
    return 4480; /*0x511134*/
  if ( !strcmp(this, g_Str__Player___G_) ) /*0x51114a*/
    return 4481; /*0x511175*/
  if ( !strcmp(this, g_Str__Player___H_) ) /*0x51118b*/
    return 4482; /*0x5111b5*/
  return -1; /*0x510fed*/
}


// ==== 0x005111E0  sub_5111E0  this=-  sig=ida-proto ====
int sub_5111E0()
{
  MEMORY[0xA8F0D0] = 0; /*0x5111e2*/
  MEMORY[0xA8F0D4] = 0; /*0x5111e7*/
  MEMORY[0xA8F0D8] = 0; /*0x5111ec*/
  MEMORY[0xA8F0DC] = 0; /*0x5111f1*/
  return 0; /*0x5111f6*/
}


// ==== 0x00511200  sub_511200  this=-  sig=ida-proto ====
void sub_511200()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x51120c*/
  MEMORY[0xA8F0E8] = Math::Sqrt(v0 + v0); /*0x51121e*/
}


// ==== 0x00511230  sub_511230  this=-  sig=ida-proto ====
void sub_511230()
{
  MEMORY[0xA8F138] = MEMORY[0xA8F0E8] / 60.0; /*0x51123c*/
}


// ==== 0x00511250  sub_511250  this=-  sig=ida-proto ====
void sub_511250()
{
  MEMORY[0xA8F120] = 1.0 / MEMORY[0xA8F138]; /*0x51125c*/
}


// ==== 0x00511270  sub_511270  this=-  sig=ida-proto ====
void sub_511270()
{
  MEMORY[0xA8F118] = 0.0174532925199433 * 45.0; /*0x51127c*/
}


// ==== 0x00511290  sub_511290  this=-  sig=ida-proto ====
void sub_511290()
{
  MEMORY[0xA8F0F0] = 0.0174532925199433 * 60.0; /*0x51129c*/
}


// ==== 0x005112B0  sub_5112B0  this=-  sig=ida-proto ====
void sub_5112B0()
{
  MEMORY[0xA8F0C8] = 0.0174532925199433 * 90.0; /*0x5112bc*/
}


// ==== 0x005112D0  sub_5112D0  this=-  sig=ida-proto ====
__int64 sub_5112D0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xA8F0C8] - MEMORY[0xA8F0F0]); /*0x5112e2*/
  result = Math::RoundToInt(v0 * MEMORY[0xA8F0E8] * 0.5); /*0x5112f6*/
  MEMORY[0xA8F140] = result; /*0x5112fb*/
  return result; /*0x511300*/
}


// ==== 0x00511310  sub_511310  this=-  sig=ida-proto ====
void sub_511310()
{
  MEMORY[0xA8F0F8] = Math::ArcTan((double)MEMORY[0xA8F140] * 0.00390625); /*0x511327*/
}


// ==== 0x00511340  sub_511340  this=-  sig=ida-proto ====
void sub_511340()
{
  MEMORY[0xA8F110] = Math::ArcTan((double)(2 * MEMORY[0xA8F140]) / MEMORY[0xA8F0E8]); /*0x511362*/
}


// ==== 0x00511370  sub_511370  this=-  sig=ida-proto ====
__int64 sub_511370()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xA8F140]) + 0.5); /*0x51138b*/
  MEMORY[0xA8F134] = result; /*0x511390*/
  return result; /*0x511396*/
}


// ==== 0x005113A0  sub_5113A0  this=-  sig=ida-proto ====
int sub_5113A0()
{
  MEMORY[0xA8F0E0] = 0; /*0x5113a2*/
  MEMORY[0xA8F0E2] = 0; /*0x5113a8*/
  return 0; /*0x5113ae*/
}


// ==== 0x005113B0  sub_5113B0  this=-  sig=ida-proto ====
int sub_5113B0()
{
  MEMORY[0xA8F100] = 0; /*0x5113b2*/
  MEMORY[0xA8F104] = 0; /*0x5113b7*/
  MEMORY[0xA8F108] = 0; /*0x5113bc*/
  return 0; /*0x5113c1*/
}


// ==== 0x005113D0  sub_5113D0  this=-  sig=ida-proto ====
int sub_5113D0()
{
  MEMORY[0xA8F130] = 0; /*0x5113d5*/
  MEMORY[0xA8F128] = 128; /*0x5113df*/
  MEMORY[0xA8F12C] = 128; /*0x5113e4*/
  return 128; /*0x5113e9*/
}


// ==== 0x005113F0  SuperWeaponTypeClass::Construct  this=HouseTypeClass  sig=csp ====
_BYTE *__thiscall SuperWeaponTypeClass::Construct(_BYTE *this, AbstractClass *aP1)
{
  int v3; // ebx
  int v4; // eax
  bool v5; // zf
  int v6; // ecx
  CCINIClass *v7; // edx
  CCINIClass *v8; // ecx

  AbstractTypeClass::Constructor((int)this, aP1); /*0x5113fa*/
  v3 = 0; /*0x5113ff*/
  this->buildtimeBuildingsMult = 0; /*0x511404*/
  this->veteranAircraft = -1; /*0x51140a*/
  this->veteranAircraftCount = -1; /*0x511410*/
  this->suffix[4] = -1; /*0x511416*/
  this->airspeedMult = 0; /*0x51141c*/
  this->firepowerMult = 0; /*0x511427*/
  this->q033 = 1072693248; /*0x51142d*/
  this->groundspeedMult_e = 0; /*0x511433*/
  *((_DWORD *)this + 53) = 1072693248; /*0x511439*/
  this->airspeedMult_e = 0; /*0x51143f*/
  this->q037 = 1072693248; /*0x511445*/
  this->armorMult = 0; /*0x51144b*/
  this->q0E4 = 1072693248; /*0x511451*/
  this->q03A = 0; /*0x511457*/
  this->m_zero_3C = 0; /*0x51145d*/
  this->buildtimeMult_e = 0; /*0x511463*/
  this->q03B = 1072693248; /*0x511469*/
  this->uiNameLabel = 1072693248; /*0x51146f*/
  this->q0FC = 1072693248; /*0x511475*/
  this->rofMult = 1065353216; /*0x51148a*/
  this->armorUnitsMult_e = 1065353216; /*0x511490*/
  this->q042 = 1065353216; /*0x511496*/
  this->q043 = 1065353216; /*0x51149c*/
  this->q044 = 1065353216; /*0x5114a2*/
  this->costInfantryMult_e = 1065353216; /*0x5114a8*/
  this->costUnitsMult_e = 1065353216; /*0x5114ae*/
  this->costAircraftMult_e = 1065353216; /*0x5114b4*/
  this->costMult = 1065353216; /*0x5114ba*/
  this->q049 = 1065353216; /*0x5114c0*/
  this->q04A = 1065353216; /*0x5114c6*/
  this->currentSpeed_units_mult_e = 1065353216; /*0x5114cc*/
  this->q04C = 1065353216; /*0x5114d2*/
  this->buildtimeInfantryMult_e = 1065353216; /*0x5114d8*/
  this->buildtimeUnitsMult_e = 1065353216; /*0x5114de*/
  this->q04F = 1065353216; /*0x5114e4*/
  this->buildtimeMult = 1065353216; /*0x5114ea*/
  this->buildtimeDefensesMult_e = 1065353216; /*0x5114f0*/
  this->incomeMult_e = 1065353216; /*0x5114f6*/
  InfantryTypeVector::Construct2((_DWORD *)this + 83, 0, 0); /*0x5114fc*/
  this->armorInfantryMult = 10; /*0x511501*/
  this->veteranAircraft_e = 0; /*0x511508*/
  this->veteranInfantry_e = &vt_TypeList_InfantryTypeClass_const; /*0x51150b*/
  UnitTypeVector::ConstructUnitTypeVectorClass((_DWORD *)this + 90, 0, 0); /*0x51151b*/
  *((_DWORD *)this + 95) = 10; /*0x511520*/
  *((_DWORD *)this + 94) = 0; /*0x511527*/
  this->prefix_e = &vt_TypeList_UnitTypeClass_const; /*0x51152a*/
  AircraftTypeVector::Constructor((_DWORD *)this + 97, 0, 0); /*0x51153a*/
  this->__pad_198 = 10; /*0x511542*/
  this->q194 = 0; /*0x511549*/
  this->q184 = &vt_TypeList_AircraftTypeClass_const; /*0x51154c*/
  this->q1A4 = 65; /*0x511552*/
  this->q1A5 = 0; /*0x511559*/
  this->q1A6 = 0; /*0x51155f*/
  this->q1A7 = 1; /*0x511565*/
  this->q1A8 = 0; /*0x51156c*/
  *(_DWORD *)this = &HouseTypeClass::`vftable'; /*0x511572*/
  this->vtable2 = &HouseTypeClass::`vftable'; /*0x511578*/
  this->vtable3 = &HouseTypeClass::`vftable'; /*0x51157f*/
  this->vtable4 = &vt_HouseTypeClass; /*0x511586*/
  AbstractClass::GenerateUniqueID((int)(this + 4)); /*0x51158d*/
  this->q1A0 = 0; /*0x511592*/
  v4 = g_SuperWeaponTypeArray; /*0x511598*/
  if ( g_SuperWeaponTypeArray < dword_A83CA0 /*0x5115d6*/
    || (byte_A83CA5 || !dword_A83CA0)
    && dword_A83CAC > 0
    && (v5 = ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))dword_A83C98->field_8)(
               &dword_A83C98,
               dword_A83CA0 + dword_A83CAC,
               0) == 0,
        v4 = g_SuperWeaponTypeArray,
        !v5) )
  {
    g_SuperWeaponTypeArray = v4 + 1; /*0x5115db*/
    *((_DWORD *)g_SuperWeaponTypeCount + v4) = this; /*0x5115e5*/
    v4 = g_SuperWeaponTypeArray; /*0x5115e8*/
  }
  v6 = 0; /*0x5115ed*/
  if ( v4 <= 0 ) /*0x5115f1*/
  {
LABEL_11:
    v6 = -1; /*0x511605*/
  }
  else
  {
    v7 = (CCINIClass *)g_SuperWeaponTypeCount; /*0x5115f3*/
    while ( *(_BYTE **)v7->__pad_0 != this ) /*0x5115fb*/
    {
      ++v6; /*0x5115fd*/
      v7 = (CCINIClass *)((char *)v7 + 4); /*0x5115fe*/
      if ( v6 >= v4 ) /*0x511603*/
        goto LABEL_11; /*0x511603*/
    }
  }
  this->veteranAircraftCount = v6; /*0x511608*/
  if ( g_SuperWeaponTypeArray <= 0 ) /*0x511615*/
  {
LABEL_16:
    this->veteranAircraft = -1; /*0x511629*/
    return this; /*0x511633*/
  }
  else
  {
    v8 = (CCINIClass *)g_SuperWeaponTypeCount; /*0x511617*/
    while ( *(_BYTE **)v8->__pad_0 != this ) /*0x51161f*/
    {
      ++v3; /*0x511621*/
      v8 = (CCINIClass *)((char *)v8 + 4); /*0x511622*/
      if ( v3 >= g_SuperWeaponTypeArray ) /*0x511627*/
        goto LABEL_16; /*0x511627*/
    }
    this->veteranAircraft = v3; /*0x51163a*/
    return this; /*0x511640*/
  }
}


// ==== 0x00511650  HouseTypeClass::loadVeteranWeapons  this=HouseTypeClass  sig=csp ====
_DWORD *__thiscall HouseTypeClass::loadVeteranWeapons(_DWORD *this, HouseTypeClass *aP1)
{
  AbstractTypeClass::Init((int)this, (AbstractTypeClass *)aP1); /*0x511658*/
  this->veteranInfantry_e = &vt_TypeList_InfantryTypeClass_const; /*0x51165d*/
  this->prefix_e = &vt_TypeList_UnitTypeClass_const; /*0x511667*/
  this->q184 = &vt_TypeList_AircraftTypeClass_const; /*0x511671*/
  *this = &HouseTypeClass::`vftable'; /*0x51167b*/
  this->vtable2 = &HouseTypeClass::`vftable'; /*0x511681*/
  this->vtable3 = &HouseTypeClass::`vftable'; /*0x511688*/
  this->vtable4 = &vt_HouseTypeClass; /*0x51168f*/
  return this; /*0x511698*/
}


// ==== 0x005116A0  HouseTypeClass::Dtor  this=HouseTypeClass  sig=csp ====
int __thiscall sub_5116A0(int this)
{
  int v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  int v7; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)this = &HouseTypeClass::`vftable'; /*0x5116a7*/
  *(_DWORD *)(this + 4) = &HouseTypeClass::`vftable'; /*0x5116ad*/
  *(_DWORD *)(this + 8) = &HouseTypeClass::`vftable'; /*0x5116b4*/
  *(_DWORD *)(this + 12) = &vt_HouseTypeClass; /*0x5116bb*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x5116c2*/
  v7 = this; /*0x5116d7*/
  v2 = (*(int (__thiscall **)(int *, int *))(dword_A83C98 + 16))(&dword_A83C98, &v7); /*0x5116db*/
  if ( v2 != -1 && v2 < g_SuperWeaponTypeArray && v2 < --g_SuperWeaponTypeArray ) /*0x5116f6*/
  {
    do /*0x51170e*/
    {
      ++v2; /*0x5116fe*/
      *((_DWORD *)g_SuperWeaponTypeCount + v2 - 1) = *((_DWORD *)g_SuperWeaponTypeCount + v2); /*0x511702*/
    }
    while ( v2 < g_SuperWeaponTypeArray ); /*0x51170e*/
  }
  v3 = *(void **)(this + 392); /*0x511710*/
  *(_DWORD *)(this + 388) = &vt_VectorClass_AircraftTypeClass_const; /*0x51171a*/
  if ( v3 && *(_BYTE *)(this + 401) ) /*0x511726*/
  {
    __3_YAXPAX_Z(v3); /*0x51172f*/
    *(_DWORD *)(this + 392) = 0; /*0x511737*/
  }
  *(_BYTE *)(this + 401) = 0; /*0x51173d*/
  *(_DWORD *)(this + 396) = 0; /*0x511743*/
  v4 = *(void **)(this + 364); /*0x511749*/
  *(_DWORD *)(this + 360) = &vt_VectorClass_UnitTypeClass_const; /*0x51174f*/
  if ( v4 && *(_BYTE *)(this + 373) ) /*0x51175d*/
  {
    __3_YAXPAX_Z(v4); /*0x511766*/
    *(_DWORD *)(this + 364) = 0; /*0x51176e*/
  }
  *(_BYTE *)(this + 373) = 0; /*0x511774*/
  *(_DWORD *)(this + 368) = 0; /*0x51177a*/
  v5 = *(void **)(this + 336); /*0x511780*/
  *(_DWORD *)(this + 332) = &vt_VectorClass_InfantryTypeClass_const; /*0x511786*/
  if ( v5 && *(_BYTE *)(this + 345) ) /*0x511794*/
  {
    __3_YAXPAX_Z(v5); /*0x51179d*/
    *(_DWORD *)(this + 336) = 0; /*0x5117a5*/
  }
  *(_BYTE *)(this + 345) = 0; /*0x5117ad*/
  *(_DWORD *)(this + 340) = 0; /*0x5117b3*/
  return AbstractTypeClass::Dtor((_DWORD *)this); /*0x5117be*/
}


// ==== 0x005117D0  SuperWeaponTypeClass::FindByName  this=AbstractClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::FindByName(void *this)
{
  int v3; // ebx
  _DWORD *v4; // esi

  if ( !_strcmpi(this, &g_INI_Key_Digest.__pad_20[8]) ) /*0x5117db*/
    return -2; /*0x5117e9*/
  if ( !this ) /*0x5117f2*/
    return -1; /*0x5117f2*/
  v3 = 0; /*0x5117f9*/
  if ( g_SuperWeaponTypeArray <= 0 ) /*0x5117fd*/
    return -1; /*0x511833*/
  while ( 1 ) /*0x511805*/
  {
    v4 = (_DWORD *)*((_DWORD *)g_SuperWeaponTypeCount + v3); /*0x511805*/
    if ( !_strcmpi(v4 + 25, this) || !_strcmpi(v4 + 9, this) ) /*0x51181d*/
      break; /*0x51181d*/
    if ( ++v3 >= g_SuperWeaponTypeArray ) /*0x511831*/
      return -1; /*0x511831*/
  }
  return v4[46]; /*0x5117e7*/
}


// ==== 0x00511850  HouseTypeClass::LoadFromINI  this=HouseTypeClass  sig=csp ====
char __thiscall HouseTypeClass::LoadFromINI(int this, unsigned __int8 ***aP1)
{
  CCINIClass *v3; // esi
  double Double_Overwrite; // st7
  INIClass *aP3; // edx
  double v7; // st7
  INIClass *v8; // ecx
  double v9; // st7
  INIClass *v10; // eax
  double v11; // st7
  INIClass *v12; // edx
  double v13; // st7
  INIClass *v14; // ecx
  double v15; // st7
  INIClass *v16; // eax
  double v17; // st7
  char v18; // cl
  char Bool_Overwrite; // al
  char v20; // al
  char v21; // cl
  char v22; // al
  double v23; // st7
  char *i; // eax
  int v25; // edx
  int v26; // ecx
  void *v27; // eax
  char *j; // eax
  CCINIClass *Alt; // edi
  int v30; // eax
  int v31; // edx
  int v32; // ecx
  CCINIClass *v48; // eax
  ObjectClass *k; // eax
  CCINIClass *v50; // edi
  int v36; // eax
  int v37; // edx
  int v38; // ecx
  CCINIClass *v54; // eax
  CCINIClass *v55; // edi
  CCINIClass *CountryData; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // edx
  int v45; // eax
  int v46; // edx
  int v47; // eax
  int esi58a; // esi
  int v49; // eax
  int ecx58; // ecx
  int v51; // esi
  int v52; // ecx
  int v53; // eax
  int edx63; // edx
  char aP3_4; // [esp+4h] [ebp-F4h]
  char Destination[24]; // [esp+18h] [ebp-E0h] BYREF
  int v58; // [esp+30h] [ebp-C8h]
  INIClass aP4; // [esp+36h] [ebp-C2h] BYREF
  INIClass String[2]; // [esp+78h] [ebp-80h] BYREF

  v3 = (CCINIClass *)aP1; /*0x51185e*/
  INIClass::ResetSection(aP1); /*0x511866*/
  if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) ) /*0x51186e*/
    return 0; /*0x51215c*/
  INIClass::GetString( /*0x511892*/
    aP1,
    (INIClass *)(this + 36),
    &unk_8254AC,
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    (INIClass *)&aP4.__pad_20[2],
    4);
  if ( strlen(&aP4.__pad_20[2]) ) /*0x51189b*/
  {
    strcpy((char *)(this + 416), &aP4.__pad_20[2]); /*0x5118c3*/
    v3 = (CCINIClass *)aP1; /*0x5118cc*/
  }
  INIClass::GetString( /*0x5118e2*/
    (unsigned __int8 ***)v3,
    (INIClass *)(this + 36),
    &unk_82549C,
    (INIClass *)(this + 36),
    (INIClass *)&aP4.__pad_20[2],
    25);
  if ( &aP4 == (INIClass *)-34 ) /*0x5118ed*/
  {
    Destination[0] = (unsigned __int8)&aP4.__pad_20[2]; /*0x5118ef*/
  }
  else
  {
    strncpy(Destination, &aP4.__pad_20[2], 0x18u); /*0x511901*/
    LOBYTE(v58) = 0; /*0x511909*/
  }
  if ( Destination != (char *)(this + 152) ) /*0x51191a*/
  {
    qmemcpy((void *)(this + 152), Destination, 0x18u); /*0x511925*/
    *(_BYTE *)(this + 176) = v58; /*0x511927*/
    v3 = (CCINIClass *)aP1; /*0x511928*/
  }
  *(_DWORD *)(this + 192) = BuildingTypeClass::FindAnimByName( /*0x511942*/
                              (unsigned __int8 ***)v3,
                              (unsigned __int8 *)(this + 36),
                              (unsigned __int8 *)&stru_81B138,
                              *(_DWORD *)(this + 192));
  aP4.__pad_20[2] = *(_BYTE *)(this + 420); /*0x51195a*/
  aP4.__pad_20[3] = 0; /*0x511966*/
  INIClass::GetString( /*0x51196b*/
    (unsigned __int8 ***)v3,
    (INIClass *)(this + 36),
    &unk_825494,
    (INIClass *)&aP4.__pad_20[2],
    &aP4,
    2);
  *(_BYTE *)(this + 420) = aP4.__pad_0[0]; /*0x511974*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x511990*/
                       (int)v3,
                       (INIClass *)(this + 36),
                       aFirepower,
                       (INIClass *)*(_DWORD *)(this + 200));
  aP3 = *(INIClass **)(this + 208); /*0x51199b*/
  *(double *)(this + 200) = Double_Overwrite; /*0x5119a1*/
  v7 = INIClass::ReadDouble_Overwrite((int)v3, (INIClass *)(this + 36), &unk_825488, aP3); /*0x5119b1*/
  v8 = *(INIClass **)(this + 216); /*0x5119bc*/
  *(double *)(this + 208) = v7; /*0x5119c2*/
  v9 = INIClass::ReadDouble_Overwrite( /*0x5119d2*/
         (int)v3,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_825430.CCINIClass_field_4C,
         v8);
  v10 = *(INIClass **)(this + 224); /*0x5119dd*/
  *(double *)(this + 216) = v9; /*0x5119e3*/
  v11 = INIClass::ReadDouble_Overwrite( /*0x5119f3*/
          (int)v3,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&g_INI_Key_Speed.headNode[1],
          v10);
  v12 = *(INIClass **)(this + 232); /*0x5119fe*/
  *(double *)(this + 224) = v11; /*0x511a04*/
  v13 = INIClass::ReadDouble_Overwrite((int)v3, (INIClass *)(this + 36), (unsigned __int8 *)stru_825430.__pad_48, v12); /*0x511a14*/
  v14 = *(INIClass **)(this + 240); /*0x511a1f*/
  *(double *)(this + 232) = v13; /*0x511a25*/
  v15 = INIClass::ReadDouble_Overwrite((int)v3, (INIClass *)(this + 36), (unsigned __int8 *)&stru_825430.ownsFile, v14); /*0x511a35*/
  v16 = *(INIClass **)(this + 248); /*0x511a40*/
  *(double *)(this + 240) = v15; /*0x511a46*/
  v17 = INIClass::ReadDouble_Overwrite( /*0x511a56*/
          (int)v3,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_825430.needsSave_flag,
          v16);
  v18 = *(_BYTE *)(this + 421); /*0x511a5b*/
  *(double *)(this + 248) = v17; /*0x511a61*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x511a70*/
                     (int)v3,
                     (unsigned __int8 *)(this + 36),
                     (CCINIClass *)&stru_825430.__pad_20[8],
                     v18);
  aP3_4 = *(_BYTE *)(this + 422); /*0x511a7d*/
  *(_BYTE *)(this + 421) = Bool_Overwrite; /*0x511a84*/
  *(_BYTE *)(this + 422) = INIClass::ReadBool_Overwrite( /*0x511a8f*/
                             (int)v3,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_825430.sectionHead[1],
                             aP3_4);
  v20 = INIClass::ReadBool_Overwrite( /*0x511aa4*/
          (int)v3,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_825430.headNode[1],
          *(_BYTE *)(this + 423));
  v21 = *(_BYTE *)(this + 424); /*0x511aa9*/
  *(_BYTE *)(this + 423) = v20; /*0x511aaf*/
  v22 = INIClass::ReadBool_Overwrite((int)v3, (unsigned __int8 *)(this + 36), &stru_825430, v21); /*0x511abe*/
  v23 = *(float *)(this + 256); /*0x511ac3*/
  *(_BYTE *)(this + 424) = v22; /*0x511ace*/
  *(float *)(this + 256) = INIClass::ReadDouble_Overwrite( /*0x511ae2*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aArmorinfantrym,
                             (INIClass *)LODWORD(v23));
  *(float *)(this + 260) = INIClass::ReadDouble_Overwrite( /*0x511b01*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aArmorunitsmult,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 260)));
  *(float *)(this + 264) = INIClass::ReadDouble_Overwrite( /*0x511b20*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aArmoraircraftm,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 264)));
  *(float *)(this + 268) = INIClass::ReadDouble_Overwrite( /*0x511b3f*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aArmorbuildings,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 268)));
  *(float *)(this + 272) = INIClass::ReadDouble_Overwrite( /*0x511b5e*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aArmordefensesm,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 272)));
  *(float *)(this + 276) = INIClass::ReadDouble_Overwrite( /*0x511b7d*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aCostinfantrymu,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 276)));
  *(float *)(this + 280) = INIClass::ReadDouble_Overwrite( /*0x511b9c*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aCostunitsmult,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 280)));
  *(float *)(this + 284) = INIClass::ReadDouble_Overwrite( /*0x511bbb*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aCostaircraftmu,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 284)));
  *(float *)(this + 288) = INIClass::ReadDouble_Overwrite( /*0x511bda*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aCostbuildingsm,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 288)));
  *(float *)(this + 292) = INIClass::ReadDouble_Overwrite( /*0x511bf9*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aCostdefensesmu,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 292)));
  *(float *)(this + 296) = INIClass::ReadDouble_Overwrite( /*0x511c18*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aSpeedinfantrym,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 296)));
  *(float *)(this + 300) = INIClass::ReadDouble_Overwrite( /*0x511c37*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aSpeedunitsmult,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 300)));
  *(float *)(this + 304) = INIClass::ReadDouble_Overwrite( /*0x511c56*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aSpeedaircraftm,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 304)));
  *(float *)(this + 308) = INIClass::ReadDouble_Overwrite( /*0x511c75*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aBuildtimeinfan,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 308)));
  *(float *)(this + 312) = INIClass::ReadDouble_Overwrite( /*0x511c94*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aBuildtimeunits,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 312)));
  *(float *)(this + 316) = INIClass::ReadDouble_Overwrite( /*0x511cb3*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aBuildtimeaircr,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 316)));
  *(float *)(this + 320) = INIClass::ReadDouble_Overwrite( /*0x511cd2*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aBuildtimebuild,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 320)));
  *(float *)(this + 324) = INIClass::ReadDouble_Overwrite( /*0x511cf1*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aBuildtimedefen,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 324)));
  *(float *)(this + 328) = INIClass::ReadDouble_Overwrite( /*0x511d10*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aIncomemult,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 328)));
  if ( INIClass::GetString( /*0x511d2d*/
         (unsigned __int8 ***)v3,
         (INIClass *)(this + 36),
         aVeteraninfantr,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         String,
         128) )
  {
    InfantryTypeVector::Construct(&aP4.__pad_0[2], 0, 0); /*0x511d42*/
    *(_DWORD *)&aP4.__pad_0[2] = &vt_TypeList_InfantryTypeClass_const; /*0x511d56*/
    for ( i = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); i; i = strtok(0, MEMORY[0x817F70].__pad_0) ) /*0x511d64*/
    {
      if ( !*i ) /*0x511d66*/
        break; /*0x511d69*/
      *(int *)((char *)&aP4.sectionCount + 2) = (int)KeywordType::FindOrCreate2(i); /*0x511d74*/
      if ( *(int *)((char *)&aP4.sectionCount + 2) ) /*0x511d78*/
        InfantryTypeVector::Add(&aP4.__pad_0[2], (InfantryTypeClass *)((char *)&aP4.sectionCount + 2)); /*0x511d83*/
    }
    HouseTypeClass::readAllowedUnits(Destination, (InfantryTypeClass *)&aP4.__pad_0[2]); /*0x511da4*/
    *(_DWORD *)Destination = &vt_TypeList_InfantryTypeClass_const; /*0x511dad*/
    *(_DWORD *)&aP4.__pad_0[2] = &vt_VectorClass_InfantryTypeClass_const; /*0x511db1*/
    Vector::Cleanup((int)&aP4.__pad_0[2]); /*0x511db9*/
  }
  else
  {
    HouseTypeClass::readAllowedUnits(Destination, (InfantryTypeClass *)(this + 332)); /*0x511dcb*/
    *(_DWORD *)Destination = &vt_TypeList_InfantryTypeClass_const; /*0x511dd0*/
  }
  HouseTypeClass::readStartInfantry((_DWORD *)(this + 332), (InfantryTypeClass *)Destination); /*0x511de5*/
  v25 = *(_DWORD *)&Destination[16]; /*0x511dee*/
  v26 = v58; /*0x511df2*/
  *(_DWORD *)(this + 352) = *(_DWORD *)&Destination[20]; /*0x511df6*/
  v27 = *(void **)&Destination[4]; /*0x511df9*/
  *(_DWORD *)(this + 348) = v25; /*0x511dfd*/
  *(_DWORD *)(this + 356) = v26; /*0x511e02*/
  *(_DWORD *)Destination = &vt_VectorClass_InfantryTypeClass_const; /*0x511e05*/
  if ( v27 && Destination[13] ) /*0x511e15*/
    __3_YAXPAX_Z(v27); /*0x511e18*/
  if ( INIClass::GetString( /*0x511e3a*/
         (unsigned __int8 ***)v3,
         (INIClass *)(this + 36),
         aVeteranunits,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         String,
         128) )
  {
    UnitTypeVector::Construct(Destination, 0, 0); /*0x511e4f*/
    *(_DWORD *)Destination = &vt_TypeList_UnitTypeClass_const; /*0x511e5e*/
    for ( j = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); j; j = strtok(0, MEMORY[0x817F70].__pad_0) ) /*0x511e70*/
    {
      if ( !*j ) /*0x511e72*/
        break; /*0x511e75*/
      Alt = (CCINIClass *)BuildingTypeClass::FindOrCreateAlt(j); /*0x511e7e*/
      if ( Alt /*0x511eb1*/
        && (*(int *)&Destination[16] < *(int *)&Destination[8]
         || (Destination[13] || !*(_DWORD *)&Destination[8])
         && *(int *)&Destination[20] > 0
         && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)Destination + 8))(
              Destination,
              *(_DWORD *)&Destination[8] + *(_DWORD *)&Destination[20],
              0)) )
      {
        v30 = (*(_DWORD *)&Destination[16])++; /*0x511ebc*/
        *(_DWORD *)(*(_DWORD *)&Destination[4] + 4 * v30) = Alt; /*0x511ec7*/
      }
    }
    TypeList::CopyConstructor(&aP4.__pad_0[2], (VectorClass *)Destination); /*0x511ee6*/
    *(_DWORD *)Destination = &vt_VectorClass_UnitTypeClass_const; /*0x511eef*/
    Vector::Destructor((int)Destination); /*0x511ef7*/
  }
  else
  {
    TypeList::CopyConstructor(&aP4.__pad_0[2], (VectorClass *)(this + 360)); /*0x511f09*/
  }
  VectorClass::CopyConstructor((_DWORD *)(this + 360), (InfantryTypeClass *)&aP4.__pad_0[2]); /*0x511f1b*/
  v31 = *(int *)((char *)aP4.sectionHead + 2); /*0x511f24*/
  v32 = *(int *)((char *)&aP4.sectionHead[2] + 2); /*0x511f28*/
  *(_DWORD *)(this + 380) = *(int *)((char *)&aP4.sectionHead[1] + 2); /*0x511f2c*/
  v48 = *(CCINIClass **)((char *)aP4.headNode + 2); /*0x511f2f*/
  *(_DWORD *)(this + 376) = v31; /*0x511f33*/
  *(_DWORD *)(this + 384) = v32; /*0x511f38*/
  *(_DWORD *)&aP4.__pad_0[2] = &vt_VectorClass_UnitTypeClass_const; /*0x511f3b*/
  if ( v48 && HIBYTE(aP4.headNode[2]) ) /*0x511f4b*/
    __3_YAXPAX_Z(v48); /*0x511f4e*/
  if ( INIClass::GetString( /*0x511f70*/
         (unsigned __int8 ***)v3,
         (INIClass *)(this + 36),
         aVeteranaircraf,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         String,
         128) )
  {
    HouseTypeClass::readDefaultAlly(Destination, 0, 0); /*0x511f85*/
    *(_DWORD *)Destination = &vt_TypeList_AircraftTypeClass_const; /*0x511f94*/
    for ( k = (ObjectClass *)strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x511fa6*/
          k;
          k = (ObjectClass *)strtok(0, MEMORY[0x817F70].__pad_0) )
    {
      if ( !k->__pad_0[0] ) /*0x511fa8*/
        break; /*0x511fab*/
      v50 = (CCINIClass *)KeywordClass::FindOrCreate(k); /*0x511fb4*/
      if ( v50 /*0x511fe7*/
        && (*(int *)&Destination[16] < *(int *)&Destination[8]
         || (Destination[13] || !*(_DWORD *)&Destination[8])
         && *(int *)&Destination[20] > 0
         && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)Destination + 8))(
              Destination,
              *(_DWORD *)&Destination[8] + *(_DWORD *)&Destination[20],
              0)) )
      {
        v36 = (*(_DWORD *)&Destination[16])++; /*0x511ff2*/
        *(_DWORD *)(*(_DWORD *)&Destination[4] + 4 * v36) = v50; /*0x511ffd*/
      }
    }
    HouseTypeClass::readParaDropTypes(&aP4.__pad_0[2], (VectorClass *)Destination); /*0x51201c*/
    *(_DWORD *)Destination = &vt_VectorClass_AircraftTypeClass_const; /*0x512025*/
    VectorClass::ClearAndFree4((int)Destination); /*0x51202d*/
  }
  else
  {
    HouseTypeClass::readParaDropTypes(&aP4.__pad_0[2], (VectorClass *)(this + 388)); /*0x51203f*/
  }
  HouseTypeClass::readBaseDefense((_DWORD *)(this + 388), (VectorClass *)&aP4.__pad_0[2]); /*0x512051*/
  v37 = *(int *)((char *)aP4.sectionHead + 2); /*0x51205a*/
  v38 = *(int *)((char *)&aP4.sectionHead[2] + 2); /*0x51205e*/
  *(_DWORD *)(this + 408) = *(int *)((char *)&aP4.sectionHead[1] + 2); /*0x512062*/
  v54 = *(CCINIClass **)((char *)aP4.headNode + 2); /*0x512065*/
  *(_DWORD *)(this + 404) = v37; /*0x512069*/
  *(_DWORD *)(this + 412) = v38; /*0x51206e*/
  *(_DWORD *)&aP4.__pad_0[2] = &vt_VectorClass_AircraftTypeClass_const; /*0x512071*/
  if ( v54 && HIBYTE(aP4.headNode[2]) ) /*0x512081*/
    __3_YAXPAX_Z(v54); /*0x512084*/
  v55 = *(CCINIClass **)(this + 188); /*0x51208c*/
  CountryData = (CCINIClass *)HouseTypeClass::loadCountryData( /*0x51209e*/
                                (unsigned __int8 ***)v3,
                                (unsigned __int8 *)(this + 36),
                                (unsigned __int8 *)&stru_8172FC.unknown38,
                                (int)v55);
  *(_DWORD *)(this + 188) = CountryData; /*0x5120a5*/
  if ( CountryData != v55 ) /*0x5120ab*/
  {
    if ( v55 != (CCINIClass *)-1 ) /*0x5120b4*/
    {
      v42 = *(_DWORD *)(this + 184); /*0x5120bc*/
      v43 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62200] + 4 * (_DWORD)v55); /*0x5120c2*/
      v44 = *(_DWORD *)(v43 + 168); /*0x5120c5*/
      v45 = v43 + 152; /*0x5120cb*/
      if ( v42 < v44 ) /*0x5120d2*/
      {
        v46 = v44 - 1; /*0x5120d4*/
        for ( *(_DWORD *)(v45 + 16) = v46; /*0x5120da*/
              v42 < *(_DWORD *)(v45 + 16);
              *(_DWORD *)(*(_DWORD *)(v45 + 4) + 4 * v42 - 4) = *(_DWORD *)(*(_DWORD *)(v45 + 4) + 4 * v42) )
        {
          ++v42; /*0x5120df*/
        }
      }
    }
    v47 = *(_DWORD *)(this + 188); /*0x5120ee*/
    if ( v47 != -1 ) /*0x5120f7*/
    {
      esi58a = *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62200] + 4 * v47); /*0x5120ff*/
      v49 = *(_DWORD *)(esi58a + 160); /*0x512102*/
      ecx58 = *(_DWORD *)(esi58a + 168); /*0x512108*/
      v51 = esi58a + 152; /*0x51210e*/
      if ( ecx58 < v49 /*0x512133*/
        || (*(_BYTE *)(v51 + 13) || !v49)
        && (v52 = *(_DWORD *)(v51 + 20), v52 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v51 + 8))(v51, v52 + v49, 0) )
      {
        v53 = *(_DWORD *)(v51 + 16); /*0x51213a*/
        edx63 = *(_DWORD *)(v51 + 4); /*0x51213d*/
        *(_DWORD *)(v51 + 16) = v53 + 1; /*0x512143*/
        *(_DWORD *)(edx63 + 4 * v53) = *(_DWORD *)(this + 184); /*0x51214c*/
      }
    }
  }
  return 1; /*0x512151*/
}


// ==== 0x00512170  HouseTypeClass::ProcessPower  this=HouseTypeClass  sig=csp ====
int __thiscall HouseTypeClass::ProcessPower(int this, int *a2)
{
  int v3; // edx
  int v4; // eax

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x51217a*/
  Power::TimerProcess(*(_DWORD *)(this + 184)); /*0x512188*/
  Power::TimerProcess(*(_DWORD *)(this + 188)); /*0x512196*/
  Power::TimerProcess(*(_DWORD *)(this + 192)); /*0x5121a4*/
  Checksummer::Add_double(*(_DWORD *)(this + 200), *(_DWORD *)(this + 204)); /*0x5121b9*/
  Checksummer::Add_double(*(_DWORD *)(this + 208), *(_DWORD *)(this + 212)); /*0x5121ce*/
  Checksummer::Add_double(*(_DWORD *)(this + 216), *(_DWORD *)(this + 220)); /*0x5121e3*/
  Checksummer::Add_double(*(_DWORD *)(this + 224), *(_DWORD *)(this + 228)); /*0x5121f8*/
  Checksummer::Add_double(*(_DWORD *)(this + 232), *(_DWORD *)(this + 236)); /*0x51220d*/
  Checksummer::Add_double(*(_DWORD *)(this + 240), *(_DWORD *)(this + 244)); /*0x512222*/
  Checksummer::Add_double(*(_DWORD *)(this + 248), *(_DWORD *)(this + 252)); /*0x512237*/
  Checksummer::Add_Buffer((unsigned int *)a2, (unsigned __int8 *)(this + 416), strlen((const char *)(this + 416))); /*0x512252*/
  LOBYTE(v3) = *(_BYTE *)(this + 420); /*0x512257*/
  v4 = Power::FinalizeDrain(a2, v3); /*0x512260*/
  LOBYTE(v4) = *(_BYTE *)(this + 421); /*0x512265*/
  return Power::FlagProcess(a2, v4); /*0x512273*/
}


// ==== 0x00512280  HouseTypeClass::StubReturnFalse  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::_vt04(int a1)
{
  return 0; /*0x512282*/
}


// ==== 0x00512290  HouseTypeClass::SaveLoad_Prefix  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::SaveLoad_Prefix(_DWORD *i, int a2)
{
  _DWORD *v2; // edi
  _DWORD *v3; // ebx
  int v4; // esi
  int result; // eax
  int j; // ebx
  int k; // ebx
  int m; // esi
  int n; // esi
  int ii; // esi
  int v11; // [esp+58h] [ebp-4h] BYREF

  v2 = i; /*0x512295*/
  v3 = i + 83; /*0x51229f*/
  (*(void (__thiscall **)(_DWORD *))(i[83] + 12))(i + 83); /*0x5122a7*/
  (*(void (__thiscall **)(_DWORD *))(v2[90] + 12))(v2 + 90); /*0x5122b8*/
  (*(void (__thiscall **)(_DWORD *))(v2[97] + 12))(v2 + 97); /*0x5122c7*/
  v4 = a2; /*0x5122ca*/
  result = AbstractClass::SaveLoad_Prefix_0(v2, a2); /*0x5122d0*/
  if ( result >= 0 ) /*0x5122d7*/
  {
    if ( v2 ) /*0x5122df*/
      HouseTypeClass::loadVeteranWeapons(v2, (int)&i); /*0x5122e8*/
    if ( v3 ) /*0x5122ef*/
    {
      InfantryTypeVector::Construct(v3, 0, 0); /*0x5122f7*/
      *v3 = &vt_TypeList_InfantryTypeClass_const; /*0x5122fc*/
    }
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x51230e*/
    for ( i = 0; (int)i < a2; i = (_DWORD *)((char *)i + 1) ) /*0x51231f*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v11, 4, 0); /*0x51232d*/
      InfantryTypeVector::Add(v3, &v11); /*0x512337*/
    }
    if ( v2 != (_DWORD *)-360 ) /*0x51234f*/
    {
      UnitTypeVector::Construct(v2 + 90, 0, 0); /*0x512357*/
      v2[90] = &vt_TypeList_UnitTypeClass_const; /*0x51235c*/
    }
    (*(void (__stdcall **)(int, _DWORD **, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0); /*0x51236f*/
    for ( j = 0; j < (int)i; ++j ) /*0x51237a*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x512388*/
      VectorClass::PushBack(v2 + 90, &a2); /*0x512392*/
    }
    if ( v2 != (_DWORD *)-388 ) /*0x5123a6*/
      HouseTypeClass::readStartUnit(v2 + 97); /*0x5123aa*/
    (*(void (__stdcall **)(int, _DWORD **, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0); /*0x5123bb*/
    for ( k = 0; k < (int)i; ++k ) /*0x5123c6*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x5123d4*/
      HouseTypeClass::readPowerPlants(v2 + 97, &a2); /*0x5123de*/
    }
    for ( m = 0; m < v2[87]; ++m ) /*0x5123f4*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2[84] + 4 * m)); /*0x512405*/
    for ( n = 0; n < v2[94]; ++n ) /*0x51241f*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2[91] + 4 * n)); /*0x512430*/
    for ( ii = 0; ii < v2[101]; ++ii ) /*0x51244a*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2[98] + 4 * ii)); /*0x51245b*/
    return 0; /*0x51246b*/
  }
  return result; /*0x51246d*/
}


// ==== 0x00512480  HouseTypeClass::SaveLoad_Prefix_0  this=HouseTypeClass  sig=csp ====
int __userpurge HouseTypeClass::SaveLoad_Prefix_0@<eax>(int a1@<ebx>, int *a2, int *a3, int a4, int a5)
{
  int result; // eax
  int v6; // edx
  int i; // ebx
  int v8; // edx
  int j; // ebx
  int v10; // edx
  int k; // ebx

  result = AbstractClass::SaveLoad_Prefix(a2, a3, a4); /*0x512491*/
  if ( result >= 0 ) /*0x512498*/
  {
    v6 = *a3; /*0x5124a4*/
    a4 = a2[87]; /*0x5124b1*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD, int))(v6 + 16))(a3, &a4, 4, 0, a1); /*0x5124b5*/
    for ( i = 0; i < a5; ++i ) /*0x5124c0*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[84] + 4 * i, 4, 0); /*0x5124d3*/
    v8 = *a3; /*0x5124e3*/
    a5 = a2[94]; /*0x5124ef*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v8 + 16))(a3, &a5, 4, 0); /*0x5124f3*/
    for ( j = 0; j < a5; ++j ) /*0x5124fe*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[91] + 4 * j, 4, 0); /*0x512511*/
    v10 = *a3; /*0x512521*/
    a5 = a2[101]; /*0x51252d*/
    (*(void (__stdcall **)(int *, int *, int))(v10 + 16))(a3, &a5, 4); /*0x512531*/
    for ( k = 0; k < a4; ++k ) /*0x51253c*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[98] + 4 * k, 4, 0); /*0x51254f*/
    return 0; /*0x512559*/
  }
  return result; /*0x51255c*/
}


// ==== 0x00512570  HouseTypeClass::LoadHouse  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::_vt07(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x512576*/
    return -2147467261; /*0x512578*/
  a2[1] = 0; /*0x512580*/
  *a2 = 436; /*0x512587*/
  return 0; /*0x51257d*/
}


// ==== 0x005125A0  HouseTypeClass::QueryInterface  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::_vt00(int a1, const void *a2, _DWORD *a3)
{
  int v4; // ecx

  if ( !a3 ) /*0x5125a7*/
    return -2147467261; /*0x5125a9*/
  *a3 = 0; /*0x5125c6*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x5125d0*/
    *a3 = a1; /*0x5125d4*/
  if ( !memcmp(a2, &IID_IPersist, 0x10u) ) /*0x5125e5*/
    *a3 = a1; /*0x5125e9*/
  if ( !memcmp(a2, &IID_IPersistStream, 0x10u) ) /*0x5125f9*/
    *a3 = a1; /*0x5125fe*/
  if ( !memcmp(a2, &IID_IRTTITypeInfo, 0x10u) ) /*0x51260e*/
  {
    if ( a1 ) /*0x512616*/
      v4 = a1 + 4; /*0x512618*/
    else
      v4 = 0; /*0x51261d*/
    *a3 = v4; /*0x51261f*/
  }
  if ( !*a3 ) /*0x512621*/
    return -2147467262; /*0x512626*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x512632*/
  return 0; /*0x5125ae*/
}


// ==== 0x00512640  HouseTypeClass::GetClassIdentifier  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x512646*/
    return -2147467261; /*0x512648*/
  *a2 = 500447528; /*0x512656*/
  a2[1] = 298976363; /*0x51265e*/
  a2[2] = 1610654892; /*0x512667*/
  a2[3] = -1252326136; /*0x512670*/
  return 0; /*0x51264d*/
}


// ==== 0x00512680  WeaponTypeClass::Create  this=ObjectClass  sig=csp ====
HouseTypeClass *__thiscall WeaponTypeClass::Create(AbstractClass *Source)
{
  int v2; // esi
  _BYTE *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x51269c*/
    return 0; /*0x5126ff*/
  v2 = 0; /*0x5126ad*/
  if ( g_SuperWeaponTypeArray <= 0 ) /*0x5126b1*/
  {
LABEL_6:
    v3 = (_BYTE *)__2_YAPAXI_Z(0x1B0u); /*0x5126d6*/
    if ( v3 ) /*0x5126e5*/
      return (HouseTypeClass *)SuperWeaponTypeClass::Construct(v3, Source); /*0x5126f1*/
    return 0; /*0x5126e5*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)g_SuperWeaponTypeCount + v2) + 36), Source) ) /*0x5126ca*/
  {
    if ( ++v2 >= g_SuperWeaponTypeArray ) /*0x5126d4*/
      goto LABEL_6; /*0x5126d4*/
  }
  return (HouseTypeClass *)*((_DWORD *)g_SuperWeaponTypeCount + v2); /*0x5126ef*/
}


// ==== 0x00512710  HouseTypeClass::GetTypeIdentifier  this=HouseTypeClass  sig=csp ====
int HouseTypeClass::_vt11()
{
  return 14; /*0x512715*/
}


// ==== 0x00512720  HouseTypeClass::GetObjectSize  this=HouseTypeClass  sig=csp ====
int HouseTypeClass::_vt12()
{
  return 432; /*0x512725*/
}


// ==== 0x00512730  HouseTypeClass::loadBuildLimits  this=HouseTypeClass  sig=csp ====
unsigned int __thiscall HouseTypeClass::loadBuildLimits(Concurrency::details::SchedulerProxy *this)
{
  return this->veteranAircraft; /*0x512736*/
}


// ==== 0x00512740  HouseTypeClass::AddRef  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::_vt01(int a1)
{
  return 1; /*0x512745*/
}


// ==== 0x00512750  HouseTypeClass::Release  this=HouseTypeClass  sig=csp ====
int __stdcall HouseTypeClass::_vt02(int a1)
{
  return 1; /*0x512755*/
}


// ==== 0x00512760  HouseTypeClass::Destructor  this=HouseTypeClass  sig=csp ====
HouseTypeClass *__thiscall HouseTypeClass::Destructor(void **Block, char a2)
{
  int v3; // eax
  UnitTypeClass *v4; // eax
  void *v5; // eax
  void *v6; // eax
  void **v8; // [esp+4h] [ebp-4h] BYREF

  *Block = &HouseTypeClass::`vftable'; /*0x512766*/
  *(Block + 1) = &HouseTypeClass::`vftable'; /*0x51276c*/
  *(Block + 2) = &HouseTypeClass::`vftable'; /*0x512773*/
  *(Block + 3) = &vt_HouseTypeClass; /*0x51277a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x512781*/
  v8 = Block; /*0x512796*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_A83C98 + 16))(&dword_A83C98, &v8); /*0x51279a*/
  if ( v3 != -1 && v3 < g_SuperWeaponTypeArray && v3 < --g_SuperWeaponTypeArray ) /*0x5127b5*/
  {
    do /*0x5127cd*/
    {
      ++v3; /*0x5127bd*/
      *((_DWORD *)g_SuperWeaponTypeCount + v3 - 1) = *((_DWORD *)g_SuperWeaponTypeCount + v3); /*0x5127c1*/
    }
    while ( v3 < g_SuperWeaponTypeArray ); /*0x5127cd*/
  }
  v4 = (UnitTypeClass *)*(Block + 98); /*0x5127cf*/
  *(Block + 97) = &vt_VectorClass_AircraftTypeClass_const; /*0x5127d8*/
  if ( v4 && *((_BYTE *)Block + 401) ) /*0x5127e6*/
  {
    __3_YAXPAX_Z(v4); /*0x5127ef*/
    *(Block + 98) = 0; /*0x5127f7*/
  }
  *((_BYTE *)Block + 401) = 0; /*0x5127fd*/
  *(Block + 99) = 0; /*0x512803*/
  v5 = *(Block + 91); /*0x512809*/
  *(Block + 90) = &vt_VectorClass_UnitTypeClass_const; /*0x51280f*/
  if ( v5 && *((_BYTE *)Block + 373) ) /*0x51281d*/
  {
    __3_YAXPAX_Z(v5); /*0x512826*/
    *(Block + 91) = 0; /*0x51282e*/
  }
  *((_BYTE *)Block + 373) = 0; /*0x512834*/
  *(Block + 92) = 0; /*0x51283a*/
  v6 = *(Block + 84); /*0x512840*/
  *(Block + 83) = &vt_VectorClass_InfantryTypeClass_const; /*0x512846*/
  if ( v6 && *((_BYTE *)Block + 345) ) /*0x512854*/
  {
    __3_YAXPAX_Z(v6); /*0x51285d*/
    *(Block + 84) = 0; /*0x512865*/
  }
  *((_BYTE *)Block + 345) = 0; /*0x51286d*/
  *(Block + 85) = 0; /*0x512873*/
  AbstractTypeClass::Dtor(Block); /*0x512879*/
  if ( (a2 & 1) != 0 ) /*0x512885*/
    __3_YAXPAX_Z(Block); /*0x512888*/
  return (HouseTypeClass *)Block; /*0x512892*/
}


// ==== 0x005128A0  _DynamicVectorClass_PBVInfantryTypeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall TypeList_Infantry::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5128a6*/
  *(_DWORD *)(this + 16) = 0; /*0x5128a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5128b0*/
  {
    __3_YAXPAX_Z(v2); /*0x5128b6*/
    *(_DWORD *)(this + 4) = 0; /*0x5128be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5128c1*/
  *(_DWORD *)(this + 8) = 0; /*0x5128c4*/
}


// ==== 0x005128D0  _DynamicVectorClass_PBVInfantryTypeClass::GetIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall TypeList_Infantry::GetIndex(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5128d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5128e5*/
  else
    return 0; /*0x5128d7*/
}


// ==== 0x005128F0  _VectorClass_PBVInfantryTypeClass::Clear  this=VectorClass  sig=csp ====
int __thiscall TypeList_Infantry::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5128fa*/
}


// ==== 0x00512900  _DynamicVectorClass_PBVUnitTypeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall HouseTypeClass_36_::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x512906*/
  *(_DWORD *)(this + 16) = 0; /*0x512909*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x512910*/
  {
    __3_YAXPAX_Z(v2); /*0x512916*/
    *(_DWORD *)(this + 4) = 0; /*0x51291e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x512921*/
  *(_DWORD *)(this + 8) = 0; /*0x512924*/
}


// ==== 0x00512930  _DynamicVectorClass_PBVUnitTypeClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall HouseTypeClass_36_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x512930*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x512945*/
  else
    return 0; /*0x512937*/
}


// ==== 0x00512950  _VectorClass_PBVUnitTypeClass::Seek  this=VectorClass  sig=csp ====
int __thiscall HouseTypeClass_36_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x51295a*/
}


// ==== 0x00512960  HouseTypeClass::readStartUnit  this=TypeList  sig=csp ====
_DWORD *__thiscall sub_512960(_DWORD *this)
{
  this->Items = 0; /*0x512964*/
  this->Capacity = 0; /*0x512967*/
  this->IsInitialized = 1; /*0x51296a*/
  this->IsAllocated = 0; /*0x51296e*/
  this->CapacityIncrement = 10; /*0x512971*/
  this->Count = 0; /*0x512978*/
  *this = &vt_TypeList_AircraftTypeClass_const; /*0x51297b*/
  return this; /*0x512981*/
}


// ==== 0x00512990  _DynamicVectorClass_PBVAircraftTypeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall HouseTypeClass_28_::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x512996*/
  *(_DWORD *)(this + 16) = 0; /*0x512999*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5129a0*/
  {
    __3_YAXPAX_Z(v2); /*0x5129a6*/
    *(_DWORD *)(this + 4) = 0; /*0x5129ae*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5129b1*/
  *(_DWORD *)(this + 8) = 0; /*0x5129b4*/
}


// ==== 0x005129C0  _DynamicVectorClass_PBVAircraftTypeClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall HouseTypeClass_28_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5129c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5129d5*/
  else
    return 0; /*0x5129c7*/
}


// ==== 0x005129E0  _VectorClass_PBVAircraftTypeClass::Seek  this=VectorClass  sig=csp ====
int __thiscall HouseTypeClass_28_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5129ea*/
}


// ==== 0x005129F0  _TypeList_PBVInfantryTypeClass::Add  this=TypeList  sig=csp ====
TypeList *__thiscall TypeList_Infantry::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5129f3*/
  *Block = &vt_VectorClass_InfantryTypeClass_const; /*0x5129f6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x512a00*/
  {
    __3_YAXPAX_Z(v3); /*0x512a08*/
    *(Block + 1) = 0; /*0x512a10*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x512a1b*/
  *(Block + 2) = 0; /*0x512a21*/
  if ( (a2 & 1) != 0 ) /*0x512a28*/
    __3_YAXPAX_Z(Block); /*0x512a2b*/
  return (TypeList *)Block; /*0x512a35*/
}


// ==== 0x00512A40  _TypeList_PBVUnitTypeClass::QueryInterface  this=TypeList  sig=csp ====
TypeList *__thiscall HouseTypeClass_36_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x512a43*/
  *Block = &vt_VectorClass_UnitTypeClass_const; /*0x512a46*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x512a50*/
  {
    __3_YAXPAX_Z(v3); /*0x512a58*/
    *(Block + 1) = 0; /*0x512a60*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x512a6b*/
  *(Block + 2) = 0; /*0x512a71*/
  if ( (a2 & 1) != 0 ) /*0x512a78*/
    __3_YAXPAX_Z(Block); /*0x512a7b*/
  return (TypeList *)Block; /*0x512a85*/
}


// ==== 0x00512A90  _TypeList_PBVAircraftTypeClass::QueryInterface  this=TypeList  sig=csp ====
TypeList *__thiscall HouseTypeClass_28_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x512a93*/
  *Block = &vt_VectorClass_AircraftTypeClass_const; /*0x512a96*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x512aa0*/
  {
    __3_YAXPAX_Z(v3); /*0x512aa8*/
    *(Block + 1) = 0; /*0x512ab0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x512abb*/
  *(Block + 2) = 0; /*0x512ac1*/
  if ( (a2 & 1) != 0 ) /*0x512ac8*/
    __3_YAXPAX_Z(Block); /*0x512acb*/
  return (TypeList *)Block; /*0x512ad5*/
}


// ==== 0x00512AE0  _VectorClass_PBVInfantryTypeClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall InfantryTypeVector::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x512ae3*/
  *Block = &vt_VectorClass_InfantryTypeClass_const; /*0x512ae6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x512af0*/
  {
    __3_YAXPAX_Z(v3); /*0x512af8*/
    *(Block + 1) = 0; /*0x512b00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x512b0b*/
  *(Block + 2) = 0; /*0x512b11*/
  if ( (a2 & 1) != 0 ) /*0x512b18*/
    __3_YAXPAX_Z(Block); /*0x512b1b*/
  return (VectorClass *)Block; /*0x512b25*/
}


// ==== 0x00512B30  _VectorClass_PBVUnitTypeClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall UnitTypeVector::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x512b33*/
  *Block = &vt_VectorClass_UnitTypeClass_const; /*0x512b36*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x512b40*/
  {
    __3_YAXPAX_Z(v3); /*0x512b48*/
    *(Block + 1) = 0; /*0x512b50*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x512b5b*/
  *(Block + 2) = 0; /*0x512b61*/
  if ( (a2 & 1) != 0 ) /*0x512b68*/
    __3_YAXPAX_Z(Block); /*0x512b6b*/
  return (VectorClass *)Block; /*0x512b75*/
}


// ==== 0x00512B80  _VectorClass_PBVAircraftTypeClass::Constructor  this=VectorClass  sig=csp ====
VectorClass *__thiscall HouseTypeClass_36_::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x512b83*/
  *Block = &vt_VectorClass_AircraftTypeClass_const; /*0x512b86*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x512b90*/
  {
    __3_YAXPAX_Z(v3); /*0x512b98*/
    *(Block + 1) = 0; /*0x512ba0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x512bab*/
  *(Block + 2) = 0; /*0x512bb1*/
  if ( (a2 & 1) != 0 ) /*0x512bb8*/
    __3_YAXPAX_Z(Block); /*0x512bbb*/
  return (VectorClass *)Block; /*0x512bc5*/
}


// ==== 0x00512BD0  HouseTypeClass::readStartInfantry  this=InfantryTypeClass  sig=csp ====
_DWORD *__thiscall HouseTypeClass::readStartInfantry(_DWORD *this, InfantryTypeClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (_DWORD *)aP1 ) /*0x512bda*/
    return this; /*0x512bda*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x512bde*/
  v3 = *(_DWORD *)&aP1->vtable0[8]; /*0x512be1*/
  this->vtable3 = v3; /*0x512be6*/
  if ( !v3 ) /*0x512be9*/
  {
    this->vtable2 = 0; /*0x512c2a*/
    *((_BYTE *)this + 13) = 0; /*0x512c31*/
    return this; /*0x512c35*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x512bf3*/
  this->vtable2 = v4; /*0x512bfb*/
  if ( !v4 ) /*0x512c00*/
    return this; /*0x512c00*/
  v5 = this->vtable3; /*0x512c02*/
  v6 = 0; /*0x512c05*/
  *((_BYTE *)this + 13) = 1; /*0x512c09*/
  if ( v5 <= 0 ) /*0x512c0d*/
    return this; /*0x512c0d*/
  do /*0x512c21*/
  {
    *(_DWORD *)(this->vtable2 + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->vtable0[4] + 4 * v6); /*0x512c18*/
    ++v6; /*0x512c1e*/
  }
  while ( v6 < this->vtable3 ); /*0x512c21*/
  return this; /*0x512c25*/
}


// ==== 0x00512C40  _VectorClass_PBVInfantryTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TypeList_Infantry::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x512c42*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x512c4d*/
  {
    v3 = 0; /*0x512c4f*/
    if ( v2 <= 0 ) /*0x512c53*/
      return 1; /*0x512c73*/
    v4 = (_DWORD *)this->Items; /*0x512c55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x512c5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x512c64*/
    {
      ++v3; /*0x512c66*/
      ++v4; /*0x512c67*/
      if ( v3 >= v2 ) /*0x512c6c*/
        return 1; /*0x512c6c*/
    }
  }
  return 0; /*0x512c6e*/
}


// ==== 0x00512C80  _VectorClass_PBVInfantryTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall InfantryTypeVector::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x512c8c*/
  {
    this->IsInitialized = 0; /*0x512c96*/
    if ( a3 ) /*0x512c9c*/
      v4 = a3; /*0x512cb2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x512cae*/
    this->IsInitialized = 1; /*0x512cb6*/
    if ( v4 ) /*0x512cba*/
    {
      if ( this->Items ) /*0x512cc5*/
      {
        v6 = this->Capacity; /*0x512ccc*/
        if ( a2 < v6 ) /*0x512cd1*/
          v6 = a2; /*0x512cd3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x512cd9*/
          ++i; /*0x512cde*/
        if ( this->IsAllocated ) /*0x512ceb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x512cf6*/
          this->Items = 0; /*0x512cfe*/
        }
      }
      this->Items = v4; /*0x512d07*/
      this->Capacity = a2; /*0x512d0f*/
      this->IsAllocated = a3 == 0; /*0x512d12*/
      return 1; /*0x512d18*/
    }
    else
    {
      return 0; /*0x512cbf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x512d22*/
    return 1; /*0x512d28*/
  }
}


// ==== 0x00512D30  _VectorClass_PBVInfantryTypeClass::Cleanup  this=VectorClass  sig=csp ====
void __thiscall Vector_Cleanup(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x512d3d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x512d43*/
    *(_DWORD *)(this + 4) = 0; /*0x512d4b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x512d4e*/
  *(_DWORD *)(this + 8) = 0; /*0x512d51*/
}


// ==== 0x00512D60  _VectorClass_PBVInfantryTypeClass::AddType  this=VectorClass  sig=csp ====
int __thiscall InfantryTypeVector::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x512d60*/
    return 0; /*0x512d68*/
  v3 = *(_DWORD *)(this + 8); /*0x512d6e*/
  result = 0; /*0x512d71*/
  if ( v3 <= 0 ) /*0x512d75*/
    return -1; /*0x512d8c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x512d7b*/
  {
    if ( ++result >= v3 ) /*0x512d8a*/
      return -1; /*0x512d8a*/
  }
  return result; /*0x512d6a*/
}


// ==== 0x00512DA0  _VectorClass_PBVInfantryTypeClass::Remove  this=VectorClass  sig=csp ====
unsigned int __thiscall InfantryTypeVector::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x512da0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x512db5*/
  else
    return 0; /*0x512da7*/
}


// ==== 0x00512DC0  InfantryTypeVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall InfantryTypeVector_Constructor(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x512dc9*/
  this->Capacity = a2; /*0x512dd0*/
  this->q030 = 1; /*0x512dd3*/
  this->__pad_034 = 0; /*0x512dd7*/
  *this = &vt_VectorClass_InfantryTypeClass_const; /*0x512ddb*/
  if ( a2 ) /*0x512de1*/
  {
    if ( a3 ) /*0x512de9*/
    {
      this->Items = a3; /*0x512deb*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x512dfc*/
      this->__pad_034 = 1; /*0x512dff*/
    }
  }
  *this = &vt_DynamicVectorClass_InfantryTypeClass_const; /*0x512e03*/
  this->q005 = 10; /*0x512e09*/
  this->q010 = 0; /*0x512e10*/
  return this; /*0x512e19*/
}


// ==== 0x00512E20  _DynamicVectorClass_PBVInfantryTypeClass::Constructor  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall TypeList_Infantry::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x512e23*/
  *Block = &vt_VectorClass_InfantryTypeClass_const; /*0x512e26*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x512e30*/
  {
    __3_YAXPAX_Z(v3); /*0x512e38*/
    *(Block + 1) = 0; /*0x512e40*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x512e4b*/
  *(Block + 2) = 0; /*0x512e51*/
  if ( (a2 & 1) != 0 ) /*0x512e58*/
    __3_YAXPAX_Z(Block); /*0x512e5b*/
  return (DynamicVector *)Block; /*0x512e65*/
}


// ==== 0x00512E70  _DynamicVectorClass_PBVInfantryTypeClass::Remove  this=DynamicVector  sig=csp ====
char __thiscall TypeList_Infantry::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x512e7c*/
  {
    this->IsInitialized = 0; /*0x512e82*/
    if ( a3 ) /*0x512e88*/
      v4 = a3; /*0x512e9e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x512e9a*/
    this->IsInitialized = 1; /*0x512ea2*/
    if ( !v4 ) /*0x512ea6*/
      return 0; /*0x512f1a*/
    if ( this->Items ) /*0x512ea8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x512eaf*/
      if ( a2 < v5 ) /*0x512eb4*/
        v5 = a2; /*0x512eb6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x512ebc*/
        ++i; /*0x512ec1*/
      if ( this->IsAllocated ) /*0x512ece*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x512ed9*/
        this->Items = 0; /*0x512ee1*/
      }
    }
    this->Items = v4; /*0x512eea*/
    this->DynamicVector_field_0x8 = a2; /*0x512ef2*/
    this->IsAllocated = a3 == 0; /*0x512ef5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x512efe*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x512f01*/
  if ( v7 < this->Items ) /*0x512f09*/
    this->Items = v7; /*0x512f0b*/
  return 1; /*0x512f0e*/
}


// ==== 0x00512F20  InfantryTypeVector::Add  this=VectorClass  sig=csp ====
char __thiscall InfantryTypeVector::Add(_DWORD *this, InfantryTypeClass *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->Capacity; /*0x512f23*/
  if ( this->q010 >= v3 ) /*0x512f2b*/
  {
    if ( !this->__pad_034 && v3 ) /*0x512f36*/
      return 0; /*0x512f36*/
    v4 = this->q005; /*0x512f38*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x512f48*/
      return 0; /*0x512f4f*/
  }
  v6 = this->q010; /*0x512f55*/
  v7 = this->Items; /*0x512f58*/
  this->q010 = v6 + 1; /*0x512f5e*/
  *(_DWORD *)(v7 + 4 * v6) = *(_DWORD *)aP1->vtable0; /*0x512f68*/
  return 1; /*0x512f51*/
}


// ==== 0x00512F70  _DynamicVectorClass_PBVInfantryTypeClass::GetSize  this=DynamicVector  sig=csp ====
int __thiscall TypeList_Infantry::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x512f70*/
  result = 0; /*0x512f73*/
  if ( v2 <= 0 ) /*0x512f78*/
    return -1; /*0x512f8f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x512f7e*/
  {
    if ( ++result >= v2 ) /*0x512f8d*/
      return -1; /*0x512f8d*/
  }
  return result; /*0x512f92*/
}


// ==== 0x00512FA0  VectorClass::CopyConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CopyConstructor(_DWORD *this, InfantryTypeClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (_DWORD *)aP1 ) /*0x512faa*/
    return this; /*0x512faa*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x512fae*/
  v3 = *(_DWORD *)&aP1->__pad_0[8]; /*0x512fb1*/
  this->Capacity = v3; /*0x512fb6*/
  if ( !v3 ) /*0x512fb9*/
  {
    this->Items = 0; /*0x512ffa*/
    this->__pad_034 = 0; /*0x513001*/
    return this; /*0x513005*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x512fc3*/
  this->Items = v4; /*0x512fcb*/
  if ( !v4 ) /*0x512fd0*/
    return this; /*0x512fd0*/
  v5 = this->Capacity; /*0x512fd2*/
  v6 = 0; /*0x512fd5*/
  this->__pad_034 = 1; /*0x512fd9*/
  if ( v5 <= 0 ) /*0x512fdd*/
    return this; /*0x512fdd*/
  do /*0x512ff1*/
  {
    *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->__pad_0[4] + 4 * v6); /*0x512fe8*/
    ++v6; /*0x512fee*/
  }
  while ( v6 < this->Capacity ); /*0x512ff1*/
  return this; /*0x512ff5*/
}


// ==== 0x00513010  _VectorClass_PBVUnitTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall HouseTypeClass_36_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x513012*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x51301d*/
  {
    v3 = 0; /*0x51301f*/
    if ( v2 <= 0 ) /*0x513023*/
      return 1; /*0x513043*/
    v4 = (_DWORD *)this->Items; /*0x513025*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x51302b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x513034*/
    {
      ++v3; /*0x513036*/
      ++v4; /*0x513037*/
      if ( v3 >= v2 ) /*0x51303c*/
        return 1; /*0x51303c*/
    }
  }
  return 0; /*0x51303e*/
}


// ==== 0x00513050  _VectorClass_PBVUnitTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall UnitTypeVector::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x51305c*/
  {
    this->IsInitialized = 0; /*0x513066*/
    if ( a3 ) /*0x51306c*/
      v4 = a3; /*0x513082*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x51307e*/
    this->IsInitialized = 1; /*0x513086*/
    if ( v4 ) /*0x51308a*/
    {
      if ( this->Items ) /*0x513095*/
      {
        v6 = this->Capacity; /*0x51309c*/
        if ( a2 < v6 ) /*0x5130a1*/
          v6 = a2; /*0x5130a3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5130a9*/
          ++i; /*0x5130ae*/
        if ( this->IsAllocated ) /*0x5130bb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5130c6*/
          this->Items = 0; /*0x5130ce*/
        }
      }
      this->Items = v4; /*0x5130d7*/
      this->Capacity = a2; /*0x5130df*/
      this->IsAllocated = a3 == 0; /*0x5130e2*/
      return 1; /*0x5130e8*/
    }
    else
    {
      return 0; /*0x51308f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5130f2*/
    return 1; /*0x5130f8*/
  }
}


// ==== 0x00513100  _VectorClass_PBVUnitTypeClass::Destructor  this=VectorClass  sig=csp ====
void __thiscall Vector_Destructor(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x51310d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x513113*/
    *(_DWORD *)(this + 4) = 0; /*0x51311b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x51311e*/
  *(_DWORD *)(this + 8) = 0; /*0x513121*/
}


// ==== 0x00513130  _VectorClass_PBVUnitTypeClass::Add  this=VectorClass  sig=csp ====
int __thiscall UnitTypeVector::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x513130*/
    return 0; /*0x513138*/
  v3 = *(_DWORD *)(this + 8); /*0x51313e*/
  result = 0; /*0x513141*/
  if ( v3 <= 0 ) /*0x513145*/
    return -1; /*0x51315c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x51314b*/
  {
    if ( ++result >= v3 ) /*0x51315a*/
      return -1; /*0x51315a*/
  }
  return result; /*0x51313a*/
}


// ==== 0x00513170  _VectorClass_PBVUnitTypeClass::Remove  this=VectorClass  sig=csp ====
unsigned int __thiscall UnitTypeVector::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x513170*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x513185*/
  else
    return 0; /*0x513177*/
}


// ==== 0x00513190  UnitTypeVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall UnitTypeVector_Constructor(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x513199*/
  this->Capacity = a2; /*0x5131a0*/
  this->q030 = 1; /*0x5131a3*/
  this->__pad_034 = 0; /*0x5131a7*/
  *this = &vt_VectorClass_UnitTypeClass_const; /*0x5131ab*/
  if ( a2 ) /*0x5131b1*/
  {
    if ( a3 ) /*0x5131b9*/
    {
      this->Items = a3; /*0x5131bb*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x5131cc*/
      this->__pad_034 = 1; /*0x5131cf*/
    }
  }
  *this = &DynamicVectorClass<UnitTypeClass const *>::`vftable'; /*0x5131d3*/
  this->q005 = 10; /*0x5131d9*/
  this->q010 = 0; /*0x5131e0*/
  return this; /*0x5131e9*/
}


// ==== 0x005131F0  _DynamicVectorClass_PBVUnitTypeClass::Constructor_0  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall TypeList_Infantry::Constructor_0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5131f3*/
  *Block = &vt_VectorClass_UnitTypeClass_const; /*0x5131f6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x513200*/
  {
    __3_YAXPAX_Z(v3); /*0x513208*/
    *(Block + 1) = 0; /*0x513210*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x51321b*/
  *(Block + 2) = 0; /*0x513221*/
  if ( (a2 & 1) != 0 ) /*0x513228*/
    __3_YAXPAX_Z(Block); /*0x51322b*/
  return (DynamicVector *)Block; /*0x513235*/
}


// ==== 0x00513240  _DynamicVectorClass_PBVUnitTypeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall HouseTypeClass_36_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x51324c*/
  {
    this->IsInitialized = 0; /*0x513252*/
    if ( a3 ) /*0x513258*/
      v4 = a3; /*0x51326e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x51326a*/
    this->IsInitialized = 1; /*0x513272*/
    if ( !v4 ) /*0x513276*/
      return 0; /*0x5132ea*/
    if ( this->Items ) /*0x513278*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x51327f*/
      if ( a2 < v5 ) /*0x513284*/
        v5 = a2; /*0x513286*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x51328c*/
        ++i; /*0x513291*/
      if ( this->IsAllocated ) /*0x51329e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5132a9*/
        this->Items = 0; /*0x5132b1*/
      }
    }
    this->Items = v4; /*0x5132ba*/
    this->DynamicVector_field_0x8 = a2; /*0x5132c2*/
    this->IsAllocated = a3 == 0; /*0x5132c5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5132ce*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5132d1*/
  if ( v7 < this->Items ) /*0x5132d9*/
    this->Items = v7; /*0x5132db*/
  return 1; /*0x5132de*/
}


// ==== 0x005132F0  VectorClass::PushBack  this=VectorClass  sig=csp ====
char __thiscall VectorClass::PushBack(_DWORD *this, VectorClass *aP1)
{
  MapClass *v3; // ecx
  int v4; // eax
  int v6; // eax
  VectorClass *v7; // edx

  v3 = (MapClass *)this->Capacity; /*0x5132f3*/
  if ( this->q010 >= (int)v3 ) /*0x5132fb*/
  {
    if ( !this->__pad_034 && v3 ) /*0x513306*/
      return 0; /*0x513306*/
    v4 = this->q005; /*0x513308*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, char *, _DWORD))(*this + 8))(this, (char *)v3 + v4, 0) ) /*0x513318*/
      return 0; /*0x51331f*/
  }
  v6 = this->q010; /*0x513325*/
  v7 = (VectorClass *)this->Items; /*0x513328*/
  this->q010 = v6 + 1; /*0x51332e*/
  *(_DWORD *)&v7->vtable0[4 * v6] = *(_DWORD *)aP1->vtable0; /*0x513338*/
  return 1; /*0x513321*/
}


// ==== 0x00513340  _DynamicVectorClass_PBVUnitTypeClass::Read  this=DynamicVector  sig=csp ====
int __thiscall HouseTypeClass_36_::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x513340*/
  result = 0; /*0x513343*/
  if ( v2 <= 0 ) /*0x513348*/
    return -1; /*0x51335f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x51334e*/
  {
    if ( ++result >= v2 ) /*0x51335d*/
      return -1; /*0x51335d*/
  }
  return result; /*0x513362*/
}


// ==== 0x00513370  HouseTypeClass::readBaseDefense  this=VectorClass  sig=csp ====
_DWORD *__thiscall HouseTypeClass::readBaseDefense(_DWORD *this, VectorClass *aP1)
{
  void *v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (_DWORD *)aP1 ) /*0x51337a*/
    return this; /*0x51337a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x51337e*/
  v3 = aP1->Capacity; /*0x513381*/
  this->Capacity = v3; /*0x513386*/
  if ( !v3 ) /*0x513389*/
  {
    this->Items = 0; /*0x5133ca*/
    this->__pad_034 = 0; /*0x5133d1*/
    return this; /*0x5133d5*/
  }
  v4 = __2_YAPAXI_Z(4 * (_DWORD)v3); /*0x513393*/
  this->Items = v4; /*0x51339b*/
  if ( !v4 ) /*0x5133a0*/
    return this; /*0x5133a0*/
  v5 = this->Capacity; /*0x5133a2*/
  v6 = 0; /*0x5133a5*/
  this->__pad_034 = 1; /*0x5133a9*/
  if ( v5 <= 0 ) /*0x5133ad*/
    return this; /*0x5133ad*/
  do /*0x5133c1*/
  {
    *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->?[3] + 4 * v6); /*0x5133b8*/
    ++v6; /*0x5133be*/
  }
  while ( v6 < this->Capacity ); /*0x5133c1*/
  return this; /*0x5133c5*/
}


// ==== 0x005133E0  _VectorClass_PBVAircraftTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall HouseTypeClass_28_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x5133e2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5133ed*/
  {
    v3 = 0; /*0x5133ef*/
    if ( v2 <= 0 ) /*0x5133f3*/
      return 1; /*0x513413*/
    v4 = (_DWORD *)this->Items; /*0x5133f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5133fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x513404*/
    {
      ++v3; /*0x513406*/
      ++v4; /*0x513407*/
      if ( v3 >= v2 ) /*0x51340c*/
        return 1; /*0x51340c*/
    }
  }
  return 0; /*0x51340e*/
}


// ==== 0x00513420  _VectorClass_PBVAircraftTypeClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall HouseTypeClass_36_::sub_513420(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x51342c*/
  {
    this->IsInitialized = 0; /*0x513436*/
    if ( a3 ) /*0x51343c*/
      v4 = a3; /*0x513452*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x51344e*/
    this->IsInitialized = 1; /*0x513456*/
    if ( v4 ) /*0x51345a*/
    {
      if ( this->Items ) /*0x513465*/
      {
        v6 = this->Capacity; /*0x51346c*/
        if ( a2 < v6 ) /*0x513471*/
          v6 = a2; /*0x513473*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x513479*/
          ++i; /*0x51347e*/
        if ( this->IsAllocated ) /*0x51348b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x513496*/
          this->Items = 0; /*0x51349e*/
        }
      }
      this->Items = v4; /*0x5134a7*/
      this->Capacity = a2; /*0x5134af*/
      this->IsAllocated = a3 == 0; /*0x5134b2*/
      return 1; /*0x5134b8*/
    }
    else
    {
      return 0; /*0x51345f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5134c2*/
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
int __thiscall HouseTypeClass_36_::sub_513500(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x513500*/
    return 0; /*0x513508*/
  v3 = *(_DWORD *)(this + 8); /*0x51350e*/
  result = 0; /*0x513511*/
  if ( v3 <= 0 ) /*0x513515*/
    return -1; /*0x51352c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x51351b*/
  {
    if ( ++result >= v3 ) /*0x51352a*/
      return -1; /*0x51352a*/
  }
  return result; /*0x51350a*/
}


// ==== 0x00513540  _VectorClass_PBVAircraftTypeClass::PointerToIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall HouseTypeClass_36_::sub_513540(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x513540*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x513555*/
  else
    return 0; /*0x513547*/
}


// ==== 0x00513560  HouseTypeClass::readDefaultAlly  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_513560(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x513569*/
  this->Capacity = a2; /*0x513570*/
  this->q030 = 1; /*0x513573*/
  this->__pad_034 = 0; /*0x513577*/
  *this = &vt_VectorClass_AircraftTypeClass_const; /*0x51357b*/
  if ( a2 ) /*0x513581*/
  {
    if ( a3 ) /*0x513589*/
    {
      this->Items = a3; /*0x51358b*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x51359c*/
      this->__pad_034 = 1; /*0x51359f*/
    }
  }
  *this = &vt_DynamicVectorClass_AircraftTypeClass_const; /*0x5135a3*/
  this->q005 = 10; /*0x5135a9*/
  this->q010 = 0; /*0x5135b0*/
  return this; /*0x5135b9*/
}


// ==== 0x005135C0  _DynamicVectorClass_PBVAircraftTypeClass::Constructor_1  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall TypeList_Infantry::Constructor_1(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5135c3*/
  *Block = &vt_VectorClass_AircraftTypeClass_const; /*0x5135c6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5135d0*/
  {
    __3_YAXPAX_Z(v3); /*0x5135d8*/
    *(Block + 1) = 0; /*0x5135e0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5135eb*/
  *(Block + 2) = 0; /*0x5135f1*/
  if ( (a2 & 1) != 0 ) /*0x5135f8*/
    __3_YAXPAX_Z(Block); /*0x5135fb*/
  return (DynamicVector *)Block; /*0x513605*/
}


// ==== 0x00513610  _DynamicVectorClass_PBVAircraftTypeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall HouseTypeClass_28_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x51361c*/
  {
    this->IsInitialized = 0; /*0x513622*/
    if ( a3 ) /*0x513628*/
      v4 = a3; /*0x51363e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x51363a*/
    this->IsInitialized = 1; /*0x513642*/
    if ( !v4 ) /*0x513646*/
      return 0; /*0x5136ba*/
    if ( this->Items ) /*0x513648*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x51364f*/
      if ( a2 < v5 ) /*0x513654*/
        v5 = a2; /*0x513656*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x51365c*/
        ++i; /*0x513661*/
      if ( this->IsAllocated ) /*0x51366e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x513679*/
        this->Items = 0; /*0x513681*/
      }
    }
    this->Items = v4; /*0x51368a*/
    this->DynamicVector_field_0x8 = a2; /*0x513692*/
    this->IsAllocated = a3 == 0; /*0x513695*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x51369e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5136a1*/
  if ( v7 < this->Items ) /*0x5136a9*/
    this->Items = v7; /*0x5136ab*/
  return 1; /*0x5136ae*/
}


// ==== 0x005136C0  HouseTypeClass::readPowerPlants  this=TypeList  sig=csp ====
char __thiscall HouseTypeClass::readPowerPlants(_DWORD *this, TypeList *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->Capacity; /*0x5136c3*/
  if ( this->Count >= v3 ) /*0x5136cb*/
  {
    if ( !this->IsAllocated && v3 ) /*0x5136d6*/
      return 0; /*0x5136d6*/
    v4 = this->CapacityIncrement; /*0x5136d8*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x5136e8*/
      return 0; /*0x5136ef*/
  }
  v6 = this->Count; /*0x5136f5*/
  v7 = this->Items; /*0x5136f8*/
  this->Count = v6 + 1; /*0x5136fe*/
  *(_DWORD *)(v7 + 4 * v6) = aP1->vtable0; /*0x513708*/
  return 1; /*0x5136f1*/
}


// ==== 0x00513710  _DynamicVectorClass_PBVAircraftTypeClass::Read  this=DynamicVector  sig=csp ====
int __thiscall HouseTypeClass_28_::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x513710*/
  result = 0; /*0x513713*/
  if ( v2 <= 0 ) /*0x513718*/
    return -1; /*0x51372f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x51371e*/
  {
    if ( ++result >= v2 ) /*0x51372d*/
      return -1; /*0x51372d*/
  }
  return result; /*0x513732*/
}


// ==== 0x00513740  TypeList::CopyConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList::CopyConstructor(_DWORD *this, VectorClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x51374d*/
  this->Capacity = 0; /*0x513750*/
  this->q030 = 1; /*0x513753*/
  this->__pad_034 = 0; /*0x513757*/
  *this = &vt_VectorClass_UnitTypeClass_const; /*0x51375a*/
  if ( this != (_DWORD *)aP1 ) /*0x513760*/
  {
    Vector::Destructor((int)this); /*0x513762*/
    v3 = aP1->Capacity; /*0x513768*/
    this->Capacity = v3; /*0x51376d*/
    if ( v3 ) /*0x513770*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x513776*/
      this->Items = v4; /*0x513780*/
      if ( v4 ) /*0x513783*/
      {
        v5 = this->Capacity; /*0x513785*/
        v6 = 0; /*0x513788*/
        this->__pad_034 = 1; /*0x51378c*/
        if ( v5 > 0 ) /*0x513790*/
        {
          do /*0x5137a4*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *((_DWORD *)aP1->Items + v6); /*0x51379b*/
            ++v6; /*0x5137a1*/
          }
          while ( v6 < this->Capacity ); /*0x5137a4*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x5137a8*/
      this->__pad_034 = 0; /*0x5137ab*/
    }
  }
  this->q010 = aP1[1].vtable0; /*0x5137b1*/
  this->q005 = aP1[1].Items; /*0x5137b7*/
  *this = &vt_TypeList_UnitTypeClass_const; /*0x5137ba*/
  return this; /*0x5137c2*/
}


// ==== 0x005137D0  HouseTypeClass::readParaDropTypes  this=VectorClass  sig=csp ====
_DWORD *__thiscall HouseTypeClass::readParaDropTypes(_DWORD *this, VectorClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x5137dd*/
  this->Capacity = 0; /*0x5137e0*/
  this->q030 = 1; /*0x5137e3*/
  this->__pad_034 = 0; /*0x5137e7*/
  *this = &vt_VectorClass_AircraftTypeClass_const; /*0x5137ea*/
  if ( this != (_DWORD *)aP1 ) /*0x5137f0*/
  {
    VectorClass::ClearAndFree4((int)this); /*0x5137f2*/
    v3 = aP1->Capacity; /*0x5137f8*/
    this->Capacity = v3; /*0x5137fd*/
    if ( v3 ) /*0x513800*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x513806*/
      this->Items = v4; /*0x513810*/
      if ( v4 ) /*0x513813*/
      {
        v5 = this->Capacity; /*0x513815*/
        v6 = 0; /*0x513818*/
        this->__pad_034 = 1; /*0x51381c*/
        if ( v5 > 0 ) /*0x513820*/
        {
          do /*0x513834*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *((_DWORD *)aP1->Items + v6); /*0x51382b*/
            ++v6; /*0x513831*/
          }
          while ( v6 < this->Capacity ); /*0x513834*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x513838*/
      this->__pad_034 = 0; /*0x51383b*/
    }
  }
  this->q010 = aP1[1].vtable0; /*0x513841*/
  this->q005 = aP1[1].Items; /*0x513847*/
  *this = &vt_TypeList_AircraftTypeClass_const; /*0x51384a*/
  return this; /*0x513852*/
}


// ==== 0x00513860  HouseTypeClass::readAllowedUnits  this=VectorClass  sig=csp ====
_DWORD *__thiscall HouseTypeClass::readAllowedUnits(_DWORD *this, InfantryTypeClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x51386d*/
  this->Capacity = 0; /*0x513870*/
  this->q030 = 1; /*0x513873*/
  this->__pad_034 = 0; /*0x513877*/
  *this = &vt_VectorClass_InfantryTypeClass_const; /*0x51387a*/
  if ( this != (_DWORD *)aP1 ) /*0x513880*/
  {
    Vector::Cleanup((int)this); /*0x513882*/
    v3 = *(_DWORD *)&aP1->vtable0[8]; /*0x513888*/
    this->Capacity = v3; /*0x51388d*/
    if ( v3 ) /*0x513890*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x513896*/
      this->Items = v4; /*0x5138a0*/
      if ( v4 ) /*0x5138a3*/
      {
        v5 = this->Capacity; /*0x5138a5*/
        v6 = 0; /*0x5138a8*/
        this->__pad_034 = 1; /*0x5138ac*/
        if ( v5 > 0 ) /*0x5138b0*/
        {
          do /*0x5138c4*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->vtable0[4] + 4 * v6); /*0x5138bb*/
            ++v6; /*0x5138c1*/
          }
          while ( v6 < this->Capacity ); /*0x5138c4*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x5138c8*/
      this->__pad_034 = 0; /*0x5138cb*/
    }
  }
  this->q010 = aP1->uniqueId; /*0x5138d1*/
  this->q005 = aP1->abstractFlags; /*0x5138d7*/
  *this = &vt_DynamicVectorClass_InfantryTypeClass_const; /*0x5138da*/
  return this; /*0x5138e2*/
}


// ==== 0x005138F0  InfantryTypeVector::Construct2  this=VectorClass  sig=csp ====
_DWORD *__thiscall InfantryTypeVector_Constructor2(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x5138fb*/
  this->Capacity = a2; /*0x5138fe*/
  this->q030 = 1; /*0x513901*/
  this->__pad_034 = 0; /*0x513905*/
  *this = &vt_VectorClass_InfantryTypeClass_const; /*0x513908*/
  if ( a2 ) /*0x51390e*/
  {
    if ( a3 ) /*0x513916*/
    {
      this->Items = a3; /*0x513918*/
      return this; /*0x51391e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x51392d*/
    this->__pad_034 = 1; /*0x513930*/
  }
  return this; /*0x51391d*/
}


// ==== 0x00513940  UnitTypeVector::ConstructUnitTypeVectorClass  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_Constructor_UnitType(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x51394b*/
  this->Capacity = a2; /*0x51394e*/
  this->q030 = 1; /*0x513951*/
  this->__pad_034 = 0; /*0x513955*/
  *this = &vt_VectorClass_UnitTypeClass_const; /*0x513958*/
  if ( a2 ) /*0x51395e*/
  {
    if ( a3 ) /*0x513966*/
    {
      this->Items = a3; /*0x513968*/
      return this; /*0x51396e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x51397d*/
    this->__pad_034 = 1; /*0x513980*/
  }
  return this; /*0x51396d*/
}


// ==== 0x00513990  AircraftTypeVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall AircraftTypeVector::Constructor(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x51399b*/
  this->Capacity = a2; /*0x51399e*/
  this->q030 = 1; /*0x5139a1*/
  this->__pad_034 = 0; /*0x5139a5*/
  *this = &vt_VectorClass_AircraftTypeClass_const; /*0x5139a8*/
  if ( a2 ) /*0x5139ae*/
  {
    if ( a3 ) /*0x5139b6*/
    {
      this->Items = a3; /*0x5139b8*/
      return this; /*0x5139be*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5139cd*/
    this->__pad_034 = 1; /*0x5139d0*/
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
  MEMORY[0xA8F168] = Math::Sqrt(v0 + v0); /*0x513a2e*/
}


// ==== 0x00513A40  sub_513A40  this=-  sig=ida-proto ====
void sub_513A40()
{
  MEMORY[0xA8F1B8] = MEMORY[0xA8F168] / 60.0; /*0x513a4c*/
}


// ==== 0x00513A60  sub_513A60  this=-  sig=ida-proto ====
void sub_513A60()
{
  MEMORY[0xA8F1A0] = 1.0 / MEMORY[0xA8F1B8]; /*0x513a6c*/
}


// ==== 0x00513A80  sub_513A80  this=-  sig=ida-proto ====
void sub_513A80()
{
  MEMORY[0xA8F198] = 0.0174532925199433 * 45.0; /*0x513a8c*/
}


// ==== 0x00513AA0  sub_513AA0  this=-  sig=ida-proto ====
void sub_513AA0()
{
  MEMORY[0xA8F170] = 0.0174532925199433 * 60.0; /*0x513aac*/
}


// ==== 0x00513AC0  sub_513AC0  this=-  sig=ida-proto ====
void sub_513AC0()
{
  MEMORY[0xA8F148] = 0.0174532925199433 * 90.0; /*0x513acc*/
}


// ==== 0x00513AE0  sub_513AE0  this=-  sig=ida-proto ====
__int64 sub_513AE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xA8F148] - MEMORY[0xA8F170]); /*0x513af2*/
  result = Math::RoundToInt(v0 * MEMORY[0xA8F168] * 0.5); /*0x513b06*/
  MEMORY[0xA8F1C0] = result; /*0x513b0b*/
  return result; /*0x513b10*/
}


// ==== 0x00513B20  sub_513B20  this=-  sig=ida-proto ====
void sub_513B20()
{
  MEMORY[0xA8F178] = Math::ArcTan((double)MEMORY[0xA8F1C0] * 0.00390625); /*0x513b37*/
}


// ==== 0x00513B50  sub_513B50  this=-  sig=ida-proto ====
void sub_513B50()
{
  MEMORY[0xA8F190] = Math::ArcTan((double)(2 * MEMORY[0xA8F1C0]) / MEMORY[0xA8F168]); /*0x513b72*/
}


// ==== 0x00513B80  sub_513B80  this=-  sig=ida-proto ====
__int64 sub_513B80()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xA8F1C0]) + 0.5); /*0x513b9b*/
  MEMORY[0xA8F1B4] = result; /*0x513ba0*/
  return result; /*0x513ba6*/
}


// ==== 0x00513BB0  sub_513BB0  this=-  sig=ida-proto ====
int sub_513BB0()
{
  MEMORY[0xA8F160] = 0; /*0x513bb2*/
  return 0; /*0x513bbe*/
}


// ==== 0x00513BC0  sub_513BC0  this=-  sig=ida-proto ====
int sub_513BC0()
{
  MEMORY[0xA8F180] = 0; /*0x513bc2*/
  MEMORY[0xA8F184] = 0; /*0x513bc7*/
  MEMORY[0xA8F188] = 0; /*0x513bcc*/
  return 0; /*0x513bd1*/
}


// ==== 0x00513BE0  sub_513BE0  this=-  sig=ida-proto ====
int sub_513BE0()
{
  MEMORY[0xA8F1B0] = 0; /*0x513be5*/
  MEMORY[0xA8F1A8] = 128; /*0x513bef*/
  MEMORY[0xA8F1AC] = 128; /*0x513bf4*/
  return 128; /*0x513bf9*/
}


// ==== 0x00513C00  sub_513C00  this=-  sig=ida-proto ====
int sub_513C00()
{
  MEMORY[0xA8F150] = 0; /*0x513c02*/
  MEMORY[0xA8F154] = 0; /*0x513c07*/
  MEMORY[0xA8F158] = 0; /*0x513c0c*/
  MEMORY[0xA8F15C] = 0; /*0x513c11*/
  return 0; /*0x513c16*/
}


// ==== 0x00513C20  LocomotionClass::ProcessData  this=HoverLocomotionClass  sig=csp ====
int __thiscall sub_513C20(int this)
{
  LocomotionClass::Init((_DWORD *)this); /*0x513c24*/
  *(_DWORD *)(this + 24) = MEMORY[0xA8F180]; /*0x513c34*/
  *(_DWORD *)(this + 28) = MEMORY[0xA8F184]; /*0x513c3d*/
  *(_DWORD *)(this + 32) = MEMORY[0xA8F188]; /*0x513c49*/
  *(_DWORD *)(this + 36) = MEMORY[0xA8F180]; /*0x513c51*/
  *(_DWORD *)(this + 40) = MEMORY[0xA8F184]; /*0x513c59*/
  *(_DWORD *)(this + 44) = MEMORY[0xA8F188]; /*0x513c64*/
  FrameSnapshot::InitMax((_WORD *)(this + 48), 0); /*0x513c67*/
  *(_DWORD *)(this + 72) = 0; /*0x513c6c*/
  *(_DWORD *)(this + 80) = 0; /*0x513c6f*/
  *(_DWORD *)(this + 88) = 0; /*0x513c72*/
  *(_DWORD *)(this + 96) = 0; /*0x513c75*/
  *(_DWORD *)(this + 76) = 0; /*0x513c78*/
  *(_DWORD *)(this + 84) = 0; /*0x513c7b*/
  *(_DWORD *)(this + 92) = 1072693248; /*0x513c7e*/
  *(_DWORD *)(this + 100) = 0; /*0x513c85*/
  *(_BYTE *)(this + 104) = 0; /*0x513c88*/
  *(_DWORD *)(this + 108) = 0; /*0x513c8b*/
  *(_BYTE *)(this + 112) = 0; /*0x513c8e*/
  *(_DWORD *)this = &HoverLocomotionClass::`vftable'; /*0x513c91*/
  *(_DWORD *)(this + 4) = &vt_HoverLocomotionClass; /*0x513c97*/
  return this; /*0x513ca0*/
}


// ==== 0x00513CB0  HoverLocomotionClass::WriteObject  this=HoverLocomotionClass  sig=csp ====
int __stdcall SaveGame_WriteObject(int a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  _BYTE v5[24]; // [esp+Ch] [ebp-18h] BYREF

  v2 = StreamClass::ResetPosition(a1, a2); /*0x513cc8*/
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)); /*0x513ccc*/
  FrameSnapshot::InitMax(2 * *(_DWORD *)(v3 + 1820)); /*0x513cdf*/
  qmemcpy((void *)(a1 + 44), v5, 0x18u); /*0x513cf2*/
  return v2; /*0x513cf4*/
}


// ==== 0x00513D00  HoverLocomotionClass::method_513D00  this=HoverLocomotionClass  sig=csp ====
void __thiscall sub_513D00(_DWORD *this)
{
  *this = &HoverLocomotionClass::`vftable'; /*0x513d00*/
  this->vtable2 = &vt_HoverLocomotionClass; /*0x513d06*/
  LocomotionClass::Construct(this); /*0x513d0d*/
}


// ==== 0x00513D20  BuildingLightClass::UpdateOscillation  this=BuildingLightClass  sig=csp ====
signed int __thiscall BuildingLightClass::UpdateOscillation(int this)
{
  int v2; // eax
  int *v3; // eax
  int GroundHeight; // edi
  int v5; // eax
  int *v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // ebx
  int v10; // ebp
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  double v14; // st7
  int v15; // edi
  double v16; // st7
  double v17; // st7
  int v18; // eax
  int v19; // ecx
  char v20; // bl
  signed int result; // eax
  RulesClass *v22; // ecx
  double v23; // st7
  int v24; // [esp+1Ch] [ebp-18h]
  int v25; // [esp+1Ch] [ebp-18h]
  int v26; // [esp+20h] [ebp-14h]
  int v27; // [esp+24h] [ebp-10h]
  int v28; // [esp+28h] [ebp-Ch] BYREF
  int v29; // [esp+2Ch] [ebp-8h]
  int v30; // [esp+30h] [ebp-4h]

  v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)); /*0x513d3a*/
  v26 = v24; /*0x513d3e*/
  v2 = *(_DWORD *)(this + 12); /*0x513d42*/
  if ( *(_DWORD *)(v2 + 1504) != -1 ) /*0x513d4c*/
  {
    v3 = (int *)(v2 + 156); /*0x513d52*/
    v28 = *v3; /*0x513d59*/
    v29 = v3[1]; /*0x513d65*/
    v30 = v3[2]; /*0x513d71*/
    GroundHeight = Cell::GetGroundHeight(&v28); /*0x513d7a*/
    v5 = *(_DWORD *)(this + 12); /*0x513d7c*/
    v6 = (int *)(v5 + 156); /*0x513d8b*/
    v7 = *(_DWORD *)(v5 + 1504) & 7; /*0x513d8d*/
    v8 = *v6; /*0x513d90*/
    v9 = v6[1]; /*0x513d92*/
    v10 = v6[2]; /*0x513d95*/
    v11 = 8 * v7 + 9041624; /*0x513d98*/
    v12 = v8 + MEMORY[0x89F6D8][2 * v7]; /*0x513dab*/
    v29 = v9 + *(_DWORD *)(v11 + 4); /*0x513dad*/
    v28 = v12; /*0x513dbb*/
    v30 = v10; /*0x513dbf*/
    if ( Cell::GetGroundHeight(&v28) > GroundHeight ) /*0x513dca*/
      v26 = v24 - HIDWORD(MEMORY[0x8871E0]->ShakeScreen); /*0x513ddc*/
  }
  v25 = Math::RoundToInt((double)v24 + *(double *)(this + 96)); /*0x513dec*/
  v13 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 12) + 4) + 16))(*(_DWORD *)(this + 12) + 4); /*0x513df9*/
  if ( (v13 & 1) != 0 ) /*0x513dfe*/
    v14 = 1.0; /*0x513e00*/
  else
    v14 = 1.1; /*0x513e08*/
  v15 = (int)&MEMORY[0xA8ED84][v13]; /*0x513e20*/
  v16 = v14 * *(double *)&MEMORY[0x8871E0]->HoverBob * 900.0; /*0x513e23*/
  v27 = v15 % (int)Math::RoundToInt(v16); /*0x513e3a*/
  v17 = Math::SinCos((double)v27 * 6.283185307179586 / v16); /*0x513e4f*/
  v18 = Math::RoundToInt(v17 + v17 + (double)v25); /*0x513e5d*/
  if ( v18 < 0 ) /*0x513e66*/
  {
    *(_DWORD *)(this + 96) = 0; /*0x513e68*/
    *(_DWORD *)(this + 100) = 0; /*0x513e6b*/
    v18 = 0; /*0x513e6e*/
  }
  v19 = *(_DWORD *)(this + 12); /*0x513e70*/
  v20 = *(_BYTE *)(v19 + 116); /*0x513e74*/
  *(_BYTE *)(v19 + 116) = 0; /*0x513e77*/
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), v18); /*0x513e7f*/
  result = *(_DWORD *)(this + 12); /*0x513e85*/
  *(_BYTE *)(result + 116) = v20; /*0x513e8c*/
  v22 = MEMORY[0x8871E0]; /*0x513e8f*/
  if ( v26 < SHIDWORD(MEMORY[0x8871E0]->ShakeScreen) ) /*0x513e9b*/
  {
    if ( StreamClass::GetDirty(this + 4) ) /*0x513ea1*/
      *(double *)(this + 96) = ((double)SHIDWORD(MEMORY[0x8871E0]->ShakeScreen) /*0x513ec8*/
                              + (double)SHIDWORD(MEMORY[0x8871E0]->ShakeScreen)
                              - (double)v26)
                             / (double)SHIDWORD(MEMORY[0x8871E0]->ShakeScreen)
                             * (double)MEMORY[0x8871E0][1].?
                             + *(double *)(this + 96);
    v22 = MEMORY[0x8871E0]; /*0x513ecd*/
    result = SHIDWORD(MEMORY[0x8871E0]->ShakeScreen) / 4; /*0x513edf*/
    if ( v26 < result ) /*0x513ee4*/
    {
      result = (unsigned int)((unsigned __int64)(1431655766LL * MEMORY[0x8871E0][1].?) >> 32) >> 31; /*0x513ef5*/
      *(double *)(this + 96) = (double)(MEMORY[0x8871E0][1].? / 3) + *(double *)(this + 96); /*0x513f05*/
      v22 = MEMORY[0x8871E0]; /*0x513f08*/
    }
  }
  v23 = *(double *)(this + 96) - (double)v22[1].?; /*0x513f15*/
  *(double *)(this + 96) = v23; /*0x513f18*/
  *(double *)(this + 96) = v23 * *(double *)&MEMORY[0x8871E0]->HoverDampen; /*0x513f27*/
  return result; /*0x513f2a*/
}


// ==== 0x00513F40  ObjectClass::BuildTransform  this=ObjectClass  sig=csp ====
float *__stdcall ObjectClass::BuildTransform(_DWORD *a1, float *a2, _DWORD *a3)
{
  int v3; // ecx
  _DWORD *v4; // ecx
  int v5; // ebp
  float *v7; // eax
  double v8; // st7
  int v9; // edx
  double v10; // st7
  int v11; // eax
  double v12; // st7
  int v13; // ecx
  double v14; // st7
  int v15; // esi
  int v16; // eax
  int v17; // ecx
  float *Transform; // eax
  float *v19; // eax
  float *v20; // esi
  float v21; // [esp+4h] [ebp-154h]
  float v22; // [esp+8h] [ebp-150h]
  float v23; // [esp+8h] [ebp-150h]
  float v24; // [esp+8h] [ebp-150h]
  float v25; // [esp+18h] [ebp-140h]
  int v26; // [esp+18h] [ebp-140h]
  float v27; // [esp+1Ch] [ebp-13Ch]
  int v28; // [esp+1Ch] [ebp-13Ch]
  float v29; // [esp+20h] [ebp-138h] BYREF
  int v30; // [esp+24h] [ebp-134h]
  float v31; // [esp+28h] [ebp-130h]
  _DWORD v32[3]; // [esp+2Ch] [ebp-12Ch] BYREF
  float v33[12]; // [esp+38h] [ebp-120h] BYREF
  float v34[12]; // [esp+68h] [ebp-F0h] BYREF
  float v35[12]; // [esp+98h] [ebp-C0h] BYREF
  float v36[12]; // [esp+C8h] [ebp-90h] BYREF
  float v37[12]; // [esp+F8h] [ebp-60h] BYREF
  float v38[12]; // [esp+128h] [ebp-30h] BYREF

  v3 = a1[2]; /*0x513f50*/
  if ( fabs(*(float *)(v3 + 808)) >= 0.005 || fabs(*(float *)(v3 + 812)) >= 0.005 ) /*0x513f7f*/
  {
    if ( a3 ) /*0x5140a0*/
      *a3 = -1; /*0x5140a2*/
    Matrix3x4::Identity(v35); /*0x5140af*/
    Matrix3x4::Identity(v33); /*0x5140b8*/
    v25 = *(double *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 132))(a1[2]) + 864); /*0x5140d3*/
    v27 = *(double *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 132))(a1[2]) + 872); /*0x5140e9*/
    v8 = Math::ArcTan2(*(float *)(a1[2] + 812)); /*0x5140f6*/
    v9 = a1[2]; /*0x5140fb*/
    v31 = v8; /*0x5140fe*/
    v10 = Math::SinCos(*(float *)(v9 + 812)); /*0x51410b*/
    v11 = a1[2]; /*0x514110*/
    *(float *)&v30 = v10; /*0x514113*/
    v12 = Math::ArcTan2(*(float *)(v11 + 808)); /*0x514120*/
    v13 = a1[2]; /*0x514125*/
    v29 = v12; /*0x514128*/
    v14 = Math::SinCos(*(float *)(v13 + 808)); /*0x514135*/
    v30 = Math::RoundToInt(fabs(v14) * v25 + fabs(*(float *)&v30) * v27); /*0x51415c*/
    LODWORD(v31) = Math::RoundToInt(v31 * v27); /*0x514165*/
    v15 = Math::RoundToInt(v27 - (double)SLODWORD(v31)); /*0x51417e*/
    v28 = v15; /*0x514180*/
    LODWORD(v29) = Math::RoundToInt(v29 * v25); /*0x514189*/
    v16 = Math::RoundToInt(v25 - (double)SLODWORD(v29)); /*0x514195*/
    v17 = a1[2]; /*0x51419a*/
    v26 = v16; /*0x51419f*/
    if ( *(float *)(v17 + 812) < 0.0 ) /*0x5141b4*/
      v28 = -v15; /*0x5141b8*/
    if ( *(float *)(v17 + 808) > 0.0 ) /*0x5141cd*/
      v26 = -v16; /*0x5141d1*/
    v22 = (float)v30; /*0x5141e1*/
    Matrix3x3::ApplyCol1(v35, v22); /*0x5141e4*/
    v23 = (float)v28; /*0x5141f2*/
    Matrix3x4::Translate(v33, v23); /*0x5141f5*/
    v24 = (float)v26; /*0x514203*/
    Matrix3x3::ApplyCol0(v33, v24); /*0x514206*/
    Matrix3x3::RotateX(v33, *(float *)(a1[2] + 808)); /*0x514219*/
    Matrix3D::RotateZ(v33, *(float *)(a1[2] + 812)); /*0x51422c*/
    Transform = Turret::GetTransform((signed int)a1, v36, a3); /*0x51423b*/
    Transform::Copy(v34, Transform); /*0x514245*/
    v19 = MultiplyMatrix3x4(v37, v35, v34); /*0x514262*/
    v7 = MultiplyMatrix3x4(v38, v19, v33); /*0x514270*/
    goto LABEL_16; /*0x514270*/
  }
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 96))(a1) ) /*0x513f88*/
  {
    v7 = Turret::GetTransform((signed int)a1, v34, a3); /*0x51408d*/
LABEL_16:
    v20 = v7; /*0x514275*/
    qmemcpy(a2, v20, 0x30u); /*0x514285*/
    return a2; /*0x514277*/
  }
  v4 = (_DWORD *)(a1[2] + 156); /*0x513f97*/
  v32[0] = *v4; /*0x513f9f*/
  v32[1] = v4[1]; /*0x513fab*/
  v32[2] = v4[2]; /*0x513fb2*/
  v5 = *((unsigned __int8 *)Coord::To_Cell(&MEMORY[0x87F7E8], v32) + 284); /*0x513fc8*/
  qmemcpy(v33, CopyAudioData((char *)v34, v5), sizeof(v33)); /*0x513fe4*/
  v21 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)(a1[2] + 904), &v29) >> 10) + 1) >> 1) & 0x1F) /*0x514016*/
                    - 8)
      * -0.1963495408493621;
  Matrix2D::Rotate(v33, v21); /*0x514019*/
  if ( a3 ) /*0x514027*/
  {
    if ( *a3 != -1 ) /*0x51402e*/
    {
      *a3 = 32 * (v5 + (*a3 << 6)); /*0x51403c*/
      *a3 |= ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(a1[2] + 904), &v29) >> 10) + 1) >> 1) & 0x1F; /*0x51405c*/
    }
  }
  qmemcpy(a2, v33, 0x30u); /*0x514070*/
  return a2; /*0x514073*/
}


// ==== 0x005142A0  HoverLocomotionClass::ComputeAudio3DRotation_0  this=HoverLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::sub_5142A0(int a1, float *a2, _DWORD *a3)
{
  int v3; // ecx
  float *v4; // esi
  float v6[12]; // [esp+8h] [ebp-30h] BYREF

  v3 = *(_DWORD *)(a1 + 8); /*0x5142a7*/
  if ( fabs(*(float *)(v3 + 808)) >= 0.005 || fabs(*(float *)(v3 + 812)) >= 0.005 ) /*0x5142d8*/
  {
    if ( a3 ) /*0x5142dc*/
      *a3 = -1; /*0x5142de*/
  }
  v4 = Audio3D::ComputeRotation(a1, v6, a3); /*0x5142f0*/
  qmemcpy(a2, v4, 0x30u); /*0x5142fd*/
  return a2; /*0x5142ff*/
}


// ==== 0x00514310  HoverLocomotionClass::DeployAnimation  this=HoverLocomotionClass  sig=csp ====
char __stdcall InfantryClass::DeployAnimation(int a1)
{
  _DWORD *v1; // edi
  _BYTE *v2; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int *v8; // ebx
  double v9; // st7
  __int16 v10; // bx
  int v11; // ebx
  _WORD *v12; // eax
  bool v13; // bl
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  double v17; // st7
  int Member; // eax
  unsigned __int16 v19; // bx
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  bool v22; // al
  int v23; // eax
  int v24; // ecx
  int v25; // ebx
  int *v26; // ecx
  int v27; // ecx
  unsigned int v28; // ebx
  unsigned int v29; // edi
  double v30; // st7
  double v31; // st7
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  _DWORD *v35; // eax
  _BYTE *v36; // ecx
  _DWORD *v37; // edi
  int v38; // eax
  int v39; // ecx
  _DWORD *v40; // ebx
  char v41; // bl
  _BYTE *v42; // ecx
  void **v43; // eax
  int *v44; // ecx
  _DWORD *Value; // eax
  int v46; // ecx
  int v47; // ecx
  int v48; // eax
  int v49; // ecx
  int *v50; // edx
  void *v51; // eax
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

  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1) ) /*0x514322*/
  {
    v1 = (_DWORD *)(a1 - 4); /*0x51432d*/
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1) ) /*0x514337*/
    {
      UpdateFootFacing(a1 - 4); /*0x514344*/
      v2 = *(_BYTE **)(a1 + 8); /*0x514349*/
      if ( !v2[144] ) /*0x51434c*/
        return 0; /*0x51435e*/
      v4 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 464))(v2); /*0x514363*/
      v5 = *(_DWORD *)(a1 + 8); /*0x514369*/
      v58 = v4; /*0x51436c*/
      LODWORD(v57) = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1336))(v5); /*0x514378*/
      v6 = Math::RoundToInt((double)SLODWORD(v57) * *(double *)(a1 + 76)); /*0x514383*/
      v7 = *(_DWORD *)(a1 + 8); /*0x514388*/
      LODWORD(v56) = v6; /*0x51438b*/
      v8 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v7 + 72))(v7, &v65); /*0x514399*/
      Int64::Equal(a1 + 32); /*0x5143a1*/
      v9 = Math::CalcAngle((double)v8[1] - (double)*(int *)(a1 + 36), (double)*(int *)(a1 + 32) - (double)*v8); /*0x5143be*/
      v10 = Math::RoundToInt((v9 - 1.570796326794897) * -10430.06004058427); /*0x5143d7*/
      if ( !LODWORD(v56) && !abs16(*(_WORD *)ProgressTimer::GetValue((_WORD *)(a1 + 44), &v57) - v10) ) /*0x514403*/
      {
        v13 = 1; /*0x514466*/
        if ( v1[9] != dword_A8ED54[267] || v1[10] != dword_A8ED54[268] || v1[11] != dword_A8ED54[269] ) /*0x514438*/
        {
          v11 = v1[3]; /*0x51443a*/
          v55 = Coord::ToCell(v1 + 9, &v57); /*0x514449*/
          v12 = (_WORD *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v11 + 440))(v11, &v56); /*0x514451*/
          if ( !CellStruct::Equals(v12, v55) ) /*0x514459*/
            v13 = 0; /*0x514438*/
        }
        v14 = v1[3]; /*0x514468*/
        v1[18] = 0; /*0x51446b*/
        v1[19] = 1072693248; /*0x514472*/
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v14 + 1348))(v14, 0, 1072693248); /*0x514482*/
        MovementAI::StepFootClass((int *)(a1 - 4), 0); /*0x51448c*/
        if ( v13 ) /*0x514493*/
          MovementAI::MainFootClass((int *)(a1 - 4), 1); /*0x514499*/
        LODWORD(v57) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 1336))(*(_DWORD *)(a1 + 8)); /*0x5144a9*/
        LODWORD(v56) = Math::RoundToInt((double)SLODWORD(v57) * *(double *)(a1 + 76)); /*0x5144b9*/
      }
      v15 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 156); /*0x5144ce*/
      v16 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 164); /*0x5144d5*/
      v60 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 160) - *(_DWORD *)(a1 + 36); /*0x5144d8*/
      v67 = v16; /*0x5144e0*/
      v59 = v15 - *(_DWORD *)(a1 + 32); /*0x5144e9*/
      v17 = Math::Sqrt((double)v59 * (double)v59 + (double)v60 * (double)v60); /*0x514502*/
      if ( SLODWORD(v56) >= (int)Math::RoundToInt(v17) ) /*0x514513*/
      {
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + 1718) = 1; /*0x51451e*/
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + 1719) = 0; /*0x514528*/
        *(_BYTE *)(a1 + 108) = 0; /*0x514531*/
        MovementAI::StepFootClass((int *)(a1 - 4), 0); /*0x514535*/
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 1504) == -1 /*0x51456a*/
          && *(_DWORD *)(a1 + 20) == dword_A8ED54[267]
          && *(_DWORD *)(a1 + 24) == dword_A8ED54[268]
          && *(_DWORD *)(a1 + 28) == dword_A8ED54[269] )
        {
          *(_DWORD *)(a1 + 32) = dword_A8ED54[267]; /*0x51456f*/
          *(_DWORD *)(a1 + 36) = dword_A8ED54[268]; /*0x514578*/
          *(_DWORD *)(a1 + 40) = dword_A8ED54[269]; /*0x514581*/
        }
        Member = Team::GetMember(*(_DWORD **)(a1 + 8), 0); /*0x514589*/
        v19 = dword_A8ED54[259]; /*0x51458e*/
        LODWORD(v57) = dword_A8ED54[259]; /*0x514596*/
        if ( Member ) /*0x51459a*/
        {
          v20 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)Member + 76))( /*0x5145a9*/
                            Member,
                            &v65,
                            *(_DWORD *)(a1 + 8));
          LOWORD(v57) = *v20 / 256; /*0x5145bc*/
          WORD1(v57) = v20[1] / 256; /*0x5145d0*/
          v19 = LOWORD(v57); /*0x5145d5*/
        }
        v21 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a1 + 8) + 440))(*(_DWORD *)(a1 + 8), &v59); /*0x5145e7*/
        v22 = *v21 == __PAIR32__(WORD1(v57), v19); /*0x5145f0*/
        if ( *(_DWORD *)(a1 + 20) != dword_A8ED54[267] /*0x51462c*/
          || *(_DWORD *)(a1 + 24) != dword_A8ED54[268]
          || *(_DWORD *)(a1 + 28) != dword_A8ED54[269]
          || v22 )
        {
          v23 = MovementAI::MainFootClass((int *)(a1 - 4), 1); /*0x514636*/
          v24 = *(_DWORD *)(a1 + 8); /*0x51463b*/
          v25 = v23; /*0x51463e*/
          if ( !*(_BYTE *)(v24 + 144) || *(_BYTE *)(v24 + 129) || *(_BYTE *)(v24 + 141) ) /*0x51465c*/
            return 7; /*0x5149f4*/
          if ( !v23 /*0x514696*/
            && *(_DWORD *)(a1 + 32) == dword_A8ED54[267]
            && *(_DWORD *)(a1 + 36) == dword_A8ED54[268]
            && *(_DWORD *)(a1 + 40) == dword_A8ED54[269] )
          {
            v65 = *(_DWORD *)(v24 + 156); /*0x5146a4*/
            v66 = *(_DWORD *)(v24 + 160); /*0x5146ab*/
            v67 = *(_DWORD *)(v24 + 164); /*0x5146b2*/
            (*(void (__thiscall **)(int, int *))(*(_DWORD *)v24 + 240))(v24, &v65); /*0x5146bd*/
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 396))(*(_DWORD *)(a1 + 8), 2); /*0x5146ca*/
            v24 = *(_DWORD *)(a1 + 8); /*0x5146d0*/
            if ( !*(_BYTE *)(v24 + 144) || *(_BYTE *)(v24 + 129) || *(_BYTE *)(v24 + 141) ) /*0x5146e7*/
              return 0; /*0x5146f9*/
          }
          if ( v25 == 7 ) /*0x5146ff*/
          {
            if ( *(char *)(v24 + 1668) >= 0 ) /*0x51470d*/
              return 0; /*0x514717*/
            (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)v1[3] + 1152))(v1[3], 0, 1); /*0x514723*/
            v1[20] = 0; /*0x51472b*/
            v1[18] = 0; /*0x51472e*/
            v1[21] = 0; /*0x514731*/
            v1[19] = 0; /*0x514734*/
            (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v1[3] + 1348))(v1[3], 0, 0); /*0x514740*/
          }
          else if ( v25 ) /*0x51497c*/
          {
            v39 = v1[3]; /*0x514982*/
            v1[20] = 0; /*0x514985*/
            v1[18] = 0; /*0x514988*/
            v1[21] = 0; /*0x51498b*/
            v1[19] = 0; /*0x51498e*/
            (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v39 + 1348))(v39, 0, 0); /*0x514995*/
            v40 = v1 + 9; /*0x5149a4*/
            if ( v1[9] != dword_A8ED54[267] || v1[10] != dword_A8ED54[268] || v1[11] != dword_A8ED54[269] ) /*0x5149c1*/
            {
              (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v1[3] + 244))(v1[3], v40); /*0x5149cb*/
              *v40 = dword_A8ED54[267]; /*0x5149d7*/
              v1[10] = dword_A8ED54[268]; /*0x5149df*/
              v1[11] = dword_A8ED54[269]; /*0x5149e7*/
            }
            goto LABEL_66; /*0x5149ea*/
          }
        }
      }
      if ( SLODWORD(v56) > 0 ) /*0x51474c*/
      {
        v26 = *(int **)(a1 + 8); /*0x514752*/
        v65 = v26[39]; /*0x514761*/
        v66 = v26[40]; /*0x514768*/
        v67 = v26[41]; /*0x51476f*/
        if ( (*(unsigned __int8 (__thiscall **)(int *))(*v26 + 192))(v26) /*0x5147a2*/
          && (*(_DWORD *)(a1 + 32) != dword_A8ED54[267]
           || *(_DWORD *)(a1 + 36) != dword_A8ED54[268]
           || *(_DWORD *)(a1 + 40) != dword_A8ED54[269]) )
        {
          v27 = *(_DWORD *)(a1 + 8); /*0x5147a4*/
          v63 = *(double *)(v27 + 156); /*0x5147b3*/
          v64 = *(_DWORD *)(v27 + 164); /*0x5147c1*/
          (*(void (__thiscall **)(int, double *))(*(_DWORD *)v27 + 244))(v27, &v63); /*0x5147cc*/
          *(_BYTE *)(*(_DWORD *)(a1 + 8) + 1718) = 0; /*0x5147d5*/
          *(_BYTE *)(*(_DWORD *)(a1 + 8) + 1719) = 0; /*0x5147df*/
        }
        v61 = v65; /*0x5147f2*/
        v62 = v66; /*0x5147fa*/
        v57 = (double)(*(__int16 *)ProgressTimer::GetValue((_WORD *)(a1 + 44), &v59) - 0x3FFF) * -0.00009587672516830327; /*0x51481a*/
        v28 = HIDWORD(v57); /*0x514822*/
        v29 = LODWORD(v57); /*0x514826*/
        v56 = (double)SLODWORD(v56); /*0x51482c*/
        v63 = (double)v62; /*0x514834*/
        v30 = Math::SinCos(v57); /*0x514838*/
        LODWORD(v57) = Math::RoundToInt(v63 - v30 * v56); /*0x51484c*/
        v31 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v28, v29))); /*0x514850*/
        v32 = Math::RoundToInt(v31 * v56 + (double)v61); /*0x514860*/
        v33 = *(_DWORD *)(a1 + 8); /*0x514865*/
        v65 = v32; /*0x51486e*/
        v66 = LODWORD(v57); /*0x514878*/
        v34 = *(_DWORD *)(v33 + 156); /*0x51487c*/
        HIDWORD(v63) = *(_DWORD *)(v33 + 160); /*0x514881*/
        v64 = *(_DWORD *)(v33 + 164); /*0x514888*/
        WORD1(v56) = SHIDWORD(v63) / 256; /*0x5148a7*/
        if ( (unsigned __int16)(v65 / 256) == (unsigned __int16)(v34 / 256) /*0x5148d9*/
          && (unsigned __int16)(SLODWORD(v57) / 256) == WORD1(v56) )
        {
          v41 = *(_BYTE *)(v33 + 116); /*0x5149f7*/
          *(_BYTE *)(v33 + 116) = 0; /*0x5149fa*/
          (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a1 + 8) + 436))(*(_DWORD *)(a1 + 8), &v65); /*0x514a08*/
          ObjectClass::SetAnim(*(_DWORD **)(a1 + 8), v58); /*0x514a16*/
          *(_BYTE *)(*(_DWORD *)(a1 + 8) + 116) = v41; /*0x514a1e*/
        }
        else
        {
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v33 + 292))(v33, 0); /*0x5148e3*/
          (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a1 + 8) + 436))(*(_DWORD *)(a1 + 8), &v65); /*0x5148f3*/
          ObjectClass::SetAnim(*(_DWORD **)(a1 + 8), v58); /*0x514901*/
          v35 = Coord::To_Cell(MEMORY[0x87F7E8], &v65); /*0x514910*/
          v36 = *(_BYTE **)(a1 + 8); /*0x514915*/
          v37 = v35; /*0x514918*/
          if ( !v36[140] /*0x51493f*/
            && (v35[80] & 0x100) != 0
            && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v36 + 456))(v36) >= dword_A8ED54[280] )
          {
            *(_BYTE *)(*(_DWORD *)(a1 + 8) + 140) = 1; /*0x514944*/
          }
          v38 = *(_DWORD *)(a1 + 8); /*0x51494b*/
          if ( *(_BYTE *)(v38 + 140) == 1 && (v37[80] & 0x100) == 0 ) /*0x51495d*/
            *(_BYTE *)(v38 + 140) = 0; /*0x51495f*/
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 292))(*(_DWORD *)(a1 + 8), 1); /*0x51496d*/
        }
      }
    }
  }
LABEL_66:
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1 + 128))(a1) ) /*0x514a24*/
  {
    if ( !(dword_A8ED54[12] % 10) ) /*0x514a3d*/
    {
      v42 = *(_BYTE **)(a1 + 8); /*0x514a47*/
      if ( !v42[140] && *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v42 + 444))(v42) + 236) == 2 ) /*0x514a63*/
      {
        if ( *(_DWORD *)(MEMORY[0x87F7E8][7806] + 148) ) /*0x514a6a*/
        {
          v43 = (void **)__2_YAPAXI_Z(456); /*0x514a79*/
          if ( v43 ) /*0x514a83*/
          {
            v44 = (int *)(*(_DWORD *)(a1 + 8) + 156); /*0x514a8a*/
            v65 = *v44; /*0x514a9d*/
            v66 = v44[1]; /*0x514aa4*/
            v67 = v44[2]; /*0x514ab0*/
            AnimClass::ctor(v43, *(void **)(MEMORY[0x87F7E8][7806] + 148), &v65, 0, 1, (void *)0x600, 0, 0); /*0x514ac3*/
          }
        }
      }
    }
  }
  BuildingLightClass::UpdateOscillation(a1 - 4); /*0x514acb*/
  if ( *(_BYTE *)(a1 + 100) )
  {
    if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1 + 96))(a1) ) /*0x514ade*/
      goto LABEL_81; /*0x514ade*/
    Value = ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 8) + 904), &v59); /*0x514af3*/
    v46 = *(_DWORD *)(a1 + 8); /*0x514b07*/
    LOWORD(v58) = *(_WORD *)Value + (*(_WORD *)(a1 + 104) << 8); /*0x514b0a*/
    FacingClass::Set_SyncLog((char *)(v46 + 904), &v58); /*0x514b1d*/
    v47 = *(_DWORD *)(a1 + 104); /*0x514b22*/
    v48 = abs32(v47); /*0x514b2a*/
    if ( v48 >= 1 ) /*0x514b2f*/
      v48 = 1; /*0x514b31*/
    v49 = v47 >= 0 ? v47 - v48 : v48 + v47;
    *(_DWORD *)(a1 + 104) = v49; /*0x514b42*/
    if ( !v49 ) /*0x514b47*/
LABEL_81:
      *(_BYTE *)(a1 + 100) = 0; /*0x514b49*/
    if ( !*(_BYTE *)(a1 + 100) ) /*0x514b4d*/
    {
      v50 = (int *)(*(_DWORD *)(a1 + 8) + 156); /*0x514b5b*/
      v65 = *v50; /*0x514b63*/
      v66 = v50[1]; /*0x514b6f*/
      v67 = v50[2]; /*0x514b7b*/
      v51 = Coord::To_Cell(MEMORY[0x87F7E8], &v65); /*0x514b7f*/
      BuildingClass::CreateIdleAnim((int)v51); /*0x514b86*/
      v52 = (int *)(*(_DWORD *)(a1 + 8) + 156); /*0x514b8e*/
      v65 = *v52; /*0x514b96*/
      v66 = v52[1]; /*0x514ba2*/
      v67 = v52[2]; /*0x514ba9*/
      if ( *((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], &v65) + 59) == 2 ) /*0x514bbe*/
      {
        v53 = (int *)(*(_DWORD *)(a1 + 8) + 156); /*0x514bc3*/
        v65 = *v53; /*0x514bcc*/
        v66 = v53[1]; /*0x514bd3*/
        v54 = v53[2]; /*0x514bd7*/
        v65 = *v53; /*0x514bdc*/
        v66 = v53[1]; /*0x514be7*/
        v67 = v53[2]; /*0x514bf4*/
        if ( v54 < dword_A8ED54[283] + Cell::GetGroundHeight(&v65) ) /*0x514c05*/
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 236))(*(_DWORD *)(a1 + 8)); /*0x514c0c*/
      }
    }
  }
  return (*(char (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1); /*0x514358*/
}


// ==== 0x00514C30  JumpjetLocomotionClass::HasScoreDisplayChanged  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_514C30(_DWORD *a1)
{
  return a1[5] != MEMORY[0xA8F180] /*0x514c6a*/
      || a1[6] != MEMORY[0xA8F184]
      || a1[7] != MEMORY[0xA8F188]
      || a1[8] != MEMORY[0xA8F180]
      || a1[9] != MEMORY[0xA8F184]
      || a1[10] != MEMORY[0xA8F188];
}


// ==== 0x00514C80  HoverLocomotionClass::ComputeFloatExpression_2  this=HoverLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_514C80(int a1)
{
  return (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1) && *(double *)(a1 + 68) != 0.0; /*0x514ca4*/
}


// ==== 0x00514CB0  JumpjetLocomotionClass::HasScoreDisplayChanged_514CB0  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_514CB0(_DWORD *a1, _DWORD *a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // edx
  int v5; // eax

  if ( a1[5] == MEMORY[0xA8F180] /*0x514cd9*/
    && (v2 = MEMORY[0xA8F184], a1[6] == MEMORY[0xA8F184])
    && (v3 = MEMORY[0xA8F188], a1[7] == MEMORY[0xA8F188]) )
  {
    *a2 = MEMORY[0xA8F180]; /*0x514cff*/
    a2[1] = v2; /*0x514d01*/
    a2[2] = v3; /*0x514d04*/
    return a2; /*0x514cf9*/
  }
  else
  {
    v4 = a1[6]; /*0x514ce2*/
    v5 = a1[7]; /*0x514ce5*/
    *a2 = a1[5]; /*0x514cea*/
    a2[1] = v4; /*0x514cec*/
    a2[2] = v5; /*0x514cef*/
    return a2; /*0x514cf2*/
  }
}


// ==== 0x00514D10  JumpjetLocomotionClass::HasScoreDisplayChanged_514D10  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_514D10(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi

  if ( a1[8] == MEMORY[0xA8F180] && a1[9] == MEMORY[0xA8F184] && a1[10] == MEMORY[0xA8F188] ) /*0x514d3b*/
  {
    v5 = a1[2]; /*0x514d5b*/
    v6 = v5 + 156; /*0x514d64*/
    v7 = *(_DWORD *)(v5 + 156); /*0x514d66*/
    v8 = *(_DWORD *)(v5 + 160); /*0x514d68*/
    v9 = *(_DWORD *)(v6 + 8); /*0x514d6b*/
    *a2 = v7; /*0x514d74*/
    a2[1] = v8; /*0x514d76*/
    a2[2] = v9; /*0x514d79*/
    return a2; /*0x514d6e*/
  }
  else
  {
    v2 = a1[9]; /*0x514d44*/
    v3 = a1[10]; /*0x514d47*/
    *a2 = a1[8]; /*0x514d4c*/
    a2[1] = v2; /*0x514d4e*/
    a2[2] = v3; /*0x514d51*/
    return a2; /*0x514d54*/
  }
}


// ==== 0x00514D90  HoverLocomotionClass::SetMovementTarget  this=HoverLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_514D90(int a1, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // ebx
  int v6; // esi
  int v7; // ebp
  _DWORD *v8; // edi
  int v9; // eax
  _DWORD *result; // eax
  int v11; // edi
  int *v12; // esi
  int v13; // edi
  int v14; // esi
  int v15; // edi
  int v16; // ebx
  _WORD *v17; // eax
  bool v18; // bl
  int v19; // ecx
  _DWORD v20[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = a4; /*0x514d93*/
  v5 = a2; /*0x514d99*/
  v6 = a1; /*0x514d9e*/
  v7 = a3; /*0x514da2*/
  v8 = (_DWORD *)(a1 + 20); /*0x514da7*/
  v9 = a1 + 20; /*0x514daa*/
  *(_DWORD *)(a1 + 20) = a2; /*0x514dac*/
  *(_DWORD *)(v9 + 4) = v7; /*0x514dae*/
  *(_DWORD *)(v9 + 8) = v4; /*0x514db1*/
  result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v6 + 8) + 896))(*(_DWORD *)(v6 + 8)); /*0x514db9*/
  if ( !(_BYTE)result ) /*0x514dc1*/
  {
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v6 + 96))(v6) /*0x514de4*/
      && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v6 + 100))(v6)
      && HouseClass::IonSensitivesShouldBeOffline() )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 92))(v6); /*0x514df0*/
    }
    *(_DWORD *)(v6 + 28) = Cell::GetGroundHeight(v8); /*0x514e02*/
    v11 = a4; /*0x514e05*/
    v20[0] = v5; /*0x514e0f*/
    v20[1] = v7; /*0x514e13*/
    v20[2] = a4; /*0x514e17*/
    result = Coord::To_Cell(&MEMORY[0x87F7E8], v20); /*0x514e1b*/
    if ( (result[80] & 0x100) != 0 ) /*0x514e29*/
    {
      result = (_DWORD *)(MEMORY[0xA8F1B4] + *(_DWORD *)(v6 + 28)); /*0x514e34*/
      *(_DWORD *)(v6 + 28) = result; /*0x514e36*/
    }
    if ( v5 != MEMORY[0xA8F180] || v7 != MEMORY[0xA8F184] || v11 != MEMORY[0xA8F188] ) /*0x514e4f*/
    {
      result = (_DWORD *)(*(int (__stdcall **)(int))(*(_DWORD *)v6 + 96))(v6); /*0x514e58*/
      if ( (_BYTE)result ) /*0x514e5d*/
      {
        if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v6 + 128))(v6) ) /*0x514e66*/
        {
          result = (_DWORD *)MEMORY[0xA8F180]; /*0x514ea1*/
          if ( *(_DWORD *)(v6 + 32) == MEMORY[0xA8F180] /*0x514ecd*/
            && *(_DWORD *)(v6 + 36) == MEMORY[0xA8F184]
            && *(_DWORD *)(v6 + 40) == MEMORY[0xA8F188] )
          {
            v13 = *(_DWORD *)(v6 + 32); /*0x514ed3*/
            v14 = v6 - 4; /*0x514ed6*/
            v18 = 1; /*0x514f28*/
            if ( v13 != MEMORY[0xA8F180] /*0x514ee5*/
              || *(_DWORD *)(v14 + 40) != MEMORY[0xA8F184]
              || *(_DWORD *)(v14 + 44) != MEMORY[0xA8F188] )
            {
              v15 = *(_DWORD *)(v14 + 36) / 256; /*0x514f0d*/
              v16 = *(_DWORD *)(v14 + 40) / 256; /*0x514f10*/
              v17 = (_WORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v14 + 12) + 440))( /*0x514f13*/
                               *(_DWORD *)(v14 + 12),
                               &a1);
              if ( *v17 != (_WORD)v15 || v17[1] != (_WORD)v16 ) /*0x514f22*/
                v18 = 0; /*0x514ee5*/
            }
            v19 = *(_DWORD *)(v14 + 12); /*0x514f2a*/
            *(_DWORD *)(v14 + 72) = 0; /*0x514f2d*/
            *(_DWORD *)(v14 + 76) = 1072693248; /*0x514f34*/
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v19 + 1348))(v19, 0, 1072693248); /*0x514f44*/
            result = (_DWORD *)MovementAI::StepFootClass((int *)v14, 0); /*0x514f4e*/
            if ( v18 ) /*0x514f55*/
              return (_DWORD *)MovementAI::MainFootClass((int *)v14, 1); /*0x514f5b*/
          }
        }
        else
        {
          (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v6 + 8) + 1348))( /*0x514e7c*/
            *(_DWORD *)(v6 + 8),
            0,
            1072693248);
          v12 = (int *)(v6 - 4); /*0x514e82*/
          MovementAI::StepFootClass(v12, 0); /*0x514e89*/
          return (_DWORD *)MovementAI::MainFootClass(v12, 1); /*0x514e92*/
        }
      }
    }
  }
  return result; /*0x514e97*/
}


// ==== 0x00514F70  MovementAI::MainFootClass  this=ObjectClass  sig=csp ====
int __thiscall MovementAI::MainFootClass(int *this, char a2)
{
  TechnoClass *v3; // esi
  int result; // eax
  IUnknown *v5; // ecx
  int *v6; // ecx
  int v7; // eax
  IUnknown *v8; // ecx
  int v9; // ecx
  IUnknown *v10; // eax
  IUnknown *v11; // edx
  int v12; // edx
  int v13; // esi
  int v14; // edi
  _DWORD *v15; // eax
  ObjectClass *Coords; // eax
  int v17; // edx
  int v18; // ecx
  IUnknown *v19; // esi
  int v20; // edx
  int *v21; // eax
  int *v22; // edi
  int v23; // eax
  AudioController *v24; // edx
  AudioController *v25; // edi
  IUnknown *v26; // esi
  int v27; // ecx
  ObjectClass *GroundHeight; // edi
  TechnoClass *v29; // ecx
  int v30; // eax
  IUnknown *v31; // ecx
  IUnknown *v32; // ecx
  _WORD *v33; // eax
  int v34; // edi
  __int16 v35; // dx
  int v36; // eax
  IUnknown *v37; // ecx
  _DWORD *v38; // eax
  IUnknown *v39; // eax
  IUnknown *v40; // eax
  IUnknown *v41; // eax
  _DWORD *v42; // eax
  IUnknown *v43; // ecx
  IUnknown *v44; // ecx
  IUnknown *v45; // edi
  void *v46; // eax
  _DWORD *v47; // eax
  IUnknown *v48; // ecx
  _DWORD *v49; // ecx
  int v50; // edx
  IUnknown *v51; // ecx
  IUnknown *v52; // ecx
  int v53; // edx
  IUnknown *v54; // ecx
  _DWORD *v55; // edx
  _DWORD *v56; // eax
  IUnknown *v57; // eax
  int *v58; // ecx
  __int64 v59; // rax
  int v60; // ecx
  AudioController *v61; // edi
  int v62; // ecx
  _DWORD *v63; // eax
  IUnknown *v64; // ecx
  IUnknown *v65; // ecx
  IUnknown *v66; // edx
  IUnknown *v67; // ecx
  _DWORD *v68; // edx
  _DWORD *v69; // eax
  _DWORD *v70; // eax
  IUnknown *ObjectCell; // eax
  IUnknown *v72; // ecx
  IUnknown *v73; // edi
  _DWORD *v74; // eax
  int v75; // eax
  int v76; // edi
  void *v77; // eax
  IUnknown *v78; // ecx
  IUnknown *v79; // eax
  _DWORD *v80; // edx
  int v81; // ecx
  IUnknown *v82; // esi
  IUnknown *v83; // edi
  int v84; // edx
  int v85; // eax
  IUnknown *v86; // ecx
  int v87; // eax
  int v88; // ecx
  int v89; // edi
  char v90; // al
  TechnoClass *v91; // [esp+10h] [ebp-78h]
  TechnoClass *LandHeight; // [esp+14h] [ebp-74h]
  IUnknown *v93; // [esp+1Ch] [ebp-6Ch]
  IUnknown *v94; // [esp+1Ch] [ebp-6Ch]
  IUnknown *v95; // [esp+2Ch] [ebp-5Ch] BYREF
  IUnknown *v96; // [esp+30h] [ebp-58h] BYREF
  ObjectClass *aP4; // [esp+34h] [ebp-54h] BYREF
  _DWORD v98[2]; // [esp+38h] [ebp-50h] BYREF
  ObjectClass *v99; // [esp+40h] [ebp-48h] BYREF
  int v100; // [esp+44h] [ebp-44h]
  IUnknown *v101; // [esp+48h] [ebp-40h]
  ObjectClass *v102; // [esp+4Ch] [ebp-3Ch] BYREF
  AudioController *v103; // [esp+50h] [ebp-38h]
  AudioController *v104; // [esp+54h] [ebp-34h]
  int v105; // [esp+58h] [ebp-30h] BYREF
  int v106; // [esp+5Ch] [ebp-2Ch]
  int v107; // [esp+60h] [ebp-28h]
  int v108; // [esp+64h] [ebp-24h] BYREF
  int v109; // [esp+68h] [ebp-20h]
  AudioController *v110; // [esp+6Ch] [ebp-1Ch]
  char v111[12]; // [esp+70h] [ebp-18h] BYREF
  int v112; // [esp+7Ch] [ebp-Ch] BYREF
  int v113; // [esp+80h] [ebp-8h]

  v3 = (TechnoClass *)&CONTAINING_RECORD(this, TechnoClass, uniqueId)->attachedTag;
  if ( this->objectTypeFlags != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684]
    || this->owningHouseIndex != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688]
    || this->fallRate != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692] )
  {
    (*(void (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->vtable4 + 244))(this->vtable4, this + 9);
    *(_DWORD *)v3->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684];
    this->owningHouseIndex = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688];
    this->fallRate = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692];
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)this->vtable4 + 896))(this->vtable4) )
    return 7;
  if ( !(*(unsigned __int8 (__stdcall **)(int *))(this->vtable2 + 16))(this + 1)
    || this->nextArrayIndex == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684]
    && this->referenceCount == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688]
    && this->vtable3 == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692] )
  {
    return 0;
  }
  v5 = (IUnknown *)this->vtable4;
  v96 = *(IUnknown **)&v5->__pad_524[188];
  if ( v96 == (IUnknown *)8 )
  {
    v6 = &v5->field_9C;
    v102 = (ObjectClass *)*v6;
    v103 = (AudioController *)v6[1];
    v104 = (AudioController *)v6[2];
    v7 = *((__int16 *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v102) + 139);
    v95 = (IUnknown *)v7;
    if ( v7 < 0 || v7 >= *(int *)&MEMORY[0x89F690].__pad_579C[62236] )
    {
      *(_DWORD *)(this->vtable4 + 1504) = -1;
      *(_DWORD *)v3->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684];
      v31 = (IUnknown *)this->vtable4;
      this->owningHouseIndex = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688];
      this->fallRate = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692];
      (*(void (__thiscall **)(IUnknown *, _DWORD, int))(v31->field_0 + 1152))(v31, 0, 1);
      v32 = (IUnknown *)this->vtable4;
      this->abstractFlags = 0;
      this->q012 = 0;
      this->q054 = 0;
      this->q04C = 0;
      (*(void (__thiscall **)(IUnknown *, _DWORD, _DWORD))(v32->field_0 + 1348))(v32, 0, 0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)this->vtable4 + 1152))(this->vtable4, 0, 1);
      return 7;
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this->vtable4 + 292))(this->vtable4, 0);
      v8 = (IUnknown *)this->vtable4;
      v99 = (ObjectClass *)v8->field_9C;
      v100 = *(_DWORD *)v8->__pad_A0;
      v101 = (IUnknown *)v8->field_A4;
      (*(void (__thiscall **)(IUnknown *, ObjectClass **))(v8->field_0 + 244))(v8, &v99);
      aP4 = *(ObjectClass **)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62224] + 4 * (_DWORD)v95);
      v96 = (IUnknown *)aP4->owningHouseIndex;
      v9 = SHIWORD(v96) << 8;
      this->objectTypeFlags = ((__int16)v96 << 8) + 128;
      v10 = (IUnknown *)this->vtable4;
      this->owningHouseIndex = v9 + 128;
      this->fallRate = 0;
      qmemcpy(&v10->__pad_524[188], &v10->__pad_524[192], 0x5Cu);
      LOWORD(v96) = this->objectTypeFlags / 256;
      v11 = (IUnknown *)this->vtable4;
      HIWORD(v96) = this->owningHouseIndex / 256;
      *(_DWORD *)&v11->__pad_524[52] = v96;
      LOBYTE(v10) = (_BYTE)v95;
      *(_DWORD *)(this->vtable4 + 1596) = -1;
      *(_BYTE *)(this->vtable4 + 1668) = (_BYTE)v10;
      *(_BYTE *)(this->vtable4 + 1669) = 0;
      v12 = (int)aP4->nextObject & 7;
      v96 = (IUnknown *)aP4->objectTypeFlags;
      v95 = v96;
      v13 = (__int16)v96 << 8;
      LOWORD(v96) = (_WORD)v96 + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v12);
      v14 = (SHIWORD(v96) << 8) + 128;
      HIWORD(v96) = HIWORD(v95) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v12);
      v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v96);
      Coords = (ObjectClass *)CellClass::GetCoords(v15, &v108);
      v17 = *(_DWORD *)&Coords->__pad_0[4];
      v18 = *(_DWORD *)Coords->__pad_0 - (v13 + 128);
      v19 = (IUnknown *)this->vtable4;
      v110 = *(AudioController **)&Coords->__pad_0[8];
      v20 = v17 - v14;
      v21 = &v19->field_9C;
      v19 = (IUnknown *)((char *)v19 + 1384);
      v22 = v21;
      v102 = (ObjectClass *)*v21;
      v23 = v20 + v21[1];
      v24 = v110;
      v104 = (AudioController *)v22[2];
      v25 = v104;
      v19->field_0 = (int)&v102->__pad_0[v18];
      v19->field_4 = v23;
      v19->field_8 = (int)&v24->__pad_0[(_DWORD)v25];
      v26 = (IUnknown *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->vtable4 + 464))(this->vtable4);
      v27 = this->vtable4 + 156;
      v102 = *(ObjectClass **)v27;
      v103 = *(AudioController **)(v27 + 4);
      v104 = *(AudioController **)(v27 + 8);
      GroundHeight = (ObjectClass *)Cell::GetGroundHeight(&v102);
      v104 = 0;
      v29 = (TechnoClass *)aP4->owningHouseIndex;
      aP4 = *(ObjectClass **)&aP4[2].bombVisible;
      v102 = (ObjectClass *)(((__int16)v29 << 8) + 128);
      v103 = (AudioController *)((SHIWORD(v29) << 8) + 128);
      v30 = Cell::GetGroundHeight(&v102);
      *(_DWORD *)(this->vtable4 + 1392) = (char *)v26 + (v30 - (int)GroundHeight) / (int)aP4;
      return 7;
    }
  }
  if ( v96 == (IUnknown *)-1 )
  {
    MovementAI::StepFootClass(this, 0);
    return 0;
  }
  v33 = (_WORD *)(*(int (__thiscall **)(IUnknown *, ObjectClass **))(v5->field_0 + 440))(v5, &aP4);
  v34 = (unsigned __int8)v96 & 7;
  v35 = v33[1] + *((_WORD *)&MEMORY[0x89F68A] + 2 * v34);
  *(_DWORD *)v3->__pad_0 = ((__int16)(*((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v34) + *v33) << 8) + 128;
  this->owningHouseIndex = (v35 << 8) + 128;
  this->fallRate = 0;
  v36 = Cell::GetGroundHeight(this + 9);
  v37 = (IUnknown *)this->vtable4;
  this->fallRate = v36;
  v37 = (IUnknown *)((char *)v37 + 156);
  v102 = (ObjectClass *)v37->field_0;
  v103 = (AudioController *)v37->field_4;
  v104 = (AudioController *)v37->field_8;
  if ( (int)v104 >= v36
                  + 2 * *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1748]
                  + *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1748] )
    this->fallRate = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1736] + v36;
  v93 = (IUnknown *)this->vtable4;
  v38 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)(this + 9));
  if ( !CrateClass::ProcessPickup(v38, (AbstractClass *)v93) )
  {
    v39 = (IUnknown *)this->vtable4;
    if ( !v39->__pad_68[25] )
    {
      if ( v39->__pad_8C[4] && !v39->__pad_8C[1] )
      {
        *(_DWORD *)&v39->__pad_524[188] = -1;
        *(_DWORD *)v3->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684];
        this->owningHouseIndex = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688];
        this->fallRate = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692];
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)this->vtable4 + 1152))(this->vtable4, 0, 1);
        this->abstractFlags = 0;
        this->q012 = 0;
        this->q054 = 0;
        this->q04C = 0;
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)this->vtable4 + 1348))(this->vtable4, 0, 0);
        return 7;
      }
      return 7;
    }
  }
  v40 = (IUnknown *)this->vtable4;
  if ( !v40->__pad_8C[4] || v40->__pad_68[25] || v40->__pad_8C[1] )
    return 7;
  v41 = Coord::Subtract(
          &v108,
          (IUnknown *)(*(_DWORD *)&MEMORY[0x89F690].__pad_48[8 * v34] + v40->field_9C),
          (IUnknown *)(*(_DWORD *)v40->__pad_A0 + *(_DWORD *)&MEMORY[0x89F690].__pad_48[8 * v34 + 4]),
          (IUnknown *)v40->field_A4);
  v102 = (ObjectClass *)v41->field_0;
  v103 = (AudioController *)v41->field_4;
  v104 = (AudioController *)v41->field_8;
  v42 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v102);
  v43 = (IUnknown *)this->vtable4;
  if ( v43->__pad_8C[0] != ((v42[80] >> 8) & 1) )
    v43->__pad_524[359] = 1;
  LOWORD(aP4) = *(_DWORD *)v3->__pad_0 / 256;
  HIWORD(aP4) = this->owningHouseIndex / 256;
  v95 = (IUnknown *)aP4;
  v44 = (IUnknown *)this->vtable4;
  v45 = (IUnknown *)v44->field_0;
  LandHeight = (TechnoClass *)ObjectClass::GetLandHeight(v44);
  v91 = (TechnoClass *)v96;
  v46 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v95);
  v96 = (IUnknown *)(*(int (__thiscall **)(_DWORD, void *, TechnoClass *, TechnoClass *, _DWORD, int))&v45->__pad_188[36])(
                      this->vtable4,
                      v46,
                      v91,
                      LandHeight,
                      0,
                      1);
  switch ( (unsigned int)v96 )
  {
    case 0u:
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this->vtable4 + 396))(this->vtable4, 2);
      v65 = (IUnknown *)this->vtable4;
      if ( !v65->__pad_8C[4] || v65->__pad_68[25] || v65->__pad_8C[1] )
        return 7;
      if ( v65->__pad_3BC[25] )
        (*(void (__thiscall **)(IUnknown *, int *))(v65->field_0 + 240))(v65, this + 9);
      qmemcpy((void *)(this->vtable4 + 1504), (const void *)(this->vtable4 + 1508), 0x5Cu);
      *(_DWORD *)(this->vtable4 + 1596) = -1;
      LOWORD(aP4) = this->objectTypeFlags / 256;
      v66 = (IUnknown *)this->vtable4;
      HIWORD(aP4) = this->owningHouseIndex / 256;
      *(_DWORD *)&v66->__pad_524[52] = aP4;
      return (int)v96;
    case 1u:
    case 7u:
      v47 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)(this + 9));
      CellClass::DamageAllObjects(v47);
      if ( a2 )
      {
        v48 = (IUnknown *)this->vtable4;
        this->abstractFlags = 0;
        this->q012 = 0;
        this->q054 = 0;
        this->q04C = 0;
        (*(void (__thiscall **)(IUnknown *, _DWORD, _DWORD))(v48->field_0 + 1348))(v48, 0, 0);
        if ( *(_DWORD *)v3->__pad_0 != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684]
          || this->owningHouseIndex != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688]
          || this->fallRate != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692] )
        {
          (*(void (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->vtable4 + 244))(this->vtable4, this + 9);
          *(_DWORD *)v3->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684];
          this->owningHouseIndex = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688];
          this->fallRate = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692];
        }
        v49 = (_DWORD *)(this->vtable4 + 1600);
        *v49 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664];
        v49[1] = v109;
        v49[2] = 0;
        *(_DWORD *)(this->vtable4 + 1504) = -1;
        MovementAI::StepFootClass(this, 0);
        v96 = (IUnknown *)MovementAI::MainFootClass(this, 0);
      }
      if ( v96 )
      {
        *(_DWORD *)v3->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684];
        this->owningHouseIndex = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688];
        v50 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692];
        this->abstractFlags = 0;
        this->q012 = 0;
        this->fallRate = v50;
        v51 = (IUnknown *)this->vtable4;
        this->q054 = 0;
        this->q04C = 0;
        (*(void (__thiscall **)(IUnknown *, _DWORD, _DWORD))(v51->field_0 + 1348))(v51, 0, 0);
        if ( *(_DWORD *)v3->__pad_0 != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684]
          || this->owningHouseIndex != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688]
          || this->fallRate != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692] )
        {
          (*(void (__thiscall **)(_DWORD, TechnoClass *))(*(_DWORD *)this->vtable4 + 244))(this->vtable4, v3);
          *(_DWORD *)v3->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684];
          *(_DWORD *)&v3->__pad_0[4] = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688];
          *(_DWORD *)&v3->__pad_0[8] = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692];
        }
      }
      return (int)v96;
    case 2u:
      *(_DWORD *)v3->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684];
      this->owningHouseIndex = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688];
      v78 = (IUnknown *)this->vtable4;
      this->fallRate = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692];
      this->abstractFlags = 0;
      this->q012 = 0;
      this->q054 = 0;
      this->q04C = 0;
      (*(void (__thiscall **)(IUnknown *, _DWORD, _DWORD))(v78->field_0 + 1348))(v78, 0, 0);
      if ( *(_DWORD *)v3->__pad_0 != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684]
        || this->owningHouseIndex != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688]
        || this->fallRate != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692] )
      {
        (*(void (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->vtable4 + 244))(this->vtable4, this + 9);
        *(_DWORD *)v3->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684];
        this->owningHouseIndex = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688];
        this->fallRate = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692];
      }
      v79 = (IUnknown *)this->vtable4;
      if ( !v79->__pad_690[39] )
      {
        v79->__pad_690[39] = 1;
        v80 = (_DWORD *)(this->vtable4 + 1640);
        v81 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5992);
        *v80 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664];
        v80[1] = v113;
        v80[2] = v81;
      }
      v82 = (IUnknown *)this->vtable4;
      v83 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664];
      v84 = *(_DWORD *)&v82->__pad_524[284];
      v85 = *(_DWORD *)&v82->__pad_524[292];
      if ( v84 == -1 )
        goto LABEL_90;
      if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v84 >= v85 )
        goto LABEL_91;
      v85 -= *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v84;
LABEL_90:
      if ( !v85 )
      {
LABEL_91:
        *(_DWORD *)&v82->__pad_524[188] = -1;
        v83 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664];
      }
      v86 = (IUnknown *)this->vtable4;
      if ( !v86->__pad_690[39] )
        goto LABEL_98;
      v87 = *(_DWORD *)&v86->__pad_524[332];
      v88 = *(_DWORD *)&v86->__pad_524[324];
      if ( v88 == -1 )
        goto LABEL_96;
      v89 = (int)v83 - v88;
      if ( v89 >= v87 )
        goto LABEL_97;
      v87 -= v89;
LABEL_96:
      if ( v87 )
LABEL_98:
        v90 = 0;
      else
LABEL_97:
        v90 = 1;
      MovementAI::StepFootClass(this, (ObjectClass *)((v90 != 0) + 1));
      return (int)v96;
    case 3u:
      *(_DWORD *)v3->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684];
      this->owningHouseIndex = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688];
      this->fallRate = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692];
      Cell::IsPassableAllied(this->vtable4, (__int16 *)&v95);
      v52 = (IUnknown *)this->vtable4;
      this->abstractFlags = 0;
      this->q012 = 0;
      this->q054 = 0;
      this->q04C = 0;
      (*(void (__thiscall **)(IUnknown *, _DWORD, _DWORD))(v52->field_0 + 1348))(v52, 0, 0);
      if ( *(_DWORD *)v3->__pad_0 == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684]
        && this->owningHouseIndex == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688] )
      {
        goto LABEL_61;
      }
      goto LABEL_62;
    case 4u:
    case 5u:
      *(_DWORD *)v3->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684];
      this->owningHouseIndex = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688];
      this->fallRate = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692];
      if ( a2 )
      {
        v67 = (IUnknown *)this->vtable4;
        this->abstractFlags = 0;
        this->q012 = 0;
        this->q054 = 0;
        this->q04C = 0;
        (*(void (__thiscall **)(IUnknown *, _DWORD, _DWORD))(v67->field_0 + 1348))(v67, 0, 0);
        if ( *(_DWORD *)v3->__pad_0 != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684]
          || this->owningHouseIndex != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688]
          || this->fallRate != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692] )
        {
          (*(void (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->vtable4 + 244))(this->vtable4, this + 9);
          *(_DWORD *)v3->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684];
          this->owningHouseIndex = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688];
          this->fallRate = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692];
        }
        v68 = (_DWORD *)(this->vtable4 + 1600);
        *v68 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664];
        v68[1] = v113;
        v68[2] = 0;
        *(_DWORD *)(this->vtable4 + 1504) = -1;
        MovementAI::StepFootClass(this, 0);
        result = MovementAI::MainFootClass(this, 0);
        v96 = (IUnknown *)result;
        return result;
      }
      v98[0] = 0;
      v98[1] = 0;
      v69 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v95);
      if ( Object::FindObjectCell(v69, (TechnoClass *)v98, 0) )
      {
        v99 = 0;
        v100 = 0;
        v70 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v95);
        ObjectCell = (IUnknown *)Object::FindObjectCell(v70, (TechnoClass *)&v99, 0);
        if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(this->vtable4 + 540), ObjectCell) )
          return (int)v96;
        v72 = (IUnknown *)this->vtable4;
        v102 = 0;
        v103 = 0;
        v73 = (IUnknown *)v72->field_0;
        v74 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v95);
        v75 = Object::FindObjectCell(v74, (TechnoClass *)&v102, 0);
        (*(void (__thiscall **)(_DWORD, int, int, _DWORD))&v73->__pad_1D8[28])(this->vtable4, 1, v75, 0);
        return (int)v96;
      }
      if ( *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v95) + 17) != -1
        && *(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4
                                                          * *((_DWORD *)CellCoord::To_CellObj(
                                                                          &MEMORY[0x87F7E8],
                                                                          (__int16 *)&v95)
                                                            + 17)]
                    + 680) )
      {
        v76 = *(_DWORD *)this->vtable4;
        v77 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v95);
        (*(void (__thiscall **)(_DWORD, int, void *, _DWORD))(v76 + 500))(this->vtable4, 1, v77, 0);
        return (int)v96;
      }
      return (int)v96;
    case 6u:
      if ( !a2 )
      {
        v56 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *))(*(_DWORD *)this->vtable4 + 72))(this->vtable4, v111);
        v57 = Coord::Subtract(
                &v112,
                (IUnknown *)(*v56 - this->nextArrayIndex),
                (IUnknown *)(v56[1] - this->referenceCount),
                (IUnknown *)(v56[2] - this->vtable3));
        v105 = v57->field_0;
        v106 = v57->field_4;
        v107 = v57->field_8;
        if ( (int)Coord::Length(&v105) < *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5912) )
        {
          v58 = (int *)(this->vtable4 + 156);
          v105 = *v58;
          v106 = v58[1];
          v59 = this->vtable3 - v58[2];
          if ( (int)((HIDWORD(v59) ^ v59) - HIDWORD(v59)) < 2 * *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1748] )
          {
            v108 = *v58;
            v109 = v58[1];
            v110 = (AudioController *)v58[2];
            if ( *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v108) + 59) != 10 )
            {
              (*(void (__stdcall **)(int *))(this->vtable2 + 72))(this + 1);
              (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)this->vtable4 + 1152))(this->vtable4, 0, 1);
              return 7;
            }
          }
        }
        if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)(this + 9)) + 80) & 0x100) == 0
          || (v60 = this->vtable4 + 156,
              v105 = *(_DWORD *)v60,
              v106 = *(_DWORD *)(v60 + 4),
              v61 = *(AudioController **)(v60 + 8),
              v62 = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)(this + 9)) + 283),
              LOBYTE(aP4) = 1,
              (int)abs32((int)v61 / *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1748] - v62) <= 2) )
        {
          LOBYTE(aP4) = 0;
        }
        v94 = (IUnknown *)aP4;
        v63 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)(this + 9));
        Cell::ApplyDamage(v63, (IUnknown *)&MEMORY[0xA8D63C].__pad_14B0[1684], 1, 1, v94);
        *(_DWORD *)v3->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684];
        this->owningHouseIndex = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688];
        this->fallRate = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692];
        v64 = (IUnknown *)this->vtable4;
        this->abstractFlags = 0;
        this->q012 = 0;
        this->q054 = 0;
        this->q04C = 0;
        (*(void (__thiscall **)(IUnknown *, _DWORD, _DWORD))(v64->field_0 + 1348))(v64, 0, 0);
        if ( *(_DWORD *)v3->__pad_0 == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684]
          && this->owningHouseIndex == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688] )
        {
LABEL_61:
          if ( this->fallRate == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692] )
            return (int)v96;
        }
LABEL_62:
        (*(void (__thiscall **)(_DWORD, TechnoClass *))(*(_DWORD *)this->vtable4 + 244))(this->vtable4, v3);
        *(_DWORD *)v3->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684];
        *(_DWORD *)&v3->__pad_0[4] = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688];
        *(_DWORD *)&v3->__pad_0[8] = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692];
        return (int)v96;
      }
      *(_DWORD *)v3->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684];
      this->owningHouseIndex = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688];
      v53 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692];
      this->abstractFlags = 0;
      this->q012 = 0;
      this->fallRate = v53;
      v54 = (IUnknown *)this->vtable4;
      this->q054 = 0;
      this->q04C = 0;
      (*(void (__thiscall **)(IUnknown *, _DWORD, _DWORD))(v54->field_0 + 1348))(v54, 0, 0);
      if ( *(_DWORD *)v3->__pad_0 != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684]
        || this->owningHouseIndex != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688]
        || this->fallRate != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692] )
      {
        (*(void (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->vtable4 + 244))(this->vtable4, this + 9);
        *(_DWORD *)v3->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684];
        this->owningHouseIndex = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688];
        this->fallRate = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692];
      }
      v55 = (_DWORD *)(this->vtable4 + 1600);
      *v55 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664];
      v55[1] = v109;
      v55[2] = 0;
      *(_DWORD *)(this->vtable4 + 1504) = -1;
      MovementAI::StepFootClass(this, 0);
      result = MovementAI::MainFootClass(this, 0);
      v96 = (IUnknown *)result;
      break;
    default:
      return (int)v96;
  }
  return result;
}


// ==== 0x00515ED0  ObjectClass::UpdateFootFacing  this=ObjectClass  sig=csp ====
void __thiscall UpdateFootFacing(int this)
{
  int v2; // ebp
  IUnknown *v3; // edi
  int *v4; // ebx
  double v5; // st7
  _DWORD *Value; // eax
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // ebx
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  double v17; // st7
  char v18; // al
  int v19; // eax
  int v20; // ecx
  double v21; // st7
  double v22; // st6
  char v24; // c0
  double v25; // st7
  unsigned __int8 v27; // c0
  unsigned __int8 v28; // c3
  _DWORD *v29; // ecx
  int v30; // ebx
  int v31; // ebp
  int v32; // edi
  int v33; // eax
  int v34; // eax
  int v35; // edx
  int *v36; // eax
  double v37; // st7
  __int16 v38; // ax
  int v39; // ecx
  int v40; // [esp+34h] [ebp-24h] BYREF
  int v41; // [esp+38h] [ebp-20h]
  int v42; // [esp+3Ch] [ebp-1Ch] BYREF
  int v43; // [esp+40h] [ebp-18h] BYREF
  int v44; // [esp+44h] [ebp-14h]
  int v45; // [esp+48h] [ebp-10h]
  _BYTE v46[12]; // [esp+4Ch] [ebp-Ch] BYREF

  v2 = this + 4; /*0x515ee2*/
  if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(this + 4) + 16))(this + 4) /*0x515f17*/
    || (v3 = (IUnknown *)(this + 36), *(_DWORD *)(this + 36) == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684])
    && *(_DWORD *)(this + 40) == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688]
    && *(_DWORD *)(this + 44) == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692] )
  {
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v2 + 16))(v2) /*0x5162e8*/
      && *(_DWORD *)(this + 36) == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684]
      && *(_DWORD *)(this + 40) == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688]
      && *(_DWORD *)(this + 44) == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1348))( /*0x5162f6*/
        *(_DWORD *)(this + 12),
        0,
        1072693248);
      MovementAI::StepFootClass((int *)this, 0); /*0x516300*/
      MovementAI::MainFootClass((int *)this, 1); /*0x516309*/
    }
  }
  else
  {
    v4 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 72))(*(_DWORD *)(this + 12), &v43); /*0x515f2a*/
    Int64::Equal(v4, (IUnknown *)(this + 36)); /*0x515f2f*/
    v5 = Math::CalcAngle((double)v4[1] - (double)*(int *)(this + 40), (double)v3->field_0 - (double)*v4); /*0x515f4b*/
    LOWORD(v40) = Math::RoundToInt((v5 - 1.570796326794897) * -10430.06004058427); /*0x515f64*/
    if ( *(_BYTE *)(this + 112) ) /*0x515f69*/
      FacingClass::Set_SyncLog((char *)(this + 48), &v40); /*0x515f90*/
    else
      FacingClass::Update((char *)(this + 48), &v40); /*0x515f82*/
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v2 + 96))(v2) /*0x515fd1*/
      && (Value = ProgressTimer::GetValue((_WORD *)(this + 48), (IUnknown *)&v42),
          abs16(*(_WORD *)Value - v40) <= 0x2000u)
      || *(_BYTE *)(this + 112) )
    {
      if ( *(_DWORD *)(this + 24) == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684] /*0x515fff*/
        && *(_DWORD *)(this + 28) == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688]
        && *(_DWORD *)(this + 32) == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692] )
      {
        v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 12) + 72))( /*0x51600b*/
                         *(_DWORD *)(this + 12),
                         v46);
        v8 = *v7 - v3->field_0; /*0x516015*/
        v9 = v7[1] - *(_DWORD *)(this + 40); /*0x51601d*/
        v10 = v7[2] - *(_DWORD *)(this + 44); /*0x516022*/
        v43 = v8; /*0x516024*/
        v44 = v9; /*0x51602c*/
        v45 = v10; /*0x516030*/
        if ( (int)Coord::Length(&v43) < 256 ) /*0x51603e*/
          goto LABEL_19; /*0x51603e*/
      }
      if ( *(_DWORD *)(this + 24) == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684] /*0x516068*/
        && *(_DWORD *)(this + 28) == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688]
        && *(_DWORD *)(this + 32) == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692] )
      {
        goto LABEL_20; /*0x516068*/
      }
      v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 12) + 72))( /*0x516074*/
                        *(_DWORD *)(this + 12),
                        v46);
      v12 = *(_DWORD *)(this + 28); /*0x51607c*/
      v13 = *v11 - *(_DWORD *)(this + 24); /*0x51607f*/
      v14 = v11[1]; /*0x516081*/
      v15 = v11[2]; /*0x516084*/
      v43 = v13; /*0x516087*/
      v16 = v15 - *(_DWORD *)(this + 32); /*0x516090*/
      v44 = v14 - v12; /*0x516092*/
      v45 = v16; /*0x516096*/
      v17 = Math::Sqrt((double)v13 * (double)v13 + (double)v16 * (double)v16 + (double)(v14 - v12) * (double)(v14 - v12)); /*0x5160c2*/
      if ( (int)Math::RoundToInt(v17) >= 256 ) /*0x5160d4*/
      {
LABEL_20:
        v18 = *(_BYTE *)(this + 112); /*0x5160e6*/
        *(_DWORD *)(this + 72) = 0; /*0x5160e9*/
        *(_DWORD *)(this + 76) = 1072693248; /*0x5160f2*/
        if ( v18 ) /*0x5160f5*/
        {
          *(_DWORD *)(this + 80) = 0; /*0x5160f7*/
          *(_DWORD *)(this + 84) = 1072693248; /*0x5160fe*/
        }
      }
      else
      {
LABEL_19:
        *(_DWORD *)(this + 72) = 0; /*0x5160d6*/
        *(_DWORD *)(this + 76) = 1071644672; /*0x5160dd*/
      }
    }
    else
    {
      *(_DWORD *)(this + 72) = 0; /*0x516105*/
      *(_DWORD *)(this + 76) = 0; /*0x516108*/
    }
    if ( *(double *)(this + 72) > 0.0 ) /*0x516119*/
    {
      v19 = *(_DWORD *)(this + 12); /*0x51611b*/
      *(_DWORD *)(this + 88) = 0; /*0x51611e*/
      *(_DWORD *)(this + 92) = 1072693248; /*0x516125*/
      v20 = *(_DWORD *)(v19 + 1504); /*0x516128*/
      if ( v20 != -1 && v20 == *(_DWORD *)(v19 + 1508) ) /*0x516139*/
        *(_QWORD *)(this + 88) = *(_QWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1496); /*0x516149*/
    }
    v21 = *(double *)(this + 88) * *(double *)(this + 72); /*0x516155*/
    if ( v21 > 1.0 ) /*0x516165*/
      v21 = 1.0; /*0x516169*/
    if ( v21 > *(double *)(this + 80) ) /*0x516177*/
    {
      v22 = 1.0 / (*(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1504) * 900.0) + *(double *)(this + 80); /*0x516191*/
      *(double *)(this + 80) = v22; /*0x516196*/
      if ( !v24 ) /*0x51619e*/
        v22 = v21; /*0x5161a2*/
      *(double *)(this + 80) = v22; /*0x5161a4*/
    }
    if ( v21 < *(double *)(this + 80) ) /*0x5161af*/
    {
      v25 = *(double *)(this + 80) - 1.0 / (*(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1512) * 900.0); /*0x5161c9*/
      *(double *)(this + 80) = v25; /*0x5161d2*/
      if ( v27 | v28 ) /*0x5161d7*/
        v25 = 0.0; /*0x5161de*/
      *(double *)(this + 80) = v25; /*0x5161e4*/
    }
    if ( *(double *)(this + 72) > 0.0 && !*(_BYTE *)(this + 112) ) /*0x5161fb*/
    {
      v29 = *(_DWORD **)(this + 12); /*0x516206*/
      v30 = v3->field_0; /*0x516209*/
      v31 = *(_DWORD *)(this + 40); /*0x51620b*/
      v32 = *(_DWORD *)(this + 44); /*0x51620e*/
      v33 = v29[376]; /*0x516211*/
      v43 = v30; /*0x516217*/
      v44 = v31; /*0x51621e*/
      if ( v33 != -1 && v33 != 8 ) /*0x516227*/
      {
        v34 = v33 & 7; /*0x516229*/
        v45 = v32; /*0x51622c*/
        v35 = *(_DWORD *)&MEMORY[0x89F690].__pad_48[8 * v34 + 4]; /*0x51623e*/
        v43 = v30 + *(_DWORD *)&MEMORY[0x89F690].__pad_48[8 * v34]; /*0x516245*/
        v44 = v31 + v35; /*0x516249*/
      }
      v36 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v29 + 72))(v29, v46); /*0x516254*/
      v41 = *v36; /*0x516260*/
      v37 = Math::CalcAngle((double)v36[1] - (double)v44, (double)v43 - (double)v41); /*0x516279*/
      v38 = Math::RoundToInt((v37 - 1.570796326794897) * -10430.06004058427); /*0x51628d*/
      v39 = *(_DWORD *)(this + 12); /*0x516292*/
      LOWORD(v41) = v38; /*0x516295*/
      v42 = v41; /*0x5162a9*/
      FacingClass::Update((char *)(v39 + 904), &v42); /*0x5162ad*/
    }
  }
}


// ==== 0x00516320  HoverLocomotionClass::HasScoreDisplayChanged  this=HoverLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_516320(_DWORD *a1)
{
  _DWORD *result; // eax

  result = a1; /*0x516320*/
  if ( a1[5] != a1[8] || a1[6] != a1[9] || a1[7] != a1[10] ) /*0x516340*/
  {
    a1[5] = MEMORY[0xA8F180]; /*0x516348*/
    a1[6] = MEMORY[0xA8F184]; /*0x516351*/
    a1[7] = MEMORY[0xA8F188]; /*0x51635a*/
    result = (_DWORD *)a1[2]; /*0x51635d*/
    result[376] = -1; /*0x516360*/
  }
  return result; /*0x51636a*/
}


// ==== 0x00516370  HoverLocomotionClass::UpdateFacingDirection_0  this=HoverLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_516370(int a1, int a2)
{
  return FacingClass::Update((char *)(*(_DWORD *)(a1 + 8) + 904), &a2); /*0x51638f*/
}


// ==== 0x005163B0  MovementAI::MarkOccupiedPathCell  this=TechnoClass  sig=csp ====
char __thiscall sub_5163B0(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // ecx
  _DWORD *v5; // eax
  double v6; // st7
  int v7; // eax
  _DWORD *v9; // ecx
  int v10; // [esp+18h] [ebp-14h]
  int v11; // [esp+1Ch] [ebp-10h]
  _BYTE v12[12]; // [esp+20h] [ebp-Ch] BYREF

  if ( !(*(unsigned __int8 (__stdcall **)(_DWORD *))(this->vtable2 + 16))(this + 1) ) /*0x5163bd*/
    return 0; /*0x5163bd*/
  v2 = this->vtable4; /*0x5163c8*/
  if ( *(_DWORD *)(v2 + 1504) == -1 ) /*0x5163d2*/
    return 0; /*0x5163d2*/
  v3 = *(_DWORD *)(v2 + 1444); /*0x5163d8*/
  if ( v3 && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 1 /*0x516405*/
    || (v4 = *(_DWORD *)(this->vtable4 + 1444)) != 0 && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 15 )
  {
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this->vtable4 + 72))(this->vtable4, v12); /*0x516415*/
    v10 = v5[1] - this->referenceCount; /*0x516436*/
    v11 = v5[2] - this->NeedsSaveOrLink; /*0x51643a*/
    v6 = Math::Sqrt( /*0x516463*/
           (double)(*v5 - this->nextArrayIndex) * (double)(*v5 - this->nextArrayIndex)
         + (double)v10 * (double)v10
         + (double)v11 * (double)v11);
    v7 = (int)Math::RoundToInt(v6) / 256; /*0x516479*/
    if ( v7 < 24 ) /*0x51647f*/
    {
      *(_DWORD *)(this->vtable4 + 4 * v7 + 1504) = -1; /*0x516485*/
      return 1; /*0x516495*/
    }
  }
  v9 = (_DWORD *)this->vtable4; /*0x516496*/
  if ( !v9[173] || !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v9 + 940))(v9, v9[173]) ) /*0x5164a6*/
    return 0; /*0x5164c4*/
  *(_DWORD *)(this->vtable4 + 1504) = -1; /*0x5164b4*/
  return 1; /*0x516484*/
}


// ==== 0x005164D0  MovementAI::StepFootClass  this=ObjectClass  sig=csp ====
int __thiscall MovementAI::StepFootClass(int *this, ObjectClass *aP1)
{
  TechnoClass *v3; // ecx
  int *v4; // edi
  int result; // eax
  int v6; // ebp
  int v7; // ebx
  __int64 v8; // rax
  int v9; // ebp
  int v10; // ebx
  _WORD *v11; // eax
  __int64 v12; // rax
  TechnoClass *v13; // ecx
  int v14; // ebx
  IUnknown *v15; // ebx
  IUnknown *v16; // eax
  IUnknown *v18; // edx
  IUnknown **ecx20; // ecx
  _DWORD *v19; // eax
  IUnknown *v21; // eax
  int edx23; // edx
  BuildingTypeClass *v23; // eax
  double st7_23; // st7
  TechnoClass *v25; // ecx
  int eax28; // eax
  TechnoClass *v27; // ecx
  _DWORD *ecx37; // ecx
  int v28; // ebp
  int v29; // eax
  IUnknown *v31; // edx
  _DWORD *ecx45; // ecx
  _DWORD *v32; // eax
  int v33; // edx
  TechnoClass *v35; // ebx
  int ebp46; // ebp
  void *v36; // eax
  IUnknown *v38; // ebx
  int *edx47; // edx
  int v39; // ebp
  IUnknown *v40; // ecx
  IUnknown *ClosestObjectCell; // eax
  _DWORD *v42; // eax
  int v43; // ebp
  IUnknown *v44; // ecx
  int v45; // edx
  int v46; // eax
  int v47; // eax
  double v48; // st7
  int *v49; // ecx
  __int64 v50; // rax
  int *v51; // ecx
  __int64 v52; // rax
  IUnknown *v54; // [esp+20h] [ebp-48h]
  IUnknown *LandHeight; // [esp+24h] [ebp-44h]
  IUnknown *v56; // [esp+30h] [ebp-38h]
  int _34; // [esp+34h] [ebp-34h]
  int v57; // [esp+38h] [ebp-30h]
  IUnknown *aP4; // [esp+40h] [ebp-28h]
  IUnknown *aP4b; // [esp+40h] [ebp-28h]
  IUnknown *aP4a; // [esp+40h] [ebp-28h]
  IUnknown *v61; // [esp+44h] [ebp-24h] BYREF
  int v62; // [esp+48h] [ebp-20h]
  BuildingTypeClass *v63; // [esp+4Ch] [ebp-1Ch]
  int aP0; // [esp+50h] [ebp-18h] BYREF
  IUnknown *v65; // [esp+54h] [ebp-14h]
  int v66; // [esp+58h] [ebp-10h]
  _DWORD v67[3]; // [esp+5Ch] [ebp-Ch] BYREF

  MovementAI::MarkOccupiedPathCell(this); /*0x5164d9*/
  v3 = (TechnoClass *)this->vtable4; /*0x5164de*/
  v4 = this + 6; /*0x5164e4*/
  aP4 = (IUnknown *)v3[1].missionStartTime; /*0x5164ed*/
  if ( this->nextArrayIndex != *(_DWORD *)&HouseClass_Player.__pad_5568[24268] /*0x516511*/
    || this->referenceCount != *(_DWORD *)&HouseClass_Player.__pad_5568[24272]
    || (result = *(_DWORD *)&HouseClass_Player.__pad_5568[24276],
        this->vtable3 != *(_DWORD *)&HouseClass_Player.__pad_5568[24276]) )
  {
    v6 = *v4 / 256; /*0x516535*/
    v7 = this->referenceCount / 256; /*0x516538*/
    result = (*(int (__thiscall **)(TechnoClass *, IUnknown **))(*(_DWORD *)v3->__pad_0 + 440))(v3, &v61); /*0x51653b*/
    if ( *(_WORD *)result == (_WORD)v6 && *(_WORD *)(result + 2) == (_WORD)v7 ) /*0x51654a*/
    {
      v8 = *(_DWORD *)((*(int (__thiscall **)(_DWORD, int *, _DWORD))(*(_DWORD *)this->vtable4 + 76))( /*0x516569*/
                         this->vtable4,
                         &aP0,
                         0)
                     + 8)
         - this->vtable3;
      result = (HIDWORD(v8) ^ v8) - HIDWORD(v8); /*0x51656c*/
      if ( result < 2 * *(_DWORD *)&HouseClass_Player.__pad_5568[24332] ) /*0x516573*/
      {
        (*(void (__stdcall **)(int *))(this->vtable2 + 72))(this + 1); /*0x51657c*/
        return (*(int (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)this->vtable4 + 1152))(this->vtable4, 0, 1); /*0x5166e4*/
      }
    }
  }
  if ( aP4 != (IUnknown *)-1 ) /*0x516589*/
    return result; /*0x516589*/
  if ( *v4 == *(_DWORD *)&HouseClass_Player.__pad_5568[24268] /*0x5165a5*/
    && this->referenceCount == *(_DWORD *)&HouseClass_Player.__pad_5568[24272] )
  {
    result = this->vtable3; /*0x5165ad*/
    if ( result == *(_DWORD *)&HouseClass_Player.__pad_5568[24276] ) /*0x5165b2*/
      return result; /*0x5165b2*/
  }
  v9 = *v4 / 256; /*0x5165dd*/
  v10 = this->referenceCount / 256; /*0x5165e0*/
  v11 = (_WORD *)(*(int (__thiscall **)(_DWORD, IUnknown **))(*(_DWORD *)this->vtable4 + 440))(this->vtable4, &v61); /*0x5165e3*/
  if ( *v11 == (_WORD)v9 && v11[1] == (_WORD)v10 ) /*0x5165f2*/
  {
    v12 = *(_DWORD *)((*(int (__thiscall **)(_DWORD, int *, _DWORD))(*(_DWORD *)this->vtable4 + 76))(this->vtable4, &aP0, 0) /*0x516611*/
                    + 8)
        - this->vtable3;
    result = (HIDWORD(v12) ^ v12) - HIDWORD(v12); /*0x516614*/
    if ( result <= 2 * *(_DWORD *)&HouseClass_Player.__pad_5568[24332] ) /*0x51661b*/
      return result; /*0x51661b*/
  }
  v13 = (TechnoClass *)this->vtable4; /*0x516621*/
  v14 = *(_DWORD *)&v13[1].__pad_115[11]; /*0x516624*/
  result = *(_DWORD *)&v13[1].__pad_115[19]; /*0x51662a*/
  if ( v14 != -1 ) /*0x516633*/
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v14 >= result ) /*0x51663f*/
      goto LABEL_19; /*0x51663f*/
    result -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v14; /*0x516641*/
  }
  if ( result ) /*0x516645*/
    return result; /*0x516645*/
LABEL_19:
  LOWORD(aP4b) = *v4 / 256; /*0x51664b*/
  HIWORD(aP4b) = this->referenceCount / 256; /*0x51666d*/
  if ( FootClass::MovementStep(aP4b, 0, (int)aP1, (int)v56, _34, v57) ) /*0x51667e*/
  {
    v28 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x5168d6*/
    v29 = Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5984) * 900.0); /*0x5168e8*/
    v31 = (IUnknown *)v67[1]; /*0x5168f0*/
    ecx45 = (_DWORD *)(this->vtable4 + 1600); /*0x5168f4*/
    *ecx45 = v28; /*0x5168fa*/
    ecx45[1] = v31; /*0x5168fc*/
    ecx45[2] = v29; /*0x516904*/
    v32 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)this->vtable4 + 72))(this->vtable4, v67); /*0x51690c*/
    v33 = *(_DWORD *)(this->vtable4 + 1504) & 7; /*0x516939*/
    LOWORD(aP4a) = *v32 / 256 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v33 + 160]; /*0x516955*/
    HIWORD(aP4a) = v32[1] / 256 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v33 + 162]; /*0x516961*/
    aP1 = (ObjectClass *)aP4a; /*0x516970*/
    if ( LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP1, (TechnoClass *)1) ) /*0x516974*/
    {
      v35 = (TechnoClass *)this->vtable4; /*0x516981*/
      ebp46 = *(_DWORD *)v35->__pad_0; /*0x51698a*/
      LandHeight = (IUnknown *)ObjectClass::GetLandHeight(v35); /*0x516994*/
      v54 = *(IUnknown **)(this->vtable4 + 1504); /*0x5169a4*/
      v36 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP1); /*0x5169a6*/
      if ( (*(int (__thiscall **)(TechnoClass *, void *, IUnknown *, IUnknown *, _DWORD, int))(ebp46 + 428))( /*0x5169b7*/
             v35,
             v36,
             v54,
             LandHeight,
             0,
             1) == 6 )
      {
        v38 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP1); /*0x5169cf*/
        edx47 = (int *)(this->vtable4 + 156); /*0x5169d1*/
        aP0 = *edx47; /*0x5169d9*/
        v65 = (IUnknown *)edx47[1]; /*0x5169e5*/
        v39 = edx47[2]; /*0x5169ed*/
        v65 = (IUnknown *)((SHIWORD(aP1) << 8) + 128); /*0x5169fd*/
        aP0 = ((__int16)aP1 << 8) + 128; /*0x516a13*/
        v66 = 0; /*0x516a17*/
        v61 = 0; /*0x516a1b*/
        v62 = 0; /*0x516a1f*/
        LOBYTE(v40) = v39 > 3 * *(_DWORD *)&HouseClass_Player.__pad_5568[24332] /*0x516a3a*/
                          + Cell::GetGroundHeight((IUnknown *)&aP0);
        ClosestObjectCell = (IUnknown *)Object::FindClosestObjectCell(v38, (IUnknown *)&v61, v40, 0); /*0x516a41*/
        if ( ClosestObjectCell ) /*0x516a48*/
        {
          if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(this->vtable4 + 540), ClosestObjectCell) ) /*0x516a58*/
          {
            v42 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)this->vtable4 + 72))(this->vtable4, v67); /*0x516a6f*/
            v43 = this->referenceCount; /*0x516a76*/
            v44 = (IUnknown *)(*v42 - *v4); /*0x516a79*/
            v45 = v42[1]; /*0x516a7b*/
            v46 = v42[2]; /*0x516a7e*/
            v61 = v44; /*0x516a81*/
            v47 = v46 - this->vtable3; /*0x516a8a*/
            v62 = v45 - v43; /*0x516a8c*/
            v63 = (BuildingTypeClass *)v47; /*0x516a90*/
            v48 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x516abc*/
                                                (double)(int)v44 * (double)(int)v44
                                              + (double)v47 * (double)v47
                                              + (double)(v45 - v43) * (double)(v45 - v43)));
            if ( (int)Math::RoundToInt(v48) < *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5912) /*0x516ade*/
              && !Team::AllMembersValid((int *)this->vtable4) )
            {
              v49 = (int *)(this->vtable4 + 156); /*0x516aee*/
              aP0 = *v49; /*0x516af8*/
              v65 = (IUnknown *)v49[1]; /*0x516aff*/
              v50 = this->vtable3 - v49[2]; /*0x516b0b*/
              if ( (int)((HIDWORD(v50) ^ v50) - HIDWORD(v50)) < 2 * *(_DWORD *)&HouseClass_Player.__pad_5568[24332] ) /*0x516b1a*/
              {
                aP0 = *v49; /*0x516b1e*/
                v65 = (IUnknown *)v49[1]; /*0x516b25*/
                v66 = v49[2]; /*0x516b30*/
                if ( *((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP0) + 59) != 10 ) /*0x516b46*/
                {
                  (*(void (__stdcall **)(int *))(this->vtable2 + 72))(this + 1); /*0x516b4f*/
                  return (*(int (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)this->vtable4 + 1152))(this->vtable4, 0, 1); /*0x516b6a*/
                }
              }
            }
            if ( (v38->field_140 & 0x100) == 0 /*0x516bae*/
              || (LOBYTE(aP4a) = 1,
                  v51 = (int *)(this->vtable4 + 156),
                  aP0 = *v51,
                  v65 = (IUnknown *)v51[1],
                  v52 = v51[2] / *(_DWORD *)&HouseClass_Player.__pad_5568[24332] - SHIBYTE(v38->field_118),
                  (int)((HIDWORD(v52) ^ v52) - HIDWORD(v52)) <= 2) )
            {
              LOBYTE(aP4a) = 0; /*0x516bb0*/
            }
            Cell::ApplyDamage(v38, (IUnknown *)&HouseClass_Player.__pad_5568[24268], 1, 1, aP4a); /*0x516bc5*/
          }
        }
      }
    }
    result = this->vtable4; /*0x516bca*/
    *(_DWORD *)(result + 1612) = 10; /*0x516bcd*/
  }
  else
  {
    v15 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x516690*/
    v16 = (IUnknown *)Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5984) * 900.0); /*0x5166a2*/
    v18 = v65; /*0x5166aa*/
    ecx20 = (IUnknown **)(this->vtable4 + 1600); /*0x5166ae*/
    *ecx20 = v15; /*0x5166b5*/
    ecx20[1] = v18; /*0x5166b7*/
    ecx20[2] = v16; /*0x5166ba*/
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->vtable4 + 716))(this->vtable4, this + 6) ) /*0x5166c2*/
      return (*(int (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)this->vtable4 + 1152))(this->vtable4, 0, 1); /*0x5166ca*/
    if ( FootClass::ClearSomeVector2((void *)this->vtable4) ) /*0x5166ea*/
      goto LABEL_28; /*0x5166ea*/
    v19 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->vtable4 + 72))(this->vtable4, &aP0); /*0x516701*/
    v21 = Coord::Subtract( /*0x516721*/
            v67,
            (IUnknown *)(*v19 - *v4),
            (IUnknown *)(v19[1] - this->referenceCount),
            (IUnknown *)(v19[2] - this->vtable3));
    v61 = (IUnknown *)v21->field_0; /*0x51672b*/
    edx23 = v21->field_4; /*0x51672f*/
    v23 = (BuildingTypeClass *)v21->field_8; /*0x516736*/
    v62 = edx23; /*0x516739*/
    v63 = v23; /*0x516741*/
    st7_23 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x516762*/
                                           (double)(int)v23 * (double)(int)v23
                                         + (double)edx23 * (double)edx23
                                         + (double)(int)v61 * (double)(int)v61));
    if ( (int)Math::RoundToInt(st7_23) >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5912) ) /*0x51677b*/
      goto LABEL_28; /*0x51677b*/
    if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->vtable4 + 388))(this->vtable4) == 2 /*0x51679b*/
      || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->vtable4 + 388))(this->vtable4) == 11 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)this->vtable4 + 1152))(this->vtable4, 0, 1); /*0x5167a6*/
      result = this->vtable4; /*0x5167ac*/
      if ( !*(_BYTE *)(result + 144) ) /*0x5167b7*/
        return result; /*0x5167b7*/
    }
    else
    {
LABEL_28:
      v25 = (TechnoClass *)this->vtable4; /*0x5167bf*/
      eax28 = *(_DWORD *)&v25[1].__pad_115[23]; /*0x5167c2*/
      if ( eax28 <= 0 ) /*0x5167ca*/
      {
        (*(void (__thiscall **)(TechnoClass *, _DWORD, int))(*(_DWORD *)v25->__pad_0 + 1152))(v25, 0, 1); /*0x5167db*/
        result = this->vtable4; /*0x5167e1*/
        if ( !*(_BYTE *)(result + 144) ) /*0x5167ec*/
          return result; /*0x5167ec*/
        if ( *(_BYTE *)(result + 1674) ) /*0x5167f2*/
          PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1792), 0x2000, 1.0, 0); /*0x516813*/
        *(_BYTE *)(this->vtable4 + 1674) = 0; /*0x51681b*/
      }
      else
      {
        *(_DWORD *)&v25[1].__pad_115[23] = eax28 - 1; /*0x5167cd*/
      }
    }
    if ( !(*(unsigned __int8 (__stdcall **)(int *))(this->vtable2 + 16))(this + 1) ) /*0x516829*/
    {
      v27 = (TechnoClass *)this->vtable4; /*0x516830*/
      if ( v27->sprayOffsetIndex ) /*0x516833*/
      {
        if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *, int))(*(_DWORD *)v27->__pad_0 + 940))( /*0x516840*/
                v27,
                v27->sprayOffsetIndex) )
        {
          *(_BYTE *)(this->vtable4 + 1672) = 1; /*0x51684d*/
          ecx37 = *(_DWORD **)(this->vtable4 + 1492); /*0x516857*/
          if ( ecx37 ) /*0x51685f*/
            TeamClass::WakeUpAllMembers(ecx37); /*0x516861*/
          (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this->vtable4 + 968))(this->vtable4, 0); /*0x51686d*/
        }
      }
    }
    if ( this->objectTypeFlags != *(_DWORD *)&HouseClass_Player.__pad_5568[24268] /*0x516899*/
      || this->owningHouseIndex != *(_DWORD *)&HouseClass_Player.__pad_5568[24272]
      || this->fallRate != *(_DWORD *)&HouseClass_Player.__pad_5568[24276] )
    {
      (*(void (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->vtable4 + 244))(this->vtable4, this + 9); /*0x5168a1*/
      this->objectTypeFlags = *(_DWORD *)&HouseClass_Player.__pad_5568[24268]; /*0x5168ad*/
      this->owningHouseIndex = *(_DWORD *)&HouseClass_Player.__pad_5568[24272]; /*0x5168b5*/
      this->fallRate = *(_DWORD *)&HouseClass_Player.__pad_5568[24276]; /*0x5168bd*/
    }
    return (*(int (__stdcall **)(int *))(this->vtable2 + 72))(this + 1); /*0x5168c3*/
  }
  return result; /*0x5166dd*/
}


// ==== 0x00516BF0  HoverLocomotionClass::ClearLocomotionDirty_0  this=HoverLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_516BF0(_BYTE *a1)
{
  int v1; // eax

  if ( (*(unsigned __int8 (__stdcall **)(_BYTE *))(*(_DWORD *)a1 + 96))(a1) ) /*0x516bf8*/
  {
    v1 = *(_DWORD *)(*((_DWORD *)a1 + 2) + 172); /*0x516c02*/
    if ( v1 ) /*0x516c0a*/
    {
      if ( v1 != 7 ) /*0x516c0f*/
      {
        a1[100] = 1; /*0x516c11*/
        *((_DWORD *)a1 + 26) = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 20, 30); /*0x516c2a*/
        if ( Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 99) < 50 ) /*0x516c44*/
          *((_DWORD *)a1 + 26) = -*((_DWORD *)a1 + 26); /*0x516c4b*/
      }
    }
  }
  if ( (*(unsigned __int8 (__stdcall **)(_BYTE *))(*(_DWORD *)a1 + 16))(a1) ) /*0x516c51*/
    (*(void (__stdcall **)(_BYTE *))(*(_DWORD *)a1 + 72))(a1); /*0x516c5b*/
  return StreamClass::ClearDirty(a1); /*0x516c64*/
}


// ==== 0x00516C70  HoverLocomotionClass::DispatchVirtualCall_2  this=HoverLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_516C70(int a1)
{
  return StreamClass::GetDirty(a1) /*0x516c90*/
      || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 456))(*(_DWORD *)(a1 + 8)) > 0;
}


// ==== 0x00516CA0  HoverLocomotionClass::IsBridgeBlocking  this=HoverLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_516CA0(int a1)
{
  int Member; // eax
  _DWORD *v3; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // edx
  int v7; // eax
  int v8; // ecx
  __int16 v9; // ax
  __int16 v10; // cx
  __int16 v11; // [esp+4h] [ebp-18h]
  _DWORD v12[2]; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+18h] [ebp-4h]

  if ( Team::AllMembersValid(*(int **)(a1 + 8)) ) /*0x516cab*/
  {
    Member = Team::GetMember(*(_DWORD **)(a1 + 8), 0); /*0x516cb9*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6 ) /*0x516cc8*/
    {
      if ( *(_BYTE *)(*(_DWORD *)(Team::GetMember(*(_DWORD **)(a1 + 8), 0) + 1312) + 5821) ) /*0x516cda*/
        return 0; /*0x516cea*/
    }
  }
  v3 = (_DWORD *)(*(_DWORD *)(a1 + 8) + 156); /*0x516cf0*/
  v12[0] = *v3; /*0x516cf8*/
  v12[1] = v3[1]; /*0x516d04*/
  v13 = v3[2]; /*0x516d0b*/
  v4 = Coord::To_Cell(&MEMORY[0x87F7E8], v12); /*0x516d14*/
  v5 = Cell::IsBridge(v4); /*0x516d1b*/
  if ( v5 && *(_BYTE *)(v5[328] + 5821) ) /*0x516d2e*/
  {
    v6 = v5 + 39; /*0x516d41*/
    v7 = v5[39]; /*0x516d43*/
    v8 = v6[1]; /*0x516d45*/
    v13 = v6[2]; /*0x516d4b*/
    LOWORD(v12[0]) = v7 / 256; /*0x516d5b*/
    HIWORD(v12[0]) = v8 / 256; /*0x516d6e*/
    v11 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 156) / 256; /*0x516d99*/
    v9 = v11 - LOWORD(v12[0]); /*0x516db9*/
    v10 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 160) / 256 - HIWORD(v12[0]); /*0x516dbf*/
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
char __stdcall JumpjetLocomotionClass::sub_516E10(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // esi
  _WORD *v3; // eax
  int *v4; // edi
  unsigned int v5; // ecx
  __int16 v6; // dx
  int v7; // ebx
  void *v8; // eax
  int v9; // ecx
  int GroundHeight; // eax
  int *v11; // ecx
  _BYTE v13[4]; // [esp+20h] [ebp-10h] BYREF
  int v14; // [esp+24h] [ebp-Ch]
  int v15; // [esp+28h] [ebp-8h]

  v2 = a1; /*0x516e15*/
  if ( !(*(unsigned __int8 (__stdcall **)(unsigned int))(*(_DWORD *)a1 + 96))(a1) ) /*0x516e1d*/
    return 0; /*0x516e1d*/
  if ( *(_BYTE *)(v2 + 108) ) /*0x516e28*/
    return 0; /*0x516e28*/
  v3 = (_WORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v2 + 8) + 440))(*(_DWORD *)(v2 + 8), v13); /*0x516e3d*/
  v4 = *(int **)(v2 + 8); /*0x516e46*/
  v5 = (((a2 >> 12) + 1) >> 1) & 7; /*0x516e57*/
  v6 = LOWORD(MEMORY[0x89F688][v5]) + *v3; /*0x516e5e*/
  LOWORD(v5) = HIWORD(MEMORY[0x89F688][v5]); /*0x516e6d*/
  LOWORD(a2) = v6; /*0x516e71*/
  HIWORD(a2) = v3[1] + v5; /*0x516e7f*/
  a1 = a2; /*0x516e88*/
  v7 = *v4; /*0x516e8c*/
  v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x516e93*/
  if ( (*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v7 + 428))(v4, v8, -1, -1, 0, 1) ) /*0x516e9b*/
    return 0; /*0x516fb5*/
  *(_BYTE *)(v2 + 108) = 1; /*0x516ea9*/
  if ( (*(unsigned __int8 (__stdcall **)(unsigned int))(*(_DWORD *)v2 + 16))(v2) ) /*0x516eb0*/
  {
    *(_DWORD *)(*(_DWORD *)(v2 + 8) + 1504) = -1; /*0x516ec1*/
    if ( *(_DWORD *)(v2 + 32) != MEMORY[0xA8F180] /*0x516eeb*/
      || *(_DWORD *)(v2 + 36) != MEMORY[0xA8F184]
      || *(_DWORD *)(v2 + 40) != MEMORY[0xA8F188] )
    {
      (*(void (__thiscall **)(_DWORD, unsigned int))(**(_DWORD **)(v2 + 8) + 244))(*(_DWORD *)(v2 + 8), v2 + 32); /*0x516ef3*/
    }
    v9 = SHIWORD(a1) << 8; /*0x516f0d*/
    *(_DWORD *)(v2 + 32) = ((__int16)a1 << 8) + 128; /*0x516f10*/
    *(_DWORD *)(v2 + 36) = v9 + 128; /*0x516f1b*/
    *(_DWORD *)(v2 + 40) = 0; /*0x516f23*/
    GroundHeight = Cell::GetGroundHeight((_DWORD *)(v2 + 32)); /*0x516f26*/
    *(_DWORD *)(v2 + 40) = GroundHeight; /*0x516f2b*/
    v11 = (int *)(*(_DWORD *)(v2 + 8) + 156); /*0x516f31*/
    v14 = *v11; /*0x516f39*/
    v15 = v11[1]; /*0x516f40*/
    if ( v11[2] >= GroundHeight + 2 * MEMORY[0xA8F1C0] + MEMORY[0xA8F1C0] ) /*0x516f54*/
      *(_DWORD *)(v2 + 40) = MEMORY[0xA8F1B4] + GroundHeight; /*0x516f5e*/
    (*(void (__thiscall **)(_DWORD, unsigned int))(**(_DWORD **)(v2 + 8) + 240))(*(_DWORD *)(v2 + 8), v2 + 32); /*0x516f67*/
    return 1; /*0x516f6d*/
  }
  else
  {
    (*(void (__stdcall **)(unsigned int, int, int, _DWORD))(*(_DWORD *)v2 + 68))( /*0x516fa5*/
      v2,
      ((__int16)a1 << 8) + 128,
      (SHIWORD(a1) << 8) + 128,
      0);
    return 1; /*0x516fa8*/
  }
}


// ==== 0x00516FC0  HoverLocomotionClass::RandomizeLocomotionParam  this=HoverLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::RandomizeLocomotionParam(HoverLocomotionClass *aP0, HoverLocomotionClass *aP1)
{
  if ( !(*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *, HoverLocomotionClass *))(*(_DWORD *)aP0->__pad_0 + 104))( /*0x516fcd*/
          aP0,
          aP1) )
    return 0; /*0x517017*/
  LOBYTE(aP0->CurrentWobbles[1]) = 1; /*0x516fd4*/
  *(_DWORD *)&aP0->HoverLocomotionClass_field_bool_68 = Random::Range( /*0x516fed*/
                                                          (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                                                          (IUnknown *)0x14,
                                                          (IUnknown *)0x1E);
  if ( Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)0x63) < 50 ) /*0x517007*/
    *(_DWORD *)&aP0->HoverLocomotionClass_field_bool_68 = -*(_DWORD *)&aP0->HoverLocomotionClass_field_bool_68; /*0x51700e*/
  return 1; /*0x517013*/
}


// ==== 0x00517070  HoverLocomotionClass::ddtor  this=HoverLocomotionClass  sig=csp ====
int __stdcall HoverLocomotionClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x517076*/
    return -2147467261; /*0x517078*/
  *a2 = 1247291202; /*0x517086*/
  a2[1] = 298948665; /*0x51708e*/
  a2[2] = -1610610249; /*0x517097*/
  a2[3] = -777003740; /*0x5170a0*/
  return 0; /*0x51707d*/
}


// ==== 0x005170B0  HoverLocomotionClass::BeginMove  this=HoverLocomotionClass  sig=csp ====
int __stdcall HoverLocomotionClass::_vt05(int a1, int *a2)
{
  int v2; // edi

  v2 = SwizzleManager::SaveLoad((int *)a1, a2); /*0x5170c1*/
  if ( v2 >= 0 && a1 ) /*0x5170c9*/
  {
    *(_DWORD *)a1 = &LocomotionClass::`vftable'; /*0x5170ce*/
    *(_DWORD *)(a1 + 4) = &vt_LocomotionClass; /*0x5170d4*/
    FrameSnapshot::Init((_WORD *)(a1 + 48)); /*0x5170db*/
    *(_DWORD *)a1 = &HoverLocomotionClass::`vftable'; /*0x5170e0*/
    *(_DWORD *)(a1 + 4) = &vt_HoverLocomotionClass; /*0x5170e6*/
  }
  return v2; /*0x5170ef*/
}


// ==== 0x00517100  HoverLocomotionClass::SmallStub  this=HoverLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_517100(int a1)
{
  return 2; /*0x517105*/
}


// ==== 0x00517110  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_517110(int this)
{
  int v2; // edi
  int v3; // ebx
  _WORD *v4; // eax
  bool v5; // bl
  int v6; // ecx
  int result; // eax
  _BYTE v8[4]; // [esp+8h] [ebp-4h] BYREF

  v5 = 1; /*0x51717d*/
  if ( *(_DWORD *)(this + 36) != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1684] /*0x517138*/
    || *(_DWORD *)(this + 40) != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1688]
    || *(_DWORD *)(this + 44) != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1692] )
  {
    v2 = *(_DWORD *)(this + 36) / 256; /*0x517161*/
    v3 = *(_DWORD *)(this + 40) / 256; /*0x517164*/
    v4 = (_WORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 12) + 440))(*(_DWORD *)(this + 12), v8); /*0x517167*/
    if ( *v4 != (_WORD)v2 || v4[1] != (_WORD)v3 ) /*0x517177*/
      v5 = 0; /*0x517138*/
  }
  v6 = *(_DWORD *)(this + 12); /*0x51717f*/
  *(_DWORD *)(this + 72) = 0; /*0x517182*/
  *(_DWORD *)(this + 76) = 1072693248; /*0x517189*/
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v6 + 1348))(v6, 0, 1072693248); /*0x517199*/
  result = MovementAI::StepFootClass((int *)this, 0); /*0x5171a3*/
  if ( v5 ) /*0x5171aa*/
    return MovementAI::MainFootClass((int *)this, 1); /*0x5171b0*/
  return result; /*0x5171b5*/
}


// ==== 0x005171C0  HoverLocomotionClass::DispatchVirtualCall_3  this=HoverLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_5171C0(_DWORD *a1, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  int v4; // ecx
  _DWORD v5[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x5171c0*/
  if ( !a2 ) /*0x5171c9*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(_DWORD *, _BYTE *))(*a1 + 24))(a1, v6); /*0x5171d8*/
    v5[0] = *v3; /*0x5171dd*/
    v5[1] = v3[1]; /*0x5171e4*/
    v4 = a1[2]; /*0x5171eb*/
    v5[2] = v3[2]; /*0x5171ee*/
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 244))(v4, v5); /*0x5171f9*/
  }
  return result; /*0x517200*/
}


// ==== 0x00517210  HoverLocomotionClass::IsPositionWithinThreshold  this=HoverLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_517210(int a1, int a2, int a3, int a4)
{
  int *v4; // eax
  int v5; // ebp
  int v6; // kr04_4
  int v7; // eax
  _BYTE v9[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (int *)(*(int (__stdcall **)(int, _BYTE *))(*(_DWORD *)a1 + 24))(a1, v9); /*0x517223*/
  v5 = v4[2]; /*0x51722b*/
  v6 = *v4; /*0x517257*/
  v7 = v4[1] / 256; /*0x51726d*/
  return (unsigned __int16)(v6 / 256) == (unsigned __int16)(a2 / 256) /*0x517291*/
      && (_WORD)v7 == (unsigned __int16)(a3 / 256)
      && (int)abs32(v5 - a4) <= MEMORY[0xA8F1C0];
}


// ==== 0x005172B0  HoverLocomotionClass::StubReturn120  this=HoverLocomotionClass  sig=csp ====
int HoverLocomotionClass::_vt09()
{
  return 120; /*0x5172b5*/
}


// ==== 0x005172C0  HoverLocomotionClass::ProcessMove  this=HoverLocomotionClass  sig=csp ====
HoverLocomotionClass *__thiscall HoverLocomotionClass::ProcessMove(_DWORD *Block, char a2)
{
  *Block = &HoverLocomotionClass::`vftable'; /*0x5172c3*/
  *(Block + 1) = &vt_HoverLocomotionClass; /*0x5172c9*/
  LocomotionClass::Construct(Block); /*0x5172d0*/
  if ( (a2 & 1) != 0 ) /*0x5172da*/
    __3_YAXPAX_Z(Block); /*0x5172dd*/
  return (HoverLocomotionClass *)Block; /*0x5172e7*/
}


// ==== 0x005172F0  LocomotionClass::ProcessMove  this=LocomotionClass  sig=csp ====
LocomotionClass *__thiscall LocomotionClass::ProcessMove(_DWORD *Block, char a2)
{
  LocomotionClass::Construct(Block); /*0x5172f3*/
  if ( (a2 & 1) != 0 ) /*0x5172fd*/
    __3_YAXPAX_Z(Block); /*0x517300*/
  return (LocomotionClass *)Block; /*0x51730a*/
}


// ==== 0x00517310  Int64::Equal  this=IUnknown  sig=csp ====
BOOL __thiscall Int64::Equal(_DWORD *this, IUnknown *aP1)
{
  return *this == aP1->field_0 && this->q004 == aP1->field_4; /*0x51731b*/
}


// ==== 0x00517340  sub_517340  this=-  sig=ida-proto ====
char sub_517340()
{
  MEMORY[0xA8F1C4] = 0; /*0x517342*/
  MEMORY[0xA8F1C5] = 0; /*0x517347*/
  MEMORY[0xA8F1C6] = 0; /*0x51734c*/
  return 0; /*0x517351*/
}


// ==== 0x00517360  ObjectClass::method  this=ObjectClass  sig=csp ====
unsigned __int8 __thiscall sub_517360(unsigned __int8 *this, unsigned __int8 a2, unsigned __int8 *a3)
{
  unsigned __int8 v3; // bl
  unsigned __int8 v4; // al
  unsigned __int8 v5; // bl
  unsigned __int8 result; // al

  v3 = this->vtable2; /*0x517394*/
  this->vtable3 += a2 * (a3[2] - this->vtable3) / 256; /*0x517397*/
  v4 = v3 + a2 * (a3[1] - v3) / 256; /*0x5173b8*/
  v5 = *this; /*0x5173ba*/
  this->vtable2 = v4; /*0x5173bc*/
  result = v5 + a2 * (*a3 - v5) / 256; /*0x5173de*/
  *this = result; /*0x5173e1*/
  return result; /*0x5173cb*/
}


// ==== 0x005173F0  ObjectClass::method_5173F0  this=ObjectClass  sig=csp ====
int __thiscall sub_5173F0(unsigned __int8 *this, unsigned __int8 *a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // eax

  v2 = *this - *a2; /*0x517400*/
  if ( v2 < 0 ) /*0x517402*/
    v2 = *a2 - *this; /*0x517404*/
  v3 = this->vtable2 - a2[1]; /*0x517410*/
  if ( v3 < 0 ) /*0x517412*/
    v3 = a2[1] - this->vtable2; /*0x517414*/
  v4 = this->vtable3 - a2[2]; /*0x517422*/
  if ( v4 < 0 ) /*0x517424*/
    v4 = a2[2] - this->vtable3; /*0x517426*/
  return v2 * v2 + v3 * v3 + v4 * v4; /*0x517437*/
}


// ==== 0x00517440  Color::ConvertToRGB  this=IUnknown  sig=csp ====
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

  v2 = this->q008; /*0x51744b*/
  v3 = this->q004; /*0x517453*/
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


// ==== 0x00517590  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::HashEntryCompare  this=DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode  sig=csp ====
BOOL __thiscall sub_517590(_BYTE *this, _BYTE *a2)
{
  return *this != *a2 || this->q001 != a2[1] || this->q002 != a2[2]; /*0x5175bd*/
}


// ==== 0x005175D0  VtableStub::Method_5175D0  this=VtableStub  sig=ida-proto ====
// attributes: thunk
void __noreturn VtableStub::5175D0()
{
  while ( 1 ) /*0x5175d0*/
    ; /*0x5175d0*/
}


// ==== 0x005175F0  ObjectClass::ReadRegistryOptionsWOL  this=AbstractClass  sig=csp ====
char __thiscall WOL_ReadRegistryOptions(_BYTE *this)
{
  int v2; // ecx
  BYTE Data[4]; // [esp+Ch] [ebp-90h] BYREF
  HKEY phkResult; // [esp+10h] [ebp-8Ch] BYREF
  DWORD cbData; // [esp+14h] [ebp-88h] BYREF
  DWORD Type; // [esp+18h] [ebp-84h] BYREF
  CHAR SubKey[128]; // [esp+1Ch] [ebp-80h] BYREF

  this->vtable2 = 0; /*0x517605*/
  strcpy(SubKey, MEMORY[0x8254E4]); /*0x517620*/
  cbData = 4; /*0x517624*/
  if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0xF003Fu, &phkResult) ) /*0x517643*/
  {
    *(_DWORD *)Data = 0; /*0x51764d*/
    if ( !RegQueryValueExA(phkResult, g_INI_Key_Options, 0, &Type, Data, &cbData) && Type == 4 ) /*0x51767b*/
    {
      v2 = *(_DWORD *)Data; /*0x51767d*/
      this->vtable2 = 1; /*0x517681*/
      *(_DWORD *)this = v2; /*0x517685*/
    }
    RegCloseKey(phkResult); /*0x51768d*/
  }
  return this->vtable2; /*0x517696*/
}


// ==== 0x005176A0  InfantryClass::SetField6  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::SetField6(_DWORD *this)
{
  return (*this & 1) == 0; /*0x5176a6*/
}


// ==== 0x005176B0  Flag::IsNot2  this=Flag  sig=csp ====
bool __thiscall Flag_IsNot2(_DWORD *this)
{
  return (~(unsigned __int8)*this & 2) != 0; /*0x5176b8*/
}


// ==== 0x005176C0  ObjectClass::WinMain_Helper  this=ObjectClass  sig=csp ====
bool __thiscall sub_5176C0(_DWORD *this)
{
  return (~(unsigned __int8)*this & 4) != 0; /*0x5176c9*/
}


// ==== 0x005176D0  ObjectClass::method_5176D0  this=ObjectClass  sig=csp ====
char __thiscall sub_5176D0(_BYTE *this, BYTE Data)
{
  int v4; // ecx
  char v5; // [esp+13h] [ebp-119h]
  HKEY phkResult; // [esp+14h] [ebp-118h] BYREF
  BYTE v7[4]; // [esp+18h] [ebp-114h] BYREF
  HKEY hKey; // [esp+1Ch] [ebp-110h] BYREF
  DWORD cbData; // [esp+20h] [ebp-10Ch] BYREF
  DWORD Type; // [esp+24h] [ebp-108h] BYREF
  DWORD dwDisposition; // [esp+28h] [ebp-104h] BYREF
  CHAR SubKey[128]; // [esp+2Ch] [ebp-100h] BYREF
  CHAR v13[128]; // [esp+ACh] [ebp-80h] BYREF

  strcpy(SubKey, MEMORY[0x8254E4]); /*0x5176ff*/
  v5 = 0; /*0x51770a*/
  if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0xF003Fu, &phkResult) /*0x51774a*/
    && RegCreateKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, &dwDisposition) )
  {
    return 0; /*0x517757*/
  }
  if ( !RegSetValueExA(phkResult, g_INI_Key_Options, 0, 4u, &Data, 4u) ) /*0x51777b*/
    v5 = 1; /*0x517785*/
  RegCloseKey(phkResult); /*0x51778f*/
  this->vtable2 = 0; /*0x51779f*/
  strcpy(v13, MEMORY[0x8254E4]); /*0x5177c0*/
  cbData = 4; /*0x5177c4*/
  if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, v13, 0, 0xF003Fu, &hKey) ) /*0x5177e3*/
  {
    *(_DWORD *)v7 = 0; /*0x5177e9*/
    if ( !RegQueryValueExA(hKey, g_INI_Key_Options, 0, &Type, v7, &cbData) && Type == 4 ) /*0x517817*/
    {
      v4 = *(_DWORD *)v7; /*0x517819*/
      this->vtable2 = 1; /*0x51781d*/
      *(_DWORD *)this = v4; /*0x517821*/
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
  MEMORY[0xA8F1E8] = Math::Sqrt(v0 + v0); /*0x51785e*/
}


// ==== 0x00517870  sub_517870  this=-  sig=ida-proto ====
void sub_517870()
{
  MEMORY[0xA8F238] = MEMORY[0xA8F1E8] / 60.0; /*0x51787c*/
}


// ==== 0x00517890  sub_517890  this=-  sig=ida-proto ====
void sub_517890()
{
  MEMORY[0xA8F220] = 1.0 / MEMORY[0xA8F238]; /*0x51789c*/
}


// ==== 0x005178B0  sub_5178B0  this=-  sig=ida-proto ====
void sub_5178B0()
{
  MEMORY[0xA8F218] = 0.0174532925199433 * 45.0; /*0x5178bc*/
}


// ==== 0x005178D0  sub_5178D0  this=-  sig=ida-proto ====
void sub_5178D0()
{
  MEMORY[0xA8F1F0] = 0.0174532925199433 * 60.0; /*0x5178dc*/
}


// ==== 0x005178F0  sub_5178F0  this=-  sig=ida-proto ====
void sub_5178F0()
{
  MEMORY[0xA8F1C8] = 0.0174532925199433 * 90.0; /*0x5178fc*/
}


// ==== 0x00517910  sub_517910  this=-  sig=ida-proto ====
__int64 sub_517910()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xA8F1C8] - MEMORY[0xA8F1F0]); /*0x517922*/
  result = Math::RoundToInt(v0 * MEMORY[0xA8F1E8] * 0.5); /*0x517936*/
  MEMORY[0xA8F240] = result; /*0x51793b*/
  return result; /*0x517940*/
}


// ==== 0x00517950  sub_517950  this=-  sig=ida-proto ====
void sub_517950()
{
  MEMORY[0xA8F1F8] = Math::ArcTan((double)MEMORY[0xA8F240] * 0.00390625); /*0x517967*/
}


// ==== 0x00517980  sub_517980  this=-  sig=ida-proto ====
void sub_517980()
{
  MEMORY[0xA8F210] = Math::ArcTan((double)(2 * MEMORY[0xA8F240]) / MEMORY[0xA8F1E8]); /*0x5179a2*/
}


// ==== 0x005179B0  sub_5179B0  this=-  sig=ida-proto ====
__int64 sub_5179B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xA8F240]) + 0.5); /*0x5179cb*/
  MEMORY[0xA8F234] = result; /*0x5179d0*/
  return result; /*0x5179d6*/
}


// ==== 0x005179E0  sub_5179E0  this=-  sig=ida-proto ====
int sub_5179E0()
{
  MEMORY[0xA8F1E0] = 0; /*0x5179e2*/
  return 0; /*0x5179ee*/
}


// ==== 0x005179F0  sub_5179F0  this=-  sig=ida-proto ====
int sub_5179F0()
{
  MEMORY[0xA8F200] = 0; /*0x5179f2*/
  MEMORY[0xA8F204] = 0; /*0x5179f7*/
  MEMORY[0xA8F208] = 0; /*0x5179fc*/
  return 0; /*0x517a01*/
}


// ==== 0x00517A10  sub_517A10  this=-  sig=ida-proto ====
int sub_517A10()
{
  MEMORY[0xA8F230] = 0; /*0x517a15*/
  MEMORY[0xA8F228] = 128; /*0x517a1f*/
  MEMORY[0xA8F22C] = 128; /*0x517a24*/
  return 128; /*0x517a29*/
}


// ==== 0x00517A30  sub_517A30  this=-  sig=ida-proto ====
int sub_517A30()
{
  MEMORY[0xA8F1D0] = 0; /*0x517a32*/
  MEMORY[0xA8F1D4] = 0; /*0x517a37*/
  MEMORY[0xA8F1D8] = 0; /*0x517a3c*/
  MEMORY[0xA8F1DC] = 0; /*0x517a41*/
  return 0; /*0x517a46*/
}


// ==== 0x00517A50  InfantryClass::Construct  this=InfantryClass  sig=csp ====
int __userpurge InfantryClass::Construct@<eax>(int this@<ecx>, int a2@<edi>, int a3, #37 *ppv)
{
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // edi
  int v8; // ebp
  int v9; // eax
  int v10; // ebp
  int v11; // edi
  int i; // eax
  _DWORD *v13; // edx
  int Vtable3; // [esp+24h] [ebp+4h]

  FootClass::Construct((_DWORD *)this, (int)ppv); /*0x517a5b*/
  *(_DWORD *)(this + 1732) = -1; /*0x517a64*/
  *(_DWORD *)(this + 1728) = a3; /*0x517a6e*/
  *(_DWORD *)(this + 1736) = dword_A8ED54[12]; /*0x517a7f*/
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
  AbstractClass::GenerateUniqueID(this + 4); /*0x517ae6*/
  if ( MEMORY[0x87F7E8][528772] < MEMORY[0x87F7E8][528770] /*0x517b1e*/
    || (BYTE1(MEMORY[0x87F7E8][528771]) || !MEMORY[0x87F7E8][528770])
    && MEMORY[0x87F7E8][528773] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(MEMORY[0x87F7E8][528768] + 8))(
         &MEMORY[0x87F7E8][528768],
         MEMORY[0x87F7E8][528770] + MEMORY[0x87F7E8][528773],
         0) )
  {
    v5 = MEMORY[0x87F7E8][528772]++; /*0x517b2b*/
    *(_DWORD *)(MEMORY[0x87F7E8][528769] + 4 * v5) = this; /*0x517b3a*/
  }
  InfantryClass::PerFrameUpdate(this, a2); /*0x517b3f*/
  v6 = *(_DWORD *)(this + 1728); /*0x517b44*/
  if ( v6 ) /*0x517b4c*/
  {
    v7 = (_DWORD *)(this + 1652); /*0x517b4e*/
    v8 = v6 + 844; /*0x517b54*/
    v9 = *(_DWORD *)(this + 1652); /*0x517b5a*/
    if ( v9 ) /*0x517b5e*/
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v9 + 8))(*(_DWORD *)(this + 1652)); /*0x517b63*/
    if ( ((int (__stdcall *)(int, _DWORD, int, void *, #37 **))CoCreateInstance)(v8, 0, 7, &riid, &ppv) >= 0 ) /*0x517b7c*/
    {
      if ( ((int (__stdcall *)(#37 *))OleRun)(ppv) >= 0 ) /*0x517b8b*/
        (**(void (__stdcall ***)(#37 *, void *, int))ppv)(ppv, &stru_817BB0, this + 1652); /*0x517b9a*/
      (*(void (__stdcall **)(#37 *))(*(_DWORD *)ppv + 8))(ppv); /*0x517ba3*/
    }
    if ( !*v7 ) /*0x517ba6*/
      WinAPI::Wrapper(-2147467261); /*0x517baf*/
    (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*v7 + 12))(*v7, this); /*0x517bba*/
  }
  BuildingTypeClass::GetPowerOutput((_WORD *)(this + 904), 127); /*0x517bc5*/
  Vtable3 = AbstractClass::GetVtable3(this + 4); /*0x517bd3*/
  if ( dword_A8ED54[130748] + 1 <= dword_A8ED54[130749] ) /*0x517be6*/
    goto LABEL_25; /*0x517be6*/
  if ( dword_A8ED54[130749] ) /*0x517bee*/
  {
    v10 = dword_A8ED54[130749]; /*0x517bf7*/
    if ( dword_A8ED54[130749] < 0 ) /*0x517bfb*/
      return this; /*0x517bfb*/
  }
  else
  {
    v10 = 10; /*0x517bf0*/
  }
  ppv = (#37 *)(v10 + dword_A8ED54[130749]); /*0x517c03*/
  v11 = __2_YAPAXI_Z(8 * (v10 + dword_A8ED54[130749])); /*0x517c14*/
  if ( v11 ) /*0x517c1b*/
  {
    ppv = (#37 *)((char *)ppv - 1); /*0x517c2c*/
    for ( i = 0; i < dword_A8ED54[130748]; *(_DWORD *)(v11 + 8 * i - 4) = v13[1] ) /*0x517c34*/
    {
      v13 = (_DWORD *)(dword_A8ED54[130747] + 8 * i++); /*0x517c3c*/
      *(_DWORD *)(v11 + 8 * i - 8) = *v13; /*0x517c42*/
    }
    __3_YAXPAX_Z((void *)dword_A8ED54[130747]); /*0x517c5d*/
    dword_A8ED54[130747] = v11; /*0x517c6c*/
    dword_A8ED54[130749] += v10; /*0x517c72*/
    dword_A8ED54[130751] = 0; /*0x517c77*/
LABEL_25:
    *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748]) = Vtable3; /*0x517c7d*/
    *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748] + 4) = this; /*0x517c9b*/
    LOBYTE(dword_A8ED54[130750]) = 0; /*0x517ca5*/
    ++dword_A8ED54[130748]; /*0x517cab*/
  }
  return this; /*0x517cb2*/
}


// ==== 0x00517CC0  InfantryClass::PerFrameUpdate  this=InfantryClass  sig=csp ====
_DWORD *__thiscall InfantryClass::PerFrameUpdate(int this)
{
  _DWORD *result; // eax
  _DWORD *v4; // ecx
  InfantryTypeClass *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  InfantryTypeClass **v10; // eax
  int v11; // eax
  int v12; // ecx
  BuildingClass *v13; // [esp+0h] [ebp-8h]
  FootClass *v14; // [esp+4h] [ebp-4h]

  result = TechnoClass::Update(v13, v14); /*0x517cc4*/
  v4 = *(_DWORD **)(this + 540); /*0x517cc9*/
  if ( v4 ) /*0x517cd1*/
    result = (_DWORD *)BuildingClass::PowerUpdate(v4, (TechnoClass *)this); /*0x517cd4*/
  v5 = *(InfantryTypeClass **)(this + 1728); /*0x517cd9*/
  if ( v5 ) /*0x517ce1*/
  {
    v6 = *(_DWORD *)(this + 540); /*0x517ce7*/
    if ( v6 ) /*0x517cef*/
    {
      v7 = 0; /*0x517cf4*/
      v8 = *(_DWORD *)(v6 + 52) + 332; /*0x517cf6*/
      v9 = *(_DWORD *)(v8 + 16); /*0x517cfb*/
      if ( v9 > 0 ) /*0x517d00*/
      {
        v10 = *(InfantryTypeClass ***)(v8 + 4); /*0x517d02*/
        while ( *v10 != v5 ) /*0x517d07*/
        {
          ++v7; /*0x517d09*/
          ++v10; /*0x517d0a*/
          if ( v7 >= v9 ) /*0x517d0f*/
            goto LABEL_11; /*0x517d0f*/
        }
        Power::ChangedHouse((_DWORD *)(this + 336), 1); /*0x517d1b*/
      }
    }
LABEL_11:
    v11 = *(_DWORD *)(this + 540); /*0x517d20*/
    if ( v11 && *(_BYTE *)(v11 + 703) && *(_BYTE *)(*(_DWORD *)(this + 1728) + 3214) ) /*0x517d3a*/
      Power::ChangedHouse((_DWORD *)(this + 336), 1); /*0x517d4c*/
    result = *(_DWORD **)(this + 1728); /*0x517d51*/
    *(_DWORD *)(this + 108) = result[40]; /*0x517d5d*/
    *(_DWORD *)(this + 112) = result[40]; /*0x517d66*/
    v12 = result[416]; /*0x517d69*/
    if ( v12 == -1 ) /*0x517d72*/
      v12 = result[417]; /*0x517d74*/
    *(_DWORD *)(this + 764) = v12; /*0x517d7a*/
    *(_BYTE *)(this + 978) = *((_BYTE *)result + 3280); /*0x517d86*/
  }
  return result; /*0x517d8c*/
}


// ==== 0x00517D90  InfantryClass::Destruct  this=InfantryClass  sig=csp ====
int __fastcall InfantryClass::Destruct(IUnknown *a1, AbstractClass *edx0)
{
  AbstractClass *edi1; // edi
  InfantryTypeClass *v3; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  _DWORD *eax8; // eax
  int v8; // eax
  int Vtable3; // eax
  IUnknown *v7; // edx
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  IUnknown *i; // eax
  _DWORD *v16; // eax
  int a2[2]; // [esp+Ch] [ebp-8h] BYREF

  edi1 = (AbstractClass *)&a1->field_4; /*0x517d9a*/
  a1->field_0 = (int)&InfantryClass::`vftable'; /*0x517d9d*/
  a1->field_8 = (int)&vt_InfantryClass; /*0x517da3*/
  a1->field_C = (int)&off_7EB02C; /*0x517daa*/
  a1->field_4 = (int)&InfantryClass::`vftable'; /*0x517db1*/
  if ( HouseClass_Player.__pad_5568[22252] ) /*0x517dbe*/
  {
    v3 = *(InfantryTypeClass **)&a1->__pad_690[48]; /*0x517dc4*/
    if ( v3 ) /*0x517dcc*/
    {
      if ( HouseClass::CanBuild((_DWORD *)a1->field_21C, (IUnknown *)v3, 0, 0) == -1 ) /*0x517de3*/
        *(_BYTE *)(a1->field_21C + 508) = 1; /*0x517deb*/
      v5 = *(_DWORD *)&a1->__pad_524[176]; /*0x517df2*/
      if ( v5 ) /*0x517dfa*/
      {
        TeamClass::LiberateMember_Start(v5, a1, 0xFFFFFFFF, 0); /*0x517e00*/
        *(_DWORD *)&a1->__pad_524[176] = 0; /*0x517e05*/
      }
      v6 = *(_DWORD **)&a1->__pad_2B8[36]; /*0x517e0b*/
      if ( v6 ) /*0x517e13*/
      {
        eax8 = (_DWORD *)v6[182]; /*0x517e15*/
        if ( eax8 ) /*0x517e1d*/
          SlaveManagerClass::LostSlave(eax8, (ObjectClass *)a1); /*0x517e22*/
      }
      HouseClass::DecrementUnitCount((_DWORD *)a1->field_21C, (TechnoClass *)a1); /*0x517e2e*/
      if ( !*(_DWORD *)&a1->__pad_524[336] ) /*0x517e33*/
        WinAPI::Wrapper(-2147467261); /*0x517e40*/
      (*(void (__stdcall **)(void *))(**(_DWORD **)&a1->__pad_524[336] + 172))(*(void **)&a1->__pad_524[336]); /*0x517e4e*/
      *(_DWORD *)&a1->__pad_690[88] = 2; /*0x517e56*/
      a1->__pad_690[75] = 0; /*0x517e60*/
      *(_DWORD *)&a1->__pad_690[52] = 0; /*0x517e66*/
      TechnoClass::CleanupDirection(a1); /*0x517e6c*/
    }
  }
  LOBYTE(edx0) = 1; /*0x517e71*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)a1, edx0); /*0x517e75*/
  a2[0] = (int)a1; /*0x517e89*/
  v8 = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)&HouseClass_Player.__pad_74[40] + 16))( /*0x517e8d*/
         &HouseClass_Player.__pad_74[40],
         a2);
  if ( v8 != -1 && v8 < *(int *)&HouseClass_Player.__pad_74[56] ) /*0x517e9d*/
  {
    --*(_DWORD *)&HouseClass_Player.__pad_74[56]; /*0x517ea2*/
    for ( ; /*0x517ea8*/
          v8 < *(int *)&HouseClass_Player.__pad_74[56];
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_74[44] + 4 * v8 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_74[44]
                                                                                           + 4 * v8) )
    {
      ++v8; /*0x517eb0*/
    }
  }
  Vtable3 = AbstractClass::GetVtable3(edi1); /*0x517ec3*/
  v7 = *(IUnknown **)&stru_B05488.__pad_579C[15392]; /*0x517ec8*/
  v11 = Vtable3; /*0x517ece*/
  if ( *(_DWORD *)&stru_B05488.__pad_579C[15392] ) /*0x517ed2*/
  {
    if ( !stru_B05488.__pad_579C[15400] ) /*0x517ede*/
    {
      qsort( /*0x517eee*/
        *(AbstractClass **)&stru_B05488.__pad_579C[15388],
        *(IUnknown **)&stru_B05488.__pad_579C[15392],
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      v7 = *(IUnknown **)&stru_B05488.__pad_579C[15392]; /*0x517ef3*/
      *(_DWORD *)&stru_B05488.__pad_579C[15404] = 0; /*0x517efc*/
      stru_B05488.__pad_579C[15400] = 1; /*0x517f02*/
    }
    a2[0] = v11; /*0x517f0d*/
    v12 = BinaryArraySearch(*(AbstractClass **)&stru_B05488.__pad_579C[15388], (int)v7, a2); /*0x517f18*/
    if ( v12 ) /*0x517f1f*/
    {
      v13 = (v12 - *(_DWORD *)&stru_B05488.__pad_579C[15388]) >> 3; /*0x517f27*/
      if ( v13 != -1 ) /*0x517f2d*/
      {
        v14 = v13 + 1; /*0x517f2f*/
        for ( i = *(IUnknown **)&stru_B05488.__pad_579C[15392]; /*0x517f39*/
              v14 < *(int *)&stru_B05488.__pad_579C[15392];
              i = *(IUnknown **)&stru_B05488.__pad_579C[15392] )
        {
          v16 = (_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * v14++); /*0x517f41*/
          *(v16 - 2) = *v16; /*0x517f47*/
          *(v16 - 1) = v16[1]; /*0x517f4d*/
        }
        *(_DWORD *)&stru_B05488.__pad_579C[15392] = (char *)i - 1; /*0x517f62*/
        *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392]) = 0; /*0x517f67*/
        *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392] + 4) = 0; /*0x517f77*/
        *(_DWORD *)&stru_B05488.__pad_579C[15404] = 0; /*0x517f7b*/
      }
    }
  }
  a1->__pad_8C[4] = 0; /*0x517f83*/
  return FootClass::Destruct(a1); /*0x517f8e*/
}


// ==== 0x00517FA0  InfantryClass::ProcessDeployment  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessDeployment(
        _BYTE *this,
        AnimClass **aP0,
        FootClass *a3,
        FootClass *a4,
        AbstractClass *aP1,
        FootClass *aP4,
        __int64 aP5)
{
  int v8; // eax
  int result; // eax
  int v10; // ebp
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // edi
  int v15; // eax
  void **v16; // eax
  CoordStruct *v17; // edi
  void **v18; // eax
  void **v19; // eax
  int X; // edx
  int v21; // ebx
  int v22; // edi
  InfantryTypeClass *v23; // eax
  void **v24; // eax
  int v25; // edi
  void **v26; // eax
  AnimClass *v27; // edi
  _DWORD *v28; // edx
  InfantryTypeClass *v29; // eax
  int v30; // ecx
  void **v31; // eax
  void **v32; // eax
  AnimClass *v33; // edi
  _DWORD *v34; // edx
  int v35; // edx
  void **v36; // eax
  void **v37; // eax
  void **v38; // eax
  void **v39; // eax
  void **v40; // eax
  void **v41; // eax
  AnimClass *v42; // eax
  int *v43; // ebp
  int v44; // eax
  _DWORD *v45; // eax
  _DWORD *v46; // ebx
  _DWORD *i; // edi
  int v48; // edx
  _DWORD *v49; // eax
  int *v50; // eax
  int v51; // edx
  void **v52; // eax
  int v53; // edx
  int v54; // ecx
  AnimClass *v55; // edi
  void **v56; // eax
  CoordStruct *v57; // eax
  AnimClass *v58; // ecx
  AnimClass *Y; // edx
  AbstractClass *v60; // eax
  HouseClass *v61; // ecx
  InfantryTypeClass *v62; // eax
  int v63; // edi
  int v64; // eax
  AircraftClass *v65; // [esp+16h] [ebp-D0h]
  char v66; // [esp+28h] [ebp-BEh]
  char v67; // [esp+29h] [ebp-BDh]
  CoordStruct aP2; // [esp+2Ah] [ebp-BCh] BYREF
  AnimClass *v70; // [esp+36h] [ebp-B0h] BYREF
  AnimClass *v71; // [esp+3Ah] [ebp-ACh]
  AbstractClass *v72; // [esp+3Eh] [ebp-A8h]
  AnimClass *v73; // [esp+42h] [ebp-A4h]
  CoordStruct varA0; // [esp+46h] [ebp-A0h] BYREF
  AnimClass *v77; // [esp+52h] [ebp-94h] BYREF
  AnimClass *v78; // [esp+56h] [ebp-90h]
  AbstractClass *v76; // [esp+5Ah] [ebp-8Ch]
  AnimClass *v80; // [esp+5Eh] [ebp-88h] BYREF
  CoordStruct var84; // [esp+62h] [ebp-84h] BYREF
  _DWORD v79[3]; // [esp+6Eh] [ebp-78h] BYREF
  CoordStruct var6C; // [esp+7Ah] [ebp-6Ch] BYREF
  _DWORD v81[3]; // [esp+86h] [ebp-60h] BYREF
  CoordStruct v82; // [esp+92h] [ebp-54h] BYREF
  _DWORD v83[3]; // [esp+9Eh] [ebp-48h] BYREF
  CoordStruct v84; // [esp+AAh] [ebp-3Ch] BYREF
  _DWORD v85[3]; // [esp+B6h] [ebp-30h] BYREF
  CoordStruct v86; // [esp+C2h] [ebp-24h] BYREF
  int v87[3]; // [esp+CEh] [ebp-18h] BYREF
  int a1[3]; // [esp+DAh] [ebp-Ch] BYREF

  if ( this->Crawling )
  {
    v73 = *aP0;
    if ( (int)v73 > 0 && !(_BYTE)aP4 )
    {
      v8 = Math::RoundToInt((double)(int)v73 * *(double *)&a4->passengers[1]);
      *aP0 = (AnimClass *)v8;
      if ( v8 < 1 )
        *aP0 = (AnimClass *)1;
    }
  }
  if ( a4 && *(_DWORD *)&a4->__pad_115[11] == 9 && (*(int (__thiscall **)(_BYTE *))(this->q1C8)(this) > 0 )
    *aP0 = 0;
  result = FootClass::ProcessDeploy(
             (IUnknown *)aP0,
             a3,
             a4,
             (FootClass *)aP1,
             aP4,
             (FootClass *)aP5,
             (FootClass *)HIDWORD(aP5),
             v65);
  v10 = result;
  if ( result != 5 )
  {
    if ( !result )
      return 0;
    if ( result == 4 )
    {
      v11 = this->isPlayingDamageSound;
      if ( v11 )
      {
        v12 = *(_DWORD **)(v11 + 728);
        if ( v12 )
          SlaveManagerClass::LostSlave(v12, (ObjectClass *)this);
      }
      v13 = this->transporter;
      if ( v13
        && (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13) == 1
        && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 71) + 132))(this->transporter) + 2053) )
      {
        v14 = this->transporter;
        if ( v14 )
          v15 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v14 + 44))(this->transporter) == 1 ? v14 : 0;
        else
          v15 = 0;
        (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v15 + 1240))(v15, this);
      }
      (*(void (__thiscall **)(_BYTE *, AbstractClass *))(this->q3B8)(this, aP1);
      (*(void (__thiscall **)(_BYTE *))(this->queueUpToEnter)(this);
      (*(void (__thiscall **)(_BYTE *))(this->secondaryFacing)(this);
      (*(void (__thiscall **)(_BYTE *, int, _DWORD))(this->q7A0)(this, -1, 0);
      (*(void (__thiscall **)(_BYTE *, int, _DWORD))(this->q7A0)(this, 5, 0);
      (*(void (__thiscall **)(_BYTE *))(this->disguiseBlinkTimer)(this);
      TechnoClass::CleanupAll(this, aP1);
      v66 = 0;
      if ( (_BYTE)aP4 )
      {
        if ( *(_BYTE *)(this->animation + 3756) )
        {
          v66 = 1;
          if ( this->isBomb )
          {
            v16 = (void **)__2_YAPAXI_Z(0x1C8u);
            if ( v16 )
            {
              aP2 = *(CoordStruct *)(this + 13);
              AnimClass::ctor(
                v16,
                *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 156),
                &aP2,
                0,
                (CoordStruct *)1,
                (void *)0x600,
                0,
                0);
            }
          }
        }
      }
      if ( (*(int (__thiscall **)(_BYTE *))(this->q1C8)(this) <= 10 )
      {
        v17 = (CoordStruct *)(this + 156);
        aP2 = *(CoordStruct *)(this + 13);
        if ( *((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP2) + 59) == 2 )
        {
          if ( this->isBomb )
          {
            v18 = (void **)__2_YAPAXI_Z(0x1C8u);
            if ( v18 )
            {
              aP2.X = v17->X;
              aP2.Y = this->owningHouseIndex;
              aP2.Z = this->q029;
              AnimClass::ctor(
                v18,
                *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 148),
                &aP2,
                0,
                (CoordStruct *)1,
                (void *)0x600,
                0,
                0);
            }
            v19 = (void **)__2_YAPAXI_Z(0x1C8u);
            if ( v19 )
            {
              X = v17->X;
              v21 = this->owningHouseIndex;
              v22 = this->q029;
              aP2.X = X;
              aP2.Y = v21;
              aP2.Z = v22 + 3;
              AnimClass::ctor(
                v19,
                **(CoordStruct ***)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3012),
                &aP2,
                0,
                (CoordStruct *)1,
                (void *)0x600,
                0,
                0);
            }
            goto LABEL_73;
          }
        }
      }
      v23 = (InfantryTypeClass *)this->animation;
      if ( v23->?[2872] && this->Crawling )
      {
        v24 = (void **)__2_YAPAXI_Z(0x1C8u);
        if ( !v24 )
          goto LABEL_73;
      }
      else
      {
        if ( !v23->?[2592] )
        {
          v25 = *(_DWORD *)&a4->__pad_115[11];
          if ( this->q1B1 == 33 )
          {
            if ( v25 == 8 )
            {
              v26 = (void **)__2_YAPAXI_Z(0x1C8u);
              if ( v26 )
              {
                aP2 = *(CoordStruct *)(this + 13);
                v27 = AnimClass::ctor(
                        v26,
                        *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 172),
                        &aP2,
                        0,
                        (CoordStruct *)1,
                        (void *)0x600,
                        0,
                        0);
              }
              else
              {
                v27 = 0;
              }
              v70 = (AnimClass *)this->q027;
              v71 = (AnimClass *)this->owningHouseIndex;
              v28 = v27->field_C8;
              v72 = (AbstractClass *)this->q029;
              CreateFireAtSW(
                *(_DWORD **)&HouseClass_Player.__pad_5568[23236],
                *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_3C[20] + 4 * v28[179]),
                (IUnknown *)&v70);
              if ( v27 )
                (*(void (__thiscall **)(AnimClass *, int))(v27->field_0 + 32))(v27, 1);
            }
            v25 = 3;
          }
          if ( aP1
            && (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) == 6
            && *(_BYTE *)(aP1[36].uniqueId + 5823) )
          {
            v25 = 5;
          }
          v29 = (InfantryTypeClass *)this->animation;
          v30 = *(_DWORD *)&v29->?[2824];
          if ( v30 <= 0 )
          {
            if ( v29->?[2873] )
            {
              (*(void (__thiscall **)(_BYTE *, int, int, _DWORD))(this->FootClass_field_558)(this, 11, 1, 0);
              if ( v25 == 8 )
              {
                v32 = (void **)__2_YAPAXI_Z(0x1C8u);
                if ( v32 )
                {
                  v70 = (AnimClass *)this->q027;
                  v71 = (AnimClass *)this->owningHouseIndex;
                  v72 = (AbstractClass *)this->q029;
                  v33 = AnimClass::ctor(
                          v32,
                          *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 172),
                          (CoordStruct *)&v70,
                          0,
                          (CoordStruct *)1,
                          (void *)0x600,
                          0,
                          0);
                }
                else
                {
                  v33 = 0;
                }
                aP2.X = this->q027;
                aP2.Y = this->owningHouseIndex;
                v34 = v33->field_C8;
                aP2.Z = this->q029;
                CreateFireAtSW(
                  *(_DWORD **)&HouseClass_Player.__pad_5568[23236],
                  *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_3C[20] + 4 * v34[179]),
                  (IUnknown *)&aP2);
                if ( v33 )
                  (*(void (__thiscall **)(AnimClass *, int))(v33->field_0 + 32))(v33, 1);
              }
LABEL_72:
              if ( !v66 )
                return 4;
            }
            else
            {
              switch ( v25 )
              {
                case 1:
                  (*(void (__thiscall **)(_BYTE *, int, int, _DWORD))(this->FootClass_field_558)(this, 11, 1, 0);
                  goto LABEL_72;
                case 2:
                  goto LABEL_76;
                case 3:
                  v36 = (void **)__2_YAPAXI_Z(0x1C8u);
                  if ( v36 )
                  {
                    v70 = (AnimClass *)this->q027;
                    v71 = (AnimClass *)this->owningHouseIndex;
                    v72 = (AbstractClass *)this->q029;
                    AnimClass::ctor(
                      v36,
                      *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 156),
                      (CoordStruct *)&v70,
                      0,
                      (CoordStruct *)1,
                      (void *)0x600,
                      0,
                      0);
                  }
                  break;
                case 4:
                  v37 = (void **)__2_YAPAXI_Z(0x1C8u);
                  if ( v37 )
                  {
                    aP2 = *(CoordStruct *)(this + 13);
                    AnimClass::ctor(
                      v37,
                      *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 160),
                      &aP2,
                      0,
                      (CoordStruct *)1,
                      (void *)0x600,
                      0,
                      0);
                  }
                  break;
                case 5:
                  v38 = (void **)__2_YAPAXI_Z(0x1C8u);
                  if ( v38 )
                  {
                    v86 = *(CoordStruct *)(this + 13);
                    AnimClass::ctor(
                      v38,
                      *(CoordStruct **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4),
                      &v86,
                      0,
                      (CoordStruct *)1,
                      (void *)0x600,
                      0,
                      0);
                  }
                  break;
                case 6:
                  v39 = (void **)__2_YAPAXI_Z(0x1C8u);
                  if ( v39 )
                  {
                    v82 = *(CoordStruct *)(this + 13);
                    AnimClass::ctor(
                      v39,
                      *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 164),
                      &v82,
                      0,
                      (CoordStruct *)1,
                      (void *)0x600,
                      0,
                      0);
                  }
                  break;
                case 7:
                  v40 = (void **)__2_YAPAXI_Z(0x1C8u);
                  if ( v40 )
                  {
                    v84 = *(CoordStruct *)(this + 13);
                    AnimClass::ctor(
                      v40,
                      *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 168),
                      &v84,
                      0,
                      (CoordStruct *)1,
                      (void *)0x600,
                      0,
                      0);
                  }
                  break;
                case 8:
                  v41 = (void **)__2_YAPAXI_Z(0x1C8u);
                  if ( v41 )
                  {
                    var84 = *(CoordStruct *)(this + 13);
                    v42 = AnimClass::ctor(
                            v41,
                            *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 172),
                            &var84,
                            0,
                            (CoordStruct *)1,
                            (void *)0x600,
                            0,
                            0);
                  }
                  else
                  {
                    v42 = 0;
                  }
                  if ( aP1 )
                  {
                    Function::Method_424CA0(v42, *(_DWORD *)aP1[15].__pad_0);
                  }
                  else if ( HIDWORD(aP5) )
                  {
                    Function::Method_424CA0(v42, SHIDWORD(aP5));
                  }
                  break;
                case 9:
                  v43 = (int *)(this + 156);
                  v81[0] = this->q027;
                  v44 = *(_DWORD *)this;
                  v81[1] = this->owningHouseIndex;
                  v81[2] = this->q029;
                  (*(void (__thiscall **)(_BYTE *, _DWORD *))(v44 + 244))(this, v81);
                  v45 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(this->q048)(this, v87);
                  LOWORD(v73) = *v45 / 256;
                  HIWORD(v73) = v45[1] / 256;
                  v80 = v73;
                  v46 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v80);
                  v67 = 0;
                  for ( i = (_DWORD *)v46[57]; i; i = (_DWORD *)i[12] )
                  {
                    if ( (*(int (__thiscall **)(_DWORD *))(*i + 44))(i) == 6 )
                      v67 = 1;
                  }
                  if ( *(float *)&stru_89E138.__pad_71C[36 * v46[59] + 492] == 0.0 && !this->onBridge )
                    goto LABEL_76;
                  v85[0] = *v43;
                  v85[1] = this->owningHouseIndex;
                  v48 = this->q029;
                  v83[0] = *v43;
                  v85[2] = v48;
                  v83[1] = this->owningHouseIndex;
                  v83[2] = this->q029;
                  v49 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v83);
                  v50 = ObjectPlacement::CalcPosition(v49, a1, (IUnknown *)v85, 0, 0, 0);
                  if ( *v50 == *(_DWORD *)&HouseClass_Player.__pad_5568[24396]
                    && v50[1] == *(_DWORD *)&HouseClass_Player.__pad_5568[24400]
                    && v50[2] == *(_DWORD *)&HouseClass_Player.__pad_5568[24404] )
                  {
                    goto LABEL_76;
                  }
                  if ( v67 )
                  {
LABEL_76:
                    (*(void (__thiscall **)(_BYTE *, int, int, _DWORD))(this->FootClass_field_558)(this, 12, 1, 0);
                    goto LABEL_72;
                  }
                  v79[0] = *v43;
                  v51 = *(_DWORD *)this;
                  v79[1] = this->owningHouseIndex;
                  v79[2] = this->q029;
                  (*(void (__thiscall **)(_BYTE *, _DWORD *))(v51 + 240))(this, v79);
                  v52 = (void **)__2_YAPAXI_Z(0x1C8u);
                  if ( v52 )
                  {
                    v53 = this->owningHouseIndex;
                    var6C.X = *v43;
                    v54 = this->q029;
                    var6C.Y = v53;
                    var6C.Z = v54;
                    v55 = AnimClass::ctor(
                            v52,
                            *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 180),
                            &var6C,
                            0,
                            (CoordStruct *)1,
                            (void *)0x600,
                            0,
                            0);
                  }
                  else
                  {
                    v55 = 0;
                  }
                  if ( aP1 )
                  {
                    Function::Method_424CA0(v55, *(_DWORD *)aP1[15].__pad_0);
                    v55->field_D4 = *(_DWORD *)(*(_DWORD *)(stru_B05488.field_4C
                                                          + 4 * *(_DWORD *)(*(_DWORD *)aP1[15].__pad_0 + 90196))
                                              + 780);
                  }
                  else if ( HIDWORD(aP5) )
                  {
                    Function::Method_424CA0(v55, SHIDWORD(aP5));
                    v55->field_D4 = *(_DWORD *)(*(_DWORD *)(stru_B05488.field_4C + 4 * *(_DWORD *)(HIDWORD(aP5) + 90196))
                                              + 780);
                  }
                  v77 = (AnimClass *)v55->field_9C;
                  v78 = *(AnimClass **)v55->__pad_A0;
                  v76 = (AbstractClass *)v55->field_A4;
                  (*(void (__thiscall **)(AnimClass *, AnimClass **))(v55->field_0 + 240))(v55, &v77);
                  break;
                case 10:
                  v56 = (void **)__2_YAPAXI_Z(0x1C8u);
                  if ( v56 )
                  {
                    varA0 = *(CoordStruct *)(this + 13);
                    AnimClass::ctor(
                      v56,
                      *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 176),
                      &varA0,
                      0,
                      (CoordStruct *)1,
                      (void *)0x600,
                      0,
                      0);
                  }
                  break;
                default:
                  break;
              }
            }
          }
          else
          {
            if ( v25 < 0 || v25 >= v30 || !*(_DWORD *)(*(_DWORD *)&v29->?[2812] + 4 * v25) )
              v25 = 0;
            if ( *(_DWORD *)(*(_DWORD *)&v29->?[2812] + 4 * v25) )
            {
              v31 = (void **)__2_YAPAXI_Z(0x1C8u);
              if ( v31 )
              {
                v70 = (AnimClass *)this->q027;
                v71 = (AnimClass *)this->owningHouseIndex;
                v72 = (AbstractClass *)this->q029;
                AnimClass::ctor(
                  v31,
                  *(CoordStruct **)(*(_DWORD *)(this->animation + 3696) + 4 * v25),
                  (CoordStruct *)&v70,
                  0,
                  (CoordStruct *)1,
                  (void *)0x600,
                  0,
                  0);
              }
            }
          }
LABEL_73:
          v35 = *(_DWORD *)this;
          if ( *(_BYTE *)(this->animation + 3477) )
          {
            if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *, _DWORD))(v35 + 988))(this, 0) )
            {
              (*(void (__thiscall **)(_BYTE *))(this->radioContact)(this);
              return 4;
            }
          }
          else
          {
            (*(void (__thiscall **)(_BYTE *))(v35 + 248))(this);
          }
          return 4;
        }
        v24 = (void **)__2_YAPAXI_Z(0x1C8u);
        if ( !v24 )
          goto LABEL_73;
      }
      aP2 = *(CoordStruct *)(this + 13);
      AnimClass::ctor(
        v24,
        *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 156),
        &aP2,
        0,
        (CoordStruct *)1,
        (void *)0x600,
        0,
        0);
      goto LABEL_73;
    }
    if ( aP1 )
    {
      varA0 = *(CoordStruct *)&aP1[4].__pad_0[12];
      v57 = &varA0;
    }
    else
    {
      v57 = (CoordStruct *)&HouseClass_Player.__pad_5568[24396];
    }
    v58 = (AnimClass *)v57->X;
    Y = (AnimClass *)v57->Y;
    v60 = (AbstractClass *)v57->Z;
    v77 = v58;
    v61 = (HouseClass *)this->owner;
    v78 = Y;
    v76 = v60;
    if ( !(unsigned __int8)House::IsCurrentPlayer((#375 *)v61)
      && *(_BYTE *)(this->animation + 3779)
      && ((*(int (__thiscall **)(_BYTE *))(this->q610)(this) == 5
       || (*(int (__thiscall **)(_BYTE *))(this->q610)(this) == 11) )
    {
      (*(void (__thiscall **)(_BYTE *, int, _DWORD))(this->q7A0)(this, 15, 0);
    }
    if ( aP1
      && ((*(void (__thiscall **)(_BYTE *, AnimClass **, _DWORD, _DWORD))(this->radarFlashTimer)(this, &v77, 0, 0),
          *((int *)this + 437) < 100) )
    {
      v62 = (InfantryTypeClass *)this->animation;
      if ( v62->?[2891] )
      {
        this->q1B5 = 300;
        return v10;
      }
      if ( !v62->?[2888] && !TechnoClass::HasVoiceResponse((TechnoClass *)this, 13) )
      {
        this->q1B5 = 100;
        return v10;
      }
    }
    else if ( !*(_BYTE *)(this->animation + 3772) && !TechnoClass::HasVoiceResponse((TechnoClass *)this, 13) )
    {
      v63 = 50;
      if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5896) )
        v63 = 25;
      if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) )
        v63 /= 2;
      v64 = this->q1B5 + v63;
      if ( v64 >= 300 )
        v64 = 300;
      this->q1B5 = v64;
    }
    return v10;
  }
  return result;
}


// ==== 0x00518D80  ObjectClass::CalculateLocomotionFrameIndex  this=AbstractClass  sig=csp ====
int __thiscall CalculateLocomotionFrameIndex(int *this)
{
  int v2; // ebx
  __int16 *v3; // eax
  AbstractClass *v4; // esi
  int v5; // edx
  int v6; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  AbstractClass *v10; // esi
  _DWORD *v11; // ecx
  _DWORD *Value; // eax
  bool v14; // [esp+19h] [ebp-1Dh]
  AbstractClass *v15; // [esp+1Ah] [ebp-1Ch]
  int v16; // [esp+1Eh] [ebp-18h] BYREF
  AbstractClass *v17; // [esp+22h] [ebp-14h] BYREF
  _BYTE v18[16]; // [esp+26h] [ebp-10h] BYREF

  v2 = this->q1B1; /*0x518d88*/
  if ( v2 == -1 ) /*0x518d91*/
  {
    v3 = (__int16 *)(*(int (__thiscall **)(int *, AbstractClass **))(*this + 440))(this, &v17); /*0x518d9d*/
    if ( *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v3) + 59) != 2 || this->q08C ) /*0x518db7*/
      v2 = 0; /*0x518dc8*/
    else
      v2 = 16; /*0x518dc1*/
  }
  v4 = (AbstractClass *)this->q1B0; /*0x518dcf*/
  v5 = *this; /*0x518dd5*/
  v17 = v4; /*0x518ddb*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *, IUnknown *))(v5 + 1088))(this, HouseClass_Player) ) /*0x518ddf*/
  {
    v17 = (AbstractClass *)(*(int (__thiscall **)(int *, int))(*this + 204))(this, 1); /*0x518df6*/
    v4 = v17; /*0x518dfa*/
  }
  v6 = 36 * v2; /*0x518e05*/
  v7 = *(_DWORD *)(*(_DWORD *)&v4[101].__pad_0[8] + v6 + 4); /*0x518e0f*/
  if ( v7 <= 1 ) /*0x518e11*/
    v7 = 1; /*0x518e13*/
  v15 = (AbstractClass *)(this->q0F8 % v7); /*0x518e2f*/
  if ( !*(_BYTE *)(this->q1B0 + 3476) ) /*0x518e33*/
    goto LABEL_25; /*0x518e33*/
  v8 = this->__pad_19D; /*0x518e39*/
  v16 = 0; /*0x518e47*/
  if ( !v8 ) /*0x518e4f*/
    goto LABEL_16; /*0x518e4f*/
  v9 = StreamClass::Set2(&v16, this + 413); /*0x518e56*/
  if ( v9 < 0 && v9 != -2147467262 ) /*0x518e64*/
    WinAPI::Wrapper(v9); /*0x518e67*/
  if ( !v16 ) /*0x518e72*/
LABEL_16:
    WinAPI::Wrapper(-2147467261); /*0x518e79*/
  (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v16 + 12))(v16, v18); /*0x518e8b*/
  v14 = memcmp(v18, &g_CLSID_JumpjetLocomotion, 0x10u) == 0; /*0x518ea4*/
  if ( v16 ) /*0x518eac*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v16 + 8))(v16); /*0x518eb1*/
  if ( !v14 || !this->q2B4 || *(_BYTE *)(this->q1B0 + 3787) ) /*0x518ecc*/
  {
    v4 = v17; /*0x518f2f*/
LABEL_25:
    v11 = (_DWORD *)(v6 + *(_DWORD *)&v4[101].__pad_0[8]); /*0x518f33*/
    if ( (int)v11[2] > 0 ) /*0x518f40*/
    {
      Value = ProgressTimer::GetValue((_WORD *)this + 452, (IUnknown *)&v17); /*0x518f4d*/
      v11 = (_DWORD *)(v6 + *(_DWORD *)&v4[101].__pad_0[8]); /*0x518f5e*/
      v15 = (AbstractClass *)((char *)v15 + v11[2] * dword_7EAEFC[((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F]); /*0x518f76*/
    }
    return (int)v15 + *v11; /*0x518f76*/
  }
  v10 = v17; /*0x518ed6*/
  v11 = (_DWORD *)(v6 + *(_DWORD *)&v17[101].__pad_0[8]); /*0x518ee0*/
  if ( (int)v11[2] > 0 ) /*0x518ee7*/
    return (int)v15 /*0x518f2e*/
         + *(_DWORD *)(v6 + *(_DWORD *)&v10[101].__pad_0[8] + 8)
         * dword_7EAEFC[((((unsigned int)*ObjectClass::CalcTargetFacing(
                                            this,
                                            (IUnknown *)&v17,
                                            (ObjectClass *)this->q2B4) >> 10)
                        + 1) >> 1)
                      & 0x1F]
         + *(_DWORD *)(v6 + *(_DWORD *)&v10[101].__pad_0[8]);
  return (int)v15 + *v11; /*0x518f0d*/
}


// ==== 0x00518F90  InfantryClass::Draw  this=InfantryClass  sig=csp ====
int __userpurge InfantryClass::Draw@<eax>(
        int *a1@<ecx>,
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
  int v17; // edx
  int v18; // eax
  int v19; // edx
  char v20; // al
  int v21; // eax
  int v22; // edx
  unsigned __int8 v23; // bl
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // eax
  int v30; // eax
  int **v31; // ebx
  int v32; // eax
  _DWORD *v33; // eax
  int *v34; // edi
  int v35; // edx
  int v36; // ecx
  bool v37; // zf
  int *v38; // esi
  unsigned int v39; // eax
  int *v40; // ebx
  int v41; // ecx
  int v42; // eax
  int result; // eax
  int v44; // ebx
  int *v45; // esi
  int v46; // edi
  int v47; // ecx
  int v48; // eax
  unsigned int v49; // esi
  int v50; // esi
  int v51; // edi
  int v52; // esi
  int v53; // ebx
  _DWORD *v54; // ecx
  int v55; // edx
  int v56; // eax
  int v57; // edi
  int v58; // eax
  int v59; // eax
  int v60; // edi
  int v61; // eax
  int *v62; // [esp+8h] [ebp-88h]
  int v63; // [esp+14h] [ebp-7Ch]
  int v64; // [esp+14h] [ebp-7Ch]
  int v65; // [esp+20h] [ebp-70h]
  unsigned __int8 v66; // [esp+4Eh] [ebp-42h]
  unsigned __int8 v67; // [esp+4Fh] [ebp-41h]
  int v68; // [esp+50h] [ebp-40h]
  int v69; // [esp+54h] [ebp-3Ch] BYREF
  int v70; // [esp+58h] [ebp-38h] BYREF
  _DWORD *v71; // [esp+5Ch] [ebp-34h] BYREF
  int v72; // [esp+60h] [ebp-30h]
  int v73; // [esp+64h] [ebp-2Ch] BYREF
  int v74; // [esp+68h] [ebp-28h] BYREF
  _DWORD *v75; // [esp+6Ch] [ebp-24h] BYREF
  int v76; // [esp+70h] [ebp-20h]
  int v77; // [esp+74h] [ebp-1Ch] BYREF
  int v78; // [esp+78h] [ebp-18h]
  int v79; // [esp+7Ch] [ebp-14h]
  _DWORD v80[4]; // [esp+80h] [ebp-10h] BYREF

  v17 = a2[1]; /*0x518f9d*/
  v18 = *a1; /*0x518fa0*/
  v75 = (_DWORD *)*a2; /*0x518fa3*/
  v76 = v17; /*0x518fb0*/
  v19 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(v18 + 448))(a1, &v73); /*0x518fba*/
  v20 = *((_BYTE *)a1 + 664); /*0x518fbc*/
  v70 = v19; /*0x518fc4*/
  v68 = 0; /*0x518fca*/
  if ( v20 ) /*0x518fce*/
  {
    v21 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 6316); /*0x518fda*/
    v22 = MEMORY[0x87F7E8][7806] + 2 * v21; /*0x518fe0*/
    v23 = *(_BYTE *)(v21 + v22 + 4174 + 2087); /*0x518fed*/
    v66 = *(_BYTE *)(v21 + v22 + 6260); /*0x518ffa*/
    v67 = *(_BYTE *)(v21 + v22 + 6262); /*0x519004*/
    v24 = DDraw::GetStatus() - 1; /*0x51900d*/
    if ( v24 ) /*0x51900e*/
    {
      v27 = v24 - 1; /*0x519010*/
      if ( v27 ) /*0x519011*/
      {
LABEL_6:
        LOWORD(v25) = v66; /*0x51905b*/
        LOWORD(v27) = v67; /*0x519061*/
        LOWORD(v26) = v23 >> 1; /*0x51906c*/
        v68 |= v27 | (32 * ((32 * v25) | v26)); /*0x51907e*/
        goto LABEL_7; /*0x51907e*/
      }
      LOWORD(v25) = v67; /*0x519019*/
      LOWORD(v26) = v23; /*0x519025*/
      v24 = v25 | (32 * (v26 | (v66 << 6))); /*0x51902c*/
      v68 = v24; /*0x51902e*/
    }
    LOWORD(v25) = v66; /*0x519032*/
    LOWORD(v26) = v23 >> 1; /*0x51903f*/
    LOWORD(v24) = v67; /*0x519041*/
    v25 *= 32; /*0x519047*/
    v26 = v24 | ((v25 | v26) << 6); /*0x51904f*/
    HIWORD(v27) = HIWORD(v26) | HIWORD(v68); /*0x519055*/
    v68 |= v26; /*0x519057*/
    goto LABEL_6; /*0x519057*/
  }
LABEL_7:
  v28 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*a1 + 72))(a1, &v77); /*0x519082*/
  LOWORD(v69) = *v28 / 256; /*0x51909f*/
  HIWORD(v69) = v28[1] / 256; /*0x5190b7*/
  v71 = (_DWORD *)v69; /*0x5190c0*/
  v29 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v71); /*0x5190ca*/
  if ( CellClass::QuickPassable(v29) ) /*0x5190d1*/
    v68 = 0; /*0x5190da*/
  if ( *((_BYTE *)a1 + 1668) != 0xFF ) /*0x5190e5*/
  {
    TacticalClass::AddToDrawQueue((_DWORD *)MEMORY[0x87F7E8][7887], (int)a1, (int)v75, v76); /*0x519609*/
    return AbstractClass::COMStub_Return0_69((int)&v75, (int)a3); /*0x51961a*/
  }
  v30 = a1[413]; /*0x5190eb*/
  v31 = (int **)(a1 + 413); /*0x5190f1*/
  v69 = 0; /*0x5190f9*/
  if ( !v30 ) /*0x5190fd*/
    goto LABEL_15; /*0x5190fd*/
  v32 = StreamClass::Set2(&v69, a1 + 413); /*0x519104*/
  if ( v32 < 0 && v32 != -2147467262 ) /*0x519112*/
    WinAPI::Wrapper(v32); /*0x519115*/
  if ( !v69 ) /*0x519120*/
LABEL_15:
    WinAPI::Wrapper(-2147467261); /*0x519127*/
  (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v69 + 12))(v69, v80); /*0x519138*/
  if ( (*(int (__thiscall **)(int *))(*a1 + 456))(a1) > 0 && !memcmp(v80, &g_CLSID_DriveLocomotion, 0x10u) ) /*0x51915e*/
  {
    v71 = (_DWORD *)SearchMIXFile(aPodShp, 0); /*0x519172*/
    if ( !*v31 ) /*0x519176*/
      WinAPI::Wrapper(-2147467261); /*0x519181*/
    v33 = (_DWORD *)(*(int (__stdcall **)(int *, int *))(**v31 + 48))(*v31, &v77); /*0x519190*/
    v34 = a2; /*0x519193*/
    v35 = v33[1]; /*0x519199*/
    v36 = a2[1]; /*0x5191a0*/
    v73 = *v33 + *a2; /*0x5191a3*/
    v37 = *v31 == 0; /*0x5191ab*/
    v74 = v35 + v36; /*0x5191ad*/
    if ( v37 ) /*0x5191b1*/
      WinAPI::Wrapper(-2147467261); /*0x5191b8*/
    v38 = *v31; /*0x5191c3*/
    v65 = (*(int (__thiscall **)(int *, _DWORD))(*a1 + 748))(a1, 0) - 2; /*0x5191e1*/
    v63 = a4; /*0x5191f1*/
    v39 = (*(int (**)(void))(*v38 + 136))(); /*0x5191f4*/
    DrawToSurfaceSHP( /*0x51920c*/
      (int *)MEMORY[0x87F7E8][7883],
      (_DWORD *)MEMORY[0x87F6C0][1],
      (int)v71,
      v39,
      v38,
      &v74,
      v63,
      11777,
      0,
      v65,
      1000,
      v68,
      0,
      0,
      0,
      0);
    CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v70); /*0x51921b*/
    CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v70); /*0x51922a*/
    if ( !*v31 ) /*0x51922f*/
      WinAPI::Wrapper(-2147467261); /*0x51923c*/
    v40 = *v31; /*0x519248*/
    v41 = *v40; /*0x519255*/
    a2 = (int *)*a1; /*0x519267*/
    v42 = (*(int (__stdcall **)(int *, int *, int *, _DWORD, int, _DWORD, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v41 + 136))( /*0x519271*/
            v40,
            v34,
            a3,
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
    (*(void (__thiscall **)(int *, int *, int))(a16 + 1292))(a1, a2, v42); /*0x519286*/
LABEL_53:
    if ( v69 ) /*0x5195ee*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v69 + 8))(v69); /*0x5195f3*/
    return AbstractClass::COMStub_Return0_69((int)&v75, (int)a3); /*0x5195f6*/
  }
  v73 = (*(int (__thiscall **)(int *))(*a1 + 108))(a1); /*0x51929d*/
  if ( v73 )
  {
    a2 = *(int **)(*(int (__thiscall **)(int *, _DWORD **))(*a1 + 448))(a1, &v71); /*0x5192da*/
    TacticalClass::AddToDrawQueue((_DWORD *)MEMORY[0x87F7E8][7887], (int)a1, (int)v75, v76); /*0x5192e6*/
    if ( LightningStorm::IsActive() ) /*0x5192eb*/
    {
      v44 = *(_DWORD *)(MEMORY[0x87F7E8][536210] + 13660); /*0x5192fa*/
    }
    else if ( PsyDom::IsActive() ) /*0x519302*/
    {
      v44 = *(_DWORD *)(MEMORY[0x87F7E8][536210] + 13712); /*0x519311*/
    }
    else if ( (unsigned __int8)NukeFlash::IsActive() ) /*0x519319*/
    {
      v44 = *(_DWORD *)(MEMORY[0x87F7E8][536210] + 13684); /*0x519327*/
    }
    else
    {
      v44 = *(_DWORD *)(MEMORY[0x87F7E8][536210] + 13636); /*0x519335*/
    }
    if ( *((_BYTE *)a1 + 140) ) /*0x51933b*/
      goto LABEL_39; /*0x51933b*/
    v45 = a1 + 39; /*0x519349*/
    v77 = a1[39]; /*0x519353*/
    v78 = a1[40]; /*0x51935f*/
    v79 = a1[41]; /*0x51936b*/
    if ( (*((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], &v77) + 80) & 0x10000) == 0 ) /*0x51937e*/
      goto LABEL_38; /*0x51937e*/
    v77 = *v45; /*0x519384*/
    v78 = a1[40]; /*0x51938b*/
    v46 = a1[41]; /*0x51938f*/
    v77 = *v45; /*0x519394*/
    v78 = a1[40]; /*0x5193a0*/
    v79 = a1[41]; /*0x5193a7*/
    if ( v46 > dword_A8ED54[312] / 2 + Cell::GetGroundHeight(&v77) )
    {
LABEL_39:
      v51 = v44 * ((*(int (__thiscall **)(int *))(*a1 + 456))(a1) / (2 * dword_A8ED54[315])); /*0x51943c*/
      v50 = v51 + *((__int16 *)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&a2) + 133); /*0x51944b*/
    }
    else
    {
LABEL_38:
      v47 = a1[41]; /*0x5193c9*/
      v48 = a1[40]; /*0x5193cc*/
      v77 = *v45; /*0x5193cf*/
      v79 = v47; /*0x5193d7*/
      v78 = v48; /*0x5193e1*/
      v49 = (*((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], &v77) + 80) & 0x10000) != 0 ? 0xFFFFFE0C : 0;
      v50 = *((__int16 *)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&a2) + 133) + v49; /*0x519416*/
    }
    v52 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 6104) + v50; /*0x519457*/
    v53 = (*(int (__thiscall **)(int *))(*a1 + 456))(a1); /*0x519469*/
    v77 = a1[39]; /*0x51946f*/
    v78 = a1[40]; /*0x519480*/
    v79 = a1[41]; /*0x519487*/
    v54 = Coord::To_Cell(MEMORY[0x87F7E8], &v77); /*0x519490*/
    v71 = v54; /*0x519492*/
    v55 = v54[80]; /*0x519496*/
    if ( (v55 & 0x100) == 0 || v53 < dword_A8ED54[312] ) /*0x5194a7*/
      goto LABEL_48; /*0x5194a7*/
    if ( (v55 & 0x800) != 0 ) /*0x5194ac*/
    {
      if ( (*((_DWORD *)Cell::GetNeighbourContent(v54, 0) + 80) & 0x100) != 0 ) /*0x5194be*/
      {
LABEL_47:
        v53 -= dword_A8ED54[312]; /*0x5194e1*/
LABEL_48:
        if ( v53 > 0 && (dword_A8ED54[316] || (dword_A8ED54[316] = SearchMIXFile(aInfshdwShp, 0)) != 0) ) /*0x51950b*/
        {
          v56 = a1[40]; /*0x51950f*/
          v57 = a1[41]; /*0x519512*/
          v77 = a1[39]; /*0x519517*/
          v78 = v56; /*0x51951b*/
          v58 = ZCoordToScreenY(v53); /*0x51951f*/
          v72 = v76 - *((char *)a1 + 1716) + v58; /*0x51953b*/
          v71 = v75; /*0x51954e*/
          v59 = ZCoordToScreenY(v57 - v53); /*0x519552*/
          DrawToSurfaceSHP( /*0x519585*/
            (int *)MEMORY[0x87F7E8][7883],
            (_DWORD *)MEMORY[0x87F6C0][1],
            dword_A8ED54[316],
            1u,
            (int *)&v71,
            a3,
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
        v72 = v76 - *((char *)a1 + 1716); /*0x5195ab*/
        v64 = dword_825500; /*0x5195b8*/
        v62 = a3; /*0x5195ca*/
        v71 = v75; /*0x5195cb*/
        v60 = *a1; /*0x5195cf*/
        v61 = CalculateLocomotionFrameIndex(a1); /*0x5195d5*/
        (*(void (__thiscall **)(int *, int, int, _DWORD **, int *, _DWORD, int, int, int, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v60 + 1292))( /*0x5195e2*/
          a1,
          v73,
          v61,
          &v71,
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
      v54 = v71; /*0x5194c0*/
    }
    if ( (v54[80] & 0x800) != 0 || (*((_DWORD *)Cell::GetNeighbourContent(v54, 6u) + 80) & 0x100) == 0 ) /*0x5194df*/
      goto LABEL_48; /*0x5194df*/
    goto LABEL_47; /*0x5194df*/
  }
  result = v69; /*0x5192a3*/
  if ( v69 ) /*0x5192a9*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)v69 + 8))(v69); /*0x5192b2*/
  return result; /*0x5192b5*/
}


// ==== 0x0051AA10  InfantryClass::HandleTargetDestroyed  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::HandleTargetDestroyed(int *this, int *a2, int *a3)
{
  int result; // eax

  result = FootClass::HandleTargetDestroyed(this, a2, a3); /*0x51aa1e*/
  if ( (int *)this->animation == a2 ) /*0x51aa29*/
    this->animation = 0; /*0x51aa2b*/
  return result; /*0x51aa35*/
}


// ==== 0x0051AA40  InfantryClass::AssignDestination_SyncLog  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::AssignDestination_SyncLog(int this, IUnknown *aP1, TechnoClass *aP2)
{
  #375 *v4; // eax
  void *v5; // eax
  ObjectClass *v6; // ebx
  _DWORD *v7; // eax
  void *v8; // esi
  int v9; // edx
  _DWORD *v10; // eax
  IUnknown *v11; // eax
  IUnknown *v12; // eax
  void *v13; // eax
  InfantryTypeClass *v14; // eax
  TechnoClass *v15; // eax
  TechnoClass *v16; // esi
  ObjectClass *v17; // eax
  int v18; // eax
  IUnknown *v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  ObjectClass *v24; // eax
  _DWORD *v25; // eax
  AbstractClass *v26; // edx
  _DWORD *v27; // eax
  bool v28; // al
  int v29; // ebx
  bool v30; // zf
  IUnknown *v31; // eax
  IUnknown *v32; // esi
  int v33; // eax
  IUnknown *v34; // eax
  int v35; // eax
  int v36; // eax
  IUnknown *v37; // eax
  IUnknown *v38; // eax
  IUnknown *v39; // esi
  int v40; // eax
  IUnknown *v41; // eax
  int v43; // [esp+44h] [ebp-58h]
  bool CanDeployAtCell; // [esp+73h] [ebp-29h]
  LPVOID ppv; // [esp+74h] [ebp-28h] BYREF
  rc_ptr_base v46; // [esp+78h] [ebp-24h] BYREF
  rc_ptr_base v47; // [esp+7Ch] [ebp-20h] BYREF
  _BYTE v48[12]; // [esp+80h] [ebp-1Ch] BYREF
  char v49[16]; // [esp+8Ch] [ebp-10h] BYREF

  v4 = (#375 *)(*(int (__thiscall **)(int))(this->ambientSoundController)(this); /*0x51aa4c*/
  if ( (unsigned __int8)House::IsCurrentPlayer(v4) ) /*0x51aa51*/
  {
    v5 = *(void **)(this + 1732); /*0x51aa5a*/
    if ( v5 == (void *)27 || v5 == (void *)28 || v5 == (void *)29 || v5 == (void *)30 ) /*0x51aa7e*/
      return (char)v5; /*0x51aa7e*/
  }
  v6 = (ObjectClass *)aP1; /*0x51aa8a*/
  if ( *(_BYTE *)(*(_DWORD *)(this + 1728) + 3476) ) /*0x51aa90*/
  {
    if ( aP1 ) /*0x51aaa0*/
    {
      v7 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(this->q048)(this, v48); /*0x51aab0*/
      v8 = *(void **)CellStruct::Set(&v47, *v7 / 256, v7[1] / 256); /*0x51aadd*/
      v9 = *(_DWORD *)v6->__pad_0; /*0x51aadf*/
      ppv = v8; /*0x51aae8*/
      v10 = (_DWORD *)(*(int (__thiscall **)(ObjectClass *, char *))(v9 + 72))(v6, v49); /*0x51aaec*/
      v5 = *(void **)CellStruct::Set(&v46, *v10 / 256, v10[1] / 256); /*0x51ab19*/
      v46.vfptr = v5; /*0x51ab1e*/
      if ( v5 == v8 ) /*0x51ab22*/
        return (char)v5; /*0x51ab22*/
    }
  }
  v11 = *(IUnknown **)(this + 680); /*0x51ab34*/
  if ( v11 ) /*0x51ab3c*/
  {
    *(_DWORD *)&v11->__pad_220[136] = 0; /*0x51ab3e*/
    *(_DWORD *)(this + 680) = 0; /*0x51ab44*/
  }
  if ( !*(_DWORD *)(this + 1652) ) /*0x51ab4a*/
    WinAPI::Wrapper(-2147467261); /*0x51ab57*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) ) /*0x51ab65*/
  {
    if ( v6 ) /*0x51ab71*/
    {
      v43 = *(_DWORD *)(*(_DWORD *)(this + 1728) + 1660); /*0x51ab8e*/
      v12 = (IUnknown *)(*(int (__thiscall **)(int, char *))(this->q048)(this, v49); /*0x51ab92*/
      v13 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v12); /*0x51ab9b*/
      if ( Cell::IsBuildable((int)v13, v43, 1, 0, (IUnknown *)0xFFFFFFFF, 0, (IUnknown *)0xFFFFFFFF, (IUnknown *)1) /*0x51abca*/
        && (*(_BYTE *)(*(_DWORD *)(this + 1728) + 3476)
         || *(_DWORD *)(this + 172) != 1
         || *(ObjectClass **)(this + 1444) != v6) )
      {
        (*(void (__thiscall **)(int))(this->queueUpToEnter)(this); /*0x51abd1*/
      }
    }
  }
  if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) ) /*0x51abdd*/
  {
    if ( v6 ) /*0x51abe8*/
    {
      if ( *(ObjectClass **)(this + 1444) == v6 ) /*0x51abf0*/
      {
        if ( *(_BYTE *)(this + 1755) ) /*0x51abf2*/
        {
          v14 = *(InfantryTypeClass **)(this + 1728); /*0x51abfc*/
          if ( !v14->?[2891] && !v14->?[2872] ) /*0x51ac0c*/
            (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(this->FootClass_field_558)(this, 7, 0, 0); /*0x51ac1f*/
        }
      }
    }
  }
  if ( (*(int (__thiscall **)(int))(this->q610)(this) != 7 && *(_DWORD *)(this + 180) != 7 /*0x51ac44*/
    || Team::AllMembersValid((int *)this) )
  {
    *(_DWORD *)(this + 1504) = -1; /*0x51ad11*/
    goto LABEL_48; /*0x51ad11*/
  }
  v15 = (TechnoClass *)AbstractClass::IsTechnoType(v6); /*0x51ac53*/
  v16 = v15; /*0x51ac58*/
  if ( !v15 ) /*0x51ac5c*/
  {
LABEL_48:
    if ( v6 && *(_BYTE *)(*(_DWORD *)(this + 1728) + 3476) ) /*0x51ad25*/
    {
      if ( !*(_DWORD *)(this + 1652) ) /*0x51ad33*/
        WinAPI::Wrapper(-2147467261); /*0x51ad42*/
      if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) ) /*0x51ad50*/
      {
        v19 = *(IUnknown **)(this + 1652); /*0x51ad5b*/
        ppv = 0; /*0x51ad69*/
        if ( !v19 ) /*0x51ad71*/
          goto LABEL_58; /*0x51ad71*/
        v20 = StreamClass::Set2(&ppv, (_DWORD *)(this + 1652)); /*0x51ad78*/
        if ( v20 < 0 && v20 != -2147467262 ) /*0x51ad86*/
          WinAPI::Wrapper(v20); /*0x51ad89*/
        if ( !ppv ) /*0x51ad94*/
LABEL_58:
          WinAPI::Wrapper(-2147467261); /*0x51ad9b*/
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 12))(ppv, v49); /*0x51adac*/
        if ( !memcmp(v49, &g_CLSID_WalkLocomotion, 0x10u) ) /*0x51adbf*/
        {
          v21 = *(_DWORD *)(this + 1460); /*0x51adc7*/
          if ( *(_DWORD *)(this + 1468) < v21 /*0x51adf8*/
            || (*(_BYTE *)(this + 1465) || !v21)
            && (v22 = *(_DWORD *)(this + 1472), v22 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 1452) + 8))(
                 this + 1452,
                 v21 + v22,
                 0) )
          {
            v23 = *(_DWORD *)(this + 1468); /*0x51adff*/
            if ( v23 ) /*0x51ae04*/
              memcpy((void *)(*(_DWORD *)(this + 1456) + 4), *(AbstractClass **)(this + 1456), 4 * v23); /*0x51ae12*/
            **(_DWORD **)(this + 1456) = v6; /*0x51ae1d*/
            ++*(_DWORD *)(this + 1468); /*0x51ae23*/
          }
          v24 = (ObjectClass *)(*(int (__thiscall **)(int))(this->q1C4)(this); /*0x51ae2b*/
          v6 = v24; /*0x51ae31*/
          aP1 = (IUnknown *)v24; /*0x51ae35*/
          if ( v24 && (v24[1].lastLayer & 0x100) != 0 ) /*0x51ae44*/
          {
            v6 = 0; /*0x51ae46*/
            aP1 = 0; /*0x51ae48*/
          }
        }
        if ( ppv ) /*0x51ae52*/
          (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x51ae57*/
      }
    }
    goto LABEL_73; /*0x51ae57*/
  }
  if ( !Team::AllMembersValid((int *)v15->__pad_0) ) /*0x51ac6b*/
  {
    if ( (*(int (__thiscall **)(int, int, TechnoClass *))(this->auxParticles2)(this, 2, v16) == 1 ) /*0x51ace5*/
    {
      v5 = (void *)(*(int (__thiscall **)(int, int))(this->auxParticles1)(this, 14); /*0x51acee*/
      if ( v5 == (void *)14 ) /*0x51acf7*/
        return (char)v5; /*0x51acf7*/
      if ( v5 != (void *)1 ) /*0x51ad00*/
        (*(void (__thiscall **)(int, int))(this->auxParticles1)(this, 3); /*0x51ad09*/
    }
    goto LABEL_48; /*0x51ad0f*/
  }
  if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v16->__pad_0 + 44))(v16) != 1 )
  {
    if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v16->__pad_0 + 44))(v16) == 6 )
    {
      if ( !v6 ) /*0x51ac99*/
      {
        v17 = 0; /*0x51ac9b*/
        goto LABEL_41; /*0x51ac9d*/
      }
      v18 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v6->__pad_0 + 44))(v6) - 6; /*0x51aca6*/
LABEL_40:
      v17 = v18 == 0 ? v6 : 0;
      goto LABEL_41; /*0x51acaf*/
    }
    TechnoClass::SetFocus((_DWORD *)this, (IUnknown *)v6); /*0x51accd*/
    goto LABEL_48; /*0x51acd2*/
  }
  if ( v6 ) /*0x51ac7b*/
  {
    v18 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v6->__pad_0 + 44))(v6) - 1; /*0x51ac88*/
    goto LABEL_40; /*0x51ac89*/
  }
  v17 = 0; /*0x51ac7d*/
LABEL_41:
  *(_DWORD *)(this + 1280) = v17; /*0x51acb1*/
  TechnoClass::SetFocus((_DWORD *)this, 0); /*0x51acba*/
  v6 = 0; /*0x51acbf*/
  aP1 = 0; /*0x51acc1*/
LABEL_73:
  if ( *(_BYTE *)(*(_DWORD *)(this + 1728) + 3476) && v6 ) /*0x51ae72*/
  {
    if ( !*(_DWORD *)(this + 1652) ) /*0x51ae78*/
      WinAPI::Wrapper(-2147467261); /*0x51ae8d*/
    if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) ) /*0x51ae97*/
    {
      v25 = (_DWORD *)(*(int (__thiscall **)(ObjectClass *, char *))(*(_DWORD *)v6->__pad_0 + 72))(v6, v49); /*0x51aeab*/
      LOWORD(v46.vfptr) = *v25 / 256; /*0x51aebf*/
      v26 = *(AbstractClass **)this; /*0x51aed0*/
      HIWORD(v46.vfptr) = v25[1] / 256; /*0x51aed6*/
      ppv = v46.vfptr; /*0x51aee3*/
      v27 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, _DWORD))&v26[2].__pad_0[4])(this, v48, 0); /*0x51aeea*/
      LOWORD(v46.vfptr) = *v27 / 256; /*0x51aefd*/
      HIWORD(v46.vfptr) = v27[1] / 256; /*0x51af15*/
      v47.vfptr = v46.vfptr; /*0x51af22*/
      CanDeployAtCell = InfantryClass::CanDeployAtCell((#375 **)this, (__int16 *)&v47, (__int16 *)&ppv); /*0x51af35*/
      if ( *(_BYTE *)(*(_DWORD *)(this + 1728) + 3476) ) /*0x51af39*/
      {
        InfantryClass::updateOccupiedBuilding(&ppv, (IUnknown *)(this + 1652)); /*0x51af4c*/
        if ( !ppv ) /*0x51af57*/
          WinAPI::Wrapper(-2147467261); /*0x51af5e*/
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 12))(ppv, v49); /*0x51af6f*/
        v29 = memcmp(v49, g_CLSID_JumpjetLocomotion.Data2, 16); /*0x51af80*/
        ComPtr::Release_Alt((int *)&ppv); /*0x51af8f*/
        v30 = v29 == 0; /*0x51af94*/
        v6 = (ObjectClass *)aP1; /*0x51af96*/
        v28 = v30; /*0x51af9a*/
      }
      else
      {
        v28 = 0; /*0x51af43*/
      }
      if ( *(_BYTE *)(*(_DWORD *)(this + 1728) + 912) ) /*0x51afa5*/
        CanDeployAtCell = 1; /*0x51afaf*/
      if ( v28 ) /*0x51afba*/
      {
        if ( !CanDeployAtCell ) /*0x51afc2*/
        {
          v31 = *(IUnknown **)(this + 1652); /*0x51afc8*/
          v32 = (IUnknown *)(this + 1652); /*0x51afce*/
          aP1 = 0; /*0x51afd6*/
          if ( v31 ) /*0x51afda*/
          {
            v33 = StreamClass::Set(&aP1, (IUnknown *)(this + 1652)); /*0x51afe1*/
            if ( v33 < 0 && v33 != -2147467262 ) /*0x51afef*/
              WinAPI::Wrapper(v33); /*0x51aff2*/
            if ( aP1 && (*(unsigned __int8 (__stdcall **)(IUnknown *))(aP1->field_0 + 28))(aP1) ) /*0x51b002*/
            {
              if ( !aP1 ) /*0x51b00f*/
                WinAPI::Wrapper(-2147467261); /*0x51b016*/
              if ( (*(unsigned __int8 (__stdcall **)(IUnknown *))(aP1->field_0 + 20))(aP1) ) /*0x51b022*/
              {
                if ( v32->field_0 ) /*0x51b029*/
                  (*(void (__stdcall **)(int))(*(_DWORD *)v32->field_0 + 8))(v32->field_0); /*0x51b032*/
                v34 = aP1; /*0x51b035*/
                v32->field_0 = 0; /*0x51b039*/
                if ( !v34 ) /*0x51b03d*/
                  WinAPI::Wrapper(-2147467261); /*0x51b044*/
                (*(void (__stdcall **)(IUnknown *, int))(v34->field_0 + 16))(v34, this + 1652); /*0x51b051*/
              }
            }
          }
          ppv = 0; /*0x51b060*/
          v35 = CreateInstanceCOM(&ppv, (IID *)&g_CLSID_WalkLocomotion, 0, 7u); /*0x51b064*/
          if ( v35 < 0 && v35 != -2147467262 ) /*0x51b072*/
            WinAPI::Wrapper(v35); /*0x51b075*/
          if ( !ppv ) /*0x51b080*/
            WinAPI::Wrapper(-2147467261); /*0x51b087*/
          (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)ppv + 12))(ppv, this); /*0x51b094*/
          v46.vfptr = 0; /*0x51b09b*/
          if ( ppv ) /*0x51b0a1*/
          {
            v36 = StreamClass::Set(&v46, (IUnknown *)&ppv); /*0x51b0ac*/
            if ( v36 < 0 && v36 != -2147467262 ) /*0x51b0ba*/
              WinAPI::Wrapper(v36); /*0x51b0bd*/
          }
          COMObject::SwapReference((int *)&aP1, (int)v46.vfptr); /*0x51b0cb*/
          if ( v46.vfptr ) /*0x51b0d6*/
            (*(void (__stdcall **)(void *))(*(_DWORD *)v46.vfptr + 8))(v46.vfptr); /*0x51b0db*/
          v37 = aP1; /*0x51b0de*/
          if ( aP1 ) /*0x51b0e4*/
          {
            (*(void (__stdcall **)(IUnknown *, int))(aP1->field_0 + 12))(aP1, v32->field_0); /*0x51b0ec*/
            InfantryClass::checkBridgeClearance((int *)(this + 1652), (int)ppv); /*0x51b0f6*/
            v37 = aP1; /*0x51b0fb*/
          }
          if ( ppv ) /*0x51b105*/
          {
            (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x51b10a*/
            v37 = aP1; /*0x51b10d*/
          }
          if ( v37 ) /*0x51b113*/
            (*(void (__stdcall **)(IUnknown *))(v37->field_0 + 8))(v37); /*0x51b11c*/
        }
      }
      else if ( CanDeployAtCell ) /*0x51b126*/
      {
        v38 = *(IUnknown **)(this + 1652); /*0x51b12c*/
        v39 = (IUnknown *)(this + 1652); /*0x51b132*/
        aP1 = 0; /*0x51b13a*/
        if ( v38 ) /*0x51b13e*/
        {
          v40 = StreamClass::Set(&aP1, (IUnknown *)(this + 1652)); /*0x51b149*/
          if ( v40 < 0 && v40 != -2147467262 ) /*0x51b157*/
            WinAPI::Wrapper(v40); /*0x51b15a*/
          if ( aP1 ) /*0x51b165*/
          {
            if ( (*(unsigned __int8 (__stdcall **)(IUnknown *))(aP1->field_0 + 28))(aP1) ) /*0x51b16a*/
            {
              if ( !aP1 ) /*0x51b177*/
                WinAPI::Wrapper(-2147467261); /*0x51b17e*/
              if ( (*(unsigned __int8 (__stdcall **)(IUnknown *))(aP1->field_0 + 20))(aP1) ) /*0x51b18a*/
              {
                if ( v39->field_0 ) /*0x51b191*/
                  (*(void (__stdcall **)(int))(*(_DWORD *)v39->field_0 + 8))(v39->field_0); /*0x51b19a*/
                v41 = aP1; /*0x51b19d*/
                v39->field_0 = 0; /*0x51b1a1*/
                if ( !v41 ) /*0x51b1a5*/
                  WinAPI::Wrapper(-2147467261); /*0x51b1ac*/
                (*(void (__stdcall **)(IUnknown *, int))(v41->field_0 + 16))(v41, this + 1652); /*0x51b1b9*/
              }
            }
            if ( aP1 ) /*0x51b1c2*/
              (*(void (__stdcall **)(IUnknown *))(aP1->field_0 + 8))(aP1); /*0x51b1c7*/
          }
        }
      }
    }
  }
  LOBYTE(v5) = FootClass::AssignDestination(this, (int)v6, aP2); /*0x51b1d2*/
  return (char)v5; /*0x51b1d7*/
}


// ==== 0x0051B1F0  InfantryClass::AssignTarget_SyncLog  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::AssignTarget_SyncLog(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( a2 != *(_DWORD *)(this + 692) ) /*0x51b201*/
  {
    if ( *(int *)(this + 108) > 0 ) /*0x51b206*/
    {
      v3 = *(_DWORD *)(this + 1732); /*0x51b208*/
      *(_BYTE *)(this + 1677) = 0; /*0x51b20e*/
      if ( v3 == 27 || v3 == 28 || v3 == 29 || v3 == 30 ) /*0x51b226*/
      {
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(this->FootClass_field_558)(this, 28, 0, 0); /*0x51b22e*/
      }
      else if ( *(_BYTE *)(this + 1755) ) /*0x51b230*/
      {
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(this->FootClass_field_558)(this, 2, 0, 0); /*0x51b240*/
      }
      else
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(this->FootClass_field_558)(this, 0, 0, 0); /*0x51b24f*/
      }
    }
    if ( a2 != *(_DWORD *)(this + 692) ) /*0x51b25b*/
    {
      v4 = *(_DWORD *)(this + 680); /*0x51b25d*/
      if ( v4 ) /*0x51b265*/
      {
        *(_DWORD *)(v4 + 680) = 0; /*0x51b267*/
        *(_DWORD *)(this + 680) = 0; /*0x51b26d*/
      }
    }
  }
  v5 = *(_DWORD *)(this + 1732); /*0x51b273*/
  if ( v5 != 27 && v5 != 28 && v5 != 29 && v5 != 30 || *(_BYTE *)(*(_DWORD *)(this + 1728) + 1708) ) /*0x51b293*/
  {
    *(_DWORD *)(this + 1504) = -1; /*0x51b2a2*/
    LOBYTE(v5) = TechnoClass::AssignTarget_SyncLog((_DWORD *)this, a2); /*0x51b2ac*/
    if ( !*(_DWORD *)(this + 1444) && *(_BYTE *)(*(_DWORD *)(this + 1728) + 3774) ) /*0x51b2c3*/
    {
      if ( a2 && (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 ) /*0x51b2d9*/
        v5 = a2; /*0x51b2db*/
      else
        v5 = 0; /*0x51b2df*/
      if ( *(_BYTE *)(*(_DWORD *)(this + 1728) + 3780) ) /*0x51b2e7*/
      {
        if ( v5 && *(_BYTE *)(*(_DWORD *)(v5 + 1312) + 5494) ) /*0x51b32a*/
          LOBYTE(v5) = (*(int (__thiscall **)(int, int, int))(this->turretChargeTimer)(this, a2, 1); /*0x51b339*/
      }
      else if ( v5 && *(_BYTE *)(*(_DWORD *)(v5 + 1312) + 5490) ) /*0x51b2fb*/
      {
        LOBYTE(v5) = (*(int (__thiscall **)(int, int, int))(this->turretChargeTimer)(this, a2, 1); /*0x51b30a*/
        *(_BYTE *)(this + 1678) = 0; /*0x51b310*/
        return v5; /*0x51b319*/
      }
    }
    *(_BYTE *)(this + 1678) = 0; /*0x51b33f*/
  }
  return v5; /*0x51b316*/
}


// ==== 0x0051B350  InfantryClass::CalcMoveTarget  this=InfantryClass  sig=csp ====
void __thiscall InfantryClass::CalcMoveTarget(int *this)
{
  _DWORD *v2; // eax
  IUnknown *v3; // edi
  int *v4; // eax
  _DWORD *v5; // ebp
  BuildingTypeClass *v6; // eax
  IUnknown **Height; // eax
  int v8; // edx
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int GroundHeight; // ebx
  int v13; // ebx
  int v14; // edx
  char v15; // al
  int v16; // ecx
  IUnknown *v17; // eax
  _DWORD *v18; // eax
  int *Coords; // ebp
  _DWORD *v20; // eax
  ObjectClass *v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int v25; // edx
  BuildingTypeClass *v26; // eax
  int v27; // eax
  IUnknown *v28; // edi
  double v29; // st7
  double v30; // st7
  IUnknown *v31; // eax
  double v32; // st7
  __int64 v33; // rax
  int v34; // ebp
  IUnknown *v35; // edi
  double v36; // st7
  double v37; // st7
  IUnknown *v38; // eax
  bool v39; // zf
  signed int v40; // ebp
  double v41; // st7
  int v42; // eax
  int v43; // edx
  int *v44; // edi
  _DWORD *v45; // ebp
  int v46; // ebx
  int v47; // ecx
  int v48; // eax
  CCINIClass *v49; // eax
  int i; // ebx
  _DWORD *v51; // edi
  int v52; // edx
  int *v53; // eax
  IUnknown *v54; // eax
  int v55; // edx
  int v56; // eax
  int v57; // eax
  CCINIClass *v58; // edx
  int v59; // eax
  int v60; // edx
  int v61; // eax
  double v62; // [esp-10h] [ebp-A0h]
  int v63; // [esp+18h] [ebp-78h]
  double v64; // [esp+18h] [ebp-78h]
  int aP2; // [esp+20h] [ebp-70h]
  double aP2a; // [esp+20h] [ebp-70h]
  double aP2b; // [esp+20h] [ebp-70h]
  int v68; // [esp+2Ch] [ebp-64h]
  int v69; // [esp+2Ch] [ebp-64h]
  int v70; // [esp+2Ch] [ebp-64h]
  int v71; // [esp+30h] [ebp-60h]
  double v72; // [esp+30h] [ebp-60h]
  IUnknown *v73[2]; // [esp+38h] [ebp-58h] BYREF
  double v74; // [esp+40h] [ebp-50h] BYREF
  IUnknown *v75; // [esp+48h] [ebp-48h]
  IUnknown *v76; // [esp+54h] [ebp-3Ch] BYREF
  IUnknown *v77; // [esp+58h] [ebp-38h]
  int v78; // [esp+5Ch] [ebp-34h] BYREF
  IUnknown *v79; // [esp+60h] [ebp-30h] BYREF
  IUnknown *v80; // [esp+64h] [ebp-2Ch]
  int v81; // [esp+68h] [ebp-28h] BYREF
  int a2; // [esp+6Ch] [ebp-24h] BYREF
  CCINIClass *v83; // [esp+70h] [ebp-20h]
  CCINIClass *v84; // [esp+74h] [ebp-1Ch]
  int a1; // [esp+78h] [ebp-18h] BYREF
  void *Block; // [esp+7Ch] [ebp-14h]
  int v87; // [esp+80h] [ebp-10h]
  char v88; // [esp+85h] [ebp-Bh]
  CCINIClass *v89; // [esp+88h] [ebp-8h]
  int v90; // [esp+8Ch] [ebp-4h]

  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62224] + 4 * *((char *)this + 1668)) /*0x51b383*/
                 + 4 * *((char *)this + 1669)
                 + 48) != -1 )
  {
    v2 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 72))(this); /*0x51b392*/
    v3 = (IUnknown *)(this + 346); /*0x51b395*/
    v4 = Vector3::Subtract(v2, (IUnknown *)&v78, (IUnknown *)(this + 346)); /*0x51b3a3*/
    Coord::Length(v4); /*0x51b3aa*/
    v5 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62224] + 4 * *((char *)this + 1668)); /*0x51b3c2*/
    v6 = (BuildingTypeClass *)(*(int (__thiscall **)(int *, int *, int *))(*this + 72))(this, &v81, this + 346); /*0x51b3cc*/
    Height = (IUnknown **)Cell::GetHeight(&v73[1], v6, &a2); /*0x51b3d4*/
    v8 = this->animation; /*0x51b3d9*/
    v73[1] = *Height; /*0x51b3e1*/
    v63 = *(_DWORD *)(v8 + 1656); /*0x51b3eb*/
    v68 = v5[10]; /*0x51b3f2*/
    v9 = SHIWORD(v68) << 8; /*0x51b401*/
    v10 = (__int16)v68 << 8; /*0x51b404*/
    v69 = v5[9]; /*0x51b407*/
    v77 = (IUnknown *)(v9 + 128); /*0x51b41a*/
    v76 = (IUnknown *)(v10 + 128); /*0x51b423*/
    v78 = 0; /*0x51b42c*/
    v81 = 0; /*0x51b435*/
    v79 = (IUnknown *)(((__int16)v69 << 8) + 128); /*0x51b440*/
    v11 = v5[112]; /*0x51b444*/
    v80 = (IUnknown *)((SHIWORD(v69) << 8) + 128); /*0x51b456*/
    v70 = v11; /*0x51b45a*/
    GroundHeight = Cell::GetGroundHeight(&v79); /*0x51b46d*/
    v13 = (Cell::GetGroundHeight(&v76) - GroundHeight) / v70; /*0x51b47f*/
    if ( aP2 > v63 ) /*0x51b48b*/
    {
      v34 = v5[*((char *)this + 1669) + 12]; /*0x51b6a8*/
      a2 = this->q027; /*0x51b6ae*/
      v83 = (CCINIClass *)this->owningHouseIndex; /*0x51b6b5*/
      v35 = (IUnknown *)this->q029; /*0x51b6b9*/
      v73[1] = (IUnknown *)(SLOWORD(v73[1]) - 0x3FFF); /*0x51b6c6*/
      v72 = (double)(int)v73[1] * -0.00009587672516830327; /*0x51b6d4*/
      aP2b = (double)v63; /*0x51b6e6*/
      v74 = (double)(int)v83; /*0x51b6ee*/
      v36 = Math::SinCos(v72); /*0x51b6f2*/
      v73[1] = (IUnknown *)Math::RoundToInt(v74 - v36 * aP2b); /*0x51b70a*/
      v37 = Math::ArcTan2(v72); /*0x51b70e*/
      v38 = (IUnknown *)Math::RoundToInt(v37 * aP2b + (double)a2); /*0x51b71e*/
      Coord::Subtract(&v79, v38, v73[1], v35); /*0x51b72e*/
      v40 = v34 & 0x80000001; /*0x51b73f*/
      v39 = v40 == 0; /*0x51b73f*/
      v76 = v79; /*0x51b745*/
      v77 = v80; /*0x51b749*/
      v78 = v81; /*0x51b74d*/
      if ( v40 < 0 ) /*0x51b751*/
        v39 = (((_BYTE)v40 - 1) | 0xFFFFFFFE) == -1; /*0x51b757*/
      if ( v39 ) /*0x51b758*/
        v41 = 256.0; /*0x51b762*/
      else
        v41 = 362.0386719675124; /*0x51b75a*/
      v42 = Math::RoundToInt(v41); /*0x51b776*/
      v43 = *this; /*0x51b77b*/
      v78 = v42; /*0x51b77d*/
      (*(void (__thiscall **)(int *, IUnknown **))(v43 + 436))(this, &v76); /*0x51b78a*/
      return; /*0x51b797*/
    }
    v14 = *this; /*0x51b497*/
    v15 = this->unknownBool685 + 1; /*0x51b499*/
    this->unknownBool685 = v15; /*0x51b49f*/
    v71 = v5[v15 + 12]; /*0x51b4ae*/
    (*(void (__thiscall **)(int *, int *))(v14 + 436))(this, this + 346); /*0x51b4b7*/
    if ( v71 != -1 ) /*0x51b4c3*/
    {
      v16 = v5[*((char *)this + 1669) + 12]; /*0x51b4d3*/
      v17 = Coord::Subtract( /*0x51b4ff*/
              &a2,
              (IUnknown *)(v3->field_0 + *(_DWORD *)&MEMORY[0x89F690].__pad_48[8 * (v16 & 7)]),
              (IUnknown *)(this->FootClass_field_56C + *(_DWORD *)&MEMORY[0x89F690].__pad_48[8 * (v16 & 7) + 4]),
              (IUnknown *)this->FootClass_field_570);
      v76 = (IUnknown *)v17->field_0; /*0x51b506*/
      v77 = (IUnknown *)v17->field_4; /*0x51b512*/
      v78 = v17->field_8; /*0x51b51f*/
      v18 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)(this + 346)); /*0x51b523*/
      Coords = CellClass::GetCoords(v18, (int *)&v74); /*0x51b52f*/
      v20 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v76); /*0x51b540*/
      v21 = (ObjectClass *)CellClass::GetCoords(v20, &a1); /*0x51b547*/
      v22 = *(_DWORD *)v21->__pad_0 - *Coords + v3->field_0; /*0x51b55f*/
      v23 = *(_DWORD *)&v21->__pad_0[4] - Coords[1] + this->FootClass_field_56C; /*0x51b564*/
      v24 = this->FootClass_field_570; /*0x51b566*/
      v3->field_0 = v22; /*0x51b569*/
      v25 = *this; /*0x51b56c*/
      this->FootClass_field_56C = v23; /*0x51b56f*/
      this->FootClass_field_570 = v24; /*0x51b574*/
      this->FootClass_field_570 += v13; /*0x51b584*/
      v26 = (BuildingTypeClass *)(*(int (__thiscall **)(int *, int *))(v25 + 72))(this, &a1); /*0x51b58a*/
      v27 = *(_DWORD *)Cell::GetHeight(&v73[1], v26, this + 346); /*0x51b597*/
      a2 = this->q027; /*0x51b5a5*/
      v28 = (IUnknown *)this->q029; /*0x51b5af*/
      v83 = (CCINIClass *)this->owningHouseIndex; /*0x51b5c1*/
      v73[1] = (IUnknown *)(v63 - aP2); /*0x51b5c9*/
      aP2a = (double)((__int16)v27 - 0x3FFF) * -0.00009587672516830327; /*0x51b5d7*/
      v64 = (double)(int)v73[1]; /*0x51b5e9*/
      v74 = (double)(int)v83; /*0x51b5f1*/
      v29 = Math::SinCos(aP2a); /*0x51b5f5*/
      v62 = aP2a; /*0x51b608*/
      LODWORD(aP2a) = Math::RoundToInt(v74 - v29 * v64); /*0x51b609*/
      v30 = Math::ArcTan2(v62); /*0x51b60d*/
      v31 = (IUnknown *)Math::RoundToInt(v30 * v64 + (double)a2); /*0x51b61d*/
      Coord::Subtract(&v76, v31, (IUnknown *)LODWORD(aP2a), v28); /*0x51b62d*/
      v79 = v76; /*0x51b63e*/
      v80 = v77; /*0x51b646*/
      v81 = v78; /*0x51b650*/
      if ( v71 % 2 ) /*0x51b65a*/
        v32 = 362.0386719675124; /*0x51b65d*/
      else
        v32 = 256.0; /*0x51b665*/
      v33 = Math::RoundToInt(v32); /*0x51b679*/
      v81 = v33; /*0x51b682*/
      (*(void (__fastcall **)(int *, _DWORD, IUnknown **))(*this + 436))(this, HIDWORD(v33), &v79); /*0x51b68d*/
      return; /*0x51b69a*/
    }
  }
  v44 = this + 39; /*0x51b798*/
  a2 = this->q027; /*0x51b7a2*/
  v83 = (CCINIClass *)this->owningHouseIndex; /*0x51b7ae*/
  v84 = (CCINIClass *)this->q029; /*0x51b7b5*/
  v45 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&a2); /*0x51b7c7*/
  v46 = v45[57]; /*0x51b7cf*/
  if ( (*(int (__thiscall **)(int *, _DWORD *, int, _DWORD, _DWORD, int))(*this + 428))(this, v45, -1, 0, 0, 1) ) /*0x51b7d8*/
  {
    ObjectVector::Construct(&a1, 0, 0); /*0x51b7ee*/
    v47 = 10; /*0x51b7f3*/
    a1 = (int)&vt_DynamicVectorClass_ObjectClass; /*0x51b7fa*/
    v90 = 10; /*0x51b802*/
    v89 = 0; /*0x51b809*/
    if ( v46 ) /*0x51b810*/
    {
      v48 = v87; /*0x51b812*/
      while ( 1 ) /*0x51b822*/
      {
        if ( (int)v89 < v48 ) /*0x51b829*/
          goto LABEL_23; /*0x51b829*/
        if ( (v88 || !v48) && v47 > 0 ) /*0x51b83c*/
          break; /*0x51b83c*/
LABEL_25:
        v46 = *(_DWORD *)(v46 + 48); /*0x51b873*/
        if ( !v46 ) /*0x51b878*/
          goto LABEL_26; /*0x51b878*/
        v47 = v90; /*0x51b81b*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(a1 + 8))(&a1, v47 + v48, 0) ) /*0x51b84d*/
      {
LABEL_23:
        v49 = v89; /*0x51b854*/
        v89 = (CCINIClass *)((char *)v89 + 1); /*0x51b85e*/
        *((_DWORD *)Block + (_DWORD)v49) = v46; /*0x51b869*/
      }
      v48 = v87; /*0x51b86c*/
      goto LABEL_25; /*0x51b86c*/
    }
LABEL_26:
    for ( i = 0; i < (int)v89; ++i ) /*0x51b885*/
    {
      v51 = (_DWORD *)*((_DWORD *)Block + i); /*0x51b88b*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v51 + 44))(v51) == 1 /*0x51b8a4*/
        || (*(int (__thiscall **)(_DWORD *))(*v51 + 44))(v51) == 15 )
      {
        if ( !v51[413] ) /*0x51b8a6*/
          WinAPI::Wrapper(-2147467261); /*0x51b8b3*/
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v51[413] + 16))(v51[413]) ) /*0x51b8c1*/
        {
          v52 = *v51; /*0x51b8c8*/
          a2 = 0; /*0x51b8d5*/
          v83 = 0; /*0x51b8d9*/
          v84 = 0; /*0x51b8dd*/
          (*(void (__thiscall **)(_DWORD *, int *, int, int))(v52 + 372))(v51, &a2, 1, 1); /*0x51b8e4*/
        }
      }
    }
    (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 1348))(this, 0, 0); /*0x51b8fc*/
    a1 = (int)&vt_VectorClass_ObjectClass; /*0x51b906*/
    if ( Block && v88 ) /*0x51b91f*/
      __3_YAXPAX_Z(Block); /*0x51b926*/
  }
  else
  {
    a2 = *v44; /*0x51b940*/
    v83 = (CCINIClass *)this->owningHouseIndex; /*0x51b94c*/
    v84 = (CCINIClass *)this->q029; /*0x51b960*/
    v53 = ObjectPlacement::CalcPosition(v45, &a1, (IUnknown *)&a2, 0, 0, 0); /*0x51b967*/
    v74 = *(double *)v53; /*0x51b96e*/
    v75 = (IUnknown *)v53[2]; /*0x51b986*/
    v54 = (IUnknown *)Cell::GetGroundHeight(&v74); /*0x51b98a*/
    v55 = *this; /*0x51b98f*/
    v75 = v54; /*0x51b991*/
    (*(void (__thiscall **)(int *, double *))(v55 + 436))(this, &v74); /*0x51b99c*/
    v56 = this->Locomotor; /*0x51b9a2*/
    v83 = *(CCINIClass **)&MEMORY[0xA8D63C].__pad_14B0[1816]; /*0x51b9bc*/
    v84 = *(CCINIClass **)&MEMORY[0xA8D63C].__pad_14B0[1820]; /*0x51b9c0*/
    if ( !v56 ) /*0x51b9c4*/
      WinAPI::Wrapper(-2147467261); /*0x51b9cb*/
    (*(void (__stdcall **)(_DWORD, _DWORD, CCINIClass *, CCINIClass *))(*(_DWORD *)this->Locomotor + 120))( /*0x51b9f4*/
      this->Locomotor,
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1812],
      v83,
      v84);
    if ( !this->Locomotor ) /*0x51b9f7*/
      WinAPI::Wrapper(-2147467261); /*0x51ba08*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 172))(this->Locomotor); /*0x51ba16*/
    (*(void (__thiscall **)(int *, int))(*this + 292))(this, 1); /*0x51ba22*/
    v57 = *v44; /*0x51ba2b*/
    v58 = (CCINIClass *)this->q029; /*0x51ba2d*/
    v83 = (CCINIClass *)this->owningHouseIndex; /*0x51ba30*/
    a2 = v57; /*0x51ba38*/
    v59 = *this; /*0x51ba3c*/
    v84 = v58; /*0x51ba41*/
    (*(void (__thiscall **)(int *, int *))(v59 + 240))(this, &a2); /*0x51ba45*/
    if ( (_DWORD *)this->q169 == v45 ) /*0x51ba51*/
    {
      v60 = *this; /*0x51ba53*/
      a2 = 0; /*0x51ba60*/
      v83 = 0; /*0x51ba64*/
      v84 = 0; /*0x51ba68*/
      (*(void (__thiscall **)(int *, int *, int, int))(v60 + 372))(this, &a2, 1, 1); /*0x51ba6f*/
    }
    else
    {
      (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1348))(this, 0, 1072693248); /*0x51ba81*/
    }
    v61 = *this; /*0x51ba87*/
    this->FootClass_field_684 = -1; /*0x51ba8d*/
    this->q68B = 1; /*0x51ba94*/
    (*(void (__thiscall **)(int *, int))(v61 + 396))(this, 2); /*0x51ba9b*/
  }
}


// ==== 0x0051BAB0  InfantryClass::Update  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::Update(int this)
{
  int v2; // eax
  void **v3; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // edi
  _BYTE *v11; // eax
  int v12; // eax
  _DWORD *v13; // eax
  void *v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v20; // [esp+28h] [ebp-Ch] BYREF
  int v21; // [esp+2Ch] [ebp-8h]
  int v22; // [esp+30h] [ebp-4h]

  if ( *(char *)(this + 1668) >= 0 ) /*0x51bac0*/
  {
    InfantryClass::CalcMoveTarget((int *)this); /*0x51bac2*/
    LOBYTE(v2) = (*(char (__thiscall **)(int, _DWORD))(this->turretIsRotating)(this, 0); /*0x51bacd*/
    return v2; /*0x51bad9*/
  }
  if ( ((*(unsigned __int8 (__thiscall **)(int))(this->q1D4)(this) /*0x51bb01*/
     || (*(unsigned __int8 (__thiscall **)(int))(this->q1D8)(this))
    && !(dword_A8ED54[12] % 24) )
  {
    if ( *(_DWORD *)(MEMORY[0x87F7E8][7806] + 836) ) /*0x51bb0d*/
    {
      v3 = (void **)__2_YAPAXI_Z(456); /*0x51bb1c*/
      if ( v3 ) /*0x51bb26*/
      {
        v4 = *(_DWORD *)(this + 160); /*0x51bb40*/
        v20 = *(_DWORD *)(this + 156) + 120; /*0x51bb43*/
        v5 = *(_DWORD *)(this + 164); /*0x51bb4e*/
        v21 = v4 + 120; /*0x51bb57*/
        v22 = v5; /*0x51bb5b*/
        AnimClass::ctor(v3, *(void **)(MEMORY[0x87F7E8][7806] + 836), &v20, 0, 1, (void *)0x600, 0, 0); /*0x51bb69*/
      }
    }
  }
  v6 = *(_DWORD *)(this + 632); /*0x51bb6e*/
  if ( v6 ) /*0x51bb76*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 92))(v6); /*0x51bb7a*/
  if ( !(*(unsigned __int8 (__thiscall **)(int))(this->q1D8)(this) /*0x51bb99*/
    && (!(*(unsigned __int8 (__thiscall **)(int))(this->q1D4)(this) || !*(_BYTE *)(this + 636)) )
  {
    goto LABEL_98; /*0x51bb99*/
  }
  if ( !*(_DWORD *)(this + 1652) ) /*0x51bba3*/
    WinAPI::Wrapper(-2147467261); /*0x51bbb2*/
  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 64))(*(_DWORD *)(this + 1652)); /*0x51bbc0*/
  LOBYTE(v2) = *(_BYTE *)(this + 144); /*0x51bbc3*/
  if ( (_BYTE)v2 ) /*0x51bbcb*/
  {
LABEL_98:
    if ( (*(unsigned __int8 (__thiscall **)(int))(this->q1D4)(this) ) /*0x51bbd5*/
    {
      if ( *(_DWORD *)(this + 692) ) /*0x51bbdf*/
        (*(void (__thiscall **)(int, _DWORD))(this->unknown_short_3C8)(this, 0); /*0x51bbef*/
      v2 = *(_DWORD *)(this + 1444); /*0x51bbf5*/
      if ( v2 ) /*0x51bbfd*/
        LOBYTE(v2) = (*(char (__thiscall **)(int, _DWORD, int))(this->turretChargeTimer)(this, 0, 1); /*0x51bc0b*/
      return v2; /*0x51bc17*/
    }
    if ( (*(unsigned __int8 (__thiscall **)(int))(this->q200)(this) ) /*0x51bc1c*/
    {
      if ( (*(int (__thiscall **)(int))(this->q610)(this) == -1 && *(_DWORD *)(this + 180) == -1 ) /*0x51bc3d*/
        (*(void (__thiscall **)(int, _DWORD, int))(this->q121)(this, 0, 1); /*0x51bc47*/
      (*(void (__thiscall **)(int))(this->disguiseBlinkTimer)(this); /*0x51bc51*/
    }
    if ( *(int *)(this + 108) <= 0 ) /*0x51bc5c*/
    {
      v7 = *(_DWORD *)(this + 1732); /*0x51bc5e*/
      if ( v7 != 11 /*0x51bc94*/
        && v7 != 12
        && v7 != 13
        && v7 != 14
        && v7 != 15
        && v7 != 34
        && v7 != 35
        && v7 != 36
        && v7 != 20
        && v7 != 21 )
      {
        *(_DWORD *)(this + 108) = 1; /*0x51bc96*/
      }
    }
    FootClass::MovementAI(this); /*0x51bc9f*/
    LOBYTE(v2) = *(_BYTE *)(this + 144); /*0x51bca4*/
    if ( (_BYTE)v2 ) /*0x51bcac*/
    {
      if ( *(_BYTE *)(this + 129) /*0x51bcdc*/
        || (*(int (__thiscall **)(int))(this->q610)(this) != 5
        && (*(int (__thiscall **)(int))(this->q610)(this) != 11 )
      {
        goto LABEL_61; /*0x51bcdc*/
      }
      v20 = *(_DWORD *)(this + 156); /*0x51bcee*/
      v21 = *(_DWORD *)(this + 160); /*0x51bcff*/
      v22 = *(_DWORD *)(this + 164); /*0x51bd06*/
      v8 = Coord::To_Cell(MEMORY[0x87F7E8], &v20); /*0x51bd0a*/
      v9 = Cell::IsBridge(v8); /*0x51bd11*/
      v10 = v9; /*0x51bd16*/
      if ( !v9 ) /*0x51bd1a*/
        goto LABEL_61; /*0x51bd1a*/
      v11 = (_BYTE *)v9[328]; /*0x51bd20*/
      if ( !v11[5889] ) /*0x51bd26*/
      {
        if ( v11[5823] ) /*0x51bd30*/
        {
          v12 = v10[390]; /*0x51bd3a*/
          if ( v12 != 12 && v12 != 8 ) /*0x51bd48*/
            goto LABEL_55; /*0x51bd48*/
        }
        else if ( v11[5824] ) /*0x51bd4c*/
        {
          if ( *(_BYTE *)(v10[135] + 506) ) /*0x51bd5c*/
            goto LABEL_55; /*0x51bd64*/
        }
        else if ( !v11[5815] || !BuildingClass::IsPoweredOn(v10) ) /*0x51bd74*/
        {
          goto LABEL_55; /*0x51bd7b*/
        }
      }
      v10 = 0; /*0x51bd7d*/
LABEL_55:
      v13 = *(_DWORD **)(this + 732); /*0x51bd7f*/
      if ( !v13 /*0x51bdaf*/
        || !v13[182]
        || v10 != v13
        || (v14 = (void *)(*(int (__thiscall **)(int))(this->airstrikeTintTimer)(this),
            !BuildingClass::CheckBridge(*(_DWORD **)(*(_DWORD *)(this + 732) + 728), this, v14)) )
      {
        if ( v10 ) /*0x51bdba*/
          (*(void (__thiscall **)(int, int *, int, int))(this->radarFlashTimer)(this, &dword_A8ED54[299], 1, 1); /*0x51bdc9*/
      }
LABEL_61:
      if ( (*(int (__thiscall **)(int))(this->spawnStatus)(this) != 2 ) /*0x51bdd9*/
        (*(void (__thiscall **)(int, int))(this->currentTurretNumber)(this, 2); /*0x51bde1*/
      if ( *(_BYTE *)(this + 1677) && !*(_DWORD *)(this + 268) ) /*0x51bdf1*/
      {
        v15 = *(_DWORD *)(this + 1732); /*0x51bdfb*/
        *(_BYTE *)(this + 1677) = 0; /*0x51be01*/
        if ( v15 == 27 || v15 == 28 || v15 == 29 || v15 == 30 ) /*0x51be1a*/
          (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(this->FootClass_field_558)(this, 28, 0, 0); /*0x51be26*/
        else
          (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(this->FootClass_field_558)(this, 0, 0, 0); /*0x51be38*/
      }
      v16 = *(_DWORD *)(this + 1492); /*0x51be3e*/
      if ( v16 && *(_BYTE *)(this + 981) ) /*0x51be48*/
        *(_BYTE *)(v16 + 130) = 1; /*0x51be52*/
      if ( !*(_DWORD *)(this + 1492) && (*(int (__thiscall **)(int))(this->q610)(this) == 5 ) /*0x51be70*/
      {
        v20 = *(_DWORD *)(this + 156); /*0x51be7e*/
        v21 = *(_DWORD *)(this + 160); /*0x51be8a*/
        v22 = *(_DWORD *)(this + 164); /*0x51be91*/
        if ( !Tactical::IsCellVisible(MEMORY[0x87F7E8], &v20) ) /*0x51be9a*/
        {
          (*(void (__thiscall **)(int))(this->secondaryFacing)(this); /*0x51bea7*/
          LOBYTE(v2) = (*(char (__thiscall **)(int))(this->radioContact)(this); /*0x51beb1*/
          return v2; /*0x51bebd*/
        }
      }
      LOBYTE(v2) = ProcessTechnoSquadResponse((int *)this); /*0x51bec0*/
      if ( (_BYTE)v2 ) /*0x51bec7*/
        return v2; /*0x51bec7*/
      if ( (*(unsigned __int8 (__thiscall **)(int))(this->q200)(this) ) /*0x51bed1*/
      {
        if ( (*(int (__thiscall **)(int))(this->q610)(this) == -1 && *(_DWORD *)(this + 180) == -1 ) /*0x51beef*/
          (*(void (__thiscall **)(int, _DWORD, int))(this->q121)(this, 0, 1); /*0x51bef9*/
        (*(void (__thiscall **)(int))(this->disguiseBlinkTimer)(this); /*0x51bf03*/
      }
      InfantryClass::ProcessIdleDeploy((int *)this); /*0x51bf0b*/
      if ( *(_DWORD *)(this + 1444) || *(_BYTE *)(this + 1755) || !*(_BYTE *)(this + 1754) ) /*0x51bf24*/
        goto LABEL_92; /*0x51bf2c*/
      v17 = *(_DWORD *)(this + 1736); /*0x51bf2e*/
      v18 = *(_DWORD *)(this + 1744); /*0x51bf34*/
      if ( v17 != -1 ) /*0x51bf3c*/
      {
        if ( dword_A8ED54[12] - v17 >= v18 ) /*0x51bf48*/
          goto LABEL_91; /*0x51bf48*/
        v18 -= dword_A8ED54[12] - v17; /*0x51bf4a*/
      }
      if ( v18 ) /*0x51bf4e*/
      {
LABEL_92:
        FireTechnoAtTarget(this); /*0x51bf57*/
        LOBYTE(v2) = *(_BYTE *)(this + 144); /*0x51bf5e*/
        if ( (_BYTE)v2 ) /*0x51bf66*/
        {
          Mission::ExecuteTechnoMissionAction((_DWORD *)this); /*0x51bf6a*/
          LOBYTE(v2) = *(_BYTE *)(this + 144); /*0x51bf6f*/
          if ( (_BYTE)v2 ) /*0x51bf77*/
            LOBYTE(v2) = Mission::ProcessUnitMissionAI((_DWORD *)this); /*0x51bf7b*/
        }
        return v2; /*0x51bf7b*/
      }
LABEL_91:
      *(_BYTE *)(this + 1754) = 0; /*0x51bf50*/
      goto LABEL_92; /*0x51bf50*/
    }
  }
  return v2; /*0x51bad3*/
}


// ==== 0x0051BF90  InfantryClass::EvaluateTarget  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::EvaluateTarget(int this, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v7; // rax
  int v8; // edx
  bool v9; // al
  _DWORD *Type; // eax
  int result; // eax
  int v12; // eax
  __int16 *NeighbourContent; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  bool v17; // al
  int v18; // eax
  int v19; // ebx
  int v20; // esi
  _DWORD *v21; // eax
  int v22; // edi
  _DWORD *v23; // esi
  int v24; // eax
  int v25; // ecx
  _WORD *v26; // edi
  _WORD *v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // ecx
  _DWORD *v30; // eax
  _DWORD *v31; // edi
  _DWORD *v32; // eax
  _DWORD *v33; // ecx
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
  Type = (_DWORD *)InfantryClass::GetType((__int16 *)a2); /*0x51bff2*/
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
  NeighbourContent = (__int16 *)Cell::GetNeighbourContent((_DWORD *)a2, ((_BYTE)a3 - 4) & 7); /*0x51c072*/
  v14 = InfantryClass::GetType(NeighbourContent); /*0x51c07e*/
  if ( v14 ) /*0x51c082*/
  {
    v15 = abs32((((_BYTE)a3 - 4) & 7) - *(_DWORD *)(v14 + 44)); /*0x51c08e*/
    if ( v15 > 2 && v15 < 6 && a3 != -1 ) /*0x51c09d*/
      return 7; /*0x51c0ab*/
  }
  if ( a4 - *(char *)(a2 + 283) > 4 ) /*0x51c0c2*/
    return 0; /*0x51c0cd*/
  result = (*(int (__thiscall **)(int, int, int, int *, bool *, int))(this->animation)( /*0x51c0e6*/
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
    if ( *(_BYTE *)(this + 981) /*0x51c163*/
      && !MEMORY[0xA8E7AC]
      && !Type::CheckAmbiguity(&MEMORY[0x87F7E8], a2, 1)
      && !(*(unsigned __int8 (__thiscall **)(int))(this->isOnCarryall)(this) )
    {
      return 7; /*0x51c179*/
    }
    v18 = *(_DWORD *)(a2 + 68); /*0x51c17c*/
    v19 = 0; /*0x51c17f*/
    if ( v18 != -1 ) /*0x51c184*/
    {
      v20 = *((_DWORD *)MEMORY[0xA83D84] + v18); /*0x51c190*/
      if ( *(_BYTE *)(v20 + 682) && !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) ) /*0x51c1a3*/
        return 7; /*0x51c1b8*/
      if ( *(_BYTE *)(v20 + 680) && *(unsigned __int8 *)(a2 + 286) >> 4 != *(_DWORD *)(v20 + 672) ) /*0x51c1dc*/
      {
        if ( !(*(unsigned __int8 (__thiscall **)(int))(this->unloadTimer)(this) ) /*0x51c1e3*/
          return 7; /*0x51c1e3*/
        v21 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD))(this->q3F8)(this, 0); /*0x51c1f8*/
        if ( !(unsigned __int8)InfantryClass::startPanic(*v21) ) /*0x51c200*/
          return 7; /*0x51c207*/
        v19 = 5 - HouseClass::IsAllied(*(_DWORD **)(this + 540), *(_DWORD *)(a2 + 80)); /*0x51c223*/
      }
    }
    v22 = 0; /*0x51c229*/
    v47 = 0; /*0x51c22d*/
    if ( v40 ) /*0x51c231*/
      v23 = *(_DWORD **)(a2 + 232); /*0x51c237*/
    else
      v23 = *(_DWORD **)(a2 + 228); /*0x51c243*/
    if ( v23 ) /*0x51c24b*/
    {
      while ( 1 ) /*0x51c251*/
      {
        if ( v23 != (_DWORD *)this ) /*0x51c253*/
        {
          v24 = *(_DWORD *)(this + 1692); /*0x51c259*/
          if ( v24 ) /*0x51c261*/
          {
            v25 = *(_DWORD *)(v24 + 40); /*0x51c263*/
            if ( v25 ) /*0x51c268*/
            {
              v26 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v25 + 440))(v25, &a5); /*0x51c27b*/
              v27 = (_WORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v23 + 440))(v23, &v44); /*0x51c282*/
              if ( *v27 == *v26 && v27[1] == v26[1] ) /*0x51c298*/
                return 0; /*0x51c298*/
            }
          }
          v28 = *(_DWORD **)(this + 732); /*0x51c29e*/
          if ( v28 && (v29 = (_DWORD *)v28[182]) != 0 && v23 == v28 && BuildingClass::CheckBridge(v29, this, (void *)a2) ) /*0x51c2bc*/
          {
            v41 = 0; /*0x51c2c5*/
          }
          else
          {
            if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v23 + 468))(v23) /*0x51c36f*/
              && ((*(int (__thiscall **)(int))(this->q610)(this) == 7
               || (*(int (__thiscall **)(int))(this->q610)(this) == 8
               || (*(int (__thiscall **)(int))(this->q610)(this) == 9
               || (*(int (__thiscall **)(int))(this->q610)(this) == 17
               && *(_BYTE *)(*(_DWORD *)(this + 1728) + 3778)
               || ((*(int (__thiscall **)(int))(this->q610)(this) == 11
                || (*(int (__thiscall **)(int))(this->q610)(this) == 25
                || (*(int (__thiscall **)(int))(this->q610)(this) == 5)
               && *(_BYTE *)(*(_DWORD *)(this + 1728) + 3779)) )
            {
              if ( v23 == *(_DWORD **)(this + 1444) /*0x51c3c8*/
                || (v45[0] = v23[39],
                    v45[1] = v23[40],
                    v45[2] = v23[41],
                    Coord::To_Cell(&MEMORY[0x87F7E8], v45) == *(void **)(this + 1444))
                || v23 == *(_DWORD **)(this + 692) )
              {
                if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v23 + 352))(v23) ) /*0x51c71f*/
                  return 7; /*0x51c727*/
                if ( !*(_BYTE *)(this + 1048) /*0x51c76c*/
                  && !v40
                  && MEMORY[0x89EA40][9 * *(_DWORD *)(a2 + 236) + *(_DWORD *)(*(_DWORD *)(this + 1728) + 1660)] == 0.0 )
                {
                  return 7; /*0x51c77a*/
                }
                return 0; /*0x51c788*/
              }
              v30 = Cell::IsBridge((_DWORD *)a2); /*0x51c3d2*/
              v31 = v30; /*0x51c3d7*/
              if ( v30 ) /*0x51c3db*/
              {
                if ( v23 != v30 ) /*0x51c3df*/
                {
                  if ( v30 == *(_DWORD **)(this + 1444) ) /*0x51c3e7*/
                    goto LABEL_134; /*0x51c3e7*/
                  v32 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v30 + 72))(v30, v46); /*0x51c3f6*/
                  if ( Coord::To_Cell(&MEMORY[0x87F7E8], v32) == *(void **)(this + 1444) /*0x51c416*/
                    || v31 == *(_DWORD **)(this + 692) )
                  {
                    goto LABEL_134; /*0x51c416*/
                  }
                }
              }
            }
            if ( (*(int (__thiscall **)(int))(this->q610)(this) == 11 ) /*0x51c42a*/
            {
              v33 = *(_DWORD **)(this + 536); /*0x51c42c*/
              if ( v33 == v23 && (*(int (__thiscall **)(_DWORD *))(*v33 + 44))(v33) == 1 ) /*0x51c43e*/
                return 7; /*0x51c43e*/
            }
            if ( *(_BYTE *)(*(_DWORD *)(this + 1728) + 3782) /*0x51c47c*/
              && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v23 + 128))(v23)
              && *(_DWORD **)(this + 1444) == v23
              && !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v23 + 132))(v23) + 3220) )
            {
              return 0; /*0x51c47c*/
            }
            if ( (*(int (__thiscall **)(_DWORD *))(*v23 + 44))(v23) != 6 ) /*0x51c48c*/
            {
LABEL_96:
              if ( (*(int (__thiscall **)(int))(this->q610)(this) == 7 /*0x51c56b*/
                && v23 == *(_DWORD **)(this + 1444)
                && *(_BYTE *)(this + 1048) )
              {
                return 0; /*0x51c573*/
              }
              if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(this + 540), (int)v23) || MEMORY[0xA8E7AC] ) /*0x51c594*/
              {
                switch ( (*(int (__thiscall **)(_DWORD *))(*v23 + 44))(v23) ) /*0x51c669*/
                {
                  case 1: /*0x51c669*/
                    if ( !v23[413] ) /*0x51c670*/
                      WinAPI::Wrapper(-2147467261); /*0x51c67f*/
                    if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v23[413] + 16))(v23[413]) || v23[361] ) /*0x51c694*/
                    {
                      if ( *((_BYTE *)v23 + 1718) ) /*0x51c6aa*/
                        goto LABEL_128; /*0x51c6aa*/
                      if ( !v23[413] ) /*0x51c6b4*/
                        WinAPI::Wrapper(-2147467261); /*0x51c6c3*/
                      if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v23[413] + 164))(v23[413]) ) /*0x51c6d1*/
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
                    if ( !v23[413] ) /*0x51c6e7*/
                      WinAPI::Wrapper(-2147467261); /*0x51c6f6*/
                    if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v23[413] + 16))(v23[413]) ) /*0x51c704*/
                      ++v47; /*0x51c70b*/
                    goto LABEL_134; /*0x51c70b*/
                  default:
                    goto LABEL_134;
                }
              }
              v36 = AbstractClass::IsTechnoType(v23); /*0x51c59c*/
              if ( v36 && v36[136] == 2 ) /*0x51c5ac*/
              {
                if ( v19 < 1 ) /*0x51c5b1*/
                  v19 = 1; /*0x51c5b7*/
              }
              else
              {
                v37 = (*(int (__thiscall **)(_DWORD *))(*v23 + 44))(v23); /*0x51c5cc*/
                if ( TechnoClass::GetValue((_DWORD *)this, -1) <= 0 && v37 != 36 ) /*0x51c5da*/
                  return 7; /*0x51c5da*/
                if ( v37 == 6 ) /*0x51c5e3*/
                {
                  if ( *(_BYTE *)(v23[328] + 5814) ) /*0x51c62f*/
                    return 7; /*0x51c637*/
                  if ( v19 < 5 ) /*0x51c640*/
                    v19 = 5; /*0x51c646*/
                }
                else if ( v37 == 15 ) /*0x51c5e8*/
                {
                  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v23 + 200))(v23, *(_DWORD *)(this + 540)) ) /*0x51c611*/
                    v19 = 6; /*0x51c61f*/
                }
                else if ( v37 != 36 && v19 < 5 ) /*0x51c5f6*/
                {
                  v19 = 5; /*0x51c5fc*/
                }
              }
              goto LABEL_134; /*0x51c5bc*/
            }
            v34 = (_BYTE *)v23[328]; /*0x51c492*/
            if ( !v34[5889] ) /*0x51c498*/
            {
              if ( !v34[5823] || (v35 = v23[390], v35 != 12) && v35 != 8 ) /*0x51c4c2*/
              {
                if ( v34[5824] ) /*0x51c4c8*/
                {
                  if ( *(_BYTE *)(v23[135] + 506) ) /*0x51c4d8*/
                    return 7; /*0x51c4e0*/
                }
                else
                {
                  if ( !v34[5815] ) /*0x51c4f3*/
                    goto LABEL_96; /*0x51c4f3*/
                  if ( !BuildingClass::IsPoweredOn(v23) ) /*0x51c4f7*/
                  {
                    if ( (unsigned __int8)HouseClass::IsAlliedWith((#375 *)v23[135], *(#375 **)(this + 540)) ) /*0x51c511*/
                    {
                      if ( v19 < 3 ) /*0x51c51d*/
                        v19 = 3; /*0x51c523*/
                    }
                    else
                    {
                      if ( !(*(unsigned __int8 (__thiscall **)(int))(this->unloadTimer)(this) ) /*0x51c53a*/
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
        v23 = (_DWORD *)v23[12]; /*0x51c70f*/
        if ( !v23 ) /*0x51c714*/
        {
          v22 = v47; /*0x51c78b*/
          break; /*0x51c78b*/
        }
      }
    }
    if ( !*(_BYTE *)(this + 1048) /*0x51c7ce*/
      && !v40
      && MEMORY[0x89EA40][9 * *(_DWORD *)(a2 + 236) + *(_DWORD *)(*(_DWORD *)(this + 1728) + 1660)] == 0.0 )
    {
      return 7; /*0x51c7dc*/
    }
    if ( !v19 && v41 ) /*0x51c7e9*/
      return 2; /*0x51c7f7*/
    if ( v43 != -1 )
    {
      if ( HouseClass::IsAllied(*(_DWORD **)(this + 540), v43) )
      {
        v38 = v42; /*0x51c813*/
        if ( (v42 & 0x1C) == 0x1C && v19 < 2 )
          return v22 != 3 ? 2 : 6;
        goto LABEL_159; /*0x51c824*/
      }
      if ( TechnoClass::GetValue((_DWORD *)this, -1) <= 0 ) /*0x51c84c*/
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
int __fastcall InfantryClass::GetFireError(int a1, int a2, int *a3, int a4, int a5)
{
  int v6; // eax
  int result; // eax
  int *v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ebp
  int v15; // esi
  int v16; // esi
  char v17[16]; // [esp+14h] [ebp-10h] BYREF

  v6 = *(_DWORD *)(a1 + 1732); /*0x51c8b8*/
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
  if ( TechnoClass::GetValue((_DWORD *)a1, -1) < 0 /*0x51c937*/
    && (!a3
     || (*(int (__thiscall **)(int *))(*a3 + 44))(a3) != 15
     || BuildingClass::GetHealthRatio(a3) >= *(double *)(MEMORY[0x87F7E8][7806] + 5880)) )
  {
    return 5; /*0x51c944*/
  }
  if ( a3 )
  {
    if ( (*(int (__thiscall **)(int *))(*a3 + 44))(a3) == 1 )
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1682) )
      {
        v9 = a3[170]; /*0x51c96b*/
        if ( v9 )
        {
          v10 = a1 ? ((*(_BYTE *)(a1 + 20) & 1) != 0 ? a1 : 0) : 0;
          if ( v9 != v10 ) /*0x51c98a*/
            return 5; /*0x51c997*/
        }
      }
    }
  }
  result = TriggerTypeClass::ReadINI((_DWORD *)a1, a4, a3, a4, a5); /*0x51c9a7*/
  if ( !result ) /*0x51c9b2*/
  {
    if ( *(double *)(a1 + 1400) > 0.1 ) /*0x51c9c9*/
      return 7; /*0x51c9c9*/
    if ( *(_DWORD *)(a1 + 1444) ) /*0x51c9cf*/
    {
      v11 = *(_DWORD *)(a1 + 1732); /*0x51c9d9*/
      if ( v11 != -1 && !byte_7EAF7C[4 * v11] ) /*0x51c9e4*/
        return 7; /*0x51c9ed*/
    }
    if ( *(_BYTE *)(*(_DWORD *)(a1 + 1728) + 3476) ) /*0x51c9f9*/
    {
      v12 = *(_DWORD *)(a1 + 1652); /*0x51ca07*/
      a5 = 0; /*0x51ca15*/
      if ( !v12 ) /*0x51ca1d*/
        goto LABEL_37; /*0x51ca1d*/
      v13 = StreamClass::Set2(&a5, (_DWORD *)(a1 + 1652)); /*0x51ca24*/
      if ( v13 < 0 && v13 != -2147467262 ) /*0x51ca32*/
        WinAPI::Wrapper(v13); /*0x51ca35*/
      if ( !a5 ) /*0x51ca40*/
LABEL_37:
        WinAPI::Wrapper(-2147467261); /*0x51ca47*/
      (*(void (__stdcall **)(int, char *))(*(_DWORD *)a5 + 12))(a5, v17); /*0x51ca59*/
      v14 = memcmp(v17, (const char *)&g_CLSID_JumpjetLocomotion, 16); /*0x51ca6a*/
      ComPtr::Release_Alt(&a5); /*0x51ca79*/
      if ( !v14 && *(_BYTE *)(*(_DWORD *)(a1 + 1728) + 3787) ) /*0x51ca8e*/
      {
        if ( !*(_DWORD *)(a1 + 1652) ) /*0x51ca98*/
          WinAPI::Wrapper(-2147467261); /*0x51caa7*/
        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 128))(*(_DWORD *)(a1 + 1652)) ) /*0x51cab5*/
          return 7; /*0x51caca*/
      }
      v8 = a3; /*0x51cacd*/
    }
    v15 = *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1016))(a1, a4); /*0x51cae0*/
    if ( !v15 ) /*0x51cae4*/
      goto LABEL_64; /*0x51cae4*/
    if ( *(_BYTE *)(v15 + 297) && *(_DWORD *)(a1 + 1444) ) /*0x51caf0*/
      return 7; /*0x51cb05*/
    if ( *(_BYTE *)(v15 + 336) && v8 != (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1) ) /*0x51cb1e*/
      return 5; /*0x51cb2b*/
    v16 = *(_DWORD *)(v15 + 172); /*0x51cb2e*/
    if ( v16 && *(_BYTE *)(v16 + 343) && v8 && (v8[5] & 2) != 0 && v8[14] ) /*0x51cb4c*/
    {
      return 5; /*0x51cb55*/
    }
    else
    {
LABEL_64:
      if ( !*(_DWORD *)(a1 + 1652) ) /*0x51cb61*/
        WinAPI::Wrapper(-2147467261); /*0x51cb70*/
      result = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 140))(*(_DWORD *)(a1 + 1652)); /*0x51cb7e*/
      if ( !result ) /*0x51cb86*/
        return 0; /*0x51cb88*/
    }
  }
  return result; /*0x51c8f0*/
}


// ==== 0x0051CBA0  InfantryClass::ValidatePlacement  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::ValidatePlacement(int this, InfantryClass *aP1, int a3)
{
  char v4; // bl
  int v6; // edi
  InfantryTypeClass *v9; // eax
  int v8; // eax

  v4 = FootClass::ValidatePlacement((_DWORD **)this, aP1, a3); /*0x51cbba*/
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1196))(this) ) /*0x51cbbc*/
    return v4; /*0x51cbcb*/
  if ( (*(int (__thiscall **)(int))(this->q610)(this) == 28 ) /*0x51cbdb*/
    return v4; /*0x51cbe2*/
  if ( *(_DWORD *)(this + 692) ) /*0x51cbe5*/
  {
    v6 = 1; /*0x51cbf3*/
    if ( (*(int (__thiscall **)(int))(this->q610)(this) == 17 ) /*0x51cc01*/
      v6 = 17; /*0x51cc03*/
    if ( (*(int (__thiscall **)(int))(this->q610)(this) == 8 ) /*0x51cc12*/
      v6 = 8; /*0x51cc18*/
    goto LABEL_37; /*0x51cc1a*/
  }
  InfantryClass::ProcessExitQueue((int *)this); /*0x51cc21*/
  if ( *(_DWORD *)(this + 1444) ) /*0x51cc26*/
  {
    v6 = 2; /*0x51cc34*/
    if ( (*(int (__thiscall **)(int))(this->q610)(this) == 8 ) /*0x51cc42*/
      v6 = 8; /*0x51cc44*/
    if ( (*(int (__thiscall **)(int))(this->q610)(this) == 17 ) /*0x51cc53*/
      v6 = 17; /*0x51cc59*/
    goto LABEL_37; /*0x51cc5b*/
  }
  if ( (*(int (__thiscall **)(int))(this->q610)(this) == 5 /*0x51ccae*/
    || (*(int (__thiscall **)(int))(this->q610)(this) == 11
    || (*(int (__thiscall **)(int))(this->q610)(this) != -1
    && (MissionClass::GetMissionControl((_DWORD *)this)[5] || MissionClass::GetMissionControl((_DWORD *)this)[7]) )
  {
    return 0; /*0x51cda6*/
  }
  if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) || *(_DWORD *)(this + 1492) ) /*0x51ccc8*/
  {
    if ( *(_DWORD *)(this + 172) != 11 /*0x51cd64*/
      && (!TechnoClass::HasVoiceResponse((TechnoClass *)this, 16) && !*(_BYTE *)(*(_DWORD *)(this + 1728) + 3385)
       || *(_DWORD *)(this + 1492)) )
    {
      v6 = 5; /*0x51cd6e*/
      goto LABEL_37; /*0x51cd73*/
    }
    goto LABEL_36; /*0x51cd6c*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(this + 540) + 588) >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5184) /*0x51ccf5*/
    || *(_DWORD *)(this + 172) == 11 )
  {
    if ( *(_DWORD *)(this + 732) ) /*0x51ccfe*/
    {
      v6 = 5; /*0x51cd08*/
      goto LABEL_37; /*0x51cd0d*/
    }
    if ( !(*(unsigned __int8 (__thiscall **)(int))(this->unloadTimer)(this) ) /*0x51cd13*/
    {
      v9 = *(InfantryTypeClass **)(this + 1728); /*0x51cd1d*/
      if ( !v9->?[2895] && !v9->?[2898] ) /*0x51cd2d*/
      {
        v6 = 5; /*0x51cd37*/
        goto LABEL_37; /*0x51cd3c*/
      }
    }
LABEL_36:
    v6 = 11; /*0x51cd75*/
    goto LABEL_37; /*0x51cd75*/
  }
  v6 = 5; /*0x51ccf7*/
LABEL_37:
  v8 = *(_DWORD *)(this + 172); /*0x51cd7a*/
  if ( v8 != 25 && v8 != 11 ) /*0x51cd88*/
    (*(void (__thiscall **)(int, int, _DWORD))(this->q7A0)(this, v6, 0); /*0x51cd96*/
  return v4; /*0x51cbc6*/
}


// ==== 0x0051CDB0  InfantryClass::ProcessIdleAction  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::ProcessIdleAction(_DWORD *this)
{
  wchar_t *v2; // edi
  int v3; // eax
  int v4; // ecx
  char result; // al
  int v6; // edi
  char v7; // bl
  __int16 v8; // ax
  int v9; // eax
  __int16 v10; // cx
  __int16 v11; // dx
  unsigned int v12; // [esp+8h] [ebp-24h]
  __int16 v13; // [esp+Ch] [ebp-20h] BYREF
  double v14; // [esp+10h] [ebp-1Ch] BYREF
  double v15; // [esp+18h] [ebp-14h] BYREF
  int v16; // [esp+20h] [ebp-Ch] BYREF
  int v17; // [esp+24h] [ebp-8h]
  int v18; // [esp+28h] [ebp-4h]

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1140))(this) ) /*0x51cdb9*/
    return 0; /*0x51d0a1*/
  v14 = *(double *)&MEMORY[0x8871E0][1].? * 1800.0; /*0x51cdeb*/
  v15 = *(double *)&MEMORY[0x8871E0][1].? * 450.0; /*0x51cdfb*/
  v12 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2147483646); /*0x51ce0c*/
  v2 = MEMORY[0xA8ED84]; /*0x51ce10*/
  v3 = Math::RoundToInt((v14 - v15) * ((double)(int)v12 * 4.656612877414201e-10) + v15); /*0x51ce26*/
  v4 = v17; /*0x51ce2b*/
  this->idleActionTimer = v2; /*0x51ce35*/
  this->q16C = v4; /*0x51ce3b*/
  this->q170 = v3; /*0x51ce3e*/
  if ( !*(_BYTE *)(this->Type + 3775) /*0x51ce67*/
    || (unsigned __int8)House::IsCurrentPlayer((#375 *)this->owner)
    || (int)this->PanicDurationLeft <= 50 )
  {
    v6 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 10); /*0x51cea1*/
    v7 = ObjectClass::StepCleanup(this, aCow); /*0x51cea8*/
    if ( v7 && Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 10) < 5 ) /*0x51cec6*/
      v6 = 8; /*0x51cec8*/
    switch ( v6 ) /*0x51ced9*/
    {
      case 1: /*0x51ced9*/
      case 2: /*0x51ced9*/
      case 7: /*0x51ced9*/
        (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 1368))(this, 10, 0, 0); /*0x51cf4c*/
        if ( this->currentBarrelIndex /*0x51cf90*/
          || !(unsigned __int8)House::IsHumanPlayer((#375 *)this->owner)
          || *(int *)(this->Type + 3736) <= 0
          || Random::Range(MEMORY[0x886B88], 0, 2) )
        {
          goto LABEL_22; /*0x51cf97*/
        }
        v16 = this->location; /*0x51cfa7*/
        v17 = this->q0A0; /*0x51cfb2*/
        v9 = this->Type; /*0x51cfb6*/
        v18 = this->q0A4; /*0x51cfbf*/
        StartAudioControllerAt(**(_DWORD **)(v9 + 3724), (int)&v16, 0); /*0x51cfcb*/
        result = 1; /*0x51cfd2*/
        break; /*0x51cfd8*/
      case 3: /*0x51ced9*/
      case 4: /*0x51ced9*/
      case 5: /*0x51ced9*/
        (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 1368))(this, 9, 0, 0); /*0x51ceea*/
        result = 1; /*0x51cef2*/
        break; /*0x51cef8*/
      case 6: /*0x51ced9*/
        LOWORD(v12) = (unsigned __int16)Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 7) << 13; /*0x51cf11*/
        LOBYTE(v8) = 0; /*0x51cf16*/
        HIBYTE(v8) = ((v12 >> 7) + 1) >> 1; /*0x51cf27*/
        v13 = v8; /*0x51cf2f*/
        FacingClass::Set_SyncLog(&v13); /*0x51cf34*/
        result = 1; /*0x51cf3b*/
        break; /*0x51cf41*/
      case 8: /*0x51ced9*/
        LOWORD(v12) = (unsigned __int16)Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 7) << 13; /*0x51cff1*/
        LOBYTE(v10) = 0; /*0x51cff6*/
        HIBYTE(v10) = ((v12 >> 7) + 1) >> 1; /*0x51d007*/
        LOWORD(v14) = v10; /*0x51d009*/
        FacingClass::Set_SyncLog(&v14); /*0x51d014*/
        if ( !v7 /*0x51d032*/
          && ((unsigned __int8)House::IsCurrentPlayer((#375 *)this->owner) || !*(_BYTE *)(this->Type + 3775)) )
        {
          goto LABEL_22; /*0x51d03a*/
        }
        (*(void (__thiscall **)(_DWORD *, int *, int, _DWORD))(*this + 372))(this, &MEMORY[0xA8F200], 1, 0); /*0x51d049*/
        result = 1; /*0x51d051*/
        break; /*0x51d057*/
      case 9: /*0x51ced9*/
      case 10: /*0x51ced9*/
        LOWORD(v12) = (unsigned __int16)Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 7) << 13; /*0x51d06f*/
        LOBYTE(v11) = 0; /*0x51d074*/
        HIBYTE(v11) = ((v12 >> 7) + 1) >> 1; /*0x51d085*/
        LOWORD(v15) = v11; /*0x51d08d*/
        FacingClass::Set_SyncLog(&v15); /*0x51d092*/
        goto LABEL_22; /*0x51d092*/
      default:
LABEL_22:
        result = 1; /*0x51d097*/
        break; /*0x51d09f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int *, int, _DWORD))(*this + 372))(this, &MEMORY[0xA8F200], 1, 0); /*0x51ce76*/
    return 1; /*0x51ce7d*/
  }
  return result; /*0x51ce7c*/
}


// ==== 0x0051D0D0  InfantryClass::FindMoveTarget  this=InfantryClass  sig=csp ====
char __userpurge InfantryClass::FindMoveTarget@<al>(TechnoClass *this@<ecx>, IUnknown aP3)
{
  char v2; // bl
  int v4; // eax
  char *MissionControl; // eax
  double v6; // st7
  int v7; // eax
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // ecx
  double v11; // st7
  unsigned int v12; // edi
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // eax
  int v16; // eax
  int v17; // edi
  void *v18; // eax
  int v19; // edx
  _DWORD *v20; // eax
  char *v21; // edi
  int v22; // edi
  int v23; // eax
  char v24; // di
  int v25; // edi
  int v26; // edx
  __int16 v27; // cx
  void *v28; // ebp
  int v29; // ebx
  int LandHeight; // eax
  __int16 v31; // cx
  __int16 v32; // dx
  _DWORD *v33; // eax
  int v34; // edi
  void *v35; // eax
  __int128 aP0_4; // [esp+20h] [ebp-60h]
  __int128 aP0_4a; // [esp+20h] [ebp-60h]
  int v39; // [esp+40h] [ebp-40h] BYREF
  int v40; // [esp+44h] [ebp-3Ch] BYREF
  int v41; // [esp+48h] [ebp-38h] BYREF
  unsigned int v42; // [esp+4Ch] [ebp-34h]
  int var30; // [esp+50h] [ebp-30h]
  IUnknown *v43; // [esp+54h] [ebp-2Ch] BYREF
  int v45; // [esp+58h] [ebp-28h] BYREF
  AbstractClass aP1; // [esp+5Ch] [ebp-24h] BYREF

  v2 = aP3.field_4; /*0x51d0d5*/
  v4 = this->q1B1; /*0x51d0dd*/
  if ( (v4 == 27 || v4 == 28 || v4 == 29 || v4 == 30) && LOBYTE(aP3.field_4) && LOBYTE(aP3.field_8) ) /*0x51d101*/
  {
    (*(void (__thiscall **)(TechnoClass *, int, _DWORD, _DWORD))(*(_DWORD *)this->__pad_0 + 1368))(this, 31, 0, 0); /*0x51d10d*/
  }
  else if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)this->focus) ) /*0x51d11b*/
  {
    MissionControl = (char *)this->q1B1; /*0x51d124*/
    if ( MissionControl == (char *)27 /*0x51d148*/
      || MissionControl == (char *)28
      || MissionControl == (char *)29
      || MissionControl == (char *)30 )
    {
      return (char)MissionControl; /*0x51d148*/
    }
  }
  if ( !this->Locomotor ) /*0x51d150*/
    WinAPI::Wrapper(-2147467261); /*0x51d15d*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 16))(this->Locomotor) ) /*0x51d16b*/
    v2 = 0; /*0x51d172*/
  MissionControl = MissionClass::GetMissionControl(this); /*0x51d176*/
  if ( MissionControl[9] || v2 )
  {
    LOBYTE(MissionControl) = *(_BYTE *)(this->animation + 3775); /*0x51d190*/
    if ( (_BYTE)MissionControl || !this->sprayOffsetIndex || v2 )
    {
      MissionControl = (char *)this->q1B1; /*0x51d1aa*/
      if ( MissionControl == (char *)-1 || MissionControl == (char *)31 || byte_7EAF7C[4 * (_DWORD)MissionControl] )
      {
        if ( *(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6125) /*0x51d1fa*/
          || TechnoClass::HasVoiceResponse(this, 3)
          || LOBYTE(aP3.field_8)
          || (LOBYTE(MissionControl) = House::IsCurrentPlayer((#375 *)this->focus), !(_BYTE)MissionControl) )
        {
          if ( !v2 ) /*0x51d210*/
          {
LABEL_33:
            LOBYTE(MissionControl) = *(_BYTE *)(this->animation + 3775); /*0x51d212*/
            if ( !(_BYTE)MissionControl ) /*0x51d220*/
              return (char)MissionControl; /*0x51d220*/
          }
        }
        else if ( !v2 ) /*0x51d1fe*/
        {
          if ( !this->q175 ) /*0x51d206*/
            return (char)MissionControl; /*0x51d206*/
          goto LABEL_33; /*0x51d206*/
        }
        aP3.field_8 = *(_DWORD *)aP3.field_0; /*0x51d226*/
        if ( aP3.field_8 == *(_DWORD *)&HouseClass_Player.__pad_5568[24396] /*0x51d252*/
          && *(_DWORD *)(aP3.field_0 + 4) == *(_DWORD *)&HouseClass_Player.__pad_5568[24400]
          && *(_DWORD *)(aP3.field_0 + 8) == *(_DWORD *)&HouseClass_Player.__pad_5568[24404] )
        {
          v8 = (*(int (__thiscall **)(TechnoClass *, int *))(*(_DWORD *)this->__pad_0 + 72))(this, &aP1.nextArrayIndex); /*0x51d2e7*/
          v9 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, char *))(*(_DWORD *)this->__pad_0 + 72))( /*0x51d2f0*/
                           this,
                           &aP1.__pad_0[12]);
          v10 = (unsigned __int8)*(_DWORD *)(v8 + 4); /*0x51d2fd*/
          *(_DWORD *)aP1.__pad_0 = (unsigned __int8)*v9; /*0x51d308*/
          *(_DWORD *)&aP1.__pad_0[4] = v10; /*0x51d30c*/
          if ( *(_DWORD *)aP1.__pad_0 == 128 && v10 == 128 ) /*0x51d314*/
          {
            v12 = *ProgressTimer::GetValue(&this->target_laser_timer[2], (IUnknown *)&v45); /*0x51d36b*/
          }
          else
          {
            *((double *)&aP0_4a + 1) = (double)*(int *)aP1.__pad_0 - 128.0; /*0x51d326*/
            *(double *)&aP0_4a = 128.0 - (double)*(int *)&aP1.__pad_0[4]; /*0x51d334*/
            v11 = Math::CalcAngle((AbstractClass *)aP0_4a, *(double *)((char *)&aP0_4a + 4)); /*0x51d337*/
            LOWORD(aP3.field_8) = Math::RoundToInt((v11 - 1.570796326794897) * -10430.06004058427); /*0x51d350*/
            v12 = aP3.field_8; /*0x51d355*/
          }
          v13 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)4); /*0x51d385*/
          v14 = *(_DWORD *)this->__pad_0; /*0x51d38a*/
          v42 = ((((v12 >> 12) + 1) >> 1) & 7) + v13 - 2; /*0x51d390*/
          aP3.field_4 = 0; /*0x51d39f*/
          v15 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *, _DWORD))(v14 + 76))(this, &aP1.nextArrayIndex, 0); /*0x51d3ae*/
          LOWORD(aP3.field_8) = *v15 / 256; /*0x51d3c5*/
          v16 = v15[1] / 256; /*0x51d3da*/
          HIWORD(aP3.field_8) = v16; /*0x51d3de*/
          LOBYTE(v16) = this->onBridge; /*0x51d3e7*/
          aP3.field_0 = aP3.field_8; /*0x51d3f1*/
          v41 = *LayerClass::Pathfinding_Find( /*0x51d42b*/
                   (IUnknown *)&stru_87C374.__pad_14B0[8132],
                   *(IUnknown **)(this->animation + 1660),
                   (IUnknown *)&v43,
                   &aP3,
                   *(IUnknown **)(this->animation + 1660),
                   (IUnknown *)0xFFFFFFFF,
                   0,
                   (IUnknown *)v16,
                   (IUnknown *)1,
                   (IUnknown *)1,
                   0,
                   (IUnknown *)1,
                   0,
                   (IUnknown *)1,
                   (IUnknown *)&aP3.field_4,
                   0,
                   0);
          if ( v41 != *(_DWORD *)&HouseClass_Player.__pad_5568[24364] ) /*0x51d42f*/
          {
            v17 = *(_DWORD *)this->__pad_0; /*0x51d43f*/
            v18 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v41); /*0x51d44d*/
            (*(void (__thiscall **)(TechnoClass *, void *, int))(v17 + 1152))(this, v18, 1); /*0x51d455*/
            if ( !this->Locomotor ) /*0x51d45b*/
              WinAPI::Wrapper(-2147467261); /*0x51d46a*/
            LOBYTE(MissionControl) = (*(char (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 64))(this->Locomotor); /*0x51d478*/
            return (char)MissionControl; /*0x51d482*/
          }
        }
        else
        {
          *(_DWORD *)aP1.__pad_0 = this->location[0]; /*0x51d266*/
          *(_DWORD *)&aP1.__pad_0[4] = this->location[1]; /*0x51d271*/
          *(_DWORD *)&aP1.__pad_0[8] = this->location[2]; /*0x51d27c*/
          *((double *)&aP0_4 + 1) = (double)*(int *)aP1.__pad_0 - (double)aP3.field_8; /*0x51d280*/
          *(double *)&aP0_4 = (double)*(int *)(aP3.field_0 + 4) - (double)*(int *)&aP1.__pad_0[4]; /*0x51d28b*/
          v6 = Math::CalcAngle((AbstractClass *)aP0_4, *(double *)((char *)&aP0_4 + 4)); /*0x51d28e*/
          LOWORD(aP3.field_8) = Math::RoundToInt((v6 - 1.570796326794897) * -10430.06004058427); /*0x51d2a7*/
          v7 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)4); /*0x51d2ba*/
          v42 = v7 + (((((unsigned int)aP3.field_8 >> 12) + 1) >> 1) & 7) - 2; /*0x51d2d0*/
        }
        v19 = *(_DWORD *)this->__pad_0; /*0x51d487*/
        aP3.field_0 = 0; /*0x51d491*/
        aP3.field_4 = 0; /*0x51d49b*/
        v20 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *, _DWORD))(v19 + 76))(this, &aP1.nextArrayIndex, 0); /*0x51d4a5*/
        LOWORD(aP3.field_8) = *v20 / 256; /*0x51d4b8*/
        HIWORD(aP3.field_8) = v20[1] / 256; /*0x51d4d0*/
        v39 = aP3.field_8; /*0x51d4d9*/
        v21 = (char *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v39); /*0x51d4e8*/
        v22 = v21[283]
            + (*(unsigned __int8 (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)this->__pad_0 + 188))(this, 0) != 0
            ? 4
            : 0;
        (*(void (__thiscall **)(TechnoClass *, int *, _DWORD))(*(_DWORD *)this->__pad_0 + 76))( /*0x51d516*/
          this,
          &aP1.nextArrayIndex,
          0);
        v23 = v22 * *(_DWORD *)&HouseClass_Player.__pad_5568[24460]; /*0x51d51e*/
        v24 = 0; /*0x51d521*/
        aP1.NeedsSaveOrLink = (void *)v23; /*0x51d523*/
        v43 = 0; /*0x51d527*/
        while ( 1 ) /*0x51d536*/
        {
          v25 = ((_BYTE)v42 + v24) & 7; /*0x51d536*/
          v26 = v25 & 7; /*0x51d53b*/
          v27 = *(_WORD *)&stru_89E138.__pad_14B0[4 * v26 + 160] + v39; /*0x51d53e*/
          LOWORD(v26) = *(_WORD *)&stru_89E138.__pad_14B0[4 * v26 + 162]; /*0x51d54d*/
          LOWORD(var30) = v27; /*0x51d555*/
          HIWORD(var30) = HIWORD(v39) + v26; /*0x51d569*/
          aP3.field_8 = var30; /*0x51d572*/
          v28 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP3.field_8); /*0x51d587*/
          if ( LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP3.field_8, (TechnoClass *)1) ) /*0x51d589*/
          {
            v29 = *(_DWORD *)this->__pad_0; /*0x51d596*/
            LandHeight = ObjectClass::GetLandHeight(this); /*0x51d59e*/
            if ( !(*(int (__thiscall **)(TechnoClass *, void *, int, int, _DWORD, int))(v29 + 428))( /*0x51d5a8*/
                    this,
                    v28,
                    v25,
                    LandHeight,
                    0,
                    1) )
            {
              v31 = *(_WORD *)&HouseClass_Player.__pad_5568[24364]; /*0x51d5b6*/
              v32 = *(_WORD *)&HouseClass_Player.__pad_5568[24366]; /*0x51d5bc*/
              if ( aP3.field_0 == *(_DWORD *)&HouseClass_Player.__pad_5568[24364] ) /*0x51d5cc*/
                aP3.field_0 = aP3.field_8; /*0x51d5d5*/
              if ( *(_WORD *)&HouseClass_Player.__pad_5568[24364] || *(_WORD *)&HouseClass_Player.__pad_5568[24366] ) /*0x51d5e5*/
                goto LABEL_56; /*0x51d5e5*/
              aP1.uniqueId = (SHIWORD(aP3.field_8) << 8) + 128; /*0x51d606*/
              *(_DWORD *)&aP1.__pad_0[12] = (SLOWORD(aP3.field_8) << 8) + 128; /*0x51d612*/
              aP1.abstractFlags = (int)aP1.NeedsSaveOrLink; /*0x51d626*/
              v33 = Terrain::ClimbCheck(&aP1, (AbstractClass *)&aP1.__pad_0[12]); /*0x51d62a*/
              if ( aP3.field_8 == *v33 /*0x51d65c*/
                && (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP3.field_8) + 80)
                  & 0x100) == 0 )
              {
                v32 = *(_WORD *)&HouseClass_Player.__pad_5568[24366]; /*0x51d683*/
                aP3.field_4 = aP3.field_8; /*0x51d68a*/
                v31 = *(_WORD *)&HouseClass_Player.__pad_5568[24364]; /*0x51d68e*/
LABEL_59:
                LOWORD(MissionControl) = aP3.field_4; /*0x51d694*/
                v40 = aP3.field_4; /*0x51d69b*/
                if ( LOWORD(aP3.field_4) != v31 ) /*0x51d69f*/
                  goto LABEL_64; /*0x51d69f*/
                if ( HIWORD(aP3.field_4) == v32 ) /*0x51d6a6*/
                {
                  LOWORD(MissionControl) = aP3.field_0; /*0x51d6a8*/
                  v40 = aP3.field_0; /*0x51d6ac*/
                }
                if ( (_WORD)MissionControl != v31 || HIWORD(v40) != v32 ) /*0x51d6ba*/
                {
LABEL_64:
                  (*(void (__thiscall **)(TechnoClass *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 488))(this, 2, 0); /*0x51d6c4*/
                  v34 = *(_DWORD *)this->__pad_0; /*0x51d6ca*/
                  v35 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v40); /*0x51d6d8*/
                  LOBYTE(MissionControl) = (*(char (__thiscall **)(TechnoClass *, void *, int))(v34 + 1152))( /*0x51d6e0*/
                                             this,
                                             v35,
                                             1);
                }
                return (char)MissionControl; /*0x51d6e0*/
              }
            }
          }
          v31 = *(_WORD *)&HouseClass_Player.__pad_5568[24364]; /*0x51d65e*/
          v32 = *(_WORD *)&HouseClass_Player.__pad_5568[24366]; /*0x51d664*/
LABEL_56:
          v24 = (_BYTE)v43 + 1; /*0x51d66b*/
          v43 = (IUnknown *)((char *)v43 + 1); /*0x51d673*/
          if ( (int)v43 >= 8 ) /*0x51d677*/
            goto LABEL_59; /*0x51d677*/
        }
      }
    }
  }
  return (char)MissionControl; /*0x51d47b*/
}


// ==== 0x0051D6F0  InfantryClass::ProcessDeployAction  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::ProcessDeployAction(_DWORD *this, int a2, char a3, char a4)
{
  int v4; // edi
  __int16 *v6; // eax
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  char *ProductionTimeMult; // eax
  char *v18; // edx
  int v19; // ecx
  int v20; // eax
  int v21; // edi
  int v22; // edi
  int v24; // [esp+Ch] [ebp-Ch] BYREF
  int v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]

  v4 = a2; /*0x51d6f6*/
  if ( a2 == -1 /*0x51d72b*/
    || !*(_DWORD *)(*(_DWORD *)(this->Type + 3644) + 36 * a2 + 4)
    || this->SequenceAnim == 33 && this->slaveManager )
  {
    return 0; /*0x51d72b*/
  }
  if ( this->isPlayingDamageSound /*0x51d771*/
    && *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 2048)
    && ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 692))(this) == 1.0
    && v4 == 3 )
  {
    v4 = 39; /*0x51d773*/
    goto LABEL_12; /*0x51d778*/
  }
  if ( v4 == 5 && !*(_BYTE *)(this->Type + 3773) ) /*0x51d785*/
    return 0; /*0x51dadc*/
LABEL_12:
  if ( *(_DWORD *)(this->Type + 1460) == 3 ) /*0x51d7a0*/
  {
    v6 = (__int16 *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 440))(this, &a2); /*0x51d7b0*/
    v7 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v6) + 59); /*0x51d7c1*/
    v8 = 1; /*0x51d7c7*/
    if ( (v7 == 6 || v7 == 2) && !this->__pad_230 ) /*0x51d7d6*/
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
    v9 = this->InfantryClass_field_int_6E8; /*0x51d842*/
    if ( v9 || v8 != 1 ) /*0x51d84f*/
    {
      if ( v9 == 1 && !v8 ) /*0x51d886*/
      {
        v24 = this->location; /*0x51d891*/
        v25 = this->q0A0; /*0x51d89c*/
        v11 = this->Type; /*0x51d8a0*/
        v26 = this->q0A4; /*0x51d8a9*/
        StartAudioControllerAt(*(_DWORD *)(v11 + 3748), (int)&v24, 0); /*0x51d8b3*/
      }
    }
    else
    {
      v24 = this->location; /*0x51d85b*/
      v25 = this->q0A0; /*0x51d866*/
      v10 = this->Type; /*0x51d86a*/
      v26 = this->q0A4; /*0x51d873*/
      StartAudioControllerAt(*(_DWORD *)(v10 + 3752), (int)&v24, 0); /*0x51d87d*/
    }
    this->InfantryClass_field_int_6E8 = v8; /*0x51d8b8*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 84))(this) /*0x51d8ec*/
    || this->__pad_230
    || *(int *)(*(_DWORD *)(this->Type + 3644) + 828) <= 0
    || v4 )
  {
    if ( v4 == 3 && (int)this->PanicDurationLeft >= 200 ) /*0x51d904*/
      v4 = 37; /*0x51d906*/
  }
  else
  {
    v4 = 23; /*0x51d8ee*/
  }
  v12 = this->SequenceAnim; /*0x51d90b*/
  if ( v4 == v12 || v12 != -1 && !a3 && !byte_7EAF7C[4 * v12] ) /*0x51d925*/
    return 0; /*0x51d92e*/
  if ( v4 == 27 ) /*0x51d937*/
  {
    if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1388) != -1 ) /*0x51d949*/
    {
      v24 = this->location; /*0x51d95d*/
      v25 = this->q0A0; /*0x51d966*/
      v13 = *this; /*0x51d96a*/
      v26 = this->q0A4; /*0x51d96f*/
      v14 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(v13 + 132))(this) + 1388); /*0x51d979*/
      StartAudioControllerAt(v14, (int)&v24, 0); /*0x51d97f*/
    }
  }
  else if ( v4 == 31 && *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1392) != -1 ) /*0x51d996*/
  {
    v24 = this->location; /*0x51d9a6*/
    v15 = *this; /*0x51d9aa*/
    v25 = this->q0A0; /*0x51d9af*/
    v26 = this->q0A4; /*0x51d9b6*/
    v16 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(v15 + 132))(this) + 1392); /*0x51d9c2*/
    StartAudioControllerAt(v16, (int)&v24, 0); /*0x51d9ca*/
  }
  this->SequenceAnim = v4; /*0x51d9d2*/
  if ( v4 == 9 || v4 == 10 || v4 == 18 || v4 == 19 || v4 == 23 || v4 == 32 ) /*0x51d9f1*/
  {
    ProductionTimeMult = Rules::GetProductionTimeMult((int *)MEMORY[0xA8EB60], (unsigned __int8)byte_7EAF7F[4 * v4]); /*0x51da02*/
    v18 = (char *)(this + 64); /*0x51da0d*/
    this->radioCommand = MEMORY[0xA8ED84]; /*0x51da13*/
    v19 = v25; /*0x51da19*/
  }
  else
  {
    ProductionTimeMult = (char *)(unsigned __int8)byte_7EAF7F[4 * v4]; /*0x51da27*/
    v18 = (char *)(this + 64); /*0x51da2e*/
    this->radioCommand = MEMORY[0xA8ED84]; /*0x51da34*/
    v19 = v25; /*0x51da3a*/
  }
  *((_DWORD *)v18 + 1) = v19; /*0x51da3e*/
  *((_DWORD *)v18 + 2) = ProductionTimeMult; /*0x51da41*/
  this->q10C = ProductionTimeMult; /*0x51da44*/
  if ( a4 ) /*0x51da50*/
  {
    v20 = *(_DWORD *)(*(_DWORD *)(this->Type + 3644) + 36 * v4 + 4); /*0x51da61*/
    if ( v20 <= 1 ) /*0x51da68*/
      v20 = 1; /*0x51da6a*/
    this->radioContact = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, v20 - 1); /*0x51da84*/
  }
  else
  {
    this->radioContact = 0; /*0x51da8c*/
  }
  if ( !this->health ) /*0x51da96*/
    (*(void (__thiscall **)(_DWORD *))(*this + 1280))(this); /*0x51daa1*/
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
char __thiscall InfantryClass::PlayIdleAnim(_BYTE *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  void *v7; // eax
  int LandHeight; // [esp-Ch] [ebp-28h]
  int v10; // [esp+Ch] [ebp-10h] BYREF
  _DWORD v11[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = this->q1B1; /*0x51daf6*/
  if ( v2 == 27 || v2 == 28 || v2 == 29 || v2 == 30 ) /*0x51db0e*/
  {
    (*(void (__thiscall **)(_BYTE *, int, _DWORD, _DWORD))(this->FootClass_field_558)(this, 28, 0, 0); /*0x51db18*/
  }
  else if ( this->Crawling ) /*0x51db1a*/
  {
    (*(void (__thiscall **)(_BYTE *, int, _DWORD, _DWORD))(this->FootClass_field_558)(this, 2, 0, 0); /*0x51db2e*/
  }
  else
  {
    (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD, _DWORD))(this->FootClass_field_558)(this, 0, 0, 0); /*0x51db40*/
  }
  v3 = *ProgressTimer::GetValue((_WORD *)this + 452, &v10); /*0x51db58*/
  v4 = *(_DWORD *)this; /*0x51db60*/
  v5 = this->q027; /*0x51db64*/
  v6 = this->q029; /*0x51db71*/
  v11[1] = this->owningHouseIndex; /*0x51db74*/
  v11[0] = v5; /*0x51db7d*/
  v11[2] = v6; /*0x51db81*/
  LandHeight = ObjectClass::GetLandHeight(this); /*0x51db8a*/
  v7 = Coord::To_Cell(&MEMORY[0x87F7E8], v11); /*0x51db96*/
  if ( (*(int (__thiscall **)(_BYTE *, void *, unsigned int, int, _DWORD, int))(v4 + 428))( /*0x51db9e*/
         this,
         v7,
         (((v3 >> 12) + 1) >> 1) & 7,
         LandHeight,
         0,
         1) )
  {
    this->InfantryClass_field_bool_6DC = 1; /*0x51dbbe*/
  }
  else
  {
    this->InfantryClass_field_bool_6DC = 0; /*0x51dbac*/
  }
  return FootClass::PlayCOM_audio(this); /*0x51dbb7*/
}


// ==== 0x0051DBD0  InfantryClass::CalcFacingToTarget  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::CalcFacingToTarget(_BYTE *this, int *a2)
{
  int v3; // edx
  int *v4; // ebx
  double v5; // st7
  __int16 v6; // ax
  int v7; // ebx
  double v8; // st7
  double v9; // st7
  int v10; // eax
  _DWORD *v11; // eax
  int *v12; // eax
  int v13; // ebx
  void *v14; // eax
  int *v15; // ebx
  double v16; // st7
  __int16 v17; // ax
  int v18; // ebx
  double v19; // st7
  double v20; // st7
  int v21; // eax
  _DWORD *v22; // eax
  int *v23; // eax
  int v24; // edx
  char v26; // [esp+24h] [ebp-58h]
  char v27; // [esp+24h] [ebp-58h]
  double v28; // [esp+3Ch] [ebp-40h]
  double v29; // [esp+3Ch] [ebp-40h]
  double v30; // [esp+44h] [ebp-38h]
  double v31; // [esp+44h] [ebp-38h]
  int v32; // [esp+4Ch] [ebp-30h] BYREF
  int v33; // [esp+50h] [ebp-2Ch]
  int v34; // [esp+54h] [ebp-28h]
  int v35; // [esp+58h] [ebp-24h] BYREF
  int v36; // [esp+5Ch] [ebp-20h]
  int v37; // [esp+60h] [ebp-1Ch]
  int v38[3]; // [esp+64h] [ebp-18h] BYREF
  int v39[3]; // [esp+70h] [ebp-Ch] BYREF

  v32 = *a2; /*0x51dbe5*/
  v33 = a2[1]; /*0x51dbee*/
  v3 = *(_DWORD *)this; /*0x51dbf2*/
  v34 = a2[2]; /*0x51dbf7*/
  v4 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(v3 + 72))(this, v38); /*0x51dc03*/
  Int64::Equal(v4, a2); /*0x51dc08*/
  v5 = Math::CalcAngle((double)v4[1] - (double)a2[1], (double)*a2 - (double)*v4); /*0x51dc24*/
  v6 = Math::RoundToInt((v5 - 1.570796326794897) * -10430.06004058427); /*0x51dc35*/
  v7 = a2[2]; /*0x51dc43*/
  v30 = (double)((__int16)(v6 + 0x7FFF) - 0x3FFF) * -0.00009587672516830327; /*0x51dc63*/
  v28 = (double)a2[1]; /*0x51dc74*/
  v8 = Math::SinCos(v30); /*0x51dc78*/
  LODWORD(v28) = Math::RoundToInt(v28 - v8 * 124.0); /*0x51dc90*/
  v9 = Math::ArcTan2(v30); /*0x51dc9a*/
  v10 = Math::RoundToInt(v9 * 124.0 + (double)*a2); /*0x51dcaa*/
  v36 = LODWORD(v28); /*0x51dcb5*/
  v35 = v10; /*0x51dcbf*/
  v37 = v7; /*0x51dcc3*/
  v26 = BYTE1(*((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], a2) + 80)) & 1; /*0x51dcdc*/
  v11 = Coord::To_Cell(MEMORY[0x87F7E8], a2); /*0x51dceb*/
  v12 = ObjectPlacement::CalcPosition(v11, v39, &v35, 0, v26, 0); /*0x51dcf2*/
  *a2 = *v12; /*0x51dcfb*/
  a2[1] = v12[1]; /*0x51dd00*/
  a2[2] = v12[2]; /*0x51dd06*/
  if ( *a2 == dword_A8ED54[299] && a2[1] == dword_A8ED54[300] && a2[2] == dword_A8ED54[301] ) /*0x51dd32*/
  {
    v13 = *(_DWORD *)this; /*0x51dd38*/
    v14 = Coord::To_Cell(MEMORY[0x87F7E8], &v32); /*0x51dd4c*/
    if ( !(*(int (__thiscall **)(_BYTE *, void *, int, int, _DWORD, int))(v13 + 428))(this, v14, -1, -1, 0, 1) ) /*0x51dd54*/
    {
      v15 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(this->q048)(this, v39); /*0x51dd6e*/
      Int64::Equal(v15, a2); /*0x51dd73*/
      v16 = Math::CalcAngle((double)v15[1] - (double)a2[1], (double)*a2 - (double)*v15); /*0x51dd8f*/
      v17 = Math::RoundToInt((v16 - 1.570796326794897) * -10430.06004058427); /*0x51dda0*/
      v18 = v34; /*0x51ddae*/
      v31 = (double)((__int16)(v17 + 0x7FFF) - 0x3FFF) * -0.00009587672516830327; /*0x51ddcf*/
      v29 = (double)v33; /*0x51dde1*/
      v19 = Math::SinCos(v31); /*0x51dde5*/
      LODWORD(v29) = Math::RoundToInt(v29 - v19 * 128.0); /*0x51ddfd*/
      v20 = Math::ArcTan2(v31); /*0x51de07*/
      v21 = Math::RoundToInt(v20 * 128.0 + (double)v32); /*0x51de19*/
      v36 = LODWORD(v29); /*0x51de26*/
      v35 = v21; /*0x51de32*/
      v37 = v18; /*0x51de36*/
      v27 = BYTE1(*((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], &v32) + 80)) & 1; /*0x51de52*/
      v22 = Coord::To_Cell(MEMORY[0x87F7E8], &v32); /*0x51de61*/
      v23 = ObjectPlacement::CalcPosition(v22, v38, &v35, 1, v27, 0); /*0x51de68*/
      *a2 = *v23; /*0x51de71*/
      a2[1] = v23[1]; /*0x51de76*/
      a2[2] = v23[2]; /*0x51de7c*/
    }
  }
  if ( *a2 == dword_A8ED54[299] && a2[1] == dword_A8ED54[300] && a2[2] == dword_A8ED54[301] /*0x51deb0*/
    || !FootClass::Destru_vt319(this, a2)
    || !this->isAliveFlag )
  {
    return 0; /*0x51deff*/
  }
  v35 = this->q027; /*0x51dec6*/
  v24 = *(_DWORD *)this; /*0x51deca*/
  v36 = this->owningHouseIndex; /*0x51decf*/
  v37 = this->q029; /*0x51dedb*/
  (*(void (__thiscall **)(_BYTE *, int *))(v24 + 244))(this, &v35); /*0x51dee1*/
  (*(void (__thiscall **)(_BYTE *, int *))(this->flashing)(this, a2); /*0x51deec*/
  return 1; /*0x51def4*/
}


// ==== 0x0051DF10  InfantryClass::CancelMovement  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::CancelMovement(int this)
{
  if ( !*(_DWORD *)(this + 1652) ) /*0x51df13*/
    WinAPI::Wrapper(-2147467261); /*0x51df22*/
  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 172))(*(_DWORD *)(this + 1652)); /*0x51df30*/
  *(_DWORD *)(this + 1768) = 2; /*0x51df38*/
  *(_BYTE *)(this + 1755) = 0; /*0x51df42*/
  *(_DWORD *)(this + 1732) = 0; /*0x51df49*/
  return TechnoClass::CleanupDirection((_BYTE *)this); /*0x51df58*/
}


// ==== 0x0051DF60  InfantryClass::FireWeaponWithCleanup  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::FireWeaponWithCleanup(#377 *this, int a2, int a3)
{
  int v4; // edi
  int v5; // eax

  this->unknownBool68D = 0; /*0x51df70*/
  v4 = TechnoClass::FireWeapon(this); /*0x51df7c*/
  if ( v4 ) /*0x51df80*/
  {
    if ( !this->inLimbo ) /*0x51df82*/
    {
      if ( *(_BYTE *)(this->animation + 3775) ) /*0x51df92*/
      {
        if ( !this->q0BF ) /*0x51df9c*/
        {
          v5 = *(_DWORD *)this; /*0x51dfa6*/
          this->q1B5 = 300; /*0x51dfaa*/
          if ( (*(int (__thiscall **)(#377 *))(v5 + 388))(this) == 1 /*0x51dfcc*/
            || (*(int (__thiscall **)(#377 *))(this->q610)(this) == 15 )
          {
            (*(void (__thiscall **)(#377 *, int, _DWORD))(this->q7A0)(this, 5, 0); /*0x51dfd6*/
          }
        }
      }
    }
  }
  return v4; /*0x51dfde*/
}


// ==== 0x0051DFF0  InfantryClass::MoveToCell  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::MoveToCell(int this, int *a2, int a3)
{
  int *v3; // esi
  int GroundHeight; // ebx
  bool v6; // al
  _DWORD *v7; // eax
  int *v8; // eax
  int v9; // ecx
  char v11; // [esp-Ch] [ebp-30h]
  int v12; // [esp+Ch] [ebp-18h] BYREF
  int v13; // [esp+10h] [ebp-14h]
  int v14; // [esp+14h] [ebp-10h]
  int v15[3]; // [esp+18h] [ebp-Ch] BYREF

  v3 = a2; /*0x51dff5*/
  GroundHeight = Cell::GetGroundHeight(a2); /*0x51e007*/
  v12 = *v3; /*0x51e00d*/
  v13 = v3[1]; /*0x51e014*/
  v14 = v3[2]; /*0x51e01d*/
  if ( v14 == GroundHeight ) /*0x51e021*/
  {
    v6 = 1; /*0x51e078*/
    if ( !MEMORY[0xA8E7AC] ) /*0x51e02e*/
    {
      LOWORD(a2) = *v3 / 256; /*0x51e045*/
      HIWORD(a2) = v3[1] / 256; /*0x51e05e*/
      if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&a2, 1) ) /*0x51e06b*/
        v6 = 0; /*0x51e02e*/
    }
    v11 = v6; /*0x51e081*/
    v7 = Coord::To_Cell(&MEMORY[0x87F7E8], v3); /*0x51e08e*/
    v8 = ObjectPlacement::CalcPosition(v7, v15, v3, v11, 0, 0); /*0x51e095*/
    v12 = *v8; /*0x51e0a4*/
    v9 = v8[1]; /*0x51e0aa*/
    v13 = v9; /*0x51e0ad*/
    if ( v12 == MEMORY[0xA8F200] && v9 == MEMORY[0xA8F204] && v8[2] == MEMORY[0xA8F208] ) /*0x51e0c4*/
      return 0; /*0x51e0c4*/
    v14 = GroundHeight; /*0x51e0c6*/
  }
  if ( !FootClass::DispatchInput((double *)this, (int)&v12, a3) ) /*0x51e0dd*/
    return 0; /*0x51e12b*/
  if ( !*(_DWORD *)(*(_DWORD *)(this + 1728) + 1512) ) /*0x51e0e5*/
    *(_BYTE *)(this + 1051) = 0; /*0x51e0ef*/
  if ( v14 <= GroundHeight + MEMORY[0xA8F234] ) /*0x51e103*/
    (*(void (__thiscall **)(int, int *))(this->flashing)(this, &v12); /*0x51e10e*/
  *(_DWORD *)(this + 1768) = 2; /*0x51e114*/
  return 1; /*0x51e11e*/
}


// ==== 0x0051E140  InfantryClass::SelectAutoTarget  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::SelectAutoTarget(int this, unsigned int a2, __int64 a3)
{
  int v4; // ecx
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  double v7; // st7
  unsigned int v9; // edi
  _BYTE *v10; // ecx
  int v11; // eax
  char v12; // cl
  _DWORD **v13; // eax
  int v14; // eax
  _DWORD **v15; // eax
  int v16; // eax
  int v17; // [esp+1Ch] [ebp-20h]
  int v18; // [esp+20h] [ebp-1Ch]
  _BYTE v19[12]; // [esp+24h] [ebp-18h] BYREF
  _DWORD v20[3]; // [esp+30h] [ebp-Ch] BYREF

  if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) || !*(_BYTE *)(*(_DWORD *)(this + 1728) + 3779) ) /*0x51e160*/
  {
    v9 = a2; /*0x51e218*/
  }
  else
  {
    v4 = *(_DWORD *)(*(_DWORD *)(this + 540) + 21728); /*0x51e174*/
    if ( v4 ) /*0x51e17c*/
    {
      v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v19); /*0x51e18e*/
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(this->q048)(this, v20); /*0x51e197*/
      v17 = v6[1] - v5[1]; /*0x51e1b5*/
      v18 = v6[2] - v5[2]; /*0x51e1bf*/
      v7 = Math::Sqrt((double)(*v6 - *v5) * (double)(*v6 - *v5) + (double)v18 * (double)v18 + (double)v17 * (double)v17); /*0x51e1e4*/
      if ( (int)Math::RoundToInt(v7) < 3840 ) /*0x51e1f6*/
        return *(_DWORD *)(*(_DWORD *)(this + 540) + 21728); /*0x51e209*/
    }
    v9 = a2 | 0x200; /*0x51e210*/
  }
  if ( *(_BYTE *)(*(_DWORD *)(this + 1728) + 3782) ) /*0x51e222*/
  {
    v10 = *(_BYTE **)(this + 1444); /*0x51e22c*/
    if ( v10 ) /*0x51e234*/
    {
      if ( (v10[20] & 1) != 0 /*0x51e278*/
        && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v10 + 128))(v10)
        && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1444) + 132))(*(_DWORD *)(this + 1444))
                     + 3220)
        && ObjectClass::DistanceTo((void *)this, *(_DWORD *)(this + 1444)) < 3840 )
      {
        return *(_DWORD *)(this + 1444); /*0x51e285*/
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(this->unloadTimer)(this) ) /*0x51e28c*/
    goto LABEL_21; /*0x51e294*/
  v11 = *(_DWORD *)(this + 1728); /*0x51e296*/
  v12 = *(_BYTE *)(v11 + 3782); /*0x51e2a4*/
  if ( !*(_BYTE *)(v11 + 3774) ) /*0x51e29c*/
  {
    if ( !v12 ) /*0x51e2ae*/
      return 0; /*0x51e2b7*/
    goto LABEL_20; /*0x51e2ae*/
  }
  if ( v12 ) /*0x51e2bc*/
LABEL_20:
    v9 = v9 & 0xFFFFFF4B | 0x10; /*0x51e2be*/
LABEL_21:
  if ( (v9 & 0x1B978) == 0 ) /*0x51e2cd*/
  {
    if ( *(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(this->q3F8)(this, 0) ) /*0x51e2db*/
    {
      v13 = (_DWORD **)(*(int (__thiscall **)(int, _DWORD))(this->q3F8)(this, 0); /*0x51e2e6*/
      LOBYTE(v14) = Building::GetRenderType(*v13); /*0x51e2ee*/
      v9 |= v14; /*0x51e2f3*/
    }
    if ( *(_DWORD *)(*(int (__thiscall **)(int, int))(this->q3F8)(this, 1) ) /*0x51e301*/
    {
      v15 = (_DWORD **)(*(int (__thiscall **)(int, int))(this->q3F8)(this, 1); /*0x51e30c*/
      LOBYTE(v16) = Building::GetRenderType(*v15); /*0x51e314*/
      v9 |= v16; /*0x51e319*/
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(this->unloadTimer)(this) /*0x51e33d*/
    && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(this->q3F8)(this, 0) + 172)
                + 329) )
  {
    v9 &= 0xFFFFFF4B; /*0x51e347*/
  }
  if ( (*(_BYTE *)(*(_DWORD *)(this + 1728) + 3778) || TechnoTypeClass::HasVoiceResponse((float *)this, 14)) /*0x51e370*/
    && !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) )
  {
    v9 |= 0x20u; /*0x51e379*/
  }
  if ( *(_BYTE *)(*(_DWORD *)(this + 1728) + 3781) ) /*0x51e382*/
    v9 |= 0x240u; /*0x51e38c*/
  return FootClass::SelectAutoTarget_Cloaked(v9, a3, HIDWORD(a3)); /*0x51e1fe*/
}


// ==== 0x0051F190  InfantryClass::ValidateTargetAndMove  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::ValidateTargetAndMove(int *this, int a2, int *a3, int a4)
{
  int v5; // eax

  v5 = ((__int64 (__thiscall *)(int *, int *, int))*(_DWORD *)(*this + 116))(this, a3, a4); /*0x51f1a1*/
  switch ( v5 ) /*0x51f1b4*/
  {
    case 9: /*0x51f1b4*/
    case 28: /*0x51f1b4*/
    case 29: /*0x51f1b4*/
      v5 = 9; /*0x51f1bb*/
      break; /*0x51f1c0*/
    case 27: /*0x51f1b4*/
    case 57: /*0x51f1b4*/
      v5 = 5; /*0x51f1c2*/
      break; /*0x51f1c2*/
    default:
      break;
  }
  if ( a3 == this && v5 == 5 ) /*0x51f1ce*/
    return 0; /*0x51f1d2*/
  if ( this->storedTiberium ) /*0x51f1d8*/
    return 0; /*0x51f1e4*/
  return FootClass::ValidateMove(this, v5, a3, a4); /*0x51f1d0*/
}


// ==== 0x0051F250  InfantryClass::ProcessUpdate  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::_vt80(_BYTE *this, int a2, __int16 *a3, __int16 *a4, void **a5)
{
  int v6; // eax

  v6 = this->q1B1; /*0x51f25d*/
  if ( (v6 == 27 || v6 == 28 || v6 == 29 || v6 == 30) /*0x51f285*/
    && (*(int (__thiscall **)(_BYTE *, __int16 *, _DWORD, void **))(this->estimatedHealth)(this, a3, 0, a5) == 2 )
  {
    return 0; /*0x51f289*/
  }
  if ( this->storedTiberium ) /*0x51f28f*/
    return 0; /*0x51f29b*/
  return ObjectClass::SpawnInfantry(this, a2, a3, a4, a5); /*0x51f287*/
}


// ==== 0x0051F2C0  InfantryClass::GetTooltipName  this=InfantryClass  sig=csp ====
wchar_t *__thiscall InfantryClass::GetTooltipName(void *this)
{
  if ( this->Technician ) /*0x51f2c3*/
    return GetStringCSF(aTxtTechnician, 0, aDRa2mdpostInfa, 4636); /*0x51f2de*/
  if ( !(*(unsigned __int8 (__thiscall **)(void *))(this->missionData)(this) /*0x51f300*/
    || (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)this + 135), HouseClass_Player) )
  {
    return *(wchar_t **)(this->animation + 96); /*0x51f321*/
  }
  return *(wchar_t **)((*(int (__thiscall **)(void *, int))(this->q0CC)(this, 1) + 96); /*0x51f2e3*/
}


// ==== 0x0051F330  InfantryClass::FindPathToBuilding  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::FindPathToBuilding(int *this)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax
  int v5; // edx
  int v6; // edi
  _DWORD v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(int *, _DWORD))(*this + 740))(this, 0); /*0x51f33b*/
  v3 = this->target; /*0x51f341*/
  if ( !v3 || (result = (*(int (__thiscall **)(int *, int, int))(*this + 936))(this, v3, v2), !(_BYTE)result) ) /*0x51f359*/
  {
    if ( (v7[0] = this->q027, /*0x51f3a5*/
          v7[1] = this->owningHouseIndex,
          v5 = *this,
          v7[2] = this->q029,
          v6 = (*(int (__thiscall **)(int *, int, _DWORD *, _DWORD))(v5 + 964))(this, 1, v7, 0),
          (result = this->target) == 0)
      && !v6
      || (result = (*(int (__thiscall **)(int *, int))(*this + 968))(this, v6), !v6) )
    {
      if ( this->q02B != 5 ) /*0x51f3ae*/
      {
        result = (*(int (__thiscall **)(int *))(*this + 132))(this); /*0x51f3b4*/
        if ( !*(_BYTE *)(result + 3476) ) /*0x51f3ba*/
          return (*(int (__thiscall **)(int *, _DWORD, int))(*this + 1156))(this, 0, 1); /*0x51f3cc*/
      }
    }
  }
  return result; /*0x51f3d2*/
}


// ==== 0x0051F3E0  InfantryClass::EnterBuilding  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::EnterBuilding(float *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  int v6; // ecx
  _BYTE *v7; // eax
  int v8; // eax
  char *MissionControl; // eax
  int v10; // esi

  if ( (*(_BYTE *)(this->animation + 3778) || TechnoClass::HasVoiceResponse(this, 14))
    && (v2 = this->target) != 0
    && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 6
    && (v3 = this->target, v4 = *(_DWORD *)(v3 + 1312), *(_BYTE *)(v4 + 5495))
    && !*(_BYTE *)(v4 + 5889) )
  {
    (*(void (__thiscall **)(float *, int, int))(this->turretChargeTimer)(this, v3, 1);
    (*(void (__thiscall **)(float *, int, _DWORD))(this->q7A0)(this, 17, 0);
    return 1;
  }
  else if ( !(unsigned __int8)House::IsCurrentPlayer(*((#375 **)this + 135))
         && (v6 = this->target) != 0
         && (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6) == 6
         && ((v7 = (_BYTE *)this->animation, v7[3774])
          || (v7[3764] || v7[3765]) && BuildingClass::CanRepair(*((_DWORD **)this + 173), (int)this)) )
  {
    (*(void (__thiscall **)(float *, _DWORD, int))(this->turretChargeTimer)(this, this->target, 1);
    (*(void (__thiscall **)(float *, int))(this->__pad_7C0)(this, 8);
    return 1;
  }
  else if ( (unsigned __int8)House::IsCurrentPlayer(*((#375 **)this + 135))
         && ((v8 = this->q1B1, v8 == 27) || v8 == 28 || v8 == 29 || v8 == 30) )
  {
    (*(void (__thiscall **)(float *))(this->q428)(this);
    MissionControl = MissionClass::GetMissionControl(this);
    v10 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
    return v10 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2);
  }
  else
  {
    return InfantryClass::ScanTarget((int)this);
  }


// ==== 0x0051F540  InfantryClass::ProcessEnterOrRepair  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessEnterOrRepair(#375 **this)
{
  int v2; // ecx
  _BYTE *v3; // eax
  int v5; // eax

  if ( !(unsigned __int8)House::IsCurrentPlayer(this->owner) /*0x51f591*/
    && (v2 = (int)this->target) != 0
    && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 6
    && ((v3 = this->animation, v3[3774]) || (v3[3764] || v3[3765]) && BuildingClass::CanRepair(this->target, (int)this)) )
  {
    (*((void (__thiscall **)(#375 **, _DWORD, int))*this + 288))(this, this->target, 1); /*0x51f5a7*/
    (*((void (__thiscall **)(#375 **, int))*this + 124))(this, 8); /*0x51f5b3*/
    return 1; /*0x51f5b9*/
  }
  else if ( !(unsigned __int8)House::IsCurrentPlayer(this->owner) /*0x51f5e9*/
         && ((v5 = (int)this->q1B1, v5 == 27) || v5 == 28 || v5 == 29 || v5 == 30)
         && !this->target )
  {
    (*((void (__thiscall **)(#375 **, int, _DWORD, _DWORD))*this + 342))(this, 31, 0, 0); /*0x51f5fd*/
    return 1; /*0x51f603*/
  }
  else
  {
    return InfantryClass::ProcessDeploy(this); /*0x51f60c*/
  }
}


// ==== 0x0051F620  InfantryClass::FindIdleMovePosition  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::FindIdleMovePosition(int *this)
{
  int result; // eax

  result = InfantryClass::GetIdleTimer(this); /*0x51f623*/
  if ( result == -1 ) /*0x51f62b*/
    return FootClass::FindMovePosition((int)this); /*0x51f62f*/
  return result; /*0x51f634*/
}


// ==== 0x0051F640  InfantryClass::FindIdleAITarget  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::FindIdleAITarget(int *this)
{
  int result; // eax

  result = InfantryClass::GetIdleTimer(this); /*0x51f643*/
  if ( result == -1 ) /*0x51f64b*/
    return FootClass::FindAITarget(this); /*0x51f64f*/
  return result; /*0x51f654*/
}


// ==== 0x0051F660  InfantryClass::ProcessIvanBombResult  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessIvanBombResult(_DWORD *this)
{
  int v2; // eax
  #375 *v3; // eax

  v2 = this->SequenceAnim; /*0x51f663*/
  if ( v2 != 27 && v2 != 28 && v2 != 29 && v2 != 30 ) /*0x51f67b*/
    return FootClass::Destru_vt139(this); /*0x51f67b*/
  v3 = (#375 *)(*(int (__thiscall **)(_DWORD *))(*this + 60))(this); /*0x51f681*/
  if ( (unsigned __int8)House::IsCurrentPlayer(v3) ) /*0x51f686*/
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, 0, 1); /*0x51f697*/
    return 1; /*0x51f6a3*/
  }
  if ( *(int *)(this->Type + 1732) > -1 ) /*0x51f6b1*/
    return FootClass::Destru_vt139(this); /*0x51f6d9*/
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 1368))(this, 31, 0, 0); /*0x51f6bd*/
  return *(_DWORD *)(*(_DWORD *)(this->Type + 3644) + 1120); /*0x51f6a2*/
}


// ==== 0x0051F6E0  InfantryClass::ProcessIvanBomb  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::ProcessIvanBomb(_DWORD *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // edi
  __int16 *v7; // eax
  void *v8; // eax
  int v9; // edx
  _BYTE v11[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = this->Type;
  if ( !*(_BYTE *)(v2 + 3784) )
    return AbstractClass::COMStub_143();
  v3 = this->SequenceAnim;
  v4 = -1;
  if ( v3 == 27 || v3 == 28 || v3 == 29 || v3 == 30 )
  {
    if ( *(int *)(v2 + 1732) <= -1 )
      (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 31, 1, 0);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 1368))(this, 27, 1, 0);
    v5 = (*(int (__thiscall **)(_DWORD *))(*this + 1008))(this);
    if ( (unsigned __int8)IsNonNullPtr(v5) && *(_BYTE *)(*(_DWORD *)v5 + 336) )
    {
      if ( (unsigned __int8)ObjectClass::StepCleanup(this, aDeso) )
      {
        v4 = *(_DWORD *)(*(_DWORD *)(this->Type + 3644) + 976) + 1;
      }
      else
      {
        v6 = *this;
        v7 = (__int16 *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 440))(this, v11);
        v8 = CellCoord::To_CellObj(MEMORY[0x87F7E8], v7);
        (*(void (__thiscall **)(_DWORD *, void *))(v6 + 968))(this, v8);
      }
    }
    v9 = this->Type;
    if ( *(int *)(v9 + 1732) > -1 )
      v4 = *(_DWORD *)(v9 + 1732);
  }
  (*(void (__thiscall **)(_DWORD *, int))(*this + 496))(this, 5);
  (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, 0, 1);
  if ( v4 > -1 )
    return v4;
  else
    return AbstractClass::COMStub_143();


// ==== 0x0051F800  InfantryClass::HandleCursorOverCell  this=InfantryClass  sig=csp ====
int __userpurge InfantryClass::HandleCursorOverCell@<eax>(int this@<ecx>, __int16 *a1, IUnknown *aP2, IUnknown aP3)
{
  InfantryClass *v6; // ebx
  void *v7; // eax
  void *v8; // eax
  InfantryTypeClass *v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  _DWORD *v14; // eax
  int v15; // ebp
  int v16; // esi
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int *v20; // ecx
  void *v21; // eax
  _DWORD *v22; // eax
  int v23; // eax
  _DWORD v24[3]; // [esp+Ch] [ebp-Ch] BYREF
  IUnknown *aP2a; // [esp+20h] [ebp+8h]

  if ( !(unsigned __int8)House::IsHumanPlayer(*(#375 **)(this + 540)) ) /*0x51f80e*/
    return 0; /*0x51f81f*/
  v6 = (InfantryClass *)FootClass::HandleCursorWithCheck((int *)this, a1, aP2, (InfantryClass *)aP3.field_0); /*0x51f83c*/
  if ( TechnoClass::GetValue((_DWORD *)this, (ObjectClass *)0xFFFFFFFF) < 0 /*0x51f859*/
    && (unsigned __int8)House::IsHumanPlayer(*(#375 **)(this + 540))
    && v6 == (InfantryClass *)5 )
  {
    v6 = (InfantryClass *)26; /*0x51f85b*/
  }
  if ( *(_BYTE *)(*(_DWORD *)(this + 1728) + 3476) && (v6 == (InfantryClass *)1 || v6 == (InfantryClass *)2) ) /*0x51f878*/
  {
    v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a1); /*0x51f880*/
    if ( InfantryClass::ValidateAttackPosition((int)v7) /*0x51f89d*/
      || (v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a1), InfantryClass::CanMoveThroughCell((int)v8)) )
    {
      v6 = 0; /*0x51f8a6*/
    }
  }
  if ( !(unsigned __int8)House::IsHumanPlayer(*(#375 **)(this + 540)) ) /*0x51f8ae*/
    goto LABEL_33; /*0x51f8ae*/
  v9 = *(InfantryTypeClass **)(this + 1728); /*0x51f8bb*/
  if ( !v9->?[2900] ) /*0x51f8c1*/
    goto LABEL_33; /*0x51f8c1*/
  v10 = *(_DWORD *)(this + 1732); /*0x51f8cf*/
  if ( v10 != 27 && v10 != 28 && v10 != 29 && v10 != 30 ) /*0x51f8e7*/
    goto LABEL_33; /*0x51f8e7*/
  if ( v6 != (InfantryClass *)1 ) /*0x51f8f0*/
  {
    if ( v6 == (InfantryClass *)5 ) /*0x51f8f5*/
    {
      if ( v9->?[824] ) /*0x51f8fb*/
      {
        v11 = (*(int (__thiscall **)(int, _DWORD))(this->turretRecoil)(this, 0); /*0x51f90b*/
        v12 = *a1 << 8; /*0x51f91b*/
        v24[1] = (a1[1] << 8) + 128; /*0x51f92b*/
        v13 = *(_DWORD *)this; /*0x51f92f*/
        v24[0] = v12 + 128; /*0x51f935*/
        v24[2] = 0; /*0x51f93c*/
        if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *, int))(v13 + 356))(this, v24, v11) ) /*0x51f944*/
          goto LABEL_24; /*0x51f94c*/
      }
      goto LABEL_23; /*0x51f94c*/
    }
LABEL_33:
    if ( v6 == (InfantryClass *)1 ) /*0x51f9aa*/
    {
      v21 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a1); /*0x51f9b2*/
      if ( InfantryClass::IsInBounds((int)v21) ) /*0x51f9b9*/
      {
        CellCoord::To_CellObj(&MEMORY[0x87F7E8], a1); /*0x51f9c9*/
        return 36 - (globalHelper_084F10(this) != 0); /*0x51f9e2*/
      }
    }
    goto LABEL_24; /*0x51f9c0*/
  }
LABEL_23:
  v6 = (InfantryClass *)2; /*0x51f94e*/
LABEL_24:
  v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a1); /*0x51f953*/
  v15 = 0; /*0x51f965*/
  v16 = 0; /*0x51f967*/
  if ( (MEMORY[0xA8B230]->nextScenario[0] & 0x1000) != 0 ) /*0x51f96e*/
  {
    if ( (_BYTE)aP2 ) /*0x51f97a*/
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
  if ( !*(_BYTE *)(*(_DWORD *)(this + 1728) + 3779) /*0x51fa16*/
    || !v15
    || !(unsigned __int8)House::IsHumanPlayer(*(#375 **)(this + 540)) )
  {
    goto LABEL_55; /*0x51fa16*/
  }
  if ( *(_BYTE *)(v15 + 5814) ) /*0x51fa1f*/
  {
    v22 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v16 + 72))(v16, v24); /*0x51fa32*/
    LOWORD(aP2a) = *v22 / 256; /*0x51fa45*/
    HIWORD(aP2a) = v22[1] / 256; /*0x51fa5d*/
    aP3.field_0 = (int)aP2a; /*0x51fa66*/
    v23 = -(CellClass::CheckConnectivity((int *)&MEMORY[0x87F7E8], &aP3) != 0); /*0x51fa77*/
    LOBYTE(v23) = v23 & 0xFD; /*0x51fa79*/
    v6 = (InfantryClass *)(v23 + 32); /*0x51fa7e*/
    goto LABEL_47; /*0x51fa80*/
  }
  if ( !*(_BYTE *)(v15 + 3276) ) /*0x51fa82*/
  {
LABEL_55:
    if ( v6 == (InfantryClass *)5 && !(*(unsigned __int8 (__thiscall **)(int))(this->unloadTimer)(this) ) /*0x51fa9c*/
      v6 = (InfantryClass *)59; /*0x51faa6*/
    goto LABEL_47; /*0x51faa6*/
  }
  v6 = (InfantryClass *)9; /*0x51fa8c*/
LABEL_47:
  if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)(this + 540)) /*0x51fac5*/
    && !v6
    && !*(_BYTE *)(*(_DWORD *)(this + 1728) + 3476) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(this->q0A0)(this) ) /*0x51fad3*/
      return 2; /*0x51fadd*/
  }
  return (int)v6; /*0x51f817*/
}


// ==== 0x0051FAF0  InfantryClass::GetTypePtr  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::_vt34(_DWORD *this)
{
  return this->Type; /*0x51faf6*/
}


// ==== 0x0051FB00  ObjectClass::PlaceScenarioInfantry  this=IUnknown  sig=csp ====
int __thiscall PlaceScenarioInfantry(char *this)
{
  int result; // eax
  CCINIClass *v3; // ecx
  unsigned __int8 *StringByIndex; // eax
  char *v5; // eax
  int v6; // eax
  IUnknown *v7; // edi
  char *v8; // eax
  INIClass *ExitCellByName; // esi
  int v10; // eax
  InfantryClass *v11; // edi
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
  CCINIClass *v25; // ebx
  char *v26; // eax
  CCINIClass *v27; // esi
  char *v28; // eax
  void *v29; // eax
  int v30; // eax
  char *v31; // eax
  CCINIClass *v32; // eax
  char *v33; // eax
  char *v34; // eax
  char v35; // al
  CCINIClass *GroundHeight; // eax
  char *v37; // eax
  char *v38; // eax
  int *Type; // esi
  int v40; // eax
  int v41; // esi
  int v42; // eax
  int v43; // [esp+4h] [ebp-98h] BYREF
  int v44; // [esp+8h] [ebp-94h]
  INIClass *v45; // [esp+Ch] [ebp-90h]
  int i; // [esp+10h] [ebp-8Ch]
  int v47; // [esp+14h] [ebp-88h]
  VectorClass *v48; // [esp+18h] [ebp-84h]
  INIClass String[2]; // [esp+1Ch] [ebp-80h] BYREF

  INIClass::ResetSection(this); /*0x51fb09*/
  result = INIClass::GetKeyCount(this, (INIClass *)g_INI_Key_Infantry); /*0x51fb16*/
  v3 = 0; /*0x51fb1b*/
  v47 = result; /*0x51fb1f*/
  for ( i = 0; i < v47; ++i ) /*0x51fb27*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this, (CCINIClass *)g_INI_Key_Infantry, v3); /*0x51fb3a*/
    INIClass::GetString((unsigned __int8 ***)this, (INIClass *)g_INI_Key_Infantry, StringByIndex, 0, String, 128); /*0x51fb54*/
    v5 = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x51fb63*/
    v6 = HouseClass::FindByName(v5); /*0x51fb6d*/
    if ( v6 != -1 ) /*0x51fb75*/
    {
      v7 = *(IUnknown **)&HouseClass_Array->__pad_0[4 * v6]; /*0x51fb88*/
      v8 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x51fb8b*/
      ExitCellByName = (INIClass *)Factory::FindExitCellByName(v8); /*0x51fb9a*/
      if ( ExitCellByName != (INIClass *)-1 ) /*0x51fb9f*/
      {
        v10 = __2_YAPAXI_Z(0x6F0u); /*0x51fbaa*/
        if ( v10 ) /*0x51fbb4*/
        {
          v11 = (InfantryClass *)InfantryClass::Construct( /*0x51fbcc*/
                                   v10,
                                   *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[336] + 4 * (_DWORD)ExitCellByName),
                                   v7);
          if ( v11 ) /*0x51fbd0*/
          {
            v12 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x51fbdd*/
            v48 = (VectorClass *)atoi(v12); /*0x51fbeb*/
            if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[656] < 4 ) /*0x51fbfe*/
            {
              v18 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x51fc27*/
              v19 = atoi(v18); /*0x51fc2d*/
              LOWORD(v17) = v19 % 128; /*0x51fc43*/
              v16 = v19 / 128; /*0x51fc4a*/
              v17 = (__int16)v17; /*0x51fc4d*/
            }
            else
            {
              v13 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x51fc00*/
              v14 = atoi(v13); /*0x51fc12*/
              v15 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x51fc14*/
              LOWORD(v16) = atoi(v15); /*0x51fc1a*/
              v17 = v14; /*0x51fc22*/
            }
            v43 = (v17 << 8) + 128; /*0x51fc6c*/
            v44 = ((__int16)v16 << 8) + 128; /*0x51fc70*/
            v45 = 0; /*0x51fc74*/
            v20 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x51fc78*/
            v21 = atoi(v20); /*0x51fc7e*/
            v22 = MEMORY[0x89E9F4][3 * v21]; /*0x51fcc8*/
            v23 = MEMORY[0x89E9F8][3 * v21]; /*0x51fccb*/
            v43 = MEMORY[0x89E9F0][3 * v21] + ((v43 / 256) << 8); /*0x51fcce*/
            v44 = ((v44 / 256) << 8) + v22; /*0x51fcd9*/
            v45 = (INIClass *)((char *)v45 + v23); /*0x51fcdd*/
            v24 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x51fce1*/
            v25 = (CCINIClass *)LookupWaypointName(v24); /*0x51fcf0*/
            v26 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x51fcf9*/
            if ( v26 ) /*0x51fd03*/
              v27 = (CCINIClass *)atoi(v26); /*0x51fd0e*/
            else
              v27 = 0; /*0x51fd12*/
            v28 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x51fd1b*/
            if ( v28 ) /*0x51fd25*/
            {
              v29 = (void *)ObjectTypeClass::FindByName(v28); /*0x51fd29*/
              if ( v29 ) /*0x51fd30*/
              {
                v30 = TeamClass::FindOrCreate(v29); /*0x51fd34*/
                if ( v30 ) /*0x51fd3b*/
                  ObjectClass::SetReference(v11, v30); /*0x51fd40*/
              }
            }
            v31 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x51fd4c*/
            if ( v31 ) /*0x51fd56*/
            {
              v32 = (CCINIClass *)atoi(v31); /*0x51fd59*/
              FootClass::SetField((float *)&v11->initialOwner, v32); /*0x51fd68*/
            }
            v33 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x51fd74*/
            if ( v33 ) /*0x51fd7e*/
              v11->displayProductionTo[0] = atoi(v33); /*0x51fd89*/
            v34 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x51fd96*/
            if ( v34 ) /*0x51fda0*/
            {
              v35 = atoi(v34) != 0; /*0x51fdad*/
              v11->onBridge = v35; /*0x51fdb2*/
              if ( v35 ) /*0x51fdb8*/
                GroundHeight = (CCINIClass *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1864] + Cell::GetGroundHeight(&v43)); /*0x51fdc9*/
              else
                GroundHeight = (CCINIClass *)Cell::GetGroundHeight(&v43); /*0x51fddb*/
              v45 = (INIClass *)GroundHeight; /*0x51fde0*/
            }
            v37 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x51fdeb*/
            if ( v37 ) /*0x51fdf5*/
              v11->__pad_3F7[42] = atoi(v37) != 0; /*0x51fe05*/
            v38 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x51fe12*/
            if ( v38 ) /*0x51fe1c*/
              v11->__pad_3F7[43] = atoi(v38) != 0; /*0x51fe2c*/
            if ( Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v43) == g_CellClassArray /*0x51fe52*/
              || !(*(unsigned __int8 (__thiscall **)(InfantryClass *, int *, CCINIClass *))(*(_DWORD *)v11->__pad_0 + 216))(
                    v11,
                    &v43,
                    v27) )
            {
              (*(void (__thiscall **)(InfantryClass *, int))(*(_DWORD *)v11->__pad_0 + 32))(v11, 1); /*0x51febe*/
            }
            else
            {
              Type = (int *)v11->Type; /*0x51fe60*/
              v40 = Math::RoundToInt((double)(int)v48 * 0.00390625 * (double)Type[40]); /*0x51fe72*/
              v11->health = v40; /*0x51fe77*/
              v41 = Type[40]; /*0x51fe7a*/
              if ( v40 > v41 - 3 ) /*0x51fe85*/
                v11->health = v41; /*0x51fe87*/
              if ( v11->health < 1 ) /*0x51fe94*/
                v11->health = 1; /*0x51fe96*/
              v42 = *(_DWORD *)v11->__pad_0; /*0x51fe9c*/
              v11->estimatedHealth = v11->health; /*0x51fea3*/
              (*(void (__thiscall **)(InfantryClass *, CCINIClass *, _DWORD))(v42 + 488))(v11, v25, 0); /*0x51fea6*/
              (*(void (__thiscall **)(InfantryClass *))(*(_DWORD *)v11->__pad_0 + 492))(v11); /*0x51feb0*/
            }
          }
        }
      }
    }
    result = v47; /*0x51fec5*/
    v3 = (CCINIClass *)(i + 1); /*0x51fec9*/
  }
  return result; /*0x51fed9*/
}


// ==== 0x0051FEF0  ObjectClass::SaveInfantryToINI  this=ObjectClass  sig=csp ====
int __usercall SaveInfantryToINI@<eax>(int a1@<ecx>, int a2@<edi>, int a3@<esi>)
{
  int result; // eax
  int v4; // esi
  unsigned int v5; // edi
  int v6; // ebp
  const char *v7; // ebx
  int v8; // edx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  double HealthRatio; // st7
  int v13; // eax
  int v14; // [esp-34h] [ebp-F0h]
  int v15; // [esp-30h] [ebp-ECh]
  int v16; // [esp-2Ch] [ebp-E8h]
  const char *v17; // [esp-28h] [ebp-E4h]
  int v18; // [esp-24h] [ebp-E0h]
  char *v19; // [esp-20h] [ebp-DCh]
  const char *v20; // [esp-20h] [ebp-DCh]
  int v21; // [esp-1Ch] [ebp-D8h]
  int v22; // [esp-18h] [ebp-D4h]
  int v23; // [esp-14h] [ebp-D0h]
  int v24; // [esp-14h] [ebp-D0h]
  int v25; // [esp-10h] [ebp-CCh]
  int v26; // [esp-Ch] [ebp-C8h]
  int i; // [esp+8h] [ebp-B4h]
  char *v30; // [esp+14h] [ebp-A8h]
  _DWORD v31[3]; // [esp+20h] [ebp-9Ch] BYREF
  int v32; // [esp+2Ch] [ebp-90h] BYREF
  char Buffer[12]; // [esp+30h] [ebp-8Ch] BYREF
  char Source[128]; // [esp+3Ch] [ebp-80h] BYREF

  INIClass::ClearSection(a1, (int)g_INI_Key_Infantry, 0); /*0x51ff02*/
  result = 0; /*0x51ff0d*/
  for ( i = 0; result < MEMORY[0xA83DF8]; i = result ) /*0x51ff15*/
  {
    v4 = *((_DWORD *)MEMORY[0xA83DEC] + result); /*0x51ff25*/
    if ( !*(_BYTE *)(v4 + 129) ) /*0x51ff28*/
    {
      sprintf(Buffer, MEMORY[0x817F6C], result); /*0x51ff41*/
      if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 388))(v4, a2, a3) == -1 ) /*0x51ff71*/
        v30 = *(char **)(v4 + 180); /*0x51ff79*/
      else
        v30 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 388))(v4); /*0x51ff89*/
      v5 = *ProgressTimer::GetValue((_WORD *)(v4 + 904), &v32); /*0x51ff9d*/
      v6 = *(_DWORD *)(v4 + 540); /*0x51ffab*/
      v7 = (const char *)(*(_DWORD *)(v4 + 1728) + 36); /*0x51ffb3*/
      v31[0] = *(_DWORD *)(v4 + 156); /*0x51ffb6*/
      v8 = *(unsigned __int8 *)(v4 + 1058); /*0x51ffbf*/
      v31[1] = *(_DWORD *)(v4 + 160); /*0x51ffc5*/
      v9 = *(unsigned __int8 *)(v4 + 1057); /*0x51ffce*/
      v31[2] = *(_DWORD *)(v4 + 164); /*0x51ffd4*/
      a3 = v8; /*0x51ffe0*/
      a2 = v9; /*0x51ffe7*/
      v23 = FootClass::GetField(v4 + 336, *(_DWORD *)(v4 + 532), *(unsigned __int8 *)(v4 + 140)); /*0x52000b*/
      v19 = FromNameIndex((int)v30); /*0x52001b*/
      LOBYTE(v10) = Input::OffsetToDirection(v31); /*0x52001c*/
      v11 = (*(int (__thiscall **)(int, char *, int, char *, _DWORD))(*(_DWORD *)v4 + 440))( /*0x52002b*/
              v4,
              Buffer,
              v10,
              v19,
              (unsigned __int8)(((v5 >> 7) + 1) >> 1));
      v14 = *(__int16 *)(*(int (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)v4 + 440))( /*0x520048*/
                          v4,
                          Buffer,
                          *(__int16 *)(v11 + 2));
      HealthRatio = BuildingClass::GetHealthRatio((int *)v4); /*0x52004b*/
      v13 = Math::RoundToInt(HealthRatio * 256.0); /*0x520056*/
      sprintf( /*0x520068*/
        Source,
        stru_825584,
        (const char *)(v6 + 90100),
        v7,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v20,
        v21,
        v22,
        v24,
        v25,
        v26);
      INIClass::SetString(v30, (unsigned __int8 *)g_INI_Key_Infantry, Buffer, Source); /*0x520085*/
      result = i; /*0x52008a*/
    }
    ++result; /*0x520094*/
  }
  return result; /*0x5200a5*/
}

