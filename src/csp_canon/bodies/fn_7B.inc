// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x007B0390  FindWDTTerritoryClass  cls=rc_ptr  sig=csp  renamed_refs=0  residual=- ====
rc_ptr * FindWDTTerritoryClass(rc_ptr_base * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B0390)
}

// ==== BACKFILL 0x007B0430  ?do_always_noconv_codecvt_base_std__MBE_NXZ_23  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectClass::_do_always_noconv_codecvt_base_std__MBE_NXZ_23()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B0430)
}

// ==== BACKFILL 0x007B1720  IPXInterfaceClass::StubReturnFalse  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0  residual=- ====
void IPXInterfaceClass::StubReturnFalse(int a1, int a2)
{

  ; /*0x7b1720*/

}

// ==== BACKFILL 0x007B1730  IPXInterfaceClass::GetQueueSize  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0  residual=- ====
void IPXInterfaceClass::GetQueueSize()
{

  ; /*0x7b1730*/

}

// ==== BACKFILL 0x007B1740  IPXInterfaceClass::COMStub_Return0  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0  residual=- ====
int IPXInterfaceClass::COMStub_Return0()
{

  return 0; /*0x7b1742*/

}

// ==== BACKFILL 0x007B1750  IPXInterfaceClass::Send  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0  residual=- ====
int IPXInterfaceClass::Send(int a1, void *a2, void *a3, void *a4, void *a5)
{

  return 0; /*0x7b1752*/

}

// ==== BACKFILL 0x007B1770  IPXInterfaceClass::COMStub_Return1  cls=IPXInterfaceClass  sig=csp  renamed_refs=0  residual=- ====
int IPXInterfaceClass::COMStub_Return1()
{

  return 1; /*0x7b1775*/

}

// ==== BACKFILL 0x007B1780  IPXInterfaceClass::COMStub_Ret1139  cls=IPXInterfaceClass  sig=csp  renamed_refs=0  residual=- ====
int IPXInterfaceClass::COMStub_Ret1139(int a1)
{

  return 1139; /*0x7b1785*/

}

// ==== BACKFILL 0x007B1790  IPXInterfaceClass::QueryInterface  cls=IPXInterfaceClass  sig=csp  renamed_refs=0  residual=- ====
IPXInterfaceClass * IPXInterfaceClass::QueryInterface(char a2, int a1, int a3, int a4, int aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B1790)
}

// ==== BACKFILL 0x007B1FD0  IPXInterfaceClass::SetAddress  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0  residual=- ====
int IPXInterfaceClass::SetAddress(unsigned int * a1)
{

  int v1; // ebx
  WinsockInterfaceClass *v2; // ebp
  int v3; // eax
  int *v4; // esi
  int result; // eax
  int v6; // edx
  int v7; // edi

  v1 = 0; /*0x7b1fd8*/
  v2 = (WinsockInterfaceClass *)((char *)a1 + 28); /*0x7b1fdd*/
  v3 = *((unsigned int *)a1 + 4); /*0x7b1fe0*/
  *((unsigned int *)a1 + 7) = 0; /*0x7b1fe4*/
  v4 = (int *)((char *)a1 + 32); /*0x7b1fed*/
  result = v3 / 4; /*0x7b1ff0*/
  if ( result > 0 ) /*0x7b1ff5*/
  {
    do /*0x7b2012*/
    {
      v6 = *v4++; /*0x7b1ff7*/
      ComputeHash((unsigned int *)(v2), v6); /*0x7b1ffe*/
      ++v1; /*0x7b2006*/
      result = *((unsigned int *)a1 + 4) / 4; /*0x7b200d*/
    }
    while ( v1 < result ); /*0x7b2012*/
  }
  v7 = *((unsigned int *)a1 + 4) & 3; /*0x7b2017*/
  if ( v7 ) /*0x7b201a*/
    return ComputeHash((unsigned int *)(v2), *v4 & (0xFFFFFFFF >> (32 - 8 * v7))); /*0x7b2035*/
  return result; /*0x7b203a*/

}

// ==== BACKFILL 0x007B2050  Winsock::VerifyCRC  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0  residual=- ====
char VerifyCRC(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x007B2050.json)
}

// ==== BACKFILL 0x007B25E0  IPXInterfaceClass::GetAddress  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0  residual=- ====
int IPXInterfaceClass::GetAddress(SOCKET s, void *a2, void *a3, void *a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B25E0)
}

// ==== BACKFILL 0x007B26D0  IPXInterfaceClass::ReceivePacket  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0  residual=- ====
char IPXInterfaceClass::ReceivePacket(char * name, AnimClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B26D0)
}

// ==== BACKFILL 0x007B2720  SessionClass::SetInstance  cls=SessionClass  sig=csp  renamed_refs=0  residual=- ====
void SessionClass::SetInstance()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B2720)
}

// ==== BACKFILL 0x007B2740  WinsockInterfaceClass::Destru_vt13  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0  residual=- ====
int WinsockInterfaceClass::Destru_vt13()
{

  return 0; /*0x7b2742*/

}

// ==== BACKFILL 0x007B2750  WinsockInterfaceClass::Destru_vt14  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0  residual=- ====
int WinsockInterfaceClass::Destru_vt14(int a1)
{

  return 0; /*0x7b2752*/

}

// ==== BACKFILL 0x007B2760  WinsockInterfaceClass::Destru_vt15  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0  residual=- ====
char WinsockInterfaceClass::Destru_vt15(int a1)
{

  return 0; /*0x7b2762*/

}

// ==== BACKFILL 0x007B2770  WinsockInterfaceClass::Destru_vt16  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0  residual=- ====
int WinsockInterfaceClass::Destru_vt16(int a1, int a2, int a3, int a4)
{

  return 1; /*0x7b2775*/

}

// ==== BACKFILL 0x007B2780  WinsockInterfaceClass::Destru_vt00  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0  residual=- ====
SOCKET * WinsockInterfaceClass::Destru_vt00(SOCKET * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B2780)
}

// ==== BACKFILL 0x007B36C0  UDPInterfaceClass_Destru::ddtor  cls=UDPInterfaceClass  sig=csp  renamed_refs=0  residual=- ====
short UDPInterfaceClass_Destru::ddtor(WinsockInterfaceClass * aP1, unsigned int arg4, unsigned char * a3, unsigned int a5, WinsockInterfaceClass * aP5, char a7, short a8)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B36C0)
}

// ==== BACKFILL 0x007B39D0  sub_7B39D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_7B39D0(unsigned int * a2, short a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B39D0.json)
}

// ==== BACKFILL 0x007B40F0  UDPInterfaceClass_Destru::COMStub_Ret2  cls=UDPInterfaceClass  sig=csp  renamed_refs=0  residual=- ====
int UDPInterfaceClass_Destru::COMStub_Ret2()
{

  return 2; /*0x7b40f5*/

}

// ==== BACKFILL 0x007B4630  String::Assign  cls=String  sig=csp  renamed_refs=0  residual=- ====
char ** String::Assign(const char *a2)
{

  size_t v3; // ecx
  unsigned char *v4; // eax

  *(unsigned int *)this->__pad_0 = 0; /*0x7b463b*/
  if ( a2 ) /*0x7b4641*/
    v3 = strlen(a2) + 1; /*0x7b464a*/
  else
    v3 = 1; /*0x7b4650*/
  v4 = (unsigned char *)__2_YAPAXI_Z(v3); /*0x7b4656*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(v4); /*0x7b465e*/
  *v4 = 0; /*0x7b4662*/
  if ( a2 ) /*0x7b4665*/
    strcpy(*(char **)this->__pad_0, a2); /*0x7b467d*/
  return (char **)this; /*0x7b4686*/

}

// ==== BACKFILL 0x007B4690  String::AssignFromPtr  cls=String  sig=csp  renamed_refs=0  residual=- ====
char ** String::AssignFromPtr(const char **a2)
{

  char *v3; // edx

  *(unsigned int *)this->__pad_0 = 0; /*0x7b4699*/
  if ( *a2 ) /*0x7b469f*/
  {
    v3 = (char *)__2_YAPAXI_Z(strlen(*a2) + 1); /*0x7b46b4*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(v3); /*0x7b46b9*/
    strcpy(v3, *a2); /*0x7b46d1*/
  }
  return (char **)this; /*0x7b46da*/

}

// ==== BACKFILL 0x007B46F0  DeleteAndZero  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void DeleteAndZero()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B46F0.json)
}

