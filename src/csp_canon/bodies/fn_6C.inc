// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x006C0025  nullsub_114  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_114(int a1, int a2)
{
  ; /*0x6c0025*/
}

// ==== BACKFILL 0x006C0040  WinMain_Helper_6C0040  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C0040::WinMain_Helper_6C0040() {

  ((unsigned int *)this)[0] = 0; /*0x6c0042*/
  this->vtable1 = &vt_TClassFactory; /*0x6c0049*/
  return this; /*0x6c004f*/

}

// ==== BACKFILL 0x006C0050  COMObject::QueryInterface2  cls=_TClassFactory_VTubeClass  sig=csp  renamed_refs=0  residual=- ====
int COMObject::QueryInterface2(const void * a2, unsigned int * a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0057*/
    return -2147467261; /*0x6c0059*/
  *v4 = 0; /*0x6c0076*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0092*/
    *v4 = a2; /*0x6c0096*/
  if ( !*v4 ) /*0x6c0098*/
    return -2147467262; /*0x6c00a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c00ac*/
  return 0; /*0x6c005e*/

}

// ==== BACKFILL 0x006C01C0  WinMain_Helper_6C01C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C01C0::WinMain_Helper_6C01C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c01c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c01c9*/
  return this; /*0x6c01cf*/

}

// ==== BACKFILL 0x006C01D0  CreateTClassFactory_CampaignClass  cls=_TClassFactory_VCampaignClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C01D0::CreateTClassFactory_CampaignClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c01d7*/
    return -2147467261; /*0x6c01d9*/
  *v4 = 0; /*0x6c01f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0212*/
    *v4 = a2; /*0x6c0216*/
  if ( !*v4 ) /*0x6c0218*/
    return -2147467262; /*0x6c0220*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c022c*/
  return 0; /*0x6c01de*/

}

// ==== BACKFILL 0x006C0290  TClassFactory_CampaignClass::ddtor  cls=_TClassFactory_VCampaignClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_CampaignClass::ddtor(int a2, int a3, unsigned int *a4, int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C0290)
}

// ==== BACKFILL 0x006C0310  TClassFactory_CampaignClass::GetSize  cls=_TClassFactory_VCampaignClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_CampaignClass::GetSize(int a2, int a1, int a3, int a4)
{

  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(unsigned int *)((unsigned int)(a2)+ 4); /*0x6c031a*/
  if ( v5 ) /*0x6c031d*/
    v3 = v2 + 1; /*0x6c031f*/
  else
    v3 = v2 - 1; /*0x6c0328*/
  *(unsigned int *)((unsigned int)(a2)+ 4) = v3; /*0x6c0320*/
  return 0; /*0x6c0325*/

}

// ==== BACKFILL 0x006C0340  WinMain_Helper_6C0340  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C0340::WinMain_Helper_6C0340() {

  ((unsigned int *)this)[0] = 0; /*0x6c0342*/
  this->vtable1 = &vt_TClassFactory; /*0x6c0349*/
  return this; /*0x6c034f*/

}

// ==== BACKFILL 0x006C0350  CreateTClassFactory_BuildingLightClass  cls=_TClassFactory_VBuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C0350::CreateTClassFactory_BuildingLightClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0357*/
    return -2147467261; /*0x6c0359*/
  *v4 = 0; /*0x6c0376*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0392*/
    *v4 = a2; /*0x6c0396*/
  if ( !*v4 ) /*0x6c0398*/
    return -2147467262; /*0x6c03a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c03ac*/
  return 0; /*0x6c035e*/

}

// ==== BACKFILL 0x006C0410  TClassFactory_BuildingLightClass::ddtor  cls=_TClassFactory_VBuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_BuildingLightClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C0410.json)
}

// ==== BACKFILL 0x006C04C0  WinMain_Helper_6C04C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C04C0::WinMain_Helper_6C04C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c04c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c04c9*/
  return this; /*0x6c04cf*/

}

// ==== BACKFILL 0x006C04D0  CreateTClassFactory_WaypointPathClass  cls=_TClassFactory_VWaypointPathClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C04D0::CreateTClassFactory_WaypointPathClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c04d7*/
    return -2147467261; /*0x6c04d9*/
  *v4 = 0; /*0x6c04f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0512*/
    *v4 = a2; /*0x6c0516*/
  if ( !*v4 ) /*0x6c0518*/
    return -2147467262; /*0x6c0520*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c052c*/
  return 0; /*0x6c04de*/

}

// ==== BACKFILL 0x006C0590  TClassFactory_WaypointPathClass::ddtor  cls=_TClassFactory_VWaypointPathClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_WaypointPathClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C0590.json)
}

// ==== BACKFILL 0x006C0640  WinMain_Helper_6C0640  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C0640::WinMain_Helper_6C0640() {

  ((unsigned int *)this)[0] = 0; /*0x6c0642*/
  this->vtable1 = &vt_TClassFactory; /*0x6c0649*/
  return this; /*0x6c064f*/

}

// ==== BACKFILL 0x006C0650  CreateTClassFactory_TemporalClass  cls=_TClassFactory_VTemporalClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C0650::CreateTClassFactory_TemporalClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0657*/
    return -2147467261; /*0x6c0659*/
  *v4 = 0; /*0x6c0676*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0692*/
    *v4 = a2; /*0x6c0696*/
  if ( !*v4 ) /*0x6c0698*/
    return -2147467262; /*0x6c06a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c06ac*/
  return 0; /*0x6c065e*/

}

// ==== BACKFILL 0x006C0710  TClassFactory_TemporalClass::ddtor  cls=_TClassFactory_VTemporalClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_TemporalClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C0710.json)
}

// ==== BACKFILL 0x006C07C0  WinMain_Helper_6C07C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C07C0::WinMain_Helper_6C07C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c07c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c07c9*/
  return this; /*0x6c07cf*/

}

// ==== BACKFILL 0x006C07D0  CreateTClassFactory_AirstrikeClass  cls=_TClassFactory_VAirstrikeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C07D0::CreateTClassFactory_AirstrikeClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c07d7*/
    return -2147467261; /*0x6c07d9*/
  *v4 = 0; /*0x6c07f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0812*/
    *v4 = a2; /*0x6c0816*/
  if ( !*v4 ) /*0x6c0818*/
    return -2147467262; /*0x6c0820*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c082c*/
  return 0; /*0x6c07de*/

}

// ==== BACKFILL 0x006C0890  TClassFactory_AirstrikeClass::ddtor  cls=_TClassFactory_VAirstrikeClass  sig=csp  renamed_refs=0  residual=- ====
void TClassFactory_AirstrikeClass::ddtor()
{
}

// ==== BACKFILL 0x006C0940  WinMain_Helper_6C0940  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C0940::WinMain_Helper_6C0940() {

  ((unsigned int *)this)[0] = 0; /*0x6c0942*/
  this->vtable1 = &vt_TClassFactory; /*0x6c0949*/
  return this; /*0x6c094f*/

}

// ==== BACKFILL 0x006C0950  CreateTClassFactory_SpawnManagerClass  cls=_TClassFactory_VSpawnManagerClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C0950::CreateTClassFactory_SpawnManagerClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0957*/
    return -2147467261; /*0x6c0959*/
  *v4 = 0; /*0x6c0976*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0992*/
    *v4 = a2; /*0x6c0996*/
  if ( !*v4 ) /*0x6c0998*/
    return -2147467262; /*0x6c09a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c09ac*/
  return 0; /*0x6c095e*/

}

// ==== BACKFILL 0x006C0A10  TClassFactory_SpawnManagerClass::ddtor  cls=_TClassFactory_VSpawnManagerClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_SpawnManagerClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C0A10.json)
}

// ==== BACKFILL 0x006C0AD0  CreateTClassFactory_SlaveManagerClass  cls=_TClassFactory_VSlaveManagerClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C0AD0::CreateTClassFactory_SlaveManagerClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0ad7*/
    return -2147467261; /*0x6c0ad9*/
  *v4 = 0; /*0x6c0af6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0b12*/
    *v4 = a2; /*0x6c0b16*/
  if ( !*v4 ) /*0x6c0b18*/
    return -2147467262; /*0x6c0b20*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c0b2c*/
  return 0; /*0x6c0ade*/

}

// ==== BACKFILL 0x006C0B90  TClassFactory_SlaveManagerClass::ddtor  cls=_TClassFactory_VSlaveManagerClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_SlaveManagerClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C0B90.json)
}

// ==== BACKFILL 0x006C0C40  WinMain_Helper_6C0C40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C0C40::WinMain_Helper_6C0C40() {

  ((unsigned int *)this)[0] = 0; /*0x6c0c42*/
  this->vtable1 = &vt_TClassFactory; /*0x6c0c49*/
  return this; /*0x6c0c4f*/

}

// ==== BACKFILL 0x006C0C50  CreateTClassFactory_CaptureManagerClass  cls=_TClassFactory_VCaptureManagerClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C0C50::CreateTClassFactory_CaptureManagerClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0c57*/
    return -2147467261; /*0x6c0c59*/
  *v4 = 0; /*0x6c0c76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0c92*/
    *v4 = a2; /*0x6c0c96*/
  if ( !*v4 ) /*0x6c0c98*/
    return -2147467262; /*0x6c0ca0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c0cac*/
  return 0; /*0x6c0c5e*/

}

// ==== BACKFILL 0x006C0D10  TClassFactory_CaptureManagerClass::ddtor  cls=_TClassFactory_VCaptureManagerClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_CaptureManagerClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C0D10.json)
}

// ==== BACKFILL 0x006C0DC0  WinMain_Helper_6C0DC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C0DC0::WinMain_Helper_6C0DC0() {

  ((unsigned int *)this)[0] = 0; /*0x6c0dc2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c0dc9*/
  return this; /*0x6c0dcf*/

}

// ==== BACKFILL 0x006C0DD0  CreateTClassFactory_DiskLaserClass  cls=_TClassFactory_VDiskLaserClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C0DD0::CreateTClassFactory_DiskLaserClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0dd7*/
    return -2147467261; /*0x6c0dd9*/
  *v4 = 0; /*0x6c0df6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0e12*/
    *v4 = a2; /*0x6c0e16*/
  if ( !*v4 ) /*0x6c0e18*/
    return -2147467262; /*0x6c0e20*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c0e2c*/
  return 0; /*0x6c0dde*/

}

// ==== BACKFILL 0x006C0E90  TClassFactory_DiskLaserClass::ddtor  cls=_TClassFactory_VDiskLaserClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_DiskLaserClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C0E90.json)
}

// ==== BACKFILL 0x006C0F40  WinMain_Helper_6C0F40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C0F40::WinMain_Helper_6C0F40() {

  ((unsigned int *)this)[0] = 0; /*0x6c0f42*/
  this->vtable1 = &vt_TClassFactory; /*0x6c0f49*/
  return this; /*0x6c0f4f*/

}

// ==== BACKFILL 0x006C0F50  CreateTClassFactory_ParasiteClass  cls=_TClassFactory_VParasiteClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C0F50::CreateTClassFactory_ParasiteClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0f57*/
    return -2147467261; /*0x6c0f59*/
  *v4 = 0; /*0x6c0f76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0f92*/
    *v4 = a2; /*0x6c0f96*/
  if ( !*v4 ) /*0x6c0f98*/
    return -2147467262; /*0x6c0fa0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c0fac*/
  return 0; /*0x6c0f5e*/

}

// ==== BACKFILL 0x006C1010  TClassFactory_ParasiteClass::ddtor  cls=_TClassFactory_VParasiteClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_ParasiteClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C1010.json)
}

// ==== BACKFILL 0x006C10C0  WinMain_Helper_6C10C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C10C0::WinMain_Helper_6C10C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c10c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c10c9*/
  return this; /*0x6c10cf*/

}

