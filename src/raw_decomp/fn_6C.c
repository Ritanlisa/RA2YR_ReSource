// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x006C0010  _TClassFactory_VTiberiumClass::GetSize  this=?$TClassFactory@VTiberiumClass@@  sig=csp ====
int __thiscall TClassFactory_TiberiumClass::GetSize(_TClassFactory_VTiberiumClass *this, int a2)
{
  int v2; // ecx
  int result; // eax
  int v4; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c001a*/
  if ( v4 ) /*0x6c001d*/
  {
    *(_DWORD *)(a2 + 4) = v2 + 1; /*0x6c0020*/
    nullsub_114(a2, v4); /*0x6c0024*/
  }
  else
  {
    *(_DWORD *)(a2 + 4) = v2 - 1; /*0x6c0029*/
    return 0; /*0x6c002c*/
  }
  return result; /*0x6c002e*/
}



// ==== 0x006C0025  nullsub_114  this=-  sig=csp ====
void __stdcall nullsub_114(int a1, int a2)
{
  ; /*0x6c0025*/
}



// ==== 0x006C0040  ObjectClass::WinMain_Helper_6C0040  this=?$TClassFactory@VTubeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0040(ObjectClass *this)
{
  this->? = 0; /*0x6c0042*/
  this->AbstractClass = &TClassFactory<TubeClass>::`vftable'; /*0x6c0049*/
  return &this->AbstractClass; /*0x6c004f*/
}



// ==== 0x006C0050  _TClassFactory_VTubeClass::QueryInterface2  this=?$TClassFactory@VTubeClass@@  sig=csp ====
int __thiscall COMObject::QueryInterface2(_TClassFactory_VTubeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0057*/
    return -2147467261; /*0x6c0059*/
  *v4 = 0; /*0x6c0076*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0092*/
    *v4 = a2; /*0x6c0096*/
  if ( !*v4 ) /*0x6c0098*/
    return -2147467262; /*0x6c00a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c00ac*/
  return 0; /*0x6c005e*/
}



// ==== 0x006C00C0  _TClassFactory_VTubeClass::AddRefCOM  this=?$TClassFactory@VTubeClass@@  sig=csp ====
LONG __thiscall TClassFactory_CampaignClass::AddRefCOM(_TClassFactory_VTubeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c00ce*/
}



// ==== 0x006C00E0  _TClassFactory_VTubeClass::Release  this=?$TClassFactory@VTubeClass@@  sig=csp ====
LONG __thiscall TClassFactory_CampaignClass::Release(_TClassFactory_VTubeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c00f0*/
  if ( !v1 ) /*0x6c00f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c00f7*/
  return v1; /*0x6c0101*/
}



// ==== 0x006C0110  _TClassFactory_VTubeClass::CreateInstanceCOM  this=?$TClassFactory@VTubeClass@@  sig=csp ====
int __thiscall TClassFactory_CampaignClass::CreateInstanceCOM(
        _TClassFactory_VTubeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  TubeClass *v5; // eax
  AbstractClass *v6; // eax
  AbstractClass *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0118*/
    return -2147024809; /*0x6c011b*/
  *v9 = 0; /*0x6c0128*/
  if ( a3 ) /*0x6c0130*/
    return -2147221232; /*0x6c0133*/
  v5 = (TubeClass *)__2_YAPAXI_Z(0x1C4u); /*0x6c0141*/
  if ( !v5 ) /*0x6c014b*/
    return -2147024882; /*0x6c014b*/
  v6 = TubeClass::Construct(v5, &word_B0BC68, 0); /*0x6c0156*/
  v7 = v6; /*0x6c015b*/
  if ( !v6 ) /*0x6c015f*/
    return -2147024882; /*0x6c0162*/
  v8 = (*(int (__stdcall **)(AbstractClass *, _DWORD *, _DWORD *))v6->ptr_0)(v6, a4, v9); /*0x6c0176*/
  if ( v8 < 0 ) /*0x6c017a*/
    (*(void (__thiscall **)(AbstractClass *, int))(v7->ptr_0 + 32))(v7, 1); /*0x6c0182*/
  return v8; /*0x6c011a*/
}



// ==== 0x006C0190  _TClassFactory_VTubeClass::AdjustRefCOM  this=?$TClassFactory@VTubeClass@@  sig=csp ====
int __thiscall TClassFactory_CampaignClass::AdjustRefCOM(_TClassFactory_VTubeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c019a*/
  if ( v5 ) /*0x6c019d*/
    v3 = v2 + 1; /*0x6c019f*/
  else
    v3 = v2 - 1; /*0x6c01a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c01a0*/
  return 0; /*0x6c01a5*/
}



// ==== 0x006C01C0  ObjectClass::WinMain_Helper_6C01C0  this=?$TClassFactory@VCampaignClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C01C0(ObjectClass *this)
{
  this->? = 0; /*0x6c01c2*/
  this->AbstractClass = &TClassFactory<CampaignClass>::`vftable'; /*0x6c01c9*/
  return &this->AbstractClass; /*0x6c01cf*/
}



// ==== 0x006C01D0  _TClassFactory_VCampaignClass::CreateTClassFactory_CampaignClass  this=?$TClassFactory@VCampaignClass@@  sig=csp ====
int __thiscall CreateTClassFactory_CampaignClass(_TClassFactory_VCampaignClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c01d7*/
    return -2147467261; /*0x6c01d9*/
  *v4 = 0; /*0x6c01f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0212*/
    *v4 = a2; /*0x6c0216*/
  if ( !*v4 ) /*0x6c0218*/
    return -2147467262; /*0x6c0220*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c022c*/
  return 0; /*0x6c01de*/
}



// ==== 0x006C0240  _TClassFactory_VCampaignClass::AddRef  this=?$TClassFactory@VCampaignClass@@  sig=csp ====
LONG __thiscall TClassFactory_CampaignClass::AddRef(_TClassFactory_VCampaignClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c024e*/
}



// ==== 0x006C0260  _TClassFactory_VCampaignClass::GetClassName  this=?$TClassFactory@VCampaignClass@@  sig=csp ====
LONG __thiscall TClassFactory_CampaignClass::GetClassName(_TClassFactory_VCampaignClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0270*/
  if ( !v1 ) /*0x6c0274*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0277*/
  return v1; /*0x6c0281*/
}



// ==== 0x006C0290  _TClassFactory_VCampaignClass::ddtor  this=?$TClassFactory@VCampaignClass@@  sig=csp ====
int __thiscall TClassFactory_CampaignClass::ddtor(_TClassFactory_VCampaignClass *this, int a2, int a3, _DWORD *a4)
{
  CampaignClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0298*/
    return -2147024809; /*0x6c029b*/
  *v9 = 0; /*0x6c02a8*/
  if ( a3 ) /*0x6c02b0*/
    return -2147221232; /*0x6c02b3*/
  v5 = (CampaignClass *)__2_YAPAXI_Z(0x3A0u); /*0x6c02c1*/
  if ( !v5 ) /*0x6c02cb*/
    return -2147024882; /*0x6c02cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))CampaignClass::CampaignClass(v5, 0); /*0x6c02d1*/
  v7 = v6; /*0x6c02d6*/
  if ( !v6 ) /*0x6c02da*/
    return -2147024882; /*0x6c02dd*/
  v8 = (**v6)(v6, a4, v9); /*0x6c02f1*/
  if ( v8 < 0 ) /*0x6c02f5*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c02fd*/
  return v8; /*0x6c029a*/
}



// ==== 0x006C0310  _TClassFactory_VCampaignClass::GetSize  this=?$TClassFactory@VCampaignClass@@  sig=csp ====
int __thiscall TClassFactory_CampaignClass::GetSize(_TClassFactory_VCampaignClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c031a*/
  if ( v5 ) /*0x6c031d*/
    v3 = v2 + 1; /*0x6c031f*/
  else
    v3 = v2 - 1; /*0x6c0328*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c0320*/
  return 0; /*0x6c0325*/
}



// ==== 0x006C0340  ObjectClass::WinMain_Helper_6C0340  this=?$TClassFactory@VBuildingLightClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0340(ObjectClass *this)
{
  this->? = 0; /*0x6c0342*/
  this->AbstractClass = &TClassFactory<BuildingLightClass>::`vftable'; /*0x6c0349*/
  return &this->AbstractClass; /*0x6c034f*/
}



// ==== 0x006C0350  _TClassFactory_VBuildingLightClass::CreateTClassFactory_BuildingLightClass  this=?$TClassFactory@VBuildingLightClass@@  sig=csp ====
int __thiscall CreateTClassFactory_BuildingLightClass(
        _TClassFactory_VBuildingLightClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0357*/
    return -2147467261; /*0x6c0359*/
  *v4 = 0; /*0x6c0376*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0392*/
    *v4 = a2; /*0x6c0396*/
  if ( !*v4 ) /*0x6c0398*/
    return -2147467262; /*0x6c03a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c03ac*/
  return 0; /*0x6c035e*/
}



// ==== 0x006C03C0  _TClassFactory_VBuildingLightClass::AddRef  this=?$TClassFactory@VBuildingLightClass@@  sig=csp ====
LONG __thiscall TClassFactory_BuildingLightClass::AddRef(_TClassFactory_VBuildingLightClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c03ce*/
}



// ==== 0x006C03E0  _TClassFactory_VBuildingLightClass::GetClassName  this=?$TClassFactory@VBuildingLightClass@@  sig=csp ====
LONG __thiscall TClassFactory_BuildingLightClass::GetClassName(_TClassFactory_VBuildingLightClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c03f0*/
  if ( !v1 ) /*0x6c03f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c03f7*/
  return v1; /*0x6c0401*/
}



// ==== 0x006C0410  _TClassFactory_VBuildingLightClass::ddtor  this=?$TClassFactory@VBuildingLightClass@@  sig=csp ====
int __thiscall TClassFactory_BuildingLightClass::ddtor(
        _TClassFactory_VBuildingLightClass *this,
        int a2,
        int a3,
        int a4,
        _DWORD *a5)
{
  double v5; // st7
  int *v7; // eax
  int *v8; // esi
  int v9; // edi
  int v10; // [esp+0h] [ebp-8h]

  if ( !a5 ) /*0x6c0418*/
    return -2147024809; /*0x6c041b*/
  *a5 = 0; /*0x6c0428*/
  if ( a3 ) /*0x6c0430*/
    return -2147221232; /*0x6c0433*/
  if ( !__2_YAPAXI_Z(0xE8u) ) /*0x6c0441*/
    return -2147024882; /*0x6c0441*/
  v7 = BuildingLightClass::CTOR(0, v5, v10); /*0x6c0451*/
  v8 = v7; /*0x6c0456*/
  if ( !v7 ) /*0x6c045a*/
    return -2147024882; /*0x6c045d*/
  v9 = (*(int (__stdcall **)(int *, int, _DWORD *))*v7)(v7, a4, a5); /*0x6c0471*/
  if ( v9 < 0 ) /*0x6c0475*/
    (*(void (__thiscall **)(int *, int))(*v8 + 32))(v8, 1); /*0x6c047d*/
  return v9; /*0x6c041a*/
}



// ==== 0x006C0490  _TClassFactory_VBuildingLightClass::GetSize  this=?$TClassFactory@VBuildingLightClass@@  sig=csp ====
int __thiscall TClassFactory_BuildingLightClass::GetSize(_TClassFactory_VBuildingLightClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c049a*/
  if ( v5 ) /*0x6c049d*/
    v3 = v2 + 1; /*0x6c049f*/
  else
    v3 = v2 - 1; /*0x6c04a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c04a0*/
  return 0; /*0x6c04a5*/
}



// ==== 0x006C04C0  ObjectClass::WinMain_Helper_6C04C0  this=?$TClassFactory@VWaypointPathClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C04C0(ObjectClass *this)
{
  this->? = 0; /*0x6c04c2*/
  this->AbstractClass = &TClassFactory<WaypointPathClass>::`vftable'; /*0x6c04c9*/
  return &this->AbstractClass; /*0x6c04cf*/
}



// ==== 0x006C04D0  _TClassFactory_VWaypointPathClass::CreateTClassFactory_WaypointPathClass  this=?$TClassFactory@VWaypointPathClass@@  sig=csp ====
int __thiscall CreateTClassFactory_WaypointPathClass(
        _TClassFactory_VWaypointPathClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c04d7*/
    return -2147467261; /*0x6c04d9*/
  *v4 = 0; /*0x6c04f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0512*/
    *v4 = a2; /*0x6c0516*/
  if ( !*v4 ) /*0x6c0518*/
    return -2147467262; /*0x6c0520*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c052c*/
  return 0; /*0x6c04de*/
}



// ==== 0x006C0540  _TClassFactory_VWaypointPathClass::AddRef  this=?$TClassFactory@VWaypointPathClass@@  sig=csp ====
LONG __thiscall TClassFactory_WaypointPathClass::AddRef(_TClassFactory_VWaypointPathClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c054e*/
}



// ==== 0x006C0560  _TClassFactory_VWaypointPathClass::GetClassName  this=?$TClassFactory@VWaypointPathClass@@  sig=csp ====
LONG __thiscall TClassFactory_WaypointPathClass::GetClassName(_TClassFactory_VWaypointPathClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0570*/
  if ( !v1 ) /*0x6c0574*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0577*/
  return v1; /*0x6c0581*/
}



// ==== 0x006C0590  _TClassFactory_VWaypointPathClass::ddtor  this=?$TClassFactory@VWaypointPathClass@@  sig=csp ====
int __thiscall TClassFactory_WaypointPathClass::ddtor(
        _TClassFactory_VWaypointPathClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  WaypointPathClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0598*/
    return -2147024809; /*0x6c059b*/
  *v9 = 0; /*0x6c05a8*/
  if ( a3 ) /*0x6c05b0*/
    return -2147221232; /*0x6c05b3*/
  v5 = (WaypointPathClass *)__2_YAPAXI_Z(0x40u); /*0x6c05be*/
  if ( !v5 ) /*0x6c05c8*/
    return -2147024882; /*0x6c05c8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))WaypointPathClass::Init(v5); /*0x6c05cc*/
  v7 = v6; /*0x6c05d1*/
  if ( !v6 ) /*0x6c05d5*/
    return -2147024882; /*0x6c05d8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c05ec*/
  if ( v8 < 0 ) /*0x6c05f0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c05f8*/
  return v8; /*0x6c059a*/
}



// ==== 0x006C0610  _TClassFactory_VWaypointPathClass::GetSize  this=?$TClassFactory@VWaypointPathClass@@  sig=csp ====
int __thiscall TClassFactory_WaypointPathClass::GetSize(_TClassFactory_VWaypointPathClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c061a*/
  if ( v5 ) /*0x6c061d*/
    v3 = v2 + 1; /*0x6c061f*/
  else
    v3 = v2 - 1; /*0x6c0628*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c0620*/
  return 0; /*0x6c0625*/
}



// ==== 0x006C0640  ObjectClass::WinMain_Helper_6C0640  this=?$TClassFactory@VTemporalClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0640(ObjectClass *this)
{
  this->? = 0; /*0x6c0642*/
  this->AbstractClass = &TClassFactory<TemporalClass>::`vftable'; /*0x6c0649*/
  return &this->AbstractClass; /*0x6c064f*/
}



// ==== 0x006C0650  _TClassFactory_VTemporalClass::CreateTClassFactory_TemporalClass  this=?$TClassFactory@VTemporalClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TemporalClass(_TClassFactory_VTemporalClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0657*/
    return -2147467261; /*0x6c0659*/
  *v4 = 0; /*0x6c0676*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0692*/
    *v4 = a2; /*0x6c0696*/
  if ( !*v4 ) /*0x6c0698*/
    return -2147467262; /*0x6c06a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c06ac*/
  return 0; /*0x6c065e*/
}



// ==== 0x006C06C0  _TClassFactory_VTemporalClass::AddRef  this=?$TClassFactory@VTemporalClass@@  sig=csp ====
LONG __thiscall TClassFactory_TemporalClass::AddRef(_TClassFactory_VTemporalClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c06ce*/
}



// ==== 0x006C06E0  _TClassFactory_VTemporalClass::GetClassName  this=?$TClassFactory@VTemporalClass@@  sig=csp ====
LONG __thiscall TClassFactory_TemporalClass::GetClassName(_TClassFactory_VTemporalClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c06f0*/
  if ( !v1 ) /*0x6c06f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c06f7*/
  return v1; /*0x6c0701*/
}



// ==== 0x006C0710  _TClassFactory_VTemporalClass::ddtor  this=?$TClassFactory@VTemporalClass@@  sig=csp ====
int __thiscall TClassFactory_TemporalClass::ddtor(_TClassFactory_VTemporalClass *this, int a2, int a3, _DWORD *a4)
{
  TemporalClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0718*/
    return -2147024809; /*0x6c071b*/
  *v9 = 0; /*0x6c0728*/
  if ( a3 ) /*0x6c0730*/
    return -2147221232; /*0x6c0733*/
  v5 = (TemporalClass *)__2_YAPAXI_Z(0x50u); /*0x6c073e*/
  if ( !v5 ) /*0x6c0748*/
    return -2147024882; /*0x6c0748*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))TemporalClass::Constructor(v5); /*0x6c074c*/
  v7 = v6; /*0x6c0751*/
  if ( !v6 ) /*0x6c0755*/
    return -2147024882; /*0x6c0758*/
  v8 = (**v6)(v6, a4, v9); /*0x6c076c*/
  if ( v8 < 0 ) /*0x6c0770*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c0778*/
  return v8; /*0x6c071a*/
}



// ==== 0x006C0790  _TClassFactory_VTemporalClass::GetSize  this=?$TClassFactory@VTemporalClass@@  sig=csp ====
int __thiscall TClassFactory_TemporalClass::GetSize(_TClassFactory_VTemporalClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c079a*/
  if ( v5 ) /*0x6c079d*/
    v3 = v2 + 1; /*0x6c079f*/
  else
    v3 = v2 - 1; /*0x6c07a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c07a0*/
  return 0; /*0x6c07a5*/
}



// ==== 0x006C07C0  ObjectClass::WinMain_Helper_6C07C0  this=?$TClassFactory@VAirstrikeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C07C0(ObjectClass *this)
{
  this->? = 0; /*0x6c07c2*/
  this->AbstractClass = &TClassFactory<AirstrikeClass>::`vftable'; /*0x6c07c9*/
  return &this->AbstractClass; /*0x6c07cf*/
}



// ==== 0x006C07D0  _TClassFactory_VAirstrikeClass::CreateTClassFactory_AirstrikeClass  this=?$TClassFactory@VAirstrikeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AirstrikeClass(_TClassFactory_VAirstrikeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c07d7*/
    return -2147467261; /*0x6c07d9*/
  *v4 = 0; /*0x6c07f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0812*/
    *v4 = a2; /*0x6c0816*/
  if ( !*v4 ) /*0x6c0818*/
    return -2147467262; /*0x6c0820*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c082c*/
  return 0; /*0x6c07de*/
}



// ==== 0x006C0840  _TClassFactory_VAirstrikeClass::AddRef  this=?$TClassFactory@VAirstrikeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AirstrikeClass::AddRef(_TClassFactory_VAirstrikeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c084e*/
}



// ==== 0x006C0860  _TClassFactory_VAirstrikeClass::GetClassName  this=?$TClassFactory@VAirstrikeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AirstrikeClass::GetClassName(_TClassFactory_VAirstrikeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0870*/
  if ( !v1 ) /*0x6c0874*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0877*/
  return v1; /*0x6c0881*/
}



// ==== 0x006C0890  _TClassFactory_VAirstrikeClass::ddtor  this=?$TClassFactory@VAirstrikeClass@@  sig=csp ====
int __thiscall TClassFactory_AirstrikeClass::ddtor(_TClassFactory_VAirstrikeClass *this, int a2, int a3, _DWORD *a4)
{
  AbstractClass *v5; // eax
  AbstractClass *v6; // eax
  AbstractClass *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0898*/
    return -2147024809; /*0x6c089b*/
  *v9 = 0; /*0x6c08a8*/
  if ( a3 ) /*0x6c08b0*/
    return -2147221232; /*0x6c08b3*/
  v5 = (AbstractClass *)__2_YAPAXI_Z(0x60u); /*0x6c08be*/
  if ( !v5 ) /*0x6c08c8*/
    return -2147024882; /*0x6c08c8*/
  v6 = AbstractClass::Create(v5); /*0x6c08cc*/
  v7 = v6; /*0x6c08d1*/
  if ( !v6 ) /*0x6c08d5*/
    return -2147024882; /*0x6c08d8*/
  v8 = (*(int (__stdcall **)(AbstractClass *, _DWORD *, _DWORD *))v6->ptr_0)(v6, a4, v9); /*0x6c08ec*/
  if ( v8 < 0 ) /*0x6c08f0*/
    (*(void (__thiscall **)(AbstractClass *, int))(v7->ptr_0 + 32))(v7, 1); /*0x6c08f8*/
  return v8; /*0x6c089a*/
}



// ==== 0x006C0910  _TClassFactory_VAirstrikeClass::GetSize  this=?$TClassFactory@VAirstrikeClass@@  sig=csp ====
int __thiscall TClassFactory_AirstrikeClass::GetSize(_TClassFactory_VAirstrikeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c091a*/
  if ( v5 ) /*0x6c091d*/
    v3 = v2 + 1; /*0x6c091f*/
  else
    v3 = v2 - 1; /*0x6c0928*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c0920*/
  return 0; /*0x6c0925*/
}



// ==== 0x006C0940  ObjectClass::WinMain_Helper_6C0940  this=?$TClassFactory@VSpawnManagerClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0940(ObjectClass *this)
{
  this->? = 0; /*0x6c0942*/
  this->AbstractClass = &TClassFactory<SpawnManagerClass>::`vftable'; /*0x6c0949*/
  return &this->AbstractClass; /*0x6c094f*/
}



// ==== 0x006C0950  _TClassFactory_VSpawnManagerClass::CreateTClassFactory_SpawnManagerClass  this=?$TClassFactory@VSpawnManagerClass@@  sig=csp ====
int __thiscall CreateTClassFactory_SpawnManagerClass(
        _TClassFactory_VSpawnManagerClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0957*/
    return -2147467261; /*0x6c0959*/
  *v4 = 0; /*0x6c0976*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0992*/
    *v4 = a2; /*0x6c0996*/
  if ( !*v4 ) /*0x6c0998*/
    return -2147467262; /*0x6c09a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c09ac*/
  return 0; /*0x6c095e*/
}



// ==== 0x006C09C0  _TClassFactory_VSpawnManagerClass::AddRef  this=?$TClassFactory@VSpawnManagerClass@@  sig=csp ====
LONG __thiscall TClassFactory_SpawnManagerClass::AddRef(_TClassFactory_VSpawnManagerClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c09ce*/
}



// ==== 0x006C09E0  _TClassFactory_VSpawnManagerClass::GetClassName  this=?$TClassFactory@VSpawnManagerClass@@  sig=csp ====
LONG __thiscall TClassFactory_SpawnManagerClass::GetClassName(_TClassFactory_VSpawnManagerClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c09f0*/
  if ( !v1 ) /*0x6c09f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c09f7*/
  return v1; /*0x6c0a01*/
}



// ==== 0x006C0A10  _TClassFactory_VSpawnManagerClass::ddtor  this=?$TClassFactory@VSpawnManagerClass@@  sig=csp ====
int __thiscall TClassFactory_SpawnManagerClass::ddtor(
        _TClassFactory_VSpawnManagerClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  SpawnManagerClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0a18*/
    return -2147024809; /*0x6c0a1b*/
  *v9 = 0; /*0x6c0a28*/
  if ( a3 ) /*0x6c0a30*/
    return -2147221232; /*0x6c0a33*/
  v5 = (SpawnManagerClass *)__2_YAPAXI_Z(0x74u); /*0x6c0a3e*/
  if ( !v5 ) /*0x6c0a48*/
    return -2147024882; /*0x6c0a48*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))SpawnManagerClass::Constructor(v5); /*0x6c0a4c*/
  v7 = v6; /*0x6c0a51*/
  if ( !v6 ) /*0x6c0a55*/
    return -2147024882; /*0x6c0a58*/
  v8 = (**v6)(v6, a4, v9); /*0x6c0a6c*/
  if ( v8 < 0 ) /*0x6c0a70*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c0a78*/
  return v8; /*0x6c0a1a*/
}



// ==== 0x006C0A90  _TClassFactory_VSpawnManagerClass::GetSize  this=?$TClassFactory@VSpawnManagerClass@@  sig=csp ====
int __thiscall TClassFactory_SpawnManagerClass::GetSize(_TClassFactory_VSpawnManagerClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c0a9a*/
  if ( v5 ) /*0x6c0a9d*/
    v3 = v2 + 1; /*0x6c0a9f*/
  else
    v3 = v2 - 1; /*0x6c0aa8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c0aa0*/
  return 0; /*0x6c0aa5*/
}



// ==== 0x006C0AC0  COMClassFactory::CreateInstance  this=?$TClassFactory@VSlaveManagerClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory::CreateInstance(COMClassFactory *this)
{
  this->COMClassFactory_field_0x04 = 0; /*0x6c0ac2*/
  *(_DWORD *)this->__pad_0 = &TClassFactory<SlaveManagerClass>::`vftable'; /*0x6c0ac9*/
  return this->__pad_0; /*0x6c0acf*/
}



// ==== 0x006C0AD0  _TClassFactory_VSlaveManagerClass::CreateTClassFactory_SlaveManagerClass  this=?$TClassFactory@VSlaveManagerClass@@  sig=csp ====
int __thiscall CreateTClassFactory_SlaveManagerClass(
        _TClassFactory_VSlaveManagerClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0ad7*/
    return -2147467261; /*0x6c0ad9*/
  *v4 = 0; /*0x6c0af6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0b12*/
    *v4 = a2; /*0x6c0b16*/
  if ( !*v4 ) /*0x6c0b18*/
    return -2147467262; /*0x6c0b20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c0b2c*/
  return 0; /*0x6c0ade*/
}



// ==== 0x006C0B40  _TClassFactory_VSlaveManagerClass::AddRef  this=?$TClassFactory@VSlaveManagerClass@@  sig=csp ====
LONG __thiscall TClassFactory_SlaveManagerClass::AddRef(_TClassFactory_VSlaveManagerClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0b4e*/
}



// ==== 0x006C0B60  _TClassFactory_VSlaveManagerClass::GetClassName  this=?$TClassFactory@VSlaveManagerClass@@  sig=csp ====
LONG __thiscall TClassFactory_SlaveManagerClass::GetClassName(_TClassFactory_VSlaveManagerClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0b70*/
  if ( !v1 ) /*0x6c0b74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0b77*/
  return v1; /*0x6c0b81*/
}



// ==== 0x006C0B90  _TClassFactory_VSlaveManagerClass::ddtor  this=?$TClassFactory@VSlaveManagerClass@@  sig=csp ====
int __thiscall TClassFactory_SlaveManagerClass::ddtor(
        _TClassFactory_VSlaveManagerClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  SlaveManagerClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0b98*/
    return -2147024809; /*0x6c0b9b*/
  *v9 = 0; /*0x6c0ba8*/
  if ( a3 ) /*0x6c0bb0*/
    return -2147221232; /*0x6c0bb3*/
  v5 = (SlaveManagerClass *)__2_YAPAXI_Z(0x64u); /*0x6c0bbe*/
  if ( !v5 ) /*0x6c0bc8*/
    return -2147024882; /*0x6c0bc8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))SlaveManagerClass::Constructor(v5); /*0x6c0bcc*/
  v7 = v6; /*0x6c0bd1*/
  if ( !v6 ) /*0x6c0bd5*/
    return -2147024882; /*0x6c0bd8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c0bec*/
  if ( v8 < 0 ) /*0x6c0bf0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c0bf8*/
  return v8; /*0x6c0b9a*/
}



// ==== 0x006C0C10  _TClassFactory_VSlaveManagerClass::GetSize  this=?$TClassFactory@VSlaveManagerClass@@  sig=csp ====
int __thiscall TClassFactory_SlaveManagerClass::GetSize(_TClassFactory_VSlaveManagerClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c0c1a*/
  if ( v5 ) /*0x6c0c1d*/
    v3 = v2 + 1; /*0x6c0c1f*/
  else
    v3 = v2 - 1; /*0x6c0c28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c0c20*/
  return 0; /*0x6c0c25*/
}



// ==== 0x006C0C40  ObjectClass::WinMain_Helper_6C0C40  this=?$TClassFactory@VCaptureManagerClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0C40(ObjectClass *this)
{
  this->? = 0; /*0x6c0c42*/
  this->AbstractClass = &TClassFactory<CaptureManagerClass>::`vftable'; /*0x6c0c49*/
  return &this->AbstractClass; /*0x6c0c4f*/
}



// ==== 0x006C0C50  _TClassFactory_VCaptureManagerClass::CreateTClassFactory_CaptureManagerClass  this=?$TClassFactory@VCaptureManagerClass@@  sig=csp ====
int __thiscall CreateTClassFactory_CaptureManagerClass(
        _TClassFactory_VCaptureManagerClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0c57*/
    return -2147467261; /*0x6c0c59*/
  *v4 = 0; /*0x6c0c76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0c92*/
    *v4 = a2; /*0x6c0c96*/
  if ( !*v4 ) /*0x6c0c98*/
    return -2147467262; /*0x6c0ca0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c0cac*/
  return 0; /*0x6c0c5e*/
}



// ==== 0x006C0CC0  _TClassFactory_VCaptureManagerClass::AddRef  this=?$TClassFactory@VCaptureManagerClass@@  sig=csp ====
LONG __thiscall TClassFactory_CaptureManagerClass::AddRef(_TClassFactory_VCaptureManagerClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0cce*/
}



// ==== 0x006C0CE0  _TClassFactory_VCaptureManagerClass::GetClassName  this=?$TClassFactory@VCaptureManagerClass@@  sig=csp ====
LONG __thiscall TClassFactory_CaptureManagerClass::GetClassName(_TClassFactory_VCaptureManagerClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0cf0*/
  if ( !v1 ) /*0x6c0cf4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0cf7*/
  return v1; /*0x6c0d01*/
}



// ==== 0x006C0D10  _TClassFactory_VCaptureManagerClass::ddtor  this=?$TClassFactory@VCaptureManagerClass@@  sig=csp ====
int __thiscall TClassFactory_CaptureManagerClass::ddtor(
        _TClassFactory_VCaptureManagerClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  CaptureManagerClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0d18*/
    return -2147024809; /*0x6c0d1b*/
  *v9 = 0; /*0x6c0d28*/
  if ( a3 ) /*0x6c0d30*/
    return -2147221232; /*0x6c0d33*/
  v5 = (CaptureManagerClass *)__2_YAPAXI_Z(0x50u); /*0x6c0d3e*/
  if ( !v5 ) /*0x6c0d48*/
    return -2147024882; /*0x6c0d48*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))SmallFunc_471890(v5); /*0x6c0d4c*/
  v7 = v6; /*0x6c0d51*/
  if ( !v6 ) /*0x6c0d55*/
    return -2147024882; /*0x6c0d58*/
  v8 = (**v6)(v6, a4, v9); /*0x6c0d6c*/
  if ( v8 < 0 ) /*0x6c0d70*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c0d78*/
  return v8; /*0x6c0d1a*/
}



// ==== 0x006C0D90  _TClassFactory_VCaptureManagerClass::GetSize  this=?$TClassFactory@VCaptureManagerClass@@  sig=csp ====
int __thiscall TClassFactory_CaptureManagerClass::GetSize(_TClassFactory_VCaptureManagerClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c0d9a*/
  if ( v5 ) /*0x6c0d9d*/
    v3 = v2 + 1; /*0x6c0d9f*/
  else
    v3 = v2 - 1; /*0x6c0da8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c0da0*/
  return 0; /*0x6c0da5*/
}



// ==== 0x006C0DC0  ObjectClass::WinMain_Helper_6C0DC0  this=?$TClassFactory@VDiskLaserClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0DC0(ObjectClass *this)
{
  this->? = 0; /*0x6c0dc2*/
  this->AbstractClass = &TClassFactory<DiskLaserClass>::`vftable'; /*0x6c0dc9*/
  return &this->AbstractClass; /*0x6c0dcf*/
}



// ==== 0x006C0DD0  _TClassFactory_VDiskLaserClass::CreateTClassFactory_DiskLaserClass  this=?$TClassFactory@VDiskLaserClass@@  sig=csp ====
int __thiscall CreateTClassFactory_DiskLaserClass(_TClassFactory_VDiskLaserClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0dd7*/
    return -2147467261; /*0x6c0dd9*/
  *v4 = 0; /*0x6c0df6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0e12*/
    *v4 = a2; /*0x6c0e16*/
  if ( !*v4 ) /*0x6c0e18*/
    return -2147467262; /*0x6c0e20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c0e2c*/
  return 0; /*0x6c0dde*/
}



// ==== 0x006C0E40  _TClassFactory_VDiskLaserClass::AddRef  this=?$TClassFactory@VDiskLaserClass@@  sig=csp ====
LONG __thiscall TClassFactory_DiskLaserClass::AddRef(_TClassFactory_VDiskLaserClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0e4e*/
}



// ==== 0x006C0E60  _TClassFactory_VDiskLaserClass::GetClassName  this=?$TClassFactory@VDiskLaserClass@@  sig=csp ====
LONG __thiscall TClassFactory_DiskLaserClass::GetClassName(_TClassFactory_VDiskLaserClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0e70*/
  if ( !v1 ) /*0x6c0e74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0e77*/
  return v1; /*0x6c0e81*/
}



// ==== 0x006C0E90  _TClassFactory_VDiskLaserClass::ddtor  this=?$TClassFactory@VDiskLaserClass@@  sig=csp ====
int __thiscall TClassFactory_DiskLaserClass::ddtor(_TClassFactory_VDiskLaserClass *this, int a2, int a3, _DWORD *a4)
{
  DiskLaserClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0e98*/
    return -2147024809; /*0x6c0e9b*/
  *v9 = 0; /*0x6c0ea8*/
  if ( a3 ) /*0x6c0eb0*/
    return -2147221232; /*0x6c0eb3*/
  v5 = (DiskLaserClass *)__2_YAPAXI_Z(0x40u); /*0x6c0ebe*/
  if ( !v5 ) /*0x6c0ec8*/
    return -2147024882; /*0x6c0ec8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))DiskLaserClass::DiskLaserClass(v5); /*0x6c0ecc*/
  v7 = v6; /*0x6c0ed1*/
  if ( !v6 ) /*0x6c0ed5*/
    return -2147024882; /*0x6c0ed8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c0eec*/
  if ( v8 < 0 ) /*0x6c0ef0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c0ef8*/
  return v8; /*0x6c0e9a*/
}



// ==== 0x006C0F10  _TClassFactory_VDiskLaserClass::GetSize  this=?$TClassFactory@VDiskLaserClass@@  sig=csp ====
int __thiscall TClassFactory_DiskLaserClass::GetSize(_TClassFactory_VDiskLaserClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c0f1a*/
  if ( v5 ) /*0x6c0f1d*/
    v3 = v2 + 1; /*0x6c0f1f*/
  else
    v3 = v2 - 1; /*0x6c0f28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c0f20*/
  return 0; /*0x6c0f25*/
}



// ==== 0x006C0F40  ObjectClass::WinMain_Helper_6C0F40  this=?$TClassFactory@VParasiteClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0F40(ObjectClass *this)
{
  this->? = 0; /*0x6c0f42*/
  this->AbstractClass = &TClassFactory<ParasiteClass>::`vftable'; /*0x6c0f49*/
  return &this->AbstractClass; /*0x6c0f4f*/
}



// ==== 0x006C0F50  _TClassFactory_VParasiteClass::CreateTClassFactory_ParasiteClass  this=?$TClassFactory@VParasiteClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ParasiteClass(_TClassFactory_VParasiteClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0f57*/
    return -2147467261; /*0x6c0f59*/
  *v4 = 0; /*0x6c0f76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0f92*/
    *v4 = a2; /*0x6c0f96*/
  if ( !*v4 ) /*0x6c0f98*/
    return -2147467262; /*0x6c0fa0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c0fac*/
  return 0; /*0x6c0f5e*/
}



// ==== 0x006C0FC0  _TClassFactory_VParasiteClass::AddRef  this=?$TClassFactory@VParasiteClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParasiteClass::AddRef(_TClassFactory_VParasiteClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0fce*/
}



// ==== 0x006C0FE0  _TClassFactory_VParasiteClass::GetClassName  this=?$TClassFactory@VParasiteClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParasiteClass::GetClassName(_TClassFactory_VParasiteClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0ff0*/
  if ( !v1 ) /*0x6c0ff4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0ff7*/
  return v1; /*0x6c1001*/
}



// ==== 0x006C1010  _TClassFactory_VParasiteClass::ddtor  this=?$TClassFactory@VParasiteClass@@  sig=csp ====
int __thiscall TClassFactory_ParasiteClass::ddtor(_TClassFactory_VParasiteClass *this, int a2, int a3, _DWORD *a4)
{
  ParasiteClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1018*/
    return -2147024809; /*0x6c101b*/
  *v9 = 0; /*0x6c1028*/
  if ( a3 ) /*0x6c1030*/
    return -2147221232; /*0x6c1033*/
  v5 = (ParasiteClass *)__2_YAPAXI_Z(0x58u); /*0x6c103e*/
  if ( !v5 ) /*0x6c1048*/
    return -2147024882; /*0x6c1048*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))ParasiteClass::Constructor(v5); /*0x6c104c*/
  v7 = v6; /*0x6c1051*/
  if ( !v6 ) /*0x6c1055*/
    return -2147024882; /*0x6c1058*/
  v8 = (**v6)(v6, a4, v9); /*0x6c106c*/
  if ( v8 < 0 ) /*0x6c1070*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c1078*/
  return v8; /*0x6c101a*/
}



// ==== 0x006C1090  _TClassFactory_VParasiteClass::GetSize  this=?$TClassFactory@VParasiteClass@@  sig=csp ====
int __thiscall TClassFactory_ParasiteClass::GetSize(_TClassFactory_VParasiteClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c109a*/
  if ( v5 ) /*0x6c109d*/
    v3 = v2 + 1; /*0x6c109f*/
  else
    v3 = v2 - 1; /*0x6c10a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c10a0*/
  return 0; /*0x6c10a5*/
}



// ==== 0x006C10C0  ObjectClass::WinMain_Helper_6C10C0  this=?$TClassFactory@VBombClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C10C0(ObjectClass *this)
{
  this->? = 0; /*0x6c10c2*/
  this->AbstractClass = &TClassFactory<BombClass>::`vftable'; /*0x6c10c9*/
  return &this->AbstractClass; /*0x6c10cf*/
}



// ==== 0x006C10D0  _TClassFactory_VBombClass::CreateTClassFactory_BombClass  this=?$TClassFactory@VBombClass@@  sig=csp ====
int __thiscall CreateTClassFactory_BombClass(_TClassFactory_VBombClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c10d7*/
    return -2147467261; /*0x6c10d9*/
  *v4 = 0; /*0x6c10f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1112*/
    *v4 = a2; /*0x6c1116*/
  if ( !*v4 ) /*0x6c1118*/
    return -2147467262; /*0x6c1120*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c112c*/
  return 0; /*0x6c10de*/
}



// ==== 0x006C1140  _TClassFactory_VBombClass::AddRef  this=?$TClassFactory@VBombClass@@  sig=csp ====
LONG __thiscall TClassFactory_BombClass::AddRef(_TClassFactory_VBombClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c114e*/
}



// ==== 0x006C1160  _TClassFactory_VBombClass::GetClassName  this=?$TClassFactory@VBombClass@@  sig=csp ====
LONG __thiscall TClassFactory_BombClass::GetClassName(_TClassFactory_VBombClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1170*/
  if ( !v1 ) /*0x6c1174*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1177*/
  return v1; /*0x6c1181*/
}



// ==== 0x006C1190  _TClassFactory_VBombClass::ddtor  this=?$TClassFactory@VBombClass@@  sig=csp ====
int __thiscall TClassFactory_BombClass::ddtor(_TClassFactory_VBombClass *this, int a2, int a3, _DWORD *a4)
{
  BombClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1198*/
    return -2147024809; /*0x6c119b*/
  *v9 = 0; /*0x6c11a8*/
  if ( a3 ) /*0x6c11b0*/
    return -2147221232; /*0x6c11b3*/
  v5 = (BombClass *)__2_YAPAXI_Z(0x5Cu); /*0x6c11be*/
  if ( !v5 ) /*0x6c11c8*/
    return -2147024882; /*0x6c11c8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))BombClass::AbstractClass(v5); /*0x6c11cc*/
  v7 = v6; /*0x6c11d1*/
  if ( !v6 ) /*0x6c11d5*/
    return -2147024882; /*0x6c11d8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c11ec*/
  if ( v8 < 0 ) /*0x6c11f0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c11f8*/
  return v8; /*0x6c119a*/
}



// ==== 0x006C1210  _TClassFactory_VBombClass::GetSize  this=?$TClassFactory@VBombClass@@  sig=csp ====
int __thiscall TClassFactory_BombClass::GetSize(_TClassFactory_VBombClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c121a*/
  if ( v5 ) /*0x6c121d*/
    v3 = v2 + 1; /*0x6c121f*/
  else
    v3 = v2 - 1; /*0x6c1228*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c1220*/
  return 0; /*0x6c1225*/
}



// ==== 0x006C1240  ObjectClass::WinMain_Helper_6C1240  this=?$TClassFactory@VRadSiteClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1240(ObjectClass *this)
{
  this->? = 0; /*0x6c1242*/
  this->AbstractClass = &TClassFactory<RadSiteClass>::`vftable'; /*0x6c1249*/
  return &this->AbstractClass; /*0x6c124f*/
}



// ==== 0x006C1250  _TClassFactory_VRadSiteClass::CreateTClassFactory_RadSiteClass  this=?$TClassFactory@VRadSiteClass@@  sig=csp ====
int __thiscall CreateTClassFactory_RadSiteClass(_TClassFactory_VRadSiteClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1257*/
    return -2147467261; /*0x6c1259*/
  *v4 = 0; /*0x6c1276*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1292*/
    *v4 = a2; /*0x6c1296*/
  if ( !*v4 ) /*0x6c1298*/
    return -2147467262; /*0x6c12a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c12ac*/
  return 0; /*0x6c125e*/
}



// ==== 0x006C12C0  _TClassFactory_VRadSiteClass::AddRef  this=?$TClassFactory@VRadSiteClass@@  sig=csp ====
LONG __thiscall TClassFactory_RadSiteClass::AddRef(_TClassFactory_VRadSiteClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c12ce*/
}



// ==== 0x006C12E0  _TClassFactory_VRadSiteClass::GetClassName  this=?$TClassFactory@VRadSiteClass@@  sig=csp ====
LONG __thiscall TClassFactory_RadSiteClass::GetClassName(_TClassFactory_VRadSiteClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c12f0*/
  if ( !v1 ) /*0x6c12f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c12f7*/
  return v1; /*0x6c1301*/
}



// ==== 0x006C1310  _TClassFactory_VRadSiteClass::ddtor  this=?$TClassFactory@VRadSiteClass@@  sig=csp ====
int __thiscall TClassFactory_RadSiteClass::ddtor(_TClassFactory_VRadSiteClass *this, int a2, int a3, _DWORD *a4)
{
  RadSiteClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1318*/
    return -2147024809; /*0x6c131b*/
  *v9 = 0; /*0x6c1328*/
  if ( a3 ) /*0x6c1330*/
    return -2147221232; /*0x6c1333*/
  v5 = (RadSiteClass *)__2_YAPAXI_Z(0x74u); /*0x6c133e*/
  if ( !v5 ) /*0x6c1348*/
    return -2147024882; /*0x6c1348*/
  v6 = RadSiteClass::RadSiteClass(v5); /*0x6c134c*/
  v7 = v6; /*0x6c1351*/
  if ( !v6 ) /*0x6c1355*/
    return -2147024882; /*0x6c1358*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c136c*/
  if ( v8 < 0 ) /*0x6c1370*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c1378*/
  return v8; /*0x6c131a*/
}



// ==== 0x006C1390  _TClassFactory_VRadSiteClass::GetSize  this=?$TClassFactory@VRadSiteClass@@  sig=csp ====
int __thiscall TClassFactory_RadSiteClass::GetSize(_TClassFactory_VRadSiteClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c139a*/
  if ( v5 ) /*0x6c139d*/
    v3 = v2 + 1; /*0x6c139f*/
  else
    v3 = v2 - 1; /*0x6c13a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c13a0*/
  return 0; /*0x6c13a5*/
}



// ==== 0x006C13C0  ObjectClass::WinMain_Helper_6C13C0  this=?$TClassFactory@VTEventClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C13C0(ObjectClass *this)
{
  this->? = 0; /*0x6c13c2*/
  this->AbstractClass = &TClassFactory<TEventClass>::`vftable'; /*0x6c13c9*/
  return &this->AbstractClass; /*0x6c13cf*/
}



// ==== 0x006C13D0  _TClassFactory_VTEventClass::CreateTClassFactory_TEventClass  this=?$TClassFactory@VTEventClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TEventClass(_TClassFactory_VTEventClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c13d7*/
    return -2147467261; /*0x6c13d9*/
  *v4 = 0; /*0x6c13f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1412*/
    *v4 = a2; /*0x6c1416*/
  if ( !*v4 ) /*0x6c1418*/
    return -2147467262; /*0x6c1420*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c142c*/
  return 0; /*0x6c13de*/
}



// ==== 0x006C1440  _TClassFactory_VTEventClass::AddRef  this=?$TClassFactory@VTEventClass@@  sig=csp ====
LONG __thiscall TClassFactory_TEventClass::AddRef(_TClassFactory_VTEventClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c144e*/
}



// ==== 0x006C1460  _TClassFactory_VTEventClass::GetClassName  this=?$TClassFactory@VTEventClass@@  sig=csp ====
LONG __thiscall TClassFactory_TEventClass::GetClassName(_TClassFactory_VTEventClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1470*/
  if ( !v1 ) /*0x6c1474*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1477*/
  return v1; /*0x6c1481*/
}



// ==== 0x006C1490  _TClassFactory_VTEventClass::ddtor  this=?$TClassFactory@VTEventClass@@  sig=csp ====
int __thiscall TClassFactory_TEventClass::ddtor(_TClassFactory_VTEventClass *this, int a2, int a3, _DWORD *a4)
{
  TActionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1498*/
    return -2147024809; /*0x6c149b*/
  *v9 = 0; /*0x6c14a8*/
  if ( a3 ) /*0x6c14b0*/
    return -2147221232; /*0x6c14b3*/
  v5 = (TActionClass *)__2_YAPAXI_Z(0x58u); /*0x6c14be*/
  if ( !v5 ) /*0x6c14c8*/
    return -2147024882; /*0x6c14c8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))TActionClass::TActionClass(v5); /*0x6c14cc*/
  v7 = v6; /*0x6c14d1*/
  if ( !v6 ) /*0x6c14d5*/
    return -2147024882; /*0x6c14d8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c14ec*/
  if ( v8 < 0 ) /*0x6c14f0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c14f8*/
  return v8; /*0x6c149a*/
}



// ==== 0x006C1510  _TClassFactory_VTEventClass::GetSize  this=?$TClassFactory@VTEventClass@@  sig=csp ====
int __thiscall TClassFactory_TEventClass::GetSize(_TClassFactory_VTEventClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c151a*/
  if ( v5 ) /*0x6c151d*/
    v3 = v2 + 1; /*0x6c151f*/
  else
    v3 = v2 - 1; /*0x6c1528*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c1520*/
  return 0; /*0x6c1525*/
}



// ==== 0x006C1540  ObjectClass::WinMain_Helper_6C1540  this=?$TClassFactory@VVoxelAnimTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1540(ObjectClass *this)
{
  this->? = 0; /*0x6c1542*/
  this->AbstractClass = &TClassFactory<VoxelAnimTypeClass>::`vftable'; /*0x6c1549*/
  return &this->AbstractClass; /*0x6c154f*/
}



// ==== 0x006C1550  _TClassFactory_VVoxelAnimTypeClass::CreateTClassFactory_VoxelAnimTypeClass  this=?$TClassFactory@VVoxelAnimTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_VoxelAnimTypeClass(
        _TClassFactory_VVoxelAnimTypeClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1557*/
    return -2147467261; /*0x6c1559*/
  *v4 = 0; /*0x6c1576*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1592*/
    *v4 = a2; /*0x6c1596*/
  if ( !*v4 ) /*0x6c1598*/
    return -2147467262; /*0x6c15a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c15ac*/
  return 0; /*0x6c155e*/
}



// ==== 0x006C15C0  _TClassFactory_VVoxelAnimTypeClass::AddRef  this=?$TClassFactory@VVoxelAnimTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_VoxelAnimTypeClass::AddRef(_TClassFactory_VVoxelAnimTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c15ce*/
}



// ==== 0x006C15E0  _TClassFactory_VVoxelAnimTypeClass::GetClassName  this=?$TClassFactory@VVoxelAnimTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_VoxelAnimTypeClass::GetClassName(_TClassFactory_VVoxelAnimTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c15f0*/
  if ( !v1 ) /*0x6c15f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c15f7*/
  return v1; /*0x6c1601*/
}



// ==== 0x006C1610  _TClassFactory_VVoxelAnimTypeClass::GetClassIdentifier  this=?$TClassFactory@VVoxelAnimTypeClass@@  sig=csp ====
int __thiscall TClassFactory_VoxelAnimTypeClass::GetClassIdentifier(
        _TClassFactory_VVoxelAnimTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  VoxelAnimTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1618*/
    return -2147024809; /*0x6c161b*/
  *v9 = 0; /*0x6c1628*/
  if ( a3 ) /*0x6c1630*/
    return -2147221232; /*0x6c1633*/
  v5 = (VoxelAnimTypeClass *)__2_YAPAXI_Z(0x308u); /*0x6c1641*/
  if ( !v5 ) /*0x6c164b*/
    return -2147024882; /*0x6c164b*/
  v6 = VoxelAnimTypeClass::Constructor(v5, 0); /*0x6c1651*/
  v7 = v6; /*0x6c1656*/
  if ( !v6 ) /*0x6c165a*/
    return -2147024882; /*0x6c165d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c1671*/
  if ( v8 < 0 ) /*0x6c1675*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c167d*/
  return v8; /*0x6c161a*/
}



// ==== 0x006C1690  _TClassFactory_VVoxelAnimTypeClass::GetSize  this=?$TClassFactory@VVoxelAnimTypeClass@@  sig=csp ====
int __thiscall TClassFactory_VoxelAnimTypeClass::GetSize(_TClassFactory_VVoxelAnimTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c169a*/
  if ( v5 ) /*0x6c169d*/
    v3 = v2 + 1; /*0x6c169f*/
  else
    v3 = v2 - 1; /*0x6c16a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c16a0*/
  return 0; /*0x6c16a5*/
}



// ==== 0x006C16C0  ObjectClass::WinMain_Helper_6C16C0  this=?$TClassFactory@VVoxelAnimClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C16C0(ObjectClass *this)
{
  this->? = 0; /*0x6c16c2*/
  this->AbstractClass = &TClassFactory<VoxelAnimClass>::`vftable'; /*0x6c16c9*/
  return &this->AbstractClass; /*0x6c16cf*/
}



// ==== 0x006C16D0  _TClassFactory_VVoxelAnimClass::CreateTClassFactory_VoxelAnimClass  this=?$TClassFactory@VVoxelAnimClass@@  sig=csp ====
int __thiscall CreateTClassFactory_VoxelAnimClass(_TClassFactory_VVoxelAnimClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c16d7*/
    return -2147467261; /*0x6c16d9*/
  *v4 = 0; /*0x6c16f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1712*/
    *v4 = a2; /*0x6c1716*/
  if ( !*v4 ) /*0x6c1718*/
    return -2147467262; /*0x6c1720*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c172c*/
  return 0; /*0x6c16de*/
}



// ==== 0x006C1740  _TClassFactory_VVoxelAnimClass::AddRef  this=?$TClassFactory@VVoxelAnimClass@@  sig=csp ====
LONG __thiscall TClassFactory_VoxelAnimClass::AddRef(_TClassFactory_VVoxelAnimClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c174e*/
}



// ==== 0x006C1760  _TClassFactory_VVoxelAnimClass::GetClassName  this=?$TClassFactory@VVoxelAnimClass@@  sig=csp ====
LONG __thiscall TClassFactory_VoxelAnimClass::GetClassName(_TClassFactory_VVoxelAnimClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1770*/
  if ( !v1 ) /*0x6c1774*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1777*/
  return v1; /*0x6c1781*/
}



// ==== 0x006C1790  _TClassFactory_VVoxelAnimClass::ddtor  this=?$TClassFactory@VVoxelAnimClass@@  sig=csp ====
int __thiscall TClassFactory_VoxelAnimClass::ddtor(_TClassFactory_VVoxelAnimClass *this, int a2, int a3, _DWORD *a4)
{
  ObjectClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1798*/
    return -2147024809; /*0x6c179b*/
  *v9 = 0; /*0x6c17a8*/
  if ( a3 ) /*0x6c17b0*/
    return -2147221232; /*0x6c17b3*/
  v5 = (ObjectClass *)__2_YAPAXI_Z(0x148u); /*0x6c17c1*/
  if ( !v5 ) /*0x6c17cb*/
    return -2147024882; /*0x6c17cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))ObjectClass::Initialize(v5); /*0x6c17cf*/
  v7 = v6; /*0x6c17d4*/
  if ( !v6 ) /*0x6c17d8*/
    return -2147024882; /*0x6c17db*/
  v8 = (**v6)(v6, a4, v9); /*0x6c17ef*/
  if ( v8 < 0 ) /*0x6c17f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c17fb*/
  return v8; /*0x6c179a*/
}



// ==== 0x006C1810  _TClassFactory_VVoxelAnimClass::GetSize  this=?$TClassFactory@VVoxelAnimClass@@  sig=csp ====
int __thiscall TClassFactory_VoxelAnimClass::GetSize(_TClassFactory_VVoxelAnimClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c181a*/
  if ( v5 ) /*0x6c181d*/
    v3 = v2 + 1; /*0x6c181f*/
  else
    v3 = v2 - 1; /*0x6c1828*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c1820*/
  return 0; /*0x6c1825*/
}



// ==== 0x006C1840  ObjectClass::WinMain_Helper_6C1840  this=?$TClassFactory@VTActionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1840(ObjectClass *this)
{
  this->? = 0; /*0x6c1842*/
  this->AbstractClass = &TClassFactory<TActionClass>::`vftable'; /*0x6c1849*/
  return &this->AbstractClass; /*0x6c184f*/
}



// ==== 0x006C1850  _TClassFactory_VTActionClass::CreateTClassFactory_TActionClass  this=?$TClassFactory@VTActionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TActionClass(_TClassFactory_VTActionClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1857*/
    return -2147467261; /*0x6c1859*/
  *v4 = 0; /*0x6c1876*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1892*/
    *v4 = a2; /*0x6c1896*/
  if ( !*v4 ) /*0x6c1898*/
    return -2147467262; /*0x6c18a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c18ac*/
  return 0; /*0x6c185e*/
}



// ==== 0x006C18C0  _TClassFactory_VTActionClass::AddRef  this=?$TClassFactory@VTActionClass@@  sig=csp ====
LONG __thiscall TClassFactory_TActionClass::AddRef(_TClassFactory_VTActionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c18ce*/
}



// ==== 0x006C18E0  _TClassFactory_VTActionClass::GetClassName  this=?$TClassFactory@VTActionClass@@  sig=csp ====
LONG __thiscall TClassFactory_TActionClass::GetClassName(_TClassFactory_VTActionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c18f0*/
  if ( !v1 ) /*0x6c18f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c18f7*/
  return v1; /*0x6c1901*/
}



// ==== 0x006C1910  _TClassFactory_VTActionClass::ddtor  this=?$TClassFactory@VTActionClass@@  sig=csp ====
int __thiscall TClassFactory_TActionClass::ddtor(_TClassFactory_VTActionClass *this, int a2, int a3, _DWORD *a4)
{
  TActionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1918*/
    return -2147024809; /*0x6c191b*/
  *v9 = 0; /*0x6c1928*/
  if ( a3 ) /*0x6c1930*/
    return -2147221232; /*0x6c1933*/
  v5 = (TActionClass *)__2_YAPAXI_Z(0x94u); /*0x6c1941*/
  if ( !v5 ) /*0x6c194b*/
    return -2147024882; /*0x6c194b*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))TActionClass::ctor(v5); /*0x6c194f*/
  v7 = v6; /*0x6c1954*/
  if ( !v6 ) /*0x6c1958*/
    return -2147024882; /*0x6c195b*/
  v8 = (**v6)(v6, a4, v9); /*0x6c196f*/
  if ( v8 < 0 ) /*0x6c1973*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c197b*/
  return v8; /*0x6c191a*/
}



// ==== 0x006C1990  _TClassFactory_VTActionClass::GetSize  this=?$TClassFactory@VTActionClass@@  sig=csp ====
int __thiscall TClassFactory_TActionClass::GetSize(_TClassFactory_VTActionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c199a*/
  if ( v5 ) /*0x6c199d*/
    v3 = v2 + 1; /*0x6c199f*/
  else
    v3 = v2 - 1; /*0x6c19a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c19a0*/
  return 0; /*0x6c19a5*/
}



// ==== 0x006C19C0  ObjectClass::WinMain_Helper_6C19C0  this=?$TClassFactory@VTriggerClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C19C0(ObjectClass *this)
{
  this->? = 0; /*0x6c19c2*/
  this->AbstractClass = &TClassFactory<TriggerClass>::`vftable'; /*0x6c19c9*/
  return &this->AbstractClass; /*0x6c19cf*/
}



// ==== 0x006C19D0  _TClassFactory_VTriggerClass::CreateTClassFactory_TriggerClass  this=?$TClassFactory@VTriggerClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TriggerClass(_TClassFactory_VTriggerClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c19d7*/
    return -2147467261; /*0x6c19d9*/
  *v4 = 0; /*0x6c19f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1a12*/
    *v4 = a2; /*0x6c1a16*/
  if ( !*v4 ) /*0x6c1a18*/
    return -2147467262; /*0x6c1a20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c1a2c*/
  return 0; /*0x6c19de*/
}



// ==== 0x006C1A40  _TClassFactory_VTriggerClass::AddRef  this=?$TClassFactory@VTriggerClass@@  sig=csp ====
LONG __thiscall TClassFactory_TriggerClass::AddRef(_TClassFactory_VTriggerClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1a4e*/
}



// ==== 0x006C1A60  _TClassFactory_VTriggerClass::GetClassName  this=?$TClassFactory@VTriggerClass@@  sig=csp ====
LONG __thiscall TClassFactory_TriggerClass::GetClassName(_TClassFactory_VTriggerClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1a70*/
  if ( !v1 ) /*0x6c1a74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1a77*/
  return v1; /*0x6c1a81*/
}



// ==== 0x006C1A90  _TClassFactory_VTriggerClass::ddtor  this=?$TClassFactory@VTriggerClass@@  sig=csp ====
int __thiscall TClassFactory_TriggerClass::ddtor(_TClassFactory_VTriggerClass *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1a98*/
    return -2147024809; /*0x6c1a9b*/
  *v9 = 0; /*0x6c1aa8*/
  if ( a3 ) /*0x6c1ab0*/
    return -2147221232; /*0x6c1ab3*/
  v5 = __2_YAPAXI_Z(0x48u); /*0x6c1abe*/
  if ( !v5 ) /*0x6c1ac8*/
    return -2147024882; /*0x6c1ac8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))TriggerClass::Construct(v5, 0); /*0x6c1ace*/
  v7 = v6; /*0x6c1ad3*/
  if ( !v6 ) /*0x6c1ad7*/
    return -2147024882; /*0x6c1ada*/
  v8 = (**v6)(v6, a4, v9); /*0x6c1aee*/
  if ( v8 < 0 ) /*0x6c1af2*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c1afa*/
  return v8; /*0x6c1a9a*/
}



// ==== 0x006C1B10  _TClassFactory_VTriggerClass::GetSize  this=?$TClassFactory@VTriggerClass@@  sig=csp ====
int __thiscall TClassFactory_TriggerClass::GetSize(_TClassFactory_VTriggerClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c1b1a*/
  if ( v5 ) /*0x6c1b1d*/
    v3 = v2 + 1; /*0x6c1b1f*/
  else
    v3 = v2 - 1; /*0x6c1b28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c1b20*/
  return 0; /*0x6c1b25*/
}



// ==== 0x006C1B40  ObjectClass::WinMain_Helper_6C1B40  this=?$TClassFactory@VTriggerTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1B40(ObjectClass *this)
{
  this->? = 0; /*0x6c1b42*/
  this->AbstractClass = &TClassFactory<TriggerTypeClass>::`vftable'; /*0x6c1b49*/
  return &this->AbstractClass; /*0x6c1b4f*/
}



// ==== 0x006C1B50  _TClassFactory_VTriggerTypeClass::CreateTClassFactory_TriggerTypeClass  this=?$TClassFactory@VTriggerTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TriggerTypeClass(_TClassFactory_VTriggerTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1b57*/
    return -2147467261; /*0x6c1b59*/
  *v4 = 0; /*0x6c1b76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1b92*/
    *v4 = a2; /*0x6c1b96*/
  if ( !*v4 ) /*0x6c1b98*/
    return -2147467262; /*0x6c1ba0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c1bac*/
  return 0; /*0x6c1b5e*/
}



// ==== 0x006C1BC0  _TClassFactory_VTriggerTypeClass::AddRef  this=?$TClassFactory@VTriggerTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_TriggerTypeClass::AddRef(_TClassFactory_VTriggerTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1bce*/
}



// ==== 0x006C1BE0  _TClassFactory_VTriggerTypeClass::GetClassName  this=?$TClassFactory@VTriggerTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_TriggerTypeClass::GetClassName(_TClassFactory_VTriggerTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1bf0*/
  if ( !v1 ) /*0x6c1bf4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1bf7*/
  return v1; /*0x6c1c01*/
}



// ==== 0x006C1C10  _TClassFactory_VTriggerTypeClass::GetClassIdentifier  this=?$TClassFactory@VTriggerTypeClass@@  sig=csp ====
int __thiscall TClassFactory_TriggerTypeClass::GetClassIdentifier(
        _TClassFactory_VTriggerTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  TriggerTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1c18*/
    return -2147024809; /*0x6c1c1b*/
  *v9 = 0; /*0x6c1c28*/
  if ( a3 ) /*0x6c1c30*/
    return -2147221232; /*0x6c1c33*/
  v5 = (TriggerTypeClass *)__2_YAPAXI_Z(0xB4u); /*0x6c1c41*/
  if ( !v5 ) /*0x6c1c4b*/
    return -2147024882; /*0x6c1c4b*/
  v6 = TriggerTypeClass::Construct(v5, 0); /*0x6c1c51*/
  v7 = v6; /*0x6c1c56*/
  if ( !v6 ) /*0x6c1c5a*/
    return -2147024882; /*0x6c1c5d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c1c71*/
  if ( v8 < 0 ) /*0x6c1c75*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c1c7d*/
  return v8; /*0x6c1c1a*/
}



// ==== 0x006C1C90  _TClassFactory_VTriggerTypeClass::GetSize  this=?$TClassFactory@VTriggerTypeClass@@  sig=csp ====
int __thiscall TClassFactory_TriggerTypeClass::GetSize(_TClassFactory_VTriggerTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c1c9a*/
  if ( v5 ) /*0x6c1c9d*/
    v3 = v2 + 1; /*0x6c1c9f*/
  else
    v3 = v2 - 1; /*0x6c1ca8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c1ca0*/
  return 0; /*0x6c1ca5*/
}



// ==== 0x006C1CC0  ObjectClass::WinMain_Helper_6C1CC0  this=?$TClassFactory@VScriptClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1CC0(ObjectClass *this)
{
  this->? = 0; /*0x6c1cc2*/
  this->AbstractClass = &TClassFactory<ScriptClass>::`vftable'; /*0x6c1cc9*/
  return &this->AbstractClass; /*0x6c1ccf*/
}



// ==== 0x006C1CD0  _TClassFactory_VScriptClass::CreateTClassFactory_ScriptClass  this=?$TClassFactory@VScriptClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ScriptClass(_TClassFactory_VScriptClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1cd7*/
    return -2147467261; /*0x6c1cd9*/
  *v4 = 0; /*0x6c1cf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1d12*/
    *v4 = a2; /*0x6c1d16*/
  if ( !*v4 ) /*0x6c1d18*/
    return -2147467262; /*0x6c1d20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c1d2c*/
  return 0; /*0x6c1cde*/
}



// ==== 0x006C1D40  _TClassFactory_VScriptClass::AddRef  this=?$TClassFactory@VScriptClass@@  sig=csp ====
LONG __thiscall TClassFactory_ScriptClass::AddRef(_TClassFactory_VScriptClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1d4e*/
}



// ==== 0x006C1D60  _TClassFactory_VScriptClass::GetClassName  this=?$TClassFactory@VScriptClass@@  sig=csp ====
LONG __thiscall TClassFactory_ScriptClass::GetClassName(_TClassFactory_VScriptClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1d70*/
  if ( !v1 ) /*0x6c1d74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1d77*/
  return v1; /*0x6c1d81*/
}



// ==== 0x006C1D90  _TClassFactory_VScriptClass::ddtor  this=?$TClassFactory@VScriptClass@@  sig=csp ====
int __thiscall TClassFactory_ScriptClass::ddtor(_TClassFactory_VScriptClass *this, int a2, int a3, _DWORD *a4)
{
  ScriptClass *v5; // eax
  AbstractClass *v6; // eax
  AbstractClass *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1d98*/
    return -2147024809; /*0x6c1d9b*/
  *v9 = 0; /*0x6c1da8*/
  if ( a3 ) /*0x6c1db0*/
    return -2147221232; /*0x6c1db3*/
  v5 = (ScriptClass *)__2_YAPAXI_Z(0x30u); /*0x6c1dbe*/
  if ( !v5 ) /*0x6c1dc8*/
    return -2147024882; /*0x6c1dc8*/
  v6 = ScriptClass::Construct(v5, 0); /*0x6c1dce*/
  v7 = v6; /*0x6c1dd3*/
  if ( !v6 ) /*0x6c1dd7*/
    return -2147024882; /*0x6c1dda*/
  v8 = (*(int (__stdcall **)(AbstractClass *, _DWORD *, _DWORD *))v6->ptr_0)(v6, a4, v9); /*0x6c1dee*/
  if ( v8 < 0 ) /*0x6c1df2*/
    (*(void (__thiscall **)(AbstractClass *, int))(v7->ptr_0 + 32))(v7, 1); /*0x6c1dfa*/
  return v8; /*0x6c1d9a*/
}



// ==== 0x006C1E10  _TClassFactory_VScriptClass::GetSize  this=?$TClassFactory@VScriptClass@@  sig=csp ====
int __thiscall TClassFactory_ScriptClass::GetSize(_TClassFactory_VScriptClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c1e1a*/
  if ( v5 ) /*0x6c1e1d*/
    v3 = v2 + 1; /*0x6c1e1f*/
  else
    v3 = v2 - 1; /*0x6c1e28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c1e20*/
  return 0; /*0x6c1e25*/
}



// ==== 0x006C1E40  ObjectClass::WinMain_Helper_6C1E40  this=?$TClassFactory@VScriptTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1E40(ObjectClass *this)
{
  this->? = 0; /*0x6c1e42*/
  this->AbstractClass = &TClassFactory<ScriptTypeClass>::`vftable'; /*0x6c1e49*/
  return &this->AbstractClass; /*0x6c1e4f*/
}



// ==== 0x006C1E50  _TClassFactory_VScriptTypeClass::CreateTClassFactory_ScriptTypeClass  this=?$TClassFactory@VScriptTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ScriptTypeClass(_TClassFactory_VScriptTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1e57*/
    return -2147467261; /*0x6c1e59*/
  *v4 = 0; /*0x6c1e76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1e92*/
    *v4 = a2; /*0x6c1e96*/
  if ( !*v4 ) /*0x6c1e98*/
    return -2147467262; /*0x6c1ea0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c1eac*/
  return 0; /*0x6c1e5e*/
}



// ==== 0x006C1EC0  _TClassFactory_VScriptTypeClass::AddRef  this=?$TClassFactory@VScriptTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_ScriptTypeClass::AddRef(_TClassFactory_VScriptTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1ece*/
}



// ==== 0x006C1EE0  _TClassFactory_VScriptTypeClass::GetClassName  this=?$TClassFactory@VScriptTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_ScriptTypeClass::GetClassName(_TClassFactory_VScriptTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1ef0*/
  if ( !v1 ) /*0x6c1ef4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1ef7*/
  return v1; /*0x6c1f01*/
}



// ==== 0x006C1F10  _TClassFactory_VScriptTypeClass::GetClassIdentifier  this=?$TClassFactory@VScriptTypeClass@@  sig=csp ====
int __thiscall TClassFactory_ScriptTypeClass::GetClassIdentifier(
        _TClassFactory_VScriptTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  ScriptTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1f18*/
    return -2147024809; /*0x6c1f1b*/
  *v9 = 0; /*0x6c1f28*/
  if ( a3 ) /*0x6c1f30*/
    return -2147221232; /*0x6c1f33*/
  v5 = (ScriptTypeClass *)__2_YAPAXI_Z(0x234u); /*0x6c1f41*/
  if ( !v5 ) /*0x6c1f4b*/
    return -2147024882; /*0x6c1f4b*/
  v6 = ScriptTypeClass::Constructor(v5, 0); /*0x6c1f51*/
  v7 = v6; /*0x6c1f56*/
  if ( !v6 ) /*0x6c1f5a*/
    return -2147024882; /*0x6c1f5d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c1f71*/
  if ( v8 < 0 ) /*0x6c1f75*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c1f7d*/
  return v8; /*0x6c1f1a*/
}



// ==== 0x006C1F90  _TClassFactory_VScriptTypeClass::GetSize  this=?$TClassFactory@VScriptTypeClass@@  sig=csp ====
int __thiscall TClassFactory_ScriptTypeClass::GetSize(_TClassFactory_VScriptTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c1f9a*/
  if ( v5 ) /*0x6c1f9d*/
    v3 = v2 + 1; /*0x6c1f9f*/
  else
    v3 = v2 - 1; /*0x6c1fa8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c1fa0*/
  return 0; /*0x6c1fa5*/
}



// ==== 0x006C1FC0  ObjectClass::WinMain_Helper_6C1FC0  this=?$TClassFactory@VTagClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1FC0(ObjectClass *this)
{
  this->? = 0; /*0x6c1fc2*/
  this->AbstractClass = &TClassFactory<TagClass>::`vftable'; /*0x6c1fc9*/
  return &this->AbstractClass; /*0x6c1fcf*/
}



// ==== 0x006C1FD0  _TClassFactory_VTagClass::CreateTClassFactory_TagClass  this=?$TClassFactory@VTagClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TagClass(_TClassFactory_VTagClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1fd7*/
    return -2147467261; /*0x6c1fd9*/
  *v4 = 0; /*0x6c1ff6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2012*/
    *v4 = a2; /*0x6c2016*/
  if ( !*v4 ) /*0x6c2018*/
    return -2147467262; /*0x6c2020*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c202c*/
  return 0; /*0x6c1fde*/
}



// ==== 0x006C2040  _TClassFactory_VTagClass::AddRef  this=?$TClassFactory@VTagClass@@  sig=csp ====
LONG __thiscall TClassFactory_TagClass::AddRef(_TClassFactory_VTagClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c204e*/
}



// ==== 0x006C2060  _TClassFactory_VTagClass::GetClassName  this=?$TClassFactory@VTagClass@@  sig=csp ====
LONG __thiscall TClassFactory_TagClass::GetClassName(_TClassFactory_VTagClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2070*/
  if ( !v1 ) /*0x6c2074*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2077*/
  return v1; /*0x6c2081*/
}



// ==== 0x006C2090  _TClassFactory_VTagClass::ddtor  this=?$TClassFactory@VTagClass@@  sig=csp ====
int __thiscall TClassFactory_TagClass::ddtor(_TClassFactory_VTagClass *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***Type)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2098*/
    return -2147024809; /*0x6c209b*/
  *v9 = 0; /*0x6c20a8*/
  if ( a3 ) /*0x6c20b0*/
    return -2147221232; /*0x6c20b3*/
  v5 = __2_YAPAXI_Z(0x38u); /*0x6c20be*/
  if ( !v5 ) /*0x6c20c8*/
    return -2147024882; /*0x6c20c8*/
  Type = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))TeknoClass::GetType(v5, 0); /*0x6c20ce*/
  v7 = Type; /*0x6c20d3*/
  if ( !Type ) /*0x6c20d7*/
    return -2147024882; /*0x6c20da*/
  v8 = (**Type)(Type, a4, v9); /*0x6c20ee*/
  if ( v8 < 0 ) /*0x6c20f2*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c20fa*/
  return v8; /*0x6c209a*/
}



// ==== 0x006C2110  _TClassFactory_VTagClass::GetSize  this=?$TClassFactory@VTagClass@@  sig=csp ====
int __thiscall TClassFactory_TagClass::GetSize(_TClassFactory_VTagClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c211a*/
  if ( v5 ) /*0x6c211d*/
    v3 = v2 + 1; /*0x6c211f*/
  else
    v3 = v2 - 1; /*0x6c2128*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c2120*/
  return 0; /*0x6c2125*/
}



// ==== 0x006C2140  ObjectClass::WinMain_Helper_6C2140  this=?$TClassFactory@VTagTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2140(ObjectClass *this)
{
  this->? = 0; /*0x6c2142*/
  this->AbstractClass = &TClassFactory<TagTypeClass>::`vftable'; /*0x6c2149*/
  return &this->AbstractClass; /*0x6c214f*/
}



// ==== 0x006C2150  _TClassFactory_VTagTypeClass::CreateTClassFactory_TagTypeClass  this=?$TClassFactory@VTagTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TagTypeClass(_TClassFactory_VTagTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2157*/
    return -2147467261; /*0x6c2159*/
  *v4 = 0; /*0x6c2176*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2192*/
    *v4 = a2; /*0x6c2196*/
  if ( !*v4 ) /*0x6c2198*/
    return -2147467262; /*0x6c21a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c21ac*/
  return 0; /*0x6c215e*/
}



// ==== 0x006C21C0  _TClassFactory_VTagTypeClass::AddRef  this=?$TClassFactory@VTagTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_TagTypeClass::AddRef(_TClassFactory_VTagTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c21ce*/
}



// ==== 0x006C21E0  _TClassFactory_VTagTypeClass::GetClassName  this=?$TClassFactory@VTagTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_TagTypeClass::GetClassName(_TClassFactory_VTagTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c21f0*/
  if ( !v1 ) /*0x6c21f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c21f7*/
  return v1; /*0x6c2201*/
}



// ==== 0x006C2210  _TClassFactory_VTagTypeClass::GetClassIdentifier  this=?$TClassFactory@VTagTypeClass@@  sig=csp ====
int __thiscall TClassFactory_TagTypeClass::GetClassIdentifier(
        _TClassFactory_VTagTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  char *v5; // eax
  char *v6; // eax
  char *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2218*/
    return -2147024809; /*0x6c221b*/
  *v9 = 0; /*0x6c2228*/
  if ( a3 ) /*0x6c2230*/
    return -2147221232; /*0x6c2233*/
  v5 = (char *)__2_YAPAXI_Z(0xA4u); /*0x6c2241*/
  if ( !v5 ) /*0x6c224b*/
    return -2147024882; /*0x6c224b*/
  v6 = TagTypeClass::Construct(v5, 0); /*0x6c2251*/
  v7 = v6; /*0x6c2256*/
  if ( !v6 ) /*0x6c225a*/
    return -2147024882; /*0x6c225d*/
  v8 = (**(int (__stdcall ***)(char *, _DWORD *, _DWORD *))v6)(v6, a4, v9); /*0x6c2271*/
  if ( v8 < 0 ) /*0x6c2275*/
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v7 + 32))(v7, 1); /*0x6c227d*/
  return v8; /*0x6c221a*/
}



// ==== 0x006C2290  _TClassFactory_VTagTypeClass::GetSize  this=?$TClassFactory@VTagTypeClass@@  sig=csp ====
int __thiscall TClassFactory_TagTypeClass::GetSize(_TClassFactory_VTagTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c229a*/
  if ( v5 ) /*0x6c229d*/
    v3 = v2 + 1; /*0x6c229f*/
  else
    v3 = v2 - 1; /*0x6c22a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c22a0*/
  return 0; /*0x6c22a5*/
}



// ==== 0x006C22C0  ObjectClass::WinMain_Helper_6C22C0  this=?$TClassFactory@VTeamClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C22C0(ObjectClass *this)
{
  this->? = 0; /*0x6c22c2*/
  this->AbstractClass = &TClassFactory<TeamClass>::`vftable'; /*0x6c22c9*/
  return &this->AbstractClass; /*0x6c22cf*/
}



// ==== 0x006C22D0  _TClassFactory_VTeamClass::CreateTClassFactory_TeamClass  this=?$TClassFactory@VTeamClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TeamClass(_TClassFactory_VTeamClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c22d7*/
    return -2147467261; /*0x6c22d9*/
  *v4 = 0; /*0x6c22f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2312*/
    *v4 = a2; /*0x6c2316*/
  if ( !*v4 ) /*0x6c2318*/
    return -2147467262; /*0x6c2320*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c232c*/
  return 0; /*0x6c22de*/
}



// ==== 0x006C2340  _TClassFactory_VTeamClass::AddRef  this=?$TClassFactory@VTeamClass@@  sig=csp ====
LONG __thiscall TClassFactory_TeamClass::AddRef(_TClassFactory_VTeamClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c234e*/
}



// ==== 0x006C2360  _TClassFactory_VTeamClass::GetClassName  this=?$TClassFactory@VTeamClass@@  sig=csp ====
LONG __thiscall TClassFactory_TeamClass::GetClassName(_TClassFactory_VTeamClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2370*/
  if ( !v1 ) /*0x6c2374*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2377*/
  return v1; /*0x6c2381*/
}



// ==== 0x006C2390  _TClassFactory_VTeamClass::ddtor  this=?$TClassFactory@VTeamClass@@  sig=csp ====
int __thiscall TClassFactory_TeamClass::ddtor(_TClassFactory_VTeamClass *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2398*/
    return -2147024809; /*0x6c239b*/
  *v9 = 0; /*0x6c23a8*/
  if ( a3 ) /*0x6c23b0*/
    return -2147221232; /*0x6c23b3*/
  v5 = __2_YAPAXI_Z(0xA0u); /*0x6c23c1*/
  if ( !v5 ) /*0x6c23cb*/
    return -2147024882; /*0x6c23cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))MissionClass::Construct(v5, 0, 0, 0); /*0x6c23d5*/
  v7 = v6; /*0x6c23da*/
  if ( !v6 ) /*0x6c23de*/
    return -2147024882; /*0x6c23e1*/
  v8 = (**v6)(v6, a4, v9); /*0x6c23f5*/
  if ( v8 < 0 ) /*0x6c23f9*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c2401*/
  return v8; /*0x6c239a*/
}



// ==== 0x006C2410  _TClassFactory_VTeamClass::GetSize  this=?$TClassFactory@VTeamClass@@  sig=csp ====
int __thiscall TClassFactory_TeamClass::GetSize(_TClassFactory_VTeamClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c241a*/
  if ( v5 ) /*0x6c241d*/
    v3 = v2 + 1; /*0x6c241f*/
  else
    v3 = v2 - 1; /*0x6c2428*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c2420*/
  return 0; /*0x6c2425*/
}



// ==== 0x006C2440  ObjectClass::WinMain_Helper_6C2440  this=?$TClassFactory@VTeamTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2440(ObjectClass *this)
{
  this->? = 0; /*0x6c2442*/
  this->AbstractClass = &TClassFactory<TeamTypeClass>::`vftable'; /*0x6c2449*/
  return &this->AbstractClass; /*0x6c244f*/
}



// ==== 0x006C2450  _TClassFactory_VTeamTypeClass::CreateTClassFactory_TeamTypeClass  this=?$TClassFactory@VTeamTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TeamTypeClass(_TClassFactory_VTeamTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2457*/
    return -2147467261; /*0x6c2459*/
  *v4 = 0; /*0x6c2476*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2492*/
    *v4 = a2; /*0x6c2496*/
  if ( !*v4 ) /*0x6c2498*/
    return -2147467262; /*0x6c24a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c24ac*/
  return 0; /*0x6c245e*/
}



// ==== 0x006C24C0  _TClassFactory_VTeamTypeClass::AddRef  this=?$TClassFactory@VTeamTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_TeamTypeClass::AddRef(_TClassFactory_VTeamTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c24ce*/
}



// ==== 0x006C24E0  _TClassFactory_VTeamTypeClass::GetClassName  this=?$TClassFactory@VTeamTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_TeamTypeClass::GetClassName(_TClassFactory_VTeamTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c24f0*/
  if ( !v1 ) /*0x6c24f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c24f7*/
  return v1; /*0x6c2501*/
}



// ==== 0x006C2510  _TClassFactory_VTeamTypeClass::GetClassIdentifier  this=?$TClassFactory@VTeamTypeClass@@  sig=csp ====
int __thiscall TClassFactory_TeamTypeClass::GetClassIdentifier(
        _TClassFactory_VTeamTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  TeamTypeClass *v5; // eax
  _DWORD *Base; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2518*/
    return -2147024809; /*0x6c251b*/
  *v9 = 0; /*0x6c2528*/
  if ( a3 ) /*0x6c2530*/
    return -2147221232; /*0x6c2533*/
  v5 = (TeamTypeClass *)__2_YAPAXI_Z(0xF8u); /*0x6c2541*/
  if ( !v5 ) /*0x6c254b*/
    return -2147024882; /*0x6c254b*/
  Base = TechnoTypeClass::LoadBase(v5, 0); /*0x6c2551*/
  v7 = Base; /*0x6c2556*/
  if ( !Base ) /*0x6c255a*/
    return -2147024882; /*0x6c255d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*Base)(Base, a4, v9); /*0x6c2571*/
  if ( v8 < 0 ) /*0x6c2575*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c257d*/
  return v8; /*0x6c251a*/
}



// ==== 0x006C2590  _TClassFactory_VTeamTypeClass::GetSize  this=?$TClassFactory@VTeamTypeClass@@  sig=csp ====
int __thiscall TClassFactory_TeamTypeClass::GetSize(_TClassFactory_VTeamTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c259a*/
  if ( v5 ) /*0x6c259d*/
    v3 = v2 + 1; /*0x6c259f*/
  else
    v3 = v2 - 1; /*0x6c25a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c25a0*/
  return 0; /*0x6c25a5*/
}



// ==== 0x006C25C0  ObjectClass::WinMain_Helper_6C25C0  this=?$TClassFactory@VTaskForceClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C25C0(ObjectClass *this)
{
  this->? = 0; /*0x6c25c2*/
  this->AbstractClass = &TClassFactory<TaskForceClass>::`vftable'; /*0x6c25c9*/
  return &this->AbstractClass; /*0x6c25cf*/
}



// ==== 0x006C25D0  _TClassFactory_VTaskForceClass::CreateTClassFactory_TaskForceClass  this=?$TClassFactory@VTaskForceClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TaskForceClass(_TClassFactory_VTaskForceClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c25d7*/
    return -2147467261; /*0x6c25d9*/
  *v4 = 0; /*0x6c25f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2612*/
    *v4 = a2; /*0x6c2616*/
  if ( !*v4 ) /*0x6c2618*/
    return -2147467262; /*0x6c2620*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c262c*/
  return 0; /*0x6c25de*/
}



// ==== 0x006C2640  _TClassFactory_VTaskForceClass::AddRef  this=?$TClassFactory@VTaskForceClass@@  sig=csp ====
LONG __thiscall TClassFactory_TaskForceClass::AddRef(_TClassFactory_VTaskForceClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c264e*/
}



// ==== 0x006C2660  _TClassFactory_VTaskForceClass::GetClassName  this=?$TClassFactory@VTaskForceClass@@  sig=csp ====
LONG __thiscall TClassFactory_TaskForceClass::GetClassName(_TClassFactory_VTaskForceClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2670*/
  if ( !v1 ) /*0x6c2674*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2677*/
  return v1; /*0x6c2681*/
}



// ==== 0x006C2690  _TClassFactory_VTaskForceClass::ddtor  this=?$TClassFactory@VTaskForceClass@@  sig=csp ====
int __thiscall TClassFactory_TaskForceClass::ddtor(_TClassFactory_VTaskForceClass *this, int a2, int a3, _DWORD *a4)
{
  TaskForceClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2698*/
    return -2147024809; /*0x6c269b*/
  *v9 = 0; /*0x6c26a8*/
  if ( a3 ) /*0x6c26b0*/
    return -2147221232; /*0x6c26b3*/
  v5 = (TaskForceClass *)__2_YAPAXI_Z(0xD4u); /*0x6c26c1*/
  if ( !v5 ) /*0x6c26cb*/
    return -2147024882; /*0x6c26cb*/
  v6 = TaskForceClass::Construct(v5, 0); /*0x6c26d1*/
  v7 = v6; /*0x6c26d6*/
  if ( !v6 ) /*0x6c26da*/
    return -2147024882; /*0x6c26dd*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c26f1*/
  if ( v8 < 0 ) /*0x6c26f5*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c26fd*/
  return v8; /*0x6c269a*/
}



// ==== 0x006C2710  _TClassFactory_VTaskForceClass::GetSize  this=?$TClassFactory@VTaskForceClass@@  sig=csp ====
int __thiscall TClassFactory_TaskForceClass::GetSize(_TClassFactory_VTaskForceClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c271a*/
  if ( v5 ) /*0x6c271d*/
    v3 = v2 + 1; /*0x6c271f*/
  else
    v3 = v2 - 1; /*0x6c2728*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c2720*/
  return 0; /*0x6c2725*/
}



// ==== 0x006C2740  ObjectClass::WinMain_Helper_6C2740  this=?$TClassFactory@VUnitTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2740(ObjectClass *this)
{
  this->? = 0; /*0x6c2742*/
  this->AbstractClass = &TClassFactory<UnitTypeClass>::`vftable'; /*0x6c2749*/
  return &this->AbstractClass; /*0x6c274f*/
}



// ==== 0x006C2750  _TClassFactory_VUnitTypeClass::CreateTClassFactory_UnitTypeClass  this=?$TClassFactory@VUnitTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_UnitTypeClass(_TClassFactory_VUnitTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2757*/
    return -2147467261; /*0x6c2759*/
  *v4 = 0; /*0x6c2776*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2792*/
    *v4 = a2; /*0x6c2796*/
  if ( !*v4 ) /*0x6c2798*/
    return -2147467262; /*0x6c27a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c27ac*/
  return 0; /*0x6c275e*/
}



// ==== 0x006C27C0  _TClassFactory_VUnitTypeClass::AddRef  this=?$TClassFactory@VUnitTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_UnitTypeClass::AddRef(_TClassFactory_VUnitTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c27ce*/
}



// ==== 0x006C27E0  _TClassFactory_VUnitTypeClass::GetClassName  this=?$TClassFactory@VUnitTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_UnitTypeClass::GetClassName(_TClassFactory_VUnitTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c27f0*/
  if ( !v1 ) /*0x6c27f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c27f7*/
  return v1; /*0x6c2801*/
}



// ==== 0x006C2810  _TClassFactory_VUnitTypeClass::GetClassIdentifier  this=?$TClassFactory@VUnitTypeClass@@  sig=csp ====
int __thiscall TClassFactory_UnitTypeClass::GetClassIdentifier(
        _TClassFactory_VUnitTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2818*/
    return -2147024809; /*0x6c281b*/
  *v9 = 0; /*0x6c2828*/
  if ( a3 ) /*0x6c2830*/
    return -2147221232; /*0x6c2833*/
  v5 = __2_YAPAXI_Z(0xE78u); /*0x6c2841*/
  if ( !v5 ) /*0x6c284b*/
    return -2147024882; /*0x6c284b*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))UnitTypeClass::UnitTypeClass(v5, 0); /*0x6c2851*/
  v7 = v6; /*0x6c2856*/
  if ( !v6 ) /*0x6c285a*/
    return -2147024882; /*0x6c285d*/
  v8 = (**v6)(v6, a4, v9); /*0x6c2871*/
  if ( v8 < 0 ) /*0x6c2875*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c287d*/
  return v8; /*0x6c281a*/
}



// ==== 0x006C2890  _TClassFactory_VUnitTypeClass::GetSize  this=?$TClassFactory@VUnitTypeClass@@  sig=csp ====
int __thiscall TClassFactory_UnitTypeClass::GetSize(_TClassFactory_VUnitTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c289a*/
  if ( v5 ) /*0x6c289d*/
    v3 = v2 + 1; /*0x6c289f*/
  else
    v3 = v2 - 1; /*0x6c28a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c28a0*/
  return 0; /*0x6c28a5*/
}



// ==== 0x006C28C0  ObjectClass::WinMain_Helper_6C28C0  this=?$TClassFactory@VBuildingTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C28C0(ObjectClass *this)
{
  this->? = 0; /*0x6c28c2*/
  this->AbstractClass = &TClassFactory<BuildingTypeClass>::`vftable'; /*0x6c28c9*/
  return &this->AbstractClass; /*0x6c28cf*/
}



// ==== 0x006C28D0  _TClassFactory_VBuildingTypeClass::CreateTClassFactory_BuildingTypeClass  this=?$TClassFactory@VBuildingTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_BuildingTypeClass(
        _TClassFactory_VBuildingTypeClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c28d7*/
    return -2147467261; /*0x6c28d9*/
  *v4 = 0; /*0x6c28f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2912*/
    *v4 = a2; /*0x6c2916*/
  if ( !*v4 ) /*0x6c2918*/
    return -2147467262; /*0x6c2920*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c292c*/
  return 0; /*0x6c28de*/
}



// ==== 0x006C2940  _TClassFactory_VBuildingTypeClass::AddRef  this=?$TClassFactory@VBuildingTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_BuildingTypeClass::AddRef(_TClassFactory_VBuildingTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c294e*/
}



// ==== 0x006C2960  _TClassFactory_VBuildingTypeClass::GetClassName  this=?$TClassFactory@VBuildingTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_BuildingTypeClass::GetClassName(_TClassFactory_VBuildingTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2970*/
  if ( !v1 ) /*0x6c2974*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2977*/
  return v1; /*0x6c2981*/
}



// ==== 0x006C2990  _TClassFactory_VBuildingTypeClass::GetClassIdentifier  this=?$TClassFactory@VBuildingTypeClass@@  sig=csp ====
int __thiscall TClassFactory_BuildingTypeClass::GetClassIdentifier(
        _TClassFactory_VBuildingTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2998*/
    return -2147024809; /*0x6c299b*/
  *v9 = 0; /*0x6c29a8*/
  if ( a3 ) /*0x6c29b0*/
    return -2147221232; /*0x6c29b3*/
  v5 = __2_YAPAXI_Z(0x1798u); /*0x6c29c1*/
  if ( !v5 ) /*0x6c29cb*/
    return -2147024882; /*0x6c29cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))BuildingTypeClass::ConstructFull(v5, 0); /*0x6c29d1*/
  v7 = v6; /*0x6c29d6*/
  if ( !v6 ) /*0x6c29da*/
    return -2147024882; /*0x6c29dd*/
  v8 = (**v6)(v6, a4, v9); /*0x6c29f1*/
  if ( v8 < 0 ) /*0x6c29f5*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c29fd*/
  return v8; /*0x6c299a*/
}



// ==== 0x006C2A10  _TClassFactory_VBuildingTypeClass::GetSize  this=?$TClassFactory@VBuildingTypeClass@@  sig=csp ====
int __thiscall TClassFactory_BuildingTypeClass::GetSize(_TClassFactory_VBuildingTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c2a1a*/
  if ( v5 ) /*0x6c2a1d*/
    v3 = v2 + 1; /*0x6c2a1f*/
  else
    v3 = v2 - 1; /*0x6c2a28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c2a20*/
  return 0; /*0x6c2a25*/
}



// ==== 0x006C2A40  ObjectClass::WinMain_Helper_6C2A40  this=?$TClassFactory@VAircraftTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2A40(ObjectClass *this)
{
  this->? = 0; /*0x6c2a42*/
  this->AbstractClass = &TClassFactory<AircraftTypeClass>::`vftable'; /*0x6c2a49*/
  return &this->AbstractClass; /*0x6c2a4f*/
}



// ==== 0x006C2A50  _TClassFactory_VAircraftTypeClass::CreateTClassFactory_AircraftTypeClass  this=?$TClassFactory@VAircraftTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AircraftTypeClass(
        _TClassFactory_VAircraftTypeClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2a57*/
    return -2147467261; /*0x6c2a59*/
  *v4 = 0; /*0x6c2a76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2a92*/
    *v4 = a2; /*0x6c2a96*/
  if ( !*v4 ) /*0x6c2a98*/
    return -2147467262; /*0x6c2aa0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c2aac*/
  return 0; /*0x6c2a5e*/
}



// ==== 0x006C2AC0  _TClassFactory_VAircraftTypeClass::AddRef  this=?$TClassFactory@VAircraftTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AircraftTypeClass::AddRef(_TClassFactory_VAircraftTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2ace*/
}



// ==== 0x006C2AE0  _TClassFactory_VAircraftTypeClass::GetClassName  this=?$TClassFactory@VAircraftTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AircraftTypeClass::GetClassName(_TClassFactory_VAircraftTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2af0*/
  if ( !v1 ) /*0x6c2af4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2af7*/
  return v1; /*0x6c2b01*/
}



// ==== 0x006C2B10  _TClassFactory_VAircraftTypeClass::GetClassIdentifier  this=?$TClassFactory@VAircraftTypeClass@@  sig=csp ====
int __thiscall TClassFactory_AircraftTypeClass::GetClassIdentifier(
        _TClassFactory_VAircraftTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2b18*/
    return -2147024809; /*0x6c2b1b*/
  *v9 = 0; /*0x6c2b28*/
  if ( a3 ) /*0x6c2b30*/
    return -2147221232; /*0x6c2b33*/
  v5 = __2_YAPAXI_Z(0xE10u); /*0x6c2b41*/
  if ( !v5 ) /*0x6c2b4b*/
    return -2147024882; /*0x6c2b4b*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))AircraftTypeClass::AircraftTypeClass(v5, 0); /*0x6c2b51*/
  v7 = v6; /*0x6c2b56*/
  if ( !v6 ) /*0x6c2b5a*/
    return -2147024882; /*0x6c2b5d*/
  v8 = (**v6)(v6, a4, v9); /*0x6c2b71*/
  if ( v8 < 0 ) /*0x6c2b75*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c2b7d*/
  return v8; /*0x6c2b1a*/
}



// ==== 0x006C2B90  _TClassFactory_VAircraftTypeClass::GetSize  this=?$TClassFactory@VAircraftTypeClass@@  sig=csp ====
int __thiscall TClassFactory_AircraftTypeClass::GetSize(_TClassFactory_VAircraftTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c2b9a*/
  if ( v5 ) /*0x6c2b9d*/
    v3 = v2 + 1; /*0x6c2b9f*/
  else
    v3 = v2 - 1; /*0x6c2ba8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c2ba0*/
  return 0; /*0x6c2ba5*/
}



// ==== 0x006C2BC0  ObjectClass::WinMain_Helper_6C2BC0  this=?$TClassFactory@VInfantryTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2BC0(ObjectClass *this)
{
  this->? = 0; /*0x6c2bc2*/
  this->AbstractClass = &TClassFactory<InfantryTypeClass>::`vftable'; /*0x6c2bc9*/
  return &this->AbstractClass; /*0x6c2bcf*/
}



// ==== 0x006C2BD0  _TClassFactory_VInfantryTypeClass::CreateTClassFactory_InfantryTypeClass  this=?$TClassFactory@VInfantryTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_InfantryTypeClass(
        _TClassFactory_VInfantryTypeClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2bd7*/
    return -2147467261; /*0x6c2bd9*/
  *v4 = 0; /*0x6c2bf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2c12*/
    *v4 = a2; /*0x6c2c16*/
  if ( !*v4 ) /*0x6c2c18*/
    return -2147467262; /*0x6c2c20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c2c2c*/
  return 0; /*0x6c2bde*/
}



// ==== 0x006C2C40  _TClassFactory_VInfantryTypeClass::AddRef  this=?$TClassFactory@VInfantryTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_InfantryTypeClass::AddRef(_TClassFactory_VInfantryTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2c4e*/
}



// ==== 0x006C2C60  _TClassFactory_VInfantryTypeClass::GetClassName  this=?$TClassFactory@VInfantryTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_InfantryTypeClass::GetClassName(_TClassFactory_VInfantryTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2c70*/
  if ( !v1 ) /*0x6c2c74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2c77*/
  return v1; /*0x6c2c81*/
}



// ==== 0x006C2C90  _TClassFactory_VInfantryTypeClass::GetClassIdentifier  this=?$TClassFactory@VInfantryTypeClass@@  sig=csp ====
int __thiscall TClassFactory_InfantryTypeClass::GetClassIdentifier(
        _TClassFactory_VInfantryTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2c98*/
    return -2147024809; /*0x6c2c9b*/
  *v9 = 0; /*0x6c2ca8*/
  if ( a3 ) /*0x6c2cb0*/
    return -2147221232; /*0x6c2cb3*/
  v5 = __2_YAPAXI_Z(0xED0u); /*0x6c2cc1*/
  if ( !v5 ) /*0x6c2ccb*/
    return -2147024882; /*0x6c2ccb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))InfantryTypeClass::Constructor(v5, 0); /*0x6c2cd1*/
  v7 = v6; /*0x6c2cd6*/
  if ( !v6 ) /*0x6c2cda*/
    return -2147024882; /*0x6c2cdd*/
  v8 = (**v6)(v6, a4, v9); /*0x6c2cf1*/
  if ( v8 < 0 ) /*0x6c2cf5*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c2cfd*/
  return v8; /*0x6c2c9a*/
}



// ==== 0x006C2D10  _TClassFactory_VInfantryTypeClass::GetSize  this=?$TClassFactory@VInfantryTypeClass@@  sig=csp ====
int __thiscall TClassFactory_InfantryTypeClass::GetSize(_TClassFactory_VInfantryTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c2d1a*/
  if ( v5 ) /*0x6c2d1d*/
    v3 = v2 + 1; /*0x6c2d1f*/
  else
    v3 = v2 - 1; /*0x6c2d28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c2d20*/
  return 0; /*0x6c2d25*/
}



// ==== 0x006C2D40  ObjectClass::WinMain_Helper_6C2D40  this=?$TClassFactory@VBulletTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2D40(ObjectClass *this)
{
  this->? = 0; /*0x6c2d42*/
  this->AbstractClass = &TClassFactory<BulletTypeClass>::`vftable'; /*0x6c2d49*/
  return &this->AbstractClass; /*0x6c2d4f*/
}



// ==== 0x006C2D50  _TClassFactory_VBulletTypeClass::CreateTClassFactory_BulletTypeClass  this=?$TClassFactory@VBulletTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_BulletTypeClass(_TClassFactory_VBulletTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2d57*/
    return -2147467261; /*0x6c2d59*/
  *v4 = 0; /*0x6c2d76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2d92*/
    *v4 = a2; /*0x6c2d96*/
  if ( !*v4 ) /*0x6c2d98*/
    return -2147467262; /*0x6c2da0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c2dac*/
  return 0; /*0x6c2d5e*/
}



// ==== 0x006C2DC0  _TClassFactory_VBulletTypeClass::AddRef  this=?$TClassFactory@VBulletTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_BulletTypeClass::AddRef(_TClassFactory_VBulletTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2dce*/
}



// ==== 0x006C2DE0  _TClassFactory_VBulletTypeClass::GetClassName  this=?$TClassFactory@VBulletTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_BulletTypeClass::GetClassName(_TClassFactory_VBulletTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2df0*/
  if ( !v1 ) /*0x6c2df4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2df7*/
  return v1; /*0x6c2e01*/
}



// ==== 0x006C2E10  _TClassFactory_VBulletTypeClass::GetClassIdentifier  this=?$TClassFactory@VBulletTypeClass@@  sig=csp ====
int __thiscall TClassFactory_BulletTypeClass::GetClassIdentifier(
        _TClassFactory_VBulletTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  BulletTypeClass *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2e18*/
    return -2147024809; /*0x6c2e1b*/
  *v9 = 0; /*0x6c2e28*/
  if ( a3 ) /*0x6c2e30*/
    return -2147221232; /*0x6c2e33*/
  v5 = (BulletTypeClass *)__2_YAPAXI_Z(0x2F8u); /*0x6c2e41*/
  if ( !v5 ) /*0x6c2e4b*/
    return -2147024882; /*0x6c2e4b*/
  v6 = BulletTypeClass::Construct(v5, 0); /*0x6c2e51*/
  v7 = v6; /*0x6c2e56*/
  if ( !v6 ) /*0x6c2e5a*/
    return -2147024882; /*0x6c2e5d*/
  v8 = (**(int (__stdcall ***)(_BYTE *, _DWORD *, _DWORD *))v6)(v6, a4, v9); /*0x6c2e71*/
  if ( v8 < 0 ) /*0x6c2e75*/
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v7 + 32))(v7, 1); /*0x6c2e7d*/
  return v8; /*0x6c2e1a*/
}



// ==== 0x006C2E90  _TClassFactory_VBulletTypeClass::GetSize  this=?$TClassFactory@VBulletTypeClass@@  sig=csp ====
int __thiscall TClassFactory_BulletTypeClass::GetSize(_TClassFactory_VBulletTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c2e9a*/
  if ( v5 ) /*0x6c2e9d*/
    v3 = v2 + 1; /*0x6c2e9f*/
  else
    v3 = v2 - 1; /*0x6c2ea8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c2ea0*/
  return 0; /*0x6c2ea5*/
}



// ==== 0x006C2EC0  ObjectClass::WinMain_Helper_6C2EC0  this=?$TClassFactory@VIsometricTileTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2EC0(ObjectClass *this)
{
  this->? = 0; /*0x6c2ec2*/
  this->AbstractClass = &TClassFactory<IsometricTileTypeClass>::`vftable'; /*0x6c2ec9*/
  return &this->AbstractClass; /*0x6c2ecf*/
}



// ==== 0x006C2ED0  _TClassFactory_VIsometricTileTypeClass::CreateTClassFactory_IsometricTileTypeClass  this=?$TClassFactory@VIsometricTileTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_IsometricTileTypeClass(
        _TClassFactory_VIsometricTileTypeClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2ed7*/
    return -2147467261; /*0x6c2ed9*/
  *v4 = 0; /*0x6c2ef6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2f12*/
    *v4 = a2; /*0x6c2f16*/
  if ( !*v4 ) /*0x6c2f18*/
    return -2147467262; /*0x6c2f20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c2f2c*/
  return 0; /*0x6c2ede*/
}



// ==== 0x006C2F40  _TClassFactory_VIsometricTileTypeClass::AddRef  this=?$TClassFactory@VIsometricTileTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_IsometricTileTypeClass::AddRef(_TClassFactory_VIsometricTileTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2f4e*/
}



// ==== 0x006C2F60  _TClassFactory_VIsometricTileTypeClass::GetClassName  this=?$TClassFactory@VIsometricTileTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_IsometricTileTypeClass::GetClassName(_TClassFactory_VIsometricTileTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2f70*/
  if ( !v1 ) /*0x6c2f74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2f77*/
  return v1; /*0x6c2f81*/
}



// ==== 0x006C2F90  _TClassFactory_VIsometricTileTypeClass::GetClassIdentifier  this=?$TClassFactory@VIsometricTileTypeClass@@  sig=csp ====
int __thiscall TClassFactory_IsometricTileTypeClass::GetClassIdentifier(
        _TClassFactory_VIsometricTileTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  TerrainTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2f98*/
    return -2147024809; /*0x6c2f9b*/
  *v9 = 0; /*0x6c2fa8*/
  if ( a3 ) /*0x6c2fb0*/
    return -2147221232; /*0x6c2fb3*/
  v5 = (TerrainTypeClass *)__2_YAPAXI_Z(0x30Cu); /*0x6c2fc1*/
  if ( !v5 ) /*0x6c2fcb*/
    return -2147024882; /*0x6c2fcb*/
  v6 = TerrainTypeClass::Construct(v5, 0, 0, 0, 0, 0); /*0x6c2fd9*/
  v7 = v6; /*0x6c2fde*/
  if ( !v6 ) /*0x6c2fe2*/
    return -2147024882; /*0x6c2fe5*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c2ff9*/
  if ( v8 < 0 ) /*0x6c2ffd*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c3005*/
  return v8; /*0x6c2f9a*/
}



// ==== 0x006C3010  _TClassFactory_VIsometricTileTypeClass::GetSize  this=?$TClassFactory@VIsometricTileTypeClass@@  sig=csp ====
int __thiscall TClassFactory_IsometricTileTypeClass::GetSize(_TClassFactory_VIsometricTileTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c301a*/
  if ( v5 ) /*0x6c301d*/
    v3 = v2 + 1; /*0x6c301f*/
  else
    v3 = v2 - 1; /*0x6c3028*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c3020*/
  return 0; /*0x6c3025*/
}



// ==== 0x006C3040  ObjectClass::WinMain_Helper_6C3040  this=?$TClassFactory@VOverlayTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3040(ObjectClass *this)
{
  this->? = 0; /*0x6c3042*/
  this->AbstractClass = &TClassFactory<OverlayTypeClass>::`vftable'; /*0x6c3049*/
  return &this->AbstractClass; /*0x6c304f*/
}



// ==== 0x006C3050  _TClassFactory_VOverlayTypeClass::CreateTClassFactory_OverlayTypeClass  this=?$TClassFactory@VOverlayTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_OverlayTypeClass(_TClassFactory_VOverlayTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3057*/
    return -2147467261; /*0x6c3059*/
  *v4 = 0; /*0x6c3076*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3092*/
    *v4 = a2; /*0x6c3096*/
  if ( !*v4 ) /*0x6c3098*/
    return -2147467262; /*0x6c30a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c30ac*/
  return 0; /*0x6c305e*/
}



// ==== 0x006C30C0  _TClassFactory_VOverlayTypeClass::AddRef  this=?$TClassFactory@VOverlayTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_OverlayTypeClass::AddRef(_TClassFactory_VOverlayTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c30ce*/
}



// ==== 0x006C30E0  _TClassFactory_VOverlayTypeClass::GetClassName  this=?$TClassFactory@VOverlayTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_OverlayTypeClass::GetClassName(_TClassFactory_VOverlayTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c30f0*/
  if ( !v1 ) /*0x6c30f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c30f7*/
  return v1; /*0x6c3101*/
}



// ==== 0x006C3110  _TClassFactory_VOverlayTypeClass::GetClassIdentifier  this=?$TClassFactory@VOverlayTypeClass@@  sig=csp ====
int __thiscall TClassFactory_OverlayTypeClass::GetClassIdentifier(
        _TClassFactory_VOverlayTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  OverlayTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3118*/
    return -2147024809; /*0x6c311b*/
  *v9 = 0; /*0x6c3128*/
  if ( a3 ) /*0x6c3130*/
    return -2147221232; /*0x6c3133*/
  v5 = (OverlayTypeClass *)__2_YAPAXI_Z(0x2BCu); /*0x6c3141*/
  if ( !v5 ) /*0x6c314b*/
    return -2147024882; /*0x6c314b*/
  v6 = OverlayTypeClass::OverlayTypeClass(v5, 0); /*0x6c3151*/
  v7 = v6; /*0x6c3156*/
  if ( !v6 ) /*0x6c315a*/
    return -2147024882; /*0x6c315d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c3171*/
  if ( v8 < 0 ) /*0x6c3175*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c317d*/
  return v8; /*0x6c311a*/
}



// ==== 0x006C3190  _TClassFactory_VOverlayTypeClass::GetSize  this=?$TClassFactory@VOverlayTypeClass@@  sig=csp ====
int __thiscall TClassFactory_OverlayTypeClass::GetSize(_TClassFactory_VOverlayTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c319a*/
  if ( v5 ) /*0x6c319d*/
    v3 = v2 + 1; /*0x6c319f*/
  else
    v3 = v2 - 1; /*0x6c31a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c31a0*/
  return 0; /*0x6c31a5*/
}



// ==== 0x006C31C0  ObjectClass::WinMain_Helper_6C31C0  this=?$TClassFactory@VSmudgeTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C31C0(ObjectClass *this)
{
  this->? = 0; /*0x6c31c2*/
  this->AbstractClass = &TClassFactory<SmudgeTypeClass>::`vftable'; /*0x6c31c9*/
  return &this->AbstractClass; /*0x6c31cf*/
}



// ==== 0x006C31D0  _TClassFactory_VSmudgeTypeClass::CreateTClassFactory_SmudgeTypeClass  this=?$TClassFactory@VSmudgeTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_SmudgeTypeClass(_TClassFactory_VSmudgeTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c31d7*/
    return -2147467261; /*0x6c31d9*/
  *v4 = 0; /*0x6c31f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3212*/
    *v4 = a2; /*0x6c3216*/
  if ( !*v4 ) /*0x6c3218*/
    return -2147467262; /*0x6c3220*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c322c*/
  return 0; /*0x6c31de*/
}



// ==== 0x006C3240  _TClassFactory_VSmudgeTypeClass::AddRef  this=?$TClassFactory@VSmudgeTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_SmudgeTypeClass::AddRef(_TClassFactory_VSmudgeTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c324e*/
}



// ==== 0x006C3260  _TClassFactory_VSmudgeTypeClass::GetClassName  this=?$TClassFactory@VSmudgeTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_SmudgeTypeClass::GetClassName(_TClassFactory_VSmudgeTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3270*/
  if ( !v1 ) /*0x6c3274*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3277*/
  return v1; /*0x6c3281*/
}



// ==== 0x006C3290  _TClassFactory_VSmudgeTypeClass::GetClassIdentifier  this=?$TClassFactory@VSmudgeTypeClass@@  sig=csp ====
int __thiscall TClassFactory_SmudgeTypeClass::GetClassIdentifier(
        _TClassFactory_VSmudgeTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  char *v5; // eax
  char *v6; // eax
  char *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3298*/
    return -2147024809; /*0x6c329b*/
  *v9 = 0; /*0x6c32a8*/
  if ( a3 ) /*0x6c32b0*/
    return -2147221232; /*0x6c32b3*/
  v5 = (char *)__2_YAPAXI_Z(0x2A4u); /*0x6c32c1*/
  if ( !v5 ) /*0x6c32cb*/
    return -2147024882; /*0x6c32cb*/
  v6 = SmudgeTypeClass::SmudgeTypeClass(v5, 0); /*0x6c32d1*/
  v7 = v6; /*0x6c32d6*/
  if ( !v6 ) /*0x6c32da*/
    return -2147024882; /*0x6c32dd*/
  v8 = (**(int (__stdcall ***)(char *, _DWORD *, _DWORD *))v6)(v6, a4, v9); /*0x6c32f1*/
  if ( v8 < 0 ) /*0x6c32f5*/
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v7 + 32))(v7, 1); /*0x6c32fd*/
  return v8; /*0x6c329a*/
}



// ==== 0x006C3310  _TClassFactory_VSmudgeTypeClass::GetSize  this=?$TClassFactory@VSmudgeTypeClass@@  sig=csp ====
int __thiscall TClassFactory_SmudgeTypeClass::GetSize(_TClassFactory_VSmudgeTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c331a*/
  if ( v5 ) /*0x6c331d*/
    v3 = v2 + 1; /*0x6c331f*/
  else
    v3 = v2 - 1; /*0x6c3328*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c3320*/
  return 0; /*0x6c3325*/
}



// ==== 0x006C3340  ObjectClass::WinMain_Helper_6C3340  this=?$TClassFactory@VUnitClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3340(ObjectClass *this)
{
  this->? = 0; /*0x6c3342*/
  this->AbstractClass = &TClassFactory<UnitClass>::`vftable'; /*0x6c3349*/
  return &this->AbstractClass; /*0x6c334f*/
}



// ==== 0x006C3350  _TClassFactory_VUnitClass::CreateTClassFactory_UnitClass  this=?$TClassFactory@VUnitClass@@  sig=csp ====
int __thiscall CreateTClassFactory_UnitClass(_TClassFactory_VUnitClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3357*/
    return -2147467261; /*0x6c3359*/
  *v4 = 0; /*0x6c3376*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3392*/
    *v4 = a2; /*0x6c3396*/
  if ( !*v4 ) /*0x6c3398*/
    return -2147467262; /*0x6c33a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c33ac*/
  return 0; /*0x6c335e*/
}



// ==== 0x006C33C0  _TClassFactory_VUnitClass::AddRef  this=?$TClassFactory@VUnitClass@@  sig=csp ====
LONG __thiscall TClassFactory_UnitClass::AddRef(_TClassFactory_VUnitClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c33ce*/
}



// ==== 0x006C33E0  _TClassFactory_VUnitClass::GetClassName  this=?$TClassFactory@VUnitClass@@  sig=csp ====
LONG __thiscall TClassFactory_UnitClass::GetClassName(_TClassFactory_VUnitClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c33f0*/
  if ( !v1 ) /*0x6c33f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c33f7*/
  return v1; /*0x6c3401*/
}



// ==== 0x006C3410  _TClassFactory_VUnitClass::ddtor  this=?$TClassFactory@VUnitClass@@  sig=csp ====
int __thiscall TClassFactory_UnitClass::ddtor(_TClassFactory_VUnitClass *this, int a2, int a3, _DWORD *a4)
{
  int *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3418*/
    return -2147024809; /*0x6c341b*/
  *v9 = 0; /*0x6c3428*/
  if ( a3 ) /*0x6c3430*/
    return -2147221232; /*0x6c3433*/
  v5 = (int *)__2_YAPAXI_Z(0x8E8u); /*0x6c3441*/
  if ( !v5 ) /*0x6c344b*/
    return -2147024882; /*0x6c344b*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))UnitClass::Construct(v5, 0, 0); /*0x6c3453*/
  v7 = v6; /*0x6c3458*/
  if ( !v6 ) /*0x6c345c*/
    return -2147024882; /*0x6c345f*/
  v8 = (**v6)(v6, a4, v9); /*0x6c3473*/
  if ( v8 < 0 ) /*0x6c3477*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c347f*/
  return v8; /*0x6c341a*/
}



// ==== 0x006C3490  _TClassFactory_VUnitClass::GetSize  this=?$TClassFactory@VUnitClass@@  sig=csp ====
int __thiscall TClassFactory_UnitClass::GetSize(_TClassFactory_VUnitClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c349a*/
  if ( v5 ) /*0x6c349d*/
    v3 = v2 + 1; /*0x6c349f*/
  else
    v3 = v2 - 1; /*0x6c34a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c34a0*/
  return 0; /*0x6c34a5*/
}



// ==== 0x006C34C0  ObjectClass::WinMain_Helper_6C34C0  this=?$TClassFactory@VBuildingClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C34C0(ObjectClass *this)
{
  this->? = 0; /*0x6c34c2*/
  this->AbstractClass = &TClassFactory<BuildingClass>::`vftable'; /*0x6c34c9*/
  return &this->AbstractClass; /*0x6c34cf*/
}



// ==== 0x006C34D0  _TClassFactory_VBuildingClass::CreateTClassFactory_BuildingClass  this=?$TClassFactory@VBuildingClass@@  sig=csp ====
int __thiscall CreateTClassFactory_BuildingClass(_TClassFactory_VBuildingClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c34d7*/
    return -2147467261; /*0x6c34d9*/
  *v4 = 0; /*0x6c34f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3512*/
    *v4 = a2; /*0x6c3516*/
  if ( !*v4 ) /*0x6c3518*/
    return -2147467262; /*0x6c3520*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c352c*/
  return 0; /*0x6c34de*/
}



// ==== 0x006C3540  _TClassFactory_VBuildingClass::AddRef  this=?$TClassFactory@VBuildingClass@@  sig=csp ====
LONG __thiscall TClassFactory_BuildingClass::AddRef(_TClassFactory_VBuildingClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c354e*/
}



// ==== 0x006C3560  _TClassFactory_VBuildingClass::GetClassName  this=?$TClassFactory@VBuildingClass@@  sig=csp ====
LONG __thiscall TClassFactory_BuildingClass::GetClassName(_TClassFactory_VBuildingClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3570*/
  if ( !v1 ) /*0x6c3574*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3577*/
  return v1; /*0x6c3581*/
}



// ==== 0x006C3590  _TClassFactory_VBuildingClass::ddtor  this=?$TClassFactory@VBuildingClass@@  sig=csp ====
int __thiscall TClassFactory_BuildingClass::ddtor(_TClassFactory_VBuildingClass *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3598*/
    return -2147024809; /*0x6c359b*/
  *v9 = 0; /*0x6c35a8*/
  if ( a3 ) /*0x6c35b0*/
    return -2147221232; /*0x6c35b3*/
  v5 = __2_YAPAXI_Z(0x720u); /*0x6c35c1*/
  if ( !v5 ) /*0x6c35cb*/
    return -2147024882; /*0x6c35cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))BuildingClass::Construct(v5, 0, 0); /*0x6c35d3*/
  v7 = v6; /*0x6c35d8*/
  if ( !v6 ) /*0x6c35dc*/
    return -2147024882; /*0x6c35df*/
  v8 = (**v6)(v6, a4, v9); /*0x6c35f3*/
  if ( v8 < 0 ) /*0x6c35f7*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c35ff*/
  return v8; /*0x6c359a*/
}



// ==== 0x006C3610  _TClassFactory_VBuildingClass::GetSize  this=?$TClassFactory@VBuildingClass@@  sig=csp ====
int __thiscall TClassFactory_BuildingClass::GetSize(_TClassFactory_VBuildingClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c361a*/
  if ( v5 ) /*0x6c361d*/
    v3 = v2 + 1; /*0x6c361f*/
  else
    v3 = v2 - 1; /*0x6c3628*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c3620*/
  return 0; /*0x6c3625*/
}



// ==== 0x006C3640  ObjectClass::WinMain_Helper_6C3640  this=?$TClassFactory@VAircraftClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3640(ObjectClass *this)
{
  this->? = 0; /*0x6c3642*/
  this->AbstractClass = &TClassFactory<AircraftClass>::`vftable'; /*0x6c3649*/
  return &this->AbstractClass; /*0x6c364f*/
}



// ==== 0x006C3650  _TClassFactory_VAircraftClass::CreateTClassFactory_AircraftClass  this=?$TClassFactory@VAircraftClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AircraftClass(_TClassFactory_VAircraftClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3657*/
    return -2147467261; /*0x6c3659*/
  *v4 = 0; /*0x6c3676*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3692*/
    *v4 = a2; /*0x6c3696*/
  if ( !*v4 ) /*0x6c3698*/
    return -2147467262; /*0x6c36a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c36ac*/
  return 0; /*0x6c365e*/
}



// ==== 0x006C36C0  _TClassFactory_VAircraftClass::AddRef  this=?$TClassFactory@VAircraftClass@@  sig=csp ====
LONG __thiscall TClassFactory_AircraftClass::AddRef(_TClassFactory_VAircraftClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c36ce*/
}



// ==== 0x006C36E0  _TClassFactory_VAircraftClass::GetClassName  this=?$TClassFactory@VAircraftClass@@  sig=csp ====
LONG __thiscall TClassFactory_AircraftClass::GetClassName(_TClassFactory_VAircraftClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c36f0*/
  if ( !v1 ) /*0x6c36f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c36f7*/
  return v1; /*0x6c3701*/
}



// ==== 0x006C3710  _TClassFactory_VAircraftClass::ddtor  this=?$TClassFactory@VAircraftClass@@  sig=csp ====
int __thiscall TClassFactory_AircraftClass::ddtor(_TClassFactory_VAircraftClass *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3718*/
    return -2147024809; /*0x6c371b*/
  *v9 = 0; /*0x6c3728*/
  if ( a3 ) /*0x6c3730*/
    return -2147221232; /*0x6c3733*/
  v5 = __2_YAPAXI_Z(0x6D8u); /*0x6c3741*/
  if ( !v5 ) /*0x6c374b*/
    return -2147024882; /*0x6c374b*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))AircraftClass::Construct(v5, (int)v9, 0, 0); /*0x6c3753*/
  v7 = v6; /*0x6c3758*/
  if ( !v6 ) /*0x6c375c*/
    return -2147024882; /*0x6c375f*/
  v8 = (**v6)(v6, a4, v9); /*0x6c3773*/
  if ( v8 < 0 ) /*0x6c3777*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c377f*/
  return v8; /*0x6c371a*/
}



// ==== 0x006C3790  _TClassFactory_VAircraftClass::GetSize  this=?$TClassFactory@VAircraftClass@@  sig=csp ====
int __thiscall TClassFactory_AircraftClass::GetSize(_TClassFactory_VAircraftClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c379a*/
  if ( v5 ) /*0x6c379d*/
    v3 = v2 + 1; /*0x6c379f*/
  else
    v3 = v2 - 1; /*0x6c37a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c37a0*/
  return 0; /*0x6c37a5*/
}



// ==== 0x006C37C0  ObjectClass::WinMain_Helper_6C37C0  this=?$TClassFactory@VInfantryClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C37C0(ObjectClass *this)
{
  this->? = 0; /*0x6c37c2*/
  this->AbstractClass = &TClassFactory<InfantryClass>::`vftable'; /*0x6c37c9*/
  return &this->AbstractClass; /*0x6c37cf*/
}



// ==== 0x006C37D0  _TClassFactory_VInfantryClass::CreateTClassFactory_InfantryClass  this=?$TClassFactory@VInfantryClass@@  sig=csp ====
int __thiscall CreateTClassFactory_InfantryClass(_TClassFactory_VInfantryClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c37d7*/
    return -2147467261; /*0x6c37d9*/
  *v4 = 0; /*0x6c37f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3812*/
    *v4 = a2; /*0x6c3816*/
  if ( !*v4 ) /*0x6c3818*/
    return -2147467262; /*0x6c3820*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c382c*/
  return 0; /*0x6c37de*/
}



// ==== 0x006C3840  _TClassFactory_VInfantryClass::AddRef  this=?$TClassFactory@VInfantryClass@@  sig=csp ====
LONG __thiscall TClassFactory_InfantryClass::AddRef(_TClassFactory_VInfantryClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c384e*/
}



// ==== 0x006C3860  _TClassFactory_VInfantryClass::GetClassName  this=?$TClassFactory@VInfantryClass@@  sig=csp ====
LONG __thiscall TClassFactory_InfantryClass::GetClassName(_TClassFactory_VInfantryClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3870*/
  if ( !v1 ) /*0x6c3874*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3877*/
  return v1; /*0x6c3881*/
}



// ==== 0x006C3890  _TClassFactory_VInfantryClass::ddtor  this=?$TClassFactory@VInfantryClass@@  sig=csp ====
int __thiscall TClassFactory_InfantryClass::ddtor(_TClassFactory_VInfantryClass *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3898*/
    return -2147024809; /*0x6c389b*/
  *v9 = 0; /*0x6c38a8*/
  if ( a3 ) /*0x6c38b0*/
    return -2147221232; /*0x6c38b3*/
  v5 = __2_YAPAXI_Z(0x6F0u); /*0x6c38c1*/
  if ( !v5 ) /*0x6c38cb*/
    return -2147024882; /*0x6c38cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))InfantryClass::Construct(v5, (int)v9, 0, 0); /*0x6c38d3*/
  v7 = v6; /*0x6c38d8*/
  if ( !v6 ) /*0x6c38dc*/
    return -2147024882; /*0x6c38df*/
  v8 = (**v6)(v6, a4, v9); /*0x6c38f3*/
  if ( v8 < 0 ) /*0x6c38f7*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c38ff*/
  return v8; /*0x6c389a*/
}



// ==== 0x006C3910  _TClassFactory_VInfantryClass::GetSize  this=?$TClassFactory@VInfantryClass@@  sig=csp ====
int __thiscall TClassFactory_InfantryClass::GetSize(_TClassFactory_VInfantryClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c391a*/
  if ( v5 ) /*0x6c391d*/
    v3 = v2 + 1; /*0x6c391f*/
  else
    v3 = v2 - 1; /*0x6c3928*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c3920*/
  return 0; /*0x6c3925*/
}



// ==== 0x006C3940  ObjectClass::WinMain_Helper_6C3940  this=?$TClassFactory@VAnimClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3940(ObjectClass *this)
{
  this->? = 0; /*0x6c3942*/
  this->AbstractClass = &TClassFactory<AnimClass>::`vftable'; /*0x6c3949*/
  return &this->AbstractClass; /*0x6c394f*/
}



// ==== 0x006C3950  _TClassFactory_VAnimClass::CreateTClassFactory_AnimClass  this=?$TClassFactory@VAnimClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AnimClass(_TClassFactory_VAnimClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3957*/
    return -2147467261; /*0x6c3959*/
  *v4 = 0; /*0x6c3976*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3992*/
    *v4 = a2; /*0x6c3996*/
  if ( !*v4 ) /*0x6c3998*/
    return -2147467262; /*0x6c39a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c39ac*/
  return 0; /*0x6c395e*/
}



// ==== 0x006C39C0  _TClassFactory_VAnimClass::AddRef  this=?$TClassFactory@VAnimClass@@  sig=csp ====
LONG __thiscall TClassFactory_AnimClass::AddRef(_TClassFactory_VAnimClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c39ce*/
}



// ==== 0x006C39E0  _TClassFactory_VAnimClass::GetClassName  this=?$TClassFactory@VAnimClass@@  sig=csp ====
LONG __thiscall TClassFactory_AnimClass::GetClassName(_TClassFactory_VAnimClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c39f0*/
  if ( !v1 ) /*0x6c39f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c39f7*/
  return v1; /*0x6c3a01*/
}



// ==== 0x006C3A10  _TClassFactory_VAnimClass::ddtor  this=?$TClassFactory@VAnimClass@@  sig=csp ====
int __thiscall TClassFactory_AnimClass::ddtor(_TClassFactory_VAnimClass *this, int a2, int a3, _DWORD *a4)
{
  AnimClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3a18*/
    return -2147024809; /*0x6c3a1b*/
  *v9 = 0; /*0x6c3a28*/
  if ( a3 ) /*0x6c3a30*/
    return -2147221232; /*0x6c3a33*/
  v5 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6c3a41*/
  if ( !v5 ) /*0x6c3a4b*/
    return -2147024882; /*0x6c3a4b*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))AnimClass::SimpleCtor(v5); /*0x6c3a4f*/
  v7 = v6; /*0x6c3a54*/
  if ( !v6 ) /*0x6c3a58*/
    return -2147024882; /*0x6c3a5b*/
  v8 = (**v6)(v6, a4, v9); /*0x6c3a6f*/
  if ( v8 < 0 ) /*0x6c3a73*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c3a7b*/
  return v8; /*0x6c3a1a*/
}



// ==== 0x006C3A90  _TClassFactory_VAnimClass::GetSize  this=?$TClassFactory@VAnimClass@@  sig=csp ====
int __thiscall TClassFactory_AnimClass::GetSize(_TClassFactory_VAnimClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c3a9a*/
  if ( v5 ) /*0x6c3a9d*/
    v3 = v2 + 1; /*0x6c3a9f*/
  else
    v3 = v2 - 1; /*0x6c3aa8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c3aa0*/
  return 0; /*0x6c3aa5*/
}



// ==== 0x006C3AC0  ObjectClass::WinMain_Helper_6C3AC0  this=?$TClassFactory@VAnimTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3AC0(ObjectClass *this)
{
  this->? = 0; /*0x6c3ac2*/
  this->AbstractClass = &TClassFactory<AnimTypeClass>::`vftable'; /*0x6c3ac9*/
  return &this->AbstractClass; /*0x6c3acf*/
}



// ==== 0x006C3AD0  _TClassFactory_VAnimTypeClass::CreateTClassFactory_AnimTypeClass  this=?$TClassFactory@VAnimTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AnimTypeClass(_TClassFactory_VAnimTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3ad7*/
    return -2147467261; /*0x6c3ad9*/
  *v4 = 0; /*0x6c3af6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3b12*/
    *v4 = a2; /*0x6c3b16*/
  if ( !*v4 ) /*0x6c3b18*/
    return -2147467262; /*0x6c3b20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c3b2c*/
  return 0; /*0x6c3ade*/
}



// ==== 0x006C3B40  _TClassFactory_VAnimTypeClass::AddRef  this=?$TClassFactory@VAnimTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AnimTypeClass::AddRef(_TClassFactory_VAnimTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3b4e*/
}



// ==== 0x006C3B60  _TClassFactory_VAnimTypeClass::GetClassName  this=?$TClassFactory@VAnimTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AnimTypeClass::GetClassName(_TClassFactory_VAnimTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3b70*/
  if ( !v1 ) /*0x6c3b74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3b77*/
  return v1; /*0x6c3b81*/
}



// ==== 0x006C3B90  _TClassFactory_VAnimTypeClass::GetClassIdentifier  this=?$TClassFactory@VAnimTypeClass@@  sig=csp ====
int __thiscall TClassFactory_AnimTypeClass::GetClassIdentifier(
        _TClassFactory_VAnimTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  AnimTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3b98*/
    return -2147024809; /*0x6c3b9b*/
  *v9 = 0; /*0x6c3ba8*/
  if ( a3 ) /*0x6c3bb0*/
    return -2147221232; /*0x6c3bb3*/
  v5 = (AnimTypeClass *)__2_YAPAXI_Z(0x378u); /*0x6c3bc1*/
  if ( !v5 ) /*0x6c3bcb*/
    return -2147024882; /*0x6c3bcb*/
  v6 = AnimTypeClass::Construct(v5, 0); /*0x6c3bd1*/
  v7 = v6; /*0x6c3bd6*/
  if ( !v6 ) /*0x6c3bda*/
    return -2147024882; /*0x6c3bdd*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c3bf1*/
  if ( v8 < 0 ) /*0x6c3bf5*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c3bfd*/
  return v8; /*0x6c3b9a*/
}



// ==== 0x006C3C10  _TClassFactory_VAnimTypeClass::GetSize  this=?$TClassFactory@VAnimTypeClass@@  sig=csp ====
int __thiscall TClassFactory_AnimTypeClass::GetSize(_TClassFactory_VAnimTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c3c1a*/
  if ( v5 ) /*0x6c3c1d*/
    v3 = v2 + 1; /*0x6c3c1f*/
  else
    v3 = v2 - 1; /*0x6c3c28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c3c20*/
  return 0; /*0x6c3c25*/
}



// ==== 0x006C3C40  ObjectClass::WinMain_Helper_6C3C40  this=?$TClassFactory@VHouseTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3C40(ObjectClass *this)
{
  this->? = 0; /*0x6c3c42*/
  this->AbstractClass = &TClassFactory<HouseTypeClass>::`vftable'; /*0x6c3c49*/
  return &this->AbstractClass; /*0x6c3c4f*/
}



// ==== 0x006C3C50  _TClassFactory_VHouseTypeClass::CreateTClassFactory_HouseTypeClass  this=?$TClassFactory@VHouseTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_HouseTypeClass(_TClassFactory_VHouseTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3c57*/
    return -2147467261; /*0x6c3c59*/
  *v4 = 0; /*0x6c3c76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3c92*/
    *v4 = a2; /*0x6c3c96*/
  if ( !*v4 ) /*0x6c3c98*/
    return -2147467262; /*0x6c3ca0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c3cac*/
  return 0; /*0x6c3c5e*/
}



// ==== 0x006C3CC0  _TClassFactory_VHouseTypeClass::AddRef  this=?$TClassFactory@VHouseTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_HouseTypeClass::AddRef(_TClassFactory_VHouseTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3cce*/
}



// ==== 0x006C3CE0  _TClassFactory_VHouseTypeClass::GetClassName  this=?$TClassFactory@VHouseTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_HouseTypeClass::GetClassName(_TClassFactory_VHouseTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3cf0*/
  if ( !v1 ) /*0x6c3cf4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3cf7*/
  return v1; /*0x6c3d01*/
}



// ==== 0x006C3D10  _TClassFactory_VHouseTypeClass::GetClassIdentifier  this=?$TClassFactory@VHouseTypeClass@@  sig=csp ====
int __thiscall TClassFactory_HouseTypeClass::GetClassIdentifier(
        _TClassFactory_VHouseTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  SuperWeaponTypeClass *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3d18*/
    return -2147024809; /*0x6c3d1b*/
  *v9 = 0; /*0x6c3d28*/
  if ( a3 ) /*0x6c3d30*/
    return -2147221232; /*0x6c3d33*/
  v5 = (SuperWeaponTypeClass *)__2_YAPAXI_Z(0x1B0u); /*0x6c3d41*/
  if ( !v5 ) /*0x6c3d4b*/
    return -2147024882; /*0x6c3d4b*/
  v6 = SuperWeaponTypeClass::Construct(v5, 0); /*0x6c3d51*/
  v7 = v6; /*0x6c3d56*/
  if ( !v6 ) /*0x6c3d5a*/
    return -2147024882; /*0x6c3d5d*/
  v8 = (**(int (__stdcall ***)(_BYTE *, _DWORD *, _DWORD *))v6)(v6, a4, v9); /*0x6c3d71*/
  if ( v8 < 0 ) /*0x6c3d75*/
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v7 + 32))(v7, 1); /*0x6c3d7d*/
  return v8; /*0x6c3d1a*/
}



// ==== 0x006C3D90  _TClassFactory_VHouseTypeClass::GetSize  this=?$TClassFactory@VHouseTypeClass@@  sig=csp ====
int __thiscall TClassFactory_HouseTypeClass::GetSize(_TClassFactory_VHouseTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c3d9a*/
  if ( v5 ) /*0x6c3d9d*/
    v3 = v2 + 1; /*0x6c3d9f*/
  else
    v3 = v2 - 1; /*0x6c3da8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c3da0*/
  return 0; /*0x6c3da5*/
}



// ==== 0x006C3DC0  ObjectClass::WinMain_Helper_6C3DC0  this=?$TClassFactory@VHouseClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3DC0(ObjectClass *this)
{
  this->? = 0; /*0x6c3dc2*/
  this->AbstractClass = &TClassFactory<HouseClass>::`vftable'; /*0x6c3dc9*/
  return &this->AbstractClass; /*0x6c3dcf*/
}



// ==== 0x006C3DD0  _TClassFactory_VHouseClass::CreateTClassFactory_HouseClass  this=?$TClassFactory@VHouseClass@@  sig=csp ====
int __thiscall CreateTClassFactory_HouseClass(_TClassFactory_VHouseClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3dd7*/
    return -2147467261; /*0x6c3dd9*/
  *v4 = 0; /*0x6c3df6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3e12*/
    *v4 = a2; /*0x6c3e16*/
  if ( !*v4 ) /*0x6c3e18*/
    return -2147467262; /*0x6c3e20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c3e2c*/
  return 0; /*0x6c3dde*/
}



// ==== 0x006C3E40  _TClassFactory_VHouseClass::AddRef  this=?$TClassFactory@VHouseClass@@  sig=csp ====
LONG __thiscall TClassFactory_HouseClass::AddRef(_TClassFactory_VHouseClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3e4e*/
}



// ==== 0x006C3E60  _TClassFactory_VHouseClass::GetClassName  this=?$TClassFactory@VHouseClass@@  sig=csp ====
LONG __thiscall TClassFactory_HouseClass::GetClassName(_TClassFactory_VHouseClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3e70*/
  if ( !v1 ) /*0x6c3e74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3e77*/
  return v1; /*0x6c3e81*/
}



// ==== 0x006C3E90  _TClassFactory_VHouseClass::ddtor  this=?$TClassFactory@VHouseClass@@  sig=csp ====
int __thiscall TClassFactory_HouseClass::ddtor(_TClassFactory_VHouseClass *this, int a2, int a3, _DWORD *a4)
{
  int *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3e98*/
    return -2147024809; /*0x6c3e9b*/
  *v9 = 0; /*0x6c3ea8*/
  if ( a3 ) /*0x6c3eb0*/
    return -2147221232; /*0x6c3eb3*/
  v5 = (int *)__2_YAPAXI_Z(0x160B8u); /*0x6c3ec1*/
  if ( !v5 ) /*0x6c3ecb*/
    return -2147024882; /*0x6c3ecb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))HouseClass::Construct(v5, 0); /*0x6c3ed1*/
  v7 = v6; /*0x6c3ed6*/
  if ( !v6 ) /*0x6c3eda*/
    return -2147024882; /*0x6c3edd*/
  v8 = (**v6)(v6, a4, v9); /*0x6c3ef1*/
  if ( v8 < 0 ) /*0x6c3ef5*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c3efd*/
  return v8; /*0x6c3e9a*/
}



// ==== 0x006C3F10  _TClassFactory_VHouseClass::GetSize  this=?$TClassFactory@VHouseClass@@  sig=csp ====
int __thiscall TClassFactory_HouseClass::GetSize(_TClassFactory_VHouseClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c3f1a*/
  if ( v5 ) /*0x6c3f1d*/
    v3 = v2 + 1; /*0x6c3f1f*/
  else
    v3 = v2 - 1; /*0x6c3f28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c3f20*/
  return 0; /*0x6c3f25*/
}



// ==== 0x006C3F40  ObjectClass::WinMain_Helper_6C3F40  this=?$TClassFactory@VDriveLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3F40(ObjectClass *this)
{
  this->? = 0; /*0x6c3f42*/
  this->AbstractClass = &TClassFactory<DriveLocomotionClass>::`vftable'; /*0x6c3f49*/
  return &this->AbstractClass; /*0x6c3f4f*/
}



// ==== 0x006C3F50  _TClassFactory_VDriveLocomotionClass::CreateTClassFactory_DriveLocomotionClass  this=?$TClassFactory@VDriveLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_DriveLocomotionClass(
        _TClassFactory_VDriveLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3f57*/
    return -2147467261; /*0x6c3f59*/
  *v4 = 0; /*0x6c3f76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3f92*/
    *v4 = a2; /*0x6c3f96*/
  if ( !*v4 ) /*0x6c3f98*/
    return -2147467262; /*0x6c3fa0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c3fac*/
  return 0; /*0x6c3f5e*/
}



// ==== 0x006C3FC0  _TClassFactory_VDriveLocomotionClass::AddRef  this=?$TClassFactory@VDriveLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_DriveLocomotionClass::AddRef(_TClassFactory_VDriveLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3fce*/
}



// ==== 0x006C3FE0  _TClassFactory_VDriveLocomotionClass::GetClassName  this=?$TClassFactory@VDriveLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_DriveLocomotionClass::GetClassName(_TClassFactory_VDriveLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3ff0*/
  if ( !v1 ) /*0x6c3ff4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3ff7*/
  return v1; /*0x6c4001*/
}



// ==== 0x006C4010  _TClassFactory_VDriveLocomotionClass::ddtor  this=?$TClassFactory@VDriveLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_DriveLocomotionClass::ddtor(
        _TClassFactory_VDriveLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  LocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4018*/
    return -2147024809; /*0x6c401b*/
  *v9 = 0; /*0x6c4028*/
  if ( a3 ) /*0x6c4030*/
    return -2147221232; /*0x6c4033*/
  v5 = (LocomotionClass *)__2_YAPAXI_Z(0x70u); /*0x6c403e*/
  if ( !v5 ) /*0x6c4048*/
    return -2147024882; /*0x6c4048*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))LocomotionClass::Initialize(v5); /*0x6c404c*/
  v7 = v6; /*0x6c4051*/
  if ( !v6 ) /*0x6c4055*/
    return -2147024882; /*0x6c4058*/
  v8 = (**v6)(v6, a4, v9); /*0x6c406c*/
  if ( v8 < 0 ) /*0x6c4070*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c4078*/
  return v8; /*0x6c401a*/
}



// ==== 0x006C4090  _TClassFactory_VDriveLocomotionClass::GetSize  this=?$TClassFactory@VDriveLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_DriveLocomotionClass::GetSize(_TClassFactory_VDriveLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c409a*/
  if ( v5 ) /*0x6c409d*/
    v3 = v2 + 1; /*0x6c409f*/
  else
    v3 = v2 - 1; /*0x6c40a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c40a0*/
  return 0; /*0x6c40a5*/
}



// ==== 0x006C40C0  ObjectClass::WinMain_Helper_6C40C0  this=?$TClassFactory@VJumpjetLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C40C0(ObjectClass *this)
{
  this->? = 0; /*0x6c40c2*/
  this->AbstractClass = &TClassFactory<JumpjetLocomotionClass>::`vftable'; /*0x6c40c9*/
  return &this->AbstractClass; /*0x6c40cf*/
}



// ==== 0x006C40D0  _TClassFactory_VJumpjetLocomotionClass::CreateTClassFactory_JumpjetLocomotionClass  this=?$TClassFactory@VJumpjetLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_JumpjetLocomotionClass(
        _TClassFactory_VJumpjetLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c40d7*/
    return -2147467261; /*0x6c40d9*/
  *v4 = 0; /*0x6c40f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4112*/
    *v4 = a2; /*0x6c4116*/
  if ( !*v4 ) /*0x6c4118*/
    return -2147467262; /*0x6c4120*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c412c*/
  return 0; /*0x6c40de*/
}



// ==== 0x006C4140  _TClassFactory_VJumpjetLocomotionClass::AddRef  this=?$TClassFactory@VJumpjetLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_JumpjetLocomotionClass::AddRef(_TClassFactory_VJumpjetLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c414e*/
}



// ==== 0x006C4160  _TClassFactory_VJumpjetLocomotionClass::GetClassName  this=?$TClassFactory@VJumpjetLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_JumpjetLocomotionClass::GetClassName(_TClassFactory_VJumpjetLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4170*/
  if ( !v1 ) /*0x6c4174*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4177*/
  return v1; /*0x6c4181*/
}



// ==== 0x006C4190  _TClassFactory_VJumpjetLocomotionClass::ddtor  this=?$TClassFactory@VJumpjetLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_JumpjetLocomotionClass::ddtor(
        _TClassFactory_VJumpjetLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  JumpjetLocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4198*/
    return -2147024809; /*0x6c419b*/
  *v9 = 0; /*0x6c41a8*/
  if ( a3 ) /*0x6c41b0*/
    return -2147221232; /*0x6c41b3*/
  v5 = (JumpjetLocomotionClass *)__2_YAPAXI_Z(0x98u); /*0x6c41c1*/
  if ( !v5 ) /*0x6c41cb*/
    return -2147024882; /*0x6c41cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))LocomotionClass::Update(v5); /*0x6c41cf*/
  v7 = v6; /*0x6c41d4*/
  if ( !v6 ) /*0x6c41d8*/
    return -2147024882; /*0x6c41db*/
  v8 = (**v6)(v6, a4, v9); /*0x6c41ef*/
  if ( v8 < 0 ) /*0x6c41f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c41fb*/
  return v8; /*0x6c419a*/
}



// ==== 0x006C4210  _TClassFactory_VJumpjetLocomotionClass::GetSize  this=?$TClassFactory@VJumpjetLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_JumpjetLocomotionClass::GetSize(_TClassFactory_VJumpjetLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c421a*/
  if ( v5 ) /*0x6c421d*/
    v3 = v2 + 1; /*0x6c421f*/
  else
    v3 = v2 - 1; /*0x6c4228*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c4220*/
  return 0; /*0x6c4225*/
}



// ==== 0x006C4240  ObjectClass::WinMain_Helper_6C4240  this=?$TClassFactory@VHoverLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4240(ObjectClass *this)
{
  this->? = 0; /*0x6c4242*/
  this->AbstractClass = &TClassFactory<HoverLocomotionClass>::`vftable'; /*0x6c4249*/
  return &this->AbstractClass; /*0x6c424f*/
}



// ==== 0x006C4250  _TClassFactory_VHoverLocomotionClass::CreateTClassFactory_HoverLocomotionClass  this=?$TClassFactory@VHoverLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_HoverLocomotionClass(
        _TClassFactory_VHoverLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4257*/
    return -2147467261; /*0x6c4259*/
  *v4 = 0; /*0x6c4276*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4292*/
    *v4 = a2; /*0x6c4296*/
  if ( !*v4 ) /*0x6c4298*/
    return -2147467262; /*0x6c42a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c42ac*/
  return 0; /*0x6c425e*/
}



// ==== 0x006C42C0  _TClassFactory_VHoverLocomotionClass::AddRef  this=?$TClassFactory@VHoverLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_HoverLocomotionClass::AddRef(_TClassFactory_VHoverLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c42ce*/
}



// ==== 0x006C42E0  _TClassFactory_VHoverLocomotionClass::GetClassName  this=?$TClassFactory@VHoverLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_HoverLocomotionClass::GetClassName(_TClassFactory_VHoverLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c42f0*/
  if ( !v1 ) /*0x6c42f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c42f7*/
  return v1; /*0x6c4301*/
}



// ==== 0x006C4310  _TClassFactory_VHoverLocomotionClass::ddtor  this=?$TClassFactory@VHoverLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_HoverLocomotionClass::ddtor(
        _TClassFactory_VHoverLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  LocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4318*/
    return -2147024809; /*0x6c431b*/
  *v9 = 0; /*0x6c4328*/
  if ( a3 ) /*0x6c4330*/
    return -2147221232; /*0x6c4333*/
  v5 = (LocomotionClass *)__2_YAPAXI_Z(0x78u); /*0x6c433e*/
  if ( !v5 ) /*0x6c4348*/
    return -2147024882; /*0x6c4348*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))LocomotionClass::ProcessData(v5); /*0x6c434c*/
  v7 = v6; /*0x6c4351*/
  if ( !v6 ) /*0x6c4355*/
    return -2147024882; /*0x6c4358*/
  v8 = (**v6)(v6, a4, v9); /*0x6c436c*/
  if ( v8 < 0 ) /*0x6c4370*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c4378*/
  return v8; /*0x6c431a*/
}



// ==== 0x006C4390  _TClassFactory_VHoverLocomotionClass::GetSize  this=?$TClassFactory@VHoverLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_HoverLocomotionClass::GetSize(_TClassFactory_VHoverLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c439a*/
  if ( v5 ) /*0x6c439d*/
    v3 = v2 + 1; /*0x6c439f*/
  else
    v3 = v2 - 1; /*0x6c43a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c43a0*/
  return 0; /*0x6c43a5*/
}



// ==== 0x006C43C0  ObjectClass::WinMain_Helper_6C43C0  this=?$TClassFactory@VRocketLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C43C0(ObjectClass *this)
{
  this->? = 0; /*0x6c43c2*/
  this->AbstractClass = &TClassFactory<RocketLocomotionClass>::`vftable'; /*0x6c43c9*/
  return &this->AbstractClass; /*0x6c43cf*/
}



// ==== 0x006C43D0  _TClassFactory_VRocketLocomotionClass::CreateTClassFactory_RocketLocomotionClass  this=?$TClassFactory@VRocketLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_RocketLocomotionClass(
        _TClassFactory_VRocketLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c43d7*/
    return -2147467261; /*0x6c43d9*/
  *v4 = 0; /*0x6c43f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4412*/
    *v4 = a2; /*0x6c4416*/
  if ( !*v4 ) /*0x6c4418*/
    return -2147467262; /*0x6c4420*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c442c*/
  return 0; /*0x6c43de*/
}



// ==== 0x006C4440  _TClassFactory_VRocketLocomotionClass::AddRef  this=?$TClassFactory@VRocketLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_RocketLocomotionClass::AddRef(_TClassFactory_VRocketLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c444e*/
}



// ==== 0x006C4460  _TClassFactory_VRocketLocomotionClass::GetClassName  this=?$TClassFactory@VRocketLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_RocketLocomotionClass::GetClassName(_TClassFactory_VRocketLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4470*/
  if ( !v1 ) /*0x6c4474*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4477*/
  return v1; /*0x6c4481*/
}



// ==== 0x006C4490  _TClassFactory_VRocketLocomotionClass::ddtor  this=?$TClassFactory@VRocketLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_RocketLocomotionClass::ddtor(
        _TClassFactory_VRocketLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  RocketLocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4498*/
    return -2147024809; /*0x6c449b*/
  *v9 = 0; /*0x6c44a8*/
  if ( a3 ) /*0x6c44b0*/
    return -2147221232; /*0x6c44b3*/
  v5 = (RocketLocomotionClass *)__2_YAPAXI_Z(0x60u); /*0x6c44be*/
  if ( !v5 ) /*0x6c44c8*/
    return -2147024882; /*0x6c44c8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))RocketLocomotionClass::RocketLocomotionClass(v5); /*0x6c44cc*/
  v7 = v6; /*0x6c44d1*/
  if ( !v6 ) /*0x6c44d5*/
    return -2147024882; /*0x6c44d8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c44ec*/
  if ( v8 < 0 ) /*0x6c44f0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c44f8*/
  return v8; /*0x6c449a*/
}



// ==== 0x006C4510  _TClassFactory_VRocketLocomotionClass::GetSize  this=?$TClassFactory@VRocketLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_RocketLocomotionClass::GetSize(_TClassFactory_VRocketLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c451a*/
  if ( v5 ) /*0x6c451d*/
    v3 = v2 + 1; /*0x6c451f*/
  else
    v3 = v2 - 1; /*0x6c4528*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c4520*/
  return 0; /*0x6c4525*/
}



// ==== 0x006C4540  ObjectClass::WinMain_Helper_6C4540  this=?$TClassFactory@VTunnelLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4540(ObjectClass *this)
{
  this->? = 0; /*0x6c4542*/
  this->AbstractClass = &TClassFactory<TunnelLocomotionClass>::`vftable'; /*0x6c4549*/
  return &this->AbstractClass; /*0x6c454f*/
}



// ==== 0x006C4550  _TClassFactory_VTunnelLocomotionClass::CreateTClassFactory_TunnelLocomotionClass  this=?$TClassFactory@VTunnelLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TunnelLocomotionClass(
        _TClassFactory_VTunnelLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4557*/
    return -2147467261; /*0x6c4559*/
  *v4 = 0; /*0x6c4576*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4592*/
    *v4 = a2; /*0x6c4596*/
  if ( !*v4 ) /*0x6c4598*/
    return -2147467262; /*0x6c45a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c45ac*/
  return 0; /*0x6c455e*/
}



// ==== 0x006C45C0  _TClassFactory_VTunnelLocomotionClass::AddRef  this=?$TClassFactory@VTunnelLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_TunnelLocomotionClass::AddRef(_TClassFactory_VTunnelLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c45ce*/
}



// ==== 0x006C45E0  _TClassFactory_VTunnelLocomotionClass::GetClassName  this=?$TClassFactory@VTunnelLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_TunnelLocomotionClass::GetClassName(_TClassFactory_VTunnelLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c45f0*/
  if ( !v1 ) /*0x6c45f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c45f7*/
  return v1; /*0x6c4601*/
}



// ==== 0x006C4610  _TClassFactory_VTunnelLocomotionClass::ddtor  this=?$TClassFactory@VTunnelLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_TunnelLocomotionClass::ddtor(
        _TClassFactory_VTunnelLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  TunnelLocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4618*/
    return -2147024809; /*0x6c461b*/
  *v9 = 0; /*0x6c4628*/
  if ( a3 ) /*0x6c4630*/
    return -2147221232; /*0x6c4633*/
  v5 = (TunnelLocomotionClass *)__2_YAPAXI_Z(0x3Cu); /*0x6c463e*/
  if ( !v5 ) /*0x6c4648*/
    return -2147024882; /*0x6c4648*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))SmallFunc_728A00(v5); /*0x6c464c*/
  v7 = v6; /*0x6c4651*/
  if ( !v6 ) /*0x6c4655*/
    return -2147024882; /*0x6c4658*/
  v8 = (**v6)(v6, a4, v9); /*0x6c466c*/
  if ( v8 < 0 ) /*0x6c4670*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c4678*/
  return v8; /*0x6c461a*/
}



// ==== 0x006C4690  _TClassFactory_VTunnelLocomotionClass::GetSize  this=?$TClassFactory@VTunnelLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_TunnelLocomotionClass::GetSize(_TClassFactory_VTunnelLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c469a*/
  if ( v5 ) /*0x6c469d*/
    v3 = v2 + 1; /*0x6c469f*/
  else
    v3 = v2 - 1; /*0x6c46a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c46a0*/
  return 0; /*0x6c46a5*/
}



// ==== 0x006C46C0  ObjectClass::WinMain_Helper_6C46C0  this=?$TClassFactory@VWalkLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C46C0(ObjectClass *this)
{
  this->? = 0; /*0x6c46c2*/
  this->AbstractClass = &TClassFactory<WalkLocomotionClass>::`vftable'; /*0x6c46c9*/
  return &this->AbstractClass; /*0x6c46cf*/
}



// ==== 0x006C46D0  _TClassFactory_VWalkLocomotionClass::CreateTClassFactory_WalkLocomotionClass  this=?$TClassFactory@VWalkLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_WalkLocomotionClass(
        _TClassFactory_VWalkLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c46d7*/
    return -2147467261; /*0x6c46d9*/
  *v4 = 0; /*0x6c46f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4712*/
    *v4 = a2; /*0x6c4716*/
  if ( !*v4 ) /*0x6c4718*/
    return -2147467262; /*0x6c4720*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c472c*/
  return 0; /*0x6c46de*/
}



// ==== 0x006C4740  _TClassFactory_VWalkLocomotionClass::AddRef  this=?$TClassFactory@VWalkLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_WalkLocomotionClass::AddRef(_TClassFactory_VWalkLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c474e*/
}



// ==== 0x006C4760  _TClassFactory_VWalkLocomotionClass::GetClassName  this=?$TClassFactory@VWalkLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_WalkLocomotionClass::GetClassName(_TClassFactory_VWalkLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4770*/
  if ( !v1 ) /*0x6c4774*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4777*/
  return v1; /*0x6c4781*/
}



// ==== 0x006C4790  _TClassFactory_VWalkLocomotionClass::ddtor  this=?$TClassFactory@VWalkLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_WalkLocomotionClass::ddtor(
        _TClassFactory_VWalkLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  VoxelAnimClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4798*/
    return -2147024809; /*0x6c479b*/
  *v9 = 0; /*0x6c47a8*/
  if ( a3 ) /*0x6c47b0*/
    return -2147221232; /*0x6c47b3*/
  v5 = (VoxelAnimClass *)__2_YAPAXI_Z(0x3Cu); /*0x6c47be*/
  if ( !v5 ) /*0x6c47c8*/
    return -2147024882; /*0x6c47c8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))VoxelAnimClass::Reset(v5); /*0x6c47cc*/
  v7 = v6; /*0x6c47d1*/
  if ( !v6 ) /*0x6c47d5*/
    return -2147024882; /*0x6c47d8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c47ec*/
  if ( v8 < 0 ) /*0x6c47f0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c47f8*/
  return v8; /*0x6c479a*/
}



// ==== 0x006C4810  _TClassFactory_VWalkLocomotionClass::GetSize  this=?$TClassFactory@VWalkLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_WalkLocomotionClass::GetSize(_TClassFactory_VWalkLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c481a*/
  if ( v5 ) /*0x6c481d*/
    v3 = v2 + 1; /*0x6c481f*/
  else
    v3 = v2 - 1; /*0x6c4828*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c4820*/
  return 0; /*0x6c4825*/
}



// ==== 0x006C4840  ObjectClass::WinMain_Helper_6C4840  this=?$TClassFactory@VDropPodLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4840(ObjectClass *this)
{
  this->? = 0; /*0x6c4842*/
  this->AbstractClass = &TClassFactory<DropPodLocomotionClass>::`vftable'; /*0x6c4849*/
  return &this->AbstractClass; /*0x6c484f*/
}



// ==== 0x006C4850  _TClassFactory_VDropPodLocomotionClass::CreateTClassFactory_DropPodLocomotionClass  this=?$TClassFactory@VDropPodLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_DropPodLocomotionClass(
        _TClassFactory_VDropPodLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4857*/
    return -2147467261; /*0x6c4859*/
  *v4 = 0; /*0x6c4876*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4892*/
    *v4 = a2; /*0x6c4896*/
  if ( !*v4 ) /*0x6c4898*/
    return -2147467262; /*0x6c48a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c48ac*/
  return 0; /*0x6c485e*/
}



// ==== 0x006C48C0  _TClassFactory_VDropPodLocomotionClass::AddRef  this=?$TClassFactory@VDropPodLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_DropPodLocomotionClass::AddRef(_TClassFactory_VDropPodLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c48ce*/
}



// ==== 0x006C48E0  _TClassFactory_VDropPodLocomotionClass::GetClassName  this=?$TClassFactory@VDropPodLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_DropPodLocomotionClass::GetClassName(_TClassFactory_VDropPodLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c48f0*/
  if ( !v1 ) /*0x6c48f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c48f7*/
  return v1; /*0x6c4901*/
}



// ==== 0x006C4910  _TClassFactory_VDropPodLocomotionClass::ddtor  this=?$TClassFactory@VDropPodLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_DropPodLocomotionClass::ddtor(
        _TClassFactory_VDropPodLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  DropPodLocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4918*/
    return -2147024809; /*0x6c491b*/
  *v9 = 0; /*0x6c4928*/
  if ( a3 ) /*0x6c4930*/
    return -2147221232; /*0x6c4933*/
  v5 = (DropPodLocomotionClass *)__2_YAPAXI_Z(0x30u); /*0x6c493e*/
  if ( !v5 ) /*0x6c4948*/
    return -2147024882; /*0x6c4948*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))SmallFunc_4B5AB0(v5); /*0x6c494c*/
  v7 = v6; /*0x6c4951*/
  if ( !v6 ) /*0x6c4955*/
    return -2147024882; /*0x6c4958*/
  v8 = (**v6)(v6, a4, v9); /*0x6c496c*/
  if ( v8 < 0 ) /*0x6c4970*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c4978*/
  return v8; /*0x6c491a*/
}



// ==== 0x006C4990  _TClassFactory_VDropPodLocomotionClass::GetSize  this=?$TClassFactory@VDropPodLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_DropPodLocomotionClass::GetSize(_TClassFactory_VDropPodLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c499a*/
  if ( v5 ) /*0x6c499d*/
    v3 = v2 + 1; /*0x6c499f*/
  else
    v3 = v2 - 1; /*0x6c49a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c49a0*/
  return 0; /*0x6c49a5*/
}



// ==== 0x006C49C0  ObjectClass::WinMain_Helper_6C49C0  this=?$TClassFactory@VFlyLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C49C0(ObjectClass *this)
{
  this->? = 0; /*0x6c49c2*/
  this->AbstractClass = &TClassFactory<FlyLocomotionClass>::`vftable'; /*0x6c49c9*/
  return &this->AbstractClass; /*0x6c49cf*/
}



// ==== 0x006C49D0  _TClassFactory_VFlyLocomotionClass::CreateTClassFactory_FlyLocomotionClass  this=?$TClassFactory@VFlyLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_FlyLocomotionClass(
        _TClassFactory_VFlyLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c49d7*/
    return -2147467261; /*0x6c49d9*/
  *v4 = 0; /*0x6c49f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4a12*/
    *v4 = a2; /*0x6c4a16*/
  if ( !*v4 ) /*0x6c4a18*/
    return -2147467262; /*0x6c4a20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c4a2c*/
  return 0; /*0x6c49de*/
}



// ==== 0x006C4A40  _TClassFactory_VFlyLocomotionClass::AddRef  this=?$TClassFactory@VFlyLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_FlyLocomotionClass::AddRef(_TClassFactory_VFlyLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4a4e*/
}



// ==== 0x006C4A60  _TClassFactory_VFlyLocomotionClass::GetClassName  this=?$TClassFactory@VFlyLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_FlyLocomotionClass::GetClassName(_TClassFactory_VFlyLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4a70*/
  if ( !v1 ) /*0x6c4a74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4a77*/
  return v1; /*0x6c4a81*/
}



// ==== 0x006C4A90  _TClassFactory_VFlyLocomotionClass::ddtor  this=?$TClassFactory@VFlyLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_FlyLocomotionClass::ddtor(
        _TClassFactory_VFlyLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  FlyLocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4a98*/
    return -2147024809; /*0x6c4a9b*/
  *v9 = 0; /*0x6c4aa8*/
  if ( a3 ) /*0x6c4ab0*/
    return -2147221232; /*0x6c4ab3*/
  v5 = (FlyLocomotionClass *)__2_YAPAXI_Z(0x60u); /*0x6c4abe*/
  if ( !v5 ) /*0x6c4ac8*/
    return -2147024882; /*0x6c4ac8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))FlyLocomotionClass::LocomotionClass(v5); /*0x6c4acc*/
  v7 = v6; /*0x6c4ad1*/
  if ( !v6 ) /*0x6c4ad5*/
    return -2147024882; /*0x6c4ad8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c4aec*/
  if ( v8 < 0 ) /*0x6c4af0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c4af8*/
  return v8; /*0x6c4a9a*/
}



// ==== 0x006C4B10  _TClassFactory_VFlyLocomotionClass::GetSize  this=?$TClassFactory@VFlyLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_FlyLocomotionClass::GetSize(_TClassFactory_VFlyLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c4b1a*/
  if ( v5 ) /*0x6c4b1d*/
    v3 = v2 + 1; /*0x6c4b1f*/
  else
    v3 = v2 - 1; /*0x6c4b28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c4b20*/
  return 0; /*0x6c4b25*/
}



// ==== 0x006C4B40  ObjectClass::WinMain_Helper_6C4B40  this=?$TClassFactory@VTeleportLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4B40(ObjectClass *this)
{
  this->? = 0; /*0x6c4b42*/
  this->AbstractClass = &TClassFactory<TeleportLocomotionClass>::`vftable'; /*0x6c4b49*/
  return &this->AbstractClass; /*0x6c4b4f*/
}



// ==== 0x006C4B50  _TClassFactory_VTeleportLocomotionClass::CreateTClassFactory_TeleportLocomotionClass  this=?$TClassFactory@VTeleportLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TeleportLocomotionClass(
        _TClassFactory_VTeleportLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4b57*/
    return -2147467261; /*0x6c4b59*/
  *v4 = 0; /*0x6c4b76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4b92*/
    *v4 = a2; /*0x6c4b96*/
  if ( !*v4 ) /*0x6c4b98*/
    return -2147467262; /*0x6c4ba0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c4bac*/
  return 0; /*0x6c4b5e*/
}



// ==== 0x006C4BC0  _TClassFactory_VTeleportLocomotionClass::AddRef  this=?$TClassFactory@VTeleportLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_TeleportLocomotionClass::AddRef(_TClassFactory_VTeleportLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4bce*/
}



// ==== 0x006C4BE0  _TClassFactory_VTeleportLocomotionClass::GetClassName  this=?$TClassFactory@VTeleportLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_TeleportLocomotionClass::GetClassName(_TClassFactory_VTeleportLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4bf0*/
  if ( !v1 ) /*0x6c4bf4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4bf7*/
  return v1; /*0x6c4c01*/
}



// ==== 0x006C4C10  _TClassFactory_VTeleportLocomotionClass::ddtor  this=?$TClassFactory@VTeleportLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_TeleportLocomotionClass::ddtor(
        _TClassFactory_VTeleportLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  TeleportLocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4c18*/
    return -2147024809; /*0x6c4c1b*/
  *v9 = 0; /*0x6c4c28*/
  if ( a3 ) /*0x6c4c30*/
    return -2147221232; /*0x6c4c33*/
  v5 = (TeleportLocomotionClass *)__2_YAPAXI_Z(0x4Cu); /*0x6c4c3e*/
  if ( !v5 ) /*0x6c4c48*/
    return -2147024882; /*0x6c4c48*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))TeleportLocomotionClass::TeleportLocomotionClass(v5); /*0x6c4c4c*/
  v7 = v6; /*0x6c4c51*/
  if ( !v6 ) /*0x6c4c55*/
    return -2147024882; /*0x6c4c58*/
  v8 = (**v6)(v6, a4, v9); /*0x6c4c6c*/
  if ( v8 < 0 ) /*0x6c4c70*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c4c78*/
  return v8; /*0x6c4c1a*/
}



// ==== 0x006C4C90  _TClassFactory_VTeleportLocomotionClass::GetSize  this=?$TClassFactory@VTeleportLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_TeleportLocomotionClass::GetSize(_TClassFactory_VTeleportLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c4c9a*/
  if ( v5 ) /*0x6c4c9d*/
    v3 = v2 + 1; /*0x6c4c9f*/
  else
    v3 = v2 - 1; /*0x6c4ca8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c4ca0*/
  return 0; /*0x6c4ca5*/
}



// ==== 0x006C4CC0  ObjectClass::WinMain_Helper_6C4CC0  this=?$TClassFactory@VMechLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4CC0(ObjectClass *this)
{
  this->? = 0; /*0x6c4cc2*/
  this->AbstractClass = &TClassFactory<MechLocomotionClass>::`vftable'; /*0x6c4cc9*/
  return &this->AbstractClass; /*0x6c4ccf*/
}



// ==== 0x006C4CD0  _TClassFactory_VMechLocomotionClass::CreateTClassFactory_MechLocomotionClass  this=?$TClassFactory@VMechLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_MechLocomotionClass(
        _TClassFactory_VMechLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4cd7*/
    return -2147467261; /*0x6c4cd9*/
  *v4 = 0; /*0x6c4cf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4d12*/
    *v4 = a2; /*0x6c4d16*/
  if ( !*v4 ) /*0x6c4d18*/
    return -2147467262; /*0x6c4d20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c4d2c*/
  return 0; /*0x6c4cde*/
}



// ==== 0x006C4D40  _TClassFactory_VMechLocomotionClass::AddRef  this=?$TClassFactory@VMechLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_MechLocomotionClass::AddRef(_TClassFactory_VMechLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4d4e*/
}



// ==== 0x006C4D60  _TClassFactory_VMechLocomotionClass::GetClassName  this=?$TClassFactory@VMechLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_MechLocomotionClass::GetClassName(_TClassFactory_VMechLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4d70*/
  if ( !v1 ) /*0x6c4d74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4d77*/
  return v1; /*0x6c4d81*/
}



// ==== 0x006C4D90  _TClassFactory_VMechLocomotionClass::ddtor  this=?$TClassFactory@VMechLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_MechLocomotionClass::ddtor(
        _TClassFactory_VMechLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  MechLocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4d98*/
    return -2147024809; /*0x6c4d9b*/
  *v9 = 0; /*0x6c4da8*/
  if ( a3 ) /*0x6c4db0*/
    return -2147221232; /*0x6c4db3*/
  v5 = (MechLocomotionClass *)__2_YAPAXI_Z(0x34u); /*0x6c4dbe*/
  if ( !v5 ) /*0x6c4dc8*/
    return -2147024882; /*0x6c4dc8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))SmallFunc_5AFEF0(v5); /*0x6c4dcc*/
  v7 = v6; /*0x6c4dd1*/
  if ( !v6 ) /*0x6c4dd5*/
    return -2147024882; /*0x6c4dd8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c4dec*/
  if ( v8 < 0 ) /*0x6c4df0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c4df8*/
  return v8; /*0x6c4d9a*/
}



// ==== 0x006C4E10  _TClassFactory_VMechLocomotionClass::GetSize  this=?$TClassFactory@VMechLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_MechLocomotionClass::GetSize(_TClassFactory_VMechLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c4e1a*/
  if ( v5 ) /*0x6c4e1d*/
    v3 = v2 + 1; /*0x6c4e1f*/
  else
    v3 = v2 - 1; /*0x6c4e28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c4e20*/
  return 0; /*0x6c4e25*/
}



// ==== 0x006C4E40  ObjectClass::WinMain_Helper_6C4E40  this=?$TClassFactory@VShipLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4E40(ObjectClass *this)
{
  this->? = 0; /*0x6c4e42*/
  this->AbstractClass = &TClassFactory<ShipLocomotionClass>::`vftable'; /*0x6c4e49*/
  return &this->AbstractClass; /*0x6c4e4f*/
}



// ==== 0x006C4E50  _TClassFactory_VShipLocomotionClass::CreateTClassFactory_ShipLocomotionClass  this=?$TClassFactory@VShipLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ShipLocomotionClass(
        _TClassFactory_VShipLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4e57*/
    return -2147467261; /*0x6c4e59*/
  *v4 = 0; /*0x6c4e76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4e92*/
    *v4 = a2; /*0x6c4e96*/
  if ( !*v4 ) /*0x6c4e98*/
    return -2147467262; /*0x6c4ea0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c4eac*/
  return 0; /*0x6c4e5e*/
}



// ==== 0x006C4EC0  _TClassFactory_VShipLocomotionClass::AddRef  this=?$TClassFactory@VShipLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_ShipLocomotionClass::AddRef(_TClassFactory_VShipLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4ece*/
}



// ==== 0x006C4EE0  _TClassFactory_VShipLocomotionClass::GetClassName  this=?$TClassFactory@VShipLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_ShipLocomotionClass::GetClassName(_TClassFactory_VShipLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4ef0*/
  if ( !v1 ) /*0x6c4ef4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4ef7*/
  return v1; /*0x6c4f01*/
}



// ==== 0x006C4F10  _TClassFactory_VShipLocomotionClass::ddtor  this=?$TClassFactory@VShipLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_ShipLocomotionClass::ddtor(
        _TClassFactory_VShipLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  LocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4f18*/
    return -2147024809; /*0x6c4f1b*/
  *v9 = 0; /*0x6c4f28*/
  if ( a3 ) /*0x6c4f30*/
    return -2147221232; /*0x6c4f33*/
  v5 = (LocomotionClass *)__2_YAPAXI_Z(0x70u); /*0x6c4f3e*/
  if ( !v5 ) /*0x6c4f48*/
    return -2147024882; /*0x6c4f48*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))LocomotionClass::Process(v5); /*0x6c4f4c*/
  v7 = v6; /*0x6c4f51*/
  if ( !v6 ) /*0x6c4f55*/
    return -2147024882; /*0x6c4f58*/
  v8 = (**v6)(v6, a4, v9); /*0x6c4f6c*/
  if ( v8 < 0 ) /*0x6c4f70*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c4f78*/
  return v8; /*0x6c4f1a*/
}



// ==== 0x006C4F90  _TClassFactory_VShipLocomotionClass::GetSize  this=?$TClassFactory@VShipLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_ShipLocomotionClass::GetSize(_TClassFactory_VShipLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c4f9a*/
  if ( v5 ) /*0x6c4f9d*/
    v3 = v2 + 1; /*0x6c4f9f*/
  else
    v3 = v2 - 1; /*0x6c4fa8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c4fa0*/
  return 0; /*0x6c4fa5*/
}



// ==== 0x006C4FC0  ObjectClass::WinMain_Helper_6C4FC0  this=?$TClassFactory@VBulletClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4FC0(ObjectClass *this)
{
  this->? = 0; /*0x6c4fc2*/
  this->AbstractClass = &TClassFactory<BulletClass>::`vftable'; /*0x6c4fc9*/
  return &this->AbstractClass; /*0x6c4fcf*/
}



// ==== 0x006C4FD0  _TClassFactory_VBulletClass::CreateTClassFactory_BulletClass  this=?$TClassFactory@VBulletClass@@  sig=csp ====
int __thiscall CreateTClassFactory_BulletClass(_TClassFactory_VBulletClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4fd7*/
    return -2147467261; /*0x6c4fd9*/
  *v4 = 0; /*0x6c4ff6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5012*/
    *v4 = a2; /*0x6c5016*/
  if ( !*v4 ) /*0x6c5018*/
    return -2147467262; /*0x6c5020*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c502c*/
  return 0; /*0x6c4fde*/
}



// ==== 0x006C5040  _TClassFactory_VBulletClass::AddRef  this=?$TClassFactory@VBulletClass@@  sig=csp ====
LONG __thiscall TClassFactory_BulletClass::AddRef(_TClassFactory_VBulletClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c504e*/
}



// ==== 0x006C5060  _TClassFactory_VBulletClass::GetClassName  this=?$TClassFactory@VBulletClass@@  sig=csp ====
LONG __thiscall TClassFactory_BulletClass::GetClassName(_TClassFactory_VBulletClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5070*/
  if ( !v1 ) /*0x6c5074*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5077*/
  return v1; /*0x6c5081*/
}



// ==== 0x006C5090  _TClassFactory_VBulletClass::ddtor  this=?$TClassFactory@VBulletClass@@  sig=csp ====
int __thiscall TClassFactory_BulletClass::ddtor(_TClassFactory_VBulletClass *this, int a2, int a3, _DWORD *a4)
{
  BulletClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5098*/
    return -2147024809; /*0x6c509b*/
  *v9 = 0; /*0x6c50a8*/
  if ( a3 ) /*0x6c50b0*/
    return -2147221232; /*0x6c50b3*/
  v5 = (BulletClass *)__2_YAPAXI_Z(0x160u); /*0x6c50c1*/
  if ( !v5 ) /*0x6c50cb*/
    return -2147024882; /*0x6c50cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))BulletClass::BulletClass(v5); /*0x6c50cf*/
  v7 = v6; /*0x6c50d4*/
  if ( !v6 ) /*0x6c50d8*/
    return -2147024882; /*0x6c50db*/
  v8 = (**v6)(v6, a4, v9); /*0x6c50ef*/
  if ( v8 < 0 ) /*0x6c50f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c50fb*/
  return v8; /*0x6c509a*/
}



// ==== 0x006C5110  _TClassFactory_VBulletClass::GetSize  this=?$TClassFactory@VBulletClass@@  sig=csp ====
int __thiscall TClassFactory_BulletClass::GetSize(_TClassFactory_VBulletClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c511a*/
  if ( v5 ) /*0x6c511d*/
    v3 = v2 + 1; /*0x6c511f*/
  else
    v3 = v2 - 1; /*0x6c5128*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c5120*/
  return 0; /*0x6c5125*/
}



// ==== 0x006C5140  ObjectClass::WinMain_Helper_6C5140  this=?$TClassFactory@VFactoryClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5140(ObjectClass *this)
{
  this->? = 0; /*0x6c5142*/
  this->AbstractClass = &TClassFactory<FactoryClass>::`vftable'; /*0x6c5149*/
  return &this->AbstractClass; /*0x6c514f*/
}



// ==== 0x006C5150  _TClassFactory_VFactoryClass::CreateTClassFactory_FactoryClass  this=?$TClassFactory@VFactoryClass@@  sig=csp ====
int __thiscall CreateTClassFactory_FactoryClass(_TClassFactory_VFactoryClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5157*/
    return -2147467261; /*0x6c5159*/
  *v4 = 0; /*0x6c5176*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5192*/
    *v4 = a2; /*0x6c5196*/
  if ( !*v4 ) /*0x6c5198*/
    return -2147467262; /*0x6c51a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c51ac*/
  return 0; /*0x6c515e*/
}



// ==== 0x006C51C0  _TClassFactory_VFactoryClass::AddRef  this=?$TClassFactory@VFactoryClass@@  sig=csp ====
LONG __thiscall TClassFactory_FactoryClass::AddRef(_TClassFactory_VFactoryClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c51ce*/
}



// ==== 0x006C51E0  _TClassFactory_VFactoryClass::GetClassName  this=?$TClassFactory@VFactoryClass@@  sig=csp ====
LONG __thiscall TClassFactory_FactoryClass::GetClassName(_TClassFactory_VFactoryClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c51f0*/
  if ( !v1 ) /*0x6c51f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c51f7*/
  return v1; /*0x6c5201*/
}



// ==== 0x006C5210  _TClassFactory_VFactoryClass::ddtor  this=?$TClassFactory@VFactoryClass@@  sig=csp ====
int __thiscall TClassFactory_FactoryClass::ddtor(_TClassFactory_VFactoryClass *this, int a2, int a3, _DWORD *a4)
{
  TeamTypeClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5218*/
    return -2147024809; /*0x6c521b*/
  *v9 = 0; /*0x6c5228*/
  if ( a3 ) /*0x6c5230*/
    return -2147221232; /*0x6c5233*/
  v5 = (TeamTypeClass *)__2_YAPAXI_Z(0x74u); /*0x6c523e*/
  if ( !v5 ) /*0x6c5248*/
    return -2147024882; /*0x6c5248*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))TeamTypeClass::Construct(v5); /*0x6c524c*/
  v7 = v6; /*0x6c5251*/
  if ( !v6 ) /*0x6c5255*/
    return -2147024882; /*0x6c5258*/
  v8 = (**v6)(v6, a4, v9); /*0x6c526c*/
  if ( v8 < 0 ) /*0x6c5270*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c5278*/
  return v8; /*0x6c521a*/
}



// ==== 0x006C5290  _TClassFactory_VFactoryClass::GetSize  this=?$TClassFactory@VFactoryClass@@  sig=csp ====
int __thiscall TClassFactory_FactoryClass::GetSize(_TClassFactory_VFactoryClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c529a*/
  if ( v5 ) /*0x6c529d*/
    v3 = v2 + 1; /*0x6c529f*/
  else
    v3 = v2 - 1; /*0x6c52a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c52a0*/
  return 0; /*0x6c52a5*/
}



// ==== 0x006C52C0  ObjectClass::WinMain_Helper_6C52C0  this=?$TClassFactory@VWarheadTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C52C0(ObjectClass *this)
{
  this->? = 0; /*0x6c52c2*/
  this->AbstractClass = &TClassFactory<WarheadTypeClass>::`vftable'; /*0x6c52c9*/
  return &this->AbstractClass; /*0x6c52cf*/
}



// ==== 0x006C52D0  _TClassFactory_VWarheadTypeClass::CreateTClassFactory_WarheadTypeClass  this=?$TClassFactory@VWarheadTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_WarheadTypeClass(_TClassFactory_VWarheadTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c52d7*/
    return -2147467261; /*0x6c52d9*/
  *v4 = 0; /*0x6c52f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5312*/
    *v4 = a2; /*0x6c5316*/
  if ( !*v4 ) /*0x6c5318*/
    return -2147467262; /*0x6c5320*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c532c*/
  return 0; /*0x6c52de*/
}



// ==== 0x006C5340  _TClassFactory_VWarheadTypeClass::AddRef  this=?$TClassFactory@VWarheadTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_WarheadTypeClass::AddRef(_TClassFactory_VWarheadTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c534e*/
}



// ==== 0x006C5360  _TClassFactory_VWarheadTypeClass::GetClassName  this=?$TClassFactory@VWarheadTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_WarheadTypeClass::GetClassName(_TClassFactory_VWarheadTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5370*/
  if ( !v1 ) /*0x6c5374*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5377*/
  return v1; /*0x6c5381*/
}



// ==== 0x006C5390  _TClassFactory_VWarheadTypeClass::GetClassIdentifier  this=?$TClassFactory@VWarheadTypeClass@@  sig=csp ====
int __thiscall TClassFactory_WarheadTypeClass::GetClassIdentifier(
        _TClassFactory_VWarheadTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5398*/
    return -2147024809; /*0x6c539b*/
  *v9 = 0; /*0x6c53a8*/
  if ( a3 ) /*0x6c53b0*/
    return -2147221232; /*0x6c53b3*/
  v5 = __2_YAPAXI_Z(0x1D0u); /*0x6c53c1*/
  if ( !v5 ) /*0x6c53cb*/
    return -2147024882; /*0x6c53cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))WarheadTypeClass::Construct(v5, 0); /*0x6c53d1*/
  v7 = v6; /*0x6c53d6*/
  if ( !v6 ) /*0x6c53da*/
    return -2147024882; /*0x6c53dd*/
  v8 = (**v6)(v6, a4, v9); /*0x6c53f1*/
  if ( v8 < 0 ) /*0x6c53f5*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c53fd*/
  return v8; /*0x6c539a*/
}



// ==== 0x006C5410  _TClassFactory_VWarheadTypeClass::GetSize  this=?$TClassFactory@VWarheadTypeClass@@  sig=csp ====
int __thiscall TClassFactory_WarheadTypeClass::GetSize(_TClassFactory_VWarheadTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c541a*/
  if ( v5 ) /*0x6c541d*/
    v3 = v2 + 1; /*0x6c541f*/
  else
    v3 = v2 - 1; /*0x6c5428*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c5420*/
  return 0; /*0x6c5425*/
}



// ==== 0x006C5440  ObjectClass::WinMain_Helper_6C5440  this=?$TClassFactory@VWeaponTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5440(ObjectClass *this)
{
  this->? = 0; /*0x6c5442*/
  this->AbstractClass = &TClassFactory<WeaponTypeClass>::`vftable'; /*0x6c5449*/
  return &this->AbstractClass; /*0x6c544f*/
}



// ==== 0x006C5450  _TClassFactory_VWeaponTypeClass::CreateTClassFactory_WeaponTypeClass  this=?$TClassFactory@VWeaponTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_WeaponTypeClass(_TClassFactory_VWeaponTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5457*/
    return -2147467261; /*0x6c5459*/
  *v4 = 0; /*0x6c5476*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5492*/
    *v4 = a2; /*0x6c5496*/
  if ( !*v4 ) /*0x6c5498*/
    return -2147467262; /*0x6c54a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c54ac*/
  return 0; /*0x6c545e*/
}



// ==== 0x006C54C0  _TClassFactory_VWeaponTypeClass::AddRef  this=?$TClassFactory@VWeaponTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_WeaponTypeClass::AddRef(_TClassFactory_VWeaponTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c54ce*/
}



// ==== 0x006C54E0  _TClassFactory_VWeaponTypeClass::GetClassName  this=?$TClassFactory@VWeaponTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_WeaponTypeClass::GetClassName(_TClassFactory_VWeaponTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c54f0*/
  if ( !v1 ) /*0x6c54f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c54f7*/
  return v1; /*0x6c5501*/
}



// ==== 0x006C5510  _TClassFactory_VWeaponTypeClass::GetClassIdentifier  this=?$TClassFactory@VWeaponTypeClass@@  sig=csp ====
int __thiscall TClassFactory_WeaponTypeClass::GetClassIdentifier(
        _TClassFactory_VWeaponTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  WeaponTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5518*/
    return -2147024809; /*0x6c551b*/
  *v9 = 0; /*0x6c5528*/
  if ( a3 ) /*0x6c5530*/
    return -2147221232; /*0x6c5533*/
  v5 = (WeaponTypeClass *)__2_YAPAXI_Z(0x160u); /*0x6c5541*/
  if ( !v5 ) /*0x6c554b*/
    return -2147024882; /*0x6c554b*/
  v6 = WeaponTypeClass::Constructor(v5, 0); /*0x6c5551*/
  v7 = v6; /*0x6c5556*/
  if ( !v6 ) /*0x6c555a*/
    return -2147024882; /*0x6c555d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c5571*/
  if ( v8 < 0 ) /*0x6c5575*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c557d*/
  return v8; /*0x6c551a*/
}



// ==== 0x006C5590  _TClassFactory_VWeaponTypeClass::GetSize  this=?$TClassFactory@VWeaponTypeClass@@  sig=csp ====
int __thiscall TClassFactory_WeaponTypeClass::GetSize(_TClassFactory_VWeaponTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c559a*/
  if ( v5 ) /*0x6c559d*/
    v3 = v2 + 1; /*0x6c559f*/
  else
    v3 = v2 - 1; /*0x6c55a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c55a0*/
  return 0; /*0x6c55a5*/
}



// ==== 0x006C55C0  ObjectClass::WinMain_Helper_6C55C0  this=?$TClassFactory@VParticleClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C55C0(ObjectClass *this)
{
  this->? = 0; /*0x6c55c2*/
  this->AbstractClass = &TClassFactory<ParticleClass>::`vftable'; /*0x6c55c9*/
  return &this->AbstractClass; /*0x6c55cf*/
}



// ==== 0x006C55D0  _TClassFactory_VParticleClass::CreateTClassFactory_ParticleClass  this=?$TClassFactory@VParticleClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ParticleClass(_TClassFactory_VParticleClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c55d7*/
    return -2147467261; /*0x6c55d9*/
  *v4 = 0; /*0x6c55f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5612*/
    *v4 = a2; /*0x6c5616*/
  if ( !*v4 ) /*0x6c5618*/
    return -2147467262; /*0x6c5620*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c562c*/
  return 0; /*0x6c55de*/
}



// ==== 0x006C5640  _TClassFactory_VParticleClass::ProcessCharged  this=?$TClassFactory@VParticleClass@@  sig=csp ====
LONG __thiscall SuperWeaponClass::ProcessCharged(_TClassFactory_VParticleClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c564e*/
}



// ==== 0x006C5660  _TClassFactory_VParticleClass::GetClassName  this=?$TClassFactory@VParticleClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleClass::GetClassName(_TClassFactory_VParticleClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5670*/
  if ( !v1 ) /*0x6c5674*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5677*/
  return v1; /*0x6c5681*/
}



// ==== 0x006C5690  _TClassFactory_VParticleClass::ddtor  this=?$TClassFactory@VParticleClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleClass::ddtor(_TClassFactory_VParticleClass *this, int a2, int a3, _DWORD *a4)
{
  ObjectClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5698*/
    return -2147024809; /*0x6c569b*/
  *v9 = 0; /*0x6c56a8*/
  if ( a3 ) /*0x6c56b0*/
    return -2147221232; /*0x6c56b3*/
  v5 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x6c56c1*/
  if ( !v5 ) /*0x6c56cb*/
    return -2147024882; /*0x6c56cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))ObjectClass::ProcessUpdate(v5); /*0x6c56cf*/
  v7 = v6; /*0x6c56d4*/
  if ( !v6 ) /*0x6c56d8*/
    return -2147024882; /*0x6c56db*/
  v8 = (**v6)(v6, a4, v9); /*0x6c56ef*/
  if ( v8 < 0 ) /*0x6c56f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c56fb*/
  return v8; /*0x6c569a*/
}



// ==== 0x006C5710  _TClassFactory_VParticleClass::GetSize  this=?$TClassFactory@VParticleClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleClass::GetSize(_TClassFactory_VParticleClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c571a*/
  if ( v5 ) /*0x6c571d*/
    v3 = v2 + 1; /*0x6c571f*/
  else
    v3 = v2 - 1; /*0x6c5728*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c5720*/
  return 0; /*0x6c5725*/
}



// ==== 0x006C5740  ObjectClass::WinMain_Helper_6C5740  this=?$TClassFactory@VParticleTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5740(ObjectClass *this)
{
  this->? = 0; /*0x6c5742*/
  this->AbstractClass = &TClassFactory<ParticleTypeClass>::`vftable'; /*0x6c5749*/
  return &this->AbstractClass; /*0x6c574f*/
}



// ==== 0x006C5750  _TClassFactory_VParticleTypeClass::CreateTClassFactory_ParticleTypeClass  this=?$TClassFactory@VParticleTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ParticleTypeClass(
        _TClassFactory_VParticleTypeClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5757*/
    return -2147467261; /*0x6c5759*/
  *v4 = 0; /*0x6c5776*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5792*/
    *v4 = a2; /*0x6c5796*/
  if ( !*v4 ) /*0x6c5798*/
    return -2147467262; /*0x6c57a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c57ac*/
  return 0; /*0x6c575e*/
}



// ==== 0x006C57C0  _TClassFactory_VParticleTypeClass::AddRef  this=?$TClassFactory@VParticleTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleTypeClass::AddRef(_TClassFactory_VParticleTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c57ce*/
}



// ==== 0x006C57E0  _TClassFactory_VParticleTypeClass::GetClassName  this=?$TClassFactory@VParticleTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleTypeClass::GetClassName(_TClassFactory_VParticleTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c57f0*/
  if ( !v1 ) /*0x6c57f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c57f7*/
  return v1; /*0x6c5801*/
}



// ==== 0x006C5810  _TClassFactory_VParticleTypeClass::GetClassIdentifier  this=?$TClassFactory@VParticleTypeClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleTypeClass::GetClassIdentifier(
        _TClassFactory_VParticleTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  BuildingTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5818*/
    return -2147024809; /*0x6c581b*/
  *v9 = 0; /*0x6c5828*/
  if ( a3 ) /*0x6c5830*/
    return -2147221232; /*0x6c5833*/
  v5 = (BuildingTypeClass *)__2_YAPAXI_Z(0x318u); /*0x6c5841*/
  if ( !v5 ) /*0x6c584b*/
    return -2147024882; /*0x6c584b*/
  v6 = BuildingTypeClass::Construct(v5, 0); /*0x6c5851*/
  v7 = v6; /*0x6c5856*/
  if ( !v6 ) /*0x6c585a*/
    return -2147024882; /*0x6c585d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c5871*/
  if ( v8 < 0 ) /*0x6c5875*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c587d*/
  return v8; /*0x6c581a*/
}



// ==== 0x006C5890  _TClassFactory_VParticleTypeClass::GetSize  this=?$TClassFactory@VParticleTypeClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleTypeClass::GetSize(_TClassFactory_VParticleTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c589a*/
  if ( v5 ) /*0x6c589d*/
    v3 = v2 + 1; /*0x6c589f*/
  else
    v3 = v2 - 1; /*0x6c58a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c58a0*/
  return 0; /*0x6c58a5*/
}



// ==== 0x006C58C0  ObjectClass::WinMain_Helper_6C58C0  this=?$TClassFactory@VParticleSystemClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C58C0(ObjectClass *this)
{
  this->? = 0; /*0x6c58c2*/
  this->AbstractClass = &TClassFactory<ParticleSystemClass>::`vftable'; /*0x6c58c9*/
  return &this->AbstractClass; /*0x6c58cf*/
}



// ==== 0x006C58D0  _TClassFactory_VParticleSystemClass::CreateTClassFactory_ParticleSystemClass  this=?$TClassFactory@VParticleSystemClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ParticleSystemClass(
        _TClassFactory_VParticleSystemClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c58d7*/
    return -2147467261; /*0x6c58d9*/
  *v4 = 0; /*0x6c58f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5912*/
    *v4 = a2; /*0x6c5916*/
  if ( !*v4 ) /*0x6c5918*/
    return -2147467262; /*0x6c5920*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c592c*/
  return 0; /*0x6c58de*/
}



// ==== 0x006C5940  _TClassFactory_VParticleSystemClass::AddRef  this=?$TClassFactory@VParticleSystemClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleSystemClass::AddRef(_TClassFactory_VParticleSystemClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c594e*/
}



// ==== 0x006C5960  _TClassFactory_VParticleSystemClass::GetClassName  this=?$TClassFactory@VParticleSystemClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleSystemClass::GetClassName(_TClassFactory_VParticleSystemClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5970*/
  if ( !v1 ) /*0x6c5974*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5977*/
  return v1; /*0x6c5981*/
}



// ==== 0x006C5990  _TClassFactory_VParticleSystemClass::ddtor  this=?$TClassFactory@VParticleSystemClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleSystemClass::ddtor(
        _TClassFactory_VParticleSystemClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  ParticleSystemClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5998*/
    return -2147024809; /*0x6c599b*/
  *v9 = 0; /*0x6c59a8*/
  if ( a3 ) /*0x6c59b0*/
    return -2147221232; /*0x6c59b3*/
  v5 = (ParticleSystemClass *)__2_YAPAXI_Z(0x100u); /*0x6c59c1*/
  if ( !v5 ) /*0x6c59cb*/
    return -2147024882; /*0x6c59cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))ParticleClass::ProcessCreation(v5); /*0x6c59cf*/
  v7 = v6; /*0x6c59d4*/
  if ( !v6 ) /*0x6c59d8*/
    return -2147024882; /*0x6c59db*/
  v8 = (**v6)(v6, a4, v9); /*0x6c59ef*/
  if ( v8 < 0 ) /*0x6c59f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c59fb*/
  return v8; /*0x6c599a*/
}



// ==== 0x006C5A10  _TClassFactory_VParticleSystemClass::GetSize  this=?$TClassFactory@VParticleSystemClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleSystemClass::GetSize(_TClassFactory_VParticleSystemClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c5a1a*/
  if ( v5 ) /*0x6c5a1d*/
    v3 = v2 + 1; /*0x6c5a1f*/
  else
    v3 = v2 - 1; /*0x6c5a28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c5a20*/
  return 0; /*0x6c5a25*/
}



// ==== 0x006C5A40  ObjectClass::WinMain_Helper_6C5A40  this=?$TClassFactory@VParticleSystemTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5A40(ObjectClass *this)
{
  this->? = 0; /*0x6c5a42*/
  this->AbstractClass = &TClassFactory<ParticleSystemTypeClass>::`vftable'; /*0x6c5a49*/
  return &this->AbstractClass; /*0x6c5a4f*/
}



// ==== 0x006C5A50  _TClassFactory_VParticleSystemTypeClass::CreateTClassFactory_ParticleSystemTypeClass  this=?$TClassFactory@VParticleSystemTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ParticleSystemTypeClass(
        _TClassFactory_VParticleSystemTypeClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5a57*/
    return -2147467261; /*0x6c5a59*/
  *v4 = 0; /*0x6c5a76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5a92*/
    *v4 = a2; /*0x6c5a96*/
  if ( !*v4 ) /*0x6c5a98*/
    return -2147467262; /*0x6c5aa0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c5aac*/
  return 0; /*0x6c5a5e*/
}



// ==== 0x006C5AC0  _TClassFactory_VParticleSystemTypeClass::AddRef  this=?$TClassFactory@VParticleSystemTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleSystemTypeClass::AddRef(_TClassFactory_VParticleSystemTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5ace*/
}



// ==== 0x006C5AE0  _TClassFactory_VParticleSystemTypeClass::GetClassName  this=?$TClassFactory@VParticleSystemTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleSystemTypeClass::GetClassName(_TClassFactory_VParticleSystemTypeClass *this)
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
        _TClassFactory_VParticleSystemTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  OverlayTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5b18*/
    return -2147024809; /*0x6c5b1b*/
  *v9 = 0; /*0x6c5b28*/
  if ( a3 ) /*0x6c5b30*/
    return -2147221232; /*0x6c5b33*/
  v5 = (OverlayTypeClass *)__2_YAPAXI_Z(0x310u); /*0x6c5b41*/
  if ( !v5 ) /*0x6c5b4b*/
    return -2147024882; /*0x6c5b4b*/
  v6 = OverlayTypeClass::Construct(v5, 0); /*0x6c5b51*/
  v7 = v6; /*0x6c5b56*/
  if ( !v6 ) /*0x6c5b5a*/
    return -2147024882; /*0x6c5b5d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c5b71*/
  if ( v8 < 0 ) /*0x6c5b75*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c5b7d*/
  return v8; /*0x6c5b1a*/
}



// ==== 0x006C5B90  _TClassFactory_VParticleSystemTypeClass::GetSize  this=?$TClassFactory@VParticleSystemTypeClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleSystemTypeClass::GetSize(_TClassFactory_VParticleSystemTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c5b9a*/
  if ( v5 ) /*0x6c5b9d*/
    v3 = v2 + 1; /*0x6c5b9f*/
  else
    v3 = v2 - 1; /*0x6c5ba8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c5ba0*/
  return 0; /*0x6c5ba5*/
}



// ==== 0x006C5BC0  ObjectClass::WinMain_Helper_6C5BC0  this=?$TClassFactory@VAITriggerTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5BC0(ObjectClass *this)
{
  this->? = 0; /*0x6c5bc2*/
  this->AbstractClass = &TClassFactory<AITriggerTypeClass>::`vftable'; /*0x6c5bc9*/
  return &this->AbstractClass; /*0x6c5bcf*/
}



// ==== 0x006C5BD0  _TClassFactory_VAITriggerTypeClass::CreateTClassFactory_AITriggerTypeClass  this=?$TClassFactory@VAITriggerTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AITriggerTypeClass(
        _TClassFactory_VAITriggerTypeClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5bd7*/
    return -2147467261; /*0x6c5bd9*/
  *v4 = 0; /*0x6c5bf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5c12*/
    *v4 = a2; /*0x6c5c16*/
  if ( !*v4 ) /*0x6c5c18*/
    return -2147467262; /*0x6c5c20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c5c2c*/
  return 0; /*0x6c5bde*/
}



// ==== 0x006C5C40  _TClassFactory_VAITriggerTypeClass::AddRef  this=?$TClassFactory@VAITriggerTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AITriggerTypeClass::AddRef(_TClassFactory_VAITriggerTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5c4e*/
}



// ==== 0x006C5C60  _TClassFactory_VAITriggerTypeClass::GetClassName  this=?$TClassFactory@VAITriggerTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AITriggerTypeClass::GetClassName(_TClassFactory_VAITriggerTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5c70*/
  if ( !v1 ) /*0x6c5c74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5c77*/
  return v1; /*0x6c5c81*/
}



// ==== 0x006C5C90  _TClassFactory_VAITriggerTypeClass::GetClassIdentifier  this=?$TClassFactory@VAITriggerTypeClass@@  sig=csp ====
int __thiscall TClassFactory_AITriggerTypeClass::GetClassIdentifier(
        _TClassFactory_VAITriggerTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  AnimTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5c98*/
    return -2147024809; /*0x6c5c9b*/
  *v9 = 0; /*0x6c5ca8*/
  if ( a3 ) /*0x6c5cb0*/
    return -2147221232; /*0x6c5cb3*/
  v5 = (AnimTypeClass *)__2_YAPAXI_Z(0x110u); /*0x6c5cc1*/
  if ( !v5 ) /*0x6c5ccb*/
    return -2147024882; /*0x6c5ccb*/
  v6 = AnimTypeClass::Construct2(v5, 0); /*0x6c5cd1*/
  v7 = v6; /*0x6c5cd6*/
  if ( !v6 ) /*0x6c5cda*/
    return -2147024882; /*0x6c5cdd*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c5cf1*/
  if ( v8 < 0 ) /*0x6c5cf5*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c5cfd*/
  return v8; /*0x6c5c9a*/
}



// ==== 0x006C5D10  _TClassFactory_VAITriggerTypeClass::GetSize  this=?$TClassFactory@VAITriggerTypeClass@@  sig=csp ====
int __thiscall TClassFactory_AITriggerTypeClass::GetSize(_TClassFactory_VAITriggerTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c5d1a*/
  if ( v5 ) /*0x6c5d1d*/
    v3 = v2 + 1; /*0x6c5d1f*/
  else
    v3 = v2 - 1; /*0x6c5d28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c5d20*/
  return 0; /*0x6c5d25*/
}



// ==== 0x006C5D40  ObjectClass::WinMain_Helper_6C5D40  this=?$TClassFactory@VNeuronClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5D40(ObjectClass *this)
{
  this->? = 0; /*0x6c5d42*/
  this->AbstractClass = &TClassFactory<NeuronClass>::`vftable'; /*0x6c5d49*/
  return &this->AbstractClass; /*0x6c5d4f*/
}



// ==== 0x006C5D50  _TClassFactory_VNeuronClass::CreateTClassFactory_NeuronClass  this=?$TClassFactory@VNeuronClass@@  sig=csp ====
int __thiscall CreateTClassFactory_NeuronClass(_TClassFactory_VNeuronClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5d57*/
    return -2147467261; /*0x6c5d59*/
  *v4 = 0; /*0x6c5d76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5d92*/
    *v4 = a2; /*0x6c5d96*/
  if ( !*v4 ) /*0x6c5d98*/
    return -2147467262; /*0x6c5da0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c5dac*/
  return 0; /*0x6c5d5e*/
}



// ==== 0x006C5DC0  _TClassFactory_VNeuronClass::AddRef  this=?$TClassFactory@VNeuronClass@@  sig=csp ====
LONG __thiscall TClassFactory_NeuronClass::AddRef(_TClassFactory_VNeuronClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5dce*/
}



// ==== 0x006C5DE0  _TClassFactory_VNeuronClass::GetClassName  this=?$TClassFactory@VNeuronClass@@  sig=csp ====
LONG __thiscall TClassFactory_NeuronClass::GetClassName(_TClassFactory_VNeuronClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5df0*/
  if ( !v1 ) /*0x6c5df4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5df7*/
  return v1; /*0x6c5e01*/
}



// ==== 0x006C5E10  _TClassFactory_VNeuronClass::ddtor  this=?$TClassFactory@VNeuronClass@@  sig=csp ====
int __thiscall TClassFactory_NeuronClass::ddtor(_TClassFactory_VNeuronClass *this, int a2, int a3, _DWORD *a4)
{
  NeuronClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5e18*/
    return -2147024809; /*0x6c5e1b*/
  *v9 = 0; /*0x6c5e28*/
  if ( a3 ) /*0x6c5e30*/
    return -2147221232; /*0x6c5e33*/
  v5 = (NeuronClass *)__2_YAPAXI_Z(0x38u); /*0x6c5e3e*/
  if ( !v5 ) /*0x6c5e48*/
    return -2147024882; /*0x6c5e48*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))NeuronClass::NeuronClass(v5); /*0x6c5e4c*/
  v7 = v6; /*0x6c5e51*/
  if ( !v6 ) /*0x6c5e55*/
    return -2147024882; /*0x6c5e58*/
  v8 = (**v6)(v6, a4, v9); /*0x6c5e6c*/
  if ( v8 < 0 ) /*0x6c5e70*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c5e78*/
  return v8; /*0x6c5e1a*/
}



// ==== 0x006C5E90  _TClassFactory_VNeuronClass::GetSize  this=?$TClassFactory@VNeuronClass@@  sig=csp ====
int __thiscall TClassFactory_NeuronClass::GetSize(_TClassFactory_VNeuronClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c5e9a*/
  if ( v5 ) /*0x6c5e9d*/
    v3 = v2 + 1; /*0x6c5e9f*/
  else
    v3 = v2 - 1; /*0x6c5ea8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c5ea0*/
  return 0; /*0x6c5ea5*/
}



// ==== 0x006C5EC0  ObjectClass::WinMain_Helper_6C5EC0  this=?$TClassFactory@VFoggedObjectClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5EC0(ObjectClass *this)
{
  this->? = 0; /*0x6c5ec2*/
  this->AbstractClass = &TClassFactory<FoggedObjectClass>::`vftable'; /*0x6c5ec9*/
  return &this->AbstractClass; /*0x6c5ecf*/
}



// ==== 0x006C5ED0  _TClassFactory_VFoggedObjectClass::CreateTClassFactory_FoggedObjectClass  this=?$TClassFactory@VFoggedObjectClass@@  sig=csp ====
int __thiscall CreateTClassFactory_FoggedObjectClass(
        _TClassFactory_VFoggedObjectClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5ed7*/
    return -2147467261; /*0x6c5ed9*/
  *v4 = 0; /*0x6c5ef6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5f12*/
    *v4 = a2; /*0x6c5f16*/
  if ( !*v4 ) /*0x6c5f18*/
    return -2147467262; /*0x6c5f20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c5f2c*/
  return 0; /*0x6c5ede*/
}



// ==== 0x006C5F40  _TClassFactory_VFoggedObjectClass::AddRef  this=?$TClassFactory@VFoggedObjectClass@@  sig=csp ====
LONG __thiscall TClassFactory_FoggedObjectClass::AddRef(_TClassFactory_VFoggedObjectClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5f4e*/
}



// ==== 0x006C5F60  _TClassFactory_VFoggedObjectClass::GetClassName  this=?$TClassFactory@VFoggedObjectClass@@  sig=csp ====
LONG __thiscall TClassFactory_FoggedObjectClass::GetClassName(_TClassFactory_VFoggedObjectClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5f70*/
  if ( !v1 ) /*0x6c5f74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5f77*/
  return v1; /*0x6c5f81*/
}



// ==== 0x006C5F90  _TClassFactory_VFoggedObjectClass::ddtor  this=?$TClassFactory@VFoggedObjectClass@@  sig=csp ====
int __thiscall TClassFactory_FoggedObjectClass::ddtor(
        _TClassFactory_VFoggedObjectClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  ObjectClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5f98*/
    return -2147024809; /*0x6c5f9b*/
  *v9 = 0; /*0x6c5fa8*/
  if ( a3 ) /*0x6c5fb0*/
    return -2147221232; /*0x6c5fb3*/
  v5 = (ObjectClass *)__2_YAPAXI_Z(0x78u); /*0x6c5fbe*/
  if ( !v5 ) /*0x6c5fc8*/
    return -2147024882; /*0x6c5fc8*/
  v6 = ObjectClass::Construct(v5); /*0x6c5fcc*/
  v7 = v6; /*0x6c5fd1*/
  if ( !v6 ) /*0x6c5fd5*/
    return -2147024882; /*0x6c5fd8*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c5fec*/
  if ( v8 < 0 ) /*0x6c5ff0*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c5ff8*/
  return v8; /*0x6c5f9a*/
}



// ==== 0x006C6010  _TClassFactory_VFoggedObjectClass::GetSize  this=?$TClassFactory@VFoggedObjectClass@@  sig=csp ====
int __thiscall TClassFactory_FoggedObjectClass::GetSize(_TClassFactory_VFoggedObjectClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c601a*/
  if ( v5 ) /*0x6c601d*/
    v3 = v2 + 1; /*0x6c601f*/
  else
    v3 = v2 - 1; /*0x6c6028*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c6020*/
  return 0; /*0x6c6025*/
}



// ==== 0x006C6040  ObjectClass::WinMain_Helper_6C6040  this=?$TClassFactory@VAlphaShapeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C6040(ObjectClass *this)
{
  this->? = 0; /*0x6c6042*/
  this->AbstractClass = &TClassFactory<AlphaShapeClass>::`vftable'; /*0x6c6049*/
  return &this->AbstractClass; /*0x6c604f*/
}



// ==== 0x006C6050  _TClassFactory_VAlphaShapeClass::CreateTClassFactory_AlphaShapeClass  this=?$TClassFactory@VAlphaShapeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AlphaShapeClass(_TClassFactory_VAlphaShapeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c6057*/
    return -2147467261; /*0x6c6059*/
  *v4 = 0; /*0x6c6076*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c6092*/
    *v4 = a2; /*0x6c6096*/
  if ( !*v4 ) /*0x6c6098*/
    return -2147467262; /*0x6c60a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c60ac*/
  return 0; /*0x6c605e*/
}



// ==== 0x006C60C0  _TClassFactory_VAlphaShapeClass::AddRef  this=?$TClassFactory@VAlphaShapeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AlphaShapeClass::AddRef(_TClassFactory_VAlphaShapeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c60ce*/
}



// ==== 0x006C60E0  _TClassFactory_VAlphaShapeClass::GetClassName  this=?$TClassFactory@VAlphaShapeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AlphaShapeClass::GetClassName(_TClassFactory_VAlphaShapeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c60f0*/
  if ( !v1 ) /*0x6c60f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c60f7*/
  return v1; /*0x6c6101*/
}



// ==== 0x006C6110  _TClassFactory_VAlphaShapeClass::ddtor  this=?$TClassFactory@VAlphaShapeClass@@  sig=csp ====
int __thiscall TClassFactory_AlphaShapeClass::ddtor(_TClassFactory_VAlphaShapeClass *this, int a2, int a3, _DWORD *a4)
{
  AlphaShapeClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c6118*/
    return -2147024809; /*0x6c611b*/
  *v9 = 0; /*0x6c6128*/
  if ( a3 ) /*0x6c6130*/
    return -2147221232; /*0x6c6133*/
  v5 = (AlphaShapeClass *)__2_YAPAXI_Z(0x40u); /*0x6c613e*/
  if ( !v5 ) /*0x6c6148*/
    return -2147024882; /*0x6c6148*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))AlphaShapeClass::Constructor(v5); /*0x6c614c*/
  v7 = v6; /*0x6c6151*/
  if ( !v6 ) /*0x6c6155*/
    return -2147024882; /*0x6c6158*/
  v8 = (**v6)(v6, a4, v9); /*0x6c616c*/
  if ( v8 < 0 ) /*0x6c6170*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c6178*/
  return v8; /*0x6c611a*/
}



// ==== 0x006C6190  _TClassFactory_VAlphaShapeClass::GetSize  this=?$TClassFactory@VAlphaShapeClass@@  sig=csp ====
int __thiscall TClassFactory_AlphaShapeClass::GetSize(_TClassFactory_VAlphaShapeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c619a*/
  if ( v5 ) /*0x6c619d*/
    v3 = v2 + 1; /*0x6c619f*/
  else
    v3 = v2 - 1; /*0x6c61a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c61a0*/
  return 0; /*0x6c61a5*/
}



// ==== 0x006C61C0  ObjectClass::COM_SafeRelease  this=ObjectClass  sig=csp ====
int __thiscall COM_SafeRelease(ObjectClass *this)
{
  int result; // eax

  result = (int)this->AbstractClass; /*0x6c61c0*/
  if ( this->AbstractClass ) /*0x6c61c0*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x6c61c9*/
  return result; /*0x6c61cc*/
}



// ==== 0x006C61D0  _VectorClass_K::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_K::AddRef(_VectorClass_K *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x6c61d2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6c61dd*/
  {
    v3 = 0; /*0x6c61df*/
    if ( m_8 <= 0 ) /*0x6c61e3*/
      return 1; /*0x6c6203*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6c61e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6c61eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6c61f4*/
    {
      ++v3; /*0x6c61f6*/
      ++v4; /*0x6c61f7*/
      if ( v3 >= m_8 ) /*0x6c61fc*/
        return 1; /*0x6c61fc*/
    }
  }
  return 0; /*0x6c61fe*/
}



// ==== 0x006C6210  _VectorClass_K::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_K::Release(_VectorClass_K *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6c621c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6c6226*/
    if ( a3 ) /*0x6c622c*/
      v4 = a3; /*0x6c6242*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6c623e*/
    LOBYTE(this->m_C) = 1; /*0x6c6246*/
    if ( v4 ) /*0x6c624a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6c6255*/
      {
        m_8 = this->m_8; /*0x6c625c*/
        if ( a2 < m_8 ) /*0x6c6261*/
          m_8 = a2; /*0x6c6263*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6c6269*/
          ++i; /*0x6c626e*/
        if ( BYTE1(this->m_C) ) /*0x6c627b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6c6286*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6c628e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6c6297*/
      this->m_8 = a2; /*0x6c629f*/
      BYTE1(this->m_C) = a3 == 0; /*0x6c62a2*/
      return 1; /*0x6c62a8*/
    }
    else
    {
      return 0; /*0x6c624f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_K *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6c62b2*/
    return 1; /*0x6c62b8*/
  }
}



// ==== 0x006C62C0  _VectorClass_K::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_K::ddtor(_VectorClass_K *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6c62cd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6c62d3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6c62db*/
  }
  BYTE1(this->m_C) = 0; /*0x6c62de*/
  this->m_8 = 0; /*0x6c62e1*/
}



// ==== 0x006C62F0  _VectorClass_K::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_K::GetSize(_VectorClass_K *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6c62f0*/
    return 0; /*0x6c62f8*/
  m_8 = this->m_8; /*0x6c62fe*/
  result = 0; /*0x6c6301*/
  if ( m_8 <= 0 ) /*0x6c6305*/
    return -1; /*0x6c631c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6c630b*/
  {
    if ( ++result >= m_8 ) /*0x6c631a*/
      return -1; /*0x6c631a*/
  }
  return result; /*0x6c62fa*/
}



// ==== 0x006C6330  _VectorClass_K::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_K::GetCapacity(_VectorClass_K *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6c6330*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6c6345*/
  else
    return 0; /*0x6c6337*/
}



// ==== 0x006C6350  _DynamicVectorClass_K::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_K::SetCapacity(_DynamicVectorClass_K *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6c635c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6c6362*/
    if ( a3 ) /*0x6c6368*/
      v4 = a3; /*0x6c637e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6c637a*/
    LOBYTE(this->m_C) = 1; /*0x6c6382*/
    if ( !v4 ) /*0x6c6386*/
      return 0; /*0x6c63fa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6c6388*/
    {
      m_8 = this->m_8; /*0x6c638f*/
      if ( a2 < m_8 ) /*0x6c6394*/
        m_8 = a2; /*0x6c6396*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6c639c*/
        ++i; /*0x6c63a1*/
      if ( BYTE1(this->m_C) ) /*0x6c63ae*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6c63b9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6c63c1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x6c63ca*/
    this->m_8 = a2; /*0x6c63d2*/
    BYTE1(this->m_C) = a3 == 0; /*0x6c63d5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_K *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6c63de*/
  }
  v7 = this->m_8; /*0x6c63e1*/
  if ( v7 < this->m_10 ) /*0x6c63e9*/
    this->m_10 = v7; /*0x6c63eb*/
  return 1; /*0x6c63ee*/
}



// ==== 0x006C6400  DynamicVector::Add  this=DynamicVector  sig=csp ====
char __thiscall DynamicVector::Add(DynamicVector *this, _DWORD *a2)
{
  int DynamicVector_field_0x8; // ecx
  int v4; // eax
  void *DynamicVector_field_0x10; // eax
  int v7; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x6c6403*/
  if ( (int)this->DynamicVector_field_0x10 >= DynamicVector_field_0x8 ) /*0x6c640b*/
  {
    if ( !this->__pad_C[1] && DynamicVector_field_0x8 ) /*0x6c6416*/
      return 0; /*0x6c6416*/
    v4 = *(_DWORD *)this->__pad_14; /*0x6c6418*/
    if ( v4 <= 0 /*0x6c6428*/
      || !(*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
            this,
            DynamicVector_field_0x8 + v4,
            0) )
    {
      return 0; /*0x6c642f*/
    }
  }
  DynamicVector_field_0x10 = this->DynamicVector_field_0x10; /*0x6c6435*/
  v7 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x6c6438*/
  this->DynamicVector_field_0x10 = (char *)DynamicVector_field_0x10 + 1; /*0x6c643e*/
  *(_DWORD *)(v7 + 4 * (_DWORD)DynamicVector_field_0x10) = *a2; /*0x6c6448*/
  return 1; /*0x6c6431*/
}



// ==== 0x006C6450  _DynamicVectorClass_K::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_K::FindItemIndex(_DynamicVectorClass_K *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6c6450*/
  result = 0; /*0x6c6453*/
  if ( m_10 <= 0 ) /*0x6c6458*/
    return -1; /*0x6c646f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6c645e*/
  {
    if ( ++result >= m_10 ) /*0x6c646d*/
      return -1; /*0x6c646d*/
  }
  return result; /*0x6c6472*/
}



// ==== 0x006C6480  _VectorClass_K::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_K::QueryInterface(_VectorClass_K *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6c6483*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned long>::`vftable'; /*0x6c6486*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6c6490*/
  {
    __3_YAXPAX_Z(v3); /*0x6c6498*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6c64a0*/
  }
  BYTE1(this->m_C) = 0; /*0x6c64ab*/
  this->m_8 = 0; /*0x6c64b1*/
  if ( (a2 & 1) != 0 ) /*0x6c64b8*/
    __3_YAXPAX_Z(this); /*0x6c64bb*/
  return this->__pad_0; /*0x6c64c5*/
}



// ==== 0x006C64D0  _DynamicVectorClass_K::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_K::Constructor(_DynamicVectorClass_K *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6c64d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned long>::`vftable'; /*0x6c64d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6c64e0*/
  {
    __3_YAXPAX_Z(v3); /*0x6c64e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6c64f0*/
  }
  BYTE1(this->m_C) = 0; /*0x6c64fb*/
  this->m_8 = 0; /*0x6c6501*/
  if ( (a2 & 1) != 0 ) /*0x6c6508*/
    __3_YAXPAX_Z(this); /*0x6c650b*/
  return this->__pad_0; /*0x6c6515*/
}



// ==== 0x006C6520  sub_6C6520  this=-  sig=ida-proto ====
int sub_6C6520()
{
  dword_B0BCF8 = 0; /*0x6c6522*/
  dword_B0BCFC = 0; /*0x6c6527*/
  dword_B0BD00 = 0; /*0x6c652c*/
  dword_B0BD04 = 0; /*0x6c6531*/
  return 0; /*0x6c6536*/
}



// ==== 0x006C6540  StaticButtonClass::method_6C6540  this=StaticButtonClass  sig=csp ====
_DWORD *__thiscall sub_6C6540(StaticButtonClass *this, int a2, wchar_t *String, int a4, int a5, int a6, int a7, int a8)
{
  int Instance; // ebx

  GadgetClass::Construct((ShpButtonClass *)this, a5, a6, a7, a8, 0, 0); /*0x6c6560*/
  Buffer::Init((Buffer *)((char *)this + 36), 0, 0); /*0x6c656c*/
  this->q00C = 0; /*0x6c657e*/
  *((_DWORD *)this + 13) = a4; /*0x6c6585*/
  *(_DWORD *)this->__pad_0 = &StaticButtonClass::`vftable'; /*0x6c6588*/
  StaticButtonClass::Draw(this, String, 0); /*0x6c658e*/
  if ( a7 == -1 || a8 == -1 ) /*0x6c659b*/
  {
    Instance = TextRenderer::GetInstance(); /*0x6c65a8*/
    if ( a7 == -1 ) /*0x6c65aa*/
      this->StaticButtonClass_field_0x14 = Text::MeasureWidth(this->q00C, 0); /*0x6c65b9*/
    if ( a8 == -1 ) /*0x6c65bf*/
      *((_DWORD *)this + 6) = *(_DWORD *)(Instance + 28); /*0x6c65c4*/
  }
  return this->__pad_0; /*0x6c65c9*/
}



// ==== 0x006C6640  StaticButtonClass::SetText  this=StaticButtonClass  sig=csp ====
int __thiscall StaticButtonClass::SetText(StaticButtonClass *this, int a2)
{
  if ( !GadgetClass::ClearState((GadgetClass *)this, a2) ) /*0x6c6648*/
    return 0; /*0x6c6672*/
  (*(void (__thiscall **)(StaticButtonClass *))(*(_DWORD *)this->__pad_0 + 136))(this); /*0x6c6655*/
  (*(void (__thiscall **)(StaticButtonClass *, _DWORD))(*(_DWORD *)this->__pad_0 + 140))(this, this->q00C); /*0x6c6663*/
  return 1; /*0x6c666e*/
}



// ==== 0x006C6680  StaticButtonClass::Draw  this=StaticButtonClass  sig=csp ====
void __thiscall StaticButtonClass::Draw(StaticButtonClass *this, wchar_t *String, char a3)
{
  int v4; // eax
  wchar_t *v5; // eax
  int Instance; // edi
  _DWORD *v7; // eax
  int v8[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( this->q00C ) /*0x6c6687*/
  {
    __3_YAXPAX_Z(*((void **)this + 12)); /*0x6c668f*/
    this->q00C = 0; /*0x6c6697*/
  }
  if ( String ) /*0x6c66a4*/
  {
    v4 = wcslen(String); /*0x6c66a7*/
    v5 = (wchar_t *)__2_YAPAXI_Z(2 * v4 + 2); /*0x6c66b1*/
    this->q00C = v5; /*0x6c66b9*/
    if ( v5 ) /*0x6c66be*/
      wcscpy(v5, String); /*0x6c66c2*/
  }
  (*(void (__thiscall **)(StaticButtonClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x6c66ce*/
  if ( a3 ) /*0x6c66d7*/
  {
    if ( this->q00C ) /*0x6c66d9*/
    {
      (*(void (__thiscall **)(StaticButtonClass *))(*(_DWORD *)this->__pad_0 + 136))(this); /*0x6c66e4*/
      Instance = TextRenderer::GetInstance(); /*0x6c66f5*/
      this->StaticButtonClass_field_0x14 = Text::MeasureWidth(this->q00C, 0); /*0x6c6701*/
      *((_DWORD *)this + 6) = *(_DWORD *)(Instance + 28); /*0x6c670f*/
      v7 = Buffer::Init((Buffer *)v8, 0, 0); /*0x6c6712*/
      StaticButtonClass::ReleaseBuffer((int)this + 36, v7); /*0x6c671b*/
      Vector::Clear((int)v8); /*0x6c6724*/
    }
  }
}



// ==== 0x006C6740  StaticButtonClass::HitTest  this=StaticButtonClass  sig=csp ====
char __thiscall StaticButtonClass::HitTest(StaticButtonClass *this)
{
  INIClass *v2; // edi
  int StaticButtonClass_field_0x14; // eax
  int v4; // eax
  int StaticButtonClass_field_0x10; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int StaticButtonClass_field_0x0C; // [esp+8h] [ebp-10h] BYREF
  int v13; // [esp+Ch] [ebp-Ch]
  int v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  v2 = (INIClass *)((char *)this + 36); /*0x6c674a*/
  if ( *((_DWORD *)this + 9) ) /*0x6c6747*/
    goto LABEL_9; /*0x6c674f*/
  StaticButtonClass_field_0x14 = this->StaticButtonClass_field_0x14; /*0x6c6751*/
  if ( StaticButtonClass_field_0x14 > 0 ) /*0x6c6756*/
  {
    StaticButtonClass_field_0x14 = *((_DWORD *)this + 6); /*0x6c6758*/
    if ( StaticButtonClass_field_0x14 > 0 ) /*0x6c675d*/
    {
      if ( this != (StaticButtonClass *)-36 ) /*0x6c6761*/
      {
        v4 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 112))(g_DSurface_Hidden_2); /*0x6c676b*/
        LOBYTE(StaticButtonClass_field_0x14) = (unsigned __int8)INIClass::loadFile( /*0x6c6779*/
                                                                  v2,
                                                                  this->StaticButtonClass_field_0x14
                                                                * *((_DWORD *)this + 6)
                                                                * v4);
      }
      if ( !*(_DWORD *)v2->__pad_0 ) /*0x6c6781*/
        return StaticButtonClass_field_0x14; /*0x6c6781*/
      StaticButtonClass_field_0x10 = this->StaticButtonClass_field_0x10; /*0x6c6786*/
      v6 = this->StaticButtonClass_field_0x14; /*0x6c6789*/
      StaticButtonClass_field_0x0C = this->StaticButtonClass_field_0x0C; /*0x6c678c*/
      v7 = *((_DWORD *)this + 6); /*0x6c6790*/
      v13 = StaticButtonClass_field_0x10; /*0x6c6793*/
      v15 = v7; /*0x6c6797*/
      v14 = v6; /*0x6c67a6*/
      LOBYTE(StaticButtonClass_field_0x14) = Helper::ProcessData( /*0x6c67aa*/
                                               (void **)g_DSurface_Hidden_2,
                                               (int)&StaticButtonClass_field_0x0C,
                                               (int *)v2->__pad_0);
    }
  }
  if ( *(_DWORD *)v2->__pad_0 ) /*0x6c67af*/
  {
LABEL_9:
    v8 = this->StaticButtonClass_field_0x14; /*0x6c67b4*/
    v9 = this->StaticButtonClass_field_0x10; /*0x6c67ba*/
    StaticButtonClass_field_0x0C = this->StaticButtonClass_field_0x0C; /*0x6c67bd*/
    v10 = *((_DWORD *)this + 6); /*0x6c67c1*/
    v14 = v8; /*0x6c67c4*/
    v15 = v10; /*0x6c67ce*/
    v13 = v9; /*0x6c67d7*/
    LOBYTE(StaticButtonClass_field_0x14) = sub_437290( /*0x6c67db*/
                                             (int *)g_DSurface_Hidden_2->__pad_0,
                                             (int)&StaticButtonClass_field_0x0C,
                                             (int *)v2->__pad_0);
  }
  return StaticButtonClass_field_0x14; /*0x6c67e0*/
}



// ==== 0x006C67F0  StaticButtonClass::OnClick  this=StaticButtonClass  sig=csp ====
int *__thiscall StaticButtonClass::OnClick(StaticButtonClass *this, size_t a2)
{
  int *result; // eax
  int v4; // ecx
  int StaticButtonClass_field_0x0C; // edi
  int Type; // eax
  int StaticButtonClass_field_0x10; // edx
  _DWORD *v8; // eax
  int v9; // [esp-10h] [ebp-34h]
  int v10; // [esp-8h] [ebp-2Ch]
  _DWORD v11[2]; // [esp+4h] [ebp-20h] BYREF
  int v12; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v13[16]; // [esp+14h] [ebp-10h] BYREF

  result = (int *)this->q00C; /*0x6c67f6*/
  if ( result ) /*0x6c67fb*/
  {
    v4 = *((_DWORD *)this + 13); /*0x6c67fd*/
    StaticButtonClass_field_0x0C = this->StaticButtonClass_field_0x0C; /*0x6c6801*/
    if ( (v4 & 0x100) != 0 ) /*0x6c6807*/
      StaticButtonClass_field_0x0C += this->StaticButtonClass_field_0x14 / 2; /*0x6c6811*/
    if ( (v4 & 0x200) != 0 ) /*0x6c6816*/
      StaticButtonClass_field_0x0C = StaticButtonClass_field_0x0C + this->StaticButtonClass_field_0x14 - 1; /*0x6c681b*/
    Type = BuildingAnim::GetType(); /*0x6c681f*/
    StaticButtonClass_field_0x10 = this->StaticButtonClass_field_0x10; /*0x6c682a*/
    v11[0] = StaticButtonClass_field_0x0C; /*0x6c682d*/
    v11[1] = StaticButtonClass_field_0x10; /*0x6c6831*/
    v10 = *((_DWORD *)this + 13); /*0x6c6842*/
    v9 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * Type); /*0x6c684b*/
    v8 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x6c6854*/
                     g_DSurface_Hidden_2,
                     v13);
    return TextRenderer::DrawText(&v12, a2, (int)g_DSurface_Hidden_2, v8, (int)v11, v9, 0, v10); /*0x6c6869*/
  }
  return result; /*0x6c6872*/
}



// ==== 0x006C6880  StaticButtonClass::QueryInterface  this=StaticButtonClass  sig=csp ====
_DWORD *__thiscall StaticButtonClass::QueryInterface(StaticButtonClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->q00C; /*0x6c6883*/
  *(_DWORD *)this->__pad_0 = &StaticButtonClass::`vftable'; /*0x6c6886*/
  if ( v3 ) /*0x6c688e*/
    __3_YAXPAX_Z(v3); /*0x6c6891*/
  Vector::Clear((int)this + 36); /*0x6c689c*/
  GadgetClass::Dtor((ShpButtonClass *)this); /*0x6c68a3*/
  if ( (a2 & 1) != 0 ) /*0x6c68ad*/
    __3_YAXPAX_Z(this); /*0x6c68b0*/
  return this->__pad_0; /*0x6c68ba*/
}



// ==== 0x006C68C0  sub_6C68C0  this=-  sig=ida-proto ====
void sub_6C68C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6c68cc*/
  dbl_B0BD30 = Math::Sqrt(v0 + v0); /*0x6c68de*/
}



// ==== 0x006C68F0  sub_6C68F0  this=-  sig=ida-proto ====
void sub_6C68F0()
{
  dbl_B0BDA8 = dbl_B0BD30 / 60.0; /*0x6c68fc*/
}



// ==== 0x006C6910  sub_6C6910  this=-  sig=ida-proto ====
void sub_6C6910()
{
  dbl_B0BD88 = 1.0 / dbl_B0BDA8; /*0x6c691c*/
}



// ==== 0x006C6930  sub_6C6930  this=-  sig=ida-proto ====
void sub_6C6930()
{
  dbl_B0BD80 = 0.0174532925199433 * 45.0; /*0x6c693c*/
}



// ==== 0x006C6950  sub_6C6950  this=-  sig=ida-proto ====
void sub_6C6950()
{
  dbl_B0BD38 = 0.0174532925199433 * 60.0; /*0x6c695c*/
}



// ==== 0x006C6970  sub_6C6970  this=-  sig=ida-proto ====
void sub_6C6970()
{
  dbl_B0BD08 = 0.0174532925199433 * 90.0; /*0x6c697c*/
}



// ==== 0x006C6990  sub_6C6990  this=-  sig=ida-proto ====
__int64 sub_6C6990()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0BD08 - dbl_B0BD38); /*0x6c69a2*/
  result = Math::RoundToInt(v0 * dbl_B0BD30 * 0.5); /*0x6c69b6*/
  dword_B0BDB0 = result; /*0x6c69bb*/
  return result; /*0x6c69c0*/
}



// ==== 0x006C69D0  sub_6C69D0  this=-  sig=ida-proto ====
void sub_6C69D0()
{
  dbl_B0BD40 = Math::ArcTan((double)dword_B0BDB0 * 0.00390625); /*0x6c69e7*/
}



// ==== 0x006C6A00  sub_6C6A00  this=-  sig=ida-proto ====
void sub_6C6A00()
{
  dbl_B0BD70 = Math::ArcTan((double)(2 * dword_B0BDB0) / dbl_B0BD30); /*0x6c6a22*/
}



// ==== 0x006C6A30  sub_6C6A30  this=-  sig=ida-proto ====
__int64 sub_6C6A30()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0BDB0) + 0.5); /*0x6c6a4b*/
  dword_B0BDA4 = result; /*0x6c6a50*/
  return result; /*0x6c6a56*/
}



// ==== 0x006C6A60  sub_6C6A60  this=-  sig=ida-proto ====
int sub_6C6A60()
{
  word_B0BD20 = 0; /*0x6c6a62*/
  word_B0BD22 = 0; /*0x6c6a68*/
  return 0; /*0x6c6a6e*/
}



// ==== 0x006C6A70  sub_6C6A70  this=-  sig=ida-proto ====
int sub_6C6A70()
{
  dword_B0BD60 = 0; /*0x6c6a72*/
  dword_B0BD64 = 0; /*0x6c6a77*/
  dword_B0BD68 = 0; /*0x6c6a7c*/
  return 0; /*0x6c6a81*/
}



// ==== 0x006C6A90  sub_6C6A90  this=-  sig=ida-proto ====
int sub_6C6A90()
{
  dword_B0BDA0 = 0; /*0x6c6a95*/
  dword_B0BD98 = 128; /*0x6c6a9f*/
  dword_B0BD9C = 128; /*0x6c6aa4*/
  return 128; /*0x6c6aa9*/
}



// ==== 0x006C6AB0  sub_6C6AB0  this=-  sig=ida-proto ====
int sub_6C6AB0()
{
  dword_B0BD10 = 0; /*0x6c6ab2*/
  dword_B0BD14 = 0; /*0x6c6ab7*/
  dword_B0BD18 = 0; /*0x6c6abc*/
  dword_B0BD1C = 0; /*0x6c6ac1*/
  return 0; /*0x6c6ac6*/
}



// ==== 0x006C6AD0  sub_6C6AD0  this=-  sig=ida-proto ====
int sub_6C6AD0()
{
  dword_B0BD28 = Timer::GetTicks(); /*0x6c6adf*/
  return atexit(nullsub_234); /*0x6c6aea*/
}



// ==== 0x006C6AF0  nullsub_234  this=-  sig=ida-proto ====
void __cdecl nullsub_234()
{
  ; /*0x6c6af0*/
}



// ==== 0x006C6B00  ObjectClass::Audio_Read_6C6B00  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Audio_Read_6C6B00(ObjectClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  signed int v3; // ecx

  result = &this->AbstractClass; /*0x6c6b04*/
  this->AbstractClass = (void *)*a2; /*0x6c6b08*/
  v3 = a2[1]; /*0x6c6b0a*/
  result[1] = v3; /*0x6c6b13*/
  if ( v3 <= 0x8000 ) /*0x6c6b16*/
    qmemcpy(result + 2, a2 + 2, v3); /*0x6c6b2f*/
  else
    result[1] = 0; /*0x6c6b18*/
  return result; /*0x6c6b1f*/
}



// ==== 0x006C6B40  sub_6C6B40  this=-  sig=ida-proto ====
int sub_6C6B40()
{
  g_SidebarButtonState = 0; /*0x6c6b47*/
  dword_B0BD54 = 0; /*0x6c6b4c*/
  dword_B0BD58 = 0; /*0x6c6b51*/
  return atexit(sub_6C6B60); /*0x6c6b5c*/
}



// ==== 0x006C6B60  sub_6C6B60  this=-  sig=ida-proto ====
void __cdecl sub_6C6B60()
{
  g_SidebarButtonState = 0; /*0x6c6b65*/
  __3_YAXPAX_Z(dword_B0BD58); /*0x6c6b70*/
}



// ==== 0x006C6D00  ObjectClass::Audio_Read_6C6D00  this=ObjectClass  sig=csp ====
void Audio_Read_6C6D00(ObjectClass *this)
{
  char *v1; // ecx
  int v2; // ebx
  char *v3; // eax
  char *ptr_8; // esi
  void *v5; // ebp
  char v6; // dl
  unsigned int v7; // ecx

  v1 = 0; /*0x6c6d08*/
  if ( g_SidebarButtonState.AbstractClass ) /*0x6c6d0c*/
  {
    if ( (int)g_SidebarButtonState.AbstractClass <= 0 ) /*0x6c6d12*/
      v1 = (char *)g_SidebarButtonState.AbstractClass - 1; /*0x6c6d14*/
    memcpy( /*0x6c6d45*/
      (char *)g_SidebarButtonState.? + 32776 * (_DWORD)v1,
      (char *)g_SidebarButtonState.? + 32776 * (_DWORD)(v1 + 1),
      32776 * (int)g_SidebarButtonState.AbstractClass - 32776 * (_DWORD)(v1 + 1));
    if ( 3 * (int)--g_SidebarButtonState.AbstractClass <= (int)g_SidebarButtonState.? ) /*0x6c6d63*/
    {
      v2 = (int)g_SidebarButtonState.? / 2; /*0x6c6d6c*/
      if ( (int)g_SidebarButtonState.? / 2 < 10 ) /*0x6c6d71*/
        v2 = 10; /*0x6c6d73*/
      if ( v2 < (int)g_SidebarButtonState.? ) /*0x6c6d7a*/
      {
        v3 = (char *)__2_YAPAXI_Z(32776 * v2); /*0x6c6d88*/
        ptr_8 = (char *)g_SidebarButtonState.?; /*0x6c6d8d*/
        v5 = v3; /*0x6c6d98*/
        if ( g_SidebarButtonState.? ) /*0x6c6d9a*/
        {
          v6 = 8 * LOBYTE(g_SidebarButtonState.AbstractClass); /*0x6c6dae*/
          v7 = (unsigned int)(32776 * (int)g_SidebarButtonState.AbstractClass) >> 2; /*0x6c6db0*/
          qmemcpy(v3, g_SidebarButtonState.?, 4 * v7); /*0x6c6db3*/
          qmemcpy(&v3[4 * v7], &ptr_8[4 * v7], v6 & 3); /*0x6c6dba*/
          ptr_8 = (char *)g_SidebarButtonState.?; /*0x6c6dbc*/
        }
        __3_YAXPAX_Z(ptr_8); /*0x6c6dc4*/
        g_SidebarButtonState.? = v5; /*0x6c6dcc*/
        g_SidebarButtonState.? = (void *)v2; /*0x6c6dd2*/
      }
    }
  }
}



// ==== 0x006C6DE0  ObjectClass::Audio_Read_6C6DE0  this=ObjectClass  sig=csp ====
void Audio_Read_6C6DE0(ObjectClass *this)
{
  int ptr_0; // edx
  char *ptr_8; // ebx
  int v3; // ecx
  char *v4; // eax
  char *v5; // edi
  _BYTE v6[32776]; // [esp+14h] [ebp-8008h] BYREF

  ptr_0 = (int)g_SidebarButtonState.AbstractClass; /*0x6c6dea*/
  *(_DWORD *)v6 = 0; /*0x6c6df8*/
  *(_DWORD *)&v6[4] = 0; /*0x6c6dfc*/
  if ( g_SidebarButtonState.AbstractClass ) /*0x6c6e00*/
  {
    if ( (int)g_SidebarButtonState.AbstractClass > 0 ) /*0x6c6e06*/
    {
      Audio_Read_6C6B00((ObjectClass *)v6, (_DWORD *)g_SidebarButtonState.?); /*0x6c6e12*/
      ptr_0 = (int)g_SidebarButtonState.AbstractClass; /*0x6c6e17*/
    }
LABEL_4:
    ptr_8 = (char *)g_SidebarButtonState.?; /*0x6c6e1d*/
    while ( *(int *)&v6[4] < 1 || *(int *)v6 > 10 ) /*0x6c6e31*/
    {
      v3 = 0; /*0x6c6e37*/
      if ( !ptr_0 ) /*0x6c6e3b*/
        return; /*0x6c6e3b*/
      if ( ptr_0 <= 0 ) /*0x6c6e41*/
        v3 = ptr_0 - 1; /*0x6c6e43*/
      memcpy(&ptr_8[32776 * v3], &ptr_8[32776 * v3 + 32776], 32776 * ptr_0 - 32776 * (v3 + 1)); /*0x6c6e6e*/
      ptr_0 = (int)g_SidebarButtonState.AbstractClass - 1; /*0x6c6e81*/
      g_SidebarButtonState.AbstractClass = (void *)ptr_0; /*0x6c6e82*/
      if ( 3 * ptr_0 <= (int)g_SidebarButtonState.? ) /*0x6c6e8d*/
      {
        Audio_Read_6C8870(&g_SidebarButtonState); /*0x6c6e94*/
        ptr_0 = (int)g_SidebarButtonState.AbstractClass; /*0x6c6e99*/
      }
      if ( !ptr_0 ) /*0x6c6ea1*/
        return; /*0x6c6ea1*/
      if ( ptr_0 <= 0 ) /*0x6c6ea7*/
        goto LABEL_4; /*0x6c6ea7*/
      ptr_8 = (char *)g_SidebarButtonState.?; /*0x6c6ead*/
      *(_DWORD *)v6 = *(_DWORD *)g_SidebarButtonState.?; /*0x6c6eb5*/
      *(_DWORD *)&v6[4] = *((_DWORD *)g_SidebarButtonState.? + 1); /*0x6c6ec2*/
      if ( *(int *)&v6[4] <= 0x8000 ) /*0x6c6ec6*/
        qmemcpy(&v6[8], (char *)g_SidebarButtonState.? + 8, *(unsigned int *)&v6[4]); /*0x6c6edd*/
      else
        *(_DWORD *)&v6[4] = 0; /*0x6c6ec8*/
    }
    if ( g_UIPointerTable ) /*0x6c6ef2*/
    {
      (*(void (__stdcall **)(LPVOID, int *, int, _BYTE *, _DWORD))(*(_DWORD *)g_UIPointerTable + 12))( /*0x6c6f09*/
        g_UIPointerTable,
        &g_WOL_UserList.customSound_controller[2],
        dword_B76184,
        &v6[8],
        *(_DWORD *)&v6[4]);
      v4 = 0; /*0x6c6f17*/
      ++*(_DWORD *)v6; /*0x6c6f1b*/
      if ( g_SidebarButtonState.AbstractClass ) /*0x6c6f1f*/
      {
        if ( (int)g_SidebarButtonState.AbstractClass <= 0 ) /*0x6c6f21*/
          v4 = (char *)g_SidebarButtonState.AbstractClass - 1; /*0x6c6f23*/
        v5 = (char *)g_SidebarButtonState.? + 32776 * (_DWORD)v4; /*0x6c6f32*/
        if ( v5 ) /*0x6c6f37*/
          qmemcpy(v5, v6, 0x8008u); /*0x6c6f42*/
      }
    }
  }
}



// ==== 0x006C6F50  ProcessGameResults  this=-  sig=ida-proto ====
void __usercall ProcessGameResults(char a1@<cl>, Performance *a2@<edi>)
{
  char v3; // si
  char *v4; // eax
  char *inited; // eax
  char v6; // si
  char *v7; // eax
  char *v8; // eax
  char v9; // si
  char *v10; // eax
  char *v11; // eax
  char v12; // si
  char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  unsigned int v19; // esi
  char *v20; // eax
  char *v21; // eax
  char v22; // si
  char *v23; // eax
  char *v24; // eax
  char v25; // bl
  char *v26; // eax
  char *v27; // eax
  char v28; // bl
  char *v29; // eax
  char *v30; // eax
  char v31; // si
  char *v32; // eax
  char *v33; // eax
  char v34; // si
  char *v35; // eax
  char *v36; // eax
  char *v37; // eax
  char *v38; // eax
  char v39; // bl
  char *v40; // eax
  char *v41; // eax
  char v42; // si
  char *v43; // eax
  char *v44; // eax
  char v45; // si
  char *v46; // eax
  char *v47; // eax
  char *v48; // eax
  char *v49; // eax
  char... [46280 chars total]



// ==== 0x006C87F0  InitSkirmishSettings  this=-  sig=ida-proto ====
int sub_6C87F0()
{
  int v1; // [esp+4h] [ebp-4h]

  dword_B0BD28 = Timer::GetTicks(); /*0x6c87fc*/
  dword_B0BD2C = v1; /*0x6c8805*/
  byte_B0BDB4 = 1; /*0x6c880a*/
  return v1; /*0x6c8811*/
}



// ==== 0x006C8820  Timer::UpdateDelta  this=Timer  sig=ida-proto ====
int Timer_UpdateDelta()
{
  DWORD Ticks; // eax
  int result; // eax

  Ticks = Timer::GetTicks(); /*0x6c8825*/
  byte_B0BDB4 = 0; /*0x6c8830*/
  result = Ticks - dword_B0BD28; /*0x6c8837*/
  dword_B0BD48 = result; /*0x6c8839*/
  return result; /*0x6c883e*/
}



// ==== 0x006C8840  rc_ptr::sub_6C8840  this=rc_ptr  sig=csp ====
_DWORD *__thiscall sub_6C8840(rc_ptr *this, char a2)
{
  *(_DWORD *)this = &rc_ptr<PlayerProfile>::`vftable'; /*0x6c8843*/
  ComPtr::Release((ComPtr *)this); /*0x6c8849*/
  if ( (a2 & 1) != 0 ) /*0x6c8853*/
    __3_YAXPAX_Z(this); /*0x6c8856*/
  return this; /*0x6c8860*/
}



// ==== 0x006C8870  ObjectClass::Audio_Read_6C8870  this=ObjectClass  sig=csp ====
char __thiscall Audio_Read_6C8870(ObjectClass *this)
{
  void *ptr_0; // eax
  int ptr_4; // ecx
  int v5; // ebx
  void *v6; // eax
  void *ptr_8; // esi
  void *v8; // [esp+8h] [ebp-4h]

  ptr_0 = this->AbstractClass; /*0x6c8875*/
  ptr_4 = (int)this->?; /*0x6c8878*/
  if ( 3 * (int)ptr_0 > ptr_4 ) /*0x6c8880*/
    return 0; /*0x6c8883*/
  v5 = ptr_4 / 2; /*0x6c888f*/
  if ( ptr_4 / 2 < 10 ) /*0x6c8894*/
    v5 = 10; /*0x6c8896*/
  if ( v5 >= ptr_4 ) /*0x6c889d*/
    return 0; /*0x6c88a0*/
  v6 = (void *)__2_YAPAXI_Z(32776 * v5); /*0x6c88b1*/
  ptr_8 = this->?; /*0x6c88b6*/
  v8 = v6; /*0x6c88be*/
  if ( ptr_8 ) /*0x6c88c2*/
    qmemcpy(v6, ptr_8, 32776 * (int)this->AbstractClass); /*0x6c88d9*/
  __3_YAXPAX_Z(this->?); /*0x6c88e7*/
  this->? = v8; /*0x6c88f3*/
  this->? = (void *)v5; /*0x6c88f6*/
  return 1; /*0x6c8882*/
}



// ==== 0x006C8900  ObjectClass::method_6C8900  this=ObjectClass  sig=csp ====
char __thiscall sub_6C8900(ObjectClass *this)
{
  void *ptr_0; // eax
  int v4; // ebp
  void *v5; // edx
  void *ptr_8; // esi
  void *v7; // [esp+4h] [ebp-4h]

  ptr_0 = this->AbstractClass; /*0x6c8904*/
  if ( (int)this->AbstractClass < (int)this->? ) /*0x6c890b*/
    return 0; /*0x6c890d*/
  v4 = 2 * (_DWORD)ptr_0; /*0x6c8913*/
  if ( 2 * (int)ptr_0 < 10 ) /*0x6c891b*/
    v4 = 10; /*0x6c891d*/
  v5 = (void *)__2_YAPAXI_Z(32776 * v4); /*0x6c8932*/
  memset(v5, 0, 4 * ((unsigned int)(32776 * v4) >> 2)); /*0x6c893d*/
  v7 = v5; /*0x6c8947*/
  ptr_8 = this->?; /*0x6c894d*/
  if ( ptr_8 ) /*0x6c8952*/
    qmemcpy(v5, ptr_8, 32776 * (int)this->AbstractClass); /*0x6c8967*/
  __3_YAXPAX_Z(this->?); /*0x6c8974*/
  this->? = (void *)v4; /*0x6c8980*/
  this->? = v7; /*0x6c8983*/
  return 1; /*0x6c890f*/
}



// ==== 0x006C8990  sub_6C8990  this=-  sig=ida-proto ====
int sub_6C8990()
{
  dword_B0BDC0 = 0; /*0x6c8992*/
  dword_B0BDC4 = 0; /*0x6c8997*/
  dword_B0BDC8 = 0; /*0x6c899c*/
  dword_B0BDCC = 0; /*0x6c89a1*/
  return 0; /*0x6c89a6*/
}



// ==== 0x006C89B0  ObjectClass::method_6C89B0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6C89B0(ObjectClass *this, size_t Size)
{
  void *v3; // eax

  this->AbstractClass = (void *)Size; /*0x6c89b8*/
  v3 = (void *)__2_YAPAXI_Z(Size); /*0x6c89ba*/
  this->? = v3; /*0x6c89c2*/
  this->? = v3; /*0x6c89c5*/
  return &this->AbstractClass; /*0x6c89ca*/
}



// ==== 0x006C89E0  Buffer::AppendCellData  this=Buffer  sig=csp ====
int __thiscall Buffer::AppendCellData(Buffer *this, int *a2, int a3)
{
  int Buffer_field_08; // edi
  _DWORD *v7; // eax
  int *v8; // esi
  int v9; // eax
  unsigned int v10; // eax
  char *v11; // edi
  int v12; // esi
  int v13; // edx
  int v14; // [esp+10h] [ebp-10h] BYREF
  int v15; // [esp+18h] [ebp-8h]
  _BYTE *v16; // [esp+28h] [ebp+8h]

  Buffer_field_08 = this->Buffer_field_08; /*0x6c89e9*/
  if ( Buffer_field_08 + 12 > (unsigned int)(this->Buffer_field_04 + this->Buffer_field_00) ) /*0x6c89f9*/
    return 0; /*0x6c89f9*/
  v15 = this->Buffer_field_08; /*0x6c89fd*/
  this->Buffer_field_08 = Buffer_field_08 + 12; /*0x6c8a01*/
  if ( !Buffer_field_08 ) /*0x6c8a04*/
    return 0; /*0x6c8a06*/
  *(_WORD *)Buffer_field_08 = *(_WORD *)a3; /*0x6c8a19*/
  *(_WORD *)(Buffer_field_08 + 2) = *(_WORD *)(a3 + 4); /*0x6c8a20*/
  *(_WORD *)(Buffer_field_08 + 4) = *(_WORD *)(a3 + 16); /*0x6c8a28*/
  *(_WORD *)(Buffer_field_08 + 6) = *(_WORD *)(a3 + 20); /*0x6c8a34*/
  *(_DWORD *)(Buffer_field_08 + 8) = this->Buffer_field_08; /*0x6c8a3f*/
  v7 = CellStruct::Copy((CellStruct *)(a3 + 8), &v14); /*0x6c8a42*/
  v8 = a2; /*0x6c8a49*/
  v16 = (_BYTE *)(*(int (__thiscall **)(int *, _DWORD, _DWORD))(*a2 + 92))(a2, *v7, v7[1]); /*0x6c8a61*/
  v9 = *(_DWORD *)(a3 + 20); /*0x6c8a65*/
  v14 = 0; /*0x6c8a6a*/
  if ( v9 > 0 ) /*0x6c8a72*/
  {
    while ( 1 ) /*0x6c8a8a*/
    {
      v10 = Map_Append(v16, (int)&g_SidebarButtonState.needsRedraw, *(_DWORD *)(a3 + 16)); /*0x6c8a8a*/
      v11 = (char *)this->Buffer_field_08; /*0x6c8a8f*/
      if ( (unsigned int)&v11[v10] > this->Buffer_field_04 + this->Buffer_field_00 /*0x6c8aa4*/
        || (this->Buffer_field_08 = (int)&v11[v10], !v11) )
      {
        (*(void (__thiscall **)(int *))(*v8 + 96))(v8); /*0x6c8ae6*/
        return 0; /*0x6c8af2*/
      }
      qmemcpy(v11, &g_SidebarButtonState.needsRedraw, v10); /*0x6c8ab0*/
      v13 = *a2; /*0x6c8ac2*/
      v12 = ++v14; /*0x6c8ac1*/
      v16 += (*(int (__thiscall **)(int *))(v13 + 116))(a2); /*0x6c8ad6*/
      if ( v12 >= *(_DWORD *)(a3 + 20) ) /*0x6c8ada*/
        break; /*0x6c8ada*/
      v8 = a2; /*0x6c8adc*/
    }
    Buffer_field_08 = v15; /*0x6c8af5*/
    v8 = a2; /*0x6c8af9*/
  }
  (*(void (__thiscall **)(int *))(*v8 + 96))(v8); /*0x6c8b01*/
  return Buffer_field_08; /*0x6c8a08*/
}



// ==== 0x006C8B10  ObjectClass::method_6C8B10  this=ObjectClass  sig=csp ====
int __thiscall sub_6C8B10(ObjectClass *this, int a2, int a3, __int16 a4, __int16 a5)
{
  _WORD *ptr_8; // edi
  _DWORD *v8; // eax
  int v9; // esi
  unsigned int v10; // eax
  char *v11; // edi
  _WORD *v12; // [esp+10h] [ebp-10h]
  int v13; // [esp+18h] [ebp-8h] BYREF
  _BYTE *v14; // [esp+2Ch] [ebp+Ch]
  int v15; // [esp+30h] [ebp+10h]

  ptr_8 = this->?; /*0x6c8b19*/
  if ( (char *)(ptr_8 + 6) > (char *)this->? + (unsigned int)this->AbstractClass ) /*0x6c8b28*/
    return 0; /*0x6c8b28*/
  v12 = this->?; /*0x6c8b2c*/
  this->? = ptr_8 + 6; /*0x6c8b30*/
  if ( !ptr_8 ) /*0x6c8b33*/
    return 0; /*0x6c8b35*/
  *ptr_8 = a4; /*0x6c8b4f*/
  ptr_8[1] = a5; /*0x6c8b52*/
  ptr_8[2] = *(_WORD *)(a3 + 8); /*0x6c8b5a*/
  ptr_8[3] = *(_WORD *)(a3 + 12); /*0x6c8b66*/
  *((_DWORD *)ptr_8 + 2) = this->?; /*0x6c8b70*/
  v8 = CellStruct::Copy((CellStruct *)a3, &v13); /*0x6c8b73*/
  v9 = a2; /*0x6c8b7a*/
  v14 = (_BYTE *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, *v8, v8[1]); /*0x6c8b92*/
  v15 = 0; /*0x6c8b9b*/
  if ( *(int *)(a3 + 12) > 0 ) /*0x6c8ba3*/
  {
    while ( 1 ) /*0x6c8bbb*/
    {
      v10 = Map_Append(v14, (int)&g_SidebarButtonState.needsRedraw, *(_DWORD *)(a3 + 8)); /*0x6c8bbb*/
      v11 = (char *)this->?; /*0x6c8bc0*/
      if ( &v11[v10] > (char *)this->? + (unsigned int)this->AbstractClass || (this->? = &v11[v10], !v11) ) /*0x6c8bd4*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9); /*0x6c8c16*/
        return 0; /*0x6c8c22*/
      }
      qmemcpy(v11, &g_SidebarButtonState.needsRedraw, v10); /*0x6c8be0*/
      ++v15; /*0x6c8bf4*/
      v14 += (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x6c8c06*/
      if ( v15 >= *(_DWORD *)(a3 + 12) ) /*0x6c8c0a*/
        break; /*0x6c8c0a*/
      v9 = a2; /*0x6c8c0c*/
    }
    ptr_8 = v12; /*0x6c8c25*/
    v9 = a2; /*0x6c8c29*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9); /*0x6c8c31*/
  return (int)ptr_8; /*0x6c8b37*/
}



// ==== 0x006C8C40  Timer::GetTicks  this=Timer  sig=csp ====
int Timer::GetTicks()
{
  return timeGetTime() >> 4; /*0x6c8c49*/
}



// ==== 0x006C8C60  sub_6C8C60  this=-  sig=ida-proto ====
int sub_6C8C60()
{
  dword_B0BED8 = 0; /*0x6c8c62*/
  dword_B0BEDC = 0; /*0x6c8c67*/
  dword_B0BEE0 = 0; /*0x6c8c6c*/
  dword_B0BEE4 = 0; /*0x6c8c71*/
  return 0; /*0x6c8c76*/
}



// ==== 0x006C8C80  sub_6C8C80  this=-  sig=ida-proto ====
void sub_6C8C80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6c8c8c*/
  dbl_B0BEF0 = Math::Sqrt(v0 + v0); /*0x6c8c9e*/
}



// ==== 0x006C8CB0  sub_6C8CB0  this=-  sig=ida-proto ====
void sub_6C8CB0()
{
  dbl_B0BF58 = dbl_B0BEF0 / 60.0; /*0x6c8cbc*/
}



// ==== 0x006C8CD0  sub_6C8CD0  this=-  sig=ida-proto ====
void sub_6C8CD0()
{
  dbl_B0BF40 = 1.0 / dbl_B0BF58; /*0x6c8cdc*/
}



// ==== 0x006C8CF0  sub_6C8CF0  this=-  sig=ida-proto ====
void sub_6C8CF0()
{
  dbl_B0BF20 = 0.0174532925199433 * 45.0; /*0x6c8cfc*/
}



// ==== 0x006C8D10  sub_6C8D10  this=-  sig=ida-proto ====
void sub_6C8D10()
{
  dbl_B0BEF8 = 0.0174532925199433 * 60.0; /*0x6c8d1c*/
}



// ==== 0x006C8D30  sub_6C8D30  this=-  sig=ida-proto ====
void sub_6C8D30()
{
  dbl_B0BED0 = 0.0174532925199433 * 90.0; /*0x6c8d3c*/
}



// ==== 0x006C8D50  sub_6C8D50  this=-  sig=ida-proto ====
__int64 sub_6C8D50()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0BED0 - dbl_B0BEF8); /*0x6c8d62*/
  result = Math::RoundToInt(v0 * dbl_B0BEF0 * 0.5); /*0x6c8d76*/
  dword_B0BF60 = result; /*0x6c8d7b*/
  return result; /*0x6c8d80*/
}



// ==== 0x006C8D90  sub_6C8D90  this=-  sig=ida-proto ====
void sub_6C8D90()
{
  dbl_B0BF00 = Math::ArcTan((double)dword_B0BF60 * 0.00390625); /*0x6c8da7*/
}



// ==== 0x006C8DC0  sub_6C8DC0  this=-  sig=ida-proto ====
void sub_6C8DC0()
{
  dbl_B0BF18 = Math::ArcTan((double)(2 * dword_B0BF60) / dbl_B0BEF0); /*0x6c8de2*/
}



// ==== 0x006C8DF0  sub_6C8DF0  this=-  sig=ida-proto ====
__int64 sub_6C8DF0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0BF60) + 0.5); /*0x6c8e0b*/
  dword_B0BF54 = result; /*0x6c8e10*/
  return result; /*0x6c8e16*/
}



// ==== 0x006C8E20  sub_6C8E20  this=-  sig=ida-proto ====
int sub_6C8E20()
{
  word_B0BEE8 = 0; /*0x6c8e22*/
  word_B0BEEA = 0; /*0x6c8e28*/
  return 0; /*0x6c8e2e*/
}



// ==== 0x006C8E30  sub_6C8E30  this=-  sig=ida-proto ====
int sub_6C8E30()
{
  dword_B0BF08 = 0; /*0x6c8e32*/
  dword_B0BF0C = 0; /*0x6c8e37*/
  dword_B0BF10 = 0; /*0x6c8e3c*/
  return 0; /*0x6c8e41*/
}



// ==== 0x006C8E50  sub_6C8E50  this=-  sig=ida-proto ====
int sub_6C8E50()
{
  dword_B0BF50 = 0; /*0x6c8e55*/
  dword_B0BF48 = 128; /*0x6c8e5f*/
  dword_B0BF4C = 128; /*0x6c8e64*/
  return 128; /*0x6c8e69*/
}



// ==== 0x006C8E70  ObjectClass::??0Iostream_init_QAE_XZ_5  this=ObjectClass  sig=csp ====
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

  CampaignScore::LoadCampaignScoreAssetsGame(*((void **)dword_A8B230 + 3374)); /*0x6c8e8e*/
  v5 = *(_QWORD *)&g_DisplayWidth; /*0x6c8e9f*/
  v3 = 0; /*0x6c8eb1*/
  v4 = 0; /*0x6c8eb9*/
  Map_Load_72E9F0((int *)g_DSurface_Hidden, &v3); /*0x6c8ec1*/
  Frame::Present(g_DSurface_Hidden, a1, a2, a3, 0, v3, v4, (int *)v5); /*0x6c8ed0*/
  Campaign::Screen(0); /*0x6c8ee1*/
  Map_Load_72E9F0((int *)g_DSurface_Hidden, &v3); /*0x6c8ef0*/
  Frame::Present(g_DSurface_Hidden, a1, a2, a3, 0, v3, v4, (int *)v5); /*0x6c8eff*/
  FileSystem::CleanupTrees(); /*0x6c8f04*/
}



// ==== 0x006C8F10  sub_6C8F10  this=-  sig=ida-proto ====
LRESULT __fastcall sub_6C8F10(HWND hDlg, int nIDDlgItem, int a3)
{
  HWND DlgItem; // eax
  wchar_t Buffer[32]; // [esp+Ch] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)a02d02d02d_0, (const wchar_t *const)(a3 / 60 / 60), a3 / 60 % 60, a3 % 60); /*0x6c8f69*/
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x6c8f73*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x6c8f8c*/
}



// ==== 0x006C8FA0  sub_6C8FA0  this=-  sig=ida-proto ====
LRESULT __fastcall sub_6C8FA0(HWND hDlg, int nIDDlgItem, wchar_t *Format)
{
  HWND DlgItem; // eax
  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, Format); /*0x6c8fb8*/
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x6c8fc2*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x6c8fdb*/
}



// ==== 0x006C8FF0  DlgProcScoreScreen  this=-  sig=csp ====
int __stdcall ScoreScreen_DlgProc(HWND hWnd, unsigned int a2, WPARAM wParam, wchar_t *Format)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  HWND DlgItem; // eax
  int v10; // ecx
  _DWORD *v11; // edi
  int v12; // edi
  HWND v13; // eax
  wchar_t *v14; // ecx
  wchar_t *v15; // esi
  wchar_t *String; // edi
  wchar_t *v17; // esi
  HWND v18; // eax
  void (__stdcall *v19)(HWND, UINT, WPARAM, LPARAM); // edi
  HWND v20; // eax
  int v21; // eax
  const wchar_t *v22; // esi
  int v23; // ecx
  int v24; // edi
  char *v25; // esi
  char *v26; // esi
  char *v27; // esi
  int v28; // eax
  HWND v29; // eax
  HWND v30; // eax
  int v31; // eax
  _DWORD *v32; // eax
  LPARAM v33; // [esp-8h] [ebp-54h]
  wchar_t lParam[32]; // [esp+Ch] [ebp-40h] BYREF
  WPARAM wParama; // [esp+58h] [ebp+Ch]
  wchar_t *Formatb; // [esp+5Ch] [ebp+10h]
  wchar_t *Formata; // [esp+5Ch] [ebp+10h]

  result = BaseDialogProc(hWnd, a2, wParam, (unsigned int)Format); /*0x6c900c*/
  if ( !result ) /*0x6c9013*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x6c901c*/
    if ( a2 > 0x497 ) /*0x6c9028*/
    {
      if ( a2 == 1240 ) /*0x6c9383*/
      {
        if ( !wParam ) /*0x6c93cb*/
          SendDlgItemMessageA(hWnd, 1835, 0x4D5u, 0, 29); /*0x6c93db*/
      }
      else if ( a2 == 1260 ) /*0x6c9388*/
      {
        AudioController::Stop(stru_B0BF28); /*0x6c938f*/
        v32 = (_DWORD *)PlayVocClass(dword_8871E0->BunkerWallsUpSound, 0x2000, 1.0, 0); /*0x6c93ad*/
        SetAudioSource((int)stru_B0BF28, v32, 0); /*0x6c93b9*/
        SendDlgItemMessageA(hWnd, 1835, 0x4D3u, 0, 0); /*0x6c93c7*/
      }
      return 0; /*0x6c93e1*/
    }
    if ( a2 != 1175 ) /*0x6c902e*/
    {
      if ( a2 == 2 ) /*0x6c9033*/
      {
        if ( dword_B0BF64 ) /*0x6c906e*/
        {
          AudioFile::Stop(stru_B0BF28); /*0x6c9079*/
          AudioFileClass::Release(stru_B0BF28); /*0x6c9083*/
          dword_B0BF64 = 0; /*0x6c908a*/
          return 0; /*0x6c909a*/
        }
      }
      else if ( a2 == 273 && (_WORD)wParam == 1059 ) /*0x6c9046*/
      {
        *WindowLongA = 1; /*0x6c9051*/
        AudioFile::Stop(stru_B0BF28); /*0x6c9057*/
        return 0; /*0x6c9064*/
      }
      return 0; /*0x6c9046*/
    }
    AudioController::Init(stru_B0BF28); /*0x6c90a2*/
    dword_B0BF64 = 1; /*0x6c90ad*/
    v6 = 0; /*0x6c90b7*/
    v7 = *((_DWORD *)dword_A8B230 + 387); /*0x6c90b9*/
    if ( v7 ) /*0x6c90c1*/
    {
      if ( v7 == 1 ) /*0x6c90ce*/
      {
        v6 = *((_DWORD *)dword_A8B230 + 3434); /*0x6c90d0*/
      }
      else if ( v7 == 2 ) /*0x6c90db*/
      {
        v6 = *((_DWORD *)dword_A8B230 + 3435); /*0x6c90dd*/
      }
    }
    else
    {
      v6 = *((_DWORD *)dword_A8B230 + 3433); /*0x6c90c3*/
    }
    v8 = v6 / 60; /*0x6c90fc*/
    swprintf( /*0x6c9146*/
      lParam,
      (const size_t)a02d02d02d_0,
      (const wchar_t *const)(v6 / 60 / 60 / 60),
      v6 / 60 / 60 % 60,
      v6 / 60 % 60);
    DlgItem = GetDlgItem(hWnd, 1777); /*0x6c915a*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9169*/
    v10 = *((_DWORD *)dword_A8B230 + 391); /*0x6c9174*/
    if ( *((_DWORD *)dword_A8B230 + 389) != -1 ) /*0x6c9187*/
    {
      v11 = (char *)dword_A8B230 + 1556; /*0x6c917a*/
      Formatb = (wchar_t *)*((_DWORD *)dword_A8B230 + 391); /*0x6c9180*/
      v10 = (int)Formatb + Timer::GetTicks() - *v11; /*0x6c9199*/
    }
    v12 = v10 / 60; /*0x6c91b7*/
    swprintf( /*0x6c9209*/
      lParam,
      (const size_t)a02d02d02d_0,
      (const wchar_t *const)(v10 / 60 / 60 / 60),
      v10 / 60 / 60 % 60,
      v10 / 60 % 60);
    v13 = GetDlgItem(hWnd, 1778); /*0x6c9217*/
    SendMessageA(v13, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9226*/
    if ( v12 > v8 ) /*0x6c9233*/
    {
      v14 = (wchar_t *)((char *)dword_A8B230 + 13806); /*0x6c9243*/
      v15 = (wchar_t *)((char *)dword_A8B230 + 13837); /*0x6c9249*/
    }
    else
    {
      v14 = (wchar_t *)((char *)dword_A8B230 + 13744); /*0x6c9235*/
      v15 = (wchar_t *)((char *)dword_A8B230 + 13775); /*0x6c923b*/
    }
    String = GetStringCSF(v14, 0, aDRa2mdpostStls, 138); /*0x6c926e*/
    v17 = GetStringCSF(v15, 0, aDRa2mdpostStls, 139); /*0x6c927b*/
    v18 = GetDlgItem(hWnd, 1779); /*0x6c927d*/
    v33 = (LPARAM)String; /*0x6c927f*/
    v19 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x6c9280*/
    SendMessageA(v18, 0x4B2u, 0, v33); /*0x6c928e*/
    v20 = GetDlgItem(hWnd, 1780); /*0x6c9296*/
    SendMessageA(v20, 0x4B2u, 0, (LPARAM)v17); /*0x6c92a1*/
    v21 = dword_A80238; /*0x6c92a3*/
    v22 = 0; /*0x6c92a8*/
    v23 = 0; /*0x6c92aa*/
    wParama = dword_A80238; /*0x6c92ac*/
    Formata = 0; /*0x6c92b2*/
    if ( dword_A80238 > 0 ) /*0x6c92b6*/
    {
      do /*0x6c930e*/
      {
        v24 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v23]; /*0x6c92be*/
        if ( *(_BYTE *)(v24 + 493) ) /*0x6c92c1*/
        {
          v25 = (char *)v22 + SumArray((int *)(v24 + 9032)); /*0x6c92dc*/
          v26 = &v25[SumArray((int *)(v24 + 11088))]; /*0x6c92e9*/
          v27 = &v26[SumArray((int *)(v24 + 13144))]; /*0x6c92f6*/
          v28 = SumArray((int *)(v24 + 15200)); /*0x6c92f8*/
          v23 = (int)Formata; /*0x6c92fd*/
          v22 = (const wchar_t *)&v27[v28]; /*0x6c9301*/
          v21 = wParama; /*0x6c9303*/
        }
        Formata = (wchar_t *)++v23; /*0x6c930a*/
      }
      while ( v23 < v21 ); /*0x6c930e*/
      v19 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x6c9310*/
    }
    v29 = GetDlgItem(hWnd, 1835); /*0x6c931c*/
    PostMessageA(v29, 0x4D7u, 0, (LPARAM)hWnd); /*0x6c9327*/
    swprintf(lParam, (const size_t)&g_Str_Fmt_PctD, v22); /*0x6c9338*/
    v30 = GetDlgItem(hWnd, 1782); /*0x6c9346*/
    v19(v30, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9355*/
    v31 = StringList::Find(&unk_A83D10, g_INI_Key_SCORE); /*0x6c9361*/
    ThemeClass::Play(&unk_A83D10, v31); /*0x6c936c*/
    return 0; /*0x6c9374*/
  }
  return result; /*0x6c905c*/
}



// ==== 0x006C93F0  sub_6C93F0  this=-  sig=ida-proto ====
void sub_6C93F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6c93fc*/
  dbl_B0BF78 = Math::Sqrt(v0 + v0); /*0x6c940e*/
}



// ==== 0x006C9420  sub_6C9420  this=-  sig=ida-proto ====
void sub_6C9420()
{
  dbl_B0BFC8 = dbl_B0BF78 / 60.0; /*0x6c942c*/
}



// ==== 0x006C9440  sub_6C9440  this=-  sig=ida-proto ====
void sub_6C9440()
{
  dbl_B0BFB0 = 1.0 / dbl_B0BFC8; /*0x6c944c*/
}



// ==== 0x006C9460  sub_6C9460  this=-  sig=ida-proto ====
void sub_6C9460()
{
  dbl_B0BFA8 = 0.0174532925199433 * 45.0; /*0x6c946c*/
}



// ==== 0x006C9480  sub_6C9480  this=-  sig=ida-proto ====
void sub_6C9480()
{
  dbl_B0BF80 = 0.0174532925199433 * 60.0; /*0x6c948c*/
}



// ==== 0x006C94A0  sub_6C94A0  this=-  sig=ida-proto ====
void sub_6C94A0()
{
  dbl_B0BF68 = 0.0174532925199433 * 90.0; /*0x6c94ac*/
}



// ==== 0x006C94C0  sub_6C94C0  this=-  sig=ida-proto ====
__int64 sub_6C94C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0BF68 - dbl_B0BF80); /*0x6c94d2*/
  result = Math::RoundToInt(v0 * dbl_B0BF78 * 0.5); /*0x6c94e6*/
  dword_B0BFD0 = result; /*0x6c94eb*/
  return result; /*0x6c94f0*/
}



// ==== 0x006C9500  sub_6C9500  this=-  sig=ida-proto ====
void sub_6C9500()
{
  dbl_B0BF88 = Math::ArcTan((double)dword_B0BFD0 * 0.00390625); /*0x6c9517*/
}



// ==== 0x006C9530  sub_6C9530  this=-  sig=ida-proto ====
void sub_6C9530()
{
  dbl_B0BFA0 = Math::ArcTan((double)(2 * dword_B0BFD0) / dbl_B0BF78); /*0x6c9552*/
}



// ==== 0x006C9560  sub_6C9560  this=-  sig=ida-proto ====
__int64 sub_6C9560()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0BFD0) + 0.5); /*0x6c957b*/
  dword_B0BFC4 = result; /*0x6c9580*/
  return result; /*0x6c9586*/
}



// ==== 0x006C9590  sub_6C9590  this=-  sig=ida-proto ====
int sub_6C9590()
{
  word_B0BF70 = 0; /*0x6c9592*/
  word_B0BF72 = 0; /*0x6c9598*/
  return 0; /*0x6c959e*/
}



// ==== 0x006C95A0  sub_6C95A0  this=-  sig=ida-proto ====
int sub_6C95A0()
{
  dword_B0BF90 = 0; /*0x6c95a2*/
  dword_B0BF94 = 0; /*0x6c95a7*/
  dword_B0BF98 = 0; /*0x6c95ac*/
  return 0; /*0x6c95b1*/
}



// ==== 0x006C95C0  sub_6C95C0  this=-  sig=ida-proto ====
int sub_6C95C0()
{
  dword_B0BFC0 = 0; /*0x6c95c5*/
  dword_B0BFB8 = 128; /*0x6c95cf*/
  dword_B0BFBC = 128; /*0x6c95d4*/
  return 128; /*0x6c95d9*/
}



// ==== 0x006C95E0  Delegate::GetField  this=Delegate  sig=csp ====
_DWORD *__thiscall Delegate::GetField(Delegate *this)
{
  this->m_items = 0; /*0x6c95e6*/
  this->m_count = 0; /*0x6c95e8*/
  this->Delegate_field_08 = 0; /*0x6c95eb*/
  *(_DWORD *)&this->m_allocated = 0; /*0x6c95ee*/
  return &this->m_items; /*0x6c95f1*/
}



// ==== 0x006C9600  AbstractClass::GetTotalValue  this=AbstractClass  sig=csp ====
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
  v3 = (char *)((char *)dword_B0F4EC - (char *)this); /*0x6c9612*/
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
int __thiscall Float4::Sum(int *this)
{
  int v2; // edi
  int result; // eax
  int v4; // [esp+8h] [ebp-4h]

  v4 = 0; /*0x6c9653*/
  v2 = 4; /*0x6c965d*/
  do /*0x6c9675*/
  {
    LOWORD(result) = Math::RoundToInt((double)v4 + *(float *)this++); /*0x6c9668*/
    --v2; /*0x6c9670*/
    v4 = result; /*0x6c9671*/
  }
  while ( v2 ); /*0x6c9675*/
  return result; /*0x6c967b*/
}



// ==== 0x006C9680  FloatArray::Get  this=BuildingTypeClass  sig=csp ====
int __thiscall FloatArray::Get(int *this, int a2)
{
  return a2; /*0x6c9687*/
}



// ==== 0x006C9690  Float::Accumulate  this=BuildingTypeClass  sig=csp ====
int __thiscall Float::Accumulate(int *this, float a2, int a3)
{
  *((float *)this + a3) = a2 + *((float *)this + a3); /*0x6c969b*/
  return a3; /*0x6c969e*/
}



// ==== 0x006C96B0  Float::SubtractClamped  this=BuildingTypeClass  sig=csp ====
int __thiscall Float::SubtractClamped(int *this, float a2, int a3)
{
  __int16 v3; // fps
  double v4; // st7
  bool v5; // c0
  char v6; // c2
  bool v7; // c3
  int result; // eax
  double v9; // st6

  v4 = *((float *)this + a3); /*0x6c96b4*/
  v5 = v4 < a2; /*0x6c96b7*/
  v6 = 0; /*0x6c96b7*/
  v7 = v4 == a2; /*0x6c96b7*/
  LOWORD(result) = v3; /*0x6c96bb*/
  if ( v4 >= a2 ) /*0x6c96c0*/
    v9 = *((float *)this + a3) - a2; /*0x6c96d7*/
  else
    v9 = *((float *)this + a3) - *((float *)this + a3); /*0x6c96c8*/
  *((float *)this + a3) = v9; /*0x6c96ca*/
  return result; /*0x6c96cd*/
}



// ==== 0x006C96E0  ObjectClass::method_6C96E0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6C96E0(ObjectClass *this, _DWORD *a2, int a3)
{
  ObjectClass *v3; // eax
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
    v7 = *(float *)((char *)&v3->AbstractClass + v5) + *(float *)&v3->AbstractClass; /*0x6c970c*/
    v3 = (ObjectClass *)((char *)v3 + 4); /*0x6c970e*/
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



// ==== 0x006C9740  HouseClass::AccumulateFloat4  this=HouseClass  sig=csp ====
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
  a2[1] = this->ptr_8; /*0x6c9769*/
  a2[2] = this->ptr_C; /*0x6c976f*/
  a2[3] = this->ptr_10; /*0x6c9776*/
  return a2; /*0x6c9775*/
}



// ==== 0x006C9780  ObjectClass::method_6C9780  this=ObjectClass  sig=csp ====
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



// ==== 0x006C97E0  HouseClass::ComputeResourceDelta  this=HouseClass  sig=csp ====
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
  a2[1] = this->ptr_8; /*0x6c9809*/
  a2[2] = this->ptr_C; /*0x6c980f*/
  a2[3] = this->ptr_10; /*0x6c9816*/
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
int __thiscall Straw::Dtor(Straw *this)
{
  int result; // eax
  int v3; // ecx

  result = this->Straw_field_0x04; /*0x6c9856*/
  *(_DWORD *)this->__pad_0 = &Straw::`vftable'; /*0x6c9859*/
  if ( result ) /*0x6c9861*/
    *(_DWORD *)(result + 8) = *((_DWORD *)this + 2); /*0x6c9866*/
  v3 = *((_DWORD *)this + 2); /*0x6c9869*/
  if ( v3 ) /*0x6c986e*/
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 4))(v3, this->Straw_field_0x04); /*0x6c9876*/
  *((_DWORD *)this + 2) = 0; /*0x6c9879*/
  this->Straw_field_0x04 = 0; /*0x6c987c*/
  return result; /*0x6c987f*/
}



// ==== 0x006C9890  Straw::Set  this=Straw  sig=csp ====
int __thiscall Delegate::Set(Straw *this, int a2)
{
  int result; // eax
  int v4; // ecx

  if ( this->Straw_field_0x04 != a2 ) /*0x6c989b*/
  {
    if ( a2 ) /*0x6c989f*/
    {
      v4 = *(_DWORD *)(a2 + 8); /*0x6c98a1*/
      if ( v4 ) /*0x6c98a6*/
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 4))(v4, 0); /*0x6c98ac*/
        *(_DWORD *)(a2 + 8) = 0; /*0x6c98af*/
      }
    }
    result = this->Straw_field_0x04; /*0x6c98b6*/
    if ( result ) /*0x6c98bb*/
      *(_DWORD *)(result + 8) = 0; /*0x6c98bd*/
    this->Straw_field_0x04 = a2; /*0x6c98c6*/
    if ( a2 ) /*0x6c98c9*/
      *(_DWORD *)(a2 + 8) = this; /*0x6c98cb*/
  }
  return result; /*0x6c98ce*/
}



// ==== 0x006C98E0  Straw::Invoke  this=Straw  sig=csp ====
int __thiscall Delegate::Invoke(Straw *this, int a2, int a3)
{
  int Straw_field_0x04; // ecx

  Straw_field_0x04 = this->Straw_field_0x04; /*0x6c98e0*/
  if ( Straw_field_0x04 ) /*0x6c98e5*/
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)Straw_field_0x04 + 8))(Straw_field_0x04, a2, a3); /*0x6c98f3*/
  else
    return 0; /*0x6c98f9*/
}



// ==== 0x006C9900  ObjectClass::Render_Parse  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Render_Parse(ObjectClass *this)
{
  this->AbstractClass = 0; /*0x6c9902*/
  this->? = (void *)1200; /*0x6c9908*/
  this->? = (void *)0xFFFFFF; /*0x6c990f*/
  this->? = (void *)15; /*0x6c9916*/
  this->? = 2; /*0x6c991d*/
  this->? = 0; /*0x6c9924*/
  return &this->AbstractClass; /*0x6c992b*/
}



// ==== 0x006C9930  BinkMovie::Destroy  this=BinkMovie  sig=csp ====
void __thiscall BinkMovie::Destroy(BinkMovie *this)
{
  if ( this->BinkMovie_field_0x14[0] ) /*0x6c9930*/
    __3_YAXPAX_Z((void *)this->BinkMovie_field_0x14[0]); /*0x6c9938*/
}



// ==== 0x006C9940  ObjectClass::method_6C9940  this=ObjectClass  sig=csp ====
int __thiscall sub_6C9940(ObjectClass *this, char a2, char a3, unsigned __int8 a4)
{
  unsigned __int16 v4; // ax
  int result; // eax

  HIBYTE(v4) = a2; /*0x6c9946*/
  LOBYTE(v4) = a3; /*0x6c9950*/
  result = a4 | (v4 << 8); /*0x6c9957*/
  this->? = (void *)result; /*0x6c9959*/
  return result; /*0x6c995c*/
}



// ==== 0x006C9960  ObjectClass::method_6C9960  this=ObjectClass  sig=csp ====
void __thiscall sub_6C9960(ObjectClass *this, wchar_t *String)
{
  int v3; // eax
  wchar_t *v4; // eax

  if ( this->? ) /*0x6c9964*/
  {
    __3_YAXPAX_Z((void *)this->?); /*0x6c996c*/
    this->? = 0; /*0x6c9974*/
  }
  if ( String ) /*0x6c9981*/
  {
    v3 = wcslen(String); /*0x6c9984*/
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3 + 2); /*0x6c998e*/
    this->? = (int)v4; /*0x6c9996*/
    if ( v4 ) /*0x6c999b*/
      wcscpy(v4, String); /*0x6c999f*/
  }
}



// ==== 0x006C99B0  sub_6C99B0  this=-  sig=ida-proto ====
int sub_6C99B0()
{
  dword_B0BFD8 = 0; /*0x6c99b2*/
  dword_B0BFDC = 0; /*0x6c99b7*/
  dword_B0BFE0 = 0; /*0x6c99bc*/
  dword_B0BFE4 = 0; /*0x6c99c1*/
  return 0; /*0x6c99c6*/
}



// ==== 0x006C99D0  BinkMovie::CreateSurfaceTracker  this=AbstractClass  sig=csp ====
_DWORD *__thiscall BinkMovie_CreateSurfaceTracker(char *FullPath)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  char Filename[256]; // [esp+Ch] [ebp-100h] BYREF

  if ( !FullPath || !strlen(FullPath) ) /*0x6c99e7*/
    return 0; /*0x6c9ab2*/
  v2 = __2_YAPAXI_Z(0x34u); /*0x6c99ff*/
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
  _splitpath(FullPath, 0, 0, Filename, 0); /*0x6c9a2f*/
  if ( (unsigned __int8)BinkMovie::InitKeyframeTracking(Filename) == 1 ) /*0x6c9a45*/
  {
    v3 = __2_YAPAXI_Z(0x20u); /*0x6c9a49*/
    v4 = v3; /*0x6c9a4e*/
    if ( v3 ) /*0x6c9a55*/
    {
      v3[1] = 640; /*0x6c9a60*/
      v3[2] = 255; /*0x6c9a67*/
      v3[3] = 0; /*0x6c9a6e*/
      *v3 = &XSurface_Vtable; /*0x6c9a71*/
      v3[4] = 2; /*0x6c9a77*/
      Buffer::Init(0, 0x4FB00u); /*0x6c9a7e*/
      *v4 = &BSurface_Vtable; /*0x6c9a83*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v4 + 24))(v4, 0); /*0x6c9a8e*/
      v2[4] = v4; /*0x6c9a91*/
    }
  }
  return v2; /*0x6c9a97*/
}



// ==== 0x006C9AC0  ObjectClass::method_6C9AC0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6C9AC0(ObjectClass *this)
{
  this->AbstractClass = 0; /*0x6c9ac4*/
  this->? = 0; /*0x6c9ac6*/
  this->? = 0; /*0x6c9ac9*/
  this->? = 0; /*0x6c9acc*/
  this->? = 0; /*0x6c9acf*/
  this->? = 0; /*0x6c9ad2*/
  this->? = 0; /*0x6c9ad5*/
  this->? = 0; /*0x6c9ad8*/
  this->? = 0; /*0x6c9adb*/
  return &this->AbstractClass; /*0x6c9ade*/
}



// ==== 0x006C9AE0  BinkMovie::FreeSurfaceTracker  this=BinkMovie  sig=csp ====
int __thiscall BinkMovie::FreeSurfaceTracker(BinkMovie *this)
{
  int result; // eax
  int v3; // esi
  int v4; // eax
  void *v5; // edi
  int (__thiscall ***v6)(_DWORD, int); // ecx

  result = *(_DWORD *)this->__pad_0; /*0x6c9ae3*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x6c9ae3*/
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
          BinkMovie::Destroy(*(BinkMovie **)(v4 + 4 * v3)); /*0x6c9b00*/
          __3_YAXPAX_Z(v5); /*0x6c9b06*/
        }
        result = *(_DWORD *)this->__pad_0; /*0x6c9b0e*/
        ++v3; /*0x6c9b10*/
      }
      while ( v3 < *(_DWORD *)(*(_DWORD *)this->__pad_0 + 16) ); /*0x6c9b14*/
    }
    if ( *(_DWORD *)this->__pad_0 ) /*0x6c9b17*/
      result = (***(int (__thiscall ****)(_DWORD, int))this->__pad_0)(*(_DWORD *)this->__pad_0, 1); /*0x6c9b22*/
  }
  v6 = (int (__thiscall ***)(_DWORD, int))this->BinkMovie_field_0x10[0]; /*0x6c9b24*/
  if ( v6 ) /*0x6c9b2a*/
    return (**v6)(v6, 1); /*0x6c9b30*/
  return result; /*0x6c9b27*/
}



// ==== 0x006C9B40  BinkMovie::InitKeyframeTracking  this=BinkMovie  sig=csp ====
char __thiscall BinkMovie::InitKeyframeTracking(BinkMovie *this, char *Source)
{
  int v3; // eax
  ObjectClass *v5; // [esp+0h] [ebp-894h]
  int v6[4]; // [esp+Ch] [ebp-888h] BYREF
  char v7; // [esp+1Ch] [ebp-878h]
  CCFileClass v8; // [esp+20h] [ebp-874h] BYREF
  int v9[3]; // [esp+78h] [ebp-81Ch] BYREF
  int v10; // [esp+84h] [ebp-810h]
  BinkMovie v11; // [esp+8Ch] [ebp-808h] BYREF

  if ( !Source || !strlen(Source) ) /*0x6c9b5f*/
    return 0; /*0x6c9b6a*/
  CCFileClass::Construct(&v8, aSubtitlemdTxt); /*0x6c9b79*/
  if ( !(unsigned __int8)CCFileClass::Open(&v8, 0) ) /*0x6c9b8a*/
  {
LABEL_6:
    *(_DWORD *)v8.CDFileClass = &CCFileClass::`vftable'; /*0x6c9be2*/
    v10 = 0; /*0x6c9bee*/
    Vector::Clear((int)v9); /*0x6c9bf5*/
    *(_DWORD *)v8.CDFileClass = &off_7E1668; /*0x6c9bfe*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v8); /*0x6c9c06*/
    return 0; /*0x6c9c16*/
  }
  v6[1] = 0; /*0x6c9b9c*/
  v6[2] = 0; /*0x6c9ba0*/
  v6[3] = (int)&v8; /*0x6c9ba4*/
  v7 = 0; /*0x6c9ba8*/
  v6[0] = (int)&FileStraw::`vftable'; /*0x6c9bac*/
  BinkMovie::VtableDispatch(&v11, (int)v6); /*0x6c9bb4*/
  v3 = ParseMovieSubtitles(v11.__pad_0, Source); /*0x6c9bc1*/
  *(_DWORD *)this->__pad_0 = v3; /*0x6c9bc8*/
  if ( !v3 ) /*0x6c9bd2*/
  {
    nullsub_40(v5); /*0x6c9bd4*/
    FileStraw::Destructor((int)v6); /*0x6c9bdd*/
    goto LABEL_6; /*0x6c9bdd*/
  }
  nullsub_40(v5); /*0x6c9c19*/
  FileStraw::Destructor((int)v6); /*0x6c9c22*/
  *(_DWORD *)v8.CDFileClass = &CCFileClass::`vftable'; /*0x6c9c2b*/
  v10 = 0; /*0x6c9c33*/
  Vector::Clear((int)v9); /*0x6c9c3a*/
  *(_DWORD *)v8.CDFileClass = &off_7E1668; /*0x6c9c43*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v8); /*0x6c9c4b*/
  return 1; /*0x6c9c0b*/
}



// ==== 0x006C9C60  BinkMovie::CheckKeyframeTransition  this=BinkMovie  sig=csp ====
int __thiscall BinkMovie::CheckKeyframeTransition(BinkMovie *this, unsigned int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // eax
  char v6; // bl
  unsigned int *v7; // ecx
  void (*BinkMovie_field_0xC)(void); // eax
  int v9; // ecx
  int *BinkMovie_field_0x14; // edi
  BinkMovie *v11; // esi

  v4 = *(_DWORD *)this->__pad_0; /*0x6c9c66*/
  if ( v4 ) /*0x6c9c6a*/
  {
    v5 = this->BinkMovie_field_0x4[0]; /*0x6c9c73*/
    v6 = 0; /*0x6c9c7a*/
    if ( v5 < *(_DWORD *)(v4 + 16) ) /*0x6c9c83*/
    {
      do /*0x6c9cb3*/
      {
        v7 = *(unsigned int **)(*(_DWORD *)(v4 + 4) + 4 * v5); /*0x6c9c88*/
        if ( *v7 > a2 ) /*0x6c9c8d*/
          break; /*0x6c9c8d*/
        this->BinkMovie_field_0x8 = v7; /*0x6c9c90*/
        this->BinkMovie_field_0x4[0] = v5 + 1; /*0x6c9c93*/
        BinkMovie_field_0xC = (void (*)(void))this->BinkMovie_field_0xC; /*0x6c9c96*/
        if ( BinkMovie_field_0xC ) /*0x6c9c9b*/
        {
          BinkMovie_field_0xC(); /*0x6c9c9d*/
        }
        else
        {
          BinkMovie::ProcessKeyframe(this, v7); /*0x6c9ca4*/
          v6 = 1; /*0x6c9ca9*/
        }
        v4 = *(_DWORD *)this->__pad_0; /*0x6c9cab*/
        v5 = this->BinkMovie_field_0x4[0]; /*0x6c9cad*/
      }
      while ( v5 < *(_DWORD *)(*(_DWORD *)this->__pad_0 + 16) ); /*0x6c9cb3*/
    }
    result = (int)this->BinkMovie_field_0x8; /*0x6c9cb5*/
    if ( result ) /*0x6c9cba*/
    {
      if ( a2 >= *(_DWORD *)result + *(_DWORD *)(result + 4) ) /*0x6c9cc5*/
      {
        result = (int)this->BinkMovie_field_0xC; /*0x6c9cc7*/
        this->BinkMovie_field_0x8 = 0; /*0x6c9cca*/
        if ( !result ) /*0x6c9ccf*/
        {
          v9 = this->BinkMovie_field_0x10[0]; /*0x6c9cd1*/
          if ( v9 ) /*0x6c9cd6*/
          {
            BinkMovie_field_0x14 = this->BinkMovie_field_0x14; /*0x6c9cda*/
            (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v9 + 20))(v9, this->BinkMovie_field_0x14, 0); /*0x6c9cdf*/
            v11 = this + 1; /*0x6c9ce4*/
            v6 = 1; /*0x6c9ce7*/
            *(_DWORD *)v11->__pad_0 = *BinkMovie_field_0x14; /*0x6c9ceb*/
            v11->BinkMovie_field_0x4[0] = BinkMovie_field_0x14[1]; /*0x6c9cf0*/
            v11->BinkMovie_field_0x8 = (void *)BinkMovie_field_0x14[2]; /*0x6c9cf6*/
            result = BinkMovie_field_0x14[3]; /*0x6c9cf9*/
            v11->BinkMovie_field_0xC = (void *)result; /*0x6c9cfc*/
            *BinkMovie_field_0x14 = 0; /*0x6c9cff*/
            BinkMovie_field_0x14[1] = 0; /*0x6c9d01*/
            BinkMovie_field_0x14[2] = 0; /*0x6c9d04*/
            BinkMovie_field_0x14[3] = 0; /*0x6c9d07*/
          }
        }
      }
    }
    LOBYTE(result) = v6; /*0x6c9d0a*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6c9c6d*/
  }
  return result; /*0x6c9c6c*/
}



// ==== 0x006C9D30  AbstractClass::getTotalValue  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::getTotalValue(AbstractClass *this, int a2)
{
  this->ptr_C = (void *)a2; /*0x6c9d34*/
  return a2; /*0x6c9d37*/
}



// ==== 0x006C9D40  BinkMovie::ProcessKeyframe  this=ObjectClass  sig=csp ====
void __thiscall BinkMovie::ProcessKeyframe(BinkMovie *this, _DWORD *a2)
{
  int v3; // ecx
  int *BinkMovie_field_0x14; // ebp
  TextGroup *v5; // esi
  int v6; // ebx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  _DWORD *pad_0; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // [esp-1Ch] [ebp-4Ch]
  int v14; // [esp+8h] [ebp-28h]
  int v15; // [esp+Ch] [ebp-24h] BYREF
  int v16; // [esp+10h] [ebp-20h]
  _WORD *v17; // [esp+14h] [ebp-1Ch]
  BinkMovie *v18; // [esp+18h] [ebp-18h]
  int v19; // [esp+1Ch] [ebp-14h] BYREF
  _DWORD v20[4]; // [esp+20h] [ebp-10h] BYREF

  v18 = this; /*0x6c9d46*/
  v3 = this->BinkMovie_field_0x10[0]; /*0x6c9d4a*/
  if ( v3 ) /*0x6c9d4f*/
  {
    BinkMovie_field_0x14 = this->BinkMovie_field_0x14; /*0x6c9d5a*/
    (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v3 + 20))(v3, this->BinkMovie_field_0x14, 0); /*0x6c9d60*/
    v5 = (TextGroup *)g_FogOfWarState; /*0x6c9d6b*/
    Property::Set( /*0x6c9dba*/
      (Property *)g_FogOfWarState,
      ((int)(unsigned __int8)a2[2] >> g_BitMask_Red << g_BitShift_Blue)
    | ((unsigned __int8)BYTE2(a2[2]) >> g_BitShift_Green_0 << g_BitShift_Red)
    | ((unsigned __int8)BYTE1(a2[2]) >> g_BitMask_Blue << g_BitMask_Green));
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this->BinkMovie_field_0x10[0] + 124))(this->BinkMovie_field_0x10[0]); /*0x6c9dca*/
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)this->BinkMovie_field_0x10[0] + 128))(this->BinkMovie_field_0x10[0]); /*0x6c9dd6*/
    v20[3] = v16; /*0x6c9ddc*/
    v20[0] = 0; /*0x6c9de4*/
    v20[1] = 0; /*0x6c9de8*/
    v20[2] = v6; /*0x6c9def*/
    TextGroup::SetRect(v5, v20); /*0x6c9df3*/
    v17 = (_WORD *)a2[5]; /*0x6c9e0d*/
    Text::Layout((Text *)v5, v17, &v15, &v19, v6); /*0x6c9e11*/
    v14 = 0; /*0x6c9e1e*/
    v7 = a2[4]; /*0x6c9e26*/
    v8 = *(_DWORD *)&v5[7] * (a2[3] - 1); /*0x6c9e29*/
    if ( v7 == 2 ) /*0x6c9e30*/
    {
      v9 = (v6 - v15) / 2; /*0x6c9e3d*/
    }
    else
    {
      if ( v7 != 1 ) /*0x6c9e44*/
      {
LABEL_7:
        v13 = v6; /*0x6c9e52*/
        pad_0 = v18->__pad_0; /*0x6c9e66*/
        Font::Print((int)v5, v18->BinkMovie_field_0x10[0], v17, v14, v8, v13, v16, 0, 0, 0); /*0x6c9e78*/
        pad_0 += 9; /*0x6c9e7f*/
        *pad_0 = *BinkMovie_field_0x14; /*0x6c9e85*/
        pad_0[1] = BinkMovie_field_0x14[1]; /*0x6c9e8a*/
        pad_0[2] = BinkMovie_field_0x14[2]; /*0x6c9e90*/
        v11 = v15; /*0x6c9e93*/
        pad_0[3] = BinkMovie_field_0x14[3]; /*0x6c9e9e*/
        v12 = v19; /*0x6c9ea1*/
        *BinkMovie_field_0x14 = v14; /*0x6c9ea5*/
        BinkMovie_field_0x14[1] = v8; /*0x6c9ea8*/
        BinkMovie_field_0x14[2] = v11; /*0x6c9eab*/
        BinkMovie_field_0x14[3] = v12; /*0x6c9eae*/
        return; /*0x6c9eae*/
      }
      v9 = v6 - v15; /*0x6c9e4c*/
    }
    v14 = v9; /*0x6c9e4e*/
    goto LABEL_7; /*0x6c9e4e*/
  }
}



// ==== 0x006C9EC0  BinkMovie::VtableDispatch  this=BinkMovie  sig=csp ====
_DWORD *__thiscall BinkMovie::VtableDispatch(BinkMovie *this, int a2)
{
  int v3; // ecx

  v3 = a2; /*0x6c9ec3*/
  *(_DWORD *)this->__pad_0 = a2; /*0x6c9ec9*/
  *((_DWORD *)this + 513) = 0; /*0x6c9ecb*/
  a2 = 0; /*0x6c9ed1*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v3 + 8))(v3, &a2, 2); /*0x6c9ede*/
  if ( (_WORD)a2 != 0xFEFF ) /*0x6c9ee8*/
    Debug::Log(); /*0x6c9eef*/
  return this->__pad_0; /*0x6c9ef9*/
}



// ==== 0x006C9F00  ObjectClass::nullsub_40  this=ObjectClass  sig=csp ====
void nullsub_40(ObjectClass *this)
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
      ++*((_DWORD *)this + 513); /*0x6c9f48*/
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
    v5 = wcslen(L"BeginMovie"); /*0x6c9f81*/
    if ( !_wcsnicmp(v4, L"BeginMovie", v5) ) /*0x6c9f8d*/
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
          this->ptr_C = 0; /*0x6ca01a*/
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
          ++*((_DWORD *)this + 513); /*0x6ca069*/
          v12 = WideString::Trim((wchar_t *)this + 2); /*0x6ca074*/
        }
        while ( !wcslen(v12) || *v12 == 59 || !v12 || !wcslen(v12) ); /*0x6ca08e*/
        if ( *v12 == 60 && v12[wcslen(v12) - 1] == 62 ) /*0x6ca0b7*/
          break; /*0x6ca0b7*/
        v21 = wcslen(aEn); /*0x6ca188*/
        if ( !_wcsnicmp(v12, aEn, v21) ) /*0x6ca19e*/
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
char __thiscall sub_6CA1E0(ObjectClass *this, char *Source)
{
  wchar_t *p_vtable1; // ebp
  int v4; // esi
  wchar_t *v5; // edi
  void *ptr_0; // ebx
  ObjectClass *v7; // eax
  wchar_t *v8; // esi
  size_t v9; // eax
  wchar_t *v10; // eax
  const wchar_t *v11; // esi
  char v13; // [esp+11h] [ebp-47h]
  wchar_t v14; // [esp+12h] [ebp-46h] BYREF
  ObjectClass *v15; // [esp+14h] [ebp-44h]
  wchar_t Dest[32]; // [esp+18h] [ebp-40h] BYREF

  v15 = this; /*0x6ca1f5*/
  mbstowcs(Dest, Source, 0x20u); /*0x6ca1f9*/
  p_vtable1 = (wchar_t *)&this->?; /*0x6ca201*/
  while ( 1 ) /*0x6ca27e*/
  {
    while ( 1 ) /*0x6ca208*/
    {
      v13 = 0; /*0x6ca208*/
      v4 = 0; /*0x6ca20d*/
      v5 = p_vtable1; /*0x6ca20f*/
      ptr_0 = v15->AbstractClass; /*0x6ca211*/
      *p_vtable1 = 0; /*0x6ca213*/
      while ( (*(int (__thiscall **)(void *, wchar_t *, int))(*(_DWORD *)ptr_0 + 8))(ptr_0, &v14, 2) == 2 ) /*0x6ca22a*/
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
      p_vtable1[v4] = 0; /*0x6ca257*/
      ++v7[11].location[1]; /*0x6ca260*/
      v8 = WideString::Trim(p_vtable1); /*0x6ca26b*/
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
    v9 = wcslen(L"BeginMovie"); /*0x6ca296*/
    if ( !_wcsnicmp(v8, L"BeginMovie", v9) ) /*0x6ca2a2*/
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
char __stdcall sub_6CA310(wchar_t *String, int a2)
{
  wchar_t *v2; // ebp
  wchar_t *i; // edi
  const wchar_t *v4; // esi
  wchar_t *v5; // ebx
  wchar_t *v6; // eax
  wchar_t *v7; // esi
  wchar_t *v8; // eax
  const wchar_t **v9; // esi
  const wchar_t **v10; // edi
  const wchar_t *v11; // eax
  wchar_t *Stringa; // [esp+18h] [ebp+4h]

  v2 = String; /*0x6ca313*/
  for ( i = wcschr(String, 0x3Du); i; i = wcschr(v2, 0x3Du) ) /*0x6ca32c*/
  {
    v4 = v2; /*0x6ca332*/
    *i = 0; /*0x6ca336*/
    Stringa = v2; /*0x6ca33b*/
    WideString::Trim(v2); /*0x6ca33f*/
    v5 = i + 1; /*0x6ca344*/
    WideString::Trim(i + 1); /*0x6ca349*/
    if ( i[1] == 34 ) /*0x6ca352*/
    {
      v5 = i + 2; /*0x6ca354*/
      v6 = wcschr(i + 2, 0x22u); /*0x6ca35a*/
      if ( !v6 ) /*0x6ca366*/
        break; /*0x6ca366*/
      *v6 = 0; /*0x6ca36c*/
      v7 = v6 + 1; /*0x6ca371*/
      WideString::Trim(v6 + 1); /*0x6ca376*/
      if ( *v7 == 44 ) /*0x6ca37f*/
        ++v7; /*0x6ca381*/
      v2 = v7; /*0x6ca384*/
      v4 = Stringa; /*0x6ca386*/
    }
    else
    {
      v8 = wcspbrk(i + 1, L", "); /*0x6ca392*/
      if ( v8 ) /*0x6ca39c*/
      {
        *v8 = 0; /*0x6ca39e*/
        v2 = v8 + 1; /*0x6ca3a3*/
      }
      else
      {
        v2 = &g_TypeClass_DefaultString; /*0x6ca3a8*/
      }
    }
    if ( !wcslen(v4) ) /*0x6ca3ae*/
      break; /*0x6ca3ae*/
    if ( v4 && off_8421A8 ) /*0x6ca3c9*/
    {
      v9 = (const wchar_t **)&off_8421A8; /*0x6ca3cb*/
      v10 = (const wchar_t **)&off_8421A8; /*0x6ca3d0*/
      while ( _wcsicmp(*v9, Stringa) ) /*0x6ca3e4*/
      {
        v11 = v10[2]; /*0x6ca3e6*/
        v10 += 2; /*0x6ca3e9*/
        v9 = v10; /*0x6ca3ee*/
        if ( !v11 ) /*0x6ca3f0*/
          goto LABEL_18; /*0x6ca3f0*/
      }
      ((void (__fastcall *)(wchar_t *, int))v9[1])(v5, a2); /*0x6ca3fa*/
    }
LABEL_18:
    WideString::Trim(v2); /*0x6ca3fd*/
    if ( !wcslen(v2) ) /*0x6ca40f*/
      return 1; /*0x6ca48f*/
  }
  Debug::Log(); /*0x6ca426*/
  return 0; /*0x6ca440*/
}



// ==== 0x006CA4A0  sub_6CA4A0  this=-  sig=csp ====
void __stdcall sub_6CA4A0(wchar_t *String2, int a2, int a3)
{
  const wchar_t **v3; // edi
  const wchar_t **v4; // esi
  const wchar_t *v5; // eax

  if ( String2 && off_8421A8 ) /*0x6ca4b2*/
  {
    v3 = (const wchar_t **)&off_8421A8; /*0x6ca4b4*/
    v4 = (const wchar_t **)&off_8421A8; /*0x6ca4b9*/
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



// ==== 0x006CA5A0  ObjectClass::method_6CA5A0  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_6CA5A0(ObjectClass *this)
{
  wchar_t *v1; // esi
  int v2; // edi
  wchar_t *v3; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // ebp
  wchar_t *v7; // ebx
  int v8; // esi
  wchar_t Destination[12]; // [esp+10h] [ebp-18h] BYREF

  wcsncpy(Destination, (const wchar_t *)this, 0xCu); /*0x6ca5af*/
  Destination[11] = 0; /*0x6ca5bb*/
  v1 = wcschr(Destination, 0x3Au); /*0x6ca5c7*/
  *v1++ = 0; /*0x6ca5d2*/
  v2 = WideChar::ToLong((int)Destination, 0, 10); /*0x6ca5e2*/
  v3 = wcschr(v1, 0x3Au); /*0x6ca5e9*/
  *v3 = 0; /*0x6ca5f0*/
  v4 = WideChar::ToLong((int)v1, 0, 10); /*0x6ca5f5*/
  v5 = (int)(v3 + 1); /*0x6ca5fa*/
  v6 = v4; /*0x6ca600*/
  v7 = wcschr(v3 + 1, 0x3Au); /*0x6ca607*/
  *v7 = 0; /*0x6ca60e*/
  v8 = WideChar::ToLong(v5, 0, 10); /*0x6ca61e*/
  return 60 * WideChar::ToLong((int)(v7 + 1), 0, 10) / 0x64u + 60 * (v8 + 60 * (v6 + 60 * v2)); /*0x6ca640*/
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
int __fastcall sub_6CA6A0(wchar_t *String1, int a2)
{
  const wchar_t *v2; // ebx
  wchar_t *v4; // eax
  wchar_t *v5; // esi
  int v6; // edi
  int result; // eax
  const wchar_t **v8; // eax
  wchar_t **v9; // esi
  wchar_t *v10; // ecx

  v2 = String1; /*0x6ca6a4*/
  v4 = wcschr(String1, 0x3Au); /*0x6ca6ab*/
  v5 = v4; /*0x6ca6b0*/
  if ( v4 ) /*0x6ca6b7*/
  {
    *v4 = 0; /*0x6ca6be*/
    *(_DWORD *)(a2 + 12) = wcstol(v2, 0, 0); /*0x6ca6cb*/
    v2 = v5 + 1; /*0x6ca6ce*/
  }
  v6 = 0; /*0x6ca6d7*/
  result = 2; /*0x6ca6db*/
  if ( off_8421D8 ) /*0x6ca6e0*/
  {
    v8 = (const wchar_t **)&off_8421D8; /*0x6ca6e2*/
    v9 = &off_8421D8; /*0x6ca6e7*/
    while ( 1 ) /*0x6ca6ed*/
    {
      result = _wcsicmp(v2, *v8); /*0x6ca6ed*/
      if ( !result ) /*0x6ca6f7*/
        break; /*0x6ca6f7*/
      v10 = v9[2]; /*0x6ca6f9*/
      v9 += 2; /*0x6ca6fc*/
      ++v6; /*0x6ca6ff*/
      v8 = (const wchar_t **)v9; /*0x6ca700*/
      if ( !v10 ) /*0x6ca704*/
      {
        result = 2; /*0x6ca706*/
        goto LABEL_8; /*0x6ca706*/
      }
    }
    *(_DWORD *)(a2 + 16) = dword_8421DC[2 * v6]; /*0x6ca71a*/
  }
  else
  {
LABEL_8:
    *(_DWORD *)(a2 + 16) = 2; /*0x6ca70b*/
  }
  return result; /*0x6ca70b*/
}



// ==== 0x006CA730  sub_6CA730  this=-  sig=ida-proto ====
int __fastcall sub_6CA730(wchar_t *Str, ObjectClass *a2)
{
  wchar_t *v4; // edi
  char v5; // al
  int v6; // esi
  wchar_t *v7; // edi
  unsigned __int8 v9; // [esp+Ch] [ebp-Ch]
  char v10; // [esp+10h] [ebp-8h]
  char v11; // [esp+14h] [ebp-4h]

  v4 = wcschr(Str, 0x3Au); /*0x6ca742*/
  *v4 = 0; /*0x6ca749*/
  v5 = WideChar::ToLong((int)Str, 0, 10); /*0x6ca74e*/
  v6 = (int)(v4 + 1); /*0x6ca753*/
  v11 = v5; /*0x6ca759*/
  v7 = wcschr(v4 + 1, 0x3Au); /*0x6ca762*/
  *v7 = 0; /*0x6ca769*/
  v10 = WideChar::ToLong(v6, 0, 10); /*0x6ca77b*/
  v9 = WideChar::ToLong((int)(v7 + 1), 0, 10); /*0x6ca78c*/
  return sub_6C9940(a2, v11, v10, v9); /*0x6ca7a1*/
}



// ==== 0x006CA7B0  sub_6CA7B0  this=-  sig=ida-proto ====
void __fastcall sub_6CA7B0(wchar_t *String, ObjectClass *a2)
{
  sub_6C9960(a2, String); /*0x6ca7b3*/
}



// ==== 0x006CA7C0  _DynamicVectorClass_PAVSubTitle::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_SubTitle::Destroy(_DynamicVectorClass_PAVSubTitle *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6ca7c6*/
  this->m_10 = 0; /*0x6ca7c9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6ca7d0*/
  {
    __3_YAXPAX_Z(v2); /*0x6ca7d6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6ca7de*/
  }
  BYTE1(this->m_C) = 0; /*0x6ca7e1*/
  this->m_8 = 0; /*0x6ca7e4*/
}



// ==== 0x006CA7F0  _DynamicVectorClass_PAVSubTitle::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SubTitle::GetItemIndex(_DynamicVectorClass_PAVSubTitle *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6ca7f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6ca805*/
  else
    return 0; /*0x6ca7f7*/
}



// ==== 0x006CA810  _VectorClass_PAVSubTitle::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SubTitle::Get(_VectorClass_PAVSubTitle *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6ca81a*/
}



// ==== 0x006CA820  _VectorClass_PAVSubTitle::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SubTitle::Add(_VectorClass_PAVSubTitle *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x6ca822*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6ca82d*/
  {
    v3 = 0; /*0x6ca82f*/
    if ( m_8 <= 0 ) /*0x6ca833*/
      return 1; /*0x6ca853*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6ca835*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6ca83b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6ca844*/
    {
      ++v3; /*0x6ca846*/
      ++v4; /*0x6ca847*/
      if ( v3 >= m_8 ) /*0x6ca84c*/
        return 1; /*0x6ca84c*/
    }
  }
  return 0; /*0x6ca84e*/
}



// ==== 0x006CA860  _DynamicVectorClass_PAVSubTitle::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_SubTitle::SetCapacity(_DynamicVectorClass_PAVSubTitle *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6ca86c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6ca872*/
    if ( a3 ) /*0x6ca878*/
      v4 = a3; /*0x6ca88e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6ca88a*/
    LOBYTE(this->m_C) = 1; /*0x6ca892*/
    if ( !v4 ) /*0x6ca896*/
      return 0; /*0x6ca90a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6ca898*/
    {
      m_8 = this->m_8; /*0x6ca89f*/
      if ( a2 < m_8 ) /*0x6ca8a4*/
        m_8 = a2; /*0x6ca8a6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6ca8ac*/
        ++i; /*0x6ca8b1*/
      if ( BYTE1(this->m_C) ) /*0x6ca8be*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6ca8c9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6ca8d1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x6ca8da*/
    this->m_8 = a2; /*0x6ca8e2*/
    BYTE1(this->m_C) = a3 == 0; /*0x6ca8e5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVSubTitle *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6ca8ee*/
  }
  v7 = this->m_8; /*0x6ca8f1*/
  if ( v7 < this->m_10 ) /*0x6ca8f9*/
    this->m_10 = v7; /*0x6ca8fb*/
  return 1; /*0x6ca8fe*/
}



// ==== 0x006CA910  _DynamicVectorClass_PAVSubTitle::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_SubTitle::FindItemIndex(_DynamicVectorClass_PAVSubTitle *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6ca910*/
  result = 0; /*0x6ca913*/
  if ( m_10 <= 0 ) /*0x6ca918*/
    return -1; /*0x6ca92f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6ca91e*/
  {
    if ( ++result >= m_10 ) /*0x6ca92d*/
      return -1; /*0x6ca92d*/
  }
  return result; /*0x6ca932*/
}



// ==== 0x006CA940  Render_Parse_6CA940  this=-  sig=csp ====
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
_DWORD *__thiscall VectorClass_ptr_SubTitle::Constructor_VectorClass_SubTitle___(
        _DynamicVectorClass_PAVSubTitle *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6ca9c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SubTitle *>::`vftable'; /*0x6ca9c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6ca9d0*/
  {
    __3_YAXPAX_Z(v3); /*0x6ca9d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6ca9e0*/
  }
  BYTE1(this->m_C) = 0; /*0x6ca9eb*/
  this->m_8 = 0; /*0x6ca9f1*/
  if ( (a2 & 1) != 0 ) /*0x6ca9f8*/
    __3_YAXPAX_Z(this); /*0x6ca9fb*/
  return this->__pad_0; /*0x6caa05*/
}



// ==== 0x006CAA10  _VectorClass_PAVSubTitle::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SubTitle::Release(_VectorClass_PAVSubTitle *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6caa1c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6caa26*/
    if ( a3 ) /*0x6caa2c*/
      v4 = a3; /*0x6caa42*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6caa3e*/
    LOBYTE(this->m_C) = 1; /*0x6caa46*/
    if ( v4 ) /*0x6caa4a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6caa55*/
      {
        m_8 = this->m_8; /*0x6caa5c*/
        if ( a2 < m_8 ) /*0x6caa61*/
          m_8 = a2; /*0x6caa63*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6caa69*/
          ++i; /*0x6caa6e*/
        if ( BYTE1(this->m_C) ) /*0x6caa7b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6caa86*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6caa8e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6caa97*/
      this->m_8 = a2; /*0x6caa9f*/
      BYTE1(this->m_C) = a3 == 0; /*0x6caaa2*/
      return 1; /*0x6caaa8*/
    }
    else
    {
      return 0; /*0x6caa4f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVSubTitle *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6caab2*/
    return 1; /*0x6caab8*/
  }
}



// ==== 0x006CAAC0  _VectorClass_PAVSubTitle::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_SubTitle::Remove(_VectorClass_PAVSubTitle *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6caacd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6caad3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6caadb*/
  }
  BYTE1(this->m_C) = 0; /*0x6caade*/
  this->m_8 = 0; /*0x6caae1*/
}



// ==== 0x006CAAF0  _VectorClass_PAVSubTitle::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SubTitle::GetSize(_VectorClass_PAVSubTitle *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6caaf0*/
    return 0; /*0x6caaf8*/
  m_8 = this->m_8; /*0x6caafe*/
  result = 0; /*0x6cab01*/
  if ( m_8 <= 0 ) /*0x6cab05*/
    return -1; /*0x6cab1c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6cab0b*/
  {
    if ( ++result >= m_8 ) /*0x6cab1a*/
      return -1; /*0x6cab1a*/
  }
  return result; /*0x6caafa*/
}



// ==== 0x006CAB30  _VectorClass_PAVSubTitle::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SubTitle::GetCapacity(_VectorClass_PAVSubTitle *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6cab30*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6cab45*/
  else
    return 0; /*0x6cab37*/
}



// ==== 0x006CAB50  _VectorClass_PAVSubTitle::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_SubTitle::QueryInterface(_VectorClass_PAVSubTitle *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6cab53*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SubTitle *>::`vftable'; /*0x6cab56*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6cab60*/
  {
    __3_YAXPAX_Z(v3); /*0x6cab68*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6cab70*/
  }
  BYTE1(this->m_C) = 0; /*0x6cab7b*/
  this->m_8 = 0; /*0x6cab81*/
  if ( (a2 & 1) != 0 ) /*0x6cab88*/
    __3_YAXPAX_Z(this); /*0x6cab8b*/
  return this->__pad_0; /*0x6cab95*/
}



// ==== 0x006CABA0  VectorClass::Render_Parse_6CABA0  this=VectorClass  sig=csp ====
_DWORD *__thiscall Render_Parse_6CABA0(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x6cabab*/
  this->Capacity = a2; /*0x6cabae*/
  this->IsInitialized = 1; /*0x6cabb1*/
  this->IsAllocated = 0; /*0x6cabb5*/
  this->ptr_0 = &VectorClass<SubTitle *>::`vftable'; /*0x6cabb8*/
  if ( a2 ) /*0x6cabbe*/
  {
    if ( a3 ) /*0x6cabc6*/
    {
      this->Items = (void *)a3; /*0x6cabc8*/
      return &this->ptr_0; /*0x6cabce*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x6cabdd*/
    this->IsAllocated = 1; /*0x6cabe0*/
  }
  return &this->ptr_0; /*0x6cabcd*/
}



// ==== 0x006CABF0  sub_6CABF0  this=-  sig=ida-proto ====
int sub_6CABF0()
{
  dword_B0BFF0 = 0; /*0x6cabf2*/
  dword_B0BFF4 = 0; /*0x6cabf7*/
  dword_B0BFF8 = 0; /*0x6cabfc*/
  dword_B0BFFC = 0; /*0x6cac01*/
  return 0; /*0x6cac06*/
}



// ==== 0x006CAC10  sub_6CAC10  this=-  sig=ida-proto ====
void sub_6CAC10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6cac1c*/
  dbl_B0C008 = Math::Sqrt(v0 + v0); /*0x6cac2e*/
}



// ==== 0x006CAC40  sub_6CAC40  this=-  sig=ida-proto ====
void sub_6CAC40()
{
  dbl_B0C080 = dbl_B0C008 / 60.0; /*0x6cac4c*/
}



// ==== 0x006CAC60  sub_6CAC60  this=-  sig=ida-proto ====
void sub_6CAC60()
{
  dbl_B0C068 = 1.0 / dbl_B0C080; /*0x6cac6c*/
}



// ==== 0x006CAC80  sub_6CAC80  this=-  sig=ida-proto ====
void sub_6CAC80()
{
  dbl_B0C060 = 0.0174532925199433 * 45.0; /*0x6cac8c*/
}



// ==== 0x006CACA0  sub_6CACA0  this=-  sig=ida-proto ====
void sub_6CACA0()
{
  dbl_B0C010 = 0.0174532925199433 * 60.0; /*0x6cacac*/
}



// ==== 0x006CACC0  sub_6CACC0  this=-  sig=ida-proto ====
void sub_6CACC0()
{
  dbl_B0BFE8 = 0.0174532925199433 * 90.0; /*0x6caccc*/
}



// ==== 0x006CACE0  sub_6CACE0  this=-  sig=ida-proto ====
__int64 sub_6CACE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0BFE8 - dbl_B0C010); /*0x6cacf2*/
  result = Math::RoundToInt(v0 * dbl_B0C008 * 0.5); /*0x6cad06*/
  dword_B0C088 = result; /*0x6cad0b*/
  return result; /*0x6cad10*/
}



// ==== 0x006CAD20  sub_6CAD20  this=-  sig=ida-proto ====
void sub_6CAD20()
{
  dbl_B0C018 = Math::ArcTan((double)dword_B0C088 * 0.00390625); /*0x6cad37*/
}



// ==== 0x006CAD50  sub_6CAD50  this=-  sig=ida-proto ====
void sub_6CAD50()
{
  dbl_B0C030 = Math::ArcTan((double)(2 * dword_B0C088) / dbl_B0C008); /*0x6cad72*/
}



// ==== 0x006CAD80  sub_6CAD80  this=-  sig=ida-proto ====
__int64 sub_6CAD80()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0C088) + 0.5); /*0x6cad9b*/
  dword_B0C07C = result; /*0x6cada0*/
  return result; /*0x6cada6*/
}



// ==== 0x006CADB0  sub_6CADB0  this=-  sig=ida-proto ====
int sub_6CADB0()
{
  dword_B0C000 = 0; /*0x6cadb2*/
  return 0; /*0x6cadbe*/
}



// ==== 0x006CADC0  sub_6CADC0  this=-  sig=ida-proto ====
int sub_6CADC0()
{
  dword_B0C020 = 0; /*0x6cadc2*/
  dword_B0C024 = 0; /*0x6cadc7*/
  dword_B0C028 = 0; /*0x6cadcc*/
  return 0; /*0x6cadd1*/
}



// ==== 0x006CADE0  sub_6CADE0  this=-  sig=ida-proto ====
int sub_6CADE0()
{
  dword_B0C078 = 0; /*0x6cade5*/
  dword_B0C070 = 128; /*0x6cadef*/
  dword_B0C074 = 128; /*0x6cadf4*/
  return 128; /*0x6cadf9*/
}



// ==== 0x006CAE00  sub_6CAE00  this=-  sig=ida-proto ====
int sub_6CAE00()
{
  dword_B0C038 = 0; /*0x6cae1b*/
  dword_B0C03C = 1; /*0x6cae2a*/
  dword_B0C040 = -65535; /*0x6cae45*/
  dword_B0C044 = -65536; /*0x6cae59*/
  dword_B0C048 = -1; /*0x6cae6d*/
  dword_B0C050 = 0x1FFFF; /*0x6cae98*/
  dword_B0C04C = 0xFFFF; /*0x6caeab*/
  dword_B0C054 = 0x10000; /*0x6caeb1*/
  dword_B0C058 = 65537; /*0x6caeb7*/
  return 65537; /*0x6caebe*/
}



// ==== 0x006CAEC0  SuperClass::Constructor  this=SuperClass  sig=csp ====
int __thiscall SuperClass::Constructor(SuperClass *this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6caec3*/
  this->SuperClass_field_0x24 = (void *)-1; /*0x6caecd*/
  this->SuperClass_field_0x28 = 0; /*0x6caed0*/
  this->SuperClass_field_0x2C = 0; /*0x6caed3*/
  this->SuperClass_field_0x30 = *(void **)&stru_A8EB00.?[416]; /*0x6caedc*/
  this->SuperClass_field_0x38 = 0; /*0x6caedf*/
  *(_DWORD *)&this->__pad_3C[12] = 0; /*0x6caee2*/
  this->__pad_3C[4] = 0; /*0x6caee5*/
  *(_DWORD *)&this->__pad_3C[16] = 0; /*0x6caee8*/
  *(_DWORD *)&this->__pad_3C[20] = -1; /*0x6caeeb*/
  LOBYTE(this->SuperClass_field_0x60) = 1; /*0x6caeee*/
  *(void **)((char *)&this->SuperClass_field_0x60 + 2) = (void *)dword_B0C000; /*0x6caef8*/
  this->SuperClass_field_0x68 = 0; /*0x6caefb*/
  LOBYTE(this->SuperClass_field_0x6C) = 0; /*0x6caefe*/
  BYTE1(this->SuperClass_field_0x6C) = 0; /*0x6caf01*/
  BYTE2(this->SuperClass_field_0x6C) = 0; /*0x6caf04*/
  HIBYTE(this->SuperClass_field_0x6C) = 0; /*0x6caf07*/
  LOBYTE(this->SuperClass_field_0x70) = 0; /*0x6caf0a*/
  this->SuperClass_field_0x7C = (void *)-1; /*0x6caf0d*/
  this->SuperClass_field_0x0 = &SuperClass::`vftable'; /*0x6caf10*/
  this->SuperClass_field_0x4 = &SuperClass::`vftable'; /*0x6caf16*/
  this->SuperClass_field_0x8 = &SuperClass::`vftable'; /*0x6caf1d*/
  *(_DWORD *)this->__pad_C = &SuperClass::`vftable'; /*0x6caf24*/
  *(_DWORD *)this->__pad_3C = &g_TypeClass_DefaultString; /*0x6caf2b*/
  if ( dword_A83CC8 < dword_A83CC0 /*0x6caf64*/
    || (byte_A83CC5 || !dword_A83CC0)
    && dword_A83CCC > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A83CB8 + 8))(
         &dword_A83CB8,
         dword_A83CC0 + dword_A83CCC,
         0) )
  {
    v2 = dword_A83CC8++; /*0x6caf71*/
    *((_DWORD *)dword_A83CBC + v2) = this; /*0x6caf80*/
  }
  return (int)this; /*0x6caf85*/
}



// ==== 0x006CAF90  SuperClass::Construct  this=SuperClass  sig=csp ====
int __thiscall SuperClass_Constructor(int this, int a2, int a3)
{
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6caf94*/
  *(_DWORD *)(this + 40) = a2; /*0x6cafa4*/
  *(_DWORD *)(this + 36) = -1; /*0x6cafa7*/
  *(_DWORD *)(this + 44) = a3; /*0x6cafaa*/
  *(_DWORD *)(this + 48) = dword_A8ED84; /*0x6cafb5*/
  *(_DWORD *)(this + 56) = 0; /*0x6cafb8*/
  *(_DWORD *)(this + 72) = 0; /*0x6cafbb*/
  *(_BYTE *)(this + 64) = 0; /*0x6cafbe*/
  *(_DWORD *)(this + 76) = 0; /*0x6cafc1*/
  *(_DWORD *)(this + 80) = -1; /*0x6cafc4*/
  *(_BYTE *)(this + 96) = 1; /*0x6cafc7*/
  v4 = dword_B0C000; /*0x6cafcb*/
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
  *(_DWORD *)(this + 12) = &SuperClass::`vftable'; /*0x6cb00a*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x6cb011*/
  if ( dword_A83CC8 < dword_A83CC0 /*0x6cb049*/
    || (byte_A83CC5 || !dword_A83CC0)
    && dword_A83CCC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83CB8 + 8))(
         &dword_A83CB8,
         dword_A83CC0 + dword_A83CCC,
         0) )
  {
    v5 = dword_A83CC8++; /*0x6cb056*/
    *((_DWORD *)dword_A83CBC + v5) = this; /*0x6cb065*/
  }
  if ( dword_B0F680 < dword_B0F678 /*0x6cb09c*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F678 + dword_B0F684,
         0) )
  {
    v6 = dword_B0F680++; /*0x6cb0a9*/
    *((_DWORD *)dword_B0F674 + v6) = this; /*0x6cb0b8*/
  }
  if ( dword_B0F6D8 < dword_B0F6D0 /*0x6cb0ef*/
    || (byte_B0F6D5 || !dword_B0F6D0)
    && dword_B0F6DC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F6C8 + 8))(
         &dword_B0F6C8,
         dword_B0F6D0 + dword_B0F6DC,
         0) )
  {
    v7 = dword_B0F6D8++; /*0x6cb0fc*/
    *((_DWORD *)dword_B0F6CC + v7) = this; /*0x6cb10b*/
  }
  return this; /*0x6cb110*/
}



// ==== 0x006CB120  SuperClass::CleanupMembers  this=SuperClass  sig=csp ====
void __thiscall SuperClass::CleanupMembers(int this)
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
  *(_DWORD *)(this + 12) = &SuperClass::`vftable'; /*0x6cb13d*/
  if ( v2 ) /*0x6cb144*/
  {
    *(_BYTE *)(v2 + 405) = 0; /*0x6cb146*/
    *(_DWORD *)(this + 104) = 0; /*0x6cb14d*/
    v9 = this; /*0x6cb164*/
    v3 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.?[0] + 16))(g_BuildingLoadQueue_Array.?, &v9); /*0x6cb168*/
    if ( v3 != -1 ) /*0x6cb16e*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v3); /*0x6cb176*/
  }
  if ( *(_BYTE *)(this + 108) ) /*0x6cb17b*/
  {
    v9 = this; /*0x6cb192*/
    v4 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.?[0] + 16))(g_BuildingLoadQueue_Array.?, &v9); /*0x6cb196*/
    if ( v4 != -1 ) /*0x6cb19c*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v4); /*0x6cb1a4*/
    *(_BYTE *)(this + 108) = 0; /*0x6cb1a9*/
  }
  v9 = this; /*0x6cb1bd*/
  v5 = (*((int (__thiscall **)(SuperClass *, int *))stru_A83D50.SuperClass_field_0x0 + 4))(&stru_A83D50, &v9); /*0x6cb1c1*/
  if ( v5 != -1 && v5 < (int)stru_A83D50.SuperClass_field_0x10 ) /*0x6cb1d1*/
  {
    --stru_A83D50.SuperClass_field_0x10; /*0x6cb1d6*/
    for ( ; /*0x6cb1dc*/
          v5 < (int)stru_A83D50.SuperClass_field_0x10;
          *((_DWORD *)stru_A83D50.SuperClass_field_0x4 + v5 - 1) = *((_DWORD *)stru_A83D50.SuperClass_field_0x4 + v5) )
    {
      ++v5; /*0x6cb1e4*/
    }
  }
  v9 = this; /*0x6cb206*/
  v6 = (*(int (__thiscall **)(_DWORD *, int *))(dword_A83CB8 + 16))(&dword_A83CB8, &v9); /*0x6cb20a*/
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
  v7 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6cb253*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v9);
  if ( v7 != -1 && v7 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x6cb263*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x6cb268*/
    for ( ; /*0x6cb26e*/
          v7 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v7) )
    {
      ++v7; /*0x6cb276*/
    }
  }
  v9 = this; /*0x6cb298*/
  v8 = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E88 + 16))( /*0x6cb29c*/
         g_BuildingLoadQueue_Array.__pad_E88,
         &v9);
  if ( v8 != -1 && v8 < *(int *)&g_BuildingLoadQueue_Array.__pad_E88[16] ) /*0x6cb2ac*/
  {
    --*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[16]; /*0x6cb2b1*/
    for ( ; /*0x6cb2b7*/
          v8 < *(int *)&g_BuildingLoadQueue_Array.__pad_E88[16];
          *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[4] + 4 * v8 - 4) = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[4] + 4 * v8) )
    {
      ++v8; /*0x6cb2bf*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x6cb2d3*/
}



// ==== 0x006CB3A0  SuperClass::CreateChronoAnim  this=SuperClass  sig=csp ====
void **__thiscall SuperClass::CreateChronoAnim(SuperClass *this, int a2, int a3, int a4)
{
  _BYTE *SuperClass_field_0x68; // eax
  int v6; // eax
  int v7; // eax
  void **result; // eax
  SuperClass *v9; // [esp+4h] [ebp-10h] BYREF
  int v10[3]; // [esp+8h] [ebp-Ch] BYREF

  SuperClass_field_0x68 = this->SuperClass_field_0x68; /*0x6cb3a6*/
  if ( SuperClass_field_0x68 ) /*0x6cb3ab*/
  {
    SuperClass_field_0x68[405] = 0; /*0x6cb3ad*/
    this->SuperClass_field_0x68 = 0; /*0x6cb3b4*/
    v9 = this; /*0x6cb3cb*/
    v6 = (*(int (__thiscall **)(int *, SuperClass **))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x6cb3cf*/
           g_BuildingLoadQueue_Array.?,
           &v9);
    if ( v6 != -1 ) /*0x6cb3d5*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v6); /*0x6cb3dd*/
  }
  if ( LOBYTE(this->SuperClass_field_0x6C) ) /*0x6cb3e2*/
  {
    v9 = this; /*0x6cb3f9*/
    v7 = (*(int (__thiscall **)(int *, SuperClass **))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x6cb3fd*/
           g_BuildingLoadQueue_Array.?,
           &v9);
    if ( v7 != -1 ) /*0x6cb403*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v7); /*0x6cb40b*/
    LOBYTE(this->SuperClass_field_0x6C) = 0; /*0x6cb410*/
  }
  result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6cb419*/
  if ( result ) /*0x6cb423*/
  {
    v10[0] = a2; /*0x6cb444*/
    v10[1] = a3; /*0x6cb455*/
    v10[2] = a4 + 5; /*0x6cb459*/
    result = AnimClass::ctor( /*0x6cb467*/
               (AnimClass *)result,
               *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 816),
               v10,
               0,
               1,
               (void *)0x600,
               0,
               0);
    if ( result ) /*0x6cb470*/
    {
      this->SuperClass_field_0x68 = result; /*0x6cb472*/
      result = (void **)g_BuildingLoadQueue_Array.?; /*0x6cb475*/
      if ( g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.? /*0x6cb4ae*/
        || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
        && g_BuildingLoadQueue_Array.?[2] > 0
        && (result = (void **)(*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[0] + 8))(
                                g_BuildingLoadQueue_Array.?,
                                g_BuildingLoadQueue_Array.? + g_BuildingLoadQueue_Array.?[2],
                                0),
            (_BYTE)result) )
      {
        result = (void **)g_BuildingLoadQueue_Array.?[1]++; /*0x6cb4b6*/
        *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * (_DWORD)result) = this; /*0x6cb4c5*/
      }
    }
  }
  return result; /*0x6cb4c8*/
}



// ==== 0x006CB4D0  SuperClass::SetOnHold  this=SuperClass  sig=csp ====
int __thiscall SuperClass::SetOnHold(int this, char a2)
{
  int result; // eax
  int v3; // esi
  int v4; // eax

  if ( !*(_BYTE *)(this + 109) || *(_BYTE *)(this + 110) || a2 == *(_BYTE *)(this + 112) || !*(_BYTE *)(this + 96) ) /*0x6cb4ea*/
  {
    LOBYTE(result) = 0; /*0x6cb552*/
  }
  else
  {
    if ( a2 || (result = *(_DWORD *)(this + 40), *(_BYTE *)(result + 245)) ) /*0x6cb4f9*/
    {
      v3 = *(_DWORD *)(this + 48); /*0x6cb51c*/
      if ( v3 != -1 ) /*0x6cb522*/
      {
        v4 = *(_DWORD *)(this + 56); /*0x6cb524*/
        if ( (int)dword_A8ED84 - v3 >= v4 ) /*0x6cb536*/
          result = 0; /*0x6cb53c*/
        else
          result = v4 - ((_DWORD)dword_A8ED84 - v3); /*0x6cb538*/
        *(_DWORD *)(this + 56) = result; /*0x6cb53e*/
        *(_DWORD *)(this + 48) = -1; /*0x6cb541*/
      }
    }
    else if ( *(_DWORD *)(this + 48) == -1 ) /*0x6cb507*/
    {
      *(_DWORD *)(this + 48) = dword_A8ED84; /*0x6cb510*/
      *(_BYTE *)(this + 112) = 0; /*0x6cb513*/
      LOBYTE(result) = 1; /*0x6cb516*/
      return result; /*0x6cb519*/
    }
    *(_BYTE *)(this + 112) = a2; /*0x6cb548*/
    LOBYTE(result) = 1; /*0x6cb54c*/
  }
  return result; /*0x6cb518*/
}



// ==== 0x006CB560  SuperClass::StartTimer  this=JumpjetLocomotionClass  sig=csp ====
char __thiscall SuperClass::StartTimer(int this, int a2, char a3, char a4)
{
  char v5; // al
  int v6; // ecx
  int v7; // edx
  void *v8; // eax
  int v9; // eax
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edi
  int v15; // eax
  int DefaultTimer; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v21; // [esp+8h] [ebp-Ch] BYREF
  int v22; // [esp+Ch] [ebp-8h]
  int v23; // [esp+10h] [ebp-4h]

  if ( !*(_BYTE *)(this + 109) ) /*0x6cb569*/
  {
    v5 = a2; /*0x6cb572*/
    v6 = *(_DWORD *)(this + 40); /*0x6cb576*/
    *(_BYTE *)(this + 109) = 1; /*0x6cb579*/
    *(_BYTE *)(this + 110) = v5; /*0x6cb57d*/
    *(_BYTE *)(this + 64) = 0; /*0x6cb580*/
    v7 = *(_DWORD *)(v6 + 96); /*0x6cb583*/
    LOBYTE(a2) = 0; /*0x6cb589*/
    *(_DWORD *)(this + 60) = v7; /*0x6cb58d*/
    if ( !v5 && *(_BYTE *)(this + 112) && *(_BYTE *)(this + 96) ) /*0x6cb597*/
    {
      if ( *(_BYTE *)(v6 + 245) ) /*0x6cb59c*/
      {
        if ( *(_DWORD *)(this + 48) != -1 ) /*0x6cb5bd*/
        {
          *(_DWORD *)(this + 56) = Locomotor::GetSpeed((Locomotor *)(this + 48)); /*0x6cb5c6*/
          *(_DWORD *)(this + 48) = -1; /*0x6cb5c9*/
        }
      }
      else if ( *(_DWORD *)(this + 48) == -1 ) /*0x6cb5a8*/
      {
        *(_DWORD *)(this + 48) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6cb5af*/
      }
      *(_BYTE *)(this + 112) = 0; /*0x6cb5cf*/
    }
    if ( *(_BYTE *)(*(_DWORD *)(this + 40) + 244) /*0x6cb61f*/
      && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 44) + 52) + 422)
      && ((int)stru_A83D50.SuperClass_field_0x10 < (int)stru_A83D50.SuperClass_field_0x8
       || (stru_A83D50.__pad_C[1] || !stru_A83D50.SuperClass_field_0x8)
       && *(int *)stru_A83D50.__pad_14 > 0
       && (*((unsigned __int8 (__thiscall **)(SuperClass *, char *, _DWORD))stru_A83D50.SuperClass_field_0x0 + 2))(
            &stru_A83D50,
            (char *)stru_A83D50.SuperClass_field_0x8 + *(_DWORD *)stru_A83D50.__pad_14,
            0)) )
    {
      v8 = stru_A83D50.SuperClass_field_0x10++; /*0x6cb62c*/
      *((_DWORD *)stru_A83D50.SuperClass_field_0x4 + (_DWORD)v8) = this; /*0x6cb63b*/
    }
    v9 = *(_DWORD *)(this + 40); /*0x6cb63e*/
    if ( *(_BYTE *)(v9 + 245) ) /*0x6cb641*/
    {
      v10 = *(_DWORD *)(this + 36); /*0x6cb649*/
      *(_DWORD *)(this + 120) = -1; /*0x6cb64c*/
      if ( v10 == -1 ) /*0x6cb656*/
        v10 = *(_DWORD *)(v9 + 176); /*0x6cb658*/
      v11 = (_DWORD *)(this + 48); /*0x6cb664*/
      *(_DWORD *)(this + 48) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6cb669*/
      *(_DWORD *)(this + 52) = v22; /*0x6cb66f*/
      *(_DWORD *)(this + 56) = v10; /*0x6cb672*/
      v12 = *(_DWORD *)(this + 48); /*0x6cb675*/
      if ( v12 != -1 ) /*0x6cb67a*/
      {
        v13 = *(_DWORD *)(this + 56); /*0x6cb680*/
        v14 = *(_DWORD *)&stru_A8EB00.?[416] - v12; /*0x6cb68e*/
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v12 >= v13 ) /*0x6cb692*/
        {
          *(_DWORD *)(this + 56) = 0; /*0x6cb6a6*/
          *v11 = -1; /*0x6cb6a9*/
        }
        else
        {
          *v11 = -1; /*0x6cb696*/
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
        a2 = this; /*0x6cb6ce*/
        VectorClass::RemoveAt((VectorClass *)g_BuildingLoadQueue_Array.?, (int)&a2); /*0x6cb6d2*/
      }
      if ( *(_BYTE *)(this + 108) ) /*0x6cb6d7*/
      {
        a2 = this; /*0x6cb6e6*/
        VectorClass::RemoveAt((VectorClass *)g_BuildingLoadQueue_Array.?, (int)&a2); /*0x6cb6ea*/
        *(_BYTE *)(this + 108) = 0; /*0x6cb6ef*/
      }
      if ( !*(_BYTE *)(this + 109) /*0x6cb704*/
        || *(_BYTE *)(this + 111)
        || *(_BYTE *)(this + 112) && !*(_BYTE *)(*(_DWORD *)(this + 40) + 237) )
      {
        LOBYTE(a2) = 0; /*0x6cb757*/
      }
      else
      {
        *(_DWORD *)(this + 120) = -1; /*0x6cb70f*/
        SuperClass::SetCurrentFrame((SuperClass *)(this + 48)); /*0x6cb718*/
        DefaultTimer = Super::GetDefaultTimer((Super *)this); /*0x6cb71f*/
        Timer::Start((Timer *)&v21, DefaultTimer); /*0x6cb729*/
        v17 = v22; /*0x6cb732*/
        v18 = v23; /*0x6cb736*/
        *(_DWORD *)(this + 48) = v21; /*0x6cb73a*/
        v19 = *(_DWORD *)(this + 40); /*0x6cb73c*/
        *(_DWORD *)(this + 52) = v17; /*0x6cb73f*/
        *(_DWORD *)(this + 56) = v18; /*0x6cb742*/
        if ( *(_BYTE *)(v19 + 229) ) /*0x6cb745*/
          *(_DWORD *)(this + 124) = 0; /*0x6cb74d*/
        LOBYTE(a2) = 1; /*0x6cb750*/
      }
    }
    if ( a4 && *(_BYTE *)(this + 109) ) /*0x6cb764*/
    {
      if ( *(_BYTE *)(this + 110) ) /*0x6cb769*/
        goto LABEL_45; /*0x6cb76c*/
      if ( *(_BYTE *)(this + 112) != 1 ) /*0x6cb772*/
      {
        if ( *(_BYTE *)(this + 96) ) /*0x6cb774*/
        {
          SuperClass::AdvanceCountdown((SuperClass *)(this + 48)); /*0x6cb77c*/
          *(_BYTE *)(this + 112) = 1; /*0x6cb781*/
        }
      }
    }
    if ( !*(_BYTE *)(this + 110) ) /*0x6cb788*/
      return a2; /*0x6cb79f*/
LABEL_45:
    SuperClass::AnnounceReady(this, a3); /*0x6cb78a*/
    return a2; /*0x6cb791*/
  }
  return 0; /*0x6cb79a*/
}



// ==== 0x006CB7B0  SuperClass::Lose  this=SuperClass  sig=csp ====
char __thiscall SuperClass::Lose(SuperClass *this)
{
  int v1; // eax
  SuperClass *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this; /*0x6cb7b0*/
  if ( !BYTE1(this->SuperClass_field_0x6C) ) /*0x6cb7b1*/
    return 0; /*0x6cb80d*/
  HIBYTE(this->SuperClass_field_0x6C) = 0; /*0x6cb7ba*/
  BYTE1(this->SuperClass_field_0x6C) = 0; /*0x6cb7bd*/
  v3 = this; /*0x6cb7ca*/
  v1 = (*((int (__thiscall **)(SuperClass *, SuperClass **))stru_A83D50.SuperClass_field_0x0 + 4))(&stru_A83D50, &v3); /*0x6cb7d4*/
  if ( v1 != -1 && v1 < (int)stru_A83D50.SuperClass_field_0x10 ) /*0x6cb7e4*/
  {
    --stru_A83D50.SuperClass_field_0x10; /*0x6cb7e9*/
    for ( ; /*0x6cb7ef*/
          v1 < (int)stru_A83D50.SuperClass_field_0x10;
          *((_DWORD *)stru_A83D50.SuperClass_field_0x4 + v1 - 1) = *((_DWORD *)stru_A83D50.SuperClass_field_0x4 + v1) )
    {
      ++v1; /*0x6cb7f7*/
    }
  }
  return 1; /*0x6cb80c*/
}



// ==== 0x006CB820  SuperClass::SetReadiness  this=SuperClass  sig=csp ====
char __thiscall SuperClass::SetReadiness(SuperClass *this, char a2)
{
  HIBYTE(this->SuperClass_field_0x6C) = a2; /*0x6cb824*/
  return a2; /*0x6cb827*/
}



// ==== 0x006CB830  SuperClass::StopPreclickAnim  this=SuperClass  sig=csp ====
char __thiscall SuperClass::StopPreclickAnim(int this, int a2)
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
    v4 = (*(int (__thiscall **)(int *, _DWORD *))(stru_B0F5B8 + 16))(&stru_B0F5B8, v8); /*0x6cb85d*/
    if ( v4 != -1 ) /*0x6cb863*/
      DynamicVector::RemoveItem(&stru_B0F5B8, v4); /*0x6cb86b*/
  }
  if ( *(_BYTE *)(this + 108) ) /*0x6cb870*/
  {
    v8[0] = this; /*0x6cb885*/
    v5 = (*(int (__thiscall **)(int *, _DWORD *))(stru_B0F5B8 + 16))(&stru_B0F5B8, v8); /*0x6cb889*/
    if ( v5 != -1 ) /*0x6cb88f*/
      DynamicVector::RemoveItem(&stru_B0F5B8, v5); /*0x6cb897*/
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
    *(_DWORD *)(this + 48) = dword_A8ED84; /*0x6cb8ce*/
  v6 = *(_DWORD *)(this + 36); /*0x6cb8d1*/
  if ( v6 == -1 ) /*0x6cb8d7*/
    v6 = *(_DWORD *)(*(_DWORD *)(this + 40) + 176); /*0x6cb8dc*/
  *(_DWORD *)(this + 48) = dword_A8ED84; /*0x6cb8e7*/
  *(_DWORD *)(this + 52) = v8[2]; /*0x6cb8ee*/
  *(_DWORD *)(this + 56) = v6; /*0x6cb8f1*/
  if ( *(_BYTE *)(*(_DWORD *)(this + 40) + 229) ) /*0x6cb8f7*/
    *(_DWORD *)(this + 124) = 0; /*0x6cb8ff*/
  return 1; /*0x6cb902*/
}



// ==== 0x006CB920  SuperClass::ClickFire  this=SuperClass  sig=csp ====
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
        v9 = dword_A8ED84; /*0x6cb979*/
        v10 = (wchar_t **)(this + 48); /*0x6cb97f*/
        if ( v7 != -1 ) /*0x6cb985*/
        {
          if ( (int)dword_A8ED84 - v7 >= v8 ) /*0x6cb98d*/
          {
            a2 = 0; /*0x6cb9c7*/
            goto LABEL_11; /*0x6cb9cb*/
          }
          v8 -= (int)dword_A8ED84 - v7; /*0x6cb98f*/
        }
        a2 = v8; /*0x6cb991*/
LABEL_11:
        LOWORD(v11) = Math::RoundToInt((double)(int)a3 - (double)a2 / *(double *)dword_8871E0->ChargeToDrainRatio); /*0x6cb995*/
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
        v16 = dword_A8ED84; /*0x6cb9f5*/
        if ( v14 != -1 ) /*0x6cb9fe*/
        {
          if ( (int)dword_A8ED84 - v14 >= v15 ) /*0x6cba06*/
            v15 = 0; /*0x6cba0c*/
          else
            v15 -= (int)dword_A8ED84 - v14; /*0x6cba08*/
        }
        LOWORD(v17) = Math::RoundToInt((double)(v13 - v15) * *(double *)dword_8871E0->ChargeToDrainRatio); /*0x6cba23*/
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
  if ( *(_DWORD *)(v4 + 180) == 2 && Weapon_Helper() ) /*0x6cbaa7*/
  {
    if ( (_BYTE)a2 ) /*0x6cbab4*/
    {
      Weapon_Get(); /*0x6cbaba*/
      return 0; /*0x6cbac7*/
    }
    return 0; /*0x6cbab4*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(this + 40) + 180) == 7 && (unsigned __int8)PsyDom::IsActive() ) /*0x6cbad6*/
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
      v24 = dword_A8ED84; /*0x6cbb79*/
      *(_DWORD *)(this + 120) = -1; /*0x6cbb80*/
      *v19 = v24; /*0x6cbb87*/
      *(_DWORD *)(this + 52) = v30; /*0x6cbb8d*/
      *(_DWORD *)(this + 56) = v23; /*0x6cbb90*/
      v25 = *v19; /*0x6cbb93*/
      if ( *v19 != (wchar_t *)-1 ) /*0x6cbb98*/
      {
        v26 = *(_DWORD *)(this + 56); /*0x6cbb9e*/
        v27 = (char *)((char *)dword_A8ED84 - (char *)v25); /*0x6cbbac*/
        if ( (char *)dword_A8ED84 - (char *)v25 >= v26 ) /*0x6cbbb0*/
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
        VectorClass::RemoveAt(&stru_B0F5B8, (int)&a2); /*0x6cbc14*/
      }
      if ( *(_BYTE *)(this + 108) ) /*0x6cbc19*/
      {
        a2 = this; /*0x6cbc28*/
        VectorClass::RemoveAt(&stru_B0F5B8, (int)&a2); /*0x6cbc2c*/
        *(_BYTE *)(this + 108) = 0; /*0x6cbc31*/
      }
      if ( *(_BYTE *)(this + 109) /*0x6cbc46*/
        && !*(_BYTE *)(this + 111)
        && (!*(_BYTE *)(this + 112) || *(_BYTE *)(*(_DWORD *)(this + 40) + 237)) )
      {
        *(_DWORD *)(this + 120) = -1; /*0x6cbc4e*/
        if ( *v19 == (wchar_t *)-1 ) /*0x6cbc5a*/
          *v19 = dword_A8ED84; /*0x6cbc62*/
        v29 = *(_DWORD *)(this + 36); /*0x6cbc64*/
        if ( v29 == -1 ) /*0x6cbc6a*/
          v29 = *(_DWORD *)(*(_DWORD *)(this + 40) + 176); /*0x6cbc6f*/
        *v19 = dword_A8ED84; /*0x6cbc7a*/
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
  v22 = (*(int (__thiscall **)(int *, int *))(stru_A83D50 + 16))(&stru_A83D50, &a2); /*0x6cbb45*/
  if ( v22 != -1 ) /*0x6cbb4b*/
    SuperClass::RemoveFromPointerArray(&stru_A83D50, v22); /*0x6cbb53*/
  return 1; /*0x6cb9bc*/
}



// ==== 0x006CBCA0  SuperWeapon::UpdateSuperWeaponReadyState  this=SuperWeapon  sig=csp ====
char __thiscall SuperWeapon::UpdateSuperWeaponReadyState(int this, char a2)
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
    StartAudioControllerAt(*(_DWORD *)(v4 + 192), (_DWORD *)(this + 84), 0); /*0x6cbccf*/
  }
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1438] != 4 ) /*0x6cbce1*/
  {
    v5 = *(_DWORD *)(this + 104); /*0x6cbce3*/
    if ( v5 ) /*0x6cbce8*/
    {
      *(_BYTE *)(v5 + 413) = 1; /*0x6cbcea*/
      AudioFile::Stop((AudioFile *)(*(_DWORD *)(this + 104) + 416)); /*0x6cbcf9*/
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
  if ( *(_DWORD *)&stru_A8EB00.?[416] - *v6 < v8 && v8 != *(_DWORD *)&stru_A8EB00.?[416] - *v6 ) /*0x6cbd69*/
  {
    if ( SidebarClass::GetProductionState((SidebarClass *)this) != *(_DWORD *)(this + 120) ) /*0x6cbe86*/
    {
      *(_DWORD *)(this + 120) = SidebarClass::GetProductionState((SidebarClass *)this); /*0x6cbe8f*/
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
      *v6 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6cbda1*/
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
          VoxClass::FindAndPlay((VoxClass *)&g_Str_EVA_ChronosphereReady.Name[4], -1); /*0x6cbdf7*/
          break; /*0x6cbdf7*/
        case 1: /*0x6cbde6*/
          VoxClass::FindAndPlay((VoxClass *)&g_Str_EVA_ChronosphereReady.MaxFDelta, -1); /*0x6cbe03*/
          break; /*0x6cbe03*/
        case 2: /*0x6cbde6*/
          VoxClass::FindAndPlay((VoxClass *)&g_Str_EVA_ChronosphereReady.Volume[7], -1); /*0x6cbe1b*/
          break; /*0x6cbe1b*/
        case 3: /*0x6cbde6*/
          VoxClass::FindAndPlay((VoxClass *)&g_Str_EVA_ChronosphereReady, -1); /*0x6cbe33*/
          break; /*0x6cbe33*/
        case 5: /*0x6cbde6*/
        case 6: /*0x6cbde6*/
          VoxClass::FindAndPlay((VoxClass *)&g_Str_EVA_PsychicRevealReady.AlliedVoice[6], -1); /*0x6cbe3f*/
          break; /*0x6cbe3f*/
        case 7: /*0x6cbde6*/
          VoxClass::FindAndPlay((VoxClass *)g_Str_EVA_ChronosphereReady.Volume, -1); /*0x6cbe27*/
          break; /*0x6cbe27*/
        case 8: /*0x6cbde6*/
          VoxClass::FindAndPlay((VoxClass *)&g_Str_EVA_PsychicRevealReady.YuriVoice[4], -1); /*0x6cbe4b*/
          break; /*0x6cbe4b*/
        case 9: /*0x6cbde6*/
          VoxClass::FindAndPlay((VoxClass *)&g_Str_EVA_PsychicRevealReady.Name[6], -1); /*0x6cbe57*/
          break; /*0x6cbe57*/
        case 0xA: /*0x6cbde6*/
          VoxClass::FindAndPlay((VoxClass *)&g_Str_EVA_ChronosphereReady.Loop, -1); /*0x6cbe0f*/
          break; /*0x6cbe0f*/
        case 0xB: /*0x6cbde6*/
          VoxClass::FindAndPlay(&g_Str_EVA_PsychicRevealReady, -1); /*0x6cbe63*/
          break; /*0x6cbe63*/
        default:
          break;
      }
    }
    *(_DWORD *)(this + 116) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6cbe68*/
    return 1; /*0x6cbe72*/
  }
}



// ==== 0x006CBEE0  SidebarClass::GetProductionState  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::GetProductionState(SidebarClass *this)
{
  int v1; // ebx
  int v2; // esi
  char *v3; // edx
  TechnoClass *v4; // ecx
  double v5; // st7
  int v6; // edi
  int v7; // esi
  char *v8; // eax
  TechnoClass *v9; // ecx
  int result; // eax
  int v11; // edi
  int v12; // esi
  char *SidebarClass_field_0x38; // eax
  TechnoClass *SidebarClass_field_0x30; // ecx
  int v15; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]
  int v18; // [esp+14h] [ebp-4h]

  if ( !BYTE1(this->SidebarClass_field_0x6C) ) /*0x6cbeeb*/
    return 0; /*0x6cc064*/
  v1 = this->SidebarClass_field_0x28[0]; /*0x6cbef1*/
  if ( !*(_BYTE *)(v1 + 229) ) /*0x6cbefc*/
  {
    if ( HIBYTE(this->SidebarClass_field_0x6C) ) /*0x6cbfe5*/
      return 54; /*0x6cbff7*/
    v11 = this->SidebarClass_field_0x24[0]; /*0x6cbff8*/
    v12 = v11; /*0x6cbffe*/
    if ( v11 == -1 ) /*0x6cc000*/
      v12 = *(_DWORD *)(v1 + 176); /*0x6cc002*/
    SidebarClass_field_0x38 = (char *)this->SidebarClass_field_0x38; /*0x6cc008*/
    SidebarClass_field_0x30 = this->SidebarClass_field_0x30; /*0x6cc00b*/
    if ( SidebarClass_field_0x30 != (TechnoClass *)-1 ) /*0x6cc011*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)SidebarClass_field_0x30 >= (int)SidebarClass_field_0x38 ) /*0x6cc01d*/
        SidebarClass_field_0x38 = 0; /*0x6cc023*/
      else
        SidebarClass_field_0x38 -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)SidebarClass_field_0x30; /*0x6cc01f*/
    }
    if ( v11 == -1 ) /*0x6cc028*/
      v18 = *(_DWORD *)(v1 + 176); /*0x6cc036*/
    else
      v18 = v11; /*0x6cc02a*/
    v5 = (double)(v12 - (int)SidebarClass_field_0x38) / (double)v18; /*0x6cc044*/
    goto LABEL_37; /*0x6cc044*/
  }
  if ( *(_DWORD *)&this->__pad_74[8] != 2 ) /*0x6cbf06*/
  {
    v6 = this->SidebarClass_field_0x24[0]; /*0x6cbf85*/
    v7 = v6; /*0x6cbf8b*/
    if ( v6 == -1 ) /*0x6cbf8d*/
      v7 = *(_DWORD *)(v1 + 176); /*0x6cbf8f*/
    v8 = (char *)this->SidebarClass_field_0x38; /*0x6cbf95*/
    v9 = this->SidebarClass_field_0x30; /*0x6cbf98*/
    if ( v9 != (TechnoClass *)-1 ) /*0x6cbf9e*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)v9 >= (int)v8 ) /*0x6cbfaa*/
        v8 = 0; /*0x6cbfb0*/
      else
        v8 -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)v9; /*0x6cbfac*/
    }
    if ( v6 == -1 ) /*0x6cbfb5*/
      v5 = (double)(v7 - (int)v8) / (double)*(int *)(v1 + 176); /*0x6cbfdf*/
    else
      v5 = (double)(v7 - (int)v8) / (double)v6; /*0x6cbfc5*/
    goto LABEL_37; /*0x6cbfc9*/
  }
  v2 = this->SidebarClass_field_0x24[0]; /*0x6cbf08*/
  if ( v2 == -1 ) /*0x6cbf0e*/
    v16 = *(_DWORD *)(v1 + 176); /*0x6cbf1c*/
  else
    v16 = this->SidebarClass_field_0x24[0]; /*0x6cbf10*/
  v3 = (char *)this->SidebarClass_field_0x38; /*0x6cbf20*/
  v4 = this->SidebarClass_field_0x30; /*0x6cbf23*/
  if ( v4 != (TechnoClass *)-1 ) /*0x6cbf29*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)v4 >= (int)v3 ) /*0x6cbf34*/
    {
      v15 = 0; /*0x6cbf47*/
      goto LABEL_11; /*0x6cbf4f*/
    }
    v3 -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)v4; /*0x6cbf36*/
  }
  v15 = (int)v3; /*0x6cbf38*/
LABEL_11:
  if ( v2 == -1 ) /*0x6cbf3f*/
    v17 = *(_DWORD *)(v1 + 176); /*0x6cbf57*/
  else
    v17 = v2; /*0x6cbf41*/
  v5 = 1.0 /*0x6cbf7a*/
     - ((double)v16 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1888) - (double)v15)
     / ((double)v17
      * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1888));
LABEL_37:
  LOWORD(result) = Math::RoundToInt(v5 * 54.0); /*0x6cc048*/
  if ( result >= 53 ) /*0x6cc056*/
    return 53; /*0x6cc05a*/
  return result; /*0x6cbfec*/
}



// ==== 0x006CC070  ObjectClass::nullsub_231  this=ObjectClass  sig=csp ====
void nullsub_231(ObjectClass *this)
{
  ; /*0x6cc070*/
}



// ==== 0x006CC080  SuperClass::AnnounceReady  this=JumpjetLocomotionClass  sig=csp ====
char __thiscall sub_6CC080(int this, char a2)
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
      *(_DWORD *)(this + 48) = dword_A8ED84; /*0x6cc0c8*/
    *(_DWORD *)(this + 48) = dword_A8ED84; /*0x6cc0d4*/
    *(_DWORD *)(this + 52) = v7; /*0x6cc0db*/
    *(_DWORD *)(this + 56) = v5; /*0x6cc0de*/
    if ( a2 ) /*0x6cc0e4*/
    {
      switch ( *(_DWORD *)(*(_DWORD *)(this + 40) + 180) ) /*0x6cc0fc*/
      {
        case 0: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaNuclearmiss, -1); /*0x6cc10d*/
          break; /*0x6cc10d*/
        case 1: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaIroncurtain, -1); /*0x6cc119*/
          break; /*0x6cc119*/
        case 2: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaLightningst, -1); /*0x6cc131*/
          break; /*0x6cc131*/
        case 3: /*0x6cc0fc*/
          VoxClass::FindAndPlay(g_Str_EVA_ChronosphereReady, -1); /*0x6cc149*/
          break; /*0x6cc149*/
        case 5: /*0x6cc0fc*/
        case 6: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaReinforceme, -1); /*0x6cc155*/
          break; /*0x6cc155*/
        case 7: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaPsychicdomi, -1); /*0x6cc13d*/
          break; /*0x6cc13d*/
        case 8: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaSpyplanerea, -1); /*0x6cc161*/
          break; /*0x6cc161*/
        case 9: /*0x6cc0fc*/
          VoxClass::FindAndPlay(unk_842414, -1); /*0x6cc16d*/
          break; /*0x6cc16d*/
        case 0xA: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaForceshield, -1); /*0x6cc125*/
          break; /*0x6cc125*/
        case 0xB: /*0x6cc0fc*/
          VoxClass::FindAndPlay(g_Str_EVA_PsychicRevealReady, -1); /*0x6cc179*/
          break; /*0x6cc179*/
        default:
          break;
      }
    }
    v6 = *(_DWORD *)(this + 40); /*0x6cc17e*/
    *(_DWORD *)(this + 116) = dword_A8ED84; /*0x6cc187*/
    result = *(_BYTE *)(v6 + 229); /*0x6cc18a*/
    if ( result ) /*0x6cc192*/
      *(_DWORD *)(this + 124) = 1; /*0x6cc194*/
  }
  return result; /*0x6cc19b*/
}



// ==== 0x006CC1E0  SuperClass::SetCharge  this=SuperClass  sig=csp ====
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
        *v3 = dword_A8ED84; /*0x6cc23c*/
      *v3 = dword_A8ED84; /*0x6cc248*/
      *(_DWORD *)(this + 52) = v7; /*0x6cc24a*/
      *(_DWORD *)(this + 56) = v5; /*0x6cc24d*/
    }
  }
  return (char)v3; /*0x6cc251*/
}



// ==== 0x006CC260  Super::GetDefaultTimer  this=JumpjetLocomotionClass  sig=csp ====
int __thiscall Super::GetDefaultTimer(Super *this)
{
  int result; // eax

  result = (int)this->field_24; /*0x6cc260*/
  if ( result == -1 ) /*0x6cc266*/
    return *((_DWORD *)this->field_28 + 44); /*0x6cc26b*/
  return result; /*0x6cc271*/
}



// ==== 0x006CC280  SuperClass::SetRechargeTime  this=SuperClass  sig=csp ====
int __thiscall SuperClass::SetRechargeTime(SuperClass *this, int a2)
{
  this->SuperClass_field_0x24 = (void *)a2; /*0x6cc284*/
  return a2; /*0x6cc287*/
}



// ==== 0x006CC290  SuperClass::ResetRechargeTime  this=SuperClass  sig=csp ====
void __thiscall SuperClass::ResetRechargeTime(SuperClass *this)
{
  this->SuperClass_field_0x24 = (void *)-1; /*0x6cc290*/
}



// ==== 0x006CC2A0  SuperWeapon::GetField10  this=SuperWeapon  sig=csp ====
char __thiscall SuperWeapon::GetField10(SuperWeapon *this)
{
  return *(_BYTE *)(this->q028 + 230); /*0x6cc2a9*/
}



// ==== 0x006CC2B0  SuperClass::NameReadiness  this=SuperClass  sig=csp ====
wchar_t *__thiscall SuperClass::NameReadiness(SuperClass *this)
{
  char *SuperClass_field_0x7C; // ecx
  char *v2; // ecx

  if ( LOBYTE(this->SuperClass_field_0x70) ) /*0x6cc2b0*/
    return GetStringCSF(aTxtHold, 0, (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1], 950); /*0x6cc34d*/
  if ( *((_BYTE *)this->SuperClass_field_0x28 + 229) ) /*0x6cc2be*/
  {
    SuperClass_field_0x7C = (char *)this->SuperClass_field_0x7C; /*0x6cc2c8*/
    if ( SuperClass_field_0x7C ) /*0x6cc2ce*/
    {
      v2 = SuperClass_field_0x7C - 1; /*0x6cc2d0*/
      if ( v2 ) /*0x6cc2d1*/
      {
        if ( v2 != (char *)1 ) /*0x6cc2d4*/
          return 0; /*0x6cc2d8*/
        return GetStringCSF( /*0x6cc2ea*/
                 (wchar_t *)&g_Str_EVA_ChronosphereReady.VocClass_field_A4,
                 0,
                 (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1],
                 925);
      }
      else
      {
        return GetStringCSF(g_Str_TXT_READY, 0, (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1], 922); /*0x6cc301*/
      }
    }
    else
    {
      return GetStringCSF( /*0x6cc318*/
               (wchar_t *)&g_Str_EVA_ChronosphereReady.VocClass_field_94,
               0,
               (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1],
               919);
    }
  }
  else
  {
    if ( !HIBYTE(this->SuperClass_field_0x6C) ) /*0x6cc323*/
      return 0; /*0x6cc323*/
    return GetStringCSF(g_Str_TXT_READY, 0, (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1], 944); /*0x6cc336*/
  }
}



// ==== 0x006CC360  SuperClass::CanFire  this=SuperClass  sig=csp ====
char __thiscall SuperClass::CanFire(SuperClass *this)
{
  if ( LOBYTE(this->SuperClass_field_0x70) ) /*0x6cc360*/
    return 0; /*0x6cc381*/
  if ( *((_BYTE *)this->SuperClass_field_0x28 + 229) ) /*0x6cc36a*/
    return this->SuperClass_field_0x7C != 0; /*0x6cc379*/
  return HIBYTE(this->SuperClass_field_0x6C); /*0x6cc37c*/
}



// ==== 0x006CC390  SuperClass::Launch  this=SuperClass  sig=csp ====
int __fastcall SuperClass::Launch(int a1, int a2, __int16 *a3, char a4)
{
  double v4; // st7
  void *v5; // ebx
  int v6; // ebp
  int result; // eax
  void *v8; // eax
  _DWORD *v9; // eax
  int *v10; // eax
  void *v11; // eax
  int *v12; // eax
  __int16 *v13; // ebp
  void *v14; // eax
  int Coord3D_field_0x08; // esi
  int v16; // eax
  int v17; // eax
  AnimClass *v18; // eax
  AnimClass *v19; // eax
  int *v20; // edi
  __int16 v21; // cx
  __int16 v22; // dx
  int *v23; // esi
  __int16 v24; // ax
  bool v25; // zf
  int v26; // ecx
  int v27; // edx
  _DWORD *v28; // edx
  bool v29; // bl
  int v30; // eax
  int Member; // eax
  int *v32; // eax
  CellClass *v33; // eax
  int v34; // ecx
  int v35; // edi
  BuildingClass *v36; // eax
  int v37; // eax
  int *v38; // ebx
  int v39; // eax
  int InstanceCOM; // eax
  int v41; // edi
  __int16 v42; // ax
  int v43; // edi
  void *v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // eax
  int v48; // edi
  int v49; // ed... [58141 chars total]



// ==== 0x006CDE80  nullsub_235  this=-  sig=csp ====
void __stdcall nullsub_235(int a1, int a2)
{
  ; /*0x6cde80*/
}



// ==== 0x006CDE90  SuperClass::ShouldDrawProgress  this=SuperClass  sig=csp ====
bool __thiscall SuperClass::ShouldDrawProgress(SuperClass *this)
{
  return *((_BYTE *)this->SuperClass_field_0x28 + 229) || HIBYTE(this->SuperClass_field_0x6C) == 0; /*0x6cde9d*/
}



// ==== 0x006CDEB0  SuperClass::ddtor  this=SuperClass  sig=csp ====
int __stdcall SuperClass::ddtor(SuperClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6cdeb6*/
    return -2147467261; /*0x6cdeb8*/
  *a2 = -671656762; /*0x6cdec6*/
  a2[1] = 298989852; /*0x6cdece*/
  a2[2] = 268461211; /*0x6cded7*/
  a2[3] = unk_7E958C; /*0x6cdee0*/
  return 0; /*0x6cdebd*/
}



// ==== 0x006CDEF0  SuperClass::LoadFromStream  this=SuperClass  sig=csp ====
int __stdcall SuperClass::LoadFromStream(SuperClass *this, int a2)
{
  int result; // eax
  int v3; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6cdefb*/
  if ( result >= 0 ) /*0x6cdf02*/
  {
    if ( this ) /*0x6cdf0a*/
    {
      AbstractClass::Constructor((AbstractClass *)this); /*0x6cdf0e*/
      this->SuperClass_field_0x0 = &SuperClass::`vftable'; /*0x6cdf13*/
      this->SuperClass_field_0x4 = &SuperClass::`vftable'; /*0x6cdf19*/
      this->SuperClass_field_0x8 = &SuperClass::`vftable'; /*0x6cdf20*/
      *(_DWORD *)this->__pad_C = &SuperClass::`vftable'; /*0x6cdf27*/
    }
    if ( this->SuperClass_field_0x68 /*0x6cdf70*/
      && (g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.?
       || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
       && g_BuildingLoadQueue_Array.?[2] > 0
       && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[0] + 8))(
            g_BuildingLoadQueue_Array.?,
            g_BuildingLoadQueue_Array.? + g_BuildingLoadQueue_Array.?[2],
            0)) )
    {
      v3 = g_BuildingLoadQueue_Array.?[1]++; /*0x6cdf7d*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v3) = this; /*0x6cdf8c*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->SuperClass_field_0x28); /*0x6cdf98*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->SuperClass_field_0x2C); /*0x6cdfa6*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->SuperClass_field_0x68); /*0x6cdfb1*/
    *(_DWORD *)&this->__pad_3C[12] = 0; /*0x6cdfb6*/
    *(_DWORD *)&this->__pad_3C[16] = 0; /*0x6cdfbd*/
    return 0; /*0x6cdfc4*/
  }
  return result; /*0x6cdfc7*/
}



// ==== 0x006CDFD0  SuperClass::SaveState  this=SuperClass  sig=csp ====
int __stdcall SuperClass::SaveState(SuperClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6cdfdf*/
  if ( result >= 0 ) /*0x6cdfe6*/
    return 0; /*0x6cdfe8*/
  return result; /*0x6cdfea*/
}



// ==== 0x006CDFF0  SuperClass::ExecuteAction  this=SuperClass  sig=csp ====
__int64 __thiscall SuperClass::ExecuteAction(SuperClass *this, unsigned int a2, int a3)
{
  __int64 result; // rax

  result = a2; /*0x6cdff0*/
  if ( (void *)a2 == this->SuperClass_field_0x2C ) /*0x6cdffc*/
    this->SuperClass_field_0x2C = 0; /*0x6cdffe*/
  if ( (void *)a2 == this->SuperClass_field_0x28 ) /*0x6ce004*/
    this->SuperClass_field_0x28 = 0; /*0x6ce006*/
  if ( (void *)a2 == this->SuperClass_field_0x68 ) /*0x6ce00f*/
  {
    this->SuperClass_field_0x68 = 0; /*0x6ce011*/
    LOBYTE(this->SuperClass_field_0x6C) = 1; /*0x6ce014*/
  }
  return result; /*0x6ce00e*/
}



// ==== 0x006CE020  SuperClass::PowerDrainUpdate  this=SuperClass  sig=csp ====
int __thiscall SuperClass::PowerDrainUpdate(SuperClass *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // eax
  int result; // eax
  int v9; // eax

  v3 = AbstractClass::ProcessPower((AbstractClass *)this); /*0x6ce029*/
  LOBYTE(v3) = BYTE1(this->SuperClass_field_0x6C); /*0x6ce02e*/
  Power::FlagProcess((Power *)a2, v3); /*0x6ce034*/
  LOBYTE(v4) = BYTE2(this->SuperClass_field_0x6C); /*0x6ce039*/
  Power::FlagProcess((Power *)a2, v4); /*0x6ce03f*/
  LOBYTE(v5) = HIBYTE(this->SuperClass_field_0x6C); /*0x6ce044*/
  Power::FlagProcess((Power *)a2, v5); /*0x6ce04a*/
  Power::TimerProcess(this->SuperClass_field_0x78); /*0x6ce055*/
  Power::TimerProcess((int)this->SuperClass_field_0x7C); /*0x6ce060*/
  LOBYTE(v6) = this->SuperClass_field_0x60; /*0x6ce065*/
  v7 = Power::FlagProcess((Power *)a2, v6); /*0x6ce06b*/
  LOBYTE(v7) = this->SuperClass_field_0x6C; /*0x6ce070*/
  Power::FlagProcess((Power *)a2, v7); /*0x6ce076*/
  result = (int)this->SuperClass_field_0x68; /*0x6ce07b*/
  if ( result ) /*0x6ce080*/
  {
    Power::TimerProcess(*(unsigned __int8 *)(result + 405)); /*0x6ce08d*/
    v9 = (*(int (__stdcall **)(char *))(*((_DWORD *)this->SuperClass_field_0x68 + 1) + 16))((char *)this->SuperClass_field_0x68 + 4); /*0x6ce09c*/
    return Power::TimerProcess(v9); /*0x6ce0a2*/
  }
  return result; /*0x6ce0a7*/
}



// ==== 0x006CE0B0  SuperClass::Reset  this=SuperClass  sig=csp ====
int *__thiscall SuperClass::Reset(SuperClass *this)
{
  _BYTE *SuperClass_field_0x68; // eax
  int v3; // eax
  int v4; // eax
  void *SuperClass_field_0x24; // ecx
  int *result; // eax
  char *SuperClass_field_0x30; // ebx
  bool v8; // bl
  int v9; // esi
  int v10; // ecx
  int v11; // edx
  _DWORD v12[4]; // [esp+4h] [ebp-10h] BYREF

  SuperClass_field_0x68 = this->SuperClass_field_0x68; /*0x6ce0b6*/
  if ( SuperClass_field_0x68 ) /*0x6ce0bb*/
  {
    SuperClass_field_0x68[405] = 0; /*0x6ce0bd*/
    this->SuperClass_field_0x68 = 0; /*0x6ce0c4*/
    v12[0] = this; /*0x6ce0db*/
    v3 = (*(int (__thiscall **)(int *, _DWORD *))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x6ce0df*/
           g_BuildingLoadQueue_Array.?,
           v12);
    if ( v3 != -1 ) /*0x6ce0e5*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v3); /*0x6ce0ed*/
  }
  if ( LOBYTE(this->SuperClass_field_0x6C) ) /*0x6ce0f2*/
  {
    v12[0] = this; /*0x6ce109*/
    v4 = (*(int (__thiscall **)(int *, _DWORD *))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x6ce10d*/
           g_BuildingLoadQueue_Array.?,
           v12);
    if ( v4 != -1 ) /*0x6ce113*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v4); /*0x6ce11b*/
    LOBYTE(this->SuperClass_field_0x6C) = 0; /*0x6ce120*/
  }
  SuperClass_field_0x24 = this->SuperClass_field_0x24; /*0x6ce124*/
  result = (int *)&this->SuperClass_field_0x30; /*0x6ce127*/
  HIBYTE(this->SuperClass_field_0x6C) = 0; /*0x6ce12b*/
  SuperClass_field_0x30 = (char *)this->SuperClass_field_0x30; /*0x6ce12f*/
  this->SuperClass_field_0x78 = -1; /*0x6ce131*/
  v8 = SuperClass_field_0x30 + 1 != 0; /*0x6ce13b*/
  if ( SuperClass_field_0x24 == (void *)-1 ) /*0x6ce141*/
    SuperClass_field_0x24 = (void *)*((_DWORD *)this->SuperClass_field_0x28 + 44); /*0x6ce146*/
  *result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6ce156*/
  *(_DWORD *)this->__pad_34 = v12[2]; /*0x6ce15d*/
  this->SuperClass_field_0x38 = SuperClass_field_0x24; /*0x6ce160*/
  if ( !v8 ) /*0x6ce163*/
  {
    v9 = *result; /*0x6ce165*/
    if ( *result != -1 ) /*0x6ce16a*/
    {
      v10 = result[2]; /*0x6ce16c*/
      v11 = *(_DWORD *)&stru_A8EB00.?[416] - v9; /*0x6ce17a*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 >= v10 ) /*0x6ce17e*/
      {
        result[2] = 0; /*0x6ce192*/
        *result = -1; /*0x6ce195*/
      }
      else
      {
        *result = -1; /*0x6ce182*/
        result[2] = v10 - v11; /*0x6ce188*/
      }
    }
  }
  return result; /*0x6ce18b*/
}



// ==== 0x006CE1A0  SuperClass::ShouldFlashTab  this=SuperClass  sig=csp ====
bool __thiscall SuperClass::ShouldFlashTab(SuperClass *this)
{
  _BYTE *SuperClass_field_0x28; // eax
  int v2; // eax

  if ( LOBYTE(this->SuperClass_field_0x70) ) /*0x6ce1a0*/
    return 0; /*0x6ce1a5*/
  SuperClass_field_0x28 = this->SuperClass_field_0x28; /*0x6ce1a7*/
  if ( SuperClass_field_0x28[229] ) /*0x6ce1aa*/
  {
    if ( !this->SuperClass_field_0x7C ) /*0x6ce1b9*/
      return 0; /*0x6ce1b9*/
  }
  else if ( !HIBYTE(this->SuperClass_field_0x6C) ) /*0x6ce1c2*/
  {
    return 0; /*0x6ce1c2*/
  }
  v2 = *((_DWORD *)SuperClass_field_0x28 + 58); /*0x6ce1c4*/
  if ( v2 == -1 ) /*0x6ce1cd*/
    return 1; /*0x6ce1d1*/
  return v2 && (int)this->SuperClass_field_0x74 + v2 > *(int *)&stru_A8EB00.?[416]; /*0x6ce1d1*/
}



// ==== 0x006CE1F0  AbstractClass::updateTargetTracking  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::updateTargetTracking(AbstractClass *this)
{
  return 57; /*0x6ce1f5*/
}



// ==== 0x006CE200  SuperClass::StubReturn57  this=SuperClass  sig=csp ====
int SuperClass::StubReturn57(SuperClass *this)
{
  return 57; /*0x6ce205*/
}



// ==== 0x006CE210  SuperClass::StubReturn128  this=SuperClass  sig=csp ====
int SuperClass::StubReturn128(SuperClass *this)
{
  return 128; /*0x6ce215*/
}



// ==== 0x006CE220  SuperClass::ProcessEvent  this=SuperClass  sig=csp ====
void *__thiscall SuperClass::ProcessEvent(SuperClass *this, char a2)
{
  SuperClass::CleanupMembers((int)this); /*0x6ce223*/
  if ( (a2 & 1) != 0 ) /*0x6ce22d*/
    __3_YAXPAX_Z(this); /*0x6ce230*/
  return this; /*0x6ce23a*/
}



// ==== 0x006CE240  Coord3D::Add  this=Coord3D  sig=csp ====
_DWORD *__thiscall Coord3D::Add(Coord3D *this, _DWORD *a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // edi

  v3 = this->Coord3D_field_0x04 + a3[1]; /*0x6ce252*/
  v4 = this->Coord3D_field_0x08 + a3[2]; /*0x6ce25a*/
  *a2 = *(_DWORD *)this->__pad_0 + *a3; /*0x6ce262*/
  a2[1] = v3; /*0x6ce264*/
  a2[2] = v4; /*0x6ce267*/
  return a2; /*0x6ce26a*/
}



// ==== 0x006CE270  SuperClass::SetFieldX  this=SuperClass  sig=csp ====
int __thiscall SuperClass::SetFieldX(SuperClass *this)
{
  int result; // eax

  result = (int)this->SuperClass_field_0x0; /*0x6ce270*/
  if ( this->SuperClass_field_0x0 ) /*0x6ce270*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 4))(result); /*0x6ce279*/
  return result; /*0x6ce27c*/
}



// ==== 0x006CE280  SuperClass::AdvanceCountdown  this=SuperClass  sig=csp ====
void __thiscall SuperClass::AdvanceCountdown(SuperClass *this)
{
  void *SuperClass_field_0x0; // esi
  char *SuperClass_field_0x8; // eax
  int v3; // edx

  SuperClass_field_0x0 = this->SuperClass_field_0x0; /*0x6ce281*/
  if ( this->SuperClass_field_0x0 != (void *)-1 ) /*0x6ce286*/
  {
    SuperClass_field_0x8 = (char *)this->SuperClass_field_0x8; /*0x6ce288*/
    v3 = *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)SuperClass_field_0x0; /*0x6ce296*/
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)SuperClass_field_0x0 >= (int)SuperClass_field_0x8 ) /*0x6ce29a*/
    {
      this->SuperClass_field_0x8 = 0; /*0x6ce2ab*/
      this->SuperClass_field_0x0 = (void *)-1; /*0x6ce2ae*/
    }
    else
    {
      this->SuperClass_field_0x0 = (void *)-1; /*0x6ce29e*/
      this->SuperClass_field_0x8 = &SuperClass_field_0x8[-v3]; /*0x6ce2a4*/
    }
  }
}



// ==== 0x006CE2C0  SuperClass::SetCurrentFrame  this=SuperClass  sig=csp ====
wchar_t *__thiscall SuperClass::SetCurrentFrame(SuperClass *this)
{
  wchar_t *result; // eax

  if ( this->SuperClass_field_0x0 == (void *)-1 ) /*0x6ce2c3*/
  {
    result = *(wchar_t **)&stru_A8EB00.?[416]; /*0x6ce2c5*/
    this->SuperClass_field_0x0 = *(void **)&stru_A8EB00.?[416]; /*0x6ce2ca*/
  }
  return result; /*0x6ce2cc*/
}



// ==== 0x006CE2D0  VectorClass::RemoveAt  this=VectorClass  sig=csp ====
int __thiscall VectorClass::RemoveAt(DynamicVectorClass *this, int a2)
{
  int result; // eax
  int Count; // ecx
  int v5; // ecx

  result = (*(int (__thiscall **)(DynamicVectorClass *, int))(this->ptr_0 + 16))(this, a2); /*0x6ce2dc*/
  if ( result == -1 || (Count = this->Count, result >= Count) ) /*0x6ce2e9*/
  {
    LOBYTE(result) = 0; /*0x6ce30b*/
  }
  else
  {
    v5 = Count - 1; /*0x6ce2eb*/
    for ( this->Count = v5; /*0x6ce2f1*/
          result < this->Count;
          *(_DWORD *)(this->Items + 4 * result - 4) = *(_DWORD *)(this->Items + 4 * result) )
    {
      ++result; /*0x6ce2f6*/
    }
    LOBYTE(result) = 1; /*0x6ce305*/
  }
  return result; /*0x6ce307*/
}



// ==== 0x006CE320  SuperClass::RemoveFromPointerArray  this=SuperClass  sig=csp ====
char __thiscall SuperClass::RemoveFromPointerArray(SuperClass *this, int a2)
{
  char *SuperClass_field_0x10; // edx
  int v3; // eax
  char *v4; // edx

  SuperClass_field_0x10 = (char *)this->SuperClass_field_0x10; /*0x6ce320*/
  v3 = a2; /*0x6ce323*/
  if ( a2 >= (int)SuperClass_field_0x10 ) /*0x6ce329*/
    return 0; /*0x6ce34c*/
  v4 = SuperClass_field_0x10 - 1; /*0x6ce32b*/
  this->SuperClass_field_0x10 = v4; /*0x6ce32e*/
  if ( a2 < (int)v4 ) /*0x6ce331*/
  {
    do /*0x6ce344*/
    {
      ++v3; /*0x6ce337*/
      *((_DWORD *)this->SuperClass_field_0x4 + v3 - 1) = *((_DWORD *)this->SuperClass_field_0x4 + v3); /*0x6ce33b*/
    }
    while ( v3 < (int)this->SuperClass_field_0x10 ); /*0x6ce344*/
  }
  return 1; /*0x6ce349*/
}



// ==== 0x006CE360  sub_6CE360  this=-  sig=ida-proto ====
int sub_6CE360()
{
  dword_B0C098 = 0; /*0x6ce362*/
  dword_B0C09C = 0; /*0x6ce367*/
  dword_B0C0A0 = 0; /*0x6ce36c*/
  dword_B0C0A4 = 0; /*0x6ce371*/
  return 0; /*0x6ce376*/
}



// ==== 0x006CE380  sub_6CE380  this=-  sig=ida-proto ====
void sub_6CE380()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6ce38c*/
  dbl_B0C0B0 = Math::Sqrt(v0 + v0); /*0x6ce39e*/
}



// ==== 0x006CE3B0  sub_6CE3B0  this=-  sig=ida-proto ====
void sub_6CE3B0()
{
  dbl_B0C100 = dbl_B0C0B0 / 60.0; /*0x6ce3bc*/
}



// ==== 0x006CE3D0  sub_6CE3D0  this=-  sig=ida-proto ====
void sub_6CE3D0()
{
  dbl_B0C0E8 = 1.0 / dbl_B0C100; /*0x6ce3dc*/
}



// ==== 0x006CE3F0  sub_6CE3F0  this=-  sig=ida-proto ====
void sub_6CE3F0()
{
  dbl_B0C0E0 = 0.0174532925199433 * 45.0; /*0x6ce3fc*/
}



// ==== 0x006CE410  sub_6CE410  this=-  sig=ida-proto ====
void sub_6CE410()
{
  dbl_B0C0B8 = 0.0174532925199433 * 60.0; /*0x6ce41c*/
}



// ==== 0x006CE430  sub_6CE430  this=-  sig=ida-proto ====
void sub_6CE430()
{
  dbl_B0C090 = 0.0174532925199433 * 90.0; /*0x6ce43c*/
}



// ==== 0x006CE450  sub_6CE450  this=-  sig=ida-proto ====
__int64 sub_6CE450()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0C090 - dbl_B0C0B8); /*0x6ce462*/
  result = Math::RoundToInt(v0 * dbl_B0C0B0 * 0.5); /*0x6ce476*/
  dword_B0C108 = result; /*0x6ce47b*/
  return result; /*0x6ce480*/
}



// ==== 0x006CE490  sub_6CE490  this=-  sig=ida-proto ====
void sub_6CE490()
{
  dbl_B0C0C0 = Math::ArcTan((double)dword_B0C108 * 0.00390625); /*0x6ce4a7*/
}



// ==== 0x006CE4C0  sub_6CE4C0  this=-  sig=ida-proto ====
void sub_6CE4C0()
{
  dbl_B0C0D8 = Math::ArcTan((double)(2 * dword_B0C108) / dbl_B0C0B0); /*0x6ce4e2*/
}



// ==== 0x006CE4F0  sub_6CE4F0  this=-  sig=ida-proto ====
__int64 sub_6CE4F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0C108) + 0.5); /*0x6ce50b*/
  dword_B0C0FC = result; /*0x6ce510*/
  return result; /*0x6ce516*/
}



// ==== 0x006CE520  sub_6CE520  this=-  sig=ida-proto ====
int sub_6CE520()
{
  word_B0C0A8 = 0; /*0x6ce522*/
  word_B0C0AA = 0; /*0x6ce528*/
  return 0; /*0x6ce52e*/
}



// ==== 0x006CE530  sub_6CE530  this=-  sig=ida-proto ====
int sub_6CE530()
{
  dword_B0C0C8 = 0; /*0x6ce532*/
  dword_B0C0CC = 0; /*0x6ce537*/
  dword_B0C0D0 = 0; /*0x6ce53c*/
  return 0; /*0x6ce541*/
}



// ==== 0x006CE550  sub_6CE550  this=-  sig=ida-proto ====
int sub_6CE550()
{
  dword_B0C0F8 = 0; /*0x6ce555*/
  dword_B0C0F0 = 128; /*0x6ce55f*/
  dword_B0C0F4 = 128; /*0x6ce564*/
  return 128; /*0x6ce569*/
}



// ==== 0x006CE570  ObjectClass::method_6CE570  this=ObjectClass  sig=csp ====
int __thiscall sub_6CE570(ObjectClass *this)
{
  int v2; // edi
  char **v3; // esi

  v2 = 0; /*0x6ce575*/
  v3 = (char **)&stru_8425A4.Name[7]; /*0x6ce577*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x6ce58a*/
  {
    ++v3; /*0x6ce58c*/
    ++v2; /*0x6ce58f*/
    if ( (int)v3 >= (int)stru_8425A4.Type ) /*0x6ce596*/
      return -1; /*0x6ce59e*/
  }
  return v2; /*0x6ce598*/
}



// ==== 0x006CE5B0  SuperWeaponTypeClass::SuperWeaponTypeClass  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::SuperWeaponTypeClass(int this, char *Source)
{
  int v3; // eax

  AbstractTypeClass::Constructor(this, Source); /*0x6ce5bb*/
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
  *(_DWORD *)(this + 12) = &SuperWeaponTypeClass::`vftable'; /*0x6ce67a*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x6ce681*/
  *(_DWORD *)(this + 152) = dword_A8E340; /*0x6ce68c*/
  if ( dword_A8E340 < dword_A8E338 /*0x6ce6c4*/
    || (byte_A8E33D || !dword_A8E338)
    && dword_A8E344 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8E330 + 8))(
         &dword_A8E330,
         dword_A8E338 + dword_A8E344,
         0) )
  {
    v3 = dword_A8E340++; /*0x6ce6d1*/
    *((_DWORD *)dword_A8E334 + v3) = this; /*0x6ce6e0*/
  }
  if ( this + 36 != this + 204 ) /*0x6ce6e8*/
    qmemcpy((void *)(this + 204), (const void *)(this + 36), 0x19u); /*0x6ce6ef*/
  return this; /*0x6ce6f2*/
}



// ==== 0x006CE7C0  SuperWeaponTypeClass::SD_vt03  this=SuperWeaponTypeClass  sig=csp ====
int __stdcall SuperWeaponTypeClass::SD_vt03(SuperWeaponTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6ce7c6*/
    return -2147467261; /*0x6ce7c8*/
  *a2 = 217234663; /*0x6ce7d6*/
  a2[1] = 298989284; /*0x6ce7de*/
  a2[2] = 1610668216; /*0x6ce7e7*/
  a2[3] = unk_7E957C; /*0x6ce7f0*/
  return 0; /*0x6ce7cd*/
}



// ==== 0x006CE800  SuperWeaponTypeClass::SaveLoad_Prefix  this=SuperWeaponTypeClass  sig=csp ====
int __stdcall SuperWeaponTypeClass::SaveLoad_Prefix(SuperWeaponTypeClass *this, int a2)
{
  int result; // eax
  SHPStruct *v3; // eax
  char v4; // [esp+7h] [ebp-201h] BYREF
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6ce814*/
  if ( result >= 0 ) /*0x6ce81b*/
  {
    if ( this ) /*0x6ce823*/
    {
      AbstractTypeClass::Init((int)this, (int)&v4); /*0x6ce82c*/
      this->SidebarImage = 0; /*0x6ce831*/
      this->AbstractTypeClass = &SuperWeaponTypeClass::`vftable'; /*0x6ce83b*/
      this->? = &SuperWeaponTypeClass::`vftable'; /*0x6ce841*/
      this->? = &SuperWeaponTypeClass::`vftable'; /*0x6ce848*/
      this->? = &SuperWeaponTypeClass::`vftable'; /*0x6ce84f*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->WeaponType); /*0x6ce862*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->AuxBuilding); /*0x6ce873*/
    _makepath(Buffer, 0, 0, (const char *)this->SidebarImageFile, Ext); /*0x6ce88d*/
    v3 = (SHPStruct *)SearchMIXFile(Buffer, 0); /*0x6ce89b*/
    this->SidebarImage = v3; /*0x6ce8a2*/
    if ( !v3 ) /*0x6ce8a8*/
      this->SidebarImage = (SHPStruct *)SearchMIXFile(&stru_820320.?[143], 0); /*0x6ce8b6*/
    return 0; /*0x6ce8bc*/
  }
  return result; /*0x6ce8be*/
}



// ==== 0x006CE8D0  SuperWeaponTypeClass::SaveLoad_Prefix_0  this=SuperWeaponTypeClass  sig=csp ====
int __stdcall SuperWeaponTypeClass::SaveLoad_Prefix_0(SuperWeaponTypeClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6ce8df*/
  if ( result >= 0 ) /*0x6ce8e6*/
    return 0; /*0x6ce8e8*/
  return result; /*0x6ce8ea*/
}



// ==== 0x006CE8F0  SuperWeaponTypeClass::SD_vt11  this=SuperWeaponTypeClass  sig=csp ====
int SuperWeaponTypeClass::SD_vt11(SuperWeaponTypeClass *this)
{
  return 32; /*0x6ce8f5*/
}



// ==== 0x006CE900  SuperWeaponTypeClass::SD_vt12  this=SuperWeaponTypeClass  sig=csp ====
int SuperWeaponTypeClass::SD_vt12(SuperWeaponTypeClass *this)
{
  return 256; /*0x6ce905*/
}



// ==== 0x006CE910  SuperWeaponTypeClass::SD_vt13  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::SD_vt13(SuperWeaponTypeClass *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // eax

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x6ce919*/
  Power::TimerProcess(this->ArrayIndex); /*0x6ce927*/
  Power::TimerProcess(this->ActionValue[0]); /*0x6ce935*/
  Power::TimerProcess(this->RechargeVoice); /*0x6ce943*/
  Power::TimerProcess(this->ChargingVoice); /*0x6ce951*/
  Power::TimerProcess(this->ImpatientVoice); /*0x6ce95f*/
  v3 = Power::TimerProcess(this->SuspendVoice); /*0x6ce96d*/
  LOBYTE(v3) = this->IsPowered; /*0x6ce972*/
  Power::FlagProcess((Power *)a2, v3); /*0x6ce97b*/
  LOBYTE(v4) = this->DisableableFromShell; /*0x6ce980*/
  Power::FlagProcess((Power *)a2, v4); /*0x6ce989*/
  LOBYTE(v5) = this->PreClick; /*0x6ce98e*/
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x6ce997*/
  LOBYTE(v6) = this->PostClick; /*0x6ce99c*/
  Power::FlagProcess((Power *)a2, v6); /*0x6ce9a5*/
  Power::TimerProcess(this->PreDependent); /*0x6ce9b3*/
  LOBYTE(v7) = this->ShowTimer; /*0x6ce9b8*/
  Power::FlagProcess((Power *)a2, v7); /*0x6ce9c1*/
  Power::TimerProcess(this->RechargeTime); /*0x6ce9cf*/
  Power::TimerProcess((int)this->Type); /*0x6ce9dd*/
  LOBYTE(v8) = this->UseChargeDrain; /*0x6ce9e2*/
  v9 = Power::FlagProcess((Power *)a2, v8); /*0x6ce9eb*/
  LOBYTE(v9) = this->ManualControl; /*0x6ce9f0*/
  return Power::FlagProcess((Power *)a2, v9); /*0x6ce9fe*/
}



// ==== 0x006CEA10  SuperWeaponTypeClass::SD_vt16  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::SD_vt16(SuperWeaponTypeClass *this)
{
  return this->ArrayIndex; /*0x6cea16*/
}



// ==== 0x006CEA20  SuperWeaponTypeClass::SD_vt25  this=SuperWeaponTypeClass  sig=csp ====
char __userpurge SuperWeaponTypeClass::SD_vt25@<al>(
        SuperWeaponTypeClass *this,
        double a2@<st1>,
        double a3@<st0>,
        unsigned __int8 ***a4)
{
  int v4; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int SWProperties; // eax
  char Bool_Overwrite; // al
  int v11; // ecx
  int Int_Overwrite; // eax
  char v13; // al
  char v14; // cl
  char v15; // al
  char v16; // al
  int v17; // edi
  int Index; // eax
  int v19; // edi
  int v20; // eax
  int v21; // edx
  char **v23; // edi
  char **v24; // edi
  int v25; // edi
  int v26; // eax
  char v27; // cl
  char v28; // al
  int v30; // eax
  char *v31; // edi
  void *v32; // eax
  double v34; // [esp+0h] [ebp-408h]
  char v35; // [esp+4h] [ebp-404h]
  char v36; // [esp+4h] [ebp-404h]
  char v37; // [esp+4h] [ebp-404h]
  char v38; // [esp+4h] [ebp-404h]
  int v39; // [esp+18h] [ebp-3F0h]
  int v40; // [esp+18h] [ebp-3F0h]
  char Destination[24]; // [esp+1Ch] [ebp-3ECh] BYREF
  char v42; // [esp+34h] [ebp-3D4h]
  char v43[40]; // [esp+38h] [ebp-3D0h] BYREF
  char v44[40]; // [esp+60h] [ebp-3A8h] BYREF
  VocClass v45; // [esp+88h] [ebp-380h] BYREF
  char Buffer[512]; // [esp+208h] [ebp-200h] BYREF

  _EBP = v4; /*0x6cea2f*/
  INIClass::ResetSection((INIClass *)this); /*0x6cea33*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)_EBP, (unsigned __int8 ***)this) ) /*0x6cea3b*/
    return 0; /*0x6cee51*/
  v6 = *(_DWORD *)(_EBP + 156); /*0x6cea4a*/
  if ( INIClass::GetString( /*0x6cea6d*/
         (INIClass *)this,
         (unsigned __int8 *)(_EBP + 36),
         aWeapontype,
         &g_INI_DefaultBuffer,
         (char *)&v45,
         128) )
  {
    v7 = InfantryTypeClass::Find((char *)&v45); /*0x6cea7d*/
  }
  else
  {
    v7 = v6; /*0x6cea84*/
  }
  v8 = *(_DWORD *)(_EBP + 188); /*0x6cea86*/
  *(_DWORD *)(_EBP + 156) = v7; /*0x6cea8c*/
  SWProperties = SuperWeaponTypeClass::loadSWProperties( /*0x6cea9b*/
                   this,
                   (unsigned __int8 *)(_EBP + 36),
                   (unsigned __int8 *)g_INI_Key_Action,
                   v8);
  v35 = *(_BYTE *)(_EBP + 230); /*0x6ceaa8*/
  *(_DWORD *)(_EBP + 188) = SWProperties; /*0x6ceaaf*/
  *(_BYTE *)(_EBP + 230) = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(_EBP + 36), aIspowered, v35); /*0x6ceaba*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6ceacf*/
                     (int *)this,
                     (unsigned __int8 *)(_EBP + 36),
                     aDisableablefro,
                     *(_BYTE *)(_EBP + 231));
  v11 = *(_DWORD *)(_EBP + 232); /*0x6cead4*/
  *(_BYTE *)(_EBP + 231) = Bool_Overwrite; /*0x6ceada*/
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(_EBP + 36), aFlashsidebarta, v11); /*0x6ceae9*/
  v36 = *(_BYTE *)(_EBP + 236); /*0x6ceaf6*/
  *(_DWORD *)(_EBP + 232) = Int_Overwrite; /*0x6ceafd*/
  *(_BYTE *)(_EBP + 236) = INIClass::ReadBool_Overwrite( /*0x6ceb08*/
                             (int *)this,
                             (unsigned __int8 *)(_EBP + 36),
                             aAidefendagains,
                             v36);
  v13 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(_EBP + 36), aPreclick, *(_BYTE *)(_EBP + 237)); /*0x6ceb1d*/
  v14 = *(_BYTE *)(_EBP + 238); /*0x6ceb22*/
  *(_BYTE *)(_EBP + 237) = v13; /*0x6ceb28*/
  v15 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(_EBP + 36), aPostclick, v14); /*0x6ceb37*/
  v37 = *(_BYTE *)(_EBP + 244); /*0x6ceb44*/
  *(_BYTE *)(_EBP + 238) = v15; /*0x6ceb4b*/
  v16 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(_EBP + 36), aShowtimer, v37); /*0x6ceb51*/
  v17 = *(_DWORD *)(_EBP + 192); /*0x6ceb56*/
  *(_BYTE *)(_EBP + 244) = v16; /*0x6ceb5c*/
  if ( !INIClass::GetString( /*0x6ceb94*/
          (INIClass *)this,
          (unsigned __int8 *)(_EBP + 36),
          aSpecialsound,
          &g_INI_DefaultBuffer,
          (char *)&v45,
          128)
    || (Index = VocClass::FindIndex(&v45), Index == -1) )
  {
    Index = v17; /*0x6ceb96*/
  }
  v19 = *(_DWORD *)(_EBP + 196); /*0x6ceb98*/
  *(_DWORD *)(_EBP + 192) = Index; /*0x6cebb8*/
  if ( !INIClass::GetString( /*0x6cebd6*/
          (INIClass *)this,
          (unsigned __int8 *)(_EBP + 36),
          g_INI_Key_StartSound,
          &g_INI_DefaultBuffer,
          (char *)&v45,
          128)
    || (v20 = VocClass::FindIndex(&v45), v20 == -1) )
  {
    v20 = v19; /*0x6cebd8*/
  }
  __asm { fld dword ptr [ebp+0F8h] } /*0x6cebda*/
  *(_DWORD *)(_EBP + 196) = v20; /*0x6cebe5*/
  __asm { fstp qword ptr [esp+408h+var_408]; double } /*0x6cebeb*/
  INIClass::ReadDouble_Overwrite((double *)this, (unsigned __int8 *)(_EBP + 36), g_INI_Key_Range, v34); /*0x6cebf4*/
  v21 = *(_DWORD *)(_EBP + 252); /*0x6cebf9*/
  __asm { fstp dword ptr [ebp+0F8h] } /*0x6cec01*/
  *(float *)(_EBP + 248) = _ET1; /*0x6cec01*/
  *(_DWORD *)(_EBP + 252) = INIClass::ReadInt_Overwrite( /*0x6cec13*/
                              (bool *)this,
                              (unsigned __int8 *)(_EBP + 36),
                              aLinemultiplier,
                              v21);
  INIClass::GetString( /*0x6cec2d*/
    (INIClass *)this,
    (unsigned __int8 *)(_EBP + 36),
    (unsigned __int8 *)g_INI_Key_Type,
    &g_INI_DefaultBuffer,
    v44,
    40);
  if ( strlen(v44) ) /*0x6cec36*/
  {
    v39 = 0; /*0x6cec42*/
    v23 = (char **)&stru_8425A4.Name[7]; /*0x6cec46*/
    while ( _strcmpi(*v23, v44) ) /*0x6cec5d*/
    {
      ++v23; /*0x6cec63*/
      ++v39; /*0x6cec6d*/
      if ( (int)v23 >= (int)stru_8425A4.Type ) /*0x6cec71*/
        goto LABEL_18; /*0x6cec71*/
    }
    if ( v39 != -1 ) /*0x6cec7c*/
      *(_DWORD *)(_EBP + 180) = v39; /*0x6cec7e*/
  }
LABEL_18:
  INIClass::GetString((INIClass *)this, (unsigned __int8 *)(_EBP + 36), aPredependent, &g_INI_DefaultBuffer, v43, 40); /*0x6cec84*/
  if ( strlen(v43) ) /*0x6ceca1*/
  {
    v40 = 0; /*0x6cecad*/
    v24 = (char **)&stru_8425A4.Name[7]; /*0x6cecb1*/
    while ( _strcmpi(*v24, v43) ) /*0x6cecc8*/
    {
      ++v24; /*0x6cecce*/
      ++v40; /*0x6cecd8*/
      if ( (int)v24 >= (int)stru_8425A4.Type ) /*0x6cecdc*/
        goto LABEL_25; /*0x6cecdc*/
    }
    if ( v40 != -1 ) /*0x6cece7*/
      *(_DWORD *)(_EBP + 240) = v40; /*0x6cece9*/
  }
LABEL_25:
  v25 = *(_DWORD *)(_EBP + 200); /*0x6cecef*/
  if ( INIClass::GetString( /*0x6ced0f*/
         (INIClass *)this,
         (unsigned __int8 *)(_EBP + 36),
         aAuxbuilding,
         &g_INI_DefaultBuffer,
         (char *)&v45,
         128) )
  {
    v26 = BuildingTypeClass::FindOrCreate((char *)&v45); /*0x6ced1f*/
  }
  else
  {
    v26 = v25; /*0x6ced26*/
  }
  v27 = *(_BYTE *)(_EBP + 229); /*0x6ced28*/
  *(_DWORD *)(_EBP + 200) = v26; /*0x6ced2e*/
  v28 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(_EBP + 36), aUsechargedrain, v27); /*0x6ced3d*/
  v38 = *(_BYTE *)(_EBP + 245); /*0x6ced4a*/
  *(_BYTE *)(_EBP + 229) = v28; /*0x6ced51*/
  *(_BYTE *)(_EBP + 245) = INIClass::ReadBool_Overwrite( /*0x6ced68*/
                             (int *)this,
                             (unsigned __int8 *)(_EBP + 36),
                             aManualcontrol,
                             v38);
  INIClass::ReadDouble_Overwrite((double *)this, (unsigned __int8 *)(_EBP + 36), aRechargetime, 0.0); /*0x6ced6e*/
  __asm /*0x6ced73*/
  {
    fcom ds:dbl_7E2800
    fnstsw ax
  }
  if ( (_AX & 0x4000) != 0 ) /*0x6ced7e*/
  {
    __asm { fstp st } /*0x6ced93*/
  }
  else
  {
    __asm { fmul ds:flt_7F4100 } /*0x6ced80*/
    LOWORD(v30) = Math::RoundToInt(a3); /*0x6ced86*/
    *(_DWORD *)(_EBP + 176) = v30; /*0x6ced8b*/
  }
  v31 = (char *)(_EBP + 204); /*0x6ced9c*/
  INIClass::GetString( /*0x6cedb1*/
    (INIClass *)this,
    (unsigned __int8 *)(_EBP + 36),
    aSidebarimage,
    (char *)(_EBP + 204),
    (char *)&v45.Name[5],
    256);
  if ( &v45 == (VocClass *)-128 ) /*0x6cedbf*/
  {
    Destination[0] = (unsigned __int8)&v45.Name[5]; /*0x6cedc1*/
  }
  else
  {
    strncpy(Destination, (const char *)&v45.Name[5], 0x18u); /*0x6cedd6*/
    v42 = 0; /*0x6cedde*/
  }
  if ( Destination != v31 ) /*0x6cede9*/
  {
    qmemcpy(v31, Destination, 0x18u); /*0x6cedf4*/
    *(_BYTE *)(_EBP + 228) = v42; /*0x6cedf6*/
  }
  _makepath(Buffer, 0, 0, (const char *)(_EBP + 204), Ext); /*0x6cee0f*/
  v32 = SearchMIXFile(Buffer, 0); /*0x6cee20*/
  *(_DWORD *)(_EBP + 184) = v32; /*0x6cee26*/
  if ( !v32 ) /*0x6cee2f*/
    *(_DWORD *)(_EBP + 184) = SearchMIXFile(&stru_820320.?[143], 0); /*0x6cee3d*/
  return 1; /*0x6cee43*/
}



// ==== 0x006CEE60  ObjectClass::ObjectTypeClass_Read  this=ObjectClass  sig=csp ====
int __thiscall ObjectTypeClass_Read(ObjectClass *this)
{
  int v2; // esi

  if ( !this ) /*0x6cee66*/
    return -1; /*0x6cee66*/
  v2 = 0; /*0x6cee6d*/
  if ( dword_A8E340 <= 0 ) /*0x6cee71*/
    return -1; /*0x6cee96*/
  while ( _strcmpi((char *)(*((_DWORD *)dword_A8E334 + v2) + 36), (char *)this) ) /*0x6cee8a*/
  {
    if ( ++v2 >= dword_A8E340 ) /*0x6cee94*/
      return -1; /*0x6cee94*/
  }
  return v2; /*0x6cee96*/
}



// ==== 0x006CEEB0  SuperWeaponTypeClass::FindFirstOfAction  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::FindFirstOfAction(SuperWeaponTypeClass *this)
{
  int v1; // eax
  char *i; // edx

  v1 = 0; /*0x6ceeb8*/
  if ( dword_A8E340 <= 0 ) /*0x6ceebd*/
    return 0; /*0x6ceed9*/
  for ( i = (char *)dword_A8E334; *(SuperWeaponTypeClass **)(*(_DWORD *)i + 188) != this; i += 4 ) /*0x6ceec5*/
  {
    if ( ++v1 >= dword_A8E340 ) /*0x6ceed7*/
      return 0; /*0x6ceed7*/
  }
  return *((_DWORD *)dword_A8E334 + v1); /*0x6ceed9*/
}



// ==== 0x006CEEF0  WeaponTypeClass::Process  this=AbstractTypeClass  sig=csp ====
int __thiscall sub_6CEEF0(char *Source)
{
  int v2; // esi
  void *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6cef0c*/
    return 0; /*0x6cef6f*/
  v2 = 0; /*0x6cef1d*/
  if ( dword_A8E340 <= 0 ) /*0x6cef21*/
  {
LABEL_6:
    v3 = __2_YAPAXI_Z(0x100u); /*0x6cef46*/
    if ( v3 ) /*0x6cef55*/
      return SuperWeaponTypeClass::SuperWeaponTypeClass((int)v3, Source); /*0x6cef61*/
    return 0; /*0x6cef55*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)dword_A8E334 + v2) + 36), Source) ) /*0x6cef3a*/
  {
    if ( ++v2 >= dword_A8E340 ) /*0x6cef44*/
      goto LABEL_6; /*0x6cef44*/
  }
  return *((_DWORD *)dword_A8E334 + v2); /*0x6cef5f*/
}



// ==== 0x006CEF80  SuperWeaponTypeClass::SD_vt27  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::SD_vt27(SuperWeaponTypeClass *this, int a2, int a3)
{
  int v4; // eax

  if ( this->Type != (BuildingTypeClass *)10 ) /*0x6cef8b*/
    return this->ActionValue[0]; /*0x6cef8b*/
  if ( a3
    && (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 44))(a3) == 6
    && (v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 44))(a3),
        (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v4 == 6 ? a3 + 0x21C : 540), (#375 *)dword_A83D4C)) )
  {
    return this->ActionValue[0]; /*0x6cefd3*/
  }
  else
  {
    return 70; /*0x6cefca*/
  }
}



// ==== 0x006CEFE0  SuperWeaponTypeClass::SDDTOR  this=SuperWeaponTypeClass  sig=csp ====
_DWORD *__thiscall SuperWeaponTypeClass::SDDTOR(SuperWeaponTypeClass *this, char a2)
{
  int v3; // eax
  SuperWeaponTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractTypeClass = &SuperWeaponTypeClass::`vftable'; /*0x6cefed*/
  this->? = &SuperWeaponTypeClass::`vftable'; /*0x6ceff3*/
  this->? = &SuperWeaponTypeClass::`vftable'; /*0x6ceffa*/
  this->? = &SuperWeaponTypeClass::`vftable'; /*0x6cf001*/
  v5 = this; /*0x6cf00f*/
  v3 = (*(int (__thiscall **)(_DWORD *, SuperWeaponTypeClass **))(dword_A8E330 + 16))(&dword_A8E330, &v5); /*0x6cf013*/
  if ( v3 != -1 && v3 < dword_A8E340 && v3 < --dword_A8E340 ) /*0x6cf02e*/
  {
    do /*0x6cf046*/
    {
      ++v3; /*0x6cf036*/
      *((_DWORD *)dword_A8E334 + v3 - 1) = *((_DWORD *)dword_A8E334 + v3); /*0x6cf03a*/
    }
    while ( v3 < dword_A8E340 ); /*0x6cf046*/
  }
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x6cf04a*/
  if ( (a2 & 1) != 0 ) /*0x6cf054*/
    __3_YAXPAX_Z(this); /*0x6cf057*/
  return &this->AbstractTypeClass; /*0x6cf061*/
}



// ==== 0x006CF070  sub_6CF070  this=-  sig=ida-proto ====
int sub_6CF070()
{
  sub_6CF8F0(&dword_B0C114, 0, 0); /*0x6cf079*/
  dword_B0C114 = (int)&DynamicVectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf087*/
  dword_B0C128 = 10; /*0x6cf091*/
  dword_B0C124 = 0; /*0x6cf09b*/
  sub_6CF8F0(&dword_B0C12C, 0, 0); /*0x6cf0a5*/
  dword_B0C12C = (int)&DynamicVectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf0b4*/
  dword_B0C13C = 0; /*0x6cf0be*/
  SwizzleManagerClass_Instance = (int)&SwizzleManagerClass::`vftable'; /*0x6cf0c8*/
  dword_B0C128 = 1000; /*0x6cf0d2*/
  dword_B0C140 = 1000; /*0x6cf0d7*/
  return atexit(SwizzleManagerClass::Register); /*0x6cf0e2*/
}



// ==== 0x006CF0F0  SwizzleManagerClass::Register  this=SwizzleManagerClass  sig=ida-proto ====
void __cdecl sub_6CF0F0()
{
  SwizzleManagerClass_Instance = (int)&SwizzleManagerClass::`vftable'; /*0x6cf0f6*/
  SwizzleManagerClass::ConvertNodes((int)&SwizzleManagerClass_Instance); /*0x6cf100*/
  dword_B0C12C = (int)&VectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf10e*/
  if ( dword_B0C130 && byte_B0C139 ) /*0x6cf120*/
  {
    __3_YAXPAX_Z(dword_B0C130); /*0x6cf123*/
    dword_B0C130 = 0; /*0x6cf12b*/
  }
  byte_B0C139 = 0; /*0x6cf136*/
  dword_B0C134 = 0; /*0x6cf13e*/
  dword_B0C114 = (int)&VectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf144*/
  if ( dword_B0C118 && byte_B0C121 ) /*0x6cf156*/
  {
    __3_YAXPAX_Z(dword_B0C118); /*0x6cf159*/
    dword_B0C118 = 0; /*0x6cf161*/
  }
  byte_B0C121 = 0; /*0x6cf167*/
  dword_B0C11C = 0; /*0x6cf16d*/
}



// ==== 0x006CF1D0  SwizzleManagerClass::SmallFunc_6CF1D0  this=SwizzleManagerClass  sig=csp ====
void __thiscall SmallFunc_6CF1D0(SwizzleManagerClass *this)
{
  void *SwizzleManagerClass_field_0x20; // eax
  void *SwizzleManagerClass_field_0x08; // eax

  *(_DWORD *)this->__pad_0 = &SwizzleManagerClass::`vftable'; /*0x6cf1d4*/
  SwizzleManagerClass::ConvertNodes((int)this); /*0x6cf1da*/
  SwizzleManagerClass_field_0x20 = (void *)this->SwizzleManagerClass_field_0x20; /*0x6cf1df*/
  this->SwizzleManagerClass_field_0x1C = (int)&VectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf1e6*/
  if ( SwizzleManagerClass_field_0x20 && *((_BYTE *)this + 41) ) /*0x6cf1ef*/
  {
    __3_YAXPAX_Z(SwizzleManagerClass_field_0x20); /*0x6cf1f5*/
    this->SwizzleManagerClass_field_0x20 = 0; /*0x6cf1fd*/
  }
  *((_BYTE *)this + 41) = 0; /*0x6cf200*/
  this->SwizzleManagerClass_field_0x24 = 0; /*0x6cf203*/
  SwizzleManagerClass_field_0x08 = (void *)this->SwizzleManagerClass_field_0x08; /*0x6cf206*/
  this->SwizzleManagerClass_field_0x04 = (int)&VectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf209*/
  if ( SwizzleManagerClass_field_0x08 && BYTE1(this->SwizzleManagerClass_field_0x10) ) /*0x6cf214*/
  {
    __3_YAXPAX_Z(SwizzleManagerClass_field_0x08); /*0x6cf21a*/
    this->SwizzleManagerClass_field_0x08 = 0; /*0x6cf222*/
  }
  BYTE1(this->SwizzleManagerClass_field_0x10) = 0; /*0x6cf225*/
  this->SwizzleManagerClass_field_0x0C = 0; /*0x6cf228*/
}



// ==== 0x006CF230  SwizzleManagerClass::ConvertWrapper  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManager::ConvertWrapper(SwizzleManagerClass *this)
{
  SwizzleManagerClass::ConvertNodes((int)this); /*0x6cf234*/
  return 0; /*0x6cf23b*/
}



// ==== 0x006CF240  SwizzleManagerClass::RegisterForTracking  this=SwizzleManagerClass  sig=csp ====
int __stdcall ObjectPtr_RegisterForTracking(int a1, int *a2)
{
  int v3; // ebx
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // edx

  if ( !a2 ) /*0x6cf248*/
    return -2147467261; /*0x6cf24b*/
  v3 = *a2; /*0x6cf254*/
  if ( !*a2 ) /*0x6cf254*/
    return 0; /*0x6cf25b*/
  v4 = *(_DWORD *)(a1 + 12); /*0x6cf266*/
  if ( *(_DWORD *)(a1 + 20) < v4 /*0x6cf28e*/
    || (*(_BYTE *)(a1 + 17) || !v4)
    && (v5 = *(_DWORD *)(a1 + 24), v5 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(a1 + 4) + 8))(a1 + 4, v4 + v5, 0) )
  {
    v6 = *(_DWORD *)(a1 + 20); /*0x6cf295*/
    v7 = *(_DWORD *)(a1 + 8); /*0x6cf298*/
    *(_DWORD *)(a1 + 20) = v6 + 1; /*0x6cf29e*/
    *(_DWORD *)(v7 + 8 * v6) = v3; /*0x6cf2a1*/
    *(_DWORD *)(v7 + 8 * v6 + 4) = a2; /*0x6cf2a4*/
  }
  *a2 = 0; /*0x6cf2a8*/
  return 0; /*0x6cf24a*/
}



// ==== 0x006CF2C0  SwizzleManagerClass::Here_I_Am  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::Here_I_Am(int a1, int a2, int a3)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // edx

  v3 = *(_DWORD *)(a1 + 36); /*0x6cf2d5*/
  if ( *(_DWORD *)(a1 + 44) < v3 /*0x6cf2f7*/
    || (*(_BYTE *)(a1 + 41) || !v3)
    && (v4 = *(_DWORD *)(a1 + 48), v4 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(a1 + 28) + 8))(a1 + 28, v3 + v4, 0) )
  {
    v5 = *(_DWORD *)(a1 + 44); /*0x6cf2fe*/
    v6 = *(_DWORD *)(a1 + 32); /*0x6cf301*/
    *(_DWORD *)(a1 + 44) = v5 + 1; /*0x6cf307*/
    *(_DWORD *)(v6 + 8 * v5) = a2; /*0x6cf30a*/
    *(_DWORD *)(v6 + 8 * v5 + 4) = a3; /*0x6cf30d*/
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
int __stdcall SwizzleManagerClass::Clear(SwizzleManagerClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6cf416*/
    return -2147467261; /*0x6cf418*/
  *a2 = 4; /*0x6cf420*/
  return 0; /*0x6cf41d*/
}



// ==== 0x006CF430  SwizzleManagerClass::Process  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::_vt00(int a1, const void *a2, _DWORD *a3)
{
  if ( !a3 ) /*0x6cf438*/
    return -2147467261; /*0x6cf43b*/
  if ( memcmp(a2, &IID_ISwizzle, 0x10u) && memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x6cf46a*/
    return -2147467262; /*0x6cf46f*/
  *a3 = a1; /*0x6cf47c*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x6cf481*/
  return 0; /*0x6cf43a*/
}



// ==== 0x006CF490  SwizzleManagerClass::Add  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::Add(SwizzleManagerClass *this, int a2, _DWORD *a3)
{
  if ( !a2 || !a3 ) /*0x6cf49e*/
    return -2147467261; /*0x6cf4a7*/
  *a3 = a2; /*0x6cf4a0*/
  return 0; /*0x6cf4a4*/
}



// ==== 0x006CF4B0  SwizzleManagerClass::AddRef  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::AddRef(SwizzleManagerClass *this)
{
  return 1; /*0x6cf4b5*/
}



// ==== 0x006CF4C0  SwizzleManagerClass::Release  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::Release(SwizzleManagerClass *this)
{
  return 1; /*0x6cf4c5*/
}



// ==== 0x006CF4D0  SwizzleManagerClass::Remove  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::Remove(SwizzleManagerClass *this, int a2, int a3)
{
  return -2147467263; /*0x6cf4d5*/
}



// ==== 0x006CF4E0  SwizzleManagerClass::Lookup  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::Lookup(SwizzleManagerClass *this, int a2, int a3, int a4)
{
  return -2147467263; /*0x6cf4e5*/
}



// ==== 0x006CF4F0  _DynamicVectorClass_VSwizzlePointerClass::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall SwizzleManagerClass_19::ClearBuffer(_DynamicVectorClass_VSwizzlePointerClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6cf4f6*/
  this->m_10 = 0; /*0x6cf4f9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6cf500*/
  {
    __3_YAXPAX_Z(v2); /*0x6cf506*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6cf50e*/
  }
  BYTE1(this->m_C) = 0; /*0x6cf511*/
  this->m_8 = 0; /*0x6cf514*/
}



// ==== 0x006CF520  _DynamicVectorClass_VSwizzlePointerClass::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall SwizzleManagerClass_19::PointerToIndex(_DynamicVectorClass_VSwizzlePointerClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6cf520*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x6cf535*/
  else
    return 0; /*0x6cf527*/
}



// ==== 0x006CF540  _VectorClass_VSwizzlePointerClass::Lookup  this=VectorClass  sig=csp ====
_DWORD *__thiscall SwizzleManagerClass_19::Lookup(_VectorClass_VSwizzlePointerClass *this, _DWORD *a2, int a3)
{
  int v3; // edx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x6cf540*/
  *a2 = *(_DWORD *)(v3 + 8 * a3); /*0x6cf54f*/
  a2[1] = *(_DWORD *)(v3 + 8 * a3 + 4); /*0x6cf556*/
  return a2; /*0x6cf551*/
}



// ==== 0x006CF560  _VectorClass_VSwizzlePointerClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall SwizzleManagerClass_19::AddRef(_VectorClass_VSwizzlePointerClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x6cf562*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6cf56d*/
  {
    v3 = 0; /*0x6cf56f*/
    if ( m_8 <= 0 ) /*0x6cf573*/
      return 1; /*0x6cf593*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6cf575*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6cf57b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6cf584*/
    {
      ++v3; /*0x6cf586*/
      v4 += 2; /*0x6cf587*/
      if ( v3 >= m_8 ) /*0x6cf58c*/
        return 1; /*0x6cf58c*/
    }
  }
  return 0; /*0x6cf58e*/
}



// ==== 0x006CF5A0  _VectorClass_VSwizzlePointerClass::Release  this=VectorClass  sig=csp ====
char __thiscall SwizzleManagerClass_19::Release(_VectorClass_VSwizzlePointerClass *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // esi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx

  v3 = a2; /*0x6cf5a2*/
  if ( a2 ) /*0x6cf5ae*/
  {
    v5 = a3; /*0x6cf5b4*/
    LOBYTE(this->m_C) = 0; /*0x6cf5b8*/
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
        v7 = (_DWORD *)v6; /*0x6cf5d6*/
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
        v5 = (_DWORD *)v6; /*0x6cf5e8*/
      }
      else
      {
        v5 = 0; /*0x6cf5ec*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x6cf607*/
    if ( v5 ) /*0x6cf60b*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6cf616*/
      {
        m_8 = this->m_8; /*0x6cf61b*/
        if ( a2 < m_8 ) /*0x6cf620*/
          m_8 = a2; /*0x6cf622*/
        v13 = 0; /*0x6cf624*/
        if ( m_8 > 0 ) /*0x6cf628*/
        {
          do /*0x6cf647*/
          {
            v14 = 2 * v13; /*0x6cf62d*/
            v15 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * v13++); /*0x6cf636*/
            v5[v14] = *v15; /*0x6cf63d*/
            v5[v14 + 1] = v15[1]; /*0x6cf643*/
          }
          while ( v13 < m_8 ); /*0x6cf647*/
          v3 = a2; /*0x6cf649*/
        }
        if ( BYTE1(this->m_C) ) /*0x6cf64f*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6cf658*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6cf660*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x6cf66b*/
      this->m_8 = v3; /*0x6cf671*/
      BYTE1(this->m_C) = a3 == 0; /*0x6cf674*/
      return 1; /*0x6cf67a*/
    }
    else
    {
      return 0; /*0x6cf610*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_VSwizzlePointerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6cf684*/
    return 1; /*0x6cf68a*/
  }
}



// ==== 0x006CF690  _VectorClass_VSwizzlePointerClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall SwizzleManagerClass_19::ddtor(_VectorClass_VSwizzlePointerClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6cf69d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6cf6a3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6cf6ab*/
  }
  BYTE1(this->m_C) = 0; /*0x6cf6ae*/
  this->m_8 = 0; /*0x6cf6b1*/
}



// ==== 0x006CF6C0  _VectorClass_VSwizzlePointerClass::Init  this=VectorClass  sig=csp ====
int __thiscall SwizzleManagerClass_19::Init(_VectorClass_VSwizzlePointerClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6cf6c0*/
    return 0; /*0x6cf6c8*/
  m_8 = this->m_8; /*0x6cf6ce*/
  result = 0; /*0x6cf6d1*/
  if ( m_8 <= 0 ) /*0x6cf6d5*/
    return -1; /*0x6cf6ec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; i += 2 ) /*0x6cf6db*/
  {
    if ( ++result >= m_8 ) /*0x6cf6ea*/
      return -1; /*0x6cf6ea*/
  }
  return result; /*0x6cf6ca*/
}



// ==== 0x006CF700  _VectorClass_VSwizzlePointerClass::Add  this=VectorClass  sig=csp ====
unsigned int __thiscall SwizzleManagerClass_19::Add(_VectorClass_VSwizzlePointerClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6cf700*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x6cf715*/
  else
    return 0; /*0x6cf707*/
}



// ==== 0x006CF720  _DynamicVectorClass_VSwizzlePointerClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall SwizzleManagerClass_19::SetCapacity(_DynamicVectorClass_VSwizzlePointerClass *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x6cf722*/
  if ( a2 ) /*0x6cf72e*/
  {
    v5 = a3; /*0x6cf734*/
    LOBYTE(this->m_C) = 0; /*0x6cf738*/
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
        v7 = (_DWORD *)v6; /*0x6cf756*/
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
        v5 = (_DWORD *)v6; /*0x6cf768*/
      }
      else
      {
        v5 = 0; /*0x6cf76c*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x6cf787*/
    if ( !v5 ) /*0x6cf78b*/
      return 0; /*0x6cf814*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6cf791*/
    {
      m_8 = this->m_8; /*0x6cf796*/
      if ( a2 < m_8 ) /*0x6cf79b*/
        m_8 = a2; /*0x6cf79d*/
      v12 = 0; /*0x6cf79f*/
      if ( m_8 > 0 ) /*0x6cf7a3*/
      {
        do /*0x6cf7c2*/
        {
          v13 = 2 * v12; /*0x6cf7a8*/
          v14 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * v12++); /*0x6cf7b1*/
          v5[v13] = *v14; /*0x6cf7b8*/
          v5[v13 + 1] = v14[1]; /*0x6cf7be*/
        }
        while ( v12 < m_8 ); /*0x6cf7c2*/
        v3 = a2; /*0x6cf7c4*/
      }
      if ( BYTE1(this->m_C) ) /*0x6cf7ca*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6cf7d3*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6cf7db*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x6cf7e6*/
    this->m_8 = v3; /*0x6cf7ec*/
    BYTE1(this->m_C) = a3 == 0; /*0x6cf7ef*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_VSwizzlePointerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6cf7f8*/
  }
  v15 = this->m_8; /*0x6cf7fb*/
  if ( v15 < this->m_10 ) /*0x6cf803*/
    this->m_10 = v15; /*0x6cf805*/
  return 1; /*0x6cf808*/
}



// ==== 0x006CF820  _DynamicVectorClass_VSwizzlePointerClass::FindItem  this=DynamicVector  sig=csp ====
int __thiscall SwizzleManagerClass_19::FindItem(_DynamicVectorClass_VSwizzlePointerClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6cf820*/
  result = 0; /*0x6cf823*/
  if ( m_10 <= 0 ) /*0x6cf828*/
    return -1; /*0x6cf83f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; i += 2 ) /*0x6cf82e*/
  {
    if ( ++result >= m_10 ) /*0x6cf83d*/
      return -1; /*0x6cf83d*/
  }
  return result; /*0x6cf842*/
}



// ==== 0x006CF850  _VectorClass_VSwizzlePointerClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall SwizzleManagerClass_19::QueryInterface(_VectorClass_VSwizzlePointerClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6cf853*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf856*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6cf860*/
  {
    __3_YAXPAX_Z(v3); /*0x6cf868*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6cf870*/
  }
  BYTE1(this->m_C) = 0; /*0x6cf87b*/
  this->m_8 = 0; /*0x6cf881*/
  if ( (a2 & 1) != 0 ) /*0x6cf888*/
    __3_YAXPAX_Z(this); /*0x6cf88b*/
  return this->__pad_0; /*0x6cf895*/
}



// ==== 0x006CF8A0  _DynamicVectorClass_VSwizzlePointerClass::Constructor_VectorClass_SwizzlePointerClass_  this=DynamicVector  sig=csp ====
_DWORD *__thiscall SwizzleManagerClass_19::Constructor_VectorClass_SwizzlePointerClass_(
        _DynamicVectorClass_VSwizzlePointerClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6cf8a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf8a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6cf8b0*/
  {
    __3_YAXPAX_Z(v3); /*0x6cf8b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6cf8c0*/
  }
  BYTE1(this->m_C) = 0; /*0x6cf8cb*/
  this->m_8 = 0; /*0x6cf8d1*/
  if ( (a2 & 1) != 0 ) /*0x6cf8d8*/
    __3_YAXPAX_Z(this); /*0x6cf8db*/
  return this->__pad_0; /*0x6cf8e5*/
}



// ==== 0x006CF8F0  VectorClass::sub_6CF8F0  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_6CF8F0(VectorClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // ecx
  int v9; // edx

  this->Items = 0; /*0x6cf8fd*/
  this->Capacity = a2; /*0x6cf900*/
  this->IsInitialized = 1; /*0x6cf903*/
  this->IsAllocated = 0; /*0x6cf907*/
  this->ptr_0 = &VectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf90a*/
  if ( !a2 ) /*0x6cf910*/
    return &this->ptr_0; /*0x6cf910*/
  if ( !a3 ) /*0x6cf918*/
  {
    v7 = (_DWORD *)__2_YAPAXI_Z(8 * a2); /*0x6cf942*/
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
        this->IsAllocated = 1; /*0x6cf966*/
        return &this->ptr_0; /*0x6cf96f*/
      }
    }
    else
    {
      v7 = 0; /*0x6cf972*/
    }
    this->Items = v7; /*0x6cf974*/
    this->IsAllocated = 1; /*0x6cf977*/
    return &this->ptr_0; /*0x6cf97b*/
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
  return &this->ptr_0; /*0x6cf934*/
}



// ==== 0x006CF990  sub_6CF990  this=-  sig=ida-proto ====
int sub_6CF990()
{
  dword_B0CB28 = 0; /*0x6cf992*/
  dword_B0CB2C = 0; /*0x6cf997*/
  dword_B0CB30 = 0; /*0x6cf99c*/
  dword_B0CB34 = 0; /*0x6cf9a1*/
  return 0; /*0x6cf9a6*/
}



// ==== 0x006CF9B0  sub_6CF9B0  this=-  sig=ida-proto ====
void sub_6CF9B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6cf9bc*/
  dbl_B0CB48 = Math::Sqrt(v0 + v0); /*0x6cf9ce*/
}



// ==== 0x006CF9E0  sub_6CF9E0  this=-  sig=ida-proto ====
void sub_6CF9E0()
{
  dbl_B0CD30 = dbl_B0CB48 / 60.0; /*0x6cf9ec*/
}



// ==== 0x006CFA00  sub_6CFA00  this=-  sig=ida-proto ====
void sub_6CFA00()
{
  dbl_B0CCA8 = 1.0 / dbl_B0CD30; /*0x6cfa0c*/
}



// ==== 0x006CFA20  sub_6CFA20  this=-  sig=ida-proto ====
void sub_6CFA20()
{
  dbl_B0CCA0 = 0.0174532925199433 * 45.0; /*0x6cfa2c*/
}



// ==== 0x006CFA40  sub_6CFA40  this=-  sig=ida-proto ====
void sub_6CFA40()
{
  dbl_B0CB60 = 0.0174532925199433 * 60.0; /*0x6cfa4c*/
}



// ==== 0x006CFA60  sub_6CFA60  this=-  sig=ida-proto ====
void sub_6CFA60()
{
  dbl_B0C1B0 = 0.0174532925199433 * 90.0; /*0x6cfa6c*/
}



// ==== 0x006CFA80  sub_6CFA80  this=-  sig=ida-proto ====
__int64 sub_6CFA80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0C1B0 - dbl_B0CB60); /*0x6cfa92*/
  result = Math::RoundToInt(v0 * dbl_B0CB48 * 0.5); /*0x6cfaa6*/
  dword_B0CD3C = result; /*0x6cfaab*/
  return result; /*0x6cfab0*/
}



// ==== 0x006CFAC0  sub_6CFAC0  this=-  sig=ida-proto ====
void sub_6CFAC0()
{
  dbl_B0CB70 = Math::ArcTan((double)dword_B0CD3C * 0.00390625); /*0x6cfad7*/
}



// ==== 0x006CFAF0  sub_6CFAF0  this=-  sig=ida-proto ====
void sub_6CFAF0()
{
  dbl_B0CC30 = Math::ArcTan((double)(2 * dword_B0CD3C) / dbl_B0CB48); /*0x6cfb12*/
}



// ==== 0x006CFB20  sub_6CFB20  this=-  sig=ida-proto ====
__int64 sub_6CFB20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0CD3C) + 0.5); /*0x6cfb3b*/
  dword_B0CD2C = result; /*0x6cfb40*/
  return result; /*0x6cfb46*/
}



// ==== 0x006CFB50  sub_6CFB50  this=-  sig=ida-proto ====
int sub_6CFB50()
{
  word_B0CB40 = 0; /*0x6cfb52*/
  word_B0CB42 = 0; /*0x6cfb58*/
  return 0; /*0x6cfb5e*/
}



// ==== 0x006CFB60  sub_6CFB60  this=-  sig=ida-proto ====
int sub_6CFB60()
{
  dword_B0CC10 = 0; /*0x6cfb62*/
  dword_B0CC14 = 0; /*0x6cfb67*/
  dword_B0CC18 = 0; /*0x6cfb6c*/
  return 0; /*0x6cfb71*/
}



// ==== 0x006CFB80  sub_6CFB80  this=-  sig=ida-proto ====
int sub_6CFB80()
{
  dword_B0CD20 = 0; /*0x6cfb85*/
  dword_B0CD18 = 128; /*0x6cfb8f*/
  dword_B0CD1C = 128; /*0x6cfb94*/
  return 128; /*0x6cfb99*/
}



// ==== 0x006CFBA0  sub_6CFBA0  this=-  sig=ida-proto ====
int sub_6CFBA0()
{
  _BYTE *v0; // esi
  int v1; // edi

  v0 = &stru_B0C1C0; /*0x6cfba2*/
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

  if ( (byte_B0C1AC & 1) == 0 ) /*0x6cfbda*/
  {
    byte_B0C1AC |= 1u; /*0x6cfbe0*/
    v0 = &dword_B0CB20; /*0x6cfbe6*/
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
  ShapeButtonClass::Init(stru_B0CCB0); /*0x6cfc05*/
  return atexit(sub_6CFC20); /*0x6cfc15*/
}



// ==== 0x006CFC20  sub_6CFC20  this=-  sig=ida-proto ====
void __cdecl sub_6CFC20()
{
  if ( (byte_B0C1AC & 2) == 0 ) /*0x6cfc2a*/
  {
    byte_B0C1AC |= 2u; /*0x6cfc2e*/
    ShapeButtonClass::Destructor((int)stru_B0CCB0); /*0x6cfc39*/
  }
}



// ==== 0x006CFC40  sub_6CFC40  this=-  sig=ida-proto ====
int sub_6CFC40()
{
  ShapeButtonClass::Init(stru_B0CC40); /*0x6cfc45*/
  return atexit(sub_6CFC60); /*0x6cfc55*/
}



// ==== 0x006CFC60  sub_6CFC60  this=-  sig=ida-proto ====
void __cdecl sub_6CFC60()
{
  if ( (byte_B0C1AC & 4) == 0 ) /*0x6cfc6a*/
  {
    byte_B0C1AC |= 4u; /*0x6cfc6e*/
    ShapeButtonClass::Destructor((int)stru_B0CC40); /*0x6cfc79*/
  }
}



// ==== 0x006CFCC0  SidebarClass::findEntryIndexByName  this=Coord  sig=csp ====
int __thiscall sub_6CFCC0(const char *this)
{
  int v1; // ebp
  const char **v2; // edi

  v1 = 0; /*0x6cfcc4*/
  v2 = (const char **)off_8427D0; /*0x6cfcc6*/
  while ( strcmp(*v2, this) ) /*0x6cfcfa*/
  {
    ++v2; /*0x6cfcfc*/
    ++v1; /*0x6cfcff*/
    if ( (int)v2 >= (int)g_INI_Key_Beacon ) /*0x6cfd06*/
      return dword_8427CC; /*0x6cfd11*/
  }
  return v1; /*0x6cfd0d*/
}



// ==== 0x006CFD20  globalHelper_0CFD20  this=Coord  sig=csp ====
void __fastcall sub_6CFD20(int a1, int a2)
{
  g_ObjectTrackingPool[a1] = a2; /*0x6cfd20*/
}



// ==== 0x006CFD30  sub_6CFD30  this=-  sig=ida-proto ====
int __fastcall sub_6CFD30(int a1)
{
  return g_ObjectTrackingPool[a1]; /*0x6cfd37*/
}



// ==== 0x006CFD40  GetFontClassEntry  this=-  sig=ida-proto ====
char *__fastcall FontClass_GetEntry(int a1)
{
  unsigned int v1; // eax

  v1 = g_ObjectTrackingPool[a1]; /*0x6cfd40*/
  if ( v1 > 0x18 ) /*0x6cfd49*/
    return 0; /*0x6cfd5c*/
  else
    return (char *)&stru_B0C1C0 + 96 * v1; /*0x6cfd56*/
}



// ==== 0x006CFD60  sub_6CFD60  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_6CFD60(_DWORD *a1, int a2)
{
  _DWORD *result; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // edi

  result = a1; /*0x6cfd7a*/
  v4 = dword_B0CC24; /*0x6cfd82*/
  v5 = *((_DWORD *)dword_B0FC68 + 2); /*0x6cfd8f*/
  v6 = *((_DWORD *)dword_B0FC68 + 3); /*0x6cfd92*/
  *a1 = *(_DWORD *)dword_B0FC68 + dword_B0CC38 * g_ObjectTrackingPool[a2]; /*0x6cfd95*/
  a1[1] = v4; /*0x6cfd97*/
  a1[2] = v5; /*0x6cfd9a*/
  a1[3] = v6; /*0x6cfd9d*/
  return result; /*0x6cfda0*/
}



// ==== 0x006CFDB0  globalHelper_0CFDB0  this=-  sig=ida-proto ====
int __fastcall sub_6CFDB0(int a1)
{
  int result; // eax
  int v2; // ecx

  dword_B0CB54 = a1; /*0x6cfdb5*/
  result = *(_DWORD *)dword_B0FC6C - a1 * *((_DWORD *)dword_B0FC68 + 2); /*0x6cfdc9*/
  v2 = *(_DWORD *)dword_B0FC60 + *((_DWORD *)dword_B0FC60 + 2); /*0x6cfdd6*/
  dword_B0CC2C = result; /*0x6cfddb*/
  if ( result <= v2 ) /*0x6cfde0*/
    dword_B0CC2C = v2; /*0x6cfde2*/
  return result; /*0x6cfdd8*/
}



// ==== 0x006CFE10  ObjectClass::method_6CFE10  this=ObjectClass  sig=csp ====
int __thiscall sub_6CFE10(ObjectClass *this)
{
  return (int)&this->AbstractClass - dword_B0CC20 + 1; /*0x6cfe19*/
}



// ==== 0x006CFE20  TabClass::Constructor  this=TabClass  sig=csp ====
_DWORD *__thiscall TabClass::Constructor(TabClass *this)
{
  int v2; // ecx
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

  TabClass::initTabData((char *)this); /*0x6cfe2b*/
  *((_DWORD *)this + 5446) = &INoticeSink::`vftable'; /*0x6cfe3c*/
  TabClass::initStripClass((TabClass *)((char *)this + 21788)); /*0x6cfe42*/
  *((_DWORD *)this + 5451) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6cfe4e*/
  *((_DWORD *)this + 5453) = 0; /*0x6cfe54*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6cfe5a*/
  *((_DWORD *)this + 5456) = 0; /*0x6cfe60*/
  *((_DWORD *)this + 5454) = v2; /*0x6cfe66*/
  *((_DWORD *)this + 5446) = &TabClass::`vftable'; /*0x6cfe6e*/
  *((_BYTE *)this + 21828) = 1; /*0x6cfe74*/
  *((_BYTE *)this + 21829) = 1; /*0x6cfe7a*/
  *((_BYTE *)this + 21830) = 1; /*0x6cfe80*/
  this->TabClass_field_0x0 = &TabClass::`vftable'; /*0x6cfe86*/
  v3 = 0; /*0x6cfe8c*/
  v4 = (const char **)off_8427D0; /*0x6cfe8e*/
  while ( strcmp(*v4, aAttackmove) ) /*0x6cfec5*/
  {
    ++v4; /*0x6cfec7*/
    ++v3; /*0x6cfeca*/
    if ( (int)v4 >= (int)g_INI_Key_Beacon ) /*0x6cfed1*/
    {
      v5 = dword_8427CC; /*0x6cfed3*/
      goto LABEL_5; /*0x6cfed3*/
    }
  }
  v5 = v3; /*0x6cff0f*/
LABEL_5:
  dword_B0CD24 = v5; /*0x6cfed8*/
  v6 = 0; /*0x6cfedd*/
  v7 = (const char **)off_8427D0; /*0x6cfedf*/
  while ( strcmp(*v7, g_INI_Key_Beacon) ) /*0x6cff1a*/
  {
    ++v7; /*0x6cff1c*/
    ++v6; /*0x6cff1f*/
    if ( (int)v7 >= (int)g_INI_Key_Beacon ) /*0x6cff26*/
    {
      v8 = dword_8427CC; /*0x6cff28*/
      goto LABEL_11; /*0x6cff28*/
    }
  }
  v8 = v6; /*0x6cff64*/
LABEL_11:
  dword_B0CB3C = v8; /*0x6cff2d*/
  v9 = 0; /*0x6cff32*/
  v10 = (const char **)off_8427D0; /*0x6cff34*/
  while ( strcmp(*v10, g_INI_Key_Cheer) ) /*0x6cff6f*/
  {
    ++v10; /*0x6cff71*/
    ++v9; /*0x6cff74*/
    if ( (int)v10 >= (int)g_INI_Key_Beacon ) /*0x6cff7b*/
    {
      v11 = dword_8427CC; /*0x6cff7d*/
      goto LABEL_17; /*0x6cff7d*/
    }
  }
  v11 = v9; /*0x6cffb9*/
LABEL_17:
  dword_B0C1B8 = v11; /*0x6cff82*/
  v12 = 0; /*0x6cff87*/
  v13 = (const char **)off_8427D0; /*0x6cff89*/
  while ( strcmp(*v13, g_INI_Key_Deploy) ) /*0x6cffc4*/
  {
    ++v13; /*0x6cffc6*/
    ++v12; /*0x6cffc9*/
    if ( (int)v13 >= (int)g_INI_Key_Beacon ) /*0x6cffd0*/
    {
      v14 = dword_8427CC; /*0x6cffd2*/
      goto LABEL_23; /*0x6cffd2*/
    }
  }
  v14 = v12; /*0x6d000e*/
LABEL_23:
  dword_B0CB20 = v14; /*0x6cffd7*/
  v15 = 0; /*0x6cffdc*/
  v16 = (const char **)off_8427D0; /*0x6cffde*/
  while ( strcmp(*v16, g_INI_Key_Guard) ) /*0x6d0019*/
  {
    ++v16; /*0x6d001b*/
    ++v15; /*0x6d001e*/
    if ( (int)v16 >= (int)g_INI_Key_Beacon ) /*0x6d0025*/
    {
      v17 = dword_8427CC; /*0x6d0027*/
      goto LABEL_29; /*0x6d0027*/
    }
  }
  v17 = v15; /*0x6d0063*/
LABEL_29:
  dword_B0CB68 = v17; /*0x6d002c*/
  v18 = 0; /*0x6d0031*/
  v19 = (const char **)off_8427D0; /*0x6d0033*/
  while ( strcmp(*v19, g_INI_Key_PlanningMode) ) /*0x6d006e*/
  {
    ++v19; /*0x6d0070*/
    ++v18; /*0x6d0073*/
    if ( (int)v19 >= (int)g_INI_Key_Beacon ) /*0x6d007a*/
    {
      v20 = dword_8427CC; /*0x6d007c*/
      goto LABEL_35; /*0x6d007c*/
    }
  }
  v20 = v18; /*0x6d00b8*/
LABEL_35:
  dword_B0CC1C = v20; /*0x6d0081*/
  v21 = 0; /*0x6d0086*/
  v22 = (const char **)off_8427D0; /*0x6d0088*/
  while ( strcmp(*v22, g_INI_Key_Stop) ) /*0x6d00c3*/
  {
    ++v22; /*0x6d00c5*/
    ++v21; /*0x6d00c8*/
    if ( (int)v22 >= (int)g_INI_Key_Beacon ) /*0x6d00cf*/
    {
      v23 = dword_8427CC; /*0x6d00d1*/
      goto LABEL_41; /*0x6d00d1*/
    }
  }
  v23 = v21; /*0x6d010d*/
LABEL_41:
  dword_B0CB6C = v23; /*0x6d00d6*/
  v24 = 0; /*0x6d00db*/
  v25 = (const char **)off_8427D0; /*0x6d00dd*/
  while ( strcmp(*v25, aTeam01) ) /*0x6d0118*/
  {
    ++v25; /*0x6d011a*/
    ++v24; /*0x6d011d*/
    if ( (int)v25 >= (int)g_INI_Key_Beacon ) /*0x6d0124*/
    {
      v26 = dword_8427CC; /*0x6d0126*/
      goto LABEL_47; /*0x6d0126*/
    }
  }
  v26 = v24; /*0x6d0162*/
LABEL_47:
  dword_B0CC20 = v26; /*0x6d012b*/
  v27 = 0; /*0x6d0130*/
  v28 = (const char **)off_8427D0; /*0x6d0132*/
  while ( strcmp(*v28, aTeam02) ) /*0x6d016d*/
  {
    ++v28; /*0x6d016f*/
    ++v27; /*0x6d0172*/
    if ( (int)v28 >= (int)g_INI_Key_Beacon ) /*0x6d0179*/
    {
      v29 = dword_8427CC; /*0x6d017b*/
      goto LABEL_53; /*0x6d017b*/
    }
  }
  v29 = v27; /*0x6d01b7*/
LABEL_53:
  dword_B0CC28 = v29; /*0x6d0180*/
  v30 = 0; /*0x6d0185*/
  v31 = (const char **)off_8427D0; /*0x6d0187*/
  while ( strcmp(*v31, aTeam03) ) /*0x6d01c2*/
  {
    ++v31; /*0x6d01c4*/
    ++v30; /*0x6d01c7*/
    if ( (int)v31 >= (int)g_INI_Key_Beacon ) /*0x6d01ce*/
    {
      v32 = dword_8427CC; /*0x6d01d0*/
      goto LABEL_59; /*0x6d01d0*/
    }
  }
  v32 = v30; /*0x6d020c*/
LABEL_59:
  dword_B0CD28 = v32; /*0x6d01d5*/
  v33 = 0; /*0x6d01da*/
  v34 = (const char **)off_8427D0; /*0x6d01dc*/
  while ( strcmp(*v34, g_INI_Key_TypeSelect) ) /*0x6d0217*/
  {
    ++v34; /*0x6d0219*/
    ++v33; /*0x6d021c*/
    if ( (int)v34 >= (int)g_INI_Key_Beacon ) /*0x6d0223*/
    {
      v35 = dword_8427CC; /*0x6d0225*/
      goto LABEL_65; /*0x6d0225*/
    }
  }
  v35 = v33; /*0x6d024e*/
LABEL_65:
  dword_B0CB38 = v35; /*0x6d022a*/
  TabClass::processTabInput(this != 0 ? (TabClass *)((char *)this + 21784) : 0);
  return &this->TabClass_field_0x0; /*0x6d0248*/
}



// ==== 0x006C0010  _TClassFactory_VTiberiumClass::GetSize  this=?$TClassFactory@VTiberiumClass@@  sig=csp ====
int __thiscall TClassFactory_TiberiumClass::GetSize(_TClassFactory_VTiberiumClass *this, int a2)
{
  int v2; // ecx
  int result; // eax
  int v4; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c001a*/
  if ( v4 ) /*0x6c001d*/
  {
    *(_DWORD *)(a2 + 4) = v2 + 1; /*0x6c0020*/
    nullsub_114(a2, v4); /*0x6c0024*/
  }
  else
  {
    *(_DWORD *)(a2 + 4) = v2 - 1; /*0x6c0029*/
    return 0; /*0x6c002c*/
  }
  return result; /*0x6c002e*/
}



// ==== 0x006C0025  nullsub_114  this=-  sig=csp ====
void __stdcall nullsub_114(int a1, int a2)
{
  ; /*0x6c0025*/
}



// ==== 0x006C0040  ObjectClass::WinMain_Helper_6C0040  this=?$TClassFactory@VTubeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0040(ObjectClass *this)
{
  this->? = 0; /*0x6c0042*/
  this->AbstractClass = &TClassFactory<TubeClass>::`vftable'; /*0x6c0049*/
  return &this->AbstractClass; /*0x6c004f*/
}



// ==== 0x006C0050  _TClassFactory_VTubeClass::QueryInterface2  this=?$TClassFactory@VTubeClass@@  sig=csp ====
int __thiscall COMObject::QueryInterface2(_TClassFactory_VTubeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0057*/
    return -2147467261; /*0x6c0059*/
  *v4 = 0; /*0x6c0076*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0092*/
    *v4 = a2; /*0x6c0096*/
  if ( !*v4 ) /*0x6c0098*/
    return -2147467262; /*0x6c00a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c00ac*/
  return 0; /*0x6c005e*/
}



// ==== 0x006C00C0  _TClassFactory_VTubeClass::AddRefCOM  this=?$TClassFactory@VTubeClass@@  sig=csp ====
LONG __thiscall TClassFactory_CampaignClass::AddRefCOM(_TClassFactory_VTubeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c00ce*/
}



// ==== 0x006C00E0  _TClassFactory_VTubeClass::Release  this=?$TClassFactory@VTubeClass@@  sig=csp ====
LONG __thiscall TClassFactory_CampaignClass::Release(_TClassFactory_VTubeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c00f0*/
  if ( !v1 ) /*0x6c00f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c00f7*/
  return v1; /*0x6c0101*/
}



// ==== 0x006C0110  _TClassFactory_VTubeClass::CreateInstanceCOM  this=?$TClassFactory@VTubeClass@@  sig=csp ====
int __thiscall TClassFactory_CampaignClass::CreateInstanceCOM(
        _TClassFactory_VTubeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  TubeClass *v5; // eax
  AbstractClass *v6; // eax
  AbstractClass *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0118*/
    return -2147024809; /*0x6c011b*/
  *v9 = 0; /*0x6c0128*/
  if ( a3 ) /*0x6c0130*/
    return -2147221232; /*0x6c0133*/
  v5 = (TubeClass *)__2_YAPAXI_Z(0x1C4u); /*0x6c0141*/
  if ( !v5 ) /*0x6c014b*/
    return -2147024882; /*0x6c014b*/
  v6 = TubeClass::Construct(v5, &word_B0BC68, 0); /*0x6c0156*/
  v7 = v6; /*0x6c015b*/
  if ( !v6 ) /*0x6c015f*/
    return -2147024882; /*0x6c0162*/
  v8 = (*(int (__stdcall **)(AbstractClass *, _DWORD *, _DWORD *))v6->ptr_0)(v6, a4, v9); /*0x6c0176*/
  if ( v8 < 0 ) /*0x6c017a*/
    (*(void (__thiscall **)(AbstractClass *, int))(v7->ptr_0 + 32))(v7, 1); /*0x6c0182*/
  return v8; /*0x6c011a*/
}



// ==== 0x006C0190  _TClassFactory_VTubeClass::AdjustRefCOM  this=?$TClassFactory@VTubeClass@@  sig=csp ====
int __thiscall TClassFactory_CampaignClass::AdjustRefCOM(_TClassFactory_VTubeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c019a*/
  if ( v5 ) /*0x6c019d*/
    v3 = v2 + 1; /*0x6c019f*/
  else
    v3 = v2 - 1; /*0x6c01a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c01a0*/
  return 0; /*0x6c01a5*/
}



// ==== 0x006C01C0  ObjectClass::WinMain_Helper_6C01C0  this=?$TClassFactory@VCampaignClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C01C0(ObjectClass *this)
{
  this->? = 0; /*0x6c01c2*/
  this->AbstractClass = &TClassFactory<CampaignClass>::`vftable'; /*0x6c01c9*/
  return &this->AbstractClass; /*0x6c01cf*/
}



// ==== 0x006C01D0  _TClassFactory_VCampaignClass::CreateTClassFactory_CampaignClass  this=?$TClassFactory@VCampaignClass@@  sig=csp ====
int __thiscall CreateTClassFactory_CampaignClass(_TClassFactory_VCampaignClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c01d7*/
    return -2147467261; /*0x6c01d9*/
  *v4 = 0; /*0x6c01f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0212*/
    *v4 = a2; /*0x6c0216*/
  if ( !*v4 ) /*0x6c0218*/
    return -2147467262; /*0x6c0220*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c022c*/
  return 0; /*0x6c01de*/
}



// ==== 0x006C0240  _TClassFactory_VCampaignClass::AddRef  this=?$TClassFactory@VCampaignClass@@  sig=csp ====
LONG __thiscall TClassFactory_CampaignClass::AddRef(_TClassFactory_VCampaignClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c024e*/
}



// ==== 0x006C0260  _TClassFactory_VCampaignClass::GetClassName  this=?$TClassFactory@VCampaignClass@@  sig=csp ====
LONG __thiscall TClassFactory_CampaignClass::GetClassName(_TClassFactory_VCampaignClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0270*/
  if ( !v1 ) /*0x6c0274*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0277*/
  return v1; /*0x6c0281*/
}



// ==== 0x006C0290  _TClassFactory_VCampaignClass::ddtor  this=?$TClassFactory@VCampaignClass@@  sig=csp ====
int __thiscall TClassFactory_CampaignClass::ddtor(_TClassFactory_VCampaignClass *this, int a2, int a3, _DWORD *a4)
{
  CampaignClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0298*/
    return -2147024809; /*0x6c029b*/
  *v9 = 0; /*0x6c02a8*/
  if ( a3 ) /*0x6c02b0*/
    return -2147221232; /*0x6c02b3*/
  v5 = (CampaignClass *)__2_YAPAXI_Z(0x3A0u); /*0x6c02c1*/
  if ( !v5 ) /*0x6c02cb*/
    return -2147024882; /*0x6c02cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))CampaignClass::CampaignClass(v5, 0); /*0x6c02d1*/
  v7 = v6; /*0x6c02d6*/
  if ( !v6 ) /*0x6c02da*/
    return -2147024882; /*0x6c02dd*/
  v8 = (**v6)(v6, a4, v9); /*0x6c02f1*/
  if ( v8 < 0 ) /*0x6c02f5*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c02fd*/
  return v8; /*0x6c029a*/
}



// ==== 0x006C0310  _TClassFactory_VCampaignClass::GetSize  this=?$TClassFactory@VCampaignClass@@  sig=csp ====
int __thiscall TClassFactory_CampaignClass::GetSize(_TClassFactory_VCampaignClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c031a*/
  if ( v5 ) /*0x6c031d*/
    v3 = v2 + 1; /*0x6c031f*/
  else
    v3 = v2 - 1; /*0x6c0328*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c0320*/
  return 0; /*0x6c0325*/
}



// ==== 0x006C0340  ObjectClass::WinMain_Helper_6C0340  this=?$TClassFactory@VBuildingLightClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0340(ObjectClass *this)
{
  this->? = 0; /*0x6c0342*/
  this->AbstractClass = &TClassFactory<BuildingLightClass>::`vftable'; /*0x6c0349*/
  return &this->AbstractClass; /*0x6c034f*/
}



// ==== 0x006C0350  _TClassFactory_VBuildingLightClass::CreateTClassFactory_BuildingLightClass  this=?$TClassFactory@VBuildingLightClass@@  sig=csp ====
int __thiscall CreateTClassFactory_BuildingLightClass(
        _TClassFactory_VBuildingLightClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0357*/
    return -2147467261; /*0x6c0359*/
  *v4 = 0; /*0x6c0376*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0392*/
    *v4 = a2; /*0x6c0396*/
  if ( !*v4 ) /*0x6c0398*/
    return -2147467262; /*0x6c03a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c03ac*/
  return 0; /*0x6c035e*/
}



// ==== 0x006C03C0  _TClassFactory_VBuildingLightClass::AddRef  this=?$TClassFactory@VBuildingLightClass@@  sig=csp ====
LONG __thiscall TClassFactory_BuildingLightClass::AddRef(_TClassFactory_VBuildingLightClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c03ce*/
}



// ==== 0x006C03E0  _TClassFactory_VBuildingLightClass::GetClassName  this=?$TClassFactory@VBuildingLightClass@@  sig=csp ====
LONG __thiscall TClassFactory_BuildingLightClass::GetClassName(_TClassFactory_VBuildingLightClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c03f0*/
  if ( !v1 ) /*0x6c03f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c03f7*/
  return v1; /*0x6c0401*/
}



// ==== 0x006C0410  _TClassFactory_VBuildingLightClass::ddtor  this=?$TClassFactory@VBuildingLightClass@@  sig=csp ====
int __thiscall TClassFactory_BuildingLightClass::ddtor(
        _TClassFactory_VBuildingLightClass *this,
        int a2,
        int a3,
        int a4,
        _DWORD *a5)
{
  double v5; // st7
  int *v7; // eax
  int *v8; // esi
  int v9; // edi
  int v10; // [esp+0h] [ebp-8h]

  if ( !a5 ) /*0x6c0418*/
    return -2147024809; /*0x6c041b*/
  *a5 = 0; /*0x6c0428*/
  if ( a3 ) /*0x6c0430*/
    return -2147221232; /*0x6c0433*/
  if ( !__2_YAPAXI_Z(0xE8u) ) /*0x6c0441*/
    return -2147024882; /*0x6c0441*/
  v7 = BuildingLightClass::CTOR(0, v5, v10); /*0x6c0451*/
  v8 = v7; /*0x6c0456*/
  if ( !v7 ) /*0x6c045a*/
    return -2147024882; /*0x6c045d*/
  v9 = (*(int (__stdcall **)(int *, int, _DWORD *))*v7)(v7, a4, a5); /*0x6c0471*/
  if ( v9 < 0 ) /*0x6c0475*/
    (*(void (__thiscall **)(int *, int))(*v8 + 32))(v8, 1); /*0x6c047d*/
  return v9; /*0x6c041a*/
}



// ==== 0x006C0490  _TClassFactory_VBuildingLightClass::GetSize  this=?$TClassFactory@VBuildingLightClass@@  sig=csp ====
int __thiscall TClassFactory_BuildingLightClass::GetSize(_TClassFactory_VBuildingLightClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c049a*/
  if ( v5 ) /*0x6c049d*/
    v3 = v2 + 1; /*0x6c049f*/
  else
    v3 = v2 - 1; /*0x6c04a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c04a0*/
  return 0; /*0x6c04a5*/
}



// ==== 0x006C04C0  ObjectClass::WinMain_Helper_6C04C0  this=?$TClassFactory@VWaypointPathClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C04C0(ObjectClass *this)
{
  this->? = 0; /*0x6c04c2*/
  this->AbstractClass = &TClassFactory<WaypointPathClass>::`vftable'; /*0x6c04c9*/
  return &this->AbstractClass; /*0x6c04cf*/
}



// ==== 0x006C04D0  _TClassFactory_VWaypointPathClass::CreateTClassFactory_WaypointPathClass  this=?$TClassFactory@VWaypointPathClass@@  sig=csp ====
int __thiscall CreateTClassFactory_WaypointPathClass(
        _TClassFactory_VWaypointPathClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c04d7*/
    return -2147467261; /*0x6c04d9*/
  *v4 = 0; /*0x6c04f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0512*/
    *v4 = a2; /*0x6c0516*/
  if ( !*v4 ) /*0x6c0518*/
    return -2147467262; /*0x6c0520*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c052c*/
  return 0; /*0x6c04de*/
}



// ==== 0x006C0540  _TClassFactory_VWaypointPathClass::AddRef  this=?$TClassFactory@VWaypointPathClass@@  sig=csp ====
LONG __thiscall TClassFactory_WaypointPathClass::AddRef(_TClassFactory_VWaypointPathClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c054e*/
}



// ==== 0x006C0560  _TClassFactory_VWaypointPathClass::GetClassName  this=?$TClassFactory@VWaypointPathClass@@  sig=csp ====
LONG __thiscall TClassFactory_WaypointPathClass::GetClassName(_TClassFactory_VWaypointPathClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0570*/
  if ( !v1 ) /*0x6c0574*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0577*/
  return v1; /*0x6c0581*/
}



// ==== 0x006C0590  _TClassFactory_VWaypointPathClass::ddtor  this=?$TClassFactory@VWaypointPathClass@@  sig=csp ====
int __thiscall TClassFactory_WaypointPathClass::ddtor(
        _TClassFactory_VWaypointPathClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  WaypointPathClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0598*/
    return -2147024809; /*0x6c059b*/
  *v9 = 0; /*0x6c05a8*/
  if ( a3 ) /*0x6c05b0*/
    return -2147221232; /*0x6c05b3*/
  v5 = (WaypointPathClass *)__2_YAPAXI_Z(0x40u); /*0x6c05be*/
  if ( !v5 ) /*0x6c05c8*/
    return -2147024882; /*0x6c05c8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))WaypointPathClass::Init(v5); /*0x6c05cc*/
  v7 = v6; /*0x6c05d1*/
  if ( !v6 ) /*0x6c05d5*/
    return -2147024882; /*0x6c05d8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c05ec*/
  if ( v8 < 0 ) /*0x6c05f0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c05f8*/
  return v8; /*0x6c059a*/
}



// ==== 0x006C0610  _TClassFactory_VWaypointPathClass::GetSize  this=?$TClassFactory@VWaypointPathClass@@  sig=csp ====
int __thiscall TClassFactory_WaypointPathClass::GetSize(_TClassFactory_VWaypointPathClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c061a*/
  if ( v5 ) /*0x6c061d*/
    v3 = v2 + 1; /*0x6c061f*/
  else
    v3 = v2 - 1; /*0x6c0628*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c0620*/
  return 0; /*0x6c0625*/
}



// ==== 0x006C0640  ObjectClass::WinMain_Helper_6C0640  this=?$TClassFactory@VTemporalClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0640(ObjectClass *this)
{
  this->? = 0; /*0x6c0642*/
  this->AbstractClass = &TClassFactory<TemporalClass>::`vftable'; /*0x6c0649*/
  return &this->AbstractClass; /*0x6c064f*/
}



// ==== 0x006C0650  _TClassFactory_VTemporalClass::CreateTClassFactory_TemporalClass  this=?$TClassFactory@VTemporalClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TemporalClass(_TClassFactory_VTemporalClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0657*/
    return -2147467261; /*0x6c0659*/
  *v4 = 0; /*0x6c0676*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0692*/
    *v4 = a2; /*0x6c0696*/
  if ( !*v4 ) /*0x6c0698*/
    return -2147467262; /*0x6c06a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c06ac*/
  return 0; /*0x6c065e*/
}



// ==== 0x006C06C0  _TClassFactory_VTemporalClass::AddRef  this=?$TClassFactory@VTemporalClass@@  sig=csp ====
LONG __thiscall TClassFactory_TemporalClass::AddRef(_TClassFactory_VTemporalClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c06ce*/
}



// ==== 0x006C06E0  _TClassFactory_VTemporalClass::GetClassName  this=?$TClassFactory@VTemporalClass@@  sig=csp ====
LONG __thiscall TClassFactory_TemporalClass::GetClassName(_TClassFactory_VTemporalClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c06f0*/
  if ( !v1 ) /*0x6c06f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c06f7*/
  return v1; /*0x6c0701*/
}



// ==== 0x006C0710  _TClassFactory_VTemporalClass::ddtor  this=?$TClassFactory@VTemporalClass@@  sig=csp ====
int __thiscall TClassFactory_TemporalClass::ddtor(_TClassFactory_VTemporalClass *this, int a2, int a3, _DWORD *a4)
{
  TemporalClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0718*/
    return -2147024809; /*0x6c071b*/
  *v9 = 0; /*0x6c0728*/
  if ( a3 ) /*0x6c0730*/
    return -2147221232; /*0x6c0733*/
  v5 = (TemporalClass *)__2_YAPAXI_Z(0x50u); /*0x6c073e*/
  if ( !v5 ) /*0x6c0748*/
    return -2147024882; /*0x6c0748*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))TemporalClass::Constructor(v5); /*0x6c074c*/
  v7 = v6; /*0x6c0751*/
  if ( !v6 ) /*0x6c0755*/
    return -2147024882; /*0x6c0758*/
  v8 = (**v6)(v6, a4, v9); /*0x6c076c*/
  if ( v8 < 0 ) /*0x6c0770*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c0778*/
  return v8; /*0x6c071a*/
}



// ==== 0x006C0790  _TClassFactory_VTemporalClass::GetSize  this=?$TClassFactory@VTemporalClass@@  sig=csp ====
int __thiscall TClassFactory_TemporalClass::GetSize(_TClassFactory_VTemporalClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c079a*/
  if ( v5 ) /*0x6c079d*/
    v3 = v2 + 1; /*0x6c079f*/
  else
    v3 = v2 - 1; /*0x6c07a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c07a0*/
  return 0; /*0x6c07a5*/
}



// ==== 0x006C07C0  ObjectClass::WinMain_Helper_6C07C0  this=?$TClassFactory@VAirstrikeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C07C0(ObjectClass *this)
{
  this->? = 0; /*0x6c07c2*/
  this->AbstractClass = &TClassFactory<AirstrikeClass>::`vftable'; /*0x6c07c9*/
  return &this->AbstractClass; /*0x6c07cf*/
}



// ==== 0x006C07D0  _TClassFactory_VAirstrikeClass::CreateTClassFactory_AirstrikeClass  this=?$TClassFactory@VAirstrikeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AirstrikeClass(_TClassFactory_VAirstrikeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c07d7*/
    return -2147467261; /*0x6c07d9*/
  *v4 = 0; /*0x6c07f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0812*/
    *v4 = a2; /*0x6c0816*/
  if ( !*v4 ) /*0x6c0818*/
    return -2147467262; /*0x6c0820*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c082c*/
  return 0; /*0x6c07de*/
}



// ==== 0x006C0840  _TClassFactory_VAirstrikeClass::AddRef  this=?$TClassFactory@VAirstrikeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AirstrikeClass::AddRef(_TClassFactory_VAirstrikeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c084e*/
}



// ==== 0x006C0860  _TClassFactory_VAirstrikeClass::GetClassName  this=?$TClassFactory@VAirstrikeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AirstrikeClass::GetClassName(_TClassFactory_VAirstrikeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0870*/
  if ( !v1 ) /*0x6c0874*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0877*/
  return v1; /*0x6c0881*/
}



// ==== 0x006C0890  _TClassFactory_VAirstrikeClass::ddtor  this=?$TClassFactory@VAirstrikeClass@@  sig=csp ====
int __thiscall TClassFactory_AirstrikeClass::ddtor(_TClassFactory_VAirstrikeClass *this, int a2, int a3, _DWORD *a4)
{
  AbstractClass *v5; // eax
  AbstractClass *v6; // eax
  AbstractClass *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0898*/
    return -2147024809; /*0x6c089b*/
  *v9 = 0; /*0x6c08a8*/
  if ( a3 ) /*0x6c08b0*/
    return -2147221232; /*0x6c08b3*/
  v5 = (AbstractClass *)__2_YAPAXI_Z(0x60u); /*0x6c08be*/
  if ( !v5 ) /*0x6c08c8*/
    return -2147024882; /*0x6c08c8*/
  v6 = AbstractClass::Create(v5); /*0x6c08cc*/
  v7 = v6; /*0x6c08d1*/
  if ( !v6 ) /*0x6c08d5*/
    return -2147024882; /*0x6c08d8*/
  v8 = (*(int (__stdcall **)(AbstractClass *, _DWORD *, _DWORD *))v6->ptr_0)(v6, a4, v9); /*0x6c08ec*/
  if ( v8 < 0 ) /*0x6c08f0*/
    (*(void (__thiscall **)(AbstractClass *, int))(v7->ptr_0 + 32))(v7, 1); /*0x6c08f8*/
  return v8; /*0x6c089a*/
}



// ==== 0x006C0910  _TClassFactory_VAirstrikeClass::GetSize  this=?$TClassFactory@VAirstrikeClass@@  sig=csp ====
int __thiscall TClassFactory_AirstrikeClass::GetSize(_TClassFactory_VAirstrikeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c091a*/
  if ( v5 ) /*0x6c091d*/
    v3 = v2 + 1; /*0x6c091f*/
  else
    v3 = v2 - 1; /*0x6c0928*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c0920*/
  return 0; /*0x6c0925*/
}



// ==== 0x006C0940  ObjectClass::WinMain_Helper_6C0940  this=?$TClassFactory@VSpawnManagerClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0940(ObjectClass *this)
{
  this->? = 0; /*0x6c0942*/
  this->AbstractClass = &TClassFactory<SpawnManagerClass>::`vftable'; /*0x6c0949*/
  return &this->AbstractClass; /*0x6c094f*/
}



// ==== 0x006C0950  _TClassFactory_VSpawnManagerClass::CreateTClassFactory_SpawnManagerClass  this=?$TClassFactory@VSpawnManagerClass@@  sig=csp ====
int __thiscall CreateTClassFactory_SpawnManagerClass(
        _TClassFactory_VSpawnManagerClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0957*/
    return -2147467261; /*0x6c0959*/
  *v4 = 0; /*0x6c0976*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0992*/
    *v4 = a2; /*0x6c0996*/
  if ( !*v4 ) /*0x6c0998*/
    return -2147467262; /*0x6c09a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c09ac*/
  return 0; /*0x6c095e*/
}



// ==== 0x006C09C0  _TClassFactory_VSpawnManagerClass::AddRef  this=?$TClassFactory@VSpawnManagerClass@@  sig=csp ====
LONG __thiscall TClassFactory_SpawnManagerClass::AddRef(_TClassFactory_VSpawnManagerClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c09ce*/
}



// ==== 0x006C09E0  _TClassFactory_VSpawnManagerClass::GetClassName  this=?$TClassFactory@VSpawnManagerClass@@  sig=csp ====
LONG __thiscall TClassFactory_SpawnManagerClass::GetClassName(_TClassFactory_VSpawnManagerClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c09f0*/
  if ( !v1 ) /*0x6c09f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c09f7*/
  return v1; /*0x6c0a01*/
}



// ==== 0x006C0A10  _TClassFactory_VSpawnManagerClass::ddtor  this=?$TClassFactory@VSpawnManagerClass@@  sig=csp ====
int __thiscall TClassFactory_SpawnManagerClass::ddtor(
        _TClassFactory_VSpawnManagerClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  SpawnManagerClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0a18*/
    return -2147024809; /*0x6c0a1b*/
  *v9 = 0; /*0x6c0a28*/
  if ( a3 ) /*0x6c0a30*/
    return -2147221232; /*0x6c0a33*/
  v5 = (SpawnManagerClass *)__2_YAPAXI_Z(0x74u); /*0x6c0a3e*/
  if ( !v5 ) /*0x6c0a48*/
    return -2147024882; /*0x6c0a48*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))SpawnManagerClass::Constructor(v5); /*0x6c0a4c*/
  v7 = v6; /*0x6c0a51*/
  if ( !v6 ) /*0x6c0a55*/
    return -2147024882; /*0x6c0a58*/
  v8 = (**v6)(v6, a4, v9); /*0x6c0a6c*/
  if ( v8 < 0 ) /*0x6c0a70*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c0a78*/
  return v8; /*0x6c0a1a*/
}



// ==== 0x006C0A90  _TClassFactory_VSpawnManagerClass::GetSize  this=?$TClassFactory@VSpawnManagerClass@@  sig=csp ====
int __thiscall TClassFactory_SpawnManagerClass::GetSize(_TClassFactory_VSpawnManagerClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c0a9a*/
  if ( v5 ) /*0x6c0a9d*/
    v3 = v2 + 1; /*0x6c0a9f*/
  else
    v3 = v2 - 1; /*0x6c0aa8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c0aa0*/
  return 0; /*0x6c0aa5*/
}



// ==== 0x006C0AC0  COMClassFactory::CreateInstance  this=?$TClassFactory@VSlaveManagerClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory::CreateInstance(COMClassFactory *this)
{
  this->COMClassFactory_field_0x04 = 0; /*0x6c0ac2*/
  *(_DWORD *)this->__pad_0 = &TClassFactory<SlaveManagerClass>::`vftable'; /*0x6c0ac9*/
  return this->__pad_0; /*0x6c0acf*/
}



// ==== 0x006C0AD0  _TClassFactory_VSlaveManagerClass::CreateTClassFactory_SlaveManagerClass  this=?$TClassFactory@VSlaveManagerClass@@  sig=csp ====
int __thiscall CreateTClassFactory_SlaveManagerClass(
        _TClassFactory_VSlaveManagerClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0ad7*/
    return -2147467261; /*0x6c0ad9*/
  *v4 = 0; /*0x6c0af6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0b12*/
    *v4 = a2; /*0x6c0b16*/
  if ( !*v4 ) /*0x6c0b18*/
    return -2147467262; /*0x6c0b20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c0b2c*/
  return 0; /*0x6c0ade*/
}



// ==== 0x006C0B40  _TClassFactory_VSlaveManagerClass::AddRef  this=?$TClassFactory@VSlaveManagerClass@@  sig=csp ====
LONG __thiscall TClassFactory_SlaveManagerClass::AddRef(_TClassFactory_VSlaveManagerClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0b4e*/
}



// ==== 0x006C0B60  _TClassFactory_VSlaveManagerClass::GetClassName  this=?$TClassFactory@VSlaveManagerClass@@  sig=csp ====
LONG __thiscall TClassFactory_SlaveManagerClass::GetClassName(_TClassFactory_VSlaveManagerClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0b70*/
  if ( !v1 ) /*0x6c0b74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0b77*/
  return v1; /*0x6c0b81*/
}



// ==== 0x006C0B90  _TClassFactory_VSlaveManagerClass::ddtor  this=?$TClassFactory@VSlaveManagerClass@@  sig=csp ====
int __thiscall TClassFactory_SlaveManagerClass::ddtor(
        _TClassFactory_VSlaveManagerClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  SlaveManagerClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0b98*/
    return -2147024809; /*0x6c0b9b*/
  *v9 = 0; /*0x6c0ba8*/
  if ( a3 ) /*0x6c0bb0*/
    return -2147221232; /*0x6c0bb3*/
  v5 = (SlaveManagerClass *)__2_YAPAXI_Z(0x64u); /*0x6c0bbe*/
  if ( !v5 ) /*0x6c0bc8*/
    return -2147024882; /*0x6c0bc8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))SlaveManagerClass::Constructor(v5); /*0x6c0bcc*/
  v7 = v6; /*0x6c0bd1*/
  if ( !v6 ) /*0x6c0bd5*/
    return -2147024882; /*0x6c0bd8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c0bec*/
  if ( v8 < 0 ) /*0x6c0bf0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c0bf8*/
  return v8; /*0x6c0b9a*/
}



// ==== 0x006C0C10  _TClassFactory_VSlaveManagerClass::GetSize  this=?$TClassFactory@VSlaveManagerClass@@  sig=csp ====
int __thiscall TClassFactory_SlaveManagerClass::GetSize(_TClassFactory_VSlaveManagerClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c0c1a*/
  if ( v5 ) /*0x6c0c1d*/
    v3 = v2 + 1; /*0x6c0c1f*/
  else
    v3 = v2 - 1; /*0x6c0c28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c0c20*/
  return 0; /*0x6c0c25*/
}



// ==== 0x006C0C40  ObjectClass::WinMain_Helper_6C0C40  this=?$TClassFactory@VCaptureManagerClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0C40(ObjectClass *this)
{
  this->? = 0; /*0x6c0c42*/
  this->AbstractClass = &TClassFactory<CaptureManagerClass>::`vftable'; /*0x6c0c49*/
  return &this->AbstractClass; /*0x6c0c4f*/
}



// ==== 0x006C0C50  _TClassFactory_VCaptureManagerClass::CreateTClassFactory_CaptureManagerClass  this=?$TClassFactory@VCaptureManagerClass@@  sig=csp ====
int __thiscall CreateTClassFactory_CaptureManagerClass(
        _TClassFactory_VCaptureManagerClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0c57*/
    return -2147467261; /*0x6c0c59*/
  *v4 = 0; /*0x6c0c76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0c92*/
    *v4 = a2; /*0x6c0c96*/
  if ( !*v4 ) /*0x6c0c98*/
    return -2147467262; /*0x6c0ca0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c0cac*/
  return 0; /*0x6c0c5e*/
}



// ==== 0x006C0CC0  _TClassFactory_VCaptureManagerClass::AddRef  this=?$TClassFactory@VCaptureManagerClass@@  sig=csp ====
LONG __thiscall TClassFactory_CaptureManagerClass::AddRef(_TClassFactory_VCaptureManagerClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0cce*/
}



// ==== 0x006C0CE0  _TClassFactory_VCaptureManagerClass::GetClassName  this=?$TClassFactory@VCaptureManagerClass@@  sig=csp ====
LONG __thiscall TClassFactory_CaptureManagerClass::GetClassName(_TClassFactory_VCaptureManagerClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0cf0*/
  if ( !v1 ) /*0x6c0cf4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0cf7*/
  return v1; /*0x6c0d01*/
}



// ==== 0x006C0D10  _TClassFactory_VCaptureManagerClass::ddtor  this=?$TClassFactory@VCaptureManagerClass@@  sig=csp ====
int __thiscall TClassFactory_CaptureManagerClass::ddtor(
        _TClassFactory_VCaptureManagerClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  CaptureManagerClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0d18*/
    return -2147024809; /*0x6c0d1b*/
  *v9 = 0; /*0x6c0d28*/
  if ( a3 ) /*0x6c0d30*/
    return -2147221232; /*0x6c0d33*/
  v5 = (CaptureManagerClass *)__2_YAPAXI_Z(0x50u); /*0x6c0d3e*/
  if ( !v5 ) /*0x6c0d48*/
    return -2147024882; /*0x6c0d48*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))SmallFunc_471890(v5); /*0x6c0d4c*/
  v7 = v6; /*0x6c0d51*/
  if ( !v6 ) /*0x6c0d55*/
    return -2147024882; /*0x6c0d58*/
  v8 = (**v6)(v6, a4, v9); /*0x6c0d6c*/
  if ( v8 < 0 ) /*0x6c0d70*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c0d78*/
  return v8; /*0x6c0d1a*/
}



// ==== 0x006C0D90  _TClassFactory_VCaptureManagerClass::GetSize  this=?$TClassFactory@VCaptureManagerClass@@  sig=csp ====
int __thiscall TClassFactory_CaptureManagerClass::GetSize(_TClassFactory_VCaptureManagerClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c0d9a*/
  if ( v5 ) /*0x6c0d9d*/
    v3 = v2 + 1; /*0x6c0d9f*/
  else
    v3 = v2 - 1; /*0x6c0da8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c0da0*/
  return 0; /*0x6c0da5*/
}



// ==== 0x006C0DC0  ObjectClass::WinMain_Helper_6C0DC0  this=?$TClassFactory@VDiskLaserClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0DC0(ObjectClass *this)
{
  this->? = 0; /*0x6c0dc2*/
  this->AbstractClass = &TClassFactory<DiskLaserClass>::`vftable'; /*0x6c0dc9*/
  return &this->AbstractClass; /*0x6c0dcf*/
}



// ==== 0x006C0DD0  _TClassFactory_VDiskLaserClass::CreateTClassFactory_DiskLaserClass  this=?$TClassFactory@VDiskLaserClass@@  sig=csp ====
int __thiscall CreateTClassFactory_DiskLaserClass(_TClassFactory_VDiskLaserClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0dd7*/
    return -2147467261; /*0x6c0dd9*/
  *v4 = 0; /*0x6c0df6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0e12*/
    *v4 = a2; /*0x6c0e16*/
  if ( !*v4 ) /*0x6c0e18*/
    return -2147467262; /*0x6c0e20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c0e2c*/
  return 0; /*0x6c0dde*/
}



// ==== 0x006C0E40  _TClassFactory_VDiskLaserClass::AddRef  this=?$TClassFactory@VDiskLaserClass@@  sig=csp ====
LONG __thiscall TClassFactory_DiskLaserClass::AddRef(_TClassFactory_VDiskLaserClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0e4e*/
}



// ==== 0x006C0E60  _TClassFactory_VDiskLaserClass::GetClassName  this=?$TClassFactory@VDiskLaserClass@@  sig=csp ====
LONG __thiscall TClassFactory_DiskLaserClass::GetClassName(_TClassFactory_VDiskLaserClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0e70*/
  if ( !v1 ) /*0x6c0e74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0e77*/
  return v1; /*0x6c0e81*/
}



// ==== 0x006C0E90  _TClassFactory_VDiskLaserClass::ddtor  this=?$TClassFactory@VDiskLaserClass@@  sig=csp ====
int __thiscall TClassFactory_DiskLaserClass::ddtor(_TClassFactory_VDiskLaserClass *this, int a2, int a3, _DWORD *a4)
{
  DiskLaserClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0e98*/
    return -2147024809; /*0x6c0e9b*/
  *v9 = 0; /*0x6c0ea8*/
  if ( a3 ) /*0x6c0eb0*/
    return -2147221232; /*0x6c0eb3*/
  v5 = (DiskLaserClass *)__2_YAPAXI_Z(0x40u); /*0x6c0ebe*/
  if ( !v5 ) /*0x6c0ec8*/
    return -2147024882; /*0x6c0ec8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))DiskLaserClass::DiskLaserClass(v5); /*0x6c0ecc*/
  v7 = v6; /*0x6c0ed1*/
  if ( !v6 ) /*0x6c0ed5*/
    return -2147024882; /*0x6c0ed8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c0eec*/
  if ( v8 < 0 ) /*0x6c0ef0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c0ef8*/
  return v8; /*0x6c0e9a*/
}



// ==== 0x006C0F10  _TClassFactory_VDiskLaserClass::GetSize  this=?$TClassFactory@VDiskLaserClass@@  sig=csp ====
int __thiscall TClassFactory_DiskLaserClass::GetSize(_TClassFactory_VDiskLaserClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c0f1a*/
  if ( v5 ) /*0x6c0f1d*/
    v3 = v2 + 1; /*0x6c0f1f*/
  else
    v3 = v2 - 1; /*0x6c0f28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c0f20*/
  return 0; /*0x6c0f25*/
}



// ==== 0x006C0F40  ObjectClass::WinMain_Helper_6C0F40  this=?$TClassFactory@VParasiteClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C0F40(ObjectClass *this)
{
  this->? = 0; /*0x6c0f42*/
  this->AbstractClass = &TClassFactory<ParasiteClass>::`vftable'; /*0x6c0f49*/
  return &this->AbstractClass; /*0x6c0f4f*/
}



// ==== 0x006C0F50  _TClassFactory_VParasiteClass::CreateTClassFactory_ParasiteClass  this=?$TClassFactory@VParasiteClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ParasiteClass(_TClassFactory_VParasiteClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0f57*/
    return -2147467261; /*0x6c0f59*/
  *v4 = 0; /*0x6c0f76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0f92*/
    *v4 = a2; /*0x6c0f96*/
  if ( !*v4 ) /*0x6c0f98*/
    return -2147467262; /*0x6c0fa0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c0fac*/
  return 0; /*0x6c0f5e*/
}



// ==== 0x006C0FC0  _TClassFactory_VParasiteClass::AddRef  this=?$TClassFactory@VParasiteClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParasiteClass::AddRef(_TClassFactory_VParasiteClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c0fce*/
}



// ==== 0x006C0FE0  _TClassFactory_VParasiteClass::GetClassName  this=?$TClassFactory@VParasiteClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParasiteClass::GetClassName(_TClassFactory_VParasiteClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0ff0*/
  if ( !v1 ) /*0x6c0ff4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0ff7*/
  return v1; /*0x6c1001*/
}



// ==== 0x006C1010  _TClassFactory_VParasiteClass::ddtor  this=?$TClassFactory@VParasiteClass@@  sig=csp ====
int __thiscall TClassFactory_ParasiteClass::ddtor(_TClassFactory_VParasiteClass *this, int a2, int a3, _DWORD *a4)
{
  ParasiteClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1018*/
    return -2147024809; /*0x6c101b*/
  *v9 = 0; /*0x6c1028*/
  if ( a3 ) /*0x6c1030*/
    return -2147221232; /*0x6c1033*/
  v5 = (ParasiteClass *)__2_YAPAXI_Z(0x58u); /*0x6c103e*/
  if ( !v5 ) /*0x6c1048*/
    return -2147024882; /*0x6c1048*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))ParasiteClass::Constructor(v5); /*0x6c104c*/
  v7 = v6; /*0x6c1051*/
  if ( !v6 ) /*0x6c1055*/
    return -2147024882; /*0x6c1058*/
  v8 = (**v6)(v6, a4, v9); /*0x6c106c*/
  if ( v8 < 0 ) /*0x6c1070*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c1078*/
  return v8; /*0x6c101a*/
}



// ==== 0x006C1090  _TClassFactory_VParasiteClass::GetSize  this=?$TClassFactory@VParasiteClass@@  sig=csp ====
int __thiscall TClassFactory_ParasiteClass::GetSize(_TClassFactory_VParasiteClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c109a*/
  if ( v5 ) /*0x6c109d*/
    v3 = v2 + 1; /*0x6c109f*/
  else
    v3 = v2 - 1; /*0x6c10a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c10a0*/
  return 0; /*0x6c10a5*/
}



// ==== 0x006C10C0  ObjectClass::WinMain_Helper_6C10C0  this=?$TClassFactory@VBombClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C10C0(ObjectClass *this)
{
  this->? = 0; /*0x6c10c2*/
  this->AbstractClass = &TClassFactory<BombClass>::`vftable'; /*0x6c10c9*/
  return &this->AbstractClass; /*0x6c10cf*/
}



// ==== 0x006C10D0  _TClassFactory_VBombClass::CreateTClassFactory_BombClass  this=?$TClassFactory@VBombClass@@  sig=csp ====
int __thiscall CreateTClassFactory_BombClass(_TClassFactory_VBombClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c10d7*/
    return -2147467261; /*0x6c10d9*/
  *v4 = 0; /*0x6c10f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1112*/
    *v4 = a2; /*0x6c1116*/
  if ( !*v4 ) /*0x6c1118*/
    return -2147467262; /*0x6c1120*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c112c*/
  return 0; /*0x6c10de*/
}



// ==== 0x006C1140  _TClassFactory_VBombClass::AddRef  this=?$TClassFactory@VBombClass@@  sig=csp ====
LONG __thiscall TClassFactory_BombClass::AddRef(_TClassFactory_VBombClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c114e*/
}



// ==== 0x006C1160  _TClassFactory_VBombClass::GetClassName  this=?$TClassFactory@VBombClass@@  sig=csp ====
LONG __thiscall TClassFactory_BombClass::GetClassName(_TClassFactory_VBombClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1170*/
  if ( !v1 ) /*0x6c1174*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1177*/
  return v1; /*0x6c1181*/
}



// ==== 0x006C1190  _TClassFactory_VBombClass::ddtor  this=?$TClassFactory@VBombClass@@  sig=csp ====
int __thiscall TClassFactory_BombClass::ddtor(_TClassFactory_VBombClass *this, int a2, int a3, _DWORD *a4)
{
  BombClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1198*/
    return -2147024809; /*0x6c119b*/
  *v9 = 0; /*0x6c11a8*/
  if ( a3 ) /*0x6c11b0*/
    return -2147221232; /*0x6c11b3*/
  v5 = (BombClass *)__2_YAPAXI_Z(0x5Cu); /*0x6c11be*/
  if ( !v5 ) /*0x6c11c8*/
    return -2147024882; /*0x6c11c8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))BombClass::AbstractClass(v5); /*0x6c11cc*/
  v7 = v6; /*0x6c11d1*/
  if ( !v6 ) /*0x6c11d5*/
    return -2147024882; /*0x6c11d8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c11ec*/
  if ( v8 < 0 ) /*0x6c11f0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c11f8*/
  return v8; /*0x6c119a*/
}



// ==== 0x006C1210  _TClassFactory_VBombClass::GetSize  this=?$TClassFactory@VBombClass@@  sig=csp ====
int __thiscall TClassFactory_BombClass::GetSize(_TClassFactory_VBombClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c121a*/
  if ( v5 ) /*0x6c121d*/
    v3 = v2 + 1; /*0x6c121f*/
  else
    v3 = v2 - 1; /*0x6c1228*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c1220*/
  return 0; /*0x6c1225*/
}



// ==== 0x006C1240  ObjectClass::WinMain_Helper_6C1240  this=?$TClassFactory@VRadSiteClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1240(ObjectClass *this)
{
  this->? = 0; /*0x6c1242*/
  this->AbstractClass = &TClassFactory<RadSiteClass>::`vftable'; /*0x6c1249*/
  return &this->AbstractClass; /*0x6c124f*/
}



// ==== 0x006C1250  _TClassFactory_VRadSiteClass::CreateTClassFactory_RadSiteClass  this=?$TClassFactory@VRadSiteClass@@  sig=csp ====
int __thiscall CreateTClassFactory_RadSiteClass(_TClassFactory_VRadSiteClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1257*/
    return -2147467261; /*0x6c1259*/
  *v4 = 0; /*0x6c1276*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1292*/
    *v4 = a2; /*0x6c1296*/
  if ( !*v4 ) /*0x6c1298*/
    return -2147467262; /*0x6c12a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c12ac*/
  return 0; /*0x6c125e*/
}



// ==== 0x006C12C0  _TClassFactory_VRadSiteClass::AddRef  this=?$TClassFactory@VRadSiteClass@@  sig=csp ====
LONG __thiscall TClassFactory_RadSiteClass::AddRef(_TClassFactory_VRadSiteClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c12ce*/
}



// ==== 0x006C12E0  _TClassFactory_VRadSiteClass::GetClassName  this=?$TClassFactory@VRadSiteClass@@  sig=csp ====
LONG __thiscall TClassFactory_RadSiteClass::GetClassName(_TClassFactory_VRadSiteClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c12f0*/
  if ( !v1 ) /*0x6c12f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c12f7*/
  return v1; /*0x6c1301*/
}



// ==== 0x006C1310  _TClassFactory_VRadSiteClass::ddtor  this=?$TClassFactory@VRadSiteClass@@  sig=csp ====
int __thiscall TClassFactory_RadSiteClass::ddtor(_TClassFactory_VRadSiteClass *this, int a2, int a3, _DWORD *a4)
{
  RadSiteClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1318*/
    return -2147024809; /*0x6c131b*/
  *v9 = 0; /*0x6c1328*/
  if ( a3 ) /*0x6c1330*/
    return -2147221232; /*0x6c1333*/
  v5 = (RadSiteClass *)__2_YAPAXI_Z(0x74u); /*0x6c133e*/
  if ( !v5 ) /*0x6c1348*/
    return -2147024882; /*0x6c1348*/
  v6 = RadSiteClass::RadSiteClass(v5); /*0x6c134c*/
  v7 = v6; /*0x6c1351*/
  if ( !v6 ) /*0x6c1355*/
    return -2147024882; /*0x6c1358*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c136c*/
  if ( v8 < 0 ) /*0x6c1370*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c1378*/
  return v8; /*0x6c131a*/
}



// ==== 0x006C1390  _TClassFactory_VRadSiteClass::GetSize  this=?$TClassFactory@VRadSiteClass@@  sig=csp ====
int __thiscall TClassFactory_RadSiteClass::GetSize(_TClassFactory_VRadSiteClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c139a*/
  if ( v5 ) /*0x6c139d*/
    v3 = v2 + 1; /*0x6c139f*/
  else
    v3 = v2 - 1; /*0x6c13a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c13a0*/
  return 0; /*0x6c13a5*/
}



// ==== 0x006C13C0  ObjectClass::WinMain_Helper_6C13C0  this=?$TClassFactory@VTEventClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C13C0(ObjectClass *this)
{
  this->? = 0; /*0x6c13c2*/
  this->AbstractClass = &TClassFactory<TEventClass>::`vftable'; /*0x6c13c9*/
  return &this->AbstractClass; /*0x6c13cf*/
}



// ==== 0x006C13D0  _TClassFactory_VTEventClass::CreateTClassFactory_TEventClass  this=?$TClassFactory@VTEventClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TEventClass(_TClassFactory_VTEventClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c13d7*/
    return -2147467261; /*0x6c13d9*/
  *v4 = 0; /*0x6c13f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1412*/
    *v4 = a2; /*0x6c1416*/
  if ( !*v4 ) /*0x6c1418*/
    return -2147467262; /*0x6c1420*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c142c*/
  return 0; /*0x6c13de*/
}



// ==== 0x006C1440  _TClassFactory_VTEventClass::AddRef  this=?$TClassFactory@VTEventClass@@  sig=csp ====
LONG __thiscall TClassFactory_TEventClass::AddRef(_TClassFactory_VTEventClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c144e*/
}



// ==== 0x006C1460  _TClassFactory_VTEventClass::GetClassName  this=?$TClassFactory@VTEventClass@@  sig=csp ====
LONG __thiscall TClassFactory_TEventClass::GetClassName(_TClassFactory_VTEventClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1470*/
  if ( !v1 ) /*0x6c1474*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1477*/
  return v1; /*0x6c1481*/
}



// ==== 0x006C1490  _TClassFactory_VTEventClass::ddtor  this=?$TClassFactory@VTEventClass@@  sig=csp ====
int __thiscall TClassFactory_TEventClass::ddtor(_TClassFactory_VTEventClass *this, int a2, int a3, _DWORD *a4)
{
  TActionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1498*/
    return -2147024809; /*0x6c149b*/
  *v9 = 0; /*0x6c14a8*/
  if ( a3 ) /*0x6c14b0*/
    return -2147221232; /*0x6c14b3*/
  v5 = (TActionClass *)__2_YAPAXI_Z(0x58u); /*0x6c14be*/
  if ( !v5 ) /*0x6c14c8*/
    return -2147024882; /*0x6c14c8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))TActionClass::TActionClass(v5); /*0x6c14cc*/
  v7 = v6; /*0x6c14d1*/
  if ( !v6 ) /*0x6c14d5*/
    return -2147024882; /*0x6c14d8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c14ec*/
  if ( v8 < 0 ) /*0x6c14f0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c14f8*/
  return v8; /*0x6c149a*/
}



// ==== 0x006C1510  _TClassFactory_VTEventClass::GetSize  this=?$TClassFactory@VTEventClass@@  sig=csp ====
int __thiscall TClassFactory_TEventClass::GetSize(_TClassFactory_VTEventClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c151a*/
  if ( v5 ) /*0x6c151d*/
    v3 = v2 + 1; /*0x6c151f*/
  else
    v3 = v2 - 1; /*0x6c1528*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c1520*/
  return 0; /*0x6c1525*/
}



// ==== 0x006C1540  ObjectClass::WinMain_Helper_6C1540  this=?$TClassFactory@VVoxelAnimTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1540(ObjectClass *this)
{
  this->? = 0; /*0x6c1542*/
  this->AbstractClass = &TClassFactory<VoxelAnimTypeClass>::`vftable'; /*0x6c1549*/
  return &this->AbstractClass; /*0x6c154f*/
}



// ==== 0x006C1550  _TClassFactory_VVoxelAnimTypeClass::CreateTClassFactory_VoxelAnimTypeClass  this=?$TClassFactory@VVoxelAnimTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_VoxelAnimTypeClass(
        _TClassFactory_VVoxelAnimTypeClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1557*/
    return -2147467261; /*0x6c1559*/
  *v4 = 0; /*0x6c1576*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1592*/
    *v4 = a2; /*0x6c1596*/
  if ( !*v4 ) /*0x6c1598*/
    return -2147467262; /*0x6c15a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c15ac*/
  return 0; /*0x6c155e*/
}



// ==== 0x006C15C0  _TClassFactory_VVoxelAnimTypeClass::AddRef  this=?$TClassFactory@VVoxelAnimTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_VoxelAnimTypeClass::AddRef(_TClassFactory_VVoxelAnimTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c15ce*/
}



// ==== 0x006C15E0  _TClassFactory_VVoxelAnimTypeClass::GetClassName  this=?$TClassFactory@VVoxelAnimTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_VoxelAnimTypeClass::GetClassName(_TClassFactory_VVoxelAnimTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c15f0*/
  if ( !v1 ) /*0x6c15f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c15f7*/
  return v1; /*0x6c1601*/
}



// ==== 0x006C1610  _TClassFactory_VVoxelAnimTypeClass::GetClassIdentifier  this=?$TClassFactory@VVoxelAnimTypeClass@@  sig=csp ====
int __thiscall TClassFactory_VoxelAnimTypeClass::GetClassIdentifier(
        _TClassFactory_VVoxelAnimTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  VoxelAnimTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1618*/
    return -2147024809; /*0x6c161b*/
  *v9 = 0; /*0x6c1628*/
  if ( a3 ) /*0x6c1630*/
    return -2147221232; /*0x6c1633*/
  v5 = (VoxelAnimTypeClass *)__2_YAPAXI_Z(0x308u); /*0x6c1641*/
  if ( !v5 ) /*0x6c164b*/
    return -2147024882; /*0x6c164b*/
  v6 = VoxelAnimTypeClass::Constructor(v5, 0); /*0x6c1651*/
  v7 = v6; /*0x6c1656*/
  if ( !v6 ) /*0x6c165a*/
    return -2147024882; /*0x6c165d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c1671*/
  if ( v8 < 0 ) /*0x6c1675*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c167d*/
  return v8; /*0x6c161a*/
}



// ==== 0x006C1690  _TClassFactory_VVoxelAnimTypeClass::GetSize  this=?$TClassFactory@VVoxelAnimTypeClass@@  sig=csp ====
int __thiscall TClassFactory_VoxelAnimTypeClass::GetSize(_TClassFactory_VVoxelAnimTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c169a*/
  if ( v5 ) /*0x6c169d*/
    v3 = v2 + 1; /*0x6c169f*/
  else
    v3 = v2 - 1; /*0x6c16a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c16a0*/
  return 0; /*0x6c16a5*/
}



// ==== 0x006C16C0  ObjectClass::WinMain_Helper_6C16C0  this=?$TClassFactory@VVoxelAnimClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C16C0(ObjectClass *this)
{
  this->? = 0; /*0x6c16c2*/
  this->AbstractClass = &TClassFactory<VoxelAnimClass>::`vftable'; /*0x6c16c9*/
  return &this->AbstractClass; /*0x6c16cf*/
}



// ==== 0x006C16D0  _TClassFactory_VVoxelAnimClass::CreateTClassFactory_VoxelAnimClass  this=?$TClassFactory@VVoxelAnimClass@@  sig=csp ====
int __thiscall CreateTClassFactory_VoxelAnimClass(_TClassFactory_VVoxelAnimClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c16d7*/
    return -2147467261; /*0x6c16d9*/
  *v4 = 0; /*0x6c16f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1712*/
    *v4 = a2; /*0x6c1716*/
  if ( !*v4 ) /*0x6c1718*/
    return -2147467262; /*0x6c1720*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c172c*/
  return 0; /*0x6c16de*/
}



// ==== 0x006C1740  _TClassFactory_VVoxelAnimClass::AddRef  this=?$TClassFactory@VVoxelAnimClass@@  sig=csp ====
LONG __thiscall TClassFactory_VoxelAnimClass::AddRef(_TClassFactory_VVoxelAnimClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c174e*/
}



// ==== 0x006C1760  _TClassFactory_VVoxelAnimClass::GetClassName  this=?$TClassFactory@VVoxelAnimClass@@  sig=csp ====
LONG __thiscall TClassFactory_VoxelAnimClass::GetClassName(_TClassFactory_VVoxelAnimClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1770*/
  if ( !v1 ) /*0x6c1774*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1777*/
  return v1; /*0x6c1781*/
}



// ==== 0x006C1790  _TClassFactory_VVoxelAnimClass::ddtor  this=?$TClassFactory@VVoxelAnimClass@@  sig=csp ====
int __thiscall TClassFactory_VoxelAnimClass::ddtor(_TClassFactory_VVoxelAnimClass *this, int a2, int a3, _DWORD *a4)
{
  ObjectClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1798*/
    return -2147024809; /*0x6c179b*/
  *v9 = 0; /*0x6c17a8*/
  if ( a3 ) /*0x6c17b0*/
    return -2147221232; /*0x6c17b3*/
  v5 = (ObjectClass *)__2_YAPAXI_Z(0x148u); /*0x6c17c1*/
  if ( !v5 ) /*0x6c17cb*/
    return -2147024882; /*0x6c17cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))ObjectClass::Initialize(v5); /*0x6c17cf*/
  v7 = v6; /*0x6c17d4*/
  if ( !v6 ) /*0x6c17d8*/
    return -2147024882; /*0x6c17db*/
  v8 = (**v6)(v6, a4, v9); /*0x6c17ef*/
  if ( v8 < 0 ) /*0x6c17f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c17fb*/
  return v8; /*0x6c179a*/
}



// ==== 0x006C1810  _TClassFactory_VVoxelAnimClass::GetSize  this=?$TClassFactory@VVoxelAnimClass@@  sig=csp ====
int __thiscall TClassFactory_VoxelAnimClass::GetSize(_TClassFactory_VVoxelAnimClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c181a*/
  if ( v5 ) /*0x6c181d*/
    v3 = v2 + 1; /*0x6c181f*/
  else
    v3 = v2 - 1; /*0x6c1828*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c1820*/
  return 0; /*0x6c1825*/
}



// ==== 0x006C1840  ObjectClass::WinMain_Helper_6C1840  this=?$TClassFactory@VTActionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1840(ObjectClass *this)
{
  this->? = 0; /*0x6c1842*/
  this->AbstractClass = &TClassFactory<TActionClass>::`vftable'; /*0x6c1849*/
  return &this->AbstractClass; /*0x6c184f*/
}



// ==== 0x006C1850  _TClassFactory_VTActionClass::CreateTClassFactory_TActionClass  this=?$TClassFactory@VTActionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TActionClass(_TClassFactory_VTActionClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1857*/
    return -2147467261; /*0x6c1859*/
  *v4 = 0; /*0x6c1876*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1892*/
    *v4 = a2; /*0x6c1896*/
  if ( !*v4 ) /*0x6c1898*/
    return -2147467262; /*0x6c18a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c18ac*/
  return 0; /*0x6c185e*/
}



// ==== 0x006C18C0  _TClassFactory_VTActionClass::AddRef  this=?$TClassFactory@VTActionClass@@  sig=csp ====
LONG __thiscall TClassFactory_TActionClass::AddRef(_TClassFactory_VTActionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c18ce*/
}



// ==== 0x006C18E0  _TClassFactory_VTActionClass::GetClassName  this=?$TClassFactory@VTActionClass@@  sig=csp ====
LONG __thiscall TClassFactory_TActionClass::GetClassName(_TClassFactory_VTActionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c18f0*/
  if ( !v1 ) /*0x6c18f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c18f7*/
  return v1; /*0x6c1901*/
}



// ==== 0x006C1910  _TClassFactory_VTActionClass::ddtor  this=?$TClassFactory@VTActionClass@@  sig=csp ====
int __thiscall TClassFactory_TActionClass::ddtor(_TClassFactory_VTActionClass *this, int a2, int a3, _DWORD *a4)
{
  TActionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1918*/
    return -2147024809; /*0x6c191b*/
  *v9 = 0; /*0x6c1928*/
  if ( a3 ) /*0x6c1930*/
    return -2147221232; /*0x6c1933*/
  v5 = (TActionClass *)__2_YAPAXI_Z(0x94u); /*0x6c1941*/
  if ( !v5 ) /*0x6c194b*/
    return -2147024882; /*0x6c194b*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))TActionClass::ctor(v5); /*0x6c194f*/
  v7 = v6; /*0x6c1954*/
  if ( !v6 ) /*0x6c1958*/
    return -2147024882; /*0x6c195b*/
  v8 = (**v6)(v6, a4, v9); /*0x6c196f*/
  if ( v8 < 0 ) /*0x6c1973*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c197b*/
  return v8; /*0x6c191a*/
}



// ==== 0x006C1990  _TClassFactory_VTActionClass::GetSize  this=?$TClassFactory@VTActionClass@@  sig=csp ====
int __thiscall TClassFactory_TActionClass::GetSize(_TClassFactory_VTActionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c199a*/
  if ( v5 ) /*0x6c199d*/
    v3 = v2 + 1; /*0x6c199f*/
  else
    v3 = v2 - 1; /*0x6c19a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c19a0*/
  return 0; /*0x6c19a5*/
}



// ==== 0x006C19C0  ObjectClass::WinMain_Helper_6C19C0  this=?$TClassFactory@VTriggerClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C19C0(ObjectClass *this)
{
  this->? = 0; /*0x6c19c2*/
  this->AbstractClass = &TClassFactory<TriggerClass>::`vftable'; /*0x6c19c9*/
  return &this->AbstractClass; /*0x6c19cf*/
}



// ==== 0x006C19D0  _TClassFactory_VTriggerClass::CreateTClassFactory_TriggerClass  this=?$TClassFactory@VTriggerClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TriggerClass(_TClassFactory_VTriggerClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c19d7*/
    return -2147467261; /*0x6c19d9*/
  *v4 = 0; /*0x6c19f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1a12*/
    *v4 = a2; /*0x6c1a16*/
  if ( !*v4 ) /*0x6c1a18*/
    return -2147467262; /*0x6c1a20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c1a2c*/
  return 0; /*0x6c19de*/
}



// ==== 0x006C1A40  _TClassFactory_VTriggerClass::AddRef  this=?$TClassFactory@VTriggerClass@@  sig=csp ====
LONG __thiscall TClassFactory_TriggerClass::AddRef(_TClassFactory_VTriggerClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1a4e*/
}



// ==== 0x006C1A60  _TClassFactory_VTriggerClass::GetClassName  this=?$TClassFactory@VTriggerClass@@  sig=csp ====
LONG __thiscall TClassFactory_TriggerClass::GetClassName(_TClassFactory_VTriggerClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1a70*/
  if ( !v1 ) /*0x6c1a74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1a77*/
  return v1; /*0x6c1a81*/
}



// ==== 0x006C1A90  _TClassFactory_VTriggerClass::ddtor  this=?$TClassFactory@VTriggerClass@@  sig=csp ====
int __thiscall TClassFactory_TriggerClass::ddtor(_TClassFactory_VTriggerClass *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1a98*/
    return -2147024809; /*0x6c1a9b*/
  *v9 = 0; /*0x6c1aa8*/
  if ( a3 ) /*0x6c1ab0*/
    return -2147221232; /*0x6c1ab3*/
  v5 = __2_YAPAXI_Z(0x48u); /*0x6c1abe*/
  if ( !v5 ) /*0x6c1ac8*/
    return -2147024882; /*0x6c1ac8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))TriggerClass::Construct(v5, 0); /*0x6c1ace*/
  v7 = v6; /*0x6c1ad3*/
  if ( !v6 ) /*0x6c1ad7*/
    return -2147024882; /*0x6c1ada*/
  v8 = (**v6)(v6, a4, v9); /*0x6c1aee*/
  if ( v8 < 0 ) /*0x6c1af2*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c1afa*/
  return v8; /*0x6c1a9a*/
}



// ==== 0x006C1B10  _TClassFactory_VTriggerClass::GetSize  this=?$TClassFactory@VTriggerClass@@  sig=csp ====
int __thiscall TClassFactory_TriggerClass::GetSize(_TClassFactory_VTriggerClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c1b1a*/
  if ( v5 ) /*0x6c1b1d*/
    v3 = v2 + 1; /*0x6c1b1f*/
  else
    v3 = v2 - 1; /*0x6c1b28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c1b20*/
  return 0; /*0x6c1b25*/
}



// ==== 0x006C1B40  ObjectClass::WinMain_Helper_6C1B40  this=?$TClassFactory@VTriggerTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1B40(ObjectClass *this)
{
  this->? = 0; /*0x6c1b42*/
  this->AbstractClass = &TClassFactory<TriggerTypeClass>::`vftable'; /*0x6c1b49*/
  return &this->AbstractClass; /*0x6c1b4f*/
}



// ==== 0x006C1B50  _TClassFactory_VTriggerTypeClass::CreateTClassFactory_TriggerTypeClass  this=?$TClassFactory@VTriggerTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TriggerTypeClass(_TClassFactory_VTriggerTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1b57*/
    return -2147467261; /*0x6c1b59*/
  *v4 = 0; /*0x6c1b76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1b92*/
    *v4 = a2; /*0x6c1b96*/
  if ( !*v4 ) /*0x6c1b98*/
    return -2147467262; /*0x6c1ba0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c1bac*/
  return 0; /*0x6c1b5e*/
}



// ==== 0x006C1BC0  _TClassFactory_VTriggerTypeClass::AddRef  this=?$TClassFactory@VTriggerTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_TriggerTypeClass::AddRef(_TClassFactory_VTriggerTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1bce*/
}



// ==== 0x006C1BE0  _TClassFactory_VTriggerTypeClass::GetClassName  this=?$TClassFactory@VTriggerTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_TriggerTypeClass::GetClassName(_TClassFactory_VTriggerTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1bf0*/
  if ( !v1 ) /*0x6c1bf4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1bf7*/
  return v1; /*0x6c1c01*/
}



// ==== 0x006C1C10  _TClassFactory_VTriggerTypeClass::GetClassIdentifier  this=?$TClassFactory@VTriggerTypeClass@@  sig=csp ====
int __thiscall TClassFactory_TriggerTypeClass::GetClassIdentifier(
        _TClassFactory_VTriggerTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  TriggerTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1c18*/
    return -2147024809; /*0x6c1c1b*/
  *v9 = 0; /*0x6c1c28*/
  if ( a3 ) /*0x6c1c30*/
    return -2147221232; /*0x6c1c33*/
  v5 = (TriggerTypeClass *)__2_YAPAXI_Z(0xB4u); /*0x6c1c41*/
  if ( !v5 ) /*0x6c1c4b*/
    return -2147024882; /*0x6c1c4b*/
  v6 = TriggerTypeClass::Construct(v5, 0); /*0x6c1c51*/
  v7 = v6; /*0x6c1c56*/
  if ( !v6 ) /*0x6c1c5a*/
    return -2147024882; /*0x6c1c5d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c1c71*/
  if ( v8 < 0 ) /*0x6c1c75*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c1c7d*/
  return v8; /*0x6c1c1a*/
}



// ==== 0x006C1C90  _TClassFactory_VTriggerTypeClass::GetSize  this=?$TClassFactory@VTriggerTypeClass@@  sig=csp ====
int __thiscall TClassFactory_TriggerTypeClass::GetSize(_TClassFactory_VTriggerTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c1c9a*/
  if ( v5 ) /*0x6c1c9d*/
    v3 = v2 + 1; /*0x6c1c9f*/
  else
    v3 = v2 - 1; /*0x6c1ca8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c1ca0*/
  return 0; /*0x6c1ca5*/
}



// ==== 0x006C1CC0  ObjectClass::WinMain_Helper_6C1CC0  this=?$TClassFactory@VScriptClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1CC0(ObjectClass *this)
{
  this->? = 0; /*0x6c1cc2*/
  this->AbstractClass = &TClassFactory<ScriptClass>::`vftable'; /*0x6c1cc9*/
  return &this->AbstractClass; /*0x6c1ccf*/
}



// ==== 0x006C1CD0  _TClassFactory_VScriptClass::CreateTClassFactory_ScriptClass  this=?$TClassFactory@VScriptClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ScriptClass(_TClassFactory_VScriptClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1cd7*/
    return -2147467261; /*0x6c1cd9*/
  *v4 = 0; /*0x6c1cf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1d12*/
    *v4 = a2; /*0x6c1d16*/
  if ( !*v4 ) /*0x6c1d18*/
    return -2147467262; /*0x6c1d20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c1d2c*/
  return 0; /*0x6c1cde*/
}



// ==== 0x006C1D40  _TClassFactory_VScriptClass::AddRef  this=?$TClassFactory@VScriptClass@@  sig=csp ====
LONG __thiscall TClassFactory_ScriptClass::AddRef(_TClassFactory_VScriptClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1d4e*/
}



// ==== 0x006C1D60  _TClassFactory_VScriptClass::GetClassName  this=?$TClassFactory@VScriptClass@@  sig=csp ====
LONG __thiscall TClassFactory_ScriptClass::GetClassName(_TClassFactory_VScriptClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1d70*/
  if ( !v1 ) /*0x6c1d74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1d77*/
  return v1; /*0x6c1d81*/
}



// ==== 0x006C1D90  _TClassFactory_VScriptClass::ddtor  this=?$TClassFactory@VScriptClass@@  sig=csp ====
int __thiscall TClassFactory_ScriptClass::ddtor(_TClassFactory_VScriptClass *this, int a2, int a3, _DWORD *a4)
{
  ScriptClass *v5; // eax
  AbstractClass *v6; // eax
  AbstractClass *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1d98*/
    return -2147024809; /*0x6c1d9b*/
  *v9 = 0; /*0x6c1da8*/
  if ( a3 ) /*0x6c1db0*/
    return -2147221232; /*0x6c1db3*/
  v5 = (ScriptClass *)__2_YAPAXI_Z(0x30u); /*0x6c1dbe*/
  if ( !v5 ) /*0x6c1dc8*/
    return -2147024882; /*0x6c1dc8*/
  v6 = ScriptClass::Construct(v5, 0); /*0x6c1dce*/
  v7 = v6; /*0x6c1dd3*/
  if ( !v6 ) /*0x6c1dd7*/
    return -2147024882; /*0x6c1dda*/
  v8 = (*(int (__stdcall **)(AbstractClass *, _DWORD *, _DWORD *))v6->ptr_0)(v6, a4, v9); /*0x6c1dee*/
  if ( v8 < 0 ) /*0x6c1df2*/
    (*(void (__thiscall **)(AbstractClass *, int))(v7->ptr_0 + 32))(v7, 1); /*0x6c1dfa*/
  return v8; /*0x6c1d9a*/
}



// ==== 0x006C1E10  _TClassFactory_VScriptClass::GetSize  this=?$TClassFactory@VScriptClass@@  sig=csp ====
int __thiscall TClassFactory_ScriptClass::GetSize(_TClassFactory_VScriptClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c1e1a*/
  if ( v5 ) /*0x6c1e1d*/
    v3 = v2 + 1; /*0x6c1e1f*/
  else
    v3 = v2 - 1; /*0x6c1e28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c1e20*/
  return 0; /*0x6c1e25*/
}



// ==== 0x006C1E40  ObjectClass::WinMain_Helper_6C1E40  this=?$TClassFactory@VScriptTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1E40(ObjectClass *this)
{
  this->? = 0; /*0x6c1e42*/
  this->AbstractClass = &TClassFactory<ScriptTypeClass>::`vftable'; /*0x6c1e49*/
  return &this->AbstractClass; /*0x6c1e4f*/
}



// ==== 0x006C1E50  _TClassFactory_VScriptTypeClass::CreateTClassFactory_ScriptTypeClass  this=?$TClassFactory@VScriptTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ScriptTypeClass(_TClassFactory_VScriptTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1e57*/
    return -2147467261; /*0x6c1e59*/
  *v4 = 0; /*0x6c1e76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1e92*/
    *v4 = a2; /*0x6c1e96*/
  if ( !*v4 ) /*0x6c1e98*/
    return -2147467262; /*0x6c1ea0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c1eac*/
  return 0; /*0x6c1e5e*/
}



// ==== 0x006C1EC0  _TClassFactory_VScriptTypeClass::AddRef  this=?$TClassFactory@VScriptTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_ScriptTypeClass::AddRef(_TClassFactory_VScriptTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c1ece*/
}



// ==== 0x006C1EE0  _TClassFactory_VScriptTypeClass::GetClassName  this=?$TClassFactory@VScriptTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_ScriptTypeClass::GetClassName(_TClassFactory_VScriptTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c1ef0*/
  if ( !v1 ) /*0x6c1ef4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c1ef7*/
  return v1; /*0x6c1f01*/
}



// ==== 0x006C1F10  _TClassFactory_VScriptTypeClass::GetClassIdentifier  this=?$TClassFactory@VScriptTypeClass@@  sig=csp ====
int __thiscall TClassFactory_ScriptTypeClass::GetClassIdentifier(
        _TClassFactory_VScriptTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  ScriptTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c1f18*/
    return -2147024809; /*0x6c1f1b*/
  *v9 = 0; /*0x6c1f28*/
  if ( a3 ) /*0x6c1f30*/
    return -2147221232; /*0x6c1f33*/
  v5 = (ScriptTypeClass *)__2_YAPAXI_Z(0x234u); /*0x6c1f41*/
  if ( !v5 ) /*0x6c1f4b*/
    return -2147024882; /*0x6c1f4b*/
  v6 = ScriptTypeClass::Constructor(v5, 0); /*0x6c1f51*/
  v7 = v6; /*0x6c1f56*/
  if ( !v6 ) /*0x6c1f5a*/
    return -2147024882; /*0x6c1f5d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c1f71*/
  if ( v8 < 0 ) /*0x6c1f75*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c1f7d*/
  return v8; /*0x6c1f1a*/
}



// ==== 0x006C1F90  _TClassFactory_VScriptTypeClass::GetSize  this=?$TClassFactory@VScriptTypeClass@@  sig=csp ====
int __thiscall TClassFactory_ScriptTypeClass::GetSize(_TClassFactory_VScriptTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c1f9a*/
  if ( v5 ) /*0x6c1f9d*/
    v3 = v2 + 1; /*0x6c1f9f*/
  else
    v3 = v2 - 1; /*0x6c1fa8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c1fa0*/
  return 0; /*0x6c1fa5*/
}



// ==== 0x006C1FC0  ObjectClass::WinMain_Helper_6C1FC0  this=?$TClassFactory@VTagClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C1FC0(ObjectClass *this)
{
  this->? = 0; /*0x6c1fc2*/
  this->AbstractClass = &TClassFactory<TagClass>::`vftable'; /*0x6c1fc9*/
  return &this->AbstractClass; /*0x6c1fcf*/
}



// ==== 0x006C1FD0  _TClassFactory_VTagClass::CreateTClassFactory_TagClass  this=?$TClassFactory@VTagClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TagClass(_TClassFactory_VTagClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1fd7*/
    return -2147467261; /*0x6c1fd9*/
  *v4 = 0; /*0x6c1ff6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2012*/
    *v4 = a2; /*0x6c2016*/
  if ( !*v4 ) /*0x6c2018*/
    return -2147467262; /*0x6c2020*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c202c*/
  return 0; /*0x6c1fde*/
}



// ==== 0x006C2040  _TClassFactory_VTagClass::AddRef  this=?$TClassFactory@VTagClass@@  sig=csp ====
LONG __thiscall TClassFactory_TagClass::AddRef(_TClassFactory_VTagClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c204e*/
}



// ==== 0x006C2060  _TClassFactory_VTagClass::GetClassName  this=?$TClassFactory@VTagClass@@  sig=csp ====
LONG __thiscall TClassFactory_TagClass::GetClassName(_TClassFactory_VTagClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2070*/
  if ( !v1 ) /*0x6c2074*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2077*/
  return v1; /*0x6c2081*/
}



// ==== 0x006C2090  _TClassFactory_VTagClass::ddtor  this=?$TClassFactory@VTagClass@@  sig=csp ====
int __thiscall TClassFactory_TagClass::ddtor(_TClassFactory_VTagClass *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***Type)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2098*/
    return -2147024809; /*0x6c209b*/
  *v9 = 0; /*0x6c20a8*/
  if ( a3 ) /*0x6c20b0*/
    return -2147221232; /*0x6c20b3*/
  v5 = __2_YAPAXI_Z(0x38u); /*0x6c20be*/
  if ( !v5 ) /*0x6c20c8*/
    return -2147024882; /*0x6c20c8*/
  Type = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))TeknoClass::GetType(v5, 0); /*0x6c20ce*/
  v7 = Type; /*0x6c20d3*/
  if ( !Type ) /*0x6c20d7*/
    return -2147024882; /*0x6c20da*/
  v8 = (**Type)(Type, a4, v9); /*0x6c20ee*/
  if ( v8 < 0 ) /*0x6c20f2*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c20fa*/
  return v8; /*0x6c209a*/
}



// ==== 0x006C2110  _TClassFactory_VTagClass::GetSize  this=?$TClassFactory@VTagClass@@  sig=csp ====
int __thiscall TClassFactory_TagClass::GetSize(_TClassFactory_VTagClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c211a*/
  if ( v5 ) /*0x6c211d*/
    v3 = v2 + 1; /*0x6c211f*/
  else
    v3 = v2 - 1; /*0x6c2128*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c2120*/
  return 0; /*0x6c2125*/
}



// ==== 0x006C2140  ObjectClass::WinMain_Helper_6C2140  this=?$TClassFactory@VTagTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2140(ObjectClass *this)
{
  this->? = 0; /*0x6c2142*/
  this->AbstractClass = &TClassFactory<TagTypeClass>::`vftable'; /*0x6c2149*/
  return &this->AbstractClass; /*0x6c214f*/
}



// ==== 0x006C2150  _TClassFactory_VTagTypeClass::CreateTClassFactory_TagTypeClass  this=?$TClassFactory@VTagTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TagTypeClass(_TClassFactory_VTagTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2157*/
    return -2147467261; /*0x6c2159*/
  *v4 = 0; /*0x6c2176*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2192*/
    *v4 = a2; /*0x6c2196*/
  if ( !*v4 ) /*0x6c2198*/
    return -2147467262; /*0x6c21a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c21ac*/
  return 0; /*0x6c215e*/
}



// ==== 0x006C21C0  _TClassFactory_VTagTypeClass::AddRef  this=?$TClassFactory@VTagTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_TagTypeClass::AddRef(_TClassFactory_VTagTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c21ce*/
}



// ==== 0x006C21E0  _TClassFactory_VTagTypeClass::GetClassName  this=?$TClassFactory@VTagTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_TagTypeClass::GetClassName(_TClassFactory_VTagTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c21f0*/
  if ( !v1 ) /*0x6c21f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c21f7*/
  return v1; /*0x6c2201*/
}



// ==== 0x006C2210  _TClassFactory_VTagTypeClass::GetClassIdentifier  this=?$TClassFactory@VTagTypeClass@@  sig=csp ====
int __thiscall TClassFactory_TagTypeClass::GetClassIdentifier(
        _TClassFactory_VTagTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  char *v5; // eax
  char *v6; // eax
  char *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2218*/
    return -2147024809; /*0x6c221b*/
  *v9 = 0; /*0x6c2228*/
  if ( a3 ) /*0x6c2230*/
    return -2147221232; /*0x6c2233*/
  v5 = (char *)__2_YAPAXI_Z(0xA4u); /*0x6c2241*/
  if ( !v5 ) /*0x6c224b*/
    return -2147024882; /*0x6c224b*/
  v6 = TagTypeClass::Construct(v5, 0); /*0x6c2251*/
  v7 = v6; /*0x6c2256*/
  if ( !v6 ) /*0x6c225a*/
    return -2147024882; /*0x6c225d*/
  v8 = (**(int (__stdcall ***)(char *, _DWORD *, _DWORD *))v6)(v6, a4, v9); /*0x6c2271*/
  if ( v8 < 0 ) /*0x6c2275*/
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v7 + 32))(v7, 1); /*0x6c227d*/
  return v8; /*0x6c221a*/
}



// ==== 0x006C2290  _TClassFactory_VTagTypeClass::GetSize  this=?$TClassFactory@VTagTypeClass@@  sig=csp ====
int __thiscall TClassFactory_TagTypeClass::GetSize(_TClassFactory_VTagTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c229a*/
  if ( v5 ) /*0x6c229d*/
    v3 = v2 + 1; /*0x6c229f*/
  else
    v3 = v2 - 1; /*0x6c22a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c22a0*/
  return 0; /*0x6c22a5*/
}



// ==== 0x006C22C0  ObjectClass::WinMain_Helper_6C22C0  this=?$TClassFactory@VTeamClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C22C0(ObjectClass *this)
{
  this->? = 0; /*0x6c22c2*/
  this->AbstractClass = &TClassFactory<TeamClass>::`vftable'; /*0x6c22c9*/
  return &this->AbstractClass; /*0x6c22cf*/
}



// ==== 0x006C22D0  _TClassFactory_VTeamClass::CreateTClassFactory_TeamClass  this=?$TClassFactory@VTeamClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TeamClass(_TClassFactory_VTeamClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c22d7*/
    return -2147467261; /*0x6c22d9*/
  *v4 = 0; /*0x6c22f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2312*/
    *v4 = a2; /*0x6c2316*/
  if ( !*v4 ) /*0x6c2318*/
    return -2147467262; /*0x6c2320*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c232c*/
  return 0; /*0x6c22de*/
}



// ==== 0x006C2340  _TClassFactory_VTeamClass::AddRef  this=?$TClassFactory@VTeamClass@@  sig=csp ====
LONG __thiscall TClassFactory_TeamClass::AddRef(_TClassFactory_VTeamClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c234e*/
}



// ==== 0x006C2360  _TClassFactory_VTeamClass::GetClassName  this=?$TClassFactory@VTeamClass@@  sig=csp ====
LONG __thiscall TClassFactory_TeamClass::GetClassName(_TClassFactory_VTeamClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2370*/
  if ( !v1 ) /*0x6c2374*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2377*/
  return v1; /*0x6c2381*/
}



// ==== 0x006C2390  _TClassFactory_VTeamClass::ddtor  this=?$TClassFactory@VTeamClass@@  sig=csp ====
int __thiscall TClassFactory_TeamClass::ddtor(_TClassFactory_VTeamClass *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2398*/
    return -2147024809; /*0x6c239b*/
  *v9 = 0; /*0x6c23a8*/
  if ( a3 ) /*0x6c23b0*/
    return -2147221232; /*0x6c23b3*/
  v5 = __2_YAPAXI_Z(0xA0u); /*0x6c23c1*/
  if ( !v5 ) /*0x6c23cb*/
    return -2147024882; /*0x6c23cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))MissionClass::Construct(v5, 0, 0, 0); /*0x6c23d5*/
  v7 = v6; /*0x6c23da*/
  if ( !v6 ) /*0x6c23de*/
    return -2147024882; /*0x6c23e1*/
  v8 = (**v6)(v6, a4, v9); /*0x6c23f5*/
  if ( v8 < 0 ) /*0x6c23f9*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c2401*/
  return v8; /*0x6c239a*/
}



// ==== 0x006C2410  _TClassFactory_VTeamClass::GetSize  this=?$TClassFactory@VTeamClass@@  sig=csp ====
int __thiscall TClassFactory_TeamClass::GetSize(_TClassFactory_VTeamClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c241a*/
  if ( v5 ) /*0x6c241d*/
    v3 = v2 + 1; /*0x6c241f*/
  else
    v3 = v2 - 1; /*0x6c2428*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c2420*/
  return 0; /*0x6c2425*/
}



// ==== 0x006C2440  ObjectClass::WinMain_Helper_6C2440  this=?$TClassFactory@VTeamTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2440(ObjectClass *this)
{
  this->? = 0; /*0x6c2442*/
  this->AbstractClass = &TClassFactory<TeamTypeClass>::`vftable'; /*0x6c2449*/
  return &this->AbstractClass; /*0x6c244f*/
}



// ==== 0x006C2450  _TClassFactory_VTeamTypeClass::CreateTClassFactory_TeamTypeClass  this=?$TClassFactory@VTeamTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TeamTypeClass(_TClassFactory_VTeamTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2457*/
    return -2147467261; /*0x6c2459*/
  *v4 = 0; /*0x6c2476*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2492*/
    *v4 = a2; /*0x6c2496*/
  if ( !*v4 ) /*0x6c2498*/
    return -2147467262; /*0x6c24a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c24ac*/
  return 0; /*0x6c245e*/
}



// ==== 0x006C24C0  _TClassFactory_VTeamTypeClass::AddRef  this=?$TClassFactory@VTeamTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_TeamTypeClass::AddRef(_TClassFactory_VTeamTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c24ce*/
}



// ==== 0x006C24E0  _TClassFactory_VTeamTypeClass::GetClassName  this=?$TClassFactory@VTeamTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_TeamTypeClass::GetClassName(_TClassFactory_VTeamTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c24f0*/
  if ( !v1 ) /*0x6c24f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c24f7*/
  return v1; /*0x6c2501*/
}



// ==== 0x006C2510  _TClassFactory_VTeamTypeClass::GetClassIdentifier  this=?$TClassFactory@VTeamTypeClass@@  sig=csp ====
int __thiscall TClassFactory_TeamTypeClass::GetClassIdentifier(
        _TClassFactory_VTeamTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  TeamTypeClass *v5; // eax
  _DWORD *Base; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2518*/
    return -2147024809; /*0x6c251b*/
  *v9 = 0; /*0x6c2528*/
  if ( a3 ) /*0x6c2530*/
    return -2147221232; /*0x6c2533*/
  v5 = (TeamTypeClass *)__2_YAPAXI_Z(0xF8u); /*0x6c2541*/
  if ( !v5 ) /*0x6c254b*/
    return -2147024882; /*0x6c254b*/
  Base = TechnoTypeClass::LoadBase(v5, 0); /*0x6c2551*/
  v7 = Base; /*0x6c2556*/
  if ( !Base ) /*0x6c255a*/
    return -2147024882; /*0x6c255d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*Base)(Base, a4, v9); /*0x6c2571*/
  if ( v8 < 0 ) /*0x6c2575*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c257d*/
  return v8; /*0x6c251a*/
}



// ==== 0x006C2590  _TClassFactory_VTeamTypeClass::GetSize  this=?$TClassFactory@VTeamTypeClass@@  sig=csp ====
int __thiscall TClassFactory_TeamTypeClass::GetSize(_TClassFactory_VTeamTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c259a*/
  if ( v5 ) /*0x6c259d*/
    v3 = v2 + 1; /*0x6c259f*/
  else
    v3 = v2 - 1; /*0x6c25a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c25a0*/
  return 0; /*0x6c25a5*/
}



// ==== 0x006C25C0  ObjectClass::WinMain_Helper_6C25C0  this=?$TClassFactory@VTaskForceClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C25C0(ObjectClass *this)
{
  this->? = 0; /*0x6c25c2*/
  this->AbstractClass = &TClassFactory<TaskForceClass>::`vftable'; /*0x6c25c9*/
  return &this->AbstractClass; /*0x6c25cf*/
}



// ==== 0x006C25D0  _TClassFactory_VTaskForceClass::CreateTClassFactory_TaskForceClass  this=?$TClassFactory@VTaskForceClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TaskForceClass(_TClassFactory_VTaskForceClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c25d7*/
    return -2147467261; /*0x6c25d9*/
  *v4 = 0; /*0x6c25f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2612*/
    *v4 = a2; /*0x6c2616*/
  if ( !*v4 ) /*0x6c2618*/
    return -2147467262; /*0x6c2620*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c262c*/
  return 0; /*0x6c25de*/
}



// ==== 0x006C2640  _TClassFactory_VTaskForceClass::AddRef  this=?$TClassFactory@VTaskForceClass@@  sig=csp ====
LONG __thiscall TClassFactory_TaskForceClass::AddRef(_TClassFactory_VTaskForceClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c264e*/
}



// ==== 0x006C2660  _TClassFactory_VTaskForceClass::GetClassName  this=?$TClassFactory@VTaskForceClass@@  sig=csp ====
LONG __thiscall TClassFactory_TaskForceClass::GetClassName(_TClassFactory_VTaskForceClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2670*/
  if ( !v1 ) /*0x6c2674*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2677*/
  return v1; /*0x6c2681*/
}



// ==== 0x006C2690  _TClassFactory_VTaskForceClass::ddtor  this=?$TClassFactory@VTaskForceClass@@  sig=csp ====
int __thiscall TClassFactory_TaskForceClass::ddtor(_TClassFactory_VTaskForceClass *this, int a2, int a3, _DWORD *a4)
{
  TaskForceClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2698*/
    return -2147024809; /*0x6c269b*/
  *v9 = 0; /*0x6c26a8*/
  if ( a3 ) /*0x6c26b0*/
    return -2147221232; /*0x6c26b3*/
  v5 = (TaskForceClass *)__2_YAPAXI_Z(0xD4u); /*0x6c26c1*/
  if ( !v5 ) /*0x6c26cb*/
    return -2147024882; /*0x6c26cb*/
  v6 = TaskForceClass::Construct(v5, 0); /*0x6c26d1*/
  v7 = v6; /*0x6c26d6*/
  if ( !v6 ) /*0x6c26da*/
    return -2147024882; /*0x6c26dd*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c26f1*/
  if ( v8 < 0 ) /*0x6c26f5*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c26fd*/
  return v8; /*0x6c269a*/
}



// ==== 0x006C2710  _TClassFactory_VTaskForceClass::GetSize  this=?$TClassFactory@VTaskForceClass@@  sig=csp ====
int __thiscall TClassFactory_TaskForceClass::GetSize(_TClassFactory_VTaskForceClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c271a*/
  if ( v5 ) /*0x6c271d*/
    v3 = v2 + 1; /*0x6c271f*/
  else
    v3 = v2 - 1; /*0x6c2728*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c2720*/
  return 0; /*0x6c2725*/
}



// ==== 0x006C2740  ObjectClass::WinMain_Helper_6C2740  this=?$TClassFactory@VUnitTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2740(ObjectClass *this)
{
  this->? = 0; /*0x6c2742*/
  this->AbstractClass = &TClassFactory<UnitTypeClass>::`vftable'; /*0x6c2749*/
  return &this->AbstractClass; /*0x6c274f*/
}



// ==== 0x006C2750  _TClassFactory_VUnitTypeClass::CreateTClassFactory_UnitTypeClass  this=?$TClassFactory@VUnitTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_UnitTypeClass(_TClassFactory_VUnitTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2757*/
    return -2147467261; /*0x6c2759*/
  *v4 = 0; /*0x6c2776*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2792*/
    *v4 = a2; /*0x6c2796*/
  if ( !*v4 ) /*0x6c2798*/
    return -2147467262; /*0x6c27a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c27ac*/
  return 0; /*0x6c275e*/
}



// ==== 0x006C27C0  _TClassFactory_VUnitTypeClass::AddRef  this=?$TClassFactory@VUnitTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_UnitTypeClass::AddRef(_TClassFactory_VUnitTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c27ce*/
}



// ==== 0x006C27E0  _TClassFactory_VUnitTypeClass::GetClassName  this=?$TClassFactory@VUnitTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_UnitTypeClass::GetClassName(_TClassFactory_VUnitTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c27f0*/
  if ( !v1 ) /*0x6c27f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c27f7*/
  return v1; /*0x6c2801*/
}



// ==== 0x006C2810  _TClassFactory_VUnitTypeClass::GetClassIdentifier  this=?$TClassFactory@VUnitTypeClass@@  sig=csp ====
int __thiscall TClassFactory_UnitTypeClass::GetClassIdentifier(
        _TClassFactory_VUnitTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2818*/
    return -2147024809; /*0x6c281b*/
  *v9 = 0; /*0x6c2828*/
  if ( a3 ) /*0x6c2830*/
    return -2147221232; /*0x6c2833*/
  v5 = __2_YAPAXI_Z(0xE78u); /*0x6c2841*/
  if ( !v5 ) /*0x6c284b*/
    return -2147024882; /*0x6c284b*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))UnitTypeClass::UnitTypeClass(v5, 0); /*0x6c2851*/
  v7 = v6; /*0x6c2856*/
  if ( !v6 ) /*0x6c285a*/
    return -2147024882; /*0x6c285d*/
  v8 = (**v6)(v6, a4, v9); /*0x6c2871*/
  if ( v8 < 0 ) /*0x6c2875*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c287d*/
  return v8; /*0x6c281a*/
}



// ==== 0x006C2890  _TClassFactory_VUnitTypeClass::GetSize  this=?$TClassFactory@VUnitTypeClass@@  sig=csp ====
int __thiscall TClassFactory_UnitTypeClass::GetSize(_TClassFactory_VUnitTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c289a*/
  if ( v5 ) /*0x6c289d*/
    v3 = v2 + 1; /*0x6c289f*/
  else
    v3 = v2 - 1; /*0x6c28a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c28a0*/
  return 0; /*0x6c28a5*/
}



// ==== 0x006C28C0  ObjectClass::WinMain_Helper_6C28C0  this=?$TClassFactory@VBuildingTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C28C0(ObjectClass *this)
{
  this->? = 0; /*0x6c28c2*/
  this->AbstractClass = &TClassFactory<BuildingTypeClass>::`vftable'; /*0x6c28c9*/
  return &this->AbstractClass; /*0x6c28cf*/
}



// ==== 0x006C28D0  _TClassFactory_VBuildingTypeClass::CreateTClassFactory_BuildingTypeClass  this=?$TClassFactory@VBuildingTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_BuildingTypeClass(
        _TClassFactory_VBuildingTypeClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c28d7*/
    return -2147467261; /*0x6c28d9*/
  *v4 = 0; /*0x6c28f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2912*/
    *v4 = a2; /*0x6c2916*/
  if ( !*v4 ) /*0x6c2918*/
    return -2147467262; /*0x6c2920*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c292c*/
  return 0; /*0x6c28de*/
}



// ==== 0x006C2940  _TClassFactory_VBuildingTypeClass::AddRef  this=?$TClassFactory@VBuildingTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_BuildingTypeClass::AddRef(_TClassFactory_VBuildingTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c294e*/
}



// ==== 0x006C2960  _TClassFactory_VBuildingTypeClass::GetClassName  this=?$TClassFactory@VBuildingTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_BuildingTypeClass::GetClassName(_TClassFactory_VBuildingTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2970*/
  if ( !v1 ) /*0x6c2974*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2977*/
  return v1; /*0x6c2981*/
}



// ==== 0x006C2990  _TClassFactory_VBuildingTypeClass::GetClassIdentifier  this=?$TClassFactory@VBuildingTypeClass@@  sig=csp ====
int __thiscall TClassFactory_BuildingTypeClass::GetClassIdentifier(
        _TClassFactory_VBuildingTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2998*/
    return -2147024809; /*0x6c299b*/
  *v9 = 0; /*0x6c29a8*/
  if ( a3 ) /*0x6c29b0*/
    return -2147221232; /*0x6c29b3*/
  v5 = __2_YAPAXI_Z(0x1798u); /*0x6c29c1*/
  if ( !v5 ) /*0x6c29cb*/
    return -2147024882; /*0x6c29cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))BuildingTypeClass::ConstructFull(v5, 0); /*0x6c29d1*/
  v7 = v6; /*0x6c29d6*/
  if ( !v6 ) /*0x6c29da*/
    return -2147024882; /*0x6c29dd*/
  v8 = (**v6)(v6, a4, v9); /*0x6c29f1*/
  if ( v8 < 0 ) /*0x6c29f5*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c29fd*/
  return v8; /*0x6c299a*/
}



// ==== 0x006C2A10  _TClassFactory_VBuildingTypeClass::GetSize  this=?$TClassFactory@VBuildingTypeClass@@  sig=csp ====
int __thiscall TClassFactory_BuildingTypeClass::GetSize(_TClassFactory_VBuildingTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c2a1a*/
  if ( v5 ) /*0x6c2a1d*/
    v3 = v2 + 1; /*0x6c2a1f*/
  else
    v3 = v2 - 1; /*0x6c2a28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c2a20*/
  return 0; /*0x6c2a25*/
}



// ==== 0x006C2A40  ObjectClass::WinMain_Helper_6C2A40  this=?$TClassFactory@VAircraftTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2A40(ObjectClass *this)
{
  this->? = 0; /*0x6c2a42*/
  this->AbstractClass = &TClassFactory<AircraftTypeClass>::`vftable'; /*0x6c2a49*/
  return &this->AbstractClass; /*0x6c2a4f*/
}



// ==== 0x006C2A50  _TClassFactory_VAircraftTypeClass::CreateTClassFactory_AircraftTypeClass  this=?$TClassFactory@VAircraftTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AircraftTypeClass(
        _TClassFactory_VAircraftTypeClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2a57*/
    return -2147467261; /*0x6c2a59*/
  *v4 = 0; /*0x6c2a76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2a92*/
    *v4 = a2; /*0x6c2a96*/
  if ( !*v4 ) /*0x6c2a98*/
    return -2147467262; /*0x6c2aa0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c2aac*/
  return 0; /*0x6c2a5e*/
}



// ==== 0x006C2AC0  _TClassFactory_VAircraftTypeClass::AddRef  this=?$TClassFactory@VAircraftTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AircraftTypeClass::AddRef(_TClassFactory_VAircraftTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2ace*/
}



// ==== 0x006C2AE0  _TClassFactory_VAircraftTypeClass::GetClassName  this=?$TClassFactory@VAircraftTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AircraftTypeClass::GetClassName(_TClassFactory_VAircraftTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2af0*/
  if ( !v1 ) /*0x6c2af4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2af7*/
  return v1; /*0x6c2b01*/
}



// ==== 0x006C2B10  _TClassFactory_VAircraftTypeClass::GetClassIdentifier  this=?$TClassFactory@VAircraftTypeClass@@  sig=csp ====
int __thiscall TClassFactory_AircraftTypeClass::GetClassIdentifier(
        _TClassFactory_VAircraftTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2b18*/
    return -2147024809; /*0x6c2b1b*/
  *v9 = 0; /*0x6c2b28*/
  if ( a3 ) /*0x6c2b30*/
    return -2147221232; /*0x6c2b33*/
  v5 = __2_YAPAXI_Z(0xE10u); /*0x6c2b41*/
  if ( !v5 ) /*0x6c2b4b*/
    return -2147024882; /*0x6c2b4b*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))AircraftTypeClass::AircraftTypeClass(v5, 0); /*0x6c2b51*/
  v7 = v6; /*0x6c2b56*/
  if ( !v6 ) /*0x6c2b5a*/
    return -2147024882; /*0x6c2b5d*/
  v8 = (**v6)(v6, a4, v9); /*0x6c2b71*/
  if ( v8 < 0 ) /*0x6c2b75*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c2b7d*/
  return v8; /*0x6c2b1a*/
}



// ==== 0x006C2B90  _TClassFactory_VAircraftTypeClass::GetSize  this=?$TClassFactory@VAircraftTypeClass@@  sig=csp ====
int __thiscall TClassFactory_AircraftTypeClass::GetSize(_TClassFactory_VAircraftTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c2b9a*/
  if ( v5 ) /*0x6c2b9d*/
    v3 = v2 + 1; /*0x6c2b9f*/
  else
    v3 = v2 - 1; /*0x6c2ba8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c2ba0*/
  return 0; /*0x6c2ba5*/
}



// ==== 0x006C2BC0  ObjectClass::WinMain_Helper_6C2BC0  this=?$TClassFactory@VInfantryTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2BC0(ObjectClass *this)
{
  this->? = 0; /*0x6c2bc2*/
  this->AbstractClass = &TClassFactory<InfantryTypeClass>::`vftable'; /*0x6c2bc9*/
  return &this->AbstractClass; /*0x6c2bcf*/
}



// ==== 0x006C2BD0  _TClassFactory_VInfantryTypeClass::CreateTClassFactory_InfantryTypeClass  this=?$TClassFactory@VInfantryTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_InfantryTypeClass(
        _TClassFactory_VInfantryTypeClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2bd7*/
    return -2147467261; /*0x6c2bd9*/
  *v4 = 0; /*0x6c2bf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2c12*/
    *v4 = a2; /*0x6c2c16*/
  if ( !*v4 ) /*0x6c2c18*/
    return -2147467262; /*0x6c2c20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c2c2c*/
  return 0; /*0x6c2bde*/
}



// ==== 0x006C2C40  _TClassFactory_VInfantryTypeClass::AddRef  this=?$TClassFactory@VInfantryTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_InfantryTypeClass::AddRef(_TClassFactory_VInfantryTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2c4e*/
}



// ==== 0x006C2C60  _TClassFactory_VInfantryTypeClass::GetClassName  this=?$TClassFactory@VInfantryTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_InfantryTypeClass::GetClassName(_TClassFactory_VInfantryTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2c70*/
  if ( !v1 ) /*0x6c2c74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2c77*/
  return v1; /*0x6c2c81*/
}



// ==== 0x006C2C90  _TClassFactory_VInfantryTypeClass::GetClassIdentifier  this=?$TClassFactory@VInfantryTypeClass@@  sig=csp ====
int __thiscall TClassFactory_InfantryTypeClass::GetClassIdentifier(
        _TClassFactory_VInfantryTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2c98*/
    return -2147024809; /*0x6c2c9b*/
  *v9 = 0; /*0x6c2ca8*/
  if ( a3 ) /*0x6c2cb0*/
    return -2147221232; /*0x6c2cb3*/
  v5 = __2_YAPAXI_Z(0xED0u); /*0x6c2cc1*/
  if ( !v5 ) /*0x6c2ccb*/
    return -2147024882; /*0x6c2ccb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))InfantryTypeClass::Constructor(v5, 0); /*0x6c2cd1*/
  v7 = v6; /*0x6c2cd6*/
  if ( !v6 ) /*0x6c2cda*/
    return -2147024882; /*0x6c2cdd*/
  v8 = (**v6)(v6, a4, v9); /*0x6c2cf1*/
  if ( v8 < 0 ) /*0x6c2cf5*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c2cfd*/
  return v8; /*0x6c2c9a*/
}



// ==== 0x006C2D10  _TClassFactory_VInfantryTypeClass::GetSize  this=?$TClassFactory@VInfantryTypeClass@@  sig=csp ====
int __thiscall TClassFactory_InfantryTypeClass::GetSize(_TClassFactory_VInfantryTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c2d1a*/
  if ( v5 ) /*0x6c2d1d*/
    v3 = v2 + 1; /*0x6c2d1f*/
  else
    v3 = v2 - 1; /*0x6c2d28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c2d20*/
  return 0; /*0x6c2d25*/
}



// ==== 0x006C2D40  ObjectClass::WinMain_Helper_6C2D40  this=?$TClassFactory@VBulletTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2D40(ObjectClass *this)
{
  this->? = 0; /*0x6c2d42*/
  this->AbstractClass = &TClassFactory<BulletTypeClass>::`vftable'; /*0x6c2d49*/
  return &this->AbstractClass; /*0x6c2d4f*/
}



// ==== 0x006C2D50  _TClassFactory_VBulletTypeClass::CreateTClassFactory_BulletTypeClass  this=?$TClassFactory@VBulletTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_BulletTypeClass(_TClassFactory_VBulletTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2d57*/
    return -2147467261; /*0x6c2d59*/
  *v4 = 0; /*0x6c2d76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2d92*/
    *v4 = a2; /*0x6c2d96*/
  if ( !*v4 ) /*0x6c2d98*/
    return -2147467262; /*0x6c2da0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c2dac*/
  return 0; /*0x6c2d5e*/
}



// ==== 0x006C2DC0  _TClassFactory_VBulletTypeClass::AddRef  this=?$TClassFactory@VBulletTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_BulletTypeClass::AddRef(_TClassFactory_VBulletTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2dce*/
}



// ==== 0x006C2DE0  _TClassFactory_VBulletTypeClass::GetClassName  this=?$TClassFactory@VBulletTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_BulletTypeClass::GetClassName(_TClassFactory_VBulletTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2df0*/
  if ( !v1 ) /*0x6c2df4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2df7*/
  return v1; /*0x6c2e01*/
}



// ==== 0x006C2E10  _TClassFactory_VBulletTypeClass::GetClassIdentifier  this=?$TClassFactory@VBulletTypeClass@@  sig=csp ====
int __thiscall TClassFactory_BulletTypeClass::GetClassIdentifier(
        _TClassFactory_VBulletTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  BulletTypeClass *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2e18*/
    return -2147024809; /*0x6c2e1b*/
  *v9 = 0; /*0x6c2e28*/
  if ( a3 ) /*0x6c2e30*/
    return -2147221232; /*0x6c2e33*/
  v5 = (BulletTypeClass *)__2_YAPAXI_Z(0x2F8u); /*0x6c2e41*/
  if ( !v5 ) /*0x6c2e4b*/
    return -2147024882; /*0x6c2e4b*/
  v6 = BulletTypeClass::Construct(v5, 0); /*0x6c2e51*/
  v7 = v6; /*0x6c2e56*/
  if ( !v6 ) /*0x6c2e5a*/
    return -2147024882; /*0x6c2e5d*/
  v8 = (**(int (__stdcall ***)(_BYTE *, _DWORD *, _DWORD *))v6)(v6, a4, v9); /*0x6c2e71*/
  if ( v8 < 0 ) /*0x6c2e75*/
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v7 + 32))(v7, 1); /*0x6c2e7d*/
  return v8; /*0x6c2e1a*/
}



// ==== 0x006C2E90  _TClassFactory_VBulletTypeClass::GetSize  this=?$TClassFactory@VBulletTypeClass@@  sig=csp ====
int __thiscall TClassFactory_BulletTypeClass::GetSize(_TClassFactory_VBulletTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c2e9a*/
  if ( v5 ) /*0x6c2e9d*/
    v3 = v2 + 1; /*0x6c2e9f*/
  else
    v3 = v2 - 1; /*0x6c2ea8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c2ea0*/
  return 0; /*0x6c2ea5*/
}



// ==== 0x006C2EC0  ObjectClass::WinMain_Helper_6C2EC0  this=?$TClassFactory@VIsometricTileTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C2EC0(ObjectClass *this)
{
  this->? = 0; /*0x6c2ec2*/
  this->AbstractClass = &TClassFactory<IsometricTileTypeClass>::`vftable'; /*0x6c2ec9*/
  return &this->AbstractClass; /*0x6c2ecf*/
}



// ==== 0x006C2ED0  _TClassFactory_VIsometricTileTypeClass::CreateTClassFactory_IsometricTileTypeClass  this=?$TClassFactory@VIsometricTileTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_IsometricTileTypeClass(
        _TClassFactory_VIsometricTileTypeClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2ed7*/
    return -2147467261; /*0x6c2ed9*/
  *v4 = 0; /*0x6c2ef6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2f12*/
    *v4 = a2; /*0x6c2f16*/
  if ( !*v4 ) /*0x6c2f18*/
    return -2147467262; /*0x6c2f20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c2f2c*/
  return 0; /*0x6c2ede*/
}



// ==== 0x006C2F40  _TClassFactory_VIsometricTileTypeClass::AddRef  this=?$TClassFactory@VIsometricTileTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_IsometricTileTypeClass::AddRef(_TClassFactory_VIsometricTileTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c2f4e*/
}



// ==== 0x006C2F60  _TClassFactory_VIsometricTileTypeClass::GetClassName  this=?$TClassFactory@VIsometricTileTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_IsometricTileTypeClass::GetClassName(_TClassFactory_VIsometricTileTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c2f70*/
  if ( !v1 ) /*0x6c2f74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c2f77*/
  return v1; /*0x6c2f81*/
}



// ==== 0x006C2F90  _TClassFactory_VIsometricTileTypeClass::GetClassIdentifier  this=?$TClassFactory@VIsometricTileTypeClass@@  sig=csp ====
int __thiscall TClassFactory_IsometricTileTypeClass::GetClassIdentifier(
        _TClassFactory_VIsometricTileTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  TerrainTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c2f98*/
    return -2147024809; /*0x6c2f9b*/
  *v9 = 0; /*0x6c2fa8*/
  if ( a3 ) /*0x6c2fb0*/
    return -2147221232; /*0x6c2fb3*/
  v5 = (TerrainTypeClass *)__2_YAPAXI_Z(0x30Cu); /*0x6c2fc1*/
  if ( !v5 ) /*0x6c2fcb*/
    return -2147024882; /*0x6c2fcb*/
  v6 = TerrainTypeClass::Construct(v5, 0, 0, 0, 0, 0); /*0x6c2fd9*/
  v7 = v6; /*0x6c2fde*/
  if ( !v6 ) /*0x6c2fe2*/
    return -2147024882; /*0x6c2fe5*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c2ff9*/
  if ( v8 < 0 ) /*0x6c2ffd*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c3005*/
  return v8; /*0x6c2f9a*/
}



// ==== 0x006C3010  _TClassFactory_VIsometricTileTypeClass::GetSize  this=?$TClassFactory@VIsometricTileTypeClass@@  sig=csp ====
int __thiscall TClassFactory_IsometricTileTypeClass::GetSize(_TClassFactory_VIsometricTileTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c301a*/
  if ( v5 ) /*0x6c301d*/
    v3 = v2 + 1; /*0x6c301f*/
  else
    v3 = v2 - 1; /*0x6c3028*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c3020*/
  return 0; /*0x6c3025*/
}



// ==== 0x006C3040  ObjectClass::WinMain_Helper_6C3040  this=?$TClassFactory@VOverlayTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3040(ObjectClass *this)
{
  this->? = 0; /*0x6c3042*/
  this->AbstractClass = &TClassFactory<OverlayTypeClass>::`vftable'; /*0x6c3049*/
  return &this->AbstractClass; /*0x6c304f*/
}



// ==== 0x006C3050  _TClassFactory_VOverlayTypeClass::CreateTClassFactory_OverlayTypeClass  this=?$TClassFactory@VOverlayTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_OverlayTypeClass(_TClassFactory_VOverlayTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3057*/
    return -2147467261; /*0x6c3059*/
  *v4 = 0; /*0x6c3076*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3092*/
    *v4 = a2; /*0x6c3096*/
  if ( !*v4 ) /*0x6c3098*/
    return -2147467262; /*0x6c30a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c30ac*/
  return 0; /*0x6c305e*/
}



// ==== 0x006C30C0  _TClassFactory_VOverlayTypeClass::AddRef  this=?$TClassFactory@VOverlayTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_OverlayTypeClass::AddRef(_TClassFactory_VOverlayTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c30ce*/
}



// ==== 0x006C30E0  _TClassFactory_VOverlayTypeClass::GetClassName  this=?$TClassFactory@VOverlayTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_OverlayTypeClass::GetClassName(_TClassFactory_VOverlayTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c30f0*/
  if ( !v1 ) /*0x6c30f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c30f7*/
  return v1; /*0x6c3101*/
}



// ==== 0x006C3110  _TClassFactory_VOverlayTypeClass::GetClassIdentifier  this=?$TClassFactory@VOverlayTypeClass@@  sig=csp ====
int __thiscall TClassFactory_OverlayTypeClass::GetClassIdentifier(
        _TClassFactory_VOverlayTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  OverlayTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3118*/
    return -2147024809; /*0x6c311b*/
  *v9 = 0; /*0x6c3128*/
  if ( a3 ) /*0x6c3130*/
    return -2147221232; /*0x6c3133*/
  v5 = (OverlayTypeClass *)__2_YAPAXI_Z(0x2BCu); /*0x6c3141*/
  if ( !v5 ) /*0x6c314b*/
    return -2147024882; /*0x6c314b*/
  v6 = OverlayTypeClass::OverlayTypeClass(v5, 0); /*0x6c3151*/
  v7 = v6; /*0x6c3156*/
  if ( !v6 ) /*0x6c315a*/
    return -2147024882; /*0x6c315d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c3171*/
  if ( v8 < 0 ) /*0x6c3175*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c317d*/
  return v8; /*0x6c311a*/
}



// ==== 0x006C3190  _TClassFactory_VOverlayTypeClass::GetSize  this=?$TClassFactory@VOverlayTypeClass@@  sig=csp ====
int __thiscall TClassFactory_OverlayTypeClass::GetSize(_TClassFactory_VOverlayTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c319a*/
  if ( v5 ) /*0x6c319d*/
    v3 = v2 + 1; /*0x6c319f*/
  else
    v3 = v2 - 1; /*0x6c31a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c31a0*/
  return 0; /*0x6c31a5*/
}



// ==== 0x006C31C0  ObjectClass::WinMain_Helper_6C31C0  this=?$TClassFactory@VSmudgeTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C31C0(ObjectClass *this)
{
  this->? = 0; /*0x6c31c2*/
  this->AbstractClass = &TClassFactory<SmudgeTypeClass>::`vftable'; /*0x6c31c9*/
  return &this->AbstractClass; /*0x6c31cf*/
}



// ==== 0x006C31D0  _TClassFactory_VSmudgeTypeClass::CreateTClassFactory_SmudgeTypeClass  this=?$TClassFactory@VSmudgeTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_SmudgeTypeClass(_TClassFactory_VSmudgeTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c31d7*/
    return -2147467261; /*0x6c31d9*/
  *v4 = 0; /*0x6c31f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3212*/
    *v4 = a2; /*0x6c3216*/
  if ( !*v4 ) /*0x6c3218*/
    return -2147467262; /*0x6c3220*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c322c*/
  return 0; /*0x6c31de*/
}



// ==== 0x006C3240  _TClassFactory_VSmudgeTypeClass::AddRef  this=?$TClassFactory@VSmudgeTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_SmudgeTypeClass::AddRef(_TClassFactory_VSmudgeTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c324e*/
}



// ==== 0x006C3260  _TClassFactory_VSmudgeTypeClass::GetClassName  this=?$TClassFactory@VSmudgeTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_SmudgeTypeClass::GetClassName(_TClassFactory_VSmudgeTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3270*/
  if ( !v1 ) /*0x6c3274*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3277*/
  return v1; /*0x6c3281*/
}



// ==== 0x006C3290  _TClassFactory_VSmudgeTypeClass::GetClassIdentifier  this=?$TClassFactory@VSmudgeTypeClass@@  sig=csp ====
int __thiscall TClassFactory_SmudgeTypeClass::GetClassIdentifier(
        _TClassFactory_VSmudgeTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  char *v5; // eax
  char *v6; // eax
  char *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3298*/
    return -2147024809; /*0x6c329b*/
  *v9 = 0; /*0x6c32a8*/
  if ( a3 ) /*0x6c32b0*/
    return -2147221232; /*0x6c32b3*/
  v5 = (char *)__2_YAPAXI_Z(0x2A4u); /*0x6c32c1*/
  if ( !v5 ) /*0x6c32cb*/
    return -2147024882; /*0x6c32cb*/
  v6 = SmudgeTypeClass::SmudgeTypeClass(v5, 0); /*0x6c32d1*/
  v7 = v6; /*0x6c32d6*/
  if ( !v6 ) /*0x6c32da*/
    return -2147024882; /*0x6c32dd*/
  v8 = (**(int (__stdcall ***)(char *, _DWORD *, _DWORD *))v6)(v6, a4, v9); /*0x6c32f1*/
  if ( v8 < 0 ) /*0x6c32f5*/
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v7 + 32))(v7, 1); /*0x6c32fd*/
  return v8; /*0x6c329a*/
}



// ==== 0x006C3310  _TClassFactory_VSmudgeTypeClass::GetSize  this=?$TClassFactory@VSmudgeTypeClass@@  sig=csp ====
int __thiscall TClassFactory_SmudgeTypeClass::GetSize(_TClassFactory_VSmudgeTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c331a*/
  if ( v5 ) /*0x6c331d*/
    v3 = v2 + 1; /*0x6c331f*/
  else
    v3 = v2 - 1; /*0x6c3328*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c3320*/
  return 0; /*0x6c3325*/
}



// ==== 0x006C3340  ObjectClass::WinMain_Helper_6C3340  this=?$TClassFactory@VUnitClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3340(ObjectClass *this)
{
  this->? = 0; /*0x6c3342*/
  this->AbstractClass = &TClassFactory<UnitClass>::`vftable'; /*0x6c3349*/
  return &this->AbstractClass; /*0x6c334f*/
}



// ==== 0x006C3350  _TClassFactory_VUnitClass::CreateTClassFactory_UnitClass  this=?$TClassFactory@VUnitClass@@  sig=csp ====
int __thiscall CreateTClassFactory_UnitClass(_TClassFactory_VUnitClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3357*/
    return -2147467261; /*0x6c3359*/
  *v4 = 0; /*0x6c3376*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3392*/
    *v4 = a2; /*0x6c3396*/
  if ( !*v4 ) /*0x6c3398*/
    return -2147467262; /*0x6c33a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c33ac*/
  return 0; /*0x6c335e*/
}



// ==== 0x006C33C0  _TClassFactory_VUnitClass::AddRef  this=?$TClassFactory@VUnitClass@@  sig=csp ====
LONG __thiscall TClassFactory_UnitClass::AddRef(_TClassFactory_VUnitClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c33ce*/
}



// ==== 0x006C33E0  _TClassFactory_VUnitClass::GetClassName  this=?$TClassFactory@VUnitClass@@  sig=csp ====
LONG __thiscall TClassFactory_UnitClass::GetClassName(_TClassFactory_VUnitClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c33f0*/
  if ( !v1 ) /*0x6c33f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c33f7*/
  return v1; /*0x6c3401*/
}



// ==== 0x006C3410  _TClassFactory_VUnitClass::ddtor  this=?$TClassFactory@VUnitClass@@  sig=csp ====
int __thiscall TClassFactory_UnitClass::ddtor(_TClassFactory_VUnitClass *this, int a2, int a3, _DWORD *a4)
{
  int *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3418*/
    return -2147024809; /*0x6c341b*/
  *v9 = 0; /*0x6c3428*/
  if ( a3 ) /*0x6c3430*/
    return -2147221232; /*0x6c3433*/
  v5 = (int *)__2_YAPAXI_Z(0x8E8u); /*0x6c3441*/
  if ( !v5 ) /*0x6c344b*/
    return -2147024882; /*0x6c344b*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))UnitClass::Construct(v5, 0, 0); /*0x6c3453*/
  v7 = v6; /*0x6c3458*/
  if ( !v6 ) /*0x6c345c*/
    return -2147024882; /*0x6c345f*/
  v8 = (**v6)(v6, a4, v9); /*0x6c3473*/
  if ( v8 < 0 ) /*0x6c3477*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c347f*/
  return v8; /*0x6c341a*/
}



// ==== 0x006C3490  _TClassFactory_VUnitClass::GetSize  this=?$TClassFactory@VUnitClass@@  sig=csp ====
int __thiscall TClassFactory_UnitClass::GetSize(_TClassFactory_VUnitClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c349a*/
  if ( v5 ) /*0x6c349d*/
    v3 = v2 + 1; /*0x6c349f*/
  else
    v3 = v2 - 1; /*0x6c34a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c34a0*/
  return 0; /*0x6c34a5*/
}



// ==== 0x006C34C0  ObjectClass::WinMain_Helper_6C34C0  this=?$TClassFactory@VBuildingClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C34C0(ObjectClass *this)
{
  this->? = 0; /*0x6c34c2*/
  this->AbstractClass = &TClassFactory<BuildingClass>::`vftable'; /*0x6c34c9*/
  return &this->AbstractClass; /*0x6c34cf*/
}



// ==== 0x006C34D0  _TClassFactory_VBuildingClass::CreateTClassFactory_BuildingClass  this=?$TClassFactory@VBuildingClass@@  sig=csp ====
int __thiscall CreateTClassFactory_BuildingClass(_TClassFactory_VBuildingClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c34d7*/
    return -2147467261; /*0x6c34d9*/
  *v4 = 0; /*0x6c34f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3512*/
    *v4 = a2; /*0x6c3516*/
  if ( !*v4 ) /*0x6c3518*/
    return -2147467262; /*0x6c3520*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c352c*/
  return 0; /*0x6c34de*/
}



// ==== 0x006C3540  _TClassFactory_VBuildingClass::AddRef  this=?$TClassFactory@VBuildingClass@@  sig=csp ====
LONG __thiscall TClassFactory_BuildingClass::AddRef(_TClassFactory_VBuildingClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c354e*/
}



// ==== 0x006C3560  _TClassFactory_VBuildingClass::GetClassName  this=?$TClassFactory@VBuildingClass@@  sig=csp ====
LONG __thiscall TClassFactory_BuildingClass::GetClassName(_TClassFactory_VBuildingClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3570*/
  if ( !v1 ) /*0x6c3574*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3577*/
  return v1; /*0x6c3581*/
}



// ==== 0x006C3590  _TClassFactory_VBuildingClass::ddtor  this=?$TClassFactory@VBuildingClass@@  sig=csp ====
int __thiscall TClassFactory_BuildingClass::ddtor(_TClassFactory_VBuildingClass *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3598*/
    return -2147024809; /*0x6c359b*/
  *v9 = 0; /*0x6c35a8*/
  if ( a3 ) /*0x6c35b0*/
    return -2147221232; /*0x6c35b3*/
  v5 = __2_YAPAXI_Z(0x720u); /*0x6c35c1*/
  if ( !v5 ) /*0x6c35cb*/
    return -2147024882; /*0x6c35cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))BuildingClass::Construct(v5, 0, 0); /*0x6c35d3*/
  v7 = v6; /*0x6c35d8*/
  if ( !v6 ) /*0x6c35dc*/
    return -2147024882; /*0x6c35df*/
  v8 = (**v6)(v6, a4, v9); /*0x6c35f3*/
  if ( v8 < 0 ) /*0x6c35f7*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c35ff*/
  return v8; /*0x6c359a*/
}



// ==== 0x006C3610  _TClassFactory_VBuildingClass::GetSize  this=?$TClassFactory@VBuildingClass@@  sig=csp ====
int __thiscall TClassFactory_BuildingClass::GetSize(_TClassFactory_VBuildingClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c361a*/
  if ( v5 ) /*0x6c361d*/
    v3 = v2 + 1; /*0x6c361f*/
  else
    v3 = v2 - 1; /*0x6c3628*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c3620*/
  return 0; /*0x6c3625*/
}



// ==== 0x006C3640  ObjectClass::WinMain_Helper_6C3640  this=?$TClassFactory@VAircraftClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3640(ObjectClass *this)
{
  this->? = 0; /*0x6c3642*/
  this->AbstractClass = &TClassFactory<AircraftClass>::`vftable'; /*0x6c3649*/
  return &this->AbstractClass; /*0x6c364f*/
}



// ==== 0x006C3650  _TClassFactory_VAircraftClass::CreateTClassFactory_AircraftClass  this=?$TClassFactory@VAircraftClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AircraftClass(_TClassFactory_VAircraftClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3657*/
    return -2147467261; /*0x6c3659*/
  *v4 = 0; /*0x6c3676*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3692*/
    *v4 = a2; /*0x6c3696*/
  if ( !*v4 ) /*0x6c3698*/
    return -2147467262; /*0x6c36a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c36ac*/
  return 0; /*0x6c365e*/
}



// ==== 0x006C36C0  _TClassFactory_VAircraftClass::AddRef  this=?$TClassFactory@VAircraftClass@@  sig=csp ====
LONG __thiscall TClassFactory_AircraftClass::AddRef(_TClassFactory_VAircraftClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c36ce*/
}



// ==== 0x006C36E0  _TClassFactory_VAircraftClass::GetClassName  this=?$TClassFactory@VAircraftClass@@  sig=csp ====
LONG __thiscall TClassFactory_AircraftClass::GetClassName(_TClassFactory_VAircraftClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c36f0*/
  if ( !v1 ) /*0x6c36f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c36f7*/
  return v1; /*0x6c3701*/
}



// ==== 0x006C3710  _TClassFactory_VAircraftClass::ddtor  this=?$TClassFactory@VAircraftClass@@  sig=csp ====
int __thiscall TClassFactory_AircraftClass::ddtor(_TClassFactory_VAircraftClass *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3718*/
    return -2147024809; /*0x6c371b*/
  *v9 = 0; /*0x6c3728*/
  if ( a3 ) /*0x6c3730*/
    return -2147221232; /*0x6c3733*/
  v5 = __2_YAPAXI_Z(0x6D8u); /*0x6c3741*/
  if ( !v5 ) /*0x6c374b*/
    return -2147024882; /*0x6c374b*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))AircraftClass::Construct(v5, (int)v9, 0, 0); /*0x6c3753*/
  v7 = v6; /*0x6c3758*/
  if ( !v6 ) /*0x6c375c*/
    return -2147024882; /*0x6c375f*/
  v8 = (**v6)(v6, a4, v9); /*0x6c3773*/
  if ( v8 < 0 ) /*0x6c3777*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c377f*/
  return v8; /*0x6c371a*/
}



// ==== 0x006C3790  _TClassFactory_VAircraftClass::GetSize  this=?$TClassFactory@VAircraftClass@@  sig=csp ====
int __thiscall TClassFactory_AircraftClass::GetSize(_TClassFactory_VAircraftClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c379a*/
  if ( v5 ) /*0x6c379d*/
    v3 = v2 + 1; /*0x6c379f*/
  else
    v3 = v2 - 1; /*0x6c37a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c37a0*/
  return 0; /*0x6c37a5*/
}



// ==== 0x006C37C0  ObjectClass::WinMain_Helper_6C37C0  this=?$TClassFactory@VInfantryClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C37C0(ObjectClass *this)
{
  this->? = 0; /*0x6c37c2*/
  this->AbstractClass = &TClassFactory<InfantryClass>::`vftable'; /*0x6c37c9*/
  return &this->AbstractClass; /*0x6c37cf*/
}



// ==== 0x006C37D0  _TClassFactory_VInfantryClass::CreateTClassFactory_InfantryClass  this=?$TClassFactory@VInfantryClass@@  sig=csp ====
int __thiscall CreateTClassFactory_InfantryClass(_TClassFactory_VInfantryClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c37d7*/
    return -2147467261; /*0x6c37d9*/
  *v4 = 0; /*0x6c37f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3812*/
    *v4 = a2; /*0x6c3816*/
  if ( !*v4 ) /*0x6c3818*/
    return -2147467262; /*0x6c3820*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c382c*/
  return 0; /*0x6c37de*/
}



// ==== 0x006C3840  _TClassFactory_VInfantryClass::AddRef  this=?$TClassFactory@VInfantryClass@@  sig=csp ====
LONG __thiscall TClassFactory_InfantryClass::AddRef(_TClassFactory_VInfantryClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c384e*/
}



// ==== 0x006C3860  _TClassFactory_VInfantryClass::GetClassName  this=?$TClassFactory@VInfantryClass@@  sig=csp ====
LONG __thiscall TClassFactory_InfantryClass::GetClassName(_TClassFactory_VInfantryClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3870*/
  if ( !v1 ) /*0x6c3874*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3877*/
  return v1; /*0x6c3881*/
}



// ==== 0x006C3890  _TClassFactory_VInfantryClass::ddtor  this=?$TClassFactory@VInfantryClass@@  sig=csp ====
int __thiscall TClassFactory_InfantryClass::ddtor(_TClassFactory_VInfantryClass *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3898*/
    return -2147024809; /*0x6c389b*/
  *v9 = 0; /*0x6c38a8*/
  if ( a3 ) /*0x6c38b0*/
    return -2147221232; /*0x6c38b3*/
  v5 = __2_YAPAXI_Z(0x6F0u); /*0x6c38c1*/
  if ( !v5 ) /*0x6c38cb*/
    return -2147024882; /*0x6c38cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))InfantryClass::Construct(v5, (int)v9, 0, 0); /*0x6c38d3*/
  v7 = v6; /*0x6c38d8*/
  if ( !v6 ) /*0x6c38dc*/
    return -2147024882; /*0x6c38df*/
  v8 = (**v6)(v6, a4, v9); /*0x6c38f3*/
  if ( v8 < 0 ) /*0x6c38f7*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c38ff*/
  return v8; /*0x6c389a*/
}



// ==== 0x006C3910  _TClassFactory_VInfantryClass::GetSize  this=?$TClassFactory@VInfantryClass@@  sig=csp ====
int __thiscall TClassFactory_InfantryClass::GetSize(_TClassFactory_VInfantryClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c391a*/
  if ( v5 ) /*0x6c391d*/
    v3 = v2 + 1; /*0x6c391f*/
  else
    v3 = v2 - 1; /*0x6c3928*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c3920*/
  return 0; /*0x6c3925*/
}



// ==== 0x006C3940  ObjectClass::WinMain_Helper_6C3940  this=?$TClassFactory@VAnimClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3940(ObjectClass *this)
{
  this->? = 0; /*0x6c3942*/
  this->AbstractClass = &TClassFactory<AnimClass>::`vftable'; /*0x6c3949*/
  return &this->AbstractClass; /*0x6c394f*/
}



// ==== 0x006C3950  _TClassFactory_VAnimClass::CreateTClassFactory_AnimClass  this=?$TClassFactory@VAnimClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AnimClass(_TClassFactory_VAnimClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3957*/
    return -2147467261; /*0x6c3959*/
  *v4 = 0; /*0x6c3976*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3992*/
    *v4 = a2; /*0x6c3996*/
  if ( !*v4 ) /*0x6c3998*/
    return -2147467262; /*0x6c39a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c39ac*/
  return 0; /*0x6c395e*/
}



// ==== 0x006C39C0  _TClassFactory_VAnimClass::AddRef  this=?$TClassFactory@VAnimClass@@  sig=csp ====
LONG __thiscall TClassFactory_AnimClass::AddRef(_TClassFactory_VAnimClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c39ce*/
}



// ==== 0x006C39E0  _TClassFactory_VAnimClass::GetClassName  this=?$TClassFactory@VAnimClass@@  sig=csp ====
LONG __thiscall TClassFactory_AnimClass::GetClassName(_TClassFactory_VAnimClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c39f0*/
  if ( !v1 ) /*0x6c39f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c39f7*/
  return v1; /*0x6c3a01*/
}



// ==== 0x006C3A10  _TClassFactory_VAnimClass::ddtor  this=?$TClassFactory@VAnimClass@@  sig=csp ====
int __thiscall TClassFactory_AnimClass::ddtor(_TClassFactory_VAnimClass *this, int a2, int a3, _DWORD *a4)
{
  AnimClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3a18*/
    return -2147024809; /*0x6c3a1b*/
  *v9 = 0; /*0x6c3a28*/
  if ( a3 ) /*0x6c3a30*/
    return -2147221232; /*0x6c3a33*/
  v5 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6c3a41*/
  if ( !v5 ) /*0x6c3a4b*/
    return -2147024882; /*0x6c3a4b*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))AnimClass::SimpleCtor(v5); /*0x6c3a4f*/
  v7 = v6; /*0x6c3a54*/
  if ( !v6 ) /*0x6c3a58*/
    return -2147024882; /*0x6c3a5b*/
  v8 = (**v6)(v6, a4, v9); /*0x6c3a6f*/
  if ( v8 < 0 ) /*0x6c3a73*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c3a7b*/
  return v8; /*0x6c3a1a*/
}



// ==== 0x006C3A90  _TClassFactory_VAnimClass::GetSize  this=?$TClassFactory@VAnimClass@@  sig=csp ====
int __thiscall TClassFactory_AnimClass::GetSize(_TClassFactory_VAnimClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c3a9a*/
  if ( v5 ) /*0x6c3a9d*/
    v3 = v2 + 1; /*0x6c3a9f*/
  else
    v3 = v2 - 1; /*0x6c3aa8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c3aa0*/
  return 0; /*0x6c3aa5*/
}



// ==== 0x006C3AC0  ObjectClass::WinMain_Helper_6C3AC0  this=?$TClassFactory@VAnimTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3AC0(ObjectClass *this)
{
  this->? = 0; /*0x6c3ac2*/
  this->AbstractClass = &TClassFactory<AnimTypeClass>::`vftable'; /*0x6c3ac9*/
  return &this->AbstractClass; /*0x6c3acf*/
}



// ==== 0x006C3AD0  _TClassFactory_VAnimTypeClass::CreateTClassFactory_AnimTypeClass  this=?$TClassFactory@VAnimTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AnimTypeClass(_TClassFactory_VAnimTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3ad7*/
    return -2147467261; /*0x6c3ad9*/
  *v4 = 0; /*0x6c3af6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3b12*/
    *v4 = a2; /*0x6c3b16*/
  if ( !*v4 ) /*0x6c3b18*/
    return -2147467262; /*0x6c3b20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c3b2c*/
  return 0; /*0x6c3ade*/
}



// ==== 0x006C3B40  _TClassFactory_VAnimTypeClass::AddRef  this=?$TClassFactory@VAnimTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AnimTypeClass::AddRef(_TClassFactory_VAnimTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3b4e*/
}



// ==== 0x006C3B60  _TClassFactory_VAnimTypeClass::GetClassName  this=?$TClassFactory@VAnimTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AnimTypeClass::GetClassName(_TClassFactory_VAnimTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3b70*/
  if ( !v1 ) /*0x6c3b74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3b77*/
  return v1; /*0x6c3b81*/
}



// ==== 0x006C3B90  _TClassFactory_VAnimTypeClass::GetClassIdentifier  this=?$TClassFactory@VAnimTypeClass@@  sig=csp ====
int __thiscall TClassFactory_AnimTypeClass::GetClassIdentifier(
        _TClassFactory_VAnimTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  AnimTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3b98*/
    return -2147024809; /*0x6c3b9b*/
  *v9 = 0; /*0x6c3ba8*/
  if ( a3 ) /*0x6c3bb0*/
    return -2147221232; /*0x6c3bb3*/
  v5 = (AnimTypeClass *)__2_YAPAXI_Z(0x378u); /*0x6c3bc1*/
  if ( !v5 ) /*0x6c3bcb*/
    return -2147024882; /*0x6c3bcb*/
  v6 = AnimTypeClass::Construct(v5, 0); /*0x6c3bd1*/
  v7 = v6; /*0x6c3bd6*/
  if ( !v6 ) /*0x6c3bda*/
    return -2147024882; /*0x6c3bdd*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c3bf1*/
  if ( v8 < 0 ) /*0x6c3bf5*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c3bfd*/
  return v8; /*0x6c3b9a*/
}



// ==== 0x006C3C10  _TClassFactory_VAnimTypeClass::GetSize  this=?$TClassFactory@VAnimTypeClass@@  sig=csp ====
int __thiscall TClassFactory_AnimTypeClass::GetSize(_TClassFactory_VAnimTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c3c1a*/
  if ( v5 ) /*0x6c3c1d*/
    v3 = v2 + 1; /*0x6c3c1f*/
  else
    v3 = v2 - 1; /*0x6c3c28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c3c20*/
  return 0; /*0x6c3c25*/
}



// ==== 0x006C3C40  ObjectClass::WinMain_Helper_6C3C40  this=?$TClassFactory@VHouseTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3C40(ObjectClass *this)
{
  this->? = 0; /*0x6c3c42*/
  this->AbstractClass = &TClassFactory<HouseTypeClass>::`vftable'; /*0x6c3c49*/
  return &this->AbstractClass; /*0x6c3c4f*/
}



// ==== 0x006C3C50  _TClassFactory_VHouseTypeClass::CreateTClassFactory_HouseTypeClass  this=?$TClassFactory@VHouseTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_HouseTypeClass(_TClassFactory_VHouseTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3c57*/
    return -2147467261; /*0x6c3c59*/
  *v4 = 0; /*0x6c3c76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3c92*/
    *v4 = a2; /*0x6c3c96*/
  if ( !*v4 ) /*0x6c3c98*/
    return -2147467262; /*0x6c3ca0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c3cac*/
  return 0; /*0x6c3c5e*/
}



// ==== 0x006C3CC0  _TClassFactory_VHouseTypeClass::AddRef  this=?$TClassFactory@VHouseTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_HouseTypeClass::AddRef(_TClassFactory_VHouseTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3cce*/
}



// ==== 0x006C3CE0  _TClassFactory_VHouseTypeClass::GetClassName  this=?$TClassFactory@VHouseTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_HouseTypeClass::GetClassName(_TClassFactory_VHouseTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3cf0*/
  if ( !v1 ) /*0x6c3cf4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3cf7*/
  return v1; /*0x6c3d01*/
}



// ==== 0x006C3D10  _TClassFactory_VHouseTypeClass::GetClassIdentifier  this=?$TClassFactory@VHouseTypeClass@@  sig=csp ====
int __thiscall TClassFactory_HouseTypeClass::GetClassIdentifier(
        _TClassFactory_VHouseTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  SuperWeaponTypeClass *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3d18*/
    return -2147024809; /*0x6c3d1b*/
  *v9 = 0; /*0x6c3d28*/
  if ( a3 ) /*0x6c3d30*/
    return -2147221232; /*0x6c3d33*/
  v5 = (SuperWeaponTypeClass *)__2_YAPAXI_Z(0x1B0u); /*0x6c3d41*/
  if ( !v5 ) /*0x6c3d4b*/
    return -2147024882; /*0x6c3d4b*/
  v6 = SuperWeaponTypeClass::Construct(v5, 0); /*0x6c3d51*/
  v7 = v6; /*0x6c3d56*/
  if ( !v6 ) /*0x6c3d5a*/
    return -2147024882; /*0x6c3d5d*/
  v8 = (**(int (__stdcall ***)(_BYTE *, _DWORD *, _DWORD *))v6)(v6, a4, v9); /*0x6c3d71*/
  if ( v8 < 0 ) /*0x6c3d75*/
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v7 + 32))(v7, 1); /*0x6c3d7d*/
  return v8; /*0x6c3d1a*/
}



// ==== 0x006C3D90  _TClassFactory_VHouseTypeClass::GetSize  this=?$TClassFactory@VHouseTypeClass@@  sig=csp ====
int __thiscall TClassFactory_HouseTypeClass::GetSize(_TClassFactory_VHouseTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c3d9a*/
  if ( v5 ) /*0x6c3d9d*/
    v3 = v2 + 1; /*0x6c3d9f*/
  else
    v3 = v2 - 1; /*0x6c3da8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c3da0*/
  return 0; /*0x6c3da5*/
}



// ==== 0x006C3DC0  ObjectClass::WinMain_Helper_6C3DC0  this=?$TClassFactory@VHouseClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3DC0(ObjectClass *this)
{
  this->? = 0; /*0x6c3dc2*/
  this->AbstractClass = &TClassFactory<HouseClass>::`vftable'; /*0x6c3dc9*/
  return &this->AbstractClass; /*0x6c3dcf*/
}



// ==== 0x006C3DD0  _TClassFactory_VHouseClass::CreateTClassFactory_HouseClass  this=?$TClassFactory@VHouseClass@@  sig=csp ====
int __thiscall CreateTClassFactory_HouseClass(_TClassFactory_VHouseClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3dd7*/
    return -2147467261; /*0x6c3dd9*/
  *v4 = 0; /*0x6c3df6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3e12*/
    *v4 = a2; /*0x6c3e16*/
  if ( !*v4 ) /*0x6c3e18*/
    return -2147467262; /*0x6c3e20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c3e2c*/
  return 0; /*0x6c3dde*/
}



// ==== 0x006C3E40  _TClassFactory_VHouseClass::AddRef  this=?$TClassFactory@VHouseClass@@  sig=csp ====
LONG __thiscall TClassFactory_HouseClass::AddRef(_TClassFactory_VHouseClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3e4e*/
}



// ==== 0x006C3E60  _TClassFactory_VHouseClass::GetClassName  this=?$TClassFactory@VHouseClass@@  sig=csp ====
LONG __thiscall TClassFactory_HouseClass::GetClassName(_TClassFactory_VHouseClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3e70*/
  if ( !v1 ) /*0x6c3e74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3e77*/
  return v1; /*0x6c3e81*/
}



// ==== 0x006C3E90  _TClassFactory_VHouseClass::ddtor  this=?$TClassFactory@VHouseClass@@  sig=csp ====
int __thiscall TClassFactory_HouseClass::ddtor(_TClassFactory_VHouseClass *this, int a2, int a3, _DWORD *a4)
{
  int *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c3e98*/
    return -2147024809; /*0x6c3e9b*/
  *v9 = 0; /*0x6c3ea8*/
  if ( a3 ) /*0x6c3eb0*/
    return -2147221232; /*0x6c3eb3*/
  v5 = (int *)__2_YAPAXI_Z(0x160B8u); /*0x6c3ec1*/
  if ( !v5 ) /*0x6c3ecb*/
    return -2147024882; /*0x6c3ecb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))HouseClass::Construct(v5, 0); /*0x6c3ed1*/
  v7 = v6; /*0x6c3ed6*/
  if ( !v6 ) /*0x6c3eda*/
    return -2147024882; /*0x6c3edd*/
  v8 = (**v6)(v6, a4, v9); /*0x6c3ef1*/
  if ( v8 < 0 ) /*0x6c3ef5*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c3efd*/
  return v8; /*0x6c3e9a*/
}



// ==== 0x006C3F10  _TClassFactory_VHouseClass::GetSize  this=?$TClassFactory@VHouseClass@@  sig=csp ====
int __thiscall TClassFactory_HouseClass::GetSize(_TClassFactory_VHouseClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c3f1a*/
  if ( v5 ) /*0x6c3f1d*/
    v3 = v2 + 1; /*0x6c3f1f*/
  else
    v3 = v2 - 1; /*0x6c3f28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c3f20*/
  return 0; /*0x6c3f25*/
}



// ==== 0x006C3F40  ObjectClass::WinMain_Helper_6C3F40  this=?$TClassFactory@VDriveLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C3F40(ObjectClass *this)
{
  this->? = 0; /*0x6c3f42*/
  this->AbstractClass = &TClassFactory<DriveLocomotionClass>::`vftable'; /*0x6c3f49*/
  return &this->AbstractClass; /*0x6c3f4f*/
}



// ==== 0x006C3F50  _TClassFactory_VDriveLocomotionClass::CreateTClassFactory_DriveLocomotionClass  this=?$TClassFactory@VDriveLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_DriveLocomotionClass(
        _TClassFactory_VDriveLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3f57*/
    return -2147467261; /*0x6c3f59*/
  *v4 = 0; /*0x6c3f76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3f92*/
    *v4 = a2; /*0x6c3f96*/
  if ( !*v4 ) /*0x6c3f98*/
    return -2147467262; /*0x6c3fa0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c3fac*/
  return 0; /*0x6c3f5e*/
}



// ==== 0x006C3FC0  _TClassFactory_VDriveLocomotionClass::AddRef  this=?$TClassFactory@VDriveLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_DriveLocomotionClass::AddRef(_TClassFactory_VDriveLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c3fce*/
}



// ==== 0x006C3FE0  _TClassFactory_VDriveLocomotionClass::GetClassName  this=?$TClassFactory@VDriveLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_DriveLocomotionClass::GetClassName(_TClassFactory_VDriveLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c3ff0*/
  if ( !v1 ) /*0x6c3ff4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c3ff7*/
  return v1; /*0x6c4001*/
}



// ==== 0x006C4010  _TClassFactory_VDriveLocomotionClass::ddtor  this=?$TClassFactory@VDriveLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_DriveLocomotionClass::ddtor(
        _TClassFactory_VDriveLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  LocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4018*/
    return -2147024809; /*0x6c401b*/
  *v9 = 0; /*0x6c4028*/
  if ( a3 ) /*0x6c4030*/
    return -2147221232; /*0x6c4033*/
  v5 = (LocomotionClass *)__2_YAPAXI_Z(0x70u); /*0x6c403e*/
  if ( !v5 ) /*0x6c4048*/
    return -2147024882; /*0x6c4048*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))LocomotionClass::Initialize(v5); /*0x6c404c*/
  v7 = v6; /*0x6c4051*/
  if ( !v6 ) /*0x6c4055*/
    return -2147024882; /*0x6c4058*/
  v8 = (**v6)(v6, a4, v9); /*0x6c406c*/
  if ( v8 < 0 ) /*0x6c4070*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c4078*/
  return v8; /*0x6c401a*/
}



// ==== 0x006C4090  _TClassFactory_VDriveLocomotionClass::GetSize  this=?$TClassFactory@VDriveLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_DriveLocomotionClass::GetSize(_TClassFactory_VDriveLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c409a*/
  if ( v5 ) /*0x6c409d*/
    v3 = v2 + 1; /*0x6c409f*/
  else
    v3 = v2 - 1; /*0x6c40a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c40a0*/
  return 0; /*0x6c40a5*/
}



// ==== 0x006C40C0  ObjectClass::WinMain_Helper_6C40C0  this=?$TClassFactory@VJumpjetLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C40C0(ObjectClass *this)
{
  this->? = 0; /*0x6c40c2*/
  this->AbstractClass = &TClassFactory<JumpjetLocomotionClass>::`vftable'; /*0x6c40c9*/
  return &this->AbstractClass; /*0x6c40cf*/
}



// ==== 0x006C40D0  _TClassFactory_VJumpjetLocomotionClass::CreateTClassFactory_JumpjetLocomotionClass  this=?$TClassFactory@VJumpjetLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_JumpjetLocomotionClass(
        _TClassFactory_VJumpjetLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c40d7*/
    return -2147467261; /*0x6c40d9*/
  *v4 = 0; /*0x6c40f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4112*/
    *v4 = a2; /*0x6c4116*/
  if ( !*v4 ) /*0x6c4118*/
    return -2147467262; /*0x6c4120*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c412c*/
  return 0; /*0x6c40de*/
}



// ==== 0x006C4140  _TClassFactory_VJumpjetLocomotionClass::AddRef  this=?$TClassFactory@VJumpjetLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_JumpjetLocomotionClass::AddRef(_TClassFactory_VJumpjetLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c414e*/
}



// ==== 0x006C4160  _TClassFactory_VJumpjetLocomotionClass::GetClassName  this=?$TClassFactory@VJumpjetLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_JumpjetLocomotionClass::GetClassName(_TClassFactory_VJumpjetLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4170*/
  if ( !v1 ) /*0x6c4174*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4177*/
  return v1; /*0x6c4181*/
}



// ==== 0x006C4190  _TClassFactory_VJumpjetLocomotionClass::ddtor  this=?$TClassFactory@VJumpjetLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_JumpjetLocomotionClass::ddtor(
        _TClassFactory_VJumpjetLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  JumpjetLocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4198*/
    return -2147024809; /*0x6c419b*/
  *v9 = 0; /*0x6c41a8*/
  if ( a3 ) /*0x6c41b0*/
    return -2147221232; /*0x6c41b3*/
  v5 = (JumpjetLocomotionClass *)__2_YAPAXI_Z(0x98u); /*0x6c41c1*/
  if ( !v5 ) /*0x6c41cb*/
    return -2147024882; /*0x6c41cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))LocomotionClass::Update(v5); /*0x6c41cf*/
  v7 = v6; /*0x6c41d4*/
  if ( !v6 ) /*0x6c41d8*/
    return -2147024882; /*0x6c41db*/
  v8 = (**v6)(v6, a4, v9); /*0x6c41ef*/
  if ( v8 < 0 ) /*0x6c41f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c41fb*/
  return v8; /*0x6c419a*/
}



// ==== 0x006C4210  _TClassFactory_VJumpjetLocomotionClass::GetSize  this=?$TClassFactory@VJumpjetLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_JumpjetLocomotionClass::GetSize(_TClassFactory_VJumpjetLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c421a*/
  if ( v5 ) /*0x6c421d*/
    v3 = v2 + 1; /*0x6c421f*/
  else
    v3 = v2 - 1; /*0x6c4228*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c4220*/
  return 0; /*0x6c4225*/
}



// ==== 0x006C4240  ObjectClass::WinMain_Helper_6C4240  this=?$TClassFactory@VHoverLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4240(ObjectClass *this)
{
  this->? = 0; /*0x6c4242*/
  this->AbstractClass = &TClassFactory<HoverLocomotionClass>::`vftable'; /*0x6c4249*/
  return &this->AbstractClass; /*0x6c424f*/
}



// ==== 0x006C4250  _TClassFactory_VHoverLocomotionClass::CreateTClassFactory_HoverLocomotionClass  this=?$TClassFactory@VHoverLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_HoverLocomotionClass(
        _TClassFactory_VHoverLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4257*/
    return -2147467261; /*0x6c4259*/
  *v4 = 0; /*0x6c4276*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4292*/
    *v4 = a2; /*0x6c4296*/
  if ( !*v4 ) /*0x6c4298*/
    return -2147467262; /*0x6c42a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c42ac*/
  return 0; /*0x6c425e*/
}



// ==== 0x006C42C0  _TClassFactory_VHoverLocomotionClass::AddRef  this=?$TClassFactory@VHoverLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_HoverLocomotionClass::AddRef(_TClassFactory_VHoverLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c42ce*/
}



// ==== 0x006C42E0  _TClassFactory_VHoverLocomotionClass::GetClassName  this=?$TClassFactory@VHoverLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_HoverLocomotionClass::GetClassName(_TClassFactory_VHoverLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c42f0*/
  if ( !v1 ) /*0x6c42f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c42f7*/
  return v1; /*0x6c4301*/
}



// ==== 0x006C4310  _TClassFactory_VHoverLocomotionClass::ddtor  this=?$TClassFactory@VHoverLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_HoverLocomotionClass::ddtor(
        _TClassFactory_VHoverLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  LocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4318*/
    return -2147024809; /*0x6c431b*/
  *v9 = 0; /*0x6c4328*/
  if ( a3 ) /*0x6c4330*/
    return -2147221232; /*0x6c4333*/
  v5 = (LocomotionClass *)__2_YAPAXI_Z(0x78u); /*0x6c433e*/
  if ( !v5 ) /*0x6c4348*/
    return -2147024882; /*0x6c4348*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))LocomotionClass::ProcessData(v5); /*0x6c434c*/
  v7 = v6; /*0x6c4351*/
  if ( !v6 ) /*0x6c4355*/
    return -2147024882; /*0x6c4358*/
  v8 = (**v6)(v6, a4, v9); /*0x6c436c*/
  if ( v8 < 0 ) /*0x6c4370*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c4378*/
  return v8; /*0x6c431a*/
}



// ==== 0x006C4390  _TClassFactory_VHoverLocomotionClass::GetSize  this=?$TClassFactory@VHoverLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_HoverLocomotionClass::GetSize(_TClassFactory_VHoverLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c439a*/
  if ( v5 ) /*0x6c439d*/
    v3 = v2 + 1; /*0x6c439f*/
  else
    v3 = v2 - 1; /*0x6c43a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c43a0*/
  return 0; /*0x6c43a5*/
}



// ==== 0x006C43C0  ObjectClass::WinMain_Helper_6C43C0  this=?$TClassFactory@VRocketLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C43C0(ObjectClass *this)
{
  this->? = 0; /*0x6c43c2*/
  this->AbstractClass = &TClassFactory<RocketLocomotionClass>::`vftable'; /*0x6c43c9*/
  return &this->AbstractClass; /*0x6c43cf*/
}



// ==== 0x006C43D0  _TClassFactory_VRocketLocomotionClass::CreateTClassFactory_RocketLocomotionClass  this=?$TClassFactory@VRocketLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_RocketLocomotionClass(
        _TClassFactory_VRocketLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c43d7*/
    return -2147467261; /*0x6c43d9*/
  *v4 = 0; /*0x6c43f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4412*/
    *v4 = a2; /*0x6c4416*/
  if ( !*v4 ) /*0x6c4418*/
    return -2147467262; /*0x6c4420*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c442c*/
  return 0; /*0x6c43de*/
}



// ==== 0x006C4440  _TClassFactory_VRocketLocomotionClass::AddRef  this=?$TClassFactory@VRocketLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_RocketLocomotionClass::AddRef(_TClassFactory_VRocketLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c444e*/
}



// ==== 0x006C4460  _TClassFactory_VRocketLocomotionClass::GetClassName  this=?$TClassFactory@VRocketLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_RocketLocomotionClass::GetClassName(_TClassFactory_VRocketLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4470*/
  if ( !v1 ) /*0x6c4474*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4477*/
  return v1; /*0x6c4481*/
}



// ==== 0x006C4490  _TClassFactory_VRocketLocomotionClass::ddtor  this=?$TClassFactory@VRocketLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_RocketLocomotionClass::ddtor(
        _TClassFactory_VRocketLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  RocketLocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4498*/
    return -2147024809; /*0x6c449b*/
  *v9 = 0; /*0x6c44a8*/
  if ( a3 ) /*0x6c44b0*/
    return -2147221232; /*0x6c44b3*/
  v5 = (RocketLocomotionClass *)__2_YAPAXI_Z(0x60u); /*0x6c44be*/
  if ( !v5 ) /*0x6c44c8*/
    return -2147024882; /*0x6c44c8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))RocketLocomotionClass::RocketLocomotionClass(v5); /*0x6c44cc*/
  v7 = v6; /*0x6c44d1*/
  if ( !v6 ) /*0x6c44d5*/
    return -2147024882; /*0x6c44d8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c44ec*/
  if ( v8 < 0 ) /*0x6c44f0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c44f8*/
  return v8; /*0x6c449a*/
}



// ==== 0x006C4510  _TClassFactory_VRocketLocomotionClass::GetSize  this=?$TClassFactory@VRocketLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_RocketLocomotionClass::GetSize(_TClassFactory_VRocketLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c451a*/
  if ( v5 ) /*0x6c451d*/
    v3 = v2 + 1; /*0x6c451f*/
  else
    v3 = v2 - 1; /*0x6c4528*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c4520*/
  return 0; /*0x6c4525*/
}



// ==== 0x006C4540  ObjectClass::WinMain_Helper_6C4540  this=?$TClassFactory@VTunnelLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4540(ObjectClass *this)
{
  this->? = 0; /*0x6c4542*/
  this->AbstractClass = &TClassFactory<TunnelLocomotionClass>::`vftable'; /*0x6c4549*/
  return &this->AbstractClass; /*0x6c454f*/
}



// ==== 0x006C4550  _TClassFactory_VTunnelLocomotionClass::CreateTClassFactory_TunnelLocomotionClass  this=?$TClassFactory@VTunnelLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TunnelLocomotionClass(
        _TClassFactory_VTunnelLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4557*/
    return -2147467261; /*0x6c4559*/
  *v4 = 0; /*0x6c4576*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4592*/
    *v4 = a2; /*0x6c4596*/
  if ( !*v4 ) /*0x6c4598*/
    return -2147467262; /*0x6c45a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c45ac*/
  return 0; /*0x6c455e*/
}



// ==== 0x006C45C0  _TClassFactory_VTunnelLocomotionClass::AddRef  this=?$TClassFactory@VTunnelLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_TunnelLocomotionClass::AddRef(_TClassFactory_VTunnelLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c45ce*/
}



// ==== 0x006C45E0  _TClassFactory_VTunnelLocomotionClass::GetClassName  this=?$TClassFactory@VTunnelLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_TunnelLocomotionClass::GetClassName(_TClassFactory_VTunnelLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c45f0*/
  if ( !v1 ) /*0x6c45f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c45f7*/
  return v1; /*0x6c4601*/
}



// ==== 0x006C4610  _TClassFactory_VTunnelLocomotionClass::ddtor  this=?$TClassFactory@VTunnelLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_TunnelLocomotionClass::ddtor(
        _TClassFactory_VTunnelLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  TunnelLocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4618*/
    return -2147024809; /*0x6c461b*/
  *v9 = 0; /*0x6c4628*/
  if ( a3 ) /*0x6c4630*/
    return -2147221232; /*0x6c4633*/
  v5 = (TunnelLocomotionClass *)__2_YAPAXI_Z(0x3Cu); /*0x6c463e*/
  if ( !v5 ) /*0x6c4648*/
    return -2147024882; /*0x6c4648*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))SmallFunc_728A00(v5); /*0x6c464c*/
  v7 = v6; /*0x6c4651*/
  if ( !v6 ) /*0x6c4655*/
    return -2147024882; /*0x6c4658*/
  v8 = (**v6)(v6, a4, v9); /*0x6c466c*/
  if ( v8 < 0 ) /*0x6c4670*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c4678*/
  return v8; /*0x6c461a*/
}



// ==== 0x006C4690  _TClassFactory_VTunnelLocomotionClass::GetSize  this=?$TClassFactory@VTunnelLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_TunnelLocomotionClass::GetSize(_TClassFactory_VTunnelLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c469a*/
  if ( v5 ) /*0x6c469d*/
    v3 = v2 + 1; /*0x6c469f*/
  else
    v3 = v2 - 1; /*0x6c46a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c46a0*/
  return 0; /*0x6c46a5*/
}



// ==== 0x006C46C0  ObjectClass::WinMain_Helper_6C46C0  this=?$TClassFactory@VWalkLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C46C0(ObjectClass *this)
{
  this->? = 0; /*0x6c46c2*/
  this->AbstractClass = &TClassFactory<WalkLocomotionClass>::`vftable'; /*0x6c46c9*/
  return &this->AbstractClass; /*0x6c46cf*/
}



// ==== 0x006C46D0  _TClassFactory_VWalkLocomotionClass::CreateTClassFactory_WalkLocomotionClass  this=?$TClassFactory@VWalkLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_WalkLocomotionClass(
        _TClassFactory_VWalkLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c46d7*/
    return -2147467261; /*0x6c46d9*/
  *v4 = 0; /*0x6c46f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4712*/
    *v4 = a2; /*0x6c4716*/
  if ( !*v4 ) /*0x6c4718*/
    return -2147467262; /*0x6c4720*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c472c*/
  return 0; /*0x6c46de*/
}



// ==== 0x006C4740  _TClassFactory_VWalkLocomotionClass::AddRef  this=?$TClassFactory@VWalkLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_WalkLocomotionClass::AddRef(_TClassFactory_VWalkLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c474e*/
}



// ==== 0x006C4760  _TClassFactory_VWalkLocomotionClass::GetClassName  this=?$TClassFactory@VWalkLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_WalkLocomotionClass::GetClassName(_TClassFactory_VWalkLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4770*/
  if ( !v1 ) /*0x6c4774*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4777*/
  return v1; /*0x6c4781*/
}



// ==== 0x006C4790  _TClassFactory_VWalkLocomotionClass::ddtor  this=?$TClassFactory@VWalkLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_WalkLocomotionClass::ddtor(
        _TClassFactory_VWalkLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  VoxelAnimClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4798*/
    return -2147024809; /*0x6c479b*/
  *v9 = 0; /*0x6c47a8*/
  if ( a3 ) /*0x6c47b0*/
    return -2147221232; /*0x6c47b3*/
  v5 = (VoxelAnimClass *)__2_YAPAXI_Z(0x3Cu); /*0x6c47be*/
  if ( !v5 ) /*0x6c47c8*/
    return -2147024882; /*0x6c47c8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))VoxelAnimClass::Reset(v5); /*0x6c47cc*/
  v7 = v6; /*0x6c47d1*/
  if ( !v6 ) /*0x6c47d5*/
    return -2147024882; /*0x6c47d8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c47ec*/
  if ( v8 < 0 ) /*0x6c47f0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c47f8*/
  return v8; /*0x6c479a*/
}



// ==== 0x006C4810  _TClassFactory_VWalkLocomotionClass::GetSize  this=?$TClassFactory@VWalkLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_WalkLocomotionClass::GetSize(_TClassFactory_VWalkLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c481a*/
  if ( v5 ) /*0x6c481d*/
    v3 = v2 + 1; /*0x6c481f*/
  else
    v3 = v2 - 1; /*0x6c4828*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c4820*/
  return 0; /*0x6c4825*/
}



// ==== 0x006C4840  ObjectClass::WinMain_Helper_6C4840  this=?$TClassFactory@VDropPodLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4840(ObjectClass *this)
{
  this->? = 0; /*0x6c4842*/
  this->AbstractClass = &TClassFactory<DropPodLocomotionClass>::`vftable'; /*0x6c4849*/
  return &this->AbstractClass; /*0x6c484f*/
}



// ==== 0x006C4850  _TClassFactory_VDropPodLocomotionClass::CreateTClassFactory_DropPodLocomotionClass  this=?$TClassFactory@VDropPodLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_DropPodLocomotionClass(
        _TClassFactory_VDropPodLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4857*/
    return -2147467261; /*0x6c4859*/
  *v4 = 0; /*0x6c4876*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4892*/
    *v4 = a2; /*0x6c4896*/
  if ( !*v4 ) /*0x6c4898*/
    return -2147467262; /*0x6c48a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c48ac*/
  return 0; /*0x6c485e*/
}



// ==== 0x006C48C0  _TClassFactory_VDropPodLocomotionClass::AddRef  this=?$TClassFactory@VDropPodLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_DropPodLocomotionClass::AddRef(_TClassFactory_VDropPodLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c48ce*/
}



// ==== 0x006C48E0  _TClassFactory_VDropPodLocomotionClass::GetClassName  this=?$TClassFactory@VDropPodLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_DropPodLocomotionClass::GetClassName(_TClassFactory_VDropPodLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c48f0*/
  if ( !v1 ) /*0x6c48f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c48f7*/
  return v1; /*0x6c4901*/
}



// ==== 0x006C4910  _TClassFactory_VDropPodLocomotionClass::ddtor  this=?$TClassFactory@VDropPodLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_DropPodLocomotionClass::ddtor(
        _TClassFactory_VDropPodLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  DropPodLocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4918*/
    return -2147024809; /*0x6c491b*/
  *v9 = 0; /*0x6c4928*/
  if ( a3 ) /*0x6c4930*/
    return -2147221232; /*0x6c4933*/
  v5 = (DropPodLocomotionClass *)__2_YAPAXI_Z(0x30u); /*0x6c493e*/
  if ( !v5 ) /*0x6c4948*/
    return -2147024882; /*0x6c4948*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))SmallFunc_4B5AB0(v5); /*0x6c494c*/
  v7 = v6; /*0x6c4951*/
  if ( !v6 ) /*0x6c4955*/
    return -2147024882; /*0x6c4958*/
  v8 = (**v6)(v6, a4, v9); /*0x6c496c*/
  if ( v8 < 0 ) /*0x6c4970*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c4978*/
  return v8; /*0x6c491a*/
}



// ==== 0x006C4990  _TClassFactory_VDropPodLocomotionClass::GetSize  this=?$TClassFactory@VDropPodLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_DropPodLocomotionClass::GetSize(_TClassFactory_VDropPodLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c499a*/
  if ( v5 ) /*0x6c499d*/
    v3 = v2 + 1; /*0x6c499f*/
  else
    v3 = v2 - 1; /*0x6c49a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c49a0*/
  return 0; /*0x6c49a5*/
}



// ==== 0x006C49C0  ObjectClass::WinMain_Helper_6C49C0  this=?$TClassFactory@VFlyLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C49C0(ObjectClass *this)
{
  this->? = 0; /*0x6c49c2*/
  this->AbstractClass = &TClassFactory<FlyLocomotionClass>::`vftable'; /*0x6c49c9*/
  return &this->AbstractClass; /*0x6c49cf*/
}



// ==== 0x006C49D0  _TClassFactory_VFlyLocomotionClass::CreateTClassFactory_FlyLocomotionClass  this=?$TClassFactory@VFlyLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_FlyLocomotionClass(
        _TClassFactory_VFlyLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c49d7*/
    return -2147467261; /*0x6c49d9*/
  *v4 = 0; /*0x6c49f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4a12*/
    *v4 = a2; /*0x6c4a16*/
  if ( !*v4 ) /*0x6c4a18*/
    return -2147467262; /*0x6c4a20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c4a2c*/
  return 0; /*0x6c49de*/
}



// ==== 0x006C4A40  _TClassFactory_VFlyLocomotionClass::AddRef  this=?$TClassFactory@VFlyLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_FlyLocomotionClass::AddRef(_TClassFactory_VFlyLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4a4e*/
}



// ==== 0x006C4A60  _TClassFactory_VFlyLocomotionClass::GetClassName  this=?$TClassFactory@VFlyLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_FlyLocomotionClass::GetClassName(_TClassFactory_VFlyLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4a70*/
  if ( !v1 ) /*0x6c4a74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4a77*/
  return v1; /*0x6c4a81*/
}



// ==== 0x006C4A90  _TClassFactory_VFlyLocomotionClass::ddtor  this=?$TClassFactory@VFlyLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_FlyLocomotionClass::ddtor(
        _TClassFactory_VFlyLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  FlyLocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4a98*/
    return -2147024809; /*0x6c4a9b*/
  *v9 = 0; /*0x6c4aa8*/
  if ( a3 ) /*0x6c4ab0*/
    return -2147221232; /*0x6c4ab3*/
  v5 = (FlyLocomotionClass *)__2_YAPAXI_Z(0x60u); /*0x6c4abe*/
  if ( !v5 ) /*0x6c4ac8*/
    return -2147024882; /*0x6c4ac8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))FlyLocomotionClass::LocomotionClass(v5); /*0x6c4acc*/
  v7 = v6; /*0x6c4ad1*/
  if ( !v6 ) /*0x6c4ad5*/
    return -2147024882; /*0x6c4ad8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c4aec*/
  if ( v8 < 0 ) /*0x6c4af0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c4af8*/
  return v8; /*0x6c4a9a*/
}



// ==== 0x006C4B10  _TClassFactory_VFlyLocomotionClass::GetSize  this=?$TClassFactory@VFlyLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_FlyLocomotionClass::GetSize(_TClassFactory_VFlyLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c4b1a*/
  if ( v5 ) /*0x6c4b1d*/
    v3 = v2 + 1; /*0x6c4b1f*/
  else
    v3 = v2 - 1; /*0x6c4b28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c4b20*/
  return 0; /*0x6c4b25*/
}



// ==== 0x006C4B40  ObjectClass::WinMain_Helper_6C4B40  this=?$TClassFactory@VTeleportLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4B40(ObjectClass *this)
{
  this->? = 0; /*0x6c4b42*/
  this->AbstractClass = &TClassFactory<TeleportLocomotionClass>::`vftable'; /*0x6c4b49*/
  return &this->AbstractClass; /*0x6c4b4f*/
}



// ==== 0x006C4B50  _TClassFactory_VTeleportLocomotionClass::CreateTClassFactory_TeleportLocomotionClass  this=?$TClassFactory@VTeleportLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TeleportLocomotionClass(
        _TClassFactory_VTeleportLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4b57*/
    return -2147467261; /*0x6c4b59*/
  *v4 = 0; /*0x6c4b76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4b92*/
    *v4 = a2; /*0x6c4b96*/
  if ( !*v4 ) /*0x6c4b98*/
    return -2147467262; /*0x6c4ba0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c4bac*/
  return 0; /*0x6c4b5e*/
}



// ==== 0x006C4BC0  _TClassFactory_VTeleportLocomotionClass::AddRef  this=?$TClassFactory@VTeleportLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_TeleportLocomotionClass::AddRef(_TClassFactory_VTeleportLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4bce*/
}



// ==== 0x006C4BE0  _TClassFactory_VTeleportLocomotionClass::GetClassName  this=?$TClassFactory@VTeleportLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_TeleportLocomotionClass::GetClassName(_TClassFactory_VTeleportLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4bf0*/
  if ( !v1 ) /*0x6c4bf4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4bf7*/
  return v1; /*0x6c4c01*/
}



// ==== 0x006C4C10  _TClassFactory_VTeleportLocomotionClass::ddtor  this=?$TClassFactory@VTeleportLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_TeleportLocomotionClass::ddtor(
        _TClassFactory_VTeleportLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  TeleportLocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4c18*/
    return -2147024809; /*0x6c4c1b*/
  *v9 = 0; /*0x6c4c28*/
  if ( a3 ) /*0x6c4c30*/
    return -2147221232; /*0x6c4c33*/
  v5 = (TeleportLocomotionClass *)__2_YAPAXI_Z(0x4Cu); /*0x6c4c3e*/
  if ( !v5 ) /*0x6c4c48*/
    return -2147024882; /*0x6c4c48*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))TeleportLocomotionClass::TeleportLocomotionClass(v5); /*0x6c4c4c*/
  v7 = v6; /*0x6c4c51*/
  if ( !v6 ) /*0x6c4c55*/
    return -2147024882; /*0x6c4c58*/
  v8 = (**v6)(v6, a4, v9); /*0x6c4c6c*/
  if ( v8 < 0 ) /*0x6c4c70*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c4c78*/
  return v8; /*0x6c4c1a*/
}



// ==== 0x006C4C90  _TClassFactory_VTeleportLocomotionClass::GetSize  this=?$TClassFactory@VTeleportLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_TeleportLocomotionClass::GetSize(_TClassFactory_VTeleportLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c4c9a*/
  if ( v5 ) /*0x6c4c9d*/
    v3 = v2 + 1; /*0x6c4c9f*/
  else
    v3 = v2 - 1; /*0x6c4ca8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c4ca0*/
  return 0; /*0x6c4ca5*/
}



// ==== 0x006C4CC0  ObjectClass::WinMain_Helper_6C4CC0  this=?$TClassFactory@VMechLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4CC0(ObjectClass *this)
{
  this->? = 0; /*0x6c4cc2*/
  this->AbstractClass = &TClassFactory<MechLocomotionClass>::`vftable'; /*0x6c4cc9*/
  return &this->AbstractClass; /*0x6c4ccf*/
}



// ==== 0x006C4CD0  _TClassFactory_VMechLocomotionClass::CreateTClassFactory_MechLocomotionClass  this=?$TClassFactory@VMechLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_MechLocomotionClass(
        _TClassFactory_VMechLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4cd7*/
    return -2147467261; /*0x6c4cd9*/
  *v4 = 0; /*0x6c4cf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4d12*/
    *v4 = a2; /*0x6c4d16*/
  if ( !*v4 ) /*0x6c4d18*/
    return -2147467262; /*0x6c4d20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c4d2c*/
  return 0; /*0x6c4cde*/
}



// ==== 0x006C4D40  _TClassFactory_VMechLocomotionClass::AddRef  this=?$TClassFactory@VMechLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_MechLocomotionClass::AddRef(_TClassFactory_VMechLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4d4e*/
}



// ==== 0x006C4D60  _TClassFactory_VMechLocomotionClass::GetClassName  this=?$TClassFactory@VMechLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_MechLocomotionClass::GetClassName(_TClassFactory_VMechLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4d70*/
  if ( !v1 ) /*0x6c4d74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4d77*/
  return v1; /*0x6c4d81*/
}



// ==== 0x006C4D90  _TClassFactory_VMechLocomotionClass::ddtor  this=?$TClassFactory@VMechLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_MechLocomotionClass::ddtor(
        _TClassFactory_VMechLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  MechLocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4d98*/
    return -2147024809; /*0x6c4d9b*/
  *v9 = 0; /*0x6c4da8*/
  if ( a3 ) /*0x6c4db0*/
    return -2147221232; /*0x6c4db3*/
  v5 = (MechLocomotionClass *)__2_YAPAXI_Z(0x34u); /*0x6c4dbe*/
  if ( !v5 ) /*0x6c4dc8*/
    return -2147024882; /*0x6c4dc8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))SmallFunc_5AFEF0(v5); /*0x6c4dcc*/
  v7 = v6; /*0x6c4dd1*/
  if ( !v6 ) /*0x6c4dd5*/
    return -2147024882; /*0x6c4dd8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c4dec*/
  if ( v8 < 0 ) /*0x6c4df0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c4df8*/
  return v8; /*0x6c4d9a*/
}



// ==== 0x006C4E10  _TClassFactory_VMechLocomotionClass::GetSize  this=?$TClassFactory@VMechLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_MechLocomotionClass::GetSize(_TClassFactory_VMechLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c4e1a*/
  if ( v5 ) /*0x6c4e1d*/
    v3 = v2 + 1; /*0x6c4e1f*/
  else
    v3 = v2 - 1; /*0x6c4e28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c4e20*/
  return 0; /*0x6c4e25*/
}



// ==== 0x006C4E40  ObjectClass::WinMain_Helper_6C4E40  this=?$TClassFactory@VShipLocomotionClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4E40(ObjectClass *this)
{
  this->? = 0; /*0x6c4e42*/
  this->AbstractClass = &TClassFactory<ShipLocomotionClass>::`vftable'; /*0x6c4e49*/
  return &this->AbstractClass; /*0x6c4e4f*/
}



// ==== 0x006C4E50  _TClassFactory_VShipLocomotionClass::CreateTClassFactory_ShipLocomotionClass  this=?$TClassFactory@VShipLocomotionClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ShipLocomotionClass(
        _TClassFactory_VShipLocomotionClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4e57*/
    return -2147467261; /*0x6c4e59*/
  *v4 = 0; /*0x6c4e76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4e92*/
    *v4 = a2; /*0x6c4e96*/
  if ( !*v4 ) /*0x6c4e98*/
    return -2147467262; /*0x6c4ea0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c4eac*/
  return 0; /*0x6c4e5e*/
}



// ==== 0x006C4EC0  _TClassFactory_VShipLocomotionClass::AddRef  this=?$TClassFactory@VShipLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_ShipLocomotionClass::AddRef(_TClassFactory_VShipLocomotionClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4ece*/
}



// ==== 0x006C4EE0  _TClassFactory_VShipLocomotionClass::GetClassName  this=?$TClassFactory@VShipLocomotionClass@@  sig=csp ====
LONG __thiscall TClassFactory_ShipLocomotionClass::GetClassName(_TClassFactory_VShipLocomotionClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4ef0*/
  if ( !v1 ) /*0x6c4ef4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4ef7*/
  return v1; /*0x6c4f01*/
}



// ==== 0x006C4F10  _TClassFactory_VShipLocomotionClass::ddtor  this=?$TClassFactory@VShipLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_ShipLocomotionClass::ddtor(
        _TClassFactory_VShipLocomotionClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  LocomotionClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4f18*/
    return -2147024809; /*0x6c4f1b*/
  *v9 = 0; /*0x6c4f28*/
  if ( a3 ) /*0x6c4f30*/
    return -2147221232; /*0x6c4f33*/
  v5 = (LocomotionClass *)__2_YAPAXI_Z(0x70u); /*0x6c4f3e*/
  if ( !v5 ) /*0x6c4f48*/
    return -2147024882; /*0x6c4f48*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))LocomotionClass::Process(v5); /*0x6c4f4c*/
  v7 = v6; /*0x6c4f51*/
  if ( !v6 ) /*0x6c4f55*/
    return -2147024882; /*0x6c4f58*/
  v8 = (**v6)(v6, a4, v9); /*0x6c4f6c*/
  if ( v8 < 0 ) /*0x6c4f70*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c4f78*/
  return v8; /*0x6c4f1a*/
}



// ==== 0x006C4F90  _TClassFactory_VShipLocomotionClass::GetSize  this=?$TClassFactory@VShipLocomotionClass@@  sig=csp ====
int __thiscall TClassFactory_ShipLocomotionClass::GetSize(_TClassFactory_VShipLocomotionClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c4f9a*/
  if ( v5 ) /*0x6c4f9d*/
    v3 = v2 + 1; /*0x6c4f9f*/
  else
    v3 = v2 - 1; /*0x6c4fa8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c4fa0*/
  return 0; /*0x6c4fa5*/
}



// ==== 0x006C4FC0  ObjectClass::WinMain_Helper_6C4FC0  this=?$TClassFactory@VBulletClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C4FC0(ObjectClass *this)
{
  this->? = 0; /*0x6c4fc2*/
  this->AbstractClass = &TClassFactory<BulletClass>::`vftable'; /*0x6c4fc9*/
  return &this->AbstractClass; /*0x6c4fcf*/
}



// ==== 0x006C4FD0  _TClassFactory_VBulletClass::CreateTClassFactory_BulletClass  this=?$TClassFactory@VBulletClass@@  sig=csp ====
int __thiscall CreateTClassFactory_BulletClass(_TClassFactory_VBulletClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4fd7*/
    return -2147467261; /*0x6c4fd9*/
  *v4 = 0; /*0x6c4ff6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5012*/
    *v4 = a2; /*0x6c5016*/
  if ( !*v4 ) /*0x6c5018*/
    return -2147467262; /*0x6c5020*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c502c*/
  return 0; /*0x6c4fde*/
}



// ==== 0x006C5040  _TClassFactory_VBulletClass::AddRef  this=?$TClassFactory@VBulletClass@@  sig=csp ====
LONG __thiscall TClassFactory_BulletClass::AddRef(_TClassFactory_VBulletClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c504e*/
}



// ==== 0x006C5060  _TClassFactory_VBulletClass::GetClassName  this=?$TClassFactory@VBulletClass@@  sig=csp ====
LONG __thiscall TClassFactory_BulletClass::GetClassName(_TClassFactory_VBulletClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5070*/
  if ( !v1 ) /*0x6c5074*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5077*/
  return v1; /*0x6c5081*/
}



// ==== 0x006C5090  _TClassFactory_VBulletClass::ddtor  this=?$TClassFactory@VBulletClass@@  sig=csp ====
int __thiscall TClassFactory_BulletClass::ddtor(_TClassFactory_VBulletClass *this, int a2, int a3, _DWORD *a4)
{
  BulletClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5098*/
    return -2147024809; /*0x6c509b*/
  *v9 = 0; /*0x6c50a8*/
  if ( a3 ) /*0x6c50b0*/
    return -2147221232; /*0x6c50b3*/
  v5 = (BulletClass *)__2_YAPAXI_Z(0x160u); /*0x6c50c1*/
  if ( !v5 ) /*0x6c50cb*/
    return -2147024882; /*0x6c50cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))BulletClass::BulletClass(v5); /*0x6c50cf*/
  v7 = v6; /*0x6c50d4*/
  if ( !v6 ) /*0x6c50d8*/
    return -2147024882; /*0x6c50db*/
  v8 = (**v6)(v6, a4, v9); /*0x6c50ef*/
  if ( v8 < 0 ) /*0x6c50f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c50fb*/
  return v8; /*0x6c509a*/
}



// ==== 0x006C5110  _TClassFactory_VBulletClass::GetSize  this=?$TClassFactory@VBulletClass@@  sig=csp ====
int __thiscall TClassFactory_BulletClass::GetSize(_TClassFactory_VBulletClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c511a*/
  if ( v5 ) /*0x6c511d*/
    v3 = v2 + 1; /*0x6c511f*/
  else
    v3 = v2 - 1; /*0x6c5128*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c5120*/
  return 0; /*0x6c5125*/
}



// ==== 0x006C5140  ObjectClass::WinMain_Helper_6C5140  this=?$TClassFactory@VFactoryClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5140(ObjectClass *this)
{
  this->? = 0; /*0x6c5142*/
  this->AbstractClass = &TClassFactory<FactoryClass>::`vftable'; /*0x6c5149*/
  return &this->AbstractClass; /*0x6c514f*/
}



// ==== 0x006C5150  _TClassFactory_VFactoryClass::CreateTClassFactory_FactoryClass  this=?$TClassFactory@VFactoryClass@@  sig=csp ====
int __thiscall CreateTClassFactory_FactoryClass(_TClassFactory_VFactoryClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5157*/
    return -2147467261; /*0x6c5159*/
  *v4 = 0; /*0x6c5176*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5192*/
    *v4 = a2; /*0x6c5196*/
  if ( !*v4 ) /*0x6c5198*/
    return -2147467262; /*0x6c51a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c51ac*/
  return 0; /*0x6c515e*/
}



// ==== 0x006C51C0  _TClassFactory_VFactoryClass::AddRef  this=?$TClassFactory@VFactoryClass@@  sig=csp ====
LONG __thiscall TClassFactory_FactoryClass::AddRef(_TClassFactory_VFactoryClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c51ce*/
}



// ==== 0x006C51E0  _TClassFactory_VFactoryClass::GetClassName  this=?$TClassFactory@VFactoryClass@@  sig=csp ====
LONG __thiscall TClassFactory_FactoryClass::GetClassName(_TClassFactory_VFactoryClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c51f0*/
  if ( !v1 ) /*0x6c51f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c51f7*/
  return v1; /*0x6c5201*/
}



// ==== 0x006C5210  _TClassFactory_VFactoryClass::ddtor  this=?$TClassFactory@VFactoryClass@@  sig=csp ====
int __thiscall TClassFactory_FactoryClass::ddtor(_TClassFactory_VFactoryClass *this, int a2, int a3, _DWORD *a4)
{
  TeamTypeClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5218*/
    return -2147024809; /*0x6c521b*/
  *v9 = 0; /*0x6c5228*/
  if ( a3 ) /*0x6c5230*/
    return -2147221232; /*0x6c5233*/
  v5 = (TeamTypeClass *)__2_YAPAXI_Z(0x74u); /*0x6c523e*/
  if ( !v5 ) /*0x6c5248*/
    return -2147024882; /*0x6c5248*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))TeamTypeClass::Construct(v5); /*0x6c524c*/
  v7 = v6; /*0x6c5251*/
  if ( !v6 ) /*0x6c5255*/
    return -2147024882; /*0x6c5258*/
  v8 = (**v6)(v6, a4, v9); /*0x6c526c*/
  if ( v8 < 0 ) /*0x6c5270*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c5278*/
  return v8; /*0x6c521a*/
}



// ==== 0x006C5290  _TClassFactory_VFactoryClass::GetSize  this=?$TClassFactory@VFactoryClass@@  sig=csp ====
int __thiscall TClassFactory_FactoryClass::GetSize(_TClassFactory_VFactoryClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c529a*/
  if ( v5 ) /*0x6c529d*/
    v3 = v2 + 1; /*0x6c529f*/
  else
    v3 = v2 - 1; /*0x6c52a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c52a0*/
  return 0; /*0x6c52a5*/
}



// ==== 0x006C52C0  ObjectClass::WinMain_Helper_6C52C0  this=?$TClassFactory@VWarheadTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C52C0(ObjectClass *this)
{
  this->? = 0; /*0x6c52c2*/
  this->AbstractClass = &TClassFactory<WarheadTypeClass>::`vftable'; /*0x6c52c9*/
  return &this->AbstractClass; /*0x6c52cf*/
}



// ==== 0x006C52D0  _TClassFactory_VWarheadTypeClass::CreateTClassFactory_WarheadTypeClass  this=?$TClassFactory@VWarheadTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_WarheadTypeClass(_TClassFactory_VWarheadTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c52d7*/
    return -2147467261; /*0x6c52d9*/
  *v4 = 0; /*0x6c52f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5312*/
    *v4 = a2; /*0x6c5316*/
  if ( !*v4 ) /*0x6c5318*/
    return -2147467262; /*0x6c5320*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c532c*/
  return 0; /*0x6c52de*/
}



// ==== 0x006C5340  _TClassFactory_VWarheadTypeClass::AddRef  this=?$TClassFactory@VWarheadTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_WarheadTypeClass::AddRef(_TClassFactory_VWarheadTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c534e*/
}



// ==== 0x006C5360  _TClassFactory_VWarheadTypeClass::GetClassName  this=?$TClassFactory@VWarheadTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_WarheadTypeClass::GetClassName(_TClassFactory_VWarheadTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5370*/
  if ( !v1 ) /*0x6c5374*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5377*/
  return v1; /*0x6c5381*/
}



// ==== 0x006C5390  _TClassFactory_VWarheadTypeClass::GetClassIdentifier  this=?$TClassFactory@VWarheadTypeClass@@  sig=csp ====
int __thiscall TClassFactory_WarheadTypeClass::GetClassIdentifier(
        _TClassFactory_VWarheadTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5398*/
    return -2147024809; /*0x6c539b*/
  *v9 = 0; /*0x6c53a8*/
  if ( a3 ) /*0x6c53b0*/
    return -2147221232; /*0x6c53b3*/
  v5 = __2_YAPAXI_Z(0x1D0u); /*0x6c53c1*/
  if ( !v5 ) /*0x6c53cb*/
    return -2147024882; /*0x6c53cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))WarheadTypeClass::Construct(v5, 0); /*0x6c53d1*/
  v7 = v6; /*0x6c53d6*/
  if ( !v6 ) /*0x6c53da*/
    return -2147024882; /*0x6c53dd*/
  v8 = (**v6)(v6, a4, v9); /*0x6c53f1*/
  if ( v8 < 0 ) /*0x6c53f5*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c53fd*/
  return v8; /*0x6c539a*/
}



// ==== 0x006C5410  _TClassFactory_VWarheadTypeClass::GetSize  this=?$TClassFactory@VWarheadTypeClass@@  sig=csp ====
int __thiscall TClassFactory_WarheadTypeClass::GetSize(_TClassFactory_VWarheadTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c541a*/
  if ( v5 ) /*0x6c541d*/
    v3 = v2 + 1; /*0x6c541f*/
  else
    v3 = v2 - 1; /*0x6c5428*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c5420*/
  return 0; /*0x6c5425*/
}



// ==== 0x006C5440  ObjectClass::WinMain_Helper_6C5440  this=?$TClassFactory@VWeaponTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5440(ObjectClass *this)
{
  this->? = 0; /*0x6c5442*/
  this->AbstractClass = &TClassFactory<WeaponTypeClass>::`vftable'; /*0x6c5449*/
  return &this->AbstractClass; /*0x6c544f*/
}



// ==== 0x006C5450  _TClassFactory_VWeaponTypeClass::CreateTClassFactory_WeaponTypeClass  this=?$TClassFactory@VWeaponTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_WeaponTypeClass(_TClassFactory_VWeaponTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5457*/
    return -2147467261; /*0x6c5459*/
  *v4 = 0; /*0x6c5476*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5492*/
    *v4 = a2; /*0x6c5496*/
  if ( !*v4 ) /*0x6c5498*/
    return -2147467262; /*0x6c54a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c54ac*/
  return 0; /*0x6c545e*/
}



// ==== 0x006C54C0  _TClassFactory_VWeaponTypeClass::AddRef  this=?$TClassFactory@VWeaponTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_WeaponTypeClass::AddRef(_TClassFactory_VWeaponTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c54ce*/
}



// ==== 0x006C54E0  _TClassFactory_VWeaponTypeClass::GetClassName  this=?$TClassFactory@VWeaponTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_WeaponTypeClass::GetClassName(_TClassFactory_VWeaponTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c54f0*/
  if ( !v1 ) /*0x6c54f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c54f7*/
  return v1; /*0x6c5501*/
}



// ==== 0x006C5510  _TClassFactory_VWeaponTypeClass::GetClassIdentifier  this=?$TClassFactory@VWeaponTypeClass@@  sig=csp ====
int __thiscall TClassFactory_WeaponTypeClass::GetClassIdentifier(
        _TClassFactory_VWeaponTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  WeaponTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5518*/
    return -2147024809; /*0x6c551b*/
  *v9 = 0; /*0x6c5528*/
  if ( a3 ) /*0x6c5530*/
    return -2147221232; /*0x6c5533*/
  v5 = (WeaponTypeClass *)__2_YAPAXI_Z(0x160u); /*0x6c5541*/
  if ( !v5 ) /*0x6c554b*/
    return -2147024882; /*0x6c554b*/
  v6 = WeaponTypeClass::Constructor(v5, 0); /*0x6c5551*/
  v7 = v6; /*0x6c5556*/
  if ( !v6 ) /*0x6c555a*/
    return -2147024882; /*0x6c555d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c5571*/
  if ( v8 < 0 ) /*0x6c5575*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c557d*/
  return v8; /*0x6c551a*/
}



// ==== 0x006C5590  _TClassFactory_VWeaponTypeClass::GetSize  this=?$TClassFactory@VWeaponTypeClass@@  sig=csp ====
int __thiscall TClassFactory_WeaponTypeClass::GetSize(_TClassFactory_VWeaponTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c559a*/
  if ( v5 ) /*0x6c559d*/
    v3 = v2 + 1; /*0x6c559f*/
  else
    v3 = v2 - 1; /*0x6c55a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c55a0*/
  return 0; /*0x6c55a5*/
}



// ==== 0x006C55C0  ObjectClass::WinMain_Helper_6C55C0  this=?$TClassFactory@VParticleClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C55C0(ObjectClass *this)
{
  this->? = 0; /*0x6c55c2*/
  this->AbstractClass = &TClassFactory<ParticleClass>::`vftable'; /*0x6c55c9*/
  return &this->AbstractClass; /*0x6c55cf*/
}



// ==== 0x006C55D0  _TClassFactory_VParticleClass::CreateTClassFactory_ParticleClass  this=?$TClassFactory@VParticleClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ParticleClass(_TClassFactory_VParticleClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c55d7*/
    return -2147467261; /*0x6c55d9*/
  *v4 = 0; /*0x6c55f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5612*/
    *v4 = a2; /*0x6c5616*/
  if ( !*v4 ) /*0x6c5618*/
    return -2147467262; /*0x6c5620*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c562c*/
  return 0; /*0x6c55de*/
}



// ==== 0x006C5640  _TClassFactory_VParticleClass::ProcessCharged  this=?$TClassFactory@VParticleClass@@  sig=csp ====
LONG __thiscall SuperWeaponClass::ProcessCharged(_TClassFactory_VParticleClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c564e*/
}



// ==== 0x006C5660  _TClassFactory_VParticleClass::GetClassName  this=?$TClassFactory@VParticleClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleClass::GetClassName(_TClassFactory_VParticleClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5670*/
  if ( !v1 ) /*0x6c5674*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5677*/
  return v1; /*0x6c5681*/
}



// ==== 0x006C5690  _TClassFactory_VParticleClass::ddtor  this=?$TClassFactory@VParticleClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleClass::ddtor(_TClassFactory_VParticleClass *this, int a2, int a3, _DWORD *a4)
{
  ObjectClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5698*/
    return -2147024809; /*0x6c569b*/
  *v9 = 0; /*0x6c56a8*/
  if ( a3 ) /*0x6c56b0*/
    return -2147221232; /*0x6c56b3*/
  v5 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x6c56c1*/
  if ( !v5 ) /*0x6c56cb*/
    return -2147024882; /*0x6c56cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))ObjectClass::ProcessUpdate(v5); /*0x6c56cf*/
  v7 = v6; /*0x6c56d4*/
  if ( !v6 ) /*0x6c56d8*/
    return -2147024882; /*0x6c56db*/
  v8 = (**v6)(v6, a4, v9); /*0x6c56ef*/
  if ( v8 < 0 ) /*0x6c56f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c56fb*/
  return v8; /*0x6c569a*/
}



// ==== 0x006C5710  _TClassFactory_VParticleClass::GetSize  this=?$TClassFactory@VParticleClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleClass::GetSize(_TClassFactory_VParticleClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c571a*/
  if ( v5 ) /*0x6c571d*/
    v3 = v2 + 1; /*0x6c571f*/
  else
    v3 = v2 - 1; /*0x6c5728*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c5720*/
  return 0; /*0x6c5725*/
}



// ==== 0x006C5740  ObjectClass::WinMain_Helper_6C5740  this=?$TClassFactory@VParticleTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5740(ObjectClass *this)
{
  this->? = 0; /*0x6c5742*/
  this->AbstractClass = &TClassFactory<ParticleTypeClass>::`vftable'; /*0x6c5749*/
  return &this->AbstractClass; /*0x6c574f*/
}



// ==== 0x006C5750  _TClassFactory_VParticleTypeClass::CreateTClassFactory_ParticleTypeClass  this=?$TClassFactory@VParticleTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ParticleTypeClass(
        _TClassFactory_VParticleTypeClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5757*/
    return -2147467261; /*0x6c5759*/
  *v4 = 0; /*0x6c5776*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5792*/
    *v4 = a2; /*0x6c5796*/
  if ( !*v4 ) /*0x6c5798*/
    return -2147467262; /*0x6c57a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c57ac*/
  return 0; /*0x6c575e*/
}



// ==== 0x006C57C0  _TClassFactory_VParticleTypeClass::AddRef  this=?$TClassFactory@VParticleTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleTypeClass::AddRef(_TClassFactory_VParticleTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c57ce*/
}



// ==== 0x006C57E0  _TClassFactory_VParticleTypeClass::GetClassName  this=?$TClassFactory@VParticleTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleTypeClass::GetClassName(_TClassFactory_VParticleTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c57f0*/
  if ( !v1 ) /*0x6c57f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c57f7*/
  return v1; /*0x6c5801*/
}



// ==== 0x006C5810  _TClassFactory_VParticleTypeClass::GetClassIdentifier  this=?$TClassFactory@VParticleTypeClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleTypeClass::GetClassIdentifier(
        _TClassFactory_VParticleTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  BuildingTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5818*/
    return -2147024809; /*0x6c581b*/
  *v9 = 0; /*0x6c5828*/
  if ( a3 ) /*0x6c5830*/
    return -2147221232; /*0x6c5833*/
  v5 = (BuildingTypeClass *)__2_YAPAXI_Z(0x318u); /*0x6c5841*/
  if ( !v5 ) /*0x6c584b*/
    return -2147024882; /*0x6c584b*/
  v6 = BuildingTypeClass::Construct(v5, 0); /*0x6c5851*/
  v7 = v6; /*0x6c5856*/
  if ( !v6 ) /*0x6c585a*/
    return -2147024882; /*0x6c585d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c5871*/
  if ( v8 < 0 ) /*0x6c5875*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c587d*/
  return v8; /*0x6c581a*/
}



// ==== 0x006C5890  _TClassFactory_VParticleTypeClass::GetSize  this=?$TClassFactory@VParticleTypeClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleTypeClass::GetSize(_TClassFactory_VParticleTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c589a*/
  if ( v5 ) /*0x6c589d*/
    v3 = v2 + 1; /*0x6c589f*/
  else
    v3 = v2 - 1; /*0x6c58a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c58a0*/
  return 0; /*0x6c58a5*/
}



// ==== 0x006C58C0  ObjectClass::WinMain_Helper_6C58C0  this=?$TClassFactory@VParticleSystemClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C58C0(ObjectClass *this)
{
  this->? = 0; /*0x6c58c2*/
  this->AbstractClass = &TClassFactory<ParticleSystemClass>::`vftable'; /*0x6c58c9*/
  return &this->AbstractClass; /*0x6c58cf*/
}



// ==== 0x006C58D0  _TClassFactory_VParticleSystemClass::CreateTClassFactory_ParticleSystemClass  this=?$TClassFactory@VParticleSystemClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ParticleSystemClass(
        _TClassFactory_VParticleSystemClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c58d7*/
    return -2147467261; /*0x6c58d9*/
  *v4 = 0; /*0x6c58f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5912*/
    *v4 = a2; /*0x6c5916*/
  if ( !*v4 ) /*0x6c5918*/
    return -2147467262; /*0x6c5920*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c592c*/
  return 0; /*0x6c58de*/
}



// ==== 0x006C5940  _TClassFactory_VParticleSystemClass::AddRef  this=?$TClassFactory@VParticleSystemClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleSystemClass::AddRef(_TClassFactory_VParticleSystemClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c594e*/
}



// ==== 0x006C5960  _TClassFactory_VParticleSystemClass::GetClassName  this=?$TClassFactory@VParticleSystemClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleSystemClass::GetClassName(_TClassFactory_VParticleSystemClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5970*/
  if ( !v1 ) /*0x6c5974*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5977*/
  return v1; /*0x6c5981*/
}



// ==== 0x006C5990  _TClassFactory_VParticleSystemClass::ddtor  this=?$TClassFactory@VParticleSystemClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleSystemClass::ddtor(
        _TClassFactory_VParticleSystemClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  ParticleSystemClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5998*/
    return -2147024809; /*0x6c599b*/
  *v9 = 0; /*0x6c59a8*/
  if ( a3 ) /*0x6c59b0*/
    return -2147221232; /*0x6c59b3*/
  v5 = (ParticleSystemClass *)__2_YAPAXI_Z(0x100u); /*0x6c59c1*/
  if ( !v5 ) /*0x6c59cb*/
    return -2147024882; /*0x6c59cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))ParticleClass::ProcessCreation(v5); /*0x6c59cf*/
  v7 = v6; /*0x6c59d4*/
  if ( !v6 ) /*0x6c59d8*/
    return -2147024882; /*0x6c59db*/
  v8 = (**v6)(v6, a4, v9); /*0x6c59ef*/
  if ( v8 < 0 ) /*0x6c59f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c59fb*/
  return v8; /*0x6c599a*/
}



// ==== 0x006C5A10  _TClassFactory_VParticleSystemClass::GetSize  this=?$TClassFactory@VParticleSystemClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleSystemClass::GetSize(_TClassFactory_VParticleSystemClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c5a1a*/
  if ( v5 ) /*0x6c5a1d*/
    v3 = v2 + 1; /*0x6c5a1f*/
  else
    v3 = v2 - 1; /*0x6c5a28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c5a20*/
  return 0; /*0x6c5a25*/
}



// ==== 0x006C5A40  ObjectClass::WinMain_Helper_6C5A40  this=?$TClassFactory@VParticleSystemTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5A40(ObjectClass *this)
{
  this->? = 0; /*0x6c5a42*/
  this->AbstractClass = &TClassFactory<ParticleSystemTypeClass>::`vftable'; /*0x6c5a49*/
  return &this->AbstractClass; /*0x6c5a4f*/
}



// ==== 0x006C5A50  _TClassFactory_VParticleSystemTypeClass::CreateTClassFactory_ParticleSystemTypeClass  this=?$TClassFactory@VParticleSystemTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_ParticleSystemTypeClass(
        _TClassFactory_VParticleSystemTypeClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5a57*/
    return -2147467261; /*0x6c5a59*/
  *v4 = 0; /*0x6c5a76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5a92*/
    *v4 = a2; /*0x6c5a96*/
  if ( !*v4 ) /*0x6c5a98*/
    return -2147467262; /*0x6c5aa0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c5aac*/
  return 0; /*0x6c5a5e*/
}



// ==== 0x006C5AC0  _TClassFactory_VParticleSystemTypeClass::AddRef  this=?$TClassFactory@VParticleSystemTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleSystemTypeClass::AddRef(_TClassFactory_VParticleSystemTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5ace*/
}



// ==== 0x006C5AE0  _TClassFactory_VParticleSystemTypeClass::GetClassName  this=?$TClassFactory@VParticleSystemTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_ParticleSystemTypeClass::GetClassName(_TClassFactory_VParticleSystemTypeClass *this)
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
        _TClassFactory_VParticleSystemTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  OverlayTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5b18*/
    return -2147024809; /*0x6c5b1b*/
  *v9 = 0; /*0x6c5b28*/
  if ( a3 ) /*0x6c5b30*/
    return -2147221232; /*0x6c5b33*/
  v5 = (OverlayTypeClass *)__2_YAPAXI_Z(0x310u); /*0x6c5b41*/
  if ( !v5 ) /*0x6c5b4b*/
    return -2147024882; /*0x6c5b4b*/
  v6 = OverlayTypeClass::Construct(v5, 0); /*0x6c5b51*/
  v7 = v6; /*0x6c5b56*/
  if ( !v6 ) /*0x6c5b5a*/
    return -2147024882; /*0x6c5b5d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c5b71*/
  if ( v8 < 0 ) /*0x6c5b75*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c5b7d*/
  return v8; /*0x6c5b1a*/
}



// ==== 0x006C5B90  _TClassFactory_VParticleSystemTypeClass::GetSize  this=?$TClassFactory@VParticleSystemTypeClass@@  sig=csp ====
int __thiscall TClassFactory_ParticleSystemTypeClass::GetSize(_TClassFactory_VParticleSystemTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c5b9a*/
  if ( v5 ) /*0x6c5b9d*/
    v3 = v2 + 1; /*0x6c5b9f*/
  else
    v3 = v2 - 1; /*0x6c5ba8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c5ba0*/
  return 0; /*0x6c5ba5*/
}



// ==== 0x006C5BC0  ObjectClass::WinMain_Helper_6C5BC0  this=?$TClassFactory@VAITriggerTypeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5BC0(ObjectClass *this)
{
  this->? = 0; /*0x6c5bc2*/
  this->AbstractClass = &TClassFactory<AITriggerTypeClass>::`vftable'; /*0x6c5bc9*/
  return &this->AbstractClass; /*0x6c5bcf*/
}



// ==== 0x006C5BD0  _TClassFactory_VAITriggerTypeClass::CreateTClassFactory_AITriggerTypeClass  this=?$TClassFactory@VAITriggerTypeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AITriggerTypeClass(
        _TClassFactory_VAITriggerTypeClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5bd7*/
    return -2147467261; /*0x6c5bd9*/
  *v4 = 0; /*0x6c5bf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5c12*/
    *v4 = a2; /*0x6c5c16*/
  if ( !*v4 ) /*0x6c5c18*/
    return -2147467262; /*0x6c5c20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c5c2c*/
  return 0; /*0x6c5bde*/
}



// ==== 0x006C5C40  _TClassFactory_VAITriggerTypeClass::AddRef  this=?$TClassFactory@VAITriggerTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AITriggerTypeClass::AddRef(_TClassFactory_VAITriggerTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5c4e*/
}



// ==== 0x006C5C60  _TClassFactory_VAITriggerTypeClass::GetClassName  this=?$TClassFactory@VAITriggerTypeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AITriggerTypeClass::GetClassName(_TClassFactory_VAITriggerTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5c70*/
  if ( !v1 ) /*0x6c5c74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5c77*/
  return v1; /*0x6c5c81*/
}



// ==== 0x006C5C90  _TClassFactory_VAITriggerTypeClass::GetClassIdentifier  this=?$TClassFactory@VAITriggerTypeClass@@  sig=csp ====
int __thiscall TClassFactory_AITriggerTypeClass::GetClassIdentifier(
        _TClassFactory_VAITriggerTypeClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  AnimTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5c98*/
    return -2147024809; /*0x6c5c9b*/
  *v9 = 0; /*0x6c5ca8*/
  if ( a3 ) /*0x6c5cb0*/
    return -2147221232; /*0x6c5cb3*/
  v5 = (AnimTypeClass *)__2_YAPAXI_Z(0x110u); /*0x6c5cc1*/
  if ( !v5 ) /*0x6c5ccb*/
    return -2147024882; /*0x6c5ccb*/
  v6 = AnimTypeClass::Construct2(v5, 0); /*0x6c5cd1*/
  v7 = v6; /*0x6c5cd6*/
  if ( !v6 ) /*0x6c5cda*/
    return -2147024882; /*0x6c5cdd*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c5cf1*/
  if ( v8 < 0 ) /*0x6c5cf5*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c5cfd*/
  return v8; /*0x6c5c9a*/
}



// ==== 0x006C5D10  _TClassFactory_VAITriggerTypeClass::GetSize  this=?$TClassFactory@VAITriggerTypeClass@@  sig=csp ====
int __thiscall TClassFactory_AITriggerTypeClass::GetSize(_TClassFactory_VAITriggerTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c5d1a*/
  if ( v5 ) /*0x6c5d1d*/
    v3 = v2 + 1; /*0x6c5d1f*/
  else
    v3 = v2 - 1; /*0x6c5d28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c5d20*/
  return 0; /*0x6c5d25*/
}



// ==== 0x006C5D40  ObjectClass::WinMain_Helper_6C5D40  this=?$TClassFactory@VNeuronClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5D40(ObjectClass *this)
{
  this->? = 0; /*0x6c5d42*/
  this->AbstractClass = &TClassFactory<NeuronClass>::`vftable'; /*0x6c5d49*/
  return &this->AbstractClass; /*0x6c5d4f*/
}



// ==== 0x006C5D50  _TClassFactory_VNeuronClass::CreateTClassFactory_NeuronClass  this=?$TClassFactory@VNeuronClass@@  sig=csp ====
int __thiscall CreateTClassFactory_NeuronClass(_TClassFactory_VNeuronClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5d57*/
    return -2147467261; /*0x6c5d59*/
  *v4 = 0; /*0x6c5d76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5d92*/
    *v4 = a2; /*0x6c5d96*/
  if ( !*v4 ) /*0x6c5d98*/
    return -2147467262; /*0x6c5da0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c5dac*/
  return 0; /*0x6c5d5e*/
}



// ==== 0x006C5DC0  _TClassFactory_VNeuronClass::AddRef  this=?$TClassFactory@VNeuronClass@@  sig=csp ====
LONG __thiscall TClassFactory_NeuronClass::AddRef(_TClassFactory_VNeuronClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5dce*/
}



// ==== 0x006C5DE0  _TClassFactory_VNeuronClass::GetClassName  this=?$TClassFactory@VNeuronClass@@  sig=csp ====
LONG __thiscall TClassFactory_NeuronClass::GetClassName(_TClassFactory_VNeuronClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5df0*/
  if ( !v1 ) /*0x6c5df4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5df7*/
  return v1; /*0x6c5e01*/
}



// ==== 0x006C5E10  _TClassFactory_VNeuronClass::ddtor  this=?$TClassFactory@VNeuronClass@@  sig=csp ====
int __thiscall TClassFactory_NeuronClass::ddtor(_TClassFactory_VNeuronClass *this, int a2, int a3, _DWORD *a4)
{
  NeuronClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5e18*/
    return -2147024809; /*0x6c5e1b*/
  *v9 = 0; /*0x6c5e28*/
  if ( a3 ) /*0x6c5e30*/
    return -2147221232; /*0x6c5e33*/
  v5 = (NeuronClass *)__2_YAPAXI_Z(0x38u); /*0x6c5e3e*/
  if ( !v5 ) /*0x6c5e48*/
    return -2147024882; /*0x6c5e48*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))NeuronClass::NeuronClass(v5); /*0x6c5e4c*/
  v7 = v6; /*0x6c5e51*/
  if ( !v6 ) /*0x6c5e55*/
    return -2147024882; /*0x6c5e58*/
  v8 = (**v6)(v6, a4, v9); /*0x6c5e6c*/
  if ( v8 < 0 ) /*0x6c5e70*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c5e78*/
  return v8; /*0x6c5e1a*/
}



// ==== 0x006C5E90  _TClassFactory_VNeuronClass::GetSize  this=?$TClassFactory@VNeuronClass@@  sig=csp ====
int __thiscall TClassFactory_NeuronClass::GetSize(_TClassFactory_VNeuronClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c5e9a*/
  if ( v5 ) /*0x6c5e9d*/
    v3 = v2 + 1; /*0x6c5e9f*/
  else
    v3 = v2 - 1; /*0x6c5ea8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c5ea0*/
  return 0; /*0x6c5ea5*/
}



// ==== 0x006C5EC0  ObjectClass::WinMain_Helper_6C5EC0  this=?$TClassFactory@VFoggedObjectClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C5EC0(ObjectClass *this)
{
  this->? = 0; /*0x6c5ec2*/
  this->AbstractClass = &TClassFactory<FoggedObjectClass>::`vftable'; /*0x6c5ec9*/
  return &this->AbstractClass; /*0x6c5ecf*/
}



// ==== 0x006C5ED0  _TClassFactory_VFoggedObjectClass::CreateTClassFactory_FoggedObjectClass  this=?$TClassFactory@VFoggedObjectClass@@  sig=csp ====
int __thiscall CreateTClassFactory_FoggedObjectClass(
        _TClassFactory_VFoggedObjectClass *this,
        const void *a2,
        _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5ed7*/
    return -2147467261; /*0x6c5ed9*/
  *v4 = 0; /*0x6c5ef6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5f12*/
    *v4 = a2; /*0x6c5f16*/
  if ( !*v4 ) /*0x6c5f18*/
    return -2147467262; /*0x6c5f20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c5f2c*/
  return 0; /*0x6c5ede*/
}



// ==== 0x006C5F40  _TClassFactory_VFoggedObjectClass::AddRef  this=?$TClassFactory@VFoggedObjectClass@@  sig=csp ====
LONG __thiscall TClassFactory_FoggedObjectClass::AddRef(_TClassFactory_VFoggedObjectClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c5f4e*/
}



// ==== 0x006C5F60  _TClassFactory_VFoggedObjectClass::GetClassName  this=?$TClassFactory@VFoggedObjectClass@@  sig=csp ====
LONG __thiscall TClassFactory_FoggedObjectClass::GetClassName(_TClassFactory_VFoggedObjectClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c5f70*/
  if ( !v1 ) /*0x6c5f74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c5f77*/
  return v1; /*0x6c5f81*/
}



// ==== 0x006C5F90  _TClassFactory_VFoggedObjectClass::ddtor  this=?$TClassFactory@VFoggedObjectClass@@  sig=csp ====
int __thiscall TClassFactory_FoggedObjectClass::ddtor(
        _TClassFactory_VFoggedObjectClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  ObjectClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c5f98*/
    return -2147024809; /*0x6c5f9b*/
  *v9 = 0; /*0x6c5fa8*/
  if ( a3 ) /*0x6c5fb0*/
    return -2147221232; /*0x6c5fb3*/
  v5 = (ObjectClass *)__2_YAPAXI_Z(0x78u); /*0x6c5fbe*/
  if ( !v5 ) /*0x6c5fc8*/
    return -2147024882; /*0x6c5fc8*/
  v6 = ObjectClass::Construct(v5); /*0x6c5fcc*/
  v7 = v6; /*0x6c5fd1*/
  if ( !v6 ) /*0x6c5fd5*/
    return -2147024882; /*0x6c5fd8*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6c5fec*/
  if ( v8 < 0 ) /*0x6c5ff0*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6c5ff8*/
  return v8; /*0x6c5f9a*/
}



// ==== 0x006C6010  _TClassFactory_VFoggedObjectClass::GetSize  this=?$TClassFactory@VFoggedObjectClass@@  sig=csp ====
int __thiscall TClassFactory_FoggedObjectClass::GetSize(_TClassFactory_VFoggedObjectClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c601a*/
  if ( v5 ) /*0x6c601d*/
    v3 = v2 + 1; /*0x6c601f*/
  else
    v3 = v2 - 1; /*0x6c6028*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c6020*/
  return 0; /*0x6c6025*/
}



// ==== 0x006C6040  ObjectClass::WinMain_Helper_6C6040  this=?$TClassFactory@VAlphaShapeClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6C6040(ObjectClass *this)
{
  this->? = 0; /*0x6c6042*/
  this->AbstractClass = &TClassFactory<AlphaShapeClass>::`vftable'; /*0x6c6049*/
  return &this->AbstractClass; /*0x6c604f*/
}



// ==== 0x006C6050  _TClassFactory_VAlphaShapeClass::CreateTClassFactory_AlphaShapeClass  this=?$TClassFactory@VAlphaShapeClass@@  sig=csp ====
int __thiscall CreateTClassFactory_AlphaShapeClass(_TClassFactory_VAlphaShapeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c6057*/
    return -2147467261; /*0x6c6059*/
  *v4 = 0; /*0x6c6076*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c6092*/
    *v4 = a2; /*0x6c6096*/
  if ( !*v4 ) /*0x6c6098*/
    return -2147467262; /*0x6c60a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6c60ac*/
  return 0; /*0x6c605e*/
}



// ==== 0x006C60C0  _TClassFactory_VAlphaShapeClass::AddRef  this=?$TClassFactory@VAlphaShapeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AlphaShapeClass::AddRef(_TClassFactory_VAlphaShapeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c60ce*/
}



// ==== 0x006C60E0  _TClassFactory_VAlphaShapeClass::GetClassName  this=?$TClassFactory@VAlphaShapeClass@@  sig=csp ====
LONG __thiscall TClassFactory_AlphaShapeClass::GetClassName(_TClassFactory_VAlphaShapeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c60f0*/
  if ( !v1 ) /*0x6c60f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6c60f7*/
  return v1; /*0x6c6101*/
}



// ==== 0x006C6110  _TClassFactory_VAlphaShapeClass::ddtor  this=?$TClassFactory@VAlphaShapeClass@@  sig=csp ====
int __thiscall TClassFactory_AlphaShapeClass::ddtor(_TClassFactory_VAlphaShapeClass *this, int a2, int a3, _DWORD *a4)
{
  AlphaShapeClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c6118*/
    return -2147024809; /*0x6c611b*/
  *v9 = 0; /*0x6c6128*/
  if ( a3 ) /*0x6c6130*/
    return -2147221232; /*0x6c6133*/
  v5 = (AlphaShapeClass *)__2_YAPAXI_Z(0x40u); /*0x6c613e*/
  if ( !v5 ) /*0x6c6148*/
    return -2147024882; /*0x6c6148*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))AlphaShapeClass::Constructor(v5); /*0x6c614c*/
  v7 = v6; /*0x6c6151*/
  if ( !v6 ) /*0x6c6155*/
    return -2147024882; /*0x6c6158*/
  v8 = (**v6)(v6, a4, v9); /*0x6c616c*/
  if ( v8 < 0 ) /*0x6c6170*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c6178*/
  return v8; /*0x6c611a*/
}



// ==== 0x006C6190  _TClassFactory_VAlphaShapeClass::GetSize  this=?$TClassFactory@VAlphaShapeClass@@  sig=csp ====
int __thiscall TClassFactory_AlphaShapeClass::GetSize(_TClassFactory_VAlphaShapeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6c619a*/
  if ( v5 ) /*0x6c619d*/
    v3 = v2 + 1; /*0x6c619f*/
  else
    v3 = v2 - 1; /*0x6c61a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6c61a0*/
  return 0; /*0x6c61a5*/
}



// ==== 0x006C61C0  ObjectClass::COM_SafeRelease  this=ObjectClass  sig=csp ====
int __thiscall COM_SafeRelease(ObjectClass *this)
{
  int result; // eax

  result = (int)this->AbstractClass; /*0x6c61c0*/
  if ( this->AbstractClass ) /*0x6c61c0*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x6c61c9*/
  return result; /*0x6c61cc*/
}



// ==== 0x006C61D0  _VectorClass_K::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_K::AddRef(_VectorClass_K *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x6c61d2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6c61dd*/
  {
    v3 = 0; /*0x6c61df*/
    if ( m_8 <= 0 ) /*0x6c61e3*/
      return 1; /*0x6c6203*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6c61e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6c61eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6c61f4*/
    {
      ++v3; /*0x6c61f6*/
      ++v4; /*0x6c61f7*/
      if ( v3 >= m_8 ) /*0x6c61fc*/
        return 1; /*0x6c61fc*/
    }
  }
  return 0; /*0x6c61fe*/
}



// ==== 0x006C6210  _VectorClass_K::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_K::Release(_VectorClass_K *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6c621c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6c6226*/
    if ( a3 ) /*0x6c622c*/
      v4 = a3; /*0x6c6242*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6c623e*/
    LOBYTE(this->m_C) = 1; /*0x6c6246*/
    if ( v4 ) /*0x6c624a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6c6255*/
      {
        m_8 = this->m_8; /*0x6c625c*/
        if ( a2 < m_8 ) /*0x6c6261*/
          m_8 = a2; /*0x6c6263*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6c6269*/
          ++i; /*0x6c626e*/
        if ( BYTE1(this->m_C) ) /*0x6c627b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6c6286*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6c628e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6c6297*/
      this->m_8 = a2; /*0x6c629f*/
      BYTE1(this->m_C) = a3 == 0; /*0x6c62a2*/
      return 1; /*0x6c62a8*/
    }
    else
    {
      return 0; /*0x6c624f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_K *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6c62b2*/
    return 1; /*0x6c62b8*/
  }
}



// ==== 0x006C62C0  _VectorClass_K::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_K::ddtor(_VectorClass_K *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6c62cd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6c62d3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6c62db*/
  }
  BYTE1(this->m_C) = 0; /*0x6c62de*/
  this->m_8 = 0; /*0x6c62e1*/
}



// ==== 0x006C62F0  _VectorClass_K::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_K::GetSize(_VectorClass_K *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6c62f0*/
    return 0; /*0x6c62f8*/
  m_8 = this->m_8; /*0x6c62fe*/
  result = 0; /*0x6c6301*/
  if ( m_8 <= 0 ) /*0x6c6305*/
    return -1; /*0x6c631c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6c630b*/
  {
    if ( ++result >= m_8 ) /*0x6c631a*/
      return -1; /*0x6c631a*/
  }
  return result; /*0x6c62fa*/
}



// ==== 0x006C6330  _VectorClass_K::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_K::GetCapacity(_VectorClass_K *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6c6330*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6c6345*/
  else
    return 0; /*0x6c6337*/
}



// ==== 0x006C6350  _DynamicVectorClass_K::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_K::SetCapacity(_DynamicVectorClass_K *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6c635c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6c6362*/
    if ( a3 ) /*0x6c6368*/
      v4 = a3; /*0x6c637e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6c637a*/
    LOBYTE(this->m_C) = 1; /*0x6c6382*/
    if ( !v4 ) /*0x6c6386*/
      return 0; /*0x6c63fa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6c6388*/
    {
      m_8 = this->m_8; /*0x6c638f*/
      if ( a2 < m_8 ) /*0x6c6394*/
        m_8 = a2; /*0x6c6396*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6c639c*/
        ++i; /*0x6c63a1*/
      if ( BYTE1(this->m_C) ) /*0x6c63ae*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6c63b9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6c63c1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x6c63ca*/
    this->m_8 = a2; /*0x6c63d2*/
    BYTE1(this->m_C) = a3 == 0; /*0x6c63d5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_K *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6c63de*/
  }
  v7 = this->m_8; /*0x6c63e1*/
  if ( v7 < this->m_10 ) /*0x6c63e9*/
    this->m_10 = v7; /*0x6c63eb*/
  return 1; /*0x6c63ee*/
}



// ==== 0x006C6400  DynamicVector::Add  this=DynamicVector  sig=csp ====
char __thiscall DynamicVector::Add(DynamicVector *this, _DWORD *a2)
{
  int DynamicVector_field_0x8; // ecx
  int v4; // eax
  void *DynamicVector_field_0x10; // eax
  int v7; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x6c6403*/
  if ( (int)this->DynamicVector_field_0x10 >= DynamicVector_field_0x8 ) /*0x6c640b*/
  {
    if ( !this->__pad_C[1] && DynamicVector_field_0x8 ) /*0x6c6416*/
      return 0; /*0x6c6416*/
    v4 = *(_DWORD *)this->__pad_14; /*0x6c6418*/
    if ( v4 <= 0 /*0x6c6428*/
      || !(*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
            this,
            DynamicVector_field_0x8 + v4,
            0) )
    {
      return 0; /*0x6c642f*/
    }
  }
  DynamicVector_field_0x10 = this->DynamicVector_field_0x10; /*0x6c6435*/
  v7 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x6c6438*/
  this->DynamicVector_field_0x10 = (char *)DynamicVector_field_0x10 + 1; /*0x6c643e*/
  *(_DWORD *)(v7 + 4 * (_DWORD)DynamicVector_field_0x10) = *a2; /*0x6c6448*/
  return 1; /*0x6c6431*/
}



// ==== 0x006C6450  _DynamicVectorClass_K::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_K::FindItemIndex(_DynamicVectorClass_K *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6c6450*/
  result = 0; /*0x6c6453*/
  if ( m_10 <= 0 ) /*0x6c6458*/
    return -1; /*0x6c646f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6c645e*/
  {
    if ( ++result >= m_10 ) /*0x6c646d*/
      return -1; /*0x6c646d*/
  }
  return result; /*0x6c6472*/
}



// ==== 0x006C6480  _VectorClass_K::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_K::QueryInterface(_VectorClass_K *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6c6483*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned long>::`vftable'; /*0x6c6486*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6c6490*/
  {
    __3_YAXPAX_Z(v3); /*0x6c6498*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6c64a0*/
  }
  BYTE1(this->m_C) = 0; /*0x6c64ab*/
  this->m_8 = 0; /*0x6c64b1*/
  if ( (a2 & 1) != 0 ) /*0x6c64b8*/
    __3_YAXPAX_Z(this); /*0x6c64bb*/
  return this->__pad_0; /*0x6c64c5*/
}



// ==== 0x006C64D0  _DynamicVectorClass_K::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_K::Constructor(_DynamicVectorClass_K *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6c64d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned long>::`vftable'; /*0x6c64d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6c64e0*/
  {
    __3_YAXPAX_Z(v3); /*0x6c64e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6c64f0*/
  }
  BYTE1(this->m_C) = 0; /*0x6c64fb*/
  this->m_8 = 0; /*0x6c6501*/
  if ( (a2 & 1) != 0 ) /*0x6c6508*/
    __3_YAXPAX_Z(this); /*0x6c650b*/
  return this->__pad_0; /*0x6c6515*/
}



// ==== 0x006C6520  sub_6C6520  this=-  sig=ida-proto ====
int sub_6C6520()
{
  dword_B0BCF8 = 0; /*0x6c6522*/
  dword_B0BCFC = 0; /*0x6c6527*/
  dword_B0BD00 = 0; /*0x6c652c*/
  dword_B0BD04 = 0; /*0x6c6531*/
  return 0; /*0x6c6536*/
}



// ==== 0x006C6540  StaticButtonClass::method_6C6540  this=StaticButtonClass  sig=csp ====
_DWORD *__thiscall sub_6C6540(StaticButtonClass *this, int a2, wchar_t *String, int a4, int a5, int a6, int a7, int a8)
{
  int Instance; // ebx

  GadgetClass::Construct((ShpButtonClass *)this, a5, a6, a7, a8, 0, 0); /*0x6c6560*/
  Buffer::Init((Buffer *)((char *)this + 36), 0, 0); /*0x6c656c*/
  this->q00C = 0; /*0x6c657e*/
  *((_DWORD *)this + 13) = a4; /*0x6c6585*/
  *(_DWORD *)this->__pad_0 = &StaticButtonClass::`vftable'; /*0x6c6588*/
  StaticButtonClass::Draw(this, String, 0); /*0x6c658e*/
  if ( a7 == -1 || a8 == -1 ) /*0x6c659b*/
  {
    Instance = TextRenderer::GetInstance(); /*0x6c65a8*/
    if ( a7 == -1 ) /*0x6c65aa*/
      this->StaticButtonClass_field_0x14 = Text::MeasureWidth(this->q00C, 0); /*0x6c65b9*/
    if ( a8 == -1 ) /*0x6c65bf*/
      *((_DWORD *)this + 6) = *(_DWORD *)(Instance + 28); /*0x6c65c4*/
  }
  return this->__pad_0; /*0x6c65c9*/
}



// ==== 0x006C6640  StaticButtonClass::SetText  this=StaticButtonClass  sig=csp ====
int __thiscall StaticButtonClass::SetText(StaticButtonClass *this, int a2)
{
  if ( !GadgetClass::ClearState((GadgetClass *)this, a2) ) /*0x6c6648*/
    return 0; /*0x6c6672*/
  (*(void (__thiscall **)(StaticButtonClass *))(*(_DWORD *)this->__pad_0 + 136))(this); /*0x6c6655*/
  (*(void (__thiscall **)(StaticButtonClass *, _DWORD))(*(_DWORD *)this->__pad_0 + 140))(this, this->q00C); /*0x6c6663*/
  return 1; /*0x6c666e*/
}



// ==== 0x006C6680  StaticButtonClass::Draw  this=StaticButtonClass  sig=csp ====
void __thiscall StaticButtonClass::Draw(StaticButtonClass *this, wchar_t *String, char a3)
{
  int v4; // eax
  wchar_t *v5; // eax
  int Instance; // edi
  _DWORD *v7; // eax
  int v8[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( this->q00C ) /*0x6c6687*/
  {
    __3_YAXPAX_Z(*((void **)this + 12)); /*0x6c668f*/
    this->q00C = 0; /*0x6c6697*/
  }
  if ( String ) /*0x6c66a4*/
  {
    v4 = wcslen(String); /*0x6c66a7*/
    v5 = (wchar_t *)__2_YAPAXI_Z(2 * v4 + 2); /*0x6c66b1*/
    this->q00C = v5; /*0x6c66b9*/
    if ( v5 ) /*0x6c66be*/
      wcscpy(v5, String); /*0x6c66c2*/
  }
  (*(void (__thiscall **)(StaticButtonClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x6c66ce*/
  if ( a3 ) /*0x6c66d7*/
  {
    if ( this->q00C ) /*0x6c66d9*/
    {
      (*(void (__thiscall **)(StaticButtonClass *))(*(_DWORD *)this->__pad_0 + 136))(this); /*0x6c66e4*/
      Instance = TextRenderer::GetInstance(); /*0x6c66f5*/
      this->StaticButtonClass_field_0x14 = Text::MeasureWidth(this->q00C, 0); /*0x6c6701*/
      *((_DWORD *)this + 6) = *(_DWORD *)(Instance + 28); /*0x6c670f*/
      v7 = Buffer::Init((Buffer *)v8, 0, 0); /*0x6c6712*/
      StaticButtonClass::ReleaseBuffer((int)this + 36, v7); /*0x6c671b*/
      Vector::Clear((int)v8); /*0x6c6724*/
    }
  }
}



// ==== 0x006C6740  StaticButtonClass::HitTest  this=StaticButtonClass  sig=csp ====
char __thiscall StaticButtonClass::HitTest(StaticButtonClass *this)
{
  INIClass *v2; // edi
  int StaticButtonClass_field_0x14; // eax
  int v4; // eax
  int StaticButtonClass_field_0x10; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int StaticButtonClass_field_0x0C; // [esp+8h] [ebp-10h] BYREF
  int v13; // [esp+Ch] [ebp-Ch]
  int v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  v2 = (INIClass *)((char *)this + 36); /*0x6c674a*/
  if ( *((_DWORD *)this + 9) ) /*0x6c6747*/
    goto LABEL_9; /*0x6c674f*/
  StaticButtonClass_field_0x14 = this->StaticButtonClass_field_0x14; /*0x6c6751*/
  if ( StaticButtonClass_field_0x14 > 0 ) /*0x6c6756*/
  {
    StaticButtonClass_field_0x14 = *((_DWORD *)this + 6); /*0x6c6758*/
    if ( StaticButtonClass_field_0x14 > 0 ) /*0x6c675d*/
    {
      if ( this != (StaticButtonClass *)-36 ) /*0x6c6761*/
      {
        v4 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 112))(g_DSurface_Hidden_2); /*0x6c676b*/
        LOBYTE(StaticButtonClass_field_0x14) = (unsigned __int8)INIClass::loadFile( /*0x6c6779*/
                                                                  v2,
                                                                  this->StaticButtonClass_field_0x14
                                                                * *((_DWORD *)this + 6)
                                                                * v4);
      }
      if ( !*(_DWORD *)v2->__pad_0 ) /*0x6c6781*/
        return StaticButtonClass_field_0x14; /*0x6c6781*/
      StaticButtonClass_field_0x10 = this->StaticButtonClass_field_0x10; /*0x6c6786*/
      v6 = this->StaticButtonClass_field_0x14; /*0x6c6789*/
      StaticButtonClass_field_0x0C = this->StaticButtonClass_field_0x0C; /*0x6c678c*/
      v7 = *((_DWORD *)this + 6); /*0x6c6790*/
      v13 = StaticButtonClass_field_0x10; /*0x6c6793*/
      v15 = v7; /*0x6c6797*/
      v14 = v6; /*0x6c67a6*/
      LOBYTE(StaticButtonClass_field_0x14) = Helper::ProcessData( /*0x6c67aa*/
                                               (void **)g_DSurface_Hidden_2,
                                               (int)&StaticButtonClass_field_0x0C,
                                               (int *)v2->__pad_0);
    }
  }
  if ( *(_DWORD *)v2->__pad_0 ) /*0x6c67af*/
  {
LABEL_9:
    v8 = this->StaticButtonClass_field_0x14; /*0x6c67b4*/
    v9 = this->StaticButtonClass_field_0x10; /*0x6c67ba*/
    StaticButtonClass_field_0x0C = this->StaticButtonClass_field_0x0C; /*0x6c67bd*/
    v10 = *((_DWORD *)this + 6); /*0x6c67c1*/
    v14 = v8; /*0x6c67c4*/
    v15 = v10; /*0x6c67ce*/
    v13 = v9; /*0x6c67d7*/
    LOBYTE(StaticButtonClass_field_0x14) = sub_437290( /*0x6c67db*/
                                             (int *)g_DSurface_Hidden_2->__pad_0,
                                             (int)&StaticButtonClass_field_0x0C,
                                             (int *)v2->__pad_0);
  }
  return StaticButtonClass_field_0x14; /*0x6c67e0*/
}



// ==== 0x006C67F0  StaticButtonClass::OnClick  this=StaticButtonClass  sig=csp ====
int *__thiscall StaticButtonClass::OnClick(StaticButtonClass *this, size_t a2)
{
  int *result; // eax
  int v4; // ecx
  int StaticButtonClass_field_0x0C; // edi
  int Type; // eax
  int StaticButtonClass_field_0x10; // edx
  _DWORD *v8; // eax
  int v9; // [esp-10h] [ebp-34h]
  int v10; // [esp-8h] [ebp-2Ch]
  _DWORD v11[2]; // [esp+4h] [ebp-20h] BYREF
  int v12; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v13[16]; // [esp+14h] [ebp-10h] BYREF

  result = (int *)this->q00C; /*0x6c67f6*/
  if ( result ) /*0x6c67fb*/
  {
    v4 = *((_DWORD *)this + 13); /*0x6c67fd*/
    StaticButtonClass_field_0x0C = this->StaticButtonClass_field_0x0C; /*0x6c6801*/
    if ( (v4 & 0x100) != 0 ) /*0x6c6807*/
      StaticButtonClass_field_0x0C += this->StaticButtonClass_field_0x14 / 2; /*0x6c6811*/
    if ( (v4 & 0x200) != 0 ) /*0x6c6816*/
      StaticButtonClass_field_0x0C = StaticButtonClass_field_0x0C + this->StaticButtonClass_field_0x14 - 1; /*0x6c681b*/
    Type = BuildingAnim::GetType(); /*0x6c681f*/
    StaticButtonClass_field_0x10 = this->StaticButtonClass_field_0x10; /*0x6c682a*/
    v11[0] = StaticButtonClass_field_0x0C; /*0x6c682d*/
    v11[1] = StaticButtonClass_field_0x10; /*0x6c6831*/
    v10 = *((_DWORD *)this + 13); /*0x6c6842*/
    v9 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * Type); /*0x6c684b*/
    v8 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x6c6854*/
                     g_DSurface_Hidden_2,
                     v13);
    return TextRenderer::DrawText(&v12, a2, (int)g_DSurface_Hidden_2, v8, (int)v11, v9, 0, v10); /*0x6c6869*/
  }
  return result; /*0x6c6872*/
}



// ==== 0x006C6880  StaticButtonClass::QueryInterface  this=StaticButtonClass  sig=csp ====
_DWORD *__thiscall StaticButtonClass::QueryInterface(StaticButtonClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->q00C; /*0x6c6883*/
  *(_DWORD *)this->__pad_0 = &StaticButtonClass::`vftable'; /*0x6c6886*/
  if ( v3 ) /*0x6c688e*/
    __3_YAXPAX_Z(v3); /*0x6c6891*/
  Vector::Clear((int)this + 36); /*0x6c689c*/
  GadgetClass::Dtor((ShpButtonClass *)this); /*0x6c68a3*/
  if ( (a2 & 1) != 0 ) /*0x6c68ad*/
    __3_YAXPAX_Z(this); /*0x6c68b0*/
  return this->__pad_0; /*0x6c68ba*/
}



// ==== 0x006C68C0  sub_6C68C0  this=-  sig=ida-proto ====
void sub_6C68C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6c68cc*/
  dbl_B0BD30 = Math::Sqrt(v0 + v0); /*0x6c68de*/
}



// ==== 0x006C68F0  sub_6C68F0  this=-  sig=ida-proto ====
void sub_6C68F0()
{
  dbl_B0BDA8 = dbl_B0BD30 / 60.0; /*0x6c68fc*/
}



// ==== 0x006C6910  sub_6C6910  this=-  sig=ida-proto ====
void sub_6C6910()
{
  dbl_B0BD88 = 1.0 / dbl_B0BDA8; /*0x6c691c*/
}



// ==== 0x006C6930  sub_6C6930  this=-  sig=ida-proto ====
void sub_6C6930()
{
  dbl_B0BD80 = 0.0174532925199433 * 45.0; /*0x6c693c*/
}



// ==== 0x006C6950  sub_6C6950  this=-  sig=ida-proto ====
void sub_6C6950()
{
  dbl_B0BD38 = 0.0174532925199433 * 60.0; /*0x6c695c*/
}



// ==== 0x006C6970  sub_6C6970  this=-  sig=ida-proto ====
void sub_6C6970()
{
  dbl_B0BD08 = 0.0174532925199433 * 90.0; /*0x6c697c*/
}



// ==== 0x006C6990  sub_6C6990  this=-  sig=ida-proto ====
__int64 sub_6C6990()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0BD08 - dbl_B0BD38); /*0x6c69a2*/
  result = Math::RoundToInt(v0 * dbl_B0BD30 * 0.5); /*0x6c69b6*/
  dword_B0BDB0 = result; /*0x6c69bb*/
  return result; /*0x6c69c0*/
}



// ==== 0x006C69D0  sub_6C69D0  this=-  sig=ida-proto ====
void sub_6C69D0()
{
  dbl_B0BD40 = Math::ArcTan((double)dword_B0BDB0 * 0.00390625); /*0x6c69e7*/
}



// ==== 0x006C6A00  sub_6C6A00  this=-  sig=ida-proto ====
void sub_6C6A00()
{
  dbl_B0BD70 = Math::ArcTan((double)(2 * dword_B0BDB0) / dbl_B0BD30); /*0x6c6a22*/
}



// ==== 0x006C6A30  sub_6C6A30  this=-  sig=ida-proto ====
__int64 sub_6C6A30()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0BDB0) + 0.5); /*0x6c6a4b*/
  dword_B0BDA4 = result; /*0x6c6a50*/
  return result; /*0x6c6a56*/
}



// ==== 0x006C6A60  sub_6C6A60  this=-  sig=ida-proto ====
int sub_6C6A60()
{
  word_B0BD20 = 0; /*0x6c6a62*/
  word_B0BD22 = 0; /*0x6c6a68*/
  return 0; /*0x6c6a6e*/
}



// ==== 0x006C6A70  sub_6C6A70  this=-  sig=ida-proto ====
int sub_6C6A70()
{
  dword_B0BD60 = 0; /*0x6c6a72*/
  dword_B0BD64 = 0; /*0x6c6a77*/
  dword_B0BD68 = 0; /*0x6c6a7c*/
  return 0; /*0x6c6a81*/
}



// ==== 0x006C6A90  sub_6C6A90  this=-  sig=ida-proto ====
int sub_6C6A90()
{
  dword_B0BDA0 = 0; /*0x6c6a95*/
  dword_B0BD98 = 128; /*0x6c6a9f*/
  dword_B0BD9C = 128; /*0x6c6aa4*/
  return 128; /*0x6c6aa9*/
}



// ==== 0x006C6AB0  sub_6C6AB0  this=-  sig=ida-proto ====
int sub_6C6AB0()
{
  dword_B0BD10 = 0; /*0x6c6ab2*/
  dword_B0BD14 = 0; /*0x6c6ab7*/
  dword_B0BD18 = 0; /*0x6c6abc*/
  dword_B0BD1C = 0; /*0x6c6ac1*/
  return 0; /*0x6c6ac6*/
}



// ==== 0x006C6AD0  sub_6C6AD0  this=-  sig=ida-proto ====
int sub_6C6AD0()
{
  dword_B0BD28 = Timer::GetTicks(); /*0x6c6adf*/
  return atexit(nullsub_234); /*0x6c6aea*/
}



// ==== 0x006C6AF0  nullsub_234  this=-  sig=ida-proto ====
void __cdecl nullsub_234()
{
  ; /*0x6c6af0*/
}



// ==== 0x006C6B00  ObjectClass::Audio_Read_6C6B00  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Audio_Read_6C6B00(ObjectClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  signed int v3; // ecx

  result = &this->AbstractClass; /*0x6c6b04*/
  this->AbstractClass = (void *)*a2; /*0x6c6b08*/
  v3 = a2[1]; /*0x6c6b0a*/
  result[1] = v3; /*0x6c6b13*/
  if ( v3 <= 0x8000 ) /*0x6c6b16*/
    qmemcpy(result + 2, a2 + 2, v3); /*0x6c6b2f*/
  else
    result[1] = 0; /*0x6c6b18*/
  return result; /*0x6c6b1f*/
}



// ==== 0x006C6B40  sub_6C6B40  this=-  sig=ida-proto ====
int sub_6C6B40()
{
  g_SidebarButtonState = 0; /*0x6c6b47*/
  dword_B0BD54 = 0; /*0x6c6b4c*/
  dword_B0BD58 = 0; /*0x6c6b51*/
  return atexit(sub_6C6B60); /*0x6c6b5c*/
}



// ==== 0x006C6B60  sub_6C6B60  this=-  sig=ida-proto ====
void __cdecl sub_6C6B60()
{
  g_SidebarButtonState = 0; /*0x6c6b65*/
  __3_YAXPAX_Z(dword_B0BD58); /*0x6c6b70*/
}



// ==== 0x006C6D00  ObjectClass::Audio_Read_6C6D00  this=ObjectClass  sig=csp ====
void Audio_Read_6C6D00(ObjectClass *this)
{
  char *v1; // ecx
  int v2; // ebx
  char *v3; // eax
  char *ptr_8; // esi
  void *v5; // ebp
  char v6; // dl
  unsigned int v7; // ecx

  v1 = 0; /*0x6c6d08*/
  if ( g_SidebarButtonState.AbstractClass ) /*0x6c6d0c*/
  {
    if ( (int)g_SidebarButtonState.AbstractClass <= 0 ) /*0x6c6d12*/
      v1 = (char *)g_SidebarButtonState.AbstractClass - 1; /*0x6c6d14*/
    memcpy( /*0x6c6d45*/
      (char *)g_SidebarButtonState.? + 32776 * (_DWORD)v1,
      (char *)g_SidebarButtonState.? + 32776 * (_DWORD)(v1 + 1),
      32776 * (int)g_SidebarButtonState.AbstractClass - 32776 * (_DWORD)(v1 + 1));
    if ( 3 * (int)--g_SidebarButtonState.AbstractClass <= (int)g_SidebarButtonState.? ) /*0x6c6d63*/
    {
      v2 = (int)g_SidebarButtonState.? / 2; /*0x6c6d6c*/
      if ( (int)g_SidebarButtonState.? / 2 < 10 ) /*0x6c6d71*/
        v2 = 10; /*0x6c6d73*/
      if ( v2 < (int)g_SidebarButtonState.? ) /*0x6c6d7a*/
      {
        v3 = (char *)__2_YAPAXI_Z(32776 * v2); /*0x6c6d88*/
        ptr_8 = (char *)g_SidebarButtonState.?; /*0x6c6d8d*/
        v5 = v3; /*0x6c6d98*/
        if ( g_SidebarButtonState.? ) /*0x6c6d9a*/
        {
          v6 = 8 * LOBYTE(g_SidebarButtonState.AbstractClass); /*0x6c6dae*/
          v7 = (unsigned int)(32776 * (int)g_SidebarButtonState.AbstractClass) >> 2; /*0x6c6db0*/
          qmemcpy(v3, g_SidebarButtonState.?, 4 * v7); /*0x6c6db3*/
          qmemcpy(&v3[4 * v7], &ptr_8[4 * v7], v6 & 3); /*0x6c6dba*/
          ptr_8 = (char *)g_SidebarButtonState.?; /*0x6c6dbc*/
        }
        __3_YAXPAX_Z(ptr_8); /*0x6c6dc4*/
        g_SidebarButtonState.? = v5; /*0x6c6dcc*/
        g_SidebarButtonState.? = (void *)v2; /*0x6c6dd2*/
      }
    }
  }
}



// ==== 0x006C6DE0  ObjectClass::Audio_Read_6C6DE0  this=ObjectClass  sig=csp ====
void Audio_Read_6C6DE0(ObjectClass *this)
{
  int ptr_0; // edx
  char *ptr_8; // ebx
  int v3; // ecx
  char *v4; // eax
  char *v5; // edi
  _BYTE v6[32776]; // [esp+14h] [ebp-8008h] BYREF

  ptr_0 = (int)g_SidebarButtonState.AbstractClass; /*0x6c6dea*/
  *(_DWORD *)v6 = 0; /*0x6c6df8*/
  *(_DWORD *)&v6[4] = 0; /*0x6c6dfc*/
  if ( g_SidebarButtonState.AbstractClass ) /*0x6c6e00*/
  {
    if ( (int)g_SidebarButtonState.AbstractClass > 0 ) /*0x6c6e06*/
    {
      Audio_Read_6C6B00((ObjectClass *)v6, (_DWORD *)g_SidebarButtonState.?); /*0x6c6e12*/
      ptr_0 = (int)g_SidebarButtonState.AbstractClass; /*0x6c6e17*/
    }
LABEL_4:
    ptr_8 = (char *)g_SidebarButtonState.?; /*0x6c6e1d*/
    while ( *(int *)&v6[4] < 1 || *(int *)v6 > 10 ) /*0x6c6e31*/
    {
      v3 = 0; /*0x6c6e37*/
      if ( !ptr_0 ) /*0x6c6e3b*/
        return; /*0x6c6e3b*/
      if ( ptr_0 <= 0 ) /*0x6c6e41*/
        v3 = ptr_0 - 1; /*0x6c6e43*/
      memcpy(&ptr_8[32776 * v3], &ptr_8[32776 * v3 + 32776], 32776 * ptr_0 - 32776 * (v3 + 1)); /*0x6c6e6e*/
      ptr_0 = (int)g_SidebarButtonState.AbstractClass - 1; /*0x6c6e81*/
      g_SidebarButtonState.AbstractClass = (void *)ptr_0; /*0x6c6e82*/
      if ( 3 * ptr_0 <= (int)g_SidebarButtonState.? ) /*0x6c6e8d*/
      {
        Audio_Read_6C8870(&g_SidebarButtonState); /*0x6c6e94*/
        ptr_0 = (int)g_SidebarButtonState.AbstractClass; /*0x6c6e99*/
      }
      if ( !ptr_0 ) /*0x6c6ea1*/
        return; /*0x6c6ea1*/
      if ( ptr_0 <= 0 ) /*0x6c6ea7*/
        goto LABEL_4; /*0x6c6ea7*/
      ptr_8 = (char *)g_SidebarButtonState.?; /*0x6c6ead*/
      *(_DWORD *)v6 = *(_DWORD *)g_SidebarButtonState.?; /*0x6c6eb5*/
      *(_DWORD *)&v6[4] = *((_DWORD *)g_SidebarButtonState.? + 1); /*0x6c6ec2*/
      if ( *(int *)&v6[4] <= 0x8000 ) /*0x6c6ec6*/
        qmemcpy(&v6[8], (char *)g_SidebarButtonState.? + 8, *(unsigned int *)&v6[4]); /*0x6c6edd*/
      else
        *(_DWORD *)&v6[4] = 0; /*0x6c6ec8*/
    }
    if ( g_UIPointerTable ) /*0x6c6ef2*/
    {
      (*(void (__stdcall **)(LPVOID, int *, int, _BYTE *, _DWORD))(*(_DWORD *)g_UIPointerTable + 12))( /*0x6c6f09*/
        g_UIPointerTable,
        &g_WOL_UserList.customSound_controller[2],
        dword_B76184,
        &v6[8],
        *(_DWORD *)&v6[4]);
      v4 = 0; /*0x6c6f17*/
      ++*(_DWORD *)v6; /*0x6c6f1b*/
      if ( g_SidebarButtonState.AbstractClass ) /*0x6c6f1f*/
      {
        if ( (int)g_SidebarButtonState.AbstractClass <= 0 ) /*0x6c6f21*/
          v4 = (char *)g_SidebarButtonState.AbstractClass - 1; /*0x6c6f23*/
        v5 = (char *)g_SidebarButtonState.? + 32776 * (_DWORD)v4; /*0x6c6f32*/
        if ( v5 ) /*0x6c6f37*/
          qmemcpy(v5, v6, 0x8008u); /*0x6c6f42*/
      }
    }
  }
}



// ==== 0x006C6F50  ProcessGameResults  this=-  sig=ida-proto ====
void __usercall ProcessGameResults(char a1@<cl>, Performance *a2@<edi>)
{
  char v3; // si
  char *v4; // eax
  char *inited; // eax
  char v6; // si
  char *v7; // eax
  char *v8; // eax
  char v9; // si
  char *v10; // eax
  char *v11; // eax
  char v12; // si
  char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  unsigned int v19; // esi
  char *v20; // eax
  char *v21; // eax
  char v22; // si
  char *v23; // eax
  char *v24; // eax
  char v25; // bl
  char *v26; // eax
  char *v27; // eax
  char v28; // bl
  char *v29; // eax
  char *v30; // eax
  char v31; // si
  char *v32; // eax
  char *v33; // eax
  char v34; // si
  char *v35; // eax
  char *v36; // eax
  char *v37; // eax
  char *v38; // eax
  char v39; // bl
  char *v40; // eax
  char *v41; // eax
  char v42; // si
  char *v43; // eax
  char *v44; // eax
  char v45; // si
  char *v46; // eax
  char *v47; // eax
  char *v48; // eax
  char *v49; // eax
  char... [46280 chars total]



// ==== 0x006C87F0  InitSkirmishSettings  this=-  sig=ida-proto ====
int sub_6C87F0()
{
  int v1; // [esp+4h] [ebp-4h]

  dword_B0BD28 = Timer::GetTicks(); /*0x6c87fc*/
  dword_B0BD2C = v1; /*0x6c8805*/
  byte_B0BDB4 = 1; /*0x6c880a*/
  return v1; /*0x6c8811*/
}



// ==== 0x006C8820  Timer::UpdateDelta  this=Timer  sig=ida-proto ====
int Timer_UpdateDelta()
{
  DWORD Ticks; // eax
  int result; // eax

  Ticks = Timer::GetTicks(); /*0x6c8825*/
  byte_B0BDB4 = 0; /*0x6c8830*/
  result = Ticks - dword_B0BD28; /*0x6c8837*/
  dword_B0BD48 = result; /*0x6c8839*/
  return result; /*0x6c883e*/
}



// ==== 0x006C8840  rc_ptr::sub_6C8840  this=rc_ptr  sig=csp ====
_DWORD *__thiscall sub_6C8840(rc_ptr *this, char a2)
{
  *(_DWORD *)this = &rc_ptr<PlayerProfile>::`vftable'; /*0x6c8843*/
  ComPtr::Release((ComPtr *)this); /*0x6c8849*/
  if ( (a2 & 1) != 0 ) /*0x6c8853*/
    __3_YAXPAX_Z(this); /*0x6c8856*/
  return this; /*0x6c8860*/
}



// ==== 0x006C8870  ObjectClass::Audio_Read_6C8870  this=ObjectClass  sig=csp ====
char __thiscall Audio_Read_6C8870(ObjectClass *this)
{
  void *ptr_0; // eax
  int ptr_4; // ecx
  int v5; // ebx
  void *v6; // eax
  void *ptr_8; // esi
  void *v8; // [esp+8h] [ebp-4h]

  ptr_0 = this->AbstractClass; /*0x6c8875*/
  ptr_4 = (int)this->?; /*0x6c8878*/
  if ( 3 * (int)ptr_0 > ptr_4 ) /*0x6c8880*/
    return 0; /*0x6c8883*/
  v5 = ptr_4 / 2; /*0x6c888f*/
  if ( ptr_4 / 2 < 10 ) /*0x6c8894*/
    v5 = 10; /*0x6c8896*/
  if ( v5 >= ptr_4 ) /*0x6c889d*/
    return 0; /*0x6c88a0*/
  v6 = (void *)__2_YAPAXI_Z(32776 * v5); /*0x6c88b1*/
  ptr_8 = this->?; /*0x6c88b6*/
  v8 = v6; /*0x6c88be*/
  if ( ptr_8 ) /*0x6c88c2*/
    qmemcpy(v6, ptr_8, 32776 * (int)this->AbstractClass); /*0x6c88d9*/
  __3_YAXPAX_Z(this->?); /*0x6c88e7*/
  this->? = v8; /*0x6c88f3*/
  this->? = (void *)v5; /*0x6c88f6*/
  return 1; /*0x6c8882*/
}



// ==== 0x006C8900  ObjectClass::method_6C8900  this=ObjectClass  sig=csp ====
char __thiscall sub_6C8900(ObjectClass *this)
{
  void *ptr_0; // eax
  int v4; // ebp
  void *v5; // edx
  void *ptr_8; // esi
  void *v7; // [esp+4h] [ebp-4h]

  ptr_0 = this->AbstractClass; /*0x6c8904*/
  if ( (int)this->AbstractClass < (int)this->? ) /*0x6c890b*/
    return 0; /*0x6c890d*/
  v4 = 2 * (_DWORD)ptr_0; /*0x6c8913*/
  if ( 2 * (int)ptr_0 < 10 ) /*0x6c891b*/
    v4 = 10; /*0x6c891d*/
  v5 = (void *)__2_YAPAXI_Z(32776 * v4); /*0x6c8932*/
  memset(v5, 0, 4 * ((unsigned int)(32776 * v4) >> 2)); /*0x6c893d*/
  v7 = v5; /*0x6c8947*/
  ptr_8 = this->?; /*0x6c894d*/
  if ( ptr_8 ) /*0x6c8952*/
    qmemcpy(v5, ptr_8, 32776 * (int)this->AbstractClass); /*0x6c8967*/
  __3_YAXPAX_Z(this->?); /*0x6c8974*/
  this->? = (void *)v4; /*0x6c8980*/
  this->? = v7; /*0x6c8983*/
  return 1; /*0x6c890f*/
}



// ==== 0x006C8990  sub_6C8990  this=-  sig=ida-proto ====
int sub_6C8990()
{
  dword_B0BDC0 = 0; /*0x6c8992*/
  dword_B0BDC4 = 0; /*0x6c8997*/
  dword_B0BDC8 = 0; /*0x6c899c*/
  dword_B0BDCC = 0; /*0x6c89a1*/
  return 0; /*0x6c89a6*/
}



// ==== 0x006C89B0  ObjectClass::method_6C89B0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6C89B0(ObjectClass *this, size_t Size)
{
  void *v3; // eax

  this->AbstractClass = (void *)Size; /*0x6c89b8*/
  v3 = (void *)__2_YAPAXI_Z(Size); /*0x6c89ba*/
  this->? = v3; /*0x6c89c2*/
  this->? = v3; /*0x6c89c5*/
  return &this->AbstractClass; /*0x6c89ca*/
}



// ==== 0x006C89E0  Buffer::AppendCellData  this=Buffer  sig=csp ====
int __thiscall Buffer::AppendCellData(Buffer *this, int *a2, int a3)
{
  int Buffer_field_08; // edi
  _DWORD *v7; // eax
  int *v8; // esi
  int v9; // eax
  unsigned int v10; // eax
  char *v11; // edi
  int v12; // esi
  int v13; // edx
  int v14; // [esp+10h] [ebp-10h] BYREF
  int v15; // [esp+18h] [ebp-8h]
  _BYTE *v16; // [esp+28h] [ebp+8h]

  Buffer_field_08 = this->Buffer_field_08; /*0x6c89e9*/
  if ( Buffer_field_08 + 12 > (unsigned int)(this->Buffer_field_04 + this->Buffer_field_00) ) /*0x6c89f9*/
    return 0; /*0x6c89f9*/
  v15 = this->Buffer_field_08; /*0x6c89fd*/
  this->Buffer_field_08 = Buffer_field_08 + 12; /*0x6c8a01*/
  if ( !Buffer_field_08 ) /*0x6c8a04*/
    return 0; /*0x6c8a06*/
  *(_WORD *)Buffer_field_08 = *(_WORD *)a3; /*0x6c8a19*/
  *(_WORD *)(Buffer_field_08 + 2) = *(_WORD *)(a3 + 4); /*0x6c8a20*/
  *(_WORD *)(Buffer_field_08 + 4) = *(_WORD *)(a3 + 16); /*0x6c8a28*/
  *(_WORD *)(Buffer_field_08 + 6) = *(_WORD *)(a3 + 20); /*0x6c8a34*/
  *(_DWORD *)(Buffer_field_08 + 8) = this->Buffer_field_08; /*0x6c8a3f*/
  v7 = CellStruct::Copy((CellStruct *)(a3 + 8), &v14); /*0x6c8a42*/
  v8 = a2; /*0x6c8a49*/
  v16 = (_BYTE *)(*(int (__thiscall **)(int *, _DWORD, _DWORD))(*a2 + 92))(a2, *v7, v7[1]); /*0x6c8a61*/
  v9 = *(_DWORD *)(a3 + 20); /*0x6c8a65*/
  v14 = 0; /*0x6c8a6a*/
  if ( v9 > 0 ) /*0x6c8a72*/
  {
    while ( 1 ) /*0x6c8a8a*/
    {
      v10 = Map_Append(v16, (int)&g_SidebarButtonState.needsRedraw, *(_DWORD *)(a3 + 16)); /*0x6c8a8a*/
      v11 = (char *)this->Buffer_field_08; /*0x6c8a8f*/
      if ( (unsigned int)&v11[v10] > this->Buffer_field_04 + this->Buffer_field_00 /*0x6c8aa4*/
        || (this->Buffer_field_08 = (int)&v11[v10], !v11) )
      {
        (*(void (__thiscall **)(int *))(*v8 + 96))(v8); /*0x6c8ae6*/
        return 0; /*0x6c8af2*/
      }
      qmemcpy(v11, &g_SidebarButtonState.needsRedraw, v10); /*0x6c8ab0*/
      v13 = *a2; /*0x6c8ac2*/
      v12 = ++v14; /*0x6c8ac1*/
      v16 += (*(int (__thiscall **)(int *))(v13 + 116))(a2); /*0x6c8ad6*/
      if ( v12 >= *(_DWORD *)(a3 + 20) ) /*0x6c8ada*/
        break; /*0x6c8ada*/
      v8 = a2; /*0x6c8adc*/
    }
    Buffer_field_08 = v15; /*0x6c8af5*/
    v8 = a2; /*0x6c8af9*/
  }
  (*(void (__thiscall **)(int *))(*v8 + 96))(v8); /*0x6c8b01*/
  return Buffer_field_08; /*0x6c8a08*/
}



// ==== 0x006C8B10  ObjectClass::method_6C8B10  this=ObjectClass  sig=csp ====
int __thiscall sub_6C8B10(ObjectClass *this, int a2, int a3, __int16 a4, __int16 a5)
{
  _WORD *ptr_8; // edi
  _DWORD *v8; // eax
  int v9; // esi
  unsigned int v10; // eax
  char *v11; // edi
  _WORD *v12; // [esp+10h] [ebp-10h]
  int v13; // [esp+18h] [ebp-8h] BYREF
  _BYTE *v14; // [esp+2Ch] [ebp+Ch]
  int v15; // [esp+30h] [ebp+10h]

  ptr_8 = this->?; /*0x6c8b19*/
  if ( (char *)(ptr_8 + 6) > (char *)this->? + (unsigned int)this->AbstractClass ) /*0x6c8b28*/
    return 0; /*0x6c8b28*/
  v12 = this->?; /*0x6c8b2c*/
  this->? = ptr_8 + 6; /*0x6c8b30*/
  if ( !ptr_8 ) /*0x6c8b33*/
    return 0; /*0x6c8b35*/
  *ptr_8 = a4; /*0x6c8b4f*/
  ptr_8[1] = a5; /*0x6c8b52*/
  ptr_8[2] = *(_WORD *)(a3 + 8); /*0x6c8b5a*/
  ptr_8[3] = *(_WORD *)(a3 + 12); /*0x6c8b66*/
  *((_DWORD *)ptr_8 + 2) = this->?; /*0x6c8b70*/
  v8 = CellStruct::Copy((CellStruct *)a3, &v13); /*0x6c8b73*/
  v9 = a2; /*0x6c8b7a*/
  v14 = (_BYTE *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, *v8, v8[1]); /*0x6c8b92*/
  v15 = 0; /*0x6c8b9b*/
  if ( *(int *)(a3 + 12) > 0 ) /*0x6c8ba3*/
  {
    while ( 1 ) /*0x6c8bbb*/
    {
      v10 = Map_Append(v14, (int)&g_SidebarButtonState.needsRedraw, *(_DWORD *)(a3 + 8)); /*0x6c8bbb*/
      v11 = (char *)this->?; /*0x6c8bc0*/
      if ( &v11[v10] > (char *)this->? + (unsigned int)this->AbstractClass || (this->? = &v11[v10], !v11) ) /*0x6c8bd4*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9); /*0x6c8c16*/
        return 0; /*0x6c8c22*/
      }
      qmemcpy(v11, &g_SidebarButtonState.needsRedraw, v10); /*0x6c8be0*/
      ++v15; /*0x6c8bf4*/
      v14 += (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x6c8c06*/
      if ( v15 >= *(_DWORD *)(a3 + 12) ) /*0x6c8c0a*/
        break; /*0x6c8c0a*/
      v9 = a2; /*0x6c8c0c*/
    }
    ptr_8 = v12; /*0x6c8c25*/
    v9 = a2; /*0x6c8c29*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9); /*0x6c8c31*/
  return (int)ptr_8; /*0x6c8b37*/
}



// ==== 0x006C8C40  Timer::GetTicks  this=Timer  sig=csp ====
int Timer::GetTicks()
{
  return timeGetTime() >> 4; /*0x6c8c49*/
}



// ==== 0x006C8C60  sub_6C8C60  this=-  sig=ida-proto ====
int sub_6C8C60()
{
  dword_B0BED8 = 0; /*0x6c8c62*/
  dword_B0BEDC = 0; /*0x6c8c67*/
  dword_B0BEE0 = 0; /*0x6c8c6c*/
  dword_B0BEE4 = 0; /*0x6c8c71*/
  return 0; /*0x6c8c76*/
}



// ==== 0x006C8C80  sub_6C8C80  this=-  sig=ida-proto ====
void sub_6C8C80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6c8c8c*/
  dbl_B0BEF0 = Math::Sqrt(v0 + v0); /*0x6c8c9e*/
}



// ==== 0x006C8CB0  sub_6C8CB0  this=-  sig=ida-proto ====
void sub_6C8CB0()
{
  dbl_B0BF58 = dbl_B0BEF0 / 60.0; /*0x6c8cbc*/
}



// ==== 0x006C8CD0  sub_6C8CD0  this=-  sig=ida-proto ====
void sub_6C8CD0()
{
  dbl_B0BF40 = 1.0 / dbl_B0BF58; /*0x6c8cdc*/
}



// ==== 0x006C8CF0  sub_6C8CF0  this=-  sig=ida-proto ====
void sub_6C8CF0()
{
  dbl_B0BF20 = 0.0174532925199433 * 45.0; /*0x6c8cfc*/
}



// ==== 0x006C8D10  sub_6C8D10  this=-  sig=ida-proto ====
void sub_6C8D10()
{
  dbl_B0BEF8 = 0.0174532925199433 * 60.0; /*0x6c8d1c*/
}



// ==== 0x006C8D30  sub_6C8D30  this=-  sig=ida-proto ====
void sub_6C8D30()
{
  dbl_B0BED0 = 0.0174532925199433 * 90.0; /*0x6c8d3c*/
}



// ==== 0x006C8D50  sub_6C8D50  this=-  sig=ida-proto ====
__int64 sub_6C8D50()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0BED0 - dbl_B0BEF8); /*0x6c8d62*/
  result = Math::RoundToInt(v0 * dbl_B0BEF0 * 0.5); /*0x6c8d76*/
  dword_B0BF60 = result; /*0x6c8d7b*/
  return result; /*0x6c8d80*/
}



// ==== 0x006C8D90  sub_6C8D90  this=-  sig=ida-proto ====
void sub_6C8D90()
{
  dbl_B0BF00 = Math::ArcTan((double)dword_B0BF60 * 0.00390625); /*0x6c8da7*/
}



// ==== 0x006C8DC0  sub_6C8DC0  this=-  sig=ida-proto ====
void sub_6C8DC0()
{
  dbl_B0BF18 = Math::ArcTan((double)(2 * dword_B0BF60) / dbl_B0BEF0); /*0x6c8de2*/
}



// ==== 0x006C8DF0  sub_6C8DF0  this=-  sig=ida-proto ====
__int64 sub_6C8DF0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0BF60) + 0.5); /*0x6c8e0b*/
  dword_B0BF54 = result; /*0x6c8e10*/
  return result; /*0x6c8e16*/
}



// ==== 0x006C8E20  sub_6C8E20  this=-  sig=ida-proto ====
int sub_6C8E20()
{
  word_B0BEE8 = 0; /*0x6c8e22*/
  word_B0BEEA = 0; /*0x6c8e28*/
  return 0; /*0x6c8e2e*/
}



// ==== 0x006C8E30  sub_6C8E30  this=-  sig=ida-proto ====
int sub_6C8E30()
{
  dword_B0BF08 = 0; /*0x6c8e32*/
  dword_B0BF0C = 0; /*0x6c8e37*/
  dword_B0BF10 = 0; /*0x6c8e3c*/
  return 0; /*0x6c8e41*/
}



// ==== 0x006C8E50  sub_6C8E50  this=-  sig=ida-proto ====
int sub_6C8E50()
{
  dword_B0BF50 = 0; /*0x6c8e55*/
  dword_B0BF48 = 128; /*0x6c8e5f*/
  dword_B0BF4C = 128; /*0x6c8e64*/
  return 128; /*0x6c8e69*/
}



// ==== 0x006C8E70  ObjectClass::??0Iostream_init_QAE_XZ_5  this=ObjectClass  sig=csp ====
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

  CampaignScore::LoadCampaignScoreAssetsGame(*((void **)dword_A8B230 + 3374)); /*0x6c8e8e*/
  v5 = *(_QWORD *)&g_DisplayWidth; /*0x6c8e9f*/
  v3 = 0; /*0x6c8eb1*/
  v4 = 0; /*0x6c8eb9*/
  Map_Load_72E9F0((int *)g_DSurface_Hidden, &v3); /*0x6c8ec1*/
  Frame::Present(g_DSurface_Hidden, a1, a2, a3, 0, v3, v4, (int *)v5); /*0x6c8ed0*/
  Campaign::Screen(0); /*0x6c8ee1*/
  Map_Load_72E9F0((int *)g_DSurface_Hidden, &v3); /*0x6c8ef0*/
  Frame::Present(g_DSurface_Hidden, a1, a2, a3, 0, v3, v4, (int *)v5); /*0x6c8eff*/
  FileSystem::CleanupTrees(); /*0x6c8f04*/
}



// ==== 0x006C8F10  sub_6C8F10  this=-  sig=ida-proto ====
LRESULT __fastcall sub_6C8F10(HWND hDlg, int nIDDlgItem, int a3)
{
  HWND DlgItem; // eax
  wchar_t Buffer[32]; // [esp+Ch] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)a02d02d02d_0, (const wchar_t *const)(a3 / 60 / 60), a3 / 60 % 60, a3 % 60); /*0x6c8f69*/
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x6c8f73*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x6c8f8c*/
}



// ==== 0x006C8FA0  sub_6C8FA0  this=-  sig=ida-proto ====
LRESULT __fastcall sub_6C8FA0(HWND hDlg, int nIDDlgItem, wchar_t *Format)
{
  HWND DlgItem; // eax
  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, Format); /*0x6c8fb8*/
  DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x6c8fc2*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x6c8fdb*/
}



// ==== 0x006C8FF0  DlgProcScoreScreen  this=-  sig=csp ====
int __stdcall ScoreScreen_DlgProc(HWND hWnd, unsigned int a2, WPARAM wParam, wchar_t *Format)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  HWND DlgItem; // eax
  int v10; // ecx
  _DWORD *v11; // edi
  int v12; // edi
  HWND v13; // eax
  wchar_t *v14; // ecx
  wchar_t *v15; // esi
  wchar_t *String; // edi
  wchar_t *v17; // esi
  HWND v18; // eax
  void (__stdcall *v19)(HWND, UINT, WPARAM, LPARAM); // edi
  HWND v20; // eax
  int v21; // eax
  const wchar_t *v22; // esi
  int v23; // ecx
  int v24; // edi
  char *v25; // esi
  char *v26; // esi
  char *v27; // esi
  int v28; // eax
  HWND v29; // eax
  HWND v30; // eax
  int v31; // eax
  _DWORD *v32; // eax
  LPARAM v33; // [esp-8h] [ebp-54h]
  wchar_t lParam[32]; // [esp+Ch] [ebp-40h] BYREF
  WPARAM wParama; // [esp+58h] [ebp+Ch]
  wchar_t *Formatb; // [esp+5Ch] [ebp+10h]
  wchar_t *Formata; // [esp+5Ch] [ebp+10h]

  result = BaseDialogProc(hWnd, a2, wParam, (unsigned int)Format); /*0x6c900c*/
  if ( !result ) /*0x6c9013*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x6c901c*/
    if ( a2 > 0x497 ) /*0x6c9028*/
    {
      if ( a2 == 1240 ) /*0x6c9383*/
      {
        if ( !wParam ) /*0x6c93cb*/
          SendDlgItemMessageA(hWnd, 1835, 0x4D5u, 0, 29); /*0x6c93db*/
      }
      else if ( a2 == 1260 ) /*0x6c9388*/
      {
        AudioController::Stop(stru_B0BF28); /*0x6c938f*/
        v32 = (_DWORD *)PlayVocClass(dword_8871E0->BunkerWallsUpSound, 0x2000, 1.0, 0); /*0x6c93ad*/
        SetAudioSource((int)stru_B0BF28, v32, 0); /*0x6c93b9*/
        SendDlgItemMessageA(hWnd, 1835, 0x4D3u, 0, 0); /*0x6c93c7*/
      }
      return 0; /*0x6c93e1*/
    }
    if ( a2 != 1175 ) /*0x6c902e*/
    {
      if ( a2 == 2 ) /*0x6c9033*/
      {
        if ( dword_B0BF64 ) /*0x6c906e*/
        {
          AudioFile::Stop(stru_B0BF28); /*0x6c9079*/
          AudioFileClass::Release(stru_B0BF28); /*0x6c9083*/
          dword_B0BF64 = 0; /*0x6c908a*/
          return 0; /*0x6c909a*/
        }
      }
      else if ( a2 == 273 && (_WORD)wParam == 1059 ) /*0x6c9046*/
      {
        *WindowLongA = 1; /*0x6c9051*/
        AudioFile::Stop(stru_B0BF28); /*0x6c9057*/
        return 0; /*0x6c9064*/
      }
      return 0; /*0x6c9046*/
    }
    AudioController::Init(stru_B0BF28); /*0x6c90a2*/
    dword_B0BF64 = 1; /*0x6c90ad*/
    v6 = 0; /*0x6c90b7*/
    v7 = *((_DWORD *)dword_A8B230 + 387); /*0x6c90b9*/
    if ( v7 ) /*0x6c90c1*/
    {
      if ( v7 == 1 ) /*0x6c90ce*/
      {
        v6 = *((_DWORD *)dword_A8B230 + 3434); /*0x6c90d0*/
      }
      else if ( v7 == 2 ) /*0x6c90db*/
      {
        v6 = *((_DWORD *)dword_A8B230 + 3435); /*0x6c90dd*/
      }
    }
    else
    {
      v6 = *((_DWORD *)dword_A8B230 + 3433); /*0x6c90c3*/
    }
    v8 = v6 / 60; /*0x6c90fc*/
    swprintf( /*0x6c9146*/
      lParam,
      (const size_t)a02d02d02d_0,
      (const wchar_t *const)(v6 / 60 / 60 / 60),
      v6 / 60 / 60 % 60,
      v6 / 60 % 60);
    DlgItem = GetDlgItem(hWnd, 1777); /*0x6c915a*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9169*/
    v10 = *((_DWORD *)dword_A8B230 + 391); /*0x6c9174*/
    if ( *((_DWORD *)dword_A8B230 + 389) != -1 ) /*0x6c9187*/
    {
      v11 = (char *)dword_A8B230 + 1556; /*0x6c917a*/
      Formatb = (wchar_t *)*((_DWORD *)dword_A8B230 + 391); /*0x6c9180*/
      v10 = (int)Formatb + Timer::GetTicks() - *v11; /*0x6c9199*/
    }
    v12 = v10 / 60; /*0x6c91b7*/
    swprintf( /*0x6c9209*/
      lParam,
      (const size_t)a02d02d02d_0,
      (const wchar_t *const)(v10 / 60 / 60 / 60),
      v10 / 60 / 60 % 60,
      v10 / 60 % 60);
    v13 = GetDlgItem(hWnd, 1778); /*0x6c9217*/
    SendMessageA(v13, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9226*/
    if ( v12 > v8 ) /*0x6c9233*/
    {
      v14 = (wchar_t *)((char *)dword_A8B230 + 13806); /*0x6c9243*/
      v15 = (wchar_t *)((char *)dword_A8B230 + 13837); /*0x6c9249*/
    }
    else
    {
      v14 = (wchar_t *)((char *)dword_A8B230 + 13744); /*0x6c9235*/
      v15 = (wchar_t *)((char *)dword_A8B230 + 13775); /*0x6c923b*/
    }
    String = GetStringCSF(v14, 0, aDRa2mdpostStls, 138); /*0x6c926e*/
    v17 = GetStringCSF(v15, 0, aDRa2mdpostStls, 139); /*0x6c927b*/
    v18 = GetDlgItem(hWnd, 1779); /*0x6c927d*/
    v33 = (LPARAM)String; /*0x6c927f*/
    v19 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x6c9280*/
    SendMessageA(v18, 0x4B2u, 0, v33); /*0x6c928e*/
    v20 = GetDlgItem(hWnd, 1780); /*0x6c9296*/
    SendMessageA(v20, 0x4B2u, 0, (LPARAM)v17); /*0x6c92a1*/
    v21 = dword_A80238; /*0x6c92a3*/
    v22 = 0; /*0x6c92a8*/
    v23 = 0; /*0x6c92aa*/
    wParama = dword_A80238; /*0x6c92ac*/
    Formata = 0; /*0x6c92b2*/
    if ( dword_A80238 > 0 ) /*0x6c92b6*/
    {
      do /*0x6c930e*/
      {
        v24 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v23]; /*0x6c92be*/
        if ( *(_BYTE *)(v24 + 493) ) /*0x6c92c1*/
        {
          v25 = (char *)v22 + SumArray((int *)(v24 + 9032)); /*0x6c92dc*/
          v26 = &v25[SumArray((int *)(v24 + 11088))]; /*0x6c92e9*/
          v27 = &v26[SumArray((int *)(v24 + 13144))]; /*0x6c92f6*/
          v28 = SumArray((int *)(v24 + 15200)); /*0x6c92f8*/
          v23 = (int)Formata; /*0x6c92fd*/
          v22 = (const wchar_t *)&v27[v28]; /*0x6c9301*/
          v21 = wParama; /*0x6c9303*/
        }
        Formata = (wchar_t *)++v23; /*0x6c930a*/
      }
      while ( v23 < v21 ); /*0x6c930e*/
      v19 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x6c9310*/
    }
    v29 = GetDlgItem(hWnd, 1835); /*0x6c931c*/
    PostMessageA(v29, 0x4D7u, 0, (LPARAM)hWnd); /*0x6c9327*/
    swprintf(lParam, (const size_t)&g_Str_Fmt_PctD, v22); /*0x6c9338*/
    v30 = GetDlgItem(hWnd, 1782); /*0x6c9346*/
    v19(v30, 0x4B2u, 0, (LPARAM)lParam); /*0x6c9355*/
    v31 = StringList::Find(&unk_A83D10, g_INI_Key_SCORE); /*0x6c9361*/
    ThemeClass::Play(&unk_A83D10, v31); /*0x6c936c*/
    return 0; /*0x6c9374*/
  }
  return result; /*0x6c905c*/
}



// ==== 0x006C93F0  sub_6C93F0  this=-  sig=ida-proto ====
void sub_6C93F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6c93fc*/
  dbl_B0BF78 = Math::Sqrt(v0 + v0); /*0x6c940e*/
}



// ==== 0x006C9420  sub_6C9420  this=-  sig=ida-proto ====
void sub_6C9420()
{
  dbl_B0BFC8 = dbl_B0BF78 / 60.0; /*0x6c942c*/
}



// ==== 0x006C9440  sub_6C9440  this=-  sig=ida-proto ====
void sub_6C9440()
{
  dbl_B0BFB0 = 1.0 / dbl_B0BFC8; /*0x6c944c*/
}



// ==== 0x006C9460  sub_6C9460  this=-  sig=ida-proto ====
void sub_6C9460()
{
  dbl_B0BFA8 = 0.0174532925199433 * 45.0; /*0x6c946c*/
}



// ==== 0x006C9480  sub_6C9480  this=-  sig=ida-proto ====
void sub_6C9480()
{
  dbl_B0BF80 = 0.0174532925199433 * 60.0; /*0x6c948c*/
}



// ==== 0x006C94A0  sub_6C94A0  this=-  sig=ida-proto ====
void sub_6C94A0()
{
  dbl_B0BF68 = 0.0174532925199433 * 90.0; /*0x6c94ac*/
}



// ==== 0x006C94C0  sub_6C94C0  this=-  sig=ida-proto ====
__int64 sub_6C94C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0BF68 - dbl_B0BF80); /*0x6c94d2*/
  result = Math::RoundToInt(v0 * dbl_B0BF78 * 0.5); /*0x6c94e6*/
  dword_B0BFD0 = result; /*0x6c94eb*/
  return result; /*0x6c94f0*/
}



// ==== 0x006C9500  sub_6C9500  this=-  sig=ida-proto ====
void sub_6C9500()
{
  dbl_B0BF88 = Math::ArcTan((double)dword_B0BFD0 * 0.00390625); /*0x6c9517*/
}



// ==== 0x006C9530  sub_6C9530  this=-  sig=ida-proto ====
void sub_6C9530()
{
  dbl_B0BFA0 = Math::ArcTan((double)(2 * dword_B0BFD0) / dbl_B0BF78); /*0x6c9552*/
}



// ==== 0x006C9560  sub_6C9560  this=-  sig=ida-proto ====
__int64 sub_6C9560()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0BFD0) + 0.5); /*0x6c957b*/
  dword_B0BFC4 = result; /*0x6c9580*/
  return result; /*0x6c9586*/
}



// ==== 0x006C9590  sub_6C9590  this=-  sig=ida-proto ====
int sub_6C9590()
{
  word_B0BF70 = 0; /*0x6c9592*/
  word_B0BF72 = 0; /*0x6c9598*/
  return 0; /*0x6c959e*/
}



// ==== 0x006C95A0  sub_6C95A0  this=-  sig=ida-proto ====
int sub_6C95A0()
{
  dword_B0BF90 = 0; /*0x6c95a2*/
  dword_B0BF94 = 0; /*0x6c95a7*/
  dword_B0BF98 = 0; /*0x6c95ac*/
  return 0; /*0x6c95b1*/
}



// ==== 0x006C95C0  sub_6C95C0  this=-  sig=ida-proto ====
int sub_6C95C0()
{
  dword_B0BFC0 = 0; /*0x6c95c5*/
  dword_B0BFB8 = 128; /*0x6c95cf*/
  dword_B0BFBC = 128; /*0x6c95d4*/
  return 128; /*0x6c95d9*/
}



// ==== 0x006C95E0  Delegate::GetField  this=Delegate  sig=csp ====
_DWORD *__thiscall Delegate::GetField(Delegate *this)
{
  this->m_items = 0; /*0x6c95e6*/
  this->m_count = 0; /*0x6c95e8*/
  this->Delegate_field_08 = 0; /*0x6c95eb*/
  *(_DWORD *)&this->m_allocated = 0; /*0x6c95ee*/
  return &this->m_items; /*0x6c95f1*/
}



// ==== 0x006C9600  AbstractClass::GetTotalValue  this=AbstractClass  sig=csp ====
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
  v3 = (char *)((char *)dword_B0F4EC - (char *)this); /*0x6c9612*/
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
int __thiscall Float4::Sum(int *this)
{
  int v2; // edi
  int result; // eax
  int v4; // [esp+8h] [ebp-4h]

  v4 = 0; /*0x6c9653*/
  v2 = 4; /*0x6c965d*/
  do /*0x6c9675*/
  {
    LOWORD(result) = Math::RoundToInt((double)v4 + *(float *)this++); /*0x6c9668*/
    --v2; /*0x6c9670*/
    v4 = result; /*0x6c9671*/
  }
  while ( v2 ); /*0x6c9675*/
  return result; /*0x6c967b*/
}



// ==== 0x006C9680  FloatArray::Get  this=BuildingTypeClass  sig=csp ====
int __thiscall FloatArray::Get(int *this, int a2)
{
  return a2; /*0x6c9687*/
}



// ==== 0x006C9690  Float::Accumulate  this=BuildingTypeClass  sig=csp ====
int __thiscall Float::Accumulate(int *this, float a2, int a3)
{
  *((float *)this + a3) = a2 + *((float *)this + a3); /*0x6c969b*/
  return a3; /*0x6c969e*/
}



// ==== 0x006C96B0  Float::SubtractClamped  this=BuildingTypeClass  sig=csp ====
int __thiscall Float::SubtractClamped(int *this, float a2, int a3)
{
  __int16 v3; // fps
  double v4; // st7
  bool v5; // c0
  char v6; // c2
  bool v7; // c3
  int result; // eax
  double v9; // st6

  v4 = *((float *)this + a3); /*0x6c96b4*/
  v5 = v4 < a2; /*0x6c96b7*/
  v6 = 0; /*0x6c96b7*/
  v7 = v4 == a2; /*0x6c96b7*/
  LOWORD(result) = v3; /*0x6c96bb*/
  if ( v4 >= a2 ) /*0x6c96c0*/
    v9 = *((float *)this + a3) - a2; /*0x6c96d7*/
  else
    v9 = *((float *)this + a3) - *((float *)this + a3); /*0x6c96c8*/
  *((float *)this + a3) = v9; /*0x6c96ca*/
  return result; /*0x6c96cd*/
}



// ==== 0x006C96E0  ObjectClass::method_6C96E0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6C96E0(ObjectClass *this, _DWORD *a2, int a3)
{
  ObjectClass *v3; // eax
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
    v7 = *(float *)((char *)&v3->AbstractClass + v5) + *(float *)&v3->AbstractClass; /*0x6c970c*/
    v3 = (ObjectClass *)((char *)v3 + 4); /*0x6c970e*/
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



// ==== 0x006C9740  HouseClass::AccumulateFloat4  this=HouseClass  sig=csp ====
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
  a2[1] = this->ptr_8; /*0x6c9769*/
  a2[2] = this->ptr_C; /*0x6c976f*/
  a2[3] = this->ptr_10; /*0x6c9776*/
  return a2; /*0x6c9775*/
}



// ==== 0x006C9780  ObjectClass::method_6C9780  this=ObjectClass  sig=csp ====
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



// ==== 0x006C97E0  HouseClass::ComputeResourceDelta  this=HouseClass  sig=csp ====
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
  a2[1] = this->ptr_8; /*0x6c9809*/
  a2[2] = this->ptr_C; /*0x6c980f*/
  a2[3] = this->ptr_10; /*0x6c9816*/
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
int __thiscall Straw::Dtor(Straw *this)
{
  int result; // eax
  int v3; // ecx

  result = this->Straw_field_0x04; /*0x6c9856*/
  *(_DWORD *)this->__pad_0 = &Straw::`vftable'; /*0x6c9859*/
  if ( result ) /*0x6c9861*/
    *(_DWORD *)(result + 8) = *((_DWORD *)this + 2); /*0x6c9866*/
  v3 = *((_DWORD *)this + 2); /*0x6c9869*/
  if ( v3 ) /*0x6c986e*/
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 4))(v3, this->Straw_field_0x04); /*0x6c9876*/
  *((_DWORD *)this + 2) = 0; /*0x6c9879*/
  this->Straw_field_0x04 = 0; /*0x6c987c*/
  return result; /*0x6c987f*/
}



// ==== 0x006C9890  Straw::Set  this=Straw  sig=csp ====
int __thiscall Delegate::Set(Straw *this, int a2)
{
  int result; // eax
  int v4; // ecx

  if ( this->Straw_field_0x04 != a2 ) /*0x6c989b*/
  {
    if ( a2 ) /*0x6c989f*/
    {
      v4 = *(_DWORD *)(a2 + 8); /*0x6c98a1*/
      if ( v4 ) /*0x6c98a6*/
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 4))(v4, 0); /*0x6c98ac*/
        *(_DWORD *)(a2 + 8) = 0; /*0x6c98af*/
      }
    }
    result = this->Straw_field_0x04; /*0x6c98b6*/
    if ( result ) /*0x6c98bb*/
      *(_DWORD *)(result + 8) = 0; /*0x6c98bd*/
    this->Straw_field_0x04 = a2; /*0x6c98c6*/
    if ( a2 ) /*0x6c98c9*/
      *(_DWORD *)(a2 + 8) = this; /*0x6c98cb*/
  }
  return result; /*0x6c98ce*/
}



// ==== 0x006C98E0  Straw::Invoke  this=Straw  sig=csp ====
int __thiscall Delegate::Invoke(Straw *this, int a2, int a3)
{
  int Straw_field_0x04; // ecx

  Straw_field_0x04 = this->Straw_field_0x04; /*0x6c98e0*/
  if ( Straw_field_0x04 ) /*0x6c98e5*/
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)Straw_field_0x04 + 8))(Straw_field_0x04, a2, a3); /*0x6c98f3*/
  else
    return 0; /*0x6c98f9*/
}



// ==== 0x006C9900  ObjectClass::Render_Parse  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Render_Parse(ObjectClass *this)
{
  this->AbstractClass = 0; /*0x6c9902*/
  this->? = (void *)1200; /*0x6c9908*/
  this->? = (void *)0xFFFFFF; /*0x6c990f*/
  this->? = (void *)15; /*0x6c9916*/
  this->? = 2; /*0x6c991d*/
  this->? = 0; /*0x6c9924*/
  return &this->AbstractClass; /*0x6c992b*/
}



// ==== 0x006C9930  BinkMovie::Destroy  this=BinkMovie  sig=csp ====
void __thiscall BinkMovie::Destroy(BinkMovie *this)
{
  if ( this->BinkMovie_field_0x14[0] ) /*0x6c9930*/
    __3_YAXPAX_Z((void *)this->BinkMovie_field_0x14[0]); /*0x6c9938*/
}



// ==== 0x006C9940  ObjectClass::method_6C9940  this=ObjectClass  sig=csp ====
int __thiscall sub_6C9940(ObjectClass *this, char a2, char a3, unsigned __int8 a4)
{
  unsigned __int16 v4; // ax
  int result; // eax

  HIBYTE(v4) = a2; /*0x6c9946*/
  LOBYTE(v4) = a3; /*0x6c9950*/
  result = a4 | (v4 << 8); /*0x6c9957*/
  this->? = (void *)result; /*0x6c9959*/
  return result; /*0x6c995c*/
}



// ==== 0x006C9960  ObjectClass::method_6C9960  this=ObjectClass  sig=csp ====
void __thiscall sub_6C9960(ObjectClass *this, wchar_t *String)
{
  int v3; // eax
  wchar_t *v4; // eax

  if ( this->? ) /*0x6c9964*/
  {
    __3_YAXPAX_Z((void *)this->?); /*0x6c996c*/
    this->? = 0; /*0x6c9974*/
  }
  if ( String ) /*0x6c9981*/
  {
    v3 = wcslen(String); /*0x6c9984*/
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3 + 2); /*0x6c998e*/
    this->? = (int)v4; /*0x6c9996*/
    if ( v4 ) /*0x6c999b*/
      wcscpy(v4, String); /*0x6c999f*/
  }
}



// ==== 0x006C99B0  sub_6C99B0  this=-  sig=ida-proto ====
int sub_6C99B0()
{
  dword_B0BFD8 = 0; /*0x6c99b2*/
  dword_B0BFDC = 0; /*0x6c99b7*/
  dword_B0BFE0 = 0; /*0x6c99bc*/
  dword_B0BFE4 = 0; /*0x6c99c1*/
  return 0; /*0x6c99c6*/
}



// ==== 0x006C99D0  BinkMovie::CreateSurfaceTracker  this=AbstractClass  sig=csp ====
_DWORD *__thiscall BinkMovie_CreateSurfaceTracker(char *FullPath)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  char Filename[256]; // [esp+Ch] [ebp-100h] BYREF

  if ( !FullPath || !strlen(FullPath) ) /*0x6c99e7*/
    return 0; /*0x6c9ab2*/
  v2 = __2_YAPAXI_Z(0x34u); /*0x6c99ff*/
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
  _splitpath(FullPath, 0, 0, Filename, 0); /*0x6c9a2f*/
  if ( (unsigned __int8)BinkMovie::InitKeyframeTracking(Filename) == 1 ) /*0x6c9a45*/
  {
    v3 = __2_YAPAXI_Z(0x20u); /*0x6c9a49*/
    v4 = v3; /*0x6c9a4e*/
    if ( v3 ) /*0x6c9a55*/
    {
      v3[1] = 640; /*0x6c9a60*/
      v3[2] = 255; /*0x6c9a67*/
      v3[3] = 0; /*0x6c9a6e*/
      *v3 = &XSurface_Vtable; /*0x6c9a71*/
      v3[4] = 2; /*0x6c9a77*/
      Buffer::Init(0, 0x4FB00u); /*0x6c9a7e*/
      *v4 = &BSurface_Vtable; /*0x6c9a83*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v4 + 24))(v4, 0); /*0x6c9a8e*/
      v2[4] = v4; /*0x6c9a91*/
    }
  }
  return v2; /*0x6c9a97*/
}



// ==== 0x006C9AC0  ObjectClass::method_6C9AC0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6C9AC0(ObjectClass *this)
{
  this->AbstractClass = 0; /*0x6c9ac4*/
  this->? = 0; /*0x6c9ac6*/
  this->? = 0; /*0x6c9ac9*/
  this->? = 0; /*0x6c9acc*/
  this->? = 0; /*0x6c9acf*/
  this->? = 0; /*0x6c9ad2*/
  this->? = 0; /*0x6c9ad5*/
  this->? = 0; /*0x6c9ad8*/
  this->? = 0; /*0x6c9adb*/
  return &this->AbstractClass; /*0x6c9ade*/
}



// ==== 0x006C9AE0  BinkMovie::FreeSurfaceTracker  this=BinkMovie  sig=csp ====
int __thiscall BinkMovie::FreeSurfaceTracker(BinkMovie *this)
{
  int result; // eax
  int v3; // esi
  int v4; // eax
  void *v5; // edi
  int (__thiscall ***v6)(_DWORD, int); // ecx

  result = *(_DWORD *)this->__pad_0; /*0x6c9ae3*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x6c9ae3*/
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
          BinkMovie::Destroy(*(BinkMovie **)(v4 + 4 * v3)); /*0x6c9b00*/
          __3_YAXPAX_Z(v5); /*0x6c9b06*/
        }
        result = *(_DWORD *)this->__pad_0; /*0x6c9b0e*/
        ++v3; /*0x6c9b10*/
      }
      while ( v3 < *(_DWORD *)(*(_DWORD *)this->__pad_0 + 16) ); /*0x6c9b14*/
    }
    if ( *(_DWORD *)this->__pad_0 ) /*0x6c9b17*/
      result = (***(int (__thiscall ****)(_DWORD, int))this->__pad_0)(*(_DWORD *)this->__pad_0, 1); /*0x6c9b22*/
  }
  v6 = (int (__thiscall ***)(_DWORD, int))this->BinkMovie_field_0x10[0]; /*0x6c9b24*/
  if ( v6 ) /*0x6c9b2a*/
    return (**v6)(v6, 1); /*0x6c9b30*/
  return result; /*0x6c9b27*/
}



// ==== 0x006C9B40  BinkMovie::InitKeyframeTracking  this=BinkMovie  sig=csp ====
char __thiscall BinkMovie::InitKeyframeTracking(BinkMovie *this, char *Source)
{
  int v3; // eax
  ObjectClass *v5; // [esp+0h] [ebp-894h]
  int v6[4]; // [esp+Ch] [ebp-888h] BYREF
  char v7; // [esp+1Ch] [ebp-878h]
  CCFileClass v8; // [esp+20h] [ebp-874h] BYREF
  int v9[3]; // [esp+78h] [ebp-81Ch] BYREF
  int v10; // [esp+84h] [ebp-810h]
  BinkMovie v11; // [esp+8Ch] [ebp-808h] BYREF

  if ( !Source || !strlen(Source) ) /*0x6c9b5f*/
    return 0; /*0x6c9b6a*/
  CCFileClass::Construct(&v8, aSubtitlemdTxt); /*0x6c9b79*/
  if ( !(unsigned __int8)CCFileClass::Open(&v8, 0) ) /*0x6c9b8a*/
  {
LABEL_6:
    *(_DWORD *)v8.CDFileClass = &CCFileClass::`vftable'; /*0x6c9be2*/
    v10 = 0; /*0x6c9bee*/
    Vector::Clear((int)v9); /*0x6c9bf5*/
    *(_DWORD *)v8.CDFileClass = &off_7E1668; /*0x6c9bfe*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v8); /*0x6c9c06*/
    return 0; /*0x6c9c16*/
  }
  v6[1] = 0; /*0x6c9b9c*/
  v6[2] = 0; /*0x6c9ba0*/
  v6[3] = (int)&v8; /*0x6c9ba4*/
  v7 = 0; /*0x6c9ba8*/
  v6[0] = (int)&FileStraw::`vftable'; /*0x6c9bac*/
  BinkMovie::VtableDispatch(&v11, (int)v6); /*0x6c9bb4*/
  v3 = ParseMovieSubtitles(v11.__pad_0, Source); /*0x6c9bc1*/
  *(_DWORD *)this->__pad_0 = v3; /*0x6c9bc8*/
  if ( !v3 ) /*0x6c9bd2*/
  {
    nullsub_40(v5); /*0x6c9bd4*/
    FileStraw::Destructor((int)v6); /*0x6c9bdd*/
    goto LABEL_6; /*0x6c9bdd*/
  }
  nullsub_40(v5); /*0x6c9c19*/
  FileStraw::Destructor((int)v6); /*0x6c9c22*/
  *(_DWORD *)v8.CDFileClass = &CCFileClass::`vftable'; /*0x6c9c2b*/
  v10 = 0; /*0x6c9c33*/
  Vector::Clear((int)v9); /*0x6c9c3a*/
  *(_DWORD *)v8.CDFileClass = &off_7E1668; /*0x6c9c43*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v8); /*0x6c9c4b*/
  return 1; /*0x6c9c0b*/
}



// ==== 0x006C9C60  BinkMovie::CheckKeyframeTransition  this=BinkMovie  sig=csp ====
int __thiscall BinkMovie::CheckKeyframeTransition(BinkMovie *this, unsigned int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // eax
  char v6; // bl
  unsigned int *v7; // ecx
  void (*BinkMovie_field_0xC)(void); // eax
  int v9; // ecx
  int *BinkMovie_field_0x14; // edi
  BinkMovie *v11; // esi

  v4 = *(_DWORD *)this->__pad_0; /*0x6c9c66*/
  if ( v4 ) /*0x6c9c6a*/
  {
    v5 = this->BinkMovie_field_0x4[0]; /*0x6c9c73*/
    v6 = 0; /*0x6c9c7a*/
    if ( v5 < *(_DWORD *)(v4 + 16) ) /*0x6c9c83*/
    {
      do /*0x6c9cb3*/
      {
        v7 = *(unsigned int **)(*(_DWORD *)(v4 + 4) + 4 * v5); /*0x6c9c88*/
        if ( *v7 > a2 ) /*0x6c9c8d*/
          break; /*0x6c9c8d*/
        this->BinkMovie_field_0x8 = v7; /*0x6c9c90*/
        this->BinkMovie_field_0x4[0] = v5 + 1; /*0x6c9c93*/
        BinkMovie_field_0xC = (void (*)(void))this->BinkMovie_field_0xC; /*0x6c9c96*/
        if ( BinkMovie_field_0xC ) /*0x6c9c9b*/
        {
          BinkMovie_field_0xC(); /*0x6c9c9d*/
        }
        else
        {
          BinkMovie::ProcessKeyframe(this, v7); /*0x6c9ca4*/
          v6 = 1; /*0x6c9ca9*/
        }
        v4 = *(_DWORD *)this->__pad_0; /*0x6c9cab*/
        v5 = this->BinkMovie_field_0x4[0]; /*0x6c9cad*/
      }
      while ( v5 < *(_DWORD *)(*(_DWORD *)this->__pad_0 + 16) ); /*0x6c9cb3*/
    }
    result = (int)this->BinkMovie_field_0x8; /*0x6c9cb5*/
    if ( result ) /*0x6c9cba*/
    {
      if ( a2 >= *(_DWORD *)result + *(_DWORD *)(result + 4) ) /*0x6c9cc5*/
      {
        result = (int)this->BinkMovie_field_0xC; /*0x6c9cc7*/
        this->BinkMovie_field_0x8 = 0; /*0x6c9cca*/
        if ( !result ) /*0x6c9ccf*/
        {
          v9 = this->BinkMovie_field_0x10[0]; /*0x6c9cd1*/
          if ( v9 ) /*0x6c9cd6*/
          {
            BinkMovie_field_0x14 = this->BinkMovie_field_0x14; /*0x6c9cda*/
            (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v9 + 20))(v9, this->BinkMovie_field_0x14, 0); /*0x6c9cdf*/
            v11 = this + 1; /*0x6c9ce4*/
            v6 = 1; /*0x6c9ce7*/
            *(_DWORD *)v11->__pad_0 = *BinkMovie_field_0x14; /*0x6c9ceb*/
            v11->BinkMovie_field_0x4[0] = BinkMovie_field_0x14[1]; /*0x6c9cf0*/
            v11->BinkMovie_field_0x8 = (void *)BinkMovie_field_0x14[2]; /*0x6c9cf6*/
            result = BinkMovie_field_0x14[3]; /*0x6c9cf9*/
            v11->BinkMovie_field_0xC = (void *)result; /*0x6c9cfc*/
            *BinkMovie_field_0x14 = 0; /*0x6c9cff*/
            BinkMovie_field_0x14[1] = 0; /*0x6c9d01*/
            BinkMovie_field_0x14[2] = 0; /*0x6c9d04*/
            BinkMovie_field_0x14[3] = 0; /*0x6c9d07*/
          }
        }
      }
    }
    LOBYTE(result) = v6; /*0x6c9d0a*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6c9c6d*/
  }
  return result; /*0x6c9c6c*/
}



// ==== 0x006C9D30  AbstractClass::getTotalValue  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::getTotalValue(AbstractClass *this, int a2)
{
  this->ptr_C = (void *)a2; /*0x6c9d34*/
  return a2; /*0x6c9d37*/
}



// ==== 0x006C9D40  BinkMovie::ProcessKeyframe  this=ObjectClass  sig=csp ====
void __thiscall BinkMovie::ProcessKeyframe(BinkMovie *this, _DWORD *a2)
{
  int v3; // ecx
  int *BinkMovie_field_0x14; // ebp
  TextGroup *v5; // esi
  int v6; // ebx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  _DWORD *pad_0; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // [esp-1Ch] [ebp-4Ch]
  int v14; // [esp+8h] [ebp-28h]
  int v15; // [esp+Ch] [ebp-24h] BYREF
  int v16; // [esp+10h] [ebp-20h]
  _WORD *v17; // [esp+14h] [ebp-1Ch]
  BinkMovie *v18; // [esp+18h] [ebp-18h]
  int v19; // [esp+1Ch] [ebp-14h] BYREF
  _DWORD v20[4]; // [esp+20h] [ebp-10h] BYREF

  v18 = this; /*0x6c9d46*/
  v3 = this->BinkMovie_field_0x10[0]; /*0x6c9d4a*/
  if ( v3 ) /*0x6c9d4f*/
  {
    BinkMovie_field_0x14 = this->BinkMovie_field_0x14; /*0x6c9d5a*/
    (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v3 + 20))(v3, this->BinkMovie_field_0x14, 0); /*0x6c9d60*/
    v5 = (TextGroup *)g_FogOfWarState; /*0x6c9d6b*/
    Property::Set( /*0x6c9dba*/
      (Property *)g_FogOfWarState,
      ((int)(unsigned __int8)a2[2] >> g_BitMask_Red << g_BitShift_Blue)
    | ((unsigned __int8)BYTE2(a2[2]) >> g_BitShift_Green_0 << g_BitShift_Red)
    | ((unsigned __int8)BYTE1(a2[2]) >> g_BitMask_Blue << g_BitMask_Green));
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this->BinkMovie_field_0x10[0] + 124))(this->BinkMovie_field_0x10[0]); /*0x6c9dca*/
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)this->BinkMovie_field_0x10[0] + 128))(this->BinkMovie_field_0x10[0]); /*0x6c9dd6*/
    v20[3] = v16; /*0x6c9ddc*/
    v20[0] = 0; /*0x6c9de4*/
    v20[1] = 0; /*0x6c9de8*/
    v20[2] = v6; /*0x6c9def*/
    TextGroup::SetRect(v5, v20); /*0x6c9df3*/
    v17 = (_WORD *)a2[5]; /*0x6c9e0d*/
    Text::Layout((Text *)v5, v17, &v15, &v19, v6); /*0x6c9e11*/
    v14 = 0; /*0x6c9e1e*/
    v7 = a2[4]; /*0x6c9e26*/
    v8 = *(_DWORD *)&v5[7] * (a2[3] - 1); /*0x6c9e29*/
    if ( v7 == 2 ) /*0x6c9e30*/
    {
      v9 = (v6 - v15) / 2; /*0x6c9e3d*/
    }
    else
    {
      if ( v7 != 1 ) /*0x6c9e44*/
      {
LABEL_7:
        v13 = v6; /*0x6c9e52*/
        pad_0 = v18->__pad_0; /*0x6c9e66*/
        Font::Print((int)v5, v18->BinkMovie_field_0x10[0], v17, v14, v8, v13, v16, 0, 0, 0); /*0x6c9e78*/
        pad_0 += 9; /*0x6c9e7f*/
        *pad_0 = *BinkMovie_field_0x14; /*0x6c9e85*/
        pad_0[1] = BinkMovie_field_0x14[1]; /*0x6c9e8a*/
        pad_0[2] = BinkMovie_field_0x14[2]; /*0x6c9e90*/
        v11 = v15; /*0x6c9e93*/
        pad_0[3] = BinkMovie_field_0x14[3]; /*0x6c9e9e*/
        v12 = v19; /*0x6c9ea1*/
        *BinkMovie_field_0x14 = v14; /*0x6c9ea5*/
        BinkMovie_field_0x14[1] = v8; /*0x6c9ea8*/
        BinkMovie_field_0x14[2] = v11; /*0x6c9eab*/
        BinkMovie_field_0x14[3] = v12; /*0x6c9eae*/
        return; /*0x6c9eae*/
      }
      v9 = v6 - v15; /*0x6c9e4c*/
    }
    v14 = v9; /*0x6c9e4e*/
    goto LABEL_7; /*0x6c9e4e*/
  }
}



// ==== 0x006C9EC0  BinkMovie::VtableDispatch  this=BinkMovie  sig=csp ====
_DWORD *__thiscall BinkMovie::VtableDispatch(BinkMovie *this, int a2)
{
  int v3; // ecx

  v3 = a2; /*0x6c9ec3*/
  *(_DWORD *)this->__pad_0 = a2; /*0x6c9ec9*/
  *((_DWORD *)this + 513) = 0; /*0x6c9ecb*/
  a2 = 0; /*0x6c9ed1*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v3 + 8))(v3, &a2, 2); /*0x6c9ede*/
  if ( (_WORD)a2 != 0xFEFF ) /*0x6c9ee8*/
    Debug::Log(); /*0x6c9eef*/
  return this->__pad_0; /*0x6c9ef9*/
}



// ==== 0x006C9F00  ObjectClass::nullsub_40  this=ObjectClass  sig=csp ====
void nullsub_40(ObjectClass *this)
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
      ++*((_DWORD *)this + 513); /*0x6c9f48*/
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
    v5 = wcslen(L"BeginMovie"); /*0x6c9f81*/
    if ( !_wcsnicmp(v4, L"BeginMovie", v5) ) /*0x6c9f8d*/
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
          this->ptr_C = 0; /*0x6ca01a*/
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
          ++*((_DWORD *)this + 513); /*0x6ca069*/
          v12 = WideString::Trim((wchar_t *)this + 2); /*0x6ca074*/
        }
        while ( !wcslen(v12) || *v12 == 59 || !v12 || !wcslen(v12) ); /*0x6ca08e*/
        if ( *v12 == 60 && v12[wcslen(v12) - 1] == 62 ) /*0x6ca0b7*/
          break; /*0x6ca0b7*/
        v21 = wcslen(aEn); /*0x6ca188*/
        if ( !_wcsnicmp(v12, aEn, v21) ) /*0x6ca19e*/
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
char __thiscall sub_6CA1E0(ObjectClass *this, char *Source)
{
  wchar_t *p_vtable1; // ebp
  int v4; // esi
  wchar_t *v5; // edi
  void *ptr_0; // ebx
  ObjectClass *v7; // eax
  wchar_t *v8; // esi
  size_t v9; // eax
  wchar_t *v10; // eax
  const wchar_t *v11; // esi
  char v13; // [esp+11h] [ebp-47h]
  wchar_t v14; // [esp+12h] [ebp-46h] BYREF
  ObjectClass *v15; // [esp+14h] [ebp-44h]
  wchar_t Dest[32]; // [esp+18h] [ebp-40h] BYREF

  v15 = this; /*0x6ca1f5*/
  mbstowcs(Dest, Source, 0x20u); /*0x6ca1f9*/
  p_vtable1 = (wchar_t *)&this->?; /*0x6ca201*/
  while ( 1 ) /*0x6ca27e*/
  {
    while ( 1 ) /*0x6ca208*/
    {
      v13 = 0; /*0x6ca208*/
      v4 = 0; /*0x6ca20d*/
      v5 = p_vtable1; /*0x6ca20f*/
      ptr_0 = v15->AbstractClass; /*0x6ca211*/
      *p_vtable1 = 0; /*0x6ca213*/
      while ( (*(int (__thiscall **)(void *, wchar_t *, int))(*(_DWORD *)ptr_0 + 8))(ptr_0, &v14, 2) == 2 ) /*0x6ca22a*/
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
      p_vtable1[v4] = 0; /*0x6ca257*/
      ++v7[11].location[1]; /*0x6ca260*/
      v8 = WideString::Trim(p_vtable1); /*0x6ca26b*/
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
    v9 = wcslen(L"BeginMovie"); /*0x6ca296*/
    if ( !_wcsnicmp(v8, L"BeginMovie", v9) ) /*0x6ca2a2*/
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
char __stdcall sub_6CA310(wchar_t *String, int a2)
{
  wchar_t *v2; // ebp
  wchar_t *i; // edi
  const wchar_t *v4; // esi
  wchar_t *v5; // ebx
  wchar_t *v6; // eax
  wchar_t *v7; // esi
  wchar_t *v8; // eax
  const wchar_t **v9; // esi
  const wchar_t **v10; // edi
  const wchar_t *v11; // eax
  wchar_t *Stringa; // [esp+18h] [ebp+4h]

  v2 = String; /*0x6ca313*/
  for ( i = wcschr(String, 0x3Du); i; i = wcschr(v2, 0x3Du) ) /*0x6ca32c*/
  {
    v4 = v2; /*0x6ca332*/
    *i = 0; /*0x6ca336*/
    Stringa = v2; /*0x6ca33b*/
    WideString::Trim(v2); /*0x6ca33f*/
    v5 = i + 1; /*0x6ca344*/
    WideString::Trim(i + 1); /*0x6ca349*/
    if ( i[1] == 34 ) /*0x6ca352*/
    {
      v5 = i + 2; /*0x6ca354*/
      v6 = wcschr(i + 2, 0x22u); /*0x6ca35a*/
      if ( !v6 ) /*0x6ca366*/
        break; /*0x6ca366*/
      *v6 = 0; /*0x6ca36c*/
      v7 = v6 + 1; /*0x6ca371*/
      WideString::Trim(v6 + 1); /*0x6ca376*/
      if ( *v7 == 44 ) /*0x6ca37f*/
        ++v7; /*0x6ca381*/
      v2 = v7; /*0x6ca384*/
      v4 = Stringa; /*0x6ca386*/
    }
    else
    {
      v8 = wcspbrk(i + 1, L", "); /*0x6ca392*/
      if ( v8 ) /*0x6ca39c*/
      {
        *v8 = 0; /*0x6ca39e*/
        v2 = v8 + 1; /*0x6ca3a3*/
      }
      else
      {
        v2 = &g_TypeClass_DefaultString; /*0x6ca3a8*/
      }
    }
    if ( !wcslen(v4) ) /*0x6ca3ae*/
      break; /*0x6ca3ae*/
    if ( v4 && off_8421A8 ) /*0x6ca3c9*/
    {
      v9 = (const wchar_t **)&off_8421A8; /*0x6ca3cb*/
      v10 = (const wchar_t **)&off_8421A8; /*0x6ca3d0*/
      while ( _wcsicmp(*v9, Stringa) ) /*0x6ca3e4*/
      {
        v11 = v10[2]; /*0x6ca3e6*/
        v10 += 2; /*0x6ca3e9*/
        v9 = v10; /*0x6ca3ee*/
        if ( !v11 ) /*0x6ca3f0*/
          goto LABEL_18; /*0x6ca3f0*/
      }
      ((void (__fastcall *)(wchar_t *, int))v9[1])(v5, a2); /*0x6ca3fa*/
    }
LABEL_18:
    WideString::Trim(v2); /*0x6ca3fd*/
    if ( !wcslen(v2) ) /*0x6ca40f*/
      return 1; /*0x6ca48f*/
  }
  Debug::Log(); /*0x6ca426*/
  return 0; /*0x6ca440*/
}



// ==== 0x006CA4A0  sub_6CA4A0  this=-  sig=csp ====
void __stdcall sub_6CA4A0(wchar_t *String2, int a2, int a3)
{
  const wchar_t **v3; // edi
  const wchar_t **v4; // esi
  const wchar_t *v5; // eax

  if ( String2 && off_8421A8 ) /*0x6ca4b2*/
  {
    v3 = (const wchar_t **)&off_8421A8; /*0x6ca4b4*/
    v4 = (const wchar_t **)&off_8421A8; /*0x6ca4b9*/
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



// ==== 0x006CA5A0  ObjectClass::method_6CA5A0  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_6CA5A0(ObjectClass *this)
{
  wchar_t *v1; // esi
  int v2; // edi
  wchar_t *v3; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // ebp
  wchar_t *v7; // ebx
  int v8; // esi
  wchar_t Destination[12]; // [esp+10h] [ebp-18h] BYREF

  wcsncpy(Destination, (const wchar_t *)this, 0xCu); /*0x6ca5af*/
  Destination[11] = 0; /*0x6ca5bb*/
  v1 = wcschr(Destination, 0x3Au); /*0x6ca5c7*/
  *v1++ = 0; /*0x6ca5d2*/
  v2 = WideChar::ToLong((int)Destination, 0, 10); /*0x6ca5e2*/
  v3 = wcschr(v1, 0x3Au); /*0x6ca5e9*/
  *v3 = 0; /*0x6ca5f0*/
  v4 = WideChar::ToLong((int)v1, 0, 10); /*0x6ca5f5*/
  v5 = (int)(v3 + 1); /*0x6ca5fa*/
  v6 = v4; /*0x6ca600*/
  v7 = wcschr(v3 + 1, 0x3Au); /*0x6ca607*/
  *v7 = 0; /*0x6ca60e*/
  v8 = WideChar::ToLong(v5, 0, 10); /*0x6ca61e*/
  return 60 * WideChar::ToLong((int)(v7 + 1), 0, 10) / 0x64u + 60 * (v8 + 60 * (v6 + 60 * v2)); /*0x6ca640*/
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
int __fastcall sub_6CA6A0(wchar_t *String1, int a2)
{
  const wchar_t *v2; // ebx
  wchar_t *v4; // eax
  wchar_t *v5; // esi
  int v6; // edi
  int result; // eax
  const wchar_t **v8; // eax
  wchar_t **v9; // esi
  wchar_t *v10; // ecx

  v2 = String1; /*0x6ca6a4*/
  v4 = wcschr(String1, 0x3Au); /*0x6ca6ab*/
  v5 = v4; /*0x6ca6b0*/
  if ( v4 ) /*0x6ca6b7*/
  {
    *v4 = 0; /*0x6ca6be*/
    *(_DWORD *)(a2 + 12) = wcstol(v2, 0, 0); /*0x6ca6cb*/
    v2 = v5 + 1; /*0x6ca6ce*/
  }
  v6 = 0; /*0x6ca6d7*/
  result = 2; /*0x6ca6db*/
  if ( off_8421D8 ) /*0x6ca6e0*/
  {
    v8 = (const wchar_t **)&off_8421D8; /*0x6ca6e2*/
    v9 = &off_8421D8; /*0x6ca6e7*/
    while ( 1 ) /*0x6ca6ed*/
    {
      result = _wcsicmp(v2, *v8); /*0x6ca6ed*/
      if ( !result ) /*0x6ca6f7*/
        break; /*0x6ca6f7*/
      v10 = v9[2]; /*0x6ca6f9*/
      v9 += 2; /*0x6ca6fc*/
      ++v6; /*0x6ca6ff*/
      v8 = (const wchar_t **)v9; /*0x6ca700*/
      if ( !v10 ) /*0x6ca704*/
      {
        result = 2; /*0x6ca706*/
        goto LABEL_8; /*0x6ca706*/
      }
    }
    *(_DWORD *)(a2 + 16) = dword_8421DC[2 * v6]; /*0x6ca71a*/
  }
  else
  {
LABEL_8:
    *(_DWORD *)(a2 + 16) = 2; /*0x6ca70b*/
  }
  return result; /*0x6ca70b*/
}



// ==== 0x006CA730  sub_6CA730  this=-  sig=ida-proto ====
int __fastcall sub_6CA730(wchar_t *Str, ObjectClass *a2)
{
  wchar_t *v4; // edi
  char v5; // al
  int v6; // esi
  wchar_t *v7; // edi
  unsigned __int8 v9; // [esp+Ch] [ebp-Ch]
  char v10; // [esp+10h] [ebp-8h]
  char v11; // [esp+14h] [ebp-4h]

  v4 = wcschr(Str, 0x3Au); /*0x6ca742*/
  *v4 = 0; /*0x6ca749*/
  v5 = WideChar::ToLong((int)Str, 0, 10); /*0x6ca74e*/
  v6 = (int)(v4 + 1); /*0x6ca753*/
  v11 = v5; /*0x6ca759*/
  v7 = wcschr(v4 + 1, 0x3Au); /*0x6ca762*/
  *v7 = 0; /*0x6ca769*/
  v10 = WideChar::ToLong(v6, 0, 10); /*0x6ca77b*/
  v9 = WideChar::ToLong((int)(v7 + 1), 0, 10); /*0x6ca78c*/
  return sub_6C9940(a2, v11, v10, v9); /*0x6ca7a1*/
}



// ==== 0x006CA7B0  sub_6CA7B0  this=-  sig=ida-proto ====
void __fastcall sub_6CA7B0(wchar_t *String, ObjectClass *a2)
{
  sub_6C9960(a2, String); /*0x6ca7b3*/
}



// ==== 0x006CA7C0  _DynamicVectorClass_PAVSubTitle::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_SubTitle::Destroy(_DynamicVectorClass_PAVSubTitle *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6ca7c6*/
  this->m_10 = 0; /*0x6ca7c9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6ca7d0*/
  {
    __3_YAXPAX_Z(v2); /*0x6ca7d6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6ca7de*/
  }
  BYTE1(this->m_C) = 0; /*0x6ca7e1*/
  this->m_8 = 0; /*0x6ca7e4*/
}



// ==== 0x006CA7F0  _DynamicVectorClass_PAVSubTitle::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SubTitle::GetItemIndex(_DynamicVectorClass_PAVSubTitle *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6ca7f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6ca805*/
  else
    return 0; /*0x6ca7f7*/
}



// ==== 0x006CA810  _VectorClass_PAVSubTitle::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SubTitle::Get(_VectorClass_PAVSubTitle *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6ca81a*/
}



// ==== 0x006CA820  _VectorClass_PAVSubTitle::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SubTitle::Add(_VectorClass_PAVSubTitle *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x6ca822*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6ca82d*/
  {
    v3 = 0; /*0x6ca82f*/
    if ( m_8 <= 0 ) /*0x6ca833*/
      return 1; /*0x6ca853*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6ca835*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6ca83b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6ca844*/
    {
      ++v3; /*0x6ca846*/
      ++v4; /*0x6ca847*/
      if ( v3 >= m_8 ) /*0x6ca84c*/
        return 1; /*0x6ca84c*/
    }
  }
  return 0; /*0x6ca84e*/
}



// ==== 0x006CA860  _DynamicVectorClass_PAVSubTitle::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_SubTitle::SetCapacity(_DynamicVectorClass_PAVSubTitle *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6ca86c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6ca872*/
    if ( a3 ) /*0x6ca878*/
      v4 = a3; /*0x6ca88e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6ca88a*/
    LOBYTE(this->m_C) = 1; /*0x6ca892*/
    if ( !v4 ) /*0x6ca896*/
      return 0; /*0x6ca90a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6ca898*/
    {
      m_8 = this->m_8; /*0x6ca89f*/
      if ( a2 < m_8 ) /*0x6ca8a4*/
        m_8 = a2; /*0x6ca8a6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6ca8ac*/
        ++i; /*0x6ca8b1*/
      if ( BYTE1(this->m_C) ) /*0x6ca8be*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6ca8c9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6ca8d1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x6ca8da*/
    this->m_8 = a2; /*0x6ca8e2*/
    BYTE1(this->m_C) = a3 == 0; /*0x6ca8e5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVSubTitle *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6ca8ee*/
  }
  v7 = this->m_8; /*0x6ca8f1*/
  if ( v7 < this->m_10 ) /*0x6ca8f9*/
    this->m_10 = v7; /*0x6ca8fb*/
  return 1; /*0x6ca8fe*/
}



// ==== 0x006CA910  _DynamicVectorClass_PAVSubTitle::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_SubTitle::FindItemIndex(_DynamicVectorClass_PAVSubTitle *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6ca910*/
  result = 0; /*0x6ca913*/
  if ( m_10 <= 0 ) /*0x6ca918*/
    return -1; /*0x6ca92f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6ca91e*/
  {
    if ( ++result >= m_10 ) /*0x6ca92d*/
      return -1; /*0x6ca92d*/
  }
  return result; /*0x6ca932*/
}



// ==== 0x006CA940  Render_Parse_6CA940  this=-  sig=csp ====
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
_DWORD *__thiscall VectorClass_ptr_SubTitle::Constructor_VectorClass_SubTitle___(
        _DynamicVectorClass_PAVSubTitle *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6ca9c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SubTitle *>::`vftable'; /*0x6ca9c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6ca9d0*/
  {
    __3_YAXPAX_Z(v3); /*0x6ca9d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6ca9e0*/
  }
  BYTE1(this->m_C) = 0; /*0x6ca9eb*/
  this->m_8 = 0; /*0x6ca9f1*/
  if ( (a2 & 1) != 0 ) /*0x6ca9f8*/
    __3_YAXPAX_Z(this); /*0x6ca9fb*/
  return this->__pad_0; /*0x6caa05*/
}



// ==== 0x006CAA10  _VectorClass_PAVSubTitle::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SubTitle::Release(_VectorClass_PAVSubTitle *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6caa1c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6caa26*/
    if ( a3 ) /*0x6caa2c*/
      v4 = a3; /*0x6caa42*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6caa3e*/
    LOBYTE(this->m_C) = 1; /*0x6caa46*/
    if ( v4 ) /*0x6caa4a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6caa55*/
      {
        m_8 = this->m_8; /*0x6caa5c*/
        if ( a2 < m_8 ) /*0x6caa61*/
          m_8 = a2; /*0x6caa63*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6caa69*/
          ++i; /*0x6caa6e*/
        if ( BYTE1(this->m_C) ) /*0x6caa7b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6caa86*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6caa8e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6caa97*/
      this->m_8 = a2; /*0x6caa9f*/
      BYTE1(this->m_C) = a3 == 0; /*0x6caaa2*/
      return 1; /*0x6caaa8*/
    }
    else
    {
      return 0; /*0x6caa4f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVSubTitle *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6caab2*/
    return 1; /*0x6caab8*/
  }
}



// ==== 0x006CAAC0  _VectorClass_PAVSubTitle::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_SubTitle::Remove(_VectorClass_PAVSubTitle *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6caacd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6caad3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6caadb*/
  }
  BYTE1(this->m_C) = 0; /*0x6caade*/
  this->m_8 = 0; /*0x6caae1*/
}



// ==== 0x006CAAF0  _VectorClass_PAVSubTitle::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SubTitle::GetSize(_VectorClass_PAVSubTitle *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6caaf0*/
    return 0; /*0x6caaf8*/
  m_8 = this->m_8; /*0x6caafe*/
  result = 0; /*0x6cab01*/
  if ( m_8 <= 0 ) /*0x6cab05*/
    return -1; /*0x6cab1c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6cab0b*/
  {
    if ( ++result >= m_8 ) /*0x6cab1a*/
      return -1; /*0x6cab1a*/
  }
  return result; /*0x6caafa*/
}



// ==== 0x006CAB30  _VectorClass_PAVSubTitle::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SubTitle::GetCapacity(_VectorClass_PAVSubTitle *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6cab30*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6cab45*/
  else
    return 0; /*0x6cab37*/
}



// ==== 0x006CAB50  _VectorClass_PAVSubTitle::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_SubTitle::QueryInterface(_VectorClass_PAVSubTitle *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6cab53*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SubTitle *>::`vftable'; /*0x6cab56*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6cab60*/
  {
    __3_YAXPAX_Z(v3); /*0x6cab68*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6cab70*/
  }
  BYTE1(this->m_C) = 0; /*0x6cab7b*/
  this->m_8 = 0; /*0x6cab81*/
  if ( (a2 & 1) != 0 ) /*0x6cab88*/
    __3_YAXPAX_Z(this); /*0x6cab8b*/
  return this->__pad_0; /*0x6cab95*/
}



// ==== 0x006CABA0  VectorClass::Render_Parse_6CABA0  this=VectorClass  sig=csp ====
_DWORD *__thiscall Render_Parse_6CABA0(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x6cabab*/
  this->Capacity = a2; /*0x6cabae*/
  this->IsInitialized = 1; /*0x6cabb1*/
  this->IsAllocated = 0; /*0x6cabb5*/
  this->ptr_0 = &VectorClass<SubTitle *>::`vftable'; /*0x6cabb8*/
  if ( a2 ) /*0x6cabbe*/
  {
    if ( a3 ) /*0x6cabc6*/
    {
      this->Items = (void *)a3; /*0x6cabc8*/
      return &this->ptr_0; /*0x6cabce*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x6cabdd*/
    this->IsAllocated = 1; /*0x6cabe0*/
  }
  return &this->ptr_0; /*0x6cabcd*/
}



// ==== 0x006CABF0  sub_6CABF0  this=-  sig=ida-proto ====
int sub_6CABF0()
{
  dword_B0BFF0 = 0; /*0x6cabf2*/
  dword_B0BFF4 = 0; /*0x6cabf7*/
  dword_B0BFF8 = 0; /*0x6cabfc*/
  dword_B0BFFC = 0; /*0x6cac01*/
  return 0; /*0x6cac06*/
}



// ==== 0x006CAC10  sub_6CAC10  this=-  sig=ida-proto ====
void sub_6CAC10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6cac1c*/
  dbl_B0C008 = Math::Sqrt(v0 + v0); /*0x6cac2e*/
}



// ==== 0x006CAC40  sub_6CAC40  this=-  sig=ida-proto ====
void sub_6CAC40()
{
  dbl_B0C080 = dbl_B0C008 / 60.0; /*0x6cac4c*/
}



// ==== 0x006CAC60  sub_6CAC60  this=-  sig=ida-proto ====
void sub_6CAC60()
{
  dbl_B0C068 = 1.0 / dbl_B0C080; /*0x6cac6c*/
}



// ==== 0x006CAC80  sub_6CAC80  this=-  sig=ida-proto ====
void sub_6CAC80()
{
  dbl_B0C060 = 0.0174532925199433 * 45.0; /*0x6cac8c*/
}



// ==== 0x006CACA0  sub_6CACA0  this=-  sig=ida-proto ====
void sub_6CACA0()
{
  dbl_B0C010 = 0.0174532925199433 * 60.0; /*0x6cacac*/
}



// ==== 0x006CACC0  sub_6CACC0  this=-  sig=ida-proto ====
void sub_6CACC0()
{
  dbl_B0BFE8 = 0.0174532925199433 * 90.0; /*0x6caccc*/
}



// ==== 0x006CACE0  sub_6CACE0  this=-  sig=ida-proto ====
__int64 sub_6CACE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0BFE8 - dbl_B0C010); /*0x6cacf2*/
  result = Math::RoundToInt(v0 * dbl_B0C008 * 0.5); /*0x6cad06*/
  dword_B0C088 = result; /*0x6cad0b*/
  return result; /*0x6cad10*/
}



// ==== 0x006CAD20  sub_6CAD20  this=-  sig=ida-proto ====
void sub_6CAD20()
{
  dbl_B0C018 = Math::ArcTan((double)dword_B0C088 * 0.00390625); /*0x6cad37*/
}



// ==== 0x006CAD50  sub_6CAD50  this=-  sig=ida-proto ====
void sub_6CAD50()
{
  dbl_B0C030 = Math::ArcTan((double)(2 * dword_B0C088) / dbl_B0C008); /*0x6cad72*/
}



// ==== 0x006CAD80  sub_6CAD80  this=-  sig=ida-proto ====
__int64 sub_6CAD80()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0C088) + 0.5); /*0x6cad9b*/
  dword_B0C07C = result; /*0x6cada0*/
  return result; /*0x6cada6*/
}



// ==== 0x006CADB0  sub_6CADB0  this=-  sig=ida-proto ====
int sub_6CADB0()
{
  dword_B0C000 = 0; /*0x6cadb2*/
  return 0; /*0x6cadbe*/
}



// ==== 0x006CADC0  sub_6CADC0  this=-  sig=ida-proto ====
int sub_6CADC0()
{
  dword_B0C020 = 0; /*0x6cadc2*/
  dword_B0C024 = 0; /*0x6cadc7*/
  dword_B0C028 = 0; /*0x6cadcc*/
  return 0; /*0x6cadd1*/
}



// ==== 0x006CADE0  sub_6CADE0  this=-  sig=ida-proto ====
int sub_6CADE0()
{
  dword_B0C078 = 0; /*0x6cade5*/
  dword_B0C070 = 128; /*0x6cadef*/
  dword_B0C074 = 128; /*0x6cadf4*/
  return 128; /*0x6cadf9*/
}



// ==== 0x006CAE00  sub_6CAE00  this=-  sig=ida-proto ====
int sub_6CAE00()
{
  dword_B0C038 = 0; /*0x6cae1b*/
  dword_B0C03C = 1; /*0x6cae2a*/
  dword_B0C040 = -65535; /*0x6cae45*/
  dword_B0C044 = -65536; /*0x6cae59*/
  dword_B0C048 = -1; /*0x6cae6d*/
  dword_B0C050 = 0x1FFFF; /*0x6cae98*/
  dword_B0C04C = 0xFFFF; /*0x6caeab*/
  dword_B0C054 = 0x10000; /*0x6caeb1*/
  dword_B0C058 = 65537; /*0x6caeb7*/
  return 65537; /*0x6caebe*/
}



// ==== 0x006CAEC0  SuperClass::Constructor  this=SuperClass  sig=csp ====
int __thiscall SuperClass::Constructor(SuperClass *this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6caec3*/
  this->SuperClass_field_0x24 = (void *)-1; /*0x6caecd*/
  this->SuperClass_field_0x28 = 0; /*0x6caed0*/
  this->SuperClass_field_0x2C = 0; /*0x6caed3*/
  this->SuperClass_field_0x30 = *(void **)&stru_A8EB00.?[416]; /*0x6caedc*/
  this->SuperClass_field_0x38 = 0; /*0x6caedf*/
  *(_DWORD *)&this->__pad_3C[12] = 0; /*0x6caee2*/
  this->__pad_3C[4] = 0; /*0x6caee5*/
  *(_DWORD *)&this->__pad_3C[16] = 0; /*0x6caee8*/
  *(_DWORD *)&this->__pad_3C[20] = -1; /*0x6caeeb*/
  LOBYTE(this->SuperClass_field_0x60) = 1; /*0x6caeee*/
  *(void **)((char *)&this->SuperClass_field_0x60 + 2) = (void *)dword_B0C000; /*0x6caef8*/
  this->SuperClass_field_0x68 = 0; /*0x6caefb*/
  LOBYTE(this->SuperClass_field_0x6C) = 0; /*0x6caefe*/
  BYTE1(this->SuperClass_field_0x6C) = 0; /*0x6caf01*/
  BYTE2(this->SuperClass_field_0x6C) = 0; /*0x6caf04*/
  HIBYTE(this->SuperClass_field_0x6C) = 0; /*0x6caf07*/
  LOBYTE(this->SuperClass_field_0x70) = 0; /*0x6caf0a*/
  this->SuperClass_field_0x7C = (void *)-1; /*0x6caf0d*/
  this->SuperClass_field_0x0 = &SuperClass::`vftable'; /*0x6caf10*/
  this->SuperClass_field_0x4 = &SuperClass::`vftable'; /*0x6caf16*/
  this->SuperClass_field_0x8 = &SuperClass::`vftable'; /*0x6caf1d*/
  *(_DWORD *)this->__pad_C = &SuperClass::`vftable'; /*0x6caf24*/
  *(_DWORD *)this->__pad_3C = &g_TypeClass_DefaultString; /*0x6caf2b*/
  if ( dword_A83CC8 < dword_A83CC0 /*0x6caf64*/
    || (byte_A83CC5 || !dword_A83CC0)
    && dword_A83CCC > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A83CB8 + 8))(
         &dword_A83CB8,
         dword_A83CC0 + dword_A83CCC,
         0) )
  {
    v2 = dword_A83CC8++; /*0x6caf71*/
    *((_DWORD *)dword_A83CBC + v2) = this; /*0x6caf80*/
  }
  return (int)this; /*0x6caf85*/
}



// ==== 0x006CAF90  SuperClass::Construct  this=SuperClass  sig=csp ====
int __thiscall SuperClass_Constructor(int this, int a2, int a3)
{
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6caf94*/
  *(_DWORD *)(this + 40) = a2; /*0x6cafa4*/
  *(_DWORD *)(this + 36) = -1; /*0x6cafa7*/
  *(_DWORD *)(this + 44) = a3; /*0x6cafaa*/
  *(_DWORD *)(this + 48) = dword_A8ED84; /*0x6cafb5*/
  *(_DWORD *)(this + 56) = 0; /*0x6cafb8*/
  *(_DWORD *)(this + 72) = 0; /*0x6cafbb*/
  *(_BYTE *)(this + 64) = 0; /*0x6cafbe*/
  *(_DWORD *)(this + 76) = 0; /*0x6cafc1*/
  *(_DWORD *)(this + 80) = -1; /*0x6cafc4*/
  *(_BYTE *)(this + 96) = 1; /*0x6cafc7*/
  v4 = dword_B0C000; /*0x6cafcb*/
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
  *(_DWORD *)(this + 12) = &SuperClass::`vftable'; /*0x6cb00a*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x6cb011*/
  if ( dword_A83CC8 < dword_A83CC0 /*0x6cb049*/
    || (byte_A83CC5 || !dword_A83CC0)
    && dword_A83CCC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83CB8 + 8))(
         &dword_A83CB8,
         dword_A83CC0 + dword_A83CCC,
         0) )
  {
    v5 = dword_A83CC8++; /*0x6cb056*/
    *((_DWORD *)dword_A83CBC + v5) = this; /*0x6cb065*/
  }
  if ( dword_B0F680 < dword_B0F678 /*0x6cb09c*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F678 + dword_B0F684,
         0) )
  {
    v6 = dword_B0F680++; /*0x6cb0a9*/
    *((_DWORD *)dword_B0F674 + v6) = this; /*0x6cb0b8*/
  }
  if ( dword_B0F6D8 < dword_B0F6D0 /*0x6cb0ef*/
    || (byte_B0F6D5 || !dword_B0F6D0)
    && dword_B0F6DC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F6C8 + 8))(
         &dword_B0F6C8,
         dword_B0F6D0 + dword_B0F6DC,
         0) )
  {
    v7 = dword_B0F6D8++; /*0x6cb0fc*/
    *((_DWORD *)dword_B0F6CC + v7) = this; /*0x6cb10b*/
  }
  return this; /*0x6cb110*/
}



// ==== 0x006CB120  SuperClass::CleanupMembers  this=SuperClass  sig=csp ====
void __thiscall SuperClass::CleanupMembers(int this)
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
  *(_DWORD *)(this + 12) = &SuperClass::`vftable'; /*0x6cb13d*/
  if ( v2 ) /*0x6cb144*/
  {
    *(_BYTE *)(v2 + 405) = 0; /*0x6cb146*/
    *(_DWORD *)(this + 104) = 0; /*0x6cb14d*/
    v9 = this; /*0x6cb164*/
    v3 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.?[0] + 16))(g_BuildingLoadQueue_Array.?, &v9); /*0x6cb168*/
    if ( v3 != -1 ) /*0x6cb16e*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v3); /*0x6cb176*/
  }
  if ( *(_BYTE *)(this + 108) ) /*0x6cb17b*/
  {
    v9 = this; /*0x6cb192*/
    v4 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.?[0] + 16))(g_BuildingLoadQueue_Array.?, &v9); /*0x6cb196*/
    if ( v4 != -1 ) /*0x6cb19c*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v4); /*0x6cb1a4*/
    *(_BYTE *)(this + 108) = 0; /*0x6cb1a9*/
  }
  v9 = this; /*0x6cb1bd*/
  v5 = (*((int (__thiscall **)(SuperClass *, int *))stru_A83D50.SuperClass_field_0x0 + 4))(&stru_A83D50, &v9); /*0x6cb1c1*/
  if ( v5 != -1 && v5 < (int)stru_A83D50.SuperClass_field_0x10 ) /*0x6cb1d1*/
  {
    --stru_A83D50.SuperClass_field_0x10; /*0x6cb1d6*/
    for ( ; /*0x6cb1dc*/
          v5 < (int)stru_A83D50.SuperClass_field_0x10;
          *((_DWORD *)stru_A83D50.SuperClass_field_0x4 + v5 - 1) = *((_DWORD *)stru_A83D50.SuperClass_field_0x4 + v5) )
    {
      ++v5; /*0x6cb1e4*/
    }
  }
  v9 = this; /*0x6cb206*/
  v6 = (*(int (__thiscall **)(_DWORD *, int *))(dword_A83CB8 + 16))(&dword_A83CB8, &v9); /*0x6cb20a*/
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
  v7 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6cb253*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v9);
  if ( v7 != -1 && v7 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x6cb263*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x6cb268*/
    for ( ; /*0x6cb26e*/
          v7 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v7) )
    {
      ++v7; /*0x6cb276*/
    }
  }
  v9 = this; /*0x6cb298*/
  v8 = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E88 + 16))( /*0x6cb29c*/
         g_BuildingLoadQueue_Array.__pad_E88,
         &v9);
  if ( v8 != -1 && v8 < *(int *)&g_BuildingLoadQueue_Array.__pad_E88[16] ) /*0x6cb2ac*/
  {
    --*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[16]; /*0x6cb2b1*/
    for ( ; /*0x6cb2b7*/
          v8 < *(int *)&g_BuildingLoadQueue_Array.__pad_E88[16];
          *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[4] + 4 * v8 - 4) = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[4] + 4 * v8) )
    {
      ++v8; /*0x6cb2bf*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x6cb2d3*/
}



// ==== 0x006CB3A0  SuperClass::CreateChronoAnim  this=SuperClass  sig=csp ====
void **__thiscall SuperClass::CreateChronoAnim(SuperClass *this, int a2, int a3, int a4)
{
  _BYTE *SuperClass_field_0x68; // eax
  int v6; // eax
  int v7; // eax
  void **result; // eax
  SuperClass *v9; // [esp+4h] [ebp-10h] BYREF
  int v10[3]; // [esp+8h] [ebp-Ch] BYREF

  SuperClass_field_0x68 = this->SuperClass_field_0x68; /*0x6cb3a6*/
  if ( SuperClass_field_0x68 ) /*0x6cb3ab*/
  {
    SuperClass_field_0x68[405] = 0; /*0x6cb3ad*/
    this->SuperClass_field_0x68 = 0; /*0x6cb3b4*/
    v9 = this; /*0x6cb3cb*/
    v6 = (*(int (__thiscall **)(int *, SuperClass **))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x6cb3cf*/
           g_BuildingLoadQueue_Array.?,
           &v9);
    if ( v6 != -1 ) /*0x6cb3d5*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v6); /*0x6cb3dd*/
  }
  if ( LOBYTE(this->SuperClass_field_0x6C) ) /*0x6cb3e2*/
  {
    v9 = this; /*0x6cb3f9*/
    v7 = (*(int (__thiscall **)(int *, SuperClass **))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x6cb3fd*/
           g_BuildingLoadQueue_Array.?,
           &v9);
    if ( v7 != -1 ) /*0x6cb403*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v7); /*0x6cb40b*/
    LOBYTE(this->SuperClass_field_0x6C) = 0; /*0x6cb410*/
  }
  result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6cb419*/
  if ( result ) /*0x6cb423*/
  {
    v10[0] = a2; /*0x6cb444*/
    v10[1] = a3; /*0x6cb455*/
    v10[2] = a4 + 5; /*0x6cb459*/
    result = AnimClass::ctor( /*0x6cb467*/
               (AnimClass *)result,
               *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 816),
               v10,
               0,
               1,
               (void *)0x600,
               0,
               0);
    if ( result ) /*0x6cb470*/
    {
      this->SuperClass_field_0x68 = result; /*0x6cb472*/
      result = (void **)g_BuildingLoadQueue_Array.?; /*0x6cb475*/
      if ( g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.? /*0x6cb4ae*/
        || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
        && g_BuildingLoadQueue_Array.?[2] > 0
        && (result = (void **)(*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[0] + 8))(
                                g_BuildingLoadQueue_Array.?,
                                g_BuildingLoadQueue_Array.? + g_BuildingLoadQueue_Array.?[2],
                                0),
            (_BYTE)result) )
      {
        result = (void **)g_BuildingLoadQueue_Array.?[1]++; /*0x6cb4b6*/
        *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * (_DWORD)result) = this; /*0x6cb4c5*/
      }
    }
  }
  return result; /*0x6cb4c8*/
}



// ==== 0x006CB4D0  SuperClass::SetOnHold  this=SuperClass  sig=csp ====
int __thiscall SuperClass::SetOnHold(int this, char a2)
{
  int result; // eax
  int v3; // esi
  int v4; // eax

  if ( !*(_BYTE *)(this + 109) || *(_BYTE *)(this + 110) || a2 == *(_BYTE *)(this + 112) || !*(_BYTE *)(this + 96) ) /*0x6cb4ea*/
  {
    LOBYTE(result) = 0; /*0x6cb552*/
  }
  else
  {
    if ( a2 || (result = *(_DWORD *)(this + 40), *(_BYTE *)(result + 245)) ) /*0x6cb4f9*/
    {
      v3 = *(_DWORD *)(this + 48); /*0x6cb51c*/
      if ( v3 != -1 ) /*0x6cb522*/
      {
        v4 = *(_DWORD *)(this + 56); /*0x6cb524*/
        if ( (int)dword_A8ED84 - v3 >= v4 ) /*0x6cb536*/
          result = 0; /*0x6cb53c*/
        else
          result = v4 - ((_DWORD)dword_A8ED84 - v3); /*0x6cb538*/
        *(_DWORD *)(this + 56) = result; /*0x6cb53e*/
        *(_DWORD *)(this + 48) = -1; /*0x6cb541*/
      }
    }
    else if ( *(_DWORD *)(this + 48) == -1 ) /*0x6cb507*/
    {
      *(_DWORD *)(this + 48) = dword_A8ED84; /*0x6cb510*/
      *(_BYTE *)(this + 112) = 0; /*0x6cb513*/
      LOBYTE(result) = 1; /*0x6cb516*/
      return result; /*0x6cb519*/
    }
    *(_BYTE *)(this + 112) = a2; /*0x6cb548*/
    LOBYTE(result) = 1; /*0x6cb54c*/
  }
  return result; /*0x6cb518*/
}



// ==== 0x006CB560  SuperClass::StartTimer  this=JumpjetLocomotionClass  sig=csp ====
char __thiscall SuperClass::StartTimer(int this, int a2, char a3, char a4)
{
  char v5; // al
  int v6; // ecx
  int v7; // edx
  void *v8; // eax
  int v9; // eax
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edi
  int v15; // eax
  int DefaultTimer; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v21; // [esp+8h] [ebp-Ch] BYREF
  int v22; // [esp+Ch] [ebp-8h]
  int v23; // [esp+10h] [ebp-4h]

  if ( !*(_BYTE *)(this + 109) ) /*0x6cb569*/
  {
    v5 = a2; /*0x6cb572*/
    v6 = *(_DWORD *)(this + 40); /*0x6cb576*/
    *(_BYTE *)(this + 109) = 1; /*0x6cb579*/
    *(_BYTE *)(this + 110) = v5; /*0x6cb57d*/
    *(_BYTE *)(this + 64) = 0; /*0x6cb580*/
    v7 = *(_DWORD *)(v6 + 96); /*0x6cb583*/
    LOBYTE(a2) = 0; /*0x6cb589*/
    *(_DWORD *)(this + 60) = v7; /*0x6cb58d*/
    if ( !v5 && *(_BYTE *)(this + 112) && *(_BYTE *)(this + 96) ) /*0x6cb597*/
    {
      if ( *(_BYTE *)(v6 + 245) ) /*0x6cb59c*/
      {
        if ( *(_DWORD *)(this + 48) != -1 ) /*0x6cb5bd*/
        {
          *(_DWORD *)(this + 56) = Locomotor::GetSpeed((Locomotor *)(this + 48)); /*0x6cb5c6*/
          *(_DWORD *)(this + 48) = -1; /*0x6cb5c9*/
        }
      }
      else if ( *(_DWORD *)(this + 48) == -1 ) /*0x6cb5a8*/
      {
        *(_DWORD *)(this + 48) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6cb5af*/
      }
      *(_BYTE *)(this + 112) = 0; /*0x6cb5cf*/
    }
    if ( *(_BYTE *)(*(_DWORD *)(this + 40) + 244) /*0x6cb61f*/
      && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 44) + 52) + 422)
      && ((int)stru_A83D50.SuperClass_field_0x10 < (int)stru_A83D50.SuperClass_field_0x8
       || (stru_A83D50.__pad_C[1] || !stru_A83D50.SuperClass_field_0x8)
       && *(int *)stru_A83D50.__pad_14 > 0
       && (*((unsigned __int8 (__thiscall **)(SuperClass *, char *, _DWORD))stru_A83D50.SuperClass_field_0x0 + 2))(
            &stru_A83D50,
            (char *)stru_A83D50.SuperClass_field_0x8 + *(_DWORD *)stru_A83D50.__pad_14,
            0)) )
    {
      v8 = stru_A83D50.SuperClass_field_0x10++; /*0x6cb62c*/
      *((_DWORD *)stru_A83D50.SuperClass_field_0x4 + (_DWORD)v8) = this; /*0x6cb63b*/
    }
    v9 = *(_DWORD *)(this + 40); /*0x6cb63e*/
    if ( *(_BYTE *)(v9 + 245) ) /*0x6cb641*/
    {
      v10 = *(_DWORD *)(this + 36); /*0x6cb649*/
      *(_DWORD *)(this + 120) = -1; /*0x6cb64c*/
      if ( v10 == -1 ) /*0x6cb656*/
        v10 = *(_DWORD *)(v9 + 176); /*0x6cb658*/
      v11 = (_DWORD *)(this + 48); /*0x6cb664*/
      *(_DWORD *)(this + 48) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6cb669*/
      *(_DWORD *)(this + 52) = v22; /*0x6cb66f*/
      *(_DWORD *)(this + 56) = v10; /*0x6cb672*/
      v12 = *(_DWORD *)(this + 48); /*0x6cb675*/
      if ( v12 != -1 ) /*0x6cb67a*/
      {
        v13 = *(_DWORD *)(this + 56); /*0x6cb680*/
        v14 = *(_DWORD *)&stru_A8EB00.?[416] - v12; /*0x6cb68e*/
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v12 >= v13 ) /*0x6cb692*/
        {
          *(_DWORD *)(this + 56) = 0; /*0x6cb6a6*/
          *v11 = -1; /*0x6cb6a9*/
        }
        else
        {
          *v11 = -1; /*0x6cb696*/
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
        a2 = this; /*0x6cb6ce*/
        VectorClass::RemoveAt((VectorClass *)g_BuildingLoadQueue_Array.?, (int)&a2); /*0x6cb6d2*/
      }
      if ( *(_BYTE *)(this + 108) ) /*0x6cb6d7*/
      {
        a2 = this; /*0x6cb6e6*/
        VectorClass::RemoveAt((VectorClass *)g_BuildingLoadQueue_Array.?, (int)&a2); /*0x6cb6ea*/
        *(_BYTE *)(this + 108) = 0; /*0x6cb6ef*/
      }
      if ( !*(_BYTE *)(this + 109) /*0x6cb704*/
        || *(_BYTE *)(this + 111)
        || *(_BYTE *)(this + 112) && !*(_BYTE *)(*(_DWORD *)(this + 40) + 237) )
      {
        LOBYTE(a2) = 0; /*0x6cb757*/
      }
      else
      {
        *(_DWORD *)(this + 120) = -1; /*0x6cb70f*/
        SuperClass::SetCurrentFrame((SuperClass *)(this + 48)); /*0x6cb718*/
        DefaultTimer = Super::GetDefaultTimer((Super *)this); /*0x6cb71f*/
        Timer::Start((Timer *)&v21, DefaultTimer); /*0x6cb729*/
        v17 = v22; /*0x6cb732*/
        v18 = v23; /*0x6cb736*/
        *(_DWORD *)(this + 48) = v21; /*0x6cb73a*/
        v19 = *(_DWORD *)(this + 40); /*0x6cb73c*/
        *(_DWORD *)(this + 52) = v17; /*0x6cb73f*/
        *(_DWORD *)(this + 56) = v18; /*0x6cb742*/
        if ( *(_BYTE *)(v19 + 229) ) /*0x6cb745*/
          *(_DWORD *)(this + 124) = 0; /*0x6cb74d*/
        LOBYTE(a2) = 1; /*0x6cb750*/
      }
    }
    if ( a4 && *(_BYTE *)(this + 109) ) /*0x6cb764*/
    {
      if ( *(_BYTE *)(this + 110) ) /*0x6cb769*/
        goto LABEL_45; /*0x6cb76c*/
      if ( *(_BYTE *)(this + 112) != 1 ) /*0x6cb772*/
      {
        if ( *(_BYTE *)(this + 96) ) /*0x6cb774*/
        {
          SuperClass::AdvanceCountdown((SuperClass *)(this + 48)); /*0x6cb77c*/
          *(_BYTE *)(this + 112) = 1; /*0x6cb781*/
        }
      }
    }
    if ( !*(_BYTE *)(this + 110) ) /*0x6cb788*/
      return a2; /*0x6cb79f*/
LABEL_45:
    SuperClass::AnnounceReady(this, a3); /*0x6cb78a*/
    return a2; /*0x6cb791*/
  }
  return 0; /*0x6cb79a*/
}



// ==== 0x006CB7B0  SuperClass::Lose  this=SuperClass  sig=csp ====
char __thiscall SuperClass::Lose(SuperClass *this)
{
  int v1; // eax
  SuperClass *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this; /*0x6cb7b0*/
  if ( !BYTE1(this->SuperClass_field_0x6C) ) /*0x6cb7b1*/
    return 0; /*0x6cb80d*/
  HIBYTE(this->SuperClass_field_0x6C) = 0; /*0x6cb7ba*/
  BYTE1(this->SuperClass_field_0x6C) = 0; /*0x6cb7bd*/
  v3 = this; /*0x6cb7ca*/
  v1 = (*((int (__thiscall **)(SuperClass *, SuperClass **))stru_A83D50.SuperClass_field_0x0 + 4))(&stru_A83D50, &v3); /*0x6cb7d4*/
  if ( v1 != -1 && v1 < (int)stru_A83D50.SuperClass_field_0x10 ) /*0x6cb7e4*/
  {
    --stru_A83D50.SuperClass_field_0x10; /*0x6cb7e9*/
    for ( ; /*0x6cb7ef*/
          v1 < (int)stru_A83D50.SuperClass_field_0x10;
          *((_DWORD *)stru_A83D50.SuperClass_field_0x4 + v1 - 1) = *((_DWORD *)stru_A83D50.SuperClass_field_0x4 + v1) )
    {
      ++v1; /*0x6cb7f7*/
    }
  }
  return 1; /*0x6cb80c*/
}



// ==== 0x006CB820  SuperClass::SetReadiness  this=SuperClass  sig=csp ====
char __thiscall SuperClass::SetReadiness(SuperClass *this, char a2)
{
  HIBYTE(this->SuperClass_field_0x6C) = a2; /*0x6cb824*/
  return a2; /*0x6cb827*/
}



// ==== 0x006CB830  SuperClass::StopPreclickAnim  this=SuperClass  sig=csp ====
char __thiscall SuperClass::StopPreclickAnim(int this, int a2)
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
    v4 = (*(int (__thiscall **)(int *, _DWORD *))(stru_B0F5B8 + 16))(&stru_B0F5B8, v8); /*0x6cb85d*/
    if ( v4 != -1 ) /*0x6cb863*/
      DynamicVector::RemoveItem(&stru_B0F5B8, v4); /*0x6cb86b*/
  }
  if ( *(_BYTE *)(this + 108) ) /*0x6cb870*/
  {
    v8[0] = this; /*0x6cb885*/
    v5 = (*(int (__thiscall **)(int *, _DWORD *))(stru_B0F5B8 + 16))(&stru_B0F5B8, v8); /*0x6cb889*/
    if ( v5 != -1 ) /*0x6cb88f*/
      DynamicVector::RemoveItem(&stru_B0F5B8, v5); /*0x6cb897*/
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
    *(_DWORD *)(this + 48) = dword_A8ED84; /*0x6cb8ce*/
  v6 = *(_DWORD *)(this + 36); /*0x6cb8d1*/
  if ( v6 == -1 ) /*0x6cb8d7*/
    v6 = *(_DWORD *)(*(_DWORD *)(this + 40) + 176); /*0x6cb8dc*/
  *(_DWORD *)(this + 48) = dword_A8ED84; /*0x6cb8e7*/
  *(_DWORD *)(this + 52) = v8[2]; /*0x6cb8ee*/
  *(_DWORD *)(this + 56) = v6; /*0x6cb8f1*/
  if ( *(_BYTE *)(*(_DWORD *)(this + 40) + 229) ) /*0x6cb8f7*/
    *(_DWORD *)(this + 124) = 0; /*0x6cb8ff*/
  return 1; /*0x6cb902*/
}



// ==== 0x006CB920  SuperClass::ClickFire  this=SuperClass  sig=csp ====
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
        v9 = dword_A8ED84; /*0x6cb979*/
        v10 = (wchar_t **)(this + 48); /*0x6cb97f*/
        if ( v7 != -1 ) /*0x6cb985*/
        {
          if ( (int)dword_A8ED84 - v7 >= v8 ) /*0x6cb98d*/
          {
            a2 = 0; /*0x6cb9c7*/
            goto LABEL_11; /*0x6cb9cb*/
          }
          v8 -= (int)dword_A8ED84 - v7; /*0x6cb98f*/
        }
        a2 = v8; /*0x6cb991*/
LABEL_11:
        LOWORD(v11) = Math::RoundToInt((double)(int)a3 - (double)a2 / *(double *)dword_8871E0->ChargeToDrainRatio); /*0x6cb995*/
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
        v16 = dword_A8ED84; /*0x6cb9f5*/
        if ( v14 != -1 ) /*0x6cb9fe*/
        {
          if ( (int)dword_A8ED84 - v14 >= v15 ) /*0x6cba06*/
            v15 = 0; /*0x6cba0c*/
          else
            v15 -= (int)dword_A8ED84 - v14; /*0x6cba08*/
        }
        LOWORD(v17) = Math::RoundToInt((double)(v13 - v15) * *(double *)dword_8871E0->ChargeToDrainRatio); /*0x6cba23*/
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
  if ( *(_DWORD *)(v4 + 180) == 2 && Weapon_Helper() ) /*0x6cbaa7*/
  {
    if ( (_BYTE)a2 ) /*0x6cbab4*/
    {
      Weapon_Get(); /*0x6cbaba*/
      return 0; /*0x6cbac7*/
    }
    return 0; /*0x6cbab4*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(this + 40) + 180) == 7 && (unsigned __int8)PsyDom::IsActive() ) /*0x6cbad6*/
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
      v24 = dword_A8ED84; /*0x6cbb79*/
      *(_DWORD *)(this + 120) = -1; /*0x6cbb80*/
      *v19 = v24; /*0x6cbb87*/
      *(_DWORD *)(this + 52) = v30; /*0x6cbb8d*/
      *(_DWORD *)(this + 56) = v23; /*0x6cbb90*/
      v25 = *v19; /*0x6cbb93*/
      if ( *v19 != (wchar_t *)-1 ) /*0x6cbb98*/
      {
        v26 = *(_DWORD *)(this + 56); /*0x6cbb9e*/
        v27 = (char *)((char *)dword_A8ED84 - (char *)v25); /*0x6cbbac*/
        if ( (char *)dword_A8ED84 - (char *)v25 >= v26 ) /*0x6cbbb0*/
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
        VectorClass::RemoveAt(&stru_B0F5B8, (int)&a2); /*0x6cbc14*/
      }
      if ( *(_BYTE *)(this + 108) ) /*0x6cbc19*/
      {
        a2 = this; /*0x6cbc28*/
        VectorClass::RemoveAt(&stru_B0F5B8, (int)&a2); /*0x6cbc2c*/
        *(_BYTE *)(this + 108) = 0; /*0x6cbc31*/
      }
      if ( *(_BYTE *)(this + 109) /*0x6cbc46*/
        && !*(_BYTE *)(this + 111)
        && (!*(_BYTE *)(this + 112) || *(_BYTE *)(*(_DWORD *)(this + 40) + 237)) )
      {
        *(_DWORD *)(this + 120) = -1; /*0x6cbc4e*/
        if ( *v19 == (wchar_t *)-1 ) /*0x6cbc5a*/
          *v19 = dword_A8ED84; /*0x6cbc62*/
        v29 = *(_DWORD *)(this + 36); /*0x6cbc64*/
        if ( v29 == -1 ) /*0x6cbc6a*/
          v29 = *(_DWORD *)(*(_DWORD *)(this + 40) + 176); /*0x6cbc6f*/
        *v19 = dword_A8ED84; /*0x6cbc7a*/
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
  v22 = (*(int (__thiscall **)(int *, int *))(stru_A83D50 + 16))(&stru_A83D50, &a2); /*0x6cbb45*/
  if ( v22 != -1 ) /*0x6cbb4b*/
    SuperClass::RemoveFromPointerArray(&stru_A83D50, v22); /*0x6cbb53*/
  return 1; /*0x6cb9bc*/
}



// ==== 0x006CBCA0  SuperWeapon::UpdateSuperWeaponReadyState  this=SuperWeapon  sig=csp ====
char __thiscall SuperWeapon::UpdateSuperWeaponReadyState(int this, char a2)
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
    StartAudioControllerAt(*(_DWORD *)(v4 + 192), (_DWORD *)(this + 84), 0); /*0x6cbccf*/
  }
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1438] != 4 ) /*0x6cbce1*/
  {
    v5 = *(_DWORD *)(this + 104); /*0x6cbce3*/
    if ( v5 ) /*0x6cbce8*/
    {
      *(_BYTE *)(v5 + 413) = 1; /*0x6cbcea*/
      AudioFile::Stop((AudioFile *)(*(_DWORD *)(this + 104) + 416)); /*0x6cbcf9*/
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
  if ( *(_DWORD *)&stru_A8EB00.?[416] - *v6 < v8 && v8 != *(_DWORD *)&stru_A8EB00.?[416] - *v6 ) /*0x6cbd69*/
  {
    if ( SidebarClass::GetProductionState((SidebarClass *)this) != *(_DWORD *)(this + 120) ) /*0x6cbe86*/
    {
      *(_DWORD *)(this + 120) = SidebarClass::GetProductionState((SidebarClass *)this); /*0x6cbe8f*/
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
      *v6 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6cbda1*/
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
          VoxClass::FindAndPlay((VoxClass *)&g_Str_EVA_ChronosphereReady.Name[4], -1); /*0x6cbdf7*/
          break; /*0x6cbdf7*/
        case 1: /*0x6cbde6*/
          VoxClass::FindAndPlay((VoxClass *)&g_Str_EVA_ChronosphereReady.MaxFDelta, -1); /*0x6cbe03*/
          break; /*0x6cbe03*/
        case 2: /*0x6cbde6*/
          VoxClass::FindAndPlay((VoxClass *)&g_Str_EVA_ChronosphereReady.Volume[7], -1); /*0x6cbe1b*/
          break; /*0x6cbe1b*/
        case 3: /*0x6cbde6*/
          VoxClass::FindAndPlay((VoxClass *)&g_Str_EVA_ChronosphereReady, -1); /*0x6cbe33*/
          break; /*0x6cbe33*/
        case 5: /*0x6cbde6*/
        case 6: /*0x6cbde6*/
          VoxClass::FindAndPlay((VoxClass *)&g_Str_EVA_PsychicRevealReady.AlliedVoice[6], -1); /*0x6cbe3f*/
          break; /*0x6cbe3f*/
        case 7: /*0x6cbde6*/
          VoxClass::FindAndPlay((VoxClass *)g_Str_EVA_ChronosphereReady.Volume, -1); /*0x6cbe27*/
          break; /*0x6cbe27*/
        case 8: /*0x6cbde6*/
          VoxClass::FindAndPlay((VoxClass *)&g_Str_EVA_PsychicRevealReady.YuriVoice[4], -1); /*0x6cbe4b*/
          break; /*0x6cbe4b*/
        case 9: /*0x6cbde6*/
          VoxClass::FindAndPlay((VoxClass *)&g_Str_EVA_PsychicRevealReady.Name[6], -1); /*0x6cbe57*/
          break; /*0x6cbe57*/
        case 0xA: /*0x6cbde6*/
          VoxClass::FindAndPlay((VoxClass *)&g_Str_EVA_ChronosphereReady.Loop, -1); /*0x6cbe0f*/
          break; /*0x6cbe0f*/
        case 0xB: /*0x6cbde6*/
          VoxClass::FindAndPlay(&g_Str_EVA_PsychicRevealReady, -1); /*0x6cbe63*/
          break; /*0x6cbe63*/
        default:
          break;
      }
    }
    *(_DWORD *)(this + 116) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6cbe68*/
    return 1; /*0x6cbe72*/
  }
}



// ==== 0x006CBEE0  SidebarClass::GetProductionState  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::GetProductionState(SidebarClass *this)
{
  int v1; // ebx
  int v2; // esi
  char *v3; // edx
  TechnoClass *v4; // ecx
  double v5; // st7
  int v6; // edi
  int v7; // esi
  char *v8; // eax
  TechnoClass *v9; // ecx
  int result; // eax
  int v11; // edi
  int v12; // esi
  char *SidebarClass_field_0x38; // eax
  TechnoClass *SidebarClass_field_0x30; // ecx
  int v15; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]
  int v18; // [esp+14h] [ebp-4h]

  if ( !BYTE1(this->SidebarClass_field_0x6C) ) /*0x6cbeeb*/
    return 0; /*0x6cc064*/
  v1 = this->SidebarClass_field_0x28[0]; /*0x6cbef1*/
  if ( !*(_BYTE *)(v1 + 229) ) /*0x6cbefc*/
  {
    if ( HIBYTE(this->SidebarClass_field_0x6C) ) /*0x6cbfe5*/
      return 54; /*0x6cbff7*/
    v11 = this->SidebarClass_field_0x24[0]; /*0x6cbff8*/
    v12 = v11; /*0x6cbffe*/
    if ( v11 == -1 ) /*0x6cc000*/
      v12 = *(_DWORD *)(v1 + 176); /*0x6cc002*/
    SidebarClass_field_0x38 = (char *)this->SidebarClass_field_0x38; /*0x6cc008*/
    SidebarClass_field_0x30 = this->SidebarClass_field_0x30; /*0x6cc00b*/
    if ( SidebarClass_field_0x30 != (TechnoClass *)-1 ) /*0x6cc011*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)SidebarClass_field_0x30 >= (int)SidebarClass_field_0x38 ) /*0x6cc01d*/
        SidebarClass_field_0x38 = 0; /*0x6cc023*/
      else
        SidebarClass_field_0x38 -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)SidebarClass_field_0x30; /*0x6cc01f*/
    }
    if ( v11 == -1 ) /*0x6cc028*/
      v18 = *(_DWORD *)(v1 + 176); /*0x6cc036*/
    else
      v18 = v11; /*0x6cc02a*/
    v5 = (double)(v12 - (int)SidebarClass_field_0x38) / (double)v18; /*0x6cc044*/
    goto LABEL_37; /*0x6cc044*/
  }
  if ( *(_DWORD *)&this->__pad_74[8] != 2 ) /*0x6cbf06*/
  {
    v6 = this->SidebarClass_field_0x24[0]; /*0x6cbf85*/
    v7 = v6; /*0x6cbf8b*/
    if ( v6 == -1 ) /*0x6cbf8d*/
      v7 = *(_DWORD *)(v1 + 176); /*0x6cbf8f*/
    v8 = (char *)this->SidebarClass_field_0x38; /*0x6cbf95*/
    v9 = this->SidebarClass_field_0x30; /*0x6cbf98*/
    if ( v9 != (TechnoClass *)-1 ) /*0x6cbf9e*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)v9 >= (int)v8 ) /*0x6cbfaa*/
        v8 = 0; /*0x6cbfb0*/
      else
        v8 -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)v9; /*0x6cbfac*/
    }
    if ( v6 == -1 ) /*0x6cbfb5*/
      v5 = (double)(v7 - (int)v8) / (double)*(int *)(v1 + 176); /*0x6cbfdf*/
    else
      v5 = (double)(v7 - (int)v8) / (double)v6; /*0x6cbfc5*/
    goto LABEL_37; /*0x6cbfc9*/
  }
  v2 = this->SidebarClass_field_0x24[0]; /*0x6cbf08*/
  if ( v2 == -1 ) /*0x6cbf0e*/
    v16 = *(_DWORD *)(v1 + 176); /*0x6cbf1c*/
  else
    v16 = this->SidebarClass_field_0x24[0]; /*0x6cbf10*/
  v3 = (char *)this->SidebarClass_field_0x38; /*0x6cbf20*/
  v4 = this->SidebarClass_field_0x30; /*0x6cbf23*/
  if ( v4 != (TechnoClass *)-1 ) /*0x6cbf29*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)v4 >= (int)v3 ) /*0x6cbf34*/
    {
      v15 = 0; /*0x6cbf47*/
      goto LABEL_11; /*0x6cbf4f*/
    }
    v3 -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)v4; /*0x6cbf36*/
  }
  v15 = (int)v3; /*0x6cbf38*/
LABEL_11:
  if ( v2 == -1 ) /*0x6cbf3f*/
    v17 = *(_DWORD *)(v1 + 176); /*0x6cbf57*/
  else
    v17 = v2; /*0x6cbf41*/
  v5 = 1.0 /*0x6cbf7a*/
     - ((double)v16 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1888) - (double)v15)
     / ((double)v17
      * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1888));
LABEL_37:
  LOWORD(result) = Math::RoundToInt(v5 * 54.0); /*0x6cc048*/
  if ( result >= 53 ) /*0x6cc056*/
    return 53; /*0x6cc05a*/
  return result; /*0x6cbfec*/
}



// ==== 0x006CC070  ObjectClass::nullsub_231  this=ObjectClass  sig=csp ====
void nullsub_231(ObjectClass *this)
{
  ; /*0x6cc070*/
}



// ==== 0x006CC080  SuperClass::AnnounceReady  this=JumpjetLocomotionClass  sig=csp ====
char __thiscall sub_6CC080(int this, char a2)
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
      *(_DWORD *)(this + 48) = dword_A8ED84; /*0x6cc0c8*/
    *(_DWORD *)(this + 48) = dword_A8ED84; /*0x6cc0d4*/
    *(_DWORD *)(this + 52) = v7; /*0x6cc0db*/
    *(_DWORD *)(this + 56) = v5; /*0x6cc0de*/
    if ( a2 ) /*0x6cc0e4*/
    {
      switch ( *(_DWORD *)(*(_DWORD *)(this + 40) + 180) ) /*0x6cc0fc*/
      {
        case 0: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaNuclearmiss, -1); /*0x6cc10d*/
          break; /*0x6cc10d*/
        case 1: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaIroncurtain, -1); /*0x6cc119*/
          break; /*0x6cc119*/
        case 2: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaLightningst, -1); /*0x6cc131*/
          break; /*0x6cc131*/
        case 3: /*0x6cc0fc*/
          VoxClass::FindAndPlay(g_Str_EVA_ChronosphereReady, -1); /*0x6cc149*/
          break; /*0x6cc149*/
        case 5: /*0x6cc0fc*/
        case 6: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaReinforceme, -1); /*0x6cc155*/
          break; /*0x6cc155*/
        case 7: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaPsychicdomi, -1); /*0x6cc13d*/
          break; /*0x6cc13d*/
        case 8: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaSpyplanerea, -1); /*0x6cc161*/
          break; /*0x6cc161*/
        case 9: /*0x6cc0fc*/
          VoxClass::FindAndPlay(unk_842414, -1); /*0x6cc16d*/
          break; /*0x6cc16d*/
        case 0xA: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaForceshield, -1); /*0x6cc125*/
          break; /*0x6cc125*/
        case 0xB: /*0x6cc0fc*/
          VoxClass::FindAndPlay(g_Str_EVA_PsychicRevealReady, -1); /*0x6cc179*/
          break; /*0x6cc179*/
        default:
          break;
      }
    }
    v6 = *(_DWORD *)(this + 40); /*0x6cc17e*/
    *(_DWORD *)(this + 116) = dword_A8ED84; /*0x6cc187*/
    result = *(_BYTE *)(v6 + 229); /*0x6cc18a*/
    if ( result ) /*0x6cc192*/
      *(_DWORD *)(this + 124) = 1; /*0x6cc194*/
  }
  return result; /*0x6cc19b*/
}



// ==== 0x006CC1E0  SuperClass::SetCharge  this=SuperClass  sig=csp ====
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
        *v3 = dword_A8ED84; /*0x6cc23c*/
      *v3 = dword_A8ED84; /*0x6cc248*/
      *(_DWORD *)(this + 52) = v7; /*0x6cc24a*/
      *(_DWORD *)(this + 56) = v5; /*0x6cc24d*/
    }
  }
  return (char)v3; /*0x6cc251*/
}



// ==== 0x006CC260  Super::GetDefaultTimer  this=JumpjetLocomotionClass  sig=csp ====
int __thiscall Super::GetDefaultTimer(Super *this)
{
  int result; // eax

  result = (int)this->field_24; /*0x6cc260*/
  if ( result == -1 ) /*0x6cc266*/
    return *((_DWORD *)this->field_28 + 44); /*0x6cc26b*/
  return result; /*0x6cc271*/
}



// ==== 0x006CC280  SuperClass::SetRechargeTime  this=SuperClass  sig=csp ====
int __thiscall SuperClass::SetRechargeTime(SuperClass *this, int a2)
{
  this->SuperClass_field_0x24 = (void *)a2; /*0x6cc284*/
  return a2; /*0x6cc287*/
}



// ==== 0x006CC290  SuperClass::ResetRechargeTime  this=SuperClass  sig=csp ====
void __thiscall SuperClass::ResetRechargeTime(SuperClass *this)
{
  this->SuperClass_field_0x24 = (void *)-1; /*0x6cc290*/
}



// ==== 0x006CC2A0  SuperWeapon::GetField10  this=SuperWeapon  sig=csp ====
char __thiscall SuperWeapon::GetField10(SuperWeapon *this)
{
  return *(_BYTE *)(this->q028 + 230); /*0x6cc2a9*/
}



// ==== 0x006CC2B0  SuperClass::NameReadiness  this=SuperClass  sig=csp ====
wchar_t *__thiscall SuperClass::NameReadiness(SuperClass *this)
{
  char *SuperClass_field_0x7C; // ecx
  char *v2; // ecx

  if ( LOBYTE(this->SuperClass_field_0x70) ) /*0x6cc2b0*/
    return GetStringCSF(aTxtHold, 0, (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1], 950); /*0x6cc34d*/
  if ( *((_BYTE *)this->SuperClass_field_0x28 + 229) ) /*0x6cc2be*/
  {
    SuperClass_field_0x7C = (char *)this->SuperClass_field_0x7C; /*0x6cc2c8*/
    if ( SuperClass_field_0x7C ) /*0x6cc2ce*/
    {
      v2 = SuperClass_field_0x7C - 1; /*0x6cc2d0*/
      if ( v2 ) /*0x6cc2d1*/
      {
        if ( v2 != (char *)1 ) /*0x6cc2d4*/
          return 0; /*0x6cc2d8*/
        return GetStringCSF( /*0x6cc2ea*/
                 (wchar_t *)&g_Str_EVA_ChronosphereReady.VocClass_field_A4,
                 0,
                 (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1],
                 925);
      }
      else
      {
        return GetStringCSF(g_Str_TXT_READY, 0, (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1], 922); /*0x6cc301*/
      }
    }
    else
    {
      return GetStringCSF( /*0x6cc318*/
               (wchar_t *)&g_Str_EVA_ChronosphereReady.VocClass_field_94,
               0,
               (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1],
               919);
    }
  }
  else
  {
    if ( !HIBYTE(this->SuperClass_field_0x6C) ) /*0x6cc323*/
      return 0; /*0x6cc323*/
    return GetStringCSF(g_Str_TXT_READY, 0, (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1], 944); /*0x6cc336*/
  }
}



// ==== 0x006CC360  SuperClass::CanFire  this=SuperClass  sig=csp ====
char __thiscall SuperClass::CanFire(SuperClass *this)
{
  if ( LOBYTE(this->SuperClass_field_0x70) ) /*0x6cc360*/
    return 0; /*0x6cc381*/
  if ( *((_BYTE *)this->SuperClass_field_0x28 + 229) ) /*0x6cc36a*/
    return this->SuperClass_field_0x7C != 0; /*0x6cc379*/
  return HIBYTE(this->SuperClass_field_0x6C); /*0x6cc37c*/
}



// ==== 0x006CC390  SuperClass::Launch  this=SuperClass  sig=csp ====
int __fastcall SuperClass::Launch(int a1, int a2, __int16 *a3, char a4)
{
  double v4; // st7
  void *v5; // ebx
  int v6; // ebp
  int result; // eax
  void *v8; // eax
  _DWORD *v9; // eax
  int *v10; // eax
  void *v11; // eax
  int *v12; // eax
  __int16 *v13; // ebp
  void *v14; // eax
  int Coord3D_field_0x08; // esi
  int v16; // eax
  int v17; // eax
  AnimClass *v18; // eax
  AnimClass *v19; // eax
  int *v20; // edi
  __int16 v21; // cx
  __int16 v22; // dx
  int *v23; // esi
  __int16 v24; // ax
  bool v25; // zf
  int v26; // ecx
  int v27; // edx
  _DWORD *v28; // edx
  bool v29; // bl
  int v30; // eax
  int Member; // eax
  int *v32; // eax
  CellClass *v33; // eax
  int v34; // ecx
  int v35; // edi
  BuildingClass *v36; // eax
  int v37; // eax
  int *v38; // ebx
  int v39; // eax
  int InstanceCOM; // eax
  int v41; // edi
  __int16 v42; // ax
  int v43; // edi
  void *v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // eax
  int v48; // edi
  int v49; // ed... [58141 chars total]



// ==== 0x006CDE80  nullsub_235  this=-  sig=csp ====
void __stdcall nullsub_235(int a1, int a2)
{
  ; /*0x6cde80*/
}



// ==== 0x006CDE90  SuperClass::ShouldDrawProgress  this=SuperClass  sig=csp ====
bool __thiscall SuperClass::ShouldDrawProgress(SuperClass *this)
{
  return *((_BYTE *)this->SuperClass_field_0x28 + 229) || HIBYTE(this->SuperClass_field_0x6C) == 0; /*0x6cde9d*/
}



// ==== 0x006CDEB0  SuperClass::ddtor  this=SuperClass  sig=csp ====
int __stdcall SuperClass::ddtor(SuperClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6cdeb6*/
    return -2147467261; /*0x6cdeb8*/
  *a2 = -671656762; /*0x6cdec6*/
  a2[1] = 298989852; /*0x6cdece*/
  a2[2] = 268461211; /*0x6cded7*/
  a2[3] = unk_7E958C; /*0x6cdee0*/
  return 0; /*0x6cdebd*/
}



// ==== 0x006CDEF0  SuperClass::LoadFromStream  this=SuperClass  sig=csp ====
int __stdcall SuperClass::LoadFromStream(SuperClass *this, int a2)
{
  int result; // eax
  int v3; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6cdefb*/
  if ( result >= 0 ) /*0x6cdf02*/
  {
    if ( this ) /*0x6cdf0a*/
    {
      AbstractClass::Constructor((AbstractClass *)this); /*0x6cdf0e*/
      this->SuperClass_field_0x0 = &SuperClass::`vftable'; /*0x6cdf13*/
      this->SuperClass_field_0x4 = &SuperClass::`vftable'; /*0x6cdf19*/
      this->SuperClass_field_0x8 = &SuperClass::`vftable'; /*0x6cdf20*/
      *(_DWORD *)this->__pad_C = &SuperClass::`vftable'; /*0x6cdf27*/
    }
    if ( this->SuperClass_field_0x68 /*0x6cdf70*/
      && (g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.?
       || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
       && g_BuildingLoadQueue_Array.?[2] > 0
       && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[0] + 8))(
            g_BuildingLoadQueue_Array.?,
            g_BuildingLoadQueue_Array.? + g_BuildingLoadQueue_Array.?[2],
            0)) )
    {
      v3 = g_BuildingLoadQueue_Array.?[1]++; /*0x6cdf7d*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v3) = this; /*0x6cdf8c*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->SuperClass_field_0x28); /*0x6cdf98*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->SuperClass_field_0x2C); /*0x6cdfa6*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->SuperClass_field_0x68); /*0x6cdfb1*/
    *(_DWORD *)&this->__pad_3C[12] = 0; /*0x6cdfb6*/
    *(_DWORD *)&this->__pad_3C[16] = 0; /*0x6cdfbd*/
    return 0; /*0x6cdfc4*/
  }
  return result; /*0x6cdfc7*/
}



// ==== 0x006CDFD0  SuperClass::SaveState  this=SuperClass  sig=csp ====
int __stdcall SuperClass::SaveState(SuperClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6cdfdf*/
  if ( result >= 0 ) /*0x6cdfe6*/
    return 0; /*0x6cdfe8*/
  return result; /*0x6cdfea*/
}



// ==== 0x006CDFF0  SuperClass::ExecuteAction  this=SuperClass  sig=csp ====
__int64 __thiscall SuperClass::ExecuteAction(SuperClass *this, unsigned int a2, int a3)
{
  __int64 result; // rax

  result = a2; /*0x6cdff0*/
  if ( (void *)a2 == this->SuperClass_field_0x2C ) /*0x6cdffc*/
    this->SuperClass_field_0x2C = 0; /*0x6cdffe*/
  if ( (void *)a2 == this->SuperClass_field_0x28 ) /*0x6ce004*/
    this->SuperClass_field_0x28 = 0; /*0x6ce006*/
  if ( (void *)a2 == this->SuperClass_field_0x68 ) /*0x6ce00f*/
  {
    this->SuperClass_field_0x68 = 0; /*0x6ce011*/
    LOBYTE(this->SuperClass_field_0x6C) = 1; /*0x6ce014*/
  }
  return result; /*0x6ce00e*/
}



// ==== 0x006CE020  SuperClass::PowerDrainUpdate  this=SuperClass  sig=csp ====
int __thiscall SuperClass::PowerDrainUpdate(SuperClass *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // eax
  int result; // eax
  int v9; // eax

  v3 = AbstractClass::ProcessPower((AbstractClass *)this); /*0x6ce029*/
  LOBYTE(v3) = BYTE1(this->SuperClass_field_0x6C); /*0x6ce02e*/
  Power::FlagProcess((Power *)a2, v3); /*0x6ce034*/
  LOBYTE(v4) = BYTE2(this->SuperClass_field_0x6C); /*0x6ce039*/
  Power::FlagProcess((Power *)a2, v4); /*0x6ce03f*/
  LOBYTE(v5) = HIBYTE(this->SuperClass_field_0x6C); /*0x6ce044*/
  Power::FlagProcess((Power *)a2, v5); /*0x6ce04a*/
  Power::TimerProcess(this->SuperClass_field_0x78); /*0x6ce055*/
  Power::TimerProcess((int)this->SuperClass_field_0x7C); /*0x6ce060*/
  LOBYTE(v6) = this->SuperClass_field_0x60; /*0x6ce065*/
  v7 = Power::FlagProcess((Power *)a2, v6); /*0x6ce06b*/
  LOBYTE(v7) = this->SuperClass_field_0x6C; /*0x6ce070*/
  Power::FlagProcess((Power *)a2, v7); /*0x6ce076*/
  result = (int)this->SuperClass_field_0x68; /*0x6ce07b*/
  if ( result ) /*0x6ce080*/
  {
    Power::TimerProcess(*(unsigned __int8 *)(result + 405)); /*0x6ce08d*/
    v9 = (*(int (__stdcall **)(char *))(*((_DWORD *)this->SuperClass_field_0x68 + 1) + 16))((char *)this->SuperClass_field_0x68 + 4); /*0x6ce09c*/
    return Power::TimerProcess(v9); /*0x6ce0a2*/
  }
  return result; /*0x6ce0a7*/
}



// ==== 0x006CE0B0  SuperClass::Reset  this=SuperClass  sig=csp ====
int *__thiscall SuperClass::Reset(SuperClass *this)
{
  _BYTE *SuperClass_field_0x68; // eax
  int v3; // eax
  int v4; // eax
  void *SuperClass_field_0x24; // ecx
  int *result; // eax
  char *SuperClass_field_0x30; // ebx
  bool v8; // bl
  int v9; // esi
  int v10; // ecx
  int v11; // edx
  _DWORD v12[4]; // [esp+4h] [ebp-10h] BYREF

  SuperClass_field_0x68 = this->SuperClass_field_0x68; /*0x6ce0b6*/
  if ( SuperClass_field_0x68 ) /*0x6ce0bb*/
  {
    SuperClass_field_0x68[405] = 0; /*0x6ce0bd*/
    this->SuperClass_field_0x68 = 0; /*0x6ce0c4*/
    v12[0] = this; /*0x6ce0db*/
    v3 = (*(int (__thiscall **)(int *, _DWORD *))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x6ce0df*/
           g_BuildingLoadQueue_Array.?,
           v12);
    if ( v3 != -1 ) /*0x6ce0e5*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v3); /*0x6ce0ed*/
  }
  if ( LOBYTE(this->SuperClass_field_0x6C) ) /*0x6ce0f2*/
  {
    v12[0] = this; /*0x6ce109*/
    v4 = (*(int (__thiscall **)(int *, _DWORD *))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x6ce10d*/
           g_BuildingLoadQueue_Array.?,
           v12);
    if ( v4 != -1 ) /*0x6ce113*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v4); /*0x6ce11b*/
    LOBYTE(this->SuperClass_field_0x6C) = 0; /*0x6ce120*/
  }
  SuperClass_field_0x24 = this->SuperClass_field_0x24; /*0x6ce124*/
  result = (int *)&this->SuperClass_field_0x30; /*0x6ce127*/
  HIBYTE(this->SuperClass_field_0x6C) = 0; /*0x6ce12b*/
  SuperClass_field_0x30 = (char *)this->SuperClass_field_0x30; /*0x6ce12f*/
  this->SuperClass_field_0x78 = -1; /*0x6ce131*/
  v8 = SuperClass_field_0x30 + 1 != 0; /*0x6ce13b*/
  if ( SuperClass_field_0x24 == (void *)-1 ) /*0x6ce141*/
    SuperClass_field_0x24 = (void *)*((_DWORD *)this->SuperClass_field_0x28 + 44); /*0x6ce146*/
  *result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6ce156*/
  *(_DWORD *)this->__pad_34 = v12[2]; /*0x6ce15d*/
  this->SuperClass_field_0x38 = SuperClass_field_0x24; /*0x6ce160*/
  if ( !v8 ) /*0x6ce163*/
  {
    v9 = *result; /*0x6ce165*/
    if ( *result != -1 ) /*0x6ce16a*/
    {
      v10 = result[2]; /*0x6ce16c*/
      v11 = *(_DWORD *)&stru_A8EB00.?[416] - v9; /*0x6ce17a*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 >= v10 ) /*0x6ce17e*/
      {
        result[2] = 0; /*0x6ce192*/
        *result = -1; /*0x6ce195*/
      }
      else
      {
        *result = -1; /*0x6ce182*/
        result[2] = v10 - v11; /*0x6ce188*/
      }
    }
  }
  return result; /*0x6ce18b*/
}



// ==== 0x006CE1A0  SuperClass::ShouldFlashTab  this=SuperClass  sig=csp ====
bool __thiscall SuperClass::ShouldFlashTab(SuperClass *this)
{
  _BYTE *SuperClass_field_0x28; // eax
  int v2; // eax

  if ( LOBYTE(this->SuperClass_field_0x70) ) /*0x6ce1a0*/
    return 0; /*0x6ce1a5*/
  SuperClass_field_0x28 = this->SuperClass_field_0x28; /*0x6ce1a7*/
  if ( SuperClass_field_0x28[229] ) /*0x6ce1aa*/
  {
    if ( !this->SuperClass_field_0x7C ) /*0x6ce1b9*/
      return 0; /*0x6ce1b9*/
  }
  else if ( !HIBYTE(this->SuperClass_field_0x6C) ) /*0x6ce1c2*/
  {
    return 0; /*0x6ce1c2*/
  }
  v2 = *((_DWORD *)SuperClass_field_0x28 + 58); /*0x6ce1c4*/
  if ( v2 == -1 ) /*0x6ce1cd*/
    return 1; /*0x6ce1d1*/
  return v2 && (int)this->SuperClass_field_0x74 + v2 > *(int *)&stru_A8EB00.?[416]; /*0x6ce1d1*/
}



// ==== 0x006CE1F0  AbstractClass::updateTargetTracking  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::updateTargetTracking(AbstractClass *this)
{
  return 57; /*0x6ce1f5*/
}



// ==== 0x006CE200  SuperClass::StubReturn57  this=SuperClass  sig=csp ====
int SuperClass::StubReturn57(SuperClass *this)
{
  return 57; /*0x6ce205*/
}



// ==== 0x006CE210  SuperClass::StubReturn128  this=SuperClass  sig=csp ====
int SuperClass::StubReturn128(SuperClass *this)
{
  return 128; /*0x6ce215*/
}



// ==== 0x006CE220  SuperClass::ProcessEvent  this=SuperClass  sig=csp ====
void *__thiscall SuperClass::ProcessEvent(SuperClass *this, char a2)
{
  SuperClass::CleanupMembers((int)this); /*0x6ce223*/
  if ( (a2 & 1) != 0 ) /*0x6ce22d*/
    __3_YAXPAX_Z(this); /*0x6ce230*/
  return this; /*0x6ce23a*/
}



// ==== 0x006CE240  Coord3D::Add  this=Coord3D  sig=csp ====
_DWORD *__thiscall Coord3D::Add(Coord3D *this, _DWORD *a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // edi

  v3 = this->Coord3D_field_0x04 + a3[1]; /*0x6ce252*/
  v4 = this->Coord3D_field_0x08 + a3[2]; /*0x6ce25a*/
  *a2 = *(_DWORD *)this->__pad_0 + *a3; /*0x6ce262*/
  a2[1] = v3; /*0x6ce264*/
  a2[2] = v4; /*0x6ce267*/
  return a2; /*0x6ce26a*/
}



// ==== 0x006CE270  SuperClass::SetFieldX  this=SuperClass  sig=csp ====
int __thiscall SuperClass::SetFieldX(SuperClass *this)
{
  int result; // eax

  result = (int)this->SuperClass_field_0x0; /*0x6ce270*/
  if ( this->SuperClass_field_0x0 ) /*0x6ce270*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 4))(result); /*0x6ce279*/
  return result; /*0x6ce27c*/
}



// ==== 0x006CE280  SuperClass::AdvanceCountdown  this=SuperClass  sig=csp ====
void __thiscall SuperClass::AdvanceCountdown(SuperClass *this)
{
  void *SuperClass_field_0x0; // esi
  char *SuperClass_field_0x8; // eax
  int v3; // edx

  SuperClass_field_0x0 = this->SuperClass_field_0x0; /*0x6ce281*/
  if ( this->SuperClass_field_0x0 != (void *)-1 ) /*0x6ce286*/
  {
    SuperClass_field_0x8 = (char *)this->SuperClass_field_0x8; /*0x6ce288*/
    v3 = *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)SuperClass_field_0x0; /*0x6ce296*/
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)SuperClass_field_0x0 >= (int)SuperClass_field_0x8 ) /*0x6ce29a*/
    {
      this->SuperClass_field_0x8 = 0; /*0x6ce2ab*/
      this->SuperClass_field_0x0 = (void *)-1; /*0x6ce2ae*/
    }
    else
    {
      this->SuperClass_field_0x0 = (void *)-1; /*0x6ce29e*/
      this->SuperClass_field_0x8 = &SuperClass_field_0x8[-v3]; /*0x6ce2a4*/
    }
  }
}



// ==== 0x006CE2C0  SuperClass::SetCurrentFrame  this=SuperClass  sig=csp ====
wchar_t *__thiscall SuperClass::SetCurrentFrame(SuperClass *this)
{
  wchar_t *result; // eax

  if ( this->SuperClass_field_0x0 == (void *)-1 ) /*0x6ce2c3*/
  {
    result = *(wchar_t **)&stru_A8EB00.?[416]; /*0x6ce2c5*/
    this->SuperClass_field_0x0 = *(void **)&stru_A8EB00.?[416]; /*0x6ce2ca*/
  }
  return result; /*0x6ce2cc*/
}



// ==== 0x006CE2D0  VectorClass::RemoveAt  this=VectorClass  sig=csp ====
int __thiscall VectorClass::RemoveAt(DynamicVectorClass *this, int a2)
{
  int result; // eax
  int Count; // ecx
  int v5; // ecx

  result = (*(int (__thiscall **)(DynamicVectorClass *, int))(this->ptr_0 + 16))(this, a2); /*0x6ce2dc*/
  if ( result == -1 || (Count = this->Count, result >= Count) ) /*0x6ce2e9*/
  {
    LOBYTE(result) = 0; /*0x6ce30b*/
  }
  else
  {
    v5 = Count - 1; /*0x6ce2eb*/
    for ( this->Count = v5; /*0x6ce2f1*/
          result < this->Count;
          *(_DWORD *)(this->Items + 4 * result - 4) = *(_DWORD *)(this->Items + 4 * result) )
    {
      ++result; /*0x6ce2f6*/
    }
    LOBYTE(result) = 1; /*0x6ce305*/
  }
  return result; /*0x6ce307*/
}



// ==== 0x006CE320  SuperClass::RemoveFromPointerArray  this=SuperClass  sig=csp ====
char __thiscall SuperClass::RemoveFromPointerArray(SuperClass *this, int a2)
{
  char *SuperClass_field_0x10; // edx
  int v3; // eax
  char *v4; // edx

  SuperClass_field_0x10 = (char *)this->SuperClass_field_0x10; /*0x6ce320*/
  v3 = a2; /*0x6ce323*/
  if ( a2 >= (int)SuperClass_field_0x10 ) /*0x6ce329*/
    return 0; /*0x6ce34c*/
  v4 = SuperClass_field_0x10 - 1; /*0x6ce32b*/
  this->SuperClass_field_0x10 = v4; /*0x6ce32e*/
  if ( a2 < (int)v4 ) /*0x6ce331*/
  {
    do /*0x6ce344*/
    {
      ++v3; /*0x6ce337*/
      *((_DWORD *)this->SuperClass_field_0x4 + v3 - 1) = *((_DWORD *)this->SuperClass_field_0x4 + v3); /*0x6ce33b*/
    }
    while ( v3 < (int)this->SuperClass_field_0x10 ); /*0x6ce344*/
  }
  return 1; /*0x6ce349*/
}



// ==== 0x006CE360  sub_6CE360  this=-  sig=ida-proto ====
int sub_6CE360()
{
  dword_B0C098 = 0; /*0x6ce362*/
  dword_B0C09C = 0; /*0x6ce367*/
  dword_B0C0A0 = 0; /*0x6ce36c*/
  dword_B0C0A4 = 0; /*0x6ce371*/
  return 0; /*0x6ce376*/
}



// ==== 0x006CE380  sub_6CE380  this=-  sig=ida-proto ====
void sub_6CE380()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6ce38c*/
  dbl_B0C0B0 = Math::Sqrt(v0 + v0); /*0x6ce39e*/
}



// ==== 0x006CE3B0  sub_6CE3B0  this=-  sig=ida-proto ====
void sub_6CE3B0()
{
  dbl_B0C100 = dbl_B0C0B0 / 60.0; /*0x6ce3bc*/
}



// ==== 0x006CE3D0  sub_6CE3D0  this=-  sig=ida-proto ====
void sub_6CE3D0()
{
  dbl_B0C0E8 = 1.0 / dbl_B0C100; /*0x6ce3dc*/
}



// ==== 0x006CE3F0  sub_6CE3F0  this=-  sig=ida-proto ====
void sub_6CE3F0()
{
  dbl_B0C0E0 = 0.0174532925199433 * 45.0; /*0x6ce3fc*/
}



// ==== 0x006CE410  sub_6CE410  this=-  sig=ida-proto ====
void sub_6CE410()
{
  dbl_B0C0B8 = 0.0174532925199433 * 60.0; /*0x6ce41c*/
}



// ==== 0x006CE430  sub_6CE430  this=-  sig=ida-proto ====
void sub_6CE430()
{
  dbl_B0C090 = 0.0174532925199433 * 90.0; /*0x6ce43c*/
}



// ==== 0x006CE450  sub_6CE450  this=-  sig=ida-proto ====
__int64 sub_6CE450()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0C090 - dbl_B0C0B8); /*0x6ce462*/
  result = Math::RoundToInt(v0 * dbl_B0C0B0 * 0.5); /*0x6ce476*/
  dword_B0C108 = result; /*0x6ce47b*/
  return result; /*0x6ce480*/
}



// ==== 0x006CE490  sub_6CE490  this=-  sig=ida-proto ====
void sub_6CE490()
{
  dbl_B0C0C0 = Math::ArcTan((double)dword_B0C108 * 0.00390625); /*0x6ce4a7*/
}



// ==== 0x006CE4C0  sub_6CE4C0  this=-  sig=ida-proto ====
void sub_6CE4C0()
{
  dbl_B0C0D8 = Math::ArcTan((double)(2 * dword_B0C108) / dbl_B0C0B0); /*0x6ce4e2*/
}



// ==== 0x006CE4F0  sub_6CE4F0  this=-  sig=ida-proto ====
__int64 sub_6CE4F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0C108) + 0.5); /*0x6ce50b*/
  dword_B0C0FC = result; /*0x6ce510*/
  return result; /*0x6ce516*/
}



// ==== 0x006CE520  sub_6CE520  this=-  sig=ida-proto ====
int sub_6CE520()
{
  word_B0C0A8 = 0; /*0x6ce522*/
  word_B0C0AA = 0; /*0x6ce528*/
  return 0; /*0x6ce52e*/
}



// ==== 0x006CE530  sub_6CE530  this=-  sig=ida-proto ====
int sub_6CE530()
{
  dword_B0C0C8 = 0; /*0x6ce532*/
  dword_B0C0CC = 0; /*0x6ce537*/
  dword_B0C0D0 = 0; /*0x6ce53c*/
  return 0; /*0x6ce541*/
}



// ==== 0x006CE550  sub_6CE550  this=-  sig=ida-proto ====
int sub_6CE550()
{
  dword_B0C0F8 = 0; /*0x6ce555*/
  dword_B0C0F0 = 128; /*0x6ce55f*/
  dword_B0C0F4 = 128; /*0x6ce564*/
  return 128; /*0x6ce569*/
}



// ==== 0x006CE570  ObjectClass::method_6CE570  this=ObjectClass  sig=csp ====
int __thiscall sub_6CE570(ObjectClass *this)
{
  int v2; // edi
  char **v3; // esi

  v2 = 0; /*0x6ce575*/
  v3 = (char **)&stru_8425A4.Name[7]; /*0x6ce577*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x6ce58a*/
  {
    ++v3; /*0x6ce58c*/
    ++v2; /*0x6ce58f*/
    if ( (int)v3 >= (int)stru_8425A4.Type ) /*0x6ce596*/
      return -1; /*0x6ce59e*/
  }
  return v2; /*0x6ce598*/
}



// ==== 0x006CE5B0  SuperWeaponTypeClass::SuperWeaponTypeClass  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::SuperWeaponTypeClass(int this, char *Source)
{
  int v3; // eax

  AbstractTypeClass::Constructor(this, Source); /*0x6ce5bb*/
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
  *(_DWORD *)(this + 12) = &SuperWeaponTypeClass::`vftable'; /*0x6ce67a*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x6ce681*/
  *(_DWORD *)(this + 152) = dword_A8E340; /*0x6ce68c*/
  if ( dword_A8E340 < dword_A8E338 /*0x6ce6c4*/
    || (byte_A8E33D || !dword_A8E338)
    && dword_A8E344 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8E330 + 8))(
         &dword_A8E330,
         dword_A8E338 + dword_A8E344,
         0) )
  {
    v3 = dword_A8E340++; /*0x6ce6d1*/
    *((_DWORD *)dword_A8E334 + v3) = this; /*0x6ce6e0*/
  }
  if ( this + 36 != this + 204 ) /*0x6ce6e8*/
    qmemcpy((void *)(this + 204), (const void *)(this + 36), 0x19u); /*0x6ce6ef*/
  return this; /*0x6ce6f2*/
}



// ==== 0x006CE7C0  SuperWeaponTypeClass::SD_vt03  this=SuperWeaponTypeClass  sig=csp ====
int __stdcall SuperWeaponTypeClass::SD_vt03(SuperWeaponTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6ce7c6*/
    return -2147467261; /*0x6ce7c8*/
  *a2 = 217234663; /*0x6ce7d6*/
  a2[1] = 298989284; /*0x6ce7de*/
  a2[2] = 1610668216; /*0x6ce7e7*/
  a2[3] = unk_7E957C; /*0x6ce7f0*/
  return 0; /*0x6ce7cd*/
}



// ==== 0x006CE800  SuperWeaponTypeClass::SaveLoad_Prefix  this=SuperWeaponTypeClass  sig=csp ====
int __stdcall SuperWeaponTypeClass::SaveLoad_Prefix(SuperWeaponTypeClass *this, int a2)
{
  int result; // eax
  SHPStruct *v3; // eax
  char v4; // [esp+7h] [ebp-201h] BYREF
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6ce814*/
  if ( result >= 0 ) /*0x6ce81b*/
  {
    if ( this ) /*0x6ce823*/
    {
      AbstractTypeClass::Init((int)this, (int)&v4); /*0x6ce82c*/
      this->SidebarImage = 0; /*0x6ce831*/
      this->AbstractTypeClass = &SuperWeaponTypeClass::`vftable'; /*0x6ce83b*/
      this->? = &SuperWeaponTypeClass::`vftable'; /*0x6ce841*/
      this->? = &SuperWeaponTypeClass::`vftable'; /*0x6ce848*/
      this->? = &SuperWeaponTypeClass::`vftable'; /*0x6ce84f*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->WeaponType); /*0x6ce862*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->AuxBuilding); /*0x6ce873*/
    _makepath(Buffer, 0, 0, (const char *)this->SidebarImageFile, Ext); /*0x6ce88d*/
    v3 = (SHPStruct *)SearchMIXFile(Buffer, 0); /*0x6ce89b*/
    this->SidebarImage = v3; /*0x6ce8a2*/
    if ( !v3 ) /*0x6ce8a8*/
      this->SidebarImage = (SHPStruct *)SearchMIXFile(&stru_820320.?[143], 0); /*0x6ce8b6*/
    return 0; /*0x6ce8bc*/
  }
  return result; /*0x6ce8be*/
}



// ==== 0x006CE8D0  SuperWeaponTypeClass::SaveLoad_Prefix_0  this=SuperWeaponTypeClass  sig=csp ====
int __stdcall SuperWeaponTypeClass::SaveLoad_Prefix_0(SuperWeaponTypeClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6ce8df*/
  if ( result >= 0 ) /*0x6ce8e6*/
    return 0; /*0x6ce8e8*/
  return result; /*0x6ce8ea*/
}



// ==== 0x006CE8F0  SuperWeaponTypeClass::SD_vt11  this=SuperWeaponTypeClass  sig=csp ====
int SuperWeaponTypeClass::SD_vt11(SuperWeaponTypeClass *this)
{
  return 32; /*0x6ce8f5*/
}



// ==== 0x006CE900  SuperWeaponTypeClass::SD_vt12  this=SuperWeaponTypeClass  sig=csp ====
int SuperWeaponTypeClass::SD_vt12(SuperWeaponTypeClass *this)
{
  return 256; /*0x6ce905*/
}



// ==== 0x006CE910  SuperWeaponTypeClass::SD_vt13  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::SD_vt13(SuperWeaponTypeClass *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // eax

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x6ce919*/
  Power::TimerProcess(this->ArrayIndex); /*0x6ce927*/
  Power::TimerProcess(this->ActionValue[0]); /*0x6ce935*/
  Power::TimerProcess(this->RechargeVoice); /*0x6ce943*/
  Power::TimerProcess(this->ChargingVoice); /*0x6ce951*/
  Power::TimerProcess(this->ImpatientVoice); /*0x6ce95f*/
  v3 = Power::TimerProcess(this->SuspendVoice); /*0x6ce96d*/
  LOBYTE(v3) = this->IsPowered; /*0x6ce972*/
  Power::FlagProcess((Power *)a2, v3); /*0x6ce97b*/
  LOBYTE(v4) = this->DisableableFromShell; /*0x6ce980*/
  Power::FlagProcess((Power *)a2, v4); /*0x6ce989*/
  LOBYTE(v5) = this->PreClick; /*0x6ce98e*/
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x6ce997*/
  LOBYTE(v6) = this->PostClick; /*0x6ce99c*/
  Power::FlagProcess((Power *)a2, v6); /*0x6ce9a5*/
  Power::TimerProcess(this->PreDependent); /*0x6ce9b3*/
  LOBYTE(v7) = this->ShowTimer; /*0x6ce9b8*/
  Power::FlagProcess((Power *)a2, v7); /*0x6ce9c1*/
  Power::TimerProcess(this->RechargeTime); /*0x6ce9cf*/
  Power::TimerProcess((int)this->Type); /*0x6ce9dd*/
  LOBYTE(v8) = this->UseChargeDrain; /*0x6ce9e2*/
  v9 = Power::FlagProcess((Power *)a2, v8); /*0x6ce9eb*/
  LOBYTE(v9) = this->ManualControl; /*0x6ce9f0*/
  return Power::FlagProcess((Power *)a2, v9); /*0x6ce9fe*/
}



// ==== 0x006CEA10  SuperWeaponTypeClass::SD_vt16  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::SD_vt16(SuperWeaponTypeClass *this)
{
  return this->ArrayIndex; /*0x6cea16*/
}



// ==== 0x006CEA20  SuperWeaponTypeClass::SD_vt25  this=SuperWeaponTypeClass  sig=csp ====
char __userpurge SuperWeaponTypeClass::SD_vt25@<al>(
        SuperWeaponTypeClass *this,
        double a2@<st1>,
        double a3@<st0>,
        unsigned __int8 ***a4)
{
  int v4; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int SWProperties; // eax
  char Bool_Overwrite; // al
  int v11; // ecx
  int Int_Overwrite; // eax
  char v13; // al
  char v14; // cl
  char v15; // al
  char v16; // al
  int v17; // edi
  int Index; // eax
  int v19; // edi
  int v20; // eax
  int v21; // edx
  char **v23; // edi
  char **v24; // edi
  int v25; // edi
  int v26; // eax
  char v27; // cl
  char v28; // al
  int v30; // eax
  char *v31; // edi
  void *v32; // eax
  double v34; // [esp+0h] [ebp-408h]
  char v35; // [esp+4h] [ebp-404h]
  char v36; // [esp+4h] [ebp-404h]
  char v37; // [esp+4h] [ebp-404h]
  char v38; // [esp+4h] [ebp-404h]
  int v39; // [esp+18h] [ebp-3F0h]
  int v40; // [esp+18h] [ebp-3F0h]
  char Destination[24]; // [esp+1Ch] [ebp-3ECh] BYREF
  char v42; // [esp+34h] [ebp-3D4h]
  char v43[40]; // [esp+38h] [ebp-3D0h] BYREF
  char v44[40]; // [esp+60h] [ebp-3A8h] BYREF
  VocClass v45; // [esp+88h] [ebp-380h] BYREF
  char Buffer[512]; // [esp+208h] [ebp-200h] BYREF

  _EBP = v4; /*0x6cea2f*/
  INIClass::ResetSection((INIClass *)this); /*0x6cea33*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)_EBP, (unsigned __int8 ***)this) ) /*0x6cea3b*/
    return 0; /*0x6cee51*/
  v6 = *(_DWORD *)(_EBP + 156); /*0x6cea4a*/
  if ( INIClass::GetString( /*0x6cea6d*/
         (INIClass *)this,
         (unsigned __int8 *)(_EBP + 36),
         aWeapontype,
         &g_INI_DefaultBuffer,
         (char *)&v45,
         128) )
  {
    v7 = InfantryTypeClass::Find((char *)&v45); /*0x6cea7d*/
  }
  else
  {
    v7 = v6; /*0x6cea84*/
  }
  v8 = *(_DWORD *)(_EBP + 188); /*0x6cea86*/
  *(_DWORD *)(_EBP + 156) = v7; /*0x6cea8c*/
  SWProperties = SuperWeaponTypeClass::loadSWProperties( /*0x6cea9b*/
                   this,
                   (unsigned __int8 *)(_EBP + 36),
                   (unsigned __int8 *)g_INI_Key_Action,
                   v8);
  v35 = *(_BYTE *)(_EBP + 230); /*0x6ceaa8*/
  *(_DWORD *)(_EBP + 188) = SWProperties; /*0x6ceaaf*/
  *(_BYTE *)(_EBP + 230) = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(_EBP + 36), aIspowered, v35); /*0x6ceaba*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6ceacf*/
                     (int *)this,
                     (unsigned __int8 *)(_EBP + 36),
                     aDisableablefro,
                     *(_BYTE *)(_EBP + 231));
  v11 = *(_DWORD *)(_EBP + 232); /*0x6cead4*/
  *(_BYTE *)(_EBP + 231) = Bool_Overwrite; /*0x6ceada*/
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(_EBP + 36), aFlashsidebarta, v11); /*0x6ceae9*/
  v36 = *(_BYTE *)(_EBP + 236); /*0x6ceaf6*/
  *(_DWORD *)(_EBP + 232) = Int_Overwrite; /*0x6ceafd*/
  *(_BYTE *)(_EBP + 236) = INIClass::ReadBool_Overwrite( /*0x6ceb08*/
                             (int *)this,
                             (unsigned __int8 *)(_EBP + 36),
                             aAidefendagains,
                             v36);
  v13 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(_EBP + 36), aPreclick, *(_BYTE *)(_EBP + 237)); /*0x6ceb1d*/
  v14 = *(_BYTE *)(_EBP + 238); /*0x6ceb22*/
  *(_BYTE *)(_EBP + 237) = v13; /*0x6ceb28*/
  v15 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(_EBP + 36), aPostclick, v14); /*0x6ceb37*/
  v37 = *(_BYTE *)(_EBP + 244); /*0x6ceb44*/
  *(_BYTE *)(_EBP + 238) = v15; /*0x6ceb4b*/
  v16 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(_EBP + 36), aShowtimer, v37); /*0x6ceb51*/
  v17 = *(_DWORD *)(_EBP + 192); /*0x6ceb56*/
  *(_BYTE *)(_EBP + 244) = v16; /*0x6ceb5c*/
  if ( !INIClass::GetString( /*0x6ceb94*/
          (INIClass *)this,
          (unsigned __int8 *)(_EBP + 36),
          aSpecialsound,
          &g_INI_DefaultBuffer,
          (char *)&v45,
          128)
    || (Index = VocClass::FindIndex(&v45), Index == -1) )
  {
    Index = v17; /*0x6ceb96*/
  }
  v19 = *(_DWORD *)(_EBP + 196); /*0x6ceb98*/
  *(_DWORD *)(_EBP + 192) = Index; /*0x6cebb8*/
  if ( !INIClass::GetString( /*0x6cebd6*/
          (INIClass *)this,
          (unsigned __int8 *)(_EBP + 36),
          g_INI_Key_StartSound,
          &g_INI_DefaultBuffer,
          (char *)&v45,
          128)
    || (v20 = VocClass::FindIndex(&v45), v20 == -1) )
  {
    v20 = v19; /*0x6cebd8*/
  }
  __asm { fld dword ptr [ebp+0F8h] } /*0x6cebda*/
  *(_DWORD *)(_EBP + 196) = v20; /*0x6cebe5*/
  __asm { fstp qword ptr [esp+408h+var_408]; double } /*0x6cebeb*/
  INIClass::ReadDouble_Overwrite((double *)this, (unsigned __int8 *)(_EBP + 36), g_INI_Key_Range, v34); /*0x6cebf4*/
  v21 = *(_DWORD *)(_EBP + 252); /*0x6cebf9*/
  __asm { fstp dword ptr [ebp+0F8h] } /*0x6cec01*/
  *(float *)(_EBP + 248) = _ET1; /*0x6cec01*/
  *(_DWORD *)(_EBP + 252) = INIClass::ReadInt_Overwrite( /*0x6cec13*/
                              (bool *)this,
                              (unsigned __int8 *)(_EBP + 36),
                              aLinemultiplier,
                              v21);
  INIClass::GetString( /*0x6cec2d*/
    (INIClass *)this,
    (unsigned __int8 *)(_EBP + 36),
    (unsigned __int8 *)g_INI_Key_Type,
    &g_INI_DefaultBuffer,
    v44,
    40);
  if ( strlen(v44) ) /*0x6cec36*/
  {
    v39 = 0; /*0x6cec42*/
    v23 = (char **)&stru_8425A4.Name[7]; /*0x6cec46*/
    while ( _strcmpi(*v23, v44) ) /*0x6cec5d*/
    {
      ++v23; /*0x6cec63*/
      ++v39; /*0x6cec6d*/
      if ( (int)v23 >= (int)stru_8425A4.Type ) /*0x6cec71*/
        goto LABEL_18; /*0x6cec71*/
    }
    if ( v39 != -1 ) /*0x6cec7c*/
      *(_DWORD *)(_EBP + 180) = v39; /*0x6cec7e*/
  }
LABEL_18:
  INIClass::GetString((INIClass *)this, (unsigned __int8 *)(_EBP + 36), aPredependent, &g_INI_DefaultBuffer, v43, 40); /*0x6cec84*/
  if ( strlen(v43) ) /*0x6ceca1*/
  {
    v40 = 0; /*0x6cecad*/
    v24 = (char **)&stru_8425A4.Name[7]; /*0x6cecb1*/
    while ( _strcmpi(*v24, v43) ) /*0x6cecc8*/
    {
      ++v24; /*0x6cecce*/
      ++v40; /*0x6cecd8*/
      if ( (int)v24 >= (int)stru_8425A4.Type ) /*0x6cecdc*/
        goto LABEL_25; /*0x6cecdc*/
    }
    if ( v40 != -1 ) /*0x6cece7*/
      *(_DWORD *)(_EBP + 240) = v40; /*0x6cece9*/
  }
LABEL_25:
  v25 = *(_DWORD *)(_EBP + 200); /*0x6cecef*/
  if ( INIClass::GetString( /*0x6ced0f*/
         (INIClass *)this,
         (unsigned __int8 *)(_EBP + 36),
         aAuxbuilding,
         &g_INI_DefaultBuffer,
         (char *)&v45,
         128) )
  {
    v26 = BuildingTypeClass::FindOrCreate((char *)&v45); /*0x6ced1f*/
  }
  else
  {
    v26 = v25; /*0x6ced26*/
  }
  v27 = *(_BYTE *)(_EBP + 229); /*0x6ced28*/
  *(_DWORD *)(_EBP + 200) = v26; /*0x6ced2e*/
  v28 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(_EBP + 36), aUsechargedrain, v27); /*0x6ced3d*/
  v38 = *(_BYTE *)(_EBP + 245); /*0x6ced4a*/
  *(_BYTE *)(_EBP + 229) = v28; /*0x6ced51*/
  *(_BYTE *)(_EBP + 245) = INIClass::ReadBool_Overwrite( /*0x6ced68*/
                             (int *)this,
                             (unsigned __int8 *)(_EBP + 36),
                             aManualcontrol,
                             v38);
  INIClass::ReadDouble_Overwrite((double *)this, (unsigned __int8 *)(_EBP + 36), aRechargetime, 0.0); /*0x6ced6e*/
  __asm /*0x6ced73*/
  {
    fcom ds:dbl_7E2800
    fnstsw ax
  }
  if ( (_AX & 0x4000) != 0 ) /*0x6ced7e*/
  {
    __asm { fstp st } /*0x6ced93*/
  }
  else
  {
    __asm { fmul ds:flt_7F4100 } /*0x6ced80*/
    LOWORD(v30) = Math::RoundToInt(a3); /*0x6ced86*/
    *(_DWORD *)(_EBP + 176) = v30; /*0x6ced8b*/
  }
  v31 = (char *)(_EBP + 204); /*0x6ced9c*/
  INIClass::GetString( /*0x6cedb1*/
    (INIClass *)this,
    (unsigned __int8 *)(_EBP + 36),
    aSidebarimage,
    (char *)(_EBP + 204),
    (char *)&v45.Name[5],
    256);
  if ( &v45 == (VocClass *)-128 ) /*0x6cedbf*/
  {
    Destination[0] = (unsigned __int8)&v45.Name[5]; /*0x6cedc1*/
  }
  else
  {
    strncpy(Destination, (const char *)&v45.Name[5], 0x18u); /*0x6cedd6*/
    v42 = 0; /*0x6cedde*/
  }
  if ( Destination != v31 ) /*0x6cede9*/
  {
    qmemcpy(v31, Destination, 0x18u); /*0x6cedf4*/
    *(_BYTE *)(_EBP + 228) = v42; /*0x6cedf6*/
  }
  _makepath(Buffer, 0, 0, (const char *)(_EBP + 204), Ext); /*0x6cee0f*/
  v32 = SearchMIXFile(Buffer, 0); /*0x6cee20*/
  *(_DWORD *)(_EBP + 184) = v32; /*0x6cee26*/
  if ( !v32 ) /*0x6cee2f*/
    *(_DWORD *)(_EBP + 184) = SearchMIXFile(&stru_820320.?[143], 0); /*0x6cee3d*/
  return 1; /*0x6cee43*/
}



// ==== 0x006CEE60  ObjectClass::ObjectTypeClass_Read  this=ObjectClass  sig=csp ====
int __thiscall ObjectTypeClass_Read(ObjectClass *this)
{
  int v2; // esi

  if ( !this ) /*0x6cee66*/
    return -1; /*0x6cee66*/
  v2 = 0; /*0x6cee6d*/
  if ( dword_A8E340 <= 0 ) /*0x6cee71*/
    return -1; /*0x6cee96*/
  while ( _strcmpi((char *)(*((_DWORD *)dword_A8E334 + v2) + 36), (char *)this) ) /*0x6cee8a*/
  {
    if ( ++v2 >= dword_A8E340 ) /*0x6cee94*/
      return -1; /*0x6cee94*/
  }
  return v2; /*0x6cee96*/
}



// ==== 0x006CEEB0  SuperWeaponTypeClass::FindFirstOfAction  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::FindFirstOfAction(SuperWeaponTypeClass *this)
{
  int v1; // eax
  char *i; // edx

  v1 = 0; /*0x6ceeb8*/
  if ( dword_A8E340 <= 0 ) /*0x6ceebd*/
    return 0; /*0x6ceed9*/
  for ( i = (char *)dword_A8E334; *(SuperWeaponTypeClass **)(*(_DWORD *)i + 188) != this; i += 4 ) /*0x6ceec5*/
  {
    if ( ++v1 >= dword_A8E340 ) /*0x6ceed7*/
      return 0; /*0x6ceed7*/
  }
  return *((_DWORD *)dword_A8E334 + v1); /*0x6ceed9*/
}



// ==== 0x006CEEF0  WeaponTypeClass::Process  this=AbstractTypeClass  sig=csp ====
int __thiscall sub_6CEEF0(char *Source)
{
  int v2; // esi
  void *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6cef0c*/
    return 0; /*0x6cef6f*/
  v2 = 0; /*0x6cef1d*/
  if ( dword_A8E340 <= 0 ) /*0x6cef21*/
  {
LABEL_6:
    v3 = __2_YAPAXI_Z(0x100u); /*0x6cef46*/
    if ( v3 ) /*0x6cef55*/
      return SuperWeaponTypeClass::SuperWeaponTypeClass((int)v3, Source); /*0x6cef61*/
    return 0; /*0x6cef55*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)dword_A8E334 + v2) + 36), Source) ) /*0x6cef3a*/
  {
    if ( ++v2 >= dword_A8E340 ) /*0x6cef44*/
      goto LABEL_6; /*0x6cef44*/
  }
  return *((_DWORD *)dword_A8E334 + v2); /*0x6cef5f*/
}



// ==== 0x006CEF80  SuperWeaponTypeClass::SD_vt27  this=SuperWeaponTypeClass  sig=csp ====
int __thiscall SuperWeaponTypeClass::SD_vt27(SuperWeaponTypeClass *this, int a2, int a3)
{
  int v4; // eax

  if ( this->Type != (BuildingTypeClass *)10 ) /*0x6cef8b*/
    return this->ActionValue[0]; /*0x6cef8b*/
  if ( a3
    && (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 44))(a3) == 6
    && (v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 44))(a3),
        (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v4 == 6 ? a3 + 0x21C : 540), (#375 *)dword_A83D4C)) )
  {
    return this->ActionValue[0]; /*0x6cefd3*/
  }
  else
  {
    return 70; /*0x6cefca*/
  }
}



// ==== 0x006CEFE0  SuperWeaponTypeClass::SDDTOR  this=SuperWeaponTypeClass  sig=csp ====
_DWORD *__thiscall SuperWeaponTypeClass::SDDTOR(SuperWeaponTypeClass *this, char a2)
{
  int v3; // eax
  SuperWeaponTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractTypeClass = &SuperWeaponTypeClass::`vftable'; /*0x6cefed*/
  this->? = &SuperWeaponTypeClass::`vftable'; /*0x6ceff3*/
  this->? = &SuperWeaponTypeClass::`vftable'; /*0x6ceffa*/
  this->? = &SuperWeaponTypeClass::`vftable'; /*0x6cf001*/
  v5 = this; /*0x6cf00f*/
  v3 = (*(int (__thiscall **)(_DWORD *, SuperWeaponTypeClass **))(dword_A8E330 + 16))(&dword_A8E330, &v5); /*0x6cf013*/
  if ( v3 != -1 && v3 < dword_A8E340 && v3 < --dword_A8E340 ) /*0x6cf02e*/
  {
    do /*0x6cf046*/
    {
      ++v3; /*0x6cf036*/
      *((_DWORD *)dword_A8E334 + v3 - 1) = *((_DWORD *)dword_A8E334 + v3); /*0x6cf03a*/
    }
    while ( v3 < dword_A8E340 ); /*0x6cf046*/
  }
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x6cf04a*/
  if ( (a2 & 1) != 0 ) /*0x6cf054*/
    __3_YAXPAX_Z(this); /*0x6cf057*/
  return &this->AbstractTypeClass; /*0x6cf061*/
}



// ==== 0x006CF070  sub_6CF070  this=-  sig=ida-proto ====
int sub_6CF070()
{
  sub_6CF8F0(&dword_B0C114, 0, 0); /*0x6cf079*/
  dword_B0C114 = (int)&DynamicVectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf087*/
  dword_B0C128 = 10; /*0x6cf091*/
  dword_B0C124 = 0; /*0x6cf09b*/
  sub_6CF8F0(&dword_B0C12C, 0, 0); /*0x6cf0a5*/
  dword_B0C12C = (int)&DynamicVectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf0b4*/
  dword_B0C13C = 0; /*0x6cf0be*/
  SwizzleManagerClass_Instance = (int)&SwizzleManagerClass::`vftable'; /*0x6cf0c8*/
  dword_B0C128 = 1000; /*0x6cf0d2*/
  dword_B0C140 = 1000; /*0x6cf0d7*/
  return atexit(SwizzleManagerClass::Register); /*0x6cf0e2*/
}



// ==== 0x006CF0F0  SwizzleManagerClass::Register  this=SwizzleManagerClass  sig=ida-proto ====
void __cdecl sub_6CF0F0()
{
  SwizzleManagerClass_Instance = (int)&SwizzleManagerClass::`vftable'; /*0x6cf0f6*/
  SwizzleManagerClass::ConvertNodes((int)&SwizzleManagerClass_Instance); /*0x6cf100*/
  dword_B0C12C = (int)&VectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf10e*/
  if ( dword_B0C130 && byte_B0C139 ) /*0x6cf120*/
  {
    __3_YAXPAX_Z(dword_B0C130); /*0x6cf123*/
    dword_B0C130 = 0; /*0x6cf12b*/
  }
  byte_B0C139 = 0; /*0x6cf136*/
  dword_B0C134 = 0; /*0x6cf13e*/
  dword_B0C114 = (int)&VectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf144*/
  if ( dword_B0C118 && byte_B0C121 ) /*0x6cf156*/
  {
    __3_YAXPAX_Z(dword_B0C118); /*0x6cf159*/
    dword_B0C118 = 0; /*0x6cf161*/
  }
  byte_B0C121 = 0; /*0x6cf167*/
  dword_B0C11C = 0; /*0x6cf16d*/
}



// ==== 0x006CF1D0  SwizzleManagerClass::SmallFunc_6CF1D0  this=SwizzleManagerClass  sig=csp ====
void __thiscall SmallFunc_6CF1D0(SwizzleManagerClass *this)
{
  void *SwizzleManagerClass_field_0x20; // eax
  void *SwizzleManagerClass_field_0x08; // eax

  *(_DWORD *)this->__pad_0 = &SwizzleManagerClass::`vftable'; /*0x6cf1d4*/
  SwizzleManagerClass::ConvertNodes((int)this); /*0x6cf1da*/
  SwizzleManagerClass_field_0x20 = (void *)this->SwizzleManagerClass_field_0x20; /*0x6cf1df*/
  this->SwizzleManagerClass_field_0x1C = (int)&VectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf1e6*/
  if ( SwizzleManagerClass_field_0x20 && *((_BYTE *)this + 41) ) /*0x6cf1ef*/
  {
    __3_YAXPAX_Z(SwizzleManagerClass_field_0x20); /*0x6cf1f5*/
    this->SwizzleManagerClass_field_0x20 = 0; /*0x6cf1fd*/
  }
  *((_BYTE *)this + 41) = 0; /*0x6cf200*/
  this->SwizzleManagerClass_field_0x24 = 0; /*0x6cf203*/
  SwizzleManagerClass_field_0x08 = (void *)this->SwizzleManagerClass_field_0x08; /*0x6cf206*/
  this->SwizzleManagerClass_field_0x04 = (int)&VectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf209*/
  if ( SwizzleManagerClass_field_0x08 && BYTE1(this->SwizzleManagerClass_field_0x10) ) /*0x6cf214*/
  {
    __3_YAXPAX_Z(SwizzleManagerClass_field_0x08); /*0x6cf21a*/
    this->SwizzleManagerClass_field_0x08 = 0; /*0x6cf222*/
  }
  BYTE1(this->SwizzleManagerClass_field_0x10) = 0; /*0x6cf225*/
  this->SwizzleManagerClass_field_0x0C = 0; /*0x6cf228*/
}



// ==== 0x006CF230  SwizzleManagerClass::ConvertWrapper  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManager::ConvertWrapper(SwizzleManagerClass *this)
{
  SwizzleManagerClass::ConvertNodes((int)this); /*0x6cf234*/
  return 0; /*0x6cf23b*/
}



// ==== 0x006CF240  SwizzleManagerClass::RegisterForTracking  this=SwizzleManagerClass  sig=csp ====
int __stdcall ObjectPtr_RegisterForTracking(int a1, int *a2)
{
  int v3; // ebx
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // edx

  if ( !a2 ) /*0x6cf248*/
    return -2147467261; /*0x6cf24b*/
  v3 = *a2; /*0x6cf254*/
  if ( !*a2 ) /*0x6cf254*/
    return 0; /*0x6cf25b*/
  v4 = *(_DWORD *)(a1 + 12); /*0x6cf266*/
  if ( *(_DWORD *)(a1 + 20) < v4 /*0x6cf28e*/
    || (*(_BYTE *)(a1 + 17) || !v4)
    && (v5 = *(_DWORD *)(a1 + 24), v5 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(a1 + 4) + 8))(a1 + 4, v4 + v5, 0) )
  {
    v6 = *(_DWORD *)(a1 + 20); /*0x6cf295*/
    v7 = *(_DWORD *)(a1 + 8); /*0x6cf298*/
    *(_DWORD *)(a1 + 20) = v6 + 1; /*0x6cf29e*/
    *(_DWORD *)(v7 + 8 * v6) = v3; /*0x6cf2a1*/
    *(_DWORD *)(v7 + 8 * v6 + 4) = a2; /*0x6cf2a4*/
  }
  *a2 = 0; /*0x6cf2a8*/
  return 0; /*0x6cf24a*/
}



// ==== 0x006CF2C0  SwizzleManagerClass::Here_I_Am  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::Here_I_Am(int a1, int a2, int a3)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // edx

  v3 = *(_DWORD *)(a1 + 36); /*0x6cf2d5*/
  if ( *(_DWORD *)(a1 + 44) < v3 /*0x6cf2f7*/
    || (*(_BYTE *)(a1 + 41) || !v3)
    && (v4 = *(_DWORD *)(a1 + 48), v4 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(a1 + 28) + 8))(a1 + 28, v3 + v4, 0) )
  {
    v5 = *(_DWORD *)(a1 + 44); /*0x6cf2fe*/
    v6 = *(_DWORD *)(a1 + 32); /*0x6cf301*/
    *(_DWORD *)(a1 + 44) = v5 + 1; /*0x6cf307*/
    *(_DWORD *)(v6 + 8 * v5) = a2; /*0x6cf30a*/
    *(_DWORD *)(v6 + 8 * v5 + 4) = a3; /*0x6cf30d*/
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
int __stdcall SwizzleManagerClass::Clear(SwizzleManagerClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6cf416*/
    return -2147467261; /*0x6cf418*/
  *a2 = 4; /*0x6cf420*/
  return 0; /*0x6cf41d*/
}



// ==== 0x006CF430  SwizzleManagerClass::Process  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::_vt00(int a1, const void *a2, _DWORD *a3)
{
  if ( !a3 ) /*0x6cf438*/
    return -2147467261; /*0x6cf43b*/
  if ( memcmp(a2, &IID_ISwizzle, 0x10u) && memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x6cf46a*/
    return -2147467262; /*0x6cf46f*/
  *a3 = a1; /*0x6cf47c*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x6cf481*/
  return 0; /*0x6cf43a*/
}



// ==== 0x006CF490  SwizzleManagerClass::Add  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::Add(SwizzleManagerClass *this, int a2, _DWORD *a3)
{
  if ( !a2 || !a3 ) /*0x6cf49e*/
    return -2147467261; /*0x6cf4a7*/
  *a3 = a2; /*0x6cf4a0*/
  return 0; /*0x6cf4a4*/
}



// ==== 0x006CF4B0  SwizzleManagerClass::AddRef  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::AddRef(SwizzleManagerClass *this)
{
  return 1; /*0x6cf4b5*/
}



// ==== 0x006CF4C0  SwizzleManagerClass::Release  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::Release(SwizzleManagerClass *this)
{
  return 1; /*0x6cf4c5*/
}



// ==== 0x006CF4D0  SwizzleManagerClass::Remove  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::Remove(SwizzleManagerClass *this, int a2, int a3)
{
  return -2147467263; /*0x6cf4d5*/
}



// ==== 0x006CF4E0  SwizzleManagerClass::Lookup  this=SwizzleManagerClass  sig=csp ====
int __stdcall SwizzleManagerClass::Lookup(SwizzleManagerClass *this, int a2, int a3, int a4)
{
  return -2147467263; /*0x6cf4e5*/
}



// ==== 0x006CF4F0  _DynamicVectorClass_VSwizzlePointerClass::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall SwizzleManagerClass_19::ClearBuffer(_DynamicVectorClass_VSwizzlePointerClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6cf4f6*/
  this->m_10 = 0; /*0x6cf4f9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6cf500*/
  {
    __3_YAXPAX_Z(v2); /*0x6cf506*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6cf50e*/
  }
  BYTE1(this->m_C) = 0; /*0x6cf511*/
  this->m_8 = 0; /*0x6cf514*/
}



// ==== 0x006CF520  _DynamicVectorClass_VSwizzlePointerClass::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall SwizzleManagerClass_19::PointerToIndex(_DynamicVectorClass_VSwizzlePointerClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6cf520*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x6cf535*/
  else
    return 0; /*0x6cf527*/
}



// ==== 0x006CF540  _VectorClass_VSwizzlePointerClass::Lookup  this=VectorClass  sig=csp ====
_DWORD *__thiscall SwizzleManagerClass_19::Lookup(_VectorClass_VSwizzlePointerClass *this, _DWORD *a2, int a3)
{
  int v3; // edx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x6cf540*/
  *a2 = *(_DWORD *)(v3 + 8 * a3); /*0x6cf54f*/
  a2[1] = *(_DWORD *)(v3 + 8 * a3 + 4); /*0x6cf556*/
  return a2; /*0x6cf551*/
}



// ==== 0x006CF560  _VectorClass_VSwizzlePointerClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall SwizzleManagerClass_19::AddRef(_VectorClass_VSwizzlePointerClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x6cf562*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6cf56d*/
  {
    v3 = 0; /*0x6cf56f*/
    if ( m_8 <= 0 ) /*0x6cf573*/
      return 1; /*0x6cf593*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6cf575*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6cf57b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6cf584*/
    {
      ++v3; /*0x6cf586*/
      v4 += 2; /*0x6cf587*/
      if ( v3 >= m_8 ) /*0x6cf58c*/
        return 1; /*0x6cf58c*/
    }
  }
  return 0; /*0x6cf58e*/
}



// ==== 0x006CF5A0  _VectorClass_VSwizzlePointerClass::Release  this=VectorClass  sig=csp ====
char __thiscall SwizzleManagerClass_19::Release(_VectorClass_VSwizzlePointerClass *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // esi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx

  v3 = a2; /*0x6cf5a2*/
  if ( a2 ) /*0x6cf5ae*/
  {
    v5 = a3; /*0x6cf5b4*/
    LOBYTE(this->m_C) = 0; /*0x6cf5b8*/
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
        v7 = (_DWORD *)v6; /*0x6cf5d6*/
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
        v5 = (_DWORD *)v6; /*0x6cf5e8*/
      }
      else
      {
        v5 = 0; /*0x6cf5ec*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x6cf607*/
    if ( v5 ) /*0x6cf60b*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6cf616*/
      {
        m_8 = this->m_8; /*0x6cf61b*/
        if ( a2 < m_8 ) /*0x6cf620*/
          m_8 = a2; /*0x6cf622*/
        v13 = 0; /*0x6cf624*/
        if ( m_8 > 0 ) /*0x6cf628*/
        {
          do /*0x6cf647*/
          {
            v14 = 2 * v13; /*0x6cf62d*/
            v15 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * v13++); /*0x6cf636*/
            v5[v14] = *v15; /*0x6cf63d*/
            v5[v14 + 1] = v15[1]; /*0x6cf643*/
          }
          while ( v13 < m_8 ); /*0x6cf647*/
          v3 = a2; /*0x6cf649*/
        }
        if ( BYTE1(this->m_C) ) /*0x6cf64f*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6cf658*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6cf660*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x6cf66b*/
      this->m_8 = v3; /*0x6cf671*/
      BYTE1(this->m_C) = a3 == 0; /*0x6cf674*/
      return 1; /*0x6cf67a*/
    }
    else
    {
      return 0; /*0x6cf610*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_VSwizzlePointerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6cf684*/
    return 1; /*0x6cf68a*/
  }
}



// ==== 0x006CF690  _VectorClass_VSwizzlePointerClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall SwizzleManagerClass_19::ddtor(_VectorClass_VSwizzlePointerClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6cf69d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6cf6a3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6cf6ab*/
  }
  BYTE1(this->m_C) = 0; /*0x6cf6ae*/
  this->m_8 = 0; /*0x6cf6b1*/
}



// ==== 0x006CF6C0  _VectorClass_VSwizzlePointerClass::Init  this=VectorClass  sig=csp ====
int __thiscall SwizzleManagerClass_19::Init(_VectorClass_VSwizzlePointerClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6cf6c0*/
    return 0; /*0x6cf6c8*/
  m_8 = this->m_8; /*0x6cf6ce*/
  result = 0; /*0x6cf6d1*/
  if ( m_8 <= 0 ) /*0x6cf6d5*/
    return -1; /*0x6cf6ec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; i += 2 ) /*0x6cf6db*/
  {
    if ( ++result >= m_8 ) /*0x6cf6ea*/
      return -1; /*0x6cf6ea*/
  }
  return result; /*0x6cf6ca*/
}



// ==== 0x006CF700  _VectorClass_VSwizzlePointerClass::Add  this=VectorClass  sig=csp ====
unsigned int __thiscall SwizzleManagerClass_19::Add(_VectorClass_VSwizzlePointerClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6cf700*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x6cf715*/
  else
    return 0; /*0x6cf707*/
}



// ==== 0x006CF720  _DynamicVectorClass_VSwizzlePointerClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall SwizzleManagerClass_19::SetCapacity(_DynamicVectorClass_VSwizzlePointerClass *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x6cf722*/
  if ( a2 ) /*0x6cf72e*/
  {
    v5 = a3; /*0x6cf734*/
    LOBYTE(this->m_C) = 0; /*0x6cf738*/
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
        v7 = (_DWORD *)v6; /*0x6cf756*/
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
        v5 = (_DWORD *)v6; /*0x6cf768*/
      }
      else
      {
        v5 = 0; /*0x6cf76c*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x6cf787*/
    if ( !v5 ) /*0x6cf78b*/
      return 0; /*0x6cf814*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6cf791*/
    {
      m_8 = this->m_8; /*0x6cf796*/
      if ( a2 < m_8 ) /*0x6cf79b*/
        m_8 = a2; /*0x6cf79d*/
      v12 = 0; /*0x6cf79f*/
      if ( m_8 > 0 ) /*0x6cf7a3*/
      {
        do /*0x6cf7c2*/
        {
          v13 = 2 * v12; /*0x6cf7a8*/
          v14 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * v12++); /*0x6cf7b1*/
          v5[v13] = *v14; /*0x6cf7b8*/
          v5[v13 + 1] = v14[1]; /*0x6cf7be*/
        }
        while ( v12 < m_8 ); /*0x6cf7c2*/
        v3 = a2; /*0x6cf7c4*/
      }
      if ( BYTE1(this->m_C) ) /*0x6cf7ca*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6cf7d3*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6cf7db*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x6cf7e6*/
    this->m_8 = v3; /*0x6cf7ec*/
    BYTE1(this->m_C) = a3 == 0; /*0x6cf7ef*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_VSwizzlePointerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6cf7f8*/
  }
  v15 = this->m_8; /*0x6cf7fb*/
  if ( v15 < this->m_10 ) /*0x6cf803*/
    this->m_10 = v15; /*0x6cf805*/
  return 1; /*0x6cf808*/
}



// ==== 0x006CF820  _DynamicVectorClass_VSwizzlePointerClass::FindItem  this=DynamicVector  sig=csp ====
int __thiscall SwizzleManagerClass_19::FindItem(_DynamicVectorClass_VSwizzlePointerClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6cf820*/
  result = 0; /*0x6cf823*/
  if ( m_10 <= 0 ) /*0x6cf828*/
    return -1; /*0x6cf83f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; i += 2 ) /*0x6cf82e*/
  {
    if ( ++result >= m_10 ) /*0x6cf83d*/
      return -1; /*0x6cf83d*/
  }
  return result; /*0x6cf842*/
}



// ==== 0x006CF850  _VectorClass_VSwizzlePointerClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall SwizzleManagerClass_19::QueryInterface(_VectorClass_VSwizzlePointerClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6cf853*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf856*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6cf860*/
  {
    __3_YAXPAX_Z(v3); /*0x6cf868*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6cf870*/
  }
  BYTE1(this->m_C) = 0; /*0x6cf87b*/
  this->m_8 = 0; /*0x6cf881*/
  if ( (a2 & 1) != 0 ) /*0x6cf888*/
    __3_YAXPAX_Z(this); /*0x6cf88b*/
  return this->__pad_0; /*0x6cf895*/
}



// ==== 0x006CF8A0  _DynamicVectorClass_VSwizzlePointerClass::Constructor_VectorClass_SwizzlePointerClass_  this=DynamicVector  sig=csp ====
_DWORD *__thiscall SwizzleManagerClass_19::Constructor_VectorClass_SwizzlePointerClass_(
        _DynamicVectorClass_VSwizzlePointerClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6cf8a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf8a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6cf8b0*/
  {
    __3_YAXPAX_Z(v3); /*0x6cf8b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6cf8c0*/
  }
  BYTE1(this->m_C) = 0; /*0x6cf8cb*/
  this->m_8 = 0; /*0x6cf8d1*/
  if ( (a2 & 1) != 0 ) /*0x6cf8d8*/
    __3_YAXPAX_Z(this); /*0x6cf8db*/
  return this->__pad_0; /*0x6cf8e5*/
}



// ==== 0x006CF8F0  VectorClass::sub_6CF8F0  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_6CF8F0(VectorClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // ecx
  int v9; // edx

  this->Items = 0; /*0x6cf8fd*/
  this->Capacity = a2; /*0x6cf900*/
  this->IsInitialized = 1; /*0x6cf903*/
  this->IsAllocated = 0; /*0x6cf907*/
  this->ptr_0 = &VectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf90a*/
  if ( !a2 ) /*0x6cf910*/
    return &this->ptr_0; /*0x6cf910*/
  if ( !a3 ) /*0x6cf918*/
  {
    v7 = (_DWORD *)__2_YAPAXI_Z(8 * a2); /*0x6cf942*/
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
        this->IsAllocated = 1; /*0x6cf966*/
        return &this->ptr_0; /*0x6cf96f*/
      }
    }
    else
    {
      v7 = 0; /*0x6cf972*/
    }
    this->Items = v7; /*0x6cf974*/
    this->IsAllocated = 1; /*0x6cf977*/
    return &this->ptr_0; /*0x6cf97b*/
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
  return &this->ptr_0; /*0x6cf934*/
}



// ==== 0x006CF990  sub_6CF990  this=-  sig=ida-proto ====
int sub_6CF990()
{
  dword_B0CB28 = 0; /*0x6cf992*/
  dword_B0CB2C = 0; /*0x6cf997*/
  dword_B0CB30 = 0; /*0x6cf99c*/
  dword_B0CB34 = 0; /*0x6cf9a1*/
  return 0; /*0x6cf9a6*/
}



// ==== 0x006CF9B0  sub_6CF9B0  this=-  sig=ida-proto ====
void sub_6CF9B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6cf9bc*/
  dbl_B0CB48 = Math::Sqrt(v0 + v0); /*0x6cf9ce*/
}



// ==== 0x006CF9E0  sub_6CF9E0  this=-  sig=ida-proto ====
void sub_6CF9E0()
{
  dbl_B0CD30 = dbl_B0CB48 / 60.0; /*0x6cf9ec*/
}



// ==== 0x006CFA00  sub_6CFA00  this=-  sig=ida-proto ====
void sub_6CFA00()
{
  dbl_B0CCA8 = 1.0 / dbl_B0CD30; /*0x6cfa0c*/
}



// ==== 0x006CFA20  sub_6CFA20  this=-  sig=ida-proto ====
void sub_6CFA20()
{
  dbl_B0CCA0 = 0.0174532925199433 * 45.0; /*0x6cfa2c*/
}



// ==== 0x006CFA40  sub_6CFA40  this=-  sig=ida-proto ====
void sub_6CFA40()
{
  dbl_B0CB60 = 0.0174532925199433 * 60.0; /*0x6cfa4c*/
}



// ==== 0x006CFA60  sub_6CFA60  this=-  sig=ida-proto ====
void sub_6CFA60()
{
  dbl_B0C1B0 = 0.0174532925199433 * 90.0; /*0x6cfa6c*/
}



// ==== 0x006CFA80  sub_6CFA80  this=-  sig=ida-proto ====
__int64 sub_6CFA80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0C1B0 - dbl_B0CB60); /*0x6cfa92*/
  result = Math::RoundToInt(v0 * dbl_B0CB48 * 0.5); /*0x6cfaa6*/
  dword_B0CD3C = result; /*0x6cfaab*/
  return result; /*0x6cfab0*/
}



// ==== 0x006CFAC0  sub_6CFAC0  this=-  sig=ida-proto ====
void sub_6CFAC0()
{
  dbl_B0CB70 = Math::ArcTan((double)dword_B0CD3C * 0.00390625); /*0x6cfad7*/
}



// ==== 0x006CFAF0  sub_6CFAF0  this=-  sig=ida-proto ====
void sub_6CFAF0()
{
  dbl_B0CC30 = Math::ArcTan((double)(2 * dword_B0CD3C) / dbl_B0CB48); /*0x6cfb12*/
}



// ==== 0x006CFB20  sub_6CFB20  this=-  sig=ida-proto ====
__int64 sub_6CFB20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0CD3C) + 0.5); /*0x6cfb3b*/
  dword_B0CD2C = result; /*0x6cfb40*/
  return result; /*0x6cfb46*/
}



// ==== 0x006CFB50  sub_6CFB50  this=-  sig=ida-proto ====
int sub_6CFB50()
{
  word_B0CB40 = 0; /*0x6cfb52*/
  word_B0CB42 = 0; /*0x6cfb58*/
  return 0; /*0x6cfb5e*/
}



// ==== 0x006CFB60  sub_6CFB60  this=-  sig=ida-proto ====
int sub_6CFB60()
{
  dword_B0CC10 = 0; /*0x6cfb62*/
  dword_B0CC14 = 0; /*0x6cfb67*/
  dword_B0CC18 = 0; /*0x6cfb6c*/
  return 0; /*0x6cfb71*/
}



// ==== 0x006CFB80  sub_6CFB80  this=-  sig=ida-proto ====
int sub_6CFB80()
{
  dword_B0CD20 = 0; /*0x6cfb85*/
  dword_B0CD18 = 128; /*0x6cfb8f*/
  dword_B0CD1C = 128; /*0x6cfb94*/
  return 128; /*0x6cfb99*/
}



// ==== 0x006CFBA0  sub_6CFBA0  this=-  sig=ida-proto ====
int sub_6CFBA0()
{
  _BYTE *v0; // esi
  int v1; // edi

  v0 = &stru_B0C1C0; /*0x6cfba2*/
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

  if ( (byte_B0C1AC & 1) == 0 ) /*0x6cfbda*/
  {
    byte_B0C1AC |= 1u; /*0x6cfbe0*/
    v0 = &dword_B0CB20; /*0x6cfbe6*/
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
  ShapeButtonClass::Init(stru_B0CCB0); /*0x6cfc05*/
  return atexit(sub_6CFC20); /*0x6cfc15*/
}



// ==== 0x006CFC20  sub_6CFC20  this=-  sig=ida-proto ====
void __cdecl sub_6CFC20()
{
  if ( (byte_B0C1AC & 2) == 0 ) /*0x6cfc2a*/
  {
    byte_B0C1AC |= 2u; /*0x6cfc2e*/
    ShapeButtonClass::Destructor((int)stru_B0CCB0); /*0x6cfc39*/
  }
}



// ==== 0x006CFC40  sub_6CFC40  this=-  sig=ida-proto ====
int sub_6CFC40()
{
  ShapeButtonClass::Init(stru_B0CC40); /*0x6cfc45*/
  return atexit(sub_6CFC60); /*0x6cfc55*/
}



// ==== 0x006CFC60  sub_6CFC60  this=-  sig=ida-proto ====
void __cdecl sub_6CFC60()
{
  if ( (byte_B0C1AC & 4) == 0 ) /*0x6cfc6a*/
  {
    byte_B0C1AC |= 4u; /*0x6cfc6e*/
    ShapeButtonClass::Destructor((int)stru_B0CC40); /*0x6cfc79*/
  }
}



// ==== 0x006CFCC0  SidebarClass::findEntryIndexByName  this=Coord  sig=csp ====
int __thiscall sub_6CFCC0(const char *this)
{
  int v1; // ebp
  const char **v2; // edi

  v1 = 0; /*0x6cfcc4*/
  v2 = (const char **)off_8427D0; /*0x6cfcc6*/
  while ( strcmp(*v2, this) ) /*0x6cfcfa*/
  {
    ++v2; /*0x6cfcfc*/
    ++v1; /*0x6cfcff*/
    if ( (int)v2 >= (int)g_INI_Key_Beacon ) /*0x6cfd06*/
      return dword_8427CC; /*0x6cfd11*/
  }
  return v1; /*0x6cfd0d*/
}



// ==== 0x006CFD20  globalHelper_0CFD20  this=Coord  sig=csp ====
void __fastcall sub_6CFD20(int a1, int a2)
{
  g_ObjectTrackingPool[a1] = a2; /*0x6cfd20*/
}



// ==== 0x006CFD30  sub_6CFD30  this=-  sig=ida-proto ====
int __fastcall sub_6CFD30(int a1)
{
  return g_ObjectTrackingPool[a1]; /*0x6cfd37*/
}



// ==== 0x006CFD40  GetFontClassEntry  this=-  sig=ida-proto ====
char *__fastcall FontClass_GetEntry(int a1)
{
  unsigned int v1; // eax

  v1 = g_ObjectTrackingPool[a1]; /*0x6cfd40*/
  if ( v1 > 0x18 ) /*0x6cfd49*/
    return 0; /*0x6cfd5c*/
  else
    return (char *)&stru_B0C1C0 + 96 * v1; /*0x6cfd56*/
}



// ==== 0x006CFD60  sub_6CFD60  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_6CFD60(_DWORD *a1, int a2)
{
  _DWORD *result; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // edi

  result = a1; /*0x6cfd7a*/
  v4 = dword_B0CC24; /*0x6cfd82*/
  v5 = *((_DWORD *)dword_B0FC68 + 2); /*0x6cfd8f*/
  v6 = *((_DWORD *)dword_B0FC68 + 3); /*0x6cfd92*/
  *a1 = *(_DWORD *)dword_B0FC68 + dword_B0CC38 * g_ObjectTrackingPool[a2]; /*0x6cfd95*/
  a1[1] = v4; /*0x6cfd97*/
  a1[2] = v5; /*0x6cfd9a*/
  a1[3] = v6; /*0x6cfd9d*/
  return result; /*0x6cfda0*/
}



// ==== 0x006CFDB0  globalHelper_0CFDB0  this=-  sig=ida-proto ====
int __fastcall sub_6CFDB0(int a1)
{
  int result; // eax
  int v2; // ecx

  dword_B0CB54 = a1; /*0x6cfdb5*/
  result = *(_DWORD *)dword_B0FC6C - a1 * *((_DWORD *)dword_B0FC68 + 2); /*0x6cfdc9*/
  v2 = *(_DWORD *)dword_B0FC60 + *((_DWORD *)dword_B0FC60 + 2); /*0x6cfdd6*/
  dword_B0CC2C = result; /*0x6cfddb*/
  if ( result <= v2 ) /*0x6cfde0*/
    dword_B0CC2C = v2; /*0x6cfde2*/
  return result; /*0x6cfdd8*/
}



// ==== 0x006CFE10  ObjectClass::method_6CFE10  this=ObjectClass  sig=csp ====
int __thiscall sub_6CFE10(ObjectClass *this)
{
  return (int)&this->AbstractClass - dword_B0CC20 + 1; /*0x6cfe19*/
}



// ==== 0x006CFE20  TabClass::Constructor  this=TabClass  sig=csp ====
_DWORD *__thiscall TabClass::Constructor(TabClass *this)
{
  int v2; // ecx
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

  TabClass::initTabData((char *)this); /*0x6cfe2b*/
  *((_DWORD *)this + 5446) = &INoticeSink::`vftable'; /*0x6cfe3c*/
  TabClass::initStripClass((TabClass *)((char *)this + 21788)); /*0x6cfe42*/
  *((_DWORD *)this + 5451) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6cfe4e*/
  *((_DWORD *)this + 5453) = 0; /*0x6cfe54*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6cfe5a*/
  *((_DWORD *)this + 5456) = 0; /*0x6cfe60*/
  *((_DWORD *)this + 5454) = v2; /*0x6cfe66*/
  *((_DWORD *)this + 5446) = &TabClass::`vftable'; /*0x6cfe6e*/
  *((_BYTE *)this + 21828) = 1; /*0x6cfe74*/
  *((_BYTE *)this + 21829) = 1; /*0x6cfe7a*/
  *((_BYTE *)this + 21830) = 1; /*0x6cfe80*/
  this->TabClass_field_0x0 = &TabClass::`vftable'; /*0x6cfe86*/
  v3 = 0; /*0x6cfe8c*/
  v4 = (const char **)off_8427D0; /*0x6cfe8e*/
  while ( strcmp(*v4, aAttackmove) ) /*0x6cfec5*/
  {
    ++v4; /*0x6cfec7*/
    ++v3; /*0x6cfeca*/
    if ( (int)v4 >= (int)g_INI_Key_Beacon ) /*0x6cfed1*/
    {
      v5 = dword_8427CC; /*0x6cfed3*/
      goto LABEL_5; /*0x6cfed3*/
    }
  }
  v5 = v3; /*0x6cff0f*/
LABEL_5:
  dword_B0CD24 = v5; /*0x6cfed8*/
  v6 = 0; /*0x6cfedd*/
  v7 = (const char **)off_8427D0; /*0x6cfedf*/
  while ( strcmp(*v7, g_INI_Key_Beacon) ) /*0x6cff1a*/
  {
    ++v7; /*0x6cff1c*/
    ++v6; /*0x6cff1f*/
    if ( (int)v7 >= (int)g_INI_Key_Beacon ) /*0x6cff26*/
    {
      v8 = dword_8427CC; /*0x6cff28*/
      goto LABEL_11; /*0x6cff28*/
    }
  }
  v8 = v6; /*0x6cff64*/
LABEL_11:
  dword_B0CB3C = v8; /*0x6cff2d*/
  v9 = 0; /*0x6cff32*/
  v10 = (const char **)off_8427D0; /*0x6cff34*/
  while ( strcmp(*v10, g_INI_Key_Cheer) ) /*0x6cff6f*/
  {
    ++v10; /*0x6cff71*/
    ++v9; /*0x6cff74*/
    if ( (int)v10 >= (int)g_INI_Key_Beacon ) /*0x6cff7b*/
    {
      v11 = dword_8427CC; /*0x6cff7d*/
      goto LABEL_17; /*0x6cff7d*/
    }
  }
  v11 = v9; /*0x6cffb9*/
LABEL_17:
  dword_B0C1B8 = v11; /*0x6cff82*/
  v12 = 0; /*0x6cff87*/
  v13 = (const char **)off_8427D0; /*0x6cff89*/
  while ( strcmp(*v13, g_INI_Key_Deploy) ) /*0x6cffc4*/
  {
    ++v13; /*0x6cffc6*/
    ++v12; /*0x6cffc9*/
    if ( (int)v13 >= (int)g_INI_Key_Beacon ) /*0x6cffd0*/
    {
      v14 = dword_8427CC; /*0x6cffd2*/
      goto LABEL_23; /*0x6cffd2*/
    }
  }
  v14 = v12; /*0x6d000e*/
LABEL_23:
  dword_B0CB20 = v14; /*0x6cffd7*/
  v15 = 0; /*0x6cffdc*/
  v16 = (const char **)off_8427D0; /*0x6cffde*/
  while ( strcmp(*v16, g_INI_Key_Guard) ) /*0x6d0019*/
  {
    ++v16; /*0x6d001b*/
    ++v15; /*0x6d001e*/
    if ( (int)v16 >= (int)g_INI_Key_Beacon ) /*0x6d0025*/
    {
      v17 = dword_8427CC; /*0x6d0027*/
      goto LABEL_29; /*0x6d0027*/
    }
  }
  v17 = v15; /*0x6d0063*/
LABEL_29:
  dword_B0CB68 = v17; /*0x6d002c*/
  v18 = 0; /*0x6d0031*/
  v19 = (const char **)off_8427D0; /*0x6d0033*/
  while ( strcmp(*v19, g_INI_Key_PlanningMode) ) /*0x6d006e*/
  {
    ++v19; /*0x6d0070*/
    ++v18; /*0x6d0073*/
    if ( (int)v19 >= (int)g_INI_Key_Beacon ) /*0x6d007a*/
    {
      v20 = dword_8427CC; /*0x6d007c*/
      goto LABEL_35; /*0x6d007c*/
    }
  }
  v20 = v18; /*0x6d00b8*/
LABEL_35:
  dword_B0CC1C = v20; /*0x6d0081*/
  v21 = 0; /*0x6d0086*/
  v22 = (const char **)off_8427D0; /*0x6d0088*/
  while ( strcmp(*v22, g_INI_Key_Stop) ) /*0x6d00c3*/
  {
    ++v22; /*0x6d00c5*/
    ++v21; /*0x6d00c8*/
    if ( (int)v22 >= (int)g_INI_Key_Beacon ) /*0x6d00cf*/
    {
      v23 = dword_8427CC; /*0x6d00d1*/
      goto LABEL_41; /*0x6d00d1*/
    }
  }
  v23 = v21; /*0x6d010d*/
LABEL_41:
  dword_B0CB6C = v23; /*0x6d00d6*/
  v24 = 0; /*0x6d00db*/
  v25 = (const char **)off_8427D0; /*0x6d00dd*/
  while ( strcmp(*v25, aTeam01) ) /*0x6d0118*/
  {
    ++v25; /*0x6d011a*/
    ++v24; /*0x6d011d*/
    if ( (int)v25 >= (int)g_INI_Key_Beacon ) /*0x6d0124*/
    {
      v26 = dword_8427CC; /*0x6d0126*/
      goto LABEL_47; /*0x6d0126*/
    }
  }
  v26 = v24; /*0x6d0162*/
LABEL_47:
  dword_B0CC20 = v26; /*0x6d012b*/
  v27 = 0; /*0x6d0130*/
  v28 = (const char **)off_8427D0; /*0x6d0132*/
  while ( strcmp(*v28, aTeam02) ) /*0x6d016d*/
  {
    ++v28; /*0x6d016f*/
    ++v27; /*0x6d0172*/
    if ( (int)v28 >= (int)g_INI_Key_Beacon ) /*0x6d0179*/
    {
      v29 = dword_8427CC; /*0x6d017b*/
      goto LABEL_53; /*0x6d017b*/
    }
  }
  v29 = v27; /*0x6d01b7*/
LABEL_53:
  dword_B0CC28 = v29; /*0x6d0180*/
  v30 = 0; /*0x6d0185*/
  v31 = (const char **)off_8427D0; /*0x6d0187*/
  while ( strcmp(*v31, aTeam03) ) /*0x6d01c2*/
  {
    ++v31; /*0x6d01c4*/
    ++v30; /*0x6d01c7*/
    if ( (int)v31 >= (int)g_INI_Key_Beacon ) /*0x6d01ce*/
    {
      v32 = dword_8427CC; /*0x6d01d0*/
      goto LABEL_59; /*0x6d01d0*/
    }
  }
  v32 = v30; /*0x6d020c*/
LABEL_59:
  dword_B0CD28 = v32; /*0x6d01d5*/
  v33 = 0; /*0x6d01da*/
  v34 = (const char **)off_8427D0; /*0x6d01dc*/
  while ( strcmp(*v34, g_INI_Key_TypeSelect) ) /*0x6d0217*/
  {
    ++v34; /*0x6d0219*/
    ++v33; /*0x6d021c*/
    if ( (int)v34 >= (int)g_INI_Key_Beacon ) /*0x6d0223*/
    {
      v35 = dword_8427CC; /*0x6d0225*/
      goto LABEL_65; /*0x6d0225*/
    }
  }
  v35 = v33; /*0x6d024e*/
LABEL_65:
  dword_B0CB38 = v35; /*0x6d022a*/
  TabClass::processTabInput(this != 0 ? (TabClass *)((char *)this + 21784) : 0);
  return &this->TabClass_field_0x0; /*0x6d0248*/
}


