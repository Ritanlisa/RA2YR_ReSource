// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x006C0010  _TClassFactory_VTiberiumClass::GetSize  this=?$TClassFactory@VTiberiumClass@@  sig=csp ====
int __thiscall TClassFactory_TiberiumClass::GetSize(TClassFactory_VTiberiumClass__ *this)
{
  int v1; // ecx
  int v3; // [esp+4h] [ebp+4h]
  int v4; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v3 + 4); /*0x6c001a*/
  if ( v4 ) /*0x6c001d*/
  {
    *(_DWORD *)(v3 + 4) = v1 + 1; /*0x6c0020*/
    return nullsub_114(v3, v4); /*0x6c0024*/
  }
  else
  {
    *(_DWORD *)(v3 + 4) = v1 - 1; /*0x6c0029*/
    return 0; /*0x6c002c*/
  }
}


// ==== 0x006C0025  nullsub_114  this=unknown  sig=csp ====
void __stdcall nullsub_114(int a1, int a2)
{
  ; /*0x6c0025*/
}


// ==== 0x006C0040  ObjectClass::WinMain_Helper_6C0040  this=?$TClassFactory@VTubeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0040(TClassFactory_VTubeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c0042*/
  this->vfptr = &TClassFactory<TubeClass>::`vftable'; /*0x6c0049*/
  return &this->vfptr; /*0x6c004f*/
}


// ==== 0x006C0050  _TClassFactory_VTubeClass::QueryInterface2  this=?$TClassFactory@VTubeClass@@  sig=csp ====
int __thiscall COMObject::QueryInterface2(TClassFactory_VTubeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0057*/
    return -2147467261; /*0x6c0059*/
  *v4 = 0; /*0x6c0076*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c0092*/
    *v4 = v2; /*0x6c0096*/
  if ( !*v4 ) /*0x6c0098*/
    return -2147467262; /*0x6c00a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c00ac*/
  return 0; /*0x6c005e*/
}


// ==== 0x006C00C0  _TClassFactory_VTubeClass::AddRefCOM  this=?$TClassFactory@VTubeClass@@  sig=csp ====
LONG __thiscall TClassFactory_CampaignClass::AddRefCOM(TClassFactory_VTubeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c00ce*/
}


// ==== 0x006C00E0  _TClassFactory_VTubeClass::Release  this=?$TClassFactory@VTubeClass@@  sig=csp ====
LONG __thiscall TClassFactory_CampaignClass::Release(TClassFactory_VTubeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c00f0*/
  if ( !v1 ) /*0x6c00f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c00f7*/
  return v1; /*0x6c0101*/
}


// ==== 0x006C0110  _TClassFactory_VTubeClass::CreateInstanceCOM  this=?$TClassFactory@VTubeClass@@  sig=csp ====
int __thiscall TClassFactory_CampaignClass::CreateInstanceCOM(TClassFactory_VTubeClass__ *this)
{
  AbstractClass *v2; // eax
  AbstractClass *v3; // eax
  AbstractClass *v4; // esi
  int v5; // edi
  int v6; // [esp+10h] [ebp+8h]
  int v7; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c0118*/
    return -2147024809; /*0x6c011b*/
  *v8 = 0; /*0x6c0128*/
  if ( v6 ) /*0x6c0130*/
    return -2147221232; /*0x6c0133*/
  v2 = (AbstractClass *)__2_YAPAXI_Z(0x1C4u); /*0x6c0141*/
  if ( !v2 ) /*0x6c014b*/
    return -2147024882; /*0x6c014b*/
  v3 = TubeClass::Construct(v2, (__int16 *)&MEMORY[0xB077F8].__pad_14B0[12224], 0); /*0x6c0156*/
  v4 = v3; /*0x6c015b*/
  if ( !v3 ) /*0x6c015f*/
    return -2147024882; /*0x6c0162*/
  v5 = (**(int (__stdcall ***)(AbstractClass *, int, _DWORD *))v3->__pad_0)(v3, v7, v8); /*0x6c0176*/
  if ( v5 < 0 ) /*0x6c017a*/
    (*(void (__thiscall **)(AbstractClass *, int))(*(_DWORD *)v4->__pad_0 + 32))(v4, 1); /*0x6c0182*/
  return v5; /*0x6c011a*/
}


// ==== 0x006C0190  _TClassFactory_VTubeClass::AdjustRefCOM  this=?$TClassFactory@VTubeClass@@  sig=csp ====
int __thiscall TClassFactory_CampaignClass::AdjustRefCOM(TClassFactory_VTubeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c019a*/
  if ( v5 ) /*0x6c019d*/
    v2 = v1 + 1; /*0x6c019f*/
  else
    v2 = v1 - 1; /*0x6c01a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c01a0*/
  return 0; /*0x6c01a5*/
}


// ==== 0x006C01C0  ObjectClass::WinMain_Helper_6C01C0  this=?$TClassFactory@VCampaignClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C01C0(TClassFactory_VCampaignClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c01c2*/
  this->vfptr = &TClassFactory<CampaignClass>::`vftable'; /*0x6c01c9*/
  return &this->vfptr; /*0x6c01cf*/
}


// ==== 0x006C01D0  _TClassFactory_VCampaignClass::CreateTClassFactory_CampaignClass  this=?$TClassFactory@VCampaignClass@@  sig=csp ====
int __thiscall CreateTClassFactory_CampaignClass(TClassFactory_VCampaignClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c01d7*/
    return -2147467261; /*0x6c01d9*/
  *v4 = 0; /*0x6c01f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c0212*/
    *v4 = v2; /*0x6c0216*/
  if ( !*v4 ) /*0x6c0218*/
    return -2147467262; /*0x6c0220*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c022c*/
  return 0; /*0x6c01de*/
}


// ==== 0x006C0240  _TClassFactory_VCampaignClass::AddRef  this=?$TClassFactory@VCampaignClass@@  sig=csp ====
LONG __thiscall TClassFactory_CampaignClass::AddRef(TClassFactory_VCampaignClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c024e*/
}


// ==== 0x006C0260  _TClassFactory_VCampaignClass::GetClassName  this=?$TClassFactory@VCampaignClass@@  sig=csp ====
LONG __thiscall TClassFactory_CampaignClass::GetClassName(TClassFactory_VCampaignClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0270*/
  if ( !v1 ) /*0x6c0274*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0277*/
  return v1; /*0x6c0281*/
}


// ==== 0x006C0290  _TClassFactory_VCampaignClass::ddtor  this=?$TClassFactory@VCampaignClass@@  sig=csp ====
int __thiscall TClassFactory_CampaignClass::ddtor(TClassFactory_VCampaignClass__ *this)
{
  int v2; // eax
  CampaignClass *v6; // eax
  CampaignClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c0298*/
    return -2147024809; /*0x6c029b*/
  *v8 = 0; /*0x6c02a8*/
  if ( arg4 ) /*0x6c02b0*/
    return -2147221232; /*0x6c02b3*/
  v2 = __2_YAPAXI_Z(0x3A0u); /*0x6c02c1*/
  if ( !v2 ) /*0x6c02cb*/
    return -2147024882; /*0x6c02cb*/
  v6 = (CampaignClass *)CampaignClass::CampaignClass(v2, 0); /*0x6c02d1*/
  v7 = v6; /*0x6c02d6*/
  if ( !v6 ) /*0x6c02da*/
    return -2147024882; /*0x6c02dd*/
  v5 = (**(int (__stdcall ***)(CampaignClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c02f1*/
  if ( v5 < 0 ) /*0x6c02f5*/
    (*(void (__thiscall **)(CampaignClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c02fd*/
  return v5; /*0x6c029a*/
}


// ==== 0x006C0310  _TClassFactory_VCampaignClass::GetSize  this=?$TClassFactory@VCampaignClass@@  sig=csp ====
int __thiscall TClassFactory_CampaignClass::GetSize(TClassFactory_VCampaignClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c031a*/
  if ( v5 ) /*0x6c031d*/
    v2 = v1 + 1; /*0x6c031f*/
  else
    v2 = v1 - 1; /*0x6c0328*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c0320*/
  return 0; /*0x6c0325*/
}


// ==== 0x006C0340  ObjectClass::WinMain_Helper_6C0340  this=?$TClassFactory@VBuildingLightClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0340(TClassFactory_VBuildingLightClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c0342*/
  this->vfptr = &TClassFactory<BuildingLightClass>::`vftable'; /*0x6c0349*/
  return &this->vfptr; /*0x6c034f*/
}


// ==== 0x006C0350  _TClassFactory_VBuildingLightClass::CreateTClassFactory_BuildingLightClass  this=?$TClassFactory@VBuildingLightClass@@  sig=csp ====
int __thiscall CreateTClassFactory_BuildingLightClass(TClassFactory_VBuildingLightClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0357*/
    return -2147467261; /*0x6c0359*/
  *v4 = 0; /*0x6c0376*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c0392*/
    *v4 = v2; /*0x6c0396*/
  if ( !*v4 ) /*0x6c0398*/
    return -2147467262; /*0x6c03a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c03ac*/
  return 0; /*0x6c035e*/
}


// ==== 0x006C03C0  _TClassFactory_VBuildingLightClass::AddRef  this=?$TClassFactory@VBuildingLightClass@@  sig=csp ====
LONG __thiscall TClassFactory_BuildingLightClass::AddRef(TClassFactory_VBuildingLightClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c03ce*/
}


// ==== 0x006C03E0  _TClassFactory_VBuildingLightClass::GetClassName  this=?$TClassFactory@VBuildingLightClass@@  sig=csp ====
LONG __thiscall TClassFactory_BuildingLightClass::GetClassName(TClassFactory_VBuildingLightClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c03f0*/
  if ( !v1 ) /*0x6c03f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c03f7*/
  return v1; /*0x6c0401*/
}


// ==== 0x006C0410  _TClassFactory_VBuildingLightClass::ddtor  this=?$TClassFactory@VBuildingLightClass@@  sig=csp ====
int __thiscall TClassFactory_BuildingLightClass::ddtor(TClassFactory_VBuildingLightClass__ *this)
{
  int *v2; // eax
  BuildingLightClass *v6; // eax
  BuildingLightClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c0418*/
    return -2147024809; /*0x6c041b*/
  *v8 = 0; /*0x6c0428*/
  if ( arg4 ) /*0x6c0430*/
    return -2147221232; /*0x6c0433*/
  v2 = (int *)OperatorNew(0xE8u); /*0x6c0441*/
  if ( !v2 ) /*0x6c044b*/
    return -2147024882; /*0x6c044b*/
  v6 = BuildingLightClass::CTOR(v2, 0); /*0x6c0451*/
  v7 = v6; /*0x6c0456*/
  if ( !v6 ) /*0x6c045a*/
    return -2147024882; /*0x6c045d*/
  v5 = (**(int (__stdcall ***)(BuildingLightClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c0471*/
  if ( v5 < 0 ) /*0x6c0475*/
    (*(void (__thiscall **)(BuildingLightClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c047d*/
  return v5; /*0x6c041a*/
}


// ==== 0x006C0490  _TClassFactory_VBuildingLightClass::GetSize  this=?$TClassFactory@VBuildingLightClass@@  sig=csp ====
int __thiscall TClassFactory_BuildingLightClass::GetSize(TClassFactory_VBuildingLightClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c049a*/
  if ( v5 ) /*0x6c049d*/
    v2 = v1 + 1; /*0x6c049f*/
  else
    v2 = v1 - 1; /*0x6c04a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c04a0*/
  return 0; /*0x6c04a5*/
}


// ==== 0x006C04C0  ObjectClass::WinMain_Helper_6C04C0  this=?$TClassFactory@VWaypointPathClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C04C0(TClassFactory_VWaypointPathClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c04c2*/
  this->vfptr = &TClassFactory<WaypointPathClass>::`vftable'; /*0x6c04c9*/
  return &this->vfptr; /*0x6c04cf*/
}


// ==== 0x006C04D0  _TClassFactory_VWaypointPathClass::CreateTClassFactory_WaypointPathClass  this=?$TClassFactory@VWaypointPathClass@@  sig=csp ====
int __thiscall CreateTClassFactory_WaypointPathClass(TClassFactory_VWaypointPathClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c04d7*/
    return -2147467261; /*0x6c04d9*/
  *v4 = 0; /*0x6c04f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c0512*/
    *v4 = v2; /*0x6c0516*/
  if ( !*v4 ) /*0x6c0518*/
    return -2147467262; /*0x6c0520*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c052c*/
  return 0; /*0x6c04de*/
}


// ==== 0x006C0540  _TClassFactory_VWaypointPathClass::AddRef  this=?$TClassFactory@VWaypointPathClass@@  sig=csp ====
LONG __thiscall TClassFactory_WaypointPathClass::AddRef(TClassFactory_VWaypointPathClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c054e*/
}


// ==== 0x006C0560  _TClassFactory_VWaypointPathClass::GetClassName  this=?$TClassFactory@VWaypointPathClass@@  sig=csp ====
LONG __thiscall TClassFactory_WaypointPathClass::GetClassName(TClassFactory_VWaypointPathClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0570*/
  if ( !v1 ) /*0x6c0574*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0577*/
  return v1; /*0x6c0581*/
}


// ==== 0x006C0590  _TClassFactory_VWaypointPathClass::ddtor  this=?$TClassFactory@VWaypointPathClass@@  sig=csp ====
int __thiscall TClassFactory_WaypointPathClass::ddtor(TClassFactory_VWaypointPathClass__ *this)
{
  int v2; // eax
  WaypointPathClass *v6; // eax
  WaypointPathClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c0598*/
    return -2147024809; /*0x6c059b*/
  *v8 = 0; /*0x6c05a8*/
  if ( arg4 ) /*0x6c05b0*/
    return -2147221232; /*0x6c05b3*/
  v2 = OperatorNew(0x40u); /*0x6c05be*/
  if ( !v2 ) /*0x6c05c8*/
    return -2147024882; /*0x6c05c8*/
  v6 = (WaypointPathClass *)WaypointPathClass::Init(v2); /*0x6c05cc*/
  v7 = v6; /*0x6c05d1*/
  if ( !v6 ) /*0x6c05d5*/
    return -2147024882; /*0x6c05d8*/
  v5 = (**(int (__stdcall ***)(WaypointPathClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c05ec*/
  if ( v5 < 0 ) /*0x6c05f0*/
    (*(void (__thiscall **)(WaypointPathClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c05f8*/
  return v5; /*0x6c059a*/
}


// ==== 0x006C0610  _TClassFactory_VWaypointPathClass::GetSize  this=?$TClassFactory@VWaypointPathClass@@  sig=csp ====
int __thiscall TClassFactory_WaypointPathClass::GetSize(TClassFactory_VWaypointPathClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c061a*/
  if ( v5 ) /*0x6c061d*/
    v2 = v1 + 1; /*0x6c061f*/
  else
    v2 = v1 - 1; /*0x6c0628*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c0620*/
  return 0; /*0x6c0625*/
}


// ==== 0x006C0640  ObjectClass::WinMain_Helper_6C0640  this=?$TClassFactory@VTemporalClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0640(TClassFactory_VTemporalClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c0642*/
  this->vfptr = &TClassFactory<TemporalClass>::`vftable'; /*0x6c0649*/
  return &this->vfptr; /*0x6c064f*/
}


// ==== 0x006C0650  _TClassFactory_VTemporalClass::CreateTClassFactory_TemporalClass  this=?$TClassFactory@VTemporalClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TemporalClass(TClassFactory_VTemporalClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0657*/
    return -2147467261; /*0x6c0659*/
  *v4 = 0; /*0x6c0676*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c0692*/
    *v4 = v2; /*0x6c0696*/
  if ( !*v4 ) /*0x6c0698*/
    return -2147467262; /*0x6c06a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c06ac*/
  return 0; /*0x6c065e*/
}


// ==== 0x006C06C0  _TClassFactory_VTemporalClass::AddRef  this=?$TClassFactory@VTemporalClass@@  sig=csp ====
LONG __thiscall TClassFactory_TemporalClass::AddRef(TClassFactory_VTemporalClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c06ce*/
}


// ==== 0x006C06E0  _TClassFactory_VTemporalClass::GetClassName  this=?$TClassFactory@VTemporalClass@@  sig=csp ====
LONG __thiscall TClassFactory_TemporalClass::GetClassName(TClassFactory_VTemporalClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c06f0*/
  if ( !v1 ) /*0x6c06f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c06f7*/
  return v1; /*0x6c0701*/
}


// ==== 0x006C0710  _TClassFactory_VTemporalClass::ddtor  this=?$TClassFactory@VTemporalClass@@  sig=csp ====
int __thiscall TClassFactory_TemporalClass::ddtor(TClassFactory_VTemporalClass__ *this)
{
  int v2; // eax
  TemporalClass *v6; // eax
  TemporalClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c0718*/
    return -2147024809; /*0x6c071b*/
  *v8 = 0; /*0x6c0728*/
  if ( arg4 ) /*0x6c0730*/
    return -2147221232; /*0x6c0733*/
  v2 = OperatorNew(0x50u); /*0x6c073e*/
  if ( !v2 ) /*0x6c0748*/
    return -2147024882; /*0x6c0748*/
  v6 = (TemporalClass *)TemporalClass::Constructor(v2); /*0x6c074c*/
  v7 = v6; /*0x6c0751*/
  if ( !v6 ) /*0x6c0755*/
    return -2147024882; /*0x6c0758*/
  v5 = (**(int (__stdcall ***)(TemporalClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c076c*/
  if ( v5 < 0 ) /*0x6c0770*/
    (*(void (__thiscall **)(TemporalClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c0778*/
  return v5; /*0x6c071a*/
}


// ==== 0x006C0790  _TClassFactory_VTemporalClass::GetSize  this=?$TClassFactory@VTemporalClass@@  sig=csp ====
int __thiscall TClassFactory_TemporalClass::GetSize(TClassFactory_VTemporalClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c079a*/
  if ( v5 ) /*0x6c079d*/
    v2 = v1 + 1; /*0x6c079f*/
  else
    v2 = v1 - 1; /*0x6c07a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c07a0*/
  return 0; /*0x6c07a5*/
}


// ==== 0x006C07C0  ObjectClass::WinMain_Helper_6C07C0  this=?$TClassFactory@VAirstrikeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C07C0(TClassFactory_VAirstrikeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c07c2*/
  this->vfptr = &TClassFactory<AirstrikeClass>::`vftable'; /*0x6c07c9*/
  return &this->vfptr; /*0x6c07cf*/
}


// ==== 0x006C07D0  _TClassFactory_VAirstrikeClass::CreateTClassFactory_AirstrikeClass  this=?$TClassFactory@VAirstrikeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AirstrikeClass(TClassFactory_VAirstrikeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c07d7*/
    return -2147467261; /*0x6c07d9*/
  *v4 = 0; /*0x6c07f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c0812*/
    *v4 = v2; /*0x6c0816*/
  if ( !*v4 ) /*0x6c0818*/
    return -2147467262; /*0x6c0820*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c082c*/
  return 0; /*0x6c07de*/
}


// ==== 0x006C0840  _TClassFactory_VAirstrikeClass::AddRef  this=?$TClassFactory@VAirstrikeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AirstrikeClass::AddRef(TClassFactory_VAirstrikeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c084e*/
}


// ==== 0x006C0860  _TClassFactory_VAirstrikeClass::GetClassName  this=?$TClassFactory@VAirstrikeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AirstrikeClass::GetClassName(TClassFactory_VAirstrikeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0870*/
  if ( !v1 ) /*0x6c0874*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0877*/
  return v1; /*0x6c0881*/
}


// ==== 0x006C0890  _TClassFactory_VAirstrikeClass::ddtor  this=?$TClassFactory@VAirstrikeClass@@  sig=csp ====
int __thiscall TClassFactory_AirstrikeClass::ddtor(TClassFactory_VAirstrikeClass__ *this)
{
  AbstractClass *v2; // eax
  AbstractClass *v3; // eax
  AbstractClass *v4; // esi
  int v5; // edi
  int v6; // [esp+10h] [ebp+8h]
  int v7; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c0898*/
    return -2147024809; /*0x6c089b*/
  *v8 = 0; /*0x6c08a8*/
  if ( v6 ) /*0x6c08b0*/
    return -2147221232; /*0x6c08b3*/
  v2 = (AbstractClass *)OperatorNew(0x60u); /*0x6c08be*/
  if ( !v2 ) /*0x6c08c8*/
    return -2147024882; /*0x6c08c8*/
  v3 = AbstractClass::Create(v2); /*0x6c08cc*/
  v4 = v3; /*0x6c08d1*/
  if ( !v3 ) /*0x6c08d5*/
    return -2147024882; /*0x6c08d8*/
  v5 = (**(int (__stdcall ***)(AbstractClass *, int, _DWORD *))v3->__pad_0)(v3, v7, v8); /*0x6c08ec*/
  if ( v5 < 0 ) /*0x6c08f0*/
    (*(void (__thiscall **)(AbstractClass *, int))(*(_DWORD *)v4->__pad_0 + 32))(v4, 1); /*0x6c08f8*/
  return v5; /*0x6c089a*/
}


// ==== 0x006C0910  _TClassFactory_VAirstrikeClass::GetSize  this=?$TClassFactory@VAirstrikeClass@@  sig=csp ====
int __thiscall TClassFactory_AirstrikeClass::GetSize(TClassFactory_VAirstrikeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c091a*/
  if ( v5 ) /*0x6c091d*/
    v2 = v1 + 1; /*0x6c091f*/
  else
    v2 = v1 - 1; /*0x6c0928*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c0920*/
  return 0; /*0x6c0925*/
}


// ==== 0x006C0940  ObjectClass::WinMain_Helper_6C0940  this=?$TClassFactory@VSpawnManagerClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0940(TClassFactory_VSpawnManagerClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c0942*/
  this->vfptr = &TClassFactory<SpawnManagerClass>::`vftable'; /*0x6c0949*/
  return &this->vfptr; /*0x6c094f*/
}


// ==== 0x006C0950  _TClassFactory_VSpawnManagerClass::CreateTClassFactory_SpawnManagerClass  this=?$TClassFactory@VSpawnManagerClass@@  sig=csp ====
int __thiscall CreateTClassFactory_SpawnManagerClass(TClassFactory_VSpawnManagerClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0957*/
    return -2147467261; /*0x6c0959*/
  *v4 = 0; /*0x6c0976*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c0992*/
    *v4 = v2; /*0x6c0996*/
  if ( !*v4 ) /*0x6c0998*/
    return -2147467262; /*0x6c09a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c09ac*/
  return 0; /*0x6c095e*/
}


// ==== 0x006C09C0  _TClassFactory_VSpawnManagerClass::AddRef  this=?$TClassFactory@VSpawnManagerClass@@  sig=csp ====
LONG __thiscall TClassFactory_SpawnManagerClass::AddRef(TClassFactory_VSpawnManagerClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c09ce*/
}


// ==== 0x006C09E0  _TClassFactory_VSpawnManagerClass::GetClassName  this=?$TClassFactory@VSpawnManagerClass@@  sig=csp ====
LONG __thiscall TClassFactory_SpawnManagerClass::GetClassName(TClassFactory_VSpawnManagerClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c09f0*/
  if ( !v1 ) /*0x6c09f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c09f7*/
  return v1; /*0x6c0a01*/
}


// ==== 0x006C0A10  _TClassFactory_VSpawnManagerClass::ddtor  this=?$TClassFactory@VSpawnManagerClass@@  sig=csp ====
int __thiscall TClassFactory_SpawnManagerClass::ddtor(TClassFactory_VSpawnManagerClass__ *this)
{
  int v2; // eax
  SpawnManagerClass *v6; // eax
  SpawnManagerClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c0a18*/
    return -2147024809; /*0x6c0a1b*/
  *v8 = 0; /*0x6c0a28*/
  if ( arg4 ) /*0x6c0a30*/
    return -2147221232; /*0x6c0a33*/
  v2 = OperatorNew(0x74u); /*0x6c0a3e*/
  if ( !v2 ) /*0x6c0a48*/
    return -2147024882; /*0x6c0a48*/
  v6 = (SpawnManagerClass *)SpawnManagerClass::Constructor(v2); /*0x6c0a4c*/
  v7 = v6; /*0x6c0a51*/
  if ( !v6 ) /*0x6c0a55*/
    return -2147024882; /*0x6c0a58*/
  v5 = (**(int (__stdcall ***)(SpawnManagerClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c0a6c*/
  if ( v5 < 0 ) /*0x6c0a70*/
    (*(void (__thiscall **)(SpawnManagerClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c0a78*/
  return v5; /*0x6c0a1a*/
}


// ==== 0x006C0A90  _TClassFactory_VSpawnManagerClass::GetSize  this=?$TClassFactory@VSpawnManagerClass@@  sig=csp ====
int __thiscall TClassFactory_SpawnManagerClass::GetSize(TClassFactory_VSpawnManagerClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c0a9a*/
  if ( v5 ) /*0x6c0a9d*/
    v2 = v1 + 1; /*0x6c0a9f*/
  else
    v2 = v1 - 1; /*0x6c0aa8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c0aa0*/
  return 0; /*0x6c0aa5*/
}


// ==== 0x006C0AC0  COMClassFactory::CreateInstance  this=?$TClassFactory@VSlaveManagerClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory::CreateInstance(TClassFactory_VSlaveManagerClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c0ac2*/
  this->vfptr = &TClassFactory<SlaveManagerClass>::`vftable'; /*0x6c0ac9*/
  return &this->vfptr; /*0x6c0acf*/
}


// ==== 0x006C0AD0  _TClassFactory_VSlaveManagerClass::CreateTClassFactory_SlaveManagerClass  this=?$TClassFactory@VSlaveManagerClass@@  sig=csp ====
int __thiscall CreateTClassFactory_SlaveManagerClass(TClassFactory_VSlaveManagerClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0ad7*/
    return -2147467261; /*0x6c0ad9*/
  *v4 = 0; /*0x6c0af6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c0b12*/
    *v4 = v2; /*0x6c0b16*/
  if ( !*v4 ) /*0x6c0b18*/
    return -2147467262; /*0x6c0b20*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c0b2c*/
  return 0; /*0x6c0ade*/
}


// ==== 0x006C0B40  _TClassFactory_VSlaveManagerClass::AddRef  this=?$TClassFactory@VSlaveManagerClass@@  sig=csp ====
LONG __thiscall TClassFactory_SlaveManagerClass::AddRef(TClassFactory_VSlaveManagerClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0b4e*/
}


// ==== 0x006C0B60  _TClassFactory_VSlaveManagerClass::GetClassName  this=?$TClassFactory@VSlaveManagerClass@@  sig=csp ====
LONG __thiscall TClassFactory_SlaveManagerClass::GetClassName(TClassFactory_VSlaveManagerClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0b70*/
  if ( !v1 ) /*0x6c0b74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0b77*/
  return v1; /*0x6c0b81*/
}


// ==== 0x006C0B90  _TClassFactory_VSlaveManagerClass::ddtor  this=?$TClassFactory@VSlaveManagerClass@@  sig=csp ====
int __thiscall TClassFactory_SlaveManagerClass::ddtor(TClassFactory_VSlaveManagerClass__ *this)
{
  int v2; // eax
  SlaveManagerClass *v6; // eax
  SlaveManagerClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c0b98*/
    return -2147024809; /*0x6c0b9b*/
  *v8 = 0; /*0x6c0ba8*/
  if ( arg4 ) /*0x6c0bb0*/
    return -2147221232; /*0x6c0bb3*/
  v2 = OperatorNew(0x64u); /*0x6c0bbe*/
  if ( !v2 ) /*0x6c0bc8*/
    return -2147024882; /*0x6c0bc8*/
  v6 = (SlaveManagerClass *)SlaveManagerClass::Constructor(v2); /*0x6c0bcc*/
  v7 = v6; /*0x6c0bd1*/
  if ( !v6 ) /*0x6c0bd5*/
    return -2147024882; /*0x6c0bd8*/
  v5 = (**(int (__stdcall ***)(SlaveManagerClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c0bec*/
  if ( v5 < 0 ) /*0x6c0bf0*/
    (*(void (__thiscall **)(SlaveManagerClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c0bf8*/
  return v5; /*0x6c0b9a*/
}


// ==== 0x006C0C10  _TClassFactory_VSlaveManagerClass::GetSize  this=?$TClassFactory@VSlaveManagerClass@@  sig=csp ====
int __thiscall TClassFactory_SlaveManagerClass::GetSize(TClassFactory_VSlaveManagerClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c0c1a*/
  if ( v5 ) /*0x6c0c1d*/
    v2 = v1 + 1; /*0x6c0c1f*/
  else
    v2 = v1 - 1; /*0x6c0c28*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c0c20*/
  return 0; /*0x6c0c25*/
}


// ==== 0x006C0C40  ObjectClass::WinMain_Helper_6C0C40  this=?$TClassFactory@VCaptureManagerClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0C40(TClassFactory_VCaptureManagerClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c0c42*/
  this->vfptr = &TClassFactory<CaptureManagerClass>::`vftable'; /*0x6c0c49*/
  return &this->vfptr; /*0x6c0c4f*/
}


// ==== 0x006C0C50  _TClassFactory_VCaptureManagerClass::CreateTClassFactory_CaptureManagerClass  this=?$TClassFactory@VCaptureManagerClass@@  sig=csp ====
int __thiscall CreateTClassFactory_CaptureManagerClass(TClassFactory_VCaptureManagerClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0c57*/
    return -2147467261; /*0x6c0c59*/
  *v4 = 0; /*0x6c0c76*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c0c92*/
    *v4 = v2; /*0x6c0c96*/
  if ( !*v4 ) /*0x6c0c98*/
    return -2147467262; /*0x6c0ca0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c0cac*/
  return 0; /*0x6c0c5e*/
}


// ==== 0x006C0CC0  _TClassFactory_VCaptureManagerClass::AddRef  this=?$TClassFactory@VCaptureManagerClass@@  sig=csp ====
LONG __thiscall TClassFactory_CaptureManagerClass::AddRef(TClassFactory_VCaptureManagerClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0cce*/
}


// ==== 0x006C0CE0  _TClassFactory_VCaptureManagerClass::GetClassName  this=?$TClassFactory@VCaptureManagerClass@@  sig=csp ====
LONG __thiscall TClassFactory_CaptureManagerClass::GetClassName(TClassFactory_VCaptureManagerClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0cf0*/
  if ( !v1 ) /*0x6c0cf4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0cf7*/
  return v1; /*0x6c0d01*/
}


// ==== 0x006C0D10  _TClassFactory_VCaptureManagerClass::ddtor  this=?$TClassFactory@VCaptureManagerClass@@  sig=csp ====
int __thiscall TClassFactory_CaptureManagerClass::ddtor(TClassFactory_VCaptureManagerClass__ *this)
{
  int v2; // eax
  CaptureManagerClass *v6; // eax
  CaptureManagerClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c0d18*/
    return -2147024809; /*0x6c0d1b*/
  *v8 = 0; /*0x6c0d28*/
  if ( arg4 ) /*0x6c0d30*/
    return -2147221232; /*0x6c0d33*/
  v2 = OperatorNew(0x50u); /*0x6c0d3e*/
  if ( !v2 ) /*0x6c0d48*/
    return -2147024882; /*0x6c0d48*/
  v6 = (CaptureManagerClass *)SmallFunc_471890(v2); /*0x6c0d4c*/
  v7 = v6; /*0x6c0d51*/
  if ( !v6 ) /*0x6c0d55*/
    return -2147024882; /*0x6c0d58*/
  v5 = (**(int (__stdcall ***)(CaptureManagerClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c0d6c*/
  if ( v5 < 0 ) /*0x6c0d70*/
    (*(void (__thiscall **)(CaptureManagerClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c0d78*/
  return v5; /*0x6c0d1a*/
}


// ==== 0x006C0D90  _TClassFactory_VCaptureManagerClass::GetSize  this=?$TClassFactory@VCaptureManagerClass@@  sig=csp ====
int __thiscall TClassFactory_CaptureManagerClass::GetSize(TClassFactory_VCaptureManagerClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c0d9a*/
  if ( v5 ) /*0x6c0d9d*/
    v2 = v1 + 1; /*0x6c0d9f*/
  else
    v2 = v1 - 1; /*0x6c0da8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c0da0*/
  return 0; /*0x6c0da5*/
}


// ==== 0x006C0DC0  ObjectClass::WinMain_Helper_6C0DC0  this=?$TClassFactory@VDiskLaserClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0DC0(TClassFactory_VDiskLaserClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c0dc2*/
  this->vfptr = &TClassFactory<DiskLaserClass>::`vftable'; /*0x6c0dc9*/
  return &this->vfptr; /*0x6c0dcf*/
}


// ==== 0x006C0DD0  _TClassFactory_VDiskLaserClass::CreateTClassFactory_DiskLaserClass  this=?$TClassFactory@VDiskLaserClass@@  sig=csp ====
int __thiscall CreateTClassFactory_DiskLaserClass(TClassFactory_VDiskLaserClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0dd7*/
    return -2147467261; /*0x6c0dd9*/
  *v4 = 0; /*0x6c0df6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c0e12*/
    *v4 = v2; /*0x6c0e16*/
  if ( !*v4 ) /*0x6c0e18*/
    return -2147467262; /*0x6c0e20*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c0e2c*/
  return 0; /*0x6c0dde*/
}


// ==== 0x006C0E40  _TClassFactory_VDiskLaserClass::AddRef  this=?$TClassFactory@VDiskLaserClass@@  sig=csp ====
LONG __thiscall TClassFactory_DiskLaserClass::AddRef(TClassFactory_VDiskLaserClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0e4e*/
}


// ==== 0x006C0E60  _TClassFactory_VDiskLaserClass::GetClassName  this=?$TClassFactory@VDiskLaserClass@@  sig=csp ====
LONG __thiscall TClassFactory_DiskLaserClass::GetClassName(TClassFactory_VDiskLaserClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0e70*/
  if ( !v1 ) /*0x6c0e74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0e77*/
  return v1; /*0x6c0e81*/
}


// ==== 0x006C0E90  _TClassFactory_VDiskLaserClass::ddtor  this=?$TClassFactory@VDiskLaserClass@@  sig=csp ====
int __thiscall TClassFactory_DiskLaserClass::ddtor(TClassFactory_VDiskLaserClass__ *this)
{
  int v2; // eax
  DiskLaserClass *v6; // eax
  DiskLaserClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c0e98*/
    return -2147024809; /*0x6c0e9b*/
  *v8 = 0; /*0x6c0ea8*/
  if ( arg4 ) /*0x6c0eb0*/
    return -2147221232; /*0x6c0eb3*/
  v2 = OperatorNew(0x40u); /*0x6c0ebe*/
  if ( !v2 ) /*0x6c0ec8*/
    return -2147024882; /*0x6c0ec8*/
  v6 = (DiskLaserClass *)DiskLaserClass::DiskLaserClass(v2); /*0x6c0ecc*/
  v7 = v6; /*0x6c0ed1*/
  if ( !v6 ) /*0x6c0ed5*/
    return -2147024882; /*0x6c0ed8*/
  v5 = (**(int (__stdcall ***)(DiskLaserClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c0eec*/
  if ( v5 < 0 ) /*0x6c0ef0*/
    (*(void (__thiscall **)(DiskLaserClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c0ef8*/
  return v5; /*0x6c0e9a*/
}


// ==== 0x006C0F10  _TClassFactory_VDiskLaserClass::GetSize  this=?$TClassFactory@VDiskLaserClass@@  sig=csp ====
int __thiscall TClassFactory_DiskLaserClass::GetSize(TClassFactory_VDiskLaserClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c0f1a*/
  if ( v5 ) /*0x6c0f1d*/
    v2 = v1 + 1; /*0x6c0f1f*/
  else
    v2 = v1 - 1; /*0x6c0f28*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c0f20*/
  return 0; /*0x6c0f25*/
}


// ==== 0x006C0F40  ObjectClass::WinMain_Helper_6C0F40  this=?$TClassFactory@VParasiteClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0F40(TClassFactory_VParasiteClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c0f42*/
  this->vfptr = &TClassFactory<ParasiteClass>::`vftable'; /*0x6c0f49*/
  return &this->vfptr; /*0x6c0f4f*/
}


// ==== 0x006C0F50  _TClassFactory_VParasiteClass::CreateTClassFactory_ParasiteClass  this=?$TClassFactory@VParasiteClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ParasiteClass(TClassFactory_VParasiteClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0f57*/
    return -2147467261; /*0x6c0f59*/
  *v4 = 0; /*0x6c0f76*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c0f92*/
    *v4 = v2; /*0x6c0f96*/
  if ( !*v4 ) /*0x6c0f98*/
    return -2147467262; /*0x6c0fa0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c0fac*/
  return 0; /*0x6c0f5e*/
}


// ==== 0x006C0FC0  _TClassFactory_VParasiteClass::AddRef  this=?$TClassFactory@VParasiteClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParasiteClass::AddRef(TClassFactory_VParasiteClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0fce*/
}


// ==== 0x006C0FE0  _TClassFactory_VParasiteClass::GetClassName  this=?$TClassFactory@VParasiteClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParasiteClass::GetClassName(TClassFactory_VParasiteClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0ff0*/
  if ( !v1 ) /*0x6c0ff4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0ff7*/
  return v1; /*0x6c1001*/
}


// ==== 0x006C1010  _TClassFactory_VParasiteClass::ddtor  this=?$TClassFactory@VParasiteClass@@  sig=csp ====
int __thiscall TClassFactory_ParasiteClass::ddtor(TClassFactory_VParasiteClass__ *this)
{
  int v2; // eax
  ParasiteClass *v6; // eax
  ParasiteClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c1018*/
    return -2147024809; /*0x6c101b*/
  *v8 = 0; /*0x6c1028*/
  if ( arg4 ) /*0x6c1030*/
    return -2147221232; /*0x6c1033*/
  v2 = OperatorNew(0x58u); /*0x6c103e*/
  if ( !v2 ) /*0x6c1048*/
    return -2147024882; /*0x6c1048*/
  v6 = (ParasiteClass *)ParasiteClass::Constructor(v2); /*0x6c104c*/
  v7 = v6; /*0x6c1051*/
  if ( !v6 ) /*0x6c1055*/
    return -2147024882; /*0x6c1058*/
  v5 = (**(int (__stdcall ***)(ParasiteClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c106c*/
  if ( v5 < 0 ) /*0x6c1070*/
    (*(void (__thiscall **)(ParasiteClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c1078*/
  return v5; /*0x6c101a*/
}


// ==== 0x006C1090  _TClassFactory_VParasiteClass::GetSize  this=?$TClassFactory@VParasiteClass@@  sig=csp ====
int __thiscall TClassFactory_ParasiteClass::GetSize(TClassFactory_VParasiteClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c109a*/
  if ( v5 ) /*0x6c109d*/
    v2 = v1 + 1; /*0x6c109f*/
  else
    v2 = v1 - 1; /*0x6c10a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c10a0*/
  return 0; /*0x6c10a5*/
}


// ==== 0x006C10C0  ObjectClass::WinMain_Helper_6C10C0  this=?$TClassFactory@VBombClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C10C0(TClassFactory_VBombClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c10c2*/
  this->vfptr = &TClassFactory<BombClass>::`vftable'; /*0x6c10c9*/
  return &this->vfptr; /*0x6c10cf*/
}


// ==== 0x006C10D0  _TClassFactory_VBombClass::CreateTClassFactory_BombClass  this=?$TClassFactory@VBombClass@@  sig=csp ====
int __thiscall CreateTClassFactory_BombClass(TClassFactory_VBombClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c10d7*/
    return -2147467261; /*0x6c10d9*/
  *v4 = 0; /*0x6c10f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c1112*/
    *v4 = v2; /*0x6c1116*/
  if ( !*v4 ) /*0x6c1118*/
    return -2147467262; /*0x6c1120*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c112c*/
  return 0; /*0x6c10de*/
}


// ==== 0x006C1140  _TClassFactory_VBombClass::AddRef  this=?$TClassFactory@VBombClass@@  sig=csp ====
LONG __thiscall TClassFactory_BombClass::AddRef(TClassFactory_VBombClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c114e*/
}


// ==== 0x006C1160  _TClassFactory_VBombClass::GetClassName  this=?$TClassFactory@VBombClass@@  sig=csp ====
LONG __thiscall TClassFactory_BombClass::GetClassName(TClassFactory_VBombClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1170*/
  if ( !v1 ) /*0x6c1174*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1177*/
  return v1; /*0x6c1181*/
}


// ==== 0x006C1190  _TClassFactory_VBombClass::ddtor  this=?$TClassFactory@VBombClass@@  sig=csp ====
int __thiscall TClassFactory_BombClass::ddtor(TClassFactory_VBombClass__ *this)
{
  int v2; // eax
  BombClass *v6; // eax
  BombClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c1198*/
    return -2147024809; /*0x6c119b*/
  *v8 = 0; /*0x6c11a8*/
  if ( arg4 ) /*0x6c11b0*/
    return -2147221232; /*0x6c11b3*/
  v2 = OperatorNew(0x5Cu); /*0x6c11be*/
  if ( !v2 ) /*0x6c11c8*/
    return -2147024882; /*0x6c11c8*/
  v6 = (BombClass *)BombClass::AbstractClass(v2); /*0x6c11cc*/
  v7 = v6; /*0x6c11d1*/
  if ( !v6 ) /*0x6c11d5*/
    return -2147024882; /*0x6c11d8*/
  v5 = (**(int (__stdcall ***)(BombClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c11ec*/
  if ( v5 < 0 ) /*0x6c11f0*/
    (*(void (__thiscall **)(BombClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c11f8*/
  return v5; /*0x6c119a*/
}


// ==== 0x006C1210  _TClassFactory_VBombClass::GetSize  this=?$TClassFactory@VBombClass@@  sig=csp ====
int __thiscall TClassFactory_BombClass::GetSize(TClassFactory_VBombClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c121a*/
  if ( v5 ) /*0x6c121d*/
    v2 = v1 + 1; /*0x6c121f*/
  else
    v2 = v1 - 1; /*0x6c1228*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c1220*/
  return 0; /*0x6c1225*/
}


// ==== 0x006C1240  ObjectClass::WinMain_Helper_6C1240  this=?$TClassFactory@VRadSiteClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1240(TClassFactory_VRadSiteClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c1242*/
  this->vfptr = &TClassFactory<RadSiteClass>::`vftable'; /*0x6c1249*/
  return &this->vfptr; /*0x6c124f*/
}


// ==== 0x006C1250  _TClassFactory_VRadSiteClass::CreateTClassFactory_RadSiteClass  this=?$TClassFactory@VRadSiteClass@@  sig=csp ====
int __thiscall CreateTClassFactory_RadSiteClass(TClassFactory_VRadSiteClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1257*/
    return -2147467261; /*0x6c1259*/
  *v4 = 0; /*0x6c1276*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c1292*/
    *v4 = v2; /*0x6c1296*/
  if ( !*v4 ) /*0x6c1298*/
    return -2147467262; /*0x6c12a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c12ac*/
  return 0; /*0x6c125e*/
}


// ==== 0x006C12C0  _TClassFactory_VRadSiteClass::AddRef  this=?$TClassFactory@VRadSiteClass@@  sig=csp ====
LONG __thiscall TClassFactory_RadSiteClass::AddRef(TClassFactory_VRadSiteClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c12ce*/
}


// ==== 0x006C12E0  _TClassFactory_VRadSiteClass::GetClassName  this=?$TClassFactory@VRadSiteClass@@  sig=csp ====
LONG __thiscall TClassFactory_RadSiteClass::GetClassName(TClassFactory_VRadSiteClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c12f0*/
  if ( !v1 ) /*0x6c12f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c12f7*/
  return v1; /*0x6c1301*/
}


// ==== 0x006C1310  _TClassFactory_VRadSiteClass::ddtor  this=?$TClassFactory@VRadSiteClass@@  sig=csp ====
int __thiscall TClassFactory_RadSiteClass::ddtor(TClassFactory_VRadSiteClass__ *this)
{
  _DWORD *v2; // eax
  RadSiteClass *v6; // eax
  RadSiteClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c1318*/
    return -2147024809; /*0x6c131b*/
  *v8 = 0; /*0x6c1328*/
  if ( arg4 ) /*0x6c1330*/
    return -2147221232; /*0x6c1333*/
  v2 = (_DWORD *)OperatorNew(0x74u); /*0x6c133e*/
  if ( !v2 ) /*0x6c1348*/
    return -2147024882; /*0x6c1348*/
  v6 = (RadSiteClass *)RadSiteClass::RadSiteClass(v2); /*0x6c134c*/
  v7 = v6; /*0x6c1351*/
  if ( !v6 ) /*0x6c1355*/
    return -2147024882; /*0x6c1358*/
  v5 = (**(int (__stdcall ***)(RadSiteClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c136c*/
  if ( v5 < 0 ) /*0x6c1370*/
    (*(void (__thiscall **)(RadSiteClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c1378*/
  return v5; /*0x6c131a*/
}


// ==== 0x006C1390  _TClassFactory_VRadSiteClass::GetSize  this=?$TClassFactory@VRadSiteClass@@  sig=csp ====
int __thiscall TClassFactory_RadSiteClass::GetSize(TClassFactory_VRadSiteClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c139a*/
  if ( v5 ) /*0x6c139d*/
    v2 = v1 + 1; /*0x6c139f*/
  else
    v2 = v1 - 1; /*0x6c13a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c13a0*/
  return 0; /*0x6c13a5*/
}


// ==== 0x006C13C0  ObjectClass::WinMain_Helper_6C13C0  this=?$TClassFactory@VTEventClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C13C0(TClassFactory_VTEventClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c13c2*/
  this->vfptr = &TClassFactory<TEventClass>::`vftable'; /*0x6c13c9*/
  return &this->vfptr; /*0x6c13cf*/
}


// ==== 0x006C13D0  _TClassFactory_VTEventClass::CreateTClassFactory_TEventClass  this=?$TClassFactory@VTEventClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TEventClass(TClassFactory_VTEventClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c13d7*/
    return -2147467261; /*0x6c13d9*/
  *v4 = 0; /*0x6c13f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c1412*/
    *v4 = v2; /*0x6c1416*/
  if ( !*v4 ) /*0x6c1418*/
    return -2147467262; /*0x6c1420*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c142c*/
  return 0; /*0x6c13de*/
}


// ==== 0x006C1440  _TClassFactory_VTEventClass::AddRef  this=?$TClassFactory@VTEventClass@@  sig=csp ====
LONG __thiscall TClassFactory_TEventClass::AddRef(TClassFactory_VTEventClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c144e*/
}


// ==== 0x006C1460  _TClassFactory_VTEventClass::GetClassName  this=?$TClassFactory@VTEventClass@@  sig=csp ====
LONG __thiscall TClassFactory_TEventClass::GetClassName(TClassFactory_VTEventClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1470*/
  if ( !v1 ) /*0x6c1474*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1477*/
  return v1; /*0x6c1481*/
}


// ==== 0x006C1490  _TClassFactory_VTEventClass::ddtor  this=?$TClassFactory@VTEventClass@@  sig=csp ====
int __thiscall TClassFactory_TEventClass::ddtor(TClassFactory_VTEventClass__ *this)
{
  int v2; // eax
  TEventClass *v6; // eax
  TEventClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c1498*/
    return -2147024809; /*0x6c149b*/
  *v8 = 0; /*0x6c14a8*/
  if ( arg4 ) /*0x6c14b0*/
    return -2147221232; /*0x6c14b3*/
  v2 = OperatorNew(0x58u); /*0x6c14be*/
  if ( !v2 ) /*0x6c14c8*/
    return -2147024882; /*0x6c14c8*/
  v6 = (TEventClass *)TActionClass::TActionClass(v2); /*0x6c14cc*/
  v7 = v6; /*0x6c14d1*/
  if ( !v6 ) /*0x6c14d5*/
    return -2147024882; /*0x6c14d8*/
  v5 = (**(int (__stdcall ***)(TEventClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c14ec*/
  if ( v5 < 0 ) /*0x6c14f0*/
    (*(void (__thiscall **)(TEventClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c14f8*/
  return v5; /*0x6c149a*/
}


// ==== 0x006C1510  _TClassFactory_VTEventClass::GetSize  this=?$TClassFactory@VTEventClass@@  sig=csp ====
int __thiscall TClassFactory_TEventClass::GetSize(TClassFactory_VTEventClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c151a*/
  if ( v5 ) /*0x6c151d*/
    v2 = v1 + 1; /*0x6c151f*/
  else
    v2 = v1 - 1; /*0x6c1528*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c1520*/
  return 0; /*0x6c1525*/
}


// ==== 0x006C1540  ObjectClass::WinMain_Helper_6C1540  this=?$TClassFactory@VVoxelAnimTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1540(TClassFactory_VVoxelAnimTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c1542*/
  this->vfptr = &TClassFactory<VoxelAnimTypeClass>::`vftable'; /*0x6c1549*/
  return &this->vfptr; /*0x6c154f*/
}


// ==== 0x006C1550  _TClassFactory_VVoxelAnimTypeClass::CreateTClassFactory_VoxelAnimTypeClass  this=?$TClassFactory@VVoxelAnimTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_VoxelAnimTypeClass(TClassFactory_VVoxelAnimTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1557*/
    return -2147467261; /*0x6c1559*/
  *v4 = 0; /*0x6c1576*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c1592*/
    *v4 = v2; /*0x6c1596*/
  if ( !*v4 ) /*0x6c1598*/
    return -2147467262; /*0x6c15a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c15ac*/
  return 0; /*0x6c155e*/
}


// ==== 0x006C15C0  _TClassFactory_VVoxelAnimTypeClass::AddRef  this=?$TClassFactory@VVoxelAnimTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_VoxelAnimTypeClass::AddRef(TClassFactory_VVoxelAnimTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c15ce*/
}


// ==== 0x006C15E0  _TClassFactory_VVoxelAnimTypeClass::GetClassName  this=?$TClassFactory@VVoxelAnimTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_VoxelAnimTypeClass::GetClassName(TClassFactory_VVoxelAnimTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c15f0*/
  if ( !v1 ) /*0x6c15f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c15f7*/
  return v1; /*0x6c1601*/
}


// ==== 0x006C1610  _TClassFactory_VVoxelAnimTypeClass::GetClassIdentifier  this=?$TClassFactory@VVoxelAnimTypeClass@@  sig=csp ====
int __thiscall TClassFactory_VoxelAnimTypeClass::GetClassIdentifier(TClassFactory_VVoxelAnimTypeClass__ *this)
{
  _DWORD *v2; // eax
  VoxelAnimTypeClass *v6; // eax
  VoxelAnimTypeClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c1618*/
    return -2147024809; /*0x6c161b*/
  *v8 = 0; /*0x6c1628*/
  if ( arg4 ) /*0x6c1630*/
    return -2147221232; /*0x6c1633*/
  v2 = (_DWORD *)__2_YAPAXI_Z(0x308u); /*0x6c1641*/
  if ( !v2 ) /*0x6c164b*/
    return -2147024882; /*0x6c164b*/
  v6 = (VoxelAnimTypeClass *)VoxelAnimTypeClass::Constructor(v2, 0); /*0x6c1651*/
  v7 = v6; /*0x6c1656*/
  if ( !v6 ) /*0x6c165a*/
    return -2147024882; /*0x6c165d*/
  v5 = (**(int (__stdcall ***)(VoxelAnimTypeClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c1671*/
  if ( v5 < 0 ) /*0x6c1675*/
    (*(void (__thiscall **)(VoxelAnimTypeClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c167d*/
  return v5; /*0x6c161a*/
}


// ==== 0x006C1690  _TClassFactory_VVoxelAnimTypeClass::GetSize  this=?$TClassFactory@VVoxelAnimTypeClass@@  sig=csp ====
int __thiscall TClassFactory_VoxelAnimTypeClass::GetSize(TClassFactory_VVoxelAnimTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c169a*/
  if ( v5 ) /*0x6c169d*/
    v2 = v1 + 1; /*0x6c169f*/
  else
    v2 = v1 - 1; /*0x6c16a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c16a0*/
  return 0; /*0x6c16a5*/
}


// ==== 0x006C16C0  ObjectClass::WinMain_Helper_6C16C0  this=?$TClassFactory@VVoxelAnimClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C16C0(TClassFactory_VVoxelAnimClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c16c2*/
  this->vfptr = &TClassFactory<VoxelAnimClass>::`vftable'; /*0x6c16c9*/
  return &this->vfptr; /*0x6c16cf*/
}


// ==== 0x006C16D0  _TClassFactory_VVoxelAnimClass::CreateTClassFactory_VoxelAnimClass  this=?$TClassFactory@VVoxelAnimClass@@  sig=csp ====
int __thiscall CreateTClassFactory_VoxelAnimClass(TClassFactory_VVoxelAnimClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c16d7*/
    return -2147467261; /*0x6c16d9*/
  *v4 = 0; /*0x6c16f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c1712*/
    *v4 = v2; /*0x6c1716*/
  if ( !*v4 ) /*0x6c1718*/
    return -2147467262; /*0x6c1720*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c172c*/
  return 0; /*0x6c16de*/
}


// ==== 0x006C1740  _TClassFactory_VVoxelAnimClass::AddRef  this=?$TClassFactory@VVoxelAnimClass@@  sig=csp ====
LONG __thiscall TClassFactory_VoxelAnimClass::AddRef(TClassFactory_VVoxelAnimClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c174e*/
}


// ==== 0x006C1760  _TClassFactory_VVoxelAnimClass::GetClassName  this=?$TClassFactory@VVoxelAnimClass@@  sig=csp ====
LONG __thiscall TClassFactory_VoxelAnimClass::GetClassName(TClassFactory_VVoxelAnimClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1770*/
  if ( !v1 ) /*0x6c1774*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1777*/
  return v1; /*0x6c1781*/
}


// ==== 0x006C1790  _TClassFactory_VVoxelAnimClass::ddtor  this=?$TClassFactory@VVoxelAnimClass@@  sig=csp ====
int __thiscall TClassFactory_VoxelAnimClass::ddtor(TClassFactory_VVoxelAnimClass__ *this)
{
  int v2; // eax
  VoxelAnimClass *v6; // eax
  VoxelAnimClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c1798*/
    return -2147024809; /*0x6c179b*/
  *v8 = 0; /*0x6c17a8*/
  if ( arg4 ) /*0x6c17b0*/
    return -2147221232; /*0x6c17b3*/
  v2 = OperatorNew(0x148u); /*0x6c17c1*/
  if ( !v2 ) /*0x6c17cb*/
    return -2147024882; /*0x6c17cb*/
  v6 = (VoxelAnimClass *)ObjectClass::Initialize(v2); /*0x6c17cf*/
  v7 = v6; /*0x6c17d4*/
  if ( !v6 ) /*0x6c17d8*/
    return -2147024882; /*0x6c17db*/
  v5 = (*(int (__stdcall **)(VoxelAnimClass *, int, _DWORD *))v6->field_0)(v6, arg8, v8); /*0x6c17ef*/
  if ( v5 < 0 ) /*0x6c17f3*/
    (*(void (__thiscall **)(VoxelAnimClass *, int))(v7->field_0 + 32))(v7, 1); /*0x6c17fb*/
  return v5; /*0x6c179a*/
}


// ==== 0x006C1810  _TClassFactory_VVoxelAnimClass::GetSize  this=?$TClassFactory@VVoxelAnimClass@@  sig=csp ====
int __thiscall TClassFactory_VoxelAnimClass::GetSize(TClassFactory_VVoxelAnimClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c181a*/
  if ( v5 ) /*0x6c181d*/
    v2 = v1 + 1; /*0x6c181f*/
  else
    v2 = v1 - 1; /*0x6c1828*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c1820*/
  return 0; /*0x6c1825*/
}


// ==== 0x006C1840  ObjectClass::WinMain_Helper_6C1840  this=?$TClassFactory@VTActionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1840(TClassFactory_VTActionClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c1842*/
  this->vfptr = &TClassFactory<TActionClass>::`vftable'; /*0x6c1849*/
  return &this->vfptr; /*0x6c184f*/
}


// ==== 0x006C1850  _TClassFactory_VTActionClass::CreateTClassFactory_TActionClass  this=?$TClassFactory@VTActionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TActionClass(TClassFactory_VTActionClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1857*/
    return -2147467261; /*0x6c1859*/
  *v4 = 0; /*0x6c1876*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c1892*/
    *v4 = v2; /*0x6c1896*/
  if ( !*v4 ) /*0x6c1898*/
    return -2147467262; /*0x6c18a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c18ac*/
  return 0; /*0x6c185e*/
}


// ==== 0x006C18C0  _TClassFactory_VTActionClass::AddRef  this=?$TClassFactory@VTActionClass@@  sig=csp ====
LONG __thiscall TClassFactory_TActionClass::AddRef(TClassFactory_VTActionClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c18ce*/
}


// ==== 0x006C18E0  _TClassFactory_VTActionClass::GetClassName  this=?$TClassFactory@VTActionClass@@  sig=csp ====
LONG __thiscall TClassFactory_TActionClass::GetClassName(TClassFactory_VTActionClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c18f0*/
  if ( !v1 ) /*0x6c18f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c18f7*/
  return v1; /*0x6c1901*/
}


// ==== 0x006C1910  _TClassFactory_VTActionClass::ddtor  this=?$TClassFactory@VTActionClass@@  sig=csp ====
int __thiscall TClassFactory_TActionClass::ddtor(TClassFactory_VTActionClass__ *this)
{
  int v2; // eax
  TActionClass *v6; // eax
  TActionClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c1918*/
    return -2147024809; /*0x6c191b*/
  *v8 = 0; /*0x6c1928*/
  if ( arg4 ) /*0x6c1930*/
    return -2147221232; /*0x6c1933*/
  v2 = OperatorNew(0x94u); /*0x6c1941*/
  if ( !v2 ) /*0x6c194b*/
    return -2147024882; /*0x6c194b*/
  v6 = (TActionClass *)TActionClass::ctor(v2); /*0x6c194f*/
  v7 = v6; /*0x6c1954*/
  if ( !v6 ) /*0x6c1958*/
    return -2147024882; /*0x6c195b*/
  v5 = (**(int (__stdcall ***)(TActionClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c196f*/
  if ( v5 < 0 ) /*0x6c1973*/
    (*(void (__thiscall **)(TActionClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c197b*/
  return v5; /*0x6c191a*/
}


// ==== 0x006C1990  _TClassFactory_VTActionClass::GetSize  this=?$TClassFactory@VTActionClass@@  sig=csp ====
int __thiscall TClassFactory_TActionClass::GetSize(TClassFactory_VTActionClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c199a*/
  if ( v5 ) /*0x6c199d*/
    v2 = v1 + 1; /*0x6c199f*/
  else
    v2 = v1 - 1; /*0x6c19a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c19a0*/
  return 0; /*0x6c19a5*/
}


// ==== 0x006C19C0  ObjectClass::WinMain_Helper_6C19C0  this=?$TClassFactory@VTriggerClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C19C0(TClassFactory_VTriggerClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c19c2*/
  this->vfptr = &TClassFactory<TriggerClass>::`vftable'; /*0x6c19c9*/
  return &this->vfptr; /*0x6c19cf*/
}


// ==== 0x006C19D0  _TClassFactory_VTriggerClass::CreateTClassFactory_TriggerClass  this=?$TClassFactory@VTriggerClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TriggerClass(TClassFactory_VTriggerClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c19d7*/
    return -2147467261; /*0x6c19d9*/
  *v4 = 0; /*0x6c19f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c1a12*/
    *v4 = v2; /*0x6c1a16*/
  if ( !*v4 ) /*0x6c1a18*/
    return -2147467262; /*0x6c1a20*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c1a2c*/
  return 0; /*0x6c19de*/
}


// ==== 0x006C1A40  _TClassFactory_VTriggerClass::AddRef  this=?$TClassFactory@VTriggerClass@@  sig=csp ====
LONG __thiscall TClassFactory_TriggerClass::AddRef(TClassFactory_VTriggerClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1a4e*/
}


// ==== 0x006C1A60  _TClassFactory_VTriggerClass::GetClassName  this=?$TClassFactory@VTriggerClass@@  sig=csp ====
LONG __thiscall TClassFactory_TriggerClass::GetClassName(TClassFactory_VTriggerClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1a70*/
  if ( !v1 ) /*0x6c1a74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1a77*/
  return v1; /*0x6c1a81*/
}


// ==== 0x006C1A90  _TClassFactory_VTriggerClass::ddtor  this=?$TClassFactory@VTriggerClass@@  sig=csp ====
int __thiscall TClassFactory_TriggerClass::ddtor(TClassFactory_VTriggerClass__ *this)
{
  int v2; // eax
  TriggerClass *v6; // eax
  TriggerClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c1a98*/
    return -2147024809; /*0x6c1a9b*/
  *v8 = 0; /*0x6c1aa8*/
  if ( arg4 ) /*0x6c1ab0*/
    return -2147221232; /*0x6c1ab3*/
  v2 = OperatorNew(0x48u); /*0x6c1abe*/
  if ( !v2 ) /*0x6c1ac8*/
    return -2147024882; /*0x6c1ac8*/
  v6 = (TriggerClass *)TriggerClass::Construct(v2, 0); /*0x6c1ace*/
  v7 = v6; /*0x6c1ad3*/
  if ( !v6 ) /*0x6c1ad7*/
    return -2147024882; /*0x6c1ada*/
  v5 = (**(int (__stdcall ***)(TriggerClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c1aee*/
  if ( v5 < 0 ) /*0x6c1af2*/
    (*(void (__thiscall **)(TriggerClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c1afa*/
  return v5; /*0x6c1a9a*/
}


// ==== 0x006C1B10  _TClassFactory_VTriggerClass::GetSize  this=?$TClassFactory@VTriggerClass@@  sig=csp ====
int __thiscall TClassFactory_TriggerClass::GetSize(TClassFactory_VTriggerClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c1b1a*/
  if ( v5 ) /*0x6c1b1d*/
    v2 = v1 + 1; /*0x6c1b1f*/
  else
    v2 = v1 - 1; /*0x6c1b28*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c1b20*/
  return 0; /*0x6c1b25*/
}


// ==== 0x006C1B40  ObjectClass::WinMain_Helper_6C1B40  this=?$TClassFactory@VTriggerTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1B40(TClassFactory_VTriggerTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c1b42*/
  this->vfptr = &TClassFactory<TriggerTypeClass>::`vftable'; /*0x6c1b49*/
  return &this->vfptr; /*0x6c1b4f*/
}


// ==== 0x006C1B50  _TClassFactory_VTriggerTypeClass::CreateTClassFactory_TriggerTypeClass  this=?$TClassFactory@VTriggerTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TriggerTypeClass(TClassFactory_VTriggerTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1b57*/
    return -2147467261; /*0x6c1b59*/
  *v4 = 0; /*0x6c1b76*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c1b92*/
    *v4 = v2; /*0x6c1b96*/
  if ( !*v4 ) /*0x6c1b98*/
    return -2147467262; /*0x6c1ba0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c1bac*/
  return 0; /*0x6c1b5e*/
}


// ==== 0x006C1BC0  _TClassFactory_VTriggerTypeClass::AddRef  this=?$TClassFactory@VTriggerTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_TriggerTypeClass::AddRef(TClassFactory_VTriggerTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1bce*/
}


// ==== 0x006C1BE0  _TClassFactory_VTriggerTypeClass::GetClassName  this=?$TClassFactory@VTriggerTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_TriggerTypeClass::GetClassName(TClassFactory_VTriggerTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1bf0*/
  if ( !v1 ) /*0x6c1bf4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1bf7*/
  return v1; /*0x6c1c01*/
}


// ==== 0x006C1C10  _TClassFactory_VTriggerTypeClass::GetClassIdentifier  this=?$TClassFactory@VTriggerTypeClass@@  sig=csp ====
int __thiscall TClassFactory_TriggerTypeClass::GetClassIdentifier(TClassFactory_VTriggerTypeClass__ *this)
{
  _DWORD *v2; // eax
  TriggerTypeClass *v6; // eax
  TriggerTypeClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c1c18*/
    return -2147024809; /*0x6c1c1b*/
  *v8 = 0; /*0x6c1c28*/
  if ( arg4 ) /*0x6c1c30*/
    return -2147221232; /*0x6c1c33*/
  v2 = (_DWORD *)__2_YAPAXI_Z(0xB4u); /*0x6c1c41*/
  if ( !v2 ) /*0x6c1c4b*/
    return -2147024882; /*0x6c1c4b*/
  v6 = (TriggerTypeClass *)TriggerTypeClass::Construct(v2, 0); /*0x6c1c51*/
  v7 = v6; /*0x6c1c56*/
  if ( !v6 ) /*0x6c1c5a*/
    return -2147024882; /*0x6c1c5d*/
  v5 = (**(int (__stdcall ***)(TriggerTypeClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c1c71*/
  if ( v5 < 0 ) /*0x6c1c75*/
    (*(void (__thiscall **)(TriggerTypeClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c1c7d*/
  return v5; /*0x6c1c1a*/
}


// ==== 0x006C1C90  _TClassFactory_VTriggerTypeClass::GetSize  this=?$TClassFactory@VTriggerTypeClass@@  sig=csp ====
int __thiscall TClassFactory_TriggerTypeClass::GetSize(TClassFactory_VTriggerTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c1c9a*/
  if ( v5 ) /*0x6c1c9d*/
    v2 = v1 + 1; /*0x6c1c9f*/
  else
    v2 = v1 - 1; /*0x6c1ca8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c1ca0*/
  return 0; /*0x6c1ca5*/
}


// ==== 0x006C1CC0  ObjectClass::WinMain_Helper_6C1CC0  this=?$TClassFactory@VScriptClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1CC0(TClassFactory_VScriptClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c1cc2*/
  this->vfptr = &TClassFactory<ScriptClass>::`vftable'; /*0x6c1cc9*/
  return &this->vfptr; /*0x6c1ccf*/
}


// ==== 0x006C1CD0  _TClassFactory_VScriptClass::CreateTClassFactory_ScriptClass  this=?$TClassFactory@VScriptClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ScriptClass(TClassFactory_VScriptClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1cd7*/
    return -2147467261; /*0x6c1cd9*/
  *v4 = 0; /*0x6c1cf6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c1d12*/
    *v4 = v2; /*0x6c1d16*/
  if ( !*v4 ) /*0x6c1d18*/
    return -2147467262; /*0x6c1d20*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c1d2c*/
  return 0; /*0x6c1cde*/
}


// ==== 0x006C1D40  _TClassFactory_VScriptClass::AddRef  this=?$TClassFactory@VScriptClass@@  sig=csp ====
LONG __thiscall TClassFactory_ScriptClass::AddRef(TClassFactory_VScriptClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1d4e*/
}


// ==== 0x006C1D60  _TClassFactory_VScriptClass::GetClassName  this=?$TClassFactory@VScriptClass@@  sig=csp ====
LONG __thiscall TClassFactory_ScriptClass::GetClassName(TClassFactory_VScriptClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1d70*/
  if ( !v1 ) /*0x6c1d74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1d77*/
  return v1; /*0x6c1d81*/
}


// ==== 0x006C1D90  _TClassFactory_VScriptClass::ddtor  this=?$TClassFactory@VScriptClass@@  sig=csp ====
int __thiscall TClassFactory_ScriptClass::ddtor(TClassFactory_VScriptClass__ *this)
{
  AbstractClass *v2; // eax
  AbstractClass *v3; // eax
  AbstractClass *v4; // esi
  int v5; // edi
  int v6; // [esp+10h] [ebp+8h]
  int v7; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c1d98*/
    return -2147024809; /*0x6c1d9b*/
  *v8 = 0; /*0x6c1da8*/
  if ( v6 ) /*0x6c1db0*/
    return -2147221232; /*0x6c1db3*/
  v2 = (AbstractClass *)OperatorNew(0x30u); /*0x6c1dbe*/
  if ( !v2 ) /*0x6c1dc8*/
    return -2147024882; /*0x6c1dc8*/
  v3 = ScriptClass::Construct(v2, 0); /*0x6c1dce*/
  v4 = v3; /*0x6c1dd3*/
  if ( !v3 ) /*0x6c1dd7*/
    return -2147024882; /*0x6c1dda*/
  v5 = (**(int (__stdcall ***)(AbstractClass *, int, _DWORD *))v3->__pad_0)(v3, v7, v8); /*0x6c1dee*/
  if ( v5 < 0 ) /*0x6c1df2*/
    (*(void (__thiscall **)(AbstractClass *, int))(*(_DWORD *)v4->__pad_0 + 32))(v4, 1); /*0x6c1dfa*/
  return v5; /*0x6c1d9a*/
}


// ==== 0x006C1E10  _TClassFactory_VScriptClass::GetSize  this=?$TClassFactory@VScriptClass@@  sig=csp ====
int __thiscall TClassFactory_ScriptClass::GetSize(TClassFactory_VScriptClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c1e1a*/
  if ( v5 ) /*0x6c1e1d*/
    v2 = v1 + 1; /*0x6c1e1f*/
  else
    v2 = v1 - 1; /*0x6c1e28*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c1e20*/
  return 0; /*0x6c1e25*/
}


// ==== 0x006C1E40  ObjectClass::WinMain_Helper_6C1E40  this=?$TClassFactory@VScriptTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1E40(TClassFactory_VScriptTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c1e42*/
  this->vfptr = &TClassFactory<ScriptTypeClass>::`vftable'; /*0x6c1e49*/
  return &this->vfptr; /*0x6c1e4f*/
}


// ==== 0x006C1E50  _TClassFactory_VScriptTypeClass::CreateTClassFactory_ScriptTypeClass  this=?$TClassFactory@VScriptTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ScriptTypeClass(TClassFactory_VScriptTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1e57*/
    return -2147467261; /*0x6c1e59*/
  *v4 = 0; /*0x6c1e76*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c1e92*/
    *v4 = v2; /*0x6c1e96*/
  if ( !*v4 ) /*0x6c1e98*/
    return -2147467262; /*0x6c1ea0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c1eac*/
  return 0; /*0x6c1e5e*/
}


// ==== 0x006C1EC0  _TClassFactory_VScriptTypeClass::AddRef  this=?$TClassFactory@VScriptTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_ScriptTypeClass::AddRef(TClassFactory_VScriptTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1ece*/
}


// ==== 0x006C1EE0  _TClassFactory_VScriptTypeClass::GetClassName  this=?$TClassFactory@VScriptTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_ScriptTypeClass::GetClassName(TClassFactory_VScriptTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1ef0*/
  if ( !v1 ) /*0x6c1ef4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1ef7*/
  return v1; /*0x6c1f01*/
}


// ==== 0x006C1F10  _TClassFactory_VScriptTypeClass::GetClassIdentifier  this=?$TClassFactory@VScriptTypeClass@@  sig=csp ====
int __thiscall TClassFactory_ScriptTypeClass::GetClassIdentifier(TClassFactory_VScriptTypeClass__ *this)
{
  _DWORD *v2; // eax
  ScriptTypeClass *v6; // eax
  ScriptTypeClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c1f18*/
    return -2147024809; /*0x6c1f1b*/
  *v8 = 0; /*0x6c1f28*/
  if ( arg4 ) /*0x6c1f30*/
    return -2147221232; /*0x6c1f33*/
  v2 = (_DWORD *)__2_YAPAXI_Z(0x234u); /*0x6c1f41*/
  if ( !v2 ) /*0x6c1f4b*/
    return -2147024882; /*0x6c1f4b*/
  v6 = (ScriptTypeClass *)ScriptTypeClass::Constructor(v2, 0); /*0x6c1f51*/
  v7 = v6; /*0x6c1f56*/
  if ( !v6 ) /*0x6c1f5a*/
    return -2147024882; /*0x6c1f5d*/
  v5 = (**(int (__stdcall ***)(ScriptTypeClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c1f71*/
  if ( v5 < 0 ) /*0x6c1f75*/
    (*(void (__thiscall **)(ScriptTypeClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c1f7d*/
  return v5; /*0x6c1f1a*/
}


// ==== 0x006C1F90  _TClassFactory_VScriptTypeClass::GetSize  this=?$TClassFactory@VScriptTypeClass@@  sig=csp ====
int __thiscall TClassFactory_ScriptTypeClass::GetSize(TClassFactory_VScriptTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c1f9a*/
  if ( v5 ) /*0x6c1f9d*/
    v2 = v1 + 1; /*0x6c1f9f*/
  else
    v2 = v1 - 1; /*0x6c1fa8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c1fa0*/
  return 0; /*0x6c1fa5*/
}


// ==== 0x006C1FC0  ObjectClass::WinMain_Helper_6C1FC0  this=?$TClassFactory@VTagClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1FC0(TClassFactory_VTagClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c1fc2*/
  this->vfptr = &TClassFactory<TagClass>::`vftable'; /*0x6c1fc9*/
  return &this->vfptr; /*0x6c1fcf*/
}


// ==== 0x006C1FD0  _TClassFactory_VTagClass::CreateTClassFactory_TagClass  this=?$TClassFactory@VTagClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TagClass(TClassFactory_VTagClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1fd7*/
    return -2147467261; /*0x6c1fd9*/
  *v4 = 0; /*0x6c1ff6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c2012*/
    *v4 = v2; /*0x6c2016*/
  if ( !*v4 ) /*0x6c2018*/
    return -2147467262; /*0x6c2020*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c202c*/
  return 0; /*0x6c1fde*/
}


// ==== 0x006C2040  _TClassFactory_VTagClass::AddRef  this=?$TClassFactory@VTagClass@@  sig=csp ====
LONG __thiscall TClassFactory_TagClass::AddRef(TClassFactory_VTagClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c204e*/
}


// ==== 0x006C2060  _TClassFactory_VTagClass::GetClassName  this=?$TClassFactory@VTagClass@@  sig=csp ====
LONG __thiscall TClassFactory_TagClass::GetClassName(TClassFactory_VTagClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2070*/
  if ( !v1 ) /*0x6c2074*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2077*/
  return v1; /*0x6c2081*/
}


// ==== 0x006C2090  _TClassFactory_VTagClass::ddtor  this=?$TClassFactory@VTagClass@@  sig=csp ====
int __thiscall TClassFactory_TagClass::ddtor(TClassFactory_VTagClass__ *this)
{
  int v2; // eax
  TagClass *v6; // eax
  TagClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c2098*/
    return -2147024809; /*0x6c209b*/
  *v8 = 0; /*0x6c20a8*/
  if ( arg4 ) /*0x6c20b0*/
    return -2147221232; /*0x6c20b3*/
  v2 = OperatorNew(0x38u); /*0x6c20be*/
  if ( !v2 ) /*0x6c20c8*/
    return -2147024882; /*0x6c20c8*/
  v6 = (TagClass *)TeknoClass::GetType(v2, 0); /*0x6c20ce*/
  v7 = v6; /*0x6c20d3*/
  if ( !v6 ) /*0x6c20d7*/
    return -2147024882; /*0x6c20da*/
  v5 = (**(int (__stdcall ***)(TagClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c20ee*/
  if ( v5 < 0 ) /*0x6c20f2*/
    (*(void (__thiscall **)(TagClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c20fa*/
  return v5; /*0x6c209a*/
}


// ==== 0x006C2110  _TClassFactory_VTagClass::GetSize  this=?$TClassFactory@VTagClass@@  sig=csp ====
int __thiscall TClassFactory_TagClass::GetSize(TClassFactory_VTagClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c211a*/
  if ( v5 ) /*0x6c211d*/
    v2 = v1 + 1; /*0x6c211f*/
  else
    v2 = v1 - 1; /*0x6c2128*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c2120*/
  return 0; /*0x6c2125*/
}


// ==== 0x006C2140  ObjectClass::WinMain_Helper_6C2140  this=?$TClassFactory@VTagTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2140(TClassFactory_VTagTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c2142*/
  this->vfptr = &TClassFactory<TagTypeClass>::`vftable'; /*0x6c2149*/
  return &this->vfptr; /*0x6c214f*/
}


// ==== 0x006C2150  _TClassFactory_VTagTypeClass::CreateTClassFactory_TagTypeClass  this=?$TClassFactory@VTagTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TagTypeClass(TClassFactory_VTagTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2157*/
    return -2147467261; /*0x6c2159*/
  *v4 = 0; /*0x6c2176*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c2192*/
    *v4 = v2; /*0x6c2196*/
  if ( !*v4 ) /*0x6c2198*/
    return -2147467262; /*0x6c21a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c21ac*/
  return 0; /*0x6c215e*/
}


// ==== 0x006C21C0  _TClassFactory_VTagTypeClass::AddRef  this=?$TClassFactory@VTagTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_TagTypeClass::AddRef(TClassFactory_VTagTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c21ce*/
}


// ==== 0x006C21E0  _TClassFactory_VTagTypeClass::GetClassName  this=?$TClassFactory@VTagTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_TagTypeClass::GetClassName(TClassFactory_VTagTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c21f0*/
  if ( !v1 ) /*0x6c21f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c21f7*/
  return v1; /*0x6c2201*/
}


// ==== 0x006C2210  _TClassFactory_VTagTypeClass::GetClassIdentifier  this=?$TClassFactory@VTagTypeClass@@  sig=csp ====
int __thiscall TClassFactory_TagTypeClass::GetClassIdentifier(TClassFactory_VTagTypeClass__ *this)
{
  char *v2; // eax
  char *v3; // eax
  char *v4; // esi
  int v5; // edi
  int v6; // [esp+10h] [ebp+8h]
  int v7; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c2218*/
    return -2147024809; /*0x6c221b*/
  *v8 = 0; /*0x6c2228*/
  if ( v6 ) /*0x6c2230*/
    return -2147221232; /*0x6c2233*/
  v2 = (char *)__2_YAPAXI_Z(0xA4u); /*0x6c2241*/
  if ( !v2 ) /*0x6c224b*/
    return -2147024882; /*0x6c224b*/
  v3 = TagTypeClass::Construct(v2, 0); /*0x6c2251*/
  v4 = v3; /*0x6c2256*/
  if ( !v3 ) /*0x6c225a*/
    return -2147024882; /*0x6c225d*/
  v5 = (**(int (__stdcall ***)(char *, int, _DWORD *))v3)(v3, v7, v8); /*0x6c2271*/
  if ( v5 < 0 ) /*0x6c2275*/
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v4 + 32))(v4, 1); /*0x6c227d*/
  return v5; /*0x6c221a*/
}


// ==== 0x006C2290  _TClassFactory_VTagTypeClass::GetSize  this=?$TClassFactory@VTagTypeClass@@  sig=csp ====
int __thiscall TClassFactory_TagTypeClass::GetSize(TClassFactory_VTagTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c229a*/
  if ( v5 ) /*0x6c229d*/
    v2 = v1 + 1; /*0x6c229f*/
  else
    v2 = v1 - 1; /*0x6c22a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c22a0*/
  return 0; /*0x6c22a5*/
}


// ==== 0x006C22C0  ObjectClass::WinMain_Helper_6C22C0  this=?$TClassFactory@VTeamClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C22C0(TClassFactory_VTeamClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c22c2*/
  this->vfptr = &TClassFactory<TeamClass>::`vftable'; /*0x6c22c9*/
  return &this->vfptr; /*0x6c22cf*/
}


// ==== 0x006C22D0  _TClassFactory_VTeamClass::CreateTClassFactory_TeamClass  this=?$TClassFactory@VTeamClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TeamClass(TClassFactory_VTeamClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c22d7*/
    return -2147467261; /*0x6c22d9*/
  *v4 = 0; /*0x6c22f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c2312*/
    *v4 = v2; /*0x6c2316*/
  if ( !*v4 ) /*0x6c2318*/
    return -2147467262; /*0x6c2320*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c232c*/
  return 0; /*0x6c22de*/
}


// ==== 0x006C2340  _TClassFactory_VTeamClass::AddRef  this=?$TClassFactory@VTeamClass@@  sig=csp ====
LONG __thiscall TClassFactory_TeamClass::AddRef(TClassFactory_VTeamClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c234e*/
}


// ==== 0x006C2360  _TClassFactory_VTeamClass::GetClassName  this=?$TClassFactory@VTeamClass@@  sig=csp ====
LONG __thiscall TClassFactory_TeamClass::GetClassName(TClassFactory_VTeamClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2370*/
  if ( !v1 ) /*0x6c2374*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2377*/
  return v1; /*0x6c2381*/
}


// ==== 0x006C2390  _TClassFactory_VTeamClass::ddtor  this=?$TClassFactory@VTeamClass@@  sig=csp ====
int __thiscall TClassFactory_TeamClass::ddtor(TClassFactory_VTeamClass__ *this)
{
  int v2; // eax
  TeamClass *v6; // eax
  TeamClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c2398*/
    return -2147024809; /*0x6c239b*/
  *v8 = 0; /*0x6c23a8*/
  if ( arg4 ) /*0x6c23b0*/
    return -2147221232; /*0x6c23b3*/
  v2 = OperatorNew(0xA0u); /*0x6c23c1*/
  if ( !v2 ) /*0x6c23cb*/
    return -2147024882; /*0x6c23cb*/
  v6 = (TeamClass *)MissionClass::Construct(v2, 0, 0, 0); /*0x6c23d5*/
  v7 = v6; /*0x6c23da*/
  if ( !v6 ) /*0x6c23de*/
    return -2147024882; /*0x6c23e1*/
  v5 = (**(int (__stdcall ***)(TeamClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c23f5*/
  if ( v5 < 0 ) /*0x6c23f9*/
    (*(void (__thiscall **)(TeamClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c2401*/
  return v5; /*0x6c239a*/
}


// ==== 0x006C2410  _TClassFactory_VTeamClass::GetSize  this=?$TClassFactory@VTeamClass@@  sig=csp ====
int __thiscall TClassFactory_TeamClass::GetSize(TClassFactory_VTeamClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c241a*/
  if ( v5 ) /*0x6c241d*/
    v2 = v1 + 1; /*0x6c241f*/
  else
    v2 = v1 - 1; /*0x6c2428*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c2420*/
  return 0; /*0x6c2425*/
}


// ==== 0x006C2440  ObjectClass::WinMain_Helper_6C2440  this=?$TClassFactory@VTeamTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2440(TClassFactory_VTeamTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c2442*/
  this->vfptr = &TClassFactory<TeamTypeClass>::`vftable'; /*0x6c2449*/
  return &this->vfptr; /*0x6c244f*/
}


// ==== 0x006C2450  _TClassFactory_VTeamTypeClass::CreateTClassFactory_TeamTypeClass  this=?$TClassFactory@VTeamTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TeamTypeClass(TClassFactory_VTeamTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2457*/
    return -2147467261; /*0x6c2459*/
  *v4 = 0; /*0x6c2476*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c2492*/
    *v4 = v2; /*0x6c2496*/
  if ( !*v4 ) /*0x6c2498*/
    return -2147467262; /*0x6c24a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c24ac*/
  return 0; /*0x6c245e*/
}


// ==== 0x006C24C0  _TClassFactory_VTeamTypeClass::AddRef  this=?$TClassFactory@VTeamTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_TeamTypeClass::AddRef(TClassFactory_VTeamTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c24ce*/
}


// ==== 0x006C24E0  _TClassFactory_VTeamTypeClass::GetClassName  this=?$TClassFactory@VTeamTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_TeamTypeClass::GetClassName(TClassFactory_VTeamTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c24f0*/
  if ( !v1 ) /*0x6c24f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c24f7*/
  return v1; /*0x6c2501*/
}


// ==== 0x006C2510  _TClassFactory_VTeamTypeClass::GetClassIdentifier  this=?$TClassFactory@VTeamTypeClass@@  sig=csp ====
int __thiscall TClassFactory_TeamTypeClass::GetClassIdentifier(TClassFactory_VTeamTypeClass__ *this)
{
  _DWORD *v2; // eax
  TeamTypeClass *v6; // eax
  TeamTypeClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c2518*/
    return -2147024809; /*0x6c251b*/
  *v8 = 0; /*0x6c2528*/
  if ( arg4 ) /*0x6c2530*/
    return -2147221232; /*0x6c2533*/
  v2 = (_DWORD *)__2_YAPAXI_Z(0xF8u); /*0x6c2541*/
  if ( !v2 ) /*0x6c254b*/
    return -2147024882; /*0x6c254b*/
  v6 = (TeamTypeClass *)TechnoTypeClass::LoadBase(v2, 0); /*0x6c2551*/
  v7 = v6; /*0x6c2556*/
  if ( !v6 ) /*0x6c255a*/
    return -2147024882; /*0x6c255d*/
  v5 = (**(int (__stdcall ***)(TeamTypeClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c2571*/
  if ( v5 < 0 ) /*0x6c2575*/
    (*(void (__thiscall **)(TeamTypeClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c257d*/
  return v5; /*0x6c251a*/
}


// ==== 0x006C2590  _TClassFactory_VTeamTypeClass::GetSize  this=?$TClassFactory@VTeamTypeClass@@  sig=csp ====
int __thiscall TClassFactory_TeamTypeClass::GetSize(TClassFactory_VTeamTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c259a*/
  if ( v5 ) /*0x6c259d*/
    v2 = v1 + 1; /*0x6c259f*/
  else
    v2 = v1 - 1; /*0x6c25a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c25a0*/
  return 0; /*0x6c25a5*/
}


// ==== 0x006C25C0  ObjectClass::WinMain_Helper_6C25C0  this=?$TClassFactory@VTaskForceClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C25C0(TClassFactory_VTaskForceClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c25c2*/
  this->vfptr = &TClassFactory<TaskForceClass>::`vftable'; /*0x6c25c9*/
  return &this->vfptr; /*0x6c25cf*/
}


// ==== 0x006C25D0  _TClassFactory_VTaskForceClass::CreateTClassFactory_TaskForceClass  this=?$TClassFactory@VTaskForceClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TaskForceClass(TClassFactory_VTaskForceClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c25d7*/
    return -2147467261; /*0x6c25d9*/
  *v4 = 0; /*0x6c25f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c2612*/
    *v4 = v2; /*0x6c2616*/
  if ( !*v4 ) /*0x6c2618*/
    return -2147467262; /*0x6c2620*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c262c*/
  return 0; /*0x6c25de*/
}


// ==== 0x006C2640  _TClassFactory_VTaskForceClass::AddRef  this=?$TClassFactory@VTaskForceClass@@  sig=csp ====
LONG __thiscall TClassFactory_TaskForceClass::AddRef(TClassFactory_VTaskForceClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c264e*/
}


// ==== 0x006C2660  _TClassFactory_VTaskForceClass::GetClassName  this=?$TClassFactory@VTaskForceClass@@  sig=csp ====
LONG __thiscall TClassFactory_TaskForceClass::GetClassName(TClassFactory_VTaskForceClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2670*/
  if ( !v1 ) /*0x6c2674*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2677*/
  return v1; /*0x6c2681*/
}


// ==== 0x006C2690  _TClassFactory_VTaskForceClass::ddtor  this=?$TClassFactory@VTaskForceClass@@  sig=csp ====
int __thiscall TClassFactory_TaskForceClass::ddtor(TClassFactory_VTaskForceClass__ *this)
{
  _DWORD *v2; // eax
  TaskForceClass *v6; // eax
  TaskForceClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c2698*/
    return -2147024809; /*0x6c269b*/
  *v8 = 0; /*0x6c26a8*/
  if ( arg4 ) /*0x6c26b0*/
    return -2147221232; /*0x6c26b3*/
  v2 = (_DWORD *)OperatorNew(0xD4u); /*0x6c26c1*/
  if ( !v2 ) /*0x6c26cb*/
    return -2147024882; /*0x6c26cb*/
  v6 = (TaskForceClass *)TaskForceClass::Construct(v2, 0); /*0x6c26d1*/
  v7 = v6; /*0x6c26d6*/
  if ( !v6 ) /*0x6c26da*/
    return -2147024882; /*0x6c26dd*/
  v5 = (**(int (__stdcall ***)(TaskForceClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c26f1*/
  if ( v5 < 0 ) /*0x6c26f5*/
    (*(void (__thiscall **)(TaskForceClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c26fd*/
  return v5; /*0x6c269a*/
}


// ==== 0x006C2710  _TClassFactory_VTaskForceClass::GetSize  this=?$TClassFactory@VTaskForceClass@@  sig=csp ====
int __thiscall TClassFactory_TaskForceClass::GetSize(TClassFactory_VTaskForceClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c271a*/
  if ( v5 ) /*0x6c271d*/
    v2 = v1 + 1; /*0x6c271f*/
  else
    v2 = v1 - 1; /*0x6c2728*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c2720*/
  return 0; /*0x6c2725*/
}


// ==== 0x006C2740  ObjectClass::WinMain_Helper_6C2740  this=?$TClassFactory@VUnitTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2740(TClassFactory_VUnitTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c2742*/
  this->vfptr = &TClassFactory<UnitTypeClass>::`vftable'; /*0x6c2749*/
  return &this->vfptr; /*0x6c274f*/
}


// ==== 0x006C2750  _TClassFactory_VUnitTypeClass::CreateTClassFactory_UnitTypeClass  this=?$TClassFactory@VUnitTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_UnitTypeClass(TClassFactory_VUnitTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2757*/
    return -2147467261; /*0x6c2759*/
  *v4 = 0; /*0x6c2776*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c2792*/
    *v4 = v2; /*0x6c2796*/
  if ( !*v4 ) /*0x6c2798*/
    return -2147467262; /*0x6c27a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c27ac*/
  return 0; /*0x6c275e*/
}


// ==== 0x006C27C0  _TClassFactory_VUnitTypeClass::AddRef  this=?$TClassFactory@VUnitTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_UnitTypeClass::AddRef(TClassFactory_VUnitTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c27ce*/
}


// ==== 0x006C27E0  _TClassFactory_VUnitTypeClass::GetClassName  this=?$TClassFactory@VUnitTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_UnitTypeClass::GetClassName(TClassFactory_VUnitTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c27f0*/
  if ( !v1 ) /*0x6c27f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c27f7*/
  return v1; /*0x6c2801*/
}


// ==== 0x006C2810  _TClassFactory_VUnitTypeClass::GetClassIdentifier  this=?$TClassFactory@VUnitTypeClass@@  sig=csp ====
int __thiscall TClassFactory_UnitTypeClass::GetClassIdentifier(TClassFactory_VUnitTypeClass__ *this)
{
  int v2; // eax
  UnitTypeClass *v6; // eax
  UnitTypeClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c2818*/
    return -2147024809; /*0x6c281b*/
  *v8 = 0; /*0x6c2828*/
  if ( arg4 ) /*0x6c2830*/
    return -2147221232; /*0x6c2833*/
  v2 = __2_YAPAXI_Z(0xE78u); /*0x6c2841*/
  if ( !v2 ) /*0x6c284b*/
    return -2147024882; /*0x6c284b*/
  v6 = (UnitTypeClass *)UnitTypeClass::UnitTypeClass(v2, 0); /*0x6c2851*/
  v7 = v6; /*0x6c2856*/
  if ( !v6 ) /*0x6c285a*/
    return -2147024882; /*0x6c285d*/
  v5 = (**(int (__stdcall ***)(UnitTypeClass *, int, _DWORD *))v6->vtable0)(v6, arg8, v8); /*0x6c2871*/
  if ( v5 < 0 ) /*0x6c2875*/
    (*(void (__thiscall **)(UnitTypeClass *, int))(*(_DWORD *)v7->vtable0 + 32))(v7, 1); /*0x6c287d*/
  return v5; /*0x6c281a*/
}


// ==== 0x006C2890  _TClassFactory_VUnitTypeClass::GetSize  this=?$TClassFactory@VUnitTypeClass@@  sig=csp ====
int __thiscall TClassFactory_UnitTypeClass::GetSize(TClassFactory_VUnitTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c289a*/
  if ( v5 ) /*0x6c289d*/
    v2 = v1 + 1; /*0x6c289f*/
  else
    v2 = v1 - 1; /*0x6c28a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c28a0*/
  return 0; /*0x6c28a5*/
}


// ==== 0x006C28C0  ObjectClass::WinMain_Helper_6C28C0  this=?$TClassFactory@VBuildingTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C28C0(TClassFactory_VBuildingTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c28c2*/
  this->vfptr = &TClassFactory<BuildingTypeClass>::`vftable'; /*0x6c28c9*/
  return &this->vfptr; /*0x6c28cf*/
}


// ==== 0x006C28D0  _TClassFactory_VBuildingTypeClass::CreateTClassFactory_BuildingTypeClass  this=?$TClassFactory@VBuildingTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_BuildingTypeClass(TClassFactory_VBuildingTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c28d7*/
    return -2147467261; /*0x6c28d9*/
  *v4 = 0; /*0x6c28f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c2912*/
    *v4 = v2; /*0x6c2916*/
  if ( !*v4 ) /*0x6c2918*/
    return -2147467262; /*0x6c2920*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c292c*/
  return 0; /*0x6c28de*/
}


// ==== 0x006C2940  _TClassFactory_VBuildingTypeClass::AddRef  this=?$TClassFactory@VBuildingTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_BuildingTypeClass::AddRef(TClassFactory_VBuildingTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c294e*/
}


// ==== 0x006C2960  _TClassFactory_VBuildingTypeClass::GetClassName  this=?$TClassFactory@VBuildingTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_BuildingTypeClass::GetClassName(TClassFactory_VBuildingTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2970*/
  if ( !v1 ) /*0x6c2974*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2977*/
  return v1; /*0x6c2981*/
}


// ==== 0x006C2990  _TClassFactory_VBuildingTypeClass::GetClassIdentifier  this=?$TClassFactory@VBuildingTypeClass@@  sig=csp ====
int __thiscall TClassFactory_BuildingTypeClass::GetClassIdentifier(TClassFactory_VBuildingTypeClass__ *this)
{
  int v2; // eax
  BuildingTypeClass *v6; // eax
  BuildingTypeClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c2998*/
    return -2147024809; /*0x6c299b*/
  *v8 = 0; /*0x6c29a8*/
  if ( arg4 ) /*0x6c29b0*/
    return -2147221232; /*0x6c29b3*/
  v2 = __2_YAPAXI_Z(0x1798u); /*0x6c29c1*/
  if ( !v2 ) /*0x6c29cb*/
    return -2147024882; /*0x6c29cb*/
  v6 = (BuildingTypeClass *)BuildingTypeClass::ConstructFull(v2, 0); /*0x6c29d1*/
  v7 = v6; /*0x6c29d6*/
  if ( !v6 ) /*0x6c29da*/
    return -2147024882; /*0x6c29dd*/
  v5 = (**(int (__stdcall ***)(BuildingTypeClass *, int, _DWORD *))v6->vtable0)(v6, arg8, v8); /*0x6c29f1*/
  if ( v5 < 0 ) /*0x6c29f5*/
    (*(void (__thiscall **)(BuildingTypeClass *, int))(*(_DWORD *)v7->vtable0 + 32))(v7, 1); /*0x6c29fd*/
  return v5; /*0x6c299a*/
}


// ==== 0x006C2A10  _TClassFactory_VBuildingTypeClass::GetSize  this=?$TClassFactory@VBuildingTypeClass@@  sig=csp ====
int __thiscall TClassFactory_BuildingTypeClass::GetSize(TClassFactory_VBuildingTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c2a1a*/
  if ( v5 ) /*0x6c2a1d*/
    v2 = v1 + 1; /*0x6c2a1f*/
  else
    v2 = v1 - 1; /*0x6c2a28*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c2a20*/
  return 0; /*0x6c2a25*/
}


// ==== 0x006C2A40  ObjectClass::WinMain_Helper_6C2A40  this=?$TClassFactory@VAircraftTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2A40(TClassFactory_VAircraftTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c2a42*/
  this->vfptr = &TClassFactory<AircraftTypeClass>::`vftable'; /*0x6c2a49*/
  return &this->vfptr; /*0x6c2a4f*/
}


// ==== 0x006C2A50  _TClassFactory_VAircraftTypeClass::CreateTClassFactory_AircraftTypeClass  this=?$TClassFactory@VAircraftTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AircraftTypeClass(TClassFactory_VAircraftTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2a57*/
    return -2147467261; /*0x6c2a59*/
  *v4 = 0; /*0x6c2a76*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c2a92*/
    *v4 = v2; /*0x6c2a96*/
  if ( !*v4 ) /*0x6c2a98*/
    return -2147467262; /*0x6c2aa0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c2aac*/
  return 0; /*0x6c2a5e*/
}


// ==== 0x006C2AC0  _TClassFactory_VAircraftTypeClass::AddRef  this=?$TClassFactory@VAircraftTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AircraftTypeClass::AddRef(TClassFactory_VAircraftTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2ace*/
}


// ==== 0x006C2AE0  _TClassFactory_VAircraftTypeClass::GetClassName  this=?$TClassFactory@VAircraftTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AircraftTypeClass::GetClassName(TClassFactory_VAircraftTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2af0*/
  if ( !v1 ) /*0x6c2af4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2af7*/
  return v1; /*0x6c2b01*/
}


// ==== 0x006C2B10  _TClassFactory_VAircraftTypeClass::GetClassIdentifier  this=?$TClassFactory@VAircraftTypeClass@@  sig=csp ====
int __thiscall TClassFactory_AircraftTypeClass::GetClassIdentifier(TClassFactory_VAircraftTypeClass__ *this)
{
  int v2; // eax
  AircraftTypeClass *v6; // eax
  AircraftTypeClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c2b18*/
    return -2147024809; /*0x6c2b1b*/
  *v8 = 0; /*0x6c2b28*/
  if ( arg4 ) /*0x6c2b30*/
    return -2147221232; /*0x6c2b33*/
  v2 = __2_YAPAXI_Z(0xE10u); /*0x6c2b41*/
  if ( !v2 ) /*0x6c2b4b*/
    return -2147024882; /*0x6c2b4b*/
  v6 = (AircraftTypeClass *)AircraftTypeClass::AircraftTypeClass(v2, 0); /*0x6c2b51*/
  v7 = v6; /*0x6c2b56*/
  if ( !v6 ) /*0x6c2b5a*/
    return -2147024882; /*0x6c2b5d*/
  v5 = (**(int (__stdcall ***)(AircraftTypeClass *, int, _DWORD *))v6->vtable0)(v6, arg8, v8); /*0x6c2b71*/
  if ( v5 < 0 ) /*0x6c2b75*/
    (*(void (__thiscall **)(AircraftTypeClass *, int))(*(_DWORD *)v7->vtable0 + 32))(v7, 1); /*0x6c2b7d*/
  return v5; /*0x6c2b1a*/
}


// ==== 0x006C2B90  _TClassFactory_VAircraftTypeClass::GetSize  this=?$TClassFactory@VAircraftTypeClass@@  sig=csp ====
int __thiscall TClassFactory_AircraftTypeClass::GetSize(TClassFactory_VAircraftTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c2b9a*/
  if ( v5 ) /*0x6c2b9d*/
    v2 = v1 + 1; /*0x6c2b9f*/
  else
    v2 = v1 - 1; /*0x6c2ba8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c2ba0*/
  return 0; /*0x6c2ba5*/
}


// ==== 0x006C2BC0  ObjectClass::WinMain_Helper_6C2BC0  this=?$TClassFactory@VInfantryTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2BC0(TClassFactory_VInfantryTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c2bc2*/
  this->vfptr = &TClassFactory<InfantryTypeClass>::`vftable'; /*0x6c2bc9*/
  return &this->vfptr; /*0x6c2bcf*/
}


// ==== 0x006C2BD0  _TClassFactory_VInfantryTypeClass::CreateTClassFactory_InfantryTypeClass  this=?$TClassFactory@VInfantryTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_InfantryTypeClass(TClassFactory_VInfantryTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2bd7*/
    return -2147467261; /*0x6c2bd9*/
  *v4 = 0; /*0x6c2bf6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c2c12*/
    *v4 = v2; /*0x6c2c16*/
  if ( !*v4 ) /*0x6c2c18*/
    return -2147467262; /*0x6c2c20*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c2c2c*/
  return 0; /*0x6c2bde*/
}


// ==== 0x006C2C40  _TClassFactory_VInfantryTypeClass::AddRef  this=?$TClassFactory@VInfantryTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_InfantryTypeClass::AddRef(TClassFactory_VInfantryTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2c4e*/
}


// ==== 0x006C2C60  _TClassFactory_VInfantryTypeClass::GetClassName  this=?$TClassFactory@VInfantryTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_InfantryTypeClass::GetClassName(TClassFactory_VInfantryTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2c70*/
  if ( !v1 ) /*0x6c2c74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2c77*/
  return v1; /*0x6c2c81*/
}


// ==== 0x006C2C90  _TClassFactory_VInfantryTypeClass::GetClassIdentifier  this=?$TClassFactory@VInfantryTypeClass@@  sig=csp ====
int __thiscall TClassFactory_InfantryTypeClass::GetClassIdentifier(TClassFactory_VInfantryTypeClass__ *this)
{
  int v2; // eax
  InfantryTypeClass *v6; // eax
  InfantryTypeClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c2c98*/
    return -2147024809; /*0x6c2c9b*/
  *v8 = 0; /*0x6c2ca8*/
  if ( arg4 ) /*0x6c2cb0*/
    return -2147221232; /*0x6c2cb3*/
  v2 = __2_YAPAXI_Z(0xED0u); /*0x6c2cc1*/
  if ( !v2 ) /*0x6c2ccb*/
    return -2147024882; /*0x6c2ccb*/
  v6 = (InfantryTypeClass *)InfantryTypeClass::Constructor(v2, 0); /*0x6c2cd1*/
  v7 = v6; /*0x6c2cd6*/
  if ( !v6 ) /*0x6c2cda*/
    return -2147024882; /*0x6c2cdd*/
  v5 = (**(int (__stdcall ***)(InfantryTypeClass *, int, _DWORD *))v6->vtable0)(v6, arg8, v8); /*0x6c2cf1*/
  if ( v5 < 0 ) /*0x6c2cf5*/
    (*(void (__thiscall **)(InfantryTypeClass *, int))(*(_DWORD *)v7->vtable0 + 32))(v7, 1); /*0x6c2cfd*/
  return v5; /*0x6c2c9a*/
}


// ==== 0x006C2D10  _TClassFactory_VInfantryTypeClass::GetSize  this=?$TClassFactory@VInfantryTypeClass@@  sig=csp ====
int __thiscall TClassFactory_InfantryTypeClass::GetSize(TClassFactory_VInfantryTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c2d1a*/
  if ( v5 ) /*0x6c2d1d*/
    v2 = v1 + 1; /*0x6c2d1f*/
  else
    v2 = v1 - 1; /*0x6c2d28*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c2d20*/
  return 0; /*0x6c2d25*/
}


// ==== 0x006C2D40  ObjectClass::WinMain_Helper_6C2D40  this=?$TClassFactory@VBulletTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2D40(TClassFactory_VBulletTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c2d42*/
  this->vfptr = &TClassFactory<BulletTypeClass>::`vftable'; /*0x6c2d49*/
  return &this->vfptr; /*0x6c2d4f*/
}


// ==== 0x006C2D50  _TClassFactory_VBulletTypeClass::CreateTClassFactory_BulletTypeClass  this=?$TClassFactory@VBulletTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_BulletTypeClass(TClassFactory_VBulletTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2d57*/
    return -2147467261; /*0x6c2d59*/
  *v4 = 0; /*0x6c2d76*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c2d92*/
    *v4 = v2; /*0x6c2d96*/
  if ( !*v4 ) /*0x6c2d98*/
    return -2147467262; /*0x6c2da0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c2dac*/
  return 0; /*0x6c2d5e*/
}


// ==== 0x006C2DC0  _TClassFactory_VBulletTypeClass::AddRef  this=?$TClassFactory@VBulletTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_BulletTypeClass::AddRef(TClassFactory_VBulletTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2dce*/
}


// ==== 0x006C2DE0  _TClassFactory_VBulletTypeClass::GetClassName  this=?$TClassFactory@VBulletTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_BulletTypeClass::GetClassName(TClassFactory_VBulletTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2df0*/
  if ( !v1 ) /*0x6c2df4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2df7*/
  return v1; /*0x6c2e01*/
}


// ==== 0x006C2E10  _TClassFactory_VBulletTypeClass::GetClassIdentifier  this=?$TClassFactory@VBulletTypeClass@@  sig=csp ====
int __thiscall TClassFactory_BulletTypeClass::GetClassIdentifier(TClassFactory_VBulletTypeClass__ *this)
{
  _BYTE *v2; // eax
  BulletTypeClass *v6; // eax
  BulletTypeClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c2e18*/
    return -2147024809; /*0x6c2e1b*/
  *v8 = 0; /*0x6c2e28*/
  if ( arg4 ) /*0x6c2e30*/
    return -2147221232; /*0x6c2e33*/
  v2 = (_BYTE *)__2_YAPAXI_Z(0x2F8u); /*0x6c2e41*/
  if ( !v2 ) /*0x6c2e4b*/
    return -2147024882; /*0x6c2e4b*/
  v6 = (BulletTypeClass *)BulletTypeClass::Construct(v2, 0); /*0x6c2e51*/
  v7 = v6; /*0x6c2e56*/
  if ( !v6 ) /*0x6c2e5a*/
    return -2147024882; /*0x6c2e5d*/
  v5 = (**(int (__stdcall ***)(BulletTypeClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c2e71*/
  if ( v5 < 0 ) /*0x6c2e75*/
    (*(void (__thiscall **)(BulletTypeClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c2e7d*/
  return v5; /*0x6c2e1a*/
}


// ==== 0x006C2E90  _TClassFactory_VBulletTypeClass::GetSize  this=?$TClassFactory@VBulletTypeClass@@  sig=csp ====
int __thiscall TClassFactory_BulletTypeClass::GetSize(TClassFactory_VBulletTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c2e9a*/
  if ( v5 ) /*0x6c2e9d*/
    v2 = v1 + 1; /*0x6c2e9f*/
  else
    v2 = v1 - 1; /*0x6c2ea8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c2ea0*/
  return 0; /*0x6c2ea5*/
}


// ==== 0x006C2EC0  ObjectClass::WinMain_Helper_6C2EC0  this=?$TClassFactory@VIsometricTileTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2EC0(TClassFactory_VIsometricTileTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c2ec2*/
  this->vfptr = &TClassFactory<IsometricTileTypeClass>::`vftable'; /*0x6c2ec9*/
  return &this->vfptr; /*0x6c2ecf*/
}


// ==== 0x006C2ED0  _TClassFactory_VIsometricTileTypeClass::CreateTClassFactory_IsometricTileTypeClass  this=?$TClassFactory@VIsometricTileTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_IsometricTileTypeClass(TClassFactory_VIsometricTileTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2ed7*/
    return -2147467261; /*0x6c2ed9*/
  *v4 = 0; /*0x6c2ef6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c2f12*/
    *v4 = v2; /*0x6c2f16*/
  if ( !*v4 ) /*0x6c2f18*/
    return -2147467262; /*0x6c2f20*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c2f2c*/
  return 0; /*0x6c2ede*/
}


// ==== 0x006C2F40  _TClassFactory_VIsometricTileTypeClass::AddRef  this=?$TClassFactory@VIsometricTileTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_IsometricTileTypeClass::AddRef(TClassFactory_VIsometricTileTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2f4e*/
}


// ==== 0x006C2F60  _TClassFactory_VIsometricTileTypeClass::GetClassName  this=?$TClassFactory@VIsometricTileTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_IsometricTileTypeClass::GetClassName(TClassFactory_VIsometricTileTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2f70*/
  if ( !v1 ) /*0x6c2f74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2f77*/
  return v1; /*0x6c2f81*/
}


// ==== 0x006C2F90  _TClassFactory_VIsometricTileTypeClass::GetClassIdentifier  this=?$TClassFactory@VIsometricTileTypeClass@@  sig=csp ====
int __thiscall TClassFactory_IsometricTileTypeClass::GetClassIdentifier(TClassFactory_VIsometricTileTypeClass__ *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // [esp+10h] [ebp+8h]
  int v7; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c2f98*/
    return -2147024809; /*0x6c2f9b*/
  *v8 = 0; /*0x6c2fa8*/
  if ( v6 ) /*0x6c2fb0*/
    return -2147221232; /*0x6c2fb3*/
  v2 = (_DWORD *)__2_YAPAXI_Z(0x30Cu); /*0x6c2fc1*/
  if ( !v2 ) /*0x6c2fcb*/
    return -2147024882; /*0x6c2fcb*/
  v3 = TerrainTypeClass::Construct(v2, 0, 0, 0, 0, 0); /*0x6c2fd9*/
  v4 = v3; /*0x6c2fde*/
  if ( !v3 ) /*0x6c2fe2*/
    return -2147024882; /*0x6c2fe5*/
  v5 = (*(int (__stdcall **)(_DWORD *, int, _DWORD *))*v3)(v3, v7, v8); /*0x6c2ff9*/
  if ( v5 < 0 ) /*0x6c2ffd*/
    (*(void (__thiscall **)(_DWORD *, int))(*v4 + 32))(v4, 1); /*0x6c3005*/
  return v5; /*0x6c2f9a*/
}


// ==== 0x006C3010  _TClassFactory_VIsometricTileTypeClass::GetSize  this=?$TClassFactory@VIsometricTileTypeClass@@  sig=csp ====
int __thiscall TClassFactory_IsometricTileTypeClass::GetSize(TClassFactory_VIsometricTileTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c301a*/
  if ( v5 ) /*0x6c301d*/
    v2 = v1 + 1; /*0x6c301f*/
  else
    v2 = v1 - 1; /*0x6c3028*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c3020*/
  return 0; /*0x6c3025*/
}


// ==== 0x006C3040  ObjectClass::WinMain_Helper_6C3040  this=?$TClassFactory@VOverlayTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3040(TClassFactory_VOverlayTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c3042*/
  this->vfptr = &TClassFactory<OverlayTypeClass>::`vftable'; /*0x6c3049*/
  return &this->vfptr; /*0x6c304f*/
}


// ==== 0x006C3050  _TClassFactory_VOverlayTypeClass::CreateTClassFactory_OverlayTypeClass  this=?$TClassFactory@VOverlayTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_OverlayTypeClass(TClassFactory_VOverlayTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3057*/
    return -2147467261; /*0x6c3059*/
  *v4 = 0; /*0x6c3076*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c3092*/
    *v4 = v2; /*0x6c3096*/
  if ( !*v4 ) /*0x6c3098*/
    return -2147467262; /*0x6c30a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c30ac*/
  return 0; /*0x6c305e*/
}


// ==== 0x006C30C0  _TClassFactory_VOverlayTypeClass::AddRef  this=?$TClassFactory@VOverlayTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_OverlayTypeClass::AddRef(TClassFactory_VOverlayTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c30ce*/
}


// ==== 0x006C30E0  _TClassFactory_VOverlayTypeClass::GetClassName  this=?$TClassFactory@VOverlayTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_OverlayTypeClass::GetClassName(TClassFactory_VOverlayTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c30f0*/
  if ( !v1 ) /*0x6c30f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c30f7*/
  return v1; /*0x6c3101*/
}


// ==== 0x006C3110  _TClassFactory_VOverlayTypeClass::GetClassIdentifier  this=?$TClassFactory@VOverlayTypeClass@@  sig=csp ====
int __thiscall TClassFactory_OverlayTypeClass::GetClassIdentifier(TClassFactory_VOverlayTypeClass__ *this)
{
  _DWORD *v2; // eax
  OverlayTypeClass *v6; // eax
  OverlayTypeClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c3118*/
    return -2147024809; /*0x6c311b*/
  *v8 = 0; /*0x6c3128*/
  if ( arg4 ) /*0x6c3130*/
    return -2147221232; /*0x6c3133*/
  v2 = (_DWORD *)__2_YAPAXI_Z(0x2BCu); /*0x6c3141*/
  if ( !v2 ) /*0x6c314b*/
    return -2147024882; /*0x6c314b*/
  v6 = (OverlayTypeClass *)OverlayTypeClass::OverlayTypeClass(v2, 0); /*0x6c3151*/
  v7 = v6; /*0x6c3156*/
  if ( !v6 ) /*0x6c315a*/
    return -2147024882; /*0x6c315d*/
  v5 = (**(int (__stdcall ***)(OverlayTypeClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c3171*/
  if ( v5 < 0 ) /*0x6c3175*/
    (*(void (__thiscall **)(OverlayTypeClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c317d*/
  return v5; /*0x6c311a*/
}


// ==== 0x006C3190  _TClassFactory_VOverlayTypeClass::GetSize  this=?$TClassFactory@VOverlayTypeClass@@  sig=csp ====
int __thiscall TClassFactory_OverlayTypeClass::GetSize(TClassFactory_VOverlayTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c319a*/
  if ( v5 ) /*0x6c319d*/
    v2 = v1 + 1; /*0x6c319f*/
  else
    v2 = v1 - 1; /*0x6c31a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c31a0*/
  return 0; /*0x6c31a5*/
}


// ==== 0x006C31C0  ObjectClass::WinMain_Helper_6C31C0  this=?$TClassFactory@VSmudgeTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C31C0(TClassFactory_VSmudgeTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c31c2*/
  this->vfptr = &TClassFactory<SmudgeTypeClass>::`vftable'; /*0x6c31c9*/
  return &this->vfptr; /*0x6c31cf*/
}


// ==== 0x006C31D0  _TClassFactory_VSmudgeTypeClass::CreateTClassFactory_SmudgeTypeClass  this=?$TClassFactory@VSmudgeTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_SmudgeTypeClass(TClassFactory_VSmudgeTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c31d7*/
    return -2147467261; /*0x6c31d9*/
  *v4 = 0; /*0x6c31f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c3212*/
    *v4 = v2; /*0x6c3216*/
  if ( !*v4 ) /*0x6c3218*/
    return -2147467262; /*0x6c3220*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c322c*/
  return 0; /*0x6c31de*/
}


// ==== 0x006C3240  _TClassFactory_VSmudgeTypeClass::AddRef  this=?$TClassFactory@VSmudgeTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_SmudgeTypeClass::AddRef(TClassFactory_VSmudgeTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c324e*/
}


// ==== 0x006C3260  _TClassFactory_VSmudgeTypeClass::GetClassName  this=?$TClassFactory@VSmudgeTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_SmudgeTypeClass::GetClassName(TClassFactory_VSmudgeTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3270*/
  if ( !v1 ) /*0x6c3274*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3277*/
  return v1; /*0x6c3281*/
}


// ==== 0x006C3290  _TClassFactory_VSmudgeTypeClass::GetClassIdentifier  this=?$TClassFactory@VSmudgeTypeClass@@  sig=csp ====
int __thiscall TClassFactory_SmudgeTypeClass::GetClassIdentifier(TClassFactory_VSmudgeTypeClass__ *this)
{
  char *v2; // eax
  SmudgeTypeClass *v6; // eax
  SmudgeTypeClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c3298*/
    return -2147024809; /*0x6c329b*/
  *v8 = 0; /*0x6c32a8*/
  if ( arg4 ) /*0x6c32b0*/
    return -2147221232; /*0x6c32b3*/
  v2 = (char *)__2_YAPAXI_Z(0x2A4u); /*0x6c32c1*/
  if ( !v2 ) /*0x6c32cb*/
    return -2147024882; /*0x6c32cb*/
  v6 = (SmudgeTypeClass *)SmudgeTypeClass::SmudgeTypeClass(v2, 0); /*0x6c32d1*/
  v7 = v6; /*0x6c32d6*/
  if ( !v6 ) /*0x6c32da*/
    return -2147024882; /*0x6c32dd*/
  v5 = (**(int (__stdcall ***)(SmudgeTypeClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c32f1*/
  if ( v5 < 0 ) /*0x6c32f5*/
    (*(void (__thiscall **)(SmudgeTypeClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c32fd*/
  return v5; /*0x6c329a*/
}


// ==== 0x006C3310  _TClassFactory_VSmudgeTypeClass::GetSize  this=?$TClassFactory@VSmudgeTypeClass@@  sig=csp ====
int __thiscall TClassFactory_SmudgeTypeClass::GetSize(TClassFactory_VSmudgeTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c331a*/
  if ( v5 ) /*0x6c331d*/
    v2 = v1 + 1; /*0x6c331f*/
  else
    v2 = v1 - 1; /*0x6c3328*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c3320*/
  return 0; /*0x6c3325*/
}


// ==== 0x006C3340  ObjectClass::WinMain_Helper_6C3340  this=?$TClassFactory@VUnitClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3340(TClassFactory_VUnitClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c3342*/
  this->vfptr = &TClassFactory<UnitClass>::`vftable'; /*0x6c3349*/
  return &this->vfptr; /*0x6c334f*/
}


// ==== 0x006C3350  _TClassFactory_VUnitClass::CreateTClassFactory_UnitClass  this=?$TClassFactory@VUnitClass@@  sig=csp ====
int __thiscall CreateTClassFactory_UnitClass(TClassFactory_VUnitClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3357*/
    return -2147467261; /*0x6c3359*/
  *v4 = 0; /*0x6c3376*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c3392*/
    *v4 = v2; /*0x6c3396*/
  if ( !*v4 ) /*0x6c3398*/
    return -2147467262; /*0x6c33a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c33ac*/
  return 0; /*0x6c335e*/
}


// ==== 0x006C33C0  _TClassFactory_VUnitClass::AddRef  this=?$TClassFactory@VUnitClass@@  sig=csp ====
LONG __thiscall TClassFactory_UnitClass::AddRef(TClassFactory_VUnitClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c33ce*/
}


// ==== 0x006C33E0  _TClassFactory_VUnitClass::GetClassName  this=?$TClassFactory@VUnitClass@@  sig=csp ====
LONG __thiscall TClassFactory_UnitClass::GetClassName(TClassFactory_VUnitClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c33f0*/
  if ( !v1 ) /*0x6c33f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c33f7*/
  return v1; /*0x6c3401*/
}


// ==== 0x006C3410  _TClassFactory_VUnitClass::ddtor  this=?$TClassFactory@VUnitClass@@  sig=csp ====
int __thiscall TClassFactory_UnitClass::GetSize(TClassFactory_VUnitClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c349a*/
  if ( v5 ) /*0x6c349d*/
    v2 = v1 + 1; /*0x6c349f*/
  else
    v2 = v1 - 1; /*0x6c34a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c34a0*/
  return 0; /*0x6c34a5*/
}


// ==== 0x006C3490  _TClassFactory_VUnitClass::GetSize  this=?$TClassFactory@VUnitClass@@  sig=csp ====
int __thiscall TClassFactory_UnitClass::GetSize(TClassFactory_VUnitClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c349a*/
  if ( v5 ) /*0x6c349d*/
    v2 = v1 + 1; /*0x6c349f*/
  else
    v2 = v1 - 1; /*0x6c34a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c34a0*/
  return 0; /*0x6c34a5*/
}


// ==== 0x006C34C0  ObjectClass::WinMain_Helper_6C34C0  this=?$TClassFactory@VBuildingClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C34C0(TClassFactory_VBuildingClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c34c2*/
  this->vfptr = &TClassFactory<BuildingClass>::`vftable'; /*0x6c34c9*/
  return &this->vfptr; /*0x6c34cf*/
}


// ==== 0x006C34D0  _TClassFactory_VBuildingClass::CreateTClassFactory_BuildingClass  this=?$TClassFactory@VBuildingClass@@  sig=csp ====
int __thiscall CreateTClassFactory_BuildingClass(TClassFactory_VBuildingClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c34d7*/
    return -2147467261; /*0x6c34d9*/
  *v4 = 0; /*0x6c34f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c3512*/
    *v4 = v2; /*0x6c3516*/
  if ( !*v4 ) /*0x6c3518*/
    return -2147467262; /*0x6c3520*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c352c*/
  return 0; /*0x6c34de*/
}


// ==== 0x006C3540  _TClassFactory_VBuildingClass::AddRef  this=?$TClassFactory@VBuildingClass@@  sig=csp ====
LONG __thiscall TClassFactory_BuildingClass::AddRef(TClassFactory_VBuildingClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c354e*/
}


// ==== 0x006C3560  _TClassFactory_VBuildingClass::GetClassName  this=?$TClassFactory@VBuildingClass@@  sig=csp ====
LONG __thiscall TClassFactory_BuildingClass::GetClassName(TClassFactory_VBuildingClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3570*/
  if ( !v1 ) /*0x6c3574*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3577*/
  return v1; /*0x6c3581*/
}


// ==== 0x006C3590  _TClassFactory_VBuildingClass::ddtor  this=?$TClassFactory@VBuildingClass@@  sig=csp ====
int __thiscall TClassFactory_BuildingClass::ddtor(TClassFactory_VBuildingClass__ *this)
{
  int v2; // eax
  FootClass *v3; // eax
  FootClass *v7; // esi
  int v5; // edi
  int v6; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c3598*/
    return -2147024809; /*0x6c359b*/
  *v8 = 0; /*0x6c35a8*/
  if ( v6 ) /*0x6c35b0*/
    return -2147221232; /*0x6c35b3*/
  v2 = OperatorNew(0x720u); /*0x6c35c1*/
  if ( !v2 ) /*0x6c35cb*/
    return -2147024882; /*0x6c35cb*/
  v3 = (FootClass *)BuildingClass::Construct(v2, 0, 0); /*0x6c35d3*/
  v7 = v3; /*0x6c35d8*/
  if ( !v3 ) /*0x6c35dc*/
    return -2147024882; /*0x6c35df*/
  v5 = (**(int (__stdcall ***)(FootClass *, int, _DWORD *))v3->__pad_0)(v3, arg8, v8); /*0x6c35f3*/
  if ( v5 < 0 ) /*0x6c35f7*/
    (*(void (__thiscall **)(FootClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c35ff*/
  return v5; /*0x6c359a*/
}


// ==== 0x006C3610  _TClassFactory_VBuildingClass::GetSize  this=?$TClassFactory@VBuildingClass@@  sig=csp ====
int __thiscall TClassFactory_BuildingClass::GetSize(TClassFactory_VBuildingClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c361a*/
  if ( v5 ) /*0x6c361d*/
    v2 = v1 + 1; /*0x6c361f*/
  else
    v2 = v1 - 1; /*0x6c3628*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c3620*/
  return 0; /*0x6c3625*/
}


// ==== 0x006C3640  ObjectClass::WinMain_Helper_6C3640  this=?$TClassFactory@VAircraftClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3640(TClassFactory_VAircraftClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c3642*/
  this->vfptr = &TClassFactory<AircraftClass>::`vftable'; /*0x6c3649*/
  return &this->vfptr; /*0x6c364f*/
}


// ==== 0x006C3650  _TClassFactory_VAircraftClass::CreateTClassFactory_AircraftClass  this=?$TClassFactory@VAircraftClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AircraftClass(TClassFactory_VAircraftClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3657*/
    return -2147467261; /*0x6c3659*/
  *v4 = 0; /*0x6c3676*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c3692*/
    *v4 = v2; /*0x6c3696*/
  if ( !*v4 ) /*0x6c3698*/
    return -2147467262; /*0x6c36a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c36ac*/
  return 0; /*0x6c365e*/
}


// ==== 0x006C36C0  _TClassFactory_VAircraftClass::AddRef  this=?$TClassFactory@VAircraftClass@@  sig=csp ====
LONG __thiscall TClassFactory_AircraftClass::AddRef(TClassFactory_VAircraftClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c36ce*/
}


// ==== 0x006C36E0  _TClassFactory_VAircraftClass::GetClassName  this=?$TClassFactory@VAircraftClass@@  sig=csp ====
LONG __thiscall TClassFactory_AircraftClass::GetClassName(TClassFactory_VAircraftClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c36f0*/
  if ( !v1 ) /*0x6c36f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c36f7*/
  return v1; /*0x6c3701*/
}


// ==== 0x006C3710  _TClassFactory_VAircraftClass::ddtor  this=?$TClassFactory@VAircraftClass@@  sig=csp ====
int __thiscall TClassFactory_AircraftClass::ddtor(TClassFactory_VAircraftClass__ *this)
{
  int v2; // eax
  AircraftClass *v6; // eax
  AircraftClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c3718*/
    return -2147024809; /*0x6c371b*/
  *v8 = 0; /*0x6c3728*/
  if ( arg4 ) /*0x6c3730*/
    return -2147221232; /*0x6c3733*/
  v2 = OperatorNew(0x6D8u); /*0x6c3741*/
  if ( !v2 ) /*0x6c374b*/
    return -2147024882; /*0x6c374b*/
  v6 = (AircraftClass *)AircraftClass::Construct(v2, 0, 0); /*0x6c3753*/
  v7 = v6; /*0x6c3758*/
  if ( !v6 ) /*0x6c375c*/
    return -2147024882; /*0x6c375f*/
  v5 = (**(int (__stdcall ***)(AircraftClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c3773*/
  if ( v5 < 0 ) /*0x6c3777*/
    (*(void (__thiscall **)(AircraftClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c377f*/
  return v5; /*0x6c371a*/
}


// ==== 0x006C3790  _TClassFactory_VAircraftClass::GetSize  this=?$TClassFactory@VAircraftClass@@  sig=csp ====
int __thiscall TClassFactory_AircraftClass::GetSize(TClassFactory_VAircraftClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c379a*/
  if ( v5 ) /*0x6c379d*/
    v2 = v1 + 1; /*0x6c379f*/
  else
    v2 = v1 - 1; /*0x6c37a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c37a0*/
  return 0; /*0x6c37a5*/
}


// ==== 0x006C37C0  ObjectClass::WinMain_Helper_6C37C0  this=?$TClassFactory@VInfantryClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C37C0(TClassFactory_VInfantryClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c37c2*/
  this->vfptr = &TClassFactory<InfantryClass>::`vftable'; /*0x6c37c9*/
  return &this->vfptr; /*0x6c37cf*/
}


// ==== 0x006C37D0  _TClassFactory_VInfantryClass::CreateTClassFactory_InfantryClass  this=?$TClassFactory@VInfantryClass@@  sig=csp ====
int __thiscall CreateTClassFactory_InfantryClass(TClassFactory_VInfantryClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c37d7*/
    return -2147467261; /*0x6c37d9*/
  *v4 = 0; /*0x6c37f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c3812*/
    *v4 = v2; /*0x6c3816*/
  if ( !*v4 ) /*0x6c3818*/
    return -2147467262; /*0x6c3820*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c382c*/
  return 0; /*0x6c37de*/
}


// ==== 0x006C3840  _TClassFactory_VInfantryClass::AddRef  this=?$TClassFactory@VInfantryClass@@  sig=csp ====
LONG __thiscall TClassFactory_InfantryClass::AddRef(TClassFactory_VInfantryClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c384e*/
}


// ==== 0x006C3860  _TClassFactory_VInfantryClass::GetClassName  this=?$TClassFactory@VInfantryClass@@  sig=csp ====
LONG __thiscall TClassFactory_InfantryClass::GetClassName(TClassFactory_VInfantryClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3870*/
  if ( !v1 ) /*0x6c3874*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3877*/
  return v1; /*0x6c3881*/
}


// ==== 0x006C3890  _TClassFactory_VInfantryClass::ddtor  this=?$TClassFactory@VInfantryClass@@  sig=csp ====
int __thiscall TClassFactory_InfantryClass::ddtor(TClassFactory_VInfantryClass__ *this)
{
  int v2; // eax
  InfantryClass *v6; // eax
  InfantryClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c3898*/
    return -2147024809; /*0x6c389b*/
  *v8 = 0; /*0x6c38a8*/
  if ( arg4 ) /*0x6c38b0*/
    return -2147221232; /*0x6c38b3*/
  v2 = OperatorNew(0x6F0u); /*0x6c38c1*/
  if ( !v2 ) /*0x6c38cb*/
    return -2147024882; /*0x6c38cb*/
  v6 = (InfantryClass *)InfantryClass::Construct(v2, 0, 0); /*0x6c38d3*/
  v7 = v6; /*0x6c38d8*/
  if ( !v6 ) /*0x6c38dc*/
    return -2147024882; /*0x6c38df*/
  v5 = (**(int (__stdcall ***)(InfantryClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c38f3*/
  if ( v5 < 0 ) /*0x6c38f7*/
    (*(void (__thiscall **)(InfantryClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c38ff*/
  return v5; /*0x6c389a*/
}


// ==== 0x006C3910  _TClassFactory_VInfantryClass::GetSize  this=?$TClassFactory@VInfantryClass@@  sig=csp ====
int __thiscall TClassFactory_InfantryClass::GetSize(TClassFactory_VInfantryClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c391a*/
  if ( v5 ) /*0x6c391d*/
    v2 = v1 + 1; /*0x6c391f*/
  else
    v2 = v1 - 1; /*0x6c3928*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c3920*/
  return 0; /*0x6c3925*/
}


// ==== 0x006C3940  ObjectClass::WinMain_Helper_6C3940  this=?$TClassFactory@VAnimClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3940(TClassFactory_VAnimClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c3942*/
  this->vfptr = &TClassFactory<AnimClass>::`vftable'; /*0x6c3949*/
  return &this->vfptr; /*0x6c394f*/
}


// ==== 0x006C3950  _TClassFactory_VAnimClass::CreateTClassFactory_AnimClass  this=?$TClassFactory@VAnimClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AnimClass(TClassFactory_VAnimClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3957*/
    return -2147467261; /*0x6c3959*/
  *v4 = 0; /*0x6c3976*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c3992*/
    *v4 = v2; /*0x6c3996*/
  if ( !*v4 ) /*0x6c3998*/
    return -2147467262; /*0x6c39a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c39ac*/
  return 0; /*0x6c395e*/
}


// ==== 0x006C39C0  _TClassFactory_VAnimClass::AddRef  this=?$TClassFactory@VAnimClass@@  sig=csp ====
LONG __thiscall TClassFactory_AnimClass::AddRef(TClassFactory_VAnimClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c39ce*/
}


// ==== 0x006C39E0  _TClassFactory_VAnimClass::GetClassName  this=?$TClassFactory@VAnimClass@@  sig=csp ====
LONG __thiscall TClassFactory_AnimClass::GetClassName(TClassFactory_VAnimClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c39f0*/
  if ( !v1 ) /*0x6c39f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c39f7*/
  return v1; /*0x6c3a01*/
}


// ==== 0x006C3A10  _TClassFactory_VAnimClass::ddtor  this=?$TClassFactory@VAnimClass@@  sig=csp ====
int __thiscall TClassFactory_AnimClass::ddtor(TClassFactory_VAnimClass__ *this)
{
  int v2; // eax
  AnimClass *v6; // eax
  AnimClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c3a18*/
    return -2147024809; /*0x6c3a1b*/
  *v8 = 0; /*0x6c3a28*/
  if ( arg4 ) /*0x6c3a30*/
    return -2147221232; /*0x6c3a33*/
  v2 = OperatorNew(0x1C8u); /*0x6c3a41*/
  if ( !v2 ) /*0x6c3a4b*/
    return -2147024882; /*0x6c3a4b*/
  v6 = (AnimClass *)AnimClass::SimpleCtor(v2); /*0x6c3a4f*/
  v7 = v6; /*0x6c3a54*/
  if ( !v6 ) /*0x6c3a58*/
    return -2147024882; /*0x6c3a5b*/
  v5 = (*(int (__stdcall **)(AnimClass *, int, _DWORD *))v6->field_0)(v6, arg8, v8); /*0x6c3a6f*/
  if ( v5 < 0 ) /*0x6c3a73*/
    (*(void (__thiscall **)(AnimClass *, int))(v7->field_0 + 32))(v7, 1); /*0x6c3a7b*/
  return v5; /*0x6c3a1a*/
}


// ==== 0x006C3A90  _TClassFactory_VAnimClass::GetSize  this=?$TClassFactory@VAnimClass@@  sig=csp ====
int __thiscall TClassFactory_AnimClass::GetSize(TClassFactory_VAnimClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c3a9a*/
  if ( v5 ) /*0x6c3a9d*/
    v2 = v1 + 1; /*0x6c3a9f*/
  else
    v2 = v1 - 1; /*0x6c3aa8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c3aa0*/
  return 0; /*0x6c3aa5*/
}


// ==== 0x006C3AC0  ObjectClass::WinMain_Helper_6C3AC0  this=?$TClassFactory@VAnimTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3AC0(TClassFactory_VAnimTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c3ac2*/
  this->vfptr = &TClassFactory<AnimTypeClass>::`vftable'; /*0x6c3ac9*/
  return &this->vfptr; /*0x6c3acf*/
}


// ==== 0x006C3AD0  _TClassFactory_VAnimTypeClass::CreateTClassFactory_AnimTypeClass  this=?$TClassFactory@VAnimTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AnimTypeClass(TClassFactory_VAnimTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3ad7*/
    return -2147467261; /*0x6c3ad9*/
  *v4 = 0; /*0x6c3af6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c3b12*/
    *v4 = v2; /*0x6c3b16*/
  if ( !*v4 ) /*0x6c3b18*/
    return -2147467262; /*0x6c3b20*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c3b2c*/
  return 0; /*0x6c3ade*/
}


// ==== 0x006C3B40  _TClassFactory_VAnimTypeClass::AddRef  this=?$TClassFactory@VAnimTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AnimTypeClass::AddRef(TClassFactory_VAnimTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3b4e*/
}


// ==== 0x006C3B60  _TClassFactory_VAnimTypeClass::GetClassName  this=?$TClassFactory@VAnimTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AnimTypeClass::GetClassName(TClassFactory_VAnimTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3b70*/
  if ( !v1 ) /*0x6c3b74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3b77*/
  return v1; /*0x6c3b81*/
}


// ==== 0x006C3B90  _TClassFactory_VAnimTypeClass::GetClassIdentifier  this=?$TClassFactory@VAnimTypeClass@@  sig=csp ====
int __thiscall TClassFactory_AnimTypeClass::GetClassIdentifier(TClassFactory_VAnimTypeClass__ *this)
{
  _DWORD *v2; // eax
  AnimTypeClass *v6; // eax
  AnimTypeClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c3b98*/
    return -2147024809; /*0x6c3b9b*/
  *v8 = 0; /*0x6c3ba8*/
  if ( arg4 ) /*0x6c3bb0*/
    return -2147221232; /*0x6c3bb3*/
  v2 = (_DWORD *)__2_YAPAXI_Z(0x378u); /*0x6c3bc1*/
  if ( !v2 ) /*0x6c3bcb*/
    return -2147024882; /*0x6c3bcb*/
  v6 = (AnimTypeClass *)AnimTypeClass::Construct(v2, 0); /*0x6c3bd1*/
  v7 = v6; /*0x6c3bd6*/
  if ( !v6 ) /*0x6c3bda*/
    return -2147024882; /*0x6c3bdd*/
  v5 = (**(int (__stdcall ***)(AnimTypeClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c3bf1*/
  if ( v5 < 0 ) /*0x6c3bf5*/
    (*(void (__thiscall **)(AnimTypeClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c3bfd*/
  return v5; /*0x6c3b9a*/
}


// ==== 0x006C3C10  _TClassFactory_VAnimTypeClass::GetSize  this=?$TClassFactory@VAnimTypeClass@@  sig=csp ====
int __thiscall TClassFactory_AnimTypeClass::GetSize(TClassFactory_VAnimTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c3c1a*/
  if ( v5 ) /*0x6c3c1d*/
    v2 = v1 + 1; /*0x6c3c1f*/
  else
    v2 = v1 - 1; /*0x6c3c28*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c3c20*/
  return 0; /*0x6c3c25*/
}


// ==== 0x006C3C40  ObjectClass::WinMain_Helper_6C3C40  this=?$TClassFactory@VHouseTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3C40(TClassFactory_VHouseTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c3c42*/
  this->vfptr = &TClassFactory<HouseTypeClass>::`vftable'; /*0x6c3c49*/
  return &this->vfptr; /*0x6c3c4f*/
}


// ==== 0x006C3C50  _TClassFactory_VHouseTypeClass::CreateTClassFactory_HouseTypeClass  this=?$TClassFactory@VHouseTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_HouseTypeClass(TClassFactory_VHouseTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3c57*/
    return -2147467261; /*0x6c3c59*/
  *v4 = 0; /*0x6c3c76*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c3c92*/
    *v4 = v2; /*0x6c3c96*/
  if ( !*v4 ) /*0x6c3c98*/
    return -2147467262; /*0x6c3ca0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c3cac*/
  return 0; /*0x6c3c5e*/
}


// ==== 0x006C3CC0  _TClassFactory_VHouseTypeClass::AddRef  this=?$TClassFactory@VHouseTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_HouseTypeClass::AddRef(TClassFactory_VHouseTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3cce*/
}


// ==== 0x006C3CE0  _TClassFactory_VHouseTypeClass::GetClassName  this=?$TClassFactory@VHouseTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_HouseTypeClass::GetClassName(TClassFactory_VHouseTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3cf0*/
  if ( !v1 ) /*0x6c3cf4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3cf7*/
  return v1; /*0x6c3d01*/
}


// ==== 0x006C3D10  _TClassFactory_VHouseTypeClass::GetClassIdentifier  this=?$TClassFactory@VHouseTypeClass@@  sig=csp ====
int __thiscall TClassFactory_HouseTypeClass::GetClassIdentifier(TClassFactory_VHouseTypeClass__ *this)
{
  _BYTE *v2; // eax
  HouseTypeClass *v6; // eax
  HouseTypeClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c3d18*/
    return -2147024809; /*0x6c3d1b*/
  *v8 = 0; /*0x6c3d28*/
  if ( arg4 ) /*0x6c3d30*/
    return -2147221232; /*0x6c3d33*/
  v2 = (_BYTE *)__2_YAPAXI_Z(0x1B0u); /*0x6c3d41*/
  if ( !v2 ) /*0x6c3d4b*/
    return -2147024882; /*0x6c3d4b*/
  v6 = (HouseTypeClass *)SuperWeaponTypeClass::Construct(v2, 0); /*0x6c3d51*/
  v7 = v6; /*0x6c3d56*/
  if ( !v6 ) /*0x6c3d5a*/
    return -2147024882; /*0x6c3d5d*/
  v5 = (**(int (__stdcall ***)(HouseTypeClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c3d71*/
  if ( v5 < 0 ) /*0x6c3d75*/
    (*(void (__thiscall **)(HouseTypeClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c3d7d*/
  return v5; /*0x6c3d1a*/
}


// ==== 0x006C3D90  _TClassFactory_VHouseTypeClass::GetSize  this=?$TClassFactory@VHouseTypeClass@@  sig=csp ====
int __thiscall TClassFactory_HouseTypeClass::GetSize(TClassFactory_VHouseTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c3d9a*/
  if ( v5 ) /*0x6c3d9d*/
    v2 = v1 + 1; /*0x6c3d9f*/
  else
    v2 = v1 - 1; /*0x6c3da8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c3da0*/
  return 0; /*0x6c3da5*/
}


// ==== 0x006C3DC0  ObjectClass::WinMain_Helper_6C3DC0  this=?$TClassFactory@VHouseClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3DC0(TClassFactory_VHouseClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c3dc2*/
  this->vfptr = &TClassFactory<HouseClass>::`vftable'; /*0x6c3dc9*/
  return &this->vfptr; /*0x6c3dcf*/
}


// ==== 0x006C3DD0  _TClassFactory_VHouseClass::CreateTClassFactory_HouseClass  this=?$TClassFactory@VHouseClass@@  sig=csp ====
int __thiscall CreateTClassFactory_HouseClass(TClassFactory_VHouseClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3dd7*/
    return -2147467261; /*0x6c3dd9*/
  *v4 = 0; /*0x6c3df6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c3e12*/
    *v4 = v2; /*0x6c3e16*/
  if ( !*v4 ) /*0x6c3e18*/
    return -2147467262; /*0x6c3e20*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c3e2c*/
  return 0; /*0x6c3dde*/
}


// ==== 0x006C3E40  _TClassFactory_VHouseClass::AddRef  this=?$TClassFactory@VHouseClass@@  sig=csp ====
LONG __thiscall TClassFactory_HouseClass::AddRef(TClassFactory_VHouseClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3e4e*/
}


// ==== 0x006C3E60  _TClassFactory_VHouseClass::GetClassName  this=?$TClassFactory@VHouseClass@@  sig=csp ====
LONG __thiscall TClassFactory_HouseClass::GetClassName(TClassFactory_VHouseClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3e70*/
  if ( !v1 ) /*0x6c3e74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3e77*/
  return v1; /*0x6c3e81*/
}


// ==== 0x006C3E90  _TClassFactory_VHouseClass::ddtor  this=?$TClassFactory@VHouseClass@@  sig=csp ====
int __thiscall TClassFactory_HouseClass::ddtor(TClassFactory_VHouseClass__ *this)
{
  int v2; // eax
  int (__stdcall ***v3)(_DWORD, int, _DWORD *); // eax
  int (__stdcall ***v4)(_DWORD, _DWORD, _DWORD *); // esi
  int v5; // edi
  int v6; // [esp+10h] [ebp+8h]
  int v7; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c3e98*/
    return -2147024809; /*0x6c3e9b*/
  *v8 = 0; /*0x6c3ea8*/
  if ( v6 ) /*0x6c3eb0*/
    return -2147221232; /*0x6c3eb3*/
  v2 = OperatorNew(0x160B8u); /*0x6c3ec1*/
  if ( !v2 ) /*0x6c3ecb*/
    return -2147024882; /*0x6c3ecb*/
  v3 = (int (__stdcall ***)(_DWORD, int, _DWORD *))HouseClass::Construct(v2, 0); /*0x6c3ed1*/
  v4 = v3; /*0x6c3ed6*/
  if ( !v3 ) /*0x6c3eda*/
    return -2147024882; /*0x6c3edd*/
  v5 = (**v3)(v3, v7, v8); /*0x6c3ef1*/
  if ( v5 < 0 ) /*0x6c3ef5*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD, _DWORD *), int))(*v4)[8])(v4, 1); /*0x6c3efd*/
  return v5; /*0x6c3e9a*/
}


// ==== 0x006C3F10  _TClassFactory_VHouseClass::GetSize  this=?$TClassFactory@VHouseClass@@  sig=csp ====
int __thiscall TClassFactory_HouseClass::GetSize(TClassFactory_VHouseClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c3f1a*/
  if ( v5 ) /*0x6c3f1d*/
    v2 = v1 + 1; /*0x6c3f1f*/
  else
    v2 = v1 - 1; /*0x6c3f28*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c3f20*/
  return 0; /*0x6c3f25*/
}


// ==== 0x006C3F40  ObjectClass::WinMain_Helper_6C3F40  this=?$TClassFactory@VDriveLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3F40(TClassFactory_VDriveLocomotionClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c3f42*/
  this->vfptr = &TClassFactory<DriveLocomotionClass>::`vftable'; /*0x6c3f49*/
  return &this->vfptr; /*0x6c3f4f*/
}


// ==== 0x006C3F50  _TClassFactory_VDriveLocomotionClass::CreateTClassFactory_DriveLocomotionClass  this=?$TClassFactory@VDriveLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_DriveLocomotionClass(TClassFactory_VDriveLocomotionClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3f57*/
    return -2147467261; /*0x6c3f59*/
  *v4 = 0; /*0x6c3f76*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c3f92*/
    *v4 = v2; /*0x6c3f96*/
  if ( !*v4 ) /*0x6c3f98*/
    return -2147467262; /*0x6c3fa0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c3fac*/
  return 0; /*0x6c3f5e*/
}


// ==== 0x006C3FC0  _TClassFactory_VDriveLocomotionClass::AddRef  this=?$TClassFactory@VDriveLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_DriveLocomotionClass::AddRef(TClassFactory_VDriveLocomotionClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3fce*/
}


// ==== 0x006C3FE0  _TClassFactory_VDriveLocomotionClass::GetClassName  this=?$TClassFactory@VDriveLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_DriveLocomotionClass::GetClassName(TClassFactory_VDriveLocomotionClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3ff0*/
  if ( !v1 ) /*0x6c3ff4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3ff7*/
  return v1; /*0x6c4001*/
}


// ==== 0x006C4010  _TClassFactory_VDriveLocomotionClass::ddtor  this=?$TClassFactory@VDriveLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_DriveLocomotionClass::ddtor(TClassFactory_VDriveLocomotionClass__ *this)
{
  int v2; // eax
  DriveLocomotionClass *v6; // eax
  DriveLocomotionClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c4018*/
    return -2147024809; /*0x6c401b*/
  *v8 = 0; /*0x6c4028*/
  if ( arg4 ) /*0x6c4030*/
    return -2147221232; /*0x6c4033*/
  v2 = OperatorNew(0x70u); /*0x6c403e*/
  if ( !v2 ) /*0x6c4048*/
    return -2147024882; /*0x6c4048*/
  v6 = (DriveLocomotionClass *)LocomotionClass::Initialize(v2); /*0x6c404c*/
  v7 = v6; /*0x6c4051*/
  if ( !v6 ) /*0x6c4055*/
    return -2147024882; /*0x6c4058*/
  v5 = (**(int (__stdcall ***)(DriveLocomotionClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c406c*/
  if ( v5 < 0 ) /*0x6c4070*/
    (*(void (__thiscall **)(DriveLocomotionClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c4078*/
  return v5; /*0x6c401a*/
}


// ==== 0x006C4090  _TClassFactory_VDriveLocomotionClass::GetSize  this=?$TClassFactory@VDriveLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_DriveLocomotionClass::GetSize(TClassFactory_VDriveLocomotionClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c409a*/
  if ( v5 ) /*0x6c409d*/
    v2 = v1 + 1; /*0x6c409f*/
  else
    v2 = v1 - 1; /*0x6c40a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c40a0*/
  return 0; /*0x6c40a5*/
}


// ==== 0x006C40C0  ObjectClass::WinMain_Helper_6C40C0  this=?$TClassFactory@VJumpjetLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C40C0(TClassFactory_VJumpjetLocomotionClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c40c2*/
  this->vfptr = &TClassFactory<JumpjetLocomotionClass>::`vftable'; /*0x6c40c9*/
  return &this->vfptr; /*0x6c40cf*/
}


// ==== 0x006C40D0  _TClassFactory_VJumpjetLocomotionClass::CreateTClassFactory_JumpjetLocomotionClass  this=?$TClassFactory@VJumpjetLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_JumpjetLocomotionClass(TClassFactory_VJumpjetLocomotionClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c40d7*/
    return -2147467261; /*0x6c40d9*/
  *v4 = 0; /*0x6c40f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c4112*/
    *v4 = v2; /*0x6c4116*/
  if ( !*v4 ) /*0x6c4118*/
    return -2147467262; /*0x6c4120*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c412c*/
  return 0; /*0x6c40de*/
}


// ==== 0x006C4140  _TClassFactory_VJumpjetLocomotionClass::AddRef  this=?$TClassFactory@VJumpjetLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_JumpjetLocomotionClass::AddRef(TClassFactory_VJumpjetLocomotionClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c414e*/
}


// ==== 0x006C4160  _TClassFactory_VJumpjetLocomotionClass::GetClassName  this=?$TClassFactory@VJumpjetLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_JumpjetLocomotionClass::GetClassName(TClassFactory_VJumpjetLocomotionClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4170*/
  if ( !v1 ) /*0x6c4174*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4177*/
  return v1; /*0x6c4181*/
}


// ==== 0x006C4190  _TClassFactory_VJumpjetLocomotionClass::ddtor  this=?$TClassFactory@VJumpjetLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_JumpjetLocomotionClass::ddtor(TClassFactory_VJumpjetLocomotionClass__ *this)
{
  int v2; // eax
  JumpjetLocomotionClass *v6; // eax
  JumpjetLocomotionClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c4198*/
    return -2147024809; /*0x6c419b*/
  *v8 = 0; /*0x6c41a8*/
  if ( arg4 ) /*0x6c41b0*/
    return -2147221232; /*0x6c41b3*/
  v2 = OperatorNew(0x98u); /*0x6c41c1*/
  if ( !v2 ) /*0x6c41cb*/
    return -2147024882; /*0x6c41cb*/
  v6 = (JumpjetLocomotionClass *)LocomotionClass::Update(v2); /*0x6c41cf*/
  v7 = v6; /*0x6c41d4*/
  if ( !v6 ) /*0x6c41d8*/
    return -2147024882; /*0x6c41db*/
  v5 = (**(int (__stdcall ***)(JumpjetLocomotionClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c41ef*/
  if ( v5 < 0 ) /*0x6c41f3*/
    (*(void (__thiscall **)(JumpjetLocomotionClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c41fb*/
  return v5; /*0x6c419a*/
}


// ==== 0x006C4210  _TClassFactory_VJumpjetLocomotionClass::GetSize  this=?$TClassFactory@VJumpjetLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_JumpjetLocomotionClass::GetSize(TClassFactory_VJumpjetLocomotionClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c421a*/
  if ( v5 ) /*0x6c421d*/
    v2 = v1 + 1; /*0x6c421f*/
  else
    v2 = v1 - 1; /*0x6c4228*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c4220*/
  return 0; /*0x6c4225*/
}


// ==== 0x006C4240  ObjectClass::WinMain_Helper_6C4240  this=?$TClassFactory@VHoverLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4240(TClassFactory_VHoverLocomotionClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c4242*/
  this->vfptr = &TClassFactory<HoverLocomotionClass>::`vftable'; /*0x6c4249*/
  return &this->vfptr; /*0x6c424f*/
}


// ==== 0x006C4250  _TClassFactory_VHoverLocomotionClass::CreateTClassFactory_HoverLocomotionClass  this=?$TClassFactory@VHoverLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_HoverLocomotionClass(TClassFactory_VHoverLocomotionClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4257*/
    return -2147467261; /*0x6c4259*/
  *v4 = 0; /*0x6c4276*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c4292*/
    *v4 = v2; /*0x6c4296*/
  if ( !*v4 ) /*0x6c4298*/
    return -2147467262; /*0x6c42a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c42ac*/
  return 0; /*0x6c425e*/
}


// ==== 0x006C42C0  _TClassFactory_VHoverLocomotionClass::AddRef  this=?$TClassFactory@VHoverLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_HoverLocomotionClass::AddRef(TClassFactory_VHoverLocomotionClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c42ce*/
}


// ==== 0x006C42E0  _TClassFactory_VHoverLocomotionClass::GetClassName  this=?$TClassFactory@VHoverLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_HoverLocomotionClass::GetClassName(TClassFactory_VHoverLocomotionClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c42f0*/
  if ( !v1 ) /*0x6c42f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c42f7*/
  return v1; /*0x6c4301*/
}


// ==== 0x006C4310  _TClassFactory_VHoverLocomotionClass::ddtor  this=?$TClassFactory@VHoverLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_HoverLocomotionClass::ddtor(TClassFactory_VHoverLocomotionClass__ *this)
{
  int v2; // eax
  HoverLocomotionClass *v6; // eax
  HoverLocomotionClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c4318*/
    return -2147024809; /*0x6c431b*/
  *v8 = 0; /*0x6c4328*/
  if ( arg4 ) /*0x6c4330*/
    return -2147221232; /*0x6c4333*/
  v2 = OperatorNew(0x78u); /*0x6c433e*/
  if ( !v2 ) /*0x6c4348*/
    return -2147024882; /*0x6c4348*/
  v6 = (HoverLocomotionClass *)LocomotionClass::ProcessData(v2); /*0x6c434c*/
  v7 = v6; /*0x6c4351*/
  if ( !v6 ) /*0x6c4355*/
    return -2147024882; /*0x6c4358*/
  v5 = (**(int (__stdcall ***)(HoverLocomotionClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c436c*/
  if ( v5 < 0 ) /*0x6c4370*/
    (*(void (__thiscall **)(HoverLocomotionClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c4378*/
  return v5; /*0x6c431a*/
}


// ==== 0x006C4390  _TClassFactory_VHoverLocomotionClass::GetSize  this=?$TClassFactory@VHoverLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_HoverLocomotionClass::GetSize(TClassFactory_VHoverLocomotionClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c439a*/
  if ( v5 ) /*0x6c439d*/
    v2 = v1 + 1; /*0x6c439f*/
  else
    v2 = v1 - 1; /*0x6c43a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c43a0*/
  return 0; /*0x6c43a5*/
}


// ==== 0x006C43C0  ObjectClass::WinMain_Helper_6C43C0  this=?$TClassFactory@VRocketLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C43C0(TClassFactory_VRocketLocomotionClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c43c2*/
  this->vfptr = &TClassFactory<RocketLocomotionClass>::`vftable'; /*0x6c43c9*/
  return &this->vfptr; /*0x6c43cf*/
}


// ==== 0x006C43D0  _TClassFactory_VRocketLocomotionClass::CreateTClassFactory_RocketLocomotionClass  this=?$TClassFactory@VRocketLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_RocketLocomotionClass(TClassFactory_VRocketLocomotionClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c43d7*/
    return -2147467261; /*0x6c43d9*/
  *v4 = 0; /*0x6c43f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c4412*/
    *v4 = v2; /*0x6c4416*/
  if ( !*v4 ) /*0x6c4418*/
    return -2147467262; /*0x6c4420*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c442c*/
  return 0; /*0x6c43de*/
}


// ==== 0x006C4440  _TClassFactory_VRocketLocomotionClass::AddRef  this=?$TClassFactory@VRocketLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_RocketLocomotionClass::AddRef(TClassFactory_VRocketLocomotionClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c444e*/
}


// ==== 0x006C4460  _TClassFactory_VRocketLocomotionClass::GetClassName  this=?$TClassFactory@VRocketLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_RocketLocomotionClass::GetClassName(TClassFactory_VRocketLocomotionClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4470*/
  if ( !v1 ) /*0x6c4474*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4477*/
  return v1; /*0x6c4481*/
}


// ==== 0x006C4490  _TClassFactory_VRocketLocomotionClass::ddtor  this=?$TClassFactory@VRocketLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_RocketLocomotionClass::ddtor(TClassFactory_VRocketLocomotionClass__ *this)
{
  int v2; // eax
  RocketLocomotionClass *v6; // eax
  RocketLocomotionClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c4498*/
    return -2147024809; /*0x6c449b*/
  *v8 = 0; /*0x6c44a8*/
  if ( arg4 ) /*0x6c44b0*/
    return -2147221232; /*0x6c44b3*/
  v2 = OperatorNew(0x60u); /*0x6c44be*/
  if ( !v2 ) /*0x6c44c8*/
    return -2147024882; /*0x6c44c8*/
  v6 = (RocketLocomotionClass *)RocketLocomotionClass::RocketLocomotionClass(v2); /*0x6c44cc*/
  v7 = v6; /*0x6c44d1*/
  if ( !v6 ) /*0x6c44d5*/
    return -2147024882; /*0x6c44d8*/
  v5 = (**(int (__stdcall ***)(RocketLocomotionClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c44ec*/
  if ( v5 < 0 ) /*0x6c44f0*/
    (*(void (__thiscall **)(RocketLocomotionClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c44f8*/
  return v5; /*0x6c449a*/
}


// ==== 0x006C4510  _TClassFactory_VRocketLocomotionClass::GetSize  this=?$TClassFactory@VRocketLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_RocketLocomotionClass::GetSize(TClassFactory_VRocketLocomotionClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c451a*/
  if ( v5 ) /*0x6c451d*/
    v2 = v1 + 1; /*0x6c451f*/
  else
    v2 = v1 - 1; /*0x6c4528*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c4520*/
  return 0; /*0x6c4525*/
}


// ==== 0x006C4540  ObjectClass::WinMain_Helper_6C4540  this=?$TClassFactory@VTunnelLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4540(TClassFactory_VTunnelLocomotionClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c4542*/
  this->vfptr = &TClassFactory<TunnelLocomotionClass>::`vftable'; /*0x6c4549*/
  return &this->vfptr; /*0x6c454f*/
}


// ==== 0x006C4550  _TClassFactory_VTunnelLocomotionClass::CreateTClassFactory_TunnelLocomotionClass  this=?$TClassFactory@VTunnelLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TunnelLocomotionClass(TClassFactory_VTunnelLocomotionClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4557*/
    return -2147467261; /*0x6c4559*/
  *v4 = 0; /*0x6c4576*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c4592*/
    *v4 = v2; /*0x6c4596*/
  if ( !*v4 ) /*0x6c4598*/
    return -2147467262; /*0x6c45a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c45ac*/
  return 0; /*0x6c455e*/
}


// ==== 0x006C45C0  _TClassFactory_VTunnelLocomotionClass::AddRef  this=?$TClassFactory@VTunnelLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_TunnelLocomotionClass::AddRef(TClassFactory_VTunnelLocomotionClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c45ce*/
}


// ==== 0x006C45E0  _TClassFactory_VTunnelLocomotionClass::GetClassName  this=?$TClassFactory@VTunnelLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_TunnelLocomotionClass::GetClassName(TClassFactory_VTunnelLocomotionClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c45f0*/
  if ( !v1 ) /*0x6c45f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c45f7*/
  return v1; /*0x6c4601*/
}


// ==== 0x006C4610  _TClassFactory_VTunnelLocomotionClass::ddtor  this=?$TClassFactory@VTunnelLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_TunnelLocomotionClass::ddtor(TClassFactory_VTunnelLocomotionClass__ *this)
{
  int v2; // eax
  TunnelLocomotionClass *v6; // eax
  TunnelLocomotionClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c4618*/
    return -2147024809; /*0x6c461b*/
  *v8 = 0; /*0x6c4628*/
  if ( arg4 ) /*0x6c4630*/
    return -2147221232; /*0x6c4633*/
  v2 = OperatorNew(0x3Cu); /*0x6c463e*/
  if ( !v2 ) /*0x6c4648*/
    return -2147024882; /*0x6c4648*/
  v6 = (TunnelLocomotionClass *)SmallFunc_728A00(v2); /*0x6c464c*/
  v7 = v6; /*0x6c4651*/
  if ( !v6 ) /*0x6c4655*/
    return -2147024882; /*0x6c4658*/
  v5 = (**(int (__stdcall ***)(TunnelLocomotionClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c466c*/
  if ( v5 < 0 ) /*0x6c4670*/
    (*(void (__thiscall **)(TunnelLocomotionClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c4678*/
  return v5; /*0x6c461a*/
}


// ==== 0x006C4690  _TClassFactory_VTunnelLocomotionClass::GetSize  this=?$TClassFactory@VTunnelLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_TunnelLocomotionClass::GetSize(TClassFactory_VTunnelLocomotionClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c469a*/
  if ( v5 ) /*0x6c469d*/
    v2 = v1 + 1; /*0x6c469f*/
  else
    v2 = v1 - 1; /*0x6c46a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c46a0*/
  return 0; /*0x6c46a5*/
}


// ==== 0x006C46C0  ObjectClass::WinMain_Helper_6C46C0  this=?$TClassFactory@VWalkLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C46C0(TClassFactory_VWalkLocomotionClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c46c2*/
  this->vfptr = &TClassFactory<WalkLocomotionClass>::`vftable'; /*0x6c46c9*/
  return &this->vfptr; /*0x6c46cf*/
}


// ==== 0x006C46D0  _TClassFactory_VWalkLocomotionClass::CreateTClassFactory_WalkLocomotionClass  this=?$TClassFactory@VWalkLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_WalkLocomotionClass(TClassFactory_VWalkLocomotionClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c46d7*/
    return -2147467261; /*0x6c46d9*/
  *v4 = 0; /*0x6c46f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c4712*/
    *v4 = v2; /*0x6c4716*/
  if ( !*v4 ) /*0x6c4718*/
    return -2147467262; /*0x6c4720*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c472c*/
  return 0; /*0x6c46de*/
}


// ==== 0x006C4740  _TClassFactory_VWalkLocomotionClass::AddRef  this=?$TClassFactory@VWalkLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_WalkLocomotionClass::AddRef(TClassFactory_VWalkLocomotionClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c474e*/
}


// ==== 0x006C4760  _TClassFactory_VWalkLocomotionClass::GetClassName  this=?$TClassFactory@VWalkLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_WalkLocomotionClass::GetClassName(TClassFactory_VWalkLocomotionClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4770*/
  if ( !v1 ) /*0x6c4774*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4777*/
  return v1; /*0x6c4781*/
}


// ==== 0x006C4790  _TClassFactory_VWalkLocomotionClass::ddtor  this=?$TClassFactory@VWalkLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_WalkLocomotionClass::ddtor(TClassFactory_VWalkLocomotionClass__ *this)
{
  int v2; // eax
  WalkLocomotionClass *v6; // eax
  WalkLocomotionClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c4798*/
    return -2147024809; /*0x6c479b*/
  *v8 = 0; /*0x6c47a8*/
  if ( arg4 ) /*0x6c47b0*/
    return -2147221232; /*0x6c47b3*/
  v2 = OperatorNew(0x3Cu); /*0x6c47be*/
  if ( !v2 ) /*0x6c47c8*/
    return -2147024882; /*0x6c47c8*/
  v6 = (WalkLocomotionClass *)VoxelAnimClass::Reset(v2); /*0x6c47cc*/
  v7 = v6; /*0x6c47d1*/
  if ( !v6 ) /*0x6c47d5*/
    return -2147024882; /*0x6c47d8*/
  v5 = (**(int (__stdcall ***)(WalkLocomotionClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c47ec*/
  if ( v5 < 0 ) /*0x6c47f0*/
    (*(void (__thiscall **)(WalkLocomotionClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c47f8*/
  return v5; /*0x6c479a*/
}


// ==== 0x006C4810  _TClassFactory_VWalkLocomotionClass::GetSize  this=?$TClassFactory@VWalkLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_WalkLocomotionClass::GetSize(TClassFactory_VWalkLocomotionClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c481a*/
  if ( v5 ) /*0x6c481d*/
    v2 = v1 + 1; /*0x6c481f*/
  else
    v2 = v1 - 1; /*0x6c4828*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c4820*/
  return 0; /*0x6c4825*/
}


// ==== 0x006C4840  ObjectClass::WinMain_Helper_6C4840  this=?$TClassFactory@VDropPodLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4840(TClassFactory_VDropPodLocomotionClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c4842*/
  this->vfptr = &TClassFactory<DropPodLocomotionClass>::`vftable'; /*0x6c4849*/
  return &this->vfptr; /*0x6c484f*/
}


// ==== 0x006C4850  _TClassFactory_VDropPodLocomotionClass::CreateTClassFactory_DropPodLocomotionClass  this=?$TClassFactory@VDropPodLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_DropPodLocomotionClass(TClassFactory_VDropPodLocomotionClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4857*/
    return -2147467261; /*0x6c4859*/
  *v4 = 0; /*0x6c4876*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c4892*/
    *v4 = v2; /*0x6c4896*/
  if ( !*v4 ) /*0x6c4898*/
    return -2147467262; /*0x6c48a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c48ac*/
  return 0; /*0x6c485e*/
}


// ==== 0x006C48C0  _TClassFactory_VDropPodLocomotionClass::AddRef  this=?$TClassFactory@VDropPodLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_DropPodLocomotionClass::AddRef(TClassFactory_VDropPodLocomotionClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c48ce*/
}


// ==== 0x006C48E0  _TClassFactory_VDropPodLocomotionClass::GetClassName  this=?$TClassFactory@VDropPodLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_DropPodLocomotionClass::GetClassName(TClassFactory_VDropPodLocomotionClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c48f0*/
  if ( !v1 ) /*0x6c48f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c48f7*/
  return v1; /*0x6c4901*/
}


// ==== 0x006C4910  _TClassFactory_VDropPodLocomotionClass::ddtor  this=?$TClassFactory@VDropPodLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_DropPodLocomotionClass::ddtor(TClassFactory_VDropPodLocomotionClass__ *this)
{
  int v2; // eax
  DropPodLocomotionClass *v6; // eax
  DropPodLocomotionClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c4918*/
    return -2147024809; /*0x6c491b*/
  *v8 = 0; /*0x6c4928*/
  if ( arg4 ) /*0x6c4930*/
    return -2147221232; /*0x6c4933*/
  v2 = OperatorNew(0x30u); /*0x6c493e*/
  if ( !v2 ) /*0x6c4948*/
    return -2147024882; /*0x6c4948*/
  v6 = (DropPodLocomotionClass *)SmallFunc_4B5AB0(v2); /*0x6c494c*/
  v7 = v6; /*0x6c4951*/
  if ( !v6 ) /*0x6c4955*/
    return -2147024882; /*0x6c4958*/
  v5 = (**(int (__stdcall ***)(DropPodLocomotionClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c496c*/
  if ( v5 < 0 ) /*0x6c4970*/
    (*(void (__thiscall **)(DropPodLocomotionClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c4978*/
  return v5; /*0x6c491a*/
}


// ==== 0x006C4990  _TClassFactory_VDropPodLocomotionClass::GetSize  this=?$TClassFactory@VDropPodLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_DropPodLocomotionClass::GetSize(TClassFactory_VDropPodLocomotionClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c499a*/
  if ( v5 ) /*0x6c499d*/
    v2 = v1 + 1; /*0x6c499f*/
  else
    v2 = v1 - 1; /*0x6c49a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c49a0*/
  return 0; /*0x6c49a5*/
}


// ==== 0x006C49C0  ObjectClass::WinMain_Helper_6C49C0  this=?$TClassFactory@VFlyLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C49C0(TClassFactory_VFlyLocomotionClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c49c2*/
  this->vfptr = &TClassFactory<FlyLocomotionClass>::`vftable'; /*0x6c49c9*/
  return &this->vfptr; /*0x6c49cf*/
}


// ==== 0x006C49D0  _TClassFactory_VFlyLocomotionClass::CreateTClassFactory_FlyLocomotionClass  this=?$TClassFactory@VFlyLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_FlyLocomotionClass(TClassFactory_VFlyLocomotionClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c49d7*/
    return -2147467261; /*0x6c49d9*/
  *v4 = 0; /*0x6c49f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c4a12*/
    *v4 = v2; /*0x6c4a16*/
  if ( !*v4 ) /*0x6c4a18*/
    return -2147467262; /*0x6c4a20*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c4a2c*/
  return 0; /*0x6c49de*/
}


// ==== 0x006C4A40  _TClassFactory_VFlyLocomotionClass::AddRef  this=?$TClassFactory@VFlyLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_FlyLocomotionClass::AddRef(TClassFactory_VFlyLocomotionClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4a4e*/
}


// ==== 0x006C4A60  _TClassFactory_VFlyLocomotionClass::GetClassName  this=?$TClassFactory@VFlyLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_FlyLocomotionClass::GetClassName(TClassFactory_VFlyLocomotionClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4a70*/
  if ( !v1 ) /*0x6c4a74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4a77*/
  return v1; /*0x6c4a81*/
}


// ==== 0x006C4A90  _TClassFactory_VFlyLocomotionClass::ddtor  this=?$TClassFactory@VFlyLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_FlyLocomotionClass::ddtor(TClassFactory_VFlyLocomotionClass__ *this)
{
  int v2; // eax
  FlyLocomotionClass *v6; // eax
  FlyLocomotionClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c4a98*/
    return -2147024809; /*0x6c4a9b*/
  *v8 = 0; /*0x6c4aa8*/
  if ( arg4 ) /*0x6c4ab0*/
    return -2147221232; /*0x6c4ab3*/
  v2 = OperatorNew(0x60u); /*0x6c4abe*/
  if ( !v2 ) /*0x6c4ac8*/
    return -2147024882; /*0x6c4ac8*/
  v6 = (FlyLocomotionClass *)FlyLocomotionClass::LocomotionClass(v2); /*0x6c4acc*/
  v7 = v6; /*0x6c4ad1*/
  if ( !v6 ) /*0x6c4ad5*/
    return -2147024882; /*0x6c4ad8*/
  v5 = (**(int (__stdcall ***)(FlyLocomotionClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c4aec*/
  if ( v5 < 0 ) /*0x6c4af0*/
    (*(void (__thiscall **)(FlyLocomotionClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c4af8*/
  return v5; /*0x6c4a9a*/
}


// ==== 0x006C4B10  _TClassFactory_VFlyLocomotionClass::GetSize  this=?$TClassFactory@VFlyLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_FlyLocomotionClass::GetSize(TClassFactory_VFlyLocomotionClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c4b1a*/
  if ( v5 ) /*0x6c4b1d*/
    v2 = v1 + 1; /*0x6c4b1f*/
  else
    v2 = v1 - 1; /*0x6c4b28*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c4b20*/
  return 0; /*0x6c4b25*/
}


// ==== 0x006C4B40  ObjectClass::WinMain_Helper_6C4B40  this=?$TClassFactory@VTeleportLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4B40(TClassFactory_VTeleportLocomotionClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c4b42*/
  this->vfptr = &TClassFactory<TeleportLocomotionClass>::`vftable'; /*0x6c4b49*/
  return &this->vfptr; /*0x6c4b4f*/
}


// ==== 0x006C4B50  _TClassFactory_VTeleportLocomotionClass::CreateTClassFactory_TeleportLocomotionClass  this=?$TClassFactory@VTeleportLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TeleportLocomotionClass(TClassFactory_VTeleportLocomotionClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4b57*/
    return -2147467261; /*0x6c4b59*/
  *v4 = 0; /*0x6c4b76*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c4b92*/
    *v4 = v2; /*0x6c4b96*/
  if ( !*v4 ) /*0x6c4b98*/
    return -2147467262; /*0x6c4ba0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c4bac*/
  return 0; /*0x6c4b5e*/
}


// ==== 0x006C4BC0  _TClassFactory_VTeleportLocomotionClass::AddRef  this=?$TClassFactory@VTeleportLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_TeleportLocomotionClass::AddRef(TClassFactory_VTeleportLocomotionClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4bce*/
}


// ==== 0x006C4BE0  _TClassFactory_VTeleportLocomotionClass::GetClassName  this=?$TClassFactory@VTeleportLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_TeleportLocomotionClass::GetClassName(TClassFactory_VTeleportLocomotionClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4bf0*/
  if ( !v1 ) /*0x6c4bf4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4bf7*/
  return v1; /*0x6c4c01*/
}


// ==== 0x006C4C10  _TClassFactory_VTeleportLocomotionClass::ddtor  this=?$TClassFactory@VTeleportLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_TeleportLocomotionClass::ddtor(TClassFactory_VTeleportLocomotionClass__ *this)
{
  int v2; // eax
  TeleportLocomotionClass *v6; // eax
  TeleportLocomotionClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c4c18*/
    return -2147024809; /*0x6c4c1b*/
  *v8 = 0; /*0x6c4c28*/
  if ( arg4 ) /*0x6c4c30*/
    return -2147221232; /*0x6c4c33*/
  v2 = OperatorNew(0x4Cu); /*0x6c4c3e*/
  if ( !v2 ) /*0x6c4c48*/
    return -2147024882; /*0x6c4c48*/
  v6 = (TeleportLocomotionClass *)TeleportLocomotionClass::TeleportLocomotionClass(v2); /*0x6c4c4c*/
  v7 = v6; /*0x6c4c51*/
  if ( !v6 ) /*0x6c4c55*/
    return -2147024882; /*0x6c4c58*/
  v5 = (**(int (__stdcall ***)(TeleportLocomotionClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c4c6c*/
  if ( v5 < 0 ) /*0x6c4c70*/
    (*(void (__thiscall **)(TeleportLocomotionClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c4c78*/
  return v5; /*0x6c4c1a*/
}


// ==== 0x006C4C90  _TClassFactory_VTeleportLocomotionClass::GetSize  this=?$TClassFactory@VTeleportLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_TeleportLocomotionClass::GetSize(TClassFactory_VTeleportLocomotionClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c4c9a*/
  if ( v5 ) /*0x6c4c9d*/
    v2 = v1 + 1; /*0x6c4c9f*/
  else
    v2 = v1 - 1; /*0x6c4ca8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c4ca0*/
  return 0; /*0x6c4ca5*/
}


// ==== 0x006C4CC0  ObjectClass::WinMain_Helper_6C4CC0  this=?$TClassFactory@VMechLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4CC0(TClassFactory_VMechLocomotionClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c4cc2*/
  this->vfptr = &TClassFactory<MechLocomotionClass>::`vftable'; /*0x6c4cc9*/
  return &this->vfptr; /*0x6c4ccf*/
}


// ==== 0x006C4CD0  _TClassFactory_VMechLocomotionClass::CreateTClassFactory_MechLocomotionClass  this=?$TClassFactory@VMechLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_MechLocomotionClass(TClassFactory_VMechLocomotionClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4cd7*/
    return -2147467261; /*0x6c4cd9*/
  *v4 = 0; /*0x6c4cf6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c4d12*/
    *v4 = v2; /*0x6c4d16*/
  if ( !*v4 ) /*0x6c4d18*/
    return -2147467262; /*0x6c4d20*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c4d2c*/
  return 0; /*0x6c4cde*/
}


// ==== 0x006C4D40  _TClassFactory_VMechLocomotionClass::AddRef  this=?$TClassFactory@VMechLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_MechLocomotionClass::AddRef(TClassFactory_VMechLocomotionClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4d4e*/
}


// ==== 0x006C4D60  _TClassFactory_VMechLocomotionClass::GetClassName  this=?$TClassFactory@VMechLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_MechLocomotionClass::GetClassName(TClassFactory_VMechLocomotionClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4d70*/
  if ( !v1 ) /*0x6c4d74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4d77*/
  return v1; /*0x6c4d81*/
}


// ==== 0x006C4D90  _TClassFactory_VMechLocomotionClass::ddtor  this=?$TClassFactory@VMechLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_MechLocomotionClass::ddtor(TClassFactory_VMechLocomotionClass__ *this)
{
  int v2; // eax
  MechLocomotionClass *v6; // eax
  MechLocomotionClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c4d98*/
    return -2147024809; /*0x6c4d9b*/
  *v8 = 0; /*0x6c4da8*/
  if ( arg4 ) /*0x6c4db0*/
    return -2147221232; /*0x6c4db3*/
  v2 = __2_YAPAXI_Z(0x34u); /*0x6c4dbe*/
  if ( !v2 ) /*0x6c4dc8*/
    return -2147024882; /*0x6c4dc8*/
  v6 = (MechLocomotionClass *)SmallFunc_5AFEF0(v2); /*0x6c4dcc*/
  v7 = v6; /*0x6c4dd1*/
  if ( !v6 ) /*0x6c4dd5*/
    return -2147024882; /*0x6c4dd8*/
  v5 = (**(int (__stdcall ***)(MechLocomotionClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c4dec*/
  if ( v5 < 0 ) /*0x6c4df0*/
    (*(void (__thiscall **)(MechLocomotionClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c4df8*/
  return v5; /*0x6c4d9a*/
}


// ==== 0x006C4E10  _TClassFactory_VMechLocomotionClass::GetSize  this=?$TClassFactory@VMechLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_MechLocomotionClass::GetSize(TClassFactory_VMechLocomotionClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c4e1a*/
  if ( v5 ) /*0x6c4e1d*/
    v2 = v1 + 1; /*0x6c4e1f*/
  else
    v2 = v1 - 1; /*0x6c4e28*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c4e20*/
  return 0; /*0x6c4e25*/
}


// ==== 0x006C4E40  ObjectClass::WinMain_Helper_6C4E40  this=?$TClassFactory@VShipLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4E40(TClassFactory_VShipLocomotionClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c4e42*/
  this->vfptr = &TClassFactory<ShipLocomotionClass>::`vftable'; /*0x6c4e49*/
  return &this->vfptr; /*0x6c4e4f*/
}


// ==== 0x006C4E50  _TClassFactory_VShipLocomotionClass::CreateTClassFactory_ShipLocomotionClass  this=?$TClassFactory@VShipLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ShipLocomotionClass(TClassFactory_VShipLocomotionClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4e57*/
    return -2147467261; /*0x6c4e59*/
  *v4 = 0; /*0x6c4e76*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c4e92*/
    *v4 = v2; /*0x6c4e96*/
  if ( !*v4 ) /*0x6c4e98*/
    return -2147467262; /*0x6c4ea0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c4eac*/
  return 0; /*0x6c4e5e*/
}


// ==== 0x006C4EC0  _TClassFactory_VShipLocomotionClass::AddRef  this=?$TClassFactory@VShipLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_ShipLocomotionClass::AddRef(TClassFactory_VShipLocomotionClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4ece*/
}


// ==== 0x006C4EE0  _TClassFactory_VShipLocomotionClass::GetClassName  this=?$TClassFactory@VShipLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_ShipLocomotionClass::GetClassName(TClassFactory_VShipLocomotionClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4ef0*/
  if ( !v1 ) /*0x6c4ef4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4ef7*/
  return v1; /*0x6c4f01*/
}


// ==== 0x006C4F10  _TClassFactory_VShipLocomotionClass::ddtor  this=?$TClassFactory@VShipLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_ShipLocomotionClass::ddtor(TClassFactory_VShipLocomotionClass__ *this)
{
  int v2; // eax
  ShipLocomotionClass *v6; // eax
  ShipLocomotionClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c4f18*/
    return -2147024809; /*0x6c4f1b*/
  *v8 = 0; /*0x6c4f28*/
  if ( arg4 ) /*0x6c4f30*/
    return -2147221232; /*0x6c4f33*/
  v2 = OperatorNew(0x70u); /*0x6c4f3e*/
  if ( !v2 ) /*0x6c4f48*/
    return -2147024882; /*0x6c4f48*/
  v6 = (ShipLocomotionClass *)LocomotionClass::Process(v2); /*0x6c4f4c*/
  v7 = v6; /*0x6c4f51*/
  if ( !v6 ) /*0x6c4f55*/
    return -2147024882; /*0x6c4f58*/
  v5 = (**(int (__stdcall ***)(ShipLocomotionClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c4f6c*/
  if ( v5 < 0 ) /*0x6c4f70*/
    (*(void (__thiscall **)(ShipLocomotionClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c4f78*/
  return v5; /*0x6c4f1a*/
}


// ==== 0x006C4F90  _TClassFactory_VShipLocomotionClass::GetSize  this=?$TClassFactory@VShipLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_ShipLocomotionClass::GetSize(TClassFactory_VShipLocomotionClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c4f9a*/
  if ( v5 ) /*0x6c4f9d*/
    v2 = v1 + 1; /*0x6c4f9f*/
  else
    v2 = v1 - 1; /*0x6c4fa8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c4fa0*/
  return 0; /*0x6c4fa5*/
}


// ==== 0x006C4FC0  ObjectClass::WinMain_Helper_6C4FC0  this=?$TClassFactory@VBulletClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4FC0(TClassFactory_VBulletClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c4fc2*/
  this->vfptr = &TClassFactory<BulletClass>::`vftable'; /*0x6c4fc9*/
  return &this->vfptr; /*0x6c4fcf*/
}


// ==== 0x006C4FD0  _TClassFactory_VBulletClass::CreateTClassFactory_BulletClass  this=?$TClassFactory@VBulletClass@@  sig=csp ====
int __thiscall CreateTClassFactory_BulletClass(TClassFactory_VBulletClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4fd7*/
    return -2147467261; /*0x6c4fd9*/
  *v4 = 0; /*0x6c4ff6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c5012*/
    *v4 = v2; /*0x6c5016*/
  if ( !*v4 ) /*0x6c5018*/
    return -2147467262; /*0x6c5020*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c502c*/
  return 0; /*0x6c4fde*/
}


// ==== 0x006C5040  _TClassFactory_VBulletClass::AddRef  this=?$TClassFactory@VBulletClass@@  sig=csp ====
LONG __thiscall TClassFactory_BulletClass::AddRef(TClassFactory_VBulletClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c504e*/
}


// ==== 0x006C5060  _TClassFactory_VBulletClass::GetClassName  this=?$TClassFactory@VBulletClass@@  sig=csp ====
LONG __thiscall TClassFactory_BulletClass::GetClassName(TClassFactory_VBulletClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5070*/
  if ( !v1 ) /*0x6c5074*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5077*/
  return v1; /*0x6c5081*/
}


// ==== 0x006C5090  _TClassFactory_VBulletClass::ddtor  this=?$TClassFactory@VBulletClass@@  sig=csp ====
int __thiscall TClassFactory_BulletClass::ddtor(TClassFactory_VBulletClass__ *this)
{
  int v2; // eax
  BulletClass *v6; // eax
  BulletClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c5098*/
    return -2147024809; /*0x6c509b*/
  *v8 = 0; /*0x6c50a8*/
  if ( arg4 ) /*0x6c50b0*/
    return -2147221232; /*0x6c50b3*/
  v2 = OperatorNew(0x160u); /*0x6c50c1*/
  if ( !v2 ) /*0x6c50cb*/
    return -2147024882; /*0x6c50cb*/
  v6 = (BulletClass *)BulletClass::BulletClass(v2); /*0x6c50cf*/
  v7 = v6; /*0x6c50d4*/
  if ( !v6 ) /*0x6c50d8*/
    return -2147024882; /*0x6c50db*/
  v5 = (**(int (__stdcall ***)(BulletClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c50ef*/
  if ( v5 < 0 ) /*0x6c50f3*/
    (*(void (__thiscall **)(BulletClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c50fb*/
  return v5; /*0x6c509a*/
}


// ==== 0x006C5110  _TClassFactory_VBulletClass::GetSize  this=?$TClassFactory@VBulletClass@@  sig=csp ====
int __thiscall TClassFactory_BulletClass::GetSize(TClassFactory_VBulletClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c511a*/
  if ( v5 ) /*0x6c511d*/
    v2 = v1 + 1; /*0x6c511f*/
  else
    v2 = v1 - 1; /*0x6c5128*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c5120*/
  return 0; /*0x6c5125*/
}


// ==== 0x006C5140  ObjectClass::WinMain_Helper_6C5140  this=?$TClassFactory@VFactoryClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5140(TClassFactory_VFactoryClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c5142*/
  this->vfptr = &TClassFactory<FactoryClass>::`vftable'; /*0x6c5149*/
  return &this->vfptr; /*0x6c514f*/
}


// ==== 0x006C5150  _TClassFactory_VFactoryClass::CreateTClassFactory_FactoryClass  this=?$TClassFactory@VFactoryClass@@  sig=csp ====
int __thiscall CreateTClassFactory_FactoryClass(TClassFactory_VFactoryClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5157*/
    return -2147467261; /*0x6c5159*/
  *v4 = 0; /*0x6c5176*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c5192*/
    *v4 = v2; /*0x6c5196*/
  if ( !*v4 ) /*0x6c5198*/
    return -2147467262; /*0x6c51a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c51ac*/
  return 0; /*0x6c515e*/
}


// ==== 0x006C51C0  _TClassFactory_VFactoryClass::AddRef  this=?$TClassFactory@VFactoryClass@@  sig=csp ====
LONG __thiscall TClassFactory_FactoryClass::AddRef(TClassFactory_VFactoryClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c51ce*/
}


// ==== 0x006C51E0  _TClassFactory_VFactoryClass::GetClassName  this=?$TClassFactory@VFactoryClass@@  sig=csp ====
LONG __thiscall TClassFactory_FactoryClass::GetClassName(TClassFactory_VFactoryClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c51f0*/
  if ( !v1 ) /*0x6c51f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c51f7*/
  return v1; /*0x6c5201*/
}


// ==== 0x006C5210  _TClassFactory_VFactoryClass::ddtor  this=?$TClassFactory@VFactoryClass@@  sig=csp ====
int __thiscall TClassFactory_FactoryClass::ddtor(TClassFactory_VFactoryClass__ *this)
{
  int v2; // eax
  FactoryClass *v6; // eax
  FactoryClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c5218*/
    return -2147024809; /*0x6c521b*/
  *v8 = 0; /*0x6c5228*/
  if ( arg4 ) /*0x6c5230*/
    return -2147221232; /*0x6c5233*/
  v2 = OperatorNew(0x74u); /*0x6c523e*/
  if ( !v2 ) /*0x6c5248*/
    return -2147024882; /*0x6c5248*/
  v6 = (FactoryClass *)TeamTypeClass::Construct(v2); /*0x6c524c*/
  v7 = v6; /*0x6c5251*/
  if ( !v6 ) /*0x6c5255*/
    return -2147024882; /*0x6c5258*/
  v5 = (**(int (__stdcall ***)(FactoryClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c526c*/
  if ( v5 < 0 ) /*0x6c5270*/
    (*(void (__thiscall **)(FactoryClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c5278*/
  return v5; /*0x6c521a*/
}


// ==== 0x006C5290  _TClassFactory_VFactoryClass::GetSize  this=?$TClassFactory@VFactoryClass@@  sig=csp ====
int __thiscall TClassFactory_FactoryClass::GetSize(TClassFactory_VFactoryClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c529a*/
  if ( v5 ) /*0x6c529d*/
    v2 = v1 + 1; /*0x6c529f*/
  else
    v2 = v1 - 1; /*0x6c52a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c52a0*/
  return 0; /*0x6c52a5*/
}


// ==== 0x006C52C0  ObjectClass::WinMain_Helper_6C52C0  this=?$TClassFactory@VWarheadTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C52C0(TClassFactory_VWarheadTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c52c2*/
  this->vfptr = &TClassFactory<WarheadTypeClass>::`vftable'; /*0x6c52c9*/
  return &this->vfptr; /*0x6c52cf*/
}


// ==== 0x006C52D0  _TClassFactory_VWarheadTypeClass::CreateTClassFactory_WarheadTypeClass  this=?$TClassFactory@VWarheadTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_WarheadTypeClass(TClassFactory_VWarheadTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c52d7*/
    return -2147467261; /*0x6c52d9*/
  *v4 = 0; /*0x6c52f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c5312*/
    *v4 = v2; /*0x6c5316*/
  if ( !*v4 ) /*0x6c5318*/
    return -2147467262; /*0x6c5320*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c532c*/
  return 0; /*0x6c52de*/
}


// ==== 0x006C5340  _TClassFactory_VWarheadTypeClass::AddRef  this=?$TClassFactory@VWarheadTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_WarheadTypeClass::AddRef(TClassFactory_VWarheadTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c534e*/
}


// ==== 0x006C5360  _TClassFactory_VWarheadTypeClass::GetClassName  this=?$TClassFactory@VWarheadTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_WarheadTypeClass::GetClassName(TClassFactory_VWarheadTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5370*/
  if ( !v1 ) /*0x6c5374*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5377*/
  return v1; /*0x6c5381*/
}


// ==== 0x006C5390  _TClassFactory_VWarheadTypeClass::GetClassIdentifier  this=?$TClassFactory@VWarheadTypeClass@@  sig=csp ====
int __thiscall TClassFactory_WarheadTypeClass::GetClassIdentifier(TClassFactory_VWarheadTypeClass__ *this)
{
  int v2; // eax
  int (__stdcall ***v3)(_DWORD, int, _DWORD *); // eax
  int (__stdcall ***v4)(_DWORD, _DWORD, _DWORD *); // esi
  int v5; // edi
  int v6; // [esp+10h] [ebp+8h]
  int v7; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c5398*/
    return -2147024809; /*0x6c539b*/
  *v8 = 0; /*0x6c53a8*/
  if ( v6 ) /*0x6c53b0*/
    return -2147221232; /*0x6c53b3*/
  v2 = __2_YAPAXI_Z(0x1D0u); /*0x6c53c1*/
  if ( !v2 ) /*0x6c53cb*/
    return -2147024882; /*0x6c53cb*/
  v3 = (int (__stdcall ***)(_DWORD, int, _DWORD *))WarheadTypeClass::Construct(v2, 0); /*0x6c53d1*/
  v4 = v3; /*0x6c53d6*/
  if ( !v3 ) /*0x6c53da*/
    return -2147024882; /*0x6c53dd*/
  v5 = (**v3)(v3, v7, v8); /*0x6c53f1*/
  if ( v5 < 0 ) /*0x6c53f5*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD, _DWORD *), int))(*v4)[8])(v4, 1); /*0x6c53fd*/
  return v5; /*0x6c539a*/
}


// ==== 0x006C5410  _TClassFactory_VWarheadTypeClass::GetSize  this=?$TClassFactory@VWarheadTypeClass@@  sig=csp ====
int __thiscall TClassFactory_WarheadTypeClass::GetSize(TClassFactory_VWarheadTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c541a*/
  if ( v5 ) /*0x6c541d*/
    v2 = v1 + 1; /*0x6c541f*/
  else
    v2 = v1 - 1; /*0x6c5428*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c5420*/
  return 0; /*0x6c5425*/
}


// ==== 0x006C5440  ObjectClass::WinMain_Helper_6C5440  this=?$TClassFactory@VWeaponTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5440(TClassFactory_VWeaponTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c5442*/
  this->vfptr = &TClassFactory<WeaponTypeClass>::`vftable'; /*0x6c5449*/
  return &this->vfptr; /*0x6c544f*/
}


// ==== 0x006C5450  _TClassFactory_VWeaponTypeClass::CreateTClassFactory_WeaponTypeClass  this=?$TClassFactory@VWeaponTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_WeaponTypeClass(TClassFactory_VWeaponTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5457*/
    return -2147467261; /*0x6c5459*/
  *v4 = 0; /*0x6c5476*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c5492*/
    *v4 = v2; /*0x6c5496*/
  if ( !*v4 ) /*0x6c5498*/
    return -2147467262; /*0x6c54a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c54ac*/
  return 0; /*0x6c545e*/
}


// ==== 0x006C54C0  _TClassFactory_VWeaponTypeClass::AddRef  this=?$TClassFactory@VWeaponTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_WeaponTypeClass::AddRef(TClassFactory_VWeaponTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c54ce*/
}


// ==== 0x006C54E0  _TClassFactory_VWeaponTypeClass::GetClassName  this=?$TClassFactory@VWeaponTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_WeaponTypeClass::GetClassName(TClassFactory_VWeaponTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c54f0*/
  if ( !v1 ) /*0x6c54f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c54f7*/
  return v1; /*0x6c5501*/
}


// ==== 0x006C5510  _TClassFactory_VWeaponTypeClass::GetClassIdentifier  this=?$TClassFactory@VWeaponTypeClass@@  sig=csp ====
int __thiscall TClassFactory_WeaponTypeClass::GetClassIdentifier(TClassFactory_VWeaponTypeClass__ *this)
{
  _DWORD *v2; // eax
  WeaponTypeClass *v6; // eax
  WeaponTypeClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c5518*/
    return -2147024809; /*0x6c551b*/
  *v8 = 0; /*0x6c5528*/
  if ( arg4 ) /*0x6c5530*/
    return -2147221232; /*0x6c5533*/
  v2 = (_DWORD *)__2_YAPAXI_Z(0x160u); /*0x6c5541*/
  if ( !v2 ) /*0x6c554b*/
    return -2147024882; /*0x6c554b*/
  v6 = (WeaponTypeClass *)WeaponTypeClass::Constructor(v2, 0); /*0x6c5551*/
  v7 = v6; /*0x6c5556*/
  if ( !v6 ) /*0x6c555a*/
    return -2147024882; /*0x6c555d*/
  v5 = (**(int (__stdcall ***)(WeaponTypeClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c5571*/
  if ( v5 < 0 ) /*0x6c5575*/
    (*(void (__thiscall **)(WeaponTypeClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c557d*/
  return v5; /*0x6c551a*/
}


// ==== 0x006C5590  _TClassFactory_VWeaponTypeClass::GetSize  this=?$TClassFactory@VWeaponTypeClass@@  sig=csp ====
int __thiscall TClassFactory_WeaponTypeClass::GetSize(TClassFactory_VWeaponTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c559a*/
  if ( v5 ) /*0x6c559d*/
    v2 = v1 + 1; /*0x6c559f*/
  else
    v2 = v1 - 1; /*0x6c55a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c55a0*/
  return 0; /*0x6c55a5*/
}


// ==== 0x006C55C0  ObjectClass::WinMain_Helper_6C55C0  this=?$TClassFactory@VParticleClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C55C0(TClassFactory_VParticleClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c55c2*/
  this->vfptr = &TClassFactory<ParticleClass>::`vftable'; /*0x6c55c9*/
  return &this->vfptr; /*0x6c55cf*/
}


// ==== 0x006C55D0  _TClassFactory_VParticleClass::CreateTClassFactory_ParticleClass  this=?$TClassFactory@VParticleClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ParticleClass(TClassFactory_VParticleClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c55d7*/
    return -2147467261; /*0x6c55d9*/
  *v4 = 0; /*0x6c55f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c5612*/
    *v4 = v2; /*0x6c5616*/
  if ( !*v4 ) /*0x6c5618*/
    return -2147467262; /*0x6c5620*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c562c*/
  return 0; /*0x6c55de*/
}


// ==== 0x006C5640  _TClassFactory_VParticleClass::ProcessCharged  this=?$TClassFactory@VParticleClass@@  sig=csp ====
LONG __thiscall SuperWeaponClass::ProcessCharged(TClassFactory_VParticleClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c564e*/
}


// ==== 0x006C5660  _TClassFactory_VParticleClass::GetClassName  this=?$TClassFactory@VParticleClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleClass::GetClassName(TClassFactory_VParticleClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5670*/
  if ( !v1 ) /*0x6c5674*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5677*/
  return v1; /*0x6c5681*/
}


// ==== 0x006C5690  _TClassFactory_VParticleClass::ddtor  this=?$TClassFactory@VParticleClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleClass::ddtor(TClassFactory_VParticleClass__ *this)
{
  int v2; // eax
  ParticleClass *v6; // eax
  ParticleClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c5698*/
    return -2147024809; /*0x6c569b*/
  *v8 = 0; /*0x6c56a8*/
  if ( arg4 ) /*0x6c56b0*/
    return -2147221232; /*0x6c56b3*/
  v2 = OperatorNew(0x138u); /*0x6c56c1*/
  if ( !v2 ) /*0x6c56cb*/
    return -2147024882; /*0x6c56cb*/
  v6 = (ParticleClass *)ObjectClass::ProcessUpdate(v2); /*0x6c56cf*/
  v7 = v6; /*0x6c56d4*/
  if ( !v6 ) /*0x6c56d8*/
    return -2147024882; /*0x6c56db*/
  v5 = (**(int (__stdcall ***)(ParticleClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c56ef*/
  if ( v5 < 0 ) /*0x6c56f3*/
    (*(void (__thiscall **)(ParticleClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c56fb*/
  return v5; /*0x6c569a*/
}


// ==== 0x006C5710  _TClassFactory_VParticleClass::GetSize  this=?$TClassFactory@VParticleClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleClass::GetSize(TClassFactory_VParticleClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c571a*/
  if ( v5 ) /*0x6c571d*/
    v2 = v1 + 1; /*0x6c571f*/
  else
    v2 = v1 - 1; /*0x6c5728*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c5720*/
  return 0; /*0x6c5725*/
}


// ==== 0x006C5740  ObjectClass::WinMain_Helper_6C5740  this=?$TClassFactory@VParticleTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5740(TClassFactory_VParticleTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c5742*/
  this->vfptr = &TClassFactory<ParticleTypeClass>::`vftable'; /*0x6c5749*/
  return &this->vfptr; /*0x6c574f*/
}


// ==== 0x006C5750  _TClassFactory_VParticleTypeClass::CreateTClassFactory_ParticleTypeClass  this=?$TClassFactory@VParticleTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ParticleTypeClass(TClassFactory_VParticleTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5757*/
    return -2147467261; /*0x6c5759*/
  *v4 = 0; /*0x6c5776*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c5792*/
    *v4 = v2; /*0x6c5796*/
  if ( !*v4 ) /*0x6c5798*/
    return -2147467262; /*0x6c57a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c57ac*/
  return 0; /*0x6c575e*/
}


// ==== 0x006C57C0  _TClassFactory_VParticleTypeClass::AddRef  this=?$TClassFactory@VParticleTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleTypeClass::AddRef(TClassFactory_VParticleTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c57ce*/
}


// ==== 0x006C57E0  _TClassFactory_VParticleTypeClass::GetClassName  this=?$TClassFactory@VParticleTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleTypeClass::GetClassName(TClassFactory_VParticleTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c57f0*/
  if ( !v1 ) /*0x6c57f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c57f7*/
  return v1; /*0x6c5801*/
}


// ==== 0x006C5810  _TClassFactory_VParticleTypeClass::GetClassIdentifier  this=?$TClassFactory@VParticleTypeClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleTypeClass::GetClassIdentifier(TClassFactory_VParticleTypeClass__ *this)
{
  _DWORD *v2; // eax
  ParticleTypeClass *v6; // eax
  ParticleTypeClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c5818*/
    return -2147024809; /*0x6c581b*/
  *v8 = 0; /*0x6c5828*/
  if ( arg4 ) /*0x6c5830*/
    return -2147221232; /*0x6c5833*/
  v2 = (_DWORD *)__2_YAPAXI_Z(0x318u); /*0x6c5841*/
  if ( !v2 ) /*0x6c584b*/
    return -2147024882; /*0x6c584b*/
  v6 = (ParticleTypeClass *)BuildingTypeClass::Construct(v2, 0); /*0x6c5851*/
  v7 = v6; /*0x6c5856*/
  if ( !v6 ) /*0x6c585a*/
    return -2147024882; /*0x6c585d*/
  v5 = (**(int (__stdcall ***)(ParticleTypeClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c5871*/
  if ( v5 < 0 ) /*0x6c5875*/
    (*(void (__thiscall **)(ParticleTypeClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c587d*/
  return v5; /*0x6c581a*/
}


// ==== 0x006C5890  _TClassFactory_VParticleTypeClass::GetSize  this=?$TClassFactory@VParticleTypeClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleTypeClass::GetSize(TClassFactory_VParticleTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c589a*/
  if ( v5 ) /*0x6c589d*/
    v2 = v1 + 1; /*0x6c589f*/
  else
    v2 = v1 - 1; /*0x6c58a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c58a0*/
  return 0; /*0x6c58a5*/
}


// ==== 0x006C58C0  ObjectClass::WinMain_Helper_6C58C0  this=?$TClassFactory@VParticleSystemClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C58C0(TClassFactory_VParticleSystemClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c58c2*/
  this->vfptr = &TClassFactory<ParticleSystemClass>::`vftable'; /*0x6c58c9*/
  return &this->vfptr; /*0x6c58cf*/
}


// ==== 0x006C58D0  _TClassFactory_VParticleSystemClass::CreateTClassFactory_ParticleSystemClass  this=?$TClassFactory@VParticleSystemClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ParticleSystemClass(TClassFactory_VParticleSystemClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c58d7*/
    return -2147467261; /*0x6c58d9*/
  *v4 = 0; /*0x6c58f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c5912*/
    *v4 = v2; /*0x6c5916*/
  if ( !*v4 ) /*0x6c5918*/
    return -2147467262; /*0x6c5920*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c592c*/
  return 0; /*0x6c58de*/
}


// ==== 0x006C5940  _TClassFactory_VParticleSystemClass::AddRef  this=?$TClassFactory@VParticleSystemClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleSystemClass::AddRef(TClassFactory_VParticleSystemClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c594e*/
}


// ==== 0x006C5960  _TClassFactory_VParticleSystemClass::GetClassName  this=?$TClassFactory@VParticleSystemClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleSystemClass::GetClassName(TClassFactory_VParticleSystemClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5970*/
  if ( !v1 ) /*0x6c5974*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5977*/
  return v1; /*0x6c5981*/
}


// ==== 0x006C5990  _TClassFactory_VParticleSystemClass::ddtor  this=?$TClassFactory@VParticleSystemClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleSystemClass::ddtor(TClassFactory_VParticleSystemClass__ *this)
{
  int v2; // eax
  ParticleSystemClass *v6; // eax
  ParticleSystemClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c5998*/
    return -2147024809; /*0x6c599b*/
  *v8 = 0; /*0x6c59a8*/
  if ( arg4 ) /*0x6c59b0*/
    return -2147221232; /*0x6c59b3*/
  v2 = OperatorNew(0x100u); /*0x6c59c1*/
  if ( !v2 ) /*0x6c59cb*/
    return -2147024882; /*0x6c59cb*/
  v6 = (ParticleSystemClass *)ParticleClass::ProcessCreation(v2); /*0x6c59cf*/
  v7 = v6; /*0x6c59d4*/
  if ( !v6 ) /*0x6c59d8*/
    return -2147024882; /*0x6c59db*/
  v5 = (**(int (__stdcall ***)(ParticleSystemClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c59ef*/
  if ( v5 < 0 ) /*0x6c59f3*/
    (*(void (__thiscall **)(ParticleSystemClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c59fb*/
  return v5; /*0x6c599a*/
}


// ==== 0x006C5A10  _TClassFactory_VParticleSystemClass::GetSize  this=?$TClassFactory@VParticleSystemClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleSystemClass::GetSize(TClassFactory_VParticleSystemClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c5a1a*/
  if ( v5 ) /*0x6c5a1d*/
    v2 = v1 + 1; /*0x6c5a1f*/
  else
    v2 = v1 - 1; /*0x6c5a28*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c5a20*/
  return 0; /*0x6c5a25*/
}


// ==== 0x006C5A40  ObjectClass::WinMain_Helper_6C5A40  this=?$TClassFactory@VParticleSystemTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5A40(TClassFactory_VParticleSystemTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c5a42*/
  this->vfptr = &TClassFactory<ParticleSystemTypeClass>::`vftable'; /*0x6c5a49*/
  return &this->vfptr; /*0x6c5a4f*/
}


// ==== 0x006C5A50  _TClassFactory_VParticleSystemTypeClass::CreateTClassFactory_ParticleSystemTypeClass  this=?$TClassFactory@VParticleSystemTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ParticleSystemTypeClass(TClassFactory_VParticleSystemTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5a57*/
    return -2147467261; /*0x6c5a59*/
  *v4 = 0; /*0x6c5a76*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c5a92*/
    *v4 = v2; /*0x6c5a96*/
  if ( !*v4 ) /*0x6c5a98*/
    return -2147467262; /*0x6c5aa0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c5aac*/
  return 0; /*0x6c5a5e*/
}


// ==== 0x006C5AC0  _TClassFactory_VParticleSystemTypeClass::AddRef  this=?$TClassFactory@VParticleSystemTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleSystemTypeClass::AddRef(TClassFactory_VParticleSystemTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5ace*/
}


// ==== 0x006C5AE0  _TClassFactory_VParticleSystemTypeClass::GetClassName  this=?$TClassFactory@VParticleSystemTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleSystemTypeClass::GetClassName(TClassFactory_VParticleSystemTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5af0*/
  if ( !v1 ) /*0x6c5af4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5af7*/
  return v1; /*0x6c5b01*/
}


// ==== 0x006C5B10  _TClassFactory_VParticleSystemTypeClass::GetClassIdentifier  this=?$TClassFactory@VParticleSystemTypeClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleSystemTypeClass::GetClassIdentifier(
        TClassFactory_VParticleSystemTypeClass__ *this)
{
  _DWORD *v2; // eax
  ParticleSystemTypeClass *v6; // eax
  ParticleSystemTypeClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c5b18*/
    return -2147024809; /*0x6c5b1b*/
  *v8 = 0; /*0x6c5b28*/
  if ( arg4 ) /*0x6c5b30*/
    return -2147221232; /*0x6c5b33*/
  v2 = (_DWORD *)__2_YAPAXI_Z(0x310u); /*0x6c5b41*/
  if ( !v2 ) /*0x6c5b4b*/
    return -2147024882; /*0x6c5b4b*/
  v6 = (ParticleSystemTypeClass *)OverlayTypeClass::Construct(v2, 0); /*0x6c5b51*/
  v7 = v6; /*0x6c5b56*/
  if ( !v6 ) /*0x6c5b5a*/
    return -2147024882; /*0x6c5b5d*/
  v5 = (*(int (__stdcall **)(ParticleSystemTypeClass *, int, _DWORD *))v6->field_0)(v6, arg8, v8); /*0x6c5b71*/
  if ( v5 < 0 ) /*0x6c5b75*/
    (*(void (__thiscall **)(ParticleSystemTypeClass *, int))(v7->field_0 + 32))(v7, 1); /*0x6c5b7d*/
  return v5; /*0x6c5b1a*/
}


// ==== 0x006C5B90  _TClassFactory_VParticleSystemTypeClass::GetSize  this=?$TClassFactory@VParticleSystemTypeClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleSystemTypeClass::GetSize(TClassFactory_VParticleSystemTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c5b9a*/
  if ( v5 ) /*0x6c5b9d*/
    v2 = v1 + 1; /*0x6c5b9f*/
  else
    v2 = v1 - 1; /*0x6c5ba8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c5ba0*/
  return 0; /*0x6c5ba5*/
}


// ==== 0x006C5BC0  ObjectClass::WinMain_Helper_6C5BC0  this=?$TClassFactory@VAITriggerTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5BC0(TClassFactory_VAITriggerTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c5bc2*/
  this->vfptr = &TClassFactory<AITriggerTypeClass>::`vftable'; /*0x6c5bc9*/
  return &this->vfptr; /*0x6c5bcf*/
}


// ==== 0x006C5BD0  _TClassFactory_VAITriggerTypeClass::CreateTClassFactory_AITriggerTypeClass  this=?$TClassFactory@VAITriggerTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AITriggerTypeClass(TClassFactory_VAITriggerTypeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5bd7*/
    return -2147467261; /*0x6c5bd9*/
  *v4 = 0; /*0x6c5bf6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c5c12*/
    *v4 = v2; /*0x6c5c16*/
  if ( !*v4 ) /*0x6c5c18*/
    return -2147467262; /*0x6c5c20*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c5c2c*/
  return 0; /*0x6c5bde*/
}


// ==== 0x006C5C40  _TClassFactory_VAITriggerTypeClass::AddRef  this=?$TClassFactory@VAITriggerTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AITriggerTypeClass::AddRef(TClassFactory_VAITriggerTypeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5c4e*/
}


// ==== 0x006C5C60  _TClassFactory_VAITriggerTypeClass::GetClassName  this=?$TClassFactory@VAITriggerTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AITriggerTypeClass::GetClassName(TClassFactory_VAITriggerTypeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5c70*/
  if ( !v1 ) /*0x6c5c74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5c77*/
  return v1; /*0x6c5c81*/
}


// ==== 0x006C5C90  _TClassFactory_VAITriggerTypeClass::GetClassIdentifier  this=?$TClassFactory@VAITriggerTypeClass@@  sig=csp ====
int __thiscall TClassFactory_AITriggerTypeClass::GetClassIdentifier(TClassFactory_VAITriggerTypeClass__ *this)
{
  _DWORD *v2; // eax
  AITriggerTypeClass *v6; // eax
  AITriggerTypeClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c5c98*/
    return -2147024809; /*0x6c5c9b*/
  *v8 = 0; /*0x6c5ca8*/
  if ( arg4 ) /*0x6c5cb0*/
    return -2147221232; /*0x6c5cb3*/
  v2 = (_DWORD *)__2_YAPAXI_Z(0x110u); /*0x6c5cc1*/
  if ( !v2 ) /*0x6c5ccb*/
    return -2147024882; /*0x6c5ccb*/
  v6 = (AITriggerTypeClass *)AnimTypeClass::Construct2(v2, 0); /*0x6c5cd1*/
  v7 = v6; /*0x6c5cd6*/
  if ( !v6 ) /*0x6c5cda*/
    return -2147024882; /*0x6c5cdd*/
  v5 = (**(int (__stdcall ***)(AITriggerTypeClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c5cf1*/
  if ( v5 < 0 ) /*0x6c5cf5*/
    (*(void (__thiscall **)(AITriggerTypeClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c5cfd*/
  return v5; /*0x6c5c9a*/
}


// ==== 0x006C5D10  _TClassFactory_VAITriggerTypeClass::GetSize  this=?$TClassFactory@VAITriggerTypeClass@@  sig=csp ====
int __thiscall TClassFactory_AITriggerTypeClass::GetSize(TClassFactory_VAITriggerTypeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c5d1a*/
  if ( v5 ) /*0x6c5d1d*/
    v2 = v1 + 1; /*0x6c5d1f*/
  else
    v2 = v1 - 1; /*0x6c5d28*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c5d20*/
  return 0; /*0x6c5d25*/
}


// ==== 0x006C5D40  ObjectClass::WinMain_Helper_6C5D40  this=?$TClassFactory@VNeuronClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5D40(TClassFactory_VNeuronClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c5d42*/
  this->vfptr = &TClassFactory<NeuronClass>::`vftable'; /*0x6c5d49*/
  return &this->vfptr; /*0x6c5d4f*/
}


// ==== 0x006C5D50  _TClassFactory_VNeuronClass::CreateTClassFactory_NeuronClass  this=?$TClassFactory@VNeuronClass@@  sig=csp ====
int __thiscall CreateTClassFactory_NeuronClass(TClassFactory_VNeuronClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5d57*/
    return -2147467261; /*0x6c5d59*/
  *v4 = 0; /*0x6c5d76*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c5d92*/
    *v4 = v2; /*0x6c5d96*/
  if ( !*v4 ) /*0x6c5d98*/
    return -2147467262; /*0x6c5da0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c5dac*/
  return 0; /*0x6c5d5e*/
}


// ==== 0x006C5DC0  _TClassFactory_VNeuronClass::AddRef  this=?$TClassFactory@VNeuronClass@@  sig=csp ====
LONG __thiscall TClassFactory_NeuronClass::AddRef(TClassFactory_VNeuronClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5dce*/
}


// ==== 0x006C5DE0  _TClassFactory_VNeuronClass::GetClassName  this=?$TClassFactory@VNeuronClass@@  sig=csp ====
LONG __thiscall TClassFactory_NeuronClass::GetClassName(TClassFactory_VNeuronClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5df0*/
  if ( !v1 ) /*0x6c5df4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5df7*/
  return v1; /*0x6c5e01*/
}


// ==== 0x006C5E10  _TClassFactory_VNeuronClass::ddtor  this=?$TClassFactory@VNeuronClass@@  sig=csp ====
int __thiscall TClassFactory_NeuronClass::ddtor(TClassFactory_VNeuronClass__ *this)
{
  int v2; // eax
  NeuronClass *v6; // eax
  NeuronClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c5e18*/
    return -2147024809; /*0x6c5e1b*/
  *v8 = 0; /*0x6c5e28*/
  if ( arg4 ) /*0x6c5e30*/
    return -2147221232; /*0x6c5e33*/
  v2 = OperatorNew(0x38u); /*0x6c5e3e*/
  if ( !v2 ) /*0x6c5e48*/
    return -2147024882; /*0x6c5e48*/
  v6 = (NeuronClass *)NeuronClass::NeuronClass(v2); /*0x6c5e4c*/
  v7 = v6; /*0x6c5e51*/
  if ( !v6 ) /*0x6c5e55*/
    return -2147024882; /*0x6c5e58*/
  v5 = (**(int (__stdcall ***)(NeuronClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c5e6c*/
  if ( v5 < 0 ) /*0x6c5e70*/
    (*(void (__thiscall **)(NeuronClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c5e78*/
  return v5; /*0x6c5e1a*/
}


// ==== 0x006C5E90  _TClassFactory_VNeuronClass::GetSize  this=?$TClassFactory@VNeuronClass@@  sig=csp ====
int __thiscall TClassFactory_NeuronClass::GetSize(TClassFactory_VNeuronClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c5e9a*/
  if ( v5 ) /*0x6c5e9d*/
    v2 = v1 + 1; /*0x6c5e9f*/
  else
    v2 = v1 - 1; /*0x6c5ea8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c5ea0*/
  return 0; /*0x6c5ea5*/
}


// ==== 0x006C5EC0  ObjectClass::WinMain_Helper_6C5EC0  this=?$TClassFactory@VFoggedObjectClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5EC0(TClassFactory_VFoggedObjectClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c5ec2*/
  this->vfptr = &TClassFactory<FoggedObjectClass>::`vftable'; /*0x6c5ec9*/
  return &this->vfptr; /*0x6c5ecf*/
}


// ==== 0x006C5ED0  _TClassFactory_VFoggedObjectClass::CreateTClassFactory_FoggedObjectClass  this=?$TClassFactory@VFoggedObjectClass@@  sig=csp ====
int __thiscall CreateTClassFactory_FoggedObjectClass(TClassFactory_VFoggedObjectClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5ed7*/
    return -2147467261; /*0x6c5ed9*/
  *v4 = 0; /*0x6c5ef6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c5f12*/
    *v4 = v2; /*0x6c5f16*/
  if ( !*v4 ) /*0x6c5f18*/
    return -2147467262; /*0x6c5f20*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c5f2c*/
  return 0; /*0x6c5ede*/
}


// ==== 0x006C5F40  _TClassFactory_VFoggedObjectClass::AddRef  this=?$TClassFactory@VFoggedObjectClass@@  sig=csp ====
LONG __thiscall TClassFactory_FoggedObjectClass::AddRef(TClassFactory_VFoggedObjectClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5f4e*/
}


// ==== 0x006C5F60  _TClassFactory_VFoggedObjectClass::GetClassName  this=?$TClassFactory@VFoggedObjectClass@@  sig=csp ====
LONG __thiscall TClassFactory_FoggedObjectClass::GetClassName(TClassFactory_VFoggedObjectClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5f70*/
  if ( !v1 ) /*0x6c5f74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5f77*/
  return v1; /*0x6c5f81*/
}


// ==== 0x006C5F90  _TClassFactory_VFoggedObjectClass::ddtor  this=?$TClassFactory@VFoggedObjectClass@@  sig=csp ====
int __thiscall TClassFactory_FoggedObjectClass::ddtor(TClassFactory_VFoggedObjectClass__ *this)
{
  _DWORD *v2; // eax
  FoggedObjectClass *v6; // eax
  FoggedObjectClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c5f98*/
    return -2147024809; /*0x6c5f9b*/
  *v8 = 0; /*0x6c5fa8*/
  if ( arg4 ) /*0x6c5fb0*/
    return -2147221232; /*0x6c5fb3*/
  v2 = (_DWORD *)OperatorNew(0x78u); /*0x6c5fbe*/
  if ( !v2 ) /*0x6c5fc8*/
    return -2147024882; /*0x6c5fc8*/
  v6 = (FoggedObjectClass *)ObjectClass::Construct(v2); /*0x6c5fcc*/
  v7 = v6; /*0x6c5fd1*/
  if ( !v6 ) /*0x6c5fd5*/
    return -2147024882; /*0x6c5fd8*/
  v5 = (**(int (__stdcall ***)(FoggedObjectClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c5fec*/
  if ( v5 < 0 ) /*0x6c5ff0*/
    (*(void (__thiscall **)(FoggedObjectClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c5ff8*/
  return v5; /*0x6c5f9a*/
}


// ==== 0x006C6010  _TClassFactory_VFoggedObjectClass::GetSize  this=?$TClassFactory@VFoggedObjectClass@@  sig=csp ====
int __thiscall TClassFactory_FoggedObjectClass::GetSize(TClassFactory_VFoggedObjectClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c601a*/
  if ( v5 ) /*0x6c601d*/
    v2 = v1 + 1; /*0x6c601f*/
  else
    v2 = v1 - 1; /*0x6c6028*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c6020*/
  return 0; /*0x6c6025*/
}


// ==== 0x006C6040  ObjectClass::WinMain_Helper_6C6040  this=?$TClassFactory@VAlphaShapeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C6040(TClassFactory_VAlphaShapeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6c6042*/
  this->vfptr = &TClassFactory<AlphaShapeClass>::`vftable'; /*0x6c6049*/
  return &this->vfptr; /*0x6c604f*/
}


// ==== 0x006C6050  _TClassFactory_VAlphaShapeClass::CreateTClassFactory_AlphaShapeClass  this=?$TClassFactory@VAlphaShapeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AlphaShapeClass(TClassFactory_VAlphaShapeClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c6057*/
    return -2147467261; /*0x6c6059*/
  *v4 = 0; /*0x6c6076*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6c6092*/
    *v4 = v2; /*0x6c6096*/
  if ( !*v4 ) /*0x6c6098*/
    return -2147467262; /*0x6c60a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6c60ac*/
  return 0; /*0x6c605e*/
}


// ==== 0x006C60C0  _TClassFactory_VAlphaShapeClass::AddRef  this=?$TClassFactory@VAlphaShapeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AlphaShapeClass::AddRef(TClassFactory_VAlphaShapeClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c60ce*/
}


// ==== 0x006C60E0  _TClassFactory_VAlphaShapeClass::GetClassName  this=?$TClassFactory@VAlphaShapeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AlphaShapeClass::GetClassName(TClassFactory_VAlphaShapeClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c60f0*/
  if ( !v1 ) /*0x6c60f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c60f7*/
  return v1; /*0x6c6101*/
}


// ==== 0x006C6110  _TClassFactory_VAlphaShapeClass::ddtor  this=?$TClassFactory@VAlphaShapeClass@@  sig=csp ====
int __thiscall TClassFactory_AlphaShapeClass::ddtor(TClassFactory_VAlphaShapeClass__ *this)
{
  int v2; // eax
  AlphaShapeClass *v6; // eax
  AlphaShapeClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c6118*/
    return -2147024809; /*0x6c611b*/
  *v8 = 0; /*0x6c6128*/
  if ( arg4 ) /*0x6c6130*/
    return -2147221232; /*0x6c6133*/
  v2 = OperatorNew(0x40u); /*0x6c613e*/
  if ( !v2 ) /*0x6c6148*/
    return -2147024882; /*0x6c6148*/
  v6 = (AlphaShapeClass *)AlphaShapeClass::Constructor(v2); /*0x6c614c*/
  v7 = v6; /*0x6c6151*/
  if ( !v6 ) /*0x6c6155*/
    return -2147024882; /*0x6c6158*/
  v5 = (**(int (__stdcall ***)(AlphaShapeClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c616c*/
  if ( v5 < 0 ) /*0x6c6170*/
    (*(void (__thiscall **)(AlphaShapeClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c6178*/
  return v5; /*0x6c611a*/
}


// ==== 0x006C6190  _TClassFactory_VAlphaShapeClass::GetSize  this=?$TClassFactory@VAlphaShapeClass@@  sig=csp ====
int __thiscall TClassFactory_AlphaShapeClass::GetSize(TClassFactory_VAlphaShapeClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c619a*/
  if ( v5 ) /*0x6c619d*/
    v2 = v1 + 1; /*0x6c619f*/
  else
    v2 = v1 - 1; /*0x6c61a8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c61a0*/
  return 0; /*0x6c61a5*/
}


// ==== 0x006C61C0  ObjectClass::COM_SafeRelease  this=VOID_PTR  sig=csp ====
int __thiscall sub_6C61C0(int *this)
{
  int result; // eax

  result = *this; /*0x6c61c0*/
  if ( *this ) /*0x6c61c0*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x6c61c9*/
  return result; /*0x6c61cc*/
}


// ==== 0x006C61D0  _VectorClass_K::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_K::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x6c61d2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x6c61dd*/
  {
    v3 = 0; /*0x6c61df*/
    if ( v2 <= 0 ) /*0x6c61e3*/
      return 1; /*0x6c6203*/
    v4 = (_DWORD *)this->Items; /*0x6c61e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6c61eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6c61f4*/
    {
      ++v3; /*0x6c61f6*/
      ++v4; /*0x6c61f7*/
      if ( v3 >= v2 ) /*0x6c61fc*/
        return 1; /*0x6c61fc*/
    }
  }
  return 0; /*0x6c61fe*/
}


// ==== 0x006C6210  _VectorClass_K::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_K::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x6c621c*/
  {
    this->IsInitialized = 0; /*0x6c6226*/
    if ( a3 ) /*0x6c622c*/
      v4 = a3; /*0x6c6242*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6c623e*/
    this->IsInitialized = 1; /*0x6c6246*/
    if ( v4 ) /*0x6c624a*/
    {
      if ( this->Items ) /*0x6c6255*/
      {
        v6 = this->Capacity; /*0x6c625c*/
        if ( a2 < v6 ) /*0x6c6261*/
          v6 = a2; /*0x6c6263*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6c6269*/
          ++i; /*0x6c626e*/
        if ( this->IsAllocated ) /*0x6c627b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x6c6286*/
          this->Items = 0; /*0x6c628e*/
        }
      }
      this->Items = v4; /*0x6c6297*/
      this->Capacity = a2; /*0x6c629f*/
      this->IsAllocated = a3 == 0; /*0x6c62a2*/
      return 1; /*0x6c62a8*/
    }
    else
    {
      return 0; /*0x6c624f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6c62b2*/
    return 1; /*0x6c62b8*/
  }
}


// ==== 0x006C62C0  _VectorClass_K::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_K::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x6c62cd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x6c62d3*/
    *(_DWORD *)(this + 4) = 0; /*0x6c62db*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6c62de*/
  *(_DWORD *)(this + 8) = 0; /*0x6c62e1*/
}


// ==== 0x006C62F0  _VectorClass_K::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_K::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x6c62f0*/
    return 0; /*0x6c62f8*/
  v3 = *(_DWORD *)(this + 8); /*0x6c62fe*/
  result = 0; /*0x6c6301*/
  if ( v3 <= 0 ) /*0x6c6305*/
    return -1; /*0x6c631c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x6c630b*/
  {
    if ( ++result >= v3 ) /*0x6c631a*/
      return -1; /*0x6c631a*/
  }
  return result; /*0x6c62fa*/
}


// ==== 0x006C6330  _VectorClass_K::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_K::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6c6330*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6c6345*/
  else
    return 0; /*0x6c6337*/
}


// ==== 0x006C6350  _DynamicVectorClass_K::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_K::sub_6C6350(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6c635c*/
  {
    this->IsInitialized = 0; /*0x6c6362*/
    if ( a3 ) /*0x6c6368*/
      v4 = a3; /*0x6c637e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6c637a*/
    this->IsInitialized = 1; /*0x6c6382*/
    if ( !v4 ) /*0x6c6386*/
      return 0; /*0x6c63fa*/
    if ( this->Items ) /*0x6c6388*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x6c638f*/
      if ( a2 < v5 ) /*0x6c6394*/
        v5 = a2; /*0x6c6396*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6c639c*/
        ++i; /*0x6c63a1*/
      if ( this->IsAllocated ) /*0x6c63ae*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x6c63b9*/
        this->Items = 0; /*0x6c63c1*/
      }
    }
    this->Items = v4; /*0x6c63ca*/
    this->DynamicVector_field_0x8 = a2; /*0x6c63d2*/
    this->IsAllocated = a3 == 0; /*0x6c63d5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6c63de*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x6c63e1*/
  if ( v7 < this->Items ) /*0x6c63e9*/
    this->Items = v7; /*0x6c63eb*/
  return 1; /*0x6c63ee*/
}


// ==== 0x006C6400  DynamicVector::Add  this=int  sig=csp ====
char __thiscall DynamicVector::Add(_DWORD *this, DynamicVector *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *(this + 2); /*0x6c6403*/
  if ( *(this + 4) >= v3 ) /*0x6c640b*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x6c6416*/
      return 0; /*0x6c6416*/
    v4 = *(this + 5); /*0x6c6418*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x6c6428*/
      return 0; /*0x6c642f*/
  }
  v6 = *(this + 4); /*0x6c6435*/
  v7 = *(this + 1); /*0x6c6438*/
  *(this + 4) = v6 + 1; /*0x6c643e*/
  *(_DWORD *)(v7 + 4 * v6) = *(_DWORD *)aP1->__pad_0; /*0x6c6448*/
  return 1; /*0x6c6431*/
}


// ==== 0x006C6450  _DynamicVectorClass_K::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_K::sub_6C6450(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x6c6450*/
  result = 0; /*0x6c6453*/
  if ( v2 <= 0 ) /*0x6c6458*/
    return -1; /*0x6c646f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x6c645e*/
  {
    if ( ++result >= v2 ) /*0x6c646d*/
      return -1; /*0x6c646d*/
  }
  return result; /*0x6c6472*/
}


// ==== 0x006C6480  _VectorClass_K::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_K::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6c6483*/
  *Block = &vt_VectorClass_unsigned_long; /*0x6c6486*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6c6490*/
  {
    __3_YAXPAX_Z(v3); /*0x6c6498*/
    *(Block + 1) = 0; /*0x6c64a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6c64ab*/
  *(Block + 2) = 0; /*0x6c64b1*/
  if ( (a2 & 1) != 0 ) /*0x6c64b8*/
    __3_YAXPAX_Z(Block); /*0x6c64bb*/
  return (VectorClass *)Block; /*0x6c64c5*/
}


// ==== 0x006C64D0  _DynamicVectorClass_K::Constructor  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_K::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6c64d3*/
  *Block = &vt_VectorClass_unsigned_long; /*0x6c64d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6c64e0*/
  {
    __3_YAXPAX_Z(v3); /*0x6c64e8*/
    *(Block + 1) = 0; /*0x6c64f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6c64fb*/
  *(Block + 2) = 0; /*0x6c6501*/
  if ( (a2 & 1) != 0 ) /*0x6c6508*/
    __3_YAXPAX_Z(Block); /*0x6c650b*/
  return (DynamicVector *)Block; /*0x6c6515*/
}


// ==== 0x006C6520  sub_6C6520  this=-  sig=ida-proto ====
int sub_6C6520()
{
  MEMORY[0xB0BCF8] = 0; /*0x6c6522*/
  MEMORY[0xB0BCFC] = 0; /*0x6c6527*/
  MEMORY[0xB0BD00] = 0; /*0x6c652c*/
  MEMORY[0xB0BD04] = 0; /*0x6c6531*/
  return 0; /*0x6c6536*/
}


// ==== 0x006C6540  StaticButtonClass::method_6C6540  this=StaticButtonClass  sig=csp ====
_DWORD *__thiscall sub_6C6540(
        _DWORD *this,
        int a2,
        wchar_t *String,
        int a4,
        int aP1,
        ControlClass *aP5,
        int aP3,
        int aP4)
{
  DropListClass *Instance; // ebx

  GadgetClass::Construct(this, (GadgetClass *)aP1, (GadgetClass *)aP5, (GadgetClass *)aP3, (ControlClass *)aP4, 0, 0); /*0x6c6560*/
  Buffer::Init(this + 9, 0, 0); /*0x6c656c*/
  this->StaticButtonClass_field_0x0C = 0; /*0x6c657e*/
  this->__pad_034 = a4; /*0x6c6585*/
  *this = &vt_StaticButtonClass; /*0x6c6588*/
  StaticButtonClass::Draw((void **)this, (DropListClass *)String, 0); /*0x6c658e*/
  if ( aP3 == -1 || aP4 == -1 ) /*0x6c659b*/
  {
    Instance = (DropListClass *)TextRenderer::GetInstance(); /*0x6c65a8*/
    if ( aP3 == -1 ) /*0x6c65aa*/
      this->StaticButtonClass_field_0x14 = Text::MeasureWidth(this->StaticButtonClass_field_0x0C, 0); /*0x6c65b9*/
    if ( aP4 == -1 ) /*0x6c65bf*/
      this->ID = Instance->DropListClass_field_0x1C; /*0x6c65c4*/
  }
  return this; /*0x6c65c9*/
}


// ==== 0x006C6640  StaticButtonClass::SetText  this=StaticButtonClass  sig=csp ====
int __thiscall StaticButtonClass::SetText(int this, ControlClass *aP1)
{
  if ( !GadgetClass::ClearState((_BYTE *)this, aP1) ) /*0x6c6648*/
    return 0; /*0x6c6672*/
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 136))(this); /*0x6c6655*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 140))(this, *(_DWORD *)(this + 48)); /*0x6c6663*/
  return 1; /*0x6c666e*/
}


// ==== 0x006C6680  StaticButtonClass::Draw  this=StaticButtonClass  sig=csp ====
void __thiscall StaticButtonClass::Draw(void **this, DropListClass *aP1, char a3)
{
  size_t v4; // eax
  void *v5; // eax
  CampaignScore *Instance; // edi
  _DWORD *v7; // eax
  _DWORD v8[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( this->StaticButtonClass_field_0x0C ) /*0x6c6687*/
  {
    __3_YAXPAX_Z(this->StaticButtonClass_field_0x0C); /*0x6c668f*/
    this->StaticButtonClass_field_0x0C = 0; /*0x6c6697*/
  }
  if ( aP1 ) /*0x6c66a4*/
  {
    v4 = wcslen((const wchar_t *)aP1); /*0x6c66a7*/
    v5 = (void *)__2_YAPAXI_Z(2 * v4 + 2); /*0x6c66b1*/
    this->StaticButtonClass_field_0x0C = v5; /*0x6c66b9*/
    if ( v5 ) /*0x6c66be*/
      wcscpy((wchar_t *)v5, (const wchar_t *)aP1); /*0x6c66c2*/
  }
  (*((void (__thiscall **)(void **))*this + 18))(this); /*0x6c66ce*/
  if ( a3 ) /*0x6c66d7*/
  {
    if ( this->StaticButtonClass_field_0x0C ) /*0x6c66d9*/
    {
      (*((void (__thiscall **)(void **))*this + 34))(this); /*0x6c66e4*/
      Instance = (CampaignScore *)TextRenderer::GetInstance(); /*0x6c66f5*/
      this->StaticButtonClass_field_0x14 = (void *)Text::MeasureWidth((int)this->StaticButtonClass_field_0x0C, 0); /*0x6c6701*/
      this->ID = (void *)Instance->CampaignScore_field_0x1C; /*0x6c670f*/
      v7 = Buffer::Init(v8, 0, 0); /*0x6c6712*/
      StaticButtonClass::ReleaseBuffer((int)(this + 9), v7); /*0x6c671b*/
      Vector::Clear((int)v8); /*0x6c6724*/
    }
  }
}


// ==== 0x006C6740  StaticButtonClass::HitTest  this=StaticButtonClass  sig=csp ====
char __thiscall StaticButtonClass::_vt34(int *this)
{
  int *v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v12; // [esp+8h] [ebp-10h] BYREF
  int v13; // [esp+Ch] [ebp-Ch]
  int v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  v2 = this + 9; /*0x6c674a*/
  if ( *(this + 9) ) /*0x6c6747*/
    goto LABEL_9; /*0x6c674f*/
  v3 = this->StaticButtonClass_field_0x14; /*0x6c6751*/
  if ( v3 > 0 ) /*0x6c6756*/
  {
    v3 = this->ID; /*0x6c6758*/
    if ( v3 > 0 ) /*0x6c675d*/
    {
      if ( this != (int *)-36 ) /*0x6c6761*/
      {
        v4 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887314] + 112))(MEMORY[0x887314]); /*0x6c676b*/
        LOBYTE(v3) = (unsigned __int8)INIClass::loadFile(v2, this->StaticButtonClass_field_0x14 * this->ID * v4); /*0x6c6779*/
      }
      if ( !*v2 ) /*0x6c6781*/
        return v3; /*0x6c6781*/
      v5 = this->StaticButtonClass_field_0x04; /*0x6c6786*/
      v6 = this->StaticButtonClass_field_0x14; /*0x6c6789*/
      v12 = this->StaticButtonClass_field_0x0C; /*0x6c678c*/
      v7 = this->ID; /*0x6c6790*/
      v13 = v5; /*0x6c6793*/
      v15 = v7; /*0x6c6797*/
      v14 = v6; /*0x6c67a6*/
      LOBYTE(v3) = Helper::ProcessData((void **)MEMORY[0x887314], (int)&v12, v2); /*0x6c67aa*/
    }
  }
  if ( *v2 ) /*0x6c67af*/
  {
LABEL_9:
    v8 = this->StaticButtonClass_field_0x14; /*0x6c67b4*/
    v9 = this->StaticButtonClass_field_0x04; /*0x6c67ba*/
    v12 = this->StaticButtonClass_field_0x0C; /*0x6c67bd*/
    v10 = this->ID; /*0x6c67c1*/
    v14 = v8; /*0x6c67c4*/
    v15 = v10; /*0x6c67ce*/
    v13 = v9; /*0x6c67d7*/
    LOBYTE(v3) = sub_437290((int *)MEMORY[0x887314], (int)&v12, v2); /*0x6c67db*/
  }
  return v3; /*0x6c67e0*/
}


// ==== 0x006C67F0  StaticButtonClass::OnClick  this=StaticButtonClass  sig=csp ====
int *__thiscall StaticButtonClass::_vt35(_DWORD *this, size_t a2)
{
  int *result; // eax
  int v4; // ecx
  int v5; // edi
  int Type; // eax
  int v7; // edx
  _DWORD *v8; // eax
  int v9; // [esp-10h] [ebp-34h]
  int v10; // [esp-8h] [ebp-2Ch]
  _DWORD v11[2]; // [esp+4h] [ebp-20h] BYREF
  int v12; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v13[16]; // [esp+14h] [ebp-10h] BYREF

  result = (int *)this->q030; /*0x6c67f6*/
  if ( result ) /*0x6c67fb*/
  {
    v4 = this->__pad_034; /*0x6c67fd*/
    v5 = this->StaticButtonClass_field_0x0C; /*0x6c6801*/
    if ( (v4 & 0x100) != 0 ) /*0x6c6807*/
      v5 += this->StaticButtonClass_field_0x14 / 2; /*0x6c6811*/
    if ( (v4 & 0x200) != 0 ) /*0x6c6816*/
      v5 = v5 + this->StaticButtonClass_field_0x14 - 1; /*0x6c681b*/
    Type = BuildingAnim::GetType(); /*0x6c681f*/
    v7 = this->StaticButtonClass_field_0x10; /*0x6c682a*/
    v11[0] = v5; /*0x6c682d*/
    v11[1] = v7; /*0x6c6831*/
    v10 = this->__pad_034; /*0x6c6842*/
    v9 = *((_DWORD *)MEMORY[0xB054D4] + Type); /*0x6c684b*/
    v8 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)MEMORY[0x887314] + 120))(MEMORY[0x887314], v13); /*0x6c6854*/
    return TextRenderer::DrawText(&v12, a2, MEMORY[0x887314], v8, (int)v11, v9, 0, v10); /*0x6c6869*/
  }
  return result; /*0x6c6872*/
}


// ==== 0x006C6880  StaticButtonClass::QueryInterface  this=StaticButtonClass  sig=csp ====
StaticButtonClass *__thiscall StaticButtonClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 12); /*0x6c6883*/
  *Block = &vt_StaticButtonClass; /*0x6c6886*/
  if ( v3 ) /*0x6c688e*/
    __3_YAXPAX_Z(v3); /*0x6c6891*/
  Vector::Clear((int)(Block + 9)); /*0x6c689c*/
  GadgetClass::Dtor(Block); /*0x6c68a3*/
  if ( (a2 & 1) != 0 ) /*0x6c68ad*/
    __3_YAXPAX_Z(Block); /*0x6c68b0*/
  return (StaticButtonClass *)Block; /*0x6c68ba*/
}


// ==== 0x006C68C0  sub_6C68C0  this=-  sig=ida-proto ====
void sub_6C68C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6c68cc*/
  MEMORY[0xB0BD30] = Math::Sqrt(v0 + v0); /*0x6c68de*/
}


// ==== 0x006C68F0  sub_6C68F0  this=-  sig=ida-proto ====
void sub_6C68F0()
{
  MEMORY[0xB0BDA8] = MEMORY[0xB0BD30] / 60.0; /*0x6c68fc*/
}


// ==== 0x006C6910  sub_6C6910  this=-  sig=ida-proto ====
void sub_6C6910()
{
  MEMORY[0xB0BD88] = 1.0 / MEMORY[0xB0BDA8]; /*0x6c691c*/
}


// ==== 0x006C6930  sub_6C6930  this=-  sig=ida-proto ====
void sub_6C6930()
{
  MEMORY[0xB0BD80] = 0.0174532925199433 * 45.0; /*0x6c693c*/
}


// ==== 0x006C6950  sub_6C6950  this=-  sig=ida-proto ====
void sub_6C6950()
{
  MEMORY[0xB0BD38] = 0.0174532925199433 * 60.0; /*0x6c695c*/
}


// ==== 0x006C6970  sub_6C6970  this=-  sig=ida-proto ====
void sub_6C6970()
{
  MEMORY[0xB0BD08] = 0.0174532925199433 * 90.0; /*0x6c697c*/
}


// ==== 0x006C6990  sub_6C6990  this=-  sig=ida-proto ====
__int64 sub_6C6990()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0BD08] - MEMORY[0xB0BD38]); /*0x6c69a2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0BD30] * 0.5); /*0x6c69b6*/
  MEMORY[0xB0BDB0] = result; /*0x6c69bb*/
  return result; /*0x6c69c0*/
}


// ==== 0x006C69D0  sub_6C69D0  this=-  sig=ida-proto ====
void sub_6C69D0()
{
  MEMORY[0xB0BD40] = Math::ArcTan((double)MEMORY[0xB0BDB0] * 0.00390625); /*0x6c69e7*/
}


// ==== 0x006C6A00  sub_6C6A00  this=-  sig=ida-proto ====
void sub_6C6A00()
{
  MEMORY[0xB0BD70] = Math::ArcTan((double)(2 * MEMORY[0xB0BDB0]) / MEMORY[0xB0BD30]); /*0x6c6a22*/
}


// ==== 0x006C6A30  sub_6C6A30  this=-  sig=ida-proto ====
__int64 sub_6C6A30()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0BDB0]) + 0.5); /*0x6c6a4b*/
  MEMORY[0xB0BDA4] = result; /*0x6c6a50*/
  return result; /*0x6c6a56*/
}


// ==== 0x006C6A60  sub_6C6A60  this=-  sig=ida-proto ====
int sub_6C6A60()
{
  MEMORY[0xB0BD20] = 0; /*0x6c6a62*/
  MEMORY[0xB0BD22] = 0; /*0x6c6a68*/
  return 0; /*0x6c6a6e*/
}


// ==== 0x006C6A70  sub_6C6A70  this=-  sig=ida-proto ====
int sub_6C6A70()
{
  MEMORY[0xB0BD60] = 0; /*0x6c6a72*/
  MEMORY[0xB0BD64] = 0; /*0x6c6a77*/
  MEMORY[0xB0BD68] = 0; /*0x6c6a7c*/
  return 0; /*0x6c6a81*/
}


// ==== 0x006C6A90  sub_6C6A90  this=-  sig=ida-proto ====
int sub_6C6A90()
{
  MEMORY[0xB0BDA0] = 0; /*0x6c6a95*/
  MEMORY[0xB0BD98] = 128; /*0x6c6a9f*/
  MEMORY[0xB0BD9C] = 128; /*0x6c6aa4*/
  return 128; /*0x6c6aa9*/
}


// ==== 0x006C6AB0  sub_6C6AB0  this=-  sig=ida-proto ====
int sub_6C6AB0()
{
  MEMORY[0xB0BD10] = 0; /*0x6c6ab2*/
  MEMORY[0xB0BD14] = 0; /*0x6c6ab7*/
  MEMORY[0xB0BD18] = 0; /*0x6c6abc*/
  MEMORY[0xB0BD1C] = 0; /*0x6c6ac1*/
  return 0; /*0x6c6ac6*/
}


// ==== 0x006C6AD0  sub_6C6AD0  this=-  sig=ida-proto ====
int sub_6C6AD0()
{
  MEMORY[0xB0BD28] = Timer::GetTicks(); /*0x6c6adf*/
  return atexit(nullsub_234); /*0x6c6aea*/
}


// ==== 0x006C6AF0  nullsub_234  this=-  sig=ida-proto ====
void __cdecl nullsub_234()
{
  ; /*0x6c6af0*/
}


// ==== 0x006C6B00  ObjectClass::Audio_Read_6C6B00  this=int  sig=csp ====
_DWORD *__thiscall Audio_Read_6C6B00(_DWORD *this, AbstractClass *aP1)
{
  _DWORD *result; // eax
  signed int v3; // ecx

  result = this; /*0x6c6b04*/
  *this = *(_DWORD *)aP1->__pad_0; /*0x6c6b08*/
  v3 = *(_DWORD *)&aP1->__pad_0[4]; /*0x6c6b0a*/
  result[1] = v3; /*0x6c6b13*/
  if ( v3 <= 0x8000 ) /*0x6c6b16*/
    qmemcpy(result + 2, &aP1->__pad_0[8], v3); /*0x6c6b2f*/
  else
    result[1] = 0; /*0x6c6b18*/
  return result; /*0x6c6b1f*/
}


// ==== 0x006C6B40  sub_6C6B40  this=-  sig=ida-proto ====
int sub_6C6B40()
{
  MEMORY[0xB0BD50] = 0; /*0x6c6b47*/
  MEMORY[0xB0BD54] = 0; /*0x6c6b4c*/
  MEMORY[0xB0BD58] = 0; /*0x6c6b51*/
  return atexit(sub_6C6B60); /*0x6c6b5c*/
}


// ==== 0x006C6B60  sub_6C6B60  this=-  sig=ida-proto ====
void __cdecl sub_6C6B60()
{
  MEMORY[0xB0BD50] = 0; /*0x6c6b65*/
  __3_YAXPAX_Z(MEMORY[0xB0BD58]); /*0x6c6b70*/
}


// ==== 0x006C6D00  ObjectClass::Audio_Read_6C6D00  this=ObjectClass  sig=csp ====
void sub_6C6D00()
{
  int v0; // ecx
  int v1; // ebx
  char *v2; // eax
  char *v3; // esi
  void *v4; // ebp
  char v5; // dl
  unsigned int v6; // ecx

  v0 = 0; /*0x6c6d08*/
  if ( MEMORY[0xB0BD50] ) /*0x6c6d0c*/
  {
    if ( MEMORY[0xB0BD50] <= 0 ) /*0x6c6d12*/
      v0 = MEMORY[0xB0BD50] - 1; /*0x6c6d14*/
    memcpy( /*0x6c6d45*/
      (char *)MEMORY[0xB0BD58] + 32776 * v0,
      (char *)MEMORY[0xB0BD58] + 32776 * v0 + 32776,
      32776 * MEMORY[0xB0BD50] - 32776 * (v0 + 1));
    --MEMORY[0xB0BD50]; /*0x6c6d59*/
    if ( 3 * MEMORY[0xB0BD50] <= MEMORY[0xB0BD54] ) /*0x6c6d63*/
    {
      v1 = MEMORY[0xB0BD54] / 2; /*0x6c6d6c*/
      if ( MEMORY[0xB0BD54] / 2 < 10 ) /*0x6c6d71*/
        v1 = 10; /*0x6c6d73*/
      if ( v1 < MEMORY[0xB0BD54] ) /*0x6c6d7a*/
      {
        v2 = (char *)__2_YAPAXI_Z(32776 * v1); /*0x6c6d88*/
        v3 = (char *)MEMORY[0xB0BD58]; /*0x6c6d8d*/
        v4 = v2; /*0x6c6d98*/
        if ( MEMORY[0xB0BD58] ) /*0x6c6d9a*/
        {
          v5 = 8 * MEMORY[0xB0BD50]; /*0x6c6dae*/
          v6 = (unsigned int)(32776 * MEMORY[0xB0BD50]) >> 2; /*0x6c6db0*/
          qmemcpy(v2, MEMORY[0xB0BD58], 4 * v6); /*0x6c6db3*/
          qmemcpy(&v2[4 * v6], &v3[4 * v6], v5 & 3); /*0x6c6dba*/
          v3 = (char *)MEMORY[0xB0BD58]; /*0x6c6dbc*/
        }
        __3_YAXPAX_Z(v3); /*0x6c6dc4*/
        MEMORY[0xB0BD58] = v4; /*0x6c6dcc*/
        MEMORY[0xB0BD54] = v1; /*0x6c6dd2*/
      }
    }
  }
}


// ==== 0x006C6DE0  ObjectClass::Audio_Read_6C6DE0  this=ObjectClass  sig=csp ====
void sub_6C6DE0()
{
  int v0; // edx
  char *v1; // ebx
  int v2; // ecx
  int v3; // eax
  char *v4; // edi
  _DWORD v5[8194]; // [esp+14h] [ebp-8008h] BYREF

  v0 = MEMORY[0xB0BD50]; /*0x6c6dea*/
  v5[0] = 0; /*0x6c6df8*/
  v5[1] = 0; /*0x6c6dfc*/
  if ( MEMORY[0xB0BD50] ) /*0x6c6e00*/
  {
    if ( MEMORY[0xB0BD50] > 0 ) /*0x6c6e06*/
    {
      Audio_Read_6C6B00(v5, MEMORY[0xB0BD58]); /*0x6c6e12*/
      v0 = MEMORY[0xB0BD50]; /*0x6c6e17*/
    }
LABEL_4:
    v1 = (char *)MEMORY[0xB0BD58]; /*0x6c6e1d*/
    while ( v5[1] < 1 || v5[0] > 10 ) /*0x6c6e31*/
    {
      v2 = 0; /*0x6c6e37*/
      if ( !v0 ) /*0x6c6e3b*/
        return; /*0x6c6e3b*/
      if ( v0 <= 0 ) /*0x6c6e41*/
        v2 = v0 - 1; /*0x6c6e43*/
      memcpy(&v1[32776 * v2], &v1[32776 * v2 + 32776], 32776 * v0 - 32776 * (v2 + 1)); /*0x6c6e6e*/
      v0 = MEMORY[0xB0BD50] - 1; /*0x6c6e81*/
      MEMORY[0xB0BD50] = v0; /*0x6c6e82*/
      if ( 3 * v0 <= MEMORY[0xB0BD54] ) /*0x6c6e8d*/
      {
        Audio_Read_6C8870(&MEMORY[0xB0BD50]); /*0x6c6e94*/
        v0 = MEMORY[0xB0BD50]; /*0x6c6e99*/
      }
      if ( !v0 ) /*0x6c6ea1*/
        return; /*0x6c6ea1*/
      if ( v0 <= 0 ) /*0x6c6ea7*/
        goto LABEL_4; /*0x6c6ea7*/
      v1 = (char *)MEMORY[0xB0BD58]; /*0x6c6ead*/
      v5[0] = *(_DWORD *)MEMORY[0xB0BD58]; /*0x6c6eb5*/
      v5[1] = *((_DWORD *)MEMORY[0xB0BD58] + 1); /*0x6c6ec2*/
      if ( v5[1] <= 0x8000 ) /*0x6c6ec6*/
        qmemcpy(&v5[2], (char *)MEMORY[0xB0BD58] + 8, v5[1]); /*0x6c6edd*/
      else
        v5[1] = 0; /*0x6c6ec8*/
    }
    if ( MEMORY[0xAC1170] ) /*0x6c6ef2*/
    {
      (*(void (__stdcall **)(LPVOID, char *, int, _DWORD *, _DWORD))(*(_DWORD *)MEMORY[0xAC1170] + 12))( /*0x6c6f09*/
        MEMORY[0xAC1170],
        byte_B77930,
        dword_B76184,
        &v5[2],
        v5[1]);
      v3 = 0; /*0x6c6f17*/
      ++v5[0]; /*0x6c6f1b*/
      if ( MEMORY[0xB0BD50] ) /*0x6c6f1f*/
      {
        if ( MEMORY[0xB0BD50] <= 0 ) /*0x6c6f21*/
          v3 = MEMORY[0xB0BD50] - 1; /*0x6c6f23*/
        v4 = (char *)MEMORY[0xB0BD58] + 32776 * v3; /*0x6c6f32*/
        if ( v4 ) /*0x6c6f37*/
          qmemcpy(v4, v5, 0x8008u); /*0x6c6f42*/
      }
    }
  }
}


// ==== 0x006C6F50  ProcessGameResults  this=VOID_PTR  sig=ida-proto ====
void __fastcall ProcessGameResults(char a1)
{
  IUnknown *v2; // esi
  char *v3; // eax
  char *inited; // eax
  INIClass *v5; // esi
  char *v6; // eax
  char *v7; // eax
  ObjectClass *v8; // esi
  char *v9; // eax
  char *v10; // eax
  IUnknown *v11; // esi
  char *v12; // eax
  char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  char *v16; // eax
  char *v17; // eax
  ObjectClass *v19; // esi
  char *eax31; // eax
  char *v20; // eax
  IUnknown *v21; // esi
  char *v22; // eax
  char *v23; // eax
  bool v24; // bl
  char *v25; // eax
  char *v26; // eax
  bool v27; // bl
  char *v28; // eax
  char *v29; // eax
  IUnknown *v30; // esi
  char *v31; // eax
  char *v32; // eax
  IUnknown *v33; // esi
  char *v34; // eax
  char *v35; // eax
  char *v36; // eax
  char *v37; // eax
  bool v38; // bl
  char *v39; // eax
  char *v40; // eax
  IUnknown *v41; // esi
  char *v42; // eax
  char *v43; // eax
  IUnknown *v44; // esi
  char *v45; // eax
  char *v46; // eax
  char *v47; // eax
  char *v48; // eax
  IUnknown *v49; // esi
  char *v50; // eax
  char *v51; // eax
  IUnknown *v52; // esi
  char *v53; // eax
  char *v54; // eax
  HouseClass *v55; // edx
  CampaignScore *v57; // edi
  CampaignScore **ecx71; // ecx
  IUnknown *v59; // esi
  CampaignScore *eax72; // eax
  ObjectClass *v60; // ebx
  ObjectClass *v61; // eax
  IUnknown *v62; // ecx
  int v63; // eax
  _BYTE *v64; // esi
  int v65; // ebx
  int v66; // edi
  int v67; // ebp
  IUnknown *v68; // ebp
  _BYTE *v69; // esi
  char *v70; // ebx
  int v71; // edi
  int v72; // eax
  IUnknown *v73; // esi
  int *v74; // edi
  char *v75; // eax
  char *v76; // eax
  char *v77; // eax
  char *v78; // eax
  unsigned int v79; // eax
  char v80; // dl
  _BYTE *v81; // ecx
  int v82; // esi
  char *v83; // eax
  char *v84; // eax
  IUnknown *v86; // esi
  char *eax130; // eax
  char *v87; // eax
  char *v88; // eax
  IUnknown *v89; // esi
  char *v90; // eax
  char *v91; // eax
  char *ModuleInternalVersion; // eax
  char *v93; // eax
  char *v94; // eax
  char *v95; // eax
  char *v96; // eax
  char *v97; // eax
  char *v98; // eax
  char *v99; // eax
  char *v100; // eax
  IUnknown *v101; // esi
  char *v102; // eax
  char *v103; // eax
  IUnknown *v104; // eax
  int v105; // esi
  char v106; // bl
  char *v107; // eax
  char *v108; // eax
  ObjectClass *v110; // edi
  char *eax169; // eax
  char *v111; // eax
  ObjectClass *v113; // edi
  char *eax172; // eax
  char *v114; // eax
  ObjectClass *v116; // edi
  char *eax175; // eax
  char *v117; // eax
  IUnknown *v118; // edi
  char *v119; // eax
  char *v120; // eax
  char *v121; // eax
  char *v122; // eax
  char v123; // al
  char *v124; // eax
  char *v125; // eax
  ObjectClass *v127; // edi
  char *eax191; // eax
  char *v128; // eax
  ObjectClass *v130; // edi
  char *eax194; // eax
  char *v131; // eax
  int v132; // edi
  char *v133; // eax
  char *v134; // eax
  int v135; // ebp
  int v136; // edi
  ObjectClass *v138; // edi
  char *eax204; // eax
  char *v139; // eax
  int v140; // ebp
  int v141; // edi
  ObjectClass *v143; // edi
  char *eax211; // eax
  char *v144; // eax
  int v145; // ebp
  int v146; // edi
  ObjectClass *v148; // edi
  char *eax218; // eax
  char *v149; // eax
  int v150; // ebp
  int v151; // edi
  ObjectClass *v153; // edi
  char *eax225; // eax
  char *v154; // eax
  int i; // edi
  int v156; // eax
  int j; // edi
  int v158; // eax
  int v159; // eax
  int k; // edi
  int v161; // eax
  int v162; // ebp
  int m; // edi
  int v164; // ebx
  int v165; // edi
  ObjectClass *v167; // edi
  char *eax247; // eax
  char *v168; // eax
  int v169; // ebx
  int v170; // ebp
  int n; // edi
  ObjectClass *v173; // edi
  char *eax254; // eax
  char *v174; // eax
  int v175; // ebx
  int v176; // ebp
  int ii; // edi
  ObjectClass *v179; // edi
  char *eax261; // eax
  char *v180; // eax
  int v181; // ebx
  int v182; // ebp
  int jj; // edi
  ObjectClass *v185; // edi
  char *eax268; // eax
  char *v186; // eax
  int v187; // edi
  int v188; // ebx
  ObjectClass *v190; // edi
  char *eax275; // eax
  char *v191; // eax
  int v192; // ebx
  int v193; // ebp
  int kk; // edi
  ObjectClass *v196; // edi
  char *eax282; // eax
  char *v197; // eax
  int v198; // ebx
  int v199; // ebp
  int mm; // edi
  ObjectClass *v202; // edi
  char *eax289; // eax
  char *v203; // eax
  int v204; // ebx
  int v205; // ebp
  int nn; // edi
  ObjectClass *v208; // edi
  char *eax296; // eax
  char *v209; // eax
  int v210; // ebx
  int v211; // edi
  ObjectClass *v213; // edi
  char *eax303; // eax
  char *v214; // eax
  int v215; // ebx
  int v216; // edi
  ObjectClass *v218; // edi
  char *eax310; // eax
  char *v219; // eax
  char v220; // bl
  ObjectClass *v222; // esi
  char *eax313; // eax
  char *v223; // eax
  IUnknown *v224; // edi
  IUnknown *v225; // ebp
  IUnknown *v226; // esi
  char *v227; // eax
  char *v228; // eax
  char *v229; // eax
  unsigned int v230; // esi
  char *v231; // eax
  char *v232; // eax
  char *v233; // eax
  SIZE_T dwTotalPhys; // esi
  char *v235; // eax
  char *v236; // eax
  char *v237; // eax
  unsigned int v238; // esi
  char *v239; // eax
  char *v240; // eax
  char *v241; // eax
  char *vfptr; // esi
  int X; // ecx
  char v244; // al
  int v245; // ecx
  _DWORD *v246; // edi
  char *v247; // esi
  int v248; // eax
  int v249; // ecx
  int v250; // ebx
  char *v251; // ebp
  AbstractClass *v252; // esi
  char v253; // al
  unsigned int v254; // ecx
  char *v255; // edx
  int v256; // ebx
  char *v257; // ebp
  AbstractClass *v258; // esi
  char v259; // al
  unsigned int v260; // ecx
  char *v261; // edx
  _DWORD v262[3]; // [esp+24h] [ebp-8394h] BYREF
  char v263; // [esp+33h] [ebp-8385h]
  rc_ptr_base v264; // [esp+34h] [ebp-8384h] BYREF
  int v265; // [esp+38h] [ebp-8380h]
  char v266; // [esp+3Fh] [ebp-8379h]
  ObjectClass *aP2; // [esp+40h] [ebp-8378h]
  IUnknown *v268; // [esp+44h] [ebp-8374h]
  IUnknown *v269; // [esp+48h] [ebp-8370h]
  IUnknown *v270; // [esp+4Ch] [ebp-836Ch]
  struct _FILETIME LastWriteTime; // [esp+50h] [ebp-8368h] BYREF
  const CHAR *v272; // [esp+58h] [ebp-8360h] BYREF
  char v273; // [esp+5Ch] [ebp-835Ch]
  int v274; // [esp+60h] [ebp-8358h]
  int v275; // [esp+64h] [ebp-8354h]
  int v276; // [esp+68h] [ebp-8350h]
  HANDLE hFile; // [esp+6Ch] [ebp-834Ch]
  int v278; // [esp+70h] [ebp-8348h]
  __int16 v279; // [esp+74h] [ebp-8344h]
  __int16 v280; // [esp+76h] [ebp-8342h]
  char v281; // [esp+78h] [ebp-8340h]
  int v282; // [esp+7Ch] [ebp-833Ch] BYREF
  _BYTE v283[28]; // [esp+80h] [ebp-8338h] BYREF
  IUnknown *v284[8]; // [esp+9Ch] [ebp-831Ch]
  struct _MEMORYSTATUS Buffer; // [esp+BCh] [ebp-82FCh] BYREF
  CHAR v286[128]; // [esp+DCh] [ebp-82DCh] BYREF
  int v287[15]; // [esp+15Ch] [ebp-825Ch] BYREF
  int v288; // [esp+198h] [ebp-8220h]
  CHAR Filename[280]; // [esp+298h] [ebp-8120h] BYREF
  _DWORD v290[8194]; // [esp+3B0h] [ebp-8008h] BYREF

  v266 = a1;
  v262[0] = 0;
  v262[1] = 0;
  aP2 = 0;
  v269 = 0;
  if ( *(&g_MatrixTransformState + 2274) && HouseClass_Player == (IUnknown *)*(&g_MatrixTransformState + 2274) )
  {
    ResultNode::CleanupList(v262);
    return;
  }
  Debug::Log();
  v2 = dword_B779D4;
  v3 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v3 )
    inited = TerrainInitMap(v3, (RandomStruct *)&stru_830620.__pad_579C[50024], v2);
  else
    inited = 0;
  LinkedList::PushFront(v262, (IUnknown *)inited);
  if ( MEMORY[0xA8B238] == (CellStruct *)4 && MEMORY[0xA8B244] == 3 )
  {
    v5 = MEMORY[0xA8B240];
    v6 = (char *)__2_YAPAXI_Z(0x10u);
    if ( v6 )
      v7 = NetMessage::Pack4(v6, (RandomStruct *)&stru_830620.__pad_579C[50016], (int)v5);
    else
      v7 = 0;
    LinkedList::PushFront(v262, (IUnknown *)v7);
    v8 = dword_B77D6C;
    if ( !a1 )
      v8 = dword_B73814;
  }
  else
  {
    v8 = dword_B77D6C;
  }
  v9 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v9 )
    v10 = TerrainInitMap(v9, (RandomStruct *)&stru_830620.__pad_579C[50008], (IUnknown *)v8);
  else
    v10 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v10);
  v11 = dword_B779C4;
  v12 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v12 )
    v13 = TerrainInitMap(v12, (RandomStruct *)&stru_830620.__pad_579C[50000], v11);
  else
    v13 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v13);
  if ( MEMORY[0xA8B238] == (CellStruct *)4 && MEMORY[0xA8B244] == 3 && a1 )
    dword_B779C4 = 0;
  LOBYTE(v264.vfptr) = MEMORY[0xA8B8C2] == 1;
  v14 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v14 )
    v15 = String::AllocAndCopy(v14, (RandomStruct *)&stru_830620.__pad_579C[49992], (IUnknown *)v264.vfptr);
  else
    v15 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v15);
  LOBYTE(v264.vfptr) = MEMORY[0xA8B8C1] == 1;
  v16 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v16 )
    v17 = String::AllocAndCopy(v16, (RandomStruct *)&stru_830620.__pad_579C[49984], (IUnknown *)v264.vfptr);
  else
    v17 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v17);
  v19 = (ObjectClass *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12448] / 0x3Cu);
  eax31 = (char *)__2_YAPAXI_Z(0x10u);
  if ( eax31 )
    v20 = TerrainInitMap(eax31, (RandomStruct *)&stru_830620.__pad_579C[49976], (IUnknown *)v19);
  else
    v20 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v20);
  v21 = (IUnknown *)MEMORY[0xA8B25C];
  v22 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v22 )
    v23 = TerrainInitMap(v22, (RandomStruct *)&stru_830620.__pad_579C[49968], v21);
  else
    v23 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v23);
  v24 = (_BYTE)MEMORY[0xA8B262] != 0;
  v25 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v25 )
    v26 = TerrainInitMap(v25, (RandomStruct *)&stru_830620.__pad_579C[49960], (IUnknown *)v24);
  else
    v26 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v26);
  v27 = (_BYTE)MEMORY[0xA8B263] != 0;
  v28 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v28 )
    v29 = TerrainInitMap(v28, (RandomStruct *)&stru_830620.__pad_579C[49952], (IUnknown *)v27);
  else
    v29 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v29);
  v30 = MEMORY[0xA8B250];
  v31 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v31 )
    v32 = TerrainInitMap(v31, (RandomStruct *)&stru_830620.__pad_579C[49944], v30);
  else
    v32 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v32);
  v33 = (IUnknown *)(((_BYTE)MEMORY[0xA8B320] == 1) + 2 * ((_BYTE)MEMORY[0xA8B264] == 1));
  v34 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v34 )
    v35 = TerrainInitMap(v34, (RandomStruct *)&stru_830620.__pad_579C[49936], v33);
  else
    v35 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v35);
  LOBYTE(v264.vfptr) = (_BYTE)MEMORY[0xA8B258] != 0;
  v36 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v36 )
    v37 = String::AllocAndCopy(v36, (RandomStruct *)&stru_830620.__pad_579C[49928], (IUnknown *)v264.vfptr);
  else
    v37 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v37);
  v38 = (_BYTE)MEMORY[0xA8B261] != 0;
  v39 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v39 )
    v40 = TerrainInitMap(v39, (RandomStruct *)&stru_830620.__pad_579C[49920], (IUnknown *)v38);
  else
    v40 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v40);
  v41 = (IUnknown *)MEMORY[0xA8B274];
  v42 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v42 )
    v43 = TerrainInitMap(v42, (RandomStruct *)&stru_830620.__pad_579C[49912], v41);
  else
    v43 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v43);
  v44 = (IUnknown *)MEMORY[0xA8B270];
  v45 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v45 )
    v46 = TerrainInitMap(v45, (RandomStruct *)&stru_830620.__pad_579C[37440], v44);
  else
    v46 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v46);
  v47 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v47 )
    v48 = BuildResultPacket(v47, &stru_830620.__pad_579C[49904], (IUnknown *)&MEMORY[0xA8B8E0]);
  else
    v48 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v48);
  v49 = (IUnknown *)dword_B77780;
  v50 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v50 )
    v51 = TerrainInitMap(v50, (RandomStruct *)&stru_830620.__pad_579C[49896], v49);
  else
    v51 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v51);
  v52 = (IUnknown *)dword_B77CE0;
  v53 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v53 )
    v54 = TerrainInitMap(v53, (RandomStruct *)&stru_830620.__pad_579C[49888], v52);
  else
    v54 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v54);
  if ( (int)HouseClass_Count > 0 )
  {
    v55 = HouseClass_Array;
    v57 = (CampaignScore *)*(&g_MatrixTransformState + 2274);
    ecx71 = (CampaignScore **)&v282;
    v59 = HouseClass_Count;
    do
    {
      eax72 = *(CampaignScore **)v55->__pad_0;
      if ( *(_BYTE *)(*(_DWORD *)v55->__pad_0 + 492) && eax72 != v57 )
      {
        v60 = aP2;
        *ecx71++ = eax72;
        aP2 = (ObjectClass *)&v60->__pad_0[1];
      }
      v55 = (HouseClass *)((char *)v55 + 4);
      v59 = (IUnknown *)((char *)v59 - 1);
    }
    while ( v59 );
  }
  v61 = aP2;
  v62 = 0;
  v268 = 0;
  if ( aP2 )
  {
    do
    {
      v63 = (char *)v61 - (char *)v62 - 1;
      if ( v63 )
      {
        v64 = v283;
        v65 = v63;
        do
        {
          v66 = *(_DWORD *)v64;
          v67 = *((_DWORD *)v64 - 1);
          if ( _strcmpi((char *)(v67 + 90100), (char *)(*(_DWORD *)v64 + 90100)) > 0 )
          {
            *((_DWORD *)v64 - 1) = v66;
            *(_DWORD *)v64 = v67;
          }
          v64 += 4;
          --v65;
        }
        while ( v65 );
        v62 = v268;
      }
      v61 = aP2;
      v62 = (IUnknown *)((char *)v62 + 1);
      v268 = v62;
    }
    while ( v62 < (IUnknown *)aP2 );
  }
  v68 = (IUnknown *)aP2;
  if ( (unsigned int)aP2 > 1 )
  {
    v69 = v283;
    v70 = (char *)&aP2[-1].lineTrailer + 3;
    do
    {
      v71 = *(_DWORD *)v69;
      if ( !_strcmpi((char *)(*(_DWORD *)v69 + 90100), byte_B779E0) )
      {
        v72 = v282;
        v282 = v71;
        *(_DWORD *)v69 = v72;
      }
      v69 += 4;
      --v70;
    }
    while ( v70 );
  }
  v73 = 0;
  if ( v68 )
  {
    v74 = &v282;
    while ( _strcmpi((char *)(*v74 + 90100), byte_B77830) )
    {
      v73 = (IUnknown *)((char *)v73 + 1);
      ++v74;
      if ( v73 >= v68 )
        goto LABEL_95;
    }
    v269 = v73;
  }
LABEL_95:
  v75 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v75 )
    v76 = TerrainInitMap(v75, (RandomStruct *)&stru_830620.__pad_579C[49880], v68);
  else
    v76 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v76);
  v77 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v77 )
    v78 = TerrainInitMap(v77, (RandomStruct *)&stru_830620.__pad_579C[49872], v269);
  else
    v78 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v78);
  if ( dword_B779C4 == (IUnknown *)1 )
  {
    LoadPlayerProfile(&v264, (const char **)&g_WebBrowser);
    if ( !v266 )
    {
      if ( !MEMORY[0xA8B8C1] || HouseClass_Player->__pad_1D8[48] )
      {
        Event_Process_77A8B0(v265, 1);
      }
      else if ( HouseClass_Player->__pad_1D8[29] || HouseClass_Player->__pad_220[40] || HouseClass_Player->__pad_220[39] )
      {
        Event_Process_77A890(v265, 1);
      }
      else
      {
        Event_Process_77A870(v265, 1);
      }
      SaveProfileWOL(v265, &g_WebBrowser);
    }
    v264.vfptr = &vt_rc_ptr_PlayerProfile;
    ComPtr::Release(&v264);
  }
  v79 = 0;
  if ( aP2 )
  {
    v80 = MEMORY[0xA8B8C1];
    do
    {
      if ( v80 )
      {
        v81 = *(_BYTE **)&v283[4 * v79 - 4];
        if ( v81[520] )
        {
          v284[v79] = (IUnknown *)2;
        }
        else if ( v81[584] || v81[583] )
        {
          v284[v79] = (IUnknown *)528;
        }
        else if ( v81[501] )
        {
          v284[v79] = (IUnknown *)512;
        }
        else
        {
          v284[v79] = (IUnknown *)256;
        }
      }
      else
      {
        v284[v79] = (IUnknown *)8;
      }
      ++v79;
    }
    while ( v79 < (unsigned int)aP2 );
  }
  v82 = *(_DWORD *)dword_B77788;
  v83 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v83 )
    v84 = NetMessage::Pack4(v83, (RandomStruct *)&stru_830620.__pad_579C[49864], v82);
  else
    v84 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v84);
  if ( *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12448] / 60 )
  {
    v86 = (IUnknown *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]
                     / (unsigned int)(*(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12448] / 60));
    eax130 = (char *)__2_YAPAXI_Z(0x10u);
    if ( eax130 )
    {
      v87 = TerrainInitMap(eax130, (RandomStruct *)&stru_830620.__pad_579C[49856], v86);
      goto LABEL_135;
    }
  }
  else
  {
    v88 = (char *)__2_YAPAXI_Z(0x10u);
    if ( v88 )
    {
      v87 = NetMessage::Pack4(v88, (RandomStruct *)&stru_830620.__pad_579C[49856], 0);
      goto LABEL_135;
    }
  }
  v87 = 0;
LABEL_135:
  LinkedList::PushFront(v262, (IUnknown *)v87);
  v89 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[116];
  v90 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v90 )
    v91 = TerrainInitMap(v90, (RandomStruct *)&stru_830620.__pad_579C[49848], v89);
  else
    v91 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v91);
  ModuleInternalVersion = GetModuleInternalVersion((int)&MEMORY[0xA8D63C].__pad_14B0[500]);
  wsprintfA(v286, &stru_830620.__pad_579C[49844], ModuleInternalVersion);
  v93 = (char *)__2_YAPAXI_Z(0x10u);
  if ( v93 )
    v94 = BuildResultPacket(v93, &stru_830620.__pad_579C[49836], (IUnknown *)v286);
  else
    v94 = 0;
  LinkedList::PushFront(v262, (IUnknown *)v94);
  GetModuleFileNameA((HMODULE)g_hInstance, Filename, 0x118u);
  v273 = 0;
  v274 = 1;
  v275 = 0;
  v276 = -1;
  hFile = (HANDLE)-1;
  v278 = 0;
  v279 = 0;
  v280 = 0;
  v281 = 0;
  v272 = (const CHAR *)&vt_RawFileClass;
  FileClass::SetName(&v272, Filename);
  FileClass::Open2(&v272, (const CHAR *)1);
  if ( hFile != (HANDLE)-1 && GetFileTime(hFile, 0, 0, &LastWriteTime) )
  {
    LastWriteTime.dwLowDateTime = htonl(LastWriteTime.dwLowDateTime);
    LastWriteTime.dwHighDateTime = htonl(LastWriteTime.dwHighDateTime);
    v95 = (char *)__2_YAPAXI_Z(0x10u);
    if ( v95 )
      v96 = NetMessage::Pack(v95, &stru_830620.__pad_579C[49828], (IUnknown *)&LastWriteTime, (IUnknown *)8);
    else
      v96 = 0;
    LinkedList::PushFront(v262, (IUnknown *)v96);
  }
  if ( MEMORY[0xA8B244] != 1 )
  {
    if ( MEMORY[0xA8B244] == 2 )
    {
      v99 = (char *)__2_YAPAXI_Z(0x10u);
      if ( v99 )
      {
        v98 = TerrainInitMap(v99, (RandomStruct *)&stru_830620.__pad_579C[49820], (IUnknown *)4);
        goto LABEL_157;
      }
    }
    else
    {
      if ( MEMORY[0xA8B244] != 4 )
        goto LABEL_158;
      v100 = (char *)__2_YAPAXI_Z(0x10u);
      if ( v100 )
      {
        v98 = TerrainInitMap(v100, (RandomStruct *)&stru_830620.__pad_579C[49820], (IUnknown *)1);
        goto LABEL_157;
      }
    }
LABEL_156:
    v98 = 0;
    goto LABEL_157;
  }
  v97 = (char *)__2_YAPAXI_Z(0x10u);
  if ( !v97 )
    goto LABEL_156;
  v98 = TerrainInitMap(v97, (RandomStruct *)&stru_830620.__pad_579C[49820], (IUnknown *)2);
LABEL_157:
  LinkedList::PushFront(v262, (IUnknown *)v98);
LABEL_158:
  if ( MEMORY[0xA8B23C] )
  {
    v101 = (IUnknown *)(*(int (__thiscall **)(SkirmishDialog *))(*(_DWORD *)MEMORY[0xA8B23C]->__pad_0 + 184))(MEMORY[0xA8B23C]);
    v102 = (char *)__2_YAPAXI_Z(0x10u);
    if ( v102 )
      v103 = TerrainInitMap(v102, (RandomStruct *)&stru_830620.__pad_579C[49812], v101);
    else
      v103 = 0;
    LinkedList::PushFront(v262, (IUnknown *)v103);
  }
  v104 = 0;
  v268 = 0;
  if ( aP2 )
  {
    while ( 1 )
    {
      v105 = *(_DWORD *)&v283[4 * (_DWORD)v104 - 4];
      v106 = (_BYTE)v104 + 48;
      v263 = (_BYTE)v104 + 48;
      stru_830620.__pad_579C[49543] = (_BYTE)v104 + 48;
      v107 = (char *)__2_YAPAXI_Z(0x10u);
      if ( v107 )
        v108 = BuildResultPacket(v107, &stru_830620.__pad_579C[49540], (IUnknown *)(v105 + 90100));
      else
        v108 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v108);
      v110 = *(ObjectClass **)(v105 + 512);
      stru_830620.__pad_579C[49719] = v106;
      eax169 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax169 )
        v111 = TerrainInitMap(eax169, (RandomStruct *)&stru_830620.__pad_579C[49716], (IUnknown *)v110);
      else
        v111 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v111);
      v113 = *(ObjectClass **)(v105 + 516);
      stru_830620.__pad_579C[49727] = v106;
      eax172 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax172 )
        v114 = TerrainInitMap(eax172, (RandomStruct *)&stru_830620.__pad_579C[49724], (IUnknown *)v113);
      else
        v114 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v114);
      stru_830620.__pad_579C[49551] = v106;
      v116 = *(ObjectClass **)(v105 + 488);
      eax175 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax175 )
        v117 = TerrainInitMap(eax175, (RandomStruct *)&stru_830620.__pad_579C[49548], (IUnknown *)v116);
      else
        v117 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v117);
      stru_830620.__pad_579C[49559] = v106;
      v118 = v268;
      if ( dword_B779C4 == (IUnknown *)2 )
        v118 = *(IUnknown **)(v105 + 516);
      v119 = (char *)__2_YAPAXI_Z(0x10u);
      if ( v119 )
        v120 = TerrainInitMap(v119, (RandomStruct *)&stru_830620.__pad_579C[49556], v118);
      else
        v120 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v120);
      stru_830620.__pad_579C[49711] = v106;
      v121 = (char *)__2_YAPAXI_Z(0x10u);
      if ( v121 )
        v122 = TerrainInitMap(v121, (RandomStruct *)&stru_830620.__pad_579C[49708], v284[(_DWORD)v268]);
      else
        v122 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v122);
      stru_830620.__pad_579C[49735] = v106;
      v123 = *(_BYTE *)(v105 + 520);
      LOBYTE(v270) = 0;
      if ( v123 )
        LOBYTE(v270) = *(_BYTE *)(v105 + 583) == 0;
      v124 = (char *)__2_YAPAXI_Z(0x10u);
      if ( v124 )
        v125 = String::AllocAndCopy(v124, (RandomStruct *)&stru_830620.__pad_579C[49732], v270);
      else
        v125 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v125);
      stru_830620.__pad_579C[49567] = v106;
      v127 = *(ObjectClass **)(v105 + 90196);
      eax191 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax191 )
        v128 = TerrainInitMap(eax191, (RandomStruct *)&stru_830620.__pad_579C[49564], (IUnknown *)v127);
      else
        v128 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v128);
      stru_830620.__pad_579C[49575] = v106;
      v130 = *(ObjectClass **)(*(_DWORD *)(v105 + 52) + 184);
      eax194 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax194 )
        v131 = TerrainInitMap(eax194, (RandomStruct *)&stru_830620.__pad_579C[49572], (IUnknown *)v130);
      else
        v131 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v131);
      stru_830620.__pad_579C[49583] = v106;
      v132 = (*(int (__stdcall **)(int))(*(_DWORD *)(v105 + 36) + 24))(v105 + 36);
      v133 = (char *)__2_YAPAXI_Z(0x10u);
      if ( v133 )
        v134 = NetMessage::Pack4(v133, (RandomStruct *)&stru_830620.__pad_579C[49580], v132);
      else
        v134 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v134);
      stru_830620.__pad_579C[49631] = v106;
      stru_830620.__pad_579C[49623] = v106;
      stru_830620.__pad_579C[49639] = v106;
      stru_830620.__pad_579C[49647] = v106;
      HouseClass::NetworkConvert((_DWORD *)(v105 + 2864));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 4920));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 808));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 6976));
      v135 = *(_DWORD *)(v105 + 4912);
      v136 = 0;
      for ( v264.vfptr = 0; v136 < v135; ++v136 )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 2864)) + v136) )
          v264.vfptr = (void *)(v136 + 1);
      }
      v138 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 2864));
      eax204 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax204 )
        v139 = NetMessage::Pack(
                 eax204,
                 &stru_830620.__pad_579C[49628],
                 (IUnknown *)v138,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v139 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v139);
      v140 = *(_DWORD *)(v105 + 6968);
      v141 = 0;
      for ( v264.vfptr = 0; v141 < v140; ++v141 )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 4920)) + v141) )
          v264.vfptr = (void *)(v141 + 1);
      }
      v143 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 4920));
      eax211 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax211 )
        v144 = NetMessage::Pack(
                 eax211,
                 &stru_830620.__pad_579C[49620],
                 (IUnknown *)v143,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v144 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v144);
      v145 = *(_DWORD *)(v105 + 2856);
      v146 = 0;
      for ( v264.vfptr = 0; v146 < v145; ++v146 )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 808)) + v146) )
          v264.vfptr = (void *)(v146 + 1);
      }
      v148 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 808));
      eax218 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax218 )
        v149 = NetMessage::Pack(
                 eax218,
                 &stru_830620.__pad_579C[49636],
                 (IUnknown *)v148,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v149 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v149);
      v150 = *(_DWORD *)(v105 + 9024);
      v151 = 0;
      for ( v264.vfptr = 0; v151 < v150; ++v151 )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 6976)) + v151) )
          v264.vfptr = (void *)(v151 + 1);
      }
      v153 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 6976));
      eax225 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax225 )
        v154 = NetMessage::Pack(
                 eax225,
                 &stru_830620.__pad_579C[49644],
                 (IUnknown *)v153,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v154 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v154);
      Array::ByteSwap((u_long *)(v105 + 2864));
      Array::ByteSwap((u_long *)(v105 + 4920));
      Array::ByteSwap((u_long *)(v105 + 808));
      Array::ByteSwap((u_long *)(v105 + 6976));
      Array::Zero((_DWORD *)(v105 + 2864));
      Array::Zero((_DWORD *)(v105 + 808));
      Array::Zero((_DWORD *)(v105 + 4920));
      Array::Zero((_DWORD *)(v105 + 6976));
      for ( i = 0; i < *(int *)&MEMORY[0x89F690].__pad_579C[62188]; ++i )
      {
        v156 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62176] + 4 * i);
        if ( v105 == *(_DWORD *)(v156 + 540) )
          HouseClass::IncrementStat((_DWORD *)(v105 + 4920), *(_DWORD *)(*(_DWORD *)(v156 + 1732) + 3576));
      }
      for ( j = 0; j < (int)MEMORY[0xA83DF8]; ++j )
      {
        v158 = *(_DWORD *)&MEMORY[0xA83DEC]->__pad_0[4 * j];
        if ( v105 == *(_DWORD *)(v158 + 540) )
        {
          v159 = *(_DWORD *)(v158 + 1728);
          if ( !*(_BYTE *)(v159 + 3777) )
            HouseClass::IncrementStat((_DWORD *)(v105 + 2864), *(_DWORD *)(v159 + 3576));
        }
      }
      for ( k = 0; k < *(int *)&MEMORY[0xA8D63C].__pad_BC0[420]; ++k )
      {
        v161 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[408] + 4 * k);
        if ( v105 == *(_DWORD *)(v161 + 540) )
          HouseClass::IncrementStat((_DWORD *)(v105 + 808), *(_DWORD *)(*(_DWORD *)(v161 + 1732) + 3576));
      }
      v162 = *(_DWORD *)(v105 + 120);
      for ( m = 0; m < v162; ++m )
        HouseClass::IncrementStat(
          (_DWORD *)(v105 + 6976),
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v105 + 108) + 4 * m) + 1312) + 3576));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 2864));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 4920));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 808));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 6976));
      stru_830620.__pad_579C[49599] = v106;
      stru_830620.__pad_579C[49591] = v106;
      stru_830620.__pad_579C[49607] = v106;
      stru_830620.__pad_579C[49615] = v106;
      v164 = *(_DWORD *)(v105 + 4912);
      v165 = 0;
      for ( v264.vfptr = 0; v165 < v164; ++v165 )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 2864)) + v165) )
          v264.vfptr = (void *)(v165 + 1);
      }
      v167 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 2864));
      eax247 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax247 )
        v168 = NetMessage::Pack(
                 eax247,
                 &stru_830620.__pad_579C[49596],
                 (IUnknown *)v167,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v168 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v168);
      v169 = *(_DWORD *)(v105 + 6968);
      v170 = 0;
      for ( n = 0; n < v169; ++n )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 4920)) + n) )
          v170 = n + 1;
      }
      v173 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 4920));
      eax254 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax254 )
        v174 = NetMessage::Pack(eax254, &stru_830620.__pad_579C[49588], (IUnknown *)v173, (IUnknown *)(4 * v170));
      else
        v174 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v174);
      v175 = *(_DWORD *)(v105 + 2856);
      v176 = 0;
      for ( ii = 0; ii < v175; ++ii )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 808)) + ii) )
          v176 = ii + 1;
      }
      v179 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 808));
      eax261 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax261 )
        v180 = NetMessage::Pack(eax261, &stru_830620.__pad_579C[49604], (IUnknown *)v179, (IUnknown *)(4 * v176));
      else
        v180 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v180);
      v181 = *(_DWORD *)(v105 + 9024);
      v182 = 0;
      for ( jj = 0; jj < v181; ++jj )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 6976)) + jj) )
          v182 = jj + 1;
      }
      v185 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 6976));
      eax268 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax268 )
        v186 = NetMessage::Pack(eax268, &stru_830620.__pad_579C[49612], (IUnknown *)v185, (IUnknown *)(4 * v182));
      else
        v186 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v186);
      HouseClass::NetworkConvert((_DWORD *)(v105 + 11088));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 13144));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 9032));
      HouseClass::NetworkConvert((_DWORD *)(v105 + 15200));
      v187 = 0;
      stru_830620.__pad_579C[49663] = v263;
      stru_830620.__pad_579C[49655] = v263;
      stru_830620.__pad_579C[49671] = v263;
      stru_830620.__pad_579C[49679] = v263;
      v188 = *(_DWORD *)(v105 + 13136);
      v264.vfptr = 0;
      if ( v188 > 0 )
      {
        do
        {
          if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 11088)) + v187) )
            v264.vfptr = (void *)(v187 + 1);
          ++v187;
        }
        while ( v187 < v188 );
      }
      v190 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 11088));
      eax275 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax275 )
        v191 = NetMessage::Pack(
                 eax275,
                 &stru_830620.__pad_579C[49660],
                 (IUnknown *)v190,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v191 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v191);
      v192 = *(_DWORD *)(v105 + 15192);
      v193 = 0;
      for ( kk = 0; kk < v192; ++kk )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 13144)) + kk) )
          v193 = kk + 1;
      }
      v196 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 13144));
      eax282 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax282 )
        v197 = NetMessage::Pack(eax282, &stru_830620.__pad_579C[49652], (IUnknown *)v196, (IUnknown *)(4 * v193));
      else
        v197 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v197);
      v198 = *(_DWORD *)(v105 + 11080);
      v199 = 0;
      for ( mm = 0; mm < v198; ++mm )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 9032)) + mm) )
          v199 = mm + 1;
      }
      v202 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 9032));
      eax289 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax289 )
        v203 = NetMessage::Pack(eax289, &stru_830620.__pad_579C[49668], (IUnknown *)v202, (IUnknown *)(4 * v199));
      else
        v203 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v203);
      v204 = *(_DWORD *)(v105 + 17248);
      v205 = 0;
      for ( nn = 0; nn < v204; ++nn )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 15200)) + nn) )
          v205 = nn + 1;
      }
      v208 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 15200));
      eax296 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax296 )
        v209 = NetMessage::Pack(eax296, &stru_830620.__pad_579C[49676], (IUnknown *)v208, (IUnknown *)(4 * v205));
      else
        v209 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v209);
      stru_830620.__pad_579C[49687] = v263;
      HouseClass::NetworkConvert((_DWORD *)(v105 + 17256));
      v210 = *(_DWORD *)(v105 + 19304);
      v211 = 0;
      for ( v264.vfptr = 0; v211 < v210; ++v211 )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 17256)) + v211) )
          v264.vfptr = (void *)(v211 + 1);
      }
      v213 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 17256));
      eax303 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax303 )
        v214 = NetMessage::Pack(
                 eax303,
                 &stru_830620.__pad_579C[49684],
                 (IUnknown *)v213,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v214 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v214);
      stru_830620.__pad_579C[49695] = v263;
      HouseClass::NetworkConvert((_DWORD *)(v105 + 19312));
      v215 = *(_DWORD *)(v105 + 21360);
      v216 = 0;
      for ( v264.vfptr = 0; v216 < v215; ++v216 )
      {
        if ( *((_DWORD *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 19312)) + v216) )
          v264.vfptr = (void *)(v216 + 1);
      }
      v218 = (ObjectClass *)__0Iostream_init_QAE_XZ_7((Iostream_init *)(v105 + 19312));
      eax310 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax310 )
        v219 = NetMessage::Pack(
                 eax310,
                 &stru_830620.__pad_579C[49692],
                 (IUnknown *)v218,
                 (IUnknown *)(4 * (int)v264.vfptr));
      else
        v219 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v219);
      v220 = v263;
      stru_830620.__pad_579C[49703] = v263;
      v222 = *(ObjectClass **)(v105 + 736);
      eax313 = (char *)__2_YAPAXI_Z(0x10u);
      if ( eax313 )
        v223 = TerrainInitMap(eax313, (RandomStruct *)&stru_830620.__pad_579C[49700], (IUnknown *)v222);
      else
        v223 = 0;
      LinkedList::PushFront(v262, (IUnknown *)v223);
      stru_830620.__pad_579C[49743] = v220;
      v224 = v269;
      v225 = v268;
      if ( v269 == v268 )
      {
        v226 = (IUnknown *)MEMORY[0x84E863];
        v227 = (char *)__2_YAPAXI_Z(0x10u);
        if ( v227 )
        {
          v228 = TerrainInitMap(v227, (RandomStruct *)&stru_830620.__pad_579C[49740], v226);
          goto LABEL_322;
        }
      }
      else
      {
        v229 = (char *)__2_YAPAXI_Z(0x10u);
        if ( v229 )
        {
          v228 = NetMessage::Pack4(v229, (RandomStruct *)&stru_830620.__pad_579C[49740], -1);
          goto LABEL_322;
        }
      }
      v228 = 0;
LABEL_322:
      LinkedList::PushFront(v262, (IUnknown *)v228);
      stru_830620.__pad_579C[49751] = v220;
      if ( v224 == v225 )
      {
        v230 = Performance::MeasureTicks();
        v231 = (char *)__2_YAPAXI_Z(0x10u);
        if ( v231 )
        {
          v232 = NetMessage::Pack4(v231, (RandomStruct *)&stru_830620.__pad_579C[49748], v230);
          goto LABEL_328;
        }
      }
      else
      {
        v233 = (char *)__2_YAPAXI_Z(0x10u);
        if ( v233 )
        {
          v232 = NetMessage::Pack4(v233, (RandomStruct *)&stru_830620.__pad_579C[49748], -1);
          goto LABEL_328;
        }
      }
      v232 = 0;
LABEL_328:
      LinkedList::PushFront(v262, (IUnknown *)v232);
      stru_830620.__pad_579C[49759] = v220;
      if ( v224 == v225 )
      {
        Buffer.dwLength = 32;
        GlobalMemoryStatus(&Buffer);
        dwTotalPhys = Buffer.dwTotalPhys;
        v235 = (char *)__2_YAPAXI_Z(0x10u);
        if ( !v235 )
          goto LABEL_333;
        v236 = NetMessage::Pack4(v235, (RandomStruct *)&stru_830620.__pad_579C[49756], dwTotalPhys);
      }
      else
      {
        v237 = (char *)__2_YAPAXI_Z(0x10u);
        if ( !v237 )
        {
LABEL_333:
          v236 = 0;
          goto LABEL_334;
        }
        v236 = NetMessage::Pack4(v237, (RandomStruct *)&stru_830620.__pad_579C[49756], -1);
      }
LABEL_334:
      LinkedList::PushFront(v262, (IUnknown *)v236);
      stru_830620.__pad_579C[49767] = v220;
      if ( v224 == v225 && *(_DWORD *)&MEMORY[0x89F690].__pad_71C[744] )
      {
        v287[0] = 316;
        if ( (*(int (__stdcall **)(_DWORD, int *, _DWORD))(**(_DWORD **)&MEMORY[0x89F690].__pad_71C[744] + 44))(
               *(_DWORD *)&MEMORY[0x89F690].__pad_71C[744],
               v287,
               0) )
        {
          goto LABEL_343;
        }
        v238 = (v288 + 0xFFFFF) & 0xFFF00000;
        v239 = (char *)__2_YAPAXI_Z(0x10u);
        if ( !v239 )
        {
LABEL_341:
          v240 = 0;
          goto LABEL_342;
        }
        v240 = NetMessage::Pack4(v239, (RandomStruct *)&stru_830620.__pad_579C[49764], v238);
      }
      else
      {
        v241 = (char *)__2_YAPAXI_Z(0x10u);
        if ( !v241 )
          goto LABEL_341;
        v240 = NetMessage::Pack4(v241, (RandomStruct *)&stru_830620.__pad_579C[49764], -1);
      }
LABEL_342:
      LinkedList::PushFront(v262, (IUnknown *)v240);
LABEL_343:
      v268 = (IUnknown *)((char *)&v225->field_0 + 1);
      if ( (char *)&v225->field_0 + 1 >= (char *)aP2 )
        break;
      v104 = v268;
    }
  }
  vfptr = (char *)Event_Process_625C00((int)v262, (size_t *)&MEMORY[0xB077F8].__pad_14B0[12520]);
  v264.vfptr = vfptr;
  if ( *(&g_MatrixTransformState + 2264) )
  {
    X = (*(&g_MatrixTransformState + 2264))->X;
    if ( v266 )
      (*(void (__stdcall **)(_DWORD, char *, CCINIClass *, char *, _DWORD))(X + 12))(
        *(&g_MatrixTransformState + 2264),
        &byte_B77CE8,
        dword_B75F5C,
        vfptr,
        *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12520]);
    else
      (*(void (__stdcall **)(_DWORD, char *, CCINIClass *, char *, _DWORD))(X + 12))(
        *(&g_MatrixTransformState + 2264),
        byte_B77930,
        dword_B76184,
        vfptr,
        *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12520]);
  }
  if ( *(int *)&MEMORY[0xB077F8].__pad_14B0[12520] <= 0x8000
    && vfptr
    && *(int *)&MEMORY[0xB077F8].__pad_14B0[12520] >= 1 )
  {
    v290[1] = *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12520];
    v244 = MEMORY[0xB077F8].__pad_14B0[12520];
    v290[0] = 0;
    v245 = *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12520] >> 2;
    qmemcpy(&v290[2], vfptr, 4 * (*(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12520] >> 2));
    v247 = &vfptr[4 * v245];
    v246 = &v290[v245 + 2];
    LOBYTE(v245) = v244;
    v248 = *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12460];
    qmemcpy(v246, v247, v245 & 3);
    v249 = *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12456];
    v269 = *(IUnknown **)&MEMORY[0xB077F8].__pad_14B0[12456];
    if ( *(int *)&MEMORY[0xB077F8].__pad_14B0[12456] < v248 )
    {
      v255 = *(char **)&MEMORY[0xB077F8].__pad_14B0[12464];
    }
    else
    {
      v250 = 2 * *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12456];
      if ( 2 * *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12456] < 10 )
        v250 = 10;
      v251 = (char *)__2_YAPAXI_Z(32776 * v250);
      memset(v251, 0, 4 * ((unsigned int)(32776 * v250) >> 2));
      v252 = *(AbstractClass **)&MEMORY[0xB077F8].__pad_14B0[12464];
      if ( *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12464] )
      {
        v253 = 8 * MEMORY[0xB077F8].__pad_14B0[12456];
        v254 = (unsigned int)(32776 * *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12456]) >> 2;
        qmemcpy(v251, *(const void **)&MEMORY[0xB077F8].__pad_14B0[12464], 4 * v254);
        qmemcpy(&v251[4 * v254], (char *)v252 + 4 * v254, v253 & 3);
        v252 = *(AbstractClass **)&MEMORY[0xB077F8].__pad_14B0[12464];
      }
      __3_YAXPAX_Z(v252);
      v249 = *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12456];
      v255 = v251;
      *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12464] = v251;
      *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12460] = v250;
      if ( *(int *)&MEMORY[0xB077F8].__pad_14B0[12456] >= v250 )
      {
        v256 = 2 * *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12456];
        if ( 2 * *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12456] < 10 )
          v256 = 10;
        v257 = (char *)__2_YAPAXI_Z(32776 * v256);
        memset(v257, 0, 4 * ((unsigned int)(32776 * v256) >> 2));
        v258 = *(AbstractClass **)&MEMORY[0xB077F8].__pad_14B0[12464];
        if ( *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12464] )
        {
          v259 = 8 * MEMORY[0xB077F8].__pad_14B0[12456];
          v260 = (unsigned int)(32776 * *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12456]) >> 2;
          qmemcpy(v257, *(const void **)&MEMORY[0xB077F8].__pad_14B0[12464], 4 * v260);
          qmemcpy(&v257[4 * v260], (char *)v258 + 4 * v260, v259 & 3);
          v258 = *(AbstractClass **)&MEMORY[0xB077F8].__pad_14B0[12464];
        }
        __3_YAXPAX_Z(v258);
        v249 = *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12456];
        v255 = v257;
        *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12464] = v257;
        *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12460] = v256;
      }
      if ( (int)v269 < v249 )
      {
        memcpy(
          &v255[32776 * ((_DWORD)&v269->field_0 + 1)],
          &v255[32776 * (_DWORD)v269],
          32776 * v249 - 32776 * (_DWORD)v269);
        v255 = *(char **)&MEMORY[0xB077F8].__pad_14B0[12464];
        v249 = *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12456];
      }
    }
    v261 = &v255[32776 * (_DWORD)v269];
    if ( v261 )
    {
      qmemcpy(v261, v290, 0x8008u);
      v249 = *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12456];
    }
    vfptr = (char *)v264.vfptr;
    *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[12456] = v249 + 1;
  }
  __3_YAXPAX_Z(vfptr);
  MEMORY[0xA8D63C].__pad_14B0[3604] = 1;
  RawFileClass::Dtor((int *)&v272);
  ResultNode::CleanupList(v262);
}


// ==== 0x006C87F0  InitSkirmishSettings  this=-  sig=ida-proto ====
int sub_6C87F0()
{
  int v1; // [esp+4h] [ebp-4h]

  MEMORY[0xB0BD28] = Timer::GetTicks(); /*0x6c87fc*/
  MEMORY[0xB0BD2C] = v1; /*0x6c8805*/
  MEMORY[0xB0BDB4] = 1; /*0x6c880a*/
  return v1; /*0x6c8811*/
}


// ==== 0x006C8820  Timer::UpdateDelta  this=Timer  sig=ida-proto ====
int Timer_UpdateDelta()
{
  DWORD Ticks; // eax
  int result; // eax

  Ticks = Timer::GetTicks(); /*0x6c8825*/
  MEMORY[0xB0BDB4] = 0; /*0x6c8830*/
  result = Ticks - MEMORY[0xB0BD28]; /*0x6c8837*/
  MEMORY[0xB0BD48] = result; /*0x6c8839*/
  return result; /*0x6c883e*/
}


// ==== 0x006C8840  rc_ptr::sub_6C8840  this=rc_ptr  sig=csp ====
rc_ptr *__thiscall sub_6C8840(_DWORD *Block, char a2)
{
  *Block = &vt_rc_ptr_PlayerProfile; /*0x6c8843*/
  ComPtr::Release(Block); /*0x6c8849*/
  if ( (a2 & 1) != 0 ) /*0x6c8853*/
    __3_YAXPAX_Z(Block); /*0x6c8856*/
  return (rc_ptr *)Block; /*0x6c8860*/
}


// ==== 0x006C8870  ObjectClass::Audio_Read_6C8870  this=int  sig=csp ====
char __thiscall sub_6C8870(int *this)
{
  int v2; // eax
  int v3; // ecx
  int v5; // ebx
  void *v6; // eax
  const void *v7; // esi
  int v8; // [esp+8h] [ebp-4h]

  v2 = *this; /*0x6c8875*/
  v3 = *(this + 1); /*0x6c8878*/
  if ( 3 * v2 > v3 ) /*0x6c8880*/
    return 0; /*0x6c8883*/
  v5 = v3 / 2; /*0x6c888f*/
  if ( v3 / 2 < 10 ) /*0x6c8894*/
    v5 = 10; /*0x6c8896*/
  if ( v5 >= v3 ) /*0x6c889d*/
    return 0; /*0x6c88a0*/
  v6 = __2_YAPAXI_Z(32776 * v5); /*0x6c88b1*/
  v7 = (const void *)*(this + 2); /*0x6c88b6*/
  v8 = (int)v6; /*0x6c88be*/
  if ( v7 ) /*0x6c88c2*/
    qmemcpy(v6, v7, 32776 * *this); /*0x6c88d9*/
  __3_YAXPAX_Z((void *)*(this + 2)); /*0x6c88e7*/
  *(this + 2) = v8; /*0x6c88f3*/
  *(this + 1) = v5; /*0x6c88f6*/
  return 1; /*0x6c8882*/
}


// ==== 0x006C8900  ObjectClass::method_6C8900  this=ObjectClass  sig=csp ====
char __thiscall sub_6C8900(int *this)
{
  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  const void *v6; // esi
  int v7; // [esp+4h] [ebp-4h]

  v2 = *this; /*0x6c8904*/
  if ( *this < this->vtable2 ) /*0x6c890b*/
    return 0; /*0x6c890d*/
  v4 = 2 * v2; /*0x6c8913*/
  if ( 2 * v2 < 10 ) /*0x6c891b*/
    v4 = 10; /*0x6c891d*/
  v5 = __2_YAPAXI_Z(32776 * v4); /*0x6c8932*/
  memset(v5, 0, 4 * ((unsigned int)(32776 * v4) >> 2)); /*0x6c893d*/
  v7 = (int)v5; /*0x6c8947*/
  v6 = (const void *)this->vtable3; /*0x6c894d*/
  if ( v6 ) /*0x6c8952*/
    qmemcpy(v5, v6, 32776 * *this); /*0x6c8967*/
  __3_YAXPAX_Z((void *)this->vtable3); /*0x6c8974*/
  this->vtable2 = v4; /*0x6c8980*/
  this->vtable3 = v7; /*0x6c8983*/
  return 1; /*0x6c890f*/
}


// ==== 0x006C8990  sub_6C8990  this=-  sig=ida-proto ====
int sub_6C8990()
{
  MEMORY[0xB0BDC0] = 0; /*0x6c8992*/
  MEMORY[0xB0BDC4] = 0; /*0x6c8997*/
  MEMORY[0xB0BDC8] = 0; /*0x6c899c*/
  MEMORY[0xB0BDCC] = 0; /*0x6c89a1*/
  return 0; /*0x6c89a6*/
}


// ==== 0x006C89B0  ObjectClass::method_6C89B0  this=int  sig=csp ====
_DWORD *__thiscall sub_6C89B0(_DWORD *this, size_t Size)
{
  void *v3; // eax

  *this = Size; /*0x6c89b8*/
  v3 = __2_YAPAXI_Z(Size); /*0x6c89ba*/
  *(this + 1) = v3; /*0x6c89c2*/
  *(this + 2) = v3; /*0x6c89c5*/
  return this; /*0x6c89ca*/
}


// ==== 0x006C89E0  Buffer::AppendCellData  this=int  sig=csp ====
int __thiscall Buffer::AppendCellData(_DWORD *this, AbstractClass *aP1, int a3)
{
  AbstractClass *v4; // edi
  _DWORD *v7; // eax
  AbstractClass *v8; // esi
  int v9; // eax
  unsigned int v10; // eax
  char *v11; // edi
  int v12; // esi
  int v13; // edx
  int v14; // [esp+10h] [ebp-10h] BYREF
  AbstractClass *v15; // [esp+18h] [ebp-8h]
  _BYTE *v16; // [esp+28h] [ebp+8h]

  v4 = (AbstractClass *)*(this + 2); /*0x6c89e9*/
  if ( (unsigned int)&v4->__pad_0[12] > *(this + 1) + *this ) /*0x6c89f9*/
    return 0; /*0x6c89f9*/
  v15 = (AbstractClass *)*(this + 2); /*0x6c89fd*/
  *(this + 2) = &v4->__pad_0[12]; /*0x6c8a01*/
  if ( !v4 ) /*0x6c8a04*/
    return 0; /*0x6c8a06*/
  *(_WORD *)v4->__pad_0 = *(_WORD *)a3; /*0x6c8a19*/
  *(_WORD *)&v4->__pad_0[2] = *(_WORD *)(a3 + 4); /*0x6c8a20*/
  *(_WORD *)&v4->__pad_0[4] = *(_WORD *)(a3 + 16); /*0x6c8a28*/
  *(_WORD *)&v4->__pad_0[6] = *(_WORD *)(a3 + 20); /*0x6c8a34*/
  *(_DWORD *)&v4->__pad_0[8] = *(this + 2); /*0x6c8a3f*/
  v7 = CellStruct::Copy((int *)(a3 + 8), (IUnknown *)&v14); /*0x6c8a42*/
  v8 = aP1; /*0x6c8a49*/
  v16 = (_BYTE *)(*(int (__thiscall **)(AbstractClass *, _DWORD, _DWORD))(*(_DWORD *)aP1->__pad_0 + 92))( /*0x6c8a61*/
                   aP1,
                   *v7,
                   v7[1]);
  v9 = *(_DWORD *)(a3 + 20); /*0x6c8a65*/
  v14 = 0; /*0x6c8a6a*/
  if ( v9 > 0 ) /*0x6c8a72*/
  {
    while ( 1 ) /*0x6c8a8a*/
    {
      v10 = Map_Append(v16, (int)&MEMORY[0xB077F8].__pad_14B0[12584], *(_DWORD *)(a3 + 16)); /*0x6c8a8a*/
      v11 = (char *)*(this + 2); /*0x6c8a8f*/
      if ( (unsigned int)&v11[v10] > *(this + 1) + *this || (*(this + 2) = &v11[v10], !v11) ) /*0x6c8aa4*/
      {
        (*(void (__thiscall **)(AbstractClass *))(*(_DWORD *)v8->__pad_0 + 96))(v8); /*0x6c8ae6*/
        return 0; /*0x6c8af2*/
      }
      qmemcpy(v11, &MEMORY[0xB077F8].__pad_14B0[12584], v10); /*0x6c8ab0*/
      v13 = *(_DWORD *)aP1->__pad_0; /*0x6c8ac2*/
      v12 = ++v14; /*0x6c8ac1*/
      v16 += (*(int (__thiscall **)(AbstractClass *))(v13 + 116))(aP1); /*0x6c8ad6*/
      if ( v12 >= *(_DWORD *)(a3 + 20) ) /*0x6c8ada*/
        break; /*0x6c8ada*/
      v8 = aP1; /*0x6c8adc*/
    }
    v4 = v15; /*0x6c8af5*/
    v8 = aP1; /*0x6c8af9*/
  }
  (*(void (__thiscall **)(AbstractClass *))(*(_DWORD *)v8->__pad_0 + 96))(v8); /*0x6c8b01*/
  return (int)v4->__pad_0; /*0x6c8a08*/
}


// ==== 0x006C8B10  ObjectClass::method_6C8B10  this=ObjectClass  sig=csp ====
int __thiscall sub_6C8B10(_DWORD *this, int a2, int a3, __int16 a4, __int16 a5)
{
  int v6; // edi
  _DWORD *v8; // eax
  int v9; // esi
  unsigned int v10; // eax
  char *v11; // edi
  int v12; // [esp+10h] [ebp-10h]
  int v13; // [esp+18h] [ebp-8h] BYREF
  _BYTE *v14; // [esp+2Ch] [ebp+Ch]
  int v15; // [esp+30h] [ebp+10h]

  v6 = this->vtable3; /*0x6c8b19*/
  if ( v6 + 12 > (unsigned int)(this->vtable2 + *this) ) /*0x6c8b28*/
    return 0; /*0x6c8b28*/
  v12 = this->vtable3; /*0x6c8b2c*/
  this->vtable3 = v6 + 12; /*0x6c8b30*/
  if ( !v6 ) /*0x6c8b33*/
    return 0; /*0x6c8b35*/
  *(_WORD *)v6 = a4; /*0x6c8b4f*/
  *(_WORD *)(v6 + 2) = a5; /*0x6c8b52*/
  *(_WORD *)(v6 + 4) = *(_WORD *)(a3 + 8); /*0x6c8b5a*/
  *(_WORD *)(v6 + 6) = *(_WORD *)(a3 + 12); /*0x6c8b66*/
  *(_DWORD *)(v6 + 8) = this->vtable3; /*0x6c8b70*/
  v8 = CellStruct::Copy((int *)a3, &v13); /*0x6c8b73*/
  v9 = a2; /*0x6c8b7a*/
  v14 = (_BYTE *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, *v8, v8[1]); /*0x6c8b92*/
  v15 = 0; /*0x6c8b9b*/
  if ( *(int *)(a3 + 12) > 0 ) /*0x6c8ba3*/
  {
    while ( 1 ) /*0x6c8bbb*/
    {
      v10 = Map_Append(v14, (int)&MEMORY[0xB0BDD0], *(_DWORD *)(a3 + 8)); /*0x6c8bbb*/
      v11 = (char *)this->vtable3; /*0x6c8bc0*/
      if ( (unsigned int)&v11[v10] > this->vtable2 + *this || (this->vtable3 = &v11[v10], !v11) ) /*0x6c8bd4*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9); /*0x6c8c16*/
        return 0; /*0x6c8c22*/
      }
      qmemcpy(v11, &MEMORY[0xB0BDD0], v10); /*0x6c8be0*/
      ++v15; /*0x6c8bf4*/
      v14 += (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x6c8c06*/
      if ( v15 >= *(_DWORD *)(a3 + 12) ) /*0x6c8c0a*/
        break; /*0x6c8c0a*/
      v9 = a2; /*0x6c8c0c*/
    }
    v6 = v12; /*0x6c8c25*/
    v9 = a2; /*0x6c8c29*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9); /*0x6c8c31*/
  return v6; /*0x6c8b37*/
}


// ==== 0x006C8C40  Timer::GetTicks  this=VOID_PTR  sig=csp ====
unsigned int Timer::GetTicks()
{
  return (unsigned int)((int (*)(void))timeGetTime)() >> 4; /*0x6c8c49*/
}


// ==== 0x006C8C60  sub_6C8C60  this=-  sig=ida-proto ====
int sub_6C8C60()
{
  MEMORY[0xB0BED8] = 0; /*0x6c8c62*/
  MEMORY[0xB0BEDC] = 0; /*0x6c8c67*/
  MEMORY[0xB0BEE0] = 0; /*0x6c8c6c*/
  MEMORY[0xB0BEE4] = 0; /*0x6c8c71*/
  return 0; /*0x6c8c76*/
}


// ==== 0x006C8C80  sub_6C8C80  this=-  sig=ida-proto ====
void sub_6C8C80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6c8c8c*/
  MEMORY[0xB0BEF0] = Math::Sqrt(v0 + v0); /*0x6c8c9e*/
}


// ==== 0x006C8CB0  sub_6C8CB0  this=-  sig=ida-proto ====
void sub_6C8CB0()
{
  MEMORY[0xB0BF58] = MEMORY[0xB0BEF0] / 60.0; /*0x6c8cbc*/
}


// ==== 0x006C8CD0  sub_6C8CD0  this=-  sig=ida-proto ====
void sub_6C8CD0()
{
  MEMORY[0xB0BF40] = 1.0 / MEMORY[0xB0BF58]; /*0x6c8cdc*/
}


// ==== 0x006C8CF0  sub_6C8CF0  this=-  sig=ida-proto ====
void sub_6C8CF0()
{
  MEMORY[0xB0BF20] = 0.0174532925199433 * 45.0; /*0x6c8cfc*/
}


// ==== 0x006C8D10  sub_6C8D10  this=-  sig=ida-proto ====
void sub_6C8D10()
{
  MEMORY[0xB0BEF8] = 0.0174532925199433 * 60.0; /*0x6c8d1c*/
}


// ==== 0x006C8D30  sub_6C8D30  this=-  sig=ida-proto ====
void sub_6C8D30()
{
  MEMORY[0xB0BED0] = 0.0174532925199433 * 90.0; /*0x6c8d3c*/
}


// ==== 0x006C8D50  sub_6C8D50  this=-  sig=ida-proto ====
__int64 sub_6C8D50()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0BED0] - MEMORY[0xB0BEF8]); /*0x6c8d62*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0BEF0] * 0.5); /*0x6c8d76*/
  MEMORY[0xB0BF60] = result; /*0x6c8d7b*/
  return result; /*0x6c8d80*/
}


// ==== 0x006C8D90  sub_6C8D90  this=-  sig=ida-proto ====
void sub_6C8D90()
{
  MEMORY[0xB0BF00] = Math::ArcTan((double)MEMORY[0xB0BF60] * 0.00390625); /*0x6c8da7*/
}


// ==== 0x006C8DC0  sub_6C8DC0  this=-  sig=ida-proto ====
void sub_6C8DC0()
{
  MEMORY[0xB0BF18] = Math::ArcTan((double)(2 * MEMORY[0xB0BF60]) / MEMORY[0xB0BEF0]); /*0x6c8de2*/
}


// ==== 0x006C8DF0  sub_6C8DF0  this=-  sig=ida-proto ====
__int64 sub_6C8DF0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0BF60]) + 0.5); /*0x6c8e0b*/
  MEMORY[0xB0BF54] = result; /*0x6c8e10*/
  return result; /*0x6c8e16*/
}


// ==== 0x006C8E20  sub_6C8E20  this=-  sig=ida-proto ====
int sub_6C8E20()
{
  MEMORY[0xB0BEE8] = 0; /*0x6c8e22*/
  MEMORY[0xB0BEEA] = 0; /*0x6c8e28*/
  return 0; /*0x6c8e2e*/
}


// ==== 0x006C8E30  sub_6C8E30  this=-  sig=ida-proto ====
int sub_6C8E30()
{
  MEMORY[0xB0BF08] = 0; /*0x6c8e32*/
  MEMORY[0xB0BF0C] = 0; /*0x6c8e37*/
  MEMORY[0xB0BF10] = 0; /*0x6c8e3c*/
  return 0; /*0x6c8e41*/
}


// ==== 0x006C8E50  sub_6C8E50  this=-  sig=ida-proto ====
int sub_6C8E50()
{
  MEMORY[0xB0BF50] = 0; /*0x6c8e55*/
  MEMORY[0xB0BF48] = 128; /*0x6c8e5f*/
  MEMORY[0xB0BF4C] = 128; /*0x6c8e64*/
  return 128; /*0x6c8e69*/
}


// ==== 0x006C8E70  ObjectClass::??0Iostream_init_QAE_XZ_5  this=int  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_5(Iostream_init *this)
{
  return this; /*0x6c8e72*/
}


// ==== 0x006C8E80  Map_Load_6C8E80  this=ScenarioClass  sig=ida-proto ====
void __usercall sub_6C8E80(int a1@<ebx>, int a2@<ebp>, int a3@<edi>)
{
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+4h] [ebp-Ch]
  __int64 v5; // [esp+8h] [ebp-8h]

  CampaignScore::LoadCampaignScoreAssetsGame(*((void **)MEMORY[0xA8B230] + 3374)); /*0x6c8e8e*/
  v5 = *(_QWORD *)&MEMORY[0x8A00A4]; /*0x6c8e9f*/
  v3 = 0; /*0x6c8eb1*/
  v4 = 0; /*0x6c8eb9*/
  Map_Load_72E9F0((int *)MEMORY[0x88730C], &v3); /*0x6c8ec1*/
  Frame::Present(MEMORY[0x88730C], a1, a2, a3, 0, v3, v4, (int *)v5); /*0x6c8ed0*/
  Campaign::Screen(0); /*0x6c8ee1*/
  Map_Load_72E9F0((int *)MEMORY[0x88730C], &v3); /*0x6c8ef0*/
  Frame::Present(MEMORY[0x88730C], a1, a2, a3, 0, v3, v4, (int *)v5); /*0x6c8eff*/
  FileSystem::CleanupTrees(); /*0x6c8f04*/
}


// ==== 0x006C8F10  sub_6C8F10  this=-  sig=ida-proto ====
LRESULT __fastcall sub_6C8F10(HWND hDlg, int nIDDlgItem, int a3)
{
  HWND DlgItem; // eax
  wchar_t Buffer[32]; // [esp+Ch] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)MEMORY[0x842158], (const wchar_t *const)(a3 / 60 / 60), a3 / 60 % 60, a3 % 60); /*0x6c8f69*/
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x6c8f73*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x6c8f8c*/
}


// ==== 0x006C8FA0  sub_6C8FA0  this=-  sig=ida-proto ====
LRESULT __fastcall sub_6C8FA0(CampaignScore *aP0, int nIDDlgItem, wchar_t *Format)
{
  HWND DlgItem; // eax
  CampaignScore *v7; // [esp+0h] [ebp-48h]
  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, Format, v7); /*0x6c8fb8*/
  DlgItem = GetDlgItem((HWND)aP0, nIDDlgItem); /*0x6c8fc2*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x6c8fdb*/
}


// ==== 0x006C8FF0  DlgProcScoreScreen  this=unknown  sig=csp ====
int __userpurge DlgProcScoreScreen@<eax>(
        CampaignScore *a1@<ebp>,
        HWND hWnd,
        unsigned int a3,
        WPARAM wParam,
        wchar_t *Format)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // esi
  HWND DlgItem; // eax
  int v11; // ecx
  _DWORD *v12; // edi
  int v13; // edi
  HWND v14; // eax
  wchar_t *v15; // ecx
  wchar_t *v16; // esi
  ScenarioClass *String; // edi
  ScenarioClass *v17; // esi
  HWND v19; // eax
  void (__stdcall *v20)(HWND, UINT, WPARAM, LPARAM); // edi
  HWND eax21a; // eax
  IUnknown *v21; // eax
  const wchar_t *v23; // esi
  int v24; // ecx
  int v25; // edi
  char *v26; // esi
  char *v27; // esi
  char *v28; // esi
  int v29; // eax
  HWND v30; // eax
  HWND v31; // eax
  Movie *v32; // eax
  _DWORD *v33; // eax
  ScenarioClass *v34; // [esp-8h] [ebp-54h]
  wchar_t lParam[32]; // [esp+Ch] [ebp-40h] BYREF
  IUnknown *wParama; // [esp+58h] [ebp+Ch]
  wchar_t *Formatb; // [esp+5Ch] [ebp+10h]
  wchar_t *Formata; // [esp+5Ch] [ebp+10h]

  result = BaseDialogProc((SkirmishDialog *)hWnd, a3, wParam, (unsigned int)Format); /*0x6c900c*/
  if ( !result ) /*0x6c9013*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x6c901c*/
    if ( a3 > 0x497 ) /*0x6c9028*/
    {
      if ( a3 == 1240 ) /*0x6c9383*/
      {
        if ( !wParam ) /*0x6c93cb*/
          SendDlgItemMessageA(hWnd, 1835, 0x4D5u, 0, 29); /*0x6c93db*/
      }
      else if ( a3 == 1260 ) /*0x6c9388*/
      {
        AudioController::Stop(&stru_B05488.__pad_579C[4868]); /*0x6c938f*/
        v33 = (_DWORD *)PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 432), 0x2000, 1.0, 0); /*0x6c93ad*/
        SetAudioSource((AudioMixer *)&stru_B05488.__pad_579C[4868], v33, 0); /*0x6c93b9*/
        SendDlgItemMessageA(hWnd, 1835, 0x4D3u, 0, 0); /*0x6c93c7*/
      }
      return 0; /*0x6c93e1*/
    }
    if ( a3 != 1175 ) /*0x6c902e*/
    {
      if ( a3 == 2 ) /*0x6c9033*/
      {
        if ( *(_DWORD *)&stru_B05488.__pad_579C[4928] ) /*0x6c906e*/
        {
          AudioFile::Stop(&stru_B05488.__pad_579C[4868]); /*0x6c9079*/
          AudioFileClass::Release(&stru_B05488.__pad_579C[4868]); /*0x6c9083*/
          *(_DWORD *)&stru_B05488.__pad_579C[4928] = 0; /*0x6c908a*/
          return 0; /*0x6c909a*/
        }
      }
      else if ( a3 == 273 && (_WORD)wParam == 1059 ) /*0x6c9046*/
      {
        *WindowLongA = 1; /*0x6c9051*/
        AudioFile::Stop(&stru_B05488.__pad_579C[4868]); /*0x6c9057*/
        return 0; /*0x6c9064*/
      }
      return 0; /*0x6c9046*/
    }
    AudioController::Init(&stru_B05488.__pad_579C[4868]); /*0x6c90a2*/
    *(_DWORD *)&stru_B05488.__pad_579C[4928] = 1; /*0x6c90ad*/
    v7 = 0; /*0x6c90b7*/
    v8 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1548); /*0x6c90b9*/
    if ( v8 ) /*0x6c90c1*/
    {
      if ( v8 == 1 ) /*0x6c90ce*/
      {
        v7 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13736); /*0x6c90d0*/
      }
      else if ( v8 == 2 ) /*0x6c90db*/
      {
        v7 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13740); /*0x6c90dd*/
      }
    }
    else
    {
      v7 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13732); /*0x6c90c3*/
    }
    v9 = v7 / 60; /*0x6c90fc*/
    swprintf( /*0x6c9146*/
      lParam,
      (const size_t)&stru_830620.__pad_579C[50076],
      (const wchar_t *const)(v7 / 60 / 60 / 60),
      (CampaignScore *)(v7 / 60 / 60 % 60));
    DlgItem = GetDlgItem(hWnd, 1777); /*0x6c915a*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9169*/
    v11 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1564); /*0x6c9174*/
    if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1556) != -1 ) /*0x6c9187*/
    {
      v12 = (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1556); /*0x6c917a*/
      Formatb = *(wchar_t **)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1564); /*0x6c9180*/
      v11 = (int)Formatb + Timer::GetTicks() - *v12; /*0x6c9199*/
    }
    v13 = v11 / 60; /*0x6c91b7*/
    swprintf( /*0x6c9209*/
      lParam,
      (const size_t)&stru_830620.__pad_579C[50076],
      (const wchar_t *const)(v11 / 60 / 60 / 60),
      (CampaignScore *)(v11 / 60 / 60 % 60));
    v14 = GetDlgItem(hWnd, 1778); /*0x6c9217*/
    SendMessageA(v14, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9226*/
    if ( v13 > v9 ) /*0x6c9233*/
    {
      v15 = (wchar_t *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13806); /*0x6c9243*/
      v16 = (wchar_t *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13837); /*0x6c9249*/
    }
    else
    {
      v15 = (wchar_t *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13744); /*0x6c9235*/
      v16 = (wchar_t *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13775); /*0x6c923b*/
    }
    String = (ScenarioClass *)GetStringCSF(v15, 0, &stru_830620.__pad_579C[50108], 138); /*0x6c926e*/
    v17 = (ScenarioClass *)GetStringCSF(v16, 0, &stru_830620.__pad_579C[50108], 139); /*0x6c927b*/
    v19 = GetDlgItem(hWnd, 1779); /*0x6c927d*/
    v34 = String; /*0x6c927f*/
    v20 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x6c9280*/
    SendMessageA(v19, 0x4B2u, 0, (LPARAM)v34); /*0x6c928e*/
    eax21a = GetDlgItem(hWnd, 1780); /*0x6c9296*/
    SendMessageA(eax21a, 0x4B2u, 0, (LPARAM)v17); /*0x6c92a1*/
    v21 = HouseClass_Count; /*0x6c92a3*/
    v23 = 0; /*0x6c92a8*/
    v24 = 0; /*0x6c92aa*/
    wParama = HouseClass_Count; /*0x6c92ac*/
    Formata = 0; /*0x6c92b2*/
    if ( (int)HouseClass_Count > 0 ) /*0x6c92b6*/
    {
      do /*0x6c930e*/
      {
        v25 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v24]; /*0x6c92be*/
        if ( *(_BYTE *)(v25 + 493) ) /*0x6c92c1*/
        {
          v26 = (char *)v23 + SumArray((int *)(v25 + 9032)); /*0x6c92dc*/
          v27 = &v26[SumArray((int *)(v25 + 11088))]; /*0x6c92e9*/
          v28 = &v27[SumArray((int *)(v25 + 13144))]; /*0x6c92f6*/
          v29 = SumArray((int *)(v25 + 15200)); /*0x6c92f8*/
          v24 = (int)Formata; /*0x6c92fd*/
          v23 = (const wchar_t *)&v28[v29]; /*0x6c9301*/
          v21 = wParama; /*0x6c9303*/
        }
        Formata = (wchar_t *)++v24; /*0x6c930a*/
      }
      while ( v24 < (int)v21 ); /*0x6c930e*/
      v20 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x6c9310*/
    }
    v30 = GetDlgItem(hWnd, 1835); /*0x6c931c*/
    PostMessageA(v30, 0x4D7u, 0, (LPARAM)hWnd); /*0x6c9327*/
    swprintf(lParam, (const size_t)&g_Str_Fmt_PctD, v23, a1); /*0x6c9338*/
    v31 = GetDlgItem(hWnd, 1782); /*0x6c9346*/
    v20(v31, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9355*/
    v32 = (Movie *)StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_SCORE); /*0x6c9361*/
    ThemeClass::Play((int *)&g_BuildingTypeClass_Count, v32); /*0x6c936c*/
    return 0; /*0x6c9374*/
  }
  return result; /*0x6c905c*/
}


// ==== 0x006C93F0  sub_6C93F0  this=-  sig=ida-proto ====
void sub_6C93F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6c93fc*/
  MEMORY[0xB0BF78] = Math::Sqrt(v0 + v0); /*0x6c940e*/
}


// ==== 0x006C9420  sub_6C9420  this=-  sig=ida-proto ====
void sub_6C9420()
{
  MEMORY[0xB0BFC8] = MEMORY[0xB0BF78] / 60.0; /*0x6c942c*/
}


// ==== 0x006C9440  sub_6C9440  this=-  sig=ida-proto ====
void sub_6C9440()
{
  MEMORY[0xB0BFB0] = 1.0 / MEMORY[0xB0BFC8]; /*0x6c944c*/
}


// ==== 0x006C9460  sub_6C9460  this=-  sig=ida-proto ====
void sub_6C9460()
{
  MEMORY[0xB0BFA8] = 0.0174532925199433 * 45.0; /*0x6c946c*/
}


// ==== 0x006C9480  sub_6C9480  this=-  sig=ida-proto ====
void sub_6C9480()
{
  MEMORY[0xB0BF80] = 0.0174532925199433 * 60.0; /*0x6c948c*/
}


// ==== 0x006C94A0  sub_6C94A0  this=-  sig=ida-proto ====
void sub_6C94A0()
{
  MEMORY[0xB0BF68] = 0.0174532925199433 * 90.0; /*0x6c94ac*/
}


// ==== 0x006C94C0  sub_6C94C0  this=-  sig=ida-proto ====
__int64 sub_6C94C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0BF68] - MEMORY[0xB0BF80]); /*0x6c94d2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0BF78] * 0.5); /*0x6c94e6*/
  MEMORY[0xB0BFD0] = result; /*0x6c94eb*/
  return result; /*0x6c94f0*/
}


// ==== 0x006C9500  sub_6C9500  this=-  sig=ida-proto ====
void sub_6C9500()
{
  MEMORY[0xB0BF88] = Math::ArcTan((double)MEMORY[0xB0BFD0] * 0.00390625); /*0x6c9517*/
}


// ==== 0x006C9530  sub_6C9530  this=-  sig=ida-proto ====
void sub_6C9530()
{
  MEMORY[0xB0BFA0] = Math::ArcTan((double)(2 * MEMORY[0xB0BFD0]) / MEMORY[0xB0BF78]); /*0x6c9552*/
}


// ==== 0x006C9560  sub_6C9560  this=-  sig=ida-proto ====
__int64 sub_6C9560()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0BFD0]) + 0.5); /*0x6c957b*/
  MEMORY[0xB0BFC4] = result; /*0x6c9580*/
  return result; /*0x6c9586*/
}


// ==== 0x006C9590  sub_6C9590  this=-  sig=ida-proto ====
int sub_6C9590()
{
  MEMORY[0xB0BF70] = 0; /*0x6c9592*/
  MEMORY[0xB0BF72] = 0; /*0x6c9598*/
  return 0; /*0x6c959e*/
}


// ==== 0x006C95A0  sub_6C95A0  this=-  sig=ida-proto ====
int sub_6C95A0()
{
  MEMORY[0xB0BF90] = 0; /*0x6c95a2*/
  MEMORY[0xB0BF94] = 0; /*0x6c95a7*/
  MEMORY[0xB0BF98] = 0; /*0x6c95ac*/
  return 0; /*0x6c95b1*/
}


// ==== 0x006C95C0  sub_6C95C0  this=-  sig=ida-proto ====
int sub_6C95C0()
{
  MEMORY[0xB0BFC0] = 0; /*0x6c95c5*/
  MEMORY[0xB0BFB8] = 128; /*0x6c95cf*/
  MEMORY[0xB0BFBC] = 128; /*0x6c95d4*/
  return 128; /*0x6c95d9*/
}


// ==== 0x006C95E0  Delegate::GetField  this=IUnknown  sig=csp ====
_DWORD *__thiscall Delegate::GetField(_DWORD *this)
{
  *this = 0; /*0x6c95e6*/
  this->q004 = 0; /*0x6c95e8*/
  this->q008 = 0; /*0x6c95eb*/
  this->q00C = 0; /*0x6c95ee*/
  return this; /*0x6c95f1*/
}


// ==== 0x006C9600  AbstractClass::GetTotalValue  this=VOID_PTR  sig=csp ====
int __thiscall AbstractClass::GetTotalValue(float *this)
{
  int v1; // edx
  float *v2; // esi
  char *v3; // edi
  int v4; // ebx
  int v6; // [esp+Ch] [ebp-4h]

  v1 = 0; /*0x6c960a*/
  v2 = this; /*0x6c960c*/
  v6 = 0; /*0x6c960e*/
  v3 = (char *)((char *)MEMORY[0xB0F4EC] - (char *)this); /*0x6c9612*/
  v4 = 4; /*0x6c9614*/
  do /*0x6c9646*/
  {
    if ( *v2 > 0.0 ) /*0x6c9626*/
    {
      v1 = Math::RoundToInt((double)*(int *)(*(_DWORD *)((char *)v2 + (_DWORD)v3) + 184) * *v2 + (double)v6); /*0x6c963c*/
      v6 = v1; /*0x6c963e*/
    }
    ++v2; /*0x6c9642*/
    --v4; /*0x6c9645*/
  }
  while ( v4 ); /*0x6c9646*/
  return v1; /*0x6c9648*/
}


// ==== 0x006C9650  Float4::Sum  this=BuildingTypeClass  sig=csp ====
double __thiscall Float4_Sum(float *this)
{
  int v2; // edi
  int v3; // eax
  int v5; // [esp+8h] [ebp-4h]

  v5 = 0; /*0x6c9653*/
  v2 = 4; /*0x6c965d*/
  do /*0x6c9675*/
  {
    v3 = Math::RoundToInt((double)v5 + *this++); /*0x6c9668*/
    --v2; /*0x6c9670*/
    v5 = v3; /*0x6c9671*/
  }
  while ( v2 ); /*0x6c9675*/
  return (double)v3; /*0x6c967b*/
}


// ==== 0x006C9680  FloatArray::Get  this=BuildingTypeClass  sig=csp ====
double __thiscall FloatArray::Get(float *this, BuildingClass *aP1)
{
  return *(this + (_DWORD)aP1); /*0x6c9687*/
}


// ==== 0x006C9690  Float::Accumulate  this=BuildingTypeClass  sig=csp ====
float __thiscall Float::Accumulate(float *this, float value, int index)
{
  double v3; // st7

  v3 = value + *(this + index); /*0x6c9698*/
  *(this + index) = v3; /*0x6c969b*/
  return v3; /*0x6c969e*/
}


// ==== 0x006C96B0  Float::SubtractClamped  this=BuildingTypeClass  sig=csp ====
double __thiscall Float::SubtractClamped(float *this, BuildingTypeClass *aP1, IUnknown *aP2)
{
  double result; // st7
  double v4; // st6

  if ( *(this + (_DWORD)aP2) >= (double)*(float *)&aP1 ) /*0x6c96c0*/
  {
    result = *(float *)&aP1; /*0x6c96d0*/
    v4 = *(this + (_DWORD)aP2) - *(float *)&aP1; /*0x6c96d7*/
  }
  else
  {
    result = *(this + (_DWORD)aP2); /*0x6c96c2*/
    v4 = result - result; /*0x6c96c8*/
  }
  *(this + (_DWORD)aP2) = v4; /*0x6c96ca*/
  return result; /*0x6c96cd*/
}


// ==== 0x006C96E0  ObjectClass::method_6C96E0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6C96E0(float *this, _DWORD *a2, int a3)
{
  float *v3; // eax
  int v4; // esi
  int v5; // ecx
  char *v6; // edx
  double v7; // st7
  int v9; // [esp+4h] [ebp-10h] BYREF
  int v10; // [esp+8h] [ebp-Ch]
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h]

  v3 = this; /*0x6c96e3*/
  v9 = 0; /*0x6c96ec*/
  v4 = 4; /*0x6c96f0*/
  v10 = 0; /*0x6c96f5*/
  v11 = 0; /*0x6c96f9*/
  v12 = 0; /*0x6c96fd*/
  v5 = a3 - (_DWORD)this; /*0x6c9705*/
  v6 = (char *)((char *)&v9 - (char *)v3); /*0x6c9707*/
  do /*0x6c9716*/
  {
    v7 = *(float *)((char *)v3 + v5) + *v3; /*0x6c970c*/
    ++v3; /*0x6c970e*/
    --v4; /*0x6c9711*/
    *(float *)((char *)v3 + (_DWORD)v6 - 4) = v7; /*0x6c9712*/
  }
  while ( v4 ); /*0x6c9716*/
  *a2 = v9; /*0x6c9723*/
  a2[1] = v10; /*0x6c9729*/
  a2[2] = v11; /*0x6c9730*/
  a2[3] = v12; /*0x6c9737*/
  return a2; /*0x6c9722*/
}


// ==== 0x006C9740  HouseClass::AccumulateFloat4  this=VOID_PTR  sig=csp ====
_DWORD *__thiscall sub_6C9740(float *this, _DWORD *a2, int a3)
{
  float *v3; // eax
  int v4; // esi
  double v5; // st7

  v3 = this; /*0x6c9745*/
  v4 = 4; /*0x6c9749*/
  do /*0x6c975a*/
  {
    v5 = *(float *)((char *)v3 + a3 - (_DWORD)this) + *v3; /*0x6c9751*/
    ++v3; /*0x6c9753*/
    --v4; /*0x6c9756*/
    *(v3 - 1) = v5; /*0x6c9757*/
  }
  while ( v4 ); /*0x6c975a*/
  *a2 = *(_DWORD *)this; /*0x6c9764*/
  a2[1] = *((_DWORD *)this + 1); /*0x6c9769*/
  a2[2] = *((_DWORD *)this + 2); /*0x6c976f*/
  a2[3] = *((_DWORD *)this + 3); /*0x6c9776*/
  return a2; /*0x6c9775*/
}


// ==== 0x006C9780  ObjectClass::method_6C9780  this=VOID_PTR  sig=csp ====
_DWORD *__thiscall sub_6C9780(char *this, _DWORD *a2, float *a3)
{
  int v3; // esi
  float *v4; // eax
  char *v5; // ecx
  double v6; // st7
  int v8; // [esp+4h] [ebp-10h] BYREF
  int v9; // [esp+8h] [ebp-Ch]
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v8 = 0; /*0x6c9789*/
  v9 = 0; /*0x6c978e*/
  v3 = 4; /*0x6c9792*/
  v10 = 0; /*0x6c9797*/
  v11 = 0; /*0x6c979b*/
  v4 = a3; /*0x6c979f*/
  v5 = (char *)(this - (char *)a3); /*0x6c97a3*/
  do /*0x6c97b4*/
  {
    v6 = *(float *)((char *)v4 + (_DWORD)v5) - *v4; /*0x6c97aa*/
    ++v4; /*0x6c97ac*/
    --v3; /*0x6c97af*/
    *(float *)((char *)v4 + (char *)&v8 - (char *)a3 - 4) = v6; /*0x6c97b0*/
  }
  while ( v3 ); /*0x6c97b4*/
  *a2 = v8; /*0x6c97c1*/
  a2[1] = v9; /*0x6c97c7*/
  a2[2] = v10; /*0x6c97ce*/
  a2[3] = v11; /*0x6c97d5*/
  return a2; /*0x6c97c0*/
}


// ==== 0x006C97E0  HouseClass::ComputeResourceDelta  this=VOID_PTR  sig=csp ====
_DWORD *__thiscall sub_6C97E0(float *this, _DWORD *a2, int a3)
{
  float *v3; // eax
  int v4; // esi
  double v5; // st7

  v3 = this; /*0x6c97e5*/
  v4 = 4; /*0x6c97e9*/
  do /*0x6c97fa*/
  {
    v5 = *v3 - *(float *)((char *)v3 + a3 - (_DWORD)this); /*0x6c97f0*/
    ++v3; /*0x6c97f3*/
    --v4; /*0x6c97f6*/
    *(v3 - 1) = v5; /*0x6c97f7*/
  }
  while ( v4 ); /*0x6c97fa*/
  *a2 = *(_DWORD *)this; /*0x6c9804*/
  a2[1] = *((_DWORD *)this + 1); /*0x6c9809*/
  a2[2] = *((_DWORD *)this + 2); /*0x6c980f*/
  a2[3] = *((_DWORD *)this + 3); /*0x6c9816*/
  return a2; /*0x6c9815*/
}


// ==== 0x006C9820  FirstFloatPositive  this=BuildingTypeClass  sig=csp ====
int __fastcall Float_FirstPositive(float *a1)
{
  int v1; // edx

  v1 = 0; /*0x6c9820*/
  while ( *a1 <= 0.0 ) /*0x6c982f*/
  {
    ++v1; /*0x6c9831*/
    ++a1; /*0x6c9832*/
    if ( v1 >= 4 ) /*0x6c9838*/
      return -1; /*0x6c983d*/
  }
  return v1; /*0x6c983d*/
}


// ==== 0x006C9850  Straw::Dtor  this=Straw  sig=csp ====
int __thiscall Straw_Dtor(int *this)
{
  int result; // eax
  int v3; // ecx

  result = this->Straw_field_0x04; /*0x6c9856*/
  *this = (int)&vt_Straw; /*0x6c9859*/
  if ( result ) /*0x6c9861*/
    *(_DWORD *)(result + 8) = this->__pad_008; /*0x6c9866*/
  v3 = this->__pad_008; /*0x6c9869*/
  if ( v3 ) /*0x6c986e*/
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 4))(v3, this->Straw_field_0x04); /*0x6c9876*/
  this->__pad_008 = 0; /*0x6c9879*/
  this->Straw_field_0x04 = 0; /*0x6c987c*/
  return result; /*0x6c987f*/
}


// ==== 0x006C9890  Straw::Set  this=Straw  sig=csp ====
void __thiscall Delegate::Set(_DWORD *this, AbstractTypeClass *aP1)
{
  Straw *v3; // ecx
  AbstractTypeClass *v4; // eax

  if ( (AbstractTypeClass *)this->Straw_field_0x04 != aP1 ) /*0x6c989b*/
  {
    if ( aP1 ) /*0x6c989f*/
    {
      v3 = *(Straw **)&aP1->__pad_0[8]; /*0x6c98a1*/
      if ( v3 ) /*0x6c98a6*/
      {
        (*(void (__thiscall **)(Straw *, _DWORD))(*(_DWORD *)v3->__pad_0 + 4))(v3, 0); /*0x6c98ac*/
        *(_DWORD *)&aP1->__pad_0[8] = 0; /*0x6c98af*/
      }
    }
    v4 = (AbstractTypeClass *)this->Straw_field_0x04; /*0x6c98b6*/
    if ( v4 ) /*0x6c98bb*/
      *(_DWORD *)&v4->__pad_0[8] = 0; /*0x6c98bd*/
    this->Straw_field_0x04 = aP1; /*0x6c98c6*/
    if ( aP1 ) /*0x6c98c9*/
      *(_DWORD *)&aP1->__pad_0[8] = this; /*0x6c98cb*/
  }
}


// ==== 0x006C98E0  Straw::Invoke  this=Straw  sig=csp ====
int __thiscall Delegate::Invoke(_DWORD *this, int a2, Straw *aP2)
{
  Straw *v3; // ecx

  v3 = (Straw *)this->Straw_field_0x04; /*0x6c98e0*/
  if ( v3 ) /*0x6c98e5*/
    return (*(int (__thiscall **)(Straw *, int, Straw *))(*(_DWORD *)v3->__pad_0 + 8))(v3, a2, aP2); /*0x6c98f3*/
  else
    return 0; /*0x6c98f9*/
}


// ==== 0x006C9900  ObjectClass::Render_Parse  this=int  sig=csp ====
_DWORD *__thiscall sub_6C9900(_DWORD *this)
{
  *this = 0; /*0x6c9902*/
  *(this + 1) = 1200; /*0x6c9908*/
  *(this + 2) = 0xFFFFFF; /*0x6c990f*/
  *(this + 3) = 15; /*0x6c9916*/
  *(this + 4) = 2; /*0x6c991d*/
  *(this + 5) = 0; /*0x6c9924*/
  return this; /*0x6c992b*/
}


// ==== 0x006C9930  BinkMovie::Destroy  this=CampaignClass  sig=csp ====
void __thiscall sub_6C9930(void **this)
{
  if ( this->abstractFlags ) /*0x6c9930*/
    __3_YAXPAX_Z(this->abstractFlags); /*0x6c9938*/
}


// ==== 0x006C9940  ObjectClass::method_6C9940  this=int  sig=csp ====
int __thiscall sub_6C9940(_DWORD *this, char a2, char a3, unsigned __int8 a4)
{
  unsigned __int16 v4; // ax
  int result; // eax

  HIBYTE(v4) = a2; /*0x6c9946*/
  LOBYTE(v4) = a3; /*0x6c9950*/
  result = a4 | (v4 << 8); /*0x6c9957*/
  *(this + 2) = result; /*0x6c9959*/
  return result; /*0x6c995c*/
}


// ==== 0x006C9960  ObjectClass::method_6C9960  this=VOID_PTR  sig=csp ====
void __thiscall sub_6C9960(void **this, wchar_t *String)
{
  size_t v3; // eax
  wchar_t *v4; // eax

  if ( *(this + 5) ) /*0x6c9964*/
  {
    __3_YAXPAX_Z(*(this + 5)); /*0x6c996c*/
    *(this + 5) = 0; /*0x6c9974*/
  }
  if ( String ) /*0x6c9981*/
  {
    v3 = wcslen(String); /*0x6c9984*/
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3 + 2); /*0x6c998e*/
    *(this + 5) = v4; /*0x6c9996*/
    if ( v4 ) /*0x6c999b*/
      wcscpy(v4, String); /*0x6c999f*/
  }
}


// ==== 0x006C99B0  sub_6C99B0  this=-  sig=ida-proto ====
int sub_6C99B0()
{
  MEMORY[0xB0BFD8] = 0; /*0x6c99b2*/
  MEMORY[0xB0BFDC] = 0; /*0x6c99b7*/
  MEMORY[0xB0BFE0] = 0; /*0x6c99bc*/
  MEMORY[0xB0BFE4] = 0; /*0x6c99c1*/
  return 0; /*0x6c99c6*/
}


// ==== 0x006C99D0  BinkMovie::CreateSurfaceTracker  this=char*  sig=csp ====
int *__thiscall BinkMovie::CreateSurfaceTracker(char *FullPath)
{
  int *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  ObjectClass Filename; // [esp+Ch] [ebp-100h] BYREF

  if ( !FullPath || !strlen(FullPath) ) /*0x6c99e7*/
    return 0; /*0x6c9ab2*/
  v2 = (int *)__2_YAPAXI_Z(0x34u); /*0x6c99ff*/
  if ( !v2 ) /*0x6c9a06*/
    return 0; /*0x6c9aa3*/
  *v2 = 0; /*0x6c9a14*/
  v2[1] = 0; /*0x6c9a16*/
  v2[2] = 0; /*0x6c9a19*/
  v2[3] = 0; /*0x6c9a1c*/
  v2[4] = 0; /*0x6c9a1f*/
  v2[5] = 0; /*0x6c9a23*/
  v2[6] = 0; /*0x6c9a26*/
  v2[7] = 0; /*0x6c9a29*/
  v2[8] = 0; /*0x6c9a2c*/
  _splitpath(FullPath, 0, 0, &Filename, 0); /*0x6c9a2f*/
  if ( BinkMovie::InitKeyframeTracking(v2, Filename.__pad_0) == 1 ) /*0x6c9a45*/
  {
    v3 = (_DWORD *)__2_YAPAXI_Z(0x20u); /*0x6c9a49*/
    v4 = v3; /*0x6c9a4e*/
    if ( v3 ) /*0x6c9a55*/
    {
      v3[1] = 640; /*0x6c9a60*/
      v3[2] = 255; /*0x6c9a67*/
      v3[3] = 0; /*0x6c9a6e*/
      *v3 = &XSurface_Vtable; /*0x6c9a71*/
      v3[4] = 2; /*0x6c9a77*/
      Buffer::Init(v3 + 5, 0, (AbstractClass *)0x4FB00); /*0x6c9a7e*/
      *v4 = &BSurface_Vtable; /*0x6c9a83*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v4 + 24))(v4, 0); /*0x6c9a8e*/
      v2[4] = (int)v4; /*0x6c9a91*/
    }
  }
  return v2; /*0x6c9a97*/
}


// ==== 0x006C9AC0  ObjectClass::method_6C9AC0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6C9AC0(_DWORD *this)
{
  *this = 0; /*0x6c9ac4*/
  this->vtable2 = 0; /*0x6c9ac6*/
  this->vtable3 = 0; /*0x6c9ac9*/
  this->vtable4 = 0; /*0x6c9acc*/
  this->uniqueId = 0; /*0x6c9acf*/
  this->abstractFlags = 0; /*0x6c9ad2*/
  this->nextArrayIndex = 0; /*0x6c9ad5*/
  this->referenceCount = 0; /*0x6c9ad8*/
  this->NeedsSaveOrLink = 0; /*0x6c9adb*/
  return this; /*0x6c9ade*/
}


// ==== 0x006C9AE0  BinkMovie::FreeSurfaceTracker  this=CampaignClass  sig=csp ====
int __thiscall BinkMovie_FreeSurfaceTracker(int *this)
{
  int result; // eax
  int v3; // esi
  int v4; // eax
  void *v5; // edi
  int (__thiscall ***v6)(_DWORD, int); // ecx

  result = *this; /*0x6c9ae3*/
  if ( *this ) /*0x6c9ae3*/
  {
    v3 = 0; /*0x6c9aed*/
    if ( *(int *)(result + 16) > 0 ) /*0x6c9af1*/
    {
      do /*0x6c9b14*/
      {
        v4 = *(_DWORD *)(result + 4); /*0x6c9af4*/
        v5 = *(void **)(v4 + 4 * v3); /*0x6c9af7*/
        if ( v5 ) /*0x6c9afc*/
        {
          BinkMovie::Destroy(*(_DWORD *)(v4 + 4 * v3)); /*0x6c9b00*/
          __3_YAXPAX_Z(v5); /*0x6c9b06*/
        }
        result = *this; /*0x6c9b0e*/
        ++v3; /*0x6c9b10*/
      }
      while ( v3 < *(_DWORD *)(*this + 16) ); /*0x6c9b14*/
    }
    if ( *this ) /*0x6c9b17*/
      result = (**(int (__thiscall ***)(int, int))*this)(*this, 1); /*0x6c9b22*/
  }
  v6 = (int (__thiscall ***)(_DWORD, int))this->vtable2; /*0x6c9b24*/
  if ( v6 ) /*0x6c9b2a*/
    return (**v6)(v6, 1); /*0x6c9b30*/
  return result; /*0x6c9b27*/
}


// ==== 0x006C9B40  BinkMovie::InitKeyframeTracking  this=int  sig=csp ====
char __thiscall BinkMovie_InitKeyframeTracking(int *this, char *Source)
{
  int v3; // eax
  _DWORD v5[4]; // [esp+Ch] [ebp-888h] BYREF
  char v6; // [esp+1Ch] [ebp-878h]
  _DWORD v7[22]; // [esp+20h] [ebp-874h] BYREF
  _BYTE v8[12]; // [esp+78h] [ebp-81Ch] BYREF
  int v9; // [esp+84h] [ebp-810h]
  _BYTE v10[2056]; // [esp+8Ch] [ebp-808h] BYREF

  if ( !Source || !strlen(Source) ) /*0x6c9b64*/
    return 0; /*0x6c9b6a*/
  CCFileClass::Construct(v7, MEMORY[0x842194]); /*0x6c9b79*/
  if ( !(unsigned __int8)CCFileClass::Open(0) ) /*0x6c9b8a*/
  {
LABEL_6:
    v7[0] = &vt_CCFileClass; /*0x6c9be2*/
    v9 = 0; /*0x6c9bee*/
    Vector::Clear(v8); /*0x6c9bf5*/
    v7[0] = &off_7E1668; /*0x6c9bfe*/
    BufferIOFileClass::Dtor(v7); /*0x6c9c06*/
    return 0; /*0x6c9c16*/
  }
  v5[1] = 0; /*0x6c9b9c*/
  v5[2] = 0; /*0x6c9ba0*/
  v5[3] = v7; /*0x6c9ba4*/
  v6 = 0; /*0x6c9ba8*/
  v5[0] = &vt_FileStraw; /*0x6c9bac*/
  BinkMovie::VtableDispatch(v5); /*0x6c9bb4*/
  v3 = ParseMovieSubtitles(Source); /*0x6c9bc1*/
  *this = v3; /*0x6c9bc8*/
  if ( !v3 ) /*0x6c9bd2*/
  {
    nullsub_40(v10); /*0x6c9bd4*/
    FileStraw::Destructor(v5); /*0x6c9bdd*/
    goto LABEL_6; /*0x6c9bdd*/
  }
  nullsub_40(v10); /*0x6c9c19*/
  FileStraw::Destructor(v5); /*0x6c9c22*/
  v7[0] = &vt_CCFileClass; /*0x6c9c2b*/
  v9 = 0; /*0x6c9c33*/
  Vector::Clear(v8); /*0x6c9c3a*/
  v7[0] = &off_7E1668; /*0x6c9c43*/
  BufferIOFileClass::Dtor(v7); /*0x6c9c4b*/
  return 1; /*0x6c9c0b*/
}


// ==== 0x006C9C60  BinkMovie::CheckKeyframeTransition  this=ObjectClass  sig=csp ====
char __thiscall BinkMovie::CheckKeyframeTransition(_DWORD *this, CellStruct *aP1)
{
  int v3; // ecx
  int v5; // eax
  char v6; // bl
  ObjectClass *v7; // ecx
  void (*v8)(void); // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // ecx
  _DWORD *v12; // edi
  _DWORD *v13; // esi

  v3 = *this; /*0x6c9c66*/
  if ( !v3 ) /*0x6c9c6a*/
    return 0; /*0x6c9c6d*/
  v5 = this->vtable2; /*0x6c9c73*/
  v6 = 0; /*0x6c9c7a*/
  if ( v5 < *(_DWORD *)(v3 + 16) ) /*0x6c9c83*/
  {
    do /*0x6c9cb3*/
    {
      v7 = *(ObjectClass **)(*(_DWORD *)(v3 + 4) + 4 * v5); /*0x6c9c88*/
      if ( *(_DWORD *)v7->__pad_0 > (unsigned int)aP1 ) /*0x6c9c8d*/
        break; /*0x6c9c8d*/
      this->vtable3 = v7; /*0x6c9c90*/
      this->vtable2 = v5 + 1; /*0x6c9c93*/
      v8 = (void (*)(void))this->vtable4; /*0x6c9c96*/
      if ( v8 ) /*0x6c9c9b*/
      {
        v8(); /*0x6c9c9d*/
      }
      else
      {
        BinkMovie::ProcessKeyframe(this, v7); /*0x6c9ca4*/
        v6 = 1; /*0x6c9ca9*/
      }
      v3 = *this; /*0x6c9cab*/
      v5 = this->vtable2; /*0x6c9cad*/
    }
    while ( v5 < *(_DWORD *)(*this + 16) ); /*0x6c9cb3*/
  }
  v9 = (_DWORD *)this->vtable3; /*0x6c9cb5*/
  if ( v9 ) /*0x6c9cba*/
  {
    if ( (unsigned int)aP1 >= *v9 + v9[1] ) /*0x6c9cc5*/
    {
      v10 = this->vtable4; /*0x6c9cc7*/
      this->vtable3 = 0; /*0x6c9cca*/
      if ( !v10 ) /*0x6c9ccf*/
      {
        v11 = this->uniqueId; /*0x6c9cd1*/
        if ( v11 ) /*0x6c9cd6*/
        {
          v12 = this + 5; /*0x6c9cda*/
          (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v11 + 20))(v11, this + 5, 0); /*0x6c9cdf*/
          v13 = this + 9; /*0x6c9ce4*/
          v6 = 1; /*0x6c9ce7*/
          *v13 = *v12; /*0x6c9ceb*/
          v13[1] = v12[1]; /*0x6c9cf0*/
          v13[2] = v12[2]; /*0x6c9cf6*/
          v13[3] = v12[3]; /*0x6c9cfc*/
          *v12 = 0; /*0x6c9cff*/
          v12[1] = 0; /*0x6c9d01*/
          v12[2] = 0; /*0x6c9d04*/
          v12[3] = 0; /*0x6c9d07*/
        }
      }
    }
  }
  return v6; /*0x6c9c6c*/
}


// ==== 0x006C9D30  AbstractClass::getTotalValue  this=VOID_PTR  sig=csp ====
int __thiscall sub_6C9D30(_DWORD *this, int a2)
{
  *(this + 3) = a2; /*0x6c9d34*/
  return a2; /*0x6c9d37*/
}


// ==== 0x006C9D40  BinkMovie::ProcessKeyframe  this=ObjectClass  sig=csp ====
void __thiscall BinkMovie::ProcessKeyframe(int *this, ObjectClass *aP1)
{
  int v3; // ecx
  int *v4; // ebp
  BitFont *v5; // esi
  ObjectClass *v6; // ebx
  int uniqueId; // eax
  ObjectClass *v8; // edi
  int v9; // eax
  int *v10; // ebx
  int v11; // eax
  int v12; // ecx
  ObjectClass *v13; // [esp-1Ch] [ebp-4Ch]
  int v14; // [esp+8h] [ebp-28h]
  AbstractClass aP2; // [esp+Ch] [ebp-24h] BYREF

  *(_DWORD *)&aP2.__pad_0[12] = this; /*0x6c9d46*/
  v3 = this->vtable2; /*0x6c9d4a*/
  if ( v3 ) /*0x6c9d4f*/
  {
    v4 = this + 5; /*0x6c9d5a*/
    (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v3 + 20))(v3, this + 5, 0); /*0x6c9d60*/
    v5 = (BitFont *)aP0; /*0x6c9d6b*/
    Property::Set( /*0x6c9dba*/
      aP0,
      (AbstractClass *)(((int)(unsigned __int8)*(_DWORD *)&aP1->__pad_0[8] >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664])
                      | ((unsigned __int8)BYTE2(*(_DWORD *)&aP1->__pad_0[8]) >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656])
                      | ((unsigned __int8)BYTE1(*(_DWORD *)&aP1->__pad_0[8]) >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])));
    v6 = (ObjectClass *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->vtable2 + 124))(this->vtable2); /*0x6c9dca*/
    *(_DWORD *)&aP2.__pad_0[4] = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->vtable2 + 128))(this->vtable2); /*0x6c9dd6*/
    aP2.NeedsSaveOrLink = *(void **)&aP2.__pad_0[4]; /*0x6c9ddc*/
    aP2.abstractFlags = 0; /*0x6c9de4*/
    aP2.nextArrayIndex = 0; /*0x6c9de8*/
    aP2.referenceCount = (int)v6; /*0x6c9def*/
    TextGroup::SetRect(v5, (AbstractClass *)&aP2.abstractFlags); /*0x6c9df3*/
    *(_DWORD *)&aP2.__pad_0[8] = aP1->abstractFlags; /*0x6c9e0d*/
    Text::Layout(v5, *(unsigned __int16 **)&aP2.__pad_0[8], &aP2, (AbstractClass *)&aP2.uniqueId, (AbstractClass *)v6); /*0x6c9e11*/
    v14 = 0; /*0x6c9e1e*/
    uniqueId = aP1->uniqueId; /*0x6c9e26*/
    v8 = (ObjectClass *)(v5[2].field_4 * (*(_DWORD *)&aP1->__pad_0[12] - 1)); /*0x6c9e29*/
    if ( uniqueId == 2 ) /*0x6c9e30*/
    {
      v9 = (int)&v6->__pad_0[-*(_DWORD *)aP2.__pad_0] / 2; /*0x6c9e3d*/
    }
    else
    {
      if ( uniqueId != 1 ) /*0x6c9e44*/
      {
LABEL_7:
        v13 = v6; /*0x6c9e52*/
        v10 = *(int **)&aP2.__pad_0[12]; /*0x6c9e66*/
        Font::Print( /*0x6c9e78*/
          (int)v5,
          *(_DWORD *)(*(_DWORD *)&aP2.__pad_0[12] + 16),
          *(_WORD **)&aP2.__pad_0[8],
          v14,
          (int)v8,
          (int)v13,
          *(int *)&aP2.__pad_0[4],
          0,
          0,
          0);
        v10 += 9; /*0x6c9e7f*/
        *v10 = *v4; /*0x6c9e85*/
        v10[1] = v4[1]; /*0x6c9e8a*/
        v10[2] = v4[2]; /*0x6c9e90*/
        v11 = *(_DWORD *)aP2.__pad_0; /*0x6c9e93*/
        v10[3] = v4[3]; /*0x6c9e9e*/
        v12 = aP2.uniqueId; /*0x6c9ea1*/
        *v4 = v14; /*0x6c9ea5*/
        v4[1] = (int)v8; /*0x6c9ea8*/
        v4[2] = v11; /*0x6c9eab*/
        v4[3] = v12; /*0x6c9eae*/
        return; /*0x6c9eae*/
      }
      v9 = (int)&v6->__pad_0[-*(_DWORD *)aP2.__pad_0]; /*0x6c9e4c*/
    }
    v14 = v9; /*0x6c9e4e*/
    goto LABEL_7; /*0x6c9e4e*/
  }
}


// ==== 0x006C9EC0  BinkMovie::VtableDispatch  this=int  sig=csp ====
_DWORD *__thiscall sub_6C9EC0(_DWORD *this, int a2)
{
  int v3; // ecx

  v3 = a2; /*0x6c9ec3*/
  *this = a2; /*0x6c9ec9*/
  *(this + 513) = 0; /*0x6c9ecb*/
  a2 = 0; /*0x6c9ed1*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v3 + 8))(v3, &a2, 2); /*0x6c9ede*/
  if ( (_WORD)a2 != 0xFEFF ) /*0x6c9ee8*/
    Debug::Log(); /*0x6c9eef*/
  return this; /*0x6c9ef9*/
}


// ==== 0x006C9F00  ObjectClass::nullsub_40  this=ObjectClass  sig=csp ====
void nullsub_40()
{
  ; /*0x6c9f00*/
}


// ==== 0x006C9F10  ObjectClass::ParseMovieSubtitles  this=ObjectClass  sig=csp ====
int __thiscall ParseMovieSubtitles(char *this, char *Source)
{
  char v3; // bl
  wchar_t *v4; // esi
  size_t v5; // eax
  wchar_t *v6; // eax
  const wchar_t *v7; // esi
  _DWORD *v8; // esi
  int v9; // ebx
  _WORD *v10; // edi
  int v11; // esi
  wchar_t *v12; // esi
  wchar_t *v13; // esi
  void *v14; // eax
  int v15; // eax
  void *v16; // edi
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  size_t v21; // eax
  int result; // eax
  __int16 v23; // [esp+12h] [ebp-46h] BYREF
  int v24; // [esp+14h] [ebp-44h]
  wchar_t String2[32]; // [esp+18h] [ebp-40h] BYREF

  mbstowcs(String2, Source, 0x20u); /*0x6c9f25*/
  while ( 1 ) /*0x6c9fb7*/
  {
    while ( 1 ) /*0x6c9f45*/
    {
      v3 = Render_Parse_6CA940(1024); /*0x6c9f45*/
      ++this->q804; /*0x6c9f48*/
      v4 = WideString::Trim((wchar_t *)this + 2); /*0x6c9f55*/
      if ( wcslen(v4) ) /*0x6c9f58*/
      {
        if ( *v4 != 59 ) /*0x6c9f68*/
          break; /*0x6c9f68*/
      }
      if ( v3 ) /*0x6c9f6c*/
        return 0; /*0x6c9f6c*/
    }
    if ( !v4 ) /*0x6c9f76*/
      return 0; /*0x6ca1c5*/
    v5 = wcslen(MEMORY[0x842354]); /*0x6c9f81*/
    if ( !_wcsnicmp(v4, MEMORY[0x842354], v5) ) /*0x6c9f8d*/
    {
      v6 = wcschr(v4, 0x20u); /*0x6c9f9c*/
      v7 = v6; /*0x6c9fa1*/
      if ( v6 ) /*0x6c9fa8*/
      {
        WideString::Trim(v6); /*0x6c9fac*/
        if ( !_wcsicmp(v7, String2) ) /*0x6c9fb7*/
          break; /*0x6c9fb7*/
      }
    }
  }
  Debug::Log(); /*0x6c9fd1*/
  v8 = __2_YAPAXI_Z(0x18u); /*0x6c9fdd*/
  v24 = (int)v8; /*0x6c9fe4*/
  if ( !v8 ) /*0x6c9fe8*/
    return 0; /*0x6c9fe8*/
  Render_Parse_6CABA0(0, 0); /*0x6c9ff4*/
  *v8 = &DynamicVectorClass<SubTitle *>::`vftable'; /*0x6c9ff9*/
  v8[5] = 10; /*0x6c9fff*/
  v8[4] = 0; /*0x6ca006*/
  while ( 1 ) /*0x6ca0e2*/
  {
    do /*0x6ca0e2*/
    {
      while ( 1 ) /*0x6ca08e*/
      {
        do /*0x6ca08e*/
        {
          v9 = *(_DWORD *)this; /*0x6ca00d*/
          v10 = this + 4; /*0x6ca010*/
          v11 = 0; /*0x6ca018*/
          this->vtable3 = 0; /*0x6ca01a*/
          do /*0x6ca050*/
          {
            if ( (*(int (__thiscall **)(int, __int16 *, int))(*(_DWORD *)v9 + 8))(v9, &v23, 2) != 2 || v23 == 10 ) /*0x6ca03b*/
              break; /*0x6ca03b*/
            if ( v23 != 13 ) /*0x6ca041*/
            {
              *v10 = v23; /*0x6ca043*/
              ++v11; /*0x6ca046*/
              ++v10; /*0x6ca047*/
            }
          }
          while ( v11 < 1024 ); /*0x6ca050*/
          *((_WORD *)this + v11 + 2) = 0; /*0x6ca05c*/
          ++this->q804; /*0x6ca069*/
          v12 = WideString::Trim((wchar_t *)this + 2); /*0x6ca074*/
        }
        while ( !wcslen(v12) || *v12 == 59 || !v12 || !wcslen(v12) ); /*0x6ca08e*/
        if ( *v12 == 60 && v12[wcslen(v12) - 1] == 62 ) /*0x6ca0b7*/
          break; /*0x6ca0b7*/
        v21 = wcslen(MEMORY[0x842328]); /*0x6ca188*/
        if ( !_wcsnicmp(v12, MEMORY[0x842328], v21) ) /*0x6ca19e*/
          goto LABEL_39; /*0x6ca19e*/
      }
      v13 = v12 + 1; /*0x6ca0bd*/
      v13[wcslen(v13) - 1] = 0; /*0x6ca0cb*/
      WideString::Trim(v13); /*0x6ca0d2*/
    }
    while ( !wcslen(v13) ); /*0x6ca0e2*/
    v14 = __2_YAPAXI_Z(0x18u); /*0x6ca0ea*/
    if ( !v14 ) /*0x6ca0f4*/
      break; /*0x6ca0f4*/
    v15 = Render_Parse(v14); /*0x6ca0fc*/
    v16 = (void *)v15; /*0x6ca101*/
    if ( !v15 ) /*0x6ca105*/
      break; /*0x6ca105*/
    if ( (unsigned __int8)Render_Parse_6CA310(v13, v15) == 1 ) /*0x6ca116*/
    {
      v17 = v24; /*0x6ca118*/
      v18 = *(_DWORD *)(v24 + 8); /*0x6ca11c*/
      if ( *(_DWORD *)(v24 + 16) < v18 ) /*0x6ca124*/
        goto LABEL_34; /*0x6ca124*/
      if ( *(_BYTE *)(v24 + 13) || !v18 ) /*0x6ca12f*/
      {
        v19 = *(_DWORD *)(v24 + 20); /*0x6ca135*/
        if ( v19 > 0 ) /*0x6ca13a*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v24 + 8))(v24, v18 + v19, 0) ) /*0x6ca14b*/
          {
            v17 = v24; /*0x6ca156*/
LABEL_34:
            v20 = *(_DWORD *)(v17 + 16); /*0x6ca15a*/
            *(_DWORD *)(v17 + 16) = v20 + 1; /*0x6ca160*/
            *(_DWORD *)(*(_DWORD *)(v17 + 4) + 4 * v20) = v16; /*0x6ca166*/
          }
        }
      }
    }
    else
    {
      BinkMovie::Destroy(v16); /*0x6ca170*/
      __3_YAXPAX_Z(v16); /*0x6ca176*/
    }
  }
  Debug::Log(); /*0x6ca1aa*/
LABEL_39:
  result = v24; /*0x6ca1b2*/
  if ( !*(_DWORD *)(v24 + 16) ) /*0x6ca1b6*/
  {
    (**(void (__thiscall ***)(int, int))v24)(v24, 1); /*0x6ca1c3*/
    return 0; /*0x6ca1c3*/
  }
  return result; /*0x6ca1c7*/
}


// ==== 0x006CA1E0  ObjectClass::method_6CA1E0  this=ObjectClass  sig=csp ====
char __thiscall sub_6CA1E0(char *this, char *Source)
{
  wchar_t *v3; // ebp
  int v4; // esi
  wchar_t *v5; // edi
  int v6; // ebx
  _DWORD *v7; // eax
  wchar_t *v8; // esi
  size_t v9; // eax
  wchar_t *v10; // eax
  const wchar_t *v11; // esi
  char v13; // [esp+11h] [ebp-47h]
  wchar_t v14; // [esp+12h] [ebp-46h] BYREF
  _DWORD *v15; // [esp+14h] [ebp-44h]
  wchar_t Dest[32]; // [esp+18h] [ebp-40h] BYREF

  v15 = this; /*0x6ca1f5*/
  mbstowcs(Dest, Source, 0x20u); /*0x6ca1f9*/
  v3 = (wchar_t *)(this + 4); /*0x6ca201*/
  while ( 1 ) /*0x6ca27e*/
  {
    while ( 1 ) /*0x6ca208*/
    {
      v13 = 0; /*0x6ca208*/
      v4 = 0; /*0x6ca20d*/
      v5 = v3; /*0x6ca20f*/
      v6 = *v15; /*0x6ca211*/
      *v3 = 0; /*0x6ca213*/
      while ( (*(int (__thiscall **)(int, wchar_t *, int))(*(_DWORD *)v6 + 8))(v6, &v14, 2) == 2 ) /*0x6ca22a*/
      {
        if ( v14 != 10 ) /*0x6ca235*/
        {
          if ( v14 != 13 ) /*0x6ca23b*/
          {
            *v5 = v14; /*0x6ca23d*/
            ++v4; /*0x6ca240*/
            ++v5; /*0x6ca241*/
          }
          if ( v4 < 1024 ) /*0x6ca24a*/
            continue; /*0x6ca24a*/
        }
        goto LABEL_10; /*0x6ca24a*/
      }
      v13 = 1; /*0x6ca24e*/
LABEL_10:
      v7 = v15; /*0x6ca253*/
      v3[v4] = 0; /*0x6ca257*/
      ++v7[513]; /*0x6ca260*/
      v8 = WideString::Trim(v3); /*0x6ca26b*/
      if ( wcslen(v8) ) /*0x6ca26e*/
      {
        if ( *v8 != 59 ) /*0x6ca27e*/
          break; /*0x6ca27e*/
      }
      if ( v13 ) /*0x6ca286*/
        return 0; /*0x6ca286*/
    }
    if ( !v8 ) /*0x6ca28f*/
      return 0; /*0x6ca2f8*/
    v9 = wcslen(MEMORY[0x842354]); /*0x6ca296*/
    if ( !_wcsnicmp(v8, MEMORY[0x842354], v9) ) /*0x6ca2a2*/
    {
      v10 = wcschr(v8, 0x20u); /*0x6ca2b5*/
      v11 = v10; /*0x6ca2ba*/
      if ( v10 ) /*0x6ca2c1*/
      {
        WideString::Trim(v10); /*0x6ca2c9*/
        if ( !_wcsicmp(v11, Dest) ) /*0x6ca2d4*/
        {
          Debug::Log(); /*0x6ca2ee*/
          return 1; /*0x6ca2ff*/
        }
      }
    }
  }
}


// ==== 0x006CA310  Render_Parse_6CA310  this=ObjectClass  sig=csp ====
char __stdcall Render_Parse_6CA310(CampaignScore *aP0, CCINIClass *aP1)
{
  BlowStraw *v2; // ebp
  wchar_t *i; // edi
  const wchar_t *v4; // esi
  CampaignScore *v5; // ebx
  wchar_t *v6; // eax
  CampaignScore *v7; // esi
  wchar_t *v8; // eax
  WinModemClass *v9; // esi
  WinModemClass *v10; // edi
  int WinModemClass_field_0x08; // eax
  wchar_t *String; // [esp+18h] [ebp+4h]

  v2 = (BlowStraw *)aP0; /*0x6ca313*/
  for ( i = wcschr((BlowStraw *)aP0, (CCINIClass *)0x3D); i; i = wcschr(v2, (CCINIClass *)0x3D) ) /*0x6ca32c*/
  {
    v4 = (const wchar_t *)v2; /*0x6ca332*/
    *i = 0; /*0x6ca336*/
    String = (wchar_t *)v2; /*0x6ca33b*/
    WideString::Trim((wchar_t *)v2); /*0x6ca33f*/
    v5 = (CampaignScore *)(i + 1); /*0x6ca344*/
    WideString::Trim(i + 1); /*0x6ca349*/
    if ( i[1] == 34 ) /*0x6ca352*/
    {
      v5 = (CampaignScore *)(i + 2); /*0x6ca354*/
      v6 = wcschr((BlowStraw *)(i + 2), (CCINIClass *)0x22); /*0x6ca35a*/
      if ( !v6 ) /*0x6ca366*/
        break; /*0x6ca366*/
      *v6 = 0; /*0x6ca36c*/
      v7 = (CampaignScore *)(v6 + 1); /*0x6ca371*/
      WideString::Trim(v6 + 1); /*0x6ca376*/
      if ( *(_WORD *)v7->__pad_0 == 44 ) /*0x6ca37f*/
        v7 = (CampaignScore *)((char *)v7 + 2); /*0x6ca381*/
      v2 = (BlowStraw *)v7; /*0x6ca384*/
      v4 = String; /*0x6ca386*/
    }
    else
    {
      v8 = wcspbrk((BlowStraw *)(i + 1), (CampaignScore *)&stru_830620.__pad_579C[50716]); /*0x6ca392*/
      if ( v8 ) /*0x6ca39c*/
      {
        *v8 = 0; /*0x6ca39e*/
        v2 = (BlowStraw *)(v8 + 1); /*0x6ca3a3*/
      }
      else
      {
        v2 = (BlowStraw *)&stru_87C374.__pad_579C[23588]; /*0x6ca3a8*/
      }
    }
    if ( !wcslen(v4) ) /*0x6ca3ae*/
      break; /*0x6ca3ae*/
    if ( v4 && *(_DWORD *)&stru_830620.__pad_579C[50156] ) /*0x6ca3c9*/
    {
      v9 = (WinModemClass *)&stru_830620.__pad_579C[50156]; /*0x6ca3cb*/
      v10 = (WinModemClass *)&stru_830620.__pad_579C[50156]; /*0x6ca3d0*/
      while ( _wcsicmp(*(const wchar_t **)v9->__pad_0, String) ) /*0x6ca3e4*/
      {
        WinModemClass_field_0x08 = v10->WinModemClass_field_0x08; /*0x6ca3e6*/
        v10 = (WinModemClass *)((char *)v10 + 8); /*0x6ca3e9*/
        v9 = v10; /*0x6ca3ee*/
        if ( !WinModemClass_field_0x08 ) /*0x6ca3f0*/
          goto LABEL_18; /*0x6ca3f0*/
      }
      ((void (__fastcall *)(CampaignScore *, CCINIClass *))v9->WinModemClass_field_0x04)(v5, aP1); /*0x6ca3fa*/
    }
LABEL_18:
    WideString::Trim((wchar_t *)v2); /*0x6ca3fd*/
    if ( !wcslen((const wchar_t *)v2) ) /*0x6ca40f*/
      return 1; /*0x6ca48f*/
  }
  Debug::Log(); /*0x6ca426*/
  return 0; /*0x6ca440*/
}


// ==== 0x006CA4A0  sub_6CA4A0  this=unknown  sig=csp ====
void __stdcall sub_6CA4A0(wchar_t *String2, int a2, int a3)
{
  const wchar_t **v3; // edi
  const wchar_t **v4; // esi
  const wchar_t *v5; // eax

  if ( String2 && MEMORY[0x8421A8] ) /*0x6ca4b2*/
  {
    v3 = (const wchar_t **)&MEMORY[0x8421A8]; /*0x6ca4b4*/
    v4 = (const wchar_t **)&MEMORY[0x8421A8]; /*0x6ca4b9*/
    while ( _wcsicmp(*v3, String2) ) /*0x6ca4c9*/
    {
      v5 = v4[2]; /*0x6ca4cb*/
      v4 += 2; /*0x6ca4ce*/
      v3 = v4; /*0x6ca4d3*/
      if ( !v5 ) /*0x6ca4d5*/
        return; /*0x6ca4d5*/
    }
    ((void (__fastcall *)(int, int))v3[1])(a2, a3); /*0x6ca4e5*/
  }
}


// ==== 0x006CA4F0  sub_6CA4F0  this=-  sig=ida-proto ====
wchar_t *__fastcall sub_6CA4F0(_DWORD *a1)
{
  wchar_t *v1; // ebp
  int v2; // ebx
  int v3; // esi
  wchar_t *v4; // edi
  _DWORD *v5; // eax
  wchar_t *v6; // esi
  char v8; // [esp+11h] [ebp-7h]
  wchar_t v9; // [esp+12h] [ebp-6h] BYREF
  _DWORD *v10; // [esp+14h] [ebp-4h]

  v10 = a1; /*0x6ca4f7*/
  v1 = (wchar_t *)(a1 + 1); /*0x6ca4fb*/
  while ( 1 ) /*0x6ca504*/
  {
    v2 = *a1; /*0x6ca504*/
    *v1 = 0; /*0x6ca506*/
    v8 = 0; /*0x6ca50c*/
    v3 = 0; /*0x6ca511*/
    v4 = v1; /*0x6ca513*/
    while ( (*(int (__thiscall **)(int, wchar_t *, int))(*(_DWORD *)v2 + 8))(v2, &v9, 2) == 2 ) /*0x6ca526*/
    {
      if ( v9 != 10 ) /*0x6ca531*/
      {
        if ( v9 != 13 ) /*0x6ca537*/
        {
          *v4 = v9; /*0x6ca539*/
          ++v3; /*0x6ca53c*/
          ++v4; /*0x6ca53d*/
        }
        if ( v3 < 1024 ) /*0x6ca546*/
          continue; /*0x6ca546*/
      }
      goto LABEL_11; /*0x6ca546*/
    }
    v8 = 1; /*0x6ca54a*/
LABEL_11:
    v5 = v10; /*0x6ca54f*/
    v1[v3] = 0; /*0x6ca553*/
    ++v5[513]; /*0x6ca55c*/
    v6 = WideString::Trim(v1); /*0x6ca567*/
    if ( wcslen(v6) ) /*0x6ca56a*/
    {
      if ( *v6 != 59 ) /*0x6ca57a*/
        return v6; /*0x6ca588*/
    }
    if ( v8 ) /*0x6ca582*/
      return 0; /*0x6ca591*/
    a1 = v10; /*0x6ca500*/
  }
}


// ==== 0x006CA5A0  ObjectClass::method_6CA5A0  this=int  sig=csp ====
unsigned int __thiscall sub_6CA5A0(wchar_t *Source)
{
  ObjectClass *v1; // esi
  ObjectClass *v2; // edi
  ObjectClass *v3; // ebx
  int v4; // eax
  BlowStraw *v5; // esi
  int v6; // ebp
  ObjectClass *v7; // ebx
  ObjectClass *v8; // esi
  BlowStraw Destination; // [esp+10h] [ebp-18h] BYREF
  __int16 v11; // [esp+26h] [ebp-2h]

  wcsncpy((wchar_t *)&Destination, Source, (DropListClass *)0xC); /*0x6ca5af*/
  v11 = 0; /*0x6ca5bb*/
  v1 = (ObjectClass *)wcschr(&Destination, (CCINIClass *)0x3A); /*0x6ca5c7*/
  *(_WORD *)v1->__pad_0 = 0; /*0x6ca5d2*/
  v1 = (ObjectClass *)((char *)v1 + 2); /*0x6ca5dc*/
  v2 = (ObjectClass *)WideChar::ToLong(&Destination, 0, 10); /*0x6ca5e2*/
  v3 = (ObjectClass *)wcschr((BlowStraw *)v1, (CCINIClass *)0x3A); /*0x6ca5e9*/
  *(_WORD *)v3->__pad_0 = 0; /*0x6ca5f0*/
  v4 = WideChar::ToLong((BlowStraw *)v1, 0, 10); /*0x6ca5f5*/
  v5 = (BlowStraw *)&v3->__pad_0[2]; /*0x6ca5fa*/
  v6 = v4; /*0x6ca600*/
  v7 = (ObjectClass *)wcschr((BlowStraw *)&v3->__pad_0[2], (CCINIClass *)0x3A); /*0x6ca607*/
  *(_WORD *)v7->__pad_0 = 0; /*0x6ca60e*/
  v8 = (ObjectClass *)WideChar::ToLong(v5, 0, 10); /*0x6ca61e*/
  return 60 * WideChar::ToLong((BlowStraw *)&v7->__pad_0[2], 0, 10) / 0x64u /*0x6ca640*/
       + 60 * ((_DWORD)v8 + 3600 * (_DWORD)v2 + 60 * v6);
}


// ==== 0x006CA670  sub_6CA670  this=-  sig=ida-proto ====
unsigned int __fastcall sub_6CA670(wchar_t *a1, unsigned int *a2)
{
  unsigned int result; // eax

  result = sub_6CA5A0(a1); /*0x6ca673*/
  *a2 = result; /*0x6ca678*/
  return result; /*0x6ca67a*/
}


// ==== 0x006CA680  sub_6CA680  this=-  sig=ida-proto ====
unsigned int __fastcall sub_6CA680(wchar_t *a1, int a2)
{
  unsigned int result; // eax

  result = sub_6CA5A0(a1); /*0x6ca683*/
  if ( result ) /*0x6ca68a*/
    *(_DWORD *)(a2 + 4) = result; /*0x6ca68c*/
  return result; /*0x6ca68f*/
}


// ==== 0x006CA6A0  sub_6CA6A0  this=-  sig=ida-proto ====
int __fastcall sub_6CA6A0(BlowStraw *String1, int a2)
{
  BlowStraw *v2; // ebx
  wchar_t *v4; // eax
  wchar_t *v5; // esi
  int v6; // edi
  int result; // eax
  const wchar_t **v8; // eax
  char *v9; // esi
  int v10; // ecx

  v2 = String1; /*0x6ca6a4*/
  v4 = wcschr(String1, (CCINIClass *)0x3A); /*0x6ca6ab*/
  v5 = v4; /*0x6ca6b0*/
  if ( v4 ) /*0x6ca6b7*/
  {
    *v4 = 0; /*0x6ca6be*/
    *(_DWORD *)(a2 + 12) = wcstol(v2, 0, 0); /*0x6ca6cb*/
    v2 = (BlowStraw *)(v5 + 1); /*0x6ca6ce*/
  }
  v6 = 0; /*0x6ca6d7*/
  result = 2; /*0x6ca6db*/
  if ( *(_DWORD *)&stru_830620.__pad_579C[50204] ) /*0x6ca6e0*/
  {
    v8 = (const wchar_t **)&stru_830620.__pad_579C[50204]; /*0x6ca6e2*/
    v9 = &stru_830620.__pad_579C[50204]; /*0x6ca6e7*/
    while ( 1 ) /*0x6ca6ed*/
    {
      result = _wcsicmp((const wchar_t *)v2, *v8); /*0x6ca6ed*/
      if ( !result ) /*0x6ca6f7*/
        break; /*0x6ca6f7*/
      v10 = *((_DWORD *)v9 + 2); /*0x6ca6f9*/
      v9 += 8; /*0x6ca6fc*/
      ++v6; /*0x6ca6ff*/
      v8 = (const wchar_t **)v9; /*0x6ca700*/
      if ( !v10 ) /*0x6ca704*/
      {
        result = 2; /*0x6ca706*/
        goto LABEL_8; /*0x6ca706*/
      }
    }
    *(_DWORD *)(a2 + 16) = *(_DWORD *)&stru_830620.__pad_579C[8 * v6 + 50208]; /*0x6ca71a*/
  }
  else
  {
LABEL_8:
    *(_DWORD *)(a2 + 16) = 2; /*0x6ca70b*/
  }
  return result; /*0x6ca70b*/
}


// ==== 0x006CA730  sub_6CA730  this=-  sig=ida-proto ====
int __fastcall sub_6CA730(BlowStraw *Str, _DWORD *a2)
{
  wchar_t *v4; // edi
  char v5; // al
  BlowStraw *v6; // esi
  wchar_t *v7; // edi
  unsigned __int8 v9; // [esp+Ch] [ebp-Ch]
  char v10; // [esp+10h] [ebp-8h]
  char v11; // [esp+14h] [ebp-4h]

  v4 = wcschr(Str, (CCINIClass *)0x3A); /*0x6ca742*/
  *v4 = 0; /*0x6ca749*/
  v5 = WideChar::ToLong(Str, 0, 10); /*0x6ca74e*/
  v6 = (BlowStraw *)(v4 + 1); /*0x6ca753*/
  v11 = v5; /*0x6ca759*/
  v7 = wcschr((BlowStraw *)(v4 + 1), (CCINIClass *)0x3A); /*0x6ca762*/
  *v7 = 0; /*0x6ca769*/
  v10 = WideChar::ToLong(v6, 0, 10); /*0x6ca77b*/
  v9 = WideChar::ToLong((BlowStraw *)(v7 + 1), 0, 10); /*0x6ca78c*/
  return sub_6C9940(a2, v11, v10, v9); /*0x6ca7a1*/
}


// ==== 0x006CA7B0  sub_6CA7B0  this=-  sig=ida-proto ====
void __fastcall sub_6CA7B0(wchar_t *String, void **a2)
{
  sub_6C9960(a2, String); /*0x6ca7b3*/
}


// ==== 0x006CA7C0  _DynamicVectorClass_PAVSubTitle::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_SubTitle::sub_6CA7C0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x6ca7c6*/
  *(_DWORD *)(this + 16) = 0; /*0x6ca7c9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6ca7d0*/
  {
    __3_YAXPAX_Z(v2); /*0x6ca7d6*/
    *(_DWORD *)(this + 4) = 0; /*0x6ca7de*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6ca7e1*/
  *(_DWORD *)(this + 8) = 0; /*0x6ca7e4*/
}


// ==== 0x006CA7F0  _DynamicVectorClass_PAVSubTitle::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SubTitle::sub_6CA7F0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6ca7f0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6ca805*/
  else
    return 0; /*0x6ca7f7*/
}


// ==== 0x006CA810  _VectorClass_PAVSubTitle::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SubTitle::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x6ca81a*/
}


// ==== 0x006CA820  _VectorClass_PAVSubTitle::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SubTitle::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x6ca822*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x6ca82d*/
  {
    v3 = 0; /*0x6ca82f*/
    if ( v2 <= 0 ) /*0x6ca833*/
      return 1; /*0x6ca853*/
    v4 = (_DWORD *)this->Items; /*0x6ca835*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6ca83b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6ca844*/
    {
      ++v3; /*0x6ca846*/
      ++v4; /*0x6ca847*/
      if ( v3 >= v2 ) /*0x6ca84c*/
        return 1; /*0x6ca84c*/
    }
  }
  return 0; /*0x6ca84e*/
}


// ==== 0x006CA860  _DynamicVectorClass_PAVSubTitle::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_SubTitle::sub_6CA860(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6ca86c*/
  {
    this->IsInitialized = 0; /*0x6ca872*/
    if ( a3 ) /*0x6ca878*/
      v4 = a3; /*0x6ca88e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6ca88a*/
    this->IsInitialized = 1; /*0x6ca892*/
    if ( !v4 ) /*0x6ca896*/
      return 0; /*0x6ca90a*/
    if ( this->Items ) /*0x6ca898*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x6ca89f*/
      if ( a2 < v5 ) /*0x6ca8a4*/
        v5 = a2; /*0x6ca8a6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6ca8ac*/
        ++i; /*0x6ca8b1*/
      if ( this->IsAllocated ) /*0x6ca8be*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x6ca8c9*/
        this->Items = 0; /*0x6ca8d1*/
      }
    }
    this->Items = v4; /*0x6ca8da*/
    this->DynamicVector_field_0x8 = a2; /*0x6ca8e2*/
    this->IsAllocated = a3 == 0; /*0x6ca8e5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6ca8ee*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x6ca8f1*/
  if ( v7 < this->Items ) /*0x6ca8f9*/
    this->Items = v7; /*0x6ca8fb*/
  return 1; /*0x6ca8fe*/
}


// ==== 0x006CA910  _DynamicVectorClass_PAVSubTitle::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_SubTitle::sub_6CA910(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x6ca910*/
  result = 0; /*0x6ca913*/
  if ( v2 <= 0 ) /*0x6ca918*/
    return -1; /*0x6ca92f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x6ca91e*/
  {
    if ( ++result >= v2 ) /*0x6ca92d*/
      return -1; /*0x6ca92d*/
  }
  return result; /*0x6ca932*/
}


// ==== 0x006CA940  Render_Parse_6CA940  this=VOID_PTR  sig=csp ====
char __fastcall sub_6CA940(int a1, _WORD *a2, int a3)
{
  int v4; // esi
  _WORD *v5; // ebp
  __int16 v7; // [esp+12h] [ebp-6h] BYREF
  int v8; // [esp+14h] [ebp-4h]

  v4 = 0; /*0x6ca94f*/
  v8 = a1; /*0x6ca953*/
  *a2 = 0; /*0x6ca957*/
  if ( a3 <= 0 ) /*0x6ca95c*/
  {
LABEL_9:
    a2[v4] = 0; /*0x6ca996*/
    return 0; /*0x6ca99e*/
  }
  else
  {
    v5 = a2; /*0x6ca95e*/
    while ( (*(int (__thiscall **)(int, __int16 *, int))(*(_DWORD *)a1 + 8))(a1, &v7, 2) == 2 ) /*0x6ca975*/
    {
      if ( v7 == 10 ) /*0x6ca980*/
        goto LABEL_9; /*0x6ca980*/
      if ( v7 != 13 ) /*0x6ca986*/
      {
        *v5 = v7; /*0x6ca988*/
        ++v4; /*0x6ca98c*/
        ++v5; /*0x6ca98d*/
      }
      if ( v4 >= a3 ) /*0x6ca994*/
        goto LABEL_9; /*0x6ca994*/
      a1 = v8; /*0x6ca962*/
    }
    a2[v4] = 0; /*0x6ca9a8*/
    return 1; /*0x6ca9b1*/
  }
}


// ==== 0x006CA9C0  _DynamicVectorClass_PAVSubTitle::Constructor_VectorClass_SubTitle___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_SubTitle::Constructor_VectorClass_SubTitle___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6ca9c3*/
  *Block = &vt_VectorClass_SubTitle; /*0x6ca9c6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6ca9d0*/
  {
    __3_YAXPAX_Z(v3); /*0x6ca9d8*/
    *(Block + 1) = 0; /*0x6ca9e0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6ca9eb*/
  *(Block + 2) = 0; /*0x6ca9f1*/
  if ( (a2 & 1) != 0 ) /*0x6ca9f8*/
    __3_YAXPAX_Z(Block); /*0x6ca9fb*/
  return (DynamicVector *)Block; /*0x6caa05*/
}


// ==== 0x006CAA10  _VectorClass_PAVSubTitle::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SubTitle::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x6caa1c*/
  {
    this->IsInitialized = 0; /*0x6caa26*/
    if ( a3 ) /*0x6caa2c*/
      v4 = a3; /*0x6caa42*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6caa3e*/
    this->IsInitialized = 1; /*0x6caa46*/
    if ( v4 ) /*0x6caa4a*/
    {
      if ( this->Items ) /*0x6caa55*/
      {
        v6 = this->Capacity; /*0x6caa5c*/
        if ( a2 < v6 ) /*0x6caa61*/
          v6 = a2; /*0x6caa63*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6caa69*/
          ++i; /*0x6caa6e*/
        if ( this->IsAllocated ) /*0x6caa7b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x6caa86*/
          this->Items = 0; /*0x6caa8e*/
        }
      }
      this->Items = v4; /*0x6caa97*/
      this->Capacity = a2; /*0x6caa9f*/
      this->IsAllocated = a3 == 0; /*0x6caaa2*/
      return 1; /*0x6caaa8*/
    }
    else
    {
      return 0; /*0x6caa4f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6caab2*/
    return 1; /*0x6caab8*/
  }
}


// ==== 0x006CAAC0  _VectorClass_PAVSubTitle::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_SubTitle::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x6caacd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x6caad3*/
    *(_DWORD *)(this + 4) = 0; /*0x6caadb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6caade*/
  *(_DWORD *)(this + 8) = 0; /*0x6caae1*/
}


// ==== 0x006CAAF0  _VectorClass_PAVSubTitle::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SubTitle::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x6caaf0*/
    return 0; /*0x6caaf8*/
  v3 = *(_DWORD *)(this + 8); /*0x6caafe*/
  result = 0; /*0x6cab01*/
  if ( v3 <= 0 ) /*0x6cab05*/
    return -1; /*0x6cab1c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x6cab0b*/
  {
    if ( ++result >= v3 ) /*0x6cab1a*/
      return -1; /*0x6cab1a*/
  }
  return result; /*0x6caafa*/
}


// ==== 0x006CAB30  _VectorClass_PAVSubTitle::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SubTitle::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6cab30*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6cab45*/
  else
    return 0; /*0x6cab37*/
}


// ==== 0x006CAB50  _VectorClass_PAVSubTitle::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_SubTitle::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6cab53*/
  *Block = &vt_VectorClass_SubTitle; /*0x6cab56*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6cab60*/
  {
    __3_YAXPAX_Z(v3); /*0x6cab68*/
    *(Block + 1) = 0; /*0x6cab70*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6cab7b*/
  *(Block + 2) = 0; /*0x6cab81*/
  if ( (a2 & 1) != 0 ) /*0x6cab88*/
    __3_YAXPAX_Z(Block); /*0x6cab8b*/
  return (VectorClass *)Block; /*0x6cab95*/
}


// ==== 0x006CABA0  VectorClass::Render_Parse_6CABA0  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_6CABA0(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x6cabab*/
  this->Capacity = a2; /*0x6cabae*/
  this->q030 = 1; /*0x6cabb1*/
  this->__pad_034 = 0; /*0x6cabb5*/
  *this = &vt_VectorClass_SubTitle; /*0x6cabb8*/
  if ( a2 ) /*0x6cabbe*/
  {
    if ( a3 ) /*0x6cabc6*/
    {
      this->Items = a3; /*0x6cabc8*/
      return this; /*0x6cabce*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x6cabdd*/
    this->__pad_034 = 1; /*0x6cabe0*/
  }
  return this; /*0x6cabcd*/
}


// ==== 0x006CABF0  sub_6CABF0  this=-  sig=ida-proto ====
int sub_6CABF0()
{
  MEMORY[0xB0BFF0] = 0; /*0x6cabf2*/
  MEMORY[0xB0BFF4] = 0; /*0x6cabf7*/
  MEMORY[0xB0BFF8] = 0; /*0x6cabfc*/
  MEMORY[0xB0BFFC] = 0; /*0x6cac01*/
  return 0; /*0x6cac06*/
}


// ==== 0x006CAC10  sub_6CAC10  this=-  sig=ida-proto ====
void sub_6CAC10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6cac1c*/
  MEMORY[0xB0C008] = Math::Sqrt(v0 + v0); /*0x6cac2e*/
}


// ==== 0x006CAC40  sub_6CAC40  this=-  sig=ida-proto ====
void sub_6CAC40()
{
  MEMORY[0xB0C080] = MEMORY[0xB0C008] / 60.0; /*0x6cac4c*/
}


// ==== 0x006CAC60  sub_6CAC60  this=-  sig=ida-proto ====
void sub_6CAC60()
{
  MEMORY[0xB0C068] = 1.0 / MEMORY[0xB0C080]; /*0x6cac6c*/
}


// ==== 0x006CAC80  sub_6CAC80  this=-  sig=ida-proto ====
void sub_6CAC80()
{
  MEMORY[0xB0C060] = 0.0174532925199433 * 45.0; /*0x6cac8c*/
}


// ==== 0x006CACA0  sub_6CACA0  this=-  sig=ida-proto ====
void sub_6CACA0()
{
  MEMORY[0xB0C010] = 0.0174532925199433 * 60.0; /*0x6cacac*/
}


// ==== 0x006CACC0  sub_6CACC0  this=-  sig=ida-proto ====
void sub_6CACC0()
{
  MEMORY[0xB0BFE8] = 0.0174532925199433 * 90.0; /*0x6caccc*/
}


// ==== 0x006CACE0  sub_6CACE0  this=-  sig=ida-proto ====
__int64 sub_6CACE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0BFE8] - MEMORY[0xB0C010]); /*0x6cacf2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0C008] * 0.5); /*0x6cad06*/
  MEMORY[0xB0C088] = result; /*0x6cad0b*/
  return result; /*0x6cad10*/
}


// ==== 0x006CAD20  sub_6CAD20  this=-  sig=ida-proto ====
void sub_6CAD20()
{
  MEMORY[0xB0C018] = Math::ArcTan((double)MEMORY[0xB0C088] * 0.00390625); /*0x6cad37*/
}


// ==== 0x006CAD50  sub_6CAD50  this=-  sig=ida-proto ====
void sub_6CAD50()
{
  MEMORY[0xB0C030] = Math::ArcTan((double)(2 * MEMORY[0xB0C088]) / MEMORY[0xB0C008]); /*0x6cad72*/
}


// ==== 0x006CAD80  sub_6CAD80  this=-  sig=ida-proto ====
__int64 sub_6CAD80()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0C088]) + 0.5); /*0x6cad9b*/
  MEMORY[0xB0C07C] = result; /*0x6cada0*/
  return result; /*0x6cada6*/
}


// ==== 0x006CADB0  sub_6CADB0  this=-  sig=ida-proto ====
int sub_6CADB0()
{
  MEMORY[0xB0C000] = 0; /*0x6cadb2*/
  return 0; /*0x6cadbe*/
}


// ==== 0x006CADC0  sub_6CADC0  this=-  sig=ida-proto ====
int sub_6CADC0()
{
  MEMORY[0xB0C020] = 0; /*0x6cadc2*/
  MEMORY[0xB0C024] = 0; /*0x6cadc7*/
  MEMORY[0xB0C028] = 0; /*0x6cadcc*/
  return 0; /*0x6cadd1*/
}


// ==== 0x006CADE0  sub_6CADE0  this=-  sig=ida-proto ====
int sub_6CADE0()
{
  MEMORY[0xB0C078] = 0; /*0x6cade5*/
  MEMORY[0xB0C070] = 128; /*0x6cadef*/
  MEMORY[0xB0C074] = 128; /*0x6cadf4*/
  return 128; /*0x6cadf9*/
}


// ==== 0x006CAE00  sub_6CAE00  this=-  sig=ida-proto ====
int sub_6CAE00()
{
  MEMORY[0xB0C038] = 0; /*0x6cae1b*/
  MEMORY[0xB0C03C] = 1; /*0x6cae2a*/
  MEMORY[0xB0C040] = -65535; /*0x6cae45*/
  MEMORY[0xB0C044] = -65536; /*0x6cae59*/
  MEMORY[0xB0C048] = -1; /*0x6cae6d*/
  MEMORY[0xB0C050] = 0x1FFFF; /*0x6cae98*/
  MEMORY[0xB0C04C] = 0xFFFF; /*0x6caeab*/
  MEMORY[0xB0C054] = 0x10000; /*0x6caeb1*/
  MEMORY[0xB0C058] = 65537; /*0x6caeb7*/
  return 65537; /*0x6caebe*/
}


// ==== 0x006CAEC0  SuperClass::Constructor  this=SuperClass  sig=csp ====
int __thiscall sub_6CAEC0(int this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6caec3*/
  *(_DWORD *)(this + 36) = -1; /*0x6caecd*/
  *(_DWORD *)(this + 40) = 0; /*0x6caed0*/
  *(_DWORD *)(this + 44) = 0; /*0x6caed3*/
  *(_DWORD *)(this + 48) = MEMORY[0xA8ED84]; /*0x6caedc*/
  *(_DWORD *)(this + 56) = 0; /*0x6caedf*/
  *(_DWORD *)(this + 72) = 0; /*0x6caee2*/
  *(_BYTE *)(this + 64) = 0; /*0x6caee5*/
  *(_DWORD *)(this + 76) = 0; /*0x6caee8*/
  *(_DWORD *)(this + 80) = -1; /*0x6caeeb*/
  *(_BYTE *)(this + 96) = 1; /*0x6caeee*/
  *(_DWORD *)(this + 98) = MEMORY[0xB0C000]; /*0x6caef8*/
  *(_DWORD *)(this + 104) = 0; /*0x6caefb*/
  *(_BYTE *)(this + 108) = 0; /*0x6caefe*/
  *(_BYTE *)(this + 109) = 0; /*0x6caf01*/
  *(_BYTE *)(this + 110) = 0; /*0x6caf04*/
  *(_BYTE *)(this + 111) = 0; /*0x6caf07*/
  *(_BYTE *)(this + 112) = 0; /*0x6caf0a*/
  *(_DWORD *)(this + 124) = -1; /*0x6caf0d*/
  *(_DWORD *)this = &SuperClass::`vftable'; /*0x6caf10*/
  *(_DWORD *)(this + 4) = &SuperClass::`vftable'; /*0x6caf16*/
  *(_DWORD *)(this + 8) = &SuperClass::`vftable'; /*0x6caf1d*/
  *(_DWORD *)(this + 12) = &vt_SuperClass; /*0x6caf24*/
  *(_DWORD *)(this + 60) = &MEMORY[0x887734]; /*0x6caf2b*/
  if ( dword_A83CC8 < dword_A83CC0 /*0x6caf64*/
    || (byte_A83CC5 || !dword_A83CC0)
    && dword_A83CCC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83CB8 + 8))(
         &dword_A83CB8,
         dword_A83CC0 + dword_A83CCC,
         0) )
  {
    v2 = dword_A83CC8++; /*0x6caf71*/
    *((_DWORD *)dword_A83CBC + v2) = this; /*0x6caf80*/
  }
  return this; /*0x6caf85*/
}


// ==== 0x006CAF90  SuperClass::Construct  this=SuperClass  sig=csp ====
int __thiscall SuperClass::Construct(int this, int a2, CCINIClass *aP2)
{
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6caf94*/
  *(_DWORD *)(this + 40) = a2; /*0x6cafa4*/
  *(_DWORD *)(this + 36) = -1; /*0x6cafa7*/
  *(_DWORD *)(this + 44) = aP2; /*0x6cafaa*/
  *(_DWORD *)(this + 48) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x6cafb5*/
  *(_DWORD *)(this + 56) = 0; /*0x6cafb8*/
  *(_DWORD *)(this + 72) = 0; /*0x6cafbb*/
  *(_BYTE *)(this + 64) = 0; /*0x6cafbe*/
  *(_DWORD *)(this + 76) = 0; /*0x6cafc1*/
  *(_DWORD *)(this + 80) = -1; /*0x6cafc4*/
  *(_BYTE *)(this + 96) = 1; /*0x6cafc7*/
  v4 = *(_DWORD *)&stru_B05488.__pad_579C[5084]; /*0x6cafcb*/
  *(_DWORD *)(this + 120) = -1; /*0x6cafd1*/
  *(_DWORD *)(this + 124) = -1; /*0x6cafd4*/
  *(_DWORD *)(this + 98) = v4; /*0x6cafda*/
  *(_DWORD *)(this + 104) = 0; /*0x6cafde*/
  *(_BYTE *)(this + 108) = 0; /*0x6cafe1*/
  *(_BYTE *)(this + 109) = 0; /*0x6cafe4*/
  *(_BYTE *)(this + 110) = 0; /*0x6cafe7*/
  *(_BYTE *)(this + 111) = 0; /*0x6cafea*/
  *(_BYTE *)(this + 112) = 0; /*0x6cafed*/
  *(_DWORD *)(this + 116) = -100; /*0x6caff0*/
  *(_DWORD *)this = &SuperClass::`vftable'; /*0x6caff7*/
  *(_DWORD *)(this + 4) = &SuperClass::`vftable'; /*0x6caffd*/
  *(_DWORD *)(this + 8) = &SuperClass::`vftable'; /*0x6cb003*/
  *(_DWORD *)(this + 12) = &vt_SuperClass; /*0x6cb00a*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x6cb011*/
  if ( dword_A83CC8 < dword_A83CC0 /*0x6cb049*/
    || (byte_A83CC5 || !dword_A83CC0)
    && dword_A83CCC > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))dword_A83CB8->field_8)(
         &dword_A83CB8,
         dword_A83CC0 + dword_A83CCC,
         0) )
  {
    v5 = dword_A83CC8++; /*0x6cb056*/
    *(_DWORD *)&dword_A83CBC->__pad_0[4 * v5] = this; /*0x6cb065*/
  }
  if ( *(int *)&stru_B05488.__pad_579C[19036] < *(int *)&stru_B05488.__pad_579C[19028] /*0x6cb09c*/
    || (stru_B05488.__pad_579C[19033] || !*(_DWORD *)&stru_B05488.__pad_579C[19028])
    && *(int *)&stru_B05488.__pad_579C[19040] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19020] + 8))(
         &stru_B05488.__pad_579C[19020],
         *(_DWORD *)&stru_B05488.__pad_579C[19028] + *(_DWORD *)&stru_B05488.__pad_579C[19040],
         0) )
  {
    v6 = (*(_DWORD *)&stru_B05488.__pad_579C[19036])++; /*0x6cb0a9*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024] + 4 * v6) = this; /*0x6cb0b8*/
  }
  if ( *(int *)&stru_B05488.__pad_579C[19124] < *(int *)&stru_B05488.__pad_579C[19116] /*0x6cb0ef*/
    || (stru_B05488.__pad_579C[19121] || !*(_DWORD *)&stru_B05488.__pad_579C[19116])
    && *(int *)&stru_B05488.__pad_579C[19128] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19108] + 8))(
         &stru_B05488.__pad_579C[19108],
         *(_DWORD *)&stru_B05488.__pad_579C[19116] + *(_DWORD *)&stru_B05488.__pad_579C[19128],
         0) )
  {
    v7 = (*(_DWORD *)&stru_B05488.__pad_579C[19124])++; /*0x6cb0fc*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19112] + 4 * v7) = this; /*0x6cb10b*/
  }
  return this; /*0x6cb110*/
}


// ==== 0x006CB120  SuperClass::CleanupMembers  this=SuperClass  sig=csp ====
void __thiscall sub_6CB120(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [esp+14h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 104); /*0x6cb124*/
  *(_DWORD *)this = &SuperClass::`vftable'; /*0x6cb127*/
  *(_DWORD *)(this + 4) = &SuperClass::`vftable'; /*0x6cb12f*/
  *(_DWORD *)(this + 8) = &SuperClass::`vftable'; /*0x6cb136*/
  *(_DWORD *)(this + 12) = &vt_SuperClass; /*0x6cb13d*/
  if ( v2 ) /*0x6cb144*/
  {
    *(_BYTE *)(v2 + 405) = 0; /*0x6cb146*/
    *(_DWORD *)(this + 104) = 0; /*0x6cb14d*/
    v9 = this; /*0x6cb164*/
    v3 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], &v9); /*0x6cb168*/
    if ( v3 != -1 ) /*0x6cb16e*/
      DynamicVector::RemoveItem(&MEMORY[0xB0F5B8], v3); /*0x6cb176*/
  }
  if ( *(_BYTE *)(this + 108) ) /*0x6cb17b*/
  {
    v9 = this; /*0x6cb192*/
    v4 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], &v9); /*0x6cb196*/
    if ( v4 != -1 ) /*0x6cb19c*/
      DynamicVector::RemoveItem(&MEMORY[0xB0F5B8], v4); /*0x6cb1a4*/
    *(_BYTE *)(this + 108) = 0; /*0x6cb1a9*/
  }
  v9 = this; /*0x6cb1bd*/
  v5 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xA83D50] + 16))(&MEMORY[0xA83D50], &v9); /*0x6cb1c1*/
  if ( v5 != -1 && v5 < MEMORY[0xA83D60] && v5 < --MEMORY[0xA83D60] ) /*0x6cb1dc*/
  {
    do /*0x6cb1f4*/
    {
      ++v5; /*0x6cb1e4*/
      *((_DWORD *)MEMORY[0xA83D54] + v5 - 1) = *((_DWORD *)MEMORY[0xA83D54] + v5); /*0x6cb1e8*/
    }
    while ( v5 < MEMORY[0xA83D60] ); /*0x6cb1f4*/
  }
  v9 = this; /*0x6cb206*/
  v6 = (*(int (__thiscall **)(int *, int *))(dword_A83CB8 + 16))(&dword_A83CB8, &v9); /*0x6cb20a*/
  if ( v6 != -1 && v6 < dword_A83CC8 && v6 < --dword_A83CC8 ) /*0x6cb225*/
  {
    do /*0x6cb23d*/
    {
      ++v6; /*0x6cb22d*/
      *((_DWORD *)dword_A83CBC + v6 - 1) = *((_DWORD *)dword_A83CBC + v6); /*0x6cb231*/
    }
    while ( v6 < dword_A83CC8 ); /*0x6cb23d*/
  }
  v9 = this; /*0x6cb24f*/
  v7 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v9); /*0x6cb253*/
  if ( v7 != -1 && v7 < MEMORY[0xB0F680] && v7 < --MEMORY[0xB0F680] ) /*0x6cb26e*/
  {
    do /*0x6cb286*/
    {
      ++v7; /*0x6cb276*/
      *((_DWORD *)MEMORY[0xB0F674] + v7 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v7); /*0x6cb27a*/
    }
    while ( v7 < MEMORY[0xB0F680] ); /*0x6cb286*/
  }
  v9 = this; /*0x6cb298*/
  v8 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F6C8] + 16))(&MEMORY[0xB0F6C8], &v9); /*0x6cb29c*/
  if ( v8 != -1 && v8 < MEMORY[0xB0F6D8] && v8 < --MEMORY[0xB0F6D8] ) /*0x6cb2b7*/
  {
    do /*0x6cb2cf*/
    {
      ++v8; /*0x6cb2bf*/
      *((_DWORD *)MEMORY[0xB0F6CC] + v8 - 1) = *((_DWORD *)MEMORY[0xB0F6CC] + v8); /*0x6cb2c3*/
    }
    while ( v8 < MEMORY[0xB0F6D8] ); /*0x6cb2cf*/
  }
  AbstractClass::DTOR((_DWORD *)this); /*0x6cb2d3*/
}


// ==== 0x006CB3A0  SuperClass::CreateChronoAnim  this=SuperClass  sig=csp ====
void **__thiscall SuperClass::CreateChronoAnim(int this, AbstractClass *aP1, SuperClass *aP2, int a4)
{
  AnimClass *v5; // eax
  IUnknown *v6; // eax
  IUnknown *v7; // eax
  void **result; // eax
  int v9; // [esp+4h] [ebp-10h] BYREF
  CoordStruct aP2a; // [esp+8h] [ebp-Ch] BYREF

  v5 = *(AnimClass **)(this + 104); /*0x6cb3a6*/
  if ( v5 ) /*0x6cb3ab*/
  {
    v5->__pad_194[1] = 0; /*0x6cb3ad*/
    *(_DWORD *)(this + 104) = 0; /*0x6cb3b4*/
    v9 = this; /*0x6cb3cb*/
    v6 = (IUnknown *)(*(int (__thiscall **)(char *, int *))(*(_DWORD *)&stru_B05488.__pad_579C[18836] + 16))( /*0x6cb3cf*/
                       &stru_B05488.__pad_579C[18836],
                       &v9);
    if ( v6 != (IUnknown *)-1 ) /*0x6cb3d5*/
      DynamicVector::RemoveItem(&stru_B05488.__pad_579C[18836], v6); /*0x6cb3dd*/
  }
  if ( *(_BYTE *)(this + 108) ) /*0x6cb3e2*/
  {
    v9 = this; /*0x6cb3f9*/
    v7 = (IUnknown *)(*(int (__thiscall **)(char *, int *))(*(_DWORD *)&stru_B05488.__pad_579C[18836] + 16))( /*0x6cb3fd*/
                       &stru_B05488.__pad_579C[18836],
                       &v9);
    if ( v7 != (IUnknown *)-1 ) /*0x6cb403*/
      DynamicVector::RemoveItem(&stru_B05488.__pad_579C[18836], v7); /*0x6cb40b*/
    *(_BYTE *)(this + 108) = 0; /*0x6cb410*/
  }
  result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6cb419*/
  if ( result ) /*0x6cb423*/
  {
    aP2a.X = (int)aP1; /*0x6cb444*/
    aP2a.Y = (int)aP2; /*0x6cb455*/
    aP2a.Z = a4 + 5; /*0x6cb459*/
    result = (void **)AnimClass::ctor( /*0x6cb467*/
                        result,
                        *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 816),
                        &aP2a,
                        0,
                        (CoordStruct *)1,
                        (void *)0x600,
                        0,
                        0);
    if ( result ) /*0x6cb470*/
    {
      *(_DWORD *)(this + 104) = result; /*0x6cb472*/
      result = *(void ***)&stru_B05488.__pad_579C[18844]; /*0x6cb475*/
      if ( *(int *)&stru_B05488.__pad_579C[18852] < *(int *)&stru_B05488.__pad_579C[18844] /*0x6cb4ae*/
        || (stru_B05488.__pad_579C[18849] || !*(_DWORD *)&stru_B05488.__pad_579C[18844])
        && *(int *)&stru_B05488.__pad_579C[18856] > 0
        && (result = (void **)(*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[18836] + 8))(
                                &stru_B05488.__pad_579C[18836],
                                *(_DWORD *)&stru_B05488.__pad_579C[18844] + *(_DWORD *)&stru_B05488.__pad_579C[18856],
                                0),
            (_BYTE)result) )
      {
        result = (void **)(*(_DWORD *)&stru_B05488.__pad_579C[18852])++; /*0x6cb4b6*/
        *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18840] + 4 * (_DWORD)result) = this; /*0x6cb4c5*/
      }
    }
  }
  return result; /*0x6cb4c8*/
}


// ==== 0x006CB4D0  SuperClass::SetOnHold  this=VOID_PTR  sig=csp ====
char __thiscall SuperClass::SetOnHold(int this, CoordStruct *aP1)
{
  IUnknown *v3; // esi
  int v4; // eax
  int v5; // eax

  if ( !*(_BYTE *)(this + 109) /*0x6cb4ea*/
    || *(_BYTE *)(this + 110)
    || (_BYTE)aP1 == *(_BYTE *)(this + 112)
    || !*(_BYTE *)(this + 96) )
  {
    return 0; /*0x6cb552*/
  }
  if ( (_BYTE)aP1 || *(_BYTE *)(*(_DWORD *)(this + 40) + 245) ) /*0x6cb4f9*/
  {
    v3 = *(IUnknown **)(this + 48); /*0x6cb51c*/
    if ( v3 != (IUnknown *)-1 ) /*0x6cb522*/
    {
      v4 = *(_DWORD *)(this + 56); /*0x6cb524*/
      if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (int)v3 >= v4 ) /*0x6cb536*/
        v5 = 0; /*0x6cb53c*/
      else
        v5 = v4 - (*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (_DWORD)v3); /*0x6cb538*/
      *(_DWORD *)(this + 56) = v5; /*0x6cb53e*/
      *(_DWORD *)(this + 48) = -1; /*0x6cb541*/
    }
  }
  else if ( *(_DWORD *)(this + 48) == -1 ) /*0x6cb507*/
  {
    *(_DWORD *)(this + 48) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6cb510*/
    *(_BYTE *)(this + 112) = 0; /*0x6cb513*/
    return 1; /*0x6cb519*/
  }
  *(_BYTE *)(this + 112) = (_BYTE)aP1; /*0x6cb548*/
  return 1; /*0x6cb518*/
}


// ==== 0x006CB560  SuperClass::StartTimer  this=AbstractClass  sig=csp ====
char __thiscall SuperClass::StartTimer(int this, IUnknown *aP1, IUnknown *aP2, IUnknown *aP3)
{
  char v5; // al
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  TerrainTypeClass *v11; // eax
  IUnknown *v12; // ecx
  int v13; // edx
  int v14; // edi
  int v15; // eax
  DynamicVector *DefaultTimer; // eax
  int v17; // eax
  DynamicVector *v18; // ecx
  int v19; // edx
  int v21; // [esp+8h] [ebp-Ch] BYREF
  int v22; // [esp+Ch] [ebp-8h]
  DynamicVector *v23; // [esp+10h] [ebp-4h]

  if ( !*(_BYTE *)(this + 109) ) /*0x6cb569*/
  {
    v5 = (char)aP1; /*0x6cb572*/
    v6 = *(_DWORD *)(this + 40); /*0x6cb576*/
    *(_BYTE *)(this + 109) = 1; /*0x6cb579*/
    *(_BYTE *)(this + 110) = v5; /*0x6cb57d*/
    *(_BYTE *)(this + 64) = 0; /*0x6cb580*/
    v7 = *(_DWORD *)(v6 + 96); /*0x6cb583*/
    LOBYTE(aP1) = 0; /*0x6cb589*/
    *(_DWORD *)(this + 60) = v7; /*0x6cb58d*/
    if ( !v5 && *(_BYTE *)(this + 112) && *(_BYTE *)(this + 96) ) /*0x6cb597*/
    {
      if ( *(_BYTE *)(v6 + 245) ) /*0x6cb59c*/
      {
        if ( *(_DWORD *)(this + 48) != -1 ) /*0x6cb5bd*/
        {
          *(_DWORD *)(this + 56) = CDTimerClass::TimeRemaining((int *)(this + 48)); /*0x6cb5c6*/
          *(_DWORD *)(this + 48) = -1; /*0x6cb5c9*/
        }
      }
      else if ( *(_DWORD *)(this + 48) == -1 ) /*0x6cb5a8*/
      {
        *(_DWORD *)(this + 48) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6cb5af*/
      }
      *(_BYTE *)(this + 112) = 0; /*0x6cb5cf*/
    }
    if ( *(_BYTE *)(*(_DWORD *)(this + 40) + 244) /*0x6cb61f*/
      && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 44) + 52) + 422)
      && (MEMORY[0xA83D60] < MEMORY[0xA83D58]
       || (MEMORY[0xA83D5D] || !MEMORY[0xA83D58])
       && MEMORY[0xA83D64] > 0
       && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))MEMORY[0xA83D50]->field_8)(
            &MEMORY[0xA83D50],
            MEMORY[0xA83D58] + MEMORY[0xA83D64],
            0)) )
    {
      v8 = MEMORY[0xA83D60]++; /*0x6cb62c*/
      *(_DWORD *)&MEMORY[0xA83D54]->__pad_0[4 * v8] = this; /*0x6cb63b*/
    }
    v9 = *(_DWORD *)(this + 40); /*0x6cb63e*/
    if ( *(_BYTE *)(v9 + 245) ) /*0x6cb641*/
    {
      v10 = *(_DWORD *)(this + 36); /*0x6cb649*/
      *(_DWORD *)(this + 120) = -1; /*0x6cb64c*/
      if ( v10 == -1 ) /*0x6cb656*/
        v10 = *(_DWORD *)(v9 + 176); /*0x6cb658*/
      v11 = (TerrainTypeClass *)(this + 48); /*0x6cb664*/
      *(_DWORD *)(this + 48) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6cb669*/
      *(_DWORD *)(this + 52) = v22; /*0x6cb66f*/
      *(_DWORD *)(this + 56) = v10; /*0x6cb672*/
      v12 = *(IUnknown **)(this + 48); /*0x6cb675*/
      if ( v12 != (IUnknown *)-1 ) /*0x6cb67a*/
      {
        v13 = *(_DWORD *)(this + 56); /*0x6cb680*/
        v14 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (_DWORD)v12; /*0x6cb68e*/
        if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (int)v12 >= v13 ) /*0x6cb692*/
        {
          *(_DWORD *)(this + 56) = 0; /*0x6cb6a6*/
          *(_DWORD *)v11->__pad_0 = -1; /*0x6cb6a9*/
        }
        else
        {
          *(_DWORD *)v11->__pad_0 = -1; /*0x6cb696*/
          *(_DWORD *)(this + 56) = v13 - v14; /*0x6cb69c*/
        }
      }
    }
    else
    {
      v15 = *(_DWORD *)(this + 104); /*0x6cb6b4*/
      if ( v15 ) /*0x6cb6b9*/
      {
        *(_BYTE *)(v15 + 405) = 0; /*0x6cb6bf*/
        *(_DWORD *)(this + 104) = 0; /*0x6cb6cb*/
        aP1 = (IUnknown *)this; /*0x6cb6ce*/
        VectorClass::RemoveAt((int *)&MEMORY[0xB077F8].__pad_579C[9764], (int)&aP1); /*0x6cb6d2*/
      }
      if ( *(_BYTE *)(this + 108) ) /*0x6cb6d7*/
      {
        aP1 = (IUnknown *)this; /*0x6cb6e6*/
        VectorClass::RemoveAt((int *)&MEMORY[0xB077F8].__pad_579C[9764], (int)&aP1); /*0x6cb6ea*/
        *(_BYTE *)(this + 108) = 0; /*0x6cb6ef*/
      }
      if ( !*(_BYTE *)(this + 109) /*0x6cb704*/
        || *(_BYTE *)(this + 111)
        || *(_BYTE *)(this + 112) && !*(_BYTE *)(*(_DWORD *)(this + 40) + 237) )
      {
        LOBYTE(aP1) = 0; /*0x6cb757*/
      }
      else
      {
        *(_DWORD *)(this + 120) = -1; /*0x6cb70f*/
        SuperClass::SetCurrentFrame((_DWORD *)(this + 48)); /*0x6cb718*/
        DefaultTimer = (DynamicVector *)Super::GetDefaultTimer((_DWORD *)this); /*0x6cb71f*/
        Timer::Start(&v21, DefaultTimer); /*0x6cb729*/
        v17 = v22; /*0x6cb732*/
        v18 = v23; /*0x6cb736*/
        *(_DWORD *)(this + 48) = v21; /*0x6cb73a*/
        v19 = *(_DWORD *)(this + 40); /*0x6cb73c*/
        *(_DWORD *)(this + 52) = v17; /*0x6cb73f*/
        *(_DWORD *)(this + 56) = v18; /*0x6cb742*/
        if ( *(_BYTE *)(v19 + 229) ) /*0x6cb745*/
          *(_DWORD *)(this + 124) = 0; /*0x6cb74d*/
        LOBYTE(aP1) = 1; /*0x6cb750*/
      }
    }
    if ( (_BYTE)aP3 && *(_BYTE *)(this + 109) ) /*0x6cb764*/
    {
      if ( *(_BYTE *)(this + 110) ) /*0x6cb769*/
        goto LABEL_45; /*0x6cb76c*/
      if ( *(_BYTE *)(this + 112) != 1 ) /*0x6cb772*/
      {
        if ( *(_BYTE *)(this + 96) ) /*0x6cb774*/
        {
          SuperClass::AdvanceCountdown((int *)(this + 48)); /*0x6cb77c*/
          *(_BYTE *)(this + 112) = 1; /*0x6cb781*/
        }
      }
    }
    if ( !*(_BYTE *)(this + 110) ) /*0x6cb788*/
      return (char)aP1; /*0x6cb79f*/
LABEL_45:
    SuperClass::AnnounceReady(this, (DynamicVector *)aP2); /*0x6cb78a*/
    return (char)aP1; /*0x6cb791*/
  }
  return 0; /*0x6cb79a*/
}


// ==== 0x006CB7B0  SuperClass::Lose  this=int  sig=csp ====
char __thiscall SuperClass::Lose(_BYTE *this)
{
  int v1; // eax
  _BYTE *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this; /*0x6cb7b0*/
  if ( !*(this + 109) ) /*0x6cb7b1*/
    return 0; /*0x6cb80d*/
  *(this + 111) = 0; /*0x6cb7ba*/
  *(this + 109) = 0; /*0x6cb7bd*/
  v3 = this; /*0x6cb7ca*/
  v1 = (*(int (__thiscall **)(int *, _BYTE **))(MEMORY[0xA83D50] + 16))(&MEMORY[0xA83D50], &v3); /*0x6cb7d4*/
  if ( v1 != -1 && v1 < MEMORY[0xA83D60] && v1 < --MEMORY[0xA83D60] ) /*0x6cb7ef*/
  {
    do /*0x6cb807*/
    {
      ++v1; /*0x6cb7f7*/
      *((_DWORD *)MEMORY[0xA83D54] + v1 - 1) = *((_DWORD *)MEMORY[0xA83D54] + v1); /*0x6cb7fb*/
    }
    while ( v1 < MEMORY[0xA83D60] ); /*0x6cb807*/
  }
  return 1; /*0x6cb80c*/
}


// ==== 0x006CB820  SuperClass::SetReadiness  this=int  sig=csp ====
char __thiscall SuperClass::SetReadiness(_BYTE *this, char a2)
{
  *(this + 111) = a2; /*0x6cb824*/
  return a2; /*0x6cb827*/
}


// ==== 0x006CB830  SuperClass::StopPreclickAnim  this=int  sig=csp ====
char __thiscall SuperClass::StopPreclickAnim(int this, IUnknown *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  _DWORD v8[4]; // [esp+8h] [ebp-10h] BYREF

  v3 = *(_DWORD *)(this + 104); /*0x6cb839*/
  if ( v3 ) /*0x6cb83e*/
  {
    *(_BYTE *)(v3 + 405) = 0; /*0x6cb840*/
    *(_DWORD *)(this + 104) = 0; /*0x6cb846*/
    v8[0] = this; /*0x6cb859*/
    v4 = (*(int (__thiscall **)(char *, _DWORD *))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9764] + 16))( /*0x6cb85d*/
           &MEMORY[0xB077F8].__pad_579C[9764],
           v8);
    if ( v4 != -1 ) /*0x6cb863*/
      DynamicVector::RemoveItem(&MEMORY[0xB077F8].__pad_579C[9764], v4); /*0x6cb86b*/
  }
  if ( *(_BYTE *)(this + 108) ) /*0x6cb870*/
  {
    v8[0] = this; /*0x6cb885*/
    v5 = (*(int (__thiscall **)(char *, _DWORD *))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9764] + 16))( /*0x6cb889*/
           &MEMORY[0xB077F8].__pad_579C[9764],
           v8);
    if ( v5 != -1 ) /*0x6cb88f*/
      DynamicVector::RemoveItem(&MEMORY[0xB077F8].__pad_579C[9764], v5); /*0x6cb897*/
    *(_BYTE *)(this + 108) = 0; /*0x6cb89c*/
  }
  if ( !*(_BYTE *)(this + 109) /*0x6cb8b1*/
    || *(_BYTE *)(this + 111)
    || *(_BYTE *)(this + 112) && !*(_BYTE *)(*(_DWORD *)(this + 40) + 237) )
  {
    return 0; /*0x6cb90d*/
  }
  *(_DWORD *)(this + 120) = -1; /*0x6cb8b9*/
  if ( *(_DWORD *)(this + 48) == -1 ) /*0x6cb8c6*/
    *(_DWORD *)(this + 48) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6cb8ce*/
  v6 = *(_DWORD *)(this + 36); /*0x6cb8d1*/
  if ( v6 == -1 ) /*0x6cb8d7*/
    v6 = *(_DWORD *)(*(_DWORD *)(this + 40) + 176); /*0x6cb8dc*/
  *(_DWORD *)(this + 48) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6cb8e7*/
  *(_DWORD *)(this + 52) = v8[2]; /*0x6cb8ee*/
  *(_DWORD *)(this + 56) = v6; /*0x6cb8f1*/
  if ( *(_BYTE *)(*(_DWORD *)(this + 40) + 229) ) /*0x6cb8f7*/
    *(_DWORD *)(this + 124) = 0; /*0x6cb8ff*/
  return 1; /*0x6cb902*/
}


// ==== 0x006CB920  SuperClass::ClickFire  this=int  sig=csp ====
char __thiscall SuperClass::ClickFire(int this, int a2, __int16 *a3)
{
  int v4; // eax
  int v5; // eax
  __int16 *v6; // eax
  int v7; // edx
  int v8; // ecx
  wchar_t *v9; // edi
  wchar_t **v10; // esi
  wchar_t *v11; // eax
  int v13; // edi
  int v14; // edx
  int v15; // eax
  wchar_t *v16; // ebp
  int v17; // eax
  int v18; // edx
  wchar_t **v19; // edi
  int v20; // eax
  char v21; // al
  int v22; // eax
  int v23; // ecx
  wchar_t *v24; // eax
  wchar_t *v25; // eax
  int v26; // ecx
  char *v27; // edx
  int v28; // eax
  int v29; // ecx
  wchar_t *v30; // [esp+14h] [ebp-8h]

  v4 = *(_DWORD *)(this + 40); /*0x6cb92a*/
  if ( *(_BYTE *)(v4 + 229) ) /*0x6cb92d*/
  {
    if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 44)) ) /*0x6cb93c*/
    {
      v5 = *(_DWORD *)(this + 124); /*0x6cb949*/
      if ( v5 == 2 ) /*0x6cb94f*/
      {
        v6 = *(__int16 **)(this + 36); /*0x6cb951*/
        *(_DWORD *)(this + 124) = 1; /*0x6cb954*/
        if ( v6 == (__int16 *)-1 ) /*0x6cb95e*/
          a3 = *(__int16 **)(*(_DWORD *)(this + 40) + 176); /*0x6cb96f*/
        else
          a3 = v6; /*0x6cb960*/
        v7 = *(_DWORD *)(this + 48); /*0x6cb973*/
        v8 = *(_DWORD *)(this + 56); /*0x6cb976*/
        v9 = MEMORY[0xA8ED84]; /*0x6cb979*/
        v10 = (wchar_t **)(this + 48); /*0x6cb97f*/
        if ( v7 != -1 ) /*0x6cb985*/
        {
          if ( (int)MEMORY[0xA8ED84] - v7 >= v8 ) /*0x6cb98d*/
          {
            a2 = 0; /*0x6cb9c7*/
            goto LABEL_11; /*0x6cb9cb*/
          }
          v8 -= (int)MEMORY[0xA8ED84] - v7; /*0x6cb98f*/
        }
        a2 = v8; /*0x6cb991*/
LABEL_11:
        v11 = (wchar_t *)Math::RoundToInt((double)(int)a3 - (double)a2 /*0x6cb995*/
                                                          / *(double *)&MEMORY[0x8871E0]->WallBuildSpeedCoefficient[2]);
        *v10 = v9; /*0x6cb9b4*/
        v10[1] = v30; /*0x6cb9b6*/
        v10[2] = v11; /*0x6cb9b9*/
        return 0; /*0x6cb9c4*/
      }
      if ( v5 == 1 ) /*0x6cb9d0*/
      {
        v13 = *(_DWORD *)(this + 36); /*0x6cb9d6*/
        *(_DWORD *)(this + 124) = 2; /*0x6cb9d9*/
        if ( v13 == -1 ) /*0x6cb9e3*/
          v13 = *(_DWORD *)(*(_DWORD *)(this + 40) + 176); /*0x6cb9e8*/
        v14 = *(_DWORD *)(this + 48); /*0x6cb9ee*/
        v15 = *(_DWORD *)(this + 56); /*0x6cb9f1*/
        v16 = MEMORY[0xA8ED84]; /*0x6cb9f5*/
        if ( v14 != -1 ) /*0x6cb9fe*/
        {
          if ( (int)MEMORY[0xA8ED84] - v14 >= v15 ) /*0x6cba06*/
            v15 = 0; /*0x6cba0c*/
          else
            v15 -= (int)MEMORY[0xA8ED84] - v14; /*0x6cba08*/
        }
        v17 = Math::RoundToInt((double)(v13 - v15) * *(double *)&MEMORY[0x8871E0]->WallBuildSpeedCoefficient[2]); /*0x6cba23*/
        v18 = a2; /*0x6cba2c*/
        *(_DWORD *)(this + 48) = v16; /*0x6cba30*/
        *(_DWORD *)(this + 52) = v30; /*0x6cba33*/
        *(_DWORD *)(this + 56) = v17; /*0x6cba36*/
        SuperClass::Launch(this, v18, a3, v18); /*0x6cba41*/
        return 0; /*0x6cba4f*/
      }
    }
    else if ( !*(_BYTE *)(*(_DWORD *)(this + 44) + 506) ) /*0x6cba55*/
    {
      SuperClass::Launch(this, a2, a3, a2); /*0x6cba6d*/
      return 0; /*0x6cba7a*/
    }
    return 0; /*0x6cbc96*/
  }
  v19 = (wchar_t **)(this + 48); /*0x6cba80*/
  if ( (*(_DWORD *)(this + 48) == -1 || !*(_BYTE *)(this + 109) || !*(_BYTE *)(this + 111)) && !*(_BYTE *)(v4 + 238) ) /*0x6cba98*/
    return 0; /*0x6cba98*/
  if ( *(_DWORD *)(v4 + 180) == 2 && (unsigned __int8)Weapon_Helper() ) /*0x6cbaa7*/
  {
    if ( (_BYTE)a2 ) /*0x6cbab4*/
    {
      Weapon_Get(); /*0x6cbaba*/
      return 0; /*0x6cbac7*/
    }
    return 0; /*0x6cbab4*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(this + 40) + 180) == 7 && PsyDom::IsActive() ) /*0x6cbad6*/
  {
    if ( (_BYTE)a2 ) /*0x6cbae3*/
    {
      Weapon_Get_53B410(); /*0x6cbae9*/
      return 0; /*0x6cbaf6*/
    }
    return 0; /*0x6cbae3*/
  }
  SuperClass::Launch(this, a2, a3, a2); /*0x6cbb05*/
  v20 = *(_DWORD *)(this + 40); /*0x6cbb0a*/
  if ( !*(_BYTE *)(v20 + 238) ) /*0x6cbb0d*/
    *(_BYTE *)(this + 111) = 0; /*0x6cbb15*/
  if ( !*(_BYTE *)(this + 110) ) /*0x6cbb1b*/
  {
    if ( *(_BYTE *)(v20 + 245) ) /*0x6cbb63*/
    {
      v23 = *(_DWORD *)(this + 36); /*0x6cbb6b*/
      if ( v23 == -1 ) /*0x6cbb71*/
        v23 = *(_DWORD *)(v20 + 176); /*0x6cbb73*/
      v24 = MEMORY[0xA8ED84]; /*0x6cbb79*/
      *(_DWORD *)(this + 120) = -1; /*0x6cbb80*/
      *v19 = v24; /*0x6cbb87*/
      *(_DWORD *)(this + 52) = v30; /*0x6cbb8d*/
      *(_DWORD *)(this + 56) = v23; /*0x6cbb90*/
      v25 = *v19; /*0x6cbb93*/
      if ( *v19 != (wchar_t *)-1 ) /*0x6cbb98*/
      {
        v26 = *(_DWORD *)(this + 56); /*0x6cbb9e*/
        v27 = (char *)((char *)MEMORY[0xA8ED84] - (char *)v25); /*0x6cbbac*/
        if ( (char *)MEMORY[0xA8ED84] - (char *)v25 >= v26 ) /*0x6cbbb0*/
        {
          *(_DWORD *)(this + 56) = 0; /*0x6cbbca*/
          *v19 = (wchar_t *)-1; /*0x6cbbcd*/
        }
        else
        {
          *v19 = (wchar_t *)-1; /*0x6cbbb4*/
          *(_DWORD *)(this + 56) = v26 - (_DWORD)v27; /*0x6cbbba*/
        }
        return 0; /*0x6cbbc5*/
      }
    }
    else if ( !*(_BYTE *)(v20 + 237) && !*(_BYTE *)(v20 + 238) ) /*0x6cbbea*/
    {
      v28 = *(_DWORD *)(this + 104); /*0x6cbbf6*/
      if ( v28 ) /*0x6cbbfb*/
      {
        *(_BYTE *)(v28 + 405) = 0; /*0x6cbc01*/
        *(_DWORD *)(this + 104) = 0; /*0x6cbc0d*/
        a2 = this; /*0x6cbc10*/
        VectorClass::RemoveAt(&MEMORY[0xB0F5B8], (int)&a2); /*0x6cbc14*/
      }
      if ( *(_BYTE *)(this + 108) ) /*0x6cbc19*/
      {
        a2 = this; /*0x6cbc28*/
        VectorClass::RemoveAt(&MEMORY[0xB0F5B8], (int)&a2); /*0x6cbc2c*/
        *(_BYTE *)(this + 108) = 0; /*0x6cbc31*/
      }
      if ( *(_BYTE *)(this + 109) /*0x6cbc46*/
        && !*(_BYTE *)(this + 111)
        && (!*(_BYTE *)(this + 112) || *(_BYTE *)(*(_DWORD *)(this + 40) + 237)) )
      {
        *(_DWORD *)(this + 120) = -1; /*0x6cbc4e*/
        if ( *v19 == (wchar_t *)-1 ) /*0x6cbc5a*/
          *v19 = MEMORY[0xA8ED84]; /*0x6cbc62*/
        v29 = *(_DWORD *)(this + 36); /*0x6cbc64*/
        if ( v29 == -1 ) /*0x6cbc6a*/
          v29 = *(_DWORD *)(*(_DWORD *)(this + 40) + 176); /*0x6cbc6f*/
        *v19 = MEMORY[0xA8ED84]; /*0x6cbc7a*/
        *(_DWORD *)(this + 52) = v30; /*0x6cbc80*/
        *(_DWORD *)(this + 56) = v29; /*0x6cbc83*/
        if ( *(_BYTE *)(*(_DWORD *)(this + 40) + 229) ) /*0x6cbc89*/
          *(_DWORD *)(this + 124) = 0; /*0x6cbc91*/
      }
    }
    return 0; /*0x6cbb98*/
  }
  v21 = *(_BYTE *)(this + 109); /*0x6cbb1d*/
  *(_BYTE *)(this + 110) = 0; /*0x6cbb20*/
  if ( !v21 ) /*0x6cbb25*/
    return 0; /*0x6cbb25*/
  *(_BYTE *)(this + 111) = 0; /*0x6cbb2f*/
  *(_BYTE *)(this + 109) = 0; /*0x6cbb32*/
  a2 = this; /*0x6cbb41*/
  v22 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xA83D50] + 16))(&MEMORY[0xA83D50], &a2); /*0x6cbb45*/
  if ( v22 != -1 ) /*0x6cbb4b*/
    SuperClass::RemoveFromPointerArray(v22); /*0x6cbb53*/
  return 1; /*0x6cb9bc*/
}


// ==== 0x006CBCA0  SuperWeapon::UpdateSuperWeaponReadyState  this=int  sig=csp ====
char __thiscall UpdateSuperWeaponReadyState(int this, char a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // edx
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // [esp+10h] [ebp-8h]

  v3 = *(_DWORD *)(this + 80); /*0x6cbca8*/
  if ( v3 > 0 ) /*0x6cbcad*/
    *(_DWORD *)(this + 80) = v3 - 1; /*0x6cbcb0*/
  if ( !*(_DWORD *)(this + 80) ) /*0x6cbcb3*/
  {
    v4 = *(_DWORD *)(this + 40); /*0x6cbcba*/
    *(_DWORD *)(this + 80) = -1; /*0x6cbcbd*/
    StartAudioControllerAt(*(_DWORD *)(v4 + 192), this + 84, 0); /*0x6cbccf*/
  }
  if ( MEMORY[0x8809A0] != 4 ) /*0x6cbce1*/
  {
    v5 = *(_DWORD *)(this + 104); /*0x6cbce3*/
    if ( v5 ) /*0x6cbce8*/
    {
      *(_BYTE *)(v5 + 413) = 1; /*0x6cbcea*/
      AudioFile::Stop((_DWORD *)(*(_DWORD *)(this + 104) + 416)); /*0x6cbcf9*/
    }
  }
  if ( !*(_BYTE *)(this + 109) /*0x6cbd21*/
    || *(_BYTE *)(this + 111) && !*(_BYTE *)(*(_DWORD *)(this + 40) + 229)
    || *(_BYTE *)(this + 112) )
  {
    return 0; /*0x6cbe9f*/
  }
  v6 = (_DWORD *)(this + 48); /*0x6cbd2f*/
  if ( *(_DWORD *)(this + 48) == -1 ) /*0x6cbd35*/
  {
    if ( *(_DWORD *)(this + 120) != -1 ) /*0x6cbd3b*/
    {
      *(_DWORD *)(this + 120) = -1; /*0x6cbd41*/
      return 1; /*0x6cbd50*/
    }
    return 0; /*0x6cbd3b*/
  }
  v8 = *(_DWORD *)(this + 56); /*0x6cbd55*/
  if ( (int)MEMORY[0xA8ED84] - *v6 < v8 && v8 != (_DWORD)MEMORY[0xA8ED84] - *v6 ) /*0x6cbd69*/
  {
    if ( SidebarClass::GetProductionState(this) != *(_DWORD *)(this + 120) ) /*0x6cbe86*/
    {
      *(_DWORD *)(this + 120) = SidebarClass::GetProductionState(this); /*0x6cbe8f*/
      return 1; /*0x6cbe9a*/
    }
    return 0; /*0x6cbe86*/
  }
  v9 = *(_DWORD *)(this + 40); /*0x6cbd73*/
  if ( *(_BYTE *)(v9 + 229) ) /*0x6cbd76*/
  {
    if ( *(_DWORD *)(this + 124) == 2 ) /*0x6cbd84*/
    {
      *(_DWORD *)(this + 124) = 0; /*0x6cbd86*/
      v10 = *(_DWORD *)(this + 36); /*0x6cbd8d*/
      if ( v10 == -1 ) /*0x6cbd93*/
        v10 = *(_DWORD *)(v9 + 176); /*0x6cbd95*/
      *v6 = MEMORY[0xA8ED84]; /*0x6cbda1*/
      v6[1] = v11; /*0x6cbda7*/
      v6[2] = v10; /*0x6cbdaa*/
      return 1; /*0x6cbdad*/
    }
    else
    {
      *(_DWORD *)(this + 124) = 1; /*0x6cbdb7*/
      *(_BYTE *)(this + 111) = 1; /*0x6cbdba*/
      return 1; /*0x6cbdbe*/
    }
  }
  else
  {
    *(_BYTE *)(this + 111) = 1; /*0x6cbdcc*/
    if ( a2 ) /*0x6cbdd1*/
    {
      switch ( *(_DWORD *)(v9 + 180) ) /*0x6cbde6*/
      {
        case 0: /*0x6cbde6*/
          VoxClass::FindAndPlay(MEMORY[0x8424D4], -1); /*0x6cbdf7*/
          break; /*0x6cbdf7*/
        case 1: /*0x6cbde6*/
          VoxClass::FindAndPlay(MEMORY[0x8424BC], -1); /*0x6cbe03*/
          break; /*0x6cbe03*/
        case 2: /*0x6cbde6*/
          VoxClass::FindAndPlay(MEMORY[0x84248C], -1); /*0x6cbe1b*/
          break; /*0x6cbe1b*/
        case 3: /*0x6cbde6*/
          VoxClass::FindAndPlay(MEMORY[0x842458], -1); /*0x6cbe33*/
          break; /*0x6cbe33*/
        case 5: /*0x6cbde6*/
        case 6: /*0x6cbde6*/
          VoxClass::FindAndPlay(MEMORY[0x842440], -1); /*0x6cbe3f*/
          break; /*0x6cbe3f*/
        case 7: /*0x6cbde6*/
          VoxClass::FindAndPlay(MEMORY[0x842470], -1); /*0x6cbe27*/
          break; /*0x6cbe27*/
        case 8: /*0x6cbde6*/
          VoxClass::FindAndPlay(MEMORY[0x84242C], -1); /*0x6cbe4b*/
          break; /*0x6cbe4b*/
        case 9: /*0x6cbde6*/
          VoxClass::FindAndPlay(MEMORY[0x842414], -1); /*0x6cbe57*/
          break; /*0x6cbe57*/
        case 0xA: /*0x6cbde6*/
          VoxClass::FindAndPlay(MEMORY[0x8424A4], -1); /*0x6cbe0f*/
          break; /*0x6cbe0f*/
        case 0xB: /*0x6cbde6*/
          VoxClass::FindAndPlay(MEMORY[0x8423FC], -1); /*0x6cbe63*/
          break; /*0x6cbe63*/
        default:
          break;
      }
    }
    *(_DWORD *)(this + 116) = MEMORY[0xA8ED84]; /*0x6cbe68*/
    return 1; /*0x6cbe72*/
  }
}


// ==== 0x006CBEE0  SidebarClass::GetProductionState  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass_GetProductionState(int this)
{
  int v1; // ebx
  int v2; // esi
  int v3; // edx
  int v4; // ecx
  double v5; // st7
  int v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int result; // eax
  int v11; // edi
  int v12; // esi
  int v13; // eax
  int v14; // ecx
  int v15; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]
  int v18; // [esp+14h] [ebp-4h]

  if ( !*(_BYTE *)(this + 109) ) /*0x6cbeeb*/
    return 0; /*0x6cc064*/
  v1 = *(_DWORD *)(this + 40); /*0x6cbef1*/
  if ( !*(_BYTE *)(v1 + 229) ) /*0x6cbefc*/
  {
    if ( *(_BYTE *)(this + 111) ) /*0x6cbfe5*/
      return 54; /*0x6cbff7*/
    v11 = *(_DWORD *)(this + 36); /*0x6cbff8*/
    v12 = v11; /*0x6cbffe*/
    if ( v11 == -1 ) /*0x6cc000*/
      v12 = *(_DWORD *)(v1 + 176); /*0x6cc002*/
    v13 = *(_DWORD *)(this + 56); /*0x6cc008*/
    v14 = *(_DWORD *)(this + 48); /*0x6cc00b*/
    if ( v14 != -1 ) /*0x6cc011*/
    {
      if ( (int)MEMORY[0xA8ED84] - v14 >= v13 ) /*0x6cc01d*/
        v13 = 0; /*0x6cc023*/
      else
        v13 -= (int)MEMORY[0xA8ED84] - v14; /*0x6cc01f*/
    }
    if ( v11 == -1 ) /*0x6cc028*/
      v18 = *(_DWORD *)(v1 + 176); /*0x6cc036*/
    else
      v18 = v11; /*0x6cc02a*/
    v5 = (double)(v12 - v13) / (double)v18; /*0x6cc044*/
    goto LABEL_37; /*0x6cc044*/
  }
  if ( *(_DWORD *)(this + 124) != 2 ) /*0x6cbf06*/
  {
    v6 = *(_DWORD *)(this + 36); /*0x6cbf85*/
    v7 = v6; /*0x6cbf8b*/
    if ( v6 == -1 ) /*0x6cbf8d*/
      v7 = *(_DWORD *)(v1 + 176); /*0x6cbf8f*/
    v8 = *(_DWORD *)(this + 56); /*0x6cbf95*/
    v9 = *(_DWORD *)(this + 48); /*0x6cbf98*/
    if ( v9 != -1 ) /*0x6cbf9e*/
    {
      if ( (int)MEMORY[0xA8ED84] - v9 >= v8 ) /*0x6cbfaa*/
        v8 = 0; /*0x6cbfb0*/
      else
        v8 -= (int)MEMORY[0xA8ED84] - v9; /*0x6cbfac*/
    }
    if ( v6 == -1 ) /*0x6cbfb5*/
      v5 = (double)(v7 - v8) / (double)*(int *)(v1 + 176); /*0x6cbfdf*/
    else
      v5 = (double)(v7 - v8) / (double)v6; /*0x6cbfc5*/
    goto LABEL_37; /*0x6cbfc9*/
  }
  v2 = *(_DWORD *)(this + 36); /*0x6cbf08*/
  if ( v2 == -1 ) /*0x6cbf0e*/
    v16 = *(_DWORD *)(v1 + 176); /*0x6cbf1c*/
  else
    v16 = *(_DWORD *)(this + 36); /*0x6cbf10*/
  v3 = *(_DWORD *)(this + 56); /*0x6cbf20*/
  v4 = *(_DWORD *)(this + 48); /*0x6cbf23*/
  if ( v4 != -1 ) /*0x6cbf29*/
  {
    if ( (int)MEMORY[0xA8ED84] - v4 >= v3 ) /*0x6cbf34*/
    {
      v15 = 0; /*0x6cbf47*/
      goto LABEL_11; /*0x6cbf4f*/
    }
    v3 -= (int)MEMORY[0xA8ED84] - v4; /*0x6cbf36*/
  }
  v15 = v3; /*0x6cbf38*/
LABEL_11:
  if ( v2 == -1 ) /*0x6cbf3f*/
    v17 = *(_DWORD *)(v1 + 176); /*0x6cbf57*/
  else
    v17 = v2; /*0x6cbf41*/
  v5 = 1.0 /*0x6cbf7a*/
     - ((double)v16 * *((double *)MEMORY[0x8871E0] + 236) - (double)v15)
     / ((double)v17
      * *((double *)MEMORY[0x8871E0] + 236));
LABEL_37:
  result = Math::RoundToInt(v5 * 54.0); /*0x6cc048*/
  if ( result >= 53 ) /*0x6cc056*/
    return 53; /*0x6cc05a*/
  return result; /*0x6cbfec*/
}


// ==== 0x006CC070  ObjectClass::nullsub_231  this=ObjectClass  sig=csp ====
void nullsub_231()
{
  ; /*0x6cc070*/
}


// ==== 0x006CC080  SuperClass::AnnounceReady  this=AbstractClass  sig=csp ====
char __thiscall SuperClass::AnnounceReady(int this, DynamicVector *aP1)
{
  char result; // al
  int v4; // edi
  int v5; // edi
  int v6; // edx
  int v7; // [esp+Ch] [ebp-8h]

  result = *(_BYTE *)(this + 109); /*0x6cc086*/
  if ( result ) /*0x6cc08b*/
  {
    v4 = *(_DWORD *)(this + 36); /*0x6cc092*/
    *(_BYTE *)(this + 111) = 1; /*0x6cc098*/
    if ( v4 == -1 ) /*0x6cc09c*/
      v4 = *(_DWORD *)(*(_DWORD *)(this + 40) + 176); /*0x6cc0a1*/
    v5 = v4 - Math::RoundToInt((double)v4); /*0x6cc0b4*/
    if ( !v5 ) /*0x6cc0b6*/
      *(_BYTE *)(this + 111) = 1; /*0x6cc0b8*/
    if ( *(_DWORD *)(this + 48) == -1 ) /*0x6cc0c0*/
      *(_DWORD *)(this + 48) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6cc0c8*/
    *(_DWORD *)(this + 48) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6cc0d4*/
    *(_DWORD *)(this + 52) = v7; /*0x6cc0db*/
    *(_DWORD *)(this + 56) = v5; /*0x6cc0de*/
    if ( (_BYTE)aP1 ) /*0x6cc0e4*/
    {
      switch ( *(_DWORD *)(*(_DWORD *)(this + 40) + 180) ) /*0x6cc0fc*/
      {
        case 0: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50968], -1, -1); /*0x6cc10d*/
          break; /*0x6cc10d*/
        case 1: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50944], -1, -1); /*0x6cc119*/
          break; /*0x6cc119*/
        case 2: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50896], -1, -1); /*0x6cc131*/
          break; /*0x6cc131*/
        case 3: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50844], -1, -1); /*0x6cc149*/
          break; /*0x6cc149*/
        case 5: /*0x6cc0fc*/
        case 6: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50820], -1, -1); /*0x6cc155*/
          break; /*0x6cc155*/
        case 7: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50868], -1, -1); /*0x6cc13d*/
          break; /*0x6cc13d*/
        case 8: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50800], -1, -1); /*0x6cc161*/
          break; /*0x6cc161*/
        case 9: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50776], -1, -1); /*0x6cc16d*/
          break; /*0x6cc16d*/
        case 0xA: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50920], -1, -1); /*0x6cc125*/
          break; /*0x6cc125*/
        case 0xB: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50752], -1, -1); /*0x6cc179*/
          break; /*0x6cc179*/
        default:
          break;
      }
    }
    v6 = *(_DWORD *)(this + 40); /*0x6cc17e*/
    *(_DWORD *)(this + 116) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6cc187*/
    result = *(_BYTE *)(v6 + 229); /*0x6cc18a*/
    if ( result ) /*0x6cc192*/
      *(_DWORD *)(this + 124) = 1; /*0x6cc194*/
  }
  return result; /*0x6cc19b*/
}


// ==== 0x006CC1E0  SuperClass::SetCharge  this=VOID_PTR  sig=csp ====
char __thiscall SuperClass::SetCharge(int this, int a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int v5; // esi
  int v7; // [esp+Ch] [ebp-8h]

  LOBYTE(v3) = *(_BYTE *)(this + 109); /*0x6cc1e6*/
  if ( (_BYTE)v3 ) /*0x6cc1eb*/
  {
    LOBYTE(v3) = a2; /*0x6cc1ed*/
    if ( (unsigned int)a2 <= 0x64 ) /*0x6cc1f3*/
    {
      v4 = *(_DWORD *)(this + 36); /*0x6cc1fb*/
      if ( v4 == -1 ) /*0x6cc201*/
        v4 = *(_DWORD *)(*(_DWORD *)(this + 40) + 176); /*0x6cc206*/
      v5 = v4 - Math::RoundToInt((double)a2 * 0.0099999998 * (double)v4); /*0x6cc223*/
      if ( !v5 ) /*0x6cc225*/
        *(_BYTE *)(this + 111) = 1; /*0x6cc227*/
      v3 = (_DWORD *)(this + 48); /*0x6cc22e*/
      if ( *(_DWORD *)(this + 48) == -1 ) /*0x6cc234*/
        *v3 = MEMORY[0xA8ED84]; /*0x6cc23c*/
      *v3 = MEMORY[0xA8ED84]; /*0x6cc248*/
      *(_DWORD *)(this + 52) = v7; /*0x6cc24a*/
      *(_DWORD *)(this + 56) = v5; /*0x6cc24d*/
    }
  }
  return (char)v3; /*0x6cc251*/
}


// ==== 0x006CC260  Super::GetDefaultTimer  this=AbstractClass  sig=csp ====
int __thiscall Super_GetDefaultTimer(_DWORD *this)
{
  int result; // eax

  result = this->q024; /*0x6cc260*/
  if ( result == -1 ) /*0x6cc266*/
    return *(_DWORD *)(this->q028 + 176); /*0x6cc26b*/
  return result; /*0x6cc271*/
}


// ==== 0x006CC280  SuperClass::SetRechargeTime  this=VOID_PTR  sig=csp ====
int __thiscall SuperClass::SetRechargeTime(_DWORD *this, int a2)
{
  *(this + 9) = a2; /*0x6cc284*/
  return a2; /*0x6cc287*/
}


// ==== 0x006CC290  SuperClass::ResetRechargeTime  this=VOID_PTR  sig=csp ====
void __thiscall SuperClass::ResetRechargeTime(_DWORD *this)
{
  *(this + 9) = -1; /*0x6cc290*/
}


// ==== 0x006CC2A0  SuperWeapon::GetField10  this=VOID_PTR  sig=csp ====
char __thiscall sub_6CC2A0(_DWORD *this)
{
  return *(_BYTE *)(*(this + 10) + 230); /*0x6cc2a9*/
}


// ==== 0x006CC2B0  SuperClass::NameReadiness  this=SuperClass  sig=csp ====
wchar_t *__thiscall SuperClass::NameReadiness(int this)
{
  int v1; // ecx
  int v2; // ecx

  if ( *(_BYTE *)(this + 112) ) /*0x6cc2b0*/
    return GetStringCSF(MEMORY[0x83FB2C], 0, MEMORY[0x842510], 950); /*0x6cc34d*/
  if ( *(_BYTE *)(*(_DWORD *)(this + 40) + 229) ) /*0x6cc2be*/
  {
    v1 = *(_DWORD *)(this + 124); /*0x6cc2c8*/
    if ( v1 ) /*0x6cc2ce*/
    {
      v2 = v1 - 1; /*0x6cc2d0*/
      if ( v2 ) /*0x6cc2d1*/
      {
        if ( v2 != 1 ) /*0x6cc2d4*/
          return 0; /*0x6cc2d8*/
        return GetStringCSF(MEMORY[0x8424FC], 0, MEMORY[0x842510], 925); /*0x6cc2ea*/
      }
      else
      {
        return GetStringCSF(g_Str_TXT_READY, 0, MEMORY[0x842510], 922); /*0x6cc301*/
      }
    }
    else
    {
      return GetStringCSF(MEMORY[0x8424EC], 0, MEMORY[0x842510], 919); /*0x6cc318*/
    }
  }
  else
  {
    if ( !*(_BYTE *)(this + 111) ) /*0x6cc323*/
      return 0; /*0x6cc323*/
    return GetStringCSF(g_Str_TXT_READY, 0, MEMORY[0x842510], 944); /*0x6cc336*/
  }
}


// ==== 0x006CC360  SuperClass::CanFire  this=SuperClass  sig=csp ====
char __thiscall SuperClass::CanFire(int this)
{
  if ( *(_BYTE *)(this + 112) ) /*0x6cc360*/
    return 0; /*0x6cc381*/
  if ( *(_BYTE *)(*(_DWORD *)(this + 40) + 229) ) /*0x6cc36a*/
    return *(_DWORD *)(this + 124) != 0; /*0x6cc379*/
  return *(_BYTE *)(this + 111); /*0x6cc37c*/
}


// ==== 0x006CC390  SuperClass::Launch  this=int  sig=csp ====
void __fastcall SuperClass::Launch(int ecx0, int a2, __int16 *aP3, char a4)
{
  SuperClass *v4; // ebx
  int v5; // ebp
  void *v6; // eax
  int v7; // eax
  AnimClass *v8; // eax
  AbstractClass **v9; // eax
  _BYTE *v10; // eax
  void *v11; // eax
  int v12; // eax
  __int16 *v13; // ebp
  void *v14; // eax
  int v15; // eax
  IUnknown *v16; // esi
  _BYTE *v17; // eax
  IUnknown *v18; // eax
  void **v19; // eax
  void **v20; // eax
  char *v21; // edi
  __int16 v22; // cx
  __int16 v23; // dx
  int *v24; // esi
  __int16 v25; // ax
  bool v26; // zf
  int v27; // ecx
  int v28; // edx
  _DWORD *v29; // edx
  bool v30; // bl
  int v31; // eax
  int Member; // eax
  int *v33; // eax
  _DWORD *v34; // eax
  int v35; // ecx
  int v36; // edi
  int *v37; // eax
  int v38; // eax
  IUnknown **v39; // ebx
  int v40; // eax
  int InstanceCOM; // eax
  int v42; // edi
  __int16 v43; // ax
  int v44; // edi
  void *v45; // eax
  int v46; // eax
  SuperClass *v47; // ecx
  int v48; // eax
  SuperClass *v49; // eax
  SuperClass *v50; // edi
  IUnknown *v51; // edi
  void *v52; // eax
  _DWORD *v53; // ebp
  _DWORD *v54; // eax
  int v55; // ecx
  int v56; // edx
  int v57; // edi
  int v58; // ebx
  void *v59; // eax
  _DWORD *v60; // eax
  IUnknown *v61; // edi
  int v62; // ecx
  int v63; // eax
  IUnknown *v64; // edx
  int v65; // eax
  IUnknown *v66; // edx
  int v67; // eax
  _WORD *v68; // eax
  __int16 v69; // dx
  void *v70; // eax
  AnimClass *v71; // eax
  AnimClass *v72; // eax
  void *v73; // eax
  _DWORD *v74; // eax
  AnimClass *v75; // eax
  void *v76; // eax
  int *v77; // eax
  int v78; // edi
  int v79; // esi
  void **v80; // eax
  int v81; // edx
  char *v82; // edi
  __int16 v83; // dx
  __int16 v84; // ax
  int v85; // esi
  __int16 v86; // cx
  AnimClass *v87; // eax
  void *v88; // eax
  int v89; // eax
  void **v90; // eax
  IUnknown *v91; // eax
  int v92; // ecx
  IUnknown *v93; // eax
  void *v94; // ecx
  AudioController *v95; // ecx
  void *v96; // eax
  int v97; // edx
  int v98; // ebp
  int v99; // eax
  IUnknown *v100; // ecx
  int v101; // edi
  void **v102; // esi
  _DWORD *v103; // eax
  IUnknown *v104; // eax
  int eax143a; // eax
  AnimClass *v105; // eax
  int v107; // esi
  int *v108; // eax
  IUnknown *v109; // ebp
  IUnknown *eax153; // eax
  IUnknown *v110; // edi
  int v112; // eax
  _DWORD *v113; // eax
  int v114; // ecx
  int v115; // edi
  int v116; // ecx
  _DWORD *v117; // eax
  int v118; // ecx
  int v119; // edi
  int v120; // ecx
  _DWORD *v121; // eax
  int i; // edi
  int v123; // ecx
  char *ecx179; // ecx
  AnimClass *v124; // eax
  int v126; // ebp
  int *v127; // eax
  IUnknown *v128; // edi
  IUnknown *eax186; // eax
  IUnknown *v129; // esi
  _DWORD *v131; // eax
  int v132; // ecx
  int v133; // esi
  int v134; // ecx
  int v135; // esi
  IUnknown *eax198; // eax
  IUnknown *v136; // edi
  int v138; // ecx
  int v139; // eax
  int v140; // ebp
  void *v141; // esi
  int *v142; // eax
  IUnknown *v143; // ecx
  _DWORD *eax208a; // eax
  IUnknown *v144; // esi
  void *v146; // eax
  int v147; // eax
  void **v148; // eax
  int v149; // edx
  char *v150; // edi
  __int16 v151; // dx
  __int16 v152; // ax
  _DWORD *v153; // esi
  __int16 v154; // cx
  _DWORD *v155; // ebp
  int v156; // ecx
  void *v157; // eax
  int v158; // esi
  AbstractClass *v159; // ebp
  BulletClass *UIObject; // edi
  double v161; // st7
  double st7_238a; // st7
  double st7_238b; // st7
  IUnknown *v162; // edx
  AnimClass *v163; // eax
  DynamicVector *ecx244; // ecx
  ObjectClass *v165; // esi
  IUnknown *v166; // eax
  int edx247; // edx
  IUnknown *v168; // esi
  IUnknown *v169; // eax
  AnimClass *v170; // eax
  int v173; // [esp+54h] [ebp-1D8h] BYREF
  IUnknown *a1; // [esp+58h] [ebp-1D4h] BYREF
  int v175; // [esp+5Ch] [ebp-1D0h]
  IUnknown *GroundHeight; // [esp+60h] [ebp-1CCh]
  SuperClass *var1C8; // [esp+64h] [ebp-1C8h] BYREF
  BuildingTypeClass *v178; // [esp+68h] [ebp-1C4h]
  MouseClass *v177; // [esp+6Ch] [ebp-1C0h]
  SuperClass *v180; // [esp+70h] [ebp-1BCh] BYREF
  int j; // [esp+74h] [ebp-1B8h]
  IUnknown *ppv; // [esp+78h] [ebp-1B4h] BYREF
  double v183; // [esp+7Ch] [ebp-1B0h] BYREF
  IUnknown *var1A8; // [esp+84h] [ebp-1A8h]
  SuperClass *var1A4; // [esp+88h] [ebp-1A4h] BYREF
  IUnknown *v184; // [esp+8Ch] [ebp-1A0h]
  IUnknown *v185; // [esp+90h] [ebp-19Ch] BYREF
  int v188; // [esp+94h] [ebp-198h]
  IUnknown *v189; // [esp+98h] [ebp-194h]
  int v190; // [esp+9Ch] [ebp-190h]
  double v191; // [esp+A0h] [ebp-18Ch] BYREF
  double v192; // [esp+A8h] [ebp-184h]
  int v193; // [esp+B0h] [ebp-17Ch] BYREF
  int v194; // [esp+B4h] [ebp-178h] BYREF
  int v195; // [esp+B8h] [ebp-174h]
  IUnknown *var170; // [esp+BCh] [ebp-170h]
  MouseClass *v197; // [esp+C0h] [ebp-16Ch] BYREF
  IUnknown *v196; // [esp+C4h] [ebp-168h] BYREF
  BuildingTypeClass *v199; // [esp+C8h] [ebp-164h] BYREF
  int var160; // [esp+CCh] [ebp-160h] BYREF
  SuperClass *v201; // [esp+D0h] [ebp-15Ch] BYREF
  BuildingTypeClass *v200; // [esp+D4h] [ebp-158h] BYREF
  _DWORD v203[2]; // [esp+D8h] [ebp-154h] BYREF
  char *v204; // [esp+E0h] [ebp-14Ch]
  SuperClass *var148; // [esp+E4h] [ebp-148h] BYREF
  MouseClass *v206; // [esp+E8h] [ebp-144h] BYREF
  IUnknown *v205; // [esp+ECh] [ebp-140h] BYREF
  SuperClass *v208; // [esp+F0h] [ebp-13Ch] BYREF
  BuildingTypeClass *v209; // [esp+F4h] [ebp-138h] BYREF
  CoordStruct aP2; // [esp+F8h] [ebp-134h] BYREF
  CoordStruct v211; // [esp+104h] [ebp-128h] BYREF
  _DWORD v212[3]; // [esp+110h] [ebp-11Ch] BYREF
  CoordStruct v213; // [esp+11Ch] [ebp-110h] BYREF
  CoordStruct v214; // [esp+128h] [ebp-104h] BYREF
  CoordStruct v215; // [esp+134h] [ebp-F8h] BYREF
  int v216; // [esp+140h] [ebp-ECh] BYREF
  int v217; // [esp+144h] [ebp-E8h] BYREF
  _QWORD v218[3]; // [esp+148h] [ebp-E4h] BYREF
  char v219[4]; // [esp+160h] [ebp-CCh] BYREF
  int v220; // [esp+164h] [ebp-C8h]
  char v221[12]; // [esp+16Ch] [ebp-C0h] BYREF
  char v222[12]; // [esp+178h] [ebp-B4h] BYREF
  char v223[12]; // [esp+184h] [ebp-A8h] BYREF
  char v224[12]; // [esp+190h] [ebp-9Ch] BYREF
  char v225[12]; // [esp+19Ch] [ebp-90h] BYREF
  char v226[12]; // [esp+1A8h] [ebp-84h] BYREF
  char v227[12]; // [esp+1B4h] [ebp-78h] BYREF
  char v228[12]; // [esp+1C0h] [ebp-6Ch] BYREF
  char v229[12]; // [esp+1CCh] [ebp-60h] BYREF
  char v230[12]; // [esp+1D8h] [ebp-54h] BYREF
  char v231[8]; // [esp+1E4h] [ebp-48h] BYREF
  char v232[16]; // [esp+1ECh] [ebp-40h] BYREF
  char v233[12]; // [esp+1FCh] [ebp-30h] BYREF
  char v234[12]; // [esp+208h] [ebp-24h] BYREF
  int v235[3]; // [esp+214h] [ebp-18h] BYREF
  int v236[3]; // [esp+220h] [ebp-Ch] BYREF

  v4 = (SuperClass *)ecx0;
  v5 = *(_DWORD *)(ecx0 + 40);
  v184 = (IUnknown *)ecx0;
  switch ( *(_DWORD *)(v5 + 180) )
  {
    case 0:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        if ( *(_BYTE *)(ecx0 + 110) && *(_BYTE *)(ecx0 + 109) )
        {
          var1C8 = *(SuperClass **)aP3;
          GroundHeight = 0;
          a1 = (IUnknown *)(((__int16)var1C8 << 8) + 128);
          v175 = (SHIWORD(var1C8) << 8) + 128;
          GroundHeight = (IUnknown *)Cell::GetGroundHeight((IUnknown *)&a1);
          if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&var1C8) + 80) & 0x100) != 0 )
            GroundHeight = (IUnknown *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[5208]);
          v158 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23132]
                           + 4 * SuperWeaponClass::FindByName(g_INI_Key_NukePayload));
          v159 = (AbstractClass *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a1);
          v189 = GroundHeight;
          v185 = a1;
          v188 = v175;
          v203[0] = a1;
          v203[1] = v175;
          v204 = &GroundHeight->__pad_14B0[14704];
          UIObject = (BulletClass *)CreateUIObjectCOM(
                                      *(IUnknown **)(v158 + 160),
                                      v159,
                                      0,
                                      *(AbstractClass **)(v158 + 164),
                                      *(AbstractClass **)(v158 + 172),
                                      *(_DWORD *)(v158 + 168),
                                      0);
          Function::Method_46B260(UIObject, v158);
          HouseClass::PsiWarn((InfantryClass *)v4->field_2C, (int)v159, (int)UIObject, aPsiwarn);
          if ( UIObject )
          {
            v183 = Math::SinCos((IUnknown *)0xFE8FBDA);
            v161 = Math::ArcTan2((IUnknown *)0xFE8FBDA);
            v183 = v161 * v183 * -100.0;
            v191 = Math::ArcTan2((IUnknown *)0xFE8FBDA);
            st7_238a = Math::ArcTan2((IUnknown *)0xFE8FBDA);
            v192 = v183;
            *(double *)&v218[1] = v183;
            v191 = st7_238a * v191 * -100.0;
            *(double *)v218 = v191;
            st7_238b = Math::SinCos((IUnknown *)0xFE8FBDA);
            v162 = *(IUnknown **)UIObject->__pad_0;
            *(double *)&v218[2] = st7_238b * -100.0;
            (*(void (__thiscall **)(BulletClass *, _DWORD *, _QWORD *))&v162->__pad_1D8[24])(UIObject, v203, v218);
            if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8836] )
              VoxClass::FindAndPlay(&stru_830620.__pad_579C[51052], -1, -1);
            PlayAudioAt2(*(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 372), &v185, 0);
          }
          if ( a4 )
          {
            *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
            v163 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50968]);
            ClearThemeQueuePlaylist((int)v163);
          }
          *((_BYTE *)v4->field_2C + 508) = 1;
        }
        else
        {
          ecx244 = 0;
          if ( (int)g_TriggerClassCount > 0 )
          {
            v165 = (ObjectClass *)g_TriggerTypeCount;
            while ( 1 )
            {
              v166 = *(IUnknown **)v165->__pad_0;
              if ( *(_BYTE *)(*(_DWORD *)v165->__pad_0 + 5818) )
              {
                edx247 = *(_DWORD *)(v5 + 152);
                if ( *(_DWORD *)&v166->__pad_14B0[576] == edx247 || *(_DWORD *)&v166->__pad_14B0[580] == edx247 )
                  break;
              }
              ecx244 = (DynamicVector *)((char *)ecx244 + 1);
              v165 = (ObjectClass *)((char *)v165 + 4);
              if ( (int)ecx244 >= (int)g_TriggerClassCount )
                goto LABEL_254;
            }
            v168 = (IUnknown *)HouseClass::FindBuildingOfType((int *)v4->field_2C, ecx244, -1);
            if ( v168 )
            {
              GroundHeight = 0;
              LODWORD(v183) = *(_DWORD *)aP3;
              v175 = (SWORD1(v183) << 8) + 128;
              a1 = (IUnknown *)((SLOWORD(v183) << 8) + 128);
              GroundHeight = (IUnknown *)Cell::GetGroundHeight((IUnknown *)&a1);
              v189 = GroundHeight;
              v169 = (IUnknown *)v168->field_0;
              v185 = a1;
              v188 = v175;
              (*(void (__thiscall **)(IUnknown *, int, _DWORD))&v169->__pad_1D8[16])(v168, 22, 0);
              (*(void (__thiscall **)(IUnknown *))(v168->field_0 + 492))(v168);
              *((_DWORD *)v4->field_2C + 5601) = *(_DWORD *)aP3;
              *(_DWORD *)&v168->__pad_524[212] = *((_DWORD *)v4->field_28 + 45);
              PlayAudioAt2(*(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 372), &v185, 0);
              if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8836] )
                VoxClass::FindAndPlay(&stru_830620.__pad_579C[51052], -1, -1);
            }
          }
LABEL_254:
          if ( a4 )
          {
            *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
            v170 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50968]);
            ClearThemeQueuePlaylist((int)v170);
          }
          *((_BYTE *)v4->field_2C + 508) = 1;
        }
      }
      break;
    case 1:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        v76 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v77 = (int *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v76 + 72))(v76, v222);
        v78 = *v77;
        v188 = v77[1];
        v79 = v77[2];
        if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3) + 80) & 0x100) != 0 )
          v79 += *(_DWORD *)&stru_B05488.__pad_579C[5208];
        v80 = (void **)__2_YAPAXI_Z(0x1C8u);
        if ( v80 )
        {
          v214.Y = v188;
          v214.Z = v79 + 5;
          v214.X = v78;
          AnimClass::ctor(
            v80,
            *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 840),
            &v214,
            0,
            (CoordStruct *)1,
            (void *)0x600,
            0,
            0);
        }
        if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8836] )
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[51116], -1, -1);
        CreateTriggerClassIfFarEnough((IUnknown *)0xD, v81, *(IUnknown **)aP3);
        v82 = &stru_B05488.__pad_579C[5140];
        do
        {
          v83 = aP3[1] + *((_WORD *)v82 + 1);
          LOWORD(var1C8) = *(_WORD *)v82 + *aP3;
          HIWORD(var1C8) = v83;
          v201 = var1C8;
          if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v201) + 80) & 0x100) != 0 )
          {
            v84 = aP3[1] + *((_WORD *)v82 + 1);
            LOWORD(v177) = *(_WORD *)v82 + *aP3;
            HIWORD(v177) = v84;
            v205 = (IUnknown *)v177;
            v85 = *((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v205) + 58);
          }
          else
          {
            v86 = aP3[1] + *((_WORD *)v82 + 1);
            LOWORD(v178) = *(_WORD *)v82 + *aP3;
            HIWORD(v178) = v86;
            v209 = v178;
            v85 = *((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v209) + 57);
          }
          for ( ; v85; v85 = *(_DWORD *)(v85 + 48) )
          {
            if ( (*(_BYTE *)(v85 + 20) & 4) == 0 || !*(_BYTE *)(v85 + 636) )
              (*(void (__thiscall **)(int, _DWORD, void *, _DWORD))(*(_DWORD *)v85 + 340))(
                v85,
                *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4072),
                v4->field_2C,
                0);
          }
          v82 += 4;
        }
        while ( (int)v82 < (int)&stru_B05488.__pad_579C[5176] );
        if ( a4 )
        {
          *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
          v87 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50944]);
          ClearThemeQueuePlaylist((int)v87);
        }
      }
      break;
    case 2:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        LightningStorm::Start(
          *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6044),
          *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6036),
          *(_DWORD *)aP3,
          *(#375 **)(ecx0 + 44));
        if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8836] )
          VoxClass::FindAndPlay(aEvaLightningst, -1, -1);
        if ( a4 )
        {
          *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
          v72 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50896]);
          ClearThemeQueuePlaylist((int)v72);
        }
      }
      break;
    case 3:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        *(_DWORD *)(ecx0 + 98) = *(_DWORD *)aP3;
        v6 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v7 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)v6 + 72))(v6, v233);
        a1 = *(IUnknown **)v7;
        v175 = *(_DWORD *)(v7 + 4);
        GroundHeight = *(IUnknown **)(v7 + 8);
        if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3) + 80) & 0x100) != 0 )
          GroundHeight = (IUnknown *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[5208]);
        v8 = (AnimClass *)Coord3D::Set(v235, 0, 0, 5);
        v9 = (AbstractClass **)Coord3D::Add(&a1, (IUnknown *)v236, v8);
        SuperClass::CreateChronoAnim((int)v4, *v9, (SuperClass *)v9[1], (int)v9[2]);
        if ( a4 )
        {
          *(_DWORD *)&stru_87C374.__pad_14B0[12668] = 4;
        }
        else
        {
          v10 = v4->field_68;
          if ( v10 )
          {
            v10[413] = 1;
            AudioController::Stop((_DWORD *)v4->field_68 + 104);
          }
        }
      }
      break;
    case 4:
      CreateTriggerClassIfFarEnough((IUnknown *)0xD, a2, *(IUnknown **)(ecx0 + 98));
      CreateTriggerClassIfFarEnough((IUnknown *)0xD, *(_DWORD *)aP3, *(IUnknown **)aP3);
      v11 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
      v12 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)v11 + 72))(v11, v223);
      v183 = *(double *)v12;
      v13 = *(__int16 **)(v12 + 8);
      v14 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v4->field_60 + 1);
      v15 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)v14 + 72))(v14, v219);
      a1 = *(IUnknown **)v15;
      v175 = *(_DWORD *)(v15 + 4);
      GroundHeight = *(IUnknown **)(v15 + 8);
      if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3) + 80) & 0x100) != 0 )
        v13 = (__int16 *)((char *)v13 + *(_DWORD *)&stru_B05488.__pad_579C[5208]);
      v16 = GroundHeight;
      if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v4->field_60 + 1) + 80) & 0x100) != 0 )
        v16 = (IUnknown *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[5208]);
      v17 = v4->field_68;
      if ( v17 )
      {
        v17[405] = 0;
        v4->field_68 = 0;
        var1C8 = v4;
        v18 = (IUnknown *)(*(int (__thiscall **)(char *, SuperClass **))(*(_DWORD *)&stru_B05488.__pad_579C[18836] + 16))(
                            &stru_B05488.__pad_579C[18836],
                            &var1C8);
        if ( v18 != (IUnknown *)-1 )
          DynamicVector::RemoveItem(&stru_B05488.__pad_579C[18836], v18);
      }
      if ( LOBYTE(v4->field_6C) )
      {
        var1C8 = v4;
        VectorClass::RemoveAt((int *)&stru_B05488.__pad_579C[18836], (int)&var1C8);
        LOBYTE(v4->field_6C) = 0;
      }
      v19 = (void **)__2_YAPAXI_Z(0x1C8u);
      if ( v19 )
      {
        *(double *)&aP2.X = v183;
        aP2.Z = (int)v13 + 5;
        AnimClass::ctor(
          v19,
          *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 812),
          &aP2,
          0,
          (CoordStruct *)1,
          (void *)0x600,
          0,
          0);
      }
      v20 = (void **)__2_YAPAXI_Z(0x1C8u);
      if ( v20 )
      {
        v215.X = (int)a1;
        v215.Y = v175;
        v215.Z = (int)&v16->field_4 + 1;
        AnimClass::ctor(
          v20,
          *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 808),
          &v215,
          0,
          (CoordStruct *)1,
          (void *)0x600,
          0,
          0);
      }
      v21 = &stru_B05488.__pad_579C[5140];
      j = (int)&stru_B05488.__pad_579C[5140];
      do
      {
        v22 = *((_WORD *)v21 + 1) + *(_WORD *)v4->__pad_64;
        LOWORD(var170) = *(_WORD *)v21 + HIWORD(v4->field_60);
        HIWORD(var170) = v22;
        v196 = var170;
        if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v196) + 80) & 0x100) != 0 )
        {
          v23 = *((_WORD *)v21 + 1) + *(_WORD *)v4->__pad_64;
          LOWORD(v195) = HIWORD(v4->field_60) + *(_WORD *)v21;
          HIWORD(v195) = v23;
          var160 = v195;
          v24 = (int *)*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&var160) + 58);
        }
        else
        {
          v25 = *((_WORD *)v21 + 1) + *(_WORD *)v4->__pad_64;
          LOWORD(v178) = HIWORD(v4->field_60) + *(_WORD *)v21;
          HIWORD(v178) = v25;
          v199 = v178;
          v24 = (int *)*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v199) + 57);
        }
        if ( v24 )
        {
          do
          {
            v26 = (v24[5] & 4) == 0;
            HIBYTE(v190) = (v24[5] & 4) != 0;
            if ( !v26 && !(*(unsigned __int8 (__thiscall **)(int *))(*v24 + 84))(v24) )
            {
              v27 = v24[421];
              if ( v27 )
              {
                if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v27 + 132))(v27) + 3278) )
                {
                  v28 = *(_DWORD *)(v24[421] + 1692);
                  if ( v28 )
                  {
                    v29 = (_DWORD *)(v28 + 44);
                    *v29 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
                    v29[1] = v220;
                    v29[2] = 500;
                    BuildingClass::Deploy(*(_DWORD *)(v24[421] + 1692), (int)v13, (int)v21);
                  }
                }
              }
              v30 = 0;
              if ( (*(int (__thiscall **)(int *))(*v24 + 44))(v24) == 1 )
              {
                v31 = (*(int (__thiscall **)(int *))(*v24 + 44))(v24);
                Member = Team::GetMember(v31 == 1 ? v24 : 0, 0);
                v21 = (char *)Member;
                if ( Member )
                {
                  if ( (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6
                    && *(_BYTE *)(*((_DWORD *)v21 + 328) + 5821) )
                  {
                    v33 = (*(int (__thiscall **)(int *))(*v24 + 44))(v24) == 1 ? v24 + 39 : (int *)156;
                    v212[0] = *v33;
                    v212[1] = v33[1];
                    v212[2] = v33[2];
                    v34 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v212);
                    v30 = Cell::IsBridge(v34) == (_DWORD *)v21;
                  }
                }
              }
              if ( !*(_BYTE *)((*(int (__thiscall **)(int *))(*v24 + 132))(v24) + 3479)
                || *(_BYTE *)((*(int (__thiscall **)(int *))(*v24 + 132))(v24) + 3284)
                || (*(unsigned __int8 (__thiscall **)(int *))(*v24 + 84))(v24) )
              {
                if ( !(*(unsigned __int8 (__thiscall **)(int *))(*v24 + 352))(v24)
                  && !*((_BYTE *)v24 + 636)
                  && !(*(unsigned __int8 (__thiscall **)(int *))(*v24 + 468))(v24)
                  && !(*(unsigned __int8 (__thiscall **)(int *))(*v24 + 472))(v24)
                  && !v30 )
                {
                  v35 = v24[185];
                  if ( v35 && (*(int (__thiscall **)(int))(*(_DWORD *)v35 + 44))(v35) == 6 )
                  {
                    v36 = v24[185];
                    if ( v36 )
                      v37 = (*(int (__thiscall **)(int))(*(_DWORD *)v36 + 44))(v24[185]) == 6 ? (int *)v36 : 0;
                    else
                      v37 = 0;
                    BuildingClass::UpdateDamageAnim(v37);
                  }
                  v38 = v24[413];
                  v39 = (IUnknown **)(v24 + 413);
                  v180 = 0;
                  if ( v38 )
                  {
                    v40 = StreamClass::Set(&v180, (IUnknown *)(v24 + 413));
                    if ( v40 < 0 && v40 != -2147467262 )
                      WinAPI::Wrapper(v40);
                  }
                  ppv = 0;
                  InstanceCOM = CreateInstanceCOM((LPVOID *)&ppv, (IID *)&g_CLSID_HoverLocomotion, 0, 7u);
                  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 )
                    WinAPI::Wrapper(InstanceCOM);
                  v42 = (*(int (__thiscall **)(int *))(*v24 + 44))(v24);
                  v43 = aP3[1] + *(_WORD *)(j + 2);
                  LOWORD(v177) = *aP3 + *(_WORD *)j;
                  HIWORD(v177) = v43;
                  v44 = v42 == 1 ? (unsigned int)v24 : 0;
                  v197 = v177;
                  LODWORD(v183) = v44;
                  v45 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v197);
                  v46 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)v45 + 72))(v45, v225);
                  a1 = *(IUnknown **)v46;
                  v175 = *(_DWORD *)(v46 + 4);
                  GroundHeight = *(IUnknown **)(v46 + 8);
                  if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a1) + 80) & 0x100) != 0 )
                    GroundHeight = (IUnknown *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[5208]);
                  if ( v44 )
                  {
                    if ( !*v39 )
                      WinAPI::Wrapper(-2147467261);
                    (*(void (__stdcall **)(IUnknown *, _DWORD))((*v39)->field_0 + 156))(*v39, 0);
                    v189 = GroundHeight;
                    if ( !*v39 )
                      WinAPI::Wrapper(-2147467261);
                    (*(void (__stdcall **)(IUnknown *, int, IUnknown *, int, IUnknown *))((*v39)->field_0 + 112))(
                      *v39,
                      -1,
                      a1,
                      v175,
                      v189);
                    (*(void (__thiscall **)(int *, IUnknown **))(*v24 + 244))(v24, &a1);
                    *((_BYTE *)v24 + 1718) = 1;
                  }
                  if ( !ppv )
                    WinAPI::Wrapper(-2147467261);
                  (*(void (__stdcall **)(IUnknown *, int *))(ppv->field_0 + 12))(ppv, v24);
                  v47 = 0;
                  var1A4 = 0;
                  if ( ppv )
                  {
                    v48 = StreamClass::Set(&var1A4, (IUnknown *)&ppv);
                    if ( v48 < 0 && v48 != -2147467262 )
                      WinAPI::Wrapper(v48);
                    v47 = var1A4;
                  }
                  v49 = v180;
                  if ( v180 != v47 )
                  {
                    v180 = v47;
                    v50 = v49;
                    CellClass::SetField2C((int *)&v180);
                    if ( v50 )
                      (*(void (__stdcall **)(SuperClass *))(v50->field_0 + 8))(v50);
                    v49 = v180;
                    v47 = var1A4;
                  }
                  if ( v47 )
                  {
                    (*(void (__stdcall **)(SuperClass *))(v47->field_0 + 8))(v47);
                    v49 = v180;
                  }
                  if ( v49 )
                  {
                    (*(void (__stdcall **)(SuperClass *, IUnknown *))(v49->field_0 + 12))(v49, *v39);
                    v51 = *v39;
                    if ( *v39 != ppv )
                    {
                      *v39 = ppv;
                      SuperClass::SetFieldX(v24 + 413);
                      if ( v51 )
                        (*(void (__stdcall **)(IUnknown *))(v51->field_0 + 8))(v51);
                    }
                  }
                  v52 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v184->field_60 + 1);
                  v53 = (_DWORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v52 + 72))(v52, v231);
                  v54 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(*v24 + 72))(v24, v227);
                  v55 = v53[2];
                  v56 = v53[1];
                  v57 = *v54 - *v53;
                  v13 = aP3;
                  v58 = v54[1] - v56;
                  v204 = (char *)(v54[2] - v55);
                  if ( !LODWORD(v183) )
                  {
                    v59 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
                    v60 = (_DWORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v59 + 72))(v59, v221);
                    v61 = (IUnknown *)(*v60 + v57);
                    v62 = v60[1];
                    v63 = v60[2];
                    v175 = v58 + v62;
                    a1 = v61;
                    GroundHeight = (IUnknown *)&v204[v63];
                    if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a1) + 80) & 0x100) != 0 )
                      GroundHeight = (IUnknown *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[5208]);
                  }
                  v64 = a1;
                  v65 = v175;
                  *((_BYTE *)v24 + 636) = 1;
                  v24[162] = (int)v64;
                  v66 = GroundHeight;
                  v24[163] = v65;
                  v67 = *v24;
                  v24[164] = (int)v66;
                  (*(void (__thiscall **)(int *, int))(v67 + 640))(v24, 3);
                  v68 = (_WORD *)j;
                  v24[267] = *(_DWORD *)&v184->__pad_28[4];
                  v69 = aP3[1] + v68[1];
                  LOWORD(var1C8) = *aP3 + *v68;
                  HIWORD(var1C8) = v69;
                  var148 = var1C8;
                  v21 = (char *)*v24;
                  v70 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&var148);
                  (*((void (__thiscall **)(int *, void *, int))v21 + 288))(v24, v70, 1);
                  if ( ppv )
                    (*(void (__stdcall **)(IUnknown *))(ppv->field_0 + 8))(ppv);
                  if ( v180 )
                    (*(void (__stdcall **)(SuperClass *))(v180->field_0 + 8))(v180);
                }
              }
              else
              {
                LODWORD(v191) = *(_DWORD *)((*(int (__thiscall **)(int *))(*v24 + 132))(v24) + 160);
                (*(void (__thiscall **)(int *, double *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(*v24 + 364))(
                  v24,
                  &v191,
                  0,
                  *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008),
                  0,
                  1,
                  0,
                  *(_DWORD *)&v184->__pad_28[4]);
              }
            }
            v24 = (int *)v24[12];
          }
          while ( v24 );
          v4 = (SuperClass *)v184;
          v21 = (char *)j;
        }
        v21 += 4;
        j = (int)v21;
      }
      while ( (int)v21 < (int)&stru_B05488.__pad_579C[5176] );
      if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8836] )
        VoxClass::FindAndPlay(&stru_830620.__pad_579C[51176], -1, -1);
      if ( a4 )
      {
        *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
        v71 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50844]);
        ClearThemeQueuePlaylist((int)v71);
      }
      break;
    case 5:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        v107 = TypeClass::FindByName(&stru_830620.__pad_579C[14668]);
        v108 = (int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v109 = (IUnknown *)v108;
        if ( v108 && v108 != g_CellClassArray )
        {
          if ( Cell::IsValidHeight(v108) )
          {
            v193 = 0;
            var1C8 = (SuperClass *)*LayerClass::Pathfinding_Find(
                                      (IUnknown *)&stru_87C374.__pad_14B0[8132],
                                      (IUnknown *)&v193,
                                      (IUnknown *)&v217,
                                      (IUnknown *)aP3,
                                      0,
                                      (IUnknown *)0xFFFFFFFF,
                                      0,
                                      0,
                                      (IUnknown *)1,
                                      (IUnknown *)1,
                                      0,
                                      0,
                                      0,
                                      (IUnknown *)1,
                                      (IUnknown *)&v193,
                                      0,
                                      0);
            if ( var1C8 != *(SuperClass **)&stru_B05488.__pad_579C[5084] )
            {
              eax153 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&var1C8);
              v110 = eax153;
              if ( eax153 )
              {
                if ( eax153 != (IUnknown *)g_CellClassArray && !Cell::IsValidHeight(&eax153->field_0) )
                  v109 = v110;
              }
            }
          }
          v112 = *((_DWORD *)v4->field_2C + 122);
          if ( v112 )
          {
            if ( v112 == 2 )
            {
              v117 = *(_DWORD **)&stru_87C374.__pad_579C[22224];
              v118 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3260);
              if ( v118 == *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3288) )
              {
                v119 = 0;
                if ( v118 > 0 )
                {
                  do
                  {
                    v120 = *(_DWORD *)(*(_DWORD *)(v117[812] + 4 * v119) + 3576);
                    if ( v107 != -1 && v120 != -1 )
                    {
                      SpawnSuperWeaponUnits(
                        (unsigned int *)v4->field_2C,
                        v107,
                        (IUnknown *)1,
                        26,
                        (int)v109,
                        0,
                        v120,
                        *(_DWORD *)(v117[819] + 4 * v119));
                      v117 = *(_DWORD **)&stru_87C374.__pad_579C[22224];
                    }
                    ++v119;
                  }
                  while ( v119 < v117[815] );
                }
              }
            }
            else
            {
              v121 = *(_DWORD **)&stru_87C374.__pad_579C[22224];
              for ( i = 0; i < v121[801]; ++i )
              {
                v123 = *(_DWORD *)(*(_DWORD *)(v121[798] + 4 * i) + 3576);
                if ( v107 != -1 && v123 != -1 )
                {
                  SpawnSuperWeaponUnits(
                    (unsigned int *)v4->field_2C,
                    v107,
                    (IUnknown *)1,
                    26,
                    (int)v109,
                    0,
                    v123,
                    *(_DWORD *)(v121[805] + 4 * i));
                  v121 = *(_DWORD **)&stru_87C374.__pad_579C[22224];
                }
              }
            }
          }
          else
          {
            v113 = *(_DWORD **)&stru_87C374.__pad_579C[22224];
            v114 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3148);
            if ( v114 == *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3176) )
            {
              v115 = 0;
              if ( v114 > 0 )
              {
                do
                {
                  v116 = *(_DWORD *)(*(_DWORD *)(v113[784] + 4 * v115) + 3576);
                  if ( v107 != -1 && v116 != -1 )
                  {
                    SpawnSuperWeaponUnits(
                      (unsigned int *)v4->field_2C,
                      v107,
                      (IUnknown *)1,
                      26,
                      (int)v109,
                      0,
                      v116,
                      *(_DWORD *)(v113[791] + 4 * v115));
                    v113 = *(_DWORD **)&stru_87C374.__pad_579C[22224];
                  }
                  ++v115;
                }
                while ( v115 < v113[787] );
              }
            }
          }
        }
        goto LABEL_178;
      }
      break;
    case 6:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        v126 = TypeClass::FindByName(&stru_830620.__pad_579C[14668]);
        v127 = (int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v128 = (IUnknown *)v127;
        if ( v127 && v127 != g_CellClassArray )
        {
          if ( Cell::IsValidHeight(v127) )
          {
            v194 = 0;
            var1C8 = (SuperClass *)*LayerClass::Pathfinding_Find(
                                      (IUnknown *)&stru_87C374.__pad_14B0[8132],
                                      (IUnknown *)&v194,
                                      (IUnknown *)&v216,
                                      (IUnknown *)aP3,
                                      0,
                                      (IUnknown *)0xFFFFFFFF,
                                      0,
                                      0,
                                      (IUnknown *)1,
                                      (IUnknown *)1,
                                      0,
                                      0,
                                      0,
                                      (IUnknown *)1,
                                      (IUnknown *)&v194,
                                      0,
                                      0);
            if ( var1C8 != *(SuperClass **)&stru_B05488.__pad_579C[5084] )
            {
              eax186 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&var1C8);
              v129 = eax186;
              if ( eax186 )
              {
                if ( eax186 != (IUnknown *)g_CellClassArray && !Cell::IsValidHeight(&eax186->field_0) )
                  v128 = v129;
              }
            }
          }
          v131 = *(_DWORD **)&stru_87C374.__pad_579C[22224];
          v132 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3092);
          if ( v132 == *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3120) )
          {
            v133 = 0;
            if ( v132 > 0 )
            {
              do
              {
                v134 = *(_DWORD *)(*(_DWORD *)(v131[770] + 4 * v133) + 3576);
                if ( v126 != -1 && v134 != -1 )
                {
                  SpawnSuperWeaponUnits(
                    (unsigned int *)v4->field_2C,
                    v126,
                    (IUnknown *)1,
                    26,
                    (int)v128,
                    0,
                    v134,
                    *(_DWORD *)(v131[777] + 4 * v133));
                  v131 = *(_DWORD **)&stru_87C374.__pad_579C[22224];
                }
                ++v133;
              }
              while ( v133 < v131[773] );
            }
          }
        }
LABEL_178:
        if ( a4 )
        {
          *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
          ecx179 = &stru_830620.__pad_579C[50820];
          goto LABEL_180;
        }
      }
      break;
    case 7:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        CreateTriggerClassIfFarEnough((IUnknown *)0xD, *(_DWORD *)aP3, *(IUnknown **)aP3);
        SuperClass::LaunchPsychicDominator((#375 *)v4->field_2C, *(_DWORD *)aP3);
        if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8836] )
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[51144], -1, -1);
        v73 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v74 = (_DWORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v73 + 72))(v73, v229);
        PlayAudioAt2(*(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 588), v74, 0);
        if ( a4 )
        {
          *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
          v75 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50868]);
          ClearThemeQueuePlaylist((int)v75);
        }
      }
      break;
    case 8:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        v135 = TypeClass::FindByName(&stru_830620.__pad_579C[51108]);
        eax198 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v136 = eax198;
        if ( eax198 )
        {
          if ( eax198 != (IUnknown *)g_CellClassArray )
          {
            v138 = *(_DWORD *)&stru_87C374.__pad_579C[22224];
            v139 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3148);
            if ( v139 == *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3176) )
            {
              v140 = 0;
              if ( v139 > 0 )
              {
                do
                {
                  if ( v135 != -1 )
                  {
                    globalHelper_05EAB0((unsigned int *)v4->field_2C, v135, (IUnknown *)1, 30, (int)v136, 0);
                    v138 = *(_DWORD *)&stru_87C374.__pad_579C[22224];
                  }
                  ++v140;
                }
                while ( v140 < *(_DWORD *)(v138 + 3148) );
              }
            }
          }
        }
        if ( a4 )
        {
          *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
          ecx179 = &stru_830620.__pad_579C[50800];
          goto LABEL_180;
        }
      }
      break;
    case 9:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        v144 = (IUnknown *)aP3;
        v146 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v147 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)v146 + 72))(v146, v234);
        a1 = *(IUnknown **)v147;
        v175 = *(_DWORD *)(v147 + 4);
        GroundHeight = *(IUnknown **)(v147 + 8);
        if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3) + 80) & 0x100) != 0 )
          GroundHeight = (IUnknown *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[5208]);
        v148 = (void **)__2_YAPAXI_Z(0x1C8u);
        if ( v148 )
        {
          v213.X = (int)a1;
          v213.Y = v175;
          v213.Z = (int)&GroundHeight->field_4 + 1;
          AnimClass::ctor(
            v148,
            *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 664),
            &v213,
            0,
            (CoordStruct *)1,
            (void *)0x600,
            0,
            0);
        }
        if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8836] )
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[51080], -1, -1);
        PlayAudioAt2(*(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 592), &a1, 0);
        CreateTriggerClassIfFarEnough((IUnknown *)0xD, v149, *(IUnknown **)aP3);
        if ( *(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6088) )
        {
          PlaySoundEffectAt(
            (TechnoClass *)&a1,
            (IUnknown *)0x2710,
            0,
            *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3996),
            0,
            (int)v4->field_2C);
        }
        else
        {
          v150 = &stru_B05488.__pad_579C[5140];
          while ( 1 )
          {
            v151 = HIWORD(v144->field_0) + *((_WORD *)v150 + 1);
            LOWORD(var1C8) = *(_WORD *)v150 + LOWORD(v144->field_0);
            HIWORD(var1C8) = v151;
            v208 = var1C8;
            if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v208) + 80) & 0x100) != 0 )
            {
              v152 = HIWORD(v144->field_0) + *((_WORD *)v150 + 1);
              LOWORD(v177) = *(_WORD *)v150 + LOWORD(v144->field_0);
              HIWORD(v177) = v152;
              v206 = v177;
              v153 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v206) + 58);
            }
            else
            {
              v154 = HIWORD(v144->field_0) + *((_WORD *)v150 + 1);
              LOWORD(v178) = *(_WORD *)v150 + LOWORD(v144->field_0);
              HIWORD(v178) = v154;
              v200 = v178;
              v153 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v200) + 57);
            }
            if ( v153 )
            {
              do
              {
                v155 = (_DWORD *)v153[12];
                if ( v153 && (*(int (__thiscall **)(_DWORD *))(*v153 + 44))(v153) == 15 )
                {
                  v156 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v153 + 132))(v153) + 160);
                  v157 = v4->field_2C;
                  LODWORD(v183) = v156;
                  (*(void (__thiscall **)(_DWORD *, double *, _DWORD, _DWORD, _DWORD, int, _DWORD, void *))(*v153 + 364))(
                    v153,
                    &v183,
                    0,
                    *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3992),
                    0,
                    1,
                    0,
                    v157);
                }
                v153 = v155;
              }
              while ( v155 );
            }
            v150 += 4;
            if ( (int)v150 >= (int)&stru_B05488.__pad_579C[5176] )
              break;
            v144 = (IUnknown *)aP3;
          }
        }
        if ( a4 )
        {
          *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
          ecx179 = &stru_830620.__pad_579C[50776];
          goto LABEL_180;
        }
      }
      break;
    case 0xA:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        v88 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v89 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)v88 + 72))(v88, v224);
        a1 = *(IUnknown **)v89;
        v175 = *(_DWORD *)(v89 + 4);
        GroundHeight = *(IUnknown **)(v89 + 8);
        if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3) + 80) & 0x100) != 0 )
          GroundHeight = (IUnknown *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[5208]);
        v90 = (void **)__2_YAPAXI_Z(0x1C8u);
        if ( v90 )
        {
          v211.X = (int)a1;
          v211.Y = v175;
          v211.Z = (int)&GroundHeight->field_4 + 1;
          AnimClass::ctor(
            v90,
            *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 844),
            &v211,
            0,
            (CoordStruct *)1,
            (void *)0x600,
            0,
            0);
        }
        v91 = a1;
        *(_DWORD *)&v4->__pad_3C[20] = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6076)
                                     - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6084);
        v92 = v175;
        *(_DWORD *)&v4->__pad_3C[24] = v91;
        v93 = GroundHeight;
        *(_DWORD *)&v4->__pad_3C[28] = v92;
        v94 = v4->field_28;
        *(_DWORD *)&v4->__pad_3C[32] = v93;
        v95 = (AudioController *)*((_DWORD *)v94 + 49);
        if ( v95 != (AudioController *)-1 )
          StartAudioControllerAt(v95, (int)&a1, 0);
        HouseClass::CreatePowerOutage((int)v4->field_2C, *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6080));
        v96 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v97 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)v96 + 72))(v96, v226);
        v98 = *(_DWORD *)v97;
        v99 = *(_DWORD *)(v97 + 4);
        HIDWORD(v183) = v99;
        v100 = *(IUnknown **)(v97 + 8);
        var1A8 = v100;
        v101 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6072) << 8;
        if ( (v98 != *(_DWORD *)&stru_B05488.__pad_579C[5116]
           || v99 != *(_DWORD *)&stru_B05488.__pad_579C[5120]
           || v100 != *(IUnknown **)&stru_B05488.__pad_579C[5124])
          && (v98 != *(_DWORD *)&stru_B05488.__pad_579C[5196]
           || v99 != *(_DWORD *)&stru_B05488.__pad_579C[5200]
           || v100 != *(IUnknown **)&stru_B05488.__pad_579C[5204]) )
        {
          for ( j = *(_DWORD *)&HouseClass_Player.__pad_5568[22684] - 1; j >= 0; --j )
          {
            v102 = *(void ***)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672] + 4 * j);
            if ( (unsigned __int8)HouseClass::IsAlliedWith(v102[135], (IUnknown *)v4->field_2C) )
            {
              v103 = (_DWORD *)(*((int (__thiscall **)(void **, char *))*v102 + 18))(v102, v228);
              v104 = Coord::Subtract(
                       &v185,
                       (IUnknown *)(v98 - *v103),
                       (IUnknown *)(HIDWORD(v183) - v103[1]),
                       (IUnknown *)((char *)var1A8 - v103[2]));
              v191 = *(double *)&v104->field_0;
              LODWORD(v192) = v104->field_8;
              Coord::Length((int *)&v191);
              if ( eax143a < v101 )
                (*((void (__thiscall **)(void **, _DWORD, void *, int))*v102 + 85))(
                  v102,
                  *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6076),
                  v4->field_2C,
                  1);
            }
          }
        }
        if ( a4 )
        {
          *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
          v105 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50920]);
          ClearThemeQueuePlaylist((int)v105);
        }
      }
      break;
    case 0xB:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        v141 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v142 = (int *)(*(int (__thiscall **)(void *))(*(_DWORD *)v141 + 72))(v141);
        v173 = *v142;
        v143 = (IUnknown *)v4->field_2C;
        a1 = (IUnknown *)v142[1];
        v175 = v142[2];
        MapClass::RevealArea1(
          (int *)&stru_87C374.__pad_14B0[8132],
          (IUnknown *)&v173,
          *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4076),
          v143,
          0,
          0,
          0,
          0,
          0);
        MapClass::RevealArea1(
          (int *)&stru_87C374.__pad_14B0[8132],
          (IUnknown *)&v173,
          *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4076),
          (IUnknown *)v4->field_2C,
          0,
          0,
          0,
          0,
          (IUnknown *)1);
        eax208a = (_DWORD *)(*(int (__thiscall **)(void *, char *, _DWORD))(*(_DWORD *)v141 + 72))(v141, v232, 0);
        PlayAudioAt2(*(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 596), eax208a, (int)v230);
        if ( a4 )
        {
          *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
          ecx179 = &stru_830620.__pad_579C[50752];
LABEL_180:
          v124 = (AnimClass *)VocClass::FindByName(ecx179);
          ClearThemeQueuePlaylist((int)v124);
        }
      }
      break;
    default:
      return;
  }
}



// ==== 0x006CDE80  nullsub_235  this=unknown  sig=csp ====
void __stdcall nullsub_235(int a1, int a2)
{
  ; /*0x6cde80*/
}


// ==== 0x006CDE90  SuperClass::ShouldDrawProgress  this=SuperClass  sig=csp ====
bool __thiscall SuperClass::ShouldDrawProgress(int this)
{
  return *(_BYTE *)(*(_DWORD *)(this + 40) + 229) || *(_BYTE *)(this + 111) == 0; /*0x6cde9d*/
}


// ==== 0x006CDEB0  SuperClass::ddtor  this=SuperClass  sig=csp ====
int __stdcall SuperClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6cdeb6*/
    return -2147467261; /*0x6cdeb8*/
  *a2 = -671656762; /*0x6cdec6*/
  a2[1] = 298989852; /*0x6cdece*/
  a2[2] = 268461211; /*0x6cded7*/
  a2[3] = -399534261; /*0x6cdee0*/
  return 0; /*0x6cdebd*/
}


// ==== 0x006CDEF0  SuperClass::LoadFromStream  this=SuperClass  sig=csp ====
int __stdcall SuperClass::LoadFromStream(AbstractClass *aP0, int aP1)
{
  int result; // eax
  int v3; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x6cdefb*/
  if ( result >= 0 ) /*0x6cdf02*/
  {
    if ( aP0 ) /*0x6cdf0a*/
    {
      AbstractClass::Constructor(aP0); /*0x6cdf0e*/
      *(_DWORD *)aP0->__pad_0 = &SuperClass::`vftable'; /*0x6cdf13*/
      *(_DWORD *)&aP0->__pad_0[4] = &SuperClass::`vftable'; /*0x6cdf19*/
      *(_DWORD *)&aP0->__pad_0[8] = &SuperClass::`vftable'; /*0x6cdf20*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_SuperClass; /*0x6cdf27*/
    }
    if ( aP0[2].NeedsSaveOrLink /*0x6cdf70*/
      && (*(int *)&stru_B05488.__pad_579C[18852] < *(int *)&stru_B05488.__pad_579C[18844]
       || (stru_B05488.__pad_579C[18849] || !*(_DWORD *)&stru_B05488.__pad_579C[18844])
       && *(int *)&stru_B05488.__pad_579C[18856] > 0
       && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[18836] + 8))(
            &stru_B05488.__pad_579C[18836],
            *(_DWORD *)&stru_B05488.__pad_579C[18844] + *(_DWORD *)&stru_B05488.__pad_579C[18856],
            0)) )
    {
      v3 = (*(_DWORD *)&stru_B05488.__pad_579C[18852])++; /*0x6cdf7d*/
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18840] + 4 * v3) = aP0; /*0x6cdf8c*/
    }
    ObjectPtr::RegisterForTracking( /*0x6cdf98*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( /*0x6cdfa6*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[8]);
    ObjectPtr::RegisterForTracking( /*0x6cdfb1*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].NeedsSaveOrLink);
    *(_DWORD *)aP0[2].__pad_0 = 0; /*0x6cdfb6*/
    *(_DWORD *)&aP0[2].__pad_0[4] = 0; /*0x6cdfbd*/
    return 0; /*0x6cdfc4*/
  }
  return result; /*0x6cdfc7*/
}


// ==== 0x006CDFD0  SuperClass::SaveState  this=SuperClass  sig=csp ====
int __stdcall SuperClass::SaveState(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6cdfdf*/
  if ( result >= 0 ) /*0x6cdfe6*/
    return 0; /*0x6cdfe8*/
  return result; /*0x6cdfea*/
}


// ==== 0x006CDFF0  SuperClass::ExecuteAction  this=SuperClass  sig=csp ====
__int64 __thiscall SuperClass::_vt10(int this, unsigned int a2, int a3)
{
  __int64 result; // rax

  result = a2; /*0x6cdff8*/
  if ( a2 == *(_DWORD *)(this + 44) ) /*0x6cdffc*/
    *(_DWORD *)(this + 44) = 0; /*0x6cdffe*/
  if ( a2 == *(_DWORD *)(this + 40) ) /*0x6ce004*/
    *(_DWORD *)(this + 40) = 0; /*0x6ce006*/
  if ( a2 == *(_DWORD *)(this + 104) ) /*0x6ce00f*/
  {
    *(_DWORD *)(this + 104) = 0; /*0x6ce011*/
    *(_BYTE *)(this + 108) = 1; /*0x6ce014*/
  }
  return result; /*0x6ce00e*/
}


// ==== 0x006CE020  SuperClass::PowerDrainUpdate  this=SuperClass  sig=csp ====
int __thiscall SuperClass::_vt13(int this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // eax
  int result; // eax
  int v9; // eax

  v3 = AbstractClass::ProcessPower((#378 *)this); /*0x6ce029*/
  LOBYTE(v3) = *(_BYTE *)(this + 109); /*0x6ce02e*/
  Power::FlagProcess(a2, v3); /*0x6ce034*/
  LOBYTE(v4) = *(_BYTE *)(this + 110); /*0x6ce039*/
  Power::FlagProcess(a2, v4); /*0x6ce03f*/
  LOBYTE(v5) = *(_BYTE *)(this + 111); /*0x6ce044*/
  Power::FlagProcess(a2, v5); /*0x6ce04a*/
  Power::TimerProcess(*(_DWORD *)(this + 120)); /*0x6ce055*/
  Power::TimerProcess(*(_DWORD *)(this + 124)); /*0x6ce060*/
  LOBYTE(v6) = *(_BYTE *)(this + 96); /*0x6ce065*/
  v7 = Power::FlagProcess(a2, v6); /*0x6ce06b*/
  LOBYTE(v7) = *(_BYTE *)(this + 108); /*0x6ce070*/
  Power::FlagProcess(a2, v7); /*0x6ce076*/
  result = *(_DWORD *)(this + 104); /*0x6ce07b*/
  if ( result ) /*0x6ce080*/
  {
    Power::TimerProcess(*(unsigned __int8 *)(result + 405)); /*0x6ce08d*/
    v9 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 104) + 4) + 16))(*(_DWORD *)(this + 104) + 4); /*0x6ce09c*/
    return Power::TimerProcess(v9); /*0x6ce0a2*/
  }
  return result; /*0x6ce0a7*/
}


// ==== 0x006CE0B0  SuperClass::Reset  this=SuperClass  sig=csp ====
int *__thiscall SuperClass::Reset(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int *result; // eax
  int v7; // ebx
  bool v8; // bl
  int v9; // esi
  int v10; // ecx
  char *v11; // edx
  _DWORD v12[4]; // [esp+4h] [ebp-10h] BYREF

  v2 = *(_DWORD *)(this + 104); /*0x6ce0b6*/
  if ( v2 ) /*0x6ce0bb*/
  {
    *(_BYTE *)(v2 + 405) = 0; /*0x6ce0bd*/
    *(_DWORD *)(this + 104) = 0; /*0x6ce0c4*/
    v12[0] = this; /*0x6ce0db*/
    v3 = (*(int (__thiscall **)(int *, _DWORD *))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], v12); /*0x6ce0df*/
    if ( v3 != -1 ) /*0x6ce0e5*/
      DynamicVector::RemoveItem(&MEMORY[0xB0F5B8], v3); /*0x6ce0ed*/
  }
  if ( *(_BYTE *)(this + 108) ) /*0x6ce0f2*/
  {
    v12[0] = this; /*0x6ce109*/
    v4 = (*(int (__thiscall **)(int *, _DWORD *))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], v12); /*0x6ce10d*/
    if ( v4 != -1 ) /*0x6ce113*/
      DynamicVector::RemoveItem(&MEMORY[0xB0F5B8], v4); /*0x6ce11b*/
    *(_BYTE *)(this + 108) = 0; /*0x6ce120*/
  }
  v5 = *(_DWORD *)(this + 36); /*0x6ce124*/
  result = (int *)(this + 48); /*0x6ce127*/
  *(_BYTE *)(this + 111) = 0; /*0x6ce12b*/
  v7 = *(_DWORD *)(this + 48); /*0x6ce12f*/
  *(_DWORD *)(this + 120) = -1; /*0x6ce131*/
  v8 = v7 != -1; /*0x6ce13b*/
  if ( v5 == -1 ) /*0x6ce141*/
    v5 = *(_DWORD *)(*(_DWORD *)(this + 40) + 176); /*0x6ce146*/
  *result = (int)MEMORY[0xA8ED84]; /*0x6ce156*/
  *(_DWORD *)(this + 52) = v12[2]; /*0x6ce15d*/
  *(_DWORD *)(this + 56) = v5; /*0x6ce160*/
  if ( !v8 ) /*0x6ce163*/
  {
    v9 = *result; /*0x6ce165*/
    if ( *result != -1 ) /*0x6ce16a*/
    {
      v10 = result[2]; /*0x6ce16c*/
      v11 = (char *)MEMORY[0xA8ED84] - v9; /*0x6ce17a*/
      if ( (int)MEMORY[0xA8ED84] - v9 >= v10 ) /*0x6ce17e*/
      {
        result[2] = 0; /*0x6ce192*/
        *result = -1; /*0x6ce195*/
      }
      else
      {
        *result = -1; /*0x6ce182*/
        result[2] = v10 - (_DWORD)v11; /*0x6ce188*/
      }
    }
  }
  return result; /*0x6ce18b*/
}


// ==== 0x006CE1A0  SuperClass::ShouldFlashTab  this=SuperClass  sig=csp ====
bool __thiscall SuperClass::ShouldFlashTab(int this)
{
  int v1; // eax
  int v2; // eax

  if ( *(_BYTE *)(this + 112) ) /*0x6ce1a0*/
    return 0; /*0x6ce1a5*/
  v1 = *(_DWORD *)(this + 40); /*0x6ce1a7*/
  if ( *(_BYTE *)(v1 + 229) ) /*0x6ce1aa*/
  {
    if ( !*(_DWORD *)(this + 124) ) /*0x6ce1b9*/
      return 0; /*0x6ce1b9*/
  }
  else if ( !*(_BYTE *)(this + 111) ) /*0x6ce1c2*/
  {
    return 0; /*0x6ce1c2*/
  }
  v2 = *(_DWORD *)(v1 + 232); /*0x6ce1c4*/
  if ( v2 == -1 ) /*0x6ce1cd*/
    return 1; /*0x6ce1d1*/
  return v2 && v2 + *(_DWORD *)(this + 116) > (int)MEMORY[0xA8ED84]; /*0x6ce1d1*/
}


// ==== 0x006CE1F0  AbstractClass::updateTargetTracking  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::sub_6CE1F0(int a1)
{
  return 57; /*0x6ce1f5*/
}


// ==== 0x006CE200  SuperClass::StubReturn57  this=SuperClass  sig=csp ====
int SuperClass::_vt11()
{
  return 57; /*0x6ce205*/
}


// ==== 0x006CE210  SuperClass::StubReturn128  this=SuperClass  sig=csp ====
int SuperClass::_vt12()
{
  return 128; /*0x6ce215*/
}


// ==== 0x006CE220  SuperClass::ProcessEvent  this=SuperClass  sig=csp ====
SuperClass *__thiscall SuperClass::ProcessEvent(void *Block, char a2)
{
  SuperClass::CleanupMembers((int)Block); /*0x6ce223*/
  if ( (a2 & 1) != 0 ) /*0x6ce22d*/
    __3_YAXPAX_Z(Block); /*0x6ce230*/
  return (SuperClass *)Block; /*0x6ce23a*/
}


// ==== 0x006CE240  Coord3D::Add  this=BuildingTypeClass  sig=csp ====
_DWORD *__thiscall Coord3D::Add(_DWORD *this, IUnknown *aP1, AnimClass *aP2)
{
  char *v3; // esi
  char *v4; // edi

  v3 = (char *)aP2->field_4 + this->vtable2; /*0x6ce252*/
  v4 = (char *)aP2->field_8 + this->vtable3; /*0x6ce25a*/
  aP1->field_0 = *this + aP2->field_0; /*0x6ce262*/
  aP1->field_4 = (int)v3; /*0x6ce264*/
  aP1->field_8 = (int)v4; /*0x6ce267*/
  return &aP1->field_0; /*0x6ce26a*/
}


// ==== 0x006CE270  SuperClass::SetFieldX  this=ILocomotion  sig=csp ====
int __thiscall sub_6CE270(int *this)
{
  int result; // eax

  result = *this; /*0x6ce270*/
  if ( *this ) /*0x6ce270*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 4))(result); /*0x6ce279*/
  return result; /*0x6ce27c*/
}


// ==== 0x006CE280  SuperClass::AdvanceCountdown  this=VOID_PTR  sig=csp ====
void __thiscall sub_6CE280(int *this)
{
  int v1; // esi
  int v2; // eax
  char *v3; // edx

  v1 = *this; /*0x6ce281*/
  if ( *this != -1 ) /*0x6ce286*/
  {
    v2 = *(this + 2); /*0x6ce288*/
    v3 = (char *)MEMORY[0xA8ED84] - v1; /*0x6ce296*/
    if ( (int)MEMORY[0xA8ED84] - v1 >= v2 ) /*0x6ce29a*/
    {
      *(this + 2) = 0; /*0x6ce2ab*/
      *this = -1; /*0x6ce2ae*/
    }
    else
    {
      *this = -1; /*0x6ce29e*/
      *(this + 2) = v2 - (_DWORD)v3; /*0x6ce2a4*/
    }
  }
}


// ==== 0x006CE2C0  SuperClass::SetCurrentFrame  this=IUnknown  sig=csp ====
wchar_t *__thiscall sub_6CE2C0(_DWORD *this)
{
  wchar_t *result; // eax

  if ( *this == -1 ) /*0x6ce2c3*/
  {
    result = MEMORY[0xA8ED84]; /*0x6ce2c5*/
    *this = MEMORY[0xA8ED84]; /*0x6ce2ca*/
  }
  return result; /*0x6ce2cc*/
}


// ==== 0x006CE2D0  VectorClass::RemoveAt  this=DynamicVectorClass  sig=csp ====
char __thiscall VectorClass_RemoveAt(int *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx

  v3 = (*(int (__thiscall **)(int *, int))(*this + 16))(this, a2); /*0x6ce2dc*/
  if ( v3 == -1 ) /*0x6ce2e2*/
    return 0; /*0x6ce2e2*/
  v4 = this->Items; /*0x6ce2e4*/
  if ( v3 >= v4 ) /*0x6ce2e9*/
    return 0; /*0x6ce30b*/
  v5 = v4 - 1; /*0x6ce2eb*/
  for ( this->Items = v5; v3 < this->Items; *(_DWORD *)(this->Items + 4 * v3 - 4) = *(_DWORD *)(this->Items + 4 * v3) ) /*0x6ce2f1*/
    ++v3; /*0x6ce2f6*/
  return 1; /*0x6ce307*/
}


// ==== 0x006CE320  SuperClass::RemoveFromPointerArray  this=VectorClass  sig=csp ====
char __thiscall sub_6CE320(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = this->q010; /*0x6ce320*/
  v3 = a2; /*0x6ce323*/
  if ( a2 >= v2 ) /*0x6ce329*/
    return 0; /*0x6ce34c*/
  v4 = v2 - 1; /*0x6ce32b*/
  this->q010 = v4; /*0x6ce32e*/
  if ( a2 < v4 ) /*0x6ce331*/
  {
    do /*0x6ce344*/
    {
      ++v3; /*0x6ce337*/
      *(_DWORD *)(this->Items + 4 * v3 - 4) = *(_DWORD *)(this->Items + 4 * v3); /*0x6ce33b*/
    }
    while ( v3 < this->q010 ); /*0x6ce344*/
  }
  return 1; /*0x6ce349*/
}


// ==== 0x006CE360  sub_6CE360  this=-  sig=ida-proto ====
int sub_6CE360()
{
  MEMORY[0xB0C098] = 0; /*0x6ce362*/
  MEMORY[0xB0C09C] = 0; /*0x6ce367*/
  MEMORY[0xB0C0A0] = 0; /*0x6ce36c*/
  MEMORY[0xB0C0A4] = 0; /*0x6ce371*/
  return 0; /*0x6ce376*/
}


// ==== 0x006CE380  sub_6CE380  this=-  sig=ida-proto ====
void sub_6CE380()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6ce38c*/
  MEMORY[0xB0C0B0] = Math::Sqrt(v0 + v0); /*0x6ce39e*/
}


// ==== 0x006CE3B0  sub_6CE3B0  this=-  sig=ida-proto ====
void sub_6CE3B0()
{
  MEMORY[0xB0C100] = MEMORY[0xB0C0B0] / 60.0; /*0x6ce3bc*/
}


// ==== 0x006CE3D0  sub_6CE3D0  this=-  sig=ida-proto ====
void sub_6CE3D0()
{
  MEMORY[0xB0C0E8] = 1.0 / MEMORY[0xB0C100]; /*0x6ce3dc*/
}


// ==== 0x006CE3F0  sub_6CE3F0  this=-  sig=ida-proto ====
void sub_6CE3F0()
{
  MEMORY[0xB0C0E0] = 0.0174532925199433 * 45.0; /*0x6ce3fc*/
}


// ==== 0x006CE410  sub_6CE410  this=-  sig=ida-proto ====
void sub_6CE410()
{
  MEMORY[0xB0C0B8] = 0.0174532925199433 * 60.0; /*0x6ce41c*/
}


// ==== 0x006CE430  sub_6CE430  this=-  sig=ida-proto ====
void sub_6CE430()
{
  MEMORY[0xB0C090] = 0.0174532925199433 * 90.0; /*0x6ce43c*/
}


// ==== 0x006CE450  sub_6CE450  this=-  sig=ida-proto ====
__int64 sub_6CE450()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0C090] - MEMORY[0xB0C0B8]); /*0x6ce462*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0C0B0] * 0.5); /*0x6ce476*/
  MEMORY[0xB0C108] = result; /*0x6ce47b*/
  return result; /*0x6ce480*/
}


// ==== 0x006CE490  sub_6CE490  this=-  sig=ida-proto ====
void sub_6CE490()
{
  MEMORY[0xB0C0C0] = Math::ArcTan((double)MEMORY[0xB0C108] * 0.00390625); /*0x6ce4a7*/
}


// ==== 0x006CE4C0  sub_6CE4C0  this=-  sig=ida-proto ====
void sub_6CE4C0()
{
  MEMORY[0xB0C0D8] = Math::ArcTan((double)(2 * MEMORY[0xB0C108]) / MEMORY[0xB0C0B0]); /*0x6ce4e2*/
}


// ==== 0x006CE4F0  sub_6CE4F0  this=-  sig=ida-proto ====
__int64 sub_6CE4F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0C108]) + 0.5); /*0x6ce50b*/
  MEMORY[0xB0C0FC] = result; /*0x6ce510*/
  return result; /*0x6ce516*/
}


// ==== 0x006CE520  sub_6CE520  this=-  sig=ida-proto ====
int sub_6CE520()
{
  MEMORY[0xB0C0A8] = 0; /*0x6ce522*/
  MEMORY[0xB0C0AA] = 0; /*0x6ce528*/
  return 0; /*0x6ce52e*/
}


// ==== 0x006CE530  sub_6CE530  this=-  sig=ida-proto ====
int sub_6CE530()
{
  MEMORY[0xB0C0C8] = 0; /*0x6ce532*/
  MEMORY[0xB0C0CC] = 0; /*0x6ce537*/
  MEMORY[0xB0C0D0] = 0; /*0x6ce53c*/
  return 0; /*0x6ce541*/
}


// ==== 0x006CE550  sub_6CE550  this=-  sig=ida-proto ====
int sub_6CE550()
{
  MEMORY[0xB0C0F8] = 0; /*0x6ce555*/
  MEMORY[0xB0C0F0] = 128; /*0x6ce55f*/
  MEMORY[0xB0C0F4] = 128; /*0x6ce564*/
  return 128; /*0x6ce569*/
}


// ==== 0x006CE570  ObjectClass::method_6CE570  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall sub_6CE570(void *this)
{
  ObjectClass *v2; // edi
  const void **v3; // esi

  v2 = 0; /*0x6ce575*/
  v3 = (const void **)&stru_830620.__pad_579C[51204]; /*0x6ce577*/
  while ( _strcmpi(*v3, this) ) /*0x6ce58a*/
  {
    ++v3; /*0x6ce58c*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x6ce58f*/
    if ( (int)v3 >= (int)&stru_830620.__pad_579C[51252] ) /*0x6ce596*/
      return (ObjectClass *)-1; /*0x6ce59e*/
  }
  return v2; /*0x6ce598*/
}


// ==== 0x006CE5B0  SuperWeaponTypeClass::SuperWeaponTypeClass  this=int  sig=csp ====
int __thiscall SuperWeaponTypeClass::SuperWeaponTypeClass(int this, ObjectClass *aP1)
{
  int v3; // eax

  AbstractTypeClass::Constructor(this, (AbstractClass *)aP1); /*0x6ce5bb*/
  *(_DWORD *)(this + 156) = 0; /*0x6ce5cb*/
  *(_DWORD *)(this + 160) = -1; /*0x6ce5d1*/
  *(_DWORD *)(this + 164) = -1; /*0x6ce5d7*/
  *(_DWORD *)(this + 168) = -1; /*0x6ce5dd*/
  *(_DWORD *)(this + 172) = -1; /*0x6ce5e3*/
  *(_DWORD *)(this + 176) = 4500; /*0x6ce5e9*/
  *(_DWORD *)(this + 180) = -1; /*0x6ce5f3*/
  *(_DWORD *)(this + 184) = 0; /*0x6ce5f9*/
  *(_DWORD *)(this + 188) = 0; /*0x6ce5ff*/
  *(_DWORD *)(this + 192) = -1; /*0x6ce605*/
  *(_DWORD *)(this + 196) = -1; /*0x6ce60b*/
  *(_DWORD *)(this + 200) = 0; /*0x6ce611*/
  *(_BYTE *)(this + 204) = 0; /*0x6ce617*/
  *(_DWORD *)(this + 232) = -1; /*0x6ce619*/
  *(_DWORD *)(this + 240) = -1; /*0x6ce61f*/
  *(_BYTE *)(this + 229) = 0; /*0x6ce628*/
  *(_BYTE *)(this + 230) = 1; /*0x6ce62f*/
  *(_BYTE *)(this + 231) = 0; /*0x6ce636*/
  *(_BYTE *)(this + 236) = 0; /*0x6ce63c*/
  *(_BYTE *)(this + 237) = 0; /*0x6ce642*/
  *(_BYTE *)(this + 238) = 0; /*0x6ce648*/
  *(_BYTE *)(this + 244) = 0; /*0x6ce64e*/
  *(_BYTE *)(this + 245) = 0; /*0x6ce654*/
  *(_DWORD *)(this + 248) = 0; /*0x6ce65a*/
  *(_DWORD *)(this + 252) = 0; /*0x6ce660*/
  *(_DWORD *)this = &SuperWeaponTypeClass::`vftable'; /*0x6ce666*/
  *(_DWORD *)(this + 4) = &SuperWeaponTypeClass::`vftable'; /*0x6ce66d*/
  *(_DWORD *)(this + 8) = &SuperWeaponTypeClass::`vftable'; /*0x6ce673*/
  *(_DWORD *)(this + 12) = &vt_SuperWeaponTypeClass; /*0x6ce67a*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x6ce681*/
  *(_DWORD *)(this + 152) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[324]; /*0x6ce68c*/
  if ( *(int *)&MEMORY[0xA8D63C].__pad_BC0[324] < *(int *)&MEMORY[0xA8D63C].__pad_BC0[316] /*0x6ce6c4*/
    || (MEMORY[0xA8D63C].__pad_BC0[321] || !*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[316])
    && *(int *)&MEMORY[0xA8D63C].__pad_BC0[328] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[308] + 8))(
         &MEMORY[0xA8D63C].__pad_BC0[308],
         *(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[316] + *(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[328],
         0) )
  {
    v3 = (*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[324])++; /*0x6ce6d1*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[312] + 4 * v3) = this; /*0x6ce6e0*/
  }
  if ( this + 36 != this + 204 ) /*0x6ce6e8*/
    qmemcpy((void *)(this + 204), (const void *)(this + 36), 0x19u); /*0x6ce6ef*/
  return this; /*0x6ce6f2*/
}


// ==== 0x006CE7C0  SuperWeaponTypeClass::SD_vt03  this=SuperWeaponTypeClass  sig=csp ====
int __stdcall SuperWeaponTypeClass::SD_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6ce7c6*/
    return -2147467261; /*0x6ce7c8*/
  *a2 = 217234663; /*0x6ce7d6*/
  a2[1] = 298989284; /*0x6ce7de*/
  a2[2] = 1610668216; /*0x6ce7e7*/
  a2[3] = -318126072; /*0x6ce7f0*/
  return 0; /*0x6ce7cd*/
}


// ==== 0x006CE800  SuperWeaponTypeClass::SaveLoad_Prefix  this=SuperWeaponTypeClass  sig=csp ====
int __stdcall SuperWeaponTypeClass::SaveLoad_Prefix(int a1, int a2)
{
  int result; // eax
  int v3; // eax
  char v4; // [esp+7h] [ebp-201h] BYREF
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  result = AbstractClass::SaveLoad_Prefix_0((_DWORD *)a1, a2); /*0x6ce814*/
  if ( result >= 0 ) /*0x6ce81b*/
  {
    if ( a1 ) /*0x6ce823*/
    {
      AbstractTypeClass::Init(a1, (int)&v4); /*0x6ce82c*/
      *(_DWORD *)(a1 + 184) = 0; /*0x6ce831*/
      *(_DWORD *)a1 = &SuperWeaponTypeClass::`vftable'; /*0x6ce83b*/
      *(_DWORD *)(a1 + 4) = &SuperWeaponTypeClass::`vftable'; /*0x6ce841*/
      *(_DWORD *)(a1 + 8) = &SuperWeaponTypeClass::`vftable'; /*0x6ce848*/
      *(_DWORD *)(a1 + 12) = &vt_SuperWeaponTypeClass; /*0x6ce84f*/
    }
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(a1 + 156)); /*0x6ce862*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(a1 + 200)); /*0x6ce873*/
    _makepath(Buffer, 0, 0, (const char *)(a1 + 204), Ext); /*0x6ce88d*/
    v3 = SearchMIXFile(Buffer, 0); /*0x6ce89b*/
    *(_DWORD *)(a1 + 184) = v3; /*0x6ce8a2*/
    if ( !v3 ) /*0x6ce8a8*/
      *(_DWORD *)(a1 + 184) = SearchMIXFile(g_Str_File_XXICON_SHP, 0); /*0x6ce8b6*/
    return 0; /*0x6ce8bc*/
  }
  return result; /*0x6ce8be*/
}


// ==== 0x006CE8D0  SuperWeaponTypeClass::SaveLoad_Prefix_0  this=SuperWeaponTypeClass  sig=csp ====
int __stdcall SuperWeaponTypeClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6ce8df*/
  if ( result >= 0 ) /*0x6ce8e6*/
    return 0; /*0x6ce8e8*/
  return result; /*0x6ce8ea*/
}


// ==== 0x006CE8F0  SuperWeaponTypeClass::SD_vt11  this=SuperWeaponTypeClass  sig=csp ====
int SuperWeaponTypeClass::SD_vt11()
{
  return 32; /*0x6ce8f5*/
}


// ==== 0x006CE900  SuperWeaponTypeClass::SD_vt12  this=SuperWeaponTypeClass  sig=csp ====
int SuperWeaponTypeClass::SD_vt12()
{
  return 256; /*0x6ce905*/
}


// ==== 0x006CE910  SuperWeaponTypeClass::SD_vt13  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::SD_vt13(int this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // eax

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6ce919*/
  Power::TimerProcess(*(_DWORD *)(this + 152)); /*0x6ce927*/
  Power::TimerProcess(*(_DWORD *)(this + 188)); /*0x6ce935*/
  Power::TimerProcess(*(_DWORD *)(this + 160)); /*0x6ce943*/
  Power::TimerProcess(*(_DWORD *)(this + 164)); /*0x6ce951*/
  Power::TimerProcess(*(_DWORD *)(this + 168)); /*0x6ce95f*/
  v3 = Power::TimerProcess(*(_DWORD *)(this + 172)); /*0x6ce96d*/
  LOBYTE(v3) = *(_BYTE *)(this + 230); /*0x6ce972*/
  Power::FlagProcess(a2, v3); /*0x6ce97b*/
  LOBYTE(v4) = *(_BYTE *)(this + 231); /*0x6ce980*/
  Power::FlagProcess(a2, v4); /*0x6ce989*/
  LOBYTE(v5) = *(_BYTE *)(this + 237); /*0x6ce98e*/
  v6 = Power::FlagProcess(a2, v5); /*0x6ce997*/
  LOBYTE(v6) = *(_BYTE *)(this + 238); /*0x6ce99c*/
  Power::FlagProcess(a2, v6); /*0x6ce9a5*/
  Power::TimerProcess(*(_DWORD *)(this + 240)); /*0x6ce9b3*/
  LOBYTE(v7) = *(_BYTE *)(this + 244); /*0x6ce9b8*/
  Power::FlagProcess(a2, v7); /*0x6ce9c1*/
  Power::TimerProcess(*(_DWORD *)(this + 176)); /*0x6ce9cf*/
  Power::TimerProcess(*(_DWORD *)(this + 180)); /*0x6ce9dd*/
  LOBYTE(v8) = *(_BYTE *)(this + 229); /*0x6ce9e2*/
  v9 = Power::FlagProcess(a2, v8); /*0x6ce9eb*/
  LOBYTE(v9) = *(_BYTE *)(this + 245); /*0x6ce9f0*/
  return Power::FlagProcess(a2, v9); /*0x6ce9fe*/
}


// ==== 0x006CEA10  SuperWeaponTypeClass::SD_vt16  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::SD_vt16(_DWORD *this)
{
  return this->ArrayIndex; /*0x6cea16*/
}


// ==== 0x006CEA20  SuperWeaponTypeClass::SD_vt25  this=SuperWeaponTypeClass  sig=csp ====
char __thiscall SuperWeaponTypeClass::SD_vt25(int this, unsigned __int8 ***aP1)
{
  WeaponTypeClass *v3; // edi
  WeaponTypeClass *v4; // eax
  int v5; // ecx
  int SWProperties; // eax
  char Bool_Overwrite; // al
  INIClass *aP3; // ecx
  int Int_Overwrite; // eax
  char v10; // al
  char v11; // cl
  char v12; // al
  char v13; // al
  int v14; // edi
  int Index; // eax
  int v16; // edi
  int v17; // eax
  double v18; // st7
  double Double_Overwrite; // st7
  CCINIClass *v20; // edx
  char **v21; // edi
  char **v22; // edi
  BuildingTypeClass *v23; // edi
  BuildingTypeClass *v24; // eax
  char v25; // cl
  char v26; // al
  double v27; // st7
  CCINIClass *v28; // edi
  int v29; // eax
  char aP3_4; // [esp+4h] [ebp-404h]
  char aP3_4a; // [esp+4h] [ebp-404h]
  char aP3_4b; // [esp+4h] [ebp-404h]
  char aP3_4c; // [esp+4h] [ebp-404h]
  int v35; // [esp+18h] [ebp-3F0h]
  int v36; // [esp+18h] [ebp-3F0h]
  char Destination[24]; // [esp+1Ch] [ebp-3ECh] BYREF
  char v38; // [esp+34h] [ebp-3D4h]
  INIClass aP4; // [esp+38h] [ebp-3D0h] BYREF
  INIClass v40; // [esp+88h] [ebp-380h] BYREF
  INIClass Source[4]; // [esp+108h] [ebp-300h] BYREF
  char Buffer[512]; // [esp+208h] [ebp-200h] BYREF

  INIClass::ResetSection(aP1); /*0x6cea33*/
  if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) ) /*0x6cea3b*/
    return 0; /*0x6cee51*/
  v3 = *(WeaponTypeClass **)(this + 156); /*0x6cea4a*/
  if ( INIClass::GetString( /*0x6cea6d*/
         aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_817244.sectionHead[2],
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         &v40,
         128) )
  {
    v4 = InfantryTypeClass::Find(v40.__pad_0); /*0x6cea7d*/
  }
  else
  {
    v4 = v3; /*0x6cea84*/
  }
  v5 = *(_DWORD *)(this + 188); /*0x6cea86*/
  *(_DWORD *)(this + 156) = v4; /*0x6cea8c*/
  SWProperties = SuperWeaponTypeClass::loadSWProperties( /*0x6cea9b*/
                   aP1,
                   (CCINIClass *)(this + 36),
                   (unsigned __int8 *)&stru_817244.INIClass_field_2C,
                   v5);
  aP3_4 = *(_BYTE *)(this + 230); /*0x6ceaa8*/
  *(_DWORD *)(this + 188) = SWProperties; /*0x6ceaaf*/
  *(_BYTE *)(this + 230) = INIClass::ReadBool_Overwrite( /*0x6ceaba*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[51536],
                             aP3_4);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6ceacf*/
                     (int)aP1,
                     (unsigned __int8 *)(this + 36),
                     (CCINIClass *)&stru_830620.__pad_579C[51512],
                     *(_BYTE *)(this + 231));
  aP3 = *(INIClass **)(this + 232); /*0x6cead4*/
  *(_BYTE *)(this + 231) = Bool_Overwrite; /*0x6ceada*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x6ceae9*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_830620.__pad_579C[51488],
                    aP3);
  aP3_4a = *(_BYTE *)(this + 236); /*0x6ceaf6*/
  *(_DWORD *)(this + 232) = Int_Overwrite; /*0x6ceafd*/
  *(_BYTE *)(this + 236) = INIClass::ReadBool_Overwrite( /*0x6ceb08*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[51472],
                             aP3_4a);
  v10 = INIClass::ReadBool_Overwrite( /*0x6ceb1d*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[51460],
          *(_BYTE *)(this + 237));
  v11 = *(_BYTE *)(this + 238); /*0x6ceb22*/
  *(_BYTE *)(this + 237) = v10; /*0x6ceb28*/
  v12 = INIClass::ReadBool_Overwrite( /*0x6ceb37*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[51448],
          v11);
  aP3_4b = *(_BYTE *)(this + 244); /*0x6ceb44*/
  *(_BYTE *)(this + 238) = v12; /*0x6ceb4b*/
  v13 = INIClass::ReadBool_Overwrite( /*0x6ceb51*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[51436],
          aP3_4b);
  v14 = *(_DWORD *)(this + 192); /*0x6ceb56*/
  *(_BYTE *)(this + 244) = v13; /*0x6ceb5c*/
  if ( !INIClass::GetString( /*0x6ceb94*/
          aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[51420],
          (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
          &v40,
          128)
    || (Index = VocClass::FindIndex(&v40), Index == -1) )
  {
    Index = v14; /*0x6ceb96*/
  }
  v16 = *(_DWORD *)(this + 196); /*0x6ceb98*/
  *(_DWORD *)(this + 192) = Index; /*0x6cebb8*/
  if ( !INIClass::GetString( /*0x6cebd6*/
          aP1,
          (INIClass *)(this + 36),
          &unk_818418,
          (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
          &v40,
          128)
    || (v17 = VocClass::FindIndex(&v40), v17 == -1) )
  {
    v17 = v16; /*0x6cebd8*/
  }
  v18 = *(float *)(this + 248); /*0x6cebda*/
  *(_DWORD *)(this + 196) = v17; /*0x6cebe5*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x6cebf4*/
                       (int)aP1,
                       (INIClass *)(this + 36),
                       (unsigned __int8 *)&stru_830620.__pad_579C[51412],
                       (INIClass *)LODWORD(v18));
  v20 = *(CCINIClass **)(this + 252); /*0x6cebf9*/
  *(float *)(this + 248) = Double_Overwrite; /*0x6cec01*/
  *(_DWORD *)(this + 252) = INIClass::ReadInt_Overwrite( /*0x6cec13*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_830620.__pad_579C[51396],
                              (INIClass *)v20);
  INIClass::GetString( /*0x6cec2d*/
    aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)g_INI_Key_Type,
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    (INIClass *)&aP4.__pad_20[8],
    40);
  if ( strlen(&aP4.__pad_20[8]) ) /*0x6cec36*/
  {
    v35 = 0; /*0x6cec42*/
    v21 = (char **)&stru_830620.__pad_579C[51204]; /*0x6cec46*/
    while ( _strcmpi(*v21, &aP4.__pad_20[8]) ) /*0x6cec5d*/
    {
      ++v21; /*0x6cec63*/
      ++v35; /*0x6cec6d*/
      if ( (int)v21 >= (int)&stru_830620.__pad_579C[51252] ) /*0x6cec71*/
        goto LABEL_18; /*0x6cec71*/
    }
    if ( v35 != -1 ) /*0x6cec7c*/
      *(_DWORD *)(this + 180) = v35; /*0x6cec7e*/
  }
LABEL_18:
  INIClass::GetString( /*0x6cec84*/
    aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&stru_830620.__pad_579C[51380],
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &aP4,
    40);
  if ( strlen(aP4.__pad_0) ) /*0x6ceca1*/
  {
    v36 = 0; /*0x6cecad*/
    v22 = (char **)&stru_830620.__pad_579C[51204]; /*0x6cecb1*/
    while ( _strcmpi(*v22, aP4.__pad_0) ) /*0x6cecc8*/
    {
      ++v22; /*0x6cecce*/
      ++v36; /*0x6cecd8*/
      if ( (int)v22 >= (int)&stru_830620.__pad_579C[51252] ) /*0x6cecdc*/
        goto LABEL_25; /*0x6cecdc*/
    }
    if ( v36 != -1 ) /*0x6cece7*/
      *(_DWORD *)(this + 240) = v36; /*0x6cece9*/
  }
LABEL_25:
  v23 = *(BuildingTypeClass **)(this + 200); /*0x6cecef*/
  if ( INIClass::GetString( /*0x6ced0f*/
         aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_830620.__pad_579C[51368],
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         &v40,
         128) )
  {
    v24 = BuildingTypeClass::FindOrCreate(v40.__pad_0); /*0x6ced1f*/
  }
  else
  {
    v24 = v23; /*0x6ced26*/
  }
  v25 = *(_BYTE *)(this + 229); /*0x6ced28*/
  *(_DWORD *)(this + 200) = v24; /*0x6ced2e*/
  v26 = INIClass::ReadBool_Overwrite( /*0x6ced3d*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[51352],
          v25);
  aP3_4c = *(_BYTE *)(this + 245); /*0x6ced4a*/
  *(_BYTE *)(this + 229) = v26; /*0x6ced51*/
  *(_BYTE *)(this + 245) = INIClass::ReadBool_Overwrite( /*0x6ced68*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[51336],
                             aP3_4c);
  v27 = INIClass::ReadDouble_Overwrite( /*0x6ced6e*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[51320],
          0);
  if ( v27 != 0.0 ) /*0x6ced7e*/
    *(_DWORD *)(this + 176) = Math::RoundToInt(v27 * 900.0); /*0x6ced8b*/
  v28 = (CCINIClass *)(this + 204); /*0x6ced9c*/
  INIClass::GetString( /*0x6cedb1*/
    aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&stru_830620.__pad_579C[51304],
    (INIClass *)(this + 204),
    Source,
    256);
  if ( Source ) /*0x6cedbf*/
  {
    strncpy(Destination, Source[0].__pad_0, 0x18u); /*0x6cedd6*/
    v38 = 0; /*0x6cedde*/
  }
  else
  {
    Destination[0] = (unsigned __int8)Source; /*0x6cedc1*/
  }
  if ( Destination != (char *)v28 ) /*0x6cede9*/
  {
    qmemcpy(v28, Destination, 0x18u); /*0x6cedf4*/
    *(_BYTE *)(this + 228) = v38; /*0x6cedf6*/
  }
  _makepath(Buffer, 0, 0, (const char *)(this + 204), Ext); /*0x6cee0f*/
  v29 = SearchMIXFile(Buffer, 0); /*0x6cee20*/
  *(_DWORD *)(this + 184) = v29; /*0x6cee26*/
  if ( !v29 ) /*0x6cee2f*/
    *(_DWORD *)(this + 184) = SearchMIXFile(g_Str_File_XXICON_SHP, 0); /*0x6cee3d*/
  return 1; /*0x6cee43*/
}


// ==== 0x006CEE60  ObjectClass::ObjectTypeClass_Read  this=ObjectClass  sig=csp ====
int __thiscall ObjectTypeClass_Read(void *this)
{
  int v2; // esi

  if ( !this ) /*0x6cee66*/
    return -1; /*0x6cee66*/
  v2 = 0; /*0x6cee6d*/
  if ( *(int *)&HouseClass_Player.__pad_5568[20620] <= 0 ) /*0x6cee71*/
    return -1; /*0x6cee96*/
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20608] + 4 * v2) + 36), this) ) /*0x6cee8a*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[20620] ) /*0x6cee94*/
      return -1; /*0x6cee94*/
  }
  return v2; /*0x6cee96*/
}


// ==== 0x006CEEB0  SuperWeaponTypeClass::FindFirstOfAction  this=int  sig=csp ====
int __thiscall SuperWeaponTypeClass::FindFirstOfAction(void *this)
{
  int v1; // eax
  char *i; // edx

  v1 = 0; /*0x6ceeb8*/
  if ( MEMORY[0xA8E340] <= 0 ) /*0x6ceebd*/
    return 0; /*0x6ceed9*/
  for ( i = (char *)MEMORY[0xA8E334]; *(void **)(*(_DWORD *)i + 188) != this; i += 4 ) /*0x6ceec5*/
  {
    if ( ++v1 >= MEMORY[0xA8E340] ) /*0x6ceed7*/
      return 0; /*0x6ceed7*/
  }
  return *((_DWORD *)MEMORY[0xA8E334] + v1); /*0x6ceed9*/
}


// ==== 0x006CEEF0  WeaponTypeClass::Process  this=ObjectClass  sig=csp ====
int __thiscall WeaponTypeClass::Process(ObjectClass *Source)
{
  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x6cef0c*/
    return 0; /*0x6cef6f*/
  v2 = 0; /*0x6cef1d*/
  if ( *(int *)&HouseClass_Player.__pad_5568[20620] <= 0 ) /*0x6cef21*/
  {
LABEL_6:
    v3 = __2_YAPAXI_Z(0x100u); /*0x6cef46*/
    if ( v3 ) /*0x6cef55*/
      return SuperWeaponTypeClass::SuperWeaponTypeClass(v3, Source); /*0x6cef61*/
    return 0; /*0x6cef55*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20608] + 4 * v2) + 36), Source) ) /*0x6cef3a*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[20620] ) /*0x6cef44*/
      goto LABEL_6; /*0x6cef44*/
  }
  return *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20608] + 4 * v2); /*0x6cef5f*/
}


// ==== 0x006CEF80  SuperWeaponTypeClass::SD_vt27  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::SD_vt27(_DWORD *this, int a2, int a3)
{
  int v4; // eax

  if ( this->Type != 10 ) /*0x6cef8b*/
    return this->ActionValue_e; /*0x6cef8b*/
  if ( a3
    && (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 44))(a3) == 6
    && (v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 44))(a3),
        (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v4 == 6 ? a3 + 0x21C : 540), HouseClass_Player)) )
  {
    return this->ActionValue_e; /*0x6cefd3*/
  }
  else
  {
    return 70; /*0x6cefca*/
  }
}


// ==== 0x006CEFE0  SuperWeaponTypeClass::SDDTOR  this=SuperWeaponTypeClass  sig=csp ====
SuperWeaponTypeClass *__thiscall SuperWeaponTypeClass::SDDTOR(_DWORD *Block, char a2)
{
  int v3; // eax
  _DWORD *v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &SuperWeaponTypeClass::`vftable'; /*0x6cefed*/
  *(Block + 1) = &SuperWeaponTypeClass::`vftable'; /*0x6ceff3*/
  *(Block + 2) = &SuperWeaponTypeClass::`vftable'; /*0x6ceffa*/
  *(Block + 3) = &vt_SuperWeaponTypeClass; /*0x6cf001*/
  v5 = Block; /*0x6cf00f*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0xA8E330] + 16))(&MEMORY[0xA8E330], &v5); /*0x6cf013*/
  if ( v3 != -1 && v3 < MEMORY[0xA8E340] && v3 < --MEMORY[0xA8E340] ) /*0x6cf02e*/
  {
    do /*0x6cf046*/
    {
      ++v3; /*0x6cf036*/
      *((_DWORD *)MEMORY[0xA8E334] + v3 - 1) = *((_DWORD *)MEMORY[0xA8E334] + v3); /*0x6cf03a*/
    }
    while ( v3 < MEMORY[0xA8E340] ); /*0x6cf046*/
  }
  AbstractTypeClass::Dtor(Block); /*0x6cf04a*/
  if ( (a2 & 1) != 0 ) /*0x6cf054*/
    OperatorDelete(Block); /*0x6cf057*/
  return (SuperWeaponTypeClass *)Block; /*0x6cf061*/
}


// ==== 0x006CF070  sub_6CF070  this=-  sig=ida-proto ====
int sub_6CF070()
{
  sub_6CF8F0(&MEMORY[0xB0C114], 0, 0); /*0x6cf079*/
  MEMORY[0xB0C114] = (int)&vt_DynamicVectorClass_SwizzlePointerClass; /*0x6cf087*/
  MEMORY[0xB0C128] = 10; /*0x6cf091*/
  MEMORY[0xB0C124] = 0; /*0x6cf09b*/
  sub_6CF8F0(&MEMORY[0xB0C12C], 0, 0); /*0x6cf0a5*/
  MEMORY[0xB0C12C] = (int)&vt_DynamicVectorClass_SwizzlePointerClass; /*0x6cf0b4*/
  MEMORY[0xB0C13C] = 0; /*0x6cf0be*/
  MEMORY[0xB0C110] = (int)&vt_SwizzleManagerClass; /*0x6cf0c8*/
  MEMORY[0xB0C128] = 1000; /*0x6cf0d2*/
  MEMORY[0xB0C140] = 1000; /*0x6cf0d7*/
  return atexit(SwizzleManagerClass::Register); /*0x6cf0e2*/
}


// ==== 0x006CF0F0  SwizzleManagerClass::Register  this=SwizzleManagerClass  sig=ida-proto ====
void __cdecl sub_6CF0F0()
{
  MEMORY[0xB0C110] = (int)&vt_SwizzleManagerClass; /*0x6cf0f6*/
  SwizzleManagerClass::ConvertNodes((int)&MEMORY[0xB0C110]); /*0x6cf100*/
  MEMORY[0xB0C12C] = (int)&vt_VectorClass_SwizzlePointerClass; /*0x6cf10e*/
  if ( MEMORY[0xB0C130] && MEMORY[0xB0C139] ) /*0x6cf120*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0C130]); /*0x6cf123*/
    MEMORY[0xB0C130] = 0; /*0x6cf12b*/
  }
  MEMORY[0xB0C139] = 0; /*0x6cf136*/
  MEMORY[0xB0C134] = 0; /*0x6cf13e*/
  MEMORY[0xB0C114] = (int)&vt_VectorClass_SwizzlePointerClass; /*0x6cf144*/
  if ( MEMORY[0xB0C118] && MEMORY[0xB0C121] ) /*0x6cf156*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0C118]); /*0x6cf159*/
    MEMORY[0xB0C118] = 0; /*0x6cf161*/
  }
  MEMORY[0xB0C121] = 0; /*0x6cf167*/
  MEMORY[0xB0C11C] = 0; /*0x6cf16d*/
}


// ==== 0x006CF1D0  SwizzleManagerClass::SmallFunc_6CF1D0  this=SwizzleManagerClass  sig=csp ====
void __thiscall sub_6CF1D0(_DWORD *this)
{
  void *v2; // eax
  void *v3; // eax

  *this = &vt_SwizzleManagerClass; /*0x6cf1d4*/
  SwizzleManagerClass::ConvertNodes((int)this); /*0x6cf1da*/
  v2 = (void *)this->SwizzleManagerClass_field_0x20; /*0x6cf1df*/
  this->SwizzleManagerClass_field_0x1C = &vt_VectorClass_SwizzlePointerClass; /*0x6cf1e6*/
  if ( v2 && *((_BYTE *)this + 41) ) /*0x6cf1ef*/
  {
    __3_YAXPAX_Z(v2); /*0x6cf1f5*/
    this->SwizzleManagerClass_field_0x20 = 0; /*0x6cf1fd*/
  }
  *((_BYTE *)this + 41) = 0; /*0x6cf200*/
  this->SwizzleManagerClass_field_0x24 = 0; /*0x6cf203*/
  v3 = (void *)this->SwizzleManagerClass_field_0x08; /*0x6cf206*/
  this->SwizzleManagerClass_field_0x04 = &vt_VectorClass_SwizzlePointerClass; /*0x6cf209*/
  if ( v3 && *((_BYTE *)this + 17) ) /*0x6cf214*/
  {
    __3_YAXPAX_Z(v3); /*0x6cf21a*/
    this->SwizzleManagerClass_field_0x08 = 0; /*0x6cf222*/
  }
  *((_BYTE *)this + 17) = 0; /*0x6cf225*/
  this->SwizzleManagerClass_field_0x0C = 0; /*0x6cf228*/
}


// ==== 0x006CF230  SwizzleManagerClass::ConvertWrapper  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManager::ConvertWrapper(SwizzleManagerClass *aP0)
{
  SwizzleManagerClass::ConvertNodes((int)aP0); /*0x6cf234*/
  return 0; /*0x6cf23b*/
}


// ==== 0x006CF240  SwizzleManagerClass::RegisterForTracking  this=SwizzleManagerClass  sig=csp ====
int __stdcall ObjectPtr::RegisterForTracking(SwizzleManagerClass *aP0, MouseClass *aP1)
{
  int v3; // ebx
  int SwizzleManagerClass_field_0x0C; // ecx
  int SwizzleManagerClass_field_0x18; // eax
  int SwizzleManagerClass_field_0x14; // eax
  int SwizzleManagerClass_field_0x08; // edx

  if ( !aP1 ) /*0x6cf248*/
    return -2147467261; /*0x6cf24b*/
  v3 = aP1->field_0; /*0x6cf254*/
  if ( !aP1->field_0 ) /*0x6cf254*/
    return 0; /*0x6cf25b*/
  SwizzleManagerClass_field_0x0C = aP0->SwizzleManagerClass_field_0x0C; /*0x6cf266*/
  if ( aP0->SwizzleManagerClass_field_0x14 < SwizzleManagerClass_field_0x0C /*0x6cf28e*/
    || (BYTE1(aP0->SwizzleManagerClass_field_0x10) || !SwizzleManagerClass_field_0x0C)
    && (SwizzleManagerClass_field_0x18 = aP0->SwizzleManagerClass_field_0x18, SwizzleManagerClass_field_0x18 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(aP0->SwizzleManagerClass_field_0x04 + 8))(
         &aP0->SwizzleManagerClass_field_0x04,
         SwizzleManagerClass_field_0x0C + SwizzleManagerClass_field_0x18,
         0) )
  {
    SwizzleManagerClass_field_0x14 = aP0->SwizzleManagerClass_field_0x14; /*0x6cf295*/
    SwizzleManagerClass_field_0x08 = aP0->SwizzleManagerClass_field_0x08; /*0x6cf298*/
    aP0->SwizzleManagerClass_field_0x14 = SwizzleManagerClass_field_0x14 + 1; /*0x6cf29e*/
    *(_DWORD *)(SwizzleManagerClass_field_0x08 + 8 * SwizzleManagerClass_field_0x14) = v3; /*0x6cf2a1*/
    *(_DWORD *)(SwizzleManagerClass_field_0x08 + 8 * SwizzleManagerClass_field_0x14 + 4) = aP1; /*0x6cf2a4*/
  }
  aP1->field_0 = 0; /*0x6cf2a8*/
  return 0; /*0x6cf24a*/
}


// ==== 0x006CF2C0  SwizzleManagerClass::Here_I_Am  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::Here_I_Am(SwizzleManagerClass *aP0, AbstractClass *aP1, AbstractClass *aP2)
{
  int SwizzleManagerClass_field_0x24; // eax
  int SwizzleManagerClass_field_0x08; // ecx
  int SwizzleManagerClass_field_0x04; // eax
  int SwizzleManagerClass_field_0x20; // edx

  SwizzleManagerClass_field_0x24 = aP0->SwizzleManagerClass_field_0x24; /*0x6cf2d5*/
  if ( aP0[1].SwizzleManagerClass_field_0x04 < SwizzleManagerClass_field_0x24 /*0x6cf2f7*/
    || (aP0[1].__pad_0[1] || !SwizzleManagerClass_field_0x24)
    && (SwizzleManagerClass_field_0x08 = aP0[1].SwizzleManagerClass_field_0x08, SwizzleManagerClass_field_0x08 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(aP0->SwizzleManagerClass_field_0x1C + 8))(
         &aP0->SwizzleManagerClass_field_0x1C,
         SwizzleManagerClass_field_0x24 + SwizzleManagerClass_field_0x08,
         0) )
  {
    SwizzleManagerClass_field_0x04 = aP0[1].SwizzleManagerClass_field_0x04; /*0x6cf2fe*/
    SwizzleManagerClass_field_0x20 = aP0->SwizzleManagerClass_field_0x20; /*0x6cf301*/
    aP0[1].SwizzleManagerClass_field_0x04 = SwizzleManagerClass_field_0x04 + 1; /*0x6cf307*/
    *(_DWORD *)(SwizzleManagerClass_field_0x20 + 8 * SwizzleManagerClass_field_0x04) = aP1; /*0x6cf30a*/
    *(_DWORD *)(SwizzleManagerClass_field_0x20 + 8 * SwizzleManagerClass_field_0x04 + 4) = aP2; /*0x6cf30d*/
  }
  return 0; /*0x6cf311*/
}


// ==== 0x006CF320  globalHelper_0CF320  this=-  sig=ida-proto ====
int __cdecl globalHelper_0CF320(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x6cf330*/
  else
    return *a1 >= *a2 ? 1 : -1;
}


// ==== 0x006CF350  SwizzleManagerClass::ConvertNodes  this=SwizzleManagerClass  sig=csp ====
int __thiscall SwizzleManagerClass::ConvertNodes(int this)
{
  int result; // eax
  signed int v3; // eax
  signed int v4; // eax
  _DWORD *v5; // ecx
  int v6; // ebx
  int v7; // ebp
  _DWORD *v8; // edi
  _DWORD *v9; // edx
  int v10; // edx

  result = *(_DWORD *)(this + 20); /*0x6cf354*/
  if ( result ) /*0x6cf359*/
  {
    v3 = *(_DWORD *)(this + 44); /*0x6cf35f*/
    if ( v3 > 0 ) /*0x6cf364*/
      qsort(*(void **)(this + 32), v3, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)globalHelper_0CF320); /*0x6cf372*/
    v4 = *(_DWORD *)(this + 20); /*0x6cf37a*/
    if ( v4 > 0 ) /*0x6cf37f*/
      qsort(*(void **)(this + 8), v4, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)globalHelper_0CF320); /*0x6cf38d*/
    v5 = *(_DWORD **)(this + 32); /*0x6cf395*/
    v6 = *(_DWORD *)(this + 44); /*0x6cf399*/
    v7 = *(_DWORD *)(this + 20); /*0x6cf39d*/
    v8 = *(_DWORD **)(this + 8); /*0x6cf3a1*/
    while ( v7 > 0 ) /*0x6cf3a6*/
    {
      if ( *v8 == *v5 ) /*0x6cf3ae*/
      {
        v9 = (_DWORD *)v8[1]; /*0x6cf3b0*/
        v8 += 2; /*0x6cf3b6*/
        --v7; /*0x6cf3b9*/
        *v9 = v5[1]; /*0x6cf3ba*/
      }
      else if ( *v8 > *v5 ) /*0x6cf3be*/
      {
        do /*0x6cf3c9*/
        {
          v10 = v5[2]; /*0x6cf3c0*/
          v5 += 2; /*0x6cf3c3*/
          --v6; /*0x6cf3c6*/
        }
        while ( *v8 > v10 ); /*0x6cf3c9*/
      }
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 4) + 12))(this + 4); /*0x6cf3ef*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)(this + 28) + 12))(this + 28); /*0x6cf3f8*/
  }
  return result; /*0x6cf3fe*/
}


// ==== 0x006CF410  SwizzleManagerClass::Clear  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::_vt09(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6cf416*/
    return -2147467261; /*0x6cf418*/
  *a2 = 4; /*0x6cf420*/
  return 0; /*0x6cf41d*/
}


// ==== 0x006CF430  SwizzleManagerClass::Process  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::Process(SwizzleManagerClass *aP0, const void *a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6cf438*/
    return -2147467261; /*0x6cf43b*/
  if ( memcmp(a1, &IID_ISwizzle, 0x10u) && memcmp(a1, &IID_IUnknown, 0x10u) ) /*0x6cf46a*/
    return -2147467262; /*0x6cf46f*/
  *a2 = aP0; /*0x6cf47c*/
  (*(void (__stdcall **)(SwizzleManagerClass *))(*(_DWORD *)aP0->__pad_0 + 4))(aP0); /*0x6cf481*/
  return 0; /*0x6cf43a*/
}


// ==== 0x006CF490  SwizzleManagerClass::Add  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::Add(SwizzleManagerClass *aP0, SwizzleManagerClass *aP1, _DWORD *a2)
{
  if ( !aP1 || !a2 ) /*0x6cf49e*/
    return -2147467261; /*0x6cf4a7*/
  *a2 = aP1; /*0x6cf4a0*/
  return 0; /*0x6cf4a4*/
}


// ==== 0x006CF4B0  SwizzleManagerClass::AddRef  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::_vt01(int a1)
{
  return 1; /*0x6cf4b5*/
}


// ==== 0x006CF4C0  SwizzleManagerClass::Release  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::_vt02(int a1)
{
  return 1; /*0x6cf4c5*/
}


// ==== 0x006CF4D0  SwizzleManagerClass::Remove  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::_vt07(int a1, int a2, int a3)
{
  return -2147467263; /*0x6cf4d5*/
}


// ==== 0x006CF4E0  SwizzleManagerClass::Lookup  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::_vt08(int a1, int a2, int a3, int a4)
{
  return -2147467263; /*0x6cf4e5*/
}


// ==== 0x006CF4F0  _DynamicVectorClass_VSwizzlePointerClass::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall SwizzleManagerClass_19_::sub_6CF4F0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x6cf4f6*/
  *(_DWORD *)(this + 16) = 0; /*0x6cf4f9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6cf500*/
  {
    __3_YAXPAX_Z(v2); /*0x6cf506*/
    *(_DWORD *)(this + 4) = 0; /*0x6cf50e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6cf511*/
  *(_DWORD *)(this + 8) = 0; /*0x6cf514*/
}


// ==== 0x006CF520  _DynamicVectorClass_VSwizzlePointerClass::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall SwizzleManagerClass_19_::sub_6CF520(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6cf520*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x6cf535*/
  else
    return 0; /*0x6cf527*/
}


// ==== 0x006CF540  _VectorClass_VSwizzlePointerClass::Lookup  this=VectorClass  sig=csp ====
_DWORD *__thiscall SwizzleManagerClass_19_::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // edx

  v3 = this->Items; /*0x6cf540*/
  *a2 = *(_DWORD *)(v3 + 8 * a3); /*0x6cf54f*/
  a2[1] = *(_DWORD *)(v3 + 8 * a3 + 4); /*0x6cf556*/
  return a2; /*0x6cf551*/
}


// ==== 0x006CF560  _VectorClass_VSwizzlePointerClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall SwizzleManagerClass_19_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x6cf562*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x6cf56d*/
  {
    v3 = 0; /*0x6cf56f*/
    if ( v2 <= 0 ) /*0x6cf573*/
      return 1; /*0x6cf593*/
    v4 = (_DWORD *)this->Items; /*0x6cf575*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6cf57b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6cf584*/
    {
      ++v3; /*0x6cf586*/
      v4 += 2; /*0x6cf587*/
      if ( v3 >= v2 ) /*0x6cf58c*/
        return 1; /*0x6cf58c*/
    }
  }
  return 0; /*0x6cf58e*/
}


// ==== 0x006CF5A0  _VectorClass_VSwizzlePointerClass::Release  this=VectorClass  sig=csp ====
char __thiscall SwizzleManagerClass_19_::_vt02(void *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx

  v3 = a2; /*0x6cf5a2*/
  if ( a2 ) /*0x6cf5ae*/
  {
    v5 = a3; /*0x6cf5b4*/
    this->IsInitialized = 0; /*0x6cf5b8*/
    if ( a3 ) /*0x6cf5bd*/
    {
      v9 = a3; /*0x6cf5f3*/
      if ( a2 - 1 >= 0 ) /*0x6cf5f7*/
      {
        v10 = a2; /*0x6cf5f9*/
        do /*0x6cf603*/
        {
          *v9 = 0; /*0x6cf5fa*/
          v9[1] = 0; /*0x6cf5fc*/
          v9 += 2; /*0x6cf5ff*/
          --v10; /*0x6cf602*/
        }
        while ( v10 ); /*0x6cf603*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2); /*0x6cf5c7*/
      if ( v6 ) /*0x6cf5d1*/
      {
        v7 = v6; /*0x6cf5d6*/
        if ( a2 - 1 >= 0 ) /*0x6cf5da*/
        {
          v8 = a2; /*0x6cf5dc*/
          do /*0x6cf5e6*/
          {
            *v7 = 0; /*0x6cf5dd*/
            v7[1] = 0; /*0x6cf5df*/
            v7 += 2; /*0x6cf5e2*/
            --v8; /*0x6cf5e5*/
          }
          while ( v8 ); /*0x6cf5e6*/
        }
        v5 = v6; /*0x6cf5e8*/
      }
      else
      {
        v5 = 0; /*0x6cf5ec*/
      }
    }
    this->IsInitialized = 1; /*0x6cf607*/
    if ( v5 ) /*0x6cf60b*/
    {
      if ( this->Items ) /*0x6cf616*/
      {
        v12 = this->Capacity; /*0x6cf61b*/
        if ( a2 < v12 ) /*0x6cf620*/
          v12 = a2; /*0x6cf622*/
        v13 = 0; /*0x6cf624*/
        if ( v12 > 0 ) /*0x6cf628*/
        {
          do /*0x6cf647*/
          {
            v14 = 2 * v13; /*0x6cf62d*/
            v15 = (_DWORD *)(this->Items + 8 * v13++); /*0x6cf636*/
            v5[v14] = *v15; /*0x6cf63d*/
            v5[v14 + 1] = v15[1]; /*0x6cf643*/
          }
          while ( v13 < v12 ); /*0x6cf647*/
          v3 = a2; /*0x6cf649*/
        }
        if ( this->IsAllocated ) /*0x6cf64f*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x6cf658*/
          this->Items = 0; /*0x6cf660*/
        }
      }
      this->Items = v5; /*0x6cf66b*/
      this->Capacity = v3; /*0x6cf671*/
      this->IsAllocated = a3 == 0; /*0x6cf674*/
      return 1; /*0x6cf67a*/
    }
    else
    {
      return 0; /*0x6cf610*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6cf684*/
    return 1; /*0x6cf68a*/
  }
}


// ==== 0x006CF690  _VectorClass_VSwizzlePointerClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall SwizzleManagerClass_19_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x6cf69d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x6cf6a3*/
    *(_DWORD *)(this + 4) = 0; /*0x6cf6ab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6cf6ae*/
  *(_DWORD *)(this + 8) = 0; /*0x6cf6b1*/
}


// ==== 0x006CF6C0  _VectorClass_VSwizzlePointerClass::Init  this=VectorClass  sig=csp ====
int __thiscall SwizzleManagerClass_19_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x6cf6c0*/
    return 0; /*0x6cf6c8*/
  v3 = *(_DWORD *)(this + 8); /*0x6cf6ce*/
  result = 0; /*0x6cf6d1*/
  if ( v3 <= 0 ) /*0x6cf6d5*/
    return -1; /*0x6cf6ec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; i += 2 ) /*0x6cf6db*/
  {
    if ( ++result >= v3 ) /*0x6cf6ea*/
      return -1; /*0x6cf6ea*/
  }
  return result; /*0x6cf6ca*/
}


// ==== 0x006CF700  _VectorClass_VSwizzlePointerClass::Add  this=VectorClass  sig=csp ====
unsigned int __thiscall SwizzleManagerClass_19_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6cf700*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x6cf715*/
  else
    return 0; /*0x6cf707*/
}


// ==== 0x006CF720  _DynamicVectorClass_VSwizzlePointerClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall SwizzleManagerClass_19_::sub_6CF720(void *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x6cf722*/
  if ( a2 ) /*0x6cf72e*/
  {
    v5 = a3; /*0x6cf734*/
    this->IsInitialized = 0; /*0x6cf738*/
    if ( a3 ) /*0x6cf73d*/
    {
      v9 = a3; /*0x6cf773*/
      if ( a2 - 1 >= 0 ) /*0x6cf777*/
      {
        v10 = a2; /*0x6cf779*/
        do /*0x6cf783*/
        {
          *v9 = 0; /*0x6cf77a*/
          v9[1] = 0; /*0x6cf77c*/
          v9 += 2; /*0x6cf77f*/
          --v10; /*0x6cf782*/
        }
        while ( v10 ); /*0x6cf783*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2); /*0x6cf747*/
      if ( v6 ) /*0x6cf751*/
      {
        v7 = v6; /*0x6cf756*/
        if ( a2 - 1 >= 0 ) /*0x6cf75a*/
        {
          v8 = a2; /*0x6cf75c*/
          do /*0x6cf766*/
          {
            *v7 = 0; /*0x6cf75d*/
            v7[1] = 0; /*0x6cf75f*/
            v7 += 2; /*0x6cf762*/
            --v8; /*0x6cf765*/
          }
          while ( v8 ); /*0x6cf766*/
        }
        v5 = v6; /*0x6cf768*/
      }
      else
      {
        v5 = 0; /*0x6cf76c*/
      }
    }
    this->IsInitialized = 1; /*0x6cf787*/
    if ( !v5 ) /*0x6cf78b*/
      return 0; /*0x6cf814*/
    if ( this->Items ) /*0x6cf791*/
    {
      v11 = this->DynamicVector_field_0x8; /*0x6cf796*/
      if ( a2 < v11 ) /*0x6cf79b*/
        v11 = a2; /*0x6cf79d*/
      v12 = 0; /*0x6cf79f*/
      if ( v11 > 0 ) /*0x6cf7a3*/
      {
        do /*0x6cf7c2*/
        {
          v13 = 2 * v12; /*0x6cf7a8*/
          v14 = (_DWORD *)(this->Items + 8 * v12++); /*0x6cf7b1*/
          v5[v13] = *v14; /*0x6cf7b8*/
          v5[v13 + 1] = v14[1]; /*0x6cf7be*/
        }
        while ( v12 < v11 ); /*0x6cf7c2*/
        v3 = a2; /*0x6cf7c4*/
      }
      if ( this->IsAllocated ) /*0x6cf7ca*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x6cf7d3*/
        this->Items = 0; /*0x6cf7db*/
      }
    }
    this->Items = v5; /*0x6cf7e6*/
    this->DynamicVector_field_0x8 = v3; /*0x6cf7ec*/
    this->IsAllocated = a3 == 0; /*0x6cf7ef*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6cf7f8*/
  }
  v15 = this->DynamicVector_field_0x8; /*0x6cf7fb*/
  if ( v15 < this->Items ) /*0x6cf803*/
    this->Items = v15; /*0x6cf805*/
  return 1; /*0x6cf808*/
}


// ==== 0x006CF820  _DynamicVectorClass_VSwizzlePointerClass::FindItem  this=DynamicVector  sig=csp ====
int __thiscall SwizzleManagerClass_19_::sub_6CF820(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x6cf820*/
  result = 0; /*0x6cf823*/
  if ( v2 <= 0 ) /*0x6cf828*/
    return -1; /*0x6cf83f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; i += 2 ) /*0x6cf82e*/
  {
    if ( ++result >= v2 ) /*0x6cf83d*/
      return -1; /*0x6cf83d*/
  }
  return result; /*0x6cf842*/
}


// ==== 0x006CF850  _VectorClass_VSwizzlePointerClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall SwizzleManagerClass_19_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6cf853*/
  *Block = &vt_VectorClass_SwizzlePointerClass; /*0x6cf856*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6cf860*/
  {
    __3_YAXPAX_Z(v3); /*0x6cf868*/
    *(Block + 1) = 0; /*0x6cf870*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6cf87b*/
  *(Block + 2) = 0; /*0x6cf881*/
  if ( (a2 & 1) != 0 ) /*0x6cf888*/
    __3_YAXPAX_Z(Block); /*0x6cf88b*/
  return (VectorClass *)Block; /*0x6cf895*/
}


// ==== 0x006CF8A0  _DynamicVectorClass_VSwizzlePointerClass::Constructor_VectorClass_SwizzlePointerClass_  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall SwizzleManagerClass_19_::Constructor_VectorClass_SwizzlePointerClass_(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6cf8a3*/
  *Block = &vt_VectorClass_SwizzlePointerClass; /*0x6cf8a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6cf8b0*/
  {
    __3_YAXPAX_Z(v3); /*0x6cf8b8*/
    *(Block + 1) = 0; /*0x6cf8c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6cf8cb*/
  *(Block + 2) = 0; /*0x6cf8d1*/
  if ( (a2 & 1) != 0 ) /*0x6cf8d8*/
    __3_YAXPAX_Z(Block); /*0x6cf8db*/
  return (DynamicVector *)Block; /*0x6cf8e5*/
}


// ==== 0x006CF8F0  VectorClass::sub_6CF8F0  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_6CF8F0(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // ecx
  int v9; // edx

  this->Items = 0; /*0x6cf8fd*/
  this->Capacity = a2; /*0x6cf900*/
  this->q030 = 1; /*0x6cf903*/
  this->__pad_034 = 0; /*0x6cf907*/
  *this = &vt_VectorClass_SwizzlePointerClass; /*0x6cf90a*/
  if ( !a2 ) /*0x6cf910*/
    return this; /*0x6cf910*/
  if ( !a3 ) /*0x6cf918*/
  {
    v7 = __2_YAPAXI_Z(8 * a2); /*0x6cf942*/
    if ( v7 ) /*0x6cf94c*/
    {
      v8 = v7; /*0x6cf951*/
      if ( a2 - 1 >= 0 ) /*0x6cf955*/
      {
        v9 = a2; /*0x6cf957*/
        do /*0x6cf961*/
        {
          *v8 = 0; /*0x6cf958*/
          v8[1] = 0; /*0x6cf95a*/
          v8 += 2; /*0x6cf95d*/
          --v9; /*0x6cf960*/
        }
        while ( v9 ); /*0x6cf961*/
        this->Items = v7; /*0x6cf963*/
        this->__pad_034 = 1; /*0x6cf966*/
        return this; /*0x6cf96f*/
      }
    }
    else
    {
      v7 = 0; /*0x6cf972*/
    }
    this->Items = v7; /*0x6cf974*/
    this->__pad_034 = 1; /*0x6cf977*/
    return this; /*0x6cf97b*/
  }
  v4 = a3; /*0x6cf91d*/
  if ( a2 - 1 >= 0 ) /*0x6cf921*/
  {
    v5 = a2; /*0x6cf923*/
    do /*0x6cf92d*/
    {
      *v4 = 0; /*0x6cf924*/
      v4[1] = 0; /*0x6cf926*/
      v4 += 2; /*0x6cf929*/
      --v5; /*0x6cf92c*/
    }
    while ( v5 ); /*0x6cf92d*/
  }
  this->Items = a3; /*0x6cf92f*/
  return this; /*0x6cf934*/
}


// ==== 0x006CF990  sub_6CF990  this=-  sig=ida-proto ====
int sub_6CF990()
{
  MEMORY[0xB0CB28] = 0; /*0x6cf992*/
  MEMORY[0xB0CB2C] = 0; /*0x6cf997*/
  MEMORY[0xB0CB30] = 0; /*0x6cf99c*/
  MEMORY[0xB0CB34] = 0; /*0x6cf9a1*/
  return 0; /*0x6cf9a6*/
}


// ==== 0x006CF9B0  sub_6CF9B0  this=-  sig=ida-proto ====
void sub_6CF9B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6cf9bc*/
  MEMORY[0xB0CB48] = Math::Sqrt(v0 + v0); /*0x6cf9ce*/
}


// ==== 0x006CF9E0  sub_6CF9E0  this=-  sig=ida-proto ====
void sub_6CF9E0()
{
  MEMORY[0xB0CD30] = MEMORY[0xB0CB48] / 60.0; /*0x6cf9ec*/
}


// ==== 0x006CFA00  sub_6CFA00  this=-  sig=ida-proto ====
void sub_6CFA00()
{
  MEMORY[0xB0CCA8] = 1.0 / MEMORY[0xB0CD30]; /*0x6cfa0c*/
}


// ==== 0x006CFA20  sub_6CFA20  this=-  sig=ida-proto ====
void sub_6CFA20()
{
  MEMORY[0xB0CCA0] = 0.0174532925199433 * 45.0; /*0x6cfa2c*/
}


// ==== 0x006CFA40  sub_6CFA40  this=-  sig=ida-proto ====
void sub_6CFA40()
{
  MEMORY[0xB0CB60] = 0.0174532925199433 * 60.0; /*0x6cfa4c*/
}


// ==== 0x006CFA60  sub_6CFA60  this=-  sig=ida-proto ====
void sub_6CFA60()
{
  MEMORY[0xB0C1B0] = 0.0174532925199433 * 90.0; /*0x6cfa6c*/
}


// ==== 0x006CFA80  sub_6CFA80  this=-  sig=ida-proto ====
__int64 sub_6CFA80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0C1B0] - MEMORY[0xB0CB60]); /*0x6cfa92*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0CB48] * 0.5); /*0x6cfaa6*/
  MEMORY[0xB0CD3C] = result; /*0x6cfaab*/
  return result; /*0x6cfab0*/
}


// ==== 0x006CFAC0  sub_6CFAC0  this=-  sig=ida-proto ====
void sub_6CFAC0()
{
  MEMORY[0xB0CB70] = Math::ArcTan((double)MEMORY[0xB0CD3C] * 0.00390625); /*0x6cfad7*/
}


// ==== 0x006CFAF0  sub_6CFAF0  this=-  sig=ida-proto ====
void sub_6CFAF0()
{
  MEMORY[0xB0CC30] = Math::ArcTan((double)(2 * MEMORY[0xB0CD3C]) / MEMORY[0xB0CB48]); /*0x6cfb12*/
}


// ==== 0x006CFB20  sub_6CFB20  this=-  sig=ida-proto ====
__int64 sub_6CFB20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0CD3C]) + 0.5); /*0x6cfb3b*/
  MEMORY[0xB0CD2C] = result; /*0x6cfb40*/
  return result; /*0x6cfb46*/
}


// ==== 0x006CFB50  sub_6CFB50  this=-  sig=ida-proto ====
int sub_6CFB50()
{
  MEMORY[0xB0CB40] = 0; /*0x6cfb52*/
  MEMORY[0xB0CB42] = 0; /*0x6cfb58*/
  return 0; /*0x6cfb5e*/
}


// ==== 0x006CFB60  sub_6CFB60  this=-  sig=ida-proto ====
int sub_6CFB60()
{
  MEMORY[0xB0CC10] = 0; /*0x6cfb62*/
  MEMORY[0xB0CC14] = 0; /*0x6cfb67*/
  MEMORY[0xB0CC18] = 0; /*0x6cfb6c*/
  return 0; /*0x6cfb71*/
}


// ==== 0x006CFB80  sub_6CFB80  this=-  sig=ida-proto ====
int sub_6CFB80()
{
  MEMORY[0xB0CD20] = 0; /*0x6cfb85*/
  MEMORY[0xB0CD18] = 128; /*0x6cfb8f*/
  MEMORY[0xB0CD1C] = 128; /*0x6cfb94*/
  return 128; /*0x6cfb99*/
}


// ==== 0x006CFBA0  sub_6CFBA0  this=-  sig=ida-proto ====
int sub_6CFBA0()
{
  _BYTE *v0; // esi
  int v1; // edi

  v0 = &MEMORY[0xB0C1C0]; /*0x6cfba2*/
  v1 = 25; /*0x6cfba7*/
  do /*0x6cfbb7*/
  {
    ShapeButtonClass::Init(v0); /*0x6cfbae*/
    v0 += 96; /*0x6cfbb3*/
    --v1; /*0x6cfbb6*/
  }
  while ( v1 ); /*0x6cfbb7*/
  return atexit(sub_6CFBD0); /*0x6cfbc6*/
}


// ==== 0x006CFBD0  sub_6CFBD0  this=-  sig=ida-proto ====
void __cdecl sub_6CFBD0()
{
  int *v0; // esi
  int v1; // edi

  if ( (MEMORY[0xB0C1AC] & 1) == 0 ) /*0x6cfbda*/
  {
    MEMORY[0xB0C1AC] |= 1u; /*0x6cfbe0*/
    v0 = &MEMORY[0xB0CB20]; /*0x6cfbe6*/
    v1 = 25; /*0x6cfbeb*/
    do /*0x6cfbfb*/
    {
      v0 -= 24; /*0x6cfbf0*/
      ShapeButtonClass::Destructor((int)v0); /*0x6cfbf5*/
      --v1; /*0x6cfbfa*/
    }
    while ( v1 ); /*0x6cfbfb*/
  }
}


// ==== 0x006CFC00  sub_6CFC00  this=-  sig=ida-proto ====
int sub_6CFC00()
{
  ShapeButtonClass::Init(MEMORY[0xB0CCB0]); /*0x6cfc05*/
  return atexit(sub_6CFC20); /*0x6cfc15*/
}


// ==== 0x006CFC20  sub_6CFC20  this=-  sig=ida-proto ====
void __cdecl sub_6CFC20()
{
  if ( (MEMORY[0xB0C1AC] & 2) == 0 ) /*0x6cfc2a*/
  {
    MEMORY[0xB0C1AC] |= 2u; /*0x6cfc2e*/
    ShapeButtonClass::Destructor((int)MEMORY[0xB0CCB0]); /*0x6cfc39*/
  }
}


// ==== 0x006CFC40  sub_6CFC40  this=-  sig=ida-proto ====
int sub_6CFC40()
{
  ShapeButtonClass::Init(MEMORY[0xB0CC40]); /*0x6cfc45*/
  return atexit(sub_6CFC60); /*0x6cfc55*/
}


// ==== 0x006CFC60  sub_6CFC60  this=-  sig=ida-proto ====
void __cdecl sub_6CFC60()
{
  if ( (MEMORY[0xB0C1AC] & 4) == 0 ) /*0x6cfc6a*/
  {
    MEMORY[0xB0C1AC] |= 4u; /*0x6cfc6e*/
    ShapeButtonClass::Destructor((int)MEMORY[0xB0CC40]); /*0x6cfc79*/
  }
}


// ==== 0x006CFCC0  SidebarClass::findEntryIndexByName  this=char*  sig=csp ====
int __thiscall sub_6CFCC0(const char *this)
{
  int v1; // ebp
  const char **v2; // edi

  v1 = 0; /*0x6cfcc4*/
  v2 = (const char **)MEMORY[0x8427D0]; /*0x6cfcc6*/
  while ( strcmp(*v2, this) ) /*0x6cfcfa*/
  {
    ++v2; /*0x6cfcfc*/
    ++v1; /*0x6cfcff*/
    if ( (int)v2 >= (int)MEMORY[0x8427FC] ) /*0x6cfd06*/
      return MEMORY[0x8427CC]; /*0x6cfd11*/
  }
  return v1; /*0x6cfd0d*/
}


// ==== 0x006CFD20  globalHelper_0CFD20  this=char*  sig=csp ====
void __fastcall sub_6CFD20(int a1, int a2)
{
  MEMORY[0xB0CB78][a1] = a2; /*0x6cfd20*/
}


// ==== 0x006CFD30  sub_6CFD30  this=-  sig=ida-proto ====
int __fastcall sub_6CFD30(int a1)
{
  return MEMORY[0xB0CB78][a1]; /*0x6cfd37*/
}


// ==== 0x006CFD40  GetFontClassEntry  this=int  sig=ida-proto ====
char *__fastcall FontClass_GetEntry(int a1)
{
  unsigned int v1; // eax

  v1 = MEMORY[0xB0CB78][a1]; /*0x6cfd40*/
  if ( v1 > 0x18 ) /*0x6cfd49*/
    return 0; /*0x6cfd5c*/
  else
    return (char *)&MEMORY[0xB0C1C0] + 96 * v1; /*0x6cfd56*/
}


// ==== 0x006CFD60  sub_6CFD60  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_6CFD60(_DWORD *a1, int a2)
{
  _DWORD *result; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // edi

  result = a1; /*0x6cfd7a*/
  v4 = MEMORY[0xB0CC24]; /*0x6cfd82*/
  v5 = *((_DWORD *)MEMORY[0xB0FC68] + 2); /*0x6cfd8f*/
  v6 = *((_DWORD *)MEMORY[0xB0FC68] + 3); /*0x6cfd92*/
  *a1 = *(_DWORD *)MEMORY[0xB0FC68] + MEMORY[0xB0CC38] * MEMORY[0xB0CB78][a2]; /*0x6cfd95*/
  a1[1] = v4; /*0x6cfd97*/
  a1[2] = v5; /*0x6cfd9a*/
  a1[3] = v6; /*0x6cfd9d*/
  return result; /*0x6cfda0*/
}


// ==== 0x006CFDB0  globalHelper_0CFDB0  this=int  sig=ida-proto ====
int __fastcall sub_6CFDB0(int a1)
{
  int result; // eax
  int v2; // ecx

  MEMORY[0xB0CB54] = a1; /*0x6cfdb5*/
  result = *(_DWORD *)MEMORY[0xB0FC6C] - a1 * *((_DWORD *)MEMORY[0xB0FC68] + 2); /*0x6cfdc9*/
  v2 = *(_DWORD *)MEMORY[0xB0FC60] + *((_DWORD *)MEMORY[0xB0FC60] + 2); /*0x6cfdd6*/
  MEMORY[0xB0CC2C] = result; /*0x6cfddb*/
  if ( result <= v2 ) /*0x6cfde0*/
    MEMORY[0xB0CC2C] = v2; /*0x6cfde2*/
  return result; /*0x6cfdd8*/
}


// ==== 0x006CFE10  ObjectClass::method_6CFE10  this=ObjectClass  sig=csp ====
int __thiscall sub_6CFE10(void *this)
{
  return (int)this - MEMORY[0xB0CC20] + 1; /*0x6cfe19*/
}


// ==== 0x006CFE20  TabClass::Constructor  this=TabClass  sig=csp ====
_DWORD *__thiscall TabClass::Constructor(_DWORD *this)
{
  wchar_t *v2; // ecx
  int v3; // ebp
  const char **v4; // edi
  int v5; // eax
  int v6; // ebp
  const char **v7; // edi
  int v8; // eax
  int v9; // ebp
  const char **v10; // edi
  int v11; // eax
  int v12; // ebp
  const char **v13; // edi
  int v14; // eax
  int v15; // ebp
  const char **v16; // edi
  int v17; // eax
  int v18; // ebp
  const char **v19; // edi
  int v20; // eax
  int v21; // ebp
  const char **v22; // edi
  int v23; // eax
  int v24; // ebp
  const char **v25; // edi
  int v26; // eax
  int v27; // ebp
  const char **v28; // edi
  int v29; // eax
  int v30; // ebp
  const char **v31; // edi
  int v32; // eax
  int v33; // ebp
  const char **v34; // edi
  int v35; // eax

  TabClass::initTabData(); /*0x6cfe2b*/
  *(this + 5446) = &vt_INoticeSink; /*0x6cfe3c*/
  TabClass::initStripClass(this + 5447); /*0x6cfe42*/
  this->q552C = MEMORY[0xA8ED84]; /*0x6cfe4e*/
  *(this + 5453) = 0; /*0x6cfe54*/
  v2 = MEMORY[0xA8ED84]; /*0x6cfe5a*/
  *(this + 5456) = 0; /*0x6cfe60*/
  this->q5538 = v2; /*0x6cfe66*/
  *(this + 5446) = &TabClass::`vftable'; /*0x6cfe6e*/
  *((_BYTE *)this + 21828) = 1; /*0x6cfe74*/
  *((_BYTE *)this + 21829) = 1; /*0x6cfe7a*/
  *((_BYTE *)this + 21830) = 1; /*0x6cfe80*/
  *this = &TabClass::`vftable'; /*0x6cfe86*/
  v3 = 0; /*0x6cfe8c*/
  v4 = (const char **)MEMORY[0x8427D0]; /*0x6cfe8e*/
  while ( strcmp(*v4, MEMORY[0x842804]) ) /*0x6cfec5*/
  {
    ++v4; /*0x6cfec7*/
    ++v3; /*0x6cfeca*/
    if ( (int)v4 >= (int)MEMORY[0x8427FC] ) /*0x6cfed1*/
    {
      v5 = MEMORY[0x8427CC]; /*0x6cfed3*/
      goto LABEL_5; /*0x6cfed3*/
    }
  }
  v5 = v3; /*0x6cff0f*/
LABEL_5:
  MEMORY[0xB0CD24] = v5; /*0x6cfed8*/
  v6 = 0; /*0x6cfedd*/
  v7 = (const char **)MEMORY[0x8427D0]; /*0x6cfedf*/
  while ( strcmp(*v7, MEMORY[0x8427FC]) ) /*0x6cff1a*/
  {
    ++v7; /*0x6cff1c*/
    ++v6; /*0x6cff1f*/
    if ( (int)v7 >= (int)MEMORY[0x8427FC] ) /*0x6cff26*/
    {
      v8 = MEMORY[0x8427CC]; /*0x6cff28*/
      goto LABEL_11; /*0x6cff28*/
    }
  }
  v8 = v6; /*0x6cff64*/
LABEL_11:
  MEMORY[0xB0CB3C] = v8; /*0x6cff2d*/
  v9 = 0; /*0x6cff32*/
  v10 = (const char **)MEMORY[0x8427D0]; /*0x6cff34*/
  while ( strcmp(*v10, g_INI_Key_Cheer) ) /*0x6cff6f*/
  {
    ++v10; /*0x6cff71*/
    ++v9; /*0x6cff74*/
    if ( (int)v10 >= (int)MEMORY[0x8427FC] ) /*0x6cff7b*/
    {
      v11 = MEMORY[0x8427CC]; /*0x6cff7d*/
      goto LABEL_17; /*0x6cff7d*/
    }
  }
  v11 = v9; /*0x6cffb9*/
LABEL_17:
  MEMORY[0xB0C1B8] = v11; /*0x6cff82*/
  v12 = 0; /*0x6cff87*/
  v13 = (const char **)MEMORY[0x8427D0]; /*0x6cff89*/
  while ( strcmp(*v13, g_INI_Key_Deploy) ) /*0x6cffc4*/
  {
    ++v13; /*0x6cffc6*/
    ++v12; /*0x6cffc9*/
    if ( (int)v13 >= (int)MEMORY[0x8427FC] ) /*0x6cffd0*/
    {
      v14 = MEMORY[0x8427CC]; /*0x6cffd2*/
      goto LABEL_23; /*0x6cffd2*/
    }
  }
  v14 = v12; /*0x6d000e*/
LABEL_23:
  MEMORY[0xB0CB20] = v14; /*0x6cffd7*/
  v15 = 0; /*0x6cffdc*/
  v16 = (const char **)MEMORY[0x8427D0]; /*0x6cffde*/
  while ( strcmp(*v16, MEMORY[0x816E44]) ) /*0x6d0019*/
  {
    ++v16; /*0x6d001b*/
    ++v15; /*0x6d001e*/
    if ( (int)v16 >= (int)MEMORY[0x8427FC] ) /*0x6d0025*/
    {
      v17 = MEMORY[0x8427CC]; /*0x6d0027*/
      goto LABEL_29; /*0x6d0027*/
    }
  }
  v17 = v15; /*0x6d0063*/
LABEL_29:
  MEMORY[0xB0CB68] = v17; /*0x6d002c*/
  v18 = 0; /*0x6d0031*/
  v19 = (const char **)MEMORY[0x8427D0]; /*0x6d0033*/
  while ( strcmp(*v19, g_INI_Key_PlanningMode) ) /*0x6d006e*/
  {
    ++v19; /*0x6d0070*/
    ++v18; /*0x6d0073*/
    if ( (int)v19 >= (int)MEMORY[0x8427FC] ) /*0x6d007a*/
    {
      v20 = MEMORY[0x8427CC]; /*0x6d007c*/
      goto LABEL_35; /*0x6d007c*/
    }
  }
  v20 = v18; /*0x6d00b8*/
LABEL_35:
  MEMORY[0xB0CC1C] = v20; /*0x6d0081*/
  v21 = 0; /*0x6d0086*/
  v22 = (const char **)MEMORY[0x8427D0]; /*0x6d0088*/
  while ( strcmp(*v22, g_INI_Key_Stop) ) /*0x6d00c3*/
  {
    ++v22; /*0x6d00c5*/
    ++v21; /*0x6d00c8*/
    if ( (int)v22 >= (int)MEMORY[0x8427FC] ) /*0x6d00cf*/
    {
      v23 = MEMORY[0x8427CC]; /*0x6d00d1*/
      goto LABEL_41; /*0x6d00d1*/
    }
  }
  v23 = v21; /*0x6d010d*/
LABEL_41:
  MEMORY[0xB0CB6C] = v23; /*0x6d00d6*/
  v24 = 0; /*0x6d00db*/
  v25 = (const char **)MEMORY[0x8427D0]; /*0x6d00dd*/
  while ( strcmp(*v25, MEMORY[0x842820]) ) /*0x6d0118*/
  {
    ++v25; /*0x6d011a*/
    ++v24; /*0x6d011d*/
    if ( (int)v25 >= (int)MEMORY[0x8427FC] ) /*0x6d0124*/
    {
      v26 = MEMORY[0x8427CC]; /*0x6d0126*/
      goto LABEL_47; /*0x6d0126*/
    }
  }
  v26 = v24; /*0x6d0162*/
LABEL_47:
  MEMORY[0xB0CC20] = v26; /*0x6d012b*/
  v27 = 0; /*0x6d0130*/
  v28 = (const char **)MEMORY[0x8427D0]; /*0x6d0132*/
  while ( strcmp(*v28, MEMORY[0x842818]) ) /*0x6d016d*/
  {
    ++v28; /*0x6d016f*/
    ++v27; /*0x6d0172*/
    if ( (int)v28 >= (int)MEMORY[0x8427FC] ) /*0x6d0179*/
    {
      v29 = MEMORY[0x8427CC]; /*0x6d017b*/
      goto LABEL_53; /*0x6d017b*/
    }
  }
  v29 = v27; /*0x6d01b7*/
LABEL_53:
  MEMORY[0xB0CC28] = v29; /*0x6d0180*/
  v30 = 0; /*0x6d0185*/
  v31 = (const char **)MEMORY[0x8427D0]; /*0x6d0187*/
  while ( strcmp(*v31, MEMORY[0x842810]) ) /*0x6d01c2*/
  {
    ++v31; /*0x6d01c4*/
    ++v30; /*0x6d01c7*/
    if ( (int)v31 >= (int)MEMORY[0x8427FC] ) /*0x6d01ce*/
    {
      v32 = MEMORY[0x8427CC]; /*0x6d01d0*/
      goto LABEL_59; /*0x6d01d0*/
    }
  }
  v32 = v30; /*0x6d020c*/
LABEL_59:
  MEMORY[0xB0CD28] = v32; /*0x6d01d5*/
  v33 = 0; /*0x6d01da*/
  v34 = (const char **)MEMORY[0x8427D0]; /*0x6d01dc*/
  while ( strcmp(*v34, g_INI_Key_TypeSelect) ) /*0x6d0217*/
  {
    ++v34; /*0x6d0219*/
    ++v33; /*0x6d021c*/
    if ( (int)v34 >= (int)MEMORY[0x8427FC] ) /*0x6d0223*/
    {
      v35 = MEMORY[0x8427CC]; /*0x6d0225*/
      goto LABEL_65; /*0x6d0225*/
    }
  }
  v35 = v33; /*0x6d024e*/
LABEL_65:
  MEMORY[0xB0CB38] = v35; /*0x6d022a*/
  TabClass::processTabInput(this != 0 ? this + 5446 : 0);
  return this; /*0x6d0248*/
}