// ==== BACKFILL 0x006C10D0  CreateTClassFactory_BombClass  cls=_TClassFactory_VBombClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C10D0::CreateTClassFactory_BombClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c10d7*/
    return -2147467261; /*0x6c10d9*/
  *v4 = 0; /*0x6c10f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1112*/
    *v4 = a2; /*0x6c1116*/
  if ( !*v4 ) /*0x6c1118*/
    return -2147467262; /*0x6c1120*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c112c*/
  return 0; /*0x6c10de*/

}

// ==== BACKFILL 0x006C1190  TClassFactory_BombClass::ddtor  cls=_TClassFactory_VBombClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_BombClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C1190.json)
}

// ==== BACKFILL 0x006C1240  WinMain_Helper_6C1240  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C1240::WinMain_Helper_6C1240() {

  ((unsigned int *)this)[0] = 0; /*0x6c1242*/
  this->vtable1 = &vt_TClassFactory; /*0x6c1249*/
  return this; /*0x6c124f*/

}

// ==== BACKFILL 0x006C1250  CreateTClassFactory_RadSiteClass  cls=_TClassFactory_VRadSiteClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C1250::CreateTClassFactory_RadSiteClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1257*/
    return -2147467261; /*0x6c1259*/
  *v4 = 0; /*0x6c1276*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1292*/
    *v4 = a2; /*0x6c1296*/
  if ( !*v4 ) /*0x6c1298*/
    return -2147467262; /*0x6c12a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c12ac*/
  return 0; /*0x6c125e*/

}

// ==== BACKFILL 0x006C1310  TClassFactory_RadSiteClass::ddtor  cls=_TClassFactory_VRadSiteClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_RadSiteClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C1310.json)
}

// ==== BACKFILL 0x006C13C0  WinMain_Helper_6C13C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C13C0::WinMain_Helper_6C13C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c13c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c13c9*/
  return this; /*0x6c13cf*/

}

// ==== BACKFILL 0x006C13D0  CreateTClassFactory_TEventClass  cls=_TClassFactory_VTEventClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C13D0::CreateTClassFactory_TEventClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c13d7*/
    return -2147467261; /*0x6c13d9*/
  *v4 = 0; /*0x6c13f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1412*/
    *v4 = a2; /*0x6c1416*/
  if ( !*v4 ) /*0x6c1418*/
    return -2147467262; /*0x6c1420*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c142c*/
  return 0; /*0x6c13de*/

}

// ==== BACKFILL 0x006C1490  TClassFactory_TEventClass::ddtor  cls=_TClassFactory_VTEventClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_TEventClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C1490.json)
}

// ==== BACKFILL 0x006C1540  WinMain_Helper_6C1540  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C1540::WinMain_Helper_6C1540() {

  ((unsigned int *)this)[0] = 0; /*0x6c1542*/
  this->vtable1 = &vt_TClassFactory; /*0x6c1549*/
  return this; /*0x6c154f*/

}

// ==== BACKFILL 0x006C1550  CreateTClassFactory_VoxelAnimTypeClass  cls=_TClassFactory_VVoxelAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C1550::CreateTClassFactory_VoxelAnimTypeClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1557*/
    return -2147467261; /*0x6c1559*/
  *v4 = 0; /*0x6c1576*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1592*/
    *v4 = a2; /*0x6c1596*/
  if ( !*v4 ) /*0x6c1598*/
    return -2147467262; /*0x6c15a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c15ac*/
  return 0; /*0x6c155e*/

}

// ==== BACKFILL 0x006C16C0  WinMain_Helper_6C16C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C16C0::WinMain_Helper_6C16C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c16c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c16c9*/
  return this; /*0x6c16cf*/

}

// ==== BACKFILL 0x006C16D0  CreateTClassFactory_VoxelAnimClass  cls=_TClassFactory_VVoxelAnimClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C16D0::CreateTClassFactory_VoxelAnimClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c16d7*/
    return -2147467261; /*0x6c16d9*/
  *v4 = 0; /*0x6c16f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1712*/
    *v4 = a2; /*0x6c1716*/
  if ( !*v4 ) /*0x6c1718*/
    return -2147467262; /*0x6c1720*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c172c*/
  return 0; /*0x6c16de*/

}

// ==== BACKFILL 0x006C1790  TClassFactory_VoxelAnimClass::ddtor  cls=_TClassFactory_VVoxelAnimClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_VoxelAnimClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C1790.json)
}

// ==== BACKFILL 0x006C1840  WinMain_Helper_6C1840  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C1840::WinMain_Helper_6C1840() {

  ((unsigned int *)this)[0] = 0; /*0x6c1842*/
  this->vtable1 = &vt_TClassFactory; /*0x6c1849*/
  return this; /*0x6c184f*/

}

// ==== BACKFILL 0x006C1850  CreateTClassFactory_TActionClass  cls=_TClassFactory_VTActionClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C1850::CreateTClassFactory_TActionClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1857*/
    return -2147467261; /*0x6c1859*/
  *v4 = 0; /*0x6c1876*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1892*/
    *v4 = a2; /*0x6c1896*/
  if ( !*v4 ) /*0x6c1898*/
    return -2147467262; /*0x6c18a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c18ac*/
  return 0; /*0x6c185e*/

}

// ==== BACKFILL 0x006C1910  TClassFactory_TActionClass::ddtor  cls=_TClassFactory_VTActionClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_TActionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C1910.json)
}

// ==== BACKFILL 0x006C19C0  WinMain_Helper_6C19C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C19C0::WinMain_Helper_6C19C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c19c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c19c9*/
  return this; /*0x6c19cf*/

}

// ==== BACKFILL 0x006C19D0  CreateTClassFactory_TriggerClass  cls=_TClassFactory_VTriggerClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C19D0::CreateTClassFactory_TriggerClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c19d7*/
    return -2147467261; /*0x6c19d9*/
  *v4 = 0; /*0x6c19f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1a12*/
    *v4 = a2; /*0x6c1a16*/
  if ( !*v4 ) /*0x6c1a18*/
    return -2147467262; /*0x6c1a20*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c1a2c*/
  return 0; /*0x6c19de*/

}

// ==== BACKFILL 0x006C1A90  TClassFactory_TriggerClass::ddtor  cls=_TClassFactory_VTriggerClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_TriggerClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C1A90.json)
}

// ==== BACKFILL 0x006C1B40  WinMain_Helper_6C1B40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C1B40::WinMain_Helper_6C1B40() {

  ((unsigned int *)this)[0] = 0; /*0x6c1b42*/
  this->vtable1 = &vt_TClassFactory; /*0x6c1b49*/
  return this; /*0x6c1b4f*/

}

// ==== BACKFILL 0x006C1B50  CreateTClassFactory_TriggerTypeClass  cls=_TClassFactory_VTriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C1B50::CreateTClassFactory_TriggerTypeClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1b57*/
    return -2147467261; /*0x6c1b59*/
  *v4 = 0; /*0x6c1b76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1b92*/
    *v4 = a2; /*0x6c1b96*/
  if ( !*v4 ) /*0x6c1b98*/
    return -2147467262; /*0x6c1ba0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c1bac*/
  return 0; /*0x6c1b5e*/

}

// ==== BACKFILL 0x006C1CC0  WinMain_Helper_6C1CC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C1CC0::WinMain_Helper_6C1CC0() {

  ((unsigned int *)this)[0] = 0; /*0x6c1cc2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c1cc9*/
  return this; /*0x6c1ccf*/

}

// ==== BACKFILL 0x006C1CD0  CreateTClassFactory_ScriptClass  cls=_TClassFactory_VScriptClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C1CD0::CreateTClassFactory_ScriptClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1cd7*/
    return -2147467261; /*0x6c1cd9*/
  *v4 = 0; /*0x6c1cf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1d12*/
    *v4 = a2; /*0x6c1d16*/
  if ( !*v4 ) /*0x6c1d18*/
    return -2147467262; /*0x6c1d20*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c1d2c*/
  return 0; /*0x6c1cde*/

}

// ==== BACKFILL 0x006C1D90  TClassFactory_ScriptClass::ddtor  cls=_TClassFactory_VScriptClass  sig=csp  renamed_refs=0  residual=- ====
void TClassFactory_ScriptClass::ddtor()
{
}

// ==== BACKFILL 0x006C1E40  WinMain_Helper_6C1E40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C1E40::WinMain_Helper_6C1E40() {

  ((unsigned int *)this)[0] = 0; /*0x6c1e42*/
  this->vtable1 = &vt_TClassFactory; /*0x6c1e49*/
  return this; /*0x6c1e4f*/

}

// ==== BACKFILL 0x006C1E50  CreateTClassFactory_ScriptTypeClass  cls=_TClassFactory_VScriptTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C1E50::CreateTClassFactory_ScriptTypeClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1e57*/
    return -2147467261; /*0x6c1e59*/
  *v4 = 0; /*0x6c1e76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1e92*/
    *v4 = a2; /*0x6c1e96*/
  if ( !*v4 ) /*0x6c1e98*/
    return -2147467262; /*0x6c1ea0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c1eac*/
  return 0; /*0x6c1e5e*/

}

// ==== BACKFILL 0x006C1FC0  WinMain_Helper_6C1FC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C1FC0::WinMain_Helper_6C1FC0() {

  ((unsigned int *)this)[0] = 0; /*0x6c1fc2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c1fc9*/
  return this; /*0x6c1fcf*/

}

// ==== BACKFILL 0x006C1FD0  CreateTClassFactory_TagClass  cls=_TClassFactory_VTagClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C1FD0::CreateTClassFactory_TagClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1fd7*/
    return -2147467261; /*0x6c1fd9*/
  *v4 = 0; /*0x6c1ff6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2012*/
    *v4 = a2; /*0x6c2016*/
  if ( !*v4 ) /*0x6c2018*/
    return -2147467262; /*0x6c2020*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c202c*/
  return 0; /*0x6c1fde*/

}

// ==== BACKFILL 0x006C2090  TClassFactory_TagClass::ddtor  cls=_TClassFactory_VTagClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_TagClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C2090.json)
}

// ==== BACKFILL 0x006C2140  WinMain_Helper_6C2140  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C2140::WinMain_Helper_6C2140() {

  ((unsigned int *)this)[0] = 0; /*0x6c2142*/
  this->vtable1 = &vt_TClassFactory; /*0x6c2149*/
  return this; /*0x6c214f*/

}

// ==== BACKFILL 0x006C2150  CreateTClassFactory_TagTypeClass  cls=_TClassFactory_VTagTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C2150::CreateTClassFactory_TagTypeClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2157*/
    return -2147467261; /*0x6c2159*/
  *v4 = 0; /*0x6c2176*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2192*/
    *v4 = a2; /*0x6c2196*/
  if ( !*v4 ) /*0x6c2198*/
    return -2147467262; /*0x6c21a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c21ac*/
  return 0; /*0x6c215e*/

}

// ==== BACKFILL 0x006C22C0  WinMain_Helper_6C22C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C22C0::WinMain_Helper_6C22C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c22c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c22c9*/
  return this; /*0x6c22cf*/

}

// ==== BACKFILL 0x006C22D0  CreateTClassFactory_TeamClass  cls=_TClassFactory_VTeamClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C22D0::CreateTClassFactory_TeamClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c22d7*/
    return -2147467261; /*0x6c22d9*/
  *v4 = 0; /*0x6c22f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2312*/
    *v4 = a2; /*0x6c2316*/
  if ( !*v4 ) /*0x6c2318*/
    return -2147467262; /*0x6c2320*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c232c*/
  return 0; /*0x6c22de*/

}

// ==== BACKFILL 0x006C2390  TClassFactory_TeamClass::ddtor  cls=_TClassFactory_VTeamClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_TeamClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C2390.json)
}