// ==== BACKFILL 0x007B4710  String::Equals_Alt  cls=String  sig=csp  renamed_refs=0  residual=- ====
bool String::Equals_Alt(const char *a2)
{

  int result; // eax

  result = *(unsigned int *)this->__pad_0; /*0x7b4710*/
  if ( *(unsigned int *)this->__pad_0 || a2 ) /*0x7b471d*/
  {
    if ( result && a2 ) /*0x7b472b*/
    {
      result = strcmp((const char *)result, a2); /*0x7b4736*/
      if ( result ) /*0x7b4750*/
        (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x7b4767*/
      else
        return 1; /*0x7b4752*/
    }
    else
    {
      (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x7b476d*/
    }
  }
  else
  {
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x7b471f*/
  }
  return result; /*0x7b4721*/

}

// ==== BACKFILL 0x007B4780  String::Compare  cls=String  sig=csp  renamed_refs=0  residual=- ====
bool String::Compare(const char **a2)
{

  int result; // eax

  result = *(unsigned int *)this->__pad_0; /*0x7b4780*/
  if ( *(unsigned int *)this->__pad_0 || *a2 ) /*0x7b478b*/
  {
    if ( result && *a2 ) /*0x7b479a*/
    {
      result = strcmp((const char *)result, *a2); /*0x7b47a9*/
      if ( result ) /*0x7b47c3*/
        (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x7b47da*/
      else
        return 1; /*0x7b47c5*/
    }
    else
    {
      (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x7b47e0*/
    }
  }
  else
  {
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x7b4790*/
  }
  return result; /*0x7b4792*/

}

// ==== BACKFILL 0x007B47F0  String::NotEquals  cls=String  sig=csp  renamed_refs=0  residual=- ====
bool String::NotEquals(const char *a2)
{

  int result; // eax

  result = *(unsigned int *)this->__pad_0; /*0x7b47f0*/
  if ( *(unsigned int *)this->__pad_0 || a2 ) /*0x7b47fd*/
  {
    if ( result && a2 ) /*0x7b480b*/
    {
      result = strcmp((const char *)result, a2); /*0x7b4816*/
      if ( result ) /*0x7b4837*/
        (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x7b4847*/
    }
    else
    {
      (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x7b484d*/
    }
  }
  else
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x7b47ff*/
  }
  return result; /*0x7b4801*/

}

// ==== BACKFILL 0x007B4860  VectorClass_Wstring::SetCapacity  cls=VectorClass_Wstring  sig=csp  renamed_refs=0  residual=- ====
bool VectorClass_flat::SetCapacity(const char ** a2)
{
    (void)a2; return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B4860.json)
}

// ==== BACKFILL 0x007B48D0  String::Assign_Alt  cls=String  sig=csp  renamed_refs=0  residual=- ====
void ** String::Assign_Alt(const char *aP1)
{

  size_t v3; // ecx
  unsigned char *v4; // eax

  if ( *(unsigned int *)this->__pad_0 ) /*0x7b48d5*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b48dc*/
  *(unsigned int *)this->__pad_0 = 0; /*0x7b48e8*/
  if ( aP1 ) /*0x7b48f0*/
    v3 = strlen(aP1) + 1; /*0x7b48f9*/
  else
    v3 = 1; /*0x7b48ff*/
  v4 = (unsigned char *)__2_YAPAXI_Z(v3); /*0x7b4905*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(v4); /*0x7b490d*/
  *v4 = 0; /*0x7b4911*/
  if ( aP1 ) /*0x7b4914*/
    strcpy(*(char **)this->__pad_0, aP1); /*0x7b492c*/
  return (void **)this; /*0x7b4935*/

}

// ==== BACKFILL 0x007B4940  String::Reassign  cls=String  sig=csp  renamed_refs=0  residual=- ====
char ** String::Reassign(const char **aP1)
{

  void *v3; // edi
  char *v4; // esi
  size_t v5; // ecx
  unsigned char *v6; // eax

  v3 = *(void **)this->__pad_0; /*0x7b4949*/
  if ( (*(unsigned int *)this->__pad_0 || *aP1) && (!v3 || !*aP1 || strcmp(*(const char **)this->__pad_0, *aP1)) ) /*0x7b496c*/
  {
    v4 = (char *)*aP1; /*0x7b4994*/
    if ( !*aP1 ) /*0x7b4994*/
      v4 = (char *)(&g_INI_DefaultBuffer); /*0x7b499a*/
    if ( v3 ) /*0x7b49a1*/
      __3_YAXPAX_Z(v3); /*0x7b49a4*/
    *(unsigned int *)this->__pad_0 = 0; /*0x7b49ae*/
    if ( v4 ) /*0x7b49b5*/
      v5 = strlen(v4) + 1; /*0x7b49be*/
    else
      v5 = 1; /*0x7b49c4*/
    v6 = (unsigned char *)__2_YAPAXI_Z(v5); /*0x7b49ca*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(v6); /*0x7b49d2*/
    *v6 = 0; /*0x7b49d7*/
    if ( v4 ) /*0x7b49da*/
      strcpy(*(char **)this->__pad_0, v4); /*0x7b49f3*/
  }
  return (char **)this; /*0x7b49fc*/

}

// ==== BACKFILL 0x007B4AC0  sub_7B4AC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_7B4AC0(size_t Count, char * Source)
{
    (void)Count; (void)Source; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B4AC0.json)
}

// ==== BACKFILL 0x007B4B50  sub_7B4B50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_7B4B50(char ** a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B4B50.json)
}

// ==== BACKFILL 0x007B4C20  String::Append  cls=String  sig=csp  renamed_refs=0  residual=- ====
const char ** String::Append(const char *aP1)
{

  const char *v2; // esi
  unsigned int v4; // kr08_4
  char *v5; // ebx
  size_t v6; // edx
  char *v7; // eax

  v2 = aP1; /*0x7b4c23*/
  if ( aP1 ) /*0x7b4c2b*/
  {
    v4 = strlen(aP1) + 1; /*0x7b4c39*/
    v5 = *(char **)this->__pad_0; /*0x7b4c3b*/
    v6 = v4; /*0x7b4c43*/
    if ( *(unsigned int *)this->__pad_0 ) /*0x7b4c3b*/
      v6 = strlen(*(const char **)this->__pad_0) + v4; /*0x7b4c52*/
    v7 = (char *)__2_YAPAXI_Z(v6); /*0x7b4c55*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(v7); /*0x7b4c61*/
    if ( v5 ) /*0x7b4c64*/
    {
      strcpy(v7, v5); /*0x7b4c7c*/
      v2 = aP1; /*0x7b4c85*/
    }
    else
    {
      *v7 = 0; /*0x7b4c8b*/
    }
    strcat(*(char **)this->__pad_0, v2); /*0x7b4cad*/
    if ( v5 ) /*0x7b4cb9*/
      __3_YAXPAX_Z(v5); /*0x7b4cbc*/
  }
  return (const char **)this; /*0x7b4cc6*/

}

// ==== BACKFILL 0x007B4CD0  String::Append2  cls=String  sig=csp  renamed_refs=0  residual=- ====
const char ** String::Append2(char **aP1)
{

  char *v2; // eax
  const char *v4; // esi
  unsigned int v5; // kr08_4
  char *v6; // ebx
  size_t v7; // edx
  char *v8; // eax
  char *v10; // [esp+10h] [ebp+4h]

  v2 = *aP1; /*0x7b4cd7*/
  if ( *aP1 ) /*0x7b4cd7*/
  {
    v10 = *aP1; /*0x7b4cea*/
    v4 = v2; /*0x7b4cee*/
  }
  else
  {
    v4 = (const char *)(&g_INI_DefaultBuffer); /*0x7b4cdf*/
    v10 = (char *)(&g_INI_DefaultBuffer); /*0x7b4ce4*/
  }
  if ( v4 ) /*0x7b4cf2*/
  {
    v5 = strlen(v4) + 1; /*0x7b4d00*/
    v6 = *(char **)this->__pad_0; /*0x7b4d02*/
    v7 = v5; /*0x7b4d0a*/
    if ( *(unsigned int *)this->__pad_0 ) /*0x7b4d02*/
      v7 = strlen(*(const char **)this->__pad_0) + v5; /*0x7b4d19*/
    v8 = (char *)__2_YAPAXI_Z(v7); /*0x7b4d1c*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(v8); /*0x7b4d28*/
    if ( v6 ) /*0x7b4d2b*/
    {
      strcpy(v8, v6); /*0x7b4d43*/
      v4 = v10; /*0x7b4d4c*/
    }
    else
    {
      *v8 = 0; /*0x7b4d52*/
    }
    strcat(*(char **)this->__pad_0, v4); /*0x7b4d74*/
    if ( v6 ) /*0x7b4d80*/
      __3_YAXPAX_Z(v6); /*0x7b4d83*/
  }
  return (const char **)this; /*0x7b4d8d*/

}

// ==== BACKFILL 0x007B4DA0  String::Concat2  cls=String  sig=csp  renamed_refs=0  residual=- ====
char ** String::Concat2(char **a2, const char *a3)
{

  char *v4; // ebx
  const char *v5; // esi
  char *v6; // ebp
  unsigned int v7; // kr14_4
  size_t v8; // edx
  char *v9; // eax
  char *v10; // edx

  v4 = 0; /*0x7b4da6*/
  if ( *(unsigned int *)this->__pad_0 ) /*0x7b4da8*/
  {
    v4 = (char *)__2_YAPAXI_Z(strlen(*(const char **)this->__pad_0) + 1); /*0x7b4dbf*/
    strcpy(v4, *(const char **)this->__pad_0); /*0x7b4dd8*/
  }
  v5 = a3; /*0x7b4de1*/
  if ( a3 ) /*0x7b4de7*/
  {
    v6 = v4; /*0x7b4df4*/
    v7 = strlen(a3) + 1; /*0x7b4df6*/
    v8 = v7; /*0x7b4dfd*/
    if ( v4 ) /*0x7b4e00*/
      v8 = strlen(v4) + v7; /*0x7b4e0c*/
    v9 = (char *)__2_YAPAXI_Z(v8); /*0x7b4e0f*/
    v4 = v9; /*0x7b4e17*/
    if ( v6 ) /*0x7b4e1b*/
    {
      strcpy(v9, v6); /*0x7b4e33*/
      v5 = a3; /*0x7b4e3c*/
    }
    else
    {
      *v9 = 0; /*0x7b4e42*/
    }
    strcat(v9, v5); /*0x7b4e63*/
    if ( v6 ) /*0x7b4e6e*/
      __3_YAXPAX_Z(v6); /*0x7b4e71*/
  }
  *a2 = 0; /*0x7b4e7f*/
  if ( v4 ) /*0x7b4e86*/
  {
    v10 = (char *)__2_YAPAXI_Z(strlen(v4) + 1); /*0x7b4e99*/
    *a2 = v10; /*0x7b4ea2*/
    strcpy(v10, v4); /*0x7b4eb5*/
    __3_YAXPAX_Z(v4); /*0x7b4ebe*/
  }
  return a2; /*0x7b4ec6*/

}

// ==== BACKFILL 0x007B4ED0  String::Concat  cls=String  sig=csp  renamed_refs=0  residual=- ====
char ** String::Concat(char **a1, char **aP2)
{

  char *v4; // ebx
  char *v5; // eax
  const char *v6; // esi
  char *v7; // ebp
  unsigned int v8; // kr14_4
  size_t v9; // edx
  char *v10; // eax
  char *v11; // edx
  char *v13; // [esp+18h] [ebp+8h]

  v4 = 0; /*0x7b4ed6*/
  if ( *(unsigned int *)this->__pad_0 ) /*0x7b4ed8*/
  {
    v4 = (char *)__2_YAPAXI_Z(strlen(*(const char **)this->__pad_0) + 1); /*0x7b4eef*/
    strcpy(v4, *(const char **)this->__pad_0); /*0x7b4f08*/
  }
  v5 = (char *)(*aP2); /*0x7b4f15*/
  if ( *aP2 ) /*0x7b4f15*/
  {
    v13 = (char *)(*aP2); /*0x7b4f26*/
    v6 = v5; /*0x7b4f2a*/
  }
  else
  {
    v6 = (const char *)(&g_INI_DefaultBuffer); /*0x7b4f1b*/
    v13 = (char *)(&g_INI_DefaultBuffer); /*0x7b4f20*/
  }
  if ( v6 ) /*0x7b4f2e*/
  {
    v7 = v4; /*0x7b4f3b*/
    v8 = strlen(v6) + 1; /*0x7b4f3d*/
    v9 = v8; /*0x7b4f44*/
    if ( v4 ) /*0x7b4f47*/
      v9 = strlen(v4) + v8; /*0x7b4f53*/
    v10 = (char *)__2_YAPAXI_Z(v9); /*0x7b4f56*/
    v4 = v10; /*0x7b4f5e*/
    if ( v7 ) /*0x7b4f62*/
    {
      strcpy(v10, v7); /*0x7b4f7a*/
      v6 = v13; /*0x7b4f83*/
    }
    else
    {
      *v10 = 0; /*0x7b4f89*/
    }
    strcat(v10, v6); /*0x7b4faa*/
    if ( v7 ) /*0x7b4fb5*/
      __3_YAXPAX_Z(v7); /*0x7b4fb8*/
  }
  *a1 = 0; /*0x7b4fc6*/
  if ( v4 ) /*0x7b4fcd*/
  {
    v11 = (char *)__2_YAPAXI_Z(strlen(v4) + 1); /*0x7b4fe0*/
    *a1 = v11; /*0x7b4fe9*/
    strcpy(v11, v4); /*0x7b4ffc*/
    __3_YAXPAX_Z(v4); /*0x7b5005*/
  }
  return a1; /*0x7b500d*/

}

// ==== BACKFILL 0x007B5020  String::Erase  cls=String  sig=csp  renamed_refs=0  residual=- ====
char String::Erase(int aP1, int a3)
{

  int v4; // ebp
  int v5; // esi
  unsigned int v6; // kr04_4
  int result; // eax
  char *v8; // [esp+14h] [ebp+4h]

  v4 = (int)(aP1); /*0x7b502d*/
  v5 = a3; /*0x7b5031*/
  v6 = strlen(*(const char **)this->__pad_0) + 1; /*0x7b5035*/
  result = (int)(a3 + aP1); /*0x7b503a*/
  if ( a3 + aP1 > (int)(v6 - 1) ) /*0x7b503f*/
    v4 = v6 - 1 - a3; /*0x7b5043*/
  if ( v4 < 0 ) /*0x7b5047*/
  {
    v5 = v4 + a3; /*0x7b5049*/
    v4 = 0; /*0x7b504b*/
    a3 = v5; /*0x7b504d*/
  }
  if ( v5 > 0 ) /*0x7b5053*/
  {
    v8 = (char *)__2_YAPAXI_Z(v6 - v5); /*0x7b506b*/
    *(unsigned char *)(*(unsigned int *)this->__pad_0 + v4) = 0; /*0x7b506f*/
    *(unsigned char *)(v4 + *(unsigned int *)this->__pad_0 + v5 - 1) = 0; /*0x7b507a*/
    strcpy(v8, *(const char **)this->__pad_0); /*0x7b5092*/
    strcat(v8, (const char *)(a3 + v4 + *(unsigned int *)this->__pad_0)); /*0x7b50c1*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b50cd*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(v8); /*0x7b50d9*/
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x7b50db*/
  }
  else
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x7b5058*/
  }
  return result; /*0x7b5055*/

}

// ==== BACKFILL 0x007B50F0  sub_7B50F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_7B50F0(char a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B50F0.json)
}

