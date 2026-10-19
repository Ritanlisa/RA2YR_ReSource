// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x004A0180  EnumConnectionsClass::Skip  cls=EnumConnectionsClass  sig=csp  renamed_refs=0  residual=- ====
int EnumConnectionsClass::Skip(int a1)
{

  *((unsigned int *)a1 + 7) = 0; /*0x4a0184*/
  return 0; /*0x4a018d*/

}

// ==== BACKFILL 0x004A0450  sub_4A0450  cls=EnumConnectionsClass  sig=csp  renamed_refs=0  residual=- ====
void sub_4A0450()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A0450.json)
}

// ==== BACKFILL 0x004A05D0  ConnectionPointClass::ddtor  cls=ConnectionPointClass  sig=csp  renamed_refs=0  residual=- ====
int ConnectionPointClass::ddtor(unsigned int *a1, unsigned int *a2)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}

// ==== BACKFILL 0x004A0630  ConnectionPointClass::Unadvise  cls=ConnectionPointClass  sig=csp  renamed_refs=0  residual=- ====
int ConnectionPointClass::Unadvise(int a1, int (__stdcall ***a2)(unsigned int, int, int *) a2, int * updated)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A0630)
}

// ==== BACKFILL 0x004A0700  ConnectionPointClass::EnumConnections  cls=ConnectionPointClass  sig=csp  renamed_refs=0  residual=- ====
int ConnectionPointClass::EnumConnections(int a1, int a2)
{

  int v2; // eax
  int v3; // esi
  unsigned int *i; // ecx
  int v6; // ecx
  int v7; // ecx
  int ConnectionPointClass_field_0x20; // ecx

  v2 = 0; /*0x4a0705*/
  v3 = *((unsigned int *)a1 + 11); /*0x4a0707*/
  if ( v3 <= 0 ) /*0x4a070d*/
    return -2147220992; /*0x4a0725*/
  for ( i = (unsigned int *)(a1->ConnectionPointClass_field_0x20 + 4); *i != a2; i += 2 ) /*0x4a0716*/
  {
    if ( ++v2 >= v3 ) /*0x4a0723*/
      return -2147220992; /*0x4a0723*/
  }
  v6 = *((unsigned int *)a1 + 11); /*0x4a072f*/
  if ( v2 < v6 ) /*0x4a0734*/
  {
    v7 = v6 - 1; /*0x4a0736*/
    for ( *((unsigned int *)a1 + 11) = v7; /*0x4a073c*/
          v2 < *((unsigned int *)a1 + 11);
          *(unsigned int *)(ConnectionPointClass_field_0x20 + 8 * v2 - 4) = *(unsigned int *)(ConnectionPointClass_field_0x20
                                                                                + 8 * v2
                                                                                + 4) )
    {
      ConnectionPointClass_field_0x20 = a1->ConnectionPointClass_field_0x20; /*0x4a073e*/
      ++v2; /*0x4a0741*/
      *(unsigned int *)(ConnectionPointClass_field_0x20 + 8 * v2 - 8) = *(unsigned int *)(ConnectionPointClass_field_0x20 + 8 * v2); /*0x4a0745*/
    }
  }
  return 0; /*0x4a0725*/

}

// ==== BACKFILL 0x004A08D0  sub_4A08D0  cls=ConnectionPointClass  sig=csp  renamed_refs=0  residual=- ====
void sub_4A08D0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A08D0.json)
}

// ==== BACKFILL 0x004A0B10  EnumConnectionPointsClass::Skip  cls=EnumConnectionPointsClass  sig=csp  renamed_refs=0  residual=- ====
int EnumConnectionPointsClass::Skip(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A0B10)
}

// ==== BACKFILL 0x004A0CE0  sub_4A0CE0  cls=EnumConnectionPointsClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_4A0CE0(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A0CE0.json)
}

// ==== BACKFILL 0x004A0DB0  sub_4A0DB0  cls=EnumConnectionPointsClass  sig=csp  renamed_refs=0  residual=- ====
void sub_4A0DB0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A0DB0.json)
}