// ==== BACKFILL 0x006C2440  WinMain_Helper_6C2440  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C2440::WinMain_Helper_6C2440() {

  ((unsigned int *)this)[0] = 0; /*0x6c2442*/
  this->vtable1 = &vt_TClassFactory; /*0x6c2449*/
  return this; /*0x6c244f*/

}

// ==== BACKFILL 0x006C2450  CreateTClassFactory_TeamTypeClass  cls=_TClassFactory_VTeamTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C2450::CreateTClassFactory_TeamTypeClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2457*/
    return -2147467261; /*0x6c2459*/
  *v4 = 0; /*0x6c2476*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2492*/
    *v4 = a2; /*0x6c2496*/
  if ( !*v4 ) /*0x6c2498*/
    return -2147467262; /*0x6c24a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c24ac*/
  return 0; /*0x6c245e*/

}

// ==== BACKFILL 0x006C25C0  WinMain_Helper_6C25C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C25C0::WinMain_Helper_6C25C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c25c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c25c9*/
  return this; /*0x6c25cf*/

}

// ==== BACKFILL 0x006C25D0  CreateTClassFactory_TaskForceClass  cls=_TClassFactory_VTaskForceClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C25D0::CreateTClassFactory_TaskForceClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c25d7*/
    return -2147467261; /*0x6c25d9*/
  *v4 = 0; /*0x6c25f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2612*/
    *v4 = a2; /*0x6c2616*/
  if ( !*v4 ) /*0x6c2618*/
    return -2147467262; /*0x6c2620*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c262c*/
  return 0; /*0x6c25de*/

}

// ==== BACKFILL 0x006C2690  TClassFactory_TaskForceClass::ddtor  cls=_TClassFactory_VTaskForceClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_TaskForceClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C2690.json)
}

// ==== BACKFILL 0x006C2740  WinMain_Helper_6C2740  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C2740::WinMain_Helper_6C2740() {

  ((unsigned int *)this)[0] = 0; /*0x6c2742*/
  this->vtable1 = &vt_TClassFactory; /*0x6c2749*/
  return this; /*0x6c274f*/

}

// ==== BACKFILL 0x006C2750  CreateTClassFactory_UnitTypeClass  cls=_TClassFactory_VUnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C2750::CreateTClassFactory_UnitTypeClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2757*/
    return -2147467261; /*0x6c2759*/
  *v4 = 0; /*0x6c2776*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2792*/
    *v4 = a2; /*0x6c2796*/
  if ( !*v4 ) /*0x6c2798*/
    return -2147467262; /*0x6c27a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c27ac*/
  return 0; /*0x6c275e*/

}

// ==== BACKFILL 0x006C28C0  WinMain_Helper_6C28C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C28C0::WinMain_Helper_6C28C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c28c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c28c9*/
  return this; /*0x6c28cf*/

}

// ==== BACKFILL 0x006C28D0  CreateTClassFactory_BuildingTypeClass  cls=_TClassFactory_VBuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C28D0::CreateTClassFactory_BuildingTypeClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c28d7*/
    return -2147467261; /*0x6c28d9*/
  *v4 = 0; /*0x6c28f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2912*/
    *v4 = a2; /*0x6c2916*/
  if ( !*v4 ) /*0x6c2918*/
    return -2147467262; /*0x6c2920*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c292c*/
  return 0; /*0x6c28de*/

}

// ==== BACKFILL 0x006C2A40  WinMain_Helper_6C2A40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C2A40::WinMain_Helper_6C2A40() {

  ((unsigned int *)this)[0] = 0; /*0x6c2a42*/
  this->vtable1 = &vt_TClassFactory; /*0x6c2a49*/
  return this; /*0x6c2a4f*/

}

// ==== BACKFILL 0x006C2A50  CreateTClassFactory_AircraftTypeClass  cls=_TClassFactory_VAircraftTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C2A50::CreateTClassFactory_AircraftTypeClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2a57*/
    return -2147467261; /*0x6c2a59*/
  *v4 = 0; /*0x6c2a76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2a92*/
    *v4 = a2; /*0x6c2a96*/
  if ( !*v4 ) /*0x6c2a98*/
    return -2147467262; /*0x6c2aa0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c2aac*/
  return 0; /*0x6c2a5e*/

}

// ==== BACKFILL 0x006C2BC0  WinMain_Helper_6C2BC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C2BC0::WinMain_Helper_6C2BC0() {

  ((unsigned int *)this)[0] = 0; /*0x6c2bc2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c2bc9*/
  return this; /*0x6c2bcf*/

}

// ==== BACKFILL 0x006C2BD0  CreateTClassFactory_InfantryTypeClass  cls=_TClassFactory_VInfantryTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C2BD0::CreateTClassFactory_InfantryTypeClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2bd7*/
    return -2147467261; /*0x6c2bd9*/
  *v4 = 0; /*0x6c2bf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2c12*/
    *v4 = a2; /*0x6c2c16*/
  if ( !*v4 ) /*0x6c2c18*/
    return -2147467262; /*0x6c2c20*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c2c2c*/
  return 0; /*0x6c2bde*/

}

// ==== BACKFILL 0x006C2D40  WinMain_Helper_6C2D40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C2D40::WinMain_Helper_6C2D40() {

  ((unsigned int *)this)[0] = 0; /*0x6c2d42*/
  this->vtable1 = &vt_TClassFactory; /*0x6c2d49*/
  return this; /*0x6c2d4f*/

}

// ==== BACKFILL 0x006C2D50  CreateTClassFactory_BulletTypeClass  cls=_TClassFactory_VBulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C2D50::CreateTClassFactory_BulletTypeClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2d57*/
    return -2147467261; /*0x6c2d59*/
  *v4 = 0; /*0x6c2d76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2d92*/
    *v4 = a2; /*0x6c2d96*/
  if ( !*v4 ) /*0x6c2d98*/
    return -2147467262; /*0x6c2da0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c2dac*/
  return 0; /*0x6c2d5e*/

}

// ==== BACKFILL 0x006C2EC0  WinMain_Helper_6C2EC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C2EC0::WinMain_Helper_6C2EC0() {

  ((unsigned int *)this)[0] = 0; /*0x6c2ec2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c2ec9*/
  return this; /*0x6c2ecf*/

}

// ==== BACKFILL 0x006C2ED0  CreateTClassFactory_IsometricTileTypeClass  cls=_TClassFactory_VIsometricTileTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C2ED0::CreateTClassFactory_IsometricTileTypeClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2ed7*/
    return -2147467261; /*0x6c2ed9*/
  *v4 = 0; /*0x6c2ef6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2f12*/
    *v4 = a2; /*0x6c2f16*/
  if ( !*v4 ) /*0x6c2f18*/
    return -2147467262; /*0x6c2f20*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c2f2c*/
  return 0; /*0x6c2ede*/

}

// ==== BACKFILL 0x006C3040  WinMain_Helper_6C3040  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C3040::WinMain_Helper_6C3040() {

  ((unsigned int *)this)[0] = 0; /*0x6c3042*/
  this->vtable1 = &vt_TClassFactory; /*0x6c3049*/
  return this; /*0x6c304f*/

}

// ==== BACKFILL 0x006C3050  CreateTClassFactory_OverlayTypeClass  cls=_TClassFactory_VOverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C3050::CreateTClassFactory_OverlayTypeClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3057*/
    return -2147467261; /*0x6c3059*/
  *v4 = 0; /*0x6c3076*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3092*/
    *v4 = a2; /*0x6c3096*/
  if ( !*v4 ) /*0x6c3098*/
    return -2147467262; /*0x6c30a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c30ac*/
  return 0; /*0x6c305e*/

}

// ==== BACKFILL 0x006C31C0  WinMain_Helper_6C31C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C31C0::WinMain_Helper_6C31C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c31c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c31c9*/
  return this; /*0x6c31cf*/

}

// ==== BACKFILL 0x006C31D0  CreateTClassFactory_SmudgeTypeClass  cls=_TClassFactory_VSmudgeTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C31D0::CreateTClassFactory_SmudgeTypeClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c31d7*/
    return -2147467261; /*0x6c31d9*/
  *v4 = 0; /*0x6c31f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3212*/
    *v4 = a2; /*0x6c3216*/
  if ( !*v4 ) /*0x6c3218*/
    return -2147467262; /*0x6c3220*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c322c*/
  return 0; /*0x6c31de*/

}

// ==== BACKFILL 0x006C3340  WinMain_Helper_6C3340  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C3340::WinMain_Helper_6C3340() {

  ((unsigned int *)this)[0] = 0; /*0x6c3342*/
  this->vtable1 = &vt_TClassFactory; /*0x6c3349*/
  return this; /*0x6c334f*/

}

// ==== BACKFILL 0x006C3350  CreateTClassFactory_UnitClass  cls=_TClassFactory_VUnitClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C3350::CreateTClassFactory_UnitClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3357*/
    return -2147467261; /*0x6c3359*/
  *v4 = 0; /*0x6c3376*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3392*/
    *v4 = a2; /*0x6c3396*/
  if ( !*v4 ) /*0x6c3398*/
    return -2147467262; /*0x6c33a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c33ac*/
  return 0; /*0x6c335e*/

}

// ==== BACKFILL 0x006C3410  TClassFactory_UnitClass::ddtor  cls=_TClassFactory_VUnitClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_UnitClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C3410.json)
}

// ==== BACKFILL 0x006C34C0  WinMain_Helper_6C34C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C34C0::WinMain_Helper_6C34C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c34c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c34c9*/
  return this; /*0x6c34cf*/

}

// ==== BACKFILL 0x006C34D0  CreateTClassFactory_BuildingClass  cls=_TClassFactory_VBuildingClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C34D0::CreateTClassFactory_BuildingClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c34d7*/
    return -2147467261; /*0x6c34d9*/
  *v4 = 0; /*0x6c34f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3512*/
    *v4 = a2; /*0x6c3516*/
  if ( !*v4 ) /*0x6c3518*/
    return -2147467262; /*0x6c3520*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c352c*/
  return 0; /*0x6c34de*/

}

// ==== BACKFILL 0x006C3590  TClassFactory_BuildingClass::ddtor  cls=_TClassFactory_VBuildingClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_BuildingClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C3590.json)
}

// ==== BACKFILL 0x006C3640  WinMain_Helper_6C3640  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C3640::WinMain_Helper_6C3640() {

  ((unsigned int *)this)[0] = 0; /*0x6c3642*/
  this->vtable1 = &vt_TClassFactory; /*0x6c3649*/
  return this; /*0x6c364f*/

}

// ==== BACKFILL 0x006C3650  CreateTClassFactory_AircraftClass  cls=_TClassFactory_VAircraftClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C3650::CreateTClassFactory_AircraftClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3657*/
    return -2147467261; /*0x6c3659*/
  *v4 = 0; /*0x6c3676*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3692*/
    *v4 = a2; /*0x6c3696*/
  if ( !*v4 ) /*0x6c3698*/
    return -2147467262; /*0x6c36a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c36ac*/
  return 0; /*0x6c365e*/

}

// ==== BACKFILL 0x006C3710  TClassFactory_AircraftClass::ddtor  cls=_TClassFactory_VAircraftClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_AircraftClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C3710.json)
}

// ==== BACKFILL 0x006C37C0  WinMain_Helper_6C37C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C37C0::WinMain_Helper_6C37C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c37c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c37c9*/
  return this; /*0x6c37cf*/

}

// ==== BACKFILL 0x006C37D0  CreateTClassFactory_InfantryClass  cls=_TClassFactory_VInfantryClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C37D0::CreateTClassFactory_InfantryClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c37d7*/
    return -2147467261; /*0x6c37d9*/
  *v4 = 0; /*0x6c37f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3812*/
    *v4 = a2; /*0x6c3816*/
  if ( !*v4 ) /*0x6c3818*/
    return -2147467262; /*0x6c3820*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c382c*/
  return 0; /*0x6c37de*/

}

