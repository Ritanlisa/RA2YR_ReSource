// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00464AC0  BuildingTypeClass::CanPlacePath  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
bool BuildingTypeClass::CanPlacePath(unsigned short *a2, int a3)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00464AC0.json)
}

// ==== BACKFILL 0x00464AF0  BuildingTypeClass::GetSizeInLeptons  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * BuildingTypeClass::GetSizeInLeptons(unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00464AF0.json)
}

// ==== BACKFILL 0x00465300  BuildingTypeClass::SaveLoad_Prefix_0  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingTypeClass::SaveLoad_Prefix_0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00465300.json)
}

// ==== BACKFILL 0x00465380  BuildingTypeClass::GetClassIdentifier  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingTypeClass::GetClassIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00465380.json)
}

// ==== BACKFILL 0x00465910  AbstractClass::releaseRef  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
char AbstractClass::releaseRef()
{

  return 0; /*0x465912*/

}

// ==== BACKFILL 0x00465920  AbstractClass::finalRelease  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
char AbstractClass::finalRelease()
{

  return 0; /*0x465922*/

}

// ==== BACKFILL 0x00465960  AbstractClass::LoadTheaterSHP  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::LoadTheaterSHP() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x465960.json */
}

// ==== BACKFILL 0x00465CB0  nullsub_7  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void ObjectClass::nullsub_7()
{

  ; /*0x465cb0*/

}

// ==== BACKFILL 0x00465D70  BuildingClass::processPowerState  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingClass::processPowerState()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00465D70.json)
}

// ==== BACKFILL 0x00465D80  ??0Iostream_init_QAE_XZ_2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
Iostream_init * E4Recv_465D80::__0Iostream_init_QAE_XZ_2()
{

  return (gamemd::Iostream_init *)(this); /*0x465d82*/

}

// ==== BACKFILL 0x00465D90  BuildingTypeClass::GetTypeIdentifier  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingTypeClass::GetTypeIdentifier()
{

  return 7; /*0x465d95*/

}

// ==== BACKFILL 0x00465DA0  BuildingTypeClass::GetObjectSize  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingTypeClass::GetObjectSize()
{

  return 6040; /*0x465da5*/

}

// ==== BACKFILL 0x00465DB0  BuildingTypeClass::GetAuxField  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingTypeClass::GetAuxField()
{

  return this->ArrayIndex; /*0x465db6*/

}

// ==== BACKFILL 0x00465DC0  BuildingTypeClass::ddtor  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingTypeClass::ddtor(void *a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00465DC0.json)
}

// ==== BACKFILL 0x00466660  BulletClass::CalculateSpreadAngle  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int * BulletClass::CalculateSpreadAngle(int a1)
{

  if ( (byte_89DE10 & 1) == 0 ) /*0x46666b*/
  {
    byte_89DE10 |= 1u; /*0x466689*/
    dword_89DDF4 = 2147450879; /*0x46668f*/
    atexit(nullsub_108); /*0x466694*/
  }
  return (int *)(&dword_89DDF4); /*0x4666a2*/

}

// ==== BACKFILL 0x004666C0  BulletClass::CheckMirrorState  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
bool BulletClass::CheckMirrorState(int a2)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4666C0)
}

