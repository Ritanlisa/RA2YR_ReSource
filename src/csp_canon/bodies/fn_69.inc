// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00690360  Screen::CleanupTransitionObjects  cls=Screen  sig=csp  renamed_refs=0  residual=- ====
int Screen::CleanupTransitionObjects()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x690360)
}

// ==== BACKFILL 0x00690530  sub_690530  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_690530(void * a2, int a3)
{
    (void)a2; (void)a3;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00690530.json)
}

// ==== BACKFILL 0x006905F0  sub_6905F0  cls=ScoreFontClass  sig=csp  renamed_refs=0  residual=- ====
char * sub_6905F0()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006905F0.json)
}

// ==== BACKFILL 0x00691000  ScoreAnimClass::Constructor_ScoreAnimClass_0  cls=ScoreTimeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ScoreAnimClass::Constructor_ScoreAnimClass_0(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x691000)
}

// ==== BACKFILL 0x00691020  ScoreAnimClass::Constructor_ScoreAnimClass_1  cls=ScorePrintClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ScoreAnimClass::Constructor_ScoreAnimClass_1(char a2)
{

  this->m_0 = (int)&g_ptr_7F0EDC; /*0x691029*/
  if ( (a2 & 1) != 0 ) /*0x69102f*/
    __3_YAXPAX_Z(this); /*0x691032*/
  return &this->m_0; /*0x69103c*/

}

// ==== BACKFILL 0x006910A0  ScoreAnimClass::Constructor_ScoreFontClass  cls=ScoreFullFontClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ScoreAnimClass::Constructor_ScoreFontClass(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6910A0)
}

// ==== BACKFILL 0x00691160  VectorClass::PushBack2  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
char VectorClass_flat::PushBack2(unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00691160.json)
}

// ==== BACKFILL 0x006913C0  ScriptClass::Construct  cls=ScriptClass  sig=csp  renamed_refs=0  residual=- ====
void * ScriptClass::Construct(int a2) {
    int v3; // eax

    ((AbstractClass *)(AbstractClass *)this)->Constructor(); /*0x6913c3*/
    this->field28 = 0; /*0x6913cc*/
    this->buildingType = (ScriptTypeClass *)a2; /*0x6913d3*/
    this->idxCurrentLine = -1; /*0x6913d6*/
    *(void **)(char *)this = 0; /*0x6913dd ptr_0*/
    *(void **)((char *)this + 4) = 0; /*0x6913e3 ptr_4*/
    *(void **)((char *)this + 8) = 0; /*0x6913ea ptr_8*/
    *(void **)((char *)this + 12) = 0; /*0x6913f1 ptr_C*/
    if ( dword_8872C0 < dword_8872B8 /*0x69142f*/
      || (byte_8872BD || !dword_8872B8)
      && dword_8872C4 > 0
      && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_8872B0 + 8))(
           (int *)&dword_8872B0,
           dword_8872B8 + dword_8872C4,
           0) )
    {
      v3 = dword_8872C0++; /*0x69143c*/
      *((unsigned int *)dword_8872B4 + v3) = (unsigned int)this; /*0x69144b*/
    }
    return this; /*0x691450*/
}

// ==== BACKFILL 0x006914E0  ScriptClass::PowerDrainUpdate  cls=ScriptClass  sig=csp  renamed_refs=0  residual=- ====
int ScriptClass::PowerDrainUpdate(int a2) {
    ((AbstractClass *)(AbstractClass *)this)->ProcessPower(); /*0x6914e9*/
    return Power::TimerProcess(this->idxCurrentLine); /*0x6914f9*/
}

// ==== BACKFILL 0x006915A0  TeamClass::SetField11  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
char TeamClass::SetField11(ScriptClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006915A0.json)
}

// ==== BACKFILL 0x006915B0  TeamClass::Check  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
BOOL TeamClass::Check(void *a1, void *a2, void *a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006915B0.json)
}

// ==== BACKFILL 0x006915F0  ScriptClass::ddtor  cls=ScriptClass  sig=csp  renamed_refs=0  residual=- ====
int ScriptClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6915f6*/
    return -2147467261; /*0x6915f8*/
  *a2 = 1123264070; /*0x691606*/
  a2[1] = 298977161; /*0x69160e*/
  a2[2] = 1610655148; /*0x691617*/
  a2[3] = unk_7E97AC; /*0x691620*/
  return 0; /*0x6915fd*/

}

// ==== BACKFILL 0x00691630  ScriptClass::LoadState  cls=ScriptClass  sig=csp  renamed_refs=0  residual=- ====
int ScriptClass::LoadState(AbstractClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0,(gamemd::AbstractClass *)(aP1)); /*0x69163b*/
  if ( result >= 0 ) /*0x691642*/
  {
    if ( aP0 ) /*0x691646*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x69164f*/
      /* X11: vtable install elided (implicit via ScriptClass virtuals 0x691654) */
      ((unsigned int *)aP0)[0] = (unsigned int)(&g_ptr_7F0F4C); /*0x69165a*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&g_ptr_7F0F4C); /*0x691661*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&g_ptr_7F0F4C); /*0x691668*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->buildingType); /*0x691678*/
    return 0; /*0x69167d*/
  }
  return result; /*0x69167f*/

}

// ==== BACKFILL 0x00691690  ScriptClass::SaveState  cls=ScriptClass  sig=csp  renamed_refs=0  residual=- ====
int ScriptClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x69169f*/
  if ( result >= 0 ) /*0x6916a6*/
    return 0; /*0x6916a8*/
  return result; /*0x6916aa*/

}

