// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x007631F0  WaveClass::GetTypeIdentifier  cls=WaveClass  sig=csp  renamed_refs=0  residual=- ====
int WaveClass::GetTypeIdentifier()
{

  return 43; /*0x7631f5*/

}

// ==== BACKFILL 0x00763200  WaveClass::ddtor  cls=WaveClass  sig=csp  renamed_refs=0  residual=- ====
WaveClass * WaveClass::ddtor(char a2, int aP1, int a1, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x763200)
}

// ==== BACKFILL 0x00763610  Waypoint::To_String  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * Waypoint::To_String(int aP0)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x763610)
}

// ==== BACKFILL 0x00763700  sub_763700  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_763700(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00763700.json)
}

// ==== BACKFILL 0x00763720  nullsub_84  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void ObjectClass::nullsub_84()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x763720)
}

// ==== BACKFILL 0x00763C00  WaypointPathClass::PowerDrainUpdate  cls=WaypointPathClass  sig=csp  renamed_refs=0  residual=- ====
int WaypointPathClass::PowerDrainUpdate(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x763C00)
}

// ==== BACKFILL 0x00763C30  WaypointPathClass::ddtor  cls=WaypointPathClass  sig=csp  renamed_refs=0  residual=- ====
int WaypointPathClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x763c36*/
    return -2147467261; /*0x763c38*/
  *a2 = -147774022; /*0x763c46*/
  a2[1] = 298979412; /*0x763c4e*/
  a2[2] = 1610642049; /*0x763c57*/
  a2[3] = unk_7E985C; /*0x763c60*/
  return 0; /*0x763c3d*/

}

// ==== BACKFILL 0x00763D90  WaypointPathClass::SaveState  cls=WaypointPathClass  sig=csp  renamed_refs=0  residual=- ====
int WaypointPathClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x763D90)
}

// ==== BACKFILL 0x00763E00  WaypointPathClass::StubReturn64  cls=WaypointPathClass  sig=csp  renamed_refs=0  residual=- ====
int WaypointPathClass::StubReturn64()
{

  return 64; /*0x763e05*/

}

// ==== BACKFILL 0x00763E10  WaypointPathClass::StubReturn51  cls=WaypointPathClass  sig=csp  renamed_refs=0  residual=- ====
int WaypointPathClass::StubReturn51()
{

  return 51; /*0x763e15*/

}

// ==== BACKFILL 0x00763E20  WaypointPathClass::ProcessEvent  cls=WaypointPathClass  sig=csp  renamed_refs=0  residual=- ====
WaypointPathClass * WaypointPathClass::ProcessEvent(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x763E20)
}

// ==== BACKFILL 0x00763EF0  AbstractClass::checkSuperWeaponStatus  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::checkSuperWeaponStatus() {
}

// ==== BACKFILL 0x00763F30  AbstractClass::updateSuperWeaponTimer  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::updateSuperWeaponTimer(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x763f30.json */
}

// ==== BACKFILL 0x00764B30  Audio_Create  cls=rc_ptr  sig=csp  renamed_refs=0  residual=- ====
rc_ptr * Audio_Create(rc_ptr_base * a1, const char ** a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x764B30)
}

// ==== BACKFILL 0x00764FF0  sub_764FF0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_764FF0(ScoreScreen * aP1)
{
    (void)aP1; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00764FF0.json)
}

// ==== BACKFILL 0x00765380  FindWDTTerritoryClass_Find  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_765380(unsigned int * a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00765380.json)
}

// ==== BACKFILL 0x00765410  Team_Start_765410  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char* Gap2Recv_765410::Team_Start_765410(INIClass * aP1) {

  char *result; // eax
  void *v4; // [esp+4h] [ebp-F4h] BYREF
  void *v5[4]; // [esp+8h] [ebp-F0h] BYREF
  unsigned int v6[3]; // [esp+18h] [ebp-E0h] BYREF
  unsigned int v7[6]; // [esp+24h] [ebp-D4h] BYREF
  char v8; // [esp+3Ch] [ebp-BCh]
  int v9; // [esp+40h] [ebp-B8h]
  int v10; // [esp+44h] [ebp-B4h]
  unsigned int v11[22]; // [esp+48h] [ebp-B0h] BYREF
  unsigned int v12[22]; // [esp+A0h] [ebp-58h] BYREF

  result = aP1; /*0x765410*/
  if ( *(char **)((char *)this + 68) != aP1 ) /*0x765420*/
  {
    *((unsigned int *)this + 17) = aP1; /*0x76542d*/
    v5[1] = 0; /*0x765430*/
    v5[2] = 0; /*0x765434*/
    GenericNode::Constructor(v6); /*0x765438*/
    GenericNode::Constructor(v7); /*0x765441*/
    LinkedList::Prepend(v6, (int)v7); /*0x765457*/
    v5[3] = &g_var_a3009f; /*0x765460*/
    memset(&v7[3], 0, 12); /*0x765468*/
    v8 = 0; /*0x765474*/
    v9 = 0; /*0x765478*/
    v10 = 0; /*0x76547c*/
    v5[0] = &g_ptr_7EA5F4; /*0x765480*/
    BufferIOFile::Init(v11); /*0x765488*/
    CCFileClass::Reopen(v11, g_Str_File_WDTHist_ini, 1); /*0x765498*/
    if ( !File::IsReady(v11, 0) ) /*0x7654a2*/
    {
      FileClass::Close(v11); /*0x7654af*/
      CCFileClass::Close(v11); /*0x7654b8*/
      CCFileClass::Reopen(v11, g_Str_File_WDTHist_ini, 1); /*0x7654c8*/
    }
    FileStraw::Open(v5, (int)v11, 0); /*0x7654d7*/
    CCFileClass::Close(v11); /*0x7654e0*/
    v11[0] = &off_7E1668; /*0x7654e9*/
    BufferIOFileClass::Dtor(v11); /*0x7654f1*/
    String::Assign((char **)&v4, aPlayerfaction); /*0x7654ff*/
    INIClass::SetIntFormat((char *)v5, (char **)((char *)this + 72), (char **)&v4, *((unsigned int *)this + 17), 0); /*0x765516*/
    DeleteAndZero(&v4); /*0x76551f*/
    BufferIOFile::Init(v12); /*0x76552b*/
    CCFileClass::Reopen(v12, g_Str_File_WDTHist_ini, 2); /*0x76553e*/
    INIClass::SaveToPipe(v5, (int)v12); /*0x76554f*/
    v12[0] = &off_7E1668; /*0x76555b*/
    BufferIOFileClass::Dtor(v12); /*0x765566*/
    return HashTable::DestroyHashTableINIClass(v5); /*0x76556f*/
  }
  return result; /*0x765575*/

}

// ==== BACKFILL 0x00765580  sub_765580  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_765580(unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00765580.json)
}

// ==== BACKFILL 0x00765710  Campaign_WorldDominationTour_16::Constructor  cls=Campaign_WorldDominationTour  sig=csp  renamed_refs=0  residual=- ====
rc_ptr * rc_ptr::Constructor(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00765710.json)
}

// ==== BACKFILL 0x00765740  Campaign_WorldDominationTour_16::Constructor_0  cls=Campaign_WorldDominationTour  sig=csp  renamed_refs=0  residual=- ====
rc_ptr * rc_ptr::Constructor_0(unsigned int * Block, char a2, void *a3_1)
{
    (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00765740.json)
}

// ==== BACKFILL 0x00765790  COMClass::invokeMethod  cls=COMClass  sig=csp  renamed_refs=0  residual=- ====
void* COMClass::invokeMethod(int a2) {
  *(unsigned int *)this->__pad_0 = (void *)&rc_ptr_WorldDominationTour_Campaign_vftable; /*0x765793*/
  ComPtr::Release((ComPtr *)this); /*0x765799*/
  if ( (a2 & 1) != 0 ) /*0x7657a3*/
    RA2_OPDEL(this); /*0x7657a6*/
  return this->__pad_0; /*0x7657b0*/
}

// ==== BACKFILL 0x007657C0  COMClass::getTypeInfo  cls=COMClass  sig=csp  renamed_refs=0  residual=- ====
void* COMClass::getTypeInfo(int a2) {
  *(unsigned int *)this->__pad_0 = (void *)&rc_ptr_WorldDominationTour_State_vftable; /*0x7657c3*/
  ComPtr::Release((ComPtr *)this); /*0x7657c9*/
  if ( (a2 & 1) != 0 ) /*0x7657d3*/
    RA2_OPDEL(this); /*0x7657d6*/
  return this->__pad_0; /*0x7657e0*/
}

// ==== BACKFILL 0x00765C70  COMClass::releaseInterface  cls=COMClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * COMClass::releaseInterface() {
    ((ComPtr*)(ComPtr *)this)->Constructor(); /*0x765c73*/
    *(unsigned int *)this->__pad_0 = 0; /*0x765c78*/
    return this->__pad_0; /*0x765c80*/
}

// ==== BACKFILL 0x00765C90  Team_Create_765C90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_765C90::Team_Create_765C90(int a2, void* a3) {

  int v3; // esi
  ComPtr *v5; // edi
  int *v7; // eax
  void *v8; // ebx
  ComPtr *v9; // edi

  v3 = a2; /*0x765c93*/
  ((unsigned int *)this)[0] = 0; /*0x765c9c*/
  ((unsigned int *)this)[0] = (void *)a2; /*0x765ca3*/
  LOBYTE(((unsigned int *)this)[0]) = 1; /*0x765ca6*/
  BYTE1(((unsigned int *)this)[0]) = 0; /*0x765caa*/
  /* X11: ptr_0 install elided (implicit via VectorClassrc_ptr virtuals 0x765cae) */
  if ( !a2 ) /*0x765cb5*/
    return this; /*0x765cb5*/
  if ( !a3 ) /*0x765cc1*/
  {
    v7 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x765cfb*/
    if ( v7 ) /*0x765d05*/
    {
      *v7 = a2; /*0x765d07*/
      v8 = v7 + 1; /*0x765d09*/
      v9 = (ComPtr *)(v7 + 1); /*0x765d0f*/
      if ( a2 - 1 >= 0 ) /*0x765d13*/
      {
        do /*0x765d29*/
        {
          ComPtr::Constructor(v9); /*0x765d1a*/
          *(unsigned int *)v9->__pad_0 = &g_var_5878c0; /*0x765d1f*/
          v9 = (ComPtr *)((char *)v9 + 8); /*0x765d25*/
          --v3; /*0x765d28*/
        }
        while ( v3 ); /*0x765d29*/
        ((unsigned int *)this)[0] = v8; /*0x765d2c*/
        BYTE1(((unsigned int *)this)[0]) = 1; /*0x765d2f*/
        return this; /*0x765d38*/
      }
    }
    else
    {
      v8 = 0; /*0x765d3b*/
    }
    ((unsigned int *)this)[0] = v8; /*0x765d3d*/
    BYTE1(((unsigned int *)this)[0]) = 1; /*0x765d40*/
    return this; /*0x765d45*/
  }
  *a3 = a2; /*0x765cc3*/
  v5 = (ComPtr *)(a3 + 1); /*0x765ccb*/
  if ( a2 - 1 >= 0 ) /*0x765ccf*/
  {
    do /*0x765ce5*/
    {
      ComPtr::Constructor(v5); /*0x765cd6*/
      *(unsigned int *)v5->__pad_0 = &g_var_5878c0; /*0x765cdb*/
      v5 = (ComPtr *)((char *)v5 + 8); /*0x765ce1*/
      --v3; /*0x765ce4*/
    }
    while ( v3 ); /*0x765ce5*/
  }
  ((unsigned int *)this)[0] = a3 + 1; /*0x765ce8*/
  return this; /*0x765ce7*/

}

// ==== BACKFILL 0x00765F60  Team_Create_765F60  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
rc_ptr_base * Team_Create_765F60(rc_ptr_base * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x765F60)
}

// ==== BACKFILL 0x00766060  FindWDTTerritoryClass_Find_Find  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_766060::sub_766060()
{

  unsigned int *ptr_C; // eax

  ptr_C = (unsigned int *)(((unsigned int *)this)[0]); /*0x766060*/
  if ( ptr_C ) /*0x766065*/
    return ptr_C[2]; /*0x766067*/
  else
    return 0; /*0x76606b*/

}

// ==== BACKFILL 0x00766880  System_Init_766880  cls=rc_ptr  sig=csp  renamed_refs=0  residual=- ====
rc_ptr * System_Init_766880(rc_ptr_base * a1, int a2, int a3, void * a4, ObjectClass * aP4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x766880)
}