// ==== BACKFILL 0x00468090  BulletClass::SetupVoxelTransform  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
void BulletClass::SetupVoxelTransform(void* a1, void* a2) {
  int v4; // eax
  double v5; // st7
  double v6; // st7
  float *inited; // eax
  float *v8; // eax
  int v9; // ebx
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  float v20; // [esp+Ch] [ebp-C4h]
  float v21; // [esp+Ch] [ebp-C4h]
  unsigned int v22; // [esp+20h] [ebp-B0h]
  double v23; // [esp+20h] [ebp-B0h]
  int v24; // [esp+20h] [ebp-B0h]
  int v25; // [esp+2Ch] [ebp-A4h] BYREF
  int v26; // [esp+30h] [ebp-A0h]
  int v27; // [esp+34h] [ebp-9Ch]
  int GroundHeight; // [esp+38h] [ebp-98h]
  unsigned int v29; // [esp+3Ch] [ebp-94h]
  float v30[12]; // [esp+40h] [ebp-90h] BYREF
  unsigned char v31[48]; // [esp+70h] [ebp-60h] BYREF
  float v32[12]; // [esp+A0h] [ebp-30h] BYREF

  if ( (*(unsigned int *)g_ScenarioClass_Instance & 0x1000) == 0 /*0x4680d5*/
    || (v25 = this->q09C, v26 = this->q0A0,
                                      v27 = this->q0A4,
                                      !Game::Stub3((int)&v25)) )
  {
    v4 = this->q0AC; /*0x4680e2*/
    if ( !*(unsigned char *)(v4 + 670) && !this->q158 ) /*0x4680f6*/
    {
      if ( *(unsigned char *)(v4 + 566) ) /*0x468104*/
      {
        Matrix3x4::Identity(v30); /*0x468116*/
        v5 = Math::CalcAngle(-this->u64_F0, this->q0E8); /*0x468137*/
        IDA_LOWORD(v22) = Math::RoundToInt((v5 - 1.570796326794897) * -10430.06004058427); /*0x46814d*/
        v20 = (double)(int)(((((v22 >> 10) + 1) >> 1) & 0x1F) - 8) * -0.1963495408493621; /*0x468177*/
        Matrix2D::Rotate(v30, v20); /*0x46817a*/
        v23 = Math::Sqrt(this->q0E8 * this->q0E8 + this->u64_F0 /*0x4681aa*/
                                                                         * this->u64_F0);
        v6 = Math::CalcAngle(this->u32_F8, v23); /*0x4681c0*/
        IDA_LOWORD(v23) = Math::RoundToInt((v6 - 1.570796326794897) * -10430.06004058427); /*0x4681d6*/
        v21 = -((double)(int)((((unsigned int)((IDA_LODWORD(v23) >> 10) + 1) >> 1) & 0x1F) - 8) * -0.1963495408493621); /*0x468202*/
        Matrix3D::RotateZ(v30, v21); /*0x468205*/
        inited = (float *)AudioConfig::InitDefault(v31); /*0x468227*/
        v8 = MultiplyMatrix3x4(v32, inited, v30); /*0x468235*/
        ((void (*)(int, float *, int *, int *, unsigned int, int, int))BulletClass::RenderVoxelBullet)( /*0x46824a*/
          this->q0AC + 176,
          v8,
          a1,
          a2,
          0,
          2048,
          1000);
      }
      else
      {
        v24 = (*(int (**)(void *))(((unsigned int)(this->q0288))))(this); /*0x468261*/
        if ( v24 ) /*0x468265*/
        {
          v29 = (*(int (**)(void *))(((unsigned int)(this->q0C08))))(this); /*0x468275*/
          v9 = (*(int (**)(void *))(*(unsigned int *)&this->q0B46))(this); /*0x468289*/
          v25 = this->q09C; /*0x46828f*/
          v26 = this->q0A0; /*0x46829b*/
          v27 = this->q0A4; /*0x4682a2*/
          GroundHeight = Cell::GetGroundHeight(&v25); /*0x4682b0*/
          if ( !this->q08C ) /*0x4682b4*/
          {
            v10 = this->q0A0; /*0x4682c0*/
            v11 = this->q0A4; /*0x4682c3*/
            v25 = this->q09C; /*0x4682c6*/
            v26 = v10; /*0x4682ce*/
            v27 = v11; /*0x4682d8*/
            if ( (*((unsigned int *)Coord::To_Cell(&MapClass_Instance, &v25) + 80) & 0x100) != 0 && v9 >= dword_89DE64 ) /*0x4682f3*/
            {
              v9 -= dword_89DE64; /*0x4682f9*/
              GroundHeight += dword_89DE64; /*0x4682fd*/
            }
          }
          if ( v9 > 0 && *(unsigned char *)(this->q0AC + 666) ) /*0x46830e*/
          {
            v12 = ZCoordToScreenY(v9); /*0x46831a*/
            v13 = *a1; /*0x468322*/
            v26 = v12 + a1[1]; /*0x468328*/
            v25 = v13; /*0x46833d*/
            v14 = ZCoordToScreenY(GroundHeight); /*0x468341*/
            DrawToSurfaceSHP( /*0x468374*/
              g_DSurface_Hidden_2,
              g_FileSystem_THEATER_PAL,
              v24,
              v29,
              &v25,
              a2,
              9729,
              0,
              -10 - v14,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
          }
          v15 = this->q0AC; /*0x468379*/
          v16 = g_FileSystem_THEATER_PAL; /*0x46837f*/
          if ( *(unsigned char *)(v15 + 680) ) /*0x468385*/
          {
            v16 = FileSystem_ANIM_PAL; /*0x46838f*/
          }
          else if ( *(unsigned char *)(v15 + 681) ) /*0x468397*/
          {
            v17 = this->InheritedColor; /*0x4683a1*/
            if ( v17 == -1 ) /*0x4683aa*/
              v16 = *(unsigned int *)(*((unsigned int *)BuildingTypeClass_AnimTable + *((unsigned int *)HouseClass_Player + 22549)) + 780); /*0x4683d1*/
            else
              v16 = *(unsigned int *)(*((unsigned int *)BuildingTypeClass_AnimTable + v17) + 780); /*0x4683b5*/
          }
          v18 = (*(int (**)(void *))(*(unsigned int *)&this->Data4))(this); /*0x4683ea*/
          v19 = ZCoordToScreenY(v18); /*0x4683f2*/
          DrawToSurfaceSHP(g_DSurface_Hidden_2, v16, v24, v29, a1, a2, 11776, 0, -30 - v19, 0, 1000, 0, 0, 0, 0, 0); /*0x46841d*/
        }
      }
    }
  }
}

// ==== BACKFILL 0x00468430  BulletClass::LoseTarget  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int BulletClass::LoseTarget() {
  unsigned int *v2; // eax
  int16_t v4[2]; // [esp+4h] [ebp-14h] BYREF
  int v5; // [esp+8h] [ebp-10h]
  unsigned char v6[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = (unsigned int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)this->BulletClass_field_0x10C + 72))( /*0x468443*/
                   this->BulletClass_field_0x10C,
                   v6);
  IDA_LOWORD(v5) = *v2 / 256; /*0x468456*/
  IDA_HIWORD(v5) = v2[1] / 256; /*0x46846a*/
  *(unsigned int *)v4 = v5; /*0x468473*/
  IDA_LOWORD(v2) = dword_A8E7AC; /*0x468477*/
  if ( dword_A8E7AC /*0x46849b*/
    || (IDA_LOWORD(v2) = (*(int (**)(void *))(*(unsigned int *)this->BulletClass_field_0x10C + 84))(this->BulletClass_field_0x10C),
        (unsigned char)v2)
    || (IDA_LOWORD(v2) = v4[0], *(unsigned int *)v4 == dword_89DDF0) )
  {
    this->BulletClass_field_0x10C = 0; /*0x4684c5*/
  }
  else
  {
    v2 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v4); /*0x4684b5*/
    this->BulletClass_field_0x10C = v2; /*0x4684ba*/
  }
  return (int16_t)v2; /*0x4684c0*/
}