// ==== BACKFILL 0x006917F0  ScriptTypeClass::GetParameter  cls=ScriptTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ScriptTypeClass::GetParameter(void *a2) {
    int v3; // esi
    ScriptTypeClass *v4; // ebx
    char Buffer[16]; // [esp+8h] [ebp-90h] BYREF
    char Source[128]; // [esp+18h] [ebp-80h] BYREF

    if ( !((AbstractTypeClass *)(AbstractTypeClass *)this)->WriteINI((CCINIClass *)a2) ) /*0x691802*/
      return 0; /*0x691885*/
    v3 = 0; /*0x69180d*/
    v4 = (ScriptTypeClass *)&this->scriptActions[0]; /*0x69180f overlay base*/
    do /*0x691873*/
    {
      sprintf(Buffer, "%d", v3); /*0x691820*/
      ((String *)Buffer)->Trim(); /*0x69182c*/
      if ( v3 >= this->actionsCount ) /*0x691837*/
      {
        ((INIClass *)a2)->ClearSection((int)&this->arrayIndex, (void *)Buffer); /*0x691867*/
      }
      else
      {
        v4->FormatToString(Source); /*0x691840*/
        ((INIClass *)a2)->SetString((void *)(uint8_t *)&this->arrayIndex, (void *)Buffer, (void *)Source); /*0x691855*/
      }
      ++v3; /*0x69186c*/
      v4 = (ScriptTypeClass *)((char *)v4 + 8); /*0x69186d*/
    }
    while ( v3 < 50 ); /*0x691873*/
    return 1; /*0x691877*/
}

// ==== BACKFILL 0x006918A0  ScriptTypeClass::GetEvent  cls=ScriptTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ScriptTypeClass::GetEvent(void *a2) {
    int v3; // edi
    int v4; // eax
    unsigned int v6[2]; // [esp+8h] [ebp-98h] BYREF
    char Buffer[16]; // [esp+10h] [ebp-90h] BYREF
    char Destination[128]; // [esp+20h] [ebp-80h] BYREF

    ((INIClass *)(INIClass *)a2)->ResetSection(); /*0x6918b3*/
    if ( !(uint8_t)((AbstractTypeClass *)(AbstractTypeClass *)this)->LoadFromINI((CCINIClass *)a2) ) /*0x6918bb*/
      return 0; /*0x691963*/
    v3 = 0; /*0x6918ca*/
    this->actionsCount = 0; /*0x6918cf*/
    do /*0x691951*/
    {
      sprintf(Buffer, "%d", v3); /*0x6918e0*/
      ((String *)Buffer)->Trim(); /*0x6918ec*/
      if ( ((INIClass *)/*0x69190f*/
             (INIClass *)a2)->GetString((const char *)&this->arrayIndex, (const char *)Buffer, (const char *)&g_INI_DefaultBuffer, Destination, 128) != 0 )
      {
        ((ScriptTypeClass *)v6)->SetField(Destination); /*0x69191a*/
        v4 = this->actionsCount; /*0x69191f*/
        if ( v4 < 50 ) /*0x691928*/
        {
          this->scriptActions[v4].Action = v6[0]; /*0x69192e*/
          this->scriptActions[v4].Argument = v6[1]; /*0x691939*/
          ++this->actionsCount; /*0x691947*/
        }
      }
      ++v3; /*0x69194d*/
    }
    while ( v3 < 50 ); /*0x691951*/
    return 1; /*0x691955*/
}

// ==== BACKFILL 0x00691D50  ScriptTypeClass::GetClassIdentifier  cls=ScriptTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ScriptTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x691d56*/
    return -2147467261; /*0x691d58*/
  *a2 = 1123264071; /*0x691d66*/
  a2[1] = 298977161; /*0x691d6e*/
  a2[2] = 1610655148; /*0x691d77*/
  a2[3] = unk_7E97BC; /*0x691d80*/
  return 0; /*0x691d5d*/

}

// ==== BACKFILL 0x00691D90  ScriptTypeClass::LoadTypeData  cls=ScriptTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ScriptTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0((gamemd::AbstractClass *)(aP0),(gamemd::AbstractClass *)(aP1)); /*0x691d9b*/
  if ( result >= 0 ) /*0x691da2*/
  {
    if ( aP0 ) /*0x691da6*/
    {
      ((AbstractTypeClass*)(int)aP0)->Init((int)&aP1); /*0x691daf*/
      /* X11: vtable install elided (implicit via ScriptTypeClass virtuals 0x691db4) */
      ((unsigned int *)aP0)[0] = (unsigned int)(&g_ptr_7F0FDC); /*0x691dba*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&g_ptr_7F0FDC); /*0x691dc1*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&g_ptr_7F0FDC); /*0x691dc8*/
    }
    return 0; /*0x691dcf*/
  }
  return result; /*0x691dd1*/

}

// ==== BACKFILL 0x00691DE0  ScriptTypeClass::SaveToINI  cls=ScriptTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ScriptTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x691def*/
  if ( result >= 0 ) /*0x691df6*/
    return 0; /*0x691df8*/
  return result; /*0x691dfa*/

}

// ==== BACKFILL 0x00691E00  ScriptTypeClass::PowerDrainUpdate  cls=ScriptTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ScriptTypeClass::PowerDrainUpdate(void *a2) {
    ((AbstractTypeClass *)(AbstractTypeClass *)this)->ProcessPower((int)a2); /*0x691e09*/
    return Power::TimerProcess(this->actionsCount); /*0x691e1c*/
}

// ==== BACKFILL 0x00691EC0  ScriptClass::StubReturn26  cls=ScriptClass  sig=csp  renamed_refs=0  residual=- ====
int ScriptClass::StubReturn26()
{

  return 26; /*0x691ec5*/

}

// ==== BACKFILL 0x00691ED0  ScriptClass::StubReturn48  cls=ScriptClass  sig=csp  renamed_refs=0  residual=- ====
int ScriptClass::StubReturn48()
{

  return 48; /*0x691ed5*/

}

// ==== BACKFILL 0x00691F70  ScriptTypeClass::GetTypeIdentifier  cls=ScriptTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ScriptTypeClass::GetTypeIdentifier()
{

  return 27; /*0x691f75*/

}

// ==== BACKFILL 0x00691F80  ScriptTypeClass::GetObjectSize  cls=ScriptTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ScriptTypeClass::GetObjectSize()
{

  return 564; /*0x691f85*/

}