// ==== BACKFILL 0x00766960  Conflict_WorldDominationTour_12::Constructor  cls=Conflict_WorldDominationTour  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Conflict_WorldDominationTour_12::Constructor(char Block)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x766960)
}

// ==== BACKFILL 0x00766990  Conflict_WorldDominationTour_12::Constructor_0  cls=Conflict_WorldDominationTour  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Conflict_WorldDominationTour_12::Constructor_0(char Block)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x766990)
}

// ==== BACKFILL 0x007669C0  COMClass::connectPoint  cls=COMClass  sig=csp  renamed_refs=0  residual=- ====
void* COMClass::connectPoint(int a2) {
  *(unsigned int *)this->__pad_0 = (void *)&rc_ptr_WorldDominationTour_MapSizeGameOption_vftable; /*0x7669c3*/
  ComPtr::Release((ComPtr *)this); /*0x7669c9*/
  if ( (a2 & 1) != 0 ) /*0x7669d3*/
    RA2_OPDEL(this); /*0x7669d6*/
  return this->__pad_0; /*0x7669e0*/
}

// ==== BACKFILL 0x00766A10  System_Init_766A10  cls=GameOption@WorldDominationTour  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_766A10::System_Init_766A10(int a2, int arg4, void * a3, ObjectClass * aP4) {

  int v6; // ecx

  v6 = aP4; /*0x766a1b*/
  *((unsigned int *)this + 2) = a2; /*0x766a1f*/
  *((unsigned int *)this + 3) = v6; /*0x766a26*/
  *((unsigned int *)this + 1) = 0; /*0x766a2d*/
  /* X11: ptr_0 install elided (implicit via GameOption virtuals 0x766a34) */
  *((unsigned int *)this + 4) = arg4; /*0x766a3a*/
  String::AssignFromPtr((char **)this + 5, (const char **)&a3); /*0x766a3d*/
  /* X11: ptr_0 install elided (implicit via WorldDominationTourValueGameOption virtuals 0x766a46) */
  DeleteAndZero(&a3); /*0x766a4c*/
  return this; /*0x766a53*/

}

// ==== BACKFILL 0x00766D30  Conflict_WorldDominationTour_12::ddtor  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int Conflict_WorldDominationTour_12::ddtor()
{

  int (***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (****)(unsigned int, int))((char *)this + 4); /*0x766d36*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x766d3d*/
  {
    result = (**v2)((unsigned int)v2, 3); /*0x766d4a*/
    *((unsigned int *)this + 1) = 0; /*0x766d4c*/
  }
  *((unsigned char *)this + 13) = 0; /*0x766d4f*/
  *((unsigned int *)this + 2) = 0; /*0x766d52*/
  return result; /*0x766d55*/

}

// ==== BACKFILL 0x00766EE0  System_Init_766EE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_766EE0::System_Init_766EE0(int aP1) {

  void *ptr_8; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax

  ptr_8 = ((unsigned int *)this)[0]; /*0x766ee3*/
  if ( ((unsigned int *)this)[0] >= (int)ptr_8 ) /*0x766eeb*/
  {
    if ( !BYTE1(((unsigned int *)this)[0]) && ptr_8 ) /*0x766ef6*/
      return 0; /*0x766ef6*/
    abstractFlags = ((unsigned int *)this)[0]; /*0x766ef8*/
    if ( abstractFlags <= 0 /*0x766f08*/
      || !(*((uint8_t (**)(ObjectClass *, int, unsigned int))this->ptr_4 + 2))(
            this,
            (int)ptr_8 + abstractFlags,
            0) )
    {
      return 0; /*0x766f0f*/
    }
  }
  uniqueId = ((unsigned int *)this)[0]; /*0x766f15*/
  ((unsigned int *)this)[0] = uniqueId + 1; /*0x766f1f*/
  ComPtr::Set((ComPtr *)((char *)((unsigned int *)this)[0] + 8 * uniqueId), *(unsigned int *)(aP1 + 4)); /*0x766f2c*/
  return 1; /*0x766f11*/

}

// ==== BACKFILL 0x00766F70  System_Init_766F70  cls=rc_ptr  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_766F70::System_Init_766F70(int a2) {

  ComPtr::Constructor((ComPtr *)this); /*0x766f73*/
  /* X11: ptr_0 install elided (implicit via rc_ptr virtuals 0x766f7c) */
  ComPtr::Set((ComPtr *)this, *(unsigned int *)(a2 + 4)); /*0x766f88*/
  return this; /*0x766f8f*/

}

// ==== BACKFILL 0x007670D0  Conflict_WorldDominationTour_12::Constructor_3  cls=Conflict_WorldDominationTour  sig=csp  renamed_refs=0  residual=- ====
int Conflict_WorldDominationTour_12::Constructor_3(void *a1_1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7670D0)
}

// ==== BACKFILL 0x00767310  Network_Connect_767310  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_767310(int a1)
{
  return 0; /*0x767312*/
}

// ==== BACKFILL 0x00767320  sub_767320  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** sub_767320(wchar_t ** a2, int a3, const wchar_t ** a4)
{
    (void)a2; (void)a3; (void)a4; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00767320.json)
}

// ==== BACKFILL 0x00767460  ConstructorWDTFlagOption  cls=rc_ptr  sig=csp  renamed_refs=0  residual=- ====
rc_ptr * ConstructorWDTFlagOption(rc_ptr_base * a1, int a2, void * a3, int a4, void * a5, ObjectClass * aP5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x767460)
}

// ==== BACKFILL 0x00767600  sub_767600  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_767600(int a1)
{
  return 0; /*0x767602*/
}

// ==== BACKFILL 0x007676F0  System_Init_7676F0  cls=rc_ptr  sig=csp  renamed_refs=0  residual=- ====
rc_ptr * System_Init_7676F0(rc_ptr_base * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7676F0)
}

// ==== BACKFILL 0x00767800  MapSizeGameOption_WorldDominationTour::ddtor  cls=MapSizeGameOption_WorldDominationTour  sig=csp  renamed_refs=2  residual=- ====
int MapSizeGameOption_WorldDominationTour::ddtor()  // G42 sig-sync: table lookup return
{
  return ((unsigned int *)&dword_848628)[4 * *(uint8_t *)(this->q004 + 18) /*0x76781b*/
                    + *(uint8_t *)(this->q004 + 19)];
}

// ==== BACKFILL 0x00767B00  Team_Create_767B00  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
rc_ptr_base * Team_Create_767B00(rc_ptr_base * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x767B00)
}

// ==== BACKFILL 0x00767BB0  ActivateScreenWDT  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int WDT_ActivateScreen(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00767BB0.json)
}

// ==== BACKFILL 0x00767C50  COMClass::marshalInterface  cls=COMClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * COMClass::marshalInterface(char a2) {
    *(unsigned int *)this->__pad_0 = 0; /*0x767c53*/
    ((ComPtr*)(ComPtr *)this)->Release(); /*0x767c59*/
    if ( (a2 & 1) != 0 ) /*0x767c63*/
      RA2_OPDEL(this); /*0x767c66*/
    return this->__pad_0; /*0x767c70*/
}

// ==== BACKFILL 0x00767E90  sub_767E90  cls=MSFrameAnim  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_767E90()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00767E90.json)
}

// ==== BACKFILL 0x00767ED0  MSFrameAnim::Load  cls=MSFrameAnim  sig=csp  renamed_refs=0  residual=- ====
char MSFrameAnim::Load(int a1, int * a2, void *a3_1, void *a4_1)
{

  if ( byte_8487BC ) /*0x767ed7*/
    RenderScoreScreen((int *)a1->__pad_0, a2, 1); /*0x767ee3*/
  return 0; /*0x767eea*/

}

// ==== BACKFILL 0x00767EF0  MSFrameAnim::Draw  cls=MSFrameAnim  sig=csp  renamed_refs=0  residual=- ====
void MSFrameAnim::Draw(int a1, int * a2)
{

  int v2; // edi
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // [esp+8h] [ebp-10h] BYREF
  int v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  if ( byte_8487BD ) /*0x767efc*/
  {
    v2 = (*(int (**)(MSFrameAnim *))(*(unsigned int *)a1->__pad_0 + 124))(a1); /*0x767f0d*/
    v3 = (*(int (**)(MSFrameAnim *))(*(unsigned int *)a1->__pad_0 + 128))(a1); /*0x767f0f*/
    if ( a2 ) /*0x767f1b*/
    {
      v4 = a2[1]; /*0x767f1f*/
      v7 = *a2; /*0x767f22*/
      v5 = a2[2]; /*0x767f26*/
      v6 = a2[3]; /*0x767f29*/
      v8 = v4; /*0x767f2c*/
      v10 = v6; /*0x767f30*/
      v9 = v5; /*0x767f3c*/
    }
    else
    {
      v7 = 0; /*0x767f55*/
      v8 = 0; /*0x767f5d*/
      v9 = v2; /*0x767f65*/
      v10 = v3; /*0x767f69*/
    }
    RenderScoreScreen((int *)a1->__pad_0, &v7, 1); /*0x767f40*/
  }

}

// ==== BACKFILL 0x00767F80  MSFrameAnim::UpdateFrame  cls=MSFrameAnim  sig=csp  renamed_refs=0  residual=- ====
unsigned int * MSFrameAnim::UpdateFrame(unsigned int * a1)
{

  *(unsigned int *)a1->__pad_0 = 0; /*0x767f8c*/
  a1->MSFrameAnim_field_0x4 = 0; /*0x767f99*/
  a1->MSFrameAnim_field_0x8 = (void *)640; /*0x767f9c*/
  a1->MSFrameAnim_field_0xC = (void *)480; /*0x767f9f*/
  return a1->__pad_0; /*0x767fa2*/

}

// ==== BACKFILL 0x00767FB0  ConstructWDTSelection_Create_767FB0  cls=rc_ptr  sig=csp  renamed_refs=0  residual=- ====
rc_ptr * ConstructWDTSelection_Create_767FB0(rc_ptr_base * a1, int a2, int a3, ReferenceCounted * aP3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x767FB0)
}

// ==== BACKFILL 0x00768000  ConstructWDTSelection_Create_767FB0_Create  cls=ReferenceCounted  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_768000::ConstructWDTSelection_Create_767FB0_Create(int a2, int a3, ReferenceCounted * aP3) {

  *((unsigned int *)this + 3) = a3; /*0x768013*/
  *((unsigned int *)this + 1) = 0; /*0x76801e*/
  *this = (ReferenceCounted)&g_ptr_7F0954; /*0x768021*/
  *((unsigned int *)this + 2) = a2; /*0x768027*/
  *((unsigned int *)this + 4) = aP3; /*0x76802a*/
  *((unsigned int *)this + 5) = 0; /*0x76802d*/
  *((unsigned int *)this + 6) = 0; /*0x768030*/
  *((unsigned int *)this + 7) = 0; /*0x768033*/
  *((unsigned int *)this + 8) = 0; /*0x768036*/
  *((unsigned int *)this + 9) = 0; /*0x768039*/
  String::Assign((String *)this + 5, &g_INI_DefaultBuffer); /*0x76803c*/
  ConstructWDTSelection_Create_767FB0_Create_Create((ObjectClass *)((unsigned int *)this + 11), 0, 0); /*0x768048*/
  *((unsigned int *)this + 11) = &g_var_bde585; /*0x768052*/
  *((unsigned int *)this + 16) = 10; /*0x768058*/
  *((unsigned int *)this + 15) = 0; /*0x76805b*/
  *((unsigned int *)this + 17) = 0; /*0x76805e*/
  *((unsigned int *)this + 18) = 0; /*0x768061*/
  *((unsigned int *)this + 25) = 0; /*0x768064*/
  *((unsigned char *)this + 104) = 0; /*0x768067*/
  *((unsigned int *)this + 27) = 0; /*0x76806a*/
  *((unsigned int *)this + 28) = 0; /*0x76806d*/
  *((unsigned char *)this + 116) = 0; /*0x768070*/
  *((unsigned int *)this + 30) = 0; /*0x768073*/
  *((unsigned int *)this + 48) = 0; /*0x768076*/
  *((unsigned int *)this + 49) = 0; /*0x76807c*/
  *((unsigned char *)this + 200) = 1; /*0x768082*/
  *((unsigned char *)this + 201) = 0; /*0x768089*/
  *((unsigned int *)this + 47) = &g_ptr_7E3238; /*0x76808f*/
  *((unsigned int *)this + 52) = 10; /*0x768099*/
  *((unsigned int *)this + 51) = 0; /*0x76809f*/
  *this = (ReferenceCounted)&WorldDominationTour::g_var_187552; /*0x7680a5*/
  return this; /*0x7680ad*/

}