// ==== BACKFILL 0x004684E0  BulletClass::ProcessImpact  cls=BulletClass  sig=csp  renamed_refs=1  residual=u32_688 ====
int BulletClass::ProcessImpact(void* a1, void* a2) {
  char *v5; // eax
  char *v6; // ecx
  unsigned int *v7; // eax
  char **i; // ecx
  int16_t v10; // [esp+Ch] [ebp-10h] BYREF
  char v11[12]; // [esp+10h] [ebp-Ch] BYREF

  a1 = a1; /*0x4684ea*/
  Object::Unlink((void *)this); /*0x4684f2*/
  v5 = *(char **)(&this->u32_446); /*0x4684f7*/
  if ( v5 == a1 ) /*0x468501*/
    this->q0B0 = 0; /*0x468503*/
  v6 = *(char **)(&this->u32_688); /*0x468509*/
  if ( v6 == a1 ) /*0x468511*/
  {
    v7 = (unsigned int *)(*(int (**)(char *, char *))(v6->q048)(v6, v11); /*0x46851e*/
    a1 = *(char **)CellStruct::Set(&v10, *v7 / 256, v7[1] / 256); /*0x46854d*/
    IDA_LOWORD(v5) = g_IKnowWhatImDoing; /*0x468551*/
    if ( g_IKnowWhatImDoing /*0x468575*/
      || (IDA_LOWORD(v5) = (*(int (**)(unsigned int))(**(unsigned int **)(&this->u32_688) + 84))(this->q10C),
          (unsigned char)v5)
      || (IDA_LOWORD(v5) = (unsigned short)a1, a1 == (char *)dword_89DDF0) )
    {
      this->q10C = 0; /*0x46859c*/
    }
    else
    {
      v5 = (char *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&a1); /*0x46858f*/
      this->q10C = v5; /*0x468594*/
    }
  }
  if ( *(char **)(&this->u32_442) == a1 ) /*0x4685a8*/
    this->q0AC = 0; /*0x4685aa*/
  if ( *(char **)(&this->u32_784) == a1 ) /*0x4685b6*/
    this->q130 = 0; /*0x4685b8*/
  if ( *(char **)(&this->u32_880) == a1 ) /*0x4685c4*/
    this->q154 = 0; /*0x4685c6*/
  if ( (unsigned char)a2 ) /*0x4685d0*/
  {
    v5 = (char *)(*(int (**)(char *))(*(unsigned int *)a1 + 44))(a1); /*0x4685da*/
    if ( v5 == (char *)8 ) /*0x4685e0*/
    {
      a2 = a1; /*0x4685e2*/
      if ( *(unsigned char *)(*((unsigned int *)a1 + 43) + 748) ) /*0x4685ec*/
      {
        v5 = 0; /*0x4685fa*/
        if ( dword_89DE28 > 0 ) /*0x4685fe*/
        {
          for ( i = (char **)dword_89DE1C; a1 != *i; ++i ) /*0x468600*/
          {
            if ( (int)++v5 >= dword_89DE28 ) /*0x468610*/
              return (int16_t)v5; /*0x468610*/
          }
          v5 = (char *)(*(int (**)(int *, char **))(dword_89DE18 + 16))(&dword_89DE18, &a2); /*0x46862a*/
          if ( v5 != (char *)-1 && (int)v5 < dword_89DE28 && (int)v5 < --dword_89DE28 ) /*0x468645*/
          {
            do /*0x46865d*/
            {
              ++v5; /*0x46864d*/
              *((unsigned int *)dword_89DE1C + (unsigned int)v5 - 1) = *((unsigned int *)dword_89DE1C + (unsigned int)v5); /*0x468651*/
            }
            while ( (int)v5 < dword_89DE28 ); /*0x46865d*/
          }
        }
      }
    }
  }
  return (int16_t)v5; /*0x468612*/
}

// ==== BACKFILL 0x00468B90  BulletClass::UpdateFlightPath  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int BulletClass::UpdateFlightPath() {
  int v1; // eax

  v1 = -(*((unsigned char *)this->BulletClass_field_0xAC + 759) != 0); /*0x468b9e*/
  IDA_LOBYTE(v1) = v1 & 0xFE; /*0x468ba0*/
  return v1 + 3; /*0x468ba5*/
}