// ==== BACKFILL 0x00691F90  ScriptTypeClass::GetAuxField  cls=ScriptTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ScriptTypeClass::GetAuxField() {
    return this->arrayIndex; /*0x691f96 GetAuxField=idxArray 同槽*/
}

// ==== BACKFILL 0x00691FA0  ScriptTypeClass::ddtor  cls=ScriptTypeClass  sig=csp  renamed_refs=0  residual=- ====
ScriptTypeClass * ScriptTypeClass::ddtor(char a2, int a1, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x691FA0)
}

// ==== BACKFILL 0x00692290  SmallFunc_692290  cls=ScrollClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_692290::SmallFunc_692290() {

  TabClass::Constructor((unsigned int *)this); /*0x692293*/
  *((unsigned int *)this + 5458) = 0; /*0x69229a*/
  *((unsigned char *)this + 21836) = 0; /*0x6922a0*/
  *((unsigned int *)this + 5460) = 0; /*0x6922a6*/
  *((unsigned int *)this + 5461) = 0; /*0x6922ac*/
  *((unsigned char *)this + 21848) = 0; /*0x6922b2*/
  *((unsigned char *)this + 21850) = 0; /*0x6922b8*/
  *((unsigned char *)this + 21849) = 1; /*0x6922be*/
  /* X11: vtable install elided (implicit via ScrollClass virtuals 0x6922c5) */
  *((unsigned int *)this + 5446) = &g_var_5ee334; /*0x6922cb*/
  return this; /*0x6922d7*/

}

// ==== BACKFILL 0x006922E0  ScrollClass::Scroll  cls=ScrollClass  sig=csp  renamed_refs=0  residual=- ====
int ScrollClass::Scroll(int * a1, MouseClass * aP2)
{

  TacticalClass::ProcessView((TacticalClass *)this); /*0x6922e3*/
  return ((BlowStraw_29 *)((TabClass *)this))->Seek(a1,(unsigned int *)(aP2)); /*0x6922f9*/

}

// ==== BACKFILL 0x00692F30  TacticalClass::ProcessView  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
void TacticalClass::ProcessView() {
}

// ==== BACKFILL 0x00693060  MouseClass::GetHotspot  cls=ScrollClass  sig=csp  renamed_refs=0  residual=- ====
bool MouseClass::GetHotspot() {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x693060.json */
}

// ==== BACKFILL 0x00693840  MouseClass::GetButtonState  cls=ScrollClass  sig=csp  renamed_refs=0  residual=- ====
int MouseClass::GetButtonState(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x693840.json */
}

// ==== BACKFILL 0x00693880  MouseClass::CheckCapture  cls=ScrollClass  sig=csp  renamed_refs=0  residual=- ====
int MouseClass::CheckCapture(void* a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 6 errs): wrong-universe gap2 body; truth func_0x693880.json */
}

// ==== BACKFILL 0x006938F0  ScrollClass::Read  cls=ScrollClass  sig=csp  renamed_refs=0  residual=- ====
short ScrollClass::Read(char * Block, char a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6938F0)
}

// ==== BACKFILL 0x006956D0  Network::sendGameEvent  cls=Network  sig=csp  renamed_refs=0  residual=- ====
bool HashTable_flat::sendGameEvent(unsigned int *aP0)
{
    (void)aP0; return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006956D0.json)
}

// ==== BACKFILL 0x006966D0  sub_6966D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
HWND sub_6966D0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006966D0.json)
}

// ==== BACKFILL 0x00696950  sub_696950  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
HWND sub_696950()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00696950.json)
}

// ==== BACKFILL 0x006969C0  ListBox::SetCustomEntry  cls=ListBox  sig=csp  renamed_refs=0  residual=- ====
int ListBox::SetCustomEntry() {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00696AE0  DlgProcLoadGame_Load_696AE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
HWND E4Recv_696AE0::sub_696AE0()
{

  HWND DlgItem; // edi
  int result; // eax
  HWND v4; // ebp
  char *p_vtable2; // esi
  LRESULT v6; // edi
  int v7; // eax
  char *v8; // [esp+10h] [ebp-8h]

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1629); /*0x696b05*/
  result = (int)GetDlgItem((HWND)this->AbstractClass, 1630); /*0x696b07*/
  v4 = (HWND)result; /*0x696b0b*/
  if ( DlgItem ) /*0x696b0d*/
  {
    if ( result ) /*0x696b15*/
    {
      p_vtable2 = (char *)&((unsigned int *)this)[0]; /*0x696b21*/
      SendMessageA(DlgItem, 0x4B5u, 0x80u, (LPARAM)p_vtable2); /*0x696b30*/
      SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x696b3f*/
      ((String *)(p_vtable2))->Trim(); /*0x696b43*/
      result = 0; /*0x696b4d*/
      if ( strlen(p_vtable2) ) /*0x696b4f*/
      {
        _strupr(p_vtable2); /*0x696b5b*/
        v6 = SendMessageA(v4, 0x4C4u, 0xFFFFFFFF, (LPARAM)p_vtable2); /*0x696b6e*/
        if ( v6 == -1 ) /*0x696b73*/
        {
          v8 = (char *)((HWND)((char *)__2_YAPAXI_Z(0x29u)));
          strcpy(v8, p_vtable2); /*0x696ba2*/
          result = SendMessageA(v4, 0x4C8u, 0, (LPARAM)v8); /*0x696bb1*/
          v6 = result; /*0x696bb3*/
          if ( result == -1 ) /*0x696bb8*/
            return (HWND)(result); /*0x696bb8*/
          if ( dword_A8DB5C < dword_A8DB54 /*0x696bf1*/
            || (byte_A8DB59 || !dword_A8DB54)
            && dword_A8DB60 > 0
            && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_A8DB4C + 8))(
                 &dword_A8DB4C,
                 dword_A8DB54 + dword_A8DB60,
                 0) )
          {
            v7 = (unsigned int)(dword_A8DB5C++);
            *(unsigned int *)(dword_A8DB50 + 4 * v7) = (unsigned int)(v8); /*0x696c11*/
          }
        }
        SendMessageA(v4, 0x186u, v6, 0); /*0x696c1d*/
        SendMessageA(v4, 0x197u, v6, 0); /*0x696c28*/
        *(unsigned int *)&this->isInLogic = v6; /*0x696c2e*/
        return (HWND)((int)this); /*0x696c2a*/
      }
    }
  }
  return (HWND)(result);

}