// ==== BACKFILL 0x007B5230  String::TrimRight  cls=String  sig=csp  renamed_refs=0  residual=- ====
void String::TrimRight(ObjectClass * aP1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B5230)
}

// ==== BACKFILL 0x007B5360  sub_7B5360  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_7B5360(int Size)
{
    (void)Size;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B5360.json)
}

// ==== BACKFILL 0x007B53B0  sub_7B53B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int sub_7B53B0(ObjectClass * aP1, size_t Count)
{
    (void)aP1; (void)Count; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B53B0.json)
}

// ==== BACKFILL 0x007B5400  String::GetOrEmpty  cls=String  sig=csp  renamed_refs=0  residual=- ====
char * String::GetOrEmpty()
{

  char *result; // eax

  result = *(char **)this->__pad_0; /*0x7b5400*/
  if ( !*(unsigned int *)this->__pad_0 ) /*0x7b5400*/
    return (char *)(&g_INI_DefaultBuffer); /*0x7b5406*/
  return result; /*0x7b540b*/

}

// ==== BACKFILL 0x007B5410  sub_7B5410  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_7B5410(unsigned int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B5410.json)
}

// ==== BACKFILL 0x007B5440  String::GetOrEmpty_Alt  cls=String  sig=csp  renamed_refs=0  residual=- ====
char * String::GetOrEmpty_Alt()
{

  char *result; // eax

  result = *(char **)this->__pad_0; /*0x7b5440*/
  if ( !*(unsigned int *)this->__pad_0 ) /*0x7b5440*/
    return (char *)(&g_INI_DefaultBuffer); /*0x7b5446*/
  return result; /*0x7b544b*/

}

// ==== BACKFILL 0x007B54D0  sub_7B54D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_7B54D0(const char * Src, unsigned int a3)
{
    (void)Src; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B54D0.json)
}

// ==== BACKFILL 0x007B5640  sub_7B5640  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_7B5640(char a2, unsigned int a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B5640.json)
}