// ==== BACKFILL 0x006C3890  TClassFactory_InfantryClass::ddtor  cls=_TClassFactory_VInfantryClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_InfantryClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C3890.json)
}

// ==== BACKFILL 0x006C3940  WinMain_Helper_6C3940  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C3940::WinMain_Helper_6C3940() {

  ((unsigned int *)this)[0] = 0; /*0x6c3942*/
  this->vtable1 = &vt_TClassFactory; /*0x6c3949*/
  return this; /*0x6c394f*/

}

// ==== BACKFILL 0x006C3950  CreateTClassFactory_AnimClass  cls=_TClassFactory_VAnimClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C3950::CreateTClassFactory_AnimClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3957*/
    return -2147467261; /*0x6c3959*/
  *v4 = 0; /*0x6c3976*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3992*/
    *v4 = a2; /*0x6c3996*/
  if ( !*v4 ) /*0x6c3998*/
    return -2147467262; /*0x6c39a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c39ac*/
  return 0; /*0x6c395e*/

}

// ==== BACKFILL 0x006C3A10  TClassFactory_AnimClass::ddtor  cls=_TClassFactory_VAnimClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_AnimClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (COM-thunk raw dump: phantom a3/a4 params,
    // uninit v9 out-param, __stdcall/__cdecl vtable cast clash; truth = ida_cache marker above)
}

// ==== BACKFILL 0x006C3AC0  WinMain_Helper_6C3AC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C3AC0::WinMain_Helper_6C3AC0() {

  ((unsigned int *)this)[0] = 0; /*0x6c3ac2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c3ac9*/
  return this; /*0x6c3acf*/

}

// ==== BACKFILL 0x006C3AD0  CreateTClassFactory_AnimTypeClass  cls=_TClassFactory_VAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C3AD0::CreateTClassFactory_AnimTypeClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3ad7*/
    return -2147467261; /*0x6c3ad9*/
  *v4 = 0; /*0x6c3af6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3b12*/
    *v4 = a2; /*0x6c3b16*/
  if ( !*v4 ) /*0x6c3b18*/
    return -2147467262; /*0x6c3b20*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c3b2c*/
  return 0; /*0x6c3ade*/

}

// ==== BACKFILL 0x006C3C40  WinMain_Helper_6C3C40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C3C40::WinMain_Helper_6C3C40() {

  ((unsigned int *)this)[0] = 0; /*0x6c3c42*/
  this->vtable1 = &vt_TClassFactory; /*0x6c3c49*/
  return this; /*0x6c3c4f*/

}

// ==== BACKFILL 0x006C3C50  CreateTClassFactory_HouseTypeClass  cls=_TClassFactory_VHouseTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C3C50::CreateTClassFactory_HouseTypeClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3c57*/
    return -2147467261; /*0x6c3c59*/
  *v4 = 0; /*0x6c3c76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3c92*/
    *v4 = a2; /*0x6c3c96*/
  if ( !*v4 ) /*0x6c3c98*/
    return -2147467262; /*0x6c3ca0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c3cac*/
  return 0; /*0x6c3c5e*/

}

// ==== BACKFILL 0x006C3DC0  WinMain_Helper_6C3DC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C3DC0::WinMain_Helper_6C3DC0() {

  ((unsigned int *)this)[0] = 0; /*0x6c3dc2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c3dc9*/
  return this; /*0x6c3dcf*/

}

// ==== BACKFILL 0x006C3DD0  CreateTClassFactory_HouseClass  cls=_TClassFactory_VHouseClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C3DD0::CreateTClassFactory_HouseClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3dd7*/
    return -2147467261; /*0x6c3dd9*/
  *v4 = 0; /*0x6c3df6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3e12*/
    *v4 = a2; /*0x6c3e16*/
  if ( !*v4 ) /*0x6c3e18*/
    return -2147467262; /*0x6c3e20*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c3e2c*/
  return 0; /*0x6c3dde*/

}

// ==== BACKFILL 0x006C3E90  TClassFactory_HouseClass::ddtor  cls=_TClassFactory_VHouseClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_HouseClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (helper; truth = .omo/ida_cache/func_0x006C3E90.json)
}

// ==== BACKFILL 0x006C3F40  WinMain_Helper_6C3F40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C3F40::WinMain_Helper_6C3F40() {

  ((unsigned int *)this)[0] = 0; /*0x6c3f42*/
  this->vtable1 = &vt_TClassFactory; /*0x6c3f49*/
  return this; /*0x6c3f4f*/

}

// ==== BACKFILL 0x006C3F50  CreateTClassFactory_DriveLocomotionClass  cls=_TClassFactory_VDriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C3F50::CreateTClassFactory_DriveLocomotionClass(const void *a3, unsigned int *a2)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3f57*/
    return -2147467261; /*0x6c3f59*/
  *v4 = 0; /*0x6c3f76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3f92*/
    *v4 = a2; /*0x6c3f96*/
  if ( !*v4 ) /*0x6c3f98*/
    return -2147467262; /*0x6c3fa0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c3fac*/
  return 0; /*0x6c3f5e*/

}

// ==== BACKFILL 0x006C4010  TClassFactory_DriveLocomotionClass::ddtor  cls=_TClassFactory_VDriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_DriveLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C4010.json)
}

// ==== BACKFILL 0x006C40C0  WinMain_Helper_6C40C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C40C0::WinMain_Helper_6C40C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c40c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c40c9*/
  return this; /*0x6c40cf*/

}

// ==== BACKFILL 0x006C40D0  CreateTClassFactory_JumpjetLocomotionClass  cls=_TClassFactory_VJumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C40D0::CreateTClassFactory_JumpjetLocomotionClass(const void *a3, unsigned int *a2)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c40d7*/
    return -2147467261; /*0x6c40d9*/
  *v4 = 0; /*0x6c40f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4112*/
    *v4 = a2; /*0x6c4116*/
  if ( !*v4 ) /*0x6c4118*/
    return -2147467262; /*0x6c4120*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c412c*/
  return 0; /*0x6c40de*/

}

// ==== BACKFILL 0x006C4190  TClassFactory_JumpjetLocomotionClass::ddtor  cls=_TClassFactory_VJumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_JumpjetLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C4190.json)
}

// ==== BACKFILL 0x006C4240  WinMain_Helper_6C4240  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C4240::WinMain_Helper_6C4240() {

  ((unsigned int *)this)[0] = 0; /*0x6c4242*/
  this->vtable1 = &vt_TClassFactory; /*0x6c4249*/
  return this; /*0x6c424f*/

}

// ==== BACKFILL 0x006C4250  CreateTClassFactory_HoverLocomotionClass  cls=_TClassFactory_VHoverLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C4250::CreateTClassFactory_HoverLocomotionClass(const void *a3, unsigned int *a2)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4257*/
    return -2147467261; /*0x6c4259*/
  *v4 = 0; /*0x6c4276*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4292*/
    *v4 = a2; /*0x6c4296*/
  if ( !*v4 ) /*0x6c4298*/
    return -2147467262; /*0x6c42a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c42ac*/
  return 0; /*0x6c425e*/

}

// ==== BACKFILL 0x006C4310  TClassFactory_HoverLocomotionClass::ddtor  cls=_TClassFactory_VHoverLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_HoverLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C4310.json)
}

// ==== BACKFILL 0x006C43C0  WinMain_Helper_6C43C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C43C0::WinMain_Helper_6C43C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c43c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c43c9*/
  return this; /*0x6c43cf*/

}

// ==== BACKFILL 0x006C43D0  CreateTClassFactory_RocketLocomotionClass  cls=_TClassFactory_VRocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C43D0::CreateTClassFactory_RocketLocomotionClass(const void *a3, unsigned int *a2)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c43d7*/
    return -2147467261; /*0x6c43d9*/
  *v4 = 0; /*0x6c43f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4412*/
    *v4 = a2; /*0x6c4416*/
  if ( !*v4 ) /*0x6c4418*/
    return -2147467262; /*0x6c4420*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c442c*/
  return 0; /*0x6c43de*/

}

// ==== BACKFILL 0x006C4490  TClassFactory_RocketLocomotionClass::ddtor  cls=_TClassFactory_VRocketLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_RocketLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C4490.json)
}

// ==== BACKFILL 0x006C4540  WinMain_Helper_6C4540  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C4540::WinMain_Helper_6C4540() {

  ((unsigned int *)this)[0] = 0; /*0x6c4542*/
  this->vtable1 = &vt_TClassFactory; /*0x6c4549*/
  return this; /*0x6c454f*/

}

// ==== BACKFILL 0x006C4550  CreateTClassFactory_TunnelLocomotionClass  cls=_TClassFactory_VTunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C4550::CreateTClassFactory_TunnelLocomotionClass(const void *a3, unsigned int *a2)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4557*/
    return -2147467261; /*0x6c4559*/
  *v4 = 0; /*0x6c4576*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4592*/
    *v4 = a2; /*0x6c4596*/
  if ( !*v4 ) /*0x6c4598*/
    return -2147467262; /*0x6c45a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c45ac*/
  return 0; /*0x6c455e*/

}

// ==== BACKFILL 0x006C4610  TClassFactory_TunnelLocomotionClass::ddtor  cls=_TClassFactory_VTunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_TunnelLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C4610.json)
}

// ==== BACKFILL 0x006C46C0  WinMain_Helper_6C46C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C46C0::WinMain_Helper_6C46C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c46c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c46c9*/
  return this; /*0x6c46cf*/

}

// ==== BACKFILL 0x006C46D0  CreateTClassFactory_WalkLocomotionClass  cls=_TClassFactory_VWalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C46D0::CreateTClassFactory_WalkLocomotionClass(const void *a3, unsigned int *a2)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c46d7*/
    return -2147467261; /*0x6c46d9*/
  *v4 = 0; /*0x6c46f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4712*/
    *v4 = a2; /*0x6c4716*/
  if ( !*v4 ) /*0x6c4718*/
    return -2147467262; /*0x6c4720*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c472c*/
  return 0; /*0x6c46de*/

}

// ==== BACKFILL 0x006C4790  TClassFactory_WalkLocomotionClass::ddtor  cls=_TClassFactory_VWalkLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_WalkLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C4790.json)
}

// ==== BACKFILL 0x006C4840  WinMain_Helper_6C4840  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C4840::WinMain_Helper_6C4840() {

  ((unsigned int *)this)[0] = 0; /*0x6c4842*/
  this->vtable1 = &vt_TClassFactory; /*0x6c4849*/
  return this; /*0x6c484f*/

}

// ==== BACKFILL 0x006C4850  CreateTClassFactory_DropPodLocomotionClass  cls=_TClassFactory_VDropPodLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C4850::CreateTClassFactory_DropPodLocomotionClass(const void *a3, unsigned int *a2)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4857*/
    return -2147467261; /*0x6c4859*/
  *v4 = 0; /*0x6c4876*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4892*/
    *v4 = a2; /*0x6c4896*/
  if ( !*v4 ) /*0x6c4898*/
    return -2147467262; /*0x6c48a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c48ac*/
  return 0; /*0x6c485e*/

}

// ==== BACKFILL 0x006C4910  TClassFactory_DropPodLocomotionClass::ddtor  cls=_TClassFactory_VDropPodLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_DropPodLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C4910.json)
}

// ==== BACKFILL 0x006C49C0  WinMain_Helper_6C49C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C49C0::WinMain_Helper_6C49C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c49c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c49c9*/
  return this; /*0x6c49cf*/

}

// ==== BACKFILL 0x006C49D0  CreateTClassFactory_FlyLocomotionClass  cls=_TClassFactory_VFlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C49D0::CreateTClassFactory_FlyLocomotionClass(const void *a3, unsigned int *a2)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c49d7*/
    return -2147467261; /*0x6c49d9*/
  *v4 = 0; /*0x6c49f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4a12*/
    *v4 = a2; /*0x6c4a16*/
  if ( !*v4 ) /*0x6c4a18*/
    return -2147467262; /*0x6c4a20*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c4a2c*/
  return 0; /*0x6c49de*/

}