// ==== BACKFILL 0x0046AE70  BulletClass::SaveLoad_Prefix  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int BulletClass::SaveLoad_Prefix(void* a1, int a2) {
  int result; // eax
  int v4; // ebx
  int v5; // eax

  result = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x46ae7c*/
  v4 = result; /*0x46ae81*/
  if ( result >= 0 ) /*0x46ae85*/
  {
    if ( a1 ) /*0x46ae8e*/
    {
      ObjectClass::Init((ObjectClass *)a1, (int)&a2); /*0x46ae97*/
      Timer::Start((Timer *)(a1 + 46), 0); /*0x46aea6*/
      Timer::Start((Timer *)(a1 + 49), 0); /*0x46aeb0*/
      *a1 = (int)(void *)&BulletClass_vftable; /*0x46aeb5*/
      a1[1] = (int)(void *)&BulletClass_vftable; /*0x46aebb*/
      a1[2] = (int)(void *)&BulletClass_vftable; /*0x46aec2*/
      a1[3] = (int)(void *)&BulletClass_vftable; /*0x46aec9*/
    }
    if ( a1[85] /*0x46af17*/
      && (((unsigned int *)&g_BuildingLoadQueue_Array)[1] < ((char *)&g_BuildingLoadQueue_Array)
       || (IDA_BYTE1(((unsigned int *)&g_BuildingLoadQueue_Array)[0]) || !((char *)&g_BuildingLoadQueue_Array))
       && ((unsigned int *)&g_BuildingLoadQueue_Array)[2] > 0
       && (*(uint8_t (**)(int *, int, unsigned int))(((unsigned int *)&g_BuildingLoadQueue_Array)[0] + 8))(
            ((char *)&g_BuildingLoadQueue_Array),
            ((char *)&g_BuildingLoadQueue_Array) + ((unsigned int *)&g_BuildingLoadQueue_Array)[2],
            0)) )
    {
      v5 = ((unsigned int *)&g_BuildingLoadQueue_Array)[1]++; /*0x46af24*/
      *(unsigned int *)(((unsigned int *)&g_BuildingLoadQueue_Array)[0] + 4 * v5) = a1; /*0x46af33*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 43); /*0x46af42*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 44); /*0x46af53*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 74); /*0x46af64*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 67); /*0x46af75*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 76); /*0x46af86*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 85); /*0x46af91*/
    return v4; /*0x46af97*/
  }
  return result; /*0x46af99*/
}

// ==== BACKFILL 0x0046AFB0  BulletClass::SaveLoad_Prefix_0  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int BulletClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0->__pad_0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x46afc4*/

}