// ==== BACKFILL 0x007692F0  ConstructWDTSelection_Create_76EEB0_Create  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_7692F0::ConstructWDTSelection_Create_76EEB0_Create(void* aP1, void* a2) {

  int result; // eax
  int referenceCount; // ecx

  result = ((unsigned int *)this)[0]; /*0x7692f3*/
  if ( result ) /*0x7692f8*/
  {
    TerritorySelectWDT_Delete((ObjectClass *)a2, 0, 1, 0); /*0x769304*/
    result = MSEngine::ProcessEvents((MSEngine *)aP1, ((unsigned int *)this)[0], 300000); /*0x769316*/
  }
  referenceCount = ((unsigned int *)this)[0]; /*0x76931b*/
  if ( referenceCount ) /*0x769321*/
    return (*(int (**)(int, int))(*(unsigned int *)referenceCount + 4))(referenceCount, 1); /*0x769327*/
  return result; /*0x76931e*/

}

// ==== BACKFILL 0x00769490  sub_769490  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_769490(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00769490.json)
}

// ==== BACKFILL 0x00769C40  ??0Iostream_init_QAE_XZ_9  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
Iostream_init * Iostream_init::__0Iostream_init_QAE_XZ_9()
{
     return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00769C40.json)
}

// ==== BACKFILL 0x00769D70  Map_Load_769D70  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_769D70(unsigned int * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x769D70)
}

// ==== BACKFILL 0x00769D90  MSFrameAnim::resumeAnimation  cls=MSFrameAnim  sig=csp  renamed_refs=0  residual=- ====
rc_ptr * MSFrameAnim::resumeAnimation(unsigned int * Block, char a2)
{

  *(unsigned int *)Block->__pad_0 = &g_var_5878c0; /*0x769d93*/
  ((ComPtr *)((ComPtr *)Block))->Release(); /*0x769d99*/
  if ( (a2 & 1) != 0 ) /*0x769da3*/
    __3_YAXPAX_Z(Block); /*0x769da6*/
  return Block->__pad_0; /*0x769db0*/

}

// ==== BACKFILL 0x0076A7C0  MSFrameAnim::drawFrame  cls=MSFrameAnim  sig=csp  renamed_refs=0  residual=- ====
unsigned int * MSFrameAnim::drawFrame(void *a1_1)
{

  ((ComPtr *)((ComPtr *)this))->Constructor(); /*0x76a7c3*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&g_var_5878c0); /*0x76a7c8*/
  return this->__pad_0; /*0x76a7d0*/

}

// ==== BACKFILL 0x0076A7E0  ConstructWDTSelection_Create_767FB0_Create_Create  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_76A7E0::ConstructWDTSelection_Create_767FB0_Create_Create(HashTable * aP1, HashTable * aP2) {

  int v3; // esi
  ComPtr *v5; // edi
  int *v7; // eax
  void *v8; // ebx
  ComPtr *v9; // edi

  v3 = aP1; /*0x76a7e3*/
  ((unsigned int *)this)[0] = 0; /*0x76a7ec*/
  ((unsigned int *)this)[0] = (void *)aP1; /*0x76a7f3*/
  LOBYTE(((unsigned int *)this)[0]) = 1; /*0x76a7f6*/
  BYTE1(((unsigned int *)this)[0]) = 0; /*0x76a7fa*/
  /* X11: ptr_0 install elided (implicit via VectorClassrc_ptr virtuals 0x76a7fe) */
  if ( !aP1 ) /*0x76a805*/
    return this; /*0x76a805*/
  if ( !aP2 ) /*0x76a811*/
  {
    v7 = (int *)__2_YAPAXI_Z(8 * aP1 + 4); /*0x76a84b*/
    if ( v7 ) /*0x76a855*/
    {
      *v7 = aP1; /*0x76a857*/
      v8 = v7 + 1; /*0x76a859*/
      v9 = (ComPtr *)(v7 + 1); /*0x76a85f*/
      if ( aP1 - 1 >= 0 ) /*0x76a863*/
      {
        do /*0x76a879*/
        {
          ComPtr::Constructor(v9); /*0x76a86a*/
          *(unsigned int *)v9->__pad_0 = &g_var_5878c0; /*0x76a86f*/
          v9 = (ComPtr *)((char *)v9 + 8); /*0x76a875*/
          --v3; /*0x76a878*/
        }
        while ( v3 ); /*0x76a879*/
        ((unsigned int *)this)[0] = v8; /*0x76a87c*/
        BYTE1(((unsigned int *)this)[0]) = 1; /*0x76a87f*/
        return this; /*0x76a888*/
      }
    }
    else
    {
      v8 = 0; /*0x76a88b*/
    }
    ((unsigned int *)this)[0] = v8; /*0x76a88d*/
    BYTE1(((unsigned int *)this)[0]) = 1; /*0x76a890*/
    return this; /*0x76a895*/
  }
  *aP2 = aP1; /*0x76a813*/
  v5 = (ComPtr *)(aP2 + 1); /*0x76a81b*/
  if ( aP1 - 1 >= 0 ) /*0x76a81f*/
  {
    do /*0x76a835*/
    {
      ComPtr::Constructor(v5); /*0x76a826*/
      *(unsigned int *)v5->__pad_0 = &g_var_5878c0; /*0x76a82b*/
      v5 = (ComPtr *)((char *)v5 + 8); /*0x76a831*/
      --v3; /*0x76a834*/
    }
    while ( v3 ); /*0x76a835*/
  }
  ((unsigned int *)this)[0] = aP2 + 1; /*0x76a838*/
  return this; /*0x76a837*/

}

// ==== BACKFILL 0x0076AAF0  ParseWDTTerritories_Parse  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_76AAF0::sub_76AAF0()
{

  ((unsigned int *)this)[0] = 0; /*0x76aaf7*/
  this->AbstractClass = (unsigned int)(&off_7F7220); /*0x76aafa*/
  ((unsigned int *)this)[0] = 0; /*0x76ab00*/
  BYTE2(((unsigned int *)this)[0]) = 10; /*0x76ab03*/
  HIBYTE(((unsigned int *)this)[0]) = 10; /*0x76ab06*/
  LOWORD(((unsigned int *)this)[0]) = 10000; /*0x76ab09*/
  LOWORD(((unsigned int *)this)[0]) = 0; /*0x76ab0f*/
  BYTE1(((unsigned int *)this)[0]) = 0; /*0x76ab13*/
  BYTE2(((unsigned int *)this)[0]) = 0; /*0x76ab16*/
  HIBYTE(((unsigned int *)this)[0]) = 0; /*0x76ab19*/
  BYTE2(((unsigned int *)this)[0]) = 0; /*0x76ab1e*/
  BYTE1(this->occupant) = 0; /*0x76ab21*/
  LOBYTE(this->owningHouseIndex) = 0; /*0x76ab24*/
  BYTE2(this->fallRate) = 0; /*0x76ab27*/
  BYTE1(this->nextObject) = 0; /*0x76ab2a*/
  LOBYTE(this->attachedTag) = 0; /*0x76ab2d*/
  LOBYTE(((unsigned int *)this)[0]) = 100; /*0x76ab35*/
  HIBYTE(((unsigned int *)this)[0]) = 100; /*0x76ab38*/
  BYTE2(this->occupant) = 100; /*0x76ab3b*/
  BYTE1(this->owningHouseIndex) = 100; /*0x76ab3e*/
  LOBYTE(this->fallRate) = 100; /*0x76ab41*/
  HIBYTE(this->fallRate) = 100; /*0x76ab44*/
  BYTE2(this->nextObject) = 100; /*0x76ab47*/
  BYTE1(this->attachedTag) = 100; /*0x76ab4a*/
  BYTE2(((unsigned int *)this)[0]) = 1; /*0x76ab4d*/
  HIBYTE(((unsigned int *)this)[0]) = 1; /*0x76ab51*/
  LOBYTE(((unsigned int *)this)[0]) = 2; /*0x76ab55*/
  LOBYTE(((unsigned int *)this)[0]) = 1; /*0x76ab59*/
  BYTE1(((unsigned int *)this)[0]) = 50; /*0x76ab5d*/
  LOBYTE(this->occupant) = 50; /*0x76ab60*/
  HIBYTE(this->occupant) = 50; /*0x76ab63*/
  BYTE2(this->owningHouseIndex) = 50; /*0x76ab66*/
  HIBYTE(this->owningHouseIndex) = 1; /*0x76ab69*/
  BYTE1(this->fallRate) = 50; /*0x76ab6d*/
  LOBYTE(this->nextObject) = 50; /*0x76ab70*/
  HIBYTE(this->nextObject) = 50; /*0x76ab73*/
  BYTE2(this->attachedTag) = 50; /*0x76ab76*/
  this->attachedBomb = (unsigned int)((BombClass *)-1); /*0x76ab79*/
  (&this->ambientSoundController)[0] = -1; /*0x76ab7c*/
  return (unsigned int *)(this); /*0x76ab7f*/

}

// ==== BACKFILL 0x0076AB90  sub_76AB90  cls=WDTTerritory  sig=csp  renamed_refs=0  residual=- ====
void sub_76AB90()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0076AB90.json)
}

// ==== BACKFILL 0x0076ABA0  Audio_Set  cls=rc_ptr  sig=csp  renamed_refs=0  residual=- ====
rc_ptr * Audio_Set(rc_ptr_base * a1, void * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x76ABA0)
}

// ==== BACKFILL 0x0076ABE0  sub_76ABE0  cls=WDTState  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_76ABE0()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0076ABE0.json)
}