// ==== BACKFILL 0x00696C40  DlgProcLoadGame_Load_696C40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
HWND E4Recv_696C40::sub_696C40()
{

  int result; // eax
  HWND v3; // edi
  LRESULT v4; // esi
  int v5; // eax

  result = (int)GetDlgItem((HWND)this->AbstractClass, 1630); /*0x696c4f*/
  v3 = (HWND)result; /*0x696c55*/
  if ( result ) /*0x696c59*/
  {
    result = SendMessageA((HWND)result, 0x18Bu, 0, 0); /*0x696c6f*/
    if ( result > 0 ) /*0x696c73*/
    {
      result = SendMessageA(v3, 0x188u, 0, 0); /*0x696c7f*/
      v4 = result; /*0x696c81*/
      if ( result != -1 ) /*0x696c86*/
      {
        SendMessageA(v3, 0x182u, result, 0); /*0x696c91*/
        if ( v4 < dword_A8DB5C ) /*0x696c9b*/
        {
          v5 = v4; /*0x696c9e*/
          if ( v4 < --dword_A8DB5C ) /*0x696ca8*/
          {
            do /*0x696cc0*/
            {
              ++v5; /*0x696cb0*/
              *(unsigned int *)(dword_A8DB50 + 4 * v5 - 4) = *(unsigned int *)(dword_A8DB50 + 4 * v5); /*0x696cb4*/
            }
            while ( v5 < dword_A8DB5C ); /*0x696cc0*/
          }
        }
        if ( v4 >= SendMessageA(v3, 0x18Bu, 0, 0) ) /*0x696cd0*/
          --v4; /*0x696cd2*/
        SendMessageA(v3, 0x186u, v4, 0); /*0x696cdc*/
        result = SendMessageA(v3, 0x197u, v4, 0); /*0x696ce7*/
        *(unsigned int *)&this->isInLogic = v4; /*0x696ce9*/
      }
    }
  }
  return (HWND)(result);

}

// ==== BACKFILL 0x006990A0  SaveConfigWOL  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_6990A0::SaveConfigWOL() {

  char *v2; // eax
  int vtable1; // eax
  int i; // edi
  int j; // edi
  int v6; // eax
  CHAR v7[12]; // [esp+Ch] [ebp-B0h] BYREF
  BufferIOFileClass v8[2]; // [esp+18h] [ebp-A4h] BYREF

  RawFileClass::Construct(v8, (int)aRa2mdIni); /*0x6990b4*/
  INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, aPhoneindex, *((unsigned int *)this + 2593), 0); /*0x6990d1*/
  INIClass::SetBool(dword_8870C0.__pad_0, aMultiplayer, aWollimitresolu, this->sparkParticles); /*0x6990ec*/
  INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, aLastnickslot, this->ambientParticles, 0); /*0x699109*/
  v2 = CharToWideString(&this->ammoReloadTimer); /*0x699114*/
  INIClass::SetWideAsHex(dword_8870C0.__pad_0, aMultiplayer, aHandle, (wchar_t *)v2); /*0x699129*/
  INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, aColor, this->radarFlashTimer[2], 0); /*0x699146*/
  INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, aColorex, this->targetingTimer[0], 0); /*0x699163*/
  INIClass::SetHouseName(dword_8870C0.__pad_0, aMultiplayer, aSide, (void *)this->targetingTimer[1]); /*0x69917e*/
  INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, aSideex, this->targetingTimer[2], 0); /*0x69919b*/
  vtable1 = this->vtable1; /*0x6991a0*/
  if ( vtable1 ) /*0x6991a7*/
    INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, g_INI_Key_GameMode, *(unsigned int *)(vtable1 + 40), 0); /*0x6991ad*/
  else
    INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, g_INI_Key_GameMode, 0, 0); /*0x6991c0*/
  GameSetup::WriteINI((int)this->__pad_18C, dword_8870C0.__pad_0, (uint8_t *)aSkirmish); /*0x6991d5*/
  GameSetup::WriteINI((int)&this->currentBurstCount, dword_8870C0.__pad_0, (uint8_t *)aLan); /*0x6991ea*/
  GameSetup::WriteINI((int)&this->chronoLockRemaining, dword_8870C0.__pad_0, (uint8_t *)aWonlinepref); /*0x6991ff*/
  INIClass::ClearSection((int *)dword_8870C0.__pad_0, (int)g_INI_Key_SerialDefaults, 0); /*0x699210*/
  INIClass::SetString(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aCallwaitstring_0, (char *)this + 10408); /*0x69922b*/
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aCallwaitstring, *((unsigned int *)this + 2599), 0); /*0x699248*/
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aInitstringinde, *((unsigned int *)this + 2598), 0); /*0x699265*/
  INIClass::SetString( /*0x699287*/
    dword_8870C0.__pad_0,
    g_INI_Key_SerialDefaults,
    aDialmethod,
    (&off_83ECFC)[*((unsigned int *)this + 2597)]);
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aBaud, *((unsigned int *)this + 2596), 0); /*0x6992a4*/
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aIrq, *((unsigned int *)this + 2595), 0); /*0x6992c1*/
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aPort, *((unsigned int *)this + 2594), 1); /*0x6992de*/
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aCompression, *((unsigned int *)this + 2600), 0); /*0x6992fb*/
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aErrorcorrectio, *((unsigned int *)this + 2601), 0); /*0x699318*/
  INIClass::SetString(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aModemname, (char *)this + 10424); /*0x699333*/
  INIClass::ClearSection((int *)dword_8870C0.__pad_0, (int)g_INI_Key_InitStrings, 0); /*0x699344*/
  for ( i = 0; i < *((unsigned int *)this + 2633); ++i ) /*0x699359*/
  {
    wsprintfA(v7, "%03d", i); /*0x699366*/
    INIClass::SetString(dword_8870C0.__pad_0, g_INI_Key_InitStrings, v7, *(char **)(*((unsigned int *)this + 2630) + 4 * i)); /*0x699384*/
  }
  INIClass::ClearSection((int *)dword_8870C0.__pad_0, (int)g_INI_Key_PhoneBook, 0); /*0x6993a0*/
  for ( j = *((unsigned int *)this + 2627) - 1; j >= 0; --j ) /*0x6993ac*/
  {
    v6 = *(unsigned int *)(*((unsigned int *)this + 2624) + 4 * j); /*0x6993b4*/
    wsprintfA( /*0x6993f6*/
      (LPSTR)&v8[0].BufferOffset,
      "%s|%s|%x|%d|%d|%d|%d|%s|%d|%d|%s",
      (const char *)(v6 + 112),
      (const char *)(v6 + 154),
      *(unsigned int *)v6,
      *(unsigned int *)(v6 + 4),
      *(unsigned int *)(v6 + 8),
      *(unsigned int *)(v6 + 24),
      *(unsigned int *)(v6 + 28),
      (&off_83ECFC)[*(unsigned int *)(v6 + 12)],
      *(unsigned int *)(v6 + 16),
      *(unsigned int *)(v6 + 20),
      (const char *)(v6 + 32));
    wsprintfA(v7, "%03d", j); /*0x699403*/
    INIClass::SetString(dword_8870C0.__pad_0, g_INI_Key_PhoneBook, v7, (char *)&v8[0].BufferOffset); /*0x69941c*/
  }
  INIClass::WriteDigest((CCINIClass *)&dword_8870C0, (int)v8, 0); /*0x699430*/
  RawFileClass::Dtor(v8); /*0x699439*/

}