// ==== BACKFILL 0x006C4A90  TClassFactory_FlyLocomotionClass::ddtor  cls=_TClassFactory_VFlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_FlyLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C4A90.json)
}

// ==== BACKFILL 0x006C4B40  WinMain_Helper_6C4B40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C4B40::WinMain_Helper_6C4B40() {

  ((unsigned int *)this)[0] = 0; /*0x6c4b42*/
  this->vtable1 = &vt_TClassFactory; /*0x6c4b49*/
  return this; /*0x6c4b4f*/

}

// ==== BACKFILL 0x006C4B50  CreateTClassFactory_TeleportLocomotionClass  cls=_TClassFactory_VTeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C4B50::CreateTClassFactory_TeleportLocomotionClass(const void *a3, unsigned int *a2)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4b57*/
    return -2147467261; /*0x6c4b59*/
  *v4 = 0; /*0x6c4b76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4b92*/
    *v4 = a2; /*0x6c4b96*/
  if ( !*v4 ) /*0x6c4b98*/
    return -2147467262; /*0x6c4ba0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c4bac*/
  return 0; /*0x6c4b5e*/

}

// ==== BACKFILL 0x006C4C10  TClassFactory_TeleportLocomotionClass::ddtor  cls=_TClassFactory_VTeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_TeleportLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C4C10.json)
}

// ==== BACKFILL 0x006C4CC0  WinMain_Helper_6C4CC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C4CC0::WinMain_Helper_6C4CC0() {

  ((unsigned int *)this)[0] = 0; /*0x6c4cc2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c4cc9*/
  return this; /*0x6c4ccf*/

}

// ==== BACKFILL 0x006C4CD0  CreateTClassFactory_MechLocomotionClass  cls=_TClassFactory_VMechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C4CD0::CreateTClassFactory_MechLocomotionClass(const void *a3, unsigned int *a2)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4cd7*/
    return -2147467261; /*0x6c4cd9*/
  *v4 = 0; /*0x6c4cf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4d12*/
    *v4 = a2; /*0x6c4d16*/
  if ( !*v4 ) /*0x6c4d18*/
    return -2147467262; /*0x6c4d20*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c4d2c*/
  return 0; /*0x6c4cde*/

}

// ==== BACKFILL 0x006C4D40  TClassFactory_MechLocomotionClass::AddRef  cls=_TClassFactory_VMechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
LONG TClassFactory_MechLocomotionClass::AddRef(void *a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C4D40)
}

// ==== BACKFILL 0x006C4D90  TClassFactory_MechLocomotionClass::ddtor  cls=_TClassFactory_VMechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_MechLocomotionClass::ddtor(int a2, int a3, unsigned int *a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C4D90)
}

// ==== BACKFILL 0x006C4E10  TClassFactory_MechLocomotionClass::GetSize  cls=_TClassFactory_VMechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_MechLocomotionClass::GetSize(int a2)
{

  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(unsigned int *)((unsigned int)(a2)+ 4); /*0x6c4e1a*/
  if ( v5 ) /*0x6c4e1d*/
    v3 = v2 + 1; /*0x6c4e1f*/
  else
    v3 = v2 - 1; /*0x6c4e28*/
  *(unsigned int *)((unsigned int)(a2)+ 4) = v3; /*0x6c4e20*/
  return 0; /*0x6c4e25*/

}

// ==== BACKFILL 0x006C4E40  WinMain_Helper_6C4E40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C4E40::WinMain_Helper_6C4E40() {

  ((unsigned int *)this)[0] = 0; /*0x6c4e42*/
  this->vtable1 = &vt_TClassFactory; /*0x6c4e49*/
  return this; /*0x6c4e4f*/

}

// ==== BACKFILL 0x006C4E50  CreateTClassFactory_ShipLocomotionClass  cls=_TClassFactory_VShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C4E50::CreateTClassFactory_ShipLocomotionClass(const void *a3, unsigned int *a2)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4e57*/
    return -2147467261; /*0x6c4e59*/
  *v4 = 0; /*0x6c4e76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4e92*/
    *v4 = a2; /*0x6c4e96*/
  if ( !*v4 ) /*0x6c4e98*/
    return -2147467262; /*0x6c4ea0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c4eac*/
  return 0; /*0x6c4e5e*/

}

// ==== BACKFILL 0x006C4F10  TClassFactory_ShipLocomotionClass::ddtor  cls=_TClassFactory_VShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_ShipLocomotionClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C4F10.json)
}

// ==== BACKFILL 0x006C4FC0  WinMain_Helper_6C4FC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C4FC0::WinMain_Helper_6C4FC0() {

  ((unsigned int *)this)[0] = 0; /*0x6c4fc2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c4fc9*/
  return this; /*0x6c4fcf*/

}

// ==== BACKFILL 0x006C4FD0  CreateTClassFactory_BulletClass  cls=_TClassFactory_VBulletClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C4FD0::CreateTClassFactory_BulletClass(const void *a3, unsigned int *a2)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4fd7*/
    return -2147467261; /*0x6c4fd9*/
  *v4 = 0; /*0x6c4ff6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5012*/
    *v4 = a2; /*0x6c5016*/
  if ( !*v4 ) /*0x6c5018*/
    return -2147467262; /*0x6c5020*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c502c*/
  return 0; /*0x6c4fde*/

}

// ==== BACKFILL 0x006C5090  TClassFactory_BulletClass::ddtor  cls=_TClassFactory_VBulletClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_BulletClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (COM-thunk raw dump: phantom a3/a4 params,
    // uninit v9 out-param, __stdcall/__cdecl vtable cast clash; truth = ida_cache marker above)
}

// ==== BACKFILL 0x006C5140  WinMain_Helper_6C5140  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C5140::WinMain_Helper_6C5140() {

  ((unsigned int *)this)[0] = 0; /*0x6c5142*/
  this->vtable1 = &vt_TClassFactory; /*0x6c5149*/
  return this; /*0x6c514f*/

}

// ==== BACKFILL 0x006C5150  CreateTClassFactory_FactoryClass  cls=_TClassFactory_VFactoryClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C5150::CreateTClassFactory_FactoryClass(const void *a3, unsigned int *a2)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5157*/
    return -2147467261; /*0x6c5159*/
  *v4 = 0; /*0x6c5176*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5192*/
    *v4 = a2; /*0x6c5196*/
  if ( !*v4 ) /*0x6c5198*/
    return -2147467262; /*0x6c51a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c51ac*/
  return 0; /*0x6c515e*/

}

// ==== BACKFILL 0x006C5210  TClassFactory_FactoryClass::ddtor  cls=_TClassFactory_VFactoryClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_FactoryClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C5210.json)
}

// ==== BACKFILL 0x006C52C0  WinMain_Helper_6C52C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C52C0::WinMain_Helper_6C52C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c52c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c52c9*/
  return this; /*0x6c52cf*/

}

// ==== BACKFILL 0x006C52D0  CreateTClassFactory_WarheadTypeClass  cls=_TClassFactory_VWarheadTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C52D0::CreateTClassFactory_WarheadTypeClass(void * a2, void * a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c52d7*/
    return -2147467261; /*0x6c52d9*/
  *v4 = 0; /*0x6c52f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5312*/
    *v4 = a2; /*0x6c5316*/
  if ( !*v4 ) /*0x6c5318*/
    return -2147467262; /*0x6c5320*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c532c*/
  return 0; /*0x6c52de*/

}

// ==== BACKFILL 0x006C5440  WinMain_Helper_6C5440  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C5440::WinMain_Helper_6C5440() {

  ((unsigned int *)this)[0] = 0; /*0x6c5442*/
  this->vtable1 = &vt_TClassFactory; /*0x6c5449*/
  return this; /*0x6c544f*/

}

// ==== BACKFILL 0x006C5450  CreateTClassFactory_WeaponTypeClass  cls=_TClassFactory_VWeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C5450::CreateTClassFactory_WeaponTypeClass(void * a2, void * a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5457*/
    return -2147467261; /*0x6c5459*/
  *v4 = 0; /*0x6c5476*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5492*/
    *v4 = a2; /*0x6c5496*/
  if ( !*v4 ) /*0x6c5498*/
    return -2147467262; /*0x6c54a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c54ac*/
  return 0; /*0x6c545e*/

}

// ==== BACKFILL 0x006C55C0  WinMain_Helper_6C55C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C55C0::WinMain_Helper_6C55C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c55c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c55c9*/
  return this; /*0x6c55cf*/

}

// ==== BACKFILL 0x006C55D0  CreateTClassFactory_ParticleClass  cls=_TClassFactory_VParticleClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C55D0::CreateTClassFactory_ParticleClass(void * a2, void * a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c55d7*/
    return -2147467261; /*0x6c55d9*/
  *v4 = 0; /*0x6c55f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5612*/
    *v4 = a2; /*0x6c5616*/
  if ( !*v4 ) /*0x6c5618*/
    return -2147467262; /*0x6c5620*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c562c*/
  return 0; /*0x6c55de*/

}

// ==== BACKFILL 0x006C5690  TClassFactory_ParticleClass::ddtor  cls=_TClassFactory_VParticleClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_ParticleClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C5690.json)
}

// ==== BACKFILL 0x006C5740  WinMain_Helper_6C5740  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C5740::WinMain_Helper_6C5740() {

  ((unsigned int *)this)[0] = 0; /*0x6c5742*/
  this->vtable1 = &vt_TClassFactory; /*0x6c5749*/
  return this; /*0x6c574f*/

}

// ==== BACKFILL 0x006C5750  CreateTClassFactory_ParticleTypeClass  cls=_TClassFactory_VParticleTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C5750::CreateTClassFactory_ParticleTypeClass(void * a2, void * a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5757*/
    return -2147467261; /*0x6c5759*/
  *v4 = 0; /*0x6c5776*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5792*/
    *v4 = a2; /*0x6c5796*/
  if ( !*v4 ) /*0x6c5798*/
    return -2147467262; /*0x6c57a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c57ac*/
  return 0; /*0x6c575e*/

}

// ==== BACKFILL 0x006C58C0  WinMain_Helper_6C58C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C58C0::WinMain_Helper_6C58C0() {

  ((unsigned int *)this)[0] = 0; /*0x6c58c2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c58c9*/
  return this; /*0x6c58cf*/

}

// ==== BACKFILL 0x006C58D0  CreateTClassFactory_ParticleSystemClass  cls=_TClassFactory_VParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C58D0::CreateTClassFactory_ParticleSystemClass(void * a2, void * a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c58d7*/
    return -2147467261; /*0x6c58d9*/
  *v4 = 0; /*0x6c58f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5912*/
    *v4 = a2; /*0x6c5916*/
  if ( !*v4 ) /*0x6c5918*/
    return -2147467262; /*0x6c5920*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c592c*/
  return 0; /*0x6c58de*/

}

// ==== BACKFILL 0x006C5990  TClassFactory_ParticleSystemClass::ddtor  cls=_TClassFactory_VParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_ParticleSystemClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C5990.json)
}

// ==== BACKFILL 0x006C5A40  WinMain_Helper_6C5A40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C5A40::WinMain_Helper_6C5A40() {

  ((unsigned int *)this)[0] = 0; /*0x6c5a42*/
  this->vtable1 = &vt_TClassFactory; /*0x6c5a49*/
  return this; /*0x6c5a4f*/

}

// ==== BACKFILL 0x006C5A50  CreateTClassFactory_ParticleSystemTypeClass  cls=_TClassFactory_VParticleSystemTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C5A50::CreateTClassFactory_ParticleSystemTypeClass(void * a2, void * a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5a57*/
    return -2147467261; /*0x6c5a59*/
  *v4 = 0; /*0x6c5a76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5a92*/
    *v4 = a2; /*0x6c5a96*/
  if ( !*v4 ) /*0x6c5a98*/
    return -2147467262; /*0x6c5aa0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c5aac*/
  return 0; /*0x6c5a5e*/

}