// ==== BACKFILL 0x0076B180  ParseWDTTerritories  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_76B180::ParseWDTTerritories(WDTState * aP1, int a3) {

  int v3; // eax
  int v5; // esi
  void *v7; // eax
  int v8; // eax
  int16_t v9; // cx
  int v10; // esi
  char v11; // dl
  int16_t v12; // ax
  unsigned int v13; // eax
  char v14; // dl
  char v15; // dl
  int v16; // ecx
  int v17; // esi
  char v18; // al
  int v19; // esi
  char v20; // al
  int v21; // esi
  char v22; // al
  int v23; // esi
  char v24; // al
  int v25; // esi
  char v26; // al
  int v27; // esi
  char v28; // al
  int v29; // esi
  char v30; // al
  int v31; // esi
  char v32; // al
  int v33; // esi
  char v34; // al
  int v35; // esi
  char v36; // al
  int v37; // esi
  char v38; // al
  int v39; // esi
  char v40; // al
  int v41; // esi
  char v42; // al
  int v43; // esi
  char v44; // al
  int v45; // esi
  char v46; // al
  int v47; // esi
  char v48; // al
  int v49; // esi
  char v50; // al
  int v51; // esi
  char v52; // al
  int v53; // esi
  char v54; // al
  int v55; // esi
  char v56; // al
  int v57; // esi
  char v58; // al
  int v59; // esi
  char v60; // al
  int v61; // esi
  char v62; // al
  int v63; // esi
  char v64; // al
  int v65; // esi
  int v66; // eax
  int v67; // ecx
  int v68; // edx
  int v69; // ebx
  int v70; // eax
  int v71; // ecx
  int v72; // edx
  int v73; // edx
  int v74; // eax
  int v75; // ecx
  int v76; // eax
  int v77; // ecx
  int v78; // [esp-4h] [ebp-1Ch]
  void **v79; // [esp+10h] [ebp-8h] BYREF
  int v80; // [esp+14h] [ebp-4h]

  v3 = a3; /*0x76b180*/
  v5 = 0; /*0x76b18c*/
  *((unsigned int *)this + 8) = 0; /*0x76b192*/
  if ( a3 >= 28 ) /*0x76b195*/
  {
    while ( v5 + 28 <= v3 ) /*0x76b1ba*/
    {
      v7 = __2_YAPAXI_Z(0x40u); /*0x76b1be*/
      if ( v7 ) /*0x76b1c8*/
        v8 = ParseWDTTerritories_Parse(v7); /*0x76b1cc*/
      else
        v8 = 0; /*0x76b1d3*/
      ParseWDTTerritories_Parse_76B790(v8); /*0x76b1da*/
      (v9) = ((v9) & ~0xFF) | ((0) & 0xFF); /*0x76b1e6*/
      v10 = v5 + 1; /*0x76b1e8*/
      *(unsigned int *)(v80 + 8) = *((unsigned int *)this + 8); /*0x76b1e9*/
      (v9) = ((v9) & ~(0xFF << 8)) | (((*(unsigned char *)(v10 + aP1 - 1)) & 0xFF) << 8); /*0x76b1ec*/
      *(unsigned short *)(v80 + 12) = v9; /*0x76b1f4*/
      *(unsigned short *)(v80 + 12) += *(uint8_t *)(v10 + aP1); /*0x76b201*/
      v11 = *(unsigned char *)(v10 + aP1 + 1); /*0x76b205*/
      v10 += 2; /*0x76b211*/
      *(unsigned char *)(v80 + 14) = v11 + 0x80; /*0x76b212*/
      (v12) = ((v12) & ~0xFF) | ((0) & 0xFF); /*0x76b21c*/
      (v9) = ((v9) & ~0xFF) | ((*(unsigned char *)(v10 + aP1) + 0x80) & 0xFF); /*0x76b21e*/
      ++v10; /*0x76b221*/
      *(unsigned char *)(v80 + 15) = v9; /*0x76b222*/
      (v12) = ((v12) & ~(0xFF << 8)) | (((*(unsigned char *)(v10 + aP1)) & 0xFF) << 8); /*0x76b229*/
      ++v10; /*0x76b22c*/
      *(unsigned short *)(v80 + 16) = v12; /*0x76b22d*/
      *(unsigned short *)(v80 + 16) += *(uint8_t *)(v10 + aP1); /*0x76b23a*/
      v13 = *(uint8_t *)(++v10 + aP1) - 128; /*0x76b248*/
      ++v10; /*0x76b24d*/
      *(unsigned char *)(v80 + 28) = v13 & 0xF; /*0x76b253*/
      *(unsigned char *)(v80 + 29) = (v13 >> 4) & 0xF; /*0x76b25f*/
      v14 = *(unsigned char *)(v10 + aP1) + 0x80; /*0x76b269*/
      ++v10; /*0x76b26c*/
      *(unsigned char *)(v80 + 30) = v14; /*0x76b26d*/
      (v9) = ((v9) & ~0xFF) | ((*(unsigned char *)(v10 + aP1) + 0x80) & 0xFF); /*0x76b277*/
      ++v10; /*0x76b27a*/
      *(unsigned char *)(v80 + 18) = v9; /*0x76b27b*/
      (v13) = ((v13) & ~0xFF) | ((*(unsigned char *)(v10 + aP1) + 0x80) & 0xFF); /*0x76b285*/
      ++v10; /*0x76b287*/
      *(unsigned char *)(v80 + 19) = v13; /*0x76b288*/
      v15 = *(unsigned char *)(v10 + aP1) + 0x80; /*0x76b294*/
      ++v10; /*0x76b297*/
      *(unsigned char *)(v80 + 20) = v15; /*0x76b298*/
      v16 = *(uint8_t *)(v10 + aP1) - 128; /*0x76b2a2*/
      v17 = v10 + 1; /*0x76b2a8*/
      *(unsigned int *)(v80 + 24) = v16; /*0x76b2a9*/
      if ( *(unsigned char *)(v17 + aP1) <= 0x7Fu ) /*0x76b2b1*/
        v18 = *(unsigned char *)(v17 + aP1); /*0x76b2bf*/
      else
        v18 = *(unsigned char *)(v17 + aP1) + 0x80; /*0x76b2b8*/
      v19 = v17 + 1; /*0x76b2c8*/
      *(unsigned char *)(v80 + 31) = v18; /*0x76b2c9*/
      if ( *(unsigned char *)(v19 + aP1) <= 0x7Fu ) /*0x76b2d1*/
        v20 = *(unsigned char *)(v19 + aP1); /*0x76b2df*/
      else
        v20 = *(unsigned char *)(v19 + aP1) + 0x80; /*0x76b2d8*/
      v21 = v19 + 1; /*0x76b2e8*/
      *(unsigned char *)(v80 + 32) = v20; /*0x76b2e9*/
      if ( *(unsigned char *)(v21 + aP1) <= 0x7Fu ) /*0x76b2f1*/
        v22 = *(unsigned char *)(v21 + aP1); /*0x76b2ff*/
      else
        v22 = *(unsigned char *)(v21 + aP1) + 0x80; /*0x76b2f8*/
      v23 = v21 + 1; /*0x76b308*/
      *(unsigned char *)(v80 + 33) = v22; /*0x76b309*/
      if ( *(unsigned char *)(v23 + aP1) <= 0x7Fu ) /*0x76b311*/
        v24 = *(unsigned char *)(v23 + aP1); /*0x76b31f*/
      else
        v24 = *(unsigned char *)(v23 + aP1) + 0x80; /*0x76b318*/
      v25 = v23 + 1; /*0x76b328*/
      *(unsigned char *)(v80 + 34) = v24; /*0x76b329*/
      if ( *(unsigned char *)(v25 + aP1) <= 0x7Fu ) /*0x76b331*/
        v26 = *(unsigned char *)(v25 + aP1); /*0x76b33f*/
      else
        v26 = *(unsigned char *)(v25 + aP1) + 0x80; /*0x76b338*/
      v27 = v25 + 1; /*0x76b348*/
      *(unsigned char *)(v80 + 35) = v26; /*0x76b349*/
      if ( *(unsigned char *)(v27 + aP1) <= 0x7Fu ) /*0x76b351*/
        v28 = *(unsigned char *)(v27 + aP1); /*0x76b35f*/
      else
        v28 = *(unsigned char *)(v27 + aP1) + 0x80; /*0x76b358*/
      v29 = v27 + 1; /*0x76b368*/
      *(unsigned char *)(v80 + 36) = v28; /*0x76b369*/
      if ( *(unsigned char *)(v29 + aP1) <= 0x7Fu ) /*0x76b371*/
        v30 = *(unsigned char *)(v29 + aP1); /*0x76b37f*/
      else
        v30 = *(unsigned char *)(v29 + aP1) + 0x80; /*0x76b378*/
      v31 = v29 + 1; /*0x76b388*/
      *(unsigned char *)(v80 + 37) = v30; /*0x76b389*/
      if ( *(unsigned char *)(v31 + aP1) <= 0x7Fu ) /*0x76b391*/
        v32 = *(unsigned char *)(v31 + aP1); /*0x76b39f*/
      else
        v32 = *(unsigned char *)(v31 + aP1) + 0x80; /*0x76b398*/
      v33 = v31 + 1; /*0x76b3a8*/
      *(unsigned char *)(v80 + 38) = v32; /*0x76b3a9*/
      if ( *(unsigned char *)(v33 + aP1) <= 0x7Fu ) /*0x76b3b1*/
        v34 = *(unsigned char *)(v33 + aP1); /*0x76b3bf*/
      else
        v34 = *(unsigned char *)(v33 + aP1) + 0x80; /*0x76b3b8*/
      v35 = v33 + 1; /*0x76b3c8*/
      *(unsigned char *)(v80 + 39) = v34; /*0x76b3c9*/
      if ( *(unsigned char *)(v35 + aP1) <= 0x7Fu ) /*0x76b3d1*/
        v36 = *(unsigned char *)(v35 + aP1); /*0x76b3df*/
      else
        v36 = *(unsigned char *)(v35 + aP1) + 0x80; /*0x76b3d8*/
      v37 = v35 + 1; /*0x76b3e8*/
      *(unsigned char *)(v80 + 43) = v36; /*0x76b3e9*/
      if ( *(unsigned char *)(v37 + aP1) <= 0x7Fu ) /*0x76b3f1*/
        v38 = *(unsigned char *)(v37 + aP1); /*0x76b3ff*/
      else
        v38 = *(unsigned char *)(v37 + aP1) + 0x80; /*0x76b3f8*/
      v39 = v37 + 1; /*0x76b408*/
      *(unsigned char *)(v80 + 44) = v38; /*0x76b409*/
      if ( *(unsigned char *)(v39 + aP1) <= 0x7Fu ) /*0x76b411*/
        v40 = *(unsigned char *)(v39 + aP1); /*0x76b41f*/
      else
        v40 = *(unsigned char *)(v39 + aP1) + 0x80; /*0x76b418*/
      v41 = v39 + 1; /*0x76b428*/
      *(unsigned char *)(v80 + 45) = v40; /*0x76b429*/
      if ( *(unsigned char *)(v41 + aP1) <= 0x7Fu ) /*0x76b431*/
        v42 = *(unsigned char *)(v41 + aP1); /*0x76b43f*/
      else
        v42 = *(unsigned char *)(v41 + aP1) + 0x80; /*0x76b438*/
      v43 = v41 + 1; /*0x76b448*/
      *(unsigned char *)(v80 + 46) = v42; /*0x76b449*/
      if ( *(unsigned char *)(v43 + aP1) <= 0x7Fu ) /*0x76b451*/
        v44 = *(unsigned char *)(v43 + aP1); /*0x76b45f*/
      else
        v44 = *(unsigned char *)(v43 + aP1) + 0x80; /*0x76b458*/
      v45 = v43 + 1; /*0x76b468*/
      *(unsigned char *)(v80 + 47) = v44; /*0x76b469*/
      if ( *(unsigned char *)(v45 + aP1) <= 0x7Fu ) /*0x76b471*/
        v46 = *(unsigned char *)(v45 + aP1); /*0x76b47f*/
      else
        v46 = *(unsigned char *)(v45 + aP1) + 0x80; /*0x76b478*/
      v47 = v45 + 1; /*0x76b488*/
      *(unsigned char *)(v80 + 48) = v46; /*0x76b489*/
      if ( *(unsigned char *)(v47 + aP1) <= 0x7Fu ) /*0x76b491*/
        v48 = *(unsigned char *)(v47 + aP1); /*0x76b49f*/
      else
        v48 = *(unsigned char *)(v47 + aP1) + 0x80; /*0x76b498*/
      v49 = v47 + 1; /*0x76b4a8*/
      *(unsigned char *)(v80 + 40) = v48; /*0x76b4a9*/
      if ( *(unsigned char *)(v49 + aP1) <= 0x7Fu ) /*0x76b4b1*/
        v50 = *(unsigned char *)(v49 + aP1); /*0x76b4bf*/
      else
        v50 = *(unsigned char *)(v49 + aP1) + 0x80; /*0x76b4b8*/
      v51 = v49 + 1; /*0x76b4c8*/
      *(unsigned char *)(v80 + 41) = v50; /*0x76b4c9*/
      if ( *(unsigned char *)(v51 + aP1) <= 0x7Fu ) /*0x76b4d1*/
        v52 = *(unsigned char *)(v51 + aP1); /*0x76b4df*/
      else
        v52 = *(unsigned char *)(v51 + aP1) + 0x80; /*0x76b4d8*/
      v53 = v51 + 1; /*0x76b4e8*/
      *(unsigned char *)(v80 + 42) = v52; /*0x76b4e9*/
      if ( *(unsigned char *)(v53 + aP1) <= 0x7Fu ) /*0x76b4f1*/
        v54 = *(unsigned char *)(v53 + aP1); /*0x76b4ff*/
      else
        v54 = *(unsigned char *)(v53 + aP1) + 0x80; /*0x76b4f8*/
      v55 = v53 + 1; /*0x76b508*/
      *(unsigned char *)(v80 + 49) = v54; /*0x76b509*/
      if ( *(unsigned char *)(v55 + aP1) <= 0x7Fu ) /*0x76b511*/
        v56 = *(unsigned char *)(v55 + aP1); /*0x76b51f*/
      else
        v56 = *(unsigned char *)(v55 + aP1) + 0x80; /*0x76b518*/
      v57 = v55 + 1; /*0x76b528*/
      *(unsigned char *)(v80 + 50) = v56; /*0x76b529*/
      if ( *(unsigned char *)(v57 + aP1) <= 0x7Fu ) /*0x76b531*/
        v58 = *(unsigned char *)(v57 + aP1); /*0x76b53f*/
      else
        v58 = *(unsigned char *)(v57 + aP1) + 0x80; /*0x76b538*/
      v59 = v57 + 1; /*0x76b548*/
      *(unsigned char *)(v80 + 51) = v58; /*0x76b549*/
      if ( *(unsigned char *)(v59 + aP1) <= 0x7Fu ) /*0x76b551*/
        v60 = *(unsigned char *)(v59 + aP1); /*0x76b55f*/
      else
        v60 = *(unsigned char *)(v59 + aP1) + 0x80; /*0x76b558*/
      v61 = v59 + 1; /*0x76b568*/
      *(unsigned char *)(v80 + 52) = v60; /*0x76b569*/
      if ( *(unsigned char *)(v61 + aP1) <= 0x7Fu ) /*0x76b571*/
        v62 = *(unsigned char *)(v61 + aP1); /*0x76b57f*/
      else
        v62 = *(unsigned char *)(v61 + aP1) + 0x80; /*0x76b578*/
      v63 = v61 + 1; /*0x76b588*/
      *(unsigned char *)(v80 + 53) = v62; /*0x76b589*/
      if ( *(unsigned char *)(v63 + aP1) <= 0x7Fu ) /*0x76b591*/
        v64 = *(unsigned char *)(v63 + aP1); /*0x76b59f*/
      else
        v64 = *(unsigned char *)(v63 + aP1) + 0x80; /*0x76b598*/
      v65 = v63 + 1; /*0x76b5a8*/
      *(unsigned char *)(v80 + 54) = v64; /*0x76b5a9*/
      v66 = *(uint8_t *)(v65 + aP1) << 24; /*0x76b5b7*/
      ++v65; /*0x76b5ba*/
      *(unsigned int *)(v80 + 60) = v66; /*0x76b5bb*/
      v67 = (*(uint8_t *)(v65 + aP1) << 16) + *(unsigned int *)(v80 + 60); /*0x76b5cb*/
      ++v65; /*0x76b5cd*/
      *(unsigned int *)(v80 + 60) = v67; /*0x76b5ce*/
      v68 = (*(uint8_t *)(v65 + aP1) << 8) + *(unsigned int *)(v80 + 60); /*0x76b5e0*/
      ++v65; /*0x76b5e2*/
      *(unsigned int *)(v80 + 60) = v68; /*0x76b5e3*/
      v69 = *(uint8_t *)(v65 + aP1) + *(unsigned int *)(v80 + 60); /*0x76b5f2*/
      ++v65; /*0x76b5f4*/
      *(unsigned int *)(v80 + 60) = v69; /*0x76b5f5*/
      v70 = *(uint8_t *)(v65 + aP1) << 24; /*0x76b603*/
      ++v65; /*0x76b606*/
      *(unsigned int *)(v80 + 56) = v70; /*0x76b607*/
      v71 = (*(uint8_t *)(v65 + aP1) << 16) + *(unsigned int *)(v80 + 56); /*0x76b617*/
      ++v65; /*0x76b619*/
      *(unsigned int *)(v80 + 56) = v71; /*0x76b61a*/
      v72 = (*(uint8_t *)(v65 + aP1) << 8) + *(unsigned int *)(v80 + 56); /*0x76b62c*/
      ++v65; /*0x76b62e*/
      *(unsigned int *)(v80 + 56) = v72; /*0x76b62f*/
      v73 = *(uint8_t *)(v65 + aP1); /*0x76b638*/
      v5 = v65 + 1; /*0x76b640*/
      *(unsigned int *)(v80 + 56) += v73; /*0x76b641*/
      v74 = *((unsigned int *)this + 13); /*0x76b644*/
      if ( *((unsigned int *)this + 15) < v74 /*0x76b66c*/
        || (*((unsigned char *)this + 57) || !v74)
        && (v75 = *((unsigned int *)this + 16), v75 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(*((unsigned int *)this + 11) + 8))((char *)this + 44, v75 + v74, 0) )
      {
        v76 = *((unsigned int *)this + 15); /*0x76b673*/
        v78 = v80; /*0x76b67a*/
        *((unsigned int *)this + 15) = v76 + 1; /*0x76b67e*/
        ComPtr::Set((unsigned int *)(*((unsigned int *)this + 12) + 8 * v76), v78); /*0x76b687*/
      }
      v77 = *((unsigned int *)this + 8); /*0x76b68c*/
      v79 = &g_var_5878c0; /*0x76b68f*/
      *((unsigned int *)this + 8) = v77 + 1; /*0x76b698*/
      ComPtr::Release(&v79); /*0x76b69f*/
      if ( v5 >= a3 ) /*0x76b6a8*/
        return 1; /*0x76b6b1*/
      v3 = a3; /*0x76b1b1*/
    }
  }
  return 0; /*0x76b197*/

}