// ==== BACKFILL 0x007B5A40  String::Assign_Bool  cls=String  sig=csp  renamed_refs=0  residual=- ====
char String::Assign_Bool(const char *a2)
{

  size_t v3; // ecx
  int result; // eax

  if ( *(unsigned int *)this->__pad_0 ) /*0x7b5a45*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b5a4c*/
  *(unsigned int *)this->__pad_0 = 0; /*0x7b5a58*/
  if ( a2 ) /*0x7b5a60*/
    v3 = strlen(a2) + 1; /*0x7b5a69*/
  else
    v3 = 1; /*0x7b5a6f*/
  result = (int)(__2_YAPAXI_Z(v3)); /*0x7b5a75*/
  *(unsigned int *)this->__pad_0 = result; /*0x7b5a7d*/
  *(unsigned char *)result = 0; /*0x7b5a81*/
  if ( a2 ) /*0x7b5a84*/
  {
    result = strlen(a2) + 1; /*0x7b5a8d*/
    qmemcpy(*(void **)this->__pad_0, a2, result); /*0x7b5a9c*/
  }
  (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x7b5aa7*/
  return result; /*0x7b5aa5*/

}

// ==== BACKFILL 0x007B5B30  String::ToLower  cls=String  sig=csp  renamed_refs=0  residual=- ====
int String::ToLower()
{

  unsigned int i; // esi
  int result; // eax
  char v4; // dl

  for ( i = 0; *(unsigned int *)this->__pad_0; ++i ) /*0x7b5b35*/
  {
    result = 0; /*0x7b5b42*/
    if ( i >= strlen(*(const char **)this->__pad_0) ) /*0x7b5b4b*/
      break; /*0x7b5b4b*/
    v4 = *(unsigned char *)(*(unsigned int *)this->__pad_0 + i); /*0x7b5b4d*/
    if ( v4 >= 65 && v4 <= 90 ) /*0x7b5b58*/
    {
      result = tolower(v4); /*0x7b5b5e*/
      *(unsigned char *)(*(unsigned int *)this->__pad_0 + i) = result; /*0x7b5b68*/
    }
  }
  return result; /*0x7b5b6e*/

}

// ==== BACKFILL 0x007B5B80  String::ToLowerCopy  cls=String  sig=csp  renamed_refs=0  residual=- ====
char ** String::ToLowerCopy(char **aP1)
{

  char *v3; // ebx
  unsigned int i; // esi
  char v5; // al
  char *v6; // edx

  v3 = 0; /*0x7b5b86*/
  if ( *(unsigned int *)this->__pad_0 ) /*0x7b5b88*/
  {
    v3 = (char *)__2_YAPAXI_Z(strlen(*(const char **)this->__pad_0) + 1); /*0x7b5b9f*/
    strcpy(v3, *(const char **)this->__pad_0); /*0x7b5bb8*/
  }
  for ( i = 0; v3 && i < strlen(v3); ++i ) /*0x7b5bc1*/
  {
    v5 = v3[i]; /*0x7b5bd7*/
    if ( v5 >= 65 && v5 <= 90 ) /*0x7b5be0*/
      v3[i] = tolower(v5); /*0x7b5bee*/
  }
  *aP1 = 0; /*0x7b5bfa*/
  if ( v3 ) /*0x7b5c01*/
  {
    v6 = (char *)__2_YAPAXI_Z(strlen(v3) + 1); /*0x7b5c14*/
    *aP1 = v6; /*0x7b5c1d*/
    strcpy(v6, v3); /*0x7b5c30*/
    __3_YAXPAX_Z(v3); /*0x7b5c39*/
  }
  return aP1; /*0x7b5c41*/

}

// ==== BACKFILL 0x007B5C50  sub_7B5C50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_7B5C50()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B5C50.json)
}

// ==== BACKFILL 0x007B5CA0  sub_7B5CA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char ** sub_7B5CA0(char ** a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B5CA0.json)
}

// ==== BACKFILL 0x007B5D70  String::CopyTruncated  cls=String  sig=csp  renamed_refs=0  residual=- ====
char String::CopyTruncated(size_t Count)
{

  const char *v3; // esi
  char *v4; // eax
  char *v5; // ebp
  const char *v6; // esi
  size_t v7; // ecx
  unsigned char *v8; // eax

  v3 = *(const char **)this->__pad_0; /*0x7b5d75*/
  if ( !*(unsigned int *)this->__pad_0 ) /*0x7b5d75*/
    v3 = (const char *)(&g_INI_DefaultBuffer); /*0x7b5d7c*/
  v4 = (char *)__2_YAPAXI_Z(Count + 1); /*0x7b5d89*/
  v5 = v4; /*0x7b5d8e*/
  *v4 = 0; /*0x7b5d95*/
  if ( v3 ) /*0x7b5d99*/
    strncpy(v4, v3, Count); /*0x7b5d9e*/
  v5[Count] = 0; /*0x7b5da8*/
  v6 = (const char *)(&g_INI_DefaultBuffer); /*0x7b5dac*/
  if ( v5 ) /*0x7b5db1*/
    v6 = v5; /*0x7b5db3*/
  if ( *(unsigned int *)this->__pad_0 ) /*0x7b5db5*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b5dbc*/
  *(unsigned int *)this->__pad_0 = 0; /*0x7b5dc6*/
  if ( v6 ) /*0x7b5dcc*/
    v7 = strlen(v6) + 1; /*0x7b5dd5*/
  else
    v7 = 1; /*0x7b5ddb*/
  v8 = (unsigned char *)__2_YAPAXI_Z(v7); /*0x7b5de1*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(v8); /*0x7b5de9*/
  *v8 = 0; /*0x7b5ded*/
  if ( v6 ) /*0x7b5df0*/
    strcpy(*(char **)this->__pad_0, v6); /*0x7b5e08*/
  if ( v5 ) /*0x7b5e13*/
    __3_YAXPAX_Z(v5); /*0x7b5e16*/
  return 1; /*0x7b5e1e*/

}

// ==== BACKFILL 0x007B5E30  CChatEventSink::EncodeString  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
char CChatEventSink::EncodeString(char a2)
{

  char *v4; // eax
  char *v5; // eax
  size_t v6; // esi
  const char *v7; // edi
  char *v8; // eax
  char *v9; // ebp
  const char *v10; // esi
  size_t v11; // ecx
  unsigned char *v12; // eax

  if ( !*(unsigned int *)this->__pad_0 ) /*0x7b5e33*/
    return 0; /*0x7b5e39*/
  v4 = (char *)(strchr(*(const char **)this->__pad_0, a2)); /*0x7b5e46*/
  if ( !v4 ) /*0x7b5e50*/
    return 0; /*0x7b5e52*/
  v5 = &v4[-*(unsigned int *)this->__pad_0]; /*0x7b5e5c*/
  v6 = (size_t)v5; /*0x7b5e5f*/
  v7 = (const char *)(&g_INI_DefaultBuffer); /*0x7b5e63*/
  if ( *(unsigned int *)this->__pad_0 ) /*0x7b5e58*/
    v7 = *(const char **)this->__pad_0; /*0x7b5e6a*/
  v8 = (char *)__2_YAPAXI_Z((size_t)(v5 + 1)); /*0x7b5e70*/
  v9 = v8; /*0x7b5e75*/
  *v8 = 0; /*0x7b5e7c*/
  if ( v7 ) /*0x7b5e80*/
    strncpy(v8, v7, v6); /*0x7b5e85*/
  v9[v6] = 0; /*0x7b5e8d*/
  v10 = (const char *)(&g_INI_DefaultBuffer); /*0x7b5e91*/
  if ( v9 ) /*0x7b5e98*/
    v10 = v9; /*0x7b5e9a*/
  if ( *(unsigned int *)this->__pad_0 ) /*0x7b5e9c*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b5ea3*/
  *(unsigned int *)this->__pad_0 = 0; /*0x7b5ead*/
  if ( v10 ) /*0x7b5eb3*/
    v11 = strlen(v10) + 1; /*0x7b5ebc*/
  else
    v11 = 1; /*0x7b5ec2*/
  v12 = (unsigned char *)__2_YAPAXI_Z(v11); /*0x7b5ec8*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(v12); /*0x7b5ed0*/
  *v12 = 0; /*0x7b5ed4*/
  if ( v10 ) /*0x7b5ed7*/
    strcpy(*(char **)this->__pad_0, v10); /*0x7b5eef*/
  if ( v9 ) /*0x7b5efa*/
    __3_YAXPAX_Z(v9); /*0x7b5efd*/
  return 1; /*0x7b5e3b*/

}

// ==== BACKFILL 0x007B6280  ??1_Timevec_std__QAE_XZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void __1_Timevec_std__QAE_XZ()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B6280.json)
}

// ==== BACKFILL 0x007B6290  FromStringInt  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char ** FromStringInt(IUnknown * aP0, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B6290)
}

// ==== BACKFILL 0x007B6320  FormatStringInt  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char ** FormatStringInt(INIClass * aP0, MPCooperative * aP1, ObjectClass * aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B6320)
}

// ==== BACKFILL 0x007B6630  ValidateStringContains  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool String_ValidateContains(const char ** a1, const char * a2, char * Control)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B6630.json)
}

// ==== BACKFILL 0x007B66D0  WideString::Assign  cls=WideString  sig=csp  renamed_refs=0  residual=- ====
int WideString::Assign(wchar_t *aP1)
{

  int v3; // eax
  unsigned short *v4; // eax

  *(unsigned int *)this = 0; /*0x7b66da*/
  if ( aP1 ) /*0x7b66e0*/
    v3 = wcslen(aP1) + 1; /*0x7b66eb*/
  else
    v3 = 1; /*0x7b66ee*/
  v4 = (unsigned short *)__2_YAPAXI_Z(2 * v3); /*0x7b66f6*/
  *(unsigned int *)this = (unsigned int)(v4); /*0x7b66fe*/
  *v4 = 0; /*0x7b6702*/
  if ( aP1 ) /*0x7b6707*/
    wcscpy(*(wchar_t **)this, aP1); /*0x7b670d*/
  return (int)((wchar_t **)this); /*0x7b6717*/

}