// ==== BACKFILL 0x0046AFD0  BulletClass::CheckTargetValidity  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
LONG BulletClass::CheckTargetValidity(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46AFD0)
}

// ==== BACKFILL 0x0046AFF0  BulletClass::ValidateTarget  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
LONG BulletClass::ValidateTarget(volatile LONG * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46AFF0)
}

// ==== BACKFILL 0x0046B050  CreateUIObjectCOM  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LPVOID CreateUIObjectCOM(IUnknown * aP0, AbstractClass * aP1, AbstractClass * aP2, AbstractClass * aP3, AbstractClass * aP4, int a6, AbstractClass * aP7)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46B050)
}

// ==== BACKFILL 0x0046B0C0  BulletClass::RenderVoxelBullet  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int BulletClass::RenderVoxelBullet(int a1, void* a2, void* a3, void* a4, int a5, int a6, int a7) {
  unsigned int *v8; // esi
  unsigned int *v9; // ebx
  unsigned int i; // ebp
  float *v11; // eax
  float *v12; // esi
  int v13; // edx
  int v14; // ebx
  unsigned int v15; // edi
  int v16; // ecx
  int v17; // esi
  int *v18; // eax
  int *SHPFrame; // [esp-18h] [ebp-10Ch]
  int v21; // [esp-10h] [ebp-104h]
  Viewport *v22; // [esp+0h] [ebp-F4h]
  int v23[2]; // [esp+10h] [ebp-E4h] BYREF
  unsigned int *v24; // [esp+18h] [ebp-DCh]
  unsigned int v25[6]; // [esp+1Ch] [ebp-D8h] BYREF
  float v26[12]; // [esp+34h] [ebp-C0h] BYREF
  float v27[12]; // [esp+64h] [ebp-90h] BYREF
  float v28[12]; // [esp+94h] [ebp-60h] BYREF
  float v29[12]; // [esp+C4h] [ebp-30h] BYREF

  v8 = *(unsigned int **)a1; /*0x46b0d0*/
  v9 = *(unsigned int **)(a1 + 4); /*0x46b0d2*/
  v23[0] = (int)this; /*0x46b0dd*/
  v24 = v8; /*0x46b0ed*/
  globalHelper_053C80(v8, 0, 0, a2, (float *)&stru_887460.Buffer_field_10); /*0x46b0f1*/
  Viewport::Clear(v22); /*0x46b0f6*/
  for ( i = 0; i < v8[1]; ++i ) /*0x46b0fb*/
  {
    if ( v9 ) /*0x46b106*/
    {
      qmemcpy(v26, (const void *)(v9[3] + 48 * (i + v9[1] * (a5 % v9[2]))), sizeof(v26)); /*0x46b135*/
      qmemcpy(v27, MultiplyMatrix3x4(v28, a2, v26), sizeof(v27)); /*0x46b153*/
      v8 = v24; /*0x46b155*/
    }
    v11 = MultiplyMatrix3x4(v29, (float *)stru_887430.m_Data, v27); /*0x46b16a*/
    TransformVoxelVertex(v8, i, 0, v11); /*0x46b176*/
  }
  v12 = Voxel::RenderFrame(v26); /*0x46b18c*/
  v13 = *(unsigned int *)(v23[0] + 172); /*0x46b19b*/
  v14 = 0; /*0x46b1a1*/
  qmemcpy(v25, v12, sizeof(v25)); /*0x46b1a3*/
  v15 = a6 & 0xFFFFFFEF; /*0x46b1b2*/
  if ( *(unsigned char *)(v13 + 759) ) /*0x46b1ac*/
  {
    v14 = dword_81AF00; /*0x46b1b9*/
    v15 = a6 & 0xFFFFDFEF | 0x2000; /*0x46b1bf*/
  }
  v16 = v25[1] + a3[1]; /*0x46b1dd*/
  v23[0] = v25[0] + *a3; /*0x46b1df*/
  v23[1] = v16; /*0x46b1e8*/
  v17 = *(unsigned int *)&stru_B054D0.m_1[3] + 4 * *(unsigned int *)(v13 + 724); /*0x46b1fe*/
  v21 = *(unsigned char *)(v13 + 759) != 0 ? 0 : 2;
  SHPFrame = (int *)BuildingClass::GetSHPFrame(*(BuildingClass **)(*(unsigned int *)v17 + 780), v15); /*0x46b226*/
  v18 = Miles::DriverGet(); /*0x46b234*/
  return BlitterDrawSHP( /*0x46b24d*/
           (int *)g_DSurface_Hidden_2->__pad_0,
           *(unsigned int *)(*(unsigned int *)v17 + 780),
           v18,
           &v25[2],
           v23,
           a4,
           0,
           SHPFrame,
           v14,
           v21,
           a7,
           0,
           0);
}

