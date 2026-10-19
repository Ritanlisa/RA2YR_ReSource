// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x006D0260  TabClass::Stub  this=TabClass  sig=csp ====
// attributes: thunk
int __thiscall BlowStraw_29::Stub(TabClass *this)
{
  return ObjectClass::processDamage((SidebarClass *)this);
}



// ==== 0x006D0270  TabClass::CleanupResources  this=TabClass  sig=csp ====
void TacticalClass::CleanupResources(TabClass *this)
{
  int v1; // edi
  void **v2; // esi
  SidebarClass *v3; // [esp+0h] [ebp-8h]

  ObjectClass::CleanupSidebarResources(v3); /*0x6d0272*/
  v1 = 0; /*0x6d0277*/
  v2 = (void **)dword_B0C148; /*0x6d0279*/
  do /*0x6d02aa*/
  {
    if ( byte_B0CBDC[v1] ) /*0x6d027e*/
    {
      __3_YAXPAX_Z(*v2); /*0x6d028b*/
      byte_B0CBDC[v1] = 0; /*0x6d0293*/
    }
    *v2++ = 0; /*0x6d029a*/
    ++v1; /*0x6d02a3*/
  }
  while ( (int)v2 < (int)&byte_B0C1AC ); /*0x6d02aa*/
}



// ==== 0x006D02B0  TabClass::LoadButtonSHPs  this=TabClass  sig=csp ====
int __thiscall SidebarClass::LoadButtonSHPs(TabClass *this)
{
  int v2; // esi
  int *v3; // edi
  void *v4; // eax
  bool v5; // cl
  int v6; // esi
  int result; // eax
  int v8; // edx
  SidebarClass *v9; // [esp+0h] [ebp-124h]
  bool v10; // [esp+Fh] [ebp-115h] BYREF
  void *NeedsSaveOrLink; // [esp+10h] [ebp-114h]
  int v12; // [esp+14h] [ebp-110h]
  int v13; // [esp+18h] [ebp-10Ch]
  int v14; // [esp+20h] [ebp-104h]
  char Buffer[256]; // [esp+24h] [ebp-100h] BYREF

  SidebarClass::LoadAssets(v9); /*0x6d02bb*/
  v10 = 0; /*0x6d02c0*/
  v2 = 0; /*0x6d02c5*/
  v3 = dword_B0C148; /*0x6d02c7*/
  do /*0x6d0302*/
  {
    sprintf(Buffer, "Button%02d.SHP", v2); /*0x6d02d7*/
    v4 = LoadFileSHP(Buffer, &v10); /*0x6d02e7*/
    v5 = v10; /*0x6d02ec*/
    *v3 = (int)v4; /*0x6d02f0*/
    byte_B0CBDC[v2] = v5; /*0x6d02f2*/
    ++v3; /*0x6d02f8*/
    ++v2; /*0x6d02fb*/
  }
  while ( (int)v3 < (int)&byte_B0C1AC ); /*0x6d0302*/
  dword_B0CD38 = *(__int16 *)(dword_B0C148[0] + 2); /*0x6d0314*/
  dword_B0CB50 = *(__int16 *)(dword_B0C148[0] + 4); /*0x6d031e*/
  v6 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1212]; /*0x6d032a*/
  v12 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1208]; /*0x6d032e*/
  v13 = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1208] + 4); /*0x6d0335*/
  result = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1208] + 8); /*0x6d0339*/
  v14 = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1208] + 12); /*0x6d033f*/
  dword_B0CC2C = v6 - result * dword_B0CB54; /*0x6d0354*/
  NeedsSaveOrLink = dword_A8B230[374].NeedsSaveOrLink; /*0x6d0363*/
  v8 = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1192] + 4); /*0x6d036d*/
  dword_B0CD10 = result - dword_B0CD38; /*0x6d0370*/
  dword_B0CC24 = v8; /*0x6d0377*/
  dword_B0CC38 = result; /*0x6d037d*/
  *((_DWORD *)this + 5448) = 0; /*0x6d0382*/
  return result; /*0x6d030f*/
}



// ==== 0x006D03A0  TabClass::InitButtons  this=TabClass  sig=csp ====
char __thiscall SidebarClass::InitButtons(TabClass *this)
{
  char result; // al
  int v2; // esi

  SidebarClass::Init((SidebarClass *)this); /*0x6d03a7*/
  result = stru_A8EB00.?[391]; /*0x6d03ac*/
  if ( !stru_A8EB00.?[391] ) /*0x6d03b5*/
  {
    result = UI_Init_72F430(); /*0x6d03bb*/
    if ( result ) /*0x6d03c2*/
    {
      UI_Init_6D0FD0(); /*0x6d03cc*/
      dword_B0CCD4 = 240; /*0x6d03e1*/
      dword_B0CD00 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6d03eb*/
      byte_B0CCDD = 0; /*0x6d03f0*/
      dword_B0CCE0 = 0; /*0x6d03f6*/
      dword_B0CCD0 = 5; /*0x6d03fc*/
      v2 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[736]; /*0x6d0404*/
      Rect_Point::Set( /*0x6d0422*/
        &stru_B0CCB0,
        **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1200],
        *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1200] + 4));
      ShapeButton::SetShape((ShapeButtonClass *)&stru_B0CCB0, v2, 0, 0); /*0x6d042f*/
      dword_B0CC64 = 241; /*0x6d043f*/
      dword_B0CC90 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6d0449*/
      byte_B0CC6D = 0; /*0x6d044e*/
      dword_B0CC70 = 0; /*0x6d0454*/
      dword_B0CC60 = 5; /*0x6d045a*/
      Rect_Point::Set( /*0x6d047a*/
        &stru_B0CC40,
        **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1204],
        *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1204] + 4));
      return ShapeButton::SetShape((ShapeButtonClass *)&stru_B0CC40, v2, 0, 0); /*0x6d0487*/
    }
  }
  return result; /*0x6d048e*/
}



// ==== 0x006D04D0  ObjectClass::SidebarUpdateAll  this=ObjectClass  sig=csp ====
int __thiscall SidebarUpdateAll(ObjectClass *this)
{
  ShapeButtonClass *v2; // esi
  int result; // eax

  v2 = &stru_B0C1C0; /*0x6d04d4*/
  do /*0x6d04ea*/
  {
    result = (*((int (__thiscall **)(ObjectClass *, ShapeButtonClass *))this->AbstractClass + 13))(this, v2); /*0x6d04de*/
    v2 += 8; /*0x6d04e1*/
  }
  while ( (int)v2 < (int)&dword_B0CB20 ); /*0x6d04ea*/
  return result; /*0x6d04ec*/
}



// ==== 0x006D04F0  TabClass::BuildCommandBar  this=TabClass  sig=csp ====
int __userpurge TacticalClass::BuildCommandBar@<eax>(TabClass *this, int a2@<edi>, int a3)
{
  CommandClass *v3; // ecx
  int v4; // ebx
  int v5; // ebp
  CommandClass *v6; // esi
  int result; // eax
  char v8; // bl
  char v9; // al
  ShapeButtonClass *v10; // edi
  int *v11; // edi
  int v12; // eax
  ShapeButtonClass *v13; // eax
  int v15; // [esp+0h] [ebp-24h]
  char v16; // [esp+4h] [ebp-20h]
  int v17[6]; // [esp+8h] [ebp-1Ch] BYREF
  char v18; // [esp+20h] [ebp-4h]

  v6 = v3; /*0x6d04f9*/
  v8 = ObjectClass::ToggleSidebarDisplay((SidebarClass *)this, v4, v5, a2, v15, v16); /*0x6d0501*/
  if ( !v8 ) /*0x6d0505*/
    goto LABEL_19; /*0x6d0505*/
  v9 = v6[5457].__tail_0[0]; /*0x6d0513*/
  if ( v6[5353].__tail_0[1] ) /*0x6d050b*/
  {
    if ( v9 ) /*0x6d0521*/
    {
      CommandClass::BuildBar(v6); /*0x6d0525*/
      result = (*(int (__thiscall **)(CommandClass *, int))(*(_DWORD *)v6 + 56))(v6, 2); /*0x6d0530*/
      LOBYTE(result) = v8; /*0x6d0533*/
      return result; /*0x6d053a*/
    }
    (*(void (__thiscall **)(CommandClass *, GadgetClass *))(*(_DWORD *)v6 + 48))(v6, &stru_B0CC40); /*0x6d0546*/
    if ( &stru_B0CC40 ) /*0x6d0550*/
    {
      v17[1] = stru_B0CC40.Width; /*0x6d0567*/
      v17[2] = stru_B0CC40.Height; /*0x6d0571*/
      v17[3] = *(_DWORD *)&stru_B0CC40.Visible; /*0x6d057b*/
      v18 = 0; /*0x6d0586*/
      v17[0] = dword_B0CC64; /*0x6d058b*/
      v17[5] = (int)g_Str_Tip_ThumbClosed; /*0x6d058f*/
      v17[4] = stru_B0CC40.ID; /*0x6d0597*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], dword_B0CC64); /*0x6d059b*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)v17); /*0x6d05ab*/
      result = (*(int (__thiscall **)(CommandClass *, int))(*(_DWORD *)v6 + 56))(v6, 2); /*0x6d05b6*/
      LOBYTE(result) = v8; /*0x6d05b9*/
      return result; /*0x6d05c0*/
    }
    goto LABEL_18; /*0x6d0550*/
  }
  if ( !v9 ) /*0x6d05c5*/
  {
    (*(void (__thiscall **)(CommandClass *, GadgetClass *))(*(_DWORD *)v6 + 52))(v6, &stru_B0CC40); /*0x6d0656*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 241); /*0x6d0664*/
LABEL_18:
    result = (*(int (__thiscall **)(CommandClass *, int))(*(_DWORD *)v6 + 56))(v6, 2); /*0x6d0669*/
LABEL_19:
    LOBYTE(result) = v8; /*0x6d0672*/
    return result; /*0x6d0672*/
  }
  v10 = &stru_B0C1C0; /*0x6d05cc*/
  do /*0x6d05e2*/
  {
    (*(void (__thiscall **)(CommandClass *, ShapeButtonClass *))(*(_DWORD *)v6 + 52))(v6, v10); /*0x6d05d6*/
    v10 += 8; /*0x6d05d9*/
  }
  while ( (int)v10 < (int)&dword_B0CB20 ); /*0x6d05e2*/
  (*(void (__thiscall **)(CommandClass *, GadgetClass *, int))(*(_DWORD *)v6 + 52))(v6, &stru_B0CCB0, a2); /*0x6d05ed*/
  v11 = g_ObjectTrackingPool; /*0x6d05f0*/
  do /*0x6d0627*/
  {
    v12 = *v11; /*0x6d05f5*/
    if ( *v11 >= 0 && v12 < 25 ) /*0x6d05fe*/
    {
      v13 = &stru_B0C1C0 + 8 * v12; /*0x6d0606*/
      if ( v13 ) /*0x6d060d*/
        HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], *(_DWORD *)v13[3].__pad_0); /*0x6d0619*/
    }
    ++v11; /*0x6d061e*/
  }
  while ( (int)v11 < (int)byte_B0CBDC ); /*0x6d0627*/
  HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 240); /*0x6d0634*/
  result = (*(int (__thiscall **)(CommandClass *, int))(*(_DWORD *)v6 + 56))(v6, 2); /*0x6d0640*/
  LOBYTE(result) = v8; /*0x6d0643*/
  return result; /*0x6d0535*/
}



// ==== 0x006D0680  TabClass::Seek  this=TabClass  sig=csp ====
int __thiscall BlowStraw_29::Seek(TabClass *this, int *a2, _DWORD *a3)
{
  int v4; // edx
  int v5; // eax
  int TabClass_field_0x0; // eax
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  ShapeButtonClass *v12; // eax
  char *v13; // edi
  int i; // edi
  char *FontClassEntry; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  TechnoClass *v21; // [esp+0h] [ebp-10h]

  v4 = *((_DWORD *)this + 5454); /*0x6d068b*/
  v5 = *((_DWORD *)this + 5456); /*0x6d0691*/
  if ( v4 != -1 ) /*0x6d069a*/
  {
    if ( (int)dword_A8ED84 - v4 >= v5 ) /*0x6d06a6*/
      goto LABEL_6; /*0x6d06a6*/
    v5 -= (int)dword_A8ED84 - v4; /*0x6d06a8*/
  }
  if ( v5 == 1 ) /*0x6d06ac*/
  {
    TabClass_field_0x0 = this->TabClass_field_0x0; /*0x6d06ae*/
    *((_BYTE *)this + 21829) = 1; /*0x6d06b4*/
    (*(void (__thiscall **)(TabClass *, _DWORD))(TabClass_field_0x0 + 56))(this, 0); /*0x6d06ba*/
  }
LABEL_6:
  v7 = *((_DWORD *)dword_B0FC58 + 1); /*0x6d06bd*/
  if ( *a3 >= *(_DWORD *)dword_B0FC58 && *a3 < *(_DWORD *)dword_B0FC58 + dword_886FA8 ) /*0x6d06dd*/
  {
    v8 = a3[1]; /*0x6d06df*/
    if ( v8 >= v7 && v8 < v7 + 30 ) /*0x6d06f2*/
      Mouse::SetCursor((int)&dword_87F7E8, 0, 0); /*0x6d06fd*/
  }
  v9 = *a2; /*0x6d0706*/
  if ( *a2 < 32982 || v9 >= 33007 ) /*0x6d0718*/
  {
    if ( v9 == 33008 ) /*0x6d0842*/
    {
      PlayVocClass(dword_8871E0->UpgradeVeteranSound, 0x2000, 1.0, 0); /*0x6d0860*/
      if ( *((_BYTE *)this + 21828) ) /*0x6d0865*/
      {
        SidebarUpdateAll((ObjectClass *)this); /*0x6d0875*/
        (*(void (__thiscall **)(TabClass *, GadgetClass *))(this->TabClass_field_0x0 + 52))(this, &stru_B0CCB0); /*0x6d0883*/
        for ( i = 0; i < 25; ++i ) /*0x6d0886*/
        {
          FontClassEntry = GetFontClassEntry(i); /*0x6d088a*/
          if ( FontClassEntry ) /*0x6d0891*/
            HashTable::Remove((HashTable *)dword_887368, *((_DWORD *)FontClassEntry + 9)); /*0x6d089d*/
        }
        HashTable::Remove((HashTable *)dword_887368, 240); /*0x6d08b3*/
        v16 = this->TabClass_field_0x0; /*0x6d08b8*/
        *((_BYTE *)this + 21828) = 0; /*0x6d08c1*/
        (*(void (__thiscall **)(TabClass *, GadgetClass *))(v16 + 48))(this, &stru_B0CC40); /*0x6d08c8*/
        PushCommandClass::Execute(&stru_B0CC40, (int)g_Str_Tip_ThumbClosed); /*0x6d08d5*/
        v17 = this->TabClass_field_0x0; /*0x6d08da*/
        *((_BYTE *)this + 21829) = 1; /*0x6d08e0*/
        (*(void (__thiscall **)(TabClass *, _DWORD))(v17 + 56))(this, 0); /*0x6d08e6*/
      }
    }
    else if ( v9 == 33009 ) /*0x6d08f3*/
    {
      if ( !dword_A8B538[0] ) /*0x6d08fc*/
      {
        PlayVocClass(dword_8871E0->SpySatDeactivationSound, 0x2000, 1.0, 0); /*0x6d091a*/
        if ( !*((_BYTE *)this + 21828) ) /*0x6d091f*/
        {
          (*(void (__thiscall **)(TabClass *, GadgetClass *))(this->TabClass_field_0x0 + 52))(this, &stru_B0CC40); /*0x6d0932*/
          HashTable::Remove((HashTable *)dword_887368, 241); /*0x6d0940*/
          *((_BYTE *)this + 21828) = 1; /*0x6d0947*/
          CommandClass::BuildBar((CommandClass *)this); /*0x6d094d*/
          v18 = this->TabClass_field_0x0; /*0x6d0952*/
          *((_BYTE *)this + 21829) = 1; /*0x6d0958*/
          (*(void (__thiscall **)(TabClass *, _DWORD))(v18 + 56))(this, 0); /*0x6d095e*/
        }
      }
    }
    else if ( v9 >= 49366 && v9 < 49391 ) /*0x6d096f*/
    {
      BYTE1(v9) &= 0x3Fu; /*0x6d0977*/
      v19 = v9 - 214; /*0x6d097a*/
      if ( v19 >= dword_B0CC20 && v19 <= dword_B0CD28 ) /*0x6d0989*/
        SidebarClearReferences((char *)(v19 - dword_B0CC20 + 1)); /*0x6d0990*/
    }
  }
  else
  {
    BYTE1(v9) &= ~0x80u; /*0x6d0724*/
    v10 = v9 - 214; /*0x6d0727*/
    if ( v10 == dword_B0CD24 ) /*0x6d072e*/
    {
      BlowStraw_29_Get(v21); /*0x6d0730*/
    }
    else if ( v10 == dword_B0CB3C ) /*0x6d0740*/
    {
      UI_Create_731A30(); /*0x6d0742*/
    }
    else if ( v10 == dword_B0C1B8 ) /*0x6d0752*/
    {
      UI_Create_730F30(v21); /*0x6d0754*/
    }
    else if ( v10 == dword_B0CB20 ) /*0x6d0764*/
    {
      ProcessSelectionExperience(v21); /*0x6d0766*/
    }
    else if ( v10 == dword_B0CB68 ) /*0x6d0776*/
    {
      GetFactoryData(v21); /*0x6d0778*/
    }
    else if ( v10 == dword_B0CC1C ) /*0x6d078a*/
    {
      v11 = g_ObjectTrackingPool[dword_B0CC1C]; /*0x6d078c*/
      if ( v11 > 0x18 ) /*0x6d0795*/
        v12 = 0; /*0x6d07a9*/
      else
        v12 = &stru_B0C1C0 + 8 * v11; /*0x6d07a2*/
      if ( BYTE1(v12[3].ShapeButtonClass_field_0x08) ) /*0x6d07ab*/
        UI_Create_731A50(1); /*0x6d07b4*/
      else
        UI_Create_731A70(1); /*0x6d07be*/
    }
    else if ( v10 == dword_B0CB6C ) /*0x6d07ce*/
    {
      UI_Create_730EA0(); /*0x6d07d0*/
    }
    else if ( v10 < dword_B0CC20 || v10 > dword_B0CD28 ) /*0x6d07ea*/
    {
      if ( v10 == dword_B0CB38 ) /*0x6d082d*/
        SelectAllOfType(v21); /*0x6d0833*/
    }
    else
    {
      v13 = (char *)(v10 - dword_B0CC20 + 1); /*0x6d07ef*/
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
  CountdownTimer::UpdateDisplay((CountdownTimer *)this + 5447, 0); /*0x6d099d*/
  return SidebarClass::UpdateStrips((SidebarClass *)this, a2, a3); /*0x6d09af*/
}



// ==== 0x006D09C0  PushCommandClass::Execute  this=GadgetClass  sig=csp ====
int __fastcall PushCommandClass::Execute(_DWORD *a1, int a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int result; // eax
  int v6[6]; // [esp+0h] [ebp-1Ch] BYREF
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
    HashTable::Remove((int *)dword_887368, v2); /*0x6d09fa*/
    return CommandClass::AddAction((int)dword_887368, (int)v6); /*0x6d0a0a*/
  }
  return result; /*0x6d0a0f*/
}



// ==== 0x006D0A20  TabClass::DrawTabs  this=TabClass  sig=csp ====
int __thiscall SidebarClass::DrawTabs(TabClass *this, char a2)
{
  int v2; // edi
  char v4; // bl
  int *v5; // ecx
  int v6; // eax
  ShapeButtonClass *v7; // eax
  int *v8; // eax
  int v9; // edx
  int v10; // esi
  int v11; // ecx
  int v12; // eax
  AudioStream **v13; // ecx
  int v14; // esi
  int *v15; // eax
  int *v16; // eax
  AudioStream *v17; // edi
  TabClass *v18; // esi
  int v19; // esi
  int *v20; // ebx
  int v21; // eax
  ShapeButtonClass *v22; // esi
  GadgetClass *v23; // ecx
  int v24; // eax
  int v25; // ecx
  _DWORD *v26; // eax
  int v27; // ecx
  char v29; // [esp+0h] [ebp-4Ch]
  int v31; // [esp+14h] [ebp-38h] BYREF
  int i; // [esp+18h] [ebp-34h]
  int v33; // [esp+1Ch] [ebp-30h] BYREF
  int v34; // [esp+20h] [ebp-2Ch]
  int v35; // [esp+24h] [ebp-28h]
  int v36; // [esp+28h] [ebp-24h]
  int v37[2]; // [esp+2Ch] [ebp-20h] BYREF
  int v38; // [esp+34h] [ebp-18h]
  int v39; // [esp+38h] [ebp-14h]
  char v40[16]; // [esp+3Ch] [ebp-10h] BYREF

  if ( (byte_B0CB58 & 1) == 0 ) /*0x6d0a34*/
  {
    byte_B0CB58 |= 1u; /*0x6d0a42*/
    dword_B0CBF8 = 0; /*0x6d0a48*/
    dword_B0CBFC = 0; /*0x6d0a4e*/
    atexit(nullsub_236); /*0x6d0a54*/
  }
  if ( !a2 && !*((_BYTE *)this + 21829) ) /*0x6d0a6c*/
  {
    v4 = 0; /*0x6d0a7a*/
    v5 = g_ObjectTrackingPool; /*0x6d0a7c*/
    while ( 1 ) /*0x6d0a81*/
    {
      v6 = *v5; /*0x6d0a81*/
      if ( *v5 >= 0 && v6 < 25 ) /*0x6d0a8a*/
      {
        v7 = &stru_B0C1C0 + 8 * v6; /*0x6d0a92*/
        if ( v7 ) /*0x6d0a99*/
        {
          if ( v7[7].__pad_0[0] ) /*0x6d0a9b*/
            break; /*0x6d0a9b*/
        }
      }
      if ( (int)++v5 >= (int)byte_B0CBDC ) /*0x6d0aab*/
      {
        v8 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)stru_887598.lineTrailer + 52))( /*0x6d0aba*/
                      stru_887598.lineTrailer,
                      &v31);
        v9 = *v8; /*0x6d0abd*/
        v10 = v8[1]; /*0x6d0abf*/
        if ( *v8 < **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1192] /*0x6d0ae4*/
          || (v2 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1192]
                 + *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1192] + 8),
              v9 >= v2)
          || (v11 = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1192] + 4), v10 < v11)
          || v10 >= v11 + *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1192] + 12) )
        {
          if ( byte_B0CD40 ) /*0x6d0b13*/
            v4 = 1; /*0x6d0b15*/
          byte_B0CD40 = 0; /*0x6d0b17*/
        }
        else
        {
          byte_B0CD40 = 1; /*0x6d0aeb*/
          if ( v9 != dword_B0CBF8 || v10 != dword_B0CBFC ) /*0x6d0afc*/
            v4 = 1; /*0x6d0afe*/
        }
        dword_B0CBF8 = v9; /*0x6d0b20*/
        dword_B0CBFC = v10; /*0x6d0b26*/
        if ( v4 ) /*0x6d0b2c*/
        {
          dword_B0CD44 = 0; /*0x6d0b2e*/
        }
        else
        {
          v12 = 0; /*0x6d0b3c*/
          if ( dword_B0CD44 <= 0 ) /*0x6d0b40*/
          {
LABEL_28:
            v4 = 1; /*0x6d0b59*/
          }
          else
          {
            v13 = (AudioStream **)&dword_B0CC00; /*0x6d0b48*/
            while ( *v13 != g_DSurface_Hidden_2 ) /*0x6d0b4f*/
            {
              ++v12; /*0x6d0b51*/
              ++v13; /*0x6d0b52*/
              if ( v12 >= dword_B0CD44 ) /*0x6d0b57*/
                goto LABEL_28; /*0x6d0b57*/
            }
          }
        }
        goto LABEL_29; /*0x6d0b34*/
      }
    }
  }
  v4 = 1; /*0x6d0b02*/
  dword_B0CD44 = 0; /*0x6d0b04*/
LABEL_29:
  if ( !stru_A8EB00.?[391] ) /*0x6d0b62*/
  {
    v14 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[856]; /*0x6d0b75*/
    v31 = 0; /*0x6d0b84*/
    i = 0; /*0x6d0b88*/
    v15 = (int *)(*((int (__thiscall **)(DSurface *, int *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x6d0b95*/
                   DSurface_Sidebar,
                   v37);
    DrawToSurfaceSHP( /*0x6d0bac*/
      (int)DSurface_Sidebar,
      *(int *)&stru_87F5F0.__pad_58[132],
      v14,
      0,
      &v31,
      v15,
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
    g_TooltipActive = 1; /*0x6d0bb7*/
    DrawSidebarCreditsTimer((ObjectClass *)1, v2, v29); /*0x6d0bc4*/
    if ( v4 ) /*0x6d0bcb*/
    {
      v16 = (int *)(*(int (__thiscall **)(AudioStream *, char *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x6d0bde*/
                     g_DSurface_Hidden_2,
                     v40);
      v33 = *v16; /*0x6d0be3*/
      v34 = v16[1]; /*0x6d0bea*/
      v35 = v16[2]; /*0x6d0bf1*/
      v36 = v16[3]; /*0x6d0bfd*/
      v31 = 0; /*0x6d0c01*/
      i = 0; /*0x6d0c05*/
      v31 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1192]; /*0x6d0c0b*/
      i = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1192] + 4); /*0x6d0c12*/
      v37[0] = v33; /*0x6d0c16*/
      v37[1] = v34; /*0x6d0c1a*/
      v38 = v35; /*0x6d0c1e*/
      v39 = v36; /*0x6d0c22*/
      v38 = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1192] + 8); /*0x6d0c29*/
      v17 = g_DSurface_Hidden_2; /*0x6d0c3b*/
      DrawToSurfaceSHP( /*0x6d0c5f*/
        (int)g_DSurface_Hidden_2,
        *(int *)&stru_87F5F0.__pad_58[132],
        *(int *)&g_BuildingLoadQueue_Array.__pad_F70[652],
        0,
        &v31,
        v37,
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
      v18 = this; /*0x6d0c64*/
      if ( *((_BYTE *)this + 21828) ) /*0x6d0c68*/
      {
        v31 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1200]; /*0x6d0c79*/
        i = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1200] + 4); /*0x6d0c80*/
      }
      else
      {
        v31 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1204]; /*0x6d0c8d*/
        i = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1204] + 4); /*0x6d0c94*/
      }
      DrawToSurfaceSHP( /*0x6d0cc4*/
        (int)v17,
        *(int *)&stru_87F5F0.__pad_58[132],
        *(int *)&g_BuildingLoadQueue_Array.__pad_F70[736],
        0,
        &v31,
        &v33,
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
      if ( *((_BYTE *)this + 21828) ) /*0x6d0cc9*/
      {
        v19 = 0; /*0x6d0ce2*/
        v31 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1208]; /*0x6d0ce6*/
        for ( i = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1192] + 4); /*0x6d0cf8*/
              v19 < *(int *)&g_BuildingLoadQueue_Array.__pad_F70[564];
              v31 += *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1208] + 8) )
        {
          DrawToSurfaceSHP( /*0x6d0d2b*/
            (int)v17,
            *(int *)&stru_87F5F0.__pad_58[132],
            *(int *)&g_BuildingLoadQueue_Array.__pad_F70[760],
            0,
            &v31,
            &v33,
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
          ++v19; /*0x6d0d3f*/
        }
        v20 = g_ObjectTrackingPool; /*0x6d0d4f*/
        do /*0x6d0d8a*/
        {
          v21 = *v20; /*0x6d0d54*/
          if ( *v20 >= 0 && v21 < 25 ) /*0x6d0d5d*/
          {
            v22 = &stru_B0C1C0 + 8 * v21; /*0x6d0d65*/
            if ( v22 ) /*0x6d0d6d*/
            {
              if ( v22[7].ShapeButtonClass_field_0x04 ) /*0x6d0d6f*/
              {
                (*(void (__thiscall **)(ShapeButtonClass *, int))(*(_DWORD *)v22->__pad_0 + 108))(v22, 1); /*0x6d0d7a*/
                v22[7].__pad_0[0] = 0; /*0x6d0d7d*/
              }
            }
          }
          ++v20; /*0x6d0d81*/
        }
        while ( (int)v20 < (int)byte_B0CBDC ); /*0x6d0d8a*/
        v18 = this; /*0x6d0d8c*/
      }
      v31 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1212]; /*0x6d0db2*/
      DrawToSurfaceSHP( /*0x6d0dc8*/
        (int)v17,
        *(int *)&stru_87F5F0.__pad_58[132],
        *(int *)&g_BuildingLoadQueue_Array.__pad_F70[780],
        0,
        &v31,
        &v33,
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
      v23 = &stru_B0CCB0; /*0x6d0dd7*/
      if ( !v18[237].__pad_18[0] ) /*0x6d0dcd*/
        v23 = &stru_B0CC40; /*0x6d0dde*/
      ShapeButton::Draw((ShapeButtonClass *)v23, 1); /*0x6d0de3*/
      v18[237].__pad_18[2] = 1; /*0x6d0de8*/
      v18[237].__pad_18[1] = 0; /*0x6d0def*/
      v24 = dword_B0CD44; /*0x6d0df6*/
      if ( (unsigned int)dword_B0CD44 < 4 ) /*0x6d0dfe*/
        v24 = ++dword_B0CD44; /*0x6d0e00*/
      v25 = v24 - 2; /*0x6d0e06*/
      if ( v24 - 2 >= 0 ) /*0x6d0e0b*/
      {
        v26 = (_DWORD *)(4 * v25 + 11586564); /*0x6d0e0d*/
        v27 = v25 + 1; /*0x6d0e14*/
        do /*0x6d0e1e*/
        {
          *v26 = *(v26 - 1); /*0x6d0e18*/
          --v26; /*0x6d0e1a*/
          --v27; /*0x6d0e1d*/
        }
        while ( v27 ); /*0x6d0e1e*/
      }
      dword_B0CC00 = (int)v17; /*0x6d0e20*/
    }
    else
    {
      *((_BYTE *)this + 21830) = 0; /*0x6d0e28*/
    }
  }
  return SidebarClass::Redraw((SidebarClass *)this, a2); /*0x6d0e3d*/
}



// ==== 0x006D0E50  nullsub_236  this=-  sig=ida-proto ====
void __cdecl nullsub_236()
{
  ; /*0x6d0e50*/
}



// ==== 0x006D0E60  ObjectClass::UI_Draw_6D0E60  this=ObjectClass  sig=csp ====
void UI_Draw_6D0E60(ObjectClass *this)
{
  int v1; // esi
  int *v2; // eax
  int v3[2]; // [esp+4h] [ebp-18h] BYREF
  _BYTE v4[16]; // [esp+Ch] [ebp-10h] BYREF

  v1 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[856]; /*0x6d0e73*/
  v3[0] = 0; /*0x6d0e7b*/
  v3[1] = 0; /*0x6d0e7f*/
  v2 = (int *)(*((int (__thiscall **)(DSurface *, _BYTE *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x6d0e91*/
                DSurface_Sidebar,
                v4);
  DrawToSurfaceSHP( /*0x6d0ea9*/
    (int)DSurface_Sidebar,
    *(int *)&stru_87F5F0.__pad_58[132],
    v1,
    0,
    v3,
    v2,
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
  g_TooltipActive = 1; /*0x6d0eae*/
}



// ==== 0x006D0EC0  HouseClass::updateFactoryQueue  this=HouseClass  sig=csp ====
wchar_t *__thiscall HouseClass::updateFactoryQueue(HouseClass *this)
{
  HouseClass *v1; // esi
  void (__stdcall **vtable0)(_DWORD); // eax
  wchar_t *result; // eax
  void *v4; // [esp+8h] [ebp-8h]

  v1 = this; /*0x6d0ec4*/
  vtable0 = (void (__stdcall **)(_DWORD))this->AbstractClass; /*0x6d0ec8*/
  BYTE1(this->ownedBuildingTypes2[1]) = 1; /*0x6d0eca*/
  vtable0[14](0); /*0x6d0ed1*/
  result = *(wchar_t **)&stru_A8EB00.?[416]; /*0x6d0ed4*/
  v1 = (HouseClass *)((char *)v1 + 21816); /*0x6d0edd*/
  v1->AbstractClass = *(void **)&stru_A8EB00.?[416]; /*0x6d0ee8*/
  v1->? = v4; /*0x6d0eea*/
  v1->? = (void *)7; /*0x6d0eed*/
  return result; /*0x6d0ef0*/
}



// ==== 0x006D0F00  ObjectClass::PreDraw  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::PreDraw(ObjectClass *this)
{
  int (__stdcall **vtable0)(_DWORD); // eax

  vtable0 = (int (__stdcall **)(_DWORD))this->AbstractClass; /*0x6d0f00*/
  *((_BYTE *)this + 21829) = 1; /*0x6d0f04*/
  return vtable0[14](0); /*0x6d0f0e*/
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
  v1 = dword_B0C148; /*0x6d0f1f*/
  do /*0x6d0f5a*/
  {
    sprintf(Buffer, "Button%02d.SHP", v0); /*0x6d0f2f*/
    result = LoadFileSHP(Buffer, &v4); /*0x6d0f3f*/
    v3 = v4; /*0x6d0f44*/
    *v1 = (int)result; /*0x6d0f48*/
    byte_B0CBDC[v0] = v3; /*0x6d0f4a*/
    ++v1; /*0x6d0f50*/
    ++v0; /*0x6d0f53*/
  }
  while ( (int)v1 < (int)&byte_B0C1AC ); /*0x6d0f5a*/
  return result; /*0x6d0f5c*/
}



// ==== 0x006D0FB0  sub_6D0FB0  this=-  sig=ida-proto ====
int __fastcall sub_6D0FB0(int a1, int a2, int a3)
{
  *(_DWORD *)(a1 + 36) = a2; /*0x6d0fb0*/
  *(_DWORD *)(a1 + 80) = dword_87F6CC; /*0x6d0fbc*/
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

  v0 = (int *)&stru_B0C1C0; /*0x6d0fd4*/
  do /*0x6d0fef*/
  {
    ShapeButton::SetShape((int)v0, 0, 0, 0); /*0x6d0fe1*/
    v0 += 24; /*0x6d0fe6*/
  }
  while ( (int)v0 < (int)&dword_B0CB20 ); /*0x6d0fef*/
  v1 = 0; /*0x6d0ffc*/
  v2 = *((_DWORD *)dword_B0FC64 + 2) + *(_DWORD *)dword_B0FC64; /*0x6d100b*/
  do /*0x6d10a6*/
  {
    v3 = g_ObjectTrackingPool[v1]; /*0x6d1012*/
    if ( v3 <= 0x18 ) /*0x6d101b*/
    {
      v4 = (char *)&stru_B0C1C0 + 96 * v3; /*0x6d102c*/
      if ( v4 ) /*0x6d1034*/
      {
        v5 = *(_DWORD *)dword_B0FC68 + dword_B0CC38 * v3; /*0x6d1045*/
        v6 = dword_B0CC24; /*0x6d1047*/
        if ( v5 + *((_DWORD *)dword_B0FC68 + 2) <= v2 ) /*0x6d1062*/
        {
          *((_DWORD *)v4 + 9) = v1 + 214; /*0x6d106c*/
          *((_DWORD *)v4 + 20) = dword_87F6CC; /*0x6d1075*/
          v4[45] = 0; /*0x6d1078*/
          *((_DWORD *)v4 + 12) = 0; /*0x6d107b*/
          *((_DWORD *)v4 + 8) = 5; /*0x6d107e*/
          (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)v4 + 100))(v4, v5, v6); /*0x6d108b*/
          (*(void (__thiscall **)(char *, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 136))(v4, dword_B0C148[v1], 0, 0); /*0x6d109c*/
        }
      }
    }
    ++v1; /*0x6d10a2*/
  }
  while ( v1 < 25 ); /*0x6d10a6*/
  v7 = g_ObjectTrackingPool[dword_B0CC1C]; /*0x6d10b5*/
  if ( v7 <= 0x18 ) /*0x6d10be*/
  {
    v8 = (char *)&stru_B0C1C0 + 96 * v7; /*0x6d10cb*/
    if ( v8 ) /*0x6d10d2*/
    {
      *((_DWORD *)v8 + 12) = 1; /*0x6d10d9*/
      v8[64] = 1; /*0x6d10dc*/
    }
  }
  v9 = dword_B0CC20; /*0x6d10df*/
  result = dword_B0CD28; /*0x6d10e5*/
  if ( dword_B0CC20 <= dword_B0CD28 ) /*0x6d10ec*/
  {
    v11 = (int *)(4 * dword_B0CC20 + 11586424); /*0x6d10ee*/
    do /*0x6d1122*/
    {
      v12 = *v11; /*0x6d10fa*/
      if ( *v11 >= 0 && v12 < 25 ) /*0x6d1103*/
      {
        v13 = (char *)&stru_B0C1C0 + 96 * v12; /*0x6d110b*/
        if ( v13 ) /*0x6d1112*/
          *((_DWORD *)v13 + 8) = 85; /*0x6d1114*/
      }
      result = dword_B0CD28; /*0x6d1117*/
      ++v9; /*0x6d111c*/
      ++v11; /*0x6d111d*/
    }
    while ( v9 <= dword_B0CD28 ); /*0x6d1122*/
  }
  return result; /*0x6d1124*/
}



// ==== 0x006D1130  sub_6D1130  this=-  sig=ida-proto ====
int sub_6D1130()
{
  void *v0; // esi

  dword_B0CCD4 = 240; /*0x6d1149*/
  dword_B0CD00 = dword_87F6CC; /*0x6d1153*/
  byte_B0CCDD = 0; /*0x6d1158*/
  dword_B0CCE0 = 0; /*0x6d115e*/
  dword_B0CCD0 = 5; /*0x6d1164*/
  v0 = dword_B0FA90; /*0x6d116c*/
  Rect_Point::Set(stru_B0CCB0, *(_DWORD *)dword_B0FC60, *((_DWORD *)dword_B0FC60 + 1)); /*0x6d118a*/
  ShapeButton::SetShape((int)stru_B0CCB0, (int)v0, 0, 0); /*0x6d1197*/
  dword_B0CC64 = 241; /*0x6d11a7*/
  dword_B0CC90 = dword_87F6CC; /*0x6d11b1*/
  byte_B0CC6D = 0; /*0x6d11b6*/
  dword_B0CC70 = 0; /*0x6d11bc*/
  dword_B0CC60 = 5; /*0x6d11c2*/
  Rect_Point::Set(stru_B0CC40, *(_DWORD *)dword_B0FC64, *((_DWORD *)dword_B0FC64 + 1)); /*0x6d11e2*/
  return ShapeButton::SetShape((int)stru_B0CC40, (int)v0, 0, 0); /*0x6d11f4*/
}



// ==== 0x006D1200  CommandClass::BuildBar  this=CommandClass  sig=csp ====
int __thiscall CommandClass::BuildBar(CommandClass *this)
{
  ShapeButtonClass *v2; // esi
  unsigned int v3; // eax
  ShapeButtonClass *v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int ShapeButtonClass_field_0x08; // edx
  unsigned int v9; // eax
  ShapeButtonClass *v10; // esi
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // eax
  ShapeButtonClass *v16; // esi
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  unsigned int v21; // eax
  ShapeButtonClass *v22; // esi
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  unsigned int v27; // eax
  ShapeButtonClass *v28; // ecx
  unsigned int v29; // eax
  ShapeButtonClass *v30; // ecx
  char *FontClassEntry; // eax
  char *v32; // eax
  char *v33; // eax
  char *v34; // eax
  char *v35; // eax
  Struct v37; // [esp+8h] [ebp-1Ch] BYREF
  int v38; // [esp+Ch] [ebp-18h]
  int ShapeButtonClass_field_0x04; // [esp+10h] [ebp-14h]
  int v40; // [esp+14h] [ebp-10h]
  int v41; // [esp+18h] [ebp-Ch]
  char *v42; // [esp+1Ch] [ebp-8h]

  v2 = &stru_B0C1C0; /*0x6d1207*/
  do /*0x6d1224*/
  {
    (*(void (__thiscall **)(ShapeButtonClass *))(*(_DWORD *)v2->__pad_0 + 32))(v2); /*0x6d1210*/
    (*(void (__thiscall **)(CommandClass *, ShapeButtonClass *))(*(_DWORD *)this + 48))(this, v2); /*0x6d1218*/
    v2 += 8; /*0x6d121b*/
  }
  while ( (int)v2 < (int)&dword_B0CB20 ); /*0x6d1224*/
  (*(void (__thiscall **)(CommandClass *, GadgetClass *))(*(_DWORD *)this + 48))(this, &stru_B0CCB0); /*0x6d122f*/
  v3 = g_ObjectTrackingPool[dword_B0CD24]; /*0x6d1238*/
  if ( v3 <= 0x18 ) /*0x6d1241*/
  {
    v4 = &stru_B0C1C0 + 8 * v3; /*0x6d124e*/
    if ( v4 ) /*0x6d1256*/
    {
      Struct::Zero25(&v37); /*0x6d125c*/
      v5 = *(_DWORD *)v4[1].__pad_0; /*0x6d1264*/
      v6 = *(_DWORD *)v4[3].__pad_0; /*0x6d1267*/
      ShapeButtonClass_field_0x04 = v4[1].ShapeButtonClass_field_0x04; /*0x6d126a*/
      v7 = *(_DWORD *)v4[2].__pad_0; /*0x6d126e*/
      v38 = v5; /*0x6d1271*/
      ShapeButtonClass_field_0x08 = v4[1].ShapeButtonClass_field_0x08; /*0x6d1275*/
      v41 = v7; /*0x6d1278*/
      v37.Struct_field_00 = v6; /*0x6d1283*/
      v42 = aTipAttackmove; /*0x6d1287*/
      v40 = ShapeButtonClass_field_0x08; /*0x6d128f*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], v6); /*0x6d1293*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v37); /*0x6d12a3*/
    }
  }
  v9 = g_ObjectTrackingPool[dword_B0CB3C]; /*0x6d12ad*/
  if ( v9 <= 0x18 ) /*0x6d12b6*/
  {
    v10 = &stru_B0C1C0 + 8 * v9; /*0x6d12c3*/
    if ( v10 ) /*0x6d12cb*/
    {
      Struct::Zero25(&v37); /*0x6d12d1*/
      v11 = v10[1].ShapeButtonClass_field_0x04; /*0x6d12d9*/
      v12 = *(_DWORD *)v10[3].__pad_0; /*0x6d12dc*/
      v38 = *(_DWORD *)v10[1].__pad_0; /*0x6d12df*/
      v13 = v10[1].ShapeButtonClass_field_0x08; /*0x6d12e3*/
      ShapeButtonClass_field_0x04 = v11; /*0x6d12e6*/
      v14 = *(_DWORD *)v10[2].__pad_0; /*0x6d12ea*/
      v40 = v13; /*0x6d12ed*/
      v37.Struct_field_00 = v12; /*0x6d12f8*/
      v42 = aTipBeacon; /*0x6d12fc*/
      v41 = v14; /*0x6d1304*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], v12); /*0x6d1308*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v37); /*0x6d1318*/
    }
  }
  v15 = g_ObjectTrackingPool[dword_B0C1B8]; /*0x6d1323*/
  if ( v15 <= 0x18 ) /*0x6d132c*/
  {
    v16 = &stru_B0C1C0 + 8 * v15; /*0x6d1339*/
    if ( v16 ) /*0x6d1341*/
    {
      Struct::Zero25(&v37); /*0x6d1347*/
      v17 = *(_DWORD *)v16[1].__pad_0; /*0x6d134f*/
      v18 = *(_DWORD *)v16[3].__pad_0; /*0x6d1352*/
      ShapeButtonClass_field_0x04 = v16[1].ShapeButtonClass_field_0x04; /*0x6d1355*/
      v19 = *(_DWORD *)v16[2].__pad_0; /*0x6d1359*/
      v38 = v17; /*0x6d135c*/
      v20 = v16[1].ShapeButtonClass_field_0x08; /*0x6d1360*/
      v41 = v19; /*0x6d1363*/
      v37.Struct_field_00 = v18; /*0x6d136e*/
      v42 = aTipCheer; /*0x6d1372*/
      v40 = v20; /*0x6d137a*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], v18); /*0x6d137e*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v37); /*0x6d138e*/
    }
  }
  v21 = g_ObjectTrackingPool[dword_B0CB20]; /*0x6d1398*/
  if ( v21 <= 0x18 ) /*0x6d13a1*/
  {
    v22 = &stru_B0C1C0 + 8 * v21; /*0x6d13ae*/
    if ( v22 ) /*0x6d13b6*/
    {
      Struct::Zero25(&v37); /*0x6d13bc*/
      v23 = v22[1].ShapeButtonClass_field_0x04; /*0x6d13c4*/
      v24 = *(_DWORD *)v22[3].__pad_0; /*0x6d13c7*/
      v38 = *(_DWORD *)v22[1].__pad_0; /*0x6d13ca*/
      v25 = v22[1].ShapeButtonClass_field_0x08; /*0x6d13ce*/
      ShapeButtonClass_field_0x04 = v23; /*0x6d13d1*/
      v26 = *(_DWORD *)v22[2].__pad_0; /*0x6d13d5*/
      v40 = v25; /*0x6d13d8*/
      v37.Struct_field_00 = v24; /*0x6d13e3*/
      v42 = aTipDeploy; /*0x6d13e7*/
      v41 = v26; /*0x6d13ef*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], v24); /*0x6d13f3*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v37); /*0x6d1403*/
    }
  }
  v27 = g_ObjectTrackingPool[dword_B0CB68]; /*0x6d1410*/
  if ( v27 > 0x18 ) /*0x6d1419*/
    v28 = 0; /*0x6d142e*/
  else
    v28 = &stru_B0C1C0 + 8 * v27; /*0x6d1426*/
  PushCommandClass::Execute(v28, (int)aTipGuard); /*0x6d1435*/
  v29 = g_ObjectTrackingPool[dword_B0CC1C]; /*0x6d1440*/
  if ( v29 > 0x18 ) /*0x6d1449*/
    v30 = 0; /*0x6d145e*/
  else
    v30 = &stru_B0C1C0 + 8 * v29; /*0x6d1456*/
  PushCommandClass::Execute(v30, (int)aTipPlanningmod); /*0x6d1465*/
  FontClassEntry = GetFontClassEntry(dword_B0CB6C); /*0x6d1470*/
  PushCommandClass::Execute(FontClassEntry, (int)aTipStop); /*0x6d147c*/
  v32 = GetFontClassEntry(dword_B0CC20); /*0x6d1487*/
  PushCommandClass::Execute(v32, (int)aTipTeam01); /*0x6d1493*/
  v33 = GetFontClassEntry(dword_B0CC28); /*0x6d149e*/
  PushCommandClass::Execute(v33, (int)aTipTeam02); /*0x6d14aa*/
  v34 = GetFontClassEntry(dword_B0CD28); /*0x6d14b5*/
  PushCommandClass::Execute(v34, (int)aTipTeam03); /*0x6d14c1*/
  v35 = GetFontClassEntry(dword_B0CB38); /*0x6d14cc*/
  PushCommandClass::Execute(v35, (int)aTipTypeselect); /*0x6d14d8*/
  return PushCommandClass::Execute(&stru_B0CCB0, (int)aTipThumbopen); /*0x6d14ec*/
}



// ==== 0x006D1570  ObjectClass::method_6D1570  this=ObjectClass  sig=csp ====
char __thiscall sub_6D1570(ObjectClass *this)
{
  char result; // al
  int v2[6]; // [esp+4h] [ebp-1Ch] BYREF
  char v3; // [esp+1Ch] [ebp-4h]

  result = (*((int (__thiscall **)(ObjectClass *, GadgetClass *))this->AbstractClass + 12))(this, &stru_B0CC40); /*0x6d157a*/
  if ( &stru_B0CC40 ) /*0x6d1584*/
  {
    v2[2] = stru_B0CC40.Height; /*0x6d1597*/
    v2[1] = stru_B0CC40.Width; /*0x6d15a1*/
    v2[4] = stru_B0CC40.ID; /*0x6d15ab*/
    v3 = 0; /*0x6d15b6*/
    v2[0] = dword_B0CC64; /*0x6d15bb*/
    v2[5] = (int)g_Str_Tip_ThumbClosed; /*0x6d15bf*/
    v2[3] = *(_DWORD *)&stru_B0CC40.Visible; /*0x6d15c7*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], dword_B0CC64); /*0x6d15cb*/
    return CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)v2); /*0x6d15db*/
  }
  return result; /*0x6d15e0*/
}



// ==== 0x006D1610  HouseClass::InitDefeatState  this=HouseClass  sig=csp ====
char __thiscall HouseClass::InitDefeatState(HouseClass *this)
{
  char result; // al
  char (__thiscall **vtable0)(HouseClass *, _DWORD); // edx

  result = this->ownedBuildingTypes2[1]; /*0x6d1613*/
  if ( !result ) /*0x6d161b*/
  {
    (*((void (__thiscall **)(HouseClass *, GadgetClass *))this->AbstractClass + 13))(this, &stru_B0CC40); /*0x6d1624*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 241); /*0x6d1632*/
    LOBYTE(this->ownedBuildingTypes2[1]) = 1; /*0x6d1639*/
    CommandClass::BuildBar((CommandClass *)this); /*0x6d1640*/
    vtable0 = (char (__thiscall **)(HouseClass *, _DWORD))this->AbstractClass; /*0x6d1645*/
    BYTE1(this->ownedBuildingTypes2[1]) = 1; /*0x6d164b*/
    return vtable0[14](this, 0); /*0x6d1652*/
  }
  return result; /*0x6d1655*/
}



// ==== 0x006D1660  ObjectClass::House_Play_6D1660  this=ObjectClass  sig=csp ====
char __usercall House_Play_6D1660@<al>(ObjectClass *this, int a2@<esi>)
{
  _BYTE *v2; // ecx
  _BYTE *v3; // edi
  char result; // al
  ShapeButtonClass *v5; // esi
  int *v6; // esi
  int v7; // eax
  ShapeButtonClass *v8; // eax
  int v9; // edx
  int v10; // edx
  int v12[6]; // [esp+Ch] [ebp-1Ch] BYREF
  char v13; // [esp+24h] [ebp-4h]

  v3 = v2; /*0x6d1664*/
  result = v2[21828]; /*0x6d1666*/
  if ( result ) /*0x6d166e*/
  {
    v5 = &stru_B0C1C0; /*0x6d1675*/
    do /*0x6d168b*/
    {
      (*(void (__thiscall **)(_BYTE *, ShapeButtonClass *))(*(_DWORD *)v3 + 52))(v3, v5); /*0x6d167f*/
      v5 += 8; /*0x6d1682*/
    }
    while ( (int)v5 < (int)&dword_B0CB20 ); /*0x6d168b*/
    (*(void (__thiscall **)(_BYTE *, GadgetClass *, int))(*(_DWORD *)v3 + 52))(v3, &stru_B0CCB0, a2); /*0x6d1696*/
    v6 = g_ObjectTrackingPool; /*0x6d1699*/
    do /*0x6d16d0*/
    {
      v7 = *v6; /*0x6d169e*/
      if ( *v6 >= 0 && v7 < 25 ) /*0x6d16a7*/
      {
        v8 = &stru_B0C1C0 + 8 * v7; /*0x6d16af*/
        if ( v8 ) /*0x6d16b6*/
          HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], *(_DWORD *)v8[3].__pad_0); /*0x6d16c2*/
      }
      ++v6; /*0x6d16c7*/
    }
    while ( (int)v6 < (int)byte_B0CBDC ); /*0x6d16d0*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 240); /*0x6d16dd*/
    v9 = *(_DWORD *)v3; /*0x6d16e2*/
    v3[21828] = 0; /*0x6d16eb*/
    (*(void (__thiscall **)(_BYTE *, GadgetClass *))(v9 + 48))(v3, &stru_B0CC40); /*0x6d16f2*/
    if ( &stru_B0CC40 ) /*0x6d16fd*/
    {
      v12[1] = stru_B0CC40.Width; /*0x6d1710*/
      v12[2] = stru_B0CC40.Height; /*0x6d171a*/
      v12[3] = *(_DWORD *)&stru_B0CC40.Visible; /*0x6d1724*/
      v13 = 0; /*0x6d172f*/
      v12[0] = dword_B0CC64; /*0x6d1734*/
      v12[5] = (int)g_Str_Tip_ThumbClosed; /*0x6d1738*/
      v12[4] = stru_B0CC40.ID; /*0x6d1740*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], dword_B0CC64); /*0x6d1744*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)v12); /*0x6d1754*/
    }
    v10 = *(_DWORD *)v3; /*0x6d1759*/
    v3[21829] = 1; /*0x6d175f*/
    return (*(char (__thiscall **)(_BYTE *, _DWORD))(v10 + 56))(v3, 0); /*0x6d1766*/
  }
  return result; /*0x6d1769*/
}



// ==== 0x006D1770  MouseClass::ToggleContextGadget  this=MouseClass  sig=csp ====
char __stdcall MouseClass::ToggleContextGadget(int a1, int a2)
{
  unsigned int v2; // eax
  ShapeButtonClass *v3; // ecx
  unsigned int v5; // eax
  ShapeButtonClass *v6; // ecx

  if ( a1 == 4551 ) /*0x6d1779*/
  {
    v2 = g_ObjectTrackingPool[dword_B0CC1C]; /*0x6d1780*/
    if ( v2 <= 0x18 ) /*0x6d1789*/
    {
      v3 = &stru_B0C1C0 + 8 * v2; /*0x6d1796*/
      if ( v3 ) /*0x6d179e*/
      {
        if ( !BYTE1(v3[3].ShapeButtonClass_field_0x08) ) /*0x6d17a0*/
          GadgetClass::Show((GadgetClass *)v3); /*0x6d17a7*/
      }
    }
    return 1; /*0x6d17ac*/
  }
  else if ( a1 == 4552 ) /*0x6d17b6*/
  {
    v5 = g_ObjectTrackingPool[dword_B0CC1C]; /*0x6d17be*/
    if ( v5 <= 0x18 ) /*0x6d17c7*/
    {
      v6 = &stru_B0C1C0 + 8 * v5; /*0x6d17d4*/
      if ( v6 ) /*0x6d17dc*/
      {
        if ( BYTE1(v6[3].ShapeButtonClass_field_0x08) ) /*0x6d17de*/
          GadgetClass::Hide((GadgetClass *)v6); /*0x6d17e5*/
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
int __stdcall CursorAnim::Load(TabClass *this)
{
  SidebarClass *v1; // ecx

  return (int)ObjectClass::GetTooltipText(v1, (int)this); /*0x6d180a*/
}



// ==== 0x006D1810  Struct::Zero25  this=Struct  sig=csp ====
_DWORD *__thiscall Struct::Zero25(Struct *this)
{
  this->Struct_field_00 = 0; /*0x6d1814*/
  *((_DWORD *)this + 1) = 0; /*0x6d1816*/
  *((_DWORD *)this + 2) = 0; /*0x6d1819*/
  *((_DWORD *)this + 3) = 0; /*0x6d181c*/
  *((_DWORD *)this + 4) = 0; /*0x6d181f*/
  *((_DWORD *)this + 5) = 0; /*0x6d1822*/
  *((_BYTE *)this + 24) = 0; /*0x6d1825*/
  return &this->Struct_field_00; /*0x6d1828*/
}



// ==== 0x006D1830  sub_6D1830  this=-  sig=ida-proto ====
void sub_6D1830()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6d183c*/
  dbl_B0CD78 = Math::Sqrt(v0 + v0); /*0x6d184e*/
}



// ==== 0x006D1860  sub_6D1860  this=-  sig=ida-proto ====
void sub_6D1860()
{
  dbl_B0CEB8 = dbl_B0CD78 / 60.0; /*0x6d186c*/
}



// ==== 0x006D1880  sub_6D1880  this=-  sig=ida-proto ====
void sub_6D1880()
{
  dbl_B0CEA0 = 1.0 / dbl_B0CEB8; /*0x6d188c*/
}



// ==== 0x006D18A0  sub_6D18A0  this=-  sig=ida-proto ====
void sub_6D18A0()
{
  dbl_B0CE98 = 0.0174532925199433 * 45.0; /*0x6d18ac*/
}



// ==== 0x006D18C0  sub_6D18C0  this=-  sig=ida-proto ====
void sub_6D18C0()
{
  dbl_B0CD88 = 0.0174532925199433 * 60.0; /*0x6d18cc*/
}



// ==== 0x006D18E0  sub_6D18E0  this=-  sig=ida-proto ====
void sub_6D18E0()
{
  dbl_B0CD50 = 0.0174532925199433 * 90.0; /*0x6d18ec*/
}



// ==== 0x006D1900  sub_6D1900  this=-  sig=ida-proto ====
__int64 sub_6D1900()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0CD50 - dbl_B0CD88); /*0x6d1912*/
  result = Math::RoundToInt(v0 * dbl_B0CD78 * 0.5); /*0x6d1926*/
  dword_B0CEC0 = result; /*0x6d192b*/
  return result; /*0x6d1930*/
}



// ==== 0x006D1940  sub_6D1940  this=-  sig=ida-proto ====
void sub_6D1940()
{
  dbl_B0CD90 = Math::ArcTan((double)dword_B0CEC0 * 0.00390625); /*0x6d1957*/
}



// ==== 0x006D1970  sub_6D1970  this=-  sig=ida-proto ====
void sub_6D1970()
{
  dbl_B0CE20 = Math::ArcTan((double)(2 * dword_B0CEC0) / dbl_B0CD78); /*0x6d1992*/
}



// ==== 0x006D19A0  sub_6D19A0  this=-  sig=ida-proto ====
__int64 sub_6D19A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0CEC0) + 0.5); /*0x6d19bb*/
  dword_B0CEB4 = result; /*0x6d19c0*/
  return result; /*0x6d19c6*/
}



// ==== 0x006D19D0  sub_6D19D0  this=-  sig=ida-proto ====
int sub_6D19D0()
{
  word_B0CD74 = 0; /*0x6d19d2*/
  word_B0CD76 = 0; /*0x6d19d8*/
  return 0; /*0x6d19de*/
}



// ==== 0x006D19E0  sub_6D19E0  this=-  sig=ida-proto ====
int sub_6D19E0()
{
  dword_B0CE08 = 0; /*0x6d19e2*/
  dword_B0CE0C = 0; /*0x6d19e7*/
  dword_B0CE10 = 0; /*0x6d19ec*/
  return 0; /*0x6d19f1*/
}



// ==== 0x006D1A00  sub_6D1A00  this=-  sig=ida-proto ====
int sub_6D1A00()
{
  dword_B0CEB0 = 0; /*0x6d1a05*/
  dword_B0CEA8 = 128; /*0x6d1a0f*/
  dword_B0CEAC = 128; /*0x6d1a14*/
  return 128; /*0x6d1a19*/
}



// ==== 0x006D1A20  sub_6D1A20  this=-  sig=ida-proto ====
int sub_6D1A20()
{
  dword_B0CD60 = 0; /*0x6d1a22*/
  dword_B0CD64 = 0; /*0x6d1a27*/
  dword_B0CD68 = 0; /*0x6d1a2c*/
  dword_B0CD6C = 0; /*0x6d1a31*/
  return 0; /*0x6d1a36*/
}



// ==== 0x006D1A40  sub_6D1A40  this=-  sig=ida-proto ====
int sub_6D1A40()
{
  dword_B0CE28 = 0; /*0x6d1a42*/
  dword_B0CE2C = 0; /*0x6d1a47*/
  dword_B0CE30 = 0; /*0x6d1a4c*/
  dword_B0CE34 = 0; /*0x6d1a51*/
  return 0; /*0x6d1a56*/
}



// ==== 0x006D1A60  sub_6D1A60  this=-  sig=ida-proto ====
int sub_6D1A60()
{
  g_CraterPool = 0; /*0x6d1a67*/
  dword_B0CE80 = 0; /*0x6d1a6c*/
  byte_B0CE84 = 1; /*0x6d1a71*/
  byte_B0CE85 = 0; /*0x6d1a78*/
  dword_B0CE78 = (int)&off_7F429C; /*0x6d1a7d*/
  dword_B0CE8C = 10; /*0x6d1a87*/
  g_CraterCreationState = 0; /*0x6d1a91*/
  return atexit(sub_6D1AA0); /*0x6d1a9c*/
}



// ==== 0x006D1AA0  sub_6D1AA0  this=-  sig=ida-proto ====
void __cdecl sub_6D1AA0()
{
  if ( (byte_B0CD58 & 1) == 0 ) /*0x6d1aaa*/
  {
    dword_B0CE78 = (int)&VectorClass<DirtyAreaStruct>::`vftable'; /*0x6d1aae*/
    byte_B0CD58 |= 1u; /*0x6d1ac1*/
    if ( g_CraterPool ) /*0x6d1ac7*/
    {
      if ( byte_B0CE85 ) /*0x6d1ad1*/
      {
        __3_YAXPAX_Z(g_CraterPool); /*0x6d1ad4*/
        g_CraterPool = 0; /*0x6d1adc*/
      }
    }
    byte_B0CE85 = 0; /*0x6d1ae6*/
    dword_B0CE80 = 0; /*0x6d1aed*/
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
  dword_B0CDEC = 0; /*0x6d1b17*/
  dword_B0CDF0 = 0; /*0x6d1b1c*/
  byte_B0CDF4 = 1; /*0x6d1b21*/
  byte_B0CDF5 = 0; /*0x6d1b28*/
  dword_B0CDE8 = (int)&DynamicVectorClass<ShadowControlClass *>::`vftable'; /*0x6d1b2d*/
  dword_B0CDFC = 10; /*0x6d1b37*/
  dword_B0CDF8 = 0; /*0x6d1b41*/
  return atexit(sub_6D1B50); /*0x6d1b4c*/
}



// ==== 0x006D1B50  sub_6D1B50  this=-  sig=ida-proto ====
void __cdecl sub_6D1B50()
{
  if ( (byte_B0CD59 & 1) == 0 ) /*0x6d1b5a*/
  {
    dword_B0CDE8 = (int)&VectorClass<ShadowControlClass *>::`vftable'; /*0x6d1b5e*/
    byte_B0CD59 |= 1u; /*0x6d1b71*/
    if ( dword_B0CDEC ) /*0x6d1b77*/
    {
      if ( byte_B0CDF5 ) /*0x6d1b81*/
      {
        __3_YAXPAX_Z(dword_B0CDEC); /*0x6d1b84*/
        dword_B0CDEC = 0; /*0x6d1b8c*/
      }
    }
    byte_B0CDF5 = 0; /*0x6d1b96*/
    dword_B0CDF0 = 0; /*0x6d1b9d*/
  }
}



// ==== 0x006D1BB0  sub_6D1BB0  this=-  sig=ida-proto ====
void sub_6D1BB0()
{
  dbl_B0CE18 = 60.0 / dbl_B0CD78; /*0x6d1bc9*/
  dbl_B0CD48 = Math::SinCos(dbl_B0CD88) * dbl_B0CE18; /*0x6d1bdd*/
}



// ==== 0x006D1BF0  sub_6D1BF0  this=-  sig=ida-proto ====
void sub_6D1BF0()
{
  LightningStorm_CloudHeightFactor = dbl_B0CD78 / (Math::SinCos(dbl_B0CD88) * 60.0); /*0x6d1c11*/
}



// ==== 0x006D1C20  Tactical::Construct  this=Tactical  sig=csp ====
int __thiscall TacticalMap::Construct(Tactical *this)
{
  float v3; // [esp+0h] [ebp-10h]
  float v4; // [esp+0h] [ebp-10h]
  float v5; // [esp+0h] [ebp-10h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x6d1c25*/
  this->Tactical_field_0xA8 = (IUnknown *)-1; /*0x6d1c2c*/
  this->__pad_AC[0] = 0; /*0x6d1c36*/
  this->__pad_AC[1] = 0; /*0x6d1c3c*/
  *(_DWORD *)&this->__pad_AC[20] = 0; /*0x6d1c42*/
  *(_DWORD *)&this->__pad_AC[4] = 0; /*0x6d1c48*/
  *(_DWORD *)&this->__pad_AC[8] = 0; /*0x6d1c4e*/
  *(_DWORD *)&this->__pad_AC[12] = 0; /*0x6d1c54*/
  *(_DWORD *)&this->__pad_AC[16] = 0; /*0x6d1c5a*/
  *(_DWORD *)&this->__pad_AC[24] = 1072693248; /*0x6d1c60*/
  *(_DWORD *)&this->__pad_AC[28] = dword_B0CE08; /*0x6d1c6f*/
  *(_DWORD *)&this->__pad_AC[32] = dword_B0CE0C; /*0x6d1c7b*/
  *(_DWORD *)&this->__pad_AC[36] = dword_B0CE08; /*0x6d1c87*/
  *(_DWORD *)&this->__pad_AC[40] = dword_B0CE0C; /*0x6d1c92*/
  *(_DWORD *)&this->__pad_AC[44] = 0; /*0x6d1c98*/
  *(_DWORD *)&this->__pad_AC[48] = 0; /*0x6d1c9e*/
  *(_DWORD *)&this->__pad_AC[52] = 0; /*0x6d1ca4*/
  *(_DWORD *)&this->__pad_11F[3141] = 0; /*0x6d1caa*/
  *(_DWORD *)&this->__pad_11F[3145] = 0; /*0x6d1cb0*/
  *(_DWORD *)&this->__pad_11F[3149] = 0; /*0x6d1cb6*/
  *(_DWORD *)&this->__pad_11F[3153] = 0; /*0x6d1cbc*/
  *(_DWORD *)&this->__pad_11F[3157] = 0; /*0x6d1cc2*/
  *(_DWORD *)&this->__pad_11F[3161] = 0; /*0x6d1cc8*/
  this->__pad_11F[3165] = 1; /*0x6d1cce*/
  this->__pad_11F[3166] = 0; /*0x6d1cd5*/
  this->__pad_11F[3167] = 0; /*0x6d1cdb*/
  *(_DWORD *)&this->__pad_11F[3169] = dword_B0CD60; /*0x6d1ced*/
  *(_DWORD *)&this->__pad_11F[3173] = dword_B0CD64; /*0x6d1cf8*/
  *(_DWORD *)&this->__pad_11F[3177] = dword_B0CD68; /*0x6d1d01*/
  *(_DWORD *)&this->__pad_11F[3181] = dword_B0CD6C; /*0x6d1d09*/
  *(_DWORD *)&this->__pad_11F[3185] = 0; /*0x6d1d0c*/
  *(_DWORD *)&this->__pad_11F[3189] = 0; /*0x6d1d12*/
  *(_DWORD *)&this->__pad_11F[3193] = 0; /*0x6d1d18*/
  *(_DWORD *)&this->__pad_11F[3197] = 0; /*0x6d1d1e*/
  *(_DWORD *)&this->__pad_11F[3201] = 0; /*0x6d1d2a*/
  this->Tactical_field_0xDA4 = (AbstractClass *)Timer::GetTicks(); /*0x6d1d35*/
  *(_DWORD *)&this->__pad_DA8[4] = 0; /*0x6d1d3b*/
  *(_DWORD *)&this->__pad_DA8[8] = 0; /*0x6d1d4e*/
  *(_DWORD *)this->__pad_0 = &Tactical::`vftable'; /*0x6d1d54*/
  *(_DWORD *)&this->Tactical_field_0x2[2] = &Tactical::`vftable'; /*0x6d1d5a*/
  this->Tactical_field_0x8[0] = (int)&Tactical::`vftable'; /*0x6d1d61*/
  this->Tactical_field_0xC[0] = (int)&Tactical::`vftable'; /*0x6d1d68*/
  memset(&this->__pad_AC[56], 0, 0xC80u); /*0x6d1d6f*/
  *(_WORD *)&this->__pad_10[20] = 0; /*0x6d1d77*/
  *(_DWORD *)&this->__pad_34[112] = -1; /*0x6d1d7d*/
  Matrix3x4::Identity((Matrix3x4 *)&this->Tactical_field_0xDB4); /*0x6d1d87*/
  v3 = dbl_B0CD88; /*0x6d1d95*/
  Matrix3x3::RotateX((int *)&this->Tactical_field_0xDB4, v3); /*0x6d1d98*/
  v4 = dbl_B0CE98; /*0x6d1da6*/
  Matrix2D::Rotate((int *)&this->Tactical_field_0xDB4, v4); /*0x6d1da9*/
  v5 = 60.0 / dbl_B0CD78; /*0x6d1dbb*/
  TacticalMap::MultiplyByScalar((float *)&this->Tactical_field_0xDB4, v5); /*0x6d1dc0*/
  *((_DWORD *)this + 889) = 1082689742; /*0x6d1dca*/
  *((_DWORD *)this + 890) = 1091078350; /*0x6d1dd4*/
  *((_DWORD *)this + 891) = 0; /*0x6d1dda*/
  *((_DWORD *)this + 892) = 0; /*0x6d1de0*/
  *((_DWORD *)this + 893) = -1064793906; /*0x6d1de6*/
  *((_DWORD *)this + 894) = 1091078350; /*0x6d1df0*/
  *((_DWORD *)this + 895) = 0; /*0x6d1df6*/
  this->q380 = 0; /*0x6d1dfc*/
  *((_DWORD *)this + 897) = 0; /*0x6d1e02*/
  *((_DWORD *)this + 898) = 0; /*0x6d1e08*/
  *((_DWORD *)this + 899) = 1065353216; /*0x6d1e0e*/
  this->q384 = 0; /*0x6d1e18*/
  g_TacticalClass_Instance = (LPPERSISTSTREAM)this; /*0x6d1e1e*/
  return (int)this->__pad_0; /*0x6d1e26*/
}



// ==== 0x006D1E30  Tactical::SmallFunc_6D1E30  this=Tactical  sig=csp ====
_DWORD *__thiscall SmallFunc_6D1E30(Tactical *this, int a2)
{
  AbstractClass::InitVtables((AbstractClass *)this, a2); /*0x6d1e38*/
  this->Tactical_field_0xDA4 = (AbstractClass *)Timer::GetTicks(); /*0x6d1e48*/
  *(_DWORD *)&this->__pad_DA8[4] = 0; /*0x6d1e4e*/
  *(_DWORD *)this->__pad_0 = &Tactical::`vftable'; /*0x6d1e58*/
  *(_DWORD *)&this->Tactical_field_0x2[2] = &Tactical::`vftable'; /*0x6d1e5e*/
  this->Tactical_field_0x8[0] = (int)&Tactical::`vftable'; /*0x6d1e65*/
  this->Tactical_field_0xC[0] = (int)&Tactical::`vftable'; /*0x6d1e6c*/
  return this->__pad_0; /*0x6d1e75*/
}



// ==== 0x006D1E80  Tactical::method_6D1E80  this=Tactical  sig=csp ====
void __thiscall sub_6D1E80(Tactical *this)
{
  *(_DWORD *)this->__pad_0 = &Tactical::`vftable'; /*0x6d1e80*/
  *(_DWORD *)&this->Tactical_field_0x2[2] = &Tactical::`vftable'; /*0x6d1e86*/
  this->Tactical_field_0x8[0] = (int)&Tactical::`vftable'; /*0x6d1e8d*/
  this->Tactical_field_0xC[0] = (int)&Tactical::`vftable'; /*0x6d1e94*/
  g_TacticalClass_Instance = 0; /*0x6d1e9b*/
  AbstractClass::DTOR((AbstractClass *)this); /*0x6d1ea5*/
}



// ==== 0x006D1EB0  IsoCoord::ToPixel  this=IsoCoord  sig=csp ====
_DWORD *__thiscall IsoCoord::ToPixel(IsoCoord *this, int a2, int a3)
{
  *(_DWORD *)this->__pad_0 = -60 * a3 / 2 + 60 * a2 / 2; /*0x6d1ef3*/
  this->IsoCoord_field_0x04 = 30 * a3 / 2 + 30 * a2 / 2; /*0x6d1f00*/
  return this->__pad_0; /*0x6d1f03*/
}



// ==== 0x006D1F10  Coord::To_ScreenRaw  this=AbstractClass  sig=csp ====
int *__stdcall sub_6D1F10(int *a1, _DWORD *a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // esi
  int v6; // [esp+10h] [ebp-4h]

  v6 = a2[1]; /*0x6d1f1f*/
  v2 = (-60 * v6 / 2 + 60 * *a2 / 2) / 256; /*0x6d1f95*/
  v3 = (30 * v6 / 2 + 30 * *a2 / 2) / 256; /*0x6d1f98*/
  v4 = v3 - Math::RoundToInt((double)(int)a2[2] * dbl_B0CD48 + (double)(a2[2] >= 728) + 0.5); /*0x6d1fc4*/
  *a1 = v2; /*0x6d1fca*/
  a1[1] = v4; /*0x6d1fcc*/
  return a1; /*0x6d1fcf*/
}



// ==== 0x006D1FE0  TacticalClass::AdjustForZShapeMove  this=Tactical  sig=csp ====
int *__stdcall TacticalClass::AdjustForZShapeMove(int *a1, _DWORD *a2)
{
  int v2; // kr08_4

  v2 = 30 * a2[1] / 2 + 30 * *a2 / 2; /*0x6d204b*/
  *a1 = (-60 * a2[1] / 2 + 60 * *a2 / 2) / 256; /*0x6d2057*/
  a1[1] = v2 / 256; /*0x6d2059*/
  return a1; /*0x6d202f*/
}



// ==== 0x006D2070  World::ToScreen  this=Tactical  sig=csp ====
int World::ToScreen(int *this, _DWORD *a2, int *a3)
{
  int v3; // ecx
  double v4; // st7
  float *v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  float v11; // [esp+4h] [ebp-18h] BYREF
  float v12; // [esp+8h] [ebp-14h]
  int v13; // [esp+Ch] [ebp-10h]
  float v14[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (double)(int)*a2; /*0x6d2082*/
  v13 = 0; /*0x6d2084*/
  v11 = v4; /*0x6d208c*/
  v12 = (float)(int)a2[1]; /*0x6d2098*/
  v5 = TransformMatrix3x4Point(v14, (float *)(v3 + 3556), &v11); /*0x6d209c*/
  v11 = *v5; /*0x6d20a3*/
  v12 = v5[1]; /*0x6d20ae*/
  v13 = *((_DWORD *)v5 + 2); /*0x6d20b5*/
  LOWORD(v6) = Math::RoundToInt(v11); /*0x6d20b9*/
  v7 = v6; /*0x6d20c2*/
  LOWORD(v8) = Math::RoundToInt(v12); /*0x6d20c4*/
  v9 = v8; /*0x6d20c9*/
  *this = v7; /*0x6d20cf*/
  this->vtable2 = v9; /*0x6d20d1*/
  return (int)this; /*0x6d20d4*/
}



// ==== 0x006D20E0  ZCoordToScreenY  this=-  sig=csp ====
int __fastcall ZCoordToScreenY(int a1)
{
  int result; // eax

  LOWORD(result) = Math::RoundToInt((double)a1 * dbl_B0CD48 + (double)(a1 >= 728) + 0.5); /*0x6d2113*/
  return result; /*0x6d2118*/
}



// ==== 0x006D2120  Coord::ScaleToScreenY  this=Coord  sig=csp ====
__int64 __thiscall Coord::ScaleToScreenY(Coord *this)
{
  __int64 result; // rax
  int v2; // kr00_4

  v2 = Math::RoundToInt(((double)(int)this - 0.5) * LightningStorm_CloudHeightFactor); /*0x6d2135*/
  WORD2(result) = HIWORD(v2); /*0x6d2135*/
  LOWORD(result) = v2; /*0x6d2135*/
  return result; /*0x6d213b*/
}



// ==== 0x006D2140  Coord::To_Screen  this=Coord  sig=csp ====
bool __thiscall Coord::To_Screen(Coord *this, _DWORD *a2, int *a3)
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
  LOWORD(v6) = Math::RoundToInt((double)(int)a2[2] * dbl_B0CD48 + (double)(a2[2] >= 728) + 0.5); /*0x6d21f2*/
  *a3 = v4; /*0x6d21fd*/
  a3[1] = v5 - v6; /*0x6d21ff*/
  v7 = *a3 - *(_DWORD *)&this->__pad_C[164]; /*0x6d2213*/
  v8 = a3[1] - *(_DWORD *)&this->__pad_C[168]; /*0x6d2215*/
  *a3 = v7; /*0x6d2217*/
  a3[1] = v8; /*0x6d221b*/
  if ( v7 < -360 ) /*0x6d222a*/
    return 0; /*0x6d222c*/
  if ( v7 > dword_B0CE30 + 360 ) /*0x6d2242*/
    return 0; /*0x6d2244*/
  if ( v8 >= -180 ) /*0x6d2251*/
    return v8 <= dword_B0CE34 + 180; /*0x6d2269*/
  return 0; /*0x6d2220*/
}



// ==== 0x006D2280  TacticalClass::TransformPixel  this=TacticalClass  sig=csp ====
_DWORD *__thiscall TacticalClass::TransformPixel(TacticalClass *this, _DWORD *a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // esi
  float *v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  float v10[3]; // [esp+8h] [ebp-18h] BYREF
  float v11; // [esp+14h] [ebp-Ch] BYREF
  float v12; // [esp+18h] [ebp-8h]
  int v13; // [esp+1Ch] [ebp-4h]

  if ( *a3 >= dword_B0CE30 || (v3 = a3[1], v3 >= dword_B0CE34 + dword_B0CE2C) ) /*0x6d22ab*/
  {
    *a2 = dword_B0CE08; /*0x6d2345*/
    a2[1] = dword_B0CE0C; /*0x6d234d*/
    a2[2] = dword_B0CE10; /*0x6d2356*/
    return a2; /*0x6d2337*/
  }
  else
  {
    v4 = this->visibleArea[1] + v3; /*0x6d22bf*/
    LODWORD(v10[0]) = this->visibleArea[0] + *a3; /*0x6d22c1*/
    LODWORD(v10[1]) = v4; /*0x6d22c5*/
    v11 = (float)SLODWORD(v10[0]); /*0x6d22dc*/
    v13 = 0; /*0x6d22e4*/
    v12 = (float)v4; /*0x6d22ec*/
    v5 = TransformMatrix3x4Point(v10, (float *)this->TacticalClass_field_DE4, &v11); /*0x6d22f0*/
    v11 = *v5; /*0x6d22f7*/
    v12 = v5[1]; /*0x6d2302*/
    v13 = *((_DWORD *)v5 + 2); /*0x6d2309*/
    LOWORD(v6) = Math::RoundToInt(v11); /*0x6d230d*/
    v7 = v6; /*0x6d2316*/
    LOWORD(v8) = Math::RoundToInt(v12); /*0x6d2318*/
    *a2 = v7; /*0x6d2325*/
    a2[1] = v8; /*0x6d2327*/
    a2[2] = 0; /*0x6d232c*/
    return a2; /*0x6d232a*/
  }
}



// ==== 0x006D2360  Matrix3x4::TransformCell  this=Tactical  sig=csp ====
_DWORD *__thiscall sub_6D2360(float *this, _DWORD *a2, int *a3)
{
  float *v4; // eax
  int v5; // esi
  int v6; // eax
  int v8; // [esp+4h] [ebp-1Ch]
  float v9; // [esp+8h] [ebp-18h] BYREF
  float v10; // [esp+Ch] [ebp-14h]
  int v11; // [esp+10h] [ebp-10h]
  float v12[3]; // [esp+14h] [ebp-Ch] BYREF
  int v13; // [esp+28h] [ebp+8h]

  v13 = *a3; /*0x6d2372*/
  if ( v13 >= dword_B0CE30 || (v8 = a3[1], v8 >= dword_B0CE34) ) /*0x6d2386*/
  {
    *a2 = dword_B0CE08; /*0x6d2404*/
    a2[1] = dword_B0CE0C; /*0x6d240c*/
    a2[2] = dword_B0CE10; /*0x6d2415*/
    return a2; /*0x6d23f7*/
  }
  else
  {
    v9 = (float)v13; /*0x6d2398*/
    v11 = 0; /*0x6d23a4*/
    v10 = (float)v8; /*0x6d23ac*/
    v4 = TransformMatrix3x4Point(v12, this + 889, &v9); /*0x6d23b0*/
    v9 = *v4; /*0x6d23b7*/
    v10 = v4[1]; /*0x6d23c2*/
    v11 = *((_DWORD *)v4 + 2); /*0x6d23c9*/
    v5 = Math::RoundToInt(v9); /*0x6d23d6*/
    v6 = Math::RoundToInt(v10); /*0x6d23d8*/
    *a2 = v5; /*0x6d23e5*/
    a2[1] = v6; /*0x6d23e7*/
    a2[2] = 0; /*0x6d23ec*/
    return a2; /*0x6d23ea*/
  }
}



// ==== 0x006D2420  TacticalClass::SetPosition  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::SetPosition(TacticalClass *this, _DWORD *a2, int a3)
{
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  int result; // eax
  int v10; // edi
  int TacticalClass_field_D68; // ecx
  int v12; // [esp+14h] [ebp-4h]

  this->TacticalClass_field_DC = 0; /*0x6d2439*/
  this->TacticalClass_field_D8 = dword_8428EC[a3]; /*0x6d244a*/
  v12 = a2[1]; /*0x6d245c*/
  v4 = (-60 * v12 / 2 + 60 * *a2 / 2) / 256; /*0x6d24c4*/
  v5 = (30 * v12 / 2 + 30 * *a2 / 2) / 256; /*0x6d24c7*/
  LOWORD(v6) = Math::RoundToInt((double)(int)a2[2] * dbl_B0CD48 + (double)(a2[2] >= 728) + 0.5); /*0x6d24ee*/
  v7 = this->visibleArea[1]; /*0x6d24f3*/
  v8 = v5 - v6 - v7; /*0x6d2507*/
  result = this->TacticalClass_field_D64; /*0x6d250b*/
  v10 = v7 + v8; /*0x6d2511*/
  TacticalClass_field_D68 = this->TacticalClass_field_D68; /*0x6d2513*/
  this->TacticalClass_field_D0 = v4; /*0x6d2519*/
  this->TacticalClass_field_D4 = v10; /*0x6d251f*/
  this->TacticalClass_field_C8 = result; /*0x6d2525*/
  this->TacticalClass_field_CC = TacticalClass_field_D68; /*0x6d252b*/
  return result; /*0x6d2531*/
}



// ==== 0x006D2540  Tactical::ScrollViewport  this=Tactical  sig=csp ====
char __thiscall TacticalClass::ScrollViewport(Tactical *this)
{
  int v1; // eax
  char v2; // bl
  char *v4; // ebp
  double v5; // st7
  char *v6; // edi
  int *v7; // eax
  double v8; // st7
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  signed int v12; // edi
  signed int v13; // eax
  int v14; // edi
  AbstractClass *Ticks; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v22; // [esp+8h] [ebp-14h] BYREF
  int v23; // [esp+Ch] [ebp-10h]
  char v24; // [esp+10h] [ebp-Ch] BYREF
  int v25; // [esp+14h] [ebp-8h]

  LOBYTE(v1) = dword_A8D5F8; /*0x6d2540*/
  v2 = 0; /*0x6d2549*/
  if ( (dword_A8D5F8 & 2) != 0 ) /*0x6d2550*/
    return v1; /*0x6d2550*/
  if ( this->Tactical_field_0xA8 != *(IUnknown **)&stru_A8EB00.?[416] ) /*0x6d2565*/
  {
    if ( stru_A8EB00.?[376] ) /*0x6d2573*/
    {
      v4 = &this->__pad_AC[36]; /*0x6d2584*/
      if ( (*(_DWORD *)&this->__pad_AC[36] != dword_B0CE08 || *(_DWORD *)&this->__pad_AC[40] != dword_B0CE0C) /*0x6d25af*/
        && *(float *)&this->__pad_AC[44] != 0.0 )
      {
        v5 = *(float *)&this->__pad_AC[48] + *(float *)&this->__pad_AC[44]; /*0x6d25bb*/
        *(float *)&this->__pad_AC[48] = v5; /*0x6d25c1*/
        if ( v5 > 1.0 ) /*0x6d25d2*/
          *(_DWORD *)&this->__pad_AC[48] = 1065353216; /*0x6d25d4*/
        v6 = &this->__pad_AC[28]; /*0x6d25e4*/
        v7 = TacticalClass::CalcInverseAlpha( /*0x6d25f2*/
               (TacticalClass *)&v24,
               (int)&this->__pad_AC[36],
               *(float *)&this->__pad_AC[48]);
        v8 = *(float *)&this->__pad_AC[48]; /*0x6d25f7*/
        v9 = *v7; /*0x6d2603*/
        v25 = v7[1]; /*0x6d260a*/
        if ( v8 >= 1.0 ) /*0x6d2611*/
        {
          *(_DWORD *)v4 = 0; /*0x6d2617*/
          *(_DWORD *)v6 = 0; /*0x6d261a*/
          *(_DWORD *)&this->__pad_AC[40] = 0; /*0x6d261c*/
          *(_DWORD *)&this->__pad_AC[32] = 0; /*0x6d261f*/
          *(_DWORD *)&this->__pad_AC[44] = 0; /*0x6d2622*/
          *(_DWORD *)&this->__pad_AC[48] = 0; /*0x6d2628*/
        }
        v22 = v9; /*0x6d2639*/
        v23 = v25; /*0x6d263d*/
        if ( !ClampCoordMap(&v22) || stru_A8EB00.?[391] ) /*0x6d2651*/
        {
          v11 = v25; /*0x6d265d*/
          v10 = v9; /*0x6d2661*/
        }
        else
        {
          v10 = v22; /*0x6d2653*/
          v11 = v23; /*0x6d2657*/
        }
        *(_DWORD *)&this->__pad_11F[3141] = v10; /*0x6d2663*/
        *(_DWORD *)&this->__pad_11F[3157] = v10; /*0x6d2669*/
        *(_DWORD *)&this->__pad_11F[3145] = v11; /*0x6d266f*/
        *(_DWORD *)&this->__pad_11F[3161] = v11; /*0x6d2675*/
        TacticalClass::CalcViewportCells((TacticalClass *)this); /*0x6d267d*/
        this->__pad_11F[3166] = 1; /*0x6d2682*/
        v2 = 1; /*0x6d2689*/
      }
    }
    v12 = *(_DWORD *)&this->__pad_DA8[4]; /*0x6d2691*/
    if ( this->Tactical_field_0xDA4 != (AbstractClass *)-1 ) /*0x6d269b*/
    {
      v13 = Timer::GetTicks() - (unsigned int)this->Tactical_field_0xDA4; /*0x6d26a8*/
      if ( v13 >= v12 ) /*0x6d26b0*/
      {
LABEL_20:
        v14 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 80); /*0x6d26b8*/
        Ticks = (AbstractClass *)Timer::GetTicks(); /*0x6d26c5*/
        v16 = v25; /*0x6d26ca*/
        this->Tactical_field_0xDA4 = Ticks; /*0x6d26ce*/
        v17 = *(_DWORD *)&this->__pad_11F[3201]; /*0x6d26d4*/
        *(_DWORD *)this->__pad_DA8 = v16; /*0x6d26da*/
        *(_DWORD *)&this->__pad_DA8[4] = v14; /*0x6d26e1*/
        *(_DWORD *)&this->__pad_11F[3201] = v17 + 1; /*0x6d26e7*/
        goto LABEL_21; /*0x6d26e7*/
      }
      v12 -= v13; /*0x6d26b2*/
    }
    if ( v12 ) /*0x6d26b6*/
      goto LABEL_21; /*0x6d26b6*/
    goto LABEL_20; /*0x6d26b6*/
  }
LABEL_21:
  LOBYTE(v1) = stru_A8EB00.?[416]; /*0x6d26ed*/
  this->Tactical_field_0xA8 = *(IUnknown **)&stru_A8EB00.?[416]; /*0x6d26f3*/
  if ( *(_DWORD *)&this->__pad_11F[3157] != *(_DWORD *)&this->__pad_11F[3141] /*0x6d2715*/
    || (v1 = *(_DWORD *)&this->__pad_11F[3145], *(_DWORD *)&this->__pad_11F[3161] != v1) )
  {
    if ( !v2 ) /*0x6d2719*/
    {
      v18 = *(_DWORD *)&this->__pad_11F[3157]; /*0x6d2721*/
      v23 = *(_DWORD *)&this->__pad_11F[3161]; /*0x6d272b*/
      v22 = v18; /*0x6d2732*/
      if ( !ClampCoordMap(&v22) || stru_A8EB00.?[391] ) /*0x6d2746*/
      {
        v19 = *(_DWORD *)&this->__pad_11F[3157]; /*0x6d2752*/
        v20 = *(_DWORD *)&this->__pad_11F[3161]; /*0x6d2758*/
      }
      else
      {
        v19 = v22; /*0x6d2748*/
        v20 = v23; /*0x6d274c*/
      }
      *(_DWORD *)&this->__pad_11F[3141] = v19; /*0x6d275e*/
      *(_DWORD *)&this->__pad_11F[3157] = v19; /*0x6d2764*/
      *(_DWORD *)&this->__pad_11F[3145] = v20; /*0x6d276a*/
      *(_DWORD *)&this->__pad_11F[3161] = v20; /*0x6d2770*/
      LOBYTE(v1) = TacticalClass::CalcViewportCells((TacticalClass *)this); /*0x6d2778*/
      this->__pad_11F[3166] = 1; /*0x6d277d*/
    }
  }
  return v1; /*0x6d2784*/
}



// ==== 0x006D2790  Cell::CreateCrater  this=Tactical  sig=csp ====
char __stdcall Cell::CreateCrater(int a1, int a2, int a3, int a4, char a5)
{
  int v5; // ecx
  int *v6; // eax
  int v7; // ebp
  int v8; // ecx
  int v9; // edx
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  char *v15; // esi
  char *v16; // edi
  int v17; // eax
  bool v18; // cc
  int v19; // eax
  bool v20; // bl
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  const RECT *v25; // [esp+0h] [ebp-68h]
  const RECT *v26; // [esp+4h] [ebp-64h]
  int v27; // [esp+10h] [ebp-58h]
  int v28; // [esp+14h] [ebp-54h]
  int v29; // [esp+18h] [ebp-50h]
  int v30; // [esp+1Ch] [ebp-4Ch]
  int v31; // [esp+20h] [ebp-48h]
  int v32; // [esp+24h] [ebp-44h]
  int v33; // [esp+28h] [ebp-40h]
  int v34; // [esp+2Ch] [ebp-3Ch]
  int v35; // [esp+30h] [ebp-38h] BYREF
  int v36; // [esp+34h] [ebp-34h]
  int v37; // [esp+38h] [ebp-30h]
  int v38; // [esp+3Ch] [ebp-2Ch]
  _DWORD v39[5]; // [esp+40h] [ebp-28h] BYREF
  _DWORD v40[5]; // [esp+54h] [ebp-14h] BYREF

  v5 = g_CraterCreationState; /*0x6d2793*/
  v29 = -1; /*0x6d27a1*/
  v30 = 0x7FFFFFFF; /*0x6d27a9*/
  v28 = 0; /*0x6d27b1*/
  if ( g_CraterCreationState <= 0 ) /*0x6d27b5*/
    goto LABEL_43; /*0x6d27b5*/
  v27 = 0; /*0x6d27bb*/
  do /*0x6d2a15*/
  {
    v35 = *(_DWORD *)((char *)g_CraterPool + v27); /*0x6d27d0*/
    v36 = *(_DWORD *)((char *)g_CraterPool + v27 + 4); /*0x6d27d7*/
    v37 = *(_DWORD *)((char *)g_CraterPool + v27 + 8); /*0x6d27de*/
    v38 = *(_DWORD *)((char *)g_CraterPool + v27 + 12); /*0x6d27f2*/
    v6 = ClipRectIntersection(v40, &v35, &a1, 0, 0); /*0x6d27f6*/
    v7 = v38; /*0x6d2801*/
    v31 = *v6; /*0x6d2805*/
    v32 = v6[1]; /*0x6d280c*/
    v8 = v36; /*0x6d2810*/
    v33 = v6[2]; /*0x6d2817*/
    v9 = v35; /*0x6d281b*/
    v34 = v6[3]; /*0x6d2824*/
    if ( v37 <= 0 || v38 <= 0 ) /*0x6d2830*/
    {
      v10 = a4; /*0x6d28c8*/
      v39[1] = a2; /*0x6d28cc*/
      v11 = a3; /*0x6d28d0*/
      v39[0] = a1; /*0x6d28d4*/
    }
    else if ( a3 <= 0 || a4 <= 0 ) /*0x6d2844*/
    {
      v39[0] = v35; /*0x6d28b2*/
      v39[1] = v36; /*0x6d28b6*/
      v11 = v37; /*0x6d28ba*/
      v10 = v38; /*0x6d28bc*/
    }
    else
    {
      v10 = v38; /*0x6d2846*/
      v11 = v37; /*0x6d284e*/
      if ( v35 > a1 ) /*0x6d2850*/
      {
        v11 = v35 + v37 - a1; /*0x6d2854*/
        v9 = a1; /*0x6d2856*/
      }
      if ( v36 > a2 ) /*0x6d285e*/
      {
        v10 = v36 - a2 + v38; /*0x6d2862*/
        v8 = a2; /*0x6d2864*/
      }
      if ( v11 + v9 < a1 + a3 ) /*0x6d2871*/
        v11 = a3 - v9 + a1 + 1; /*0x6d287d*/
      if ( v10 + v8 < a4 + a2 ) /*0x6d2890*/
        v10 = a2 - v8 + a4 + 1; /*0x6d289c*/
      v7 = v38; /*0x6d28a0*/
      v39[0] = v9; /*0x6d28a4*/
      v9 = v35; /*0x6d28a8*/
      v39[1] = v8; /*0x6d28ac*/
    }
    if ( v33 > 0 && v34 > 0 ) /*0x6d28ea*/
    {
      if ( v31 == a1 && v32 == a2 && v33 == a3 && v34 == a4 ) /*0x6d291e*/
      {
        LOBYTE(v12) = a5; /*0x6d2920*/
        if ( !a5 ) /*0x6d2926*/
          return v12; /*0x6d2926*/
        LOBYTE(v12) = v27; /*0x6d2932*/
        if ( *((_BYTE *)g_CraterPool + v27 + 16) ) /*0x6d2936*/
          return v12; /*0x6d293c*/
      }
      else if ( v31 == v9 && v32 == v36 && v33 == v37 && v34 == v7 ) /*0x6d2967*/
      {
        if ( a5 || !*((_BYTE *)g_CraterPool + v27 + 16) ) /*0x6d297b*/
        {
          if ( v28 < g_CraterCreationState ) /*0x6d298e*/
          {
            v13 = v28; /*0x6d2991*/
            if ( v28 < --g_CraterCreationState ) /*0x6d299a*/
            {
              v14 = v27; /*0x6d299c*/
              do /*0x6d29be*/
              {
                ++v13; /*0x6d29a6*/
                v15 = (char *)g_CraterPool + v14 + 20; /*0x6d29a7*/
                v16 = (char *)g_CraterPool + v14; /*0x6d29ab*/
                v14 += 20; /*0x6d29b3*/
                qmemcpy(v16, v15, 0x14u); /*0x6d29b6*/
              }
              while ( v13 < g_CraterCreationState ); /*0x6d29be*/
            }
          }
          --v28; /*0x6d29c8*/
          v27 -= 20; /*0x6d29cc*/
        }
      }
      else
      {
        v17 = v10 * v11; /*0x6d29de*/
        if ( v17 < v37 * v7 + a3 * a4 && v17 < v30 ) /*0x6d29eb*/
        {
          v30 = v17; /*0x6d29f1*/
          v29 = v28; /*0x6d29f5*/
        }
      }
    }
    v5 = g_CraterCreationState; /*0x6d2a01*/
    v18 = ++v28 < g_CraterCreationState; /*0x6d2a0b*/
    v27 += 20; /*0x6d2a11*/
  }
  while ( v18 ); /*0x6d2a15*/
  if ( v29 == -1 ) /*0x6d2a22*/
  {
LABEL_43:
    v40[0] = a1; /*0x6d2a30*/
    v40[2] = a3; /*0x6d2a38*/
    LOBYTE(v40[4]) = a5; /*0x6d2a40*/
    LOBYTE(v12) = dword_B0CE80; /*0x6d2a44*/
    v40[1] = a2; /*0x6d2a49*/
    v40[3] = a4; /*0x6d2a53*/
    if ( v5 < dword_B0CE80 /*0x6d2a8e*/
      || (byte_B0CE85 || !dword_B0CE80)
      && dword_B0CE8C > 0
      && (LOBYTE(v12) = (*(int (__thiscall **)(int *, int, _DWORD))(dword_B0CE78 + 8))(
                          &dword_B0CE78,
                          dword_B0CE8C + dword_B0CE80,
                          0),
          (_BYTE)v12) )
    {
      v19 = g_CraterCreationState++; /*0x6d2a9e*/
      v12 = 5 * v19; /*0x6d2aad*/
      qmemcpy((char *)g_CraterPool + 4 * v12, v40, 0x14u); /*0x6d2ab8*/
    }
  }
  else
  {
    v20 = a5 || *((_BYTE *)g_CraterPool + 20 * v29 + 16); /*0x6d2ae0*/
    v12 = Rect::Union((LPRECT)((char *)g_CraterPool + 20 * v29), v25, v26); /*0x6d2b01*/
    v21 = *(_DWORD *)(v12 + 4); /*0x6d2b08*/
    v39[0] = *(_DWORD *)v12; /*0x6d2b0b*/
    v22 = *(_DWORD *)(v12 + 8); /*0x6d2b0f*/
    v39[1] = v21; /*0x6d2b12*/
    v23 = *(_DWORD *)(v12 + 12); /*0x6d2b16*/
    LOBYTE(v12) = (_BYTE)g_CraterPool; /*0x6d2b19*/
    v39[2] = v22; /*0x6d2b1e*/
    v39[3] = v23; /*0x6d2b27*/
    LOBYTE(v39[4]) = v20; /*0x6d2b32*/
    qmemcpy((char *)g_CraterPool + 20 * v29, v39, 0x14u); /*0x6d2b36*/
  }
  return v12; /*0x6d2aba*/
}



// ==== 0x006D2B50  nullsub_238  this=-  sig=csp ====
void __stdcall nullsub_238(int a1, int a2)
{
  ; /*0x6d2b50*/
}



// ==== 0x006D2B60  TacticalMap::RenderCell  this=TacticalMap  sig=csp ====
int __thiscall TacticalMap::RenderCell(TacticalMap *this, char a2, int a3, int a4, int a5)
{
  int v6; // esi
  int v7; // ebp
  int *v8; // eax
  int *v9; // eax
  int *v10; // eax
  int *v11; // ecx
  int v12; // edx
  int v13; // eax
  char *v14; // esi
  char *v15; // edi
  int result; // eax
  int v17; // ebp
  CellClass **v18; // edi
  int *Coords; // eax
  int *v20; // eax
  int v21; // ecx
  int v22; // [esp-8h] [ebp-78h]
  int v23; // [esp-4h] [ebp-74h]
  int v24; // [esp+10h] [ebp-60h]
  int v25; // [esp+14h] [ebp-5Ch] BYREF
  void *v26; // [esp+18h] [ebp-58h]
  int v27; // [esp+1Ch] [ebp-54h]
  Coord2D v28; // [esp+20h] [ebp-50h] BYREF
  int v29[2]; // [esp+28h] [ebp-48h] BYREF
  int v30; // [esp+30h] [ebp-40h] BYREF
  int v31; // [esp+34h] [ebp-3Ch]
  int v32; // [esp+38h] [ebp-38h]
  int v33; // [esp+3Ch] [ebp-34h]
  int v34[4]; // [esp+40h] [ebp-30h] BYREF
  Rect v35; // [esp+50h] [ebp-20h] BYREF
  _DWORD v36[4]; // [esp+60h] [ebp-10h] BYREF

  if ( !a2 ) /*0x6d2b6f*/
  {
    if ( g_CraterCreationState ) /*0x6d2b7d*/
    {
      v6 = g_CraterCreationState - 1; /*0x6d2b83*/
      v24 = g_CraterCreationState - 1; /*0x6d2b86*/
      if ( g_CraterCreationState - 1 >= 0 ) /*0x6d2b8a*/
      {
        v7 = 20 * v6; /*0x6d2b93*/
        do /*0x6d2cfd*/
        {
          v30 = *(_DWORD *)((char *)g_CraterPool + v7); /*0x6d2ba2*/
          v31 = *(_DWORD *)((char *)g_CraterPool + v7 + 4); /*0x6d2ba9*/
          v32 = *(_DWORD *)((char *)g_CraterPool + v7 + 8); /*0x6d2bb0*/
          v33 = *(_DWORD *)((char *)g_CraterPool + v7 + 12); /*0x6d2bbd*/
          v30 += a3; /*0x6d2bc7*/
          v31 += a4; /*0x6d2bd0*/
          v26 = DSurface_ViewBounds.field_4; /*0x6d2bda*/
          v28 = *(Coord2D *)&DSurface_ViewBounds.field_0; /*0x6d2bde*/
          v25 = DSurface_ViewBounds.field_0; /*0x6d2be7*/
          v23 = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x6d2bf5*/
          v22 = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x6d2bfa*/
          v8 = Coord2D::Sub(&v28, v29, &v25); /*0x6d2c05*/
          v9 = Rect::Construct(&v35, v8, v22, v23); /*0x6d2c0f*/
          v34[0] = *v9; /*0x6d2c18*/
          v34[1] = v9[1]; /*0x6d2c21*/
          v34[2] = v9[2]; /*0x6d2c28*/
          v34[3] = v9[3]; /*0x6d2c37*/
          v10 = ClipRectIntersection(v36, v34, &v30, 0, 0); /*0x6d2c40*/
          v30 = *v10; /*0x6d2c49*/
          v31 = v10[1]; /*0x6d2c50*/
          v32 = v10[2]; /*0x6d2c57*/
          v33 = v10[3]; /*0x6d2c64*/
          v11 = (int *)((char *)g_CraterPool + v7); /*0x6d2c68*/
          *v11 = v30; /*0x6d2c6b*/
          v11[1] = v31; /*0x6d2c72*/
          v11[2] = v32; /*0x6d2c79*/
          v11[3] = v33; /*0x6d2c80*/
          if ( v32 > 0 && v33 > 0 ) /*0x6d2c91*/
          {
            TacticalMap::FillScanlinesOpaque((TacticalMap *)g_ZBufferDescriptor, v30, v31, v32, v33); /*0x6d2cee*/
          }
          else if ( v6 < g_CraterCreationState ) /*0x6d2c9a*/
          {
            v12 = v6; /*0x6d2c9d*/
            if ( v6 < --g_CraterCreationState ) /*0x6d2ca6*/
            {
              v13 = v7; /*0x6d2ca8*/
              do /*0x6d2cc8*/
              {
                ++v12; /*0x6d2cb0*/
                v14 = (char *)g_CraterPool + v13 + 20; /*0x6d2cb1*/
                v15 = (char *)g_CraterPool + v13; /*0x6d2cb5*/
                v13 += 20; /*0x6d2cbd*/
                qmemcpy(v15, v14, 0x14u); /*0x6d2cc0*/
              }
              while ( v12 < g_CraterCreationState ); /*0x6d2cc8*/
              v6 = v24; /*0x6d2cca*/
            }
          }
          --v6; /*0x6d2cf3*/
          v7 -= 20; /*0x6d2cf4*/
          v24 = v6; /*0x6d2cf9*/
        }
        while ( v6 >= 0 ); /*0x6d2cfd*/
      }
    }
  }
  result = *((_DWORD *)this + 56); /*0x6d2d03*/
  if ( result > 0 && !a2 ) /*0x6d2d17*/
  {
    v17 = 0; /*0x6d2d1d*/
    v18 = (CellClass **)((char *)this + 228); /*0x6d2d27*/
    do /*0x6d2dc2*/
    {
      Coords = CellClass::GetCoords(*v18, &v30); /*0x6d2d34*/
      v25 = *Coords; /*0x6d2d3b*/
      v26 = (void *)Coords[1]; /*0x6d2d47*/
      v27 = 0; /*0x6d2d59*/
      v20 = Coord::To_ScreenRaw(v29, &v25); /*0x6d2d61*/
      v21 = v20[1] - *((_DWORD *)this + 45); /*0x6d2d81*/
      *(_DWORD *)v28.__pad_0 = *v20 - *((_DWORD *)this + 44) + DSurface_ViewBounds.field_0 - 30; /*0x6d2d8d*/
      v28.Coord2D_field_0x04 = (int)DSurface_ViewBounds.field_4 + v21 - 15; /*0x6d2d9c*/
      if ( g_hWnd ) /*0x6d2da0*/
        DSurface::Process((int)*v18, (int *)v28.__pad_0, (int *)a5); /*0x6d2db1*/
      result = *((_DWORD *)this + 56); /*0x6d2db6*/
      ++v17; /*0x6d2dbc*/
      ++v18; /*0x6d2dbd*/
    }
    while ( v17 < result ); /*0x6d2dc2*/
  }
  return result; /*0x6d2dc8*/
}



// ==== 0x006D2DE0  TacticalClass::RenderIsometricOverlay  this=TacticalClass  sig=csp ====
signed int __thiscall TacticalClass::RenderIsometricOverlay(TacticalClass *this, int *a2, int *a3, char a4)
{
  char v4; // bl
  int *visibleCells; // ebp
  int *v7; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  int *v11; // eax
  signed int result; // eax
  int v13; // ebx
  int v14; // edi
  int *v15; // ecx
  int v16; // ecx
  __int16 v17[2]; // [esp+Ch] [ebp-58h] BYREF
  int v18; // [esp+10h] [ebp-54h] BYREF
  _DWORD v19[3]; // [esp+18h] [ebp-4Ch] BYREF
  int v20; // [esp+24h] [ebp-40h] BYREF
  int v21; // [esp+28h] [ebp-3Ch]
  signed int v22; // [esp+2Ch] [ebp-38h]
  int v23; // [esp+30h] [ebp-34h]
  int v24[8]; // [esp+34h] [ebp-30h] BYREF
  _DWORD v25[4]; // [esp+54h] [ebp-10h] BYREF
  int *v26; // [esp+68h] [ebp+4h]

  v4 = a4; /*0x6d2de4*/
  if ( a4 ) /*0x6d2dee*/
  {
    TacticalClass::RenderIsometric((int)this, &DSurface_ViewBounds.field_0, (int)&DSurface_ViewBounds); /*0x6d2dfa*/
  }
  else
  {
    if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d2e0c*/
      TacticalClass::RenderIsometric((int)this, a2, (int)a2); /*0x6d2e12*/
    if ( a3[2] > 0 && a3[3] > 0 ) /*0x6d2e27*/
      TacticalClass::RenderIsometric((int)this, a3, (int)a3); /*0x6d2e2d*/
  }
  if ( this->visibleCellCount > 0 && !a4 ) /*0x6d2e42*/
  {
    v26 = 0; /*0x6d2e4a*/
    visibleCells = this->visibleCells; /*0x6d2e5e*/
    do /*0x6d2f79*/
    {
      Coord::Subtract( /*0x6d2eaf*/
        (Coord *)v19,
        ((((__int16)*(_DWORD *)(*visibleCells + 36) << 8) + 128) / 256) << 8,
        ((((__int16)HIWORD(*(_DWORD *)(*visibleCells + 36)) << 8) + 128) / 256) << 8,
        0);
      v20 = v19[0]; /*0x6d2ec0*/
      v21 = v19[1]; /*0x6d2ec4*/
      v22 = v19[2]; /*0x6d2ed4*/
      v7 = Coord::To_ScreenRaw(&v18, &v20); /*0x6d2ed8*/
      v8 = this->visibleArea[1]; /*0x6d2ee5*/
      v9 = *v7 - this->visibleArea[0]; /*0x6d2eeb*/
      v10 = v7[1]; /*0x6d2eed*/
      v24[0] = v9 - 30; /*0x6d2ef3*/
      v24[3] = 30; /*0x6d2efc*/
      v24[1] = (int)DSurface_ViewBounds.field_4 + v10 - v8; /*0x6d2f16*/
      v24[2] = 60; /*0x6d2f24*/
      v11 = ClipRectIntersection(v25, &DSurface_ViewBounds.field_0, v24, 0, 0); /*0x6d2f28*/
      v24[4] = *v11; /*0x6d2f31*/
      v24[5] = v11[1]; /*0x6d2f38*/
      if ( v11[2] > 0 && v11[3] > 0 ) /*0x6d2f48*/
      {
        *(_DWORD *)v17 = *(_DWORD *)(*visibleCells + 36); /*0x6d2f5c*/
        TacticalMapClass::ProcessCell((TacticalMapClass *)this, v17, (int)v24); /*0x6d2f60*/
      }
      ++visibleCells; /*0x6d2f70*/
      v26 = (int *)((char *)v26 + 1); /*0x6d2f75*/
    }
    while ( (int)v26 < this->visibleCellCount ); /*0x6d2f79*/
    v4 = a4; /*0x6d2f7f*/
  }
  result = g_CraterCreationState; /*0x6d2f84*/
  if ( g_CraterCreationState ) /*0x6d2f8b*/
  {
    if ( !v4 ) /*0x6d2f93*/
    {
      result = g_CraterCreationState - 1; /*0x6d2f99*/
      if ( g_CraterCreationState - 1 >= 0 ) /*0x6d2f9c*/
      {
        v13 = g_CraterCreationState; /*0x6d2fa5*/
        v14 = 20 * result; /*0x6d2fa8*/
        do /*0x6d302e*/
        {
          v20 = *(_DWORD *)((char *)g_CraterPool + v14); /*0x6d2fbc*/
          v21 = *(_DWORD *)((char *)g_CraterPool + v14 + 4); /*0x6d2fc3*/
          v22 = *(_DWORD *)((char *)g_CraterPool + v14 + 8); /*0x6d2fca*/
          v23 = *(_DWORD *)((char *)g_CraterPool + v14 + 12); /*0x6d2fdd*/
          v21 += (int)DSurface_ViewBounds.field_4; /*0x6d2feb*/
          v15 = ClipRectIntersection(v25, &DSurface_ViewBounds.field_0, &v20, 0, 0); /*0x6d2ff4*/
          v20 = *v15; /*0x6d2ff8*/
          v21 = v15[1]; /*0x6d2fff*/
          result = v15[2]; /*0x6d3003*/
          v22 = result; /*0x6d3006*/
          v16 = v15[3]; /*0x6d300a*/
          v23 = v16; /*0x6d300f*/
          if ( result > 0 && v16 > 0 ) /*0x6d3017*/
            result = TacticalClass::RenderIsometric((int)this, &v20, (int)&v20); /*0x6d3025*/
          v14 -= 20; /*0x6d302a*/
          --v13; /*0x6d302d*/
        }
        while ( v13 ); /*0x6d302e*/
      }
    }
  }
  return result; /*0x6d3034*/
}



// ==== 0x006D3040  TacticalClass::DrawTerrainPartial  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::DrawTerrainPartial(TacticalClass *this, int *a2, int *a3, char a4)
{
  int *visibleCells; // ebx
  int *v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int *v10; // eax
  int v11; // ecx
  int result; // eax
  int v13; // ebx
  int v14; // edi
  int *v15; // ecx
  int v16; // ecx
  int v17; // [esp+Ch] [ebp-54h] BYREF
  _DWORD v18[3]; // [esp+14h] [ebp-4Ch] BYREF
  int v19; // [esp+20h] [ebp-40h] BYREF
  int v20; // [esp+24h] [ebp-3Ch]
  int v21; // [esp+28h] [ebp-38h]
  int v22; // [esp+2Ch] [ebp-34h]
  int v23[4]; // [esp+30h] [ebp-30h] BYREF
  int v24[2]; // [esp+40h] [ebp-20h] BYREF
  int v25; // [esp+48h] [ebp-18h]
  int v26; // [esp+4Ch] [ebp-14h]
  _DWORD v27[4]; // [esp+50h] [ebp-10h] BYREF
  int v28; // [esp+6Ch] [ebp+Ch]

  if ( a4 ) /*0x6d304e*/
  {
    TacticalClass::DrawTerrain((int *)this, &DSurface_ViewBounds.field_0, &DSurface_ViewBounds); /*0x6d305a*/
  }
  else
  {
    if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d306c*/
      TacticalClass::DrawTerrain((int *)this, a2, a2); /*0x6d3072*/
    if ( a3[2] > 0 && a3[3] > 0 ) /*0x6d3087*/
      TacticalClass::DrawTerrain((int *)this, a3, a3); /*0x6d308d*/
  }
  if ( this->visibleCellCount > 0 && !a4 ) /*0x6d30a2*/
  {
    v28 = 0; /*0x6d30aa*/
    visibleCells = this->visibleCells; /*0x6d30be*/
    do /*0x6d31d6*/
    {
      Coord::Subtract( /*0x6d310e*/
        (Coord *)v18,
        ((((__int16)*(_DWORD *)(*visibleCells + 36) << 8) + 128) / 256) << 8,
        ((((__int16)HIWORD(*(_DWORD *)(*visibleCells + 36)) << 8) + 128) / 256) << 8,
        0);
      v19 = v18[0]; /*0x6d311f*/
      v20 = v18[1]; /*0x6d3123*/
      v21 = v18[2]; /*0x6d3133*/
      v6 = Coord::To_ScreenRaw(&v17, &v19); /*0x6d3137*/
      v7 = this->visibleArea[1]; /*0x6d3144*/
      v8 = *v6 - this->visibleArea[0]; /*0x6d314a*/
      v9 = v6[1]; /*0x6d314c*/
      v23[0] = v8 - 30; /*0x6d3152*/
      v23[3] = 30; /*0x6d315b*/
      v23[1] = (int)DSurface_ViewBounds.field_4 + v9 - v7; /*0x6d3175*/
      v23[2] = 60; /*0x6d3183*/
      v10 = ClipRectIntersection(v27, &DSurface_ViewBounds.field_0, v23, 0, 0); /*0x6d3187*/
      v24[0] = *v10; /*0x6d3190*/
      v24[1] = v10[1]; /*0x6d3197*/
      v25 = v10[2]; /*0x6d319e*/
      v11 = v10[3]; /*0x6d31a2*/
      v26 = v11; /*0x6d31a7*/
      if ( v25 > 0 && v11 > 0 ) /*0x6d31af*/
        TacticalClass::DrawTerrain((int *)this, v24, v24); /*0x6d31bd*/
      ++visibleCells; /*0x6d31cd*/
      ++v28; /*0x6d31d2*/
    }
    while ( v28 < this->visibleCellCount ); /*0x6d31d6*/
  }
  result = g_CraterCreationState; /*0x6d31dd*/
  if ( g_CraterCreationState ) /*0x6d31e4*/
  {
    result = g_CraterCreationState - 1; /*0x6d31ea*/
    if ( g_CraterCreationState - 1 >= 0 ) /*0x6d31ed*/
    {
      v13 = g_CraterCreationState; /*0x6d31f6*/
      v14 = 20 * result; /*0x6d31f9*/
      do /*0x6d327d*/
      {
        v19 = *(_DWORD *)((char *)g_CraterPool + v14); /*0x6d320b*/
        v20 = *(_DWORD *)((char *)g_CraterPool + v14 + 4); /*0x6d3212*/
        v21 = *(_DWORD *)((char *)g_CraterPool + v14 + 8); /*0x6d3219*/
        v22 = *(_DWORD *)((char *)g_CraterPool + v14 + 12); /*0x6d322c*/
        v20 += (int)DSurface_ViewBounds.field_4; /*0x6d323a*/
        v15 = ClipRectIntersection(v27, &DSurface_ViewBounds.field_0, &v19, 0, 0); /*0x6d3243*/
        v19 = *v15; /*0x6d3247*/
        v20 = v15[1]; /*0x6d324e*/
        result = v15[2]; /*0x6d3252*/
        v21 = result; /*0x6d3255*/
        v16 = v15[3]; /*0x6d3259*/
        v22 = v16; /*0x6d325e*/
        if ( result > 0 && v16 > 0 ) /*0x6d3266*/
          result = TacticalClass::DrawTerrain((int *)this, &v19, &v19); /*0x6d3274*/
        v14 -= 20; /*0x6d3279*/
        --v13; /*0x6d327c*/
      }
      while ( v13 ); /*0x6d327d*/
    }
  }
  return result; /*0x6d3283*/
}



// ==== 0x006D3290  ObjectClass::DrawBuildingAnimFrame  this=ObjectClass  sig=csp ====
int __thiscall DrawBuildingAnimFrame(ObjectClass *this, int *a2, int *a3, char a4)
{
  int v5; // ebp
  char *v6; // ebx
  int *v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  int result; // eax
  int v12; // ebx
  int v13; // esi
  int *v14; // ecx
  int v15; // ecx
  int v16; // [esp+Ch] [ebp-28h] BYREF
  int v17; // [esp+14h] [ebp-20h] BYREF
  int v18; // [esp+18h] [ebp-1Ch]
  int v19; // [esp+1Ch] [ebp-18h]
  int v20; // [esp+20h] [ebp-14h]
  int v21[4]; // [esp+24h] [ebp-10h] BYREF
  int v22; // [esp+40h] [ebp+Ch]

  if ( a4 ) /*0x6d329e*/
  {
    TacticalClass::DrawBuildingsInView((TacticalClass *)this, &DSurface_ViewBounds.field_0); /*0x6d32a5*/
  }
  else
  {
    if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d32b7*/
      TacticalClass::DrawBuildingsInView((TacticalClass *)this, a2); /*0x6d32bc*/
    if ( a3[2] > 0 && a3[3] > 0 ) /*0x6d32d1*/
      TacticalClass::DrawBuildingsInView((TacticalClass *)this, a3); /*0x6d32d6*/
  }
  if ( *((int *)this + 56) > 0 && !a4 ) /*0x6d32ec*/
  {
    v5 = 0; /*0x6d32f2*/
    v6 = (char *)this + 228; /*0x6d32fc*/
    do /*0x6d33bb*/
    {
      v22 = *(_DWORD *)(*(_DWORD *)v6 + 36); /*0x6d3307*/
      v18 = (((SHIWORD(v22) << 8) + 128) / 256) << 8; /*0x6d334b*/
      v17 = ((((__int16)v22 << 8) + 128) / 256) << 8; /*0x6d3358*/
      v19 = 0; /*0x6d335c*/
      v7 = Coord::To_ScreenRaw(&v16, &v17); /*0x6d3360*/
      v8 = *v7 - this->fallRate; /*0x6d336d*/
      v9 = this->u32_2D; /*0x6d336f*/
      v10 = v7[1]; /*0x6d3375*/
      v21[0] = v8 - 30; /*0x6d337b*/
      v21[2] = 60; /*0x6d3384*/
      v21[3] = 30; /*0x6d338d*/
      v21[1] = (int)DSurface_ViewBounds.field_4 + v10 - v9; /*0x6d33a3*/
      TacticalClass::DrawBuildingsInView((TacticalClass *)this, v21); /*0x6d33aa*/
      ++v5; /*0x6d33b5*/
      v6 += 4; /*0x6d33b6*/
    }
    while ( v5 < this->attachedBomb ); /*0x6d33bb*/
  }
  result = g_CraterCreationState; /*0x6d33c1*/
  if ( g_CraterCreationState ) /*0x6d33c9*/
  {
    result = g_CraterCreationState - 1; /*0x6d33cf*/
    if ( g_CraterCreationState - 1 >= 0 ) /*0x6d33d2*/
    {
      v12 = g_CraterCreationState; /*0x6d33db*/
      v13 = 20 * result; /*0x6d33de*/
      do /*0x6d345d*/
      {
        v17 = *(_DWORD *)((char *)g_CraterPool + v13); /*0x6d33f0*/
        v18 = *(_DWORD *)((char *)g_CraterPool + v13 + 4); /*0x6d33f7*/
        v19 = *(_DWORD *)((char *)g_CraterPool + v13 + 8); /*0x6d33fe*/
        v20 = *(_DWORD *)((char *)g_CraterPool + v13 + 12); /*0x6d3411*/
        v18 += (int)DSurface_ViewBounds.field_4; /*0x6d341f*/
        v14 = ClipRectIntersection(v21, &DSurface_ViewBounds.field_0, &v17, 0, 0); /*0x6d3428*/
        v17 = *v14; /*0x6d342c*/
        v18 = v14[1]; /*0x6d3433*/
        result = v14[2]; /*0x6d3437*/
        v19 = result; /*0x6d343a*/
        v15 = v14[3]; /*0x6d343e*/
        v20 = v15; /*0x6d3443*/
        if ( result > 0 && v15 > 0 ) /*0x6d344b*/
          result = (int)TacticalClass::DrawBuildingsInView((TacticalClass *)this, &v17); /*0x6d3454*/
        v13 -= 20; /*0x6d3459*/
        --v12; /*0x6d345c*/
      }
      while ( v12 ); /*0x6d345d*/
    }
  }
  return result; /*0x6d345f*/
}



// ==== 0x006D3470  ObjectClass::DrawBuildingShadow  this=ObjectClass  sig=csp ====
int __thiscall DrawBuildingShadow(ObjectClass *this, int *a2, int *a3, char a4)
{
  CellStruct *v5; // ecx
  int v6; // ebp
  char *v7; // edi
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
  _DWORD v23[4]; // [esp+34h] [ebp-10h] BYREF

  if ( a4 ) /*0x6d347f*/
  {
    v5 = &DSurface_ViewBounds; /*0x6d3481*/
LABEL_8:
    TacticalClass::DrawBuildings((TacticalClass *)v5); /*0x6d34b1*/
    goto LABEL_9; /*0x6d34b1*/
  }
  if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d3498*/
    TacticalClass::DrawBuildings((TacticalClass *)a2); /*0x6d349a*/
  v5 = (CellStruct *)a3; /*0x6d349f*/
  if ( a3[2] > 0 && a3[3] > 0 ) /*0x6d34af*/
    goto LABEL_8; /*0x6d34af*/
LABEL_9:
  if ( *((int *)this + 56) > 0 && !a4 ) /*0x6d34c6*/
  {
    v6 = 0; /*0x6d34cc*/
    v7 = (char *)this + 228; /*0x6d34d6*/
    do /*0x6d35a7*/
    {
      Coord::Subtract( /*0x6d3526*/
        (Coord *)v18,
        ((((__int16)*(_DWORD *)(*(_DWORD *)v7 + 36) << 8) + 128) / 256) << 8,
        ((((__int16)HIWORD(*(_DWORD *)(*(_DWORD *)v7 + 36)) << 8) + 128) / 256) << 8,
        0);
      v19 = v18[0]; /*0x6d3537*/
      v20 = v18[1]; /*0x6d353b*/
      v21 = v18[2]; /*0x6d354b*/
      v8 = Coord::To_ScreenRaw(&v17, &v19); /*0x6d354f*/
      v9 = *v8 - this->fallRate; /*0x6d355c*/
      v10 = this->u32_2D; /*0x6d355e*/
      v11 = v8[1]; /*0x6d3564*/
      v23[0] = v9 - 30; /*0x6d356a*/
      v23[2] = 60; /*0x6d3573*/
      v23[3] = 30; /*0x6d357c*/
      v23[1] = (char *)DSurface_ViewBounds.field_4 + v11 - v10; /*0x6d358e*/
      TacticalClass::DrawBuildings((TacticalClass *)v23); /*0x6d3596*/
      ++v6; /*0x6d35a1*/
      v7 += 4; /*0x6d35a2*/
    }
    while ( v6 < this->attachedBomb ); /*0x6d35a7*/
  }
  result = g_CraterCreationState; /*0x6d35ad*/
  if ( g_CraterCreationState ) /*0x6d35b4*/
  {
    result = g_CraterCreationState - 1; /*0x6d35ba*/
    if ( g_CraterCreationState - 1 >= 0 ) /*0x6d35bd*/
    {
      v13 = g_CraterCreationState; /*0x6d35c6*/
      v14 = 20 * result; /*0x6d35c9*/
      do /*0x6d3647*/
      {
        v19 = *(_DWORD *)((char *)g_CraterPool + v14); /*0x6d35dd*/
        v20 = *(_DWORD *)((char *)g_CraterPool + v14 + 4); /*0x6d35e4*/
        v21 = *(_DWORD *)((char *)g_CraterPool + v14 + 8); /*0x6d35eb*/
        v22 = *(_DWORD *)((char *)g_CraterPool + v14 + 12); /*0x6d35f7*/
        v20 += (int)DSurface_ViewBounds.field_4; /*0x6d360c*/
        v15 = ClipRectIntersection(v23, &DSurface_ViewBounds.field_0, &v19, 0, 0); /*0x6d3615*/
        v19 = *v15; /*0x6d3619*/
        v20 = v15[1]; /*0x6d3620*/
        result = v15[2]; /*0x6d3624*/
        v21 = result; /*0x6d3627*/
        v16 = v15[3]; /*0x6d362b*/
        v22 = v16; /*0x6d3630*/
        if ( result > 0 && v16 > 0 ) /*0x6d3638*/
          result = TacticalClass::DrawBuildings((TacticalClass *)&v19); /*0x6d363e*/
        v14 -= 20; /*0x6d3643*/
        --v13; /*0x6d3646*/
      }
      while ( v13 ); /*0x6d3647*/
    }
  }
  return result; /*0x6d3649*/
}



// ==== 0x006D3660  TacticalClass::CalcAllDrawPositions  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::CalcAllDrawPositions(TacticalClass *this, int *a2, int *a3, int *a4, char a5)
{
  int v6; // ebx
  int *visibleCells; // ebp
  int *Coords; // eax
  int *v9; // eax
  int v10; // ecx
  int v11; // esi
  int result; // eax
  char *v13; // ecx
  int v14; // ebp
  char *v15; // edx
  int v16; // ebx
  int *v17; // eax
  int *v18; // [esp+0h] [ebp-48h]
  int v19[2]; // [esp+10h] [ebp-38h] BYREF
  int v20[4]; // [esp+18h] [ebp-30h] BYREF
  int v21; // [esp+28h] [ebp-20h] BYREF
  int v22; // [esp+2Ch] [ebp-1Ch]
  int v23; // [esp+30h] [ebp-18h]
  int v24; // [esp+34h] [ebp-14h]
  int v25[4]; // [esp+38h] [ebp-10h] BYREF
  int v26; // [esp+58h] [ebp+10h]

  if ( this->visibleCellCount <= 0 ) /*0x6d3671*/
  {
    if ( !a5 ) /*0x6d3742*/
      goto LABEL_11; /*0x6d3742*/
LABEL_10:
    TacticalClass::CalcBuildingDrawPos(&DSurface_ViewBounds.field_0, v18); /*0x6d3744*/
    goto LABEL_11; /*0x6d374b*/
  }
  if ( a5 ) /*0x6d367d*/
    goto LABEL_10; /*0x6d367d*/
  v6 = 0; /*0x6d3683*/
  visibleCells = this->visibleCells; /*0x6d368d*/
  do /*0x6d3734*/
  {
    Coords = CellClass::GetCoords((CellClass *)*visibleCells, v25); /*0x6d369b*/
    v21 = *Coords; /*0x6d36a2*/
    v22 = Coords[1]; /*0x6d36ae*/
    v23 = 0; /*0x6d36c0*/
    v9 = Coord::To_ScreenRaw(v20, &v21); /*0x6d36c8*/
    v10 = v9[1] - this->visibleArea[1]; /*0x6d36e8*/
    v19[0] = *v9 - this->visibleArea[0] + DSurface_ViewBounds.field_0 - 30; /*0x6d36f4*/
    v19[1] = (int)DSurface_ViewBounds.field_4 + v10 - 15; /*0x6d3703*/
    if ( g_hWnd ) /*0x6d3707*/
      TacticalClass::RenderCellFogOfWar(*visibleCells, (unsigned int *)v19, a4); /*0x6d3716*/
    UpdateSpotlightsFoo(v19, a4); /*0x6d3723*/
    ++v6; /*0x6d372e*/
    ++visibleCells; /*0x6d372f*/
  }
  while ( v6 < this->visibleCellCount ); /*0x6d3734*/
LABEL_11:
  v11 = 0; /*0x6d3750*/
  if ( a2[2] > 0 && a2[3] > 0 && !a5 ) /*0x6d3766*/
    TacticalClass::CalcBuildingDrawPos(a2, v18); /*0x6d376b*/
  if ( a3[2] > 0 && a3[3] > 0 && !a5 ) /*0x6d3784*/
    TacticalClass::CalcBuildingDrawPos(a3, v18); /*0x6d3789*/
  result = g_CraterCreationState; /*0x6d378e*/
  v26 = 0; /*0x6d3793*/
  if ( g_CraterCreationState > 0 ) /*0x6d3799*/
  {
    v13 = (char *)g_CraterPool; /*0x6d379f*/
    do /*0x6d3860*/
    {
      v14 = *(_DWORD *)&v13[v11]; /*0x6d37af*/
      v15 = (char *)DSurface_ViewBounds.field_4 + *(_DWORD *)&v13[v11 + 4]; /*0x6d37b7*/
      v16 = *(_DWORD *)&v13[v11 + 8]; /*0x6d37b9*/
      v25[3] = *(_DWORD *)&v13[v11 + 12]; /*0x6d37c3*/
      v25[1] = (int)v15; /*0x6d37cf*/
      v25[0] = v14 + DSurface_ViewBounds.field_0; /*0x6d37dc*/
      v25[2] = v16; /*0x6d37e0*/
      v17 = ClipRectIntersection(v20, v25, a4, 0, 0); /*0x6d37e4*/
      v21 = *v17; /*0x6d37ed*/
      v22 = v17[1]; /*0x6d37f4*/
      v23 = v17[2]; /*0x6d37fb*/
      v13 = (char *)g_CraterPool; /*0x6d37ff*/
      v24 = v17[3]; /*0x6d3808*/
      if ( *((_BYTE *)g_CraterPool + v11 + 16) ) /*0x6d380c*/
      {
        TacticalClass::FillScanlinesTransparent( /*0x6d3835*/
          *(TacticalClass **)&stru_87E790.__pad_D8[60],
          *v17,
          v17[1],
          v17[2],
          v17[3]);
        TacticalClass::CalcBuildingDrawPos(&v21, v18); /*0x6d3841*/
        v13 = (char *)g_CraterPool; /*0x6d3846*/
      }
      result = v26 + 1; /*0x6d3856*/
      v11 += 20; /*0x6d3857*/
      ++v26; /*0x6d385c*/
    }
    while ( v26 < g_CraterCreationState ); /*0x6d3860*/
  }
  return result; /*0x6d3866*/
}



// ==== 0x006D3870  TacticalClass::ClickFindBuilding  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::ClickFindBuilding(TacticalClass *this, int *a2, int *a3, char a4)
{
  int *visibleCells; // edi
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
  int v20; // [esp+30h] [ebp-2Ch]
  int v21; // [esp+34h] [ebp-28h]
  int v22; // [esp+38h] [ebp-24h]
  int v23; // [esp+3Ch] [ebp-20h] BYREF
  char *v24; // [esp+40h] [ebp-1Ch]
  int v25; // [esp+44h] [ebp-18h]
  int v26; // [esp+48h] [ebp-14h]
  int v27; // [esp+4Ch] [ebp-10h] BYREF
  char *v28; // [esp+50h] [ebp-Ch]
  int v29; // [esp+54h] [ebp-8h]
  int v30; // [esp+58h] [ebp-4h]

  if ( this->visibleCellCount > 0 ) /*0x6d3881*/
  {
    v16 = 0; /*0x6d3887*/
    visibleCells = this->visibleCells; /*0x6d388f*/
    do /*0x6d3982*/
    {
      Coord::Subtract( /*0x6d38df*/
        (Coord *)v18,
        ((((__int16)*(_DWORD *)(*visibleCells + 36) << 8) + 128) / 256) << 8,
        ((((__int16)HIWORD(*(_DWORD *)(*visibleCells + 36)) << 8) + 128) / 256) << 8,
        0);
      v19 = v18[0]; /*0x6d38f0*/
      v20 = v18[1]; /*0x6d38f4*/
      v21 = v18[2]; /*0x6d3904*/
      v6 = Coord::To_ScreenRaw(&v17, &v19); /*0x6d3908*/
      v7 = *v6 - this->visibleArea[0] - 30; /*0x6d3928*/
      v24 = (char *)DSurface_ViewBounds.field_4 + v6[1] - this->visibleArea[1]; /*0x6d3931*/
      v28 = v24; /*0x6d3935*/
      v23 = v7; /*0x6d3939*/
      v27 = v7; /*0x6d393d*/
      v25 = 60; /*0x6d3959*/
      v26 = 30; /*0x6d395d*/
      v29 = 60; /*0x6d3961*/
      v30 = 30; /*0x6d3965*/
      TacticalClass::FindBuilding(1, &v23, &v27); /*0x6d3969*/
      ++visibleCells; /*0x6d3979*/
      ++v16; /*0x6d397e*/
    }
    while ( v16 < this->visibleCellCount ); /*0x6d3982*/
  }
  if ( g_CraterCreationState && g_CraterCreationState - 1 >= 0 ) /*0x6d3998*/
  {
    v8 = g_CraterCreationState; /*0x6d39a1*/
    v9 = 20 * (g_CraterCreationState - 1); /*0x6d39a4*/
    do /*0x6d3a47*/
    {
      v19 = *(_DWORD *)((char *)g_CraterPool + v9); /*0x6d39be*/
      v20 = *(_DWORD *)((char *)g_CraterPool + v9 + 4); /*0x6d39c5*/
      v21 = *(_DWORD *)((char *)g_CraterPool + v9 + 8); /*0x6d39ce*/
      v22 = *(_DWORD *)((char *)g_CraterPool + v9 + 12); /*0x6d39da*/
      v20 += (int)DSurface_ViewBounds.field_4; /*0x6d39e7*/
      v10 = ClipRectIntersection(&v23, &DSurface_ViewBounds.field_0, &v19, 0, 0); /*0x6d39eb*/
      v19 = *v10; /*0x6d39f4*/
      v20 = v10[1]; /*0x6d39fb*/
      v21 = v10[2]; /*0x6d3a02*/
      v11 = v10[3]; /*0x6d3a06*/
      v22 = v11; /*0x6d3a0b*/
      if ( v21 > 0 && v11 > 0 ) /*0x6d3a13*/
      {
        v12 = v10[1]; /*0x6d3a17*/
        v27 = *v10; /*0x6d3a1a*/
        v13 = v10[2]; /*0x6d3a1e*/
        v14 = v10[3]; /*0x6d3a21*/
        v28 = (char *)v12; /*0x6d3a24*/
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
    return TacticalClass::FindBuilding(1, &DSurface_ViewBounds.field_0, &DSurface_ViewBounds.field_0); /*0x6d3a63*/
  if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d3a82*/
    TacticalClass::FindBuilding(1, a2, a2); /*0x6d3a8a*/
  result = (int)a3; /*0x6d3a8f*/
  if ( a3[2] > 0 && a3[3] > 0 ) /*0x6d3a9f*/
    return TacticalClass::FindBuilding(1, a3, a3); /*0x6d3aa7*/
  return result; /*0x6d3a68*/
}



// ==== 0x006D3AC0  TacticalClass::ClickFindOverlay  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::ClickFindOverlay(TacticalClass *this, int *a2, int *a3, char a4)
{
  int *visibleCells; // edi
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
  int v20; // [esp+30h] [ebp-2Ch]
  int v21; // [esp+34h] [ebp-28h]
  int v22; // [esp+38h] [ebp-24h]
  int v23; // [esp+3Ch] [ebp-20h] BYREF
  char *v24; // [esp+40h] [ebp-1Ch]
  int v25; // [esp+44h] [ebp-18h]
  int v26; // [esp+48h] [ebp-14h]
  int v27; // [esp+4Ch] [ebp-10h] BYREF
  char *v28; // [esp+50h] [ebp-Ch]
  int v29; // [esp+54h] [ebp-8h]
  int v30; // [esp+58h] [ebp-4h]

  if ( this->visibleCellCount > 0 ) /*0x6d3ad1*/
  {
    v16 = 0; /*0x6d3ad7*/
    visibleCells = this->visibleCells; /*0x6d3adf*/
    do /*0x6d3bd2*/
    {
      Coord::Subtract( /*0x6d3b2f*/
        (Coord *)v18,
        ((((__int16)*(_DWORD *)(*visibleCells + 36) << 8) + 128) / 256) << 8,
        ((((__int16)HIWORD(*(_DWORD *)(*visibleCells + 36)) << 8) + 128) / 256) << 8,
        0);
      v19 = v18[0]; /*0x6d3b40*/
      v20 = v18[1]; /*0x6d3b44*/
      v21 = v18[2]; /*0x6d3b54*/
      v6 = Coord::To_ScreenRaw(&v17, &v19); /*0x6d3b58*/
      v7 = *v6 - this->visibleArea[0] - 30; /*0x6d3b78*/
      v24 = (char *)DSurface_ViewBounds.field_4 + v6[1] - this->visibleArea[1]; /*0x6d3b81*/
      v28 = v24; /*0x6d3b85*/
      v23 = v7; /*0x6d3b89*/
      v27 = v7; /*0x6d3b8d*/
      v25 = 60; /*0x6d3ba9*/
      v26 = 30; /*0x6d3bad*/
      v29 = 60; /*0x6d3bb1*/
      v30 = 30; /*0x6d3bb5*/
      TacticalClass::FindOverlay(1, &v23, &v27); /*0x6d3bb9*/
      ++visibleCells; /*0x6d3bc9*/
      ++v16; /*0x6d3bce*/
    }
    while ( v16 < this->visibleCellCount ); /*0x6d3bd2*/
  }
  if ( g_CraterCreationState && g_CraterCreationState - 1 >= 0 ) /*0x6d3be8*/
  {
    v8 = g_CraterCreationState; /*0x6d3bf1*/
    v9 = 20 * (g_CraterCreationState - 1); /*0x6d3bf4*/
    do /*0x6d3c97*/
    {
      v19 = *(_DWORD *)((char *)g_CraterPool + v9); /*0x6d3c0e*/
      v20 = *(_DWORD *)((char *)g_CraterPool + v9 + 4); /*0x6d3c15*/
      v21 = *(_DWORD *)((char *)g_CraterPool + v9 + 8); /*0x6d3c1e*/
      v22 = *(_DWORD *)((char *)g_CraterPool + v9 + 12); /*0x6d3c2a*/
      v20 += (int)DSurface_ViewBounds.field_4; /*0x6d3c37*/
      v10 = ClipRectIntersection(&v23, &DSurface_ViewBounds.field_0, &v19, 0, 0); /*0x6d3c3b*/
      v19 = *v10; /*0x6d3c44*/
      v20 = v10[1]; /*0x6d3c4b*/
      v21 = v10[2]; /*0x6d3c52*/
      v11 = v10[3]; /*0x6d3c56*/
      v22 = v11; /*0x6d3c5b*/
      if ( v21 > 0 && v11 > 0 ) /*0x6d3c63*/
      {
        v12 = v10[1]; /*0x6d3c67*/
        v27 = *v10; /*0x6d3c6a*/
        v13 = v10[2]; /*0x6d3c6e*/
        v14 = v10[3]; /*0x6d3c71*/
        v28 = (char *)v12; /*0x6d3c74*/
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
    return TacticalClass::FindOverlay(1, &DSurface_ViewBounds.field_0, &DSurface_ViewBounds.field_0); /*0x6d3cb3*/
  if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d3cd2*/
    TacticalClass::FindOverlay(1, a2, a2); /*0x6d3cda*/
  result = (int)a3; /*0x6d3cdf*/
  if ( a3[2] > 0 && a3[3] > 0 ) /*0x6d3cef*/
    return TacticalClass::FindOverlay(1, a3, a3); /*0x6d3cf7*/
  return result; /*0x6d3cb8*/
}



// ==== 0x006D3D10  TacticalMap::Render  this=Tactical  sig=csp ====
int __thiscall TacticalMap_Render(int this, int a2, int a3, int a4)
{
  char v5; // al
  int v6; // edi
  int v7; // ebx
  unsigned int v8; // esi
  unsigned int v9; // edi
  int v10; // eax
  int result; // eax
  int v12; // ebx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  bool v16; // bl
  bool v17; // sf
  bool v18; // of
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int *v22; // eax
  int v23; // edx
  int v24; // edx
  int v25; // ecx
  int v26; // ebx
  int v27; // eax
  int v28; // edx
  char *v29; // esi
  char *v30; // edi
  int v31; // edx
  int v32; // ecx
  int v33; // ebx
  _BYTE *v34; // esi
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // edi
  DWORD v39; // ebx
  int *v40; // eax
  int v41; // ecx
  int v42; // edi
  int v43; // edx
  double v44; // st7
  int v45; // ebx
  double v46; // st7
  _DWORD *v47; // eax
  int v48; // eax
  int v49; // esi
  int v50; // ecx
  int v51; // ebx
  int v52; // edi
  _DWORD *v53; // eax
  int v... [22877 chars total]



// ==== 0x006D4B50  PrintTimerOnTactical::Start  this=PrintTimerOnTactical  sig=csp ====
int *__fastcall PrintTimerOnTactical::Start(int a1, int a2, int a3, wchar_t *Format, _DWORD *a5, bool *a6)
{
  _DWORD *Instance; // ebx
  int v7; // edi
  int v8; // ebp
  int v9; // ebp
  int v10; // edi
  unsigned __int64 v11; // rax
  int v12; // eax
  bool v13; // cf
  bool *v14; // eax
  int v15; // edx
  int v16; // esi
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  int v20; // [esp-10h] [ebp-654h]
  int v21; // [esp-Ch] [ebp-650h]
  int v22; // [esp-8h] [ebp-64Ch]
  int v23; // [esp-4h] [ebp-648h]
  int v24; // [esp-4h] [ebp-648h]
  int v25; // [esp+0h] [ebp-644h]
  int v26; // [esp+10h] [ebp-634h] BYREF
  wchar_t *v27; // [esp+14h] [ebp-630h]
  int v28; // [esp+18h] [ebp-62Ch]
  int v29; // [esp+1Ch] [ebp-628h] BYREF
  int v30; // [esp+20h] [ebp-624h] BYREF
  _DWORD v31[3]; // [esp+24h] [ebp-620h] BYREF
  int v32; // [esp+30h] [ebp-614h] BYREF
  int v33; // [esp+34h] [ebp-610h] BYREF
  char v34[12]; // [esp+38h] [ebp-60Ch] BYREF
  wchar_t v35[256]; // [esp+44h] [ebp-600h] BYREF
  wchar_t v36; // [esp+244h] [ebp-400h] BYREF
  char v37[508]; // [esp+248h] [ebp-3FCh] BYREF
  wchar_t Buffer[256]; // [esp+444h] [ebp-200h] BYREF

  v29 = a1; /*0x6d4b58*/
  v28 = a2; /*0x6d4b5e*/
  Instance = (_DWORD *)TextRenderer::GetInstance(); /*0x6d4b73*/
  v7 = a3 / 60 / 60; /*0x6d4ba4*/
  v8 = a3 % 60; /*0x6d4bb0*/
  v23 = a3 % 60; /*0x6d4bb7*/
  v27 = (wchar_t *)(a3 / 60 % 60); /*0x6d4bb8*/
  if ( v7 ) /*0x6d4bbd*/
  {
    swprintf(Buffer, (const size_t)&off_842AD8, Format, a3 / 60 / 60, v27, v23); /*0x6d4bd5*/
    swprintf(&v36, (const size_t)&off_842ACC, Format); /*0x6d4bef*/
    swprintf(v35, (const size_t)&off_842AB0, (const wchar_t *const)v7, v27, v8); /*0x6d4c05*/
  }
  else
  {
    swprintf(Buffer, (const size_t)&off_842A94, Format, v27, v23); /*0x6d4c24*/
    swprintf(&v36, (const size_t)&off_842ACC, Format); /*0x6d4c37*/
    swprintf(v35, (const size_t)a02d02d, v27, v8); /*0x6d4c4c*/
  }
  v26 = 0; /*0x6d4c68*/
  Text::Layout(Instance, v35, &v26, 0, dword_886FA8); /*0x6d4c70*/
  v9 = v28; /*0x6d4c77*/
  v10 = v28; /*0x6d4c7b*/
  if ( !a3 && a5 && a6 ) /*0x6d4c93*/
  {
    LODWORD(v11) = Audio::Callback(); /*0x6d4c95*/
    if ( *(_QWORD *)a5 > v11 ) /*0x6d4ca7*/
    {
      v14 = a6; /*0x6d4ccd*/
    }
    else
    {
      v12 = Audio::Callback(); /*0x6d4ca9*/
      v13 = __CFADD__(v12, 1000); /*0x6d4cae*/
      *a5 = v12 + 1000; /*0x6d4cb3*/
      v14 = a6; /*0x6d4cb5*/
      a5[1] = v13 + v15; /*0x6d4cbf*/
      *a6 = !*a6; /*0x6d4cc9*/
    }
    if ( *v14 ) /*0x6d4cd4*/
      v10 = *((_DWORD *)dword_B054D4 + 5); /*0x6d4cdf*/
  }
  v16 = v29 + 1; /*0x6d4cf2*/
  v31[1] = dword_886FAC - (v29 + 1) * (Instance[7] + 2); /*0x6d4d0b*/
  v31[0] = dword_886FA8 - v26 - 3; /*0x6d4d1f*/
  v17 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD *))(*(_DWORD *)DSurface_Composite + 120))( /*0x6d4d2a*/
                    DSurface_Composite,
                    &v33,
                    v31);
  TextRenderer::DrawText(&v30, (size_t)v37, DSurface_Composite, v17, v9, 0, 17944, v25); /*0x6d4d42*/
  v33 = dword_886FAC - v16 * (Instance[7] + 2); /*0x6d4d66*/
  v32 = dword_886FA8 - 3; /*0x6d4d7a*/
  v18 = (_DWORD *)(*(int (__thiscall **)(int, char *, int *, int, _DWORD, int))(*(_DWORD *)DSurface_Composite + 120))( /*0x6d4d85*/
                    DSurface_Composite,
                    v34,
                    &v32,
                    v10,
                    0,
                    17944);
  return TextRenderer::DrawText(&v29, (size_t)v35, DSurface_Composite, v18, v20, v21, v22, v24); /*0x6d4da2*/
}



// ==== 0x006D4DB0  HouseClass::SetOwnerName  this=HouseClass  sig=csp ====
wchar_t *__thiscall HouseClass::SetOwnerName(HouseClass *this, wchar_t *Source, int a3)
{
  wchar_t *result; // eax

  if ( Source ) /*0x6d4db9*/
  {
    result = wcscpy((wchar_t *)&this->arrayIndex, Source); /*0x6d4ddc*/
    this->psychicDetectionBuildings[0] = a3; /*0x6d4de8*/
  }
  else
  {
    LOWORD(this->arrayIndex) = 0; /*0x6d4dbb*/
    this->psychicDetectionBuildings[0] = -1; /*0x6d4dc3*/
    this->psychicDetectionBuildings[0] = a3; /*0x6d4dcd*/
    return (wchar_t *)a3; /*0x6d4dbf*/
  }
  return result; /*0x6d4dd3*/
}



// ==== 0x006D4E00  ObjectClass::method_6D4E00  this=ObjectClass  sig=csp ====
void __thiscall sub_6D4E00(ObjectClass *this)
{
  this->location[2] = -1; /*0x6d4e00*/
  LOWORD(this->occupant) = 0; /*0x6d4e0a*/
}



// ==== 0x006D4E20  Tactical::DisplayTacticalOverlayText  this=Tactical  sig=csp ====
void __thiscall Tactical::DisplayTacticalOverlayText(Tactical *this, wchar_t *String)
{
  signed int v3; // edi
  __int64 v4; // rax
  int v5; // kr00_4
  int v6; // ebx
  Char *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // ebx
  int v11; // ebp
  int v12; // [esp+10h] [ebp-2Ch] BYREF
  int v13[2]; // [esp+14h] [ebp-28h] BYREF
  int v14; // [esp+1Ch] [ebp-20h]
  char *v15; // [esp+20h] [ebp-1Ch]
  int v16; // [esp+24h] [ebp-18h]
  int v17; // [esp+28h] [ebp-14h]
  _DWORD v18[4]; // [esp+2Ch] [ebp-10h] BYREF

  if ( !stru_A8EB00.?[391] && (String && wcslen(String) || *(_DWORD *)&this->__pad_34[112] != -1) ) /*0x6d4e52*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(AudioStream *))(*(_DWORD *)DSurface_Composite->__pad_0 + 132))(DSurface_Composite) ) /*0x6d4e60*/
    {
      v3 = *(_DWORD *)&this->__pad_34[112]; /*0x6d4e6e*/
      if ( v3 != -1 /*0x6d4e93*/
        && *(_DWORD *)&stru_A8EB00.?[2996]
        && *(_DWORD *)&stru_A8EB00.?[2992]
        && *(__int16 *)(*(_DWORD *)&stru_A8EB00.?[2992] + 6) > v3 )
      {
        v4 = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4] - *(__int16 *)(*(_DWORD *)&stru_A8EB00.?[2992] + 4); /*0x6d4ea0*/
        v5 = *(_DWORD *)DSurface_ViewBounds.__pad_8 - *(__int16 *)(*(_DWORD *)&stru_A8EB00.?[2992] + 2); /*0x6d4eb1*/
        v13[1] = ((int)v4 - HIDWORD(v4)) >> 1; /*0x6d4eb9*/
        v13[0] = v5 / 2; /*0x6d4ebd*/
        DrawToSurfaceSHP( /*0x6d4ee5*/
          (int)DSurface_Composite,
          *(int *)&stru_A8EB00.?[2996],
          *(int *)&stru_A8EB00.?[2992],
          v3,
          v13,
          &DSurface_ViewBounds.field_0,
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
          v15 = (char *)DSurface_ViewBounds.field_4; /*0x6d4f18*/
          v17 = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x6d4f35*/
          v6 = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x6d4f3e*/
          v7 = (Char *)g_FogOfWarState; /*0x6d4f4c*/
          v8 = DSurface_ViewBounds.field_0; /*0x6d4f5a*/
          v14 = DSurface_ViewBounds.field_0; /*0x6d4f61*/
          v16 = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x6d4f65*/
          v9 = (255 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6d4f89*/
             | (255 >> g_BitMask_Blue << g_BitMask_Green)
             | (255 >> g_BitMask_Red << g_BitShift_Blue);
          Text::Layout(g_FogOfWarState, String, &v12, v13, *(int *)DSurface_ViewBounds.__pad_8); /*0x6d4f90*/
          v18[0] = v14; /*0x6d4fbb*/
          v10 = v8 + (v6 - v12) / 2; /*0x6d4fc1*/
          v18[2] = v16 + v14; /*0x6d4fc9*/
          v18[1] = v15; /*0x6d4fd1*/
          v18[3] = &v15[v17]; /*0x6d4fd9*/
          v11 = (int)&v15[(v17 - v13[0]) / 2]; /*0x6d4fdf*/
          Char::Swap(v7, 1); /*0x6d4fe1*/
          TextGroup::SetRect((TextGroup *)v7, v18); /*0x6d4fed*/
          Property::Set((Property *)v7, v9); /*0x6d4ff5*/
          FontRenderer::DrawText(v7, (int *)DSurface_Composite->__pad_0, String, v10, v11, 0, 0); /*0x6d5013*/
        }
      }
    }
  }
}



// ==== 0x006D5030  RadarClass::DrawBlips  this=RadarClass  sig=csp ====
char __thiscall RadarClass::DrawBlips(RadarClass *this, char a2)
{
  int *v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ebx
  __int16 v8; // si
  int v9; // ecx
  int v10; // edi
  int *v11; // eax
  int RadarClass_field_0xB0; // edx
  int v13; // esi
  void *v14; // eax
  char v15; // al
  int v16; // edi
  int *v17; // eax
  int v18; // edx
  int v19; // ebx
  int v20; // ecx
  int v21; // eax
  CellStruct *v22; // eax
  CellStruct *v23; // eax
  _DWORD *v24; // eax
  CellStruct *v25; // eax
  CellStruct *v26; // eax
  int v27; // edx
  int v28; // eax
  CellStruct *v29; // eax
  CellStruct *v30; // eax
  int v31; // edx
  int v32; // ecx
  int v33; // edx
  int v34; // ebx
  __int64 v35; // rax
  int v36; // edi
  __int64 v37; // rax
  int v38; // ecx
  void *v39; // eax
  char v41; // [esp+13h] [ebp-41h]
  int v42; // [esp+14h] [ebp-40h]
  __int16 v43; // [esp+1Ah] [ebp-3Ah]
  __int16 v44; // [esp+1Ah] [ebp-3Ah]
  int i; // [esp+1Ch] [ebp-38h]
  int v46; // [esp+1Ch] [ebp-38h]
  int v47; // [esp+20h] [ebp-34h] BYREF
  __int16 v48[2]; // [esp+24h] [ebp-30h] BYREF
  __int16 v49[2]; // [esp+28h] [ebp-2Ch] BYREF
  int v50; // [esp+2Ch] [ebp-28h] BYREF
  int v51; // [esp+30h] [ebp-24h]
  int v52[2]; // [esp+34h] [ebp-20h] BYREF
  int v53; // [esp+3Ch] [ebp-18h] BYREF
  int v54; // [esp+40h] [ebp-14h]
  int GroundHeight; // [esp+44h] [ebp-10h]
  int v56; // [esp+48h] [ebp-Ch] BYREF
  int v57; // [esp+4Ch] [ebp-8h]
  int v58; // [esp+50h] [ebp-4h]

  v42 = 0; /*0x6d5048*/
  if ( dword_880990 ) /*0x6d5055*/
  {
    v3 = (int *)(*(int (__thiscall **)(MouseClass *, int *))(dword_887640->MouseClass_field_0x0 + 52))( /*0x6d5071*/
                  dword_887640,
                  v52);
    v4 = *v3; /*0x6d5073*/
    v5 = v3[1]; /*0x6d5077*/
    if ( v4 < DSurface_ViewBounds.field_0 ) /*0x6d507a*/
      return v4; /*0x6d507a*/
    if ( v4 >= DSurface_ViewBounds.field_0 + dword_886FA8 ) /*0x6d508a*/
      return v4; /*0x6d508a*/
    LOBYTE(v4) = dword_886FA4; /*0x6d5090*/
    if ( v5 < dword_886FA4 ) /*0x6d5097*/
      return v4; /*0x6d5097*/
    LOBYTE(v4) = dword_886FAC + dword_886FA4; /*0x6d50a3*/
    if ( v5 >= dword_886FAC + dword_886FA4 ) /*0x6d50a7*/
      return v4; /*0x6d50a7*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_880990 + 44))(dword_880990) == 7 /*0x6d50c3*/
      && *(_BYTE *)(dword_880990 + 5815) )
    {
      LOWORD(v6) = 3; /*0x6d50df*/
      v43 = 3; /*0x6d50f1*/
      v42 = -1; /*0x6d50f5*/
    }
    else
    {
      v6 = *CoordList::GetBounds(v49, (__int16 *)dword_880964); /*0x6d5110*/
      v43 = HIWORD(v6); /*0x6d5112*/
    }
    v7 = (__int16)v42; /*0x6d5116*/
    v8 = HIWORD(v42); /*0x6d511b*/
    v41 = 1; /*0x6d5120*/
    v9 = (__int16)v6; /*0x6d5125*/
    for ( i = (__int16)v6; v7 < v9; ++v7 ) /*0x6d512e*/
    {
      v10 = v8; /*0x6d5139*/
      if ( v8 < v43 ) /*0x6d513e*/
      {
        do /*0x6d5272*/
        {
          LOWORD(v47) = v7 + dword_88095C; /*0x6d5155*/
          HIWORD(v47) = HIWORD(dword_88095C) + v10; /*0x6d5164*/
          v48[0] = dword_880960 + v7 + dword_88095C; /*0x6d5179*/
          v48[1] = HIWORD(dword_88095C) + v10 + HIWORD(dword_880960); /*0x6d517e*/
          *(_DWORD *)v49 = *(_DWORD *)v48; /*0x6d5187*/
          Coord::Subtract((Coord *)&v53, (((v48[0] << 8) + 128) / 256) << 8, (((v48[1] << 8) + 128) / 256) << 8, 0); /*0x6d51c8*/
          v56 = v53; /*0x6d51d9*/
          v57 = v54; /*0x6d51dd*/
          v58 = GroundHeight; /*0x6d51ed*/
          v11 = Coord::To_ScreenRaw(v52, &v56); /*0x6d51f1*/
          RadarClass_field_0xB0 = this->RadarClass_field_0xB0; /*0x6d51f6*/
          v13 = *(_DWORD *)this->__pad_B4; /*0x6d51fc*/
          v50 = *v11; /*0x6d5206*/
          v51 = v11[1] - v13; /*0x6d5218*/
          v50 = v50 - RadarClass_field_0xB0 - 30; /*0x6d5222*/
          if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v49) ) /*0x6d5226*/
          {
            v14 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v49); /*0x6d5239*/
            if ( !BuildingPlacement::RenderBuildingPlacementPreview((int)v14, &v50, &DSurface_ViewBounds.field_0, a2) /*0x6d5263*/
              || (v15 = v41, v41 = 1, !v15) )
            {
              v41 = 0; /*0x6d5265*/
            }
          }
          ++v10; /*0x6d526f*/
        }
        while ( v10 < v43 ); /*0x6d5272*/
        v9 = i; /*0x6d5278*/
        v8 = HIWORD(v42); /*0x6d527c*/
      }
    }
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_880990 + 44))(dword_880990); /*0x6d5295*/
    if ( byte_A8ED6B && dword_88098C ) /*0x6d52ab*/
    {
      v49[0] = v42 + dword_88095C; /*0x6d52cc*/
      v49[1] = v8 + HIWORD(dword_88095C); /*0x6d52d1*/
      v53 = ((__int16)(dword_880960 + v42 + dword_88095C) << 8) + 128; /*0x6d5302*/
      v54 = ((__int16)(v8 + HIWORD(dword_88095C) + HIWORD(dword_880960)) << 8) + 128; /*0x6d5306*/
      GroundHeight = 0; /*0x6d530a*/
      if ( v16 == 7 ) /*0x6d530e*/
      {
        Coord::Subtract( /*0x6d5337*/
          (Coord *)&v56,
          ((((__int16)(dword_880960 + v42 + dword_88095C) << 8) + 128) / 256) << 8,
          ((((__int16)(v8 + HIWORD(dword_88095C) + HIWORD(dword_880960)) << 8) + 128) / 256) << 8,
          0);
        v53 = v56; /*0x6d5348*/
        v54 = v57; /*0x6d534c*/
        GroundHeight = v58; /*0x6d5350*/
      }
      GroundHeight = Cell::GetGroundHeight(&v53); /*0x6d5369*/
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_88098C + 436))(dword_88098C, &v53); /*0x6d5374*/
      v17 = Coord::To_ScreenRaw(v52, &v53); /*0x6d5386*/
      v18 = this->RadarClass_field_0xB0; /*0x6d538b*/
      v19 = *(_DWORD *)this->__pad_B4; /*0x6d5391*/
      v50 = *v17; /*0x6d539b*/
      v20 = v17[1]; /*0x6d53a1*/
      v50 -= v18; /*0x6d53a4*/
      v51 = v20 - v19; /*0x6d53ad*/
      if ( v16 != 18 ) /*0x6d53b1*/
        (*(void (__thiscall **)(int, int *, CellStruct *))(*(_DWORD *)dword_88098C + 280))( /*0x6d53c5*/
          dword_88098C,
          &v50,
          &DSurface_ViewBounds);
    }
    if ( v41 && dword_88098C && (*(int (__thiscall **)(int))(*(_DWORD *)dword_88098C + 44))(dword_88098C) == 6 ) /*0x6d53ed*/
    {
      v21 = *(_DWORD *)(dword_88098C + 1312); /*0x6d53f8*/
      if ( *(_BYTE *)(v21 + 5822) ) /*0x6d53fe*/
      {
        v22 = (CellStruct *)CellStruct::Set((CellStruct *)&v47, v42, v8); /*0x6d542a*/
        v23 = (CellStruct *)CellStruct::Add(v22, v48, &dword_88095C); /*0x6d5431*/
        v24 = CellStruct::Add(v23, v49, &dword_880960); /*0x6d5438*/
        RenderBridgeRadarBlips((TechnoClass *)this, a2, (_DWORD *)*v24); /*0x6d544b*/
      }
      else if ( *(_BYTE *)(v21 + 5824) ) /*0x6d5455*/
      {
        v25 = (CellStruct *)CellStruct::Set((CellStruct *)&v47, v42, v8); /*0x6d5481*/
        v26 = (CellStruct *)CellStruct::Add(v25, v48, &dword_88095C); /*0x6d5488*/
        v27 = *CellStruct::Add(v26, v49, &dword_880960); /*0x6d5494*/
        RadarClass::DrawBlip(this, a2, v27); /*0x6d54a2*/
      }
      else
      {
        v28 = *(_DWORD *)(v21 + 3668); /*0x6d54a9*/
        if ( v28 && *(_BYTE *)(v28 + 680) ) /*0x6d54b3*/
        {
          v29 = (CellStruct *)CellStruct::Set((CellStruct *)&v47, v42, v8); /*0x6d54df*/
          v30 = (CellStruct *)CellStruct::Add(v29, v48, &dword_88095C); /*0x6d54e6*/
          v31 = *CellStruct::Add(v30, v49, &dword_880960); /*0x6d54f2*/
          RenderRadarBlips((TechnoClass *)this, a2, v31); /*0x6d5500*/
        }
      }
    }
  }
  else
  {
    v8 = 0; /*0x6d5507*/
  }
  LOBYTE(v4) = byte_A8ED6B; /*0x6d550c*/
  if ( !byte_A8ED6B && dword_88097C ) /*0x6d5521*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_88097C + 44))(dword_88097C) == 7 /*0x6d5536*/
      && *(_BYTE *)(dword_88097C + 5815) )
    {
      v49[0] = 3; /*0x6d5548*/
      v49[1] = 3; /*0x6d554d*/
      v4 = *(_DWORD *)v49; /*0x6d5552*/
      v49[0] = -1; /*0x6d5556*/
      v49[1] = -1; /*0x6d555b*/
      LOWORD(v42) = -1; /*0x6d5564*/
      v8 = -1; /*0x6d5568*/
      v44 = HIWORD(v4); /*0x6d556d*/
    }
    else
    {
      v4 = *CoordList::GetBounds(v49, (__int16 *)dword_880974); /*0x6d5589*/
      v44 = HIWORD(v4); /*0x6d558b*/
    }
    v32 = (__int16)v42; /*0x6d558f*/
    v33 = (__int16)v4; /*0x6d5594*/
    v42 = (__int16)v42; /*0x6d5599*/
    v46 = (__int16)v4; /*0x6d559d*/
    if ( (__int16)v42 < (__int16)v4 ) /*0x6d55a1*/
    {
      v47 = v8; /*0x6d55aa*/
      do /*0x6d5715*/
      {
        LOBYTE(v4) = v44; /*0x6d55ae*/
        v34 = v47; /*0x6d55b3*/
        if ( v47 < v44 ) /*0x6d55b9*/
        {
          while ( 1 ) /*0x6d55e4*/
          {
            HIWORD(v50) = v34 + HIWORD(dword_88096A); /*0x6d55e4*/
            v49[0] = dword_88096E + dword_88096A + v32; /*0x6d55ed*/
            v49[1] = HIWORD(dword_88096E) + v34 + HIWORD(dword_88096A); /*0x6d55fa*/
            *(_DWORD *)v48 = *(_DWORD *)v49; /*0x6d5608*/
            v35 = 15360 * (((v49[0] << 8) + 128) / 256); /*0x6d5642*/
            v36 = v35 - HIDWORD(v35); /*0x6d5645*/
            v37 = 7680 * (((v49[0] << 8) + 128) / 256); /*0x6d5652*/
            v53 = -15360 * (((v49[1] << 8) + 128) / 256) / 2 + (v36 >> 1); /*0x6d5674*/
            v38 = v53 / 256 - this->RadarClass_field_0xB0; /*0x6d56b1*/
            v52[1] = (7680 * (((v49[1] << 8) + 128) / 256) / 2 + (((int)v37 - HIDWORD(v37)) >> 1)) / 256 /*0x6d56b5*/
                   - *(_DWORD *)this->__pad_B4;
            v52[0] = v38 - 30; /*0x6d56c0*/
            if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v48) ) /*0x6d56ca*/
            {
              v39 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v48); /*0x6d56dd*/
              BuildingPlacement::RenderBuildingPlacementPreview((int)v39, v52, &DSurface_ViewBounds.field_0, a2); /*0x6d56f3*/
            }
            LOBYTE(v4) = v44; /*0x6d56f8*/
            if ( ++v34 >= v44 ) /*0x6d5700*/
              break; /*0x6d5700*/
            LOWORD(v32) = v42; /*0x6d55c1*/
          }
          v33 = v46; /*0x6d5706*/
          v32 = v42; /*0x6d570a*/
        }
        v42 = ++v32; /*0x6d5711*/
      }
      while ( v32 < v33 ); /*0x6d5715*/
    }
  }
  return v4; /*0x6d571b*/
}



// ==== 0x006D5730  ObjectClass::RenderBridgeRadarBlips  this=ObjectClass  sig=csp ====
int __thiscall RenderBridgeRadarBlips(TechnoClass *this, char a2, _DWORD *a3)
{
  int v3; // edx
  int result; // eax
  int v6; // ebp
  _WORD *v7; // edi
  __int16 v8; // dx
  Cell *v9; // eax
  CellClass *v10; // esi
  __int16 v11; // cx
  int v12; // edi
  int v13; // ebp
  int *v14; // eax
  int queuedMission; // esi
  int v16; // ecx
  __int16 v17[2]; // [esp+10h] [ebp-40h] BYREF
  __int16 v18[2]; // [esp+14h] [ebp-3Ch] BYREF
  int v19; // [esp+18h] [ebp-38h]
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
    result = (int)a3; /*0x6d573f*/
    *(_DWORD *)v18 = a3; /*0x6d5749*/
    v6 = 0; /*0x6d574d*/
    v22 = *(int *)(*(_DWORD *)(dword_88098C + 1312) + 1464) >> 8; /*0x6d5760*/
    if ( v22 > 0 )
    {
      v7 = (_WORD *)(4 * (v3 & 7) + 9041544); /*0x6d576d*/
      v25 = v7; /*0x6d5774*/
      while ( 1 ) /*0x6d577f*/
      {
        v8 = v18[1] + v7[1]; /*0x6d577f*/
        LOWORD(v19) = *v7 + result; /*0x6d5788*/
        HIWORD(v19) = v8; /*0x6d578e*/
        *(_DWORD *)v18 = v19; /*0x6d579c*/
        v9 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v18); /*0x6d57a0*/
        result = (int)Cell::IsBridge(v9); /*0x6d57a7*/
        if ( result ) /*0x6d57ae*/
          break; /*0x6d57ae*/
        v10 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v18); /*0x6d57bf*/
        result = (int)CellClass::FindInfantry(v10, 0); /*0x6d57c5*/
        if ( result ) /*0x6d57cc*/
          goto LABEL_15; /*0x6d57cc*/
        result = (unsigned __int8)v10->slopeIndex[0]; /*0x6d57d2*/
        if ( (_BYTE)result ) /*0x6d57da*/
          goto LABEL_15; /*0x6d57da*/
        result = v10->CellClass_field_4C; /*0x6d57e0*/
        if ( result ) /*0x6d57e5*/
          goto LABEL_15; /*0x6d57e5*/
        result = v22; /*0x6d57eb*/
        if ( ++v6 >= v22 ) /*0x6d57f2*/
          goto LABEL_15; /*0x6d57f2*/
        LOWORD(result) = v18[0]; /*0x6d57f8*/
      }
      if ( *(_BYTE *)(*(_DWORD *)(result + 1312) + 5822) )
      {
        result = House::IsHumanPlayer(*(House **)(result + 540)); /*0x6d581b*/
        if ( (_BYTE)result )
        {
          if ( v6 > 0 )
          {
            v11 = HIWORD(a3) + v7[1]; /*0x6d5844*/
            LOWORD(v20) = (_WORD)a3 + *v7; /*0x6d5855*/
            v24 = a2 != 0 ? 67078 : 132614;
            HIWORD(v20) = v11; /*0x6d585e*/
            *(_DWORD *)v17 = v20; /*0x6d5869*/
            v22 = v6; /*0x6d5873*/
            do /*0x6d59a0*/
            {
              v12 = -1 - 15 * *((char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v17) + 283); /*0x6d58a0*/
              v13 = -2 - 15 * *((char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v17) + 283); /*0x6d58d4*/
              v28[1] = (((v17[1] << 8) + 128) / 256) << 8; /*0x6d58f6*/
              v28[2] = 0; /*0x6d58fc*/
              v28[0] = (((v17[0] << 8) + 128) / 256) << 8; /*0x6d590e*/
              v14 = Coord::To_ScreenRaw(&v27, v28); /*0x6d5912*/
              queuedMission = this->queuedMission; /*0x6d5919*/
              v16 = v14[1]; /*0x6d5921*/
              v26[0] = *v14 - this->suspendedMission; /*0x6d5932*/
              v26[1] = v12 + v16 - queuedMission; /*0x6d594d*/
              DrawToSurfaceSHP( /*0x6d596b*/
                (int)g_DSurface_Hidden_2,
                (int)dword_87F6C4,
                dword_8A03FC,
                0,
                v26,
                &DSurface_ViewBounds.field_0,
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
              LOWORD(v21) = v17[0] + *v25; /*0x6d597c*/
              HIWORD(v21) = v25[1] + v17[1]; /*0x6d598a*/
              *(_DWORD *)v17 = v21; /*0x6d5993*/
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



// ==== 0x006D59D0  RadarClass::DrawBlip  this=RadarClass  sig=csp ====
int __thiscall RadarClass::DrawBlip(RadarClass *this, char a2, int a3)
{
  char v3; // dl
  int result; // eax
  int v6; // edi
  int v7; // ebp
  _WORD *v8; // esi
  __int16 v9; // dx
  Cell *v10; // eax
  _DWORD *v11; // eax
  int *v12; // eax
  __int16 v13; // dx
  int v14; // edi
  int v15; // ebp
  int *v16; // eax
  int v17; // esi
  int v18; // ecx
  bool v19; // zf
  int v20; // [esp-Ch] [ebp-5Ch]
  int v21; // [esp-8h] [ebp-58h]
  Object *v22; // [esp-4h] [ebp-54h]
  __int16 v23[2]; // [esp+10h] [ebp-40h] BYREF
  __int16 v24[2]; // [esp+14h] [ebp-3Ch] BYREF
  int v25; // [esp+18h] [ebp-38h]
  int v26; // [esp+1Ch] [ebp-34h]
  int v27; // [esp+20h] [ebp-30h]
  int v28; // [esp+24h] [ebp-2Ch]
  int i; // [esp+28h] [ebp-28h]
  int v30; // [esp+2Ch] [ebp-24h]
  _WORD *v31; // [esp+30h] [ebp-20h]
  int v32[2]; // [esp+34h] [ebp-1Ch] BYREF
  int v33; // [esp+3Ch] [ebp-14h] BYREF
  _DWORD v34[3]; // [esp+44h] [ebp-Ch] BYREF

  v3 = 0; /*0x6d59d5*/
  for ( i = 0; i < 8; i += 2 )
  {
    result = a3; /*0x6d59df*/
    *(_DWORD *)v24 = a3; /*0x6d59e9*/
    v6 = 0; /*0x6d59ed*/
    v28 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_E12[1418] + 1312); /*0x6d59f5*/
    v7 = *(int *)(v28 + 1464) >> 8; /*0x6d59ff*/
    if ( v7 > 0 )
    {
      v8 = (_WORD *)(4 * (v3 & 7) + 9041544); /*0x6d5a0d*/
      v31 = v8; /*0x6d5a14*/
      while ( 1 ) /*0x6d5a25*/
      {
        v9 = v24[1] + v8[1]; /*0x6d5a25*/
        LOWORD(v25) = *v8 + result; /*0x6d5a2e*/
        HIWORD(v25) = v9; /*0x6d5a34*/
        *(_DWORD *)v24 = v25; /*0x6d5a42*/
        v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x6d5a46*/
        v11 = Cell::IsBridge(v10); /*0x6d5a4d*/
        if ( v11 ) /*0x6d5a54*/
        {
          if ( *(_BYTE *)(v11[328] + 5824) ) /*0x6d5a5c*/
          {
            result = House::IsHumanPlayer((House *)v11[135]); /*0x6d5a6c*/
            if ( (_BYTE)result ) /*0x6d5a73*/
              break; /*0x6d5a73*/
          }
        }
        v22 = dword_A83D4C; /*0x6d5a7e*/
        v21 = v28; /*0x6d5a83*/
        v20 = *(_DWORD *)(v28 + 1660); /*0x6d5a8a*/
        v12 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x6d5a91*/
        result = CellClass::IsPassable(v12, v20, v21, (int)v22); /*0x6d5a98*/
        if ( !(_BYTE)result ) /*0x6d5a9f*/
          goto LABEL_14; /*0x6d5a9f*/
        if ( ++v6 >= v7 ) /*0x6d5aa8*/
          goto LABEL_14; /*0x6d5aa8*/
        LOWORD(result) = v24[0]; /*0x6d5a1a*/
      }
      if ( v6 > 0 )
      {
        v13 = HIWORD(a3) + v8[1]; /*0x6d5acf*/
        LOWORD(v26) = a3 + *v8; /*0x6d5ade*/
        v30 = a2 != 0 ? 67078 : 132614;
        HIWORD(v26) = v13; /*0x6d5ae7*/
        *(_DWORD *)v23 = v26; /*0x6d5af2*/
        v28 = v6; /*0x6d5afc*/
        do /*0x6d5c29*/
        {
          v14 = -1 - 15 * *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23) + 283); /*0x6d5b29*/
          v15 = -2 - 15 * *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23) + 283); /*0x6d5b47*/
          v34[1] = (((v23[1] << 8) + 128) / 256) << 8; /*0x6d5b86*/
          v34[0] = (((v23[0] << 8) + 128) / 256) << 8; /*0x6d5b93*/
          v34[2] = 0; /*0x6d5b97*/
          v16 = Coord::To_ScreenRaw(&v33, v34); /*0x6d5b9b*/
          v17 = *(_DWORD *)this->__pad_B4; /*0x6d5ba8*/
          v18 = v16[1]; /*0x6d5bb6*/
          v32[0] = *v16 - (unsigned int)this->RadarClass_field_0xB0; /*0x6d5bb9*/
          v32[1] = v14 + v18 - v17; /*0x6d5bdb*/
          DrawToSurfaceSHP( /*0x6d5bf4*/
            (int)g_DSurface_Hidden_2,
            *(int *)&stru_87F5F0.__pad_58[124],
            stru_8A0390.health,
            0,
            v32,
            &DSurface_ViewBounds.field_0,
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
          LOWORD(v27) = v23[0] + *v31; /*0x6d5c05*/
          HIWORD(v27) = v23[1] + v31[1]; /*0x6d5c13*/
          result = v28 - 1; /*0x6d5c20*/
          v19 = v28 == 1; /*0x6d5c20*/
          *(_DWORD *)v23 = v27; /*0x6d5c21*/
          --v28; /*0x6d5c25*/
        }
        while ( !v19 ); /*0x6d5c29*/
      }
    }
LABEL_14:
    v3 = i + 2; /*0x6d5c2f*/
  }
  return result; /*0x6d5c43*/
}



// ==== 0x006D5C50  ObjectClass::RenderRadarBlips  this=ObjectClass  sig=csp ====
int __thiscall RenderRadarBlips(TechnoClass *this, char a2, int a3)
{
  int result; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // esi
  _WORD *v7; // ebx
  __int16 v8; // ax
  int v9; // eax
  int *v10; // eax
  __int16 v11; // dx
  int v12; // edi
  int v13; // ebp
  int *v14; // ecx
  int v15; // eax
  int v16; // kr08_4
  int v17; // eax
  int queuedMission; // eax
  __int16 v19; // cx
  bool v20; // zf
  int v21; // [esp-1Ch] [ebp-6Ch]
  Object *v22; // [esp-14h] [ebp-64h]
  __int16 v23[2]; // [esp+0h] [ebp-50h] BYREF
  __int16 v24[2]; // [esp+4h] [ebp-4Ch] BYREF
  int v25; // [esp+8h] [ebp-48h]
  int v26; // [esp+Ch] [ebp-44h]
  int v27; // [esp+10h] [ebp-40h]
  int v28; // [esp+14h] [ebp-3Ch]
  int i; // [esp+18h] [ebp-38h]
  int v30; // [esp+1Ch] [ebp-34h]
  TechnoClass *v31; // [esp+20h] [ebp-30h]
  int v32; // [esp+24h] [ebp-2Ch]
  Vector2 v33; // [esp+28h] [ebp-28h] BYREF
  _DWORD v34[2]; // [esp+30h] [ebp-20h] BYREF
  int v35[3]; // [esp+38h] [ebp-18h] BYREF
  int v36; // [esp+44h] [ebp-Ch]
  IsoCoord v37; // [esp+48h] [ebp-8h] BYREF

  v31 = this; /*0x6d5c58*/
  v30 = *(_DWORD *)(*(_DWORD *)(dword_88098C + 1312) + 3668); /*0x6d5c6a*/
  result = v30; /*0x6d5c62*/
  if ( v30 )
  {
    LOBYTE(result) = 0; /*0x6d5c76*/
    for ( i = 0; i < 8; i += 2 )
    {
      *(_DWORD *)v24 = a3; /*0x6d5c88*/
      v4 = 0; /*0x6d5c8c*/
      v5 = *(_DWORD *)(dword_88098C + 1312); /*0x6d5c8e*/
      v6 = *(int *)(v5 + 1464) >> 8; /*0x6d5c9a*/
      if ( v6 > 0 )
      {
        v7 = (_WORD *)(4 * (result & 7) + 9041544); /*0x6d5ca8*/
        while ( 1 ) /*0x6d5cbb*/
        {
          v8 = v24[1] + v7[1]; /*0x6d5cbb*/
          LOWORD(v25) = v24[0] + *v7; /*0x6d5cc0*/
          HIWORD(v25) = v8; /*0x6d5cc5*/
          *(_DWORD *)v24 = v25; /*0x6d5cd2*/
          v9 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v24) + 17); /*0x6d5ce1*/
          if ( v9 != -1 /*0x6d5d12*/
            && *(_DWORD *)(v30 + 660) == v9
            && dword_A83D4C->Object_field_0x30 == *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v24) + 20) )
          {
            break; /*0x6d5d12*/
          }
          v22 = dword_A83D4C; /*0x6d5d1f*/
          v21 = *(_DWORD *)(v5 + 1660); /*0x6d5d25*/
          v10 = (int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v24); /*0x6d5d2c*/
          if ( (unsigned __int8)CellClass::IsPassable(v10, v21, v5, (int)v22) ) /*0x6d5d33*/
          {
            if ( ++v4 < v6 ) /*0x6d5d43*/
              continue; /*0x6d5d43*/
          }
          goto LABEL_14; /*0x6d5d43*/
        }
        if ( v4 > 0 )
        {
          v11 = HIWORD(a3) + v7[1]; /*0x6d5d6a*/
          LOWORD(v26) = a3 + *v7; /*0x6d5d79*/
          v32 = a2 != 0 ? 67078 : 132614;
          HIWORD(v26) = v11; /*0x6d5d82*/
          *(_DWORD *)v23 = v26; /*0x6d5d8d*/
          v28 = v4; /*0x6d5d97*/
          do /*0x6d5f09*/
          {
            v12 = -1 - 15 * *((char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v23) + 283); /*0x6d5dc4*/
            v13 = -2 - 15 * *((char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v23) + 283); /*0x6d5de2*/
            v14 = IsoCoord::ToPixel(&v37, (((v23[0] << 8) + 128) / 256) << 8, (((v23[1] << 8) + 128) / 256) << 8); /*0x6d5e27*/
            v15 = *v14; /*0x6d5e29*/
            v36 = v14[1]; /*0x6d5e30*/
            v16 = v15; /*0x6d5e3b*/
            v17 = ZCoordToScreenY(0); /*0x6d5e42*/
            *(_DWORD *)v33.__pad_0 = v16 / 256; /*0x6d5e54*/
            v33.Vector2_field_0x04 = v36 / 256 - v17; /*0x6d5e63*/
            queuedMission = v31->queuedMission; /*0x6d5e76*/
            v34[0] = v31->suspendedMission; /*0x6d5e7c*/
            v34[1] = queuedMission; /*0x6d5e80*/
            Vector2::Subtract(&v33, v34); /*0x6d5e84*/
            *(_DWORD *)v33.__pad_0 -= 30; /*0x6d5e96*/
            v35[0] = *(_DWORD *)v33.__pad_0 + 30; /*0x6d5e9d*/
            v35[1] = v33.Vector2_field_0x04 + v12; /*0x6d5ea5*/
            DrawToSurfaceSHP( /*0x6d5ed8*/
              (int)g_DSurface_Hidden_2,
              (int)dword_87F6C4,
              dword_8A03FC,
              0,
              v35,
              &DSurface_ViewBounds.field_0,
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
            LOWORD(v27) = v23[0] + *v7; /*0x6d5eee*/
            HIWORD(v27) = v23[1] + v19; /*0x6d5ef7*/
            v20 = v28 == 1; /*0x6d5f00*/
            *(_DWORD *)v23 = v27; /*0x6d5f01*/
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
int __thiscall TacticalClass::SetViewportPosition(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int result; // eax
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h]

  dword_B0CE28 = *a2; /*0x6d5f6c*/
  dword_B0CE2C = a2[1]; /*0x6d5f75*/
  dword_B0CE30 = a2[2]; /*0x6d5f7e*/
  dword_B0CE34 = a2[3]; /*0x6d5f87*/
  v3 = *(_DWORD *)(this + 3444); /*0x6d5f93*/
  v8 = *(_DWORD *)(this + 3448); /*0x6d5f9d*/
  v7 = v3; /*0x6d5fa4*/
  if ( !ClampCoordMap(&v7) || stru_A8EB00.?[391] ) /*0x6d5fb8*/
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
  result = TacticalClass::CalcViewportCells((TacticalClass *)this); /*0x6d5fea*/
  *(_BYTE *)(this + 3453) = 1; /*0x6d5fef*/
  return result; /*0x6d5ff6*/
}



// ==== 0x006D6000  TacticalMapClass::SetCameraPosition  this=Tactical  sig=csp ====
unsigned int __thiscall TacticalMapClass::SetCameraPosition(TacticalClass *this, int *a2)
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
  if ( !ClampCoordMap(&v7) || stru_A8EB00.?[391] ) /*0x6d602f*/
  {
    v4 = *a2; /*0x6d603b*/
    v5 = a2[1]; /*0x6d603d*/
  }
  else
  {
    v4 = v7; /*0x6d6031*/
    v5 = v8; /*0x6d6035*/
  }
  this->TacticalClass_field_D64 = v4; /*0x6d6040*/
  this->TacticalClass_field_D74 = v4; /*0x6d6046*/
  this->TacticalClass_field_D68 = v5; /*0x6d604c*/
  this->TacticalClass_field_D78 = v5; /*0x6d6052*/
  result = TacticalClass::CalcViewportCells(this); /*0x6d605a*/
  this->redrawing = 1; /*0x6d605f*/
  return result; /*0x6d6066*/
}



// ==== 0x006D6070  Tactical::SetTacticalPosition  this=Tactical  sig=csp ====
unsigned int __thiscall Tactical::SetTacticalPosition(TacticalClass *this, int *a2)
{
  int v3; // esi
  int v4; // ebx
  int v5; // esi
  int v6; // ebx
  unsigned int result; // eax
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  v3 = *a2; /*0x6d607d*/
  v9 = a2[1]; /*0x6d6083*/
  v8 = -60 * v9 / 2 + 60 * v3 / 2; /*0x6d60c3*/
  v4 = 30 * v9 / 2 + 30 * v3 / 2; /*0x6d60de*/
  v5 = v8 / 256; /*0x6d60e2*/
  v6 = v4 / 256 - ZCoordToScreenY(a2[2]); /*0x6d6118*/
  v8 /= 256; /*0x6d611d*/
  v9 = v6; /*0x6d6121*/
  if ( ClampCoordMap(&v8) && !stru_A8EB00.?[391] ) /*0x6d6135*/
  {
    v5 = v8; /*0x6d6137*/
    v6 = v9; /*0x6d613b*/
  }
  this->TacticalClass_field_D64 = v5; /*0x6d613f*/
  this->TacticalClass_field_D74 = v5; /*0x6d6145*/
  this->TacticalClass_field_D68 = v6; /*0x6d614d*/
  this->TacticalClass_field_D78 = v6; /*0x6d6153*/
  result = TacticalClass::CalcViewportCells(this); /*0x6d6159*/
  this->redrawing = 1; /*0x6d615e*/
  return result; /*0x6d6165*/
}



// ==== 0x006D6170  ObjectClass::RequestMapSnapshot  this=ObjectClass  sig=csp ====
_DWORD *__thiscall RequestMapSnapshot(ObjectClass *this, _DWORD *a2)
{
  *a2 = *((_DWORD *)this + 857); /*0x6d617a*/
  a2[1] = *((_DWORD *)this + 858); /*0x6d6182*/
  return a2; /*0x6d6185*/
}



// ==== 0x006D6190  ObjectClass::ComputeDelta  this=ObjectClass  sig=csp ====
int *__thiscall ObjectClass::ComputeDelta(ObjectClass *this, int *a2)
{
  int v2; // edx
  int v4; // ecx

  v2 = *((_DWORD *)this + 857) - this->fallRate; /*0x6d61a9*/
  v4 = *((_DWORD *)this + 858) - this->u32_2D; /*0x6d61af*/
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



// ==== 0x006D62E0  IsoCoord::ToScreenOffset  this=Tactical  sig=csp ====
int __stdcall IsoCoord_ToScreenOffset(int a1, int a2, int *a3, int *a4)
{
  int result; // eax

  *a3 = 60 * a1 / 2; /*0x6d62fc*/
  *a4 = 30 * a1 / 2; /*0x6d630f*/
  *a3 += -60 * a2 / 2; /*0x6d6329*/
  *a4 += 30 * a2 / 2; /*0x6d633a*/
  *a3 /= 256; /*0x6d634a*/
  *a4 /= 256; /*0x6d635a*/
  result = *a3 + 15360; /*0x6d635e*/
  *a3 = result; /*0x6d6364*/
  return result; /*0x6d632b*/
}



// ==== 0x006D6410  Terrain::ClimbCheck  this=Tactical  sig=csp ====
_DWORD *__stdcall Terrain_ClimbCheck(_DWORD *a1, _DWORD *a2)
{
  int v2; // ecx
  int v3; // esi
  int v4; // edi
  bool v5; // bl
  int v6; // ebp
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // ecx
  _DWORD *v12; // [esp+10h] [ebp-18h] BYREF
  _DWORD *v13; // [esp+14h] [ebp-14h]
  int v14; // [esp+18h] [ebp-10h]
  int v15; // [esp+24h] [ebp-4h]

  v2 = *a2 / 256; /*0x6d6434*/
  HIWORD(a2) = a2[1] / 256; /*0x6d6440*/
  LOWORD(a2) = v2; /*0x6d6445*/
  v3 = ((__int16)v2 << 8) + 128; /*0x6d6462*/
  v4 = (SHIWORD(a2) << 8) + 128; /*0x6d6468*/
  v5 = (*((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 80) & 0x1000) != 0; /*0x6d6486*/
  v6 = v4 + 1536; /*0x6d649d*/
  v14 = *((char *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 283); /*0x6d64a3*/
  v7 = v3 + 1536; /*0x6d64a7*/
  v15 = 0; /*0x6d64a9*/
  while ( 1 ) /*0x6d64b1*/
  {
    v7 -= 8; /*0x6d64b1*/
    v6 -= 8; /*0x6d64c1*/
    LOWORD(v13) = v7 / 256; /*0x6d64c9*/
    HIWORD(v13) = v6 / 256; /*0x6d64e0*/
    v12 = v13; /*0x6d64e9*/
    v8 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v12); /*0x6d64f3*/
    v9 = *((char *)v8 + 283) - v14; /*0x6d64ff*/
    if ( v5 ) /*0x6d6505*/
      v9 += 4 * ((v8[80] >> 8) & 1); /*0x6d6513*/
    v10 = v9 << 7; /*0x6d6516*/
    if ( (__int16)((v7 - v10) / 256) <= (__int16)a2 && (__int16)((v6 - v10) / 256) <= SHIWORD(a2) ) /*0x6d654e*/
      break; /*0x6d654e*/
    if ( v12 == a2 ) /*0x6d6555*/
    {
      *a1 = a2; /*0x6d6582*/
      return a1; /*0x6d655b*/
    }
  }
  *a1 = v12; /*0x6d6572*/
  return a1; /*0x6d656f*/
}



// ==== 0x006D6590  Tactical::PixelToCell  this=Tactical  sig=csp ====
_DWORD *__thiscall Tactical::PixelToCell(Tactical *this, _DWORD *a2, int *a3)
{
  int v3; // eax
  int v5; // eax
  int v6; // ecx
  float *v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  signed int v11; // ebx
  int v12; // ebp
  int v13; // ecx
  float *v14; // eax
  int v15; // eax
  int v16; // esi
  int v17; // eax
  Cell *v18; // esi
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  int v23; // ecx
  int *v24; // eax
  int v25; // ecx
  int v26; // ebx
  unsigned int v27; // ebp
  bool v28; // cc
  char v30; // [esp+13h] [ebp-69h]
  char v31; // [esp+14h] [ebp-68h]
  char v32; // [esp+15h] [ebp-67h]
  char v33; // [esp+16h] [ebp-66h]
  char v34; // [esp+17h] [ebp-65h]
  signed int v35; // [esp+18h] [ebp-64h]
  _DWORD *NeighbourContent; // [esp+1Ch] [ebp-60h]
  _DWORD *v37; // [esp+20h] [ebp-5Ch]
  int i; // [esp+24h] [ebp-58h]
  int v39; // [esp+28h] [ebp-54h]
  __int16 v40[4]; // [esp+2Ch] [ebp-50h] BYREF
  int v41; // [esp+34h] [ebp-48h]
  int v42; // [esp+38h] [ebp-44h]
  int v43; // [esp+3Ch] [ebp-40h]
  unsigned int v44; // [esp+40h] [ebp-3Ch]
  int v45[2]; // [esp+44h] [ebp-38h] BYREF
  float v46; // [esp+4Ch] [ebp-30h] BYREF
  float v47; // [esp+50h] [ebp-2Ch]
  int v48; // [esp+54h] [ebp-28h]
  float v49; // [esp+58h] [ebp-24h] BYREF
  float v50; // [esp+5Ch] [ebp-20h]
  int v51; // [esp+60h] [ebp-1Ch]
  float v52[3]; // [esp+64h] [ebp-18h] BYREF
  float v53[3]; // [esp+70h] [ebp-Ch] BYREF
  char v54; // [esp+84h] [ebp+8h]
  int *v55; // [esp+84h] [ebp+8h]

  v3 = *a3; /*0x6d659f*/
  v48 = 0; /*0x6d65ab*/
  v5 = *(_DWORD *)&this->__pad_AC[4] + v3; /*0x6d65bf*/
  v6 = a3[1] + *(_DWORD *)&this->__pad_AC[8]; /*0x6d65c6*/
  v43 = v5 - DSurface_ViewBounds.field_0; /*0x6d65c8*/
  v44 = v6 - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d65d2*/
  v46 = (float)(v5 - DSurface_ViewBounds.field_0); /*0x6d65e1*/
  v47 = (float)(v6 - (unsigned int)DSurface_ViewBounds.field_4); /*0x6d65ed*/
  v7 = TransformMatrix3x4Point(v52, (float *)this + 889, &v46); /*0x6d65f1*/
  v46 = *v7; /*0x6d65f8*/
  v47 = v7[1]; /*0x6d6603*/
  v48 = *((_DWORD *)v7 + 2); /*0x6d660a*/
  LOWORD(v8) = Math::RoundToInt(v46); /*0x6d660e*/
  v9 = v8; /*0x6d6617*/
  LOWORD(v10) = Math::RoundToInt(v47); /*0x6d6619*/
  LODWORD(v49) = (unsigned __int8)v9; /*0x6d6631*/
  LOWORD(v39) = v9 / 256; /*0x6d6638*/
  LODWORD(v50) = (unsigned __int8)v10; /*0x6d664c*/
  HIWORD(v39) = v10 / 256; /*0x6d6663*/
  v51 = 0; /*0x6d6668*/
  Coord::To_ScreenRaw(v45, &v49); /*0x6d666c*/
  v11 = a3[1] - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d6684*/
  v43 = *a3 - DSurface_ViewBounds.field_0; /*0x6d668a*/
  v12 = v11 + 180; /*0x6d668e*/
  v44 = v11; /*0x6d6694*/
  v41 = v43; /*0x6d6698*/
  v42 = v11 + 180; /*0x6d669c*/
  for ( i = 0; ; ++i )
  {
    v13 = *(_DWORD *)&this->__pad_AC[8]; /*0x6d66b4*/
    v45[0] = v41 + *(_DWORD *)&this->__pad_AC[4]; /*0x6d66bc*/
    v45[1] = v12 + v13; /*0x6d66c6*/
    v49 = (float)v45[0]; /*0x6d66d5*/
    v51 = 0; /*0x6d66e1*/
    v50 = (float)(v12 + v13); /*0x6d66e9*/
    v14 = TransformMatrix3x4Point(v53, (float *)this + 889, &v49); /*0x6d66ed*/
    v49 = *v14; /*0x6d66f4*/
    v50 = v14[1]; /*0x6d66ff*/
    v51 = *((_DWORD *)v14 + 2); /*0x6d6706*/
    LOWORD(v15) = Math::RoundToInt(v49); /*0x6d670a*/
    v16 = v15; /*0x6d6713*/
    LOWORD(v17) = Math::RoundToInt(v50); /*0x6d6715*/
    v40[0] = v16 / 256; /*0x6d672a*/
    v40[1] = v17 / 256; /*0x6d6747*/
    v18 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v40); /*0x6d6751*/
    v35 = v12 - 15 * v18->Cell_field_0x11B[0]; /*0x6d6768*/
    if ( ((int)v18->Cell_field_0x140 & 0x100) != 0 )
    {
      NeighbourContent = Cell::GetNeighbourContent(v18, 2u); /*0x6d6786*/
      v37 = Cell::GetNeighbourContent(v18, 4u); /*0x6d678f*/
      if ( ((int)v18->Cell_field_0x140 & 0x800) == 0 /*0x6d67b7*/
        || (v54 = 1, (*((_DWORD *)Cell::GetNeighbourContent(v18, 0) + 80) & 0x100) != 0) )
      {
        v54 = 0; /*0x6d67b9*/
      }
      if ( ((int)v18->Cell_field_0x140 & 0x800) != 0 /*0x6d67e2*/
        || (v30 = 1, (*((_DWORD *)Cell::GetNeighbourContent(v18, 6u) + 80) & 0x100) != 0) )
      {
        v30 = 0; /*0x6d67e4*/
      }
      v19 = (int)v18->Cell_field_0x140 & 0x800; /*0x6d67ef*/
      if ( !v19 || (v31 = 1, (v37[80] & 0x100) != 0) ) /*0x6d6806*/
        v31 = 0; /*0x6d6808*/
      if ( v19 || (v33 = 1, (NeighbourContent[80] & 0x100) != 0) ) /*0x6d6820*/
        v33 = 0; /*0x6d6822*/
      if ( !v19 /*0x6d6858*/
        || (v20 = v18->Cell_field_0x11B[0] - *((char *)NeighbourContent + 283),
            (int)((HIDWORD(v20) ^ v20) - HIDWORD(v20)) > 1)
        || (v34 = 1, (NeighbourContent[80] & 0x100) != 0) )
      {
        v34 = 0; /*0x6d685a*/
      }
      if ( v19 /*0x6d688e*/
        || (v21 = v18->Cell_field_0x11B[0] - *((char *)v37 + 283), (int)((HIDWORD(v21) ^ v21) - HIDWORD(v21)) > 1)
        || (v32 = 1, (v37[80] & 0x100) != 0) )
      {
        v32 = 0; /*0x6d6890*/
      }
      v22 = *(__int16 *)&v18->__pad_1C[8]; /*0x6d6899*/
      v23 = *(__int16 *)&v18->__pad_1C[10] << 8; /*0x6d68a8*/
      v52[2] = 0.0; /*0x6d68ab*/
      LODWORD(v52[1]) = v23; /*0x6d68b2*/
      LODWORD(v52[0]) = v22 << 8; /*0x6d68ca*/
      v24 = Coord::To_ScreenRaw((int *)&v46, v52); /*0x6d68ce*/
      v25 = -30 * v18->Cell_field_0x11B[0] / 2 + v24[1] - *(_DWORD *)&this->__pad_AC[8]; /*0x6d68ff*/
      if ( v25 <= v11 ) /*0x6d6903*/
      {
        if ( v31 || v32 ) /*0x6d6917*/
        {
          *a2 = *(_DWORD *)v40 + 0x10000; /*0x6d6a61*/
          return a2; /*0x6d6a67*/
        }
        if ( v33 || v34 ) /*0x6d692f*/
        {
          HIWORD(v55) = v40[1]; /*0x6d6a0c*/
          LOWORD(v55) = v40[0] + 1; /*0x6d6a1b*/
          *a2 = v55; /*0x6d6a2d*/
          return a2; /*0x6d6a33*/
        }
      }
      if ( v54 || v30 )
      {
        v26 = v43 - (*v24 - *(_DWORD *)&this->__pad_AC[4]); /*0x6d6971*/
        v27 = v44 - v25; /*0x6d6977*/
        if ( v54 && (int)(v27 - v26 / 2) > 15 || v30 && (int)(v27 + v26 / 2) > 15 )
          v35 -= ((int)v18->Cell_field_0x140 & 0x100) != 0 ? 0x3C : 0;
        v11 = v44; /*0x6d69c0*/
      }
      else
      {
        v35 -= ((int)v18->Cell_field_0x140 & 0x100) != 0 ? 0x3C : 0;
      }
    }
    if ( v35 <= v11 ) /*0x6d69c8*/
      break; /*0x6d69c8*/
    v28 = i + 1 < 180; /*0x6d69d8*/
    --v42; /*0x6d69dd*/
    if ( !v28 ) /*0x6d69e5*/
    {
      *a2 = v39; /*0x6d69f9*/
      return a2; /*0x6d69ff*/
    }
    v12 = v42; /*0x6d66a6*/
  }
  *a2 = *(_DWORD *)v40; /*0x6d6a78*/
  return a2; /*0x6d69f6*/
}



// ==== 0x006D6A90  sub_6D6A90  this=-  sig=csp ====
__int64 __stdcall sub_6D6A90(_DWORD *a1)
{
  void *v1; // eax
  int v2; // edx
  _DWORD v4[2]; // [esp+4h] [ebp-8h] BYREF

  v1 = Coord::To_Cell(&dword_87F7E8, a1); /*0x6d6a9e*/
  v2 = a1[1]; /*0x6d6aa5*/
  v4[0] = *a1; /*0x6d6aa8*/
  v4[1] = v2; /*0x6d6ab3*/
  return Isometric::InitTables((int)v1, v4); /*0x6d6abc*/
}



// ==== 0x006D6AD0  CellClass::GetByte284  this=Tactical  sig=csp ====
int __stdcall CellClass_GetByte284(_DWORD *a1)
{
  return *((unsigned __int8 *)Coord::To_Cell(&dword_87F7E8, a1) + 284); /*0x6d6ae9*/
}



// ==== 0x006D6BB0  sub_6D6BB0  this=-  sig=csp ====
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
    result = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x6d6bdf*/
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
        result = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x6d6c31*/
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
            result = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x6d6c85*/
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
                result = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x6d6cd3*/
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



// ==== 0x006D6D10  TacticalClass::DrawBuildingsInView  this=TacticalClass  sig=csp ====
int *__thiscall TacticalClass::DrawBuildingsInView(TacticalClass *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  float *v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int smudgeTypeIndex; // ebx
  int v11; // edx
  int v12; // ecx
  int v13; // ebp
  int *result; // eax
  int v15; // ecx
  int v16; // ebp
  int v17; // ecx
  House *v18; // eax
  int v19; // ebx
  int *StartCoords; // eax
  int *v21; // eax
  int *v22; // eax
  int v23; // edx
  int v24; // esi
  int v25; // ecx
  int v26; // ebp
  int v27; // ecx
  BuildingClass *v28; // eax
  int v29; // ebx
  int *PlacementRect; // eax
  int *v31; // eax
  __int16 v32[2]; // [esp+10h] [ebp-B0h] BYREF
  int v33; // [esp+14h] [ebp-ACh]
  int v34; // [esp+18h] [ebp-A8h]
  int v35; // [esp+1Ch] [ebp-A4h]
  unsigned int v36; // [esp+20h] [ebp-A0h]
  int *v37; // [esp+24h] [ebp-9Ch]
  _DWORD v38[2]; // [esp+28h] [ebp-98h]
  int v39[2]; // [esp+30h] [ebp-90h] BYREF
  int *v40; // [esp+38h] [ebp-88h]
  float v41; // [esp+3Ch] [ebp-84h] BYREF
  float v42; // [esp+40h] [ebp-80h]
  int v43; // [esp+44h] [ebp-7Ch]
  int v44; // [esp+48h] [ebp-78h] BYREF
  int v45; // [esp+4Ch] [ebp-74h]
  int v46; // [esp+50h] [ebp-70h]
  int v47; // [esp+54h] [ebp-6Ch] BYREF
  int v48; // [esp+58h] [ebp-68h]
  int v49; // [esp+5Ch] [ebp-64h]
  int v50; // [esp+60h] [ebp-60h]
  int v51[4]; // [esp+64h] [ebp-5Ch] BYREF
  int v52; // [esp+74h] [ebp-4Ch]
  int v53; // [esp+78h] [ebp-48h] BYREF
  int v54; // [esp+7Ch] [ebp-44h]
  int v55; // [esp+80h] [ebp-40h]
  _DWORD v56[3]; // [esp+84h] [ebp-3Ch] BYREF
  int v57; // [esp+90h] [ebp-30h] BYREF
  int v58; // [esp+94h] [ebp-2Ch]
  int v59[4]; // [esp+A0h] [ebp-20h] BYREF
  int v60[4]; // [esp+B0h] [ebp-10h] BYREF

  v3 = *a2; /*0x6d6d2f*/
  v43 = 0; /*0x6d6d31*/
  v4 = this->visibleArea[0] + v3; /*0x6d6d45*/
  v5 = a2[1] + this->visibleArea[1]; /*0x6d6d4c*/
  v35 = v4 - DSurface_ViewBounds.field_0; /*0x6d6d4e*/
  v36 = v5 - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d6d58*/
  v41 = (float)(v4 - DSurface_ViewBounds.field_0); /*0x6d6d67*/
  v42 = (float)(v5 - (unsigned int)DSurface_ViewBounds.field_4); /*0x6d6d73*/
  v6 = TransformMatrix3x4Point((float *)&v44, (float *)this->TacticalClass_field_DE4, &v41); /*0x6d6d77*/
  v41 = *v6; /*0x6d6d7e*/
  v42 = v6[1]; /*0x6d6d89*/
  v43 = *((_DWORD *)v6 + 2); /*0x6d6d90*/
  LOWORD(v7) = Math::RoundToInt(v41); /*0x6d6d94*/
  v8 = v7; /*0x6d6d9d*/
  LOWORD(v9) = Math::RoundToInt(v42); /*0x6d6d9f*/
  v53 = v8; /*0x6d6da6*/
  v54 = v9; /*0x6d6dac*/
  v55 = 0; /*0x6d6db0*/
  if ( v9 < 0 ) /*0x6d6db7*/
    v54 = 0; /*0x6d6db9*/
  if ( v8 < 0 ) /*0x6d6dbf*/
    v53 = 0; /*0x6d6dc1*/
  smudgeTypeIndex = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v53)->smudgeTypeIndex; /*0x6d6dd4*/
  v11 = (unsigned __int64)(2290649225LL * a2[3]) >> 32; /*0x6d6de3*/
  v12 = a2[2]; /*0x6d6de5*/
  v38[0] = smudgeTypeIndex; /*0x6d6df3*/
  v13 = (v11 >> 3) + ((unsigned int)v11 >> 31) + 20; /*0x6d6df7*/
  v40 = (int *)(v12 / 60 + 4); /*0x6d6e17*/
  result = ClipRectIntersection(&v57, &DSurface_ViewBounds.field_0, a2, 0, 0); /*0x6d6e20*/
  v15 = *result; /*0x6d6e25*/
  HIWORD(v38[0]) = HIWORD(smudgeTypeIndex) - 2; /*0x6d6e27*/
  v51[0] = v15; /*0x6d6e2d*/
  v16 = v13 + 1; /*0x6d6e37*/
  v51[1] = result[1]; /*0x6d6e38*/
  LOWORD(v38[0]) = smudgeTypeIndex - 4; /*0x6d6e3c*/
  v17 = result[2]; /*0x6d6e41*/
  v52 = v16; /*0x6d6e44*/
  v51[2] = v17; /*0x6d6e48*/
  v51[3] = result[3]; /*0x6d6e51*/
  if ( v16 >= 0 ) /*0x6d6e55*/
  {
    v33 = v16 + 1; /*0x6d6e5e*/
    do /*0x6d702b*/
    {
      LOWORD(v35) = v16 / 2; /*0x6d6e69*/
      HIWORD(v35) = v33 / 2; /*0x6d6e7b*/
      LOWORD(v34) = LOWORD(v38[0]) + v35; /*0x6d6e8a*/
      HIWORD(v34) = HIWORD(v38[0]) + HIWORD(v35); /*0x6d6e95*/
      result = v40; /*0x6d6e9a*/
      *(_DWORD *)v32 = v34; /*0x6d6ea4*/
      if ( (int)v40 > 0 ) /*0x6d6ea8*/
      {
        v37 = v40; /*0x6d6eae*/
        do /*0x6d7019*/
        {
          if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v32) ) /*0x6d6ebc*/
          {
            v18 = (House *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v32); /*0x6d6ed3*/
            v19 = (int)v18; /*0x6d6ed8*/
            if ( *(_DWORD *)&v18->__pad_2D[23] != -1 ) /*0x6d6ede*/
            {
              StartCoords = House::GetStartCoords(v18, v59); /*0x6d6eee*/
              v47 = *StartCoords; /*0x6d6ef7*/
              v48 = StartCoords[1]; /*0x6d6f00*/
              v49 = StartCoords[2]; /*0x6d6f07*/
              v50 = StartCoords[3]; /*0x6d6f19*/
              v21 = ClipRectIntersection(v60, v51, &v47, 0, 0); /*0x6d6f22*/
              v57 = *v21; /*0x6d6f2b*/
              v58 = v21[1]; /*0x6d6f35*/
              if ( v21[2] > 0 && v21[3] > 0 ) /*0x6d6f4c*/
              {
                Coord::Subtract((Coord *)v56, (((v32[0] << 8) + 128) / 256) << 8, (((v32[1] << 8) + 128) / 256) << 8, 0); /*0x6d6f98*/
                v44 = v56[0]; /*0x6d6fb2*/
                v45 = v56[1]; /*0x6d6fb6*/
                v46 = v56[2]; /*0x6d6fc6*/
                v22 = Coord::To_ScreenRaw((int *)&v41, &v44); /*0x6d6fca*/
                v23 = this->visibleArea[0]; /*0x6d6fcf*/
                v24 = this->visibleArea[1]; /*0x6d6fd7*/
                v39[0] = *v22; /*0x6d6fdf*/
                v25 = v22[1] - v24; /*0x6d6feb*/
                v39[0] = v39[0] - v23 - 30; /*0x6d6fed*/
                v39[1] = v25; /*0x6d6ff9*/
                BuildingClass::Draw_0(v19, v39, v51); /*0x6d7001*/
              }
            }
          }
          ++v32[0]; /*0x6d7006*/
          --v32[1]; /*0x6d700f*/
          result = (int *)((char *)v37 - 1); /*0x6d7014*/
          v37 = (int *)((char *)v37 - 1); /*0x6d7015*/
        }
        while ( v37 ); /*0x6d7019*/
      }
      --v16; /*0x6d7023*/
      --v33; /*0x6d7027*/
    }
    while ( v16 >= 0 ); /*0x6d702b*/
    v26 = v52; /*0x6d7031*/
    if ( v52 >= 0 ) /*0x6d7037*/
    {
      v33 = v52 + 1; /*0x6d7040*/
      v27 = (int)v40; /*0x6d7044*/
      do /*0x6d71cd*/
      {
        LOWORD(v35) = v26 / 2; /*0x6d704f*/
        HIWORD(v35) = v33 / 2; /*0x6d705d*/
        result = *(int **)((char *)v38 + 2); /*0x6d706c*/
        LOWORD(v37) = LOWORD(v38[0]) + v35; /*0x6d7070*/
        HIWORD(v37) = HIWORD(v38[0]) + HIWORD(v35); /*0x6d707b*/
        *(_DWORD *)v32 = v37; /*0x6d7086*/
        if ( v27 > 0 ) /*0x6d708a*/
        {
          v34 = v27; /*0x6d7090*/
          do /*0x6d71b7*/
          {
            if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v32) ) /*0x6d709e*/
            {
              v28 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v32); /*0x6d70b5*/
              v29 = (int)v28; /*0x6d70ba*/
              if ( v28->?[2] != -1 ) /*0x6d70c0*/
              {
                PlacementRect = BuildingClass::GetPlacementRect(v28, v60); /*0x6d70d0*/
                v47 = *PlacementRect; /*0x6d70d9*/
                v48 = PlacementRect[1]; /*0x6d70e2*/
                v49 = PlacementRect[2]; /*0x6d70e9*/
                v50 = PlacementRect[3]; /*0x6d70fb*/
                v31 = ClipRectIntersection(v59, v51, &v47, 0, 0); /*0x6d7104*/
                v57 = *v31; /*0x6d710d*/
                v58 = v31[1]; /*0x6d7117*/
                if ( v31[2] > 0 && v31[3] > 0 ) /*0x6d712a*/
                {
                  v46 = 0; /*0x6d715f*/
                  v44 = (((v32[0] << 8) + 128) / 256) << 8; /*0x6d717b*/
                  v45 = (((v32[1] << 8) + 128) / 256) << 8; /*0x6d717f*/
                  Coord::To_Screen((Coord *)this, &v44, v39); /*0x6d7183*/
                  v39[0] -= 30; /*0x6d719b*/
                  TacticalClass::DrawBuildingPlacement(v29, v39, v51); /*0x6d719f*/
                }
              }
            }
            ++v32[0]; /*0x6d71a4*/
            --v32[1]; /*0x6d71ad*/
            result = (int *)--v34; /*0x6d71b2*/
          }
          while ( v34 ); /*0x6d71b7*/
          v27 = (int)v40; /*0x6d71bd*/
        }
        --v26; /*0x6d71c5*/
        --v33; /*0x6d71c9*/
      }
      while ( v26 >= 0 ); /*0x6d71cd*/
    }
  }
  return result; /*0x6d71d3*/
}



// ==== 0x006D71E0  TacticalClass::CalcBuildingDrawPos  this=TacticalClass  sig=csp ====
Point2D *TacticalClass::CalcBuildingDrawPos(int *this, int *a2)
{
  int v2; // ecx
  int v3; // esi
  int v4; // eax
  float *v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  CellClass *v9; // eax
  int v10; // edi
  int v11; // edx
  int v12; // edi
  int v13; // edi
  int v14; // ecx
  int v15; // eax
  void *v16; // edi
  int *v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int *v21; // eax
  int *v22; // eax
  int v23; // ecx
  int v25; // [esp+0h] [ebp-DCh]
  int v26; // [esp+4h] [ebp-D8h]
  __int16 v27[2]; // [esp+1Ch] [ebp-C0h] BYREF
  int v28; // [esp+20h] [ebp-BCh] BYREF
  int v29; // [esp+24h] [ebp-B8h]
  int smudgeTypeIndex; // [esp+28h] [ebp-B4h]
  int v31; // [esp+30h] [ebp-ACh]
  int v32; // [esp+34h] [ebp-A8h]
  __int16 v33; // [esp+38h] [ebp-A4h]
  __int16 v34; // [esp+3Ah] [ebp-A2h]
  float v35; // [esp+40h] [ebp-9Ch] BYREF
  float v36; // [esp+44h] [ebp-98h]
  int v37; // [esp+48h] [ebp-94h]
  int v38; // [esp+4Ch] [ebp-90h]
  int v39; // [esp+50h] [ebp-8Ch]
  int v40; // [esp+54h] [ebp-88h]
  int v41; // [esp+58h] [ebp-84h] BYREF
  int v42; // [esp+5Ch] [ebp-80h]
  float v43[3]; // [esp+64h] [ebp-78h] BYREF
  _DWORD v44[2]; // [esp+70h] [ebp-6Ch] BYREF
  unsigned int v45[2]; // [esp+78h] [ebp-64h] BYREF
  _DWORD v46[3]; // [esp+80h] [ebp-5Ch] BYREF
  int v47[4]; // [esp+8Ch] [ebp-50h] BYREF
  int v48[2]; // [esp+9Ch] [ebp-40h] BYREF
  int v49; // [esp+A4h] [ebp-38h]
  int v50; // [esp+A8h] [ebp-34h]
  int v51[4]; // [esp+ACh] [ebp-30h] BYREF
  int v52[4]; // [esp+BCh] [ebp-20h] BYREF
  int v53[4]; // [esp+CCh] [ebp-10h] BYREF

  v3 = v2; /*0x6d71f2*/
  v4 = *this + *(_DWORD *)(v2 + 176) - DSurface_ViewBounds; /*0x6d7212*/
  v29 = this->q004 + *(_DWORD *)(v2 + 180) - dword_886FA4; /*0x6d721b*/
  v28 = v4; /*0x6d7224*/
  *(float *)&v26 = (float)v29; /*0x6d7228*/
  *(float *)&v25 = (float)v4; /*0x6d7234*/
  Triple::Set(&v35, v25, v26, 0); /*0x6d7237*/
  v5 = TransformMatrix3x4Point(v43, (float *)(v3 + 3556), &v35); /*0x6d724b*/
  v35 = *v5; /*0x6d7252*/
  v36 = v5[1]; /*0x6d725d*/
  v37 = *((_DWORD *)v5 + 2); /*0x6d7264*/
  LOWORD(v6) = Math::RoundToInt(v35); /*0x6d7268*/
  v7 = v6; /*0x6d7271*/
  LOWORD(v8) = Math::RoundToInt(v36); /*0x6d7273*/
  Coord::Subtract(&v41, v7, v8, 0); /*0x6d727f*/
  if ( v42 < 0 ) /*0x6d7288*/
    v42 = 0; /*0x6d728a*/
  if ( v41 < 0 ) /*0x6d7292*/
    v41 = 0; /*0x6d7294*/
  v9 = Coord::To_Cell(&dword_87F7E8, &v41); /*0x6d72a2*/
  v10 = this->q00C; /*0x6d72aa*/
  smudgeTypeIndex = v9->smudgeTypeIndex; /*0x6d72b2*/
  v11 = (unsigned __int64)(2290649225LL * v10) >> 32; /*0x6d72b8*/
  v12 = this->q008; /*0x6d72ba*/
  LOWORD(smudgeTypeIndex) = smudgeTypeIndex - 2; /*0x6d72c8*/
  v38 = (v11 >> 3) + ((unsigned int)v11 >> 31) + 17; /*0x6d72de*/
  *(_DWORD *)v27 = smudgeTypeIndex; /*0x6d72e7*/
  v13 = v12 / 60 + 4; /*0x6d72ee*/
  v39 = v13; /*0x6d72f9*/
  if ( g_hWnd ) /*0x6d72fd*/
  {
    v14 = 0; /*0x6d7303*/
    if ( (int)((v11 >> 3) + ((unsigned int)v11 >> 31) + 17) > 0 ) /*0x6d7307*/
    {
      do /*0x6d7544*/
      {
        v15 = v14 / 2; /*0x6d7317*/
        ++v14; /*0x6d7319*/
        v33 = v15; /*0x6d731a*/
        v40 = v14; /*0x6d7321*/
        v34 = v14 / 2; /*0x6d732a*/
        LOWORD(v32) = smudgeTypeIndex + v15; /*0x6d733d*/
        HIWORD(v32) = v34 + HIWORD(smudgeTypeIndex); /*0x6d7348*/
        *(_DWORD *)v27 = v32; /*0x6d7353*/
        if ( v13 > 0 ) /*0x6d7357*/
        {
          v31 = v13; /*0x6d735d*/
          do /*0x6d7532*/
          {
            if ( (unsigned __int8)LayerClass::CoordinatesLegal(&dword_87F7E8, v27) ) /*0x6d736b*/
            {
              v16 = CellCoord::To_CellObj(&dword_87F7E8, v27); /*0x6d7387*/
              Coord::Subtract(v46, (((v27[0] << 8) + 128) / 256) << 8, (((v27[1] << 8) + 128) / 256) << 8, 0); /*0x6d73cc*/
              v43[0] = *(float *)v46; /*0x6d73dd*/
              v43[1] = *(float *)&v46[1]; /*0x6d73e1*/
              v43[2] = *(float *)&v46[2]; /*0x6d73ed*/
              v17 = Coord::To_ScreenRaw((int *)&v35, v43); /*0x6d73f5*/
              v28 = *v17; /*0x6d73fc*/
              v18 = *(_DWORD *)(v3 + 180); /*0x6d7400*/
              v19 = v17[1]; /*0x6d7406*/
              v20 = *(_DWORD *)(v3 + 176); /*0x6d7409*/
              v29 = v19; /*0x6d740f*/
              v44[1] = v18; /*0x6d7417*/
              v44[0] = v20; /*0x6d7420*/
              Vector2::Subtract(&v28, v44); /*0x6d7424*/
              v28 -= 30; /*0x6d7436*/
              v51[0] = v28; /*0x6d743a*/
              v51[1] = dword_886FA4 + v29; /*0x6d744b*/
              v51[2] = 60; /*0x6d7460*/
              v51[3] = 30; /*0x6d7467*/
              v21 = ClipRectIntersection(v52, v51, this, 0, 0); /*0x6d7472*/
              v47[0] = *v21; /*0x6d747b*/
              v47[1] = v21[1]; /*0x6d7487*/
              v47[2] = v21[2]; /*0x6d7499*/
              v47[3] = v21[3]; /*0x6d74af*/
              v22 = ClipRectIntersection(v53, &DSurface_ViewBounds, v47, 0, 0); /*0x6d74b6*/
              v48[0] = *v22; /*0x6d74bf*/
              v48[1] = v22[1]; /*0x6d74c9*/
              v49 = v22[2]; /*0x6d74d3*/
              v23 = v22[3]; /*0x6d74da*/
              v50 = v23; /*0x6d74df*/
              if ( v49 > 0 && v23 > 0 ) /*0x6d74ea*/
              {
                v45[0] = v28 + DSurface_ViewBounds; /*0x6d7501*/
                v45[1] = v29 + dword_886FA4; /*0x6d750e*/
                TacticalClass::RenderCellFogOfWar((int)v16, v45, v48); /*0x6d751a*/
              }
            }
            ++v27[0]; /*0x6d751f*/
            --v27[1]; /*0x6d7528*/
            --v31; /*0x6d752e*/
          }
          while ( v31 ); /*0x6d7532*/
          v13 = v39; /*0x6d7538*/
          v14 = v40; /*0x6d753c*/
        }
      }
      while ( v14 < v38 ); /*0x6d7544*/
    }
  }
  return (Point2D *)RenderAlphaShapes(this); /*0x6d7551*/
}



// ==== 0x006D7560  TacticalClass::RenderIsometric  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::RenderIsometric(int this, int *a2, _DWORD *a3)
{
  int v3; // eax
  int v5; // eax
  int v6; // ecx
  float *v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  int v12; // ebp
  int v13; // edx
  int result; // eax
  int v15; // ecx
  int v16; // eax
  CellClass *v17; // esi
  int *ScreenRect; // eax
  _DWORD *v19; // eax
  int v20; // ebp
  __int16 v21[2]; // [esp+10h] [ebp-98h] BYREF
  int v22; // [esp+14h] [ebp-94h] BYREF
  float v23; // [esp+18h] [ebp-90h]
  int v24; // [esp+1Ch] [ebp-8Ch]
  int v25; // [esp+20h] [ebp-88h]
  unsigned int v26; // [esp+24h] [ebp-84h]
  int v27; // [esp+28h] [ebp-80h]
  int v28; // [esp+2Ch] [ebp-7Ch]
  __int16 v29; // [esp+30h] [ebp-78h]
  __int16 v30; // [esp+32h] [ebp-76h]
  int v31; // [esp+38h] [ebp-70h]
  int v32; // [esp+3Ch] [ebp-6Ch]
  int v33; // [esp+40h] [ebp-68h]
  int v34[2]; // [esp+44h] [ebp-64h] BYREF
  int v35; // [esp+4Ch] [ebp-5Ch]
  int v36; // [esp+50h] [ebp-58h]
  float v37[3]; // [esp+54h] [ebp-54h] BYREF
  _DWORD v38[6]; // [esp+60h] [ebp-48h] BYREF
  int v39; // [esp+78h] [ebp-30h]
  _DWORD v40[3]; // [esp+7Ch] [ebp-2Ch] BYREF
  int v41[4]; // [esp+88h] [ebp-20h] BYREF
  int v42[4]; // [esp+98h] [ebp-10h] BYREF

  v3 = *a2; /*0x6d7575*/
  v24 = 0; /*0x6d7581*/
  v5 = *(_DWORD *)(this + 176) + v3; /*0x6d7595*/
  v6 = a2[1] + *(_DWORD *)(this + 180); /*0x6d759c*/
  v25 = v5 - DSurface_ViewBounds.field_0; /*0x6d759e*/
  v26 = v6 - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d75a8*/
  *(float *)&v22 = (float)(v5 - DSurface_ViewBounds.field_0); /*0x6d75b7*/
  v23 = (float)(v6 - (unsigned int)DSurface_ViewBounds.field_4); /*0x6d75c3*/
  v7 = TransformMatrix3x4Point(v37, (float *)(this + 3556), (float *)&v22); /*0x6d75c7*/
  v22 = *(int *)v7; /*0x6d75ce*/
  v23 = v7[1]; /*0x6d75d9*/
  v24 = *((_DWORD *)v7 + 2); /*0x6d75e0*/
  LOWORD(v8) = Math::RoundToInt(*(float *)&v22); /*0x6d75e4*/
  v9 = v8; /*0x6d75ed*/
  LOWORD(v10) = Math::RoundToInt(v23); /*0x6d75ef*/
  Coord::Subtract((Coord *)v40, v9, v10, 0); /*0x6d75ff*/
  v11 = a2[3]; /*0x6d7608*/
  v21[0] = v40[0] / 256; /*0x6d7617*/
  v21[1] = v40[1] / 256; /*0x6d762f*/
  v25 = *(_DWORD *)v21; /*0x6d764e*/
  v12 = v11 / 15 + 17; /*0x6d7655*/
  v13 = (unsigned __int64)(2290649225LL * a2[2]) >> 32; /*0x6d765e*/
  v31 = v12; /*0x6d7660*/
  v13 >>= 5; /*0x6d7664*/
  LOWORD(v25) = v21[0] - 2; /*0x6d7669*/
  result = (unsigned int)v13 >> 31; /*0x6d766e*/
  v32 = v13 + ((unsigned int)v13 >> 31) + 4; /*0x6d7675*/
  v15 = 0; /*0x6d7679*/
  while ( v15 < v12 ) /*0x6d767d*/
  {
    v16 = v15 / 2; /*0x6d7688*/
    ++v15; /*0x6d768a*/
    v29 = v16; /*0x6d768b*/
    v33 = v15; /*0x6d7692*/
    v30 = v15 / 2; /*0x6d769b*/
    LOWORD(v28) = v25 + v16; /*0x6d76ae*/
    HIWORD(v28) = v30 + HIWORD(v25); /*0x6d76b9*/
    result = v32; /*0x6d76be*/
    *(_DWORD *)v21 = v28; /*0x6d76c8*/
    if ( v32 > 0 ) /*0x6d76cc*/
    {
      v27 = v32; /*0x6d76d2*/
      do /*0x6d7817*/
      {
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v21) ) /*0x6d76e0*/
        {
          v17 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21); /*0x6d76fc*/
          ScreenRect = CellClass::GetScreenRect(v17, v41); /*0x6d7708*/
          v34[0] = *ScreenRect; /*0x6d7711*/
          v34[1] = ScreenRect[1]; /*0x6d771a*/
          v35 = ScreenRect[2]; /*0x6d7721*/
          v36 = ScreenRect[3]; /*0x6d7733*/
          v19 = ClipRectIntersection(v42, a2, v34, 0, 0); /*0x6d773a*/
          v38[3] = *v19; /*0x6d7743*/
          v20 = v19[2]; /*0x6d774f*/
          v38[4] = v19[1]; /*0x6d7752*/
          v39 = v19[3]; /*0x6d7762*/
          Coord::Subtract((Coord *)v38, (((v21[0] << 8) + 128) / 256) << 8, (((v21[1] << 8) + 128) / 256) << 8, 0); /*0x6d7799*/
          v37[0] = *(float *)v38; /*0x6d77aa*/
          v37[1] = *(float *)&v38[1]; /*0x6d77ae*/
          v37[2] = *(float *)&v38[2]; /*0x6d77be*/
          Coord::To_Screen((Coord *)this, v37, &v22); /*0x6d77c2*/
          v22 -= 30; /*0x6d77d4*/
          if ( v35 > 0 && v36 > 0 && v20 > 0 && v39 > 0 ) /*0x6d77ec*/
            TacticalClass::CheckCellVisibility(v17->mapCoords, &v22, a3, 0); /*0x6d77ff*/
        }
        ++v21[0]; /*0x6d7804*/
        --v21[1]; /*0x6d780d*/
        result = --v27; /*0x6d7812*/
      }
      while ( v27 ); /*0x6d7817*/
      v15 = v33; /*0x6d781d*/
      v12 = v31; /*0x6d7821*/
    }
  }
  return result; /*0x6d782d*/
}



// ==== 0x006D7840  TacticalClass::DrawMap  this=Tactical  sig=csp ====
int __thiscall TacticalClass::DrawMap(int this, _DWORD *a2, int *a3)
{
  int result; // eax
  DWORD Time; // eax
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // eax
  int v11; // ebp
  float *v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // esi
  float v18; // ebx
  int v19; // ecx
  int v20; // esi
  int v21; // eax
  _DWORD *v22; // esi
  int NthOfType; // edi
  _DWORD *v24; // ebp
  BOOL v25; // edi
  _DWORD *v26; // eax
  int *ScreenRect; // eax
  int v28; // esi
  int v29; // edi
  int v30; // eax
  __int16 v31[2]; // [esp+8h] [ebp-48h] BYREF
  int v32; // [esp+Ch] [ebp-44h]
  int v33; // [esp+10h] [ebp-40h]
  int v34; // [esp+14h] [ebp-3Ch]
  int v35; // [esp+18h] [ebp-38h]
  int v36; // [esp+1Ch] [ebp-34h]
  int v37; // [esp+20h] [ebp-30h]
  float v38; // [esp+24h] [ebp-2Ch]
  float v39; // [esp+28h] [ebp-28h] BYREF
  float v40; // [esp+2Ch] [ebp-24h]
  int v41; // [esp+30h] [ebp-20h]
  int v42; // [esp+34h] [ebp-1Ch] BYREF
  int v43; // [esp+38h] [ebp-18h]
  int v44[4]; // [esp+40h] [ebp-10h] BYREF
  _DWORD *v45; // [esp+54h] [ebp+4h]

  result = PingPongBuffer::GetWriteOffset(); /*0x6d7847*/
  if ( (unsigned int)dword_ABCD44 >= result ) /*0x6d7852*/
  {
    result = (*(int (__thiscall **)(int *))(*g_DSurface_Hidden_2 + 112))(g_DSurface_Hidden_2); /*0x6d7860*/
    if ( result == 2 ) /*0x6d7866*/
    {
      result = dword_A8EB78; /*0x6d786c*/
      if ( dword_A8EB78 ) /*0x6d7873*/
      {
        result = (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*g_DSurface_Hidden_2 + 92))(g_DSurface_Hidden_2, 0, 0); /*0x6d7887*/
        v35 = result; /*0x6d788c*/
        if ( result ) /*0x6d7890*/
        {
          Time = timeGetTime(); /*0x6d7896*/
          v6 = Time - dword_B0E640; /*0x6d78a4*/
          dword_B0E640 = Time; /*0x6d78a6*/
          v32 = v6; /*0x6d78b1*/
          if ( v6 > 0x3E8 ) /*0x6d78b5*/
            v32 = 1000; /*0x6d78b7*/
          v7 = (*(int (__thiscall **)(int *))(*g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2); /*0x6d78c9*/
          v8 = *(_DWORD *)(this + 176); /*0x6d78d0*/
          v34 = v7; /*0x6d78dc*/
          v9 = *(_DWORD *)(this + 180); /*0x6d78e2*/
          v10 = v8 + *a2; /*0x6d78ee*/
          v11 = a2[1]; /*0x6d78f0*/
          v42 = v10 - DSurface_ViewBounds; /*0x6d78f5*/
          v43 = v11 + v9 - dword_886FA4; /*0x6d7905*/
          v39 = (float)(v10 - DSurface_ViewBounds); /*0x6d790a*/
          v41 = 0; /*0x6d791c*/
          v40 = (float)v43; /*0x6d7924*/
          v12 = TransformMatrix3x4Point((float *)&v42, (float *)(this + 3556), &v39); /*0x6d7928*/
          v39 = *v12; /*0x6d792f*/
          v40 = v12[1]; /*0x6d793a*/
          v41 = *((_DWORD *)v12 + 2); /*0x6d7941*/
          LOWORD(v13) = Math::RoundToInt(v39); /*0x6d7945*/
          v14 = v13; /*0x6d794e*/
          LOWORD(v15) = Math::RoundToInt(v40); /*0x6d7950*/
          v16 = a2[3]; /*0x6d796d*/
          v17 = a2[2]; /*0x6d7978*/
          HIWORD(v42) = v15 / 256; /*0x6d799d*/
          LODWORD(v18) = v16 / 15 + 17; /*0x6d79a4*/
          v19 = 0; /*0x6d79ac*/
          v38 = v18; /*0x6d79b3*/
          v20 = v17 / 60 + 4; /*0x6d79bc*/
          LOWORD(v42) = v14 / 256 - 2; /*0x6d79c0*/
          v37 = v20; /*0x6d79c5*/
          while ( v19 < SLODWORD(v18) ) /*0x6d79c9*/
          {
            v21 = v19 / 2; /*0x6d79d4*/
            ++v19; /*0x6d79d6*/
            LOWORD(v39) = v21; /*0x6d79d7*/
            v36 = v19; /*0x6d79de*/
            HIWORD(v39) = v19 / 2; /*0x6d79e7*/
            LOWORD(v45) = v42 + v21; /*0x6d79fa*/
            HIWORD(v45) = HIWORD(v39) + HIWORD(v42); /*0x6d7a05*/
            *(_DWORD *)v31 = v45; /*0x6d7a10*/
            if ( v20 > 0 ) /*0x6d7a14*/
            {
              v33 = v20; /*0x6d7a1a*/
              do /*0x6d7bcb*/
              {
                if ( (unsigned __int8)LayerClass::CoordinatesLegal(&dword_87F7E8, v31) ) /*0x6d7a28*/
                {
                  v22 = CellCoord::To_CellObj(&dword_87F7E8, v31); /*0x6d7a44*/
                  NthOfType = Building::GetNthOfType((int)v22); /*0x6d7a4d*/
                  if ( (v22[75] & 0x10) != 0 /*0x6d7a94*/
                    && !(unsigned __int8)CellClass::QuickPassable(v22)
                    && (v22[59] == 2 || NthOfType)
                    && !v22[57]
                    && (v22[80] & 0x1000) == 0 )
                  {
                    v24 = (_DWORD *)v22[63]; /*0x6d7a9a*/
                    v25 = NthOfType != 0; /*0x6d7aa9*/
                    if ( v24 ) /*0x6d7aab*/
                    {
                      if ( (int)v24[4] >= 0x2000 ) /*0x6d7ade*/
                        BuildingDebris::Init(v24, v25); /*0x6d7ae3*/
                    }
                    else
                    {
                      v26 = __2_YAPAXI_Z(0x3Cu); /*0x6d7aaf*/
                      if ( v26 ) /*0x6d7ab9*/
                      {
                        v24 = TacticalClass::saveConfig(v26, v25); /*0x6d7ac3*/
                        v22[63] = v24; /*0x6d7ac5*/
                      }
                      else
                      {
                        v24 = 0; /*0x6d7acd*/
                        v22[63] = 0; /*0x6d7acf*/
                      }
                    }
                    if ( v24 ) /*0x6d7aea*/
                    {
                      if ( (unsigned __int8)TacticalClass::DecrementCounter(v24, v32) ) /*0x6d7af7*/
                      {
                        ScreenRect = CellClass::GetScreenRect((int)v22, v44); /*0x6d7b0b*/
                        v28 = v24[12] + *ScreenRect + ScreenRect[2] / 2; /*0x6d7b3b*/
                        v29 = v24[13] + ScreenRect[1] + ScreenRect[3] / 2; /*0x6d7b3f*/
                        if ( v28 >= *a3 && v28 < *a3 + a3[2] ) /*0x6d7b4c*/
                        {
                          v30 = a3[1]; /*0x6d7b4e*/
                          if ( v29 >= v30 && v29 < v30 + a3[3] ) /*0x6d7b5c*/
                          {
                            TacticalClass::InterpolateColor(v24, v32); /*0x6d7b65*/
                            *(_WORD *)(v29 * v34 + v35 + 2 * v28) = ((int)v24[1] >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6d7bb4*/
                                                                  | ((int)v24[2] >> g_BitMask_Blue << g_BitMask_Green)
                                                                  | ((int)v24[3] >> g_BitMask_Red << g_BitShift_Blue);
                          }
                        }
                      }
                    }
                  }
                }
                ++v31[0]; /*0x6d7bb8*/
                --v31[1]; /*0x6d7bc1*/
                --v33; /*0x6d7bc7*/
              }
              while ( v33 ); /*0x6d7bcb*/
              v19 = v36; /*0x6d7bd1*/
              v20 = v37; /*0x6d7bd5*/
              v18 = v38; /*0x6d7bd9*/
            }
          }
          return (*(int (__thiscall **)(int *))(*g_DSurface_Hidden_2 + 96))(g_DSurface_Hidden_2); /*0x6d7bed*/
        }
      }
    }
  }
  return result; /*0x6d7bf2*/
}



// ==== 0x006D7C00  TacticalClass::DrawTerrain  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::DrawTerrain(int *this, int *a2, _DWORD *a3)
{
  int *v3; // edi
  int v5; // eax
  signed int v6; // ecx
  float *v7; // eax
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  signed int v14; // ecx
  float *v15; // eax
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int smudgeTypeIndex; // ecx
  int v20; // ebx
  int v21; // edi
  int v22; // ebx
  int v23; // ecx
  int result; // eax
  int v25; // edi
  int *v26; // ebp
  int v27; // eax
  __int16 v28; // dx
  float *v29; // eax
  TacticalClass *v30; // eax
  int v31; // [esp+0h] [ebp-68h]
  int v32; // [esp+0h] [ebp-68h]
  int v33; // [esp+4h] [ebp-64h]
  int v34; // [esp+4h] [ebp-64h]
  int v35; // [esp+1Ch] [ebp-4Ch]
  int v36; // [esp+20h] [ebp-48h] BYREF
  _DWORD v37[2]; // [esp+24h] [ebp-44h]
  int v38; // [esp+2Ch] [ebp-3Ch] BYREF
  signed int v39; // [esp+30h] [ebp-38h]
  int v40; // [esp+34h] [ebp-34h]
  Triple v41; // [esp+38h] [ebp-30h] BYREF
  float v42; // [esp+3Ch] [ebp-2Ch]
  int v43; // [esp+40h] [ebp-28h]
  int v44; // [esp+44h] [ebp-24h] BYREF
  signed int v45; // [esp+48h] [ebp-20h]
  int v46; // [esp+4Ch] [ebp-1Ch]
  float v47[3]; // [esp+50h] [ebp-18h] BYREF
  Coord3D v48; // [esp+5Ch] [ebp-Ch] BYREF

  v3 = a2; /*0x6d7c07*/
  v5 = this->TacticalClass_field_2C; /*0x6d7c19*/
  v6 = a2[1] + this->q0B4 - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d7c32*/
  v38 = *a2 + v5 - DSurface_ViewBounds.field_0; /*0x6d7c34*/
  v39 = v6; /*0x6d7c38*/
  *(float *)&v33 = (float)v6; /*0x6d7c41*/
  *(float *)&v31 = (float)v38; /*0x6d7c4d*/
  Triple::Set(&v41, v31, v33, 0); /*0x6d7c50*/
  v7 = TransformMatrix3x4Point(v47, (float *)this + 889, (float *)&v41); /*0x6d7c66*/
  v41 = *(Triple *)v7; /*0x6d7c6d*/
  v42 = v7[1]; /*0x6d7c78*/
  v43 = *((_DWORD *)v7 + 2); /*0x6d7c7f*/
  LOWORD(v8) = Math::RoundToInt(*(float *)&v41); /*0x6d7c83*/
  v9 = v8; /*0x6d7c8c*/
  LOWORD(v10) = Math::RoundToInt(v42); /*0x6d7c8e*/
  Coord::Subtract((Coord *)&v44, v9, v10, 0); /*0x6d7c9b*/
  v11 = *(_DWORD *)CellStruct::Set((CellStruct *)&v36, v44 / 256, v45 / 256); /*0x6d7ccb*/
  v12 = this->TacticalClass_field_2C; /*0x6d7ccd*/
  HIWORD(v37[0]) = HIWORD(v11); /*0x6d7cd3*/
  LOWORD(v37[0]) = v11 - 2; /*0x6d7ce0*/
  v13 = *v3; /*0x6d7ce9*/
  a2 = (int *)v37[0]; /*0x6d7ceb*/
  v14 = v3[1] + this->q0B4 - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d7d04*/
  v38 = v12 + v13 - DSurface_ViewBounds.field_0; /*0x6d7d06*/
  v39 = v14; /*0x6d7d0a*/
  *(float *)&v34 = (float)v14; /*0x6d7d15*/
  *(float *)&v32 = (float)v38; /*0x6d7d21*/
  Triple::Set(&v41, v32, v34, 0); /*0x6d7d24*/
  v15 = TransformMatrix3x4Point(v47, (float *)this + 889, (float *)&v41); /*0x6d7d34*/
  v41 = *(Triple *)v15; /*0x6d7d3b*/
  v42 = v15[1]; /*0x6d7d46*/
  v43 = *((_DWORD *)v15 + 2); /*0x6d7d4d*/
  LOWORD(v16) = Math::RoundToInt(*(float *)&v41); /*0x6d7d51*/
  v17 = v16; /*0x6d7d5a*/
  LOWORD(v18) = Math::RoundToInt(v42); /*0x6d7d5c*/
  Coord::Subtract((Coord *)&v38, v17, v18, 0); /*0x6d7d69*/
  v44 = v38; /*0x6d7d7a*/
  v45 = v39; /*0x6d7d82*/
  v46 = v40; /*0x6d7d8c*/
  smudgeTypeIndex = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v44)->smudgeTypeIndex; /*0x6d7d95*/
  v20 = v3[3]; /*0x6d7d98*/
  v21 = v3[2]; /*0x6d7da0*/
  HIWORD(v37[0]) = HIWORD(smudgeTypeIndex) + 3; /*0x6d7db0*/
  v22 = v20 / 15 + 20; /*0x6d7dbc*/
  LOWORD(v37[0]) = smudgeTypeIndex - 2; /*0x6d7dc9*/
  v23 = 0; /*0x6d7dd3*/
  result = (unsigned int)((unsigned __int64)(2290649225LL * v21) >> 32) >> 31; /*0x6d7dd5*/
  v25 = v21 / 60 + 7; /*0x6d7dda*/
  if ( v22 > 0 ) /*0x6d7dde*/
  {
    v26 = a3; /*0x6d7de4*/
    do /*0x6d7f01*/
    {
      v27 = v23 / 2; /*0x6d7ded*/
      ++v23; /*0x6d7def*/
      LOWORD(v38) = v27; /*0x6d7df0*/
      v36 = v23; /*0x6d7df7*/
      HIWORD(v38) = v23 / 2; /*0x6d7e00*/
      v28 = LOWORD(v37[0]) + v27; /*0x6d7e0d*/
      result = *(_DWORD *)((char *)v37 + 2); /*0x6d7e0f*/
      LOWORD(a3) = v28; /*0x6d7e13*/
      HIWORD(a3) = HIWORD(v37[0]) + HIWORD(v38); /*0x6d7e1e*/
      a2 = a3; /*0x6d7e29*/
      if ( v25 > 0 ) /*0x6d7e2d*/
      {
        v35 = v25; /*0x6d7e33*/
        do /*0x6d7ef5*/
        {
          if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) ) /*0x6d7e41*/
          {
            v29 = (float *)Coord3D::Set( /*0x6d7e91*/
                             &v48,
                             ((((__int16)a2 << 8) + 128) / 256) << 8,
                             (((SHIWORD(a2) << 8) + 128) / 256) << 8,
                             0);
            v47[0] = *v29; /*0x6d7e98*/
            v47[1] = v29[1]; /*0x6d7ea4*/
            v47[2] = v29[2]; /*0x6d7eb2*/
            Coord::To_Screen((Coord *)this, v47, (int *)&v41); /*0x6d7eb6*/
            *(_DWORD *)&v41 -= 30; /*0x6d7ec7*/
            v30 = (TacticalClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x6d7ed6*/
            TacticalClass::DrawCellTerrainOverlay(v30, (int *)&v41, v26); /*0x6d7edd*/
          }
          LOWORD(a2) = (_WORD)a2 + 1; /*0x6d7ee2*/
          --HIWORD(a2); /*0x6d7eeb*/
          result = --v35; /*0x6d7ef0*/
        }
        while ( v35 ); /*0x6d7ef5*/
        v23 = v36; /*0x6d7efb*/
      }
    }
    while ( v23 < v22 ); /*0x6d7f01*/
  }
  return result; /*0x6d7f07*/
}



// ==== 0x006D7F20  TacticalMapClass::ProcessCell  this=TacticalMapClass  sig=csp ====
int __thiscall TacticalMapClass::ProcessCell(TacticalMapClass *this, __int16 *a2, int a3)
{
  int *v4; // ebp
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
  int *v28; // eax
  int result; // eax
  bool v30; // cc
  int v31; // [esp+10h] [ebp-44h]
  char *v32; // [esp+14h] [ebp-40h]
  int v33; // [esp+1Ch] [ebp-38h]
  int v34; // [esp+20h] [ebp-34h]
  __int16 v35[2]; // [esp+24h] [ebp-30h] BYREF
  __int16 v36[2]; // [esp+28h] [ebp-2Ch] BYREF
  __int16 v37[2]; // [esp+2Ch] [ebp-28h] BYREF
  _DWORD v38[2]; // [esp+30h] [ebp-24h] BYREF
  int v39[2]; // [esp+38h] [ebp-1Ch] BYREF
  IsoCoord v40; // [esp+40h] [ebp-14h] BYREF
  int v41; // [esp+48h] [ebp-Ch] BYREF
  int v42; // [esp+4Ch] [ebp-8h]
  int v43; // [esp+50h] [ebp-4h]
  char v44; // [esp+58h] [ebp+4h]

  v4 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x6d7f38*/
  v5 = (*a2 << 8) + 128; /*0x6d7f5b*/
  v6 = (a2[1] << 8) + 128; /*0x6d7f68*/
  v43 = 0; /*0x6d7f6a*/
  v42 = (v6 / 256) << 8; /*0x6d7f74*/
  v41 = (v5 / 256) << 8; /*0x6d7f8a*/
  v7 = Coord::To_ScreenRaw(v39, &v41); /*0x6d7f8e*/
  v8 = v7[1]; /*0x6d7f9d*/
  v9 = *v7 - *((_DWORD *)this + 44); /*0x6d7fa6*/
  v10 = v8 - *((_DWORD *)this + 45); /*0x6d7fae*/
  if ( *((char *)v4 + 283) < 2 ) /*0x6d7fb3*/
  {
    v38[0] = v9 - 30; /*0x6d7fba*/
    v38[1] = v10; /*0x6d7fc2*/
    TacticalClass::CheckCellVisibility(v4, v38, &DSurface_ViewBounds, 0); /*0x6d7fce*/
  }
  v33 = *a2; /*0x6d7fda*/
  v34 = a2[1]; /*0x6d7fde*/
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
      if ( !(unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v35) ) /*0x6d8021*/
        goto LABEL_34; /*0x6d8021*/
      v36[0] = v33 + ((v11 + 1) >> 1); /*0x6d8031*/
      v36[1] = v34 - (v11 >> 1) + 1; /*0x6d8036*/
      v14 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v36); /*0x6d8040*/
      v15 = 0; /*0x6d8042*/
      v32 = v14; /*0x6d8044*/
      v16 = v14[283]; /*0x6d804b*/
      v44 = 0; /*0x6d8056*/
      if ( v11 == 1 ) /*0x6d805a*/
      {
        if ( v16 > v31 && v16 < v31 + 4 ) /*0x6d8070*/
        {
LABEL_11:
          v15 = 1; /*0x6d8072*/
          v44 = 1; /*0x6d8074*/
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
          v15 = v44; /*0x6d80c9*/
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
        v37[0] = v12; /*0x6d814e*/
        v37[1] = v13; /*0x6d8168*/
        v41 = ((((__int16)v12 << 8) + 128) / 256) << 8; /*0x6d8194*/
        v42 = ((((__int16)v13 << 8) + 128) / 256) << 8; /*0x6d819d*/
        v43 = 0; /*0x6d81a1*/
        v23 = IsoCoord::ToPixel(&v40, v41, v42); /*0x6d81a5*/
        v24 = v23[1]; /*0x6d81b2*/
        v25 = *v23 / 256; /*0x6d81c0*/
        v26 = ZCoordToScreenY(v43); /*0x6d81c3*/
        v27 = v25 - *((_DWORD *)this + 44); /*0x6d81ea*/
        v39[1] = v24 / 256 - v26 - *((_DWORD *)this + 45); /*0x6d81ee*/
        v39[0] = v27 - 30; /*0x6d8204*/
        v28 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v37); /*0x6d820f*/
        TacticalClass::CheckCellVisibility(v28, v39, &DSurface_ViewBounds, 0); /*0x6d8216*/
        goto LABEL_34; /*0x6d8216*/
      }
      if ( v15 ) /*0x6d80d5*/
        goto LABEL_33; /*0x6d80d5*/
      v18 = *((_DWORD *)v32 + 14); /*0x6d80e3*/
      v19 = (unsigned __int8)v32[282]; /*0x6d80eb*/
      if ( v18 != 0xFFFF && v18 != 255 ) /*0x6d80f8*/
      {
        v20 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v18); /*0x6d8104*/
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
unsigned int __thiscall MapClass::TransformCoordToScreen(MapClass *this, int a2, _DWORD *a3)
{
  int *v3; // ebx
  int v4; // ebp
  int v6; // eax
  int v7; // ecx
  float *v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int smudgeTypeIndex; // ecx
  int v13; // esi
  int v14; // ecx
  unsigned int result; // eax
  int v16; // esi
  int v17; // ebp
  int *v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  TacticalClass *v22; // eax
  _DWORD *v23; // [esp+10h] [ebp-54h]
  int v24; // [esp+14h] [ebp-50h]
  int v25; // [esp+18h] [ebp-4Ch]
  int v26; // [esp+1Ch] [ebp-48h]
  __int16 v27; // [esp+20h] [ebp-44h]
  __int16 v28; // [esp+22h] [ebp-42h]
  Vector2 v29; // [esp+30h] [ebp-34h] BYREF
  _DWORD v30[2]; // [esp+38h] [ebp-2Ch] BYREF
  float v31; // [esp+40h] [ebp-24h] BYREF
  float v32; // [esp+44h] [ebp-20h]
  int v33; // [esp+48h] [ebp-1Ch]
  int v34; // [esp+4Ch] [ebp-18h] BYREF
  int v35; // [esp+50h] [ebp-14h]
  int v36; // [esp+54h] [ebp-10h]
  float v37[3]; // [esp+58h] [ebp-Ch] BYREF

  v3 = a3; /*0x6d8264*/
  v4 = *a3; /*0x6d826f*/
  v33 = 0; /*0x6d827b*/
  v6 = v4 + *(_DWORD *)&this->__pad_5C[84]; /*0x6d828f*/
  v7 = a3[1] + *(_DWORD *)&this->__pad_5C[88]; /*0x6d8296*/
  *(_DWORD *)v29.__pad_0 = v6 - DSurface_ViewBounds.field_0; /*0x6d8298*/
  v29.Vector2_field_0x04 = v7 - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d82a2*/
  v31 = (float)(v6 - DSurface_ViewBounds.field_0); /*0x6d82b1*/
  v32 = (float)(v7 - (unsigned int)DSurface_ViewBounds.field_4); /*0x6d82bd*/
  v8 = TransformMatrix3x4Point(v37, (float *)&this->__pad_D80[100], &v31); /*0x6d82c1*/
  v31 = *v8; /*0x6d82c8*/
  v32 = v8[1]; /*0x6d82d3*/
  v33 = *((_DWORD *)v8 + 2); /*0x6d82da*/
  LOWORD(v9) = Math::RoundToInt(v31); /*0x6d82de*/
  v10 = v9; /*0x6d82e7*/
  LOWORD(v11) = Math::RoundToInt(v32); /*0x6d82e9*/
  v34 = v10; /*0x6d82f0*/
  v35 = v11; /*0x6d82f6*/
  v36 = 0; /*0x6d82fa*/
  if ( v11 < 0 ) /*0x6d82fe*/
  {
    v10 -= v11; /*0x6d8300*/
    v11 = 0; /*0x6d8302*/
    v34 = v10; /*0x6d8304*/
    v35 = 0; /*0x6d8308*/
  }
  if ( v10 < 0 ) /*0x6d830e*/
  {
    v34 = 0; /*0x6d8312*/
    v35 = v11 - v10; /*0x6d8316*/
  }
  smudgeTypeIndex = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v34)->smudgeTypeIndex; /*0x6d8329*/
  v13 = v3[2]; /*0x6d833c*/
  v28 = HIWORD(smudgeTypeIndex) + 3; /*0x6d8344*/
  v27 = smudgeTypeIndex - 2; /*0x6d835d*/
  v14 = 0; /*0x6d8367*/
  result = (unsigned int)((unsigned __int64)(2290649225LL * v13) >> 32) >> 31; /*0x6d8369*/
  v16 = v13 / 60 + 7; /*0x6d836e*/
  v26 = v3[3] / 15 + 20; /*0x6d8372*/
  v25 = v16; /*0x6d8376*/
  if ( v26 > 0 ) /*0x6d837a*/
  {
    do /*0x6d84bb*/
    {
      v17 = v14 + 1; /*0x6d8382*/
      LOWORD(v23) = v27 + v14 / 2; /*0x6d83a9*/
      HIWORD(v23) = v28 + (v14 + 1) / 2; /*0x6d83b4*/
      a3 = v23; /*0x6d83bf*/
      if ( v16 > 0 ) /*0x6d83c3*/
      {
        v24 = v16; /*0x6d83c9*/
        do /*0x6d84a9*/
        {
          if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3) ) /*0x6d83d7*/
          {
            v37[2] = 0.0; /*0x6d8417*/
            LODWORD(v37[0]) = ((((__int16)a3 << 8) + 128) / 256) << 8; /*0x6d8433*/
            LODWORD(v37[1]) = (((SHIWORD(a3) << 8) + 128) / 256) << 8; /*0x6d8437*/
            v18 = Coord::To_ScreenRaw((int *)&v31, v37); /*0x6d843b*/
            *(_DWORD *)v29.__pad_0 = *v18; /*0x6d8442*/
            v19 = *(_DWORD *)&this->__pad_5C[88]; /*0x6d8446*/
            v20 = v18[1]; /*0x6d844c*/
            v21 = *(_DWORD *)&this->__pad_5C[84]; /*0x6d844f*/
            v29.Vector2_field_0x04 = v20; /*0x6d8455*/
            v30[1] = v19; /*0x6d845d*/
            v30[0] = v21; /*0x6d8466*/
            Vector2::Subtract(&v29, v30); /*0x6d846a*/
            *(_DWORD *)v29.__pad_0 -= 30; /*0x6d8486*/
            v22 = (TacticalClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x6d848a*/
            TacticalClass::DrawCellTerrainOverlay(v22, (int *)v29.__pad_0, v3); /*0x6d8491*/
          }
          LOWORD(a3) = (_WORD)a3 + 1; /*0x6d8496*/
          --HIWORD(a3); /*0x6d849f*/
          --v24; /*0x6d84a5*/
        }
        while ( v24 ); /*0x6d84a9*/
        v16 = v25; /*0x6d84af*/
      }
      result = v26; /*0x6d84b3*/
      v14 = v17; /*0x6d84b7*/
    }
    while ( v17 < v26 ); /*0x6d84bb*/
  }
  return result; /*0x6d84c1*/
}



// ==== 0x006D84D0  sub_6D84D0  this=-  sig=csp ====
int *__stdcall sub_6D84D0(int *a1, int *a2)
{
  int v2; // edx
  int v4; // edx
  int v5; // [esp+4h] [ebp-8h] BYREF
  int v6; // [esp+8h] [ebp-4h]

  v2 = a2[1]; /*0x6d84da*/
  v5 = *a2; /*0x6d84dd*/
  v6 = v2; /*0x6d84e6*/
  if ( !ClampCoordMap(&v5) || byte_A8ED6B ) /*0x6d84fa*/
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



// ==== 0x006D8530  DisplayClass::ScrollTacticalView  this=DisplayClass  sig=csp ====
int __thiscall DisplayClass::ScrollTacticalView(DisplayClass *this, int a2, int a3)
{
  int v4; // edx
  int result; // eax
  int v6; // eax
  int v7; // ecx

  if ( (byte_B0CDE0 & 1) == 0 ) /*0x6d8541*/
  {
    dword_B0CE38[0] = 0; /*0x6d854e*/
    dword_B0CE3C[0] = -1; /*0x6d8553*/
    dword_B0CE40 = 1; /*0x6d855e*/
    dword_B0CE44 = -1; /*0x6d8563*/
    dword_B0CE48 = 1; /*0x6d8569*/
    dword_B0CE50 = 1; /*0x6d856e*/
    dword_B0CE4C = 0; /*0x6d8577*/
    dword_B0CE58 = 0; /*0x6d857d*/
    dword_B0CE54 = 1; /*0x6d8587*/
    dword_B0CE5C = 1; /*0x6d858d*/
    dword_B0CE60 = -1; /*0x6d8593*/
    dword_B0CE64 = 1; /*0x6d8598*/
    dword_B0CE68 = -1; /*0x6d85a3*/
    dword_B0CE6C = 0; /*0x6d85a8*/
    byte_B0CDE0 |= 1u; /*0x6d85bb*/
    dword_B0CE70 = -1; /*0x6d85c1*/
    dword_B0CE74 = -1; /*0x6d85c6*/
    atexit(nullsub_41); /*0x6d85cc*/
  }
  v4 = *(_DWORD *)&this->__pad_41E[2374]; /*0x6d85dc*/
  result = v4 + a3 * dword_B0CE38[2 * a2]; /*0x6d85fc*/
  if ( v4 != result /*0x6d8606*/
    || *(_DWORD *)&this->__pad_41E[2378] != *(_DWORD *)&this->__pad_41E[2378] + a3 * dword_B0CE3C[2 * a2] )
  {
    v6 = *(_DWORD *)&this->__pad_41E[2394]; /*0x6d8612*/
    v7 = a3 * dword_B0CE3C[2 * a2]; /*0x6d8618*/
    *(_DWORD *)&this->__pad_41E[2390] += a3 * dword_B0CE38[2 * a2]; /*0x6d861a*/
    result = v7 + v6; /*0x6d8620*/
    *(_DWORD *)&this->__pad_41E[2394] = result; /*0x6d8622*/
  }
  return result; /*0x6d8628*/
}



// ==== 0x006D8630  nullsub_41  this=-  sig=ida-proto ====
void __cdecl nullsub_41()
{
  ; /*0x6d8630*/
}



// ==== 0x006D8640  ClampCoordMap  this=AbstractClass  sig=csp ====
char __stdcall Map_ClampCoord(int *a1)
{
  int v1; // edi
  int v2; // esi
  int v3; // ecx
  int v4; // edx
  char v5; // bl
  int v6; // eax

  v1 = dword_886FA8 / 2 + 30 * (2 * dword_87F8E4 - dword_87F8DC); /*0x6d8670*/
  v2 = v1 + 60 * dword_87F8EC - dword_886FA8; /*0x6d8690*/
  v3 = dword_886FAC / 2 + 15 * (dword_87F8DC + 2 * dword_87F8E8 - 5); /*0x6d869c*/
  v4 = a1[1]; /*0x6d86b3*/
  v5 = 0; /*0x6d86ba*/
  v6 = v3 + (60 * dword_87F8F0 + 270) / 2 - dword_886FAC; /*0x6d86bc*/
  if ( v4 >= v3 ) /*0x6d86c0*/
  {
    if ( v4 > v6 ) /*0x6d86cb*/
    {
      a1[1] = v6; /*0x6d86cd*/
      v5 = 1; /*0x6d86d0*/
    }
  }
  else
  {
    v5 = 1; /*0x6d86c2*/
    a1[1] = v3; /*0x6d86c4*/
  }
  if ( *a1 >= v1 ) /*0x6d86d7*/
  {
    if ( *a1 <= v2 ) /*0x6d86e7*/
    {
      return v5; /*0x6d86f7*/
    }
    else
    {
      *a1 = v2; /*0x6d86e9*/
      return 1; /*0x6d86ef*/
    }
  }
  else
  {
    *a1 = v1; /*0x6d86d9*/
    return 1; /*0x6d86df*/
  }
}



// ==== 0x006D8700  Cell::GetAdjacentPassableMask  this=Tactical  sig=csp ====
int __stdcall Cell_GetAdjacentPassableMask(__int16 *a1, int a2)
{
  int v2; // ebp
  int v3; // edi
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
  v3 = -1; /*0x6d8710*/
  v4 = CellCoord::To_CellObj(&dword_87F7E8, a1); /*0x6d8713*/
  if ( !(_BYTE)a2 ) /*0x6d871e*/
  {
    v16 = v4[75]; /*0x6d88f4*/
    if ( (v16 & 0x18) == 0 ) /*0x6d88fc*/
      v3 = -2; /*0x6d88fe*/
    v6 = 8; /*0x6d8903*/
    if ( (v16 & 8) != 0 ) /*0x6d890a*/
    {
      v17 = a1[1] - 1; /*0x6d8919*/
      LOWORD(a2) = *a1 - 1; /*0x6d891b*/
      HIWORD(a2) = v17; /*0x6d8920*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8942*/
        v2 = 64; /*0x6d8944*/
      v18 = a1[1] - 1; /*0x6d8950*/
      LOWORD(a2) = *a1; /*0x6d8952*/
      HIWORD(a2) = v18; /*0x6d8957*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8979*/
        v2 |= 0x80u; /*0x6d897b*/
      v19 = a1[1] - 1; /*0x6d898a*/
      LOWORD(a2) = *a1 + 1; /*0x6d898c*/
      HIWORD(a2) = v19; /*0x6d8995*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d89b3*/
        v2 |= 1u; /*0x6d89b5*/
      v20 = *a1 - 1; /*0x6d89bf*/
      HIWORD(a2) = a1[1]; /*0x6d89c1*/
      LOWORD(a2) = v20; /*0x6d89c6*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d89e8*/
        v2 |= 0x20u; /*0x6d89ea*/
      v21 = *a1 + 1; /*0x6d89f4*/
      HIWORD(a2) = a1[1]; /*0x6d89f6*/
      LOWORD(a2) = v21; /*0x6d89fb*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8a1d*/
        v2 |= 2u; /*0x6d8a1f*/
      v22 = a1[1] + 1; /*0x6d8a2b*/
      LOWORD(a2) = *a1 - 1; /*0x6d8a2d*/
      HIWORD(a2) = v22; /*0x6d8a36*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8a54*/
        v2 |= 0x10u; /*0x6d8a56*/
      v23 = a1[1] + 1; /*0x6d8a60*/
      LOWORD(a2) = *a1; /*0x6d8a62*/
      HIWORD(a2) = v23; /*0x6d8a67*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8a89*/
        v2 |= 8u; /*0x6d8a8b*/
      v24 = a1[1] + 1; /*0x6d8a96*/
      LOWORD(a2) = *a1 + 1; /*0x6d8a98*/
      HIWORD(a2) = v24; /*0x6d8a9d*/
      v15 = *((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 300); /*0x6d8ab9*/
      goto LABEL_38; /*0x6d8ab9*/
    }
    return v3; /*0x6d8ad4*/
  }
  v5 = v4[80]; /*0x6d8724*/
  if ( (v5 & 3) == 0 ) /*0x6d872c*/
    v3 = -2; /*0x6d872e*/
  v6 = 2; /*0x6d8733*/
  if ( (v5 & 2) == 0 ) /*0x6d873a*/
    return v3; /*0x6d873a*/
  v7 = a1[1] - 1; /*0x6d8749*/
  LOWORD(a2) = *a1 - 1; /*0x6d874b*/
  HIWORD(a2) = v7; /*0x6d8750*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d8772*/
    v2 = 64; /*0x6d8774*/
  v8 = a1[1]; /*0x6d877c*/
  LOWORD(a2) = *a1; /*0x6d8780*/
  HIWORD(a2) = v8 - 1; /*0x6d878b*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d87a9*/
    v2 |= 0x80u; /*0x6d87ab*/
  v9 = a1[1] - 1; /*0x6d87ba*/
  LOWORD(a2) = *a1 + 1; /*0x6d87bc*/
  HIWORD(a2) = v9; /*0x6d87c1*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d87e3*/
    v2 |= 1u; /*0x6d87e5*/
  v10 = *a1 - 1; /*0x6d87ef*/
  HIWORD(a2) = a1[1]; /*0x6d87f1*/
  LOWORD(a2) = v10; /*0x6d87f6*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d8818*/
    v2 |= 0x20u; /*0x6d881a*/
  v11 = *a1 + 1; /*0x6d8824*/
  HIWORD(a2) = a1[1]; /*0x6d8826*/
  LOWORD(a2) = v11; /*0x6d882b*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d884d*/
    v2 |= 2u; /*0x6d884f*/
  v12 = a1[1] + 1; /*0x6d885a*/
  LOWORD(a2) = *a1 - 1; /*0x6d885c*/
  HIWORD(a2) = v12; /*0x6d8861*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d8883*/
    v2 |= 0x10u; /*0x6d8885*/
  v13 = a1[1] + 1; /*0x6d888f*/
  LOWORD(a2) = *a1; /*0x6d8891*/
  HIWORD(a2) = v13; /*0x6d8896*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d88b8*/
    v2 |= 8u; /*0x6d88ba*/
  v14 = a1[1] + 1; /*0x6d88c6*/
  LOWORD(a2) = *a1 + 1; /*0x6d88c8*/
  HIWORD(a2) = v14; /*0x6d88d1*/
  v15 = *((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 320); /*0x6d88e9*/
LABEL_38:
  if ( (v15 & (unsigned __int8)v6) == 0 ) /*0x6d8ac1*/
    v2 |= 4u; /*0x6d8ac3*/
  return byte_7F4194[v2]; /*0x6d8acd*/
}



// ==== 0x006D8B30  TacticalClass::CalcViewportCells  this=TacticalClass  sig=csp ====
unsigned int __thiscall TacticalClass::CalcViewportCells(TacticalClass *this)
{
  int TacticalClass_field_D64; // ecx
  int TacticalClass_field_D68; // edi
  double v4; // st7
  int v5; // eax
  float *v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  unsigned int result; // eax
  float v11[3]; // [esp+8h] [ebp-18h] BYREF
  float v12; // [esp+14h] [ebp-Ch] BYREF
  float v13; // [esp+18h] [ebp-8h]
  int v14; // [esp+1Ch] [ebp-4h]

  v14 = 0; /*0x6d8b37*/
  TacticalClass_field_D64 = this->TacticalClass_field_D64; /*0x6d8b3f*/
  TacticalClass_field_D68 = this->TacticalClass_field_D68; /*0x6d8b45*/
  this->visibleArea[0] = TacticalClass_field_D64; /*0x6d8b4b*/
  this->visibleArea[1] = TacticalClass_field_D68; /*0x6d8b51*/
  this->visibleArea[0] = TacticalClass_field_D64 - dword_B0CE30 / 2; /*0x6d8b63*/
  LODWORD(v11[0]) = this->visibleArea[0] - 60; /*0x6d8b80*/
  v4 = (double)SLODWORD(v11[0]); /*0x6d8b84*/
  v5 = TacticalClass_field_D68 - dword_B0CE34 / 2; /*0x6d8b88*/
  this->visibleArea[1] = v5; /*0x6d8b90*/
  v12 = v4; /*0x6d8b99*/
  LODWORD(v11[1]) = v5 - 30; /*0x6d8b9d*/
  v13 = (float)(v5 - 30); /*0x6d8bae*/
  v6 = TransformMatrix3x4Point(v11, (float *)this->TacticalClass_field_DE4, &v12); /*0x6d8bb2*/
  v12 = *v6; /*0x6d8bb9*/
  v13 = v6[1]; /*0x6d8bc4*/
  v14 = *((_DWORD *)v6 + 2); /*0x6d8bcb*/
  LOWORD(v7) = Math::RoundToInt(v12); /*0x6d8bcf*/
  v8 = v7; /*0x6d8bd8*/
  LOWORD(v9) = Math::RoundToInt(v13); /*0x6d8bda*/
  this->TacticalClass_field_D80 = v8 / 256; /*0x6d8bf0*/
  this->TacticalClass_field_D84 = v9 / 256; /*0x6d8c04*/
  this->TacticalClass_field_D88 = dword_B0CE30 / 60 + 2; /*0x6d8c2a*/
  result = (unsigned int)((unsigned __int64)(2290649225LL * dword_B0CE34) >> 32) >> 31; /*0x6d8c3f*/
  this->TacticalClass_field_D8C = dword_B0CE34 / 15 + 4; /*0x6d8c46*/
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
  v6 = Math::RoundToInt((double)(int)v3[2] * dbl_B0CD48 + (double)(v3[2] >= 728) + 0.5); /*0x6d8d21*/
  v12 = v4; /*0x6d8d2d*/
  v13 = v5 - v6; /*0x6d8d31*/
  result = (int)g_TacticalClass_Instance[45].__tail_0; /*0x6d8d3b*/
  v8 = v4 - (unsigned int)g_TacticalClass_Instance[44].__tail_0; /*0x6d8d41*/
  v9 = v13 - result; /*0x6d8d43*/
  v12 = v8; /*0x6d8d4b*/
  v13 -= result; /*0x6d8d4f*/
  if ( v8 >= -360 ) /*0x6d8d53*/
  {
    result = dword_B0CE30 + 360; /*0x6d8d5a*/
    if ( v8 <= dword_B0CE30 + 360 && v9 >= -180 && v9 <= dword_B0CE34 + 180 ) /*0x6d8d79*/
    {
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 268))(a1, &v12, a2); /*0x6d8d8a*/
      return (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 272))(a1, &v12, a2); /*0x6d8d9b*/
    }
  }
  return result; /*0x6d8da1*/
}



// ==== 0x006D8DB0  TacticalMap::RenderAllObjects  this=TacticalMap  sig=csp ====
int __thiscall TacticalMap::RenderAllObjects(TacticalMap *this, int a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // edi
  float *v5; // ebp
  IsoCoord *v6; // eax
  int v7; // eax
  int v8; // eax
  IsoCoord *v9; // eax
  int v10; // eax
  int v11; // edi
  IsoCoord *v12; // eax
  int v13; // eax
  int v14; // ebp
  int v15; // edi
  int v16; // eax
  int v17; // ebx
  int *v18; // esi
  int v19; // eax
  int v20; // ecx
  _DWORD *v21; // eax
  LPPERSISTSTREAM v22; // edi
  int *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  _DWORD *v29; // eax
  int v30; // edx
  int v31; // eax
  int *v32; // edx
  int v33; // eax
  int v34; // ecx
  char v35; // al
  int v36; // eax
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int *v41; // eax
  LPPERSISTSTREAM v42; // ebx
  int *v43; // edi
  int *v44; // ecx
  int v45; // eax
  int v46; // edx
  int v47; // ecx
  int v48; // kr18_4
  int v49; // eax
  IPersistStream v50; // eax
  int v51; // edx
  int v52; // ecx
  int v53; // ecx
  BuildingClass *v54; // ebx
  int *v55; // eax
  LPPERSISTSTREAM v56; // ebp
  int *v57; // edi
  _DWORD *v58; // eax
  int v59; // ecx
  __int64 v60; // rax
  int v61; // esi
  int v62; // eax
  int v63; // esi
  int v64; // eax
  int *p_count; // ecx
  int result; // eax
  int v67; // ebx
  int *v68; // eax
  int v69; // esi
  int v70; // edi
  int v71; // esi
  int v72; // eax
  int v73; // edi
  int v74; // esi
  bool v75; // cc
  int v76; // [esp+10h] [ebp-104h]
  int v77; // [esp+28h] [ebp-ECh]
  int v78; // [esp+28h] [ebp-ECh]
  int v79; // [esp+28h] [ebp-ECh]
  int v80; // [esp+28h] [ebp-ECh]
  int v81; // [esp+2Ch] [ebp-E8h] BYREF
  int v82; // [esp+30h] [ebp-E4h]
  IsoCoord v83; // [esp+34h] [ebp-E0h] BYREF
  int v84; // [esp+3Ch] [ebp-D8h]
  int *v85; // [esp+40h] [ebp-D4h]
  int v86; // [esp+44h] [ebp-D0h]
  int v87; // [esp+48h] [ebp-CCh]
  int v88; // [esp+4Ch] [ebp-C8h]
  int v89; // [esp+50h] [ebp-C4h] BYREF
  int v90; // [esp+54h] [ebp-C0h]
  int v91; // [esp+58h] [ebp-BCh]
  int v92; // [esp+5Ch] [ebp-B8h] BYREF
  int v93; // [esp+60h] [ebp-B4h]
  Vector2 v94; // [esp+64h] [ebp-B0h] BYREF
  int v95; // [esp+74h] [ebp-A0h]
  int v96; // [esp+78h] [ebp-9Ch]
  IsoCoord v97; // [esp+7Ch] [ebp-98h] BYREF
  int v98; // [esp+84h] [ebp-90h]
  int v99; // [esp+8Ch] [ebp-88h]
  _DWORD v100[2]; // [esp+90h] [ebp-84h] BYREF
  int v101[4]; // [esp+98h] [ebp-7Ch] BYREF
  int v102[3]; // [esp+A8h] [ebp-6Ch] BYREF
  int v103; // [esp+B4h] [ebp-60h]
  _BYTE v104[12]; // [esp+B8h] [ebp-5Ch] BYREF
  _BYTE v105[12]; // [esp+C4h] [ebp-50h] BYREF
  int v106; // [esp+D0h] [ebp-44h] BYREF
  char v107[12]; // [esp+D8h] [ebp-3Ch] BYREF
  char v108[12]; // [esp+E4h] [ebp-30h] BYREF
  char v109[12]; // [esp+F0h] [ebp-24h] BYREF
  char v110[12]; // [esp+FCh] [ebp-18h] BYREF
  char v111[12]; // [esp+108h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x6d8db7*/
  v3 = *((_DWORD *)this + 44); /*0x6d8dc4*/
  v4 = *((_DWORD *)this + 45); /*0x6d8dd5*/
  v81 = v3 + *(_DWORD *)DSurface_ViewBounds.__pad_8 / 2; /*0x6d8ddb*/
  v77 = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x6d8de5*/
  v5 = (float *)((char *)this + 3556); /*0x6d8deb*/
  *(float *)v83.__pad_0 = (float)v81; /*0x6d8df1*/
  v82 = v4 - *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x6d8df5*/
  v84 = 0; /*0x6d8e08*/
  *(float *)&v83.IsoCoord_field_0x04 = (float)(v4 - *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]); /*0x6d8e10*/
  v6 = (IsoCoord *)TransformMatrix3x4Point((float *)v97.__pad_0, (float *)this + 889, (float *)v83.__pad_0); /*0x6d8e14*/
  v83 = *v6; /*0x6d8e1b*/
  v84 = *(_DWORD *)v6[1].__pad_0; /*0x6d8e2d*/
  LOWORD(v7) = Math::RoundToInt(*(float *)v83.__pad_0); /*0x6d8e31*/
  v86 = v7; /*0x6d8e3a*/
  LOWORD(v8) = Math::RoundToInt(*(float *)&v83.IsoCoord_field_0x04); /*0x6d8e3e*/
  v87 = v8; /*0x6d8e43*/
  v81 = v3 + 2 * v2; /*0x6d8e4a*/
  *(float *)v83.__pad_0 = (float)v81; /*0x6d8e62*/
  v78 = v77 / 2 + v4; /*0x6d8e74*/
  v82 = v78; /*0x6d8e66*/
  v84 = 0; /*0x6d8e78*/
  *(float *)&v83.IsoCoord_field_0x04 = (float)v78; /*0x6d8e80*/
  v9 = (IsoCoord *)TransformMatrix3x4Point((float *)v97.__pad_0, v5, (float *)v83.__pad_0); /*0x6d8e84*/
  v83 = *v9; /*0x6d8e8b*/
  v84 = *(_DWORD *)v9[1].__pad_0; /*0x6d8e9d*/
  LOWORD(v10) = Math::RoundToInt(*(float *)v83.__pad_0); /*0x6d8ea1*/
  v11 = v10; /*0x6d8ea8*/
  v81 = v3 - v2; /*0x6d8eae*/
  v82 = v78; /*0x6d8eb6*/
  *(float *)v83.__pad_0 = (float)(v3 - v2); /*0x6d8eba*/
  *(float *)&v83.IsoCoord_field_0x04 = (float)v78; /*0x6d8ecd*/
  v84 = 0; /*0x6d8ed1*/
  v12 = (IsoCoord *)TransformMatrix3x4Point((float *)v97.__pad_0, v5, (float *)v83.__pad_0); /*0x6d8ed9*/
  v83 = *v12; /*0x6d8ee0*/
  v84 = *(_DWORD *)v12[1].__pad_0; /*0x6d8ef2*/
  LOWORD(v13) = Math::RoundToInt(*(float *)&v83.IsoCoord_field_0x04); /*0x6d8ef6*/
  v14 = v86; /*0x6d8efb*/
  v95 = 2 * (v11 - v86); /*0x6d8f03*/
  v15 = v87; /*0x6d8f07*/
  v96 = 2 * (v13 - v87); /*0x6d8f0f*/
  v16 = 0; /*0x6d8f13*/
  v85 = 0; /*0x6d8f15*/
  do /*0x6d95a9*/
  {
    v88 = 0; /*0x6d8f1c*/
    v17 = 24 * v16; /*0x6d8f24*/
    v79 = 24 * v16; /*0x6d8f27*/
    if ( dword_8A0370[6 * v16] > 0 ) /*0x6d8f33*/
    {
      while ( 1 ) /*0x6d8f43*/
      {
        v18 = *(int **)(*(int *)((char *)&stru_8A0360.items[1] + v17) + 4 * v88); /*0x6d8f43*/
        *((_BYTE *)v18 + 153) = 0; /*0x6d8f48*/
        if ( !v18 ) /*0x6d8f4f*/
          goto LABEL_25; /*0x6d8f4f*/
        if ( (v18[5] & 4) != 0 ) /*0x6d8f64*/
        {
          v19 = v18[39]; /*0x6d8f72*/
          v89 = v19; /*0x6d8f74*/
          v20 = v18[40]; /*0x6d8f7a*/
          v90 = v20; /*0x6d8f7d*/
          v91 = v18[41]; /*0x6d8f84*/
          if ( v19 < v14 ) /*0x6d8f88*/
            goto LABEL_54; /*0x6d8f88*/
          if ( v19 >= v14 + v95 ) /*0x6d8f96*/
            goto LABEL_54; /*0x6d8f96*/
          if ( v20 < v15 ) /*0x6d8f9e*/
            goto LABEL_54; /*0x6d8f9e*/
          if ( v20 >= v15 + v96 ) /*0x6d8fac*/
            goto LABEL_54; /*0x6d8fac*/
          (*(void (__thiscall **)(int *, char *, _DWORD))(*v18 + 76))(v18, v110, 0); /*0x6d8fc0*/
          if ( ((int)dword_A8B230->vtable0 & 0x1000) != 0 ) /*0x6d8fce*/
          {
            if ( (unsigned __int8)Game::Stub3((int)&v89) ) /*0x6d8fda*/
              goto LABEL_54; /*0x6d8fe1*/
          }
          v21 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(*v18 + 72))(v18, v107); /*0x6d8ff3*/
          v22 = g_TacticalClass_Instance; /*0x6d8ff6*/
          v23 = Coord::To_ScreenRaw(&v106, v21); /*0x6d9007*/
          v81 = *v23; /*0x6d9010*/
          v82 = v23[1]; /*0x6d9017*/
          v24 = v82 - *(_DWORD *)&v22[45]; /*0x6d9029*/
          v81 -= *(_DWORD *)&v22[44]; /*0x6d9030*/
          v82 = v24; /*0x6d9034*/
          if ( v81 >= -360 && v81 <= dword_B0CE30 + 360 && v24 >= -180 && v24 <= dword_B0CE34 + 180 ) /*0x6d906a*/
          {
            v25 = *v18; /*0x6d9070*/
            *((_BYTE *)v18 + 153) = 1; /*0x6d907e*/
            (*(void (__thiscall **)(int *, int *, CellStruct *))(v25 + 268))(v18, &v81, &DSurface_ViewBounds); /*0x6d9085*/
            (*(void (__thiscall **)(int *, CellStruct *, int, _DWORD))(*v18 + 260))(v18, &DSurface_ViewBounds, a2, 0); /*0x6d909e*/
          }
          goto LABEL_53; /*0x6d90a4*/
        }
        if ( (v18[5] & 1) != 0 ) /*0x6d90af*/
        {
          v26 = v18[39]; /*0x6d90bd*/
          v89 = v26; /*0x6d90bf*/
          v27 = v18[40]; /*0x6d90c5*/
          v90 = v27; /*0x6d90c8*/
          v91 = v18[41]; /*0x6d90cf*/
          if ( v26 < v14 || v26 >= v14 + v95 || v27 < v15 || v27 >= v15 + v96 ) /*0x6d90f7*/
            goto LABEL_54; /*0x6d90f7*/
          v28 = *v18; /*0x6d90fd*/
          *((_BYTE *)v18 + 153) = 1; /*0x6d9111*/
          v29 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(v28 + 72))(v18, v109); /*0x6d9118*/
          if ( Coord::To_Screen((Coord *)g_TacticalClass_Instance, v29, v102) ) /*0x6d9122*/
          {
            (*(void (__thiscall **)(int *, int *, CellStruct *))(*v18 + 268))(v18, v102, &DSurface_ViewBounds); /*0x6d913c*/
            (*(void (__thiscall **)(int *, int *, CellStruct *))(*v18 + 272))(v18, v102, &DSurface_ViewBounds); /*0x6d9153*/
          }
          v30 = *v18; /*0x6d9159*/
          v76 = 1; /*0x6d915b*/
        }
        else
        {
LABEL_25:
          v31 = (*(int (__thiscall **)(int *))(*v18 + 44))(v18); /*0x6d917b*/
          if ( v31 == 4 ) /*0x6d9181*/
          {
            v32 = (int *)(*(int (__thiscall **)(int *, char *))(*v18 + 72))(v18, v111); /*0x6d9196*/
            v33 = *v32; /*0x6d9198*/
            v89 = v33; /*0x6d919a*/
            v34 = v32[1]; /*0x6d91a0*/
            v90 = v34; /*0x6d91a3*/
            v91 = v32[2]; /*0x6d91aa*/
            if ( v33 < v14 ) /*0x6d91ae*/
              goto LABEL_54; /*0x6d91ae*/
            if ( v33 >= v14 + v95 ) /*0x6d91bc*/
              goto LABEL_54; /*0x6d91bc*/
            if ( v34 < v15 ) /*0x6d91c4*/
              goto LABEL_54; /*0x6d91c4*/
            if ( v34 >= v15 + v96 ) /*0x6d91d2*/
              goto LABEL_54; /*0x6d91d2*/
            v35 = *((_BYTE *)v18 + 280); /*0x6d91d8*/
            *((_BYTE *)v18 + 153) = 1; /*0x6d91de*/
            if ( !v35 ) /*0x6d91e7*/
            {
              if ( *(_BYTE *)(v18[50] + 884) ) /*0x6d91ef*/
              {
                v36 = (*(int (__thiscall **)(int *, char *))(*v18 + 72))(v18, v108); /*0x6d9205*/
                if ( (unsigned __int8)Game::Stub3(v36) ) /*0x6d920e*/
                  goto LABEL_54; /*0x6d9215*/
              }
            }
            v30 = *v18; /*0x6d921b*/
            v76 = 0; /*0x6d921d*/
          }
          else
          {
            if ( v31 != 36 ) /*0x6d9227*/
            {
              v39 = v18[39]; /*0x6d92c4*/
              v89 = v39; /*0x6d92c6*/
              v40 = v18[40]; /*0x6d92cc*/
              v90 = v40; /*0x6d92cf*/
              v91 = v18[41]; /*0x6d92d6*/
              if ( v39 < v14 || v39 >= v14 + v95 || v40 < v15 || v40 >= v15 + v96 ) /*0x6d92fe*/
                goto LABEL_54; /*0x6d92fe*/
              v41 = (int *)(*(int (__thiscall **)(int *, _BYTE *))(*v18 + 72))(v18, v104); /*0x6d9310*/
              v42 = g_TacticalClass_Instance; /*0x6d9313*/
              v43 = v41; /*0x6d9319*/
              v44 = IsoCoord::ToPixel(&v97, *v41, v41[1]); /*0x6d932b*/
              v45 = *v44; /*0x6d932d*/
              v46 = v44[1]; /*0x6d932f*/
              v47 = v43[2]; /*0x6d9332*/
              v103 = v46; /*0x6d9335*/
              v48 = v45; /*0x6d9343*/
              v49 = ZCoordToScreenY(v47); /*0x6d934a*/
              *(_DWORD *)v94.__pad_0 = v48 / 256; /*0x6d935f*/
              v94.Vector2_field_0x04 = v103 / 256 - v49; /*0x6d936e*/
              v50 = v42[45]; /*0x6d9378*/
              v100[0] = v42[44]; /*0x6d9383*/
              v100[1] = v50; /*0x6d938a*/
              Vector2::Subtract(&v94, v100); /*0x6d9391*/
              if ( *(int *)v94.__pad_0 >= -360 /*0x6d93ca*/
                && *(int *)v94.__pad_0 <= dword_B0CE30 + 360
                && v94.Vector2_field_0x04 >= -180
                && v94.Vector2_field_0x04 <= dword_B0CE34 + 180 )
              {
                v51 = *v18; /*0x6d93cc*/
                *((_BYTE *)v18 + 153) = 1; /*0x6d93da*/
                (*(void (__thiscall **)(int *, Vector2 *, CellStruct *))(v51 + 268))(v18, &v94, &DSurface_ViewBounds); /*0x6d93e1*/
                (*(void (__thiscall **)(int *, CellStruct *, int, _DWORD))(*v18 + 260))( /*0x6d93fa*/
                  v18,
                  &DSurface_ViewBounds,
                  a2,
                  0);
              }
              v17 = v79; /*0x6d9400*/
              v14 = v86; /*0x6d9404*/
LABEL_53:
              v15 = v87; /*0x6d9408*/
              goto LABEL_54; /*0x6d9408*/
            }
            if ( !*(_BYTE *)(v18[50] + 691) && !*((_BYTE *)v18 + 205) ) /*0x6d923d*/
              goto LABEL_54; /*0x6d923d*/
            v37 = v18[39]; /*0x6d9251*/
            v89 = v37; /*0x6d9257*/
            v38 = v18[40]; /*0x6d925d*/
            v90 = v38; /*0x6d9260*/
            v91 = v18[41]; /*0x6d9267*/
            if ( v37 < v14 /*0x6d929f*/
              || v37 >= v14 + v95
              || v38 < v15
              || v38 >= v15 + v96
              || (unsigned __int8)Game::Stub3((int)&v89) )
            {
              goto LABEL_54; /*0x6d92a6*/
            }
            v30 = *v18; /*0x6d92ac*/
            *((_BYTE *)v18 + 153) = 1; /*0x6d92ae*/
            v76 = 0; /*0x6d92b5*/
          }
        }
        (*(void (__thiscall **)(int *, CellStruct *, int, int))(v30 + 260))(v18, &DSurface_ViewBounds, a2, v76); /*0x6d916c*/
LABEL_54:
        v52 = *(int *)((char *)dword_8A0370 + v17); /*0x6d940c*/
        if ( ++v88 >= v52 ) /*0x6d941d*/
        {
          v16 = (int)v85; /*0x6d9423*/
          break; /*0x6d9423*/
        }
      }
    }
    if ( v16 == 2 ) /*0x6d942a*/
    {
      v53 = 0; /*0x6d9436*/
      v80 = 0; /*0x6d943a*/
      if ( stru_A8EB00.ObjectTypeClass[20] > 0 ) /*0x6d943e*/
      {
        do /*0x6d9597*/
        {
          v54 = *(BuildingClass **)(stru_A8EB00.ObjectTypeClass[17] + 4 * v53); /*0x6d944a*/
          if ( v54->? && v54->? ) /*0x6d9458*/
          {
            v55 = (int *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))v54->TechnoClass + 43))(v54, v105); /*0x6d9472*/
            v56 = g_TacticalClass_Instance; /*0x6d9478*/
            v57 = v55; /*0x6d947e*/
            v58 = IsoCoord::ToPixel(&v83, *v55, v55[1]); /*0x6d948b*/
            v59 = v58[1]; /*0x6d9494*/
            v60 = (int)*v58; /*0x6d9497*/
            v99 = v59; /*0x6d949e*/
            v61 = (BYTE4(v60) + (int)v60) >> 8; /*0x6d94a9*/
            v62 = ZCoordToScreenY(v57[2]); /*0x6d94ac*/
            v92 = v61; /*0x6d94be*/
            v93 = v99 / 256 - v62; /*0x6d94c9*/
            v63 = v61 - *(_DWORD *)&v56[44]; /*0x6d94d9*/
            v64 = v93 - *(_DWORD *)&v56[45]; /*0x6d94db*/
            v92 = v63; /*0x6d94e3*/
            v93 = v64; /*0x6d94e7*/
            if ( v63 >= -360 && v63 <= dword_B0CE30 + 360 && v64 >= -180 && v64 <= dword_B0CE34 + 180 ) /*0x6d9516*/
            {
              v101[2] = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x6d952a*/
              v101[0] = DSurface_ViewBounds.field_0; /*0x6d9539*/
              v101[1] = (int)DSurface_ViewBounds.field_4; /*0x6d9540*/
              v101[3] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x6d9547*/
              BuildingClass::DrawVisible(v54, &v92, v101); /*0x6d957a*/
            }
            v14 = v86; /*0x6d957f*/
            v15 = v87; /*0x6d9583*/
          }
          v53 = ++v80; /*0x6d9590*/
        }
        while ( v80 < stru_A8EB00.ObjectTypeClass[20] ); /*0x6d9597*/
        v16 = (int)v85; /*0x6d959d*/
      }
    }
    v85 = (int *)++v16; /*0x6d95a5*/
  }
  while ( v16 < 5 ); /*0x6d95a9*/
  p_count = &stru_8A0360.count; /*0x6d95af*/
  v85 = &stru_8A0360.count; /*0x6d95b4*/
  do /*0x6d97b5*/
  {
    result = 0; /*0x6d95bb*/
    v86 = p_count[3]; /*0x6d95bf*/
    v88 = 0; /*0x6d95c3*/
    if ( v86 > 0 ) /*0x6d95c7*/
    {
      do /*0x6d97a2*/
      {
        v67 = *(_DWORD *)(*p_count + 4 * result); /*0x6d95cf*/
        if ( *(_BYTE *)(v67 + 153) ) /*0x6d95d2*/
        {
          if ( v67 ) /*0x6d95e2*/
          {
            if ( (*(_BYTE *)(v67 + 20) & 1) != 0 ) /*0x6d95f4*/
            {
              if ( (*(_BYTE *)(v67 + 20) & 4) == 0 /*0x6d965d*/
                || ((*(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v67 + 76))(v67, v105, 0), !g_hWnd)
                || stru_A8EB00.?[391]
                || ((int)dword_A8B230->vtable0 & 0x1000) == 0
                || (v97 = *(IsoCoord *)(v67 + 156),
                    v98 = *(_DWORD *)(v67 + 164),
                    !(unsigned __int8)Game::Stub3((int)&v97)) )
              {
                v68 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v67 + 72))(v67, v104); /*0x6d9676*/
                v69 = *v68; /*0x6d9683*/
                v99 = v68[1]; /*0x6d9689*/
                v92 = v68[2]; /*0x6d9697*/
                *(_DWORD *)v83.__pad_0 = -60 * v99 / 2 + 60 * v69 / 2; /*0x6d96d0*/
                v70 = *(_DWORD *)v83.__pad_0 / 256; /*0x6d96f7*/
                v71 = (30 * v99 / 2 + 30 * v69 / 2) / 256; /*0x6d96fa*/
                LOWORD(v72) = Math::RoundToInt((double)v92 * dbl_B0CD48 + (double)(v92 >= 728) + 0.5); /*0x6d9721*/
                v81 = v70; /*0x6d972d*/
                v82 = v71 - v72; /*0x6d9731*/
                v73 = v70 - *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x6d9741*/
                v74 = v71 - v72 - *(_DWORD *)&g_TacticalClass_Instance[45]; /*0x6d9743*/
                v81 = v73; /*0x6d974b*/
                v82 = v74; /*0x6d974f*/
                if ( v73 >= -360 && v73 <= dword_B0CE30 + 360 && v74 >= -180 && v74 <= dword_B0CE34 + 180 ) /*0x6d9779*/
                  (*(void (__thiscall **)(int, int *, CellStruct *))(*(_DWORD *)v67 + 272))( /*0x6d9789*/
                    v67,
                    &v81,
                    &DSurface_ViewBounds);
              }
            }
          }
        }
        result = v88 + 1; /*0x6d9797*/
        v75 = v88 + 1 < v86; /*0x6d9798*/
        p_count = v85; /*0x6d979a*/
        ++v88; /*0x6d979e*/
      }
      while ( v75 ); /*0x6d97a2*/
    }
    p_count += 6; /*0x6d97a8*/
    v85 = p_count; /*0x6d97b1*/
  }
  while ( (int)p_count < (int)&stru_8A0390.ambientSoundController[4] ); /*0x6d97b5*/
  return result; /*0x6d97bb*/
}



// ==== 0x006D97D0  TacticalClass::FindOverlay  this=AbstractClass  sig=csp ====
int __stdcall TacticalClass_FindOverlay(int a1, int *a2, int *a3)
{
  int *v3; // eax
  int v4; // edx
  int result; // eax
  _BYTE *v6; // esi
  int v7; // edi
  int v8; // ebp
  _DWORD *v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // [esp+4h] [ebp-30h]
  int v16; // [esp+8h] [ebp-2Ch]
  int v17; // [esp+Ch] [ebp-28h]
  int v18; // [esp+10h] [ebp-24h]
  _DWORD v19[4]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v20[16]; // [esp+24h] [ebp-10h] BYREF
  int i; // [esp+3Ch] [ebp+8h]

  v3 = ClipRectIntersection(v19, a2, a3, 0, 0); /*0x6d97e4*/
  v15 = *v3; /*0x6d97eb*/
  v16 = v3[1]; /*0x6d97f2*/
  v17 = v3[2]; /*0x6d97f9*/
  v4 = v3[3]; /*0x6d97fd*/
  result = dword_8A03A0 - 1; /*0x6d9805*/
  v18 = v4; /*0x6d9806*/
  for ( i = dword_8A03A0 - 1; i >= 0; --i ) /*0x6d9810*/
  {
    v6 = *(_BYTE **)(dword_8A0394 + 4 * result); /*0x6d9820*/
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 44))(v6) == 36 /*0x6d9856*/
      && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 68))(v6)
      && !*(_BYTE *)(*((_DWORD *)v6 + 50) + 691)
      && !v6[205] )
    {
      v7 = DSurface_ViewBounds; /*0x6d9866*/
      v8 = dword_886FA4; /*0x6d986c*/
      v9 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v6 + 300))(v6, v20); /*0x6d9879*/
      v10 = v8 + v9[1]; /*0x6d9888*/
      v11 = v7 + *v9; /*0x6d988e*/
      v12 = v9[2]; /*0x6d9890*/
      v13 = v9[3]; /*0x6d9893*/
      if ( v11 < v15 + v17 && v10 < v16 + v18 && v11 + v12 > v15 && v10 + v13 > v16 ) /*0x6d98b8*/
      {
        v19[0] = *a3; /*0x6d98c2*/
        v19[1] = a3[1]; /*0x6d98c9*/
        v19[2] = a3[2]; /*0x6d98d0*/
        v14 = *(_DWORD *)v6; /*0x6d98d4*/
        v19[3] = a3[3]; /*0x6d98dd*/
        (*(void (__thiscall **)(_BYTE *, _DWORD *, int, _DWORD))(v14 + 260))(v6, v19, a1, 0); /*0x6d98e9*/
        v6[128] = 0; /*0x6d98ef*/
      }
    }
    result = i - 1; /*0x6d98fa*/
  }
  return result; /*0x6d9909*/
}



// ==== 0x006D9920  TacticalClass::FindBuilding  this=AbstractClass  sig=csp ====
int __stdcall TacticalClass_FindBuilding(int a1, int *a2, int *a3)
{
  int *v3; // eax
  int v4; // edx
  int result; // eax
  _BYTE *v6; // esi
  int v7; // edi
  int v8; // ebp
  _DWORD *v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // [esp+4h] [ebp-30h]
  int v16; // [esp+8h] [ebp-2Ch]
  int v17; // [esp+Ch] [ebp-28h]
  int v18; // [esp+10h] [ebp-24h]
  _DWORD v19[4]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v20[16]; // [esp+24h] [ebp-10h] BYREF
  int i; // [esp+3Ch] [ebp+8h]

  v3 = ClipRectIntersection(v19, a2, a3, 0, 0); /*0x6d9934*/
  v15 = *v3; /*0x6d993b*/
  v16 = v3[1]; /*0x6d9942*/
  v17 = v3[2]; /*0x6d9949*/
  v4 = v3[3]; /*0x6d9953*/
  result = 0; /*0x6d9956*/
  v18 = v4; /*0x6d995a*/
  for ( i = 0; i < dword_8A03A0; ++i ) /*0x6d9962*/
  {
    v6 = *(_BYTE **)(dword_8A0394 + 4 * result); /*0x6d9972*/
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 44))(v6) == 6 && (!v6[1767] || byte_A8ED6B) ) /*0x6d9996*/
    {
      v7 = DSurface_ViewBounds; /*0x6d999e*/
      v8 = dword_886FA4; /*0x6d99a4*/
      v9 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v6 + 300))(v6, v20); /*0x6d99b1*/
      v10 = v8 + v9[1]; /*0x6d99c0*/
      v11 = v7 + *v9; /*0x6d99c6*/
      v12 = v9[2]; /*0x6d99c8*/
      v13 = v9[3]; /*0x6d99cb*/
      if ( v11 < v15 + v17 && v10 < v16 + v18 && v11 + v12 > v15 && v10 + v13 > v16 ) /*0x6d99f0*/
      {
        v19[0] = *a3; /*0x6d99fa*/
        v19[1] = a3[1]; /*0x6d9a01*/
        v19[2] = a3[2]; /*0x6d9a08*/
        v14 = *(_DWORD *)v6; /*0x6d9a13*/
        v19[3] = a3[3]; /*0x6d9a15*/
        (*(void (__thiscall **)(_BYTE *, _DWORD *, int, _DWORD))(v14 + 260))(v6, v19, a1, 0); /*0x6d9a21*/
        v6[128] = 0; /*0x6d9a27*/
      }
    }
    result = i + 1; /*0x6d9a38*/
  }
  return result; /*0x6d9a49*/
}



// ==== 0x006D9A50  Render_Render_6D9A50  this=Tactical  sig=csp ====
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
  for ( i = 0; i < dword_8A03A0; ++i ) /*0x6d9a69*/
  {
    v5 = *(_BYTE **)(dword_8A0394 + 4 * result); /*0x6d9a75*/
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 44))(v5) == 6 ) /*0x6d9a82*/
    {
      if ( v5[128] ) /*0x6d9a88*/
      {
        v6 = (int *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v5 + 300))(v5, v10); /*0x6d9a9f*/
        v7 = DSurface_ViewBounds + *v6; /*0x6d9aaf*/
        v8 = dword_886FA4 + v6[1]; /*0x6d9ac4*/
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



// ==== 0x006D9B50  TacticalClass::CheckUnitOverlap  this=TacticalClass  sig=csp ====
char __thiscall TacticalClass::CheckUnitOverlap(TacticalClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // ecx
  int v7; // ebx
  int v8; // eax
  _BYTE *v9; // ecx
  _DWORD *v10; // eax
  int v11; // ebp
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v16; // [esp+10h] [ebp-2Ch]
  int v17; // [esp+18h] [ebp-24h]
  int v18; // [esp+1Ch] [ebp-20h]
  int v19; // [esp+24h] [ebp-18h]
  int v20; // [esp+2Ch] [ebp-10h]
  _BYTE v21[12]; // [esp+30h] [ebp-Ch] BYREF

  v5 = this->visibleArea[0]; /*0x6d9b53*/
  v6 = this->visibleArea[1]; /*0x6d9b5d*/
  v17 = v5 + a2; /*0x6d9b6a*/
  v18 = v6 + a3; /*0x6d9b75*/
  v7 = a2 + v5 + a4; /*0x6d9b86*/
  v8 = 0; /*0x6d9b8a*/
  v20 = a3 + a5 + v6; /*0x6d9b8c*/
  v16 = 0; /*0x6d9b98*/
  if ( stru_A8EB00.ObjectTypeClass[20] <= 0 ) /*0x6d9b9c*/
    return 0; /*0x6d9cc6*/
  while ( 1 ) /*0x6d9ba8*/
  {
    v9 = *(_BYTE **)(stru_A8EB00.ObjectTypeClass[17] + 4 * v8); /*0x6d9ba8*/
    if ( !v9[144] || !v9[128] || !v9[116] ) /*0x6d9bc7*/
      goto LABEL_10; /*0x6d9bcc*/
    v10 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v9 + 172))(v9, v21); /*0x6d9bd9*/
    v19 = v10[1]; /*0x6d9be6*/
    v11 = (-60 * v19 / 2 + 60 * *v10 / 2) / 256; /*0x6d9c5d*/
    v12 = (30 * v19 / 2 + 30 * *v10 / 2) / 256; /*0x6d9c60*/
    LOWORD(v13) = Math::RoundToInt((double)(int)v10[2] * dbl_B0CD48 + (double)(v10[2] >= 728) + 0.5); /*0x6d9c87*/
    v14 = v12 - v13; /*0x6d9c8c*/
    if ( v11 >= v17 && v11 <= v7 && v14 >= v18 && v14 <= v20 ) /*0x6d9ca4*/
      return 1; /*0x6d9cbd*/
    v8 = v16; /*0x6d9ca6*/
LABEL_10:
    v16 = ++v8; /*0x6d9cb3*/
    if ( v8 >= stru_A8EB00.ObjectTypeClass[20] ) /*0x6d9cb7*/
      return 0; /*0x6d9cb7*/
  }
}



// ==== 0x006D9CE0  ObjectClass::FindBuildingsInScreenRect  this=ObjectClass  sig=csp ====
int __thiscall FindBuildingsInScreenRect(ObjectClass *this, int a2, int a3, int a4, int a5)
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
  int v15; // eax
  int v16; // edi
  int v17; // ebp
  int v18; // eax
  int v19; // edi
  int v20; // ecx
  int v21; // eax
  int i; // [esp+Ch] [ebp-24h]
  int v23; // [esp+10h] [ebp-20h]
  int v24; // [esp+14h] [ebp-1Ch]
  int v25; // [esp+18h] [ebp-18h]
  int v26; // [esp+1Ch] [ebp-14h]
  int v27; // [esp+20h] [ebp-10h]
  int v28; // [esp+2Ch] [ebp-4h]

  v6 = this->fallRate; /*0x6d9cf0*/
  v24 = v6 + a2; /*0x6d9cf9*/
  v7 = this->u32_2D; /*0x6d9cfd*/
  v25 = v7 + a3; /*0x6d9d06*/
  v26 = a2 + a4 + v6; /*0x6d9d16*/
  v27 = a3 + v7 + a5; /*0x6d9d25*/
  result = 0; /*0x6d9d29*/
  for ( i = 0; i < stru_A8EB00.ObjectTypeClass[20]; ++i ) /*0x6d9d31*/
  {
    v9 = *(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * result); /*0x6d9d3e*/
    v23 = v9; /*0x6d9d41*/
    if ( *(_BYTE *)(v9 + 144) ) /*0x6d9d45*/
    {
      if ( *(_BYTE *)(v9 + 116) ) /*0x6d9d53*/
      {
        if ( !*(_BYTE *)(*(_DWORD *)(v9 + 1312) + 5889) ) /*0x6d9d64*/
        {
          v10 = (_DWORD *)(v9 + 156); /*0x6d9d72*/
          v11 = v10[1]; /*0x6d9d79*/
          v28 = v10[2]; /*0x6d9d82*/
          v12 = 30 * v11 / 2 + 30 * *v10 / 2; /*0x6d9dcf*/
          v13 = -60 * v11 / 2 + 60 * *v10 / 2; /*0x6d9dd3*/
          v14 = (BYTE4(v13) + (int)v13) >> 8; /*0x6d9deb*/
          LOWORD(v15) = Math::RoundToInt((double)v28 * dbl_B0CD48 + (double)(v28 >= 728) + 0.5); /*0x6d9e15*/
          v16 = v12 / 256 - v15; /*0x6d9e1a*/
          if ( v14 >= v24 && v14 <= v26 && v16 >= v25 && v16 <= v27 ) /*0x6d9e40*/
          {
            v17 = v14 - this->fallRate; /*0x6d9e52*/
            v18 = *((_DWORD *)this + 876); /*0x6d9e54*/
            v19 = v16 - this->u32_2D; /*0x6d9e5a*/
            if ( v18 != 500 /*0x6d9e85*/
              && v17 >= -32
              && v17 <= *(_DWORD *)DSurface_ViewBounds.__pad_8 + 32
              && v19 >= -32
              && v19 <= *(_DWORD *)&DSurface_ViewBounds.__pad_8[4] + 32 )
            {
              dword_B0CEC8[3 * v18] = v23; /*0x6d9e8e*/
              v20 = this->u32_2D; /*0x6d9e9b*/
              v21 = 3 * *((_DWORD *)this + 876); /*0x6d9eac*/
              dword_B0CECC[v21] = this->fallRate + v17; /*0x6d9eaf*/
              dword_B0CED0[v21] = v19 + v20; /*0x6d9eb6*/
              ++*((_DWORD *)this + 876); /*0x6d9ec4*/
            }
          }
        }
      }
    }
    result = i + 1; /*0x6d9ed4*/
  }
  return result; /*0x6d9ee2*/
}



// ==== 0x006D9EF0  TacticalClass::AddToDrawQueue  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::AddToDrawQueue(TacticalClass *this, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // edx
  int v6; // eax

  result = this->floats[0]; /*0x6d9ef0*/
  if ( result == 500 /*0x6d9f29*/
    || a3 < -32
    || a3 > *(_DWORD *)DSurface_ViewBounds.__pad_8 + 32
    || a4 < -32
    || a4 > *(_DWORD *)&DSurface_ViewBounds.__pad_8[4] + 32 )
  {
    LOBYTE(result) = 0; /*0x6d9f75*/
  }
  else
  {
    dword_B0CEC8[3 * result] = a2; /*0x6d9f32*/
    v5 = this->visibleArea[1]; /*0x6d9f3f*/
    v6 = 3 * this->floats[0]; /*0x6d9f50*/
    dword_B0CECC[v6] = this->visibleArea[0] + a3; /*0x6d9f53*/
    dword_B0CED0[v6] = a4 + v5; /*0x6d9f5b*/
    result = this->floats[0] + 1; /*0x6d9f68*/
    this->floats[0] = result; /*0x6d9f69*/
    LOBYTE(result) = 1; /*0x6d9f6f*/
  }
  return result; /*0x6d9f4f*/
}



// ==== 0x006D9F80  TacticalClass::InitScrollBounds  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::InitScrollBounds(TacticalClass *this, _DWORD *a2)
{
  int result; // eax

  result = this->TacticalClass_field_D90; /*0x6d9f80*/
  if ( !result ) /*0x6d9f88*/
  {
    result = this->TacticalClass_field_D94; /*0x6d9f8a*/
    if ( !result ) /*0x6d9f92*/
    {
      this->TacticalClass_field_D90 = *a2; /*0x6d9f9a*/
      this->TacticalClass_field_D94 = a2[1]; /*0x6d9fa3*/
      this->TacticalClass_field_D98 = *a2; /*0x6d9fab*/
      result = a2[1]; /*0x6d9fb1*/
      this->TacticalClass_field_D9C = result; /*0x6d9fb4*/
    }
  }
  return result; /*0x6d9fba*/
}



// ==== 0x006D9FC0  TacticalClass::UpdateScrollMaxBounds  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::UpdateScrollMaxBounds(TacticalClass *this, _DWORD *a2)
{
  int result; // eax

  if ( this->TacticalClass_field_D90 || (result = this->TacticalClass_field_D94) != 0 ) /*0x6d9fd2*/
  {
    this->TacticalClass_field_D98 = *a2; /*0x6d9fda*/
    result = a2[1]; /*0x6d9fe0*/
    this->TacticalClass_field_D9C = result; /*0x6d9fe3*/
  }
  return result; /*0x6d9fe9*/
}



// ==== 0x006D9FF0  PlayerClass::ProcessOccupancyUpdate  this=PlayerClass  sig=csp ====
int __thiscall PlayerClass::ProcessOccupancyUpdate(PlayerClass *this, void (__thiscall *a2)(_BYTE *))
{
  int result; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // ebx
  int v9[4]; // [esp+4h] [ebp-10h] BYREF

  if ( *((_DWORD *)this + 868) || (result = *((_DWORD *)this + 869)) != 0 ) /*0x6da008*/
  {
    v4 = *((_DWORD *)this + 868); /*0x6da00a*/
    v5 = *((_DWORD *)this + 870); /*0x6da010*/
    v6 = *((_DWORD *)this + 871); /*0x6da016*/
    v7 = *((_DWORD *)this + 869); /*0x6da01e*/
    if ( v4 > v5 ) /*0x6da026*/
    {
      v8 = v4; /*0x6da028*/
      v4 = v5; /*0x6da02a*/
      v5 = v8; /*0x6da02c*/
    }
    if ( v7 > v6 ) /*0x6da030*/
    {
      v7 = v6; /*0x6da034*/
      v6 = *((_DWORD *)this + 869); /*0x6da036*/
    }
    v9[2] = v5 - v4 + 1; /*0x6da03e*/
    v9[3] = v6 - v7 + 1; /*0x6da046*/
    v9[0] = v4; /*0x6da052*/
    v9[1] = v7; /*0x6da056*/
    BuildingClass::ProcessOccupancy((BuildingClass *)this, v9, a2); /*0x6da05a*/
    *((_DWORD *)this + 868) = 0; /*0x6da063*/
    *((_DWORD *)this + 869) = 0; /*0x6da06a*/
    return 0; /*0x6da05f*/
  }
  return result; /*0x6da071*/
}



// ==== 0x006DA080  PlayerClass::HasOccupiedCell  this=PlayerClass  sig=csp ====
int __thiscall PlayerClass::HasOccupiedCell(PlayerClass *this)
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

  v1 = *((_DWORD *)this + 870); /*0x6da080*/
  v2 = *((_DWORD *)this + 871); /*0x6da086*/
  v3 = *((_DWORD *)this + 868); /*0x6da090*/
  v4 = *((_DWORD *)this + 869); /*0x6da097*/
  if ( v3 > v1 ) /*0x6da0a1*/
  {
    v3 = *((_DWORD *)this + 870); /*0x6da0a5*/
    v1 = *((_DWORD *)this + 868); /*0x6da0a7*/
  }
  if ( v4 > v2 ) /*0x6da0ab*/
  {
    v4 = *((_DWORD *)this + 871); /*0x6da0af*/
    v2 = *((_DWORD *)this + 869); /*0x6da0b1*/
  }
  v5 = v2 - v4 + 1; /*0x6da0b8*/
  v11 = v1 - v3 + 1; /*0x6da0bb*/
  v12 = v5; /*0x6da0bf*/
  if ( v11 <= 0 ) /*0x6da0c3*/
    return 0; /*0x6da0c3*/
  if ( v5 <= 0 ) /*0x6da0cb*/
    return 0; /*0x6da0cb*/
  v10 = 0; /*0x6da0d3*/
  if ( *((int *)this + 876) <= 0 ) /*0x6da0dd*/
    return 0; /*0x6da14b*/
  for ( i = dword_B0CEC8; ; i += 3 ) /*0x6da0df*/
  {
    if ( *i ) /*0x6da0e4*/
    {
      if ( *(_BYTE *)(*i + 144) ) /*0x6da0ea*/
      {
        v7 = i[1] - this->q02C; /*0x6da103*/
        v8 = i[2] - *((_DWORD *)this + 45); /*0x6da108*/
        if ( v7 >= v3 && v7 < v3 + v11 && v8 >= v4 && v8 < v4 + v12 ) /*0x6da124*/
          break; /*0x6da124*/
      }
    }
    if ( ++v10 >= *((_DWORD *)this + 876) ) /*0x6da13a*/
      return 0; /*0x6da13a*/
  }
  return 1; /*0x6da13e*/
}



// ==== 0x006DA160  TacticalClass::ResetScrollBounds  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::ResetScrollBounds(TacticalClass *this)
{
  this->TacticalClass_field_D90 = 0; /*0x6da164*/
  this->TacticalClass_field_D98 = 0; /*0x6da16a*/
  this->TacticalClass_field_D94 = 0; /*0x6da170*/
  this->TacticalClass_field_D9C = 0; /*0x6da176*/
  return 0; /*0x6da17c*/
}



// ==== 0x006DA180  TacticalMap::DrawOccupiedRegion  this=TacticalMap  sig=csp ====
int __thiscall TacticalMap::DrawOccupiedRegion(TacticalMap *this)
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

  if ( *((_DWORD *)this + 868) || (result = *((_DWORD *)this + 869)) != 0 ) /*0x6da195*/
  {
    v2 = *((_DWORD *)this + 868); /*0x6da19b*/
    v3 = *((_DWORD *)this + 870); /*0x6da1a1*/
    v4 = *((_DWORD *)this + 869); /*0x6da1a9*/
    v5 = *((_DWORD *)this + 871); /*0x6da1af*/
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
    if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x6da1dc*/
      v9 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 15); /*0x6da1ea*/
    else
      v9 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 30); /*0x6da1f7*/
    v10[2] = v8; /*0x6da201*/
    v10[0] = v2; /*0x6da209*/
    v10[1] = v4; /*0x6da20d*/
    v10[3] = v5 - v4 + 1; /*0x6da211*/
    return (*(int (__thiscall **)(AudioStream *, CellStruct *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x6da21e*/
                                                                             + 84))(
             g_DSurface_Hidden_2,
             &DSurface_ViewBounds,
             v10,
             v9);
  }
  return result; /*0x6da224*/
}



// ==== 0x006DA230  DisplayClass::GetCoordDelta  this=DisplayClass  sig=csp ====
int __thiscall DisplayClass::GetCoordDelta(DisplayClass *this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // esi
  int v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h]

  if ( (byte_B0CE00 & 1) == 0 ) /*0x6da244*/
  {
    byte_B0CE00 |= 1u; /*0x6da24f*/
    dword_B0CD98[0] = 0; /*0x6da256*/
    dword_B0CD9C[0] = -1; /*0x6da25b*/
    dword_B0CDA0 = 1; /*0x6da266*/
    dword_B0CDA4 = -1; /*0x6da26b*/
    dword_B0CDA8 = 1; /*0x6da271*/
    dword_B0CDB0 = 1; /*0x6da276*/
    dword_B0CDAC = 0; /*0x6da27f*/
    dword_B0CDB8 = 0; /*0x6da285*/
    dword_B0CDB4 = 1; /*0x6da28f*/
    dword_B0CDBC = 1; /*0x6da295*/
    dword_B0CDC0 = -1; /*0x6da29b*/
    dword_B0CDC4 = 1; /*0x6da2a0*/
    dword_B0CDC8 = -1; /*0x6da2ab*/
    dword_B0CDCC = 0; /*0x6da2b0*/
    dword_B0CDD0 = -1; /*0x6da2c1*/
    dword_B0CDD4 = -1; /*0x6da2c6*/
    atexit(nullsub_42); /*0x6da2cc*/
  }
  result = a2; /*0x6da2d4*/
  v4 = *(_DWORD *)&this->__pad_41E[2374]; /*0x6da2d8*/
  v5 = *(_DWORD *)&this->__pad_41E[2378]; /*0x6da2de*/
  v6 = v4 + dword_B0CD98[2 * a2]; /*0x6da2f2*/
  v7 = v5 + dword_B0CD9C[2 * a2]; /*0x6da2f4*/
  if ( v6 != v4 || v7 != v5 ) /*0x6da2fc*/
  {
    v8 = v4 + dword_B0CD98[2 * a2]; /*0x6da305*/
    v9 = v7; /*0x6da309*/
    if ( ClampCoordMap(&v8) ) /*0x6da30d*/
    {
      if ( !stru_A8EB00.?[391] ) /*0x6da31d*/
      {
        v6 = v8; /*0x6da31f*/
        v7 = v9; /*0x6da323*/
      }
    }
    return dword_84291C[2 * (*(_DWORD *)&this->__pad_41E[2378] - v7) /*0x6da33c*/
                      + *(_DWORD *)&this->__pad_41E[2374]
                      - v6
                      + *(_DWORD *)&this->__pad_41E[2378]
                      - v7];
  }
  return result; /*0x6da343*/
}



// ==== 0x006DA350  nullsub_42  this=-  sig=ida-proto ====
void __cdecl nullsub_42()
{
  ; /*0x6da350*/
}



// ==== 0x006DA360  UI_Move  this=Tactical  sig=csp ====
_DWORD *__stdcall sub_6DA360(_DWORD *a1, _DWORD *a2, int a3)
{
  *a1 = *a2; /*0x6da36a*/
  return a1; /*0x6da36c*/
}



// ==== 0x006DA370  nullsub_239  this=-  sig=csp ====
void __stdcall nullsub_239(int a1)
{
  ; /*0x6da370*/
}



// ==== 0x006DA380  TacticalClass::IsOccupiedByTechno  this=TacticalClass  sig=csp ====
_BYTE *__thiscall TacticalClass::IsOccupiedByTechno(TacticalClass *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int *v4; // edi
  _BYTE *v5; // esi
  _BYTE *v6; // eax
  char v7; // bl
  _DWORD *v8; // eax
  CellClass *v9; // eax
  double v10; // st7
  unsigned int v11; // eax
  _BYTE *result; // eax
  int v13; // ecx
  int v14; // eax
  void *Object_field_0x30; // [esp-8h] [ebp-3Ch]
  unsigned int v16; // [esp+Ch] [ebp-28h]
  int v17; // [esp+10h] [ebp-24h]
  _BYTE *v18; // [esp+14h] [ebp-20h]
  int v19; // [esp+18h] [ebp-1Ch]
  int v20[2]; // [esp+1Ch] [ebp-18h] BYREF
  int v21; // [esp+24h] [ebp-10h] BYREF
  char v22[12]; // [esp+28h] [ebp-Ch] BYREF

  v2 = a2; /*0x6da385*/
  v19 = *a2 + this->visibleArea[0]; /*0x6da39b*/
  v18 = 0; /*0x6da3a7*/
  v20[0] = a2[1] + this->visibleArea[1]; /*0x6da3ab*/
  v16 = -1; /*0x6da3b7*/
  v17 = 0; /*0x6da3bf*/
  if ( this->floats[0] <= 0 ) /*0x6da3c3*/
  {
LABEL_18:
    v13 = v2[1]; /*0x6da4b8*/
    v20[0] = DSurface_ViewBounds.field_0 + *v2; /*0x6da4cb*/
    v20[1] = (int)DSurface_ViewBounds.field_4 + v13; /*0x6da4d9*/
    a2 = (_DWORD *)*Tactical::PixelToCell((Tactical *)this, &v21, v20); /*0x6da4ec*/
    return (_BYTE *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 57); /*0x6da4fb*/
  }
  v4 = dword_B0CECC; /*0x6da3ca*/
  do /*0x6da4a5*/
  {
    v5 = (_BYTE *)*(v4 - 1); /*0x6da3cf*/
    if ( !v5 ) /*0x6da3d4*/
      goto LABEL_15; /*0x6da3d4*/
    v6 = AbstractClass::IsTechno((AbstractClass *)*(v4 - 1)); /*0x6da3dc*/
    v7 = 0; /*0x6da3e1*/
    if ( !v6 ) /*0x6da3e5*/
    {
      if ( !(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 136))(v5) ) /*0x6da50e*/
        goto LABEL_15; /*0x6da50e*/
      v14 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 136))(v5); /*0x6da520*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) != 37 /*0x6da540*/
        || !*(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 136))(v5) + 692) )
      {
        goto LABEL_15; /*0x6da548*/
      }
LABEL_12:
      v10 = (double)((v4[1] - v20[0]) * (v4[1] - v20[0])) * 0.5; /*0x6da444*/
      v21 = (*v4 - v19) * (*v4 - v19); /*0x6da46d*/
      LOWORD(v11) = Math::RoundToInt(v10 + (double)v21); /*0x6da477*/
      if ( v11 < v16 && v11 < 0xC8 ) /*0x6da487*/
      {
        v16 = v11; /*0x6da489*/
        v18 = v5; /*0x6da48d*/
      }
      goto LABEL_15; /*0x6da48d*/
    }
    if ( v5[144] ) /*0x6da3eb*/
    {
      if ( !v6[129] ) /*0x6da3f5*/
      {
        if ( v6[1050] /*0x6da435*/
          || *((_DWORD *)v6 + 136) != 2
          || (Object_field_0x30 = dword_A83D4C->Object_field_0x30,
              v8 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, char *))(*(_DWORD *)v6 + 72))(v6, v22),
              v9 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v8),
              (unsigned __int8)Cell::IsPassableOffset((Cell *)v9, (int)Object_field_0x30)) )
        {
          v7 = 1; /*0x6da43e*/
        }
      }
    }
    if ( v7 ) /*0x6da442*/
      goto LABEL_12; /*0x6da442*/
LABEL_15:
    v4 += 3; /*0x6da491*/
    ++v17; /*0x6da4a1*/
  }
  while ( v17 < this->floats[0] ); /*0x6da4a5*/
  result = v18; /*0x6da4ab*/
  if ( !v18 ) /*0x6da4b2*/
  {
    v2 = a2; /*0x6da4b4*/
    goto LABEL_18; /*0x6da4b4*/
  }
  return result; /*0x6da501*/
}



// ==== 0x006DA560  Tactical::ScrollMap  this=Tactical  sig=csp ====
int *__stdcall Tactical::ScrollMap(Tactical *this, int a2)
{
  int *result; // eax

  result = dword_B0CEC8; /*0x6da564*/
  do /*0x6da57b*/
  {
    if ( (Tactical *)*result == this ) /*0x6da56b*/
      *result = 0; /*0x6da56d*/
    result += 3; /*0x6da573*/
  }
  while ( (int)result < (int)&dword_B0E638 ); /*0x6da57b*/
  if ( this == *(Tactical **)&stru_87F5F0.__pad_E12[1398] ) /*0x6da583*/
  {
    result = (int *)MIXClass::CopyHeader((int *)&stru_87F5F0.__pad_58[416], 0); /*0x6da58c*/
    *(_DWORD *)&stru_87F5F0.__pad_E12[1398] = 0; /*0x6da591*/
    *(_DWORD *)&stru_87F5F0.__pad_E12[1402] = 0; /*0x6da59b*/
    *(_DWORD *)&stru_87F5F0.__pad_E12[1406] = -1; /*0x6da5a5*/
  }
  return result; /*0x6da5af*/
}



// ==== 0x006DA5C0  BuildingClass::ProcessOccupancy  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessOccupancy(BuildingClass *this, int *a2, void (__thiscall *a3)(_BYTE *))
{
  int *v3; // ebx
  int result; // eax
  int *v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  bool v12; // bl
  BuildingClass *v13; // ecx
  House *v14; // eax
  int v15; // [esp+8h] [ebp-4h]

  v3 = a2; /*0x6da5c2*/
  g_MoveFeedback = 1; /*0x6da5c6*/
  result = a2[2]; /*0x6da5ce*/
  if ( result <= 0 || (result = a2[3], result <= 0) || (result = *((_DWORD *)this + 876), v15 = 0, result <= 0) ) /*0x6da5f6*/
  {
    g_MoveFeedback = 1; /*0x6da730*/
  }
  else
  {
    v6 = dword_B0CEC8; /*0x6da5fe*/
    do /*0x6da714*/
    {
      v7 = *v6; /*0x6da603*/
      if ( *v6 ) /*0x6da603*/
      {
        if ( *(_BYTE *)(v7 + 144) ) /*0x6da60d*/
        {
          v8 = v6[1] - this->?; /*0x6da62a*/
          v9 = v6[2] - this->?; /*0x6da62f*/
          if ( v8 >= *v3 && v8 < v3[2] + *v3 ) /*0x6da640*/
          {
            v10 = v3[1]; /*0x6da646*/
            if ( v9 >= v10 && v9 < v3[3] + v10 ) /*0x6da656*/
            {
              if ( Selection::GetFlag() ) /*0x6da65c*/
              {
                v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 136))(v7); /*0x6da669*/
                MoveFeedback::ProcessCommand((MoveFeedback *)(v11 + 36)); /*0x6da674*/
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
                  v13 = *(BuildingClass **)(v7 + 1312); /*0x6da698*/
                  if ( v13->?[4] ) /*0x6da69e*/
                    v12 = BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable(v13); /*0x6da6b1*/
                }
                v14 = (House *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 60))(v7); /*0x6da6b7*/
                if ( v14 /*0x6da6e5*/
                  && (unsigned __int8)House::IsHumanPlayer(v14)
                  && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 312))(v7)
                  && ((*(int (__thiscall **)(int))(*(_DWORD *)v7 + 44))(v7) != 6 || v12) )
                {
                  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 332))(v7) ) /*0x6da6eb*/
                    g_MoveFeedback = 0; /*0x6da6f5*/
                }
                v3 = a2; /*0x6da6fc*/
              }
            }
          }
        }
      }
      result = v15 + 1; /*0x6da70a*/
      v6 += 3; /*0x6da70b*/
      ++v15; /*0x6da710*/
    }
    while ( v15 < *((_DWORD *)this + 876) ); /*0x6da714*/
    g_MoveFeedback = 1; /*0x6da71d*/
  }
  return result; /*0x6da71c*/
}



// ==== 0x006DA740  SuperWeaponClass::UpdateAll  this=SuperWeaponClass  sig=csp ====
int SuperWeaponClass::UpdateAll(SuperWeaponClass *this)
{
  while ( *(_DWORD *)&stru_A8EB00.?[228] ) /*0x6da747*/
    (*(void (__thiscall **)(_DWORD))(***(_DWORD ***)&stru_A8EB00.?[216] + 336))(**(_DWORD **)&stru_A8EB00.?[216]); /*0x6da752*/
  return Selection::SetCurrent(0);
}



// ==== 0x006DA770  SelectAllOfType_Play  this=Tactical  sig=ida-proto ====
char sub_6DA770()
{
  int *v0; // esi
  int v1; // eax
  bool v2; // zf
  #375 *v3; // eax

  if ( dword_A8ECC8 != (wchar_t *)1 ) /*0x6da779*/
    return 0; /*0x6da779*/
  v0 = *(int **)dword_A8ECBC; /*0x6da780*/
  if ( !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)dword_A8ECBC + 60))(*(_DWORD *)dword_A8ECBC) ) /*0x6da786*/
    return 0; /*0x6da786*/
  v1 = *v0; /*0x6da796*/
  if ( dword_A8B238[0] ) /*0x6da798*/
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



// ==== 0x006DA7D0  Tactical::AddCellToDrawList  this=Tactical  sig=csp ====
int __thiscall Tactical::AddCellToDrawList(int *this, int a2)
{
  int result; // eax
  int *Coords; // eax
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

  result = dword_87F7F4; /*0x6da7d0*/
  if ( !dword_87F7F4 ) /*0x6da7df*/
  {
    result = (int)dword_A8ED84; /*0x6da7e9*/
    if ( *(wchar_t **)(a2 + 92) != dword_A8ED84 && ((*(_BYTE *)(a2 + 300) & 8) != 0 || *(_BYTE *)(a2 + 312)) ) /*0x6da800*/
    {
      *(_DWORD *)(a2 + 92) = dword_A8ED84; /*0x6da80e*/
      Coords = CellClass::GetCoords((_DWORD *)a2, v14); /*0x6da819*/
      v5 = *Coords; /*0x6da81e*/
      v6 = Coords[1]; /*0x6da820*/
      v7 = Coords[2]; /*0x6da823*/
      v8 = *(_DWORD *)(a2 + 300); /*0x6da826*/
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
      v13 = v9 / 256 - this->q02C; /*0x6da8ff*/
      result = v11 / 256 - v12 - this->q02D; /*0x6da907*/
      if ( v13 >= DSurface_ViewBounds - 30 /*0x6da936*/
        && result >= -30
        && v13 <= dword_886FA8 + DSurface_ViewBounds + 30
        && result <= dword_886FAC + dword_886FA4 + 15 )
      {
        result = this->q038; /*0x6da938*/
        if ( result < 799 ) /*0x6da943*/
        {
          *(this + result + 57) = a2; /*0x6da949*/
          result = this->q038 + 1; /*0x6da956*/
          this->q038 = result; /*0x6da957*/
        }
        *(_BYTE *)(a2 + 312) = 0; /*0x6da961*/
        this->u8_D7D = 1; /*0x6da968*/
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

  v0 = g_CraterCreationState; /*0x6da980*/
  while ( g_CraterCreationState > 0 ) /*0x6da988*/
  {
    v1 = 0; /*0x6da98f*/
    g_CraterCreationState = v0 - 1; /*0x6da993*/
    if ( v0 - 1 <= 0 ) /*0x6da999*/
      break; /*0x6da999*/
    v2 = 0; /*0x6da99b*/
    do /*0x6da9bd*/
    {
      ++v1; /*0x6da9a3*/
      v3 = (char *)g_CraterPool + v2 + 20; /*0x6da9a4*/
      v4 = (char *)g_CraterPool + v2; /*0x6da9a8*/
      v2 += 20; /*0x6da9b0*/
      qmemcpy(v4, v3, 0x14u); /*0x6da9b3*/
      v0 = g_CraterCreationState; /*0x6da9b5*/
    }
    while ( v1 < g_CraterCreationState ); /*0x6da9bd*/
  }
}



// ==== 0x006DA9D0  ObjectClass::RenderSelectionBeacons  this=ObjectClass  sig=csp ====
char *__thiscall RenderSelectionBeacons(ObjectClass *this, int a2)
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
  int i; // [esp+38h] [ebp-60h]
  int v21; // [esp+3Ch] [ebp-5Ch]
  Vector2 v22; // [esp+40h] [ebp-58h] BYREF
  int v23; // [esp+48h] [ebp-50h] BYREF
  char *v24; // [esp+4Ch] [ebp-4Ch]
  _DWORD v25[2]; // [esp+50h] [ebp-48h] BYREF
  int v26; // [esp+58h] [ebp-40h] BYREF
  IsoCoord v27; // [esp+60h] [ebp-38h] BYREF
  int v28; // [esp+68h] [ebp-30h] BYREF
  int v29; // [esp+6Ch] [ebp-2Ch]
  int GroundHeight; // [esp+70h] [ebp-28h]
  _DWORD v31[3]; // [esp+74h] [ebp-24h] BYREF
  _BYTE v32[12]; // [esp+80h] [ebp-18h] BYREF
  _BYTE v33[12]; // [esp+8Ch] [ebp-Ch] BYREF

  v19 = (0x7FFFFFFF - *(_DWORD *)&stru_A8EB00.?[416]) % 15; /*0x6da9f9*/
  result = (char *)(*(_DWORD *)&stru_A8EB00.?[228] - 1); /*0x6daa44*/
  v21 = (byte_A83CD9 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6daa49*/
      | (word_A83CDA >> g_BitMask_Blue << g_BitMask_Green)
      | (MEMORY[0xA83CDB] >> g_BitMask_Red << g_BitShift_Blue);
  for ( i = *(_DWORD *)&stru_A8EB00.?[228] - 1; i >= 0; --i ) /*0x6daa51*/
  {
    v4 = *(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * (_DWORD)result); /*0x6daa5e*/
    if ( (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) == 6 /*0x6daab2*/
      && *((_BYTE *)v4 + 144)
      && *((_BYTE *)v4 + 131)
      && (Object *)v4[135] == dword_A83D4C
      && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 644))(v4)
      && v4[134] )
    {
      v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v4 + 72))(v4, v32); /*0x6daac9*/
      v31[0] = *v5; /*0x6daace*/
      v31[1] = v5[1]; /*0x6daad5*/
      v31[2] = v5[2]; /*0x6daae8*/
      v6 = Coord::To_ScreenRaw(&v26, v31); /*0x6daaec*/
      v7 = this->u32_2D; /*0x6daaf1*/
      v23 = *v6; /*0x6daafb*/
      v8 = v6[1] - v7; /*0x6dab08*/
      v9 = v23 - this->fallRate; /*0x6dab10*/
      v24 = (char *)DSurface_ViewBounds.field_4 + v8; /*0x6dab1c*/
      v10 = v4[134]; /*0x6dab20*/
      v23 = DSurface_ViewBounds.field_0 + v9; /*0x6dab26*/
      v11 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v10 + 72))(v10, v33); /*0x6dab31*/
      v28 = *v11; /*0x6dab36*/
      v29 = v11[1]; /*0x6dab42*/
      GroundHeight = v11[2]; /*0x6dab4e*/
      GroundHeight = Cell::GetGroundHeight(&v28); /*0x6dab61*/
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v28)->flags[0] & 0x100) != 0 ) /*0x6dab73*/
        GroundHeight += dword_B0CEB4; /*0x6dab80*/
      v12 = IsoCoord::ToPixel(&v27, v28, v29); /*0x6dab92*/
      v13 = v12[1]; /*0x6dab9c*/
      v14 = *v12 / 256; /*0x6dabad*/
      v15 = ZCoordToScreenY(GroundHeight); /*0x6dabb0*/
      *(_DWORD *)v22.__pad_0 = v14; /*0x6dabc0*/
      v16 = this->fallRate; /*0x6dabc6*/
      v22.Vector2_field_0x04 = v13 / 256 - v15; /*0x6dabd5*/
      v17 = this->u32_2D; /*0x6dabd9*/
      v25[0] = v16; /*0x6dabe4*/
      v25[1] = v17; /*0x6dabe8*/
      Vector2::Subtract(&v22, v25); /*0x6dabec*/
      *(_DWORD *)v22.__pad_0 += DSurface_ViewBounds.field_0; /*0x6dac1f*/
      v24 += 2; /*0x6dac23*/
      v22.Vector2_field_0x04 += (int)DSurface_ViewBounds.field_4 + 2; /*0x6dac27*/
      if ( (unsigned __int8)ClipLine(&v23, (int *)v22.__pad_0, &DSurface_ViewBounds.field_0) ) /*0x6dac2b*/
        (*(void (__thiscall **)(AudioStream *, int *, Vector2 *, int, void *, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x6dac5a*/
                                                                                       + 76))(
          g_DSurface_Hidden_2,
          &v23,
          &v22,
          v21,
          &unk_842930,
          v19,
          a2);
      v18 = (*(unsigned __int8 *)(v4[135] + 22265) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6dacc2*/
          | (*(unsigned __int8 *)(v4[135] + 22266) >> g_BitMask_Blue << g_BitMask_Green)
          | (*(unsigned __int8 *)(v4[135] + 22267) >> g_BitMask_Red << g_BitShift_Blue);
      --v24; /*0x6dacca*/
      --v22.Vector2_field_0x04; /*0x6dacce*/
      if ( (unsigned __int8)ClipLine(&v23, (int *)v22.__pad_0, &DSurface_ViewBounds.field_0) ) /*0x6dacd2*/
        (*(void (__thiscall **)(AudioStream *, int *, Vector2 *, int, void *, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x6dacf9*/
                                                                                       + 76))(
          g_DSurface_Hidden_2,
          &v23,
          &v22,
          v18,
          &unk_842930,
          v19,
          a2);
      --v24; /*0x6dad13*/
      --v22.Vector2_field_0x04; /*0x6dad17*/
      if ( (unsigned __int8)ClipLine(&v23, (int *)v22.__pad_0, &DSurface_ViewBounds.field_0) ) /*0x6dad1b*/
        (*(void (__thiscall **)(AudioStream *, int *, Vector2 *, int, void *, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x6dad42*/
                                                                                       + 76))(
          g_DSurface_Hidden_2,
          &v23,
          &v22,
          v18,
          &unk_842930,
          v19,
          a2);
    }
    result = (char *)(i - 1); /*0x6dad49*/
  }
  return result; /*0x6dad55*/
}



// ==== 0x006DAD60  ObjectClass::RenderRallyPointLines  this=ObjectClass  sig=csp ====
int __thiscall RenderRallyPointLines(ObjectClass *this, int a2)
{
  const wchar_t *v2; // ebx
  int v4; // esi
  int v5; // eax
  int v6; // et2
  int result; // eax
  int v8; // esi
  unsigned int v9; // ebp
  int v10; // edi
  int *Element; // edi
  _DWORD *v12; // eax
  int v13; // ebp
  int v14; // esi
  int v15; // eax
  int v16; // eax
  int Vector2_field_0x04; // eax
  char v18; // cl
  char *v19; // eax
  char *v20; // esi
  int *v21; // eax
  int *v22; // ebp
  int *v23; // eax
  int v24; // kr04_4
  int v25; // esi
  int v26; // edi
  int v27; // eax
  int v28; // edi
  int v29; // ecx
  int v30; // eax
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  int v34; // edx
  int v35; // [esp+10h] [ebp-80h]
  unsigned int v36; // [esp+14h] [ebp-7Ch]
  int v38; // [esp+20h] [ebp-70h]
  unsigned int v39; // [esp+24h] [ebp-6Ch]
  int v40; // [esp+28h] [ebp-68h]
  int v41; // [esp+30h] [ebp-60h]
  int *v42; // [esp+34h] [ebp-5Ch]
  Vector2 v43; // [esp+38h] [ebp-58h] BYREF
  int v44[2]; // [esp+40h] [ebp-50h] BYREF
  _DWORD v45[2]; // [esp+48h] [ebp-48h] BYREF
  int v46[2]; // [esp+50h] [ebp-40h] BYREF
  _DWORD v47[3]; // [esp+58h] [ebp-38h] BYREF
  char *v48; // [esp+64h] [ebp-2Ch]
  IsoCoord v49; // [esp+68h] [ebp-28h] BYREF
  int v50; // [esp+70h] [ebp-20h] BYREF
  IsoCoord v51; // [esp+78h] [ebp-18h] BYREF
  int v52; // [esp+80h] [ebp-10h]
  int v53; // [esp+84h] [ebp-Ch]
  int v54; // [esp+88h] [ebp-8h]
  int v55; // [esp+8Ch] [ebp-4h]

  v2 = *(const wchar_t **)&stru_A8EB00.?[416]; /*0x6dad67*/
  v38 = (0x7FFFFFFF - *(_DWORD *)&stru_A8EB00.?[416]) % 15; /*0x6dad8b*/
  v4 = Render_Render_5BE970(60); /*0x6dad9b*/
  v5 = Render_Render_5BE990(60); /*0x6dad9d*/
  v6 = *((_DWORD *)this + 872) % v5; /*0x6dadab*/
  result = *((_DWORD *)this + 872) / v5; /*0x6dadab*/
  LOBYTE(result) = stru_A8EB00.?[391]; /*0x6dadad*/
  v39 = v4 + v6; /*0x6dadb6*/
  if ( !stru_A8EB00.?[391] )
  {
    v42 = (int *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372) + 2); /*0x6dadcf*/
    v52 = *v42; /*0x6dadd5*/
    v53 = v42[1]; /*0x6daddc*/
    v54 = v42[2]; /*0x6dade6*/
    v55 = v42[3]; /*0x6dadf7*/
    if ( !dword_B0E644 ) /*0x6dadfe*/
      dword_B0E644 = (int)SearchMIXFile(g_Str_File_MOUSE_SHA, 0); /*0x6dae0c*/
    v48 = (char *)DSurface_ViewBounds.field_4 + 1; /*0x6dae1e*/
    v8 = 528; /*0x6dae29*/
    v35 = 528; /*0x6dae32*/
    v9 = 0; /*0x6dae3c*/
    v40 = dword_A8B230[130].uniqueId != 1 ? 14 : 12;
    v36 = 0; /*0x6dae42*/
    do /*0x6db1d1*/
    {
      HouseClass::EnsurePlanningPathExists((HouseClass *)dword_A83D4C, v9); /*0x6dae4d*/
      v10 = *(_DWORD *)(*(_DWORD *)&dword_A83D4C->__pad_0[v8] + 56); /*0x6dae5b*/
      v41 = v10; /*0x6dae60*/
      if ( v10 ) /*0x6dae64*/
        sub_4AEA20((int)v2, v9); /*0x6dae6c*/
      v2 = 0; /*0x6dae71*/
      if ( v10 > 0 ) /*0x6dae75*/
      {
        while ( 1 ) /*0x6dae8a*/
        {
          Element = (int *)Array::GetElement(*(Array **)&dword_A83D4C->__pad_0[v8], (int)v2); /*0x6dae8a*/
          v12 = IsoCoord::ToPixel(&v49, *Element, Element[1]); /*0x6dae97*/
          v13 = v12[1]; /*0x6daea3*/
          v14 = *v12 / 256; /*0x6daeb1*/
          v15 = ZCoordToScreenY(Element[2]); /*0x6daeb4*/
          *(_DWORD *)v43.__pad_0 = v14; /*0x6daec4*/
          v43.Vector2_field_0x04 = v13 / 256 - v15; /*0x6daed3*/
          v16 = this->u32_2D; /*0x6daee6*/
          v45[0] = this->fallRate; /*0x6daeec*/
          v45[1] = v16; /*0x6daef0*/
          Vector2::Subtract(&v43, v45); /*0x6daef4*/
          if ( *(int *)v43.__pad_0 >= -360 && *(int *)v43.__pad_0 <= dword_B0CE30 + 360 ) /*0x6daf12*/
          {
            Vector2_field_0x04 = v43.Vector2_field_0x04; /*0x6daf14*/
            if ( v43.Vector2_field_0x04 < -180 || v43.Vector2_field_0x04 > dword_B0CE34 + 180 ) /*0x6daf2d*/
              goto LABEL_15; /*0x6daf2d*/
            if ( (_BYTE)a2 ) /*0x6daf3e*/
            {
              if ( (unsigned __int8)Cell::IsPassable(Element) ) /*0x6daf44*/
                goto LABEL_24; /*0x6daf4b*/
            }
            else if ( !(unsigned __int8)Cell::IsPassable(Element) ) /*0x6db11c*/
            {
LABEL_24:
              Vector2_field_0x04 = v43.Vector2_field_0x04; /*0x6db129*/
              v18 = 1; /*0x6db12d*/
              goto LABEL_16; /*0x6db12f*/
            }
          }
          Vector2_field_0x04 = v43.Vector2_field_0x04; /*0x6daf51*/
LABEL_15:
          v18 = 0; /*0x6daf55*/
LABEL_16:
          v19 = (char *)DSurface_ViewBounds.field_4 + Vector2_field_0x04; /*0x6daf57*/
          v43.Vector2_field_0x04 = (int)v19; /*0x6daf5f*/
          if ( v18 ) /*0x6daf63*/
          {
            v20 = v48; /*0x6daf69*/
            v46[1] = v19 - v48; /*0x6daf8a*/
            v46[0] = *(_DWORD *)v43.__pad_0; /*0x6dafaf*/
            DrawToSurfaceSHP( /*0x6dafb6*/
              (int)g_DSurface_Hidden_2,
              *(int *)&stru_87F5F0.__pad_58[128],
              dword_B0E644,
              v39,
              v46,
              &DSurface_ViewBounds.field_0,
              1536,
              0,
              0,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
            swprintf(&word_B0CD80, (const size_t)g_Str_Fmt_PctD, v2); /*0x6dafc6*/
            v47[1] = v43.Vector2_field_0x04 - (_DWORD)v20 - 25; /*0x6dafe1*/
            v47[0] = *(_DWORD *)v43.__pad_0 - 1; /*0x6dafec*/
            globalHelper_0A6010( /*0x6db017*/
              &v50,
              (int)&word_B0CD80,
              (int)g_DSurface_Hidden_2,
              &DSurface_ViewBounds,
              (int)v47,
              *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v40),
              0,
              265,
              1);
          }
          v21 = (int *)VectorClass::GetAtChecked(*(VectorClass **)&dword_A83D4C->__pad_0[v35], (int)Element); /*0x6db02a*/
          v22 = v21; /*0x6db02f*/
          if ( v21 ) /*0x6db033*/
          {
            v23 = IsoCoord::ToPixel(&v51, *v21, v21[1]); /*0x6db048*/
            v24 = *v23; /*0x6db06c*/
            v25 = *v23 / 256; /*0x6db07b*/
            v26 = v23[1] / 256; /*0x6db07e*/
            LOWORD(v27) = Math::RoundToInt((double)v22[2] * dbl_B0CD48 + (double)(v22[2] >= 728) + 0.5); /*0x6db0a5*/
            v44[0] = v24 / 256; /*0x6db0b0*/
            v28 = v26 - v27 - this->u32_2D; /*0x6db0c7*/
            v44[0] = v25 - this->fallRate; /*0x6db0c9*/
            v44[1] = (int)DSurface_ViewBounds.field_4 + v28; /*0x6db0dd*/
            if ( (unsigned __int8)ClipLine((int *)v43.__pad_0, v44, &DSurface_ViewBounds.field_0) ) /*0x6db0e1*/
            {
              v29 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 4); /*0x6db105*/
              if ( v36 == *(_DWORD *)&dword_A83D4C->__pad_140[204] ) /*0x6db108*/
              {
                if ( v29 == 1 ) /*0x6db10d*/
                  v30 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372) + 3); /*0x6db117*/
                else
                  v30 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372) + 6); /*0x6db13c*/
                v38 = (*(int (__thiscall **)(AudioStream *, Vector2 *, int *, int, void *, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 76))( /*0x6db168*/
                        g_DSurface_Hidden_2,
                        &v43,
                        v44,
                        v30,
                        &unk_842940,
                        v38,
                        a2);
              }
              else
              {
                if ( v29 == 1 ) /*0x6db171*/
                  v31 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372) + 3); /*0x6db17b*/
                else
                  v31 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372) + 6); /*0x6db188*/
                (*(void (__thiscall **)(AudioStream *, Vector2 *, int *, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x6db1a7*/
                                                                                  + 80))(
                  g_DSurface_Hidden_2,
                  &v43,
                  v44,
                  v31,
                  a2);
              }
            }
          }
          v8 = v35; /*0x6db1ae*/
          v2 = (const wchar_t *)((char *)v2 + 1); /*0x6db1b2*/
          if ( (int)v2 >= v41 ) /*0x6db1b5*/
          {
            v9 = v36; /*0x6db1bb*/
            break; /*0x6db1bb*/
          }
        }
      }
      v8 += 4; /*0x6db1bf*/
      v36 = ++v9; /*0x6db1c9*/
      v35 = v8; /*0x6db1cd*/
    }
    while ( v8 < 576 ); /*0x6db1d1*/
    v32 = v53; /*0x6db1e2*/
    *v42 = v52; /*0x6db1ea*/
    v33 = v54; /*0x6db1ec*/
    v42[1] = v32; /*0x6db1f3*/
    v34 = v55; /*0x6db1f6*/
    v42[2] = v33; /*0x6db1fd*/
    v42[3] = v34; /*0x6db200*/
    return (int)v42; /*0x6db1d7*/
  }
  return result; /*0x6db203*/
}



// ==== 0x006DB210  Tactical::DrawTacticalConnectorLines  this=Tactical  sig=csp ====
int __thiscall Tactical::DrawTacticalConnectorLines(Tactical *this)
{
  CellClass *v2; // ebp
  int result; // eax
  int v4; // edi
  int v5; // ebx
  int *Coords; // eax
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
  int *v17; // eax
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
  ObjectClass *firstObject; // [esp+44h] [ebp-D0h]
  ObjectClass *altObject; // [esp+44h] [ebp-D0h]
  Vector2 v37; // [esp+48h] [ebp-CCh] BYREF
  int v38; // [esp+50h] [ebp-C4h] BYREF
  int v39; // [esp+54h] [ebp-C0h]
  int v40; // [esp+58h] [ebp-BCh] BYREF
  int v41; // [esp+5Ch] [ebp-B8h]
  int v42; // [esp+60h] [ebp-B4h] BYREF
  int v43; // [esp+64h] [ebp-B0h]
  int v44[2]; // [esp+68h] [ebp-ACh] BYREF
  int v45; // [esp+70h] [ebp-A4h] BYREF
  int v46; // [esp+74h] [ebp-A0h]
  int v47; // [esp+78h] [ebp-9Ch]
  int v48; // [esp+7Ch] [ebp-98h] BYREF
  int v49; // [esp+80h] [ebp-94h]
  int v50; // [esp+84h] [ebp-90h]
  int v51; // [esp+88h] [ebp-8Ch]
  _DWORD v52[3]; // [esp+8Ch] [ebp-88h] BYREF
  _DWORD v53[3]; // [esp+98h] [ebp-7Ch] BYREF
  _DWORD v54[4]; // [esp+A4h] [ebp-70h] BYREF
  _DWORD v55[4]; // [esp+B4h] [ebp-60h] BYREF
  int v56[2]; // [esp+C4h] [ebp-50h] BYREF
  int v57[3]; // [esp+CCh] [ebp-48h] BYREF
  _BYTE v58[12]; // [esp+D8h] [ebp-3Ch] BYREF
  int v59; // [esp+E4h] [ebp-30h] BYREF
  int v60; // [esp+ECh] [ebp-28h] BYREF
  int v61; // [esp+F4h] [ebp-20h] BYREF
  char v62[12]; // [esp+FCh] [ebp-18h] BYREF
  int v63[3]; // [esp+108h] [ebp-Ch] BYREF

  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6db221*/
  v2 = (CellClass *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6db236*/
  result = 255 >> g_BitMask_Blue << g_BitMask_Green; /*0x6db251*/
  v4 = result | (255 >> g_BitShift_Green_0 << g_BitShift_Red); /*0x6db283*/
  v51 = (255 >> g_BitShift_Green_0 << g_BitShift_Red) | (255 >> g_BitMask_Red << g_BitShift_Blue); /*0x6db2b5*/
  v5 = result | (255 >> g_BitMask_Red << g_BitShift_Blue); /*0x6db2c1*/
  if ( v2 ) /*0x6db2c5*/
  {
    do /*0x6db525*/
    {
      firstObject = v2->firstObject; /*0x6db2d3*/
      if ( firstObject ) /*0x6db2d7*/
      {
        Coords = CellClass::GetCoords(v2, v63); /*0x6db2e7*/
        v52[0] = *Coords; /*0x6db2ee*/
        v52[1] = Coords[1]; /*0x6db2fa*/
        v52[2] = Coords[2]; /*0x6db30b*/
        v7 = Coord::To_ScreenRaw(&v60, v52); /*0x6db30f*/
        v8 = *(_DWORD *)&this->__pad_AC[4]; /*0x6db314*/
        v40 = *v7; /*0x6db31e*/
        v9 = v7[1]; /*0x6db324*/
        v40 -= v8; /*0x6db327*/
        v41 = v9 - *(_DWORD *)&this->__pad_AC[8]; /*0x6db33a*/
        v10 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, char *))firstObject->AbstractClass + 18))( /*0x6db345*/
                          firstObject,
                          v62);
        v53[0] = *v10; /*0x6db34a*/
        v53[1] = v10[1]; /*0x6db356*/
        v53[2] = v10[2]; /*0x6db367*/
        v11 = Coord::To_ScreenRaw(&v59, v53); /*0x6db36b*/
        v12 = *(_DWORD *)&this->__pad_AC[4]; /*0x6db370*/
        v13 = v11; /*0x6db376*/
        v44[0] = *v11; /*0x6db37b*/
        v14 = v44[0] - v12; /*0x6db37f*/
        v15 = v13[1]; /*0x6db381*/
        v16 = *(_DWORD *)&this->__pad_AC[8]; /*0x6db384*/
        v44[0] = v14; /*0x6db390*/
        v55[1] = v41 - 1; /*0x6db39a*/
        v44[1] = v15 - v16; /*0x6db3a6*/
        v55[2] = 3; /*0x6db3b0*/
        v55[3] = 3; /*0x6db3b7*/
        v55[0] = v40 - 1; /*0x6db3c5*/
        (*(void (__thiscall **)(AudioStream *, CellStruct *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 16))( /*0x6db3d4*/
          g_DSurface_Hidden_2,
          &DSurface_ViewBounds,
          v55,
          v4);
        (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x6db3ef*/
                                                                               + 44))(
          g_DSurface_Hidden_2,
          &DSurface_ViewBounds,
          &v40,
          v44,
          v4);
      }
      altObject = v2->altObject; /*0x6db3fa*/
      if ( altObject ) /*0x6db3fe*/
      {
        v17 = CellClass::GetCoords(v2, v57); /*0x6db40e*/
        v48 = *v17; /*0x6db415*/
        v49 = v17[1]; /*0x6db41c*/
        v50 = v17[2]; /*0x6db432*/
        v18 = Coord::To_ScreenRaw(&v61, &v48); /*0x6db436*/
        v19 = *(_DWORD *)&this->__pad_AC[4]; /*0x6db43d*/
        v20 = *(_DWORD *)&this->__pad_AC[8]; /*0x6db443*/
        v42 = *v18; /*0x6db449*/
        v21 = v18[1] - v20; /*0x6db452*/
        v42 -= v19; /*0x6db454*/
        v43 = v21 - 60; /*0x6db45f*/
        v22 = (int *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))altObject->AbstractClass + 18))(altObject, v58); /*0x6db46d*/
        v45 = *v22; /*0x6db472*/
        v46 = v22[1]; /*0x6db47e*/
        v47 = v22[2]; /*0x6db48f*/
        v23 = Coord::To_ScreenRaw(v56, &v45); /*0x6db493*/
        *(_DWORD *)v37.__pad_0 = *v23; /*0x6db49a*/
        v24 = *(_DWORD *)&this->__pad_AC[8]; /*0x6db49e*/
        v25 = v23[1]; /*0x6db4a4*/
        v26 = *(_DWORD *)&this->__pad_AC[4]; /*0x6db4a7*/
        v37.Vector2_field_0x04 = v25; /*0x6db4ad*/
        v39 = v24; /*0x6db4b5*/
        v38 = v26; /*0x6db4be*/
        Vector2::Subtract(&v37, &v38); /*0x6db4c2*/
        v54[0] = v42 - 1; /*0x6db4d1*/
        v54[1] = v43 - 1; /*0x6db4da*/
        v54[2] = 3; /*0x6db4e4*/
        v54[3] = 3; /*0x6db4e8*/
        (*(void (__thiscall **)(AudioStream *, CellStruct *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 16))( /*0x6db4f9*/
          g_DSurface_Hidden_2,
          &DSurface_ViewBounds,
          v54,
          v5);
        (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, Vector2 *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x6db514*/
                                                                                   + 44))(
          g_DSurface_Hidden_2,
          &DSurface_ViewBounds,
          &v42,
          &v37,
          v5);
      }
      result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6db51c*/
      v2 = (CellClass *)result; /*0x6db521*/
    }
    while ( result ); /*0x6db525*/
  }
  for ( i = dword_A8E370 - 1; i >= 0; --i ) /*0x6db536*/
  {
    v28 = (_DWORD *)*((_DWORD *)dword_A8E364 + i); /*0x6db542*/
    result = v28[12]; /*0x6db545*/
    if ( result ) /*0x6db54a*/
    {
      v29 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v28 + 72))(v28, v58); /*0x6db55c*/
      v45 = *v29; /*0x6db561*/
      v46 = v29[1]; /*0x6db568*/
      v47 = v29[2]; /*0x6db57e*/
      v30 = Coord::To_ScreenRaw(v56, &v45); /*0x6db582*/
      v31 = *(_DWORD *)&this->__pad_AC[4]; /*0x6db589*/
      *(_DWORD *)v37.__pad_0 = *v30; /*0x6db58f*/
      v32 = *(_DWORD *)&this->__pad_AC[8]; /*0x6db593*/
      v33 = v30[1]; /*0x6db599*/
      v38 = v31; /*0x6db59c*/
      v37.Vector2_field_0x04 = v33; /*0x6db5a0*/
      v39 = v32; /*0x6db5ad*/
      Vector2::Subtract(&v37, &v38); /*0x6db5b1*/
      v34 = (int *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)v28[12] + 72))(v28[12], v57); /*0x6db5c3*/
      v48 = *v34; /*0x6db5c8*/
      v49 = v34[1]; /*0x6db5d4*/
      v50 = v34[2]; /*0x6db5e2*/
      Coord::To_Screen((Coord *)this, &v48, v44); /*0x6db5e6*/
      result = (*(int (__thiscall **)(AudioStream *, CellStruct *, Vector2 *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x6db607*/
                                                                                         + 44))(
                 g_DSurface_Hidden_2,
                 &DSurface_ViewBounds,
                 &v37,
                 v44,
                 v51);
    }
  }
  return result; /*0x6db611*/
}



// ==== 0x006DB620  ObjectClass::RenderLWCViewCells  this=ObjectClass  sig=csp ====
int __thiscall RenderLWCViewCells(ObjectClass *this)
{
  ObjectClass *v1; // ebp
  int v2; // edi
  int result; // eax
  int v4; // esi
  int *ScreenRect; // eax
  _DWORD *v6; // eax
  int *Coords; // eax
  int *v8; // eax
  int v9; // ecx
  int v10; // eax
  char *v11; // ecx
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
  Coord2D v32; // [esp+30h] [ebp-1C4h] BYREF
  int v33; // [esp+38h] [ebp-1BCh]
  int v34; // [esp+3Ch] [ebp-1B8h]
  ObjectClass *v35; // [esp+40h] [ebp-1B4h]
  Coord2D v36; // [esp+44h] [ebp-1B0h] BYREF
  _DWORD v37[2]; // [esp+4Ch] [ebp-1A8h] BYREF
  Coord2D v38; // [esp+54h] [ebp-1A0h] BYREF
  Coord2D v39; // [esp+5Ch] [ebp-198h] BYREF
  _DWORD v40[2]; // [esp+64h] [ebp-190h] BYREF
  _DWORD v41[2]; // [esp+6Ch] [ebp-188h] BYREF
  Coord2D v42; // [esp+74h] [ebp-180h] BYREF
  _DWORD v43[2]; // [esp+7Ch] [ebp-178h] BYREF
  _DWORD v44[2]; // [esp+84h] [ebp-170h] BYREF
  _DWORD v45[2]; // [esp+8Ch] [ebp-168h] BYREF
  Coord2D v46; // [esp+94h] [ebp-160h] BYREF
  _DWORD v47[3]; // [esp+9Ch] [ebp-158h] BYREF
  _DWORD v48[4]; // [esp+A8h] [ebp-14Ch] BYREF
  _DWORD v49[4]; // [esp+B8h] [ebp-13Ch] BYREF
  _DWORD v50[4]; // [esp+C8h] [ebp-12Ch] BYREF
  _DWORD v51[4]; // [esp+D8h] [ebp-11Ch] BYREF
  int v52[4]; // [esp+E8h] [ebp-10Ch] BYREF
  _DWORD v53[4]; // [esp+F8h] [ebp-FCh] BYREF
  _DWORD v54[4]; // [esp+108h] [ebp-ECh] BYREF
  _DWORD v55[4]; // [esp+118h] [ebp-DCh] BYREF
  int v56; // [esp+128h] [ebp-CCh] BYREF
  int v57; // [esp+130h] [ebp-C4h] BYREF
  _DWORD v58[6]; // [esp+138h] [ebp-BCh] BYREF
  int v59; // [esp+150h] [ebp-A4h] BYREF
  int v60; // [esp+158h] [ebp-9Ch] BYREF
  int v61; // [esp+160h] [ebp-94h] BYREF
  int v62[3]; // [esp+168h] [ebp-8Ch] BYREF
  int v63[4]; // [esp+174h] [ebp-80h] BYREF
  Rect v64; // [esp+184h] [ebp-70h] BYREF
  int v65[4]; // [esp+194h] [ebp-60h] BYREF
  Rect v66; // [esp+1A4h] [ebp-50h] BYREF
  Rect v67; // [esp+1B4h] [ebp-40h] BYREF
  Rect v68; // [esp+1C4h] [ebp-30h] BYREF
  Rect v69; // [esp+1D4h] [ebp-20h] BYREF
  Rect v70; // [esp+1E4h] [ebp-10h] BYREF

  v1 = this; /*0x6db628*/
  v35 = this; /*0x6db631*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6db635*/
  v2 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6db654*/
  result = 255 >> g_BitMask_Blue << g_BitMask_Green; /*0x6db672*/
  v4 = (255 >> g_BitShift_Green_0 << g_BitShift_Red) | result; /*0x6db686*/
  if ( v2 ) /*0x6db68a*/
  {
    do /*0x6dbb43*/
    {
      ScreenRect = CellClass::GetScreenRect((CellClass *)v2, v63); /*0x6db69a*/
      v52[0] = *ScreenRect; /*0x6db6a2*/
      v52[1] = ScreenRect[1]; /*0x6db6b2*/
      v52[2] = ScreenRect[2]; /*0x6db6bc*/
      v52[3] = ScreenRect[3]; /*0x6db6cd*/
      v6 = ClipRectIntersection(v65, v52, &DSurface_ViewBounds.field_0, 0, 0); /*0x6db6db*/
      v58[2] = *v6; /*0x6db6e4*/
      v58[3] = v6[1]; /*0x6db6ee*/
      if ( (int)v6[2] > 0 && (int)v6[3] > 0 ) /*0x6db705*/
      {
        Coords = CellClass::GetCoords((CellClass *)v2, v62); /*0x6db715*/
        v47[0] = *Coords; /*0x6db71c*/
        v47[1] = Coords[1]; /*0x6db723*/
        v47[2] = Coords[2]; /*0x6db73c*/
        v8 = Coord::To_ScreenRaw(&v61, v47); /*0x6db743*/
        v9 = v8[1]; /*0x6db74c*/
        v10 = *v8 - (unsigned int)v1[1].? - 2; /*0x6db765*/
        v11 = (char *)DSurface_ViewBounds.field_4 + v9 - (unsigned int)v1[1].? - 2; /*0x6db768*/
        v33 = 4; /*0x6db773*/
        v12 = *(_BYTE *)(v2 + 292); /*0x6db777*/
        *(_DWORD *)v32.__pad_0 = v10; /*0x6db77d*/
        v32.Coord2D_field_0x04 = (int)v11; /*0x6db784*/
        v34 = 4; /*0x6db788*/
        if ( (v12 & 4) != 0 ) /*0x6db78c*/
        {
          *(_DWORD *)v46.__pad_0 = v10; /*0x6db78e*/
          v46.Coord2D_field_0x04 = (int)v11; /*0x6db792*/
          v41[0] = 10; /*0x6db7ae*/
          v41[1] = 0; /*0x6db7b6*/
          v13 = Coord2D::Add(&v46, v58, v41); /*0x6db7ba*/
          v14 = Rect::Construct(&v69, v13, 4, 4); /*0x6db7c7*/
          v50[0] = *v14; /*0x6db7cf*/
          v50[1] = v14[1]; /*0x6db7d9*/
          v50[2] = v14[2]; /*0x6db7e9*/
          v50[3] = v14[3]; /*0x6db7f3*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6db804*/
            g_DSurface_Hidden_2,
            v50,
            v4);
        }
        if ( (*(_BYTE *)(v2 + 292) & 0x10) != 0 ) /*0x6db812*/
        {
          v39 = v32; /*0x6db824*/
          v28 = v34; /*0x6db830*/
          v24 = v33; /*0x6db835*/
          v45[0] = 0; /*0x6db843*/
          v45[1] = 6; /*0x6db847*/
          v15 = Coord2D::Add(&v39, &v60, v45); /*0x6db852*/
          v16 = Rect::Construct(&v67, v15, v24, v28); /*0x6db85f*/
          v51[0] = *v16; /*0x6db867*/
          v51[1] = v16[1]; /*0x6db871*/
          v51[2] = v16[2]; /*0x6db87b*/
          v51[3] = v16[3]; /*0x6db88b*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6db89c*/
            g_DSurface_Hidden_2,
            v51,
            v4);
        }
        if ( (*(_BYTE *)(v2 + 292) & 8) != 0 ) /*0x6db8a6*/
        {
          v36 = v32; /*0x6db8b8*/
          v29 = v34; /*0x6db8c4*/
          v25 = v33; /*0x6db8c9*/
          v43[0] = -10; /*0x6db8d7*/
          v43[1] = 0; /*0x6db8df*/
          v17 = Coord2D::Add(&v36, &v56, v43); /*0x6db8e3*/
          v18 = Rect::Construct(&v64, v17, v25, v29); /*0x6db8f0*/
          v53[0] = *v18; /*0x6db8f8*/
          v53[1] = v18[1]; /*0x6db902*/
          v53[2] = v18[2]; /*0x6db90c*/
          v53[3] = v18[3]; /*0x6db91c*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6db92d*/
            g_DSurface_Hidden_2,
            v53,
            v4);
        }
        if ( (*(_BYTE *)(v2 + 292) & 0xE0) != 0 ) /*0x6db937*/
          (*(void (__thiscall **)(AudioStream *, Coord2D *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6db947*/
            g_DSurface_Hidden_2,
            &v32,
            v4);
        if ( (*(_BYTE *)(v2 + 296) & 4) != 0 ) /*0x6db951*/
        {
          v38 = v32; /*0x6db963*/
          v30 = v34; /*0x6db96f*/
          v26 = v33; /*0x6db974*/
          v37[0] = 10; /*0x6db982*/
          v37[1] = -60; /*0x6db98a*/
          v19 = Coord2D::Add(&v38, &v57, v37); /*0x6db992*/
          v20 = Rect::Construct(&v66, v19, v26, v30); /*0x6db99f*/
          v48[0] = *v20; /*0x6db9a7*/
          v48[1] = v20[1]; /*0x6db9b1*/
          v48[2] = v20[2]; /*0x6db9bb*/
          v48[3] = v20[3]; /*0x6db9cb*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6db9dc*/
            g_DSurface_Hidden_2,
            v48,
            v4);
        }
        if ( (*(_BYTE *)(v2 + 296) & 0x10) != 0 ) /*0x6db9e6*/
        {
          v42 = v32; /*0x6db9f8*/
          v31 = v34; /*0x6dba04*/
          v27 = v33; /*0x6dba09*/
          v40[0] = 0; /*0x6dba17*/
          v40[1] = -66; /*0x6dba1b*/
          v21 = Coord2D::Add(&v42, &v59, v40); /*0x6dba23*/
          v22 = Rect::Construct(&v68, v21, v27, v31); /*0x6dba30*/
          v49[0] = *v22; /*0x6dba38*/
          v49[1] = v22[1]; /*0x6dba42*/
          v49[2] = v22[2]; /*0x6dba4c*/
          v49[3] = v22[3]; /*0x6dba5c*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6dba6d*/
            g_DSurface_Hidden_2,
            v49,
            v4);
        }
        if ( (*(_BYTE *)(v2 + 296) & 8) != 0 ) /*0x6dba77*/
        {
          v44[0] = *(_DWORD *)v32.__pad_0 - 10; /*0x6dba8b*/
          v44[1] = v32.Coord2D_field_0x04 - 60; /*0x6dba93*/
          v23 = Rect::Construct(&v70, v44, v33, v34); /*0x6dbaa5*/
          v55[0] = *v23; /*0x6dbaad*/
          v55[1] = v23[1]; /*0x6dbab7*/
          v55[2] = v23[2]; /*0x6dbac7*/
          v55[3] = v23[3]; /*0x6dbad1*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6dbae2*/
            g_DSurface_Hidden_2,
            v55,
            v4);
        }
        if ( (*(_BYTE *)(v2 + 296) & 0xE0) != 0 ) /*0x6dbaec*/
        {
          v54[0] = *(_DWORD *)v32.__pad_0; /*0x6dbaf6*/
          v54[1] = v32.Coord2D_field_0x04 - 60; /*0x6dbb05*/
          v54[3] = v34; /*0x6dbb10*/
          v54[2] = v33; /*0x6dbb1d*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6dbb2e*/
            g_DSurface_Hidden_2,
            v54,
            v4);
        }
        v1 = v35; /*0x6dbb31*/
      }
      result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6dbb3a*/
      v2 = result; /*0x6dbb3f*/
    }
    while ( result ); /*0x6dbb43*/
  }
  return result; /*0x6dbb49*/
}



// ==== 0x006DBB60  Tactical::DrawOverlay  this=Tactical  sig=csp ====
char __thiscall Tactical::DrawOverlay(Tactical *this, int *a2, int *a3, int a4, int a5)
{
  _DWORD *v6; // eax
  int v7; // ebx
  int v8; // esi
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  int v14; // ecx
  _DWORD *v15; // eax
  int v16; // ecx
  __int64 v17; // rax
  int v18; // esi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  AudioStream *v22; // esi
  int v23; // edi
  int v24; // eax
  int v25; // eax
  int v27; // [esp-8h] [ebp-38h]
  int v28; // [esp-8h] [ebp-38h]
  IsoCoord v29; // [esp+10h] [ebp-20h] BYREF
  IsoCoord v30; // [esp+18h] [ebp-18h] BYREF
  _DWORD v31[2]; // [esp+20h] [ebp-10h] BYREF
  _DWORD v32[2]; // [esp+28h] [ebp-8h] BYREF
  BOOL v33; // [esp+38h] [ebp+8h]

  v6 = IsoCoord::ToPixel(&v30, *a2, a2[1]); /*0x6dbb79*/
  v7 = v6[1]; /*0x6dbb83*/
  v8 = *v6 / 256; /*0x6dbb93*/
  v9 = ZCoordToScreenY(a2[2]); /*0x6dbb9b*/
  v10 = *(_DWORD *)&this->__pad_AC[8]; /*0x6dbbac*/
  v11 = v7 / 256 - v9; /*0x6dbbb5*/
  v12 = *(_DWORD *)&this->__pad_AC[4]; /*0x6dbbb7*/
  v32[0] = v8; /*0x6dbbbd*/
  v13 = v8 - v12; /*0x6dbbc3*/
  v14 = a3[1]; /*0x6dbbc5*/
  v32[1] = v11 - v10; /*0x6dbbc8*/
  v27 = *a3; /*0x6dbbcf*/
  v32[0] = v13; /*0x6dbbd4*/
  v15 = IsoCoord::ToPixel(&v29, v27, v14); /*0x6dbbd8*/
  v16 = v15[1]; /*0x6dbbe1*/
  v17 = (int)*v15; /*0x6dbbe4*/
  v30.IsoCoord_field_0x04 = v16; /*0x6dbbeb*/
  v18 = (BYTE4(v17) + (int)v17) >> 8; /*0x6dbbf6*/
  v19 = ZCoordToScreenY(a3[2]); /*0x6dbbf9*/
  v31[0] = v18; /*0x6dbc0b*/
  v20 = v18 - *(_DWORD *)&this->__pad_AC[4]; /*0x6dbc22*/
  v31[1] = v30.IsoCoord_field_0x04 / 256 - v19 - *(_DWORD *)&this->__pad_AC[8]; /*0x6dbc28*/
  v21 = a3[2]; /*0x6dbc2c*/
  v31[0] = v20; /*0x6dbc34*/
  *(_DWORD *)v29.__pad_0 = v21; /*0x6dbc38*/
  *(_DWORD *)v30.__pad_0 = a2[2]; /*0x6dbc58*/
  v33 = *(_DWORD *)v30.__pad_0 >= 728; /*0x6dbc5e*/
  v22 = g_DSurface_Hidden_2; /*0x6dbc66*/
  v23 = *(_DWORD *)g_DSurface_Hidden_2->__pad_0; /*0x6dbc77*/
  LOWORD(v24) = Math::RoundToInt((double)v21 * dbl_B0CD48 + (double)(v21 >= 728) + 0.5); /*0x6dbc83*/
  v28 = 14 - v24; /*0x6dbc99*/
  LOWORD(v25) = Math::RoundToInt((double)*(int *)v30.__pad_0 * dbl_B0CD48 + (double)v33 + 0.5); /*0x6dbca4*/
  (*(void (__thiscall **)(AudioStream *, CellStruct *, _DWORD *, _DWORD *, int, int, int, int))(v23 + 52))( /*0x6dbcc7*/
    v22,
    &DSurface_ViewBounds,
    v32,
    v31,
    a4,
    14 - v25,
    v28,
    a5);
  return 1; /*0x6dbcca*/
}



// ==== 0x006DBCE0  Tactical::ddtor  this=Tactical  sig=csp ====
int __stdcall Tactical::ddtor(Tactical *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6dbce6*/
    return -2147467261; /*0x6dbce8*/
  *a2 = -816401526; /*0x6dbcf6*/
  a2[1] = 298984461; /*0x6dbcfe*/
  a2[2] = 1610644609; /*0x6dbd07*/
  a2[3] = unk_7E995C; /*0x6dbd10*/
  return 0; /*0x6dbced*/
}



// ==== 0x006DBD20  Tactical::InitMap  this=Tactical  sig=csp ====
int __stdcall Tactical::InitMap(Tactical *this, int a2)
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

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6dbd2e*/
  if ( result >= 0 ) /*0x6dbd35*/
  {
    if ( this ) /*0x6dbd3d*/
      SmallFunc_6D1E30(this, (int)&a2); /*0x6dbd46*/
    v3 = *(_DWORD *)&this->__pad_AC[52]; /*0x6dbd4b*/
    v4 = 0; /*0x6dbd52*/
    *(_DWORD *)&this->__pad_DA8[8] = 0; /*0x6dbd54*/
    if ( v3 > 0 ) /*0x6dbd60*/
    {
      v5 = (int *)&this->__pad_AC[56]; /*0x6dbd63*/
      do /*0x6dbd80*/
      {
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v5); /*0x6dbd6f*/
        ++v4; /*0x6dbd7a*/
        ++v5; /*0x6dbd7b*/
      }
      while ( v4 < *(_DWORD *)&this->__pad_AC[52] ); /*0x6dbd80*/
    }
    v6 = *(_DWORD *)&this->__pad_11F[3145]; /*0x6dbd89*/
    v9 = *(_DWORD *)&this->__pad_11F[3141]; /*0x6dbd93*/
    v10 = v6; /*0x6dbd9a*/
    if ( !ClampCoordMap(&v9) || stru_A8EB00.?[391] ) /*0x6dbdaf*/
    {
      v7 = *(_DWORD *)&this->__pad_11F[3141]; /*0x6dbdbb*/
      v8 = *(_DWORD *)&this->__pad_11F[3145]; /*0x6dbdc1*/
    }
    else
    {
      v7 = v9; /*0x6dbdb1*/
      v8 = v10; /*0x6dbdb5*/
    }
    *(_DWORD *)&this->__pad_11F[3141] = v7; /*0x6dbdc7*/
    *(_DWORD *)&this->__pad_11F[3157] = v7; /*0x6dbdcd*/
    *(_DWORD *)&this->__pad_11F[3145] = v8; /*0x6dbdd3*/
    *(_DWORD *)&this->__pad_11F[3161] = v8; /*0x6dbdd9*/
    TacticalClass::CalcViewportCells((TacticalClass *)this); /*0x6dbde1*/
    this->__pad_11F[3166] = 1; /*0x6dbde6*/
    return 0; /*0x6dbded*/
  }
  return result; /*0x6dbdef*/
}



// ==== 0x006DBE00  Tactical::UpdateMapView  this=Tactical  sig=csp ====
int __stdcall Tactical::UpdateMapView(Tactical *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x6dbe0f*/
  if ( result >= 0 ) /*0x6dbe16*/
    return 0; /*0x6dbe18*/
  return result; /*0x6dbe1a*/
}



// ==== 0x006DBE20  TacticalClass::DrawPlacementCircles  this=TacticalClass  sig=csp ====
void TacticalClass::DrawPlacementCircles(TacticalClass *this)
{
  int v1; // ebx
  int i; // edi
  int v3; // esi
  TechnoClass *v4; // ebx
  CellClass *v5; // eax
  int *Coords; // eax
  int v7; // esi
  int v8; // edi
  int v9; // ebp
  int v10; // ecx
  double v11; // st7
  char v12; // ecx^3
  int v13; // edi
  int v14; // ebp
  int Color_field_00; // eax
  float v16; // ebx
  int *v17; // ecx
  __int16 v18; // si
  int v19; // eax
  _DWORD *v20; // eax
  double v21; // st6
  __int16 v22; // ax
  int v23; // ebx
  int *v24; // esi
  __int16 v25; // di
  int v26; // eax
  _DWORD *v27; // eax
  double v28; // st6
  int v29; // edi
  double v30; // st7
  CellClass *v31; // eax
  int *v32; // eax
  int v33; // ecx
  int v34; // ebx
  int v35; // ebp
  int v36; // esi
  int v37; // edx
  float v38; // eax
  char v39; // cl
  char v40; // ecx^3
  double v41; // st7
  char v42; // ecx^3
  int v43; // [esp+4h] [ebp-58h]
  int v44; // [esp+4h] [ebp-58h]
  int v45; // [esp+4h] [ebp-58h]
  float v46; // [esp+8h] [ebp-54h]
  float v47; // [esp+8h] [ebp-54h]
  Color v48; // [esp+28h] [ebp-34h] BYREF
  Color v49; // [esp+2Ch] [ebp-30h] BYREF
  int *v50; // [esp+30h] [ebp-2Ch]
  float v51; // [esp+34h] [ebp-28h]
  __int16 v52[2]; // [esp+38h] [ebp-24h] BYREF
  __int16 v53[4]; // [esp+3Ch] [ebp-20h] BYREF
  int v54; // [esp+44h] [ebp-18h]
  int v55; // [esp+48h] [ebp-14h]
  int v56[2]; // [esp+50h] [ebp-Ch] BYREF
  int v57; // [esp+58h] [ebp-4h]

  v1 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x6dbe2a*/
  for ( i = 0; i < v1; ++i ) /*0x6dbe37*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * i); /*0x6dbe3e*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 136))(v3) /*0x6dbe59*/
      && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 136))(v3) + 568) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 304))(v3, 1); /*0x6dbe69*/
    }
  }
  if ( BYTE2(stru_A8EB00.ObjectTypeClass[31]) ) /*0x6dbe7b*/
  {
    v4 = *(TechnoClass **)&stru_87F5F0.__pad_E12[1418]; /*0x6dbe81*/
    v50 = *(int **)&stru_87F5F0.__pad_E12[1418]; /*0x6dbe89*/
    if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1418] /*0x6dbe9d*/
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87F5F0.__pad_E12[1418] + 44))(*(_DWORD *)&stru_87F5F0.__pad_E12[1418]) == 6 )
    {
      if ( BuildingClass::GetPowerFrame(v4) > 0 ) /*0x6dbeac*/
      {
        *(float *)v52 = *(float *)&stru_87F5F0.__pad_E12[1370]; /*0x6dbec0*/
        v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v52); /*0x6dbecb*/
        Coords = CellClass::GetCoords(v5, v56); /*0x6dbed2*/
        v7 = *Coords; /*0x6dbed7*/
        v8 = Coords[1]; /*0x6dbed9*/
        v9 = Coords[2]; /*0x6dbedc*/
        if ( (byte_B0CE90 & 1) == 0 ) /*0x6dbee6*/
        {
          byte_B0CE14 = 0; /*0x6dbef2*/
          byte_B0CE90 |= 1u; /*0x6dbef9*/
          byte_B0CE15 = 0; /*0x6dbeff*/
          byte_B0CE16 = 0; /*0x6dbf06*/
          atexit(nullsub_44); /*0x6dbf0d*/
        }
        dword_B0E648 += 10 * dword_842950; /*0x6dbf29*/
        if ( dword_B0E648 < 100 ) /*0x6dbf2e*/
        {
          if ( dword_B0E648 <= 0 ) /*0x6dbf3e*/
            dword_842950 = 1; /*0x6dbf40*/
        }
        else
        {
          dword_842950 = -1; /*0x6dbf30*/
        }
        v10 = (int)&v4->owner->base[4] + 1; /*0x6dbf55*/
        LOWORD(v49.Color_field_00) = *(_WORD *)v10; /*0x6dbf5f*/
        BYTE2(v49.Color_field_00) = *(_BYTE *)(v10 + 2); /*0x6dbf67*/
        Color::Lerp(&v49, dword_B0E648, &byte_B0CE14); /*0x6dbf6f*/
        v51 = COERCE_FLOAT(BuildingClass::GetPowerFrame(v4)); /*0x6dbf7b*/
        v11 = (double)SLODWORD(v51); /*0x6dbf81*/
        v46 = v11; /*0x6dbf91*/
        HIBYTE(v43) = v12; /*0x6dbf94*/
        LOWORD(v43) = v49.Color_field_00; /*0x6dbf9a*/
        BYTE2(v43) = BYTE2(v49.Color_field_00); /*0x6dbfa1*/
        DrawTechnoDeployCircle(0, 1, v7, v8, v9, v43, v46, 0, 1); /*0x6dbfae*/
        v13 = 0; /*0x6dbfb9*/
        v14 = 0x7FFFFFFF; /*0x6dbfbb*/
        v48.Color_field_00 = *(_DWORD *)&dword_A83D4C->__pad_38[64]; /*0x6dbfc5*/
        Color_field_00 = v48.Color_field_00; /*0x6dbfc0*/
        if ( v48.Color_field_00 > 0 ) /*0x6dbfc9*/
        {
          v16 = v51; /*0x6dbfcf*/
          do /*0x6dc0b0*/
          {
            v17 = *(int **)(*(_DWORD *)&dword_A83D4C->__pad_38[52] + 4 * v13); /*0x6dbfdc*/
            if ( v17 ) /*0x6dbfe1*/
            {
              if ( *((_BYTE *)v17 + 144) ) /*0x6dbfe7*/
              {
                if ( v17 != v50 && v17[328] == v50[328] ) /*0x6dc00f*/
                {
                  v18 = *(_WORD *)&stru_87F5F0.__pad_E12[1370]; /*0x6dc015*/
                  v19 = *v17; /*0x6dc01b*/
                  v54 = *(_DWORD *)&stru_87F5F0.__pad_E12[1370]; /*0x6dc021*/
                  v20 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(v19 + 72))(v17, v56); /*0x6dc026*/
                  v53[0] = *v20 / 256; /*0x6dc03c*/
                  v53[1] = v20[1] / 256; /*0x6dc050*/
                  LODWORD(v51) = (__int16)(HIWORD(v54) - v53[1]); /*0x6dc06b*/
                  v21 = (double)SLODWORD(v51); /*0x6dc06f*/
                  LODWORD(v51) = (__int16)(v18 - v53[0]); /*0x6dc073*/
                  Math::Sqrt((double)SLODWORD(v51) * (double)SLODWORD(v51) + v21 * v21); /*0x6dc08c*/
                  v22 = Math::RoundToInt(v11); /*0x6dc094*/
                  if ( v22 <= 2 * LODWORD(v16) && v22 < v14 ) /*0x6dc0a5*/
                    v14 = v22; /*0x6dc0a7*/
                }
              }
            }
            Color_field_00 = v48.Color_field_00; /*0x6dc0a9*/
            ++v13; /*0x6dc0ad*/
          }
          while ( v13 < v48.Color_field_00 ); /*0x6dc0b0*/
        }
        v23 = 0; /*0x6dc0b6*/
        if ( Color_field_00 > 0 ) /*0x6dc0ba*/
        {
          do /*0x6dc1a1*/
          {
            v24 = *(int **)(*(_DWORD *)&dword_A83D4C->__pad_38[52] + 4 * v23); /*0x6dc0c8*/
            if ( v24 && *((_BYTE *)v24 + 144) && v24 != v50 && v24[328] == v50[328] ) /*0x6dc0fb*/
            {
              v25 = *(_WORD *)&stru_87F5F0.__pad_E12[1370]; /*0x6dc101*/
              v26 = *v24; /*0x6dc107*/
              v54 = *(_DWORD *)&stru_87F5F0.__pad_E12[1370]; /*0x6dc10d*/
              v27 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(v26 + 72))(v24, v56); /*0x6dc114*/
              v53[0] = *v27 / 256; /*0x6dc12a*/
              v53[1] = v27[1] / 256; /*0x6dc13e*/
              LODWORD(v51) = (__int16)(HIWORD(v54) - v53[1]); /*0x6dc159*/
              v28 = (double)SLODWORD(v51); /*0x6dc15d*/
              LODWORD(v51) = (__int16)(v25 - v53[0]); /*0x6dc161*/
              Math::Sqrt((double)SLODWORD(v51) * (double)SLODWORD(v51) + v28 * v28); /*0x6dc17a*/
              if ( (__int16)Math::RoundToInt(v11) == v14 ) /*0x6dc18c*/
                (*(void (__thiscall **)(int *, _DWORD))(*v24 + 304))(v24, 0); /*0x6dc194*/
            }
            ++v23; /*0x6dc19e*/
          }
          while ( v23 < v48.Color_field_00 ); /*0x6dc1a1*/
        }
      }
      return; /*0x6dc1a1*/
    }
    if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1438] == -1 ) /*0x6dc1b7*/
      return; /*0x6dc1b7*/
    v29 = *((_DWORD *)dword_A8E334 + *(_DWORD *)&stru_87F5F0.__pad_E12[1438]); /*0x6dc1c3*/
    v30 = *(float *)(v29 + 248); /*0x6dc1c6*/
    v51 = *(float *)(v29 + 248); /*0x6dc1cc*/
    if ( v30 <= 0.0 ) /*0x6dc1db*/
      return; /*0x6dc1db*/
    *(_DWORD *)v53 = *(_DWORD *)&stru_87F5F0.__pad_E12[1370]; /*0x6dc1f6*/
    v31 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v53); /*0x6dc1fa*/
    v32 = CellClass::GetCoords(v31, v56); /*0x6dc201*/
    v33 = v32[1]; /*0x6dc20d*/
    v54 = *v32 - 126; /*0x6dc210*/
    v34 = v32[2]; /*0x6dc219*/
    v55 = v33 - 126; /*0x6dc21c*/
    v57 = v34; /*0x6dc226*/
    if ( (byte_B0CE90 & 2) == 0 ) /*0x6dc22c*/
    {
      byte_B0CD70 = 0; /*0x6dc237*/
      byte_B0CE90 |= 2u; /*0x6dc23e*/
      byte_B0CD71 = 0; /*0x6dc244*/
      byte_B0CD72 = 0; /*0x6dc24b*/
      atexit(nullsub_43); /*0x6dc252*/
    }
    v35 = dword_842954; /*0x6dc25a*/
    dword_B0E64C += 10 * dword_842954; /*0x6dc270*/
    v36 = dword_B0E64C; /*0x6dc26a*/
    if ( dword_B0E64C < 100 ) /*0x6dc276*/
    {
      if ( dword_B0E64C > 0 ) /*0x6dc27f*/
        goto LABEL_44; /*0x6dc27f*/
      v35 = 1; /*0x6dc281*/
    }
    else
    {
      v35 = -1; /*0x6dc278*/
    }
    dword_842954 = v35; /*0x6dc286*/
LABEL_44:
    v37 = *((_DWORD *)stru_A80220.? + (int)dword_A83D4C->Object_field_0x30) + 22265; /*0x6dc28c*/
    LOWORD(v49.Color_field_00) = *(_WORD *)v37; /*0x6dc2a7*/
    v38 = *(float *)(v29 + 252); /*0x6dc2ac*/
    v39 = *(_BYTE *)(v37 + 2); /*0x6dc2b2*/
    LOWORD(v48.Color_field_00) = 0; /*0x6dc2b5*/
    BYTE2(v49.Color_field_00) = v39; /*0x6dc2bc*/
    BYTE2(v48.Color_field_00) = 0; /*0x6dc2c5*/
    *(float *)v52 = v38; /*0x6dc2ca*/
    if ( SLODWORD(v38) <= 0 ) /*0x6dc2ce*/
    {
      Color::Lerp(&v49, dword_B0E64C, &byte_B0CD70); /*0x6dc3b5*/
      HIBYTE(v45) = v42; /*0x6dc3ce*/
      LOWORD(v45) = v49.Color_field_00; /*0x6dc3d6*/
      BYTE2(v45) = BYTE2(v49.Color_field_00); /*0x6dc3dd*/
      DrawTechnoDeployCircle(0, 1, v54, v55, v34, v45, v51, 0, 1); /*0x6dc3ee*/
    }
    else
    {
      v50 = 0; /*0x6dc2d8*/
      if ( (double)*(int *)v52 * v51 >= 0.0 ) /*0x6dc2ef*/
      {
        *(float *)v52 = 0.0; /*0x6dc2f5*/
        do /*0x6dc39d*/
        {
          LOWORD(v48.Color_field_00) = v49.Color_field_00; /*0x6dc30a*/
          BYTE2(v48.Color_field_00) = BYTE2(v49.Color_field_00); /*0x6dc30f*/
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
          Color::Lerp(&v48, v36, &byte_B0CD70); /*0x6dc333*/
          v47 = *(float *)v52 / (double)*(int *)(v29 + 252); /*0x6dc350*/
          HIBYTE(v44) = v40; /*0x6dc353*/
          LOWORD(v44) = v48.Color_field_00; /*0x6dc359*/
          BYTE2(v44) = BYTE2(v48.Color_field_00); /*0x6dc360*/
          DrawTechnoDeployCircle(0, 1, v54, v55, v57, v44, v47, 0, 0); /*0x6dc379*/
          v50 = (int *)((char *)v50 + 1); /*0x6dc37e*/
          v41 = (double)(int)v50; /*0x6dc382*/
          *(float *)v52 = v41; /*0x6dc386*/
        }
        while ( v41 <= (double)*(int *)(v29 + 252) * v51 ); /*0x6dc39d*/
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



// ==== 0x006DC420  ObjectClass::GetHeightMap  this=ObjectClass  sig=csp ====
int __thiscall GetHeightMap(ObjectClass *this)
{
  return *((_DWORD *)this + 876); /*0x6dc426*/
}



// ==== 0x006DC430  GetCoordDataMap  this=Tactical  sig=csp ====
int __stdcall Map_GetCoordData(int a1)
{
  return dword_B0CEC8[3 * a1]; /*0x6dc43e*/
}



// ==== 0x006DC450  Tactical::StubReturn56  this=Tactical  sig=csp ====
int Tactical::StubReturn56(Tactical *this)
{
  return 56; /*0x6dc455*/
}



// ==== 0x006DC460  Tactical::StubReturn3608  this=Tactical  sig=csp ====
int Tactical::StubReturn3608(Tactical *this)
{
  return 3608; /*0x6dc465*/
}



// ==== 0x006DC470  Tactical::UpdateView  this=Tactical  sig=csp ====
_DWORD *__thiscall Tactical::UpdateView(Tactical *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &Tactical::`vftable'; /*0x6dc473*/
  *(_DWORD *)&this->Tactical_field_0x2[2] = &Tactical::`vftable'; /*0x6dc479*/
  this->Tactical_field_0x8[0] = (int)&Tactical::`vftable'; /*0x6dc480*/
  this->Tactical_field_0xC[0] = (int)&Tactical::`vftable'; /*0x6dc487*/
  g_TacticalClass_Instance = 0; /*0x6dc48e*/
  AbstractClass::DTOR((AbstractClass *)this); /*0x6dc498*/
  if ( (a2 & 1) != 0 ) /*0x6dc4a2*/
    __3_YAXPAX_Z(this); /*0x6dc4a5*/
  return this->__pad_0; /*0x6dc4af*/
}



// ==== 0x006DC4C0  Vector2::Subtract  this=Vector2  sig=csp ====
_DWORD *__thiscall Vector2::Subtract(Vector2 *this, _DWORD *a2)
{
  int Vector2_field_0x04; // edx

  Vector2_field_0x04 = this->Vector2_field_0x04; /*0x6dc4cd*/
  *(_DWORD *)this->__pad_0 -= *a2; /*0x6dc4d0*/
  this->Vector2_field_0x04 = Vector2_field_0x04 - a2[1]; /*0x6dc4d8*/
  return this->__pad_0; /*0x6dc4d7*/
}



// ==== 0x006DC4E0  VectorClass_UDirtyAreaStruct::Destroy  this=VectorClass_UDirtyAreaStruct  sig=csp ====
void __thiscall VectorClass_UDirtyAreaStruct::Destroy(VectorClass_UDirtyAreaStruct *this)
{
  void *Items; // eax

  Items = this->Items; /*0x6dc4e6*/
  this->Count = 0; /*0x6dc4e9*/
  if ( Items && this->IsAllocated ) /*0x6dc4f0*/
  {
    __3_YAXPAX_Z(Items); /*0x6dc4f6*/
    this->Items = 0; /*0x6dc4fe*/
  }
  this->IsAllocated = 0; /*0x6dc501*/
  this->Capacity = 0; /*0x6dc504*/
}



// ==== 0x006DC510  VectorClass_UDirtyAreaStruct::GetItemIndex  this=VectorClass_UDirtyAreaStruct  sig=csp ====
unsigned int __thiscall VectorClass_UDirtyAreaStruct::GetItemIndex(VectorClass_UDirtyAreaStruct *this, int a2)
{
  if ( this->IsInitialized ) /*0x6dc510*/
    return (a2 - (unsigned int)this->Items) / 0x14; /*0x6dc52e*/
  else
    return 0; /*0x6dc517*/
}



// ==== 0x006DC540  _VectorClass_UDirtyAreaStruct::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UDirtyAreaStruct::Clear(_VectorClass_UDirtyAreaStruct *this, int a2, int a3)
{
  int v3; // ecx

  v3 = *(_DWORD *)&this->m_1[3] + 20 * a3; /*0x6dc54c*/
  *(_DWORD *)a2 = *(_DWORD *)v3; /*0x6dc559*/
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v3 + 4); /*0x6dc55e*/
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(v3 + 8); /*0x6dc564*/
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(v3 + 12); /*0x6dc56b*/
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(v3 + 16); /*0x6dc571*/
  return a2; /*0x6dc567*/
}



// ==== 0x006DC580  _DynamicVectorClass_PAVShadowControlClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_UDirtyAreaStruct::Destroy_0(_DynamicVectorClass_PAVShadowControlClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6dc586*/
  this->m_10 = 0; /*0x6dc589*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6dc590*/
  {
    __3_YAXPAX_Z(v2); /*0x6dc596*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6dc59e*/
  }
  BYTE1(this->m_C) = 0; /*0x6dc5a1*/
  this->m_8 = 0; /*0x6dc5a4*/
}



// ==== 0x006DC5B0  _DynamicVectorClass_PAVShadowControlClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_UDirtyAreaStruct::GetItemIndex_0(
        _DynamicVectorClass_PAVShadowControlClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6dc5b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6dc5c5*/
  else
    return 0; /*0x6dc5b7*/
}



// ==== 0x006DC5D0  _VectorClass_PAVShadowControlClass::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UDirtyAreaStruct___16::Clear(_VectorClass_PAVShadowControlClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6dc5da*/
}



// ==== 0x006DC5E0  _VectorClass_UDirtyAreaStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UDirtyAreaStruct::AddRef(_VectorClass_UDirtyAreaStruct *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // ebp

  m_8 = this->m_8; /*0x6dc5eb*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6dc5f0*/
  {
    v3 = 0; /*0x6dc5f2*/
    if ( m_8 <= 0 ) /*0x6dc5f6*/
      return 1; /*0x6dc646*/
    v4 = *(_DWORD *)(a2 + 4); /*0x6dc5f8*/
    v5 = *(_DWORD *)&this->m_1[3]; /*0x6dc5fb*/
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
      if ( v3 >= m_8 ) /*0x6dc63e*/
        return 1; /*0x6dc63e*/
    }
  }
  return 0; /*0x6dc640*/
}



// ==== 0x006DC660  _VectorClass_UDirtyAreaStruct::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UDirtyAreaStruct::Release(_VectorClass_UDirtyAreaStruct *this, int a2, char *a3)
{
  int v3; // esi
  char *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v13; // eax
  const void *v14; // esi
  char *v15; // edi
  char *v16; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x6dc664*/
  if ( a2 ) /*0x6dc66f*/
  {
    v5 = a3; /*0x6dc675*/
    LOBYTE(this->m_C) = 0; /*0x6dc679*/
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
      v6 = __2_YAPAXI_Z(20 * a2); /*0x6dc687*/
      if ( v6 ) /*0x6dc691*/
      {
        if ( a2 - 1 >= 0 ) /*0x6dc698*/
        {
          v7 = v6 + 8; /*0x6dc69a*/
          v8 = a2; /*0x6dc69d*/
          do /*0x6dc6b0*/
          {
            *(_DWORD *)(v7 - 8) = 0; /*0x6dc69e*/
            *(_DWORD *)(v7 - 4) = 0; /*0x6dc6a1*/
            *(_DWORD *)v7 = 0; /*0x6dc6a4*/
            *(_DWORD *)(v7 + 4) = 0; /*0x6dc6a6*/
            *(_BYTE *)(v7 + 8) = 0; /*0x6dc6a9*/
            v7 += 20; /*0x6dc6ac*/
            --v8; /*0x6dc6af*/
          }
          while ( v8 ); /*0x6dc6b0*/
        }
        v16 = (char *)v6; /*0x6dc6b2*/
      }
      else
      {
        v16 = 0; /*0x6dc6b8*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x6dc6e5*/
    if ( v16 ) /*0x6dc6eb*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6dc6f7*/
      {
        m_8 = this->m_8; /*0x6dc6fc*/
        if ( a2 < m_8 ) /*0x6dc701*/
          m_8 = a2; /*0x6dc703*/
        if ( m_8 > 0 ) /*0x6dc707*/
        {
          v13 = 0; /*0x6dc709*/
          do /*0x6dc724*/
          {
            v14 = (const void *)(*(_DWORD *)&this->m_1[3] + v13); /*0x6dc714*/
            v15 = &v16[v13]; /*0x6dc716*/
            v13 += 20; /*0x6dc71e*/
            --m_8; /*0x6dc721*/
            qmemcpy(v15, v14, 0x14u); /*0x6dc722*/
          }
          while ( m_8 ); /*0x6dc724*/
          v5 = a3; /*0x6dc726*/
          v3 = a2; /*0x6dc72a*/
        }
        if ( BYTE1(this->m_C) ) /*0x6dc72e*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6dc737*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6dc73f*/
        }
      }
      this->m_8 = v3; /*0x6dc746*/
      *(_DWORD *)&this->m_1[3] = v16; /*0x6dc749*/
      BYTE1(this->m_C) = v5 == 0; /*0x6dc754*/
      return 1; /*0x6dc759*/
    }
    else
    {
      return 0; /*0x6dc6f0*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_UDirtyAreaStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6dc765*/
    return 1; /*0x6dc76b*/
  }
}



// ==== 0x006DC780  _VectorClass_UDirtyAreaStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UDirtyAreaStruct::ddtor(_VectorClass_UDirtyAreaStruct *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6dc78d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6dc793*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6dc79b*/
  }
  BYTE1(this->m_C) = 0; /*0x6dc79e*/
  this->m_8 = 0; /*0x6dc7a1*/
}



// ==== 0x006DC7B0  _VectorClass_UDirtyAreaStruct::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UDirtyAreaStruct::GetSize(_VectorClass_UDirtyAreaStruct *this, int a2)
{
  int m_8; // edi
  int v4; // esi
  int i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6dc7b0*/
    return 0; /*0x6dc7be*/
  m_8 = this->m_8; /*0x6dc7c4*/
  v4 = 0; /*0x6dc7c7*/
  if ( m_8 <= 0 ) /*0x6dc7cb*/
    return -1; /*0x6dc815*/
  for ( i = *(_DWORD *)&this->m_1[3]; /*0x6dc7d1*/
        *(_BYTE *)(i + 16) != *(_BYTE *)(a2 + 16)
     || *(_DWORD *)i != *(_DWORD *)a2
     || *(_DWORD *)(i + 4) != *(_DWORD *)(a2 + 4)
     || *(_DWORD *)(i + 8) != *(_DWORD *)(a2 + 8)
     || *(_DWORD *)(i + 12) != *(_DWORD *)(a2 + 12);
        i += 20 )
  {
    if ( ++v4 >= m_8 ) /*0x6dc808*/
      return -1; /*0x6dc808*/
  }
  return v4; /*0x6dc7bb*/
}



// ==== 0x006DC820  _VectorClass_UDirtyAreaStruct::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UDirtyAreaStruct::GetCapacity(_VectorClass_UDirtyAreaStruct *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6dc820*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0x14u; /*0x6dc83e*/
  else
    return 0; /*0x6dc827*/
}



// ==== 0x006DC850  VectorClass_UDirtyAreaStruct::SetCapacity  this=VectorClass_UDirtyAreaStruct  sig=csp ====
char __thiscall VectorClass_UDirtyAreaStruct::SetCapacity(VectorClass_UDirtyAreaStruct *this, int a2, char *a3)
{
  void *v3; // edi
  char *v5; // esi
  int v6; // ebx
  char *v7; // ebx
  int v8; // ebx
  char *Capacity; // edx
  int v10; // eax
  char *v11; // edi
  char *v12; // esi
  void *v13; // eax
  char *v15; // [esp+10h] [ebp-4h]

  v3 = (void *)a2; /*0x6dc855*/
  if ( !a2 ) /*0x6dc85d*/
  {
    (*(void (__thiscall **)(VectorClass_UDirtyAreaStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6dc94a*/
    goto LABEL_26; /*0x6dc94a*/
  }
  v5 = a3; /*0x6dc863*/
  this->IsInitialized = 0; /*0x6dc867*/
  if ( a3 ) /*0x6dc86d*/
  {
    if ( a2 - 1 >= 0 ) /*0x6dc8ba*/
    {
      v8 = a2; /*0x6dc8bc*/
      do /*0x6dc8d6*/
      {
        Rect::Set((Rect *)v5, 0, 0, 0, 0); /*0x6dc8c9*/
        v5[16] = 0; /*0x6dc8ce*/
        v5 += 20; /*0x6dc8d2*/
        --v8; /*0x6dc8d5*/
      }
      while ( v8 ); /*0x6dc8d6*/
      v5 = a3; /*0x6dc8d8*/
    }
    goto LABEL_13; /*0x6dc8d8*/
  }
  v5 = (char *)__2_YAPAXI_Z(20 * a2); /*0x6dc87b*/
  v15 = v5; /*0x6dc882*/
  if ( v5 ) /*0x6dc886*/
  {
    if ( a2 - 1 >= 0 ) /*0x6dc88d*/
    {
      v6 = a2; /*0x6dc88f*/
      do /*0x6dc8a9*/
      {
        Rect::Set((Rect *)v5, 0, 0, 0, 0); /*0x6dc89c*/
        v5[16] = 0; /*0x6dc8a1*/
        v5 += 20; /*0x6dc8a5*/
        --v6; /*0x6dc8a8*/
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
    Capacity = (char *)this->Capacity; /*0x6dc8ed*/
    if ( a2 < (int)Capacity ) /*0x6dc8f2*/
      Capacity = (char *)a2; /*0x6dc8f4*/
    if ( (int)Capacity > 0 ) /*0x6dc8f8*/
    {
      v10 = 0; /*0x6dc8fa*/
      do /*0x6dc90f*/
      {
        v11 = &v7[v10]; /*0x6dc8ff*/
        v12 = (char *)this->Items + v10; /*0x6dc902*/
        v10 += 20; /*0x6dc909*/
        --Capacity; /*0x6dc90c*/
        qmemcpy(v11, v12, 0x14u); /*0x6dc90d*/
      }
      while ( Capacity ); /*0x6dc90f*/
      v3 = (void *)a2; /*0x6dc911*/
    }
    if ( this->IsAllocated ) /*0x6dc915*/
    {
      __3_YAXPAX_Z(this->Items); /*0x6dc920*/
      this->Items = 0; /*0x6dc928*/
    }
  }
  this->Items = v7; /*0x6dc93a*/
  this->Capacity = v3; /*0x6dc93d*/
  this->IsAllocated = a3 == 0; /*0x6dc940*/
LABEL_26:
  v13 = this->Capacity; /*0x6dc94d*/
  if ( (int)v13 < (int)this->Count ) /*0x6dc955*/
    this->Count = v13; /*0x6dc957*/
  return 1; /*0x6dc95a*/
}



// ==== 0x006DC970  VectorClass_UDirtyAreaStruct::FindItemIndex  this=VectorClass_UDirtyAreaStruct  sig=csp ====
int __thiscall VectorClass_UDirtyAreaStruct::FindItemIndex(VectorClass_UDirtyAreaStruct *this, int a2)
{
  void *Count; // edi
  int v3; // esi
  char *i; // ecx

  Count = this->Count; /*0x6dc974*/
  v3 = 0; /*0x6dc977*/
  if ( (int)Count <= 0 ) /*0x6dc97b*/
    return -1; /*0x6dc9c5*/
  for ( i = (char *)this->Items; /*0x6dc981*/
        i[16] != *(_BYTE *)(a2 + 16)
     || *(_DWORD *)i != *(_DWORD *)a2
     || *((_DWORD *)i + 1) != *(_DWORD *)(a2 + 4)
     || *((_DWORD *)i + 2) != *(_DWORD *)(a2 + 8)
     || *((_DWORD *)i + 3) != *(_DWORD *)(a2 + 12);
        i += 20 )
  {
    if ( ++v3 >= (int)Count ) /*0x6dc9b8*/
      return -1; /*0x6dc9b8*/
  }
  return v3; /*0x6dc9be*/
}



// ==== 0x006DC9D0  _VectorClass_PAVShadowControlClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UDirtyAreaStruct___16::AddRef(_VectorClass_PAVShadowControlClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x6dc9d2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6dc9dd*/
  {
    v3 = 0; /*0x6dc9df*/
    if ( m_8 <= 0 ) /*0x6dc9e3*/
      return 1; /*0x6dca03*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6dc9e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6dc9eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6dc9f4*/
    {
      ++v3; /*0x6dc9f6*/
      ++v4; /*0x6dc9f7*/
      if ( v3 >= m_8 ) /*0x6dc9fc*/
        return 1; /*0x6dc9fc*/
    }
  }
  return 0; /*0x6dc9fe*/
}



// ==== 0x006DCA10  _VectorClass_PAVShadowControlClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UDirtyAreaStruct___16::Release(
        _VectorClass_PAVShadowControlClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6dca1c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6dca26*/
    if ( a3 ) /*0x6dca2c*/
      v4 = a3; /*0x6dca42*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6dca3e*/
    LOBYTE(this->m_C) = 1; /*0x6dca46*/
    if ( v4 ) /*0x6dca4a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6dca55*/
      {
        m_8 = this->m_8; /*0x6dca5c*/
        if ( a2 < m_8 ) /*0x6dca61*/
          m_8 = a2; /*0x6dca63*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6dca69*/
          ++i; /*0x6dca6e*/
        if ( BYTE1(this->m_C) ) /*0x6dca7b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6dca86*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6dca8e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6dca97*/
      this->m_8 = a2; /*0x6dca9f*/
      BYTE1(this->m_C) = a3 == 0; /*0x6dcaa2*/
      return 1; /*0x6dcaa8*/
    }
    else
    {
      return 0; /*0x6dca4f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVShadowControlClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6dcab2*/
    return 1; /*0x6dcab8*/
  }
}



// ==== 0x006DCAC0  _VectorClass_PAVShadowControlClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UDirtyAreaStruct___16::ddtor(_VectorClass_PAVShadowControlClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6dcacd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6dcad3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6dcadb*/
  }
  BYTE1(this->m_C) = 0; /*0x6dcade*/
  this->m_8 = 0; /*0x6dcae1*/
}



// ==== 0x006DCAF0  _VectorClass_PAVShadowControlClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UDirtyAreaStruct___16::GetSize(_VectorClass_PAVShadowControlClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6dcaf0*/
    return 0; /*0x6dcaf8*/
  m_8 = this->m_8; /*0x6dcafe*/
  result = 0; /*0x6dcb01*/
  if ( m_8 <= 0 ) /*0x6dcb05*/
    return -1; /*0x6dcb1c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6dcb0b*/
  {
    if ( ++result >= m_8 ) /*0x6dcb1a*/
      return -1; /*0x6dcb1a*/
  }
  return result; /*0x6dcafa*/
}



// ==== 0x006DCB30  _VectorClass_PAVShadowControlClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UDirtyAreaStruct___16::GetCapacity(
        _VectorClass_PAVShadowControlClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6dcb30*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6dcb45*/
  else
    return 0; /*0x6dcb37*/
}



// ==== 0x006DCB50  _DynamicVectorClass_PAVShadowControlClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_UDirtyAreaStruct::SetCapacity_0(
        _DynamicVectorClass_PAVShadowControlClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6dcb5c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6dcb62*/
    if ( a3 ) /*0x6dcb68*/
      v4 = a3; /*0x6dcb7e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6dcb7a*/
    LOBYTE(this->m_C) = 1; /*0x6dcb82*/
    if ( !v4 ) /*0x6dcb86*/
      return 0; /*0x6dcbfa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6dcb88*/
    {
      m_8 = this->m_8; /*0x6dcb8f*/
      if ( a2 < m_8 ) /*0x6dcb94*/
        m_8 = a2; /*0x6dcb96*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6dcb9c*/
        ++i; /*0x6dcba1*/
      if ( BYTE1(this->m_C) ) /*0x6dcbae*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6dcbb9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6dcbc1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x6dcbca*/
    this->m_8 = a2; /*0x6dcbd2*/
    BYTE1(this->m_C) = a3 == 0; /*0x6dcbd5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVShadowControlClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6dcbde*/
  }
  v7 = this->m_8; /*0x6dcbe1*/
  if ( v7 < this->m_10 ) /*0x6dcbe9*/
    this->m_10 = v7; /*0x6dcbeb*/
  return 1; /*0x6dcbee*/
}



// ==== 0x006DCC00  _DynamicVectorClass_PAVShadowControlClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_UDirtyAreaStruct::FindItemIndex_0(
        _DynamicVectorClass_PAVShadowControlClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6dcc00*/
  result = 0; /*0x6dcc03*/
  if ( m_10 <= 0 ) /*0x6dcc08*/
    return -1; /*0x6dcc1f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6dcc0e*/
  {
    if ( ++result >= m_10 ) /*0x6dcc1d*/
      return -1; /*0x6dcc1d*/
  }
  return result; /*0x6dcc22*/
}



// ==== 0x006DCC30  _VectorClass_UDirtyAreaStruct::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UDirtyAreaStruct::QueryInterface(_VectorClass_UDirtyAreaStruct *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6dcc33*/
  *(_DWORD *)this->__pad_0 = &VectorClass<DirtyAreaStruct>::`vftable'; /*0x6dcc36*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6dcc40*/
  {
    __3_YAXPAX_Z(v3); /*0x6dcc48*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6dcc50*/
  }
  BYTE1(this->m_C) = 0; /*0x6dcc5b*/
  this->m_8 = 0; /*0x6dcc61*/
  if ( (a2 & 1) != 0 ) /*0x6dcc68*/
    __3_YAXPAX_Z(this); /*0x6dcc6b*/
  return this->__pad_0; /*0x6dcc75*/
}



// ==== 0x006DCCD0  _VectorClass_PAVShadowControlClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UDirtyAreaStruct___16::QueryInterface(_VectorClass_PAVShadowControlClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6dccd3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ShadowControlClass *>::`vftable'; /*0x6dccd6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6dcce0*/
  {
    __3_YAXPAX_Z(v3); /*0x6dcce8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6dccf0*/
  }
  BYTE1(this->m_C) = 0; /*0x6dccfb*/
  this->m_8 = 0; /*0x6dcd01*/
  if ( (a2 & 1) != 0 ) /*0x6dcd08*/
    __3_YAXPAX_Z(this); /*0x6dcd0b*/
  return this->__pad_0; /*0x6dcd15*/
}



// ==== 0x006DCD20  _DynamicVectorClass_PAVShadowControlClass::Constructor_VectorClass_ShadowControlClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_UDirtyAreaStruct::Constructor_VectorClass_ShadowControlClass___(
        _DynamicVectorClass_PAVShadowControlClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6dcd23*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ShadowControlClass *>::`vftable'; /*0x6dcd26*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6dcd30*/
  {
    __3_YAXPAX_Z(v3); /*0x6dcd38*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6dcd40*/
  }
  BYTE1(this->m_C) = 0; /*0x6dcd4b*/
  this->m_8 = 0; /*0x6dcd51*/
  if ( (a2 & 1) != 0 ) /*0x6dcd58*/
    __3_YAXPAX_Z(this); /*0x6dcd5b*/
  return this->__pad_0; /*0x6dcd65*/
}



// ==== 0x006DCD70  sub_6DCD70  this=-  sig=ida-proto ====
void sub_6DCD70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6dcd7c*/
  dbl_B0E688 = Math::Sqrt(v0 + v0); /*0x6dcd8e*/
}



// ==== 0x006DCDA0  sub_6DCDA0  this=-  sig=ida-proto ====
void sub_6DCDA0()
{
  dbl_B0E6D8 = dbl_B0E688 / 60.0; /*0x6dcdac*/
}



// ==== 0x006DCDC0  sub_6DCDC0  this=-  sig=ida-proto ====
void sub_6DCDC0()
{
  dbl_B0E6C0 = 1.0 / dbl_B0E6D8; /*0x6dcdcc*/
}



// ==== 0x006DCDE0  sub_6DCDE0  this=-  sig=ida-proto ====
void sub_6DCDE0()
{
  dbl_B0E6B8 = 0.0174532925199433 * 45.0; /*0x6dcdec*/
}



// ==== 0x006DCE00  sub_6DCE00  this=-  sig=ida-proto ====
void sub_6DCE00()
{
  dbl_B0E690 = 0.0174532925199433 * 60.0; /*0x6dce0c*/
}



// ==== 0x006DCE20  sub_6DCE20  this=-  sig=ida-proto ====
void sub_6DCE20()
{
  dbl_B0E650 = 0.0174532925199433 * 90.0; /*0x6dce2c*/
}



// ==== 0x006DCE40  sub_6DCE40  this=-  sig=ida-proto ====
__int64 sub_6DCE40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E650 - dbl_B0E690); /*0x6dce52*/
  result = Math::RoundToInt(v0 * dbl_B0E688 * 0.5); /*0x6dce66*/
  dword_B0E6E0 = result; /*0x6dce6b*/
  return result; /*0x6dce70*/
}



// ==== 0x006DCE80  sub_6DCE80  this=-  sig=ida-proto ====
void sub_6DCE80()
{
  dbl_B0E698 = Math::ArcTan((double)dword_B0E6E0 * 0.00390625); /*0x6dce97*/
}



// ==== 0x006DCEB0  sub_6DCEB0  this=-  sig=ida-proto ====
void sub_6DCEB0()
{
  dbl_B0E6B0 = Math::ArcTan((double)(2 * dword_B0E6E0) / dbl_B0E688); /*0x6dced2*/
}



// ==== 0x006DCEE0  sub_6DCEE0  this=-  sig=ida-proto ====
__int64 sub_6DCEE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E6E0) + 0.5); /*0x6dcefb*/
  dword_B0E6D4 = result; /*0x6dcf00*/
  return result; /*0x6dcf06*/
}



// ==== 0x006DCF10  sub_6DCF10  this=-  sig=ida-proto ====
int sub_6DCF10()
{
  dword_B0E680 = 0; /*0x6dcf12*/
  return 0; /*0x6dcf1e*/
}



// ==== 0x006DCF20  sub_6DCF20  this=-  sig=ida-proto ====
int sub_6DCF20()
{
  dword_B0E6A0 = 0; /*0x6dcf22*/
  dword_B0E6A4 = 0; /*0x6dcf27*/
  dword_B0E6A8 = 0; /*0x6dcf2c*/
  return 0; /*0x6dcf31*/
}



// ==== 0x006DCF40  sub_6DCF40  this=-  sig=ida-proto ====
int sub_6DCF40()
{
  dword_B0E6D0 = 0; /*0x6dcf45*/
  dword_B0E6C8 = 128; /*0x6dcf4f*/
  dword_B0E6CC = 128; /*0x6dcf54*/
  return 128; /*0x6dcf59*/
}



// ==== 0x006DCF60  sub_6DCF60  this=-  sig=ida-proto ====
int sub_6DCF60()
{
  dword_B0E670 = 0; /*0x6dcf62*/
  dword_B0E674 = 0; /*0x6dcf67*/
  dword_B0E678 = 0; /*0x6dcf6c*/
  dword_B0E67C = 0; /*0x6dcf71*/
  return 0; /*0x6dcf76*/
}



// ==== 0x006DCF80  sub_6DCF80  this=-  sig=ida-proto ====
int sub_6DCF80()
{
  dword_B0E65C = 0; /*0x6dcf87*/
  dword_B0E660 = 0; /*0x6dcf8c*/
  byte_B0E664 = 1; /*0x6dcf91*/
  byte_B0E665 = 0; /*0x6dcf98*/
  dword_B0E658 = (int)&off_7F43D0; /*0x6dcf9d*/
  dword_B0E66C = 10; /*0x6dcfa7*/
  dword_B0E668 = 0; /*0x6dcfb1*/
  return atexit(sub_6DCFC0); /*0x6dcfbc*/
}



// ==== 0x006DCFC0  sub_6DCFC0  this=-  sig=ida-proto ====
void __cdecl sub_6DCFC0()
{
  dword_B0E658 = (int)&VectorClass<TActionClass *>::`vftable'; /*0x6dcfc8*/
  if ( dword_B0E65C && byte_B0E665 ) /*0x6dcfdc*/
  {
    __3_YAXPAX_Z(dword_B0E65C); /*0x6dcfdf*/
    dword_B0E65C = 0; /*0x6dcfe7*/
  }
  byte_B0E665 = 0; /*0x6dcfed*/
  dword_B0E660 = 0; /*0x6dcff3*/
}



// ==== 0x006DD000  TActionClass::ctor  this=TActionClass  sig=csp ====
int __thiscall TActionClass::ctor(TActionClass *this)
{
  int v2; // ecx
  char v3; // al
  int v4; // eax
  TActionClass **v5; // edx
  int v6; // eax
  int v7; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6dd004*/
  this->idxArray = -1; /*0x6dd00b*/
  this->TActionClass_field_28 = 0; /*0x6dd012*/
  this->TActionClass_field_2C = 0; /*0x6dd015*/
  this->TActionClass_field_30 = 0; /*0x6dd018*/
  this->TActionClass_field_34 = 0; /*0x6dd01b*/
  this->TActionClass_field_38 = 0; /*0x6dd01e*/
  this->TActionClass_field_3C = 0; /*0x6dd021*/
  this->TActionClass_field_40 = 0; /*0x6dd024*/
  this->TActionClass_field_44 = 0; /*0x6dd027*/
  this->TActionClass_field_48 = 0; /*0x6dd02a*/
  this->TActionClass_field_4C = 0; /*0x6dd02d*/
  this->TActionClass_field_50 = 0; /*0x6dd030*/
  this->TActionClass_field_54 = 0; /*0x6dd033*/
  this->AbstractClass = &TActionClass::`vftable'; /*0x6dd036*/
  this->? = &TActionClass::`vftable'; /*0x6dd03c*/
  this->? = &TActionClass::`vftable'; /*0x6dd043*/
  this->? = &TActionClass::`vftable'; /*0x6dd04a*/
  v2 = dword_B0E668; /*0x6dd051*/
  if ( dword_B0E668 < dword_B0E660 /*0x6dd08f*/
    || (byte_B0E665 || !dword_B0E660)
    && dword_B0E66C > 0
    && (v3 = (*(int (__thiscall **)(int *, int, _DWORD))(dword_B0E658 + 8))(
               &dword_B0E658,
               dword_B0E660 + dword_B0E66C,
               0),
        v2 = dword_B0E668,
        v3) )
  {
    dword_B0E668 = v2 + 1; /*0x6dd094*/
    *((_DWORD *)dword_B0E65C + v2) = this; /*0x6dd0a0*/
    v2 = dword_B0E668; /*0x6dd0a3*/
  }
  v4 = 0; /*0x6dd0a9*/
  if ( v2 <= 0 ) /*0x6dd0ad*/
  {
LABEL_11:
    v4 = -1; /*0x6dd0c1*/
  }
  else
  {
    v5 = (TActionClass **)dword_B0E65C; /*0x6dd0af*/
    while ( *v5 != this ) /*0x6dd0b7*/
    {
      ++v4; /*0x6dd0b9*/
      ++v5; /*0x6dd0ba*/
      if ( v4 >= v2 ) /*0x6dd0bf*/
        goto LABEL_11; /*0x6dd0bf*/
    }
  }
  this->idxArray = v4; /*0x6dd0c4*/
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x6dd0fb*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v6 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x6dd108*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v6) = this; /*0x6dd117*/
  }
  if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x6dd14e*/
    || (BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
    && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
         0) )
  {
    v7 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x6dd15b*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v7) = this; /*0x6dd16a*/
  }
  this->TActionClass_field_6D = 0; /*0x6dd16d*/
  *(_DWORD *)&this->pad_6E[34] = 0; /*0x6dd170*/
  return (int)this; /*0x6dd178*/
}



// ==== 0x006DD2C0  TActionClass::ExecuteAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::ExecuteAction(TActionClass *this, int a2, int a3)
{
  void *TActionClass_field_28; // eax
  int result; // eax

  TActionClass_field_28 = this->TActionClass_field_28; /*0x6dd2c0*/
  if ( TActionClass_field_28 == (void *)a2 ) /*0x6dd2c9*/
    this->TActionClass_field_28 = (void *)*((_DWORD *)TActionClass_field_28 + 10); /*0x6dd2ce*/
  result = 0; /*0x6dd2d5*/
  if ( this->TActionClass_field_30 == (void *)a2 ) /*0x6dd2d9*/
    this->TActionClass_field_30 = 0; /*0x6dd2db*/
  if ( this->TActionClass_field_50 == (void *)a2 ) /*0x6dd2e1*/
    this->TActionClass_field_50 = 0; /*0x6dd2e3*/
  if ( this->TActionClass_field_4C == (void *)a2 ) /*0x6dd2ec*/
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
      v5 = a1_1; /*0x6dd416*/
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
               "%d,%d,%d,%d,%d,%d,%d,%d",
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
               "%d,%d,%s,%d,%d,%d,%d,%s",
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
               "%d,%d,%s,%d,%d,%d,%d,%d",
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
                 "%d,%d,%s,%d,%d,%d,%d,%s",
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
                 "%d,%d,%d,%d,%d,%d,%d,%s",
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
const char *__thiscall ScriptAction::ParseScriptActionParams(ScriptAction *this)
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

  *(_DWORD *)this->__pad_90 = 0; /*0x6dd5c1*/
  v2 = strtok(0, Str); /*0x6dd5c7*/
  *(_DWORD *)&this->__pad_28[4] = atoi(v2); /*0x6dd5d8*/
  v3 = strtok(0, Str); /*0x6dd5db*/
  v4 = atoi(v3); /*0x6dd5e6*/
  v5 = strtok(0, Str); /*0x6dd5f7*/
  v6 = atoi(v5); /*0x6dd5fa*/
  switch ( v4 ) /*0x6dd60d*/
  {
    case 0: /*0x6dd60d*/
    case 11: /*0x6dd60d*/
      *(_DWORD *)this->__pad_90 = v6; /*0x6dd614*/
      break; /*0x6dd61a*/
    case 1: /*0x6dd60d*/
    case 5: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd622*/
      {
        this->ScriptAction_field_0x30 = 0; /*0x6dd624*/
      }
      else if ( strlen(v5) >= 3 ) /*0x6dd63b*/
      {
        this->ScriptAction_field_0x30 = TechnoClass::Create(v5); /*0x6dd654*/
      }
      else
      {
        this->ScriptAction_field_0x30 = *(void **)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v6); /*0x6dd645*/
      }
      break; /*0x6dd627*/
    case 2: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd65f*/
      {
        *(_DWORD *)&this->__pad_34[28] = 0; /*0x6dd661*/
      }
      else if ( strlen(v5) >= 3 ) /*0x6dd678*/
      {
        *(_DWORD *)&this->__pad_34[28] = TagTypeClass::FindOrCreateTriggerType(v5); /*0x6dd691*/
      }
      else
      {
        *(_DWORD *)&this->__pad_34[28] = *(_DWORD *)(FootClass_Array.?[0] + 4 * v6); /*0x6dd682*/
      }
      break; /*0x6dd664*/
    case 3: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd69c*/
      {
        *(_DWORD *)&this->__pad_34[24] = 0; /*0x6dd69e*/
      }
      else if ( strlen(v5) >= 3 ) /*0x6dd6b5*/
      {
        *(_DWORD *)&this->__pad_34[24] = TagTypeClass::FindOrCreate(v5); /*0x6dd6cb*/
      }
      else
      {
        *(_DWORD *)&this->__pad_34[24] = *((_DWORD *)dword_B0E784 + v6); /*0x6dd6bf*/
      }
      break; /*0x6dd6a1*/
    case 4: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd6d3*/
      {
        this->__pad_34[57] = 0; /*0x6dd6d5*/
      }
      else
      {
        v7 = v5; /*0x6dd6de*/
        this->__pad_34[57] = 0; /*0x6dd6e2*/
        if ( v5 ) /*0x6dd6e5*/
        {
          for ( i = *v5; i; i = *++v7 ) /*0x6dd6e7*/
          {
            if ( (unsigned __int8)i > 0x20u ) /*0x6dd6f1*/
              break; /*0x6dd6f1*/
          }
          if ( *v7 ) /*0x6dd6fb*/
          {
            strncpy(&this->__pad_34[57], v7, 0x1Fu); /*0x6dd704*/
            LOBYTE(this->ScriptAction_field_0x8C) = 0; /*0x6dd711*/
            v9 = strlen(&this->__pad_34[57]) + 1; /*0x6dd718*/
            v10 = v9 - 1; /*0x6dd71c*/
            if ( v9 != 1 ) /*0x6dd71d*/
            {
              do /*0x6dd726*/
              {
                if ( this->__pad_34[v10 + 56] > 0x20u ) /*0x6dd723*/
                  break; /*0x6dd723*/
                --v10; /*0x6dd725*/
              }
              while ( v10 ); /*0x6dd726*/
            }
            this->__pad_34[v10 + 57] = 0; /*0x6dd728*/
          }
        }
      }
      break; /*0x6dd6d9*/
    case 6: /*0x6dd60d*/
      *(_DWORD *)this->__pad_90 = VocClass::FindByName((VocClass *)v5); /*0x6dd7c3*/
      break; /*0x6dd7c9*/
    case 7: /*0x6dd60d*/
      *(_DWORD *)this->__pad_90 = VocClass::FindIndex((VocClass *)v5); /*0x6dd7d5*/
      break; /*0x6dd7db*/
    case 8: /*0x6dd60d*/
      *(_DWORD *)this->__pad_90 = StringList::Find((StringList *)&unk_A83D10, v5); /*0x6dd7eb*/
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
      if ( Destination != &this->__pad_34[32] ) /*0x6dd81f*/
      {
        qmemcpy(&this->__pad_34[32], Destination, 0x18u); /*0x6dd82e*/
        this->__pad_34[56] = v17; /*0x6dd830*/
      }
      break; /*0x6dd831*/
    default:
      break;
  }
  v11 = strtok(0, Str); /*0x6dd731*/
  *(_DWORD *)this->__pad_34 = atoi(v11); /*0x6dd74a*/
  v12 = strtok(0, Str); /*0x6dd74d*/
  *(_DWORD *)&this->__pad_34[4] = atoi(v12); /*0x6dd75f*/
  v13 = strtok(0, Str); /*0x6dd762*/
  *(_DWORD *)&this->__pad_34[8] = atoi(v13); /*0x6dd774*/
  v14 = strtok(0, Str); /*0x6dd777*/
  *(_DWORD *)&this->__pad_34[12] = atoi(v14); /*0x6dd789*/
  result = strtok(0, Str); /*0x6dd78c*/
  if ( result ) /*0x6dd796*/
  {
    if ( v4 == 5 || v4 == 9 ) /*0x6dd839*/
    {
      result = (const char *)atoi(result); /*0x6dd7a6*/
      *(_DWORD *)this->__pad_90 = result; /*0x6dd7ae*/
    }
    else if ( v4 == 11 ) /*0x6dd855*/
    {
      result = (const char *)atoi(result); /*0x6dd858*/
      *(_DWORD *)&this->__pad_34[20] = result; /*0x6dd860*/
    }
    else
    {
      result = (const char *)String::To_Waypoint((char *)result); /*0x6dd86d*/
      *(_DWORD *)&this->__pad_34[16] = result; /*0x6dd872*/
    }
  }
  return result; /*0x6dd7b4*/
}



// ==== 0x006DD8B0  TerrainClass::ProcessUpdate  this=TerrainClass  sig=csp ====
char __userpurge TerrainClass::ProcessUpdate@<al>(
        int a1@<ecx>,
        _DWORD *a2@<edi>,
        _UNKNOWN **a3@<ebx>,
        double a4@<st0>,
        HouseClass *a5,
        int a6,
        _DWORD *a7,
        __int16 *a8)
{
  char result; // al
  int v10; // ecx
  int v11; // ebp
  _DWORD *v12; // eax
  ActionQueue *v13; // eax
  int v14; // esi
  char v15; // bl
  int n; // edi
  int v17; // esi
  LinkedList *v18; // ecx
  int v19; // edi
  int v20; // esi
  int v21; // edi
  int v22; // esi
  int v23; // ebx
  _DWORD *v24; // edi
  HouseClass *v25; // ecx
  int v26; // edi
  int *WorldCoords; // eax
  int v28; // edi
  int *v29; // eax
  int v30; // edi
  int *v31; // eax
  char v32; // bl
  int j; // edi
  int v34; // esi
  LinkedList *v35; // ecx
  char v36; // bl
  int k; // edi
  BuildingClass *v38; // esi
  LinkedList *attachedTag; // ecx
  char v40; // bl
  int m; // edi
  BuildingClass *v42; // esi
  LinkedList *v43; // ecx
  void *NeedsSaveOrLink; // eax
  wchar_t... [50325 chars total]



// ==== 0x006D0260  TabClass::Stub  this=TabClass  sig=csp ====
// attributes: thunk
int __thiscall BlowStraw_29::Stub(TabClass *this)
{
  return ObjectClass::processDamage((SidebarClass *)this);
}



// ==== 0x006D0270  TabClass::CleanupResources  this=TabClass  sig=csp ====
void TacticalClass::CleanupResources(TabClass *this)
{
  int v1; // edi
  void **v2; // esi
  SidebarClass *v3; // [esp+0h] [ebp-8h]

  ObjectClass::CleanupSidebarResources(v3); /*0x6d0272*/
  v1 = 0; /*0x6d0277*/
  v2 = (void **)dword_B0C148; /*0x6d0279*/
  do /*0x6d02aa*/
  {
    if ( byte_B0CBDC[v1] ) /*0x6d027e*/
    {
      __3_YAXPAX_Z(*v2); /*0x6d028b*/
      byte_B0CBDC[v1] = 0; /*0x6d0293*/
    }
    *v2++ = 0; /*0x6d029a*/
    ++v1; /*0x6d02a3*/
  }
  while ( (int)v2 < (int)&byte_B0C1AC ); /*0x6d02aa*/
}



// ==== 0x006D02B0  TabClass::LoadButtonSHPs  this=TabClass  sig=csp ====
int __thiscall SidebarClass::LoadButtonSHPs(TabClass *this)
{
  int v2; // esi
  int *v3; // edi
  void *v4; // eax
  bool v5; // cl
  int v6; // esi
  int result; // eax
  int v8; // edx
  SidebarClass *v9; // [esp+0h] [ebp-124h]
  bool v10; // [esp+Fh] [ebp-115h] BYREF
  void *NeedsSaveOrLink; // [esp+10h] [ebp-114h]
  int v12; // [esp+14h] [ebp-110h]
  int v13; // [esp+18h] [ebp-10Ch]
  int v14; // [esp+20h] [ebp-104h]
  char Buffer[256]; // [esp+24h] [ebp-100h] BYREF

  SidebarClass::LoadAssets(v9); /*0x6d02bb*/
  v10 = 0; /*0x6d02c0*/
  v2 = 0; /*0x6d02c5*/
  v3 = dword_B0C148; /*0x6d02c7*/
  do /*0x6d0302*/
  {
    sprintf(Buffer, "Button%02d.SHP", v2); /*0x6d02d7*/
    v4 = LoadFileSHP(Buffer, &v10); /*0x6d02e7*/
    v5 = v10; /*0x6d02ec*/
    *v3 = (int)v4; /*0x6d02f0*/
    byte_B0CBDC[v2] = v5; /*0x6d02f2*/
    ++v3; /*0x6d02f8*/
    ++v2; /*0x6d02fb*/
  }
  while ( (int)v3 < (int)&byte_B0C1AC ); /*0x6d0302*/
  dword_B0CD38 = *(__int16 *)(dword_B0C148[0] + 2); /*0x6d0314*/
  dword_B0CB50 = *(__int16 *)(dword_B0C148[0] + 4); /*0x6d031e*/
  v6 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1212]; /*0x6d032a*/
  v12 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1208]; /*0x6d032e*/
  v13 = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1208] + 4); /*0x6d0335*/
  result = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1208] + 8); /*0x6d0339*/
  v14 = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1208] + 12); /*0x6d033f*/
  dword_B0CC2C = v6 - result * dword_B0CB54; /*0x6d0354*/
  NeedsSaveOrLink = dword_A8B230[374].NeedsSaveOrLink; /*0x6d0363*/
  v8 = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1192] + 4); /*0x6d036d*/
  dword_B0CD10 = result - dword_B0CD38; /*0x6d0370*/
  dword_B0CC24 = v8; /*0x6d0377*/
  dword_B0CC38 = result; /*0x6d037d*/
  *((_DWORD *)this + 5448) = 0; /*0x6d0382*/
  return result; /*0x6d030f*/
}



// ==== 0x006D03A0  TabClass::InitButtons  this=TabClass  sig=csp ====
char __thiscall SidebarClass::InitButtons(TabClass *this)
{
  char result; // al
  int v2; // esi

  SidebarClass::Init((SidebarClass *)this); /*0x6d03a7*/
  result = stru_A8EB00.?[391]; /*0x6d03ac*/
  if ( !stru_A8EB00.?[391] ) /*0x6d03b5*/
  {
    result = UI_Init_72F430(); /*0x6d03bb*/
    if ( result ) /*0x6d03c2*/
    {
      UI_Init_6D0FD0(); /*0x6d03cc*/
      dword_B0CCD4 = 240; /*0x6d03e1*/
      dword_B0CD00 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6d03eb*/
      byte_B0CCDD = 0; /*0x6d03f0*/
      dword_B0CCE0 = 0; /*0x6d03f6*/
      dword_B0CCD0 = 5; /*0x6d03fc*/
      v2 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[736]; /*0x6d0404*/
      Rect_Point::Set( /*0x6d0422*/
        &stru_B0CCB0,
        **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1200],
        *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1200] + 4));
      ShapeButton::SetShape((ShapeButtonClass *)&stru_B0CCB0, v2, 0, 0); /*0x6d042f*/
      dword_B0CC64 = 241; /*0x6d043f*/
      dword_B0CC90 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6d0449*/
      byte_B0CC6D = 0; /*0x6d044e*/
      dword_B0CC70 = 0; /*0x6d0454*/
      dword_B0CC60 = 5; /*0x6d045a*/
      Rect_Point::Set( /*0x6d047a*/
        &stru_B0CC40,
        **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1204],
        *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1204] + 4));
      return ShapeButton::SetShape((ShapeButtonClass *)&stru_B0CC40, v2, 0, 0); /*0x6d0487*/
    }
  }
  return result; /*0x6d048e*/
}



// ==== 0x006D04D0  ObjectClass::SidebarUpdateAll  this=ObjectClass  sig=csp ====
int __thiscall SidebarUpdateAll(ObjectClass *this)
{
  ShapeButtonClass *v2; // esi
  int result; // eax

  v2 = &stru_B0C1C0; /*0x6d04d4*/
  do /*0x6d04ea*/
  {
    result = (*((int (__thiscall **)(ObjectClass *, ShapeButtonClass *))this->AbstractClass + 13))(this, v2); /*0x6d04de*/
    v2 += 8; /*0x6d04e1*/
  }
  while ( (int)v2 < (int)&dword_B0CB20 ); /*0x6d04ea*/
  return result; /*0x6d04ec*/
}



// ==== 0x006D04F0  TabClass::BuildCommandBar  this=TabClass  sig=csp ====
int __userpurge TacticalClass::BuildCommandBar@<eax>(TabClass *this, int a2@<edi>, int a3)
{
  CommandClass *v3; // ecx
  int v4; // ebx
  int v5; // ebp
  CommandClass *v6; // esi
  int result; // eax
  char v8; // bl
  char v9; // al
  ShapeButtonClass *v10; // edi
  int *v11; // edi
  int v12; // eax
  ShapeButtonClass *v13; // eax
  int v15; // [esp+0h] [ebp-24h]
  char v16; // [esp+4h] [ebp-20h]
  int v17[6]; // [esp+8h] [ebp-1Ch] BYREF
  char v18; // [esp+20h] [ebp-4h]

  v6 = v3; /*0x6d04f9*/
  v8 = ObjectClass::ToggleSidebarDisplay((SidebarClass *)this, v4, v5, a2, v15, v16); /*0x6d0501*/
  if ( !v8 ) /*0x6d0505*/
    goto LABEL_19; /*0x6d0505*/
  v9 = v6[5457].__tail_0[0]; /*0x6d0513*/
  if ( v6[5353].__tail_0[1] ) /*0x6d050b*/
  {
    if ( v9 ) /*0x6d0521*/
    {
      CommandClass::BuildBar(v6); /*0x6d0525*/
      result = (*(int (__thiscall **)(CommandClass *, int))(*(_DWORD *)v6 + 56))(v6, 2); /*0x6d0530*/
      LOBYTE(result) = v8; /*0x6d0533*/
      return result; /*0x6d053a*/
    }
    (*(void (__thiscall **)(CommandClass *, GadgetClass *))(*(_DWORD *)v6 + 48))(v6, &stru_B0CC40); /*0x6d0546*/
    if ( &stru_B0CC40 ) /*0x6d0550*/
    {
      v17[1] = stru_B0CC40.Width; /*0x6d0567*/
      v17[2] = stru_B0CC40.Height; /*0x6d0571*/
      v17[3] = *(_DWORD *)&stru_B0CC40.Visible; /*0x6d057b*/
      v18 = 0; /*0x6d0586*/
      v17[0] = dword_B0CC64; /*0x6d058b*/
      v17[5] = (int)g_Str_Tip_ThumbClosed; /*0x6d058f*/
      v17[4] = stru_B0CC40.ID; /*0x6d0597*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], dword_B0CC64); /*0x6d059b*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)v17); /*0x6d05ab*/
      result = (*(int (__thiscall **)(CommandClass *, int))(*(_DWORD *)v6 + 56))(v6, 2); /*0x6d05b6*/
      LOBYTE(result) = v8; /*0x6d05b9*/
      return result; /*0x6d05c0*/
    }
    goto LABEL_18; /*0x6d0550*/
  }
  if ( !v9 ) /*0x6d05c5*/
  {
    (*(void (__thiscall **)(CommandClass *, GadgetClass *))(*(_DWORD *)v6 + 52))(v6, &stru_B0CC40); /*0x6d0656*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 241); /*0x6d0664*/
LABEL_18:
    result = (*(int (__thiscall **)(CommandClass *, int))(*(_DWORD *)v6 + 56))(v6, 2); /*0x6d0669*/
LABEL_19:
    LOBYTE(result) = v8; /*0x6d0672*/
    return result; /*0x6d0672*/
  }
  v10 = &stru_B0C1C0; /*0x6d05cc*/
  do /*0x6d05e2*/
  {
    (*(void (__thiscall **)(CommandClass *, ShapeButtonClass *))(*(_DWORD *)v6 + 52))(v6, v10); /*0x6d05d6*/
    v10 += 8; /*0x6d05d9*/
  }
  while ( (int)v10 < (int)&dword_B0CB20 ); /*0x6d05e2*/
  (*(void (__thiscall **)(CommandClass *, GadgetClass *, int))(*(_DWORD *)v6 + 52))(v6, &stru_B0CCB0, a2); /*0x6d05ed*/
  v11 = g_ObjectTrackingPool; /*0x6d05f0*/
  do /*0x6d0627*/
  {
    v12 = *v11; /*0x6d05f5*/
    if ( *v11 >= 0 && v12 < 25 ) /*0x6d05fe*/
    {
      v13 = &stru_B0C1C0 + 8 * v12; /*0x6d0606*/
      if ( v13 ) /*0x6d060d*/
        HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], *(_DWORD *)v13[3].__pad_0); /*0x6d0619*/
    }
    ++v11; /*0x6d061e*/
  }
  while ( (int)v11 < (int)byte_B0CBDC ); /*0x6d0627*/
  HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 240); /*0x6d0634*/
  result = (*(int (__thiscall **)(CommandClass *, int))(*(_DWORD *)v6 + 56))(v6, 2); /*0x6d0640*/
  LOBYTE(result) = v8; /*0x6d0643*/
  return result; /*0x6d0535*/
}



// ==== 0x006D0680  TabClass::Seek  this=TabClass  sig=csp ====
int __thiscall BlowStraw_29::Seek(TabClass *this, int *a2, _DWORD *a3)
{
  int v4; // edx
  int v5; // eax
  int TabClass_field_0x0; // eax
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  ShapeButtonClass *v12; // eax
  char *v13; // edi
  int i; // edi
  char *FontClassEntry; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  TechnoClass *v21; // [esp+0h] [ebp-10h]

  v4 = *((_DWORD *)this + 5454); /*0x6d068b*/
  v5 = *((_DWORD *)this + 5456); /*0x6d0691*/
  if ( v4 != -1 ) /*0x6d069a*/
  {
    if ( (int)dword_A8ED84 - v4 >= v5 ) /*0x6d06a6*/
      goto LABEL_6; /*0x6d06a6*/
    v5 -= (int)dword_A8ED84 - v4; /*0x6d06a8*/
  }
  if ( v5 == 1 ) /*0x6d06ac*/
  {
    TabClass_field_0x0 = this->TabClass_field_0x0; /*0x6d06ae*/
    *((_BYTE *)this + 21829) = 1; /*0x6d06b4*/
    (*(void (__thiscall **)(TabClass *, _DWORD))(TabClass_field_0x0 + 56))(this, 0); /*0x6d06ba*/
  }
LABEL_6:
  v7 = *((_DWORD *)dword_B0FC58 + 1); /*0x6d06bd*/
  if ( *a3 >= *(_DWORD *)dword_B0FC58 && *a3 < *(_DWORD *)dword_B0FC58 + dword_886FA8 ) /*0x6d06dd*/
  {
    v8 = a3[1]; /*0x6d06df*/
    if ( v8 >= v7 && v8 < v7 + 30 ) /*0x6d06f2*/
      Mouse::SetCursor((int)&dword_87F7E8, 0, 0); /*0x6d06fd*/
  }
  v9 = *a2; /*0x6d0706*/
  if ( *a2 < 32982 || v9 >= 33007 ) /*0x6d0718*/
  {
    if ( v9 == 33008 ) /*0x6d0842*/
    {
      PlayVocClass(dword_8871E0->UpgradeVeteranSound, 0x2000, 1.0, 0); /*0x6d0860*/
      if ( *((_BYTE *)this + 21828) ) /*0x6d0865*/
      {
        SidebarUpdateAll((ObjectClass *)this); /*0x6d0875*/
        (*(void (__thiscall **)(TabClass *, GadgetClass *))(this->TabClass_field_0x0 + 52))(this, &stru_B0CCB0); /*0x6d0883*/
        for ( i = 0; i < 25; ++i ) /*0x6d0886*/
        {
          FontClassEntry = GetFontClassEntry(i); /*0x6d088a*/
          if ( FontClassEntry ) /*0x6d0891*/
            HashTable::Remove((HashTable *)dword_887368, *((_DWORD *)FontClassEntry + 9)); /*0x6d089d*/
        }
        HashTable::Remove((HashTable *)dword_887368, 240); /*0x6d08b3*/
        v16 = this->TabClass_field_0x0; /*0x6d08b8*/
        *((_BYTE *)this + 21828) = 0; /*0x6d08c1*/
        (*(void (__thiscall **)(TabClass *, GadgetClass *))(v16 + 48))(this, &stru_B0CC40); /*0x6d08c8*/
        PushCommandClass::Execute(&stru_B0CC40, (int)g_Str_Tip_ThumbClosed); /*0x6d08d5*/
        v17 = this->TabClass_field_0x0; /*0x6d08da*/
        *((_BYTE *)this + 21829) = 1; /*0x6d08e0*/
        (*(void (__thiscall **)(TabClass *, _DWORD))(v17 + 56))(this, 0); /*0x6d08e6*/
      }
    }
    else if ( v9 == 33009 ) /*0x6d08f3*/
    {
      if ( !dword_A8B538[0] ) /*0x6d08fc*/
      {
        PlayVocClass(dword_8871E0->SpySatDeactivationSound, 0x2000, 1.0, 0); /*0x6d091a*/
        if ( !*((_BYTE *)this + 21828) ) /*0x6d091f*/
        {
          (*(void (__thiscall **)(TabClass *, GadgetClass *))(this->TabClass_field_0x0 + 52))(this, &stru_B0CC40); /*0x6d0932*/
          HashTable::Remove((HashTable *)dword_887368, 241); /*0x6d0940*/
          *((_BYTE *)this + 21828) = 1; /*0x6d0947*/
          CommandClass::BuildBar((CommandClass *)this); /*0x6d094d*/
          v18 = this->TabClass_field_0x0; /*0x6d0952*/
          *((_BYTE *)this + 21829) = 1; /*0x6d0958*/
          (*(void (__thiscall **)(TabClass *, _DWORD))(v18 + 56))(this, 0); /*0x6d095e*/
        }
      }
    }
    else if ( v9 >= 49366 && v9 < 49391 ) /*0x6d096f*/
    {
      BYTE1(v9) &= 0x3Fu; /*0x6d0977*/
      v19 = v9 - 214; /*0x6d097a*/
      if ( v19 >= dword_B0CC20 && v19 <= dword_B0CD28 ) /*0x6d0989*/
        SidebarClearReferences((char *)(v19 - dword_B0CC20 + 1)); /*0x6d0990*/
    }
  }
  else
  {
    BYTE1(v9) &= ~0x80u; /*0x6d0724*/
    v10 = v9 - 214; /*0x6d0727*/
    if ( v10 == dword_B0CD24 ) /*0x6d072e*/
    {
      BlowStraw_29_Get(v21); /*0x6d0730*/
    }
    else if ( v10 == dword_B0CB3C ) /*0x6d0740*/
    {
      UI_Create_731A30(); /*0x6d0742*/
    }
    else if ( v10 == dword_B0C1B8 ) /*0x6d0752*/
    {
      UI_Create_730F30(v21); /*0x6d0754*/
    }
    else if ( v10 == dword_B0CB20 ) /*0x6d0764*/
    {
      ProcessSelectionExperience(v21); /*0x6d0766*/
    }
    else if ( v10 == dword_B0CB68 ) /*0x6d0776*/
    {
      GetFactoryData(v21); /*0x6d0778*/
    }
    else if ( v10 == dword_B0CC1C ) /*0x6d078a*/
    {
      v11 = g_ObjectTrackingPool[dword_B0CC1C]; /*0x6d078c*/
      if ( v11 > 0x18 ) /*0x6d0795*/
        v12 = 0; /*0x6d07a9*/
      else
        v12 = &stru_B0C1C0 + 8 * v11; /*0x6d07a2*/
      if ( BYTE1(v12[3].ShapeButtonClass_field_0x08) ) /*0x6d07ab*/
        UI_Create_731A50(1); /*0x6d07b4*/
      else
        UI_Create_731A70(1); /*0x6d07be*/
    }
    else if ( v10 == dword_B0CB6C ) /*0x6d07ce*/
    {
      UI_Create_730EA0(); /*0x6d07d0*/
    }
    else if ( v10 < dword_B0CC20 || v10 > dword_B0CD28 ) /*0x6d07ea*/
    {
      if ( v10 == dword_B0CB38 ) /*0x6d082d*/
        SelectAllOfType(v21); /*0x6d0833*/
    }
    else
    {
      v13 = (char *)(v10 - dword_B0CC20 + 1); /*0x6d07ef*/
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
  CountdownTimer::UpdateDisplay((CountdownTimer *)this + 5447, 0); /*0x6d099d*/
  return SidebarClass::UpdateStrips((SidebarClass *)this, a2, a3); /*0x6d09af*/
}



// ==== 0x006D09C0  PushCommandClass::Execute  this=GadgetClass  sig=csp ====
int __fastcall PushCommandClass::Execute(_DWORD *a1, int a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int result; // eax
  int v6[6]; // [esp+0h] [ebp-1Ch] BYREF
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
    HashTable::Remove((int *)dword_887368, v2); /*0x6d09fa*/
    return CommandClass::AddAction((int)dword_887368, (int)v6); /*0x6d0a0a*/
  }
  return result; /*0x6d0a0f*/
}



// ==== 0x006D0A20  TabClass::DrawTabs  this=TabClass  sig=csp ====
int __thiscall SidebarClass::DrawTabs(TabClass *this, char a2)
{
  int v2; // edi
  char v4; // bl
  int *v5; // ecx
  int v6; // eax
  ShapeButtonClass *v7; // eax
  int *v8; // eax
  int v9; // edx
  int v10; // esi
  int v11; // ecx
  int v12; // eax
  AudioStream **v13; // ecx
  int v14; // esi
  int *v15; // eax
  int *v16; // eax
  AudioStream *v17; // edi
  TabClass *v18; // esi
  int v19; // esi
  int *v20; // ebx
  int v21; // eax
  ShapeButtonClass *v22; // esi
  GadgetClass *v23; // ecx
  int v24; // eax
  int v25; // ecx
  _DWORD *v26; // eax
  int v27; // ecx
  char v29; // [esp+0h] [ebp-4Ch]
  int v31; // [esp+14h] [ebp-38h] BYREF
  int i; // [esp+18h] [ebp-34h]
  int v33; // [esp+1Ch] [ebp-30h] BYREF
  int v34; // [esp+20h] [ebp-2Ch]
  int v35; // [esp+24h] [ebp-28h]
  int v36; // [esp+28h] [ebp-24h]
  int v37[2]; // [esp+2Ch] [ebp-20h] BYREF
  int v38; // [esp+34h] [ebp-18h]
  int v39; // [esp+38h] [ebp-14h]
  char v40[16]; // [esp+3Ch] [ebp-10h] BYREF

  if ( (byte_B0CB58 & 1) == 0 ) /*0x6d0a34*/
  {
    byte_B0CB58 |= 1u; /*0x6d0a42*/
    dword_B0CBF8 = 0; /*0x6d0a48*/
    dword_B0CBFC = 0; /*0x6d0a4e*/
    atexit(nullsub_236); /*0x6d0a54*/
  }
  if ( !a2 && !*((_BYTE *)this + 21829) ) /*0x6d0a6c*/
  {
    v4 = 0; /*0x6d0a7a*/
    v5 = g_ObjectTrackingPool; /*0x6d0a7c*/
    while ( 1 ) /*0x6d0a81*/
    {
      v6 = *v5; /*0x6d0a81*/
      if ( *v5 >= 0 && v6 < 25 ) /*0x6d0a8a*/
      {
        v7 = &stru_B0C1C0 + 8 * v6; /*0x6d0a92*/
        if ( v7 ) /*0x6d0a99*/
        {
          if ( v7[7].__pad_0[0] ) /*0x6d0a9b*/
            break; /*0x6d0a9b*/
        }
      }
      if ( (int)++v5 >= (int)byte_B0CBDC ) /*0x6d0aab*/
      {
        v8 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)stru_887598.lineTrailer + 52))( /*0x6d0aba*/
                      stru_887598.lineTrailer,
                      &v31);
        v9 = *v8; /*0x6d0abd*/
        v10 = v8[1]; /*0x6d0abf*/
        if ( *v8 < **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1192] /*0x6d0ae4*/
          || (v2 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1192]
                 + *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1192] + 8),
              v9 >= v2)
          || (v11 = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1192] + 4), v10 < v11)
          || v10 >= v11 + *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1192] + 12) )
        {
          if ( byte_B0CD40 ) /*0x6d0b13*/
            v4 = 1; /*0x6d0b15*/
          byte_B0CD40 = 0; /*0x6d0b17*/
        }
        else
        {
          byte_B0CD40 = 1; /*0x6d0aeb*/
          if ( v9 != dword_B0CBF8 || v10 != dword_B0CBFC ) /*0x6d0afc*/
            v4 = 1; /*0x6d0afe*/
        }
        dword_B0CBF8 = v9; /*0x6d0b20*/
        dword_B0CBFC = v10; /*0x6d0b26*/
        if ( v4 ) /*0x6d0b2c*/
        {
          dword_B0CD44 = 0; /*0x6d0b2e*/
        }
        else
        {
          v12 = 0; /*0x6d0b3c*/
          if ( dword_B0CD44 <= 0 ) /*0x6d0b40*/
          {
LABEL_28:
            v4 = 1; /*0x6d0b59*/
          }
          else
          {
            v13 = (AudioStream **)&dword_B0CC00; /*0x6d0b48*/
            while ( *v13 != g_DSurface_Hidden_2 ) /*0x6d0b4f*/
            {
              ++v12; /*0x6d0b51*/
              ++v13; /*0x6d0b52*/
              if ( v12 >= dword_B0CD44 ) /*0x6d0b57*/
                goto LABEL_28; /*0x6d0b57*/
            }
          }
        }
        goto LABEL_29; /*0x6d0b34*/
      }
    }
  }
  v4 = 1; /*0x6d0b02*/
  dword_B0CD44 = 0; /*0x6d0b04*/
LABEL_29:
  if ( !stru_A8EB00.?[391] ) /*0x6d0b62*/
  {
    v14 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[856]; /*0x6d0b75*/
    v31 = 0; /*0x6d0b84*/
    i = 0; /*0x6d0b88*/
    v15 = (int *)(*((int (__thiscall **)(DSurface *, int *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x6d0b95*/
                   DSurface_Sidebar,
                   v37);
    DrawToSurfaceSHP( /*0x6d0bac*/
      (int)DSurface_Sidebar,
      *(int *)&stru_87F5F0.__pad_58[132],
      v14,
      0,
      &v31,
      v15,
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
    g_TooltipActive = 1; /*0x6d0bb7*/
    DrawSidebarCreditsTimer((ObjectClass *)1, v2, v29); /*0x6d0bc4*/
    if ( v4 ) /*0x6d0bcb*/
    {
      v16 = (int *)(*(int (__thiscall **)(AudioStream *, char *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x6d0bde*/
                     g_DSurface_Hidden_2,
                     v40);
      v33 = *v16; /*0x6d0be3*/
      v34 = v16[1]; /*0x6d0bea*/
      v35 = v16[2]; /*0x6d0bf1*/
      v36 = v16[3]; /*0x6d0bfd*/
      v31 = 0; /*0x6d0c01*/
      i = 0; /*0x6d0c05*/
      v31 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1192]; /*0x6d0c0b*/
      i = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1192] + 4); /*0x6d0c12*/
      v37[0] = v33; /*0x6d0c16*/
      v37[1] = v34; /*0x6d0c1a*/
      v38 = v35; /*0x6d0c1e*/
      v39 = v36; /*0x6d0c22*/
      v38 = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1192] + 8); /*0x6d0c29*/
      v17 = g_DSurface_Hidden_2; /*0x6d0c3b*/
      DrawToSurfaceSHP( /*0x6d0c5f*/
        (int)g_DSurface_Hidden_2,
        *(int *)&stru_87F5F0.__pad_58[132],
        *(int *)&g_BuildingLoadQueue_Array.__pad_F70[652],
        0,
        &v31,
        v37,
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
      v18 = this; /*0x6d0c64*/
      if ( *((_BYTE *)this + 21828) ) /*0x6d0c68*/
      {
        v31 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1200]; /*0x6d0c79*/
        i = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1200] + 4); /*0x6d0c80*/
      }
      else
      {
        v31 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1204]; /*0x6d0c8d*/
        i = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1204] + 4); /*0x6d0c94*/
      }
      DrawToSurfaceSHP( /*0x6d0cc4*/
        (int)v17,
        *(int *)&stru_87F5F0.__pad_58[132],
        *(int *)&g_BuildingLoadQueue_Array.__pad_F70[736],
        0,
        &v31,
        &v33,
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
      if ( *((_BYTE *)this + 21828) ) /*0x6d0cc9*/
      {
        v19 = 0; /*0x6d0ce2*/
        v31 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1208]; /*0x6d0ce6*/
        for ( i = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1192] + 4); /*0x6d0cf8*/
              v19 < *(int *)&g_BuildingLoadQueue_Array.__pad_F70[564];
              v31 += *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1208] + 8) )
        {
          DrawToSurfaceSHP( /*0x6d0d2b*/
            (int)v17,
            *(int *)&stru_87F5F0.__pad_58[132],
            *(int *)&g_BuildingLoadQueue_Array.__pad_F70[760],
            0,
            &v31,
            &v33,
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
          ++v19; /*0x6d0d3f*/
        }
        v20 = g_ObjectTrackingPool; /*0x6d0d4f*/
        do /*0x6d0d8a*/
        {
          v21 = *v20; /*0x6d0d54*/
          if ( *v20 >= 0 && v21 < 25 ) /*0x6d0d5d*/
          {
            v22 = &stru_B0C1C0 + 8 * v21; /*0x6d0d65*/
            if ( v22 ) /*0x6d0d6d*/
            {
              if ( v22[7].ShapeButtonClass_field_0x04 ) /*0x6d0d6f*/
              {
                (*(void (__thiscall **)(ShapeButtonClass *, int))(*(_DWORD *)v22->__pad_0 + 108))(v22, 1); /*0x6d0d7a*/
                v22[7].__pad_0[0] = 0; /*0x6d0d7d*/
              }
            }
          }
          ++v20; /*0x6d0d81*/
        }
        while ( (int)v20 < (int)byte_B0CBDC ); /*0x6d0d8a*/
        v18 = this; /*0x6d0d8c*/
      }
      v31 = **(_DWORD **)&g_BuildingLoadQueue_Array.__pad_F70[1212]; /*0x6d0db2*/
      DrawToSurfaceSHP( /*0x6d0dc8*/
        (int)v17,
        *(int *)&stru_87F5F0.__pad_58[132],
        *(int *)&g_BuildingLoadQueue_Array.__pad_F70[780],
        0,
        &v31,
        &v33,
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
      v23 = &stru_B0CCB0; /*0x6d0dd7*/
      if ( !v18[237].__pad_18[0] ) /*0x6d0dcd*/
        v23 = &stru_B0CC40; /*0x6d0dde*/
      ShapeButton::Draw((ShapeButtonClass *)v23, 1); /*0x6d0de3*/
      v18[237].__pad_18[2] = 1; /*0x6d0de8*/
      v18[237].__pad_18[1] = 0; /*0x6d0def*/
      v24 = dword_B0CD44; /*0x6d0df6*/
      if ( (unsigned int)dword_B0CD44 < 4 ) /*0x6d0dfe*/
        v24 = ++dword_B0CD44; /*0x6d0e00*/
      v25 = v24 - 2; /*0x6d0e06*/
      if ( v24 - 2 >= 0 ) /*0x6d0e0b*/
      {
        v26 = (_DWORD *)(4 * v25 + 11586564); /*0x6d0e0d*/
        v27 = v25 + 1; /*0x6d0e14*/
        do /*0x6d0e1e*/
        {
          *v26 = *(v26 - 1); /*0x6d0e18*/
          --v26; /*0x6d0e1a*/
          --v27; /*0x6d0e1d*/
        }
        while ( v27 ); /*0x6d0e1e*/
      }
      dword_B0CC00 = (int)v17; /*0x6d0e20*/
    }
    else
    {
      *((_BYTE *)this + 21830) = 0; /*0x6d0e28*/
    }
  }
  return SidebarClass::Redraw((SidebarClass *)this, a2); /*0x6d0e3d*/
}



// ==== 0x006D0E50  nullsub_236  this=-  sig=ida-proto ====
void __cdecl nullsub_236()
{
  ; /*0x6d0e50*/
}



// ==== 0x006D0E60  ObjectClass::UI_Draw_6D0E60  this=ObjectClass  sig=csp ====
void UI_Draw_6D0E60(ObjectClass *this)
{
  int v1; // esi
  int *v2; // eax
  int v3[2]; // [esp+4h] [ebp-18h] BYREF
  _BYTE v4[16]; // [esp+Ch] [ebp-10h] BYREF

  v1 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[856]; /*0x6d0e73*/
  v3[0] = 0; /*0x6d0e7b*/
  v3[1] = 0; /*0x6d0e7f*/
  v2 = (int *)(*((int (__thiscall **)(DSurface *, _BYTE *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x6d0e91*/
                DSurface_Sidebar,
                v4);
  DrawToSurfaceSHP( /*0x6d0ea9*/
    (int)DSurface_Sidebar,
    *(int *)&stru_87F5F0.__pad_58[132],
    v1,
    0,
    v3,
    v2,
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
  g_TooltipActive = 1; /*0x6d0eae*/
}



// ==== 0x006D0EC0  HouseClass::updateFactoryQueue  this=HouseClass  sig=csp ====
wchar_t *__thiscall HouseClass::updateFactoryQueue(HouseClass *this)
{
  HouseClass *v1; // esi
  void (__stdcall **vtable0)(_DWORD); // eax
  wchar_t *result; // eax
  void *v4; // [esp+8h] [ebp-8h]

  v1 = this; /*0x6d0ec4*/
  vtable0 = (void (__stdcall **)(_DWORD))this->AbstractClass; /*0x6d0ec8*/
  BYTE1(this->ownedBuildingTypes2[1]) = 1; /*0x6d0eca*/
  vtable0[14](0); /*0x6d0ed1*/
  result = *(wchar_t **)&stru_A8EB00.?[416]; /*0x6d0ed4*/
  v1 = (HouseClass *)((char *)v1 + 21816); /*0x6d0edd*/
  v1->AbstractClass = *(void **)&stru_A8EB00.?[416]; /*0x6d0ee8*/
  v1->? = v4; /*0x6d0eea*/
  v1->? = (void *)7; /*0x6d0eed*/
  return result; /*0x6d0ef0*/
}



// ==== 0x006D0F00  ObjectClass::PreDraw  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::PreDraw(ObjectClass *this)
{
  int (__stdcall **vtable0)(_DWORD); // eax

  vtable0 = (int (__stdcall **)(_DWORD))this->AbstractClass; /*0x6d0f00*/
  *((_BYTE *)this + 21829) = 1; /*0x6d0f04*/
  return vtable0[14](0); /*0x6d0f0e*/
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
  v1 = dword_B0C148; /*0x6d0f1f*/
  do /*0x6d0f5a*/
  {
    sprintf(Buffer, "Button%02d.SHP", v0); /*0x6d0f2f*/
    result = LoadFileSHP(Buffer, &v4); /*0x6d0f3f*/
    v3 = v4; /*0x6d0f44*/
    *v1 = (int)result; /*0x6d0f48*/
    byte_B0CBDC[v0] = v3; /*0x6d0f4a*/
    ++v1; /*0x6d0f50*/
    ++v0; /*0x6d0f53*/
  }
  while ( (int)v1 < (int)&byte_B0C1AC ); /*0x6d0f5a*/
  return result; /*0x6d0f5c*/
}



// ==== 0x006D0FB0  sub_6D0FB0  this=-  sig=ida-proto ====
int __fastcall sub_6D0FB0(int a1, int a2, int a3)
{
  *(_DWORD *)(a1 + 36) = a2; /*0x6d0fb0*/
  *(_DWORD *)(a1 + 80) = dword_87F6CC; /*0x6d0fbc*/
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

  v0 = (int *)&stru_B0C1C0; /*0x6d0fd4*/
  do /*0x6d0fef*/
  {
    ShapeButton::SetShape((int)v0, 0, 0, 0); /*0x6d0fe1*/
    v0 += 24; /*0x6d0fe6*/
  }
  while ( (int)v0 < (int)&dword_B0CB20 ); /*0x6d0fef*/
  v1 = 0; /*0x6d0ffc*/
  v2 = *((_DWORD *)dword_B0FC64 + 2) + *(_DWORD *)dword_B0FC64; /*0x6d100b*/
  do /*0x6d10a6*/
  {
    v3 = g_ObjectTrackingPool[v1]; /*0x6d1012*/
    if ( v3 <= 0x18 ) /*0x6d101b*/
    {
      v4 = (char *)&stru_B0C1C0 + 96 * v3; /*0x6d102c*/
      if ( v4 ) /*0x6d1034*/
      {
        v5 = *(_DWORD *)dword_B0FC68 + dword_B0CC38 * v3; /*0x6d1045*/
        v6 = dword_B0CC24; /*0x6d1047*/
        if ( v5 + *((_DWORD *)dword_B0FC68 + 2) <= v2 ) /*0x6d1062*/
        {
          *((_DWORD *)v4 + 9) = v1 + 214; /*0x6d106c*/
          *((_DWORD *)v4 + 20) = dword_87F6CC; /*0x6d1075*/
          v4[45] = 0; /*0x6d1078*/
          *((_DWORD *)v4 + 12) = 0; /*0x6d107b*/
          *((_DWORD *)v4 + 8) = 5; /*0x6d107e*/
          (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)v4 + 100))(v4, v5, v6); /*0x6d108b*/
          (*(void (__thiscall **)(char *, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 136))(v4, dword_B0C148[v1], 0, 0); /*0x6d109c*/
        }
      }
    }
    ++v1; /*0x6d10a2*/
  }
  while ( v1 < 25 ); /*0x6d10a6*/
  v7 = g_ObjectTrackingPool[dword_B0CC1C]; /*0x6d10b5*/
  if ( v7 <= 0x18 ) /*0x6d10be*/
  {
    v8 = (char *)&stru_B0C1C0 + 96 * v7; /*0x6d10cb*/
    if ( v8 ) /*0x6d10d2*/
    {
      *((_DWORD *)v8 + 12) = 1; /*0x6d10d9*/
      v8[64] = 1; /*0x6d10dc*/
    }
  }
  v9 = dword_B0CC20; /*0x6d10df*/
  result = dword_B0CD28; /*0x6d10e5*/
  if ( dword_B0CC20 <= dword_B0CD28 ) /*0x6d10ec*/
  {
    v11 = (int *)(4 * dword_B0CC20 + 11586424); /*0x6d10ee*/
    do /*0x6d1122*/
    {
      v12 = *v11; /*0x6d10fa*/
      if ( *v11 >= 0 && v12 < 25 ) /*0x6d1103*/
      {
        v13 = (char *)&stru_B0C1C0 + 96 * v12; /*0x6d110b*/
        if ( v13 ) /*0x6d1112*/
          *((_DWORD *)v13 + 8) = 85; /*0x6d1114*/
      }
      result = dword_B0CD28; /*0x6d1117*/
      ++v9; /*0x6d111c*/
      ++v11; /*0x6d111d*/
    }
    while ( v9 <= dword_B0CD28 ); /*0x6d1122*/
  }
  return result; /*0x6d1124*/
}



// ==== 0x006D1130  sub_6D1130  this=-  sig=ida-proto ====
int sub_6D1130()
{
  void *v0; // esi

  dword_B0CCD4 = 240; /*0x6d1149*/
  dword_B0CD00 = dword_87F6CC; /*0x6d1153*/
  byte_B0CCDD = 0; /*0x6d1158*/
  dword_B0CCE0 = 0; /*0x6d115e*/
  dword_B0CCD0 = 5; /*0x6d1164*/
  v0 = dword_B0FA90; /*0x6d116c*/
  Rect_Point::Set(stru_B0CCB0, *(_DWORD *)dword_B0FC60, *((_DWORD *)dword_B0FC60 + 1)); /*0x6d118a*/
  ShapeButton::SetShape((int)stru_B0CCB0, (int)v0, 0, 0); /*0x6d1197*/
  dword_B0CC64 = 241; /*0x6d11a7*/
  dword_B0CC90 = dword_87F6CC; /*0x6d11b1*/
  byte_B0CC6D = 0; /*0x6d11b6*/
  dword_B0CC70 = 0; /*0x6d11bc*/
  dword_B0CC60 = 5; /*0x6d11c2*/
  Rect_Point::Set(stru_B0CC40, *(_DWORD *)dword_B0FC64, *((_DWORD *)dword_B0FC64 + 1)); /*0x6d11e2*/
  return ShapeButton::SetShape((int)stru_B0CC40, (int)v0, 0, 0); /*0x6d11f4*/
}



// ==== 0x006D1200  CommandClass::BuildBar  this=CommandClass  sig=csp ====
int __thiscall CommandClass::BuildBar(CommandClass *this)
{
  ShapeButtonClass *v2; // esi
  unsigned int v3; // eax
  ShapeButtonClass *v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int ShapeButtonClass_field_0x08; // edx
  unsigned int v9; // eax
  ShapeButtonClass *v10; // esi
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // eax
  ShapeButtonClass *v16; // esi
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  unsigned int v21; // eax
  ShapeButtonClass *v22; // esi
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  unsigned int v27; // eax
  ShapeButtonClass *v28; // ecx
  unsigned int v29; // eax
  ShapeButtonClass *v30; // ecx
  char *FontClassEntry; // eax
  char *v32; // eax
  char *v33; // eax
  char *v34; // eax
  char *v35; // eax
  Struct v37; // [esp+8h] [ebp-1Ch] BYREF
  int v38; // [esp+Ch] [ebp-18h]
  int ShapeButtonClass_field_0x04; // [esp+10h] [ebp-14h]
  int v40; // [esp+14h] [ebp-10h]
  int v41; // [esp+18h] [ebp-Ch]
  char *v42; // [esp+1Ch] [ebp-8h]

  v2 = &stru_B0C1C0; /*0x6d1207*/
  do /*0x6d1224*/
  {
    (*(void (__thiscall **)(ShapeButtonClass *))(*(_DWORD *)v2->__pad_0 + 32))(v2); /*0x6d1210*/
    (*(void (__thiscall **)(CommandClass *, ShapeButtonClass *))(*(_DWORD *)this + 48))(this, v2); /*0x6d1218*/
    v2 += 8; /*0x6d121b*/
  }
  while ( (int)v2 < (int)&dword_B0CB20 ); /*0x6d1224*/
  (*(void (__thiscall **)(CommandClass *, GadgetClass *))(*(_DWORD *)this + 48))(this, &stru_B0CCB0); /*0x6d122f*/
  v3 = g_ObjectTrackingPool[dword_B0CD24]; /*0x6d1238*/
  if ( v3 <= 0x18 ) /*0x6d1241*/
  {
    v4 = &stru_B0C1C0 + 8 * v3; /*0x6d124e*/
    if ( v4 ) /*0x6d1256*/
    {
      Struct::Zero25(&v37); /*0x6d125c*/
      v5 = *(_DWORD *)v4[1].__pad_0; /*0x6d1264*/
      v6 = *(_DWORD *)v4[3].__pad_0; /*0x6d1267*/
      ShapeButtonClass_field_0x04 = v4[1].ShapeButtonClass_field_0x04; /*0x6d126a*/
      v7 = *(_DWORD *)v4[2].__pad_0; /*0x6d126e*/
      v38 = v5; /*0x6d1271*/
      ShapeButtonClass_field_0x08 = v4[1].ShapeButtonClass_field_0x08; /*0x6d1275*/
      v41 = v7; /*0x6d1278*/
      v37.Struct_field_00 = v6; /*0x6d1283*/
      v42 = aTipAttackmove; /*0x6d1287*/
      v40 = ShapeButtonClass_field_0x08; /*0x6d128f*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], v6); /*0x6d1293*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v37); /*0x6d12a3*/
    }
  }
  v9 = g_ObjectTrackingPool[dword_B0CB3C]; /*0x6d12ad*/
  if ( v9 <= 0x18 ) /*0x6d12b6*/
  {
    v10 = &stru_B0C1C0 + 8 * v9; /*0x6d12c3*/
    if ( v10 ) /*0x6d12cb*/
    {
      Struct::Zero25(&v37); /*0x6d12d1*/
      v11 = v10[1].ShapeButtonClass_field_0x04; /*0x6d12d9*/
      v12 = *(_DWORD *)v10[3].__pad_0; /*0x6d12dc*/
      v38 = *(_DWORD *)v10[1].__pad_0; /*0x6d12df*/
      v13 = v10[1].ShapeButtonClass_field_0x08; /*0x6d12e3*/
      ShapeButtonClass_field_0x04 = v11; /*0x6d12e6*/
      v14 = *(_DWORD *)v10[2].__pad_0; /*0x6d12ea*/
      v40 = v13; /*0x6d12ed*/
      v37.Struct_field_00 = v12; /*0x6d12f8*/
      v42 = aTipBeacon; /*0x6d12fc*/
      v41 = v14; /*0x6d1304*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], v12); /*0x6d1308*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v37); /*0x6d1318*/
    }
  }
  v15 = g_ObjectTrackingPool[dword_B0C1B8]; /*0x6d1323*/
  if ( v15 <= 0x18 ) /*0x6d132c*/
  {
    v16 = &stru_B0C1C0 + 8 * v15; /*0x6d1339*/
    if ( v16 ) /*0x6d1341*/
    {
      Struct::Zero25(&v37); /*0x6d1347*/
      v17 = *(_DWORD *)v16[1].__pad_0; /*0x6d134f*/
      v18 = *(_DWORD *)v16[3].__pad_0; /*0x6d1352*/
      ShapeButtonClass_field_0x04 = v16[1].ShapeButtonClass_field_0x04; /*0x6d1355*/
      v19 = *(_DWORD *)v16[2].__pad_0; /*0x6d1359*/
      v38 = v17; /*0x6d135c*/
      v20 = v16[1].ShapeButtonClass_field_0x08; /*0x6d1360*/
      v41 = v19; /*0x6d1363*/
      v37.Struct_field_00 = v18; /*0x6d136e*/
      v42 = aTipCheer; /*0x6d1372*/
      v40 = v20; /*0x6d137a*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], v18); /*0x6d137e*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v37); /*0x6d138e*/
    }
  }
  v21 = g_ObjectTrackingPool[dword_B0CB20]; /*0x6d1398*/
  if ( v21 <= 0x18 ) /*0x6d13a1*/
  {
    v22 = &stru_B0C1C0 + 8 * v21; /*0x6d13ae*/
    if ( v22 ) /*0x6d13b6*/
    {
      Struct::Zero25(&v37); /*0x6d13bc*/
      v23 = v22[1].ShapeButtonClass_field_0x04; /*0x6d13c4*/
      v24 = *(_DWORD *)v22[3].__pad_0; /*0x6d13c7*/
      v38 = *(_DWORD *)v22[1].__pad_0; /*0x6d13ca*/
      v25 = v22[1].ShapeButtonClass_field_0x08; /*0x6d13ce*/
      ShapeButtonClass_field_0x04 = v23; /*0x6d13d1*/
      v26 = *(_DWORD *)v22[2].__pad_0; /*0x6d13d5*/
      v40 = v25; /*0x6d13d8*/
      v37.Struct_field_00 = v24; /*0x6d13e3*/
      v42 = aTipDeploy; /*0x6d13e7*/
      v41 = v26; /*0x6d13ef*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], v24); /*0x6d13f3*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v37); /*0x6d1403*/
    }
  }
  v27 = g_ObjectTrackingPool[dword_B0CB68]; /*0x6d1410*/
  if ( v27 > 0x18 ) /*0x6d1419*/
    v28 = 0; /*0x6d142e*/
  else
    v28 = &stru_B0C1C0 + 8 * v27; /*0x6d1426*/
  PushCommandClass::Execute(v28, (int)aTipGuard); /*0x6d1435*/
  v29 = g_ObjectTrackingPool[dword_B0CC1C]; /*0x6d1440*/
  if ( v29 > 0x18 ) /*0x6d1449*/
    v30 = 0; /*0x6d145e*/
  else
    v30 = &stru_B0C1C0 + 8 * v29; /*0x6d1456*/
  PushCommandClass::Execute(v30, (int)aTipPlanningmod); /*0x6d1465*/
  FontClassEntry = GetFontClassEntry(dword_B0CB6C); /*0x6d1470*/
  PushCommandClass::Execute(FontClassEntry, (int)aTipStop); /*0x6d147c*/
  v32 = GetFontClassEntry(dword_B0CC20); /*0x6d1487*/
  PushCommandClass::Execute(v32, (int)aTipTeam01); /*0x6d1493*/
  v33 = GetFontClassEntry(dword_B0CC28); /*0x6d149e*/
  PushCommandClass::Execute(v33, (int)aTipTeam02); /*0x6d14aa*/
  v34 = GetFontClassEntry(dword_B0CD28); /*0x6d14b5*/
  PushCommandClass::Execute(v34, (int)aTipTeam03); /*0x6d14c1*/
  v35 = GetFontClassEntry(dword_B0CB38); /*0x6d14cc*/
  PushCommandClass::Execute(v35, (int)aTipTypeselect); /*0x6d14d8*/
  return PushCommandClass::Execute(&stru_B0CCB0, (int)aTipThumbopen); /*0x6d14ec*/
}



// ==== 0x006D1570  ObjectClass::method_6D1570  this=ObjectClass  sig=csp ====
char __thiscall sub_6D1570(ObjectClass *this)
{
  char result; // al
  int v2[6]; // [esp+4h] [ebp-1Ch] BYREF
  char v3; // [esp+1Ch] [ebp-4h]

  result = (*((int (__thiscall **)(ObjectClass *, GadgetClass *))this->AbstractClass + 12))(this, &stru_B0CC40); /*0x6d157a*/
  if ( &stru_B0CC40 ) /*0x6d1584*/
  {
    v2[2] = stru_B0CC40.Height; /*0x6d1597*/
    v2[1] = stru_B0CC40.Width; /*0x6d15a1*/
    v2[4] = stru_B0CC40.ID; /*0x6d15ab*/
    v3 = 0; /*0x6d15b6*/
    v2[0] = dword_B0CC64; /*0x6d15bb*/
    v2[5] = (int)g_Str_Tip_ThumbClosed; /*0x6d15bf*/
    v2[3] = *(_DWORD *)&stru_B0CC40.Visible; /*0x6d15c7*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], dword_B0CC64); /*0x6d15cb*/
    return CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)v2); /*0x6d15db*/
  }
  return result; /*0x6d15e0*/
}



// ==== 0x006D1610  HouseClass::InitDefeatState  this=HouseClass  sig=csp ====
char __thiscall HouseClass::InitDefeatState(HouseClass *this)
{
  char result; // al
  char (__thiscall **vtable0)(HouseClass *, _DWORD); // edx

  result = this->ownedBuildingTypes2[1]; /*0x6d1613*/
  if ( !result ) /*0x6d161b*/
  {
    (*((void (__thiscall **)(HouseClass *, GadgetClass *))this->AbstractClass + 13))(this, &stru_B0CC40); /*0x6d1624*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 241); /*0x6d1632*/
    LOBYTE(this->ownedBuildingTypes2[1]) = 1; /*0x6d1639*/
    CommandClass::BuildBar((CommandClass *)this); /*0x6d1640*/
    vtable0 = (char (__thiscall **)(HouseClass *, _DWORD))this->AbstractClass; /*0x6d1645*/
    BYTE1(this->ownedBuildingTypes2[1]) = 1; /*0x6d164b*/
    return vtable0[14](this, 0); /*0x6d1652*/
  }
  return result; /*0x6d1655*/
}



// ==== 0x006D1660  ObjectClass::House_Play_6D1660  this=ObjectClass  sig=csp ====
char __usercall House_Play_6D1660@<al>(ObjectClass *this, int a2@<esi>)
{
  _BYTE *v2; // ecx
  _BYTE *v3; // edi
  char result; // al
  ShapeButtonClass *v5; // esi
  int *v6; // esi
  int v7; // eax
  ShapeButtonClass *v8; // eax
  int v9; // edx
  int v10; // edx
  int v12[6]; // [esp+Ch] [ebp-1Ch] BYREF
  char v13; // [esp+24h] [ebp-4h]

  v3 = v2; /*0x6d1664*/
  result = v2[21828]; /*0x6d1666*/
  if ( result ) /*0x6d166e*/
  {
    v5 = &stru_B0C1C0; /*0x6d1675*/
    do /*0x6d168b*/
    {
      (*(void (__thiscall **)(_BYTE *, ShapeButtonClass *))(*(_DWORD *)v3 + 52))(v3, v5); /*0x6d167f*/
      v5 += 8; /*0x6d1682*/
    }
    while ( (int)v5 < (int)&dword_B0CB20 ); /*0x6d168b*/
    (*(void (__thiscall **)(_BYTE *, GadgetClass *, int))(*(_DWORD *)v3 + 52))(v3, &stru_B0CCB0, a2); /*0x6d1696*/
    v6 = g_ObjectTrackingPool; /*0x6d1699*/
    do /*0x6d16d0*/
    {
      v7 = *v6; /*0x6d169e*/
      if ( *v6 >= 0 && v7 < 25 ) /*0x6d16a7*/
      {
        v8 = &stru_B0C1C0 + 8 * v7; /*0x6d16af*/
        if ( v8 ) /*0x6d16b6*/
          HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], *(_DWORD *)v8[3].__pad_0); /*0x6d16c2*/
      }
      ++v6; /*0x6d16c7*/
    }
    while ( (int)v6 < (int)byte_B0CBDC ); /*0x6d16d0*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 240); /*0x6d16dd*/
    v9 = *(_DWORD *)v3; /*0x6d16e2*/
    v3[21828] = 0; /*0x6d16eb*/
    (*(void (__thiscall **)(_BYTE *, GadgetClass *))(v9 + 48))(v3, &stru_B0CC40); /*0x6d16f2*/
    if ( &stru_B0CC40 ) /*0x6d16fd*/
    {
      v12[1] = stru_B0CC40.Width; /*0x6d1710*/
      v12[2] = stru_B0CC40.Height; /*0x6d171a*/
      v12[3] = *(_DWORD *)&stru_B0CC40.Visible; /*0x6d1724*/
      v13 = 0; /*0x6d172f*/
      v12[0] = dword_B0CC64; /*0x6d1734*/
      v12[5] = (int)g_Str_Tip_ThumbClosed; /*0x6d1738*/
      v12[4] = stru_B0CC40.ID; /*0x6d1740*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], dword_B0CC64); /*0x6d1744*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)v12); /*0x6d1754*/
    }
    v10 = *(_DWORD *)v3; /*0x6d1759*/
    v3[21829] = 1; /*0x6d175f*/
    return (*(char (__thiscall **)(_BYTE *, _DWORD))(v10 + 56))(v3, 0); /*0x6d1766*/
  }
  return result; /*0x6d1769*/
}



// ==== 0x006D1770  MouseClass::ToggleContextGadget  this=MouseClass  sig=csp ====
char __stdcall MouseClass::ToggleContextGadget(int a1, int a2)
{
  unsigned int v2; // eax
  ShapeButtonClass *v3; // ecx
  unsigned int v5; // eax
  ShapeButtonClass *v6; // ecx

  if ( a1 == 4551 ) /*0x6d1779*/
  {
    v2 = g_ObjectTrackingPool[dword_B0CC1C]; /*0x6d1780*/
    if ( v2 <= 0x18 ) /*0x6d1789*/
    {
      v3 = &stru_B0C1C0 + 8 * v2; /*0x6d1796*/
      if ( v3 ) /*0x6d179e*/
      {
        if ( !BYTE1(v3[3].ShapeButtonClass_field_0x08) ) /*0x6d17a0*/
          GadgetClass::Show((GadgetClass *)v3); /*0x6d17a7*/
      }
    }
    return 1; /*0x6d17ac*/
  }
  else if ( a1 == 4552 ) /*0x6d17b6*/
  {
    v5 = g_ObjectTrackingPool[dword_B0CC1C]; /*0x6d17be*/
    if ( v5 <= 0x18 ) /*0x6d17c7*/
    {
      v6 = &stru_B0C1C0 + 8 * v5; /*0x6d17d4*/
      if ( v6 ) /*0x6d17dc*/
      {
        if ( BYTE1(v6[3].ShapeButtonClass_field_0x08) ) /*0x6d17de*/
          GadgetClass::Hide((GadgetClass *)v6); /*0x6d17e5*/
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
int __stdcall CursorAnim::Load(TabClass *this)
{
  SidebarClass *v1; // ecx

  return (int)ObjectClass::GetTooltipText(v1, (int)this); /*0x6d180a*/
}



// ==== 0x006D1810  Struct::Zero25  this=Struct  sig=csp ====
_DWORD *__thiscall Struct::Zero25(Struct *this)
{
  this->Struct_field_00 = 0; /*0x6d1814*/
  *((_DWORD *)this + 1) = 0; /*0x6d1816*/
  *((_DWORD *)this + 2) = 0; /*0x6d1819*/
  *((_DWORD *)this + 3) = 0; /*0x6d181c*/
  *((_DWORD *)this + 4) = 0; /*0x6d181f*/
  *((_DWORD *)this + 5) = 0; /*0x6d1822*/
  *((_BYTE *)this + 24) = 0; /*0x6d1825*/
  return &this->Struct_field_00; /*0x6d1828*/
}



// ==== 0x006D1830  sub_6D1830  this=-  sig=ida-proto ====
void sub_6D1830()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6d183c*/
  dbl_B0CD78 = Math::Sqrt(v0 + v0); /*0x6d184e*/
}



// ==== 0x006D1860  sub_6D1860  this=-  sig=ida-proto ====
void sub_6D1860()
{
  dbl_B0CEB8 = dbl_B0CD78 / 60.0; /*0x6d186c*/
}



// ==== 0x006D1880  sub_6D1880  this=-  sig=ida-proto ====
void sub_6D1880()
{
  dbl_B0CEA0 = 1.0 / dbl_B0CEB8; /*0x6d188c*/
}



// ==== 0x006D18A0  sub_6D18A0  this=-  sig=ida-proto ====
void sub_6D18A0()
{
  dbl_B0CE98 = 0.0174532925199433 * 45.0; /*0x6d18ac*/
}



// ==== 0x006D18C0  sub_6D18C0  this=-  sig=ida-proto ====
void sub_6D18C0()
{
  dbl_B0CD88 = 0.0174532925199433 * 60.0; /*0x6d18cc*/
}



// ==== 0x006D18E0  sub_6D18E0  this=-  sig=ida-proto ====
void sub_6D18E0()
{
  dbl_B0CD50 = 0.0174532925199433 * 90.0; /*0x6d18ec*/
}



// ==== 0x006D1900  sub_6D1900  this=-  sig=ida-proto ====
__int64 sub_6D1900()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0CD50 - dbl_B0CD88); /*0x6d1912*/
  result = Math::RoundToInt(v0 * dbl_B0CD78 * 0.5); /*0x6d1926*/
  dword_B0CEC0 = result; /*0x6d192b*/
  return result; /*0x6d1930*/
}



// ==== 0x006D1940  sub_6D1940  this=-  sig=ida-proto ====
void sub_6D1940()
{
  dbl_B0CD90 = Math::ArcTan((double)dword_B0CEC0 * 0.00390625); /*0x6d1957*/
}



// ==== 0x006D1970  sub_6D1970  this=-  sig=ida-proto ====
void sub_6D1970()
{
  dbl_B0CE20 = Math::ArcTan((double)(2 * dword_B0CEC0) / dbl_B0CD78); /*0x6d1992*/
}



// ==== 0x006D19A0  sub_6D19A0  this=-  sig=ida-proto ====
__int64 sub_6D19A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0CEC0) + 0.5); /*0x6d19bb*/
  dword_B0CEB4 = result; /*0x6d19c0*/
  return result; /*0x6d19c6*/
}



// ==== 0x006D19D0  sub_6D19D0  this=-  sig=ida-proto ====
int sub_6D19D0()
{
  word_B0CD74 = 0; /*0x6d19d2*/
  word_B0CD76 = 0; /*0x6d19d8*/
  return 0; /*0x6d19de*/
}



// ==== 0x006D19E0  sub_6D19E0  this=-  sig=ida-proto ====
int sub_6D19E0()
{
  dword_B0CE08 = 0; /*0x6d19e2*/
  dword_B0CE0C = 0; /*0x6d19e7*/
  dword_B0CE10 = 0; /*0x6d19ec*/
  return 0; /*0x6d19f1*/
}



// ==== 0x006D1A00  sub_6D1A00  this=-  sig=ida-proto ====
int sub_6D1A00()
{
  dword_B0CEB0 = 0; /*0x6d1a05*/
  dword_B0CEA8 = 128; /*0x6d1a0f*/
  dword_B0CEAC = 128; /*0x6d1a14*/
  return 128; /*0x6d1a19*/
}



// ==== 0x006D1A20  sub_6D1A20  this=-  sig=ida-proto ====
int sub_6D1A20()
{
  dword_B0CD60 = 0; /*0x6d1a22*/
  dword_B0CD64 = 0; /*0x6d1a27*/
  dword_B0CD68 = 0; /*0x6d1a2c*/
  dword_B0CD6C = 0; /*0x6d1a31*/
  return 0; /*0x6d1a36*/
}



// ==== 0x006D1A40  sub_6D1A40  this=-  sig=ida-proto ====
int sub_6D1A40()
{
  dword_B0CE28 = 0; /*0x6d1a42*/
  dword_B0CE2C = 0; /*0x6d1a47*/
  dword_B0CE30 = 0; /*0x6d1a4c*/
  dword_B0CE34 = 0; /*0x6d1a51*/
  return 0; /*0x6d1a56*/
}



// ==== 0x006D1A60  sub_6D1A60  this=-  sig=ida-proto ====
int sub_6D1A60()
{
  g_CraterPool = 0; /*0x6d1a67*/
  dword_B0CE80 = 0; /*0x6d1a6c*/
  byte_B0CE84 = 1; /*0x6d1a71*/
  byte_B0CE85 = 0; /*0x6d1a78*/
  dword_B0CE78 = (int)&off_7F429C; /*0x6d1a7d*/
  dword_B0CE8C = 10; /*0x6d1a87*/
  g_CraterCreationState = 0; /*0x6d1a91*/
  return atexit(sub_6D1AA0); /*0x6d1a9c*/
}



// ==== 0x006D1AA0  sub_6D1AA0  this=-  sig=ida-proto ====
void __cdecl sub_6D1AA0()
{
  if ( (byte_B0CD58 & 1) == 0 ) /*0x6d1aaa*/
  {
    dword_B0CE78 = (int)&VectorClass<DirtyAreaStruct>::`vftable'; /*0x6d1aae*/
    byte_B0CD58 |= 1u; /*0x6d1ac1*/
    if ( g_CraterPool ) /*0x6d1ac7*/
    {
      if ( byte_B0CE85 ) /*0x6d1ad1*/
      {
        __3_YAXPAX_Z(g_CraterPool); /*0x6d1ad4*/
        g_CraterPool = 0; /*0x6d1adc*/
      }
    }
    byte_B0CE85 = 0; /*0x6d1ae6*/
    dword_B0CE80 = 0; /*0x6d1aed*/
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
  dword_B0CDEC = 0; /*0x6d1b17*/
  dword_B0CDF0 = 0; /*0x6d1b1c*/
  byte_B0CDF4 = 1; /*0x6d1b21*/
  byte_B0CDF5 = 0; /*0x6d1b28*/
  dword_B0CDE8 = (int)&DynamicVectorClass<ShadowControlClass *>::`vftable'; /*0x6d1b2d*/
  dword_B0CDFC = 10; /*0x6d1b37*/
  dword_B0CDF8 = 0; /*0x6d1b41*/
  return atexit(sub_6D1B50); /*0x6d1b4c*/
}



// ==== 0x006D1B50  sub_6D1B50  this=-  sig=ida-proto ====
void __cdecl sub_6D1B50()
{
  if ( (byte_B0CD59 & 1) == 0 ) /*0x6d1b5a*/
  {
    dword_B0CDE8 = (int)&VectorClass<ShadowControlClass *>::`vftable'; /*0x6d1b5e*/
    byte_B0CD59 |= 1u; /*0x6d1b71*/
    if ( dword_B0CDEC ) /*0x6d1b77*/
    {
      if ( byte_B0CDF5 ) /*0x6d1b81*/
      {
        __3_YAXPAX_Z(dword_B0CDEC); /*0x6d1b84*/
        dword_B0CDEC = 0; /*0x6d1b8c*/
      }
    }
    byte_B0CDF5 = 0; /*0x6d1b96*/
    dword_B0CDF0 = 0; /*0x6d1b9d*/
  }
}



// ==== 0x006D1BB0  sub_6D1BB0  this=-  sig=ida-proto ====
void sub_6D1BB0()
{
  dbl_B0CE18 = 60.0 / dbl_B0CD78; /*0x6d1bc9*/
  dbl_B0CD48 = Math::SinCos(dbl_B0CD88) * dbl_B0CE18; /*0x6d1bdd*/
}



// ==== 0x006D1BF0  sub_6D1BF0  this=-  sig=ida-proto ====
void sub_6D1BF0()
{
  LightningStorm_CloudHeightFactor = dbl_B0CD78 / (Math::SinCos(dbl_B0CD88) * 60.0); /*0x6d1c11*/
}



// ==== 0x006D1C20  Tactical::Construct  this=Tactical  sig=csp ====
int __thiscall TacticalMap::Construct(Tactical *this)
{
  float v3; // [esp+0h] [ebp-10h]
  float v4; // [esp+0h] [ebp-10h]
  float v5; // [esp+0h] [ebp-10h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x6d1c25*/
  this->Tactical_field_0xA8 = (IUnknown *)-1; /*0x6d1c2c*/
  this->__pad_AC[0] = 0; /*0x6d1c36*/
  this->__pad_AC[1] = 0; /*0x6d1c3c*/
  *(_DWORD *)&this->__pad_AC[20] = 0; /*0x6d1c42*/
  *(_DWORD *)&this->__pad_AC[4] = 0; /*0x6d1c48*/
  *(_DWORD *)&this->__pad_AC[8] = 0; /*0x6d1c4e*/
  *(_DWORD *)&this->__pad_AC[12] = 0; /*0x6d1c54*/
  *(_DWORD *)&this->__pad_AC[16] = 0; /*0x6d1c5a*/
  *(_DWORD *)&this->__pad_AC[24] = 1072693248; /*0x6d1c60*/
  *(_DWORD *)&this->__pad_AC[28] = dword_B0CE08; /*0x6d1c6f*/
  *(_DWORD *)&this->__pad_AC[32] = dword_B0CE0C; /*0x6d1c7b*/
  *(_DWORD *)&this->__pad_AC[36] = dword_B0CE08; /*0x6d1c87*/
  *(_DWORD *)&this->__pad_AC[40] = dword_B0CE0C; /*0x6d1c92*/
  *(_DWORD *)&this->__pad_AC[44] = 0; /*0x6d1c98*/
  *(_DWORD *)&this->__pad_AC[48] = 0; /*0x6d1c9e*/
  *(_DWORD *)&this->__pad_AC[52] = 0; /*0x6d1ca4*/
  *(_DWORD *)&this->__pad_11F[3141] = 0; /*0x6d1caa*/
  *(_DWORD *)&this->__pad_11F[3145] = 0; /*0x6d1cb0*/
  *(_DWORD *)&this->__pad_11F[3149] = 0; /*0x6d1cb6*/
  *(_DWORD *)&this->__pad_11F[3153] = 0; /*0x6d1cbc*/
  *(_DWORD *)&this->__pad_11F[3157] = 0; /*0x6d1cc2*/
  *(_DWORD *)&this->__pad_11F[3161] = 0; /*0x6d1cc8*/
  this->__pad_11F[3165] = 1; /*0x6d1cce*/
  this->__pad_11F[3166] = 0; /*0x6d1cd5*/
  this->__pad_11F[3167] = 0; /*0x6d1cdb*/
  *(_DWORD *)&this->__pad_11F[3169] = dword_B0CD60; /*0x6d1ced*/
  *(_DWORD *)&this->__pad_11F[3173] = dword_B0CD64; /*0x6d1cf8*/
  *(_DWORD *)&this->__pad_11F[3177] = dword_B0CD68; /*0x6d1d01*/
  *(_DWORD *)&this->__pad_11F[3181] = dword_B0CD6C; /*0x6d1d09*/
  *(_DWORD *)&this->__pad_11F[3185] = 0; /*0x6d1d0c*/
  *(_DWORD *)&this->__pad_11F[3189] = 0; /*0x6d1d12*/
  *(_DWORD *)&this->__pad_11F[3193] = 0; /*0x6d1d18*/
  *(_DWORD *)&this->__pad_11F[3197] = 0; /*0x6d1d1e*/
  *(_DWORD *)&this->__pad_11F[3201] = 0; /*0x6d1d2a*/
  this->Tactical_field_0xDA4 = (AbstractClass *)Timer::GetTicks(); /*0x6d1d35*/
  *(_DWORD *)&this->__pad_DA8[4] = 0; /*0x6d1d3b*/
  *(_DWORD *)&this->__pad_DA8[8] = 0; /*0x6d1d4e*/
  *(_DWORD *)this->__pad_0 = &Tactical::`vftable'; /*0x6d1d54*/
  *(_DWORD *)&this->Tactical_field_0x2[2] = &Tactical::`vftable'; /*0x6d1d5a*/
  this->Tactical_field_0x8[0] = (int)&Tactical::`vftable'; /*0x6d1d61*/
  this->Tactical_field_0xC[0] = (int)&Tactical::`vftable'; /*0x6d1d68*/
  memset(&this->__pad_AC[56], 0, 0xC80u); /*0x6d1d6f*/
  *(_WORD *)&this->__pad_10[20] = 0; /*0x6d1d77*/
  *(_DWORD *)&this->__pad_34[112] = -1; /*0x6d1d7d*/
  Matrix3x4::Identity((Matrix3x4 *)&this->Tactical_field_0xDB4); /*0x6d1d87*/
  v3 = dbl_B0CD88; /*0x6d1d95*/
  Matrix3x3::RotateX((int *)&this->Tactical_field_0xDB4, v3); /*0x6d1d98*/
  v4 = dbl_B0CE98; /*0x6d1da6*/
  Matrix2D::Rotate((int *)&this->Tactical_field_0xDB4, v4); /*0x6d1da9*/
  v5 = 60.0 / dbl_B0CD78; /*0x6d1dbb*/
  TacticalMap::MultiplyByScalar((float *)&this->Tactical_field_0xDB4, v5); /*0x6d1dc0*/
  *((_DWORD *)this + 889) = 1082689742; /*0x6d1dca*/
  *((_DWORD *)this + 890) = 1091078350; /*0x6d1dd4*/
  *((_DWORD *)this + 891) = 0; /*0x6d1dda*/
  *((_DWORD *)this + 892) = 0; /*0x6d1de0*/
  *((_DWORD *)this + 893) = -1064793906; /*0x6d1de6*/
  *((_DWORD *)this + 894) = 1091078350; /*0x6d1df0*/
  *((_DWORD *)this + 895) = 0; /*0x6d1df6*/
  this->q380 = 0; /*0x6d1dfc*/
  *((_DWORD *)this + 897) = 0; /*0x6d1e02*/
  *((_DWORD *)this + 898) = 0; /*0x6d1e08*/
  *((_DWORD *)this + 899) = 1065353216; /*0x6d1e0e*/
  this->q384 = 0; /*0x6d1e18*/
  g_TacticalClass_Instance = (LPPERSISTSTREAM)this; /*0x6d1e1e*/
  return (int)this->__pad_0; /*0x6d1e26*/
}



// ==== 0x006D1E30  Tactical::SmallFunc_6D1E30  this=Tactical  sig=csp ====
_DWORD *__thiscall SmallFunc_6D1E30(Tactical *this, int a2)
{
  AbstractClass::InitVtables((AbstractClass *)this, a2); /*0x6d1e38*/
  this->Tactical_field_0xDA4 = (AbstractClass *)Timer::GetTicks(); /*0x6d1e48*/
  *(_DWORD *)&this->__pad_DA8[4] = 0; /*0x6d1e4e*/
  *(_DWORD *)this->__pad_0 = &Tactical::`vftable'; /*0x6d1e58*/
  *(_DWORD *)&this->Tactical_field_0x2[2] = &Tactical::`vftable'; /*0x6d1e5e*/
  this->Tactical_field_0x8[0] = (int)&Tactical::`vftable'; /*0x6d1e65*/
  this->Tactical_field_0xC[0] = (int)&Tactical::`vftable'; /*0x6d1e6c*/
  return this->__pad_0; /*0x6d1e75*/
}



// ==== 0x006D1E80  Tactical::method_6D1E80  this=Tactical  sig=csp ====
void __thiscall sub_6D1E80(Tactical *this)
{
  *(_DWORD *)this->__pad_0 = &Tactical::`vftable'; /*0x6d1e80*/
  *(_DWORD *)&this->Tactical_field_0x2[2] = &Tactical::`vftable'; /*0x6d1e86*/
  this->Tactical_field_0x8[0] = (int)&Tactical::`vftable'; /*0x6d1e8d*/
  this->Tactical_field_0xC[0] = (int)&Tactical::`vftable'; /*0x6d1e94*/
  g_TacticalClass_Instance = 0; /*0x6d1e9b*/
  AbstractClass::DTOR((AbstractClass *)this); /*0x6d1ea5*/
}



// ==== 0x006D1EB0  IsoCoord::ToPixel  this=IsoCoord  sig=csp ====
_DWORD *__thiscall IsoCoord::ToPixel(IsoCoord *this, int a2, int a3)
{
  *(_DWORD *)this->__pad_0 = -60 * a3 / 2 + 60 * a2 / 2; /*0x6d1ef3*/
  this->IsoCoord_field_0x04 = 30 * a3 / 2 + 30 * a2 / 2; /*0x6d1f00*/
  return this->__pad_0; /*0x6d1f03*/
}



// ==== 0x006D1F10  Coord::To_ScreenRaw  this=AbstractClass  sig=csp ====
int *__stdcall sub_6D1F10(int *a1, _DWORD *a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // esi
  int v6; // [esp+10h] [ebp-4h]

  v6 = a2[1]; /*0x6d1f1f*/
  v2 = (-60 * v6 / 2 + 60 * *a2 / 2) / 256; /*0x6d1f95*/
  v3 = (30 * v6 / 2 + 30 * *a2 / 2) / 256; /*0x6d1f98*/
  v4 = v3 - Math::RoundToInt((double)(int)a2[2] * dbl_B0CD48 + (double)(a2[2] >= 728) + 0.5); /*0x6d1fc4*/
  *a1 = v2; /*0x6d1fca*/
  a1[1] = v4; /*0x6d1fcc*/
  return a1; /*0x6d1fcf*/
}



// ==== 0x006D1FE0  TacticalClass::AdjustForZShapeMove  this=Tactical  sig=csp ====
int *__stdcall TacticalClass::AdjustForZShapeMove(int *a1, _DWORD *a2)
{
  int v2; // kr08_4

  v2 = 30 * a2[1] / 2 + 30 * *a2 / 2; /*0x6d204b*/
  *a1 = (-60 * a2[1] / 2 + 60 * *a2 / 2) / 256; /*0x6d2057*/
  a1[1] = v2 / 256; /*0x6d2059*/
  return a1; /*0x6d202f*/
}



// ==== 0x006D2070  World::ToScreen  this=Tactical  sig=csp ====
int World::ToScreen(int *this, _DWORD *a2, int *a3)
{
  int v3; // ecx
  double v4; // st7
  float *v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  float v11; // [esp+4h] [ebp-18h] BYREF
  float v12; // [esp+8h] [ebp-14h]
  int v13; // [esp+Ch] [ebp-10h]
  float v14[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (double)(int)*a2; /*0x6d2082*/
  v13 = 0; /*0x6d2084*/
  v11 = v4; /*0x6d208c*/
  v12 = (float)(int)a2[1]; /*0x6d2098*/
  v5 = TransformMatrix3x4Point(v14, (float *)(v3 + 3556), &v11); /*0x6d209c*/
  v11 = *v5; /*0x6d20a3*/
  v12 = v5[1]; /*0x6d20ae*/
  v13 = *((_DWORD *)v5 + 2); /*0x6d20b5*/
  LOWORD(v6) = Math::RoundToInt(v11); /*0x6d20b9*/
  v7 = v6; /*0x6d20c2*/
  LOWORD(v8) = Math::RoundToInt(v12); /*0x6d20c4*/
  v9 = v8; /*0x6d20c9*/
  *this = v7; /*0x6d20cf*/
  this->vtable2 = v9; /*0x6d20d1*/
  return (int)this; /*0x6d20d4*/
}



// ==== 0x006D20E0  ZCoordToScreenY  this=-  sig=csp ====
int __fastcall ZCoordToScreenY(int a1)
{
  int result; // eax

  LOWORD(result) = Math::RoundToInt((double)a1 * dbl_B0CD48 + (double)(a1 >= 728) + 0.5); /*0x6d2113*/
  return result; /*0x6d2118*/
}



// ==== 0x006D2120  Coord::ScaleToScreenY  this=Coord  sig=csp ====
__int64 __thiscall Coord::ScaleToScreenY(Coord *this)
{
  __int64 result; // rax
  int v2; // kr00_4

  v2 = Math::RoundToInt(((double)(int)this - 0.5) * LightningStorm_CloudHeightFactor); /*0x6d2135*/
  WORD2(result) = HIWORD(v2); /*0x6d2135*/
  LOWORD(result) = v2; /*0x6d2135*/
  return result; /*0x6d213b*/
}



// ==== 0x006D2140  Coord::To_Screen  this=Coord  sig=csp ====
bool __thiscall Coord::To_Screen(Coord *this, _DWORD *a2, int *a3)
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
  LOWORD(v6) = Math::RoundToInt((double)(int)a2[2] * dbl_B0CD48 + (double)(a2[2] >= 728) + 0.5); /*0x6d21f2*/
  *a3 = v4; /*0x6d21fd*/
  a3[1] = v5 - v6; /*0x6d21ff*/
  v7 = *a3 - *(_DWORD *)&this->__pad_C[164]; /*0x6d2213*/
  v8 = a3[1] - *(_DWORD *)&this->__pad_C[168]; /*0x6d2215*/
  *a3 = v7; /*0x6d2217*/
  a3[1] = v8; /*0x6d221b*/
  if ( v7 < -360 ) /*0x6d222a*/
    return 0; /*0x6d222c*/
  if ( v7 > dword_B0CE30 + 360 ) /*0x6d2242*/
    return 0; /*0x6d2244*/
  if ( v8 >= -180 ) /*0x6d2251*/
    return v8 <= dword_B0CE34 + 180; /*0x6d2269*/
  return 0; /*0x6d2220*/
}



// ==== 0x006D2280  TacticalClass::TransformPixel  this=TacticalClass  sig=csp ====
_DWORD *__thiscall TacticalClass::TransformPixel(TacticalClass *this, _DWORD *a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // esi
  float *v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  float v10[3]; // [esp+8h] [ebp-18h] BYREF
  float v11; // [esp+14h] [ebp-Ch] BYREF
  float v12; // [esp+18h] [ebp-8h]
  int v13; // [esp+1Ch] [ebp-4h]

  if ( *a3 >= dword_B0CE30 || (v3 = a3[1], v3 >= dword_B0CE34 + dword_B0CE2C) ) /*0x6d22ab*/
  {
    *a2 = dword_B0CE08; /*0x6d2345*/
    a2[1] = dword_B0CE0C; /*0x6d234d*/
    a2[2] = dword_B0CE10; /*0x6d2356*/
    return a2; /*0x6d2337*/
  }
  else
  {
    v4 = this->visibleArea[1] + v3; /*0x6d22bf*/
    LODWORD(v10[0]) = this->visibleArea[0] + *a3; /*0x6d22c1*/
    LODWORD(v10[1]) = v4; /*0x6d22c5*/
    v11 = (float)SLODWORD(v10[0]); /*0x6d22dc*/
    v13 = 0; /*0x6d22e4*/
    v12 = (float)v4; /*0x6d22ec*/
    v5 = TransformMatrix3x4Point(v10, (float *)this->TacticalClass_field_DE4, &v11); /*0x6d22f0*/
    v11 = *v5; /*0x6d22f7*/
    v12 = v5[1]; /*0x6d2302*/
    v13 = *((_DWORD *)v5 + 2); /*0x6d2309*/
    LOWORD(v6) = Math::RoundToInt(v11); /*0x6d230d*/
    v7 = v6; /*0x6d2316*/
    LOWORD(v8) = Math::RoundToInt(v12); /*0x6d2318*/
    *a2 = v7; /*0x6d2325*/
    a2[1] = v8; /*0x6d2327*/
    a2[2] = 0; /*0x6d232c*/
    return a2; /*0x6d232a*/
  }
}



// ==== 0x006D2360  Matrix3x4::TransformCell  this=Tactical  sig=csp ====
_DWORD *__thiscall sub_6D2360(float *this, _DWORD *a2, int *a3)
{
  float *v4; // eax
  int v5; // esi
  int v6; // eax
  int v8; // [esp+4h] [ebp-1Ch]
  float v9; // [esp+8h] [ebp-18h] BYREF
  float v10; // [esp+Ch] [ebp-14h]
  int v11; // [esp+10h] [ebp-10h]
  float v12[3]; // [esp+14h] [ebp-Ch] BYREF
  int v13; // [esp+28h] [ebp+8h]

  v13 = *a3; /*0x6d2372*/
  if ( v13 >= dword_B0CE30 || (v8 = a3[1], v8 >= dword_B0CE34) ) /*0x6d2386*/
  {
    *a2 = dword_B0CE08; /*0x6d2404*/
    a2[1] = dword_B0CE0C; /*0x6d240c*/
    a2[2] = dword_B0CE10; /*0x6d2415*/
    return a2; /*0x6d23f7*/
  }
  else
  {
    v9 = (float)v13; /*0x6d2398*/
    v11 = 0; /*0x6d23a4*/
    v10 = (float)v8; /*0x6d23ac*/
    v4 = TransformMatrix3x4Point(v12, this + 889, &v9); /*0x6d23b0*/
    v9 = *v4; /*0x6d23b7*/
    v10 = v4[1]; /*0x6d23c2*/
    v11 = *((_DWORD *)v4 + 2); /*0x6d23c9*/
    v5 = Math::RoundToInt(v9); /*0x6d23d6*/
    v6 = Math::RoundToInt(v10); /*0x6d23d8*/
    *a2 = v5; /*0x6d23e5*/
    a2[1] = v6; /*0x6d23e7*/
    a2[2] = 0; /*0x6d23ec*/
    return a2; /*0x6d23ea*/
  }
}



// ==== 0x006D2420  TacticalClass::SetPosition  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::SetPosition(TacticalClass *this, _DWORD *a2, int a3)
{
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  int result; // eax
  int v10; // edi
  int TacticalClass_field_D68; // ecx
  int v12; // [esp+14h] [ebp-4h]

  this->TacticalClass_field_DC = 0; /*0x6d2439*/
  this->TacticalClass_field_D8 = dword_8428EC[a3]; /*0x6d244a*/
  v12 = a2[1]; /*0x6d245c*/
  v4 = (-60 * v12 / 2 + 60 * *a2 / 2) / 256; /*0x6d24c4*/
  v5 = (30 * v12 / 2 + 30 * *a2 / 2) / 256; /*0x6d24c7*/
  LOWORD(v6) = Math::RoundToInt((double)(int)a2[2] * dbl_B0CD48 + (double)(a2[2] >= 728) + 0.5); /*0x6d24ee*/
  v7 = this->visibleArea[1]; /*0x6d24f3*/
  v8 = v5 - v6 - v7; /*0x6d2507*/
  result = this->TacticalClass_field_D64; /*0x6d250b*/
  v10 = v7 + v8; /*0x6d2511*/
  TacticalClass_field_D68 = this->TacticalClass_field_D68; /*0x6d2513*/
  this->TacticalClass_field_D0 = v4; /*0x6d2519*/
  this->TacticalClass_field_D4 = v10; /*0x6d251f*/
  this->TacticalClass_field_C8 = result; /*0x6d2525*/
  this->TacticalClass_field_CC = TacticalClass_field_D68; /*0x6d252b*/
  return result; /*0x6d2531*/
}



// ==== 0x006D2540  Tactical::ScrollViewport  this=Tactical  sig=csp ====
char __thiscall TacticalClass::ScrollViewport(Tactical *this)
{
  int v1; // eax
  char v2; // bl
  char *v4; // ebp
  double v5; // st7
  char *v6; // edi
  int *v7; // eax
  double v8; // st7
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  signed int v12; // edi
  signed int v13; // eax
  int v14; // edi
  AbstractClass *Ticks; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v22; // [esp+8h] [ebp-14h] BYREF
  int v23; // [esp+Ch] [ebp-10h]
  char v24; // [esp+10h] [ebp-Ch] BYREF
  int v25; // [esp+14h] [ebp-8h]

  LOBYTE(v1) = dword_A8D5F8; /*0x6d2540*/
  v2 = 0; /*0x6d2549*/
  if ( (dword_A8D5F8 & 2) != 0 ) /*0x6d2550*/
    return v1; /*0x6d2550*/
  if ( this->Tactical_field_0xA8 != *(IUnknown **)&stru_A8EB00.?[416] ) /*0x6d2565*/
  {
    if ( stru_A8EB00.?[376] ) /*0x6d2573*/
    {
      v4 = &this->__pad_AC[36]; /*0x6d2584*/
      if ( (*(_DWORD *)&this->__pad_AC[36] != dword_B0CE08 || *(_DWORD *)&this->__pad_AC[40] != dword_B0CE0C) /*0x6d25af*/
        && *(float *)&this->__pad_AC[44] != 0.0 )
      {
        v5 = *(float *)&this->__pad_AC[48] + *(float *)&this->__pad_AC[44]; /*0x6d25bb*/
        *(float *)&this->__pad_AC[48] = v5; /*0x6d25c1*/
        if ( v5 > 1.0 ) /*0x6d25d2*/
          *(_DWORD *)&this->__pad_AC[48] = 1065353216; /*0x6d25d4*/
        v6 = &this->__pad_AC[28]; /*0x6d25e4*/
        v7 = TacticalClass::CalcInverseAlpha( /*0x6d25f2*/
               (TacticalClass *)&v24,
               (int)&this->__pad_AC[36],
               *(float *)&this->__pad_AC[48]);
        v8 = *(float *)&this->__pad_AC[48]; /*0x6d25f7*/
        v9 = *v7; /*0x6d2603*/
        v25 = v7[1]; /*0x6d260a*/
        if ( v8 >= 1.0 ) /*0x6d2611*/
        {
          *(_DWORD *)v4 = 0; /*0x6d2617*/
          *(_DWORD *)v6 = 0; /*0x6d261a*/
          *(_DWORD *)&this->__pad_AC[40] = 0; /*0x6d261c*/
          *(_DWORD *)&this->__pad_AC[32] = 0; /*0x6d261f*/
          *(_DWORD *)&this->__pad_AC[44] = 0; /*0x6d2622*/
          *(_DWORD *)&this->__pad_AC[48] = 0; /*0x6d2628*/
        }
        v22 = v9; /*0x6d2639*/
        v23 = v25; /*0x6d263d*/
        if ( !ClampCoordMap(&v22) || stru_A8EB00.?[391] ) /*0x6d2651*/
        {
          v11 = v25; /*0x6d265d*/
          v10 = v9; /*0x6d2661*/
        }
        else
        {
          v10 = v22; /*0x6d2653*/
          v11 = v23; /*0x6d2657*/
        }
        *(_DWORD *)&this->__pad_11F[3141] = v10; /*0x6d2663*/
        *(_DWORD *)&this->__pad_11F[3157] = v10; /*0x6d2669*/
        *(_DWORD *)&this->__pad_11F[3145] = v11; /*0x6d266f*/
        *(_DWORD *)&this->__pad_11F[3161] = v11; /*0x6d2675*/
        TacticalClass::CalcViewportCells((TacticalClass *)this); /*0x6d267d*/
        this->__pad_11F[3166] = 1; /*0x6d2682*/
        v2 = 1; /*0x6d2689*/
      }
    }
    v12 = *(_DWORD *)&this->__pad_DA8[4]; /*0x6d2691*/
    if ( this->Tactical_field_0xDA4 != (AbstractClass *)-1 ) /*0x6d269b*/
    {
      v13 = Timer::GetTicks() - (unsigned int)this->Tactical_field_0xDA4; /*0x6d26a8*/
      if ( v13 >= v12 ) /*0x6d26b0*/
      {
LABEL_20:
        v14 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 80); /*0x6d26b8*/
        Ticks = (AbstractClass *)Timer::GetTicks(); /*0x6d26c5*/
        v16 = v25; /*0x6d26ca*/
        this->Tactical_field_0xDA4 = Ticks; /*0x6d26ce*/
        v17 = *(_DWORD *)&this->__pad_11F[3201]; /*0x6d26d4*/
        *(_DWORD *)this->__pad_DA8 = v16; /*0x6d26da*/
        *(_DWORD *)&this->__pad_DA8[4] = v14; /*0x6d26e1*/
        *(_DWORD *)&this->__pad_11F[3201] = v17 + 1; /*0x6d26e7*/
        goto LABEL_21; /*0x6d26e7*/
      }
      v12 -= v13; /*0x6d26b2*/
    }
    if ( v12 ) /*0x6d26b6*/
      goto LABEL_21; /*0x6d26b6*/
    goto LABEL_20; /*0x6d26b6*/
  }
LABEL_21:
  LOBYTE(v1) = stru_A8EB00.?[416]; /*0x6d26ed*/
  this->Tactical_field_0xA8 = *(IUnknown **)&stru_A8EB00.?[416]; /*0x6d26f3*/
  if ( *(_DWORD *)&this->__pad_11F[3157] != *(_DWORD *)&this->__pad_11F[3141] /*0x6d2715*/
    || (v1 = *(_DWORD *)&this->__pad_11F[3145], *(_DWORD *)&this->__pad_11F[3161] != v1) )
  {
    if ( !v2 ) /*0x6d2719*/
    {
      v18 = *(_DWORD *)&this->__pad_11F[3157]; /*0x6d2721*/
      v23 = *(_DWORD *)&this->__pad_11F[3161]; /*0x6d272b*/
      v22 = v18; /*0x6d2732*/
      if ( !ClampCoordMap(&v22) || stru_A8EB00.?[391] ) /*0x6d2746*/
      {
        v19 = *(_DWORD *)&this->__pad_11F[3157]; /*0x6d2752*/
        v20 = *(_DWORD *)&this->__pad_11F[3161]; /*0x6d2758*/
      }
      else
      {
        v19 = v22; /*0x6d2748*/
        v20 = v23; /*0x6d274c*/
      }
      *(_DWORD *)&this->__pad_11F[3141] = v19; /*0x6d275e*/
      *(_DWORD *)&this->__pad_11F[3157] = v19; /*0x6d2764*/
      *(_DWORD *)&this->__pad_11F[3145] = v20; /*0x6d276a*/
      *(_DWORD *)&this->__pad_11F[3161] = v20; /*0x6d2770*/
      LOBYTE(v1) = TacticalClass::CalcViewportCells((TacticalClass *)this); /*0x6d2778*/
      this->__pad_11F[3166] = 1; /*0x6d277d*/
    }
  }
  return v1; /*0x6d2784*/
}



// ==== 0x006D2790  Cell::CreateCrater  this=Tactical  sig=csp ====
char __stdcall Cell::CreateCrater(int a1, int a2, int a3, int a4, char a5)
{
  int v5; // ecx
  int *v6; // eax
  int v7; // ebp
  int v8; // ecx
  int v9; // edx
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  char *v15; // esi
  char *v16; // edi
  int v17; // eax
  bool v18; // cc
  int v19; // eax
  bool v20; // bl
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  const RECT *v25; // [esp+0h] [ebp-68h]
  const RECT *v26; // [esp+4h] [ebp-64h]
  int v27; // [esp+10h] [ebp-58h]
  int v28; // [esp+14h] [ebp-54h]
  int v29; // [esp+18h] [ebp-50h]
  int v30; // [esp+1Ch] [ebp-4Ch]
  int v31; // [esp+20h] [ebp-48h]
  int v32; // [esp+24h] [ebp-44h]
  int v33; // [esp+28h] [ebp-40h]
  int v34; // [esp+2Ch] [ebp-3Ch]
  int v35; // [esp+30h] [ebp-38h] BYREF
  int v36; // [esp+34h] [ebp-34h]
  int v37; // [esp+38h] [ebp-30h]
  int v38; // [esp+3Ch] [ebp-2Ch]
  _DWORD v39[5]; // [esp+40h] [ebp-28h] BYREF
  _DWORD v40[5]; // [esp+54h] [ebp-14h] BYREF

  v5 = g_CraterCreationState; /*0x6d2793*/
  v29 = -1; /*0x6d27a1*/
  v30 = 0x7FFFFFFF; /*0x6d27a9*/
  v28 = 0; /*0x6d27b1*/
  if ( g_CraterCreationState <= 0 ) /*0x6d27b5*/
    goto LABEL_43; /*0x6d27b5*/
  v27 = 0; /*0x6d27bb*/
  do /*0x6d2a15*/
  {
    v35 = *(_DWORD *)((char *)g_CraterPool + v27); /*0x6d27d0*/
    v36 = *(_DWORD *)((char *)g_CraterPool + v27 + 4); /*0x6d27d7*/
    v37 = *(_DWORD *)((char *)g_CraterPool + v27 + 8); /*0x6d27de*/
    v38 = *(_DWORD *)((char *)g_CraterPool + v27 + 12); /*0x6d27f2*/
    v6 = ClipRectIntersection(v40, &v35, &a1, 0, 0); /*0x6d27f6*/
    v7 = v38; /*0x6d2801*/
    v31 = *v6; /*0x6d2805*/
    v32 = v6[1]; /*0x6d280c*/
    v8 = v36; /*0x6d2810*/
    v33 = v6[2]; /*0x6d2817*/
    v9 = v35; /*0x6d281b*/
    v34 = v6[3]; /*0x6d2824*/
    if ( v37 <= 0 || v38 <= 0 ) /*0x6d2830*/
    {
      v10 = a4; /*0x6d28c8*/
      v39[1] = a2; /*0x6d28cc*/
      v11 = a3; /*0x6d28d0*/
      v39[0] = a1; /*0x6d28d4*/
    }
    else if ( a3 <= 0 || a4 <= 0 ) /*0x6d2844*/
    {
      v39[0] = v35; /*0x6d28b2*/
      v39[1] = v36; /*0x6d28b6*/
      v11 = v37; /*0x6d28ba*/
      v10 = v38; /*0x6d28bc*/
    }
    else
    {
      v10 = v38; /*0x6d2846*/
      v11 = v37; /*0x6d284e*/
      if ( v35 > a1 ) /*0x6d2850*/
      {
        v11 = v35 + v37 - a1; /*0x6d2854*/
        v9 = a1; /*0x6d2856*/
      }
      if ( v36 > a2 ) /*0x6d285e*/
      {
        v10 = v36 - a2 + v38; /*0x6d2862*/
        v8 = a2; /*0x6d2864*/
      }
      if ( v11 + v9 < a1 + a3 ) /*0x6d2871*/
        v11 = a3 - v9 + a1 + 1; /*0x6d287d*/
      if ( v10 + v8 < a4 + a2 ) /*0x6d2890*/
        v10 = a2 - v8 + a4 + 1; /*0x6d289c*/
      v7 = v38; /*0x6d28a0*/
      v39[0] = v9; /*0x6d28a4*/
      v9 = v35; /*0x6d28a8*/
      v39[1] = v8; /*0x6d28ac*/
    }
    if ( v33 > 0 && v34 > 0 ) /*0x6d28ea*/
    {
      if ( v31 == a1 && v32 == a2 && v33 == a3 && v34 == a4 ) /*0x6d291e*/
      {
        LOBYTE(v12) = a5; /*0x6d2920*/
        if ( !a5 ) /*0x6d2926*/
          return v12; /*0x6d2926*/
        LOBYTE(v12) = v27; /*0x6d2932*/
        if ( *((_BYTE *)g_CraterPool + v27 + 16) ) /*0x6d2936*/
          return v12; /*0x6d293c*/
      }
      else if ( v31 == v9 && v32 == v36 && v33 == v37 && v34 == v7 ) /*0x6d2967*/
      {
        if ( a5 || !*((_BYTE *)g_CraterPool + v27 + 16) ) /*0x6d297b*/
        {
          if ( v28 < g_CraterCreationState ) /*0x6d298e*/
          {
            v13 = v28; /*0x6d2991*/
            if ( v28 < --g_CraterCreationState ) /*0x6d299a*/
            {
              v14 = v27; /*0x6d299c*/
              do /*0x6d29be*/
              {
                ++v13; /*0x6d29a6*/
                v15 = (char *)g_CraterPool + v14 + 20; /*0x6d29a7*/
                v16 = (char *)g_CraterPool + v14; /*0x6d29ab*/
                v14 += 20; /*0x6d29b3*/
                qmemcpy(v16, v15, 0x14u); /*0x6d29b6*/
              }
              while ( v13 < g_CraterCreationState ); /*0x6d29be*/
            }
          }
          --v28; /*0x6d29c8*/
          v27 -= 20; /*0x6d29cc*/
        }
      }
      else
      {
        v17 = v10 * v11; /*0x6d29de*/
        if ( v17 < v37 * v7 + a3 * a4 && v17 < v30 ) /*0x6d29eb*/
        {
          v30 = v17; /*0x6d29f1*/
          v29 = v28; /*0x6d29f5*/
        }
      }
    }
    v5 = g_CraterCreationState; /*0x6d2a01*/
    v18 = ++v28 < g_CraterCreationState; /*0x6d2a0b*/
    v27 += 20; /*0x6d2a11*/
  }
  while ( v18 ); /*0x6d2a15*/
  if ( v29 == -1 ) /*0x6d2a22*/
  {
LABEL_43:
    v40[0] = a1; /*0x6d2a30*/
    v40[2] = a3; /*0x6d2a38*/
    LOBYTE(v40[4]) = a5; /*0x6d2a40*/
    LOBYTE(v12) = dword_B0CE80; /*0x6d2a44*/
    v40[1] = a2; /*0x6d2a49*/
    v40[3] = a4; /*0x6d2a53*/
    if ( v5 < dword_B0CE80 /*0x6d2a8e*/
      || (byte_B0CE85 || !dword_B0CE80)
      && dword_B0CE8C > 0
      && (LOBYTE(v12) = (*(int (__thiscall **)(int *, int, _DWORD))(dword_B0CE78 + 8))(
                          &dword_B0CE78,
                          dword_B0CE8C + dword_B0CE80,
                          0),
          (_BYTE)v12) )
    {
      v19 = g_CraterCreationState++; /*0x6d2a9e*/
      v12 = 5 * v19; /*0x6d2aad*/
      qmemcpy((char *)g_CraterPool + 4 * v12, v40, 0x14u); /*0x6d2ab8*/
    }
  }
  else
  {
    v20 = a5 || *((_BYTE *)g_CraterPool + 20 * v29 + 16); /*0x6d2ae0*/
    v12 = Rect::Union((LPRECT)((char *)g_CraterPool + 20 * v29), v25, v26); /*0x6d2b01*/
    v21 = *(_DWORD *)(v12 + 4); /*0x6d2b08*/
    v39[0] = *(_DWORD *)v12; /*0x6d2b0b*/
    v22 = *(_DWORD *)(v12 + 8); /*0x6d2b0f*/
    v39[1] = v21; /*0x6d2b12*/
    v23 = *(_DWORD *)(v12 + 12); /*0x6d2b16*/
    LOBYTE(v12) = (_BYTE)g_CraterPool; /*0x6d2b19*/
    v39[2] = v22; /*0x6d2b1e*/
    v39[3] = v23; /*0x6d2b27*/
    LOBYTE(v39[4]) = v20; /*0x6d2b32*/
    qmemcpy((char *)g_CraterPool + 20 * v29, v39, 0x14u); /*0x6d2b36*/
  }
  return v12; /*0x6d2aba*/
}



// ==== 0x006D2B50  nullsub_238  this=-  sig=csp ====
void __stdcall nullsub_238(int a1, int a2)
{
  ; /*0x6d2b50*/
}



// ==== 0x006D2B60  TacticalMap::RenderCell  this=TacticalMap  sig=csp ====
int __thiscall TacticalMap::RenderCell(TacticalMap *this, char a2, int a3, int a4, int a5)
{
  int v6; // esi
  int v7; // ebp
  int *v8; // eax
  int *v9; // eax
  int *v10; // eax
  int *v11; // ecx
  int v12; // edx
  int v13; // eax
  char *v14; // esi
  char *v15; // edi
  int result; // eax
  int v17; // ebp
  CellClass **v18; // edi
  int *Coords; // eax
  int *v20; // eax
  int v21; // ecx
  int v22; // [esp-8h] [ebp-78h]
  int v23; // [esp-4h] [ebp-74h]
  int v24; // [esp+10h] [ebp-60h]
  int v25; // [esp+14h] [ebp-5Ch] BYREF
  void *v26; // [esp+18h] [ebp-58h]
  int v27; // [esp+1Ch] [ebp-54h]
  Coord2D v28; // [esp+20h] [ebp-50h] BYREF
  int v29[2]; // [esp+28h] [ebp-48h] BYREF
  int v30; // [esp+30h] [ebp-40h] BYREF
  int v31; // [esp+34h] [ebp-3Ch]
  int v32; // [esp+38h] [ebp-38h]
  int v33; // [esp+3Ch] [ebp-34h]
  int v34[4]; // [esp+40h] [ebp-30h] BYREF
  Rect v35; // [esp+50h] [ebp-20h] BYREF
  _DWORD v36[4]; // [esp+60h] [ebp-10h] BYREF

  if ( !a2 ) /*0x6d2b6f*/
  {
    if ( g_CraterCreationState ) /*0x6d2b7d*/
    {
      v6 = g_CraterCreationState - 1; /*0x6d2b83*/
      v24 = g_CraterCreationState - 1; /*0x6d2b86*/
      if ( g_CraterCreationState - 1 >= 0 ) /*0x6d2b8a*/
      {
        v7 = 20 * v6; /*0x6d2b93*/
        do /*0x6d2cfd*/
        {
          v30 = *(_DWORD *)((char *)g_CraterPool + v7); /*0x6d2ba2*/
          v31 = *(_DWORD *)((char *)g_CraterPool + v7 + 4); /*0x6d2ba9*/
          v32 = *(_DWORD *)((char *)g_CraterPool + v7 + 8); /*0x6d2bb0*/
          v33 = *(_DWORD *)((char *)g_CraterPool + v7 + 12); /*0x6d2bbd*/
          v30 += a3; /*0x6d2bc7*/
          v31 += a4; /*0x6d2bd0*/
          v26 = DSurface_ViewBounds.field_4; /*0x6d2bda*/
          v28 = *(Coord2D *)&DSurface_ViewBounds.field_0; /*0x6d2bde*/
          v25 = DSurface_ViewBounds.field_0; /*0x6d2be7*/
          v23 = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x6d2bf5*/
          v22 = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x6d2bfa*/
          v8 = Coord2D::Sub(&v28, v29, &v25); /*0x6d2c05*/
          v9 = Rect::Construct(&v35, v8, v22, v23); /*0x6d2c0f*/
          v34[0] = *v9; /*0x6d2c18*/
          v34[1] = v9[1]; /*0x6d2c21*/
          v34[2] = v9[2]; /*0x6d2c28*/
          v34[3] = v9[3]; /*0x6d2c37*/
          v10 = ClipRectIntersection(v36, v34, &v30, 0, 0); /*0x6d2c40*/
          v30 = *v10; /*0x6d2c49*/
          v31 = v10[1]; /*0x6d2c50*/
          v32 = v10[2]; /*0x6d2c57*/
          v33 = v10[3]; /*0x6d2c64*/
          v11 = (int *)((char *)g_CraterPool + v7); /*0x6d2c68*/
          *v11 = v30; /*0x6d2c6b*/
          v11[1] = v31; /*0x6d2c72*/
          v11[2] = v32; /*0x6d2c79*/
          v11[3] = v33; /*0x6d2c80*/
          if ( v32 > 0 && v33 > 0 ) /*0x6d2c91*/
          {
            TacticalMap::FillScanlinesOpaque((TacticalMap *)g_ZBufferDescriptor, v30, v31, v32, v33); /*0x6d2cee*/
          }
          else if ( v6 < g_CraterCreationState ) /*0x6d2c9a*/
          {
            v12 = v6; /*0x6d2c9d*/
            if ( v6 < --g_CraterCreationState ) /*0x6d2ca6*/
            {
              v13 = v7; /*0x6d2ca8*/
              do /*0x6d2cc8*/
              {
                ++v12; /*0x6d2cb0*/
                v14 = (char *)g_CraterPool + v13 + 20; /*0x6d2cb1*/
                v15 = (char *)g_CraterPool + v13; /*0x6d2cb5*/
                v13 += 20; /*0x6d2cbd*/
                qmemcpy(v15, v14, 0x14u); /*0x6d2cc0*/
              }
              while ( v12 < g_CraterCreationState ); /*0x6d2cc8*/
              v6 = v24; /*0x6d2cca*/
            }
          }
          --v6; /*0x6d2cf3*/
          v7 -= 20; /*0x6d2cf4*/
          v24 = v6; /*0x6d2cf9*/
        }
        while ( v6 >= 0 ); /*0x6d2cfd*/
      }
    }
  }
  result = *((_DWORD *)this + 56); /*0x6d2d03*/
  if ( result > 0 && !a2 ) /*0x6d2d17*/
  {
    v17 = 0; /*0x6d2d1d*/
    v18 = (CellClass **)((char *)this + 228); /*0x6d2d27*/
    do /*0x6d2dc2*/
    {
      Coords = CellClass::GetCoords(*v18, &v30); /*0x6d2d34*/
      v25 = *Coords; /*0x6d2d3b*/
      v26 = (void *)Coords[1]; /*0x6d2d47*/
      v27 = 0; /*0x6d2d59*/
      v20 = Coord::To_ScreenRaw(v29, &v25); /*0x6d2d61*/
      v21 = v20[1] - *((_DWORD *)this + 45); /*0x6d2d81*/
      *(_DWORD *)v28.__pad_0 = *v20 - *((_DWORD *)this + 44) + DSurface_ViewBounds.field_0 - 30; /*0x6d2d8d*/
      v28.Coord2D_field_0x04 = (int)DSurface_ViewBounds.field_4 + v21 - 15; /*0x6d2d9c*/
      if ( g_hWnd ) /*0x6d2da0*/
        DSurface::Process((int)*v18, (int *)v28.__pad_0, (int *)a5); /*0x6d2db1*/
      result = *((_DWORD *)this + 56); /*0x6d2db6*/
      ++v17; /*0x6d2dbc*/
      ++v18; /*0x6d2dbd*/
    }
    while ( v17 < result ); /*0x6d2dc2*/
  }
  return result; /*0x6d2dc8*/
}



// ==== 0x006D2DE0  TacticalClass::RenderIsometricOverlay  this=TacticalClass  sig=csp ====
signed int __thiscall TacticalClass::RenderIsometricOverlay(TacticalClass *this, int *a2, int *a3, char a4)
{
  char v4; // bl
  int *visibleCells; // ebp
  int *v7; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  int *v11; // eax
  signed int result; // eax
  int v13; // ebx
  int v14; // edi
  int *v15; // ecx
  int v16; // ecx
  __int16 v17[2]; // [esp+Ch] [ebp-58h] BYREF
  int v18; // [esp+10h] [ebp-54h] BYREF
  _DWORD v19[3]; // [esp+18h] [ebp-4Ch] BYREF
  int v20; // [esp+24h] [ebp-40h] BYREF
  int v21; // [esp+28h] [ebp-3Ch]
  signed int v22; // [esp+2Ch] [ebp-38h]
  int v23; // [esp+30h] [ebp-34h]
  int v24[8]; // [esp+34h] [ebp-30h] BYREF
  _DWORD v25[4]; // [esp+54h] [ebp-10h] BYREF
  int *v26; // [esp+68h] [ebp+4h]

  v4 = a4; /*0x6d2de4*/
  if ( a4 ) /*0x6d2dee*/
  {
    TacticalClass::RenderIsometric((int)this, &DSurface_ViewBounds.field_0, (int)&DSurface_ViewBounds); /*0x6d2dfa*/
  }
  else
  {
    if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d2e0c*/
      TacticalClass::RenderIsometric((int)this, a2, (int)a2); /*0x6d2e12*/
    if ( a3[2] > 0 && a3[3] > 0 ) /*0x6d2e27*/
      TacticalClass::RenderIsometric((int)this, a3, (int)a3); /*0x6d2e2d*/
  }
  if ( this->visibleCellCount > 0 && !a4 ) /*0x6d2e42*/
  {
    v26 = 0; /*0x6d2e4a*/
    visibleCells = this->visibleCells; /*0x6d2e5e*/
    do /*0x6d2f79*/
    {
      Coord::Subtract( /*0x6d2eaf*/
        (Coord *)v19,
        ((((__int16)*(_DWORD *)(*visibleCells + 36) << 8) + 128) / 256) << 8,
        ((((__int16)HIWORD(*(_DWORD *)(*visibleCells + 36)) << 8) + 128) / 256) << 8,
        0);
      v20 = v19[0]; /*0x6d2ec0*/
      v21 = v19[1]; /*0x6d2ec4*/
      v22 = v19[2]; /*0x6d2ed4*/
      v7 = Coord::To_ScreenRaw(&v18, &v20); /*0x6d2ed8*/
      v8 = this->visibleArea[1]; /*0x6d2ee5*/
      v9 = *v7 - this->visibleArea[0]; /*0x6d2eeb*/
      v10 = v7[1]; /*0x6d2eed*/
      v24[0] = v9 - 30; /*0x6d2ef3*/
      v24[3] = 30; /*0x6d2efc*/
      v24[1] = (int)DSurface_ViewBounds.field_4 + v10 - v8; /*0x6d2f16*/
      v24[2] = 60; /*0x6d2f24*/
      v11 = ClipRectIntersection(v25, &DSurface_ViewBounds.field_0, v24, 0, 0); /*0x6d2f28*/
      v24[4] = *v11; /*0x6d2f31*/
      v24[5] = v11[1]; /*0x6d2f38*/
      if ( v11[2] > 0 && v11[3] > 0 ) /*0x6d2f48*/
      {
        *(_DWORD *)v17 = *(_DWORD *)(*visibleCells + 36); /*0x6d2f5c*/
        TacticalMapClass::ProcessCell((TacticalMapClass *)this, v17, (int)v24); /*0x6d2f60*/
      }
      ++visibleCells; /*0x6d2f70*/
      v26 = (int *)((char *)v26 + 1); /*0x6d2f75*/
    }
    while ( (int)v26 < this->visibleCellCount ); /*0x6d2f79*/
    v4 = a4; /*0x6d2f7f*/
  }
  result = g_CraterCreationState; /*0x6d2f84*/
  if ( g_CraterCreationState ) /*0x6d2f8b*/
  {
    if ( !v4 ) /*0x6d2f93*/
    {
      result = g_CraterCreationState - 1; /*0x6d2f99*/
      if ( g_CraterCreationState - 1 >= 0 ) /*0x6d2f9c*/
      {
        v13 = g_CraterCreationState; /*0x6d2fa5*/
        v14 = 20 * result; /*0x6d2fa8*/
        do /*0x6d302e*/
        {
          v20 = *(_DWORD *)((char *)g_CraterPool + v14); /*0x6d2fbc*/
          v21 = *(_DWORD *)((char *)g_CraterPool + v14 + 4); /*0x6d2fc3*/
          v22 = *(_DWORD *)((char *)g_CraterPool + v14 + 8); /*0x6d2fca*/
          v23 = *(_DWORD *)((char *)g_CraterPool + v14 + 12); /*0x6d2fdd*/
          v21 += (int)DSurface_ViewBounds.field_4; /*0x6d2feb*/
          v15 = ClipRectIntersection(v25, &DSurface_ViewBounds.field_0, &v20, 0, 0); /*0x6d2ff4*/
          v20 = *v15; /*0x6d2ff8*/
          v21 = v15[1]; /*0x6d2fff*/
          result = v15[2]; /*0x6d3003*/
          v22 = result; /*0x6d3006*/
          v16 = v15[3]; /*0x6d300a*/
          v23 = v16; /*0x6d300f*/
          if ( result > 0 && v16 > 0 ) /*0x6d3017*/
            result = TacticalClass::RenderIsometric((int)this, &v20, (int)&v20); /*0x6d3025*/
          v14 -= 20; /*0x6d302a*/
          --v13; /*0x6d302d*/
        }
        while ( v13 ); /*0x6d302e*/
      }
    }
  }
  return result; /*0x6d3034*/
}



// ==== 0x006D3040  TacticalClass::DrawTerrainPartial  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::DrawTerrainPartial(TacticalClass *this, int *a2, int *a3, char a4)
{
  int *visibleCells; // ebx
  int *v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int *v10; // eax
  int v11; // ecx
  int result; // eax
  int v13; // ebx
  int v14; // edi
  int *v15; // ecx
  int v16; // ecx
  int v17; // [esp+Ch] [ebp-54h] BYREF
  _DWORD v18[3]; // [esp+14h] [ebp-4Ch] BYREF
  int v19; // [esp+20h] [ebp-40h] BYREF
  int v20; // [esp+24h] [ebp-3Ch]
  int v21; // [esp+28h] [ebp-38h]
  int v22; // [esp+2Ch] [ebp-34h]
  int v23[4]; // [esp+30h] [ebp-30h] BYREF
  int v24[2]; // [esp+40h] [ebp-20h] BYREF
  int v25; // [esp+48h] [ebp-18h]
  int v26; // [esp+4Ch] [ebp-14h]
  _DWORD v27[4]; // [esp+50h] [ebp-10h] BYREF
  int v28; // [esp+6Ch] [ebp+Ch]

  if ( a4 ) /*0x6d304e*/
  {
    TacticalClass::DrawTerrain((int *)this, &DSurface_ViewBounds.field_0, &DSurface_ViewBounds); /*0x6d305a*/
  }
  else
  {
    if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d306c*/
      TacticalClass::DrawTerrain((int *)this, a2, a2); /*0x6d3072*/
    if ( a3[2] > 0 && a3[3] > 0 ) /*0x6d3087*/
      TacticalClass::DrawTerrain((int *)this, a3, a3); /*0x6d308d*/
  }
  if ( this->visibleCellCount > 0 && !a4 ) /*0x6d30a2*/
  {
    v28 = 0; /*0x6d30aa*/
    visibleCells = this->visibleCells; /*0x6d30be*/
    do /*0x6d31d6*/
    {
      Coord::Subtract( /*0x6d310e*/
        (Coord *)v18,
        ((((__int16)*(_DWORD *)(*visibleCells + 36) << 8) + 128) / 256) << 8,
        ((((__int16)HIWORD(*(_DWORD *)(*visibleCells + 36)) << 8) + 128) / 256) << 8,
        0);
      v19 = v18[0]; /*0x6d311f*/
      v20 = v18[1]; /*0x6d3123*/
      v21 = v18[2]; /*0x6d3133*/
      v6 = Coord::To_ScreenRaw(&v17, &v19); /*0x6d3137*/
      v7 = this->visibleArea[1]; /*0x6d3144*/
      v8 = *v6 - this->visibleArea[0]; /*0x6d314a*/
      v9 = v6[1]; /*0x6d314c*/
      v23[0] = v8 - 30; /*0x6d3152*/
      v23[3] = 30; /*0x6d315b*/
      v23[1] = (int)DSurface_ViewBounds.field_4 + v9 - v7; /*0x6d3175*/
      v23[2] = 60; /*0x6d3183*/
      v10 = ClipRectIntersection(v27, &DSurface_ViewBounds.field_0, v23, 0, 0); /*0x6d3187*/
      v24[0] = *v10; /*0x6d3190*/
      v24[1] = v10[1]; /*0x6d3197*/
      v25 = v10[2]; /*0x6d319e*/
      v11 = v10[3]; /*0x6d31a2*/
      v26 = v11; /*0x6d31a7*/
      if ( v25 > 0 && v11 > 0 ) /*0x6d31af*/
        TacticalClass::DrawTerrain((int *)this, v24, v24); /*0x6d31bd*/
      ++visibleCells; /*0x6d31cd*/
      ++v28; /*0x6d31d2*/
    }
    while ( v28 < this->visibleCellCount ); /*0x6d31d6*/
  }
  result = g_CraterCreationState; /*0x6d31dd*/
  if ( g_CraterCreationState ) /*0x6d31e4*/
  {
    result = g_CraterCreationState - 1; /*0x6d31ea*/
    if ( g_CraterCreationState - 1 >= 0 ) /*0x6d31ed*/
    {
      v13 = g_CraterCreationState; /*0x6d31f6*/
      v14 = 20 * result; /*0x6d31f9*/
      do /*0x6d327d*/
      {
        v19 = *(_DWORD *)((char *)g_CraterPool + v14); /*0x6d320b*/
        v20 = *(_DWORD *)((char *)g_CraterPool + v14 + 4); /*0x6d3212*/
        v21 = *(_DWORD *)((char *)g_CraterPool + v14 + 8); /*0x6d3219*/
        v22 = *(_DWORD *)((char *)g_CraterPool + v14 + 12); /*0x6d322c*/
        v20 += (int)DSurface_ViewBounds.field_4; /*0x6d323a*/
        v15 = ClipRectIntersection(v27, &DSurface_ViewBounds.field_0, &v19, 0, 0); /*0x6d3243*/
        v19 = *v15; /*0x6d3247*/
        v20 = v15[1]; /*0x6d324e*/
        result = v15[2]; /*0x6d3252*/
        v21 = result; /*0x6d3255*/
        v16 = v15[3]; /*0x6d3259*/
        v22 = v16; /*0x6d325e*/
        if ( result > 0 && v16 > 0 ) /*0x6d3266*/
          result = TacticalClass::DrawTerrain((int *)this, &v19, &v19); /*0x6d3274*/
        v14 -= 20; /*0x6d3279*/
        --v13; /*0x6d327c*/
      }
      while ( v13 ); /*0x6d327d*/
    }
  }
  return result; /*0x6d3283*/
}



// ==== 0x006D3290  ObjectClass::DrawBuildingAnimFrame  this=ObjectClass  sig=csp ====
int __thiscall DrawBuildingAnimFrame(ObjectClass *this, int *a2, int *a3, char a4)
{
  int v5; // ebp
  char *v6; // ebx
  int *v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  int result; // eax
  int v12; // ebx
  int v13; // esi
  int *v14; // ecx
  int v15; // ecx
  int v16; // [esp+Ch] [ebp-28h] BYREF
  int v17; // [esp+14h] [ebp-20h] BYREF
  int v18; // [esp+18h] [ebp-1Ch]
  int v19; // [esp+1Ch] [ebp-18h]
  int v20; // [esp+20h] [ebp-14h]
  int v21[4]; // [esp+24h] [ebp-10h] BYREF
  int v22; // [esp+40h] [ebp+Ch]

  if ( a4 ) /*0x6d329e*/
  {
    TacticalClass::DrawBuildingsInView((TacticalClass *)this, &DSurface_ViewBounds.field_0); /*0x6d32a5*/
  }
  else
  {
    if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d32b7*/
      TacticalClass::DrawBuildingsInView((TacticalClass *)this, a2); /*0x6d32bc*/
    if ( a3[2] > 0 && a3[3] > 0 ) /*0x6d32d1*/
      TacticalClass::DrawBuildingsInView((TacticalClass *)this, a3); /*0x6d32d6*/
  }
  if ( *((int *)this + 56) > 0 && !a4 ) /*0x6d32ec*/
  {
    v5 = 0; /*0x6d32f2*/
    v6 = (char *)this + 228; /*0x6d32fc*/
    do /*0x6d33bb*/
    {
      v22 = *(_DWORD *)(*(_DWORD *)v6 + 36); /*0x6d3307*/
      v18 = (((SHIWORD(v22) << 8) + 128) / 256) << 8; /*0x6d334b*/
      v17 = ((((__int16)v22 << 8) + 128) / 256) << 8; /*0x6d3358*/
      v19 = 0; /*0x6d335c*/
      v7 = Coord::To_ScreenRaw(&v16, &v17); /*0x6d3360*/
      v8 = *v7 - this->fallRate; /*0x6d336d*/
      v9 = this->u32_2D; /*0x6d336f*/
      v10 = v7[1]; /*0x6d3375*/
      v21[0] = v8 - 30; /*0x6d337b*/
      v21[2] = 60; /*0x6d3384*/
      v21[3] = 30; /*0x6d338d*/
      v21[1] = (int)DSurface_ViewBounds.field_4 + v10 - v9; /*0x6d33a3*/
      TacticalClass::DrawBuildingsInView((TacticalClass *)this, v21); /*0x6d33aa*/
      ++v5; /*0x6d33b5*/
      v6 += 4; /*0x6d33b6*/
    }
    while ( v5 < this->attachedBomb ); /*0x6d33bb*/
  }
  result = g_CraterCreationState; /*0x6d33c1*/
  if ( g_CraterCreationState ) /*0x6d33c9*/
  {
    result = g_CraterCreationState - 1; /*0x6d33cf*/
    if ( g_CraterCreationState - 1 >= 0 ) /*0x6d33d2*/
    {
      v12 = g_CraterCreationState; /*0x6d33db*/
      v13 = 20 * result; /*0x6d33de*/
      do /*0x6d345d*/
      {
        v17 = *(_DWORD *)((char *)g_CraterPool + v13); /*0x6d33f0*/
        v18 = *(_DWORD *)((char *)g_CraterPool + v13 + 4); /*0x6d33f7*/
        v19 = *(_DWORD *)((char *)g_CraterPool + v13 + 8); /*0x6d33fe*/
        v20 = *(_DWORD *)((char *)g_CraterPool + v13 + 12); /*0x6d3411*/
        v18 += (int)DSurface_ViewBounds.field_4; /*0x6d341f*/
        v14 = ClipRectIntersection(v21, &DSurface_ViewBounds.field_0, &v17, 0, 0); /*0x6d3428*/
        v17 = *v14; /*0x6d342c*/
        v18 = v14[1]; /*0x6d3433*/
        result = v14[2]; /*0x6d3437*/
        v19 = result; /*0x6d343a*/
        v15 = v14[3]; /*0x6d343e*/
        v20 = v15; /*0x6d3443*/
        if ( result > 0 && v15 > 0 ) /*0x6d344b*/
          result = (int)TacticalClass::DrawBuildingsInView((TacticalClass *)this, &v17); /*0x6d3454*/
        v13 -= 20; /*0x6d3459*/
        --v12; /*0x6d345c*/
      }
      while ( v12 ); /*0x6d345d*/
    }
  }
  return result; /*0x6d345f*/
}



// ==== 0x006D3470  ObjectClass::DrawBuildingShadow  this=ObjectClass  sig=csp ====
int __thiscall DrawBuildingShadow(ObjectClass *this, int *a2, int *a3, char a4)
{
  CellStruct *v5; // ecx
  int v6; // ebp
  char *v7; // edi
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
  _DWORD v23[4]; // [esp+34h] [ebp-10h] BYREF

  if ( a4 ) /*0x6d347f*/
  {
    v5 = &DSurface_ViewBounds; /*0x6d3481*/
LABEL_8:
    TacticalClass::DrawBuildings((TacticalClass *)v5); /*0x6d34b1*/
    goto LABEL_9; /*0x6d34b1*/
  }
  if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d3498*/
    TacticalClass::DrawBuildings((TacticalClass *)a2); /*0x6d349a*/
  v5 = (CellStruct *)a3; /*0x6d349f*/
  if ( a3[2] > 0 && a3[3] > 0 ) /*0x6d34af*/
    goto LABEL_8; /*0x6d34af*/
LABEL_9:
  if ( *((int *)this + 56) > 0 && !a4 ) /*0x6d34c6*/
  {
    v6 = 0; /*0x6d34cc*/
    v7 = (char *)this + 228; /*0x6d34d6*/
    do /*0x6d35a7*/
    {
      Coord::Subtract( /*0x6d3526*/
        (Coord *)v18,
        ((((__int16)*(_DWORD *)(*(_DWORD *)v7 + 36) << 8) + 128) / 256) << 8,
        ((((__int16)HIWORD(*(_DWORD *)(*(_DWORD *)v7 + 36)) << 8) + 128) / 256) << 8,
        0);
      v19 = v18[0]; /*0x6d3537*/
      v20 = v18[1]; /*0x6d353b*/
      v21 = v18[2]; /*0x6d354b*/
      v8 = Coord::To_ScreenRaw(&v17, &v19); /*0x6d354f*/
      v9 = *v8 - this->fallRate; /*0x6d355c*/
      v10 = this->u32_2D; /*0x6d355e*/
      v11 = v8[1]; /*0x6d3564*/
      v23[0] = v9 - 30; /*0x6d356a*/
      v23[2] = 60; /*0x6d3573*/
      v23[3] = 30; /*0x6d357c*/
      v23[1] = (char *)DSurface_ViewBounds.field_4 + v11 - v10; /*0x6d358e*/
      TacticalClass::DrawBuildings((TacticalClass *)v23); /*0x6d3596*/
      ++v6; /*0x6d35a1*/
      v7 += 4; /*0x6d35a2*/
    }
    while ( v6 < this->attachedBomb ); /*0x6d35a7*/
  }
  result = g_CraterCreationState; /*0x6d35ad*/
  if ( g_CraterCreationState ) /*0x6d35b4*/
  {
    result = g_CraterCreationState - 1; /*0x6d35ba*/
    if ( g_CraterCreationState - 1 >= 0 ) /*0x6d35bd*/
    {
      v13 = g_CraterCreationState; /*0x6d35c6*/
      v14 = 20 * result; /*0x6d35c9*/
      do /*0x6d3647*/
      {
        v19 = *(_DWORD *)((char *)g_CraterPool + v14); /*0x6d35dd*/
        v20 = *(_DWORD *)((char *)g_CraterPool + v14 + 4); /*0x6d35e4*/
        v21 = *(_DWORD *)((char *)g_CraterPool + v14 + 8); /*0x6d35eb*/
        v22 = *(_DWORD *)((char *)g_CraterPool + v14 + 12); /*0x6d35f7*/
        v20 += (int)DSurface_ViewBounds.field_4; /*0x6d360c*/
        v15 = ClipRectIntersection(v23, &DSurface_ViewBounds.field_0, &v19, 0, 0); /*0x6d3615*/
        v19 = *v15; /*0x6d3619*/
        v20 = v15[1]; /*0x6d3620*/
        result = v15[2]; /*0x6d3624*/
        v21 = result; /*0x6d3627*/
        v16 = v15[3]; /*0x6d362b*/
        v22 = v16; /*0x6d3630*/
        if ( result > 0 && v16 > 0 ) /*0x6d3638*/
          result = TacticalClass::DrawBuildings((TacticalClass *)&v19); /*0x6d363e*/
        v14 -= 20; /*0x6d3643*/
        --v13; /*0x6d3646*/
      }
      while ( v13 ); /*0x6d3647*/
    }
  }
  return result; /*0x6d3649*/
}



// ==== 0x006D3660  TacticalClass::CalcAllDrawPositions  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::CalcAllDrawPositions(TacticalClass *this, int *a2, int *a3, int *a4, char a5)
{
  int v6; // ebx
  int *visibleCells; // ebp
  int *Coords; // eax
  int *v9; // eax
  int v10; // ecx
  int v11; // esi
  int result; // eax
  char *v13; // ecx
  int v14; // ebp
  char *v15; // edx
  int v16; // ebx
  int *v17; // eax
  int *v18; // [esp+0h] [ebp-48h]
  int v19[2]; // [esp+10h] [ebp-38h] BYREF
  int v20[4]; // [esp+18h] [ebp-30h] BYREF
  int v21; // [esp+28h] [ebp-20h] BYREF
  int v22; // [esp+2Ch] [ebp-1Ch]
  int v23; // [esp+30h] [ebp-18h]
  int v24; // [esp+34h] [ebp-14h]
  int v25[4]; // [esp+38h] [ebp-10h] BYREF
  int v26; // [esp+58h] [ebp+10h]

  if ( this->visibleCellCount <= 0 ) /*0x6d3671*/
  {
    if ( !a5 ) /*0x6d3742*/
      goto LABEL_11; /*0x6d3742*/
LABEL_10:
    TacticalClass::CalcBuildingDrawPos(&DSurface_ViewBounds.field_0, v18); /*0x6d3744*/
    goto LABEL_11; /*0x6d374b*/
  }
  if ( a5 ) /*0x6d367d*/
    goto LABEL_10; /*0x6d367d*/
  v6 = 0; /*0x6d3683*/
  visibleCells = this->visibleCells; /*0x6d368d*/
  do /*0x6d3734*/
  {
    Coords = CellClass::GetCoords((CellClass *)*visibleCells, v25); /*0x6d369b*/
    v21 = *Coords; /*0x6d36a2*/
    v22 = Coords[1]; /*0x6d36ae*/
    v23 = 0; /*0x6d36c0*/
    v9 = Coord::To_ScreenRaw(v20, &v21); /*0x6d36c8*/
    v10 = v9[1] - this->visibleArea[1]; /*0x6d36e8*/
    v19[0] = *v9 - this->visibleArea[0] + DSurface_ViewBounds.field_0 - 30; /*0x6d36f4*/
    v19[1] = (int)DSurface_ViewBounds.field_4 + v10 - 15; /*0x6d3703*/
    if ( g_hWnd ) /*0x6d3707*/
      TacticalClass::RenderCellFogOfWar(*visibleCells, (unsigned int *)v19, a4); /*0x6d3716*/
    UpdateSpotlightsFoo(v19, a4); /*0x6d3723*/
    ++v6; /*0x6d372e*/
    ++visibleCells; /*0x6d372f*/
  }
  while ( v6 < this->visibleCellCount ); /*0x6d3734*/
LABEL_11:
  v11 = 0; /*0x6d3750*/
  if ( a2[2] > 0 && a2[3] > 0 && !a5 ) /*0x6d3766*/
    TacticalClass::CalcBuildingDrawPos(a2, v18); /*0x6d376b*/
  if ( a3[2] > 0 && a3[3] > 0 && !a5 ) /*0x6d3784*/
    TacticalClass::CalcBuildingDrawPos(a3, v18); /*0x6d3789*/
  result = g_CraterCreationState; /*0x6d378e*/
  v26 = 0; /*0x6d3793*/
  if ( g_CraterCreationState > 0 ) /*0x6d3799*/
  {
    v13 = (char *)g_CraterPool; /*0x6d379f*/
    do /*0x6d3860*/
    {
      v14 = *(_DWORD *)&v13[v11]; /*0x6d37af*/
      v15 = (char *)DSurface_ViewBounds.field_4 + *(_DWORD *)&v13[v11 + 4]; /*0x6d37b7*/
      v16 = *(_DWORD *)&v13[v11 + 8]; /*0x6d37b9*/
      v25[3] = *(_DWORD *)&v13[v11 + 12]; /*0x6d37c3*/
      v25[1] = (int)v15; /*0x6d37cf*/
      v25[0] = v14 + DSurface_ViewBounds.field_0; /*0x6d37dc*/
      v25[2] = v16; /*0x6d37e0*/
      v17 = ClipRectIntersection(v20, v25, a4, 0, 0); /*0x6d37e4*/
      v21 = *v17; /*0x6d37ed*/
      v22 = v17[1]; /*0x6d37f4*/
      v23 = v17[2]; /*0x6d37fb*/
      v13 = (char *)g_CraterPool; /*0x6d37ff*/
      v24 = v17[3]; /*0x6d3808*/
      if ( *((_BYTE *)g_CraterPool + v11 + 16) ) /*0x6d380c*/
      {
        TacticalClass::FillScanlinesTransparent( /*0x6d3835*/
          *(TacticalClass **)&stru_87E790.__pad_D8[60],
          *v17,
          v17[1],
          v17[2],
          v17[3]);
        TacticalClass::CalcBuildingDrawPos(&v21, v18); /*0x6d3841*/
        v13 = (char *)g_CraterPool; /*0x6d3846*/
      }
      result = v26 + 1; /*0x6d3856*/
      v11 += 20; /*0x6d3857*/
      ++v26; /*0x6d385c*/
    }
    while ( v26 < g_CraterCreationState ); /*0x6d3860*/
  }
  return result; /*0x6d3866*/
}



// ==== 0x006D3870  TacticalClass::ClickFindBuilding  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::ClickFindBuilding(TacticalClass *this, int *a2, int *a3, char a4)
{
  int *visibleCells; // edi
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
  int v20; // [esp+30h] [ebp-2Ch]
  int v21; // [esp+34h] [ebp-28h]
  int v22; // [esp+38h] [ebp-24h]
  int v23; // [esp+3Ch] [ebp-20h] BYREF
  char *v24; // [esp+40h] [ebp-1Ch]
  int v25; // [esp+44h] [ebp-18h]
  int v26; // [esp+48h] [ebp-14h]
  int v27; // [esp+4Ch] [ebp-10h] BYREF
  char *v28; // [esp+50h] [ebp-Ch]
  int v29; // [esp+54h] [ebp-8h]
  int v30; // [esp+58h] [ebp-4h]

  if ( this->visibleCellCount > 0 ) /*0x6d3881*/
  {
    v16 = 0; /*0x6d3887*/
    visibleCells = this->visibleCells; /*0x6d388f*/
    do /*0x6d3982*/
    {
      Coord::Subtract( /*0x6d38df*/
        (Coord *)v18,
        ((((__int16)*(_DWORD *)(*visibleCells + 36) << 8) + 128) / 256) << 8,
        ((((__int16)HIWORD(*(_DWORD *)(*visibleCells + 36)) << 8) + 128) / 256) << 8,
        0);
      v19 = v18[0]; /*0x6d38f0*/
      v20 = v18[1]; /*0x6d38f4*/
      v21 = v18[2]; /*0x6d3904*/
      v6 = Coord::To_ScreenRaw(&v17, &v19); /*0x6d3908*/
      v7 = *v6 - this->visibleArea[0] - 30; /*0x6d3928*/
      v24 = (char *)DSurface_ViewBounds.field_4 + v6[1] - this->visibleArea[1]; /*0x6d3931*/
      v28 = v24; /*0x6d3935*/
      v23 = v7; /*0x6d3939*/
      v27 = v7; /*0x6d393d*/
      v25 = 60; /*0x6d3959*/
      v26 = 30; /*0x6d395d*/
      v29 = 60; /*0x6d3961*/
      v30 = 30; /*0x6d3965*/
      TacticalClass::FindBuilding(1, &v23, &v27); /*0x6d3969*/
      ++visibleCells; /*0x6d3979*/
      ++v16; /*0x6d397e*/
    }
    while ( v16 < this->visibleCellCount ); /*0x6d3982*/
  }
  if ( g_CraterCreationState && g_CraterCreationState - 1 >= 0 ) /*0x6d3998*/
  {
    v8 = g_CraterCreationState; /*0x6d39a1*/
    v9 = 20 * (g_CraterCreationState - 1); /*0x6d39a4*/
    do /*0x6d3a47*/
    {
      v19 = *(_DWORD *)((char *)g_CraterPool + v9); /*0x6d39be*/
      v20 = *(_DWORD *)((char *)g_CraterPool + v9 + 4); /*0x6d39c5*/
      v21 = *(_DWORD *)((char *)g_CraterPool + v9 + 8); /*0x6d39ce*/
      v22 = *(_DWORD *)((char *)g_CraterPool + v9 + 12); /*0x6d39da*/
      v20 += (int)DSurface_ViewBounds.field_4; /*0x6d39e7*/
      v10 = ClipRectIntersection(&v23, &DSurface_ViewBounds.field_0, &v19, 0, 0); /*0x6d39eb*/
      v19 = *v10; /*0x6d39f4*/
      v20 = v10[1]; /*0x6d39fb*/
      v21 = v10[2]; /*0x6d3a02*/
      v11 = v10[3]; /*0x6d3a06*/
      v22 = v11; /*0x6d3a0b*/
      if ( v21 > 0 && v11 > 0 ) /*0x6d3a13*/
      {
        v12 = v10[1]; /*0x6d3a17*/
        v27 = *v10; /*0x6d3a1a*/
        v13 = v10[2]; /*0x6d3a1e*/
        v14 = v10[3]; /*0x6d3a21*/
        v28 = (char *)v12; /*0x6d3a24*/
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
    return TacticalClass::FindBuilding(1, &DSurface_ViewBounds.field_0, &DSurface_ViewBounds.field_0); /*0x6d3a63*/
  if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d3a82*/
    TacticalClass::FindBuilding(1, a2, a2); /*0x6d3a8a*/
  result = (int)a3; /*0x6d3a8f*/
  if ( a3[2] > 0 && a3[3] > 0 ) /*0x6d3a9f*/
    return TacticalClass::FindBuilding(1, a3, a3); /*0x6d3aa7*/
  return result; /*0x6d3a68*/
}



// ==== 0x006D3AC0  TacticalClass::ClickFindOverlay  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::ClickFindOverlay(TacticalClass *this, int *a2, int *a3, char a4)
{
  int *visibleCells; // edi
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
  int v20; // [esp+30h] [ebp-2Ch]
  int v21; // [esp+34h] [ebp-28h]
  int v22; // [esp+38h] [ebp-24h]
  int v23; // [esp+3Ch] [ebp-20h] BYREF
  char *v24; // [esp+40h] [ebp-1Ch]
  int v25; // [esp+44h] [ebp-18h]
  int v26; // [esp+48h] [ebp-14h]
  int v27; // [esp+4Ch] [ebp-10h] BYREF
  char *v28; // [esp+50h] [ebp-Ch]
  int v29; // [esp+54h] [ebp-8h]
  int v30; // [esp+58h] [ebp-4h]

  if ( this->visibleCellCount > 0 ) /*0x6d3ad1*/
  {
    v16 = 0; /*0x6d3ad7*/
    visibleCells = this->visibleCells; /*0x6d3adf*/
    do /*0x6d3bd2*/
    {
      Coord::Subtract( /*0x6d3b2f*/
        (Coord *)v18,
        ((((__int16)*(_DWORD *)(*visibleCells + 36) << 8) + 128) / 256) << 8,
        ((((__int16)HIWORD(*(_DWORD *)(*visibleCells + 36)) << 8) + 128) / 256) << 8,
        0);
      v19 = v18[0]; /*0x6d3b40*/
      v20 = v18[1]; /*0x6d3b44*/
      v21 = v18[2]; /*0x6d3b54*/
      v6 = Coord::To_ScreenRaw(&v17, &v19); /*0x6d3b58*/
      v7 = *v6 - this->visibleArea[0] - 30; /*0x6d3b78*/
      v24 = (char *)DSurface_ViewBounds.field_4 + v6[1] - this->visibleArea[1]; /*0x6d3b81*/
      v28 = v24; /*0x6d3b85*/
      v23 = v7; /*0x6d3b89*/
      v27 = v7; /*0x6d3b8d*/
      v25 = 60; /*0x6d3ba9*/
      v26 = 30; /*0x6d3bad*/
      v29 = 60; /*0x6d3bb1*/
      v30 = 30; /*0x6d3bb5*/
      TacticalClass::FindOverlay(1, &v23, &v27); /*0x6d3bb9*/
      ++visibleCells; /*0x6d3bc9*/
      ++v16; /*0x6d3bce*/
    }
    while ( v16 < this->visibleCellCount ); /*0x6d3bd2*/
  }
  if ( g_CraterCreationState && g_CraterCreationState - 1 >= 0 ) /*0x6d3be8*/
  {
    v8 = g_CraterCreationState; /*0x6d3bf1*/
    v9 = 20 * (g_CraterCreationState - 1); /*0x6d3bf4*/
    do /*0x6d3c97*/
    {
      v19 = *(_DWORD *)((char *)g_CraterPool + v9); /*0x6d3c0e*/
      v20 = *(_DWORD *)((char *)g_CraterPool + v9 + 4); /*0x6d3c15*/
      v21 = *(_DWORD *)((char *)g_CraterPool + v9 + 8); /*0x6d3c1e*/
      v22 = *(_DWORD *)((char *)g_CraterPool + v9 + 12); /*0x6d3c2a*/
      v20 += (int)DSurface_ViewBounds.field_4; /*0x6d3c37*/
      v10 = ClipRectIntersection(&v23, &DSurface_ViewBounds.field_0, &v19, 0, 0); /*0x6d3c3b*/
      v19 = *v10; /*0x6d3c44*/
      v20 = v10[1]; /*0x6d3c4b*/
      v21 = v10[2]; /*0x6d3c52*/
      v11 = v10[3]; /*0x6d3c56*/
      v22 = v11; /*0x6d3c5b*/
      if ( v21 > 0 && v11 > 0 ) /*0x6d3c63*/
      {
        v12 = v10[1]; /*0x6d3c67*/
        v27 = *v10; /*0x6d3c6a*/
        v13 = v10[2]; /*0x6d3c6e*/
        v14 = v10[3]; /*0x6d3c71*/
        v28 = (char *)v12; /*0x6d3c74*/
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
    return TacticalClass::FindOverlay(1, &DSurface_ViewBounds.field_0, &DSurface_ViewBounds.field_0); /*0x6d3cb3*/
  if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d3cd2*/
    TacticalClass::FindOverlay(1, a2, a2); /*0x6d3cda*/
  result = (int)a3; /*0x6d3cdf*/
  if ( a3[2] > 0 && a3[3] > 0 ) /*0x6d3cef*/
    return TacticalClass::FindOverlay(1, a3, a3); /*0x6d3cf7*/
  return result; /*0x6d3cb8*/
}



// ==== 0x006D3D10  TacticalMap::Render  this=Tactical  sig=csp ====
int __thiscall TacticalMap_Render(int this, int a2, int a3, int a4)
{
  char v5; // al
  int v6; // edi
  int v7; // ebx
  unsigned int v8; // esi
  unsigned int v9; // edi
  int v10; // eax
  int result; // eax
  int v12; // ebx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  bool v16; // bl
  bool v17; // sf
  bool v18; // of
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int *v22; // eax
  int v23; // edx
  int v24; // edx
  int v25; // ecx
  int v26; // ebx
  int v27; // eax
  int v28; // edx
  char *v29; // esi
  char *v30; // edi
  int v31; // edx
  int v32; // ecx
  int v33; // ebx
  _BYTE *v34; // esi
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // edi
  DWORD v39; // ebx
  int *v40; // eax
  int v41; // ecx
  int v42; // edi
  int v43; // edx
  double v44; // st7
  int v45; // ebx
  double v46; // st7
  _DWORD *v47; // eax
  int v48; // eax
  int v49; // esi
  int v50; // ecx
  int v51; // ebx
  int v52; // edi
  _DWORD *v53; // eax
  int v... [22877 chars total]



// ==== 0x006D4B50  PrintTimerOnTactical::Start  this=PrintTimerOnTactical  sig=csp ====
int *__fastcall PrintTimerOnTactical::Start(int a1, int a2, int a3, wchar_t *Format, _DWORD *a5, bool *a6)
{
  _DWORD *Instance; // ebx
  int v7; // edi
  int v8; // ebp
  int v9; // ebp
  int v10; // edi
  unsigned __int64 v11; // rax
  int v12; // eax
  bool v13; // cf
  bool *v14; // eax
  int v15; // edx
  int v16; // esi
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  int v20; // [esp-10h] [ebp-654h]
  int v21; // [esp-Ch] [ebp-650h]
  int v22; // [esp-8h] [ebp-64Ch]
  int v23; // [esp-4h] [ebp-648h]
  int v24; // [esp-4h] [ebp-648h]
  int v25; // [esp+0h] [ebp-644h]
  int v26; // [esp+10h] [ebp-634h] BYREF
  wchar_t *v27; // [esp+14h] [ebp-630h]
  int v28; // [esp+18h] [ebp-62Ch]
  int v29; // [esp+1Ch] [ebp-628h] BYREF
  int v30; // [esp+20h] [ebp-624h] BYREF
  _DWORD v31[3]; // [esp+24h] [ebp-620h] BYREF
  int v32; // [esp+30h] [ebp-614h] BYREF
  int v33; // [esp+34h] [ebp-610h] BYREF
  char v34[12]; // [esp+38h] [ebp-60Ch] BYREF
  wchar_t v35[256]; // [esp+44h] [ebp-600h] BYREF
  wchar_t v36; // [esp+244h] [ebp-400h] BYREF
  char v37[508]; // [esp+248h] [ebp-3FCh] BYREF
  wchar_t Buffer[256]; // [esp+444h] [ebp-200h] BYREF

  v29 = a1; /*0x6d4b58*/
  v28 = a2; /*0x6d4b5e*/
  Instance = (_DWORD *)TextRenderer::GetInstance(); /*0x6d4b73*/
  v7 = a3 / 60 / 60; /*0x6d4ba4*/
  v8 = a3 % 60; /*0x6d4bb0*/
  v23 = a3 % 60; /*0x6d4bb7*/
  v27 = (wchar_t *)(a3 / 60 % 60); /*0x6d4bb8*/
  if ( v7 ) /*0x6d4bbd*/
  {
    swprintf(Buffer, (const size_t)&off_842AD8, Format, a3 / 60 / 60, v27, v23); /*0x6d4bd5*/
    swprintf(&v36, (const size_t)&off_842ACC, Format); /*0x6d4bef*/
    swprintf(v35, (const size_t)&off_842AB0, (const wchar_t *const)v7, v27, v8); /*0x6d4c05*/
  }
  else
  {
    swprintf(Buffer, (const size_t)&off_842A94, Format, v27, v23); /*0x6d4c24*/
    swprintf(&v36, (const size_t)&off_842ACC, Format); /*0x6d4c37*/
    swprintf(v35, (const size_t)a02d02d, v27, v8); /*0x6d4c4c*/
  }
  v26 = 0; /*0x6d4c68*/
  Text::Layout(Instance, v35, &v26, 0, dword_886FA8); /*0x6d4c70*/
  v9 = v28; /*0x6d4c77*/
  v10 = v28; /*0x6d4c7b*/
  if ( !a3 && a5 && a6 ) /*0x6d4c93*/
  {
    LODWORD(v11) = Audio::Callback(); /*0x6d4c95*/
    if ( *(_QWORD *)a5 > v11 ) /*0x6d4ca7*/
    {
      v14 = a6; /*0x6d4ccd*/
    }
    else
    {
      v12 = Audio::Callback(); /*0x6d4ca9*/
      v13 = __CFADD__(v12, 1000); /*0x6d4cae*/
      *a5 = v12 + 1000; /*0x6d4cb3*/
      v14 = a6; /*0x6d4cb5*/
      a5[1] = v13 + v15; /*0x6d4cbf*/
      *a6 = !*a6; /*0x6d4cc9*/
    }
    if ( *v14 ) /*0x6d4cd4*/
      v10 = *((_DWORD *)dword_B054D4 + 5); /*0x6d4cdf*/
  }
  v16 = v29 + 1; /*0x6d4cf2*/
  v31[1] = dword_886FAC - (v29 + 1) * (Instance[7] + 2); /*0x6d4d0b*/
  v31[0] = dword_886FA8 - v26 - 3; /*0x6d4d1f*/
  v17 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD *))(*(_DWORD *)DSurface_Composite + 120))( /*0x6d4d2a*/
                    DSurface_Composite,
                    &v33,
                    v31);
  TextRenderer::DrawText(&v30, (size_t)v37, DSurface_Composite, v17, v9, 0, 17944, v25); /*0x6d4d42*/
  v33 = dword_886FAC - v16 * (Instance[7] + 2); /*0x6d4d66*/
  v32 = dword_886FA8 - 3; /*0x6d4d7a*/
  v18 = (_DWORD *)(*(int (__thiscall **)(int, char *, int *, int, _DWORD, int))(*(_DWORD *)DSurface_Composite + 120))( /*0x6d4d85*/
                    DSurface_Composite,
                    v34,
                    &v32,
                    v10,
                    0,
                    17944);
  return TextRenderer::DrawText(&v29, (size_t)v35, DSurface_Composite, v18, v20, v21, v22, v24); /*0x6d4da2*/
}



// ==== 0x006D4DB0  HouseClass::SetOwnerName  this=HouseClass  sig=csp ====
wchar_t *__thiscall HouseClass::SetOwnerName(HouseClass *this, wchar_t *Source, int a3)
{
  wchar_t *result; // eax

  if ( Source ) /*0x6d4db9*/
  {
    result = wcscpy((wchar_t *)&this->arrayIndex, Source); /*0x6d4ddc*/
    this->psychicDetectionBuildings[0] = a3; /*0x6d4de8*/
  }
  else
  {
    LOWORD(this->arrayIndex) = 0; /*0x6d4dbb*/
    this->psychicDetectionBuildings[0] = -1; /*0x6d4dc3*/
    this->psychicDetectionBuildings[0] = a3; /*0x6d4dcd*/
    return (wchar_t *)a3; /*0x6d4dbf*/
  }
  return result; /*0x6d4dd3*/
}



// ==== 0x006D4E00  ObjectClass::method_6D4E00  this=ObjectClass  sig=csp ====
void __thiscall sub_6D4E00(ObjectClass *this)
{
  this->location[2] = -1; /*0x6d4e00*/
  LOWORD(this->occupant) = 0; /*0x6d4e0a*/
}



// ==== 0x006D4E20  Tactical::DisplayTacticalOverlayText  this=Tactical  sig=csp ====
void __thiscall Tactical::DisplayTacticalOverlayText(Tactical *this, wchar_t *String)
{
  signed int v3; // edi
  __int64 v4; // rax
  int v5; // kr00_4
  int v6; // ebx
  Char *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // ebx
  int v11; // ebp
  int v12; // [esp+10h] [ebp-2Ch] BYREF
  int v13[2]; // [esp+14h] [ebp-28h] BYREF
  int v14; // [esp+1Ch] [ebp-20h]
  char *v15; // [esp+20h] [ebp-1Ch]
  int v16; // [esp+24h] [ebp-18h]
  int v17; // [esp+28h] [ebp-14h]
  _DWORD v18[4]; // [esp+2Ch] [ebp-10h] BYREF

  if ( !stru_A8EB00.?[391] && (String && wcslen(String) || *(_DWORD *)&this->__pad_34[112] != -1) ) /*0x6d4e52*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(AudioStream *))(*(_DWORD *)DSurface_Composite->__pad_0 + 132))(DSurface_Composite) ) /*0x6d4e60*/
    {
      v3 = *(_DWORD *)&this->__pad_34[112]; /*0x6d4e6e*/
      if ( v3 != -1 /*0x6d4e93*/
        && *(_DWORD *)&stru_A8EB00.?[2996]
        && *(_DWORD *)&stru_A8EB00.?[2992]
        && *(__int16 *)(*(_DWORD *)&stru_A8EB00.?[2992] + 6) > v3 )
      {
        v4 = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4] - *(__int16 *)(*(_DWORD *)&stru_A8EB00.?[2992] + 4); /*0x6d4ea0*/
        v5 = *(_DWORD *)DSurface_ViewBounds.__pad_8 - *(__int16 *)(*(_DWORD *)&stru_A8EB00.?[2992] + 2); /*0x6d4eb1*/
        v13[1] = ((int)v4 - HIDWORD(v4)) >> 1; /*0x6d4eb9*/
        v13[0] = v5 / 2; /*0x6d4ebd*/
        DrawToSurfaceSHP( /*0x6d4ee5*/
          (int)DSurface_Composite,
          *(int *)&stru_A8EB00.?[2996],
          *(int *)&stru_A8EB00.?[2992],
          v3,
          v13,
          &DSurface_ViewBounds.field_0,
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
          v15 = (char *)DSurface_ViewBounds.field_4; /*0x6d4f18*/
          v17 = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x6d4f35*/
          v6 = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x6d4f3e*/
          v7 = (Char *)g_FogOfWarState; /*0x6d4f4c*/
          v8 = DSurface_ViewBounds.field_0; /*0x6d4f5a*/
          v14 = DSurface_ViewBounds.field_0; /*0x6d4f61*/
          v16 = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x6d4f65*/
          v9 = (255 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6d4f89*/
             | (255 >> g_BitMask_Blue << g_BitMask_Green)
             | (255 >> g_BitMask_Red << g_BitShift_Blue);
          Text::Layout(g_FogOfWarState, String, &v12, v13, *(int *)DSurface_ViewBounds.__pad_8); /*0x6d4f90*/
          v18[0] = v14; /*0x6d4fbb*/
          v10 = v8 + (v6 - v12) / 2; /*0x6d4fc1*/
          v18[2] = v16 + v14; /*0x6d4fc9*/
          v18[1] = v15; /*0x6d4fd1*/
          v18[3] = &v15[v17]; /*0x6d4fd9*/
          v11 = (int)&v15[(v17 - v13[0]) / 2]; /*0x6d4fdf*/
          Char::Swap(v7, 1); /*0x6d4fe1*/
          TextGroup::SetRect((TextGroup *)v7, v18); /*0x6d4fed*/
          Property::Set((Property *)v7, v9); /*0x6d4ff5*/
          FontRenderer::DrawText(v7, (int *)DSurface_Composite->__pad_0, String, v10, v11, 0, 0); /*0x6d5013*/
        }
      }
    }
  }
}



// ==== 0x006D5030  RadarClass::DrawBlips  this=RadarClass  sig=csp ====
char __thiscall RadarClass::DrawBlips(RadarClass *this, char a2)
{
  int *v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ebx
  __int16 v8; // si
  int v9; // ecx
  int v10; // edi
  int *v11; // eax
  int RadarClass_field_0xB0; // edx
  int v13; // esi
  void *v14; // eax
  char v15; // al
  int v16; // edi
  int *v17; // eax
  int v18; // edx
  int v19; // ebx
  int v20; // ecx
  int v21; // eax
  CellStruct *v22; // eax
  CellStruct *v23; // eax
  _DWORD *v24; // eax
  CellStruct *v25; // eax
  CellStruct *v26; // eax
  int v27; // edx
  int v28; // eax
  CellStruct *v29; // eax
  CellStruct *v30; // eax
  int v31; // edx
  int v32; // ecx
  int v33; // edx
  int v34; // ebx
  __int64 v35; // rax
  int v36; // edi
  __int64 v37; // rax
  int v38; // ecx
  void *v39; // eax
  char v41; // [esp+13h] [ebp-41h]
  int v42; // [esp+14h] [ebp-40h]
  __int16 v43; // [esp+1Ah] [ebp-3Ah]
  __int16 v44; // [esp+1Ah] [ebp-3Ah]
  int i; // [esp+1Ch] [ebp-38h]
  int v46; // [esp+1Ch] [ebp-38h]
  int v47; // [esp+20h] [ebp-34h] BYREF
  __int16 v48[2]; // [esp+24h] [ebp-30h] BYREF
  __int16 v49[2]; // [esp+28h] [ebp-2Ch] BYREF
  int v50; // [esp+2Ch] [ebp-28h] BYREF
  int v51; // [esp+30h] [ebp-24h]
  int v52[2]; // [esp+34h] [ebp-20h] BYREF
  int v53; // [esp+3Ch] [ebp-18h] BYREF
  int v54; // [esp+40h] [ebp-14h]
  int GroundHeight; // [esp+44h] [ebp-10h]
  int v56; // [esp+48h] [ebp-Ch] BYREF
  int v57; // [esp+4Ch] [ebp-8h]
  int v58; // [esp+50h] [ebp-4h]

  v42 = 0; /*0x6d5048*/
  if ( dword_880990 ) /*0x6d5055*/
  {
    v3 = (int *)(*(int (__thiscall **)(MouseClass *, int *))(dword_887640->MouseClass_field_0x0 + 52))( /*0x6d5071*/
                  dword_887640,
                  v52);
    v4 = *v3; /*0x6d5073*/
    v5 = v3[1]; /*0x6d5077*/
    if ( v4 < DSurface_ViewBounds.field_0 ) /*0x6d507a*/
      return v4; /*0x6d507a*/
    if ( v4 >= DSurface_ViewBounds.field_0 + dword_886FA8 ) /*0x6d508a*/
      return v4; /*0x6d508a*/
    LOBYTE(v4) = dword_886FA4; /*0x6d5090*/
    if ( v5 < dword_886FA4 ) /*0x6d5097*/
      return v4; /*0x6d5097*/
    LOBYTE(v4) = dword_886FAC + dword_886FA4; /*0x6d50a3*/
    if ( v5 >= dword_886FAC + dword_886FA4 ) /*0x6d50a7*/
      return v4; /*0x6d50a7*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_880990 + 44))(dword_880990) == 7 /*0x6d50c3*/
      && *(_BYTE *)(dword_880990 + 5815) )
    {
      LOWORD(v6) = 3; /*0x6d50df*/
      v43 = 3; /*0x6d50f1*/
      v42 = -1; /*0x6d50f5*/
    }
    else
    {
      v6 = *CoordList::GetBounds(v49, (__int16 *)dword_880964); /*0x6d5110*/
      v43 = HIWORD(v6); /*0x6d5112*/
    }
    v7 = (__int16)v42; /*0x6d5116*/
    v8 = HIWORD(v42); /*0x6d511b*/
    v41 = 1; /*0x6d5120*/
    v9 = (__int16)v6; /*0x6d5125*/
    for ( i = (__int16)v6; v7 < v9; ++v7 ) /*0x6d512e*/
    {
      v10 = v8; /*0x6d5139*/
      if ( v8 < v43 ) /*0x6d513e*/
      {
        do /*0x6d5272*/
        {
          LOWORD(v47) = v7 + dword_88095C; /*0x6d5155*/
          HIWORD(v47) = HIWORD(dword_88095C) + v10; /*0x6d5164*/
          v48[0] = dword_880960 + v7 + dword_88095C; /*0x6d5179*/
          v48[1] = HIWORD(dword_88095C) + v10 + HIWORD(dword_880960); /*0x6d517e*/
          *(_DWORD *)v49 = *(_DWORD *)v48; /*0x6d5187*/
          Coord::Subtract((Coord *)&v53, (((v48[0] << 8) + 128) / 256) << 8, (((v48[1] << 8) + 128) / 256) << 8, 0); /*0x6d51c8*/
          v56 = v53; /*0x6d51d9*/
          v57 = v54; /*0x6d51dd*/
          v58 = GroundHeight; /*0x6d51ed*/
          v11 = Coord::To_ScreenRaw(v52, &v56); /*0x6d51f1*/
          RadarClass_field_0xB0 = this->RadarClass_field_0xB0; /*0x6d51f6*/
          v13 = *(_DWORD *)this->__pad_B4; /*0x6d51fc*/
          v50 = *v11; /*0x6d5206*/
          v51 = v11[1] - v13; /*0x6d5218*/
          v50 = v50 - RadarClass_field_0xB0 - 30; /*0x6d5222*/
          if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v49) ) /*0x6d5226*/
          {
            v14 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v49); /*0x6d5239*/
            if ( !BuildingPlacement::RenderBuildingPlacementPreview((int)v14, &v50, &DSurface_ViewBounds.field_0, a2) /*0x6d5263*/
              || (v15 = v41, v41 = 1, !v15) )
            {
              v41 = 0; /*0x6d5265*/
            }
          }
          ++v10; /*0x6d526f*/
        }
        while ( v10 < v43 ); /*0x6d5272*/
        v9 = i; /*0x6d5278*/
        v8 = HIWORD(v42); /*0x6d527c*/
      }
    }
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_880990 + 44))(dword_880990); /*0x6d5295*/
    if ( byte_A8ED6B && dword_88098C ) /*0x6d52ab*/
    {
      v49[0] = v42 + dword_88095C; /*0x6d52cc*/
      v49[1] = v8 + HIWORD(dword_88095C); /*0x6d52d1*/
      v53 = ((__int16)(dword_880960 + v42 + dword_88095C) << 8) + 128; /*0x6d5302*/
      v54 = ((__int16)(v8 + HIWORD(dword_88095C) + HIWORD(dword_880960)) << 8) + 128; /*0x6d5306*/
      GroundHeight = 0; /*0x6d530a*/
      if ( v16 == 7 ) /*0x6d530e*/
      {
        Coord::Subtract( /*0x6d5337*/
          (Coord *)&v56,
          ((((__int16)(dword_880960 + v42 + dword_88095C) << 8) + 128) / 256) << 8,
          ((((__int16)(v8 + HIWORD(dword_88095C) + HIWORD(dword_880960)) << 8) + 128) / 256) << 8,
          0);
        v53 = v56; /*0x6d5348*/
        v54 = v57; /*0x6d534c*/
        GroundHeight = v58; /*0x6d5350*/
      }
      GroundHeight = Cell::GetGroundHeight(&v53); /*0x6d5369*/
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_88098C + 436))(dword_88098C, &v53); /*0x6d5374*/
      v17 = Coord::To_ScreenRaw(v52, &v53); /*0x6d5386*/
      v18 = this->RadarClass_field_0xB0; /*0x6d538b*/
      v19 = *(_DWORD *)this->__pad_B4; /*0x6d5391*/
      v50 = *v17; /*0x6d539b*/
      v20 = v17[1]; /*0x6d53a1*/
      v50 -= v18; /*0x6d53a4*/
      v51 = v20 - v19; /*0x6d53ad*/
      if ( v16 != 18 ) /*0x6d53b1*/
        (*(void (__thiscall **)(int, int *, CellStruct *))(*(_DWORD *)dword_88098C + 280))( /*0x6d53c5*/
          dword_88098C,
          &v50,
          &DSurface_ViewBounds);
    }
    if ( v41 && dword_88098C && (*(int (__thiscall **)(int))(*(_DWORD *)dword_88098C + 44))(dword_88098C) == 6 ) /*0x6d53ed*/
    {
      v21 = *(_DWORD *)(dword_88098C + 1312); /*0x6d53f8*/
      if ( *(_BYTE *)(v21 + 5822) ) /*0x6d53fe*/
      {
        v22 = (CellStruct *)CellStruct::Set((CellStruct *)&v47, v42, v8); /*0x6d542a*/
        v23 = (CellStruct *)CellStruct::Add(v22, v48, &dword_88095C); /*0x6d5431*/
        v24 = CellStruct::Add(v23, v49, &dword_880960); /*0x6d5438*/
        RenderBridgeRadarBlips((TechnoClass *)this, a2, (_DWORD *)*v24); /*0x6d544b*/
      }
      else if ( *(_BYTE *)(v21 + 5824) ) /*0x6d5455*/
      {
        v25 = (CellStruct *)CellStruct::Set((CellStruct *)&v47, v42, v8); /*0x6d5481*/
        v26 = (CellStruct *)CellStruct::Add(v25, v48, &dword_88095C); /*0x6d5488*/
        v27 = *CellStruct::Add(v26, v49, &dword_880960); /*0x6d5494*/
        RadarClass::DrawBlip(this, a2, v27); /*0x6d54a2*/
      }
      else
      {
        v28 = *(_DWORD *)(v21 + 3668); /*0x6d54a9*/
        if ( v28 && *(_BYTE *)(v28 + 680) ) /*0x6d54b3*/
        {
          v29 = (CellStruct *)CellStruct::Set((CellStruct *)&v47, v42, v8); /*0x6d54df*/
          v30 = (CellStruct *)CellStruct::Add(v29, v48, &dword_88095C); /*0x6d54e6*/
          v31 = *CellStruct::Add(v30, v49, &dword_880960); /*0x6d54f2*/
          RenderRadarBlips((TechnoClass *)this, a2, v31); /*0x6d5500*/
        }
      }
    }
  }
  else
  {
    v8 = 0; /*0x6d5507*/
  }
  LOBYTE(v4) = byte_A8ED6B; /*0x6d550c*/
  if ( !byte_A8ED6B && dword_88097C ) /*0x6d5521*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_88097C + 44))(dword_88097C) == 7 /*0x6d5536*/
      && *(_BYTE *)(dword_88097C + 5815) )
    {
      v49[0] = 3; /*0x6d5548*/
      v49[1] = 3; /*0x6d554d*/
      v4 = *(_DWORD *)v49; /*0x6d5552*/
      v49[0] = -1; /*0x6d5556*/
      v49[1] = -1; /*0x6d555b*/
      LOWORD(v42) = -1; /*0x6d5564*/
      v8 = -1; /*0x6d5568*/
      v44 = HIWORD(v4); /*0x6d556d*/
    }
    else
    {
      v4 = *CoordList::GetBounds(v49, (__int16 *)dword_880974); /*0x6d5589*/
      v44 = HIWORD(v4); /*0x6d558b*/
    }
    v32 = (__int16)v42; /*0x6d558f*/
    v33 = (__int16)v4; /*0x6d5594*/
    v42 = (__int16)v42; /*0x6d5599*/
    v46 = (__int16)v4; /*0x6d559d*/
    if ( (__int16)v42 < (__int16)v4 ) /*0x6d55a1*/
    {
      v47 = v8; /*0x6d55aa*/
      do /*0x6d5715*/
      {
        LOBYTE(v4) = v44; /*0x6d55ae*/
        v34 = v47; /*0x6d55b3*/
        if ( v47 < v44 ) /*0x6d55b9*/
        {
          while ( 1 ) /*0x6d55e4*/
          {
            HIWORD(v50) = v34 + HIWORD(dword_88096A); /*0x6d55e4*/
            v49[0] = dword_88096E + dword_88096A + v32; /*0x6d55ed*/
            v49[1] = HIWORD(dword_88096E) + v34 + HIWORD(dword_88096A); /*0x6d55fa*/
            *(_DWORD *)v48 = *(_DWORD *)v49; /*0x6d5608*/
            v35 = 15360 * (((v49[0] << 8) + 128) / 256); /*0x6d5642*/
            v36 = v35 - HIDWORD(v35); /*0x6d5645*/
            v37 = 7680 * (((v49[0] << 8) + 128) / 256); /*0x6d5652*/
            v53 = -15360 * (((v49[1] << 8) + 128) / 256) / 2 + (v36 >> 1); /*0x6d5674*/
            v38 = v53 / 256 - this->RadarClass_field_0xB0; /*0x6d56b1*/
            v52[1] = (7680 * (((v49[1] << 8) + 128) / 256) / 2 + (((int)v37 - HIDWORD(v37)) >> 1)) / 256 /*0x6d56b5*/
                   - *(_DWORD *)this->__pad_B4;
            v52[0] = v38 - 30; /*0x6d56c0*/
            if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v48) ) /*0x6d56ca*/
            {
              v39 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v48); /*0x6d56dd*/
              BuildingPlacement::RenderBuildingPlacementPreview((int)v39, v52, &DSurface_ViewBounds.field_0, a2); /*0x6d56f3*/
            }
            LOBYTE(v4) = v44; /*0x6d56f8*/
            if ( ++v34 >= v44 ) /*0x6d5700*/
              break; /*0x6d5700*/
            LOWORD(v32) = v42; /*0x6d55c1*/
          }
          v33 = v46; /*0x6d5706*/
          v32 = v42; /*0x6d570a*/
        }
        v42 = ++v32; /*0x6d5711*/
      }
      while ( v32 < v33 ); /*0x6d5715*/
    }
  }
  return v4; /*0x6d571b*/
}



// ==== 0x006D5730  ObjectClass::RenderBridgeRadarBlips  this=ObjectClass  sig=csp ====
int __thiscall RenderBridgeRadarBlips(TechnoClass *this, char a2, _DWORD *a3)
{
  int v3; // edx
  int result; // eax
  int v6; // ebp
  _WORD *v7; // edi
  __int16 v8; // dx
  Cell *v9; // eax
  CellClass *v10; // esi
  __int16 v11; // cx
  int v12; // edi
  int v13; // ebp
  int *v14; // eax
  int queuedMission; // esi
  int v16; // ecx
  __int16 v17[2]; // [esp+10h] [ebp-40h] BYREF
  __int16 v18[2]; // [esp+14h] [ebp-3Ch] BYREF
  int v19; // [esp+18h] [ebp-38h]
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
    result = (int)a3; /*0x6d573f*/
    *(_DWORD *)v18 = a3; /*0x6d5749*/
    v6 = 0; /*0x6d574d*/
    v22 = *(int *)(*(_DWORD *)(dword_88098C + 1312) + 1464) >> 8; /*0x6d5760*/
    if ( v22 > 0 )
    {
      v7 = (_WORD *)(4 * (v3 & 7) + 9041544); /*0x6d576d*/
      v25 = v7; /*0x6d5774*/
      while ( 1 ) /*0x6d577f*/
      {
        v8 = v18[1] + v7[1]; /*0x6d577f*/
        LOWORD(v19) = *v7 + result; /*0x6d5788*/
        HIWORD(v19) = v8; /*0x6d578e*/
        *(_DWORD *)v18 = v19; /*0x6d579c*/
        v9 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v18); /*0x6d57a0*/
        result = (int)Cell::IsBridge(v9); /*0x6d57a7*/
        if ( result ) /*0x6d57ae*/
          break; /*0x6d57ae*/
        v10 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v18); /*0x6d57bf*/
        result = (int)CellClass::FindInfantry(v10, 0); /*0x6d57c5*/
        if ( result ) /*0x6d57cc*/
          goto LABEL_15; /*0x6d57cc*/
        result = (unsigned __int8)v10->slopeIndex[0]; /*0x6d57d2*/
        if ( (_BYTE)result ) /*0x6d57da*/
          goto LABEL_15; /*0x6d57da*/
        result = v10->CellClass_field_4C; /*0x6d57e0*/
        if ( result ) /*0x6d57e5*/
          goto LABEL_15; /*0x6d57e5*/
        result = v22; /*0x6d57eb*/
        if ( ++v6 >= v22 ) /*0x6d57f2*/
          goto LABEL_15; /*0x6d57f2*/
        LOWORD(result) = v18[0]; /*0x6d57f8*/
      }
      if ( *(_BYTE *)(*(_DWORD *)(result + 1312) + 5822) )
      {
        result = House::IsHumanPlayer(*(House **)(result + 540)); /*0x6d581b*/
        if ( (_BYTE)result )
        {
          if ( v6 > 0 )
          {
            v11 = HIWORD(a3) + v7[1]; /*0x6d5844*/
            LOWORD(v20) = (_WORD)a3 + *v7; /*0x6d5855*/
            v24 = a2 != 0 ? 67078 : 132614;
            HIWORD(v20) = v11; /*0x6d585e*/
            *(_DWORD *)v17 = v20; /*0x6d5869*/
            v22 = v6; /*0x6d5873*/
            do /*0x6d59a0*/
            {
              v12 = -1 - 15 * *((char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v17) + 283); /*0x6d58a0*/
              v13 = -2 - 15 * *((char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v17) + 283); /*0x6d58d4*/
              v28[1] = (((v17[1] << 8) + 128) / 256) << 8; /*0x6d58f6*/
              v28[2] = 0; /*0x6d58fc*/
              v28[0] = (((v17[0] << 8) + 128) / 256) << 8; /*0x6d590e*/
              v14 = Coord::To_ScreenRaw(&v27, v28); /*0x6d5912*/
              queuedMission = this->queuedMission; /*0x6d5919*/
              v16 = v14[1]; /*0x6d5921*/
              v26[0] = *v14 - this->suspendedMission; /*0x6d5932*/
              v26[1] = v12 + v16 - queuedMission; /*0x6d594d*/
              DrawToSurfaceSHP( /*0x6d596b*/
                (int)g_DSurface_Hidden_2,
                (int)dword_87F6C4,
                dword_8A03FC,
                0,
                v26,
                &DSurface_ViewBounds.field_0,
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
              LOWORD(v21) = v17[0] + *v25; /*0x6d597c*/
              HIWORD(v21) = v25[1] + v17[1]; /*0x6d598a*/
              *(_DWORD *)v17 = v21; /*0x6d5993*/
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



// ==== 0x006D59D0  RadarClass::DrawBlip  this=RadarClass  sig=csp ====
int __thiscall RadarClass::DrawBlip(RadarClass *this, char a2, int a3)
{
  char v3; // dl
  int result; // eax
  int v6; // edi
  int v7; // ebp
  _WORD *v8; // esi
  __int16 v9; // dx
  Cell *v10; // eax
  _DWORD *v11; // eax
  int *v12; // eax
  __int16 v13; // dx
  int v14; // edi
  int v15; // ebp
  int *v16; // eax
  int v17; // esi
  int v18; // ecx
  bool v19; // zf
  int v20; // [esp-Ch] [ebp-5Ch]
  int v21; // [esp-8h] [ebp-58h]
  Object *v22; // [esp-4h] [ebp-54h]
  __int16 v23[2]; // [esp+10h] [ebp-40h] BYREF
  __int16 v24[2]; // [esp+14h] [ebp-3Ch] BYREF
  int v25; // [esp+18h] [ebp-38h]
  int v26; // [esp+1Ch] [ebp-34h]
  int v27; // [esp+20h] [ebp-30h]
  int v28; // [esp+24h] [ebp-2Ch]
  int i; // [esp+28h] [ebp-28h]
  int v30; // [esp+2Ch] [ebp-24h]
  _WORD *v31; // [esp+30h] [ebp-20h]
  int v32[2]; // [esp+34h] [ebp-1Ch] BYREF
  int v33; // [esp+3Ch] [ebp-14h] BYREF
  _DWORD v34[3]; // [esp+44h] [ebp-Ch] BYREF

  v3 = 0; /*0x6d59d5*/
  for ( i = 0; i < 8; i += 2 )
  {
    result = a3; /*0x6d59df*/
    *(_DWORD *)v24 = a3; /*0x6d59e9*/
    v6 = 0; /*0x6d59ed*/
    v28 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_E12[1418] + 1312); /*0x6d59f5*/
    v7 = *(int *)(v28 + 1464) >> 8; /*0x6d59ff*/
    if ( v7 > 0 )
    {
      v8 = (_WORD *)(4 * (v3 & 7) + 9041544); /*0x6d5a0d*/
      v31 = v8; /*0x6d5a14*/
      while ( 1 ) /*0x6d5a25*/
      {
        v9 = v24[1] + v8[1]; /*0x6d5a25*/
        LOWORD(v25) = *v8 + result; /*0x6d5a2e*/
        HIWORD(v25) = v9; /*0x6d5a34*/
        *(_DWORD *)v24 = v25; /*0x6d5a42*/
        v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x6d5a46*/
        v11 = Cell::IsBridge(v10); /*0x6d5a4d*/
        if ( v11 ) /*0x6d5a54*/
        {
          if ( *(_BYTE *)(v11[328] + 5824) ) /*0x6d5a5c*/
          {
            result = House::IsHumanPlayer((House *)v11[135]); /*0x6d5a6c*/
            if ( (_BYTE)result ) /*0x6d5a73*/
              break; /*0x6d5a73*/
          }
        }
        v22 = dword_A83D4C; /*0x6d5a7e*/
        v21 = v28; /*0x6d5a83*/
        v20 = *(_DWORD *)(v28 + 1660); /*0x6d5a8a*/
        v12 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x6d5a91*/
        result = CellClass::IsPassable(v12, v20, v21, (int)v22); /*0x6d5a98*/
        if ( !(_BYTE)result ) /*0x6d5a9f*/
          goto LABEL_14; /*0x6d5a9f*/
        if ( ++v6 >= v7 ) /*0x6d5aa8*/
          goto LABEL_14; /*0x6d5aa8*/
        LOWORD(result) = v24[0]; /*0x6d5a1a*/
      }
      if ( v6 > 0 )
      {
        v13 = HIWORD(a3) + v8[1]; /*0x6d5acf*/
        LOWORD(v26) = a3 + *v8; /*0x6d5ade*/
        v30 = a2 != 0 ? 67078 : 132614;
        HIWORD(v26) = v13; /*0x6d5ae7*/
        *(_DWORD *)v23 = v26; /*0x6d5af2*/
        v28 = v6; /*0x6d5afc*/
        do /*0x6d5c29*/
        {
          v14 = -1 - 15 * *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23) + 283); /*0x6d5b29*/
          v15 = -2 - 15 * *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23) + 283); /*0x6d5b47*/
          v34[1] = (((v23[1] << 8) + 128) / 256) << 8; /*0x6d5b86*/
          v34[0] = (((v23[0] << 8) + 128) / 256) << 8; /*0x6d5b93*/
          v34[2] = 0; /*0x6d5b97*/
          v16 = Coord::To_ScreenRaw(&v33, v34); /*0x6d5b9b*/
          v17 = *(_DWORD *)this->__pad_B4; /*0x6d5ba8*/
          v18 = v16[1]; /*0x6d5bb6*/
          v32[0] = *v16 - (unsigned int)this->RadarClass_field_0xB0; /*0x6d5bb9*/
          v32[1] = v14 + v18 - v17; /*0x6d5bdb*/
          DrawToSurfaceSHP( /*0x6d5bf4*/
            (int)g_DSurface_Hidden_2,
            *(int *)&stru_87F5F0.__pad_58[124],
            stru_8A0390.health,
            0,
            v32,
            &DSurface_ViewBounds.field_0,
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
          LOWORD(v27) = v23[0] + *v31; /*0x6d5c05*/
          HIWORD(v27) = v23[1] + v31[1]; /*0x6d5c13*/
          result = v28 - 1; /*0x6d5c20*/
          v19 = v28 == 1; /*0x6d5c20*/
          *(_DWORD *)v23 = v27; /*0x6d5c21*/
          --v28; /*0x6d5c25*/
        }
        while ( !v19 ); /*0x6d5c29*/
      }
    }
LABEL_14:
    v3 = i + 2; /*0x6d5c2f*/
  }
  return result; /*0x6d5c43*/
}



// ==== 0x006D5C50  ObjectClass::RenderRadarBlips  this=ObjectClass  sig=csp ====
int __thiscall RenderRadarBlips(TechnoClass *this, char a2, int a3)
{
  int result; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // esi
  _WORD *v7; // ebx
  __int16 v8; // ax
  int v9; // eax
  int *v10; // eax
  __int16 v11; // dx
  int v12; // edi
  int v13; // ebp
  int *v14; // ecx
  int v15; // eax
  int v16; // kr08_4
  int v17; // eax
  int queuedMission; // eax
  __int16 v19; // cx
  bool v20; // zf
  int v21; // [esp-1Ch] [ebp-6Ch]
  Object *v22; // [esp-14h] [ebp-64h]
  __int16 v23[2]; // [esp+0h] [ebp-50h] BYREF
  __int16 v24[2]; // [esp+4h] [ebp-4Ch] BYREF
  int v25; // [esp+8h] [ebp-48h]
  int v26; // [esp+Ch] [ebp-44h]
  int v27; // [esp+10h] [ebp-40h]
  int v28; // [esp+14h] [ebp-3Ch]
  int i; // [esp+18h] [ebp-38h]
  int v30; // [esp+1Ch] [ebp-34h]
  TechnoClass *v31; // [esp+20h] [ebp-30h]
  int v32; // [esp+24h] [ebp-2Ch]
  Vector2 v33; // [esp+28h] [ebp-28h] BYREF
  _DWORD v34[2]; // [esp+30h] [ebp-20h] BYREF
  int v35[3]; // [esp+38h] [ebp-18h] BYREF
  int v36; // [esp+44h] [ebp-Ch]
  IsoCoord v37; // [esp+48h] [ebp-8h] BYREF

  v31 = this; /*0x6d5c58*/
  v30 = *(_DWORD *)(*(_DWORD *)(dword_88098C + 1312) + 3668); /*0x6d5c6a*/
  result = v30; /*0x6d5c62*/
  if ( v30 )
  {
    LOBYTE(result) = 0; /*0x6d5c76*/
    for ( i = 0; i < 8; i += 2 )
    {
      *(_DWORD *)v24 = a3; /*0x6d5c88*/
      v4 = 0; /*0x6d5c8c*/
      v5 = *(_DWORD *)(dword_88098C + 1312); /*0x6d5c8e*/
      v6 = *(int *)(v5 + 1464) >> 8; /*0x6d5c9a*/
      if ( v6 > 0 )
      {
        v7 = (_WORD *)(4 * (result & 7) + 9041544); /*0x6d5ca8*/
        while ( 1 ) /*0x6d5cbb*/
        {
          v8 = v24[1] + v7[1]; /*0x6d5cbb*/
          LOWORD(v25) = v24[0] + *v7; /*0x6d5cc0*/
          HIWORD(v25) = v8; /*0x6d5cc5*/
          *(_DWORD *)v24 = v25; /*0x6d5cd2*/
          v9 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v24) + 17); /*0x6d5ce1*/
          if ( v9 != -1 /*0x6d5d12*/
            && *(_DWORD *)(v30 + 660) == v9
            && dword_A83D4C->Object_field_0x30 == *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v24) + 20) )
          {
            break; /*0x6d5d12*/
          }
          v22 = dword_A83D4C; /*0x6d5d1f*/
          v21 = *(_DWORD *)(v5 + 1660); /*0x6d5d25*/
          v10 = (int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v24); /*0x6d5d2c*/
          if ( (unsigned __int8)CellClass::IsPassable(v10, v21, v5, (int)v22) ) /*0x6d5d33*/
          {
            if ( ++v4 < v6 ) /*0x6d5d43*/
              continue; /*0x6d5d43*/
          }
          goto LABEL_14; /*0x6d5d43*/
        }
        if ( v4 > 0 )
        {
          v11 = HIWORD(a3) + v7[1]; /*0x6d5d6a*/
          LOWORD(v26) = a3 + *v7; /*0x6d5d79*/
          v32 = a2 != 0 ? 67078 : 132614;
          HIWORD(v26) = v11; /*0x6d5d82*/
          *(_DWORD *)v23 = v26; /*0x6d5d8d*/
          v28 = v4; /*0x6d5d97*/
          do /*0x6d5f09*/
          {
            v12 = -1 - 15 * *((char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v23) + 283); /*0x6d5dc4*/
            v13 = -2 - 15 * *((char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v23) + 283); /*0x6d5de2*/
            v14 = IsoCoord::ToPixel(&v37, (((v23[0] << 8) + 128) / 256) << 8, (((v23[1] << 8) + 128) / 256) << 8); /*0x6d5e27*/
            v15 = *v14; /*0x6d5e29*/
            v36 = v14[1]; /*0x6d5e30*/
            v16 = v15; /*0x6d5e3b*/
            v17 = ZCoordToScreenY(0); /*0x6d5e42*/
            *(_DWORD *)v33.__pad_0 = v16 / 256; /*0x6d5e54*/
            v33.Vector2_field_0x04 = v36 / 256 - v17; /*0x6d5e63*/
            queuedMission = v31->queuedMission; /*0x6d5e76*/
            v34[0] = v31->suspendedMission; /*0x6d5e7c*/
            v34[1] = queuedMission; /*0x6d5e80*/
            Vector2::Subtract(&v33, v34); /*0x6d5e84*/
            *(_DWORD *)v33.__pad_0 -= 30; /*0x6d5e96*/
            v35[0] = *(_DWORD *)v33.__pad_0 + 30; /*0x6d5e9d*/
            v35[1] = v33.Vector2_field_0x04 + v12; /*0x6d5ea5*/
            DrawToSurfaceSHP( /*0x6d5ed8*/
              (int)g_DSurface_Hidden_2,
              (int)dword_87F6C4,
              dword_8A03FC,
              0,
              v35,
              &DSurface_ViewBounds.field_0,
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
            LOWORD(v27) = v23[0] + *v7; /*0x6d5eee*/
            HIWORD(v27) = v23[1] + v19; /*0x6d5ef7*/
            v20 = v28 == 1; /*0x6d5f00*/
            *(_DWORD *)v23 = v27; /*0x6d5f01*/
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
int __thiscall TacticalClass::SetViewportPosition(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int result; // eax
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h]

  dword_B0CE28 = *a2; /*0x6d5f6c*/
  dword_B0CE2C = a2[1]; /*0x6d5f75*/
  dword_B0CE30 = a2[2]; /*0x6d5f7e*/
  dword_B0CE34 = a2[3]; /*0x6d5f87*/
  v3 = *(_DWORD *)(this + 3444); /*0x6d5f93*/
  v8 = *(_DWORD *)(this + 3448); /*0x6d5f9d*/
  v7 = v3; /*0x6d5fa4*/
  if ( !ClampCoordMap(&v7) || stru_A8EB00.?[391] ) /*0x6d5fb8*/
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
  result = TacticalClass::CalcViewportCells((TacticalClass *)this); /*0x6d5fea*/
  *(_BYTE *)(this + 3453) = 1; /*0x6d5fef*/
  return result; /*0x6d5ff6*/
}



// ==== 0x006D6000  TacticalMapClass::SetCameraPosition  this=Tactical  sig=csp ====
unsigned int __thiscall TacticalMapClass::SetCameraPosition(TacticalClass *this, int *a2)
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
  if ( !ClampCoordMap(&v7) || stru_A8EB00.?[391] ) /*0x6d602f*/
  {
    v4 = *a2; /*0x6d603b*/
    v5 = a2[1]; /*0x6d603d*/
  }
  else
  {
    v4 = v7; /*0x6d6031*/
    v5 = v8; /*0x6d6035*/
  }
  this->TacticalClass_field_D64 = v4; /*0x6d6040*/
  this->TacticalClass_field_D74 = v4; /*0x6d6046*/
  this->TacticalClass_field_D68 = v5; /*0x6d604c*/
  this->TacticalClass_field_D78 = v5; /*0x6d6052*/
  result = TacticalClass::CalcViewportCells(this); /*0x6d605a*/
  this->redrawing = 1; /*0x6d605f*/
  return result; /*0x6d6066*/
}



// ==== 0x006D6070  Tactical::SetTacticalPosition  this=Tactical  sig=csp ====
unsigned int __thiscall Tactical::SetTacticalPosition(TacticalClass *this, int *a2)
{
  int v3; // esi
  int v4; // ebx
  int v5; // esi
  int v6; // ebx
  unsigned int result; // eax
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  v3 = *a2; /*0x6d607d*/
  v9 = a2[1]; /*0x6d6083*/
  v8 = -60 * v9 / 2 + 60 * v3 / 2; /*0x6d60c3*/
  v4 = 30 * v9 / 2 + 30 * v3 / 2; /*0x6d60de*/
  v5 = v8 / 256; /*0x6d60e2*/
  v6 = v4 / 256 - ZCoordToScreenY(a2[2]); /*0x6d6118*/
  v8 /= 256; /*0x6d611d*/
  v9 = v6; /*0x6d6121*/
  if ( ClampCoordMap(&v8) && !stru_A8EB00.?[391] ) /*0x6d6135*/
  {
    v5 = v8; /*0x6d6137*/
    v6 = v9; /*0x6d613b*/
  }
  this->TacticalClass_field_D64 = v5; /*0x6d613f*/
  this->TacticalClass_field_D74 = v5; /*0x6d6145*/
  this->TacticalClass_field_D68 = v6; /*0x6d614d*/
  this->TacticalClass_field_D78 = v6; /*0x6d6153*/
  result = TacticalClass::CalcViewportCells(this); /*0x6d6159*/
  this->redrawing = 1; /*0x6d615e*/
  return result; /*0x6d6165*/
}



// ==== 0x006D6170  ObjectClass::RequestMapSnapshot  this=ObjectClass  sig=csp ====
_DWORD *__thiscall RequestMapSnapshot(ObjectClass *this, _DWORD *a2)
{
  *a2 = *((_DWORD *)this + 857); /*0x6d617a*/
  a2[1] = *((_DWORD *)this + 858); /*0x6d6182*/
  return a2; /*0x6d6185*/
}



// ==== 0x006D6190  ObjectClass::ComputeDelta  this=ObjectClass  sig=csp ====
int *__thiscall ObjectClass::ComputeDelta(ObjectClass *this, int *a2)
{
  int v2; // edx
  int v4; // ecx

  v2 = *((_DWORD *)this + 857) - this->fallRate; /*0x6d61a9*/
  v4 = *((_DWORD *)this + 858) - this->u32_2D; /*0x6d61af*/
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



// ==== 0x006D62E0  IsoCoord::ToScreenOffset  this=Tactical  sig=csp ====
int __stdcall IsoCoord_ToScreenOffset(int a1, int a2, int *a3, int *a4)
{
  int result; // eax

  *a3 = 60 * a1 / 2; /*0x6d62fc*/
  *a4 = 30 * a1 / 2; /*0x6d630f*/
  *a3 += -60 * a2 / 2; /*0x6d6329*/
  *a4 += 30 * a2 / 2; /*0x6d633a*/
  *a3 /= 256; /*0x6d634a*/
  *a4 /= 256; /*0x6d635a*/
  result = *a3 + 15360; /*0x6d635e*/
  *a3 = result; /*0x6d6364*/
  return result; /*0x6d632b*/
}



// ==== 0x006D6410  Terrain::ClimbCheck  this=Tactical  sig=csp ====
_DWORD *__stdcall Terrain_ClimbCheck(_DWORD *a1, _DWORD *a2)
{
  int v2; // ecx
  int v3; // esi
  int v4; // edi
  bool v5; // bl
  int v6; // ebp
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // ecx
  _DWORD *v12; // [esp+10h] [ebp-18h] BYREF
  _DWORD *v13; // [esp+14h] [ebp-14h]
  int v14; // [esp+18h] [ebp-10h]
  int v15; // [esp+24h] [ebp-4h]

  v2 = *a2 / 256; /*0x6d6434*/
  HIWORD(a2) = a2[1] / 256; /*0x6d6440*/
  LOWORD(a2) = v2; /*0x6d6445*/
  v3 = ((__int16)v2 << 8) + 128; /*0x6d6462*/
  v4 = (SHIWORD(a2) << 8) + 128; /*0x6d6468*/
  v5 = (*((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 80) & 0x1000) != 0; /*0x6d6486*/
  v6 = v4 + 1536; /*0x6d649d*/
  v14 = *((char *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 283); /*0x6d64a3*/
  v7 = v3 + 1536; /*0x6d64a7*/
  v15 = 0; /*0x6d64a9*/
  while ( 1 ) /*0x6d64b1*/
  {
    v7 -= 8; /*0x6d64b1*/
    v6 -= 8; /*0x6d64c1*/
    LOWORD(v13) = v7 / 256; /*0x6d64c9*/
    HIWORD(v13) = v6 / 256; /*0x6d64e0*/
    v12 = v13; /*0x6d64e9*/
    v8 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v12); /*0x6d64f3*/
    v9 = *((char *)v8 + 283) - v14; /*0x6d64ff*/
    if ( v5 ) /*0x6d6505*/
      v9 += 4 * ((v8[80] >> 8) & 1); /*0x6d6513*/
    v10 = v9 << 7; /*0x6d6516*/
    if ( (__int16)((v7 - v10) / 256) <= (__int16)a2 && (__int16)((v6 - v10) / 256) <= SHIWORD(a2) ) /*0x6d654e*/
      break; /*0x6d654e*/
    if ( v12 == a2 ) /*0x6d6555*/
    {
      *a1 = a2; /*0x6d6582*/
      return a1; /*0x6d655b*/
    }
  }
  *a1 = v12; /*0x6d6572*/
  return a1; /*0x6d656f*/
}



// ==== 0x006D6590  Tactical::PixelToCell  this=Tactical  sig=csp ====
_DWORD *__thiscall Tactical::PixelToCell(Tactical *this, _DWORD *a2, int *a3)
{
  int v3; // eax
  int v5; // eax
  int v6; // ecx
  float *v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  signed int v11; // ebx
  int v12; // ebp
  int v13; // ecx
  float *v14; // eax
  int v15; // eax
  int v16; // esi
  int v17; // eax
  Cell *v18; // esi
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  int v23; // ecx
  int *v24; // eax
  int v25; // ecx
  int v26; // ebx
  unsigned int v27; // ebp
  bool v28; // cc
  char v30; // [esp+13h] [ebp-69h]
  char v31; // [esp+14h] [ebp-68h]
  char v32; // [esp+15h] [ebp-67h]
  char v33; // [esp+16h] [ebp-66h]
  char v34; // [esp+17h] [ebp-65h]
  signed int v35; // [esp+18h] [ebp-64h]
  _DWORD *NeighbourContent; // [esp+1Ch] [ebp-60h]
  _DWORD *v37; // [esp+20h] [ebp-5Ch]
  int i; // [esp+24h] [ebp-58h]
  int v39; // [esp+28h] [ebp-54h]
  __int16 v40[4]; // [esp+2Ch] [ebp-50h] BYREF
  int v41; // [esp+34h] [ebp-48h]
  int v42; // [esp+38h] [ebp-44h]
  int v43; // [esp+3Ch] [ebp-40h]
  unsigned int v44; // [esp+40h] [ebp-3Ch]
  int v45[2]; // [esp+44h] [ebp-38h] BYREF
  float v46; // [esp+4Ch] [ebp-30h] BYREF
  float v47; // [esp+50h] [ebp-2Ch]
  int v48; // [esp+54h] [ebp-28h]
  float v49; // [esp+58h] [ebp-24h] BYREF
  float v50; // [esp+5Ch] [ebp-20h]
  int v51; // [esp+60h] [ebp-1Ch]
  float v52[3]; // [esp+64h] [ebp-18h] BYREF
  float v53[3]; // [esp+70h] [ebp-Ch] BYREF
  char v54; // [esp+84h] [ebp+8h]
  int *v55; // [esp+84h] [ebp+8h]

  v3 = *a3; /*0x6d659f*/
  v48 = 0; /*0x6d65ab*/
  v5 = *(_DWORD *)&this->__pad_AC[4] + v3; /*0x6d65bf*/
  v6 = a3[1] + *(_DWORD *)&this->__pad_AC[8]; /*0x6d65c6*/
  v43 = v5 - DSurface_ViewBounds.field_0; /*0x6d65c8*/
  v44 = v6 - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d65d2*/
  v46 = (float)(v5 - DSurface_ViewBounds.field_0); /*0x6d65e1*/
  v47 = (float)(v6 - (unsigned int)DSurface_ViewBounds.field_4); /*0x6d65ed*/
  v7 = TransformMatrix3x4Point(v52, (float *)this + 889, &v46); /*0x6d65f1*/
  v46 = *v7; /*0x6d65f8*/
  v47 = v7[1]; /*0x6d6603*/
  v48 = *((_DWORD *)v7 + 2); /*0x6d660a*/
  LOWORD(v8) = Math::RoundToInt(v46); /*0x6d660e*/
  v9 = v8; /*0x6d6617*/
  LOWORD(v10) = Math::RoundToInt(v47); /*0x6d6619*/
  LODWORD(v49) = (unsigned __int8)v9; /*0x6d6631*/
  LOWORD(v39) = v9 / 256; /*0x6d6638*/
  LODWORD(v50) = (unsigned __int8)v10; /*0x6d664c*/
  HIWORD(v39) = v10 / 256; /*0x6d6663*/
  v51 = 0; /*0x6d6668*/
  Coord::To_ScreenRaw(v45, &v49); /*0x6d666c*/
  v11 = a3[1] - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d6684*/
  v43 = *a3 - DSurface_ViewBounds.field_0; /*0x6d668a*/
  v12 = v11 + 180; /*0x6d668e*/
  v44 = v11; /*0x6d6694*/
  v41 = v43; /*0x6d6698*/
  v42 = v11 + 180; /*0x6d669c*/
  for ( i = 0; ; ++i )
  {
    v13 = *(_DWORD *)&this->__pad_AC[8]; /*0x6d66b4*/
    v45[0] = v41 + *(_DWORD *)&this->__pad_AC[4]; /*0x6d66bc*/
    v45[1] = v12 + v13; /*0x6d66c6*/
    v49 = (float)v45[0]; /*0x6d66d5*/
    v51 = 0; /*0x6d66e1*/
    v50 = (float)(v12 + v13); /*0x6d66e9*/
    v14 = TransformMatrix3x4Point(v53, (float *)this + 889, &v49); /*0x6d66ed*/
    v49 = *v14; /*0x6d66f4*/
    v50 = v14[1]; /*0x6d66ff*/
    v51 = *((_DWORD *)v14 + 2); /*0x6d6706*/
    LOWORD(v15) = Math::RoundToInt(v49); /*0x6d670a*/
    v16 = v15; /*0x6d6713*/
    LOWORD(v17) = Math::RoundToInt(v50); /*0x6d6715*/
    v40[0] = v16 / 256; /*0x6d672a*/
    v40[1] = v17 / 256; /*0x6d6747*/
    v18 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v40); /*0x6d6751*/
    v35 = v12 - 15 * v18->Cell_field_0x11B[0]; /*0x6d6768*/
    if ( ((int)v18->Cell_field_0x140 & 0x100) != 0 )
    {
      NeighbourContent = Cell::GetNeighbourContent(v18, 2u); /*0x6d6786*/
      v37 = Cell::GetNeighbourContent(v18, 4u); /*0x6d678f*/
      if ( ((int)v18->Cell_field_0x140 & 0x800) == 0 /*0x6d67b7*/
        || (v54 = 1, (*((_DWORD *)Cell::GetNeighbourContent(v18, 0) + 80) & 0x100) != 0) )
      {
        v54 = 0; /*0x6d67b9*/
      }
      if ( ((int)v18->Cell_field_0x140 & 0x800) != 0 /*0x6d67e2*/
        || (v30 = 1, (*((_DWORD *)Cell::GetNeighbourContent(v18, 6u) + 80) & 0x100) != 0) )
      {
        v30 = 0; /*0x6d67e4*/
      }
      v19 = (int)v18->Cell_field_0x140 & 0x800; /*0x6d67ef*/
      if ( !v19 || (v31 = 1, (v37[80] & 0x100) != 0) ) /*0x6d6806*/
        v31 = 0; /*0x6d6808*/
      if ( v19 || (v33 = 1, (NeighbourContent[80] & 0x100) != 0) ) /*0x6d6820*/
        v33 = 0; /*0x6d6822*/
      if ( !v19 /*0x6d6858*/
        || (v20 = v18->Cell_field_0x11B[0] - *((char *)NeighbourContent + 283),
            (int)((HIDWORD(v20) ^ v20) - HIDWORD(v20)) > 1)
        || (v34 = 1, (NeighbourContent[80] & 0x100) != 0) )
      {
        v34 = 0; /*0x6d685a*/
      }
      if ( v19 /*0x6d688e*/
        || (v21 = v18->Cell_field_0x11B[0] - *((char *)v37 + 283), (int)((HIDWORD(v21) ^ v21) - HIDWORD(v21)) > 1)
        || (v32 = 1, (v37[80] & 0x100) != 0) )
      {
        v32 = 0; /*0x6d6890*/
      }
      v22 = *(__int16 *)&v18->__pad_1C[8]; /*0x6d6899*/
      v23 = *(__int16 *)&v18->__pad_1C[10] << 8; /*0x6d68a8*/
      v52[2] = 0.0; /*0x6d68ab*/
      LODWORD(v52[1]) = v23; /*0x6d68b2*/
      LODWORD(v52[0]) = v22 << 8; /*0x6d68ca*/
      v24 = Coord::To_ScreenRaw((int *)&v46, v52); /*0x6d68ce*/
      v25 = -30 * v18->Cell_field_0x11B[0] / 2 + v24[1] - *(_DWORD *)&this->__pad_AC[8]; /*0x6d68ff*/
      if ( v25 <= v11 ) /*0x6d6903*/
      {
        if ( v31 || v32 ) /*0x6d6917*/
        {
          *a2 = *(_DWORD *)v40 + 0x10000; /*0x6d6a61*/
          return a2; /*0x6d6a67*/
        }
        if ( v33 || v34 ) /*0x6d692f*/
        {
          HIWORD(v55) = v40[1]; /*0x6d6a0c*/
          LOWORD(v55) = v40[0] + 1; /*0x6d6a1b*/
          *a2 = v55; /*0x6d6a2d*/
          return a2; /*0x6d6a33*/
        }
      }
      if ( v54 || v30 )
      {
        v26 = v43 - (*v24 - *(_DWORD *)&this->__pad_AC[4]); /*0x6d6971*/
        v27 = v44 - v25; /*0x6d6977*/
        if ( v54 && (int)(v27 - v26 / 2) > 15 || v30 && (int)(v27 + v26 / 2) > 15 )
          v35 -= ((int)v18->Cell_field_0x140 & 0x100) != 0 ? 0x3C : 0;
        v11 = v44; /*0x6d69c0*/
      }
      else
      {
        v35 -= ((int)v18->Cell_field_0x140 & 0x100) != 0 ? 0x3C : 0;
      }
    }
    if ( v35 <= v11 ) /*0x6d69c8*/
      break; /*0x6d69c8*/
    v28 = i + 1 < 180; /*0x6d69d8*/
    --v42; /*0x6d69dd*/
    if ( !v28 ) /*0x6d69e5*/
    {
      *a2 = v39; /*0x6d69f9*/
      return a2; /*0x6d69ff*/
    }
    v12 = v42; /*0x6d66a6*/
  }
  *a2 = *(_DWORD *)v40; /*0x6d6a78*/
  return a2; /*0x6d69f6*/
}



// ==== 0x006D6A90  sub_6D6A90  this=-  sig=csp ====
__int64 __stdcall sub_6D6A90(_DWORD *a1)
{
  void *v1; // eax
  int v2; // edx
  _DWORD v4[2]; // [esp+4h] [ebp-8h] BYREF

  v1 = Coord::To_Cell(&dword_87F7E8, a1); /*0x6d6a9e*/
  v2 = a1[1]; /*0x6d6aa5*/
  v4[0] = *a1; /*0x6d6aa8*/
  v4[1] = v2; /*0x6d6ab3*/
  return Isometric::InitTables((int)v1, v4); /*0x6d6abc*/
}



// ==== 0x006D6AD0  CellClass::GetByte284  this=Tactical  sig=csp ====
int __stdcall CellClass_GetByte284(_DWORD *a1)
{
  return *((unsigned __int8 *)Coord::To_Cell(&dword_87F7E8, a1) + 284); /*0x6d6ae9*/
}



// ==== 0x006D6BB0  sub_6D6BB0  this=-  sig=csp ====
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
    result = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x6d6bdf*/
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
        result = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x6d6c31*/
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
            result = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x6d6c85*/
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
                result = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x6d6cd3*/
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



// ==== 0x006D6D10  TacticalClass::DrawBuildingsInView  this=TacticalClass  sig=csp ====
int *__thiscall TacticalClass::DrawBuildingsInView(TacticalClass *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  float *v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int smudgeTypeIndex; // ebx
  int v11; // edx
  int v12; // ecx
  int v13; // ebp
  int *result; // eax
  int v15; // ecx
  int v16; // ebp
  int v17; // ecx
  House *v18; // eax
  int v19; // ebx
  int *StartCoords; // eax
  int *v21; // eax
  int *v22; // eax
  int v23; // edx
  int v24; // esi
  int v25; // ecx
  int v26; // ebp
  int v27; // ecx
  BuildingClass *v28; // eax
  int v29; // ebx
  int *PlacementRect; // eax
  int *v31; // eax
  __int16 v32[2]; // [esp+10h] [ebp-B0h] BYREF
  int v33; // [esp+14h] [ebp-ACh]
  int v34; // [esp+18h] [ebp-A8h]
  int v35; // [esp+1Ch] [ebp-A4h]
  unsigned int v36; // [esp+20h] [ebp-A0h]
  int *v37; // [esp+24h] [ebp-9Ch]
  _DWORD v38[2]; // [esp+28h] [ebp-98h]
  int v39[2]; // [esp+30h] [ebp-90h] BYREF
  int *v40; // [esp+38h] [ebp-88h]
  float v41; // [esp+3Ch] [ebp-84h] BYREF
  float v42; // [esp+40h] [ebp-80h]
  int v43; // [esp+44h] [ebp-7Ch]
  int v44; // [esp+48h] [ebp-78h] BYREF
  int v45; // [esp+4Ch] [ebp-74h]
  int v46; // [esp+50h] [ebp-70h]
  int v47; // [esp+54h] [ebp-6Ch] BYREF
  int v48; // [esp+58h] [ebp-68h]
  int v49; // [esp+5Ch] [ebp-64h]
  int v50; // [esp+60h] [ebp-60h]
  int v51[4]; // [esp+64h] [ebp-5Ch] BYREF
  int v52; // [esp+74h] [ebp-4Ch]
  int v53; // [esp+78h] [ebp-48h] BYREF
  int v54; // [esp+7Ch] [ebp-44h]
  int v55; // [esp+80h] [ebp-40h]
  _DWORD v56[3]; // [esp+84h] [ebp-3Ch] BYREF
  int v57; // [esp+90h] [ebp-30h] BYREF
  int v58; // [esp+94h] [ebp-2Ch]
  int v59[4]; // [esp+A0h] [ebp-20h] BYREF
  int v60[4]; // [esp+B0h] [ebp-10h] BYREF

  v3 = *a2; /*0x6d6d2f*/
  v43 = 0; /*0x6d6d31*/
  v4 = this->visibleArea[0] + v3; /*0x6d6d45*/
  v5 = a2[1] + this->visibleArea[1]; /*0x6d6d4c*/
  v35 = v4 - DSurface_ViewBounds.field_0; /*0x6d6d4e*/
  v36 = v5 - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d6d58*/
  v41 = (float)(v4 - DSurface_ViewBounds.field_0); /*0x6d6d67*/
  v42 = (float)(v5 - (unsigned int)DSurface_ViewBounds.field_4); /*0x6d6d73*/
  v6 = TransformMatrix3x4Point((float *)&v44, (float *)this->TacticalClass_field_DE4, &v41); /*0x6d6d77*/
  v41 = *v6; /*0x6d6d7e*/
  v42 = v6[1]; /*0x6d6d89*/
  v43 = *((_DWORD *)v6 + 2); /*0x6d6d90*/
  LOWORD(v7) = Math::RoundToInt(v41); /*0x6d6d94*/
  v8 = v7; /*0x6d6d9d*/
  LOWORD(v9) = Math::RoundToInt(v42); /*0x6d6d9f*/
  v53 = v8; /*0x6d6da6*/
  v54 = v9; /*0x6d6dac*/
  v55 = 0; /*0x6d6db0*/
  if ( v9 < 0 ) /*0x6d6db7*/
    v54 = 0; /*0x6d6db9*/
  if ( v8 < 0 ) /*0x6d6dbf*/
    v53 = 0; /*0x6d6dc1*/
  smudgeTypeIndex = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v53)->smudgeTypeIndex; /*0x6d6dd4*/
  v11 = (unsigned __int64)(2290649225LL * a2[3]) >> 32; /*0x6d6de3*/
  v12 = a2[2]; /*0x6d6de5*/
  v38[0] = smudgeTypeIndex; /*0x6d6df3*/
  v13 = (v11 >> 3) + ((unsigned int)v11 >> 31) + 20; /*0x6d6df7*/
  v40 = (int *)(v12 / 60 + 4); /*0x6d6e17*/
  result = ClipRectIntersection(&v57, &DSurface_ViewBounds.field_0, a2, 0, 0); /*0x6d6e20*/
  v15 = *result; /*0x6d6e25*/
  HIWORD(v38[0]) = HIWORD(smudgeTypeIndex) - 2; /*0x6d6e27*/
  v51[0] = v15; /*0x6d6e2d*/
  v16 = v13 + 1; /*0x6d6e37*/
  v51[1] = result[1]; /*0x6d6e38*/
  LOWORD(v38[0]) = smudgeTypeIndex - 4; /*0x6d6e3c*/
  v17 = result[2]; /*0x6d6e41*/
  v52 = v16; /*0x6d6e44*/
  v51[2] = v17; /*0x6d6e48*/
  v51[3] = result[3]; /*0x6d6e51*/
  if ( v16 >= 0 ) /*0x6d6e55*/
  {
    v33 = v16 + 1; /*0x6d6e5e*/
    do /*0x6d702b*/
    {
      LOWORD(v35) = v16 / 2; /*0x6d6e69*/
      HIWORD(v35) = v33 / 2; /*0x6d6e7b*/
      LOWORD(v34) = LOWORD(v38[0]) + v35; /*0x6d6e8a*/
      HIWORD(v34) = HIWORD(v38[0]) + HIWORD(v35); /*0x6d6e95*/
      result = v40; /*0x6d6e9a*/
      *(_DWORD *)v32 = v34; /*0x6d6ea4*/
      if ( (int)v40 > 0 ) /*0x6d6ea8*/
      {
        v37 = v40; /*0x6d6eae*/
        do /*0x6d7019*/
        {
          if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v32) ) /*0x6d6ebc*/
          {
            v18 = (House *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v32); /*0x6d6ed3*/
            v19 = (int)v18; /*0x6d6ed8*/
            if ( *(_DWORD *)&v18->__pad_2D[23] != -1 ) /*0x6d6ede*/
            {
              StartCoords = House::GetStartCoords(v18, v59); /*0x6d6eee*/
              v47 = *StartCoords; /*0x6d6ef7*/
              v48 = StartCoords[1]; /*0x6d6f00*/
              v49 = StartCoords[2]; /*0x6d6f07*/
              v50 = StartCoords[3]; /*0x6d6f19*/
              v21 = ClipRectIntersection(v60, v51, &v47, 0, 0); /*0x6d6f22*/
              v57 = *v21; /*0x6d6f2b*/
              v58 = v21[1]; /*0x6d6f35*/
              if ( v21[2] > 0 && v21[3] > 0 ) /*0x6d6f4c*/
              {
                Coord::Subtract((Coord *)v56, (((v32[0] << 8) + 128) / 256) << 8, (((v32[1] << 8) + 128) / 256) << 8, 0); /*0x6d6f98*/
                v44 = v56[0]; /*0x6d6fb2*/
                v45 = v56[1]; /*0x6d6fb6*/
                v46 = v56[2]; /*0x6d6fc6*/
                v22 = Coord::To_ScreenRaw((int *)&v41, &v44); /*0x6d6fca*/
                v23 = this->visibleArea[0]; /*0x6d6fcf*/
                v24 = this->visibleArea[1]; /*0x6d6fd7*/
                v39[0] = *v22; /*0x6d6fdf*/
                v25 = v22[1] - v24; /*0x6d6feb*/
                v39[0] = v39[0] - v23 - 30; /*0x6d6fed*/
                v39[1] = v25; /*0x6d6ff9*/
                BuildingClass::Draw_0(v19, v39, v51); /*0x6d7001*/
              }
            }
          }
          ++v32[0]; /*0x6d7006*/
          --v32[1]; /*0x6d700f*/
          result = (int *)((char *)v37 - 1); /*0x6d7014*/
          v37 = (int *)((char *)v37 - 1); /*0x6d7015*/
        }
        while ( v37 ); /*0x6d7019*/
      }
      --v16; /*0x6d7023*/
      --v33; /*0x6d7027*/
    }
    while ( v16 >= 0 ); /*0x6d702b*/
    v26 = v52; /*0x6d7031*/
    if ( v52 >= 0 ) /*0x6d7037*/
    {
      v33 = v52 + 1; /*0x6d7040*/
      v27 = (int)v40; /*0x6d7044*/
      do /*0x6d71cd*/
      {
        LOWORD(v35) = v26 / 2; /*0x6d704f*/
        HIWORD(v35) = v33 / 2; /*0x6d705d*/
        result = *(int **)((char *)v38 + 2); /*0x6d706c*/
        LOWORD(v37) = LOWORD(v38[0]) + v35; /*0x6d7070*/
        HIWORD(v37) = HIWORD(v38[0]) + HIWORD(v35); /*0x6d707b*/
        *(_DWORD *)v32 = v37; /*0x6d7086*/
        if ( v27 > 0 ) /*0x6d708a*/
        {
          v34 = v27; /*0x6d7090*/
          do /*0x6d71b7*/
          {
            if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v32) ) /*0x6d709e*/
            {
              v28 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v32); /*0x6d70b5*/
              v29 = (int)v28; /*0x6d70ba*/
              if ( v28->?[2] != -1 ) /*0x6d70c0*/
              {
                PlacementRect = BuildingClass::GetPlacementRect(v28, v60); /*0x6d70d0*/
                v47 = *PlacementRect; /*0x6d70d9*/
                v48 = PlacementRect[1]; /*0x6d70e2*/
                v49 = PlacementRect[2]; /*0x6d70e9*/
                v50 = PlacementRect[3]; /*0x6d70fb*/
                v31 = ClipRectIntersection(v59, v51, &v47, 0, 0); /*0x6d7104*/
                v57 = *v31; /*0x6d710d*/
                v58 = v31[1]; /*0x6d7117*/
                if ( v31[2] > 0 && v31[3] > 0 ) /*0x6d712a*/
                {
                  v46 = 0; /*0x6d715f*/
                  v44 = (((v32[0] << 8) + 128) / 256) << 8; /*0x6d717b*/
                  v45 = (((v32[1] << 8) + 128) / 256) << 8; /*0x6d717f*/
                  Coord::To_Screen((Coord *)this, &v44, v39); /*0x6d7183*/
                  v39[0] -= 30; /*0x6d719b*/
                  TacticalClass::DrawBuildingPlacement(v29, v39, v51); /*0x6d719f*/
                }
              }
            }
            ++v32[0]; /*0x6d71a4*/
            --v32[1]; /*0x6d71ad*/
            result = (int *)--v34; /*0x6d71b2*/
          }
          while ( v34 ); /*0x6d71b7*/
          v27 = (int)v40; /*0x6d71bd*/
        }
        --v26; /*0x6d71c5*/
        --v33; /*0x6d71c9*/
      }
      while ( v26 >= 0 ); /*0x6d71cd*/
    }
  }
  return result; /*0x6d71d3*/
}



// ==== 0x006D71E0  TacticalClass::CalcBuildingDrawPos  this=TacticalClass  sig=csp ====
Point2D *TacticalClass::CalcBuildingDrawPos(int *this, int *a2)
{
  int v2; // ecx
  int v3; // esi
  int v4; // eax
  float *v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  CellClass *v9; // eax
  int v10; // edi
  int v11; // edx
  int v12; // edi
  int v13; // edi
  int v14; // ecx
  int v15; // eax
  void *v16; // edi
  int *v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int *v21; // eax
  int *v22; // eax
  int v23; // ecx
  int v25; // [esp+0h] [ebp-DCh]
  int v26; // [esp+4h] [ebp-D8h]
  __int16 v27[2]; // [esp+1Ch] [ebp-C0h] BYREF
  int v28; // [esp+20h] [ebp-BCh] BYREF
  int v29; // [esp+24h] [ebp-B8h]
  int smudgeTypeIndex; // [esp+28h] [ebp-B4h]
  int v31; // [esp+30h] [ebp-ACh]
  int v32; // [esp+34h] [ebp-A8h]
  __int16 v33; // [esp+38h] [ebp-A4h]
  __int16 v34; // [esp+3Ah] [ebp-A2h]
  float v35; // [esp+40h] [ebp-9Ch] BYREF
  float v36; // [esp+44h] [ebp-98h]
  int v37; // [esp+48h] [ebp-94h]
  int v38; // [esp+4Ch] [ebp-90h]
  int v39; // [esp+50h] [ebp-8Ch]
  int v40; // [esp+54h] [ebp-88h]
  int v41; // [esp+58h] [ebp-84h] BYREF
  int v42; // [esp+5Ch] [ebp-80h]
  float v43[3]; // [esp+64h] [ebp-78h] BYREF
  _DWORD v44[2]; // [esp+70h] [ebp-6Ch] BYREF
  unsigned int v45[2]; // [esp+78h] [ebp-64h] BYREF
  _DWORD v46[3]; // [esp+80h] [ebp-5Ch] BYREF
  int v47[4]; // [esp+8Ch] [ebp-50h] BYREF
  int v48[2]; // [esp+9Ch] [ebp-40h] BYREF
  int v49; // [esp+A4h] [ebp-38h]
  int v50; // [esp+A8h] [ebp-34h]
  int v51[4]; // [esp+ACh] [ebp-30h] BYREF
  int v52[4]; // [esp+BCh] [ebp-20h] BYREF
  int v53[4]; // [esp+CCh] [ebp-10h] BYREF

  v3 = v2; /*0x6d71f2*/
  v4 = *this + *(_DWORD *)(v2 + 176) - DSurface_ViewBounds; /*0x6d7212*/
  v29 = this->q004 + *(_DWORD *)(v2 + 180) - dword_886FA4; /*0x6d721b*/
  v28 = v4; /*0x6d7224*/
  *(float *)&v26 = (float)v29; /*0x6d7228*/
  *(float *)&v25 = (float)v4; /*0x6d7234*/
  Triple::Set(&v35, v25, v26, 0); /*0x6d7237*/
  v5 = TransformMatrix3x4Point(v43, (float *)(v3 + 3556), &v35); /*0x6d724b*/
  v35 = *v5; /*0x6d7252*/
  v36 = v5[1]; /*0x6d725d*/
  v37 = *((_DWORD *)v5 + 2); /*0x6d7264*/
  LOWORD(v6) = Math::RoundToInt(v35); /*0x6d7268*/
  v7 = v6; /*0x6d7271*/
  LOWORD(v8) = Math::RoundToInt(v36); /*0x6d7273*/
  Coord::Subtract(&v41, v7, v8, 0); /*0x6d727f*/
  if ( v42 < 0 ) /*0x6d7288*/
    v42 = 0; /*0x6d728a*/
  if ( v41 < 0 ) /*0x6d7292*/
    v41 = 0; /*0x6d7294*/
  v9 = Coord::To_Cell(&dword_87F7E8, &v41); /*0x6d72a2*/
  v10 = this->q00C; /*0x6d72aa*/
  smudgeTypeIndex = v9->smudgeTypeIndex; /*0x6d72b2*/
  v11 = (unsigned __int64)(2290649225LL * v10) >> 32; /*0x6d72b8*/
  v12 = this->q008; /*0x6d72ba*/
  LOWORD(smudgeTypeIndex) = smudgeTypeIndex - 2; /*0x6d72c8*/
  v38 = (v11 >> 3) + ((unsigned int)v11 >> 31) + 17; /*0x6d72de*/
  *(_DWORD *)v27 = smudgeTypeIndex; /*0x6d72e7*/
  v13 = v12 / 60 + 4; /*0x6d72ee*/
  v39 = v13; /*0x6d72f9*/
  if ( g_hWnd ) /*0x6d72fd*/
  {
    v14 = 0; /*0x6d7303*/
    if ( (int)((v11 >> 3) + ((unsigned int)v11 >> 31) + 17) > 0 ) /*0x6d7307*/
    {
      do /*0x6d7544*/
      {
        v15 = v14 / 2; /*0x6d7317*/
        ++v14; /*0x6d7319*/
        v33 = v15; /*0x6d731a*/
        v40 = v14; /*0x6d7321*/
        v34 = v14 / 2; /*0x6d732a*/
        LOWORD(v32) = smudgeTypeIndex + v15; /*0x6d733d*/
        HIWORD(v32) = v34 + HIWORD(smudgeTypeIndex); /*0x6d7348*/
        *(_DWORD *)v27 = v32; /*0x6d7353*/
        if ( v13 > 0 ) /*0x6d7357*/
        {
          v31 = v13; /*0x6d735d*/
          do /*0x6d7532*/
          {
            if ( (unsigned __int8)LayerClass::CoordinatesLegal(&dword_87F7E8, v27) ) /*0x6d736b*/
            {
              v16 = CellCoord::To_CellObj(&dword_87F7E8, v27); /*0x6d7387*/
              Coord::Subtract(v46, (((v27[0] << 8) + 128) / 256) << 8, (((v27[1] << 8) + 128) / 256) << 8, 0); /*0x6d73cc*/
              v43[0] = *(float *)v46; /*0x6d73dd*/
              v43[1] = *(float *)&v46[1]; /*0x6d73e1*/
              v43[2] = *(float *)&v46[2]; /*0x6d73ed*/
              v17 = Coord::To_ScreenRaw((int *)&v35, v43); /*0x6d73f5*/
              v28 = *v17; /*0x6d73fc*/
              v18 = *(_DWORD *)(v3 + 180); /*0x6d7400*/
              v19 = v17[1]; /*0x6d7406*/
              v20 = *(_DWORD *)(v3 + 176); /*0x6d7409*/
              v29 = v19; /*0x6d740f*/
              v44[1] = v18; /*0x6d7417*/
              v44[0] = v20; /*0x6d7420*/
              Vector2::Subtract(&v28, v44); /*0x6d7424*/
              v28 -= 30; /*0x6d7436*/
              v51[0] = v28; /*0x6d743a*/
              v51[1] = dword_886FA4 + v29; /*0x6d744b*/
              v51[2] = 60; /*0x6d7460*/
              v51[3] = 30; /*0x6d7467*/
              v21 = ClipRectIntersection(v52, v51, this, 0, 0); /*0x6d7472*/
              v47[0] = *v21; /*0x6d747b*/
              v47[1] = v21[1]; /*0x6d7487*/
              v47[2] = v21[2]; /*0x6d7499*/
              v47[3] = v21[3]; /*0x6d74af*/
              v22 = ClipRectIntersection(v53, &DSurface_ViewBounds, v47, 0, 0); /*0x6d74b6*/
              v48[0] = *v22; /*0x6d74bf*/
              v48[1] = v22[1]; /*0x6d74c9*/
              v49 = v22[2]; /*0x6d74d3*/
              v23 = v22[3]; /*0x6d74da*/
              v50 = v23; /*0x6d74df*/
              if ( v49 > 0 && v23 > 0 ) /*0x6d74ea*/
              {
                v45[0] = v28 + DSurface_ViewBounds; /*0x6d7501*/
                v45[1] = v29 + dword_886FA4; /*0x6d750e*/
                TacticalClass::RenderCellFogOfWar((int)v16, v45, v48); /*0x6d751a*/
              }
            }
            ++v27[0]; /*0x6d751f*/
            --v27[1]; /*0x6d7528*/
            --v31; /*0x6d752e*/
          }
          while ( v31 ); /*0x6d7532*/
          v13 = v39; /*0x6d7538*/
          v14 = v40; /*0x6d753c*/
        }
      }
      while ( v14 < v38 ); /*0x6d7544*/
    }
  }
  return (Point2D *)RenderAlphaShapes(this); /*0x6d7551*/
}



// ==== 0x006D7560  TacticalClass::RenderIsometric  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::RenderIsometric(int this, int *a2, _DWORD *a3)
{
  int v3; // eax
  int v5; // eax
  int v6; // ecx
  float *v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  int v12; // ebp
  int v13; // edx
  int result; // eax
  int v15; // ecx
  int v16; // eax
  CellClass *v17; // esi
  int *ScreenRect; // eax
  _DWORD *v19; // eax
  int v20; // ebp
  __int16 v21[2]; // [esp+10h] [ebp-98h] BYREF
  int v22; // [esp+14h] [ebp-94h] BYREF
  float v23; // [esp+18h] [ebp-90h]
  int v24; // [esp+1Ch] [ebp-8Ch]
  int v25; // [esp+20h] [ebp-88h]
  unsigned int v26; // [esp+24h] [ebp-84h]
  int v27; // [esp+28h] [ebp-80h]
  int v28; // [esp+2Ch] [ebp-7Ch]
  __int16 v29; // [esp+30h] [ebp-78h]
  __int16 v30; // [esp+32h] [ebp-76h]
  int v31; // [esp+38h] [ebp-70h]
  int v32; // [esp+3Ch] [ebp-6Ch]
  int v33; // [esp+40h] [ebp-68h]
  int v34[2]; // [esp+44h] [ebp-64h] BYREF
  int v35; // [esp+4Ch] [ebp-5Ch]
  int v36; // [esp+50h] [ebp-58h]
  float v37[3]; // [esp+54h] [ebp-54h] BYREF
  _DWORD v38[6]; // [esp+60h] [ebp-48h] BYREF
  int v39; // [esp+78h] [ebp-30h]
  _DWORD v40[3]; // [esp+7Ch] [ebp-2Ch] BYREF
  int v41[4]; // [esp+88h] [ebp-20h] BYREF
  int v42[4]; // [esp+98h] [ebp-10h] BYREF

  v3 = *a2; /*0x6d7575*/
  v24 = 0; /*0x6d7581*/
  v5 = *(_DWORD *)(this + 176) + v3; /*0x6d7595*/
  v6 = a2[1] + *(_DWORD *)(this + 180); /*0x6d759c*/
  v25 = v5 - DSurface_ViewBounds.field_0; /*0x6d759e*/
  v26 = v6 - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d75a8*/
  *(float *)&v22 = (float)(v5 - DSurface_ViewBounds.field_0); /*0x6d75b7*/
  v23 = (float)(v6 - (unsigned int)DSurface_ViewBounds.field_4); /*0x6d75c3*/
  v7 = TransformMatrix3x4Point(v37, (float *)(this + 3556), (float *)&v22); /*0x6d75c7*/
  v22 = *(int *)v7; /*0x6d75ce*/
  v23 = v7[1]; /*0x6d75d9*/
  v24 = *((_DWORD *)v7 + 2); /*0x6d75e0*/
  LOWORD(v8) = Math::RoundToInt(*(float *)&v22); /*0x6d75e4*/
  v9 = v8; /*0x6d75ed*/
  LOWORD(v10) = Math::RoundToInt(v23); /*0x6d75ef*/
  Coord::Subtract((Coord *)v40, v9, v10, 0); /*0x6d75ff*/
  v11 = a2[3]; /*0x6d7608*/
  v21[0] = v40[0] / 256; /*0x6d7617*/
  v21[1] = v40[1] / 256; /*0x6d762f*/
  v25 = *(_DWORD *)v21; /*0x6d764e*/
  v12 = v11 / 15 + 17; /*0x6d7655*/
  v13 = (unsigned __int64)(2290649225LL * a2[2]) >> 32; /*0x6d765e*/
  v31 = v12; /*0x6d7660*/
  v13 >>= 5; /*0x6d7664*/
  LOWORD(v25) = v21[0] - 2; /*0x6d7669*/
  result = (unsigned int)v13 >> 31; /*0x6d766e*/
  v32 = v13 + ((unsigned int)v13 >> 31) + 4; /*0x6d7675*/
  v15 = 0; /*0x6d7679*/
  while ( v15 < v12 ) /*0x6d767d*/
  {
    v16 = v15 / 2; /*0x6d7688*/
    ++v15; /*0x6d768a*/
    v29 = v16; /*0x6d768b*/
    v33 = v15; /*0x6d7692*/
    v30 = v15 / 2; /*0x6d769b*/
    LOWORD(v28) = v25 + v16; /*0x6d76ae*/
    HIWORD(v28) = v30 + HIWORD(v25); /*0x6d76b9*/
    result = v32; /*0x6d76be*/
    *(_DWORD *)v21 = v28; /*0x6d76c8*/
    if ( v32 > 0 ) /*0x6d76cc*/
    {
      v27 = v32; /*0x6d76d2*/
      do /*0x6d7817*/
      {
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v21) ) /*0x6d76e0*/
        {
          v17 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21); /*0x6d76fc*/
          ScreenRect = CellClass::GetScreenRect(v17, v41); /*0x6d7708*/
          v34[0] = *ScreenRect; /*0x6d7711*/
          v34[1] = ScreenRect[1]; /*0x6d771a*/
          v35 = ScreenRect[2]; /*0x6d7721*/
          v36 = ScreenRect[3]; /*0x6d7733*/
          v19 = ClipRectIntersection(v42, a2, v34, 0, 0); /*0x6d773a*/
          v38[3] = *v19; /*0x6d7743*/
          v20 = v19[2]; /*0x6d774f*/
          v38[4] = v19[1]; /*0x6d7752*/
          v39 = v19[3]; /*0x6d7762*/
          Coord::Subtract((Coord *)v38, (((v21[0] << 8) + 128) / 256) << 8, (((v21[1] << 8) + 128) / 256) << 8, 0); /*0x6d7799*/
          v37[0] = *(float *)v38; /*0x6d77aa*/
          v37[1] = *(float *)&v38[1]; /*0x6d77ae*/
          v37[2] = *(float *)&v38[2]; /*0x6d77be*/
          Coord::To_Screen((Coord *)this, v37, &v22); /*0x6d77c2*/
          v22 -= 30; /*0x6d77d4*/
          if ( v35 > 0 && v36 > 0 && v20 > 0 && v39 > 0 ) /*0x6d77ec*/
            TacticalClass::CheckCellVisibility(v17->mapCoords, &v22, a3, 0); /*0x6d77ff*/
        }
        ++v21[0]; /*0x6d7804*/
        --v21[1]; /*0x6d780d*/
        result = --v27; /*0x6d7812*/
      }
      while ( v27 ); /*0x6d7817*/
      v15 = v33; /*0x6d781d*/
      v12 = v31; /*0x6d7821*/
    }
  }
  return result; /*0x6d782d*/
}



// ==== 0x006D7840  TacticalClass::DrawMap  this=Tactical  sig=csp ====
int __thiscall TacticalClass::DrawMap(int this, _DWORD *a2, int *a3)
{
  int result; // eax
  DWORD Time; // eax
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // eax
  int v11; // ebp
  float *v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // esi
  float v18; // ebx
  int v19; // ecx
  int v20; // esi
  int v21; // eax
  _DWORD *v22; // esi
  int NthOfType; // edi
  _DWORD *v24; // ebp
  BOOL v25; // edi
  _DWORD *v26; // eax
  int *ScreenRect; // eax
  int v28; // esi
  int v29; // edi
  int v30; // eax
  __int16 v31[2]; // [esp+8h] [ebp-48h] BYREF
  int v32; // [esp+Ch] [ebp-44h]
  int v33; // [esp+10h] [ebp-40h]
  int v34; // [esp+14h] [ebp-3Ch]
  int v35; // [esp+18h] [ebp-38h]
  int v36; // [esp+1Ch] [ebp-34h]
  int v37; // [esp+20h] [ebp-30h]
  float v38; // [esp+24h] [ebp-2Ch]
  float v39; // [esp+28h] [ebp-28h] BYREF
  float v40; // [esp+2Ch] [ebp-24h]
  int v41; // [esp+30h] [ebp-20h]
  int v42; // [esp+34h] [ebp-1Ch] BYREF
  int v43; // [esp+38h] [ebp-18h]
  int v44[4]; // [esp+40h] [ebp-10h] BYREF
  _DWORD *v45; // [esp+54h] [ebp+4h]

  result = PingPongBuffer::GetWriteOffset(); /*0x6d7847*/
  if ( (unsigned int)dword_ABCD44 >= result ) /*0x6d7852*/
  {
    result = (*(int (__thiscall **)(int *))(*g_DSurface_Hidden_2 + 112))(g_DSurface_Hidden_2); /*0x6d7860*/
    if ( result == 2 ) /*0x6d7866*/
    {
      result = dword_A8EB78; /*0x6d786c*/
      if ( dword_A8EB78 ) /*0x6d7873*/
      {
        result = (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*g_DSurface_Hidden_2 + 92))(g_DSurface_Hidden_2, 0, 0); /*0x6d7887*/
        v35 = result; /*0x6d788c*/
        if ( result ) /*0x6d7890*/
        {
          Time = timeGetTime(); /*0x6d7896*/
          v6 = Time - dword_B0E640; /*0x6d78a4*/
          dword_B0E640 = Time; /*0x6d78a6*/
          v32 = v6; /*0x6d78b1*/
          if ( v6 > 0x3E8 ) /*0x6d78b5*/
            v32 = 1000; /*0x6d78b7*/
          v7 = (*(int (__thiscall **)(int *))(*g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2); /*0x6d78c9*/
          v8 = *(_DWORD *)(this + 176); /*0x6d78d0*/
          v34 = v7; /*0x6d78dc*/
          v9 = *(_DWORD *)(this + 180); /*0x6d78e2*/
          v10 = v8 + *a2; /*0x6d78ee*/
          v11 = a2[1]; /*0x6d78f0*/
          v42 = v10 - DSurface_ViewBounds; /*0x6d78f5*/
          v43 = v11 + v9 - dword_886FA4; /*0x6d7905*/
          v39 = (float)(v10 - DSurface_ViewBounds); /*0x6d790a*/
          v41 = 0; /*0x6d791c*/
          v40 = (float)v43; /*0x6d7924*/
          v12 = TransformMatrix3x4Point((float *)&v42, (float *)(this + 3556), &v39); /*0x6d7928*/
          v39 = *v12; /*0x6d792f*/
          v40 = v12[1]; /*0x6d793a*/
          v41 = *((_DWORD *)v12 + 2); /*0x6d7941*/
          LOWORD(v13) = Math::RoundToInt(v39); /*0x6d7945*/
          v14 = v13; /*0x6d794e*/
          LOWORD(v15) = Math::RoundToInt(v40); /*0x6d7950*/
          v16 = a2[3]; /*0x6d796d*/
          v17 = a2[2]; /*0x6d7978*/
          HIWORD(v42) = v15 / 256; /*0x6d799d*/
          LODWORD(v18) = v16 / 15 + 17; /*0x6d79a4*/
          v19 = 0; /*0x6d79ac*/
          v38 = v18; /*0x6d79b3*/
          v20 = v17 / 60 + 4; /*0x6d79bc*/
          LOWORD(v42) = v14 / 256 - 2; /*0x6d79c0*/
          v37 = v20; /*0x6d79c5*/
          while ( v19 < SLODWORD(v18) ) /*0x6d79c9*/
          {
            v21 = v19 / 2; /*0x6d79d4*/
            ++v19; /*0x6d79d6*/
            LOWORD(v39) = v21; /*0x6d79d7*/
            v36 = v19; /*0x6d79de*/
            HIWORD(v39) = v19 / 2; /*0x6d79e7*/
            LOWORD(v45) = v42 + v21; /*0x6d79fa*/
            HIWORD(v45) = HIWORD(v39) + HIWORD(v42); /*0x6d7a05*/
            *(_DWORD *)v31 = v45; /*0x6d7a10*/
            if ( v20 > 0 ) /*0x6d7a14*/
            {
              v33 = v20; /*0x6d7a1a*/
              do /*0x6d7bcb*/
              {
                if ( (unsigned __int8)LayerClass::CoordinatesLegal(&dword_87F7E8, v31) ) /*0x6d7a28*/
                {
                  v22 = CellCoord::To_CellObj(&dword_87F7E8, v31); /*0x6d7a44*/
                  NthOfType = Building::GetNthOfType((int)v22); /*0x6d7a4d*/
                  if ( (v22[75] & 0x10) != 0 /*0x6d7a94*/
                    && !(unsigned __int8)CellClass::QuickPassable(v22)
                    && (v22[59] == 2 || NthOfType)
                    && !v22[57]
                    && (v22[80] & 0x1000) == 0 )
                  {
                    v24 = (_DWORD *)v22[63]; /*0x6d7a9a*/
                    v25 = NthOfType != 0; /*0x6d7aa9*/
                    if ( v24 ) /*0x6d7aab*/
                    {
                      if ( (int)v24[4] >= 0x2000 ) /*0x6d7ade*/
                        BuildingDebris::Init(v24, v25); /*0x6d7ae3*/
                    }
                    else
                    {
                      v26 = __2_YAPAXI_Z(0x3Cu); /*0x6d7aaf*/
                      if ( v26 ) /*0x6d7ab9*/
                      {
                        v24 = TacticalClass::saveConfig(v26, v25); /*0x6d7ac3*/
                        v22[63] = v24; /*0x6d7ac5*/
                      }
                      else
                      {
                        v24 = 0; /*0x6d7acd*/
                        v22[63] = 0; /*0x6d7acf*/
                      }
                    }
                    if ( v24 ) /*0x6d7aea*/
                    {
                      if ( (unsigned __int8)TacticalClass::DecrementCounter(v24, v32) ) /*0x6d7af7*/
                      {
                        ScreenRect = CellClass::GetScreenRect((int)v22, v44); /*0x6d7b0b*/
                        v28 = v24[12] + *ScreenRect + ScreenRect[2] / 2; /*0x6d7b3b*/
                        v29 = v24[13] + ScreenRect[1] + ScreenRect[3] / 2; /*0x6d7b3f*/
                        if ( v28 >= *a3 && v28 < *a3 + a3[2] ) /*0x6d7b4c*/
                        {
                          v30 = a3[1]; /*0x6d7b4e*/
                          if ( v29 >= v30 && v29 < v30 + a3[3] ) /*0x6d7b5c*/
                          {
                            TacticalClass::InterpolateColor(v24, v32); /*0x6d7b65*/
                            *(_WORD *)(v29 * v34 + v35 + 2 * v28) = ((int)v24[1] >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6d7bb4*/
                                                                  | ((int)v24[2] >> g_BitMask_Blue << g_BitMask_Green)
                                                                  | ((int)v24[3] >> g_BitMask_Red << g_BitShift_Blue);
                          }
                        }
                      }
                    }
                  }
                }
                ++v31[0]; /*0x6d7bb8*/
                --v31[1]; /*0x6d7bc1*/
                --v33; /*0x6d7bc7*/
              }
              while ( v33 ); /*0x6d7bcb*/
              v19 = v36; /*0x6d7bd1*/
              v20 = v37; /*0x6d7bd5*/
              v18 = v38; /*0x6d7bd9*/
            }
          }
          return (*(int (__thiscall **)(int *))(*g_DSurface_Hidden_2 + 96))(g_DSurface_Hidden_2); /*0x6d7bed*/
        }
      }
    }
  }
  return result; /*0x6d7bf2*/
}



// ==== 0x006D7C00  TacticalClass::DrawTerrain  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::DrawTerrain(int *this, int *a2, _DWORD *a3)
{
  int *v3; // edi
  int v5; // eax
  signed int v6; // ecx
  float *v7; // eax
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  signed int v14; // ecx
  float *v15; // eax
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int smudgeTypeIndex; // ecx
  int v20; // ebx
  int v21; // edi
  int v22; // ebx
  int v23; // ecx
  int result; // eax
  int v25; // edi
  int *v26; // ebp
  int v27; // eax
  __int16 v28; // dx
  float *v29; // eax
  TacticalClass *v30; // eax
  int v31; // [esp+0h] [ebp-68h]
  int v32; // [esp+0h] [ebp-68h]
  int v33; // [esp+4h] [ebp-64h]
  int v34; // [esp+4h] [ebp-64h]
  int v35; // [esp+1Ch] [ebp-4Ch]
  int v36; // [esp+20h] [ebp-48h] BYREF
  _DWORD v37[2]; // [esp+24h] [ebp-44h]
  int v38; // [esp+2Ch] [ebp-3Ch] BYREF
  signed int v39; // [esp+30h] [ebp-38h]
  int v40; // [esp+34h] [ebp-34h]
  Triple v41; // [esp+38h] [ebp-30h] BYREF
  float v42; // [esp+3Ch] [ebp-2Ch]
  int v43; // [esp+40h] [ebp-28h]
  int v44; // [esp+44h] [ebp-24h] BYREF
  signed int v45; // [esp+48h] [ebp-20h]
  int v46; // [esp+4Ch] [ebp-1Ch]
  float v47[3]; // [esp+50h] [ebp-18h] BYREF
  Coord3D v48; // [esp+5Ch] [ebp-Ch] BYREF

  v3 = a2; /*0x6d7c07*/
  v5 = this->TacticalClass_field_2C; /*0x6d7c19*/
  v6 = a2[1] + this->q0B4 - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d7c32*/
  v38 = *a2 + v5 - DSurface_ViewBounds.field_0; /*0x6d7c34*/
  v39 = v6; /*0x6d7c38*/
  *(float *)&v33 = (float)v6; /*0x6d7c41*/
  *(float *)&v31 = (float)v38; /*0x6d7c4d*/
  Triple::Set(&v41, v31, v33, 0); /*0x6d7c50*/
  v7 = TransformMatrix3x4Point(v47, (float *)this + 889, (float *)&v41); /*0x6d7c66*/
  v41 = *(Triple *)v7; /*0x6d7c6d*/
  v42 = v7[1]; /*0x6d7c78*/
  v43 = *((_DWORD *)v7 + 2); /*0x6d7c7f*/
  LOWORD(v8) = Math::RoundToInt(*(float *)&v41); /*0x6d7c83*/
  v9 = v8; /*0x6d7c8c*/
  LOWORD(v10) = Math::RoundToInt(v42); /*0x6d7c8e*/
  Coord::Subtract((Coord *)&v44, v9, v10, 0); /*0x6d7c9b*/
  v11 = *(_DWORD *)CellStruct::Set((CellStruct *)&v36, v44 / 256, v45 / 256); /*0x6d7ccb*/
  v12 = this->TacticalClass_field_2C; /*0x6d7ccd*/
  HIWORD(v37[0]) = HIWORD(v11); /*0x6d7cd3*/
  LOWORD(v37[0]) = v11 - 2; /*0x6d7ce0*/
  v13 = *v3; /*0x6d7ce9*/
  a2 = (int *)v37[0]; /*0x6d7ceb*/
  v14 = v3[1] + this->q0B4 - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d7d04*/
  v38 = v12 + v13 - DSurface_ViewBounds.field_0; /*0x6d7d06*/
  v39 = v14; /*0x6d7d0a*/
  *(float *)&v34 = (float)v14; /*0x6d7d15*/
  *(float *)&v32 = (float)v38; /*0x6d7d21*/
  Triple::Set(&v41, v32, v34, 0); /*0x6d7d24*/
  v15 = TransformMatrix3x4Point(v47, (float *)this + 889, (float *)&v41); /*0x6d7d34*/
  v41 = *(Triple *)v15; /*0x6d7d3b*/
  v42 = v15[1]; /*0x6d7d46*/
  v43 = *((_DWORD *)v15 + 2); /*0x6d7d4d*/
  LOWORD(v16) = Math::RoundToInt(*(float *)&v41); /*0x6d7d51*/
  v17 = v16; /*0x6d7d5a*/
  LOWORD(v18) = Math::RoundToInt(v42); /*0x6d7d5c*/
  Coord::Subtract((Coord *)&v38, v17, v18, 0); /*0x6d7d69*/
  v44 = v38; /*0x6d7d7a*/
  v45 = v39; /*0x6d7d82*/
  v46 = v40; /*0x6d7d8c*/
  smudgeTypeIndex = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v44)->smudgeTypeIndex; /*0x6d7d95*/
  v20 = v3[3]; /*0x6d7d98*/
  v21 = v3[2]; /*0x6d7da0*/
  HIWORD(v37[0]) = HIWORD(smudgeTypeIndex) + 3; /*0x6d7db0*/
  v22 = v20 / 15 + 20; /*0x6d7dbc*/
  LOWORD(v37[0]) = smudgeTypeIndex - 2; /*0x6d7dc9*/
  v23 = 0; /*0x6d7dd3*/
  result = (unsigned int)((unsigned __int64)(2290649225LL * v21) >> 32) >> 31; /*0x6d7dd5*/
  v25 = v21 / 60 + 7; /*0x6d7dda*/
  if ( v22 > 0 ) /*0x6d7dde*/
  {
    v26 = a3; /*0x6d7de4*/
    do /*0x6d7f01*/
    {
      v27 = v23 / 2; /*0x6d7ded*/
      ++v23; /*0x6d7def*/
      LOWORD(v38) = v27; /*0x6d7df0*/
      v36 = v23; /*0x6d7df7*/
      HIWORD(v38) = v23 / 2; /*0x6d7e00*/
      v28 = LOWORD(v37[0]) + v27; /*0x6d7e0d*/
      result = *(_DWORD *)((char *)v37 + 2); /*0x6d7e0f*/
      LOWORD(a3) = v28; /*0x6d7e13*/
      HIWORD(a3) = HIWORD(v37[0]) + HIWORD(v38); /*0x6d7e1e*/
      a2 = a3; /*0x6d7e29*/
      if ( v25 > 0 ) /*0x6d7e2d*/
      {
        v35 = v25; /*0x6d7e33*/
        do /*0x6d7ef5*/
        {
          if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) ) /*0x6d7e41*/
          {
            v29 = (float *)Coord3D::Set( /*0x6d7e91*/
                             &v48,
                             ((((__int16)a2 << 8) + 128) / 256) << 8,
                             (((SHIWORD(a2) << 8) + 128) / 256) << 8,
                             0);
            v47[0] = *v29; /*0x6d7e98*/
            v47[1] = v29[1]; /*0x6d7ea4*/
            v47[2] = v29[2]; /*0x6d7eb2*/
            Coord::To_Screen((Coord *)this, v47, (int *)&v41); /*0x6d7eb6*/
            *(_DWORD *)&v41 -= 30; /*0x6d7ec7*/
            v30 = (TacticalClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x6d7ed6*/
            TacticalClass::DrawCellTerrainOverlay(v30, (int *)&v41, v26); /*0x6d7edd*/
          }
          LOWORD(a2) = (_WORD)a2 + 1; /*0x6d7ee2*/
          --HIWORD(a2); /*0x6d7eeb*/
          result = --v35; /*0x6d7ef0*/
        }
        while ( v35 ); /*0x6d7ef5*/
        v23 = v36; /*0x6d7efb*/
      }
    }
    while ( v23 < v22 ); /*0x6d7f01*/
  }
  return result; /*0x6d7f07*/
}



// ==== 0x006D7F20  TacticalMapClass::ProcessCell  this=TacticalMapClass  sig=csp ====
int __thiscall TacticalMapClass::ProcessCell(TacticalMapClass *this, __int16 *a2, int a3)
{
  int *v4; // ebp
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
  int *v28; // eax
  int result; // eax
  bool v30; // cc
  int v31; // [esp+10h] [ebp-44h]
  char *v32; // [esp+14h] [ebp-40h]
  int v33; // [esp+1Ch] [ebp-38h]
  int v34; // [esp+20h] [ebp-34h]
  __int16 v35[2]; // [esp+24h] [ebp-30h] BYREF
  __int16 v36[2]; // [esp+28h] [ebp-2Ch] BYREF
  __int16 v37[2]; // [esp+2Ch] [ebp-28h] BYREF
  _DWORD v38[2]; // [esp+30h] [ebp-24h] BYREF
  int v39[2]; // [esp+38h] [ebp-1Ch] BYREF
  IsoCoord v40; // [esp+40h] [ebp-14h] BYREF
  int v41; // [esp+48h] [ebp-Ch] BYREF
  int v42; // [esp+4Ch] [ebp-8h]
  int v43; // [esp+50h] [ebp-4h]
  char v44; // [esp+58h] [ebp+4h]

  v4 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x6d7f38*/
  v5 = (*a2 << 8) + 128; /*0x6d7f5b*/
  v6 = (a2[1] << 8) + 128; /*0x6d7f68*/
  v43 = 0; /*0x6d7f6a*/
  v42 = (v6 / 256) << 8; /*0x6d7f74*/
  v41 = (v5 / 256) << 8; /*0x6d7f8a*/
  v7 = Coord::To_ScreenRaw(v39, &v41); /*0x6d7f8e*/
  v8 = v7[1]; /*0x6d7f9d*/
  v9 = *v7 - *((_DWORD *)this + 44); /*0x6d7fa6*/
  v10 = v8 - *((_DWORD *)this + 45); /*0x6d7fae*/
  if ( *((char *)v4 + 283) < 2 ) /*0x6d7fb3*/
  {
    v38[0] = v9 - 30; /*0x6d7fba*/
    v38[1] = v10; /*0x6d7fc2*/
    TacticalClass::CheckCellVisibility(v4, v38, &DSurface_ViewBounds, 0); /*0x6d7fce*/
  }
  v33 = *a2; /*0x6d7fda*/
  v34 = a2[1]; /*0x6d7fde*/
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
      if ( !(unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v35) ) /*0x6d8021*/
        goto LABEL_34; /*0x6d8021*/
      v36[0] = v33 + ((v11 + 1) >> 1); /*0x6d8031*/
      v36[1] = v34 - (v11 >> 1) + 1; /*0x6d8036*/
      v14 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v36); /*0x6d8040*/
      v15 = 0; /*0x6d8042*/
      v32 = v14; /*0x6d8044*/
      v16 = v14[283]; /*0x6d804b*/
      v44 = 0; /*0x6d8056*/
      if ( v11 == 1 ) /*0x6d805a*/
      {
        if ( v16 > v31 && v16 < v31 + 4 ) /*0x6d8070*/
        {
LABEL_11:
          v15 = 1; /*0x6d8072*/
          v44 = 1; /*0x6d8074*/
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
          v15 = v44; /*0x6d80c9*/
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
        v37[0] = v12; /*0x6d814e*/
        v37[1] = v13; /*0x6d8168*/
        v41 = ((((__int16)v12 << 8) + 128) / 256) << 8; /*0x6d8194*/
        v42 = ((((__int16)v13 << 8) + 128) / 256) << 8; /*0x6d819d*/
        v43 = 0; /*0x6d81a1*/
        v23 = IsoCoord::ToPixel(&v40, v41, v42); /*0x6d81a5*/
        v24 = v23[1]; /*0x6d81b2*/
        v25 = *v23 / 256; /*0x6d81c0*/
        v26 = ZCoordToScreenY(v43); /*0x6d81c3*/
        v27 = v25 - *((_DWORD *)this + 44); /*0x6d81ea*/
        v39[1] = v24 / 256 - v26 - *((_DWORD *)this + 45); /*0x6d81ee*/
        v39[0] = v27 - 30; /*0x6d8204*/
        v28 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v37); /*0x6d820f*/
        TacticalClass::CheckCellVisibility(v28, v39, &DSurface_ViewBounds, 0); /*0x6d8216*/
        goto LABEL_34; /*0x6d8216*/
      }
      if ( v15 ) /*0x6d80d5*/
        goto LABEL_33; /*0x6d80d5*/
      v18 = *((_DWORD *)v32 + 14); /*0x6d80e3*/
      v19 = (unsigned __int8)v32[282]; /*0x6d80eb*/
      if ( v18 != 0xFFFF && v18 != 255 ) /*0x6d80f8*/
      {
        v20 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v18); /*0x6d8104*/
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
unsigned int __thiscall MapClass::TransformCoordToScreen(MapClass *this, int a2, _DWORD *a3)
{
  int *v3; // ebx
  int v4; // ebp
  int v6; // eax
  int v7; // ecx
  float *v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int smudgeTypeIndex; // ecx
  int v13; // esi
  int v14; // ecx
  unsigned int result; // eax
  int v16; // esi
  int v17; // ebp
  int *v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  TacticalClass *v22; // eax
  _DWORD *v23; // [esp+10h] [ebp-54h]
  int v24; // [esp+14h] [ebp-50h]
  int v25; // [esp+18h] [ebp-4Ch]
  int v26; // [esp+1Ch] [ebp-48h]
  __int16 v27; // [esp+20h] [ebp-44h]
  __int16 v28; // [esp+22h] [ebp-42h]
  Vector2 v29; // [esp+30h] [ebp-34h] BYREF
  _DWORD v30[2]; // [esp+38h] [ebp-2Ch] BYREF
  float v31; // [esp+40h] [ebp-24h] BYREF
  float v32; // [esp+44h] [ebp-20h]
  int v33; // [esp+48h] [ebp-1Ch]
  int v34; // [esp+4Ch] [ebp-18h] BYREF
  int v35; // [esp+50h] [ebp-14h]
  int v36; // [esp+54h] [ebp-10h]
  float v37[3]; // [esp+58h] [ebp-Ch] BYREF

  v3 = a3; /*0x6d8264*/
  v4 = *a3; /*0x6d826f*/
  v33 = 0; /*0x6d827b*/
  v6 = v4 + *(_DWORD *)&this->__pad_5C[84]; /*0x6d828f*/
  v7 = a3[1] + *(_DWORD *)&this->__pad_5C[88]; /*0x6d8296*/
  *(_DWORD *)v29.__pad_0 = v6 - DSurface_ViewBounds.field_0; /*0x6d8298*/
  v29.Vector2_field_0x04 = v7 - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d82a2*/
  v31 = (float)(v6 - DSurface_ViewBounds.field_0); /*0x6d82b1*/
  v32 = (float)(v7 - (unsigned int)DSurface_ViewBounds.field_4); /*0x6d82bd*/
  v8 = TransformMatrix3x4Point(v37, (float *)&this->__pad_D80[100], &v31); /*0x6d82c1*/
  v31 = *v8; /*0x6d82c8*/
  v32 = v8[1]; /*0x6d82d3*/
  v33 = *((_DWORD *)v8 + 2); /*0x6d82da*/
  LOWORD(v9) = Math::RoundToInt(v31); /*0x6d82de*/
  v10 = v9; /*0x6d82e7*/
  LOWORD(v11) = Math::RoundToInt(v32); /*0x6d82e9*/
  v34 = v10; /*0x6d82f0*/
  v35 = v11; /*0x6d82f6*/
  v36 = 0; /*0x6d82fa*/
  if ( v11 < 0 ) /*0x6d82fe*/
  {
    v10 -= v11; /*0x6d8300*/
    v11 = 0; /*0x6d8302*/
    v34 = v10; /*0x6d8304*/
    v35 = 0; /*0x6d8308*/
  }
  if ( v10 < 0 ) /*0x6d830e*/
  {
    v34 = 0; /*0x6d8312*/
    v35 = v11 - v10; /*0x6d8316*/
  }
  smudgeTypeIndex = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v34)->smudgeTypeIndex; /*0x6d8329*/
  v13 = v3[2]; /*0x6d833c*/
  v28 = HIWORD(smudgeTypeIndex) + 3; /*0x6d8344*/
  v27 = smudgeTypeIndex - 2; /*0x6d835d*/
  v14 = 0; /*0x6d8367*/
  result = (unsigned int)((unsigned __int64)(2290649225LL * v13) >> 32) >> 31; /*0x6d8369*/
  v16 = v13 / 60 + 7; /*0x6d836e*/
  v26 = v3[3] / 15 + 20; /*0x6d8372*/
  v25 = v16; /*0x6d8376*/
  if ( v26 > 0 ) /*0x6d837a*/
  {
    do /*0x6d84bb*/
    {
      v17 = v14 + 1; /*0x6d8382*/
      LOWORD(v23) = v27 + v14 / 2; /*0x6d83a9*/
      HIWORD(v23) = v28 + (v14 + 1) / 2; /*0x6d83b4*/
      a3 = v23; /*0x6d83bf*/
      if ( v16 > 0 ) /*0x6d83c3*/
      {
        v24 = v16; /*0x6d83c9*/
        do /*0x6d84a9*/
        {
          if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3) ) /*0x6d83d7*/
          {
            v37[2] = 0.0; /*0x6d8417*/
            LODWORD(v37[0]) = ((((__int16)a3 << 8) + 128) / 256) << 8; /*0x6d8433*/
            LODWORD(v37[1]) = (((SHIWORD(a3) << 8) + 128) / 256) << 8; /*0x6d8437*/
            v18 = Coord::To_ScreenRaw((int *)&v31, v37); /*0x6d843b*/
            *(_DWORD *)v29.__pad_0 = *v18; /*0x6d8442*/
            v19 = *(_DWORD *)&this->__pad_5C[88]; /*0x6d8446*/
            v20 = v18[1]; /*0x6d844c*/
            v21 = *(_DWORD *)&this->__pad_5C[84]; /*0x6d844f*/
            v29.Vector2_field_0x04 = v20; /*0x6d8455*/
            v30[1] = v19; /*0x6d845d*/
            v30[0] = v21; /*0x6d8466*/
            Vector2::Subtract(&v29, v30); /*0x6d846a*/
            *(_DWORD *)v29.__pad_0 -= 30; /*0x6d8486*/
            v22 = (TacticalClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x6d848a*/
            TacticalClass::DrawCellTerrainOverlay(v22, (int *)v29.__pad_0, v3); /*0x6d8491*/
          }
          LOWORD(a3) = (_WORD)a3 + 1; /*0x6d8496*/
          --HIWORD(a3); /*0x6d849f*/
          --v24; /*0x6d84a5*/
        }
        while ( v24 ); /*0x6d84a9*/
        v16 = v25; /*0x6d84af*/
      }
      result = v26; /*0x6d84b3*/
      v14 = v17; /*0x6d84b7*/
    }
    while ( v17 < v26 ); /*0x6d84bb*/
  }
  return result; /*0x6d84c1*/
}



// ==== 0x006D84D0  sub_6D84D0  this=-  sig=csp ====
int *__stdcall sub_6D84D0(int *a1, int *a2)
{
  int v2; // edx
  int v4; // edx
  int v5; // [esp+4h] [ebp-8h] BYREF
  int v6; // [esp+8h] [ebp-4h]

  v2 = a2[1]; /*0x6d84da*/
  v5 = *a2; /*0x6d84dd*/
  v6 = v2; /*0x6d84e6*/
  if ( !ClampCoordMap(&v5) || byte_A8ED6B ) /*0x6d84fa*/
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



// ==== 0x006D8530  DisplayClass::ScrollTacticalView  this=DisplayClass  sig=csp ====
int __thiscall DisplayClass::ScrollTacticalView(DisplayClass *this, int a2, int a3)
{
  int v4; // edx
  int result; // eax
  int v6; // eax
  int v7; // ecx

  if ( (byte_B0CDE0 & 1) == 0 ) /*0x6d8541*/
  {
    dword_B0CE38[0] = 0; /*0x6d854e*/
    dword_B0CE3C[0] = -1; /*0x6d8553*/
    dword_B0CE40 = 1; /*0x6d855e*/
    dword_B0CE44 = -1; /*0x6d8563*/
    dword_B0CE48 = 1; /*0x6d8569*/
    dword_B0CE50 = 1; /*0x6d856e*/
    dword_B0CE4C = 0; /*0x6d8577*/
    dword_B0CE58 = 0; /*0x6d857d*/
    dword_B0CE54 = 1; /*0x6d8587*/
    dword_B0CE5C = 1; /*0x6d858d*/
    dword_B0CE60 = -1; /*0x6d8593*/
    dword_B0CE64 = 1; /*0x6d8598*/
    dword_B0CE68 = -1; /*0x6d85a3*/
    dword_B0CE6C = 0; /*0x6d85a8*/
    byte_B0CDE0 |= 1u; /*0x6d85bb*/
    dword_B0CE70 = -1; /*0x6d85c1*/
    dword_B0CE74 = -1; /*0x6d85c6*/
    atexit(nullsub_41); /*0x6d85cc*/
  }
  v4 = *(_DWORD *)&this->__pad_41E[2374]; /*0x6d85dc*/
  result = v4 + a3 * dword_B0CE38[2 * a2]; /*0x6d85fc*/
  if ( v4 != result /*0x6d8606*/
    || *(_DWORD *)&this->__pad_41E[2378] != *(_DWORD *)&this->__pad_41E[2378] + a3 * dword_B0CE3C[2 * a2] )
  {
    v6 = *(_DWORD *)&this->__pad_41E[2394]; /*0x6d8612*/
    v7 = a3 * dword_B0CE3C[2 * a2]; /*0x6d8618*/
    *(_DWORD *)&this->__pad_41E[2390] += a3 * dword_B0CE38[2 * a2]; /*0x6d861a*/
    result = v7 + v6; /*0x6d8620*/
    *(_DWORD *)&this->__pad_41E[2394] = result; /*0x6d8622*/
  }
  return result; /*0x6d8628*/
}



// ==== 0x006D8630  nullsub_41  this=-  sig=ida-proto ====
void __cdecl nullsub_41()
{
  ; /*0x6d8630*/
}



// ==== 0x006D8640  ClampCoordMap  this=AbstractClass  sig=csp ====
char __stdcall Map_ClampCoord(int *a1)
{
  int v1; // edi
  int v2; // esi
  int v3; // ecx
  int v4; // edx
  char v5; // bl
  int v6; // eax

  v1 = dword_886FA8 / 2 + 30 * (2 * dword_87F8E4 - dword_87F8DC); /*0x6d8670*/
  v2 = v1 + 60 * dword_87F8EC - dword_886FA8; /*0x6d8690*/
  v3 = dword_886FAC / 2 + 15 * (dword_87F8DC + 2 * dword_87F8E8 - 5); /*0x6d869c*/
  v4 = a1[1]; /*0x6d86b3*/
  v5 = 0; /*0x6d86ba*/
  v6 = v3 + (60 * dword_87F8F0 + 270) / 2 - dword_886FAC; /*0x6d86bc*/
  if ( v4 >= v3 ) /*0x6d86c0*/
  {
    if ( v4 > v6 ) /*0x6d86cb*/
    {
      a1[1] = v6; /*0x6d86cd*/
      v5 = 1; /*0x6d86d0*/
    }
  }
  else
  {
    v5 = 1; /*0x6d86c2*/
    a1[1] = v3; /*0x6d86c4*/
  }
  if ( *a1 >= v1 ) /*0x6d86d7*/
  {
    if ( *a1 <= v2 ) /*0x6d86e7*/
    {
      return v5; /*0x6d86f7*/
    }
    else
    {
      *a1 = v2; /*0x6d86e9*/
      return 1; /*0x6d86ef*/
    }
  }
  else
  {
    *a1 = v1; /*0x6d86d9*/
    return 1; /*0x6d86df*/
  }
}



// ==== 0x006D8700  Cell::GetAdjacentPassableMask  this=Tactical  sig=csp ====
int __stdcall Cell_GetAdjacentPassableMask(__int16 *a1, int a2)
{
  int v2; // ebp
  int v3; // edi
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
  v3 = -1; /*0x6d8710*/
  v4 = CellCoord::To_CellObj(&dword_87F7E8, a1); /*0x6d8713*/
  if ( !(_BYTE)a2 ) /*0x6d871e*/
  {
    v16 = v4[75]; /*0x6d88f4*/
    if ( (v16 & 0x18) == 0 ) /*0x6d88fc*/
      v3 = -2; /*0x6d88fe*/
    v6 = 8; /*0x6d8903*/
    if ( (v16 & 8) != 0 ) /*0x6d890a*/
    {
      v17 = a1[1] - 1; /*0x6d8919*/
      LOWORD(a2) = *a1 - 1; /*0x6d891b*/
      HIWORD(a2) = v17; /*0x6d8920*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8942*/
        v2 = 64; /*0x6d8944*/
      v18 = a1[1] - 1; /*0x6d8950*/
      LOWORD(a2) = *a1; /*0x6d8952*/
      HIWORD(a2) = v18; /*0x6d8957*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8979*/
        v2 |= 0x80u; /*0x6d897b*/
      v19 = a1[1] - 1; /*0x6d898a*/
      LOWORD(a2) = *a1 + 1; /*0x6d898c*/
      HIWORD(a2) = v19; /*0x6d8995*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d89b3*/
        v2 |= 1u; /*0x6d89b5*/
      v20 = *a1 - 1; /*0x6d89bf*/
      HIWORD(a2) = a1[1]; /*0x6d89c1*/
      LOWORD(a2) = v20; /*0x6d89c6*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d89e8*/
        v2 |= 0x20u; /*0x6d89ea*/
      v21 = *a1 + 1; /*0x6d89f4*/
      HIWORD(a2) = a1[1]; /*0x6d89f6*/
      LOWORD(a2) = v21; /*0x6d89fb*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8a1d*/
        v2 |= 2u; /*0x6d8a1f*/
      v22 = a1[1] + 1; /*0x6d8a2b*/
      LOWORD(a2) = *a1 - 1; /*0x6d8a2d*/
      HIWORD(a2) = v22; /*0x6d8a36*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8a54*/
        v2 |= 0x10u; /*0x6d8a56*/
      v23 = a1[1] + 1; /*0x6d8a60*/
      LOWORD(a2) = *a1; /*0x6d8a62*/
      HIWORD(a2) = v23; /*0x6d8a67*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8a89*/
        v2 |= 8u; /*0x6d8a8b*/
      v24 = a1[1] + 1; /*0x6d8a96*/
      LOWORD(a2) = *a1 + 1; /*0x6d8a98*/
      HIWORD(a2) = v24; /*0x6d8a9d*/
      v15 = *((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 300); /*0x6d8ab9*/
      goto LABEL_38; /*0x6d8ab9*/
    }
    return v3; /*0x6d8ad4*/
  }
  v5 = v4[80]; /*0x6d8724*/
  if ( (v5 & 3) == 0 ) /*0x6d872c*/
    v3 = -2; /*0x6d872e*/
  v6 = 2; /*0x6d8733*/
  if ( (v5 & 2) == 0 ) /*0x6d873a*/
    return v3; /*0x6d873a*/
  v7 = a1[1] - 1; /*0x6d8749*/
  LOWORD(a2) = *a1 - 1; /*0x6d874b*/
  HIWORD(a2) = v7; /*0x6d8750*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d8772*/
    v2 = 64; /*0x6d8774*/
  v8 = a1[1]; /*0x6d877c*/
  LOWORD(a2) = *a1; /*0x6d8780*/
  HIWORD(a2) = v8 - 1; /*0x6d878b*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d87a9*/
    v2 |= 0x80u; /*0x6d87ab*/
  v9 = a1[1] - 1; /*0x6d87ba*/
  LOWORD(a2) = *a1 + 1; /*0x6d87bc*/
  HIWORD(a2) = v9; /*0x6d87c1*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d87e3*/
    v2 |= 1u; /*0x6d87e5*/
  v10 = *a1 - 1; /*0x6d87ef*/
  HIWORD(a2) = a1[1]; /*0x6d87f1*/
  LOWORD(a2) = v10; /*0x6d87f6*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d8818*/
    v2 |= 0x20u; /*0x6d881a*/
  v11 = *a1 + 1; /*0x6d8824*/
  HIWORD(a2) = a1[1]; /*0x6d8826*/
  LOWORD(a2) = v11; /*0x6d882b*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d884d*/
    v2 |= 2u; /*0x6d884f*/
  v12 = a1[1] + 1; /*0x6d885a*/
  LOWORD(a2) = *a1 - 1; /*0x6d885c*/
  HIWORD(a2) = v12; /*0x6d8861*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d8883*/
    v2 |= 0x10u; /*0x6d8885*/
  v13 = a1[1] + 1; /*0x6d888f*/
  LOWORD(a2) = *a1; /*0x6d8891*/
  HIWORD(a2) = v13; /*0x6d8896*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d88b8*/
    v2 |= 8u; /*0x6d88ba*/
  v14 = a1[1] + 1; /*0x6d88c6*/
  LOWORD(a2) = *a1 + 1; /*0x6d88c8*/
  HIWORD(a2) = v14; /*0x6d88d1*/
  v15 = *((_BYTE *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2) + 320); /*0x6d88e9*/
LABEL_38:
  if ( (v15 & (unsigned __int8)v6) == 0 ) /*0x6d8ac1*/
    v2 |= 4u; /*0x6d8ac3*/
  return byte_7F4194[v2]; /*0x6d8acd*/
}



// ==== 0x006D8B30  TacticalClass::CalcViewportCells  this=TacticalClass  sig=csp ====
unsigned int __thiscall TacticalClass::CalcViewportCells(TacticalClass *this)
{
  int TacticalClass_field_D64; // ecx
  int TacticalClass_field_D68; // edi
  double v4; // st7
  int v5; // eax
  float *v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  unsigned int result; // eax
  float v11[3]; // [esp+8h] [ebp-18h] BYREF
  float v12; // [esp+14h] [ebp-Ch] BYREF
  float v13; // [esp+18h] [ebp-8h]
  int v14; // [esp+1Ch] [ebp-4h]

  v14 = 0; /*0x6d8b37*/
  TacticalClass_field_D64 = this->TacticalClass_field_D64; /*0x6d8b3f*/
  TacticalClass_field_D68 = this->TacticalClass_field_D68; /*0x6d8b45*/
  this->visibleArea[0] = TacticalClass_field_D64; /*0x6d8b4b*/
  this->visibleArea[1] = TacticalClass_field_D68; /*0x6d8b51*/
  this->visibleArea[0] = TacticalClass_field_D64 - dword_B0CE30 / 2; /*0x6d8b63*/
  LODWORD(v11[0]) = this->visibleArea[0] - 60; /*0x6d8b80*/
  v4 = (double)SLODWORD(v11[0]); /*0x6d8b84*/
  v5 = TacticalClass_field_D68 - dword_B0CE34 / 2; /*0x6d8b88*/
  this->visibleArea[1] = v5; /*0x6d8b90*/
  v12 = v4; /*0x6d8b99*/
  LODWORD(v11[1]) = v5 - 30; /*0x6d8b9d*/
  v13 = (float)(v5 - 30); /*0x6d8bae*/
  v6 = TransformMatrix3x4Point(v11, (float *)this->TacticalClass_field_DE4, &v12); /*0x6d8bb2*/
  v12 = *v6; /*0x6d8bb9*/
  v13 = v6[1]; /*0x6d8bc4*/
  v14 = *((_DWORD *)v6 + 2); /*0x6d8bcb*/
  LOWORD(v7) = Math::RoundToInt(v12); /*0x6d8bcf*/
  v8 = v7; /*0x6d8bd8*/
  LOWORD(v9) = Math::RoundToInt(v13); /*0x6d8bda*/
  this->TacticalClass_field_D80 = v8 / 256; /*0x6d8bf0*/
  this->TacticalClass_field_D84 = v9 / 256; /*0x6d8c04*/
  this->TacticalClass_field_D88 = dword_B0CE30 / 60 + 2; /*0x6d8c2a*/
  result = (unsigned int)((unsigned __int64)(2290649225LL * dword_B0CE34) >> 32) >> 31; /*0x6d8c3f*/
  this->TacticalClass_field_D8C = dword_B0CE34 / 15 + 4; /*0x6d8c46*/
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
  v6 = Math::RoundToInt((double)(int)v3[2] * dbl_B0CD48 + (double)(v3[2] >= 728) + 0.5); /*0x6d8d21*/
  v12 = v4; /*0x6d8d2d*/
  v13 = v5 - v6; /*0x6d8d31*/
  result = (int)g_TacticalClass_Instance[45].__tail_0; /*0x6d8d3b*/
  v8 = v4 - (unsigned int)g_TacticalClass_Instance[44].__tail_0; /*0x6d8d41*/
  v9 = v13 - result; /*0x6d8d43*/
  v12 = v8; /*0x6d8d4b*/
  v13 -= result; /*0x6d8d4f*/
  if ( v8 >= -360 ) /*0x6d8d53*/
  {
    result = dword_B0CE30 + 360; /*0x6d8d5a*/
    if ( v8 <= dword_B0CE30 + 360 && v9 >= -180 && v9 <= dword_B0CE34 + 180 ) /*0x6d8d79*/
    {
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 268))(a1, &v12, a2); /*0x6d8d8a*/
      return (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 272))(a1, &v12, a2); /*0x6d8d9b*/
    }
  }
  return result; /*0x6d8da1*/
}



// ==== 0x006D8DB0  TacticalMap::RenderAllObjects  this=TacticalMap  sig=csp ====
int __thiscall TacticalMap::RenderAllObjects(TacticalMap *this, int a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // edi
  float *v5; // ebp
  IsoCoord *v6; // eax
  int v7; // eax
  int v8; // eax
  IsoCoord *v9; // eax
  int v10; // eax
  int v11; // edi
  IsoCoord *v12; // eax
  int v13; // eax
  int v14; // ebp
  int v15; // edi
  int v16; // eax
  int v17; // ebx
  int *v18; // esi
  int v19; // eax
  int v20; // ecx
  _DWORD *v21; // eax
  LPPERSISTSTREAM v22; // edi
  int *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  _DWORD *v29; // eax
  int v30; // edx
  int v31; // eax
  int *v32; // edx
  int v33; // eax
  int v34; // ecx
  char v35; // al
  int v36; // eax
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int *v41; // eax
  LPPERSISTSTREAM v42; // ebx
  int *v43; // edi
  int *v44; // ecx
  int v45; // eax
  int v46; // edx
  int v47; // ecx
  int v48; // kr18_4
  int v49; // eax
  IPersistStream v50; // eax
  int v51; // edx
  int v52; // ecx
  int v53; // ecx
  BuildingClass *v54; // ebx
  int *v55; // eax
  LPPERSISTSTREAM v56; // ebp
  int *v57; // edi
  _DWORD *v58; // eax
  int v59; // ecx
  __int64 v60; // rax
  int v61; // esi
  int v62; // eax
  int v63; // esi
  int v64; // eax
  int *p_count; // ecx
  int result; // eax
  int v67; // ebx
  int *v68; // eax
  int v69; // esi
  int v70; // edi
  int v71; // esi
  int v72; // eax
  int v73; // edi
  int v74; // esi
  bool v75; // cc
  int v76; // [esp+10h] [ebp-104h]
  int v77; // [esp+28h] [ebp-ECh]
  int v78; // [esp+28h] [ebp-ECh]
  int v79; // [esp+28h] [ebp-ECh]
  int v80; // [esp+28h] [ebp-ECh]
  int v81; // [esp+2Ch] [ebp-E8h] BYREF
  int v82; // [esp+30h] [ebp-E4h]
  IsoCoord v83; // [esp+34h] [ebp-E0h] BYREF
  int v84; // [esp+3Ch] [ebp-D8h]
  int *v85; // [esp+40h] [ebp-D4h]
  int v86; // [esp+44h] [ebp-D0h]
  int v87; // [esp+48h] [ebp-CCh]
  int v88; // [esp+4Ch] [ebp-C8h]
  int v89; // [esp+50h] [ebp-C4h] BYREF
  int v90; // [esp+54h] [ebp-C0h]
  int v91; // [esp+58h] [ebp-BCh]
  int v92; // [esp+5Ch] [ebp-B8h] BYREF
  int v93; // [esp+60h] [ebp-B4h]
  Vector2 v94; // [esp+64h] [ebp-B0h] BYREF
  int v95; // [esp+74h] [ebp-A0h]
  int v96; // [esp+78h] [ebp-9Ch]
  IsoCoord v97; // [esp+7Ch] [ebp-98h] BYREF
  int v98; // [esp+84h] [ebp-90h]
  int v99; // [esp+8Ch] [ebp-88h]
  _DWORD v100[2]; // [esp+90h] [ebp-84h] BYREF
  int v101[4]; // [esp+98h] [ebp-7Ch] BYREF
  int v102[3]; // [esp+A8h] [ebp-6Ch] BYREF
  int v103; // [esp+B4h] [ebp-60h]
  _BYTE v104[12]; // [esp+B8h] [ebp-5Ch] BYREF
  _BYTE v105[12]; // [esp+C4h] [ebp-50h] BYREF
  int v106; // [esp+D0h] [ebp-44h] BYREF
  char v107[12]; // [esp+D8h] [ebp-3Ch] BYREF
  char v108[12]; // [esp+E4h] [ebp-30h] BYREF
  char v109[12]; // [esp+F0h] [ebp-24h] BYREF
  char v110[12]; // [esp+FCh] [ebp-18h] BYREF
  char v111[12]; // [esp+108h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x6d8db7*/
  v3 = *((_DWORD *)this + 44); /*0x6d8dc4*/
  v4 = *((_DWORD *)this + 45); /*0x6d8dd5*/
  v81 = v3 + *(_DWORD *)DSurface_ViewBounds.__pad_8 / 2; /*0x6d8ddb*/
  v77 = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x6d8de5*/
  v5 = (float *)((char *)this + 3556); /*0x6d8deb*/
  *(float *)v83.__pad_0 = (float)v81; /*0x6d8df1*/
  v82 = v4 - *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x6d8df5*/
  v84 = 0; /*0x6d8e08*/
  *(float *)&v83.IsoCoord_field_0x04 = (float)(v4 - *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]); /*0x6d8e10*/
  v6 = (IsoCoord *)TransformMatrix3x4Point((float *)v97.__pad_0, (float *)this + 889, (float *)v83.__pad_0); /*0x6d8e14*/
  v83 = *v6; /*0x6d8e1b*/
  v84 = *(_DWORD *)v6[1].__pad_0; /*0x6d8e2d*/
  LOWORD(v7) = Math::RoundToInt(*(float *)v83.__pad_0); /*0x6d8e31*/
  v86 = v7; /*0x6d8e3a*/
  LOWORD(v8) = Math::RoundToInt(*(float *)&v83.IsoCoord_field_0x04); /*0x6d8e3e*/
  v87 = v8; /*0x6d8e43*/
  v81 = v3 + 2 * v2; /*0x6d8e4a*/
  *(float *)v83.__pad_0 = (float)v81; /*0x6d8e62*/
  v78 = v77 / 2 + v4; /*0x6d8e74*/
  v82 = v78; /*0x6d8e66*/
  v84 = 0; /*0x6d8e78*/
  *(float *)&v83.IsoCoord_field_0x04 = (float)v78; /*0x6d8e80*/
  v9 = (IsoCoord *)TransformMatrix3x4Point((float *)v97.__pad_0, v5, (float *)v83.__pad_0); /*0x6d8e84*/
  v83 = *v9; /*0x6d8e8b*/
  v84 = *(_DWORD *)v9[1].__pad_0; /*0x6d8e9d*/
  LOWORD(v10) = Math::RoundToInt(*(float *)v83.__pad_0); /*0x6d8ea1*/
  v11 = v10; /*0x6d8ea8*/
  v81 = v3 - v2; /*0x6d8eae*/
  v82 = v78; /*0x6d8eb6*/
  *(float *)v83.__pad_0 = (float)(v3 - v2); /*0x6d8eba*/
  *(float *)&v83.IsoCoord_field_0x04 = (float)v78; /*0x6d8ecd*/
  v84 = 0; /*0x6d8ed1*/
  v12 = (IsoCoord *)TransformMatrix3x4Point((float *)v97.__pad_0, v5, (float *)v83.__pad_0); /*0x6d8ed9*/
  v83 = *v12; /*0x6d8ee0*/
  v84 = *(_DWORD *)v12[1].__pad_0; /*0x6d8ef2*/
  LOWORD(v13) = Math::RoundToInt(*(float *)&v83.IsoCoord_field_0x04); /*0x6d8ef6*/
  v14 = v86; /*0x6d8efb*/
  v95 = 2 * (v11 - v86); /*0x6d8f03*/
  v15 = v87; /*0x6d8f07*/
  v96 = 2 * (v13 - v87); /*0x6d8f0f*/
  v16 = 0; /*0x6d8f13*/
  v85 = 0; /*0x6d8f15*/
  do /*0x6d95a9*/
  {
    v88 = 0; /*0x6d8f1c*/
    v17 = 24 * v16; /*0x6d8f24*/
    v79 = 24 * v16; /*0x6d8f27*/
    if ( dword_8A0370[6 * v16] > 0 ) /*0x6d8f33*/
    {
      while ( 1 ) /*0x6d8f43*/
      {
        v18 = *(int **)(*(int *)((char *)&stru_8A0360.items[1] + v17) + 4 * v88); /*0x6d8f43*/
        *((_BYTE *)v18 + 153) = 0; /*0x6d8f48*/
        if ( !v18 ) /*0x6d8f4f*/
          goto LABEL_25; /*0x6d8f4f*/
        if ( (v18[5] & 4) != 0 ) /*0x6d8f64*/
        {
          v19 = v18[39]; /*0x6d8f72*/
          v89 = v19; /*0x6d8f74*/
          v20 = v18[40]; /*0x6d8f7a*/
          v90 = v20; /*0x6d8f7d*/
          v91 = v18[41]; /*0x6d8f84*/
          if ( v19 < v14 ) /*0x6d8f88*/
            goto LABEL_54; /*0x6d8f88*/
          if ( v19 >= v14 + v95 ) /*0x6d8f96*/
            goto LABEL_54; /*0x6d8f96*/
          if ( v20 < v15 ) /*0x6d8f9e*/
            goto LABEL_54; /*0x6d8f9e*/
          if ( v20 >= v15 + v96 ) /*0x6d8fac*/
            goto LABEL_54; /*0x6d8fac*/
          (*(void (__thiscall **)(int *, char *, _DWORD))(*v18 + 76))(v18, v110, 0); /*0x6d8fc0*/
          if ( ((int)dword_A8B230->vtable0 & 0x1000) != 0 ) /*0x6d8fce*/
          {
            if ( (unsigned __int8)Game::Stub3((int)&v89) ) /*0x6d8fda*/
              goto LABEL_54; /*0x6d8fe1*/
          }
          v21 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(*v18 + 72))(v18, v107); /*0x6d8ff3*/
          v22 = g_TacticalClass_Instance; /*0x6d8ff6*/
          v23 = Coord::To_ScreenRaw(&v106, v21); /*0x6d9007*/
          v81 = *v23; /*0x6d9010*/
          v82 = v23[1]; /*0x6d9017*/
          v24 = v82 - *(_DWORD *)&v22[45]; /*0x6d9029*/
          v81 -= *(_DWORD *)&v22[44]; /*0x6d9030*/
          v82 = v24; /*0x6d9034*/
          if ( v81 >= -360 && v81 <= dword_B0CE30 + 360 && v24 >= -180 && v24 <= dword_B0CE34 + 180 ) /*0x6d906a*/
          {
            v25 = *v18; /*0x6d9070*/
            *((_BYTE *)v18 + 153) = 1; /*0x6d907e*/
            (*(void (__thiscall **)(int *, int *, CellStruct *))(v25 + 268))(v18, &v81, &DSurface_ViewBounds); /*0x6d9085*/
            (*(void (__thiscall **)(int *, CellStruct *, int, _DWORD))(*v18 + 260))(v18, &DSurface_ViewBounds, a2, 0); /*0x6d909e*/
          }
          goto LABEL_53; /*0x6d90a4*/
        }
        if ( (v18[5] & 1) != 0 ) /*0x6d90af*/
        {
          v26 = v18[39]; /*0x6d90bd*/
          v89 = v26; /*0x6d90bf*/
          v27 = v18[40]; /*0x6d90c5*/
          v90 = v27; /*0x6d90c8*/
          v91 = v18[41]; /*0x6d90cf*/
          if ( v26 < v14 || v26 >= v14 + v95 || v27 < v15 || v27 >= v15 + v96 ) /*0x6d90f7*/
            goto LABEL_54; /*0x6d90f7*/
          v28 = *v18; /*0x6d90fd*/
          *((_BYTE *)v18 + 153) = 1; /*0x6d9111*/
          v29 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(v28 + 72))(v18, v109); /*0x6d9118*/
          if ( Coord::To_Screen((Coord *)g_TacticalClass_Instance, v29, v102) ) /*0x6d9122*/
          {
            (*(void (__thiscall **)(int *, int *, CellStruct *))(*v18 + 268))(v18, v102, &DSurface_ViewBounds); /*0x6d913c*/
            (*(void (__thiscall **)(int *, int *, CellStruct *))(*v18 + 272))(v18, v102, &DSurface_ViewBounds); /*0x6d9153*/
          }
          v30 = *v18; /*0x6d9159*/
          v76 = 1; /*0x6d915b*/
        }
        else
        {
LABEL_25:
          v31 = (*(int (__thiscall **)(int *))(*v18 + 44))(v18); /*0x6d917b*/
          if ( v31 == 4 ) /*0x6d9181*/
          {
            v32 = (int *)(*(int (__thiscall **)(int *, char *))(*v18 + 72))(v18, v111); /*0x6d9196*/
            v33 = *v32; /*0x6d9198*/
            v89 = v33; /*0x6d919a*/
            v34 = v32[1]; /*0x6d91a0*/
            v90 = v34; /*0x6d91a3*/
            v91 = v32[2]; /*0x6d91aa*/
            if ( v33 < v14 ) /*0x6d91ae*/
              goto LABEL_54; /*0x6d91ae*/
            if ( v33 >= v14 + v95 ) /*0x6d91bc*/
              goto LABEL_54; /*0x6d91bc*/
            if ( v34 < v15 ) /*0x6d91c4*/
              goto LABEL_54; /*0x6d91c4*/
            if ( v34 >= v15 + v96 ) /*0x6d91d2*/
              goto LABEL_54; /*0x6d91d2*/
            v35 = *((_BYTE *)v18 + 280); /*0x6d91d8*/
            *((_BYTE *)v18 + 153) = 1; /*0x6d91de*/
            if ( !v35 ) /*0x6d91e7*/
            {
              if ( *(_BYTE *)(v18[50] + 884) ) /*0x6d91ef*/
              {
                v36 = (*(int (__thiscall **)(int *, char *))(*v18 + 72))(v18, v108); /*0x6d9205*/
                if ( (unsigned __int8)Game::Stub3(v36) ) /*0x6d920e*/
                  goto LABEL_54; /*0x6d9215*/
              }
            }
            v30 = *v18; /*0x6d921b*/
            v76 = 0; /*0x6d921d*/
          }
          else
          {
            if ( v31 != 36 ) /*0x6d9227*/
            {
              v39 = v18[39]; /*0x6d92c4*/
              v89 = v39; /*0x6d92c6*/
              v40 = v18[40]; /*0x6d92cc*/
              v90 = v40; /*0x6d92cf*/
              v91 = v18[41]; /*0x6d92d6*/
              if ( v39 < v14 || v39 >= v14 + v95 || v40 < v15 || v40 >= v15 + v96 ) /*0x6d92fe*/
                goto LABEL_54; /*0x6d92fe*/
              v41 = (int *)(*(int (__thiscall **)(int *, _BYTE *))(*v18 + 72))(v18, v104); /*0x6d9310*/
              v42 = g_TacticalClass_Instance; /*0x6d9313*/
              v43 = v41; /*0x6d9319*/
              v44 = IsoCoord::ToPixel(&v97, *v41, v41[1]); /*0x6d932b*/
              v45 = *v44; /*0x6d932d*/
              v46 = v44[1]; /*0x6d932f*/
              v47 = v43[2]; /*0x6d9332*/
              v103 = v46; /*0x6d9335*/
              v48 = v45; /*0x6d9343*/
              v49 = ZCoordToScreenY(v47); /*0x6d934a*/
              *(_DWORD *)v94.__pad_0 = v48 / 256; /*0x6d935f*/
              v94.Vector2_field_0x04 = v103 / 256 - v49; /*0x6d936e*/
              v50 = v42[45]; /*0x6d9378*/
              v100[0] = v42[44]; /*0x6d9383*/
              v100[1] = v50; /*0x6d938a*/
              Vector2::Subtract(&v94, v100); /*0x6d9391*/
              if ( *(int *)v94.__pad_0 >= -360 /*0x6d93ca*/
                && *(int *)v94.__pad_0 <= dword_B0CE30 + 360
                && v94.Vector2_field_0x04 >= -180
                && v94.Vector2_field_0x04 <= dword_B0CE34 + 180 )
              {
                v51 = *v18; /*0x6d93cc*/
                *((_BYTE *)v18 + 153) = 1; /*0x6d93da*/
                (*(void (__thiscall **)(int *, Vector2 *, CellStruct *))(v51 + 268))(v18, &v94, &DSurface_ViewBounds); /*0x6d93e1*/
                (*(void (__thiscall **)(int *, CellStruct *, int, _DWORD))(*v18 + 260))( /*0x6d93fa*/
                  v18,
                  &DSurface_ViewBounds,
                  a2,
                  0);
              }
              v17 = v79; /*0x6d9400*/
              v14 = v86; /*0x6d9404*/
LABEL_53:
              v15 = v87; /*0x6d9408*/
              goto LABEL_54; /*0x6d9408*/
            }
            if ( !*(_BYTE *)(v18[50] + 691) && !*((_BYTE *)v18 + 205) ) /*0x6d923d*/
              goto LABEL_54; /*0x6d923d*/
            v37 = v18[39]; /*0x6d9251*/
            v89 = v37; /*0x6d9257*/
            v38 = v18[40]; /*0x6d925d*/
            v90 = v38; /*0x6d9260*/
            v91 = v18[41]; /*0x6d9267*/
            if ( v37 < v14 /*0x6d929f*/
              || v37 >= v14 + v95
              || v38 < v15
              || v38 >= v15 + v96
              || (unsigned __int8)Game::Stub3((int)&v89) )
            {
              goto LABEL_54; /*0x6d92a6*/
            }
            v30 = *v18; /*0x6d92ac*/
            *((_BYTE *)v18 + 153) = 1; /*0x6d92ae*/
            v76 = 0; /*0x6d92b5*/
          }
        }
        (*(void (__thiscall **)(int *, CellStruct *, int, int))(v30 + 260))(v18, &DSurface_ViewBounds, a2, v76); /*0x6d916c*/
LABEL_54:
        v52 = *(int *)((char *)dword_8A0370 + v17); /*0x6d940c*/
        if ( ++v88 >= v52 ) /*0x6d941d*/
        {
          v16 = (int)v85; /*0x6d9423*/
          break; /*0x6d9423*/
        }
      }
    }
    if ( v16 == 2 ) /*0x6d942a*/
    {
      v53 = 0; /*0x6d9436*/
      v80 = 0; /*0x6d943a*/
      if ( stru_A8EB00.ObjectTypeClass[20] > 0 ) /*0x6d943e*/
      {
        do /*0x6d9597*/
        {
          v54 = *(BuildingClass **)(stru_A8EB00.ObjectTypeClass[17] + 4 * v53); /*0x6d944a*/
          if ( v54->? && v54->? ) /*0x6d9458*/
          {
            v55 = (int *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))v54->TechnoClass + 43))(v54, v105); /*0x6d9472*/
            v56 = g_TacticalClass_Instance; /*0x6d9478*/
            v57 = v55; /*0x6d947e*/
            v58 = IsoCoord::ToPixel(&v83, *v55, v55[1]); /*0x6d948b*/
            v59 = v58[1]; /*0x6d9494*/
            v60 = (int)*v58; /*0x6d9497*/
            v99 = v59; /*0x6d949e*/
            v61 = (BYTE4(v60) + (int)v60) >> 8; /*0x6d94a9*/
            v62 = ZCoordToScreenY(v57[2]); /*0x6d94ac*/
            v92 = v61; /*0x6d94be*/
            v93 = v99 / 256 - v62; /*0x6d94c9*/
            v63 = v61 - *(_DWORD *)&v56[44]; /*0x6d94d9*/
            v64 = v93 - *(_DWORD *)&v56[45]; /*0x6d94db*/
            v92 = v63; /*0x6d94e3*/
            v93 = v64; /*0x6d94e7*/
            if ( v63 >= -360 && v63 <= dword_B0CE30 + 360 && v64 >= -180 && v64 <= dword_B0CE34 + 180 ) /*0x6d9516*/
            {
              v101[2] = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x6d952a*/
              v101[0] = DSurface_ViewBounds.field_0; /*0x6d9539*/
              v101[1] = (int)DSurface_ViewBounds.field_4; /*0x6d9540*/
              v101[3] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x6d9547*/
              BuildingClass::DrawVisible(v54, &v92, v101); /*0x6d957a*/
            }
            v14 = v86; /*0x6d957f*/
            v15 = v87; /*0x6d9583*/
          }
          v53 = ++v80; /*0x6d9590*/
        }
        while ( v80 < stru_A8EB00.ObjectTypeClass[20] ); /*0x6d9597*/
        v16 = (int)v85; /*0x6d959d*/
      }
    }
    v85 = (int *)++v16; /*0x6d95a5*/
  }
  while ( v16 < 5 ); /*0x6d95a9*/
  p_count = &stru_8A0360.count; /*0x6d95af*/
  v85 = &stru_8A0360.count; /*0x6d95b4*/
  do /*0x6d97b5*/
  {
    result = 0; /*0x6d95bb*/
    v86 = p_count[3]; /*0x6d95bf*/
    v88 = 0; /*0x6d95c3*/
    if ( v86 > 0 ) /*0x6d95c7*/
    {
      do /*0x6d97a2*/
      {
        v67 = *(_DWORD *)(*p_count + 4 * result); /*0x6d95cf*/
        if ( *(_BYTE *)(v67 + 153) ) /*0x6d95d2*/
        {
          if ( v67 ) /*0x6d95e2*/
          {
            if ( (*(_BYTE *)(v67 + 20) & 1) != 0 ) /*0x6d95f4*/
            {
              if ( (*(_BYTE *)(v67 + 20) & 4) == 0 /*0x6d965d*/
                || ((*(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v67 + 76))(v67, v105, 0), !g_hWnd)
                || stru_A8EB00.?[391]
                || ((int)dword_A8B230->vtable0 & 0x1000) == 0
                || (v97 = *(IsoCoord *)(v67 + 156),
                    v98 = *(_DWORD *)(v67 + 164),
                    !(unsigned __int8)Game::Stub3((int)&v97)) )
              {
                v68 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v67 + 72))(v67, v104); /*0x6d9676*/
                v69 = *v68; /*0x6d9683*/
                v99 = v68[1]; /*0x6d9689*/
                v92 = v68[2]; /*0x6d9697*/
                *(_DWORD *)v83.__pad_0 = -60 * v99 / 2 + 60 * v69 / 2; /*0x6d96d0*/
                v70 = *(_DWORD *)v83.__pad_0 / 256; /*0x6d96f7*/
                v71 = (30 * v99 / 2 + 30 * v69 / 2) / 256; /*0x6d96fa*/
                LOWORD(v72) = Math::RoundToInt((double)v92 * dbl_B0CD48 + (double)(v92 >= 728) + 0.5); /*0x6d9721*/
                v81 = v70; /*0x6d972d*/
                v82 = v71 - v72; /*0x6d9731*/
                v73 = v70 - *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x6d9741*/
                v74 = v71 - v72 - *(_DWORD *)&g_TacticalClass_Instance[45]; /*0x6d9743*/
                v81 = v73; /*0x6d974b*/
                v82 = v74; /*0x6d974f*/
                if ( v73 >= -360 && v73 <= dword_B0CE30 + 360 && v74 >= -180 && v74 <= dword_B0CE34 + 180 ) /*0x6d9779*/
                  (*(void (__thiscall **)(int, int *, CellStruct *))(*(_DWORD *)v67 + 272))( /*0x6d9789*/
                    v67,
                    &v81,
                    &DSurface_ViewBounds);
              }
            }
          }
        }
        result = v88 + 1; /*0x6d9797*/
        v75 = v88 + 1 < v86; /*0x6d9798*/
        p_count = v85; /*0x6d979a*/
        ++v88; /*0x6d979e*/
      }
      while ( v75 ); /*0x6d97a2*/
    }
    p_count += 6; /*0x6d97a8*/
    v85 = p_count; /*0x6d97b1*/
  }
  while ( (int)p_count < (int)&stru_8A0390.ambientSoundController[4] ); /*0x6d97b5*/
  return result; /*0x6d97bb*/
}



// ==== 0x006D97D0  TacticalClass::FindOverlay  this=AbstractClass  sig=csp ====
int __stdcall TacticalClass_FindOverlay(int a1, int *a2, int *a3)
{
  int *v3; // eax
  int v4; // edx
  int result; // eax
  _BYTE *v6; // esi
  int v7; // edi
  int v8; // ebp
  _DWORD *v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // [esp+4h] [ebp-30h]
  int v16; // [esp+8h] [ebp-2Ch]
  int v17; // [esp+Ch] [ebp-28h]
  int v18; // [esp+10h] [ebp-24h]
  _DWORD v19[4]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v20[16]; // [esp+24h] [ebp-10h] BYREF
  int i; // [esp+3Ch] [ebp+8h]

  v3 = ClipRectIntersection(v19, a2, a3, 0, 0); /*0x6d97e4*/
  v15 = *v3; /*0x6d97eb*/
  v16 = v3[1]; /*0x6d97f2*/
  v17 = v3[2]; /*0x6d97f9*/
  v4 = v3[3]; /*0x6d97fd*/
  result = dword_8A03A0 - 1; /*0x6d9805*/
  v18 = v4; /*0x6d9806*/
  for ( i = dword_8A03A0 - 1; i >= 0; --i ) /*0x6d9810*/
  {
    v6 = *(_BYTE **)(dword_8A0394 + 4 * result); /*0x6d9820*/
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 44))(v6) == 36 /*0x6d9856*/
      && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 68))(v6)
      && !*(_BYTE *)(*((_DWORD *)v6 + 50) + 691)
      && !v6[205] )
    {
      v7 = DSurface_ViewBounds; /*0x6d9866*/
      v8 = dword_886FA4; /*0x6d986c*/
      v9 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v6 + 300))(v6, v20); /*0x6d9879*/
      v10 = v8 + v9[1]; /*0x6d9888*/
      v11 = v7 + *v9; /*0x6d988e*/
      v12 = v9[2]; /*0x6d9890*/
      v13 = v9[3]; /*0x6d9893*/
      if ( v11 < v15 + v17 && v10 < v16 + v18 && v11 + v12 > v15 && v10 + v13 > v16 ) /*0x6d98b8*/
      {
        v19[0] = *a3; /*0x6d98c2*/
        v19[1] = a3[1]; /*0x6d98c9*/
        v19[2] = a3[2]; /*0x6d98d0*/
        v14 = *(_DWORD *)v6; /*0x6d98d4*/
        v19[3] = a3[3]; /*0x6d98dd*/
        (*(void (__thiscall **)(_BYTE *, _DWORD *, int, _DWORD))(v14 + 260))(v6, v19, a1, 0); /*0x6d98e9*/
        v6[128] = 0; /*0x6d98ef*/
      }
    }
    result = i - 1; /*0x6d98fa*/
  }
  return result; /*0x6d9909*/
}



// ==== 0x006D9920  TacticalClass::FindBuilding  this=AbstractClass  sig=csp ====
int __stdcall TacticalClass_FindBuilding(int a1, int *a2, int *a3)
{
  int *v3; // eax
  int v4; // edx
  int result; // eax
  _BYTE *v6; // esi
  int v7; // edi
  int v8; // ebp
  _DWORD *v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // [esp+4h] [ebp-30h]
  int v16; // [esp+8h] [ebp-2Ch]
  int v17; // [esp+Ch] [ebp-28h]
  int v18; // [esp+10h] [ebp-24h]
  _DWORD v19[4]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v20[16]; // [esp+24h] [ebp-10h] BYREF
  int i; // [esp+3Ch] [ebp+8h]

  v3 = ClipRectIntersection(v19, a2, a3, 0, 0); /*0x6d9934*/
  v15 = *v3; /*0x6d993b*/
  v16 = v3[1]; /*0x6d9942*/
  v17 = v3[2]; /*0x6d9949*/
  v4 = v3[3]; /*0x6d9953*/
  result = 0; /*0x6d9956*/
  v18 = v4; /*0x6d995a*/
  for ( i = 0; i < dword_8A03A0; ++i ) /*0x6d9962*/
  {
    v6 = *(_BYTE **)(dword_8A0394 + 4 * result); /*0x6d9972*/
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 44))(v6) == 6 && (!v6[1767] || byte_A8ED6B) ) /*0x6d9996*/
    {
      v7 = DSurface_ViewBounds; /*0x6d999e*/
      v8 = dword_886FA4; /*0x6d99a4*/
      v9 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v6 + 300))(v6, v20); /*0x6d99b1*/
      v10 = v8 + v9[1]; /*0x6d99c0*/
      v11 = v7 + *v9; /*0x6d99c6*/
      v12 = v9[2]; /*0x6d99c8*/
      v13 = v9[3]; /*0x6d99cb*/
      if ( v11 < v15 + v17 && v10 < v16 + v18 && v11 + v12 > v15 && v10 + v13 > v16 ) /*0x6d99f0*/
      {
        v19[0] = *a3; /*0x6d99fa*/
        v19[1] = a3[1]; /*0x6d9a01*/
        v19[2] = a3[2]; /*0x6d9a08*/
        v14 = *(_DWORD *)v6; /*0x6d9a13*/
        v19[3] = a3[3]; /*0x6d9a15*/
        (*(void (__thiscall **)(_BYTE *, _DWORD *, int, _DWORD))(v14 + 260))(v6, v19, a1, 0); /*0x6d9a21*/
        v6[128] = 0; /*0x6d9a27*/
      }
    }
    result = i + 1; /*0x6d9a38*/
  }
  return result; /*0x6d9a49*/
}



// ==== 0x006D9A50  Render_Render_6D9A50  this=Tactical  sig=csp ====
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
  for ( i = 0; i < dword_8A03A0; ++i ) /*0x6d9a69*/
  {
    v5 = *(_BYTE **)(dword_8A0394 + 4 * result); /*0x6d9a75*/
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 44))(v5) == 6 ) /*0x6d9a82*/
    {
      if ( v5[128] ) /*0x6d9a88*/
      {
        v6 = (int *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v5 + 300))(v5, v10); /*0x6d9a9f*/
        v7 = DSurface_ViewBounds + *v6; /*0x6d9aaf*/
        v8 = dword_886FA4 + v6[1]; /*0x6d9ac4*/
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



// ==== 0x006D9B50  TacticalClass::CheckUnitOverlap  this=TacticalClass  sig=csp ====
char __thiscall TacticalClass::CheckUnitOverlap(TacticalClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // ecx
  int v7; // ebx
  int v8; // eax
  _BYTE *v9; // ecx
  _DWORD *v10; // eax
  int v11; // ebp
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v16; // [esp+10h] [ebp-2Ch]
  int v17; // [esp+18h] [ebp-24h]
  int v18; // [esp+1Ch] [ebp-20h]
  int v19; // [esp+24h] [ebp-18h]
  int v20; // [esp+2Ch] [ebp-10h]
  _BYTE v21[12]; // [esp+30h] [ebp-Ch] BYREF

  v5 = this->visibleArea[0]; /*0x6d9b53*/
  v6 = this->visibleArea[1]; /*0x6d9b5d*/
  v17 = v5 + a2; /*0x6d9b6a*/
  v18 = v6 + a3; /*0x6d9b75*/
  v7 = a2 + v5 + a4; /*0x6d9b86*/
  v8 = 0; /*0x6d9b8a*/
  v20 = a3 + a5 + v6; /*0x6d9b8c*/
  v16 = 0; /*0x6d9b98*/
  if ( stru_A8EB00.ObjectTypeClass[20] <= 0 ) /*0x6d9b9c*/
    return 0; /*0x6d9cc6*/
  while ( 1 ) /*0x6d9ba8*/
  {
    v9 = *(_BYTE **)(stru_A8EB00.ObjectTypeClass[17] + 4 * v8); /*0x6d9ba8*/
    if ( !v9[144] || !v9[128] || !v9[116] ) /*0x6d9bc7*/
      goto LABEL_10; /*0x6d9bcc*/
    v10 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v9 + 172))(v9, v21); /*0x6d9bd9*/
    v19 = v10[1]; /*0x6d9be6*/
    v11 = (-60 * v19 / 2 + 60 * *v10 / 2) / 256; /*0x6d9c5d*/
    v12 = (30 * v19 / 2 + 30 * *v10 / 2) / 256; /*0x6d9c60*/
    LOWORD(v13) = Math::RoundToInt((double)(int)v10[2] * dbl_B0CD48 + (double)(v10[2] >= 728) + 0.5); /*0x6d9c87*/
    v14 = v12 - v13; /*0x6d9c8c*/
    if ( v11 >= v17 && v11 <= v7 && v14 >= v18 && v14 <= v20 ) /*0x6d9ca4*/
      return 1; /*0x6d9cbd*/
    v8 = v16; /*0x6d9ca6*/
LABEL_10:
    v16 = ++v8; /*0x6d9cb3*/
    if ( v8 >= stru_A8EB00.ObjectTypeClass[20] ) /*0x6d9cb7*/
      return 0; /*0x6d9cb7*/
  }
}



// ==== 0x006D9CE0  ObjectClass::FindBuildingsInScreenRect  this=ObjectClass  sig=csp ====
int __thiscall FindBuildingsInScreenRect(ObjectClass *this, int a2, int a3, int a4, int a5)
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
  int v15; // eax
  int v16; // edi
  int v17; // ebp
  int v18; // eax
  int v19; // edi
  int v20; // ecx
  int v21; // eax
  int i; // [esp+Ch] [ebp-24h]
  int v23; // [esp+10h] [ebp-20h]
  int v24; // [esp+14h] [ebp-1Ch]
  int v25; // [esp+18h] [ebp-18h]
  int v26; // [esp+1Ch] [ebp-14h]
  int v27; // [esp+20h] [ebp-10h]
  int v28; // [esp+2Ch] [ebp-4h]

  v6 = this->fallRate; /*0x6d9cf0*/
  v24 = v6 + a2; /*0x6d9cf9*/
  v7 = this->u32_2D; /*0x6d9cfd*/
  v25 = v7 + a3; /*0x6d9d06*/
  v26 = a2 + a4 + v6; /*0x6d9d16*/
  v27 = a3 + v7 + a5; /*0x6d9d25*/
  result = 0; /*0x6d9d29*/
  for ( i = 0; i < stru_A8EB00.ObjectTypeClass[20]; ++i ) /*0x6d9d31*/
  {
    v9 = *(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * result); /*0x6d9d3e*/
    v23 = v9; /*0x6d9d41*/
    if ( *(_BYTE *)(v9 + 144) ) /*0x6d9d45*/
    {
      if ( *(_BYTE *)(v9 + 116) ) /*0x6d9d53*/
      {
        if ( !*(_BYTE *)(*(_DWORD *)(v9 + 1312) + 5889) ) /*0x6d9d64*/
        {
          v10 = (_DWORD *)(v9 + 156); /*0x6d9d72*/
          v11 = v10[1]; /*0x6d9d79*/
          v28 = v10[2]; /*0x6d9d82*/
          v12 = 30 * v11 / 2 + 30 * *v10 / 2; /*0x6d9dcf*/
          v13 = -60 * v11 / 2 + 60 * *v10 / 2; /*0x6d9dd3*/
          v14 = (BYTE4(v13) + (int)v13) >> 8; /*0x6d9deb*/
          LOWORD(v15) = Math::RoundToInt((double)v28 * dbl_B0CD48 + (double)(v28 >= 728) + 0.5); /*0x6d9e15*/
          v16 = v12 / 256 - v15; /*0x6d9e1a*/
          if ( v14 >= v24 && v14 <= v26 && v16 >= v25 && v16 <= v27 ) /*0x6d9e40*/
          {
            v17 = v14 - this->fallRate; /*0x6d9e52*/
            v18 = *((_DWORD *)this + 876); /*0x6d9e54*/
            v19 = v16 - this->u32_2D; /*0x6d9e5a*/
            if ( v18 != 500 /*0x6d9e85*/
              && v17 >= -32
              && v17 <= *(_DWORD *)DSurface_ViewBounds.__pad_8 + 32
              && v19 >= -32
              && v19 <= *(_DWORD *)&DSurface_ViewBounds.__pad_8[4] + 32 )
            {
              dword_B0CEC8[3 * v18] = v23; /*0x6d9e8e*/
              v20 = this->u32_2D; /*0x6d9e9b*/
              v21 = 3 * *((_DWORD *)this + 876); /*0x6d9eac*/
              dword_B0CECC[v21] = this->fallRate + v17; /*0x6d9eaf*/
              dword_B0CED0[v21] = v19 + v20; /*0x6d9eb6*/
              ++*((_DWORD *)this + 876); /*0x6d9ec4*/
            }
          }
        }
      }
    }
    result = i + 1; /*0x6d9ed4*/
  }
  return result; /*0x6d9ee2*/
}



// ==== 0x006D9EF0  TacticalClass::AddToDrawQueue  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::AddToDrawQueue(TacticalClass *this, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // edx
  int v6; // eax

  result = this->floats[0]; /*0x6d9ef0*/
  if ( result == 500 /*0x6d9f29*/
    || a3 < -32
    || a3 > *(_DWORD *)DSurface_ViewBounds.__pad_8 + 32
    || a4 < -32
    || a4 > *(_DWORD *)&DSurface_ViewBounds.__pad_8[4] + 32 )
  {
    LOBYTE(result) = 0; /*0x6d9f75*/
  }
  else
  {
    dword_B0CEC8[3 * result] = a2; /*0x6d9f32*/
    v5 = this->visibleArea[1]; /*0x6d9f3f*/
    v6 = 3 * this->floats[0]; /*0x6d9f50*/
    dword_B0CECC[v6] = this->visibleArea[0] + a3; /*0x6d9f53*/
    dword_B0CED0[v6] = a4 + v5; /*0x6d9f5b*/
    result = this->floats[0] + 1; /*0x6d9f68*/
    this->floats[0] = result; /*0x6d9f69*/
    LOBYTE(result) = 1; /*0x6d9f6f*/
  }
  return result; /*0x6d9f4f*/
}



// ==== 0x006D9F80  TacticalClass::InitScrollBounds  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::InitScrollBounds(TacticalClass *this, _DWORD *a2)
{
  int result; // eax

  result = this->TacticalClass_field_D90; /*0x6d9f80*/
  if ( !result ) /*0x6d9f88*/
  {
    result = this->TacticalClass_field_D94; /*0x6d9f8a*/
    if ( !result ) /*0x6d9f92*/
    {
      this->TacticalClass_field_D90 = *a2; /*0x6d9f9a*/
      this->TacticalClass_field_D94 = a2[1]; /*0x6d9fa3*/
      this->TacticalClass_field_D98 = *a2; /*0x6d9fab*/
      result = a2[1]; /*0x6d9fb1*/
      this->TacticalClass_field_D9C = result; /*0x6d9fb4*/
    }
  }
  return result; /*0x6d9fba*/
}



// ==== 0x006D9FC0  TacticalClass::UpdateScrollMaxBounds  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::UpdateScrollMaxBounds(TacticalClass *this, _DWORD *a2)
{
  int result; // eax

  if ( this->TacticalClass_field_D90 || (result = this->TacticalClass_field_D94) != 0 ) /*0x6d9fd2*/
  {
    this->TacticalClass_field_D98 = *a2; /*0x6d9fda*/
    result = a2[1]; /*0x6d9fe0*/
    this->TacticalClass_field_D9C = result; /*0x6d9fe3*/
  }
  return result; /*0x6d9fe9*/
}



// ==== 0x006D9FF0  PlayerClass::ProcessOccupancyUpdate  this=PlayerClass  sig=csp ====
int __thiscall PlayerClass::ProcessOccupancyUpdate(PlayerClass *this, void (__thiscall *a2)(_BYTE *))
{
  int result; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // ebx
  int v9[4]; // [esp+4h] [ebp-10h] BYREF

  if ( *((_DWORD *)this + 868) || (result = *((_DWORD *)this + 869)) != 0 ) /*0x6da008*/
  {
    v4 = *((_DWORD *)this + 868); /*0x6da00a*/
    v5 = *((_DWORD *)this + 870); /*0x6da010*/
    v6 = *((_DWORD *)this + 871); /*0x6da016*/
    v7 = *((_DWORD *)this + 869); /*0x6da01e*/
    if ( v4 > v5 ) /*0x6da026*/
    {
      v8 = v4; /*0x6da028*/
      v4 = v5; /*0x6da02a*/
      v5 = v8; /*0x6da02c*/
    }
    if ( v7 > v6 ) /*0x6da030*/
    {
      v7 = v6; /*0x6da034*/
      v6 = *((_DWORD *)this + 869); /*0x6da036*/
    }
    v9[2] = v5 - v4 + 1; /*0x6da03e*/
    v9[3] = v6 - v7 + 1; /*0x6da046*/
    v9[0] = v4; /*0x6da052*/
    v9[1] = v7; /*0x6da056*/
    BuildingClass::ProcessOccupancy((BuildingClass *)this, v9, a2); /*0x6da05a*/
    *((_DWORD *)this + 868) = 0; /*0x6da063*/
    *((_DWORD *)this + 869) = 0; /*0x6da06a*/
    return 0; /*0x6da05f*/
  }
  return result; /*0x6da071*/
}



// ==== 0x006DA080  PlayerClass::HasOccupiedCell  this=PlayerClass  sig=csp ====
int __thiscall PlayerClass::HasOccupiedCell(PlayerClass *this)
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

  v1 = *((_DWORD *)this + 870); /*0x6da080*/
  v2 = *((_DWORD *)this + 871); /*0x6da086*/
  v3 = *((_DWORD *)this + 868); /*0x6da090*/
  v4 = *((_DWORD *)this + 869); /*0x6da097*/
  if ( v3 > v1 ) /*0x6da0a1*/
  {
    v3 = *((_DWORD *)this + 870); /*0x6da0a5*/
    v1 = *((_DWORD *)this + 868); /*0x6da0a7*/
  }
  if ( v4 > v2 ) /*0x6da0ab*/
  {
    v4 = *((_DWORD *)this + 871); /*0x6da0af*/
    v2 = *((_DWORD *)this + 869); /*0x6da0b1*/
  }
  v5 = v2 - v4 + 1; /*0x6da0b8*/
  v11 = v1 - v3 + 1; /*0x6da0bb*/
  v12 = v5; /*0x6da0bf*/
  if ( v11 <= 0 ) /*0x6da0c3*/
    return 0; /*0x6da0c3*/
  if ( v5 <= 0 ) /*0x6da0cb*/
    return 0; /*0x6da0cb*/
  v10 = 0; /*0x6da0d3*/
  if ( *((int *)this + 876) <= 0 ) /*0x6da0dd*/
    return 0; /*0x6da14b*/
  for ( i = dword_B0CEC8; ; i += 3 ) /*0x6da0df*/
  {
    if ( *i ) /*0x6da0e4*/
    {
      if ( *(_BYTE *)(*i + 144) ) /*0x6da0ea*/
      {
        v7 = i[1] - this->q02C; /*0x6da103*/
        v8 = i[2] - *((_DWORD *)this + 45); /*0x6da108*/
        if ( v7 >= v3 && v7 < v3 + v11 && v8 >= v4 && v8 < v4 + v12 ) /*0x6da124*/
          break; /*0x6da124*/
      }
    }
    if ( ++v10 >= *((_DWORD *)this + 876) ) /*0x6da13a*/
      return 0; /*0x6da13a*/
  }
  return 1; /*0x6da13e*/
}



// ==== 0x006DA160  TacticalClass::ResetScrollBounds  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::ResetScrollBounds(TacticalClass *this)
{
  this->TacticalClass_field_D90 = 0; /*0x6da164*/
  this->TacticalClass_field_D98 = 0; /*0x6da16a*/
  this->TacticalClass_field_D94 = 0; /*0x6da170*/
  this->TacticalClass_field_D9C = 0; /*0x6da176*/
  return 0; /*0x6da17c*/
}



// ==== 0x006DA180  TacticalMap::DrawOccupiedRegion  this=TacticalMap  sig=csp ====
int __thiscall TacticalMap::DrawOccupiedRegion(TacticalMap *this)
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

  if ( *((_DWORD *)this + 868) || (result = *((_DWORD *)this + 869)) != 0 ) /*0x6da195*/
  {
    v2 = *((_DWORD *)this + 868); /*0x6da19b*/
    v3 = *((_DWORD *)this + 870); /*0x6da1a1*/
    v4 = *((_DWORD *)this + 869); /*0x6da1a9*/
    v5 = *((_DWORD *)this + 871); /*0x6da1af*/
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
    if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x6da1dc*/
      v9 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 15); /*0x6da1ea*/
    else
      v9 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 30); /*0x6da1f7*/
    v10[2] = v8; /*0x6da201*/
    v10[0] = v2; /*0x6da209*/
    v10[1] = v4; /*0x6da20d*/
    v10[3] = v5 - v4 + 1; /*0x6da211*/
    return (*(int (__thiscall **)(AudioStream *, CellStruct *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x6da21e*/
                                                                             + 84))(
             g_DSurface_Hidden_2,
             &DSurface_ViewBounds,
             v10,
             v9);
  }
  return result; /*0x6da224*/
}



// ==== 0x006DA230  DisplayClass::GetCoordDelta  this=DisplayClass  sig=csp ====
int __thiscall DisplayClass::GetCoordDelta(DisplayClass *this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // esi
  int v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h]

  if ( (byte_B0CE00 & 1) == 0 ) /*0x6da244*/
  {
    byte_B0CE00 |= 1u; /*0x6da24f*/
    dword_B0CD98[0] = 0; /*0x6da256*/
    dword_B0CD9C[0] = -1; /*0x6da25b*/
    dword_B0CDA0 = 1; /*0x6da266*/
    dword_B0CDA4 = -1; /*0x6da26b*/
    dword_B0CDA8 = 1; /*0x6da271*/
    dword_B0CDB0 = 1; /*0x6da276*/
    dword_B0CDAC = 0; /*0x6da27f*/
    dword_B0CDB8 = 0; /*0x6da285*/
    dword_B0CDB4 = 1; /*0x6da28f*/
    dword_B0CDBC = 1; /*0x6da295*/
    dword_B0CDC0 = -1; /*0x6da29b*/
    dword_B0CDC4 = 1; /*0x6da2a0*/
    dword_B0CDC8 = -1; /*0x6da2ab*/
    dword_B0CDCC = 0; /*0x6da2b0*/
    dword_B0CDD0 = -1; /*0x6da2c1*/
    dword_B0CDD4 = -1; /*0x6da2c6*/
    atexit(nullsub_42); /*0x6da2cc*/
  }
  result = a2; /*0x6da2d4*/
  v4 = *(_DWORD *)&this->__pad_41E[2374]; /*0x6da2d8*/
  v5 = *(_DWORD *)&this->__pad_41E[2378]; /*0x6da2de*/
  v6 = v4 + dword_B0CD98[2 * a2]; /*0x6da2f2*/
  v7 = v5 + dword_B0CD9C[2 * a2]; /*0x6da2f4*/
  if ( v6 != v4 || v7 != v5 ) /*0x6da2fc*/
  {
    v8 = v4 + dword_B0CD98[2 * a2]; /*0x6da305*/
    v9 = v7; /*0x6da309*/
    if ( ClampCoordMap(&v8) ) /*0x6da30d*/
    {
      if ( !stru_A8EB00.?[391] ) /*0x6da31d*/
      {
        v6 = v8; /*0x6da31f*/
        v7 = v9; /*0x6da323*/
      }
    }
    return dword_84291C[2 * (*(_DWORD *)&this->__pad_41E[2378] - v7) /*0x6da33c*/
                      + *(_DWORD *)&this->__pad_41E[2374]
                      - v6
                      + *(_DWORD *)&this->__pad_41E[2378]
                      - v7];
  }
  return result; /*0x6da343*/
}



// ==== 0x006DA350  nullsub_42  this=-  sig=ida-proto ====
void __cdecl nullsub_42()
{
  ; /*0x6da350*/
}



// ==== 0x006DA360  UI_Move  this=Tactical  sig=csp ====
_DWORD *__stdcall sub_6DA360(_DWORD *a1, _DWORD *a2, int a3)
{
  *a1 = *a2; /*0x6da36a*/
  return a1; /*0x6da36c*/
}



// ==== 0x006DA370  nullsub_239  this=-  sig=csp ====
void __stdcall nullsub_239(int a1)
{
  ; /*0x6da370*/
}



// ==== 0x006DA380  TacticalClass::IsOccupiedByTechno  this=TacticalClass  sig=csp ====
_BYTE *__thiscall TacticalClass::IsOccupiedByTechno(TacticalClass *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int *v4; // edi
  _BYTE *v5; // esi
  _BYTE *v6; // eax
  char v7; // bl
  _DWORD *v8; // eax
  CellClass *v9; // eax
  double v10; // st7
  unsigned int v11; // eax
  _BYTE *result; // eax
  int v13; // ecx
  int v14; // eax
  void *Object_field_0x30; // [esp-8h] [ebp-3Ch]
  unsigned int v16; // [esp+Ch] [ebp-28h]
  int v17; // [esp+10h] [ebp-24h]
  _BYTE *v18; // [esp+14h] [ebp-20h]
  int v19; // [esp+18h] [ebp-1Ch]
  int v20[2]; // [esp+1Ch] [ebp-18h] BYREF
  int v21; // [esp+24h] [ebp-10h] BYREF
  char v22[12]; // [esp+28h] [ebp-Ch] BYREF

  v2 = a2; /*0x6da385*/
  v19 = *a2 + this->visibleArea[0]; /*0x6da39b*/
  v18 = 0; /*0x6da3a7*/
  v20[0] = a2[1] + this->visibleArea[1]; /*0x6da3ab*/
  v16 = -1; /*0x6da3b7*/
  v17 = 0; /*0x6da3bf*/
  if ( this->floats[0] <= 0 ) /*0x6da3c3*/
  {
LABEL_18:
    v13 = v2[1]; /*0x6da4b8*/
    v20[0] = DSurface_ViewBounds.field_0 + *v2; /*0x6da4cb*/
    v20[1] = (int)DSurface_ViewBounds.field_4 + v13; /*0x6da4d9*/
    a2 = (_DWORD *)*Tactical::PixelToCell((Tactical *)this, &v21, v20); /*0x6da4ec*/
    return (_BYTE *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 57); /*0x6da4fb*/
  }
  v4 = dword_B0CECC; /*0x6da3ca*/
  do /*0x6da4a5*/
  {
    v5 = (_BYTE *)*(v4 - 1); /*0x6da3cf*/
    if ( !v5 ) /*0x6da3d4*/
      goto LABEL_15; /*0x6da3d4*/
    v6 = AbstractClass::IsTechno((AbstractClass *)*(v4 - 1)); /*0x6da3dc*/
    v7 = 0; /*0x6da3e1*/
    if ( !v6 ) /*0x6da3e5*/
    {
      if ( !(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 136))(v5) ) /*0x6da50e*/
        goto LABEL_15; /*0x6da50e*/
      v14 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 136))(v5); /*0x6da520*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) != 37 /*0x6da540*/
        || !*(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 136))(v5) + 692) )
      {
        goto LABEL_15; /*0x6da548*/
      }
LABEL_12:
      v10 = (double)((v4[1] - v20[0]) * (v4[1] - v20[0])) * 0.5; /*0x6da444*/
      v21 = (*v4 - v19) * (*v4 - v19); /*0x6da46d*/
      LOWORD(v11) = Math::RoundToInt(v10 + (double)v21); /*0x6da477*/
      if ( v11 < v16 && v11 < 0xC8 ) /*0x6da487*/
      {
        v16 = v11; /*0x6da489*/
        v18 = v5; /*0x6da48d*/
      }
      goto LABEL_15; /*0x6da48d*/
    }
    if ( v5[144] ) /*0x6da3eb*/
    {
      if ( !v6[129] ) /*0x6da3f5*/
      {
        if ( v6[1050] /*0x6da435*/
          || *((_DWORD *)v6 + 136) != 2
          || (Object_field_0x30 = dword_A83D4C->Object_field_0x30,
              v8 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, char *))(*(_DWORD *)v6 + 72))(v6, v22),
              v9 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v8),
              (unsigned __int8)Cell::IsPassableOffset((Cell *)v9, (int)Object_field_0x30)) )
        {
          v7 = 1; /*0x6da43e*/
        }
      }
    }
    if ( v7 ) /*0x6da442*/
      goto LABEL_12; /*0x6da442*/
LABEL_15:
    v4 += 3; /*0x6da491*/
    ++v17; /*0x6da4a1*/
  }
  while ( v17 < this->floats[0] ); /*0x6da4a5*/
  result = v18; /*0x6da4ab*/
  if ( !v18 ) /*0x6da4b2*/
  {
    v2 = a2; /*0x6da4b4*/
    goto LABEL_18; /*0x6da4b4*/
  }
  return result; /*0x6da501*/
}



// ==== 0x006DA560  Tactical::ScrollMap  this=Tactical  sig=csp ====
int *__stdcall Tactical::ScrollMap(Tactical *this, int a2)
{
  int *result; // eax

  result = dword_B0CEC8; /*0x6da564*/
  do /*0x6da57b*/
  {
    if ( (Tactical *)*result == this ) /*0x6da56b*/
      *result = 0; /*0x6da56d*/
    result += 3; /*0x6da573*/
  }
  while ( (int)result < (int)&dword_B0E638 ); /*0x6da57b*/
  if ( this == *(Tactical **)&stru_87F5F0.__pad_E12[1398] ) /*0x6da583*/
  {
    result = (int *)MIXClass::CopyHeader((int *)&stru_87F5F0.__pad_58[416], 0); /*0x6da58c*/
    *(_DWORD *)&stru_87F5F0.__pad_E12[1398] = 0; /*0x6da591*/
    *(_DWORD *)&stru_87F5F0.__pad_E12[1402] = 0; /*0x6da59b*/
    *(_DWORD *)&stru_87F5F0.__pad_E12[1406] = -1; /*0x6da5a5*/
  }
  return result; /*0x6da5af*/
}



// ==== 0x006DA5C0  BuildingClass::ProcessOccupancy  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessOccupancy(BuildingClass *this, int *a2, void (__thiscall *a3)(_BYTE *))
{
  int *v3; // ebx
  int result; // eax
  int *v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  bool v12; // bl
  BuildingClass *v13; // ecx
  House *v14; // eax
  int v15; // [esp+8h] [ebp-4h]

  v3 = a2; /*0x6da5c2*/
  g_MoveFeedback = 1; /*0x6da5c6*/
  result = a2[2]; /*0x6da5ce*/
  if ( result <= 0 || (result = a2[3], result <= 0) || (result = *((_DWORD *)this + 876), v15 = 0, result <= 0) ) /*0x6da5f6*/
  {
    g_MoveFeedback = 1; /*0x6da730*/
  }
  else
  {
    v6 = dword_B0CEC8; /*0x6da5fe*/
    do /*0x6da714*/
    {
      v7 = *v6; /*0x6da603*/
      if ( *v6 ) /*0x6da603*/
      {
        if ( *(_BYTE *)(v7 + 144) ) /*0x6da60d*/
        {
          v8 = v6[1] - this->?; /*0x6da62a*/
          v9 = v6[2] - this->?; /*0x6da62f*/
          if ( v8 >= *v3 && v8 < v3[2] + *v3 ) /*0x6da640*/
          {
            v10 = v3[1]; /*0x6da646*/
            if ( v9 >= v10 && v9 < v3[3] + v10 ) /*0x6da656*/
            {
              if ( Selection::GetFlag() ) /*0x6da65c*/
              {
                v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 136))(v7); /*0x6da669*/
                MoveFeedback::ProcessCommand((MoveFeedback *)(v11 + 36)); /*0x6da674*/
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
                  v13 = *(BuildingClass **)(v7 + 1312); /*0x6da698*/
                  if ( v13->?[4] ) /*0x6da69e*/
                    v12 = BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable(v13); /*0x6da6b1*/
                }
                v14 = (House *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 60))(v7); /*0x6da6b7*/
                if ( v14 /*0x6da6e5*/
                  && (unsigned __int8)House::IsHumanPlayer(v14)
                  && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 312))(v7)
                  && ((*(int (__thiscall **)(int))(*(_DWORD *)v7 + 44))(v7) != 6 || v12) )
                {
                  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 332))(v7) ) /*0x6da6eb*/
                    g_MoveFeedback = 0; /*0x6da6f5*/
                }
                v3 = a2; /*0x6da6fc*/
              }
            }
          }
        }
      }
      result = v15 + 1; /*0x6da70a*/
      v6 += 3; /*0x6da70b*/
      ++v15; /*0x6da710*/
    }
    while ( v15 < *((_DWORD *)this + 876) ); /*0x6da714*/
    g_MoveFeedback = 1; /*0x6da71d*/
  }
  return result; /*0x6da71c*/
}



// ==== 0x006DA740  SuperWeaponClass::UpdateAll  this=SuperWeaponClass  sig=csp ====
int SuperWeaponClass::UpdateAll(SuperWeaponClass *this)
{
  while ( *(_DWORD *)&stru_A8EB00.?[228] ) /*0x6da747*/
    (*(void (__thiscall **)(_DWORD))(***(_DWORD ***)&stru_A8EB00.?[216] + 336))(**(_DWORD **)&stru_A8EB00.?[216]); /*0x6da752*/
  return Selection::SetCurrent(0);
}



// ==== 0x006DA770  SelectAllOfType_Play  this=Tactical  sig=ida-proto ====
char sub_6DA770()
{
  int *v0; // esi
  int v1; // eax
  bool v2; // zf
  #375 *v3; // eax

  if ( dword_A8ECC8 != (wchar_t *)1 ) /*0x6da779*/
    return 0; /*0x6da779*/
  v0 = *(int **)dword_A8ECBC; /*0x6da780*/
  if ( !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)dword_A8ECBC + 60))(*(_DWORD *)dword_A8ECBC) ) /*0x6da786*/
    return 0; /*0x6da786*/
  v1 = *v0; /*0x6da796*/
  if ( dword_A8B238[0] ) /*0x6da798*/
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



// ==== 0x006DA7D0  Tactical::AddCellToDrawList  this=Tactical  sig=csp ====
int __thiscall Tactical::AddCellToDrawList(int *this, int a2)
{
  int result; // eax
  int *Coords; // eax
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

  result = dword_87F7F4; /*0x6da7d0*/
  if ( !dword_87F7F4 ) /*0x6da7df*/
  {
    result = (int)dword_A8ED84; /*0x6da7e9*/
    if ( *(wchar_t **)(a2 + 92) != dword_A8ED84 && ((*(_BYTE *)(a2 + 300) & 8) != 0 || *(_BYTE *)(a2 + 312)) ) /*0x6da800*/
    {
      *(_DWORD *)(a2 + 92) = dword_A8ED84; /*0x6da80e*/
      Coords = CellClass::GetCoords((_DWORD *)a2, v14); /*0x6da819*/
      v5 = *Coords; /*0x6da81e*/
      v6 = Coords[1]; /*0x6da820*/
      v7 = Coords[2]; /*0x6da823*/
      v8 = *(_DWORD *)(a2 + 300); /*0x6da826*/
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
      v13 = v9 / 256 - this->q02C; /*0x6da8ff*/
      result = v11 / 256 - v12 - this->q02D; /*0x6da907*/
      if ( v13 >= DSurface_ViewBounds - 30 /*0x6da936*/
        && result >= -30
        && v13 <= dword_886FA8 + DSurface_ViewBounds + 30
        && result <= dword_886FAC + dword_886FA4 + 15 )
      {
        result = this->q038; /*0x6da938*/
        if ( result < 799 ) /*0x6da943*/
        {
          *(this + result + 57) = a2; /*0x6da949*/
          result = this->q038 + 1; /*0x6da956*/
          this->q038 = result; /*0x6da957*/
        }
        *(_BYTE *)(a2 + 312) = 0; /*0x6da961*/
        this->u8_D7D = 1; /*0x6da968*/
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

  v0 = g_CraterCreationState; /*0x6da980*/
  while ( g_CraterCreationState > 0 ) /*0x6da988*/
  {
    v1 = 0; /*0x6da98f*/
    g_CraterCreationState = v0 - 1; /*0x6da993*/
    if ( v0 - 1 <= 0 ) /*0x6da999*/
      break; /*0x6da999*/
    v2 = 0; /*0x6da99b*/
    do /*0x6da9bd*/
    {
      ++v1; /*0x6da9a3*/
      v3 = (char *)g_CraterPool + v2 + 20; /*0x6da9a4*/
      v4 = (char *)g_CraterPool + v2; /*0x6da9a8*/
      v2 += 20; /*0x6da9b0*/
      qmemcpy(v4, v3, 0x14u); /*0x6da9b3*/
      v0 = g_CraterCreationState; /*0x6da9b5*/
    }
    while ( v1 < g_CraterCreationState ); /*0x6da9bd*/
  }
}



// ==== 0x006DA9D0  ObjectClass::RenderSelectionBeacons  this=ObjectClass  sig=csp ====
char *__thiscall RenderSelectionBeacons(ObjectClass *this, int a2)
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
  int i; // [esp+38h] [ebp-60h]
  int v21; // [esp+3Ch] [ebp-5Ch]
  Vector2 v22; // [esp+40h] [ebp-58h] BYREF
  int v23; // [esp+48h] [ebp-50h] BYREF
  char *v24; // [esp+4Ch] [ebp-4Ch]
  _DWORD v25[2]; // [esp+50h] [ebp-48h] BYREF
  int v26; // [esp+58h] [ebp-40h] BYREF
  IsoCoord v27; // [esp+60h] [ebp-38h] BYREF
  int v28; // [esp+68h] [ebp-30h] BYREF
  int v29; // [esp+6Ch] [ebp-2Ch]
  int GroundHeight; // [esp+70h] [ebp-28h]
  _DWORD v31[3]; // [esp+74h] [ebp-24h] BYREF
  _BYTE v32[12]; // [esp+80h] [ebp-18h] BYREF
  _BYTE v33[12]; // [esp+8Ch] [ebp-Ch] BYREF

  v19 = (0x7FFFFFFF - *(_DWORD *)&stru_A8EB00.?[416]) % 15; /*0x6da9f9*/
  result = (char *)(*(_DWORD *)&stru_A8EB00.?[228] - 1); /*0x6daa44*/
  v21 = (byte_A83CD9 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6daa49*/
      | (word_A83CDA >> g_BitMask_Blue << g_BitMask_Green)
      | (MEMORY[0xA83CDB] >> g_BitMask_Red << g_BitShift_Blue);
  for ( i = *(_DWORD *)&stru_A8EB00.?[228] - 1; i >= 0; --i ) /*0x6daa51*/
  {
    v4 = *(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * (_DWORD)result); /*0x6daa5e*/
    if ( (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) == 6 /*0x6daab2*/
      && *((_BYTE *)v4 + 144)
      && *((_BYTE *)v4 + 131)
      && (Object *)v4[135] == dword_A83D4C
      && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 644))(v4)
      && v4[134] )
    {
      v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v4 + 72))(v4, v32); /*0x6daac9*/
      v31[0] = *v5; /*0x6daace*/
      v31[1] = v5[1]; /*0x6daad5*/
      v31[2] = v5[2]; /*0x6daae8*/
      v6 = Coord::To_ScreenRaw(&v26, v31); /*0x6daaec*/
      v7 = this->u32_2D; /*0x6daaf1*/
      v23 = *v6; /*0x6daafb*/
      v8 = v6[1] - v7; /*0x6dab08*/
      v9 = v23 - this->fallRate; /*0x6dab10*/
      v24 = (char *)DSurface_ViewBounds.field_4 + v8; /*0x6dab1c*/
      v10 = v4[134]; /*0x6dab20*/
      v23 = DSurface_ViewBounds.field_0 + v9; /*0x6dab26*/
      v11 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v10 + 72))(v10, v33); /*0x6dab31*/
      v28 = *v11; /*0x6dab36*/
      v29 = v11[1]; /*0x6dab42*/
      GroundHeight = v11[2]; /*0x6dab4e*/
      GroundHeight = Cell::GetGroundHeight(&v28); /*0x6dab61*/
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v28)->flags[0] & 0x100) != 0 ) /*0x6dab73*/
        GroundHeight += dword_B0CEB4; /*0x6dab80*/
      v12 = IsoCoord::ToPixel(&v27, v28, v29); /*0x6dab92*/
      v13 = v12[1]; /*0x6dab9c*/
      v14 = *v12 / 256; /*0x6dabad*/
      v15 = ZCoordToScreenY(GroundHeight); /*0x6dabb0*/
      *(_DWORD *)v22.__pad_0 = v14; /*0x6dabc0*/
      v16 = this->fallRate; /*0x6dabc6*/
      v22.Vector2_field_0x04 = v13 / 256 - v15; /*0x6dabd5*/
      v17 = this->u32_2D; /*0x6dabd9*/
      v25[0] = v16; /*0x6dabe4*/
      v25[1] = v17; /*0x6dabe8*/
      Vector2::Subtract(&v22, v25); /*0x6dabec*/
      *(_DWORD *)v22.__pad_0 += DSurface_ViewBounds.field_0; /*0x6dac1f*/
      v24 += 2; /*0x6dac23*/
      v22.Vector2_field_0x04 += (int)DSurface_ViewBounds.field_4 + 2; /*0x6dac27*/
      if ( (unsigned __int8)ClipLine(&v23, (int *)v22.__pad_0, &DSurface_ViewBounds.field_0) ) /*0x6dac2b*/
        (*(void (__thiscall **)(AudioStream *, int *, Vector2 *, int, void *, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x6dac5a*/
                                                                                       + 76))(
          g_DSurface_Hidden_2,
          &v23,
          &v22,
          v21,
          &unk_842930,
          v19,
          a2);
      v18 = (*(unsigned __int8 *)(v4[135] + 22265) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6dacc2*/
          | (*(unsigned __int8 *)(v4[135] + 22266) >> g_BitMask_Blue << g_BitMask_Green)
          | (*(unsigned __int8 *)(v4[135] + 22267) >> g_BitMask_Red << g_BitShift_Blue);
      --v24; /*0x6dacca*/
      --v22.Vector2_field_0x04; /*0x6dacce*/
      if ( (unsigned __int8)ClipLine(&v23, (int *)v22.__pad_0, &DSurface_ViewBounds.field_0) ) /*0x6dacd2*/
        (*(void (__thiscall **)(AudioStream *, int *, Vector2 *, int, void *, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x6dacf9*/
                                                                                       + 76))(
          g_DSurface_Hidden_2,
          &v23,
          &v22,
          v18,
          &unk_842930,
          v19,
          a2);
      --v24; /*0x6dad13*/
      --v22.Vector2_field_0x04; /*0x6dad17*/
      if ( (unsigned __int8)ClipLine(&v23, (int *)v22.__pad_0, &DSurface_ViewBounds.field_0) ) /*0x6dad1b*/
        (*(void (__thiscall **)(AudioStream *, int *, Vector2 *, int, void *, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x6dad42*/
                                                                                       + 76))(
          g_DSurface_Hidden_2,
          &v23,
          &v22,
          v18,
          &unk_842930,
          v19,
          a2);
    }
    result = (char *)(i - 1); /*0x6dad49*/
  }
  return result; /*0x6dad55*/
}



// ==== 0x006DAD60  ObjectClass::RenderRallyPointLines  this=ObjectClass  sig=csp ====
int __thiscall RenderRallyPointLines(ObjectClass *this, int a2)
{
  const wchar_t *v2; // ebx
  int v4; // esi
  int v5; // eax
  int v6; // et2
  int result; // eax
  int v8; // esi
  unsigned int v9; // ebp
  int v10; // edi
  int *Element; // edi
  _DWORD *v12; // eax
  int v13; // ebp
  int v14; // esi
  int v15; // eax
  int v16; // eax
  int Vector2_field_0x04; // eax
  char v18; // cl
  char *v19; // eax
  char *v20; // esi
  int *v21; // eax
  int *v22; // ebp
  int *v23; // eax
  int v24; // kr04_4
  int v25; // esi
  int v26; // edi
  int v27; // eax
  int v28; // edi
  int v29; // ecx
  int v30; // eax
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  int v34; // edx
  int v35; // [esp+10h] [ebp-80h]
  unsigned int v36; // [esp+14h] [ebp-7Ch]
  int v38; // [esp+20h] [ebp-70h]
  unsigned int v39; // [esp+24h] [ebp-6Ch]
  int v40; // [esp+28h] [ebp-68h]
  int v41; // [esp+30h] [ebp-60h]
  int *v42; // [esp+34h] [ebp-5Ch]
  Vector2 v43; // [esp+38h] [ebp-58h] BYREF
  int v44[2]; // [esp+40h] [ebp-50h] BYREF
  _DWORD v45[2]; // [esp+48h] [ebp-48h] BYREF
  int v46[2]; // [esp+50h] [ebp-40h] BYREF
  _DWORD v47[3]; // [esp+58h] [ebp-38h] BYREF
  char *v48; // [esp+64h] [ebp-2Ch]
  IsoCoord v49; // [esp+68h] [ebp-28h] BYREF
  int v50; // [esp+70h] [ebp-20h] BYREF
  IsoCoord v51; // [esp+78h] [ebp-18h] BYREF
  int v52; // [esp+80h] [ebp-10h]
  int v53; // [esp+84h] [ebp-Ch]
  int v54; // [esp+88h] [ebp-8h]
  int v55; // [esp+8Ch] [ebp-4h]

  v2 = *(const wchar_t **)&stru_A8EB00.?[416]; /*0x6dad67*/
  v38 = (0x7FFFFFFF - *(_DWORD *)&stru_A8EB00.?[416]) % 15; /*0x6dad8b*/
  v4 = Render_Render_5BE970(60); /*0x6dad9b*/
  v5 = Render_Render_5BE990(60); /*0x6dad9d*/
  v6 = *((_DWORD *)this + 872) % v5; /*0x6dadab*/
  result = *((_DWORD *)this + 872) / v5; /*0x6dadab*/
  LOBYTE(result) = stru_A8EB00.?[391]; /*0x6dadad*/
  v39 = v4 + v6; /*0x6dadb6*/
  if ( !stru_A8EB00.?[391] )
  {
    v42 = (int *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372) + 2); /*0x6dadcf*/
    v52 = *v42; /*0x6dadd5*/
    v53 = v42[1]; /*0x6daddc*/
    v54 = v42[2]; /*0x6dade6*/
    v55 = v42[3]; /*0x6dadf7*/
    if ( !dword_B0E644 ) /*0x6dadfe*/
      dword_B0E644 = (int)SearchMIXFile(g_Str_File_MOUSE_SHA, 0); /*0x6dae0c*/
    v48 = (char *)DSurface_ViewBounds.field_4 + 1; /*0x6dae1e*/
    v8 = 528; /*0x6dae29*/
    v35 = 528; /*0x6dae32*/
    v9 = 0; /*0x6dae3c*/
    v40 = dword_A8B230[130].uniqueId != 1 ? 14 : 12;
    v36 = 0; /*0x6dae42*/
    do /*0x6db1d1*/
    {
      HouseClass::EnsurePlanningPathExists((HouseClass *)dword_A83D4C, v9); /*0x6dae4d*/
      v10 = *(_DWORD *)(*(_DWORD *)&dword_A83D4C->__pad_0[v8] + 56); /*0x6dae5b*/
      v41 = v10; /*0x6dae60*/
      if ( v10 ) /*0x6dae64*/
        sub_4AEA20((int)v2, v9); /*0x6dae6c*/
      v2 = 0; /*0x6dae71*/
      if ( v10 > 0 ) /*0x6dae75*/
      {
        while ( 1 ) /*0x6dae8a*/
        {
          Element = (int *)Array::GetElement(*(Array **)&dword_A83D4C->__pad_0[v8], (int)v2); /*0x6dae8a*/
          v12 = IsoCoord::ToPixel(&v49, *Element, Element[1]); /*0x6dae97*/
          v13 = v12[1]; /*0x6daea3*/
          v14 = *v12 / 256; /*0x6daeb1*/
          v15 = ZCoordToScreenY(Element[2]); /*0x6daeb4*/
          *(_DWORD *)v43.__pad_0 = v14; /*0x6daec4*/
          v43.Vector2_field_0x04 = v13 / 256 - v15; /*0x6daed3*/
          v16 = this->u32_2D; /*0x6daee6*/
          v45[0] = this->fallRate; /*0x6daeec*/
          v45[1] = v16; /*0x6daef0*/
          Vector2::Subtract(&v43, v45); /*0x6daef4*/
          if ( *(int *)v43.__pad_0 >= -360 && *(int *)v43.__pad_0 <= dword_B0CE30 + 360 ) /*0x6daf12*/
          {
            Vector2_field_0x04 = v43.Vector2_field_0x04; /*0x6daf14*/
            if ( v43.Vector2_field_0x04 < -180 || v43.Vector2_field_0x04 > dword_B0CE34 + 180 ) /*0x6daf2d*/
              goto LABEL_15; /*0x6daf2d*/
            if ( (_BYTE)a2 ) /*0x6daf3e*/
            {
              if ( (unsigned __int8)Cell::IsPassable(Element) ) /*0x6daf44*/
                goto LABEL_24; /*0x6daf4b*/
            }
            else if ( !(unsigned __int8)Cell::IsPassable(Element) ) /*0x6db11c*/
            {
LABEL_24:
              Vector2_field_0x04 = v43.Vector2_field_0x04; /*0x6db129*/
              v18 = 1; /*0x6db12d*/
              goto LABEL_16; /*0x6db12f*/
            }
          }
          Vector2_field_0x04 = v43.Vector2_field_0x04; /*0x6daf51*/
LABEL_15:
          v18 = 0; /*0x6daf55*/
LABEL_16:
          v19 = (char *)DSurface_ViewBounds.field_4 + Vector2_field_0x04; /*0x6daf57*/
          v43.Vector2_field_0x04 = (int)v19; /*0x6daf5f*/
          if ( v18 ) /*0x6daf63*/
          {
            v20 = v48; /*0x6daf69*/
            v46[1] = v19 - v48; /*0x6daf8a*/
            v46[0] = *(_DWORD *)v43.__pad_0; /*0x6dafaf*/
            DrawToSurfaceSHP( /*0x6dafb6*/
              (int)g_DSurface_Hidden_2,
              *(int *)&stru_87F5F0.__pad_58[128],
              dword_B0E644,
              v39,
              v46,
              &DSurface_ViewBounds.field_0,
              1536,
              0,
              0,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
            swprintf(&word_B0CD80, (const size_t)g_Str_Fmt_PctD, v2); /*0x6dafc6*/
            v47[1] = v43.Vector2_field_0x04 - (_DWORD)v20 - 25; /*0x6dafe1*/
            v47[0] = *(_DWORD *)v43.__pad_0 - 1; /*0x6dafec*/
            globalHelper_0A6010( /*0x6db017*/
              &v50,
              (int)&word_B0CD80,
              (int)g_DSurface_Hidden_2,
              &DSurface_ViewBounds,
              (int)v47,
              *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v40),
              0,
              265,
              1);
          }
          v21 = (int *)VectorClass::GetAtChecked(*(VectorClass **)&dword_A83D4C->__pad_0[v35], (int)Element); /*0x6db02a*/
          v22 = v21; /*0x6db02f*/
          if ( v21 ) /*0x6db033*/
          {
            v23 = IsoCoord::ToPixel(&v51, *v21, v21[1]); /*0x6db048*/
            v24 = *v23; /*0x6db06c*/
            v25 = *v23 / 256; /*0x6db07b*/
            v26 = v23[1] / 256; /*0x6db07e*/
            LOWORD(v27) = Math::RoundToInt((double)v22[2] * dbl_B0CD48 + (double)(v22[2] >= 728) + 0.5); /*0x6db0a5*/
            v44[0] = v24 / 256; /*0x6db0b0*/
            v28 = v26 - v27 - this->u32_2D; /*0x6db0c7*/
            v44[0] = v25 - this->fallRate; /*0x6db0c9*/
            v44[1] = (int)DSurface_ViewBounds.field_4 + v28; /*0x6db0dd*/
            if ( (unsigned __int8)ClipLine((int *)v43.__pad_0, v44, &DSurface_ViewBounds.field_0) ) /*0x6db0e1*/
            {
              v29 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 4); /*0x6db105*/
              if ( v36 == *(_DWORD *)&dword_A83D4C->__pad_140[204] ) /*0x6db108*/
              {
                if ( v29 == 1 ) /*0x6db10d*/
                  v30 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372) + 3); /*0x6db117*/
                else
                  v30 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372) + 6); /*0x6db13c*/
                v38 = (*(int (__thiscall **)(AudioStream *, Vector2 *, int *, int, void *, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 76))( /*0x6db168*/
                        g_DSurface_Hidden_2,
                        &v43,
                        v44,
                        v30,
                        &unk_842940,
                        v38,
                        a2);
              }
              else
              {
                if ( v29 == 1 ) /*0x6db171*/
                  v31 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372) + 3); /*0x6db17b*/
                else
                  v31 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[128] + 372) + 6); /*0x6db188*/
                (*(void (__thiscall **)(AudioStream *, Vector2 *, int *, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x6db1a7*/
                                                                                  + 80))(
                  g_DSurface_Hidden_2,
                  &v43,
                  v44,
                  v31,
                  a2);
              }
            }
          }
          v8 = v35; /*0x6db1ae*/
          v2 = (const wchar_t *)((char *)v2 + 1); /*0x6db1b2*/
          if ( (int)v2 >= v41 ) /*0x6db1b5*/
          {
            v9 = v36; /*0x6db1bb*/
            break; /*0x6db1bb*/
          }
        }
      }
      v8 += 4; /*0x6db1bf*/
      v36 = ++v9; /*0x6db1c9*/
      v35 = v8; /*0x6db1cd*/
    }
    while ( v8 < 576 ); /*0x6db1d1*/
    v32 = v53; /*0x6db1e2*/
    *v42 = v52; /*0x6db1ea*/
    v33 = v54; /*0x6db1ec*/
    v42[1] = v32; /*0x6db1f3*/
    v34 = v55; /*0x6db1f6*/
    v42[2] = v33; /*0x6db1fd*/
    v42[3] = v34; /*0x6db200*/
    return (int)v42; /*0x6db1d7*/
  }
  return result; /*0x6db203*/
}



// ==== 0x006DB210  Tactical::DrawTacticalConnectorLines  this=Tactical  sig=csp ====
int __thiscall Tactical::DrawTacticalConnectorLines(Tactical *this)
{
  CellClass *v2; // ebp
  int result; // eax
  int v4; // edi
  int v5; // ebx
  int *Coords; // eax
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
  int *v17; // eax
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
  ObjectClass *firstObject; // [esp+44h] [ebp-D0h]
  ObjectClass *altObject; // [esp+44h] [ebp-D0h]
  Vector2 v37; // [esp+48h] [ebp-CCh] BYREF
  int v38; // [esp+50h] [ebp-C4h] BYREF
  int v39; // [esp+54h] [ebp-C0h]
  int v40; // [esp+58h] [ebp-BCh] BYREF
  int v41; // [esp+5Ch] [ebp-B8h]
  int v42; // [esp+60h] [ebp-B4h] BYREF
  int v43; // [esp+64h] [ebp-B0h]
  int v44[2]; // [esp+68h] [ebp-ACh] BYREF
  int v45; // [esp+70h] [ebp-A4h] BYREF
  int v46; // [esp+74h] [ebp-A0h]
  int v47; // [esp+78h] [ebp-9Ch]
  int v48; // [esp+7Ch] [ebp-98h] BYREF
  int v49; // [esp+80h] [ebp-94h]
  int v50; // [esp+84h] [ebp-90h]
  int v51; // [esp+88h] [ebp-8Ch]
  _DWORD v52[3]; // [esp+8Ch] [ebp-88h] BYREF
  _DWORD v53[3]; // [esp+98h] [ebp-7Ch] BYREF
  _DWORD v54[4]; // [esp+A4h] [ebp-70h] BYREF
  _DWORD v55[4]; // [esp+B4h] [ebp-60h] BYREF
  int v56[2]; // [esp+C4h] [ebp-50h] BYREF
  int v57[3]; // [esp+CCh] [ebp-48h] BYREF
  _BYTE v58[12]; // [esp+D8h] [ebp-3Ch] BYREF
  int v59; // [esp+E4h] [ebp-30h] BYREF
  int v60; // [esp+ECh] [ebp-28h] BYREF
  int v61; // [esp+F4h] [ebp-20h] BYREF
  char v62[12]; // [esp+FCh] [ebp-18h] BYREF
  int v63[3]; // [esp+108h] [ebp-Ch] BYREF

  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6db221*/
  v2 = (CellClass *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6db236*/
  result = 255 >> g_BitMask_Blue << g_BitMask_Green; /*0x6db251*/
  v4 = result | (255 >> g_BitShift_Green_0 << g_BitShift_Red); /*0x6db283*/
  v51 = (255 >> g_BitShift_Green_0 << g_BitShift_Red) | (255 >> g_BitMask_Red << g_BitShift_Blue); /*0x6db2b5*/
  v5 = result | (255 >> g_BitMask_Red << g_BitShift_Blue); /*0x6db2c1*/
  if ( v2 ) /*0x6db2c5*/
  {
    do /*0x6db525*/
    {
      firstObject = v2->firstObject; /*0x6db2d3*/
      if ( firstObject ) /*0x6db2d7*/
      {
        Coords = CellClass::GetCoords(v2, v63); /*0x6db2e7*/
        v52[0] = *Coords; /*0x6db2ee*/
        v52[1] = Coords[1]; /*0x6db2fa*/
        v52[2] = Coords[2]; /*0x6db30b*/
        v7 = Coord::To_ScreenRaw(&v60, v52); /*0x6db30f*/
        v8 = *(_DWORD *)&this->__pad_AC[4]; /*0x6db314*/
        v40 = *v7; /*0x6db31e*/
        v9 = v7[1]; /*0x6db324*/
        v40 -= v8; /*0x6db327*/
        v41 = v9 - *(_DWORD *)&this->__pad_AC[8]; /*0x6db33a*/
        v10 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, char *))firstObject->AbstractClass + 18))( /*0x6db345*/
                          firstObject,
                          v62);
        v53[0] = *v10; /*0x6db34a*/
        v53[1] = v10[1]; /*0x6db356*/
        v53[2] = v10[2]; /*0x6db367*/
        v11 = Coord::To_ScreenRaw(&v59, v53); /*0x6db36b*/
        v12 = *(_DWORD *)&this->__pad_AC[4]; /*0x6db370*/
        v13 = v11; /*0x6db376*/
        v44[0] = *v11; /*0x6db37b*/
        v14 = v44[0] - v12; /*0x6db37f*/
        v15 = v13[1]; /*0x6db381*/
        v16 = *(_DWORD *)&this->__pad_AC[8]; /*0x6db384*/
        v44[0] = v14; /*0x6db390*/
        v55[1] = v41 - 1; /*0x6db39a*/
        v44[1] = v15 - v16; /*0x6db3a6*/
        v55[2] = 3; /*0x6db3b0*/
        v55[3] = 3; /*0x6db3b7*/
        v55[0] = v40 - 1; /*0x6db3c5*/
        (*(void (__thiscall **)(AudioStream *, CellStruct *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 16))( /*0x6db3d4*/
          g_DSurface_Hidden_2,
          &DSurface_ViewBounds,
          v55,
          v4);
        (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x6db3ef*/
                                                                               + 44))(
          g_DSurface_Hidden_2,
          &DSurface_ViewBounds,
          &v40,
          v44,
          v4);
      }
      altObject = v2->altObject; /*0x6db3fa*/
      if ( altObject ) /*0x6db3fe*/
      {
        v17 = CellClass::GetCoords(v2, v57); /*0x6db40e*/
        v48 = *v17; /*0x6db415*/
        v49 = v17[1]; /*0x6db41c*/
        v50 = v17[2]; /*0x6db432*/
        v18 = Coord::To_ScreenRaw(&v61, &v48); /*0x6db436*/
        v19 = *(_DWORD *)&this->__pad_AC[4]; /*0x6db43d*/
        v20 = *(_DWORD *)&this->__pad_AC[8]; /*0x6db443*/
        v42 = *v18; /*0x6db449*/
        v21 = v18[1] - v20; /*0x6db452*/
        v42 -= v19; /*0x6db454*/
        v43 = v21 - 60; /*0x6db45f*/
        v22 = (int *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))altObject->AbstractClass + 18))(altObject, v58); /*0x6db46d*/
        v45 = *v22; /*0x6db472*/
        v46 = v22[1]; /*0x6db47e*/
        v47 = v22[2]; /*0x6db48f*/
        v23 = Coord::To_ScreenRaw(v56, &v45); /*0x6db493*/
        *(_DWORD *)v37.__pad_0 = *v23; /*0x6db49a*/
        v24 = *(_DWORD *)&this->__pad_AC[8]; /*0x6db49e*/
        v25 = v23[1]; /*0x6db4a4*/
        v26 = *(_DWORD *)&this->__pad_AC[4]; /*0x6db4a7*/
        v37.Vector2_field_0x04 = v25; /*0x6db4ad*/
        v39 = v24; /*0x6db4b5*/
        v38 = v26; /*0x6db4be*/
        Vector2::Subtract(&v37, &v38); /*0x6db4c2*/
        v54[0] = v42 - 1; /*0x6db4d1*/
        v54[1] = v43 - 1; /*0x6db4da*/
        v54[2] = 3; /*0x6db4e4*/
        v54[3] = 3; /*0x6db4e8*/
        (*(void (__thiscall **)(AudioStream *, CellStruct *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 16))( /*0x6db4f9*/
          g_DSurface_Hidden_2,
          &DSurface_ViewBounds,
          v54,
          v5);
        (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, Vector2 *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x6db514*/
                                                                                   + 44))(
          g_DSurface_Hidden_2,
          &DSurface_ViewBounds,
          &v42,
          &v37,
          v5);
      }
      result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6db51c*/
      v2 = (CellClass *)result; /*0x6db521*/
    }
    while ( result ); /*0x6db525*/
  }
  for ( i = dword_A8E370 - 1; i >= 0; --i ) /*0x6db536*/
  {
    v28 = (_DWORD *)*((_DWORD *)dword_A8E364 + i); /*0x6db542*/
    result = v28[12]; /*0x6db545*/
    if ( result ) /*0x6db54a*/
    {
      v29 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v28 + 72))(v28, v58); /*0x6db55c*/
      v45 = *v29; /*0x6db561*/
      v46 = v29[1]; /*0x6db568*/
      v47 = v29[2]; /*0x6db57e*/
      v30 = Coord::To_ScreenRaw(v56, &v45); /*0x6db582*/
      v31 = *(_DWORD *)&this->__pad_AC[4]; /*0x6db589*/
      *(_DWORD *)v37.__pad_0 = *v30; /*0x6db58f*/
      v32 = *(_DWORD *)&this->__pad_AC[8]; /*0x6db593*/
      v33 = v30[1]; /*0x6db599*/
      v38 = v31; /*0x6db59c*/
      v37.Vector2_field_0x04 = v33; /*0x6db5a0*/
      v39 = v32; /*0x6db5ad*/
      Vector2::Subtract(&v37, &v38); /*0x6db5b1*/
      v34 = (int *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)v28[12] + 72))(v28[12], v57); /*0x6db5c3*/
      v48 = *v34; /*0x6db5c8*/
      v49 = v34[1]; /*0x6db5d4*/
      v50 = v34[2]; /*0x6db5e2*/
      Coord::To_Screen((Coord *)this, &v48, v44); /*0x6db5e6*/
      result = (*(int (__thiscall **)(AudioStream *, CellStruct *, Vector2 *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x6db607*/
                                                                                         + 44))(
                 g_DSurface_Hidden_2,
                 &DSurface_ViewBounds,
                 &v37,
                 v44,
                 v51);
    }
  }
  return result; /*0x6db611*/
}



// ==== 0x006DB620  ObjectClass::RenderLWCViewCells  this=ObjectClass  sig=csp ====
int __thiscall RenderLWCViewCells(ObjectClass *this)
{
  ObjectClass *v1; // ebp
  int v2; // edi
  int result; // eax
  int v4; // esi
  int *ScreenRect; // eax
  _DWORD *v6; // eax
  int *Coords; // eax
  int *v8; // eax
  int v9; // ecx
  int v10; // eax
  char *v11; // ecx
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
  Coord2D v32; // [esp+30h] [ebp-1C4h] BYREF
  int v33; // [esp+38h] [ebp-1BCh]
  int v34; // [esp+3Ch] [ebp-1B8h]
  ObjectClass *v35; // [esp+40h] [ebp-1B4h]
  Coord2D v36; // [esp+44h] [ebp-1B0h] BYREF
  _DWORD v37[2]; // [esp+4Ch] [ebp-1A8h] BYREF
  Coord2D v38; // [esp+54h] [ebp-1A0h] BYREF
  Coord2D v39; // [esp+5Ch] [ebp-198h] BYREF
  _DWORD v40[2]; // [esp+64h] [ebp-190h] BYREF
  _DWORD v41[2]; // [esp+6Ch] [ebp-188h] BYREF
  Coord2D v42; // [esp+74h] [ebp-180h] BYREF
  _DWORD v43[2]; // [esp+7Ch] [ebp-178h] BYREF
  _DWORD v44[2]; // [esp+84h] [ebp-170h] BYREF
  _DWORD v45[2]; // [esp+8Ch] [ebp-168h] BYREF
  Coord2D v46; // [esp+94h] [ebp-160h] BYREF
  _DWORD v47[3]; // [esp+9Ch] [ebp-158h] BYREF
  _DWORD v48[4]; // [esp+A8h] [ebp-14Ch] BYREF
  _DWORD v49[4]; // [esp+B8h] [ebp-13Ch] BYREF
  _DWORD v50[4]; // [esp+C8h] [ebp-12Ch] BYREF
  _DWORD v51[4]; // [esp+D8h] [ebp-11Ch] BYREF
  int v52[4]; // [esp+E8h] [ebp-10Ch] BYREF
  _DWORD v53[4]; // [esp+F8h] [ebp-FCh] BYREF
  _DWORD v54[4]; // [esp+108h] [ebp-ECh] BYREF
  _DWORD v55[4]; // [esp+118h] [ebp-DCh] BYREF
  int v56; // [esp+128h] [ebp-CCh] BYREF
  int v57; // [esp+130h] [ebp-C4h] BYREF
  _DWORD v58[6]; // [esp+138h] [ebp-BCh] BYREF
  int v59; // [esp+150h] [ebp-A4h] BYREF
  int v60; // [esp+158h] [ebp-9Ch] BYREF
  int v61; // [esp+160h] [ebp-94h] BYREF
  int v62[3]; // [esp+168h] [ebp-8Ch] BYREF
  int v63[4]; // [esp+174h] [ebp-80h] BYREF
  Rect v64; // [esp+184h] [ebp-70h] BYREF
  int v65[4]; // [esp+194h] [ebp-60h] BYREF
  Rect v66; // [esp+1A4h] [ebp-50h] BYREF
  Rect v67; // [esp+1B4h] [ebp-40h] BYREF
  Rect v68; // [esp+1C4h] [ebp-30h] BYREF
  Rect v69; // [esp+1D4h] [ebp-20h] BYREF
  Rect v70; // [esp+1E4h] [ebp-10h] BYREF

  v1 = this; /*0x6db628*/
  v35 = this; /*0x6db631*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6db635*/
  v2 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6db654*/
  result = 255 >> g_BitMask_Blue << g_BitMask_Green; /*0x6db672*/
  v4 = (255 >> g_BitShift_Green_0 << g_BitShift_Red) | result; /*0x6db686*/
  if ( v2 ) /*0x6db68a*/
  {
    do /*0x6dbb43*/
    {
      ScreenRect = CellClass::GetScreenRect((CellClass *)v2, v63); /*0x6db69a*/
      v52[0] = *ScreenRect; /*0x6db6a2*/
      v52[1] = ScreenRect[1]; /*0x6db6b2*/
      v52[2] = ScreenRect[2]; /*0x6db6bc*/
      v52[3] = ScreenRect[3]; /*0x6db6cd*/
      v6 = ClipRectIntersection(v65, v52, &DSurface_ViewBounds.field_0, 0, 0); /*0x6db6db*/
      v58[2] = *v6; /*0x6db6e4*/
      v58[3] = v6[1]; /*0x6db6ee*/
      if ( (int)v6[2] > 0 && (int)v6[3] > 0 ) /*0x6db705*/
      {
        Coords = CellClass::GetCoords((CellClass *)v2, v62); /*0x6db715*/
        v47[0] = *Coords; /*0x6db71c*/
        v47[1] = Coords[1]; /*0x6db723*/
        v47[2] = Coords[2]; /*0x6db73c*/
        v8 = Coord::To_ScreenRaw(&v61, v47); /*0x6db743*/
        v9 = v8[1]; /*0x6db74c*/
        v10 = *v8 - (unsigned int)v1[1].? - 2; /*0x6db765*/
        v11 = (char *)DSurface_ViewBounds.field_4 + v9 - (unsigned int)v1[1].? - 2; /*0x6db768*/
        v33 = 4; /*0x6db773*/
        v12 = *(_BYTE *)(v2 + 292); /*0x6db777*/
        *(_DWORD *)v32.__pad_0 = v10; /*0x6db77d*/
        v32.Coord2D_field_0x04 = (int)v11; /*0x6db784*/
        v34 = 4; /*0x6db788*/
        if ( (v12 & 4) != 0 ) /*0x6db78c*/
        {
          *(_DWORD *)v46.__pad_0 = v10; /*0x6db78e*/
          v46.Coord2D_field_0x04 = (int)v11; /*0x6db792*/
          v41[0] = 10; /*0x6db7ae*/
          v41[1] = 0; /*0x6db7b6*/
          v13 = Coord2D::Add(&v46, v58, v41); /*0x6db7ba*/
          v14 = Rect::Construct(&v69, v13, 4, 4); /*0x6db7c7*/
          v50[0] = *v14; /*0x6db7cf*/
          v50[1] = v14[1]; /*0x6db7d9*/
          v50[2] = v14[2]; /*0x6db7e9*/
          v50[3] = v14[3]; /*0x6db7f3*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6db804*/
            g_DSurface_Hidden_2,
            v50,
            v4);
        }
        if ( (*(_BYTE *)(v2 + 292) & 0x10) != 0 ) /*0x6db812*/
        {
          v39 = v32; /*0x6db824*/
          v28 = v34; /*0x6db830*/
          v24 = v33; /*0x6db835*/
          v45[0] = 0; /*0x6db843*/
          v45[1] = 6; /*0x6db847*/
          v15 = Coord2D::Add(&v39, &v60, v45); /*0x6db852*/
          v16 = Rect::Construct(&v67, v15, v24, v28); /*0x6db85f*/
          v51[0] = *v16; /*0x6db867*/
          v51[1] = v16[1]; /*0x6db871*/
          v51[2] = v16[2]; /*0x6db87b*/
          v51[3] = v16[3]; /*0x6db88b*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6db89c*/
            g_DSurface_Hidden_2,
            v51,
            v4);
        }
        if ( (*(_BYTE *)(v2 + 292) & 8) != 0 ) /*0x6db8a6*/
        {
          v36 = v32; /*0x6db8b8*/
          v29 = v34; /*0x6db8c4*/
          v25 = v33; /*0x6db8c9*/
          v43[0] = -10; /*0x6db8d7*/
          v43[1] = 0; /*0x6db8df*/
          v17 = Coord2D::Add(&v36, &v56, v43); /*0x6db8e3*/
          v18 = Rect::Construct(&v64, v17, v25, v29); /*0x6db8f0*/
          v53[0] = *v18; /*0x6db8f8*/
          v53[1] = v18[1]; /*0x6db902*/
          v53[2] = v18[2]; /*0x6db90c*/
          v53[3] = v18[3]; /*0x6db91c*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6db92d*/
            g_DSurface_Hidden_2,
            v53,
            v4);
        }
        if ( (*(_BYTE *)(v2 + 292) & 0xE0) != 0 ) /*0x6db937*/
          (*(void (__thiscall **)(AudioStream *, Coord2D *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6db947*/
            g_DSurface_Hidden_2,
            &v32,
            v4);
        if ( (*(_BYTE *)(v2 + 296) & 4) != 0 ) /*0x6db951*/
        {
          v38 = v32; /*0x6db963*/
          v30 = v34; /*0x6db96f*/
          v26 = v33; /*0x6db974*/
          v37[0] = 10; /*0x6db982*/
          v37[1] = -60; /*0x6db98a*/
          v19 = Coord2D::Add(&v38, &v57, v37); /*0x6db992*/
          v20 = Rect::Construct(&v66, v19, v26, v30); /*0x6db99f*/
          v48[0] = *v20; /*0x6db9a7*/
          v48[1] = v20[1]; /*0x6db9b1*/
          v48[2] = v20[2]; /*0x6db9bb*/
          v48[3] = v20[3]; /*0x6db9cb*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6db9dc*/
            g_DSurface_Hidden_2,
            v48,
            v4);
        }
        if ( (*(_BYTE *)(v2 + 296) & 0x10) != 0 ) /*0x6db9e6*/
        {
          v42 = v32; /*0x6db9f8*/
          v31 = v34; /*0x6dba04*/
          v27 = v33; /*0x6dba09*/
          v40[0] = 0; /*0x6dba17*/
          v40[1] = -66; /*0x6dba1b*/
          v21 = Coord2D::Add(&v42, &v59, v40); /*0x6dba23*/
          v22 = Rect::Construct(&v68, v21, v27, v31); /*0x6dba30*/
          v49[0] = *v22; /*0x6dba38*/
          v49[1] = v22[1]; /*0x6dba42*/
          v49[2] = v22[2]; /*0x6dba4c*/
          v49[3] = v22[3]; /*0x6dba5c*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6dba6d*/
            g_DSurface_Hidden_2,
            v49,
            v4);
        }
        if ( (*(_BYTE *)(v2 + 296) & 8) != 0 ) /*0x6dba77*/
        {
          v44[0] = *(_DWORD *)v32.__pad_0 - 10; /*0x6dba8b*/
          v44[1] = v32.Coord2D_field_0x04 - 60; /*0x6dba93*/
          v23 = Rect::Construct(&v70, v44, v33, v34); /*0x6dbaa5*/
          v55[0] = *v23; /*0x6dbaad*/
          v55[1] = v23[1]; /*0x6dbab7*/
          v55[2] = v23[2]; /*0x6dbac7*/
          v55[3] = v23[3]; /*0x6dbad1*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6dbae2*/
            g_DSurface_Hidden_2,
            v55,
            v4);
        }
        if ( (*(_BYTE *)(v2 + 296) & 0xE0) != 0 ) /*0x6dbaec*/
        {
          v54[0] = *(_DWORD *)v32.__pad_0; /*0x6dbaf6*/
          v54[1] = v32.Coord2D_field_0x04 - 60; /*0x6dbb05*/
          v54[3] = v34; /*0x6dbb10*/
          v54[2] = v33; /*0x6dbb1d*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6dbb2e*/
            g_DSurface_Hidden_2,
            v54,
            v4);
        }
        v1 = v35; /*0x6dbb31*/
      }
      result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6dbb3a*/
      v2 = result; /*0x6dbb3f*/
    }
    while ( result ); /*0x6dbb43*/
  }
  return result; /*0x6dbb49*/
}



// ==== 0x006DBB60  Tactical::DrawOverlay  this=Tactical  sig=csp ====
char __thiscall Tactical::DrawOverlay(Tactical *this, int *a2, int *a3, int a4, int a5)
{
  _DWORD *v6; // eax
  int v7; // ebx
  int v8; // esi
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  int v14; // ecx
  _DWORD *v15; // eax
  int v16; // ecx
  __int64 v17; // rax
  int v18; // esi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  AudioStream *v22; // esi
  int v23; // edi
  int v24; // eax
  int v25; // eax
  int v27; // [esp-8h] [ebp-38h]
  int v28; // [esp-8h] [ebp-38h]
  IsoCoord v29; // [esp+10h] [ebp-20h] BYREF
  IsoCoord v30; // [esp+18h] [ebp-18h] BYREF
  _DWORD v31[2]; // [esp+20h] [ebp-10h] BYREF
  _DWORD v32[2]; // [esp+28h] [ebp-8h] BYREF
  BOOL v33; // [esp+38h] [ebp+8h]

  v6 = IsoCoord::ToPixel(&v30, *a2, a2[1]); /*0x6dbb79*/
  v7 = v6[1]; /*0x6dbb83*/
  v8 = *v6 / 256; /*0x6dbb93*/
  v9 = ZCoordToScreenY(a2[2]); /*0x6dbb9b*/
  v10 = *(_DWORD *)&this->__pad_AC[8]; /*0x6dbbac*/
  v11 = v7 / 256 - v9; /*0x6dbbb5*/
  v12 = *(_DWORD *)&this->__pad_AC[4]; /*0x6dbbb7*/
  v32[0] = v8; /*0x6dbbbd*/
  v13 = v8 - v12; /*0x6dbbc3*/
  v14 = a3[1]; /*0x6dbbc5*/
  v32[1] = v11 - v10; /*0x6dbbc8*/
  v27 = *a3; /*0x6dbbcf*/
  v32[0] = v13; /*0x6dbbd4*/
  v15 = IsoCoord::ToPixel(&v29, v27, v14); /*0x6dbbd8*/
  v16 = v15[1]; /*0x6dbbe1*/
  v17 = (int)*v15; /*0x6dbbe4*/
  v30.IsoCoord_field_0x04 = v16; /*0x6dbbeb*/
  v18 = (BYTE4(v17) + (int)v17) >> 8; /*0x6dbbf6*/
  v19 = ZCoordToScreenY(a3[2]); /*0x6dbbf9*/
  v31[0] = v18; /*0x6dbc0b*/
  v20 = v18 - *(_DWORD *)&this->__pad_AC[4]; /*0x6dbc22*/
  v31[1] = v30.IsoCoord_field_0x04 / 256 - v19 - *(_DWORD *)&this->__pad_AC[8]; /*0x6dbc28*/
  v21 = a3[2]; /*0x6dbc2c*/
  v31[0] = v20; /*0x6dbc34*/
  *(_DWORD *)v29.__pad_0 = v21; /*0x6dbc38*/
  *(_DWORD *)v30.__pad_0 = a2[2]; /*0x6dbc58*/
  v33 = *(_DWORD *)v30.__pad_0 >= 728; /*0x6dbc5e*/
  v22 = g_DSurface_Hidden_2; /*0x6dbc66*/
  v23 = *(_DWORD *)g_DSurface_Hidden_2->__pad_0; /*0x6dbc77*/
  LOWORD(v24) = Math::RoundToInt((double)v21 * dbl_B0CD48 + (double)(v21 >= 728) + 0.5); /*0x6dbc83*/
  v28 = 14 - v24; /*0x6dbc99*/
  LOWORD(v25) = Math::RoundToInt((double)*(int *)v30.__pad_0 * dbl_B0CD48 + (double)v33 + 0.5); /*0x6dbca4*/
  (*(void (__thiscall **)(AudioStream *, CellStruct *, _DWORD *, _DWORD *, int, int, int, int))(v23 + 52))( /*0x6dbcc7*/
    v22,
    &DSurface_ViewBounds,
    v32,
    v31,
    a4,
    14 - v25,
    v28,
    a5);
  return 1; /*0x6dbcca*/
}



// ==== 0x006DBCE0  Tactical::ddtor  this=Tactical  sig=csp ====
int __stdcall Tactical::ddtor(Tactical *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6dbce6*/
    return -2147467261; /*0x6dbce8*/
  *a2 = -816401526; /*0x6dbcf6*/
  a2[1] = 298984461; /*0x6dbcfe*/
  a2[2] = 1610644609; /*0x6dbd07*/
  a2[3] = unk_7E995C; /*0x6dbd10*/
  return 0; /*0x6dbced*/
}



// ==== 0x006DBD20  Tactical::InitMap  this=Tactical  sig=csp ====
int __stdcall Tactical::InitMap(Tactical *this, int a2)
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

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6dbd2e*/
  if ( result >= 0 ) /*0x6dbd35*/
  {
    if ( this ) /*0x6dbd3d*/
      SmallFunc_6D1E30(this, (int)&a2); /*0x6dbd46*/
    v3 = *(_DWORD *)&this->__pad_AC[52]; /*0x6dbd4b*/
    v4 = 0; /*0x6dbd52*/
    *(_DWORD *)&this->__pad_DA8[8] = 0; /*0x6dbd54*/
    if ( v3 > 0 ) /*0x6dbd60*/
    {
      v5 = (int *)&this->__pad_AC[56]; /*0x6dbd63*/
      do /*0x6dbd80*/
      {
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v5); /*0x6dbd6f*/
        ++v4; /*0x6dbd7a*/
        ++v5; /*0x6dbd7b*/
      }
      while ( v4 < *(_DWORD *)&this->__pad_AC[52] ); /*0x6dbd80*/
    }
    v6 = *(_DWORD *)&this->__pad_11F[3145]; /*0x6dbd89*/
    v9 = *(_DWORD *)&this->__pad_11F[3141]; /*0x6dbd93*/
    v10 = v6; /*0x6dbd9a*/
    if ( !ClampCoordMap(&v9) || stru_A8EB00.?[391] ) /*0x6dbdaf*/
    {
      v7 = *(_DWORD *)&this->__pad_11F[3141]; /*0x6dbdbb*/
      v8 = *(_DWORD *)&this->__pad_11F[3145]; /*0x6dbdc1*/
    }
    else
    {
      v7 = v9; /*0x6dbdb1*/
      v8 = v10; /*0x6dbdb5*/
    }
    *(_DWORD *)&this->__pad_11F[3141] = v7; /*0x6dbdc7*/
    *(_DWORD *)&this->__pad_11F[3157] = v7; /*0x6dbdcd*/
    *(_DWORD *)&this->__pad_11F[3145] = v8; /*0x6dbdd3*/
    *(_DWORD *)&this->__pad_11F[3161] = v8; /*0x6dbdd9*/
    TacticalClass::CalcViewportCells((TacticalClass *)this); /*0x6dbde1*/
    this->__pad_11F[3166] = 1; /*0x6dbde6*/
    return 0; /*0x6dbded*/
  }
  return result; /*0x6dbdef*/
}



// ==== 0x006DBE00  Tactical::UpdateMapView  this=Tactical  sig=csp ====
int __stdcall Tactical::UpdateMapView(Tactical *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x6dbe0f*/
  if ( result >= 0 ) /*0x6dbe16*/
    return 0; /*0x6dbe18*/
  return result; /*0x6dbe1a*/
}



// ==== 0x006DBE20  TacticalClass::DrawPlacementCircles  this=TacticalClass  sig=csp ====
void TacticalClass::DrawPlacementCircles(TacticalClass *this)
{
  int v1; // ebx
  int i; // edi
  int v3; // esi
  TechnoClass *v4; // ebx
  CellClass *v5; // eax
  int *Coords; // eax
  int v7; // esi
  int v8; // edi
  int v9; // ebp
  int v10; // ecx
  double v11; // st7
  char v12; // ecx^3
  int v13; // edi
  int v14; // ebp
  int Color_field_00; // eax
  float v16; // ebx
  int *v17; // ecx
  __int16 v18; // si
  int v19; // eax
  _DWORD *v20; // eax
  double v21; // st6
  __int16 v22; // ax
  int v23; // ebx
  int *v24; // esi
  __int16 v25; // di
  int v26; // eax
  _DWORD *v27; // eax
  double v28; // st6
  int v29; // edi
  double v30; // st7
  CellClass *v31; // eax
  int *v32; // eax
  int v33; // ecx
  int v34; // ebx
  int v35; // ebp
  int v36; // esi
  int v37; // edx
  float v38; // eax
  char v39; // cl
  char v40; // ecx^3
  double v41; // st7
  char v42; // ecx^3
  int v43; // [esp+4h] [ebp-58h]
  int v44; // [esp+4h] [ebp-58h]
  int v45; // [esp+4h] [ebp-58h]
  float v46; // [esp+8h] [ebp-54h]
  float v47; // [esp+8h] [ebp-54h]
  Color v48; // [esp+28h] [ebp-34h] BYREF
  Color v49; // [esp+2Ch] [ebp-30h] BYREF
  int *v50; // [esp+30h] [ebp-2Ch]
  float v51; // [esp+34h] [ebp-28h]
  __int16 v52[2]; // [esp+38h] [ebp-24h] BYREF
  __int16 v53[4]; // [esp+3Ch] [ebp-20h] BYREF
  int v54; // [esp+44h] [ebp-18h]
  int v55; // [esp+48h] [ebp-14h]
  int v56[2]; // [esp+50h] [ebp-Ch] BYREF
  int v57; // [esp+58h] [ebp-4h]

  v1 = *(_DWORD *)&stru_A8EB00.?[228]; /*0x6dbe2a*/
  for ( i = 0; i < v1; ++i ) /*0x6dbe37*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * i); /*0x6dbe3e*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 136))(v3) /*0x6dbe59*/
      && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 136))(v3) + 568) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 304))(v3, 1); /*0x6dbe69*/
    }
  }
  if ( BYTE2(stru_A8EB00.ObjectTypeClass[31]) ) /*0x6dbe7b*/
  {
    v4 = *(TechnoClass **)&stru_87F5F0.__pad_E12[1418]; /*0x6dbe81*/
    v50 = *(int **)&stru_87F5F0.__pad_E12[1418]; /*0x6dbe89*/
    if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1418] /*0x6dbe9d*/
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87F5F0.__pad_E12[1418] + 44))(*(_DWORD *)&stru_87F5F0.__pad_E12[1418]) == 6 )
    {
      if ( BuildingClass::GetPowerFrame(v4) > 0 ) /*0x6dbeac*/
      {
        *(float *)v52 = *(float *)&stru_87F5F0.__pad_E12[1370]; /*0x6dbec0*/
        v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v52); /*0x6dbecb*/
        Coords = CellClass::GetCoords(v5, v56); /*0x6dbed2*/
        v7 = *Coords; /*0x6dbed7*/
        v8 = Coords[1]; /*0x6dbed9*/
        v9 = Coords[2]; /*0x6dbedc*/
        if ( (byte_B0CE90 & 1) == 0 ) /*0x6dbee6*/
        {
          byte_B0CE14 = 0; /*0x6dbef2*/
          byte_B0CE90 |= 1u; /*0x6dbef9*/
          byte_B0CE15 = 0; /*0x6dbeff*/
          byte_B0CE16 = 0; /*0x6dbf06*/
          atexit(nullsub_44); /*0x6dbf0d*/
        }
        dword_B0E648 += 10 * dword_842950; /*0x6dbf29*/
        if ( dword_B0E648 < 100 ) /*0x6dbf2e*/
        {
          if ( dword_B0E648 <= 0 ) /*0x6dbf3e*/
            dword_842950 = 1; /*0x6dbf40*/
        }
        else
        {
          dword_842950 = -1; /*0x6dbf30*/
        }
        v10 = (int)&v4->owner->base[4] + 1; /*0x6dbf55*/
        LOWORD(v49.Color_field_00) = *(_WORD *)v10; /*0x6dbf5f*/
        BYTE2(v49.Color_field_00) = *(_BYTE *)(v10 + 2); /*0x6dbf67*/
        Color::Lerp(&v49, dword_B0E648, &byte_B0CE14); /*0x6dbf6f*/
        v51 = COERCE_FLOAT(BuildingClass::GetPowerFrame(v4)); /*0x6dbf7b*/
        v11 = (double)SLODWORD(v51); /*0x6dbf81*/
        v46 = v11; /*0x6dbf91*/
        HIBYTE(v43) = v12; /*0x6dbf94*/
        LOWORD(v43) = v49.Color_field_00; /*0x6dbf9a*/
        BYTE2(v43) = BYTE2(v49.Color_field_00); /*0x6dbfa1*/
        DrawTechnoDeployCircle(0, 1, v7, v8, v9, v43, v46, 0, 1); /*0x6dbfae*/
        v13 = 0; /*0x6dbfb9*/
        v14 = 0x7FFFFFFF; /*0x6dbfbb*/
        v48.Color_field_00 = *(_DWORD *)&dword_A83D4C->__pad_38[64]; /*0x6dbfc5*/
        Color_field_00 = v48.Color_field_00; /*0x6dbfc0*/
        if ( v48.Color_field_00 > 0 ) /*0x6dbfc9*/
        {
          v16 = v51; /*0x6dbfcf*/
          do /*0x6dc0b0*/
          {
            v17 = *(int **)(*(_DWORD *)&dword_A83D4C->__pad_38[52] + 4 * v13); /*0x6dbfdc*/
            if ( v17 ) /*0x6dbfe1*/
            {
              if ( *((_BYTE *)v17 + 144) ) /*0x6dbfe7*/
              {
                if ( v17 != v50 && v17[328] == v50[328] ) /*0x6dc00f*/
                {
                  v18 = *(_WORD *)&stru_87F5F0.__pad_E12[1370]; /*0x6dc015*/
                  v19 = *v17; /*0x6dc01b*/
                  v54 = *(_DWORD *)&stru_87F5F0.__pad_E12[1370]; /*0x6dc021*/
                  v20 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(v19 + 72))(v17, v56); /*0x6dc026*/
                  v53[0] = *v20 / 256; /*0x6dc03c*/
                  v53[1] = v20[1] / 256; /*0x6dc050*/
                  LODWORD(v51) = (__int16)(HIWORD(v54) - v53[1]); /*0x6dc06b*/
                  v21 = (double)SLODWORD(v51); /*0x6dc06f*/
                  LODWORD(v51) = (__int16)(v18 - v53[0]); /*0x6dc073*/
                  Math::Sqrt((double)SLODWORD(v51) * (double)SLODWORD(v51) + v21 * v21); /*0x6dc08c*/
                  v22 = Math::RoundToInt(v11); /*0x6dc094*/
                  if ( v22 <= 2 * LODWORD(v16) && v22 < v14 ) /*0x6dc0a5*/
                    v14 = v22; /*0x6dc0a7*/
                }
              }
            }
            Color_field_00 = v48.Color_field_00; /*0x6dc0a9*/
            ++v13; /*0x6dc0ad*/
          }
          while ( v13 < v48.Color_field_00 ); /*0x6dc0b0*/
        }
        v23 = 0; /*0x6dc0b6*/
        if ( Color_field_00 > 0 ) /*0x6dc0ba*/
        {
          do /*0x6dc1a1*/
          {
            v24 = *(int **)(*(_DWORD *)&dword_A83D4C->__pad_38[52] + 4 * v23); /*0x6dc0c8*/
            if ( v24 && *((_BYTE *)v24 + 144) && v24 != v50 && v24[328] == v50[328] ) /*0x6dc0fb*/
            {
              v25 = *(_WORD *)&stru_87F5F0.__pad_E12[1370]; /*0x6dc101*/
              v26 = *v24; /*0x6dc107*/
              v54 = *(_DWORD *)&stru_87F5F0.__pad_E12[1370]; /*0x6dc10d*/
              v27 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(v26 + 72))(v24, v56); /*0x6dc114*/
              v53[0] = *v27 / 256; /*0x6dc12a*/
              v53[1] = v27[1] / 256; /*0x6dc13e*/
              LODWORD(v51) = (__int16)(HIWORD(v54) - v53[1]); /*0x6dc159*/
              v28 = (double)SLODWORD(v51); /*0x6dc15d*/
              LODWORD(v51) = (__int16)(v25 - v53[0]); /*0x6dc161*/
              Math::Sqrt((double)SLODWORD(v51) * (double)SLODWORD(v51) + v28 * v28); /*0x6dc17a*/
              if ( (__int16)Math::RoundToInt(v11) == v14 ) /*0x6dc18c*/
                (*(void (__thiscall **)(int *, _DWORD))(*v24 + 304))(v24, 0); /*0x6dc194*/
            }
            ++v23; /*0x6dc19e*/
          }
          while ( v23 < v48.Color_field_00 ); /*0x6dc1a1*/
        }
      }
      return; /*0x6dc1a1*/
    }
    if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1438] == -1 ) /*0x6dc1b7*/
      return; /*0x6dc1b7*/
    v29 = *((_DWORD *)dword_A8E334 + *(_DWORD *)&stru_87F5F0.__pad_E12[1438]); /*0x6dc1c3*/
    v30 = *(float *)(v29 + 248); /*0x6dc1c6*/
    v51 = *(float *)(v29 + 248); /*0x6dc1cc*/
    if ( v30 <= 0.0 ) /*0x6dc1db*/
      return; /*0x6dc1db*/
    *(_DWORD *)v53 = *(_DWORD *)&stru_87F5F0.__pad_E12[1370]; /*0x6dc1f6*/
    v31 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v53); /*0x6dc1fa*/
    v32 = CellClass::GetCoords(v31, v56); /*0x6dc201*/
    v33 = v32[1]; /*0x6dc20d*/
    v54 = *v32 - 126; /*0x6dc210*/
    v34 = v32[2]; /*0x6dc219*/
    v55 = v33 - 126; /*0x6dc21c*/
    v57 = v34; /*0x6dc226*/
    if ( (byte_B0CE90 & 2) == 0 ) /*0x6dc22c*/
    {
      byte_B0CD70 = 0; /*0x6dc237*/
      byte_B0CE90 |= 2u; /*0x6dc23e*/
      byte_B0CD71 = 0; /*0x6dc244*/
      byte_B0CD72 = 0; /*0x6dc24b*/
      atexit(nullsub_43); /*0x6dc252*/
    }
    v35 = dword_842954; /*0x6dc25a*/
    dword_B0E64C += 10 * dword_842954; /*0x6dc270*/
    v36 = dword_B0E64C; /*0x6dc26a*/
    if ( dword_B0E64C < 100 ) /*0x6dc276*/
    {
      if ( dword_B0E64C > 0 ) /*0x6dc27f*/
        goto LABEL_44; /*0x6dc27f*/
      v35 = 1; /*0x6dc281*/
    }
    else
    {
      v35 = -1; /*0x6dc278*/
    }
    dword_842954 = v35; /*0x6dc286*/
LABEL_44:
    v37 = *((_DWORD *)stru_A80220.? + (int)dword_A83D4C->Object_field_0x30) + 22265; /*0x6dc28c*/
    LOWORD(v49.Color_field_00) = *(_WORD *)v37; /*0x6dc2a7*/
    v38 = *(float *)(v29 + 252); /*0x6dc2ac*/
    v39 = *(_BYTE *)(v37 + 2); /*0x6dc2b2*/
    LOWORD(v48.Color_field_00) = 0; /*0x6dc2b5*/
    BYTE2(v49.Color_field_00) = v39; /*0x6dc2bc*/
    BYTE2(v48.Color_field_00) = 0; /*0x6dc2c5*/
    *(float *)v52 = v38; /*0x6dc2ca*/
    if ( SLODWORD(v38) <= 0 ) /*0x6dc2ce*/
    {
      Color::Lerp(&v49, dword_B0E64C, &byte_B0CD70); /*0x6dc3b5*/
      HIBYTE(v45) = v42; /*0x6dc3ce*/
      LOWORD(v45) = v49.Color_field_00; /*0x6dc3d6*/
      BYTE2(v45) = BYTE2(v49.Color_field_00); /*0x6dc3dd*/
      DrawTechnoDeployCircle(0, 1, v54, v55, v34, v45, v51, 0, 1); /*0x6dc3ee*/
    }
    else
    {
      v50 = 0; /*0x6dc2d8*/
      if ( (double)*(int *)v52 * v51 >= 0.0 ) /*0x6dc2ef*/
      {
        *(float *)v52 = 0.0; /*0x6dc2f5*/
        do /*0x6dc39d*/
        {
          LOWORD(v48.Color_field_00) = v49.Color_field_00; /*0x6dc30a*/
          BYTE2(v48.Color_field_00) = BYTE2(v49.Color_field_00); /*0x6dc30f*/
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
          Color::Lerp(&v48, v36, &byte_B0CD70); /*0x6dc333*/
          v47 = *(float *)v52 / (double)*(int *)(v29 + 252); /*0x6dc350*/
          HIBYTE(v44) = v40; /*0x6dc353*/
          LOWORD(v44) = v48.Color_field_00; /*0x6dc359*/
          BYTE2(v44) = BYTE2(v48.Color_field_00); /*0x6dc360*/
          DrawTechnoDeployCircle(0, 1, v54, v55, v57, v44, v47, 0, 0); /*0x6dc379*/
          v50 = (int *)((char *)v50 + 1); /*0x6dc37e*/
          v41 = (double)(int)v50; /*0x6dc382*/
          *(float *)v52 = v41; /*0x6dc386*/
        }
        while ( v41 <= (double)*(int *)(v29 + 252) * v51 ); /*0x6dc39d*/
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



// ==== 0x006DC420  ObjectClass::GetHeightMap  this=ObjectClass  sig=csp ====
int __thiscall GetHeightMap(ObjectClass *this)
{
  return *((_DWORD *)this + 876); /*0x6dc426*/
}



// ==== 0x006DC430  GetCoordDataMap  this=Tactical  sig=csp ====
int __stdcall Map_GetCoordData(int a1)
{
  return dword_B0CEC8[3 * a1]; /*0x6dc43e*/
}



// ==== 0x006DC450  Tactical::StubReturn56  this=Tactical  sig=csp ====
int Tactical::StubReturn56(Tactical *this)
{
  return 56; /*0x6dc455*/
}



// ==== 0x006DC460  Tactical::StubReturn3608  this=Tactical  sig=csp ====
int Tactical::StubReturn3608(Tactical *this)
{
  return 3608; /*0x6dc465*/
}



// ==== 0x006DC470  Tactical::UpdateView  this=Tactical  sig=csp ====
_DWORD *__thiscall Tactical::UpdateView(Tactical *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &Tactical::`vftable'; /*0x6dc473*/
  *(_DWORD *)&this->Tactical_field_0x2[2] = &Tactical::`vftable'; /*0x6dc479*/
  this->Tactical_field_0x8[0] = (int)&Tactical::`vftable'; /*0x6dc480*/
  this->Tactical_field_0xC[0] = (int)&Tactical::`vftable'; /*0x6dc487*/
  g_TacticalClass_Instance = 0; /*0x6dc48e*/
  AbstractClass::DTOR((AbstractClass *)this); /*0x6dc498*/
  if ( (a2 & 1) != 0 ) /*0x6dc4a2*/
    __3_YAXPAX_Z(this); /*0x6dc4a5*/
  return this->__pad_0; /*0x6dc4af*/
}



// ==== 0x006DC4C0  Vector2::Subtract  this=Vector2  sig=csp ====
_DWORD *__thiscall Vector2::Subtract(Vector2 *this, _DWORD *a2)
{
  int Vector2_field_0x04; // edx

  Vector2_field_0x04 = this->Vector2_field_0x04; /*0x6dc4cd*/
  *(_DWORD *)this->__pad_0 -= *a2; /*0x6dc4d0*/
  this->Vector2_field_0x04 = Vector2_field_0x04 - a2[1]; /*0x6dc4d8*/
  return this->__pad_0; /*0x6dc4d7*/
}



// ==== 0x006DC4E0  VectorClass_UDirtyAreaStruct::Destroy  this=VectorClass_UDirtyAreaStruct  sig=csp ====
void __thiscall VectorClass_UDirtyAreaStruct::Destroy(VectorClass_UDirtyAreaStruct *this)
{
  void *Items; // eax

  Items = this->Items; /*0x6dc4e6*/
  this->Count = 0; /*0x6dc4e9*/
  if ( Items && this->IsAllocated ) /*0x6dc4f0*/
  {
    __3_YAXPAX_Z(Items); /*0x6dc4f6*/
    this->Items = 0; /*0x6dc4fe*/
  }
  this->IsAllocated = 0; /*0x6dc501*/
  this->Capacity = 0; /*0x6dc504*/
}



// ==== 0x006DC510  VectorClass_UDirtyAreaStruct::GetItemIndex  this=VectorClass_UDirtyAreaStruct  sig=csp ====
unsigned int __thiscall VectorClass_UDirtyAreaStruct::GetItemIndex(VectorClass_UDirtyAreaStruct *this, int a2)
{
  if ( this->IsInitialized ) /*0x6dc510*/
    return (a2 - (unsigned int)this->Items) / 0x14; /*0x6dc52e*/
  else
    return 0; /*0x6dc517*/
}



// ==== 0x006DC540  _VectorClass_UDirtyAreaStruct::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UDirtyAreaStruct::Clear(_VectorClass_UDirtyAreaStruct *this, int a2, int a3)
{
  int v3; // ecx

  v3 = *(_DWORD *)&this->m_1[3] + 20 * a3; /*0x6dc54c*/
  *(_DWORD *)a2 = *(_DWORD *)v3; /*0x6dc559*/
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v3 + 4); /*0x6dc55e*/
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(v3 + 8); /*0x6dc564*/
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(v3 + 12); /*0x6dc56b*/
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(v3 + 16); /*0x6dc571*/
  return a2; /*0x6dc567*/
}



// ==== 0x006DC580  _DynamicVectorClass_PAVShadowControlClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_UDirtyAreaStruct::Destroy_0(_DynamicVectorClass_PAVShadowControlClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6dc586*/
  this->m_10 = 0; /*0x6dc589*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6dc590*/
  {
    __3_YAXPAX_Z(v2); /*0x6dc596*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6dc59e*/
  }
  BYTE1(this->m_C) = 0; /*0x6dc5a1*/
  this->m_8 = 0; /*0x6dc5a4*/
}



// ==== 0x006DC5B0  _DynamicVectorClass_PAVShadowControlClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_UDirtyAreaStruct::GetItemIndex_0(
        _DynamicVectorClass_PAVShadowControlClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6dc5b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6dc5c5*/
  else
    return 0; /*0x6dc5b7*/
}



// ==== 0x006DC5D0  _VectorClass_PAVShadowControlClass::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UDirtyAreaStruct___16::Clear(_VectorClass_PAVShadowControlClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6dc5da*/
}



// ==== 0x006DC5E0  _VectorClass_UDirtyAreaStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UDirtyAreaStruct::AddRef(_VectorClass_UDirtyAreaStruct *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // ebp

  m_8 = this->m_8; /*0x6dc5eb*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6dc5f0*/
  {
    v3 = 0; /*0x6dc5f2*/
    if ( m_8 <= 0 ) /*0x6dc5f6*/
      return 1; /*0x6dc646*/
    v4 = *(_DWORD *)(a2 + 4); /*0x6dc5f8*/
    v5 = *(_DWORD *)&this->m_1[3]; /*0x6dc5fb*/
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
      if ( v3 >= m_8 ) /*0x6dc63e*/
        return 1; /*0x6dc63e*/
    }
  }
  return 0; /*0x6dc640*/
}



// ==== 0x006DC660  _VectorClass_UDirtyAreaStruct::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UDirtyAreaStruct::Release(_VectorClass_UDirtyAreaStruct *this, int a2, char *a3)
{
  int v3; // esi
  char *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v13; // eax
  const void *v14; // esi
  char *v15; // edi
  char *v16; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x6dc664*/
  if ( a2 ) /*0x6dc66f*/
  {
    v5 = a3; /*0x6dc675*/
    LOBYTE(this->m_C) = 0; /*0x6dc679*/
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
      v6 = __2_YAPAXI_Z(20 * a2); /*0x6dc687*/
      if ( v6 ) /*0x6dc691*/
      {
        if ( a2 - 1 >= 0 ) /*0x6dc698*/
        {
          v7 = v6 + 8; /*0x6dc69a*/
          v8 = a2; /*0x6dc69d*/
          do /*0x6dc6b0*/
          {
            *(_DWORD *)(v7 - 8) = 0; /*0x6dc69e*/
            *(_DWORD *)(v7 - 4) = 0; /*0x6dc6a1*/
            *(_DWORD *)v7 = 0; /*0x6dc6a4*/
            *(_DWORD *)(v7 + 4) = 0; /*0x6dc6a6*/
            *(_BYTE *)(v7 + 8) = 0; /*0x6dc6a9*/
            v7 += 20; /*0x6dc6ac*/
            --v8; /*0x6dc6af*/
          }
          while ( v8 ); /*0x6dc6b0*/
        }
        v16 = (char *)v6; /*0x6dc6b2*/
      }
      else
      {
        v16 = 0; /*0x6dc6b8*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x6dc6e5*/
    if ( v16 ) /*0x6dc6eb*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6dc6f7*/
      {
        m_8 = this->m_8; /*0x6dc6fc*/
        if ( a2 < m_8 ) /*0x6dc701*/
          m_8 = a2; /*0x6dc703*/
        if ( m_8 > 0 ) /*0x6dc707*/
        {
          v13 = 0; /*0x6dc709*/
          do /*0x6dc724*/
          {
            v14 = (const void *)(*(_DWORD *)&this->m_1[3] + v13); /*0x6dc714*/
            v15 = &v16[v13]; /*0x6dc716*/
            v13 += 20; /*0x6dc71e*/
            --m_8; /*0x6dc721*/
            qmemcpy(v15, v14, 0x14u); /*0x6dc722*/
          }
          while ( m_8 ); /*0x6dc724*/
          v5 = a3; /*0x6dc726*/
          v3 = a2; /*0x6dc72a*/
        }
        if ( BYTE1(this->m_C) ) /*0x6dc72e*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6dc737*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6dc73f*/
        }
      }
      this->m_8 = v3; /*0x6dc746*/
      *(_DWORD *)&this->m_1[3] = v16; /*0x6dc749*/
      BYTE1(this->m_C) = v5 == 0; /*0x6dc754*/
      return 1; /*0x6dc759*/
    }
    else
    {
      return 0; /*0x6dc6f0*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_UDirtyAreaStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6dc765*/
    return 1; /*0x6dc76b*/
  }
}



// ==== 0x006DC780  _VectorClass_UDirtyAreaStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UDirtyAreaStruct::ddtor(_VectorClass_UDirtyAreaStruct *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6dc78d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6dc793*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6dc79b*/
  }
  BYTE1(this->m_C) = 0; /*0x6dc79e*/
  this->m_8 = 0; /*0x6dc7a1*/
}



// ==== 0x006DC7B0  _VectorClass_UDirtyAreaStruct::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UDirtyAreaStruct::GetSize(_VectorClass_UDirtyAreaStruct *this, int a2)
{
  int m_8; // edi
  int v4; // esi
  int i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6dc7b0*/
    return 0; /*0x6dc7be*/
  m_8 = this->m_8; /*0x6dc7c4*/
  v4 = 0; /*0x6dc7c7*/
  if ( m_8 <= 0 ) /*0x6dc7cb*/
    return -1; /*0x6dc815*/
  for ( i = *(_DWORD *)&this->m_1[3]; /*0x6dc7d1*/
        *(_BYTE *)(i + 16) != *(_BYTE *)(a2 + 16)
     || *(_DWORD *)i != *(_DWORD *)a2
     || *(_DWORD *)(i + 4) != *(_DWORD *)(a2 + 4)
     || *(_DWORD *)(i + 8) != *(_DWORD *)(a2 + 8)
     || *(_DWORD *)(i + 12) != *(_DWORD *)(a2 + 12);
        i += 20 )
  {
    if ( ++v4 >= m_8 ) /*0x6dc808*/
      return -1; /*0x6dc808*/
  }
  return v4; /*0x6dc7bb*/
}



// ==== 0x006DC820  _VectorClass_UDirtyAreaStruct::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UDirtyAreaStruct::GetCapacity(_VectorClass_UDirtyAreaStruct *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6dc820*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0x14u; /*0x6dc83e*/
  else
    return 0; /*0x6dc827*/
}



// ==== 0x006DC850  VectorClass_UDirtyAreaStruct::SetCapacity  this=VectorClass_UDirtyAreaStruct  sig=csp ====
char __thiscall VectorClass_UDirtyAreaStruct::SetCapacity(VectorClass_UDirtyAreaStruct *this, int a2, char *a3)
{
  void *v3; // edi
  char *v5; // esi
  int v6; // ebx
  char *v7; // ebx
  int v8; // ebx
  char *Capacity; // edx
  int v10; // eax
  char *v11; // edi
  char *v12; // esi
  void *v13; // eax
  char *v15; // [esp+10h] [ebp-4h]

  v3 = (void *)a2; /*0x6dc855*/
  if ( !a2 ) /*0x6dc85d*/
  {
    (*(void (__thiscall **)(VectorClass_UDirtyAreaStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6dc94a*/
    goto LABEL_26; /*0x6dc94a*/
  }
  v5 = a3; /*0x6dc863*/
  this->IsInitialized = 0; /*0x6dc867*/
  if ( a3 ) /*0x6dc86d*/
  {
    if ( a2 - 1 >= 0 ) /*0x6dc8ba*/
    {
      v8 = a2; /*0x6dc8bc*/
      do /*0x6dc8d6*/
      {
        Rect::Set((Rect *)v5, 0, 0, 0, 0); /*0x6dc8c9*/
        v5[16] = 0; /*0x6dc8ce*/
        v5 += 20; /*0x6dc8d2*/
        --v8; /*0x6dc8d5*/
      }
      while ( v8 ); /*0x6dc8d6*/
      v5 = a3; /*0x6dc8d8*/
    }
    goto LABEL_13; /*0x6dc8d8*/
  }
  v5 = (char *)__2_YAPAXI_Z(20 * a2); /*0x6dc87b*/
  v15 = v5; /*0x6dc882*/
  if ( v5 ) /*0x6dc886*/
  {
    if ( a2 - 1 >= 0 ) /*0x6dc88d*/
    {
      v6 = a2; /*0x6dc88f*/
      do /*0x6dc8a9*/
      {
        Rect::Set((Rect *)v5, 0, 0, 0, 0); /*0x6dc89c*/
        v5[16] = 0; /*0x6dc8a1*/
        v5 += 20; /*0x6dc8a5*/
        --v6; /*0x6dc8a8*/
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
    Capacity = (char *)this->Capacity; /*0x6dc8ed*/
    if ( a2 < (int)Capacity ) /*0x6dc8f2*/
      Capacity = (char *)a2; /*0x6dc8f4*/
    if ( (int)Capacity > 0 ) /*0x6dc8f8*/
    {
      v10 = 0; /*0x6dc8fa*/
      do /*0x6dc90f*/
      {
        v11 = &v7[v10]; /*0x6dc8ff*/
        v12 = (char *)this->Items + v10; /*0x6dc902*/
        v10 += 20; /*0x6dc909*/
        --Capacity; /*0x6dc90c*/
        qmemcpy(v11, v12, 0x14u); /*0x6dc90d*/
      }
      while ( Capacity ); /*0x6dc90f*/
      v3 = (void *)a2; /*0x6dc911*/
    }
    if ( this->IsAllocated ) /*0x6dc915*/
    {
      __3_YAXPAX_Z(this->Items); /*0x6dc920*/
      this->Items = 0; /*0x6dc928*/
    }
  }
  this->Items = v7; /*0x6dc93a*/
  this->Capacity = v3; /*0x6dc93d*/
  this->IsAllocated = a3 == 0; /*0x6dc940*/
LABEL_26:
  v13 = this->Capacity; /*0x6dc94d*/
  if ( (int)v13 < (int)this->Count ) /*0x6dc955*/
    this->Count = v13; /*0x6dc957*/
  return 1; /*0x6dc95a*/
}



// ==== 0x006DC970  VectorClass_UDirtyAreaStruct::FindItemIndex  this=VectorClass_UDirtyAreaStruct  sig=csp ====
int __thiscall VectorClass_UDirtyAreaStruct::FindItemIndex(VectorClass_UDirtyAreaStruct *this, int a2)
{
  void *Count; // edi
  int v3; // esi
  char *i; // ecx

  Count = this->Count; /*0x6dc974*/
  v3 = 0; /*0x6dc977*/
  if ( (int)Count <= 0 ) /*0x6dc97b*/
    return -1; /*0x6dc9c5*/
  for ( i = (char *)this->Items; /*0x6dc981*/
        i[16] != *(_BYTE *)(a2 + 16)
     || *(_DWORD *)i != *(_DWORD *)a2
     || *((_DWORD *)i + 1) != *(_DWORD *)(a2 + 4)
     || *((_DWORD *)i + 2) != *(_DWORD *)(a2 + 8)
     || *((_DWORD *)i + 3) != *(_DWORD *)(a2 + 12);
        i += 20 )
  {
    if ( ++v3 >= (int)Count ) /*0x6dc9b8*/
      return -1; /*0x6dc9b8*/
  }
  return v3; /*0x6dc9be*/
}



// ==== 0x006DC9D0  _VectorClass_PAVShadowControlClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UDirtyAreaStruct___16::AddRef(_VectorClass_PAVShadowControlClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x6dc9d2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6dc9dd*/
  {
    v3 = 0; /*0x6dc9df*/
    if ( m_8 <= 0 ) /*0x6dc9e3*/
      return 1; /*0x6dca03*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6dc9e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6dc9eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6dc9f4*/
    {
      ++v3; /*0x6dc9f6*/
      ++v4; /*0x6dc9f7*/
      if ( v3 >= m_8 ) /*0x6dc9fc*/
        return 1; /*0x6dc9fc*/
    }
  }
  return 0; /*0x6dc9fe*/
}



// ==== 0x006DCA10  _VectorClass_PAVShadowControlClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UDirtyAreaStruct___16::Release(
        _VectorClass_PAVShadowControlClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6dca1c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6dca26*/
    if ( a3 ) /*0x6dca2c*/
      v4 = a3; /*0x6dca42*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6dca3e*/
    LOBYTE(this->m_C) = 1; /*0x6dca46*/
    if ( v4 ) /*0x6dca4a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6dca55*/
      {
        m_8 = this->m_8; /*0x6dca5c*/
        if ( a2 < m_8 ) /*0x6dca61*/
          m_8 = a2; /*0x6dca63*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6dca69*/
          ++i; /*0x6dca6e*/
        if ( BYTE1(this->m_C) ) /*0x6dca7b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6dca86*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6dca8e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6dca97*/
      this->m_8 = a2; /*0x6dca9f*/
      BYTE1(this->m_C) = a3 == 0; /*0x6dcaa2*/
      return 1; /*0x6dcaa8*/
    }
    else
    {
      return 0; /*0x6dca4f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVShadowControlClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6dcab2*/
    return 1; /*0x6dcab8*/
  }
}



// ==== 0x006DCAC0  _VectorClass_PAVShadowControlClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UDirtyAreaStruct___16::ddtor(_VectorClass_PAVShadowControlClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6dcacd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6dcad3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6dcadb*/
  }
  BYTE1(this->m_C) = 0; /*0x6dcade*/
  this->m_8 = 0; /*0x6dcae1*/
}



// ==== 0x006DCAF0  _VectorClass_PAVShadowControlClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UDirtyAreaStruct___16::GetSize(_VectorClass_PAVShadowControlClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6dcaf0*/
    return 0; /*0x6dcaf8*/
  m_8 = this->m_8; /*0x6dcafe*/
  result = 0; /*0x6dcb01*/
  if ( m_8 <= 0 ) /*0x6dcb05*/
    return -1; /*0x6dcb1c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6dcb0b*/
  {
    if ( ++result >= m_8 ) /*0x6dcb1a*/
      return -1; /*0x6dcb1a*/
  }
  return result; /*0x6dcafa*/
}



// ==== 0x006DCB30  _VectorClass_PAVShadowControlClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UDirtyAreaStruct___16::GetCapacity(
        _VectorClass_PAVShadowControlClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6dcb30*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6dcb45*/
  else
    return 0; /*0x6dcb37*/
}



// ==== 0x006DCB50  _DynamicVectorClass_PAVShadowControlClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_UDirtyAreaStruct::SetCapacity_0(
        _DynamicVectorClass_PAVShadowControlClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6dcb5c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6dcb62*/
    if ( a3 ) /*0x6dcb68*/
      v4 = a3; /*0x6dcb7e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6dcb7a*/
    LOBYTE(this->m_C) = 1; /*0x6dcb82*/
    if ( !v4 ) /*0x6dcb86*/
      return 0; /*0x6dcbfa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6dcb88*/
    {
      m_8 = this->m_8; /*0x6dcb8f*/
      if ( a2 < m_8 ) /*0x6dcb94*/
        m_8 = a2; /*0x6dcb96*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6dcb9c*/
        ++i; /*0x6dcba1*/
      if ( BYTE1(this->m_C) ) /*0x6dcbae*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6dcbb9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6dcbc1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x6dcbca*/
    this->m_8 = a2; /*0x6dcbd2*/
    BYTE1(this->m_C) = a3 == 0; /*0x6dcbd5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVShadowControlClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6dcbde*/
  }
  v7 = this->m_8; /*0x6dcbe1*/
  if ( v7 < this->m_10 ) /*0x6dcbe9*/
    this->m_10 = v7; /*0x6dcbeb*/
  return 1; /*0x6dcbee*/
}



// ==== 0x006DCC00  _DynamicVectorClass_PAVShadowControlClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_UDirtyAreaStruct::FindItemIndex_0(
        _DynamicVectorClass_PAVShadowControlClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6dcc00*/
  result = 0; /*0x6dcc03*/
  if ( m_10 <= 0 ) /*0x6dcc08*/
    return -1; /*0x6dcc1f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6dcc0e*/
  {
    if ( ++result >= m_10 ) /*0x6dcc1d*/
      return -1; /*0x6dcc1d*/
  }
  return result; /*0x6dcc22*/
}



// ==== 0x006DCC30  _VectorClass_UDirtyAreaStruct::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UDirtyAreaStruct::QueryInterface(_VectorClass_UDirtyAreaStruct *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6dcc33*/
  *(_DWORD *)this->__pad_0 = &VectorClass<DirtyAreaStruct>::`vftable'; /*0x6dcc36*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6dcc40*/
  {
    __3_YAXPAX_Z(v3); /*0x6dcc48*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6dcc50*/
  }
  BYTE1(this->m_C) = 0; /*0x6dcc5b*/
  this->m_8 = 0; /*0x6dcc61*/
  if ( (a2 & 1) != 0 ) /*0x6dcc68*/
    __3_YAXPAX_Z(this); /*0x6dcc6b*/
  return this->__pad_0; /*0x6dcc75*/
}



// ==== 0x006DCC80  VectorClass_UDirtyAreaStruct::loc_6DCC80  this=VectorClass_UDirtyAreaStruct  sig=ida-proto ====
_DWORD *__thiscall VectorClass_UDirtyAreaStruct::loc_6DCC80(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6dcc83*/
  *Block = &g_ptr_7F42BC; /*0x6dcc86*/
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
_DWORD *__thiscall VectorClass_UDirtyAreaStruct___16::QueryInterface(_VectorClass_PAVShadowControlClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6dccd3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ShadowControlClass *>::`vftable'; /*0x6dccd6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6dcce0*/
  {
    __3_YAXPAX_Z(v3); /*0x6dcce8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6dccf0*/
  }
  BYTE1(this->m_C) = 0; /*0x6dccfb*/
  this->m_8 = 0; /*0x6dcd01*/
  if ( (a2 & 1) != 0 ) /*0x6dcd08*/
    __3_YAXPAX_Z(this); /*0x6dcd0b*/
  return this->__pad_0; /*0x6dcd15*/
}



// ==== 0x006DCD20  _DynamicVectorClass_PAVShadowControlClass::Constructor_VectorClass_ShadowControlClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_UDirtyAreaStruct::Constructor_VectorClass_ShadowControlClass___(
        _DynamicVectorClass_PAVShadowControlClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6dcd23*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ShadowControlClass *>::`vftable'; /*0x6dcd26*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6dcd30*/
  {
    __3_YAXPAX_Z(v3); /*0x6dcd38*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6dcd40*/
  }
  BYTE1(this->m_C) = 0; /*0x6dcd4b*/
  this->m_8 = 0; /*0x6dcd51*/
  if ( (a2 & 1) != 0 ) /*0x6dcd58*/
    __3_YAXPAX_Z(this); /*0x6dcd5b*/
  return this->__pad_0; /*0x6dcd65*/
}



// ==== 0x006DCD70  sub_6DCD70  this=-  sig=ida-proto ====
void sub_6DCD70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6dcd7c*/
  dbl_B0E688 = Math::Sqrt(v0 + v0); /*0x6dcd8e*/
}



// ==== 0x006DCDA0  sub_6DCDA0  this=-  sig=ida-proto ====
void sub_6DCDA0()
{
  dbl_B0E6D8 = dbl_B0E688 / 60.0; /*0x6dcdac*/
}



// ==== 0x006DCDC0  sub_6DCDC0  this=-  sig=ida-proto ====
void sub_6DCDC0()
{
  dbl_B0E6C0 = 1.0 / dbl_B0E6D8; /*0x6dcdcc*/
}



// ==== 0x006DCDE0  sub_6DCDE0  this=-  sig=ida-proto ====
void sub_6DCDE0()
{
  dbl_B0E6B8 = 0.0174532925199433 * 45.0; /*0x6dcdec*/
}



// ==== 0x006DCE00  sub_6DCE00  this=-  sig=ida-proto ====
void sub_6DCE00()
{
  dbl_B0E690 = 0.0174532925199433 * 60.0; /*0x6dce0c*/
}



// ==== 0x006DCE20  sub_6DCE20  this=-  sig=ida-proto ====
void sub_6DCE20()
{
  dbl_B0E650 = 0.0174532925199433 * 90.0; /*0x6dce2c*/
}



// ==== 0x006DCE40  sub_6DCE40  this=-  sig=ida-proto ====
__int64 sub_6DCE40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E650 - dbl_B0E690); /*0x6dce52*/
  result = Math::RoundToInt(v0 * dbl_B0E688 * 0.5); /*0x6dce66*/
  dword_B0E6E0 = result; /*0x6dce6b*/
  return result; /*0x6dce70*/
}



// ==== 0x006DCE80  sub_6DCE80  this=-  sig=ida-proto ====
void sub_6DCE80()
{
  dbl_B0E698 = Math::ArcTan((double)dword_B0E6E0 * 0.00390625); /*0x6dce97*/
}



// ==== 0x006DCEB0  sub_6DCEB0  this=-  sig=ida-proto ====
void sub_6DCEB0()
{
  dbl_B0E6B0 = Math::ArcTan((double)(2 * dword_B0E6E0) / dbl_B0E688); /*0x6dced2*/
}



// ==== 0x006DCEE0  sub_6DCEE0  this=-  sig=ida-proto ====
__int64 sub_6DCEE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E6E0) + 0.5); /*0x6dcefb*/
  dword_B0E6D4 = result; /*0x6dcf00*/
  return result; /*0x6dcf06*/
}



// ==== 0x006DCF10  sub_6DCF10  this=-  sig=ida-proto ====
int sub_6DCF10()
{
  dword_B0E680 = 0; /*0x6dcf12*/
  return 0; /*0x6dcf1e*/
}



// ==== 0x006DCF20  sub_6DCF20  this=-  sig=ida-proto ====
int sub_6DCF20()
{
  dword_B0E6A0 = 0; /*0x6dcf22*/
  dword_B0E6A4 = 0; /*0x6dcf27*/
  dword_B0E6A8 = 0; /*0x6dcf2c*/
  return 0; /*0x6dcf31*/
}



// ==== 0x006DCF40  sub_6DCF40  this=-  sig=ida-proto ====
int sub_6DCF40()
{
  dword_B0E6D0 = 0; /*0x6dcf45*/
  dword_B0E6C8 = 128; /*0x6dcf4f*/
  dword_B0E6CC = 128; /*0x6dcf54*/
  return 128; /*0x6dcf59*/
}



// ==== 0x006DCF60  sub_6DCF60  this=-  sig=ida-proto ====
int sub_6DCF60()
{
  dword_B0E670 = 0; /*0x6dcf62*/
  dword_B0E674 = 0; /*0x6dcf67*/
  dword_B0E678 = 0; /*0x6dcf6c*/
  dword_B0E67C = 0; /*0x6dcf71*/
  return 0; /*0x6dcf76*/
}



// ==== 0x006DCF80  sub_6DCF80  this=-  sig=ida-proto ====
int sub_6DCF80()
{
  dword_B0E65C = 0; /*0x6dcf87*/
  dword_B0E660 = 0; /*0x6dcf8c*/
  byte_B0E664 = 1; /*0x6dcf91*/
  byte_B0E665 = 0; /*0x6dcf98*/
  dword_B0E658 = (int)&off_7F43D0; /*0x6dcf9d*/
  dword_B0E66C = 10; /*0x6dcfa7*/
  dword_B0E668 = 0; /*0x6dcfb1*/
  return atexit(sub_6DCFC0); /*0x6dcfbc*/
}



// ==== 0x006DCFC0  sub_6DCFC0  this=-  sig=ida-proto ====
void __cdecl sub_6DCFC0()
{
  dword_B0E658 = (int)&VectorClass<TActionClass *>::`vftable'; /*0x6dcfc8*/
  if ( dword_B0E65C && byte_B0E665 ) /*0x6dcfdc*/
  {
    __3_YAXPAX_Z(dword_B0E65C); /*0x6dcfdf*/
    dword_B0E65C = 0; /*0x6dcfe7*/
  }
  byte_B0E665 = 0; /*0x6dcfed*/
  dword_B0E660 = 0; /*0x6dcff3*/
}



// ==== 0x006DD000  TActionClass::ctor  this=TActionClass  sig=csp ====
int __thiscall TActionClass::ctor(TActionClass *this)
{
  int v2; // ecx
  char v3; // al
  int v4; // eax
  TActionClass **v5; // edx
  int v6; // eax
  int v7; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6dd004*/
  this->idxArray = -1; /*0x6dd00b*/
  this->TActionClass_field_28 = 0; /*0x6dd012*/
  this->TActionClass_field_2C = 0; /*0x6dd015*/
  this->TActionClass_field_30 = 0; /*0x6dd018*/
  this->TActionClass_field_34 = 0; /*0x6dd01b*/
  this->TActionClass_field_38 = 0; /*0x6dd01e*/
  this->TActionClass_field_3C = 0; /*0x6dd021*/
  this->TActionClass_field_40 = 0; /*0x6dd024*/
  this->TActionClass_field_44 = 0; /*0x6dd027*/
  this->TActionClass_field_48 = 0; /*0x6dd02a*/
  this->TActionClass_field_4C = 0; /*0x6dd02d*/
  this->TActionClass_field_50 = 0; /*0x6dd030*/
  this->TActionClass_field_54 = 0; /*0x6dd033*/
  this->AbstractClass = &TActionClass::`vftable'; /*0x6dd036*/
  this->? = &TActionClass::`vftable'; /*0x6dd03c*/
  this->? = &TActionClass::`vftable'; /*0x6dd043*/
  this->? = &TActionClass::`vftable'; /*0x6dd04a*/
  v2 = dword_B0E668; /*0x6dd051*/
  if ( dword_B0E668 < dword_B0E660 /*0x6dd08f*/
    || (byte_B0E665 || !dword_B0E660)
    && dword_B0E66C > 0
    && (v3 = (*(int (__thiscall **)(int *, int, _DWORD))(dword_B0E658 + 8))(
               &dword_B0E658,
               dword_B0E660 + dword_B0E66C,
               0),
        v2 = dword_B0E668,
        v3) )
  {
    dword_B0E668 = v2 + 1; /*0x6dd094*/
    *((_DWORD *)dword_B0E65C + v2) = this; /*0x6dd0a0*/
    v2 = dword_B0E668; /*0x6dd0a3*/
  }
  v4 = 0; /*0x6dd0a9*/
  if ( v2 <= 0 ) /*0x6dd0ad*/
  {
LABEL_11:
    v4 = -1; /*0x6dd0c1*/
  }
  else
  {
    v5 = (TActionClass **)dword_B0E65C; /*0x6dd0af*/
    while ( *v5 != this ) /*0x6dd0b7*/
    {
      ++v4; /*0x6dd0b9*/
      ++v5; /*0x6dd0ba*/
      if ( v4 >= v2 ) /*0x6dd0bf*/
        goto LABEL_11; /*0x6dd0bf*/
    }
  }
  this->idxArray = v4; /*0x6dd0c4*/
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x6dd0fb*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v6 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x6dd108*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v6) = this; /*0x6dd117*/
  }
  if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x6dd14e*/
    || (BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
    && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
         0) )
  {
    v7 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x6dd15b*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v7) = this; /*0x6dd16a*/
  }
  this->TActionClass_field_6D = 0; /*0x6dd16d*/
  *(_DWORD *)&this->pad_6E[34] = 0; /*0x6dd170*/
  return (int)this; /*0x6dd178*/
}



// ==== 0x006DD2C0  TActionClass::ExecuteAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::ExecuteAction(TActionClass *this, int a2, int a3)
{
  void *TActionClass_field_28; // eax
  int result; // eax

  TActionClass_field_28 = this->TActionClass_field_28; /*0x6dd2c0*/
  if ( TActionClass_field_28 == (void *)a2 ) /*0x6dd2c9*/
    this->TActionClass_field_28 = (void *)*((_DWORD *)TActionClass_field_28 + 10); /*0x6dd2ce*/
  result = 0; /*0x6dd2d5*/
  if ( this->TActionClass_field_30 == (void *)a2 ) /*0x6dd2d9*/
    this->TActionClass_field_30 = 0; /*0x6dd2db*/
  if ( this->TActionClass_field_50 == (void *)a2 ) /*0x6dd2e1*/
    this->TActionClass_field_50 = 0; /*0x6dd2e3*/
  if ( this->TActionClass_field_4C == (void *)a2 ) /*0x6dd2ec*/
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
      v5 = a1_1; /*0x6dd416*/
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
               "%d,%d,%d,%d,%d,%d,%d,%d",
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
               "%d,%d,%s,%d,%d,%d,%d,%s",
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
               "%d,%d,%s,%d,%d,%d,%d,%d",
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
                 "%d,%d,%s,%d,%d,%d,%d,%s",
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
                 "%d,%d,%d,%d,%d,%d,%d,%s",
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
const char *__thiscall ScriptAction::ParseScriptActionParams(ScriptAction *this)
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

  *(_DWORD *)this->__pad_90 = 0; /*0x6dd5c1*/
  v2 = strtok(0, Str); /*0x6dd5c7*/
  *(_DWORD *)&this->__pad_28[4] = atoi(v2); /*0x6dd5d8*/
  v3 = strtok(0, Str); /*0x6dd5db*/
  v4 = atoi(v3); /*0x6dd5e6*/
  v5 = strtok(0, Str); /*0x6dd5f7*/
  v6 = atoi(v5); /*0x6dd5fa*/
  switch ( v4 ) /*0x6dd60d*/
  {
    case 0: /*0x6dd60d*/
    case 11: /*0x6dd60d*/
      *(_DWORD *)this->__pad_90 = v6; /*0x6dd614*/
      break; /*0x6dd61a*/
    case 1: /*0x6dd60d*/
    case 5: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd622*/
      {
        this->ScriptAction_field_0x30 = 0; /*0x6dd624*/
      }
      else if ( strlen(v5) >= 3 ) /*0x6dd63b*/
      {
        this->ScriptAction_field_0x30 = TechnoClass::Create(v5); /*0x6dd654*/
      }
      else
      {
        this->ScriptAction_field_0x30 = *(void **)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v6); /*0x6dd645*/
      }
      break; /*0x6dd627*/
    case 2: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd65f*/
      {
        *(_DWORD *)&this->__pad_34[28] = 0; /*0x6dd661*/
      }
      else if ( strlen(v5) >= 3 ) /*0x6dd678*/
      {
        *(_DWORD *)&this->__pad_34[28] = TagTypeClass::FindOrCreateTriggerType(v5); /*0x6dd691*/
      }
      else
      {
        *(_DWORD *)&this->__pad_34[28] = *(_DWORD *)(FootClass_Array.?[0] + 4 * v6); /*0x6dd682*/
      }
      break; /*0x6dd664*/
    case 3: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd69c*/
      {
        *(_DWORD *)&this->__pad_34[24] = 0; /*0x6dd69e*/
      }
      else if ( strlen(v5) >= 3 ) /*0x6dd6b5*/
      {
        *(_DWORD *)&this->__pad_34[24] = TagTypeClass::FindOrCreate(v5); /*0x6dd6cb*/
      }
      else
      {
        *(_DWORD *)&this->__pad_34[24] = *((_DWORD *)dword_B0E784 + v6); /*0x6dd6bf*/
      }
      break; /*0x6dd6a1*/
    case 4: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd6d3*/
      {
        this->__pad_34[57] = 0; /*0x6dd6d5*/
      }
      else
      {
        v7 = v5; /*0x6dd6de*/
        this->__pad_34[57] = 0; /*0x6dd6e2*/
        if ( v5 ) /*0x6dd6e5*/
        {
          for ( i = *v5; i; i = *++v7 ) /*0x6dd6e7*/
          {
            if ( (unsigned __int8)i > 0x20u ) /*0x6dd6f1*/
              break; /*0x6dd6f1*/
          }
          if ( *v7 ) /*0x6dd6fb*/
          {
            strncpy(&this->__pad_34[57], v7, 0x1Fu); /*0x6dd704*/
            LOBYTE(this->ScriptAction_field_0x8C) = 0; /*0x6dd711*/
            v9 = strlen(&this->__pad_34[57]) + 1; /*0x6dd718*/
            v10 = v9 - 1; /*0x6dd71c*/
            if ( v9 != 1 ) /*0x6dd71d*/
            {
              do /*0x6dd726*/
              {
                if ( this->__pad_34[v10 + 56] > 0x20u ) /*0x6dd723*/
                  break; /*0x6dd723*/
                --v10; /*0x6dd725*/
              }
              while ( v10 ); /*0x6dd726*/
            }
            this->__pad_34[v10 + 57] = 0; /*0x6dd728*/
          }
        }
      }
      break; /*0x6dd6d9*/
    case 6: /*0x6dd60d*/
      *(_DWORD *)this->__pad_90 = VocClass::FindByName((VocClass *)v5); /*0x6dd7c3*/
      break; /*0x6dd7c9*/
    case 7: /*0x6dd60d*/
      *(_DWORD *)this->__pad_90 = VocClass::FindIndex((VocClass *)v5); /*0x6dd7d5*/
      break; /*0x6dd7db*/
    case 8: /*0x6dd60d*/
      *(_DWORD *)this->__pad_90 = StringList::Find((StringList *)&unk_A83D10, v5); /*0x6dd7eb*/
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
      if ( Destination != &this->__pad_34[32] ) /*0x6dd81f*/
      {
        qmemcpy(&this->__pad_34[32], Destination, 0x18u); /*0x6dd82e*/
        this->__pad_34[56] = v17; /*0x6dd830*/
      }
      break; /*0x6dd831*/
    default:
      break;
  }
  v11 = strtok(0, Str); /*0x6dd731*/
  *(_DWORD *)this->__pad_34 = atoi(v11); /*0x6dd74a*/
  v12 = strtok(0, Str); /*0x6dd74d*/
  *(_DWORD *)&this->__pad_34[4] = atoi(v12); /*0x6dd75f*/
  v13 = strtok(0, Str); /*0x6dd762*/
  *(_DWORD *)&this->__pad_34[8] = atoi(v13); /*0x6dd774*/
  v14 = strtok(0, Str); /*0x6dd777*/
  *(_DWORD *)&this->__pad_34[12] = atoi(v14); /*0x6dd789*/
  result = strtok(0, Str); /*0x6dd78c*/
  if ( result ) /*0x6dd796*/
  {
    if ( v4 == 5 || v4 == 9 ) /*0x6dd839*/
    {
      result = (const char *)atoi(result); /*0x6dd7a6*/
      *(_DWORD *)this->__pad_90 = result; /*0x6dd7ae*/
    }
    else if ( v4 == 11 ) /*0x6dd855*/
    {
      result = (const char *)atoi(result); /*0x6dd858*/
      *(_DWORD *)&this->__pad_34[20] = result; /*0x6dd860*/
    }
    else
    {
      result = (const char *)String::To_Waypoint((char *)result); /*0x6dd86d*/
      *(_DWORD *)&this->__pad_34[16] = result; /*0x6dd872*/
    }
  }
  return result; /*0x6dd7b4*/
}



// ==== 0x006DD8B0  TerrainClass::ProcessUpdate  this=TerrainClass  sig=csp ====
char __userpurge TerrainClass::ProcessUpdate@<al>(
        int a1@<ecx>,
        _DWORD *a2@<edi>,
        _UNKNOWN **a3@<ebx>,
        double a4@<st0>,
        HouseClass *a5,
        int a6,
        _DWORD *a7,
        __int16 *a8)
{
  char result; // al
  int v10; // ecx
  int v11; // ebp
  _DWORD *v12; // eax
  ActionQueue *v13; // eax
  int v14; // esi
  char v15; // bl
  int n; // edi
  int v17; // esi
  LinkedList *v18; // ecx
  int v19; // edi
  int v20; // esi
  int v21; // edi
  int v22; // esi
  int v23; // ebx
  _DWORD *v24; // edi
  HouseClass *v25; // ecx
  int v26; // edi
  int *WorldCoords; // eax
  int v28; // edi
  int *v29; // eax
  int v30; // edi
  int *v31; // eax
  char v32; // bl
  int j; // edi
  int v34; // esi
  LinkedList *v35; // ecx
  char v36; // bl
  int k; // edi
  BuildingClass *v38; // esi
  LinkedList *attachedTag; // ecx
  char v40; // bl
  int m; // edi
  BuildingClass *v42; // esi
  LinkedList *v43; // ecx
  void *NeedsSaveOrLink; // eax
  wchar_t... [50325 chars total]