// ==== BACKFILL 0x0076BC60  WDTState_4::Constructor  cls=WDTState  sig=csp  renamed_refs=0  residual=- ====
int WDTState_4::Constructor()
{

  ((ComPtr *)((ComPtr *)this))->Constructor(); /*0x76bc63*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&g_var_5878c0); /*0x76bc68*/
  return (int)(this->__pad_0); /*0x76bc70*/

}

// ==== BACKFILL 0x0076BE90  Audio_Create_76BE90  cls=rc_ptr  sig=csp  renamed_refs=0  residual=- ====
rc_ptr * Audio_Create_76BE90(rc_ptr_base * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x76BE90)
}

// ==== BACKFILL 0x0076BF00  Audio_Create_76BF00  cls=ReferenceCounted  sig=csp  renamed_refs=0  residual=- ====
char* Gap2Recv_76BF00::Audio_Create_76BF00(int a2) {

  unsigned int *v3; // edi
  int v4; // eax
  wchar_t *v5; // ecx
  wchar_t *StringCSF; // eax
  int v7; // eax
  wchar_t *v8; // ecx
  wchar_t *v9; // eax

  v3 = (unsigned char *)this + 8; /*0x76bf05*/
  *((unsigned int *)this + 1) = 0; /*0x76bf08*/
  /* X11: ptr_0 install elided (implicit via ReferenceCounted virtuals 0x76bf11) */
  ComPtr::Constructor((unsigned int *)this + 2); /*0x76bf17*/
  *v3 = &g_var_5878c0; /*0x76bf20*/
  ComPtr::Set(v3, *(unsigned int *)(a2 + 4)); /*0x76bf2c*/
  v4 = *(unsigned int *)(a2 + 4); /*0x76bf31*/
  if ( v4 ) /*0x76bf3d*/
    v5 = *(wchar_t **)(v4 + 8); /*0x76bf3f*/
  else
    v5 = aWdtDefaultshor; /*0x76bf48*/
  StringCSF = GetStringCSF(v5, 0, aDRa2mdpostWdtp, 20); /*0x76bf4d*/
  WideString::Assign((wchar_t **)this + 4, StringCSF); /*0x76bf56*/
  v7 = *(unsigned int *)(a2 + 4); /*0x76bf5b*/
  if ( v7 ) /*0x76bf67*/
    v8 = *(wchar_t **)(v7 + 12); /*0x76bf69*/
  else
    v8 = aWdtDefaultlong; /*0x76bf72*/
  v9 = GetStringCSF(v8, 0, aDRa2mdpostWdtp, 21); /*0x76bf77*/
  WideString::Assign((wchar_t **)this + 5, v9); /*0x76bf80*/
  /* X11: ptr_0 install elided (implicit via CampaignProperties virtuals 0x76bf85) */
  return this; /*0x76bf8d*/

}

// ==== BACKFILL 0x0076BFB0  ConstructWDTSelection_Create_76BFB0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_76BFB0()
{
  return 1; /*0x76bfb5*/
}

// ==== BACKFILL 0x0076C290  ConstructWDTSelection  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_76C290::ConstructWDTSelection(int arg0, int arg4) {

  int v4; // eax
  int _76BFC0; // eax
  CampaignClass *v6; // eax
  unsigned char *v7; // eax
  unsigned int *_771800; // eax
  int _76BFB0; // eax
  char **v10; // eax
  int v11; // ebp
  int v12; // eax
  wchar_t *StringCSF; // eax
  MSBitPrintAnim *v14; // eax
  ScoreClass *v15; // edi
  wchar_t *v16; // eax
  MSBitPrintAnim *v17; // eax
  ScoreClass *v18; // edi
  int v20; // [esp-4h] [ebp-D8h]
  ObjectClass v21; // [esp+10h] [ebp-C4h] BYREF
  int v22[3]; // [esp+C0h] [ebp-14h] BYREF
  int v23; // [esp+CCh] [ebp-8h]

  MSEngine::Construct((MSEngine *)this); /*0x76c29c*/
  ComPtr::Constructor((ComPtr *)((char *)this + 72)); /*0x76c2a6*/
  *((unsigned int *)this + 18) = &g_var_5878c0; /*0x76c2b2*/
  ComPtr::Set((ComPtr *)((char *)this + 72), *(unsigned int *)(arg0 + 4)); /*0x76c2be*/
  ComPtr::Constructor((ComPtr *)((char *)this + 80)); /*0x76c2c8*/
  *((unsigned int *)this + 20) = &g_var_5878c0; /*0x76c2cd*/
  WinsockInterface::ProcessPacket((char *)((char *)this + 88), *(unsigned int *)(*(unsigned int *)(arg0 + 4) + 68)); /*0x76c2dd*/
  *((unsigned char *)this + 1092) = 0; /*0x76c2e7*/
  *((unsigned int *)this + 274) = -1; /*0x76c2ed*/
  *((unsigned int *)this + 275) = -1; /*0x76c2f3*/
  *((unsigned int *)this + 276) = Conflict::GetOwnerHouse(*(Conflict **)(*(unsigned int *)(arg0 + 4) + 12)); /*0x76c30e*/
  *((unsigned int *)this + 277) = -1; /*0x76c314*/
  v4 = *(unsigned int *)(arg0 + 4); /*0x76c31a*/
  v20 = *(unsigned int *)(v4 + 68); /*0x76c323*/
  _76BFC0 = ConstructWDTSelection_Create_76BFC0(*(ObjectClass **)(v4 + 12)); /*0x76c327*/
  ConstructWDTSelection_Create_767FB0((rc_ptr *)((char *)this + 1112), _76BFC0, arg4, v20); /*0x76c334*/
  *((unsigned int *)this + 280) = -1; /*0x76c339*/
  ComPtr::Constructor((ComPtr *)((char *)this + 1124)); /*0x76c347*/
  *((unsigned int *)this + 281) = &g_var_5878c0; /*0x76c34c*/
  *((unsigned int *)this + 283) = 0; /*0x76c355*/
  *((unsigned int *)this + 284) = 0; /*0x76c35b*/
  *((unsigned int *)this + 285) = 0; /*0x76c361*/
  *((unsigned int *)this + 286) = 32; /*0x76c367*/
  *((unsigned int *)this + 287) = 0; /*0x76c371*/
  *((unsigned int *)this + 288) = 0; /*0x76c377*/
  v6 = (CampaignClass *)__2_YAPAXI_Z(0x20u); /*0x76c37d*/
  if ( v6 ) /*0x76c387*/
    v7 = CampaignClass::Constructor_1(v6, 0); /*0x76c38c*/
  else
    v7 = 0; /*0x76c393*/
  *((unsigned int *)this + 289) = v7; /*0x76c39b*/
  ConstructWDTSelection_Create_76F500((rc_ptr *)((char *)this + 1160)); /*0x76c3a1*/
  String::Assign((String *)((char *)this + 1168), 0); /*0x76c3ad*/
  ConstructWDTSelection_Create_76F210((VectorClass *)((char *)this + 1172), 0, 0); /*0x76c3bc*/
  *((unsigned int *)this + 293) = &g_ptr_7E3238; /*0x76c3c1*/
  *((unsigned int *)this + 298) = 10; /*0x76c3c8*/
  *((unsigned int *)this + 297) = 0; /*0x76c3cf*/
  /* X11: ptr_0 install elided (implicit via Selection virtuals 0x76c3d2) */
  *((unsigned int *)this + 299) = (uint16_t)Property::Set( /*0x76c448*/
                                                 (Property *)g_FogOfWarState,
                                                 ((uint8_t)dword_AC18A4 >> g_BitShift_Green_0 << g_BitShift_Red)
                                               | ((((dword_AC18A4) >> 8) & 0xFF) >> g_BitMask_Blue << g_BitMask_Green)
                                               | ((((dword_AC18A4) >> 16) & 0xFF) >> g_BitMask_Red << g_BitShift_Blue));
  _771800 = ConstructWDTSelection_Create_771800((ObjectClass *)((char *)this + 88)); /*0x76c44e*/
  PriorityQueue::Add((PriorityQueue *)this, (int)_771800); /*0x76c456*/
  CCFileClass::Construct((CCFileClass *)&v21.customSound_controller[2], aWdtmapmdIni); /*0x76c464*/
  v21.referenceCount = 0; /*0x76c46d*/
  v21.NeedsSaveOrLink = 0; /*0x76c471*/
  GenericList::Constructor((GenericList *)&v21.occupant); /*0x76c475*/
  v21.occupant = (int)&g_var_a3009f; /*0x76c484*/
  memset(&v21.ambientSoundController[1], 0, 13); /*0x76c48c*/
  v21.customSound_controller[0] = 0; /*0x76c49c*/
  v21.customSound_controller[1] = 0; /*0x76c4a0*/
  v21.nextArrayIndex = (int)&g_ptr_7EA5F4; /*0x76c4a4*/
  FileStraw::Open((FileStraw *)&v21.nextArrayIndex, (int)&v21.customSound_controller[2], 0); /*0x76c4ac*/
  String::Assign((String *)&v21, aVoiceovers); /*0x76c4ba*/
  ConstructWDTSelection_Create_76C970(this, &v21.nextArrayIndex, (int)&v21); /*0x76c4cb*/
  DeleteAndZero(&v21); /*0x76c4d4*/
  String::Assign((String *)&v21, aSounds_0); /*0x76c4e2*/
  ConstructWDTSelection_Create_76CA60((TechnoClass *)this, (char *)&v21.nextArrayIndex, (char **)&v21); /*0x76c4f3*/
  DeleteAndZero(&v21); /*0x76c4fc*/
  unknown_libname_73(&v21.ptr_8); /*0x76c505*/
  String::Assign((String *)&v21.ptr_4, &g_INI_DefaultBuffer); /*0x76c513*/
  String::Assign((String *)&v21, aLayouts); /*0x76c521*/
  _76BFB0 = ConstructWDTSelection_Create_76BFB0(); /*0x76c53b*/
  v10 = FromStringInt((char **)&v21.abstractFlags, _76BFB0); /*0x76c546*/
  INIClass::ReadString((INIClass *)&v21.nextArrayIndex, (char **)&v21, v10, (char **)&v21.ptr_4, (int)&v21.ptr_8); /*0x76c555*/
  DeleteAndZero((ObjectClass *)&v21.abstractFlags); /*0x76c55e*/
  DeleteAndZero(&v21); /*0x76c567*/
  DeleteAndZero((ObjectClass *)&v21.ptr_4); /*0x76c570*/
  ConstructWDTSelection_Create_76CBF0((TechnoClass *)this, &v21.nextArrayIndex, (char **)&v21.ptr_8); /*0x76c581*/
  v11 = *((unsigned int *)this + 279); /*0x76c590*/
  LOBYTE(v12) = ConstructWDTSelection_Create(*(unsigned int *)(arg0 + 4), arg4); /*0x76c599*/
  ArtConfig::ReadLayout(v11, (INIClass *)&v21.nextArrayIndex, (PriorityQueue *)this, v12); /*0x76c5a7*/
  StringCSF = GetStringCSF(aGuiPlaywdt, 0, g_Str_File_WDTSel_cpp, 157); /*0x76c5bd*/
  WideString::Assign((WideString *)&v21.uniqueId, StringCSF); /*0x76c5c7*/
  v14 = (MSBitPrintAnim *)__2_YAPAXI_Z(0x34u); /*0x76c5ce*/
  if ( v14 ) /*0x76c5d8*/
    v15 = (ScoreClass *)MSBitPrintAnim::Construct( /*0x76c5f5*/
                          v14,
                          (const wchar_t **)&v21.uniqueId,
                          (unsigned int *)(*((unsigned int *)this + 279) + 156),
                          1);
  else
    v15 = 0; /*0x76c5f9*/
  ScoreClass::SetState(v15, 1); /*0x76c5ff*/
  PriorityQueue::Add((PriorityQueue *)this, (int)v15); /*0x76c607*/
  v16 = GetStringCSF(aTxtBack, 0, g_Str_File_WDTSel_cpp, 164); /*0x76c61d*/
  WideString::Assign((WideString *)&v21.ptr_C, v16); /*0x76c627*/
  v17 = (MSBitPrintAnim *)__2_YAPAXI_Z(0x34u); /*0x76c62e*/
  if ( v17 ) /*0x76c638*/
    v18 = (ScoreClass *)MSBitPrintAnim::Construct( /*0x76c655*/
                          v17,
                          (const wchar_t **)&v21.ptr_C,
                          (unsigned int *)(*((unsigned int *)this + 279) + 172),
                          1);
  else
    v18 = 0; /*0x76c659*/
  ScoreClass::SetState(v18, 1); /*0x76c65f*/
  PriorityQueue::Add((PriorityQueue *)this, (int)v18); /*0x76c667*/
  ConstructWDTSelection_Create_76EEB0((TechnoClass *)this); /*0x76c66e*/
  DeleteAndZero::Alt((DeleteAndZero *)&v21.ptr_C); /*0x76c677*/
  DeleteAndZero::Alt((DeleteAndZero *)&v21.uniqueId); /*0x76c680*/
  DeleteAndZero((ObjectClass *)&v21.ptr_8); /*0x76c689*/
  HashTable::DestroyHashTableINIClass((INIClass *)&v21.nextArrayIndex); /*0x76c692*/
  v21.customSound_controller[2] = (int)&g_ptr_7E16B0; /*0x76c69e*/
  v23 = 0; /*0x76c6a6*/
  Vector::Clear((int)v22); /*0x76c6ad*/
  v21.customSound_controller[2] = (int)&off_7E1668; /*0x76c6b6*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v21.customSound_controller[2]); /*0x76c6be*/
  return this; /*0x76c6c5*/

}