// ==== BACKFILL 0x0046B280  BulletClass::InitScalable  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int BulletClass::InitScalable() {
  int v2; // eax
  int v3; // edx

  if ( dword_89DE28 < dword_89DE20 /*0x46b2b7*/
    || (byte_89DE25 || !dword_89DE20)
    && dword_89DE2C > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_89DE18 + 8))(
         &dword_89DE18,
         dword_89DE20 + dword_89DE2C,
         0) )
  {
    v2 = dword_89DE28++; /*0x46b2c4*/
    *((unsigned int *)dword_89DE1C + v2) = this; /*0x46b2d3*/
  }
  v3 = dword_89DE28 - 5; /*0x46b2dc*/
  if ( dword_89DE28 - 5 < 0 ) /*0x46b2e1*/
    v3 = 0; /*0x46b2e3*/
// 0x46c840
  return BulletTypeClass::SetScaledSpawnDelay( /*0x46b307*/
           (BulletTypeClass *)this->BulletClass_field_0xAC,
           v3 / 3 + *((unsigned int *)this->BulletClass_field_0xAC + 185));
}

// ==== BACKFILL 0x0046B310  SuperWeapon::CreateNukePayload  cls=SuperWeapon  sig=csp  renamed_refs=0  residual=- ====
int BuildingClass::CreateNukePayload()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0046B310.json)
}

// ==== BACKFILL 0x0046B540  BulletClass::MissionStubReturnZero  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int BulletClass::MissionStubReturnZero()
{

  return 352; /*0x46b545*/

}

// ==== BACKFILL 0x0046B550  BulletClass::MissionStubReturnZero2  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int BulletClass::MissionStubReturnZero2()
{

  return 8; /*0x46b555*/

}

// ==== BACKFILL 0x0046B560  BulletClass::PowerDrainProcess  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int BulletClass::PowerDrainProcess(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x46b566*/
    return -2147467261; /*0x46b568*/
  *a2 = 237448649; /*0x46b576*/
  a2[1] = 298949647; /*0x46b57e*/
  a2[2] = -1610610249; /*0x46b587*/
  a2[3] = unk_7E96EC; /*0x46b590*/
  return 0; /*0x46b56d*/

}

// ==== BACKFILL 0x0046B5A0  BulletClass::CheckEndOfSequence  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int BulletClass::CheckEndOfSequence(int a1) {
  this->BulletClass_field_0x10C = (void *)a1; /*0x46b5a4*/
  return a1; /*0x46b5aa*/
}

// ==== BACKFILL 0x0046B5B0  BulletClass::CheckMissionAbort  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int BulletClass::CheckMissionAbort() {
  return (int)this->BulletClass_field_0xAC; /*0x46b5b6*/
}

// ==== BACKFILL 0x0046B5C0  BulletClass::CheckActionStatus  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
void* BulletClass::CheckActionStatus(int a2) {
  BulletClass::Dtor(this); /*0x46b5c3*/
  if ( (a2 & 1) != 0 ) /*0x46b5cd*/
    RA2_OPDEL(this); /*0x46b5d0*/
  return this; /*0x46b5da*/
}

// ==== BACKFILL 0x0046B610  VectorClass_ptr_BulletClass::GetItemIndex  cls=VectorClass_ptr_BulletClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_ptr_BulletClass::Get(int a2, void *a2_2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46B630)
}

// ==== BACKFILL 0x0046B960  BulletClass::AddVector3  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
void* BulletClass::AddVector3(void* a1) {
  *this = *a1 + *this; /*0x46b96a*/
  this->vtable2 = a1[1] + this->vtable2; /*0x46b972*/
  *(this + 2) = a1[2] + *(this + 2); /*0x46b97b*/
  return this; /*0x46b97e*/
}

// ==== BACKFILL 0x0046B990  VectorClass_ptr_BulletClass::GetItem  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG VectorClass_ptr_BulletClass::GetItem(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46B990)
}

// ==== BACKFILL 0x0046B9A0  VectorClass_ptr_BulletClass::GetItem_0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG VectorClass_ptr_BulletClass::GetItem_0(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46B9A0)
}

// ==== BACKFILL 0x0046C4F0  BulletTypeClass::GetROF  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * BulletTypeClass::GetROF(unsigned int * a1, int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0046C4F0.json)
}

// ==== BACKFILL 0x0046C6A0  BulletTypeClass::SaveLoad_Prefix  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BulletTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0046C6A0.json)
}