// ==== BACKFILL 0x004A1750  CellClass::Cleanup  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::Cleanup() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 6 errs): wrong-universe gap2 body; truth func_0x4A1750.json */
}

// ==== BACKFILL 0x004A1AA0  CellClass::DestroyOverlay  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::DestroyOverlay() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 9 errs): wrong-universe gap2 body; truth func_0x4A1AA0.json */
}

// ==== BACKFILL 0x004A1C10  Power::FinalizeDrain  cls=Power  sig=csp  renamed_refs=0  residual=- ====
int Power::FinalizeDrain(int a2)
{

  void *Power_field_0x4; // eax
  int result; // eax
  char *i; // eax
  int *p_Power_field_0x8; // esi
  unsigned int v6; // eax
  int v7; // edi

  Power_field_0x4 = (void *)(this->Power_field_0x4); /*0x4a1c10*/
  if ( !Power_field_0x4 ) /*0x4a1c15*/
    this->a2 = 0; /*0x4a1c17*/
  *((unsigned char *)&this->a2 + (unsigned int)Power_field_0x4) = a2; /*0x4a1c1f*/
  result = (int)this->Power_field_0x4 + 1; /*0x4a1c27*/
  this->Power_field_0x4 = (unsigned int)((void *)result); /*0x4a1c29*/
  if ( result == 4 ) /*0x4a1c2f*/
  {
    LOBYTE(this->Power_field_0xC) = this->Power_field_0x4; /*0x4a1c34*/
    for ( i = (char *)this->Power_field_0x4 + 1; (unsigned int)i < 4; ++i ) /*0x4a1c3d*/
      i[(unsigned int)(unsigned int *)this + 8] = (char)this->a2; /*0x4a1c42*/
    a2 = (int)this->a2; /*0x4a1c50*/
    p_Power_field_0x8 = &a2; /*0x4a1c57*/
    v6 = ~this->Power_field_0x0; /*0x4a1c5b*/
    v7 = 4; /*0x4a1c5d*/
    do /*0x4a1c7e*/
    {
      v6 = (&CRC32_Table)[*(uint8_t *)p_Power_field_0x8 ^ (uint8_t)v6] ^ (v6 >> 8); /*0x4a1c7a*/
      p_Power_field_0x8 = (int *)((char *)p_Power_field_0x8 + 1); /*0x4a1c7c*/
      --v7; /*0x4a1c7d*/
    }
    while ( v7 ); /*0x4a1c7e*/
    result = ~v6; /*0x4a1c80*/
    this->Power_field_0x0 = result; /*0x4a1c83*/
    this->Power_field_0x4 = 0; /*0x4a1c85*/
  }
  return result; /*0x4a1c8e*/

}

// ==== BACKFILL 0x004A1CA0  Power::FlagProcess  cls=Power  sig=csp  renamed_refs=0  residual=- ====
int Power::FlagProcess(int Power_field_0x8, int a2, int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A1CA0)
}

// ==== BACKFILL 0x004A1D50  Power::TimerProcess  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Power::TimerProcess(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A1D50)
}

// ==== BACKFILL 0x004A2030  sub_4A2030  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4A2030(Pipe * aP1, int aP2)
{
    (void)aP1; (void)aP2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A2030.json)
}

// ==== BACKFILL 0x004A20B0  sub_4A20B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4A20B0(Straw * aP1, int aP2)
{
    (void)aP1; (void)aP2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A20B0.json)
}