// ==== BACKFILL 0x0076CA60  ConstructWDTSelection_Create_76CA60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_76CA60::ConstructWDTSelection_Create_76CA60(Selection_WorldDominationTour * aP1, char ** a2) {

  TechnoClass *v3; // esi
  char **v4; // ebp
  INIClass *v5; // edi
  int Key; // eax
  int v7; // ecx
  bool v8; // bl
  int v9; // eax
  ObjectClass *v10; // edi
  int isTurretRotateSoundPlaying; // ecx
  int v12; // eax
  int *v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // edx
  char *v17; // [esp+10h] [ebp-14h] BYREF
  String v18; // [esp+14h] [ebp-10h] BYREF
  TechnoClass *v19; // [esp+1Ch] [ebp-8h]
  int v20; // [esp+20h] [ebp-4h]

  v3 = this; /*0x76ca66*/
  v19 = this; /*0x76ca6d*/
  unknown_libname_73(&v17); /*0x76ca71*/
  v4 = a2; /*0x76ca76*/
  v5 = (INIClass *)aP1; /*0x76ca7a*/
  Key = INIClass::FindKey(aP1, a2); /*0x76ca81*/
  v7 = 0; /*0x76ca86*/
  v20 = Key; /*0x76ca88*/
  *(unsigned int *)&v18.m_3[1] = 0; /*0x76ca8e*/
  if ( Key > 0 ) /*0x76ca92*/
  {
    while ( 1 ) /*0x76caab*/
    {
      INIClass::GetStringByIndexEx(v5, (char **)&a2, v4, v7); /*0x76caab*/
      if ( (uint8_t)String::NotEquals((String *)&a2, 0) ) /*0x76cab6*/
      {
        String::Assign(&v18, 0); /*0x76cac9*/
        v8 = INIClass::ReadString(v5, v4, (char **)&a2, (char **)&v18, (int)&v17) > 0; /*0x76caeb*/
        DeleteAndZero((ObjectClass *)&v18); /*0x76caee*/
        if ( v8 ) /*0x76caf5*/
        {
          if ( (uint8_t)String::Equals_Alt((String *)&a2, g_INI_Key_Theme) ) /*0x76cb04*/
          {
            String::Reassign((String *)&v3->turretRotateSoundController[2], (const char **)&v17); /*0x76cbcf*/
            DeleteAndZero((ObjectClass *)&a2); /*0x76cbd8*/
            break; /*0x76cbd8*/
          }
          v9 = __2_YAPAXI_Z(0x10u); /*0x76cb13*/
          if ( v9 ) /*0x76cb1d*/
            v10 = (ObjectClass *)Audio::ParseVolume(v9, (const char **)&a2, (String *)&v17); /*0x76cb30*/
          else
            v10 = 0; /*0x76cb34*/
          if ( (uint8_t)String::Equals_Alt((String *)v10, 0) ) /*0x76cb3a*/
          {
            if ( v10 ) /*0x76cb45*/
            {
              j_DeleteAndZero(v10); /*0x76cb49*/
              __3_YAXPAX_Z(v10); /*0x76cb4f*/
            }
          }
          else if ( v10 ) /*0x76cb5b*/
          {
            isTurretRotateSoundPlaying = v3->isTurretRotateSoundPlaying; /*0x76cb5d*/
            v12 = v3->gattlingSoundController[0]; /*0x76cb63*/
            v13 = &v3->turretRotateSoundController[3]; /*0x76cb69*/
            if ( v12 < isTurretRotateSoundPlaying /*0x76cb8e*/
              || (*((unsigned char *)v13 + 13) || !isTurretRotateSoundPlaying)
              && (v14 = v13[5], v14 > 0)
              && (*(uint8_t (**)(int *, int, unsigned int))(*v13 + 8))(
                   v13,
                   isTurretRotateSoundPlaying + v14,
                   0) )
            {
              v15 = v13[4]; /*0x76cb95*/
              v16 = v13[1]; /*0x76cb98*/
              v13[4] = v15 + 1; /*0x76cb9e*/
              *(unsigned int *)(v16 + 4 * v15) = v10; /*0x76cba1*/
            }
          }
        }
      }
      DeleteAndZero((ObjectClass *)&a2); /*0x76cba8*/
      v7 = ++*(unsigned int *)&v18.m_3[1]; /*0x76cbb5*/
      if ( *(int *)&v18.m_3[1] >= v20 ) /*0x76cbbc*/
        break; /*0x76cbbc*/
      v5 = (INIClass *)aP1; /*0x76ca9a*/
      v3 = v19; /*0x76ca9e*/
    }
  }
  DeleteAndZero((ObjectClass *)&v17); /*0x76cbdd*/

}

// ==== BACKFILL 0x0076CBF0  ConstructWDTSelection_Create_76CBF0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_76CBF0::ConstructWDTSelection_Create_76CBF0(void* aP1, char* aP2) {

  char **v4; // eax
  char **v5; // eax
  char **v6; // edi
  INIClass *v7; // ebp
  bool v8; // bl
  int v9; // eax
  int v10; // eax
  char **v11; // eax
  char **v12; // eax
  int v13; // eax
  int v14; // eax
  char **v15; // eax
  PaletteClass v16; // [esp+10h] [ebp-10h] BYREF
  String v17; // [esp+14h] [ebp-Ch] BYREF
  char *v18; // [esp+1Ch] [ebp-4h] BYREF

  unknown_libname_73(&v16); /*0x76cbfd*/
  v4 = StaticString::Factory(*(StaticString **)(this->ambientSoundController[4] + 68)); /*0x76cc08*/
  String::AssignFromPtr(&v17, (const char **)v4); /*0x76cc12*/
  String::Assign((String *)&v17.m_3[1], 0); /*0x76cc1d*/
  v5 = String::Concat2(&v17, &v18, aZoomingtarget); /*0x76cc3a*/
  v6 = aP2; /*0x76cc3f*/
  v7 = (INIClass *)aP1; /*0x76cc43*/
  v8 = INIClass::ReadString((INIClass *)aP1, aP2, v5, (char **)&v17.m_3[1], (int)&v16) > 0; /*0x76cc56*/
  DeleteAndZero((ObjectClass *)&v18); /*0x76cc59*/
  DeleteAndZero((ObjectClass *)&v17.m_3[1]); /*0x76cc62*/
  if ( v8 ) /*0x76cc69*/
  {
    v9 = __2_YAPAXI_Z(0x10u); /*0x76cc6d*/
    if ( v9 ) /*0x76cc77*/
      v10 = String::SplitComma(v9, (String *)&v16); /*0x76cc80*/
    else
      v10 = 0; /*0x76cc87*/
    this->attackedTargets[0] = v10; /*0x76cc89*/
  }
  String::Assign((String *)&aP2, 0); /*0x76cc95*/
  v11 = String::Concat2(&v17, (char **)&aP1, aTargetpalette); /*0x76ccb2*/
  INIClass::ReadString(v7, v6, v11, (char **)&aP2, (int)&v16); /*0x76ccbb*/
  DeleteAndZero((ObjectClass *)&aP1); /*0x76ccc4*/
  DeleteAndZero((ObjectClass *)&aP2); /*0x76cccd*/
  this->currentTargets[5] = (int)PaletteClass::Load(&v16); /*0x76cce1*/
  String::Assign((String *)&aP2, 0); /*0x76cce7*/
  v12 = String::Concat2(&v17, (char **)&aP1, aTarget); /*0x76cd04*/
  INIClass::ReadString(v7, v6, v12, (char **)&aP2, (int)&v16); /*0x76cd0d*/
  DeleteAndZero((ObjectClass *)&aP1); /*0x76cd16*/
  DeleteAndZero((ObjectClass *)&aP2); /*0x76cd1f*/
  v13 = __2_YAPAXI_Z(0x10u); /*0x76cd26*/
  if ( v13 ) /*0x76cd30*/
    v14 = String::SplitComma(v13, (String *)&v16); /*0x76cd39*/
  else
    v14 = 0; /*0x76cd40*/
  this->attackedTargets[1] = v14; /*0x76cd42*/
  v15 = String::Concat2(&v17, (char **)&aP2, aTargetdividing); /*0x76cd58*/
  this->attackedTargets[2] = INIClass::ReadInt((bool *)v7->__pad_0, (String *)v6, (String *)v15, 32); /*0x76cd6a*/
  DeleteAndZero((ObjectClass *)&aP2); /*0x76cd70*/
  DeleteAndZero((ObjectClass *)&v17); /*0x76cd79*/
  DeleteAndZero((ObjectClass *)&v16); /*0x76cd82*/

}