// ==== BACKFILL 0x007B6720  WideString::AssignFromPtr  cls=WideString  sig=csp  renamed_refs=0  residual=- ====
int WideString::AssignFromPtr(const wchar_t **a2)
{

  int v3; // eax
  wchar_t *v4; // eax

  *(unsigned int *)this = 0; /*0x7b6728*/
  if ( *a2 ) /*0x7b672e*/
  {
    v3 = (unsigned int)(wcslen(*a2));
    v4 = (wchar_t *)((unsigned int)((wchar_t *)__2_YAPAXI_Z(2 * v3 + 2)));
    *(unsigned int *)this = (unsigned int)(v4); /*0x7b6744*/
    wcscpy(v4, *a2); /*0x7b674a*/
  }
  return (int)((wchar_t **)this);

}

// ==== BACKFILL 0x007B6880  WideString::Assign_Alt  cls=WideString  sig=csp  renamed_refs=0  residual=- ====
void ** WideString::Assign_Alt(wchar_t *String)
{

  int v3; // eax
  unsigned short *v4; // eax

  if ( *(unsigned int *)this ) /*0x7b6884*/
    __3_YAXPAX_Z(*(void **)this); /*0x7b688b*/
  *(unsigned int *)this = 0; /*0x7b6897*/
  if ( String ) /*0x7b689f*/
    v3 = wcslen(String) + 1; /*0x7b68aa*/
  else
    v3 = 1; /*0x7b68ad*/
  v4 = (unsigned short *)__2_YAPAXI_Z(2 * v3); /*0x7b68b5*/
  *(unsigned int *)this = (unsigned int)(v4); /*0x7b68bd*/
  *v4 = 0; /*0x7b68c1*/
  if ( String ) /*0x7b68c6*/
    wcscpy(*(wchar_t **)this, String); /*0x7b68cc*/
  return (void **)this; /*0x7b68d6*/

}

// ==== BACKFILL 0x007B68E0  WideString::Reassign_Alt  cls=WideString  sig=csp  renamed_refs=0  residual=- ====
int WideString::Reassign_Alt(const wchar_t **a2)
{

  const wchar_t *v3; // eax
  wchar_t *v4; // edi
  int v5; // eax
  unsigned short *v6; // eax

  v3 = (wchar_t *)(*(const wchar_t **)this);
  if ( (*(unsigned int *)this || *a2) && (!v3 || !*a2 || wcscmp(v3, *a2)) ) /*0x7b68ff*/
  {
    v4 = (wchar_t *)((unsigned int)((wchar_t *)*a2));
    if ( !*a2 ) /*0x7b690b*/
      v4 = (wchar_t *)(&g_TypeClass_DefaultString); /*0x7b6911*/
    if ( *(unsigned int *)this ) /*0x7b6916*/
      __3_YAXPAX_Z(*(void **)this); /*0x7b691d*/
    *(unsigned int *)this = 0; /*0x7b6927*/
    if ( v4 ) /*0x7b692d*/
      v5 = wcslen(v4) + 1; /*0x7b6938*/
    else
      v5 = 1; /*0x7b693b*/
    v6 = (unsigned short *)__2_YAPAXI_Z(2 * v5); /*0x7b6943*/
    *(unsigned int *)this = (unsigned int)(v6); /*0x7b694b*/
    *v6 = 0; /*0x7b694f*/
    if ( v4 ) /*0x7b6954*/
      wcscpy(*(wchar_t **)this, v4); /*0x7b695a*/
  }
  return (int)((void **)this);

}

// ==== BACKFILL 0x007B69F0  sub_7B69F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_7B69F0(size_t Count, wchar_t * Source)
{
    (void)Count; (void)Source; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B69F0.json)
}

// ==== BACKFILL 0x007B6A60  sub_7B6A60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_7B6A60(ObjectClass * aP1)
{
    (void)aP1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B6A60.json)
}

// ==== BACKFILL 0x007B6AE0  WideString::Append2  cls=WideString  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** WideString::Append2(wchar_t *aP1)
{

  wchar_t *v3; // esi
  int v4; // edi
  wchar_t *v5; // eax

  if ( aP1 ) /*0x7b6aeb*/
  {
    v3 = (wchar_t *)((unsigned int)(*(wchar_t **)this));
    v4 = (unsigned int)(wcslen((const wchar_t *)(aP1)) + 1);
    if ( v3 ) /*0x7b6afe*/
      v4 += wcslen(v3); /*0x7b6b09*/
    v5 = (wchar_t *)__2_YAPAXI_Z(4 * v4); /*0x7b6b13*/
    *(unsigned int *)this = (unsigned int)(v5); /*0x7b6b1b*/
    if ( v3 ) /*0x7b6b20*/
      wcscpy(v5, v3); /*0x7b6b24*/
    else
      *v5 = 0; /*0x7b6b2e*/
    wcscat(*(wchar_t **)this,(const wchar_t *)(aP1)); /*0x7b6b37*/
    if ( v3 ) /*0x7b6b41*/
      __3_YAXPAX_Z(v3); /*0x7b6b44*/
  }
  return (wchar_t **)this; /*0x7b6b4c*/

}

// ==== BACKFILL 0x007B6B60  WideString::Append  cls=WideString  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** WideString::Append(CampaignScore * aP1, void *a2_1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B6B60)
}

// ==== BACKFILL 0x007B6BE0  WideString::AssignConcat  cls=WideString  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** WideString::AssignConcat(wchar_t ** a2, wchar_t * String)
{

  wchar_t *v4; // esi
  int v5; // eax
  wchar_t *v6; // ebx
  int v7; // edi
  wchar_t *v8; // eax
  int v9; // eax
  wchar_t *v10; // eax

  v4 = 0; /*0x7b6be4*/
  if ( *(unsigned int *)this ) /*0x7b6be6*/
  {
    v5 = wcslen(*(const wchar_t **)this); /*0x7b6bed*/
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v5 + 2); /*0x7b6bfe*/
    wcscpy(v4, *(const wchar_t **)this); /*0x7b6c02*/
  }
  if ( String ) /*0x7b6c12*/
  {
    v6 = v4; /*0x7b6c15*/
    v7 = wcslen(String) + 1; /*0x7b6c21*/
    if ( v4 ) /*0x7b6c24*/
      v7 += wcslen(v4); /*0x7b6c2f*/
    v8 = (wchar_t *)__2_YAPAXI_Z(4 * v7); /*0x7b6c39*/
    v4 = v8; /*0x7b6c41*/
    if ( v6 ) /*0x7b6c45*/
      wcscpy(v8, v6); /*0x7b6c49*/
    else
      *v8 = 0; /*0x7b6c53*/
    wcscat(v4, String); /*0x7b6c5a*/
    if ( v6 ) /*0x7b6c64*/
      __3_YAXPAX_Z(v6); /*0x7b6c67*/
  }
  *a2 = 0; /*0x7b6c76*/
  if ( v4 ) /*0x7b6c7d*/
  {
    v9 = wcslen(v4); /*0x7b6c80*/
    v10 = (wchar_t *)__2_YAPAXI_Z(2 * v9 + 2); /*0x7b6c8a*/
    *a2 = v10; /*0x7b6c91*/
    wcscpy(v10, v4); /*0x7b6c93*/
    __3_YAXPAX_Z(v4); /*0x7b6c99*/
  }
  return a2; /*0x7b6ca3*/

}

// ==== BACKFILL 0x007B6CB0  WideString::ConcatAlloc  cls=WideString  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** WideString::ConcatAlloc(wchar_t ** a1, ObjectClass * aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B6CB0)
}

// ==== BACKFILL 0x007B6D90  WideString::Erase  cls=WideString  sig=csp  renamed_refs=0  residual=- ====
short WideString::Erase(int a2, int a3, void *a3_2)
{

  int v4; // eax
  int v5; // esi
  int v6; // ebx
  wchar_t *v8; // ebp
  int v9; // esi

  v4 = wcslen(*(const wchar_t **)this); /*0x7b6d98*/
  v5 = a2; /*0x7b6d9d*/
  v6 = a3; /*0x7b6da1*/
  if ( a2 + a3 > v4 ) /*0x7b6dad*/
    v5 = v4 - a3; /*0x7b6db1*/
  if ( v5 < 0 ) /*0x7b6db5*/
  {
    v6 = v5 + a3; /*0x7b6db7*/
    v5 = 0; /*0x7b6db9*/
  }
  if ( v6 <= 0 ) /*0x7b6dbd*/
    return 0; /*0x7b6dc1*/
  v8 = (wchar_t *)__2_YAPAXI_Z(2 * (v4 + 0x7FFFFFFF * v6) + 2); /*0x7b6de0*/
  *(unsigned short *)(*(unsigned int *)this + 2 * v5) = 0; /*0x7b6de2*/
  v9 = 2 * (v6 + v5); /*0x7b6dec*/
  *(unsigned short *)(v9 + *(unsigned int *)this - 2) = 0; /*0x7b6dee*/
  wcscpy(v8, *(const wchar_t **)this); /*0x7b6df9*/
  wcscat(v8, (const wchar_t *)(*(unsigned int *)this + v9)); /*0x7b6e02*/
  __3_YAXPAX_Z(*(void **)this); /*0x7b6e0a*/
  *(unsigned int *)this = (unsigned int)(v8); /*0x7b6e12*/
  return 1; /*0x7b6dbf*/

}