// ==== BACKFILL 0x0046C730  BulletTypeClass::SaveLoad_Prefix_0  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BulletTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, gamemd::ObjectTypeClass * aP1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0046C730.json)
}

// ==== BACKFILL 0x0046C750  BulletTypeClass::GetClassIdentifier  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BulletTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0046C750.json)
}

// ==== BACKFILL 0x0046C820  BulletTypeClass::GetWarhead  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BulletTypeClass::GetWarhead(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0046C820.json)
}

// ==== BACKFILL 0x0046C850  BulletTypeClass::GetTypeIdentifier  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BulletTypeClass::GetTypeIdentifier()
{

  return 9; /*0x46c855*/

}

// ==== BACKFILL 0x0046C860  BulletTypeClass::GetObjectSize  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BulletTypeClass::GetObjectSize()
{

  return 760; /*0x46c865*/

}

// ==== BACKFILL 0x0046C870  BulletTypeClass::Stub  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
char BulletTypeClass::Stub(int a1, int a2)
{

  return 0; /*0x46c872*/

}

// ==== BACKFILL 0x0046C880  BulletTypeClass::StubReturnFalse  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BulletTypeClass::StubReturnFalse(int a1)
{

  return 0; /*0x46c882*/

}

// ==== BACKFILL 0x0046C890  BulletTypeClass::ddtor  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
BulletTypeClass * BulletTypeClass::ddtor(char a2, int a1, int aP0, int aP1, int aP2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0046C890.json)
}

// ==== BACKFILL 0x0046CCD0  CampaignClass::GetMapData  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
char CampaignClass::GetMapData(uint8_t ***a2) {
    int Int_Overwrite; // eax
    int v4; // ecx
    char Destination[1024]; // [esp+8h] [ebp-400h] BYREF

    ((INIClass *)(INIClass *)a2)->ResetSection(); /*0x46cce3*/
    if ( !(uint8_t)((AbstractTypeClass *)(AbstractTypeClass *)this)->LoadFromINI((CCINIClass *)a2) ) /*0x46cceb*/
      return 0; /*0x46cdf7*/
    Int_Overwrite = ((INIClass *)/*0x46cd0c*/
                      (bool *)a2)->ReadInt_Overwrite((uint8_t *)&this->idxCd, (uint8_t *)((char *)&stru_81AF8C + 1), this->scenario[28]);
    v4 = this->description[28]; /*0x46cd11*/
    this->scenario[28] = Int_Overwrite; /*0x46cd17*/
    this->description[28] = ((INIClass *)/*0x46cd40*/
                              (INIClass *)a2)->GetBool((const char *)&this->idxCd, (const char *)((char *)&stru_81AF8C + 1), v4);
    ((INIClass *)/*0x46cd46*/
      (INIClass *)a2)->GetString((const char *)&this->idxCd, (const char *)&stru_81AF8C, (const char *)&this->scenario[29], (char *)&this->scenario[29], 512);
    _strupr((char *)&this->scenario[29]); /*0x46cd4c*/
    if ( (uint8_t)((INIClass *)/*0x46cd5e*/
                            (int *)a2)->ReadBool_Overwrite((uint8_t *)&this->idxCd, (uint8_t *)((char *)&stru_81AF8C + 17), 0) )
    {
      ((INIClass *)/*0x46cda3*/
        (INIClass *)a2)->GetString((const char *)&this->idxCd, (const char *)((char *)&stru_81AF8C + 5), 0, Destination, 1024);
      strcat(Destination, (char *)&stru_81AF8C + 8); /*0x46cdcf*/
      BulkCharToWide((unsigned short *)&this->description[29], (uint8_t *)Destination, -1); /*0x46cde2*/
    }
    else
    {
      ((INIClass *)/*0x46cd7b*/
        a2)->GetStringEx((void *)(uint8_t *)&this->idxCd, (void *)(uint8_t *)((char *)&stru_81AF8C + 5), (void *)(wchar_t *)&this->description[29], (unsigned int)0x80u);
    }
    return 1; /*0x46cd82*/
}

// ==== BACKFILL 0x0046CF80  CampaignClass::ddtor  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
int CampaignClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x46cf86*/
    return -2147467261; /*0x46cf88*/
  *a2 = -2439096; /*0x46cf96*/
  a2[1] = 298980631; /*0x46cf9e*/
  a2[2] = 1610642817; /*0x46cfa7*/
  a2[3] = unk_7E990C; /*0x46cfb0*/
  return 0; /*0x46cf8d*/

}

