// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00430580  nullsub_97  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_97(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  ; /*0x430580*/
}

// ==== BACKFILL 0x00430590  sub_430590  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_430590::sub_430590(int a2, int a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00430590.json)
}

// ==== BACKFILL 0x004305E0  sub_4305E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_4305E0::sub_4305E0(char a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004305E0.json)
}

// ==== BACKFILL 0x00430610  sub_430610  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_430610::sub_430610()
{

  LOBYTE(((unsigned int *)this)[0]) &= ~1u; /*0x430610*/

}

// ==== BACKFILL 0x004309D0  CCFileClass::Create  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
void CCFileClass::Create() {
}

// ==== BACKFILL 0x00430AC0  RenderAlliedBuildingTags  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_430AC0::RenderAlliedBuildingTags(int a2, int a3, int a4, int a5, int a6) {

  int result; // eax
  ObjectClass *v7; // edi
  int vtable0; // esi
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  result = this->customSound_controller[4]; /*0x430ac0*/
  if ( result ) /*0x430acc*/
  {
    v7 = this; /*0x430ada*/
    v10 = 8; /*0x430adc*/
    do /*0x430b84*/
    {
      v9 = 3; /*0x430ae4*/
      do /*0x430b75*/
      {
        vtable0 = (int)v7->AbstractClass; /*0x430aec*/
        if ( v7->AbstractClass /*0x430b3b*/
          && (*(unsigned char *)(vtable0 + 12) & 1) != 0
          && (uint8_t)HouseClass::IsAllied((HouseClass *)dword_A83D4C, *(unsigned int *)(vtable0 + 272))
          && (uint8_t)HouseClass::IsAlliedWith(
                                *((void **)((char *)&stru_A80220) + *(unsigned int *)(vtable0 + 272)),
                                (void *)dword_A83D4C)
          && !*(unsigned char *)(*((unsigned int *)((char *)&stru_A80220) + *(unsigned int *)(vtable0 + 272)) + 501) )
        {
          RenderBuildingTag(vtable0, a2, a3, a4, a5, a6); /*0x430b64*/
        }
        v7 = (ObjectClass *)((char *)v7 + 4); /*0x430b6d*/
        --v9; /*0x430b71*/
      }
      while ( v9 ); /*0x430b75*/
      result = --v10; /*0x430b7f*/
    }
    while ( v10 ); /*0x430b84*/
  }
  return result; /*0x430b8a*/

}

// ==== BACKFILL 0x00430F30  MapClass::isCellAccessible  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
char MapClass::isCellAccessible(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00430F30.json)
}

// ==== BACKFILL 0x00430F60  sub_430F60  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_430F60(unsigned int * a1)
{
  *a1 = 0; /*0x430f68*/
  a1[1] = 0; /*0x430f6a*/
  return a1; /*0x430f6d*/
}

// ==== BACKFILL 0x00431700  HouseClass::Render  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::Render(int a1, int a2, int a3, int a4, int a5)
{
    (void)a1; (void)a2; (void)a3; (void)a4; (void)a5; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00431700.json)
}

// ==== BACKFILL 0x00431920  sub_431920  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_431920::sub_431920()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00431920.json)
}

// ==== BACKFILL 0x00431930  sub_431930  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_431930::sub_431930(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00431930.json)
}

// ==== BACKFILL 0x00431D90  sub_431D90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_431D90::sub_431D90()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00431D90.json)
}

// ==== BACKFILL 0x00431E80  CCFileClass::SetName  cls=BufferIOFileClass  sig=csp  renamed_refs=0  residual=- ====
void* FileClass::SetName(void* a1) {
  return nullptr;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00431F30  BufferIOFileClass::Read  cls=BufferIOFileClass  sig=csp  renamed_refs=0  residual=- ====
bool BufferIOFileClass::Read() {

  BOOL v1; // eax

  if ( BYTE1(this->BufferOffset) && BYTE1(this->BufferSize) ) /*0x431f37*/
    LOBYTE(v1) = 1; /*0x431f3e*/
  else
    return *(unsigned int *)((unsigned int *)this)[0] != -1; /*0x431f49*/
  return v1; /*0x431f40*/

}

// ==== BACKFILL 0x00431F50  BufferIOFileClass::Write  cls=BufferIOFileClass  sig=csp  renamed_refs=0  residual=- ====
BOOL BufferIOFileClass::Write(int a2, const CHAR *a3) {
  return 0;  /* G42.33b2 restub: R2 trailing-this param spliced into header; truth func_0x00431F50.json */
}

// ==== BACKFILL 0x004324B0  BufferIOFileClass::SeekInternal  cls=BufferIOFileClass  sig=csp  renamed_refs=0  residual=- ====
int BufferIOFileClass::SeekInternal() {
  return 0;  /* G42.33b2 restub: R2 receiver+params spliced into header; truth func_0x004324B0.json */
}

// ==== BACKFILL 0x004325A0  BufferIOFileClass::SetSize  cls=BufferIOFileClass  sig=csp  renamed_refs=0  residual=- ====
int BufferIOFileClass::SetSize() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x4325A0.json */
}