// ==== BACKFILL 0x004A2780  Delegate::StreamToBuffer  cls=CacheStraw  sig=csp  renamed_refs=0  residual=- ====
int Delegate::StreamToBuffer(char * a1, int a3)
{

  int result; // eax
  char *v5; // ebp
  int v6; // ebx
  signed int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // [esp+10h] [ebp-4h]

  result = 0; /*0x4a2786*/
  v10 = 0; /*0x4a278c*/
  if ( *(unsigned int *)&this->__pad_0[12] ) /*0x4a2789*/
  {
    v5 = a1; /*0x4a2794*/
    if ( a1 ) /*0x4a279a*/
    {
      v6 = a3; /*0x4a279c*/
      if ( a3 > 0 ) /*0x4a27a2*/
      {
        do /*0x4a2805*/
        {
          v7 = this->field_1C; /*0x4a27a4*/
          if ( v7 > 0 ) /*0x4a27a9*/
          {
            if ( v7 >= v6 ) /*0x4a27ad*/
              v7 = v6; /*0x4a27af*/
            memcpy(v5, (const void *)(*(unsigned int *)&this->__pad_0[12] + *(unsigned int *)&this->__pad_14[4]), v7); /*0x4a27bc*/
            v8 = this->field_1C - v7; /*0x4a27cf*/
            v6 -= v7; /*0x4a27d4*/
            *(unsigned int *)&this->__pad_14[4] += v7; /*0x4a27d6*/
            v10 += v7; /*0x4a27d9*/
            this->field_1C = v8; /*0x4a27dd*/
            v5 += v7; /*0x4a27e0*/
          }
          if ( !v6 ) /*0x4a27e4*/
            break; /*0x4a27e4*/
          v9 = ((Delegate *)((Straw *)this))->Invoke(*(unsigned int *)&this->__pad_0[12], this->field_10); /*0x4a27f0*/
          this->field_1C = v9; /*0x4a27f7*/
          *(unsigned int *)&this->__pad_14[4] = 0; /*0x4a27fa*/
          if ( !v9 ) /*0x4a2801*/
            break; /*0x4a2801*/
        }
        while ( v6 > 0 ); /*0x4a2805*/
        return v10; /*0x4a2807*/
      }
    }
  }
  return result; /*0x4a280b*/

}

// ==== BACKFILL 0x004A2880  sub_4A2880  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
void sub_4A2880()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A2880.json)
}