// ==== BACKFILL 0x007B6E20  WideString::RemoveChar  cls=WideString  sig=csp  renamed_refs=0  residual=- ====
char WideString::RemoveChar(wchar_t a2)
{

  char v3; // bl
  int v5; // edi
  wchar_t *v6; // eax
  int v7; // edi
  int v8; // eax
  wchar_t *v9; // edi
v3 = (char)((wchar_t *)(0));
  if ( !*(unsigned int *)this ) /*0x7b6e26*/
    return 0; /*0x7b6e2d*/
  v5 = wcslen(*(const wchar_t **)this); /*0x7b6e3f*/
  v6 = (wchar_t *)(wcschr(*(const wchar_t **)this, a2)); /*0x7b6e45*/
  if ( v6 ) /*0x7b6e4f*/
  {
    v3 = 1; /*0x7b6e51*/
    v7 = 2 * v5; /*0x7b6e53*/
    do /*0x7b6e88*/
    {
      memcpy(v6, v6 + 1, v7 - (((int)v6 - *(unsigned int *)this) >> 1) - 2); /*0x7b6e6a*/
      v7 -= 2; /*0x7b6e71*/
      *(unsigned short *)(v7 + *(unsigned int *)this) = 0; /*0x7b6e75*/
      v6 = (wchar_t *)(wcschr(*(const wchar_t **)this, a2)); /*0x7b6e7e*/
    }
    while ( v6 ); /*0x7b6e88*/
    v8 = wcslen(*(const wchar_t **)this); /*0x7b6e8d*/
    v9 = (wchar_t *)__2_YAPAXI_Z(2 * v8 + 2); /*0x7b6e9c*/
    wcscpy(v9, *(const wchar_t **)this); /*0x7b6ea2*/
    __3_YAXPAX_Z(*(void **)this); /*0x7b6eaa*/
    *(unsigned int *)this = (unsigned int)(v9); /*0x7b6eb2*/
  }
  return v3; /*0x7b6e2c*/

}

// ==== BACKFILL 0x007B6EE0  sub_7B6EE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
short sub_7B6EE0(const wchar_t ** a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B6EE0.json)
}

// ==== BACKFILL 0x007B70B0  sub_7B70B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
size_t sub_7B70B0(ObjectClass * aP1, size_t Count)
{
    (void)aP1; (void)Count; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B70B0.json)
}

// ==== BACKFILL 0x007B7100  WideString::GetOrEmpty  cls=WideString  sig=csp  renamed_refs=0  residual=- ====
int WideString::GetOrEmpty()
{

  wchar_t *result; // eax

  result = *(wchar_t **)this; /*0x7b7100*/
  if ( !*(unsigned int *)this ) /*0x7b7100*/
    return (int)(&g_TypeClass_DefaultString); /*0x7b7106*/
  return (int)(result); /*0x7b710b*/

}

// ==== BACKFILL 0x007B7110  MSPrintAnim::GetCharAt  cls=MSPrintAnim  sig=csp  renamed_refs=0  residual=- ====
wchar_t MSPrintAnim::GetCharAt(size_t a2)
{

  int result; // eax

  result = wcslen(*(const wchar_t **)this->__pad_0); /*0x7b7116*/
  if ( a2 >= result ) /*0x7b7124*/
    (result) = ((result) & ~0xFFFF) | ((0) & 0xFFFF); /*0x7b7130*/
  else
    LOWORD(result) = *(unsigned short *)(*(unsigned int *)this->__pad_0 + 2 * a2); /*0x7b7129*/
  return result; /*0x7b7128*/

}

// ==== BACKFILL 0x007B7140  WideString::GetOrEmpty_Alt  cls=WideString  sig=csp  renamed_refs=0  residual=- ====
int WideString::GetOrEmpty_Alt()
{

  wchar_t *result; // eax

  result = *(wchar_t **)this; /*0x7b7140*/
  if ( !*(unsigned int *)this ) /*0x7b7140*/
    return (int)(&g_TypeClass_DefaultString); /*0x7b7146*/
  return (int)(result); /*0x7b714b*/

}

// ==== BACKFILL 0x007B7180  WideString::GetChar  cls=WideString  sig=csp  renamed_refs=0  residual=- ====
int WideString::GetChar(size_t aP1)
{

  int result; // eax

  result = wcslen(*(const wchar_t **)this); /*0x7b7186*/
  if ( aP1 >= result ) /*0x7b7194*/
    return 0; /*0x7b71a0*/
  LOWORD(result) = *(unsigned short *)(*(unsigned int *)this + 2 * aP1); /*0x7b7199*/
  return result; /*0x7b7198*/

}

// ==== BACKFILL 0x007B71B0  WideString::Length  cls=WideString  sig=csp  renamed_refs=0  residual=- ====
int WideString::Length()
{

  const wchar_t *result; // eax

  result = *(const wchar_t **)this; /*0x7b71b0*/
  if ( *(unsigned int *)this ) /*0x7b71b0*/
    return (int)((const wchar_t *)wcslen(*(const wchar_t **)this)); /*0x7b71b8*/
  return (int)(result); /*0x7b71b6*/

}

// ==== BACKFILL 0x007B7600  WideString::Reassign  cls=WideString  sig=csp  renamed_refs=0  residual=- ====
short WideString::Reassign(wchar_t * String, void *a2_1)
{

  int v3; // eax
  unsigned short *v4; // eax

  if ( *(unsigned int *)this ) /*0x7b7604*/
    __3_YAXPAX_Z(*(void **)this); /*0x7b760b*/
  *(unsigned int *)this = 0; /*0x7b7617*/
  if ( String ) /*0x7b761f*/
    v3 = wcslen(String) + 1; /*0x7b762a*/
  else
    v3 = 1; /*0x7b762d*/
  v4 = (unsigned short *)__2_YAPAXI_Z(2 * v3); /*0x7b7635*/
  *(unsigned int *)this = (unsigned int)(v4); /*0x7b763d*/
  *v4 = 0; /*0x7b7641*/
  if ( String ) /*0x7b7646*/
    wcscpy(*(wchar_t **)this, String); /*0x7b764c*/
  return 1; /*0x7b7654*/

}

// ==== BACKFILL 0x007B78D0  String::TruncateTo  cls=String  sig=csp  renamed_refs=0  residual=- ====
char String::TruncateTo(size_t Count)
{

  const wchar_t *v3; // esi
  wchar_t *v4; // eax
  wchar_t *v5; // edi
  const wchar_t *v6; // esi
  int v7; // eax
  unsigned short *v8; // eax

  v3 = *(const wchar_t **)this->__pad_0; /*0x7b78d5*/
  if ( !*(unsigned int *)this->__pad_0 ) /*0x7b78d5*/
    v3 = (const wchar_t *)(&g_TypeClass_DefaultString); /*0x7b78db*/
  v4 = (wchar_t *)__2_YAPAXI_Z(2 * Count + 2); /*0x7b78ea*/
  v5 = v4; /*0x7b78ef*/
  *v4 = 0; /*0x7b78f6*/
  if ( v3 ) /*0x7b78fb*/
    wcsncpy(v4, v3, Count); /*0x7b7900*/
  v5[Count] = 0; /*0x7b7908*/
  v6 = (const wchar_t *)(&g_TypeClass_DefaultString); /*0x7b7911*/
  if ( v5 ) /*0x7b7916*/
    v6 = v5; /*0x7b7918*/
  if ( *(unsigned int *)this->__pad_0 ) /*0x7b791a*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b7921*/
  *(unsigned int *)this->__pad_0 = 0; /*0x7b792b*/
  if ( v6 ) /*0x7b7931*/
    v7 = wcslen(v6) + 1; /*0x7b793c*/
  else
    v7 = 1; /*0x7b793f*/
  v8 = (unsigned short *)__2_YAPAXI_Z(2 * v7); /*0x7b7948*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(v8); /*0x7b7950*/
  *v8 = 0; /*0x7b7954*/
  if ( v6 ) /*0x7b7959*/
    wcscpy(*(wchar_t **)this->__pad_0, v6); /*0x7b795f*/
  if ( v5 ) /*0x7b7969*/
    __3_YAXPAX_Z(v5); /*0x7b796c*/
  return 1; /*0x7b7974*/

}

// ==== BACKFILL 0x007B7D90  WideString::IsASCII  cls=WideString  sig=csp  renamed_refs=0  residual=- ====
char WideString::IsASCII()
{

  int result; // eax
  int v3; // ecx
  unsigned short *v4; // edx

  result = *(unsigned int *)this; /*0x7b7d93*/
  if ( *(unsigned int *)this && (result = wcslen(*(const wchar_t **)this), v3 = 0, result > 0) ) /*0x7b7da6*/
  {
    v4 = *(unsigned short **)this; /*0x7b7da8*/
    while ( *v4 < 0x100u ) /*0x7b7daf*/
    {
      ++v3; /*0x7b7db1*/
      ++v4; /*0x7b7db2*/
      if ( v3 >= result ) /*0x7b7db7*/
        goto LABEL_6; /*0x7b7db7*/
    }
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x7b7dbd*/
  }
  else
  {
LABEL_6:
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x7b7db9*/
  }
  return result; /*0x7b7dbb*/

}