// ==== BACKFILL 0x00699450  ScenarioClass::SaveMultiplayerSettings  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::SaveMultiplayerSettings() {
}

// ==== BACKFILL 0x0069A300  nullsub_35  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_35()
{
  ; /*0x69a300*/
}

// ==== BACKFILL 0x0069A310  SessionClass::GetPlayerColorScheme  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int SessionClass::GetPlayerColorScheme(ObjectClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69A310)
}

// ==== BACKFILL 0x0069ADE0  sub_69ADE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_69ADE0(char a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069ADE0.json)
}

// ==== BACKFILL 0x0069B170  ParseAndApplyAlliances  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_69B170::ParseAndApplyAlliances() {

  bool v1; // zf
  void *vtable0; // edx
  const char *v3; // edi
  char *v4; // ebx
  char *i; // ebp
  int j; // edi
  int v7; // esi
  int v8; // eax
  char *k; // ebp
  int m; // edi
  int v11; // esi
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // ebp
  unsigned int *Items; // ecx
  int v17; // esi
  int v18; // edi
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // ebp
  unsigned int *v23; // ecx
  int v24; // esi
  int v25; // edi
  int v26; // eax
  void *v27; // edx
  char *v28; // [esp+10h] [ebp-38h]
  VectorClass v30; // [esp+18h] [ebp-30h] BYREF
  int v31; // [esp+28h] [ebp-20h]
  int v32; // [esp+2Ch] [ebp-1Ch]
  VectorClass v33; // [esp+30h] [ebp-18h] BYREF
  int v34; // [esp+40h] [ebp-8h]
  int v35; // [esp+44h] [ebp-4h]

  v1 = this->AbstractClass == (void *)4; /*0x69b176*/
  *((unsigned char *)this + 1672) = 0; /*0x69b17d*/
  if ( v1 ) /*0x69b184*/
  {
    vtable0 = dword_A8B230->vtable0; /*0x69b199*/
    BYTE1(vtable0) = ((uint16_t)dword_A8B230->vtable0 >> 8) & 0xFB; /*0x69b19b*/
    dword_A8B230->vtable0 = vtable0; /*0x69b19e*/
    Debug::Log(); /*0x69b1a0*/
    Debug::Log(); /*0x69b1af*/
    if ( strlen(&byte_B77A04) ) /*0x69b1b9*/
    {
      if ( strlen(byte_B76568) ) /*0x69b1d1*/
      {
        ParseAndApplyAlliances_Parse(&v33, 0, 0); /*0x69b1ea*/
        /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x69b1ff) */
        v35 = 10; /*0x69b203*/
        v34 = 0; /*0x69b207*/
        ParseAndApplyAlliances_Parse(&v30, 0, 0); /*0x69b20b*/
        /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x69b210) */
        v32 = 10; /*0x69b232*/
        v31 = 0; /*0x69b238*/
        v3 = &byte_B77A04; /*0x69b23c*/
        if ( strlen(&byte_B77A04) <= strlen(byte_B76568) ) /*0x69b241*/
          v3 = byte_B76568; /*0x69b243*/
        v4 = (char *)__2_YAPAXI_Z(strlen(v3) + 32); /*0x69b25b*/
        strcpy(v4, &byte_B77A04); /*0x69b27c*/
        v28 = v4; /*0x69b280*/
        for ( i = strtok(v4, Str); i; i = strtok(0, Str) ) /*0x69b295*/
        {
          if ( !*i ) /*0x69b29b*/
            break; /*0x69b29f*/
          for ( j = 0; j < ((char *)&stru_A80220); ++j ) /*0x69b2ae*/
          {
            v7 = *((unsigned int *)((char *)&stru_A80220) + j); /*0x69b2b6*/
            if ( *(unsigned char *)(v7 + 492) /*0x69b304*/
              && !_strcmpi((char *)(v7 + 90100), i)
              && (v34 < v33.Capacity
               || (v33.IsAllocated || !v33.Capacity)
               && v35 > 0
               && (*((uint8_t (**)(VectorClass *, int, unsigned int))v33.vtable0 + 2))(
                    &v33,
                    v35 + v33.Capacity,
                    0)) )
            {
              v8 = v34++; /*0x69b30f*/
              *((unsigned int *)v33.Items + v8) = v7; /*0x69b31a*/
            }
          }
        }
        strcpy(v4, byte_B76568); /*0x69b35f*/
        for ( k = strtok(v4, Str); k; k = strtok(0, Str) ) /*0x69b374*/
        {
          if ( !*k ) /*0x69b37a*/
            break; /*0x69b37e*/
          for ( m = 0; m < ((char *)&stru_A80220); ++m ) /*0x69b38d*/
          {
            v11 = *((unsigned int *)((char *)&stru_A80220) + m); /*0x69b394*/
            if ( *(unsigned char *)(v11 + 492) /*0x69b3e2*/
              && !_strcmpi((char *)(v11 + 90100), k)
              && (v31 < v30.Capacity
               || (v30.IsAllocated || !v30.Capacity)
               && v32 > 0
               && (*((uint8_t (**)(VectorClass *, int, unsigned int))v30.vtable0 + 2))(
                    &v30,
                    v32 + v30.Capacity,
                    0)) )
            {
              v12 = v31++; /*0x69b3ed*/
              *((unsigned int *)v30.Items + v12) = v11; /*0x69b3f8*/
            }
          }
        }
        v13 = v34; /*0x69b41e*/
        v14 = v34; /*0x69b422*/
        if ( v34 > 1 ) /*0x69b427*/
        {
          v15 = 0; /*0x69b429*/
          Items = v33.Items; /*0x69b42f*/
          v17 = 0; /*0x69b433*/
          do /*0x69b46d*/
          {
            v18 = 0; /*0x69b435*/
            if ( v14 > 0 ) /*0x69b439*/
            {
              do /*0x69b45f*/
              {
                v19 = Items[v18]; /*0x69b43e*/
                if ( *(unsigned int *)(Items[v17] + 48) != *(unsigned int *)(v19 + 48) ) /*0x69b447*/
                {
                  HouseClass::HandleAlliance((int *)Items[v17], v19, 0); /*0x69b44f*/
                  v13 = v34; /*0x69b454*/
                  Items = v33.Items; /*0x69b458*/
                }
                ++v18; /*0x69b45c*/
              }
              while ( v18 < v13 ); /*0x69b45f*/
              v4 = v28; /*0x69b461*/
            }
            ++v15; /*0x69b465*/
            v14 = v13; /*0x69b466*/
            ++v17; /*0x69b468*/
          }
          while ( v15 < v13 ); /*0x69b46d*/
        }
        v20 = v31; /*0x69b46f*/
        v21 = v31; /*0x69b473*/
        if ( v31 > 1 ) /*0x69b478*/
        {
          v22 = 0; /*0x69b47a*/
          v23 = v30.Items; /*0x69b480*/
          v24 = 0; /*0x69b484*/
          do /*0x69b4be*/
          {
            v25 = 0; /*0x69b486*/
            if ( v21 > 0 ) /*0x69b48a*/
            {
              do /*0x69b4b0*/
              {
                v26 = v23[v25]; /*0x69b48f*/
                if ( *(unsigned int *)(v23[v24] + 48) != *(unsigned int *)(v26 + 48) ) /*0x69b498*/
                {
                  HouseClass::HandleAlliance((int *)v23[v24], v26, 0); /*0x69b4a0*/
                  v20 = v31; /*0x69b4a5*/
                  v23 = v30.Items; /*0x69b4a9*/
                }
                ++v25; /*0x69b4ad*/
              }
              while ( v25 < v20 ); /*0x69b4b0*/
              v4 = v28; /*0x69b4b2*/
            }
            ++v22; /*0x69b4b6*/
            v21 = v20; /*0x69b4b7*/
            ++v24; /*0x69b4b9*/
          }
          while ( v22 < v20 ); /*0x69b4be*/
        }
        __3_YAXPAX_Z(v4); /*0x69b4c1*/
        *((unsigned char *)this + 1672) = 1; /*0x69b4d4*/
        v27 = dword_A8B230->vtable0; /*0x69b4e0*/
        BYTE1(v27) = ((uint16_t)dword_A8B230->vtable0 >> 8) | 4; /*0x69b4e2*/
        dword_A8B230->vtable0 = v27; /*0x69b4e5*/
        /* X11: vtable install elided (implicit via VectorClass virtuals 0x69b4ed) */
        if ( v30.Items && v30.IsAllocated ) /*0x69b4f9*/
        {
          __3_YAXPAX_Z(v30.Items); /*0x69b4fc*/
          v30.Items = 0; /*0x69b504*/
        }
        /* X11: vtable install elided (implicit via VectorClass virtuals 0x69b50c) */
        v30.IsAllocated = 0; /*0x69b514*/
        v30.Capacity = 0; /*0x69b519*/
        if ( v33.Items ) /*0x69b51e*/
        {
          if ( v33.IsAllocated ) /*0x69b526*/
            __3_YAXPAX_Z(v33.Items); /*0x69b529*/
        }
      }
    }
  }

}