// ==== BACKFILL 0x004A2E00  CStreamClass::Read  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::Read(int a1, int a2, int a3, int a4, int a5)
{

  if ( LOBYTE(a1->CStreamClass_field_0x10) || BYTE1(a1->CStreamClass_field_0x10) ) /*0x4a2e0c*/
    return -2147467259; /*0x4a2e45*/
  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2e13*/
    WinAPI::Wrapper(-2147467261); /*0x4a2e1f*/
  return (*(int (**)(int, int, int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 20))( /*0x4a2e41*/
           a1->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5);

}

// ==== BACKFILL 0x004A2E50  CStreamClass::Write  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::Write(int a1, int a2, int a3)
{

  if ( LOBYTE(a1->CStreamClass_field_0x10) || BYTE1(a1->CStreamClass_field_0x10) ) /*0x4a2e5c*/
    return -2147467259; /*0x4a2e8b*/
  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2e63*/
    WinAPI::Wrapper(-2147467261); /*0x4a2e6f*/
  return (*(int (**)(int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 24))( /*0x4a2e87*/
           a1->CStreamClass_field_0x08,
           a2,
           a3);

}

// ==== BACKFILL 0x004A2EA0  CStreamClass::Seek  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::Seek(int a1, int a2, int a3, int a4, int a5, int a6)
{

  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2ea5*/
    WinAPI::Wrapper(-2147467261); /*0x4a2eb1*/
  return (*(int (**)(int, int, int, int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 28))( /*0x4a2ed8*/
           a1->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5,
           a6);

}

// ==== BACKFILL 0x004A2EE0  CStreamClass::SetSize  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::SetSize(int a1, int a2)
{

  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2ee5*/
    WinAPI::Wrapper(-2147467261); /*0x4a2ef1*/
  return (*(int (**)(int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 32))( /*0x4a2f04*/
           a1->CStreamClass_field_0x08,
           a2);

}

// ==== BACKFILL 0x004A2F10  CStreamClass::Commit  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::Commit(int a1)
{

  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2f15*/
    WinAPI::Wrapper(-2147467261); /*0x4a2f21*/
  return (*(int (**)(int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 36))(a1->CStreamClass_field_0x08); /*0x4a2f2f*/

}

// ==== BACKFILL 0x004A2F40  CStreamClass::Revert  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::Revert(int a1, int a2, int a3, int a4, int a5, int a6)
{

  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2f45*/
    WinAPI::Wrapper(-2147467261); /*0x4a2f51*/
  return (*(int (**)(int, int, int, int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 40))( /*0x4a2f78*/
           a1->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5,
           a6);

}

// ==== BACKFILL 0x004A2F80  CStreamClass::LockRegion  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::LockRegion(int a1, int a2, int a3, int a4, int a5, int a6)
{

  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2f85*/
    WinAPI::Wrapper(-2147467261); /*0x4a2f91*/
  return (*(int (**)(int, int, int, int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 44))( /*0x4a2fb8*/
           a1->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5,
           a6);

}

// ==== BACKFILL 0x004A2FC0  CStreamClass::UnlockRegion  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::UnlockRegion(int a1, int a2, int a3)
{

  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2fc5*/
    WinAPI::Wrapper(-2147467261); /*0x4a2fd1*/
  return (*(int (**)(int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 48))( /*0x4a2fe9*/
           a1->CStreamClass_field_0x08,
           a2,
           a3);

}

// ==== BACKFILL 0x004A2FF0  CStreamClass::Stat  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::Stat(int a1, int a2)
{

  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2ff5*/
    WinAPI::Wrapper(-2147467261); /*0x4a3001*/
  return (*(int (**)(int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 52))( /*0x4a3014*/
           a1->CStreamClass_field_0x08,
           a2);

}

// ==== BACKFILL 0x004A3110  CStreamClass::ddtor  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
CStreamClass * CStreamClass::ddtor(int a2, char a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A3110)
}

// ==== BACKFILL 0x004A31F0  CStreamClass::IsEmpty  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::IsEmpty(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A31F0)
}

// ==== BACKFILL 0x004A3220  CStreamClass::IStreamQueryInterface  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::IStreamQueryInterface(int a1, const void * a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A3220)
}

// ==== BACKFILL 0x004A3230  CStreamClass::IStreamAddRef  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
LONG CStreamClass::IStreamAddRef(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A3230)
}

// ==== BACKFILL 0x004A3240  CStreamClass::IStreamRelease  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
LONG CStreamClass::IStreamRelease(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A3240)
}

// ==== BACKFILL 0x004A35F0  Tactical::SetCellTransform  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
char * Tactical::SetCellTransform(int a2, CoordStruct * aP2, int a4, CoordStruct * aP4, int a6, int a7, void *a7_2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A35F0)
}

// ==== BACKFILL 0x004A3630  sub_4A3630  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_4A3630()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A3630.json)
}

// ==== BACKFILL 0x004A3B40  FindResource  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRSRC FindResource(unsigned short a1, const CHAR * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A3B40.json)
}

// ==== BACKFILL 0x004A3BF0  ?do_always_noconv_codecvt_base_std__MBE_NXZ_3  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectClass::_do_always_noconv_codecvt_base_std__MBE_NXZ_3()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A3BF0)
}

// ==== BACKFILL 0x004A3C00  CreditsScreen::Init  cls=CreditsScreen  sig=csp  renamed_refs=0  residual=- ====
void CreditsScreen::Init()
{

  *(unsigned int *)this = 0; /*0x4a3c00*/

}

// ==== BACKFILL 0x004A3FD0  sub_4A3FD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_4A3FD0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A3FD0.json)
}

// ==== BACKFILL 0x004A40C0  sub_4A40C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
LPDIRECTDRAW sub_4A40C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A40C0.json)
}

// ==== BACKFILL 0x004A44F0  sub_4A44F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4A44F0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A44F0.json)
}

// ==== BACKFILL 0x004A45C0  sub_4A45C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4A45C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A45C0.json)
}

// ==== BACKFILL 0x004A4700  sub_4A4700  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_4A4700()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A4700.json)
}