// ==== BACKFILL 0x00432BD0  BinkMovieHandle::Check  cls=BinkMovieHandle  sig=csp  renamed_refs=0  residual=- ====
int BinkMovieHandle::Check(int a2)
{

  int result; // eax

  result = BinkGoto(this->tempPath, a2, 1); /*0x432bde*/
  this->memoryBuffer = 0; /*0x432be4*/
  return result; /*0x432beb*/

}

// ==== BACKFILL 0x00432C10  COMStub_432C10  cls=WeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_432C10::COMStub_432C10(int a2) {

  AbstractClass *NeedsSaveOrLink; // ecx
  int result; // eax

  NeedsSaveOrLink = (AbstractClass *)((unsigned int *)this)[0]; /*0x432c10*/
  if ( NeedsSaveOrLink ) /*0x432c15*/
    return AbstractClass::getTotalValue(NeedsSaveOrLink, a2); /*0x432c1c*/
  return result; /*0x432c21*/

}

// ==== BACKFILL 0x00433C80  sub_433C80  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
short E4Recv_433C80::sub_433C80(short a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00433C80.json)
}

// ==== BACKFILL 0x00433CE0  sub_433CE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_433CE0::sub_433CE0(char a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00433CE0.json)
}

// ==== BACKFILL 0x00433F50  MessageListClass::CountCharsInWidth  cls=MessageListClass  sig=csp  renamed_refs=0  residual=- ====
int MessageListClass::CountCharsInWidth(void* a1, int a2, int a3, int a4) {
  return 0;  /* G42.33b2 restub: RectangleStruct[] index + void derefs */
}

// ==== BACKFILL 0x00434100  sub_434100  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_434100::sub_434100(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00434100.json)
}

// ==== BACKFILL 0x00434700  sub_434700  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned char * E4Recv_434700::sub_434700()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00434700.json)
}

// ==== BACKFILL 0x00434840  sub_434840  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_434840(unsigned int * a1, unsigned int * a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00434840.json)
}

// ==== BACKFILL 0x004349F0  sub_4349F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL E4Recv_4349F0::sub_4349F0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004349F0.json)
}

// ==== BACKFILL 0x00434B40  sub_434B40  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_434B40(AbstractClass * aP0, int * a1, unsigned short aP1, int xLeft, int yTop)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00434B40.json)
}

// ==== BACKFILL 0x00434BF0  sub_434BF0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_434BF0(int a1, int * a2, unsigned short * a3, int xLeft, int yTop, int a6)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00434BF0.json)
}

// ==== BACKFILL 0x00435340  sub_435340  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_435340(int a1, int a2, unsigned short * a3, int a4, int yTop, int a6, int a7, char a8, int a9, int a10)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00435340.json)
}

// ==== BACKFILL 0x004353F0  sub_4353F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_4353F0(int a1, int a2, unsigned short * a3, int a4, int yTop, int a6, int a7, char a8, int a9, int a10)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004353F0.json)
}

// ==== BACKFILL 0x004355D0  PackRGB565  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int PackRGB565(int a1, int a2, int a3)
{
  return (a1 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x43560b*/
       | (a2 >> g_BitMask_Blue << g_BitMask_Green)
       | (a3 >> g_BitMask_Red << g_BitShift_Blue);
}

// ==== BACKFILL 0x00435BE0  BuildingLightClass::Draw_Start  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::Draw_Start(int a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00435BE0.json)
}

// ==== BACKFILL 0x00436900  BuildingLightClass::SD_vt12  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::SD_vt12()
{

  return 232; /*0x436905*/

}

// ==== BACKFILL 0x00436910  BuildingLightClass::SD_vt03  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::SD_vt03(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x436916*/
    return -2147467261; /*0x436918*/
  *a2 = 1417814616; /*0x436926*/
  a2[1] = 298965160; /*0x43692e*/
  a2[2] = 1610638004; /*0x436937*/
  a2[3] = unk_7E973C; /*0x436940*/
  return 0; /*0x43691d*/

}

// ==== BACKFILL 0x00436950  BuildingLightClass::SD_vt05  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::SD_vt05(void* a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00436950.json)
}

// ==== BACKFILL 0x004369C0  BuildingLightClass::SD_vt06  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x4369d4*/

}

// ==== BACKFILL 0x004369E0  BuildingLightClass::SD_vt34  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::SD_vt34()
{

  return 0; /*0x4369e2*/

}