// ==== BACKFILL 0x0069B560  SaveGame::SaveAudioData  cls=SaveGame  sig=csp  renamed_refs=0  residual=- ====
bool SaveGame::SaveAudioData(int a2)
{

  int v2; // esi
  int v4; // eax
  bool result; // al
  int v6; // [esp-Ch] [ebp-18h]

  v2 = a2; /*0x69b561*/
  result = 0; /*0x69b59a*/
  if ( a2 ) /*0x69b56a*/
  {
    v4 = *(unsigned int *)a2; /*0x69b56c*/
    v6 = a2; /*0x69b577*/
    a2 = 300; /*0x69b578*/
    if ( (*(int (**)(int, int *, int, unsigned int))(v4 + 16))(v6, &a2, 4, 0) >= 0 /*0x69b597*/
      && (*(int (**)(int, SaveGame *, int, unsigned int))(*(unsigned int *)v2 + 16))(v2, this, a2, 0) >= 0 )
    {
      return 1; /*0x69b56a*/
    }
  }
  return result; /*0x69b599*/

}

// ==== BACKFILL 0x0069B760  SessionClass::AssignSide  cls=SessionClass  sig=csp  renamed_refs=0  residual=- ====
int SessionClass::AssignSide(int a2, char aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69B760)
}

// ==== BACKFILL 0x0069B8B0  nullsub_229  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_229(int a1, int a2)
{
  ; /*0x69b8b0*/
}