// ==== BACKFILL 0x004A4780  Surface::CreateSurfacePalette  cls=Surface  sig=csp  renamed_refs=0  residual=- ====
LPDIRECTDRAW Surface::CreateSurfacePalette(AbstractClass * Src)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A4780.json)
}

// ==== BACKFILL 0x004A4850  sub_4A4850  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_4A4850(const void * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A4850.json)
}

// ==== BACKFILL 0x004A4AC0  Debug::Log_0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void Debug::Log_0(void *a1_1, void *a2_1)
{

  ; /*0x4a4ac0*/

}

// ==== BACKFILL 0x004A4E30  sub_4A4E30  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_4A4E30(int a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A4E30.json)
}

// ==== BACKFILL 0x004A50F0  TechnoClass::checkCloakState  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::checkCloakState() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x4a50f0.json */
}

// ==== BACKFILL 0x004A5130  BuildingClass::CheckFlag24  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::CheckFlag24()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A5130.json)
}
} // namespace gamemd

// ==== BACKFILL 0x004A51B0  BuildingClass::CheckPowerFlags  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::CheckPowerFlags()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A51B0.json)
}
} // namespace gamemd

// ==== BACKFILL 0x004A52D0  sub_4A52D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_4A52D0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A52D0.json)
}

// ==== BACKFILL 0x004A52E0  sub_4A52E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_4A52E0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A52E0.json)
}

// ==== BACKFILL 0x004A5950  ?GetNumExternalThreads_SchedulerProxy_details_Concurrency__QAEIXZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int E4Recv_4A5950::_GetNumExternalThreads_SchedulerProxy_details_Concurrency__QAEIXZ()
{

  return *((unsigned int *)this + 45); /*0x4a5956*/

}

// ==== BACKFILL 0x004A60E0  TextRenderer::Printf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TextRenderer::Printf(ConvertClass * aP0, size_t BufferCount, ObjectClass * aP2, ConvertClass * aP3, int a2, int a6, int a7, int a8, CampaignScore * aP8)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A60E0)
}

// ==== BACKFILL 0x004A6500  FillRectangle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * FillRectangle(IUnknown * aP0, IUnknown * aP1, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A6500)
}

// ==== BACKFILL 0x004A7B90  DiskLaserClass::Write  cls=DiskLaserClass  sig=csp  renamed_refs=0  residual=- ====
int  DiskLaserClass::Write(AbstractClass * aP0, int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A7B90.json)
}

// ==== BACKFILL 0x004A7C10  DiskLaserClass::Seek  cls=DiskLaserClass  sig=csp  renamed_refs=0  residual=- ====
int DiskLaserClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A7C10)
}

// ==== BACKFILL 0x004A7C30  DiskLaserClass::ddtor  cls=DiskLaserClass  sig=csp  renamed_refs=0  residual=- ====
int DiskLaserClass::ddtor(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A7C30.json)
}

// ==== BACKFILL 0x004A7C70  DiskLaserClass::StubReturn64  cls=DiskLaserClass  sig=csp  renamed_refs=0  residual=- ====
int DiskLaserClass::StubReturn64()
{

  return 64; /*0x4a7c75*/

}

// ==== BACKFILL 0x004A7C80  DiskLaserClass::StubReturn73  cls=DiskLaserClass  sig=csp  renamed_refs=0  residual=- ====
int DiskLaserClass::StubReturn73()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A7C80)
}

// ==== BACKFILL 0x004A83D0  sub_4A83D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool sub_4A83D0(INIClass * aP0)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A83D0.json)
}

// ==== BACKFILL 0x004A8410  sub_4A8410  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_4A8410(int a1)
{
  return 1; /*0x4a8412*/
}

// ==== BACKFILL 0x004A8730  RadarClass::RenderSpySatellite  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
void* RadarClass::RenderSpySatellite() {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 41 errs): wrong-universe gap2 body; truth func_0x4A8730.json */
}

// ==== BACKFILL 0x004A8930  DisplayClass::ddtor  cls=DisplayClass  sig=csp  renamed_refs=0  residual=- ====
char DisplayClass::ddtor(void *a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A8930.json)
}