// ==== BACKFILL 0x004369F0  BuildingLightClass::SD_vt30  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::SD_vt30()
{

  return 3; /*0x4369f5*/

}

// ==== BACKFILL 0x00436A00  BuildingLightClass::SD_vt10  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::SD_vt10(int a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00436A00.json)
}

// ==== BACKFILL 0x00436DA0  sub_436DA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
double E4Recv_436DA0::sub_436DA0()
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00436DA0.json)
}

// ==== BACKFILL 0x00436E80  BuildingLightClass::CalculateDistanceIntensity  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::CalculateDistanceIntensity()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00436E80.json)
}

// ==== BACKFILL 0x00436F40  BuildingLightClass::SD_vt13  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::SD_vt13(void* a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00436F40.json)
}

// ==== BACKFILL 0x00437030  BuildingLightClass::SD_vt53  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::SD_vt53()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00437030.json)
}

// ==== BACKFILL 0x00437050  BuildingLightClass::SD_vt54  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::SD_vt54(int a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00437050.json)
}

// ==== BACKFILL 0x004370B0  BuildingLightClass::SD_vt11  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::SD_vt11()
{

  return 19; /*0x4370b5*/

}

// ==== BACKFILL 0x004370C0  BuildingLightClass::SDDTOR  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
BuildingLightClass * BuildingLightClass::SDDTOR(char a2, int a1, int aP0, int aP2)
{

  int v3; // eax
  BuildingLightClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->vtable1 =(void *)(int)&vt_BuildingLightClass; /*0x4370c4*/
  this->vtable1 =(void *)(int)&vt_BuildingLightClass; /*0x4370ca*/
  this->vtable2 =(void *)(int)&vt_BuildingLightClass; /*0x4370d1*/
  this->vtable3 =(void *)(int)&vt_BuildingLightClass; /*0x4370d8*/
  if ( (uint8_t)((ObjectClass *)(this))->Undeploy() ) /*0x4370df*/
    ((VectorClass *)((DynamicVectorClass *)&dword_87F778))->RemoveItem((int)this); /*0x4370ee*/
  v5 = (gamemd::BuildingLightClass *)(this); /*0x437103*/
  v3 = (*(int (**)(int *, BuildingLightClass **))(dword_8B4190 + 16))((int *)&dword_8B4190, &v5); /*0x437107*/
  if ( v3 != -1 && v3 < dword_8B41A0 && v3 < --dword_8B41A0 ) /*0x437122*/
  {
    do /*0x43713a*/
    {
      ++v3; /*0x43712a*/
      *((unsigned int *)dword_8B4194 + v3 - 1) = *((unsigned int *)dword_8B4194 + v3); /*0x43712e*/
    }
    while ( v3 < dword_8B41A0 ); /*0x43713a*/
  }
  ((ObjectClass *)(this))->Dtor(); /*0x43713e*/
  if ( (a2 & 1) != 0 ) /*0x437148*/
    __3_YAXPAX_Z(this); /*0x43714b*/
  return this; /*0x437155*/

}

// ==== BACKFILL 0x004371D0  Helper::ProcessData  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char Helper::ProcessData(void ** a1, int a2, int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4371D0)
}

// ==== BACKFILL 0x00437290  sub_437290  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_437290(int * a1, int a2, int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00437290.json)
}

// ==== BACKFILL 0x00437350  BlitterCopySimpleSHP  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char BlitterCopySimpleSHP(XSurface * aP0, XSurface * aP1, int aP2, int arg4, int *a4, int aP7, int aP8, int a8, int a9)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00437350.json)
}

// ==== BACKFILL 0x004389B0  ObjectClass::CleanupAudioAndRefs  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::CleanupAudioAndRefs() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x4389B0.json */
}

// ==== BACKFILL 0x004389F0  BombClass::IsDeathBomb  cls=BombClass  sig=csp  renamed_refs=0  residual=- ====
int BombClass::IsDeathBomb()
{

  return (&this->audioController)[0]; /*0x4389f3*/

}

// ==== BACKFILL 0x00438A60  ??0Iostream_init_QAE_XZ_1  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
Iostream_init * E4Recv_438A60::__0Iostream_init_QAE_XZ_1()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x438A60)
}

// ==== BACKFILL 0x00438B00  BombClass::ddtor  cls=BombClass  sig=csp  renamed_refs=0  residual=- ====
int BombClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x438b06*/
    return -2147467261; /*0x438b08*/
  *a2 = 108652931; /*0x438b16*/
  a2[1] = 299085213; /*0x438b1e*/
  a2[2] = 268441278; /*0x438b27*/
  a2[3] = unk_7E98BC; /*0x438b30*/
  return 0; /*0x438b0d*/

}

// ==== BACKFILL 0x00438B40  BombClass::Write  cls=BombClass  sig=csp  renamed_refs=0  residual=- ====
int BombClass::Write(int a2, int aP0, int aP1, int a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x438B40)
}