// ==== BACKFILL 0x007B7DD0  FormatWideString  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
CampaignScore * FormatWideString(wchar_t ** a1, const wchar_t * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B7DD0)
}

// ==== BACKFILL 0x007B7E40  WDTGame_Helper  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** WDTGame_Helper(CampaignScore * aP0, const wchar_t * a1, wchar_t * Format)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B7E40)
}

// ==== BACKFILL 0x007B7ED0  CharStringToWide  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** CharStringToWide(ObjectClass * aP0, const char ** a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B7ED0)
}

// ==== BACKFILL 0x007B7F90  ToWideStringCharAlt  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char ** sub_7B7F90(char ** a1, const wchar_t ** a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B7F90)
}

// ==== BACKFILL 0x007B8090  FormatWideStringPrefix  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** FormatWideStringPrefix(CampaignScore * aP0, const wchar_t * a1, wchar_t ** a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B8090)
}

// ==== BACKFILL 0x007B8170  ConcatWString  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** ConcatWString(GameSetup * aP0, const wchar_t ** a1, const wchar_t ** a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B8170)
}

// ==== BACKFILL 0x007B8250  sub_7B8250  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool sub_7B8250(wchar_t * Control)
{
    (void)Control; return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B8250.json)
}

// ==== BACKFILL 0x007B82E0  Game_Set  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char ** sub_7B82E0(char ** a1, const wchar_t ** a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B82E0)
}

// ==== BACKFILL 0x007B83E0  UI_Setup_7B83E0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** sub_7B83E0(wchar_t ** a1, const char ** a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B83E0)
}

// ==== BACKFILL 0x007B8610  sub_7B8610  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
DWORD sub_7B8610(unsigned int * lpThreadParameter)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B8610.json)
}

// ==== BACKFILL 0x007B8960  MouseClass::CalcConfiningRect  cls=MouseClass  sig=csp  renamed_refs=0  residual=- ====
void MouseClass::CalcConfiningRect() {
}

// ==== BACKFILL 0x007B89F0  WWMouseClass::COMStub  cls=WWMouseClass  sig=csp  renamed_refs=0  residual=- ====
int WWMouseClass::COMStub()
{

  return (int)this->WWMouseClass_field_0xC; /*0x7b89f3*/

}

// ==== BACKFILL 0x007B8E80  WWMouseClass::initCursorState  cls=WWMouseClass  sig=csp  renamed_refs=0  residual=- ====
void* WWMouseClass::initCursorState(void* v3) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 17 errs): wrong-universe gap2 body; truth func_0x7B8E80.json */
}

// ==== BACKFILL 0x007B8F30  WWMouseClass::updateCursorRect  cls=WWMouseClass  sig=csp  renamed_refs=0  residual=- ====
int WWMouseClass::updateCursorRect() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 6 errs): wrong-universe gap2 body; truth func_0x7B8F30.json */
}

// ==== BACKFILL 0x007B9690  WWMouseClass::renderDragSelectionRect  cls=WWMouseClass  sig=csp  renamed_refs=0  residual=- ====
bool WWMouseClass::renderDragSelectionRect() {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 15 errs): wrong-universe gap2 body; truth func_0x7B9690.json */
}

// ==== BACKFILL 0x007B9750  WWMouseClass::showCursor  cls=WWMouseClass  sig=csp  renamed_refs=0  residual=- ====
int WWMouseClass::showCursor() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 15 errs): wrong-universe gap2 body; truth func_0x7B9750.json */
}

// ==== BACKFILL 0x007B9D70  WWMouseClass::checkStatus  cls=WWMouseClass  sig=csp  renamed_refs=0  residual=- ====
int WWMouseClass::checkStatus(int a1, int a2, int a3, int a4) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x7B9D70.json */
}

// ==== BACKFILL 0x007B9D80  WWMouseClass::checkVisible  cls=WWMouseClass  sig=csp  renamed_refs=0  residual=- ====
int WWMouseClass::checkVisible()
{

  return (*(int (**)(WWMouseClass *))(*(unsigned int *)this->__pad_0 + 16))(this);

}

// ==== BACKFILL 0x007B9D90  WWMouseClass::processFrame  cls=WWMouseClass  sig=csp  renamed_refs=0  residual=- ====
void WWMouseClass::processFrame() {
}

// ==== BACKFILL 0x007B9DF0  sub_7B9DF0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_7B9DF0(LONG * a2, LONG * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B9DF0.json)
}

// ==== BACKFILL 0x007B9E30  WWMouseClass::FlipCursorBuffer  cls=WWMouseClass  sig=csp  renamed_refs=0  residual=- ====
bool WWMouseClass::FlipCursorBuffer() {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 49 errs): wrong-universe gap2 body; truth func_0x7B9E30.json */
}

// ==== BACKFILL 0x007BA300  WWMouseClass::updateHotspot  cls=MouseClass  sig=csp  renamed_refs=0  residual=- ====
MouseClass * WWMouseClass::updateHotspot(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7BA300)
}

// ==== BACKFILL 0x007BA320  IsRefCountNegative  cls=WWMouseClass  sig=csp  renamed_refs=0  residual=- ====
bool WWMouseClass::IsRefCountNegative()
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7BA320)
}

// ==== BACKFILL 0x007BA330  WWMouseClass::checkCapture  cls=WWMouseClass  sig=csp  renamed_refs=0  residual=- ====
char WWMouseClass::checkCapture()
{

  return this->WWMouseClass_field_0x10; /*0x7ba333*/

}

// ==== BACKFILL 0x007BA350  WWMouseClass::checkBounds  cls=WWMouseClass  sig=csp  renamed_refs=0  residual=- ====
int WWMouseClass::checkBounds()
{

  return (int)this->WWMouseClass_field_0x20; /*0x7ba353*/

}

// ==== BACKFILL 0x007BA380  WWMouseClass::checkHotspot  cls=WWMouseClass  sig=csp  renamed_refs=0  residual=- ====
int WWMouseClass::checkHotspot(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7BA380)
}

// ==== BACKFILL 0x007BAB30  XSurface::entry_4C_  cls=XSurface  sig=csp  renamed_refs=0  residual=- ====
int XSurface::entry_4C_(int a1, int a2, int a3, int a4, int a5, int a6)
{

  return 0; /*0x7bab32*/

}

// ==== BACKFILL 0x007BAB40  XSurface::entry_50_  cls=XSurface  sig=csp  renamed_refs=0  residual=- ====
char XSurface::entry_50_(int a1, int a2, int a3, int a4)
{

  return 0; /*0x7bab42*/

}

// ==== BACKFILL 0x007BAB50  XSurface::entry_34_  cls=XSurface  sig=csp  renamed_refs=0  residual=- ====
char XSurface::entry_34_(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{

  return 0; /*0x7bab52*/

}

// ==== BACKFILL 0x007BAB60  XSurface::entry_38_  cls=XSurface  sig=csp  renamed_refs=0  residual=- ====
char XSurface::entry_38_(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{

  return 0; /*0x7bab62*/

}

// ==== BACKFILL 0x007BAB70  XSurface::entry_3C_  cls=XSurface  sig=csp  renamed_refs=0  residual=- ====
int XSurface_entry_3C_()
{
  return 0; /*0x7bab72*/
}

// ==== BACKFILL 0x007BAB80  XSurface::entry_40_  cls=XSurface  sig=csp  renamed_refs=0  residual=- ====
char XSurface::entry_40_(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{

  return 0; /*0x7bab82*/

}

// ==== BACKFILL 0x007BADC0  XSurface::DrawRectEx  cls=XSurface  sig=csp  renamed_refs=0  residual=- ====
char XSurface::DrawRectEx(int a2, unsigned int * a3, int a4)
{

  int v5; // edx
  int v6; // eax
  int v7; // edi
  unsigned int v9[2]; // [esp+20h] [ebp-20h] BYREF
  unsigned int v10[2]; // [esp+28h] [ebp-18h] BYREF
  unsigned int v11[2]; // [esp+30h] [ebp-10h] BYREF
  int v12; // [esp+38h] [ebp-8h] BYREF
  int v13; // [esp+3Ch] [ebp-4h]

  v5 = a3[1]; /*0x7badcd*/
  v6 = a3[3]; /*0x7badd4*/
  v7 = a3[2] + *a3 - 1; /*0x7baddb*/
  v9[0] = *a3; /*0x7baddf*/
  v10[0] = v7; /*0x7bade7*/
  v11[0] = v7; /*0x7badeb*/
  v13 = v6 + v5 - 1; /*0x7badf3*/
  v11[1] = v13; /*0x7badf7*/
  v12 = v9[0]; /*0x7badfb*/
  v9[1] = v5; /*0x7bae08*/
  v10[1] = v5; /*0x7bae0c*/
  (*(void (**)(XSurface *, int, unsigned int *, unsigned int *, int))(*(unsigned int *)this->Surface + 44))( /*0x7bae17*/
    this,
    a2,
    v9,
    v10,
    a4);
  (*(void (**)(XSurface *, int, unsigned int *, int *, int))(*(unsigned int *)this->Surface + 44))( /*0x7bae2a*/
    this,
    a2,
    v9,
    &v12,
    a4);
  (*(void (**)(XSurface *, int, unsigned int *, unsigned int *, int))(*(unsigned int *)this->Surface + 44))( /*0x7bae3d*/
    this,
    a2,
    v10,
    v11,
    a4);
  (*(void (**)(XSurface *, int, int *, unsigned int *, int))(*(unsigned int *)this->Surface + 44))( /*0x7bae50*/
    this,
    a2,
    &v12,
    v11,
    a4);
  return 1; /*0x7bae53*/

}

// ==== BACKFILL 0x007BB340  XSurface::entry_1C_  cls=XSurface  sig=csp  renamed_refs=0  residual=- ====
char XSurface::entry_1C_(int a1, int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7BB340)
}

// ==== BACKFILL 0x007BC610  sub_7BC610  cls=-  sig=csp  free-function ====
void sub_7BC610(int a1, char * a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BC610.json)
}

// ==== BACKFILL 0x007BC640  ??_Gfacet_locale_std__UAEPAXI_Z_148  cls=_BlitPlain_E  sig=csp  renamed_refs=0  residual=- ====
BlitPlain * BlitPlain::___Gfacet_locale_std__UAEPAXI_Z_148(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BC640.json)
}