// ==== BACKFILL 0x0069BBE0  SessionClass::GetGameSpeed  cls=SessionClass  sig=csp  renamed_refs=0  residual=- ====
char SessionClass::GetGameSpeed()
{

  int result; // eax

  (result) = ((result) & ~0xFF) | ((this->CurrentlyInGame) & 0xFF); /*0x69bbe0*/
  return result; /*0x69bbe6*/

}

// ==== BACKFILL 0x0069BC60  GameClass::FindPlayerName  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int PKStrawClass::FindPlayerName(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069BC60.json)
}

// ==== BACKFILL 0x0069BD00  sub_69BD00  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_69BD00(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069BD00.json)
}

// ==== BACKFILL 0x0069C690  VectorClass_ptr_GlobalPacketType::GetItemIndex_1  cls=VectorClass_ptr_GlobalPacketType  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_flat::Get(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0069C6B0.json)
}

// ==== BACKFILL 0x0069D380  VectorClass_ptr_GlobalPacketType::SetCapacity_1  cls=VectorClass_ptr_GlobalPacketType  sig=csp  renamed_refs=0  residual=- ====
char VectorClass_flat::SetCapacity_1(int a2, unsigned int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D380.json)
}

// ==== BACKFILL 0x0069D430  VectorClass_ptr_GlobalPacketType::FindItemIndex_1  cls=VectorClass_ptr_GlobalPacketType  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_flat::FindItemIndex_1(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D430.json)
}

// ==== BACKFILL 0x0069D770  MapFile::Constructor  cls=MapFile  sig=csp  renamed_refs=0  residual=- ====
_DWORD * MapFile::Constructor(int a2, int a3)
{

  this->MapFile_field_0x04 = 0; /*0x69d77b*/
  this->MapFile_field_0x08 = a2; /*0x69d77e*/
  (this->MapFile_field_0x0C) = ((this->MapFile_field_0x0C) & ~0xFF) | ((1) & 0xFF); /*0x69d781*/
  (this->MapFile_field_0x0C) = ((this->MapFile_field_0x0C) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x69d785*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&g_ptr_7E8500); /*0x69d788*/
  if ( a2 ) /*0x69d78e*/
  {
    if ( a3 ) /*0x69d796*/
    {
      this->MapFile_field_0x04 = a3; /*0x69d798*/
      return this->__pad_0; /*0x69d79e*/
    }
    this->MapFile_field_0x04 = (unsigned int)(__2_YAPAXI_Z(4 * a2)); /*0x69d7ad*/
    (this->MapFile_field_0x0C) = ((this->MapFile_field_0x0C) & ~(0xFF << 8)) | (((1) & 0xFF) << 8); /*0x69d7b0*/
  }
  return this->__pad_0; /*0x69d79d*/

}

// ==== BACKFILL 0x0069D7C0  VectorClass::WstringConstructor  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * _::WstringConstructor(int a2, unsigned int *a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069D7C0.json)
}

// ==== BACKFILL 0x0069D870  ParseAndApplyAlliances_Parse  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_69D870::sub_69D870(int a2, int a3)
{

  this->Items = 0; /*0x69d87b*/
  this->Capacity = a2; /*0x69d87e*/
  this->IsInitialized = 1; /*0x69d881*/
  this->IsAllocated = 0; /*0x69d885*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x69d888) */
  if ( a2 ) /*0x69d88e*/
  {
    if ( a3 ) /*0x69d896*/
    {
      this->Items = (unsigned int)((void *)a3);
      return (unsigned int *)(&this->vtable1); /*0x69d89e*/
    }
    this->Items = (unsigned int)((void *)__2_YAPAXI_Z(4 * a2)); /*0x69d8ad*/
    this->IsAllocated = 1; /*0x69d8b0*/
  }
  return (unsigned int *)(&this->vtable1); /*0x69d89d*/

}

// ==== BACKFILL 0x0069DE70  ScenarioClass::FreeConfig  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::FreeConfig() {

  if ( this->nextScenario[23] ) /*0x69de76*/
  {
    if ( this->nextScenario[22] ) /*0x69de7b*/
    {
      __3_YAXPAX_Z((void *)this->nextScenario[22]); /*0x69de83*/
      this->nextScenario[22] = 0; /*0x69de8b*/
      this->nextScenario[23] = 0; /*0x69de8e*/
      this->nextScenario[5] = 0; /*0x69de91*/
      this->nextScenario[6] = 0; /*0x69de94*/
    }
  }

}

// ==== BACKFILL 0x0069DFC0  SidebarClass::startButtonFlash  cls=SidebarClass  sig=csp  renamed_refs=0  residual=- ====
int SidebarClass::startButtonFlash(int a1, int a2, int a3) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 5 errs): wrong-universe gap2 body; truth func_0x69DFC0.json */
}

// ==== BACKFILL 0x0069E010  SidebarClass::updateFlashTimer  cls=SidebarClass  sig=csp  renamed_refs=0  residual=- ====
int SidebarClass::updateFlashTimer() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 12 errs): wrong-universe gap2 body; truth func_0x69E010.json */
}

// ==== BACKFILL 0x0069E060  sub_69E060  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_69E060()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0069E060.json)
}

// ==== BACKFILL 0x0069E580  MixFileClass::LoadSubFile  cls=MixFileClass  sig=csp  renamed_refs=0  residual=- ====
void* MixFileClass::LoadSubFile() {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 23 errs): wrong-universe gap2 body; truth func_0x69E580.json */
}