// ==== BACKFILL 0x004A9700  DisplayClass::Update  cls=DisplayClass  sig=csp  renamed_refs=0  residual=- ====
void DisplayClass::Update(PowerClass * aP1, int a3, void *a3_2, void *a4)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A9700)
}

// ==== BACKFILL 0x004A9840  DisplayClass::SetCoordVisible  cls=DisplayClass  sig=csp  renamed_refs=0  residual=- ====
bool DisplayClass::SetCoordVisible(IUnknown * aP0, MouseClass * aP1, char a3)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A9840.json)
}

// ==== BACKFILL 0x004AA290  BuildingClass::updateSellBack  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingClass::updateSellBack(void* a1, void* a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AA290.json)
}

// ==== BACKFILL 0x004AAB30  CellClass::CheckBuildablePair  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::CheckBuildablePair(void* a1, void* a2, int a3, int a4, int a5) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x004AAC10  DisplayClass::ProcessTacticalMouseInput  cls=TacticalClass_DisplayClass  sig=csp  renamed_refs=0  residual=- ====
int DisplayClass::ProcessTacticalMouseInput(char a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AAC10.json)
}

// ==== BACKFILL 0x004AAD20  DisplayClass::g_var_2eb6a7  cls=DisplayClass  sig=csp  renamed_refs=0  residual=- ====
void DisplayClass::g_var_2eb6a7() {
    ; /*0x4aad20*/
}

// ==== BACKFILL 0x004ACAC0  MapClass::ProcessVisibilityFlags  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::ProcessVisibilityFlags()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ACAC0.json)
}

// ==== BACKFILL 0x004ACBC0  MapClass::ProcessFogTransition  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::ProcessFogTransition()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ACBC0.json)
}

// ==== BACKFILL 0x004ACC50  CellClass::ProcessVisibility  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::ProcessVisibility(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x004ACDA0  MapClass::RevealCell  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
char  MapClass::RevealCell(MouseClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004ACDA0.json)
}

// ==== BACKFILL 0x004ADA30  ScenarioClass::GetScenarioData  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::GetScenarioData(void* a1, int a2) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x004ADBA0  ScenarioClass::ProcessGame  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::ProcessGame(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x004AE450  TacticalClass::Initialize  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::Initialize() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 5 errs): wrong-universe gap2 body; truth func_0x4AE450.json */
}

// ==== BACKFILL 0x004AE6B0  DisplayClass::Render  cls=DisplayClass  sig=csp  renamed_refs=0  residual=- ====
HWND DisplayClass::Render(void *a1, void *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AE6B0.json)
}

// ==== BACKFILL 0x004AE6F0  DisplayClass::SetSurface  cls=DisplayClass  sig=csp  renamed_refs=0  residual=- ====
int DisplayClass::SetSurface(unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AE6F0.json)
}

// ==== BACKFILL 0x004AE720  DisplayClass::GetSurface  cls=DisplayClass  sig=csp  renamed_refs=0  residual=- ====
int DisplayClass::GetSurface(unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AE720.json)
}

// ==== BACKFILL 0x004AEB10  MapClass::GetScrollMode  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::GetScrollMode()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AEB10.json)
}

// ==== BACKFILL 0x004AEBA0  CheckListClass::COMStub_Return0  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
int CheckListClass::COMStub_Return0()
{

  return 0; /*0x4aeba2*/

}

// ==== BACKFILL 0x004AEBB0  DisplayClass::updateRenderState  cls=TacticalClass_DisplayClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * DisplayClass::updateRenderState(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AEBB0.json)
}

// ==== BACKFILL 0x004AEBD0  InputManager_ProcessEvents::StubReturnFalse  cls=GScreenClass  sig=csp  renamed_refs=0  residual=- ====
bool InputManager_ProcessEvents::StubReturnFalse() {
    ; /*0x4aebd0*/
}