// ==== BACKFILL 0x0046CFC0  CampaignClass::Stat  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
int CampaignClass::Stat(int *a2) {
    ((AbstractTypeClass *)(AbstractTypeClass *)this)->ProcessPower((int)a2); /*0x46cfc9*/
    Power::TimerProcess(this->scenario[28]); /*0x46cfd7*/
    ((Checksum *)a2)->AddString((uint8_t *)&this->scenario[29]); /*0x46cfe5*/
    return Power::TimerProcess(this->description[28]); /*0x46cff8*/
}

// ==== BACKFILL 0x0046D000  CampaignClass::Write  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
int CampaignClass::Write(AbstractTypeClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0((gamemd::AbstractClass *)(aP0),(gamemd::AbstractClass *)(aP1)); /*0x46d00b*/
  if ( result >= 0 ) /*0x46d012*/
  {
    if ( aP0 ) /*0x46d016*/
    {
      ((AbstractTypeClass*)(int)aP0)->Init((int)&aP1); /*0x46d01f*/
      aP0->vtable1 = (void *)((unsigned int)(&vt_CampaignClass)); /*0x46d024*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_CampaignClass); /*0x46d02a*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_CampaignClass); /*0x46d031*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_CampaignClass); /*0x46d038*/
    }
    return 0; /*0x46d03f*/
  }
  return result; /*0x46d041*/

}

// ==== BACKFILL 0x0046D050  CampaignClass::Seek  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
int CampaignClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1), (gamemd::ObjectTypeClass *)aP2); /*0x46d05f*/
  if ( result >= 0 ) /*0x46d066*/
    return 0; /*0x46d068*/
  return result; /*0x46d06a*/

}

// ==== BACKFILL 0x0046D070  CampaignClass::StubReturn928  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
int CampaignClass::StubReturn928()
{

  return 928; /*0x46d075*/

}

// ==== BACKFILL 0x0046D080  CampaignClass::StubReturn10  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
int CampaignClass::StubReturn10()
{

  return 10; /*0x46d085*/

}

// ==== BACKFILL 0x0046D090  CampaignClass::DTOR  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
void ** CampaignClass::DTOR(char a2)
{

  int v3; // eax
  CampaignClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->vtable1 = &vt_CampaignClass; /*0x46d096*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_CampaignClass); /*0x46d09c*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_CampaignClass); /*0x46d0a3*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_CampaignClass); /*0x46d0aa*/
  AbstractClass::AnnounceExpiredPointer((gamemd::AbstractClass *)(this), 1); /*0x46d0b1*/
  v5 = (gamemd::CampaignClass *)(this); /*0x46d0c6*/
  v3 = (*(int (**)(unsigned int *, CampaignClass **))(dword_A83CF8 + 16))(&dword_A83CF8, &v5); /*0x46d0ca*/
  if ( v3 != -1 && v3 < dword_A83D08 && v3 < --dword_A83D08 ) /*0x46d0e5*/
  {
    do /*0x46d0fd*/
    {
      ++v3; /*0x46d0ed*/
      *((unsigned int *)dword_A83CFC + v3 - 1) = *((unsigned int *)dword_A83CFC + v3); /*0x46d0f1*/
    }
    while ( v3 < dword_A83D08 ); /*0x46d0fd*/
  }
  ((AbstractTypeClass *)((AbstractTypeClass *)this))->Dtor(); /*0x46d101*/
  if ( (a2 & 1) != 0 ) /*0x46d10b*/
    __3_YAXPAX_Z(this); /*0x46d10e*/
return (void **)this; /*0x46d118*/

}

// ==== BACKFILL 0x0046D330  MPCooperative::initGame  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
unsigned int * MPCooperative::initGame()
{

  this->MPCooperative_field_0x0 = &vt_CampaignScoreClass; /*0x46d334*/
  this->MPCooperative_field_0x4 = 0; /*0x46d33a*/
  dword_89E050 = 0; /*0x46d33d*/
  *((unsigned int *)((char *)&stru_81AF8C + 6)) = -1; /*0x46d343*/
  return &this->MPCooperative_field_0x0; /*0x46d34d*/

}

// ==== BACKFILL 0x0046D350  sub_46D350  cls=CampaignScore  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_46D350::sub_46D350()
{

  this->m_0 = (int)&vt_CampaignScoreClass; /*0x46d350*/

}

// ==== BACKFILL 0x0046D490  sub_46D490  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_46D490::sub_46D490()
{

  return *((unsigned char *)&g_GameModeOptionState + (unsigned int)this); /*0x46d496*/

}

// ==== BACKFILL 0x0046D810  sub_46D810  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_46D810()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46D810)
}