// ==== BACKFILL 0x006C5BC0  WinMain_Helper_6C5BC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C5BC0::WinMain_Helper_6C5BC0() {

  ((unsigned int *)this)[0] = 0; /*0x6c5bc2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c5bc9*/
  return this; /*0x6c5bcf*/

}

// ==== BACKFILL 0x006C5BD0  CreateTClassFactory_AITriggerTypeClass  cls=_TClassFactory_VAITriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C5BD0::CreateTClassFactory_AITriggerTypeClass(void * a2, void * a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5bd7*/
    return -2147467261; /*0x6c5bd9*/
  *v4 = 0; /*0x6c5bf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5c12*/
    *v4 = a2; /*0x6c5c16*/
  if ( !*v4 ) /*0x6c5c18*/
    return -2147467262; /*0x6c5c20*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c5c2c*/
  return 0; /*0x6c5bde*/

}

// ==== BACKFILL 0x006C5D40  WinMain_Helper_6C5D40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C5D40::WinMain_Helper_6C5D40() {

  ((unsigned int *)this)[0] = 0; /*0x6c5d42*/
  this->vtable1 = &vt_TClassFactory; /*0x6c5d49*/
  return this; /*0x6c5d4f*/

}

// ==== BACKFILL 0x006C5D50  CreateTClassFactory_NeuronClass  cls=_TClassFactory_VNeuronClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C5D50::CreateTClassFactory_NeuronClass(void * a2, void * a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5d57*/
    return -2147467261; /*0x6c5d59*/
  *v4 = 0; /*0x6c5d76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5d92*/
    *v4 = a2; /*0x6c5d96*/
  if ( !*v4 ) /*0x6c5d98*/
    return -2147467262; /*0x6c5da0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c5dac*/
  return 0; /*0x6c5d5e*/

}

// ==== BACKFILL 0x006C5E10  TClassFactory_NeuronClass::ddtor  cls=_TClassFactory_VNeuronClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_NeuronClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C5E10.json)
}

// ==== BACKFILL 0x006C5EC0  WinMain_Helper_6C5EC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C5EC0::WinMain_Helper_6C5EC0() {

  ((unsigned int *)this)[0] = 0; /*0x6c5ec2*/
  this->vtable1 = &vt_TClassFactory; /*0x6c5ec9*/
  return this; /*0x6c5ecf*/

}

// ==== BACKFILL 0x006C5ED0  CreateTClassFactory_FoggedObjectClass  cls=_TClassFactory_VFoggedObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C5ED0::CreateTClassFactory_FoggedObjectClass(void * a2, void * a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5ed7*/
    return -2147467261; /*0x6c5ed9*/
  *v4 = 0; /*0x6c5ef6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5f12*/
    *v4 = a2; /*0x6c5f16*/
  if ( !*v4 ) /*0x6c5f18*/
    return -2147467262; /*0x6c5f20*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c5f2c*/
  return 0; /*0x6c5ede*/

}

// ==== BACKFILL 0x006C5F90  TClassFactory_FoggedObjectClass::ddtor  cls=_TClassFactory_VFoggedObjectClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_FoggedObjectClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C5F90.json)
}

// ==== BACKFILL 0x006C6040  WinMain_Helper_6C6040  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6C6040::WinMain_Helper_6C6040() {

  ((unsigned int *)this)[0] = 0; /*0x6c6042*/
  this->vtable1 = &vt_TClassFactory; /*0x6c6049*/
  return this; /*0x6c604f*/

}

// ==== BACKFILL 0x006C6050  CreateTClassFactory_AlphaShapeClass  cls=_TClassFactory_VAlphaShapeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C6050::CreateTClassFactory_AlphaShapeClass(void * a2, void * a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c6057*/
    return -2147467261; /*0x6c6059*/
  *v4 = 0; /*0x6c6076*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c6092*/
    *v4 = a2; /*0x6c6096*/
  if ( !*v4 ) /*0x6c6098*/
    return -2147467262; /*0x6c60a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c60ac*/
  return 0; /*0x6c605e*/

}

// ==== BACKFILL 0x006C6110  TClassFactory_AlphaShapeClass::ddtor  cls=_TClassFactory_VAlphaShapeClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_AlphaShapeClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006C6110.json)
}

// ==== BACKFILL 0x006C6400  DynamicVector::Add  cls=DynamicVector  sig=csp  renamed_refs=0  residual=DynamicVector_field_0x1 ====
char DynamicVector::Add(DynamicVector * aP1, void *a2_1, void *a3_1)
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
    v4 = *(unsigned int *)this->__pad_14; /*0x6c6418*/
    if ( v4 <= 0 /*0x6c6428*/
      || !(*(uint8_t (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
            this,
            DynamicVector_field_0x8 + v4,
            0) )
    {
      return 0; /*0x6c642f*/
    }
  }
  DynamicVector_field_0x10 = (void *)(this->DynamicVector_field_0x10); /*0x6c6435*/
  v7 = (unsigned int)(*(unsigned int *)&(&this->DynamicVector_field_0x1)[3]); /*0x6c6438*/
  this->DynamicVector_field_0x10 = (unsigned int)((char *)DynamicVector_field_0x10 + 1); /*0x6c643e*/
  *(unsigned int *)(v7 + 4 * (unsigned int)DynamicVector_field_0x10) = *(unsigned int *)aP1; /*0x6c6448*/
  return 1; /*0x6c6431*/

}

// ==== BACKFILL 0x006C6540  sub_6C6540  cls=StaticButtonClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_6C6540::sub_6C6540(int a2, wchar_t * String, int a4, int aP1, ControlClass * aP5, int aP3, int aP4)
{

  int Instance; // ebx

  GadgetClass::Construct((ShpButtonClass *)this, aP1, aP5, aP3, aP4, 0, 0); /*0x6c6560*/
  ((Buffer*)((Buffer *)((char *)this + 36)))->Init(0, 0); /*0x6c656c*/
  *((unsigned int *)this + 12) = 0; /*0x6c657e*/
  *((unsigned int *)this + 13) = a4; /*0x6c6585*/
  *(unsigned int *)this = (unsigned int)&vt_StaticButtonClass; /*0x6c6588 G42.33 b9 truth: mov [esi], offset vt*/
  StaticButtonClass::Draw(this, String, 0); /*0x6c658e*/
  if ( aP3 == -1 || aP4 == -1 ) /*0x6c659b*/
  {
    Instance = (int)TextRenderer::GetInstance(); /*0x6c65a8*/
    if ( aP3 == -1 ) /*0x6c65aa*/
      this->M20 = Text::MeasureWidth(*((unsigned int *)this + 12), 0); /*0x6c65b9 G42.33 b9: hpp M20@0x14*/
    if ( aP4 == -1 ) /*0x6c65bf*/
      *((unsigned int *)this + 6) = *(unsigned int *)(Instance + 28); /*0x6c65c4*/
  }
  return (unsigned int *)this; /*0x6c65c9*/

}

// ==== BACKFILL 0x006C6880  StaticButtonClass::QueryInterface  cls=StaticButtonClass  sig=csp  renamed_refs=0  residual=- ====
StaticButtonClass * StaticButtonClass::QueryInterface(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C6880)
}

// ==== BACKFILL 0x006C8840  sub_6C8840  cls=rc_ptr  sig=csp  renamed_refs=0  residual=- ====
void * E4Recv_6C8840::sub_6C8840(unsigned int * Block, char a2)  // G42.33 b9 hpp void* sync
{

  *(unsigned int *)Block = (unsigned int)&vt_rc_ptr; /*0x6c8843*/
  ((ComPtr *)((ComPtr *)Block))->Release(); /*0x6c8849*/
  if ( (a2 & 1) != 0 ) /*0x6c8853*/
    __3_YAXPAX_Z(Block); /*0x6c8856*/
  return Block; /*0x6c8860*/

}

// ==== BACKFILL 0x006C8870  Audio_Read_6C8870  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_6C8870::Audio_Read_6C8870() {

  void *vtable0; // eax
  int vtable1; // ecx
  int v5; // ebx
  void *v6; // eax
  void *vtable2; // esi
  void *v8; // [esp+8h] [ebp-4h]

  vtable0 = this->AbstractClass; /*0x6c8875*/
  vtable1 = (int)((unsigned int *)this)[0]; /*0x6c8878*/
  if ( 3 * (int)vtable0 > vtable1 ) /*0x6c8880*/
    return 0; /*0x6c8883*/
  v5 = vtable1 / 2; /*0x6c888f*/
  if ( vtable1 / 2 < 10 ) /*0x6c8894*/
    v5 = 10; /*0x6c8896*/
  if ( v5 >= vtable1 ) /*0x6c889d*/
    return 0; /*0x6c88a0*/
  v6 = (void *)__2_YAPAXI_Z(32776 * v5); /*0x6c88b1*/
  vtable2 = ((unsigned int *)this)[0]; /*0x6c88b6*/
  v8 = v6; /*0x6c88be*/
  if ( vtable2 ) /*0x6c88c2*/
    qmemcpy(v6, vtable2, 32776 * (int)this->AbstractClass); /*0x6c88d9*/
  __3_YAXPAX_Z(((unsigned int *)this)[0]); /*0x6c88e7*/
  ((unsigned int *)this)[0] = v8; /*0x6c88f3*/
  ((unsigned int *)this)[0] = (void *)v5; /*0x6c88f6*/
  return 1; /*0x6c8882*/

}

// ==== BACKFILL 0x006C8900  sub_6C8900  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6C8900::sub_6C8900()
{

  void *vtable0; // eax
  int v4; // ebp
  void *v5; // edx
  void *vtable2; // esi
  void *v7; // [esp+4h] [ebp-4h]

  vtable0 = (void *)this->M4; /*0x6c8904 G42.33 b12: truth vtable0(void*)=count*/
  if ( (int)this->M4 < (int)((unsigned int *)this)[0] ) /*0x6c890b*/
    return 0; /*0x6c890d*/
  v4 = 2 * (unsigned int)vtable0; /*0x6c8913*/
  if ( 2 * (int)vtable0 < 10 ) /*0x6c891b*/
    v4 = 10; /*0x6c891d*/
  v5 = (void *)__2_YAPAXI_Z(32776 * v4); /*0x6c8932*/
  memset(v5, 0, 4 * ((unsigned int)(32776 * v4) >> 2)); /*0x6c893d*/
  v7 = v5; /*0x6c8947*/
  vtable2 = (void *)((unsigned int *)this)[0]; /*0x6c894d*/
  if ( vtable2 ) /*0x6c8952*/
    qmemcpy(v5, vtable2, 32776 * (int)this->M4); /*0x6c8967*/
  __3_YAXPAX_Z((void *)((unsigned int *)this)[0]); /*0x6c8974*/
  ((unsigned int *)this)[0] = (unsigned int)v4; /*0x6c8980*/
  ((unsigned int *)this)[0] = (unsigned int)v7; /*0x6c8983*/
  return 1; /*0x6c890f*/

}

// ==== BACKFILL 0x006C89B0  sub_6C89B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void * E4Recv_6C89B0::sub_6C89B0(size_t Size)
{

  void *v3; // eax

  this->M4 = (unsigned int)Size; /*0x6c89b8*/
  v3 = (void *)__2_YAPAXI_Z(Size); /*0x6c89ba*/
  ((unsigned int *)this)[0] = (unsigned int)v3; /*0x6c89c2*/
  ((unsigned int *)this)[0] = (unsigned int)v3; /*0x6c89c5*/
  return this; /*0x6c89ca*/

}

// ==== BACKFILL 0x006C89E0  Buffer::AppendCellData  cls=Buffer  sig=csp  renamed_refs=0  residual=- ====
int Buffer::AppendCellData(AbstractClass * aP1, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C89E0)
}