// ==== BACKFILL 0x007BC660  ??_Gfacet_locale_std__UAEPAXI_Z_149  cls=_BlitPlain_G  sig=csp  renamed_refs=0  residual=- ====
BlitPlain * BlitPlain::___Gfacet_locale_std__UAEPAXI_Z_149(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BC660.json)
}

// ==== BACKFILL 0x007BC680  ??_Gfacet_locale_std__UAEPAXI_Z_150  cls=-  sig=csp  free-function ====
BlitTrans * BlitTrans::___Gfacet_locale_std__UAEPAXI_Z_150(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BC680.json)
}

// ==== BACKFILL 0x007BC6A0  ??_Gfacet_locale_std__UAEPAXI_Z_151  cls=-  sig=csp  free-function ====
BlitTrans * BlitTrans::___Gfacet_locale_std__UAEPAXI_Z_151(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BC6A0.json)
}

// ==== BACKFILL 0x007BC6C0  sub_7BC6C0  cls=-  sig=csp  free-function ====
int sub_7BC6C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x007BC6C0.json)
}

// ==== BACKFILL 0x007BC6F0  sub_7BC6F0  cls=-  sig=csp  free-function ====
int sub_7BC6F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x007BC6F0.json)
}

// ==== BACKFILL 0x007BC720  sub_7BC720  cls=-  sig=csp  free-function ====
int sub_7BC720(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x007BC720.json)
}

// ==== BACKFILL 0x007BC750  sub_7BC750  cls=_BlitPlain_E  sig=csp  renamed_refs=0  residual=- ====
unsigned int sub_7BC750(void * a0, const void * a1, BlitPlain * aP2, int a4, int a5, int a6, int a7, int a8)
{
  qmemcpy((void *)a1, (const void *)aP2, a4); /*0x7bc763*/
  return a4; /*0x7bc76c*/
}

// ==== BACKFILL 0x007BC780  sub_7BC780  cls=_BlitPlain_E  sig=csp  renamed_refs=0  residual=- ====
void * sub_7BC780(BlowStraw * aP0, void * Src, ModemGame * aP2, int a4, int a5, int a6, int a7)
{
  return memcpy(Src, (const void *)aP2, a4); /*0x7bc797*/
}

// ==== BACKFILL 0x007BC7A0  sub_7BC7A0  cls=_BlitPlain_E  sig=csp  renamed_refs=0  residual=- ====
unsigned int sub_7BC7A0(void * a0, const void * a1, BlitPlain * aP2, int a4, int a5, int a6, int a7, int a8, int a9)
{
  qmemcpy((void *)a1, (const void *)aP2, a4); /*0x7bc7b3*/
  return a4; /*0x7bc7bc*/
}

// ==== BACKFILL 0x007BC7D0  sub_7BC7D0  cls=_BlitPlain_E  sig=csp  renamed_refs=0  residual=- ====
void * sub_7BC7D0(BlowStraw * aP0, void * Src, ModemGame * aP2, int a4, int a5, int a6, int a7, int a8)
{
  return memcpy(Src, (const void *)aP2, a4); /*0x7bc7e7*/
}

// ==== BACKFILL 0x007BC7F0  sub_7BC7F0  cls=_BlitPlain_G  sig=csp  renamed_refs=0  residual=- ====
int sub_7BC7F0(void * a1, const void * a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BC7F0.json)
}

// ==== BACKFILL 0x007BC820  sub_7BC820  cls=_BlitPlain_G  sig=csp  renamed_refs=0  residual=- ====
void * sub_7BC820(BlowStraw * aP0, BombClass * aP1, int a3, int a4, int a5, int a6, int a7)
{
  return memcpy(aP1, (const void *)a3, 2 * a4); /*0x7bc83a*/
}

// ==== BACKFILL 0x007BC840  sub_7BC840  cls=_BlitPlain_G  sig=csp  renamed_refs=0  residual=- ====
int sub_7BC840(void * a1, const void * a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BC840.json)
}

// ==== BACKFILL 0x007BC870  sub_7BC870  cls=_BlitPlain_G  sig=csp  renamed_refs=0  residual=- ====
void * sub_7BC870(BlowStraw * aP0, BombClass * aP1, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return memcpy(aP1, (const void *)a3, 2 * a4); /*0x7bc88a*/
}

// ==== BACKFILL 0x007BC890  sub_7BC890  cls=-  sig=csp  free-function ====
short sub_7BC890(unsigned short * a1, short * a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BC890.json)
}

// ==== BACKFILL 0x007BC8C0  sub_7BC8C0  cls=-  sig=csp  free-function ====
int sub_7BC8C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x007BC8C0.json)
}

// ==== BACKFILL 0x007BC8F0  sub_7BC8F0  cls=-  sig=csp  free-function ====
int sub_7BC8F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x007BC8F0.json)
}

// ==== BACKFILL 0x007BC920  sub_7BC920  cls=-  sig=csp  free-function ====
int sub_7BC920(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x007BC920.json)
}

// ==== BACKFILL 0x007BCA50  sub_7BCA50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_7BCA50(int a2, int a3, int a4, int a5, int a6)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BCA50.json)
}

// ==== BACKFILL 0x007BCAE0  Stream::GetField  cls=Stream  sig=csp  renamed_refs=0  residual=u32_14 ====
int Stream::GetField() {
  int (__thiscall ***v1)(unsigned int, int); // ecx
  int result; // eax

  v1 =(int (__thiscall ***)(unsigned int,int))(int (***)(unsigned int, int))this->u32_14; /*0x7bcae0*/
  if ( v1 ) /*0x7bcae5*/
    return (**v1)((unsigned int)v1, 1); /*0x7bcaeb*/
  return result; /*0x7bcaed*/
}

// ==== BACKFILL 0x007BCAF0  sub_7BCAF0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * sub_7BCAF0(char * a1, int a2, unsigned short a3)
{
  char *v3; // edx
  int v4; // ebx
  char *result; // eax
  unsigned int v6; // esi

  v3 = a1; /*0x7bcaf0*/
  v4 = a2; /*0x7bcaf5*/
  if ( ((uint8_t)a1 & 2) != 0 && a2 ) /*0x7bcb06*/
  {
    *(unsigned short *)a1 = a3; /*0x7bcb08*/
    v3 = a1 + 2; /*0x7bcb0b*/
    v4 = a2 - 1; /*0x7bcb0e*/
  }
  result = 0; /*0x7bcb11*/
  v6 = v4 >> 1; /*0x7bcb16*/
  if ( v4 >> 1 ) /*0x7bcb16*/
  {
    memset32(v3, 65537 * a3, v6); /*0x7bcb2e*/
    result = &v3[4 * v6]; /*0x7bcb30*/
  }
  if ( (v4 & 1) != 0 ) /*0x7bcb37*/
  {
    if ( result ) /*0x7bcb3b*/
      *(unsigned short *)result = a3; /*0x7bcb3d*/
  }
  return result; /*0x7bcb40*/
}

// ==== BACKFILL 0x007BE640  Stream::CopyFromTemplate  cls=Stream  sig=csp  renamed_refs=0  residual=- ====
void Stream::CopyFromTemplate() {
  qmemcpy(this, &unk_84E738, 0x88u); /*0x7be64e*/
}

// ==== BACKFILL 0x007BE940  sub_7BE940  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_7BE940(int a1, int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BE940.json)
}

// ==== BACKFILL 0x007BEA40  sub_7BEA40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_7BEA40()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BEA40.json)
}

// ==== BACKFILL 0x007BF0B0  sub_7BF0B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_7BF0B0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BF0B0.json)
}

// ==== BACKFILL 0x007BF140  sub_7BF140  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_7BF140()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BF140.json)
}

// ==== BACKFILL 0x007BF190  sub_7BF190  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_7BF190()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BF190.json)
}
