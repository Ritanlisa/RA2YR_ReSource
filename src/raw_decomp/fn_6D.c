// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x006D0260  TabClass::Stub  this=TabClass  sig=csp ====
// attributes: thunk
int __thiscall BlowStraw_29_::Stub(int *this)
{
  return ObjectClass::processDamage(this);
}


// ==== 0x006D0270  TabClass::CleanupResources  this=TabClass  sig=csp ====
void TacticalClass_CleanupResources()
{
  int v0; // edi
  void **v1; // esi

  ObjectClass::CleanupSidebarResources(); /*0x6d0272*/
  v0 = 0; /*0x6d0277*/
  v1 = (void **)&MEMORY[0xB0C148]; /*0x6d0279*/
  do /*0x6d02aa*/
  {
    if ( MEMORY[0xB0CBDC][v0] ) /*0x6d027e*/
    {
      __3_YAXPAX_Z(*v1); /*0x6d028b*/
      MEMORY[0xB0CBDC][v0] = 0; /*0x6d0293*/
    }
    *v1++ = 0; /*0x6d029a*/
    ++v0; /*0x6d02a3*/
  }
  while ( (int)v1 < (int)&MEMORY[0xB0C1AC] ); /*0x6d02aa*/
}


// ==== 0x006D02B0  TabClass::LoadButtonSHPs  this=TabClass  sig=csp ====
int __thiscall SidebarClass_LoadButtonSHPs(_DWORD *this)
{
  int v2; // esi
  int *v3; // edi
  void *v4; // eax
  bool v5; // cl
  int v6; // esi
  int result; // eax
  int v8; // edx
  bool v9; // [esp+Fh] [ebp-115h] BYREF
  int v10; // [esp+10h] [ebp-114h]
  int v11; // [esp+14h] [ebp-110h]
  int v12; // [esp+18h] [ebp-10Ch]
  int v13; // [esp+20h] [ebp-104h]
  char Buffer[256]; // [esp+24h] [ebp-100h] BYREF

  SidebarClass::LoadAssets(); /*0x6d02bb*/
  v9 = 0; /*0x6d02c0*/
  v2 = 0; /*0x6d02c5*/
  v3 = &MEMORY[0xB0C148]; /*0x6d02c7*/
  do /*0x6d0302*/
  {
    sprintf(Buffer, MEMORY[0x842828], v2); /*0x6d02d7*/
    v4 = LoadFileSHP(Buffer, &v9); /*0x6d02e7*/
    v5 = v9; /*0x6d02ec*/
    *v3 = (int)v4; /*0x6d02f0*/
    MEMORY[0xB0CBDC][v2] = v5; /*0x6d02f2*/
    ++v3; /*0x6d02f8*/
    ++v2; /*0x6d02fb*/
  }
  while ( (int)v3 < (int)&MEMORY[0xB0C1AC] ); /*0x6d0302*/
  MEMORY[0xB0CD38] = *(__int16 *)(MEMORY[0xB0C148] + 2); /*0x6d0314*/
  MEMORY[0xB0CB50] = *(__int16 *)(MEMORY[0xB0C148] + 4); /*0x6d031e*/
  v6 = *(_DWORD *)MEMORY[0xB0FC6C]; /*0x6d032a*/
  v11 = *(_DWORD *)MEMORY[0xB0FC68]; /*0x6d032e*/
  v12 = *((_DWORD *)MEMORY[0xB0FC68] + 1); /*0x6d0335*/
  result = *((_DWORD *)MEMORY[0xB0FC68] + 2); /*0x6d0339*/
  v13 = *((_DWORD *)MEMORY[0xB0FC68] + 3); /*0x6d033f*/
  MEMORY[0xB0CC2C] = v6 - result * MEMORY[0xB0CB54]; /*0x6d0354*/
  v10 = *((_DWORD *)MEMORY[0xA8B230] + 3374); /*0x6d0363*/
  v8 = *((_DWORD *)MEMORY[0xB0FC58] + 1); /*0x6d036d*/
  MEMORY[0xB0CD10] = result - MEMORY[0xB0CD38]; /*0x6d0370*/
  MEMORY[0xB0CC24] = v8; /*0x6d0377*/
  MEMORY[0xB0CC38] = result; /*0x6d037d*/
  this->q5520 = 0; /*0x6d0382*/
  return result; /*0x6d030f*/
}


// ==== 0x006D03A0  TabClass::InitButtons  this=TabClass  sig=csp ====
char __thiscall SidebarClass_InitButtons(void *this)
{
  char result; // al
  void *v3; // esi

  SidebarClass::Init(); /*0x6d03a7*/
  result = MEMORY[0xA8ED6B]; /*0x6d03ac*/
  if ( !MEMORY[0xA8ED6B] ) /*0x6d03b5*/
  {
    result = UI_Init_72F430(); /*0x6d03bb*/
    if ( result ) /*0x6d03c2*/
    {
      UI_Init_6D0FD0(this); /*0x6d03cc*/
      MEMORY[0xB0CCD4] = 240; /*0x6d03e1*/
      MEMORY[0xB0CD00] = MEMORY[0x87F6CC]; /*0x6d03eb*/
      MEMORY[0xB0CCDD] = 0; /*0x6d03f0*/
      MEMORY[0xB0CCE0] = 0; /*0x6d03f6*/
      MEMORY[0xB0CCD0] = 5; /*0x6d03fc*/
      v3 = MEMORY[0xB0FA90]; /*0x6d0404*/
      Rect_Point::Set(MEMORY[0xB0CCB0], *(_DWORD *)MEMORY[0xB0FC60], *((_DWORD *)MEMORY[0xB0FC60] + 1)); /*0x6d0422*/
      ShapeButton::SetShape((int)MEMORY[0xB0CCB0], (int)v3, 0, 0); /*0x6d042f*/
      MEMORY[0xB0CC64] = 241; /*0x6d043f*/
      MEMORY[0xB0CC90] = MEMORY[0x87F6CC]; /*0x6d0449*/
      MEMORY[0xB0CC6D] = 0; /*0x6d044e*/
      MEMORY[0xB0CC70] = 0; /*0x6d0454*/
      MEMORY[0xB0CC60] = 5; /*0x6d045a*/
      Rect_Point::Set(MEMORY[0xB0CC40], *(_DWORD *)MEMORY[0xB0FC64], *((_DWORD *)MEMORY[0xB0FC64] + 1)); /*0x6d047a*/
      return ShapeButton::SetShape((int)MEMORY[0xB0CC40], (int)v3, 0, 0); /*0x6d0487*/
    }
  }
  return result; /*0x6d048e*/
}


// ==== 0x006D04D0  ObjectClass::SidebarUpdateAll  this=TabClass  sig=csp ====
int __thiscall sub_6D04D0(void *this)
{
  int *v2; // esi
  int result; // eax

  v2 = (int *)&MEMORY[0xB0C1C0]; /*0x6d04d4*/
  do /*0x6d04ea*/
  {
    result = (*(int (__thiscall **)(void *, int *))(this->MovementZones)(this, v2); /*0x6d04de*/
    v2 += 24; /*0x6d04e1*/
  }
  while ( (int)v2 < (int)&MEMORY[0xB0CB20] ); /*0x6d04ea*/
  return result; /*0x6d04ec*/
}


// ==== 0x006D04F0  TabClass::BuildCommandBar  this=TabClass  sig=csp ====
unsigned __int8 __userpurge TacticalClass::BuildCommandBar@<al>(_BYTE *a1@<ecx>, int a2@<edi>, _DWORD *a0)
{
  unsigned __int8 v4; // bl
  char v5; // al
  ShapeButtonClass *v7; // edi
  char *v8; // edi
  int v9; // eax
  char *v10; // eax
  TabClass *v12; // [esp+0h] [ebp-24h]
  int v13; // [esp+4h] [ebp-20h]
  int v14; // [esp+8h] [ebp-1Ch] BYREF
  SidebarClass *v15; // [esp+Ch] [ebp-18h]
  int v16; // [esp+10h] [ebp-14h]
  int v17; // [esp+14h] [ebp-10h]
  int v18; // [esp+18h] [ebp-Ch]
  char *v19; // [esp+1Ch] [ebp-8h]
  char v20; // [esp+20h] [ebp-4h]

  v4 = ObjectClass::ToggleSidebarDisplay(a0, v12, v13, v14, v15, v16); /*0x6d0501*/
  if ( !v4 ) /*0x6d0505*/
    return v4; /*0x6d0505*/
  v5 = a1[21828]; /*0x6d0513*/
  if ( a1[21413] ) /*0x6d050b*/
  {
    if ( v5 ) /*0x6d0521*/
    {
      CommandClass::BuildBar(a1); /*0x6d0525*/
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 56))(a1, 2); /*0x6d0530*/
      return v4; /*0x6d053a*/
    }
    (*(void (__thiscall **)(_BYTE *, char *))(*(_DWORD *)a1 + 48))(a1, &stru_B05488.__pad_579C[8220]); /*0x6d0546*/
    if ( &stru_B05488 != (IUnknown *)-30648 ) /*0x6d0550*/
    {
      v15 = *(SidebarClass **)&stru_B05488.__pad_579C[8232]; /*0x6d0567*/
      v16 = *(_DWORD *)&stru_B05488.__pad_579C[8236]; /*0x6d0571*/
      v17 = *(_DWORD *)&stru_B05488.__pad_579C[8240]; /*0x6d057b*/
      v20 = 0; /*0x6d0586*/
      v14 = *(_DWORD *)&stru_B05488.__pad_579C[8256]; /*0x6d058b*/
      v19 = &stru_830620.__pad_579C[51836]; /*0x6d058f*/
      v18 = *(_DWORD *)&stru_B05488.__pad_579C[8244]; /*0x6d0597*/
      HashTable::Remove(*(int **)&stru_87C374.__pad_579C[22616], *(int *)&stru_B05488.__pad_579C[8256]); /*0x6d059b*/
      CommandClass::AddAction(*(int *)&stru_87C374.__pad_579C[22616], (ToolTipManager *)&v14); /*0x6d05ab*/
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 56))(a1, 2); /*0x6d05b6*/
      return v4; /*0x6d05c0*/
    }
    goto LABEL_18; /*0x6d0550*/
  }
  if ( !v5 ) /*0x6d05c5*/
  {
    (*(void (__thiscall **)(_BYTE *, char *))(*(_DWORD *)a1 + 52))(a1, &stru_B05488.__pad_579C[8220]); /*0x6d0656*/
    HashTable::Remove(*(int **)&stru_87C374.__pad_579C[22616], 241); /*0x6d0664*/
LABEL_18:
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 56))(a1, 2); /*0x6d0669*/
    return v4; /*0x6d0672*/
  }
  v7 = (ShapeButtonClass *)&stru_B05488.__pad_579C[5532]; /*0x6d05cc*/
  do /*0x6d05e2*/
  {
    (*(void (__thiscall **)(_BYTE *, ShapeButtonClass *))(*(_DWORD *)a1 + 52))(a1, v7); /*0x6d05d6*/
    v7 += 8; /*0x6d05d9*/
  }
  while ( (int)v7 < (int)&stru_B05488.__pad_579C[7932] ); /*0x6d05e2*/
  (*(void (__thiscall **)(_BYTE *, char *, int))(*(_DWORD *)a1 + 52))(a1, &stru_B05488.__pad_579C[8332], a2); /*0x6d05ed*/
  v8 = &stru_B05488.__pad_579C[8020]; /*0x6d05f0*/
  do /*0x6d0627*/
  {
    v9 = *(_DWORD *)v8; /*0x6d05f5*/
    if ( *(int *)v8 >= 0 && v9 < 25 ) /*0x6d05fe*/
    {
      v10 = &stru_B05488.__pad_579C[96 * v9 + 5532]; /*0x6d0606*/
      if ( v10 ) /*0x6d060d*/
        HashTable::Remove(*(int **)&stru_87C374.__pad_579C[22616], *((_DWORD *)v10 + 9)); /*0x6d0619*/
    }
    v8 += 4; /*0x6d061e*/
  }
  while ( (int)v8 < (int)&stru_B05488.__pad_579C[8120] ); /*0x6d0627*/
  HashTable::Remove(*(int **)&stru_87C374.__pad_579C[22616], 240); /*0x6d0634*/
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 56))(a1, 2); /*0x6d0640*/
  return v4; /*0x6d0535*/
}


// ==== 0x006D0680  TabClass::Seek  this=TabClass  sig=csp ====
int __thiscall BlowStraw_29_::Seek(int *this, TabClass *aP1, _DWORD *a2)
{
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  ScrollClass *v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  char *v12; // eax
  char *v13; // edi
  int i; // edi
  char *FontClassEntry; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax

  v4 = this->q5538; /*0x6d068b*/
  v5 = *(this + 5456); /*0x6d0691*/
  if ( v4 != -1 ) /*0x6d069a*/
  {
    if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v4 >= v5 ) /*0x6d06a6*/
      goto LABEL_6; /*0x6d06a6*/
    v5 -= *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v4; /*0x6d06a8*/
  }
  if ( v5 == 1 ) /*0x6d06ac*/
  {
    v6 = *this; /*0x6d06ae*/
    *((_BYTE *)this + 21829) = 1; /*0x6d06b4*/
    (*(void (__thiscall **)(int *, _DWORD))(v6 + 56))(this, 0); /*0x6d06ba*/
  }
LABEL_6:
  v7 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[11460] + 4); /*0x6d06bd*/
  if ( *a2 >= **(_DWORD **)&MEMORY[0xB077F8].__pad_579C[11460] /*0x6d06dd*/
    && *a2 < **(_DWORD **)&MEMORY[0xB077F8].__pad_579C[11460] + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8540] )
  {
    v8 = (ScrollClass *)a2[1]; /*0x6d06df*/
    if ( (int)v8 >= v7 && (int)v8 < v7 + 30 ) /*0x6d06f2*/
      Mouse::SetCursor((int)&MEMORY[0x87F7E8], 0, 0); /*0x6d06fd*/
  }
  v9 = aP1->field_0; /*0x6d0706*/
  if ( aP1->field_0 < 32982 || v9 >= 33007 ) /*0x6d0718*/
  {
    if ( v9 == 33008 ) /*0x6d0842*/
    {
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 408), 0x2000, 1.0, 0); /*0x6d0860*/
      if ( *((_BYTE *)this + 21828) ) /*0x6d0865*/
      {
        SidebarUpdateAll(this); /*0x6d0875*/
        (*(void (__thiscall **)(int *, char *))(*this + 52))(this, &MEMORY[0xB077F8].__pad_5498[32]); /*0x6d0883*/
        for ( i = 0; i < 25; ++i ) /*0x6d0886*/
        {
          FontClassEntry = GetFontClassEntry(i); /*0x6d088a*/
          if ( FontClassEntry ) /*0x6d0891*/
            HashTable::Remove(*(int **)&MEMORY[0x87F8E4].__pad_5568[9500], *((_DWORD *)FontClassEntry + 9)); /*0x6d089d*/
        }
        HashTable::Remove(*(int **)&MEMORY[0x87F8E4].__pad_5568[9500], 240); /*0x6d08b3*/
        v16 = *this; /*0x6d08b8*/
        *((_BYTE *)this + 21828) = 0; /*0x6d08c1*/
        (*(void (__thiscall **)(int *, char *))(v16 + 48))(this, &MEMORY[0xB077F8].__pad_53E0[104]); /*0x6d08c8*/
        PushCommandClass::Execute(&MEMORY[0xB077F8].__pad_53E0[104], (int)&stru_830620.__pad_579C[51836]); /*0x6d08d5*/
        v17 = *this; /*0x6d08da*/
        *((_BYTE *)this + 21829) = 1; /*0x6d08e0*/
        (*(void (__thiscall **)(int *, _DWORD))(v17 + 56))(this, 0); /*0x6d08e6*/
      }
    }
    else if ( v9 == 33009 ) /*0x6d08f3*/
    {
      if ( !MEMORY[0xA8B538] ) /*0x6d08fc*/
      {
        PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 404), 0x2000, 1.0, 0); /*0x6d091a*/
        if ( !*((_BYTE *)this + 21828) ) /*0x6d091f*/
        {
          (*(void (__thiscall **)(int *, char *))(*this + 52))(this, &MEMORY[0xB077F8].__pad_53E0[104]); /*0x6d0932*/
          HashTable::Remove(*(int **)&MEMORY[0x87F8E4].__pad_5568[9500], 241); /*0x6d0940*/
          *((_BYTE *)this + 21828) = 1; /*0x6d0947*/
          CommandClass::BuildBar(this); /*0x6d094d*/
          v18 = *this; /*0x6d0952*/
          *((_BYTE *)this + 21829) = 1; /*0x6d0958*/
          (*(void (__thiscall **)(int *, _DWORD))(v18 + 56))(this, 0); /*0x6d095e*/
        }
      }
    }
    else if ( v9 >= 49366 && v9 < 49391 ) /*0x6d096f*/
    {
      BYTE1(v9) &= 0x3Fu; /*0x6d0977*/
      v19 = v9 - 214; /*0x6d097a*/
      if ( v19 >= *(int *)&MEMORY[0xB077F8].__pad_53E0[72] && v19 <= *(int *)&MEMORY[0xB077F8].__pad_5498[152] ) /*0x6d0989*/
        SidebarClearReferences((char *)(v19 - *(_DWORD *)&MEMORY[0xB077F8].__pad_53E0[72] + 1)); /*0x6d0990*/
    }
  }
  else
  {
    BYTE1(v9) &= ~0x80u; /*0x6d0724*/
    v10 = v9 - 214; /*0x6d0727*/
    if ( v10 == *(_DWORD *)&MEMORY[0xB077F8].__pad_5498[148] ) /*0x6d072e*/
    {
      BlowStraw_29_Get(); /*0x6d0730*/
    }
    else if ( v10 == *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[16020] ) /*0x6d0740*/
    {
      UI_Create_731A30(); /*0x6d0742*/
    }
    else if ( v10 == *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[13584] ) /*0x6d0752*/
    {
      UI_Create_730F30(); /*0x6d0754*/
    }
    else if ( v10 == *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[15992] ) /*0x6d0764*/
    {
      ProcessSelectionExperience(); /*0x6d0766*/
    }
    else if ( v10 == *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[16064] ) /*0x6d0776*/
    {
      GetFactoryData(); /*0x6d0778*/
    }
    else if ( v10 == *(_DWORD *)&MEMORY[0xB077F8].__pad_53E0[68] ) /*0x6d078a*/
    {
      v11 = *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[4 * *(_DWORD *)&MEMORY[0xB077F8].__pad_53E0[68] + 16080]; /*0x6d078c*/
      if ( v11 > 0x18 ) /*0x6d0795*/
        v12 = 0; /*0x6d07a9*/
      else
        v12 = &MEMORY[0xB077F8].__pad_14B0[96 * v11 + 13592]; /*0x6d07a2*/
      if ( v12[45] ) /*0x6d07ab*/
        UI_Create_731A50(1); /*0x6d07b4*/
      else
        UI_Create_731A70(1); /*0x6d07be*/
    }
    else if ( v10 == *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[16068] ) /*0x6d07ce*/
    {
      UI_Create_730EA0(); /*0x6d07d0*/
    }
    else if ( v10 < *(int *)&MEMORY[0xB077F8].__pad_53E0[72] || v10 > *(int *)&MEMORY[0xB077F8].__pad_5498[152] ) /*0x6d07ea*/
    {
      if ( v10 == *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[16016] ) /*0x6d082d*/
        SelectAllOfType(); /*0x6d0833*/
    }
    else
    {
      v13 = (char *)(v10 - *(_DWORD *)&MEMORY[0xB077F8].__pad_53E0[72] + 1); /*0x6d07ef*/
      if ( SidebarCountAvailableUnits(v13) ) /*0x6d07f3*/
      {
        if ( SidebarHasAvailableUnit(v13) ) /*0x6d0808*/
          TacticalClass::ResetView(v13); /*0x6d0813*/
        else
          TacticalClass::SetObserverView(v13); /*0x6d081d*/
      }
      else
      {
        CreateTeamCommand::performAction_246(v13); /*0x6d07fe*/
      }
    }
  }
  CountdownTimer::UpdateDisplay(this + 5447, 0); /*0x6d099d*/
  return SidebarClass::UpdateStrips((char *)this, aP1, a2); /*0x6d09af*/
}


// ==== 0x006D09C0  PushCommandClass::Execute  this=GadgetClass  sig=csp ====
char __fastcall CommandClass_Push(_DWORD *a1, int a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  char result; // al
  _DWORD v6[6]; // [esp+0h] [ebp-1Ch] BYREF
  char v7; // [esp+18h] [ebp-4h]

  if ( a1 ) /*0x6d09c5*/
  {
    v2 = a1[9]; /*0x6d09c7*/
    v6[5] = a2; /*0x6d09ca*/
    v6[1] = a1[3]; /*0x6d09d2*/
    v6[2] = a1[4]; /*0x6d09d9*/
    v3 = a1[5]; /*0x6d09dd*/
    v4 = a1[6]; /*0x6d09e0*/
    v7 = 0; /*0x6d09e3*/
    v6[4] = v4; /*0x6d09e8*/
    v6[0] = v2; /*0x6d09f2*/
    v6[3] = v3; /*0x6d09f6*/
    HashTable::Remove((int *)MEMORY[0x887368], v2); /*0x6d09fa*/
    return CommandClass::AddAction(MEMORY[0x887368], (int)v6); /*0x6d0a0a*/
  }
  return result; /*0x6d0a0f*/
}


// ==== 0x006D0A20  TabClass::DrawTabs  this=TabClass  sig=csp ====
int __thiscall SidebarClass_DrawTabs(_BYTE *this, char a2)
{
  char v3; // bl
  int *v4; // ecx
  int v5; // eax
  char *v6; // eax
  int *v7; // eax
  int v8; // edx
  int v9; // esi
  int v10; // ecx
  int v11; // eax
  int *v12; // ecx
  void *v13; // esi
  int *v14; // eax
  int *v15; // eax
  int v16; // edi
  _BYTE *v17; // esi
  int v18; // esi
  int *v19; // ebx
  int v20; // eax
  char *v21; // esi
  _DWORD *v22; // ecx
  int v23; // eax
  int v24; // ecx
  _DWORD *v25; // eax
  int v26; // ecx
  int v29; // [esp+14h] [ebp-38h] BYREF
  int i; // [esp+18h] [ebp-34h]
  int v31; // [esp+1Ch] [ebp-30h] BYREF
  int v32; // [esp+20h] [ebp-2Ch]
  int v33; // [esp+24h] [ebp-28h]
  int v34; // [esp+28h] [ebp-24h]
  int v35[2]; // [esp+2Ch] [ebp-20h] BYREF
  int v36; // [esp+34h] [ebp-18h]
  int v37; // [esp+38h] [ebp-14h]
  char v38[16]; // [esp+3Ch] [ebp-10h] BYREF

  if ( (MEMORY[0xB0CB58] & 1) == 0 ) /*0x6d0a34*/
  {
    MEMORY[0xB0CB58] |= 1u; /*0x6d0a42*/
    MEMORY[0xB0CBF8] = 0; /*0x6d0a48*/
    MEMORY[0xB0CBFC] = 0; /*0x6d0a4e*/
    atexit(nullsub_236); /*0x6d0a54*/
  }
  if ( !a2 && !*(this + 21829) ) /*0x6d0a6c*/
  {
    v3 = 0; /*0x6d0a7a*/
    v4 = MEMORY[0xB0CB78]; /*0x6d0a7c*/
    while ( 1 ) /*0x6d0a81*/
    {
      v5 = *v4; /*0x6d0a81*/
      if ( *v4 >= 0 && v5 < 25 ) /*0x6d0a8a*/
      {
        v6 = (char *)&MEMORY[0xB0C1C0] + 96 * v5; /*0x6d0a92*/
        if ( v6 ) /*0x6d0a99*/
        {
          if ( v6[84] ) /*0x6d0a9b*/
            break; /*0x6d0a9b*/
        }
      }
      if ( (int)++v4 >= (int)MEMORY[0xB0CBDC] ) /*0x6d0aab*/
      {
        v7 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)MEMORY[0x887640] + 52))(MEMORY[0x887640], &v29); /*0x6d0aba*/
        v8 = *v7; /*0x6d0abd*/
        v9 = v7[1]; /*0x6d0abf*/
        if ( *v7 < *(_DWORD *)MEMORY[0xB0FC58] /*0x6d0ae4*/
          || v8 >= *(_DWORD *)MEMORY[0xB0FC58] + *((_DWORD *)MEMORY[0xB0FC58] + 2)
          || (v10 = *((_DWORD *)MEMORY[0xB0FC58] + 1), v9 < v10)
          || v9 >= v10 + *((_DWORD *)MEMORY[0xB0FC58] + 3) )
        {
          if ( MEMORY[0xB0CD40] ) /*0x6d0b13*/
            v3 = 1; /*0x6d0b15*/
          MEMORY[0xB0CD40] = 0; /*0x6d0b17*/
        }
        else
        {
          MEMORY[0xB0CD40] = 1; /*0x6d0aeb*/
          if ( v8 != MEMORY[0xB0CBF8] || v9 != MEMORY[0xB0CBFC] ) /*0x6d0afc*/
            v3 = 1; /*0x6d0afe*/
        }
        MEMORY[0xB0CBF8] = v8; /*0x6d0b20*/
        MEMORY[0xB0CBFC] = v9; /*0x6d0b26*/
        if ( v3 ) /*0x6d0b2c*/
        {
          MEMORY[0xB0CD44] = 0; /*0x6d0b2e*/
        }
        else
        {
          v11 = 0; /*0x6d0b3c*/
          if ( MEMORY[0xB0CD44] <= 0 ) /*0x6d0b40*/
          {
LABEL_28:
            v3 = 1; /*0x6d0b59*/
          }
          else
          {
            v12 = &MEMORY[0xB0CC00]; /*0x6d0b48*/
            while ( *v12 != MEMORY[0x887314] ) /*0x6d0b4f*/
            {
              ++v11; /*0x6d0b51*/
              ++v12; /*0x6d0b52*/
              if ( v11 >= MEMORY[0xB0CD44] ) /*0x6d0b57*/
                goto LABEL_28; /*0x6d0b57*/
            }
          }
        }
        goto LABEL_29; /*0x6d0b34*/
      }
    }
  }
  v3 = 1; /*0x6d0b02*/
  MEMORY[0xB0CD44] = 0; /*0x6d0b04*/
LABEL_29:
  if ( !MEMORY[0xA8ED6B] ) /*0x6d0b62*/
  {
    v13 = MEMORY[0xB0FB08]; /*0x6d0b75*/
    v29 = 0; /*0x6d0b84*/
    i = 0; /*0x6d0b88*/
    v14 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)MEMORY[0x887300] + 120))(MEMORY[0x887300], v35); /*0x6d0b95*/
    DrawToSurfaceSHP(MEMORY[0x887300], MEMORY[0x87F6CC], (int)v13, 0, &v29, v14, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6d0bac*/
    MEMORY[0xB0B518] = 1; /*0x6d0bb7*/
    DrawSidebarCreditsTimer(1); /*0x6d0bc4*/
    if ( v3 ) /*0x6d0bcb*/
    {
      v15 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)MEMORY[0x887314] + 120))(MEMORY[0x887314], v38); /*0x6d0bde*/
      v31 = *v15; /*0x6d0be3*/
      v32 = v15[1]; /*0x6d0bea*/
      v33 = v15[2]; /*0x6d0bf1*/
      v34 = v15[3]; /*0x6d0bfd*/
      v29 = 0; /*0x6d0c01*/
      i = 0; /*0x6d0c05*/
      v29 = *(_DWORD *)MEMORY[0xB0FC58]; /*0x6d0c0b*/
      i = *((_DWORD *)MEMORY[0xB0FC58] + 1); /*0x6d0c12*/
      v35[0] = v31; /*0x6d0c16*/
      v35[1] = v32; /*0x6d0c1a*/
      v36 = v33; /*0x6d0c1e*/
      v37 = v34; /*0x6d0c22*/
      v36 = *((_DWORD *)MEMORY[0xB0FC58] + 2); /*0x6d0c29*/
      v16 = MEMORY[0x887314]; /*0x6d0c3b*/
      DrawToSurfaceSHP( /*0x6d0c5f*/
        MEMORY[0x887314],
        MEMORY[0x87F6CC],
        (int)MEMORY[0xB0FA3C],
        0,
        &v29,
        v35,
        0,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v17 = this; /*0x6d0c64*/
      if ( *(this + 21828) ) /*0x6d0c68*/
      {
        v29 = *(_DWORD *)MEMORY[0xB0FC60]; /*0x6d0c79*/
        i = *((_DWORD *)MEMORY[0xB0FC60] + 1); /*0x6d0c80*/
      }
      else
      {
        v29 = *(_DWORD *)MEMORY[0xB0FC64]; /*0x6d0c8d*/
        i = *((_DWORD *)MEMORY[0xB0FC64] + 1); /*0x6d0c94*/
      }
      DrawToSurfaceSHP(v16, MEMORY[0x87F6CC], (int)MEMORY[0xB0FA90], 0, &v29, &v31, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6d0cc4*/
      if ( *(this + 21828) ) /*0x6d0cc9*/
      {
        v18 = 0; /*0x6d0ce2*/
        v29 = *(_DWORD *)MEMORY[0xB0FC68]; /*0x6d0ce6*/
        for ( i = *((_DWORD *)MEMORY[0xB0FC58] + 1); v18 < MEMORY[0xB0F9E4]; v29 += *((_DWORD *)MEMORY[0xB0FC68] + 2) ) /*0x6d0cf8*/
        {
          DrawToSurfaceSHP(v16, MEMORY[0x87F6CC], (int)MEMORY[0xB0FAA8], 0, &v29, &v31, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6d0d2b*/
          ++v18; /*0x6d0d3f*/
        }
        v19 = MEMORY[0xB0CB78]; /*0x6d0d4f*/
        do /*0x6d0d8a*/
        {
          v20 = *v19; /*0x6d0d54*/
          if ( *v19 >= 0 && v20 < 25 ) /*0x6d0d5d*/
          {
            v21 = (char *)&MEMORY[0xB0C1C0] + 96 * v20; /*0x6d0d65*/
            if ( v21 ) /*0x6d0d6d*/
            {
              if ( *((_DWORD *)v21 + 22) ) /*0x6d0d6f*/
              {
                (*(void (__thiscall **)(char *, int))(*(_DWORD *)v21 + 108))(v21, 1); /*0x6d0d7a*/
                v21[84] = 0; /*0x6d0d7d*/
              }
            }
          }
          ++v19; /*0x6d0d81*/
        }
        while ( (int)v19 < (int)MEMORY[0xB0CBDC] ); /*0x6d0d8a*/
        v17 = this; /*0x6d0d8c*/
      }
      v29 = *(_DWORD *)MEMORY[0xB0FC6C]; /*0x6d0db2*/
      DrawToSurfaceSHP(v16, MEMORY[0x87F6CC], (int)MEMORY[0xB0FABC], 0, &v29, &v31, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6d0dc8*/
      v22 = MEMORY[0xB0CCB0]; /*0x6d0dd7*/
      if ( !v17[21828] ) /*0x6d0dcd*/
        v22 = MEMORY[0xB0CC40]; /*0x6d0dde*/
      ShapeButton::Draw((int)v22, 1); /*0x6d0de3*/
      v17[21830] = 1; /*0x6d0de8*/
      v17[21829] = 0; /*0x6d0def*/
      v23 = MEMORY[0xB0CD44]; /*0x6d0df6*/
      if ( (unsigned int)MEMORY[0xB0CD44] < 4 ) /*0x6d0dfe*/
        v23 = ++MEMORY[0xB0CD44]; /*0x6d0e00*/
      v24 = v23 - 2; /*0x6d0e06*/
      if ( v23 - 2 >= 0 ) /*0x6d0e0b*/
      {
        v25 = (_DWORD *)(4 * v24 + 11586564); /*0x6d0e0d*/
        v26 = v24 + 1; /*0x6d0e14*/
        do /*0x6d0e1e*/
        {
          *v25 = *(v25 - 1); /*0x6d0e18*/
          --v25; /*0x6d0e1a*/
          --v26; /*0x6d0e1d*/
        }
        while ( v26 ); /*0x6d0e1e*/
      }
      MEMORY[0xB0CC00] = v16; /*0x6d0e20*/
    }
    else
    {
      *(this + 21830) = 0; /*0x6d0e28*/
    }
  }
  return SidebarClass::Redraw(a2); /*0x6d0e3d*/
}


// ==== 0x006D0E50  nullsub_236  this=-  sig=ida-proto ====
void __cdecl nullsub_236()
{
  ; /*0x6d0e50*/
}


// ==== 0x006D0E60  ObjectClass::UI_Draw_6D0E60  this=ObjectClass  sig=csp ====
void sub_6D0E60()
{
  void *v0; // esi
  int *v1; // eax
  int v2[2]; // [esp+4h] [ebp-18h] BYREF
  _BYTE v3[16]; // [esp+Ch] [ebp-10h] BYREF

  v0 = MEMORY[0xB0FB08]; /*0x6d0e73*/
  v2[0] = 0; /*0x6d0e7b*/
  v2[1] = 0; /*0x6d0e7f*/
  v1 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)MEMORY[0x887300] + 120))(MEMORY[0x887300], v3); /*0x6d0e91*/
  DrawToSurfaceSHP(MEMORY[0x887300], MEMORY[0x87F6CC], (int)v0, 0, v2, v1, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6d0ea9*/
  MEMORY[0xB0B518] = 1; /*0x6d0eae*/
}


// ==== 0x006D0EC0  HouseClass::updateFactoryQueue  this=int  sig=csp ====
wchar_t *__thiscall sub_6D0EC0(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // eax
  wchar_t *result; // eax
  int v4; // [esp+8h] [ebp-8h]

  v1 = this; /*0x6d0ec4*/
  v2 = *this; /*0x6d0ec8*/
  *((_BYTE *)this + 21829) = 1; /*0x6d0eca*/
  (*(void (__stdcall **)(_DWORD))(v2 + 56))(0); /*0x6d0ed1*/
  result = MEMORY[0xA8ED84]; /*0x6d0ed4*/
  v1 += 5454; /*0x6d0edd*/
  *v1 = MEMORY[0xA8ED84]; /*0x6d0ee8*/
  v1[1] = v4; /*0x6d0eea*/
  v1[2] = 7; /*0x6d0eed*/
  return result; /*0x6d0ef0*/
}


// ==== 0x006D0F00  ObjectClass::PreDraw  this=VOID_PTR  sig=csp ====
int __thiscall ObjectClass_PreDraw(_BYTE *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this; /*0x6d0f00*/
  *(this + 21829) = 1; /*0x6d0f04*/
  return (*(int (__stdcall **)(_DWORD))(v1 + 56))(0); /*0x6d0f0e*/
}


// ==== 0x006D0F10  sub_6D0F10  this=-  sig=ida-proto ====
void *sub_6D0F10()
{
  int v0; // esi
  int *v1; // edi
  void *result; // eax
  bool v3; // cl
  bool v4; // [esp+Bh] [ebp-101h] BYREF
  char Buffer[256]; // [esp+Ch] [ebp-100h] BYREF

  v4 = 0; /*0x6d0f18*/
  v0 = 0; /*0x6d0f1d*/
  v1 = MEMORY[0xB0C148]; /*0x6d0f1f*/
  do /*0x6d0f5a*/
  {
    sprintf(Buffer, MEMORY[0x842828], v0); /*0x6d0f2f*/
    result = LoadFileSHP(Buffer, &v4); /*0x6d0f3f*/
    v3 = v4; /*0x6d0f44*/
    *v1 = (int)result; /*0x6d0f48*/
    MEMORY[0xB0CBDC][v0] = v3; /*0x6d0f4a*/
    ++v1; /*0x6d0f50*/
    ++v0; /*0x6d0f53*/
  }
  while ( (int)v1 < (int)&MEMORY[0xB0C1AC] ); /*0x6d0f5a*/
  return result; /*0x6d0f5c*/
}


// ==== 0x006D0FB0  sub_6D0FB0  this=-  sig=ida-proto ====
int __fastcall sub_6D0FB0(int a1, int a2, int a3)
{
  *(_DWORD *)(a1 + 36) = a2; /*0x6d0fb0*/
  *(_DWORD *)(a1 + 80) = MEMORY[0x87F6CC]; /*0x6d0fbc*/
  *(_DWORD *)(a1 + 32) = a3; /*0x6d0fc1*/
  *(_BYTE *)(a1 + 45) = 0; /*0x6d0fc4*/
  *(_DWORD *)(a1 + 48) = 0; /*0x6d0fc7*/
  return 0; /*0x6d0fca*/
}


// ==== 0x006D0FD0  ObjectClass::UI_Init_6D0FD0  this=TabClass  sig=csp ====
int sub_6D0FD0()
{
  int *v0; // esi
  int v1; // edi
  int v2; // ebp
  unsigned int v3; // eax
  char *v4; // esi
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  char *v8; // eax
  int v9; // ecx
  int result; // eax
  int *v11; // edx
  int v12; // eax
  char *v13; // eax

  v0 = (int *)&MEMORY[0xB0C1C0]; /*0x6d0fd4*/
  do /*0x6d0fef*/
  {
    ShapeButton::SetShape((int)v0, 0, 0, 0); /*0x6d0fe1*/
    v0 += 24; /*0x6d0fe6*/
  }
  while ( (int)v0 < (int)&MEMORY[0xB0CB20] ); /*0x6d0fef*/
  v1 = 0; /*0x6d0ffc*/
  v2 = *((_DWORD *)MEMORY[0xB0FC64] + 2) + *(_DWORD *)MEMORY[0xB0FC64]; /*0x6d100b*/
  do /*0x6d10a6*/
  {
    v3 = MEMORY[0xB0CB78][v1]; /*0x6d1012*/
    if ( v3 <= 0x18 ) /*0x6d101b*/
    {
      v4 = (char *)&MEMORY[0xB0C1C0] + 96 * v3; /*0x6d102c*/
      if ( v4 ) /*0x6d1034*/
      {
        v5 = *(_DWORD *)MEMORY[0xB0FC68] + MEMORY[0xB0CC38] * v3; /*0x6d1045*/
        v6 = MEMORY[0xB0CC24]; /*0x6d1047*/
        if ( v5 + *((_DWORD *)MEMORY[0xB0FC68] + 2) <= v2 ) /*0x6d1062*/
        {
          *((_DWORD *)v4 + 9) = v1 + 214; /*0x6d106c*/
          *((_DWORD *)v4 + 20) = MEMORY[0x87F6CC]; /*0x6d1075*/
          v4[45] = 0; /*0x6d1078*/
          *((_DWORD *)v4 + 12) = 0; /*0x6d107b*/
          *((_DWORD *)v4 + 8) = 5; /*0x6d107e*/
          (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)v4 + 100))(v4, v5, v6); /*0x6d108b*/
          (*(void (__thiscall **)(char *, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 136))(v4, MEMORY[0xB0C148][v1], 0, 0); /*0x6d109c*/
        }
      }
    }
    ++v1; /*0x6d10a2*/
  }
  while ( v1 < 25 ); /*0x6d10a6*/
  v7 = MEMORY[0xB0CB78][MEMORY[0xB0CC1C]]; /*0x6d10b5*/
  if ( v7 <= 0x18 ) /*0x6d10be*/
  {
    v8 = (char *)&MEMORY[0xB0C1C0] + 96 * v7; /*0x6d10cb*/
    if ( v8 ) /*0x6d10d2*/
    {
      *((_DWORD *)v8 + 12) = 1; /*0x6d10d9*/
      v8[64] = 1; /*0x6d10dc*/
    }
  }
  v9 = MEMORY[0xB0CC20]; /*0x6d10df*/
  result = MEMORY[0xB0CD28]; /*0x6d10e5*/
  if ( MEMORY[0xB0CC20] <= MEMORY[0xB0CD28] ) /*0x6d10ec*/
  {
    v11 = (int *)(4 * MEMORY[0xB0CC20] + 11586424); /*0x6d10ee*/
    do /*0x6d1122*/
    {
      v12 = *v11; /*0x6d10fa*/
      if ( *v11 >= 0 && v12 < 25 ) /*0x6d1103*/
      {
        v13 = (char *)&MEMORY[0xB0C1C0] + 96 * v12; /*0x6d110b*/
        if ( v13 ) /*0x6d1112*/
          *((_DWORD *)v13 + 8) = 85; /*0x6d1114*/
      }
      result = MEMORY[0xB0CD28]; /*0x6d1117*/
      ++v9; /*0x6d111c*/
      ++v11; /*0x6d111d*/
    }
    while ( v9 <= MEMORY[0xB0CD28] ); /*0x6d1122*/
  }
  return result; /*0x6d1124*/
}


// ==== 0x006D1130  sub_6D1130  this=-  sig=ida-proto ====
int sub_6D1130()
{
  void *v0; // esi

  MEMORY[0xB0CCD4] = 240; /*0x6d1149*/
  MEMORY[0xB0CD00] = MEMORY[0x87F6CC]; /*0x6d1153*/
  MEMORY[0xB0CCDD] = 0; /*0x6d1158*/
  MEMORY[0xB0CCE0] = 0; /*0x6d115e*/
  MEMORY[0xB0CCD0] = 5; /*0x6d1164*/
  v0 = MEMORY[0xB0FA90]; /*0x6d116c*/
  Rect_Point::Set(MEMORY[0xB0CCB0], *(_DWORD *)MEMORY[0xB0FC60], *((_DWORD *)MEMORY[0xB0FC60] + 1)); /*0x6d118a*/
  ShapeButton::SetShape((int)MEMORY[0xB0CCB0], (int)v0, 0, 0); /*0x6d1197*/
  MEMORY[0xB0CC64] = 241; /*0x6d11a7*/
  MEMORY[0xB0CC90] = MEMORY[0x87F6CC]; /*0x6d11b1*/
  MEMORY[0xB0CC6D] = 0; /*0x6d11b6*/
  MEMORY[0xB0CC70] = 0; /*0x6d11bc*/
  MEMORY[0xB0CC60] = 5; /*0x6d11c2*/
  Rect_Point::Set(MEMORY[0xB0CC40], *(_DWORD *)MEMORY[0xB0FC64], *((_DWORD *)MEMORY[0xB0FC64] + 1)); /*0x6d11e2*/
  return ShapeButton::SetShape((int)MEMORY[0xB0CC40], (int)v0, 0, 0); /*0x6d11f4*/
}


// ==== 0x006D1200  CommandClass::BuildBar  this=TabClass  sig=csp ====
char __thiscall CommandClass_BuildBar(void *this)
{
  int *v2; // esi
  unsigned int v3; // eax
  _DWORD *v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // eax
  _DWORD *v10; // esi
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // eax
  _DWORD *v16; // esi
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  unsigned int v21; // eax
  _DWORD *v22; // esi
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  unsigned int v27; // eax
  _DWORD *v28; // ecx
  unsigned int v29; // eax
  _DWORD *v30; // ecx
  char *Entry; // eax
  char *v32; // eax
  char *v33; // eax
  char *v34; // eax
  char *v35; // eax
  int v37; // [esp+8h] [ebp-1Ch] BYREF
  int v38; // [esp+Ch] [ebp-18h]
  int v39; // [esp+10h] [ebp-14h]
  int v40; // [esp+14h] [ebp-10h]
  int v41; // [esp+18h] [ebp-Ch]
  char *v42; // [esp+1Ch] [ebp-8h]

  v2 = (int *)&MEMORY[0xB0C1C0]; /*0x6d1207*/
  do /*0x6d1224*/
  {
    (*(void (__thiscall **)(int *))(*v2 + 32))(v2); /*0x6d1210*/
    (*(void (__thiscall **)(void *, int *))(this->q030)(this, v2); /*0x6d1218*/
    v2 += 24; /*0x6d121b*/
  }
  while ( (int)v2 < (int)&MEMORY[0xB0CB20] ); /*0x6d1224*/
  (*(void (__thiscall **)(void *, _DWORD *))(this->q030)(this, MEMORY[0xB0CCB0]); /*0x6d122f*/
  v3 = MEMORY[0xB0CB78][MEMORY[0xB0CD24]]; /*0x6d1238*/
  if ( v3 <= 0x18 ) /*0x6d1241*/
  {
    v4 = (_DWORD *)((char *)&MEMORY[0xB0C1C0] + 96 * v3); /*0x6d124e*/
    if ( v4 ) /*0x6d1256*/
    {
      Struct::Zero25(&v37); /*0x6d125c*/
      v5 = v4[3]; /*0x6d1264*/
      v6 = v4[9]; /*0x6d1267*/
      v39 = v4[4]; /*0x6d126a*/
      v7 = v4[6]; /*0x6d126e*/
      v38 = v5; /*0x6d1271*/
      v8 = v4[5]; /*0x6d1275*/
      v41 = v7; /*0x6d1278*/
      v37 = v6; /*0x6d1283*/
      v42 = MEMORY[0x8428DC]; /*0x6d1287*/
      v40 = v8; /*0x6d128f*/
      HashTable::Remove((int *)MEMORY[0x887368], v6); /*0x6d1293*/
      CommandClass::AddAction(MEMORY[0x887368], (int)&v37); /*0x6d12a3*/
    }
  }
  v9 = MEMORY[0xB0CB78][MEMORY[0xB0CB3C]]; /*0x6d12ad*/
  if ( v9 <= 0x18 ) /*0x6d12b6*/
  {
    v10 = (_DWORD *)((char *)&MEMORY[0xB0C1C0] + 96 * v9); /*0x6d12c3*/
    if ( v10 ) /*0x6d12cb*/
    {
      Struct::Zero25(&v37); /*0x6d12d1*/
      v11 = v10[4]; /*0x6d12d9*/
      v12 = v10[9]; /*0x6d12dc*/
      v38 = v10[3]; /*0x6d12df*/
      v13 = v10[5]; /*0x6d12e3*/
      v39 = v11; /*0x6d12e6*/
      v14 = v10[6]; /*0x6d12ea*/
      v40 = v13; /*0x6d12ed*/
      v37 = v12; /*0x6d12f8*/
      v42 = MEMORY[0x8428D0]; /*0x6d12fc*/
      v41 = v14; /*0x6d1304*/
      HashTable::Remove((int *)MEMORY[0x887368], v12); /*0x6d1308*/
      CommandClass::AddAction(MEMORY[0x887368], (int)&v37); /*0x6d1318*/
    }
  }
  v15 = MEMORY[0xB0CB78][MEMORY[0xB0C1B8]]; /*0x6d1323*/
  if ( v15 <= 0x18 ) /*0x6d132c*/
  {
    v16 = (_DWORD *)((char *)&MEMORY[0xB0C1C0] + 96 * v15); /*0x6d1339*/
    if ( v16 ) /*0x6d1341*/
    {
      Struct::Zero25(&v37); /*0x6d1347*/
      v17 = v16[3]; /*0x6d134f*/
      v18 = v16[9]; /*0x6d1352*/
      v39 = v16[4]; /*0x6d1355*/
      v19 = v16[6]; /*0x6d1359*/
      v38 = v17; /*0x6d135c*/
      v20 = v16[5]; /*0x6d1360*/
      v41 = v19; /*0x6d1363*/
      v37 = v18; /*0x6d136e*/
      v42 = MEMORY[0x8428C4]; /*0x6d1372*/
      v40 = v20; /*0x6d137a*/
      HashTable::Remove((int *)MEMORY[0x887368], v18); /*0x6d137e*/
      CommandClass::AddAction(MEMORY[0x887368], (int)&v37); /*0x6d138e*/
    }
  }
  v21 = MEMORY[0xB0CB78][MEMORY[0xB0CB20]]; /*0x6d1398*/
  if ( v21 <= 0x18 ) /*0x6d13a1*/
  {
    v22 = (_DWORD *)((char *)&MEMORY[0xB0C1C0] + 96 * v21); /*0x6d13ae*/
    if ( v22 ) /*0x6d13b6*/
    {
      Struct::Zero25(&v37); /*0x6d13bc*/
      v23 = v22[4]; /*0x6d13c4*/
      v24 = v22[9]; /*0x6d13c7*/
      v38 = v22[3]; /*0x6d13ca*/
      v25 = v22[5]; /*0x6d13ce*/
      v39 = v23; /*0x6d13d1*/
      v26 = v22[6]; /*0x6d13d5*/
      v40 = v25; /*0x6d13d8*/
      v37 = v24; /*0x6d13e3*/
      v42 = MEMORY[0x8428B8]; /*0x6d13e7*/
      v41 = v26; /*0x6d13ef*/
      HashTable::Remove((int *)MEMORY[0x887368], v24); /*0x6d13f3*/
      CommandClass::AddAction(MEMORY[0x887368], (int)&v37); /*0x6d1403*/
    }
  }
  v27 = MEMORY[0xB0CB78][MEMORY[0xB0CB68]]; /*0x6d1410*/
  if ( v27 > 0x18 ) /*0x6d1419*/
    v28 = 0; /*0x6d142e*/
  else
    v28 = (_DWORD *)((char *)&MEMORY[0xB0C1C0] + 96 * v27); /*0x6d1426*/
  PushCommandClass::Execute(v28, (int)MEMORY[0x8428AC]); /*0x6d1435*/
  v29 = MEMORY[0xB0CB78][MEMORY[0xB0CC1C]]; /*0x6d1440*/
  if ( v29 > 0x18 ) /*0x6d1449*/
    v30 = 0; /*0x6d145e*/
  else
    v30 = (_DWORD *)((char *)&MEMORY[0xB0C1C0] + 96 * v29); /*0x6d1456*/
  PushCommandClass::Execute(v30, (int)MEMORY[0x842898]); /*0x6d1465*/
  Entry = GetFontClassEntry(MEMORY[0xB0CB6C]); /*0x6d1470*/
  PushCommandClass::Execute(Entry, (int)MEMORY[0x84288C]); /*0x6d147c*/
  v32 = GetFontClassEntry(MEMORY[0xB0CC20]); /*0x6d1487*/
  PushCommandClass::Execute(v32, (int)MEMORY[0x842880]); /*0x6d1493*/
  v33 = GetFontClassEntry(MEMORY[0xB0CC28]); /*0x6d149e*/
  PushCommandClass::Execute(v33, (int)MEMORY[0x842874]); /*0x6d14aa*/
  v34 = GetFontClassEntry(MEMORY[0xB0CD28]); /*0x6d14b5*/
  PushCommandClass::Execute(v34, (int)MEMORY[0x842868]); /*0x6d14c1*/
  v35 = GetFontClassEntry(MEMORY[0xB0CB38]); /*0x6d14cc*/
  PushCommandClass::Execute(v35, (int)MEMORY[0x842858]); /*0x6d14d8*/
  return PushCommandClass::Execute(MEMORY[0xB0CCB0], (int)MEMORY[0x842848]); /*0x6d14ec*/
}


// ==== 0x006D1570  ObjectClass::method_6D1570  this=ObjectClass  sig=csp ====
char __thiscall sub_6D1570(void *this)
{
  char result; // al
  _DWORD v2[6]; // [esp+4h] [ebp-1Ch] BYREF
  char v3; // [esp+1Ch] [ebp-4h]

  result = (*(int (__thiscall **)(void *, _DWORD *))(this->nextObject)(this, MEMORY[0xB0CC40]); /*0x6d157a*/
  if ( MEMORY[0xB0CC40] ) /*0x6d1584*/
  {
    v2[2] = MEMORY[0xB0CC50]; /*0x6d1597*/
    v2[1] = MEMORY[0xB0CC4C]; /*0x6d15a1*/
    v2[4] = MEMORY[0xB0CC58]; /*0x6d15ab*/
    v3 = 0; /*0x6d15b6*/
    v2[0] = MEMORY[0xB0CC64]; /*0x6d15bb*/
    v2[5] = MEMORY[0x842838]; /*0x6d15bf*/
    v2[3] = MEMORY[0xB0CC54]; /*0x6d15c7*/
    HashTable::Remove((int *)MEMORY[0x887368], MEMORY[0xB0CC64]); /*0x6d15cb*/
    return CommandClass::AddAction(MEMORY[0x887368], (int)v2); /*0x6d15db*/
  }
  return result; /*0x6d15e0*/
}


// ==== 0x006D1610  HouseClass::InitDefeatState  this=TabClass  sig=csp ====
char __thiscall sub_6D1610(_BYTE *this)
{
  char result; // al
  int v3; // edx

  result = *(this + 21828); /*0x6d1613*/
  if ( !result ) /*0x6d161b*/
  {
    (*(void (__thiscall **)(_BYTE *, _DWORD *))(this->MovementZones)(this, MEMORY[0xB0CC40]); /*0x6d1624*/
    HashTable::Remove((int *)MEMORY[0x887368], 241); /*0x6d1632*/
    *(this + 21828) = 1; /*0x6d1639*/
    CommandClass::BuildBar(this); /*0x6d1640*/
    v3 = *(_DWORD *)this; /*0x6d1645*/
    *(this + 21829) = 1; /*0x6d164b*/
    return (*(int (__thiscall **)(_BYTE *, _DWORD))(v3 + 56))(this, 0); /*0x6d1652*/
  }
  return result; /*0x6d1655*/
}


// ==== 0x006D1660  ObjectClass::House_Play_6D1660  this=VOID_PTR  sig=csp ====
char __usercall sub_6D1660@<al>(_BYTE *a1@<ecx>, int a2@<esi>)
{
  char result; // al
  int *v4; // esi
  int *v5; // esi
  int v6; // eax
  char *v7; // eax
  int v8; // edx
  int v9; // edx
  _DWORD v11[6]; // [esp+Ch] [ebp-1Ch] BYREF
  char v12; // [esp+24h] [ebp-4h]

  result = a1[21828]; /*0x6d1666*/
  if ( result ) /*0x6d166e*/
  {
    v4 = (int *)&MEMORY[0xB0C1C0]; /*0x6d1675*/
    do /*0x6d168b*/
    {
      (*(void (__thiscall **)(_BYTE *, int *))(*(_DWORD *)a1 + 52))(a1, v4); /*0x6d167f*/
      v4 += 24; /*0x6d1682*/
    }
    while ( (int)v4 < (int)&MEMORY[0xB0CB20] ); /*0x6d168b*/
    (*(void (__thiscall **)(_BYTE *, _DWORD *, int))(*(_DWORD *)a1 + 52))(a1, MEMORY[0xB0CCB0], a2); /*0x6d1696*/
    v5 = MEMORY[0xB0CB78]; /*0x6d1699*/
    do /*0x6d16d0*/
    {
      v6 = *v5; /*0x6d169e*/
      if ( *v5 >= 0 && v6 < 25 ) /*0x6d16a7*/
      {
        v7 = (char *)&MEMORY[0xB0C1C0] + 96 * v6; /*0x6d16af*/
        if ( v7 ) /*0x6d16b6*/
          HashTable::Remove((int *)MEMORY[0x887368], *((_DWORD *)v7 + 9)); /*0x6d16c2*/
      }
      ++v5; /*0x6d16c7*/
    }
    while ( (int)v5 < (int)MEMORY[0xB0CBDC] ); /*0x6d16d0*/
    HashTable::Remove((int *)MEMORY[0x887368], 240); /*0x6d16dd*/
    v8 = *(_DWORD *)a1; /*0x6d16e2*/
    a1[21828] = 0; /*0x6d16eb*/
    (*(void (__thiscall **)(_BYTE *, _DWORD *))(v8 + 48))(a1, MEMORY[0xB0CC40]); /*0x6d16f2*/
    if ( MEMORY[0xB0CC40] ) /*0x6d16fd*/
    {
      v11[1] = MEMORY[0xB0CC4C]; /*0x6d1710*/
      v11[2] = MEMORY[0xB0CC50]; /*0x6d171a*/
      v11[3] = MEMORY[0xB0CC54]; /*0x6d1724*/
      v12 = 0; /*0x6d172f*/
      v11[0] = MEMORY[0xB0CC64]; /*0x6d1734*/
      v11[5] = MEMORY[0x842838]; /*0x6d1738*/
      v11[4] = MEMORY[0xB0CC58]; /*0x6d1740*/
      HashTable::Remove((int *)MEMORY[0x887368], MEMORY[0xB0CC64]); /*0x6d1744*/
      CommandClass::AddAction(MEMORY[0x887368], (int)v11); /*0x6d1754*/
    }
    v9 = *(_DWORD *)a1; /*0x6d1759*/
    a1[21829] = 1; /*0x6d175f*/
    return (*(int (__thiscall **)(_BYTE *, _DWORD))(v9 + 56))(a1, 0); /*0x6d1766*/
  }
  return result; /*0x6d1769*/
}


// ==== 0x006D1770  MouseClass::ToggleContextGadget  this=unknown  sig=csp ====
char __stdcall MouseClass::sub_6D1770(int a1, int a2)
{
  unsigned int v2; // eax
  char *v3; // ecx
  unsigned int v5; // eax
  char *v6; // ecx

  if ( a1 == 4551 ) /*0x6d1779*/
  {
    v2 = MEMORY[0xB0CB78][MEMORY[0xB0CC1C]]; /*0x6d1780*/
    if ( v2 <= 0x18 ) /*0x6d1789*/
    {
      v3 = (char *)&MEMORY[0xB0C1C0] + 96 * v2; /*0x6d1796*/
      if ( v3 ) /*0x6d179e*/
      {
        if ( !v3[45] ) /*0x6d17a0*/
          GadgetClass::Show(v3); /*0x6d17a7*/
      }
    }
    return 1; /*0x6d17ac*/
  }
  else if ( a1 == 4552 ) /*0x6d17b6*/
  {
    v5 = MEMORY[0xB0CB78][MEMORY[0xB0CC1C]]; /*0x6d17be*/
    if ( v5 <= 0x18 ) /*0x6d17c7*/
    {
      v6 = (char *)&MEMORY[0xB0C1C0] + 96 * v5; /*0x6d17d4*/
      if ( v6 ) /*0x6d17dc*/
      {
        if ( v6[45] ) /*0x6d17de*/
          GadgetClass::Hide(v6); /*0x6d17e5*/
      }
    }
    return 1; /*0x6d17ea*/
  }
  else
  {
    return 0; /*0x6d17ef*/
  }
}


// ==== 0x006D1800  TabClass::Load  this=TabClass  sig=csp ====
int __stdcall CursorAnim::Load(MouseClass *aP0)
{
  _DWORD *v1; // ecx

  return (int)ObjectClass::GetTooltipText(v1, aP0); /*0x6d180a*/
}


// ==== 0x006D1810  Struct::Zero25  this=int  sig=csp ====
_DWORD *__thiscall Struct_Zero25(_DWORD *this)
{
  *this = 0; /*0x6d1814*/
  *(this + 1) = 0; /*0x6d1816*/
  *(this + 2) = 0; /*0x6d1819*/
  *(this + 3) = 0; /*0x6d181c*/
  *(this + 4) = 0; /*0x6d181f*/
  *(this + 5) = 0; /*0x6d1822*/
  *((_BYTE *)this + 24) = 0; /*0x6d1825*/
  return this; /*0x6d1828*/
}


// ==== 0x006D1830  sub_6D1830  this=-  sig=ida-proto ====
void sub_6D1830()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6d183c*/
  MEMORY[0xB0CD78] = Math::Sqrt(v0 + v0); /*0x6d184e*/
}


// ==== 0x006D1860  sub_6D1860  this=-  sig=ida-proto ====
void sub_6D1860()
{
  MEMORY[0xB0CEB8] = MEMORY[0xB0CD78] / 60.0; /*0x6d186c*/
}


// ==== 0x006D1880  sub_6D1880  this=-  sig=ida-proto ====
void sub_6D1880()
{
  MEMORY[0xB0CEA0] = 1.0 / MEMORY[0xB0CEB8]; /*0x6d188c*/
}


// ==== 0x006D18A0  sub_6D18A0  this=-  sig=ida-proto ====
void sub_6D18A0()
{
  MEMORY[0xB0CE98] = 0.0174532925199433 * 45.0; /*0x6d18ac*/
}


// ==== 0x006D18C0  sub_6D18C0  this=-  sig=ida-proto ====
void sub_6D18C0()
{
  MEMORY[0xB0CD88] = 0.0174532925199433 * 60.0; /*0x6d18cc*/
}


// ==== 0x006D18E0  sub_6D18E0  this=-  sig=ida-proto ====
void sub_6D18E0()
{
  MEMORY[0xB0CD50] = 0.0174532925199433 * 90.0; /*0x6d18ec*/
}


// ==== 0x006D1900  sub_6D1900  this=-  sig=ida-proto ====
__int64 sub_6D1900()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0CD50] - MEMORY[0xB0CD88]); /*0x6d1912*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0CD78] * 0.5); /*0x6d1926*/
  MEMORY[0xB0CEC0] = result; /*0x6d192b*/
  return result; /*0x6d1930*/
}


// ==== 0x006D1940  sub_6D1940  this=-  sig=ida-proto ====
void sub_6D1940()
{
  MEMORY[0xB0CD90] = Math::ArcTan((double)MEMORY[0xB0CEC0] * 0.00390625); /*0x6d1957*/
}


// ==== 0x006D1970  sub_6D1970  this=-  sig=ida-proto ====
void sub_6D1970()
{
  MEMORY[0xB0CE20] = Math::ArcTan((double)(2 * MEMORY[0xB0CEC0]) / MEMORY[0xB0CD78]); /*0x6d1992*/
}


// ==== 0x006D19A0  sub_6D19A0  this=-  sig=ida-proto ====
__int64 sub_6D19A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0CEC0]) + 0.5); /*0x6d19bb*/
  MEMORY[0xB0CEB4] = result; /*0x6d19c0*/
  return result; /*0x6d19c6*/
}


// ==== 0x006D19D0  sub_6D19D0  this=-  sig=ida-proto ====
int sub_6D19D0()
{
  MEMORY[0xB0CD74] = 0; /*0x6d19d2*/
  MEMORY[0xB0CD76] = 0; /*0x6d19d8*/
  return 0; /*0x6d19de*/
}


// ==== 0x006D19E0  sub_6D19E0  this=-  sig=ida-proto ====
int sub_6D19E0()
{
  MEMORY[0xB0CE08] = 0; /*0x6d19e2*/
  MEMORY[0xB0CE0C] = 0; /*0x6d19e7*/
  MEMORY[0xB0CE10] = 0; /*0x6d19ec*/
  return 0; /*0x6d19f1*/
}


// ==== 0x006D1A00  sub_6D1A00  this=-  sig=ida-proto ====
int sub_6D1A00()
{
  MEMORY[0xB0CEB0] = 0; /*0x6d1a05*/
  MEMORY[0xB0CEA8] = 128; /*0x6d1a0f*/
  MEMORY[0xB0CEAC] = 128; /*0x6d1a14*/
  return 128; /*0x6d1a19*/
}


// ==== 0x006D1A20  sub_6D1A20  this=-  sig=ida-proto ====
int sub_6D1A20()
{
  MEMORY[0xB0CD60] = 0; /*0x6d1a22*/
  MEMORY[0xB0CD64] = 0; /*0x6d1a27*/
  MEMORY[0xB0CD68] = 0; /*0x6d1a2c*/
  MEMORY[0xB0CD6C] = 0; /*0x6d1a31*/
  return 0; /*0x6d1a36*/
}


// ==== 0x006D1A40  sub_6D1A40  this=-  sig=ida-proto ====
int sub_6D1A40()
{
  MEMORY[0xB0CE28] = 0; /*0x6d1a42*/
  MEMORY[0xB0CE2C] = 0; /*0x6d1a47*/
  MEMORY[0xB0CE30] = 0; /*0x6d1a4c*/
  MEMORY[0xB0CE34] = 0; /*0x6d1a51*/
  return 0; /*0x6d1a56*/
}


// ==== 0x006D1A60  sub_6D1A60  this=-  sig=ida-proto ====
int sub_6D1A60()
{
  MEMORY[0xB0CE7C] = 0; /*0x6d1a67*/
  MEMORY[0xB0CE80] = 0; /*0x6d1a6c*/
  MEMORY[0xB0CE84] = 1; /*0x6d1a71*/
  MEMORY[0xB0CE85] = 0; /*0x6d1a78*/
  MEMORY[0xB0CE78] = (int)&off_7F429C; /*0x6d1a7d*/
  MEMORY[0xB0CE8C] = 10; /*0x6d1a87*/
  MEMORY[0xB0CE88] = 0; /*0x6d1a91*/
  return atexit(sub_6D1AA0); /*0x6d1a9c*/
}


// ==== 0x006D1AA0  sub_6D1AA0  this=-  sig=ida-proto ====
void __cdecl sub_6D1AA0()
{
  if ( (MEMORY[0xB0CD58] & 1) == 0 ) /*0x6d1aaa*/
  {
    MEMORY[0xB0CE78] = (int)&vt_VectorClass_DirtyAreaStruct; /*0x6d1aae*/
    MEMORY[0xB0CD58] |= 1u; /*0x6d1ac1*/
    if ( MEMORY[0xB0CE7C] ) /*0x6d1ac7*/
    {
      if ( MEMORY[0xB0CE85] ) /*0x6d1ad1*/
      {
        __3_YAXPAX_Z(MEMORY[0xB0CE7C]); /*0x6d1ad4*/
        MEMORY[0xB0CE7C] = 0; /*0x6d1adc*/
      }
    }
    MEMORY[0xB0CE85] = 0; /*0x6d1ae6*/
    MEMORY[0xB0CE80] = 0; /*0x6d1aed*/
  }
}


// ==== 0x006D1B00  ScreenEffect::Stub  this=ScreenEffect  sig=ida-proto ====
void ScreenEffect::Stub()
{
  ; /*0x6d1b00*/
}


// ==== 0x006D1B10  sub_6D1B10  this=-  sig=ida-proto ====
int sub_6D1B10()
{
  MEMORY[0xB0CDEC] = 0; /*0x6d1b17*/
  MEMORY[0xB0CDF0] = 0; /*0x6d1b1c*/
  MEMORY[0xB0CDF4] = 1; /*0x6d1b21*/
  MEMORY[0xB0CDF5] = 0; /*0x6d1b28*/
  MEMORY[0xB0CDE8] = (int)&vt_DynamicVectorClass_ShadowControlClass; /*0x6d1b2d*/
  MEMORY[0xB0CDFC] = 10; /*0x6d1b37*/
  MEMORY[0xB0CDF8] = 0; /*0x6d1b41*/
  return atexit(sub_6D1B50); /*0x6d1b4c*/
}


// ==== 0x006D1B50  sub_6D1B50  this=-  sig=ida-proto ====
void __cdecl sub_6D1B50()
{
  if ( (MEMORY[0xB0CD59] & 1) == 0 ) /*0x6d1b5a*/
  {
    MEMORY[0xB0CDE8] = (int)&vt_VectorClass_ShadowControlClass; /*0x6d1b5e*/
    MEMORY[0xB0CD59] |= 1u; /*0x6d1b71*/
    if ( MEMORY[0xB0CDEC] ) /*0x6d1b77*/
    {
      if ( MEMORY[0xB0CDF5] ) /*0x6d1b81*/
      {
        __3_YAXPAX_Z(MEMORY[0xB0CDEC]); /*0x6d1b84*/
        MEMORY[0xB0CDEC] = 0; /*0x6d1b8c*/
      }
    }
    MEMORY[0xB0CDF5] = 0; /*0x6d1b96*/
    MEMORY[0xB0CDF0] = 0; /*0x6d1b9d*/
  }
}


// ==== 0x006D1BB0  sub_6D1BB0  this=-  sig=ida-proto ====
void sub_6D1BB0()
{
  MEMORY[0xB0CE18] = 60.0 / MEMORY[0xB0CD78]; /*0x6d1bc9*/
  MEMORY[0xB0CD48] = Math::SinCos(MEMORY[0xB0CD88]) * MEMORY[0xB0CE18]; /*0x6d1bdd*/
}


// ==== 0x006D1BF0  sub_6D1BF0  this=-  sig=ida-proto ====
void sub_6D1BF0()
{
  MEMORY[0xB0CDD8] = MEMORY[0xB0CD78] / (Math::SinCos(MEMORY[0xB0CD88]) * 60.0); /*0x6d1c11*/
}


// ==== 0x006D1C20  Tactical::Construct  this=Tactical  sig=csp ====
int __thiscall TacticalMap_Constructor(int this)
{
  float v3; // [esp+0h] [ebp-10h]
  float v4; // [esp+0h] [ebp-10h]
  float v5; // [esp+0h] [ebp-10h]

  AbstractClass::Constructor((#373 *)this); /*0x6d1c25*/
  *(_DWORD *)(this + 168) = -1; /*0x6d1c2c*/
  *(_BYTE *)(this + 172) = 0; /*0x6d1c36*/
  *(_BYTE *)(this + 173) = 0; /*0x6d1c3c*/
  *(_DWORD *)(this + 192) = 0; /*0x6d1c42*/
  *(_DWORD *)(this + 176) = 0; /*0x6d1c48*/
  *(_DWORD *)(this + 180) = 0; /*0x6d1c4e*/
  *(_DWORD *)(this + 184) = 0; /*0x6d1c54*/
  *(_DWORD *)(this + 188) = 0; /*0x6d1c5a*/
  *(_DWORD *)(this + 196) = 1072693248; /*0x6d1c60*/
  *(_DWORD *)(this + 200) = dword_A8ED54[129069]; /*0x6d1c6f*/
  *(_DWORD *)(this + 204) = dword_A8ED54[129070]; /*0x6d1c7b*/
  *(_DWORD *)(this + 208) = dword_A8ED54[129069]; /*0x6d1c87*/
  *(_DWORD *)(this + 212) = dword_A8ED54[129070]; /*0x6d1c92*/
  *(_DWORD *)(this + 216) = 0; /*0x6d1c98*/
  *(_DWORD *)(this + 220) = 0; /*0x6d1c9e*/
  *(_DWORD *)(this + 224) = 0; /*0x6d1ca4*/
  *(_DWORD *)(this + 3428) = 0; /*0x6d1caa*/
  *(_DWORD *)(this + 3432) = 0; /*0x6d1cb0*/
  *(_DWORD *)(this + 3436) = 0; /*0x6d1cb6*/
  *(_DWORD *)(this + 3440) = 0; /*0x6d1cbc*/
  *(_DWORD *)(this + 3444) = 0; /*0x6d1cc2*/
  *(_DWORD *)(this + 3448) = 0; /*0x6d1cc8*/
  *(_BYTE *)(this + 3452) = 1; /*0x6d1cce*/
  *(_BYTE *)(this + 3453) = 0; /*0x6d1cd5*/
  *(_BYTE *)(this + 3454) = 0; /*0x6d1cdb*/
  *(_DWORD *)(this + 3456) = dword_A8ED54[129027]; /*0x6d1ced*/
  *(_DWORD *)(this + 3460) = dword_A8ED54[129028]; /*0x6d1cf8*/
  *(_DWORD *)(this + 3464) = dword_A8ED54[129029]; /*0x6d1d01*/
  *(_DWORD *)(this + 3468) = dword_A8ED54[129030]; /*0x6d1d09*/
  *(_DWORD *)(this + 3472) = 0; /*0x6d1d0c*/
  *(_DWORD *)(this + 3476) = 0; /*0x6d1d12*/
  *(_DWORD *)(this + 3480) = 0; /*0x6d1d18*/
  *(_DWORD *)(this + 3484) = 0; /*0x6d1d1e*/
  *(_DWORD *)(this + 3488) = 0; /*0x6d1d2a*/
  *(_DWORD *)(this + 3492) = ((int (__thiscall *)(int))Timer::GetTicks)(this + 3496); /*0x6d1d35*/
  *(_DWORD *)(this + 3500) = 0; /*0x6d1d3b*/
  *(_DWORD *)(this + 3504) = 0; /*0x6d1d4e*/
  *(_DWORD *)this = &Tactical::`vftable'; /*0x6d1d54*/
  *(_DWORD *)(this + 4) = &Tactical::`vftable'; /*0x6d1d5a*/
  *(_DWORD *)(this + 8) = &Tactical::`vftable'; /*0x6d1d61*/
  *(_DWORD *)(this + 12) = &Tactical::`vftable'; /*0x6d1d68*/
  memset((void *)(this + 228), 0, 0xC80u); /*0x6d1d6f*/
  *(_WORD *)(this + 36) = 0; /*0x6d1d77*/
  *(_DWORD *)(this + 164) = -1; /*0x6d1d7d*/
  Matrix3x4::Identity((_DWORD *)(this + 3508)); /*0x6d1d87*/
  v3 = *(double *)&dword_A8ED54[129037]; /*0x6d1d95*/
  ((void (__stdcall *)(float))Matrix3x3::RotateX)(v3); /*0x6d1d98*/
  v4 = *(double *)&dword_A8ED54[129105]; /*0x6d1da6*/
  ((void (__stdcall *)(float))Matrix2D::Rotate)(v4); /*0x6d1da9*/
  v5 = 60.0 / *(double *)&dword_A8ED54[129033]; /*0x6d1dbb*/
  ((void (__stdcall *)(float))TacticalMap::MultiplyByScalar)(v5); /*0x6d1dc0*/
  *(_DWORD *)(this + 3556) = 1082689742; /*0x6d1dca*/
  *(_DWORD *)(this + 3560) = 1091078350; /*0x6d1dd4*/
  *(_DWORD *)(this + 3564) = 0; /*0x6d1dda*/
  *(_DWORD *)(this + 3568) = 0; /*0x6d1de0*/
  *(_DWORD *)(this + 3572) = -1064793906; /*0x6d1de6*/
  *(_DWORD *)(this + 3576) = 1091078350; /*0x6d1df0*/
  *(_DWORD *)(this + 3580) = 0; /*0x6d1df6*/
  *(_DWORD *)(this + 3584) = 0; /*0x6d1dfc*/
  *(_DWORD *)(this + 3588) = 0; /*0x6d1e02*/
  *(_DWORD *)(this + 3592) = 0; /*0x6d1e08*/
  *(_DWORD *)(this + 3596) = 1065353216; /*0x6d1e0e*/
  *(_DWORD *)(this + 3600) = 0; /*0x6d1e18*/
  MEMORY[0x87F7E8][7887] = this; /*0x6d1e1e*/
  return this; /*0x6d1e26*/
}


// ==== 0x006D1E30  Tactical::SmallFunc_6D1E30  this=Tactical  sig=csp ====
_DWORD *__thiscall SmallFunc_6D1E30(_DWORD *this, AbstractClass *aP1)
{
  AbstractClass::InitVtables(this, (int)aP1); /*0x6d1e38*/
  this->Tactical_field_0xDA4 = Timer::GetTicks(); /*0x6d1e48*/
  *(this + 875) = 0; /*0x6d1e4e*/
  *this = &Tactical::`vftable'; /*0x6d1e58*/
  this->vtable2 = &Tactical::`vftable'; /*0x6d1e5e*/
  this->vtable3 = &Tactical::`vftable'; /*0x6d1e65*/
  this->vtable4 = &vt_Tactical; /*0x6d1e6c*/
  return this; /*0x6d1e75*/
}


// ==== 0x006D1E80  Tactical::method_6D1E80  this=Tactical  sig=csp ====
void __thiscall sub_6D1E80(_DWORD *this)
{
  *this = &Tactical::`vftable'; /*0x6d1e80*/
  this->vtable2 = &Tactical::`vftable'; /*0x6d1e86*/
  this->vtable3 = &Tactical::`vftable'; /*0x6d1e8d*/
  this->vtable4 = &vt_Tactical; /*0x6d1e94*/
  MEMORY[0x887324] = 0; /*0x6d1e9b*/
  AbstractClass::DTOR(this); /*0x6d1ea5*/
}


// ==== 0x006D1EB0  IsoCoord::ToPixel  this=IUnknown  sig=csp ====
_DWORD *__thiscall IsoCoord::ToPixel(_DWORD *this, int a2, Tactical *aP2)
{
  *this = -60 * (int)aP2 / 2 + 60 * a2 / 2; /*0x6d1ef3*/
  this->q004 = 30 * (int)aP2 / 2 + 30 * a2 / 2; /*0x6d1f00*/
  return this; /*0x6d1f03*/
}


// ==== 0x006D1F10  Coord::To_ScreenRaw  this=AbstractClass  sig=csp ====
int *__stdcall Coord::To_ScreenRaw(AbstractClass *aP0, IUnknown *aP1)
{
  int v2; // edi
  int v3; // esi
  int v4; // esi
  int v6; // [esp+10h] [ebp-4h]

  v6 = aP1->field_4; /*0x6d1f1f*/
  v2 = (-60 * v6 / 2 + 60 * aP1->field_0 / 2) / 256; /*0x6d1f95*/
  v3 = (30 * v6 / 2 + 30 * aP1->field_0 / 2) / 256; /*0x6d1f98*/
  v4 = v3 /*0x6d1fc4*/
     - Math::RoundToInt((double)aP1->field_8 * *(double *)&stru_B05488.__pad_579C[8484] + (double)(aP1->field_8 >= 728) + 0.5);
  *(_DWORD *)aP0->__pad_0 = v2; /*0x6d1fca*/
  *(_DWORD *)&aP0->__pad_0[4] = v4; /*0x6d1fcc*/
  return (int *)aP0->__pad_0; /*0x6d1fcf*/
}


// ==== 0x006D1FE0  TacticalClass::AdjustForZShapeMove  this=AbstractClass  sig=csp ====
int *__stdcall TacticalClass::AdjustForZShapeMove(int *a1, _DWORD *a2)
{
  int v2; // kr08_4

  v2 = 30 * a2[1] / 2 + 30 * *a2 / 2; /*0x6d204b*/
  *a1 = (-60 * a2[1] / 2 + 60 * *a2 / 2) / 256; /*0x6d2057*/
  a1[1] = v2 / 256; /*0x6d2059*/
  return a1; /*0x6d202f*/
}


// ==== 0x006D2070  World::ToScreen  this=AbstractClass  sig=csp ====
_DWORD *__thiscall World::ToScreen(float *this, AbstractClass *aP1, AbstractClass *aP2)
{
  double v3; // st7
  float *v4; // eax
  BuildingTypeClass *v5; // esi
  BuildingTypeClass *v6; // ecx
  AbstractClass *v8; // [esp+4h] [ebp-18h] BYREF
  float v9; // [esp+8h] [ebp-14h]
  int v10; // [esp+Ch] [ebp-10h]
  float v11[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = (double)*(int *)aP2->__pad_0; /*0x6d2082*/
  v10 = 0; /*0x6d2084*/
  *(float *)&v8 = v3; /*0x6d208c*/
  v9 = (float)*(int *)&aP2->__pad_0[4]; /*0x6d2098*/
  v4 = TransformMatrix3x4Point(v11, this + 889, (float *)&v8); /*0x6d209c*/
  v8 = *(AbstractClass **)v4; /*0x6d20a3*/
  v9 = v4[1]; /*0x6d20ae*/
  v10 = *((_DWORD *)v4 + 2); /*0x6d20b5*/
  v5 = (BuildingTypeClass *)Math::RoundToInt(*(float *)&v8); /*0x6d20c2*/
  v6 = (BuildingTypeClass *)Math::RoundToInt(v9); /*0x6d20c9*/
  *(_DWORD *)aP1->__pad_0 = v5; /*0x6d20cf*/
  *(_DWORD *)&aP1->__pad_0[4] = v6; /*0x6d20d1*/
  return aP1->__pad_0; /*0x6d20d4*/
}


// ==== 0x006D20E0  ZCoordToScreenY  this=VOID_PTR  sig=csp ====
__int64 __fastcall Coord_ZToScreenY(int a1)
{
  return Math::RoundToInt((double)a1 * MEMORY[0xB0CD48] + (double)(a1 >= 728) + 0.5); /*0x6d2118*/
}


// ==== 0x006D2120  Coord::ScaleToScreenY  this=int  sig=csp ====
__int64 __thiscall Coord::ScaleToScreenY(void *this)
{
  return Math::RoundToInt(((double)(int)this - 0.5) * MEMORY[0xB0CDD8]); /*0x6d213b*/
}


// ==== 0x006D2140  Coord::To_Screen  this=AbstractClass  sig=csp ====
bool __thiscall Coord_To_Screen(_DWORD *this, _DWORD *a2, int *a3)
{
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // esi
  int v10; // [esp+14h] [ebp-4h]

  v10 = a2[1]; /*0x6d214f*/
  v4 = (-60 * v10 / 2 + 60 * *a2 / 2) / 256; /*0x6d21c8*/
  v5 = (30 * v10 / 2 + 30 * *a2 / 2) / 256; /*0x6d21cb*/
  v6 = Math::RoundToInt((double)(int)a2[2] * MEMORY[0xB0CD48] + (double)(a2[2] >= 728) + 0.5); /*0x6d21f2*/
  *a3 = v4; /*0x6d21fd*/
  a3[1] = v5 - v6; /*0x6d21ff*/
  v7 = *a3 - this->q0B0; /*0x6d2213*/
  v8 = a3[1] - this->q0B4; /*0x6d2215*/
  *a3 = v7; /*0x6d2217*/
  a3[1] = v8; /*0x6d221b*/
  if ( v7 < -360 ) /*0x6d222a*/
    return 0; /*0x6d222c*/
  if ( v7 > MEMORY[0xB0CE30] + 360 ) /*0x6d2242*/
    return 0; /*0x6d2244*/
  if ( v8 >= -180 ) /*0x6d2251*/
    return v8 <= MEMORY[0xB0CE34] + 180; /*0x6d2269*/
  return 0; /*0x6d2220*/
}


// ==== 0x006D2280  TacticalClass::TransformPixel  this=AbstractClass  sig=csp ====
_DWORD *__thiscall TacticalClass_TransformPixel(int this, _DWORD *a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // esi
  float *v5; // eax
  int v6; // esi
  int v7; // eax
  float v9[3]; // [esp+8h] [ebp-18h] BYREF
  float v10; // [esp+14h] [ebp-Ch] BYREF
  float v11; // [esp+18h] [ebp-8h]
  int v12; // [esp+1Ch] [ebp-4h]

  if ( *a3 >= MEMORY[0xB0CE30] || (v3 = a3[1], v3 >= MEMORY[0xB0CE34] + MEMORY[0xB0CE2C]) ) /*0x6d22ab*/
  {
    *a2 = MEMORY[0xB0CE08]; /*0x6d2345*/
    a2[1] = MEMORY[0xB0CE0C]; /*0x6d234d*/
    a2[2] = MEMORY[0xB0CE10]; /*0x6d2356*/
    return a2; /*0x6d2337*/
  }
  else
  {
    v4 = *(_DWORD *)(this + 180) + v3; /*0x6d22bf*/
    LODWORD(v9[0]) = *(_DWORD *)(this + 176) + *a3; /*0x6d22c1*/
    LODWORD(v9[1]) = v4; /*0x6d22c5*/
    v10 = (float)SLODWORD(v9[0]); /*0x6d22dc*/
    v12 = 0; /*0x6d22e4*/
    v11 = (float)v4; /*0x6d22ec*/
    v5 = TransformMatrix3x4Point(v9, (float *)(this + 3556), &v10); /*0x6d22f0*/
    v10 = *v5; /*0x6d22f7*/
    v11 = v5[1]; /*0x6d2302*/
    v12 = *((_DWORD *)v5 + 2); /*0x6d2309*/
    v6 = Math::RoundToInt(v10); /*0x6d2316*/
    v7 = Math::RoundToInt(v11); /*0x6d2318*/
    *a2 = v6; /*0x6d2325*/
    a2[1] = v7; /*0x6d2327*/
    a2[2] = 0; /*0x6d232c*/
    return a2; /*0x6d232a*/
  }
}


// ==== 0x006D2360  Matrix3x4::TransformCell  this=AbstractClass  sig=csp ====
_DWORD *__thiscall Matrix3x4::TransformCell(float *this, AbstractClass *aP1, AbstractClass *aP2)
{
  float *v4; // eax
  BuildingTypeClass *v5; // esi
  int v6; // eax
  int v8; // [esp+4h] [ebp-1Ch]
  float v9; // [esp+8h] [ebp-18h] BYREF
  BuildingTypeClass *v10; // [esp+Ch] [ebp-14h]
  int v11; // [esp+10h] [ebp-10h]
  float v12[3]; // [esp+14h] [ebp-Ch] BYREF
  AbstractClass *aP2a; // [esp+28h] [ebp+8h]

  aP2a = *(AbstractClass **)aP2->__pad_0; /*0x6d2372*/
  if ( (int)aP2a >= *(int *)&MEMORY[0xB077F8].__pad_5554[228] /*0x6d2386*/
    || (v8 = *(_DWORD *)&aP2->__pad_0[4], v8 >= *(int *)&MEMORY[0xB077F8].__pad_5554[232]) )
  {
    *(_DWORD *)aP1->__pad_0 = *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[188]; /*0x6d2404*/
    *(_DWORD *)&aP1->__pad_0[4] = *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[192]; /*0x6d240c*/
    *(_DWORD *)&aP1->__pad_0[8] = *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[196]; /*0x6d2415*/
    return aP1->__pad_0; /*0x6d23f7*/
  }
  else
  {
    v9 = (float)(int)aP2a; /*0x6d2398*/
    v11 = 0; /*0x6d23a4*/
    *(float *)&v10 = (float)v8; /*0x6d23ac*/
    v4 = TransformMatrix3x4Point(v12, this + 889, &v9); /*0x6d23b0*/
    v9 = *v4; /*0x6d23b7*/
    v10 = (BuildingTypeClass *)*((_DWORD *)v4 + 1); /*0x6d23c2*/
    v11 = *((_DWORD *)v4 + 2); /*0x6d23c9*/
    v5 = (BuildingTypeClass *)Math::RoundToInt(v9); /*0x6d23d6*/
    v6 = Math::RoundToInt(*(float *)&v10); /*0x6d23d8*/
    *(_DWORD *)aP1->__pad_0 = v5; /*0x6d23e5*/
    *(_DWORD *)&aP1->__pad_0[4] = v6; /*0x6d23e7*/
    *(_DWORD *)&aP1->__pad_0[8] = 0; /*0x6d23ec*/
    return aP1->__pad_0; /*0x6d23ea*/
  }
}


// ==== 0x006D2420  TacticalClass::SetPosition  this=AbstractClass  sig=csp ====
int __thiscall TacticalClass::SetPosition(_DWORD *this, IUnknown *aP1, AbstractClass *aP2)
{
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  int result; // eax
  int v10; // edi
  IUnknown *v11; // ecx
  IUnknown *v12; // [esp+14h] [ebp-4h]

  this->q0DC = 0; /*0x6d2439*/
  this->q0D8 = *(_DWORD *)&stru_830620.__pad_579C[4 * (_DWORD)aP2 + 52016]; /*0x6d244a*/
  v12 = (IUnknown *)aP1->field_4; /*0x6d245c*/
  v4 = (-60 * (int)v12 / 2 + 60 * aP1->field_0 / 2) / 256; /*0x6d24c4*/
  v5 = (30 * (int)v12 / 2 + 30 * aP1->field_0 / 2) / 256; /*0x6d24c7*/
  v6 = Math::RoundToInt((double)aP1->field_8 * *(double *)&MEMORY[0xB077F8].field_5550 + (double)(aP1->field_8 >= 728) + 0.5); /*0x6d24ee*/
  v7 = this->q0B4; /*0x6d24f3*/
  v8 = v5 - v6 - v7; /*0x6d2507*/
  result = this->qD64; /*0x6d250b*/
  v10 = v7 + v8; /*0x6d2511*/
  v11 = (IUnknown *)this->qD68; /*0x6d2513*/
  this->__pad_0D0 = v4; /*0x6d2519*/
  this->q0D4 = v10; /*0x6d251f*/
  this->q0C8 = result; /*0x6d2525*/
  this->q0CC = v11; /*0x6d252b*/
  return result; /*0x6d2531*/
}


// ==== 0x006D2540  Tactical::ScrollViewport  this=Tactical  sig=csp ====
char __thiscall TacticalClass::ScrollViewport(int this)
{
  int v1; // eax
  char v2; // bl
  _DWORD *v4; // ebp
  double v5; // st7
  _DWORD *v6; // edi
  int *v7; // eax
  double v8; // st7
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  signed int v12; // edi
  signed int v13; // eax
  int v14; // edi
  unsigned int Ticks; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v22; // [esp+8h] [ebp-14h] BYREF
  int v23; // [esp+Ch] [ebp-10h]
  int v24; // [esp+10h] [ebp-Ch] BYREF
  int v25; // [esp+14h] [ebp-8h]

  LOBYTE(v1) = MEMORY[0x87F7E8][538500]; /*0x6d2540*/
  v2 = 0; /*0x6d2549*/
  if ( (MEMORY[0x87F7E8][538500] & 2) != 0 ) /*0x6d2550*/
    return v1; /*0x6d2550*/
  if ( *(_DWORD *)(this + 168) != dword_A8ED54[12] ) /*0x6d2565*/
  {
    if ( LOBYTE(dword_A8ED54[2]) ) /*0x6d2573*/
    {
      v4 = (_DWORD *)(this + 208); /*0x6d2584*/
      if ( (*(_DWORD *)(this + 208) != dword_A8ED54[129069] || *(_DWORD *)(this + 212) != dword_A8ED54[129070]) /*0x6d25af*/
        && *(float *)(this + 216) != 0.0 )
      {
        v5 = *(float *)(this + 220) + *(float *)(this + 216); /*0x6d25bb*/
        *(float *)(this + 220) = v5; /*0x6d25c1*/
        if ( v5 > 1.0 ) /*0x6d25d2*/
          *(_DWORD *)(this + 220) = 1065353216; /*0x6d25d4*/
        v6 = (_DWORD *)(this + 200); /*0x6d25e4*/
        v7 = TacticalClass::CalcInverseAlpha(&v24, this + 208, *(float *)(this + 220)); /*0x6d25f2*/
        v8 = *(float *)(this + 220); /*0x6d25f7*/
        v9 = *v7; /*0x6d2603*/
        v25 = v7[1]; /*0x6d260a*/
        if ( v8 >= 1.0 ) /*0x6d2611*/
        {
          *v4 = 0; /*0x6d2617*/
          *v6 = 0; /*0x6d261a*/
          *(_DWORD *)(this + 212) = 0; /*0x6d261c*/
          *(_DWORD *)(this + 204) = 0; /*0x6d261f*/
          *(_DWORD *)(this + 216) = 0; /*0x6d2622*/
          *(_DWORD *)(this + 220) = 0; /*0x6d2628*/
        }
        v22 = v9; /*0x6d2639*/
        v23 = v25; /*0x6d263d*/
        if ( !ClampCoordMap(&v22) || HIBYTE(dword_A8ED54[5]) ) /*0x6d2651*/
        {
          v11 = v25; /*0x6d265d*/
          v10 = v9; /*0x6d2661*/
        }
        else
        {
          v10 = v22; /*0x6d2653*/
          v11 = v23; /*0x6d2657*/
        }
        *(_DWORD *)(this + 3428) = v10; /*0x6d2663*/
        *(_DWORD *)(this + 3444) = v10; /*0x6d2669*/
        *(_DWORD *)(this + 3432) = v11; /*0x6d266f*/
        *(_DWORD *)(this + 3448) = v11; /*0x6d2675*/
        TacticalClass::CalcViewportCells(this); /*0x6d267d*/
        *(_BYTE *)(this + 3453) = 1; /*0x6d2682*/
        v2 = 1; /*0x6d2689*/
      }
    }
    v12 = *(_DWORD *)(this + 3500); /*0x6d2691*/
    if ( *(_DWORD *)(this + 3492) != -1 ) /*0x6d269b*/
    {
      v13 = Timer::GetTicks() - *(_DWORD *)(this + 3492); /*0x6d26a8*/
      if ( v13 >= v12 ) /*0x6d26b0*/
      {
LABEL_20:
        v14 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 80); /*0x6d26b8*/
        Ticks = Timer::GetTicks(); /*0x6d26c5*/
        v16 = v25; /*0x6d26ca*/
        *(_DWORD *)(this + 3492) = Ticks; /*0x6d26ce*/
        v17 = *(_DWORD *)(this + 3488); /*0x6d26d4*/
        *(_DWORD *)(this + 3496) = v16; /*0x6d26da*/
        *(_DWORD *)(this + 3500) = v14; /*0x6d26e1*/
        *(_DWORD *)(this + 3488) = v17 + 1; /*0x6d26e7*/
        goto LABEL_21; /*0x6d26e7*/
      }
      v12 -= v13; /*0x6d26b2*/
    }
    if ( v12 ) /*0x6d26b6*/
      goto LABEL_21; /*0x6d26b6*/
    goto LABEL_20; /*0x6d26b6*/
  }
LABEL_21:
  LOBYTE(v1) = dword_A8ED54[12]; /*0x6d26ed*/
  *(_DWORD *)(this + 168) = dword_A8ED54[12]; /*0x6d26f3*/
  if ( *(_DWORD *)(this + 3444) != *(_DWORD *)(this + 3428) /*0x6d2715*/
    || (v1 = *(_DWORD *)(this + 3432), *(_DWORD *)(this + 3448) != v1) )
  {
    if ( !v2 ) /*0x6d2719*/
    {
      v18 = *(_DWORD *)(this + 3444); /*0x6d2721*/
      v23 = *(_DWORD *)(this + 3448); /*0x6d272b*/
      v22 = v18; /*0x6d2732*/
      if ( !ClampCoordMap(&v22) || HIBYTE(dword_A8ED54[5]) ) /*0x6d2746*/
      {
        v19 = *(_DWORD *)(this + 3444); /*0x6d2752*/
        v20 = *(_DWORD *)(this + 3448); /*0x6d2758*/
      }
      else
      {
        v19 = v22; /*0x6d2748*/
        v20 = v23; /*0x6d274c*/
      }
      *(_DWORD *)(this + 3428) = v19; /*0x6d275e*/
      *(_DWORD *)(this + 3444) = v19; /*0x6d2764*/
      *(_DWORD *)(this + 3432) = v20; /*0x6d276a*/
      *(_DWORD *)(this + 3448) = v20; /*0x6d2770*/
      LOBYTE(v1) = TacticalClass::CalcViewportCells(this); /*0x6d2778*/
      *(_BYTE *)(this + 3453) = 1; /*0x6d277d*/
    }
  }
  return v1; /*0x6d2784*/
}


// ==== 0x006D2790  Cell::CreateCrater  this=AbstractClass  sig=csp ====
char __stdcall Cell::CreateCrater(IUnknown aP2)
{
  int v1; // ecx
  int *v2; // eax
  int v3; // ebp
  int v4; // ecx
  int v5; // edx
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // edx
  IUnknown *v14; // eax
  char *v11; // esi
  char *v12; // edi
  int v13; // eax
  bool cc41; // cc
  int v15; // eax
  bool v16; // bl
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  const RECT *v21; // [esp+0h] [ebp-68h]
  IUnknown *v26; // [esp+4h] [ebp-64h]
  IUnknown *v23; // [esp+10h] [ebp-58h]
  int v24; // [esp+14h] [ebp-54h]
  int v25; // [esp+18h] [ebp-50h]
  int var4C; // [esp+1Ch] [ebp-4Ch]
  int v27; // [esp+20h] [ebp-48h]
  int v28; // [esp+24h] [ebp-44h]
  int v29; // [esp+28h] [ebp-40h]
  int v30; // [esp+2Ch] [ebp-3Ch]
  int v31; // [esp+30h] [ebp-38h] BYREF
  int v32; // [esp+34h] [ebp-34h]
  int v33; // [esp+38h] [ebp-30h]
  int v34; // [esp+3Ch] [ebp-2Ch]
  _DWORD v35[5]; // [esp+40h] [ebp-28h] BYREF
  _DWORD v36[5]; // [esp+54h] [ebp-14h] BYREF

  v1 = *(_DWORD *)&stru_B05488.__pad_579C[8804]; /*0x6d2793*/
  v25 = -1; /*0x6d27a1*/
  var4C = 0x7FFFFFFF; /*0x6d27a9*/
  v24 = 0; /*0x6d27b1*/
  if ( *(int *)&stru_B05488.__pad_579C[8804] <= 0 ) /*0x6d27b5*/
    goto LABEL_43; /*0x6d27b5*/
  v23 = 0; /*0x6d27bb*/
  do /*0x6d2a15*/
  {
    v31 = *(int *)((char *)&v23->field_0 + *(_DWORD *)&stru_B05488.__pad_579C[8792]); /*0x6d27d0*/
    v32 = *(int *)((char *)&v23->field_4 + *(_DWORD *)&stru_B05488.__pad_579C[8792]); /*0x6d27d7*/
    v33 = *(int *)((char *)&v23->field_8 + *(_DWORD *)&stru_B05488.__pad_579C[8792]); /*0x6d27de*/
    v34 = *(int *)((char *)&v23->field_C + *(_DWORD *)&stru_B05488.__pad_579C[8792]); /*0x6d27f2*/
    v2 = ClipRectIntersection((IUnknown *)v36, (IUnknown *)&v31, &aP2, 0, 0); /*0x6d27f6*/
    v3 = v34; /*0x6d2801*/
    v27 = *v2; /*0x6d2805*/
    v28 = v2[1]; /*0x6d280c*/
    v4 = v32; /*0x6d2810*/
    v29 = v2[2]; /*0x6d2817*/
    v5 = v31; /*0x6d281b*/
    v30 = v2[3]; /*0x6d2824*/
    if ( v33 <= 0 || v34 <= 0 ) /*0x6d2830*/
    {
      v6 = aP2.field_C; /*0x6d28c8*/
      v35[1] = aP2.field_4; /*0x6d28cc*/
      v7 = aP2.field_8; /*0x6d28d0*/
      v35[0] = aP2.field_0; /*0x6d28d4*/
    }
    else if ( aP2.field_8 <= 0 || aP2.field_C <= 0 ) /*0x6d2844*/
    {
      v35[0] = v31; /*0x6d28b2*/
      v35[1] = v32; /*0x6d28b6*/
      v7 = v33; /*0x6d28ba*/
      v6 = v34; /*0x6d28bc*/
    }
    else
    {
      v6 = v34; /*0x6d2846*/
      v7 = v33; /*0x6d284e*/
      if ( v31 > aP2.field_0 ) /*0x6d2850*/
      {
        v7 = v31 + v33 - aP2.field_0; /*0x6d2854*/
        v5 = aP2.field_0; /*0x6d2856*/
      }
      if ( v32 > aP2.field_4 ) /*0x6d285e*/
      {
        v6 = v32 - aP2.field_4 + v34; /*0x6d2862*/
        v4 = aP2.field_4; /*0x6d2864*/
      }
      if ( v7 + v5 < aP2.field_0 + aP2.field_8 ) /*0x6d2871*/
        v7 = aP2.field_8 - v5 + aP2.field_0 + 1; /*0x6d287d*/
      if ( v6 + v4 < aP2.field_C + aP2.field_4 ) /*0x6d2890*/
        v6 = aP2.field_4 - v4 + aP2.field_C + 1; /*0x6d289c*/
      v3 = v34; /*0x6d28a0*/
      v35[0] = v5; /*0x6d28a4*/
      v5 = v31; /*0x6d28a8*/
      v35[1] = v4; /*0x6d28ac*/
    }
    if ( v29 > 0 && v30 > 0 ) /*0x6d28ea*/
    {
      if ( v27 == aP2.field_0 && v28 == aP2.field_4 && v29 == aP2.field_8 && v30 == aP2.field_C ) /*0x6d291e*/
      {
        LOBYTE(v8) = aP2.__pad_10[0]; /*0x6d2920*/
        if ( !aP2.__pad_10[0] ) /*0x6d2926*/
          return v8; /*0x6d2926*/
        LOBYTE(v8) = (_BYTE)v23; /*0x6d2932*/
        if ( v23->__pad_10[*(_DWORD *)&stru_B05488.__pad_579C[8792]] ) /*0x6d2936*/
          return v8; /*0x6d293c*/
      }
      else if ( v27 == v5 && v28 == v32 && v29 == v33 && v30 == v3 ) /*0x6d2967*/
      {
        if ( aP2.__pad_10[0] || !v23->__pad_10[*(_DWORD *)&stru_B05488.__pad_579C[8792]] ) /*0x6d297b*/
        {
          if ( v24 < *(int *)&stru_B05488.__pad_579C[8804] ) /*0x6d298e*/
          {
            v9 = v24; /*0x6d2991*/
            --*(_DWORD *)&stru_B05488.__pad_579C[8804]; /*0x6d2995*/
            if ( v24 < *(int *)&stru_B05488.__pad_579C[8804] ) /*0x6d299a*/
            {
              v14 = v23; /*0x6d299c*/
              do /*0x6d29be*/
              {
                ++v9; /*0x6d29a6*/
                v11 = &v14->__pad_10[*(_DWORD *)&stru_B05488.__pad_579C[8792] + 4]; /*0x6d29a7*/
                v12 = (char *)v14 + *(_DWORD *)&stru_B05488.__pad_579C[8792]; /*0x6d29ab*/
                v14 = (IUnknown *)((char *)v14 + 20); /*0x6d29b3*/
                qmemcpy(v12, v11, 0x14u); /*0x6d29b6*/
              }
              while ( v9 < *(int *)&stru_B05488.__pad_579C[8804] ); /*0x6d29be*/
            }
          }
          --v24; /*0x6d29c8*/
          v23 = (IUnknown *)((char *)v23 - 20); /*0x6d29cc*/
        }
      }
      else
      {
        v13 = v6 * v7; /*0x6d29de*/
        if ( v13 < v33 * v3 + aP2.field_8 * aP2.field_C && v13 < var4C ) /*0x6d29eb*/
        {
          var4C = v13; /*0x6d29f1*/
          v25 = v24; /*0x6d29f5*/
        }
      }
    }
    v1 = *(_DWORD *)&stru_B05488.__pad_579C[8804]; /*0x6d2a01*/
    cc41 = ++v24 < *(_DWORD *)&stru_B05488.__pad_579C[8804]; /*0x6d2a0b*/
    v23 = (IUnknown *)((char *)v23 + 20); /*0x6d2a11*/
  }
  while ( cc41 ); /*0x6d2a15*/
  if ( v25 == -1 ) /*0x6d2a22*/
  {
LABEL_43:
    v36[0] = aP2.field_0; /*0x6d2a30*/
    v36[2] = aP2.field_8; /*0x6d2a38*/
    LOBYTE(v36[4]) = aP2.__pad_10[0]; /*0x6d2a40*/
    LOBYTE(v8) = stru_B05488.__pad_579C[8796]; /*0x6d2a44*/
    v36[1] = aP2.field_4; /*0x6d2a49*/
    v36[3] = aP2.field_C; /*0x6d2a53*/
    if ( v1 < *(int *)&stru_B05488.__pad_579C[8796] /*0x6d2a8e*/
      || (stru_B05488.__pad_579C[8801] || !*(_DWORD *)&stru_B05488.__pad_579C[8796])
      && *(int *)&stru_B05488.__pad_579C[8808] > 0
      && (LOBYTE(v8) = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[8788] + 8))(
                         &stru_B05488.__pad_579C[8788],
                         *(_DWORD *)&stru_B05488.__pad_579C[8808] + *(_DWORD *)&stru_B05488.__pad_579C[8796],
                         0),
          (_BYTE)v8) )
    {
      v15 = (*(_DWORD *)&stru_B05488.__pad_579C[8804])++; /*0x6d2a9e*/
      v8 = 5 * v15; /*0x6d2aad*/
      qmemcpy((void *)(*(_DWORD *)&stru_B05488.__pad_579C[8792] + 4 * v8), v36, 0x14u); /*0x6d2ab8*/
    }
  }
  else
  {
    v16 = aP2.__pad_10[0] || *(_BYTE *)(*(_DWORD *)&stru_B05488.__pad_579C[8792] + 20 * v25 + 16); /*0x6d2ae0*/
    v8 = Rect::Union((IUnknown *)(20 * v25 + *(_DWORD *)&stru_B05488.__pad_579C[8792]), v21, (const RECT *)v26); /*0x6d2b01*/
    v17 = *(_DWORD *)(v8 + 4); /*0x6d2b08*/
    v35[0] = *(_DWORD *)v8; /*0x6d2b0b*/
    v18 = *(_DWORD *)(v8 + 8); /*0x6d2b0f*/
    v35[1] = v17; /*0x6d2b12*/
    v19 = *(_DWORD *)(v8 + 12); /*0x6d2b16*/
    LOBYTE(v8) = stru_B05488.__pad_579C[8792]; /*0x6d2b19*/
    v35[2] = v18; /*0x6d2b1e*/
    v35[3] = v19; /*0x6d2b27*/
    LOBYTE(v35[4]) = v16; /*0x6d2b32*/
    qmemcpy((void *)(20 * v25 + *(_DWORD *)&stru_B05488.__pad_579C[8792]), v35, 0x14u); /*0x6d2b36*/
  }
  return v8; /*0x6d2aba*/
}


// ==== 0x006D2B50  nullsub_238  this=unknown  sig=csp ====
void __stdcall nullsub_238(int a1, int a2)
{
  ; /*0x6d2b50*/
}


// ==== 0x006D2B60  TacticalMap::RenderCell  this=AbstractClass  sig=csp ====
int __thiscall TacticalMap::RenderCell(_DWORD *this, char arg0, AbstractClass *aP2, int a4, int a2)
{
  int v6; // esi
  int v7; // ebp
  IUnknown *v8; // eax
  AbstractClass *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  int v12; // edx
  int v13; // eax
  const void *v14; // esi
  void *v15; // edi
  int result; // eax
  int v17; // ebp
  ObjectClass *v18; // edi
  ObjectClass *Coords; // eax
  int *v20; // eax
  int v21; // ecx
  AbstractClass *v22; // [esp-8h] [ebp-78h]
  AbstractClass *v23; // [esp-4h] [ebp-74h]
  IUnknown *v24; // [esp+10h] [ebp-60h]
  int v25; // [esp+14h] [ebp-5Ch] BYREF
  int v26; // [esp+18h] [ebp-58h]
  AbstractClass *v27; // [esp+1Ch] [ebp-54h]
  ObjectClass *v28; // [esp+20h] [ebp-50h] BYREF
  int v29; // [esp+24h] [ebp-4Ch]
  AbstractClass aP1; // [esp+28h] [ebp-48h] BYREF
  int v31; // [esp+4Ch] [ebp-24h]
  _DWORD v32[4]; // [esp+50h] [ebp-20h] BYREF
  _DWORD v33[4]; // [esp+60h] [ebp-10h] BYREF

  if ( !arg0 ) /*0x6d2b6f*/
  {
    if ( *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] ) /*0x6d2b7d*/
    {
      v6 = *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] - 1; /*0x6d2b83*/
      v24 = (IUnknown *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] - 1); /*0x6d2b86*/
      if ( *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] - 1 >= 0 ) /*0x6d2b8a*/
      {
        v7 = 20 * v6; /*0x6d2b93*/
        do /*0x6d2cfd*/
        {
          *(_DWORD *)&aP1.__pad_0[8] = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + v7); /*0x6d2ba2*/
          *(_DWORD *)&aP1.__pad_0[12] = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + v7 + 4); /*0x6d2ba9*/
          aP1.uniqueId = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + v7 + 8); /*0x6d2bb0*/
          aP1.abstractFlags = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + v7 + 12); /*0x6d2bbd*/
          *(_DWORD *)&aP1.__pad_0[8] += aP2; /*0x6d2bc7*/
          *(_DWORD *)&aP1.__pad_0[12] += a4; /*0x6d2bd0*/
          v26 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x6d2bda*/
          v29 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x6d2bde*/
          v25 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x6d2be7*/
          v28 = *(ObjectClass **)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x6d2beb*/
          v23 = *(AbstractClass **)&MEMORY[0x87F8E4].__pad_5568[8544]; /*0x6d2bf5*/
          v22 = *(AbstractClass **)&MEMORY[0x87F8E4].__pad_5568[8540]; /*0x6d2bfa*/
          v8 = (IUnknown *)Coord2D::Sub(&v28, &aP1, (IUnknown *)&v25); /*0x6d2c05*/
          v9 = Rect::Construct(v32, v8, v22, v23); /*0x6d2c0f*/
          aP1.nextArrayIndex = *(_DWORD *)v9->__pad_0; /*0x6d2c18*/
          aP1.referenceCount = *(_DWORD *)&v9->__pad_0[4]; /*0x6d2c21*/
          aP1.NeedsSaveOrLink = *(void **)&v9->__pad_0[8]; /*0x6d2c28*/
          v31 = *(_DWORD *)&v9->__pad_0[12]; /*0x6d2c37*/
          v10 = ClipRectIntersection(v33, &aP1.nextArrayIndex, (int *)&aP1.__pad_0[8], 0, 0); /*0x6d2c40*/
          *(_DWORD *)&aP1.__pad_0[8] = *v10; /*0x6d2c49*/
          *(_DWORD *)&aP1.__pad_0[12] = v10[1]; /*0x6d2c50*/
          aP1.uniqueId = v10[2]; /*0x6d2c57*/
          aP1.abstractFlags = v10[3]; /*0x6d2c64*/
          v11 = (_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + v7); /*0x6d2c68*/
          *v11 = *(_DWORD *)&aP1.__pad_0[8]; /*0x6d2c6b*/
          v11[1] = *(_DWORD *)&aP1.__pad_0[12]; /*0x6d2c72*/
          v11[2] = aP1.uniqueId; /*0x6d2c79*/
          v11[3] = aP1.abstractFlags; /*0x6d2c80*/
          if ( aP1.uniqueId > 0 && aP1.abstractFlags > 0 ) /*0x6d2c91*/
          {
            TacticalMap::FillScanlinesOpaque( /*0x6d2cee*/
              *(int *)&MEMORY[0x87F8E4].__pad_5568[10232],
              *(int *)&aP1.__pad_0[8],
              *(int *)&aP1.__pad_0[12],
              aP1.uniqueId,
              aP1.abstractFlags);
          }
          else if ( v6 < *(int *)&MEMORY[0xB077F8].__pad_566C[36] ) /*0x6d2c9a*/
          {
            v12 = v6; /*0x6d2c9d*/
            --*(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36]; /*0x6d2ca1*/
            if ( v6 < *(int *)&MEMORY[0xB077F8].__pad_566C[36] ) /*0x6d2ca6*/
            {
              v13 = v7; /*0x6d2ca8*/
              do /*0x6d2cc8*/
              {
                ++v12; /*0x6d2cb0*/
                v14 = (const void *)(v13 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + 20); /*0x6d2cb1*/
                v15 = (void *)(v13 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24]); /*0x6d2cb5*/
                v13 += 20; /*0x6d2cbd*/
                qmemcpy(v15, v14, 0x14u); /*0x6d2cc0*/
              }
              while ( v12 < *(int *)&MEMORY[0xB077F8].__pad_566C[36] ); /*0x6d2cc8*/
              v6 = (int)v24; /*0x6d2cca*/
            }
          }
          --v6; /*0x6d2cf3*/
          v7 -= 20; /*0x6d2cf4*/
          v24 = (IUnknown *)v6; /*0x6d2cf9*/
        }
        while ( v6 >= 0 ); /*0x6d2cfd*/
      }
    }
  }
  result = this->q0E0; /*0x6d2d03*/
  if ( result > 0 && !arg0 ) /*0x6d2d17*/
  {
    v17 = 0; /*0x6d2d1d*/
    v18 = (ObjectClass *)(this + 57); /*0x6d2d27*/
    do /*0x6d2dc2*/
    {
      Coords = (ObjectClass *)CellClass::GetCoords(*(_DWORD **)v18->__pad_0, (int *)&aP1.__pad_0[8]); /*0x6d2d34*/
      v25 = *(_DWORD *)Coords->__pad_0; /*0x6d2d3b*/
      v26 = *(_DWORD *)&Coords->__pad_0[4]; /*0x6d2d47*/
      v27 = 0; /*0x6d2d59*/
      v20 = Coord::To_ScreenRaw((int *)aP1.__pad_0, &v25); /*0x6d2d61*/
      v21 = v20[1] - this->q0B4; /*0x6d2d81*/
      v28 = (ObjectClass *)(*v20 - this->q0B0 + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532] - 30); /*0x6d2d8d*/
      v29 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536] + v21 - 15; /*0x6d2d9c*/
      if ( g_hWnd ) /*0x6d2da0*/
        DSurface::Process(*(_DWORD *)v18->__pad_0, (IUnknown *)&v28, (int *)a2); /*0x6d2db1*/
      result = this->q0E0; /*0x6d2db6*/
      ++v17; /*0x6d2dbc*/
      v18 = (ObjectClass *)((char *)v18 + 4); /*0x6d2dbd*/
    }
    while ( v17 < result ); /*0x6d2dc2*/
  }
  return result; /*0x6d2dc8*/
}


// ==== 0x006D2DE0  TacticalClass::RenderIsometricOverlay  this=AbstractClass  sig=csp ====
signed int __thiscall TacticalClass::RenderIsometricOverlay(_DWORD *this, IUnknown *aP1, IUnknown *aP2, char a4)
{
  char v4; // bl
  _DWORD *v6; // ebp
  int *v7; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  int *v11; // eax
  signed int result; // eax
  int v13; // ebx
  int v14; // edi
  IUnknown *v15; // ecx
  int v16; // ecx
  AbstractClass v17; // [esp+Ch] [ebp-58h] BYREF
  int v18; // [esp+30h] [ebp-34h]
  int v19[8]; // [esp+34h] [ebp-30h] BYREF
  _DWORD v20[4]; // [esp+54h] [ebp-10h] BYREF
  IUnknown *aP1a; // [esp+68h] [ebp+4h]

  v4 = a4; /*0x6d2de4*/
  if ( a4 ) /*0x6d2dee*/
  {
    TacticalClass::RenderIsometric( /*0x6d2dfa*/
      (int)this,
      (Tactical *)&MEMORY[0x87F8E4].__pad_5568[8532],
      (AbstractClass *)&MEMORY[0x87F8E4].__pad_5568[8532]);
  }
  else
  {
    if ( aP1->field_8 > 0 && aP1->field_C > 0 ) /*0x6d2e0c*/
      TacticalClass::RenderIsometric((int)this, (Tactical *)aP1, (AbstractClass *)aP1); /*0x6d2e12*/
    if ( aP2->field_8 > 0 && aP2->field_C > 0 ) /*0x6d2e27*/
      TacticalClass::RenderIsometric((int)this, (Tactical *)aP2, (AbstractClass *)aP2); /*0x6d2e2d*/
  }
  if ( (int)this->q0E0 > 0 && !a4 ) /*0x6d2e42*/
  {
    aP1a = 0; /*0x6d2e4a*/
    v6 = this + 57; /*0x6d2e5e*/
    do /*0x6d2f79*/
    {
      Coord::Subtract( /*0x6d2eaf*/
        &v17.__pad_0[12],
        (IUnknown *)(((((__int16)*(_DWORD *)(*v6 + 36) << 8) + 128) / 256) << 8),
        (IUnknown *)(((((__int16)HIWORD(*(_DWORD *)(*v6 + 36)) << 8) + 128) / 256) << 8),
        0);
      v17.nextArrayIndex = *(_DWORD *)&v17.__pad_0[12]; /*0x6d2ec0*/
      v17.referenceCount = v17.uniqueId; /*0x6d2ec4*/
      v17.NeedsSaveOrLink = (void *)v17.abstractFlags; /*0x6d2ed4*/
      v7 = Coord::To_ScreenRaw((int *)&v17.__pad_0[4], &v17.nextArrayIndex); /*0x6d2ed8*/
      v8 = this->q0B4; /*0x6d2ee5*/
      v9 = *v7 - this->q0B0; /*0x6d2eeb*/
      v10 = v7[1]; /*0x6d2eed*/
      v19[0] = v9 - 30; /*0x6d2ef3*/
      v19[3] = 30; /*0x6d2efc*/
      v19[1] = v10 - v8 + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x6d2f16*/
      v19[2] = 60; /*0x6d2f24*/
      v11 = ClipRectIntersection(v20, (int *)&MEMORY[0x87F8E4].__pad_5568[8532], v19, 0, 0); /*0x6d2f28*/
      v19[4] = *v11; /*0x6d2f31*/
      v19[5] = v11[1]; /*0x6d2f38*/
      if ( v11[2] > 0 && v11[3] > 0 ) /*0x6d2f48*/
      {
        *(_DWORD *)v17.__pad_0 = *(_DWORD *)(*v6 + 36); /*0x6d2f5c*/
        TacticalMapClass::ProcessCell(this, &v17, (int)v19); /*0x6d2f60*/
      }
      ++v6; /*0x6d2f70*/
      aP1a = (IUnknown *)((char *)aP1a + 1); /*0x6d2f75*/
    }
    while ( (int)aP1a < this->q0E0 ); /*0x6d2f79*/
    v4 = a4; /*0x6d2f7f*/
  }
  result = *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36]; /*0x6d2f84*/
  if ( *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] ) /*0x6d2f8b*/
  {
    if ( !v4 ) /*0x6d2f93*/
    {
      result = *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] - 1; /*0x6d2f99*/
      if ( *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] - 1 >= 0 ) /*0x6d2f9c*/
      {
        v13 = *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36]; /*0x6d2fa5*/
        v14 = 20 * result; /*0x6d2fa8*/
        do /*0x6d302e*/
        {
          v17.nextArrayIndex = *(_DWORD *)(v14 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24]); /*0x6d2fbc*/
          v17.referenceCount = *(_DWORD *)(v14 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + 4); /*0x6d2fc3*/
          v17.NeedsSaveOrLink = *(void **)(v14 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + 8); /*0x6d2fca*/
          v18 = *(_DWORD *)(v14 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + 12); /*0x6d2fdd*/
          v17.referenceCount += *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x6d2feb*/
          v15 = (IUnknown *)ClipRectIntersection( /*0x6d2ff4*/
                              v20,
                              (int *)&MEMORY[0x87F8E4].__pad_5568[8532],
                              &v17.nextArrayIndex,
                              0,
                              0);
          v17.nextArrayIndex = v15->field_0; /*0x6d2ff8*/
          v17.referenceCount = v15->field_4; /*0x6d2fff*/
          result = v15->field_8; /*0x6d3003*/
          v17.NeedsSaveOrLink = (void *)result; /*0x6d3006*/
          v16 = v15->field_C; /*0x6d300a*/
          v18 = v16; /*0x6d300f*/
          if ( result > 0 && v16 > 0 ) /*0x6d3017*/
            result = TacticalClass::RenderIsometric( /*0x6d3025*/
                       (int)this,
                       (Tactical *)&v17.nextArrayIndex,
                       (AbstractClass *)&v17.nextArrayIndex);
          v14 -= 20; /*0x6d302a*/
          --v13; /*0x6d302d*/
        }
        while ( v13 ); /*0x6d302e*/
      }
    }
  }
  return result; /*0x6d3034*/
}


// ==== 0x006D3040  TacticalClass::DrawTerrainPartial  this=AbstractClass  sig=csp ====
signed int __thiscall TacticalClass::DrawTerrainPartial(_DWORD *this, int *a2, int *a3, char a4)
{
  _DWORD *v5; // ebx
  int *v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int *v10; // eax
  int v11; // ecx
  signed int result; // eax
  int v13; // ebx
  int v14; // edi
  int *v15; // ecx
  int v16; // ecx
  int v17; // [esp+Ch] [ebp-54h] BYREF
  _DWORD v18[3]; // [esp+14h] [ebp-4Ch] BYREF
  int v19; // [esp+20h] [ebp-40h] BYREF
  int v20; // [esp+24h] [ebp-3Ch]
  signed int v21; // [esp+28h] [ebp-38h]
  int v22; // [esp+2Ch] [ebp-34h]
  int v23[4]; // [esp+30h] [ebp-30h] BYREF
  int v24[2]; // [esp+40h] [ebp-20h] BYREF
  int v25; // [esp+48h] [ebp-18h]
  int v26; // [esp+4Ch] [ebp-14h]
  _DWORD v27[4]; // [esp+50h] [ebp-10h] BYREF
  int v28; // [esp+6Ch] [ebp+Ch]

  if ( a4 ) /*0x6d304e*/
  {
    TacticalClass::DrawTerrain((int)this, &MEMORY[0x886FA0], &MEMORY[0x886FA0]); /*0x6d305a*/
  }
  else
  {
    if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d306c*/
      TacticalClass::DrawTerrain((int)this, a2, a2); /*0x6d3072*/
    if ( a3[2] > 0 && a3[3] > 0 ) /*0x6d3087*/
      TacticalClass::DrawTerrain((int)this, a3, a3); /*0x6d308d*/
  }
  if ( (int)this->q0E0 > 0 && !a4 ) /*0x6d30a2*/
  {
    v28 = 0; /*0x6d30aa*/
    v5 = this + 57; /*0x6d30be*/
    do /*0x6d31d6*/
    {
      Coord::Subtract( /*0x6d310e*/
        v18,
        ((((__int16)*(_DWORD *)(*v5 + 36) << 8) + 128) / 256) << 8,
        ((((__int16)HIWORD(*(_DWORD *)(*v5 + 36)) << 8) + 128) / 256) << 8,
        0);
      v19 = v18[0]; /*0x6d311f*/
      v20 = v18[1]; /*0x6d3123*/
      v21 = v18[2]; /*0x6d3133*/
      v6 = Coord::To_ScreenRaw(&v17, &v19); /*0x6d3137*/
      v7 = this->q0B4; /*0x6d3144*/
      v8 = *v6 - this->q0B0; /*0x6d314a*/
      v9 = v6[1]; /*0x6d314c*/
      v23[0] = v8 - 30; /*0x6d3152*/
      v23[3] = 30; /*0x6d315b*/
      v23[1] = v9 - v7 + MEMORY[0x886FA4]; /*0x6d3175*/
      v23[2] = 60; /*0x6d3183*/
      v10 = ClipRectIntersection(v27, &MEMORY[0x886FA0], v23, 0, 0); /*0x6d3187*/
      v24[0] = *v10; /*0x6d3190*/
      v24[1] = v10[1]; /*0x6d3197*/
      v25 = v10[2]; /*0x6d319e*/
      v11 = v10[3]; /*0x6d31a2*/
      v26 = v11; /*0x6d31a7*/
      if ( v25 > 0 && v11 > 0 ) /*0x6d31af*/
        TacticalClass::DrawTerrain((int)this, v24, v24); /*0x6d31bd*/
      ++v5; /*0x6d31cd*/
      ++v28; /*0x6d31d2*/
    }
    while ( v28 < this->q0E0 ); /*0x6d31d6*/
  }
  result = MEMORY[0xB0CE88]; /*0x6d31dd*/
  if ( MEMORY[0xB0CE88] ) /*0x6d31e4*/
  {
    result = MEMORY[0xB0CE88] - 1; /*0x6d31ea*/
    if ( MEMORY[0xB0CE88] - 1 >= 0 ) /*0x6d31ed*/
    {
      v13 = MEMORY[0xB0CE88]; /*0x6d31f6*/
      v14 = 20 * result; /*0x6d31f9*/
      do /*0x6d327d*/
      {
        v19 = *(_DWORD *)((char *)MEMORY[0xB0CE7C] + v14); /*0x6d320b*/
        v20 = *(_DWORD *)((char *)MEMORY[0xB0CE7C] + v14 + 4); /*0x6d3212*/
        v21 = *(_DWORD *)((char *)MEMORY[0xB0CE7C] + v14 + 8); /*0x6d3219*/
        v22 = *(_DWORD *)((char *)MEMORY[0xB0CE7C] + v14 + 12); /*0x6d322c*/
        v20 += MEMORY[0x886FA4]; /*0x6d323a*/
        v15 = ClipRectIntersection(v27, &MEMORY[0x886FA0], &v19, 0, 0); /*0x6d3243*/
        v19 = *v15; /*0x6d3247*/
        v20 = v15[1]; /*0x6d324e*/
        result = v15[2]; /*0x6d3252*/
        v21 = result; /*0x6d3255*/
        v16 = v15[3]; /*0x6d3259*/
        v22 = v16; /*0x6d325e*/
        if ( result > 0 && v16 > 0 ) /*0x6d3266*/
          result = TacticalClass::DrawTerrain((int)this, &v19, &v19); /*0x6d3274*/
        v14 -= 20; /*0x6d3279*/
        --v13; /*0x6d327c*/
      }
      while ( v13 ); /*0x6d327d*/
    }
  }
  return result; /*0x6d3283*/
}


// ==== 0x006D3290  ObjectClass::DrawBuildingAnimFrame  this=AbstractClass  sig=csp ====
int __thiscall DrawBuildingAnimFrame(_DWORD *this, AbstractClass *aP1, int *a2, char a4)
{
  int v5; // ebp
  _DWORD *v6; // ebx
  int *v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  int result; // eax
  int v12; // ebx
  int v13; // esi
  _DWORD *v14; // ecx
  int v15; // ecx
  int v16; // [esp+Ch] [ebp-28h] BYREF
  _BYTE v17[32]; // [esp+14h] [ebp-20h] BYREF
  int v18; // [esp+40h] [ebp+Ch]

  if ( a4 ) /*0x6d329e*/
  {
    TacticalClass::DrawBuildingsInView((int)this, (AbstractClass *)&MEMORY[0x87F8E4].__pad_5568[8532]); /*0x6d32a5*/
  }
  else
  {
    if ( *(int *)&aP1->__pad_0[8] > 0 && *(int *)&aP1->__pad_0[12] > 0 ) /*0x6d32b7*/
      TacticalClass::DrawBuildingsInView((int)this, aP1); /*0x6d32bc*/
    if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d32d1*/
      TacticalClass::DrawBuildingsInView((int)this, (AbstractClass *)a2); /*0x6d32d6*/
  }
  if ( (int)this->q0E0 > 0 && !a4 ) /*0x6d32ec*/
  {
    v5 = 0; /*0x6d32f2*/
    v6 = this + 57; /*0x6d32fc*/
    do /*0x6d33bb*/
    {
      v18 = *(_DWORD *)(*v6 + 36); /*0x6d3307*/
      *(_DWORD *)&v17[4] = (((SHIWORD(v18) << 8) + 128) / 256) << 8; /*0x6d334b*/
      *(_DWORD *)v17 = ((((__int16)v18 << 8) + 128) / 256) << 8; /*0x6d3358*/
      *(_DWORD *)&v17[8] = 0; /*0x6d335c*/
      v7 = Coord::To_ScreenRaw(&v16, v17); /*0x6d3360*/
      v8 = *v7 - this->q0B0; /*0x6d336d*/
      v9 = this->q0B4; /*0x6d336f*/
      v10 = v7[1]; /*0x6d3375*/
      *(_DWORD *)&v17[16] = v8 - 30; /*0x6d337b*/
      *(_DWORD *)&v17[24] = 60; /*0x6d3384*/
      *(_DWORD *)&v17[28] = 30; /*0x6d338d*/
      *(_DWORD *)&v17[20] = v10 - v9 + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x6d33a3*/
      TacticalClass::DrawBuildingsInView((int)this, (AbstractClass *)&v17[16]); /*0x6d33aa*/
      ++v5; /*0x6d33b5*/
      ++v6; /*0x6d33b6*/
    }
    while ( v5 < this->q0E0 ); /*0x6d33bb*/
  }
  result = *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36]; /*0x6d33c1*/
  if ( *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] ) /*0x6d33c9*/
  {
    result = *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] - 1; /*0x6d33cf*/
    if ( *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] - 1 >= 0 ) /*0x6d33d2*/
    {
      v12 = *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36]; /*0x6d33db*/
      v13 = 20 * result; /*0x6d33de*/
      do /*0x6d345d*/
      {
        *(_DWORD *)v17 = *(_DWORD *)(v13 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24]); /*0x6d33f0*/
        *(_DWORD *)&v17[4] = *(_DWORD *)(v13 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + 4); /*0x6d33f7*/
        *(_DWORD *)&v17[8] = *(_DWORD *)(v13 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + 8); /*0x6d33fe*/
        *(_DWORD *)&v17[12] = *(_DWORD *)(v13 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + 12); /*0x6d3411*/
        *(_DWORD *)&v17[4] += *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x6d341f*/
        v14 = ClipRectIntersection(&v17[16], (int *)&MEMORY[0x87F8E4].__pad_5568[8532], (int *)v17, 0, 0); /*0x6d3428*/
        *(_DWORD *)v17 = *v14; /*0x6d342c*/
        *(_DWORD *)&v17[4] = v14[1]; /*0x6d3433*/
        result = v14[2]; /*0x6d3437*/
        *(_DWORD *)&v17[8] = result; /*0x6d343a*/
        v15 = v14[3]; /*0x6d343e*/
        *(_DWORD *)&v17[12] = v15; /*0x6d3443*/
        if ( result > 0 && v15 > 0 ) /*0x6d344b*/
          result = (int)TacticalClass::DrawBuildingsInView((int)this, (AbstractClass *)v17); /*0x6d3454*/
        v13 -= 20; /*0x6d3459*/
        --v12; /*0x6d345c*/
      }
      while ( v12 ); /*0x6d345d*/
    }
  }
  return result; /*0x6d345f*/
}


// ==== 0x006D3470  ObjectClass::DrawBuildingShadow  this=AbstractClass  sig=csp ====
int __thiscall DrawBuildingShadow(_DWORD *this, IUnknown *aP1, AbstractClass *aP2, char a4)
{
  IUnknown *v5; // ecx
  int v6; // ebp
  _DWORD *v7; // edi
  int *v8; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int result; // eax
  int v13; // edi
  int v14; // esi
  int *v15; // ecx
  int v16; // ecx
  int v17; // [esp+10h] [ebp-34h] BYREF
  _DWORD v18[3]; // [esp+18h] [ebp-2Ch] BYREF
  int v19; // [esp+24h] [ebp-20h] BYREF
  int v20; // [esp+28h] [ebp-1Ch]
  int v21; // [esp+2Ch] [ebp-18h]
  int v22; // [esp+30h] [ebp-14h]
  int v23[4]; // [esp+34h] [ebp-10h] BYREF

  if ( a4 ) /*0x6d347f*/
  {
    v5 = (IUnknown *)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x6d3481*/
LABEL_8:
    TacticalClass::DrawBuildings(&v5->field_0); /*0x6d34b1*/
    goto LABEL_9; /*0x6d34b1*/
  }
  if ( aP1->field_8 > 0 && aP1->field_C > 0 ) /*0x6d3498*/
    TacticalClass::DrawBuildings(&aP1->field_0); /*0x6d349a*/
  v5 = (IUnknown *)aP2; /*0x6d349f*/
  if ( *(int *)&aP2->__pad_0[8] > 0 && *(int *)&aP2->__pad_0[12] > 0 ) /*0x6d34af*/
    goto LABEL_8; /*0x6d34af*/
LABEL_9:
  if ( (int)this->q0E0 > 0 && !a4 ) /*0x6d34c6*/
  {
    v6 = 0; /*0x6d34cc*/
    v7 = this + 57; /*0x6d34d6*/
    do /*0x6d35a7*/
    {
      Coord::Subtract( /*0x6d3526*/
        v18,
        (IUnknown *)(((((__int16)*(_DWORD *)(*v7 + 36) << 8) + 128) / 256) << 8),
        (IUnknown *)(((((__int16)HIWORD(*(_DWORD *)(*v7 + 36)) << 8) + 128) / 256) << 8),
        0);
      v19 = v18[0]; /*0x6d3537*/
      v20 = v18[1]; /*0x6d353b*/
      v21 = v18[2]; /*0x6d354b*/
      v8 = Coord::To_ScreenRaw(&v17, &v19); /*0x6d354f*/
      v9 = *v8 - this->q0B0; /*0x6d355c*/
      v10 = this->q0B4; /*0x6d355e*/
      v11 = v8[1]; /*0x6d3564*/
      v23[0] = v9 - 30; /*0x6d356a*/
      v23[2] = 60; /*0x6d3573*/
      v23[3] = 30; /*0x6d357c*/
      v23[1] = v11 - v10 + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x6d358e*/
      TacticalClass::DrawBuildings(v23); /*0x6d3596*/
      ++v6; /*0x6d35a1*/
      ++v7; /*0x6d35a2*/
    }
    while ( v6 < this->q0E0 ); /*0x6d35a7*/
  }
  result = *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36]; /*0x6d35ad*/
  if ( *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] ) /*0x6d35b4*/
  {
    result = *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] - 1; /*0x6d35ba*/
    if ( *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] - 1 >= 0 ) /*0x6d35bd*/
    {
      v13 = *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36]; /*0x6d35c6*/
      v14 = 20 * result; /*0x6d35c9*/
      do /*0x6d3647*/
      {
        v19 = *(_DWORD *)(v14 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24]); /*0x6d35dd*/
        v20 = *(_DWORD *)(v14 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + 4); /*0x6d35e4*/
        v21 = *(_DWORD *)(v14 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + 8); /*0x6d35eb*/
        v22 = *(_DWORD *)(v14 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + 12); /*0x6d35f7*/
        v20 += *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x6d360c*/
        v15 = ClipRectIntersection(v23, (int *)&MEMORY[0x87F8E4].__pad_5568[8532], &v19, 0, 0); /*0x6d3615*/
        v19 = *v15; /*0x6d3619*/
        v20 = v15[1]; /*0x6d3620*/
        result = v15[2]; /*0x6d3624*/
        v21 = result; /*0x6d3627*/
        v16 = v15[3]; /*0x6d362b*/
        v22 = v16; /*0x6d3630*/
        if ( result > 0 && v16 > 0 ) /*0x6d3638*/
          result = (int)TacticalClass::DrawBuildings(&v19); /*0x6d363e*/
        v14 -= 20; /*0x6d3643*/
        --v13; /*0x6d3646*/
      }
      while ( v13 ); /*0x6d3647*/
    }
  }
  return result; /*0x6d3649*/
}


// ==== 0x006D3660  TacticalClass::CalcAllDrawPositions  this=AbstractClass  sig=csp ====
int __thiscall TacticalClass::CalcAllDrawPositions(
        _DWORD *this,
        AbstractClass *aP1,
        BuildingTypeClass *aP2,
        int *a3,
        char a5)
{
  int v6; // ebx
  int *v7; // ebp
  ObjectClass *Coords; // eax
  int *v9; // eax
  int v10; // ecx
  int v11; // esi
  int result; // eax
  int v13; // ecx
  int v14; // ebp
  int v15; // edx
  int v16; // ebx
  ObjectClass **v17; // eax
  int v18[2]; // [esp+10h] [ebp-38h] BYREF
  int v19[4]; // [esp+18h] [ebp-30h] BYREF
  ObjectClass *v20; // [esp+28h] [ebp-20h] BYREF
  ObjectClass *v21; // [esp+2Ch] [ebp-1Ch]
  ObjectClass *v22; // [esp+30h] [ebp-18h]
  ObjectClass *v23; // [esp+34h] [ebp-14h]
  int v24[4]; // [esp+38h] [ebp-10h] BYREF
  int v25; // [esp+58h] [ebp+10h]

  if ( (int)this->q038 <= 0 ) /*0x6d3671*/
  {
    if ( !a5 ) /*0x6d3742*/
      goto LABEL_11; /*0x6d3742*/
LABEL_10:
    TacticalClass::CalcBuildingDrawPos((int)this, (IUnknown *)&MEMORY[0x87F8E4].__pad_5568[8532]); /*0x6d3744*/
    goto LABEL_11; /*0x6d374b*/
  }
  if ( a5 ) /*0x6d367d*/
    goto LABEL_10; /*0x6d367d*/
  v6 = 0; /*0x6d3683*/
  v7 = this + 57; /*0x6d368d*/
  do /*0x6d3734*/
  {
    Coords = (ObjectClass *)CellClass::GetCoords((_DWORD *)*v7, v24); /*0x6d369b*/
    v20 = *(ObjectClass **)Coords->__pad_0; /*0x6d36a2*/
    v21 = *(ObjectClass **)&Coords->__pad_0[4]; /*0x6d36ae*/
    v22 = 0; /*0x6d36c0*/
    v9 = Coord::To_ScreenRaw(v19, &v20); /*0x6d36c8*/
    v10 = v9[1] - this->q0B4; /*0x6d36e8*/
    v18[0] = *v9 - this->q02C + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532] - 30; /*0x6d36f4*/
    v18[1] = v10 + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536] - 15; /*0x6d3703*/
    if ( g_hWnd ) /*0x6d3707*/
      TacticalClass::RenderCellFogOfWar(*v7, (IUnknown *)v18, (Tactical *)a3); /*0x6d3716*/
    UpdateSpotlightsFoo(v18, a3); /*0x6d3723*/
    ++v6; /*0x6d372e*/
    ++v7; /*0x6d372f*/
  }
  while ( v6 < this->q038 ); /*0x6d3734*/
LABEL_11:
  v11 = 0; /*0x6d3750*/
  if ( *(int *)&aP1->__pad_0[8] > 0 && *(int *)&aP1->__pad_0[12] > 0 && !a5 ) /*0x6d3766*/
    TacticalClass::CalcBuildingDrawPos((int)this, (IUnknown *)aP1); /*0x6d376b*/
  if ( *(int *)&aP2->vtable0[8] > 0 && *(int *)&aP2->vtable0[12] > 0 && !a5 ) /*0x6d3784*/
    TacticalClass::CalcBuildingDrawPos((int)this, (IUnknown *)aP2); /*0x6d3789*/
  result = *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36]; /*0x6d378e*/
  v25 = 0; /*0x6d3793*/
  if ( *(int *)&MEMORY[0xB077F8].__pad_566C[36] > 0 ) /*0x6d3799*/
  {
    v13 = *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24]; /*0x6d379f*/
    do /*0x6d3860*/
    {
      v14 = *(_DWORD *)(v11 + v13); /*0x6d37af*/
      v15 = *(_DWORD *)(v11 + v13 + 4) + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x6d37b7*/
      v16 = *(_DWORD *)(v11 + v13 + 8); /*0x6d37b9*/
      v24[3] = *(_DWORD *)(v11 + v13 + 12); /*0x6d37c3*/
      v24[1] = v15; /*0x6d37cf*/
      v24[0] = v14 + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x6d37dc*/
      v24[2] = v16; /*0x6d37e0*/
      v17 = (ObjectClass **)ClipRectIntersection(v19, v24, a3, 0, 0); /*0x6d37e4*/
      v20 = *v17; /*0x6d37ed*/
      v21 = v17[1]; /*0x6d37f4*/
      v22 = v17[2]; /*0x6d37fb*/
      v13 = *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24]; /*0x6d37ff*/
      v23 = v17[3]; /*0x6d3808*/
      if ( *(_BYTE *)(v11 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + 16) ) /*0x6d380c*/
      {
        TacticalClass::FillScanlinesTransparent((int)MEMORY[0x87E8A4], (int)*v17, (int)v17[1], (int)v17[2], (int)v17[3]); /*0x6d3835*/
        TacticalClass::CalcBuildingDrawPos((int)this, (IUnknown *)&v20); /*0x6d3841*/
        v13 = *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24]; /*0x6d3846*/
      }
      result = v25 + 1; /*0x6d3856*/
      v11 += 20; /*0x6d3857*/
      ++v25; /*0x6d385c*/
    }
    while ( v25 < *(int *)&MEMORY[0xB077F8].__pad_566C[36] ); /*0x6d3860*/
  }
  return result; /*0x6d3866*/
}


// ==== 0x006D3870  TacticalClass::ClickFindBuilding  this=AbstractClass  sig=csp ====
int __thiscall TacticalClass::ClickFindBuilding(_DWORD *this, AbstractClass *aP1, int *a2, char a4)
{
  _DWORD *v5; // edi
  int *v6; // eax
  int v7; // ecx
  int v8; // ebx
  int v9; // edi
  int *v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int result; // eax
  int v16; // [esp+10h] [ebp-4Ch]
  int v17; // [esp+18h] [ebp-44h] BYREF
  _DWORD v18[3]; // [esp+20h] [ebp-3Ch] BYREF
  int v19; // [esp+2Ch] [ebp-30h] BYREF
  IUnknown *v20; // [esp+30h] [ebp-2Ch]
  int v21; // [esp+34h] [ebp-28h]
  int v22; // [esp+38h] [ebp-24h]
  int v23; // [esp+3Ch] [ebp-20h] BYREF
  int v24; // [esp+40h] [ebp-1Ch]
  int v25; // [esp+44h] [ebp-18h]
  int v26; // [esp+48h] [ebp-14h]
  int v27; // [esp+4Ch] [ebp-10h] BYREF
  int v28; // [esp+50h] [ebp-Ch]
  int v29; // [esp+54h] [ebp-8h]
  int v30; // [esp+58h] [ebp-4h]

  if ( (int)this->q0E0 > 0 ) /*0x6d3881*/
  {
    v16 = 0; /*0x6d3887*/
    v5 = this + 57; /*0x6d388f*/
    do /*0x6d3982*/
    {
      Coord::Subtract( /*0x6d38df*/
        v18,
        (IUnknown *)(((((__int16)*(_DWORD *)(*v5 + 36) << 8) + 128) / 256) << 8),
        (IUnknown *)(((((__int16)HIWORD(*(_DWORD *)(*v5 + 36)) << 8) + 128) / 256) << 8),
        0);
      v19 = v18[0]; /*0x6d38f0*/
      v20 = (IUnknown *)v18[1]; /*0x6d38f4*/
      v21 = v18[2]; /*0x6d3904*/
      v6 = Coord::To_ScreenRaw(&v17, &v19); /*0x6d3908*/
      v7 = *v6 - this->q0B0 - 30; /*0x6d3928*/
      v24 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536] + v6[1] - this->q0B4; /*0x6d3931*/
      v28 = v24; /*0x6d3935*/
      v23 = v7; /*0x6d3939*/
      v27 = v7; /*0x6d393d*/
      v25 = 60; /*0x6d3959*/
      v26 = 30; /*0x6d395d*/
      v29 = 60; /*0x6d3961*/
      v30 = 30; /*0x6d3965*/
      TacticalClass::FindBuilding(1, &v23, &v27); /*0x6d3969*/
      ++v5; /*0x6d3979*/
      ++v16; /*0x6d397e*/
    }
    while ( v16 < this->q0E0 ); /*0x6d3982*/
  }
  if ( *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] && *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] - 1 >= 0 ) /*0x6d3998*/
  {
    v8 = *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36]; /*0x6d39a1*/
    v9 = 20 * (*(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] - 1); /*0x6d39a4*/
    do /*0x6d3a47*/
    {
      v19 = *(_DWORD *)(v9 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24]); /*0x6d39be*/
      v20 = *(IUnknown **)(v9 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + 4); /*0x6d39c5*/
      v21 = *(_DWORD *)(v9 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + 8); /*0x6d39ce*/
      v22 = *(_DWORD *)(v9 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + 12); /*0x6d39da*/
      v20 = (IUnknown *)((char *)v20 + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]); /*0x6d39e7*/
      v10 = ClipRectIntersection(&v23, (int *)&MEMORY[0x87F8E4].__pad_5568[8532], &v19, 0, 0); /*0x6d39eb*/
      v19 = *v10; /*0x6d39f4*/
      v20 = (IUnknown *)v10[1]; /*0x6d39fb*/
      v21 = v10[2]; /*0x6d3a02*/
      v11 = v10[3]; /*0x6d3a06*/
      v22 = v11; /*0x6d3a0b*/
      if ( v21 > 0 && v11 > 0 ) /*0x6d3a13*/
      {
        v12 = v10[1]; /*0x6d3a17*/
        v27 = *v10; /*0x6d3a1a*/
        v13 = v10[2]; /*0x6d3a1e*/
        v14 = v10[3]; /*0x6d3a21*/
        v28 = v12; /*0x6d3a24*/
        v29 = v13; /*0x6d3a28*/
        v30 = v14; /*0x6d3a3a*/
        TacticalClass::FindBuilding(1, &v19, &v27); /*0x6d3a3e*/
      }
      v9 -= 20; /*0x6d3a43*/
      --v8; /*0x6d3a46*/
    }
    while ( v8 ); /*0x6d3a47*/
  }
  if ( a4 ) /*0x6d3a53*/
    return TacticalClass::FindBuilding( /*0x6d3a63*/
             1,
             (int *)&MEMORY[0x87F8E4].__pad_5568[8532],
             (int *)&MEMORY[0x87F8E4].__pad_5568[8532]);
  if ( *(int *)&aP1->__pad_0[8] > 0 && *(int *)&aP1->__pad_0[12] > 0 ) /*0x6d3a82*/
    TacticalClass::FindBuilding(1, (int *)aP1->__pad_0, (int *)aP1->__pad_0); /*0x6d3a8a*/
  result = (int)a2; /*0x6d3a8f*/
  if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d3a9f*/
    return TacticalClass::FindBuilding(1, a2, a2); /*0x6d3aa7*/
  return result; /*0x6d3a68*/
}


// ==== 0x006D3AC0  TacticalClass::ClickFindOverlay  this=AbstractClass  sig=csp ====
int __thiscall TacticalClass::ClickFindOverlay(_DWORD *this, IUnknown *aP1, int *a2, char a4)
{
  _DWORD *v5; // edi
  int *v6; // eax
  int v7; // ecx
  int v8; // ebx
  int v9; // edi
  int *v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int result; // eax
  int v16; // [esp+10h] [ebp-4Ch]
  int v17; // [esp+18h] [ebp-44h] BYREF
  _DWORD v18[3]; // [esp+20h] [ebp-3Ch] BYREF
  int v19; // [esp+2Ch] [ebp-30h] BYREF
  IUnknown *v20; // [esp+30h] [ebp-2Ch]
  int v21; // [esp+34h] [ebp-28h]
  int v22; // [esp+38h] [ebp-24h]
  int v23; // [esp+3Ch] [ebp-20h] BYREF
  int v24; // [esp+40h] [ebp-1Ch]
  int v25; // [esp+44h] [ebp-18h]
  int v26; // [esp+48h] [ebp-14h]
  int v27; // [esp+4Ch] [ebp-10h] BYREF
  int v28; // [esp+50h] [ebp-Ch]
  int v29; // [esp+54h] [ebp-8h]
  int v30; // [esp+58h] [ebp-4h]

  if ( (int)this->q0E0 > 0 ) /*0x6d3ad1*/
  {
    v16 = 0; /*0x6d3ad7*/
    v5 = this + 57; /*0x6d3adf*/
    do /*0x6d3bd2*/
    {
      Coord::Subtract( /*0x6d3b2f*/
        v18,
        (IUnknown *)(((((__int16)*(_DWORD *)(*v5 + 36) << 8) + 128) / 256) << 8),
        (IUnknown *)(((((__int16)HIWORD(*(_DWORD *)(*v5 + 36)) << 8) + 128) / 256) << 8),
        0);
      v19 = v18[0]; /*0x6d3b40*/
      v20 = (IUnknown *)v18[1]; /*0x6d3b44*/
      v21 = v18[2]; /*0x6d3b54*/
      v6 = Coord::To_ScreenRaw(&v17, &v19); /*0x6d3b58*/
      v7 = *v6 - this->q0B0 - 30; /*0x6d3b78*/
      v24 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536] + v6[1] - this->q0B4; /*0x6d3b81*/
      v28 = v24; /*0x6d3b85*/
      v23 = v7; /*0x6d3b89*/
      v27 = v7; /*0x6d3b8d*/
      v25 = 60; /*0x6d3ba9*/
      v26 = 30; /*0x6d3bad*/
      v29 = 60; /*0x6d3bb1*/
      v30 = 30; /*0x6d3bb5*/
      TacticalClass::FindOverlay(1, &v23, &v27); /*0x6d3bb9*/
      ++v5; /*0x6d3bc9*/
      ++v16; /*0x6d3bce*/
    }
    while ( v16 < this->q0E0 ); /*0x6d3bd2*/
  }
  if ( *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] && *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] - 1 >= 0 ) /*0x6d3be8*/
  {
    v8 = *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36]; /*0x6d3bf1*/
    v9 = 20 * (*(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] - 1); /*0x6d3bf4*/
    do /*0x6d3c97*/
    {
      v19 = *(_DWORD *)(v9 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24]); /*0x6d3c0e*/
      v20 = *(IUnknown **)(v9 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + 4); /*0x6d3c15*/
      v21 = *(_DWORD *)(v9 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + 8); /*0x6d3c1e*/
      v22 = *(_DWORD *)(v9 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + 12); /*0x6d3c2a*/
      v20 = (IUnknown *)((char *)v20 + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]); /*0x6d3c37*/
      v10 = ClipRectIntersection(&v23, (int *)&MEMORY[0x87F8E4].__pad_5568[8532], &v19, 0, 0); /*0x6d3c3b*/
      v19 = *v10; /*0x6d3c44*/
      v20 = (IUnknown *)v10[1]; /*0x6d3c4b*/
      v21 = v10[2]; /*0x6d3c52*/
      v11 = v10[3]; /*0x6d3c56*/
      v22 = v11; /*0x6d3c5b*/
      if ( v21 > 0 && v11 > 0 ) /*0x6d3c63*/
      {
        v12 = v10[1]; /*0x6d3c67*/
        v27 = *v10; /*0x6d3c6a*/
        v13 = v10[2]; /*0x6d3c6e*/
        v14 = v10[3]; /*0x6d3c71*/
        v28 = v12; /*0x6d3c74*/
        v29 = v13; /*0x6d3c78*/
        v30 = v14; /*0x6d3c8a*/
        TacticalClass::FindOverlay(1, &v19, &v27); /*0x6d3c8e*/
      }
      v9 -= 20; /*0x6d3c93*/
      --v8; /*0x6d3c96*/
    }
    while ( v8 ); /*0x6d3c97*/
  }
  if ( a4 ) /*0x6d3ca3*/
    return TacticalClass::FindOverlay( /*0x6d3cb3*/
             1,
             (int *)&MEMORY[0x87F8E4].__pad_5568[8532],
             (int *)&MEMORY[0x87F8E4].__pad_5568[8532]);
  if ( aP1->field_8 > 0 && aP1->field_C > 0 ) /*0x6d3cd2*/
    TacticalClass::FindOverlay(1, &aP1->field_0, &aP1->field_0); /*0x6d3cda*/
  result = (int)a2; /*0x6d3cdf*/
  if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d3cef*/
    return TacticalClass::FindOverlay(1, a2, a2); /*0x6d3cf7*/
  return result; /*0x6d3cb8*/
}


// ==== 0x006D3D10  TacticalMap::Render  this=AbstractClass  sig=csp ====
int __thiscall TacticalMap_RenderAllObjects(int this, int a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // edi
  float *v5; // ebp
  float *v6; // eax
  float *v7; // eax
  int v8; // edi
  float *v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // edi
  int v13; // eax
  int v14; // ebx
  int *v15; // esi
  int v16; // eax
  int v17; // ecx
  _DWORD *v18; // eax
  LPPERSISTSTREAM v19; // edi
  int *v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  _DWORD *v26; // eax
  int v27; // eax
  int *v28; // edx
  int v29; // eax
  int v30; // ecx
  char v31; // al
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  int v37; // ecx
  int *v38; // eax
  LPPERSISTSTREAM v39; // ebx
  int *v40; // edi
  int *v41; // ecx
  int v42; // eax
  int v43; // edx
  int v44; // ecx
  int v45; // kr18_4
  int v46; // eax
  struct IPersistStreamVtbl *lpVtbl; // eax
  int v48; // edx
  int v49; // ecx
  int v50; // ecx
  _BYTE *v51; // ebx
  int *v52; // eax
  LPPERSISTSTREAM v53; // ebp
  int *v54; // edi
  _DWORD *v55; // eax
  int v56; // ecx
  __int64 v57; // rax
  int v58; // esi
  int v59; // eax
  int v60; // esi
  int v61; // eax
  int *v62; // ecx
  int result; // eax
  int v64; // ebx
  int *v65; // eax
  int v66; // esi
  int v67; // edi
  int v68; // esi
  int v69; // eax
  int v70; // edi
  int v71; // esi
  bool v72; // cc
  int v73; // [esp+28h] [ebp-ECh]
  int v74; // [esp+28h] [ebp-ECh]
  int v75; // [esp+28h] [ebp-ECh]
  int v76; // [esp+28h] [ebp-ECh]
  int v77; // [esp+2Ch] [ebp-E8h] BYREF
  int v78; // [esp+30h] [ebp-E4h]
  float v79; // [esp+34h] [ebp-E0h] BYREF
  float v80; // [esp+38h] [ebp-DCh]
  int v81; // [esp+3Ch] [ebp-D8h]
  int *v82; // [esp+40h] [ebp-D4h]
  int v83; // [esp+44h] [ebp-D0h]
  int v84; // [esp+48h] [ebp-CCh]
  int v85; // [esp+4Ch] [ebp-C8h]
  int v86; // [esp+50h] [ebp-C4h] BYREF
  int v87; // [esp+54h] [ebp-C0h]
  int v88; // [esp+58h] [ebp-BCh]
  int v89; // [esp+5Ch] [ebp-B8h] BYREF
  int v90; // [esp+60h] [ebp-B4h]
  int v91; // [esp+64h] [ebp-B0h] BYREF
  int v92; // [esp+68h] [ebp-ACh]
  int v93; // [esp+74h] [ebp-A0h]
  int v94; // [esp+78h] [ebp-9Ch]
  float v95[4]; // [esp+7Ch] [ebp-98h] BYREF
  int v96; // [esp+8Ch] [ebp-88h]
  _DWORD v97[2]; // [esp+90h] [ebp-84h] BYREF
  _DWORD v98[4]; // [esp+98h] [ebp-7Ch] BYREF
  int v99[3]; // [esp+A8h] [ebp-6Ch] BYREF
  int v100; // [esp+B4h] [ebp-60h]
  _BYTE v101[12]; // [esp+B8h] [ebp-5Ch] BYREF
  _BYTE v102[12]; // [esp+C4h] [ebp-50h] BYREF
  int v103; // [esp+D0h] [ebp-44h] BYREF
  char v104[12]; // [esp+D8h] [ebp-3Ch] BYREF
  char v105[12]; // [esp+E4h] [ebp-30h] BYREF
  char v106[12]; // [esp+F0h] [ebp-24h] BYREF
  char v107[12]; // [esp+FCh] [ebp-18h] BYREF
  char v108[12]; // [esp+108h] [ebp-Ch] BYREF

  v2 = MEMORY[0x886FA8]; /*0x6d8db7*/
  v3 = *(_DWORD *)(this + 176); /*0x6d8dc4*/
  v4 = *(_DWORD *)(this + 180); /*0x6d8dd5*/
  v77 = v3 + MEMORY[0x886FA8] / 2; /*0x6d8ddb*/
  v73 = MEMORY[0x886FAC]; /*0x6d8de5*/
  v5 = (float *)(this + 3556); /*0x6d8deb*/
  v79 = (float)v77; /*0x6d8df1*/
  v78 = v4 - MEMORY[0x886FAC]; /*0x6d8df5*/
  v81 = 0; /*0x6d8e08*/
  v80 = (float)(v4 - MEMORY[0x886FAC]); /*0x6d8e10*/
  v6 = TransformMatrix3x4Point(v95, (float *)(this + 3556), &v79); /*0x6d8e14*/
  v79 = *v6; /*0x6d8e1b*/
  v80 = v6[1]; /*0x6d8e26*/
  v81 = *((_DWORD *)v6 + 2); /*0x6d8e2d*/
  v83 = Math::RoundToInt(v79); /*0x6d8e3a*/
  v84 = Math::RoundToInt(v80); /*0x6d8e43*/
  v77 = v3 + 2 * v2; /*0x6d8e4a*/
  v79 = (float)v77; /*0x6d8e62*/
  v74 = v73 / 2 + v4; /*0x6d8e74*/
  v78 = v74; /*0x6d8e66*/
  v81 = 0; /*0x6d8e78*/
  v80 = (float)v74; /*0x6d8e80*/
  v7 = TransformMatrix3x4Point(v95, v5, &v79); /*0x6d8e84*/
  v79 = *v7; /*0x6d8e8b*/
  v80 = v7[1]; /*0x6d8e96*/
  v81 = *((_DWORD *)v7 + 2); /*0x6d8e9d*/
  v8 = Math::RoundToInt(v79); /*0x6d8ea8*/
  v77 = v3 - v2; /*0x6d8eae*/
  v78 = v74; /*0x6d8eb6*/
  v79 = (float)(v3 - v2); /*0x6d8eba*/
  v80 = (float)v74; /*0x6d8ecd*/
  v81 = 0; /*0x6d8ed1*/
  v9 = TransformMatrix3x4Point(v95, v5, &v79); /*0x6d8ed9*/
  v79 = *v9; /*0x6d8ee0*/
  v80 = v9[1]; /*0x6d8ee7*/
  v81 = *((_DWORD *)v9 + 2); /*0x6d8ef2*/
  v10 = Math::RoundToInt(v80); /*0x6d8ef6*/
  v11 = v83; /*0x6d8efb*/
  v93 = 2 * (v8 - v83); /*0x6d8f03*/
  v12 = v84; /*0x6d8f07*/
  v94 = 2 * (v10 - v84); /*0x6d8f0f*/
  v13 = 0; /*0x6d8f13*/
  v82 = 0; /*0x6d8f15*/
  do /*0x6d95a9*/
  {
    v85 = 0; /*0x6d8f1c*/
    v14 = 24 * v13; /*0x6d8f24*/
    v75 = 24 * v13; /*0x6d8f27*/
    if ( MEMORY[0x8A0370][6 * v13] > 0 ) /*0x6d8f33*/
    {
      while ( 1 ) /*0x6d8f43*/
      {
        v15 = *(int **)(*(int *)((char *)MEMORY[0x8A0364] + v14) + 4 * v85); /*0x6d8f43*/
        *((_BYTE *)v15 + 153) = 0; /*0x6d8f48*/
        if ( v15 ) /*0x6d8f4f*/
        {
          if ( (v15[5] & 4) != 0 ) /*0x6d8f64*/
          {
            v16 = v15[39]; /*0x6d8f72*/
            v86 = v16; /*0x6d8f74*/
            v17 = v15[40]; /*0x6d8f7a*/
            v87 = v17; /*0x6d8f7d*/
            v88 = v15[41]; /*0x6d8f84*/
            if ( v16 < v11 ) /*0x6d8f88*/
              goto LABEL_53; /*0x6d8f88*/
            if ( v16 >= v11 + v93 ) /*0x6d8f96*/
              goto LABEL_53; /*0x6d8f96*/
            if ( v17 < v12 ) /*0x6d8f9e*/
              goto LABEL_53; /*0x6d8f9e*/
            if ( v17 >= v12 + v94 ) /*0x6d8fac*/
              goto LABEL_53; /*0x6d8fac*/
            (*(void (__thiscall **)(int *, char *, _DWORD))(*v15 + 76))(v15, v107, 0); /*0x6d8fc0*/
            if ( (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) != 0 ) /*0x6d8fce*/
            {
              if ( Game::Stub3((int)&v86) ) /*0x6d8fda*/
                goto LABEL_53; /*0x6d8fe1*/
            }
            v18 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(*v15 + 72))(v15, v104); /*0x6d8ff3*/
            v19 = MEMORY[0x887324]; /*0x6d8ff6*/
            v20 = Coord::To_ScreenRaw(&v103, v18); /*0x6d9007*/
            v77 = *v20; /*0x6d9010*/
            v78 = v20[1]; /*0x6d9017*/
            v21 = v78 - (unsigned int)v19[45].__tail_0; /*0x6d9029*/
            v77 -= (int)v19[44].__tail_0; /*0x6d9030*/
            v78 = v21; /*0x6d9034*/
            if ( v77 >= -360 && v77 <= MEMORY[0xB0CE30] + 360 && v21 >= -180 && v21 <= MEMORY[0xB0CE34] + 180 ) /*0x6d906a*/
            {
              v22 = *v15; /*0x6d9070*/
              *((_BYTE *)v15 + 153) = 1; /*0x6d907e*/
              (*(void (__thiscall **)(int *, int *, int *))(v22 + 268))(v15, &v77, &MEMORY[0x886FA0]); /*0x6d9085*/
              (*(void (__thiscall **)(int *, int *, int, _DWORD))(*v15 + 260))(v15, &MEMORY[0x886FA0], a2, 0); /*0x6d909e*/
            }
            goto LABEL_52; /*0x6d90a4*/
          }
          if ( (v15[5] & 1) != 0 ) /*0x6d90af*/
          {
            v23 = v15[39]; /*0x6d90bd*/
            v86 = v23; /*0x6d90bf*/
            v24 = v15[40]; /*0x6d90c5*/
            v87 = v24; /*0x6d90c8*/
            v88 = v15[41]; /*0x6d90cf*/
            if ( v23 >= v11 && v23 < v11 + v93 && v24 >= v12 && v24 < v12 + v94 ) /*0x6d90f7*/
            {
              v25 = *v15; /*0x6d90fd*/
              *((_BYTE *)v15 + 153) = 1; /*0x6d9111*/
              v26 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(v25 + 72))(v15, v106); /*0x6d9118*/
              if ( Coord::To_Screen(MEMORY[0x887324], v26, v99) ) /*0x6d9122*/
              {
                (*(void (__thiscall **)(int *, int *, int *))(*v15 + 268))(v15, v99, &MEMORY[0x886FA0]); /*0x6d913c*/
                (*(void (__thiscall **)(int *, int *, int *))(*v15 + 272))(v15, v99, &MEMORY[0x886FA0]); /*0x6d9153*/
              }
              (*(void (__thiscall **)(int *, int *, int, int))(*v15 + 260))(v15, &MEMORY[0x886FA0], a2, 1); /*0x6d916c*/
            }
            goto LABEL_53; /*0x6d9172*/
          }
        }
        v27 = (*(int (__thiscall **)(int *))(*v15 + 44))(v15); /*0x6d917b*/
        if ( v27 == 4 ) /*0x6d9181*/
        {
          v28 = (int *)(*(int (__thiscall **)(int *, char *))(*v15 + 72))(v15, v108); /*0x6d9196*/
          v29 = *v28; /*0x6d9198*/
          v86 = v29; /*0x6d919a*/
          v30 = v28[1]; /*0x6d91a0*/
          v87 = v30; /*0x6d91a3*/
          v88 = v28[2]; /*0x6d91aa*/
          if ( v29 >= v11 && v29 < v11 + v93 && v30 >= v12 && v30 < v12 + v94 ) /*0x6d91d2*/
          {
            v31 = *((_BYTE *)v15 + 280); /*0x6d91d8*/
            *((_BYTE *)v15 + 153) = 1; /*0x6d91de*/
            if ( v31 /*0x6d920e*/
              || !*(_BYTE *)(v15[50] + 884)
              || (v32 = (*(int (__thiscall **)(int *, char *))(*v15 + 72))(v15, v105), !Game::Stub3(v32)) )
            {
              (*(void (__thiscall **)(int *, int *, int, _DWORD))(*v15 + 260))(v15, &MEMORY[0x886FA0], a2, 0); /*0x6d921f*/
            }
          }
          goto LABEL_53; /*0x6d921f*/
        }
        if ( v27 == 36 ) /*0x6d9227*/
        {
          if ( *(_BYTE *)(v15[50] + 691) || *((_BYTE *)v15 + 205) ) /*0x6d923d*/
          {
            v33 = v15[39]; /*0x6d9251*/
            v86 = v33; /*0x6d9257*/
            v34 = v15[40]; /*0x6d925d*/
            v87 = v34; /*0x6d9260*/
            v88 = v15[41]; /*0x6d9267*/
            if ( v33 >= v11 && v33 < v11 + v93 && v34 >= v12 && v34 < v12 + v94 && !Game::Stub3((int)&v86) ) /*0x6d929f*/
            {
              v35 = *v15; /*0x6d92ac*/
              *((_BYTE *)v15 + 153) = 1; /*0x6d92ae*/
              (*(void (__thiscall **)(int *, int *, int, _DWORD))(v35 + 260))(v15, &MEMORY[0x886FA0], a2, 0); /*0x6d92b7*/
            }
          }
          goto LABEL_53; /*0x6d92b7*/
        }
        v36 = v15[39]; /*0x6d92c4*/
        v86 = v36; /*0x6d92c6*/
        v37 = v15[40]; /*0x6d92cc*/
        v87 = v37; /*0x6d92cf*/
        v88 = v15[41]; /*0x6d92d6*/
        if ( v36 >= v11 && v36 < v11 + v93 && v37 >= v12 && v37 < v12 + v94 ) /*0x6d92fe*/
        {
          v38 = (int *)(*(int (__thiscall **)(int *, _BYTE *))(*v15 + 72))(v15, v101); /*0x6d9310*/
          v39 = MEMORY[0x887324]; /*0x6d9313*/
          v40 = v38; /*0x6d9319*/
          v41 = IsoCoord::ToPixel(v95, *v38, v38[1]); /*0x6d932b*/
          v42 = *v41; /*0x6d932d*/
          v43 = v41[1]; /*0x6d932f*/
          v44 = v40[2]; /*0x6d9332*/
          v100 = v43; /*0x6d9335*/
          v45 = v42; /*0x6d9343*/
          v46 = ZCoordToScreenY(v44); /*0x6d934a*/
          v91 = v45 / 256; /*0x6d935f*/
          v92 = v100 / 256 - v46; /*0x6d936e*/
          lpVtbl = v39[45].__tail_0; /*0x6d9378*/
          v97[0] = v39[44].__tail_0; /*0x6d9383*/
          v97[1] = lpVtbl; /*0x6d938a*/
          Vector2::Subtract(&v91, v97); /*0x6d9391*/
          if ( v91 >= -360 && v91 <= MEMORY[0xB0CE30] + 360 && v92 >= -180 && v92 <= MEMORY[0xB0CE34] + 180 ) /*0x6d93ca*/
          {
            v48 = *v15; /*0x6d93cc*/
            *((_BYTE *)v15 + 153) = 1; /*0x6d93da*/
            (*(void (__thiscall **)(int *, int *, int *))(v48 + 268))(v15, &v91, &MEMORY[0x886FA0]); /*0x6d93e1*/
            (*(void (__thiscall **)(int *, int *, int, _DWORD))(*v15 + 260))(v15, &MEMORY[0x886FA0], a2, 0); /*0x6d93fa*/
          }
          v14 = v75; /*0x6d9400*/
          v11 = v83; /*0x6d9404*/
LABEL_52:
          v12 = v84; /*0x6d9408*/
        }
LABEL_53:
        v49 = *(int *)((char *)MEMORY[0x8A0370] + v14); /*0x6d940c*/
        if ( ++v85 >= v49 ) /*0x6d941d*/
        {
          v13 = (int)v82; /*0x6d9423*/
          break; /*0x6d9423*/
        }
      }
    }
    if ( v13 == 2 ) /*0x6d942a*/
    {
      v50 = 0; /*0x6d9436*/
      v76 = 0; /*0x6d943a*/
      if ( MEMORY[0xA8EB50] > 0 ) /*0x6d943e*/
      {
        do /*0x6d9597*/
        {
          v51 = (_BYTE *)*((_DWORD *)MEMORY[0xA8EB44] + v50); /*0x6d944a*/
          if ( v51[116] && v51[153] ) /*0x6d9458*/
          {
            v52 = (int *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v51 + 172))(v51, v102); /*0x6d9472*/
            v53 = MEMORY[0x887324]; /*0x6d9478*/
            v54 = v52; /*0x6d947e*/
            v55 = IsoCoord::ToPixel(&v79, *v52, v52[1]); /*0x6d948b*/
            v56 = v55[1]; /*0x6d9494*/
            v57 = (int)*v55; /*0x6d9497*/
            v96 = v56; /*0x6d949e*/
            v58 = (BYTE4(v57) + (int)v57) >> 8; /*0x6d94a9*/
            v59 = ZCoordToScreenY(v54[2]); /*0x6d94ac*/
            v89 = v58; /*0x6d94be*/
            v90 = v96 / 256 - v59; /*0x6d94c9*/
            v60 = v58 - (unsigned int)v53[44].__tail_0; /*0x6d94d9*/
            v61 = v90 - (unsigned int)v53[45].__tail_0; /*0x6d94db*/
            v89 = v60; /*0x6d94e3*/
            v90 = v61; /*0x6d94e7*/
            if ( v60 >= -360 && v60 <= MEMORY[0xB0CE30] + 360 && v61 >= -180 && v61 <= MEMORY[0xB0CE34] + 180 ) /*0x6d9516*/
            {
              v98[2] = MEMORY[0x886FA8]; /*0x6d952a*/
              v98[0] = MEMORY[0x886FA0]; /*0x6d9539*/
              v98[1] = MEMORY[0x886FA4]; /*0x6d9540*/
              v98[3] = MEMORY[0x886FAC]; /*0x6d9547*/
              BuildingClass::DrawVisible(&v89, v98); /*0x6d957a*/
            }
            v11 = v83; /*0x6d957f*/
            v12 = v84; /*0x6d9583*/
          }
          v50 = ++v76; /*0x6d9590*/
        }
        while ( v76 < MEMORY[0xA8EB50] ); /*0x6d9597*/
        v13 = (int)v82; /*0x6d959d*/
      }
    }
    v82 = (int *)++v13; /*0x6d95a5*/
  }
  while ( v13 < 5 ); /*0x6d95a9*/
  v62 = MEMORY[0x8A0364]; /*0x6d95af*/
  v82 = MEMORY[0x8A0364]; /*0x6d95b4*/
  do /*0x6d97b5*/
  {
    result = 0; /*0x6d95bb*/
    v83 = v62[3]; /*0x6d95bf*/
    v85 = 0; /*0x6d95c3*/
    if ( v83 > 0 ) /*0x6d95c7*/
    {
      do /*0x6d97a2*/
      {
        v64 = *(_DWORD *)(*v62 + 4 * result); /*0x6d95cf*/
        if ( *(_BYTE *)(v64 + 153) ) /*0x6d95d2*/
        {
          if ( v64 ) /*0x6d95e2*/
          {
            if ( (*(_BYTE *)(v64 + 20) & 1) != 0 ) /*0x6d95f4*/
            {
              if ( (*(_BYTE *)(v64 + 20) & 4) == 0 /*0x6d965d*/
                || ((*(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v64 + 76))(v64, v102, 0), !g_hWnd)
                || MEMORY[0xA8ED6B]
                || (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) == 0
                || (v95[0] = *(float *)(v64 + 156),
                    v95[1] = *(float *)(v64 + 160),
                    v95[2] = *(float *)(v64 + 164),
                    !Game::Stub3((int)v95)) )
              {
                v65 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v64 + 72))(v64, v101); /*0x6d9676*/
                v66 = *v65; /*0x6d9683*/
                v96 = v65[1]; /*0x6d9689*/
                v89 = v65[2]; /*0x6d9697*/
                LODWORD(v79) = -60 * v96 / 2 + 60 * v66 / 2; /*0x6d96d0*/
                v67 = SLODWORD(v79) / 256; /*0x6d96f7*/
                v68 = (30 * v96 / 2 + 30 * v66 / 2) / 256; /*0x6d96fa*/
                v69 = Math::RoundToInt((double)v89 * MEMORY[0xB0CD48] + (double)(v89 >= 728) + 0.5); /*0x6d9721*/
                v77 = v67; /*0x6d972d*/
                v78 = v68 - v69; /*0x6d9731*/
                v70 = v67 - (unsigned int)MEMORY[0x887324][44].__tail_0; /*0x6d9741*/
                v71 = v68 - v69 - (unsigned int)MEMORY[0x887324][45].__tail_0; /*0x6d9743*/
                v77 = v70; /*0x6d974b*/
                v78 = v71; /*0x6d974f*/
                if ( v70 >= -360 && v70 <= MEMORY[0xB0CE30] + 360 && v71 >= -180 && v71 <= MEMORY[0xB0CE34] + 180 ) /*0x6d9779*/
                  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v64 + 272))(v64, &v77, &MEMORY[0x886FA0]); /*0x6d9789*/
              }
            }
          }
        }
        result = v85 + 1; /*0x6d9797*/
        v72 = v85 + 1 < v83; /*0x6d9798*/
        v62 = v82; /*0x6d979a*/
        ++v85; /*0x6d979e*/
      }
      while ( v72 ); /*0x6d97a2*/
    }
    v62 += 6; /*0x6d97a8*/
    v82 = v62; /*0x6d97b1*/
  }
  while ( (int)v62 < (int)((int *)&MEMORY[0x8A03D8] + 1) ); /*0x6d97b5*/
  return result; /*0x6d97bb*/
}


// ==== 0x006D4B50  PrintTimerOnTactical::Start  this=AbstractClass  sig=csp ====
int *__fastcall PrintTimerOnTactical::Start(int ecx0, int a2, int a3, wchar_t *Format, _DWORD *a5, bool *a6)
{
  BitFont *Instance; // ebx
  CampaignScore *v7; // edi
  int v8; // ebp
  int v9; // edi
  unsigned __int64 v10; // rax
  int v11; // eax
  bool v12; // cf
  bool *v13; // eax
  int v14; // edx
  int v15; // esi
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  CampaignScore *v19; // [esp-18h] [ebp-65Ch]
  CampaignScore *v20; // [esp-14h] [ebp-658h]
  int v21; // [esp-10h] [ebp-654h]
  ObjectClass *v22; // [esp-Ch] [ebp-650h]
  int v23; // [esp-8h] [ebp-64Ch]
  CampaignScore *v24; // [esp-4h] [ebp-648h]
  CampaignScore *v25; // [esp+0h] [ebp-644h]
  AbstractClass aP2; // [esp+10h] [ebp-634h] BYREF
  int v27; // [esp+34h] [ebp-610h] BYREF
  char v28[12]; // [esp+38h] [ebp-60Ch] BYREF
  wchar_t a1[256]; // [esp+44h] [ebp-600h] BYREF
  wchar_t v30; // [esp+244h] [ebp-400h] BYREF
  size_t BufferCount[127]; // [esp+248h] [ebp-3FCh] BYREF
  wchar_t Buffer[256]; // [esp+444h] [ebp-200h] BYREF

  *(_DWORD *)&aP2.__pad_0[12] = ecx0; /*0x6d4b58*/
  *(_DWORD *)&aP2.__pad_0[8] = a2; /*0x6d4b5e*/
  Instance = (BitFont *)TextRenderer::GetInstance(); /*0x6d4b73*/
  v7 = (CampaignScore *)(a3 / 60 / 60); /*0x6d4ba4*/
  *(_DWORD *)&aP2.__pad_0[4] = a3 / 60 % 60; /*0x6d4bb8*/
  if ( v7 ) /*0x6d4bbd*/
  {
    swprintf(Buffer, (const size_t)&stru_830620.__pad_579C[52508], Format, (CampaignScore *)(a3 / 60 / 60)); /*0x6d4bd5*/
    swprintf(&v30, (const size_t)&stru_830620.__pad_579C[52496], Format, v19); /*0x6d4bef*/
    swprintf( /*0x6d4c05*/
      a1,
      (const size_t)&stru_830620.__pad_579C[52468],
      (const wchar_t *const)v7,
      *(CampaignScore **)&aP2.__pad_0[4]);
  }
  else
  {
    swprintf(Buffer, (const size_t)&stru_830620.__pad_579C[52440], Format, (CampaignScore *)(a3 / 60 % 60)); /*0x6d4c24*/
    swprintf(&v30, (const size_t)&stru_830620.__pad_579C[52496], Format, v20); /*0x6d4c37*/
    swprintf( /*0x6d4c4c*/
      a1,
      (const size_t)&stru_830620.__pad_579C[52420],
      *(const wchar_t *const *)&aP2.__pad_0[4],
      (CampaignScore *)(a3 % 60));
  }
  *(_DWORD *)aP2.__pad_0 = 0; /*0x6d4c68*/
  Text::Layout(Instance, a1, &aP2, 0, *(AbstractClass **)&stru_87C374.__pad_579C[21656]); /*0x6d4c70*/
  v8 = *(_DWORD *)&aP2.__pad_0[8]; /*0x6d4c77*/
  v9 = *(_DWORD *)&aP2.__pad_0[8]; /*0x6d4c7b*/
  if ( !a3 && a5 && a6 ) /*0x6d4c93*/
  {
    LODWORD(v10) = Audio::Callback(); /*0x6d4c95*/
    if ( *(_QWORD *)a5 > v10 ) /*0x6d4ca7*/
    {
      v13 = a6; /*0x6d4ccd*/
    }
    else
    {
      v11 = Audio::Callback(); /*0x6d4ca9*/
      v12 = __CFADD__(v11, 1000); /*0x6d4cae*/
      *a5 = v11 + 1000; /*0x6d4cb3*/
      v13 = a6; /*0x6d4cb5*/
      a5[1] = v12 + v14; /*0x6d4cbf*/
      *a6 = !*a6; /*0x6d4cc9*/
    }
    if ( *v13 ) /*0x6d4cd4*/
      v9 = *(_DWORD *)(stru_B05488.field_4C + 20); /*0x6d4cdf*/
  }
  v15 = *(_DWORD *)&aP2.__pad_0[12] + 1; /*0x6d4cf2*/
  aP2.nextArrayIndex = *(_DWORD *)&stru_87C374.__pad_579C[21660] /*0x6d4d0b*/
                     - (*(_DWORD *)&aP2.__pad_0[12] + 1) * (Instance[2].field_4 + 2);
  aP2.abstractFlags = *(_DWORD *)&stru_87C374.__pad_579C[21656] - *(_DWORD *)aP2.__pad_0 - 3; /*0x6d4d1f*/
  v16 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *, int *))(**(_DWORD **)&stru_87C374.__pad_579C[22540] + 120))( /*0x6d4d2a*/
                    *(_DWORD *)&stru_87C374.__pad_579C[22540],
                    &v27,
                    &aP2.abstractFlags);
  TextRenderer::DrawText( /*0x6d4d42*/
    &aP2.uniqueId,
    (size_t)BufferCount,
    *(IUnknown **)&stru_87C374.__pad_579C[22540],
    v16,
    v8,
    0,
    17944,
    (int)v25);
  v27 = *(_DWORD *)&stru_87C374.__pad_579C[21660] - v15 * (Instance[2].field_4 + 2); /*0x6d4d66*/
  aP2.NeedsSaveOrLink = (void *)(*(_DWORD *)&stru_87C374.__pad_579C[21656] - 3); /*0x6d4d7a*/
  v17 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *, void **, int, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22540] /*0x6d4d85*/
                                                                                   + 120))(
                    *(_DWORD *)&stru_87C374.__pad_579C[22540],
                    v28,
                    &aP2.NeedsSaveOrLink,
                    v9,
                    0,
                    17944);
  return TextRenderer::DrawText( /*0x6d4da2*/
           (int *)&aP2.__pad_0[12],
           (size_t)a1,
           *(IUnknown **)&stru_87C374.__pad_579C[22540],
           v17,
           v21,
           v22,
           v23,
           (int)v24);
}


// ==== 0x006D4DB0  HouseClass::SetOwnerName  this=AbstractClass  sig=csp ====
wchar_t *__thiscall HouseClass::SetOwnerName(int this, CellStruct *aP1, int a3)
{
  CampaignScore *result; // eax

  if ( aP1 ) /*0x6d4db9*/
  {
    result = (CampaignScore *)wcscpy((wchar_t *)(this + 36), (const wchar_t *)aP1); /*0x6d4ddc*/
    *(_DWORD *)(this + 164) = a3; /*0x6d4de8*/
  }
  else
  {
    *(_WORD *)(this + 36) = 0; /*0x6d4dbb*/
    *(_DWORD *)(this + 164) = -1; /*0x6d4dc3*/
    *(_DWORD *)(this + 164) = a3; /*0x6d4dcd*/
    return (wchar_t *)a3; /*0x6d4dbf*/
  }
  return (wchar_t *)result; /*0x6d4dd3*/
}


// ==== 0x006D4E00  ObjectClass::method_6D4E00  this=ObjectClass  sig=csp ====
void __thiscall sub_6D4E00(int this)
{
  *(_DWORD *)(this + 164) = -1; /*0x6d4e00*/
  *(_WORD *)(this + 36) = 0; /*0x6d4e0a*/
}


// ==== 0x006D4E20  Tactical::DisplayTacticalOverlayText  this=AbstractClass  sig=csp ====
void __thiscall DisplayTacticalOverlayText(signed int *this, wchar_t *String)
{
  signed int v3; // edi
  __int64 v4; // rax
  int v5; // kr00_4
  int v6; // ebx
  _BYTE *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // ebx
  int v11; // ebp
  int v12; // [esp+10h] [ebp-2Ch] BYREF
  int v13[2]; // [esp+14h] [ebp-28h] BYREF
  int v14; // [esp+1Ch] [ebp-20h]
  int v15; // [esp+20h] [ebp-1Ch]
  int v16; // [esp+24h] [ebp-18h]
  int v17; // [esp+28h] [ebp-14h]
  _DWORD v18[4]; // [esp+2Ch] [ebp-10h] BYREF

  if ( !MEMORY[0xA8ED6B] && (String && wcslen(String) || this->q0A4 != -1) ) /*0x6d4e52*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88731C] + 132))(MEMORY[0x88731C]) ) /*0x6d4e60*/
    {
      v3 = this->q0A4; /*0x6d4e6e*/
      if ( v3 != -1 && MEMORY[0xA8F798] && MEMORY[0xA8F794] && *((__int16 *)MEMORY[0xA8F794] + 3) > v3 ) /*0x6d4e93*/
      {
        v4 = MEMORY[0x886FAC] - *((__int16 *)MEMORY[0xA8F794] + 2); /*0x6d4ea0*/
        v5 = MEMORY[0x886FA8] - *((__int16 *)MEMORY[0xA8F794] + 1); /*0x6d4eb1*/
        v13[1] = ((int)v4 - HIDWORD(v4)) >> 1; /*0x6d4eb9*/
        v13[0] = v5 / 2; /*0x6d4ebd*/
        DrawToSurfaceSHP( /*0x6d4ee5*/
          MEMORY[0x88731C],
          MEMORY[0xA8F798],
          (int)MEMORY[0xA8F794],
          v3,
          v13,
          &MEMORY[0x886FA0],
          0,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
      }
      else if ( String ) /*0x6d4ef6*/
      {
        if ( wcslen(String) ) /*0x6d4efd*/
        {
          v15 = MEMORY[0x886FA4]; /*0x6d4f18*/
          v17 = MEMORY[0x886FAC]; /*0x6d4f35*/
          v6 = MEMORY[0x886FA8]; /*0x6d4f3e*/
          v7 = (_BYTE *)aP0; /*0x6d4f4c*/
          v8 = MEMORY[0x886FA0]; /*0x6d4f5a*/
          v14 = MEMORY[0x886FA0]; /*0x6d4f61*/
          v16 = MEMORY[0x886FA8]; /*0x6d4f65*/
          v9 = (255 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x6d4f89*/
             | (255 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
             | (255 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
          Text::Layout((_DWORD *)aP0, String, &v12, v13, MEMORY[0x886FA8]); /*0x6d4f90*/
          v18[0] = v14; /*0x6d4fbb*/
          v10 = v8 + (v6 - v12) / 2; /*0x6d4fc1*/
          v18[2] = v16 + v14; /*0x6d4fc9*/
          v18[1] = v15; /*0x6d4fd1*/
          v18[3] = v15 + v17; /*0x6d4fd9*/
          v11 = v15 + (v17 - v13[0]) / 2; /*0x6d4fdf*/
          Char::Swap(v7, 1); /*0x6d4fe1*/
          TextGroup::SetRect(v7, v18); /*0x6d4fed*/
          Property::Set(v7, v9); /*0x6d4ff5*/
          FontRenderer::DrawText((int)v7, MEMORY[0x88731C], (int)String, v10, v11, 0, 0); /*0x6d5013*/
        }
      }
    }
  }
}


// ==== 0x006D5030  RadarClass::DrawBlips  this=AbstractClass  sig=csp ====
char __thiscall RadarClass::DrawBlips(_DWORD *this, IUnknown *aP3)
{
  AbstractClass *v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ebx
  __int16 v8; // si
  AbstractClass *v9; // ecx
  int v10; // edi
  int *v11; // eax
  int v12; // edx
  int v13; // esi
  void *v14; // eax
  char v15; // al
  int v16; // edi
  int *v17; // eax
  int v18; // edx
  int v19; // ebx
  int v20; // ecx
  int v21; // eax
  _WORD *eax29; // eax
  IUnknown *v22; // eax
  IUnknown *v23; // eax
  _WORD *eax31; // eax
  IUnknown *v25; // eax
  IUnknown *v26; // eax
  int v28; // eax
  _WORD *eax34; // eax
  IUnknown *v29; // eax
  IUnknown *v30; // eax
  IUnknown *v32; // ecx
  AbstractClass *v33; // edx
  char *vfptr; // ebx
  __int64 v35; // rax
  int v36; // edi
  __int64 v37; // rax
  int v38; // ecx
  void *v39; // eax
  char v41; // [esp+13h] [ebp-41h]
  IUnknown *v40; // [esp+14h] [ebp-40h]
  __int16 v43; // [esp+1Ah] [ebp-3Ah]
  __int16 var3C_2a; // [esp+1Ah] [ebp-3Ah]
  AbstractClass *i; // [esp+1Ch] [ebp-38h]
  AbstractClass *v44; // [esp+1Ch] [ebp-38h]
  rc_ptr_base v47; // [esp+20h] [ebp-34h] BYREF
  IUnknown *v46; // [esp+24h] [ebp-30h] BYREF
  IUnknown *v49; // [esp+28h] [ebp-2Ch] BYREF
  IUnknown *v48; // [esp+2Ch] [ebp-28h] BYREF
  int v51; // [esp+30h] [ebp-24h]
  int v52[2]; // [esp+34h] [ebp-20h] BYREF
  int v53; // [esp+3Ch] [ebp-18h] BYREF
  int v54; // [esp+40h] [ebp-14h]
  int GroundHeight; // [esp+44h] [ebp-10h]
  int v56; // [esp+48h] [ebp-Ch] BYREF
  int v57; // [esp+4Ch] [ebp-8h]
  int v58; // [esp+50h] [ebp-4h]

  v40 = 0; /*0x6d5048*/
  if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] ) /*0x6d5055*/
  {
    v3 = (AbstractClass *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 52))( /*0x6d5071*/
                            *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
                            v52);
    v4 = *(_DWORD *)v3->__pad_0; /*0x6d5073*/
    v5 = *(_DWORD *)&v3->__pad_0[4]; /*0x6d5077*/
    if ( v4 < *(int *)&MEMORY[0x87F8E4].__pad_5568[8532] ) /*0x6d507a*/
      return v4; /*0x6d507a*/
    if ( v4 >= *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532] + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8540] ) /*0x6d508a*/
      return v4; /*0x6d508a*/
    LOBYTE(v4) = MEMORY[0x87F8E4].__pad_5568[8536]; /*0x6d5090*/
    if ( v5 < *(int *)&MEMORY[0x87F8E4].__pad_5568[8536] ) /*0x6d5097*/
      return v4; /*0x6d5097*/
    LOBYTE(v4) = MEMORY[0x87F8E4].__pad_5568[8544] + MEMORY[0x87F8E4].__pad_5568[8536]; /*0x6d50a3*/
    if ( v5 >= *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8544] + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536] ) /*0x6d50a7*/
      return v4; /*0x6d50a7*/
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_1D4[3800] + 44))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800]) == 7 /*0x6d50c3*/
      && *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] + 5815) )
    {
      LOWORD(v6) = 3; /*0x6d50df*/
      v43 = 3; /*0x6d50f1*/
      v40 = (IUnknown *)-1; /*0x6d50f5*/
    }
    else
    {
      v6 = *CoordList::GetBounds(&v49, *(__int16 **)&MEMORY[0x87F8E4].__pad_1D4[3756]); /*0x6d5110*/
      v43 = HIWORD(v6); /*0x6d5112*/
    }
    v7 = (__int16)v40; /*0x6d5116*/
    v8 = HIWORD(v40); /*0x6d511b*/
    v41 = 1; /*0x6d5120*/
    v9 = (AbstractClass *)(__int16)v6; /*0x6d5125*/
    for ( i = (AbstractClass *)(__int16)v6; v7 < (int)v9; ++v7 ) /*0x6d512e*/
    {
      v10 = v8; /*0x6d5139*/
      if ( v8 < v43 ) /*0x6d513e*/
      {
        do /*0x6d5272*/
        {
          LOWORD(v47.vfptr) = v7 + *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3748]; /*0x6d5155*/
          HIWORD(v47.vfptr) = *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3750] + v10; /*0x6d5164*/
          LOWORD(v46) = *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3752] + v7 + *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3748]; /*0x6d5179*/
          HIWORD(v46) = *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3750] + v10 + *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3754]; /*0x6d517e*/
          v49 = v46; /*0x6d5187*/
          Coord::Subtract( /*0x6d51c8*/
            &v53,
            (IUnknown *)(((((__int16)v46 << 8) + 128) / 256) << 8),
            (IUnknown *)((((SHIWORD(v46) << 8) + 128) / 256) << 8),
            0);
          v56 = v53; /*0x6d51d9*/
          v57 = v54; /*0x6d51dd*/
          v58 = GroundHeight; /*0x6d51ed*/
          v11 = Coord::To_ScreenRaw(v52, &v56); /*0x6d51f1*/
          v12 = this->q0B0; /*0x6d51f6*/
          v13 = this->q0B4; /*0x6d51fc*/
          v48 = (IUnknown *)*v11; /*0x6d5206*/
          v51 = v11[1] - v13; /*0x6d5218*/
          v48 = (IUnknown *)((char *)v48 - v12 - 30); /*0x6d5222*/
          if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (IUnknown *)&v49) ) /*0x6d5226*/
          {
            v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v49); /*0x6d5239*/
            if ( !BuildingPlacement::RenderBuildingPlacementPreview( /*0x6d5263*/
                    (int)v14,
                    (IUnknown *)&v48,
                    (IUnknown *)&MEMORY[0x87F8E4].__pad_5568[8532],
                    aP3)
              || (v15 = v41, v41 = 1, !v15) )
            {
              v41 = 0; /*0x6d5265*/
            }
          }
          ++v10; /*0x6d526f*/
        }
        while ( v10 < v43 ); /*0x6d5272*/
        v9 = i; /*0x6d5278*/
        v8 = HIWORD(v40); /*0x6d527c*/
      }
    }
    v16 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_1D4[3800] + 44))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800]); /*0x6d5295*/
    if ( MEMORY[0xA8D63C].__pad_14B0[639] && *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3796] ) /*0x6d52ab*/
    {
      LOWORD(v49) = (_WORD)v40 + *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3748]; /*0x6d52cc*/
      HIWORD(v49) = v8 + *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3750]; /*0x6d52d1*/
      v53 = ((__int16)(*(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3752] /*0x6d5302*/
                     + (_WORD)v40
                     + *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3748]) << 8)
          + 128;
      v54 = ((__int16)(v8 + *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3750] + *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3754]) << 8) /*0x6d5306*/
          + 128;
      GroundHeight = 0; /*0x6d530a*/
      if ( v16 == 7 ) /*0x6d530e*/
      {
        Coord::Subtract( /*0x6d5337*/
          &v56,
          (IUnknown *)(((((__int16)(*(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3752]
                                  + (_WORD)v40
                                  + *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3748]) << 8)
                       + 128)
                      / 256) << 8),
          (IUnknown *)(((((__int16)(v8
                                  + *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3750]
                                  + *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3754]) << 8)
                       + 128)
                      / 256) << 8),
          0);
        v53 = v56; /*0x6d5348*/
        v54 = v57; /*0x6d534c*/
        GroundHeight = v58; /*0x6d5350*/
      }
      GroundHeight = Cell::GetGroundHeight(&v53); /*0x6d5369*/
      (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_1D4[3796] + 436))( /*0x6d5374*/
        *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3796],
        &v53);
      v17 = Coord::To_ScreenRaw(v52, &v53); /*0x6d5386*/
      v18 = this->q0B0; /*0x6d538b*/
      v19 = this->q0B4; /*0x6d5391*/
      v48 = (IUnknown *)*v17; /*0x6d539b*/
      v20 = v17[1]; /*0x6d53a1*/
      v48 = (IUnknown *)((char *)v48 - v18); /*0x6d53a4*/
      v51 = v20 - v19; /*0x6d53ad*/
      if ( v16 != 18 ) /*0x6d53b1*/
        (*(void (__thiscall **)(_DWORD, IUnknown **, char *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_1D4[3796] + 280))( /*0x6d53c5*/
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3796],
          &v48,
          &MEMORY[0x87F8E4].__pad_5568[8532]);
    }
    if ( v41 /*0x6d53ed*/
      && *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3796]
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_1D4[3796] + 44))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3796]) == 6 )
    {
      v21 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3796] + 1312); /*0x6d53f8*/
      if ( *(_BYTE *)(v21 + 5822) ) /*0x6d53fe*/
      {
        eax29 = CellStruct::Set(&v47, (__int16)v40, v8); /*0x6d542a*/
        v22 = CellStruct::Add(eax29, (IUnknown *)&v46, (IUnknown *)&MEMORY[0x87F8E4].__pad_1D4[3748]); /*0x6d5431*/
        v23 = CellStruct::Add(v22, (IUnknown *)&v49, (IUnknown *)&MEMORY[0x87F8E4].__pad_1D4[3752]); /*0x6d5438*/
        RenderBridgeRadarBlips(this, (AbstractClass *)aP3, (AbstractClass *)v23->field_0); /*0x6d544b*/
      }
      else if ( *(_BYTE *)(v21 + 5824) ) /*0x6d5455*/
      {
        eax31 = CellStruct::Set(&v47, (__int16)v40, v8); /*0x6d5481*/
        v25 = CellStruct::Add(eax31, (IUnknown *)&v46, (IUnknown *)&MEMORY[0x87F8E4].__pad_1D4[3748]); /*0x6d5488*/
        v26 = CellStruct::Add(v25, (IUnknown *)&v49, (IUnknown *)&MEMORY[0x87F8E4].__pad_1D4[3752]); /*0x6d548f*/
        RadarClass::DrawBlip(this, (char)aP3, (AbstractClass *)v26->field_0); /*0x6d54a2*/
      }
      else
      {
        v28 = *(_DWORD *)(v21 + 3668); /*0x6d54a9*/
        if ( v28 && *(_BYTE *)(v28 + 680) ) /*0x6d54b3*/
        {
          eax34 = CellStruct::Set(&v47, (__int16)v40, v8); /*0x6d54df*/
          v29 = CellStruct::Add(eax34, (IUnknown *)&v46, (IUnknown *)&MEMORY[0x87F8E4].__pad_1D4[3748]); /*0x6d54e6*/
          v30 = CellStruct::Add(v29, (IUnknown *)&v49, (IUnknown *)&MEMORY[0x87F8E4].__pad_1D4[3752]); /*0x6d54ed*/
          RenderRadarBlips(this, (char)aP3, (AbstractClass *)v30->field_0); /*0x6d5500*/
        }
      }
    }
  }
  else
  {
    v8 = 0; /*0x6d5507*/
  }
  LOBYTE(v4) = MEMORY[0xA8D63C].__pad_14B0[639]; /*0x6d550c*/
  if ( !MEMORY[0xA8D63C].__pad_14B0[639] && *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3780] ) /*0x6d5521*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_1D4[3780] + 44))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3780]) == 7 /*0x6d5536*/
      && *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3780] + 5815) )
    {
      LOWORD(v4) = 3; /*0x6d5552*/
      v49 = (IUnknown *)-1; /*0x6d5556*/
      LOWORD(v40) = -1; /*0x6d5564*/
      v8 = -1; /*0x6d5568*/
      var3C_2a = 3; /*0x6d556d*/
    }
    else
    {
      v4 = *CoordList::GetBounds(&v49, *(__int16 **)&MEMORY[0x87F8E4].__pad_1D4[3772]); /*0x6d5589*/
      var3C_2a = HIWORD(v4); /*0x6d558b*/
    }
    v32 = (IUnknown *)(__int16)v40; /*0x6d558f*/
    v33 = (AbstractClass *)(__int16)v4; /*0x6d5594*/
    v40 = (IUnknown *)(__int16)v40; /*0x6d5599*/
    v44 = (AbstractClass *)(__int16)v4; /*0x6d559d*/
    if ( (__int16)v40 < (__int16)v4 ) /*0x6d55a1*/
    {
      v47.vfptr = (void *)v8; /*0x6d55aa*/
      do /*0x6d5715*/
      {
        LOBYTE(v4) = var3C_2a; /*0x6d55ae*/
        vfptr = (char *)v47.vfptr; /*0x6d55b3*/
        if ( (int)v47.vfptr < var3C_2a ) /*0x6d55b9*/
        {
          while ( 1 ) /*0x6d55e4*/
          {
            HIWORD(v48) = (_WORD)vfptr + *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3764]; /*0x6d55e4*/
            LOWORD(v49) = *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3766] /*0x6d55ed*/
                        + *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3762]
                        + (_WORD)v32;
            HIWORD(v49) = *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3768] /*0x6d55fa*/
                        + (_WORD)vfptr
                        + *(_WORD *)&MEMORY[0x87F8E4].__pad_1D4[3764];
            v46 = v49; /*0x6d5608*/
            v35 = 15360 * ((((__int16)v49 << 8) + 128) / 256); /*0x6d5642*/
            v36 = v35 - HIDWORD(v35); /*0x6d5645*/
            v37 = 7680 * ((((__int16)v49 << 8) + 128) / 256); /*0x6d5652*/
            v53 = -15360 * (((SHIWORD(v49) << 8) + 128) / 256) / 2 + (v36 >> 1); /*0x6d5674*/
            v38 = v53 / 256 - this->q0B0; /*0x6d56b1*/
            v52[1] = (7680 * (((SHIWORD(v49) << 8) + 128) / 256) / 2 + (((int)v37 - HIDWORD(v37)) >> 1)) / 256 /*0x6d56b5*/
                   - this->q0B4;
            v52[0] = v38 - 30; /*0x6d56c0*/
            if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (IUnknown *)&v46) ) /*0x6d56ca*/
            {
              v39 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v46); /*0x6d56dd*/
              BuildingPlacement::RenderBuildingPlacementPreview( /*0x6d56f3*/
                (int)v39,
                (IUnknown *)v52,
                (IUnknown *)&MEMORY[0x87F8E4].__pad_5568[8532],
                aP3);
            }
            LOBYTE(v4) = var3C_2a; /*0x6d56f8*/
            if ( (int)++vfptr >= var3C_2a ) /*0x6d5700*/
              break; /*0x6d5700*/
            LOWORD(v32) = (_WORD)v40; /*0x6d55c1*/
          }
          v33 = v44; /*0x6d5706*/
          v32 = v40; /*0x6d570a*/
        }
        v32 = (IUnknown *)((char *)v32 + 1); /*0x6d570e*/
        v40 = v32; /*0x6d5711*/
      }
      while ( (int)v32 < (int)v33 ); /*0x6d5715*/
    }
  }
  return v4; /*0x6d571b*/
}


// ==== 0x006D5730  ObjectClass::RenderBridgeRadarBlips  this=AbstractClass  sig=csp ====
int __thiscall RenderBridgeRadarBlips(_DWORD *this, AbstractClass *aP1, AbstractClass *aP2)
{
  int v3; // edx
  int result; // eax
  int v6; // ebp
  _WORD *v7; // edi
  __int16 v8; // dx
  _DWORD *v9; // eax
  BuildingTypeClass *v10; // esi
  __int16 v11; // cx
  int v12; // edi
  int v13; // ebp
  int *v14; // eax
  int v15; // esi
  int v16; // ecx
  int v17; // [esp+10h] [ebp-40h] BYREF
  ConvertClass *v18; // [esp+14h] [ebp-3Ch] BYREF
  ConvertClass *v19; // [esp+18h] [ebp-38h]
  int v20; // [esp+1Ch] [ebp-34h]
  int v21; // [esp+20h] [ebp-30h]
  int v22; // [esp+24h] [ebp-2Ch]
  int v23; // [esp+28h] [ebp-28h]
  int v24; // [esp+2Ch] [ebp-24h]
  _WORD *v25; // [esp+30h] [ebp-20h]
  int v26[2]; // [esp+34h] [ebp-1Ch] BYREF
  int v27; // [esp+3Ch] [ebp-14h] BYREF
  _DWORD v28[3]; // [esp+44h] [ebp-Ch] BYREF

  v3 = 0; /*0x6d5735*/
  v23 = 0; /*0x6d573b*/
  do
  {
    result = (int)aP2; /*0x6d573f*/
    v18 = (ConvertClass *)aP2; /*0x6d5749*/
    v6 = 0; /*0x6d574d*/
    v22 = *(int *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3796] + 1312) + 1464) >> 8; /*0x6d5760*/
    if ( v22 > 0 )
    {
      v7 = (_WORD *)(4 * (v3 & 7) + 9041544); /*0x6d576d*/
      v25 = v7; /*0x6d5774*/
      while ( 1 ) /*0x6d577f*/
      {
        v8 = HIWORD(v18) + v7[1]; /*0x6d577f*/
        LOWORD(v19) = *v7 + result; /*0x6d5788*/
        HIWORD(v19) = v8; /*0x6d578e*/
        v18 = v19; /*0x6d579c*/
        v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v18); /*0x6d57a0*/
        result = (int)Cell::IsBridge(v9); /*0x6d57a7*/
        if ( result ) /*0x6d57ae*/
          break; /*0x6d57ae*/
        v10 = (BuildingTypeClass *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v18); /*0x6d57bf*/
        result = (int)CellClass::FindInfantry(v10, 0); /*0x6d57c5*/
        if ( result ) /*0x6d57cc*/
          goto LABEL_15; /*0x6d57cc*/
        result = LOBYTE(v10->ChargerBarrels[6]); /*0x6d57d2*/
        if ( (_BYTE)result ) /*0x6d57da*/
          goto LABEL_15; /*0x6d57da*/
        result = *(_DWORD *)&v10->UINameLabel[15]; /*0x6d57e0*/
        if ( result ) /*0x6d57e5*/
          goto LABEL_15; /*0x6d57e5*/
        result = v22; /*0x6d57eb*/
        if ( ++v6 >= v22 ) /*0x6d57f2*/
          goto LABEL_15; /*0x6d57f2*/
        LOWORD(result) = (_WORD)v18; /*0x6d57f8*/
      }
      if ( *(_BYTE *)(*(_DWORD *)(result + 1312) + 5822) )
      {
        result = House::IsHumanPlayer(*(#375 **)(result + 540)); /*0x6d581b*/
        if ( (_BYTE)result )
        {
          if ( v6 > 0 )
          {
            v11 = HIWORD(aP2) + v7[1]; /*0x6d5844*/
            LOWORD(v20) = (_WORD)aP2 + *v7; /*0x6d5855*/
            v24 = (_BYTE)aP1 != 0 ? 67078 : 132614;
            HIWORD(v20) = v11; /*0x6d585e*/
            v17 = v20; /*0x6d5869*/
            v22 = v6; /*0x6d5873*/
            do /*0x6d59a0*/
            {
              v12 = -1 - 15 * *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v17) + 283); /*0x6d58a0*/
              v13 = -2 - 15 * *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v17) + 283); /*0x6d58d4*/
              v28[1] = (((SHIWORD(v17) << 8) + 128) / 256) << 8; /*0x6d58f6*/
              v28[2] = 0; /*0x6d58fc*/
              v28[0] = ((((__int16)v17 << 8) + 128) / 256) << 8; /*0x6d590e*/
              v14 = Coord::To_ScreenRaw(&v27, v28); /*0x6d5912*/
              v15 = this->q0B4; /*0x6d5919*/
              v16 = v14[1]; /*0x6d5921*/
              v26[0] = *v14 - this->q0B0; /*0x6d5932*/
              v26[1] = v12 + v16 - v15; /*0x6d594d*/
              DrawToSurfaceSHP( /*0x6d596b*/
                *(int *)&MEMORY[0x87F8E4].__pad_5568[9416],
                (int)MEMORY[0x87F6C4],
                *(int *)&MEMORY[0x89F690].__pad_BC0[428],
                0,
                v26,
                (int *)&MEMORY[0x87F8E4].__pad_5568[8532],
                v24,
                0,
                v13,
                0,
                1000,
                0,
                0,
                0,
                0,
                0);
              LOWORD(v21) = v17 + *v25; /*0x6d597c*/
              HIWORD(v21) = v25[1] + HIWORD(v17); /*0x6d598a*/
              v17 = v21; /*0x6d5993*/
              result = --v22; /*0x6d599b*/
            }
            while ( v22 ); /*0x6d59a0*/
          }
        }
      }
LABEL_15:
      v3 = v23; /*0x6d59a6*/
    }
    v3 += 2; /*0x6d59aa*/
    v23 = v3; /*0x6d59b0*/
  }
  while ( v3 < 8 );
  return result; /*0x6d59ba*/
}


// ==== 0x006D59D0  RadarClass::DrawBlip  this=AbstractClass  sig=csp ====
int __thiscall RadarClass::DrawBlip(_DWORD *this, char a2, AbstractClass *aP2)
{
  char v3; // dl
  int result; // eax
  ConvertClass *v6; // edi
  int v7; // ebp
  _WORD *v8; // esi
  __int16 v9; // dx
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  void *v12; // eax
  __int16 v13; // dx
  int v14; // edi
  int v15; // ebp
  int *v16; // eax
  int v17; // esi
  int v18; // ecx
  bool v19; // zf
  IUnknown *v20; // [esp-Ch] [ebp-5Ch]
  IUnknown *v21; // [esp-8h] [ebp-58h]
  IUnknown *v22; // [esp-4h] [ebp-54h]
  int v23; // [esp+10h] [ebp-40h] BYREF
  AbstractClass *v24; // [esp+14h] [ebp-3Ch] BYREF
  AbstractClass *v25; // [esp+18h] [ebp-38h]
  int v26; // [esp+1Ch] [ebp-34h]
  int v27; // [esp+20h] [ebp-30h]
  ConvertClass *v28; // [esp+24h] [ebp-2Ch]
  int i; // [esp+28h] [ebp-28h]
  int v30; // [esp+2Ch] [ebp-24h]
  _WORD *v31; // [esp+30h] [ebp-20h]
  int v32[2]; // [esp+34h] [ebp-1Ch] BYREF
  int v33; // [esp+3Ch] [ebp-14h] BYREF
  _DWORD v34[3]; // [esp+44h] [ebp-Ch] BYREF

  v3 = 0; /*0x6d59d5*/
  for ( i = 0; i < 8; i += 2 )
  {
    result = (int)aP2; /*0x6d59df*/
    v24 = aP2; /*0x6d59e9*/
    v6 = 0; /*0x6d59ed*/
    v28 = *(ConvertClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3796] + 1312); /*0x6d59f5*/
    v7 = *(int *)&v28[3].__pad_6[318] >> 8; /*0x6d59ff*/
    if ( v7 > 0 )
    {
      v8 = (_WORD *)(4 * (v3 & 7) + 9041544); /*0x6d5a0d*/
      v31 = v8; /*0x6d5a14*/
      while ( 1 ) /*0x6d5a25*/
      {
        v9 = HIWORD(v24) + v8[1]; /*0x6d5a25*/
        LOWORD(v25) = *v8 + result; /*0x6d5a2e*/
        HIWORD(v25) = v9; /*0x6d5a34*/
        v24 = v25; /*0x6d5a42*/
        v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v24); /*0x6d5a46*/
        v11 = Cell::IsBridge(v10); /*0x6d5a4d*/
        if ( v11 ) /*0x6d5a54*/
        {
          if ( *(_BYTE *)(v11[328] + 5824) ) /*0x6d5a5c*/
          {
            result = House::IsHumanPlayer((#375 *)v11[135]); /*0x6d5a6c*/
            if ( (_BYTE)result ) /*0x6d5a73*/
              break; /*0x6d5a73*/
          }
        }
        v22 = HouseClass_Player; /*0x6d5a7e*/
        v21 = (IUnknown *)v28; /*0x6d5a83*/
        v20 = *(IUnknown **)&v28[4].__pad_6[134]; /*0x6d5a8a*/
        v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v24); /*0x6d5a91*/
        LOBYTE(result) = CellClass::IsPassable((int)v12, v20, v21, v22); /*0x6d5a98*/
        if ( !(_BYTE)result ) /*0x6d5a9f*/
          goto LABEL_14; /*0x6d5a9f*/
        v6 = (ConvertClass *)((char *)v6 + 1); /*0x6d5aa5*/
        if ( (int)v6 >= v7 ) /*0x6d5aa8*/
          goto LABEL_14; /*0x6d5aa8*/
        LOWORD(result) = (_WORD)v24; /*0x6d5a1a*/
      }
      if ( (int)v6 > 0 )
      {
        v13 = HIWORD(aP2) + v8[1]; /*0x6d5acf*/
        LOWORD(v26) = (_WORD)aP2 + *v8; /*0x6d5ade*/
        v30 = a2 != 0 ? 67078 : 132614;
        HIWORD(v26) = v13; /*0x6d5ae7*/
        v23 = v26; /*0x6d5af2*/
        v28 = v6; /*0x6d5afc*/
        do /*0x6d5c29*/
        {
          v14 = -1 - 15 * *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v23) + 283); /*0x6d5b29*/
          v15 = -2 - 15 * *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v23) + 283); /*0x6d5b47*/
          v34[1] = (((SHIWORD(v23) << 8) + 128) / 256) << 8; /*0x6d5b86*/
          v34[0] = ((((__int16)v23 << 8) + 128) / 256) << 8; /*0x6d5b93*/
          v34[2] = 0; /*0x6d5b97*/
          v16 = Coord::To_ScreenRaw(&v33, v34); /*0x6d5b9b*/
          v17 = this->q0B4; /*0x6d5ba8*/
          v18 = v16[1]; /*0x6d5bb6*/
          v32[0] = *v16 - this->q0B0; /*0x6d5bb9*/
          v32[1] = v14 + v18 - v17; /*0x6d5bdb*/
          DrawToSurfaceSHP( /*0x6d5bf4*/
            *(int *)&MEMORY[0x87F8E4].__pad_5568[9416],
            (int)MEMORY[0x87F6C4],
            *(int *)&MEMORY[0x89F690].__pad_BC0[428],
            0,
            v32,
            (int *)&MEMORY[0x87F8E4].__pad_5568[8532],
            v30,
            0,
            v15,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
          LOWORD(v27) = v23 + *v31; /*0x6d5c05*/
          HIWORD(v27) = HIWORD(v23) + v31[1]; /*0x6d5c13*/
          result = (int)&v28[-1].field_178 + 3; /*0x6d5c20*/
          v19 = v28 == (ConvertClass *)1; /*0x6d5c20*/
          v23 = v27; /*0x6d5c21*/
          v28 = (ConvertClass *)((char *)v28 - 1); /*0x6d5c25*/
        }
        while ( !v19 ); /*0x6d5c29*/
      }
    }
LABEL_14:
    v3 = i + 2; /*0x6d5c2f*/
  }
  return result; /*0x6d5c43*/
}


// ==== 0x006D5C50  ObjectClass::RenderRadarBlips  this=AbstractClass  sig=csp ====
int __thiscall RenderRadarBlips(_DWORD *this, char a2, AbstractClass *aP2)
{
  int result; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // esi
  _WORD *v7; // ebx
  __int16 v8; // ax
  int v9; // eax
  void *v10; // eax
  __int16 v11; // dx
  int v12; // edi
  int v13; // ebp
  int *v14; // ecx
  int v15; // eax
  int v16; // kr08_4
  int v17; // eax
  int v18; // eax
  __int16 v19; // cx
  bool v20; // zf
  IUnknown *v21; // [esp-1Ch] [ebp-6Ch]
  IUnknown *v22; // [esp-14h] [ebp-64h]
  ConvertClass *v23; // [esp+0h] [ebp-50h] BYREF
  AbstractClass *v24; // [esp+4h] [ebp-4Ch] BYREF
  AbstractClass *var48; // [esp+8h] [ebp-48h]
  ConvertClass *v25; // [esp+Ch] [ebp-44h]
  ConvertClass *v27; // [esp+10h] [ebp-40h]
  int v28; // [esp+14h] [ebp-3Ch]
  int i; // [esp+18h] [ebp-38h]
  int v30; // [esp+1Ch] [ebp-34h]
  _DWORD *v31; // [esp+20h] [ebp-30h]
  int v32; // [esp+24h] [ebp-2Ch]
  int v33; // [esp+28h] [ebp-28h] BYREF
  int v34; // [esp+2Ch] [ebp-24h]
  _DWORD v35[2]; // [esp+30h] [ebp-20h] BYREF
  int v36[3]; // [esp+38h] [ebp-18h] BYREF
  int v37; // [esp+44h] [ebp-Ch]
  int v38; // [esp+48h] [ebp-8h] BYREF

  v31 = this; /*0x6d5c58*/
  v30 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3796] + 1312) + 3668); /*0x6d5c6a*/
  result = v30; /*0x6d5c62*/
  if ( v30 )
  {
    LOBYTE(result) = 0; /*0x6d5c76*/
    for ( i = 0; i < 8; i += 2 )
    {
      v24 = aP2; /*0x6d5c88*/
      v4 = 0; /*0x6d5c8c*/
      v5 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3796] + 1312); /*0x6d5c8e*/
      v6 = *(int *)(v5 + 1464) >> 8; /*0x6d5c9a*/
      if ( v6 > 0 )
      {
        v7 = (_WORD *)(4 * (result & 7) + 9041544); /*0x6d5ca8*/
        while ( 1 ) /*0x6d5cbb*/
        {
          v8 = HIWORD(v24) + v7[1]; /*0x6d5cbb*/
          LOWORD(var48) = (_WORD)v24 + *v7; /*0x6d5cc0*/
          HIWORD(var48) = v8; /*0x6d5cc5*/
          v24 = var48; /*0x6d5cd2*/
          v9 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v24) + 17); /*0x6d5ce1*/
          if ( v9 != -1 /*0x6d5d12*/
            && *(_DWORD *)(v30 + 660) == v9
            && *(_DWORD *)&HouseClass_Player->__pad_28[8] == *((_DWORD *)CellCoord::To_CellObj(
                                                                           &MEMORY[0x87F7E8],
                                                                           (__int16 *)&v24)
                                                             + 20) )
          {
            break; /*0x6d5d12*/
          }
          v22 = HouseClass_Player; /*0x6d5d1f*/
          v21 = *(IUnknown **)(v5 + 1660); /*0x6d5d25*/
          v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v24); /*0x6d5d2c*/
          if ( CellClass::IsPassable((int)v10, v21, (IUnknown *)v5, v22) ) /*0x6d5d33*/
          {
            if ( ++v4 < v6 ) /*0x6d5d43*/
              continue; /*0x6d5d43*/
          }
          goto LABEL_14; /*0x6d5d43*/
        }
        if ( v4 > 0 )
        {
          v11 = HIWORD(aP2) + v7[1]; /*0x6d5d6a*/
          LOWORD(v25) = (_WORD)aP2 + *v7; /*0x6d5d79*/
          v32 = a2 != 0 ? 67078 : 132614;
          HIWORD(v25) = v11; /*0x6d5d82*/
          v23 = v25; /*0x6d5d8d*/
          v28 = v4; /*0x6d5d97*/
          do /*0x6d5f09*/
          {
            v12 = -1 - 15 * *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v23) + 283); /*0x6d5dc4*/
            v13 = -2 - 15 * *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v23) + 283); /*0x6d5de2*/
            v14 = IsoCoord::ToPixel( /*0x6d5e27*/
                    &v38,
                    ((((__int16)v23 << 8) + 128) / 256) << 8,
                    (Tactical *)((((SHIWORD(v23) << 8) + 128) / 256) << 8));
            v15 = *v14; /*0x6d5e29*/
            v37 = v14[1]; /*0x6d5e30*/
            v16 = v15; /*0x6d5e3b*/
            v17 = ZCoordToScreenY(0); /*0x6d5e42*/
            v33 = v16 / 256; /*0x6d5e54*/
            v34 = v37 / 256 - v17; /*0x6d5e63*/
            v18 = v31[45]; /*0x6d5e76*/
            v35[0] = v31[44]; /*0x6d5e7c*/
            v35[1] = v18; /*0x6d5e80*/
            Vector2::Subtract(&v33, v35); /*0x6d5e84*/
            v33 -= 30; /*0x6d5e96*/
            v36[0] = v33 + 30; /*0x6d5e9d*/
            v36[1] = v34 + v12; /*0x6d5ea5*/
            DrawToSurfaceSHP( /*0x6d5ed8*/
              *(int *)&MEMORY[0x87F8E4].__pad_5568[9416],
              (int)MEMORY[0x87F6C4],
              *(int *)&MEMORY[0x89F690].__pad_BC0[428],
              0,
              v36,
              (int *)&MEMORY[0x87F8E4].__pad_5568[8532],
              v32,
              0,
              v13,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
            v19 = v7[1]; /*0x6d5ee0*/
            LOWORD(v27) = (_WORD)v23 + *v7; /*0x6d5eee*/
            HIWORD(v27) = HIWORD(v23) + v19; /*0x6d5ef7*/
            v20 = v28 == 1; /*0x6d5f00*/
            v23 = v27; /*0x6d5f01*/
            --v28; /*0x6d5f05*/
          }
          while ( !v20 ); /*0x6d5f09*/
        }
      }
LABEL_14:
      result = i + 2; /*0x6d5f0f*/
    }
  }
  return result; /*0x6d5f27*/
}


// ==== 0x006D5F60  TacticalClass::SetViewportPosition  this=Tactical  sig=csp ====
unsigned int __thiscall sub_6D5F60(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  unsigned int result; // eax
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h]

  MEMORY[0xB0CE28] = *a2; /*0x6d5f6c*/
  MEMORY[0xB0CE2C] = a2[1]; /*0x6d5f75*/
  MEMORY[0xB0CE30] = a2[2]; /*0x6d5f7e*/
  MEMORY[0xB0CE34] = a2[3]; /*0x6d5f87*/
  v3 = *(_DWORD *)(this + 3444); /*0x6d5f93*/
  v8 = *(_DWORD *)(this + 3448); /*0x6d5f9d*/
  v7 = v3; /*0x6d5fa4*/
  if ( !ClampCoordMap(&v7) || MEMORY[0xA8ED6B] ) /*0x6d5fb8*/
  {
    v4 = *(_DWORD *)(this + 3444); /*0x6d5fc4*/
    v5 = *(_DWORD *)(this + 3448); /*0x6d5fca*/
  }
  else
  {
    v4 = v7; /*0x6d5fba*/
    v5 = v8; /*0x6d5fbe*/
  }
  *(_DWORD *)(this + 3428) = v4; /*0x6d5fd0*/
  *(_DWORD *)(this + 3444) = v4; /*0x6d5fd6*/
  *(_DWORD *)(this + 3432) = v5; /*0x6d5fdc*/
  *(_DWORD *)(this + 3448) = v5; /*0x6d5fe2*/
  result = TacticalClass::CalcViewportCells(this); /*0x6d5fea*/
  *(_BYTE *)(this + 3453) = 1; /*0x6d5fef*/
  return result; /*0x6d5ff6*/
}


// ==== 0x006D6000  TacticalMapClass::SetCameraPosition  this=AbstractClass  sig=csp ====
unsigned int __thiscall sub_6D6000(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  unsigned int result; // eax
  int v7; // [esp+8h] [ebp-8h] BYREF
  int v8; // [esp+Ch] [ebp-4h]

  v3 = *a2; /*0x6d6012*/
  v8 = a2[1]; /*0x6d6014*/
  v7 = v3; /*0x6d601b*/
  if ( !ClampCoordMap(&v7) || MEMORY[0xA8ED6B] ) /*0x6d602f*/
  {
    v4 = *a2; /*0x6d603b*/
    v5 = a2[1]; /*0x6d603d*/
  }
  else
  {
    v4 = v7; /*0x6d6031*/
    v5 = v8; /*0x6d6035*/
  }
  *(_DWORD *)(this + 3428) = v4; /*0x6d6040*/
  *(_DWORD *)(this + 3444) = v4; /*0x6d6046*/
  *(_DWORD *)(this + 3432) = v5; /*0x6d604c*/
  *(_DWORD *)(this + 3448) = v5; /*0x6d6052*/
  result = TacticalClass::CalcViewportCells(this); /*0x6d605a*/
  *(_BYTE *)(this + 3453) = 1; /*0x6d605f*/
  return result; /*0x6d6066*/
}


// ==== 0x006D6070  Tactical::SetTacticalPosition  this=AbstractClass  sig=csp ====
unsigned int __thiscall Tactical::SetTacticalPosition(int this, IUnknown *aP1)
{
  int v3; // esi
  int v4; // ebx
  IUnknown *v5; // esi
  int v6; // ebx
  unsigned int result; // eax
  IUnknown *v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  v3 = aP1->field_0; /*0x6d607d*/
  v9 = aP1->field_4; /*0x6d6083*/
  v8 = (IUnknown *)(-60 * v9 / 2 + 60 * v3 / 2); /*0x6d60c3*/
  v4 = 30 * v9 / 2 + 30 * v3 / 2; /*0x6d60de*/
  v5 = (IUnknown *)((int)v8 / 256); /*0x6d60e2*/
  v6 = v4 / 256 - ZCoordToScreenY(aP1->field_8); /*0x6d6118*/
  v8 = (IUnknown *)((int)v8 / 256); /*0x6d611d*/
  v9 = v6; /*0x6d6121*/
  if ( ClampCoordMap((int *)&v8) && !MEMORY[0xA8D63C].__pad_14B0[639] ) /*0x6d6135*/
  {
    v5 = v8; /*0x6d6137*/
    v6 = v9; /*0x6d613b*/
  }
  *(_DWORD *)(this + 3428) = v5; /*0x6d613f*/
  *(_DWORD *)(this + 3444) = v5; /*0x6d6145*/
  *(_DWORD *)(this + 3432) = v6; /*0x6d614d*/
  *(_DWORD *)(this + 3448) = v6; /*0x6d6153*/
  result = TacticalClass::CalcViewportCells(this); /*0x6d6159*/
  *(_BYTE *)(this + 3453) = 1; /*0x6d615e*/
  return result; /*0x6d6165*/
}


// ==== 0x006D6170  ObjectClass::RequestMapSnapshot  this=AbstractClass  sig=csp ====
IUnknown *__thiscall RequestMapSnapshot(_DWORD *this, AbstractClass *aP1)
{
  *(_DWORD *)aP1->__pad_0 = this->qD64; /*0x6d617a*/
  *(_DWORD *)&aP1->__pad_0[4] = this->qD68; /*0x6d6182*/
  return (IUnknown *)aP1; /*0x6d6185*/
}


// ==== 0x006D6190  ObjectClass::ComputeDelta  this=AbstractClass  sig=csp ====
int *__thiscall ObjectClass_ComputeDelta(_DWORD *this, int *a2)
{
  int v2; // edx
  int v4; // ecx

  v2 = this->qD64 - this->q0B0; /*0x6d61a9*/
  v4 = this->qD68 - this->q0B4; /*0x6d61af*/
  *a2 = v2; /*0x6d61b2*/
  a2[1] = v4; /*0x6d61b4*/
  return a2; /*0x6d61b1*/
}


// ==== 0x006D61C0  sub_6D61C0  this=-  sig=ida-proto ====
int __fastcall sub_6D61C0(int a1, int a2, int *a3, int *a4)
{
  int result; // eax

  *a3 = 60 * a1 / 2; /*0x6d61d6*/
  *a4 = 30 * a1 / 2; /*0x6d61e9*/
  *a3 += -60 * a2 / 2; /*0x6d6203*/
  result = 30 * a2 / 2; /*0x6d6211*/
  *a4 += result; /*0x6d6215*/
  return result; /*0x6d6205*/
}


// ==== 0x006D62E0  IsoCoord::ToScreenOffset  this=AbstractClass  sig=csp ====
int __stdcall IsoCoord::ToScreenOffset(AbstractClass *aP0, AbstractClass *aP1, AbstractClass *aP2, AbstractClass *aP3)
{
  int result; // eax

  *(_DWORD *)aP2->__pad_0 = 60 * (int)aP0 / 2; /*0x6d62fc*/
  *(_DWORD *)aP3->__pad_0 = 30 * (int)aP0 / 2; /*0x6d630f*/
  *(_DWORD *)aP2->__pad_0 += -60 * (int)aP1 / 2; /*0x6d6329*/
  *(_DWORD *)aP3->__pad_0 += 30 * (int)aP1 / 2; /*0x6d633a*/
  *(int *)aP2->__pad_0 /= 256; /*0x6d634a*/
  *(int *)aP3->__pad_0 /= 256; /*0x6d635a*/
  result = *(_DWORD *)aP2->__pad_0 + 15360; /*0x6d635e*/
  *(_DWORD *)aP2->__pad_0 = result; /*0x6d6364*/
  return result; /*0x6d632b*/
}


// ==== 0x006D6410  Terrain::ClimbCheck  this=AbstractClass  sig=csp ====
_DWORD *__stdcall Terrain::ClimbCheck(AbstractClass *aP0, AbstractClass *aP1)
{
  int v2; // ecx
  IUnknown *v3; // esi
  IUnknown *v4; // edi
  bool v5; // bl
  int v6; // ebp
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // ecx
  TechnoClass *v12; // [esp+10h] [ebp-18h] BYREF
  TechnoClass *v13; // [esp+14h] [ebp-14h]
  int v14; // [esp+18h] [ebp-10h]
  int v15; // [esp+24h] [ebp-4h]

  v2 = *(_DWORD *)aP1->__pad_0 / 256; /*0x6d6434*/
  HIWORD(aP1) = *(_DWORD *)&aP1->__pad_0[4] / 256; /*0x6d6440*/
  LOWORD(aP1) = v2; /*0x6d6445*/
  v3 = (IUnknown *)(((__int16)v2 << 8) + 128); /*0x6d6462*/
  v4 = (IUnknown *)((SHIWORD(aP1) << 8) + 128); /*0x6d6468*/
  v5 = (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP1) + 80) & 0x1000) != 0; /*0x6d6486*/
  v6 = (int)&v4->__pad_524[220]; /*0x6d649d*/
  v14 = *((char *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP1) + 283); /*0x6d64a3*/
  v7 = (int)&v3->__pad_524[220]; /*0x6d64a7*/
  v15 = 0; /*0x6d64a9*/
  while ( 1 ) /*0x6d64b1*/
  {
    v7 -= 8; /*0x6d64b1*/
    v6 -= 8; /*0x6d64c1*/
    LOWORD(v13) = v7 / 256; /*0x6d64c9*/
    HIWORD(v13) = v6 / 256; /*0x6d64e0*/
    v12 = v13; /*0x6d64e9*/
    v8 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v12); /*0x6d64f3*/
    v9 = *((char *)v8 + 283) - v14; /*0x6d64ff*/
    if ( v5 ) /*0x6d6505*/
      v9 += 4 * ((v8[80] >> 8) & 1); /*0x6d6513*/
    v10 = v9 << 7; /*0x6d6516*/
    if ( (__int16)((v7 - v10) / 256) <= (__int16)aP1 && (__int16)((v6 - v10) / 256) <= SHIWORD(aP1) ) /*0x6d654e*/
      break; /*0x6d654e*/
    if ( v12 == (TechnoClass *)aP1 ) /*0x6d6555*/
    {
      *(_DWORD *)aP0->__pad_0 = aP1; /*0x6d6582*/
      return aP0->__pad_0; /*0x6d655b*/
    }
  }
  *(_DWORD *)aP0->__pad_0 = v12; /*0x6d6572*/
  return aP0->__pad_0; /*0x6d656f*/
}


// ==== 0x006D6590  Tactical::PixelToCell  this=AbstractClass  sig=csp ====
_DWORD *__thiscall Tactical::PixelToCell(int this, AbstractClass *aP1, IUnknown *aP2)
{
  int v3; // eax
  int v5; // eax
  int v6; // ecx
  float *v7; // eax
  BuildingTypeClass *v8; // esi
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  int v12; // ecx
  float *v13; // eax
  BuildingTypeClass *v14; // esi
  int v15; // eax
  VectorClass *v16; // esi
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  int v21; // ecx
  int *v22; // eax
  int v23; // ecx
  int v24; // ebx
  int v25; // ebp
  bool v26; // cc
  char v28; // [esp+13h] [ebp-69h]
  char v29; // [esp+14h] [ebp-68h]
  char v30; // [esp+15h] [ebp-67h]
  char v31; // [esp+16h] [ebp-66h]
  char v32; // [esp+17h] [ebp-65h]
  int v33; // [esp+18h] [ebp-64h]
  _DWORD *NeighbourContent; // [esp+1Ch] [ebp-60h]
  _DWORD *v35; // [esp+20h] [ebp-5Ch]
  int i; // [esp+24h] [ebp-58h]
  int v37; // [esp+28h] [ebp-54h]
  int v38; // [esp+2Ch] [ebp-50h] BYREF
  int v39; // [esp+34h] [ebp-48h]
  int v40; // [esp+38h] [ebp-44h]
  int v41; // [esp+3Ch] [ebp-40h]
  int v42; // [esp+40h] [ebp-3Ch]
  int v43[2]; // [esp+44h] [ebp-38h] BYREF
  float v44; // [esp+4Ch] [ebp-30h] BYREF
  float v45; // [esp+50h] [ebp-2Ch]
  int v46; // [esp+54h] [ebp-28h]
  float v47; // [esp+58h] [ebp-24h] BYREF
  float v48; // [esp+5Ch] [ebp-20h]
  int v49; // [esp+60h] [ebp-1Ch]
  float v50[3]; // [esp+64h] [ebp-18h] BYREF
  float v51[3]; // [esp+70h] [ebp-Ch] BYREF
  char aP2a; // [esp+84h] [ebp+8h]
  IUnknown *aP2b; // [esp+84h] [ebp+8h]

  v3 = aP2->field_0; /*0x6d659f*/
  v46 = 0; /*0x6d65ab*/
  v5 = *(_DWORD *)(this + 176) + v3; /*0x6d65bf*/
  v6 = aP2->field_4 + *(_DWORD *)(this + 180); /*0x6d65c6*/
  v41 = v5 - *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x6d65c8*/
  v42 = v6 - *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x6d65d2*/
  v44 = (float)(v5 - *(_DWORD *)&stru_87C374.__pad_579C[21648]); /*0x6d65e1*/
  v45 = (float)(v6 - *(_DWORD *)&stru_87C374.__pad_579C[21652]); /*0x6d65ed*/
  v7 = TransformMatrix3x4Point((AbstractClass *)v50, (IUnknown *)(this + 3556), (IUnknown *)&v44); /*0x6d65f1*/
  v44 = *v7; /*0x6d65f8*/
  v45 = v7[1]; /*0x6d6603*/
  v46 = *((_DWORD *)v7 + 2); /*0x6d660a*/
  v8 = (BuildingTypeClass *)Math::RoundToInt(v44); /*0x6d6617*/
  v9 = Math::RoundToInt(v45); /*0x6d6619*/
  LODWORD(v47) = (unsigned __int8)v8; /*0x6d6631*/
  LOWORD(v37) = (int)v8 / 256; /*0x6d6638*/
  LODWORD(v48) = (unsigned __int8)v9; /*0x6d664c*/
  HIWORD(v37) = v9 / 256; /*0x6d6663*/
  v49 = 0; /*0x6d6668*/
  Coord::To_ScreenRaw((AbstractClass *)v43, (IUnknown *)&v47); /*0x6d666c*/
  v10 = aP2->field_4 - *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x6d6684*/
  v41 = aP2->field_0 - *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x6d668a*/
  v11 = v10 + 180; /*0x6d668e*/
  v42 = v10; /*0x6d6694*/
  v39 = v41; /*0x6d6698*/
  v40 = v10 + 180; /*0x6d669c*/
  for ( i = 0; ; ++i )
  {
    v12 = *(_DWORD *)(this + 180); /*0x6d66b4*/
    v43[0] = v39 + *(_DWORD *)(this + 176); /*0x6d66bc*/
    v43[1] = v11 + v12; /*0x6d66c6*/
    v47 = (float)v43[0]; /*0x6d66d5*/
    v49 = 0; /*0x6d66e1*/
    v48 = (float)(v11 + v12); /*0x6d66e9*/
    v13 = TransformMatrix3x4Point((AbstractClass *)v51, (IUnknown *)(this + 3556), (IUnknown *)&v47); /*0x6d66ed*/
    v47 = *v13; /*0x6d66f4*/
    v48 = v13[1]; /*0x6d66ff*/
    v49 = *((_DWORD *)v13 + 2); /*0x6d6706*/
    v14 = (BuildingTypeClass *)Math::RoundToInt(v47); /*0x6d6713*/
    v15 = Math::RoundToInt(v48); /*0x6d6715*/
    LOWORD(v38) = (int)v14 / 256; /*0x6d672a*/
    HIWORD(v38) = v15 / 256; /*0x6d6747*/
    v16 = (VectorClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v38); /*0x6d6751*/
    v33 = v11 - 15 * SHIBYTE(v16[17].Capacity); /*0x6d6768*/
    if ( ((int)v16[20].vtable0 & 0x100) != 0 )
    {
      NeighbourContent = Cell::GetNeighbourContent(v16, 2u); /*0x6d6786*/
      v35 = Cell::GetNeighbourContent(v16, 4u); /*0x6d678f*/
      if ( ((int)v16[20].vtable0 & 0x800) == 0 /*0x6d67b7*/
        || (aP2a = 1, (*((_DWORD *)Cell::GetNeighbourContent(v16, 0) + 80) & 0x100) != 0) )
      {
        aP2a = 0; /*0x6d67b9*/
      }
      if ( ((int)v16[20].vtable0 & 0x800) != 0 /*0x6d67e2*/
        || (v28 = 1, (*((_DWORD *)Cell::GetNeighbourContent(v16, 6u) + 80) & 0x100) != 0) )
      {
        v28 = 0; /*0x6d67e4*/
      }
      v17 = (int)v16[20].vtable0 & 0x800; /*0x6d67ef*/
      if ( !v17 || (v29 = 1, (v35[80] & 0x100) != 0) ) /*0x6d6806*/
        v29 = 0; /*0x6d6808*/
      if ( v17 || (v31 = 1, (NeighbourContent[80] & 0x100) != 0) ) /*0x6d6820*/
        v31 = 0; /*0x6d6822*/
      if ( !v17 /*0x6d6858*/
        || (v18 = SHIBYTE(v16[17].Capacity) - *((char *)NeighbourContent + 283),
            (int)((HIDWORD(v18) ^ v18) - HIDWORD(v18)) > 1)
        || (v32 = 1, (NeighbourContent[80] & 0x100) != 0) )
      {
        v32 = 0; /*0x6d685a*/
      }
      if ( v17 /*0x6d688e*/
        || (v19 = SHIBYTE(v16[17].Capacity) - *((char *)v35 + 283), (int)((HIDWORD(v19) ^ v19) - HIDWORD(v19)) > 1)
        || (v30 = 1, (v35[80] & 0x100) != 0) )
      {
        v30 = 0; /*0x6d6890*/
      }
      v20 = SLOWORD(v16[2].Items); /*0x6d6899*/
      v21 = SHIWORD(v16[2].Items) << 8; /*0x6d68a8*/
      v50[2] = 0.0; /*0x6d68ab*/
      LODWORD(v50[1]) = v21; /*0x6d68b2*/
      LODWORD(v50[0]) = v20 << 8; /*0x6d68ca*/
      v22 = Coord::To_ScreenRaw((AbstractClass *)&v44, (IUnknown *)v50); /*0x6d68ce*/
      v23 = -30 * SHIBYTE(v16[17].Capacity) / 2 + v22[1] - *(_DWORD *)(this + 180); /*0x6d68ff*/
      if ( v23 <= v10 ) /*0x6d6903*/
      {
        if ( v29 || v30 ) /*0x6d6917*/
        {
          *(_DWORD *)aP1->__pad_0 = v38 + 0x10000; /*0x6d6a61*/
          return aP1->__pad_0; /*0x6d6a67*/
        }
        if ( v31 || v32 ) /*0x6d692f*/
        {
          HIWORD(aP2b) = HIWORD(v38); /*0x6d6a0c*/
          LOWORD(aP2b) = v38 + 1; /*0x6d6a1b*/
          *(_DWORD *)aP1->__pad_0 = aP2b; /*0x6d6a2d*/
          return aP1->__pad_0; /*0x6d6a33*/
        }
      }
      if ( aP2a || v28 )
      {
        v24 = v41 - (*v22 - *(_DWORD *)(this + 176)); /*0x6d6971*/
        v25 = v42 - v23; /*0x6d6977*/
        if ( aP2a && v25 - v24 / 2 > 15 || v28 && v25 + v24 / 2 > 15 )
          v33 -= ((int)v16[20].vtable0 & 0x100) != 0 ? 0x3C : 0;
        v10 = v42; /*0x6d69c0*/
      }
      else
      {
        v33 -= ((int)v16[20].vtable0 & 0x100) != 0 ? 0x3C : 0;
      }
    }
    if ( v33 <= v10 ) /*0x6d69c8*/
      break; /*0x6d69c8*/
    v26 = i + 1 < 180; /*0x6d69d8*/
    --v40; /*0x6d69dd*/
    if ( !v26 ) /*0x6d69e5*/
    {
      *(_DWORD *)aP1->__pad_0 = v37; /*0x6d69f9*/
      return aP1->__pad_0; /*0x6d69ff*/
    }
    v11 = v40; /*0x6d66a6*/
  }
  *(_DWORD *)aP1->__pad_0 = v38; /*0x6d6a78*/
  return aP1->__pad_0; /*0x6d69f6*/
}


// ==== 0x006D6A90  sub_6D6A90  this=unknown  sig=csp ====
__int64 __stdcall sub_6D6A90(_DWORD *a1)
{
  void *v1; // eax
  int v2; // edx
  _DWORD v4[2]; // [esp+4h] [ebp-8h] BYREF

  v1 = Coord::To_Cell(&MEMORY[0x87F7E8], a1); /*0x6d6a9e*/
  v2 = a1[1]; /*0x6d6aa5*/
  v4[0] = *a1; /*0x6d6aa8*/
  v4[1] = v2; /*0x6d6ab3*/
  return Isometric::InitTables((int)v1, v4); /*0x6d6abc*/
}


// ==== 0x006D6AD0  CellClass::GetByte284  this=AbstractClass  sig=csp ====
int __stdcall CellClass::GetByte284(IUnknown *aP0)
{
  return *((unsigned __int8 *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], aP0) + 284); /*0x6d6ae9*/
}


// ==== 0x006D6BB0  sub_6D6BB0  this=unknown  sig=csp ====
_DWORD *__stdcall sub_6D6BB0(_WORD *a1)
{
  _WORD *v1; // edi
  __int16 v2; // ax
  int v3; // esi
  _DWORD *result; // eax
  int v5; // ecx
  __int16 v6; // cx
  int v7; // esi
  int v8; // ecx
  __int16 v9; // ax
  int v10; // esi
  int v11; // ecx
  __int16 v12; // cx
  int v13; // esi
  int v14; // ecx

  v1 = a1; /*0x6d6bb2*/
  v2 = *a1 + 2; /*0x6d6bbd*/
  HIWORD(a1) = a1[1]; /*0x6d6bc1*/
  LOWORD(a1) = v2; /*0x6d6bc6*/
  v3 = 0; /*0x6d6bd3*/
  while ( 1 ) /*0x6d6bdf*/
  {
    result = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x6d6bdf*/
    v5 = result[80]; /*0x6d6be4*/
    if ( (v5 & 0x80u) != 0 && result[17] && (v5 & 0x800) != 0 ) /*0x6d6bf9*/
      break; /*0x6d6bf9*/
    ++HIWORD(a1); /*0x6d6bff*/
    if ( ++v3 >= 5 ) /*0x6d6c08*/
    {
      v6 = *v1 + 1; /*0x6d6c11*/
      HIWORD(a1) = v1[1]; /*0x6d6c13*/
      LOWORD(a1) = v6; /*0x6d6c18*/
      v7 = 0; /*0x6d6c25*/
      while ( 1 ) /*0x6d6c31*/
      {
        result = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x6d6c31*/
        v8 = result[80]; /*0x6d6c36*/
        if ( (v8 & 0x80u) != 0 && result[17] && (v8 & 0x800) != 0 ) /*0x6d6c4b*/
          break; /*0x6d6c4b*/
        ++HIWORD(a1); /*0x6d6c51*/
        if ( ++v7 >= 5 ) /*0x6d6c5a*/
        {
          v9 = v1[1] + 2; /*0x6d6c63*/
          LOWORD(a1) = *v1; /*0x6d6c67*/
          HIWORD(a1) = v9; /*0x6d6c6c*/
          v10 = 0; /*0x6d6c79*/
          while ( 1 ) /*0x6d6c85*/
          {
            result = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x6d6c85*/
            v11 = result[80]; /*0x6d6c8a*/
            if ( (v11 & 0x80u) != 0 && result[17] && (v11 & 0x800) == 0 ) /*0x6d6c9f*/
              break; /*0x6d6c9f*/
            LOWORD(a1) = (_WORD)a1 + 1; /*0x6d6ca1*/
            if ( ++v10 >= 5 ) /*0x6d6caa*/
            {
              v12 = v1[1] + 1; /*0x6d6cb3*/
              LOWORD(a1) = *v1; /*0x6d6cb5*/
              HIWORD(a1) = v12; /*0x6d6cba*/
              v13 = 0; /*0x6d6cc7*/
              while ( 1 ) /*0x6d6cd3*/
              {
                result = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x6d6cd3*/
                v14 = result[80]; /*0x6d6cd8*/
                if ( (v14 & 0x80u) != 0 && result[17] && (v14 & 0x800) == 0 ) /*0x6d6ced*/
                  break; /*0x6d6ced*/
                LOWORD(a1) = (_WORD)a1 + 1; /*0x6d6cef*/
                if ( ++v13 >= 5 ) /*0x6d6cf8*/
                  return 0; /*0x6d6cfa*/
              }
              return result; /*0x6d6ced*/
            }
          }
          return result; /*0x6d6c9f*/
        }
      }
      return result; /*0x6d6c4b*/
    }
  }
  return result; /*0x6d6cfc*/
}


// ==== 0x006D6D10  TacticalClass::DrawBuildingsInView  this=AbstractClass  sig=csp ====
int *__thiscall TacticalClass::DrawBuildingsInView(int this, AbstractClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  float *v6; // eax
  BuildingTypeClass *v7; // ebx
  int v8; // eax
  int v9; // ebx
  int v10; // edx
  int v11; // ecx
  int v12; // ebp
  int *result; // eax
  int v14; // ecx
  int v15; // ebp
  int v16; // ecx
  ObjectClass *v17; // eax
  ObjectClass *v18; // ebx
  int *StartCoords; // eax
  int *v20; // eax
  int *v21; // eax
  int v22; // edx
  int v23; // esi
  int v24; // ecx
  int v25; // ebp
  BuildingTypeClass *v26; // ecx
  _DWORD *v27; // eax
  int v28; // ebx
  int *PlacementRect; // eax
  int *v30; // eax
  BuildingTypeClass *v31; // [esp+10h] [ebp-B0h] BYREF
  int v32; // [esp+14h] [ebp-ACh]
  BuildingTypeClass *v33; // [esp+18h] [ebp-A8h]
  int v34; // [esp+1Ch] [ebp-A4h]
  int v35; // [esp+20h] [ebp-A0h]
  BuildingTypeClass *v36; // [esp+24h] [ebp-9Ch]
  _DWORD v37[2]; // [esp+28h] [ebp-98h]
  _DWORD var90[2]; // [esp+30h] [ebp-90h] BYREF
  BuildingTypeClass *v38; // [esp+38h] [ebp-88h]
  float v40; // [esp+3Ch] [ebp-84h] BYREF
  float v41; // [esp+40h] [ebp-80h]
  int v42; // [esp+44h] [ebp-7Ch]
  int a1; // [esp+48h] [ebp-78h] BYREF
  int var74; // [esp+4Ch] [ebp-74h]
  IUnknown *v44; // [esp+50h] [ebp-70h]
  int v46; // [esp+54h] [ebp-6Ch] BYREF
  int v47; // [esp+58h] [ebp-68h]
  int v48; // [esp+5Ch] [ebp-64h]
  int v49; // [esp+60h] [ebp-60h]
  int a2[4]; // [esp+64h] [ebp-5Ch] BYREF
  int v51; // [esp+74h] [ebp-4Ch]
  BuildingTypeClass *v52; // [esp+78h] [ebp-48h] BYREF
  int v53; // [esp+7Ch] [ebp-44h]
  int v54; // [esp+80h] [ebp-40h]
  _DWORD v55[3]; // [esp+84h] [ebp-3Ch] BYREF
  int var30; // [esp+90h] [ebp-30h] BYREF
  AbstractClass *v56; // [esp+94h] [ebp-2Ch]
  int v58[4]; // [esp+A0h] [ebp-20h] BYREF
  int v59[4]; // [esp+B0h] [ebp-10h] BYREF

  v3 = *(_DWORD *)aP1->__pad_0; /*0x6d6d2f*/
  v42 = 0; /*0x6d6d31*/
  v4 = *(_DWORD *)(this + 176) + v3; /*0x6d6d45*/
  v5 = *(_DWORD *)&aP1->__pad_0[4] + *(_DWORD *)(this + 180); /*0x6d6d4c*/
  v34 = v4 - *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x6d6d4e*/
  v35 = v5 - *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x6d6d58*/
  v40 = (float)(v4 - *(_DWORD *)&stru_87C374.__pad_579C[21648]); /*0x6d6d67*/
  v41 = (float)(v5 - *(_DWORD *)&stru_87C374.__pad_579C[21652]); /*0x6d6d73*/
  v6 = TransformMatrix3x4Point((AbstractClass *)&a1, (IUnknown *)(this + 3556), (IUnknown *)&v40); /*0x6d6d77*/
  v40 = *v6; /*0x6d6d7e*/
  v41 = v6[1]; /*0x6d6d89*/
  v42 = *((_DWORD *)v6 + 2); /*0x6d6d90*/
  v7 = (BuildingTypeClass *)Math::RoundToInt(v40); /*0x6d6d9d*/
  v8 = Math::RoundToInt(v41); /*0x6d6d9f*/
  v52 = v7; /*0x6d6da6*/
  v53 = v8; /*0x6d6dac*/
  v54 = 0; /*0x6d6db0*/
  if ( v8 < 0 ) /*0x6d6db7*/
    v53 = 0; /*0x6d6db9*/
  if ( (int)v7 < 0 ) /*0x6d6dbf*/
    v52 = 0; /*0x6d6dc1*/
  v9 = *((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v52) + 9); /*0x6d6dd4*/
  v10 = (unsigned __int64)(2290649225LL * *(int *)&aP1->__pad_0[12]) >> 32; /*0x6d6de3*/
  v11 = *(_DWORD *)&aP1->__pad_0[8]; /*0x6d6de5*/
  v37[0] = v9; /*0x6d6df3*/
  v12 = (v10 >> 3) + ((unsigned int)v10 >> 31) + 20; /*0x6d6df7*/
  v38 = (BuildingTypeClass *)(v11 / 60 + 4); /*0x6d6e17*/
  result = ClipRectIntersection((IUnknown *)&var30, (IUnknown *)&stru_87C374.__pad_579C[21648], (IUnknown *)aP1, 0, 0); /*0x6d6e20*/
  v14 = *result; /*0x6d6e25*/
  HIWORD(v37[0]) = HIWORD(v9) - 2; /*0x6d6e27*/
  a2[0] = v14; /*0x6d6e2d*/
  v15 = v12 + 1; /*0x6d6e37*/
  a2[1] = result[1]; /*0x6d6e38*/
  LOWORD(v37[0]) = v9 - 4; /*0x6d6e3c*/
  v16 = result[2]; /*0x6d6e41*/
  v51 = v15; /*0x6d6e44*/
  a2[2] = v16; /*0x6d6e48*/
  a2[3] = result[3]; /*0x6d6e51*/
  if ( v15 >= 0 ) /*0x6d6e55*/
  {
    v32 = v15 + 1; /*0x6d6e5e*/
    do /*0x6d702b*/
    {
      LOWORD(v34) = v15 / 2; /*0x6d6e69*/
      HIWORD(v34) = v32 / 2; /*0x6d6e7b*/
      LOWORD(v33) = LOWORD(v37[0]) + v34; /*0x6d6e8a*/
      HIWORD(v33) = HIWORD(v37[0]) + HIWORD(v34); /*0x6d6e95*/
      result = &v38->vtable0; /*0x6d6e9a*/
      v31 = v33; /*0x6d6ea4*/
      if ( (int)v38 > 0 ) /*0x6d6ea8*/
      {
        v36 = v38; /*0x6d6eae*/
        do /*0x6d7019*/
        {
          if ( LayerClass::CoordinatesLegal(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v31) ) /*0x6d6ebc*/
          {
            v17 = (ObjectClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v31); /*0x6d6ed3*/
            v18 = v17; /*0x6d6ed8*/
            if ( v17->ambientSoundController[2] != -1 ) /*0x6d6ede*/
            {
              StartCoords = House::GetStartCoords((int)v17, (IUnknown *)v58); /*0x6d6eee*/
              v46 = *StartCoords; /*0x6d6ef7*/
              v47 = StartCoords[1]; /*0x6d6f00*/
              v48 = StartCoords[2]; /*0x6d6f07*/
              v49 = StartCoords[3]; /*0x6d6f19*/
              v20 = ClipRectIntersection((IUnknown *)v59, (IUnknown *)a2, (IUnknown *)&v46, 0, 0); /*0x6d6f22*/
              var30 = *v20; /*0x6d6f2b*/
              v56 = (AbstractClass *)v20[1]; /*0x6d6f35*/
              if ( v20[2] > 0 && v20[3] > 0 ) /*0x6d6f4c*/
              {
                Coord::Subtract( /*0x6d6f98*/
                  v55,
                  (IUnknown *)(((((__int16)v31 << 8) + 128) / 256) << 8),
                  (IUnknown *)((((SHIWORD(v31) << 8) + 128) / 256) << 8),
                  0);
                a1 = v55[0]; /*0x6d6fb2*/
                var74 = v55[1]; /*0x6d6fb6*/
                v44 = (IUnknown *)v55[2]; /*0x6d6fc6*/
                v21 = Coord::To_ScreenRaw((AbstractClass *)&v40, (IUnknown *)&a1); /*0x6d6fca*/
                v22 = *(_DWORD *)(this + 176); /*0x6d6fcf*/
                v23 = *(_DWORD *)(this + 180); /*0x6d6fd7*/
                var90[0] = *v21; /*0x6d6fdf*/
                v24 = v21[1] - v23; /*0x6d6feb*/
                var90[0] = var90[0] - v22 - 30; /*0x6d6fed*/
                var90[1] = v24; /*0x6d6ff9*/
                BuildingClass::Draw_0((int)v18, var90, a2); /*0x6d7001*/
              }
            }
          }
          LOWORD(v31) = (_WORD)v31 + 1; /*0x6d7006*/
          --HIWORD(v31); /*0x6d700f*/
          result = (int *)((char *)v36[-1].align_1794 + 3); /*0x6d7014*/
          v36 = (BuildingTypeClass *)((char *)v36 - 1); /*0x6d7015*/
        }
        while ( v36 ); /*0x6d7019*/
      }
      --v15; /*0x6d7023*/
      --v32; /*0x6d7027*/
    }
    while ( v15 >= 0 ); /*0x6d702b*/
    v25 = v51; /*0x6d7031*/
    if ( v51 >= 0 ) /*0x6d7037*/
    {
      v32 = v51 + 1; /*0x6d7040*/
      v26 = v38; /*0x6d7044*/
      do /*0x6d71cd*/
      {
        LOWORD(v34) = v25 / 2; /*0x6d704f*/
        HIWORD(v34) = v32 / 2; /*0x6d705d*/
        result = *(int **)((char *)v37 + 2); /*0x6d706c*/
        LOWORD(v36) = LOWORD(v37[0]) + v34; /*0x6d7070*/
        HIWORD(v36) = HIWORD(v37[0]) + HIWORD(v34); /*0x6d707b*/
        v31 = v36; /*0x6d7086*/
        if ( (int)v26 > 0 ) /*0x6d708a*/
        {
          v33 = v26; /*0x6d7090*/
          do /*0x6d71b7*/
          {
            if ( LayerClass::CoordinatesLegal(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v31) ) /*0x6d709e*/
            {
              v27 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v31); /*0x6d70b5*/
              v28 = (int)v27; /*0x6d70ba*/
              if ( v27[17] != -1 ) /*0x6d70c0*/
              {
                PlacementRect = BuildingClass::GetPlacementRect((int)v27, (IUnknown *)v59); /*0x6d70d0*/
                v46 = *PlacementRect; /*0x6d70d9*/
                v47 = PlacementRect[1]; /*0x6d70e2*/
                v48 = PlacementRect[2]; /*0x6d70e9*/
                v49 = PlacementRect[3]; /*0x6d70fb*/
                v30 = ClipRectIntersection((IUnknown *)v58, (IUnknown *)a2, (IUnknown *)&v46, 0, 0); /*0x6d7104*/
                var30 = *v30; /*0x6d710d*/
                v56 = (AbstractClass *)v30[1]; /*0x6d7117*/
                if ( v30[2] > 0 && v30[3] > 0 ) /*0x6d712a*/
                {
                  v44 = 0; /*0x6d715f*/
                  a1 = ((((__int16)v31 << 8) + 128) / 256) << 8; /*0x6d717b*/
                  var74 = (((SHIWORD(v31) << 8) + 128) / 256) << 8; /*0x6d717f*/
                  Coord::To_Screen((_DWORD *)this, &a1, (IUnknown *)var90); /*0x6d7183*/
                  var90[0] -= 30; /*0x6d719b*/
                  TacticalClass::DrawBuildingPlacement(v28, (IUnknown *)var90, a2); /*0x6d719f*/
                }
              }
            }
            LOWORD(v31) = (_WORD)v31 + 1; /*0x6d71a4*/
            --HIWORD(v31); /*0x6d71ad*/
            result = (int *)((char *)v33[-1].align_1794 + 3); /*0x6d71b2*/
            v33 = (BuildingTypeClass *)((char *)v33 - 1); /*0x6d71b3*/
          }
          while ( v33 ); /*0x6d71b7*/
          v26 = v38; /*0x6d71bd*/
        }
        --v25; /*0x6d71c5*/
        --v32; /*0x6d71c9*/
      }
      while ( v25 >= 0 ); /*0x6d71cd*/
    }
  }
  return result; /*0x6d71d3*/
}


// ==== 0x006D71E0  TacticalClass::CalcBuildingDrawPos  this=AbstractClass  sig=csp ====
int __thiscall TacticalClass_CalcBuildingDrawPos(int this, int *a2)
{
  int v3; // eax
  float *v4; // eax
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // edi
  int v9; // edx
  int v10; // edi
  int v11; // edi
  int v12; // ecx
  int v13; // eax
  int *v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int *v18; // eax
  _DWORD *v19; // edx
  int v20; // ecx
  int v22; // [esp+0h] [ebp-DCh]
  int v23; // [esp+4h] [ebp-D8h]
  int v24; // [esp+1Ch] [ebp-C0h] BYREF
  int v25; // [esp+20h] [ebp-BCh] BYREF
  int v26; // [esp+24h] [ebp-B8h]
  int v27; // [esp+28h] [ebp-B4h]
  int v28; // [esp+30h] [ebp-ACh]
  int v29; // [esp+34h] [ebp-A8h]
  __int16 v30; // [esp+38h] [ebp-A4h]
  __int16 v31; // [esp+3Ah] [ebp-A2h]
  float v32; // [esp+40h] [ebp-9Ch] BYREF
  float v33; // [esp+44h] [ebp-98h]
  int v34; // [esp+48h] [ebp-94h]
  int v35; // [esp+4Ch] [ebp-90h]
  int v36; // [esp+50h] [ebp-8Ch]
  int v37; // [esp+54h] [ebp-88h]
  int v38; // [esp+58h] [ebp-84h] BYREF
  int v39; // [esp+5Ch] [ebp-80h]
  float v40[3]; // [esp+64h] [ebp-78h] BYREF
  _DWORD v41[2]; // [esp+70h] [ebp-6Ch] BYREF
  _DWORD v42[2]; // [esp+78h] [ebp-64h] BYREF
  _DWORD v43[3]; // [esp+80h] [ebp-5Ch] BYREF
  int v44[4]; // [esp+8Ch] [ebp-50h] BYREF
  _DWORD v45[2]; // [esp+9Ch] [ebp-40h] BYREF
  int v46; // [esp+A4h] [ebp-38h]
  int v47; // [esp+A8h] [ebp-34h]
  int v48[4]; // [esp+ACh] [ebp-30h] BYREF
  int v49[4]; // [esp+BCh] [ebp-20h] BYREF
  int v50[4]; // [esp+CCh] [ebp-10h] BYREF

  v3 = *a2 + *(_DWORD *)(this + 176) - MEMORY[0x87F7E8][7662]; /*0x6d7212*/
  v26 = a2[1] + *(_DWORD *)(this + 180) - MEMORY[0x87F7E8][7663]; /*0x6d721b*/
  v25 = v3; /*0x6d7224*/
  *(float *)&v23 = (float)v26; /*0x6d7228*/
  *(float *)&v22 = (float)v3; /*0x6d7234*/
  Triple::Set(&v32, v22, v23, 0); /*0x6d7237*/
  v4 = TransformMatrix3x4Point(v40, (float *)(this + 3556), &v32); /*0x6d724b*/
  v32 = *v4; /*0x6d7252*/
  v33 = v4[1]; /*0x6d725d*/
  v34 = *((_DWORD *)v4 + 2); /*0x6d7264*/
  v5 = Math::RoundToInt(v32); /*0x6d7271*/
  v6 = Math::RoundToInt(v33); /*0x6d7273*/
  Coord::Subtract(&v38, v5, v6, 0); /*0x6d727f*/
  if ( v39 < 0 ) /*0x6d7288*/
    v39 = 0; /*0x6d728a*/
  if ( v38 < 0 ) /*0x6d7292*/
    v38 = 0; /*0x6d7294*/
  v7 = Coord::To_Cell(MEMORY[0x87F7E8], &v38); /*0x6d72a2*/
  v8 = a2[3]; /*0x6d72aa*/
  v27 = v7[9]; /*0x6d72b2*/
  v9 = (unsigned __int64)(2290649225LL * v8) >> 32; /*0x6d72b8*/
  v10 = a2[2]; /*0x6d72ba*/
  LOWORD(v27) = v27 - 2; /*0x6d72c8*/
  v35 = (v9 >> 3) + ((unsigned int)v9 >> 31) + 17; /*0x6d72de*/
  v24 = v27; /*0x6d72e7*/
  v11 = v10 / 60 + 4; /*0x6d72ee*/
  v36 = v11; /*0x6d72f9*/
  if ( dword_A8ED54[233983] ) /*0x6d72fd*/
  {
    v12 = 0; /*0x6d7303*/
    if ( (int)((v9 >> 3) + ((unsigned int)v9 >> 31) + 17) > 0 ) /*0x6d7307*/
    {
      do /*0x6d7544*/
      {
        v13 = v12 / 2; /*0x6d7317*/
        ++v12; /*0x6d7319*/
        v30 = v13; /*0x6d731a*/
        v37 = v12; /*0x6d7321*/
        v31 = v12 / 2; /*0x6d732a*/
        LOWORD(v29) = v27 + v13; /*0x6d733d*/
        HIWORD(v29) = v31 + HIWORD(v27); /*0x6d7348*/
        v24 = v29; /*0x6d7353*/
        if ( v11 > 0 ) /*0x6d7357*/
        {
          v28 = v11; /*0x6d735d*/
          do /*0x6d7532*/
          {
            if ( LayerClass::CoordinatesLegal(MEMORY[0x87F7E8], (__int16 *)&v24) ) /*0x6d736b*/
            {
              CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v24); /*0x6d7382*/
              Coord::Subtract( /*0x6d73cc*/
                v43,
                ((((__int16)v24 << 8) + 128) / 256) << 8,
                (((SHIWORD(v24) << 8) + 128) / 256) << 8,
                0);
              v40[0] = *(float *)v43; /*0x6d73dd*/
              v40[1] = *(float *)&v43[1]; /*0x6d73e1*/
              v40[2] = *(float *)&v43[2]; /*0x6d73ed*/
              v14 = Coord::To_ScreenRaw((int *)&v32, v40); /*0x6d73f5*/
              v25 = *v14; /*0x6d73fc*/
              v15 = *(_DWORD *)(this + 180); /*0x6d7400*/
              v16 = v14[1]; /*0x6d7406*/
              v17 = *(_DWORD *)(this + 176); /*0x6d7409*/
              v26 = v16; /*0x6d740f*/
              v41[1] = v15; /*0x6d7417*/
              v41[0] = v17; /*0x6d7420*/
              Vector2::Subtract(&v25, v41); /*0x6d7424*/
              v25 -= 30; /*0x6d7436*/
              v48[0] = v25; /*0x6d743a*/
              v48[1] = MEMORY[0x87F7E8][7663] + v26; /*0x6d744b*/
              v48[2] = 60; /*0x6d7460*/
              v48[3] = 30; /*0x6d7467*/
              v18 = ClipRectIntersection(v49, v48, a2, 0, 0); /*0x6d7472*/
              v44[0] = *v18; /*0x6d747b*/
              v44[1] = v18[1]; /*0x6d7487*/
              v44[2] = v18[2]; /*0x6d7499*/
              v44[3] = v18[3]; /*0x6d74af*/
              v19 = ClipRectIntersection(v50, &MEMORY[0x87F7E8][7662], v44, 0, 0); /*0x6d74bb*/
              v45[0] = *v19; /*0x6d74bf*/
              v45[1] = v19[1]; /*0x6d74c9*/
              v46 = v19[2]; /*0x6d74d3*/
              v20 = v19[3]; /*0x6d74da*/
              v47 = v20; /*0x6d74df*/
              if ( v46 > 0 && v20 > 0 ) /*0x6d74ea*/
              {
                v42[0] = v25 + MEMORY[0x87F7E8][7662]; /*0x6d7501*/
                v42[1] = v26 + MEMORY[0x87F7E8][7663]; /*0x6d750e*/
                ((void (__stdcall *)(_DWORD *, _DWORD *))TacticalClass::RenderCellFogOfWar)(v42, v45); /*0x6d751a*/
              }
            }
            LOWORD(v24) = v24 + 1; /*0x6d751f*/
            --HIWORD(v24); /*0x6d7528*/
            --v28; /*0x6d752e*/
          }
          while ( v28 ); /*0x6d7532*/
          v11 = v36; /*0x6d7538*/
          v12 = v37; /*0x6d753c*/
        }
      }
      while ( v12 < v35 ); /*0x6d7544*/
    }
  }
  return RenderAlphaShapes(a2); /*0x6d7551*/
}


// ==== 0x006D7560  TacticalClass::RenderIsometric  this=AbstractClass  sig=csp ====
unsigned int __thiscall TacticalClass_RenderIsometric(int this, int *a2, int a3)
{
  int v3; // eax
  int v5; // eax
  int v6; // ecx
  float *v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // ebp
  int v12; // edx
  unsigned int result; // eax
  int v14; // ecx
  int v15; // eax
  void *v16; // eax
  int *ScreenRect; // eax
  _DWORD *v18; // eax
  int v19; // ebp
  int v20; // [esp+10h] [ebp-98h] BYREF
  float v21; // [esp+14h] [ebp-94h] BYREF
  float v22; // [esp+18h] [ebp-90h]
  int v23; // [esp+1Ch] [ebp-8Ch]
  int v24; // [esp+20h] [ebp-88h]
  int v25; // [esp+24h] [ebp-84h]
  int v26; // [esp+28h] [ebp-80h]
  int v27; // [esp+2Ch] [ebp-7Ch]
  __int16 v28; // [esp+30h] [ebp-78h]
  __int16 v29; // [esp+32h] [ebp-76h]
  int v30; // [esp+38h] [ebp-70h]
  int v31; // [esp+3Ch] [ebp-6Ch]
  int v32; // [esp+40h] [ebp-68h]
  int v33[2]; // [esp+44h] [ebp-64h] BYREF
  int v34; // [esp+4Ch] [ebp-5Ch]
  int v35; // [esp+50h] [ebp-58h]
  float v36[3]; // [esp+54h] [ebp-54h] BYREF
  _DWORD v37[6]; // [esp+60h] [ebp-48h] BYREF
  int v38; // [esp+78h] [ebp-30h]
  _DWORD v39[3]; // [esp+7Ch] [ebp-2Ch] BYREF
  int v40[4]; // [esp+88h] [ebp-20h] BYREF
  int v41[4]; // [esp+98h] [ebp-10h] BYREF

  v3 = *a2; /*0x6d7575*/
  v23 = 0; /*0x6d7581*/
  v5 = *(_DWORD *)(this + 176) + v3; /*0x6d7595*/
  v6 = a2[1] + *(_DWORD *)(this + 180); /*0x6d759c*/
  v24 = v5 - MEMORY[0x886FA0]; /*0x6d759e*/
  v25 = v6 - MEMORY[0x886FA4]; /*0x6d75a8*/
  v21 = (float)(v5 - MEMORY[0x886FA0]); /*0x6d75b7*/
  v22 = (float)(v6 - MEMORY[0x886FA4]); /*0x6d75c3*/
  v7 = TransformMatrix3x4Point(v36, (float *)(this + 3556), &v21); /*0x6d75c7*/
  v21 = *v7; /*0x6d75ce*/
  v22 = v7[1]; /*0x6d75d9*/
  v23 = *((_DWORD *)v7 + 2); /*0x6d75e0*/
  v8 = Math::RoundToInt(v21); /*0x6d75ed*/
  v9 = Math::RoundToInt(v22); /*0x6d75ef*/
  Coord::Subtract(v39, v8, v9, 0); /*0x6d75ff*/
  v10 = a2[3]; /*0x6d7608*/
  LOWORD(v20) = v39[0] / 256; /*0x6d7617*/
  HIWORD(v20) = v39[1] / 256; /*0x6d762f*/
  v24 = v20; /*0x6d764e*/
  v11 = v10 / 15 + 17; /*0x6d7655*/
  v12 = (unsigned __int64)(2290649225LL * a2[2]) >> 32; /*0x6d765e*/
  v30 = v11; /*0x6d7660*/
  v12 >>= 5; /*0x6d7664*/
  LOWORD(v24) = v20 - 2; /*0x6d7669*/
  result = (unsigned int)v12 >> 31; /*0x6d766e*/
  v31 = v12 + ((unsigned int)v12 >> 31) + 4; /*0x6d7675*/
  v14 = 0; /*0x6d7679*/
  while ( v14 < v11 ) /*0x6d767d*/
  {
    v15 = v14 / 2; /*0x6d7688*/
    ++v14; /*0x6d768a*/
    v28 = v15; /*0x6d768b*/
    v32 = v14; /*0x6d7692*/
    v29 = v14 / 2; /*0x6d769b*/
    LOWORD(v27) = v24 + v15; /*0x6d76ae*/
    HIWORD(v27) = v29 + HIWORD(v24); /*0x6d76b9*/
    result = v31; /*0x6d76be*/
    v20 = v27; /*0x6d76c8*/
    if ( v31 > 0 ) /*0x6d76cc*/
    {
      v26 = v31; /*0x6d76d2*/
      do /*0x6d7817*/
      {
        if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v20) ) /*0x6d76e0*/
        {
          v16 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v20); /*0x6d76f7*/
          ScreenRect = CellClass::GetScreenRect((int)v16, v40); /*0x6d7708*/
          v33[0] = *ScreenRect; /*0x6d7711*/
          v33[1] = ScreenRect[1]; /*0x6d771a*/
          v34 = ScreenRect[2]; /*0x6d7721*/
          v35 = ScreenRect[3]; /*0x6d7733*/
          v18 = ClipRectIntersection(v41, a2, v33, 0, 0); /*0x6d773a*/
          v37[3] = *v18; /*0x6d7743*/
          v19 = v18[2]; /*0x6d774f*/
          v37[4] = v18[1]; /*0x6d7752*/
          v38 = v18[3]; /*0x6d7762*/
          Coord::Subtract(v37, ((((__int16)v20 << 8) + 128) / 256) << 8, (((SHIWORD(v20) << 8) + 128) / 256) << 8, 0); /*0x6d7799*/
          v36[0] = *(float *)v37; /*0x6d77aa*/
          v36[1] = *(float *)&v37[1]; /*0x6d77ae*/
          v36[2] = *(float *)&v37[2]; /*0x6d77be*/
          Coord::To_Screen((_DWORD *)this, v36, (int *)&v21); /*0x6d77c2*/
          LODWORD(v21) -= 30; /*0x6d77d4*/
          if ( v34 > 0 && v35 > 0 && v19 > 0 && v38 > 0 ) /*0x6d77ec*/
            TacticalClass::CheckCellVisibility(&v21, a3, 0); /*0x6d77ff*/
        }
        LOWORD(v20) = v20 + 1; /*0x6d7804*/
        --HIWORD(v20); /*0x6d780d*/
        result = --v26; /*0x6d7812*/
      }
      while ( v26 ); /*0x6d7817*/
      v14 = v32; /*0x6d781d*/
      v11 = v30; /*0x6d7821*/
    }
  }
  return result; /*0x6d782d*/
}


// ==== 0x006D7840  TacticalClass::DrawMap  this=AbstractClass  sig=csp ====
unsigned int __thiscall TacticalClass::DrawMap(int this, _DWORD *a2, int *a3)
{
  unsigned int result; // eax
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // eax
  int v11; // ebp
  float *v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // esi
  float v17; // ebx
  int v18; // ecx
  int v19; // esi
  int v20; // eax
  _DWORD *v21; // esi
  int NthOfType; // edi
  _DWORD *v23; // ebp
  BOOL v24; // edi
  _DWORD *v25; // eax
  int *ScreenRect; // eax
  int v27; // esi
  int v28; // edi
  int v29; // eax
  int v30; // [esp+8h] [ebp-48h] BYREF
  unsigned int v31; // [esp+Ch] [ebp-44h]
  int v32; // [esp+10h] [ebp-40h]
  int v33; // [esp+14h] [ebp-3Ch]
  unsigned int v34; // [esp+18h] [ebp-38h]
  int v35; // [esp+1Ch] [ebp-34h]
  int v36; // [esp+20h] [ebp-30h]
  float v37; // [esp+24h] [ebp-2Ch]
  float v38; // [esp+28h] [ebp-28h] BYREF
  float v39; // [esp+2Ch] [ebp-24h]
  int v40; // [esp+30h] [ebp-20h]
  int v41; // [esp+34h] [ebp-1Ch] BYREF
  int v42; // [esp+38h] [ebp-18h]
  int v43[4]; // [esp+40h] [ebp-10h] BYREF
  int v44; // [esp+54h] [ebp+4h]

  result = PingPongBuffer::GetWriteOffset(); /*0x6d7847*/
  if ( dword_A8ED54[47100] >= result ) /*0x6d7852*/
  {
    result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 112))(MEMORY[0x87F7E8][7883]); /*0x6d7860*/
    if ( result == 2 ) /*0x6d7866*/
    {
      result = MEMORY[0x87F7E8][539876]; /*0x6d786c*/
      if ( MEMORY[0x87F7E8][539876] ) /*0x6d7873*/
      {
        result = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 92))( /*0x6d7887*/
                   MEMORY[0x87F7E8][7883],
                   0,
                   0);
        v34 = result; /*0x6d788c*/
        if ( result ) /*0x6d7890*/
        {
          v5 = ((int (*)(void))timeGetTime)(); /*0x6d7896*/
          v6 = v5 - dword_A8ED54[130619]; /*0x6d78a4*/
          dword_A8ED54[130619] = v5; /*0x6d78a6*/
          v31 = v6; /*0x6d78b1*/
          if ( v6 > 0x3E8 ) /*0x6d78b5*/
            v31 = 1000; /*0x6d78b7*/
          v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 116))(MEMORY[0x87F7E8][7883]); /*0x6d78c9*/
          v8 = *(_DWORD *)(this + 176); /*0x6d78d0*/
          v33 = v7; /*0x6d78dc*/
          v9 = *(_DWORD *)(this + 180); /*0x6d78e2*/
          v10 = v8 + *a2; /*0x6d78ee*/
          v11 = a2[1]; /*0x6d78f0*/
          v41 = v10 - MEMORY[0x87F7E8][7662]; /*0x6d78f5*/
          v42 = v11 + v9 - MEMORY[0x87F7E8][7663]; /*0x6d7905*/
          v38 = (float)(v10 - MEMORY[0x87F7E8][7662]); /*0x6d790a*/
          v40 = 0; /*0x6d791c*/
          v39 = (float)v42; /*0x6d7924*/
          v12 = TransformMatrix3x4Point((float *)&v41, (float *)(this + 3556), &v38); /*0x6d7928*/
          v38 = *v12; /*0x6d792f*/
          v39 = v12[1]; /*0x6d793a*/
          v40 = *((_DWORD *)v12 + 2); /*0x6d7941*/
          v13 = Math::RoundToInt(v38); /*0x6d794e*/
          v14 = Math::RoundToInt(v39); /*0x6d7950*/
          v15 = a2[3]; /*0x6d796d*/
          v16 = a2[2]; /*0x6d7978*/
          HIWORD(v41) = v14 / 256; /*0x6d799d*/
          LODWORD(v17) = v15 / 15 + 17; /*0x6d79a4*/
          v18 = 0; /*0x6d79ac*/
          v37 = v17; /*0x6d79b3*/
          v19 = v16 / 60 + 4; /*0x6d79bc*/
          LOWORD(v41) = v13 / 256 - 2; /*0x6d79c0*/
          v36 = v19; /*0x6d79c5*/
          while ( v18 < SLODWORD(v17) ) /*0x6d79c9*/
          {
            v20 = v18 / 2; /*0x6d79d4*/
            ++v18; /*0x6d79d6*/
            LOWORD(v38) = v20; /*0x6d79d7*/
            v35 = v18; /*0x6d79de*/
            HIWORD(v38) = v18 / 2; /*0x6d79e7*/
            LOWORD(v44) = v41 + v20; /*0x6d79fa*/
            HIWORD(v44) = HIWORD(v38) + HIWORD(v41); /*0x6d7a05*/
            v30 = v44; /*0x6d7a10*/
            if ( v19 > 0 ) /*0x6d7a14*/
            {
              v32 = v19; /*0x6d7a1a*/
              do /*0x6d7bcb*/
              {
                if ( LayerClass::CoordinatesLegal(MEMORY[0x87F7E8], (__int16 *)&v30) ) /*0x6d7a28*/
                {
                  v21 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v30); /*0x6d7a44*/
                  NthOfType = Building::GetNthOfType((int)v21); /*0x6d7a4d*/
                  if ( (v21[75] & 0x10) != 0 /*0x6d7a94*/
                    && !CellClass::QuickPassable(v21)
                    && (v21[59] == 2 || NthOfType)
                    && !v21[57]
                    && (v21[80] & 0x1000) == 0 )
                  {
                    v23 = (_DWORD *)v21[63]; /*0x6d7a9a*/
                    v24 = NthOfType != 0; /*0x6d7aa9*/
                    if ( v23 ) /*0x6d7aab*/
                    {
                      if ( (int)v23[4] >= 0x2000 ) /*0x6d7ade*/
                        BuildingDebris::Init(v23, v24); /*0x6d7ae3*/
                    }
                    else
                    {
                      v25 = (_DWORD *)__2_YAPAXI_Z(60); /*0x6d7aaf*/
                      if ( v25 ) /*0x6d7ab9*/
                      {
                        v23 = TacticalClass::saveConfig(v25, v24); /*0x6d7ac3*/
                        v21[63] = v23; /*0x6d7ac5*/
                      }
                      else
                      {
                        v23 = 0; /*0x6d7acd*/
                        v21[63] = 0; /*0x6d7acf*/
                      }
                    }
                    if ( v23 ) /*0x6d7aea*/
                    {
                      if ( TacticalClass::DecrementCounter(v23, v31) ) /*0x6d7af7*/
                      {
                        ScreenRect = CellClass::GetScreenRect((int)v21, v43); /*0x6d7b0b*/
                        v27 = v23[12] + *ScreenRect + ScreenRect[2] / 2; /*0x6d7b3b*/
                        v28 = v23[13] + ScreenRect[1] + ScreenRect[3] / 2; /*0x6d7b3f*/
                        if ( v27 >= *a3 && v27 < *a3 + a3[2] ) /*0x6d7b4c*/
                        {
                          v29 = a3[1]; /*0x6d7b4e*/
                          if ( v28 >= v29 && v28 < v29 + a3[3] ) /*0x6d7b5c*/
                          {
                            TacticalClass::InterpolateColor(v23, v31); /*0x6d7b65*/
                            *(_WORD *)(v28 * v33 + v34 + 2 * v27) = ((int)v23[1] >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170])) /*0x6d7bb4*/
                                                                  | ((int)v23[2] >> SLOBYTE(MEMORY[0x87F7E8][34175]) << SLOBYTE(MEMORY[0x87F7E8][34174]))
                                                                  | ((int)v23[3] >> SLOBYTE(MEMORY[0x87F7E8][34173]) << SLOBYTE(MEMORY[0x87F7E8][34172]));
                          }
                        }
                      }
                    }
                  }
                }
                LOWORD(v30) = v30 + 1; /*0x6d7bb8*/
                --HIWORD(v30); /*0x6d7bc1*/
                --v32; /*0x6d7bc7*/
              }
              while ( v32 ); /*0x6d7bcb*/
              v18 = v35; /*0x6d7bd1*/
              v19 = v36; /*0x6d7bd5*/
              v17 = v37; /*0x6d7bd9*/
            }
          }
          return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 96))(MEMORY[0x87F7E8][7883]); /*0x6d7bed*/
        }
      }
    }
  }
  return result; /*0x6d7bf2*/
}


// ==== 0x006D7C00  TacticalClass::DrawTerrain  this=AbstractClass  sig=csp ====
unsigned int __thiscall TacticalClass_DrawTerrain(int this, int *a2, _DWORD *a3)
{
  int *v3; // edi
  int v5; // eax
  int v6; // ecx
  float *v7; // eax
  int v8; // ebp
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // ecx
  float *v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // ecx
  int v18; // ebx
  int v19; // edi
  int v20; // ebx
  int v21; // ecx
  unsigned int result; // eax
  int v23; // edi
  _DWORD *v24; // ebp
  int v25; // eax
  __int16 v26; // dx
  float *v27; // eax
  int v28; // [esp+0h] [ebp-68h]
  int v29; // [esp+0h] [ebp-68h]
  int v30; // [esp+4h] [ebp-64h]
  int v31; // [esp+4h] [ebp-64h]
  int v32; // [esp+1Ch] [ebp-4Ch]
  int v33; // [esp+20h] [ebp-48h] BYREF
  _DWORD v34[2]; // [esp+24h] [ebp-44h]
  int v35; // [esp+2Ch] [ebp-3Ch] BYREF
  int v36; // [esp+30h] [ebp-38h]
  int v37; // [esp+34h] [ebp-34h]
  float v38; // [esp+38h] [ebp-30h] BYREF
  float v39; // [esp+3Ch] [ebp-2Ch]
  int v40; // [esp+40h] [ebp-28h]
  int v41; // [esp+44h] [ebp-24h] BYREF
  int v42; // [esp+48h] [ebp-20h]
  int v43; // [esp+4Ch] [ebp-1Ch]
  float v44[3]; // [esp+50h] [ebp-18h] BYREF
  int v45[3]; // [esp+5Ch] [ebp-Ch] BYREF

  v3 = a2; /*0x6d7c07*/
  v5 = *(_DWORD *)(this + 176); /*0x6d7c19*/
  v6 = a2[1] + *(_DWORD *)(this + 180) - MEMORY[0x886FA4]; /*0x6d7c32*/
  v35 = *a2 + v5 - MEMORY[0x886FA0]; /*0x6d7c34*/
  v36 = v6; /*0x6d7c38*/
  *(float *)&v30 = (float)v6; /*0x6d7c41*/
  *(float *)&v28 = (float)v35; /*0x6d7c4d*/
  Triple::Set(&v38, v28, v30, 0); /*0x6d7c50*/
  v7 = TransformMatrix3x4Point(v44, (float *)(this + 3556), &v38); /*0x6d7c66*/
  v38 = *v7; /*0x6d7c6d*/
  v39 = v7[1]; /*0x6d7c78*/
  v40 = *((_DWORD *)v7 + 2); /*0x6d7c7f*/
  v8 = Math::RoundToInt(v38); /*0x6d7c8c*/
  v9 = Math::RoundToInt(v39); /*0x6d7c8e*/
  Coord::Subtract(&v41, v8, v9, 0); /*0x6d7c9b*/
  v10 = *(_DWORD *)CellStruct::Set(&v33, v41 / 256, v42 / 256); /*0x6d7ccb*/
  v11 = *(_DWORD *)(this + 176); /*0x6d7ccd*/
  HIWORD(v34[0]) = HIWORD(v10); /*0x6d7cd3*/
  LOWORD(v34[0]) = v10 - 2; /*0x6d7ce0*/
  v12 = *v3; /*0x6d7ce9*/
  a2 = (int *)v34[0]; /*0x6d7ceb*/
  v13 = v3[1] + *(_DWORD *)(this + 180) - MEMORY[0x886FA4]; /*0x6d7d04*/
  v35 = v11 + v12 - MEMORY[0x886FA0]; /*0x6d7d06*/
  v36 = v13; /*0x6d7d0a*/
  *(float *)&v31 = (float)v13; /*0x6d7d15*/
  *(float *)&v29 = (float)v35; /*0x6d7d21*/
  Triple::Set(&v38, v29, v31, 0); /*0x6d7d24*/
  v14 = TransformMatrix3x4Point(v44, (float *)(this + 3556), &v38); /*0x6d7d34*/
  v38 = *v14; /*0x6d7d3b*/
  v39 = v14[1]; /*0x6d7d46*/
  v40 = *((_DWORD *)v14 + 2); /*0x6d7d4d*/
  v15 = Math::RoundToInt(v38); /*0x6d7d5a*/
  v16 = Math::RoundToInt(v39); /*0x6d7d5c*/
  Coord::Subtract(&v35, v15, v16, 0); /*0x6d7d69*/
  v41 = v35; /*0x6d7d7a*/
  v42 = v36; /*0x6d7d82*/
  v43 = v37; /*0x6d7d8c*/
  v17 = *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v41) + 9); /*0x6d7d95*/
  v18 = v3[3]; /*0x6d7d98*/
  v19 = v3[2]; /*0x6d7da0*/
  HIWORD(v34[0]) = HIWORD(v17) + 3; /*0x6d7db0*/
  v20 = v18 / 15 + 20; /*0x6d7dbc*/
  LOWORD(v34[0]) = v17 - 2; /*0x6d7dc9*/
  v21 = 0; /*0x6d7dd3*/
  result = (unsigned int)((unsigned __int64)(2290649225LL * v19) >> 32) >> 31; /*0x6d7dd5*/
  v23 = v19 / 60 + 7; /*0x6d7dda*/
  if ( v20 > 0 ) /*0x6d7dde*/
  {
    v24 = a3; /*0x6d7de4*/
    do /*0x6d7f01*/
    {
      v25 = v21 / 2; /*0x6d7ded*/
      ++v21; /*0x6d7def*/
      LOWORD(v35) = v25; /*0x6d7df0*/
      v33 = v21; /*0x6d7df7*/
      HIWORD(v35) = v21 / 2; /*0x6d7e00*/
      v26 = LOWORD(v34[0]) + v25; /*0x6d7e0d*/
      result = *(_DWORD *)((char *)v34 + 2); /*0x6d7e0f*/
      LOWORD(a3) = v26; /*0x6d7e13*/
      HIWORD(a3) = HIWORD(v34[0]) + HIWORD(v35); /*0x6d7e1e*/
      a2 = a3; /*0x6d7e29*/
      if ( v23 > 0 ) /*0x6d7e2d*/
      {
        v32 = v23; /*0x6d7e33*/
        do /*0x6d7ef5*/
        {
          if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&a2) ) /*0x6d7e41*/
          {
            v27 = (float *)Coord3D::Set( /*0x6d7e91*/
                             v45,
                             ((((__int16)a2 << 8) + 128) / 256) << 8,
                             (((SHIWORD(a2) << 8) + 128) / 256) << 8,
                             0);
            v44[0] = *v27; /*0x6d7e98*/
            v44[1] = v27[1]; /*0x6d7ea4*/
            v44[2] = v27[2]; /*0x6d7eb2*/
            Coord::To_Screen((_DWORD *)this, v44, (int *)&v38); /*0x6d7eb6*/
            LODWORD(v38) -= 30; /*0x6d7ec7*/
            CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x6d7ed6*/
            TacticalClass::DrawCellTerrainOverlay(&v38, v24); /*0x6d7edd*/
          }
          LOWORD(a2) = (_WORD)a2 + 1; /*0x6d7ee2*/
          --HIWORD(a2); /*0x6d7eeb*/
          result = --v32; /*0x6d7ef0*/
        }
        while ( v32 ); /*0x6d7ef5*/
        v21 = v33; /*0x6d7efb*/
      }
    }
    while ( v21 < v20 ); /*0x6d7f01*/
  }
  return result; /*0x6d7f07*/
}


// ==== 0x006D7F20  TacticalMapClass::ProcessCell  this=AbstractClass  sig=csp ====
int __thiscall TacticalMapClass::ProcessCell(_DWORD *this, AbstractClass *aP1, int a3)
{
  char *v4; // ebp
  int v5; // kr0C_4
  int v6; // kr00_4
  int *v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // ebp
  int v12; // esi
  int v13; // edi
  char *v14; // ecx
  char v15; // al
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  int v19; // ebp
  int v20; // eax
  _DWORD *v21; // eax
  int v22; // eax
  _DWORD *v23; // eax
  int v24; // edi
  int v25; // esi
  int v26; // eax
  int v27; // esi
  void *v28; // eax
  int result; // eax
  bool v30; // cc
  int v31; // [esp+10h] [ebp-44h]
  char *v32; // [esp+14h] [ebp-40h]
  int v33; // [esp+1Ch] [ebp-38h]
  int v34; // [esp+20h] [ebp-34h]
  _WORD v35[2]; // [esp+24h] [ebp-30h] BYREF
  __int16 v36[2]; // [esp+28h] [ebp-2Ch] BYREF
  IUnknown *v37; // [esp+2Ch] [ebp-28h] BYREF
  _DWORD v38[2]; // [esp+30h] [ebp-24h] BYREF
  int v39[2]; // [esp+38h] [ebp-1Ch] BYREF
  int v40; // [esp+40h] [ebp-14h] BYREF
  int v41; // [esp+48h] [ebp-Ch] BYREF
  Tactical *v42; // [esp+4Ch] [ebp-8h]
  int v43; // [esp+50h] [ebp-4h]
  char aP1a; // [esp+58h] [ebp+4h]

  v4 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)aP1->__pad_0); /*0x6d7f38*/
  v5 = (*(__int16 *)aP1->__pad_0 << 8) + 128; /*0x6d7f5b*/
  v6 = (*(__int16 *)&aP1->__pad_0[2] << 8) + 128; /*0x6d7f68*/
  v43 = 0; /*0x6d7f6a*/
  v42 = (Tactical *)((v6 / 256) << 8); /*0x6d7f74*/
  v41 = (v5 / 256) << 8; /*0x6d7f8a*/
  v7 = Coord::To_ScreenRaw(v39, &v41); /*0x6d7f8e*/
  v8 = v7[1]; /*0x6d7f9d*/
  v9 = *v7 - this->q0B0; /*0x6d7fa6*/
  v10 = v8 - this->q0B4; /*0x6d7fae*/
  if ( v4[283] < 2 ) /*0x6d7fb3*/
  {
    v38[0] = v9 - 30; /*0x6d7fba*/
    v38[1] = v10; /*0x6d7fc2*/
    TacticalClass::CheckCellVisibility((int)v4, (IUnknown *)v38, (IUnknown *)&MEMORY[0x87F8E4].__pad_5568[8532], 0); /*0x6d7fce*/
  }
  v33 = *(__int16 *)aP1->__pad_0; /*0x6d7fda*/
  v34 = *(__int16 *)&aP1->__pad_0[2]; /*0x6d7fde*/
  v31 = 0; /*0x6d7fe2*/
  do /*0x6d8248*/
  {
    v11 = 0; /*0x6d7fea*/
    do /*0x6d8222*/
    {
      v38[0] = v11 + 1; /*0x6d7ff3*/
      v12 = v33 + ((v11 + 1) >> 1); /*0x6d7ffb*/
      v13 = v34 - (v11 >> 1) + 1; /*0x6d8009*/
      v35[0] = v33 + ((v11 + 1) >> 1); /*0x6d8010*/
      v35[1] = v34 - (v11 >> 1) + 1; /*0x6d8015*/
      if ( !LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (IUnknown *)v35) ) /*0x6d8021*/
        goto LABEL_34; /*0x6d8021*/
      v36[0] = v33 + ((v11 + 1) >> 1); /*0x6d8031*/
      v36[1] = v34 - (v11 >> 1) + 1; /*0x6d8036*/
      v14 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v36); /*0x6d8040*/
      v15 = 0; /*0x6d8042*/
      v32 = v14; /*0x6d8044*/
      v16 = v14[283]; /*0x6d804b*/
      aP1a = 0; /*0x6d8056*/
      if ( v11 == 1 ) /*0x6d805a*/
      {
        if ( v16 > v31 && v16 < v31 + 4 ) /*0x6d8070*/
        {
LABEL_11:
          v15 = 1; /*0x6d8072*/
          aP1a = 1; /*0x6d8074*/
        }
      }
      else if ( v16 == v31 + 1 ) /*0x6d805f*/
      {
        goto LABEL_11; /*0x6d805f*/
      }
      if ( v14[285] > 0 && !v15 ) /*0x6d8087*/
      {
        v17 = v16 - v31; /*0x6d808f*/
        if ( v11 != 1 ) /*0x6d8094*/
        {
          if ( v17 < 0 && v17 + v32[285] >= 0 ) /*0x6d80a7*/
          {
            v15 = 1; /*0x6d80a9*/
            goto LABEL_21; /*0x6d80ab*/
          }
LABEL_20:
          v15 = aP1a; /*0x6d80c9*/
          goto LABEL_21; /*0x6d80c9*/
        }
        if ( v17 + 1 > 0 ) /*0x6d80b2*/
          goto LABEL_20; /*0x6d80b2*/
        v15 = 1; /*0x6d80c3*/
        if ( v32[285] + v17 + 1 <= 0 ) /*0x6d80c7*/
          goto LABEL_20; /*0x6d80c7*/
      }
LABEL_21:
      if ( v16 != v31 ) /*0x6d80d1*/
      {
        if ( !v15 ) /*0x6d8148*/
          goto LABEL_34; /*0x6d8148*/
LABEL_33:
        LOWORD(v37) = v12; /*0x6d814e*/
        HIWORD(v37) = v13; /*0x6d8168*/
        v41 = ((((__int16)v12 << 8) + 128) / 256) << 8; /*0x6d8194*/
        v42 = (Tactical *)(((((__int16)v13 << 8) + 128) / 256) << 8); /*0x6d819d*/
        v43 = 0; /*0x6d81a1*/
        v23 = IsoCoord::ToPixel(&v40, v41, v42); /*0x6d81a5*/
        v24 = v23[1]; /*0x6d81b2*/
        v25 = *v23 / 256; /*0x6d81c0*/
        v26 = ZCoordToScreenY(v43); /*0x6d81c3*/
        v27 = v25 - this->q0B0; /*0x6d81ea*/
        v39[1] = v24 / 256 - v26 - this->q0B4; /*0x6d81ee*/
        v39[0] = v27 - 30; /*0x6d8204*/
        v28 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v37); /*0x6d820f*/
        TacticalClass::CheckCellVisibility((int)v28, (IUnknown *)v39, (IUnknown *)&MEMORY[0x87F8E4].__pad_5568[8532], 0); /*0x6d8216*/
        goto LABEL_34; /*0x6d8216*/
      }
      if ( v15 ) /*0x6d80d5*/
        goto LABEL_33; /*0x6d80d5*/
      v18 = *((_DWORD *)v32 + 14); /*0x6d80e3*/
      v19 = (unsigned __int8)v32[282]; /*0x6d80eb*/
      if ( v18 != 0xFFFF && v18 != 255 ) /*0x6d80f8*/
      {
        v20 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576] + 4 * v18); /*0x6d8104*/
        if ( v20 ) /*0x6d8109*/
        {
          v21 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v20 + 156))(v20); /*0x6d8113*/
          if ( v21 ) /*0x6d811b*/
          {
            if ( v19 >= *v21 * v21[1] - 1 ) /*0x6d812a*/
              v19 = *v21 * v21[1] - 1; /*0x6d812c*/
            v22 = v21[v19 + 4]; /*0x6d812e*/
            if ( v22 ) /*0x6d8134*/
            {
              if ( (*(_BYTE *)(v22 + 36) & 1) != 0 ) /*0x6d813e*/
                goto LABEL_33; /*0x6d813e*/
            }
          }
        }
      }
LABEL_34:
      v11 = v38[0]; /*0x6d821b*/
    }
    while ( v38[0] < 3 ); /*0x6d8222*/
    result = v31 + 2; /*0x6d8235*/
    v30 = v31 + 2 < 24; /*0x6d8239*/
    ++v33; /*0x6d823c*/
    ++v34; /*0x6d8240*/
    v31 += 2; /*0x6d8244*/
  }
  while ( v30 ); /*0x6d8248*/
  return result; /*0x6d824e*/
}


// ==== 0x006D8260  MapClass::TransformCoordToScreen  this=MapClass  sig=csp ====
unsigned int __thiscall MapClass::TransformCoordToScreen(int this, int a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  int v4; // ebp
  int v6; // eax
  int v7; // ecx
  float *v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  int v12; // esi
  int v13; // ecx
  unsigned int result; // eax
  int v15; // esi
  int v16; // ebp
  int *v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  _DWORD *v21; // [esp+10h] [ebp-54h]
  int v22; // [esp+14h] [ebp-50h]
  int v23; // [esp+18h] [ebp-4Ch]
  int v24; // [esp+1Ch] [ebp-48h]
  __int16 v25; // [esp+20h] [ebp-44h]
  __int16 v26; // [esp+22h] [ebp-42h]
  int v27; // [esp+30h] [ebp-34h] BYREF
  int v28; // [esp+34h] [ebp-30h]
  _DWORD v29[2]; // [esp+38h] [ebp-2Ch] BYREF
  float v30; // [esp+40h] [ebp-24h] BYREF
  float v31; // [esp+44h] [ebp-20h]
  int v32; // [esp+48h] [ebp-1Ch]
  int v33; // [esp+4Ch] [ebp-18h] BYREF
  int v34; // [esp+50h] [ebp-14h]
  int v35; // [esp+54h] [ebp-10h]
  float v36[3]; // [esp+58h] [ebp-Ch] BYREF

  v3 = a3; /*0x6d8264*/
  v4 = *a3; /*0x6d826f*/
  v32 = 0; /*0x6d827b*/
  v6 = v4 + *(_DWORD *)(this + 176); /*0x6d828f*/
  v7 = a3[1] + *(_DWORD *)(this + 180); /*0x6d8296*/
  v27 = v6 - MEMORY[0x886FA0]; /*0x6d8298*/
  v28 = v7 - MEMORY[0x886FA4]; /*0x6d82a2*/
  v30 = (float)(v6 - MEMORY[0x886FA0]); /*0x6d82b1*/
  v31 = (float)(v7 - MEMORY[0x886FA4]); /*0x6d82bd*/
  v8 = TransformMatrix3x4Point(v36, (float *)(this + 3556), &v30); /*0x6d82c1*/
  v30 = *v8; /*0x6d82c8*/
  v31 = v8[1]; /*0x6d82d3*/
  v32 = *((_DWORD *)v8 + 2); /*0x6d82da*/
  v9 = Math::RoundToInt(v30); /*0x6d82e7*/
  v10 = Math::RoundToInt(v31); /*0x6d82e9*/
  v33 = v9; /*0x6d82f0*/
  v34 = v10; /*0x6d82f6*/
  v35 = 0; /*0x6d82fa*/
  if ( v10 < 0 ) /*0x6d82fe*/
  {
    v9 -= v10; /*0x6d8300*/
    v10 = 0; /*0x6d8302*/
    v33 = v9; /*0x6d8304*/
    v34 = 0; /*0x6d8308*/
  }
  if ( v9 < 0 ) /*0x6d830e*/
  {
    v33 = 0; /*0x6d8312*/
    v34 = v10 - v9; /*0x6d8316*/
  }
  v11 = *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v33) + 9); /*0x6d8329*/
  v12 = v3[2]; /*0x6d833c*/
  v26 = HIWORD(v11) + 3; /*0x6d8344*/
  v25 = v11 - 2; /*0x6d835d*/
  v13 = 0; /*0x6d8367*/
  result = (unsigned int)((unsigned __int64)(2290649225LL * v12) >> 32) >> 31; /*0x6d8369*/
  v15 = v12 / 60 + 7; /*0x6d836e*/
  v24 = v3[3] / 15 + 20; /*0x6d8372*/
  v23 = v15; /*0x6d8376*/
  if ( v24 > 0 ) /*0x6d837a*/
  {
    do /*0x6d84bb*/
    {
      v16 = v13 + 1; /*0x6d8382*/
      LOWORD(v21) = v25 + v13 / 2; /*0x6d83a9*/
      HIWORD(v21) = v26 + (v13 + 1) / 2; /*0x6d83b4*/
      a3 = v21; /*0x6d83bf*/
      if ( v15 > 0 ) /*0x6d83c3*/
      {
        v22 = v15; /*0x6d83c9*/
        do /*0x6d84a9*/
        {
          if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&a3) ) /*0x6d83d7*/
          {
            v36[2] = 0.0; /*0x6d8417*/
            LODWORD(v36[0]) = ((((__int16)a3 << 8) + 128) / 256) << 8; /*0x6d8433*/
            LODWORD(v36[1]) = (((SHIWORD(a3) << 8) + 128) / 256) << 8; /*0x6d8437*/
            v17 = Coord::To_ScreenRaw((int *)&v30, v36); /*0x6d843b*/
            v27 = *v17; /*0x6d8442*/
            v18 = *(_DWORD *)(this + 180); /*0x6d8446*/
            v19 = v17[1]; /*0x6d844c*/
            v20 = *(_DWORD *)(this + 176); /*0x6d844f*/
            v28 = v19; /*0x6d8455*/
            v29[1] = v18; /*0x6d845d*/
            v29[0] = v20; /*0x6d8466*/
            Vector2::Subtract(&v27, v29); /*0x6d846a*/
            v27 -= 30; /*0x6d8486*/
            CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x6d848a*/
            TacticalClass::DrawCellTerrainOverlay(&v27, v3); /*0x6d8491*/
          }
          LOWORD(a3) = (_WORD)a3 + 1; /*0x6d8496*/
          --HIWORD(a3); /*0x6d849f*/
          --v22; /*0x6d84a5*/
        }
        while ( v22 ); /*0x6d84a9*/
        v15 = v23; /*0x6d84af*/
      }
      result = v24; /*0x6d84b3*/
      v13 = v16; /*0x6d84b7*/
    }
    while ( v16 < v24 ); /*0x6d84bb*/
  }
  return result; /*0x6d84c1*/
}


// ==== 0x006D84D0  sub_6D84D0  this=unknown  sig=csp ====
int *__stdcall sub_6D84D0(int *a1, int *a2)
{
  int v2; // edx
  int v4; // edx
  int v5; // [esp+4h] [ebp-8h] BYREF
  int v6; // [esp+8h] [ebp-4h]

  v2 = a2[1]; /*0x6d84da*/
  v5 = *a2; /*0x6d84dd*/
  v6 = v2; /*0x6d84e6*/
  if ( !ClampCoordMap(&v5) || MEMORY[0xA8ED6B] ) /*0x6d84fa*/
  {
    *a1 = *a2; /*0x6d851a*/
    a1[1] = a2[1]; /*0x6d851f*/
    return a1; /*0x6d8514*/
  }
  else
  {
    v4 = v6; /*0x6d8504*/
    *a1 = v5; /*0x6d8509*/
    a1[1] = v4; /*0x6d850b*/
    return a1; /*0x6d84fc*/
  }
}


// ==== 0x006D8530  DisplayClass::ScrollTacticalView  this=AbstractClass  sig=csp ====
int __thiscall DisplayClass::ScrollTacticalView(_DWORD *this, IUnknown *aP1, IUnknown *aP2)
{
  int v4; // edx
  int result; // eax
  int v6; // eax
  int v7; // ecx

  if ( (MEMORY[0xB077F8].__pad_5554[148] & 1) == 0 ) /*0x6d8541*/
  {
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[236] = 0; /*0x6d854e*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[240] = -1; /*0x6d8553*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[244] = 1; /*0x6d855e*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[248] = -1; /*0x6d8563*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[252] = 1; /*0x6d8569*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[260] = 1; /*0x6d856e*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[256] = 0; /*0x6d8577*/
    MEMORY[0xB077F8].field_5660 = 0; /*0x6d857d*/
    MEMORY[0xB077F8].field_565C = 1; /*0x6d8587*/
    MEMORY[0xB077F8].field_5664 = 1; /*0x6d858d*/
    MEMORY[0xB077F8].field_5668 = -1; /*0x6d8593*/
    *(_DWORD *)MEMORY[0xB077F8].__pad_566C = 1; /*0x6d8598*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[4] = -1; /*0x6d85a3*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[8] = 0; /*0x6d85a8*/
    MEMORY[0xB077F8].__pad_5554[148] |= 1u; /*0x6d85bb*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[12] = -1; /*0x6d85c1*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[16] = -1; /*0x6d85c6*/
    atexit(nullsub_41); /*0x6d85cc*/
  }
  v4 = this->qD64; /*0x6d85dc*/
  result = v4 + (_DWORD)aP2 * *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[8 * (_DWORD)aP1 + 236]; /*0x6d85fc*/
  if ( v4 != result /*0x6d8606*/
    || this->qD68 != this->qD68 + (_DWORD)aP2 * *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[8 * (_DWORD)aP1 + 240] )
  {
    v6 = this->qD78; /*0x6d8612*/
    v7 = (_DWORD)aP2 * *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[8 * (_DWORD)aP1 + 240]; /*0x6d8618*/
    this->qD74 += (_DWORD)aP2 * *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[8 * (_DWORD)aP1 + 236]; /*0x6d861a*/
    result = v7 + v6; /*0x6d8620*/
    this->qD78 = result; /*0x6d8622*/
  }
  return result; /*0x6d8628*/
}


// ==== 0x006D8630  nullsub_41  this=-  sig=ida-proto ====
void __cdecl nullsub_41()
{
  ; /*0x6d8630*/
}


// ==== 0x006D8640  ClampCoordMap  this=AbstractClass  sig=csp ====
char __stdcall ClampCoordMap(AbstractClass *aP0)
{
  int v1; // edi
  int v2; // esi
  AbstractClass *v3; // ecx
  AbstractClass *v4; // edx
  char v5; // bl
  AbstractClass *v6; // eax

  v1 = *(_DWORD *)&stru_87C374.__pad_579C[21656] / 2 /*0x6d8670*/
     + 30 * (2 * *(_DWORD *)&stru_87C374.__pad_14B0[8384] - *(_DWORD *)&stru_87C374.__pad_14B0[8376]);
  v2 = v1 + 60 * *(_DWORD *)&stru_87C374.__pad_14B0[8392] - *(_DWORD *)&stru_87C374.__pad_579C[21656]; /*0x6d8690*/
  v3 = (AbstractClass *)(*(_DWORD *)&stru_87C374.__pad_579C[21660] / 2 /*0x6d869c*/
                       + 15
                       * (*(_DWORD *)&stru_87C374.__pad_14B0[8376] + 2 * *(_DWORD *)&stru_87C374.__pad_14B0[8388] - 5));
  v4 = *(AbstractClass **)&aP0->__pad_0[4]; /*0x6d86b3*/
  v5 = 0; /*0x6d86ba*/
  v6 = (AbstractClass *)((char *)v3 /*0x6d86bc*/
                       + (60 * *(_DWORD *)&stru_87C374.__pad_14B0[8396] + 270) / 2
                       - *(_DWORD *)&stru_87C374.__pad_579C[21660]);
  if ( (int)v4 >= (int)v3 ) /*0x6d86c0*/
  {
    if ( (int)v4 > (int)v6 ) /*0x6d86cb*/
    {
      *(_DWORD *)&aP0->__pad_0[4] = v6; /*0x6d86cd*/
      v5 = 1; /*0x6d86d0*/
    }
  }
  else
  {
    v5 = 1; /*0x6d86c2*/
    *(_DWORD *)&aP0->__pad_0[4] = v3; /*0x6d86c4*/
  }
  if ( *(_DWORD *)aP0->__pad_0 >= v1 ) /*0x6d86d7*/
  {
    if ( *(_DWORD *)aP0->__pad_0 <= v2 ) /*0x6d86e7*/
    {
      return v5; /*0x6d86f7*/
    }
    else
    {
      *(_DWORD *)aP0->__pad_0 = v2; /*0x6d86e9*/
      return 1; /*0x6d86ef*/
    }
  }
  else
  {
    *(_DWORD *)aP0->__pad_0 = v1; /*0x6d86d9*/
    return 1; /*0x6d86df*/
  }
}


// ==== 0x006D8700  Cell::GetAdjacentPassableMask  this=AbstractClass  sig=csp ====
int __stdcall Cell::GetAdjacentPassableMask(IUnknown *aP0, int a2)
{
  int v2; // ebp
  IUnknown *v3; // edi
  _DWORD *v4; // eax
  int v5; // eax
  char v6; // bl
  __int16 v7; // cx
  __int16 v8; // dx
  __int16 v9; // ax
  __int16 v10; // ax
  __int16 v11; // cx
  __int16 v12; // ax
  __int16 v13; // cx
  __int16 v14; // dx
  unsigned __int8 v15; // cl
  int v16; // eax
  __int16 v17; // ax
  __int16 v18; // cx
  __int16 v19; // dx
  __int16 v20; // dx
  __int16 v21; // ax
  __int16 v22; // dx
  __int16 v23; // ax
  __int16 v24; // cx

  v2 = 0; /*0x6d870e*/
  v3 = (IUnknown *)-1; /*0x6d8710*/
  v4 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)aP0); /*0x6d8713*/
  if ( !(_BYTE)a2 ) /*0x6d871e*/
  {
    v16 = v4[75]; /*0x6d88f4*/
    if ( (v16 & 0x18) == 0 ) /*0x6d88fc*/
      v3 = (IUnknown *)-2; /*0x6d88fe*/
    v6 = 8; /*0x6d8903*/
    if ( (v16 & 8) != 0 ) /*0x6d890a*/
    {
      v17 = HIWORD(aP0->field_0) - 1; /*0x6d8919*/
      LOWORD(a2) = LOWORD(aP0->field_0) - 1; /*0x6d891b*/
      HIWORD(a2) = v17; /*0x6d8920*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8942*/
        v2 = 64; /*0x6d8944*/
      v18 = HIWORD(aP0->field_0) - 1; /*0x6d8950*/
      LOWORD(a2) = aP0->field_0; /*0x6d8952*/
      HIWORD(a2) = v18; /*0x6d8957*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8979*/
        v2 |= 0x80u; /*0x6d897b*/
      v19 = HIWORD(aP0->field_0) - 1; /*0x6d898a*/
      LOWORD(a2) = LOWORD(aP0->field_0) + 1; /*0x6d898c*/
      HIWORD(a2) = v19; /*0x6d8995*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d89b3*/
        v2 |= 1u; /*0x6d89b5*/
      v20 = LOWORD(aP0->field_0) - 1; /*0x6d89bf*/
      HIWORD(a2) = HIWORD(aP0->field_0); /*0x6d89c1*/
      LOWORD(a2) = v20; /*0x6d89c6*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d89e8*/
        v2 |= 0x20u; /*0x6d89ea*/
      v21 = LOWORD(aP0->field_0) + 1; /*0x6d89f4*/
      HIWORD(a2) = HIWORD(aP0->field_0); /*0x6d89f6*/
      LOWORD(a2) = v21; /*0x6d89fb*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8a1d*/
        v2 |= 2u; /*0x6d8a1f*/
      v22 = HIWORD(aP0->field_0) + 1; /*0x6d8a2b*/
      LOWORD(a2) = LOWORD(aP0->field_0) - 1; /*0x6d8a2d*/
      HIWORD(a2) = v22; /*0x6d8a36*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8a54*/
        v2 |= 0x10u; /*0x6d8a56*/
      v23 = HIWORD(aP0->field_0) + 1; /*0x6d8a60*/
      LOWORD(a2) = aP0->field_0; /*0x6d8a62*/
      HIWORD(a2) = v23; /*0x6d8a67*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8a89*/
        v2 |= 8u; /*0x6d8a8b*/
      v24 = HIWORD(aP0->field_0) + 1; /*0x6d8a96*/
      LOWORD(a2) = LOWORD(aP0->field_0) + 1; /*0x6d8a98*/
      HIWORD(a2) = v24; /*0x6d8a9d*/
      v15 = *((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 300); /*0x6d8ab9*/
      goto LABEL_38; /*0x6d8ab9*/
    }
    return (int)v3; /*0x6d8ad4*/
  }
  v5 = v4[80]; /*0x6d8724*/
  if ( (v5 & 3) == 0 ) /*0x6d872c*/
    v3 = (IUnknown *)-2; /*0x6d872e*/
  v6 = 2; /*0x6d8733*/
  if ( (v5 & 2) == 0 ) /*0x6d873a*/
    return (int)v3; /*0x6d873a*/
  v7 = HIWORD(aP0->field_0) - 1; /*0x6d8749*/
  LOWORD(a2) = LOWORD(aP0->field_0) - 1; /*0x6d874b*/
  HIWORD(a2) = v7; /*0x6d8750*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d8772*/
    v2 = 64; /*0x6d8774*/
  v8 = HIWORD(aP0->field_0); /*0x6d877c*/
  LOWORD(a2) = aP0->field_0; /*0x6d8780*/
  HIWORD(a2) = v8 - 1; /*0x6d878b*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d87a9*/
    v2 |= 0x80u; /*0x6d87ab*/
  v9 = HIWORD(aP0->field_0) - 1; /*0x6d87ba*/
  LOWORD(a2) = LOWORD(aP0->field_0) + 1; /*0x6d87bc*/
  HIWORD(a2) = v9; /*0x6d87c1*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d87e3*/
    v2 |= 1u; /*0x6d87e5*/
  v10 = LOWORD(aP0->field_0) - 1; /*0x6d87ef*/
  HIWORD(a2) = HIWORD(aP0->field_0); /*0x6d87f1*/
  LOWORD(a2) = v10; /*0x6d87f6*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d8818*/
    v2 |= 0x20u; /*0x6d881a*/
  v11 = LOWORD(aP0->field_0) + 1; /*0x6d8824*/
  HIWORD(a2) = HIWORD(aP0->field_0); /*0x6d8826*/
  LOWORD(a2) = v11; /*0x6d882b*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d884d*/
    v2 |= 2u; /*0x6d884f*/
  v12 = HIWORD(aP0->field_0) + 1; /*0x6d885a*/
  LOWORD(a2) = LOWORD(aP0->field_0) - 1; /*0x6d885c*/
  HIWORD(a2) = v12; /*0x6d8861*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d8883*/
    v2 |= 0x10u; /*0x6d8885*/
  v13 = HIWORD(aP0->field_0) + 1; /*0x6d888f*/
  LOWORD(a2) = aP0->field_0; /*0x6d8891*/
  HIWORD(a2) = v13; /*0x6d8896*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d88b8*/
    v2 |= 8u; /*0x6d88ba*/
  v14 = HIWORD(aP0->field_0) + 1; /*0x6d88c6*/
  LOWORD(a2) = LOWORD(aP0->field_0) + 1; /*0x6d88c8*/
  HIWORD(a2) = v14; /*0x6d88d1*/
  v15 = *((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 320); /*0x6d88e9*/
LABEL_38:
  if ( (v15 & (unsigned __int8)v6) == 0 ) /*0x6d8ac1*/
    v2 |= 4u; /*0x6d8ac3*/
  return byte_7F4194[v2]; /*0x6d8acd*/
}


// ==== 0x006D8B30  TacticalClass::CalcViewportCells  this=TacticalClass  sig=csp ====
unsigned int __thiscall TacticalClass_CalcViewportCells(int this)
{
  int v2; // ecx
  int v3; // edi
  double v4; // st7
  int v5; // eax
  float *v6; // eax
  int v7; // edi
  int v8; // eax
  unsigned int result; // eax
  float v10[3]; // [esp+8h] [ebp-18h] BYREF
  float v11; // [esp+14h] [ebp-Ch] BYREF
  float v12; // [esp+18h] [ebp-8h]
  int v13; // [esp+1Ch] [ebp-4h]

  v13 = 0; /*0x6d8b37*/
  v2 = *(_DWORD *)(this + 3428); /*0x6d8b3f*/
  v3 = *(_DWORD *)(this + 3432); /*0x6d8b45*/
  *(_DWORD *)(this + 176) = v2; /*0x6d8b4b*/
  *(_DWORD *)(this + 180) = v3; /*0x6d8b51*/
  *(_DWORD *)(this + 176) = v2 - MEMORY[0xB0CE30] / 2; /*0x6d8b63*/
  LODWORD(v10[0]) = *(_DWORD *)(this + 176) - 60; /*0x6d8b80*/
  v4 = (double)SLODWORD(v10[0]); /*0x6d8b84*/
  v5 = v3 - MEMORY[0xB0CE34] / 2; /*0x6d8b88*/
  *(_DWORD *)(this + 180) = v5; /*0x6d8b90*/
  v11 = v4; /*0x6d8b99*/
  LODWORD(v10[1]) = v5 - 30; /*0x6d8b9d*/
  v12 = (float)(v5 - 30); /*0x6d8bae*/
  v6 = TransformMatrix3x4Point(v10, (float *)(this + 3556), &v11); /*0x6d8bb2*/
  v11 = *v6; /*0x6d8bb9*/
  v12 = v6[1]; /*0x6d8bc4*/
  v13 = *((_DWORD *)v6 + 2); /*0x6d8bcb*/
  v7 = Math::RoundToInt(v11); /*0x6d8bd8*/
  v8 = Math::RoundToInt(v12); /*0x6d8bda*/
  *(_DWORD *)(this + 3456) = v7 / 256; /*0x6d8bf0*/
  *(_DWORD *)(this + 3460) = v8 / 256; /*0x6d8c04*/
  *(_DWORD *)(this + 3464) = MEMORY[0xB0CE30] / 60 + 2; /*0x6d8c2a*/
  result = (unsigned int)((unsigned __int64)(2290649225LL * MEMORY[0xB0CE34]) >> 32) >> 31; /*0x6d8c3f*/
  *(_DWORD *)(this + 3468) = MEMORY[0xB0CE34] / 15 + 4; /*0x6d8c46*/
  return result; /*0x6d8bea*/
}


// ==== 0x006D8C60  sub_6D8C60  this=-  sig=ida-proto ====
int __fastcall sub_6D8C60(int a1, int a2)
{
  _DWORD *v3; // eax
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int result; // eax
  int v8; // edi
  int v9; // esi
  int v10; // [esp+18h] [ebp-1Ch]
  int v12; // [esp+20h] [ebp-14h] BYREF
  int v13; // [esp+24h] [ebp-10h]
  _BYTE v14[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 72))(a1, v14); /*0x6d8c77*/
  v10 = v3[1]; /*0x6d8c89*/
  v4 = (-60 * v10 / 2 + 60 * *v3 / 2) / 256; /*0x6d8cf7*/
  v5 = (30 * v10 / 2 + 30 * *v3 / 2) / 256; /*0x6d8cfa*/
  v6 = Math::RoundToInt((double)(int)v3[2] * MEMORY[0xB0CD48] + (double)(v3[2] >= 728) + 0.5); /*0x6d8d21*/
  v12 = v4; /*0x6d8d2d*/
  v13 = v5 - v6; /*0x6d8d31*/
  result = (int)MEMORY[0x887324][45].__tail_0; /*0x6d8d3b*/
  v8 = v4 - (unsigned int)MEMORY[0x887324][44].__tail_0; /*0x6d8d41*/
  v9 = v13 - result; /*0x6d8d43*/
  v12 = v8; /*0x6d8d4b*/
  v13 -= result; /*0x6d8d4f*/
  if ( v8 >= -360 ) /*0x6d8d53*/
  {
    result = MEMORY[0xB0CE30] + 360; /*0x6d8d5a*/
    if ( v8 <= MEMORY[0xB0CE30] + 360 && v9 >= -180 && v9 <= MEMORY[0xB0CE34] + 180 ) /*0x6d8d79*/
    {
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 268))(a1, &v12, a2); /*0x6d8d8a*/
      return (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 272))(a1, &v12, a2); /*0x6d8d9b*/
    }
  }
  return result; /*0x6d8da1*/
}


// ==== 0x006D8DB0  TacticalMap::RenderAllObjects  this=TacticalMap  sig=csp ====
int __thiscall TacticalMap_RenderAllObjects(int this, int a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // edi
  float *v5; // ebp
  float *v6; // eax
  float *v7; // eax
  int v8; // edi
  float *v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // edi
  int v13; // eax
  int v14; // ebx
  int *v15; // esi
  int v16; // eax
  int v17; // ecx
  _DWORD *v18; // eax
  LPPERSISTSTREAM v19; // edi
  int *v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  _DWORD *v26; // eax
  int v27; // eax
  int *v28; // edx
  int v29; // eax
  int v30; // ecx
  char v31; // al
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  int v37; // ecx
  int *v38; // eax
  LPPERSISTSTREAM v39; // ebx
  int *v40; // edi
  int *v41; // ecx
  int v42; // eax
  int v43; // edx
  int v44; // ecx
  int v45; // kr18_4
  int v46; // eax
  struct IPersistStreamVtbl *lpVtbl; // eax
  int v48; // edx
  int v49; // ecx
  int v50; // ecx
  _BYTE *v51; // ebx
  int *v52; // eax
  LPPERSISTSTREAM v53; // ebp
  int *v54; // edi
  _DWORD *v55; // eax
  int v56; // ecx
  __int64 v57; // rax
  int v58; // esi
  int v59; // eax
  int v60; // esi
  int v61; // eax
  int *v62; // ecx
  int result; // eax
  int v64; // ebx
  int *v65; // eax
  int v66; // esi
  int v67; // edi
  int v68; // esi
  int v69; // eax
  int v70; // edi
  int v71; // esi
  bool v72; // cc
  int v73; // [esp+28h] [ebp-ECh]
  int v74; // [esp+28h] [ebp-ECh]
  int v75; // [esp+28h] [ebp-ECh]
  int v76; // [esp+28h] [ebp-ECh]
  int v77; // [esp+2Ch] [ebp-E8h] BYREF
  int v78; // [esp+30h] [ebp-E4h]
  float v79; // [esp+34h] [ebp-E0h] BYREF
  float v80; // [esp+38h] [ebp-DCh]
  int v81; // [esp+3Ch] [ebp-D8h]
  int *v82; // [esp+40h] [ebp-D4h]
  int v83; // [esp+44h] [ebp-D0h]
  int v84; // [esp+48h] [ebp-CCh]
  int v85; // [esp+4Ch] [ebp-C8h]
  int v86; // [esp+50h] [ebp-C4h] BYREF
  int v87; // [esp+54h] [ebp-C0h]
  int v88; // [esp+58h] [ebp-BCh]
  int v89; // [esp+5Ch] [ebp-B8h] BYREF
  int v90; // [esp+60h] [ebp-B4h]
  int v91; // [esp+64h] [ebp-B0h] BYREF
  int v92; // [esp+68h] [ebp-ACh]
  int v93; // [esp+74h] [ebp-A0h]
  int v94; // [esp+78h] [ebp-9Ch]
  float v95[4]; // [esp+7Ch] [ebp-98h] BYREF
  int v96; // [esp+8Ch] [ebp-88h]
  _DWORD v97[2]; // [esp+90h] [ebp-84h] BYREF
  _DWORD v98[4]; // [esp+98h] [ebp-7Ch] BYREF
  int v99[3]; // [esp+A8h] [ebp-6Ch] BYREF
  int v100; // [esp+B4h] [ebp-60h]
  _BYTE v101[12]; // [esp+B8h] [ebp-5Ch] BYREF
  _BYTE v102[12]; // [esp+C4h] [ebp-50h] BYREF
  int v103; // [esp+D0h] [ebp-44h] BYREF
  char v104[12]; // [esp+D8h] [ebp-3Ch] BYREF
  char v105[12]; // [esp+E4h] [ebp-30h] BYREF
  char v106[12]; // [esp+F0h] [ebp-24h] BYREF
  char v107[12]; // [esp+FCh] [ebp-18h] BYREF
  char v108[12]; // [esp+108h] [ebp-Ch] BYREF

  v2 = MEMORY[0x886FA8]; /*0x6d8db7*/
  v3 = *(_DWORD *)(this + 176); /*0x6d8dc4*/
  v4 = *(_DWORD *)(this + 180); /*0x6d8dd5*/
  v77 = v3 + MEMORY[0x886FA8] / 2; /*0x6d8ddb*/
  v73 = MEMORY[0x886FAC]; /*0x6d8de5*/
  v5 = (float *)(this + 3556); /*0x6d8deb*/
  v79 = (float)v77; /*0x6d8df1*/
  v78 = v4 - MEMORY[0x886FAC]; /*0x6d8df5*/
  v81 = 0; /*0x6d8e08*/
  v80 = (float)(v4 - MEMORY[0x886FAC]); /*0x6d8e10*/
  v6 = TransformMatrix3x4Point(v95, (float *)(this + 3556), &v79); /*0x6d8e14*/
  v79 = *v6; /*0x6d8e1b*/
  v80 = v6[1]; /*0x6d8e26*/
  v81 = *((_DWORD *)v6 + 2); /*0x6d8e2d*/
  v83 = Math::RoundToInt(v79); /*0x6d8e3a*/
  v84 = Math::RoundToInt(v80); /*0x6d8e43*/
  v77 = v3 + 2 * v2; /*0x6d8e4a*/
  v79 = (float)v77; /*0x6d8e62*/
  v74 = v73 / 2 + v4; /*0x6d8e74*/
  v78 = v74; /*0x6d8e66*/
  v81 = 0; /*0x6d8e78*/
  v80 = (float)v74; /*0x6d8e80*/
  v7 = TransformMatrix3x4Point(v95, v5, &v79); /*0x6d8e84*/
  v79 = *v7; /*0x6d8e8b*/
  v80 = v7[1]; /*0x6d8e96*/
  v81 = *((_DWORD *)v7 + 2); /*0x6d8e9d*/
  v8 = Math::RoundToInt(v79); /*0x6d8ea8*/
  v77 = v3 - v2; /*0x6d8eae*/
  v78 = v74; /*0x6d8eb6*/
  v79 = (float)(v3 - v2); /*0x6d8eba*/
  v80 = (float)v74; /*0x6d8ecd*/
  v81 = 0; /*0x6d8ed1*/
  v9 = TransformMatrix3x4Point(v95, v5, &v79); /*0x6d8ed9*/
  v79 = *v9; /*0x6d8ee0*/
  v80 = v9[1]; /*0x6d8ee7*/
  v81 = *((_DWORD *)v9 + 2); /*0x6d8ef2*/
  v10 = Math::RoundToInt(v80); /*0x6d8ef6*/
  v11 = v83; /*0x6d8efb*/
  v93 = 2 * (v8 - v83); /*0x6d8f03*/
  v12 = v84; /*0x6d8f07*/
  v94 = 2 * (v10 - v84); /*0x6d8f0f*/
  v13 = 0; /*0x6d8f13*/
  v82 = 0; /*0x6d8f15*/
  do /*0x6d95a9*/
  {
    v85 = 0; /*0x6d8f1c*/
    v14 = 24 * v13; /*0x6d8f24*/
    v75 = 24 * v13; /*0x6d8f27*/
    if ( MEMORY[0x8A0370][6 * v13] > 0 ) /*0x6d8f33*/
    {
      while ( 1 ) /*0x6d8f43*/
      {
        v15 = *(int **)(*(int *)((char *)MEMORY[0x8A0364] + v14) + 4 * v85); /*0x6d8f43*/
        *((_BYTE *)v15 + 153) = 0; /*0x6d8f48*/
        if ( v15 ) /*0x6d8f4f*/
        {
          if ( (v15[5] & 4) != 0 ) /*0x6d8f64*/
          {
            v16 = v15[39]; /*0x6d8f72*/
            v86 = v16; /*0x6d8f74*/
            v17 = v15[40]; /*0x6d8f7a*/
            v87 = v17; /*0x6d8f7d*/
            v88 = v15[41]; /*0x6d8f84*/
            if ( v16 < v11 ) /*0x6d8f88*/
              goto LABEL_53; /*0x6d8f88*/
            if ( v16 >= v11 + v93 ) /*0x6d8f96*/
              goto LABEL_53; /*0x6d8f96*/
            if ( v17 < v12 ) /*0x6d8f9e*/
              goto LABEL_53; /*0x6d8f9e*/
            if ( v17 >= v12 + v94 ) /*0x6d8fac*/
              goto LABEL_53; /*0x6d8fac*/
            (*(void (__thiscall **)(int *, char *, _DWORD))(*v15 + 76))(v15, v107, 0); /*0x6d8fc0*/
            if ( (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) != 0 ) /*0x6d8fce*/
            {
              if ( Game::Stub3((int)&v86) ) /*0x6d8fda*/
                goto LABEL_53; /*0x6d8fe1*/
            }
            v18 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(*v15 + 72))(v15, v104); /*0x6d8ff3*/
            v19 = MEMORY[0x887324]; /*0x6d8ff6*/
            v20 = Coord::To_ScreenRaw(&v103, v18); /*0x6d9007*/
            v77 = *v20; /*0x6d9010*/
            v78 = v20[1]; /*0x6d9017*/
            v21 = v78 - (unsigned int)v19[45].__tail_0; /*0x6d9029*/
            v77 -= (int)v19[44].__tail_0; /*0x6d9030*/
            v78 = v21; /*0x6d9034*/
            if ( v77 >= -360 && v77 <= MEMORY[0xB0CE30] + 360 && v21 >= -180 && v21 <= MEMORY[0xB0CE34] + 180 ) /*0x6d906a*/
            {
              v22 = *v15; /*0x6d9070*/
              *((_BYTE *)v15 + 153) = 1; /*0x6d907e*/
              (*(void (__thiscall **)(int *, int *, int *))(v22 + 268))(v15, &v77, &MEMORY[0x886FA0]); /*0x6d9085*/
              (*(void (__thiscall **)(int *, int *, int, _DWORD))(*v15 + 260))(v15, &MEMORY[0x886FA0], a2, 0); /*0x6d909e*/
            }
            goto LABEL_52; /*0x6d90a4*/
          }
          if ( (v15[5] & 1) != 0 ) /*0x6d90af*/
          {
            v23 = v15[39]; /*0x6d90bd*/
            v86 = v23; /*0x6d90bf*/
            v24 = v15[40]; /*0x6d90c5*/
            v87 = v24; /*0x6d90c8*/
            v88 = v15[41]; /*0x6d90cf*/
            if ( v23 >= v11 && v23 < v11 + v93 && v24 >= v12 && v24 < v12 + v94 ) /*0x6d90f7*/
            {
              v25 = *v15; /*0x6d90fd*/
              *((_BYTE *)v15 + 153) = 1; /*0x6d9111*/
              v26 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(v25 + 72))(v15, v106); /*0x6d9118*/
              if ( Coord::To_Screen(MEMORY[0x887324], v26, v99) ) /*0x6d9122*/
              {
                (*(void (__thiscall **)(int *, int *, int *))(*v15 + 268))(v15, v99, &MEMORY[0x886FA0]); /*0x6d913c*/
                (*(void (__thiscall **)(int *, int *, int *))(*v15 + 272))(v15, v99, &MEMORY[0x886FA0]); /*0x6d9153*/
              }
              (*(void (__thiscall **)(int *, int *, int, int))(*v15 + 260))(v15, &MEMORY[0x886FA0], a2, 1); /*0x6d916c*/
            }
            goto LABEL_53; /*0x6d9172*/
          }
        }
        v27 = (*(int (__thiscall **)(int *))(*v15 + 44))(v15); /*0x6d917b*/
        if ( v27 == 4 ) /*0x6d9181*/
        {
          v28 = (int *)(*(int (__thiscall **)(int *, char *))(*v15 + 72))(v15, v108); /*0x6d9196*/
          v29 = *v28; /*0x6d9198*/
          v86 = v29; /*0x6d919a*/
          v30 = v28[1]; /*0x6d91a0*/
          v87 = v30; /*0x6d91a3*/
          v88 = v28[2]; /*0x6d91aa*/
          if ( v29 >= v11 && v29 < v11 + v93 && v30 >= v12 && v30 < v12 + v94 ) /*0x6d91d2*/
          {
            v31 = *((_BYTE *)v15 + 280); /*0x6d91d8*/
            *((_BYTE *)v15 + 153) = 1; /*0x6d91de*/
            if ( v31 /*0x6d920e*/
              || !*(_BYTE *)(v15[50] + 884)
              || (v32 = (*(int (__thiscall **)(int *, char *))(*v15 + 72))(v15, v105), !Game::Stub3(v32)) )
            {
              (*(void (__thiscall **)(int *, int *, int, _DWORD))(*v15 + 260))(v15, &MEMORY[0x886FA0], a2, 0); /*0x6d921f*/
            }
          }
          goto LABEL_53; /*0x6d921f*/
        }
        if ( v27 == 36 ) /*0x6d9227*/
        {
          if ( *(_BYTE *)(v15[50] + 691) || *((_BYTE *)v15 + 205) ) /*0x6d923d*/
          {
            v33 = v15[39]; /*0x6d9251*/
            v86 = v33; /*0x6d9257*/
            v34 = v15[40]; /*0x6d925d*/
            v87 = v34; /*0x6d9260*/
            v88 = v15[41]; /*0x6d9267*/
            if ( v33 >= v11 && v33 < v11 + v93 && v34 >= v12 && v34 < v12 + v94 && !Game::Stub3((int)&v86) ) /*0x6d929f*/
            {
              v35 = *v15; /*0x6d92ac*/
              *((_BYTE *)v15 + 153) = 1; /*0x6d92ae*/
              (*(void (__thiscall **)(int *, int *, int, _DWORD))(v35 + 260))(v15, &MEMORY[0x886FA0], a2, 0); /*0x6d92b7*/
            }
          }
          goto LABEL_53; /*0x6d92b7*/
        }
        v36 = v15[39]; /*0x6d92c4*/
        v86 = v36; /*0x6d92c6*/
        v37 = v15[40]; /*0x6d92cc*/
        v87 = v37; /*0x6d92cf*/
        v88 = v15[41]; /*0x6d92d6*/
        if ( v36 >= v11 && v36 < v11 + v93 && v37 >= v12 && v37 < v12 + v94 ) /*0x6d92fe*/
        {
          v38 = (int *)(*(int (__thiscall **)(int *, _BYTE *))(*v15 + 72))(v15, v101); /*0x6d9310*/
          v39 = MEMORY[0x887324]; /*0x6d9313*/
          v40 = v38; /*0x6d9319*/
          v41 = IsoCoord::ToPixel(v95, *v38, v38[1]); /*0x6d932b*/
          v42 = *v41; /*0x6d932d*/
          v43 = v41[1]; /*0x6d932f*/
          v44 = v40[2]; /*0x6d9332*/
          v100 = v43; /*0x6d9335*/
          v45 = v42; /*0x6d9343*/
          v46 = ZCoordToScreenY(v44); /*0x6d934a*/
          v91 = v45 / 256; /*0x6d935f*/
          v92 = v100 / 256 - v46; /*0x6d936e*/
          lpVtbl = v39[45].__tail_0; /*0x6d9378*/
          v97[0] = v39[44].__tail_0; /*0x6d9383*/
          v97[1] = lpVtbl; /*0x6d938a*/
          Vector2::Subtract(&v91, v97); /*0x6d9391*/
          if ( v91 >= -360 && v91 <= MEMORY[0xB0CE30] + 360 && v92 >= -180 && v92 <= MEMORY[0xB0CE34] + 180 ) /*0x6d93ca*/
          {
            v48 = *v15; /*0x6d93cc*/
            *((_BYTE *)v15 + 153) = 1; /*0x6d93da*/
            (*(void (__thiscall **)(int *, int *, int *))(v48 + 268))(v15, &v91, &MEMORY[0x886FA0]); /*0x6d93e1*/
            (*(void (__thiscall **)(int *, int *, int, _DWORD))(*v15 + 260))(v15, &MEMORY[0x886FA0], a2, 0); /*0x6d93fa*/
          }
          v14 = v75; /*0x6d9400*/
          v11 = v83; /*0x6d9404*/
LABEL_52:
          v12 = v84; /*0x6d9408*/
        }
LABEL_53:
        v49 = *(int *)((char *)MEMORY[0x8A0370] + v14); /*0x6d940c*/
        if ( ++v85 >= v49 ) /*0x6d941d*/
        {
          v13 = (int)v82; /*0x6d9423*/
          break; /*0x6d9423*/
        }
      }
    }
    if ( v13 == 2 ) /*0x6d942a*/
    {
      v50 = 0; /*0x6d9436*/
      v76 = 0; /*0x6d943a*/
      if ( MEMORY[0xA8EB50] > 0 ) /*0x6d943e*/
      {
        do /*0x6d9597*/
        {
          v51 = (_BYTE *)*((_DWORD *)MEMORY[0xA8EB44] + v50); /*0x6d944a*/
          if ( v51[116] && v51[153] ) /*0x6d9458*/
          {
            v52 = (int *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v51 + 172))(v51, v102); /*0x6d9472*/
            v53 = MEMORY[0x887324]; /*0x6d9478*/
            v54 = v52; /*0x6d947e*/
            v55 = IsoCoord::ToPixel(&v79, *v52, v52[1]); /*0x6d948b*/
            v56 = v55[1]; /*0x6d9494*/
            v57 = (int)*v55; /*0x6d9497*/
            v96 = v56; /*0x6d949e*/
            v58 = (BYTE4(v57) + (int)v57) >> 8; /*0x6d94a9*/
            v59 = ZCoordToScreenY(v54[2]); /*0x6d94ac*/
            v89 = v58; /*0x6d94be*/
            v90 = v96 / 256 - v59; /*0x6d94c9*/
            v60 = v58 - (unsigned int)v53[44].__tail_0; /*0x6d94d9*/
            v61 = v90 - (unsigned int)v53[45].__tail_0; /*0x6d94db*/
            v89 = v60; /*0x6d94e3*/
            v90 = v61; /*0x6d94e7*/
            if ( v60 >= -360 && v60 <= MEMORY[0xB0CE30] + 360 && v61 >= -180 && v61 <= MEMORY[0xB0CE34] + 180 ) /*0x6d9516*/
            {
              v98[2] = MEMORY[0x886FA8]; /*0x6d952a*/
              v98[0] = MEMORY[0x886FA0]; /*0x6d9539*/
              v98[1] = MEMORY[0x886FA4]; /*0x6d9540*/
              v98[3] = MEMORY[0x886FAC]; /*0x6d9547*/
              BuildingClass::DrawVisible(&v89, v98); /*0x6d957a*/
            }
            v11 = v83; /*0x6d957f*/
            v12 = v84; /*0x6d9583*/
          }
          v50 = ++v76; /*0x6d9590*/
        }
        while ( v76 < MEMORY[0xA8EB50] ); /*0x6d9597*/
        v13 = (int)v82; /*0x6d959d*/
      }
    }
    v82 = (int *)++v13; /*0x6d95a5*/
  }
  while ( v13 < 5 ); /*0x6d95a9*/
  v62 = MEMORY[0x8A0364]; /*0x6d95af*/
  v82 = MEMORY[0x8A0364]; /*0x6d95b4*/
  do /*0x6d97b5*/
  {
    result = 0; /*0x6d95bb*/
    v83 = v62[3]; /*0x6d95bf*/
    v85 = 0; /*0x6d95c3*/
    if ( v83 > 0 ) /*0x6d95c7*/
    {
      do /*0x6d97a2*/
      {
        v64 = *(_DWORD *)(*v62 + 4 * result); /*0x6d95cf*/
        if ( *(_BYTE *)(v64 + 153) ) /*0x6d95d2*/
        {
          if ( v64 ) /*0x6d95e2*/
          {
            if ( (*(_BYTE *)(v64 + 20) & 1) != 0 ) /*0x6d95f4*/
            {
              if ( (*(_BYTE *)(v64 + 20) & 4) == 0 /*0x6d965d*/
                || ((*(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v64 + 76))(v64, v102, 0), !g_hWnd)
                || MEMORY[0xA8ED6B]
                || (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) == 0
                || (v95[0] = *(float *)(v64 + 156),
                    v95[1] = *(float *)(v64 + 160),
                    v95[2] = *(float *)(v64 + 164),
                    !Game::Stub3((int)v95)) )
              {
                v65 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v64 + 72))(v64, v101); /*0x6d9676*/
                v66 = *v65; /*0x6d9683*/
                v96 = v65[1]; /*0x6d9689*/
                v89 = v65[2]; /*0x6d9697*/
                LODWORD(v79) = -60 * v96 / 2 + 60 * v66 / 2; /*0x6d96d0*/
                v67 = SLODWORD(v79) / 256; /*0x6d96f7*/
                v68 = (30 * v96 / 2 + 30 * v66 / 2) / 256; /*0x6d96fa*/
                v69 = Math::RoundToInt((double)v89 * MEMORY[0xB0CD48] + (double)(v89 >= 728) + 0.5); /*0x6d9721*/
                v77 = v67; /*0x6d972d*/
                v78 = v68 - v69; /*0x6d9731*/
                v70 = v67 - (unsigned int)MEMORY[0x887324][44].__tail_0; /*0x6d9741*/
                v71 = v68 - v69 - (unsigned int)MEMORY[0x887324][45].__tail_0; /*0x6d9743*/
                v77 = v70; /*0x6d974b*/
                v78 = v71; /*0x6d974f*/
                if ( v70 >= -360 && v70 <= MEMORY[0xB0CE30] + 360 && v71 >= -180 && v71 <= MEMORY[0xB0CE34] + 180 ) /*0x6d9779*/
                  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v64 + 272))(v64, &v77, &MEMORY[0x886FA0]); /*0x6d9789*/
              }
            }
          }
        }
        result = v85 + 1; /*0x6d9797*/
        v72 = v85 + 1 < v83; /*0x6d9798*/
        v62 = v82; /*0x6d979a*/
        ++v85; /*0x6d979e*/
      }
      while ( v72 ); /*0x6d97a2*/
    }
    v62 += 6; /*0x6d97a8*/
    v82 = v62; /*0x6d97b1*/
  }
  while ( (int)v62 < (int)((int *)&MEMORY[0x8A03D8] + 1) ); /*0x6d97b5*/
  return result; /*0x6d97bb*/
}


// ==== 0x006D97D0  TacticalClass::FindOverlay  this=AbstractClass  sig=csp ====
int __stdcall TacticalClass::FindOverlay(int a1, IUnknown *aP1, IUnknown *aP2)
{
  int *v3; // eax
  Tactical *v4; // edx
  int result; // eax
  _BYTE *v6; // esi
  IUnknown *v7; // edi
  int v8; // ebp
  _DWORD *v9; // eax
  int v10; // edx
  char *v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // [esp+4h] [ebp-30h]
  int v16; // [esp+8h] [ebp-2Ch]
  int v17; // [esp+Ch] [ebp-28h]
  Tactical *v18; // [esp+10h] [ebp-24h]
  _DWORD v19[4]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v20[16]; // [esp+24h] [ebp-10h] BYREF
  IUnknown *aP1a; // [esp+3Ch] [ebp+8h]

  v3 = ClipRectIntersection((IUnknown *)v19, aP1, aP2, 0, 0); /*0x6d97e4*/
  v15 = *v3; /*0x6d97eb*/
  v16 = v3[1]; /*0x6d97f2*/
  v17 = v3[2]; /*0x6d97f9*/
  v4 = (Tactical *)v3[3]; /*0x6d97fd*/
  result = *(_DWORD *)&stru_89E138.__pad_14B0[3512] - 1; /*0x6d9805*/
  v18 = v4; /*0x6d9806*/
  for ( aP1a = (IUnknown *)(*(_DWORD *)&stru_89E138.__pad_14B0[3512] - 1); /*0x6d9810*/
        (int)aP1a >= 0;
        aP1a = (IUnknown *)((char *)aP1a - 1) )
  {
    v6 = *(_BYTE **)(*(_DWORD *)&stru_89E138.__pad_14B0[3500] + 4 * result); /*0x6d9820*/
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 44))(v6) == 36 /*0x6d9856*/
      && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 68))(v6)
      && !*(_BYTE *)(*((_DWORD *)v6 + 50) + 691)
      && !v6[205] )
    {
      v7 = *(IUnknown **)&stru_87C374.__pad_579C[21648]; /*0x6d9866*/
      v8 = *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x6d986c*/
      v9 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v6 + 300))(v6, v20); /*0x6d9879*/
      v10 = v8 + v9[1]; /*0x6d9888*/
      v11 = (char *)v7 + *v9; /*0x6d988e*/
      v12 = v9[2]; /*0x6d9890*/
      v13 = v9[3]; /*0x6d9893*/
      if ( (int)v11 < v15 + v17 && v10 < (int)&v18->__pad_0[v16] && (int)&v11[v12] > v15 && v10 + v13 > v16 ) /*0x6d98b8*/
      {
        v19[0] = aP2->field_0; /*0x6d98c2*/
        v19[1] = aP2->field_4; /*0x6d98c9*/
        v19[2] = aP2->field_8; /*0x6d98d0*/
        v14 = *(_DWORD *)v6; /*0x6d98d4*/
        v19[3] = aP2->field_C; /*0x6d98dd*/
        (*(void (__thiscall **)(_BYTE *, _DWORD *, int, _DWORD))(v14 + 260))(v6, v19, a1, 0); /*0x6d98e9*/
        v6[128] = 0; /*0x6d98ef*/
      }
    }
    result = (int)&aP1a[-1].__tail_1602E[1]; /*0x6d98fa*/
  }
  return result; /*0x6d9909*/
}


// ==== 0x006D9920  TacticalClass::FindBuilding  this=AbstractClass  sig=csp ====
int __stdcall TacticalClass::FindBuilding(int a1, IUnknown *aP1, IUnknown *aP2)
{
  int *v3; // eax
  Tactical *v4; // edx
  int result; // eax
  _BYTE *v6; // esi
  IUnknown *v7; // edi
  int v8; // ebp
  _DWORD *v9; // eax
  int v10; // edx
  char *v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // [esp+4h] [ebp-30h]
  int v16; // [esp+8h] [ebp-2Ch]
  int v17; // [esp+Ch] [ebp-28h]
  Tactical *v18; // [esp+10h] [ebp-24h]
  _DWORD v19[4]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v20[16]; // [esp+24h] [ebp-10h] BYREF
  IUnknown *aP1a; // [esp+3Ch] [ebp+8h]

  v3 = ClipRectIntersection((IUnknown *)v19, aP1, aP2, 0, 0); /*0x6d9934*/
  v15 = *v3; /*0x6d993b*/
  v16 = v3[1]; /*0x6d9942*/
  v17 = v3[2]; /*0x6d9949*/
  v4 = (Tactical *)v3[3]; /*0x6d9953*/
  result = 0; /*0x6d9956*/
  v18 = v4; /*0x6d995a*/
  for ( aP1a = 0; (int)aP1a < *(int *)&stru_89E138.__pad_14B0[3512]; aP1a = (IUnknown *)((char *)aP1a + 1) ) /*0x6d9962*/
  {
    v6 = *(_BYTE **)(*(_DWORD *)&stru_89E138.__pad_14B0[3500] + 4 * result); /*0x6d9972*/
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 44))(v6) == 6 /*0x6d9996*/
      && (!v6[1767] || HouseClass_Player.__pad_5568[23223]) )
    {
      v7 = *(IUnknown **)&stru_87C374.__pad_579C[21648]; /*0x6d999e*/
      v8 = *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x6d99a4*/
      v9 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v6 + 300))(v6, v20); /*0x6d99b1*/
      v10 = v8 + v9[1]; /*0x6d99c0*/
      v11 = (char *)v7 + *v9; /*0x6d99c6*/
      v12 = v9[2]; /*0x6d99c8*/
      v13 = v9[3]; /*0x6d99cb*/
      if ( (int)v11 < v15 + v17 && v10 < (int)&v18->__pad_0[v16] && (int)&v11[v12] > v15 && v10 + v13 > v16 ) /*0x6d99f0*/
      {
        v19[0] = aP2->field_0; /*0x6d99fa*/
        v19[1] = aP2->field_4; /*0x6d9a01*/
        v19[2] = aP2->field_8; /*0x6d9a08*/
        v14 = *(_DWORD *)v6; /*0x6d9a13*/
        v19[3] = aP2->field_C; /*0x6d9a15*/
        (*(void (__thiscall **)(_BYTE *, _DWORD *, int, _DWORD))(v14 + 260))(v6, v19, a1, 0); /*0x6d9a21*/
        v6[128] = 0; /*0x6d9a27*/
      }
    }
    result = (int)&aP1a->field_0 + 1; /*0x6d9a38*/
  }
  return result; /*0x6d9a49*/
}


// ==== 0x006D9A50  Render_Render_6D9A50  this=AbstractClass  sig=csp ====
int __stdcall sub_6D9A50(int a1, int a2, int a3, int a4)
{
  int result; // eax
  _BYTE *v5; // esi
  int *v6; // eax
  int v7; // ecx
  int v8; // edx
  int i; // [esp+10h] [ebp-28h]
  _BYTE v10[16]; // [esp+28h] [ebp-10h] BYREF

  result = 0; /*0x6d9a5f*/
  for ( i = 0; i < MEMORY[0x8A03A0]; ++i ) /*0x6d9a69*/
  {
    v5 = *(_BYTE **)(MEMORY[0x8A0394] + 4 * result); /*0x6d9a75*/
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 44))(v5) == 6 ) /*0x6d9a82*/
    {
      if ( v5[128] ) /*0x6d9a88*/
      {
        v6 = (int *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v5 + 300))(v5, v10); /*0x6d9a9f*/
        v7 = MEMORY[0x886FA0] + *v6; /*0x6d9aaf*/
        v8 = MEMORY[0x886FA4] + v6[1]; /*0x6d9ac4*/
        if ( a1 < v6[2] + v7 && a2 < v6[3] + v8 && a1 + a3 > v7 && a4 + a2 > v8 ) /*0x6d9af2*/
        {
          Cell::CreateCrater(*v6, v6[1], v6[2], v6[3], 0); /*0x6d9b15*/
          v5[128] = 0; /*0x6d9b1a*/
        }
      }
    }
    result = i + 1; /*0x6d9b2b*/
  }
  return result; /*0x6d9b38*/
}


// ==== 0x006D9B50  TacticalClass::CheckUnitOverlap  this=AbstractClass  sig=csp ====
char __thiscall TacticalClass::CheckUnitOverlap(_DWORD *this, int a2, int a3, AbstractClass *aP3, int a5)
{
  int v5; // eax
  int v6; // ecx
  char *v7; // ebx
  int v8; // eax
  _BYTE *v9; // ecx
  _DWORD *v10; // eax
  int v11; // ebp
  int v12; // esi
  int v13; // esi
  int v15; // [esp+10h] [ebp-2Ch]
  int v16; // [esp+18h] [ebp-24h]
  int v17; // [esp+1Ch] [ebp-20h]
  int v18; // [esp+24h] [ebp-18h]
  int v19; // [esp+2Ch] [ebp-10h]
  _BYTE v20[12]; // [esp+30h] [ebp-Ch] BYREF

  v5 = this->q0B0; /*0x6d9b53*/
  v6 = this->q0B4; /*0x6d9b5d*/
  v16 = v5 + a2; /*0x6d9b6a*/
  v17 = v6 + a3; /*0x6d9b75*/
  v7 = &aP3->__pad_0[v5 + a2]; /*0x6d9b86*/
  v8 = 0; /*0x6d9b8a*/
  v19 = a3 + a5 + v6; /*0x6d9b8c*/
  v15 = 0; /*0x6d9b98*/
  if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[100] <= 0 ) /*0x6d9b9c*/
    return 0; /*0x6d9cc6*/
  while ( 1 ) /*0x6d9ba8*/
  {
    v9 = *(_BYTE **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[88] + 4 * v8); /*0x6d9ba8*/
    if ( !v9[144] || !v9[128] || !v9[116] ) /*0x6d9bc7*/
      goto LABEL_10; /*0x6d9bcc*/
    v10 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v9 + 172))(v9, v20); /*0x6d9bd9*/
    v18 = v10[1]; /*0x6d9be6*/
    v11 = (-60 * v18 / 2 + 60 * *v10 / 2) / 256; /*0x6d9c5d*/
    v12 = (30 * v18 / 2 + 30 * *v10 / 2) / 256; /*0x6d9c60*/
    v13 = v12 /*0x6d9c8c*/
        - Math::RoundToInt((double)(int)v10[2] * *(double *)&MEMORY[0xB077F8].field_5550 + (double)(v10[2] >= 728) + 0.5);
    if ( v11 >= v16 && v11 <= (int)v7 && v13 >= v17 && v13 <= v19 ) /*0x6d9ca4*/
      return 1; /*0x6d9cbd*/
    v8 = v15; /*0x6d9ca6*/
LABEL_10:
    v15 = ++v8; /*0x6d9cb3*/
    if ( v8 >= *(int *)&MEMORY[0xA8D63C].__pad_14B0[100] ) /*0x6d9cb7*/
      return 0; /*0x6d9cb7*/
  }
}


// ==== 0x006D9CE0  ObjectClass::FindBuildingsInScreenRect  this=AbstractClass  sig=csp ====
int __thiscall FindBuildingsInScreenRect(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // ecx
  int result; // eax
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // ebp
  int v12; // edi
  __int64 v13; // rax
  int v14; // ebp
  int v15; // edi
  int v16; // ebp
  int v17; // eax
  int v18; // edi
  int v19; // ecx
  int v20; // eax
  int i; // [esp+Ch] [ebp-24h]
  int v22; // [esp+10h] [ebp-20h]
  int v23; // [esp+14h] [ebp-1Ch]
  int v24; // [esp+18h] [ebp-18h]
  int v25; // [esp+1Ch] [ebp-14h]
  int v26; // [esp+20h] [ebp-10h]
  int v27; // [esp+2Ch] [ebp-4h]

  v6 = this->q0B0; /*0x6d9cf0*/
  v23 = v6 + a2; /*0x6d9cf9*/
  v7 = this->q0B4; /*0x6d9cfd*/
  v24 = v7 + a3; /*0x6d9d06*/
  v25 = a2 + a4 + v6; /*0x6d9d16*/
  v26 = a3 + v7 + a5; /*0x6d9d25*/
  result = 0; /*0x6d9d29*/
  for ( i = 0; i < MEMORY[0xA8EB50]; ++i ) /*0x6d9d31*/
  {
    v9 = *((_DWORD *)MEMORY[0xA8EB44] + result); /*0x6d9d3e*/
    v22 = v9; /*0x6d9d41*/
    if ( *(_BYTE *)(v9 + 144) ) /*0x6d9d45*/
    {
      if ( *(_BYTE *)(v9 + 116) ) /*0x6d9d53*/
      {
        if ( !*(_BYTE *)(*(_DWORD *)(v9 + 1312) + 5889) ) /*0x6d9d64*/
        {
          v10 = (_DWORD *)(v9 + 156); /*0x6d9d72*/
          v11 = v10[1]; /*0x6d9d79*/
          v27 = v10[2]; /*0x6d9d82*/
          v12 = 30 * v11 / 2 + 30 * *v10 / 2; /*0x6d9dcf*/
          v13 = -60 * v11 / 2 + 60 * *v10 / 2; /*0x6d9dd3*/
          v14 = (BYTE4(v13) + (int)v13) >> 8; /*0x6d9deb*/
          v15 = v12 / 256 - Math::RoundToInt((double)v27 * MEMORY[0xB0CD48] + (double)(v27 >= 728) + 0.5); /*0x6d9e1a*/
          if ( v14 >= v23 && v14 <= v25 && v15 >= v24 && v15 <= v26 ) /*0x6d9e40*/
          {
            v16 = v14 - this->q0B0; /*0x6d9e52*/
            v17 = this->qDB0; /*0x6d9e54*/
            v18 = v15 - this->q0B4; /*0x6d9e5a*/
            if ( v17 != 500 && v16 >= -32 && v16 <= MEMORY[0x886FA8] + 32 && v18 >= -32 && v18 <= MEMORY[0x886FAC] + 32 ) /*0x6d9e85*/
            {
              MEMORY[0xB0CEC8][3 * v17] = v22; /*0x6d9e8e*/
              v19 = this->q0B4; /*0x6d9e9b*/
              v20 = 3 * this->qDB0; /*0x6d9eac*/
              MEMORY[0xB0CECC][v20] = this->q0B0 + v16; /*0x6d9eaf*/
              MEMORY[0xB0CED0][v20] = v18 + v19; /*0x6d9eb6*/
              ++this->qDB0; /*0x6d9ec4*/
            }
          }
        }
      }
    }
    result = i + 1; /*0x6d9ed4*/
  }
  return result; /*0x6d9ee2*/
}


// ==== 0x006D9EF0  TacticalClass::AddToDrawQueue  this=AbstractClass  sig=csp ====
char __thiscall TacticalClass_AddToDrawQueue(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // edx
  int v6; // eax

  v4 = this->qDB0; /*0x6d9ef0*/
  if ( v4 == 500 || a3 < -32 || a3 > MEMORY[0x886FA8] + 32 || a4 < -32 || a4 > MEMORY[0x886FAC] + 32 ) /*0x6d9f29*/
    return 0; /*0x6d9f75*/
  MEMORY[0xB0CEC8][3 * v4] = a2; /*0x6d9f32*/
  v5 = a4 + this->q0B4; /*0x6d9f4d*/
  v6 = 3 * this->qDB0; /*0x6d9f50*/
  MEMORY[0xB0CECC][v6] = this->q0B0 + a3; /*0x6d9f53*/
  MEMORY[0xB0CED0][v6] = v5; /*0x6d9f5b*/
  ++this->qDB0; /*0x6d9f69*/
  return 1; /*0x6d9f4f*/
}


// ==== 0x006D9F80  TacticalClass::InitScrollBounds  this=AbstractClass  sig=csp ====
int __thiscall sub_6D9F80(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  result = *(this + 868); /*0x6d9f80*/
  if ( !result ) /*0x6d9f88*/
  {
    result = *(this + 869); /*0x6d9f8a*/
    if ( !result ) /*0x6d9f92*/
    {
      *(this + 868) = *a2; /*0x6d9f9a*/
      *(this + 869) = a2[1]; /*0x6d9fa3*/
      *(this + 870) = *a2; /*0x6d9fab*/
      result = a2[1]; /*0x6d9fb1*/
      this->qD9C = result; /*0x6d9fb4*/
    }
  }
  return result; /*0x6d9fba*/
}


// ==== 0x006D9FC0  TacticalClass::UpdateScrollMaxBounds  this=AbstractClass  sig=csp ====
int __thiscall TacticalClass::UpdateScrollMaxBounds(_DWORD *this, IUnknown *aP1)
{
  int result; // eax

  if ( *(this + 868) || (result = *(this + 869)) != 0 ) /*0x6d9fd2*/
  {
    *(this + 870) = aP1->field_0; /*0x6d9fda*/
    result = aP1->field_4; /*0x6d9fe0*/
    this->qD9C = result; /*0x6d9fe3*/
  }
  return result; /*0x6d9fe9*/
}


// ==== 0x006D9FF0  PlayerClass::ProcessOccupancyUpdate  this=AbstractClass  sig=csp ====
int __thiscall PlayerClass::ProcessOccupancyUpdate(int *this, void (__thiscall *a2)(_BYTE *))
{
  int result; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // ebx
  _DWORD v9[4]; // [esp+4h] [ebp-10h] BYREF

  if ( *(this + 868) || (result = *(this + 869)) != 0 ) /*0x6da008*/
  {
    v4 = *(this + 868); /*0x6da00a*/
    v5 = *(this + 870); /*0x6da010*/
    v6 = this->qD9C; /*0x6da016*/
    v7 = *(this + 869); /*0x6da01e*/
    if ( v4 > v5 ) /*0x6da026*/
    {
      v8 = v4; /*0x6da028*/
      v4 = v5; /*0x6da02a*/
      v5 = v8; /*0x6da02c*/
    }
    if ( v7 > v6 ) /*0x6da030*/
    {
      v7 = v6; /*0x6da034*/
      v6 = *(this + 869); /*0x6da036*/
    }
    v9[2] = v5 - v4 + 1; /*0x6da03e*/
    v9[3] = v6 - v7 + 1; /*0x6da046*/
    v9[0] = v4; /*0x6da052*/
    v9[1] = v7; /*0x6da056*/
    BuildingClass::ProcessOccupancy(this, (AbstractClass *)v9, a2); /*0x6da05a*/
    *(this + 868) = 0; /*0x6da063*/
    *(this + 869) = 0; /*0x6da06a*/
    return 0; /*0x6da05f*/
  }
  return result; /*0x6da071*/
}


// ==== 0x006DA080  PlayerClass::HasOccupiedCell  this=AbstractClass  sig=csp ====
int __thiscall sub_6DA080(int *this)
{
  int v1; // eax
  int v2; // edx
  int v3; // ebx
  int v4; // ebp
  int v5; // edx
  int *i; // esi
  int v7; // eax
  int v8; // edx
  int v10; // [esp+10h] [ebp-14h]
  int v11; // [esp+1Ch] [ebp-8h]
  int v12; // [esp+20h] [ebp-4h]

  v1 = *(this + 870); /*0x6da080*/
  v2 = this->qD9C; /*0x6da086*/
  v3 = *(this + 868); /*0x6da090*/
  v4 = *(this + 869); /*0x6da097*/
  if ( v3 > v1 ) /*0x6da0a1*/
  {
    v3 = *(this + 870); /*0x6da0a5*/
    v1 = *(this + 868); /*0x6da0a7*/
  }
  if ( v4 > v2 ) /*0x6da0ab*/
  {
    v4 = this->qD9C; /*0x6da0af*/
    v2 = *(this + 869); /*0x6da0b1*/
  }
  v5 = v2 - v4 + 1; /*0x6da0b8*/
  v11 = v1 - v3 + 1; /*0x6da0bb*/
  v12 = v5; /*0x6da0bf*/
  if ( v11 <= 0 ) /*0x6da0c3*/
    return 0; /*0x6da0c3*/
  if ( v5 <= 0 ) /*0x6da0cb*/
    return 0; /*0x6da0cb*/
  v10 = 0; /*0x6da0d3*/
  if ( this->qDB0 <= 0 ) /*0x6da0dd*/
    return 0; /*0x6da14b*/
  for ( i = MEMORY[0xB0CEC8]; ; i += 3 ) /*0x6da0df*/
  {
    if ( *i ) /*0x6da0e4*/
    {
      if ( *(_BYTE *)(*i + 144) ) /*0x6da0ea*/
      {
        v7 = i[1] - this->q02C; /*0x6da103*/
        v8 = i[2] - this->q0B4; /*0x6da108*/
        if ( v7 >= v3 && v7 < v3 + v11 && v8 >= v4 && v8 < v4 + v12 ) /*0x6da124*/
          break; /*0x6da124*/
      }
    }
    if ( ++v10 >= this->qDB0 ) /*0x6da13a*/
      return 0; /*0x6da13a*/
  }
  return 1; /*0x6da13e*/
}


// ==== 0x006DA160  TacticalClass::ResetScrollBounds  this=VOID_PTR  sig=csp ====
int __thiscall sub_6DA160(_DWORD *this)
{
  *(this + 868) = 0; /*0x6da164*/
  *(this + 870) = 0; /*0x6da16a*/
  *(this + 869) = 0; /*0x6da170*/
  *(this + 871) = 0; /*0x6da176*/
  return 0; /*0x6da17c*/
}


// ==== 0x006DA180  TacticalMap::DrawOccupiedRegion  this=AbstractClass  sig=csp ====
int __thiscall sub_6DA180(int *this)
{
  int result; // eax
  int v2; // edx
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // edi
  int v8; // eax
  int v9; // edi
  _DWORD v10[4]; // [esp+0h] [ebp-10h] BYREF

  if ( *(this + 868) || (result = *(this + 869)) != 0 ) /*0x6da195*/
  {
    v2 = *(this + 868); /*0x6da19b*/
    v3 = *(this + 870); /*0x6da1a1*/
    v4 = *(this + 869); /*0x6da1a9*/
    v5 = this->qD9C; /*0x6da1af*/
    if ( v3 < v2 ) /*0x6da1b8*/
    {
      v6 = v2; /*0x6da1ba*/
      v2 = v3; /*0x6da1bc*/
      v3 = v6; /*0x6da1be*/
    }
    if ( v5 < v4 ) /*0x6da1c2*/
    {
      v7 = v4; /*0x6da1c4*/
      v4 = v5; /*0x6da1c6*/
      v5 = v7; /*0x6da1c8*/
    }
    v8 = v3 - v2 + 1; /*0x6da1ce*/
    if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x6da1dc*/
      v9 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 15); /*0x6da1ea*/
    else
      v9 = *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 30); /*0x6da1f7*/
    v10[2] = v8; /*0x6da201*/
    v10[0] = v2; /*0x6da209*/
    v10[1] = v4; /*0x6da20d*/
    v10[3] = v5 - v4 + 1; /*0x6da211*/
    return (*(int (__thiscall **)(int, int *, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 84))( /*0x6da21e*/
             MEMORY[0x887314],
             &MEMORY[0x886FA0],
             v10,
             v9);
  }
  return result; /*0x6da224*/
}


// ==== 0x006DA230  DisplayClass::GetCoordDelta  this=AbstractClass  sig=csp ====
int __thiscall DisplayClass::GetCoordDelta(_DWORD *this, AbstractClass *aP1)
{
  int result; // eax
  int v4; // ecx
  IUnknown *v5; // edx
  int v6; // esi
  IUnknown *v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF
  IUnknown *v9; // [esp+10h] [ebp-4h]

  if ( (MEMORY[0xB077F8].__pad_5554[180] & 1) == 0 ) /*0x6da244*/
  {
    MEMORY[0xB077F8].__pad_5554[180] |= 1u; /*0x6da24f*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[76] = 0; /*0x6da256*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[80] = -1; /*0x6da25b*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[84] = 1; /*0x6da266*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[88] = -1; /*0x6da26b*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[92] = 1; /*0x6da271*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[100] = 1; /*0x6da276*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[96] = 0; /*0x6da27f*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[108] = 0; /*0x6da285*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[104] = 1; /*0x6da28f*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[112] = 1; /*0x6da295*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[116] = -1; /*0x6da29b*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[120] = 1; /*0x6da2a0*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[124] = -1; /*0x6da2ab*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[128] = 0; /*0x6da2b0*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[132] = -1; /*0x6da2c1*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[136] = -1; /*0x6da2c6*/
    atexit(nullsub_42); /*0x6da2cc*/
  }
  result = (int)aP1; /*0x6da2d4*/
  v4 = this->qD64; /*0x6da2d8*/
  v5 = (IUnknown *)this->qD68; /*0x6da2de*/
  v6 = v4 + *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[8 * (_DWORD)aP1 + 76]; /*0x6da2f2*/
  v7 = (IUnknown *)((char *)v5 + *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[8 * (_DWORD)aP1 + 80]); /*0x6da2f4*/
  if ( v6 != v4 || v7 != v5 ) /*0x6da2fc*/
  {
    v8 = v4 + *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[8 * (_DWORD)aP1 + 76]; /*0x6da305*/
    v9 = v7; /*0x6da309*/
    if ( ClampCoordMap(&v8) ) /*0x6da30d*/
    {
      if ( !MEMORY[0xA8D63C].__pad_14B0[639] ) /*0x6da31d*/
      {
        v6 = v8; /*0x6da31f*/
        v7 = v9; /*0x6da323*/
      }
    }
    return *(_DWORD *)&stru_830620.__pad_579C[8 * (this->qD68 - (_DWORD)v7) /*0x6da33c*/
                                            + 52064
                                            + 4 * (this->qD64 - v6)
                                            + 4 * (this->qD68 - (_DWORD)v7)];
  }
  return result; /*0x6da343*/
}


// ==== 0x006DA350  nullsub_42  this=-  sig=ida-proto ====
void __cdecl nullsub_42()
{
  ; /*0x6da350*/
}


// ==== 0x006DA360  UI_Move  this=AbstractClass  sig=csp ====
_DWORD *__stdcall UI_Move(_DWORD *a0, MouseClass *aP1, int a3)
{
  *a0 = aP1->field_0; /*0x6da36a*/
  return a0; /*0x6da36c*/
}


// ==== 0x006DA370  nullsub_239  this=unknown  sig=csp ====
void __stdcall nullsub_239(int a1)
{
  ; /*0x6da370*/
}


// ==== 0x006DA380  TacticalClass::IsOccupiedByTechno  this=AbstractClass  sig=csp ====
MouseClass *__thiscall TacticalClass::IsOccupiedByTechno(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  char *v4; // edi
  MouseClass *v5; // esi
  _BYTE *v6; // eax
  char v7; // bl
  IUnknown *v8; // eax
  _WORD *v9; // eax
  double v10; // st7
  MouseClass *v11; // eax
  MouseClass *result; // eax
  int v13; // ecx
  int v14; // eax
  IUnknown *v15; // [esp-8h] [ebp-3Ch]
  MouseClass *v16; // [esp+Ch] [ebp-28h]
  MouseClass *v17; // [esp+10h] [ebp-24h]
  MouseClass *v18; // [esp+14h] [ebp-20h]
  Tactical *v19; // [esp+18h] [ebp-1Ch]
  _DWORD v20[2]; // [esp+1Ch] [ebp-18h] BYREF
  int v21; // [esp+24h] [ebp-10h] BYREF
  char v22[12]; // [esp+28h] [ebp-Ch] BYREF

  v2 = a2; /*0x6da385*/
  v19 = (Tactical *)(*a2 + this->q0B0); /*0x6da39b*/
  v18 = 0; /*0x6da3a7*/
  v20[0] = a2[1] + this->q0B4; /*0x6da3ab*/
  v16 = (MouseClass *)-1; /*0x6da3b7*/
  v17 = 0; /*0x6da3bf*/
  if ( (int)this->qDB0 <= 0 ) /*0x6da3c3*/
  {
LABEL_18:
    v13 = v2[1]; /*0x6da4b8*/
    v20[0] = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532] + *v2; /*0x6da4cb*/
    v20[1] = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536] + v13; /*0x6da4d9*/
    a2 = (_DWORD *)*Tactical::PixelToCell((int)this, (AbstractClass *)&v21, (IUnknown *)v20); /*0x6da4ec*/
    return (MouseClass *)*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2) + 57); /*0x6da4fb*/
  }
  v4 = &MEMORY[0xB077F8].__pad_566C[104]; /*0x6da3ca*/
  do /*0x6da4a5*/
  {
    v5 = (MouseClass *)*((_DWORD *)v4 - 1); /*0x6da3cf*/
    if ( !v5 ) /*0x6da3d4*/
      goto LABEL_15; /*0x6da3d4*/
    v6 = AbstractClass::IsTechno(*((void **)v4 - 1)); /*0x6da3dc*/
    v7 = 0; /*0x6da3e1*/
    if ( !v6 ) /*0x6da3e5*/
    {
      if ( !(*(int (__thiscall **)(MouseClass *))(v5->field_0 + 136))(v5) ) /*0x6da50e*/
        goto LABEL_15; /*0x6da50e*/
      v14 = (*(int (__thiscall **)(MouseClass *))(v5->field_0 + 136))(v5); /*0x6da520*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) != 37 /*0x6da540*/
        || !*(_BYTE *)((*(int (__thiscall **)(MouseClass *))(v5->field_0 + 136))(v5) + 692) )
      {
        goto LABEL_15; /*0x6da548*/
      }
LABEL_12:
      v10 = (double)((*((_DWORD *)v4 + 1) - v20[0]) * (*((_DWORD *)v4 + 1) - v20[0])) * 0.5; /*0x6da444*/
      v21 = (*(_DWORD *)v4 - (_DWORD)v19) * (*(_DWORD *)v4 - (_DWORD)v19); /*0x6da46d*/
      v11 = (MouseClass *)Math::RoundToInt(v10 + (double)v21); /*0x6da477*/
      if ( v11 < v16 && (unsigned int)v11 < 0xC8 ) /*0x6da487*/
      {
        v16 = v11; /*0x6da489*/
        v18 = v5; /*0x6da48d*/
      }
      goto LABEL_15; /*0x6da48d*/
    }
    if ( v5->__pad_74[28] ) /*0x6da3eb*/
    {
      if ( !v6[129] ) /*0x6da3f5*/
      {
        if ( v6[1050] /*0x6da435*/
          || *((_DWORD *)v6 + 136) != 2
          || (v15 = *(IUnknown **)&HouseClass_Player->__pad_28[8],
              v8 = (IUnknown *)(*(int (__thiscall **)(_BYTE *, char *))(*(_DWORD *)v6 + 72))(v6, v22),
              v9 = Coord::To_Cell(&MEMORY[0x87F7E8], v8),
              Cell::IsPassableOffset(v9, v15)) )
        {
          v7 = 1; /*0x6da43e*/
        }
      }
    }
    if ( v7 ) /*0x6da442*/
      goto LABEL_12; /*0x6da442*/
LABEL_15:
    v4 += 12; /*0x6da491*/
    v17 = (MouseClass *)((char *)v17 + 1); /*0x6da4a1*/
  }
  while ( (int)v17 < this->qDB0 ); /*0x6da4a5*/
  result = v18; /*0x6da4ab*/
  if ( !v18 ) /*0x6da4b2*/
  {
    v2 = a2; /*0x6da4b4*/
    goto LABEL_18; /*0x6da4b4*/
  }
  return result; /*0x6da501*/
}


// ==== 0x006DA560  Tactical::ScrollMap  this=Tactical  sig=csp ====
int *__stdcall Tactical::ScrollMap(Tactical *aP0, int a2)
{
  int *result; // eax

  result = (int *)&stru_B05488.__pad_579C[8868]; /*0x6da564*/
  do /*0x6da57b*/
  {
    if ( (Tactical *)*result == aP0 ) /*0x6da56b*/
      *result = 0; /*0x6da56d*/
    result += 3; /*0x6da573*/
  }
  while ( (int)result < (int)&stru_B05488.__pad_579C[14868] ); /*0x6da57b*/
  if ( aP0 == *(Tactical **)&stru_87C374.__pad_14B0[12628] ) /*0x6da583*/
  {
    result = (int *)MIXClass::CopyHeader((int)&stru_87C374.__pad_14B0[8132], 0); /*0x6da58c*/
    *(_DWORD *)&stru_87C374.__pad_14B0[12628] = 0; /*0x6da591*/
    *(_DWORD *)&stru_87C374.__pad_14B0[12632] = 0; /*0x6da59b*/
    *(_DWORD *)&stru_87C374.__pad_14B0[12636] = -1; /*0x6da5a5*/
  }
  return result; /*0x6da5af*/
}


// ==== 0x006DA5C0  BuildingClass::ProcessOccupancy  this=AbstractClass  sig=csp ====
int __thiscall BuildingClass::ProcessOccupancy(int *this, AbstractClass *aP1, void (__thiscall *a3)(_BYTE *))
{
  AbstractClass *v3; // ebx
  int result; // eax
  char *v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  bool v12; // bl
  _DWORD *v13; // ecx
  #375 *v14; // eax
  int v15; // [esp+8h] [ebp-4h]

  v3 = aP1; /*0x6da5c2*/
  g_MoveFeedback = 1; /*0x6da5c6*/
  result = *(_DWORD *)&aP1->__pad_0[8]; /*0x6da5ce*/
  if ( result <= 0 /*0x6da5f6*/
    || (result = *(_DWORD *)&aP1->__pad_0[12], result <= 0)
    || (result = this->qDB0, v15 = 0, result <= 0) )
  {
    g_MoveFeedback = 1; /*0x6da730*/
  }
  else
  {
    v6 = &MEMORY[0xB077F8].__pad_566C[100]; /*0x6da5fe*/
    do /*0x6da714*/
    {
      v7 = *(_DWORD *)v6; /*0x6da603*/
      if ( *(_DWORD *)v6 ) /*0x6da603*/
      {
        if ( *(_BYTE *)(v7 + 144) ) /*0x6da60d*/
        {
          v8 = *((_DWORD *)v6 + 1) - this->q02C; /*0x6da62a*/
          v9 = *((_DWORD *)v6 + 2) - this->q0B4; /*0x6da62f*/
          if ( v8 >= *(_DWORD *)v3->__pad_0 && v8 < *(_DWORD *)&v3->__pad_0[8] + *(_DWORD *)v3->__pad_0 ) /*0x6da640*/
          {
            v10 = *(_DWORD *)&v3->__pad_0[4]; /*0x6da646*/
            if ( v9 >= v10 && v9 < *(_DWORD *)&v3->__pad_0[12] + v10 ) /*0x6da656*/
            {
              if ( Selection::GetFlag() ) /*0x6da65c*/
              {
                v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 136))(v7); /*0x6da669*/
                MoveFeedback::ProcessCommand((void *)(v11 + 36)); /*0x6da674*/
              }
              else if ( a3 ) /*0x6da684*/
              {
                a3((_BYTE *)v7); /*0x6da72b*/
              }
              else
              {
                v12 = 0; /*0x6da68e*/
                if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 44))(v7) == 6 ) /*0x6da696*/
                {
                  v13 = *(_DWORD **)(v7 + 1312); /*0x6da698*/
                  if ( v13[258] ) /*0x6da69e*/
                    v12 = BuildingTypeClass::Is1x1AndUndeployable_BuildingMassSelectable(v13); /*0x6da6b1*/
                }
                v14 = (#375 *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 60))(v7); /*0x6da6b7*/
                if ( v14 /*0x6da6e5*/
                  && (unsigned __int8)House::IsHumanPlayer(v14)
                  && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 312))(v7)
                  && ((*(int (__thiscall **)(int))(*(_DWORD *)v7 + 44))(v7) != 6 || v12) )
                {
                  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 332))(v7) ) /*0x6da6eb*/
                    g_MoveFeedback = 0; /*0x6da6f5*/
                }
                v3 = aP1; /*0x6da6fc*/
              }
            }
          }
        }
      }
      result = v15 + 1; /*0x6da70a*/
      v6 += 12; /*0x6da70b*/
      ++v15; /*0x6da710*/
    }
    while ( v15 < this->qDB0 ); /*0x6da714*/
    g_MoveFeedback = 1; /*0x6da71d*/
  }
  return result; /*0x6da71c*/
}


// ==== 0x006DA740  SuperWeaponClass::UpdateAll  this=SuperWeaponClass  sig=csp ====
int SuperWeaponClass_UpdateAll()
{
  while ( MEMORY[0xA8ECC8] ) /*0x6da747*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)MEMORY[0xA8ECBC] + 336))(*(_DWORD *)MEMORY[0xA8ECBC]); /*0x6da752*/
  return Selection::SetCurrent(0);
}


// ==== 0x006DA770  SelectAllOfType_Play  this=AbstractClass  sig=ida-proto ====
char sub_6DA770()
{
  int *v0; // esi
  int v1; // eax
  bool v2; // zf
  #375 *v3; // eax

  if ( MEMORY[0xA8ECC8] != (wchar_t *)1 ) /*0x6da779*/
    return 0; /*0x6da779*/
  v0 = *(int **)MEMORY[0xA8ECBC]; /*0x6da780*/
  if ( !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)MEMORY[0xA8ECBC] + 60))(*(_DWORD *)MEMORY[0xA8ECBC]) ) /*0x6da786*/
    return 0; /*0x6da786*/
  v1 = *v0; /*0x6da796*/
  if ( MEMORY[0xA8B238][0] ) /*0x6da798*/
  {
    v3 = (#375 *)(*(int (__thiscall **)(int *))(v1 + 60))(v0); /*0x6da7a7*/
    v2 = (unsigned __int8)House::IsHumanPlayer(v3) == 0; /*0x6da7b1*/
  }
  else
  {
    v2 = *(_BYTE *)((*(int (__thiscall **)(int *))(v1 + 60))(v0) + 493) == 0; /*0x6da7a3*/
  }
  if ( !v2 ) /*0x6da7b3*/
    return 0; /*0x6da7c3*/
  (*(void (__thiscall **)(int *))(*v0 + 336))(v0); /*0x6da7b9*/
  return 1; /*0x6da7c1*/
}


// ==== 0x006DA7D0  Tactical::AddCellToDrawList  this=AbstractClass  sig=csp ====
int __thiscall Tactical::AddCellToDrawList(int this, IUnknown *aP1)
{
  int result; // eax
  ObjectClass *Coords; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // edx
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // ebp
  int v12; // eax
  int v13; // esi
  int v14[3]; // [esp+Ch] [ebp-Ch] BYREF

  result = MEMORY[0x87F7F4]; /*0x6da7d0*/
  if ( !MEMORY[0x87F7F4] ) /*0x6da7df*/
  {
    result = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6da7e9*/
    if ( *(_DWORD *)&aP1->__pad_58[4] != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] /*0x6da800*/
      && ((aP1->__pad_11C[16] & 8) != 0 || aP1->__pad_134[4]) )
    {
      *(_DWORD *)&aP1->__pad_58[4] = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6da80e*/
      Coords = (ObjectClass *)CellClass::GetCoords(aP1, v14); /*0x6da819*/
      v5 = *(_DWORD *)Coords->__pad_0; /*0x6da81e*/
      v6 = *(_DWORD *)&Coords->__pad_0[4]; /*0x6da820*/
      v7 = *(_DWORD *)&Coords->__pad_0[8]; /*0x6da823*/
      v8 = *(_DWORD *)&aP1->__pad_11C[16]; /*0x6da826*/
      v14[2] = v7; /*0x6da82e*/
      if ( (v8 & 8) != 0 && (v8 & 0x10) != 0 ) /*0x6da836*/
      {
        v9 = -60 * v6 / 2 + 60 * v5 / 2; /*0x6da866*/
        v14[0] = v9; /*0x6da870*/
        v10 = 30 * v6 / 2 + 30 * v5 / 2; /*0x6da87b*/
      }
      else
      {
        v9 = -60 * v6 / 2 + 60 * v5 / 2; /*0x6da8ad*/
        v14[0] = v9; /*0x6da8b7*/
        v10 = 30 * v6 / 2 + 30 * v5 / 2; /*0x6da8c2*/
      }
      v11 = v10; /*0x6da8c6*/
      v12 = ZCoordToScreenY(0); /*0x6da8d8*/
      v14[0] = v9 / 256; /*0x6da8e8*/
      v13 = v9 / 256 - *(_DWORD *)(this + 176); /*0x6da8ff*/
      result = v11 / 256 - v12 - *(_DWORD *)(this + 180); /*0x6da907*/
      if ( v13 >= *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532] - 30 /*0x6da936*/
        && result >= -30
        && v13 <= *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8540] + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532] + 30
        && result <= *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8544] + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536] + 15 )
      {
        result = *(_DWORD *)(this + 224); /*0x6da938*/
        if ( result < 799 ) /*0x6da943*/
        {
          *(_DWORD *)(this + 4 * result + 228) = aP1; /*0x6da949*/
          result = *(_DWORD *)(this + 224) + 1; /*0x6da956*/
          *(_DWORD *)(this + 224) = result; /*0x6da957*/
        }
        aP1->__pad_134[4] = 0; /*0x6da961*/
        *(_BYTE *)(this + 3453) = 1; /*0x6da968*/
      }
    }
  }
  return result; /*0x6da96f*/
}


// ==== 0x006DA980  Map_Setup_6DA980  this=Tactical  sig=ida-proto ====
void sub_6DA980()
{
  int v0; // ecx
  int v1; // edx
  int v2; // eax
  char *v3; // esi
  char *v4; // edi

  v0 = MEMORY[0xB0CE88]; /*0x6da980*/
  while ( MEMORY[0xB0CE88] > 0 ) /*0x6da988*/
  {
    v1 = 0; /*0x6da98f*/
    MEMORY[0xB0CE88] = v0 - 1; /*0x6da993*/
    if ( v0 - 1 <= 0 ) /*0x6da999*/
      break; /*0x6da999*/
    v2 = 0; /*0x6da99b*/
    do /*0x6da9bd*/
    {
      ++v1; /*0x6da9a3*/
      v3 = (char *)MEMORY[0xB0CE7C] + v2 + 20; /*0x6da9a4*/
      v4 = (char *)MEMORY[0xB0CE7C] + v2; /*0x6da9a8*/
      v2 += 20; /*0x6da9b0*/
      qmemcpy(v4, v3, 0x14u); /*0x6da9b3*/
      v0 = MEMORY[0xB0CE88]; /*0x6da9b5*/
    }
    while ( v1 < MEMORY[0xB0CE88] ); /*0x6da9bd*/
  }
}


// ==== 0x006DA9D0  ObjectClass::RenderSelectionBeacons  this=AbstractClass  sig=csp ====
char *__thiscall RenderSelectionBeacons(_DWORD *this, int a2)
{
  char *result; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  int *v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int *v11; // eax
  _DWORD *v12; // eax
  int v13; // ebp
  int v14; // esi
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // esi
  int v19; // [esp+34h] [ebp-64h]
  char *v20; // [esp+38h] [ebp-60h]
  int v21; // [esp+3Ch] [ebp-5Ch]
  int v22; // [esp+40h] [ebp-58h] BYREF
  int v23; // [esp+44h] [ebp-54h]
  int v24; // [esp+48h] [ebp-50h] BYREF
  int v25; // [esp+4Ch] [ebp-4Ch]
  _DWORD v26[2]; // [esp+50h] [ebp-48h] BYREF
  int v27; // [esp+58h] [ebp-40h] BYREF
  int v28; // [esp+60h] [ebp-38h] BYREF
  int v29; // [esp+68h] [ebp-30h] BYREF
  int v30; // [esp+6Ch] [ebp-2Ch]
  int GroundHeightCell; // [esp+70h] [ebp-28h]
  _DWORD v32[3]; // [esp+74h] [ebp-24h] BYREF
  _BYTE v33[12]; // [esp+80h] [ebp-18h] BYREF
  _BYTE v34[12]; // [esp+8Ch] [ebp-Ch] BYREF

  v19 = (0x7FFFFFFF - (int)MEMORY[0xA8ED84]) % 15; /*0x6da9f9*/
  result = (char *)MEMORY[0xA8ECC8] - 1; /*0x6daa44*/
  v21 = ((unsigned __int8)byte_A83CD9 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x6daa49*/
      | ((unsigned __int8)word_A83CDA >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
      | (HIBYTE(word_A83CDA) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
  v20 = (char *)MEMORY[0xA8ECC8] - 1; /*0x6daa4d*/
  if ( (int)MEMORY[0xA8ECC8] - 1 >= 0 ) /*0x6daa51*/
  {
    do /*0x6dad4e*/
    {
      v4 = (_DWORD *)*((_DWORD *)MEMORY[0xA8ECBC] + (_DWORD)result); /*0x6daa5e*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) == 6 /*0x6daab2*/
        && *((_BYTE *)v4 + 144)
        && *((_BYTE *)v4 + 131)
        && (#375 *)v4[135] == HouseClass_Player
        && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 644))(v4)
        && v4[134] )
      {
        v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v4 + 72))(v4, v33); /*0x6daac9*/
        v32[0] = *v5; /*0x6daace*/
        v32[1] = v5[1]; /*0x6daad5*/
        v32[2] = v5[2]; /*0x6daae8*/
        v6 = Coord::To_ScreenRaw(&v27, v32); /*0x6daaec*/
        v7 = this->q0B4; /*0x6daaf1*/
        v24 = *v6; /*0x6daafb*/
        v8 = v6[1] - v7; /*0x6dab08*/
        v9 = v24 - this->q0B0; /*0x6dab10*/
        v25 = MEMORY[0x886FA4] + v8; /*0x6dab1c*/
        v10 = v4[134]; /*0x6dab20*/
        v24 = MEMORY[0x886FA0] + v9; /*0x6dab26*/
        v11 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v10 + 72))(v10, v34); /*0x6dab31*/
        v29 = *v11; /*0x6dab36*/
        v30 = v11[1]; /*0x6dab42*/
        GroundHeightCell = v11[2]; /*0x6dab4e*/
        GroundHeightCell = Cell::GetGroundHeight(&v29); /*0x6dab61*/
        if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v29) + 80) & 0x100) != 0 ) /*0x6dab73*/
          GroundHeightCell += MEMORY[0xB0CEB4]; /*0x6dab80*/
        v12 = IsoCoord::ToPixel(&v28, v29, v30); /*0x6dab92*/
        v13 = v12[1]; /*0x6dab9c*/
        v14 = *v12 / 256; /*0x6dabad*/
        v15 = ZCoordToScreenY(GroundHeightCell); /*0x6dabb0*/
        v22 = v14; /*0x6dabc0*/
        v16 = this->q0B0; /*0x6dabc6*/
        v23 = v13 / 256 - v15; /*0x6dabd5*/
        v17 = this->q0B4; /*0x6dabd9*/
        v26[0] = v16; /*0x6dabe4*/
        v26[1] = v17; /*0x6dabe8*/
        Vector2::Subtract(&v22, v26); /*0x6dabec*/
        v22 += MEMORY[0x886FA0]; /*0x6dac1f*/
        v25 += 2; /*0x6dac23*/
        v23 += MEMORY[0x886FA4] + 2; /*0x6dac27*/
        if ( ClipLine(&v24, &v22, &MEMORY[0x886FA0]) ) /*0x6dac2b*/
          (*(void (__thiscall **)(int, int *, int *, int, void *, int, int))(*(_DWORD *)MEMORY[0x887314] + 76))( /*0x6dac5a*/
            MEMORY[0x887314],
            &v24,
            &v22,
            v21,
            &MEMORY[0x842930],
            v19,
            a2);
        v18 = (*(unsigned __int8 *)(v4[135] + 22265) >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x6dacc2*/
            | (*(unsigned __int8 *)(v4[135] + 22266) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
            | (*(unsigned __int8 *)(v4[135] + 22267) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
        --v25; /*0x6dacca*/
        --v23; /*0x6dacce*/
        if ( ClipLine(&v24, &v22, &MEMORY[0x886FA0]) ) /*0x6dacd2*/
          (*(void (__thiscall **)(int, int *, int *, int, void *, int, int))(*(_DWORD *)MEMORY[0x887314] + 76))( /*0x6dacf9*/
            MEMORY[0x887314],
            &v24,
            &v22,
            v18,
            &MEMORY[0x842930],
            v19,
            a2);
        --v25; /*0x6dad13*/
        --v23; /*0x6dad17*/
        if ( ClipLine(&v24, &v22, &MEMORY[0x886FA0]) ) /*0x6dad1b*/
          (*(void (__thiscall **)(int, int *, int *, int, void *, int, int))(*(_DWORD *)MEMORY[0x887314] + 76))( /*0x6dad42*/
            MEMORY[0x887314],
            &v24,
            &v22,
            v18,
            &MEMORY[0x842930],
            v19,
            a2);
      }
      result = --v20; /*0x6dad49*/
    }
    while ( (int)v20 >= 0 ); /*0x6dad4e*/
  }
  return result; /*0x6dad55*/
}


// ==== 0x006DAD60  ObjectClass::RenderRallyPointLines  this=AbstractClass  sig=csp ====
int __userpurge RenderRallyPointLines@<eax>(_DWORD *this@<ecx>, CampaignScore *a2@<ebp>, int a3)
{
  CampaignScore *v3; // ebx
  int v5; // esi
  int v6; // eax
  int v7; // et2
  int result; // eax
  IUnknown *v9; // edx
  int v10; // esi
  unsigned int v11; // ebp
  int v12; // edi
  int Element; // edi
  _DWORD *v14; // eax
  int v15; // ebp
  int v16; // esi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  char v20; // cl
  int v21; // eax
  int v22; // esi
  int v23; // eax
  int v24; // ebp
  int *v25; // eax
  int v26; // kr04_4
  int v27; // esi
  int v28; // edi
  int v29; // eax
  int v30; // edi
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  IUnknown *v36; // edx
  CampaignScore *v37; // [esp+0h] [ebp-90h]
  int v38; // [esp+10h] [ebp-80h]
  unsigned int v39; // [esp+14h] [ebp-7Ch]
  int v41; // [esp+20h] [ebp-70h]
  unsigned int v42; // [esp+24h] [ebp-6Ch]
  int v43; // [esp+28h] [ebp-68h]
  int v44; // [esp+30h] [ebp-60h]
  int *v45; // [esp+34h] [ebp-5Ch]
  int v46; // [esp+38h] [ebp-58h] BYREF
  int v47; // [esp+3Ch] [ebp-54h]
  int a1[2]; // [esp+40h] [ebp-50h] BYREF
  _DWORD v49[2]; // [esp+48h] [ebp-48h] BYREF
  _DWORD v50[2]; // [esp+50h] [ebp-40h] BYREF
  int v51[3]; // [esp+58h] [ebp-38h] BYREF
  int v52; // [esp+64h] [ebp-2Ch]
  int v53; // [esp+68h] [ebp-28h] BYREF
  int v54; // [esp+70h] [ebp-20h] BYREF
  int v55; // [esp+78h] [ebp-18h] BYREF
  int v56; // [esp+80h] [ebp-10h]
  int v57; // [esp+84h] [ebp-Ch]
  int v58; // [esp+88h] [ebp-8h]
  IUnknown *v59; // [esp+8Ch] [ebp-4h]

  v3 = *(CampaignScore **)&HouseClass_Player.__pad_5568[23248]; /*0x6dad67*/
  v41 = (0x7FFFFFFF - *(_DWORD *)&HouseClass_Player.__pad_5568[23248]) % 15; /*0x6dad8b*/
  v5 = Render_Render_5BE970(60); /*0x6dad9b*/
  v6 = Render_Render_5BE990(60); /*0x6dad9d*/
  v7 = this->__pad_DA0 % v6; /*0x6dadab*/
  result = this->__pad_DA0 / v6; /*0x6dadab*/
  LOBYTE(result) = HouseClass_Player.__pad_5568[23223]; /*0x6dadad*/
  v42 = v5 + v7; /*0x6dadb6*/
  if ( !HouseClass_Player.__pad_5568[23223] )
  {
    v45 = (int *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[7844] + 372) + 2); /*0x6dadcf*/
    v56 = *v45; /*0x6dadd5*/
    v57 = v45[1]; /*0x6daddc*/
    v58 = v45[2]; /*0x6dade6*/
    v9 = (IUnknown *)v45[3]; /*0x6daded*/
    v59 = v9; /*0x6dadf7*/
    if ( !*(_DWORD *)&stru_B05488.__pad_579C[14880] ) /*0x6dadfe*/
    {
      LOBYTE(v9) = 0; /*0x6dae00*/
      *(_DWORD *)&stru_B05488.__pad_579C[14880] = SearchMIXFile(g_Str_File_MOUSE_SHA.__pad_0, v9); /*0x6dae0c*/
    }
    v37 = a2; /*0x6dae1d*/
    v52 = *(_DWORD *)&stru_87C374.__pad_579C[21652] + 1; /*0x6dae1e*/
    v10 = 528; /*0x6dae29*/
    v38 = 528; /*0x6dae32*/
    v11 = 0; /*0x6dae3c*/
    v43 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4696) != 1 ? 14 : 12;
    v39 = 0; /*0x6dae42*/
    do /*0x6db1d1*/
    {
      HouseClass::EnsurePlanningPathExists(HouseClass_Player.field_0, v11); /*0x6dae4d*/
      v12 = *(_DWORD *)(*(_DWORD *)(v10 + HouseClass_Player.field_0) + 56); /*0x6dae5b*/
      v44 = v12; /*0x6dae60*/
      if ( v12 ) /*0x6dae64*/
        sub_4AEA20((int)v3, v11); /*0x6dae6c*/
      v3 = 0; /*0x6dae71*/
      if ( v12 > 0 ) /*0x6dae75*/
      {
        while ( 1 ) /*0x6dae8a*/
        {
          Element = Array::GetElement(*(_DWORD **)(v10 + HouseClass_Player.field_0), v3); /*0x6dae8a*/
          v14 = IsoCoord::ToPixel(&v53, *(_DWORD *)Element, *(Tactical **)(Element + 4)); /*0x6dae97*/
          v15 = v14[1]; /*0x6daea3*/
          v16 = *v14 / 256; /*0x6daeb1*/
          v17 = ZCoordToScreenY((IUnknown *)*(_DWORD *)(Element + 8)); /*0x6daeb4*/
          v46 = v16; /*0x6daec4*/
          v47 = v15 / 256 - v17; /*0x6daed3*/
          v18 = this->q0B4; /*0x6daee6*/
          v49[0] = this->q0B0; /*0x6daeec*/
          v49[1] = v18; /*0x6daef0*/
          Vector2::Subtract(&v46, v49); /*0x6daef4*/
          if ( v46 >= -360 && v46 <= *(_DWORD *)&stru_B05488.__pad_579C[8716] + 360 ) /*0x6daf12*/
          {
            v19 = v47; /*0x6daf14*/
            if ( v47 < -180 || v47 > *(_DWORD *)&stru_B05488.__pad_579C[8720] + 180 ) /*0x6daf2d*/
              goto LABEL_15; /*0x6daf2d*/
            if ( (_BYTE)a3 ) /*0x6daf3e*/
            {
              if ( Cell::IsPassable((IUnknown *)Element) ) /*0x6daf44*/
                goto LABEL_24; /*0x6daf4b*/
            }
            else if ( !Cell::IsPassable((IUnknown *)Element) ) /*0x6db11c*/
            {
LABEL_24:
              v19 = v47; /*0x6db129*/
              v20 = 1; /*0x6db12d*/
              goto LABEL_16; /*0x6db12f*/
            }
          }
          v19 = v47; /*0x6daf51*/
LABEL_15:
          v20 = 0; /*0x6daf55*/
LABEL_16:
          v21 = *(_DWORD *)&stru_87C374.__pad_579C[21652] + v19; /*0x6daf57*/
          v47 = v21; /*0x6daf5f*/
          if ( v20 ) /*0x6daf63*/
          {
            v22 = v52; /*0x6daf69*/
            v50[1] = v21 - v52; /*0x6daf8a*/
            v50[0] = v46; /*0x6dafaf*/
            DrawToSurfaceSHP( /*0x6dafb6*/
              *(int *)&stru_87C374.__pad_579C[22532],
              *(int *)&stru_87C374.__pad_14B0[7844],
              *(ConvertClass **)&stru_B05488.__pad_579C[14880],
              v42,
              (ConvertClass *)v50,
              (ConvertClass *)&stru_87C374.__pad_579C[21648],
              (ConvertClass *)0x600,
              0,
              0,
              0,
              (ConvertClass *)0x3E8,
              0,
              0,
              0,
              0,
              0);
            swprintf( /*0x6dafc6*/
              (wchar_t *const)&stru_B05488.__pad_579C[8540],
              (const size_t)&g_Str_Fmt_PctD,
              (const wchar_t *const)v3,
              v37);
            v51[1] = v47 - v22 - 25; /*0x6dafe1*/
            v51[0] = v46 - 1; /*0x6dafec*/
            globalHelper_0A6010( /*0x6db017*/
              (IUnknown *)&v54,
              (IUnknown *)&stru_B05488.__pad_579C[8540],
              *(int *)&stru_87C374.__pad_579C[22532],
              &stru_87C374.__pad_579C[21648],
              (int)v51,
              *(_DWORD *)(stru_B05488.field_4C + 4 * v43),
              0,
              265,
              1);
          }
          v23 = VectorClass::GetAtChecked(*(int **)(v38 + HouseClass_Player.field_0), (IUnknown *)Element); /*0x6db02a*/
          v24 = v23; /*0x6db02f*/
          if ( v23 ) /*0x6db033*/
          {
            v25 = IsoCoord::ToPixel(&v55, *(_DWORD *)v23, *(Tactical **)(v23 + 4)); /*0x6db048*/
            v26 = *v25; /*0x6db06c*/
            v27 = *v25 / 256; /*0x6db07b*/
            v28 = v25[1] / 256; /*0x6db07e*/
            v29 = Math::RoundToInt( /*0x6db0a5*/
                    (double)*(int *)(v24 + 8) * *(double *)&stru_B05488.__pad_579C[8484]
                  + (double)(*(_DWORD *)(v24 + 8) >= 728)
                  + 0.5);
            a1[0] = v26 / 256; /*0x6db0b0*/
            v30 = v28 - v29 - this->q0B4; /*0x6db0c7*/
            a1[0] = v27 - this->q0B0; /*0x6db0c9*/
            a1[1] = *(_DWORD *)&stru_87C374.__pad_579C[21652] + v30; /*0x6db0dd*/
            if ( ClipLine((IUnknown *)&v46, a1, (int *)&stru_87C374.__pad_579C[21648]) ) /*0x6db0e1*/
            {
              v31 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[7844] + 4); /*0x6db105*/
              if ( v39 == *(_DWORD *)(HouseClass_Player.field_0 + 524) ) /*0x6db108*/
              {
                if ( v31 == 1 ) /*0x6db10d*/
                  v32 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[7844] + 372) + 3); /*0x6db117*/
                else
                  v32 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[7844] + 372) + 6); /*0x6db13c*/
                v41 = (*(int (__thiscall **)(_DWORD, int *, int *, int, char *, int, int))(**(_DWORD **)&stru_87C374.__pad_579C[22532] /*0x6db168*/
                                                                                         + 76))(
                        *(_DWORD *)&stru_87C374.__pad_579C[22532],
                        &v46,
                        a1,
                        v32,
                        &stru_830620.__pad_579C[52100],
                        v41,
                        a3);
              }
              else
              {
                if ( v31 == 1 ) /*0x6db171*/
                  v33 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[7844] + 372) + 3); /*0x6db17b*/
                else
                  v33 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[7844] + 372) + 6); /*0x6db188*/
                (*(void (__thiscall **)(_DWORD, int *, int *, int, int))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 80))( /*0x6db1a7*/
                  *(_DWORD *)&stru_87C374.__pad_579C[22532],
                  &v46,
                  a1,
                  v33,
                  a3);
              }
            }
          }
          v10 = v38; /*0x6db1ae*/
          v3 = (CampaignScore *)((char *)v3 + 1); /*0x6db1b2*/
          if ( (int)v3 >= v44 ) /*0x6db1b5*/
          {
            v11 = v39; /*0x6db1bb*/
            break; /*0x6db1bb*/
          }
        }
      }
      v10 += 4; /*0x6db1bf*/
      v39 = ++v11; /*0x6db1c9*/
      v38 = v10; /*0x6db1cd*/
    }
    while ( v10 < 576 ); /*0x6db1d1*/
    v34 = v57; /*0x6db1e2*/
    *v45 = v56; /*0x6db1ea*/
    v35 = v58; /*0x6db1ec*/
    v45[1] = v34; /*0x6db1f3*/
    v36 = v59; /*0x6db1f6*/
    v45[2] = v35; /*0x6db1fd*/
    v45[3] = (int)v36; /*0x6db200*/
    return (int)v45; /*0x6db1d7*/
  }
  return result; /*0x6db203*/
}


// ==== 0x006DB210  Tactical::DrawTacticalConnectorLines  this=Tactical  sig=csp ====
int __thiscall Tactical::DrawTacticalConnectorLines(_DWORD *this)
{
  _DWORD *v2; // ebp
  int result; // eax
  int v4; // edi
  int v5; // ebx
  ObjectClass *Coords; // eax
  int *v7; // eax
  int v8; // edx
  int v9; // ecx
  _DWORD *v10; // eax
  int *v11; // eax
  int v12; // edx
  int *v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  ObjectClass *v17; // eax
  int *v18; // eax
  int v19; // edx
  int v20; // ebp
  int v21; // eax
  int *v22; // eax
  int *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  int i; // ebx
  _DWORD *v28; // edi
  int *v29; // eax
  int *v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  int *v34; // eax
  int v35; // [esp+44h] [ebp-D0h]
  int v36; // [esp+44h] [ebp-D0h]
  IUnknown *v37; // [esp+48h] [ebp-CCh] BYREF
  int v38; // [esp+4Ch] [ebp-C8h]
  int v39; // [esp+50h] [ebp-C4h] BYREF
  int v40; // [esp+54h] [ebp-C0h]
  int v41; // [esp+58h] [ebp-BCh] BYREF
  int v42; // [esp+5Ch] [ebp-B8h]
  int v43; // [esp+60h] [ebp-B4h] BYREF
  int v44; // [esp+64h] [ebp-B0h]
  _DWORD v45[2]; // [esp+68h] [ebp-ACh] BYREF
  int v46; // [esp+70h] [ebp-A4h] BYREF
  int v47; // [esp+74h] [ebp-A0h]
  int v48; // [esp+78h] [ebp-9Ch]
  int a1; // [esp+7Ch] [ebp-98h] BYREF
  int v50; // [esp+80h] [ebp-94h]
  int v51; // [esp+84h] [ebp-90h]
  int v52; // [esp+88h] [ebp-8Ch]
  _DWORD v53[3]; // [esp+8Ch] [ebp-88h] BYREF
  _DWORD v54[3]; // [esp+98h] [ebp-7Ch] BYREF
  _DWORD v55[4]; // [esp+A4h] [ebp-70h] BYREF
  _DWORD v56[4]; // [esp+B4h] [ebp-60h] BYREF
  int v57[2]; // [esp+C4h] [ebp-50h] BYREF
  int v58[3]; // [esp+CCh] [ebp-48h] BYREF
  _BYTE v59[12]; // [esp+D8h] [ebp-3Ch] BYREF
  int v60; // [esp+E4h] [ebp-30h] BYREF
  int v61; // [esp+ECh] [ebp-28h] BYREF
  int v62; // [esp+F4h] [ebp-20h] BYREF
  char v63[12]; // [esp+FCh] [ebp-18h] BYREF
  int v64[3]; // [esp+108h] [ebp-Ch] BYREF

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x6db221*/
  v2 = (_DWORD *)LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x6db236*/
  result = 255 >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672]; /*0x6db251*/
  v4 = result | (255 >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]); /*0x6db283*/
  v52 = (255 >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]) /*0x6db2b5*/
      | (255 >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]);
  v5 = result | (255 >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]); /*0x6db2c1*/
  if ( v2 ) /*0x6db2c5*/
  {
    do /*0x6db525*/
    {
      v35 = v2[57]; /*0x6db2d3*/
      if ( v35 ) /*0x6db2d7*/
      {
        Coords = (ObjectClass *)CellClass::GetCoords(v2, v64); /*0x6db2e7*/
        v53[0] = *(_DWORD *)Coords->__pad_0; /*0x6db2ee*/
        v53[1] = *(_DWORD *)&Coords->__pad_0[4]; /*0x6db2fa*/
        v53[2] = *(_DWORD *)&Coords->__pad_0[8]; /*0x6db30b*/
        v7 = Coord::To_ScreenRaw(&v61, v53); /*0x6db30f*/
        v8 = this->q02C; /*0x6db314*/
        v41 = *v7; /*0x6db31e*/
        v9 = v7[1]; /*0x6db324*/
        v41 -= v8; /*0x6db327*/
        v42 = v9 - *(this + 45); /*0x6db33a*/
        v10 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v35 + 72))(v35, v63); /*0x6db345*/
        v54[0] = *v10; /*0x6db34a*/
        v54[1] = v10[1]; /*0x6db356*/
        v54[2] = v10[2]; /*0x6db367*/
        v11 = Coord::To_ScreenRaw(&v60, v54); /*0x6db36b*/
        v12 = this->q02C; /*0x6db370*/
        v13 = v11; /*0x6db376*/
        v45[0] = *v11; /*0x6db37b*/
        v14 = v45[0] - v12; /*0x6db37f*/
        v15 = v13[1]; /*0x6db381*/
        v16 = *(this + 45); /*0x6db384*/
        v45[0] = v14; /*0x6db390*/
        v56[1] = v42 - 1; /*0x6db39a*/
        v45[1] = v15 - v16; /*0x6db3a6*/
        v56[2] = 3; /*0x6db3b0*/
        v56[3] = 3; /*0x6db3b7*/
        v56[0] = v41 - 1; /*0x6db3c5*/
        (*(void (__thiscall **)(_DWORD, char *, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 16))( /*0x6db3d4*/
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
          &MEMORY[0x87F8E4].__pad_5568[8532],
          v56,
          v4);
        (*(void (__thiscall **)(_DWORD, char *, int *, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] /*0x6db3ef*/
                                                                     + 44))(
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
          &MEMORY[0x87F8E4].__pad_5568[8532],
          &v41,
          v45,
          v4);
      }
      v36 = v2[58]; /*0x6db3fa*/
      if ( v36 ) /*0x6db3fe*/
      {
        v17 = (ObjectClass *)CellClass::GetCoords(v2, v58); /*0x6db40e*/
        a1 = *(_DWORD *)v17->__pad_0; /*0x6db415*/
        v50 = *(_DWORD *)&v17->__pad_0[4]; /*0x6db41c*/
        v51 = *(_DWORD *)&v17->__pad_0[8]; /*0x6db432*/
        v18 = Coord::To_ScreenRaw(&v62, &a1); /*0x6db436*/
        v19 = this->q02C; /*0x6db43d*/
        v20 = *(this + 45); /*0x6db443*/
        v43 = *v18; /*0x6db449*/
        v21 = v18[1] - v20; /*0x6db452*/
        v43 -= v19; /*0x6db454*/
        v44 = v21 - 60; /*0x6db45f*/
        v22 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v36 + 72))(v36, v59); /*0x6db46d*/
        v46 = *v22; /*0x6db472*/
        v47 = v22[1]; /*0x6db47e*/
        v48 = v22[2]; /*0x6db48f*/
        v23 = Coord::To_ScreenRaw(v57, &v46); /*0x6db493*/
        v37 = (IUnknown *)*v23; /*0x6db49a*/
        v24 = *(this + 45); /*0x6db49e*/
        v25 = v23[1]; /*0x6db4a4*/
        v26 = this->q02C; /*0x6db4a7*/
        v38 = v25; /*0x6db4ad*/
        v40 = v24; /*0x6db4b5*/
        v39 = v26; /*0x6db4be*/
        Vector2::Subtract(&v37, &v39); /*0x6db4c2*/
        v55[0] = v43 - 1; /*0x6db4d1*/
        v55[1] = v44 - 1; /*0x6db4da*/
        v55[2] = 3; /*0x6db4e4*/
        v55[3] = 3; /*0x6db4e8*/
        (*(void (__thiscall **)(_DWORD, char *, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 16))( /*0x6db4f9*/
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
          &MEMORY[0x87F8E4].__pad_5568[8532],
          v55,
          v5);
        (*(void (__thiscall **)(_DWORD, char *, int *, IUnknown **, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] /*0x6db514*/
                                                                        + 44))(
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
          &MEMORY[0x87F8E4].__pad_5568[8532],
          &v43,
          &v37,
          v5);
      }
      result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x6db51c*/
      v2 = (_DWORD *)result; /*0x6db521*/
    }
    while ( result ); /*0x6db525*/
  }
  for ( i = *(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[372] - 1; i >= 0; --i ) /*0x6db536*/
  {
    v28 = *(_DWORD **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[360] + 4 * i); /*0x6db542*/
    result = v28[12]; /*0x6db545*/
    if ( result ) /*0x6db54a*/
    {
      v29 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v28 + 72))(v28, v59); /*0x6db55c*/
      v46 = *v29; /*0x6db561*/
      v47 = v29[1]; /*0x6db568*/
      v48 = v29[2]; /*0x6db57e*/
      v30 = Coord::To_ScreenRaw(v57, &v46); /*0x6db582*/
      v31 = this->q02C; /*0x6db589*/
      v37 = (IUnknown *)*v30; /*0x6db58f*/
      v32 = *(this + 45); /*0x6db593*/
      v33 = v30[1]; /*0x6db599*/
      v39 = v31; /*0x6db59c*/
      v38 = v33; /*0x6db5a0*/
      v40 = v32; /*0x6db5ad*/
      Vector2::Subtract(&v37, &v39); /*0x6db5b1*/
      v34 = (int *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)v28[12] + 72))(v28[12], v58); /*0x6db5c3*/
      a1 = *v34; /*0x6db5c8*/
      v50 = v34[1]; /*0x6db5d4*/
      v51 = v34[2]; /*0x6db5e2*/
      Coord::To_Screen(this, &a1, (IUnknown *)v45); /*0x6db5e6*/
      result = (*(int (__thiscall **)(_DWORD, char *, IUnknown **, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] /*0x6db607*/
                                                                                 + 44))(
                 *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
                 &MEMORY[0x87F8E4].__pad_5568[8532],
                 &v37,
                 v45,
                 v52);
    }
  }
  return result; /*0x6db611*/
}


// ==== 0x006DB620  ObjectClass::RenderLWCViewCells  this=ObjectClass  sig=csp ====
int __thiscall LWCViewClass::RenderCells(_DWORD *this)
{
  _DWORD *v1; // ebp
  int Bit; // edi
  int result; // eax
  int v4; // esi
  int *ScreenRect; // eax
  _DWORD *v6; // eax
  int *Coords; // eax
  int *v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  char v12; // dl
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  int v24; // [esp+18h] [ebp-1DCh]
  int v25; // [esp+18h] [ebp-1DCh]
  int v26; // [esp+18h] [ebp-1DCh]
  int v27; // [esp+18h] [ebp-1DCh]
  int v28; // [esp+1Ch] [ebp-1D8h]
  int v29; // [esp+1Ch] [ebp-1D8h]
  int v30; // [esp+1Ch] [ebp-1D8h]
  int v31; // [esp+1Ch] [ebp-1D8h]
  int v32; // [esp+30h] [ebp-1C4h] BYREF
  int v33; // [esp+34h] [ebp-1C0h]
  int v34; // [esp+38h] [ebp-1BCh]
  int v35; // [esp+3Ch] [ebp-1B8h]
  _DWORD *v36; // [esp+40h] [ebp-1B4h]
  _DWORD v37[2]; // [esp+44h] [ebp-1B0h] BYREF
  _DWORD v38[2]; // [esp+4Ch] [ebp-1A8h] BYREF
  _DWORD v39[2]; // [esp+54h] [ebp-1A0h] BYREF
  _DWORD v40[2]; // [esp+5Ch] [ebp-198h] BYREF
  _DWORD v41[2]; // [esp+64h] [ebp-190h] BYREF
  _DWORD v42[2]; // [esp+6Ch] [ebp-188h] BYREF
  _DWORD v43[2]; // [esp+74h] [ebp-180h] BYREF
  _DWORD v44[2]; // [esp+7Ch] [ebp-178h] BYREF
  _DWORD v45[2]; // [esp+84h] [ebp-170h] BYREF
  _DWORD v46[2]; // [esp+8Ch] [ebp-168h] BYREF
  _DWORD v47[2]; // [esp+94h] [ebp-160h] BYREF
  _DWORD v48[3]; // [esp+9Ch] [ebp-158h] BYREF
  _DWORD v49[4]; // [esp+A8h] [ebp-14Ch] BYREF
  _DWORD v50[4]; // [esp+B8h] [ebp-13Ch] BYREF
  _DWORD v51[4]; // [esp+C8h] [ebp-12Ch] BYREF
  _DWORD v52[4]; // [esp+D8h] [ebp-11Ch] BYREF
  int v53[4]; // [esp+E8h] [ebp-10Ch] BYREF
  _DWORD v54[4]; // [esp+F8h] [ebp-FCh] BYREF
  _DWORD v55[4]; // [esp+108h] [ebp-ECh] BYREF
  _DWORD v56[4]; // [esp+118h] [ebp-DCh] BYREF
  int v57; // [esp+128h] [ebp-CCh] BYREF
  int v58; // [esp+130h] [ebp-C4h] BYREF
  _DWORD v59[6]; // [esp+138h] [ebp-BCh] BYREF
  int v60; // [esp+150h] [ebp-A4h] BYREF
  int v61; // [esp+158h] [ebp-9Ch] BYREF
  int v62; // [esp+160h] [ebp-94h] BYREF
  int v63[3]; // [esp+168h] [ebp-8Ch] BYREF
  int v64[4]; // [esp+174h] [ebp-80h] BYREF
  int v65[4]; // [esp+184h] [ebp-70h] BYREF
  int v66[4]; // [esp+194h] [ebp-60h] BYREF
  int v67[4]; // [esp+1A4h] [ebp-50h] BYREF
  int v68[4]; // [esp+1B4h] [ebp-40h] BYREF
  int v69[4]; // [esp+1C4h] [ebp-30h] BYREF
  int v70[4]; // [esp+1D4h] [ebp-20h] BYREF
  int v71[4]; // [esp+1E4h] [ebp-10h] BYREF

  v1 = this; /*0x6db628*/
  v36 = this; /*0x6db631*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x6db635*/
  Bit = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x6db654*/
  result = 255 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0]; /*0x6db672*/
  v4 = (255 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) | result; /*0x6db686*/
  if ( Bit ) /*0x6db68a*/
  {
    do /*0x6dbb43*/
    {
      ScreenRect = CellClass::GetScreenRect(Bit, v64); /*0x6db69a*/
      v53[0] = *ScreenRect; /*0x6db6a2*/
      v53[1] = ScreenRect[1]; /*0x6db6b2*/
      v53[2] = ScreenRect[2]; /*0x6db6bc*/
      v53[3] = ScreenRect[3]; /*0x6db6cd*/
      v6 = ClipRectIntersection(v66, v53, &MEMORY[0x886FA0], 0, 0); /*0x6db6db*/
      v59[2] = *v6; /*0x6db6e4*/
      v59[3] = v6[1]; /*0x6db6ee*/
      if ( (int)v6[2] > 0 && (int)v6[3] > 0 ) /*0x6db705*/
      {
        Coords = CellClass::GetCoords((_DWORD *)Bit, v63); /*0x6db715*/
        v48[0] = *Coords; /*0x6db71c*/
        v48[1] = Coords[1]; /*0x6db723*/
        v48[2] = Coords[2]; /*0x6db73c*/
        v8 = Coord::To_ScreenRaw(&v62, v48); /*0x6db743*/
        v9 = v8[1]; /*0x6db74c*/
        v10 = *v8 - v1[44] - 2; /*0x6db765*/
        v11 = MEMORY[0x886FA4] + v9 - v1[45] - 2; /*0x6db768*/
        v34 = 4; /*0x6db773*/
        v12 = *(_BYTE *)(Bit + 292); /*0x6db777*/
        v32 = v10; /*0x6db77d*/
        v33 = v11; /*0x6db784*/
        v35 = 4; /*0x6db788*/
        if ( (v12 & 4) != 0 ) /*0x6db78c*/
        {
          v47[0] = v10; /*0x6db78e*/
          v47[1] = v11; /*0x6db792*/
          v42[0] = 10; /*0x6db7ae*/
          v42[1] = 0; /*0x6db7b6*/
          v13 = Coord2D::Add(v47, v59, v42); /*0x6db7ba*/
          v14 = Rect::Construct(v70, v13, 4, 4); /*0x6db7c7*/
          v51[0] = *v14; /*0x6db7cf*/
          v51[1] = v14[1]; /*0x6db7d9*/
          v51[2] = v14[2]; /*0x6db7e9*/
          v51[3] = v14[3]; /*0x6db7f3*/
          (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], v51, v4); /*0x6db804*/
        }
        if ( (*(_BYTE *)(Bit + 292) & 0x10) != 0 ) /*0x6db812*/
        {
          v40[0] = v32; /*0x6db824*/
          v40[1] = v33; /*0x6db82c*/
          v28 = v35; /*0x6db830*/
          v24 = v34; /*0x6db835*/
          v46[0] = 0; /*0x6db843*/
          v46[1] = 6; /*0x6db847*/
          v15 = Coord2D::Add(v40, &v61, v46); /*0x6db852*/
          v16 = Rect::Construct(v68, v15, v24, v28); /*0x6db85f*/
          v52[0] = *v16; /*0x6db867*/
          v52[1] = v16[1]; /*0x6db871*/
          v52[2] = v16[2]; /*0x6db87b*/
          v52[3] = v16[3]; /*0x6db88b*/
          (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], v52, v4); /*0x6db89c*/
        }
        if ( (*(_BYTE *)(Bit + 292) & 8) != 0 ) /*0x6db8a6*/
        {
          v37[0] = v32; /*0x6db8b8*/
          v37[1] = v33; /*0x6db8c0*/
          v29 = v35; /*0x6db8c4*/
          v25 = v34; /*0x6db8c9*/
          v44[0] = -10; /*0x6db8d7*/
          v44[1] = 0; /*0x6db8df*/
          v17 = Coord2D::Add(v37, &v57, v44); /*0x6db8e3*/
          v18 = Rect::Construct(v65, v17, v25, v29); /*0x6db8f0*/
          v54[0] = *v18; /*0x6db8f8*/
          v54[1] = v18[1]; /*0x6db902*/
          v54[2] = v18[2]; /*0x6db90c*/
          v54[3] = v18[3]; /*0x6db91c*/
          (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], v54, v4); /*0x6db92d*/
        }
        if ( (*(_BYTE *)(Bit + 292) & 0xE0) != 0 ) /*0x6db937*/
          (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], &v32, v4); /*0x6db947*/
        if ( (*(_BYTE *)(Bit + 296) & 4) != 0 ) /*0x6db951*/
        {
          v39[0] = v32; /*0x6db963*/
          v39[1] = v33; /*0x6db96b*/
          v30 = v35; /*0x6db96f*/
          v26 = v34; /*0x6db974*/
          v38[0] = 10; /*0x6db982*/
          v38[1] = -60; /*0x6db98a*/
          v19 = Coord2D::Add(v39, &v58, v38); /*0x6db992*/
          v20 = Rect::Construct(v67, v19, v26, v30); /*0x6db99f*/
          v49[0] = *v20; /*0x6db9a7*/
          v49[1] = v20[1]; /*0x6db9b1*/
          v49[2] = v20[2]; /*0x6db9bb*/
          v49[3] = v20[3]; /*0x6db9cb*/
          (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], v49, v4); /*0x6db9dc*/
        }
        if ( (*(_BYTE *)(Bit + 296) & 0x10) != 0 ) /*0x6db9e6*/
        {
          v43[0] = v32; /*0x6db9f8*/
          v43[1] = v33; /*0x6dba00*/
          v31 = v35; /*0x6dba04*/
          v27 = v34; /*0x6dba09*/
          v41[0] = 0; /*0x6dba17*/
          v41[1] = -66; /*0x6dba1b*/
          v21 = Coord2D::Add(v43, &v60, v41); /*0x6dba23*/
          v22 = Rect::Construct(v69, v21, v27, v31); /*0x6dba30*/
          v50[0] = *v22; /*0x6dba38*/
          v50[1] = v22[1]; /*0x6dba42*/
          v50[2] = v22[2]; /*0x6dba4c*/
          v50[3] = v22[3]; /*0x6dba5c*/
          (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], v50, v4); /*0x6dba6d*/
        }
        if ( (*(_BYTE *)(Bit + 296) & 8) != 0 ) /*0x6dba77*/
        {
          v45[0] = v32 - 10; /*0x6dba8b*/
          v45[1] = v33 - 60; /*0x6dba93*/
          v23 = Rect::Construct(v71, v45, v34, v35); /*0x6dbaa5*/
          v56[0] = *v23; /*0x6dbaad*/
          v56[1] = v23[1]; /*0x6dbab7*/
          v56[2] = v23[2]; /*0x6dbac7*/
          v56[3] = v23[3]; /*0x6dbad1*/
          (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], v56, v4); /*0x6dbae2*/
        }
        if ( (*(_BYTE *)(Bit + 296) & 0xE0) != 0 ) /*0x6dbaec*/
        {
          v55[0] = v32; /*0x6dbaf6*/
          v55[1] = v33 - 60; /*0x6dbb05*/
          v55[3] = v35; /*0x6dbb10*/
          v55[2] = v34; /*0x6dbb1d*/
          (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], v55, v4); /*0x6dbb2e*/
        }
        v1 = v36; /*0x6dbb31*/
      }
      result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x6dbb3a*/
      Bit = result; /*0x6dbb3f*/
    }
    while ( result ); /*0x6dbb43*/
  }
  return result; /*0x6dbb49*/
}


// ==== 0x006DBB60  Tactical::DrawOverlay  this=Tactical  sig=csp ====
char __thiscall Tactical::DrawOverlay(_DWORD *this, int *a1, BuildingTypeClass *aP2, int a4, int a5)
{
  _DWORD *v6; // eax
  int v7; // ebx
  int v8; // esi
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  Tactical *v14; // ecx
  _DWORD *v15; // eax
  int v16; // ecx
  __int64 v17; // rax
  int v18; // esi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  ObjectClass *v22; // esi
  int v23; // edi
  int v24; // edx
  int v26; // [esp-8h] [ebp-38h]
  int v27; // [esp-8h] [ebp-38h]
  int v28; // [esp+10h] [ebp-20h] BYREF
  int v29; // [esp+18h] [ebp-18h] BYREF
  int v30; // [esp+1Ch] [ebp-14h]
  _DWORD v31[2]; // [esp+20h] [ebp-10h] BYREF
  _DWORD v32[2]; // [esp+28h] [ebp-8h] BYREF
  BOOL aP2a; // [esp+38h] [ebp+8h]

  v6 = IsoCoord::ToPixel(&v29, *a1, (Tactical *)a1[1]); /*0x6dbb79*/
  v7 = v6[1]; /*0x6dbb83*/
  v8 = *v6 / 256; /*0x6dbb93*/
  v9 = ZCoordToScreenY(a1[2]); /*0x6dbb9b*/
  v10 = *(this + 45); /*0x6dbbac*/
  v11 = v7 / 256 - v9; /*0x6dbbb5*/
  v12 = this->q02C; /*0x6dbbb7*/
  v32[0] = v8; /*0x6dbbbd*/
  v13 = v8 - v12; /*0x6dbbc3*/
  v14 = *(Tactical **)&aP2->vtable0[4]; /*0x6dbbc5*/
  v32[1] = v11 - v10; /*0x6dbbc8*/
  v26 = *(_DWORD *)aP2->vtable0; /*0x6dbbcf*/
  v32[0] = v13; /*0x6dbbd4*/
  v15 = IsoCoord::ToPixel(&v28, v26, v14); /*0x6dbbd8*/
  v16 = v15[1]; /*0x6dbbe1*/
  v17 = (int)*v15; /*0x6dbbe4*/
  v30 = v16; /*0x6dbbeb*/
  v18 = (BYTE4(v17) + (int)v17) >> 8; /*0x6dbbf6*/
  v19 = ZCoordToScreenY(*(_DWORD *)&aP2->vtable0[8]); /*0x6dbbf9*/
  v31[0] = v18; /*0x6dbc0b*/
  v20 = v18 - this->q02C; /*0x6dbc22*/
  v31[1] = v30 / 256 - v19 - *(this + 45); /*0x6dbc28*/
  v21 = *(_DWORD *)&aP2->vtable0[8]; /*0x6dbc2c*/
  v31[0] = v20; /*0x6dbc34*/
  v28 = v21; /*0x6dbc38*/
  v29 = a1[2]; /*0x6dbc58*/
  aP2a = v29 >= 728; /*0x6dbc5e*/
  v22 = *(ObjectClass **)&MEMORY[0x87F8E4].__pad_5568[9416]; /*0x6dbc66*/
  v23 = **(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416]; /*0x6dbc77*/
  v27 = 14 - Math::RoundToInt((double)v21 * *(double *)&MEMORY[0xB077F8].field_5550 + (double)(v21 >= 728) + 0.5); /*0x6dbc99*/
  v24 = 14 - Math::RoundToInt((double)v29 * *(double *)&MEMORY[0xB077F8].field_5550 + (double)aP2a + 0.5); /*0x6dbcb2*/
  (*(void (__thiscall **)(ObjectClass *, char *, _DWORD *, _DWORD *, int, int, int, int))(v23 + 52))( /*0x6dbcc7*/
    v22,
    &MEMORY[0x87F8E4].__pad_5568[8532],
    v32,
    v31,
    a4,
    v24,
    v27,
    a5);
  return 1; /*0x6dbcca*/
}


// ==== 0x006DBCE0  Tactical::ddtor  this=Tactical  sig=csp ====
int __stdcall Tactical::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6dbce6*/
    return -2147467261; /*0x6dbce8*/
  *a2 = -816401526; /*0x6dbcf6*/
  a2[1] = 298984461; /*0x6dbcfe*/
  a2[2] = 1610644609; /*0x6dbd07*/
  a2[3] = -1252326136; /*0x6dbd10*/
  return 0; /*0x6dbced*/
}


// ==== 0x006DBD20  Tactical::InitMap  this=Tactical  sig=csp ====
int __stdcall Tactical::_vt05(int a1, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // edi
  int *v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // [esp+4h] [ebp-8h] BYREF
  int v10; // [esp+8h] [ebp-4h]

  result = AbstractClass::SaveLoad_Prefix_0((_DWORD *)a1, a2); /*0x6dbd2e*/
  if ( result >= 0 ) /*0x6dbd35*/
  {
    if ( a1 ) /*0x6dbd3d*/
      SmallFunc_6D1E30((_DWORD *)a1, (int)&a2); /*0x6dbd46*/
    v3 = *(_DWORD *)(a1 + 224); /*0x6dbd4b*/
    v4 = 0; /*0x6dbd52*/
    *(_DWORD *)(a1 + 3504) = 0; /*0x6dbd54*/
    if ( v3 > 0 ) /*0x6dbd60*/
    {
      v5 = (int *)(a1 + 228); /*0x6dbd63*/
      do /*0x6dbd80*/
      {
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v5); /*0x6dbd6f*/
        ++v4; /*0x6dbd7a*/
        ++v5; /*0x6dbd7b*/
      }
      while ( v4 < *(_DWORD *)(a1 + 224) ); /*0x6dbd80*/
    }
    v6 = *(_DWORD *)(a1 + 3432); /*0x6dbd89*/
    v9 = *(_DWORD *)(a1 + 3428); /*0x6dbd93*/
    v10 = v6; /*0x6dbd9a*/
    if ( !ClampCoordMap(&v9) || MEMORY[0xA8ED6B] ) /*0x6dbdaf*/
    {
      v7 = *(_DWORD *)(a1 + 3428); /*0x6dbdbb*/
      v8 = *(_DWORD *)(a1 + 3432); /*0x6dbdc1*/
    }
    else
    {
      v7 = v9; /*0x6dbdb1*/
      v8 = v10; /*0x6dbdb5*/
    }
    *(_DWORD *)(a1 + 3428) = v7; /*0x6dbdc7*/
    *(_DWORD *)(a1 + 3444) = v7; /*0x6dbdcd*/
    *(_DWORD *)(a1 + 3432) = v8; /*0x6dbdd3*/
    *(_DWORD *)(a1 + 3448) = v8; /*0x6dbdd9*/
    TacticalClass::CalcViewportCells(a1); /*0x6dbde1*/
    *(_BYTE *)(a1 + 3453) = 1; /*0x6dbde6*/
    return 0; /*0x6dbded*/
  }
  return result; /*0x6dbdef*/
}


// ==== 0x006DBE00  Tactical::UpdateMapView  this=Tactical  sig=csp ====
int __stdcall Tactical::UpdateMapView(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6dbe0f*/
  if ( result >= 0 ) /*0x6dbe16*/
    return 0; /*0x6dbe18*/
  return result; /*0x6dbe1a*/
}


// ==== 0x006DBE20  TacticalClass::DrawPlacementCircles  this=TacticalClass  sig=csp ====
void TacticalClass_DrawPlacementCircles()
{
  wchar_t *v0; // ebx
  int i; // edi
  int v2; // esi
  int v3; // ebx
  _DWORD *v4; // eax
  int *Coords; // eax
  int v6; // esi
  int v7; // edi
  int v8; // ebp
  int v9; // ecx
  char v10; // ecx^3
  int v11; // edi
  int v12; // ebp
  int v13; // eax
  float v14; // ebx
  int *v15; // ecx
  __int16 v16; // si
  int v17; // eax
  _DWORD *v18; // eax
  double v19; // st7
  double v20; // st7
  __int16 v21; // ax
  int v22; // ebx
  int *v23; // esi
  __int16 v24; // di
  int v25; // eax
  _DWORD *v26; // eax
  double v27; // st7
  double v28; // st7
  int v29; // edi
  double v30; // st7
  _DWORD *v31; // eax
  int *v32; // eax
  int v33; // ecx
  int v34; // ebx
  int v35; // ebp
  int v36; // esi
  int v37; // edx
  int v38; // eax
  char v39; // cl
  char v40; // ecx^3
  double v41; // st7
  char v42; // ecx^3
  int v43; // [esp+4h] [ebp-58h]
  int v44; // [esp+4h] [ebp-58h]
  int v45; // [esp+4h] [ebp-58h]
  float v46; // [esp+8h] [ebp-54h]
  float v47; // [esp+8h] [ebp-54h]
  int v48; // [esp+28h] [ebp-34h] BYREF
  __int16 v49; // [esp+2Ch] [ebp-30h] BYREF
  char v50; // [esp+2Eh] [ebp-2Eh]
  int v51; // [esp+30h] [ebp-2Ch]
  float v52; // [esp+34h] [ebp-28h]
  float v53; // [esp+38h] [ebp-24h] BYREF
  int v54; // [esp+3Ch] [ebp-20h] BYREF
  int v55; // [esp+44h] [ebp-18h]
  int v56; // [esp+48h] [ebp-14h]
  int v57[2]; // [esp+50h] [ebp-Ch] BYREF
  int v58; // [esp+58h] [ebp-4h]

  v0 = MEMORY[0xA8ECC8]; /*0x6dbe2a*/
  for ( i = 0; i < (int)v0; ++i ) /*0x6dbe37*/
  {
    v2 = *((_DWORD *)MEMORY[0xA8ECBC] + i); /*0x6dbe3e*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 136))(v2) /*0x6dbe59*/
      && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 136))(v2) + 568) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 304))(v2, 1); /*0x6dbe69*/
    }
  }
  if ( MEMORY[0xA8EB7E] ) /*0x6dbe7b*/
  {
    v3 = MEMORY[0x88098C]; /*0x6dbe81*/
    v51 = MEMORY[0x88098C]; /*0x6dbe89*/
    if ( MEMORY[0x88098C] && (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88098C] + 44))(MEMORY[0x88098C]) == 6 ) /*0x6dbe9d*/
    {
      if ( BuildingClass::GetPowerFrame(v3) > 0 ) /*0x6dbeac*/
      {
        v53 = *(float *)&MEMORY[0x88095C]; /*0x6dbec0*/
        v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v53); /*0x6dbecb*/
        Coords = CellClass::GetCoords(v4, v57); /*0x6dbed2*/
        v6 = *Coords; /*0x6dbed7*/
        v7 = Coords[1]; /*0x6dbed9*/
        v8 = Coords[2]; /*0x6dbedc*/
        if ( (MEMORY[0xB0CE90] & 1) == 0 ) /*0x6dbee6*/
        {
          MEMORY[0xB0CE14] = 0; /*0x6dbef2*/
          MEMORY[0xB0CE90] |= 1u; /*0x6dbef9*/
          MEMORY[0xB0CE15] = 0; /*0x6dbeff*/
          MEMORY[0xB0CE16] = 0; /*0x6dbf06*/
          atexit(nullsub_44); /*0x6dbf0d*/
        }
        MEMORY[0xB0E648] += 10 * MEMORY[0x842950]; /*0x6dbf29*/
        if ( MEMORY[0xB0E648] < 100 ) /*0x6dbf2e*/
        {
          if ( MEMORY[0xB0E648] <= 0 ) /*0x6dbf3e*/
            MEMORY[0x842950] = 1; /*0x6dbf40*/
        }
        else
        {
          MEMORY[0x842950] = -1; /*0x6dbf30*/
        }
        v9 = *(_DWORD *)(v3 + 540) + 22265; /*0x6dbf55*/
        v49 = *(_WORD *)v9; /*0x6dbf5f*/
        v50 = *(_BYTE *)(v9 + 2); /*0x6dbf67*/
        Color::Lerp((unsigned __int8 *)&v49, MEMORY[0xB0E648], (unsigned __int8 *)&MEMORY[0xB0CE14]); /*0x6dbf6f*/
        v52 = COERCE_FLOAT(BuildingClass::GetPowerFrame(v3)); /*0x6dbf7b*/
        v46 = (float)SLODWORD(v52); /*0x6dbf91*/
        HIBYTE(v43) = v10; /*0x6dbf94*/
        LOWORD(v43) = v49; /*0x6dbf9a*/
        BYTE2(v43) = v50; /*0x6dbfa1*/
        DrawTechnoDeployCircle(0, 1, v6, v7, v8, v43, v46, 0, 1); /*0x6dbfae*/
        v11 = 0; /*0x6dbfb9*/
        v12 = 0x7FFFFFFF; /*0x6dbfbb*/
        v48 = *((_DWORD *)HouseClass_Player + 30); /*0x6dbfc5*/
        v13 = v48; /*0x6dbfc0*/
        if ( v48 > 0 ) /*0x6dbfc9*/
        {
          v14 = v52; /*0x6dbfcf*/
          do /*0x6dc0b0*/
          {
            v15 = *(int **)(*((_DWORD *)HouseClass_Player + 27) + 4 * v11); /*0x6dbfdc*/
            if ( v15 ) /*0x6dbfe1*/
            {
              if ( *((_BYTE *)v15 + 144) ) /*0x6dbfe7*/
              {
                if ( v15 != (int *)v51 && v15[328] == *(_DWORD *)(v51 + 1312) ) /*0x6dc00f*/
                {
                  v16 = MEMORY[0x88095C]; /*0x6dc015*/
                  v17 = *v15; /*0x6dc01b*/
                  v55 = MEMORY[0x88095C]; /*0x6dc021*/
                  v18 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(v17 + 72))(v15, v57); /*0x6dc026*/
                  LOWORD(v54) = *v18 / 256; /*0x6dc03c*/
                  HIWORD(v54) = v18[1] / 256; /*0x6dc050*/
                  LODWORD(v52) = (__int16)(HIWORD(v55) - HIWORD(v54)); /*0x6dc06b*/
                  v19 = (double)SLODWORD(v52); /*0x6dc06f*/
                  LODWORD(v52) = (__int16)(v16 - v54); /*0x6dc073*/
                  v20 = Math::Sqrt((double)SLODWORD(v52) * (double)SLODWORD(v52) + v19 * v19); /*0x6dc08c*/
                  v21 = Math::RoundToInt(v20); /*0x6dc094*/
                  if ( v21 <= 2 * LODWORD(v14) && v21 < v12 ) /*0x6dc0a5*/
                    v12 = v21; /*0x6dc0a7*/
                }
              }
            }
            v13 = v48; /*0x6dc0a9*/
            ++v11; /*0x6dc0ad*/
          }
          while ( v11 < v48 ); /*0x6dc0b0*/
        }
        v22 = 0; /*0x6dc0b6*/
        if ( v13 > 0 ) /*0x6dc0ba*/
        {
          do /*0x6dc1a1*/
          {
            v23 = *(int **)(*((_DWORD *)HouseClass_Player + 27) + 4 * v22); /*0x6dc0c8*/
            if ( v23 && *((_BYTE *)v23 + 144) && v23 != (int *)v51 && v23[328] == *(_DWORD *)(v51 + 1312) ) /*0x6dc0fb*/
            {
              v24 = MEMORY[0x88095C]; /*0x6dc101*/
              v25 = *v23; /*0x6dc107*/
              v55 = MEMORY[0x88095C]; /*0x6dc10d*/
              v26 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(v25 + 72))(v23, v57); /*0x6dc114*/
              LOWORD(v54) = *v26 / 256; /*0x6dc12a*/
              HIWORD(v54) = v26[1] / 256; /*0x6dc13e*/
              LODWORD(v52) = (__int16)(HIWORD(v55) - HIWORD(v54)); /*0x6dc159*/
              v27 = (double)SLODWORD(v52); /*0x6dc15d*/
              LODWORD(v52) = (__int16)(v24 - v54); /*0x6dc161*/
              v28 = Math::Sqrt((double)SLODWORD(v52) * (double)SLODWORD(v52) + v27 * v27); /*0x6dc17a*/
              if ( (__int16)Math::RoundToInt(v28) == v12 ) /*0x6dc18c*/
                (*(void (__thiscall **)(int *, _DWORD))(*v23 + 304))(v23, 0); /*0x6dc194*/
            }
            ++v22; /*0x6dc19e*/
          }
          while ( v22 < v48 ); /*0x6dc1a1*/
        }
      }
      return; /*0x6dc1a1*/
    }
    if ( MEMORY[0x8809A0] == -1 ) /*0x6dc1b7*/
      return; /*0x6dc1b7*/
    v29 = *((_DWORD *)MEMORY[0xA8E334] + MEMORY[0x8809A0]); /*0x6dc1c3*/
    v30 = *(float *)(v29 + 248); /*0x6dc1c6*/
    v52 = *(float *)(v29 + 248); /*0x6dc1cc*/
    if ( v30 <= 0.0 ) /*0x6dc1db*/
      return; /*0x6dc1db*/
    v54 = MEMORY[0x88095C]; /*0x6dc1f6*/
    v31 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v54); /*0x6dc1fa*/
    v32 = CellClass::GetCoords(v31, v57); /*0x6dc201*/
    v33 = v32[1]; /*0x6dc20d*/
    v55 = *v32 - 126; /*0x6dc210*/
    v34 = v32[2]; /*0x6dc219*/
    v56 = v33 - 126; /*0x6dc21c*/
    v58 = v34; /*0x6dc226*/
    if ( (MEMORY[0xB0CE90] & 2) == 0 ) /*0x6dc22c*/
    {
      MEMORY[0xB0CD70] = 0; /*0x6dc237*/
      MEMORY[0xB0CE90] |= 2u; /*0x6dc23e*/
      MEMORY[0xB0CD71] = 0; /*0x6dc244*/
      MEMORY[0xB0CD72] = 0; /*0x6dc24b*/
      atexit(nullsub_43); /*0x6dc252*/
    }
    v35 = MEMORY[0x842954]; /*0x6dc25a*/
    MEMORY[0xB0E64C] += 10 * MEMORY[0x842954]; /*0x6dc270*/
    v36 = MEMORY[0xB0E64C]; /*0x6dc26a*/
    if ( MEMORY[0xB0E64C] < 100 ) /*0x6dc276*/
    {
      if ( MEMORY[0xB0E64C] > 0 ) /*0x6dc27f*/
        goto LABEL_44; /*0x6dc27f*/
      v35 = 1; /*0x6dc281*/
    }
    else
    {
      v35 = -1; /*0x6dc278*/
    }
    MEMORY[0x842954] = v35; /*0x6dc286*/
LABEL_44:
    v37 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * *((_DWORD *)HouseClass_Player + 12)] + 22265; /*0x6dc28c*/
    v49 = *(_WORD *)v37; /*0x6dc2a7*/
    v38 = *(int *)(v29 + 252); /*0x6dc2ac*/
    v39 = *(_BYTE *)(v37 + 2); /*0x6dc2b2*/
    LOWORD(v48) = 0; /*0x6dc2b5*/
    v50 = v39; /*0x6dc2bc*/
    BYTE2(v48) = 0; /*0x6dc2c5*/
    v53 = *(float *)&v38; /*0x6dc2ca*/
    if ( v38 <= 0 ) /*0x6dc2ce*/
    {
      Color::Lerp((unsigned __int8 *)&v49, MEMORY[0xB0E64C], (unsigned __int8 *)&MEMORY[0xB0CD70]); /*0x6dc3b5*/
      HIBYTE(v45) = v42; /*0x6dc3ce*/
      LOWORD(v45) = v49; /*0x6dc3d6*/
      BYTE2(v45) = v50; /*0x6dc3dd*/
      DrawTechnoDeployCircle(0, 1, v55, v56, v34, v45, v52, 0, 1); /*0x6dc3ee*/
    }
    else
    {
      v51 = 0; /*0x6dc2d8*/
      if ( (double)SLODWORD(v53) * v52 >= 0.0 ) /*0x6dc2ef*/
      {
        v53 = 0.0; /*0x6dc2f5*/
        do /*0x6dc39d*/
        {
          LOWORD(v48) = v49; /*0x6dc30a*/
          BYTE2(v48) = v50; /*0x6dc30f*/
          v36 += 10 * v35; /*0x6dc313*/
          if ( v36 < 100 ) /*0x6dc319*/
          {
            if ( v36 <= 0 ) /*0x6dc322*/
              v35 = 1; /*0x6dc324*/
          }
          else
          {
            v35 = -1; /*0x6dc31b*/
          }
          Color::Lerp((unsigned __int8 *)&v48, v36, (unsigned __int8 *)&MEMORY[0xB0CD70]); /*0x6dc333*/
          v47 = v53 / (double)*(int *)(v29 + 252); /*0x6dc350*/
          HIBYTE(v44) = v40; /*0x6dc353*/
          LOWORD(v44) = v48; /*0x6dc359*/
          BYTE2(v44) = BYTE2(v48); /*0x6dc360*/
          DrawTechnoDeployCircle(0, 1, v55, v56, v58, v44, v47, 0, 0); /*0x6dc379*/
          v41 = (double)++v51; /*0x6dc382*/
          v53 = v41; /*0x6dc386*/
        }
        while ( v41 <= (double)*(int *)(v29 + 252) * v52 ); /*0x6dc39d*/
      }
    }
  }
}


// ==== 0x006DC400  nullsub_43  this=-  sig=ida-proto ====
void __cdecl nullsub_43()
{
  ; /*0x6dc400*/
}


// ==== 0x006DC410  nullsub_44  this=-  sig=ida-proto ====
void __cdecl nullsub_44()
{
  ; /*0x6dc410*/
}


// ==== 0x006DC420  ObjectClass::GetHeightMap  this=AbstractClass  sig=csp ====
int __thiscall Map_GetHeight(_DWORD *this)
{
  return this->qDB0; /*0x6dc426*/
}


// ==== 0x006DC430  GetCoordDataMap  this=AbstractClass  sig=csp ====
int __stdcall Map_GetCoordData(int a1)
{
  return MEMORY[0xB0CEC8][3 * a1]; /*0x6dc43e*/
}


// ==== 0x006DC450  Tactical::StubReturn56  this=Tactical  sig=csp ====
int Tactical::_vt11()
{
  return 56; /*0x6dc455*/
}


// ==== 0x006DC460  Tactical::StubReturn3608  this=Tactical  sig=csp ====
int Tactical::_vt12()
{
  return 3608; /*0x6dc465*/
}


// ==== 0x006DC470  Tactical::UpdateView  this=Tactical  sig=csp ====
Tactical *__thiscall Tactical::UpdateView(_DWORD *Block, char a2)
{
  *Block = &Tactical::`vftable'; /*0x6dc473*/
  *(Block + 1) = &Tactical::`vftable'; /*0x6dc479*/
  *(Block + 2) = &Tactical::`vftable'; /*0x6dc480*/
  *(Block + 3) = &vt_Tactical; /*0x6dc487*/
  MEMORY[0x887324] = 0; /*0x6dc48e*/
  AbstractClass::DTOR(Block); /*0x6dc498*/
  if ( (a2 & 1) != 0 ) /*0x6dc4a2*/
    __3_YAXPAX_Z(Block); /*0x6dc4a5*/
  return (Tactical *)Block; /*0x6dc4af*/
}


// ==== 0x006DC4C0  Vector2::Subtract  this=float  sig=csp ====
_DWORD *__thiscall Vector2_Subtract(_DWORD *this, _DWORD *a2)
{
  int v3; // edx

  v3 = *(this + 1); /*0x6dc4cd*/
  *this -= *a2; /*0x6dc4d0*/
  *(this + 1) = v3 - a2[1]; /*0x6dc4d8*/
  return this; /*0x6dc4d7*/
}


// ==== 0x006DC4E0  VectorClass_UDirtyAreaStruct::Destroy  this=VectorClass_UDirtyAreaStruct  sig=csp ====
void __thiscall VectorClass_UDirtyAreaStruct::sub_6DC4E0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x6dc4e6*/
  *(_DWORD *)(this + 16) = 0; /*0x6dc4e9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6dc4f0*/
  {
    __3_YAXPAX_Z(v2); /*0x6dc4f6*/
    *(_DWORD *)(this + 4) = 0; /*0x6dc4fe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6dc501*/
  *(_DWORD *)(this + 8) = 0; /*0x6dc504*/
}


// ==== 0x006DC510  VectorClass_UDirtyAreaStruct::GetItemIndex  this=VectorClass_UDirtyAreaStruct  sig=csp ====
unsigned int __thiscall VectorClass_UDirtyAreaStruct::sub_6DC510(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6dc510*/
    return (a2 - *(_DWORD *)(this + 4)) / 0x14u; /*0x6dc52e*/
  else
    return 0; /*0x6dc517*/
}


// ==== 0x006DC540  _VectorClass_UDirtyAreaStruct::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UDirtyAreaStruct::_vt06(_DWORD *this, int a2, int a3)
{
  int v3; // ecx

  v3 = this->Items + 20 * a3; /*0x6dc54c*/
  *(_DWORD *)a2 = *(_DWORD *)v3; /*0x6dc559*/
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v3 + 4); /*0x6dc55e*/
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(v3 + 8); /*0x6dc564*/
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(v3 + 12); /*0x6dc56b*/
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(v3 + 16); /*0x6dc571*/
  return a2; /*0x6dc567*/
}


// ==== 0x006DC580  _DynamicVectorClass_PAVShadowControlClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_UDirtyAreaStruct::sub_6DC580(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x6dc586*/
  *(_DWORD *)(this + 16) = 0; /*0x6dc589*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6dc590*/
  {
    __3_YAXPAX_Z(v2); /*0x6dc596*/
    *(_DWORD *)(this + 4) = 0; /*0x6dc59e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6dc5a1*/
  *(_DWORD *)(this + 8) = 0; /*0x6dc5a4*/
}


// ==== 0x006DC5B0  _DynamicVectorClass_PAVShadowControlClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_UDirtyAreaStruct::sub_6DC5B0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6dc5b0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6dc5c5*/
  else
    return 0; /*0x6dc5b7*/
}


// ==== 0x006DC5D0  _VectorClass_PAVShadowControlClass::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UDirtyAreaStruct___16_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x6dc5da*/
}


// ==== 0x006DC5E0  _VectorClass_UDirtyAreaStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UDirtyAreaStruct::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // ebp

  v2 = this->Capacity; /*0x6dc5eb*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x6dc5f0*/
  {
    v3 = 0; /*0x6dc5f2*/
    if ( v2 <= 0 ) /*0x6dc5f6*/
      return 1; /*0x6dc646*/
    v4 = *(_DWORD *)(a2 + 4); /*0x6dc5f8*/
    v5 = this->Items; /*0x6dc5fb*/
    v6 = v4 + 4; /*0x6dc600*/
    v7 = v4 - v5; /*0x6dc603*/
    while ( *(_BYTE *)(v5 + 16) == *(_BYTE *)(v6 + 12) /*0x6dc633*/
         && *(_DWORD *)v5 == *(_DWORD *)(v5 + v7)
         && *(_DWORD *)(v5 + 4) == *(_DWORD *)v6
         && *(_DWORD *)(v5 + 8) == *(_DWORD *)(v6 + 4)
         && *(_DWORD *)(v5 + 12) == *(_DWORD *)(v6 + 8) )
    {
      ++v3; /*0x6dc635*/
      v6 += 20; /*0x6dc636*/
      v5 += 20; /*0x6dc639*/
      if ( v3 >= v2 ) /*0x6dc63e*/
        return 1; /*0x6dc63e*/
    }
  }
  return 0; /*0x6dc640*/
}


// ==== 0x006DC660  _VectorClass_UDirtyAreaStruct::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UDirtyAreaStruct::_vt02(void *this, int a2, char *a3)
{
  int v3; // esi
  char *v5; // edi
  char *v6; // eax
  char *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int v12; // edx
  int v13; // eax
  const void *v14; // esi
  char *v15; // edi
  char *v16; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x6dc664*/
  if ( a2 ) /*0x6dc66f*/
  {
    v5 = a3; /*0x6dc675*/
    this->IsInitialized = 0; /*0x6dc679*/
    if ( a3 ) /*0x6dc67e*/
    {
      if ( a2 - 1 >= 0 ) /*0x6dc6c3*/
      {
        v9 = a3 + 8; /*0x6dc6c5*/
        v10 = a2; /*0x6dc6c8*/
        do /*0x6dc6db*/
        {
          *((_DWORD *)v9 - 2) = 0; /*0x6dc6c9*/
          *((_DWORD *)v9 - 1) = 0; /*0x6dc6cc*/
          *(_DWORD *)v9 = 0; /*0x6dc6cf*/
          *((_DWORD *)v9 + 1) = 0; /*0x6dc6d1*/
          v9[8] = 0; /*0x6dc6d4*/
          v9 += 20; /*0x6dc6d7*/
          --v10; /*0x6dc6da*/
        }
        while ( v10 ); /*0x6dc6db*/
      }
      v16 = a3; /*0x6dc6dd*/
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(20 * a2); /*0x6dc687*/
      if ( v6 ) /*0x6dc691*/
      {
        if ( a2 - 1 >= 0 ) /*0x6dc698*/
        {
          v7 = v6 + 8; /*0x6dc69a*/
          v8 = a2; /*0x6dc69d*/
          do /*0x6dc6b0*/
          {
            *((_DWORD *)v7 - 2) = 0; /*0x6dc69e*/
            *((_DWORD *)v7 - 1) = 0; /*0x6dc6a1*/
            *(_DWORD *)v7 = 0; /*0x6dc6a4*/
            *((_DWORD *)v7 + 1) = 0; /*0x6dc6a6*/
            v7[8] = 0; /*0x6dc6a9*/
            v7 += 20; /*0x6dc6ac*/
            --v8; /*0x6dc6af*/
          }
          while ( v8 ); /*0x6dc6b0*/
        }
        v16 = v6; /*0x6dc6b2*/
      }
      else
      {
        v16 = 0; /*0x6dc6b8*/
      }
    }
    this->IsInitialized = 1; /*0x6dc6e5*/
    if ( v16 ) /*0x6dc6eb*/
    {
      if ( this->Items ) /*0x6dc6f7*/
      {
        v12 = this->Capacity; /*0x6dc6fc*/
        if ( a2 < v12 ) /*0x6dc701*/
          v12 = a2; /*0x6dc703*/
        if ( v12 > 0 ) /*0x6dc707*/
        {
          v13 = 0; /*0x6dc709*/
          do /*0x6dc724*/
          {
            v14 = (const void *)(this->Items + v13); /*0x6dc714*/
            v15 = &v16[v13]; /*0x6dc716*/
            v13 += 20; /*0x6dc71e*/
            --v12; /*0x6dc721*/
            qmemcpy(v15, v14, 0x14u); /*0x6dc722*/
          }
          while ( v12 ); /*0x6dc724*/
          v5 = a3; /*0x6dc726*/
          v3 = a2; /*0x6dc72a*/
        }
        if ( this->IsAllocated ) /*0x6dc72e*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x6dc737*/
          this->Items = 0; /*0x6dc73f*/
        }
      }
      this->Capacity = v3; /*0x6dc746*/
      this->Items = v16; /*0x6dc749*/
      this->IsAllocated = v5 == 0; /*0x6dc754*/
      return 1; /*0x6dc759*/
    }
    else
    {
      return 0; /*0x6dc6f0*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6dc765*/
    return 1; /*0x6dc76b*/
  }
}


// ==== 0x006DC780  _VectorClass_UDirtyAreaStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UDirtyAreaStruct::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x6dc78d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x6dc793*/
    *(_DWORD *)(this + 4) = 0; /*0x6dc79b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6dc79e*/
  *(_DWORD *)(this + 8) = 0; /*0x6dc7a1*/
}


// ==== 0x006DC7B0  _VectorClass_UDirtyAreaStruct::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UDirtyAreaStruct::_vt04(int this, int a2)
{
  int v3; // edi
  int v4; // esi
  int i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x6dc7b0*/
    return 0; /*0x6dc7be*/
  v3 = *(_DWORD *)(this + 8); /*0x6dc7c4*/
  v4 = 0; /*0x6dc7c7*/
  if ( v3 <= 0 ) /*0x6dc7cb*/
    return -1; /*0x6dc815*/
  for ( i = *(_DWORD *)(this + 4); /*0x6dc7d1*/
        *(_BYTE *)(i + 16) != *(_BYTE *)(a2 + 16)
     || *(_DWORD *)i != *(_DWORD *)a2
     || *(_DWORD *)(i + 4) != *(_DWORD *)(a2 + 4)
     || *(_DWORD *)(i + 8) != *(_DWORD *)(a2 + 8)
     || *(_DWORD *)(i + 12) != *(_DWORD *)(a2 + 12);
        i += 20 )
  {
    if ( ++v4 >= v3 ) /*0x6dc808*/
      return -1; /*0x6dc808*/
  }
  return v4; /*0x6dc7bb*/
}


// ==== 0x006DC820  _VectorClass_UDirtyAreaStruct::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UDirtyAreaStruct::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6dc820*/
    return (a2 - *(_DWORD *)(this + 4)) / 0x14u; /*0x6dc83e*/
  else
    return 0; /*0x6dc827*/
}


// ==== 0x006DC850  VectorClass_UDirtyAreaStruct::SetCapacity  this=VectorClass_UDirtyAreaStruct  sig=csp ====
char __thiscall VectorClass_UDirtyAreaStruct::SetCapacity(void *this, CCINIClass *aP1, char *a2)
{
  CCINIClass *v3; // edi
  char *v5; // esi
  CCINIClass *v6; // ebx
  char *v7; // ebx
  CCINIClass *v8; // ebx
  CCINIClass *v9; // edx
  int v10; // eax
  char *v11; // edi
  const void *v12; // esi
  int v13; // eax
  char *v15; // [esp+10h] [ebp-4h]

  v3 = aP1; /*0x6dc855*/
  if ( !aP1 ) /*0x6dc85d*/
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6dc94a*/
    goto LABEL_26; /*0x6dc94a*/
  }
  v5 = a2; /*0x6dc863*/
  this->IsInitialized = 0; /*0x6dc867*/
  if ( a2 ) /*0x6dc86d*/
  {
    if ( (int)&aP1[-1].unknown54 + 3 >= 0 ) /*0x6dc8ba*/
    {
      v8 = aP1; /*0x6dc8bc*/
      do /*0x6dc8d6*/
      {
        Rect::Set(v5, 0, 0, 0, 0); /*0x6dc8c9*/
        v5[16] = 0; /*0x6dc8ce*/
        v5 += 20; /*0x6dc8d2*/
        v8 = (CCINIClass *)((char *)v8 - 1); /*0x6dc8d5*/
      }
      while ( v8 ); /*0x6dc8d6*/
      v5 = a2; /*0x6dc8d8*/
    }
    goto LABEL_13; /*0x6dc8d8*/
  }
  v5 = (char *)__2_YAPAXI_Z(20 * (_DWORD)aP1); /*0x6dc87b*/
  v15 = v5; /*0x6dc882*/
  if ( v5 ) /*0x6dc886*/
  {
    if ( (int)&aP1[-1].unknown54 + 3 >= 0 ) /*0x6dc88d*/
    {
      v6 = aP1; /*0x6dc88f*/
      do /*0x6dc8a9*/
      {
        Rect::Set(v5, 0, 0, 0, 0); /*0x6dc89c*/
        v5[16] = 0; /*0x6dc8a1*/
        v5 += 20; /*0x6dc8a5*/
        v6 = (CCINIClass *)((char *)v6 - 1); /*0x6dc8a8*/
      }
      while ( v6 ); /*0x6dc8a9*/
      v5 = v15; /*0x6dc8ab*/
    }
LABEL_13:
    v7 = v5; /*0x6dc8dc*/
    goto LABEL_14; /*0x6dc8dc*/
  }
  v7 = 0; /*0x6dc8b1*/
LABEL_14:
  this->IsInitialized = 1; /*0x6dc8de*/
  if ( !v7 ) /*0x6dc8e4*/
    return 0; /*0x6dc967*/
  if ( this->Items ) /*0x6dc8e6*/
  {
    v9 = (CCINIClass *)this->Capacity; /*0x6dc8ed*/
    if ( (int)aP1 < (int)v9 ) /*0x6dc8f2*/
      v9 = aP1; /*0x6dc8f4*/
    if ( (int)v9 > 0 ) /*0x6dc8f8*/
    {
      v10 = 0; /*0x6dc8fa*/
      do /*0x6dc90f*/
      {
        v11 = &v7[v10]; /*0x6dc8ff*/
        v12 = (const void *)(v10 + this->Items); /*0x6dc902*/
        v10 += 20; /*0x6dc909*/
        v9 = (CCINIClass *)((char *)v9 - 1); /*0x6dc90c*/
        qmemcpy(v11, v12, 0x14u); /*0x6dc90d*/
      }
      while ( v9 ); /*0x6dc90f*/
      v3 = aP1; /*0x6dc911*/
    }
    if ( this->IsAllocated ) /*0x6dc915*/
    {
      __3_YAXPAX_Z(*((void **)this + 1)); /*0x6dc920*/
      this->Items = 0; /*0x6dc928*/
    }
  }
  this->Items = v7; /*0x6dc93a*/
  this->Capacity = v3; /*0x6dc93d*/
  this->IsAllocated = a2 == 0; /*0x6dc940*/
LABEL_26:
  v13 = this->Capacity; /*0x6dc94d*/
  if ( v13 < this->Items ) /*0x6dc955*/
    this->Items = v13; /*0x6dc957*/
  return 1; /*0x6dc95a*/
}


// ==== 0x006DC970  VectorClass_UDirtyAreaStruct::FindItemIndex  this=VectorClass_UDirtyAreaStruct  sig=csp ====
int __thiscall VectorClass_UDirtyAreaStruct::sub_6DC970(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int i; // ecx

  v2 = this->Items; /*0x6dc974*/
  v3 = 0; /*0x6dc977*/
  if ( v2 <= 0 ) /*0x6dc97b*/
    return -1; /*0x6dc9c5*/
  for ( i = this->Items; /*0x6dc981*/
        *(_BYTE *)(i + 16) != *(_BYTE *)(a2 + 16)
     || *(_DWORD *)i != *(_DWORD *)a2
     || *(_DWORD *)(i + 4) != *(_DWORD *)(a2 + 4)
     || *(_DWORD *)(i + 8) != *(_DWORD *)(a2 + 8)
     || *(_DWORD *)(i + 12) != *(_DWORD *)(a2 + 12);
        i += 20 )
  {
    if ( ++v3 >= v2 ) /*0x6dc9b8*/
      return -1; /*0x6dc9b8*/
  }
  return v3; /*0x6dc9be*/
}


// ==== 0x006DC9D0  _VectorClass_PAVShadowControlClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UDirtyAreaStruct___16_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x6dc9d2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x6dc9dd*/
  {
    v3 = 0; /*0x6dc9df*/
    if ( v2 <= 0 ) /*0x6dc9e3*/
      return 1; /*0x6dca03*/
    v4 = (_DWORD *)this->Items; /*0x6dc9e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6dc9eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6dc9f4*/
    {
      ++v3; /*0x6dc9f6*/
      ++v4; /*0x6dc9f7*/
      if ( v3 >= v2 ) /*0x6dc9fc*/
        return 1; /*0x6dc9fc*/
    }
  }
  return 0; /*0x6dc9fe*/
}


// ==== 0x006DCA10  _VectorClass_PAVShadowControlClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UDirtyAreaStruct___16_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x6dca1c*/
  {
    this->IsInitialized = 0; /*0x6dca26*/
    if ( a3 ) /*0x6dca2c*/
      v4 = a3; /*0x6dca42*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6dca3e*/
    this->IsInitialized = 1; /*0x6dca46*/
    if ( v4 ) /*0x6dca4a*/
    {
      if ( this->Items ) /*0x6dca55*/
      {
        v6 = this->Capacity; /*0x6dca5c*/
        if ( a2 < v6 ) /*0x6dca61*/
          v6 = a2; /*0x6dca63*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6dca69*/
          ++i; /*0x6dca6e*/
        if ( this->IsAllocated ) /*0x6dca7b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x6dca86*/
          this->Items = 0; /*0x6dca8e*/
        }
      }
      this->Items = v4; /*0x6dca97*/
      this->Capacity = a2; /*0x6dca9f*/
      this->IsAllocated = a3 == 0; /*0x6dcaa2*/
      return 1; /*0x6dcaa8*/
    }
    else
    {
      return 0; /*0x6dca4f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6dcab2*/
    return 1; /*0x6dcab8*/
  }
}


// ==== 0x006DCAC0  _VectorClass_PAVShadowControlClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UDirtyAreaStruct___16_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x6dcacd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x6dcad3*/
    *(_DWORD *)(this + 4) = 0; /*0x6dcadb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6dcade*/
  *(_DWORD *)(this + 8) = 0; /*0x6dcae1*/
}


// ==== 0x006DCAF0  _VectorClass_PAVShadowControlClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UDirtyAreaStruct___16_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x6dcaf0*/
    return 0; /*0x6dcaf8*/
  v3 = *(_DWORD *)(this + 8); /*0x6dcafe*/
  result = 0; /*0x6dcb01*/
  if ( v3 <= 0 ) /*0x6dcb05*/
    return -1; /*0x6dcb1c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x6dcb0b*/
  {
    if ( ++result >= v3 ) /*0x6dcb1a*/
      return -1; /*0x6dcb1a*/
  }
  return result; /*0x6dcafa*/
}


// ==== 0x006DCB30  _VectorClass_PAVShadowControlClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UDirtyAreaStruct___16_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6dcb30*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6dcb45*/
  else
    return 0; /*0x6dcb37*/
}


// ==== 0x006DCB50  _DynamicVectorClass_PAVShadowControlClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_UDirtyAreaStruct::sub_6DCB50(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6dcb5c*/
  {
    this->IsInitialized = 0; /*0x6dcb62*/
    if ( a3 ) /*0x6dcb68*/
      v4 = a3; /*0x6dcb7e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6dcb7a*/
    this->IsInitialized = 1; /*0x6dcb82*/
    if ( !v4 ) /*0x6dcb86*/
      return 0; /*0x6dcbfa*/
    if ( this->Items ) /*0x6dcb88*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x6dcb8f*/
      if ( a2 < v5 ) /*0x6dcb94*/
        v5 = a2; /*0x6dcb96*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6dcb9c*/
        ++i; /*0x6dcba1*/
      if ( this->IsAllocated ) /*0x6dcbae*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x6dcbb9*/
        this->Items = 0; /*0x6dcbc1*/
      }
    }
    this->Items = v4; /*0x6dcbca*/
    this->DynamicVector_field_0x8 = a2; /*0x6dcbd2*/
    this->IsAllocated = a3 == 0; /*0x6dcbd5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6dcbde*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x6dcbe1*/
  if ( v7 < this->Items ) /*0x6dcbe9*/
    this->Items = v7; /*0x6dcbeb*/
  return 1; /*0x6dcbee*/
}


// ==== 0x006DCC00  _DynamicVectorClass_PAVShadowControlClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_UDirtyAreaStruct::sub_6DCC00(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x6dcc00*/
  result = 0; /*0x6dcc03*/
  if ( v2 <= 0 ) /*0x6dcc08*/
    return -1; /*0x6dcc1f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x6dcc0e*/
  {
    if ( ++result >= v2 ) /*0x6dcc1d*/
      return -1; /*0x6dcc1d*/
  }
  return result; /*0x6dcc22*/
}


// ==== 0x006DCC30  _VectorClass_UDirtyAreaStruct::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_UDirtyAreaStruct::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6dcc33*/
  *Block = &vt_VectorClass_DirtyAreaStruct; /*0x6dcc36*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6dcc40*/
  {
    __3_YAXPAX_Z(v3); /*0x6dcc48*/
    *(Block + 1) = 0; /*0x6dcc50*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6dcc5b*/
  *(Block + 2) = 0; /*0x6dcc61*/
  if ( (a2 & 1) != 0 ) /*0x6dcc68*/
    __3_YAXPAX_Z(Block); /*0x6dcc6b*/
  return (VectorClass *)Block; /*0x6dcc75*/
}


// ==== 0x006DCC80  VectorClass_UDirtyAreaStruct::loc_6DCC80  this=VOID_PTR  sig=ida-proto ====
_DWORD *__thiscall VectorClass_UDirtyAreaStruct::loc_6DCC80(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6dcc83*/
  *Block = &vt_VectorClass_DirtyAreaStruct; /*0x6dcc86*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6dcc90*/
  {
    __3_YAXPAX_Z(v3); /*0x6dcc98*/
    *(Block + 1) = 0; /*0x6dcca0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6dccab*/
  *(Block + 2) = 0; /*0x6dccb1*/
  if ( (a2 & 1) != 0 ) /*0x6dccb8*/
    __3_YAXPAX_Z(Block); /*0x6dccbb*/
  return Block; /*0x6dccc5*/
}


// ==== 0x006DCCD0  _VectorClass_PAVShadowControlClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_UDirtyAreaStruct___16_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6dccd3*/
  *Block = &vt_VectorClass_ShadowControlClass; /*0x6dccd6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6dcce0*/
  {
    __3_YAXPAX_Z(v3); /*0x6dcce8*/
    *(Block + 1) = 0; /*0x6dccf0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6dccfb*/
  *(Block + 2) = 0; /*0x6dcd01*/
  if ( (a2 & 1) != 0 ) /*0x6dcd08*/
    __3_YAXPAX_Z(Block); /*0x6dcd0b*/
  return (VectorClass *)Block; /*0x6dcd15*/
}


// ==== 0x006DCD20  _DynamicVectorClass_PAVShadowControlClass::Constructor_VectorClass_ShadowControlClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_UDirtyAreaStruct::Constructor_VectorClass_ShadowControlClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6dcd23*/
  *Block = &vt_VectorClass_ShadowControlClass; /*0x6dcd26*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6dcd30*/
  {
    __3_YAXPAX_Z(v3); /*0x6dcd38*/
    *(Block + 1) = 0; /*0x6dcd40*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6dcd4b*/
  *(Block + 2) = 0; /*0x6dcd51*/
  if ( (a2 & 1) != 0 ) /*0x6dcd58*/
    __3_YAXPAX_Z(Block); /*0x6dcd5b*/
  return (DynamicVector *)Block; /*0x6dcd65*/
}


// ==== 0x006DCD70  sub_6DCD70  this=-  sig=ida-proto ====
void sub_6DCD70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6dcd7c*/
  MEMORY[0xB0E688] = Math::Sqrt(v0 + v0); /*0x6dcd8e*/
}


// ==== 0x006DCDA0  sub_6DCDA0  this=-  sig=ida-proto ====
void sub_6DCDA0()
{
  MEMORY[0xB0E6D8] = MEMORY[0xB0E688] / 60.0; /*0x6dcdac*/
}


// ==== 0x006DCDC0  sub_6DCDC0  this=-  sig=ida-proto ====
void sub_6DCDC0()
{
  MEMORY[0xB0E6C0] = 1.0 / MEMORY[0xB0E6D8]; /*0x6dcdcc*/
}


// ==== 0x006DCDE0  sub_6DCDE0  this=-  sig=ida-proto ====
void sub_6DCDE0()
{
  MEMORY[0xB0E6B8] = 0.0174532925199433 * 45.0; /*0x6dcdec*/
}


// ==== 0x006DCE00  sub_6DCE00  this=-  sig=ida-proto ====
void sub_6DCE00()
{
  MEMORY[0xB0E690] = 0.0174532925199433 * 60.0; /*0x6dce0c*/
}


// ==== 0x006DCE20  sub_6DCE20  this=-  sig=ida-proto ====
void sub_6DCE20()
{
  MEMORY[0xB0E650] = 0.0174532925199433 * 90.0; /*0x6dce2c*/
}


// ==== 0x006DCE40  sub_6DCE40  this=-  sig=ida-proto ====
__int64 sub_6DCE40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0E650] - MEMORY[0xB0E690]); /*0x6dce52*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0E688] * 0.5); /*0x6dce66*/
  MEMORY[0xB0E6E0] = result; /*0x6dce6b*/
  return result; /*0x6dce70*/
}


// ==== 0x006DCE80  sub_6DCE80  this=-  sig=ida-proto ====
void sub_6DCE80()
{
  MEMORY[0xB0E698] = Math::ArcTan((double)MEMORY[0xB0E6E0] * 0.00390625); /*0x6dce97*/
}


// ==== 0x006DCEB0  sub_6DCEB0  this=-  sig=ida-proto ====
void sub_6DCEB0()
{
  MEMORY[0xB0E6B0] = Math::ArcTan((double)(2 * MEMORY[0xB0E6E0]) / MEMORY[0xB0E688]); /*0x6dced2*/
}


// ==== 0x006DCEE0  sub_6DCEE0  this=-  sig=ida-proto ====
__int64 sub_6DCEE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0E6E0]) + 0.5); /*0x6dcefb*/
  MEMORY[0xB0E6D4] = result; /*0x6dcf00*/
  return result; /*0x6dcf06*/
}


// ==== 0x006DCF10  sub_6DCF10  this=-  sig=ida-proto ====
int sub_6DCF10()
{
  MEMORY[0xB0E680] = 0; /*0x6dcf12*/
  return 0; /*0x6dcf1e*/
}


// ==== 0x006DCF20  sub_6DCF20  this=-  sig=ida-proto ====
int sub_6DCF20()
{
  MEMORY[0xB0E6A0] = 0; /*0x6dcf22*/
  MEMORY[0xB0E6A4] = 0; /*0x6dcf27*/
  MEMORY[0xB0E6A8] = 0; /*0x6dcf2c*/
  return 0; /*0x6dcf31*/
}


// ==== 0x006DCF40  sub_6DCF40  this=-  sig=ida-proto ====
int sub_6DCF40()
{
  MEMORY[0xB0E6D0] = 0; /*0x6dcf45*/
  MEMORY[0xB0E6C8] = 128; /*0x6dcf4f*/
  MEMORY[0xB0E6CC] = 128; /*0x6dcf54*/
  return 128; /*0x6dcf59*/
}


// ==== 0x006DCF60  sub_6DCF60  this=-  sig=ida-proto ====
int sub_6DCF60()
{
  MEMORY[0xB0E670] = 0; /*0x6dcf62*/
  MEMORY[0xB0E674] = 0; /*0x6dcf67*/
  MEMORY[0xB0E678] = 0; /*0x6dcf6c*/
  MEMORY[0xB0E67C] = 0; /*0x6dcf71*/
  return 0; /*0x6dcf76*/
}


// ==== 0x006DCF80  sub_6DCF80  this=-  sig=ida-proto ====
int sub_6DCF80()
{
  MEMORY[0xB0E65C] = 0; /*0x6dcf87*/
  MEMORY[0xB0E660] = 0; /*0x6dcf8c*/
  MEMORY[0xB0E664] = 1; /*0x6dcf91*/
  MEMORY[0xB0E665] = 0; /*0x6dcf98*/
  MEMORY[0xB0E658] = (int)&off_7F43D0; /*0x6dcf9d*/
  MEMORY[0xB0E66C] = 10; /*0x6dcfa7*/
  MEMORY[0xB0E668] = 0; /*0x6dcfb1*/
  return atexit(sub_6DCFC0); /*0x6dcfbc*/
}


// ==== 0x006DCFC0  sub_6DCFC0  this=-  sig=ida-proto ====
void __cdecl sub_6DCFC0()
{
  MEMORY[0xB0E658] = (int)&vt_VectorClass_TActionClass; /*0x6dcfc8*/
  if ( MEMORY[0xB0E65C] && MEMORY[0xB0E665] ) /*0x6dcfdc*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0E65C]); /*0x6dcfdf*/
    MEMORY[0xB0E65C] = 0; /*0x6dcfe7*/
  }
  MEMORY[0xB0E665] = 0; /*0x6dcfed*/
  MEMORY[0xB0E660] = 0; /*0x6dcff3*/
}


// ==== 0x006DD000  TActionClass::ctor  this=TActionClass  sig=csp ====
int __thiscall sub_6DD000(int this)
{
  int v2; // ecx
  char v3; // al
  int v4; // eax
  _DWORD *v5; // edx
  int v6; // eax
  int v7; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6dd004*/
  *(_DWORD *)(this + 36) = -1; /*0x6dd00b*/
  *(_DWORD *)(this + 40) = 0; /*0x6dd012*/
  *(_DWORD *)(this + 44) = 0; /*0x6dd015*/
  *(_DWORD *)(this + 48) = 0; /*0x6dd018*/
  *(_DWORD *)(this + 52) = 0; /*0x6dd01b*/
  *(_DWORD *)(this + 56) = 0; /*0x6dd01e*/
  *(_DWORD *)(this + 60) = 0; /*0x6dd021*/
  *(_DWORD *)(this + 64) = 0; /*0x6dd024*/
  *(_DWORD *)(this + 68) = 0; /*0x6dd027*/
  *(_DWORD *)(this + 72) = 0; /*0x6dd02a*/
  *(_DWORD *)(this + 76) = 0; /*0x6dd02d*/
  *(_DWORD *)(this + 80) = 0; /*0x6dd030*/
  *(_BYTE *)(this + 84) = 0; /*0x6dd033*/
  *(_DWORD *)this = &TActionClass::`vftable'; /*0x6dd036*/
  *(_DWORD *)(this + 4) = &TActionClass::`vftable'; /*0x6dd03c*/
  *(_DWORD *)(this + 8) = &TActionClass::`vftable'; /*0x6dd043*/
  *(_DWORD *)(this + 12) = &vt_TActionClass; /*0x6dd04a*/
  v2 = MEMORY[0xB0E668]; /*0x6dd051*/
  if ( MEMORY[0xB0E668] < MEMORY[0xB0E660] /*0x6dd08f*/
    || (MEMORY[0xB0E665] || !MEMORY[0xB0E660])
    && MEMORY[0xB0E66C] > 0
    && (v3 = (*(int (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0E658] + 8))(
               &MEMORY[0xB0E658],
               MEMORY[0xB0E660] + MEMORY[0xB0E66C],
               0),
        v2 = MEMORY[0xB0E668],
        v3) )
  {
    MEMORY[0xB0E668] = v2 + 1; /*0x6dd094*/
    *((_DWORD *)MEMORY[0xB0E65C] + v2) = this; /*0x6dd0a0*/
    v2 = MEMORY[0xB0E668]; /*0x6dd0a3*/
  }
  v4 = 0; /*0x6dd0a9*/
  if ( v2 <= 0 ) /*0x6dd0ad*/
  {
LABEL_11:
    v4 = -1; /*0x6dd0c1*/
  }
  else
  {
    v5 = MEMORY[0xB0E65C]; /*0x6dd0af*/
    while ( *v5 != this ) /*0x6dd0b7*/
    {
      ++v4; /*0x6dd0b9*/
      ++v5; /*0x6dd0ba*/
      if ( v4 >= v2 ) /*0x6dd0bf*/
        goto LABEL_11; /*0x6dd0bf*/
    }
  }
  *(_DWORD *)(this + 36) = v4; /*0x6dd0c4*/
  if ( MEMORY[0xB0F680] < MEMORY[0xB0F678] /*0x6dd0fb*/
    || (MEMORY[0xB0F67D] || !MEMORY[0xB0F678])
    && MEMORY[0xB0F684] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F670] + 8))(
         &MEMORY[0xB0F670],
         MEMORY[0xB0F678] + MEMORY[0xB0F684],
         0) )
  {
    v6 = MEMORY[0xB0F680]++; /*0x6dd108*/
    *((_DWORD *)MEMORY[0xB0F674] + v6) = this; /*0x6dd117*/
  }
  if ( MEMORY[0xB0F668] < MEMORY[0xB0F660] /*0x6dd14e*/
    || (MEMORY[0xB0F665] || !MEMORY[0xB0F660])
    && MEMORY[0xB0F66C] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F658] + 8))(
         &MEMORY[0xB0F658],
         MEMORY[0xB0F660] + MEMORY[0xB0F66C],
         0) )
  {
    v7 = MEMORY[0xB0F668]++; /*0x6dd15b*/
    *((_DWORD *)MEMORY[0xB0F65C] + v7) = this; /*0x6dd16a*/
  }
  *(_BYTE *)(this + 109) = 0; /*0x6dd16d*/
  *(_DWORD *)(this + 144) = 0; /*0x6dd170*/
  return this; /*0x6dd178*/
}


// ==== 0x006DD2C0  TActionClass::ExecuteAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::_vt10(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int result; // eax

  v3 = this->TActionClass_field_28; /*0x6dd2c0*/
  if ( v3 == a2 ) /*0x6dd2c9*/
    this->TActionClass_field_28 = *(_DWORD *)(v3 + 40); /*0x6dd2ce*/
  result = 0; /*0x6dd2d5*/
  if ( this->TActionClass_field_30 == a2 ) /*0x6dd2d9*/
    this->TActionClass_field_30 = 0; /*0x6dd2db*/
  if ( this->TActionClass_field_50 == a2 ) /*0x6dd2e1*/
    this->TActionClass_field_50 = 0; /*0x6dd2e3*/
  if ( this->TActionClass_field_4C == a2 ) /*0x6dd2ec*/
    this->TActionClass_field_4C = 0; /*0x6dd2ee*/
  return result; /*0x6dd2f1*/
}


// ==== 0x006DD300  ScriptAction::Serialize  this=TActionClass  sig=csp ====
int __thiscall SerializeScriptAction(int this, char *Buffer)
{
  int v3; // eax
  int v4; // ebx
  const char *v5; // ebp
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // eax
  char *v10; // edx
  const char *v12; // eax
  const char *v13; // eax
  int v14; // [esp+Ch] [ebp-Ch]
  int v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]
  char *Buffera; // [esp+1Ch] [ebp+4h]

  v3 = ScriptAction::GetActionTypeInfo(*(_DWORD *)(this + 44)); /*0x6dd30b*/
  v4 = 0; /*0x6dd316*/
  v5 = 0; /*0x6dd318*/
  v14 = *(_DWORD *)(this + 144); /*0x6dd31d*/
  v16 = 0; /*0x6dd321*/
  v15 = 0; /*0x6dd325*/
  switch ( v3 ) /*0x6dd329*/
  {
    case '/': /*0x6dd329*/
      v4 = 9; /*0x6dd32b*/
      v5 = (const char *)(this + 84); /*0x6dd330*/
      goto LABEL_33; /*0x6dd333*/
    case '.': /*0x6dd329*/
      v4 = 11; /*0x6dd340*/
      v16 = *(_DWORD *)(this + 144); /*0x6dd345*/
      v15 = *(_DWORD *)(this + 72); /*0x6dd349*/
      goto LABEL_33; /*0x6dd34d*/
    case '+': /*0x6dd329*/
      v4 = 9; /*0x6dd357*/
      v5 = (const char *)(this + 84); /*0x6dd35c*/
      goto LABEL_33; /*0x6dd35f*/
    case '-': /*0x6dd329*/
      v4 = 10; /*0x6dd369*/
      v5 = (const char *)(this + 84); /*0x6dd36e*/
      goto LABEL_33; /*0x6dd371*/
  }
  v6 = *(_DWORD *)(this + 48); /*0x6dd376*/
  if ( v6 ) /*0x6dd37b*/
  {
    if ( v3 == 40 ) /*0x6dd380*/
    {
      v4 = 5; /*0x6dd388*/
      v14 = *(_DWORD *)(v6 + 152); /*0x6dd38d*/
      v5 = (const char *)(v6 + 36); /*0x6dd391*/
      goto LABEL_33; /*0x6dd394*/
    }
    if ( v3 == 12 || v3 == 34 ) /*0x6dd3a5*/
    {
      v4 = 1; /*0x6dd3ad*/
      v14 = *(_DWORD *)(v6 + 152); /*0x6dd3b2*/
      v5 = (const char *)(v6 + 36); /*0x6dd3b6*/
      goto LABEL_33; /*0x6dd3b9*/
    }
  }
  v7 = *(_DWORD *)(this + 80); /*0x6dd3be*/
  if ( v7 && v3 == 11 ) /*0x6dd3c8*/
  {
    v4 = 2; /*0x6dd3d0*/
    v14 = *(_DWORD *)(v7 + 152); /*0x6dd3d5*/
    v5 = (const char *)(v7 + 36); /*0x6dd3d9*/
    goto LABEL_33; /*0x6dd3dc*/
  }
  v8 = *(_DWORD *)(this + 76); /*0x6dd3de*/
  if ( v8 && v3 == 26 ) /*0x6dd3e8*/
  {
    v4 = 3; /*0x6dd3f0*/
    v14 = *(_DWORD *)(v8 + 152); /*0x6dd3f5*/
    v5 = (const char *)(v8 + 36); /*0x6dd3f9*/
    goto LABEL_33; /*0x6dd3fc*/
  }
  if ( v3 == 39 ) /*0x6dd401*/
  {
    v5 = (const char *)(this + 109); /*0x6dd406*/
    v4 = 4; /*0x6dd40b*/
    if ( !*(_BYTE *)(this + 109) || this == -109 ) /*0x6dd414*/
      v5 = MEMORY[0x842BF4]; /*0x6dd416*/
  }
  else
  {
    switch ( v3 ) /*0x6dd420*/
    {
      case 4: /*0x6dd420*/
        v4 = 6; /*0x6dd422*/
        v9 = Team_Helper_752460(); /*0x6dd427*/
        break;
      case 3: /*0x6dd420*/
      case 38: /*0x6dd420*/
        v4 = 7; /*0x6dd44f*/
        v9 = VocClass::GetSampleNameByIndex(); /*0x6dd454*/
        break;
      case 1: /*0x6dd420*/
        v4 = 8; /*0x6dd443*/
        v9 = ScriptAction::GetArgumentString(*(_DWORD *)(this + 144)); /*0x6dd448*/
        break;
      default:
        goto LABEL_33; /*0x6dd43b*/
    }
    v5 = (const char *)v9; /*0x6dd459*/
  }
LABEL_33:
  v10 = &Buffer[strlen(Buffer)]; /*0x6dd45b*/
  Buffera = v10; /*0x6dd472*/
  switch ( v4 ) /*0x6dd476*/
  {
    case 11: /*0x6dd476*/
      return sprintf( /*0x6dd49d*/
               v10,
               MEMORY[0x842BDC],
               *(_DWORD *)(this + 44),
               11,
               v16,
               *(_DWORD *)(this + 52),
               *(_DWORD *)(this + 56),
               *(_DWORD *)(this + 60),
               *(_DWORD *)(this + 64),
               v15);
    case 10: /*0x6dd476*/
      v12 = (const char *)Waypoint::To_String(*(_DWORD *)(this + 68)); /*0x6dd4b6*/
      return sprintf( /*0x6dd4dc*/
               Buffera,
               MEMORY[0x842BC4],
               *(_DWORD *)(this + 44),
               10,
               v5,
               *(_DWORD *)(this + 52),
               *(_DWORD *)(this + 56),
               *(_DWORD *)(this + 60),
               *(_DWORD *)(this + 64),
               v12);
    case 5: /*0x6dd476*/
    case 9: /*0x6dd476*/
      return sprintf( /*0x6dd594*/
               v10,
               MEMORY[0x842B94],
               *(_DWORD *)(this + 44),
               v4,
               v5,
               *(_DWORD *)(this + 52),
               *(_DWORD *)(this + 56),
               *(_DWORD *)(this + 60),
               *(_DWORD *)(this + 64),
               *(_DWORD *)(this + 144));
    default:
      v13 = (const char *)Waypoint::To_String(*(_DWORD *)(this + 68)); /*0x6dd4fe*/
      if ( v4 ) /*0x6dd4fc*/
        return sprintf( /*0x6dd524*/
                 Buffera,
                 MEMORY[0x842BC4],
                 *(_DWORD *)(this + 44),
                 v4,
                 v5,
                 *(_DWORD *)(this + 52),
                 *(_DWORD *)(this + 56),
                 *(_DWORD *)(this + 60),
                 *(_DWORD *)(this + 64),
                 v13);
      else
        return sprintf( /*0x6dd560*/
                 Buffera,
                 MEMORY[0x842BAC],
                 *(_DWORD *)(this + 44),
                 0,
                 v14,
                 *(_DWORD *)(this + 52),
                 *(_DWORD *)(this + 56),
                 *(_DWORD *)(this + 60),
                 *(_DWORD *)(this + 64),
                 v13);
  }
}


// ==== 0x006DD5B0  ScriptAction::ParseScriptActionParams  this=ScriptAction  sig=csp ====
const char *__thiscall ParseScriptActionParams(int this)
{
  char *v2; // eax
  char *v3; // eax
  int v4; // ebx
  char *v5; // esi
  int v6; // eax
  const char *v7; // eax
  char i; // cl
  unsigned int v9; // kr10_4
  unsigned int v10; // ecx
  char *v11; // eax
  char *v12; // eax
  char *v13; // eax
  char *v14; // eax
  const char *result; // eax
  char Destination[24]; // [esp+14h] [ebp-1Ch] BYREF
  char v17; // [esp+2Ch] [ebp-4h]

  *(_DWORD *)(this + 144) = 0; /*0x6dd5c1*/
  v2 = strtok(0, MEMORY[0x817F70]); /*0x6dd5c7*/
  *(_DWORD *)(this + 44) = atoi(v2); /*0x6dd5d8*/
  v3 = strtok(0, MEMORY[0x817F70]); /*0x6dd5db*/
  v4 = atoi(v3); /*0x6dd5e6*/
  v5 = strtok(0, MEMORY[0x817F70]); /*0x6dd5f7*/
  v6 = atoi(v5); /*0x6dd5fa*/
  switch ( v4 ) /*0x6dd60d*/
  {
    case 0: /*0x6dd60d*/
    case 11: /*0x6dd60d*/
      *(_DWORD *)(this + 144) = v6; /*0x6dd614*/
      break; /*0x6dd61a*/
    case 1: /*0x6dd60d*/
    case 5: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd622*/
      {
        *(_DWORD *)(this + 48) = 0; /*0x6dd624*/
      }
      else if ( strlen(v5) >= 3 ) /*0x6dd63b*/
      {
        *(_DWORD *)(this + 48) = TechnoClass::Create(v5); /*0x6dd654*/
      }
      else
      {
        *(_DWORD *)(this + 48) = *((_DWORD *)MEMORY[0xA8ECA4] + v6); /*0x6dd645*/
      }
      break; /*0x6dd627*/
    case 2: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd65f*/
      {
        *(_DWORD *)(this + 80) = 0; /*0x6dd661*/
      }
      else if ( strlen(v5) >= 3 ) /*0x6dd678*/
      {
        *(_DWORD *)(this + 80) = TagTypeClass::FindOrCreateTriggerType(v5); /*0x6dd691*/
      }
      else
      {
        *(_DWORD *)(this + 80) = *((_DWORD *)unk_8B417C + v6); /*0x6dd682*/
      }
      break; /*0x6dd664*/
    case 3: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd69c*/
      {
        *(_DWORD *)(this + 76) = 0; /*0x6dd69e*/
      }
      else if ( strlen(v5) >= 3 ) /*0x6dd6b5*/
      {
        *(_DWORD *)(this + 76) = TagTypeClass::FindOrCreate(v5); /*0x6dd6cb*/
      }
      else
      {
        *(_DWORD *)(this + 76) = *((_DWORD *)MEMORY[0xB0E784] + v6); /*0x6dd6bf*/
      }
      break; /*0x6dd6a1*/
    case 4: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd6d3*/
      {
        *(_BYTE *)(this + 109) = 0; /*0x6dd6d5*/
      }
      else
      {
        v7 = v5; /*0x6dd6de*/
        *(_BYTE *)(this + 109) = 0; /*0x6dd6e2*/
        if ( v5 ) /*0x6dd6e5*/
        {
          for ( i = *v5; i; i = *++v7 ) /*0x6dd6e7*/
          {
            if ( (unsigned __int8)i > 0x20u ) /*0x6dd6f1*/
              break; /*0x6dd6f1*/
          }
          if ( *v7 ) /*0x6dd6fb*/
          {
            strncpy((char *)(this + 109), v7, 0x1Fu); /*0x6dd704*/
            *(_BYTE *)(this + 140) = 0; /*0x6dd711*/
            v9 = strlen((const char *)(this + 109)) + 1; /*0x6dd718*/
            v10 = v9 - 1; /*0x6dd71c*/
            if ( v9 != 1 ) /*0x6dd71d*/
            {
              do /*0x6dd726*/
              {
                if ( *(_BYTE *)(v10 + this + 108) > 0x20u ) /*0x6dd723*/
                  break; /*0x6dd723*/
                --v10; /*0x6dd725*/
              }
              while ( v10 ); /*0x6dd726*/
            }
            *(_BYTE *)(v10 + this + 109) = 0; /*0x6dd728*/
          }
        }
      }
      break; /*0x6dd6d9*/
    case 6: /*0x6dd60d*/
      *(_DWORD *)(this + 144) = VocClass::FindByName(v5); /*0x6dd7c3*/
      break; /*0x6dd7c9*/
    case 7: /*0x6dd60d*/
      *(_DWORD *)(this + 144) = VocClass::FindIndex(v5); /*0x6dd7d5*/
      break; /*0x6dd7db*/
    case 8: /*0x6dd60d*/
      *(_DWORD *)(this + 144) = StringList::Find(&g_BuildingTypeClass_Count, v5); /*0x6dd7eb*/
      break; /*0x6dd7f1*/
    case 9: /*0x6dd60d*/
    case 10: /*0x6dd60d*/
      if ( v5 ) /*0x6dd7f8*/
      {
        strncpy(Destination, v5, 0x18u); /*0x6dd809*/
        v17 = 0; /*0x6dd811*/
      }
      else
      {
        Destination[0] = 0; /*0x6dd7fa*/
      }
      if ( Destination != (char *)(this + 84) ) /*0x6dd81f*/
      {
        qmemcpy((void *)(this + 84), Destination, 0x18u); /*0x6dd82e*/
        *(_BYTE *)(this + 108) = v17; /*0x6dd830*/
      }
      break; /*0x6dd831*/
    default:
      break;
  }
  v11 = strtok(0, MEMORY[0x817F70]); /*0x6dd731*/
  *(_DWORD *)(this + 52) = atoi(v11); /*0x6dd74a*/
  v12 = strtok(0, MEMORY[0x817F70]); /*0x6dd74d*/
  *(_DWORD *)(this + 56) = atoi(v12); /*0x6dd75f*/
  v13 = strtok(0, MEMORY[0x817F70]); /*0x6dd762*/
  *(_DWORD *)(this + 60) = atoi(v13); /*0x6dd774*/
  v14 = strtok(0, MEMORY[0x817F70]); /*0x6dd777*/
  *(_DWORD *)(this + 64) = atoi(v14); /*0x6dd789*/
  result = strtok(0, MEMORY[0x817F70]); /*0x6dd78c*/
  if ( result ) /*0x6dd796*/
  {
    if ( v4 == 5 || v4 == 9 ) /*0x6dd839*/
    {
      result = (const char *)atoi(result); /*0x6dd7a6*/
      *(_DWORD *)(this + 144) = result; /*0x6dd7ae*/
    }
    else if ( v4 == 11 ) /*0x6dd855*/
    {
      result = (const char *)atoi(result); /*0x6dd858*/
      *(_DWORD *)(this + 72) = result; /*0x6dd860*/
    }
    else
    {
      result = (const char *)String::To_Waypoint(result); /*0x6dd86d*/
      *(_DWORD *)(this + 68) = result; /*0x6dd872*/
    }
  }
  return result; /*0x6dd7b4*/
}


// ==== 0x006DD8B0  TerrainClass::ProcessUpdate  this=int  sig=csp ====
char __userpurge TerrainClass::ProcessUpdate@<al>(
        int a1@<ecx>,
        _DWORD *a2@<edi>,
        AbstractClass *aP1,
        _UNKNOWN **a4,
        IUnknown *a5,
        AbstractClass *aP4)
{
  char result; // al
  _UNKNOWN **v9; // ecx
  int v10; // ebp
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int v13; // esi
  char v14; // bl
  int n; // edi
  int v16; // esi
  _DWORD *v17; // ecx
  int v18; // edi
  int v19; // esi
  int v20; // edi
  int v21; // esi
  int ebx47; // ebx
  _DWORD *v23; // edi
  IUnknown *v22; // ecx
  int v25; // edi
  int *WorldCoords; // eax
  int v27; // edi
  int *v28; // eax
  int v29; // edi
  int *v30; // eax
  char v31; // bl
  int j; // edi
  int v33; // esi
  _DWORD *v34; // ecx
  char bl75; // bl
  int k; // edi
  BuildingClass *v35; // esi
  _DWORD *attachedTag; // ecx
  char bl85; // bl
  int m; // edi
  BuildingClass *v39; // esi
  _DWORD *v42; // ecx
  int v43; // eax
  wchar_t *v44; // esi
  int v45; // eax
  unsigned int PlayerColorScheme; // edi
  wchar_t *StringCSF; // eax
  HouseClass *v48; // eax
  int v49; // esi
  IUnknown *eax105; // eax
  int v51; // esi
  IUnknown *v50; // ecx
  int v53; // eax
  IUnknown *v52; // edi
  int i; // eax
  TerrainTypeClass *v54; // esi
  int v57; // eax
  int v58; // eax
  int v59; // edx
  int v60; // eax
  int ecx134; // ecx
  int v62; // ecx
  ScenarioClass *v61; // eax
  char *v64; // esi
  int v65; // edi
  int v66; // ebp
  AbstractClass *v67; // ebx
  int v68; // eax
  _DWORD *v69; // eax
  CellStruct **v70; // eax
  _DWORD *v71; // eax
  IUnknown *Status; // eax
  int Owner; // eax
  int v74; // eax
  int v75; // eax
  int v76; // esi
  void *v77; // esi
  int v78; // esi
  int v79; // ecx
  int v80; // edx
  int v81; // eax
  CellStruct **v82; // eax
  int v83; // eax
  char v84; // bl
  int v85; // edi
  _DWORD *ecx213; // ecx
  int v87; // edi
  int v88; // ecx
  int v89; // ebx
  int v90; // edi
  CCINIClass *v86; // eax
  int v92; // ecx
  int v93; // edi
  int v94; // ecx
  int v95; // edi
  int v96; // ecx
  IUnknown **Waypoint_Location; // eax
  int v98; // edx
  int v99; // eax
  int v100; // eax
  CellStruct **v101; // eax
  int v102; // eax
  int v103; // edi
  _BYTE *v104; // esi
  _WORD *v105; // eax
  IUnknown **v106; // eax
  void *v107; // ecx
  void *v108; // ecx
  int FirstInstance; // eax
  int v110; // edx
  int v111; // eax
  _DWORD *ecx293; // ecx
  int edx294; // edx
  IUnknown **v114; // eax
  char v115; // bl
  int v116; // edi
  int v117; // esi
  _DWORD *v118; // ecx
  CellStruct **v119; // eax
  AnimClass *v120; // eax
  int v121; // [esp-8h] [ebp-258h]
  char v122; // [esp-4h] [ebp-254h]
  int v123; // [esp+0h] [ebp-250h]
  _DWORD *v124; // [esp+4h] [ebp-24Ch]
  int v125; // [esp+8h] [ebp-248h]
  IUnknown *v112; // [esp+10h] [ebp-240h] BYREF
  CellStruct *v113; // [esp+14h] [ebp-23Ch] BYREF
  CellStruct *v128; // [esp+18h] [ebp-238h]
  CellStruct *GroundHeight; // [esp+1Ch] [ebp-234h]
  rc_ptr_base v130; // [esp+20h] [ebp-230h] BYREF
  CellStruct *v131; // [esp+24h] [ebp-22Ch] BYREF
  int v132; // [esp+28h] [ebp-228h]
  int v133; // [esp+2Ch] [ebp-224h]
  char v134[4]; // [esp+30h] [ebp-220h] BYREF
  _DWORD v135[3]; // [esp+34h] [ebp-21Ch] BYREF
  char Destination[32]; // [esp+40h] [ebp-210h] BYREF
  char v137[32]; // [esp+60h] [ebp-1F0h] BYREF
  char v138[32]; // [esp+80h] [ebp-1D0h] BYREF
  char v139[32]; // [esp+A0h] [ebp-1B0h] BYREF
  AbstractClass aP0[11]; // [esp+C0h] [ebp-190h] BYREF

  result = 1;
  v9 = a4;
  v10 = 0;
  if ( a4 && !*((_BYTE *)a4 + 144) )
    v9 = 0;
  switch ( *(_DWORD *)(a1 + 44) )
  {
    case 1:
      v22 = (IUnknown *)HouseClass_Player.field_0;
      v122 = 0;
      if ( *(_DWORD *)(a1 + 144) != *(_DWORD *)(*(_DWORD *)(HouseClass_Player.field_0 + 52) + 184) )
        goto LABEL_60;
      goto LABEL_162;
    case 2:
      v22 = (IUnknown *)HouseClass_Player.field_0;
      v122 = 0;
      if ( *(_DWORD *)(a1 + 144) == *(_DWORD *)(*(_DWORD *)(HouseClass_Player.field_0 + 52) + 184) )
        goto LABEL_60;
LABEL_162:
      HouseClass::CheckWinCondition((int)v22, 0);
      return 1;
    case 3:
      Owner = ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !Owner )
        return 0;
      *(_BYTE *)(Owner + 494) = 1;
      return 1;
    case 4:
      ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752];
      v76 = *(_DWORD *)(a1 + 48);
      if ( v76 )
        TeamClass::CreateOneOf(v76, 0);
      --*(_DWORD *)&HouseClass_Player.__pad_5568[21752];
      return 1;
    case 5:
      v77 = *(void **)(a1 + 48);
      if ( !v77 )
        return 1;
      TeamTypeClass::DestroyAllInstances(v77);
      return 1;
    case 6:
      v81 = ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !v81 )
        return 0;
      (*(void (__stdcall **)(int))(*(_DWORD *)(v81 + 36) + 56))(v81 + 36);
      return 1;
    case 7:
      v78 = *(_DWORD *)(a1 + 48);
      if ( !v78 )
        return 0;
      return DeployScriptActionPlane(v78, -1);
    case 8:
      return TActionClass::executeRetreatAction((int *)a1, aP1, (int)v9, (int)a5, aP4);
    case 9:
      v74 = ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !v74 )
        return 0;
      *(_DWORD *)(v74 + 592) = 4;
      return 1;
    case 0xA:
      MouseClass::LoadCursors();
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 20))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
      ToggleDisplayMode(0);
      Movie::PlayWrapper(*(_DWORD *)(a1 + 144), 0, (int)a2, 1, 1, 1);
      ToggleDisplayMode(1);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 24))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
      LoadingScreen::FreeResources3();
      return 1;
    case 0xB:
      v43 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13496);
      v44 = *(_BYTE *)(a1 + 109) != 0 ? (wchar_t *)(a1 + 109) : 0;
      if ( v43 )
        v45 = v43 != 1 ? 5 : 1;
      else
        v45 = 2;
      PlayerColorScheme = SessionClass::GetPlayerColorScheme((ObjectClass *)v45);
      if ( !v44 )
        return 1;
      v121 = Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5312) * 900.0);
      StringCSF = GetStringCSF(v44, 0, &stru_830620.__pad_579C[52796], 1766);
      MessageListClass::AddMessage(
        &HouseClass_Player.__pad_5568[10668],
        0,
        0,
        (CellStruct *)StringCSF,
        PlayerColorScheme,
        (IUnknown *)0x4046,
        v121,
        0);
      return 1;
    case 0xC:
      if ( !*(_DWORD *)(a1 + 80) )
        return 1;
      v87 = *(_DWORD *)&HouseClass_Player.__pad_5568[22596] - 1;
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[22596] - 1 < 0 )
        return 1;
      do
      {
        v88 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22584] + 4 * v87);
        if ( *(_DWORD *)(v88 + 36) == *(_DWORD *)(a1 + 80) )
          TeamClass::AddToBuildQueue((_BYTE *)v88);
        --v87;
      }
      while ( v87 >= 0 );
      return 1;
    case 0xD:
      v75 = ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !v75 )
        return 0;
      *(_BYTE *)(v75 + 495) = 1;
      return 1;
    case 0xE:
      return TActionClass::executeEnterAction((_DWORD *)a1, (int)aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x10:
      if ( *(_BYTE *)(HouseClass_Player.field_0 + 576) )
        return 1;
      *(_BYTE *)(HouseClass_Player.field_0 + 576) = 1;
      LayerClass::CellIteratorReset(&stru_87C374.__pad_14B0[8132]);
      for ( i = LayerClass::CellIteratorNext(&stru_87C374.__pad_14B0[8132]);
            i;
            i = LayerClass::CellIteratorNext(&stru_87C374.__pad_14B0[8132]) )
      {
        Conditions::CheckResult(i + 36, (IUnknown *)HouseClass_Player.field_0);
      }
      MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 1);
      return 1;
    case 0x11:
      return TActionClass::RevealWaypointArea((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x12:
      return TActionClass::RevealTileTypeAtWaypoint((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x13:
      PlayVocClass(*(_DWORD *)(a1 + 144), 0x2000, 1.0, 0);
      return 1;
    case 0x14:
      Theme::QueueSong((int)&g_BuildingTypeClass_Count, *(IUnknown **)(a1 + 144));
      return 1;
    case 0x15:
      UpdateThemeManager(*(_DWORD *)(a1 + 144), 2, -1);
      return 1;
    case 0x16:
      if ( !*(_DWORD *)(a1 + 80) )
        return 1;
      v93 = 0;
      if ( *(int *)&HouseClass_Player.__pad_5568[22596] <= 0 )
        return 1;
      do
      {
        v94 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22584] + 4 * v93);
        if ( *(_DWORD *)(v94 + 36) == *(_DWORD *)(a1 + 80) )
          BuildingClass::ExecuteTriggers(v94, 0, *(TriggerClass **)&stru_B05488.__pad_579C[14940]);
        ++v93;
      }
      while ( v93 < *(int *)&HouseClass_Player.__pad_5568[22596] );
      return 1;
    case 0x17:
      if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) != -1 )
        return 1;
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
      ObjectClass::PreDraw(&stru_87C374.__pad_14B0[8132]);
      return 1;
    case 0x18:
      v54 = (TerrainTypeClass *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584);
      if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) == -1 )
        return 1;
      *(_DWORD *)&v54->__pad_0[8] = CDTimerClass::TimeRemaining((int *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060]
                                                                      + 4584));
      *(_DWORD *)v54->__pad_0 = -1;
      ObjectClass::PreDraw(&stru_87C374.__pad_14B0[8132]);
      return 1;
    case 0x19:
      v57 = CDTimerClass::TimeRemaining((int *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584));
      Timer::Start(&v131, (DynamicVector *)(15 * *(_DWORD *)(a1 + 144) + v57));
      v58 = *(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584;
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) = v131;
      *(_DWORD *)(v58 + 4) = v132;
      *(_DWORD *)(v58 + 8) = v133;
      ObjectClass::PreDraw(&stru_87C374.__pad_14B0[8132]);
      return 1;
    case 0x1A:
      if ( CDTimerClass::TimeRemaining((int *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584)) > 15 * *(_DWORD *)(a1 + 144) )
      {
        v60 = CDTimerClass::TimeRemaining((int *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584));
        Timer::Start(&v113, (DynamicVector *)(v60 - 15 * *(_DWORD *)(a1 + 144)));
        ecx134 = *(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584;
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) = v113;
        *(_DWORD *)(ecx134 + 4) = v128;
        *(_DWORD *)(ecx134 + 8) = GroundHeight;
        ObjectClass::PreDraw(&stru_87C374.__pad_14B0[8132]);
      }
      else
      {
        Timer::Start(&v131, 0);
        v59 = *(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584;
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) = v131;
        *(_DWORD *)(v59 + 4) = v132;
        *(_DWORD *)(v59 + 8) = v133;
        ObjectClass::PreDraw(&stru_87C374.__pad_14B0[8132]);
      }
      return 1;
    case 0x1B:
      Timer::Start(&v131, (DynamicVector *)(15 * *(_DWORD *)(a1 + 144)));
      v62 = *(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584;
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) = v131;
      *(_DWORD *)(v62 + 4) = v132;
      *(_DWORD *)(v62 + 8) = v133;
      v61 = *(ScenarioClass **)&HouseClass_Player.__pad_5568[8060];
      if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) == -1 )
      {
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4584) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
        v61 = *(ScenarioClass **)&HouseClass_Player.__pad_5568[8060];
      }
      v61->missionTimer_text_csf = &stru_87C374.__pad_579C[23588];
      ScriptAction::CopyStringField(Destination, &stru_87C374.__pad_579C[33876]);
      ScriptAction::CopyStructField((void *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4600), v137, Destination);
      ObjectClass::PreDraw(&stru_87C374.__pad_14B0[8132]);
      return 1;
    case 0x1C:
      ScenarioClass::SetGlobalToByID(*(_BYTE **)&HouseClass_Player.__pad_5568[8060], *(_DWORD *)(a1 + 144), 1);
      return 1;
    case 0x1D:
      ScenarioClass::SetGlobalToByID(*(_BYTE **)&HouseClass_Player.__pad_5568[8060], *(_DWORD *)(a1 + 144), 0);
      return 1;
    case 0x1E:
      if ( !*(_BYTE *)(a1 + 144) )
      {
        HIBYTE(aP1[13].referenceCount) = 0;
        return 1;
      }
      HIBYTE(aP1[13].referenceCount) = 1;
      if ( aP1[2].nextArrayIndex > 0 )
      {
        v50 = *(IUnknown **)(**(_DWORD **)&aP1[2].__pad_0[12] + 156);
        v53 = *(_DWORD *)(**(_DWORD **)&aP1[2].__pad_0[12] + 160);
        v133 = *(_DWORD *)(**(_DWORD **)&aP1[2].__pad_0[12] + 164);
        v52 = *(IUnknown **)CellStruct::Set(&v130, (int)v50 / 256, v53 / 256);
        HouseClass::SetMapSeed(aP1, v52);
        aP1[620].NeedsSaveOrLink = v52;
      }
      if ( !*(_DWORD *)&aP1[619].__pad_0[8] )
      {
        HouseClass::SetPrimaryTechBuilding((int)aP1);
        return 1;
      }
      return 1;
    case 0x1F:
      MapClass::ProcessVisibilityFlags(&stru_87C374.__pad_14B0[8132]);
      return 1;
    case 0x20:
      return globalHelper_0E2050((int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x21:
      SuperClass::StartTimer(*(_DWORD *)(aP1[16].nextArrayIndex + 4 * *(_DWORD *)(a1 + 144)), (IUnknown *)1, 0, 0);
      if ( (AbstractClass *)HouseClass_Player.field_0 == aP1 )
        goto LABEL_157;
      return 1;
    case 0x22:
      SuperClass::StartTimer(*(_DWORD *)(aP1[16].nextArrayIndex + 4 * *(_DWORD *)(a1 + 144)), 0, 0, 0);
      *(_BYTE *)(*(_DWORD *)(aP1[16].nextArrayIndex + 4 * *(_DWORD *)(a1 + 144)) + 96) = 0;
      if ( (AbstractClass *)HouseClass_Player.field_0 != aP1 )
        return 1;
LABEL_157:
      SidebarClass::AddCameo((int *)&stru_87C374.__pad_14B0[8132], 31, *(AnimClass **)(a1 + 144));
      Status = (IUnknown *)HouseClass::GetStatus((IUnknown *)0x1F, 0);
      Sidebar::ActivateTab((int)&stru_87C374.__pad_14B0[8132], Status);
      return 1;
    case 0x23:
      if ( !aP1 )
        return 1;
      aP1[603].NeedsSaveOrLink = *(void **)(a1 + 144);
      return 1;
    case 0x24:
      return TActionClass::ConvertHouseUnits((_DWORD *)a1, (int)aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x25:
      v48 = (HouseClass *)ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      v49 = (int)v48;
      if ( !v48 )
        return 0;
      HouseClass::HandleAlliance((int)aP1, v48, 0);
      HouseClass::HandleAlliance(v49, (HouseClass *)aP1, 0);
      return 1;
    case 0x26:
      eax105 = (IUnknown *)ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      v51 = (int)eax105;
      if ( !eax105 )
        return 0;
      HouseClass::SetAlliance((int)aP1, eax105, 0);
      HouseClass::SetAlliance(v51, (IUnknown *)aP1, 0);
      return 1;
    case 0x27:
    case 0x5C:
    case 0x5D:
      return 1;
    case 0x28:
      return TActionClass::executeFollowAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x29:
      return TActionClass::executeEscortAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x2A:
      return TActionClass::CreateWeaponImpactAtWaypoint((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x2B:
      return TActionClass::executeLoadAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x2C:
      if ( LightningStorm::IsActive() )
        return 0;
      LightningStorm::Start(
        *(_DWORD *)(a1 + 144),
        *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6036),
        *(int *)&stru_B05488.__pad_579C[14940],
        0);
      return 1;
    case 0x2D:
      result = LightningStorm::IsActive();
      if ( result )
      {
        LightningStorm::End();
        return 1;
      }
      return result;
    case 0x2E:
      *(_DWORD *)&stru_87C374.__pad_14B0[12648] = 0;
      *(_DWORD *)&stru_87C374.__pad_14B0[12652] = 0;
      *(_DWORD *)&stru_87C374.__pad_14B0[12656] = -1;
      Mouse::SetBounds((int)&stru_87C374.__pad_14B0[8132], 0);
      BuildingClass::TogglePower2(&stru_87C374.__pad_14B0[8132], 0);
      BuildingClass::TogglePower(&stru_87C374.__pad_14B0[8132], 0);
      stru_87C374.__pad_14B0[12662] = 0;
      stru_87C374.__pad_14B0[12663] = 0;
      stru_87C374.__pad_14B0[12664] = 0;
      Scenario::ClearScreen();
      return 1;
    case 0x2F:
      UpdateMouse();
      return 1;
    case 0x30:
      v112 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player.__pad_5568[8060],
                            &v130,
                            *(_DWORD *)(a1 + 68));
      v82 = (CellStruct **)CoordStruct::Set2(&v131, (IUnknown *)&v112, 0);
      v113 = *v82;
      v128 = v82[1];
      GroundHeight = v82[2];
      GroundHeight = (CellStruct *)Cell::GetGroundHeight((IUnknown *)&v113);
      if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v112) + 80) & 0x100) != 0
        || (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v112) + 80) & 0x400) != 0 )
      {
        GroundHeight = (CellStruct *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[15024]);
      }
      TacticalClass::SetPosition(
        *(_DWORD **)&stru_87C374.__pad_579C[22548],
        (IUnknown *)&v113,
        *(AbstractClass **)(a1 + 144));
      return 1;
    case 0x31:
      v83 = *(_DWORD *)&stru_87C374.__pad_579C[22224] + 1360;
      *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 192) = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224]
                                                                               + 1360);
      *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 196) = *(_DWORD *)(v83 + 4);
      HouseClass_Player.__pad_5568[23272] = 1;
      Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
      Mouse::ReleaseCapture(&stru_87C374.__pad_14B0[8132]);
      MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 0);
      TacticalMap::Redraw(&stru_87C374.__pad_14B0[8132]);
      Sleep(0x3E8u);
      return 1;
    case 0x32:
      *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 192) = 0;
      *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 196) = 1072693248;
      Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]);
      HouseClass_Player.__pad_5568[23272] = *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13730);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
      MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 0);
      TacticalMap::Redraw(&stru_87C374.__pad_14B0[8132]);
      return 1;
    case 0x33:
      TActionClass::executeRepairAction(&stru_87C374.__pad_14B0[8132], (int)aP1);
      return 1;
    case 0x34:
      v84 = 0;
      if ( *(int *)&HouseClass_Player.__pad_5568[22684] > 0 )
      {
        do
        {
          v85 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672] + 4 * v10);
          if ( *(int *)(v85 + 108) > 0 )
          {
            if ( *(_BYTE *)(v85 + 144) )
            {
              if ( *(_BYTE *)(v85 + 116) )
              {
                if ( !*(_BYTE *)(v85 + 129) )
                {
                  if ( *(_BYTE *)(*(_DWORD *)(v85 + 1312) + 5451) )
                  {
                    if ( *(_DWORD *)(v85 + 1536) )
                    {
                      ecx213 = *(_DWORD **)(v85 + 52);
                      if ( ecx213 )
                      {
                        if ( LinkedList::Contains(ecx213, a5) )
                        {
                          BuildingLightClass::FindTarget(*(_DWORD **)(v85 + 1536), *(CCINIClass **)(a1 + 144));
                          v84 = 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          ++v10;
        }
        while ( v10 < *(int *)&HouseClass_Player.__pad_5568[22684] );
      }
      return v84;
    case 0x35:
      return TActionClass::executeUnloadAction((_DWORD *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x36:
      if ( !*(_DWORD *)(a1 + 80) )
        return 1;
      v95 = 0;
      if ( *(int *)&HouseClass_Player.__pad_5568[22596] <= 0 )
        return 1;
      do
      {
        v96 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22584] + 4 * v95);
        if ( *(_DWORD *)(v96 + 36) == *(_DWORD *)(a1 + 80) )
          TActionClass::executeDetonateAction((_BYTE *)v96);
        ++v95;
      }
      while ( v95 < *(int *)&HouseClass_Player.__pad_5568[22596] );
      return 1;
    case 0x37:
      Waypoint_Location = (IUnknown **)ScenarioClass::Get_Waypoint_Location(
                                         *(char **)&HouseClass_Player.__pad_5568[8060],
                                         &v130,
                                         *(_DWORD *)(a1 + 68));
      CreateTriggerClassIfFarEnough(*(IUnknown **)(a1 + 144), v98, *Waypoint_Location);
      return 1;
    case 0x38:
      ScenarioClass::SetLocalToByID(*(_BYTE **)&HouseClass_Player.__pad_5568[8060], *(_DWORD *)(a1 + 144), 1);
      return 1;
    case 0x39:
      ScenarioClass::SetLocalToByID(*(_BYTE **)&HouseClass_Player.__pad_5568[8060], *(_DWORD *)(a1 + 144), 0);
      return 1;
    case 0x3A:
      return TActionClass::SpawnMeteorShower((int *)a1, aP1, (int)v9, (int)a5, aP4);
    case 0x3B:
      v112 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player.__pad_5568[8060],
                            &v130,
                            *(_DWORD *)(a1 + 144));
      MapClass::TriggerEVA((IUnknown *)&v112);
      return 1;
    case 0x3C:
      v31 = 0;
      for ( j = 0; j < *(int *)&HouseClass_Player.__pad_5568[22684]; ++j )
      {
        v33 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672] + 4 * j);
        if ( *(_BYTE *)(v33 + 144) )
        {
          if ( *(_BYTE *)(v33 + 116) )
          {
            if ( !*(_BYTE *)(v33 + 129) )
            {
              v34 = *(_DWORD **)(v33 + 52);
              if ( v34 )
              {
                if ( LinkedList::Contains(v34, a5) )
                {
                  (*(void (__thiscall **)(int, int))(*(_DWORD *)v33 + 416))(v33, 1);
                  v31 = 1;
                }
              }
            }
          }
        }
      }
      return v31;
    case 0x3D:
      bl75 = 0;
      for ( k = 0; k < *(int *)&HouseClass_Player.__pad_5568[22684]; ++k )
      {
        v35 = *(BuildingClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672] + 4 * k);
        if ( v35->isAliveFlag )
        {
          if ( v35->isOnMap )
          {
            if ( !v35->inLimbo )
            {
              attachedTag = v35->attachedTag;
              if ( attachedTag )
              {
                if ( LinkedList::Contains(attachedTag, a5) && v35->HasPower )
                {
                  BuildingClass::PowerOff((int)v35);
                  bl75 = 1;
                }
              }
            }
          }
        }
      }
      return bl75;
    case 0x3E:
      bl85 = 0;
      for ( m = 0; m < *(int *)&HouseClass_Player.__pad_5568[22684]; ++m )
      {
        v39 = *(BuildingClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672] + 4 * m);
        if ( v39->isAliveFlag )
        {
          if ( v39->isOnMap )
          {
            if ( !v39->inLimbo )
            {
              v42 = v39->attachedTag;
              if ( v42 )
              {
                if ( LinkedList::Contains(v42, a5) && !v39->HasPower )
                {
                  BuildingClass::AnnounceReady((int)v39);
                  bl85 = 1;
                }
              }
            }
          }
        }
      }
      return bl85;
    case 0x3F:
      return PlayWaypointEffect((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x40:
      v25 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008);
      WorldCoords = Cell::GetWorldCoords(*(__int16 **)&HouseClass_Player.__pad_5568[8060], &v131, *(_DWORD *)(a1 + 144));
      CreateSmokeEffectAt(50, v25, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0);
      return 1;
    case 0x41:
      v27 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008);
      v28 = Cell::GetWorldCoords(*(__int16 **)&HouseClass_Player.__pad_5568[8060], &v131, *(_DWORD *)(a1 + 144));
      CreateSmokeEffectAt(100, v27, *v28, v28[1], v28[2], 0, 0);
      return 1;
    case 0x42:
      v29 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008);
      v30 = Cell::GetWorldCoords(*(__int16 **)&HouseClass_Player.__pad_5568[8060], &v131, *(_DWORD *)(a1 + 144));
      CreateSmokeEffectAt(300, v29, *v30, v30[1], v30[2], 0, 0);
      return 1;
    case 0x43:
      HouseClass::CheckWinCondition(HouseClass_Player.field_0, 1);
      return 1;
    case 0x44:
      v22 = (IUnknown *)HouseClass_Player.field_0;
      v122 = 1;
LABEL_60:
      HouseClass::CheckDefeat((int)v22, v122);
      return 1;
    case 0x45:
      TActionClass::executeBuildAction(HouseClass_Player.field_0);
      return 1;
    case 0x46:
      if ( !*(_DWORD *)(a1 + 76) )
        return 1;
      v89 = *(_DWORD *)&stru_B05488.__pad_579C[15116];
      v90 = 0;
      if ( *(int *)&stru_B05488.__pad_579C[15116] <= 0 )
        return 1;
      v86 = *(CCINIClass **)&stru_B05488.__pad_579C[15104];
      do
      {
        if ( *(_DWORD *)(*(_DWORD *)&v86->__pad_0[4 * v90] + 36) == *(_DWORD *)(a1 + 76) )
        {
          v92 = *(_DWORD *)&v86->__pad_0[4 * v90];
          if ( v92 )
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v92 + 32))(v92, 1);
            v86 = *(CCINIClass **)&stru_B05488.__pad_579C[15104];
          }
          --v90;
        }
        ++v90;
      }
      while ( v90 < v89 );
      return 1;
    case 0x47:
      *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5744) = *(float *)(a1 + 144);
      return 1;
    case 0x48:
      *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5736) = *(float *)(a1 + 144);
      return 1;
    case 0x49:
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13608) = *(_DWORD *)(a1 + 144);
      if ( LightningStorm::IsActive() )
        return 1;
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13616) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060]
                                                                                      + 13608);
      return 1;
    case 0x4A:
      v99 = ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !v99 )
        return 0;
      *(_BYTE *)(v99 + 498) = 1;
      return 1;
    case 0x4B:
      v100 = ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !v100 )
        return 0;
      *(_BYTE *)(v100 + 498) = 0;
      return 1;
    case 0x4C:
      if ( !aP1 )
        return 1;
      *(_DWORD *)&aP1[614].__pad_0[4] = *(_DWORD *)(a1 + 144);
      return 1;
    case 0x4D:
      if ( !aP1 )
        return 1;
      *(_DWORD *)&aP1[614].__pad_0[8] = *(_DWORD *)(a1 + 144);
      return 1;
    case 0x4E:
      if ( !aP1 )
        return 1;
      *(_DWORD *)&aP1[614].__pad_0[12] = *(_DWORD *)(a1 + 144);
      return 1;
    case 0x4F:
      if ( !aP1 )
        return 1;
      aP1[614].uniqueId = *(_DWORD *)(a1 + 144);
      return 1;
    case 0x50:
      v79 = *(_DWORD *)(a1 + 48);
      if ( !v79 )
        return 0;
      v80 = *(_DWORD *)(a1 + 68);
      if ( v80 == -1 )
        return 0;
      return DeployScriptActionPlane(v79, v80);
    case 0x51:
      return globalHelper_0E01C0((int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x52:
      v18 = 0;
      if ( *(int *)&stru_89E138.__pad_579C[66812] <= 0 )
        return 1;
      do
      {
        v19 = *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66800] + 4 * v18);
        if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v19 + 388))(v19)
          && *(int *)(v19 + 108) > 0
          && *(_BYTE *)(v19 + 144)
          && *(_BYTE *)(v19 + 116)
          && !*(_BYTE *)(v19 + 129)
          && aP1 != *(AbstractClass **)(v19 + 540) )
        {
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v19 + 488))(v19, 5, 0);
        }
        ++v18;
      }
      while ( v18 < *(int *)&stru_89E138.__pad_579C[66812] );
      return 1;
    case 0x53:
      v20 = 0;
      if ( *(int *)&stru_89E138.__pad_579C[66812] <= 0 )
        return 1;
      do
      {
        v21 = *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66800] + 4 * v20);
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 388))(v21) == 23
          && *(int *)(v21 + 108) > 0
          && *(_BYTE *)(v21 + 144)
          && *(_BYTE *)(v21 + 116)
          && !*(_BYTE *)(v21 + 129)
          && *(AbstractClass **)(v21 + 540) == aP1 )
        {
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v21 + 488))(v21, 5, 0);
        }
        ++v20;
      }
      while ( v20 < *(int *)&stru_89E138.__pad_579C[66812] );
      return 1;
    case 0x54:
      ebx47 = 0;
      if ( *(int *)&HouseClass_Player.__pad_5568[22996] <= 0 )
        return 1;
      do
      {
        v23 = *(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22984] + 4 * ebx47);
        if ( v23[133] == *(_DWORD *)(a1 + 144)
          && (!(*(int (__thiscall **)(_DWORD))(*v23 + 388))(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22984]
                                                                      + 4 * ebx47))
           || (*(int (__thiscall **)(_DWORD *))(*v23 + 388))(v23) == 23)
          && (int)v23[27] > 0
          && *((_BYTE *)v23 + 144)
          && *((_BYTE *)v23 + 116)
          && !*((_BYTE *)v23 + 129) )
        {
          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v23 + 488))(v23, 5, 0);
        }
        ++ebx47;
      }
      while ( ebx47 < *(int *)&HouseClass_Player.__pad_5568[22996] );
      return 1;
    case 0x55:
      *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13479) = *(_BYTE *)(a1 + 144);
      return 1;
    case 0x56:
      *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13478) = *(_BYTE *)(a1 + 144);
      return 1;
    case 0x57:
      *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13480) = *(_BYTE *)(a1 + 144);
      return 1;
    case 0x58:
      v112 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player.__pad_5568[8060],
                            &v130,
                            *(_DWORD *)(a1 + 68));
      v101 = (CellStruct **)CoordStruct::Set2(v135, (IUnknown *)&v112, 0);
      v113 = *v101;
      v128 = v101[1];
      GroundHeight = v101[2];
      CoordStruct::Set2(&v131, (IUnknown *)&v112, 0);
      GroundHeight = (CellStruct *)Cell::GetGroundHeight((IUnknown *)&v131);
      v102 = __2_YAPAXI_Z(0x100u);
      if ( !v102 )
        return 1;
      ParticleSystemClass::Constructor(
        v102,
        *(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_18[8] + 4 * *(_DWORD *)(a1 + 144)),
        (IUnknown *)&v113,
        0,
        0,
        (IUnknown *)&stru_B05488.__pad_579C[14972],
        0);
      return 1;
    case 0x59:
      v103 = 0;
      v112 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player.__pad_5568[8060],
                            &v130,
                            *(_DWORD *)(a1 + 68));
      if ( g_GameCleanupState <= 0 )
        return 1;
      do
      {
        v104 = *(_BYTE **)&dword_A8020C->__pad_0[4 * v103];
        if ( v104[144] )
        {
          v105 = (_WORD *)(*(int (__thiscall **)(_BYTE *, char *))(*(_DWORD *)v104 + 440))(v104, v134);
          if ( CellStruct::Equals(v105, &v112) )
            (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v104 + 248))(v104);
        }
        ++v103;
      }
      while ( v103 < g_GameCleanupState );
      return 1;
    case 0x5A:
      v106 = (IUnknown **)ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player.__pad_5568[8060],
                            v134,
                            *(_DWORD *)(a1 + 68));
      LightningStorm::Strike(*v106);
      return 1;
    case 0x5B:
      v14 = 0;
      for ( n = 0; n < *(int *)&HouseClass_Player.__pad_74[56]; ++n )
      {
        v16 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_74[44] + 4 * n);
        if ( *(_BYTE *)(v16 + 144) )
        {
          if ( *(_BYTE *)(v16 + 116) )
          {
            if ( !*(_BYTE *)(v16 + 129) )
            {
              v17 = *(_DWORD **)(v16 + 52);
              if ( v17 )
              {
                if ( LinkedList::Contains(v17, a5) )
                {
                  (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 1300))(v16);
                  v14 = 1;
                }
              }
            }
          }
        }
      }
      return v14;
    case 0x5E:
      v11 = ScenarioClass::Get_Waypoint_Location(
              *(char **)&HouseClass_Player.__pad_5568[8060],
              &v130,
              *(_DWORD *)(a1 + 68));
      Coord::Subtract(
        &v131,
        (IUnknown *)(((__int16)*v11 << 8) + 128),
        (IUnknown *)(((__int16)HIWORD(*v11) << 8) + 128),
        0);
      v113 = v131;
      v128 = (CellStruct *)v132;
      GroundHeight = (CellStruct *)v133;
      GroundHeight = (CellStruct *)Cell::GetGroundHeight((IUnknown *)&v113);
      v12 = (_DWORD *)__2_YAPAXI_Z(0x14u);
      if ( !v12 )
        return 1;
      ActionQueue::PushEntry(v12, (int)v113, (int)v128, (int)GroundHeight);
      return 1;
    case 0x5F:
      return TActionClass::CreateNukeEffect((int *)a1, aP1, (int)v9, (int)a5, aP4);
    case 0x60:
      return SuperWeaponClass::CreateChemLauncher((_DWORD *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x61:
      *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13477) = *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060]
                                                                                    + 13477) == 0;
      return 1;
    case 0x62:
      Array::ForEach(aP0, 4, (IUnknown *)0x64, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2);
      v65 = 0;
      v66 = 0;
      v67 = aP0;
      do
      {
        if ( ScenarioClass::Is_Waypoint_Valid(*(char **)&HouseClass_Player.__pad_5568[8060], v66) )
        {
          ++v65;
          *(_DWORD *)v67->__pad_0 = *ScenarioClass::Get_Waypoint_Location(
                                       *(char **)&HouseClass_Player.__pad_5568[8060],
                                       &v130,
                                       v66);
          v67 = (AbstractClass *)((char *)v67 + 4);
          if ( v65 == 400 )
            break;
        }
        ++v66;
      }
      while ( v66 < 702 );
      v68 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)(v65 - 1));
      v69 = CoordStruct::Set2(&v131, (IUnknown *)((char *)aP0 + 4 * v68), 0);
      PlayAudioAt2(*(IUnknown **)(a1 + 144), v69, 0);
      return 1;
    case 0x63:
      v70 = (CellStruct **)Cell::GetWorldCoords(
                             *(__int16 **)&HouseClass_Player.__pad_5568[8060],
                             &v131,
                             *(_DWORD *)(a1 + 68));
      v113 = *v70;
      v128 = v70[1];
      GroundHeight = v70[2];
      v71 = ScriptAction::ReadParameter(&v113);
      if ( v71 )
        ObjectClass::CheckFlagD0(v71, *(IUnknown **)(a1 + 144));
      else
        PlayAudioAt2(*(IUnknown **)(a1 + 144), &v113, 1);
      return 1;
    case 0x64:
      EnqueueAsyncIOMovie(*(_DWORD *)(a1 + 144), 0);
      return 1;
    case 0x65:
      return TActionClass::executeScatterAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x66:
      v112 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player.__pad_5568[8060],
                            &v130,
                            *(_DWORD *)(a1 + 68));
      Coord::Subtract(&v131, (IUnknown *)(((__int16)v112 << 8) + 128), (IUnknown *)((SHIWORD(v112) << 8) + 128), 0);
      v113 = v131;
      v128 = (CellStruct *)v132;
      GroundHeight = (CellStruct *)v133;
      GroundHeight = (CellStruct *)Cell::GetGroundHeight((IUnknown *)&v113);
      if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v112) + 80) & 0x100) != 0 )
        GroundHeight = (CellStruct *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[15024]);
      v13 = *Coord::ToCell(&v113, (IUnknown *)&v130);
      if ( LightningStorm::IsActive() )
        return 0;
      LightningStorm::Start(
        *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6044),
        *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6036),
        v13,
        (#375 *)aP1);
      return 1;
    case 0x67:
      v64 = *(_BYTE *)(a1 + 109) != 0 ? (char *)(a1 + 109) : 0;
      ScriptAction::CopyStringField(Destination, v64);
      if ( v64 )
      {
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4596) = GetStringCSF(
                                                                               (wchar_t *)v64,
                                                                               0,
                                                                               &stru_830620.__pad_579C[52796],
                                                                               2242);
        ScriptAction::CopyStructField(
          (void *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4600),
          v138,
          Destination);
      }
      else
      {
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4596) = &stru_87C374.__pad_579C[23588];
        ScriptAction::CopyStringField(v137, &stru_87C374.__pad_579C[33876]);
        ScriptAction::CopyStructField((void *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4600), v139, v137);
      }
      ObjectClass::PreDraw(&stru_87C374.__pad_14B0[8132]);
      return 1;
    case 0x68:
      v107 = *(void **)(a1 + 48);
      if ( !v107 )
        return 1;
      TeamTypeClass::FlashAllInstances(v107, *(AnimClass **)(a1 + 144));
      return 1;
    case 0x69:
      v108 = *(void **)(a1 + 48);
      if ( v108 )
      {
        FirstInstance = TeamTypeClass::FindFirstInstance(v108);
        if ( !FirstInstance )
          return 1;
        RevealTechnoClassRadarEvent(*(_DWORD *)(FirstInstance + 84), *(_DWORD *)(a1 + 144));
        return 1;
      }
      else
      {
        RevealTechnoClassRadarEvent(0, 0);
        return 1;
      }
    case 0x6A:
      v112 = (IUnknown *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22620] - 1);
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[22620] - 1 < 0 )
        goto LABEL_290;
      v110 = *(_DWORD *)&HouseClass_Player.__pad_5568[22608] + 4 * (*(_DWORD *)&HouseClass_Player.__pad_5568[22620] - 1);
      while ( strcmp((const char *)(*(_DWORD *)v110 + 36), (const char *)(a1 + 84)) )
      {
        v110 -= 4;
        v112 = (IUnknown *)((char *)v112 - 1);
        if ( (int)v112 < 0 )
          goto LABEL_290;
      }
      *(_DWORD *)(*(_DWORD *)v110 + 1588) = *(_DWORD *)(a1 + 144);
LABEL_290:
      v111 = (int)&HouseClass_Count[-1].__tail_1602E[1];
      if ( (int)&HouseClass_Count[-1].__tail_1602E[1] < 0 )
        return 1;
      do
      {
        --v111;
        *(_BYTE *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * v111 + 4] + 508) = 1;
      }
      while ( v111 >= 0 );
      return 1;
    case 0x6B:
      ecx293 = *(_DWORD **)(a1 + 48);
      if ( !ecx293 )
        return 0;
      edx294 = *(_DWORD *)(a1 + 68);
      if ( edx294 == -1 )
        return 0;
      return ExecuteScriptTypeClassActions(ecx293, edx294);
    case 0x6C:
      v114 = (IUnknown **)ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player.__pad_5568[8060],
                            v134,
                            *(_DWORD *)(a1 + 68));
      return BuildingClass::SearchPlacement(&stru_87C374.__pad_14B0[8132], *v114, *(MouseClass **)(a1 + 144));
    case 0x6D:
      return TActionClass::executeParadropAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x6E:
      SetScenarioClassTimer(*(_DWORD *)(a1 + 144));
      return 1;
    case 0x6F:
      v115 = 0;
      v116 = 0;
      if ( *(int *)&HouseClass_Player.__pad_5568[22684] <= 0 )
        return v115;
      break;
    case 0x70:
      v112 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location(
                            *(char **)&HouseClass_Player.__pad_5568[8060],
                            v134,
                            *(_DWORD *)(a1 + 68));
      v119 = (CellStruct **)CoordStruct::Set2(v135, (IUnknown *)&v112, 0);
      v113 = *v119;
      v128 = v119[1];
      GroundHeight = v119[2];
      GroundHeight = (CellStruct *)Cell::GetGroundHeight((IUnknown *)&v113);
      if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v112) + 80) & 0x100) != 0
        || (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v112) + 80) & 0x400) != 0 )
      {
        GroundHeight = (CellStruct *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[15024]);
      }
      Tactical::SetTacticalPosition(*(int *)&stru_87C374.__pad_579C[22548], (IUnknown *)&v113);
      return 1;
    case 0x71:
      v120 = (AnimClass *)ObjectClass::FindOwner(a5, *(AnimClass **)(a1 + 144));
      if ( !v120 )
        return 0;
      HouseClass::NotifyImpactWater(v120);
      return 1;
    case 0x72:
      return TActionClass::executePsychicDominatorAction(
               (unsigned int *)a1,
               (int)aP1,
               (int)v9,
               (int)a5,
               (IUnknown *)aP4);
    case 0x73:
      return TActionClass::executeGeneticMutatorAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x74:
      return TActionClass::executeGuardAreaAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x75:
      EnqueueAsyncIOMovie(*(_DWORD *)(a1 + 144), 1);
      return 1;
    case 0x76:
      return globalHelper_0E2C20((int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x77:
      return TActionClass::executePlaceBeaconAction((_DWORD *)a1, (int)aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x78:
      return TActionClass::executeJumpjetAction((_DWORD *)a1, (int)aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x79:
      return TActionClass::executeOpenGateAction((_DWORD *)a1, (int)aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x7A:
      return TActionClass::executeCloseGateAction((_DWORD *)a1, (int)aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x7B:
      return TActionClass::executeCaptureAction((_DWORD *)a1, aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x7C:
      return TActionClass::executeSabotageAction((_DWORD *)a1, aP1, (int)v9, a5, (IUnknown *)aP4);
    case 0x7D:
      return TActionClass::executeForceShieldAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x7E:
      return CreateHouseClass((int)aP1, v9, a5, (IUnknown *)aP4, v123, v124, v125);
    case 0x7F:
      globalHelper_03B460(*(_DWORD *)(a1 + 144));
      return 1;
    case 0x80:
      return TActionClass::executePatrolAction((int *)a1, aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x81:
      return TActionClass::executeIronCurtainAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x82:
      return SmallFunc_6E3120((int)aP1, v9, a5, (IUnknown *)aP4, v123, v124, v125);
    case 0x83:
      return TActionClass::executeEMPulseAction(a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x84:
      return TActionClass::executeNukeAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x85:
      return TActionClass::executeSpyPlaneAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x86:
      return TActionClass::executeChronoSphereAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x87:
      return TActionClass::executeWeatherStormAction((int *)a1, aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x88:
      return globalHelper_0E4440(aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x89:
      return TActionClass::executeRevealAction((int *)a1, aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x8A:
      return globalHelper_0E4540(aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x8B:
      return TActionClass::executeLightningAction((int *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x8C:
      return TActionClass::executeDominatorAction((int *)a1, aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x8D:
      return globalHelper_0E44C0(aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x8E:
      return TActionClass::executeSelfDestructAction((_DWORD *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    case 0x8F:
      return TActionClass::executeExplodeAction((_DWORD *)a1, (int)aP1, (int)v9, (int)a5, (IUnknown *)aP4);
    default:
      return result;
  }
  while ( 1 )
  {
    v117 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672] + 4 * v116);
    if ( *(_BYTE *)(v117 + 144) )
    {
      if ( *(_BYTE *)(v117 + 116) )
      {
        if ( !*(_BYTE *)(v117 + 129) )
        {
          v118 = *(_DWORD **)(v117 + 52);
          if ( v118 )
          {
            if ( LinkedList::Contains(v118, a5) )
              break;
          }
        }
      }
    }
    if ( ++v116 >= *(int *)&HouseClass_Player.__pad_5568[22684] )
      return 0;
  }
  BuildingClass::UnloadUnits((BuildingTypeClass **)v117, 0, 0);
  return 1;
}