// ==== BACKFILL 0x006C8B10  sub_6C8B10  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C8B10::sub_6C8B10(int a2, int a3, short a4, short a5)
{

  unsigned short *vtable2; // edi
  unsigned int *v8; // eax
  int v9; // esi
  unsigned int v10; // eax
  char *v11; // edi
  unsigned short *v12; // [esp+10h] [ebp-10h]
  int v13; // [esp+18h] [ebp-8h] BYREF
  unsigned char *v14; // [esp+2Ch] [ebp+Ch]
  int v15; // [esp+30h] [ebp+10h]

  vtable2 = (unsigned short *)((unsigned int *)this)[0]; /*0x6c8b19*/
  if ( (char *)(vtable2 + 6) > (char *)((unsigned int *)this)[0] + (unsigned int)this->M4 ) /*0x6c8b28*/
    return 0; /*0x6c8b28*/
  v12 = (unsigned short *)((unsigned int *)this)[0]; /*0x6c8b2c*/
  ((unsigned int *)this)[0] = (unsigned int)(vtable2 + 6); /*0x6c8b30*/
  if ( !vtable2 ) /*0x6c8b33*/
    return 0; /*0x6c8b35*/
  *vtable2 = a4; /*0x6c8b4f*/
  vtable2[1] = a5; /*0x6c8b52*/
  vtable2[2] = *(unsigned short *)(a3 + 8); /*0x6c8b5a*/
  vtable2[3] = *(unsigned short *)(a3 + 12); /*0x6c8b66*/
  *((unsigned int *)vtable2 + 2) = ((unsigned int *)this)[0]; /*0x6c8b70*/
  v8 = CellStruct::Copy((CellStruct *)a3, &v13); /*0x6c8b73*/
  v9 = a2; /*0x6c8b7a*/
  v14 = (unsigned char *)(*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)a2 + 92))(a2, *v8, v8[1]); /*0x6c8b92*/
  v15 = 0; /*0x6c8b9b*/
  if ( *(int *)(a3 + 12) > 0 ) /*0x6c8ba3*/
  {
    while ( 1 ) /*0x6c8bbb*/
    {
      v10 = Map_Append(v14, (int)((char *)&g_SidebarButtonState + 128), *(unsigned int *)(a3 + 8)); /*0x6c8bbb G42.33 b9 truth: offset unk_B0BDD0 = +0x80*/
      v11 = (char *)((unsigned int *)this)[0]; /*0x6c8bc0*/
      if ( &v11[v10] > (char *)((unsigned int *)this)[0] + (unsigned int)this->M4 || (((unsigned int *)this)[0] = (unsigned int)&v11[v10], !v11) ) /*0x6c8bd4*/
      {
        (*(void (**)(int))(*(unsigned int *)v9 + 96))(v9); /*0x6c8c16*/
        return 0; /*0x6c8c22*/
      }
      qmemcpy(v11, (char *)&g_SidebarButtonState + 128, v10); /*0x6c8be0 G42.33 b9 truth: +0x80*/
      ++v15; /*0x6c8bf4*/
      v14 += (*(int (**)(int))(*(unsigned int *)a2 + 116))(a2); /*0x6c8c06*/
      if ( v15 >= *(unsigned int *)(a3 + 12) ) /*0x6c8c0a*/
        break; /*0x6c8c0a*/
      v9 = a2; /*0x6c8c0c*/
    }
    vtable2 = v12; /*0x6c8c25*/
    v9 = a2; /*0x6c8c29*/
  }
  (*(void (**)(int))(*(unsigned int *)v9 + 96))(v9); /*0x6c8c31*/
  return (int)vtable2; /*0x6c8b37*/

}

// ==== BACKFILL 0x006C8C40  Timer::GetTicks  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
DWORD TimerGetTicks()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C8C40)
}

// ==== BACKFILL 0x006C8E70  ??0Iostream_init_QAE_XZ_5  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void * E4Recv_6C8E70::__0Iostream_init_QAE_XZ_5()
{

  return this; /*0x6c8e72*/

}

// ==== BACKFILL 0x006C9600  AbstractClass::GetTotalValue  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::GetTotalValue() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x6c9600.json */
}

// ==== BACKFILL 0x006C9690  Float::Accumulate  cls=Float  sig=csp  renamed_refs=0  residual=- ====
float Float::Accumulate(float value, int index)
{

  *((float *)this + index) = value + *((float *)this + index); /*0x6c969b*/
  return index; /*0x6c969e*/

}

// ==== BACKFILL 0x006C96B0  Float::SubtractClamped  cls=Float  sig=csp  renamed_refs=0  residual=- ====
float Float::SubtractClamped(BuildingTypeClass * aP1, IUnknown * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C96B0)
}

// ==== BACKFILL 0x006C96E0  sub_6C96E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_6C96E0::sub_6C96E0(unsigned int * a2, int a3)
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

  v3 = (ObjectClass *)this; /*0x6c96e3*/
  v9 = 0; /*0x6c96ec*/
  v4 = 4; /*0x6c96f0*/
  v10 = 0; /*0x6c96f5*/
  v11 = 0; /*0x6c96f9*/
  v12 = 0; /*0x6c96fd*/
  v5 = a3 - (unsigned int)this; /*0x6c9705*/
  v6 = (char *)((char *)&v9 - (char *)v3); /*0x6c9707*/
  do /*0x6c9716*/
  {
    v7 = *(float *)((char *)v3 + v5) + *(float *)v3; /*0x6c970c*/
    v3 = (ObjectClass *)((char *)v3 + 4); /*0x6c970e*/
    --v4; /*0x6c9711*/
    *(float *)((char *)v3 + (unsigned int)v6 - 4) = v7; /*0x6c9712*/
  }
  while ( v4 ); /*0x6c9716*/
  *a2 = v9; /*0x6c9723*/
  a2[1] = v10; /*0x6c9729*/
  a2[2] = v11; /*0x6c9730*/
  a2[3] = v12; /*0x6c9737*/
  return a2; /*0x6c9722*/

}

// ==== BACKFILL 0x006C9780  sub_6C9780  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_6C9780::sub_6C9780(unsigned int * a2, float * a3)
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
  v5 = (char *)((char *)this - (char *)a3); /*0x6c97a3 G42.33 b9 truth: this char**/
  do /*0x6c97b4*/
  {
    v6 = *(float *)((char *)v4 + (unsigned int)v5) - *v4; /*0x6c97aa*/
    ++v4; /*0x6c97ac*/
    --v3; /*0x6c97af*/
    *(float *)((char *)v4 + ((char *)&v8 - (char *)a3) - 4) = v6; /*0x6c97b0 G42.33 b9: paren repair*/
  }
  while ( v3 ); /*0x6c97b4*/
  *a2 = v8; /*0x6c97c1*/
  a2[1] = v9; /*0x6c97c7*/
  a2[2] = v10; /*0x6c97ce*/
  a2[3] = v11; /*0x6c97d5*/
  return a2; /*0x6c97c0*/

}

// ==== BACKFILL 0x006C9820  FirstFloatPositive  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Float_FirstPositive(float * a1)
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

// ==== BACKFILL 0x006C9940  sub_6C9940  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6C9940::sub_6C9940(char a2, char a3, unsigned char a4)
{

  uint16_t v4; // ax
  int result; // eax

  HIBYTE(v4) = a2; /*0x6c9946*/
  LOBYTE(v4) = a3; /*0x6c9950*/
  result = a4 | (v4 << 8); /*0x6c9957*/
  ((unsigned int *)this)[0] = (unsigned int)result; /*0x6c9959*/
  return result; /*0x6c995c*/

}

// ==== BACKFILL 0x006C9960  sub_6C9960  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_6C9960::sub_6C9960(wchar_t * String)
{

  int v3; // eax
  wchar_t *v4; // eax

  if ( ((unsigned int *)this)[0] ) /*0x6c9964*/
  {
    __3_YAXPAX_Z((void *)((unsigned int *)this)[0]); /*0x6c996c*/
    ((unsigned int *)this)[0] = 0; /*0x6c9974*/
  }
  if ( String ) /*0x6c9981*/
  {
    v3 = wcslen(String); /*0x6c9984*/
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3 + 2); /*0x6c998e*/
    ((unsigned int *)this)[0] = (int)v4; /*0x6c9996*/
    if ( v4 ) /*0x6c999b*/
      wcscpy(v4, String); /*0x6c999f*/
  }

}

// ==== BACKFILL 0x006C99D0  BinkMovie::CreateSurfaceTracker  cls=BinkMovie  sig=csp  renamed_refs=0  residual=- ====
int * CreateSurfaceTracker(char * FullPath)
{
    (void)FullPath; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006C99D0.json)
}

// ==== BACKFILL 0x006C9AC0  sub_6C9AC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void * E4Recv_6C9AC0::sub_6C9AC0()
{

  this->M4 = 0; /*0x6c9ac4*/
  ((unsigned int *)this)[0] = 0; /*0x6c9ac6*/
  ((unsigned int *)this)[0] = 0; /*0x6c9ac9*/
  ((unsigned int *)this)[0] = 0; /*0x6c9acc*/
  ((unsigned int *)this)[0] = 0; /*0x6c9acf*/
  ((unsigned int *)this)[0] = 0; /*0x6c9ad2*/
  ((unsigned int *)this)[0] = 0; /*0x6c9ad5*/
  ((unsigned int *)this)[0] = 0; /*0x6c9ad8*/
  ((unsigned int *)this)[0] = 0; /*0x6c9adb*/
  return this; /*0x6c9ade*/

}

// ==== BACKFILL 0x006C9F00  nullsub_40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void ObjectClass::nullsub_40()
{

  ; /*0x6c9f00*/

}

// ==== BACKFILL 0x006CA5A0  sub_6CA5A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int E4Recv_6CA5A0::sub_6CA5A0(wchar_t * Source)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)  // static def (b9)
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

  wcsncpy(Destination, (const wchar_t *)Source, 0xCu); /*0x6ca5af*/
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

// ==== BACKFILL 0x006CB3A0  SuperClass::CreateChronoAnim  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
void ** SuperClass::CreateChronoAnim(AbstractClass * aP1, SuperClass * aP2, int a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CB3A0.json)
}

// ==== BACKFILL 0x006CB4D0  SuperClass::SetOnHold  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
char SuperClass::SetOnHold(char aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CB4D0.json)
}

// ==== BACKFILL 0x006CB820  SuperClass::SetReadiness  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
char SuperClass::SetReadiness(char a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CB820.json)
}

// ==== BACKFILL 0x006CBCA0  SuperWeapon::UpdateSuperWeaponReadyState  cls=SuperWeapon  sig=csp  renamed_refs=0  residual=- ====
int BuildingClass::UpdateSuperWeaponReadyState(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CBCA0.json)
}

// ==== BACKFILL 0x006CC070  nullsub_231  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void ObjectClass::nullsub_231()
{

  ; /*0x6cc070*/

}

// ==== BACKFILL 0x006CC280  SuperClass::SetRechargeTime  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
int SuperClass::SetRechargeTime(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CC280.json)
}

// ==== BACKFILL 0x006CC290  SuperClass::ResetRechargeTime  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
void SuperClass::ResetRechargeTime()
{

  this->SuperClass_field_0x24 = (unsigned int)((void *)-1); /*0x6cc290*/

}

// ==== BACKFILL 0x006CC2B0  SuperClass::NameReadiness  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
wchar_t * SuperClass::NameReadiness(void * aTxtHold)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CC2B0.json)
}

// ==== BACKFILL 0x006CC360  SuperClass::CanFire  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
char SuperClass::CanFire()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CC360.json)
}

// ==== BACKFILL 0x006CDE80  nullsub_235  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_235(int a1, int a2)
{
  ; /*0x6cde80*/
}

// ==== BACKFILL 0x006CDE90  SuperClass::ShouldDrawProgress  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
bool SuperClass::ShouldDrawProgress()
{

  return *((unsigned char *)this->SuperClass_field_0x28 + 229) || HIBYTE(this->SuperClass_field_0x6C) == 0; /*0x6cde9d*/

}