// ==== BACKFILL 0x0076D3A0  sub_76D3A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool sub_76D3A0(unsigned int * a2)
{
    (void)a2; return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0076D3A0.json)
}

// ==== BACKFILL 0x0076D470  sub_76D470  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_76D470(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0076D470.json)
}

// ==== BACKFILL 0x0076DAD0  TerritorySelectWDT  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool Gap2Recv_76DAD0::TerritorySelectWDT(ObjectClass * aP1) {

  int v3; // ecx
  int v4; // eax
  bool v5; // bl
  MSAnim *v6; // edi
  int State; // eax
  wchar_t *StringCSF; // eax
  unsigned int CellType; // edi
  int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // edi
  wchar_t *v14; // eax
  DeleteAndZero *v15; // ecx
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  int v19; // eax
  int v20; // edi
  wchar_t **v21; // eax
  MSAnim *v22; // edi
  int v23; // ebp
  wchar_t *v24; // eax
  wchar_t **v25; // eax
  wchar_t *v26; // [esp-4h] [ebp-3Ch]
  DeleteAndZero v27; // [esp+10h] [ebp-28h] BYREF
  WideString v28[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  WideString v29[4]; // [esp+20h] [ebp-18h] BYREF
  WideString v30[4]; // [esp+24h] [ebp-14h] BYREF
  DeleteAndZero v31; // [esp+28h] [ebp-10h] BYREF
  int v32; // [esp+34h] [ebp-4h]

  v3 = this->customSound_controller[1]; /*0x76dae0*/
  v4 = this->currentTargets[4]; /*0x76dae3*/
  v5 = v3 != 0; /*0x76daeb*/
  if ( *(unsigned int *)(aP1 + 4) != v4 ) /*0x76daf0*/
  {
    if ( v4 ) /*0x76daf8*/
    {
      if ( v3 ) /*0x76dafc*/
        ComPtr::Set((ComPtr *)this->customSound_controller, 0); /*0x76db03*/
      TerritorySelectWDT_Process((ObjectClass *)this->currentTargets[4], 0, &this->ptr_0); /*0x76db11*/
      v6 = *(MSAnim **)(this->currentTargets[4] + 44); /*0x76db1c*/
      if ( v6 ) /*0x76db21*/
      {
        MSAnim::SetField(v6, this->attackedTargets[2] - 1); /*0x76db2d*/
        MSAnim::GetField(v6, 0); /*0x76db36*/
        TerritoryUpdateDisplayWOL((ObjectClass *)v6, 0); /*0x76db3f*/
      }
    }
    ComPtr::Set((ComPtr *)&this->currentTargets[3], *(unsigned int *)(aP1 + 4)); /*0x76db54*/
    if ( !this->currentTargets[4] ) /*0x76db59*/
    {
      State = FileClass::GetState((RawFileClass *)(this->ambientSoundController[4] + 8)); /*0x76db6b*/
      ScoreText::ShowAlt((ScoreText *)this, (const wchar_t **)(State + 20), 0); /*0x76db76*/
      StringCSF = GetStringCSF(g_Str_WDT_TerritorySelectToolTip, 0, g_Str_File_WDTSel_cpp, 1230); /*0x76db8c*/
      WideString::Assign((WideString *)&aP1, StringCSF); /*0x76db96*/
      ScoreText::Show((ScoreText *)this, (const wchar_t **)&aP1); /*0x76dba2*/
      DeleteAndZero::Alt((DeleteAndZero *)&aP1); /*0x76dbab*/
      TerritorySelectWDT_Delete((TechnoClass *)&this->customSound_controller[2], 1, 0, 30); /*0x76dbb9*/
      return v5; /*0x76dbc7*/
    }
    v5 = 0; /*0x76dbce*/
    unknown_libname_74(&v27); /*0x76dbd0*/
    unknown_libname_74(&v27.DeleteAndZero_field_0x08); /*0x76dbd9*/
    CellType = WDTClass::GetCellType( /*0x76dbf0*/
                 (WDTClass *)this->turretRotateSoundController[1],
                 *(unsigned int *)(this->currentTargets[4] + 8));
    v11 = 2; /*0x76dbf2*/
    if ( CellType >= 2 ) /*0x76dbfa*/
      v11 = *(unsigned int *)(this->ambientSoundController[4] + 68) != CellType; /*0x76dc0b*/
    ScoreScreen::RemoveItem((ScoreScreen *)&this->customSound_controller[2], 3, v11, 0, 0, 30); /*0x76dc19*/
    v12 = CellType - 1; /*0x76dc1e*/
    if ( v12 ) /*0x76dc1f*/
    {
      v13 = v12 - 1; /*0x76dc25*/
      if ( v13 ) /*0x76dc26*/
      {
        if ( v13 == 1 ) /*0x76dc29*/
        {
          v16 = GetStringCSF(aWdtSovietheldt, 0, g_Str_File_WDTSel_cpp, 689); /*0x76dc71*/
          WideString::Assign(v29, v16); /*0x76dc7b*/
          ScoreText::Show((ScoreText *)this, (const wchar_t **)v29); /*0x76dc87*/
          v15 = (DeleteAndZero *)v29; /*0x76dc8c*/
        }
        else
        {
          v14 = GetStringCSF(g_Str_WDT_TerritorySelectToolTip, 0, g_Str_File_WDTSel_cpp, 697); /*0x76dc3c*/
          WideString::Assign(v28, v14); /*0x76dc46*/
          ScoreText::Show((ScoreText *)this, (const wchar_t **)v28); /*0x76dc52*/
          v15 = (DeleteAndZero *)v28; /*0x76dc57*/
        }
      }
      else
      {
        v17 = GetStringCSF(aWdtAlliedheldt, 0, g_Str_File_WDTSel_cpp, 685); /*0x76dca3*/
        WideString::Assign(v30, v17); /*0x76dcad*/
        ScoreText::Show((ScoreText *)this, (const wchar_t **)v30); /*0x76dcb9*/
        v15 = (DeleteAndZero *)v30; /*0x76dcbe*/
      }
    }
    else
    {
      v18 = GetStringCSF(aWdtTerritoryse_0, 0, g_Str_File_WDTSel_cpp, 693); /*0x76dcd5*/
      WideString::Assign((WideString *)&v31, v18); /*0x76dcdf*/
      ScoreText::Show((ScoreText *)this, (const wchar_t **)&v31); /*0x76dceb*/
      v15 = &v31; /*0x76dcf0*/
    }
    DeleteAndZero::Alt(v15); /*0x76dcf4*/
    TerritorySelectWDT_Process((ObjectClass *)this->currentTargets[4], 1, &this->ptr_0); /*0x76dcff*/
    if ( Conflict::GetOwnerHouse(*(Conflict **)(this->ambientSoundController[4] + 12)) == this->currentTargetThreatValues[4] ) /*0x76dd18*/
    {
      v19 = this->ambientSoundController[4] + 24; /*0x76dd25*/
      v32 = 0; /*0x76dd28*/
      v31.DeleteAndZero_field_0x08 = v19; /*0x76dd30*/
      v31.DeleteAndZero_field_0x04 = (int)&g_var_0f5bcb; /*0x76dd34*/
      if ( Campaign_WorldDominationTour_24::AddRef((_VectorCursor_V_rc_ptr_VConflict_WorldDominationTour_V_DynamicVectorClass_V_rc_ptr_VConflict_WorldDominationTour *)&v31.DeleteAndZero_field_0x04) ) /*0x76dd3c*/
      {
        do /*0x76dd7b*/
        {
          v20 = *(unsigned int *)(this->currentTargets[4] + 8); /*0x76dd54*/
          if ( FindWDTTerritoryClass_Find_Find(*(ObjectClass **)(*(unsigned int *)(v31.DeleteAndZero_field_0x08 + 4) /*0x76dd66*/
                                                               + 8 * v32
                                                               + 4)) == v20 )
            break; /*0x76dd66*/
          (*(void (**)(int *))(v31.DeleteAndZero_field_0x04 + 8))(&v31.DeleteAndZero_field_0x04); /*0x76dd70*/
        }
        while ( (*(uint8_t (**)(int *))(v31.DeleteAndZero_field_0x04 + 4))(&v31.DeleteAndZero_field_0x04) ); /*0x76dd7b*/
      }
      if ( (*(uint8_t (**)(int *))(v31.DeleteAndZero_field_0x04 + 4))(&v31.DeleteAndZero_field_0x04) ) /*0x76dd8a*/
      {
        v5 = 1; /*0x76dd9d*/
        ComPtr::Set( /*0x76ddaa*/
          (ComPtr *)this->customSound_controller,
          *(unsigned int *)(*(unsigned int *)(v31.DeleteAndZero_field_0x08 + 4) + 8 * v32 + 4));
        v21 = TerritorySelectWDT_Create( /*0x76ddc7*/
                *(char **)(*(unsigned int *)(v31.DeleteAndZero_field_0x08 + 4) + 8 * v32 + 4),
                (wchar_t **)&v31);
        WideString::Reassign_Alt((WideString *)&v27, (const wchar_t **)v21); /*0x76ddd1*/
        DeleteAndZero::Alt(&v31); /*0x76ddda*/
        WideString::Reassign_Alt((WideString *)&v27.DeleteAndZero_field_0x08, (const wchar_t **)&v27); /*0x76dde8*/
        v22 = *(MSAnim **)(*(unsigned int *)(aP1 + 4) + 44); /*0x76ddf4*/
        if ( v22 ) /*0x76ddf9*/
        {
          MSAnim::SetField(v22, 0xFFFFFFFF); /*0x76ddff*/
          MSAnim::GetField(v22, this->attackedTargets[2]); /*0x76de0d*/
          TerritoryUpdateDisplayWOL((ObjectClass *)v22, this->attackedTargets[2]); /*0x76de1b*/
        }
      }
    }
    v23 = this->currentTargets[4]; /*0x76de20*/
    v26 = GetStringCSF(aWdtTerritorysu, 0, g_Str_File_WDTSel_cpp, 727); /*0x76de3d*/
    v24 = GetStringCSF(aWdtTerritorypr, 0, g_Str_File_WDTSel_cpp, 727); /*0x76de54*/
    v25 = FormatWideStringPrefix((wchar_t **)&aP1, v24, (wchar_t **)(v23 + 12)); /*0x76de5f*/
    WideString::AssignConcat((WideString *)v25, (wchar_t **)&v27.DeleteAndZero_field_0x04, v26); /*0x76de66*/
    DeleteAndZero::Alt((DeleteAndZero *)&aP1); /*0x76de6f*/
    if ( WideString::Length((WideString *)&v27.DeleteAndZero_field_0x08) ) /*0x76de78*/
      WideString::Append((WideString *)&v27.DeleteAndZero_field_0x04, (const wchar_t **)&v27); /*0x76de8a*/
    ScoreText::ShowAlt((ScoreText *)this, (const wchar_t **)&v27.DeleteAndZero_field_0x04, 0); /*0x76de98*/
    DeleteAndZero::Alt((DeleteAndZero *)&v27.DeleteAndZero_field_0x04); /*0x76dea1*/
    DeleteAndZero::Alt((DeleteAndZero *)&v27.DeleteAndZero_field_0x08); /*0x76deaa*/
    DeleteAndZero::Alt(&v27); /*0x76deb3*/
  }
  return v5; /*0x76dbbe*/

}

// ==== BACKFILL 0x0076DED0  sub_76DED0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_76DED0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0076DED0.json)
}

// ==== BACKFILL 0x0076DF50  sub_76DF50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_76DF50()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0076DF50.json)
}

// ==== BACKFILL 0x0076DFD0  sub_76DFD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_76DFD0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0076DFD0.json)
}

// ==== BACKFILL 0x0076E090  sub_76E090  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_76E090()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0076E090.json)
}