// ==== BACKFILL 0x00438BD0  BombClass::Seek  cls=BombClass  sig=csp  renamed_refs=0  residual=- ====
int BombClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x438be4*/

}

// ==== BACKFILL 0x00439080  TechnoClass::checkRange  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::checkRange(int a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00439150  AbstractClass::processDetection  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::processDetection(int aP1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x439150.json */
}

// ==== BACKFILL 0x004393D0  BombClass::StubReturn92  cls=BombClass  sig=csp  renamed_refs=0  residual=- ====
int BombClass::StubReturn92() const { return 92; }

// ==== BACKFILL 0x004393E0  BombClass::StubReturn68  cls=BombClass  sig=csp  renamed_refs=0  residual=- ====
int BombClass::StubReturn68() const { return 68; }

// ==== BACKFILL 0x004393F0  BombClass::CopyTo  cls=BombClass  sig=csp  renamed_refs=0  residual=- ====
BombClass * BombClass::CopyTo(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4393F0)
}

// ==== BACKFILL 0x004399E0  VoxelAnimClass::QuaternionToMatrix  cls=VoxelAnimClass  sig=csp  renamed_refs=0  residual=- ====
float * VoxelAnimClass::QuaternionToMatrix(float * a2, void *a2_2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004399E0.json)
}

// ==== BACKFILL 0x00439A10  JumpjetLocomotionClass::ComputeVectorLengthMetric  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
double JumpjetLocomotionClass::ComputeVectorLengthMetric()
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00439A10.json)
}

// ==== BACKFILL 0x0043A500  COM::GetClassID  cls=NeuronClass  sig=csp  renamed_refs=0  residual=- ====
int COM::GetClassID(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x43a506*/
    return -2147467261; /*0x43a508*/
  *a2 = 605729558; /*0x43a516*/
  a2[1] = 298994933; /*0x43a51e*/
  a2[2] = 268445372; /*0x43a527*/
  a2[3] = unk_7E998C; /*0x43a530*/
  return 0; /*0x43a50d*/

}

// ==== BACKFILL 0x0043A670  sub_43A670  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_43A670::sub_43A670()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0043A670.json)
}

// ==== BACKFILL 0x0043A6B0  sub_43A6B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_43A6B0::sub_43A6B0(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0043A6B0.json)
}

// ==== BACKFILL 0x0043A770  sub_43A770  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_43A770::sub_43A770(unsigned int * a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0043A770.json)
}

// ==== BACKFILL 0x0043AD00  Buffer::Init  cls=Buffer  sig=csp  renamed_refs=0  residual=- ====
_DWORD * Buffer::Init(int a2, int Size, int aP2, int a3, int aP1)
{

  this->Buffer_field_00 = (unsigned int)(a2);
  this->Buffer_field_04 = (unsigned int)(aP2);
  LOBYTE(this->Buffer_field_08) = 0; /*0x43ad12*/
  if ( !a2 && aP2 > 0 ) /*0x43ad1a*/
  {
    this->Buffer_field_00 = (unsigned int)(__2_YAPAXI_Z((unsigned int)(aP2))); /*0x43ad25*/
    LOBYTE(this->Buffer_field_08) = 1; /*0x43ad27*/
  }
  return &this->Buffer_field_00; /*0x43ad2d*/

}

// ==== BACKFILL 0x0043ADC0  INIClass::loadFile  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
void* INIClass::loadFile(int a1) {
  return nullptr;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0043ADF0  sub_43ADF0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_43ADF0::sub_43ADF0(unsigned int * a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0043ADF0.json)
}

// ==== BACKFILL 0x0043AE50  Vector::Clear  cls=Vector  sig=csp  renamed_refs=0  residual=- ====
int Vector::Clear()
{

  int result; // eax

  LOBYTE(result) = *((unsigned char *)this + 8); /*0x43ae53*/
  if ( (unsigned char)result ) /*0x43ae58*/
    __3_YAXPAX_Z(*(void **)this); /*0x43ae5d*/
  *(unsigned int *)this = 0; /*0x43ae65*/
  *((unsigned int *)this + 1) = 0; /*0x43ae6b*/
  *((unsigned char *)this + 8) = 0; /*0x43ae72*/
  return result; /*0x43ae76*/

}

// ==== BACKFILL 0x0043AF10  sub_43AF10  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_43AF10::sub_43AF10()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0043AF10.json)
}

// ==== BACKFILL 0x0043B680  BuildingClass::ctor  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
void* BuildingClass::ctor(int a1)
{
    (void)a1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0043B680.json)
}

// ==== BACKFILL 0x0043EE50  sub_43EE50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_43EE50::sub_43EE50()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0043EE50.json)
}