// ==== BACKFILL 0x0069E740  MixFileClass::GetSubFile  cls=MixFileClass  sig=csp  renamed_refs=0  residual=- ====
int MixFileClass::GetSubFile(int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 10 errs): wrong-universe gap2 body; truth func_0x69E740.json */
}

// ==== BACKFILL 0x0069E7E0  Building::GetFoundationSize  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Building::GetFoundationSize(unsigned int * a1, unsigned int a2)
{

  int v2; // eax
  int16_t *v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // esi
  int v7; // edi

  v2 = MixFileClass::LoadSubFile(); /*0x69e7e0*/
  if ( v2 && a2 < *(int16_t *)(v2 + 6) && (v3 = (int16_t *)(v2 + 24 * a2 + 8)) != 0 ) /*0x69e7fe*/
  {
    v4 = *v3; /*0x69e800*/
    v5 = v3[1]; /*0x69e803*/
    v6 = v3[2]; /*0x69e809*/
    v7 = v3[3]; /*0x69e80e*/
    *a1 = v4; /*0x69e818*/
    a1[1] = v5; /*0x69e81a*/
    a1[2] = v6; /*0x69e81d*/
    a1[3] = v7; /*0x69e820*/
    return a1; /*0x69e812*/
  }
  else
  {
    *a1 = dword_B077A0; /*0x69e835*/
    a1[1] = dword_B077A4; /*0x69e83d*/
    a1[2] = dword_B077A8; /*0x69e846*/
    a1[3] = dword_B077AC; /*0x69e84f*/
    return a1; /*0x69e829*/
  }

}

// ==== BACKFILL 0x0069E930  MixFileClass::CacheNode_Dtor  cls=MixFileClass  sig=csp  renamed_refs=0  residual=- ====
void* MixFileClass::CacheNode_Dtor(int a2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 6 errs): wrong-universe gap2 body; truth func_0x69E930.json */
}

// ==== BACKFILL 0x0069E9B0  SHAPipe::Check  cls=SHAPipe  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_flat::Check(Pipe * aP1, int aP2, void *a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069E9B0.json)
}

// ==== BACKFILL 0x0069E9E0  SHA1::ComputeThunk  cls=SHA1  sig=csp  renamed_refs=0  residual=- ====
int SHA1::ComputeThunk(char *aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69E9E0)
}

// ==== BACKFILL 0x0069E9F0  sub_69E9F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_69E9F0(int a1, Straw * aP2)
{
    (void)a1; (void)aP2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069E9F0.json)
}

// ==== BACKFILL 0x0069ED20  JumpjetLocomotionClass::LoadLocomotionFromStream_2  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::LoadLocomotionFromStream_2(unsigned int * a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069ED20.json)
}

// ==== BACKFILL 0x0069EE90  ShipLocomotionClass::BeginMove  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
HRESULT ShipLocomotionClass::BeginMove(int * a1, int * pStm)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69EE90)
}

// ==== BACKFILL 0x0069EF10  ShipLocomotionClass::LoadFromStream  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
HRESULT ShipLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69EF10)
}

// ==== BACKFILL 0x0069EFF0  JumpjetLocomotionClass::StubReturnZero_12  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_12(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069EFF0.json)
}

// ==== BACKFILL 0x0069F040  JumpjetLocomotionClass::StubReturnZero_13  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_13(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069F040.json)
}

// ==== BACKFILL 0x0069F080  JumpjetLocomotionClass::CheckPiggybackState_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::CheckPiggybackState_0(int a1)
{

  return !(*(uint8_t (**)(char *))(*((unsigned int *)a1 - 5) + 16))((char *)a1 - 20) /*0x69f0b0*/
      && *(unsigned int *)a1->__pad_50
      && a1->unknown_4D
      && !*(unsigned char *)(*((unsigned int *)a1 - 3) + 1709);

}

// ==== BACKFILL 0x0069F1B0  sub_69F1B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
double sub_69F1B0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069F1B0.json)
}

// ==== BACKFILL 0x0069F210  sub_69F210  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_69F210(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069F210.json)
}

// ==== BACKFILL 0x0069F250  JumpjetLocomotionClass::InitMovementState_0  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::InitMovementState_0(unsigned int * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069F250.json)
}

// ==== BACKFILL 0x0069F290  JumpjetLocomotionClass::StubReturnTrue_5  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::StubReturnTrue_5(int a1)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069F290.json)
}

// ==== BACKFILL 0x0069F330  JumpjetLocomotionClass::StubReturnTrue_6  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::StubReturnTrue_6(InfantryClass * aP0)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069F330.json)
}

// ==== BACKFILL 0x0069F3A0  JumpjetLocomotionClass::GetCoordinate_1  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetCoordinate_1(unsigned int * a1, unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069F3A0.json)
}

// ==== BACKFILL 0x0069F3D0  JumpjetLocomotionClass::GetRenderCoordinate_1  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate_1(unsigned int * a1, unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069F3D0.json)
}

// ==== BACKFILL 0x0069F450  JumpjetLocomotionClass::ConvertCoordToCell_2  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::ConvertCoordToCell_2(int arg0, unsigned int * a1, unsigned int aP1_4, IUnknown * aP3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069F450.json)
}

// ==== BACKFILL 0x0069F510  JumpjetLocomotionClass::CheckWindowsErrorWrapper_1  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::CheckWindowsErrorWrapper_1(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069F510.json)
}

// ==== BACKFILL 0x0069F5E0  sub_69F5E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL sub_69F5E0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069F5E0.json)
}

// ==== BACKFILL 0x0069FB20  JumpjetLocomotionClass::ComputeAudio3DRotation_1  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
float * JumpjetLocomotionClass::ComputeAudio3DRotation_1(unsigned int * a1, float * a2, unsigned int * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069FB20.json)
}

// ==== BACKFILL 0x0069FBE0  JumpjetLocomotionClass::DispatchVirtualCall_6  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::DispatchVirtualCall_6(int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069FBE0.json)
}