// ==== BACKFILL 0x0076E180  ShowWDTTerritorySelection_Show  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_76E180::ShowWDTTerritorySelection_Show() {

  int v2; // eax
  wchar_t *StringCSF; // eax
  ObjectClass *v4; // [esp+0h] [ebp-14h]
  DeleteAndZero v5; // [esp+4h] [ebp-10h] BYREF
  int v6; // [esp+10h] [ebp-4h]

  v2 = this->currentTargets[1]; /*0x76e186*/
  if ( !*(unsigned char *)(v2 + 104) ) /*0x76e18c*/
  {
    WDTGame::ToggleTeamMode(v2, &this->ptr_0, 1); /*0x76e19c*/
    String::Assign((String *)&v5, aMousecancel); /*0x76e1aa*/
    if ( (uint8_t)String::NotEquals((String *)&v5, 0) ) /*0x76e1b5*/
    {
      v6 = 0; /*0x76e1c8*/
      v5.DeleteAndZero_field_0x08 = (int)&this->turretRotateSoundController[3]; /*0x76e1d0*/
      v5.DeleteAndZero_field_0x04 = (int)&g_var_36820e; /*0x76e1d8*/
      if ( Vector::HasCapacity((_VectorCursor_PAVMSSfxEntry_V_DynamicVectorClass_PAVMSSfxEntry *)&v5.DeleteAndZero_field_0x04) ) /*0x76e1e0*/
      {
        do /*0x76e219*/
        {
          if ( !(uint8_t)String::Compare( /*0x76e1fd*/
                                   (String *)&v5,
                                   *(const char ***)(*(unsigned int *)(v5.DeleteAndZero_field_0x08 + 4) + 4 * v6)) )
            break; /*0x76e204*/
          (*(void (**)(int *))(v5.DeleteAndZero_field_0x04 + 8))(&v5.DeleteAndZero_field_0x04); /*0x76e20e*/
        }
        while ( (*(uint8_t (**)(int *))(v5.DeleteAndZero_field_0x04 + 4))(&v5.DeleteAndZero_field_0x04) ); /*0x76e219*/
      }
      if ( (*(uint8_t (**)(int *))(v5.DeleteAndZero_field_0x04 + 4))(&v5.DeleteAndZero_field_0x04) ) /*0x76e228*/
        nullsub_24(v4); /*0x76e23d*/
    }
    DeleteAndZero((ObjectClass *)&v5); /*0x76e246*/
    StringCSF = GetStringCSF(aWolWdtterritor, 0, g_Str_File_WDTSel_cpp, 894); /*0x76e25c*/
    WideString::Assign((WideString *)&v5, StringCSF); /*0x76e266*/
    ScoreText::Show((ScoreText *)this, (const wchar_t **)&v5); /*0x76e272*/
    DeleteAndZero::Alt(&v5); /*0x76e27b*/
  }

}

// ==== BACKFILL 0x0076E750  Team_Start_76E750  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_76E750::Team_Start_76E750(ScoreScreen * aP1) {

  int OwnerHouse; // ebx
  int v4; // ebp
  int v5; // eax
  ScoreScreen *v6; // edi
  DeleteAndZero v8; // [esp-8h] [ebp-24h]
  DeleteAndZero v9; // [esp+10h] [ebp-Ch] BYREF

  WideString::Assign((wchar_t **)&v9, &g_TypeClass_DefaultString); /*0x76e762*/
  ScoreText::ShowAlt((ScoreText *)this, (const wchar_t **)&v9, 0); /*0x76e770*/
  DeleteAndZero::Alt(&v9); /*0x76e779*/
  OwnerHouse = Conflict::GetOwnerHouse(*(Conflict **)(*((unsigned int *)this + 19) + 12)); /*0x76e794*/
  v4 = sub_764FF0(*(ObjectClass **)((char *)this + 76), aP1); /*0x76e79b*/
  if ( OwnerHouse - v4 > 8 ) /*0x76e7a4*/
    v4 = OwnerHouse - 8; /*0x76e7a6*/
  ActivateScreenWDT((int)&v9.DeleteAndZero_field_0x04, v4); /*0x76e7b8*/
  if ( v9.DeleteAndZero_field_0x08 ) /*0x76e7c3*/
  {
    v5 = WDTClass::CountCellType((WDTClass *)v9.DeleteAndZero_field_0x08, *(unsigned int *)(*((unsigned int *)this + 19) + 68)); /*0x76e7d0*/
    if ( v5 < *((unsigned int *)this + 271) ) /*0x76e7db*/
    {
      v6 = (ScoreScreen *)((char *)this + 88); /*0x76e7f9*/
      if ( v5 > *((unsigned int *)this + 272) ) /*0x76e7fe*/
        ScoreScreen::RemoveItem(v6, 0, 2, 1, 1, 0); /*0x76e812*/
      else
        ScoreScreen::RemoveItem(v6, 0, 1, v5 <= 0, 1, 0); /*0x76e808*/
    }
    else
    {
      ScoreScreen::RemoveItem((ScoreScreen *)((char *)this + 88), 0, 0, v5 >= 30, 1, 0); /*0x76e7ed*/
    }
    v8.DeleteAndZero_field_0x04 = OwnerHouse; /*0x76e817*/
    *(unsigned int *)v8.__pad_0 = v4; /*0x76e818*/
    WDTGame::ReviewHistory(this, v8); /*0x76e81b*/
    while ( (uint8_t)j_Audio_IsPlaying() ) /*0x76e822*/
    {
      if ( *((unsigned char *)this + 1092) ) /*0x76e82b*/
        break; /*0x76e833*/
      GameClass::FrameLoop((GameClass *)this, 5); /*0x76e839*/
      DDraw::HandleSuspend((DDraw *)this); /*0x76e840*/
      while ( EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]) ) /*0x76e84b*/
      {
        if ( EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]) == 27 ) /*0x76e864*/
          *((unsigned char *)this + 1092) = 1; /*0x76e866*/
      }
    }
  }
  v9.DeleteAndZero_field_0x04 = (int)&g_var_5878c0; /*0x76e88c*/
  return ComPtr::Release((ComPtr *)&v9.DeleteAndZero_field_0x04); /*0x76e899*/

}

// ==== BACKFILL 0x0076EEB0  ConstructWDTSelection_Create_76EEB0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_76EEB0::ConstructWDTSelection_Create_76EEB0() {

  String *v2; // edi
  char *v3; // eax
  int v4; // eax
  int result; // eax

  v2 = (String *)&this->turretRotateSoundController[2]; /*0x76eeb6*/
  byte_A8ED9C = 0; /*0x76eebc*/
  if ( (uint8_t)String::NotEquals((String *)&this->turretRotateSoundController[2], 0) ) /*0x76eec5*/
  {
    v3 = String::GetOrEmpty(v2); /*0x76eed0*/
    v4 = StringList::Find((StringList *)&unk_A83D10, v3); /*0x76eedb*/
    ThemeClass::Play((ThemeClass *)&unk_A83D10, v4); /*0x76eee6*/
    byte_A83D20 = 1; /*0x76eeeb*/
  }
  (*(void (**)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 12))(dword_887640); /*0x76eefa*/
  (*(void (**)(DSurface *, unsigned int))(DSurface_Alternate->DSurface_field_0x0 + 24))(DSurface_Alternate, 0); /*0x76ef07*/
  (*(void (**)(ObjectClass *, unsigned int))(g_DSurface_Hidden->ptr_0 + 24))(g_DSurface_Hidden, 0); /*0x76ef14*/
  (*(void (**)(DSurface *, ObjectClass *, unsigned int, int))(g_DSurface_Primary->DSurface_field_0x0 + 4))( /*0x76ef29*/
    g_DSurface_Primary,
    g_DSurface_Hidden,
    0,
    1);
  Timer::PumpMessages((Timer *)dword_87F770); /*0x76ef32*/
  ConstructWDTSelection_Create_76EEB0_Create( /*0x76ef42*/
    (ObjectClass *)this->currentTargets[1],
    this,
    &this->customSound_controller[2]);
  for ( result = (*(int (**)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 40))(dword_887640); /*0x76ef56*/
        result < 0;
        result = (*(int (**)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 40))(dword_887640) )
  {
    (*(void (**)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 16))(dword_887640); /*0x76ef60*/
  }
  return result; /*0x76ef52*/

}

// ==== BACKFILL 0x0076F000  ComPtr::DestroyWrapper  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ComPtr::DestroyWrapper(int aP0, ObjectClass * aP1)
{

  FindTerritoryWOL(aP1); /*0x76f00f*/
  return aP0; /*0x76f016*/

}

// ==== BACKFILL 0x0076F020  FileClass::GetState  cls=FileClass  sig=csp  renamed_refs=0  residual=- ====
int FileClass::GetState()
{

  return this->FilePointer; /*0x76f023*/

}

// ==== BACKFILL 0x0076F060  ComPtr::Territory_Dtor  cls=ComPtr  sig=csp  renamed_refs=0  residual=- ====
void* ComPtr::Territory_Dtor() {
  *(unsigned int *)this->__pad_0 = (void *)&rc_ptr_WorldDominationTour_Territory_vftable; /*0x76f060*/
  return ComPtr::Release(int a1) ;
}

// ==== BACKFILL 0x0076F070  FileClass::SetState  cls=FileClass  sig=csp  renamed_refs=0  residual=- ====
int FileClass::SetState(void *a1)
{

  return this->FilePointer; /*0x76f073*/

}

// ==== BACKFILL 0x0076F470  ActivateScreenWDT_Create  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
rc_ptr_base * ActivateScreenWDT_Create(rc_ptr_base * a1, int a2, unsigned int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x76F470)
}

// ==== BACKFILL 0x0076F500  ConstructWDTSelection_Create_76F500  cls=rc_ptr  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_76F500::ConstructWDTSelection_Create_76F500() {

  int v2; // eax
  unsigned int *v3; // esi
  unsigned int *v4; // edi

  v2 = __2_YAPAXI_Z(0x14u); /*0x76f506*/
  v3 = (unsigned int *)v2; /*0x76f50b*/
  if ( v2 ) /*0x76f512*/
  {
    v4 = (unsigned int *)(v2 + 8); /*0x76f515*/
    *(unsigned int *)(v2 + 4) = 0; /*0x76f51a*/
    *(unsigned int *)v2 = &g_ptr_7F0954; /*0x76f521*/
    ComPtr::Constructor((ComPtr *)(v2 + 8)); /*0x76f527*/
    *v4 = &g_var_5878c0; /*0x76f52c*/
    v3[4] = 0; /*0x76f532*/
    *v3 = &WorldDominationTour::g_var_37f8da; /*0x76f539*/
  }
  else
  {
    v3 = 0; /*0x76f542*/
  }
  ComPtr::Constructor((ComPtr *)this); /*0x76f546*/
  /* X11: ptr_0 install elided (implicit via rc_ptr virtuals 0x76f54d) */
  ComPtr::Set((ComPtr *)this, (int)v3); /*0x76f554*/
  return this; /*0x76f55b*/

}

// ==== BACKFILL 0x0076F910  ArtConfig_Read  cls=rc_ptr  sig=csp  renamed_refs=0  residual=- ====
rc_ptr * ArtConfig_Read(rc_ptr_base * a1, int edx0, unsigned int * a2, ReferenceCounted * Source, char ** a4, ReferenceCounted * aP5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x76F910)
}

// ==== BACKFILL 0x0076FEB0  TerritorySelectWDT_Process  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_76FEB0::TerritorySelectWDT_Process(int a2, void* aP2) {

  int owningHouseIndex; // ecx
  int *v5; // eax
  int v6[4]; // [esp+8h] [ebp-20h] BYREF
  unsigned char v7[16]; // [esp+18h] [ebp-10h] BYREF

  owningHouseIndex = this->owningHouseIndex; /*0x76feb6*/
  if ( owningHouseIndex ) /*0x76febb*/
  {
    (*(void (**)(int, int))(*(unsigned int *)owningHouseIndex + 4))(owningHouseIndex, a2); /*0x76fec5*/
    v5 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)this->owningHouseIndex + 24))( /*0x76fed2*/
                  this->owningHouseIndex,
                  v7);
    v6[0] = *v5; /*0x76fedb*/
    v6[1] = v5[1]; /*0x76fee2*/
    v6[2] = v5[2]; /*0x76fee9*/
    v6[3] = v5[3]; /*0x76fef7*/
    Team::ReleaseAll((Team *)aP2, (int)v6); /*0x76fefb*/
    DSurface::Flip2(); /*0x76ff02*/
    MSEngine::ProcessEvents((MSEngine *)aP2, this->owningHouseIndex, 300000); /*0x76ff12*/
  }

}

// ==== BACKFILL 0x0076FF40  FindTerritoryWOL  cls=rc_ptr  sig=csp  renamed_refs=0  residual=- ====
rc_ptr * FindTerritoryWOL(ObjectClass * aP0, int a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x76FF40)
}