// ==== BACKFILL 0x006CDEB0  SuperClass::ddtor  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
int SuperClass::ddtor(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CDEB0.json)
}

// ==== BACKFILL 0x006CDEF0  SuperClass::LoadFromStream  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
int SuperClass::LoadFromStream(AbstractClass * aP0, int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CDEF0.json)
}

// ==== BACKFILL 0x006CDFD0  SuperClass::SaveState  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
int SuperClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CDFD0.json)
}

// ==== BACKFILL 0x006CDFF0  SuperClass::ExecuteAction  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
long long SuperClass::ExecuteAction(unsigned int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CDFF0.json)
}

// ==== BACKFILL 0x006CE020  SuperClass::PowerDrainUpdate  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
int SuperClass::PowerDrainUpdate(int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CE020.json)
}

// ==== BACKFILL 0x006CE1A0  SuperClass::ShouldFlashTab  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
bool SuperClass::ShouldFlashTab()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CE1A0.json)
}

// ==== BACKFILL 0x006CE1F0  AbstractClass::updateTargetTracking  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::updateTargetTracking(int a1)
{

  return 57; /*0x6ce1f5*/

}

// ==== BACKFILL 0x006CE200  SuperClass::StubReturn57  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
int SuperClass::StubReturn57()
{

  return 57; /*0x6ce205*/

}

// ==== BACKFILL 0x006CE210  SuperClass::StubReturn128  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
int SuperClass::StubReturn128()
{

  return 128; /*0x6ce215*/

}

// ==== BACKFILL 0x006CE220  SuperClass::ProcessEvent  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
void* SuperClass::ProcessEvent(int a2) {
  SuperClass::CleanupMembers(); /*0x6ce223*/
  if ( (a2 & 1) != 0 ) /*0x6ce22d*/
    RA2_OPDEL(this); /*0x6ce230*/
  return this; /*0x6ce23a*/
}

// ==== BACKFILL 0x006CE270  SuperClass::SetFieldX  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
int SuperClass::SetFieldX() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x6CE270.json */
}

// ==== BACKFILL 0x006CE280  SuperClass::AdvanceCountdown  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
void SuperClass::AdvanceCountdown() {
}

// ==== BACKFILL 0x006CE2C0  SuperClass::SetCurrentFrame  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
void* SuperClass::SetCurrentFrame() {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x6CE2C0.json */
}

// ==== BACKFILL 0x006CE2D0  VectorClass::RemoveAt  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int _::RemoveAt(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CE2D0.json)
}

// ==== BACKFILL 0x006CE320  SuperClass::RemoveFromPointerArray  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
char SuperClass::RemoveFromPointerArray(int a2) {
    char *SuperClass_field_0x10; // edx
    int v3; // eax
    char *v4; // edx

    SuperClass_field_0x10 = (char *)*(unsigned int *)((char *)this + 16); /*0x6ce320 真值 [ecx+10h] count*/
    v3 = a2; /*0x6ce323*/
    if ( a2 >= (int)SuperClass_field_0x10 ) /*0x6ce329*/
      return 0; /*0x6ce34c*/
    v4 = SuperClass_field_0x10 - 1; /*0x6ce32b*/
    *(unsigned int *)((char *)this + 16) = (unsigned int)v4; /*0x6ce32e +0x10*/
    if ( a2 < (int)v4 ) /*0x6ce331*/
    {
      do /*0x6ce344*/
      {
        ++v3; /*0x6ce337*/
        *((unsigned int *)*(unsigned int *)((char *)this + 4) + v3 - 1) = *((unsigned int *)*(unsigned int *)((char *)this + 4) + v3); /*0x6ce33b 真值 [ecx+4] arr*/
      }
      while ( v3 < (int)*(unsigned int *)((char *)this + 16) ); /*0x6ce344 +0x10*/
    }
    return 1; /*0x6ce349*/
}

// ==== BACKFILL 0x006CE570  sub_6CE570  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6CE570::sub_6CE570()  // G42.33 b12: truth int index
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6CE570)
}

// ==== BACKFILL 0x006CE5B0  SuperWeaponTypeClass::SuperWeaponTypeClass  cls=SuperWeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
SuperWeaponTypeClass::SuperWeaponTypeClass(void * aP1)
{
    (void)aP1;
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CE5B0.json)
}

// ==== BACKFILL 0x006CE7C0  SuperWeaponTypeClass::SD_vt03  cls=SuperWeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SuperWeaponTypeClass::SD_vt03(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CE7C0.json)
}

// ==== BACKFILL 0x006CE800  SuperWeaponTypeClass::SaveLoad_Prefix  cls=SuperWeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SuperWeaponTypeClass::SaveLoad_Prefix(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CE800.json)
}

// ==== BACKFILL 0x006CE8D0  SuperWeaponTypeClass::SaveLoad_Prefix_0  cls=SuperWeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SuperWeaponTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CE8D0.json)
}

// ==== BACKFILL 0x006CE8F0  SuperWeaponTypeClass::SD_vt11  cls=SuperWeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SuperWeaponTypeClass::SD_vt11()
{

  return 32; /*0x6ce8f5*/

}

// ==== BACKFILL 0x006CE900  SuperWeaponTypeClass::SD_vt12  cls=SuperWeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SuperWeaponTypeClass::SD_vt12()
{

  return 256; /*0x6ce905*/

}

// ==== BACKFILL 0x006CE910  SuperWeaponTypeClass::SD_vt13  cls=SuperWeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SuperWeaponTypeClass::SD_vt13(int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CE910.json)
}

// ==== BACKFILL 0x006CEA10  SuperWeaponTypeClass::SD_vt16  cls=SuperWeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SuperWeaponTypeClass::SD_vt16()
{

  return this->ArrayIndex; /*0x6cea16*/

}

// ==== BACKFILL 0x006CEFE0  SuperWeaponTypeClass::SDDTOR  cls=SuperWeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * SuperWeaponTypeClass::SDDTOR(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CEFE0.json)
}

// ==== BACKFILL 0x006CF1D0  SmallFunc_6CF1D0  cls=SwizzleManagerClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_6CF1D0::SmallFunc_6CF1D0() {

  void *SwizzleManagerClass_field_0x20; // eax
  void *SwizzleManagerClass_field_0x08; // eax

  *(unsigned int *)this->__pad_0 = &vt_SwizzleManagerClass; /*0x6cf1d4*/
  SwizzleManagerClass::ConvertNodes((int)this); /*0x6cf1da*/
  SwizzleManagerClass_field_0x20 = (void *)this->SwizzleManagerClass_field_0x20; /*0x6cf1df*/
  this->SwizzleManagerClass_field_0x1C = (int)&vt_VectorClass; /*0x6cf1e6*/
  if ( SwizzleManagerClass_field_0x20 && *((unsigned char *)this + 41) ) /*0x6cf1ef*/
  {
    __3_YAXPAX_Z(SwizzleManagerClass_field_0x20); /*0x6cf1f5*/
    this->SwizzleManagerClass_field_0x20 = 0; /*0x6cf1fd*/
  }
  *((unsigned char *)this + 41) = 0; /*0x6cf200*/
  this->SwizzleManagerClass_field_0x24 = 0; /*0x6cf203*/
  SwizzleManagerClass_field_0x08 = (void *)this->SwizzleManagerClass_field_0x08; /*0x6cf206*/
  this->SwizzleManagerClass_field_0x04 = (int)&vt_VectorClass; /*0x6cf209*/
  if ( SwizzleManagerClass_field_0x08 && BYTE1(this->SwizzleManagerClass_field_0x10) ) /*0x6cf214*/
  {
    __3_YAXPAX_Z(SwizzleManagerClass_field_0x08); /*0x6cf21a*/
    this->SwizzleManagerClass_field_0x08 = 0; /*0x6cf222*/
  }
  BYTE1(this->SwizzleManagerClass_field_0x10) = 0; /*0x6cf225*/
  this->SwizzleManagerClass_field_0x0C = 0; /*0x6cf228*/

}

// ==== BACKFILL 0x006CF490  SwizzleManagerClass::Add  cls=SwizzleManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SwizzleManagerClass::Add(SwizzleManagerClass * aP0, SwizzleManagerClass * aP1, unsigned int * a2)
{

  if ( !aP1 || !a2 ) /*0x6cf49e*/
    return -2147467261; /*0x6cf4a7*/
  *a2 = (unsigned int)(aP1); /*0x6cf4a0*/
  return 0; /*0x6cf4a4*/

}

// ==== BACKFILL 0x006CF4B0  SwizzleManagerClass::AddRef  cls=SwizzleManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SwizzleManagerClass::AddRef(int a1)
{

  return 1; /*0x6cf4b5*/

}

// ==== BACKFILL 0x006CF4C0  SwizzleManagerClass::Release  cls=SwizzleManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SwizzleManagerClass::Release(int a1)
{

  return 1; /*0x6cf4c5*/

}

// ==== BACKFILL 0x006CF4D0  SwizzleManagerClass::Remove  cls=SwizzleManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SwizzleManagerClass::Remove(int a1, int a2, int a3)
{

  return -2147467263; /*0x6cf4d5*/

}

// ==== BACKFILL 0x006CF4E0  SwizzleManagerClass::Lookup  cls=SwizzleManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SwizzleManagerClass::Lookup(int a1, int a2, int a3, int a4)
{

  return -2147467263; /*0x6cf4e5*/

}

// ==== BACKFILL 0x006CF8F0  sub_6CF8F0  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_6CF8F0::sub_6CF8F0(int a2, unsigned int * a3)
{

  unsigned int *v4; // eax
  int v5; // ecx
  unsigned int *v7; // eax
  unsigned int *v8; // ecx
  int v9; // edx

  this->M4 = 0; /*0x6cf8fd G42.33 b12: hpp M4@4 (Items)*/
  this->M8 = a2; /*0x6cf900 G42.33 b12: hpp M8@8 (Capacity)*/
  this->M12 = 1; /*0x6cf903 G42.33 b12: hpp M12@0xC (IsInitialized)*/
  this->M13 = 0; /*0x6cf907 G42.33 b12: hpp M13@0xD (IsAllocated)*/
  this->vfptr = (unsigned int)&vt_VectorClass; /*0x6cf90a G42.33 b12: hpp vfptr@0*/
  if ( !a2 ) /*0x6cf910*/
    return &this->vfptr; /*0x6cf910*/
  if ( !a3 ) /*0x6cf918*/
  {
    v7 = (unsigned int *)__2_YAPAXI_Z(8 * a2); /*0x6cf942*/
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
        this->M4 = (unsigned int)v7; /*0x6cf963*/
        this->M13 = 1; /*0x6cf966*/
        return &this->vfptr; /*0x6cf96f*/
      }
    }
    else
    {
      v7 = 0; /*0x6cf972*/
    }
    this->M4 = (unsigned int)v7; /*0x6cf974*/
    this->M13 = 1; /*0x6cf977*/
    return &this->vfptr; /*0x6cf97b*/
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
  this->M4 = (unsigned int)a3; /*0x6cf92f*/
  return &this->vfptr; /*0x6cf934*/

}

// ==== BACKFILL 0x006CFCC0  SidebarClass::findEntryIndexByName  cls=SidebarClass  sig=csp  renamed_refs=0  residual=- ====
int SidebarClass::findEntryIndexByName() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x6CFCC0.json */
}

// ==== BACKFILL 0x006CFD20  globalHelper_0CFD20  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void sub_6CFD20(int a1, int a2)
{
  g_ObjectTrackingPool[a1] = a2; /*0x6cfd20*/
}

// ==== BACKFILL 0x006CFE10  sub_6CFE10  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6CFE10::sub_6CFE10()
{

  return (int)this - dword_B0CC20 + 1; /*0x6cfe19*/

}