// ==== BACKFILL 0x004AEBF0  DisplayClass::Read  cls=DisplayClass  sig=csp  renamed_refs=0  residual=- ====
DisplayClass * DisplayClass::Read(char * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AEBF0.json)
}

// ==== BACKFILL 0x004AEC30  DisplayClass::processDisplayMode  cls=BufferStraw  sig=csp  renamed_refs=0  residual=- ====
int * DisplayClass::processDisplayMode(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AEC30.json)
}

// ==== BACKFILL 0x004AEC60  Surface::Construct  cls=Surface  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Surface::Construct(ObjectClass * aP1, IUnknown * aP2, void *a3, void *a4, void *a5, void *a6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AEC60.json)
}

// ==== BACKFILL 0x004AECA0  GameClass::initDisplay  cls=BufferPipe  sig=csp  renamed_refs=0  residual=- ====
int * PKStrawClass::initDisplay(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AECA0.json)
}

// ==== BACKFILL 0x004AECD0  sub_4AECD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4AECD0(LPCSTR lpLibFileName)
{
    (void)lpLibFileName; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AECD0.json)
}

// ==== BACKFILL 0x004AF610  JumpjetLocomotionClass::LoadLocomotionFromStream  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int   JumpjetLocomotionClass::LoadLocomotionFromStream(unsigned int * a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AF610.json)
}

// ==== BACKFILL 0x004AF780  DriveLocomotionClass::BeginMove  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
HRESULT DriveLocomotionClass::BeginMove(int * a1, int * pStm)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4AF780)
}

// ==== BACKFILL 0x004AF800  DriveLocomotionClass::LoadFromStream  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
HRESULT DriveLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4AF800)
}

// ==== BACKFILL 0x004AF8E0  JumpjetLocomotionClass::StubReturnZero  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AF8E0.json)
}

// ==== BACKFILL 0x004AF930  JumpjetLocomotionClass::StubReturnZero_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_0(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AF930.json)
}

// ==== BACKFILL 0x004AF970  JumpjetLocomotionClass::CheckPiggybackState  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::CheckPiggybackState(int a1)
{

  return !(*(uint8_t (**)(char *))(*((unsigned int *)a1 - 5) + 16))((char *)a1 - 20) /*0x4af9a0*/
      && *(unsigned int *)a1->__pad_50
      && a1->unknown_4D
      && !*(unsigned char *)(*((unsigned int *)a1 - 3) + 1709);

}

// ==== BACKFILL 0x004AFAA0  sub_4AFAA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
double sub_4AFAA0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AFAA0.json)
}

// ==== BACKFILL 0x004AFB00  sub_4AFB00  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4AFB00(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AFB00.json)
}

// ==== BACKFILL 0x004AFB40  JumpjetLocomotionClass::InitMovementState  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::InitMovementState(unsigned int * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AFB40.json)
}

// ==== BACKFILL 0x004AFB80  JumpjetLocomotionClass::StubReturnTrue  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::StubReturnTrue(int a1)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AFB80.json)
}

// ==== BACKFILL 0x004AFC20  JumpjetLocomotionClass::StubReturnTrue_0  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::StubReturnTrue_0(InfantryClass * aP0)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AFC20.json)
}

// ==== BACKFILL 0x004AFC90  JumpjetLocomotionClass::GetCoordinate  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetCoordinate(unsigned int * a1, unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AFC90.json)
}

// ==== BACKFILL 0x004AFCC0  JumpjetLocomotionClass::GetRenderCoordinate  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate(unsigned int * a1, unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AFCC0.json)
}

// ==== BACKFILL 0x004AFD40  JumpjetLocomotionClass::ConvertCoordToCell  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::ConvertCoordToCell(int arg0, unsigned int * a1, unsigned int aP1_4, IUnknown * aP3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AFD40.json)
}

// ==== BACKFILL 0x004AFE00  JumpjetLocomotionClass::CheckWindowsErrorWrapper  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::CheckWindowsErrorWrapper(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AFE00.json)
}

// ==== BACKFILL 0x004AFED0  sub_4AFED0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL sub_4AFED0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AFED0.json)
}
