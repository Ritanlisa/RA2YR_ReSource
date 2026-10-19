// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x007B0090  sub_7B0090  this=-  sig=ida-proto ====
int sub_7B0090()
{
  dword_B77F54 = 0; /*0x7b0095*/
  return atexit(sub_7B00B0); /*0x7b00a5*/
}



// ==== 0x007B00B0  sub_7B00B0  this=-  sig=ida-proto ====
void __cdecl sub_7B00B0()
{
  if ( dword_B77F54 ) /*0x7b00b7*/
  {
    __3_YAXPAX_Z(dword_B77F54); /*0x7b00ba*/
    dword_B77F54 = 0; /*0x7b00c2*/
  }
}



// ==== 0x007B00D0  sub_7B00D0  this=-  sig=ida-proto ====
int sub_7B00D0()
{
  dword_B77F60 = 0; /*0x7b00d5*/
  return atexit(sub_7B00F0); /*0x7b00e5*/
}



// ==== 0x007B00F0  sub_7B00F0  this=-  sig=ida-proto ====
void __cdecl sub_7B00F0()
{
  if ( dword_B77F60 ) /*0x7b00f7*/
  {
    __3_YAXPAX_Z(dword_B77F60); /*0x7b00fa*/
    dword_B77F60 = 0; /*0x7b0102*/
  }
}



// ==== 0x007B0110  sub_7B0110  this=-  sig=ida-proto ====
int sub_7B0110()
{
  ComPtr::Constructor(&dword_B77F58); /*0x7b0115*/
  dword_B77F58 = (int)&rc_ptr<WDTState>::`vftable'; /*0x7b011f*/
  return atexit(sub_7B0130); /*0x7b012f*/
}



// ==== 0x007B0130  sub_7B0130  this=-  sig=ida-proto ====
void __cdecl sub_7B0130()
{
  dword_B77F58 = (int)&rc_ptr<WDTState>::`vftable'; /*0x7b0130*/
  ComPtr::Release(&dword_B77F58); /*0x7b013f*/
}



// ==== 0x007B0150  sub_7B0150  this=-  sig=ida-proto ====
int sub_7B0150()
{
  ComPtr::Constructor(&dword_B77F70); /*0x7b0155*/
  dword_B77F70 = (int)&rc_ptr<WDTState>::`vftable'; /*0x7b015f*/
  return atexit(sub_7B0170); /*0x7b016f*/
}



// ==== 0x007B0170  sub_7B0170  this=-  sig=ida-proto ====
void __cdecl sub_7B0170()
{
  dword_B77F70 = (int)&rc_ptr<WDTState>::`vftable'; /*0x7b0170*/
  ComPtr::Release(&dword_B77F70); /*0x7b017f*/
}



// ==== 0x007B0190  sub_7B0190  this=-  sig=ida-proto ====
int sub_7B0190()
{
  ComPtr::Constructor(&stru_B77F68); /*0x7b0195*/
  stru_B77F68 = (int)&rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7b019f*/
  return atexit(sub_7B01B0); /*0x7b01af*/
}



// ==== 0x007B01B0  sub_7B01B0  this=-  sig=ida-proto ====
void __cdecl sub_7B01B0()
{
  stru_B77F68 = (int)&rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7b01b0*/
  ComPtr::Release(&stru_B77F68); /*0x7b01bf*/
}



// ==== 0x007B01D0  sub_7B01D0  this=-  sig=ida-proto ====
int sub_7B01D0()
{
  ComPtr::Constructor(&dword_B77F78); /*0x7b01d5*/
  dword_B77F78 = (int)&rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7b01df*/
  return atexit(sub_7B01F0); /*0x7b01ef*/
}



// ==== 0x007B01F0  sub_7B01F0  this=-  sig=ida-proto ====
void __cdecl sub_7B01F0()
{
  dword_B77F78 = (int)&rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7b01f0*/
  ComPtr::Release(&dword_B77F78); /*0x7b01ff*/
}



// ==== 0x007B0210  FindLobbyIDWOL_Find  this=-  sig=ida-proto ====
int *sub_7B0210()
{
  return &dword_B77F58; /*0x7b0215*/
}



// ==== 0x007B0220  ComStreamClass::seekToPosition  this=ComStreamClass  sig=csp ====
_DWORD *__thiscall ComStreamClass::seekToPosition(ComStreamClass *this)
{
  _DWORD *_76BE90; // eax
  _DWORD *v3; // eax
  rc_ptr v5[4]; // [esp+4h] [ebp-10h] BYREF
  rc_ptr v6[4]; // [esp+Ch] [ebp-8h] BYREF

  ComPtr::Set((ComPtr *)&stru_B77EB0.lineTrailer, this->ComStreamClass_field_0x04); /*0x7b022f*/
  _76BE90 = Audio_Create_76BE90(v6, (int)this); /*0x7b023a*/
  v3 = Audio_Create(v5, (const char **)&g_WindowManager.__pad_EC[684], (int)_76BE90); /*0x7b0249*/
  ComPtr::Set(&stru_B77F68, v3[1]); /*0x7b0257*/
  *(_DWORD *)v5 = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7b0260*/
  ComPtr::Release((ComPtr *)v5); /*0x7b0268*/
  *(_DWORD *)v6 = &rc_ptr<WorldDominationTour::CampaignProperties>::`vftable'; /*0x7b0271*/
  return ComPtr::Release((ComPtr *)v6); /*0x7b027e*/
}



// ==== 0x007B0290  sub_7B0290  this=-  sig=ida-proto ====
int *sub_7B0290()
{
  return &dword_B77F70; /*0x7b0295*/
}



// ==== 0x007B02A0  ComStreamClass::getStreamSize  this=ComStreamClass  sig=csp ====
_DWORD *__thiscall ComStreamClass::getStreamSize(ComStreamClass *this)
{
  _DWORD *_76BE90; // eax
  _DWORD *v3; // eax
  rc_ptr v5[4]; // [esp+4h] [ebp-10h] BYREF
  rc_ptr v6[4]; // [esp+Ch] [ebp-8h] BYREF

  ComPtr::Set((ComPtr *)&stru_B77F68.ComPtr_field_0x08, this->ComStreamClass_field_0x04); /*0x7b02af*/
  _76BE90 = Audio_Create_76BE90(v6, (int)this); /*0x7b02ba*/
  v3 = Audio_Create(v5, (const char **)&g_WindowManager.__pad_EC[684], (int)_76BE90); /*0x7b02c9*/
  ComPtr::Set((ComPtr *)&stru_B77F68.ComPtr_field_0x10, v3[1]); /*0x7b02d7*/
  *(_DWORD *)v5 = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7b02e0*/
  ComPtr::Release((ComPtr *)v5); /*0x7b02e8*/
  *(_DWORD *)v6 = &rc_ptr<WorldDominationTour::CampaignProperties>::`vftable'; /*0x7b02f1*/
  return ComPtr::Release((ComPtr *)v6); /*0x7b02fe*/
}



// ==== 0x007B0310  sub_7B0310  this=-  sig=ida-proto ====
void *sub_7B0310()
{
  return dword_B77F54; /*0x7b0315*/
}



// ==== 0x007B0340  sub_7B0340  this=-  sig=ida-proto ====
void *sub_7B0340()
{
  return dword_B77F60; /*0x7b0345*/
}



// ==== 0x007B0370  RequestMatchWOL_Helper  this=-  sig=ida-proto ====
int *sub_7B0370()
{
  return &stru_B77F68; /*0x7b0375*/
}



// ==== 0x007B0380  sub_7B0380  this=-  sig=ida-proto ====
int *sub_7B0380()
{
  return &dword_B77F78; /*0x7b0385*/
}



// ==== 0x007B0390  rc_ptr::FindWDTTerritoryClass  this=rc_ptr  sig=csp ====
_DWORD *__fastcall FindWDTTerritoryClass(rc_ptr *this, int a2)
{
  char v3; // bl
  _DWORD *v4; // edi
  _DWORD v6[2]; // [esp+Ch] [ebp-18h] BYREF
  _DWORD v7[4]; // [esp+14h] [ebp-10h] BYREF

  v3 = 0; /*0x7b03a2*/
  v7[3] = 0; /*0x7b03a6*/
  FindWDTTerritoryClass_Find((char *)stru_B77F68.ComPtr_field_0x04, v7, a2); /*0x7b03aa*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(v7[0] + 4))(v7) ) /*0x7b03b7*/
  {
    v4 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(v7[1] + 4) + 8 * v7[2] + 4) + 8); /*0x7b03d0*/
  }
  else
  {
    ComPtr::Constructor((ComPtr *)v6); /*0x7b03d9*/
    v6[0] = &rc_ptr<WDTTerritory>::`vftable'; /*0x7b03de*/
    v3 = 1; /*0x7b03e6*/
    v4 = v6; /*0x7b03eb*/
  }
  ComPtr::Constructor((ComPtr *)this); /*0x7b03f1*/
  *(_DWORD *)this = &rc_ptr<WDTTerritory>::`vftable'; /*0x7b03f6*/
  ComPtr::Set((ComPtr *)this, v4[1]); /*0x7b0402*/
  if ( (v3 & 1) != 0 ) /*0x7b040a*/
  {
    v6[0] = &rc_ptr<WDTTerritory>::`vftable'; /*0x7b0410*/
    ComPtr::Release((ComPtr *)v6); /*0x7b0418*/
  }
  return this; /*0x7b041f*/
}



// ==== 0x007B0430  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_23  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_23(std::codecvt_base *this)
{
  return 1; /*0x7b0432*/
}



// ==== 0x007B0440  FactionSelectDialogControl_WorldDominationTour::QueryInterface  this=FactionSelectDialogControl@WorldDominationTour  sig=csp ====
_DWORD *__thiscall StreamWrapper::QueryInterface(FactionSelectDialogControl_WorldDominationTour *this, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx

  v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 4); /*0x7b0443*/
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::FactionSelectDialogControl::`vftable'; /*0x7b0446*/
  if ( v3 ) /*0x7b044e*/
    (**v3)(v3, 1); /*0x7b0454*/
  v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 5); /*0x7b0456*/
  if ( v4 ) /*0x7b045b*/
    (**v4)(v4, 1); /*0x7b0461*/
  v5 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 6); /*0x7b0463*/
  if ( v5 ) /*0x7b0468*/
    (**v5)(v5, 1); /*0x7b046e*/
  OwnerDrawControl::InitVtable((OwnerDrawControl *)this); /*0x7b0472*/
  if ( (a2 & 1) != 0 ) /*0x7b047c*/
    __3_YAXPAX_Z(this); /*0x7b047f*/
  return this->__pad_0; /*0x7b0489*/
}



// ==== 0x007B0490  FactionSelectDialogControl@WorldDominationTour::Team_Start_7B0490  this=FactionSelectDialogControl@WorldDominationTour  sig=csp ====
_DWORD *__thiscall sub_7B0490(_DWORD *this)
{
  _DWORD v3[22]; // [esp+8h] [ebp-6Ch] BYREF
  _BYTE v4[12]; // [esp+60h] [ebp-14h] BYREF
  int v5; // [esp+6Ch] [ebp-8h]

  SimpleDialogControl::Constructor(this); /*0x7b0497*/
  *(this + 3) = 0; /*0x7b04a7*/
  *(this + 4) = 0; /*0x7b04aa*/
  *(this + 5) = 0; /*0x7b04ad*/
  *(this + 6) = 0; /*0x7b04b0*/
  *this = &WorldDominationTour::FactionSelectDialogControl::`vftable'; /*0x7b04b3*/
  CCFileClass::Construct(v3, aWdtfsbsmPcx); /*0x7b04b9*/
  *(this + 4) = DecodeFrameSHP((int)v3, 0, 0, 0); /*0x7b04cf*/
  v3[0] = &CCFileClass::`vftable'; /*0x7b04d2*/
  v5 = 0; /*0x7b04da*/
  Vector::Clear((int)v4); /*0x7b04de*/
  v3[0] = &off_7E1668; /*0x7b04e7*/
  BufferIOFileClass::Dtor(v3); /*0x7b04ef*/
  if ( !*(this + 5) ) /*0x7b04f4*/
  {
    CCFileClass::Construct(v3, aWdtfsasmPcx); /*0x7b0502*/
    *(this + 5) = DecodeFrameSHP((int)v3, 0, 0, 0); /*0x7b0518*/
    v3[0] = &CCFileClass::`vftable'; /*0x7b051b*/
    v5 = 0; /*0x7b0523*/
    Vector::Clear((int)v4); /*0x7b0527*/
    v3[0] = &off_7E1668; /*0x7b0530*/
    BufferIOFileClass::Dtor(v3); /*0x7b0538*/
  }
  if ( !*(this + 6) ) /*0x7b053d*/
  {
    CCFileClass::Construct(v3, aWdtfsssmPcx); /*0x7b054b*/
    *(this + 6) = DecodeFrameSHP((int)v3, 0, 0, 0); /*0x7b0561*/
    v3[0] = &CCFileClass::`vftable'; /*0x7b0564*/
    v5 = 0; /*0x7b056c*/
    Vector::Clear((int)v4); /*0x7b0570*/
    v3[0] = &off_7E1668; /*0x7b0579*/
    BufferIOFileClass::Dtor(v3); /*0x7b0581*/
  }
  *(this + 7) = *(this + 4); /*0x7b058a*/
  return this; /*0x7b0589*/
}



// ==== 0x007B05A0  sub_7B05A0  this=-  sig=ida-proto ====
int sub_7B05A0()
{
  dword_B77FA0 = 0; /*0x7b05a2*/
  dword_B77FA4 = 0; /*0x7b05a7*/
  dword_B77FA8 = 0; /*0x7b05ac*/
  dword_B77FAC = 0; /*0x7b05b1*/
  return 0; /*0x7b05b6*/
}



// ==== 0x007B05C0  CompressScreenshot  this=-  sig=csp ====
char __fastcall Screenshot_Compress(int *a1, int *a2, void *Src)
{
  int v5; // ebx
  int v6; // eax
  __int16 v7; // ax
  int v8; // edx
  __int16 v9; // ax
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  __int16 v15; // ax
  int v16; // edx
  size_t v17; // eax
  void *v18; // eax
  int v19; // edx
  size_t v20; // eax
  size_t v21; // eax
  void *v22; // eax
  int v23; // edx
  int v24; // eax
  char *v25; // ebx
  int v26; // edx
  _BYTE *v27; // edi
  unsigned __int16 v28; // bx
  char v29; // al
  char v30; // dl
  int v31; // eax
  int v32; // edi
  int v33; // edi
  char *v35; // edi
  char v36; // al
  char v37; // dl
  char v38; // cl
  int v39; // edx
  int v40; // edx
  int v41; // edx
  int v42; // [esp+30h] [ebp-3C0h]
  char v43; // [esp+43h] [ebp-3ADh] BYREF
  char v44; // [esp+44h] [ebp-3ACh] BYREF
  char v45; // [esp+45h] [ebp-3ABh]
  char v46; // [esp+46h] [ebp-3AAh] BYREF
  char v47; // [esp+47h] [ebp-3A9h] BYREF
  int v48; // [esp+48h] [ebp-3A8h]
  void *v49; // [esp+4Ch] [ebp-3A4h]
  int v50; // [esp+50h] [ebp-3A0h]
  void *v51; // [esp+54h] [ebp-39Ch]
  unsigned __int16 *v52; // [esp+58h] [ebp-398h]
  void *Block; // [esp+5Ch] [ebp-394h]
  _BYTE v54[4]; // [esp+60h] [ebp-390h] BYREF
  __int16 v55; // [esp+64h] [ebp-38Ch]
  __int16 v56; // [esp+66h] [ebp-38Ah]
  __int16 v57; // [esp+68h] [ebp-388h]
  unsigned __int16 v58; // [esp+6Ah] [ebp-386h]
  __int16 v59; // [esp+6Ch] [ebp-384h]
  __int16 v60; // [esp+6Eh] [ebp-382h]
  char v61; // [esp+70h] [ebp-380h]
  char v62; // [esp+71h] [ebp-37Fh]
  char v63; // [esp+72h] [ebp-37Eh]
  char v64; // [esp+73h] [ebp-37Dh]
  char v65; // [esp+74h] [ebp-37Ch]
  char v66; // [esp+75h] [ebp-37Bh]
  char v67; // [esp+76h] [ebp-37Ah]
  char v68; // [esp+77h] [ebp-379h]
  char v69; // [esp+78h] [ebp-378h]
  char v70; // [esp+79h] [ebp-377h]
  char v71; // [esp+7Ah] [ebp-376h]
  char v72; // [esp+7Bh] [ebp-375h]
  char v73; // [esp+7Ch] [ebp-374h]
  char v74; // [esp+7Dh] [ebp-373h]
  char v75; // [esp+7Eh] [ebp-372h]
  char v76; // [esp+7Fh] [ebp-371h]
  char v77; // [esp+80h] [ebp-370h]
  char v78; // [esp+81h] [ebp-36Fh]
  char v79; // [esp+82h] [ebp-36Eh]
  char v80; // [esp+83h] [ebp-36Dh]
  char v81; // [esp+84h] [ebp-36Ch]
  char v82; // [esp+85h] [ebp-36Bh]
  char v83; // [esp+86h] [ebp-36Ah]
  char v84; // [esp+87h] [ebp-369h]
  char v85; // [esp+88h] [ebp-368h]
  char v86; // [esp+89h] [ebp-367h]
  char v87; // [esp+8Ah] [ebp-366h]
  char v88; // [esp+8Bh] [ebp-365h]
  char v89; // [esp+8Ch] [ebp-364h]
  char v90; // [esp+8Dh] [ebp-363h]
  int v91; // [esp+8Eh] [ebp-362h]
  char v92; // [esp+92h] [ebp-35Eh]
  char v93; // [esp+93h] [ebp-35Dh]
  char v94; // [esp+94h] [ebp-35Ch]
  char v95; // [esp+95h] [ebp-35Bh]
  char v96; // [esp+96h] [ebp-35Ah]
  char v97; // [esp+97h] [ebp-359h]
  char v98; // [esp+98h] [ebp-358h]
  char v99; // [esp+99h] [ebp-357h]
  char v100; // [esp+9Ah] [ebp-356h]
  char v101; // [esp+9Bh] [ebp-355h]
  char v102; // [esp+9Ch] [ebp-354h]
  char v103; // [esp+9Dh] [ebp-353h]
  char v104; // [esp+9Eh] [ebp-352h]
  char v105; // [esp+9Fh] [ebp-351h]
  char v106; // [esp+A0h] [ebp-350h]
  char v107; // [esp+A1h] [ebp-34Fh]
  unsigned __int16 v108; // [esp+A2h] [ebp-34Eh]
  __int16 v109; // [esp+A4h] [ebp-34Ch]
  __int16 v110; // [esp+A6h] [ebp-34Ah]
  __int16 v111; // [esp+A8h] [ebp-348h]
  char v112; // [esp+AAh] [ebp-346h]
  _BYTE v113[53]; // [esp+ABh] [ebp-345h] BYREF
  int v114; // [esp+E0h] [ebp-310h]
  int v115; // [esp+E4h] [ebp-30Ch]
  char *v116; // [esp+E8h] [ebp-308h]
  _BYTE v117[768]; // [esp+F0h] [ebp-300h] BYREF

  v5 = 0; /*0x7b05cd*/
  v6 = *a2; /*0x7b05cf*/
  v54[0] = 10; /*0x7b05d4*/
  v54[1] = 5; /*0x7b05d9*/
  v54[2] = 1; /*0x7b05de*/
  v54[3] = 8; /*0x7b05e3*/
  v55 = 0; /*0x7b05e8*/
  v56 = 0; /*0x7b05ed*/
  v7 = (*(int (__thiscall **)(int *))(v6 + 124))(a2); /*0x7b05f2*/
  v8 = *a2; /*0x7b05f5*/
  v57 = v7 - 1; /*0x7b05fa*/
  v58 = (*(int (__thiscall **)(int *))(v8 + 128))(a2) - 1; /*0x7b0608*/
  v9 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x7b060f*/
  v10 = *a2; /*0x7b0612*/
  v59 = v9; /*0x7b0616*/
  v60 = (*(int (__thiscall **)(int *))(v10 + 128))(a2); /*0x7b0621*/
  v11 = *a2; /*0x7b0626*/
  v61 = 0; /*0x7b0628*/
  v62 = 0; /*0x7b062c*/
  v63 = 0; /*0x7b0630*/
  v64 = 0; /*0x7b0634*/
  v65 = 0; /*0x7b0638*/
  v66 = 0; /*0x7b063c*/
  v67 = 0; /*0x7b0640*/
  v68 = 0; /*0x7b0644*/
  v69 = 0; /*0x7b0648*/
  v70 = 0; /*0x7b064c*/
  v71 = 0; /*0x7b0650*/
  v72 = 0; /*0x7b0654*/
  v73 = 0; /*0x7b0658*/
  v74 = 0; /*0x7b065c*/
  v75 = 0; /*0x7b0660*/
  v76 = 0; /*0x7b0664*/
  v77 = 0; /*0x7b0668*/
  v78 = 0; /*0x7b066c*/
  v79 = 0; /*0x7b0670*/
  v80 = 0; /*0x7b0674*/
  v81 = 0; /*0x7b0678*/
  v82 = 0; /*0x7b067c*/
  v83 = 0; /*0x7b0680*/
  v84 = 0; /*0x7b0684*/
  v85 = 0; /*0x7b0688*/
  v86 = 0; /*0x7b068c*/
  v87 = 0; /*0x7b0690*/
  v88 = 0; /*0x7b0694*/
  v89 = 0; /*0x7b0698*/
  v90 = 0; /*0x7b069c*/
  v91 = 0; /*0x7b06a0*/
  v92 = 0; /*0x7b06b0*/
  v93 = 0; /*0x7b06b4*/
  v94 = 0; /*0x7b06b8*/
  v95 = 0; /*0x7b06bc*/
  v96 = 0; /*0x7b06c0*/
  v97 = 0; /*0x7b06c4*/
  v98 = 0; /*0x7b06c8*/
  v99 = 0; /*0x7b06cc*/
  v100 = 0; /*0x7b06d0*/
  v101 = 0; /*0x7b06d4*/
  v102 = 0; /*0x7b06d8*/
  v103 = 0; /*0x7b06dc*/
  v104 = 0; /*0x7b06e0*/
  v105 = 0; /*0x7b06e4*/
  v106 = 0; /*0x7b06e8*/
  v12 = (*(int (__thiscall **)(int *))(v11 + 112))(a2); /*0x7b06ee*/
  v13 = *a2; /*0x7b06f4*/
  v107 = v12 != 2 ? 1 : 3;
  v108 = (*(int (__thiscall **)(int *))(v13 + 124))(a2); /*0x7b0707*/
  v14 = *a2; /*0x7b070c*/
  v109 = 1; /*0x7b0710*/
  v15 = (*(int (__thiscall **)(int *))(v14 + 124))(a2); /*0x7b0717*/
  v16 = *a2; /*0x7b071a*/
  v110 = v15; /*0x7b071e*/
  v111 = (*(int (__thiscall **)(int *))(v16 + 128))(a2); /*0x7b0729*/
  v112 = 0; /*0x7b0739*/
  v45 = 0; /*0x7b073d*/
  memset(v113, 0, sizeof(v113)); /*0x7b0741*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(*a1 + 24))(a1) ) /*0x7b0749*/
  {
    (*(void (__thiscall **)(int *, int))(*a1 + 28))(a1, 2); /*0x7b0757*/
    v45 = 1; /*0x7b075a*/
  }
  (*(void (__thiscall **)(int *, _BYTE *, int))(*a1 + 48))(a1, v54, 128); /*0x7b076e*/
  if ( (*(int (__thiscall **)(int *))(*a2 + 112))(a2) != 2 ) /*0x7b077b*/
  {
    if ( v58 + 1 <= 0 ) /*0x7b097c*/
      goto LABEL_33; /*0x7b097c*/
    v116 = 0; /*0x7b0982*/
    while ( 1 ) /*0x7b0999*/
    {
      v35 = (char *)(*(int (__thiscall **)(int *, char *, int))(*a2 + 92))(a2, v116, v5); /*0x7b0999*/
      v36 = 1; /*0x7b099b*/
      v37 = *v35; /*0x7b09a1*/
      v43 = *v35; /*0x7b09ac*/
      if ( v108 > 1u ) /*0x7b09b0*/
      {
        v48 = v108 - 1; /*0x7b09b7*/
        do /*0x7b0a3a*/
        {
          v38 = *++v35; /*0x7b09bb*/
          v46 = v38; /*0x7b09c1*/
          if ( v38 == v37 ) /*0x7b09c5*/
          {
            if ( ++v36 == 47 ) /*0x7b09cb*/
            {
              (*(void (__thiscall **)(int *, char *, int))(*a1 + 48))(a1, &byte_7F7930, 1); /*0x7b09d9*/
              (*(void (__thiscall **)(int *, char *, int))(*a1 + 48))(a1, &v46, 1); /*0x7b09e8*/
              v36 = 0; /*0x7b09eb*/
              v37 = v43; /*0x7b09ed*/
            }
          }
          else
          {
            if ( v36 ) /*0x7b09f5*/
            {
              if ( v36 != 1 || (v37 & 0xC0) == 0xC0 ) /*0x7b0a01*/
              {
                v39 = *a1; /*0x7b0a03*/
                v44 = v36 | 0xC0; /*0x7b0a08*/
                (*(void (__thiscall **)(int *, char *, int))(v39 + 48))(a1, &v44, 1); /*0x7b0a15*/
              }
              (*(void (__thiscall **)(int *, char *, int))(*a1 + 48))(a1, &v43, 1); /*0x7b0a24*/
            }
            v37 = v46; /*0x7b0a27*/
            v36 = 1; /*0x7b0a2b*/
            v43 = v46; /*0x7b0a2d*/
          }
          --v48; /*0x7b0a36*/
        }
        while ( v48 ); /*0x7b0a3a*/
        if ( !v36 ) /*0x7b0a42*/
          goto LABEL_32; /*0x7b0a42*/
        if ( v36 != 1 ) /*0x7b0a46*/
          goto LABEL_30; /*0x7b0a46*/
      }
      if ( (v37 & 0xC0) == 0xC0 ) /*0x7b0a4e*/
      {
LABEL_30:
        v40 = *a1; /*0x7b0a50*/
        v44 = v36 | 0xC0; /*0x7b0a55*/
        (*(void (__thiscall **)(int *, char *, int))(v40 + 48))(a1, &v44, 1); /*0x7b0a62*/
      }
      (*(void (__thiscall **)(int *, char *, int))(*a1 + 48))(a1, &v43, 1); /*0x7b0a71*/
LABEL_32:
      (*(void (__thiscall **)(int *))(*a2 + 96))(a2); /*0x7b0a74*/
      if ( ++v5 >= v58 + 1 ) /*0x7b0a88*/
        goto LABEL_33; /*0x7b0a88*/
    }
  }
  v17 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x7b0785*/
  v18 = __2_YAPAXI_Z(v17); /*0x7b0789*/
  v19 = *a2; /*0x7b078e*/
  Block = v18; /*0x7b0795*/
  v20 = (*(int (__thiscall **)(int *))(v19 + 124))(a2); /*0x7b0799*/
  v49 = __2_YAPAXI_Z(v20); /*0x7b07a2*/
  v21 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x7b07ad*/
  v22 = __2_YAPAXI_Z(v21); /*0x7b07b1*/
  v23 = *a2; /*0x7b07b6*/
  v51 = v22; /*0x7b07bd*/
  v24 = (*(int (__thiscall **)(int *))(v23 + 124))(a2); /*0x7b07c1*/
  v25 = (char *)__2_YAPAXI_Z(10 * v24); /*0x7b07dc*/
  v116 = v25; /*0x7b07df*/
  v50 = 0; /*0x7b07e8*/
  if ( v58 + 1 <= 0 ) /*0x7b07f0*/
  {
LABEL_11:
    __3_YAXPAX_Z(Block); /*0x7b0934*/
    __3_YAXPAX_Z(v49); /*0x7b0943*/
    __3_YAXPAX_Z(v51); /*0x7b094d*/
    __3_YAXPAX_Z(v25); /*0x7b0953*/
LABEL_33:
    v41 = *a1; /*0x7b0a8e*/
    v47 = 12; /*0x7b0a9a*/
    (*(void (__thiscall **)(int *, char *, int))(v41 + 48))(a1, &v47, 1); /*0x7b0a9f*/
    if ( (*(int (__thiscall **)(int *))(*a2 + 112))(a2) == 1 ) /*0x7b0aac*/
    {
      memcpy(v117, Src, sizeof(v117)); /*0x7b0ac3*/
      (*(void (__thiscall **)(int *, _BYTE *, int))(*a1 + 48))(a1, v117, 768); /*0x7b0add*/
    }
    if ( v45 ) /*0x7b0ae6*/
      (*(void (__thiscall **)(int *))(*a1 + 52))(a1); /*0x7b0aed*/
    return 0; /*0x7b0af3*/
  }
  while ( 1 ) /*0x7b0807*/
  {
    v52 = (unsigned __int16 *)(*(int (__thiscall **)(int *, _DWORD, int))(*a2 + 92))(a2, 0, v50); /*0x7b0807*/
    if ( !v52 ) /*0x7b080b*/
      return 1; /*0x7b0960*/
    v26 = *a2; /*0x7b0811*/
    v48 = 0; /*0x7b0815*/
    if ( (*(int (__thiscall **)(int *))(v26 + 124))(a2) > 0 ) /*0x7b0822*/
    {
      v27 = v49; /*0x7b0828*/
      v114 = (_BYTE *)Block - (_BYTE *)v49; /*0x7b0834*/
      v115 = (_BYTE *)v51 - (_BYTE *)v49; /*0x7b0841*/
      do /*0x7b08b9*/
      {
        v28 = *v52++; /*0x7b0853*/
        v29 = (unsigned __int8)(v28 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x7b086a*/
        v30 = (unsigned __int8)(v28 >> g_BitMask_Green) << g_BitMask_Blue; /*0x7b087c*/
        LOBYTE(v28) = (unsigned __int8)(v28 >> g_BitShift_Blue) << g_BitMask_Red; /*0x7b088e*/
        v27[v114] = v29; /*0x7b0897*/
        *v27 = v30; /*0x7b089a*/
        v27[v115] = v28; /*0x7b08a5*/
        v31 = *a2; /*0x7b08ac*/
        ++v48; /*0x7b08af*/
        ++v27; /*0x7b08b3*/
      }
      while ( v48 < (*(int (__thiscall **)(int *))(v31 + 124))(a2) ); /*0x7b08b9*/
      v25 = v116; /*0x7b08bb*/
    }
    (*(void (__thiscall **)(int *))(*a2 + 96))(a2); /*0x7b08c6*/
    (*(void (__thiscall **)(int *, char *))(*a2 + 124))(a2, v25); /*0x7b08ce*/
    v32 = EncodeScreenshotRLE(v42); /*0x7b08de*/
    (*(void (__thiscall **)(int *))(*a2 + 124))(a2); /*0x7b08e6*/
    v33 = EncodeScreenshotRLE(&v25[v32]) + v32; /*0x7b08f6*/
    (*(void (__thiscall **)(int *))(*a2 + 124))(a2); /*0x7b08fe*/
    v42 = EncodeScreenshotRLE(&v25[v33]) + v33; /*0x7b0911*/
    (*(void (__thiscall **)(int *, char *))(*a1 + 48))(a1, v25); /*0x7b0915*/
    if ( ++v50 >= v58 + 1 ) /*0x7b092e*/
      goto LABEL_11; /*0x7b092e*/
  }
}



// ==== 0x007B0B00  EncodeScreenshotRLE  this=-  sig=csp ====
int __fastcall Screenshot_EncodeRLE(int a1, char *a2, int a3)
{
  int result; // eax
  char v5; // dl
  char v6; // bl
  int v7; // ebp
  char v8; // cl
  int v9; // eax
  int v10; // eax

  result = 0; /*0x7b0b09*/
  v5 = 1; /*0x7b0b0e*/
  v6 = *a2; /*0x7b0b10*/
  if ( a1 <= 1 ) /*0x7b0b12*/
  {
LABEL_15:
    if ( (v6 & 0xC0) != 0xC0 ) /*0x7b0b82*/
    {
LABEL_17:
      *(_BYTE *)(result + a3) = v6; /*0x7b0b8b*/
      return ++result; /*0x7b0b8e*/
    }
LABEL_16:
    *(_BYTE *)(result + a3) = v5 | 0xC0; /*0x7b0b84*/
    ++result; /*0x7b0b8a*/
    goto LABEL_17; /*0x7b0b8a*/
  }
  v7 = a1 - 1; /*0x7b0b15*/
  do /*0x7b0b6e*/
  {
    v8 = *++a2; /*0x7b0b18*/
    if ( v8 == v6 ) /*0x7b0b22*/
    {
      if ( ++v5 == 47 ) /*0x7b0b29*/
      {
        *(_BYTE *)(result + a3) = -17; /*0x7b0b31*/
        v9 = result + 1; /*0x7b0b34*/
        *(_BYTE *)(v9 + a3) = v8; /*0x7b0b35*/
        result = v9 + 1; /*0x7b0b38*/
        v5 = 0; /*0x7b0b39*/
      }
    }
    else
    {
      if ( v5 ) /*0x7b0b3f*/
      {
        if ( v5 != 1 || (v6 & 0xC0) == 0xC0 ) /*0x7b0b4e*/
        {
          *(_BYTE *)(result + a3) = v5 | 0xC0; /*0x7b0b61*/
          v10 = result + 1; /*0x7b0b64*/
          *(_BYTE *)(v10 + a3) = v6; /*0x7b0b65*/
          result = v10 + 1; /*0x7b0b68*/
        }
        else
        {
          *(_BYTE *)(result + a3) = v6; /*0x7b0b54*/
          ++result; /*0x7b0b57*/
        }
      }
      v6 = v8; /*0x7b0b69*/
      v5 = 1; /*0x7b0b6b*/
    }
    --v7; /*0x7b0b6d*/
  }
  while ( v7 ); /*0x7b0b6e*/
  if ( v5 ) /*0x7b0b73*/
  {
    if ( v5 != 1 ) /*0x7b0b78*/
      goto LABEL_16; /*0x7b0b78*/
    goto LABEL_15; /*0x7b0b78*/
  }
  return result; /*0x7b0b8f*/
}



// ==== 0x007B0BA0  sub_7B0BA0  this=-  sig=ida-proto ====
void sub_7B0BA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7b0bac*/
  dbl_B77FC0 = Math::Sqrt(v0 + v0); /*0x7b0bbe*/
}



// ==== 0x007B0BD0  sub_7B0BD0  this=-  sig=ida-proto ====
void sub_7B0BD0()
{
  dbl_B78010 = dbl_B77FC0 / 60.0; /*0x7b0bdc*/
}



// ==== 0x007B0BF0  sub_7B0BF0  this=-  sig=ida-proto ====
void sub_7B0BF0()
{
  dbl_B77FF8 = 1.0 / dbl_B78010; /*0x7b0bfc*/
}



// ==== 0x007B0C10  sub_7B0C10  this=-  sig=ida-proto ====
void sub_7B0C10()
{
  dbl_B77FF0 = 0.0174532925199433 * 45.0; /*0x7b0c1c*/
}



// ==== 0x007B0C30  sub_7B0C30  this=-  sig=ida-proto ====
void sub_7B0C30()
{
  dbl_B77FC8 = 0.0174532925199433 * 60.0; /*0x7b0c3c*/
}



// ==== 0x007B0C50  sub_7B0C50  this=-  sig=ida-proto ====
void sub_7B0C50()
{
  dbl_B77FB0 = 0.0174532925199433 * 90.0; /*0x7b0c5c*/
}



// ==== 0x007B0C70  sub_7B0C70  this=-  sig=ida-proto ====
__int64 sub_7B0C70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B77FB0 - dbl_B77FC8); /*0x7b0c82*/
  result = Math::RoundToInt(v0 * dbl_B77FC0 * 0.5); /*0x7b0c96*/
  dword_B78018 = result; /*0x7b0c9b*/
  return result; /*0x7b0ca0*/
}



// ==== 0x007B0CB0  sub_7B0CB0  this=-  sig=ida-proto ====
void sub_7B0CB0()
{
  dbl_B77FD0 = Math::ArcTan((double)dword_B78018 * 0.00390625); /*0x7b0cc7*/
}



// ==== 0x007B0CE0  sub_7B0CE0  this=-  sig=ida-proto ====
void sub_7B0CE0()
{
  dbl_B77FE8 = Math::ArcTan((double)(2 * dword_B78018) / dbl_B77FC0); /*0x7b0d02*/
}



// ==== 0x007B0D10  sub_7B0D10  this=-  sig=ida-proto ====
__int64 sub_7B0D10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B78018) + 0.5); /*0x7b0d2b*/
  dword_B7800C = result; /*0x7b0d30*/
  return result; /*0x7b0d36*/
}



// ==== 0x007B0D40  sub_7B0D40  this=-  sig=ida-proto ====
int sub_7B0D40()
{
  word_B77FB8 = 0; /*0x7b0d42*/
  word_B77FBA = 0; /*0x7b0d48*/
  return 0; /*0x7b0d4e*/
}



// ==== 0x007B0D50  sub_7B0D50  this=-  sig=ida-proto ====
int sub_7B0D50()
{
  dword_B77FD8 = 0; /*0x7b0d52*/
  dword_B77FDC = 0; /*0x7b0d57*/
  dword_B77FE0 = 0; /*0x7b0d5c*/
  return 0; /*0x7b0d61*/
}



// ==== 0x007B0D70  sub_7B0D70  this=-  sig=ida-proto ====
int sub_7B0D70()
{
  dword_B78008 = 0; /*0x7b0d75*/
  dword_B78000 = 128; /*0x7b0d7f*/
  dword_B78004 = 128; /*0x7b0d84*/
  return 128; /*0x7b0d89*/
}



// ==== 0x007B0D90  IPXInterfaceClass::Construct  this=IPXInterfaceClass  sig=csp ====
_DWORD *__thiscall IPXInterfaceClass::Construct(IPXInterfaceClass *this)
{
  IPXInterfaceClass::bindSocket((char *)this); /*0x7b0d93*/
  this->Socket = (int)&IPXInterfaceClass::`vftable'; /*0x7b0da4*/
  *((_DWORD *)this + 64703) = -1; /*0x7b0dad*/
  *((_DWORD *)this + 64704) = -1; /*0x7b0db3*/
  *((_WORD *)this + 129410) = -1; /*0x7b0db8*/
  *(_DWORD *)((char *)this + 258822) = -1; /*0x7b0dc2*/
  *((_WORD *)this + 129413) = -1; /*0x7b0dc8*/
  return &this->Socket; /*0x7b0dce*/
}



// ==== 0x007B0DD0  IPXInterfaceClass::initSocket  this=IPXInterfaceClass  sig=csp ====
int __thiscall IPXInterfaceClass::initSocket(IPXInterfaceClass *this, int a2, int a3)
{
  SOCKET v4; // esi
  int v6; // eax
  __int16 v7; // dx
  char optval[4]; // [esp+Ch] [ebp-34h] BYREF
  int optlen; // [esp+10h] [ebp-30h] BYREF
  int v10; // [esp+14h] [ebp-2Ch] BYREF
  struct sockaddr name; // [esp+18h] [ebp-28h] BYREF
  char v12[24]; // [esp+28h] [ebp-18h] BYREF

  v4 = socket(6, 2, 1000); /*0x7b0de6*/
  if ( v4 == -1 ) /*0x7b0deb*/
    return 0; /*0x7b0df5*/
  memset(name.sa_data, 0, 12); /*0x7b0dfe*/
  name.sa_family = 6; /*0x7b0e13*/
  if ( bind(v4, &name, 14) == -1 ) /*0x7b0e22*/
  {
    closesocket(v4); /*0x7b0e25*/
    return 0; /*0x7b0e32*/
  }
  *(_DWORD *)optval = 1; /*0x7b0e44*/
  optlen = 4; /*0x7b0e4e*/
  if ( stru_887598.onBridge && stru_887598.AbstractClass == (void *)4 && !stru_887598.? ) /*0x7b0e63*/
  {
    Debug::Log(); /*0x7b0eae*/
  }
  else if ( getsockopt(v4, 1000, 16397, optval, &optlen) ) /*0x7b0e7a*/
  {
    WSAGetLastError(); /*0x7b0e94*/
    Debug::Log(); /*0x7b0e9f*/
  }
  else if ( a2 >= *(int *)optval ) /*0x7b0e87*/
  {
    return 0; /*0x7b0e91*/
  }
  memset(v12, 0, sizeof(v12)); /*0x7b0ec2*/
  *(_DWORD *)v12 = a2; /*0x7b0ed9*/
  v10 = 24; /*0x7b0edd*/
  if ( getsockopt(v4, 1000, 16391, v12, &v10) == -1 ) /*0x7b0eee*/
  {
    WSAGetLastError(); /*0x7b0ef0*/
    Debug::Log(); /*0x7b0efc*/
    closesocket(v4); /*0x7b0f05*/
    return 0; /*0x7b0f0c*/
  }
  else
  {
    v6 = *(_DWORD *)&v12[4]; /*0x7b0f19*/
    v7 = *(_WORD *)&v12[12]; /*0x7b0f1d*/
    *(_DWORD *)(a3 + 2) = *(_DWORD *)&v12[4]; /*0x7b0f23*/
    *((_DWORD *)this + 64703) = v6; /*0x7b0f26*/
    *(_DWORD *)(a3 + 6) = *(_DWORD *)&v12[8]; /*0x7b0f33*/
    *(_WORD *)(a3 + 10) = v7; /*0x7b0f35*/
    closesocket(v4); /*0x7b0f39*/
    return 1; /*0x7b0f40*/
  }
}



// ==== 0x007B0F50  NetworkOptions::ApplySettings  this=AbstractClass  sig=csp ====
int __thiscall sub_7B0F50(int this, int a2, char *a3, signed int a4)
{
  int v5; // eax
  int v6; // ebx
  _BYTE v7[6]; // [esp+8h] [ebp-110h] BYREF
  unsigned __int8 v8; // [esp+Eh] [ebp-10Ah]
  unsigned __int8 v9; // [esp+Fh] [ebp-109h]
  unsigned __int8 v10; // [esp+10h] [ebp-108h]
  unsigned __int8 v11; // [esp+11h] [ebp-107h]
  unsigned __int8 v12; // [esp+12h] [ebp-106h]
  int v13; // [esp+13h] [ebp-105h]
  char Buffer[256]; // [esp+18h] [ebp-100h] BYREF

  if ( !*(_BYTE *)(this + 258152) ) /*0x7b0f50*/
    return 0; /*0x7b0f6c*/
  v5 = IPXInterfaceClass::initSocket((_DWORD *)this, a2, (int)v7); /*0x7b0f7c*/
  v6 = v5; /*0x7b0f81*/
  if ( v5 )
  {
    if ( v5 == 2 )
      sprintf(Buffer, "?? ?? ?? ?? : %02x %02x %02x %02x %02x %02x", v8, v9, v10, v11, v12, (unsigned __int8)v13);
    else
      sprintf(
        Buffer,
        "%02x %02x %02x %02x : %02x %02x %02x %02x %02x %02x",
        v7[2],
        v7[3],
        v7[4],
        v7[5],
        v8,
        v9,
        v10,
        v11,
        v12,
        (unsigned __int8)v13);
    if ( (int)strlen(Buffer) >= a4 ) /*0x7b1078*/
      return 0; /*0x7b1084*/
    strcpy(a3, Buffer); /*0x7b10a5*/
  }
  return v6; /*0x7b0f62*/
}



// ==== 0x007B10C0  IPXInterfaceClass::Bind  this=IPXInterfaceClass  sig=csp ====
char __thiscall IPXInterfaceClass::Bind(IPXInterfaceClass *this, int hostshort)
{
  char result; // al
  int v4; // eax
  __int16 v5; // dx
  char v6[4]; // [esp+4h] [ebp-18h] BYREF
  char optval[4]; // [esp+8h] [ebp-14h] BYREF
  struct sockaddr name; // [esp+Ch] [ebp-10h] BYREF

  if ( *((_BYTE *)this + 258152) ) /*0x7b10c6*/
  {
    if ( *((_DWORD *)this + 64539) != -1 ) /*0x7b10e7*/
      return 0; /*0x7b10ef*/
  }
  else
  {
    result = WinsockInterface::Init((WinsockInterface *)this); /*0x7b10d0*/
    if ( !result ) /*0x7b10d7*/
      return result; /*0x7b10d7*/
  }
  *((_DWORD *)this + 64707) = hostshort; /*0x7b10fd*/
  Debug::Log(); /*0x7b1103*/
  *(_DWORD *)&name.sa_data[4] = -1; /*0x7b110e*/
  name.sa_family = 6; /*0x7b1112*/
  *(_DWORD *)name.sa_data = 0; /*0x7b111a*/
  *(_WORD *)&name.sa_data[8] = -1; /*0x7b1122*/
  *(_WORD *)&name.sa_data[10] = htons(hostshort); /*0x7b1131*/
  Debug::Log(); /*0x7b1136*/
  v4 = socket(6, 2, 1000); /*0x7b1147*/
  *((_DWORD *)this + 64539) = v4; /*0x7b114f*/
  if ( v4 == -1 ) /*0x7b1156*/
  {
    WSAGetLastError(); /*0x7b1158*/
    Debug::Log(); /*0x7b1163*/
    closesocket(*((_DWORD *)this + 64539)); /*0x7b1172*/
    return 0; /*0x7b1177*/
  }
  else
  {
    Debug::Log(); /*0x7b1185*/
    if ( IPXInterfaceClass::initSocket(this, *((_DWORD *)this + 64702), (int)&name) ) /*0x7b119b*/
    {
      Debug::Log(); /*0x7b1236*/
      v5 = *(_WORD *)&name.sa_data[8]; /*0x7b123f*/
      *(_DWORD *)((char *)this + 258822) = *(_DWORD *)&name.sa_data[4]; /*0x7b124f*/
      *((_WORD *)this + 129413) = v5; /*0x7b1251*/
      Debug::Log(); /*0x7b1255*/
      if ( bind(*((_DWORD *)this + 64539), &name, 16) == -1 ) /*0x7b1273*/
      {
        WSAGetLastError(); /*0x7b1275*/
        Debug::Log(); /*0x7b1280*/
        closesocket(*((_DWORD *)this + 64539)); /*0x7b128f*/
        return 0; /*0x7b1294*/
      }
      else
      {
        Debug::Log(); /*0x7b12a2*/
        *(_DWORD *)optval = 1; /*0x7b12ac*/
        *(_DWORD *)v6 = 4; /*0x7b12b4*/
        Debug::Log(); /*0x7b12bc*/
        if ( setsockopt(*((_DWORD *)this + 64539), 0xFFFF, 32, optval, 4) == -1 ) /*0x7b12e1*/
          WSAGetLastError(); /*0x7b12e3*/
        Debug::Log(); /*0x7b12ee*/
        Debug::Log(); /*0x7b130a*/
        if ( setsockopt(*((_DWORD *)this + 64539), 1000, 0x4000, v6, 4) == -1 ) /*0x7b1332*/
          WSAGetLastError(); /*0x7b1334*/
        Debug::Log(); /*0x7b133f*/
        Debug::Log(); /*0x7b135b*/
        if ( setsockopt(*((_DWORD *)this + 64539), 1000, 16385, v6, 4) == -1 ) /*0x7b1383*/
          WSAGetLastError(); /*0x7b1385*/
        Debug::Log(); /*0x7b1390*/
        Socket::ConfigureBuffers((WinsockInterfaceClass *)this, 0xFFFFFFFF); /*0x7b13ab*/
        Debug::Log(); /*0x7b13b5*/
        return 1; /*0x7b13bd*/
      }
    }
    else
    {
      Debug::Log(); /*0x7b11a9*/
      closesocket(*((_DWORD *)this + 64539)); /*0x7b11b8*/
      return 0; /*0x7b11bd*/
    }
  }
}



// ==== 0x007B13D0  IPXInterfaceClass::SendPacket  this=IPXInterfaceClass  sig=csp ====
int __thiscall IPXInterfaceClass::SendPacket(IPXInterfaceClass *this, int a2, int a3, int a4, unsigned int fromlen)
{
  Network *v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  SOCKET v11; // eax
  int v12; // eax
  int v13; // ecx
  _WORD *v14; // edi
  int *v15; // esi
  bool v16; // zf
  int v17; // esi
  NetworkID *v18; // ebx
  int v19; // eax
  int v20; // ecx
  int *p_LocalNetwork; // ebp
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  u_short v25; // [esp-4h] [ebp-30h]
  int v26; // [esp+10h] [ebp-1Ch]
  int v27; // [esp+14h] [ebp-18h] BYREF
  __int16 v28; // [esp+18h] [ebp-14h]
  struct sockaddr to; // [esp+1Ch] [ebp-10h] BYREF

  if ( a3 != 1139 ) /*0x7b13e2*/
    return 1; /*0x7b13f0*/
  if ( (unsigned __int16)fromlen != 1 ) /*0x7b13ff*/
  {
    if ( (unsigned __int16)fromlen == 2 ) /*0x7b1406*/
    {
      if ( HIWORD(fromlen) ) /*0x7b140c*/
      {
LABEL_6:
        (*(void (__thiscall **)(IPXInterfaceClass *, _DWORD))(this->Socket + 36))(this, *((_DWORD *)this + 64539)); /*0x7b1411*/
        return 0; /*0x7b1429*/
      }
      if ( this->LocalNode ) /*0x7b142c*/
      {
        while ( 1 ) /*0x7b1446*/
        {
          v25 = *((_WORD *)this + 129414); /*0x7b1446*/
          v7 = (Network *)**((_DWORD **)this + 9); /*0x7b1447*/
          to.sa_family = 6; /*0x7b1449*/
          *(_WORD *)&to.sa_data[10] = htons(v25); /*0x7b1453*/
          if ( v7->__pad_14[0] ) /*0x7b1458*/
          {
            *(_DWORD *)to.sa_data = *((_DWORD *)this + 64703); /*0x7b146b*/
            *(_DWORD *)&to.sa_data[4] = *((_DWORD *)this + 64704); /*0x7b1471*/
            *(_WORD *)&to.sa_data[8] = *((_WORD *)this + 129410); /*0x7b1479*/
          }
          else
          {
            Network::CopyAddress(v7, &a3, (int)&v27); /*0x7b148c*/
            *(_DWORD *)to.sa_data = a3; /*0x7b149e*/
            *(_DWORD *)&to.sa_data[4] = v27; /*0x7b14a2*/
            *(_WORD *)&to.sa_data[8] = v28; /*0x7b14a6*/
          }
          if ( sendto(*((_DWORD *)this + 64539), &v7->__pad_14[8], (int)v7->Network_field_0x10 + 4, 0, &to, 14) == -1 /*0x7b14da*/
            && WSAGetLastError() != 10035 )
          {
            break; /*0x7b14da*/
          }
          v8 = this->LocalNode; /*0x7b14e0*/
          if ( v8 > 0 ) /*0x7b14e5*/
          {
            v9 = v8 - 1; /*0x7b14e7*/
            v10 = 0; /*0x7b14ea*/
            for ( this->LocalNode = v9; /*0x7b14f1*/
                  v10 < this->LocalNode;
                  *(_DWORD *)(*((_DWORD *)this + 9) + 4 * v10 - 4) = *(_DWORD *)(*((_DWORD *)this + 9) + 4 * v10) )
            {
              ++v10; /*0x7b14f6*/
            }
          }
          if ( v7->__pad_14[2] ) /*0x7b1505*/
          {
            __3_YAXPAX_Z(v7); /*0x7b150d*/
          }
          else
          {
            v7->__pad_14[1] = 0; /*0x7b1517*/
            --*((_DWORD *)this + 64536); /*0x7b1522*/
          }
          if ( !this->LocalNode ) /*0x7b1528*/
            return 0; /*0x7b153c*/
        }
        goto LABEL_6; /*0x7b14da*/
      }
    }
    return 0; /*0x7b1431*/
  }
  if ( HIWORD(fromlen) ) /*0x7b153f*/
  {
    (*(void (__thiscall **)(IPXInterfaceClass *, _DWORD))(this->Socket + 36))(this, *((_DWORD *)this + 64539)); /*0x7b1550*/
    return 0; /*0x7b155c*/
  }
  v11 = *((_DWORD *)this + 64539); /*0x7b1577*/
  fromlen = 14; /*0x7b157d*/
  v12 = recvfrom(v11, (char *)this + 258164, 640, 0, &to, (int *)&fromlen); /*0x7b1586*/
  v26 = v12; /*0x7b158e*/
  if ( v12 == -1 ) /*0x7b1592*/
  {
    if ( WSAGetLastError() != 10035 ) /*0x7b159e*/
    {
      (*(void (__thiscall **)(IPXInterfaceClass *, _DWORD))(this->Socket + 36))(this, *((_DWORD *)this + 64539)); /*0x7b15b0*/
      return 0; /*0x7b15bc*/
    }
    return 0; /*0x7b159e*/
  }
  if ( !v12 ) /*0x7b15c1*/
    return 0; /*0x7b15c1*/
  v27 = *(_DWORD *)&to.sa_data[4]; /*0x7b15d4*/
  a3 = *(_DWORD *)to.sa_data; /*0x7b15d8*/
  v28 = *(_WORD *)&to.sa_data[8]; /*0x7b15e6*/
  if ( *(_DWORD *)to.sa_data == *((_DWORD *)this + 64703) ) /*0x7b15ef*/
  {
    v13 = 3; /*0x7b15f1*/
    v14 = (_WORD *)((char *)this + 258822); /*0x7b15f6*/
    v15 = &v27; /*0x7b15fc*/
    v16 = 1; /*0x7b1600*/
    do /*0x7b1602*/
    {
      if ( !v13 ) /*0x7b1602*/
        break; /*0x7b1602*/
      v16 = *(_WORD *)v15 == *v14; /*0x7b1602*/
      v15 = (int *)((char *)v15 + 2); /*0x7b1602*/
      ++v14; /*0x7b1602*/
      --v13; /*0x7b1602*/
    }
    while ( v16 ); /*0x7b1602*/
    if ( v16 ) /*0x7b1605*/
      return 0; /*0x7b1605*/
  }
  v17 = Network_Process_7B2730(); /*0x7b1610*/
  if ( v17 > 0 && Random::Range(&Randomizer_Global, 0, 99) <= v17 ) /*0x7b1626*/
    return 0; /*0x7b1717*/
  v18 = (NetworkID *)IPXInterfaceClass::processPacket(this); /*0x7b1633*/
  *(_DWORD *)v18[2].__pad_0 = v26 - 4; /*0x7b1646*/
  v18[3].NetworkID_field_0x04 = *((_DWORD *)this + 64541); /*0x7b1651*/
  qmemcpy(&v18[4], (char *)this + 258168, v26 - 4); /*0x7b1657*/
  if ( (*(unsigned __int8 (__thiscall **)(IPXInterfaceClass *, NetworkID *))(this->Socket + 88))(this, v18) ) /*0x7b1665*/
  {
    NetworkID::Assign(v18, &a3, (int)&v27, 0); /*0x7b16d0*/
    v19 = *(_DWORD *)&this->LocalNode[4]; /*0x7b16d5*/
    v20 = this->BoundSocket; /*0x7b16d8*/
    p_LocalNetwork = &this->LocalNetwork; /*0x7b16db*/
    if ( v20 < v19 /*0x7b16fe*/
      || (*((_BYTE *)p_LocalNetwork + 13) || !v19)
      && (v22 = p_LocalNetwork[5], v22 > 0)
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*p_LocalNetwork + 8))(p_LocalNetwork, v19 + v22, 0) )
    {
      v23 = p_LocalNetwork[4]; /*0x7b1705*/
      v24 = p_LocalNetwork[1]; /*0x7b1708*/
      p_LocalNetwork[4] = v23 + 1; /*0x7b170e*/
      *(_DWORD *)(v24 + 4 * v23) = v18; /*0x7b1711*/
    }
    return 0; /*0x7b1711*/
  }
  Debug::Log(); /*0x7b1671*/
  if ( !byte_B7801C ) /*0x7b1680*/
    byte_B7801C = 1; /*0x7b1682*/
  if ( BYTE2(v18[2].NetworkID_field_0x04) ) /*0x7b1689*/
  {
    __3_YAXPAX_Z(v18); /*0x7b1691*/
  }
  else
  {
    BYTE1(v18[2].NetworkID_field_0x04) = 0; /*0x7b16a5*/
    --*((_DWORD *)this + 64536); /*0x7b16b1*/
  }
  return 0; /*0x7b13e4*/
}



// ==== 0x007B1720  WinsockInterfaceClass::StubReturnFalse  this=WinsockInterfaceClass  sig=csp ====
void __stdcall IPXInterfaceClass::StubReturnFalse(WinsockInterfaceClass *this, int a2)
{
  ; /*0x7b1720*/
}



// ==== 0x007B1730  WinsockInterfaceClass::GetQueueSize  this=WinsockInterfaceClass  sig=csp ====
void IPXInterfaceClass::GetQueueSize(WinsockInterfaceClass *this)
{
  ; /*0x7b1730*/
}



// ==== 0x007B1740  WinsockInterfaceClass::COMStub_Return0  this=WinsockInterfaceClass  sig=csp ====
int IPXInterfaceClass::COMStub_Return0(WinsockInterfaceClass *this)
{
  return 0; /*0x7b1742*/
}



// ==== 0x007B1750  WinsockInterfaceClass::Send  this=WinsockInterfaceClass  sig=csp ====
int __stdcall IPXInterfaceClass::Send(WinsockInterfaceClass *this)
{
  return 0; /*0x7b1752*/
}



// ==== 0x007B1760  WinsockInterfaceClass::GetLocalAddress  this=WinsockInterfaceClass  sig=csp ====
int __thiscall IPXInterfaceClass::GetLocalAddress(WinsockInterfaceClass *this, int a2)
{
  *((_DWORD *)this + 64702) = a2; /*0x7b1764*/
  return a2; /*0x7b176a*/
}



// ==== 0x007B1770  IPXInterfaceClass::COMStub_Return1  this=IPXInterfaceClass  sig=csp ====
int IPXInterfaceClass::COMStub_Return1(IPXInterfaceClass *this)
{
  return 1; /*0x7b1775*/
}



// ==== 0x007B1780  IPXInterfaceClass::COMStub_Ret1139  this=IPXInterfaceClass  sig=csp ====
int __stdcall IPXInterfaceClass::COMStub_Ret1139(IPXInterfaceClass *this)
{
  return 1139; /*0x7b1785*/
}



// ==== 0x007B1790  IPXInterfaceClass::QueryInterface  this=IPXInterfaceClass  sig=csp ====
void *__thiscall IPXInterfaceClass::QueryInterface(IPXInterfaceClass *this, char a2)
{
  WinsockInterfaceClass::WinsockInterfaceClass((int)this); /*0x7b1793*/
  if ( (a2 & 1) != 0 ) /*0x7b179d*/
    __3_YAXPAX_Z(this); /*0x7b17a0*/
  return this; /*0x7b17aa*/
}



// ==== 0x007B17B0  sub_7B17B0  this=-  sig=ida-proto ====
int sub_7B17B0()
{
  dword_B78028 = 0; /*0x7b17b2*/
  dword_B7802C = 0; /*0x7b17b7*/
  dword_B78030 = 0; /*0x7b17bc*/
  dword_B78034 = 0; /*0x7b17c1*/
  return 0; /*0x7b17c6*/
}



// ==== 0x007B17D0  sub_7B17D0  this=-  sig=ida-proto ====
void sub_7B17D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7b17dc*/
  dbl_B78040 = Math::Sqrt(v0 + v0); /*0x7b17ee*/
}



// ==== 0x007B1800  sub_7B1800  this=-  sig=ida-proto ====
void sub_7B1800()
{
  dbl_B78090 = dbl_B78040 / 60.0; /*0x7b180c*/
}



// ==== 0x007B1820  sub_7B1820  this=-  sig=ida-proto ====
void sub_7B1820()
{
  dbl_B78078 = 1.0 / dbl_B78090; /*0x7b182c*/
}



// ==== 0x007B1840  sub_7B1840  this=-  sig=ida-proto ====
void sub_7B1840()
{
  dbl_B78070 = 0.0174532925199433 * 45.0; /*0x7b184c*/
}



// ==== 0x007B1860  sub_7B1860  this=-  sig=ida-proto ====
void sub_7B1860()
{
  dbl_B78048 = 0.0174532925199433 * 60.0; /*0x7b186c*/
}



// ==== 0x007B1880  sub_7B1880  this=-  sig=ida-proto ====
void sub_7B1880()
{
  dbl_B78020 = 0.0174532925199433 * 90.0; /*0x7b188c*/
}



// ==== 0x007B18A0  sub_7B18A0  this=-  sig=ida-proto ====
__int64 sub_7B18A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B78020 - dbl_B78048); /*0x7b18b2*/
  result = Math::RoundToInt(v0 * dbl_B78040 * 0.5); /*0x7b18c6*/
  dword_B78098 = result; /*0x7b18cb*/
  return result; /*0x7b18d0*/
}



// ==== 0x007B18E0  sub_7B18E0  this=-  sig=ida-proto ====
void sub_7B18E0()
{
  dbl_B78050 = Math::ArcTan((double)dword_B78098 * 0.00390625); /*0x7b18f7*/
}



// ==== 0x007B1910  sub_7B1910  this=-  sig=ida-proto ====
void sub_7B1910()
{
  dbl_B78068 = Math::ArcTan((double)(2 * dword_B78098) / dbl_B78040); /*0x7b1932*/
}



// ==== 0x007B1940  sub_7B1940  this=-  sig=ida-proto ====
__int64 sub_7B1940()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B78098) + 0.5); /*0x7b195b*/
  dword_B7808C = result; /*0x7b1960*/
  return result; /*0x7b1966*/
}



// ==== 0x007B1970  sub_7B1970  this=-  sig=ida-proto ====
int sub_7B1970()
{
  word_B78038 = 0; /*0x7b1972*/
  word_B7803A = 0; /*0x7b1978*/
  return 0; /*0x7b197e*/
}



// ==== 0x007B1980  sub_7B1980  this=-  sig=ida-proto ====
int sub_7B1980()
{
  dword_B78058 = 0; /*0x7b1982*/
  dword_B7805C = 0; /*0x7b1987*/
  dword_B78060 = 0; /*0x7b198c*/
  return 0; /*0x7b1991*/
}



// ==== 0x007B19A0  sub_7B19A0  this=-  sig=ida-proto ====
int sub_7B19A0()
{
  dword_B78088 = 0; /*0x7b19a5*/
  dword_B78080 = 128; /*0x7b19af*/
  dword_B78084 = 128; /*0x7b19b4*/
  return 128; /*0x7b19b9*/
}



// ==== 0x007B19C0  IPXInterfaceClass::bindSocket  this=WinsockInterfaceClass  sig=csp ====
char *__thiscall sub_7B19C0(char *this)
{
  _BYTE *v2; // eax
  int v3; // edx

  *((_DWORD *)this + 3) = 0; /*0x7b19d2*/
  this->u32_4 = 0; /*0x7b19d5*/
  *(this + 20) = 1; /*0x7b19d8*/
  *(this + 21) = 0; /*0x7b19db*/
  this->u32_8 = &DynamicVectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b19de*/
  *((_DWORD *)this + 7) = 10; /*0x7b19e1*/
  this->BoundPort = 0; /*0x7b19e4*/
  *((_DWORD *)this + 9) = 0; /*0x7b19e7*/
  *((_DWORD *)this + 10) = 0; /*0x7b19ea*/
  *(this + 44) = 1; /*0x7b19ed*/
  *(this + 45) = 0; /*0x7b19f0*/
  this->u32_8 = &DynamicVectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b19f3*/
  *((_DWORD *)this + 13) = 10; /*0x7b19f6*/
  *((_DWORD *)this + 12) = 0; /*0x7b19f9*/
  *((_DWORD *)this + 19) = 10; /*0x7b19fc*/
  *((_DWORD *)this + 15) = 0; /*0x7b1a02*/
  this->u32_4 = 0; /*0x7b1a05*/
  *(this + 68) = 1; /*0x7b1a08*/
  *(this + 69) = 0; /*0x7b1a0b*/
  *((_DWORD *)this + 14) = &DynamicVectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b1a0e*/
  *((_DWORD *)this + 18) = 0; /*0x7b1a11*/
  *((_DWORD *)this + 64539) = -1; /*0x7b1a14*/
  *((_DWORD *)this + 64540) = -1; /*0x7b1a1a*/
  *(_DWORD *)this = &WinsockInterfaceClass::`vftable'; /*0x7b1a20*/
  *(this + 258152) = 0; /*0x7b1a26*/
  v2 = this + 102; /*0x7b1a2c*/
  v3 = 128; /*0x7b1a2f*/
  do /*0x7b1a6f*/
  {
    *(v2 - 1) = 0; /*0x7b1a34*/
    *v2 = 0; /*0x7b1a37*/
    v2[86015] = 0; /*0x7b1a39*/
    v2[86016] = 0; /*0x7b1a3f*/
    v2[86017] = 0; /*0x7b1a45*/
    v2[86018] = 0; /*0x7b1a4b*/
    v2[172031] = 0; /*0x7b1a51*/
    v2[172032] = 0; /*0x7b1a57*/
    v2[172033] = 1; /*0x7b1a5d*/
    v2[172034] = 0; /*0x7b1a63*/
    v2 += 672; /*0x7b1a69*/
    --v3; /*0x7b1a6e*/
  }
  while ( v3 ); /*0x7b1a6f*/
  *((_DWORD *)this + 64535) = 0; /*0x7b1a76*/
  *((_DWORD *)this + 64536) = 0; /*0x7b1a7c*/
  *((_DWORD *)this + 64537) = 0; /*0x7b1a82*/
  *((_DWORD *)this + 64532) = 0; /*0x7b1a88*/
  *((_DWORD *)this + 64533) = 0; /*0x7b1a8e*/
  this->u32_4 = 576; /*0x7b1a94*/
  Debug::Log(); /*0x7b1a9b*/
  return this; /*0x7b1aa5*/
}



// ==== 0x007B1AB0  WinsockInterfaceClass::WinsockInterfaceClass  this=WinsockInterfaceClass  sig=csp ====
void __thiscall WinsockInterfaceClass_Destructor(int this)
{
  char v2; // al
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax

  v2 = *(_BYTE *)(this + 258152); /*0x7b1ab6*/
  *(_DWORD *)this = &WinsockInterfaceClass::`vftable'; /*0x7b1abc*/
  if ( v2 ) /*0x7b1ac4*/
  {
    NetworkClass::UnregisterAsync((SOCKET *)this); /*0x7b1ac6*/
    (*(void (__thiscall **)(int))(this->u32_4)(this); /*0x7b1ad0*/
    WSACleanup(); /*0x7b1ad3*/
    *(_BYTE *)(this + 258152) = 0; /*0x7b1ad8*/
  }
  v3 = *(void **)(this + 60); /*0x7b1ade*/
  *(_DWORD *)(this + 56) = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b1ae1*/
  if ( v3 && *(_BYTE *)(this + 69) ) /*0x7b1aec*/
  {
    __3_YAXPAX_Z(v3); /*0x7b1af2*/
    *(_DWORD *)(this + 60) = 0; /*0x7b1afa*/
  }
  *(_BYTE *)(this + 69) = 0; /*0x7b1afd*/
  *(_DWORD *)(this + 64) = 0; /*0x7b1b00*/
  v4 = *(void **)(this + 36); /*0x7b1b03*/
  *(_DWORD *)(this + 32) = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b1b06*/
  if ( v4 && *(_BYTE *)(this + 45) ) /*0x7b1b11*/
  {
    __3_YAXPAX_Z(v4); /*0x7b1b17*/
    *(_DWORD *)(this + 36) = 0; /*0x7b1b1f*/
  }
  *(_BYTE *)(this + 45) = 0; /*0x7b1b22*/
  *(_DWORD *)(this + 40) = 0; /*0x7b1b25*/
  v5 = *(void **)(this + 12); /*0x7b1b28*/
  *(_DWORD *)(this + 8) = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b1b2b*/
  if ( v5 && *(_BYTE *)(this + 21) ) /*0x7b1b36*/
  {
    __3_YAXPAX_Z(v5); /*0x7b1b3c*/
    *(_DWORD *)(this + 12) = 0; /*0x7b1b44*/
  }
  *(_BYTE *)(this + 21) = 0; /*0x7b1b47*/
  *(_DWORD *)(this + 16) = 0; /*0x7b1b4a*/
}



// ==== 0x007B1B50  UDPInterfaceClass::connect  this=UDPInterfaceClass  sig=csp ====
char __thiscall UDPInterfaceClass::connect(UDPInterfaceClass *this)
{
  char result; // al

  result = *((_BYTE *)this + 258152); /*0x7b1b53*/
  if ( result ) /*0x7b1b5b*/
  {
    (*(void (__thiscall **)(UDPInterfaceClass *))(this->Socket + 32))(this); /*0x7b1b5f*/
    (*(void (__thiscall **)(UDPInterfaceClass *))(this->Socket + 4))(this); /*0x7b1b66*/
    result = WSACleanup(); /*0x7b1b69*/
    *((_BYTE *)this + 258152) = 0; /*0x7b1b6e*/
  }
  return result; /*0x7b1b75*/
}



// ==== 0x007B1B80  WinsockInterfaceClass::AddRef  this=WinsockInterfaceClass  sig=csp ====
int __thiscall IPXInterfaceClass::AddRef(WinsockInterfaceClass *this)
{
  int result; // eax

  if ( *((_DWORD *)this + 64539) != -1 ) /*0x7b1b8c*/
  {
    closesocket(*((_DWORD *)this + 64539)); /*0x7b1b8f*/
    *((_DWORD *)this + 64539) = -1; /*0x7b1b94*/
  }
  result = *((_DWORD *)this + 64540); /*0x7b1b9e*/
  if ( result != -1 ) /*0x7b1ba7*/
  {
    result = closesocket(*((_DWORD *)this + 64540)); /*0x7b1baa*/
    *((_DWORD *)this + 64540) = -1; /*0x7b1baf*/
  }
  return result; /*0x7b1bb9*/
}



// ==== 0x007B1BC0  WinsockInterfaceClass::Receive  this=WinsockInterfaceClass  sig=csp ====
char __thiscall IPXInterfaceClass::Receive(WinsockInterfaceClass *this)
{
  HWND v2; // eax
  int v4; // eax
  HWND v5; // eax
  int v6; // [esp+0h] [ebp-4h]
  int v7; // [esp+0h] [ebp-4h]

  v2 = (HWND)(*(int (__thiscall **)(WinsockInterfaceClass *, int))(this->Socket + 56))(this, -1); /*0x7b1bc9*/
  if ( WSAAsyncSelect(*((AnimClass **)this + 64539), (SOCKET)g_hWnd, v2, 3u, v6) != (AnimClass *)-1 ) /*0x7b1be3*/
  {
    v4 = *((_DWORD *)this + 64540); /*0x7b1bfc*/
    if ( v4 == -1 ) /*0x7b1c05*/
      return 1; /*0x7b1c05*/
    v5 = (HWND)(*(int (__thiscall **)(WinsockInterfaceClass *, int))(this->Socket + 56))(this, v4); /*0x7b1c0e*/
    if ( WSAAsyncSelect(*((AnimClass **)this + 64540), (SOCKET)g_hWnd, v5, 3u, v7) != (AnimClass *)-1 ) /*0x7b1c27*/
      return 1; /*0x7b1c40*/
  }
  WSAGetLastError(); /*0x7b1be5*/
  Debug::Log(); /*0x7b1bf0*/
  return 0; /*0x7b1bfa*/
}



// ==== 0x007B1C50  WinsockInterfaceClass::UnregisterAsync  this=WinsockInterfaceClass  sig=csp ====
SOCKET __thiscall NetworkClass_UnregisterAsync(SOCKET *this)
{
  HWND v2; // ecx
  SOCKET v3; // eax
  SOCKET result; // eax

  v2 = g_hWnd; /*0x7b1c53*/
  v3 = *(this + 64539); /*0x7b1c59*/
  if ( v3 != -1 && g_hWnd ) /*0x7b1c66*/
  {
    WSAAsyncSelect(v3, g_hWnd, 0, 0); /*0x7b1c6e*/
    v2 = g_hWnd; /*0x7b1c73*/
  }
  result = *(this + 64540); /*0x7b1c79*/
  if ( result != -1 ) /*0x7b1c83*/
  {
    if ( v2 ) /*0x7b1c87*/
      return WSAAsyncSelect(result, v2, 0, 0); /*0x7b1c8f*/
  }
  return result; /*0x7b1c7f*/
}



// ==== 0x007B1CA0  WinsockInterfaceClass::Disconnect  this=WinsockInterfaceClass  sig=csp ====
void __thiscall IPXInterfaceClass::Disconnect(WinsockInterfaceClass *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // eax

  while ( this->BoundPort ) /*0x7b1ca6*/
  {
    v2 = **((_DWORD **)this + 3); /*0x7b1cae*/
    if ( *(_BYTE *)(v2 + 22) ) /*0x7b1cb0*/
    {
      __3_YAXPAX_Z(**((void ***)this + 3)); /*0x7b1cb6*/
    }
    else
    {
      *(_BYTE *)(v2 + 21) = 0; /*0x7b1cc0*/
      --*((_DWORD *)this + 64535); /*0x7b1cca*/
    }
    v3 = this->BoundPort; /*0x7b1cd0*/
    if ( v3 > 0 ) /*0x7b1cd5*/
    {
      v4 = v3 - 1; /*0x7b1cd7*/
      v5 = 0; /*0x7b1cda*/
      for ( this->BoundPort = v4; /*0x7b1ce1*/
            v5 < this->BoundPort;
            *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v5 - 4) = *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v5) )
      {
        ++v5; /*0x7b1ce6*/
      }
    }
  }
  *((_DWORD *)this + 64535) = 0; /*0x7b1cfa*/
  *((_DWORD *)this + 64532) = 0; /*0x7b1d00*/
}



// ==== 0x007B1D10  WinsockInterfaceClass::Cleanup  this=WinsockInterfaceClass  sig=csp ====
void __thiscall AudioQueue::Cleanup(WinsockInterfaceClass *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax

  while ( *((_DWORD *)this + 12) ) /*0x7b1d16*/
  {
    v2 = **((_DWORD **)this + 9); /*0x7b1d1e*/
    if ( *(_BYTE *)(v2 + 22) ) /*0x7b1d20*/
    {
      __3_YAXPAX_Z(**((void ***)this + 9)); /*0x7b1d26*/
    }
    else
    {
      *(_BYTE *)(v2 + 21) = 0; /*0x7b1d30*/
      --*((_DWORD *)this + 64536); /*0x7b1d3a*/
    }
    v3 = *((_DWORD *)this + 12); /*0x7b1d40*/
    if ( v3 > 0 ) /*0x7b1d45*/
    {
      v4 = v3 - 1; /*0x7b1d47*/
      v5 = 0; /*0x7b1d4a*/
      for ( *((_DWORD *)this + 12) = v4; /*0x7b1d51*/
            v5 < *((_DWORD *)this + 12);
            *(_DWORD *)(*((_DWORD *)this + 9) + 4 * v5 - 4) = *(_DWORD *)(*((_DWORD *)this + 9) + 4 * v5) )
      {
        ++v5; /*0x7b1d56*/
      }
    }
  }
  *((_DWORD *)this + 64536) = 0; /*0x7b1d6a*/
  *((_DWORD *)this + 64533) = 0; /*0x7b1d70*/
  while ( *((_DWORD *)this + 18) ) /*0x7b1d76*/
  {
    v6 = **((_DWORD **)this + 15); /*0x7b1d7e*/
    if ( *(_BYTE *)(v6 + 22) ) /*0x7b1d80*/
    {
      __3_YAXPAX_Z(**((void ***)this + 15)); /*0x7b1d86*/
    }
    else
    {
      *(_BYTE *)(v6 + 21) = 0; /*0x7b1d90*/
      --*((_DWORD *)this + 64537); /*0x7b1d9a*/
    }
    v7 = *((_DWORD *)this + 18); /*0x7b1da0*/
    if ( v7 > 0 ) /*0x7b1da5*/
    {
      v8 = v7 - 1; /*0x7b1da7*/
      v9 = 0; /*0x7b1daa*/
      for ( *((_DWORD *)this + 18) = v8; /*0x7b1db1*/
            v9 < *((_DWORD *)this + 18);
            *(_DWORD *)(*((_DWORD *)this + 15) + 4 * v9 - 4) = *(_DWORD *)(*((_DWORD *)this + 15) + 4 * v9) )
      {
        ++v9; /*0x7b1db6*/
      }
    }
  }
  *((_DWORD *)this + 64537) = 0; /*0x7b1dca*/
  *((_DWORD *)this + 64534) = 0; /*0x7b1dd0*/
}



// ==== 0x007B1DE0  WinsockInterface::Init  this=WinsockInterface  sig=csp ====
int __thiscall WinsockInterface::Init(WinsockInterface *this)
{
  int result; // eax
  int v3; // eax
  int v4; // edx
  struct WSAData *v5; // esi
  INT v6; // eax
  int v7; // ebp
  int *v8; // esi
  INT v9; // ebx
  int v10; // eax
  struct WSAData *v11; // [esp+8h] [ebp-1008h]
  DWORD dwBufferLength; // [esp+Ch] [ebp-1004h] BYREF
  _BYTE ProtocolBuffer[24]; // [esp+10h] [ebp-1000h] BYREF
  char v14; // [esp+28h] [ebp-FE8h] BYREF

  Debug::Log(); /*0x7b1df3*/
  if ( LOBYTE(this->m_3F068) ) /*0x7b1df8*/
  {
    result = Debug::Log(); /*0x7b1e0a*/
    LOBYTE(result) = 1; /*0x7b1e12*/
  }
  else
  {
    if ( dword_B780A0 > 0 && !byte_B7809C ) /*0x7b1e2d*/
    {
      byte_B7809C = 1; /*0x7b1e41*/
      MessageBoxA(g_hWnd, aWarningPacketL, Caption, 0); /*0x7b1e48*/
    }
    v3 = __2_YAPAXI_Z(0x590u); /*0x7b1e53*/
    v4 = *(_DWORD *)this->__pad_0; /*0x7b1e58*/
    v5 = (struct WSAData *)v3; /*0x7b1e5a*/
    v11 = (struct WSAData *)v3; /*0x7b1e61*/
    this->u32_3F06C = -1; /*0x7b1e65*/
    (*(void (__thiscall **)(WinsockInterface *))(v4 + 20))(this); /*0x7b1e6f*/
    (*(void (__thiscall **)(WinsockInterface *))(*(_DWORD *)this->__pad_0 + 24))(this); /*0x7b1e76*/
    Debug::Log(); /*0x7b1e7e*/
    if ( WSAStartup(0x101u, v5) ) /*0x7b1e8c*/
    {
      Debug::Log(); /*0x7b1e9b*/
      __3_YAXPAX_Z(v5); /*0x7b1ea1*/
      LOBYTE(result) = 0; /*0x7b1ea9*/
    }
    else
    {
      Debug::Log(); /*0x7b1eb9*/
      if ( (unsigned __int8)v5->wVersion != 1 || ((v5->wVersion ^ 0x100) & 0xFFFFFF00) != 0 ) /*0x7b1ee2*/
      {
        Debug::Log(); /*0x7b1fad*/
        __3_YAXPAX_Z(v5); /*0x7b1fb3*/
        LOBYTE(result) = 0; /*0x7b1fbb*/
      }
      else
      {
        Debug::Log(); /*0x7b1efa*/
        *(_DWORD *)&this->m_1[3] = 546; /*0x7b1f0a*/
        dwBufferLength = 4096; /*0x7b1f18*/
        v6 = EnumProtocolsA(&iProtocols, ProtocolBuffer, &dwBufferLength); /*0x7b1f20*/
        if ( v6 == -1 ) /*0x7b1f28*/
        {
          Debug::Log(); /*0x7b1f9e*/
        }
        else
        {
          v7 = 0x7FFFFFFF; /*0x7b1f2c*/
          if ( v6 > 0 ) /*0x7b1f31*/
          {
            v8 = (int *)&v14; /*0x7b1f34*/
            v9 = v6; /*0x7b1f38*/
            do /*0x7b1f63*/
            {
              Debug::Log(); /*0x7b1f46*/
              v10 = *v8; /*0x7b1f4b*/
              if ( *v8 && v10 != -1 && v7 >= v10 ) /*0x7b1f5b*/
                v7 = *v8; /*0x7b1f5d*/
              v8 += 8; /*0x7b1f5f*/
              --v9; /*0x7b1f62*/
            }
            while ( v9 ); /*0x7b1f63*/
            if ( v7 != 0x7FFFFFFF && v7 > 400 ) /*0x7b1f74*/
              *(_DWORD *)&this->m_1[3] = v7; /*0x7b1f76*/
            v5 = v11; /*0x7b1f79*/
          }
        }
        LOBYTE(this->m_3F068) = 1; /*0x7b1f7e*/
        __3_YAXPAX_Z(v5); /*0x7b1f85*/
        LOBYTE(result) = 1; /*0x7b1f8d*/
      }
    }
  }
  return result; /*0x7b1e14*/
}



// ==== 0x007B1FD0  WinsockInterfaceClass::SetAddress  this=WinsockInterfaceClass  sig=csp ====
int __stdcall IPXInterfaceClass::SetAddress(WinsockInterfaceClass *this)
{
  int v1; // ebx
  WinsockInterfaceClass *v2; // ebp
  int v3; // eax
  int *v4; // esi
  int result; // eax
  int v6; // edx
  int v7; // edi

  v1 = 0; /*0x7b1fd8*/
  v2 = (WinsockInterfaceClass *)((char *)this + 28); /*0x7b1fdd*/
  v3 = this->u32_4; /*0x7b1fe0*/
  *((_DWORD *)this + 7) = 0; /*0x7b1fe4*/
  v4 = (int *)((char *)this + 32); /*0x7b1fed*/
  result = v3 / 4; /*0x7b1ff0*/
  if ( result > 0 ) /*0x7b1ff5*/
  {
    do /*0x7b2012*/
    {
      v6 = *v4++; /*0x7b1ff7*/
      ComputeHash(v2, v6); /*0x7b1ffe*/
      ++v1; /*0x7b2006*/
      result = this->u32_4 / 4; /*0x7b200d*/
    }
    while ( v1 < result ); /*0x7b2012*/
  }
  v7 = this->u32_4 & 3; /*0x7b2017*/
  if ( v7 ) /*0x7b201a*/
    return ComputeHash(v2, *v4 & (0xFFFFFFFF >> (32 - 8 * v7))); /*0x7b2035*/
  return result; /*0x7b203a*/
}



// ==== 0x007B2050  WinsockInterfaceClass::VerifyCRC  this=WinsockInterfaceClass  sig=csp ====
char __stdcall Winsock::VerifyCRC(WinsockInterfaceClass *this)
{
  WinsockInterfaceClass *v1; // ebx
  int v2; // eax
  int v3; // edi
  int *v4; // esi
  int v5; // edx
  int v6; // eax

  v1 = this; /*0x7b2051*/
  v2 = this->u32_4; /*0x7b2055*/
  if ( v2 < 640 ) /*0x7b205d*/
  {
    v3 = 0; /*0x7b206a*/
    v4 = (int *)((char *)this + 32); /*0x7b206c*/
    this = 0; /*0x7b2071*/
    if ( v2 / 4 > 0 ) /*0x7b2075*/
    {
      do /*0x7b2094*/
      {
        v5 = *v4++; /*0x7b2077*/
        ComputeHash(&this, v5); /*0x7b2080*/
        ++v3; /*0x7b2088*/
      }
      while ( v3 < *(_DWORD *)&v1[1].Initialized / 4 ); /*0x7b2094*/
    }
    v6 = *(_DWORD *)&v1[1].Initialized & 3; /*0x7b2099*/
    if ( v6 ) /*0x7b209c*/
      ComputeHash(&this, *v4 & (0xFFFFFFFF >> (32 - 8 * v6))); /*0x7b20b5*/
    if ( this == *(WinsockInterfaceClass **)&v1[2].Initialized ) /*0x7b20c5*/
      return 1; /*0x7b20ca*/
    Debug::Log(); /*0x7b20d2*/
  }
  return 0; /*0x7b20c9*/
}



// ==== 0x007B20E0  AudioQueue::AllocBuffer  this=AudioQueue  sig=csp ====
_BYTE *__thiscall AudioQueue::AllocBuffer(AudioQueue *this, char a2)
{
  _BYTE *result; // eax
  int v3; // edi
  int v4; // esi
  int v5; // edi
  int v6; // esi

  result = 0; /*0x7b20e7*/
  if ( a2 ) /*0x7b20ed*/
  {
    if ( *((_DWORD *)this + 64537) == 128 ) /*0x7b219e*/
    {
      result = (_BYTE *)__2_YAPAXI_Z(0x2A0u); /*0x7b21a5*/
      result[22] = 1; /*0x7b21af*/
      result[21] = 1; /*0x7b21b2*/
    }
    else
    {
      v5 = 0; /*0x7b21b7*/
      while ( 1 ) /*0x7b21b9*/
      {
        v6 = *((_DWORD *)this + 64534); /*0x7b21b9*/
        *((_DWORD *)this + 64534) = v6 + 1; /*0x7b21c5*/
        if ( v6 + 1 > 127 ) /*0x7b21cb*/
          *((_DWORD *)this + 64534) = 0; /*0x7b21cd*/
        if ( !*((_BYTE *)this + 672 * v6 + 172133) ) /*0x7b21e2*/
          break; /*0x7b21e2*/
        if ( ++v5 >= 128 ) /*0x7b21f2*/
          return result; /*0x7b21f2*/
      }
      result = (char *)this + 672 * v6 + 172112; /*0x7b220b*/
      *((_BYTE *)this + 672 * v6 + 172133) = 1; /*0x7b2212*/
      ++*((_DWORD *)this + 64537); /*0x7b221c*/
    }
    if ( result ) /*0x7b2224*/
    {
      result[23] = 1; /*0x7b2226*/
      result[24] = 0; /*0x7b2229*/
    }
  }
  else
  {
    if ( *((_DWORD *)this + 64536) == 128 ) /*0x7b20fd*/
    {
      result = (_BYTE *)__2_YAPAXI_Z(0x2A0u); /*0x7b2104*/
      result[22] = 1; /*0x7b210e*/
      result[21] = 1; /*0x7b2111*/
    }
    else
    {
      v3 = 0; /*0x7b2116*/
      while ( 1 ) /*0x7b2118*/
      {
        v4 = *((_DWORD *)this + 64533); /*0x7b2118*/
        *((_DWORD *)this + 64533) = v4 + 1; /*0x7b2124*/
        if ( v4 + 1 > 127 ) /*0x7b212a*/
          *((_DWORD *)this + 64533) = 0; /*0x7b212c*/
        if ( !*((_BYTE *)this + 672 * v4 + 86117) ) /*0x7b2141*/
          break; /*0x7b2141*/
        if ( ++v3 >= 128 ) /*0x7b2151*/
          return result; /*0x7b2151*/
      }
      result = (char *)this + 672 * v4 + 86096; /*0x7b2168*/
      *((_BYTE *)this + 672 * v4 + 86117) = 1; /*0x7b216f*/
      ++*((_DWORD *)this + 64536); /*0x7b217a*/
    }
    if ( result ) /*0x7b2182*/
    {
      result[23] = 0; /*0x7b2188*/
      result[24] = 0; /*0x7b218c*/
    }
  }
  return result; /*0x7b2153*/
}



// ==== 0x007B2240  IPXInterfaceClass::processPacket  this=IPXInterfaceClass  sig=csp ====
_BYTE *__thiscall IPXInterfaceClass::processPacket(IPXInterfaceClass *this)
{
  _BYTE *result; // eax
  int v2; // edi
  int v3; // esi

  result = 0; /*0x7b2249*/
  if ( *((_DWORD *)this + 64535) == 128 ) /*0x7b2253*/
  {
    result = (_BYTE *)__2_YAPAXI_Z(0x2A0u); /*0x7b225a*/
    result[22] = 1; /*0x7b2264*/
    result[21] = 1; /*0x7b2267*/
  }
  else
  {
    v2 = 0; /*0x7b226c*/
    while ( 1 ) /*0x7b226e*/
    {
      v3 = *((_DWORD *)this + 64532); /*0x7b226e*/
      *((_DWORD *)this + 64532) = v3 + 1; /*0x7b227a*/
      if ( v3 + 1 > 127 ) /*0x7b2280*/
        *((_DWORD *)this + 64532) = 0; /*0x7b2282*/
      if ( !*((_BYTE *)this + 672 * v3 + 101) ) /*0x7b2297*/
        break; /*0x7b2297*/
      if ( ++v2 >= 128 ) /*0x7b22a4*/
        return result; /*0x7b22a4*/
    }
    result = (char *)this + 672 * v3 + 80; /*0x7b22b9*/
    *((_BYTE *)this + 672 * v3 + 101) = 1; /*0x7b22bd*/
    ++*((_DWORD *)this + 64535); /*0x7b22c8*/
  }
  if ( result ) /*0x7b22d0*/
  {
    result[23] = 0; /*0x7b22d2*/
    result[24] = 0; /*0x7b22d5*/
  }
  return result; /*0x7b22a6*/
}



// ==== 0x007B22E0  WinsockInterfaceClass::ReadBuffer  this=WinsockInterfaceClass  sig=csp ====
int __thiscall AudioQueue::ReadBuffer(
        WinsockInterfaceClass *this,
        void *a2,
        int a3,
        void *a4,
        unsigned int *a5,
        _WORD *a6)
{
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // ecx
  int v11; // edx
  int v12; // ecx

  EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x7b22e9*/
  if ( !this->BoundPort ) /*0x7b22ee*/
    return 0; /*0x7b22f5*/
  v8 = **((_DWORD **)this + 3); /*0x7b2304*/
  qmemcpy(a2, (const void *)(v8 + 32), *(_DWORD *)(v8 + 16)); /*0x7b2311*/
  v9 = *a5; /*0x7b231e*/
  if ( *a5 > 0x10 ) /*0x7b2323*/
    v9 = 16; /*0x7b2325*/
  *a5 = v9; /*0x7b232e*/
  qmemcpy(a4, (const void *)v8, v9); /*0x7b2337*/
  *a6 = *(_WORD *)(v8 + 26); /*0x7b234c*/
  *(_DWORD *)a3 = *(_DWORD *)(v8 + 16); /*0x7b2352*/
  v10 = this->BoundPort; /*0x7b2354*/
  if ( v10 > 0 ) /*0x7b2359*/
  {
    v11 = v10 - 1; /*0x7b235b*/
    v12 = 0; /*0x7b235e*/
    for ( this->BoundPort = v11; /*0x7b2365*/
          v12 < this->BoundPort;
          *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v12 - 4) = *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v12) )
    {
      ++v12; /*0x7b236a*/
    }
  }
  if ( *(_BYTE *)(v8 + 22) ) /*0x7b2379*/
  {
    __3_YAXPAX_Z((void *)v8); /*0x7b2381*/
  }
  else
  {
    *(_BYTE *)(v8 + 21) = 0; /*0x7b2391*/
    --*((_DWORD *)this + 64535); /*0x7b239d*/
  }
  return *(_DWORD *)a3; /*0x7b22f7*/
}



// ==== 0x007B23B0  WinsockInterfaceClass::WriteBuffer  this=WinsockInterfaceClass  sig=csp ====
__int16 __thiscall AudioQueue::WriteBuffer(
        WinsockInterfaceClass *this,
        const void *a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        char a6,
        char a7,
        __int16 a8)
{
  _BYTE *v9; // ebp
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // edx
  UINT v19; // eax

  v9 = AudioQueue::AllocBuffer((AudioQueue *)this, a6); /*0x7b23c4*/
  qmemcpy(v9 + 32, a2, a3); /*0x7b23d5*/
  *((_DWORD *)v9 + 4) = a3; /*0x7b23e6*/
  v9[20] = 0; /*0x7b23f4*/
  v9[24] = a7; /*0x7b23f8*/
  qmemcpy(v9, a4, a5); /*0x7b23fb*/
  *((_WORD *)v9 + 13) = a8; /*0x7b2409*/
  (*(void (__thiscall **)(WinsockInterfaceClass *, _BYTE *))(this->Socket + 84))(this, v9); /*0x7b2411*/
  if ( a6 ) /*0x7b241a*/
  {
    v10 = this->u32_4; /*0x7b241c*/
    if ( *((_DWORD *)this + 18) < v10 /*0x7b2444*/
      || (*((_BYTE *)this + 69) || !v10)
      && (v11 = *((_DWORD *)this + 19), v11 > 0)
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)this + 14) + 8))(
           (char *)this + 56,
           v10 + v11,
           0) )
    {
      v12 = *((_DWORD *)this + 18); /*0x7b244b*/
      v13 = *((_DWORD *)this + 15); /*0x7b244e*/
      *((_DWORD *)this + 18) = v12 + 1; /*0x7b2454*/
      *(_DWORD *)(v13 + 4 * v12) = v9; /*0x7b2457*/
    }
    v14 = *((_DWORD *)this + 64540); /*0x7b245a*/
  }
  else
  {
    v15 = *((_DWORD *)this + 10); /*0x7b2462*/
    if ( *((_DWORD *)this + 12) < v15 /*0x7b248a*/
      || (*((_BYTE *)this + 45) || !v15)
      && (v16 = *((_DWORD *)this + 13), v16 > 0)
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(this->u32_8 + 8))(
           (char *)this + 32,
           v15 + v16,
           0) )
    {
      v17 = *((_DWORD *)this + 12); /*0x7b2491*/
      v18 = *((_DWORD *)this + 9); /*0x7b2494*/
      *((_DWORD *)this + 12) = v17 + 1; /*0x7b249a*/
      *(_DWORD *)(v18 + 4 * v17) = v9; /*0x7b249d*/
    }
    v14 = *((_DWORD *)this + 64539); /*0x7b24a0*/
  }
  v19 = (*(int (__thiscall **)(WinsockInterfaceClass *, int))(this->Socket + 56))(this, v14); /*0x7b24af*/
  SendMessageA(g_hWnd, v19, 0, 2); /*0x7b24b9*/
  return EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x7b24ca*/
}



// ==== 0x007B24E0  WinsockInterfaceClass::Connect  this=WinsockInterfaceClass  sig=csp ====
__int16 __thiscall IPXInterfaceClass::Connect(WinsockInterfaceClass *this, const void *a2, unsigned int a3, char a4)
{
  _BYTE *v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  UINT v15; // eax

  v5 = AudioQueue::AllocBuffer((AudioQueue *)this, a4); /*0x7b24f4*/
  qmemcpy(v5 + 32, a2, a3); /*0x7b2505*/
  *((_DWORD *)v5 + 4) = a3; /*0x7b250e*/
  (*(void (__thiscall **)(WinsockInterfaceClass *, _BYTE *))(this->Socket + 84))(this, v5); /*0x7b2516*/
  v5[20] = 1; /*0x7b251d*/
  if ( a4 ) /*0x7b2523*/
  {
    v6 = this->u32_4; /*0x7b2525*/
    if ( *((_DWORD *)this + 18) < v6 /*0x7b254d*/
      || (*((_BYTE *)this + 69) || !v6)
      && (v7 = *((_DWORD *)this + 19), v7 > 0)
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)this + 14) + 8))(
           (char *)this + 56,
           v6 + v7,
           0) )
    {
      v8 = *((_DWORD *)this + 18); /*0x7b2554*/
      v9 = *((_DWORD *)this + 15); /*0x7b2557*/
      *((_DWORD *)this + 18) = v8 + 1; /*0x7b255d*/
      *(_DWORD *)(v9 + 4 * v8) = v5; /*0x7b2560*/
    }
    v10 = *((_DWORD *)this + 64540); /*0x7b2563*/
  }
  else
  {
    v11 = *((_DWORD *)this + 10); /*0x7b256b*/
    if ( *((_DWORD *)this + 12) < v11 /*0x7b2593*/
      || (*((_BYTE *)this + 45) || !v11)
      && (v12 = *((_DWORD *)this + 13), v12 > 0)
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(this->u32_8 + 8))(
           (char *)this + 32,
           v11 + v12,
           0) )
    {
      v13 = *((_DWORD *)this + 12); /*0x7b259a*/
      v14 = *((_DWORD *)this + 9); /*0x7b259d*/
      *((_DWORD *)this + 12) = v13 + 1; /*0x7b25a3*/
      *(_DWORD *)(v14 + 4 * v13) = v5; /*0x7b25a6*/
    }
    v10 = *((_DWORD *)this + 64539); /*0x7b25a9*/
  }
  v15 = (*(int (__thiscall **)(WinsockInterfaceClass *, int))(this->Socket + 56))(this, v10); /*0x7b25b9*/
  SendMessageA(g_hWnd, v15, 0, 2); /*0x7b25c3*/
  return EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x7b25d4*/
}



// ==== 0x007B25E0  WinsockInterfaceClass::GetAddress  this=WinsockInterfaceClass  sig=csp ====
int __stdcall IPXInterfaceClass::GetAddress(WinsockInterfaceClass *this)
{
  WinsockInterfaceClass *v1; // esi
  int optlen; // [esp+4h] [ebp-4h] BYREF

  v1 = this; /*0x7b25e6*/
  optlen = 4; /*0x7b25fb*/
  getsockopt((SOCKET)this, 0xFFFF, 4103, (char *)&this, &optlen); /*0x7b2603*/
  this = 0; /*0x7b261d*/
  return setsockopt((SOCKET)v1, 0xFFFF, 4103, (const char *)&this, optlen); /*0x7b262a*/
}



// ==== 0x007B2630  WinsockInterfaceClass::ConfigureBuffers  this=WinsockInterfaceClass  sig=csp ====
int __thiscall Socket::ConfigureBuffers(WinsockInterfaceClass *this, SOCKET s)
{
  SOCKET v2; // esi
  int result; // eax

  v2 = s; /*0x7b2631*/
  if ( s == -1 ) /*0x7b2638*/
    v2 = *((_DWORD *)this + 64539); /*0x7b263a*/
  if ( setsockopt(v2, 0xFFFF, 4098, optval, 4) == -1 ) /*0x7b265a*/
    WSAGetLastError(); /*0x7b265c*/
  Debug::Log(); /*0x7b2667*/
  if ( setsockopt(v2, 0xFFFF, 4097, byte_84DD9C, 4) == -1 ) /*0x7b2699*/
    WSAGetLastError(); /*0x7b269b*/
  result = Debug::Log(); /*0x7b26a6*/
  LOBYTE(result) = 1; /*0x7b26ae*/
  return result; /*0x7b26b0*/
}



// ==== 0x007B26D0  WinsockInterfaceClass::ReceivePacket  this=WinsockInterfaceClass  sig=csp ====
char __stdcall IPXInterfaceClass::ReceivePacket(WinsockInterfaceClass *this, int namelen)
{
  if ( gethostname((char *)this, namelen) == -1 ) /*0x7b26e3*/
  {
    WSAGetLastError(); /*0x7b26e5*/
    Debug::Log(); /*0x7b26f0*/
    return 0; /*0x7b26f8*/
  }
  else
  {
    Debug::Log(); /*0x7b2704*/
    return 1; /*0x7b270c*/
  }
}



// ==== 0x007B2720  SessionClass::SetInstance  this=SessionClass  sig=csp ====
void __thiscall SessionClass::SetInstance(SessionClass *this)
{
  dword_B780A0 = (int)this; /*0x7b2720*/
}



// ==== 0x007B2730  Network_Process_7B2730  this=-  sig=ida-proto ====
int sub_7B2730()
{
  return dword_B780A0; /*0x7b2735*/
}



// ==== 0x007B2740  WinsockInterfaceClass::Destru_vt13  this=WinsockInterfaceClass  sig=csp ====
int WinsockInterfaceClass::Destru_vt13(WinsockInterfaceClass *this)
{
  return 0; /*0x7b2742*/
}



// ==== 0x007B2750  WinsockInterfaceClass::Destru_vt14  this=WinsockInterfaceClass  sig=csp ====
int __stdcall WinsockInterfaceClass::Destru_vt14(WinsockInterfaceClass *this)
{
  return 0; /*0x7b2752*/
}



// ==== 0x007B2760  WinsockInterfaceClass::Destru_vt15  this=WinsockInterfaceClass  sig=csp ====
char __stdcall WinsockInterfaceClass::Destru_vt15(WinsockInterfaceClass *this)
{
  return 0; /*0x7b2762*/
}



// ==== 0x007B2770  WinsockInterfaceClass::Destru_vt16  this=WinsockInterfaceClass  sig=csp ====
int __stdcall WinsockInterfaceClass::Destru_vt16(WinsockInterfaceClass *this, int a2, int a3, int a4)
{
  return 1; /*0x7b2775*/
}



// ==== 0x007B2780  WinsockInterfaceClass::Destru_vt00  this=WinsockInterfaceClass  sig=csp ====
SOCKET *__thiscall WinsockInterfaceClass::Destru_vt00(WinsockInterfaceClass *this, char a2)
{
  char v3; // al
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax

  v3 = *((_BYTE *)this + 258152); /*0x7b2786*/
  this->Socket = (int)&WinsockInterfaceClass::`vftable'; /*0x7b278c*/
  if ( v3 ) /*0x7b2794*/
  {
    NetworkClass::UnregisterAsync(this); /*0x7b2796*/
    (*(void (__thiscall **)(WinsockInterfaceClass *))(this->Socket + 4))(this); /*0x7b27a0*/
    WSACleanup(); /*0x7b27a3*/
    *((_BYTE *)this + 258152) = 0; /*0x7b27a8*/
  }
  v4 = (void *)*((_DWORD *)this + 15); /*0x7b27ae*/
  *((_DWORD *)this + 14) = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b27b1*/
  if ( v4 && *((_BYTE *)this + 69) ) /*0x7b27bc*/
  {
    __3_YAXPAX_Z(v4); /*0x7b27c2*/
    *((_DWORD *)this + 15) = 0; /*0x7b27ca*/
  }
  *((_BYTE *)this + 69) = 0; /*0x7b27cd*/
  this->u32_4 = 0; /*0x7b27d0*/
  v5 = (void *)*((_DWORD *)this + 9); /*0x7b27d3*/
  this->u32_8 = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b27d6*/
  if ( v5 && *((_BYTE *)this + 45) ) /*0x7b27e1*/
  {
    __3_YAXPAX_Z(v5); /*0x7b27e7*/
    *((_DWORD *)this + 9) = 0; /*0x7b27ef*/
  }
  *((_BYTE *)this + 45) = 0; /*0x7b27f2*/
  *((_DWORD *)this + 10) = 0; /*0x7b27f5*/
  v6 = (void *)*((_DWORD *)this + 3); /*0x7b27f8*/
  this->LocalAddress = (int)&VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b27fb*/
  if ( v6 && *((_BYTE *)this + 21) ) /*0x7b2806*/
  {
    __3_YAXPAX_Z(v6); /*0x7b280c*/
    *((_DWORD *)this + 3) = 0; /*0x7b2814*/
  }
  *((_BYTE *)this + 21) = 0; /*0x7b281b*/
  this->u32_4 = 0; /*0x7b2820*/
  if ( (a2 & 1) != 0 ) /*0x7b2823*/
    __3_YAXPAX_Z(this); /*0x7b2826*/
  return (SOCKET *)this; /*0x7b2830*/
}



// ==== 0x007B2840  _DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass::getSocketCount  this=DynamicVector  sig=csp ====
void __thiscall IPXInterfaceClass::getSocketCount(_DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x7b2846*/
  this->m_10 = 0; /*0x7b2849*/
  if ( v2 && BYTE1(this->m_C) ) /*0x7b2850*/
  {
    __3_YAXPAX_Z(v2); /*0x7b2856*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7b285e*/
  }
  BYTE1(this->m_C) = 0; /*0x7b2861*/
  this->m_8 = 0; /*0x7b2864*/
}



// ==== 0x007B2870  _DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass::resetSocket  this=DynamicVector  sig=csp ====
unsigned int __thiscall IPXInterfaceClass::resetSocket(
        _DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7b2870*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7b2885*/
  else
    return 0; /*0x7b2877*/
}



// ==== 0x007B2890  _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Get(
        _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x7b289a*/
}



// ==== 0x007B28A0  _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Add(
        _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x7b28a2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x7b28ad*/
  {
    v3 = 0; /*0x7b28af*/
    if ( m_8 <= 0 ) /*0x7b28b3*/
      return 1; /*0x7b28d3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x7b28b5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x7b28bb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x7b28c4*/
    {
      ++v3; /*0x7b28c6*/
      ++v4; /*0x7b28c7*/
      if ( v3 >= m_8 ) /*0x7b28cc*/
        return 1; /*0x7b28cc*/
    }
  }
  return 0; /*0x7b28ce*/
}



// ==== 0x007B28E0  _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Release(
        _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x7b28ec*/
  {
    LOBYTE(this->m_C) = 0; /*0x7b28f6*/
    if ( a3 ) /*0x7b28fc*/
      v4 = a3; /*0x7b2912*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x7b290e*/
    LOBYTE(this->m_C) = 1; /*0x7b2916*/
    if ( v4 ) /*0x7b291a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x7b2925*/
      {
        m_8 = this->m_8; /*0x7b292c*/
        if ( a2 < m_8 ) /*0x7b2931*/
          m_8 = a2; /*0x7b2933*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7b2939*/
          ++i; /*0x7b293e*/
        if ( BYTE1(this->m_C) ) /*0x7b294b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7b2956*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x7b295e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x7b2967*/
      this->m_8 = a2; /*0x7b296f*/
      BYTE1(this->m_C) = a3 == 0; /*0x7b2972*/
      return 1; /*0x7b2978*/
    }
    else
    {
      return 0; /*0x7b291f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUWinsockBufferType_WinsockInterfaceClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x7b2982*/
    return 1; /*0x7b2988*/
  }
}



// ==== 0x007B2990  _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Remove(
        _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x7b299d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7b29a3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7b29ab*/
  }
  BYTE1(this->m_C) = 0; /*0x7b29ae*/
  this->m_8 = 0; /*0x7b29b1*/
}



// ==== 0x007B29C0  _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::GetSize(
        _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x7b29c0*/
    return 0; /*0x7b29c8*/
  m_8 = this->m_8; /*0x7b29ce*/
  result = 0; /*0x7b29d1*/
  if ( m_8 <= 0 ) /*0x7b29d5*/
    return -1; /*0x7b29ec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7b29db*/
  {
    if ( ++result >= m_8 ) /*0x7b29ea*/
      return -1; /*0x7b29ea*/
  }
  return result; /*0x7b29ca*/
}



// ==== 0x007B2A00  _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::GetCapacity(
        _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7b2a00*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7b2a15*/
  else
    return 0; /*0x7b2a07*/
}



// ==== 0x007B2A20  _DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass::getSocketState  this=DynamicVector  sig=csp ====
char __thiscall IPXInterfaceClass::getSocketState(
        _DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7b2a2c*/
  {
    LOBYTE(this->m_C) = 0; /*0x7b2a32*/
    if ( a3 ) /*0x7b2a38*/
      v4 = a3; /*0x7b2a4e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x7b2a4a*/
    LOBYTE(this->m_C) = 1; /*0x7b2a52*/
    if ( !v4 ) /*0x7b2a56*/
      return 0; /*0x7b2aca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x7b2a58*/
    {
      m_8 = this->m_8; /*0x7b2a5f*/
      if ( a2 < m_8 ) /*0x7b2a64*/
        m_8 = a2; /*0x7b2a66*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7b2a6c*/
        ++i; /*0x7b2a71*/
      if ( BYTE1(this->m_C) ) /*0x7b2a7e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7b2a89*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x7b2a91*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x7b2a9a*/
    this->m_8 = a2; /*0x7b2aa2*/
    BYTE1(this->m_C) = a3 == 0; /*0x7b2aa5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass *))(*(_DWORD *)this->__pad_0 /*0x7b2aae*/
                                                                                             + 12))(this);
  }
  v7 = this->m_8; /*0x7b2ab1*/
  if ( v7 < this->m_10 ) /*0x7b2ab9*/
    this->m_10 = v7; /*0x7b2abb*/
  return 1; /*0x7b2abe*/
}



// ==== 0x007B2AD0  _DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass::initSession  this=DynamicVector  sig=csp ====
int __thiscall IPXInterfaceClass::initSession(
        _DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x7b2ad0*/
  result = 0; /*0x7b2ad3*/
  if ( m_10 <= 0 ) /*0x7b2ad8*/
    return -1; /*0x7b2aef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7b2ade*/
  {
    if ( ++result >= m_10 ) /*0x7b2aed*/
      return -1; /*0x7b2aed*/
  }
  return result; /*0x7b2af2*/
}



// ==== 0x007B2B00  _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::QueryInterface(
        _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7b2b03*/
  *(_DWORD *)this->__pad_0 = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b2b06*/
  if ( v3 && BYTE1(this->m_C) ) /*0x7b2b10*/
  {
    __3_YAXPAX_Z(v3); /*0x7b2b18*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7b2b20*/
  }
  BYTE1(this->m_C) = 0; /*0x7b2b2b*/
  this->m_8 = 0; /*0x7b2b31*/
  if ( (a2 & 1) != 0 ) /*0x7b2b38*/
    __3_YAXPAX_Z(this); /*0x7b2b3b*/
  return this->__pad_0; /*0x7b2b45*/
}



// ==== 0x007B2B50  _DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass::closeSession  this=DynamicVector  sig=csp ====
_DWORD *__thiscall IPXInterfaceClass::closeSession(
        _DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7b2b53*/
  *(_DWORD *)this->__pad_0 = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b2b56*/
  if ( v3 && BYTE1(this->m_C) ) /*0x7b2b60*/
  {
    __3_YAXPAX_Z(v3); /*0x7b2b68*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7b2b70*/
  }
  BYTE1(this->m_C) = 0; /*0x7b2b7b*/
  this->m_8 = 0; /*0x7b2b81*/
  if ( (a2 & 1) != 0 ) /*0x7b2b88*/
    __3_YAXPAX_Z(this); /*0x7b2b8b*/
  return this->__pad_0; /*0x7b2b95*/
}



// ==== 0x007B2BA0  sub_7B2BA0  this=-  sig=ida-proto ====
void sub_7B2BA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7b2bac*/
  dbl_B780C8 = Math::Sqrt(v0 + v0); /*0x7b2bbe*/
}



// ==== 0x007B2BD0  sub_7B2BD0  this=-  sig=ida-proto ====
void sub_7B2BD0()
{
  dbl_B78118 = dbl_B780C8 / 60.0; /*0x7b2bdc*/
}



// ==== 0x007B2BF0  sub_7B2BF0  this=-  sig=ida-proto ====
void sub_7B2BF0()
{
  dbl_B78100 = 1.0 / dbl_B78118; /*0x7b2bfc*/
}



// ==== 0x007B2C10  sub_7B2C10  this=-  sig=ida-proto ====
void sub_7B2C10()
{
  dbl_B780F8 = 0.0174532925199433 * 45.0; /*0x7b2c1c*/
}



// ==== 0x007B2C30  sub_7B2C30  this=-  sig=ida-proto ====
void sub_7B2C30()
{
  dbl_B780D0 = 0.0174532925199433 * 60.0; /*0x7b2c3c*/
}



// ==== 0x007B2C50  sub_7B2C50  this=-  sig=ida-proto ====
void sub_7B2C50()
{
  dbl_B780A8 = 0.0174532925199433 * 90.0; /*0x7b2c5c*/
}



// ==== 0x007B2C70  sub_7B2C70  this=-  sig=ida-proto ====
__int64 sub_7B2C70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B780A8 - dbl_B780D0); /*0x7b2c82*/
  result = Math::RoundToInt(v0 * dbl_B780C8 * 0.5); /*0x7b2c96*/
  dword_B78120 = result; /*0x7b2c9b*/
  return result; /*0x7b2ca0*/
}



// ==== 0x007B2CB0  sub_7B2CB0  this=-  sig=ida-proto ====
void sub_7B2CB0()
{
  dbl_B780D8 = Math::ArcTan((double)dword_B78120 * 0.00390625); /*0x7b2cc7*/
}



// ==== 0x007B2CE0  sub_7B2CE0  this=-  sig=ida-proto ====
void sub_7B2CE0()
{
  dbl_B780F0 = Math::ArcTan((double)(2 * dword_B78120) / dbl_B780C8); /*0x7b2d02*/
}



// ==== 0x007B2D10  sub_7B2D10  this=-  sig=ida-proto ====
__int64 sub_7B2D10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B78120) + 0.5); /*0x7b2d2b*/
  dword_B78114 = result; /*0x7b2d30*/
  return result; /*0x7b2d36*/
}



// ==== 0x007B2D40  sub_7B2D40  this=-  sig=ida-proto ====
int sub_7B2D40()
{
  word_B780C0 = 0; /*0x7b2d42*/
  word_B780C2 = 0; /*0x7b2d48*/
  return 0; /*0x7b2d4e*/
}



// ==== 0x007B2D50  sub_7B2D50  this=-  sig=ida-proto ====
int sub_7B2D50()
{
  dword_B780E0 = 0; /*0x7b2d52*/
  dword_B780E4 = 0; /*0x7b2d57*/
  dword_B780E8 = 0; /*0x7b2d5c*/
  return 0; /*0x7b2d61*/
}



// ==== 0x007B2D70  sub_7B2D70  this=-  sig=ida-proto ====
int sub_7B2D70()
{
  dword_B78110 = 0; /*0x7b2d75*/
  dword_B78108 = 128; /*0x7b2d7f*/
  dword_B7810C = 128; /*0x7b2d84*/
  return 128; /*0x7b2d89*/
}



// ==== 0x007B2D90  sub_7B2D90  this=-  sig=ida-proto ====
int sub_7B2D90()
{
  dword_B780B0 = 0; /*0x7b2d92*/
  dword_B780B4 = 0; /*0x7b2d97*/
  dword_B780B8 = 0; /*0x7b2d9c*/
  dword_B780BC = 0; /*0x7b2da1*/
  return 0; /*0x7b2da6*/
}



// ==== 0x007B2DB0  Network::finalizeSession  this=UDPInterfaceClass  sig=csp ====
int __thiscall Network::finalizeSession(Network *this)
{
  IPXInterfaceClass::bindSocket((char *)this); /*0x7b2db3*/
  *((_DWORD *)this + 64719) = 0; /*0x7b2dc4*/
  *((_DWORD *)this + 64720) = 0; /*0x7b2dca*/
  *((_BYTE *)this + 258884) = 1; /*0x7b2dd0*/
  *((_BYTE *)this + 258885) = 0; /*0x7b2dd7*/
  *((_DWORD *)this + 64718) = &DynamicVectorClass<unsigned char *>::`vftable'; /*0x7b2ddd*/
  *((_DWORD *)this + 64723) = 10; /*0x7b2de3*/
  *((_DWORD *)this + 64722) = 0; /*0x7b2de9*/
  *((_DWORD *)this + 64853) = 0; /*0x7b2def*/
  *((_DWORD *)this + 64854) = 0; /*0x7b2df5*/
  *((_BYTE *)this + 259420) = 1; /*0x7b2dfb*/
  *((_BYTE *)this + 259421) = 0; /*0x7b2e02*/
  *((_DWORD *)this + 64852) = &DynamicVectorClass<unsigned char *>::`vftable'; /*0x7b2e08*/
  *((_DWORD *)this + 64857) = 10; /*0x7b2e0e*/
  *((_DWORD *)this + 64856) = 0; /*0x7b2e14*/
  *((_WORD *)this + 129406) = 0; /*0x7b2e1a*/
  *((_DWORD *)this + 64716) = 0; /*0x7b2e21*/
  *((_DWORD *)this + 64858) = 0; /*0x7b2e27*/
  this->Network_field_0x0 = (int)&UDPInterfaceClass::`vftable'; /*0x7b2e2d*/
  *((_DWORD *)this + 64717) = -1; /*0x7b2e33*/
  return (int)this; /*0x7b2e3f*/
}



// ==== 0x007B2E50  UDPInterfaceClass::method_7B2E50  this=UDPInterfaceClass  sig=csp ====
void __thiscall sub_7B2E50(UDPInterfaceClass *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  void *v8; // eax
  void *v9; // eax

  this->Socket = (int)&UDPInterfaceClass::`vftable'; /*0x7b2e56*/
  while ( *((_DWORD *)this + 64722) ) /*0x7b2e5c*/
  {
    __3_YAXPAX_Z(**((void ***)this + 64719)); /*0x7b2e6f*/
    v2 = *((_DWORD *)this + 64722); /*0x7b2e74*/
    if ( v2 > 0 ) /*0x7b2e7f*/
    {
      v3 = v2 - 1; /*0x7b2e81*/
      v4 = 0; /*0x7b2e84*/
      for ( *((_DWORD *)this + 64722) = v3; /*0x7b2e8e*/
            v4 < *((_DWORD *)this + 64722);
            *(_DWORD *)(*((_DWORD *)this + 64719) + 4 * v4 - 4) = *(_DWORD *)(*((_DWORD *)this + 64719) + 4 * v4) )
      {
        ++v4; /*0x7b2e96*/
      }
    }
  }
  while ( *((_DWORD *)this + 64856) ) /*0x7b2eb0*/
  {
    __3_YAXPAX_Z(**((void ***)this + 64853)); /*0x7b2ec1*/
    v5 = *((_DWORD *)this + 64856); /*0x7b2ec6*/
    if ( v5 > 0 ) /*0x7b2ed1*/
    {
      v6 = v5 - 1; /*0x7b2ed3*/
      v7 = 0; /*0x7b2ed6*/
      for ( *((_DWORD *)this + 64856) = v6; /*0x7b2ee0*/
            v7 < *((_DWORD *)this + 64856);
            *(_DWORD *)(*((_DWORD *)this + 64853) + 4 * v7 - 4) = *(_DWORD *)(*((_DWORD *)this + 64853) + 4 * v7) )
      {
        ++v7; /*0x7b2ee8*/
      }
    }
  }
  UDPInterfaceClass::connect(this); /*0x7b2f04*/
  v8 = (void *)*((_DWORD *)this + 64853); /*0x7b2f09*/
  *((_DWORD *)this + 64852) = &VectorClass<unsigned char *>::`vftable'; /*0x7b2f0f*/
  if ( v8 && *((_BYTE *)this + 259421) ) /*0x7b2f1d*/
  {
    __3_YAXPAX_Z(v8); /*0x7b2f26*/
    *((_DWORD *)this + 64853) = 0; /*0x7b2f2e*/
  }
  *((_BYTE *)this + 259421) = 0; /*0x7b2f34*/
  *((_DWORD *)this + 64854) = 0; /*0x7b2f3a*/
  v9 = (void *)*((_DWORD *)this + 64719); /*0x7b2f40*/
  *((_DWORD *)this + 64718) = &VectorClass<unsigned char *>::`vftable'; /*0x7b2f46*/
  if ( v9 && *((_BYTE *)this + 258885) ) /*0x7b2f54*/
  {
    __3_YAXPAX_Z(v9); /*0x7b2f5d*/
    *((_DWORD *)this + 64719) = 0; /*0x7b2f65*/
  }
  *((_BYTE *)this + 258885) = 0; /*0x7b2f6d*/
  *((_DWORD *)this + 64720) = 0; /*0x7b2f73*/
  WinsockInterfaceClass::WinsockInterfaceClass((int)this); /*0x7b2f79*/
}



// ==== 0x007B2F90  UDPInterfaceClass::GetQueueSize  this=UDPInterfaceClass  sig=csp ====
int __thiscall UDPInterfaceClass_Destru::GetQueueSize(UDPInterfaceClass *this)
{
  int result; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // eax

  for ( result = *((_DWORD *)this + 64722); result; result = *((_DWORD *)this + 64722) ) /*0x7b2f9b*/
  {
    __3_YAXPAX_Z(**((void ***)this + 64719)); /*0x7b2fa6*/
    v3 = *((_DWORD *)this + 64722); /*0x7b2fab*/
    if ( v3 > 0 ) /*0x7b2fb6*/
    {
      v4 = v3 - 1; /*0x7b2fb8*/
      v5 = 0; /*0x7b2fbb*/
      for ( *((_DWORD *)this + 64722) = v4; /*0x7b2fc5*/
            v5 < *((_DWORD *)this + 64722);
            *(_DWORD *)(*((_DWORD *)this + 64719) + 4 * v5 - 4) = *(_DWORD *)(*((_DWORD *)this + 64719) + 4 * v5) )
      {
        ++v5; /*0x7b2fcd*/
      }
    }
  }
  return result; /*0x7b2fe9*/
}



// ==== 0x007B2FF0  UDPInterfaceClass::Flush  this=UDPInterfaceClass  sig=csp ====
int __thiscall UDPInterfaceClass_Destru::Flush(UDPInterfaceClass *this, char *Buffer, u_short a3)
{
  _BYTE *v4; // edi
  u_short v5; // ax
  int v6; // ecx
  UDPInterfaceClass *v7; // esi
  int result; // eax
  int v9; // ecx
  int v10; // edx
  char v11; // [esp+8h] [ebp-10h] BYREF
  char v12; // [esp+Ch] [ebp-Ch] BYREF
  char v13; // [esp+10h] [ebp-8h] BYREF
  char v14; // [esp+14h] [ebp-4h] BYREF

  v4 = (_BYTE *)__2_YAPAXI_Z(4u); /*0x7b2ffe*/
  sscanf(Buffer, "%d.%d.%d.%d", &v11, &v12, &v13, &v14); /*0x7b301e*/
  *v4 = v11; /*0x7b302a*/
  v4[1] = v12; /*0x7b3030*/
  v5 = a3; /*0x7b3037*/
  v4[2] = v13; /*0x7b303b*/
  v4[3] = v14; /*0x7b3045*/
  if ( !a3 ) /*0x7b3048*/
    v5 = hostshort; /*0x7b304a*/
  v6 = *((_DWORD *)this + 64722); /*0x7b304f*/
  v7 = this + 32359; /*0x7b3055*/
  *((_WORD *)&v7[3].Socket + v6) = v5; /*0x7b305b*/
  result = v7[1].Socket; /*0x7b3060*/
  if ( v7[2].Socket < result /*0x7b3088*/
    || (v7[1].__pad_5[0] || !result)
    && (v9 = *(_DWORD *)&v7[2].Initialized, v9 > 0)
    && (result = (*(int (__thiscall **)(UDPInterfaceClass *, int, _DWORD))(v7->Socket + 8))(v7, result + v9, 0),
        (_BYTE)result) )
  {
    result = v7[2].Socket; /*0x7b308a*/
    v10 = *(_DWORD *)&v7->Initialized; /*0x7b308d*/
    v7[2].Socket = result + 1; /*0x7b3093*/
    *(_DWORD *)(v10 + 4 * result) = v4; /*0x7b3096*/
  }
  return result; /*0x7b3099*/
}



// ==== 0x007B30B0  UDPInterfaceClass::Send  this=UDPInterfaceClass  sig=csp ====
char __thiscall UDPInterfaceClass_Destru::Send(UDPInterfaceClass *this, u_short a2)
{
  int v3; // eax
  __int16 v5; // ax
  SOCKET v6; // edx
  char optval[2]; // [esp+4h] [ebp-14h] BYREF
  __int16 v8; // [esp+6h] [ebp-12h]
  struct sockaddr name; // [esp+8h] [ebp-10h] BYREF

  if ( *((_DWORD *)this + 64539) != -1 ) /*0x7b30bf*/
  {
    closesocket(*((_DWORD *)this + 64539)); /*0x7b30c2*/
    *((_DWORD *)this + 64539) = -1; /*0x7b30c7*/
  }
  Debug::Log(); /*0x7b30d6*/
  v3 = socket(2, 2, 0); /*0x7b30e4*/
  *((_DWORD *)this + 64539) = v3; /*0x7b30ec*/
  if ( v3 == -1 ) /*0x7b30f2*/
    return 0; /*0x7b30f4*/
  name.sa_family = 2; /*0x7b3105*/
  if ( a2 ) /*0x7b310c*/
  {
    *((_WORD *)this + 129406) = a2; /*0x7b310e*/
    v5 = htons(a2); /*0x7b3116*/
  }
  else
  {
    *((_WORD *)this + 129406) = 0; /*0x7b3118*/
    v5 = htons(hostshort); /*0x7b3128*/
  }
  *(_WORD *)name.sa_data = v5; /*0x7b312f*/
  *(_DWORD *)&name.sa_data[2] = htonl(0); /*0x7b313f*/
  Debug::Log(); /*0x7b3149*/
  if ( bind(*((_DWORD *)this + 64539), &name, 16) == -1 ) /*0x7b3168*/
  {
    WSAGetLastError(); /*0x7b316a*/
    Debug::Log(); /*0x7b3175*/
    (*(void (__thiscall **)(UDPInterfaceClass *))(this->Socket + 4))(this); /*0x7b3181*/
    return 0; /*0x7b3184*/
  }
  else
  {
    v6 = *((_DWORD *)this + 64539); /*0x7b318d*/
    *(_WORD *)optval = 0; /*0x7b31a5*/
    v8 = 0; /*0x7b31ac*/
    setsockopt(v6, 0xFFFF, 128, optval, 4); /*0x7b31b3*/
    Socket::ConfigureBuffers((WinsockInterfaceClass *)this, 0xFFFFFFFF); /*0x7b31bc*/
    Debug::Log(); /*0x7b31c6*/
    return 1; /*0x7b31ce*/
  }
}



// ==== 0x007B31E0  UDPInterfaceClass::SetAddress  this=UDPInterfaceClass  sig=csp ====
char __thiscall UDPInterfaceClass_Destru::SetAddress(UDPInterfaceClass *this, u_short hostshort)
{
  int v4; // ecx
  int v5; // eax
  UDPInterfaceClass *v6; // edx
  SOCKET v7; // esi
  struct sockaddr name; // [esp+10h] [ebp-10h] BYREF

  if ( !hostshort ) /*0x7b31f0*/
    return 0; /*0x7b31fb*/
  v4 = *((_DWORD *)this + 64716); /*0x7b31fe*/
  v5 = 0; /*0x7b3204*/
  if ( v4 > 0 ) /*0x7b3208*/
  {
    v6 = this + 32356; /*0x7b320a*/
    while ( LOWORD(v6->Socket) != hostshort ) /*0x7b3213*/
    {
      ++v5; /*0x7b3219*/
      v6 = (UDPInterfaceClass *)((char *)v6 + 2); /*0x7b321a*/
      if ( v5 >= v4 ) /*0x7b321f*/
        goto LABEL_7; /*0x7b321f*/
    }
    return 0; /*0x7b3213*/
  }
LABEL_7:
  Debug::Log(); /*0x7b3221*/
  v7 = socket(2, 2, 0); /*0x7b3239*/
  if ( v7 == -1 ) /*0x7b323e*/
    return 0; /*0x7b3249*/
  Debug::Log(); /*0x7b3252*/
  name.sa_family = 2; /*0x7b325a*/
  *(_WORD *)name.sa_data = htons(hostshort); /*0x7b3269*/
  *(_DWORD *)&name.sa_data[2] = htonl(0); /*0x7b3275*/
  Debug::Log(); /*0x7b3285*/
  if ( bind(v7, &name, 16) == -1 ) /*0x7b329d*/
  {
    closesocket(v7); /*0x7b32a0*/
    Debug::Log(); /*0x7b32ab*/
    return 0; /*0x7b32bc*/
  }
  *((_WORD *)this + *((_DWORD *)this + 64716) + 129424) = hostshort; /*0x7b32c6*/
  *((_DWORD *)this + (*((_DWORD *)this + 64716))++ + 64704) = v7; /*0x7b32d6*/
  Socket::ConfigureBuffers((WinsockInterfaceClass *)this, v7); /*0x7b32ea*/
  Debug::Log(); /*0x7b32f4*/
  return 1; /*0x7b31f2*/
}



// ==== 0x007B3310  UDPInterfaceClass::CheckStatus  this=UDPInterfaceClass  sig=csp ====
void __thiscall UDPInterfaceClass::CheckStatus(UDPInterfaceClass *this, __int16 a2)
{
  int v3; // ecx
  int v4; // edi
  UDPInterfaceClass *i; // eax
  SOCKET *v6; // ebx
  int v7; // edx
  _WORD *v8; // ecx
  _DWORD *v9; // eax

  if ( a2 ) /*0x7b331c*/
  {
    v3 = *((_DWORD *)this + 64716); /*0x7b3322*/
    v4 = 0; /*0x7b3328*/
    if ( v3 > 0 ) /*0x7b332c*/
    {
      for ( i = this + 32356; LOWORD(i->Socket) != a2; i = (UDPInterfaceClass *)((char *)i + 2) ) /*0x7b3332*/
      {
        if ( ++v4 >= v3 ) /*0x7b3343*/
          return; /*0x7b3343*/
      }
      v6 = (SOCKET *)this + v4 + 64704; /*0x7b3352*/
      Debug::Log(); /*0x7b335f*/
      closesocket(*v6); /*0x7b336a*/
      if ( *v6 == *((_DWORD *)this + 64717) ) /*0x7b3379*/
        *((_DWORD *)this + 64717) = -1; /*0x7b337b*/
      v7 = v4; /*0x7b338b*/
      if ( v4 < *((_DWORD *)this + 64716) - 1 ) /*0x7b3390*/
      {
        v8 = (_WORD *)this + v4 + 129424; /*0x7b3392*/
        v9 = (_DWORD *)this + v4 + 64704; /*0x7b3399*/
        do /*0x7b33b7*/
        {
          ++v7; /*0x7b339e*/
          *v9 = v9[1]; /*0x7b339f*/
          *v8 = v8[1]; /*0x7b33a5*/
          ++v9; /*0x7b33ae*/
          ++v8; /*0x7b33b1*/
        }
        while ( v7 < *((_DWORD *)this + 64716) - 1 ); /*0x7b33b7*/
      }
      --*((_DWORD *)this + 64716); /*0x7b33c1*/
    }
  }
}



// ==== 0x007B33D0  UDPInterfaceClass::GetStatistics  this=UDPInterfaceClass  sig=csp ====
void __thiscall UDPInterfaceClass::GetStatistics(UDPInterfaceClass *this, unsigned __int16 a2)
{
  int v2; // esi
  int v3; // eax
  UDPInterfaceClass *v4; // edx

  if ( !a2 || a2 == *(_DWORD *)&hostshort || (v2 = *((_DWORD *)this + 64716), v3 = 0, v2 <= 0) ) /*0x7b33f6*/
  {
LABEL_7:
    *((_DWORD *)this + 64717) = -1; /*0x7b340b*/
  }
  else
  {
    v4 = this + 32356; /*0x7b33f8*/
    while ( LOWORD(v4->Socket) != a2 ) /*0x7b3401*/
    {
      ++v3; /*0x7b3403*/
      v4 = (UDPInterfaceClass *)((char *)v4 + 2); /*0x7b3404*/
      if ( v3 >= v2 ) /*0x7b3409*/
        goto LABEL_7; /*0x7b3409*/
    }
    *((_DWORD *)this + 64717) = *((_DWORD *)this + v3 + 64704); /*0x7b3422*/
  }
}



// ==== 0x007B3430  UDPInterfaceClass::GetAddress  this=UDPInterfaceClass  sig=csp ====
char __thiscall UDPInterfaceClass_Destru::GetAddress(UDPInterfaceClass *this)
{
  if ( !(unsigned __int8)WinsockInterface::Init((WinsockInterface *)this) ) /*0x7b3433*/
    return 0; /*0x7b344a*/
  *((_DWORD *)this + 64716) = 0; /*0x7b343c*/
  return 1; /*0x7b3448*/
}



// ==== 0x007B3450  UDPInterfaceClass::Bind  this=UDPInterfaceClass  sig=csp ====
char __thiscall UDPInterfaceClass_Destru::Bind(UDPInterfaceClass *this, int a2)
{
  char result; // al
  struct hostent *v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  char *i; // eax
  _DWORD *v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  SOCKET v15; // [esp-10h] [ebp-B8h]
  char **h_addr_list; // [esp+Ch] [ebp-9Ch]
  char optval[4]; // [esp+10h] [ebp-98h] BYREF
  int v18; // [esp+14h] [ebp-94h]
  struct sockaddr v19; // [esp+18h] [ebp-90h] BYREF
  char name[128]; // [esp+28h] [ebp-80h] BYREF

  if ( *((_BYTE *)this + 258152) /*0x7b346b*/
    || (result = (*(int (__thiscall **)(UDPInterfaceClass *))(this->Socket + 100))(this)) != 0 )
  {
    (*(void (__thiscall **)(UDPInterfaceClass *, u_short))(this->Socket + 92))(this, hostshort); /*0x7b3483*/
    Debug::Log(); /*0x7b348b*/
    if ( gethostname(name, 128) ) /*0x7b349d*/
      Debug::Log(); /*0x7b34b0*/
    Debug::Log(); /*0x7b34bd*/
    v4 = gethostbyname(name); /*0x7b34cf*/
    if ( !v4 ) /*0x7b34d3*/
    {
      WSAGetLastError(); /*0x7b34d5*/
      Debug::Log(); /*0x7b34e0*/
    }
    while ( *((_DWORD *)this + 64856) ) /*0x7b34e8*/
    {
      __3_YAXPAX_Z(**((void ***)this + 64853)); /*0x7b34fb*/
      v5 = *((_DWORD *)this + 64856); /*0x7b3500*/
      if ( v5 > 0 ) /*0x7b350b*/
      {
        v6 = v5 - 1; /*0x7b350d*/
        v7 = 0; /*0x7b3510*/
        for ( *((_DWORD *)this + 64856) = v6; /*0x7b351a*/
              v7 < *((_DWORD *)this + 64856);
              *(_DWORD *)(*((_DWORD *)this + 64853) + 4 * v7 - 4) = *(_DWORD *)(*((_DWORD *)this + 64853) + 4 * v7) )
        {
          ++v7; /*0x7b3522*/
        }
      }
    }
    h_addr_list = v4->h_addr_list; /*0x7b3541*/
    for ( i = *h_addr_list; *h_addr_list; i = *h_addr_list ) /*0x7b3545*/
    {
      v18 = *(_DWORD *)i; /*0x7b3565*/
      ++h_addr_list; /*0x7b3569*/
      Debug::Log(); /*0x7b3587*/
      v9 = (_DWORD *)__2_YAPAXI_Z(4u); /*0x7b3593*/
      *v9 = v18; /*0x7b3598*/
      v10 = *((_DWORD *)this + 64854); /*0x7b359b*/
      if ( *((_DWORD *)this + 64856) >= v10 ) /*0x7b35a1*/
      {
        if ( !*((_BYTE *)this + 259421) && v10 ) /*0x7b35ac*/
          continue; /*0x7b35ac*/
        v11 = *((_DWORD *)this + 64857); /*0x7b35ae*/
        if ( v11 <= 0 /*0x7b35be*/
          || !(*(unsigned __int8 (__thiscall **)(UDPInterfaceClass *, int, _DWORD))(*((_DWORD *)this + 64852) + 8))(
                this + 32426,
                v10 + v11,
                0) )
        {
          continue; /*0x7b35be*/
        }
      }
      v12 = *((_DWORD *)this + 64856); /*0x7b35c5*/
      v13 = *((_DWORD *)this + 64853); /*0x7b35c8*/
      *((_DWORD *)this + 64856) = v12 + 1; /*0x7b35ce*/
      *(_DWORD *)(v13 + 4 * v12) = v9; /*0x7b35d1*/
    }
    Debug::Log(); /*0x7b35e9*/
    v14 = socket(2, 2, 0); /*0x7b35f8*/
    *((_DWORD *)this + 64540) = v14; /*0x7b3600*/
    if ( v14 == -1 ) /*0x7b3606*/
    {
      return 0; /*0x7b3609*/
    }
    else
    {
      v19.sa_family = 2; /*0x7b361c*/
      *(_WORD *)v19.sa_data = htons(dword_841F38); /*0x7b362a*/
      *(_DWORD *)&v19.sa_data[2] = htonl(0); /*0x7b3639*/
      Debug::Log(); /*0x7b363d*/
      if ( bind(*((_DWORD *)this + 64540), &v19, 16) == -1 ) /*0x7b365b*/
      {
        (*(void (__thiscall **)(UDPInterfaceClass *))(this->Socket + 4))(this); /*0x7b3661*/
        return 0; /*0x7b3665*/
      }
      else
      {
        v15 = *((_DWORD *)this + 64540); /*0x7b3688*/
        memset(optval, 0, sizeof(optval)); /*0x7b3689*/
        setsockopt(v15, 0xFFFF, 128, optval, 4); /*0x7b3693*/
        Socket::ConfigureBuffers((WinsockInterfaceClass *)this, *((_DWORD *)this + 64540)); /*0x7b36a1*/
        Debug::Log(); /*0x7b36ab*/
        return 1; /*0x7b36b3*/
      }
    }
  }
  return result; /*0x7b346d*/
}



// ==== 0x007B36C0  UDPInterfaceClass::ddtor  this=UDPInterfaceClass  sig=csp ====
__int16 __thiscall UDPInterfaceClass_Destru::ddtor(
        UDPInterfaceClass *this,
        const void *a2,
        unsigned int a3,
        _BYTE *a4,
        unsigned int a5,
        int a6,
        char a7,
        __int16 a8)
{
  if ( a4 && Network::IsBroadcastAddr((Network *)a4) ) /*0x7b36ce*/
    return (*(__int16 (__thiscall **)(UDPInterfaceClass *, const void *, unsigned int, int))(this->Socket + 16))( /*0x7b36ea*/
             this,
             a2,
             a3,
             a6);
  else
    return AudioQueue::WriteBuffer((WinsockInterfaceClass *)this, a2, a3, a4, a5, a6, a7, a8); /*0x7b3713*/
}



// ==== 0x007B3720  UDPInterfaceClass::Connect  this=UDPInterfaceClass  sig=csp ====
int __userpurge UDPInterfaceClass_Destru::Connect@<eax>(
        UDPInterfaceClass *this,
        int a2@<edi>,
        const void *a3,
        unsigned int a4,
        char a5,
        char a6)
{
  int v6; // ecx
  int v7; // ebx
  int result; // eax
  _BYTE *v9; // ebp
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  WPARAM v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  UINT v20; // eax
  WPARAM v21; // [esp-8h] [ebp-20h]
  _WORD *v23; // [esp+10h] [ebp-8h]
  int v24; // [esp+14h] [ebp-4h]

  v7 = v6; /*0x7b3724*/
  v24 = 0; /*0x7b3726*/
  result = *(_DWORD *)(v6 + 258888); /*0x7b372e*/
  if ( result > 0 ) /*0x7b3736*/
  {
    v23 = (_WORD *)(v6 + 258896); /*0x7b3745*/
    do /*0x7b3875*/
    {
      v9 = AudioQueue::AllocBuffer((AudioQueue *)v7, a4); /*0x7b3759*/
      qmemcpy(v9 + 32, this, (unsigned int)a3); /*0x7b376a*/
      *((_DWORD *)v9 + 4) = a3; /*0x7b3773*/
      v9[20] = 1; /*0x7b377a*/
      *(_DWORD *)v9 = 0; /*0x7b377e*/
      v10 = v24; /*0x7b3780*/
      *((_DWORD *)v9 + 1) = 0; /*0x7b3784*/
      *((_DWORD *)v9 + 2) = 0; /*0x7b3787*/
      *((_DWORD *)v9 + 3) = 0; /*0x7b378a*/
      *((_DWORD *)v9 + 1) = **(_DWORD **)(*(_DWORD *)(v7 + 258876) + 4 * v24); /*0x7b379c*/
      *((_WORD *)v9 + 13) = *v23; /*0x7b37a2*/
      (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v7 + 84))(v7, v9, a2); /*0x7b37aa*/
      if ( a5 ) /*0x7b37b3*/
      {
        v11 = *(_DWORD *)(v7 + 64); /*0x7b37b5*/
        if ( *(_DWORD *)(v7 + 72) < v11 /*0x7b37dd*/
          || (*(_BYTE *)(v7 + 69) || !v11)
          && (v12 = *(_DWORD *)(v7 + 76), v12 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v7 + 56) + 8))(v7 + 56, v11 + v12, 0) )
        {
          v13 = *(_DWORD *)(v7 + 72); /*0x7b37e4*/
          v14 = *(_DWORD *)(v7 + 60); /*0x7b37e7*/
          *(_DWORD *)(v7 + 72) = v13 + 1; /*0x7b37ed*/
          *(_DWORD *)(v14 + 4 * v13) = v9; /*0x7b37f0*/
        }
        v15 = *(_DWORD *)(v7 + 258160); /*0x7b37f3*/
      }
      else
      {
        v16 = *(_DWORD *)(v7 + 40); /*0x7b37fb*/
        if ( *(_DWORD *)(v7 + 48) < v16 /*0x7b3823*/
          || (*(_BYTE *)(v7 + 45) || !v16)
          && (v17 = *(_DWORD *)(v7 + 52), v17 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v7 + 32) + 8))(v7 + 32, v16 + v17, 0) )
        {
          v18 = *(_DWORD *)(v7 + 48); /*0x7b382a*/
          v19 = *(_DWORD *)(v7 + 36); /*0x7b382d*/
          *(_DWORD *)(v7 + 48) = v18 + 1; /*0x7b3833*/
          *(_DWORD *)(v19 + 4 * v18) = v9; /*0x7b3836*/
        }
        v15 = *(_DWORD *)(v7 + 258156); /*0x7b3839*/
      }
      a2 = 2; /*0x7b3841*/
      v21 = v15; /*0x7b3845*/
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 56))(v7); /*0x7b3848*/
      SendMessageA(g_hWnd, v20, v21, 0); /*0x7b3852*/
      MessageLoop(); /*0x7b3858*/
      result = *(_DWORD *)(v7 + 258888); /*0x7b3861*/
      ++v24; /*0x7b386d*/
      ++v23; /*0x7b3871*/
    }
    while ( v10 + 1 < result ); /*0x7b3875*/
  }
  return result; /*0x7b387e*/
}



// ==== 0x007B3890  UDPInterfaceClass::Receive  this=UDPInterfaceClass  sig=csp ====
int __thiscall UDPInterfaceClass_Destru::Receive(UDPInterfaceClass *this)
{
  int v2; // ebx
  AnimClass **v3; // edi
  HWND v4; // eax
  int result; // eax
  int v6; // [esp+0h] [ebp-Ch]

  if ( IPXInterfaceClass::Receive((WinsockInterfaceClass *)this) && (v2 = 0, *((int *)this + 64716) > 0) ) /*0x7b38a8*/
  {
    v3 = (AnimClass **)(this + 32352); /*0x7b38aa*/
    while ( 1 ) /*0x7b38b8*/
    {
      v4 = (HWND)(*(int (__thiscall **)(UDPInterfaceClass *, int))(this->Socket + 56))(this, -1); /*0x7b38b8*/
      if ( WSAAsyncSelect(*v3, (SOCKET)g_hWnd, v4, 3u, v6) == (AnimClass *)-1 ) /*0x7b38ce*/
        break; /*0x7b38ce*/
      ++v2; /*0x7b38d6*/
      ++v3; /*0x7b38d7*/
      if ( v2 >= *((_DWORD *)this + 64716) ) /*0x7b38dc*/
        goto LABEL_6; /*0x7b38dc*/
    }
    result = Debug::Log(); /*0x7b38ee*/
    LOBYTE(result) = 0; /*0x7b38f6*/
  }
  else
  {
LABEL_6:
    result = (int)MessageLoop(); /*0x7b38de*/
    LOBYTE(result) = 1; /*0x7b38e5*/
  }
  return result; /*0x7b38e3*/
}



// ==== 0x007B3900  UDPInterfaceClass::CheckStatus  this=UDPInterfaceClass  sig=csp ====
int __thiscall UDPInterfaceClass_Destru::CheckStatus(UDPInterfaceClass *this)
{
  NetworkClass::UnregisterAsync((WinsockInterfaceClass *)this); /*0x7b3903*/
  return (*(int (__thiscall **)(UDPInterfaceClass *))(this->Socket + 112))(this); /*0x7b390f*/
}



// ==== 0x007B3920  UDPInterfaceClass::Reset  this=UDPInterfaceClass  sig=csp ====
void __thiscall UDPInterfaceClass_Destru::Reset(UDPInterfaceClass *this, _DWORD *a2, __int16 a3)
{
  int v4; // edi
  __int16 v5; // bp
  int v6; // eax
  _DWORD *v7; // edx
  _WORD *v8; // ecx

  v4 = *((_DWORD *)this + 64858); /*0x7b3926*/
  if ( v4 < 16 ) /*0x7b392f*/
  {
    v5 = a3; /*0x7b3939*/
    v6 = 0; /*0x7b393d*/
    if ( v4 > 0 ) /*0x7b3941*/
    {
      v7 = (_DWORD *)this + 64859; /*0x7b3943*/
      v8 = (_WORD *)this + 129750; /*0x7b3949*/
      do /*0x7b3967*/
      {
        if ( v5 == *v8 ) /*0x7b3952*/
        {
          if ( *a2 == *v7 ) /*0x7b3958*/
            return; /*0x7b3958*/
          v5 = a3; /*0x7b395a*/
        }
        ++v6; /*0x7b395e*/
        ++v8; /*0x7b395f*/
        ++v7; /*0x7b3962*/
      }
      while ( v6 < v4 ); /*0x7b3967*/
    }
    Debug::Log(); /*0x7b398d*/
    *((_DWORD *)this + *((_DWORD *)this + 64858) + 64859) = *a2; /*0x7b399d*/
    *((_WORD *)this + (*((_DWORD *)this + 64858))++ + 129750) = v5; /*0x7b39aa*/
  }
}



// ==== 0x007B39D0  ObjectClass::method_7B39D0  this=ObjectClass  sig=csp ====
char __thiscall sub_7B39D0(ObjectClass *this, _DWORD *a2, __int16 a3)
{
  int v3; // esi
  int v4; // eax
  ObjectClass *v5; // edx
  _WORD *i; // ecx

  v3 = *((_DWORD *)this + 64858); /*0x7b39d3*/
  v4 = 0; /*0x7b39d9*/
  if ( v3 <= 0 ) /*0x7b39de*/
    return 1; /*0x7b3a0b*/
  v5 = (ObjectClass *)((char *)this + 259436); /*0x7b39e9*/
  for ( i = (_WORD *)((char *)this + 259500); a3 != *i || (void *)*a2 != v5->AbstractClass; ++i ) /*0x7b39ef*/
  {
    ++v4; /*0x7b3a00*/
    v5 = (ObjectClass *)((char *)v5 + 4); /*0x7b3a04*/
    if ( v4 >= v3 ) /*0x7b3a09*/
      return 1; /*0x7b3a09*/
  }
  return 0; /*0x7b3a0b*/
}



// ==== 0x007B3A20  UDPInterfaceClass::Flush  this=UDPInterfaceClass  sig=csp ====
int __thiscall UDPInterfaceClass::Flush(UDPInterfaceClass *this)
{
  int v1; // esi
  int v3; // ebx
  int result; // eax
  AnimClass **v5; // esi
  int v6; // [esp-4h] [ebp-Ch]

  v3 = 0; /*0x7b3a24*/
  result = *((_DWORD *)this + 64716); /*0x7b3a26*/
  if ( result <= 0 ) /*0x7b3a2e*/
  {
    *((_DWORD *)this + 64716) = 0; /*0x7b3a88*/
    *((_DWORD *)this + 64717) = -1; /*0x7b3a92*/
  }
  else
  {
    v6 = v1; /*0x7b3a30*/
    v5 = (AnimClass **)(this + 32352); /*0x7b3a31*/
    do /*0x7b3a6e*/
    {
      Debug::Log(); /*0x7b3a3f*/
      WSAAsyncSelect(*v5, (SOCKET)g_hWnd, 0, 0, v6); /*0x7b3a55*/
      closesocket((SOCKET)*v5); /*0x7b3a5d*/
      result = *((_DWORD *)this + 64716); /*0x7b3a62*/
      ++v3; /*0x7b3a68*/
      ++v5; /*0x7b3a69*/
    }
    while ( v3 < result ); /*0x7b3a6e*/
    *((_DWORD *)this + 64716) = 0; /*0x7b3a70*/
    *((_DWORD *)this + 64717) = -1; /*0x7b3a7a*/
  }
  return result; /*0x7b3a85*/
}



// ==== 0x007B3AA0  UDPInterfaceClass::ProcessSocketIO  this=UDPInterfaceClass  sig=csp ====
int __thiscall UDPInterfaceClass::ProcessSocketIO(UDPInterfaceClass *this, int a2, SOCKET s, int a4, unsigned int a5)
{
  SOCKET v6; // ebx
  int v7; // edx
  int v8; // eax
  UDPInterfaceClass *v9; // ecx
  int v11; // edi
  UDPInterfaceClass *v12; // esi
  _BYTE *v13; // ebx
  u_short v14; // ax
  __int16 v15; // ax
  int v16; // edx
  int v17; // ecx
  _DWORD *v18; // eax
  _WORD *v19; // edi
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // esi
  int v28; // ecx
  int v29; // eax
  _DWORD **v30; // edx
  int v31; // edi
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  UDPInterfaceClass *v35; // ebp
  int v36; // eax
  int Socket; // eax
  int v38; // edx
  char v39; // [esp+13h] [ebp-1Dh]
  int fromlen; // [esp+14h] [ebp-1Ch] BYREF
  int v41; // [esp+18h] [ebp-18h]
  struct sockaddr netshort; // [esp+20h] [ebp-10h] BYREF
  SOCKET sa; // [esp+38h] [ebp+8h]
  __int16 v44; // [esp+3Ch] [ebp+Ch]
  unsigned int v45; // [esp+40h] [ebp+10h]

  v39 = 0; /*0x7b3ab2*/
  if ( s == 1140 ) /*0x7b3ab7*/
  {
    v6 = *((_DWORD *)this + 64539); /*0x7b3ab9*/
    sa = v6; /*0x7b3ac5*/
    if ( a4 != v6 ) /*0x7b3ac9*/
    {
      v7 = *((_DWORD *)this + 64716); /*0x7b3acb*/
      v8 = 0; /*0x7b3ad1*/
      if ( v7 > 0 ) /*0x7b3ad5*/
      {
        v9 = this + 32352; /*0x7b3ad7*/
        while ( v9->Socket != a4 ) /*0x7b3adf*/
        {
          ++v8; /*0x7b3ae1*/
          v9 = (UDPInterfaceClass *)((char *)v9 + 4); /*0x7b3ae2*/
          if ( v8 >= v7 ) /*0x7b3ae7*/
            goto LABEL_11; /*0x7b3ae7*/
        }
        v6 = *((_DWORD *)this + v8 + 64704); /*0x7b3aeb*/
        sa = v6; /*0x7b3af2*/
      }
    }
  }
  else
  {
    if ( s != 1141 ) /*0x7b3afd*/
      return 1; /*0x7b40dd*/
    v6 = *((_DWORD *)this + 64540); /*0x7b3b03*/
    v39 = 1; /*0x7b3b09*/
    sa = v6; /*0x7b3b0e*/
  }
LABEL_11:
  if ( (unsigned __int16)a5 == 1 ) /*0x7b3b1e*/
  {
    if ( HIWORD(a5) ) /*0x7b3ebb*/
    {
LABEL_22:
      Debug::Log(); /*0x7b3b8b*/
      (*(void (__thiscall **)(UDPInterfaceClass *, SOCKET))(this->Socket + 36))(this, v6); /*0x7b3b99*/
      return 0; /*0x7b3ba5*/
    }
    fromlen = 16; /*0x7b3ee4*/
    v26 = recvfrom(v6, (char *)this + 258164, 640, 0, &netshort, &fromlen); /*0x7b3eec*/
    v27 = v26; /*0x7b3ef1*/
    if ( v26 == -1 ) /*0x7b3ef6*/
    {
      (*(void (__thiscall **)(UDPInterfaceClass *, SOCKET))(this->Socket + 36))(this, v6); /*0x7b3efe*/
      return 0; /*0x7b3f0a*/
    }
    if ( v26 ) /*0x7b3f0f*/
    {
      if ( !v39 && !byte_A8DBA0 ) /*0x7b3f24*/
      {
        v28 = *((_DWORD *)this + 64856); /*0x7b3f26*/
        v29 = 0; /*0x7b3f2c*/
        if ( v28 > 0 ) /*0x7b3f30*/
        {
          v30 = (_DWORD **)*((_DWORD *)this + 64853); /*0x7b3f32*/
          while ( **v30 != *(_DWORD *)&netshort.sa_data[2] ) /*0x7b3f42*/
          {
            ++v29; /*0x7b3f48*/
            ++v30; /*0x7b3f49*/
            if ( v29 >= v28 ) /*0x7b3f4e*/
              goto LABEL_71; /*0x7b3f4e*/
          }
          return 0; /*0x7b3f42*/
        }
      }
LABEL_71:
      v31 = Network_Process_7B2730(); /*0x7b3f50*/
      if ( v31 > 0 && Random::Range(&Randomizer_Global, 0, 99) <= v31 ) /*0x7b3f6b*/
        return 0; /*0x7b3f76*/
      v13 = IPXInterfaceClass::processPacket((IPXInterfaceClass *)this); /*0x7b3f80*/
      *((_DWORD *)v13 + 4) = v27 - 4; /*0x7b3f8f*/
      *((_DWORD *)v13 + 7) = *((_DWORD *)this + 64541); /*0x7b3f98*/
      v13[23] = v39; /*0x7b3fa0*/
      v13[24] = 0; /*0x7b3fa6*/
      qmemcpy(v13 + 32, this + 32271, v27 - 4); /*0x7b3fab*/
      if ( !(*(unsigned __int8 (__thiscall **)(UDPInterfaceClass *, _BYTE *))(this->Socket + 88))(this, v13) ) /*0x7b3fb9*/
      {
        *((_DWORD *)v13 + 1) = *(_DWORD *)&netshort.sa_data[2]; /*0x7b3fc4*/
        ntohs(*(u_short *)netshort.sa_data); /*0x7b3fd4*/
        Debug::Log(); /*0x7b4000*/
        if ( !byte_B78124 ) /*0x7b400f*/
          byte_B78124 = 1; /*0x7b4011*/
        if ( v13[22] ) /*0x7b4018*/
        {
          __3_YAXPAX_Z(v13); /*0x7b4024*/
          return 0; /*0x7b4035*/
        }
LABEL_60:
        v13[21] = 0; /*0x7b3e9e*/
        --*((_DWORD *)this + 64536); /*0x7b3eaa*/
        return 0; /*0x7b3eb8*/
      }
      *(_DWORD *)v13 = 0; /*0x7b4041*/
      *((_DWORD *)v13 + 1) = 0; /*0x7b4043*/
      *((_DWORD *)v13 + 2) = 0; /*0x7b4046*/
      *((_DWORD *)v13 + 3) = 0; /*0x7b4049*/
      v32 = htonl(0x7F000001u); /*0x7b404c*/
      if ( *(_DWORD *)&netshort.sa_data[2] == v32 ) /*0x7b4055*/
      {
        *((_WORD *)v13 + 13) = 0; /*0x7b4057*/
        *(NetworkID *)v13 = qword_A8DBB0; /*0x7b4065*/
        *((_DWORD *)v13 + 2) = dword_A8DBB8; /*0x7b4075*/
      }
      else
      {
        *((_WORD *)v13 + 13) = ntohs(*(u_short *)netshort.sa_data); /*0x7b4084*/
        *((_DWORD *)v13 + 1) = *(_DWORD *)&netshort.sa_data[2]; /*0x7b408c*/
      }
      v33 = this->Initialized; /*0x7b408f*/
      v34 = this->BoundPort; /*0x7b4092*/
      v35 = this + 1; /*0x7b4095*/
      if ( v34 < v33 /*0x7b40b8*/
        || (v35[1].__pad_5[0] || !v33)
        && (v36 = *(_DWORD *)&v35[2].Initialized, v36 > 0)
        && (*(unsigned __int8 (__thiscall **)(UDPInterfaceClass *, int, _DWORD))(v35->Socket + 8))(v35, v33 + v36, 0) )
      {
        Socket = v35[2].Socket; /*0x7b40bf*/
        v38 = *(_DWORD *)&v35->Initialized; /*0x7b40c2*/
        v35[2].Socket = Socket + 1; /*0x7b40c8*/
        *(_DWORD *)(v38 + 4 * Socket) = v13; /*0x7b40cb*/
      }
    }
    return 0; /*0x7b40d7*/
  }
  if ( (unsigned __int16)a5 != 2 ) /*0x7b3b25*/
    return 0; /*0x7b3b30*/
  if ( *((_DWORD *)this + 64717) != -1 ) /*0x7b3b3a*/
  {
    v11 = 0; /*0x7b3b42*/
    if ( *((int *)this + 64716) > 0 ) /*0x7b3b46*/
    {
      v12 = this + 32352; /*0x7b3b48*/
      do /*0x7b3b76*/
      {
        if ( v12->Socket == *((_DWORD *)this + 64717) ) /*0x7b3b58*/
        {
          v6 = *((_DWORD *)this + 64717); /*0x7b3b5a*/
          Debug::Log(); /*0x7b3b62*/
        }
        ++v11; /*0x7b3b70*/
        v12 = (UDPInterfaceClass *)((char *)v12 + 4); /*0x7b3b71*/
      }
      while ( v11 < *((_DWORD *)this + 64716) ); /*0x7b3b76*/
      sa = v6; /*0x7b3b78*/
    }
  }
  if ( HIWORD(a5) ) /*0x7b3b80*/
    goto LABEL_22; /*0x7b3b83*/
  if ( v39 ) /*0x7b3bae*/
  {
    if ( !*((_DWORD *)this + 18) ) /*0x7b3bb0*/
    {
LABEL_25:
      Debug::Log(); /*0x7b3bb7*/
      return 0; /*0x7b3bcd*/
    }
    v13 = (_BYTE *)**((_DWORD **)this + 15); /*0x7b3bd3*/
  }
  else
  {
    if ( !*((_DWORD *)this + 12) ) /*0x7b3bdc*/
      goto LABEL_25; /*0x7b3bdc*/
    v13 = (_BYTE *)**((_DWORD **)this + 9); /*0x7b3bfa*/
  }
  v45 = (unsigned int)v13; /*0x7b3bff*/
  *(_DWORD *)&netshort.sa_data[2] = *((_DWORD *)v13 + 1); /*0x7b3c03*/
  *(_WORD *)netshort.sa_data = htons(*((_WORD *)v13 + 13)); /*0x7b3c11*/
  netshort.sa_family = 2; /*0x7b3c1c*/
  if ( v39 ) /*0x7b3c23*/
  {
    if ( *(_DWORD *)&netshort.sa_data[2] != htonl(0x7F000001u) ) /*0x7b3c33*/
    {
      *(_WORD *)netshort.sa_data = htons(dword_841F34); /*0x7b3c4b*/
      *(_DWORD *)&netshort.sa_data[2] = htonl(0x7F000001u); /*0x7b3c55*/
    }
  }
  else
  {
    v14 = *((_WORD *)v13 + 13); /*0x7b3c5b*/
    if ( !v14 ) /*0x7b3c62*/
      v14 = hostshort; /*0x7b3c64*/
    *(_WORD *)netshort.sa_data = htons(v14); /*0x7b3c75*/
    if ( *((_DWORD *)v13 + 1) == qword_A8DBB0.NetworkID_field_0x04 /*0x7b3c9a*/
      && (!dword_A8DA84 || (unsigned __int8)GUID::Compare(qword_A8DBB0.__pad_0, *dword_A8DA78 + 40)) )
    {
      *(_DWORD *)&netshort.sa_data[2] = htonl(0x7F000001u); /*0x7b3cb4*/
      *(_WORD *)netshort.sa_data = htons(dword_841F3C); /*0x7b3cbe*/
    }
  }
  v41 = *(_DWORD *)&netshort.sa_data[2]; /*0x7b3ccc*/
  v15 = ntohs(*(u_short *)netshort.sa_data); /*0x7b3cd0*/
  v16 = *((_DWORD *)this + 64858); /*0x7b3cd5*/
  v17 = 0; /*0x7b3cdb*/
  v44 = v15; /*0x7b3cdf*/
  if ( v16 <= 0 ) /*0x7b3ce3*/
  {
LABEL_43:
    ntohs(*(u_short *)netshort.sa_data); /*0x7b3d18*/
    Debug::Log(); /*0x7b3d54*/
    if ( sendto(sa, v13 + 28, *((_DWORD *)v13 + 4) + 4, 0, &netshort, 16) == -1 && WSAGetLastError() != 10035 ) /*0x7b3d89*/
    {
      WSAGetLastError(); /*0x7b3d8b*/
      Debug::Log(); /*0x7b3d96*/
      (*(void (__thiscall **)(UDPInterfaceClass *, SOCKET))(this->Socket + 36))(this, sa); /*0x7b3da4*/
      return 0; /*0x7b3db0*/
    }
  }
  else
  {
    v18 = (_DWORD *)this + 64859; /*0x7b3ce5*/
    v19 = (_WORD *)this + 129750; /*0x7b3ceb*/
    while ( v44 != *v19 || v41 != *v18 ) /*0x7b3d03*/
    {
      v13 = (_BYTE *)v45; /*0x7b3d09*/
      ++v17; /*0x7b3d0d*/
      ++v19; /*0x7b3d0e*/
      ++v18; /*0x7b3d11*/
      if ( v17 >= v16 ) /*0x7b3d16*/
        goto LABEL_43; /*0x7b3d16*/
    }
    ntohs(*(u_short *)netshort.sa_data); /*0x7b3db8*/
    Debug::Log(); /*0x7b3def*/
    v13 = (_BYTE *)v45; /*0x7b3df4*/
  }
  if ( !v39 ) /*0x7b3e01*/
  {
    v23 = *((_DWORD *)this + 12); /*0x7b3e5f*/
    if ( v23 > 0 ) /*0x7b3e64*/
    {
      v24 = v23 - 1; /*0x7b3e66*/
      v25 = 0; /*0x7b3e67*/
      for ( *((_DWORD *)this + 12) = v24; /*0x7b3e6e*/
            v25 < *((_DWORD *)this + 12);
            *(_DWORD *)(*((_DWORD *)this + 9) + 4 * v25 - 4) = *(_DWORD *)(*((_DWORD *)this + 9) + 4 * v25) )
      {
        ++v25; /*0x7b3e73*/
      }
    }
    if ( v13[22] ) /*0x7b3e82*/
    {
      __3_YAXPAX_Z(v13); /*0x7b3e8a*/
      return 0; /*0x7b3e9b*/
    }
    goto LABEL_60; /*0x7b3e87*/
  }
  v20 = *((_DWORD *)this + 18); /*0x7b3e03*/
  if ( v20 > 0 ) /*0x7b3e08*/
  {
    v21 = v20 - 1; /*0x7b3e0a*/
    v22 = 0; /*0x7b3e0b*/
    for ( *((_DWORD *)this + 18) = v21; /*0x7b3e12*/
          v22 < *((_DWORD *)this + 18);
          *(_DWORD *)(*((_DWORD *)this + 15) + 4 * v22 - 4) = *(_DWORD *)(*((_DWORD *)this + 15) + 4 * v22) )
    {
      ++v22; /*0x7b3e17*/
    }
  }
  if ( v13[22] ) /*0x7b3e26*/
  {
    __3_YAXPAX_Z(v13); /*0x7b3e2e*/
  }
  else
  {
    v13[21] = 0; /*0x7b3e42*/
    --*((_DWORD *)this + 64537); /*0x7b3e4e*/
  }
  return 0; /*0x7b3b27*/
}



// ==== 0x007B40F0  UDPInterfaceClass::COMStub_Ret2  this=UDPInterfaceClass  sig=csp ====
int UDPInterfaceClass_Destru::COMStub_Ret2(UDPInterfaceClass *this)
{
  return 2; /*0x7b40f5*/
}



// ==== 0x007B4100  UDPInterfaceClass::GetStatistics  this=UDPInterfaceClass  sig=csp ====
int __thiscall UDPInterfaceClass_Destru::GetStatistics(UDPInterfaceClass *this, int a2)
{
  if ( a2 == *((_DWORD *)this + 64539) || a2 == -1 )
    return 1140; /*0x7b412e*/
  else
    return a2 != *((_DWORD *)this + 64540) ? 0 : 0x475;
}



// ==== 0x007B4140  UDPInterfaceClass::COMStub  this=UDPInterfaceClass  sig=csp ====
int __thiscall UDPInterfaceClass_Destru::COMStub(UDPInterfaceClass *this)
{
  return *((_DWORD *)this + 64856); /*0x7b4146*/
}



// ==== 0x007B4150  UDPInterfaceClass::Connect  this=UDPInterfaceClass  sig=csp ====
int __thiscall UDPInterfaceClass::Connect(UDPInterfaceClass *this, int a2)
{
  return *(_DWORD *)(*((_DWORD *)this + 64853) + 4 * a2); /*0x7b415d*/
}



// ==== 0x007B4160  UDPInterfaceClass::Receive  this=UDPInterfaceClass  sig=csp ====
__int16 __thiscall UDPInterfaceClass::Receive(UDPInterfaceClass *this)
{
  return *((_WORD *)this + 129406); /*0x7b4167*/
}



// ==== 0x007B4170  UDPInterfaceClass::Destructor  this=UDPInterfaceClass  sig=csp ====
void ***__thiscall UDPInterfaceClass::Destructor(UDPInterfaceClass *this, char a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  void *v9; // eax
  void *v10; // eax

  this->Socket = (int)&UDPInterfaceClass::`vftable'; /*0x7b4176*/
  while ( *((_DWORD *)this + 64722) ) /*0x7b417c*/
  {
    __3_YAXPAX_Z(**((void ***)this + 64719)); /*0x7b418f*/
    v3 = *((_DWORD *)this + 64722); /*0x7b4194*/
    if ( v3 > 0 ) /*0x7b419f*/
    {
      v4 = v3 - 1; /*0x7b41a1*/
      v5 = 0; /*0x7b41a4*/
      for ( *((_DWORD *)this + 64722) = v4; /*0x7b41ae*/
            v5 < *((_DWORD *)this + 64722);
            *(_DWORD *)(*((_DWORD *)this + 64719) + 4 * v5 - 4) = *(_DWORD *)(*((_DWORD *)this + 64719) + 4 * v5) )
      {
        ++v5; /*0x7b41b6*/
      }
    }
  }
  while ( *((_DWORD *)this + 64856) ) /*0x7b41d0*/
  {
    __3_YAXPAX_Z(**((void ***)this + 64853)); /*0x7b41e1*/
    v6 = *((_DWORD *)this + 64856); /*0x7b41e6*/
    if ( v6 > 0 ) /*0x7b41f1*/
    {
      v7 = v6 - 1; /*0x7b41f3*/
      v8 = 0; /*0x7b41f6*/
      for ( *((_DWORD *)this + 64856) = v7; /*0x7b4200*/
            v8 < *((_DWORD *)this + 64856);
            *(_DWORD *)(*((_DWORD *)this + 64853) + 4 * v8 - 4) = *(_DWORD *)(*((_DWORD *)this + 64853) + 4 * v8) )
      {
        ++v8; /*0x7b4208*/
      }
    }
  }
  UDPInterfaceClass::connect(this); /*0x7b4224*/
  v9 = (void *)*((_DWORD *)this + 64853); /*0x7b4229*/
  *((_DWORD *)this + 64852) = &VectorClass<unsigned char *>::`vftable'; /*0x7b422f*/
  if ( v9 && *((_BYTE *)this + 259421) ) /*0x7b423d*/
  {
    __3_YAXPAX_Z(v9); /*0x7b4246*/
    *((_DWORD *)this + 64853) = 0; /*0x7b424e*/
  }
  *((_BYTE *)this + 259421) = 0; /*0x7b4254*/
  *((_DWORD *)this + 64854) = 0; /*0x7b425a*/
  v10 = (void *)*((_DWORD *)this + 64719); /*0x7b4260*/
  *((_DWORD *)this + 64718) = &VectorClass<unsigned char *>::`vftable'; /*0x7b4266*/
  if ( v10 && *((_BYTE *)this + 258885) ) /*0x7b4274*/
  {
    __3_YAXPAX_Z(v10); /*0x7b427d*/
    *((_DWORD *)this + 64719) = 0; /*0x7b4285*/
  }
  *((_BYTE *)this + 258885) = 0; /*0x7b428d*/
  *((_DWORD *)this + 64720) = 0; /*0x7b4293*/
  WinsockInterfaceClass::WinsockInterfaceClass((int)this); /*0x7b4299*/
  if ( (a2 & 1) != 0 ) /*0x7b42a3*/
    __3_YAXPAX_Z(this); /*0x7b42a6*/
  return (void ***)this; /*0x7b42b0*/
}



// ==== 0x007B42C0  _DynamicVectorClass_PAE::disconnect  this=DynamicVector  sig=csp ====
void __thiscall UDPInterfaceClass::disconnect(_DynamicVectorClass_PAE *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x7b42c6*/
  this->m_10 = 0; /*0x7b42c9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x7b42d0*/
  {
    __3_YAXPAX_Z(v2); /*0x7b42d6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7b42de*/
  }
  BYTE1(this->m_C) = 0; /*0x7b42e1*/
  this->m_8 = 0; /*0x7b42e4*/
}



// ==== 0x007B42F0  _DynamicVectorClass_PAE::reset  this=DynamicVector  sig=csp ====
unsigned int __thiscall UDPInterfaceClass::reset(_DynamicVectorClass_PAE *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7b42f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7b4305*/
  else
    return 0; /*0x7b42f7*/
}



// ==== 0x007B4310  _VectorClass_PAE::Count  this=VectorClass  sig=csp ====
int __thiscall VectorClass_PAE::Count(_VectorClass_PAE *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x7b431a*/
}



// ==== 0x007B4320  _VectorClass_PAE::Get  this=VectorClass  sig=csp ====
char __thiscall VectorClass_PAE::Get(_VectorClass_PAE *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x7b4322*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x7b432d*/
  {
    v3 = 0; /*0x7b432f*/
    if ( m_8 <= 0 ) /*0x7b4333*/
      return 1; /*0x7b4353*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x7b4335*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x7b433b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x7b4344*/
    {
      ++v3; /*0x7b4346*/
      ++v4; /*0x7b4347*/
      if ( v3 >= m_8 ) /*0x7b434c*/
        return 1; /*0x7b434c*/
    }
  }
  return 0; /*0x7b434e*/
}



// ==== 0x007B4360  _VectorClass_PAE::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_PAE::Release(_VectorClass_PAE *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x7b436c*/
  {
    LOBYTE(this->m_C) = 0; /*0x7b4376*/
    if ( a3 ) /*0x7b437c*/
      v4 = a3; /*0x7b4392*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x7b438e*/
    LOBYTE(this->m_C) = 1; /*0x7b4396*/
    if ( v4 ) /*0x7b439a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x7b43a5*/
      {
        m_8 = this->m_8; /*0x7b43ac*/
        if ( a2 < m_8 ) /*0x7b43b1*/
          m_8 = a2; /*0x7b43b3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7b43b9*/
          ++i; /*0x7b43be*/
        if ( BYTE1(this->m_C) ) /*0x7b43cb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7b43d6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x7b43de*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x7b43e7*/
      this->m_8 = a2; /*0x7b43ef*/
      BYTE1(this->m_C) = a3 == 0; /*0x7b43f2*/
      return 1; /*0x7b43f8*/
    }
    else
    {
      return 0; /*0x7b439f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAE *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x7b4402*/
    return 1; /*0x7b4408*/
  }
}



// ==== 0x007B4410  _VectorClass_PAE::Set  this=VectorClass  sig=csp ====
void __thiscall VectorClass_PAE::Set(_VectorClass_PAE *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x7b441d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7b4423*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7b442b*/
  }
  BYTE1(this->m_C) = 0; /*0x7b442e*/
  this->m_8 = 0; /*0x7b4431*/
}



// ==== 0x007B4440  _VectorClass_PAE::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_PAE::GetSize(_VectorClass_PAE *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x7b4440*/
    return 0; /*0x7b4448*/
  m_8 = this->m_8; /*0x7b444e*/
  result = 0; /*0x7b4451*/
  if ( m_8 <= 0 ) /*0x7b4455*/
    return -1; /*0x7b446c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7b445b*/
  {
    if ( ++result >= m_8 ) /*0x7b446a*/
      return -1; /*0x7b446a*/
  }
  return result; /*0x7b444a*/
}



// ==== 0x007B4480  _VectorClass_PAE::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_PAE::GetCapacity(_VectorClass_PAE *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7b4480*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7b4495*/
  else
    return 0; /*0x7b4487*/
}



// ==== 0x007B44A0  _DynamicVectorClass_PAE::flush  this=DynamicVector  sig=csp ====
char __thiscall UDPInterfaceClass::flush(_DynamicVectorClass_PAE *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7b44ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x7b44b2*/
    if ( a3 ) /*0x7b44b8*/
      v4 = a3; /*0x7b44ce*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x7b44ca*/
    LOBYTE(this->m_C) = 1; /*0x7b44d2*/
    if ( !v4 ) /*0x7b44d6*/
      return 0; /*0x7b454a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x7b44d8*/
    {
      m_8 = this->m_8; /*0x7b44df*/
      if ( a2 < m_8 ) /*0x7b44e4*/
        m_8 = a2; /*0x7b44e6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7b44ec*/
        ++i; /*0x7b44f1*/
      if ( BYTE1(this->m_C) ) /*0x7b44fe*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7b4509*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x7b4511*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x7b451a*/
    this->m_8 = a2; /*0x7b4522*/
    BYTE1(this->m_C) = a3 == 0; /*0x7b4525*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAE *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x7b452e*/
  }
  v7 = this->m_8; /*0x7b4531*/
  if ( v7 < this->m_10 ) /*0x7b4539*/
    this->m_10 = v7; /*0x7b453b*/
  return 1; /*0x7b453e*/
}



// ==== 0x007B4550  _DynamicVectorClass_PAE::sendPacket  this=DynamicVector  sig=csp ====
int __thiscall UDPInterfaceClass::sendPacket(_DynamicVectorClass_PAE *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x7b4550*/
  result = 0; /*0x7b4553*/
  if ( m_10 <= 0 ) /*0x7b4558*/
    return -1; /*0x7b456f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7b455e*/
  {
    if ( ++result >= m_10 ) /*0x7b456d*/
      return -1; /*0x7b456d*/
  }
  return result; /*0x7b4572*/
}



// ==== 0x007B4580  _VectorClass_PAE::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_PAE::QueryInterface(_VectorClass_PAE *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7b4583*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned char *>::`vftable'; /*0x7b4586*/
  if ( v3 && BYTE1(this->m_C) ) /*0x7b4590*/
  {
    __3_YAXPAX_Z(v3); /*0x7b4598*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7b45a0*/
  }
  BYTE1(this->m_C) = 0; /*0x7b45ab*/
  this->m_8 = 0; /*0x7b45b1*/
  if ( (a2 & 1) != 0 ) /*0x7b45b8*/
    __3_YAXPAX_Z(this); /*0x7b45bb*/
  return this->__pad_0; /*0x7b45c5*/
}



// ==== 0x007B45D0  _DynamicVectorClass_PAE::receivePacket  this=DynamicVector  sig=csp ====
_DWORD *__thiscall UDPInterfaceClass::receivePacket(_DynamicVectorClass_PAE *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7b45d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned char *>::`vftable'; /*0x7b45d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x7b45e0*/
  {
    __3_YAXPAX_Z(v3); /*0x7b45e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7b45f0*/
  }
  BYTE1(this->m_C) = 0; /*0x7b45fb*/
  this->m_8 = 0; /*0x7b4601*/
  if ( (a2 & 1) != 0 ) /*0x7b4608*/
    __3_YAXPAX_Z(this); /*0x7b460b*/
  return this->__pad_0; /*0x7b4615*/
}



// ==== 0x007B4620  ObjectClass::unknown_libname_73  this=DeleteAndZero  sig=csp ====
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_73(_DWORD *this)
{
  *this = 0; /*0x7b4622*/
  return this; /*0x7b4628*/
}



// ==== 0x007B4630  String::Assign  this=ObjectClass  sig=csp ====
char **__thiscall String::Assign(String *this, const char *a2)
{
  size_t v3; // ecx
  _BYTE *v4; // eax

  *(_DWORD *)this->__pad_0 = 0; /*0x7b463b*/
  if ( a2 ) /*0x7b4641*/
    v3 = strlen(a2) + 1; /*0x7b464a*/
  else
    v3 = 1; /*0x7b4650*/
  v4 = (_BYTE *)__2_YAPAXI_Z(v3); /*0x7b4656*/
  *(_DWORD *)this->__pad_0 = v4; /*0x7b465e*/
  *v4 = 0; /*0x7b4662*/
  if ( a2 ) /*0x7b4665*/
    strcpy(*(char **)this->__pad_0, a2); /*0x7b467d*/
  return (char **)this; /*0x7b4686*/
}



// ==== 0x007B4690  String::AssignFromPtr  this=ObjectClass  sig=csp ====
char **__thiscall String::AssignFromPtr(String *this, const char **a2)
{
  char *v3; // edx

  *(_DWORD *)this->__pad_0 = 0; /*0x7b4699*/
  if ( *a2 ) /*0x7b469f*/
  {
    v3 = (char *)__2_YAPAXI_Z(strlen(*a2) + 1); /*0x7b46b4*/
    *(_DWORD *)this->__pad_0 = v3; /*0x7b46b9*/
    strcpy(v3, *a2); /*0x7b46d1*/
  }
  return (char **)this; /*0x7b46da*/
}



// ==== 0x007B46F0  ObjectClass::DeleteAndZero  this=ObjectClass  sig=csp ====
int __thiscall DeleteAndZero(ObjectClass *this)
{
  int result; // eax

  result = (int)this->AbstractClass; /*0x7b46f3*/
  if ( this->AbstractClass ) /*0x7b46f3*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b46fa*/
  this->AbstractClass = 0; /*0x7b4702*/
  return result; /*0x7b4708*/
}



// ==== 0x007B4710  String::Equals_Alt  this=AbstractClass  sig=csp ====
int __thiscall String::Equals_Alt(String *this, const char *a2)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x7b4710*/
  if ( *(_DWORD *)this->__pad_0 || a2 ) /*0x7b471d*/
  {
    if ( result && a2 ) /*0x7b472b*/
    {
      result = strcmp((const char *)result, a2); /*0x7b4736*/
      if ( result ) /*0x7b4750*/
        LOBYTE(result) = 0; /*0x7b4767*/
      else
        return 1; /*0x7b4752*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x7b476d*/
    }
  }
  else
  {
    LOBYTE(result) = 1; /*0x7b471f*/
  }
  return result; /*0x7b4721*/
}



// ==== 0x007B4780  String::Compare  this=IUnknown  sig=csp ====
int __thiscall String::Compare(String *this, const char **a2)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x7b4780*/
  if ( *(_DWORD *)this->__pad_0 || *a2 ) /*0x7b478b*/
  {
    if ( result && *a2 ) /*0x7b479a*/
    {
      result = strcmp((const char *)result, *a2); /*0x7b47a9*/
      if ( result ) /*0x7b47c3*/
        LOBYTE(result) = 0; /*0x7b47da*/
      else
        return 1; /*0x7b47c5*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x7b47e0*/
    }
  }
  else
  {
    LOBYTE(result) = 1; /*0x7b4790*/
  }
  return result; /*0x7b4792*/
}



// ==== 0x007B47F0  String::NotEquals  this=ObjectClass  sig=csp ====
int __thiscall String::NotEquals(String *this, const char *a2)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x7b47f0*/
  if ( *(_DWORD *)this->__pad_0 || a2 ) /*0x7b47fd*/
  {
    if ( result && a2 ) /*0x7b480b*/
    {
      result = strcmp((const char *)result, a2); /*0x7b4816*/
      if ( result ) /*0x7b4837*/
        LOBYTE(result) = 1; /*0x7b4847*/
    }
    else
    {
      LOBYTE(result) = 1; /*0x7b484d*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x7b47ff*/
  }
  return result; /*0x7b4801*/
}



// ==== 0x007B4860  VectorClass_Wstring::SetCapacity  this=VectorClass_Wstring  sig=csp ====
bool __thiscall VectorClass_Wstring::SetCapacity(VectorClass_Wstring *this, const char **a2)
{
  const char *v2; // eax
  int v3; // eax

  v2 = *(const char **)this->__pad_0; /*0x7b4860*/
  if ( *(_DWORD *)this->__pad_0 || *a2 ) /*0x7b486b*/
  {
    if ( v2 && *a2 ) /*0x7b487a*/
    {
      v3 = strcmp(v2, *a2); /*0x7b4889*/
      if ( v3 ) /*0x7b48a3*/
        LOBYTE(v3) = 1; /*0x7b48ba*/
    }
    else
    {
      LOBYTE(v3) = 1; /*0x7b48c0*/
    }
  }
  else
  {
    LOBYTE(v3) = 0; /*0x7b4870*/
  }
  return v3; /*0x7b4872*/
}



// ==== 0x007B48D0  String::Assign_Alt  this=DeleteAndZero  sig=csp ====
void **__thiscall String::Assign_Alt(String *this, const char *a2)
{
  size_t v3; // ecx
  _BYTE *v4; // eax

  if ( *(_DWORD *)this->__pad_0 ) /*0x7b48d5*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b48dc*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b48e8*/
  if ( a2 ) /*0x7b48f0*/
    v3 = strlen(a2) + 1; /*0x7b48f9*/
  else
    v3 = 1; /*0x7b48ff*/
  v4 = (_BYTE *)__2_YAPAXI_Z(v3); /*0x7b4905*/
  *(_DWORD *)this->__pad_0 = v4; /*0x7b490d*/
  *v4 = 0; /*0x7b4911*/
  if ( a2 ) /*0x7b4914*/
    strcpy(*(char **)this->__pad_0, a2); /*0x7b492c*/
  return (void **)this; /*0x7b4935*/
}



// ==== 0x007B4940  String::Reassign  this=String  sig=csp ====
char **__thiscall String::Reassign(String *this, const char **a2)
{
  void *v3; // edi
  char *v4; // esi
  size_t v5; // ecx
  _BYTE *v6; // eax

  v3 = *(void **)this->__pad_0; /*0x7b4949*/
  if ( (*(_DWORD *)this->__pad_0 || *a2) && (!v3 || !*a2 || strcmp(*(const char **)this->__pad_0, *a2)) ) /*0x7b496c*/
  {
    v4 = (char *)*a2; /*0x7b4994*/
    if ( !*a2 ) /*0x7b4994*/
      v4 = &g_INI_DefaultBuffer; /*0x7b499a*/
    if ( v3 ) /*0x7b49a1*/
      __3_YAXPAX_Z(v3); /*0x7b49a4*/
    *(_DWORD *)this->__pad_0 = 0; /*0x7b49ae*/
    if ( v4 ) /*0x7b49b5*/
      v5 = strlen(v4) + 1; /*0x7b49be*/
    else
      v5 = 1; /*0x7b49c4*/
    v6 = (_BYTE *)__2_YAPAXI_Z(v5); /*0x7b49ca*/
    *(_DWORD *)this->__pad_0 = v6; /*0x7b49d2*/
    *v6 = 0; /*0x7b49d7*/
    if ( v4 ) /*0x7b49da*/
      strcpy(*(char **)this->__pad_0, v4); /*0x7b49f3*/
  }
  return (char **)this; /*0x7b49fc*/
}



// ==== 0x007B4A10  ObjectClass::String_Process_7B4A10  this=ObjectClass  sig=csp ====
char __thiscall String_Process_7B4A10(ObjectClass *this, const char *a2)
{
  const char *v2; // esi
  char *ptr_0; // ebx
  unsigned int v6; // kr08_4
  size_t v7; // edx
  _BYTE *v8; // eax

  v2 = a2; /*0x7b4a12*/
  if ( !a2 ) /*0x7b4a1a*/
    return 1; /*0x7b4a1d*/
  ptr_0 = (char *)this->AbstractClass; /*0x7b4a2c*/
  v6 = strlen(a2) + 1; /*0x7b4a2f*/
  v7 = v6; /*0x7b4a36*/
  if ( ptr_0 ) /*0x7b4a39*/
    v7 = strlen((const char *)this->AbstractClass) + v6; /*0x7b4a45*/
  v8 = (_BYTE *)__2_YAPAXI_Z(v7); /*0x7b4a48*/
  this->AbstractClass = v8; /*0x7b4a54*/
  if ( ptr_0 ) /*0x7b4a57*/
  {
    strcpy(v8, ptr_0); /*0x7b4a6f*/
    v2 = a2; /*0x7b4a78*/
  }
  else
  {
    *v8 = 0; /*0x7b4a7e*/
  }
  strcat((char *)this->AbstractClass, v2); /*0x7b4aa0*/
  if ( ptr_0 ) /*0x7b4aab*/
    __3_YAXPAX_Z(ptr_0); /*0x7b4aae*/
  return 1; /*0x7b4a1c*/
}



// ==== 0x007B4AC0  ObjectClass::method_7B4AC0  this=ObjectClass  sig=csp ====
char __thiscall sub_7B4AC0(ObjectClass *this, size_t Count, char *Source)
{
  size_t v4; // edx
  char *ptr_0; // ebx
  _BYTE *v6; // eax

  v4 = Count + 1; /*0x7b4ac9*/
  ptr_0 = (char *)this->AbstractClass; /*0x7b4acc*/
  if ( this->AbstractClass ) /*0x7b4acc*/
    v4 = strlen((const char *)this->AbstractClass) + 1 + Count; /*0x7b4adf*/
  v6 = (_BYTE *)__2_YAPAXI_Z(v4); /*0x7b4ae2*/
  this->AbstractClass = v6; /*0x7b4aee*/
  if ( ptr_0 ) /*0x7b4af1*/
    strcpy(v6, ptr_0); /*0x7b4b0a*/
  else
    *v6 = 0; /*0x7b4b16*/
  if ( Source ) /*0x7b4b1f*/
    strncat((char *)this->AbstractClass, Source, Count); /*0x7b4b2b*/
  if ( ptr_0 ) /*0x7b4b35*/
    __3_YAXPAX_Z(ptr_0); /*0x7b4b38*/
  return 1; /*0x7b4b40*/
}



// ==== 0x007B4B50  ObjectClass::method_7B4B50  this=ObjectClass  sig=csp ====
char __thiscall sub_7B4B50(ObjectClass *this, char **a2)
{
  char *v2; // eax
  const char *v4; // esi
  unsigned int v5; // kr08_4
  char *ptr_0; // ebx
  size_t v7; // edx
  _BYTE *v8; // eax
  char *v10; // [esp+10h] [ebp+4h]

  v2 = *a2; /*0x7b4b57*/
  if ( *a2 ) /*0x7b4b57*/
  {
    v10 = *a2; /*0x7b4b6a*/
    v4 = v2; /*0x7b4b6e*/
  }
  else
  {
    v4 = &g_INI_DefaultBuffer; /*0x7b4b5f*/
    v10 = &g_INI_DefaultBuffer; /*0x7b4b64*/
  }
  if ( v4 ) /*0x7b4b72*/
  {
    v5 = strlen(v4) + 1; /*0x7b4b80*/
    ptr_0 = (char *)this->AbstractClass; /*0x7b4b82*/
    v7 = v5; /*0x7b4b8a*/
    if ( this->AbstractClass ) /*0x7b4b82*/
      v7 = strlen((const char *)this->AbstractClass) + v5; /*0x7b4b99*/
    v8 = (_BYTE *)__2_YAPAXI_Z(v7); /*0x7b4b9c*/
    this->AbstractClass = v8; /*0x7b4ba8*/
    if ( ptr_0 ) /*0x7b4bab*/
    {
      strcpy(v8, ptr_0); /*0x7b4bc3*/
      v4 = v10; /*0x7b4bcc*/
    }
    else
    {
      *v8 = 0; /*0x7b4bd2*/
    }
    strcat((char *)this->AbstractClass, v4); /*0x7b4bf4*/
    if ( ptr_0 ) /*0x7b4c00*/
      __3_YAXPAX_Z(ptr_0); /*0x7b4c03*/
  }
  return 1; /*0x7b4c0b*/
}



// ==== 0x007B4C20  String::Append  this=String  sig=csp ====
const char **__thiscall String::Append(String *this, const char *a2)
{
  const char *v2; // esi
  unsigned int v4; // kr08_4
  char *v5; // ebx
  size_t v6; // edx
  char *v7; // eax

  v2 = a2; /*0x7b4c23*/
  if ( a2 ) /*0x7b4c2b*/
  {
    v4 = strlen(a2) + 1; /*0x7b4c39*/
    v5 = *(char **)this->__pad_0; /*0x7b4c3b*/
    v6 = v4; /*0x7b4c43*/
    if ( *(_DWORD *)this->__pad_0 ) /*0x7b4c3b*/
      v6 = strlen(*(const char **)this->__pad_0) + v4; /*0x7b4c52*/
    v7 = (char *)__2_YAPAXI_Z(v6); /*0x7b4c55*/
    *(_DWORD *)this->__pad_0 = v7; /*0x7b4c61*/
    if ( v5 ) /*0x7b4c64*/
    {
      strcpy(v7, v5); /*0x7b4c7c*/
      v2 = a2; /*0x7b4c85*/
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



// ==== 0x007B4CD0  String::Append2  this=String  sig=csp ====
const char **__thiscall String::Append2(String *this, char **a2)
{
  char *v2; // eax
  const char *v4; // esi
  unsigned int v5; // kr08_4
  char *v6; // ebx
  size_t v7; // edx
  char *v8; // eax
  char *v10; // [esp+10h] [ebp+4h]

  v2 = *a2; /*0x7b4cd7*/
  if ( *a2 ) /*0x7b4cd7*/
  {
    v10 = *a2; /*0x7b4cea*/
    v4 = v2; /*0x7b4cee*/
  }
  else
  {
    v4 = &g_INI_DefaultBuffer; /*0x7b4cdf*/
    v10 = &g_INI_DefaultBuffer; /*0x7b4ce4*/
  }
  if ( v4 ) /*0x7b4cf2*/
  {
    v5 = strlen(v4) + 1; /*0x7b4d00*/
    v6 = *(char **)this->__pad_0; /*0x7b4d02*/
    v7 = v5; /*0x7b4d0a*/
    if ( *(_DWORD *)this->__pad_0 ) /*0x7b4d02*/
      v7 = strlen(*(const char **)this->__pad_0) + v5; /*0x7b4d19*/
    v8 = (char *)__2_YAPAXI_Z(v7); /*0x7b4d1c*/
    *(_DWORD *)this->__pad_0 = v8; /*0x7b4d28*/
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



// ==== 0x007B4DA0  String::Concat2  this=String  sig=csp ====
char **__thiscall String::Concat2(String *this, char **a2, const char *a3)
{
  char *v4; // ebx
  const char *v5; // esi
  char *v6; // ebp
  unsigned int v7; // kr14_4
  size_t v8; // edx
  char *v9; // eax
  char *v10; // edx

  v4 = 0; /*0x7b4da6*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b4da8*/
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



// ==== 0x007B4ED0  String::Concat  this=ObjectClass  sig=csp ====
char **__thiscall String::Concat(String *this, char **a2, char **a3)
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
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b4ed8*/
  {
    v4 = (char *)__2_YAPAXI_Z(strlen(*(const char **)this->__pad_0) + 1); /*0x7b4eef*/
    strcpy(v4, *(const char **)this->__pad_0); /*0x7b4f08*/
  }
  v5 = *a3; /*0x7b4f15*/
  if ( *a3 ) /*0x7b4f15*/
  {
    v13 = *a3; /*0x7b4f26*/
    v6 = v5; /*0x7b4f2a*/
  }
  else
  {
    v6 = &g_INI_DefaultBuffer; /*0x7b4f1b*/
    v13 = &g_INI_DefaultBuffer; /*0x7b4f20*/
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
  *a2 = 0; /*0x7b4fc6*/
  if ( v4 ) /*0x7b4fcd*/
  {
    v11 = (char *)__2_YAPAXI_Z(strlen(v4) + 1); /*0x7b4fe0*/
    *a2 = v11; /*0x7b4fe9*/
    strcpy(v11, v4); /*0x7b4ffc*/
    __3_YAXPAX_Z(v4); /*0x7b5005*/
  }
  return a2; /*0x7b500d*/
}



// ==== 0x007B5020  String::Erase  this=String  sig=csp ====
int __thiscall String::Erase(String *this, int a2, int a3)
{
  int v4; // ebp
  int v5; // esi
  unsigned int v6; // kr04_4
  int result; // eax
  char *v8; // [esp+14h] [ebp+4h]

  v4 = a2; /*0x7b502d*/
  v5 = a3; /*0x7b5031*/
  v6 = strlen(*(const char **)this->__pad_0) + 1; /*0x7b5035*/
  result = a3 + a2; /*0x7b503a*/
  if ( a3 + a2 > (int)(v6 - 1) ) /*0x7b503f*/
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
    *(_BYTE *)(*(_DWORD *)this->__pad_0 + v4) = 0; /*0x7b506f*/
    *(_BYTE *)(v4 + *(_DWORD *)this->__pad_0 + v5 - 1) = 0; /*0x7b507a*/
    strcpy(v8, *(const char **)this->__pad_0); /*0x7b5092*/
    strcat(v8, (const char *)(a3 + v4 + *(_DWORD *)this->__pad_0)); /*0x7b50c1*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b50cd*/
    *(_DWORD *)this->__pad_0 = v8; /*0x7b50d9*/
    LOBYTE(result) = 1; /*0x7b50db*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x7b5058*/
  }
  return result; /*0x7b5055*/
}



// ==== 0x007B50F0  ObjectClass::method_7B50F0  this=ObjectClass  sig=csp ====
char __thiscall sub_7B50F0(ObjectClass *this, char a2)
{
  char v3; // bl
  const char *ptr_0; // edx
  unsigned int v6; // esi
  char *v7; // eax
  char *v8; // ebx

  v3 = 0; /*0x7b50f4*/
  ptr_0 = (const char *)this->AbstractClass; /*0x7b50f6*/
  if ( !this->AbstractClass ) /*0x7b50f6*/
    return 0; /*0x7b50fe*/
  v6 = strlen(ptr_0); /*0x7b5119*/
  v7 = strchr(ptr_0, a2); /*0x7b511b*/
  if ( v7 ) /*0x7b5125*/
  {
    do /*0x7b5157*/
    {
      memcpy(v7, v7 + 1, (char *)this->AbstractClass - (char *)v7 + v6-- - 1); /*0x7b513b*/
      *((_BYTE *)this->AbstractClass + v6) = 0; /*0x7b5145*/
      v7 = strchr((const char *)this->AbstractClass, a2); /*0x7b514d*/
    }
    while ( v7 ); /*0x7b5157*/
    v8 = (char *)__2_YAPAXI_Z(strlen((const char *)this->AbstractClass) + 1); /*0x7b516c*/
    strcpy(v8, (const char *)this->AbstractClass); /*0x7b5182*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b518f*/
    this->AbstractClass = v8; /*0x7b5194*/
    return 1; /*0x7b5197*/
  }
  return v3; /*0x7b50fd*/
}



// ==== 0x007B51D0  String::TrimLeft  this=String  sig=csp ====
int __thiscall String::TrimLeft(String *this, const char **a2)
{
  int result; // eax
  int i; // esi
  signed int v5; // ecx
  char *v6; // eax

  for ( i = 0; ; ++i ) /*0x7b51da*/
  {
    if ( *(_DWORD *)this->__pad_0 ) /*0x7b51dc*/
    {
      result = 0; /*0x7b51eb*/
      v5 = strlen(*(const char **)this->__pad_0); /*0x7b51f1*/
    }
    else
    {
      v5 = 0; /*0x7b51e2*/
    }
    if ( i >= v5 ) /*0x7b51f4*/
      break; /*0x7b51f4*/
    v6 = (char *)*a2; /*0x7b51f6*/
    if ( !*a2 ) /*0x7b51f6*/
      v6 = &g_INI_DefaultBuffer; /*0x7b51fd*/
    result = (int)strchr(v6, *(char *)(*(_DWORD *)this->__pad_0 + i)); /*0x7b5208*/
    if ( !result ) /*0x7b5212*/
      break; /*0x7b5212*/
  }
  if ( i > 0 ) /*0x7b5219*/
    return String::Erase(this, 0, i); /*0x7b5220*/
  return result; /*0x7b5225*/
}



// ==== 0x007B5230  String::TrimRight  this=String  sig=csp ====
void __thiscall String::TrimRight(String *this, const char **a2)
{
  unsigned int v3; // esi
  unsigned int v4; // eax
  unsigned int v5; // esi
  char *v6; // eax
  size_t v8; // esi
  const char *v9; // edi
  char *v10; // eax
  char *v11; // ebx
  const char *v12; // esi
  size_t v13; // ecx
  _BYTE *v14; // eax

  if ( *(_DWORD *)this->__pad_0 ) /*0x7b5236*/
    v3 = strlen(*(const char **)this->__pad_0); /*0x7b524b*/
  else
    v3 = 0; /*0x7b523d*/
  v4 = v3; /*0x7b524d*/
  v5 = v3 - 1; /*0x7b524f*/
  if ( v4 ) /*0x7b5252*/
  {
    do /*0x7b527d*/
    {
      v6 = (char *)*a2; /*0x7b5258*/
      if ( !*a2 ) /*0x7b5258*/
        v6 = &g_INI_DefaultBuffer; /*0x7b525e*/
      if ( !strchr(v6, *(char *)(*(_DWORD *)this->__pad_0 + v5)) ) /*0x7b526c*/
        break; /*0x7b5276*/
    }
    while ( v5-- ); /*0x7b527d*/
  }
  v8 = v5 + 1; /*0x7b5282*/
  v9 = &g_INI_DefaultBuffer; /*0x7b5285*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b527f*/
    v9 = *(const char **)this->__pad_0; /*0x7b528c*/
  v10 = (char *)__2_YAPAXI_Z(v8 + 1); /*0x7b5292*/
  v11 = v10; /*0x7b5297*/
  *v10 = 0; /*0x7b529e*/
  if ( v9 ) /*0x7b52a1*/
    strncpy(v10, v9, v8); /*0x7b52a6*/
  v11[v8] = 0; /*0x7b52ae*/
  v12 = &g_INI_DefaultBuffer; /*0x7b52b2*/
  if ( v11 ) /*0x7b52b9*/
    v12 = v11; /*0x7b52bb*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b52bd*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b52c5*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b52cf*/
  if ( v12 ) /*0x7b52d6*/
    v13 = strlen(v12) + 1; /*0x7b52df*/
  else
    v13 = 1; /*0x7b52e5*/
  v14 = (_BYTE *)__2_YAPAXI_Z(v13); /*0x7b52eb*/
  *(_DWORD *)this->__pad_0 = v14; /*0x7b52f3*/
  *v14 = 0; /*0x7b52f8*/
  if ( v12 ) /*0x7b52fb*/
    strcpy(*(char **)this->__pad_0, v12); /*0x7b5314*/
  if ( v11 ) /*0x7b531f*/
    __3_YAXPAX_Z(v11); /*0x7b5322*/
}



// ==== 0x007B5340  DeleteAndZero::Alt2  this=DeleteAndZero  sig=csp ====
int __thiscall DeleteAndZero::Alt2(DeleteAndZero *this)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x7b5343*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b5343*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b534a*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b5352*/
  return result; /*0x7b5358*/
}



// ==== 0x007B5360  ObjectClass::method_7B5360  this=ObjectClass  sig=csp ====
void __thiscall sub_7B5360(ObjectClass *this, int Size)
{
  void *v3; // edi

  if ( this->AbstractClass ) /*0x7b5364*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b536b*/
  this->AbstractClass = 0; /*0x7b5377*/
  if ( Size >= 0 ) /*0x7b537f*/
  {
    v3 = (void *)__2_YAPAXI_Z(Size); /*0x7b538a*/
    this->AbstractClass = v3; /*0x7b5393*/
    memset(v3, 0, Size); /*0x7b5398*/
  }
}



// ==== 0x007B53B0  ObjectClass::method_7B53B0  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_7B53B0(ObjectClass *this, char *Destination, size_t Count)
{
  unsigned int v4; // kr08_4
  unsigned int result; // eax

  strncpy(Destination, (const char *)this->AbstractClass, Count); /*0x7b53c2*/
  v4 = strlen((const char *)this->AbstractClass) + 1; /*0x7b53d1*/
  result = v4 - 1; /*0x7b53d6*/
  if ( v4 - 1 < Count ) /*0x7b53da*/
  {
    result = 538976288; /*0x7b53e3*/
    memset(&Destination[v4 - 1], 0x20u, Count - (v4 - 1)); /*0x7b53ed*/
  }
  Destination[Count] = 0; /*0x7b53f6*/
  return result; /*0x7b53fa*/
}



// ==== 0x007B5400  String::GetOrEmpty  this=AbstractClass  sig=csp ====
char *__thiscall String::GetOrEmpty(String *this)
{
  char *result; // eax

  result = *(char **)this->__pad_0; /*0x7b5400*/
  if ( !*(_DWORD *)this->__pad_0 ) /*0x7b5400*/
    return &g_INI_DefaultBuffer; /*0x7b5406*/
  return result; /*0x7b540b*/
}



// ==== 0x007B5410  ObjectClass::method_7B5410  this=ObjectClass  sig=csp ====
char __thiscall sub_7B5410(ObjectClass *this, unsigned int a2)
{
  _BYTE *ptr_0; // edx

  ptr_0 = this->AbstractClass; /*0x7b5410*/
  if ( a2 >= strlen((const char *)this->AbstractClass) ) /*0x7b5426*/
    return 0; /*0x7b542e*/
  else
    return ptr_0[a2]; /*0x7b5428*/
}



// ==== 0x007B5440  String::GetOrEmpty_Alt  this=AbstractClass  sig=csp ====
char *__thiscall String::GetOrEmpty_Alt(String *this)
{
  char *result; // eax

  result = *(char **)this->__pad_0; /*0x7b5440*/
  if ( !*(_DWORD *)this->__pad_0 ) /*0x7b5440*/
    return &g_INI_DefaultBuffer; /*0x7b5446*/
  return result; /*0x7b544b*/
}



// ==== 0x007B54B0  String::Length  this=ObjectClass  sig=csp ====
int __thiscall String::Length(String *this)
{
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b54b1*/
    return strlen(*(const char **)this->__pad_0); /*0x7b54c6*/
  else
    return 0; /*0x7b54b7*/
}



// ==== 0x007B54D0  ObjectClass::method_7B54D0  this=ObjectClass  sig=csp ====
char __thiscall sub_7B54D0(ObjectClass *this, const char *Src, unsigned int a3)
{
  const char *ptr_0; // edx
  size_t v5; // ecx
  _BYTE *v6; // eax
  char *v8; // ebp

  ptr_0 = (const char *)this->AbstractClass; /*0x7b54d5*/
  if ( this->AbstractClass ) /*0x7b54d5*/
  {
    if ( a3 > strlen((const char *)this->AbstractClass) ) /*0x7b5542*/
      a3 = strlen(ptr_0); /*0x7b5550*/
    v8 = (char *)__2_YAPAXI_Z(strlen(ptr_0) + 1 + strlen(Src)); /*0x7b557d*/
    memset(v8, 0, strlen((const char *)this->AbstractClass) + 1 + strlen(Src)); /*0x7b55a0*/
    strcpy(v8, (const char *)this->AbstractClass); /*0x7b55c3*/
    memcpy(&v8[strlen(Src) + a3], &v8[a3], strlen((const char *)this->AbstractClass) + 1 - a3); /*0x7b55ff*/
    memcpy(&v8[a3], Src, strlen(Src)); /*0x7b5617*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b561f*/
    this->AbstractClass = v8; /*0x7b5627*/
    return 1; /*0x7b5629*/
  }
  else
  {
    this->AbstractClass = 0; /*0x7b54df*/
    if ( Src ) /*0x7b54e3*/
      v5 = strlen(Src) + 1; /*0x7b54ec*/
    else
      v5 = 1; /*0x7b54f2*/
    v6 = (_BYTE *)__2_YAPAXI_Z(v5); /*0x7b54f8*/
    this->AbstractClass = v6; /*0x7b5500*/
    *v6 = 0; /*0x7b5504*/
    if ( Src ) /*0x7b5507*/
      strcpy((char *)this->AbstractClass, Src); /*0x7b551f*/
    return 1; /*0x7b552a*/
  }
}



// ==== 0x007B5640  ObjectClass::method_7B5640  this=ObjectClass  sig=csp ====
char __thiscall sub_7B5640(ObjectClass *this, char a2, unsigned int a3)
{
  size_t v4; // ecx
  _BYTE *v5; // eax
  unsigned int v7; // kr0C_4
  char *v8; // eax
  _BYTE *ptr_0; // ecx
  char *v10; // ebx
  char v11; // dl
  int v12; // [esp+0h] [ebp-10h] BYREF
  char v13; // [esp+Eh] [ebp-2h] BYREF
  char v14; // [esp+Fh] [ebp-1h]

  if ( this->AbstractClass ) /*0x7b5646*/
  {
    v7 = strlen((const char *)this->AbstractClass) + 1; /*0x7b56c0*/
    if ( a3 > v7 - 1 ) /*0x7b56cb*/
      a3 = v7 - 1; /*0x7b56cd*/
    v8 = (char *)__2_YAPAXI_Z(v7 - 1 + 2); /*0x7b56d6*/
    ptr_0 = this->AbstractClass; /*0x7b56db*/
    v10 = v8; /*0x7b56e2*/
    v14 = 0; /*0x7b56e4*/
    v11 = ptr_0[a3]; /*0x7b56ef*/
    ptr_0[a3] = 0; /*0x7b56f1*/
    strcpy(v8, (const char *)this->AbstractClass); /*0x7b5708*/
    *((_BYTE *)this->AbstractClass + a3) = v11; /*0x7b571c*/
    v13 = a2; /*0x7b5723*/
    strcat(v8, &v13); /*0x7b5743*/
    strcat(v8, (const char *)this->AbstractClass + a3); /*0x7b5771*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b577e*/
    this->AbstractClass = v10; /*0x7b5786*/
    return 1; /*0x7b5789*/
  }
  else
  {
    v13 = a2; /*0x7b5657*/
    v14 = 0; /*0x7b565b*/
    this->AbstractClass = 0; /*0x7b5660*/
    if ( &v12 == (int *)-14 ) /*0x7b5663*/
      v4 = 1; /*0x7b5674*/
    else
      v4 = strlen(&v13) + 1; /*0x7b566e*/
    v5 = (_BYTE *)__2_YAPAXI_Z(v4); /*0x7b567a*/
    this->AbstractClass = v5; /*0x7b5686*/
    *v5 = 0; /*0x7b5689*/
    if ( &v13 ) /*0x7b568e*/
      strcpy((char *)this->AbstractClass, &v13); /*0x7b56a9*/
    return 1; /*0x7b56b4*/
  }
}



// ==== 0x007B57A0  String::Replace  this=String  sig=csp ====
char __thiscall String::Replace(String *this, char *SubStr, const char *a3)
{
  void **v3; // edi
  char *v4; // ebx
  const char *v5; // ebp
  char *v6; // eax
  size_t v7; // eax
  char *v8; // esi
  size_t v9; // edx
  char *v10; // eax
  const char *v11; // esi
  char *v12; // ebp
  unsigned int v13; // kr1C_4
  size_t v14; // edx
  char *v15; // eax
  const char *v16; // esi
  unsigned int v17; // kr30_4
  size_t v18; // edx
  char *v19; // eax
  const char *v20; // esi
  size_t v21; // ecx
  _BYTE *v22; // eax
  char *Block; // [esp+10h] [ebp-Ch]
  size_t Count; // [esp+14h] [ebp-8h]
  char *v27; // [esp+18h] [ebp-4h]
  char *v28; // [esp+24h] [ebp+8h]

  v3 = (void **)this; /*0x7b57a6*/
  v4 = 0; /*0x7b57a8*/
  v5 = *(const char **)this->__pad_0; /*0x7b57ae*/
  if ( !*(_DWORD *)this->__pad_0 ) /*0x7b57ae*/
    v5 = &g_INI_DefaultBuffer; /*0x7b57b4*/
  if ( !v5 ) /*0x7b57bc*/
    goto LABEL_33; /*0x7b57bc*/
  while ( *v5 ) /*0x7b57c6*/
  {
    v6 = strstr(v5, SubStr); /*0x7b57d2*/
    v27 = v6; /*0x7b57da*/
    if ( !v6 ) /*0x7b57e0*/
    {
      v16 = v4; /*0x7b5924*/
      v17 = strlen(v5) + 1; /*0x7b5926*/
      v28 = v4; /*0x7b592b*/
      v18 = v17; /*0x7b5931*/
      if ( v4 ) /*0x7b5934*/
        v18 = strlen(v4) + v17; /*0x7b5940*/
      v19 = (char *)__2_YAPAXI_Z(v18); /*0x7b5943*/
      v4 = v19; /*0x7b594b*/
      if ( v16 ) /*0x7b594f*/
        strcpy(v19, v16); /*0x7b5967*/
      else
        *v19 = 0; /*0x7b5972*/
      strcat(v19, v5); /*0x7b5993*/
      if ( v28 ) /*0x7b59a2*/
        __3_YAXPAX_Z(v28); /*0x7b59a5*/
      break; /*0x7b59a5*/
    }
    v7 = v6 - v5; /*0x7b57e6*/
    Count = v7; /*0x7b57e8*/
    if ( v7 ) /*0x7b57ec*/
    {
      v8 = v4; /*0x7b57ee*/
      v9 = v7 + 1; /*0x7b57f0*/
      Block = v4; /*0x7b57f5*/
      if ( v4 ) /*0x7b57f9*/
        v9 = strlen(v4) + 1 + v7; /*0x7b5807*/
      v10 = (char *)__2_YAPAXI_Z(v9); /*0x7b580a*/
      v4 = v10; /*0x7b5812*/
      if ( v8 ) /*0x7b5816*/
      {
        strcpy(v10, v8); /*0x7b582e*/
        v8 = Block; /*0x7b5837*/
      }
      else
      {
        *v10 = 0; /*0x7b583d*/
      }
      strncat(v10, v5, Count); /*0x7b5847*/
      if ( v8 ) /*0x7b5851*/
        __3_YAXPAX_Z(v8); /*0x7b5854*/
    }
    v11 = a3; /*0x7b585c*/
    if ( a3 ) /*0x7b5862*/
    {
      v12 = v4; /*0x7b586f*/
      v13 = strlen(a3) + 1; /*0x7b5871*/
      v14 = v13; /*0x7b5878*/
      if ( v4 ) /*0x7b587b*/
        v14 = strlen(v4) + v13; /*0x7b5887*/
      v15 = (char *)__2_YAPAXI_Z(v14); /*0x7b588a*/
      v4 = v15; /*0x7b5892*/
      if ( v12 ) /*0x7b5896*/
      {
        strcpy(v15, v12); /*0x7b58ae*/
        v11 = a3; /*0x7b58b7*/
      }
      else
      {
        *v15 = 0; /*0x7b58bd*/
      }
      strcat(v15, v11); /*0x7b58de*/
      if ( v12 ) /*0x7b58e9*/
        __3_YAXPAX_Z(v12); /*0x7b58ec*/
    }
    v5 = &v27[strlen(SubStr)]; /*0x7b5908*/
    if ( !v5 ) /*0x7b590a*/
      break; /*0x7b590a*/
  }
  if ( !v4 ) /*0x7b59af*/
  {
    v3 = (void **)this; /*0x7b59b1*/
LABEL_33:
    v20 = &g_INI_DefaultBuffer; /*0x7b59b5*/
    goto LABEL_35; /*0x7b59ba*/
  }
  v3 = (void **)this; /*0x7b59bc*/
  v20 = v4; /*0x7b59c0*/
LABEL_35:
  if ( *v3 ) /*0x7b59c2*/
    __3_YAXPAX_Z(*v3); /*0x7b59c9*/
  *v3 = 0; /*0x7b59d3*/
  if ( v20 ) /*0x7b59d9*/
    v21 = strlen(v20) + 1; /*0x7b59e2*/
  else
    v21 = 1; /*0x7b59e8*/
  v22 = (_BYTE *)__2_YAPAXI_Z(v21); /*0x7b59ee*/
  *(_DWORD *)this->__pad_0 = v22; /*0x7b59fc*/
  *v22 = 0; /*0x7b59fe*/
  if ( v20 ) /*0x7b5a01*/
    strcpy(*(char **)this->__pad_0, v20); /*0x7b5a1d*/
  if ( v4 ) /*0x7b5a29*/
    __3_YAXPAX_Z(v4); /*0x7b5a2c*/
  return 1; /*0x7b5a34*/
}



// ==== 0x007B5A40  String::Assign_Bool  this=DeleteAndZero  sig=csp ====
int __thiscall String::Assign_Bool(String *this, const char *a2)
{
  size_t v3; // ecx
  int result; // eax

  if ( *(_DWORD *)this->__pad_0 ) /*0x7b5a45*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b5a4c*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b5a58*/
  if ( a2 ) /*0x7b5a60*/
    v3 = strlen(a2) + 1; /*0x7b5a69*/
  else
    v3 = 1; /*0x7b5a6f*/
  result = __2_YAPAXI_Z(v3); /*0x7b5a75*/
  *(_DWORD *)this->__pad_0 = result; /*0x7b5a7d*/
  *(_BYTE *)result = 0; /*0x7b5a81*/
  if ( a2 ) /*0x7b5a84*/
  {
    result = strlen(a2) + 1; /*0x7b5a8d*/
    qmemcpy(*(void **)this->__pad_0, a2, result); /*0x7b5a9c*/
  }
  LOBYTE(result) = 1; /*0x7b5aa7*/
  return result; /*0x7b5aa5*/
}



// ==== 0x007B5B30  String::ToLower  this=String  sig=csp ====
int __thiscall String::ToLower(String *this)
{
  unsigned int i; // esi
  int result; // eax
  char v4; // dl

  for ( i = 0; *(_DWORD *)this->__pad_0; ++i ) /*0x7b5b35*/
  {
    result = 0; /*0x7b5b42*/
    if ( i >= strlen(*(const char **)this->__pad_0) ) /*0x7b5b4b*/
      break; /*0x7b5b4b*/
    v4 = *(_BYTE *)(*(_DWORD *)this->__pad_0 + i); /*0x7b5b4d*/
    if ( v4 >= 65 && v4 <= 90 ) /*0x7b5b58*/
    {
      result = tolower(v4); /*0x7b5b5e*/
      *(_BYTE *)(*(_DWORD *)this->__pad_0 + i) = result; /*0x7b5b68*/
    }
  }
  return result; /*0x7b5b6e*/
}



// ==== 0x007B5B80  String::ToLowerCopy  this=String  sig=csp ====
char **__thiscall String::ToLowerCopy(String *this, char **a2)
{
  char *v3; // ebx
  unsigned int i; // esi
  char v5; // al
  char *v6; // edx

  v3 = 0; /*0x7b5b86*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b5b88*/
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
  *a2 = 0; /*0x7b5bfa*/
  if ( v3 ) /*0x7b5c01*/
  {
    v6 = (char *)__2_YAPAXI_Z(strlen(v3) + 1); /*0x7b5c14*/
    *a2 = v6; /*0x7b5c1d*/
    strcpy(v6, v3); /*0x7b5c30*/
    __3_YAXPAX_Z(v3); /*0x7b5c39*/
  }
  return a2; /*0x7b5c41*/
}



// ==== 0x007B5C50  ObjectClass::method_7B5C50  this=ObjectClass  sig=csp ====
void __thiscall sub_7B5C50(ObjectClass *this)
{
  unsigned int i; // esi
  char v3; // dl

  for ( i = 0; this->AbstractClass && i < strlen((const char *)this->AbstractClass); ++i ) /*0x7b5c55*/
  {
    v3 = *((_BYTE *)this->AbstractClass + i); /*0x7b5c6d*/
    if ( v3 >= 97 && v3 <= 122 ) /*0x7b5c78*/
      *((_BYTE *)this->AbstractClass + i) = toupper(v3); /*0x7b5c88*/
  }
}



// ==== 0x007B5CA0  ObjectClass::method_7B5CA0  this=ObjectClass  sig=csp ====
char **__thiscall sub_7B5CA0(ObjectClass *this, char **a2)
{
  char *v3; // ebx
  unsigned int i; // esi
  char v5; // al
  char *v6; // edx

  v3 = 0; /*0x7b5ca6*/
  if ( this->AbstractClass ) /*0x7b5ca8*/
  {
    v3 = (char *)__2_YAPAXI_Z(strlen((const char *)this->AbstractClass) + 1); /*0x7b5cbf*/
    strcpy(v3, (const char *)this->AbstractClass); /*0x7b5cd8*/
  }
  for ( i = 0; v3 && i < strlen(v3); ++i ) /*0x7b5ce1*/
  {
    v5 = v3[i]; /*0x7b5cf7*/
    if ( v5 >= 97 && v5 <= 122 ) /*0x7b5d00*/
      v3[i] = toupper(v5); /*0x7b5d0e*/
  }
  *a2 = 0; /*0x7b5d1a*/
  if ( v3 ) /*0x7b5d21*/
  {
    v6 = (char *)__2_YAPAXI_Z(strlen(v3) + 1); /*0x7b5d34*/
    *a2 = v6; /*0x7b5d3d*/
    strcpy(v6, v3); /*0x7b5d50*/
    __3_YAXPAX_Z(v3); /*0x7b5d59*/
  }
  return a2; /*0x7b5d61*/
}



// ==== 0x007B5D70  String::CopyTruncated  this=String  sig=csp ====
char __thiscall String::CopyTruncated(String *this, size_t Count)
{
  const char *v3; // esi
  char *v4; // eax
  char *v5; // ebp
  const char *v6; // esi
  size_t v7; // ecx
  _BYTE *v8; // eax

  v3 = *(const char **)this->__pad_0; /*0x7b5d75*/
  if ( !*(_DWORD *)this->__pad_0 ) /*0x7b5d75*/
    v3 = &g_INI_DefaultBuffer; /*0x7b5d7c*/
  v4 = (char *)__2_YAPAXI_Z(Count + 1); /*0x7b5d89*/
  v5 = v4; /*0x7b5d8e*/
  *v4 = 0; /*0x7b5d95*/
  if ( v3 ) /*0x7b5d99*/
    strncpy(v4, v3, Count); /*0x7b5d9e*/
  v5[Count] = 0; /*0x7b5da8*/
  v6 = &g_INI_DefaultBuffer; /*0x7b5dac*/
  if ( v5 ) /*0x7b5db1*/
    v6 = v5; /*0x7b5db3*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b5db5*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b5dbc*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b5dc6*/
  if ( v6 ) /*0x7b5dcc*/
    v7 = strlen(v6) + 1; /*0x7b5dd5*/
  else
    v7 = 1; /*0x7b5ddb*/
  v8 = (_BYTE *)__2_YAPAXI_Z(v7); /*0x7b5de1*/
  *(_DWORD *)this->__pad_0 = v8; /*0x7b5de9*/
  *v8 = 0; /*0x7b5ded*/
  if ( v6 ) /*0x7b5df0*/
    strcpy(*(char **)this->__pad_0, v6); /*0x7b5e08*/
  if ( v5 ) /*0x7b5e13*/
    __3_YAXPAX_Z(v5); /*0x7b5e16*/
  return 1; /*0x7b5e1e*/
}



// ==== 0x007B5E30  CChatEventSink::EncodeString  this=CChatEventSink  sig=csp ====
char __thiscall CChatEventSink::EncodeString(CChatEventSink *this, char a2)
{
  char *v4; // eax
  char *v5; // eax
  size_t v6; // esi
  const char *v7; // edi
  char *v8; // eax
  char *v9; // ebp
  const char *v10; // esi
  size_t v11; // ecx
  _BYTE *v12; // eax

  if ( !*(_DWORD *)this->__pad_0 ) /*0x7b5e33*/
    return 0; /*0x7b5e39*/
  v4 = strchr(*(const char **)this->__pad_0, a2); /*0x7b5e46*/
  if ( !v4 ) /*0x7b5e50*/
    return 0; /*0x7b5e52*/
  v5 = &v4[-*(_DWORD *)this->__pad_0]; /*0x7b5e5c*/
  v6 = (size_t)v5; /*0x7b5e5f*/
  v7 = &g_INI_DefaultBuffer; /*0x7b5e63*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b5e58*/
    v7 = *(const char **)this->__pad_0; /*0x7b5e6a*/
  v8 = (char *)__2_YAPAXI_Z((size_t)(v5 + 1)); /*0x7b5e70*/
  v9 = v8; /*0x7b5e75*/
  *v8 = 0; /*0x7b5e7c*/
  if ( v7 ) /*0x7b5e80*/
    strncpy(v8, v7, v6); /*0x7b5e85*/
  v9[v6] = 0; /*0x7b5e8d*/
  v10 = &g_INI_DefaultBuffer; /*0x7b5e91*/
  if ( v9 ) /*0x7b5e98*/
    v10 = v9; /*0x7b5e9a*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b5e9c*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b5ea3*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b5ead*/
  if ( v10 ) /*0x7b5eb3*/
    v11 = strlen(v10) + 1; /*0x7b5ebc*/
  else
    v11 = 1; /*0x7b5ec2*/
  v12 = (_BYTE *)__2_YAPAXI_Z(v11); /*0x7b5ec8*/
  *(_DWORD *)this->__pad_0 = v12; /*0x7b5ed0*/
  *v12 = 0; /*0x7b5ed4*/
  if ( v10 ) /*0x7b5ed7*/
    strcpy(*(char **)this->__pad_0, v10); /*0x7b5eef*/
  if ( v9 ) /*0x7b5efa*/
    __3_YAXPAX_Z(v9); /*0x7b5efd*/
  return 1; /*0x7b5e3b*/
}



// ==== 0x007B5F10  String::Tokenize  this=AbstractClass  sig=csp ====
int __thiscall String::Tokenize(String *this, int a2, char *Str, void **a4)
{
  int v4; // esi
  signed int v7; // ecx
  signed int v8; // ecx
  signed int v9; // ecx
  char *v10; // ebp
  const char *v11; // esi
  size_t v12; // ecx
  _BYTE *v13; // eax
  const char *v14; // edi
  size_t v15; // esi
  char *v16; // eax
  char *v17; // ebp
  const char *v18; // esi
  size_t v19; // ecx
  _BYTE *v20; // eax
  int v21; // [esp+14h] [ebp+4h]
  char *Stra; // [esp+18h] [ebp+8h]

  v4 = a2; /*0x7b5f13*/
  if ( a2 < 0 ) /*0x7b5f1c*/
    return -1; /*0x7b5f21*/
  while ( 1 )
  {
    v7 = *(_DWORD *)this->__pad_0 ? strlen(*(const char **)this->__pad_0) : 0;
    if ( v4 >= v7 || !strchr(Str, *(char *)(*(_DWORD *)this->__pad_0 + v4)) ) /*0x7b5f4c*/
      break; /*0x7b5f4c*/
    ++v4; /*0x7b5f58*/
  }
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b5f5b*/
    v8 = strlen(*(const char **)this->__pad_0); /*0x7b5f6e*/
  else
    v8 = 0; /*0x7b5f61*/
  if ( v4 >= v8 ) /*0x7b5f71*/
    return -1; /*0x7b5f76*/
  v21 = v4; /*0x7b5f7d*/
  while ( 1 )
  {
    v9 = *(_DWORD *)this->__pad_0 ? strlen(*(const char **)this->__pad_0) : 0;
    if ( v4 >= v9 || strchr(Str, *(char *)(*(_DWORD *)this->__pad_0 + v4)) ) /*0x7b5fa1*/
      break; /*0x7b5fa1*/
    ++v4; /*0x7b5fad*/
  }
  v10 = (char *)(v4 - 1); /*0x7b5fb4*/
  v11 = (const char *)(v21 + *(_DWORD *)this->__pad_0); /*0x7b5fbd*/
  Stra = v10; /*0x7b5fbf*/
  if ( *a4 ) /*0x7b5fc3*/
    __3_YAXPAX_Z(*a4); /*0x7b5fca*/
  *a4 = 0; /*0x7b5fd4*/
  if ( v11 ) /*0x7b5fda*/
    v12 = strlen(v11) + 1; /*0x7b5fe3*/
  else
    v12 = 1; /*0x7b5fe9*/
  v13 = (_BYTE *)__2_YAPAXI_Z(v12); /*0x7b5fef*/
  *a4 = v13; /*0x7b5ff7*/
  *v13 = 0; /*0x7b5ffb*/
  if ( v11 ) /*0x7b5ffe*/
    strcpy((char *)*a4, v11); /*0x7b6016*/
  v14 = &g_INI_DefaultBuffer; /*0x7b6029*/
  v15 = (size_t)&v10[-v21 + 1]; /*0x7b602e*/
  if ( *a4 ) /*0x7b6023*/
    v14 = (const char *)*a4; /*0x7b6033*/
  v16 = (char *)__2_YAPAXI_Z((size_t)&v10[-v21 + 2]); /*0x7b6039*/
  v17 = v16; /*0x7b603e*/
  *v16 = 0; /*0x7b6045*/
  if ( v14 ) /*0x7b6049*/
    strncpy(v16, v14, v15); /*0x7b604e*/
  v17[v15] = 0; /*0x7b6056*/
  v18 = &g_INI_DefaultBuffer; /*0x7b605a*/
  if ( v17 ) /*0x7b6061*/
    v18 = v17; /*0x7b6063*/
  if ( *a4 ) /*0x7b6065*/
    __3_YAXPAX_Z(*a4); /*0x7b606c*/
  *a4 = 0; /*0x7b6076*/
  if ( v18 ) /*0x7b607c*/
    v19 = strlen(v18) + 1; /*0x7b6085*/
  else
    v19 = 1; /*0x7b608b*/
  v20 = (_BYTE *)__2_YAPAXI_Z(v19); /*0x7b6091*/
  *a4 = v20; /*0x7b6099*/
  *v20 = 0; /*0x7b609d*/
  if ( v18 ) /*0x7b60a0*/
    strcpy((char *)*a4, v18); /*0x7b60b8*/
  if ( v17 ) /*0x7b60c3*/
    __3_YAXPAX_Z(v17); /*0x7b60c6*/
  return (int)(Stra + 1); /*0x7b5f1e*/
}



// ==== 0x007B60E0  ObjectClass::method_7B60E0  this=ObjectClass  sig=csp ====
int __thiscall sub_7B60E0(ObjectClass *this, signed int a2, void **a3)
{
  signed int v5; // esi
  signed int v6; // ecx
  signed int v8; // ecx
  _BYTE *ptr_0; // eax
  const char *v10; // esi
  size_t v11; // ecx
  _BYTE *v12; // eax
  const char *v13; // edi
  size_t v14; // esi
  char *v15; // eax
  char *v16; // ebp
  const char *v17; // esi
  size_t v18; // ecx
  _BYTE *v19; // eax
  signed int v20; // [esp+14h] [ebp+4h]

  v5 = a2; /*0x7b60ec*/
  if ( this->AbstractClass ) /*0x7b60ea*/
    v6 = strlen((const char *)this->AbstractClass); /*0x7b60ff*/
  else
    v6 = 0; /*0x7b60f2*/
  if ( a2 >= v6 ) /*0x7b6102*/
    return -1; /*0x7b6107*/
  while ( 1 )
  {
    v8 = this->AbstractClass ? strlen((const char *)this->AbstractClass) : 0;
    if ( v5 >= v8 || strchr(String2, *((char *)this->AbstractClass + v5)) ) /*0x7b6132*/
      break; /*0x7b6132*/
    ++v5; /*0x7b613e*/
  }
  ptr_0 = this->AbstractClass; /*0x7b6141*/
  v20 = v5; /*0x7b6143*/
  if ( *((_BYTE *)this->AbstractClass + v5) == 13 && ptr_0[v5 + 1] == 10 ) /*0x7b6152*/
    v20 = v5 + 1; /*0x7b6155*/
  v10 = &ptr_0[a2]; /*0x7b615d*/
  if ( *a3 ) /*0x7b6160*/
    __3_YAXPAX_Z(*a3); /*0x7b6167*/
  *a3 = 0; /*0x7b6171*/
  if ( v10 ) /*0x7b6177*/
    v11 = strlen(v10) + 1; /*0x7b6180*/
  else
    v11 = 1; /*0x7b6186*/
  v12 = (_BYTE *)__2_YAPAXI_Z(v11); /*0x7b618c*/
  *a3 = v12; /*0x7b6194*/
  *v12 = 0; /*0x7b6198*/
  if ( v10 ) /*0x7b619b*/
    strcpy((char *)*a3, v10); /*0x7b61b3*/
  v13 = &g_INI_DefaultBuffer; /*0x7b61c4*/
  v14 = v20 - a2 + 1; /*0x7b61c9*/
  if ( *a3 ) /*0x7b61c0*/
    v13 = (const char *)*a3; /*0x7b61ce*/
  v15 = (char *)__2_YAPAXI_Z(v20 - a2 + 2); /*0x7b61d4*/
  v16 = v15; /*0x7b61d9*/
  *v15 = 0; /*0x7b61e0*/
  if ( v13 ) /*0x7b61e4*/
    strncpy(v15, v13, v14); /*0x7b61e9*/
  v16[v14] = 0; /*0x7b61f1*/
  v17 = &g_INI_DefaultBuffer; /*0x7b61f5*/
  if ( v16 ) /*0x7b61fc*/
    v17 = v16; /*0x7b61fe*/
  if ( *a3 ) /*0x7b6200*/
    __3_YAXPAX_Z(*a3); /*0x7b6207*/
  *a3 = 0; /*0x7b6211*/
  if ( v17 ) /*0x7b6217*/
    v18 = strlen(v17) + 1; /*0x7b6220*/
  else
    v18 = 1; /*0x7b6226*/
  v19 = (_BYTE *)__2_YAPAXI_Z(v18); /*0x7b622c*/
  *a3 = v19; /*0x7b6234*/
  *v19 = 0; /*0x7b6238*/
  if ( v17 ) /*0x7b623b*/
    strcpy((char *)*a3, v17); /*0x7b6253*/
  if ( v16 ) /*0x7b625e*/
    __3_YAXPAX_Z(v16); /*0x7b6261*/
  return v20 + 1; /*0x7b6104*/
}



// ==== 0x007B6280  ObjectClass::??1_Timevec_std__QAE_XZ  this=ObjectClass  sig=csp ====
void __thiscall __1_Timevec_std__QAE_XZ(const char **this)
{
  atoi(*this); /*0x7b6283*/
}



// ==== 0x007B6290  FromStringInt  this=-  sig=csp ====
char **__fastcall String_FromInt(char **a1, int a2)
{
  size_t v3; // ecx
  char *v4; // eax
  char Buffer[16]; // [esp+8h] [ebp-10h] BYREF

  sprintf(Buffer, "%d", a2); /*0x7b62a2*/
  *a1 = 0; /*0x7b62b0*/
  if ( Buffer ) /*0x7b62b6*/
    v3 = strlen(Buffer) + 1; /*0x7b62c1*/
  else
    v3 = 1; /*0x7b62c7*/
  v4 = (char *)__2_YAPAXI_Z(v3); /*0x7b62cd*/
  *a1 = v4; /*0x7b62d9*/
  *v4 = 0; /*0x7b62db*/
  if ( Buffer ) /*0x7b62e0*/
    strcpy(*a1, Buffer); /*0x7b62fb*/
  return a1; /*0x7b6307*/
}



// ==== 0x007B6320  FormatStringInt  this=-  sig=csp ====
char **__fastcall String_FormatInt(char **a1, int a2, int a3)
{
  size_t v5; // ecx
  char *v6; // eax
  char Buffer[16]; // [esp+Ch] [ebp-10h] BYREF

  sprintf(Buffer, "%%0%dd", a3); /*0x7b6339*/
  sprintf(Buffer, Buffer, a2); /*0x7b6349*/
  *a1 = 0; /*0x7b6357*/
  if ( Buffer ) /*0x7b635d*/
    v5 = strlen(Buffer) + 1; /*0x7b6368*/
  else
    v5 = 1; /*0x7b636e*/
  v6 = (char *)__2_YAPAXI_Z(v5); /*0x7b6374*/
  *a1 = v6; /*0x7b6380*/
  *v6 = 0; /*0x7b6382*/
  if ( Buffer ) /*0x7b6387*/
    strcpy(*a1, Buffer); /*0x7b63a1*/
  return a1; /*0x7b63aa*/
}



// ==== 0x007B63C0  ProcessStringAndCopy  this=-  sig=csp ====
char **__fastcall String_ProcessAndCopy(char **a1, const char *a2, char **a3)
{
  size_t v5; // ecx
  char *v6; // ebx
  char *v7; // eax
  char *v8; // edx
  char *Block; // [esp+10h] [ebp-4h]

  if ( a2 ) /*0x7b63cb*/
    v5 = strlen(a2) + 1; /*0x7b63d4*/
  else
    v5 = 1; /*0x7b63da*/
  v6 = (char *)__2_YAPAXI_Z(v5); /*0x7b63e5*/
  *v6 = 0; /*0x7b63ec*/
  if ( a2 ) /*0x7b63ef*/
    strcpy(v6, a2); /*0x7b6407*/
  Block = 0; /*0x7b6412*/
  if ( v6 ) /*0x7b641a*/
  {
    Block = (char *)__2_YAPAXI_Z(strlen(v6) + 1); /*0x7b6439*/
    strcpy(Block, v6); /*0x7b644c*/
  }
  v7 = *a3; /*0x7b6459*/
  if ( !*a3 ) /*0x7b6459*/
    v7 = &g_INI_DefaultBuffer; /*0x7b645f*/
  String_Process_7B4A10(v7); /*0x7b6469*/
  *a1 = 0; /*0x7b6472*/
  if ( Block ) /*0x7b647b*/
  {
    v8 = (char *)__2_YAPAXI_Z(strlen(Block) + 1); /*0x7b6490*/
    *a1 = v8; /*0x7b649a*/
    strcpy(v8, Block); /*0x7b64ac*/
    __3_YAXPAX_Z(Block); /*0x7b64be*/
  }
  if ( v6 ) /*0x7b64c8*/
    __3_YAXPAX_Z(v6); /*0x7b64cb*/
  return a1; /*0x7b64d3*/
}



// ==== 0x007B64E0  ConcatStringAlloc  this=-  sig=csp ====
char **__fastcall String_ConcatAlloc(char **a1, const char **a2, char **a3)
{
  char **v4; // ebp
  char *v5; // ebx
  const char *v6; // eax
  const char *v7; // esi
  char *v8; // ebp
  unsigned int v9; // kr14_4
  size_t v10; // edx
  char *v11; // eax
  char *v12; // edx
  char *v15; // [esp+18h] [ebp+4h]

  v4 = a1; /*0x7b64e7*/
  v5 = 0; /*0x7b64eb*/
  if ( *a2 ) /*0x7b64e9*/
  {
    v5 = (char *)__2_YAPAXI_Z(strlen(*a2) + 1); /*0x7b6506*/
    strcpy(v5, *a2); /*0x7b651f*/
  }
  v6 = *a3; /*0x7b652c*/
  if ( *a3 ) /*0x7b652c*/
  {
    v15 = *a3; /*0x7b653d*/
    v7 = v6; /*0x7b6541*/
  }
  else
  {
    v7 = &g_INI_DefaultBuffer; /*0x7b6532*/
    v15 = &g_INI_DefaultBuffer; /*0x7b6537*/
  }
  if ( v7 ) /*0x7b6545*/
  {
    v8 = v5; /*0x7b6552*/
    v9 = strlen(v7) + 1; /*0x7b6554*/
    v10 = v9; /*0x7b655b*/
    if ( v5 ) /*0x7b655e*/
      v10 = strlen(v5) + v9; /*0x7b656a*/
    v11 = (char *)__2_YAPAXI_Z(v10); /*0x7b656d*/
    v5 = v11; /*0x7b6575*/
    if ( v8 ) /*0x7b6579*/
    {
      strcpy(v11, v8); /*0x7b6591*/
      v7 = v15; /*0x7b659a*/
    }
    else
    {
      *v11 = 0; /*0x7b65a0*/
    }
    strcat(v11, v7); /*0x7b65c1*/
    if ( v8 ) /*0x7b65cc*/
      __3_YAXPAX_Z(v8); /*0x7b65cf*/
    v4 = a1; /*0x7b65d7*/
  }
  *v4 = 0; /*0x7b65dd*/
  if ( v5 ) /*0x7b65e4*/
  {
    v12 = (char *)__2_YAPAXI_Z(strlen(v5) + 1); /*0x7b65f7*/
    *v4 = v12; /*0x7b6600*/
    strcpy(v12, v5); /*0x7b6613*/
    __3_YAXPAX_Z(v5); /*0x7b661c*/
  }
  return v4; /*0x7b6624*/
}



// ==== 0x007B6630  ValidateStringContains  this=ObjectClass  sig=csp ====
int __fastcall ValidateStringContains(const char **a1, const char *a2, char *Control)
{
  int result; // eax

  if ( Control && *a1 ) /*0x7b6639*/
    return strcspn(*a1, Control) < strlen(a2); /*0x7b665f*/
  LOBYTE(result) = 0; /*0x7b6665*/
  return result; /*0x7b6661*/
}



// ==== 0x007B66C0  ObjectClass::unknown_libname_74  this=GameSetup  sig=csp ====
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_74(_DWORD *this)
{
  *this = 0; /*0x7b66c2*/
  return this; /*0x7b66c8*/
}



// ==== 0x007B66D0  WideString::Assign  this=WideString  sig=csp ====
wchar_t **__thiscall WideString::Assign(WideString *this, wchar_t *String)
{
  int v3; // eax
  _WORD *v4; // eax

  *(_DWORD *)this = 0; /*0x7b66da*/
  if ( String ) /*0x7b66e0*/
    v3 = wcslen(String) + 1; /*0x7b66eb*/
  else
    v3 = 1; /*0x7b66ee*/
  v4 = (_WORD *)__2_YAPAXI_Z(2 * v3); /*0x7b66f6*/
  *(_DWORD *)this = v4; /*0x7b66fe*/
  *v4 = 0; /*0x7b6702*/
  if ( String ) /*0x7b6707*/
    wcscpy(*(wchar_t **)this, String); /*0x7b670d*/
  return (wchar_t **)this; /*0x7b6717*/
}



// ==== 0x007B6720  WideString::AssignFromPtr  this=MultiplayerGameMode  sig=csp ====
wchar_t **__thiscall WideString::AssignFromPtr(WideString *this, const wchar_t **a2)
{
  int v3; // eax
  wchar_t *v4; // eax

  *(_DWORD *)this = 0; /*0x7b6728*/
  if ( *a2 ) /*0x7b672e*/
  {
    v3 = wcslen(*a2); /*0x7b6735*/
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3 + 2); /*0x7b673f*/
    *(_DWORD *)this = v4; /*0x7b6744*/
    wcscpy(v4, *a2); /*0x7b674a*/
  }
  return (wchar_t **)this; /*0x7b6754*/
}



// ==== 0x007B6760  DeleteAndZero::Alt  this=DeleteAndZero  sig=csp ====
int __thiscall DeleteAndZero::Alt(DeleteAndZero *this)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x7b6763*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b6763*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b676a*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b6772*/
  return result; /*0x7b6778*/
}



// ==== 0x007B6780  ObjectClass::String_Helper  this=ObjectClass  sig=csp ====
bool __thiscall String_Helper(ObjectClass *this, wchar_t *String2)
{
  const wchar_t *ptr_0; // eax

  ptr_0 = (const wchar_t *)this->AbstractClass; /*0x7b6780*/
  if ( !this->AbstractClass && !String2 ) /*0x7b678c*/
    return 1; /*0x7b678e*/
  if ( ptr_0 && String2 ) /*0x7b6799*/
    return wcscmp(ptr_0, String2) == 0; /*0x7b67a7*/
  return 0; /*0x7b6790*/
}



// ==== 0x007B67C0  ObjectClass::SendMultiplayerStartSignal_Start_77EBA0_Start  this=ObjectClass  sig=csp ====
bool __thiscall SendMultiplayerStartSignal_Start_77EBA0_Start(ObjectClass *this, const wchar_t **a2)
{
  const wchar_t *ptr_0; // eax

  ptr_0 = (const wchar_t *)this->AbstractClass; /*0x7b67c0*/
  if ( !this->AbstractClass && !*a2 ) /*0x7b67ca*/
    return 1; /*0x7b67cf*/
  if ( ptr_0 && *a2 ) /*0x7b67d8*/
    return wcscmp(ptr_0, *a2) == 0; /*0x7b67ea*/
  return 0; /*0x7b67d1*/
}



// ==== 0x007B6880  WideString::Assign_Alt  this=SafeDelete  sig=csp ====
void **__thiscall WideString::Assign_Alt(WideString *this, wchar_t *String)
{
  int v3; // eax
  _WORD *v4; // eax

  if ( *(_DWORD *)this ) /*0x7b6884*/
    __3_YAXPAX_Z(*(void **)this); /*0x7b688b*/
  *(_DWORD *)this = 0; /*0x7b6897*/
  if ( String ) /*0x7b689f*/
    v3 = wcslen(String) + 1; /*0x7b68aa*/
  else
    v3 = 1; /*0x7b68ad*/
  v4 = (_WORD *)__2_YAPAXI_Z(2 * v3); /*0x7b68b5*/
  *(_DWORD *)this = v4; /*0x7b68bd*/
  *v4 = 0; /*0x7b68c1*/
  if ( String ) /*0x7b68c6*/
    wcscpy(*(wchar_t **)this, String); /*0x7b68cc*/
  return (void **)this; /*0x7b68d6*/
}



// ==== 0x007B68E0  WideString::Reassign_Alt  this=MultiplayerGameMode  sig=csp ====
void **__thiscall WideString::Reassign_Alt(WideString *this, const wchar_t **a2)
{
  const wchar_t *v3; // eax
  wchar_t *v4; // edi
  int v5; // eax
  _WORD *v6; // eax

  v3 = *(const wchar_t **)this; /*0x7b68e8*/
  if ( (*(_DWORD *)this || *a2) && (!v3 || !*a2 || wcscmp(v3, *a2)) ) /*0x7b68ff*/
  {
    v4 = (wchar_t *)*a2; /*0x7b690b*/
    if ( !*a2 ) /*0x7b690b*/
      v4 = &g_TypeClass_DefaultString; /*0x7b6911*/
    if ( *(_DWORD *)this ) /*0x7b6916*/
      __3_YAXPAX_Z(*(void **)this); /*0x7b691d*/
    *(_DWORD *)this = 0; /*0x7b6927*/
    if ( v4 ) /*0x7b692d*/
      v5 = wcslen(v4) + 1; /*0x7b6938*/
    else
      v5 = 1; /*0x7b693b*/
    v6 = (_WORD *)__2_YAPAXI_Z(2 * v5); /*0x7b6943*/
    *(_DWORD *)this = v6; /*0x7b694b*/
    *v6 = 0; /*0x7b694f*/
    if ( v4 ) /*0x7b6954*/
      wcscpy(*(wchar_t **)this, v4); /*0x7b695a*/
  }
  return (void **)this; /*0x7b6964*/
}



// ==== 0x007B6970  WString::Append  this=WString  sig=csp ====
int __thiscall WString::Append(WString *this, wchar_t *String)
{
  int result; // eax
  wchar_t *v4; // esi
  int v5; // edi
  wchar_t *v6; // eax

  if ( String ) /*0x7b697a*/
  {
    v4 = *(wchar_t **)this->__pad_0; /*0x7b6984*/
    v5 = wcslen(String) + 1; /*0x7b6992*/
    if ( v4 ) /*0x7b6995*/
      v5 += wcslen(v4); /*0x7b69a0*/
    v6 = (wchar_t *)__2_YAPAXI_Z(4 * v5); /*0x7b69aa*/
    *(_DWORD *)this->__pad_0 = v6; /*0x7b69b2*/
    if ( v4 ) /*0x7b69b6*/
      wcscpy(v6, v4); /*0x7b69ba*/
    else
      *v6 = 0; /*0x7b69c4*/
    result = (int)wcscat(*(wchar_t **)this->__pad_0, String); /*0x7b69cd*/
    if ( v4 ) /*0x7b69d7*/
      __3_YAXPAX_Z(v4); /*0x7b69da*/
    LOBYTE(result) = 1; /*0x7b69e5*/
  }
  else
  {
    LOBYTE(result) = 1; /*0x7b697d*/
  }
  return result; /*0x7b697c*/
}



// ==== 0x007B69F0  ObjectClass::method_7B69F0  this=ObjectClass  sig=csp ====
char __thiscall sub_7B69F0(ObjectClass *this, size_t Count, wchar_t *Source)
{
  size_t v4; // ebx
  wchar_t *ptr_0; // esi
  _WORD *v6; // eax

  v4 = Count + 1; /*0x7b69fa*/
  ptr_0 = (wchar_t *)this->AbstractClass; /*0x7b69fd*/
  if ( this->AbstractClass ) /*0x7b69fd*/
    v4 += wcslen((const wchar_t *)this->AbstractClass); /*0x7b6a0c*/
  v6 = (_WORD *)__2_YAPAXI_Z(4 * v4); /*0x7b6a16*/
  this->AbstractClass = v6; /*0x7b6a1e*/
  if ( ptr_0 ) /*0x7b6a22*/
    wcscpy(v6, ptr_0); /*0x7b6a26*/
  else
    *v6 = 0; /*0x7b6a30*/
  if ( Source ) /*0x7b6a3b*/
    wcsncat((wchar_t *)this->AbstractClass, Source, Count); /*0x7b6a42*/
  if ( ptr_0 ) /*0x7b6a4c*/
    __3_YAXPAX_Z(ptr_0); /*0x7b6a4f*/
  return 1; /*0x7b6a57*/
}



// ==== 0x007B6A60  ObjectClass::method_7B6A60  this=ObjectClass  sig=csp ====
char __thiscall sub_7B6A60(ObjectClass *this, const wchar_t **a2)
{
  wchar_t *v2; // ebp
  wchar_t *ptr_0; // esi
  int v5; // edi
  _WORD *v6; // eax

  v2 = (wchar_t *)*a2; /*0x7b6a67*/
  if ( *a2 || (v2 = &g_TypeClass_DefaultString) != 0 ) /*0x7b6a76*/
  {
    ptr_0 = (wchar_t *)this->AbstractClass; /*0x7b6a78*/
    v5 = wcslen(v2) + 1; /*0x7b6a86*/
    if ( ptr_0 ) /*0x7b6a89*/
      v5 += wcslen(ptr_0); /*0x7b6a94*/
    v6 = (_WORD *)__2_YAPAXI_Z(4 * v5); /*0x7b6a9e*/
    this->AbstractClass = v6; /*0x7b6aa6*/
    if ( ptr_0 ) /*0x7b6aab*/
      wcscpy(v6, ptr_0); /*0x7b6aaf*/
    else
      *v6 = 0; /*0x7b6ab9*/
    wcscat((wchar_t *)this->AbstractClass, v2); /*0x7b6ac2*/
    if ( ptr_0 ) /*0x7b6acc*/
      __3_YAXPAX_Z(ptr_0); /*0x7b6acf*/
  }
  return 1; /*0x7b6ad7*/
}



// ==== 0x007B6AE0  WideString::Append2  this=WideString  sig=csp ====
wchar_t **__thiscall WideString::Append2(WideString *this, wchar_t *String)
{
  wchar_t *v3; // esi
  int v4; // edi
  wchar_t *v5; // eax

  if ( String ) /*0x7b6aeb*/
  {
    v3 = *(wchar_t **)this; /*0x7b6aed*/
    v4 = wcslen(String) + 1; /*0x7b6afb*/
    if ( v3 ) /*0x7b6afe*/
      v4 += wcslen(v3); /*0x7b6b09*/
    v5 = (wchar_t *)__2_YAPAXI_Z(4 * v4); /*0x7b6b13*/
    *(_DWORD *)this = v5; /*0x7b6b1b*/
    if ( v3 ) /*0x7b6b20*/
      wcscpy(v5, v3); /*0x7b6b24*/
    else
      *v5 = 0; /*0x7b6b2e*/
    wcscat(*(wchar_t **)this, String); /*0x7b6b37*/
    if ( v3 ) /*0x7b6b41*/
      __3_YAXPAX_Z(v3); /*0x7b6b44*/
  }
  return (wchar_t **)this; /*0x7b6b4c*/
}



// ==== 0x007B6B60  WideString::Append  this=WideString  sig=csp ====
wchar_t **__thiscall WideString::Append(WideString *this, const wchar_t **a2)
{
  wchar_t *v2; // ebp
  wchar_t *v4; // esi
  int v5; // edi
  wchar_t *v6; // eax

  v2 = (wchar_t *)*a2; /*0x7b6b67*/
  if ( *a2 || (v2 = &g_TypeClass_DefaultString) != 0 ) /*0x7b6b76*/
  {
    v4 = *(wchar_t **)this; /*0x7b6b78*/
    v5 = wcslen(v2) + 1; /*0x7b6b86*/
    if ( v4 ) /*0x7b6b89*/
      v5 += wcslen(v4); /*0x7b6b94*/
    v6 = (wchar_t *)__2_YAPAXI_Z(4 * v5); /*0x7b6b9e*/
    *(_DWORD *)this = v6; /*0x7b6ba6*/
    if ( v4 ) /*0x7b6bab*/
      wcscpy(v6, v4); /*0x7b6baf*/
    else
      *v6 = 0; /*0x7b6bb9*/
    wcscat(*(wchar_t **)this, v2); /*0x7b6bc2*/
    if ( v4 ) /*0x7b6bcc*/
      __3_YAXPAX_Z(v4); /*0x7b6bcf*/
  }
  return (wchar_t **)this; /*0x7b6bd7*/
}



// ==== 0x007B6BE0  WideString::AssignConcat  this=ObjectClass  sig=csp ====
wchar_t **__thiscall WideString::AssignConcat(WideString *this, wchar_t **a2, wchar_t *String)
{
  wchar_t *v4; // esi
  int v5; // eax
  wchar_t *v6; // ebx
  int v7; // edi
  wchar_t *v8; // eax
  int v9; // eax
  wchar_t *v10; // eax

  v4 = 0; /*0x7b6be4*/
  if ( *(_DWORD *)this ) /*0x7b6be6*/
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



// ==== 0x007B6CB0  WideString::ConcatAlloc  this=ObjectClass  sig=csp ====
wchar_t **__thiscall WideString::ConcatAlloc(WideString *this, wchar_t **a2, const wchar_t **a3)
{
  wchar_t *v4; // esi
  int v5; // eax
  wchar_t *v6; // ebp
  wchar_t *v7; // ebx
  int v8; // edi
  wchar_t *v9; // eax
  int v10; // eax
  wchar_t *v11; // eax

  v4 = 0; /*0x7b6cb4*/
  if ( *(_DWORD *)this ) /*0x7b6cb6*/
  {
    v5 = wcslen(*(const wchar_t **)this); /*0x7b6cbd*/
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v5 + 2); /*0x7b6cce*/
    wcscpy(v4, *(const wchar_t **)this); /*0x7b6cd2*/
  }
  v6 = (wchar_t *)*a3; /*0x7b6ce0*/
  if ( *a3 || (v6 = &g_TypeClass_DefaultString) != 0 ) /*0x7b6ced*/
  {
    v7 = v4; /*0x7b6cf0*/
    v8 = wcslen(v6) + 1; /*0x7b6cfc*/
    if ( v4 ) /*0x7b6cff*/
      v8 += wcslen(v4); /*0x7b6d0a*/
    v9 = (wchar_t *)__2_YAPAXI_Z(4 * v8); /*0x7b6d14*/
    v4 = v9; /*0x7b6d1c*/
    if ( v7 ) /*0x7b6d20*/
      wcscpy(v9, v7); /*0x7b6d24*/
    else
      *v9 = 0; /*0x7b6d2e*/
    wcscat(v4, v6); /*0x7b6d35*/
    if ( v7 ) /*0x7b6d3f*/
      __3_YAXPAX_Z(v7); /*0x7b6d42*/
  }
  *a2 = 0; /*0x7b6d51*/
  if ( v4 ) /*0x7b6d58*/
  {
    v10 = wcslen(v4); /*0x7b6d5b*/
    v11 = (wchar_t *)__2_YAPAXI_Z(2 * v10 + 2); /*0x7b6d65*/
    *a2 = v11; /*0x7b6d6c*/
    wcscpy(v11, v4); /*0x7b6d6e*/
    __3_YAXPAX_Z(v4); /*0x7b6d74*/
  }
  return a2; /*0x7b6d7e*/
}



// ==== 0x007B6D90  WideString::Erase  this=ObjectClass  sig=csp ====
__int16 __thiscall WideString::Erase(WideString *this, int a2, int a3)
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
  *(_WORD *)(*(_DWORD *)this + 2 * v5) = 0; /*0x7b6de2*/
  v9 = 2 * (v6 + v5); /*0x7b6dec*/
  *(_WORD *)(v9 + *(_DWORD *)this - 2) = 0; /*0x7b6dee*/
  wcscpy(v8, *(const wchar_t **)this); /*0x7b6df9*/
  wcscat(v8, (const wchar_t *)(*(_DWORD *)this + v9)); /*0x7b6e02*/
  __3_YAXPAX_Z(*(void **)this); /*0x7b6e0a*/
  *(_DWORD *)this = v8; /*0x7b6e12*/
  return 1; /*0x7b6dbf*/
}



// ==== 0x007B6E20  WideString::RemoveChar  this=WideString  sig=csp ====
char __thiscall WideString::RemoveChar(WideString *this, wchar_t a2)
{
  char v3; // bl
  int v5; // edi
  wchar_t *v6; // eax
  int v7; // edi
  int v8; // eax
  wchar_t *v9; // edi

  v3 = 0; /*0x7b6e24*/
  if ( !*(_DWORD *)this ) /*0x7b6e26*/
    return 0; /*0x7b6e2d*/
  v5 = wcslen(*(const wchar_t **)this); /*0x7b6e3f*/
  v6 = wcschr(*(const wchar_t **)this, a2); /*0x7b6e45*/
  if ( v6 ) /*0x7b6e4f*/
  {
    v3 = 1; /*0x7b6e51*/
    v7 = 2 * v5; /*0x7b6e53*/
    do /*0x7b6e88*/
    {
      memcpy(v6, v6 + 1, v7 - (((int)v6 - *(_DWORD *)this) >> 1) - 2); /*0x7b6e6a*/
      v7 -= 2; /*0x7b6e71*/
      *(_WORD *)(v7 + *(_DWORD *)this) = 0; /*0x7b6e75*/
      v6 = wcschr(*(const wchar_t **)this, a2); /*0x7b6e7e*/
    }
    while ( v6 ); /*0x7b6e88*/
    v8 = wcslen(*(const wchar_t **)this); /*0x7b6e8d*/
    v9 = (wchar_t *)__2_YAPAXI_Z(2 * v8 + 2); /*0x7b6e9c*/
    wcscpy(v9, *(const wchar_t **)this); /*0x7b6ea2*/
    __3_YAXPAX_Z(*(void **)this); /*0x7b6eaa*/
    *(_DWORD *)this = v9; /*0x7b6eb2*/
  }
  return v3; /*0x7b6e2c*/
}



// ==== 0x007B6EE0  ObjectClass::method_7B6EE0  this=ObjectClass  sig=csp ====
__int16 __thiscall sub_7B6EE0(ObjectClass *this, const wchar_t **a2)
{
  unsigned int i; // esi
  wchar_t *ptr_0; // eax
  wchar_t *v5; // eax

  for ( i = 0; ; ++i ) /*0x7b6ee9*/
  {
    ptr_0 = (wchar_t *)this->ptr_0; /*0x7b6eeb*/
    if ( !this->ptr_0 ) /*0x7b6eeb*/
      break; /*0x7b6eeb*/
    ptr_0 = (wchar_t *)wcslen((const wchar_t *)this->ptr_0); /*0x7b6ef2*/
    if ( i >= (unsigned int)ptr_0 ) /*0x7b6efc*/
      break; /*0x7b6efc*/
    v5 = (wchar_t *)*a2; /*0x7b6efe*/
    if ( !*a2 ) /*0x7b6efe*/
      v5 = &g_TypeClass_DefaultString; /*0x7b6f04*/
    ptr_0 = wcschr(v5, *(_WORD *)(this->ptr_0 + 2 * i)); /*0x7b6f11*/
    if ( !ptr_0 ) /*0x7b6f1b*/
      break; /*0x7b6f1b*/
  }
  if ( i ) /*0x7b6f22*/
    LOWORD(ptr_0) = WideString::Erase((WideString *)this, 0, i); /*0x7b6f29*/
  return (__int16)ptr_0; /*0x7b6f2e*/
}



// ==== 0x007B6F40  WString::TrimRight  this=WString  sig=csp ====
void __thiscall WString::TrimRight(WString *this, const wchar_t **a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // esi
  wchar_t *v6; // eax
  size_t v8; // esi
  const wchar_t *v9; // ebx
  wchar_t *v10; // eax
  wchar_t *v11; // edi
  const wchar_t *v12; // esi
  int v13; // eax
  _WORD *v14; // eax

  if ( *(_DWORD *)this->__pad_0 ) /*0x7b6f45*/
    v3 = wcslen(*(const wchar_t **)this->__pad_0); /*0x7b6f59*/
  else
    v3 = 0; /*0x7b6f4c*/
  v4 = v3; /*0x7b6f5b*/
  v5 = v3 - 1; /*0x7b6f5d*/
  if ( v4 ) /*0x7b6f60*/
  {
    do /*0x7b6f8b*/
    {
      v6 = (wchar_t *)*a2; /*0x7b6f66*/
      if ( !*a2 ) /*0x7b6f66*/
        v6 = &g_TypeClass_DefaultString; /*0x7b6f6c*/
      if ( !wcschr(v6, *(_WORD *)(*(_DWORD *)this->__pad_0 + 2 * v5)) ) /*0x7b6f7a*/
        break; /*0x7b6f84*/
    }
    while ( v5-- ); /*0x7b6f8b*/
  }
  v8 = v5 + 1; /*0x7b6f90*/
  v9 = &g_TypeClass_DefaultString; /*0x7b6f92*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b6f8d*/
    v9 = *(const wchar_t **)this->__pad_0; /*0x7b6f9b*/
  v10 = (wchar_t *)__2_YAPAXI_Z(2 * v8 + 2); /*0x7b6fa2*/
  v11 = v10; /*0x7b6fa7*/
  *v10 = 0; /*0x7b6fae*/
  if ( v9 ) /*0x7b6fb3*/
    wcsncpy(v10, v9, v8); /*0x7b6fb8*/
  v11[v8] = 0; /*0x7b6fc0*/
  v12 = &g_TypeClass_DefaultString; /*0x7b6fc9*/
  if ( v11 ) /*0x7b6fce*/
    v12 = v11; /*0x7b6fd0*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b6fd2*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b6fda*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b6fe4*/
  if ( v12 ) /*0x7b6feb*/
    v13 = wcslen(v12) + 1; /*0x7b6ff6*/
  else
    v13 = 1; /*0x7b6ff9*/
  v14 = (_WORD *)__2_YAPAXI_Z(2 * v13); /*0x7b7002*/
  *(_DWORD *)this->__pad_0 = v14; /*0x7b700a*/
  *v14 = 0; /*0x7b700f*/
  if ( v12 ) /*0x7b7014*/
    wcscpy(*(wchar_t **)this->__pad_0, v12); /*0x7b701b*/
  if ( v11 ) /*0x7b7025*/
    __3_YAXPAX_Z(v11); /*0x7b7028*/
}



// ==== 0x007B7040  SafeDelete::Ptr  this=SafeDelete  sig=csp ====
int __thiscall SafeDelete::Ptr(SafeDelete *this)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x7b7043*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b7043*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b704a*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b7052*/
  return result; /*0x7b7058*/
}



// ==== 0x007B70B0  ObjectClass::method_7B70B0  this=ObjectClass  sig=csp ====
int __thiscall sub_7B70B0(ObjectClass *this, wchar_t *Destination, size_t Count)
{
  int result; // eax
  wchar_t *v5; // edi
  unsigned int v6; // ecx
  char v7; // cf
  wchar_t *v8; // edi
  int i; // ecx

  wcsncpy(Destination, (const wchar_t *)this->AbstractClass, Count); /*0x7b70c2*/
  result = wcslen((const wchar_t *)this->AbstractClass); /*0x7b70ca*/
  if ( result < Count ) /*0x7b70d4*/
  {
    v5 = &Destination[result]; /*0x7b70d8*/
    v6 = Count - result; /*0x7b70db*/
    result = 2097184; /*0x7b70dd*/
    v7 = v6 & 1; /*0x7b70e2*/
    v6 >>= 1; /*0x7b70e2*/
    memset32(v5, 2097184, v6); /*0x7b70e4*/
    v8 = &v5[2 * v6]; /*0x7b70e4*/
    for ( i = v7; i; --i ) /*0x7b70e6*/
      *v8++ = 32; /*0x7b70e8*/
  }
  Destination[Count] = 0; /*0x7b70eb*/
  return result; /*0x7b70f1*/
}



// ==== 0x007B7100  WideString::GetOrEmpty  this=WideString  sig=csp ====
wchar_t *__thiscall WideString::GetOrEmpty(WideString *this)
{
  wchar_t *result; // eax

  result = *(wchar_t **)this; /*0x7b7100*/
  if ( !*(_DWORD *)this ) /*0x7b7100*/
    return &g_TypeClass_DefaultString; /*0x7b7106*/
  return result; /*0x7b710b*/
}



// ==== 0x007B7110  MSPrintAnim::GetCharAt  this=MSPrintAnim  sig=csp ====
int __thiscall MSPrintAnim::GetCharAt(MSPrintAnim *this, size_t a2)
{
  int result; // eax

  result = wcslen(*(const wchar_t **)this->__pad_0); /*0x7b7116*/
  if ( a2 >= result ) /*0x7b7124*/
    LOWORD(result) = 0; /*0x7b7130*/
  else
    LOWORD(result) = *(_WORD *)(*(_DWORD *)this->__pad_0 + 2 * a2); /*0x7b7129*/
  return result; /*0x7b7128*/
}



// ==== 0x007B7140  WideString::GetOrEmpty_Alt  this=AbstractClass  sig=csp ====
wchar_t *__thiscall WideString::GetOrEmpty_Alt(WideString *this)
{
  wchar_t *result; // eax

  result = *(wchar_t **)this; /*0x7b7140*/
  if ( !*(_DWORD *)this ) /*0x7b7140*/
    return &g_TypeClass_DefaultString; /*0x7b7146*/
  return result; /*0x7b714b*/
}



// ==== 0x007B7180  WideString::GetChar  this=MultiplayerGameMode  sig=csp ====
int __thiscall WideString::GetChar(WideString *this, size_t a2)
{
  int result; // eax

  result = wcslen(*(const wchar_t **)this); /*0x7b7186*/
  if ( a2 >= result ) /*0x7b7194*/
    return 0; /*0x7b71a0*/
  LOWORD(result) = *(_WORD *)(*(_DWORD *)this + 2 * a2); /*0x7b7199*/
  return result; /*0x7b7198*/
}



// ==== 0x007B71B0  WideString::Length  this=MultiplayerGameMode  sig=csp ====
const wchar_t *__thiscall WideString::Length(WideString *this)
{
  const wchar_t *result; // eax

  result = *(const wchar_t **)this; /*0x7b71b0*/
  if ( *(_DWORD *)this ) /*0x7b71b0*/
    return (const wchar_t *)wcslen(*(const wchar_t **)this); /*0x7b71b8*/
  return result; /*0x7b71b6*/
}



// ==== 0x007B71D0  ObjectClass::Render_Helper_7B71D0  this=ObjectClass  sig=csp ====
char __thiscall Render_Helper_7B71D0(ObjectClass *this, const wchar_t *Src, size_t a3)
{
  int v4; // eax
  _WORD *v5; // eax
  int v7; // edi
  int v8; // eax
  char *v9; // ebx
  int v10; // edi
  int v11; // eax
  int v12; // eax
  size_t v13; // [esp-Ch] [ebp-14h]

  if ( this->AbstractClass ) /*0x7b71d4*/
  {
    if ( a3 > wcslen((const wchar_t *)this->AbstractClass) ) /*0x7b722d*/
      a3 = wcslen((const wchar_t *)this->AbstractClass); /*0x7b723a*/
    v7 = wcslen((const wchar_t *)this->AbstractClass); /*0x7b724c*/
    v8 = wcslen(Src); /*0x7b724f*/
    v9 = (char *)__2_YAPAXI_Z(2 * (v8 + v7) + 2); /*0x7b7262*/
    v10 = wcslen((const wchar_t *)this->AbstractClass); /*0x7b726b*/
    memset(v9, 0, 2 * (wcslen(Src) + v10) + 2); /*0x7b7281*/
    wcscpy((wchar_t *)v9, (const wchar_t *)this->AbstractClass); /*0x7b728e*/
    v13 = 2 * (1 - a3 + wcslen((const wchar_t *)this->AbstractClass)); /*0x7b72b0*/
    v11 = wcslen(Src); /*0x7b72b3*/
    memcpy(&v9[2 * a3 + 2 * v11], &v9[2 * a3], v13); /*0x7b72c5*/
    v12 = wcslen(Src); /*0x7b72cb*/
    memcpy(&v9[2 * a3], Src, 2 * v12); /*0x7b72d5*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b72dd*/
    this->AbstractClass = v9; /*0x7b72e5*/
    return 1; /*0x7b72e7*/
  }
  else
  {
    this->AbstractClass = 0; /*0x7b71de*/
    if ( Src ) /*0x7b71e2*/
      v4 = wcslen(Src) + 1; /*0x7b71ed*/
    else
      v4 = 1; /*0x7b71f0*/
    v5 = (_WORD *)__2_YAPAXI_Z(2 * v4); /*0x7b71f8*/
    this->AbstractClass = v5; /*0x7b7200*/
    *v5 = 0; /*0x7b7204*/
    if ( Src ) /*0x7b7209*/
      wcscpy((wchar_t *)this->AbstractClass, Src); /*0x7b720f*/
    return 1; /*0x7b7218*/
  }
}



// ==== 0x007B72F0  EditControl::GrowBuffer  this=EditControl  sig=csp ====
char __thiscall EditControl::GrowBuffer(EditControl *this, wchar_t a2, size_t a3)
{
  int v4; // eax
  _WORD *v5; // eax
  size_t v7; // eax
  size_t v8; // edi
  int v9; // edi
  wchar_t *v10; // ebx
  wchar_t *v11; // eax
  const wchar_t *v12; // [esp-10h] [ebp-18h]
  int v13; // [esp+0h] [ebp-8h] BYREF
  wchar_t String; // [esp+4h] [ebp-4h] BYREF
  __int16 v15; // [esp+6h] [ebp-2h]

  if ( *(_DWORD *)this->__pad_0 ) /*0x7b72f4*/
  {
    v7 = wcslen(*(const wchar_t **)this->__pad_0); /*0x7b7362*/
    v8 = a3; /*0x7b7367*/
    if ( a3 > v7 ) /*0x7b7370*/
      v8 = v7; /*0x7b7372*/
    v9 = 2 * v8; /*0x7b7380*/
    v10 = (wchar_t *)__2_YAPAXI_Z(2 * v7 + 4); /*0x7b7382*/
    v11 = (wchar_t *)(v9 + *(_DWORD *)this->__pad_0); /*0x7b7388*/
    String = *v11; /*0x7b738b*/
    *v11 = 0; /*0x7b7390*/
    v12 = *(const wchar_t **)this->__pad_0; /*0x7b7397*/
    v15 = 0; /*0x7b7399*/
    wcscpy(v10, v12); /*0x7b73a0*/
    *(_WORD *)(v9 + *(_DWORD *)this->__pad_0) = String; /*0x7b73b1*/
    String = a2; /*0x7b73bb*/
    wcscat(v10, &String); /*0x7b73c0*/
    wcscat(v10, (const wchar_t *)(*(_DWORD *)this->__pad_0 + v9)); /*0x7b73c9*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b73d1*/
    *(_DWORD *)this->__pad_0 = v10; /*0x7b73d9*/
    return 1; /*0x7b73db*/
  }
  else
  {
    String = a2; /*0x7b7305*/
    v15 = 0; /*0x7b730a*/
    *(_DWORD *)this->__pad_0 = 0; /*0x7b7311*/
    if ( &v13 == (int *)-4 ) /*0x7b7317*/
      v4 = 1; /*0x7b7329*/
    else
      v4 = wcslen(&String) + 1; /*0x7b7326*/
    v5 = (_WORD *)__2_YAPAXI_Z(2 * v4); /*0x7b7331*/
    *(_DWORD *)this->__pad_0 = v5; /*0x7b733d*/
    *v5 = 0; /*0x7b733f*/
    if ( &String ) /*0x7b7346*/
      wcscpy(*(wchar_t **)this->__pad_0, &String); /*0x7b7350*/
    return 1; /*0x7b7358*/
  }
}



// ==== 0x007B73F0  WideString::Replace  this=GameSetup  sig=csp ====
char __thiscall WideString::Replace(WideString *this, wchar_t *SubStr, wchar_t *String)
{
  void **v3; // ebx
  const wchar_t *v4; // edi
  wchar_t *v5; // esi
  wchar_t *v6; // eax
  size_t v7; // ebp
  wchar_t *v8; // ebx
  wchar_t *v9; // eax
  wchar_t *v10; // ebx
  int v11; // edi
  wchar_t *v12; // eax
  wchar_t *v13; // ebp
  int v14; // ebx
  wchar_t *v15; // eax
  const wchar_t *v16; // edi
  int v17; // eax
  _WORD *v18; // eax
  size_t v20; // [esp+Ch] [ebp-Ch]
  wchar_t *v22; // [esp+14h] [ebp-4h]

  v3 = (void **)this; /*0x7b73f4*/
  v4 = *(const wchar_t **)this; /*0x7b73f8*/
  v5 = 0; /*0x7b73fa*/
  if ( !*(_DWORD *)this ) /*0x7b73f8*/
  {
    v4 = &g_TypeClass_DefaultString; /*0x7b7404*/
    if ( !&g_TypeClass_DefaultString ) /*0x7b740b*/
      goto LABEL_33; /*0x7b740b*/
  }
  while ( *v4 ) /*0x7b7416*/
  {
    v6 = wcsstr(v4, SubStr); /*0x7b7422*/
    v22 = v6; /*0x7b742a*/
    if ( !v6 ) /*0x7b7430*/
    {
      if ( v4 ) /*0x7b7521*/
      {
        v13 = v5; /*0x7b7524*/
        v14 = wcslen(v4) + 1; /*0x7b7530*/
        if ( v5 ) /*0x7b7533*/
          v14 += wcslen(v5); /*0x7b753e*/
        v15 = (wchar_t *)__2_YAPAXI_Z(4 * v14); /*0x7b7548*/
        v5 = v15; /*0x7b7550*/
        if ( v13 ) /*0x7b7554*/
          wcscpy(v15, v13); /*0x7b7558*/
        else
          *v15 = 0; /*0x7b7562*/
        wcscat(v5, v4); /*0x7b7569*/
        if ( v13 ) /*0x7b7573*/
          __3_YAXPAX_Z(v13); /*0x7b7576*/
      }
      break; /*0x7b7576*/
    }
    v7 = (char *)v6 - (char *)v4; /*0x7b7438*/
    if ( v6 != v4 ) /*0x7b743a*/
    {
      v8 = v5; /*0x7b743f*/
      v20 = v7 + 1; /*0x7b7443*/
      if ( v5 ) /*0x7b7447*/
        v20 += wcslen(v5); /*0x7b7458*/
      v9 = (wchar_t *)__2_YAPAXI_Z(4 * v20); /*0x7b7468*/
      v5 = v9; /*0x7b7470*/
      if ( v8 ) /*0x7b7474*/
        wcscpy(v9, v8); /*0x7b7478*/
      else
        *v9 = 0; /*0x7b7482*/
      wcsncat(v5, v4, v7); /*0x7b748a*/
      if ( v8 ) /*0x7b7494*/
        __3_YAXPAX_Z(v8); /*0x7b7497*/
    }
    if ( String ) /*0x7b74a5*/
    {
      v10 = v5; /*0x7b74a8*/
      v11 = wcslen(String) + 1; /*0x7b74b4*/
      if ( v5 ) /*0x7b74b7*/
        v11 += wcslen(v5); /*0x7b74c2*/
      v12 = (wchar_t *)__2_YAPAXI_Z(4 * v11); /*0x7b74cc*/
      v5 = v12; /*0x7b74d4*/
      if ( v10 ) /*0x7b74d8*/
        wcscpy(v12, v10); /*0x7b74dc*/
      else
        *v12 = 0; /*0x7b74e6*/
      wcscat(v5, String); /*0x7b74ed*/
      if ( v10 ) /*0x7b74f7*/
        __3_YAXPAX_Z(v10); /*0x7b74fa*/
    }
    v4 = &v22[wcslen(SubStr)]; /*0x7b7513*/
    if ( !v4 ) /*0x7b7518*/
      break; /*0x7b7518*/
  }
  if ( !v5 ) /*0x7b7581*/
  {
    v3 = (void **)this; /*0x7b7583*/
LABEL_33:
    v16 = &g_TypeClass_DefaultString; /*0x7b7587*/
    goto LABEL_35; /*0x7b758c*/
  }
  v3 = (void **)this; /*0x7b758e*/
  v16 = v5; /*0x7b7592*/
LABEL_35:
  if ( *v3 ) /*0x7b7594*/
    __3_YAXPAX_Z(*v3); /*0x7b759b*/
  *v3 = 0; /*0x7b75a5*/
  if ( v16 ) /*0x7b75ab*/
    v17 = wcslen(v16) + 1; /*0x7b75b6*/
  else
    v17 = 1; /*0x7b75b9*/
  v18 = (_WORD *)__2_YAPAXI_Z(2 * v17); /*0x7b75c1*/
  *v3 = v18; /*0x7b75c9*/
  *v18 = 0; /*0x7b75cd*/
  if ( v16 ) /*0x7b75d2*/
    wcscpy((wchar_t *)*v3, v16); /*0x7b75d8*/
  if ( v5 ) /*0x7b75e2*/
    __3_YAXPAX_Z(v5); /*0x7b75e5*/
  return 1; /*0x7b75ed*/
}



// ==== 0x007B7600  WideString::Reassign  this=GameSetup  sig=csp ====
__int16 __thiscall WideString::Reassign(WideString *this, wchar_t *String)
{
  int v3; // eax
  _WORD *v4; // eax

  if ( *(_DWORD *)this ) /*0x7b7604*/
    __3_YAXPAX_Z(*(void **)this); /*0x7b760b*/
  *(_DWORD *)this = 0; /*0x7b7617*/
  if ( String ) /*0x7b761f*/
    v3 = wcslen(String) + 1; /*0x7b762a*/
  else
    v3 = 1; /*0x7b762d*/
  v4 = (_WORD *)__2_YAPAXI_Z(2 * v3); /*0x7b7635*/
  *(_DWORD *)this = v4; /*0x7b763d*/
  *v4 = 0; /*0x7b7641*/
  if ( String ) /*0x7b7646*/
    wcscpy(*(wchar_t **)this, String); /*0x7b764c*/
  return 1; /*0x7b7654*/
}



// ==== 0x007B7660  ObjectClass::String_Helper_7B7660  this=ObjectClass  sig=csp ====
char __thiscall String_Helper_7B7660(ObjectClass *this, wchar_t a2, size_t a3)
{
  if ( a3 >= wcslen((const wchar_t *)this->AbstractClass) ) /*0x7b7674*/
    return 0; /*0x7b7676*/
  *((_WORD *)this->AbstractClass + a3) = a2; /*0x7b7684*/
  return 1; /*0x7b7678*/
}



// ==== 0x007B7740  ObjectClass::SendMultiplayerStartSignal_Start_77EBA0_Start_7B7740  this=ObjectClass  sig=csp ====
wchar_t **__thiscall SendMultiplayerStartSignal_Start_77EBA0_Start_7B7740(ObjectClass *this, wchar_t **a2)
{
  wchar_t *v3; // esi
  int v4; // eax
  unsigned int v5; // ebx
  wchar_t *v6; // edi
  int v7; // eax
  wchar_t *v8; // eax

  v3 = 0; /*0x7b7744*/
  if ( this->AbstractClass ) /*0x7b7746*/
  {
    v4 = wcslen((const wchar_t *)this->AbstractClass); /*0x7b774d*/
    v3 = (wchar_t *)__2_YAPAXI_Z(2 * v4 + 2); /*0x7b775e*/
    wcscpy(v3, (const wchar_t *)this->AbstractClass); /*0x7b7762*/
  }
  v5 = 0; /*0x7b776b*/
  v6 = v3; /*0x7b776d*/
  while ( v3 && v5 < wcslen(v3) ) /*0x7b777e*/
  {
    if ( *v6 >= 0x41u && *v6 <= 0x5Au ) /*0x7b778d*/
      *v6 = tolower(*v6); /*0x7b779d*/
    ++v5; /*0x7b77a0*/
    ++v6; /*0x7b77a1*/
  }
  *a2 = 0; /*0x7b77ad*/
  if ( v3 ) /*0x7b77b3*/
  {
    v7 = wcslen(v3); /*0x7b77b6*/
    v8 = (wchar_t *)__2_YAPAXI_Z(2 * v7 + 2); /*0x7b77c0*/
    *a2 = v8; /*0x7b77c7*/
    wcscpy(v8, v3); /*0x7b77c9*/
    __3_YAXPAX_Z(v3); /*0x7b77cf*/
  }
  return a2; /*0x7b77d9*/
}



// ==== 0x007B78D0  String::TruncateTo  this=String  sig=csp ====
char __thiscall String::TruncateTo(String *this, size_t Count)
{
  const wchar_t *v3; // esi
  wchar_t *v4; // eax
  wchar_t *v5; // edi
  const wchar_t *v6; // esi
  int v7; // eax
  _WORD *v8; // eax

  v3 = *(const wchar_t **)this->__pad_0; /*0x7b78d5*/
  if ( !*(_DWORD *)this->__pad_0 ) /*0x7b78d5*/
    v3 = &g_TypeClass_DefaultString; /*0x7b78db*/
  v4 = (wchar_t *)__2_YAPAXI_Z(2 * Count + 2); /*0x7b78ea*/
  v5 = v4; /*0x7b78ef*/
  *v4 = 0; /*0x7b78f6*/
  if ( v3 ) /*0x7b78fb*/
    wcsncpy(v4, v3, Count); /*0x7b7900*/
  v5[Count] = 0; /*0x7b7908*/
  v6 = &g_TypeClass_DefaultString; /*0x7b7911*/
  if ( v5 ) /*0x7b7916*/
    v6 = v5; /*0x7b7918*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b791a*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b7921*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b792b*/
  if ( v6 ) /*0x7b7931*/
    v7 = wcslen(v6) + 1; /*0x7b793c*/
  else
    v7 = 1; /*0x7b793f*/
  v8 = (_WORD *)__2_YAPAXI_Z(2 * v7); /*0x7b7948*/
  *(_DWORD *)this->__pad_0 = v8; /*0x7b7950*/
  *v8 = 0; /*0x7b7954*/
  if ( v6 ) /*0x7b7959*/
    wcscpy(*(wchar_t **)this->__pad_0, v6); /*0x7b795f*/
  if ( v5 ) /*0x7b7969*/
    __3_YAXPAX_Z(v5); /*0x7b796c*/
  return 1; /*0x7b7974*/
}



// ==== 0x007B7980  ObjectClass::UI_Helper_7B7980  this=ObjectClass  sig=csp ====
char __thiscall UI_Helper_7B7980(ObjectClass *this, wchar_t a2)
{
  wchar_t *v4; // eax
  signed int v5; // eax
  size_t v6; // esi
  const wchar_t *ptr_0; // ebp
  wchar_t *v8; // eax
  wchar_t *v9; // ebx
  const wchar_t *v10; // esi
  int v11; // eax
  _WORD *v12; // eax

  if ( !this->AbstractClass ) /*0x7b7983*/
    return 0; /*0x7b7989*/
  v4 = wcschr((const wchar_t *)this->AbstractClass, a2); /*0x7b7995*/
  if ( !v4 ) /*0x7b799f*/
    return 0; /*0x7b79a1*/
  v5 = ((char *)v4 - (char *)this->AbstractClass) >> 1; /*0x7b79ad*/
  v6 = v5; /*0x7b79b0*/
  ptr_0 = &g_TypeClass_DefaultString; /*0x7b79b4*/
  if ( this->AbstractClass ) /*0x7b79a7*/
    ptr_0 = (const wchar_t *)this->AbstractClass; /*0x7b79bb*/
  v8 = (wchar_t *)__2_YAPAXI_Z(2 * v5 + 2); /*0x7b79c2*/
  v9 = v8; /*0x7b79c7*/
  *v8 = 0; /*0x7b79ce*/
  if ( ptr_0 ) /*0x7b79d3*/
    wcsncpy(v8, ptr_0, v6); /*0x7b79d8*/
  v9[v6] = 0; /*0x7b79e0*/
  v10 = &g_TypeClass_DefaultString; /*0x7b79e6*/
  if ( v9 ) /*0x7b79ed*/
    v10 = v9; /*0x7b79ef*/
  if ( this->AbstractClass ) /*0x7b79f1*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b79f8*/
  this->AbstractClass = 0; /*0x7b7a02*/
  if ( v10 ) /*0x7b7a08*/
    v11 = wcslen(v10) + 1; /*0x7b7a13*/
  else
    v11 = 1; /*0x7b7a16*/
  v12 = (_WORD *)__2_YAPAXI_Z(2 * v11); /*0x7b7a1e*/
  this->AbstractClass = v12; /*0x7b7a26*/
  *v12 = 0; /*0x7b7a2a*/
  if ( v10 ) /*0x7b7a2f*/
    wcscpy((wchar_t *)this->AbstractClass, v10); /*0x7b7a35*/
  if ( v9 ) /*0x7b7a3f*/
    __3_YAXPAX_Z(v9); /*0x7b7a42*/
  return 1; /*0x7b798b*/
}



// ==== 0x007B7A60  String::Tokenize2  this=String  sig=csp ====
int __thiscall String::Tokenize2(String *this, int a2, wchar_t *Str, void **a4)
{
  int v4; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int v11; // ebx
  const wchar_t *v12; // esi
  int v13; // eax
  _WORD *v14; // eax
  int v15; // esi
  const wchar_t *v16; // ebp
  size_t v17; // esi
  wchar_t *v18; // eax
  wchar_t *v19; // ebx
  const wchar_t *v20; // esi
  int v21; // eax
  _WORD *v22; // eax
  int v23; // [esp+10h] [ebp+4h]

  v4 = a2; /*0x7b7a62*/
  if ( a2 < 0 ) /*0x7b7a6b*/
    return -1; /*0x7b7a6f*/
  while ( 1 ) /*0x7b7a7a*/
  {
    v7 = *(_DWORD *)this->__pad_0; /*0x7b7a7a*/
    if ( *(_DWORD *)this->__pad_0 ) /*0x7b7a7a*/
      v7 = wcslen(*(const wchar_t **)this->__pad_0); /*0x7b7a81*/
    if ( v4 >= v7 || !wcschr(Str, *(_WORD *)(*(_DWORD *)this->__pad_0 + 2 * v4)) ) /*0x7b7a95*/
      break; /*0x7b7a95*/
    ++v4; /*0x7b7aa1*/
  }
  v8 = *(_DWORD *)this->__pad_0; /*0x7b7aa4*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b7aa4*/
    v8 = wcslen(*(const wchar_t **)this->__pad_0); /*0x7b7aab*/
  if ( v4 >= v8 ) /*0x7b7ab5*/
    return -1; /*0x7b7ab9*/
  v9 = v4; /*0x7b7ac1*/
  while ( 1 ) /*0x7b7ac3*/
  {
    v10 = *(_DWORD *)this->__pad_0; /*0x7b7ac3*/
    if ( *(_DWORD *)this->__pad_0 ) /*0x7b7ac3*/
      v10 = wcslen(*(const wchar_t **)this->__pad_0); /*0x7b7aca*/
    if ( v4 >= v10 || wcschr(Str, *(_WORD *)(*(_DWORD *)this->__pad_0 + 2 * v4)) ) /*0x7b7ade*/
      break; /*0x7b7ade*/
    ++v4; /*0x7b7aea*/
  }
  v11 = v4 - 1; /*0x7b7af3*/
  v23 = v4 - 1; /*0x7b7af8*/
  v12 = (const wchar_t *)(*(_DWORD *)this->__pad_0 + 2 * v9); /*0x7b7afe*/
  if ( *a4 ) /*0x7b7af6*/
    __3_YAXPAX_Z(*a4); /*0x7b7b04*/
  *a4 = 0; /*0x7b7b0e*/
  if ( v12 ) /*0x7b7b14*/
    v13 = wcslen(v12) + 1; /*0x7b7b1f*/
  else
    v13 = 1; /*0x7b7b22*/
  v14 = (_WORD *)__2_YAPAXI_Z(2 * v13); /*0x7b7b2b*/
  *a4 = v14; /*0x7b7b33*/
  *v14 = 0; /*0x7b7b37*/
  if ( v12 ) /*0x7b7b3c*/
    wcscpy((wchar_t *)*a4, v12); /*0x7b7b42*/
  v15 = v11 - v9; /*0x7b7b4e*/
  v16 = &g_TypeClass_DefaultString; /*0x7b7b50*/
  v17 = v15 + 1; /*0x7b7b55*/
  if ( *a4 ) /*0x7b7b4a*/
    v16 = (const wchar_t *)*a4; /*0x7b7b5a*/
  v18 = (wchar_t *)__2_YAPAXI_Z(2 * v17 + 2); /*0x7b7b61*/
  v19 = v18; /*0x7b7b66*/
  *v18 = 0; /*0x7b7b6d*/
  if ( v16 ) /*0x7b7b72*/
    wcsncpy(v18, v16, v17); /*0x7b7b77*/
  v19[v17] = 0; /*0x7b7b7f*/
  v20 = &g_TypeClass_DefaultString; /*0x7b7b88*/
  if ( v19 ) /*0x7b7b8d*/
    v20 = v19; /*0x7b7b8f*/
  if ( *a4 ) /*0x7b7b91*/
    __3_YAXPAX_Z(*a4); /*0x7b7b98*/
  *a4 = 0; /*0x7b7ba2*/
  if ( v20 ) /*0x7b7ba8*/
    v21 = wcslen(v20) + 1; /*0x7b7bb3*/
  else
    v21 = 1; /*0x7b7bb6*/
  v22 = (_WORD *)__2_YAPAXI_Z(2 * v21); /*0x7b7bbf*/
  *a4 = v22; /*0x7b7bc7*/
  *v22 = 0; /*0x7b7bcb*/
  if ( v20 ) /*0x7b7bd0*/
    wcscpy((wchar_t *)*a4, v20); /*0x7b7bd6*/
  if ( v19 ) /*0x7b7be0*/
    __3_YAXPAX_Z(v19); /*0x7b7be3*/
  return v23 + 1; /*0x7b7a6d*/
}



// ==== 0x007B7C00  ObjectClass::method_7B7C00  this=ObjectClass  sig=csp ====
int __thiscall sub_7B7C00(ObjectClass *this, int a2, void **a3)
{
  int v5; // esi
  void *ptr_0; // eax
  void *v8; // eax
  _WORD *v9; // eax
  int v10; // esi
  const wchar_t *v11; // esi
  int v12; // eax
  _WORD *v13; // eax
  size_t v14; // esi
  const wchar_t *v15; // ebp
  wchar_t *v16; // eax
  wchar_t *v17; // ebx
  const wchar_t *v18; // esi
  int v19; // eax
  _WORD *v20; // eax
  int v21; // [esp+10h] [ebp+4h]

  v5 = a2; /*0x7b7c09*/
  ptr_0 = this->AbstractClass; /*0x7b7c0b*/
  if ( this->AbstractClass ) /*0x7b7c0b*/
    ptr_0 = (void *)wcslen((const wchar_t *)this->AbstractClass); /*0x7b7c12*/
  if ( a2 >= (int)ptr_0 ) /*0x7b7c1c*/
    return -1; /*0x7b7c20*/
  while ( 1 ) /*0x7b7c27*/
  {
    v8 = this->AbstractClass; /*0x7b7c27*/
    if ( this->AbstractClass ) /*0x7b7c27*/
      v8 = (void *)wcslen((const wchar_t *)this->AbstractClass); /*0x7b7c2e*/
    if ( v5 >= (int)v8 || strchr(String2, *((unsigned __int16 *)this->AbstractClass + v5)) ) /*0x7b7c48*/
      break; /*0x7b7c48*/
    ++v5; /*0x7b7c54*/
  }
  v9 = this->AbstractClass; /*0x7b7c57*/
  v21 = v5; /*0x7b7c59*/
  if ( *((_WORD *)this->AbstractClass + v5) == 13 ) /*0x7b7c62*/
  {
    v10 = v5 + 1; /*0x7b7c64*/
    if ( v9[v10] == 10 ) /*0x7b7c6a*/
      v21 = v10; /*0x7b7c6c*/
  }
  v11 = &v9[a2]; /*0x7b7c74*/
  if ( *a3 ) /*0x7b7c77*/
    __3_YAXPAX_Z(*a3); /*0x7b7c7e*/
  *a3 = 0; /*0x7b7c88*/
  if ( v11 ) /*0x7b7c8e*/
    v12 = wcslen(v11) + 1; /*0x7b7c99*/
  else
    v12 = 1; /*0x7b7c9c*/
  v13 = (_WORD *)__2_YAPAXI_Z(2 * v12); /*0x7b7ca5*/
  *a3 = v13; /*0x7b7cad*/
  *v13 = 0; /*0x7b7cb1*/
  if ( v11 ) /*0x7b7cb6*/
    wcscpy((wchar_t *)*a3, v11); /*0x7b7cbc*/
  v14 = v21 - a2 + 1; /*0x7b7ccd*/
  v15 = &g_TypeClass_DefaultString; /*0x7b7cce*/
  if ( *a3 ) /*0x7b7cc8*/
    v15 = (const wchar_t *)*a3; /*0x7b7cd7*/
  v16 = (wchar_t *)__2_YAPAXI_Z(2 * v14 + 2); /*0x7b7cde*/
  v17 = v16; /*0x7b7ce3*/
  *v16 = 0; /*0x7b7cea*/
  if ( v15 ) /*0x7b7cef*/
    wcsncpy(v16, v15, v14); /*0x7b7cf4*/
  v17[v14] = 0; /*0x7b7cfc*/
  v18 = &g_TypeClass_DefaultString; /*0x7b7d05*/
  if ( v17 ) /*0x7b7d0a*/
    v18 = v17; /*0x7b7d0c*/
  if ( *a3 ) /*0x7b7d0e*/
    __3_YAXPAX_Z(*a3); /*0x7b7d15*/
  *a3 = 0; /*0x7b7d1f*/
  if ( v18 ) /*0x7b7d25*/
    v19 = wcslen(v18) + 1; /*0x7b7d30*/
  else
    v19 = 1; /*0x7b7d33*/
  v20 = (_WORD *)__2_YAPAXI_Z(2 * v19); /*0x7b7d3c*/
  *a3 = v20; /*0x7b7d44*/
  *v20 = 0; /*0x7b7d48*/
  if ( v18 ) /*0x7b7d4d*/
    wcscpy((wchar_t *)*a3, v18); /*0x7b7d53*/
  if ( v17 ) /*0x7b7d5d*/
    __3_YAXPAX_Z(v17); /*0x7b7d60*/
  return v21 + 1; /*0x7b7c1e*/
}



// ==== 0x007B7D80  Pipe::GetField  this=Pipe  sig=csp ====
int __thiscall Pipe::GetField(Pipe *this)
{
  return wcstol(*(const wchar_t **)this->__pad_0, 0, 10); /*0x7b7d8f*/
}



// ==== 0x007B7D90  WideString::IsASCII  this=WideString  sig=csp ====
int __thiscall WideString::IsASCII(WideString *this)
{
  int result; // eax
  int v3; // ecx
  _WORD *v4; // edx

  result = *(_DWORD *)this; /*0x7b7d93*/
  if ( *(_DWORD *)this && (result = wcslen(*(const wchar_t **)this), v3 = 0, result > 0) ) /*0x7b7da6*/
  {
    v4 = *(_WORD **)this; /*0x7b7da8*/
    while ( *v4 < 0x100u ) /*0x7b7daf*/
    {
      ++v3; /*0x7b7db1*/
      ++v4; /*0x7b7db2*/
      if ( v3 >= result ) /*0x7b7db7*/
        goto LABEL_6; /*0x7b7db7*/
    }
    LOBYTE(result) = 0; /*0x7b7dbd*/
  }
  else
  {
LABEL_6:
    LOBYTE(result) = 1; /*0x7b7db9*/
  }
  return result; /*0x7b7dbb*/
}



// ==== 0x007B7DD0  FormatWideString  this=-  sig=csp ====
wchar_t **__fastcall WideString_Format(wchar_t **a1, const wchar_t *a2)
{
  size_t v3; // eax
  wchar_t *v4; // eax
  wchar_t String[32]; // [esp+4h] [ebp-40h] BYREF

  swprintf(String, (const size_t)&g_Str_Fmt_PctD, a2); /*0x7b7de1*/
  *a1 = 0; /*0x7b7def*/
  if ( String ) /*0x7b7df5*/
    v3 = wcslen(String) + 1; /*0x7b7e04*/
  else
    v3 = 1; /*0x7b7e07*/
  v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3); /*0x7b7e0f*/
  *a1 = v4; /*0x7b7e1b*/
  *v4 = 0; /*0x7b7e1d*/
  if ( String ) /*0x7b7e24*/
    wcscpy(*a1, String); /*0x7b7e2e*/
  return a1; /*0x7b7e38*/
}



// ==== 0x007B7E40  WDTGame_Helper  this=-  sig=csp ====
wchar_t **__fastcall sub_7B7E40(wchar_t **a1, const wchar_t *a2, wchar_t *Format)
{
  size_t v5; // eax
  wchar_t *v6; // eax
  wchar_t String[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(String, (const size_t)a0Dd_0, Format); /*0x7b7e58*/
  swprintf(String, (const size_t)String, a2); /*0x7b7e68*/
  *a1 = 0; /*0x7b7e76*/
  if ( String ) /*0x7b7e7c*/
    v5 = wcslen(String) + 1; /*0x7b7e8b*/
  else
    v5 = 1; /*0x7b7e8e*/
  v6 = (wchar_t *)__2_YAPAXI_Z(2 * v5); /*0x7b7e96*/
  *a1 = v6; /*0x7b7ea2*/
  *v6 = 0; /*0x7b7ea4*/
  if ( String ) /*0x7b7eab*/
    wcscpy(*a1, String); /*0x7b7eb5*/
  return a1; /*0x7b7ebf*/
}



// ==== 0x007B7ED0  CharStringToWide  this=-  sig=csp ====
wchar_t **__fastcall String_CharToWide(wchar_t **a1, const char **a2)
{
  int v4; // esi
  wchar_t *v5; // edi
  char *v6; // eax
  size_t v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // esi
  size_t v10; // eax
  wchar_t *v11; // eax

  if ( *a2 ) /*0x7b7ed8*/
    v4 = strlen(*a2); /*0x7b7eec*/
  else
    v4 = 0; /*0x7b7ede*/
  v5 = (wchar_t *)__2_YAPAXI_Z(2 * v4 + 2); /*0x7b7ef8*/
  v6 = (char *)*a2; /*0x7b7efa*/
  if ( !*a2 ) /*0x7b7efa*/
    v6 = &g_INI_DefaultBuffer; /*0x7b7f03*/
  BulkCharToWide(v5, (unsigned __int8 *)v6, v4); /*0x7b7f0d*/
  if ( v5 ) /*0x7b7f14*/
    v7 = wcslen(v5) + 1; /*0x7b7f1f*/
  else
    v7 = 1; /*0x7b7f22*/
  v8 = (wchar_t *)__2_YAPAXI_Z(2 * v7); /*0x7b7f2b*/
  v9 = v8; /*0x7b7f30*/
  *v8 = 0; /*0x7b7f37*/
  if ( v5 ) /*0x7b7f3c*/
    wcscpy(v8, v5); /*0x7b7f40*/
  __3_YAXPAX_Z(v5); /*0x7b7f49*/
  *a1 = 0; /*0x7b7f51*/
  if ( v9 ) /*0x7b7f5a*/
  {
    v10 = wcslen(v9); /*0x7b7f5d*/
    v11 = (wchar_t *)__2_YAPAXI_Z(2 * v10 + 2); /*0x7b7f67*/
    *a1 = v11; /*0x7b7f6e*/
    wcscpy(v11, v9); /*0x7b7f71*/
    __3_YAXPAX_Z(v9); /*0x7b7f77*/
  }
  return a1; /*0x7b7f7f*/
}



// ==== 0x007B7F90  ToWideStringCharAlt  this=-  sig=csp ====
char **__fastcall sub_7B7F90(char **a1, const wchar_t **a2)
{
  char **v3; // esi
  size_t v4; // edi
  char *v5; // ebp
  wchar_t *v6; // eax
  size_t v7; // ecx
  char *v8; // ebx
  char *v9; // edx

  v3 = a1; /*0x7b7f95*/
  if ( *a2 ) /*0x7b7f97*/
    v4 = wcslen(*a2); /*0x7b7faf*/
  else
    v4 = 0; /*0x7b7fa2*/
  v5 = (char *)__2_YAPAXI_Z(v4 + 1); /*0x7b7fbb*/
  v6 = (wchar_t *)*a2; /*0x7b7fbd*/
  if ( !*a2 ) /*0x7b7fbd*/
    v6 = &g_TypeClass_DefaultString; /*0x7b7fc6*/
  CopyWideToChar(v5, (char *)v6, v4); /*0x7b7fd0*/
  if ( v5 ) /*0x7b7fd7*/
    v7 = strlen(v5) + 1; /*0x7b7fe0*/
  else
    v7 = 1; /*0x7b7fe6*/
  v8 = (char *)__2_YAPAXI_Z(v7); /*0x7b7ff1*/
  *v8 = 0; /*0x7b7ff8*/
  if ( v5 ) /*0x7b7ffb*/
  {
    strcpy(v8, v5); /*0x7b8013*/
    v3 = a1; /*0x7b801c*/
  }
  __3_YAXPAX_Z(v5); /*0x7b8021*/
  *v3 = 0; /*0x7b8029*/
  if ( !v8 ) /*0x7b8032*/
    return v3; /*0x7b807a*/
  v9 = (char *)__2_YAPAXI_Z(strlen(v8) + 1); /*0x7b8045*/
  *v3 = v9; /*0x7b804e*/
  strcpy(v9, v8); /*0x7b8060*/
  __3_YAXPAX_Z(v8); /*0x7b8069*/
  return a1; /*0x7b8075*/
}



// ==== 0x007B8090  FormatWideStringPrefix  this=-  sig=csp ====
wchar_t **__fastcall FormatWideStringPrefix(wchar_t **a1, const wchar_t *a2, wchar_t **a3)
{
  int v5; // eax
  wchar_t *v6; // eax
  wchar_t *v7; // edi
  int v8; // eax
  wchar_t *v9; // eax
  int v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // ecx
  wchar_t *String; // [esp+Ch] [ebp-4h] BYREF

  if ( a2 ) /*0x7b809a*/
    v5 = wcslen(a2) + 1; /*0x7b80a5*/
  else
    v5 = 1; /*0x7b80a8*/
  v6 = (wchar_t *)__2_YAPAXI_Z(2 * v5); /*0x7b80b0*/
  v7 = v6; /*0x7b80b5*/
  *v6 = 0; /*0x7b80bc*/
  if ( a2 ) /*0x7b80c1*/
    wcscpy(v6, a2); /*0x7b80c5*/
  String = 0; /*0x7b80cf*/
  if ( v7 ) /*0x7b80d7*/
  {
    v8 = wcslen(v7); /*0x7b80da*/
    String = (wchar_t *)__2_YAPAXI_Z(2 * v8 + 2); /*0x7b80eb*/
    wcscpy(String, v7); /*0x7b80ef*/
  }
  v9 = *a3; /*0x7b80fb*/
  if ( !*a3 ) /*0x7b80fb*/
    v9 = &g_TypeClass_DefaultString; /*0x7b8101*/
  WString::Append(&String, v9); /*0x7b810b*/
  *a1 = 0; /*0x7b8110*/
  if ( String ) /*0x7b811c*/
  {
    v10 = wcslen(String); /*0x7b811f*/
    v11 = (wchar_t *)__2_YAPAXI_Z(2 * v10 + 2); /*0x7b8129*/
    v12 = String; /*0x7b812e*/
    *a1 = v11; /*0x7b8132*/
    wcscpy(v11, v12); /*0x7b8136*/
    if ( String ) /*0x7b8144*/
      __3_YAXPAX_Z(String); /*0x7b8147*/
  }
  if ( v7 ) /*0x7b8151*/
    __3_YAXPAX_Z(v7); /*0x7b8154*/
  return a1; /*0x7b815c*/
}



// ==== 0x007B8170  ConcatWString  this=-  sig=csp ====
wchar_t **__fastcall WString_Concat(wchar_t **a1, const wchar_t **a2, const wchar_t **a3)
{
  wchar_t **v4; // ebx
  wchar_t *v5; // esi
  size_t v6; // eax
  const wchar_t *v7; // ebp
  wchar_t *v8; // ebx
  size_t v9; // edi
  wchar_t *v10; // eax
  size_t v11; // eax
  wchar_t *v12; // eax

  v4 = a1; /*0x7b8176*/
  v5 = 0; /*0x7b8178*/
  if ( *a2 ) /*0x7b817a*/
  {
    v6 = wcslen(*a2); /*0x7b8185*/
    v5 = (wchar_t *)__2_YAPAXI_Z(2 * v6 + 2); /*0x7b8196*/
    wcscpy(v5, *a2); /*0x7b819a*/
  }
  v7 = *a3; /*0x7b81a7*/
  if ( *a3 || (v7 = &g_TypeClass_DefaultString) != 0 ) /*0x7b81b4*/
  {
    v8 = v5; /*0x7b81b7*/
    v9 = wcslen(v7) + 1; /*0x7b81c3*/
    if ( v5 ) /*0x7b81c6*/
      v9 += wcslen(v5); /*0x7b81d1*/
    v10 = (wchar_t *)__2_YAPAXI_Z(4 * v9); /*0x7b81db*/
    v5 = v10; /*0x7b81e3*/
    if ( v8 ) /*0x7b81e7*/
      wcscpy(v10, v8); /*0x7b81eb*/
    else
      *v10 = 0; /*0x7b81f5*/
    wcscat(v5, v7); /*0x7b81fc*/
    if ( v8 ) /*0x7b8206*/
      __3_YAXPAX_Z(v8); /*0x7b8209*/
    v4 = a1; /*0x7b8211*/
  }
  *v4 = 0; /*0x7b8217*/
  if ( v5 ) /*0x7b821e*/
  {
    v11 = wcslen(v5); /*0x7b8221*/
    v12 = (wchar_t *)__2_YAPAXI_Z(2 * v11 + 2); /*0x7b822b*/
    *v4 = v12; /*0x7b8232*/
    wcscpy(v12, v5); /*0x7b8234*/
    __3_YAXPAX_Z(v5); /*0x7b823a*/
  }
  return v4; /*0x7b8242*/
}



// ==== 0x007B8250  ObjectClass::method_7B8250  this=ObjectClass  sig=csp ====
bool __thiscall sub_7B8250(ObjectClass *this, wchar_t *Control)
{
  size_t v3; // edi

  if ( !Control || !this->AbstractClass ) /*0x7b825c*/
    return 0; /*0x7b8284*/
  v3 = wcslen((const wchar_t *)this->AbstractClass); /*0x7b8269*/
  return wcscspn((const wchar_t *)this->AbstractClass, Control) < v3; /*0x7b827c*/
}



// ==== 0x007B82E0  Game_Set  this=-  sig=csp ====
char **__fastcall sub_7B82E0(char **a1, const wchar_t **a2)
{
  const wchar_t *v3; // eax
  int v4; // esi
  char *v5; // ebp
  wchar_t *v6; // eax
  size_t v7; // ecx
  char *v8; // ebx
  char *v9; // edx

  v3 = *a2; /*0x7b82eb*/
  if ( *a2 ) /*0x7b82eb*/
    v3 = (const wchar_t *)wcslen(*a2); /*0x7b82f2*/
  v4 = 16 * ((_DWORD)v3 + 1); /*0x7b8302*/
  v5 = (char *)__2_YAPAXI_Z((v4 + 6) / 7); /*0x7b831c*/
  v6 = (wchar_t *)*a2; /*0x7b831e*/
  if ( !*a2 ) /*0x7b831e*/
    v6 = &g_TypeClass_DefaultString; /*0x7b8327*/
  BinkMovieClass::AllocateRenderSurface(v6, v5, v4); /*0x7b8331*/
  if ( v5 ) /*0x7b8338*/
    v7 = strlen(v5) + 1; /*0x7b8341*/
  else
    v7 = 1; /*0x7b8347*/
  v8 = (char *)__2_YAPAXI_Z(v7); /*0x7b8352*/
  *v8 = 0; /*0x7b8359*/
  if ( v5 ) /*0x7b835c*/
    strcpy(v8, v5); /*0x7b8374*/
  __3_YAXPAX_Z(v5); /*0x7b837e*/
  *a1 = 0; /*0x7b838c*/
  if ( v8 ) /*0x7b8393*/
  {
    v9 = (char *)__2_YAPAXI_Z(strlen(v8) + 1); /*0x7b83a6*/
    *a1 = v9; /*0x7b83af*/
    strcpy(v9, v8); /*0x7b83c2*/
    __3_YAXPAX_Z(v8); /*0x7b83cb*/
  }
  return a1; /*0x7b83d3*/
}



// ==== 0x007B83E0  UI_Setup_7B83E0  this=-  sig=csp ====
wchar_t **__fastcall sub_7B83E0(wchar_t **a1, const char **a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // esi
  wchar_t *v6; // edi
  char *v7; // eax
  size_t v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // esi
  size_t v11; // eax
  wchar_t *v12; // eax

  if ( *a2 ) /*0x7b83e8*/
    v4 = strlen(*a2); /*0x7b83fb*/
  else
    v4 = 0; /*0x7b83ee*/
  v5 = (int)(((7 * (v4 + 1)) >> 3) + 1) / 2; /*0x7b840f*/
  v6 = (wchar_t *)__2_YAPAXI_Z(2 * v5 + 2); /*0x7b841b*/
  v7 = (char *)*a2; /*0x7b841d*/
  if ( !*a2 ) /*0x7b841d*/
    v7 = &g_INI_DefaultBuffer; /*0x7b8426*/
  BinkMovieClass::OpenFile((unsigned __int8 *)v7, v6, v5); /*0x7b8430*/
  if ( v6 ) /*0x7b8437*/
    v8 = wcslen(v6) + 1; /*0x7b8442*/
  else
    v8 = 1; /*0x7b8445*/
  v9 = (wchar_t *)__2_YAPAXI_Z(2 * v8); /*0x7b844e*/
  v10 = v9; /*0x7b8453*/
  *v9 = 0; /*0x7b845a*/
  if ( v6 ) /*0x7b845f*/
    wcscpy(v9, v6); /*0x7b8463*/
  __3_YAXPAX_Z(v6); /*0x7b846c*/
  *a1 = 0; /*0x7b8474*/
  if ( v10 ) /*0x7b847d*/
  {
    v11 = wcslen(v10); /*0x7b8480*/
    v12 = (wchar_t *)__2_YAPAXI_Z(2 * v11 + 2); /*0x7b848a*/
    *a1 = v12; /*0x7b8491*/
    wcscpy(v12, v10); /*0x7b8494*/
    __3_YAXPAX_Z(v10); /*0x7b849a*/
  }
  return a1; /*0x7b84a2*/
}



// ==== 0x007B84B0  sub_7B84B0  this=-  sig=ida-proto ====
int sub_7B84B0()
{
  dword_B78128 = 0; /*0x7b84b2*/
  dword_B7812C = 0; /*0x7b84b7*/
  dword_B78130 = 0; /*0x7b84bc*/
  dword_B78134 = 0; /*0x7b84c1*/
  return 0; /*0x7b84c6*/
}



// ==== 0x007B84D0  Audio_Update  this=-  sig=ida-proto ====
int sub_7B84D0()
{
  int result; // eax

  result = dword_B7816C; /*0x7b84d0*/
  if ( !dword_B7816C ) /*0x7b84d7*/
  {
    if ( dword_B78164 ) /*0x7b84e1*/
      return WWMouseClass::UpdateCursorMovement((LONG *)dword_B78164); /*0x7b84e3*/
  }
  return result; /*0x7b84e8*/
}



// ==== 0x007B84F0  WinMain_Helper_7B84F0  this=-  sig=ida-proto ====
HANDLE sub_7B84F0()
{
  HANDLE result; // eax
  DWORD LastError; // eax
  CHAR Buffer[1024]; // [esp+4h] [ebp-400h] BYREF

  result = hMutex; /*0x7b84f0*/
  if ( !hMutex ) /*0x7b8500*/
  {
    result = CreateMutexA(0, 0, 0); /*0x7b8505*/
    hMutex = result; /*0x7b850b*/
  }
  if ( !dword_B7816C ) /*0x7b8516*/
  {
    if ( result ) /*0x7b851e*/
    {
      dword_B78138 = 0; /*0x7b8524*/
      dword_B78140 = 0; /*0x7b852a*/
      dword_B78150 = 0; /*0x7b8530*/
      dword_B78148 = 16; /*0x7b8536*/
      dword_B7814C = 0; /*0x7b8540*/
      dword_B7813C = 0; /*0x7b8546*/
      result = CreateThread(0, 0x1000u, (LPTHREAD_START_ROUTINE)sub_7B8610, &dword_B78138, 0, &dword_B78158); /*0x7b8562*/
      dword_B78154 = result; /*0x7b856a*/
      if ( result ) /*0x7b856f*/
      {
        dword_B7816C = 1; /*0x7b8578*/
        result = (HANDLE)SetThreadPriority(result, 15); /*0x7b8582*/
        if ( !result ) /*0x7b858a*/
        {
          LastError = GetLastError(); /*0x7b8598*/
          FormatMessageA(0x1000u, 0, LastError, 0, Buffer, 0x400u, 0); /*0x7b85a5*/
          Debug::Log(); /*0x7b85b5*/
          while ( !dword_B78140 ) /*0x7b85c4*/
            Sleep(0); /*0x7b85ce*/
          WaitForSingleObject(dword_B78154, 0x1388u); /*0x7b85e6*/
          result = (HANDLE)CloseHandle(dword_B78154); /*0x7b85f2*/
          dword_B7816C = 0; /*0x7b85f8*/
        }
      }
    }
  }
  return result; /*0x7b85fe*/
}



// ==== 0x007B8610  sub_7B8610  this=-  sig=csp ====
DWORD __stdcall sub_7B8610(_DWORD *lpThreadParameter)
{
  lpThreadParameter[6] = 1; /*0x7b861a*/
  lpThreadParameter[2] = 0; /*0x7b861d*/
  if ( *lpThreadParameter ) /*0x7b8624*/
  {
    lpThreadParameter[2] = 1; /*0x7b86a7*/
    return 0; /*0x7b86aa*/
  }
  else
  {
    do /*0x7b8695*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b8650*/
        Debug::Log(); /*0x7b8661*/
      if ( dword_B78164 ) /*0x7b8671*/
        WWMouseClass::UpdateCursorMovement((LONG *)dword_B78164); /*0x7b8673*/
      ReleaseMutex(hMutex); /*0x7b867f*/
      Sleep(lpThreadParameter[4]); /*0x7b8688*/
      ++lpThreadParameter[1]; /*0x7b868e*/
    }
    while ( !*lpThreadParameter ); /*0x7b8695*/
    lpThreadParameter[2] = 1; /*0x7b8697*/
    return 0; /*0x7b86a1*/
  }
}



// ==== 0x007B8730  MouseClass::Construct  this=MouseClass  sig=csp ====
_DWORD *__thiscall MouseClass::Construct(MouseClass *this, int a2, int a3)
{
  char *pad_2C; // edi
  char *v5; // ecx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // ecx
  int v11; // edi

  pad_2C = this->__pad_2C; /*0x7b8742*/
  *(_DWORD *)&this->__pad_18[12] = a2; /*0x7b8745*/
  this->MouseClass_field_0x0 = &Mouse::`vftable'; /*0x7b8748*/
  this->MouseClass_field_0x4 = 0; /*0x7b874e*/
  this->MouseClass_field_0x8 = 0; /*0x7b8751*/
  this->MouseClass_field_0xC = (void *)-1; /*0x7b8754*/
  LOBYTE(this->MouseClass_field_0x10) = 0; /*0x7b8757*/
  this->MouseClass_field_0x14 = 0; /*0x7b875a*/
  *(_DWORD *)this->__pad_18 = 0; /*0x7b875d*/
  *(_DWORD *)&this->__pad_18[4] = 0; /*0x7b8760*/
  *(_DWORD *)&this->__pad_18[8] = 0; /*0x7b8763*/
  this->MouseClass_field_0x28 = a3; /*0x7b8766*/
  v5 = this->__pad_2C; /*0x7b876f*/
  *(_DWORD *)v5 = dword_B78128; /*0x7b8776*/
  *((_DWORD *)v5 + 1) = dword_B7812C; /*0x7b877e*/
  *((_DWORD *)v5 + 2) = dword_B78130; /*0x7b8787*/
  v6 = dword_B78134; /*0x7b878a*/
  *(_DWORD *)this->__pad_3C = 0; /*0x7b8790*/
  *(_DWORD *)&this->__pad_3C[4] = 0; /*0x7b8793*/
  *((_DWORD *)v5 + 3) = v6; /*0x7b8796*/
  *(_DWORD *)&this->__pad_3C[8] = 0; /*0x7b8799*/
  *(_DWORD *)&this->__pad_3C[12] = dword_B78128; /*0x7b87a5*/
  *(_DWORD *)&this->__pad_3C[16] = dword_B7812C; /*0x7b87ae*/
  *(_DWORD *)&this->__pad_3C[20] = dword_B78130; /*0x7b87b7*/
  v7 = dword_B78134; /*0x7b87ba*/
  *(_DWORD *)&this->__pad_3C[28] = 0; /*0x7b87c0*/
  *(_DWORD *)&this->__pad_3C[24] = v7; /*0x7b87c3*/
  *(_DWORD *)&this->__pad_3C[32] = dword_B78128; /*0x7b87cf*/
  *(_DWORD *)&this->__pad_3C[36] = dword_B7812C; /*0x7b87d8*/
  *(_DWORD *)&this->__pad_3C[40] = dword_B78130; /*0x7b87e1*/
  v8 = dword_B78134; /*0x7b87e4*/
  *(_DWORD *)this->__pad_6C = 0; /*0x7b87ea*/
  this->MouseClass_field_0x68 = v8; /*0x7b87ed*/
  this->MouseClass_field_0x70 = (CampaignClass *)dword_B78128; /*0x7b87f9*/
  *(_DWORD *)this->__pad_74 = dword_B7812C; /*0x7b8802*/
  *(_DWORD *)&this->__pad_74[4] = dword_B78130; /*0x7b880b*/
  *(_DWORD *)&this->__pad_74[8] = dword_B78134; /*0x7b8814*/
  *(_DWORD *)&this->__pad_74[12] = dword_B78128; /*0x7b8823*/
  *(_DWORD *)&this->__pad_74[16] = dword_B7812C; /*0x7b882f*/
  *(_DWORD *)&this->__pad_74[20] = dword_B78130; /*0x7b8838*/
  v9 = dword_B78134; /*0x7b883b*/
  *(_DWORD *)&this->__pad_74[28] = -1; /*0x7b8841*/
  *(_DWORD *)&this->__pad_74[32] = 0; /*0x7b8847*/
  *(_DWORD *)&this->__pad_74[24] = v9; /*0x7b884d*/
  this->MouseClass_field_0x0 = &WWMouseClass::`vftable'; /*0x7b8850*/
  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b8867*/
    Debug::Log(); /*0x7b8878*/
  MouseClass::CalcConfiningRect(this); /*0x7b8882*/
  v10 = *(_DWORD *)pad_2C; /*0x7b888a*/
  v11 = *(_DWORD *)&this->MouseClass_field_0x2D[3]; /*0x7b888f*/
  *(_DWORD *)this->__pad_3C = v10 + *(_DWORD *)&this->__pad_31[3] / 2; /*0x7b8896*/
  *(_DWORD *)&this->__pad_3C[4] = v11 + this->MouseClass_field_0x38[0] / 2; /*0x7b88a3*/
  dword_B78164 = (WWMouseClass *)this; /*0x7b88ad*/
  ReleaseMutex(hMutex); /*0x7b88b3*/
  ShowCursor(0); /*0x7b88ba*/
  return &this->MouseClass_field_0x0; /*0x7b88c2*/
}



// ==== 0x007B88D0  WWMouseClass::loadCursorImages  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::loadCursorImages(WWMouseClass *this)
{
  int result; // eax
  int (__thiscall ***WWMouseClass_field_0x44)(_DWORD, int); // ecx
  int (__thiscall ***WWMouseClass_field_0x58)(_DWORD, int); // ecx
  MouseClass *WWMouseClass_field_0x6C; // ecx

  *(_DWORD *)this->__pad_0 = &WWMouseClass::`vftable'; /*0x7b88d9*/
  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b88f0*/
    Debug::Log(); /*0x7b8901*/
  if ( dword_B78164 == this ) /*0x7b8912*/
    dword_B78164 = 0; /*0x7b8914*/
  result = ReleaseMutex(hMutex); /*0x7b8921*/
  WWMouseClass_field_0x44 = (int (__thiscall ***)(_DWORD, int))this->WWMouseClass_field_0x44; /*0x7b8927*/
  if ( WWMouseClass_field_0x44 ) /*0x7b892c*/
  {
    result = (**WWMouseClass_field_0x44)(WWMouseClass_field_0x44, 1); /*0x7b8932*/
    this->WWMouseClass_field_0x44 = 0; /*0x7b8934*/
  }
  WWMouseClass_field_0x58 = (int (__thiscall ***)(_DWORD, int))this->WWMouseClass_field_0x58; /*0x7b8937*/
  if ( WWMouseClass_field_0x58 ) /*0x7b893c*/
  {
    result = (**WWMouseClass_field_0x58)(WWMouseClass_field_0x58, 1); /*0x7b8942*/
    this->WWMouseClass_field_0x58 = 0; /*0x7b8944*/
  }
  WWMouseClass_field_0x6C = this->WWMouseClass_field_0x6C; /*0x7b8947*/
  if ( WWMouseClass_field_0x6C ) /*0x7b894c*/
  {
    result = (*(int (__thiscall **)(MouseClass *, int))WWMouseClass_field_0x6C->MouseClass_field_0x0)( /*0x7b8952*/
               WWMouseClass_field_0x6C,
               1);
    this->WWMouseClass_field_0x6C = 0; /*0x7b8954*/
  }
  *(_DWORD *)this->__pad_0 = &Mouse::`vftable'; /*0x7b8957*/
  return result; /*0x7b895d*/
}



// ==== 0x007B8960  MouseClass::CalcConfiningRect  this=MouseClass  sig=csp ====
void __thiscall MouseClass::CalcConfiningRect(MouseClass *this)
{
  MouseClass *v1; // esi
  HWND v2; // eax
  LONG y; // edi
  int v4; // ecx
  int v5; // eax
  HWND MouseClass_field_0x28; // [esp-8h] [ebp-30h]
  struct tagPOINT Point; // [esp+8h] [ebp-20h] BYREF
  struct tagPOINT v8; // [esp+10h] [ebp-18h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  v1 = this; /*0x7b8964*/
  GetClientRect((HWND)this->MouseClass_field_0x28, &Rect); /*0x7b8970*/
  Point.x = Rect.left; /*0x7b8984*/
  MouseClass_field_0x28 = (HWND)v1->MouseClass_field_0x28; /*0x7b8990*/
  Point.y = Rect.top; /*0x7b8991*/
  ClientToScreen(MouseClass_field_0x28, &Point); /*0x7b8995*/
  v8.x = Rect.right; /*0x7b899f*/
  v2 = (HWND)v1->MouseClass_field_0x28; /*0x7b89a3*/
  v8.y = Rect.bottom; /*0x7b89aa*/
  ClientToScreen(v2, &v8); /*0x7b89b0*/
  y = Point.y; /*0x7b89b6*/
  v1 = (MouseClass *)((char *)v1 + 44); /*0x7b89c2*/
  v4 = v8.y - Point.y; /*0x7b89c5*/
  v5 = v8.x - Point.x; /*0x7b89c7*/
  v1->MouseClass_field_0x0 = (void *)Point.x; /*0x7b89ca*/
  v1->MouseClass_field_0x4 = (void *)y; /*0x7b89cf*/
  v1->MouseClass_field_0x8 = (void *)v5; /*0x7b89d7*/
  v1->MouseClass_field_0xC = (void *)v4; /*0x7b89da*/
  Debug::Log(); /*0x7b89dd*/
}



// ==== 0x007B89F0  WWMouseClass::COMStub  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::COMStub(WWMouseClass *this)
{
  return (int)this->WWMouseClass_field_0xC; /*0x7b89f3*/
}



// ==== 0x007B8A00  WWMouseClass::AddRef  this=WWMouseClass  sig=csp ====
void __thiscall WWMouseClass::AddRef(WWMouseClass *this, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  void *v4; // ebx
  DWORD (__stdcall *v6)(HANDLE, DWORD); // edi
  int WWMouseClass_field_0x24; // ecx
  int WWMouseClass_field_0x44; // ebp
  int v9; // edx
  int v10; // edi
  int v11; // ebx
  char *v12; // edx
  void (__stdcall *v13)(HANDLE); // ebp
  int v14; // eax
  _DWORD *inited; // eax
  char *v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // [esp-18h] [ebp-40h]
  char *v20; // [esp+8h] [ebp-20h] BYREF
  int v21; // [esp+Ch] [ebp-1Ch]
  int v22; // [esp+10h] [ebp-18h]
  int v23; // [esp+14h] [ebp-14h]
  char *v24; // [esp+18h] [ebp-10h] BYREF
  char *v25; // [esp+1Ch] [ebp-Ch]
  int v26; // [esp+20h] [ebp-8h]
  int v27; // [esp+24h] [ebp-4h]

  v4 = (void *)a3; /*0x7b8a04*/
  if ( a3 ) /*0x7b8a0d*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 28))(this) ) /*0x7b8a15*/
    {
      v6 = WaitForSingleObject; /*0x7b8a28*/
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b8a3b*/
        Debug::Log(); /*0x7b8a4c*/
      if ( (*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 8))(this) ) /*0x7b8a58*/
      {
        v13 = (void (__stdcall *)(HANDLE))ReleaseMutex; /*0x7b8b0e*/
      }
      else
      {
        if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b8a75*/
          Debug::Log(); /*0x7b8a86*/
        if ( *(int *)&this->__pad_48[8] > 0 && *(int *)&this->__pad_48[12] > 0 ) /*0x7b8a9a*/
        {
          WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b8a9c*/
          if ( WWMouseClass_field_0x24 ) /*0x7b8aa1*/
          {
            WWMouseClass_field_0x44 = this->WWMouseClass_field_0x44; /*0x7b8aa3*/
            if ( WWMouseClass_field_0x44 ) /*0x7b8aa8*/
            {
              v9 = *(_DWORD *)&this->__pad_48[4]; /*0x7b8aad*/
              v10 = *(_DWORD *)&this->__pad_48[8]; /*0x7b8ab3*/
              v11 = *(_DWORD *)&this->__pad_48[12]; /*0x7b8ab6*/
              v24 = (char *)this->WWMouseClass_field_0x2C + *(_DWORD *)this->__pad_48; /*0x7b8abb*/
              v12 = (char *)this->WWMouseClass_field_0x30 + v9; /*0x7b8ac2*/
              v20 = 0; /*0x7b8ac6*/
              v21 = 0; /*0x7b8aca*/
              v26 = v10; /*0x7b8ad4*/
              v27 = v11; /*0x7b8ad8*/
              v25 = v12; /*0x7b8adc*/
              v22 = v10; /*0x7b8ae0*/
              v23 = v11; /*0x7b8ae4*/
              (*(void (__thiscall **)(int, char **, int, char **, _DWORD, int))(*(_DWORD *)WWMouseClass_field_0x24 + 8))( /*0x7b8af0*/
                WWMouseClass_field_0x24,
                &v24,
                WWMouseClass_field_0x44,
                &v20,
                0,
                1);
              v4 = (void *)a3; /*0x7b8af3*/
              v6 = WaitForSingleObject; /*0x7b8af7*/
            }
          }
        }
        v13 = (void (__stdcall *)(HANDLE))ReleaseMutex; /*0x7b8b03*/
        ReleaseMutex(hMutex); /*0x7b8b0a*/
      }
      this->WWMouseClass_field_0x4 = v4; /*0x7b8b1c*/
      this->WWMouseClass_field_0x8 = (void *)a4; /*0x7b8b1f*/
      *(_DWORD *)this->__pad_3C = *a2; /*0x7b8b24*/
      v14 = *(_DWORD *)this->__pad_0; /*0x7b8b2a*/
      *(_DWORD *)&this->__pad_3C[4] = a2[1]; /*0x7b8b2e*/
      if ( !(*(unsigned __int8 (__thiscall **)(WWMouseClass *))(v14 + 8))(this) ) /*0x7b8b31*/
      {
        if ( v6(hMutex, 0x2710u) == 258 ) /*0x7b8b4f*/
          Debug::Log(); /*0x7b8b60*/
        if ( (unsigned __int8)BSurface::CreateTripleBuffer((int)this) ) /*0x7b8b6a*/
        {
          if ( this->WWMouseClass_field_0x24 ) /*0x7b8b77*/
          {
            inited = WWMouseClass::initCursorState(this, &v24); /*0x7b8b87*/
            *(_DWORD *)this->__pad_48 = *inited; /*0x7b8b96*/
            *(_DWORD *)&this->__pad_48[4] = inited[1]; /*0x7b8b9b*/
            *(_DWORD *)&this->__pad_48[8] = inited[2]; /*0x7b8ba1*/
            *(_DWORD *)&this->__pad_48[12] = inited[3]; /*0x7b8ba7*/
            v20 = (char *)*inited; /*0x7b8bac*/
            v16 = (char *)this->WWMouseClass_field_0x2C + (unsigned int)v20; /*0x7b8bb3*/
            v21 = inited[1]; /*0x7b8bb6*/
            v22 = inited[2]; /*0x7b8bbd*/
            v17 = inited[3]; /*0x7b8bc1*/
            v20 = v16; /*0x7b8bc4*/
            v18 = this->WWMouseClass_field_0x44; /*0x7b8bcd*/
            v21 += (int)this->WWMouseClass_field_0x30; /*0x7b8bd0*/
            v19 = this->WWMouseClass_field_0x24; /*0x7b8bdc*/
            v23 = v17; /*0x7b8bdd*/
            v24 = 0; /*0x7b8be1*/
            v25 = 0; /*0x7b8be5*/
            v26 = v22; /*0x7b8be9*/
            v27 = v17; /*0x7b8bed*/
            (*(void (__thiscall **)(int, char **, int, char **, _DWORD, int))(*(_DWORD *)v18 + 8))( /*0x7b8bf8*/
              v18,
              &v24,
              v19,
              &v20,
              0,
              1);
          }
        }
        Mouse::DrawCursor((Mouse *)this, (int *)this->WWMouseClass_field_0x24, 0, 0); /*0x7b8c05*/
        v13(hMutex); /*0x7b8c11*/
      }
      v13(hMutex); /*0x7b8c1a*/
    }
    else
    {
      this->WWMouseClass_field_0x4 = (void *)a3; /*0x7b8c2a*/
      this->WWMouseClass_field_0x8 = (void *)a4; /*0x7b8c2d*/
      *(_DWORD *)this->__pad_3C = *a2; /*0x7b8c36*/
      *(_DWORD *)&this->__pad_3C[4] = a2[1]; /*0x7b8c3c*/
    }
  }
}



// ==== 0x007B8C60  BSurface::CreateTripleBuffer  this=IUnknown  sig=csp ====
int __thiscall BSurface::CreateTripleBuffer(int this)
{
  int v2; // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int v4; // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int v6; // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx
  _DWORD *v8; // edi
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  int v12; // eax
  _DWORD *v13; // edi
  int v14; // eax
  int v15; // ebx
  int v16; // ebp
  int v17; // eax
  _DWORD *v18; // edi
  int v19; // eax
  int v20; // ebx
  int v21; // ebp
  int v22; // eax
  int result; // eax

  if ( *(_DWORD *)(this + 4) ) /*0x7b8c66*/
  {
    v2 = *(_DWORD *)(this + 68); /*0x7b8c6f*/
    if ( v2 /*0x7b8c9a*/
      && (*(__int16 *)(*(_DWORD *)(this + 4) + 2) > (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 124))(v2)
       || *(__int16 *)(*(_DWORD *)(this + 4) + 4) > (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 68) + 128))(*(_DWORD *)(this + 68))) )
    {
      v3 = *(void (__thiscall ****)(_DWORD, int))(this + 68); /*0x7b8c9c*/
      if ( v3 ) /*0x7b8ca1*/
        (**v3)(v3, 1); /*0x7b8ca7*/
      *(_DWORD *)(this + 68) = 0; /*0x7b8ca9*/
    }
    v4 = *(_DWORD *)(this + 88); /*0x7b8cac*/
    if ( v4 /*0x7b8cd7*/
      && (*(__int16 *)(*(_DWORD *)(this + 4) + 2) > (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 124))(v4)
       || *(__int16 *)(*(_DWORD *)(this + 4) + 4) > (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 128))(*(_DWORD *)(this + 88))) )
    {
      v5 = *(void (__thiscall ****)(_DWORD, int))(this + 88); /*0x7b8cd9*/
      if ( v5 ) /*0x7b8cde*/
        (**v5)(v5, 1); /*0x7b8ce4*/
      *(_DWORD *)(this + 88) = 0; /*0x7b8ce6*/
    }
    v6 = *(_DWORD *)(this + 108); /*0x7b8ce9*/
    if ( v6 /*0x7b8d14*/
      && (*(__int16 *)(*(_DWORD *)(this + 4) + 2) > (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 124))(v6)
       || *(__int16 *)(*(_DWORD *)(this + 4) + 4) > (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 108) + 128))(*(_DWORD *)(this + 108))) )
    {
      v7 = *(void (__thiscall ****)(_DWORD, int))(this + 108); /*0x7b8d16*/
      if ( v7 ) /*0x7b8d1b*/
        (**v7)(v7, 1); /*0x7b8d21*/
      *(_DWORD *)(this + 108) = 0; /*0x7b8d23*/
    }
    if ( *(_DWORD *)(this + 36) ) /*0x7b8d26*/
    {
      if ( !*(_DWORD *)(this + 68) ) /*0x7b8d33*/
      {
        v8 = __2_YAPAXI_Z(0x20u); /*0x7b8d3f*/
        if ( v8 ) /*0x7b8d46*/
        {
          v9 = *(_DWORD *)(this + 4); /*0x7b8d4b*/
          v10 = *(__int16 *)(v9 + 4); /*0x7b8d50*/
          v11 = *(__int16 *)(v9 + 2); /*0x7b8d54*/
          v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 112))(*(_DWORD *)(this + 36)); /*0x7b8d58*/
          v8[4] = v12; /*0x7b8d5b*/
          v8[1] = v11; /*0x7b8d6a*/
          v8[2] = v10; /*0x7b8d6d*/
          v8[3] = 0; /*0x7b8d70*/
          *v8 = &XSurface_Vtable; /*0x7b8d77*/
          Buffer::Init(v8 + 5, 0, v10 * v11 * v12); /*0x7b8d7d*/
          *v8 = &BSurface_Vtable; /*0x7b8d82*/
        }
        else
        {
          v8 = 0; /*0x7b8d8a*/
        }
        *(_DWORD *)(this + 68) = v8; /*0x7b8d8c*/
      }
      if ( !*(_DWORD *)(this + 88) ) /*0x7b8d8f*/
      {
        v13 = __2_YAPAXI_Z(0x20u); /*0x7b8d9d*/
        if ( v13 ) /*0x7b8da4*/
        {
          v14 = *(_DWORD *)(this + 4); /*0x7b8da6*/
          v15 = *(__int16 *)(v14 + 4); /*0x7b8dac*/
          v16 = *(__int16 *)(v14 + 2); /*0x7b8db0*/
          v17 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 112))(*(_DWORD *)(this + 36)); /*0x7b8db6*/
          v13[4] = v17; /*0x7b8db9*/
          v13[1] = v16; /*0x7b8dc8*/
          v13[2] = v15; /*0x7b8dcb*/
          v13[3] = 0; /*0x7b8dce*/
          *v13 = &XSurface_Vtable; /*0x7b8dd5*/
          Buffer::Init(v13 + 5, 0, v15 * v16 * v17); /*0x7b8ddb*/
          *v13 = &BSurface_Vtable; /*0x7b8de0*/
        }
        else
        {
          v13 = 0; /*0x7b8de8*/
        }
        *(_DWORD *)(this + 88) = v13; /*0x7b8dea*/
      }
      if ( !*(_DWORD *)(this + 108) ) /*0x7b8ded*/
      {
        v18 = __2_YAPAXI_Z(0x20u); /*0x7b8dfb*/
        if ( v18 ) /*0x7b8e02*/
        {
          v19 = *(_DWORD *)(this + 4); /*0x7b8e07*/
          v20 = *(__int16 *)(v19 + 4); /*0x7b8e0c*/
          v21 = *(__int16 *)(v19 + 2); /*0x7b8e10*/
          v22 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 112))(*(_DWORD *)(this + 36)); /*0x7b8e14*/
          v18[4] = v22; /*0x7b8e17*/
          v18[1] = v21; /*0x7b8e26*/
          v18[2] = v20; /*0x7b8e29*/
          v18[3] = 0; /*0x7b8e2c*/
          *v18 = &XSurface_Vtable; /*0x7b8e33*/
          Buffer::Init(v18 + 5, 0, v20 * v21 * v22); /*0x7b8e39*/
          *v18 = &BSurface_Vtable; /*0x7b8e3e*/
        }
        else
        {
          v18 = 0; /*0x7b8e46*/
        }
        *(_DWORD *)(this + 108) = v18; /*0x7b8e48*/
      }
    }
    return *(_DWORD *)(this + 68) && *(_DWORD *)(this + 88) && *(_DWORD *)(this + 108); /*0x7b8e63*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x7b8e70*/
  }
  return result; /*0x7b8e62*/
}



// ==== 0x007B8E80  WWMouseClass::initCursorState  this=WWMouseClass  sig=csp ====
_DWORD *__thiscall WWMouseClass::initCursorState(WWMouseClass *this, _DWORD *a2)
{
  int v3; // edi
  void *WWMouseClass_field_0x4; // eax
  int v5; // ebx
  int v6; // ebp
  int v7; // ecx
  int *FoundationSize; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // edx
  int v12; // ebx
  _DWORD v14[3]; // [esp+10h] [ebp-10h] BYREF
  int v15; // [esp+1Ch] [ebp-4h]

  v3 = 0; /*0x7b8e89*/
  WWMouseClass_field_0x4 = this->WWMouseClass_field_0x4; /*0x7b8e8b*/
  v5 = 0; /*0x7b8e8e*/
  v6 = 0; /*0x7b8e90*/
  v7 = 0; /*0x7b8e92*/
  if ( WWMouseClass_field_0x4 ) /*0x7b8e96*/
  {
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b8eae*/
      Debug::Log(); /*0x7b8ebf*/
    FoundationSize = Building::GetFoundationSize(v14, (unsigned int)this->WWMouseClass_field_0x8); /*0x7b8ed3*/
    v9 = *FoundationSize; /*0x7b8ed8*/
    v10 = *(_DWORD *)this->__pad_14; /*0x7b8eda*/
    v11 = *(_DWORD *)&this->__pad_14[4]; /*0x7b8edd*/
    v12 = FoundationSize[1]; /*0x7b8ee0*/
    v6 = FoundationSize[2]; /*0x7b8ee3*/
    v15 = FoundationSize[3]; /*0x7b8ee9*/
    v3 = v10 - *(_DWORD *)this->__pad_3C + v9; /*0x7b8efd*/
    v5 = v11 - *(_DWORD *)&this->__pad_3C[4] + v12; /*0x7b8eff*/
    ReleaseMutex(hMutex); /*0x7b8f01*/
    v7 = v15; /*0x7b8f07*/
  }
  *a2 = v3; /*0x7b8f11*/
  a2[1] = v5; /*0x7b8f15*/
  a2[2] = v6; /*0x7b8f18*/
  a2[3] = v7; /*0x7b8f1d*/
  return a2; /*0x7b8f13*/
}



// ==== 0x007B8F30  WWMouseClass::updateCursorRect  this=WWMouseClass  sig=csp ====
char __thiscall WWMouseClass::updateCursorRect(WWMouseClass *this)
{
  int WWMouseClass_field_0x24; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // ebp
  int v6; // eax
  int *FoundationSize; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // edx
  int v11; // ebx
  char *v12; // edx
  int v13; // edx
  char *v14; // ebx
  int WWMouseClass_field_0x44; // ecx
  _DWORD v17[4]; // [esp+4h] [ebp-30h] BYREF
  _DWORD v18[3]; // [esp+14h] [ebp-20h] BYREF
  int v19; // [esp+20h] [ebp-14h]
  int v20[4]; // [esp+24h] [ebp-10h] BYREF

  LOBYTE(WWMouseClass_field_0x24) = BSurface::CreateTripleBuffer((int)this); /*0x7b8f36*/
  if ( (_BYTE)WWMouseClass_field_0x24 ) /*0x7b8f3d*/
  {
    WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b8f43*/
    if ( WWMouseClass_field_0x24 ) /*0x7b8f48*/
    {
      v3 = 0; /*0x7b8f54*/
      v4 = 0; /*0x7b8f56*/
      v5 = 0; /*0x7b8f58*/
      v6 = 0; /*0x7b8f5a*/
      if ( this->WWMouseClass_field_0x4 ) /*0x7b8f4e*/
      {
        if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b8f76*/
          Debug::Log(); /*0x7b8f87*/
        FoundationSize = Building::GetFoundationSize(v20, (unsigned int)this->WWMouseClass_field_0x8); /*0x7b8f9b*/
        v8 = *FoundationSize; /*0x7b8fa0*/
        v9 = *(_DWORD *)this->__pad_14; /*0x7b8fa2*/
        v10 = *(_DWORD *)&this->__pad_14[4]; /*0x7b8fa5*/
        v11 = FoundationSize[1]; /*0x7b8fa8*/
        v5 = FoundationSize[2]; /*0x7b8fab*/
        v19 = FoundationSize[3]; /*0x7b8fb1*/
        v3 = v9 - *(_DWORD *)this->__pad_3C + v8; /*0x7b8fbf*/
        v4 = v10 - *(_DWORD *)&this->__pad_3C[4] + v11; /*0x7b8fc7*/
        ReleaseMutex(hMutex); /*0x7b8fc9*/
        v6 = v19; /*0x7b8fcf*/
      }
      v12 = (char *)this->WWMouseClass_field_0x2C + v3; /*0x7b8fd9*/
      *(_DWORD *)this->__pad_48 = v3; /*0x7b8fdf*/
      v17[0] = v12; /*0x7b8fe1*/
      *(_DWORD *)&this->__pad_48[4] = v4; /*0x7b8fe9*/
      v18[0] = 0; /*0x7b8fec*/
      v18[1] = 0; /*0x7b8ff0*/
      *(_DWORD *)&this->__pad_48[8] = v5; /*0x7b8ff5*/
      v13 = this->WWMouseClass_field_0x24; /*0x7b8ffd*/
      *(_DWORD *)&this->__pad_48[12] = v6; /*0x7b9000*/
      v14 = (char *)this->WWMouseClass_field_0x30 + v4; /*0x7b9006*/
      WWMouseClass_field_0x44 = this->WWMouseClass_field_0x44; /*0x7b9008*/
      v17[2] = v5; /*0x7b900c*/
      v17[3] = v6; /*0x7b9010*/
      v17[1] = v14; /*0x7b9014*/
      v18[2] = v5; /*0x7b9018*/
      v19 = v6; /*0x7b901c*/
      LOBYTE(WWMouseClass_field_0x24) = (*(int (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)WWMouseClass_field_0x44 + 8))( /*0x7b9027*/
                                          WWMouseClass_field_0x44,
                                          v18,
                                          v13,
                                          v17,
                                          0,
                                          1);
    }
  }
  return WWMouseClass_field_0x24; /*0x7b902d*/
}



// ==== 0x007B9040  WWMouseClass::initSurface  this=WWMouseClass  sig=csp ====
_DWORD *__thiscall WWMouseClass::initSurface(WWMouseClass *this)
{
  _DWORD *result; // eax
  int WWMouseClass_field_0x24; // ecx
  int v3; // ebp
  int v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // edx
  _DWORD v8[4]; // [esp+4h] [ebp-20h] BYREF
  _DWORD v9[4]; // [esp+14h] [ebp-10h] BYREF

  result = this->__pad_0; /*0x7b9040*/
  if ( *(int *)&this->__pad_48[8] > 0 && *(int *)&this->__pad_48[12] > 0 ) /*0x7b9052*/
  {
    WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b9054*/
    if ( WWMouseClass_field_0x24 ) /*0x7b9059*/
    {
      v3 = result[17]; /*0x7b905b*/
      if ( v3 ) /*0x7b9060*/
      {
        v4 = result[21]; /*0x7b9069*/
        v5 = result[19]; /*0x7b906d*/
        v6 = result[20]; /*0x7b9071*/
        v9[0] = result[11] + result[18]; /*0x7b9074*/
        v7 = result[12]; /*0x7b9078*/
        v8[0] = 0; /*0x7b907f*/
        v8[1] = 0; /*0x7b9083*/
        v9[2] = v6; /*0x7b908f*/
        v9[3] = v4; /*0x7b9093*/
        v9[1] = v7 + v5; /*0x7b9097*/
        v8[2] = v6; /*0x7b909b*/
        v8[3] = v4; /*0x7b909f*/
        return (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)WWMouseClass_field_0x24 /*0x7b90ab*/
                                                                                          + 8))(
                           WWMouseClass_field_0x24,
                           v9,
                           v3,
                           v8,
                           0,
                           1);
      }
    }
  }
  return result; /*0x7b90b1*/
}



// ==== 0x007B90C0  WWMouseClass::DrawCursorBuffered  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::DrawCursorBuffered(WWMouseClass *this, int *a2, char a3)
{
  int result; // eax
  MouseClass *WWMouseClass_field_0x6C; // ebx
  WWMouseClass *pad_5C; // esi
  int v8; // esi
  void *WWMouseClass_field_0x8; // ecx
  void *WWMouseClass_field_0xC; // edx
  void (__thiscall **MouseClass_field_0x0)(MouseClass *, int *, int *, WWMouseClass *, _DWORD, int); // edx
  int v12; // eax
  int v13; // ebx
  void *WWMouseClass_field_0x4; // eax
  int WWMouseClass_field_0x44; // ecx
  void *v16; // eax
  void *v17; // esi
  void *v18; // edx
  int v19; // ecx
  int v20; // [esp+14h] [ebp-20h] BYREF
  void *v21; // [esp+18h] [ebp-1Ch]
  void *v22; // [esp+1Ch] [ebp-18h]
  void *v23; // [esp+20h] [ebp-14h]
  int v24; // [esp+24h] [ebp-10h] BYREF
  int v25; // [esp+28h] [ebp-Ch]
  void *v26; // [esp+2Ch] [ebp-8h]
  void *v27; // [esp+30h] [ebp-4h]
  int v28; // [esp+38h] [ebp+4h]

  result = (*(int (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 8))(this); /*0x7b90cb*/
  if ( !(_BYTE)result ) /*0x7b90d0*/
  {
    result = (*(int (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 28))(this); /*0x7b90da*/
    if ( (_BYTE)result ) /*0x7b90df*/
    {
      result = 0; /*0x7b90e9*/
      if ( a2 ) /*0x7b90ed*/
      {
        if ( a2 != (int *)this->WWMouseClass_field_0x24 ) /*0x7b90f6*/
        {
          if ( a3 ) /*0x7b9108*/
          {
            if ( LOBYTE(stru_A8EB00.ObjectTypeClass[31]) ) /*0x7b910c*/
              result = -*(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x7b9113*/
            WWMouseClass_field_0x6C = this->WWMouseClass_field_0x6C; /*0x7b9115*/
            v28 = result; /*0x7b9118*/
            pad_5C = this + 1; /*0x7b911c*/
          }
          else
          {
            if ( !LOBYTE(stru_A8EB00.ObjectTypeClass[31]) ) /*0x7b9123*/
            {
              v8 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2) - *(_DWORD *)&DSurface_ViewBounds.__pad_8[16]; /*0x7b913d*/
              if ( -(*((int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 31))(DSurface_Sidebar) <= v8 ) /*0x7b9146*/
                result = (*(int (__thiscall **)(int *))(*a2 + 124))(a2) - *(_DWORD *)&DSurface_ViewBounds.__pad_8[16]; /*0x7b915f*/
              else
                result = -(*((int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 31))(DSurface_Sidebar); /*0x7b9153*/
            }
            WWMouseClass_field_0x6C = (MouseClass *)this->WWMouseClass_field_0x58; /*0x7b9165*/
            v28 = result; /*0x7b9168*/
            pad_5C = (WWMouseClass *)this->__pad_5C; /*0x7b916c*/
          }
          if ( WWMouseClass_field_0x6C && (result = this->WWMouseClass_field_0x44) != 0 ) /*0x7b917c*/
          {
            if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9198*/
              Debug::Log(); /*0x7b91a9*/
            *(_DWORD *)pad_5C->__pad_0 = *(_DWORD *)this->__pad_48; /*0x7b91ba*/
            pad_5C->WWMouseClass_field_0x4 = *(void **)&this->__pad_48[4]; /*0x7b91bf*/
            pad_5C->WWMouseClass_field_0x8 = *(void **)&this->__pad_48[8]; /*0x7b91c5*/
            pad_5C->WWMouseClass_field_0xC = *(void **)&this->__pad_48[12]; /*0x7b91cb*/
            WWMouseClass_field_0x8 = pad_5C->WWMouseClass_field_0x8; /*0x7b91d4*/
            WWMouseClass_field_0xC = pad_5C->WWMouseClass_field_0xC; /*0x7b91d9*/
            *(_DWORD *)pad_5C->__pad_0 += v28; /*0x7b91dc*/
            v20 = 0; /*0x7b91e0*/
            v21 = 0; /*0x7b91e4*/
            v23 = WWMouseClass_field_0xC; /*0x7b91e9*/
            MouseClass_field_0x0 = (void (__thiscall **)(MouseClass *, int *, int *, WWMouseClass *, _DWORD, int))WWMouseClass_field_0x6C->MouseClass_field_0x0; /*0x7b91ed*/
            v22 = WWMouseClass_field_0x8; /*0x7b91f4*/
            MouseClass_field_0x0[2](WWMouseClass_field_0x6C, &v20, a2, pad_5C, 0, 1); /*0x7b91fc*/
            if ( a3 /*0x7b921b*/
              && (v12 = *(_DWORD *)pad_5C->__pad_0, *(int *)pad_5C->__pad_0 < 0)
              && (v13 = -v12,
                  -v12 < (*(int (__thiscall **)(int))(*(_DWORD *)this->WWMouseClass_field_0x44 + 124))(this->WWMouseClass_field_0x44)) )
            {
              WWMouseClass_field_0x4 = pad_5C->WWMouseClass_field_0x4; /*0x7b921d*/
              WWMouseClass_field_0x44 = this->WWMouseClass_field_0x44; /*0x7b9220*/
              v20 = 0; /*0x7b9227*/
              v21 = WWMouseClass_field_0x4; /*0x7b922b*/
              v16 = pad_5C->WWMouseClass_field_0x8; /*0x7b922f*/
              v17 = pad_5C->WWMouseClass_field_0xC; /*0x7b9232*/
              v25 = 0; /*0x7b9235*/
              v22 = v16; /*0x7b923e*/
              v23 = v17; /*0x7b9243*/
              v24 = v13; /*0x7b9247*/
              v26 = v16; /*0x7b924b*/
              v27 = v17; /*0x7b924f*/
              (*(void (__thiscall **)(int, int *, int *, int *, _DWORD, int))(*(_DWORD *)WWMouseClass_field_0x44 + 8))( /*0x7b925b*/
                WWMouseClass_field_0x44,
                &v24,
                a2,
                &v20,
                0,
                1);
            }
            else
            {
              v18 = pad_5C->WWMouseClass_field_0xC; /*0x7b9263*/
              v26 = pad_5C->WWMouseClass_field_0x8; /*0x7b9268*/
              v19 = this->WWMouseClass_field_0x44; /*0x7b926c*/
              v24 = 0; /*0x7b9271*/
              v25 = 0; /*0x7b9275*/
              v27 = v18; /*0x7b927a*/
              (*(void (__thiscall **)(int, int *, int *, WWMouseClass *, _DWORD, int))(*(_DWORD *)v19 + 8))( /*0x7b9287*/
                v19,
                &v24,
                a2,
                pad_5C,
                0,
                1);
            }
            Mouse::DrawCursor((Mouse *)this, a2, v28, 0); /*0x7b9294*/
            return ReleaseMutex(hMutex); /*0x7b92a0*/
          }
          else
          {
            pad_5C->WWMouseClass_field_0x8 = 0; /*0x7b92b0*/
          }
        }
      }
    }
  }
  return result; /*0x7b92a6*/
}



// ==== 0x007B92D0  WWMouseClass::updateCursor  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::updateCursor(WWMouseClass *this, int *a2, char a3)
{
  int result; // eax
  int WWMouseClass_field_0x58; // edi
  WWMouseClass *pad_5C; // esi
  int v7; // edx
  _DWORD v8[2]; // [esp+Ch] [ebp-20h] BYREF
  void *WWMouseClass_field_0x8; // [esp+14h] [ebp-18h]
  void *WWMouseClass_field_0xC; // [esp+18h] [ebp-14h]
  _DWORD v11[4]; // [esp+1Ch] [ebp-10h] BYREF

  result = (*(int (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 8))(this); /*0x7b92da*/
  if ( !(_BYTE)result ) /*0x7b92df*/
  {
    result = (*(int (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 28))(this); /*0x7b92e9*/
    if ( (_BYTE)result ) /*0x7b92ee*/
    {
      if ( a2 ) /*0x7b92fa*/
      {
        if ( a2 != (int *)this->WWMouseClass_field_0x24 ) /*0x7b9303*/
        {
          WWMouseClass_field_0x58 = this->WWMouseClass_field_0x58; /*0x7b9309*/
          if ( WWMouseClass_field_0x58 ) /*0x7b930e*/
          {
            result = (int)this->WWMouseClass_field_0x6C; /*0x7b9314*/
            if ( result ) /*0x7b9319*/
            {
              if ( a3 ) /*0x7b9325*/
              {
                pad_5C = this + 1; /*0x7b9327*/
                WWMouseClass_field_0x58 = result; /*0x7b932a*/
              }
              else
              {
                pad_5C = (WWMouseClass *)this->__pad_5C; /*0x7b9349*/
              }
              v8[0] = *(_DWORD *)pad_5C->__pad_0; /*0x7b932e*/
              v8[1] = pad_5C->WWMouseClass_field_0x4; /*0x7b9335*/
              WWMouseClass_field_0x8 = pad_5C->WWMouseClass_field_0x8; /*0x7b933c*/
              WWMouseClass_field_0xC = pad_5C->WWMouseClass_field_0xC; /*0x7b9343*/
              if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9382*/
                Debug::Log(); /*0x7b9393*/
              v7 = *a2; /*0x7b93a3*/
              v11[2] = WWMouseClass_field_0x8; /*0x7b93a6*/
              v11[3] = WWMouseClass_field_0xC; /*0x7b93b0*/
              v11[0] = 0; /*0x7b93bf*/
              v11[1] = 0; /*0x7b93c7*/
              (*(void (__thiscall **)(int *, _DWORD *, int, _DWORD *, _DWORD, int))(v7 + 8))( /*0x7b93cf*/
                a2,
                v8,
                WWMouseClass_field_0x58,
                v11,
                0,
                1);
              return ReleaseMutex(hMutex); /*0x7b93d9*/
            }
          }
        }
      }
    }
  }
  return result; /*0x7b93df*/
}



// ==== 0x007B93F0  Mouse::DrawCursor  this=IUnknown  sig=csp ====
void __thiscall Mouse::DrawCursor(Mouse *this, int *a2, int a3, int a4)
{
  MixFileClass *v5; // ecx
  int v6; // ebx
  int v7; // ebp
  int v8; // esi
  int v9; // edi
  int SubFile; // eax
  int v11; // eax
  _DWORD *v12; // [esp-2Ch] [ebp-78h]
  int v13; // [esp+4h] [ebp-48h] BYREF
  int v14; // [esp+8h] [ebp-44h]
  int v15; // [esp+Ch] [ebp-40h] BYREF
  int v16; // [esp+10h] [ebp-3Ch]
  int v17; // [esp+14h] [ebp-38h]
  int v18; // [esp+18h] [ebp-34h]
  _BYTE v19[16]; // [esp+1Ch] [ebp-30h] BYREF
  int v20[5]; // [esp+2Ch] [ebp-20h] BYREF
  int v21[3]; // [esp+40h] [ebp-Ch] BYREF

  v13 = (int)this; /*0x7b93f5*/
  v5 = *(MixFileClass **)&this->m_1[3]; /*0x7b93f9*/
  if ( v5 && a2 && *(_DWORD *)&stru_87F5F0.__pad_58[128] ) /*0x7b9418*/
  {
    v6 = this->u32_14; /*0x7b942e*/
    v7 = this->q054; /*0x7b9431*/
    v8 = a3 + this->q048; /*0x7b9438*/
    v9 = a4 + this->q04C; /*0x7b943e*/
    SubFile = MixFileClass::GetSubFile(v5, *(_DWORD *)&this->__pad_5[3]); /*0x7b9440*/
    v20[1] = v6; /*0x7b9447*/
    v20[2] = v7; /*0x7b9454*/
    v20[3] = 0; /*0x7b9458*/
    v20[4] = 1; /*0x7b9468*/
    Buffer::Init((Buffer *)v21, SubFile, v7 * v6); /*0x7b9470*/
    v20[0] = (int)&BSurface_Vtable; /*0x7b947d*/
    if ( a2 == *(int **)(v13 + 36) ) /*0x7b9488*/
    {
      v15 = 0; /*0x7b9499*/
      v16 = 0; /*0x7b949d*/
      v12 = (_DWORD *)(v13 + 44); /*0x7b94a6*/
      v13 = v8; /*0x7b94b8*/
      v14 = v9; /*0x7b94bc*/
      v17 = v6; /*0x7b94c0*/
      v18 = v7; /*0x7b94c4*/
    }
    else
    {
      v15 = 0; /*0x7b94da*/
      v16 = 0; /*0x7b94de*/
      v11 = *a2; /*0x7b94e3*/
      v13 = v8; /*0x7b94e6*/
      v14 = v9; /*0x7b94ea*/
      v17 = v6; /*0x7b94ee*/
      v18 = v7; /*0x7b94f2*/
      v12 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v11 + 120))(a2, v19); /*0x7b94f9*/
    }
    BlitterDrawSHP(a2, *(int *)&stru_87F5F0.__pad_58[128], v20, &v15, &v13, v12, 0, 0, 0, 0, 1000, 0, 0); /*0x7b94c8*/
    Vector::Clear((int)v21); /*0x7b951f*/
  }
}



// ==== 0x007B9530  ObjectClass::method_7B9530  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_7B9530(ObjectClass *this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // ebp
  int v5; // eax
  int *FoundationSize; // eax
  int v7; // edi
  int abstractFlags; // edx
  int v9; // ebx
  int v10; // ecx
  int nextArrayIndex; // eax
  int v12; // ecx
  ObjectClass *nextObject; // ecx
  char *v14; // ebx
  int v15; // ecx
  int occupant; // [esp-1Ch] [ebp-50h]
  _DWORD v18[4]; // [esp+4h] [ebp-30h] BYREF
  _DWORD v19[3]; // [esp+14h] [ebp-20h] BYREF
  int v20; // [esp+20h] [ebp-14h]
  _DWORD v21[4]; // [esp+24h] [ebp-10h] BYREF

  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b954c*/
    Debug::Log(); /*0x7b955d*/
  if ( (unsigned __int8)BSurface::CreateTripleBuffer((int)this) && this->occupant ) /*0x7b9574*/
  {
    v2 = 0; /*0x7b9585*/
    v3 = 0; /*0x7b9587*/
    v4 = 0; /*0x7b9589*/
    v5 = 0; /*0x7b958b*/
    if ( this->? ) /*0x7b957f*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b95a8*/
        Debug::Log(); /*0x7b95b9*/
      FoundationSize = Building::GetFoundationSize(v21, (unsigned int)this->?); /*0x7b95cd*/
      v7 = *FoundationSize; /*0x7b95d2*/
      abstractFlags = this->?; /*0x7b95d4*/
      v9 = FoundationSize[1]; /*0x7b95d7*/
      v4 = FoundationSize[2]; /*0x7b95da*/
      v10 = FoundationSize[3]; /*0x7b95dd*/
      nextArrayIndex = this->?; /*0x7b95e0*/
      v20 = v10; /*0x7b95e3*/
      v2 = abstractFlags - this->ambientSoundController[0] + v7; /*0x7b95f2*/
      v3 = nextArrayIndex - this->ambientSoundController[1] + v9; /*0x7b95fa*/
      ReleaseMutex(hMutex); /*0x7b95fc*/
      v5 = v20; /*0x7b9602*/
    }
    v12 = v2 + this->fallRate; /*0x7b960c*/
    this->ambientSoundController[3] = v2; /*0x7b9610*/
    v18[0] = v12; /*0x7b9616*/
    nextObject = this->nextObject; /*0x7b961a*/
    this->ambientSoundController[4] = v3; /*0x7b961d*/
    v14 = (char *)nextObject + v3; /*0x7b9620*/
    v15 = this->ambientSoundController[2]; /*0x7b9622*/
    v18[2] = v4; /*0x7b9625*/
    this->customSound_controller[0] = v4; /*0x7b9629*/
    v18[3] = v5; /*0x7b962c*/
    v18[1] = v14; /*0x7b9630*/
    v19[2] = v4; /*0x7b9634*/
    this->customSound_controller[1] = v5; /*0x7b9638*/
    v19[0] = 0; /*0x7b963d*/
    v19[1] = 0; /*0x7b9641*/
    occupant = this->occupant; /*0x7b964e*/
    v20 = v5; /*0x7b964f*/
    (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)v15 + 8))( /*0x7b965a*/
      v15,
      v19,
      occupant,
      v18,
      0,
      1);
  }
  Mouse::DrawCursor((Mouse *)this, (int *)this->occupant, 0, 0); /*0x7b966a*/
  return ReleaseMutex(hMutex); /*0x7b967c*/
}



// ==== 0x007B9690  WWMouseClass::renderDragSelectionRect  this=WWMouseClass  sig=csp ====
BOOL __thiscall WWMouseClass::renderDragSelectionRect(WWMouseClass *this)
{
  int WWMouseClass_field_0x24; // ecx
  int WWMouseClass_field_0x44; // ebp
  int v4; // edx
  int v5; // ebx
  int v6; // edi
  char *WWMouseClass_field_0x30; // eax
  _DWORD v9[4]; // [esp+8h] [ebp-20h] BYREF
  _DWORD v10[4]; // [esp+18h] [ebp-10h] BYREF

  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b96ad*/
    Debug::Log(); /*0x7b96be*/
  if ( *(int *)&this->__pad_48[8] > 0 && *(int *)&this->__pad_48[12] > 0 ) /*0x7b96d2*/
  {
    WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b96d4*/
    if ( WWMouseClass_field_0x24 ) /*0x7b96d9*/
    {
      WWMouseClass_field_0x44 = this->WWMouseClass_field_0x44; /*0x7b96db*/
      if ( WWMouseClass_field_0x44 ) /*0x7b96e0*/
      {
        v4 = *(_DWORD *)&this->__pad_48[4]; /*0x7b96e5*/
        v5 = *(_DWORD *)&this->__pad_48[12]; /*0x7b96ec*/
        v6 = *(_DWORD *)&this->__pad_48[8]; /*0x7b96f0*/
        v10[0] = (char *)this->WWMouseClass_field_0x2C + *(_DWORD *)this->__pad_48; /*0x7b96f3*/
        WWMouseClass_field_0x30 = (char *)this->WWMouseClass_field_0x30; /*0x7b96f7*/
        v9[0] = 0; /*0x7b9700*/
        v9[1] = 0; /*0x7b9704*/
        v10[2] = v6; /*0x7b970e*/
        v10[3] = v5; /*0x7b9712*/
        v10[1] = &WWMouseClass_field_0x30[v4]; /*0x7b9716*/
        v9[2] = v6; /*0x7b971a*/
        v9[3] = v5; /*0x7b971e*/
        (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)WWMouseClass_field_0x24 + 8))( /*0x7b972a*/
          WWMouseClass_field_0x24,
          v10,
          WWMouseClass_field_0x44,
          v9,
          0,
          1);
      }
    }
  }
  return ReleaseMutex(hMutex); /*0x7b973c*/
}



// ==== 0x007B9750  WWMouseClass::showCursor  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::showCursor(WWMouseClass *this)
{
  int result; // eax
  char *v3; // eax
  int *FoundationSize; // eax
  int v5; // edi
  int v6; // edx
  int v7; // edi
  int X; // eax
  int Y; // ecx
  int Width; // edx
  int Height; // edi
  char *v12; // ebp
  int *WWMouseClass_field_0x44; // eax
  int v14; // ebp
  _DWORD *v15; // eax
  int WWMouseClass_field_0x24; // [esp-1Ch] [ebp-50h]
  Rect v17; // [esp+4h] [ebp-30h] BYREF
  _DWORD v18[4]; // [esp+14h] [ebp-20h] BYREF
  Rect v19; // [esp+24h] [ebp-10h] BYREF

  result = (int)this->WWMouseClass_field_0xC; /*0x7b9756*/
  if ( result ) /*0x7b975b*/
  {
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b977b*/
      Debug::Log(); /*0x7b978c*/
    v3 = (char *)this->WWMouseClass_field_0xC + 1; /*0x7b979d*/
    this->WWMouseClass_field_0xC = v3; /*0x7b979e*/
    if ( !v3 ) /*0x7b97a1*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 28))(this) ) /*0x7b97ab*/
      {
        if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b97c8*/
          Debug::Log(); /*0x7b97d9*/
        if ( (unsigned __int8)BSurface::CreateTripleBuffer((int)this) && this->WWMouseClass_field_0x24 ) /*0x7b97f0*/
        {
          Rect::Set(&v17, 0, 0, 0, 0); /*0x7b9807*/
          if ( this->WWMouseClass_field_0x4 ) /*0x7b980c*/
          {
            UI_Helper_7BA2C0(); /*0x7b9813*/
            FoundationSize = Building::GetFoundationSize(&v19, (unsigned int)this->WWMouseClass_field_0x8); /*0x7b9824*/
            v17.X = *FoundationSize; /*0x7b982d*/
            v17.Y = FoundationSize[1]; /*0x7b9834*/
            v17.Width = FoundationSize[2]; /*0x7b983b*/
            v5 = *(_DWORD *)this->__pad_3C; /*0x7b983f*/
            v17.Height = FoundationSize[3]; /*0x7b9845*/
            v6 = *(_DWORD *)this->__pad_14 - v5; /*0x7b984c*/
            v7 = *(_DWORD *)&this->__pad_3C[4]; /*0x7b984e*/
            v17.X += v6; /*0x7b9853*/
            v17.Y += *(_DWORD *)&this->__pad_14[4] - v7; /*0x7b985e*/
            ReleaseMutex(hMutex); /*0x7b9869*/
          }
          X = v17.X; /*0x7b986b*/
          Y = v17.Y; /*0x7b986f*/
          Width = v17.Width; /*0x7b9879*/
          Height = v17.Height; /*0x7b987d*/
          v18[0] = v17.X; /*0x7b9881*/
          *(_DWORD *)this->__pad_48 = v17.X; /*0x7b9885*/
          v18[2] = Width; /*0x7b9888*/
          v18[3] = Height; /*0x7b988c*/
          *(_DWORD *)&this->__pad_48[4] = Y; /*0x7b9892*/
          *(_DWORD *)&this->__pad_48[8] = Width; /*0x7b9897*/
          *(_DWORD *)&this->__pad_48[12] = Height; /*0x7b989a*/
          v12 = (char *)this->WWMouseClass_field_0x2C + X; /*0x7b98a0*/
          WWMouseClass_field_0x44 = (int *)this->WWMouseClass_field_0x44; /*0x7b98a2*/
          v18[0] = v12; /*0x7b98a5*/
          v18[1] = (char *)this->WWMouseClass_field_0x30 + Y; /*0x7b98ae*/
          v14 = *WWMouseClass_field_0x44; /*0x7b98b2*/
          WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b98bc*/
          v15 = Rect::Set(&v19, 0, 0, Width, Height); /*0x7b98c7*/
          (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(v14 + 8))( /*0x7b98d0*/
            this->WWMouseClass_field_0x44,
            v15,
            WWMouseClass_field_0x24,
            v18,
            0,
            1);
        }
        Mouse::DrawCursor((Mouse *)this, (int *)this->WWMouseClass_field_0x24, 0, 0); /*0x7b98de*/
        ReleaseMutex(hMutex); /*0x7b98ea*/
      }
      else
      {
        while ( ShowCursor(1) < 0 ) /*0x7b98fa*/
          ; /*0x7b98fc*/
      }
    }
    if ( (int)this->WWMouseClass_field_0xC > 0 ) /*0x7b9909*/
      this->WWMouseClass_field_0xC = 0; /*0x7b990b*/
    return ReleaseMutex(hMutex); /*0x7b9918*/
  }
  return result; /*0x7b991c*/
}



// ==== 0x007B9930  WWMouseClass::hideCursor  this=WWMouseClass  sig=csp ====
BOOL __thiscall WWMouseClass::hideCursor(WWMouseClass *this)
{
  int WWMouseClass_field_0x24; // ecx
  int WWMouseClass_field_0x44; // ebp
  int v4; // edx
  int v5; // edi
  int v6; // ebx
  char *v7; // edx
  _DWORD v9[4]; // [esp+8h] [ebp-20h] BYREF
  _DWORD v10[4]; // [esp+18h] [ebp-10h] BYREF

  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b994f*/
    Debug::Log(); /*0x7b9960*/
  if ( !this->WWMouseClass_field_0xC ) /*0x7b9968*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 28))(this) ) /*0x7b9977*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9994*/
        Debug::Log(); /*0x7b99a5*/
      if ( *(int *)&this->__pad_48[8] > 0 && *(int *)&this->__pad_48[12] > 0 ) /*0x7b99ba*/
      {
        WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b99bc*/
        if ( WWMouseClass_field_0x24 ) /*0x7b99c1*/
        {
          WWMouseClass_field_0x44 = this->WWMouseClass_field_0x44; /*0x7b99c3*/
          if ( WWMouseClass_field_0x44 ) /*0x7b99c8*/
          {
            v4 = *(_DWORD *)&this->__pad_48[4]; /*0x7b99cd*/
            v5 = *(_DWORD *)&this->__pad_48[8]; /*0x7b99d3*/
            v6 = *(_DWORD *)&this->__pad_48[12]; /*0x7b99d7*/
            v10[0] = (char *)this->WWMouseClass_field_0x2C + *(_DWORD *)this->__pad_48; /*0x7b99da*/
            v7 = (char *)this->WWMouseClass_field_0x30 + v4; /*0x7b99e1*/
            v9[0] = 0; /*0x7b99e7*/
            v9[1] = 0; /*0x7b99eb*/
            v10[2] = v5; /*0x7b99f4*/
            v10[3] = v6; /*0x7b99f9*/
            v10[1] = v7; /*0x7b99fd*/
            v9[2] = v5; /*0x7b9a01*/
            v9[3] = v6; /*0x7b9a05*/
            (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)WWMouseClass_field_0x24 + 8))( /*0x7b9a11*/
              WWMouseClass_field_0x24,
              v10,
              WWMouseClass_field_0x44,
              v9,
              0,
              1);
          }
        }
      }
      ReleaseMutex(hMutex); /*0x7b9a1c*/
    }
    else
    {
      while ( ShowCursor(0) >= 0 ) /*0x7b9a31*/
        ; /*0x7b9a33*/
    }
  }
  --this->WWMouseClass_field_0xC; /*0x7b9a3f*/
  return ReleaseMutex(hMutex); /*0x7b9a4f*/
}



// ==== 0x007B9A60  WWMouseClass::captureMouse  this=WWMouseClass  sig=csp ====
void __thiscall WWMouseClass::captureMouse(WWMouseClass *this)
{
  int v2; // edx
  int *FoundationSize; // eax
  int v4; // edi
  int v5; // edx
  int v6; // edi
  int X; // eax
  int Y; // ecx
  int Width; // edx
  int Height; // edi
  char *v11; // ebp
  int *WWMouseClass_field_0x44; // eax
  int v13; // ebp
  _DWORD *v14; // eax
  int WWMouseClass_field_0x24; // [esp-1Ch] [ebp-50h]
  Rect v16; // [esp+4h] [ebp-30h] BYREF
  _DWORD v17[4]; // [esp+14h] [ebp-20h] BYREF
  Rect v18; // [esp+24h] [ebp-10h] BYREF

  if ( this && !(*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 28))(this) ) /*0x7b9a70*/
  {
    Debug::Log(); /*0x7b9a82*/
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9aa3*/
      Debug::Log(); /*0x7b9ab4*/
    v2 = *(_DWORD *)this->__pad_0; /*0x7b9abc*/
    LOBYTE(this->WWMouseClass_field_0x10) = 1; /*0x7b9ac0*/
    if ( !(*(unsigned __int8 (__thiscall **)(WWMouseClass *))(v2 + 8))(this) ) /*0x7b9ac4*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9ae7*/
        Debug::Log(); /*0x7b9af8*/
      if ( (unsigned __int8)BSurface::CreateTripleBuffer((int)this) && this->WWMouseClass_field_0x24 ) /*0x7b9b0f*/
      {
        Rect::Set(&v16, 0, 0, 0, 0); /*0x7b9b26*/
        if ( this->WWMouseClass_field_0x4 ) /*0x7b9b2b*/
        {
          UI_Helper_7BA2C0(); /*0x7b9b32*/
          FoundationSize = Building::GetFoundationSize(&v18, (unsigned int)this->WWMouseClass_field_0x8); /*0x7b9b43*/
          v16.X = *FoundationSize; /*0x7b9b4c*/
          v16.Y = FoundationSize[1]; /*0x7b9b53*/
          v16.Width = FoundationSize[2]; /*0x7b9b5a*/
          v4 = *(_DWORD *)this->__pad_3C; /*0x7b9b5e*/
          v16.Height = FoundationSize[3]; /*0x7b9b64*/
          v5 = *(_DWORD *)this->__pad_14 - v4; /*0x7b9b6b*/
          v6 = *(_DWORD *)&this->__pad_3C[4]; /*0x7b9b6d*/
          v16.X += v5; /*0x7b9b72*/
          v16.Y += *(_DWORD *)&this->__pad_14[4] - v6; /*0x7b9b7d*/
          ReleaseMutex(hMutex); /*0x7b9b88*/
        }
        X = v16.X; /*0x7b9b8a*/
        Y = v16.Y; /*0x7b9b8e*/
        Width = v16.Width; /*0x7b9b98*/
        Height = v16.Height; /*0x7b9b9c*/
        v17[0] = v16.X; /*0x7b9ba0*/
        *(_DWORD *)this->__pad_48 = v16.X; /*0x7b9ba4*/
        v17[2] = Width; /*0x7b9ba7*/
        v17[3] = Height; /*0x7b9bab*/
        *(_DWORD *)&this->__pad_48[4] = Y; /*0x7b9bb1*/
        *(_DWORD *)&this->__pad_48[8] = Width; /*0x7b9bb6*/
        *(_DWORD *)&this->__pad_48[12] = Height; /*0x7b9bb9*/
        v11 = (char *)this->WWMouseClass_field_0x2C + X; /*0x7b9bbf*/
        WWMouseClass_field_0x44 = (int *)this->WWMouseClass_field_0x44; /*0x7b9bc1*/
        v17[0] = v11; /*0x7b9bc4*/
        v17[1] = (char *)this->WWMouseClass_field_0x30 + Y; /*0x7b9bcd*/
        v13 = *WWMouseClass_field_0x44; /*0x7b9bd1*/
        WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b9bdb*/
        v14 = Rect::Set(&v18, 0, 0, Width, Height); /*0x7b9be6*/
        (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(v13 + 8))( /*0x7b9bef*/
          this->WWMouseClass_field_0x44,
          v14,
          WWMouseClass_field_0x24,
          v17,
          0,
          1);
      }
      Mouse::DrawCursor((Mouse *)this, (int *)this->WWMouseClass_field_0x24, 0, 0); /*0x7b9bfd*/
      ReleaseMutex(hMutex); /*0x7b9c09*/
    }
    ShowCursor(0); /*0x7b9c0d*/
    ReleaseMutex(hMutex); /*0x7b9c19*/
  }
}



// ==== 0x007B9C30  WWMouseClass::releaseMouse  this=WWMouseClass  sig=csp ====
void __thiscall WWMouseClass::releaseMouse(WWMouseClass *this)
{
  int v2; // edx
  int WWMouseClass_field_0x24; // ecx
  int WWMouseClass_field_0x44; // ebx
  int v5; // edx
  int v6; // edi
  int v7; // ebp
  char *v8; // edx
  _DWORD v9[4]; // [esp+4h] [ebp-20h] BYREF
  _DWORD v10[4]; // [esp+14h] [ebp-10h] BYREF

  if ( this && (*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 28))(this) ) /*0x7b9c40*/
  {
    Debug::Log(); /*0x7b9c51*/
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9c72*/
      Debug::Log(); /*0x7b9c83*/
    v2 = *(_DWORD *)this->__pad_0; /*0x7b9c8b*/
    LOBYTE(this->WWMouseClass_field_0x10) = 0; /*0x7b9c8f*/
    if ( !(*(unsigned __int8 (__thiscall **)(WWMouseClass *))(v2 + 8))(this) ) /*0x7b9c93*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9cb0*/
        Debug::Log(); /*0x7b9cc1*/
      if ( *(int *)&this->__pad_48[8] > 0 && *(int *)&this->__pad_48[12] > 0 ) /*0x7b9cd6*/
      {
        WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b9cd8*/
        if ( WWMouseClass_field_0x24 ) /*0x7b9cdd*/
        {
          WWMouseClass_field_0x44 = this->WWMouseClass_field_0x44; /*0x7b9cdf*/
          if ( WWMouseClass_field_0x44 ) /*0x7b9ce4*/
          {
            v5 = *(_DWORD *)&this->__pad_48[4]; /*0x7b9ce9*/
            v6 = *(_DWORD *)&this->__pad_48[8]; /*0x7b9cef*/
            v7 = *(_DWORD *)&this->__pad_48[12]; /*0x7b9cf3*/
            v10[0] = (char *)this->WWMouseClass_field_0x2C + *(_DWORD *)this->__pad_48; /*0x7b9cf6*/
            v8 = (char *)this->WWMouseClass_field_0x30 + v5; /*0x7b9cfd*/
            v9[0] = 0; /*0x7b9d03*/
            v9[1] = 0; /*0x7b9d07*/
            v10[2] = v6; /*0x7b9d10*/
            v10[3] = v7; /*0x7b9d15*/
            v10[1] = v8; /*0x7b9d19*/
            v9[2] = v6; /*0x7b9d1d*/
            v9[3] = v7; /*0x7b9d21*/
            (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)WWMouseClass_field_0x24 + 8))( /*0x7b9d2d*/
              WWMouseClass_field_0x24,
              v10,
              WWMouseClass_field_0x44,
              v9,
              0,
              1);
          }
        }
      }
      ReleaseMutex(hMutex); /*0x7b9d38*/
      while ( ShowCursor(1) < 0 ) /*0x7b9d4b*/
        ; /*0x7b9d4d*/
    }
    ReleaseMutex(hMutex); /*0x7b9d5c*/
  }
}



// ==== 0x007B9D70  WWMouseClass::checkStatus  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::checkStatus(WWMouseClass *this, int a2, int a3, int a4, int a5)
{
  return (*(int (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x7b9d75*/
}



// ==== 0x007B9D80  WWMouseClass::checkVisible  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::checkVisible(WWMouseClass *this)
{
  return (*(int (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 16))(this);
}



// ==== 0x007B9D90  WWMouseClass::processFrame  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::processFrame(WWMouseClass *this, int *a2, int *a3)
{
  void *WWMouseClass_field_0x34; // esi
  void *WWMouseClass_field_0x38; // ecx
  int result; // eax

  *a2 -= (int)this->WWMouseClass_field_0x2C; /*0x7b9da1*/
  *a3 -= (int)this->WWMouseClass_field_0x30; /*0x7b9daa*/
  if ( *a2 < 0 ) /*0x7b9db0*/
    *a2 = 0; /*0x7b9db2*/
  if ( *a3 < 0 && !byte_B78160 ) /*0x7b9dc7*/
    *a3 = 0; /*0x7b9dc9*/
  WWMouseClass_field_0x34 = this->WWMouseClass_field_0x34; /*0x7b9dcf*/
  if ( *a2 >= (int)WWMouseClass_field_0x34 ) /*0x7b9dd6*/
    *a2 = (int)WWMouseClass_field_0x34 - 1; /*0x7b9dd9*/
  WWMouseClass_field_0x38 = this->WWMouseClass_field_0x38; /*0x7b9ddb*/
  result = *a3; /*0x7b9dde*/
  if ( *a3 >= (int)WWMouseClass_field_0x38 ) /*0x7b9de4*/
    *a3 = (int)WWMouseClass_field_0x38 - 1; /*0x7b9de7*/
  return result; /*0x7b9de0*/
}



// ==== 0x007B9DF0  ObjectClass::method_7B9DF0  this=ObjectClass  sig=csp ====
int __thiscall sub_7B9DF0(ObjectClass *this, LONG *a2, LONG *a3)
{
  LONG y; // edx
  struct tagPOINT Point; // [esp+4h] [ebp-8h] BYREF

  GetCursorPos(&Point); /*0x7b9dfb*/
  y = Point.y; /*0x7b9e09*/
  *a2 = Point.x; /*0x7b9e0d*/
  *a3 = y; /*0x7b9e15*/
  return (*((int (__thiscall **)(ObjectClass *, LONG *, LONG *))this->AbstractClass + 17))(this, a2, a3); /*0x7b9e1e*/
}



// ==== 0x007B9E30  WWMouseClass::FlipCursorBuffer  this=WWMouseClass  sig=csp ====
BOOL __thiscall WWMouseClass::FlipCursorBuffer(WWMouseClass *this, unsigned int a2, unsigned int a3, char a4)
{
  DWORD (__stdcall *v4)(HANDLE, DWORD); // edi
  int WWMouseClass_field_0x24; // ecx
  int WWMouseClass_field_0x44; // ebx
  int v8; // edx
  char *v9; // edi
  char *v10; // ebp
  char *v11; // edx
  int v12; // edx
  char **inited; // eax
  char *WWMouseClass_field_0x2C; // ebp
  char *v15; // ecx
  void *WWMouseClass_field_0x30; // ebp
  char *v17; // eax
  int v18; // ecx
  int v20; // [esp-Ch] [ebp-40h]
  char *v21; // [esp+14h] [ebp-20h] BYREF
  char *v22; // [esp+18h] [ebp-1Ch]
  char *v23; // [esp+1Ch] [ebp-18h]
  char *v24; // [esp+20h] [ebp-14h]
  char *v25; // [esp+24h] [ebp-10h] BYREF
  char *v26; // [esp+28h] [ebp-Ch]
  char *v27; // [esp+2Ch] [ebp-8h]
  char *v28; // [esp+30h] [ebp-4h]

  v4 = WaitForSingleObject; /*0x7b9e3c*/
  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9e51*/
    Debug::Log(); /*0x7b9e62*/
  if ( a2 != *(_DWORD *)this->__pad_14 || a3 != *(_DWORD *)&this->__pad_14[4] || a4 ) /*0x7b9e86*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 28))(this) /*0x7b9eb1*/
      && !(*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 8))(this)
      && stru_A8EB00.?[412] )
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9ec9*/
        Debug::Log(); /*0x7b9eda*/
      if ( *(int *)&this->__pad_48[8] > 0 && *(int *)&this->__pad_48[12] > 0 ) /*0x7b9eee*/
      {
        WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b9ef0*/
        if ( WWMouseClass_field_0x24 ) /*0x7b9ef5*/
        {
          WWMouseClass_field_0x44 = this->WWMouseClass_field_0x44; /*0x7b9ef7*/
          if ( WWMouseClass_field_0x44 ) /*0x7b9efc*/
          {
            v8 = *(_DWORD *)&this->__pad_48[4]; /*0x7b9f01*/
            v9 = *(char **)&this->__pad_48[8]; /*0x7b9f07*/
            v10 = *(char **)&this->__pad_48[12]; /*0x7b9f0a*/
            v25 = (char *)this->WWMouseClass_field_0x2C + *(_DWORD *)this->__pad_48; /*0x7b9f0f*/
            v11 = (char *)this->WWMouseClass_field_0x30 + v8; /*0x7b9f16*/
            v21 = 0; /*0x7b9f1a*/
            v22 = 0; /*0x7b9f1e*/
            v27 = v9; /*0x7b9f28*/
            v28 = v10; /*0x7b9f2c*/
            v26 = v11; /*0x7b9f30*/
            v23 = v9; /*0x7b9f34*/
            v24 = v10; /*0x7b9f38*/
            (*(void (__thiscall **)(int, char **, int, char **, _DWORD, int))(*(_DWORD *)WWMouseClass_field_0x24 + 8))( /*0x7b9f44*/
              WWMouseClass_field_0x24,
              &v25,
              WWMouseClass_field_0x44,
              &v21,
              0,
              1);
            v4 = WaitForSingleObject; /*0x7b9f47*/
          }
        }
      }
      ReleaseMutex(hMutex); /*0x7b9f54*/
    }
    *(_DWORD *)this->__pad_14 = a2; /*0x7b9f62*/
    v12 = *(_DWORD *)this->__pad_0; /*0x7b9f65*/
    *(_DWORD *)&this->__pad_14[4] = a3; /*0x7b9f69*/
    if ( (*(unsigned __int8 (__thiscall **)(WWMouseClass *))(v12 + 28))(this) /*0x7b9f8d*/
      && !(*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 8))(this)
      && stru_A8EB00.?[412] )
    {
      if ( v4(hMutex, 0x2710u) == 258 ) /*0x7b9fa6*/
        Debug::Log(); /*0x7b9fb7*/
      if ( (unsigned __int8)BSurface::CreateTripleBuffer((int)this) && this->WWMouseClass_field_0x24 ) /*0x7b9fce*/
      {
        inited = (char **)WWMouseClass::initCursorState(this, &v25); /*0x7b9fde*/
        WWMouseClass_field_0x2C = (char *)this->WWMouseClass_field_0x2C; /*0x7b9fe8*/
        *(_DWORD *)this->__pad_48 = *inited; /*0x7b9ff0*/
        *(_DWORD *)&this->__pad_48[4] = inited[1]; /*0x7b9ff5*/
        *(_DWORD *)&this->__pad_48[8] = inited[2]; /*0x7b9ffb*/
        *(_DWORD *)&this->__pad_48[12] = inited[3]; /*0x7ba001*/
        v21 = *inited; /*0x7ba006*/
        v22 = inited[1]; /*0x7ba00d*/
        v15 = &v21[(_DWORD)WWMouseClass_field_0x2C]; /*0x7ba014*/
        WWMouseClass_field_0x30 = this->WWMouseClass_field_0x30; /*0x7ba016*/
        v23 = inited[2]; /*0x7ba019*/
        v17 = inited[3]; /*0x7ba01d*/
        v21 = v15; /*0x7ba022*/
        v18 = this->WWMouseClass_field_0x44; /*0x7ba026*/
        v22 = &v22[(_DWORD)WWMouseClass_field_0x30]; /*0x7ba029*/
        v24 = v17; /*0x7ba031*/
        v20 = this->WWMouseClass_field_0x24; /*0x7ba039*/
        v25 = 0; /*0x7ba03a*/
        v26 = 0; /*0x7ba03e*/
        v27 = v23; /*0x7ba042*/
        v28 = v17; /*0x7ba046*/
        (*(void (__thiscall **)(int, char **, int, char **, _DWORD, int))(*(_DWORD *)v18 + 8))( /*0x7ba051*/
          v18,
          &v25,
          v20,
          &v21,
          0,
          1);
      }
      Mouse::DrawCursor((Mouse *)this, (int *)this->WWMouseClass_field_0x24, 0, 0); /*0x7ba05e*/
      ReleaseMutex(hMutex); /*0x7ba06a*/
    }
  }
  return ReleaseMutex(hMutex); /*0x7ba07d*/
}



// ==== 0x007BA090  WWMouseClass::UpdateCursorMovement  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::UpdateCursorMovement(WWMouseClass *this)
{
  int result; // eax
  void *WWMouseClass_field_0x20; // edx
  int v4; // eax
  void *v5; // ecx
  LONG v6; // eax
  LONG v7; // edi
  void *v8; // ebp
  char v9; // bl
  int v10; // eax
  LONG y; // [esp+10h] [ebp-10h] BYREF
  void *WWMouseClass_field_0x1C; // [esp+14h] [ebp-Ch] BYREF
  struct tagPOINT Point; // [esp+18h] [ebp-8h] BYREF

  result = this->WWMouseClass_field_0x24; /*0x7ba096*/
  if ( result ) /*0x7ba09b*/
  {
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7ba0b7*/
      Debug::Log(); /*0x7ba0c8*/
    if ( UI_Update() ) /*0x7ba0d0*/
    {
      WWMouseClass_field_0x20 = this->WWMouseClass_field_0x20; /*0x7ba0dc*/
      WWMouseClass_field_0x1C = this->WWMouseClass_field_0x1C; /*0x7ba0df*/
      y = (LONG)WWMouseClass_field_0x20; /*0x7ba0e3*/
    }
    else
    {
      GetCursorPos(&Point); /*0x7ba0ee*/
      v4 = *(_DWORD *)this->__pad_0; /*0x7ba0fc*/
      WWMouseClass_field_0x1C = (void *)Point.x; /*0x7ba0fe*/
      y = Point.y; /*0x7ba102*/
      (*(void (__thiscall **)(WWMouseClass *, void **, LONG *))(v4 + 68))(this, &WWMouseClass_field_0x1C, &y); /*0x7ba112*/
      v5 = (void *)y; /*0x7ba119*/
      this->WWMouseClass_field_0x1C = WWMouseClass_field_0x1C; /*0x7ba11d*/
      this->WWMouseClass_field_0x20 = v5; /*0x7ba120*/
    }
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this->WWMouseClass_field_0x24 + 104))( /*0x7ba13d*/
           this->WWMouseClass_field_0x24,
           0,
           0)
      || byte_B78170 )
    {
      v7 = y; /*0x7ba16d*/
      v8 = WWMouseClass_field_0x1C; /*0x7ba173*/
      v9 = byte_B78170; /*0x7ba17d*/
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7ba18a*/
        Debug::Log(); /*0x7ba19b*/
      if ( v8 != *(void **)this->__pad_14 || v7 != *(_DWORD *)&this->__pad_14[4] || v9 ) /*0x7ba1af*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 28))(this) /*0x7ba1d2*/
          && !(*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 8))(this)
          && stru_A8EB00.?[412] )
        {
          if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7ba1eb*/
            Debug::Log(); /*0x7ba1fc*/
          WWMouseClass::initSurface(this); /*0x7ba206*/
          ReleaseMutex(hMutex); /*0x7ba212*/
        }
        v10 = *(_DWORD *)this->__pad_0; /*0x7ba218*/
        *(_DWORD *)this->__pad_14 = v8; /*0x7ba21c*/
        *(_DWORD *)&this->__pad_14[4] = v7; /*0x7ba21f*/
        if ( (*(unsigned __int8 (__thiscall **)(WWMouseClass *))(v10 + 28))(this) /*0x7ba23b*/
          && !(*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 8))(this)
          && stru_A8EB00.?[412] )
        {
          if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7ba253*/
            Debug::Log(); /*0x7ba264*/
          WWMouseClass::updateCursorRect(this); /*0x7ba26e*/
          Mouse::DrawCursor((Mouse *)this, (int *)this->WWMouseClass_field_0x24, 0, 0); /*0x7ba27d*/
          ReleaseMutex(hMutex); /*0x7ba289*/
        }
      }
      ReleaseMutex(hMutex); /*0x7ba295*/
      byte_B78170 = 0; /*0x7ba2a3*/
      return ReleaseMutex(hMutex); /*0x7ba2ab*/
    }
    else
    {
      v6 = y; /*0x7ba143*/
      *(_DWORD *)this->__pad_14 = WWMouseClass_field_0x1C; /*0x7ba147*/
      *(_DWORD *)&this->__pad_14[4] = v6; /*0x7ba14a*/
      byte_B78170 = 1; /*0x7ba153*/
      return ReleaseMutex(hMutex); /*0x7ba15b*/
    }
  }
  return result; /*0x7ba162*/
}



// ==== 0x007BA2C0  UI_Helper_7BA2C0  this=-  sig=ida-proto ====
void sub_7BA2C0()
{
  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7ba2d6*/
    Debug::Log(); /*0x7ba2e7*/
}



// ==== 0x007BA2F0  ?__CxxRestoreUnhandledExceptionFilter_YAXXZ  this=-  sig=ida-proto ====
void __cdecl ___CxxRestoreUnhandledExceptionFilter_YAXXZ()
{
  ReleaseMutex(hMutex); /*0x7ba2f6*/
}



// ==== 0x007BA300  Mouse::updateHotspot  this=MouseClass  sig=csp ====
_DWORD *__thiscall WWMouseClass::updateHotspot(Mouse *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &Mouse::`vftable'; /*0x7ba309*/
  if ( (a2 & 1) != 0 ) /*0x7ba30f*/
    __3_YAXPAX_Z(this); /*0x7ba312*/
  return this->__pad_0; /*0x7ba31c*/
}



// ==== 0x007BA320  WWMouseClass::drawCursor  this=WWMouseClass  sig=csp ====
BOOL __thiscall IsRefCountNegative(WWMouseClass *this)
{
  return (int)this->WWMouseClass_field_0xC < 0; /*0x7ba32a*/
}



// ==== 0x007BA330  WWMouseClass::checkCapture  this=WWMouseClass  sig=csp ====
char __thiscall WWMouseClass::checkCapture(WWMouseClass *this)
{
  return this->WWMouseClass_field_0x10; /*0x7ba333*/
}



// ==== 0x007BA340  WWMouseClass::checkRegion  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::checkRegion(WWMouseClass *this)
{
  return (int)this->WWMouseClass_field_0x1C; /*0x7ba343*/
}



// ==== 0x007BA350  WWMouseClass::checkBounds  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::checkBounds(WWMouseClass *this)
{
  return (int)this->WWMouseClass_field_0x20; /*0x7ba353*/
}



// ==== 0x007BA360  WWMouseClass::updatePosition  this=WWMouseClass  sig=csp ====
_DWORD *__thiscall WWMouseClass::updatePosition(WWMouseClass *this, _DWORD *a2)
{
  void *WWMouseClass_field_0x1C; // edx
  void *WWMouseClass_field_0x20; // ecx

  WWMouseClass_field_0x1C = this->WWMouseClass_field_0x1C; /*0x7ba364*/
  WWMouseClass_field_0x20 = this->WWMouseClass_field_0x20; /*0x7ba367*/
  *a2 = WWMouseClass_field_0x1C; /*0x7ba36a*/
  a2[1] = WWMouseClass_field_0x20; /*0x7ba36c*/
  return a2; /*0x7ba36f*/
}



// ==== 0x007BA380  WWMouseClass::checkHotspot  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::checkHotspot(WWMouseClass *this, int a2, int a3)
{
  this->WWMouseClass_field_0x1C = (void *)a2; /*0x7ba388*/
  this->WWMouseClass_field_0x20 = (void *)a3; /*0x7ba38b*/
  return a2; /*0x7ba38e*/
}



// ==== 0x007BA3A0  WWMouseClass::QueryInterface  this=WWMouseClass  sig=csp ====
_DWORD *__thiscall WWMouseClass::QueryInterface(WWMouseClass *this, char a2)
{
  WWMouseClass::loadCursorImages(this); /*0x7ba3a3*/
  if ( (a2 & 1) != 0 ) /*0x7ba3ad*/
    __3_YAXPAX_Z(this); /*0x7ba3b0*/
  return this->__pad_0; /*0x7ba3ba*/
}



// ==== 0x007BA3C0  BufferPipe::processNetworkPacket  this=BufferPipe  sig=csp ====
int __thiscall GameClass::processNetworkPacket(BufferPipe *this, void *Src, signed int Size)
{
  int result; // eax
  int v5; // edx
  int v6; // eax
  signed int v7; // edi
  signed int v8; // eax

  result = 0; /*0x7ba3c4*/
  v5 = this->q00C; /*0x7ba3c6*/
  if ( v5 && Src && Size > 0 ) /*0x7ba3db*/
  {
    v6 = this->q004; /*0x7ba3dd*/
    v7 = Size; /*0x7ba3e3*/
    if ( v6 ) /*0x7ba3e5*/
    {
      v8 = v6 - this->q018; /*0x7ba3ea*/
      v7 = Size; /*0x7ba3ec*/
      if ( Size >= v8 ) /*0x7ba3f0*/
        v7 = v8; /*0x7ba3f2*/
    }
    if ( v7 > 0 ) /*0x7ba3f6*/
      memcpy((void *)(v5 + this->q018), Src, v7); /*0x7ba400*/
    this->q018 += v7; /*0x7ba40d*/
    return v7; /*0x7ba410*/
  }
  return result; /*0x7ba413*/
}



// ==== 0x007BA420  FilePipe::Destructor  this=FilePipe  sig=csp ====
int __thiscall FilePipe::Destructor(Pipe *this)
{
  int Pipe_field_0x0C; // ecx

  Pipe_field_0x0C = this->Pipe_field_0x0C; /*0x7ba423*/
  *(_DWORD *)this->__pad_0 = &FilePipe::`vftable'; /*0x7ba426*/
  if ( Pipe_field_0x0C && this->q004 ) /*0x7ba430*/
  {
    this->q004 = 0; /*0x7ba437*/
    (*(void (__thiscall **)(int))(*(_DWORD *)Pipe_field_0x0C + 52))(Pipe_field_0x0C); /*0x7ba43d*/
    this->Pipe_field_0x0C = 0; /*0x7ba440*/
  }
  return Pipe::Dtor(this); /*0x7ba44e*/
}



// ==== 0x007BA450  FilePipe::Release  this=FilePipe  sig=csp ====
int __thiscall FilePipe::Release(FilePipe *this)
{
  int v2; // eax
  int FilePipe_field_0x0C; // ecx
  int v4; // edi

  v2 = (*(int (__thiscall **)(FilePipe *))(*(_DWORD *)this->__pad_0 + 4))(this); /*0x7ba456*/
  FilePipe_field_0x0C = this->FilePipe_field_0x0C; /*0x7ba459*/
  v4 = v2; /*0x7ba45c*/
  if ( FilePipe_field_0x0C && this->q004 ) /*0x7ba462*/
  {
    this->q004 = 0; /*0x7ba469*/
    (*(void (__thiscall **)(int))(*(_DWORD *)FilePipe_field_0x0C + 52))(FilePipe_field_0x0C); /*0x7ba46f*/
  }
  return v4; /*0x7ba474*/
}



// ==== 0x007BA480  FilePipe::Read  this=FilePipe  sig=csp ====
int __thiscall FilePipe::Read(FilePipe *this, int a2, int a3)
{
  int FilePipe_field_0x0C; // ecx
  int v5; // ecx

  FilePipe_field_0x0C = this->FilePipe_field_0x0C; /*0x7ba485*/
  if ( !FilePipe_field_0x0C || !a2 || a3 <= 0 ) /*0x7ba49a*/
    return 0; /*0x7ba4c5*/
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)FilePipe_field_0x0C + 24))(FilePipe_field_0x0C) ) /*0x7ba49e*/
  {
    v5 = this->FilePipe_field_0x0C; /*0x7ba4a5*/
    this->q004 = 1; /*0x7ba4a8*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 28))(v5, 2); /*0x7ba4b0*/
  }
  return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)this->FilePipe_field_0x0C + 48))( /*0x7ba4bd*/
           this->FilePipe_field_0x0C,
           a2,
           a3);
}



// ==== 0x007BA4D0  BufferStraw::ReadFromBuffer  this=BufferStraw  sig=csp ====
int __thiscall DisplayClass::ReadFromBuffer(BufferStraw *this, void *a2, signed int Size)
{
  int result; // eax
  int v5; // edx
  int v6; // eax
  signed int v7; // edi
  signed int v8; // eax

  result = 0; /*0x7ba4d4*/
  v5 = this->q00C; /*0x7ba4d6*/
  if ( v5 && a2 && Size > 0 ) /*0x7ba4eb*/
  {
    v6 = this->q004; /*0x7ba4ed*/
    v7 = Size; /*0x7ba4f3*/
    if ( v6 ) /*0x7ba4f5*/
    {
      v8 = v6 - this->q018; /*0x7ba4fa*/
      v7 = Size; /*0x7ba4fc*/
      if ( Size >= v8 ) /*0x7ba500*/
        v7 = v8; /*0x7ba502*/
    }
    if ( v7 > 0 ) /*0x7ba506*/
      memcpy(a2, (const void *)(v5 + this->q018), v7); /*0x7ba510*/
    this->q018 += v7; /*0x7ba51d*/
    return v7; /*0x7ba520*/
  }
  return result; /*0x7ba523*/
}



// ==== 0x007BA530  FileStraw::Release  this=FileStraw  sig=csp ====
int __thiscall FileStraw_Destru::Release(FileStraw *this, int a2, int a3)
{
  int v4; // ecx
  int v5; // ecx

  v4 = *((_DWORD *)this + 3); /*0x7ba535*/
  if ( v4 /*0x7ba56e*/
    && a2
    && a3 > 0
    && ((*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 24))(v4)
     || (v5 = *((_DWORD *)this + 3),
         this->q004 = 1,
         (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 20))(v5, 0))
     && (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 3) + 28))(*((_DWORD *)this + 3), 1)) )
  {
    return (*(int (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 3) + 36))(*((_DWORD *)this + 3), a2, a3); /*0x7ba57c*/
  }
  else
  {
    return 0; /*0x7ba587*/
  }
}



// ==== 0x007BA590  FileStraw::Destructor  this=FileStraw  sig=csp ====
int __thiscall FileStraw::Destructor(Straw *this)
{
  int v2; // ecx

  v2 = *((_DWORD *)this + 3); /*0x7ba593*/
  *(_DWORD *)this->__pad_0 = &FileStraw::`vftable'; /*0x7ba596*/
  if ( v2 && this->q004 ) /*0x7ba5a0*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 52))(v2); /*0x7ba5a9*/
    this->q004 = 0; /*0x7ba5ac*/
    *((_DWORD *)this + 3) = 0; /*0x7ba5b0*/
  }
  return Straw::Dtor(this); /*0x7ba5be*/
}



// ==== 0x007BA5C0  sub_7BA5C0  this=-  sig=ida-proto ====
int sub_7BA5C0()
{
  dword_B78178 = 0; /*0x7ba5c2*/
  dword_B7817C = 0; /*0x7ba5c7*/
  dword_B78180 = 0; /*0x7ba5cc*/
  dword_B78184 = 0; /*0x7ba5d1*/
  return 0; /*0x7ba5d6*/
}



// ==== 0x007BA5E0  XSurface::DrawLine  this=XSurface  sig=csp ====
int __thiscall XSurface::DrawLine(XSurface *this, _DWORD *a2, _DWORD *a3, __int16 a4)
{
  int v5; // eax
  int result; // eax
  _BYTE v7[16]; // [esp+4h] [ebp-10h] BYREF

  v5 = (*(int (__thiscall **)(XSurface *, _BYTE *))(*(_DWORD *)this->Surface + 120))(this, v7); /*0x7ba5fe*/
  LOBYTE(result) = XSurface::DrawLineEx(this, v5, a2, a3, a4); /*0x7ba604*/
  return result; /*0x7ba609*/
}



// ==== 0x007BA610  XSurface::DrawLineEx  this=XSurface  sig=csp ====
char __thiscall XSurface::DrawLineEx(XSurface *this, int a2, _DWORD *a3, _DWORD *a4, __int16 a5)
{
  int *v6; // eax
  int *v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ebp
  __int16 *v13; // edi
  int v14; // edx
  unsigned int v15; // esi
  int v16; // eax
  int i; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  int v22; // esi
  int v23; // ebp
  int v24; // eax
  int v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  __int16 v30; // dx
  int v31; // edx
  int v32; // ecx
  __int16 v33; // ax
  int v34; // [esp+10h] [ebp-44h]
  int v35; // [esp+14h] [ebp-40h] BYREF
  int v36; // [esp+18h] [ebp-3Ch]
  int v37; // [esp+1Ch] [ebp-38h] BYREF
  int v38; // [esp+20h] [ebp-34h]
  int v39; // [esp+24h] [ebp-30h] BYREF
  int v40; // [esp+28h] [ebp-2Ch]
  int v41; // [esp+2Ch] [ebp-28h]
  int v42; // [esp+30h] [ebp-24h]
  _BYTE v43[16]; // [esp+34h] [ebp-20h] BYREF
  int v44[4]; // [esp+44h] [ebp-10h] BYREF
  int v45; // [esp+58h] [ebp+4h]
  _DWORD *v46; // [esp+5Ch] [ebp+8h]
  int v47; // [esp+60h] [ebp+Ch]

  v6 = (int *)(*(int (__thiscall **)(XSurface *, _BYTE *))(*(_DWORD *)this->Surface + 120))(this, v43); /*0x7ba622*/
  v7 = ClipRectIntersection(v44, (int *)a2, v6, 0, 0); /*0x7ba632*/
  v39 = *v7; /*0x7ba639*/
  v40 = v7[1]; /*0x7ba640*/
  v41 = v7[2]; /*0x7ba647*/
  v42 = v7[3]; /*0x7ba652*/
  v8 = v40 + a3[1]; /*0x7ba65d*/
  v35 = v39 + *a3; /*0x7ba65f*/
  v36 = v8; /*0x7ba663*/
  v9 = v39 + *a4; /*0x7ba672*/
  v38 = v40 + a4[1]; /*0x7ba674*/
  v37 = v9; /*0x7ba685*/
  if ( !(unsigned __int8)ClipLine(&v35, &v37, &v39) ) /*0x7ba689*/
    return 0; /*0x7ba689*/
  v10 = v35; /*0x7ba696*/
  if ( v35 > v37 ) /*0x7ba6a0*/
  {
    v11 = v36; /*0x7ba6a2*/
    v35 = v37; /*0x7ba6a6*/
    v37 = v10; /*0x7ba6ae*/
    v36 = v38; /*0x7ba6b2*/
    v38 = v11; /*0x7ba6b6*/
  }
  v12 = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 112))(this); /*0x7ba6c7*/
  v46 = (_DWORD *)v12; /*0x7ba6d1*/
  v13 = (__int16 *)(*(int (__thiscall **)(XSurface *, int, int))(*(_DWORD *)this->Surface + 92))(this, v35, v36); /*0x7ba6d8*/
  if ( !v13 ) /*0x7ba6dc*/
    return 0; /*0x7ba8b4*/
  if ( v36 == v38 ) /*0x7ba6ec*/
  {
    if ( v12 == 1 ) /*0x7ba6f1*/
    {
      HIWORD(v14) = HIWORD(v35); /*0x7ba6f7*/
      LOBYTE(v14) = a5; /*0x7ba701*/
      BYTE1(v14) = a5; /*0x7ba704*/
      v15 = v37 - v35 + 1; /*0x7ba706*/
      v16 = v14 << 16; /*0x7ba70a*/
      LOWORD(v16) = v14; /*0x7ba70d*/
      memset32(v13, v16, v15 >> 2); /*0x7ba713*/
      memset(&v13[2 * (v15 >> 2)], a5, v15 & 3); /*0x7ba71a*/
      (*(void (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7ba720*/
      return 1; /*0x7ba72c*/
    }
    for ( i = 0; i <= v37 - v35; ++v13 ) /*0x7ba73b*/
    {
      *v13 = a5; /*0x7ba745*/
      ++i; /*0x7ba750*/
    }
  }
  else if ( v35 == v37 ) /*0x7ba777*/
  {
    if ( v36 <= v38 ) /*0x7ba77b*/
      v19 = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 116))(this); /*0x7ba791*/
    else
      v19 = -(*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 116))(this); /*0x7ba786*/
    v20 = abs32(v38 - v36); /*0x7ba7a0*/
    if ( v20 >= 0 ) /*0x7ba7a2*/
    {
      v21 = v20 + 1; /*0x7ba7a8*/
      do /*0x7ba7be*/
      {
        if ( v12 == 1 ) /*0x7ba7b2*/
          *(_BYTE *)v13 = a5; /*0x7ba7b4*/
        else
          *v13 = a5; /*0x7ba7b8*/
        v13 = (__int16 *)((char *)v13 + v19); /*0x7ba7bb*/
        --v21; /*0x7ba7bd*/
      }
      while ( v21 ); /*0x7ba7be*/
    }
  }
  else
  {
    v22 = v38 - v36; /*0x7ba7d7*/
    v23 = v37 - v35; /*0x7ba7db*/
    v24 = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 116))(this); /*0x7ba7df*/
    v45 = v24; /*0x7ba7e4*/
    if ( v22 < 0 ) /*0x7ba7e8*/
      v45 = -v24; /*0x7ba7ec*/
    v25 = v22; /*0x7ba7f0*/
    v26 = 2 * v23; /*0x7ba7f2*/
    v27 = abs32(v25); /*0x7ba7f9*/
    v47 = 2 * v27; /*0x7ba800*/
    if ( v23 <= v27 ) /*0x7ba804*/
    {
      v31 = 0; /*0x7ba85c*/
      v32 = v26 - v27; /*0x7ba85e*/
      if ( v27 > 0 ) /*0x7ba862*/
      {
        v34 = v27; /*0x7ba864*/
        v33 = a5; /*0x7ba868*/
        do /*0x7ba89c*/
        {
          if ( v46 == (_DWORD *)1 ) /*0x7ba871*/
          {
            *((_BYTE *)v13 + v31) = v33; /*0x7ba873*/
          }
          else
          {
            v13[v31] = v33; /*0x7ba878*/
            v33 = a5; /*0x7ba87c*/
          }
          if ( v32 > 0 ) /*0x7ba882*/
          {
            ++v31; /*0x7ba888*/
            v32 -= v47; /*0x7ba889*/
          }
          v32 += v26; /*0x7ba88f*/
          v13 = (__int16 *)((char *)v13 + v45); /*0x7ba891*/
          --v34; /*0x7ba898*/
        }
        while ( v34 ); /*0x7ba89c*/
      }
    }
    else
    {
      v28 = 0; /*0x7ba808*/
      v29 = 2 * v27 - v23; /*0x7ba80a*/
      if ( v23 > 0 ) /*0x7ba80e*/
      {
        v30 = a5; /*0x7ba814*/
        do /*0x7ba845*/
        {
          if ( v46 == (_DWORD *)1 ) /*0x7ba81d*/
          {
            *((_BYTE *)v13 + v28) = v30; /*0x7ba81f*/
          }
          else
          {
            v13[v28] = v30; /*0x7ba824*/
            v30 = a5; /*0x7ba828*/
          }
          if ( v29 > 0 ) /*0x7ba82e*/
          {
            v13 = (__int16 *)((char *)v13 + v45); /*0x7ba834*/
            v29 -= 2 * v23; /*0x7ba83a*/
          }
          v29 += v47; /*0x7ba840*/
          ++v28; /*0x7ba842*/
        }
        while ( v28 < v23 ); /*0x7ba845*/
      }
    }
  }
  (*(void (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7ba84b*/
  return 1; /*0x7ba723*/
}



// ==== 0x007BA8C0  XSurface::DrawDashedLine  this=XSurface  sig=csp ====
int __thiscall XSurface::DrawDashedLine(XSurface *this, int *a2, int *a3, __int16 a4, int a5, int a6)
{
  int v7; // ebx
  int v8; // edi
  int v9; // ebp
  bool v10; // cc
  signed int v11; // esi
  signed int v12; // eax
  int v13; // esi
  __int16 *v14; // eax
  int v15; // edi
  int v16; // ecx
  int v17; // esi
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // esi
  int v22; // ebp
  int v23; // edi
  int v24; // eax
  int v25; // ebx
  int v26; // eax
  int v27; // ebp
  int v28; // eax
  int v29; // ecx
  int i; // eax
  int v31; // esi
  int v32; // edx
  int v33; // ecx
  int v34; // edi
  int v35; // esi
  int v38; // [esp+14h] [ebp-Ch]
  int v39; // [esp+18h] [ebp-8h]
  int v40; // [esp+1Ch] [ebp-4h]
  int v41; // [esp+24h] [ebp+4h]
  int *v42; // [esp+28h] [ebp+8h]
  __int16 *v43; // [esp+34h] [ebp+14h]

  v7 = *a2; /*0x7ba8cd*/
  v40 = a2[1]; /*0x7ba8cf*/
  v8 = *a3; /*0x7ba8dc*/
  v9 = a3[1]; /*0x7ba8de*/
  v10 = *a2 <= *a3; /*0x7ba8e1*/
  v41 = 1; /*0x7ba8e3*/
  if ( v10 ) /*0x7ba8eb*/
  {
    v13 = a6; /*0x7ba936*/
  }
  else
  {
    v7 = *a3; /*0x7ba8ed*/
    v8 = *a2; /*0x7ba8ef*/
    v9 = a2[1]; /*0x7ba8f3*/
    v40 = a3[1]; /*0x7ba8f8*/
    v11 = abs32(*a3 - *a2); /*0x7ba907*/
    v12 = abs32(v40 - v9) + 1; /*0x7ba90e*/
    if ( v11 < v12 ) /*0x7ba911*/
      v11 = v12; /*0x7ba913*/
    v13 = (a6 + v11) % 16; /*0x7ba927*/
    v41 = -1; /*0x7ba92c*/
  }
  v42 = (int *)(*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 112))(this); /*0x7ba947*/
  v14 = (__int16 *)(*(int (__thiscall **)(XSurface *, int, int))(*(_DWORD *)this->Surface + 92))(this, v7, v40); /*0x7ba94f*/
  v43 = v14; /*0x7ba954*/
  if ( v14 )
  {
    if ( v40 == v9 )
    {
      v15 = v8 - v7; /*0x7ba966*/
      if ( v15 >= 0 )
      {
        v16 = v15 + 1; /*0x7ba972*/
        do
        {
          v17 = v13 + (v13 < 0 ? 0x10 : 0);
          if ( v17 >= 16 ) /*0x7ba983*/
            v17 -= 16; /*0x7ba985*/
          if ( *(_BYTE *)(a5 + v17) ) /*0x7ba988*/
            *v14 = a4; /*0x7ba98e*/
          ++v14; /*0x7ba995*/
          v13 = v41 + v17; /*0x7ba998*/
          --v16; /*0x7ba99a*/
        }
        while ( v16 );
      }
    }
    else if ( v7 == v8 )
    {
      if ( v40 <= v9 ) /*0x7ba9ac*/
        v18 = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 116))(this); /*0x7ba9be*/
      else
        v18 = -(*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 116))(this); /*0x7ba9b5*/
      v19 = abs32(v9 - v40); /*0x7ba9cb*/
      if ( v19 >= 0 )
      {
        v20 = v19 + 1; /*0x7ba9db*/
        do
        {
          v21 = v13 + (v13 < 0 ? 0x10 : 0);
          if ( v21 >= 16 ) /*0x7ba9e6*/
            v21 -= 16; /*0x7ba9e8*/
          if ( *(_BYTE *)(a5 + v21) ) /*0x7ba9eb*/
          {
            if ( v42 == (int *)1 ) /*0x7ba9fc*/
              *(_BYTE *)v43 = a4; /*0x7ba9fe*/
            else
              *v43 = a4; /*0x7baa02*/
          }
          v13 = v41 + v21; /*0x7baa0f*/
          --v20; /*0x7baa11*/
          v43 = (__int16 *)((char *)v43 + v18); /*0x7baa12*/
        }
        while ( v20 );
      }
    }
    else
    {
      v22 = v9 - v40; /*0x7baa1d*/
      v23 = v8 - v7; /*0x7baa23*/
      v24 = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 116))(this); /*0x7baa27*/
      v25 = v24; /*0x7baa2a*/
      v39 = v24; /*0x7baa2e*/
      if ( v22 < 0 ) /*0x7baa32*/
      {
        v25 = -v24; /*0x7baa34*/
        v39 = -v24; /*0x7baa36*/
      }
      v26 = v22; /*0x7baa3a*/
      v27 = 2 * v23; /*0x7baa3c*/
      v28 = abs32(v26); /*0x7baa42*/
      v38 = 2 * v28; /*0x7baa49*/
      if ( v23 <= v28 )
      {
        v32 = 0; /*0x7baabd*/
        v33 = v27 - v28; /*0x7baabf*/
        if ( v28 > 0 )
        {
          v34 = v28; /*0x7baac5*/
          do
          {
            v35 = v13 + (v13 < 0 ? 0x10 : 0);
            if ( v35 >= 16 ) /*0x7baad5*/
              v35 -= 16; /*0x7baad7*/
            if ( *(_BYTE *)(a5 + v35) ) /*0x7baade*/
            {
              if ( v42 == (int *)1 ) /*0x7baaef*/
                *((_BYTE *)v43 + v32) = a4; /*0x7baaf1*/
              else
                v43[v32] = a4; /*0x7baaf6*/
            }
            if ( v33 > 0 ) /*0x7baafc*/
            {
              ++v32; /*0x7bab02*/
              v33 -= v38; /*0x7bab03*/
            }
            v33 += v27; /*0x7bab09*/
            v43 = (__int16 *)((char *)v43 + v39); /*0x7bab0b*/
            v13 = v41 + v35; /*0x7bab13*/
            --v34; /*0x7bab15*/
          }
          while ( v34 );
        }
      }
      else
      {
        v29 = 2 * v28 - v23; /*0x7baa4f*/
        for ( i = 0; i < v23; v13 = v41 + v31 )
        {
          v31 = v13 + (v13 < 0 ? 0x10 : 0);
          if ( v31 >= 16 ) /*0x7baa65*/
            v31 -= 16; /*0x7baa67*/
          if ( *(_BYTE *)(a5 + v31) ) /*0x7baa6e*/
          {
            if ( v42 == (int *)1 ) /*0x7baa79*/
              *((_BYTE *)v43 + i) = a4; /*0x7baa83*/
            else
              v43[i] = a4; /*0x7baa91*/
          }
          if ( v29 > 0 ) /*0x7baa97*/
          {
            v43 = (__int16 *)((char *)v43 + v25); /*0x7baa9f*/
            v29 -= 2 * v23; /*0x7baaa6*/
          }
          v29 += v38; /*0x7baaac*/
          ++i; /*0x7baab2*/
        }
      }
    }
    (*(void (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7bab1e*/
  }
  return v13; /*0x7bab23*/
}



// ==== 0x007BAB30  XSurface::entry_4C_  this=XSurface  sig=csp ====
int __stdcall XSurface::entry_4C_(XSurface *this, int a2, int a3, int a4, int a5, int a6)
{
  return 0; /*0x7bab32*/
}



// ==== 0x007BAB40  XSurface::entry_50_  this=XSurface  sig=csp ====
char __stdcall XSurface::entry_50_(XSurface *this, int a2, int a3, int a4)
{
  return 0; /*0x7bab42*/
}



// ==== 0x007BAB50  XSurface::entry_34_  this=XSurface  sig=csp ====
char __stdcall XSurface::entry_34_(XSurface *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return 0; /*0x7bab52*/
}



// ==== 0x007BAB60  XSurface::entry_38_  this=XSurface  sig=csp ====
char __stdcall XSurface::entry_38_(XSurface *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return 0; /*0x7bab62*/
}



// ==== 0x007BAB70  XSurface::entry_3C_  this=XSurface  sig=csp ====
char __stdcall XSurface::entry_3C_(
        XSurface *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  return 0; /*0x7bab72*/
}



// ==== 0x007BAB80  XSurface::entry_40_  this=XSurface  sig=csp ====
char __stdcall XSurface::entry_40_(XSurface *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return 0; /*0x7bab82*/
}



// ==== 0x007BAB90  XSurface::WalkLine  this=XSurface  sig=csp ====
char __thiscall XSurface::WalkLine(XSurface *this, int a2, _DWORD *a3, _DWORD *a4, void (__thiscall *a5)(int *))
{
  int v5; // eax
  int *v6; // eax
  int *v7; // eax
  int v8; // ecx
  int v9; // eax
  char result; // al
  int v11; // ecx
  int v12; // edi
  int v13; // esi
  int v14; // ebp
  int v15; // edi
  int v16; // ebp
  int v17; // ebx
  int v18; // edi
  int v19; // ebx
  int v20; // esi
  int v21; // eax
  int v22; // esi
  int i; // ebx
  int v24; // esi
  int v25; // edi
  int v26; // [esp+4h] [ebp-44h] BYREF
  int v27; // [esp+8h] [ebp-40h]
  XSurface *v28; // [esp+14h] [ebp-34h]
  int v29; // [esp+18h] [ebp-30h] BYREF
  int v30; // [esp+1Ch] [ebp-2Ch]
  int v31; // [esp+20h] [ebp-28h] BYREF
  int v32; // [esp+24h] [ebp-24h]
  int v33; // [esp+28h] [ebp-20h] BYREF
  int v34; // [esp+2Ch] [ebp-1Ch]
  int v35; // [esp+38h] [ebp-10h] BYREF
  int v36; // [esp+3Ch] [ebp-Ch]
  int v37; // [esp+40h] [ebp-8h]
  int v38; // [esp+44h] [ebp-4h]
  int v39; // [esp+4Ch] [ebp+4h]
  int v40; // [esp+50h] [ebp+8h]
  int v41; // [esp+54h] [ebp+Ch]

  v5 = *(_DWORD *)this->Surface; /*0x7bab93*/
  v28 = this; /*0x7bab9b*/
  v6 = (int *)(*(int (__stdcall **)(int *))(v5 + 120))(&v33); /*0x7bab9f*/
  v7 = ClipRectIntersection(&v26, (int *)a2, v6, 0, 0); /*0x7babaf*/
  v35 = *v7; /*0x7babb6*/
  v36 = v7[1]; /*0x7babbd*/
  v37 = v7[2]; /*0x7babc4*/
  v38 = v7[3]; /*0x7babcf*/
  v8 = v36 + a3[1]; /*0x7babda*/
  v29 = v35 + *a3; /*0x7babdc*/
  v30 = v8; /*0x7babe0*/
  v9 = v35 + *a4; /*0x7babef*/
  v32 = v36 + a4[1]; /*0x7babf1*/
  v31 = v9; /*0x7bac02*/
  result = ClipLine(&v29, &v31, &v35); /*0x7bac06*/
  if ( result ) /*0x7bac0d*/
  {
    v11 = v29; /*0x7bac16*/
    v12 = v31; /*0x7bac1d*/
    if ( v29 <= v31 ) /*0x7bac23*/
    {
      v14 = v30; /*0x7bac45*/
      v13 = v32; /*0x7bac49*/
    }
    else
    {
      v13 = v30; /*0x7bac25*/
      v14 = v32; /*0x7bac29*/
      v11 = v31; /*0x7bac2f*/
      v12 = v29; /*0x7bac31*/
      v29 = v31; /*0x7bac33*/
      v30 = v32; /*0x7bac37*/
      v31 = v12; /*0x7bac3b*/
      v32 = v13; /*0x7bac3f*/
    }
    if ( v14 == v13 ) /*0x7bac4f*/
    {
      v15 = v12 - v11; /*0x7bac51*/
      v16 = 0; /*0x7bac53*/
      if ( v15 >= 0 ) /*0x7bac58*/
      {
        while ( 1 ) /*0x7bac73*/
        {
          v26 = v11 + v16; /*0x7bac73*/
          v27 = v13; /*0x7bac77*/
          a5(&v26); /*0x7bac7b*/
          if ( ++v16 > v15 ) /*0x7bac80*/
            break; /*0x7bac80*/
          v11 = v29; /*0x7bac64*/
          v13 = v32; /*0x7bac68*/
        }
      }
    }
    else if ( v11 == v12 ) /*0x7bac89*/
    {
      v17 = abs32(v14 - v13); /*0x7bac94*/
      if ( v14 <= v13 ) /*0x7bac98*/
        v13 = v14; /*0x7bac9a*/
      v18 = 0; /*0x7bac9c*/
      if ( v17 >= 0 ) /*0x7baca0*/
      {
        while ( 1 ) /*0x7bacb0*/
        {
          v26 = v11; /*0x7bacb0*/
          v27 = v18 + v13; /*0x7bacbb*/
          a5(&v26); /*0x7bacbf*/
          if ( ++v18 > v17 ) /*0x7bacc4*/
            break; /*0x7bacc4*/
          v11 = v29; /*0x7bacac*/
        }
      }
    }
    else
    {
      v39 = v11; /*0x7baccd*/
      v19 = v12 - v11; /*0x7bacd1*/
      v20 = v13 - v14; /*0x7bacd3*/
      v41 = 1; /*0x7bacd7*/
      if ( v20 < 0 ) /*0x7bacdf*/
        v41 = -1; /*0x7bace1*/
      v21 = abs32(v20); /*0x7bacec*/
      v40 = 2 * v19; /*0x7bacf3*/
      v26 = 2 * v21; /*0x7bacfa*/
      if ( v19 <= v21 ) /*0x7bacfe*/
      {
        v24 = v40 - v21; /*0x7bad39*/
        if ( v21 >= 0 ) /*0x7bad3d*/
        {
          v25 = v21 + 1; /*0x7bad43*/
          do /*0x7bad78*/
          {
            v33 = v39; /*0x7bad4e*/
            v34 = v14; /*0x7bad52*/
            a5(&v33); /*0x7bad56*/
            if ( v24 > 0 ) /*0x7bad5a*/
            {
              v24 -= v26; /*0x7bad65*/
              ++v39; /*0x7bad67*/
            }
            v24 += v40; /*0x7bad73*/
            v14 += v41; /*0x7bad75*/
            --v25; /*0x7bad77*/
          }
          while ( v25 ); /*0x7bad78*/
        }
      }
      else
      {
        v22 = 2 * v21 - v19; /*0x7bad00*/
        for ( i = v11; i <= v12; ++i ) /*0x7bad06*/
        {
          v33 = i; /*0x7bad0c*/
          v34 = v14; /*0x7bad10*/
          a5(&v33); /*0x7bad14*/
          if ( v22 > 0 ) /*0x7bad1a*/
          {
            v22 -= v40; /*0x7bad24*/
            v14 += v41; /*0x7bad26*/
          }
          v22 += v26; /*0x7bad2c*/
        }
      }
    }
    (*(void (__thiscall **)(XSurface *))(*(_DWORD *)v28->Surface + 96))(v28); /*0x7bad80*/
    return 1; /*0x7bad86*/
  }
  return result; /*0x7bac0f*/
}



// ==== 0x007BAD90  XSurface::DrawRect  this=XSurface  sig=csp ====
int __thiscall XSurface::DrawRect(XSurface *this, _DWORD *a2, int a3)
{
  int v4; // eax
  int result; // eax
  _BYTE v6[16]; // [esp+4h] [ebp-10h] BYREF

  v4 = (*(int (__thiscall **)(XSurface *, _BYTE *))(*(_DWORD *)this->Surface + 120))(this, v6); /*0x7bada9*/
  LOBYTE(result) = XSurface::DrawRectEx(this, v4, a2, a3); /*0x7badaf*/
  return result; /*0x7badb4*/
}



// ==== 0x007BADC0  XSurface::DrawRectEx  this=XSurface  sig=csp ====
char __thiscall XSurface::DrawRectEx(XSurface *this, int a2, _DWORD *a3, int a4)
{
  int v5; // edx
  int v6; // eax
  int v7; // edi
  _DWORD v9[2]; // [esp+20h] [ebp-20h] BYREF
  _DWORD v10[2]; // [esp+28h] [ebp-18h] BYREF
  _DWORD v11[2]; // [esp+30h] [ebp-10h] BYREF
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
  (*(void (__thiscall **)(XSurface *, int, _DWORD *, _DWORD *, int))(*(_DWORD *)this->Surface + 44))( /*0x7bae17*/
    this,
    a2,
    v9,
    v10,
    a4);
  (*(void (__thiscall **)(XSurface *, int, _DWORD *, int *, int))(*(_DWORD *)this->Surface + 44))( /*0x7bae2a*/
    this,
    a2,
    v9,
    &v12,
    a4);
  (*(void (__thiscall **)(XSurface *, int, _DWORD *, _DWORD *, int))(*(_DWORD *)this->Surface + 44))( /*0x7bae3d*/
    this,
    a2,
    v10,
    v11,
    a4);
  (*(void (__thiscall **)(XSurface *, int, int *, _DWORD *, int))(*(_DWORD *)this->Surface + 44))( /*0x7bae50*/
    this,
    a2,
    &v12,
    v11,
    a4);
  return 1; /*0x7bae53*/
}



// ==== 0x007BAE60  XSurface::GetPixel  this=XSurface  sig=csp ====
int __thiscall XSurface::GetPixel(XSurface *this, _DWORD *a2)
{
  int v3; // ebx
  _WORD *v4; // edi

  v3 = 0; /*0x7bae74*/
  v4 = (_WORD *)(*(int (__thiscall **)(XSurface *, _DWORD, _DWORD))(*(_DWORD *)this->Surface + 92))(this, *a2, a2[1]); /*0x7bae79*/
  if ( v4 ) /*0x7bae7d*/
  {
    if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 112))(this) == 2 ) /*0x7bae89*/
    {
      LOWORD(v3) = *v4; /*0x7bae8d*/
      (*(void (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7bae92*/
      return v3; /*0x7bae9a*/
    }
    v3 = *(unsigned __int8 *)v4; /*0x7baea1*/
    (*(void (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7baea5*/
  }
  return v3; /*0x7bae95*/
}



// ==== 0x007BAEB0  XSurface::SetPixel  this=XSurface  sig=csp ====
int __thiscall XSurface::SetPixel(XSurface *this, _DWORD *a2, __int16 a3)
{
  int result; // eax
  __int16 *v5; // edi

  result = (*(int (__thiscall **)(XSurface *, _DWORD, _DWORD))(*(_DWORD *)this->Surface + 92))(this, *a2, a2[1]); /*0x7baec3*/
  v5 = (__int16 *)result; /*0x7baec6*/
  if ( result ) /*0x7baeca*/
  {
    if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 112))(this) == 2 ) /*0x7baed6*/
      *v5 = a3; /*0x7baedf*/
    else
      *(_BYTE *)v5 = a3; /*0x7baef2*/
    result = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7baee4*/
    LOBYTE(result) = 1; /*0x7baee8*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x7baf03*/
  }
  return result; /*0x7baee7*/
}



// ==== 0x007BAF10  XSurface::GetPixelAtCoords  this=XSurface  sig=csp ====
int __thiscall XSurface::GetPixelAtCoords(XSurface *this, _DWORD *a2, _DWORD *a3)
{
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  _WORD *v7; // esi

  v4 = 0; /*0x7baf19*/
  if ( *a2 >= *a3 && *a2 < *a3 + a3[2] ) /*0x7baf30*/
  {
    v5 = a2[1]; /*0x7baf32*/
    v6 = a3[1]; /*0x7baf35*/
    if ( v5 >= v6 && v5 < v6 + a3[3] ) /*0x7baf43*/
    {
      v7 = (_WORD *)(*(int (__thiscall **)(XSurface *, _DWORD, _DWORD))(*(_DWORD *)this->Surface + 92))( /*0x7baf50*/
                      this,
                      *a2,
                      a2[1]);
      if ( v7 ) /*0x7baf54*/
      {
        if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 112))(this) == 2 ) /*0x7baf60*/
        {
          LOWORD(v4) = *v7; /*0x7baf64*/
          (*(void (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7baf69*/
          return v4; /*0x7baf71*/
        }
        v4 = *(unsigned __int8 *)v7; /*0x7baf78*/
        (*(void (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7baf7c*/
      }
    }
  }
  return v4; /*0x7baf6c*/
}



// ==== 0x007BAF90  XSurface::PutPixel  this=XSurface  sig=csp ====
int __thiscall XSurface::PutPixel(XSurface *this, _DWORD *a2, __int16 a3, _DWORD *a4)
{
  int result; // eax
  int v6; // ecx
  int v7; // edx
  __int16 *v8; // esi

  result = (int)a4; /*0x7baf90*/
  if ( *a2 >= *a4 /*0x7bafd3*/
    && *a2 < *a4 + a4[2]
    && (v6 = a2[1], v7 = a4[1], v6 >= v7)
    && (result = v7 + a4[3], v6 < result)
    && (result = (*(int (__thiscall **)(XSurface *, _DWORD, _DWORD))(*(_DWORD *)this->Surface + 92))(this, *a2, a2[1]),
        (v8 = (__int16 *)result) != 0) )
  {
    if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 112))(this) == 2 ) /*0x7bafdf*/
      *v8 = a3; /*0x7bafe8*/
    else
      *(_BYTE *)v8 = a3; /*0x7baffb*/
    result = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7bafed*/
    LOBYTE(result) = 1; /*0x7baff1*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x7bb00c*/
  }
  return result; /*0x7baff0*/
}



// ==== 0x007BB020  XSurface::FillRect  this=XSurface  sig=csp ====
int __thiscall XSurface::FillRect(XSurface *this, _DWORD *a2, int a3)
{
  int *v4; // eax
  int result; // eax
  _BYTE v6[16]; // [esp+4h] [ebp-10h] BYREF

  v4 = (int *)(*(int (__thiscall **)(XSurface *, _BYTE *))(*(_DWORD *)this->Surface + 120))(this, v6); /*0x7bb032*/
  LOBYTE(result) = XSurface::FillRectEx(this, a2, v4, a3); /*0x7bb03d*/
  return result; /*0x7bb042*/
}



// ==== 0x007BB050  XSurface::FillRectEx  this=XSurface  sig=csp ====
char __thiscall XSurface::FillRectEx(XSurface *this, _DWORD *a2, int *a3, int a4)
{
  XSurface *v4; // edi
  int v5; // eax
  int *v6; // eax
  int *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ebx
  int v11; // ecx
  int v12; // edx
  int *v13; // eax
  _DWORD *v14; // eax
  int v15; // ebx
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // esi
  int v19; // edx
  char v20; // dl
  int v21; // eax
  unsigned int v22; // ecx
  _WORD *v24; // edi
  int i; // ecx
  _DWORD *v26; // eax
  int v27; // ebx
  char v28; // dl
  __int16 v29; // bx
  int v30; // edx
  signed int v31; // ecx
  char *v32; // edi
  _WORD *v33; // eax
  char v34; // dl
  __int16 v35; // bx
  int v36; // edx
  signed int v37; // ecx
  char *v38; // edi
  _WORD *v39; // eax
  bool v40; // zf
  XSurface *v41; // [esp-4h] [ebp-7Ch]
  XSurface *v42; // [esp-4h] [ebp-7Ch]
  int v43[4]; // [esp+Ch] [ebp-6Ch] BYREF
  Rect v44; // [esp+1Ch] [ebp-5Ch] BYREF
  int v45[4]; // [esp+2Ch] [ebp-4Ch] BYREF
  int v46[4]; // [esp+3Ch] [ebp-3Ch] BYREF
  _DWORD v47[2]; // [esp+4Ch] [ebp-2Ch] BYREF
  unsigned int v48; // [esp+54h] [ebp-24h]
  int v49; // [esp+58h] [ebp-20h]
  int v50; // [esp+5Ch] [ebp-1Ch] BYREF
  int v51; // [esp+64h] [ebp-14h] BYREF
  int v52; // [esp+68h] [ebp-10h]
  char *v53; // [esp+6Ch] [ebp-Ch]
  signed int v54; // [esp+70h] [ebp-8h]
  XSurface *v55; // [esp+74h] [ebp-4h]
  _DWORD *v56; // [esp+80h] [ebp+8h]
  _DWORD *v57; // [esp+80h] [ebp+8h]
  int *v58; // [esp+84h] [ebp+Ch]
  int v59; // [esp+88h] [ebp+10h]
  int v60; // [esp+88h] [ebp+10h]

  v4 = this; /*0x7bb05c*/
  v5 = a3[2]; /*0x7bb05e*/
  v55 = this; /*0x7bb061*/
  if ( v5 <= 0 ) /*0x7bb066*/
    return 0; /*0x7bb066*/
  if ( a3[3] <= 0 ) /*0x7bb071*/
    return 0; /*0x7bb071*/
  v6 = (int *)(*(int (__thiscall **)(XSurface *, int *))(*(_DWORD *)this->Surface + 120))(this, v45); /*0x7bb07f*/
  v7 = ClipRectIntersection(&v50, a2, v6, 0, 0); /*0x7bb08f*/
  v46[0] = *v7; /*0x7bb096*/
  v46[1] = v7[1]; /*0x7bb09c*/
  v8 = *a3; /*0x7bb09f*/
  v46[2] = v7[2]; /*0x7bb0a4*/
  v9 = a3[1]; /*0x7bb0a7*/
  v46[3] = v7[3]; /*0x7bb0ad*/
  v10 = a2[1]; /*0x7bb0b2*/
  v51 = v8 + *a2; /*0x7bb0b7*/
  v11 = v9 + v10; /*0x7bb0bd*/
  v12 = a3[2]; /*0x7bb0c0*/
  v52 = v11; /*0x7bb0c3*/
  v13 = Rect::Construct(&v44, &v51, v12, a3[3]); /*0x7bb0cf*/
  v45[0] = *v13; /*0x7bb0d8*/
  v45[1] = v13[1]; /*0x7bb0e0*/
  v45[2] = v13[2]; /*0x7bb0e6*/
  v45[3] = v13[3]; /*0x7bb0f2*/
  v14 = ClipRectIntersection(v43, v46, v45, 0, 0); /*0x7bb0f9*/
  v47[0] = *v14; /*0x7bb100*/
  v47[1] = v14[1]; /*0x7bb106*/
  v15 = v14[2]; /*0x7bb109*/
  v48 = v15; /*0x7bb10c*/
  v16 = v14[3]; /*0x7bb10f*/
  v49 = v16; /*0x7bb114*/
  if ( v15 <= 0 ) /*0x7bb117*/
    return 0; /*0x7bb117*/
  if ( v16 <= 0 ) /*0x7bb11f*/
    return 0; /*0x7bb11f*/
  v56 = (_DWORD *)v16; /*0x7bb125*/
  v58 = (int *)(*(int (__thiscall **)(XSurface *))(*(_DWORD *)v4->Surface + 116))(v4); /*0x7bb132*/
  v17 = CellStruct::Copy((CellStruct *)v47, &v51); /*0x7bb139*/
  v18 = (*(int (__thiscall **)(XSurface *, _DWORD, _DWORD))(*(_DWORD *)v4->Surface + 92))(v4, *v17, v17[1]); /*0x7bb154*/
  v53 = (char *)v18; /*0x7bb158*/
  if ( !v18 ) /*0x7bb15b*/
    return 0; /*0x7bb333*/
  if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)v4->Surface + 112))(v4) == 1 ) /*0x7bb16b*/
  {
    v57 = 0; /*0x7bb170*/
    if ( v49 > 0 ) /*0x7bb179*/
    {
      do /*0x7bb1b2*/
      {
        LOBYTE(v15) = a4; /*0x7bb185*/
        v20 = v48; /*0x7bb187*/
        BYTE1(v15) = a4; /*0x7bb189*/
        v21 = v15 << 16; /*0x7bb18f*/
        LOWORD(v21) = v15; /*0x7bb192*/
        v22 = v48 >> 2; /*0x7bb195*/
        memset32((void *)v18, v21, v48 >> 2); /*0x7bb198*/
        memset((void *)(v18 + 4 * v22), a4, v20 & 3); /*0x7bb19f*/
        v18 += (int)v58; /*0x7bb1aa*/
        v57 = (_DWORD *)((char *)v57 + 1); /*0x7bb1af*/
      }
      while ( (int)v57 < v49 ); /*0x7bb1b2*/
LABEL_9:
      (*(void (__thiscall **)(XSurface *))(*(_DWORD *)v55->Surface + 96))(v55); /*0x7bb1b4*/
      return 1; /*0x7bb1c6*/
    }
  }
  else if ( (v18 & 3) != 0 ) /*0x7bb1d1*/
  {
    if ( (v18 & 3) == 2 ) /*0x7bb1da*/
    {
      if ( v15 > 1 ) /*0x7bb22f*/
      {
        v27 = v15 - 1; /*0x7bb262*/
        v28 = v27; /*0x7bb263*/
        v54 = v27 >> 1; /*0x7bb267*/
        v29 = a4; /*0x7bb26a*/
        v30 = v28 & 1; /*0x7bb26f*/
        v53 = (char *)(a4 | (a4 << 16)); /*0x7bb277*/
        v59 = (int)v56; /*0x7bb285*/
        do /*0x7bb2b8*/
        {
          *(_WORD *)v18 = v29; /*0x7bb28b*/
          v41 = v4; /*0x7bb291*/
          v31 = v54; /*0x7bb292*/
          v32 = (char *)(v18 + 2); /*0x7bb295*/
          if ( v54 > 0 ) /*0x7bb29b*/
          {
            memset32(v32, (int)v53, v54); /*0x7bb2a0*/
            v32 += 4 * v31; /*0x7bb2a0*/
          }
          v33 = v32; /*0x7bb2a2*/
          v4 = v41; /*0x7bb2a4*/
          if ( v30 ) /*0x7bb2a7*/
            *v33 = v29; /*0x7bb2a9*/
          v18 += (int)v58; /*0x7bb2b2*/
          --v59; /*0x7bb2b5*/
        }
        while ( v59 ); /*0x7bb2b8*/
        goto LABEL_9; /*0x7bb2b8*/
      }
      v26 = v56; /*0x7bb237*/
      do /*0x7bb24e*/
      {
        *(_WORD *)v18 = a4; /*0x7bb248*/
        v18 += (int)v58; /*0x7bb24b*/
        v26 = (_DWORD *)((char *)v26 - 1); /*0x7bb24d*/
      }
      while ( v26 ); /*0x7bb24e*/
    }
    else
    {
      do /*0x7bb218*/
      {
        LOWORD(v19) = a4; /*0x7bb1f3*/
        v19 <<= 16; /*0x7bb1f8*/
        LOWORD(v19) = a4; /*0x7bb1fb*/
        memset32((void *)v18, v19, (unsigned int)v15 >> 1); /*0x7bb202*/
        v24 = (_WORD *)(v18 + 4 * ((unsigned int)v15 >> 1)); /*0x7bb202*/
        for ( i = v15 & 1; i; --i ) /*0x7bb204*/
          *v24++ = a4; /*0x7bb206*/
        v4 = v55; /*0x7bb209*/
        v18 += (int)v58; /*0x7bb212*/
        v56 = (_DWORD *)((char *)v56 - 1); /*0x7bb215*/
      }
      while ( v56 ); /*0x7bb218*/
    }
  }
  else
  {
    v34 = v15; /*0x7bb2cf*/
    v54 = v15 >> 1; /*0x7bb2d3*/
    v35 = a4; /*0x7bb2d6*/
    v36 = v34 & 1; /*0x7bb2db*/
    v52 = a4 | (a4 << 16); /*0x7bb2e3*/
    v60 = (int)v56; /*0x7bb2ed*/
    do /*0x7bb31a*/
    {
      v42 = v4; /*0x7bb2f0*/
      v37 = v54; /*0x7bb2f1*/
      v38 = v53; /*0x7bb2f4*/
      if ( v54 > 0 ) /*0x7bb2fa*/
      {
        memset32(v53, v52, v54); /*0x7bb2ff*/
        v38 += 4 * v37; /*0x7bb2ff*/
      }
      v39 = v38; /*0x7bb301*/
      v4 = v42; /*0x7bb303*/
      if ( v36 ) /*0x7bb306*/
        *v39 = v35; /*0x7bb308*/
      v18 += (int)v58; /*0x7bb311*/
      v40 = v60 == 1; /*0x7bb313*/
      v53 = (char *)v18; /*0x7bb314*/
      --v60; /*0x7bb317*/
    }
    while ( !v40 ); /*0x7bb31a*/
    v4 = v55; /*0x7bb31c*/
  }
  (*(void (__thiscall **)(XSurface *))(*(_DWORD *)v4->Surface + 96))(v4); /*0x7bb21e*/
  return 1; /*0x7bb1c0*/
}



// ==== 0x007BB340  XSurface::entry_1C_  this=XSurface  sig=csp ====
char __stdcall XSurface::entry_1C_(XSurface *this, int a2, int a3)
{
  return 0; /*0x7bb342*/
}



// ==== 0x007BB350  XSurface::DrawEllipseOutline  this=XSurface  sig=csp ====
int __thiscall XSurface::DrawEllipseOutline(
        XSurface *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v17; // ecx
  int v18; // ebp
  int v19; // edi
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  int v28; // ebp
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // ebp
  int v33; // esi
  int v34; // edx
  int v35; // edi
  int v36; // ecx
  int v37; // edi
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  _WORD *v42; // [esp+28h] [ebp-38h]
  _WORD *v43; // [esp+28h] [ebp-38h]
  _WORD *v44; // [esp+2Ch] [ebp-34h]
  _WORD *v45; // [esp+2Ch] [ebp-34h]
  int v46; // [esp+30h] [ebp-30h]
  int v47; // [esp+30h] [ebp-30h]
  int v48; // [esp+34h] [ebp-2Ch]
  int v49; // [esp+34h] [ebp-2Ch]
  int v50; // [esp+38h] [ebp-28h]
  int v51; // [esp+3Ch] [ebp-24h]
  int v52; // [esp+3Ch] [ebp-24h]
  int v53; // [esp+40h] [ebp-20h]
  int v54; // [esp+44h] [ebp-1Ch]
  int v56; // [esp+4Ch] [ebp-14h]
  int v57; // [esp+50h] [ebp-10h] BYREF
  int v58; // [esp+54h] [ebp-Ch]
  int v59; // [esp+58h] [ebp-8h] BYREF
  int v60; // [esp+5Ch] [ebp-4h]
  _WORD *v61; // [esp+6Ch] [ebp+Ch]
  _WORD *v62; // [esp+6Ch] [ebp+Ch]
  int v63; // [esp+70h] [ebp+10h]
  _WORD *v64; // [esp+70h] [ebp+10h]
  _WORD *v65; // [esp+70h] [ebp+10h]

  v54 = (*(int (__fastcall **)(XSurface *))(*(_DWORD *)this->Surface + 116))(this) >> 1; /*0x7bb374*/
  v12 = a3 + a5; /*0x7bb378*/
  v63 = a3 + a5; /*0x7bb37d*/
  if ( a2 >= a6 && a2 < a6 + a8 && v12 >= a7 && v12 < a9 + a7 ) /*0x7bb39d*/
  {
    v58 = v12; /*0x7bb3a3*/
    v13 = *(_DWORD *)this->Surface; /*0x7bb3a7*/
    v57 = a2; /*0x7bb3b1*/
    (*(void (__thiscall **)(XSurface *, int *, int))(v13 + 36))(this, &v57, a10); /*0x7bb3b5*/
  }
  v14 = a3 - a5; /*0x7bb3bc*/
  v51 = a3 - a5; /*0x7bb3c0*/
  if ( a2 >= a6 && a2 < a6 + a8 && v14 >= a7 && v14 < a9 + a7 ) /*0x7bb3e0*/
  {
    v58 = a3 - a5; /*0x7bb3e6*/
    v15 = *(_DWORD *)this->Surface; /*0x7bb3ea*/
    v57 = a2; /*0x7bb3f4*/
    (*(void (__thiscall **)(XSurface *, int *, int))(v15 + 36))(this, &v57, a10); /*0x7bb3f8*/
  }
  v53 = a5 * a5; /*0x7bb409*/
  v17 = a5 * a4 * a4; /*0x7bb40f*/
  v56 = a4 * a4; /*0x7bb412*/
  v58 = a5; /*0x7bb416*/
  v48 = 0; /*0x7bb41d*/
  v46 = 2 * v17; /*0x7bb425*/
  v18 = a4 * a4 / 4 - v17; /*0x7bb438*/
  v19 = (*(int (__thiscall **)(XSurface *, _DWORD, _DWORD))(*(_DWORD *)this->Surface + 92))(this, 0, 0); /*0x7bb449*/
  v50 = a2; /*0x7bb44f*/
  v20 = v54 * v63; /*0x7bb453*/
  v64 = (_WORD *)(v19 + 2 * (v54 * v63 + a2)); /*0x7bb45c*/
  v21 = v54 * v51; /*0x7bb464*/
  v52 = a2; /*0x7bb467*/
  v61 = (_WORD *)(v19 + 2 * (a2 + v21)); /*0x7bb478*/
  v42 = v61; /*0x7bb47f*/
  v44 = (_WORD *)(v19 + 2 * (a2 + v20)); /*0x7bb483*/
  while ( 1 ) /*0x7bb491*/
  {
    v18 += v53 + v48; /*0x7bb491*/
    if ( v18 < 0 ) /*0x7bb493*/
    {
      v22 = v46; /*0x7bb4e2*/
    }
    else
    {
      v22 = v46 - 2 * v56; /*0x7bb49f*/
      v18 -= v22; /*0x7bb4aa*/
      v46 = v22; /*0x7bb4ad*/
      --v58; /*0x7bb4b1*/
      v64 -= v54; /*0x7bb4be*/
      v61 += v54; /*0x7bb4c8*/
      v42 += v54; /*0x7bb4d2*/
      v44 -= v54; /*0x7bb4dc*/
    }
    v48 += 2 * v53; /*0x7bb4f6*/
    ++v52; /*0x7bb4fa*/
    --v50; /*0x7bb503*/
    ++v64; /*0x7bb50e*/
    --v61; /*0x7bb519*/
    ++v42; /*0x7bb524*/
    --v44; /*0x7bb531*/
    if ( v48 >= v22 ) /*0x7bb535*/
      break; /*0x7bb535*/
    v23 = a6; /*0x7bb543*/
    v60 = v58 + a3; /*0x7bb54d*/
    if ( v52 >= a6 && v52 < a6 + a8 && v60 >= a7 && v60 < a9 + a7 ) /*0x7bb577*/
      *v64 = a10; /*0x7bb582*/
    v24 = a3 - v58; /*0x7bb58d*/
    if ( v50 >= a6 ) /*0x7bb595*/
    {
      if ( v50 < a6 + a8 && v24 >= a7 && v24 < a9 + a7 ) /*0x7bb5b5*/
        *v61 = a10; /*0x7bb5c0*/
      v23 = a6; /*0x7bb5c3*/
    }
    v25 = a3 - v58; /*0x7bb5cf*/
    if ( v52 >= v23 ) /*0x7bb5d7*/
    {
      if ( v52 < v23 + a8 && v25 >= a7 && v25 < a9 + a7 ) /*0x7bb5f7*/
        *v42 = a10; /*0x7bb602*/
      v23 = a6; /*0x7bb605*/
    }
    v26 = a3 + v58; /*0x7bb611*/
    if ( v50 >= v23 && v50 < a6 + a8 && v26 >= a7 && v26 < a9 + a7 ) /*0x7bb64b*/
      *v44 = a10; /*0x7bb65a*/
  }
  v27 = a6; /*0x7bb662*/
  if ( a2 + a4 < a6 ) /*0x7bb66f*/
  {
    v28 = a3; /*0x7bb7bd*/
  }
  else
  {
    v28 = a3; /*0x7bb679*/
    if ( a2 + a4 < a6 + a8 && a3 >= a7 ) /*0x7bb689*/
    {
      if ( a3 < a9 + a7 ) /*0x7bb693*/
      {
        v59 = a2 + a4; /*0x7bb699*/
        v60 = a3; /*0x7bb6a1*/
        (*(void (__thiscall **)(XSurface *, int *, int))(*(_DWORD *)this->Surface + 36))(this, &v59, a10); /*0x7bb6ad*/
      }
      v27 = a6; /*0x7bb6b0*/
    }
  }
  if ( a2 - a4 >= v27 && a2 - a4 < v27 + a8 && v28 >= a7 && v28 < a9 + a7 ) /*0x7bb6da*/
  {
    v59 = a2 - a4; /*0x7bb6e5*/
    v29 = *(_DWORD *)this->Surface; /*0x7bb6e9*/
    v60 = v28; /*0x7bb6f0*/
    (*(void (__thiscall **)(XSurface *, int *, int))(v29 + 36))(this, &v59, a10); /*0x7bb6f4*/
  }
  v58 = 0; /*0x7bb700*/
  v47 = 0; /*0x7bb704*/
  v49 = 2 * a4 * v53; /*0x7bb70f*/
  v57 = a4; /*0x7bb713*/
  v30 = v53 / 4 - a4 * v53; /*0x7bb720*/
  v31 = v54 * v28 - a4; /*0x7bb72c*/
  v65 = (_WORD *)(v19 + 2 * (a4 + v54 * v28 + a2)); /*0x7bb733*/
  v32 = v54 * v28; /*0x7bb73e*/
  v33 = a2 - a4; /*0x7bb74e*/
  v43 = (_WORD *)(v19 + 2 * (a4 + a2 + v32)); /*0x7bb75b*/
  v34 = a2 + a4; /*0x7bb75f*/
  v62 = (_WORD *)(v19 + 2 * (a2 + v32 - a4)); /*0x7bb763*/
  v45 = (_WORD *)(v19 + 2 * (a2 + v31)); /*0x7bb767*/
  while ( 1 ) /*0x7bb775*/
  {
    v30 += v56 + v47; /*0x7bb775*/
    if ( v30 < 0 ) /*0x7bb777*/
    {
      v35 = v49; /*0x7bb7c6*/
    }
    else
    {
      v35 = v49 - 2 * v53; /*0x7bb783*/
      v30 -= v35; /*0x7bb78e*/
      --v65; /*0x7bb790*/
      --v34; /*0x7bb79b*/
      ++v62; /*0x7bb79c*/
      ++v33; /*0x7bb7a7*/
      --v43; /*0x7bb7a8*/
      v49 = v35; /*0x7bb7b3*/
      ++v45; /*0x7bb7b7*/
    }
    v47 += 2 * v56; /*0x7bb7d6*/
    ++v58; /*0x7bb7df*/
    v65 += v54; /*0x7bb7eb*/
    v62 -= v54; /*0x7bb7f5*/
    v43 -= v54; /*0x7bb7ff*/
    v45 += v54; /*0x7bb80f*/
    if ( v47 > v35 ) /*0x7bb813*/
      break; /*0x7bb813*/
    v36 = v58 + a3; /*0x7bb821*/
    if ( v34 < a6 || v34 >= a6 + a8 ) /*0x7bb82f*/
    {
      v37 = a7; /*0x7bb852*/
    }
    else
    {
      v37 = a7; /*0x7bb831*/
      if ( v36 >= a7 && v36 < a7 + a9 ) /*0x7bb841*/
        *v65 = a10; /*0x7bb84c*/
    }
    v38 = a3 - v58; /*0x7bb85e*/
    if ( v33 >= a6 && v33 < a6 + a8 && v38 >= v37 && v38 < v37 + a9 ) /*0x7bb87a*/
      *v62 = a10; /*0x7bb885*/
    v39 = a3 - v58; /*0x7bb891*/
    if ( v34 >= a6 && v34 < a6 + a8 && v39 >= v37 && v39 < v37 + a9 ) /*0x7bb8ad*/
      *v43 = a10; /*0x7bb8b8*/
    v40 = a3 + v58; /*0x7bb8c4*/
    if ( v33 >= a6 && v33 < a6 + a8 && v40 >= v37 && v40 < a9 + v37 ) /*0x7bb8ec*/
      *v45 = a10; /*0x7bb8fb*/
  }
  return (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7bb90c*/
}



// ==== 0x007BB920  Draw::Ellipse  this=Draw  sig=csp ====
int __thiscall Draw::Ellipse(Draw *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // ebp
  int v11; // ebx
  int v12; // edi
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int Draw_field_00; // edx
  int v17; // eax
  int v18; // edi
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int result; // eax
  int v25; // [esp+40h] [ebp-48h]
  int v26; // [esp+44h] [ebp-44h]
  int v27; // [esp+48h] [ebp-40h]
  int v28; // [esp+4Ch] [ebp-3Ch]
  _DWORD v29[2]; // [esp+50h] [ebp-38h] BYREF
  _DWORD v30[2]; // [esp+58h] [ebp-30h] BYREF
  _DWORD v31[2]; // [esp+60h] [ebp-28h] BYREF
  _DWORD v32[2]; // [esp+68h] [ebp-20h] BYREF
  _DWORD v33[2]; // [esp+70h] [ebp-18h] BYREF
  _DWORD v34[2]; // [esp+78h] [ebp-10h] BYREF
  _DWORD v35[2]; // [esp+80h] [ebp-8h] BYREF

  v10 = a3; /*0x7bb92c*/
  v11 = a2; /*0x7bb933*/
  v27 = a4; /*0x7bb943*/
  v12 = 0; /*0x7bb947*/
  v26 = 3 - 2 * a4; /*0x7bb949*/
  v13 = -a4; /*0x7bb94d*/
  v14 = a3 + a4; /*0x7bb94f*/
  v28 = 0; /*0x7bb951*/
  a4 = -a4; /*0x7bb955*/
  v25 = v14; /*0x7bb959*/
  while ( 1 ) /*0x7bb970*/
  {
    a3 = v12 + v10; /*0x7bb970*/
    a2 = v11 + v27; /*0x7bb974*/
    v15 = v13 + v11; /*0x7bb978*/
    Draw_field_00 = this->Draw_field_00; /*0x7bb97b*/
    v29[1] = v12 + v10; /*0x7bb97d*/
    v29[0] = v15; /*0x7bb985*/
    (*(void (__thiscall **)(Draw *, int *, _DWORD *, int *, int))(Draw_field_00 + 44))(this, &a5, v29, &a2, a9); /*0x7bb99b*/
    v17 = v12 + v11; /*0x7bb9a2*/
    v18 = -v12; /*0x7bb9a5*/
    v30[0] = v17; /*0x7bb9a7*/
    v30[1] = v25; /*0x7bb9b2*/
    v31[0] = v18 + v11; /*0x7bb9b6*/
    v19 = this->Draw_field_00; /*0x7bb9bc*/
    v31[1] = v25; /*0x7bb9be*/
    (*(void (__thiscall **)(Draw *, int *, _DWORD *, _DWORD *, int))(v19 + 44))(this, &a5, v31, v30, a9); /*0x7bb9d4*/
    v32[1] = v18 + v10; /*0x7bb9de*/
    v20 = this->Draw_field_00; /*0x7bb9e8*/
    v32[0] = v11 + v27; /*0x7bb9ea*/
    v33[1] = v18 + v10; /*0x7bb9f4*/
    v33[0] = v11 + a4; /*0x7bb9f8*/
    (*(void (__thiscall **)(Draw *, int *, _DWORD *, _DWORD *, int))(v20 + 44))(this, &a5, v33, v32, a9); /*0x7bba12*/
    v21 = this->Draw_field_00; /*0x7bba24*/
    v34[1] = a4 + v10; /*0x7bba26*/
    v35[1] = a4 + v10; /*0x7bba2a*/
    v34[0] = v11 + v28; /*0x7bba32*/
    v35[0] = v11 + v18; /*0x7bba48*/
    (*(void (__thiscall **)(Draw *, int *, _DWORD *, _DWORD *, int))(v21 + 44))(this, &a5, v35, v34, a9); /*0x7bba4c*/
    if ( v26 >= 0 ) /*0x7bba59*/
    {
      v22 = v28 - v27--; /*0x7bba69*/
      v26 += 4 * v22 + 10; /*0x7bba79*/
      --v25; /*0x7bba82*/
      ++a4; /*0x7bba86*/
    }
    else
    {
      v26 += 4 * v28 + 6; /*0x7bba5f*/
    }
    result = v28 + 1; /*0x7bba92*/
    if ( v27 < ++v28 ) /*0x7bba93*/
      break; /*0x7bba99*/
    v12 = v28; /*0x7bb95f*/
    v13 = a4; /*0x7bb963*/
  }
  return result; /*0x7bba9f*/
}



// ==== 0x007BBAB0  XSurface::Fill  this=XSurface  sig=csp ====
int __thiscall XSurface::Fill(XSurface *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  _BYTE v7[20]; // [esp+8h] [ebp-20h] BYREF
  _BYTE v8[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v3 = *(_DWORD *)this->Surface; /*0x7bbabf*/
  v4 = (*(int (__thiscall **)(XSurface *, _BYTE *, int))(*(_DWORD *)this->Surface + 120))(this, v7, a2); /*0x7bbac5*/
  v5 = (*(int (__thiscall **)(XSurface *, _BYTE *, int))(*(_DWORD *)this->Surface + 120))(this, v8, v4); /*0x7bbad2*/
  return (*(int (__thiscall **)(XSurface *, int))(v3 + 16))(this, v5); /*0x7bbadb*/
}



// ==== 0x007BBAF0  XSurface::BlitWhole  this=XSurface  sig=csp ====
int __thiscall XSurface::BlitWhole(XSurface *this, int *a2, int a3, int a4)
{
  int *v5; // eax
  int v6; // edx
  int v7; // eax
  int *v8; // eax
  int v9; // edx
  int v10; // eax
  int v12; // [esp+Ch] [ebp-30h] BYREF
  int v13; // [esp+10h] [ebp-2Ch]
  int v14; // [esp+14h] [ebp-28h]
  int v15; // [esp+18h] [ebp-24h]
  int v16; // [esp+1Ch] [ebp-20h] BYREF
  int v17; // [esp+20h] [ebp-1Ch]
  int v18; // [esp+24h] [ebp-18h]
  int v19; // [esp+28h] [ebp-14h]
  _BYTE v20[16]; // [esp+2Ch] [ebp-10h] BYREF

  v5 = (int *)(*(int (__thiscall **)(XSurface *, _BYTE *))(*(_DWORD *)this->Surface + 120))(this, v20); /*0x7bbb01*/
  v16 = *v5; /*0x7bbb0a*/
  v17 = v5[1]; /*0x7bbb13*/
  v18 = v5[2]; /*0x7bbb1c*/
  v6 = *a2; /*0x7bbb20*/
  v7 = v5[3]; /*0x7bbb22*/
  v16 = 0; /*0x7bbb25*/
  v19 = v7; /*0x7bbb29*/
  v17 = 0; /*0x7bbb32*/
  v8 = (int *)(*(int (__thiscall **)(int *, _BYTE *))(v6 + 120))(a2, v20); /*0x7bbb36*/
  v12 = *v8; /*0x7bbb3b*/
  v13 = v8[1]; /*0x7bbb42*/
  v14 = v8[2]; /*0x7bbb49*/
  v9 = v8[3]; /*0x7bbb51*/
  v10 = *(_DWORD *)this->Surface; /*0x7bbb54*/
  v15 = v9; /*0x7bbb56*/
  v12 = 0; /*0x7bbb6d*/
  v13 = 0; /*0x7bbb71*/
  return (*(int (__thiscall **)(XSurface *, int *, int *, int *, int, int))(v10 + 8))(this, &v16, a2, &v12, a3, a4); /*0x7bbb78*/
}



// ==== 0x007BBB90  XSurface::BlitPart  this=XSurface  sig=csp ====
char __thiscall XSurface::BlitPart(XSurface *this, void **a2, void **a3, void **a4, void **a5, int a6)
{
  void **v6; // edi
  int v8; // ebx
  int v9; // eax
  int v10; // edx
  int v12[4]; // [esp+Ch] [ebp-40h] BYREF
  int v13[4]; // [esp+1Ch] [ebp-30h] BYREF
  _BYTE v14[16]; // [esp+2Ch] [ebp-20h] BYREF
  _BYTE v15[16]; // [esp+3Ch] [ebp-10h] BYREF

  v6 = a3; /*0x7bbb96*/
  v8 = (*((int (__thiscall **)(void **, _BYTE *))*a3 + 30))(a3, v14); /*0x7bbbaa*/
  v9 = (*(int (__thiscall **)(XSurface *, _BYTE *))(*(_DWORD *)this->Surface + 120))(this, v15); /*0x7bbbb3*/
  v13[0] = (int)*a2; /*0x7bbbbd*/
  v13[1] = (int)a2[1]; /*0x7bbbc4*/
  v13[2] = (int)a2[2]; /*0x7bbbcb*/
  v13[3] = (int)a2[3]; /*0x7bbbd6*/
  v12[0] = (int)*a4; /*0x7bbbdc*/
  v12[1] = (int)a4[1]; /*0x7bbbe3*/
  v12[2] = (int)a4[2]; /*0x7bbbea*/
  v12[3] = (int)a4[3]; /*0x7bbbf6*/
  if ( !(unsigned __int8)IntersectSurfaceRects(v13, v9, v12, v8) ) /*0x7bbc00*/
    return 0; /*0x7bbcda*/
  v10 = *(_DWORD *)this->Surface; /*0x7bbc11*/
  if ( (_BYTE)a5 ) /*0x7bbc17*/
  {
    if ( (*(int (__thiscall **)(XSurface *))(v10 + 112))(this) == 1 ) /*0x7bbc1f*/
    {
      a5 = &BlitTrans<unsigned char>::`vftable'; /*0x7bbc3d*/
      return BlitterCopySimpleSHP((int *)this->Surface, v13, (int)v6, (int)v12, (int *)&a5, 0, 3, 1000, 0); /*0x7bbc45*/
    }
    else
    {
      a3 = &BlitTrans<unsigned short>::`vftable'; /*0x7bbc5c*/
      return BlitterCopySimpleSHP((int *)this->Surface, v13, (int)v6, (int)v12, (int *)&a3, 0, 3, 1000, 0); /*0x7bbc6a*/
    }
  }
  else if ( (*(int (__thiscall **)(XSurface *))(v10 + 112))(this) == 1 ) /*0x7bbc72*/
  {
    a2 = &BlitPlain<unsigned char>::`vftable'; /*0x7bbc90*/
    return BlitterCopySimpleSHP((int *)this->Surface, v13, (int)v6, (int)v12, (int *)&a2, 0, 3, 1000, 0); /*0x7bbc98*/
  }
  else
  {
    a4 = &BlitPlain<unsigned short>::`vftable'; /*0x7bbcaf*/
    return BlitterCopySimpleSHP((int *)this->Surface, v13, (int)v6, (int)v12, (int *)&a4, 0, 3, 1000, 0); /*0x7bbcca*/
  }
}



// ==== 0x007BBCF0  XSurface::Blit  this=XSurface  sig=csp ====
char __thiscall XSurface::Blit(XSurface *this, int a2, void **a3, int a4, int a5, _DWORD *a6, void **a7, int a8)
{
  int v10[4]; // [esp+4h] [ebp-20h] BYREF
  int v11[4]; // [esp+14h] [ebp-10h] BYREF

  v11[0] = (int)*a3; /*0x7bbcfc*/
  v11[1] = (int)a3[1]; /*0x7bbd03*/
  v11[2] = (int)a3[2]; /*0x7bbd0a*/
  v11[3] = (int)a3[3]; /*0x7bbd15*/
  v10[0] = *a6; /*0x7bbd1b*/
  v10[1] = a6[1]; /*0x7bbd22*/
  v10[2] = a6[2]; /*0x7bbd29*/
  v10[3] = a6[3]; /*0x7bbd39*/
  if ( !(unsigned __int8)IntersectSurfaceRects(v11, a2, v10, a5) ) /*0x7bbd46*/
    return 0; /*0x7bbe0d*/
  if ( (_BYTE)a7 ) /*0x7bbd59*/
  {
    if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 112))(this) == 1 ) /*0x7bbd65*/
    {
      a7 = &BlitTrans<unsigned char>::`vftable'; /*0x7bbd70*/
      return BlitterCopySimpleSHP((int *)this->Surface, v11, a4, (int)v10, (int *)&a7, 0, 3, 1000, 0); /*0x7bbd7e*/
    }
    else
    {
      a3 = &BlitTrans<unsigned short>::`vftable'; /*0x7bbd89*/
      return BlitterCopySimpleSHP((int *)this->Surface, v11, a4, (int)v10, (int *)&a3, 0, 3, 1000, 0); /*0x7bbda8*/
    }
  }
  else if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 112))(this) == 1 ) /*0x7bbdbe*/
  {
    a7 = &BlitPlain<unsigned char>::`vftable'; /*0x7bbdc9*/
    return BlitterCopySimpleSHP((int *)this->Surface, v11, a4, (int)v10, (int *)&a7, 0, 3, 1000, 0); /*0x7bbdd7*/
  }
  else
  {
    a3 = &BlitPlain<unsigned short>::`vftable'; /*0x7bbde2*/
    return BlitterCopySimpleSHP((int *)this->Surface, v11, a4, (int)v10, (int *)&a3, 0, 3, 1000, 0); /*0x7bbe01*/
  }
}



// ==== 0x007BBE20  IntersectSurfaceRects  this=IUnknown  sig=csp ====
int __fastcall IntersectSurfaceRects(int *a1, int a2, int *a3, int a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int *v20; // eax
  int *v21; // eax
  _DWORD v23[4]; // [esp+Ch] [ebp-10h] BYREF

  v5 = a3[2]; /*0x7bbe2c*/
  if ( a1[2] == v5 && a1[3] == a3[3] ) /*0x7bbe40*/
  {
    if ( *a1 < 0 ) /*0x7bbe4a*/
    {
      *a3 -= *a1; /*0x7bbe50*/
      a3[2] = v5 + *a1; /*0x7bbe56*/
      v6 = *a1; /*0x7bbe59*/
      v7 = a1[2]; /*0x7bbe5b*/
      *a1 = 0; /*0x7bbe5e*/
      a1[2] = v6 + v7; /*0x7bbe66*/
    }
    v8 = a1[1]; /*0x7bbe69*/
    if ( v8 < 0 ) /*0x7bbe6e*/
    {
      v9 = a3[3]; /*0x7bbe73*/
      a3[1] -= v8; /*0x7bbe78*/
      a3[3] = a1[1] + v9; /*0x7bbe80*/
      v10 = a1[1]; /*0x7bbe83*/
      v11 = a1[3]; /*0x7bbe86*/
      a1[1] = 0; /*0x7bbe89*/
      a1[3] = v10 + v11; /*0x7bbe92*/
    }
    v12 = a1[2] + *a1 - *(_DWORD *)(a2 + 8); /*0x7bbe9f*/
    if ( v12 > 0 ) /*0x7bbea3*/
    {
      a3[2] -= v12; /*0x7bbeaa*/
      a1[2] -= v12; /*0x7bbeb2*/
    }
    v13 = a1[1] + a1[3] - *(_DWORD *)(a2 + 12); /*0x7bbec0*/
    if ( v13 > 0 ) /*0x7bbec4*/
    {
      a3[3] -= v13; /*0x7bbecb*/
      a1[3] -= v13; /*0x7bbed3*/
    }
    if ( *a3 < 0 ) /*0x7bbeda*/
    {
      *a1 -= *a3; /*0x7bbee0*/
      v14 = *a3; /*0x7bbee2*/
      a3[2] += *a3; /*0x7bbee9*/
      a1[2] += v14; /*0x7bbef1*/
      *a3 = 0; /*0x7bbef4*/
    }
    v15 = a3[1]; /*0x7bbefa*/
    if ( v15 < 0 ) /*0x7bbeff*/
    {
      a1[1] -= v15; /*0x7bbf06*/
      v16 = a3[1]; /*0x7bbf09*/
      a3[3] += v16; /*0x7bbf11*/
      a1[3] += v16; /*0x7bbf19*/
      a3[1] = 0; /*0x7bbf1c*/
    }
    v17 = *a3 + a3[2] - *(_DWORD *)(a4 + 8); /*0x7bbf33*/
    if ( v17 > 0 ) /*0x7bbf37*/
    {
      a3[2] = *(_DWORD *)(a4 + 8) - *a3; /*0x7bbf3b*/
      a1[2] -= v17; /*0x7bbf43*/
    }
    v18 = *(_DWORD *)(a4 + 12); /*0x7bbf49*/
    v19 = a3[3] + a3[1] - v18; /*0x7bbf51*/
    if ( v19 > 0 ) /*0x7bbf55*/
    {
      a3[3] = v18 - a3[1]; /*0x7bbf59*/
      a1[3] -= v19; /*0x7bbf61*/
    }
  }
  else
  {
    v20 = ClipRectIntersection(v23, a1, (int *)a2, 0, 0); /*0x7bbf71*/
    *a1 = *v20; /*0x7bbf7e*/
    a1[1] = v20[1]; /*0x7bbf83*/
    a1[2] = v20[2]; /*0x7bbf89*/
    a1[3] = v20[3]; /*0x7bbf93*/
    v21 = ClipRectIntersection(v23, a3, (int *)a4, 0, 0); /*0x7bbf9d*/
    *a3 = *v21; /*0x7bbfa6*/
    a3[1] = v21[1]; /*0x7bbfab*/
    a3[2] = v21[2]; /*0x7bbfb1*/
    a3[3] = v21[3]; /*0x7bbfb7*/
  }
  return a1[2] > 0 && a1[3] > 0 && a3[2] > 0 && a3[3] > 0; /*0x7bbfd6*/
}



// ==== 0x007BBFF0  sub_7BBFF0  this=-  sig=ida-proto ====
char __fastcall sub_7BBFF0(int a1, int a2, int *a3, int a4, _BYTE *a5, int *a6, int *a7)
{
  int v9; // eax
  int *v11; // [esp-10h] [ebp-3Ch]
  _BYTE v12[20]; // [esp+Ch] [ebp-20h] BYREF
  int v13[3]; // [esp+20h] [ebp-Ch] BYREF

  v11 = (int *)(*(int (__thiscall **)(int *, _BYTE *, int))(*a3 + 120))(a3, v12, a4); /*0x7bc022*/
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 120))(a1); /*0x7bc02a*/
  return CalcSurfaceBlitRects(a1, v9, v13, a2, a3, v11, a5, a6, a7); /*0x7bc036*/
}



// ==== 0x007BC040  CalcSurfaceBlitRects  this=-  sig=csp ====
char __fastcall CalcSurfaceBlitRects(
        int a1,
        CellStruct *a2,
        CellStruct *a3,
        int a4,
        CellStruct *a5,
        CellStruct *a6,
        _BYTE *a7,
        int *a8,
        int *a9)
{
  int v9; // ebx
  CellStruct *v10; // ebp
  int v11; // eax
  int v12; // edx
  int v13; // ebx
  int v14; // eax
  int v15; // ecx
  Coord2D *v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  Coord2D *v19; // eax
  _DWORD *v20; // eax
  int v21; // eax
  _DWORD *v23; // [esp-4h] [ebp-2Ch]
  _DWORD *v24; // [esp-4h] [ebp-2Ch]
  _DWORD v25[2]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v26[2]; // [esp+18h] [ebp-10h] BYREF
  _DWORD v27[2]; // [esp+20h] [ebp-8h] BYREF

  v9 = a1; /*0x7bc049*/
  v10 = a2; /*0x7bc04f*/
  *a7 = 0; /*0x7bc05a*/
  *a8 = 0; /*0x7bc05d*/
  *a9 = 0; /*0x7bc063*/
  v11 = *(_DWORD *)a3->__pad_8; /*0x7bc069*/
  v26[0] = a2; /*0x7bc06f*/
  v25[0] = a1; /*0x7bc073*/
  if ( v11 <= 0 /*0x7bc0d8*/
    || *(int *)&a3->__pad_8[4] <= 0
    || *(int *)a2->__pad_8 <= 0
    || *(int *)&a2->__pad_8[4] <= 0
    || *(int *)a6->__pad_8 <= 0
    || *(int *)&a6->__pad_8[4] <= 0
    || *(int *)a5->__pad_8 <= 0
    || *(int *)&a5->__pad_8[4] <= 0
    || !(unsigned __int8)IntersectSurfaceRects(&a3->field_0, (int)a2, &a6->field_0, (int)a5) )
  {
    return 0; /*0x7bc0d8*/
  }
  *a7 = 0; /*0x7bc0e9*/
  if ( a4 == v9 ) /*0x7bc0f2*/
  {
    v12 = a3->field_0; /*0x7bc0f4*/
    v13 = a6->field_0; /*0x7bc0f9*/
    if ( a6->field_0 < a3->field_0 + *(_DWORD *)a3->__pad_8 ) /*0x7bc0ff*/
    {
      v14 = (int)a3->field_4; /*0x7bc101*/
      v15 = (int)a6->field_4; /*0x7bc107*/
      if ( v15 < v14 + *(_DWORD *)&a3->__pad_8[4] /*0x7bc12a*/
        && *(_DWORD *)a6->__pad_8 + v13 > v12
        && *(_DWORD *)&a6->__pad_8[4] + v15 > v14
        && (v15 < v14 || v15 == v14 && v13 < v12) )
      {
        *a7 = 1; /*0x7bc130*/
      }
      v10 = (CellStruct *)v26[0]; /*0x7bc133*/
    }
    v9 = v25[0]; /*0x7bc137*/
  }
  v23 = CellStruct::Copy(a3, v26); /*0x7bc14f*/
  v16 = (Coord2D *)CellStruct::Copy(v10, v27); /*0x7bc154*/
  v17 = Coord2D::Add(v16, v25, v23); /*0x7bc15b*/
  v18 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v9 + 92))(v9, *v17, v17[1]); /*0x7bc173*/
  *a8 = v18; /*0x7bc17c*/
  if ( !v18 ) /*0x7bc17e*/
    return 0; /*0x7bc17e*/
  v24 = CellStruct::Copy(a6, v27); /*0x7bc190*/
  v19 = (Coord2D *)CellStruct::Copy(a5, v25); /*0x7bc19b*/
  v20 = Coord2D::Add(v19, v26, v24); /*0x7bc1a2*/
  v21 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a4 + 92))(a4, *v20, v20[1]); /*0x7bc1bc*/
  *a9 = v21; /*0x7bc1c5*/
  if ( !v21 ) /*0x7bc1c7*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9); /*0x7bc1cd*/
    return 0; /*0x7bc1d9*/
  }
  return 1; /*0x7bc1d2*/
}



// ==== 0x007BC1F0  sub_7BC1F0  this=-  sig=ida-proto ====
char __fastcall sub_7BC1F0(int *a1, int *a2, int a3, int a4)
{
  void **v7; // [esp+8h] [ebp-4h] BYREF

  if ( (*(int (__thiscall **)(int *))(*a1 + 112))(a1) == 1 ) /*0x7bc1ff*/
  {
    v7 = &BlitPlain<unsigned char>::`vftable'; /*0x7bc20a*/
    return BlitterCopySimpleSHP(a1, a2, a3, a4, (int *)&v7, 0, 3, 1000, 0); /*0x7bc218*/
  }
  else
  {
    v7 = &BlitPlain<unsigned short>::`vftable'; /*0x7bc223*/
    return BlitterCopySimpleSHP(a1, a2, a3, a4, (int *)&v7, 0, 3, 1000, 0); /*0x7bc240*/
  }
}



// ==== 0x007BC250  sub_7BC250  this=-  sig=ida-proto ====
char __fastcall sub_7BC250(int *a1, int *a2, int a3, int a4)
{
  void **v7; // [esp+8h] [ebp-4h] BYREF

  if ( (*(int (__thiscall **)(int *))(*a1 + 112))(a1) == 1 ) /*0x7bc25f*/
  {
    v7 = &BlitTrans<unsigned char>::`vftable'; /*0x7bc26a*/
    return BlitterCopySimpleSHP(a1, a2, a3, a4, (int *)&v7, 0, 3, 1000, 0); /*0x7bc278*/
  }
  else
  {
    v7 = &BlitTrans<unsigned short>::`vftable'; /*0x7bc283*/
    return BlitterCopySimpleSHP(a1, a2, a3, a4, (int *)&v7, 0, 3, 1000, 0); /*0x7bc2a0*/
  }
}



// ==== 0x007BC2B0  ClipLine  this=-  sig=csp ====
int __fastcall ClipLine(int *a1, int *a2, int *a3)
{
  int v4; // esi
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st4
  int v9; // edx
  int result; // eax
  int v11; // ecx
  char v12; // fps^1
  bool v13; // c0
  char v14; // c2
  bool v15; // c3
  char v16; // fps^1
  bool v17; // c0
  char v18; // c2
  bool v19; // c3
  double v20; // st4
  double v21; // kr00_8
  char v22; // fps^1
  bool v23; // c0
  char v24; // c2
  bool v25; // c3
  bool v26; // c0
  char v27; // c2
  bool v28; // c3
  char v29; // fps^1
  bool v30; // c0
  char v31; // c2
  bool v32; // c3
  bool v33; // c0
  char v34; // c2
  bool v35; // c3
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // [esp+10h] [ebp-60h]
  int v40; // [esp+14h] [ebp-5Ch]
  double v42; // [esp+28h] [ebp-48h]
  double v43; // [esp+30h] [ebp-40h]
  double v44; // [esp+38h] [ebp-38h]
  double v45; // [esp+40h] [ebp-30h]
  double v46; // [esp+48h] [ebp-28h]
  double v47; // [esp+50h] [ebp-20h]
  double v48; // [esp+58h] [ebp-18h]
  double v49; // [esp+60h] [ebp-10h]
  double v50; // [esp+68h] [ebp-8h]

  v4 = a3[1]; /*0x7bc2c9*/
  v5 = (double)*a3; /*0x7bc2d3*/
  v43 = v5; /*0x7bc2dd*/
  v6 = (double)v4; /*0x7bc2e1*/
  v40 = *a3 + a3[2]; /*0x7bc2e5*/
  v7 = v6; /*0x7bc2e9*/
  v44 = (double)*a1; /*0x7bc2ed*/
  v42 = (double)a1[1]; /*0x7bc2f6*/
  v8 = (double)*a2; /*0x7bc2fa*/
  v50 = v8; /*0x7bc2fc*/
  v45 = (double)a2[1]; /*0x7bc303*/
  v48 = (v8 - v44) / (v45 - v42); /*0x7bc31b*/
  v49 = (v45 - v42) / (v8 - v44); /*0x7bc321*/
  v46 = (double)v40; /*0x7bc32b*/
  if ( v44 < v46 ) /*0x7bc338*/
    v9 = v44 < v5; /*0x7bc34c*/
  else
    v9 = 2; /*0x7bc33c*/
  result = v4 + a3[3]; /*0x7bc354*/
  v39 = result; /*0x7bc356*/
  v47 = (double)result; /*0x7bc35e*/
  if ( v42 < v47 ) /*0x7bc36f*/
  {
    if ( v42 < v6 ) /*0x7bc381*/
      v9 |= 8u; /*0x7bc383*/
  }
  else
  {
    v9 |= 4u; /*0x7bc371*/
  }
  if ( v8 < v46 ) /*0x7bc391*/
    v11 = v8 < v5; /*0x7bc3a5*/
  else
    v11 = 2; /*0x7bc395*/
  v13 = v45 < v47; /*0x7bc3ae*/
  v14 = 0; /*0x7bc3ae*/
  v15 = v45 == v47; /*0x7bc3ae*/
  BYTE1(result) = v12; /*0x7bc3b2*/
  if ( v45 < v47 ) /*0x7bc3b7*/
  {
    v17 = v45 < v6; /*0x7bc3c2*/
    v18 = 0; /*0x7bc3c2*/
    v19 = v45 == v6; /*0x7bc3c2*/
    BYTE1(result) = v16; /*0x7bc3c4*/
    if ( v45 < v6 ) /*0x7bc3c9*/
      goto LABEL_14; /*0x7bc3c9*/
  }
  else
  {
    v11 |= 4u; /*0x7bc3b9*/
  }
  while ( 1 ) /*0x7bc3ce*/
  {
    if ( !v9 && !v11 ) /*0x7bc3d4*/
    {
      LOWORD(v36) = Math::RoundToInt(v44); /*0x7bc533*/
      *a1 = v36; /*0x7bc540*/
      LOWORD(v37) = Math::RoundToInt(v42); /*0x7bc542*/
      a1[1] = v37; /*0x7bc54b*/
      LOWORD(v38) = Math::RoundToInt(v50); /*0x7bc54e*/
      *a2 = v38; /*0x7bc557*/
      LOWORD(result) = Math::RoundToInt(v45); /*0x7bc559*/
      a2[1] = result; /*0x7bc55e*/
      LOBYTE(result) = 1; /*0x7bc561*/
      return result; /*0x7bc569*/
    }
    if ( (v11 & v9) != 0 ) /*0x7bc3dc*/
      break; /*0x7bc3dc*/
    result = v9; /*0x7bc3e4*/
    if ( !v9 ) /*0x7bc3e6*/
      result = v11; /*0x7bc3e8*/
    if ( (result & 8) != 0 ) /*0x7bc3ec*/
    {
      v43 = (v6 - v42) * v48 + v44; /*0x7bc3fe*/
      v7 = v6; /*0x7bc402*/
    }
    else
    {
      if ( (result & 4) != 0 ) /*0x7bc408*/
      {
        v7 = (double)(v39 - 1); /*0x7bc415*/
        v20 = (v7 - v42) * v48 + v44; /*0x7bc423*/
LABEL_28:
        v43 = v20; /*0x7bc474*/
        goto LABEL_29; /*0x7bc474*/
      }
      if ( (result & 2) != 0 ) /*0x7bc42b*/
      {
        v21 = (double)(v40 - 1); /*0x7bc448*/
        v43 = v21; /*0x7bc44c*/
        v7 = (v21 - v44) * v49 + v42; /*0x7bc458*/
      }
      else if ( (result & 1) != 0 ) /*0x7bc460*/
      {
        v7 = (v5 - v44) * v49 + v42; /*0x7bc46e*/
        v20 = v5; /*0x7bc472*/
        goto LABEL_28; /*0x7bc472*/
      }
    }
LABEL_29:
    if ( result == v9 ) /*0x7bc47e*/
    {
      v44 = v43; /*0x7bc480*/
      v42 = v7; /*0x7bc488*/
      if ( v43 < v46 ) /*0x7bc495*/
        v9 = v43 < v5; /*0x7bc4a9*/
      else
        v9 = 2; /*0x7bc499*/
      v23 = v7 < v47; /*0x7bc4ae*/
      v24 = 0; /*0x7bc4ae*/
      v25 = v7 == v47; /*0x7bc4ae*/
      BYTE1(result) = v22; /*0x7bc4b2*/
      if ( v7 < v47 ) /*0x7bc4b7*/
      {
        v26 = v7 < v6; /*0x7bc4c1*/
        v27 = 0; /*0x7bc4c1*/
        v28 = v7 == v6; /*0x7bc4c1*/
        BYTE1(result) = v22; /*0x7bc4c3*/
        if ( v7 < v6 ) /*0x7bc4c8*/
          v9 |= 8u; /*0x7bc4ce*/
      }
      else
      {
        v9 |= 4u; /*0x7bc4b9*/
      }
    }
    else
    {
      v50 = v43; /*0x7bc4d6*/
      v45 = v7; /*0x7bc4de*/
      if ( v43 < v46 ) /*0x7bc4eb*/
        v11 = v43 < v5; /*0x7bc4ff*/
      else
        v11 = 2; /*0x7bc4ef*/
      v30 = v7 < v47; /*0x7bc504*/
      v31 = 0; /*0x7bc504*/
      v32 = v7 == v47; /*0x7bc504*/
      BYTE1(result) = v29; /*0x7bc508*/
      if ( v7 < v47 ) /*0x7bc50d*/
      {
        v33 = v7 < v6; /*0x7bc517*/
        v34 = 0; /*0x7bc517*/
        v35 = v7 == v6; /*0x7bc517*/
        BYTE1(result) = v29; /*0x7bc519*/
        if ( v7 < v6 ) /*0x7bc51e*/
LABEL_14:
          v11 |= 8u; /*0x7bc3cb*/
      }
      else
      {
        v11 |= 4u; /*0x7bc50f*/
      }
    }
  }
  LOBYTE(result) = 0; /*0x7bc574*/
  return result; /*0x7bc563*/
}



// ==== 0x007BC580  ObjectClass::method_7BC580  this=ObjectClass  sig=csp ====
int __thiscall sub_7BC580(ObjectClass *this, double a2, double a3)
{
  int v3; // edx
  void *ptr_4; // [esp+8h] [ebp-4h]

  if ( (double)((unsigned int)this->AbstractClass + (unsigned int)this->?) > a2 ) /*0x7bc5a3*/
    v3 = (double)(int)this->AbstractClass > a2; /*0x7bc5bb*/
  else
    v3 = 2; /*0x7bc5a5*/
  ptr_4 = this->?; /*0x7bc5c8*/
  if ( (double)(int)((int)ptr_4 + (unsigned int)this->?) <= a3 ) /*0x7bc5dd*/
    return v3 | 4; /*0x7bc5e2*/
  if ( (double)(int)ptr_4 > a3 ) /*0x7bc5f7*/
    return v3 | 8; /*0x7bc5f9*/
  return v3; /*0x7bc5e4*/
}



// ==== 0x007BC610  _BlitTrans_E::method_7BC610  this=BlitTrans  sig=csp ====
void __stdcall sub_7BC610(_BlitTrans_E *this, char *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  char *v9; // edi
  int v10; // ecx
  char v11; // al

  v9 = (char *)this - 1; /*0x7bc623*/
  v10 = a3 + 1; /*0x7bc624*/
  while ( --v10 ) /*0x7bc625*/
  {
    v11 = *a2; /*0x7bc628*/
    ++v9; /*0x7bc62a*/
    ++a2; /*0x7bc62b*/
    if ( v11 ) /*0x7bc62e*/
      *v9 = v11; /*0x7bc630*/
  }
}



// ==== 0x007BC640  _BlitPlain_E::??_Gfacet_locale_std__UAEPAXI_Z_148  this=BlitPlain  sig=csp ====
_DWORD *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_148(_DWORD *Block, char a2)
{
  *Block = &Blitter::`vftable'; /*0x7bc649*/
  if ( (a2 & 1) != 0 ) /*0x7bc64f*/
    __3_YAXPAX_Z(Block); /*0x7bc652*/
  return Block; /*0x7bc65c*/
}



// ==== 0x007BC660  _BlitPlain_G::??_Gfacet_locale_std__UAEPAXI_Z_149  this=BlitPlain  sig=csp ====
_DWORD *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_149(_DWORD *Block, char a2)
{
  *Block = &Blitter::`vftable'; /*0x7bc669*/
  if ( (a2 & 1) != 0 ) /*0x7bc66f*/
    __3_YAXPAX_Z(Block); /*0x7bc672*/
  return Block; /*0x7bc67c*/
}



// ==== 0x007BC680  _BlitTrans_E::??_Gfacet_locale_std__UAEPAXI_Z_150  this=BlitTrans  sig=csp ====
_DWORD *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_150(_DWORD *Block, char a2)
{
  *Block = &Blitter::`vftable'; /*0x7bc689*/
  if ( (a2 & 1) != 0 ) /*0x7bc68f*/
    __3_YAXPAX_Z(Block); /*0x7bc692*/
  return Block; /*0x7bc69c*/
}



// ==== 0x007BC6A0  _BlitTrans_G::??_Gfacet_locale_std__UAEPAXI_Z_151  this=BlitTrans  sig=csp ====
_DWORD *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_151(_DWORD *Block, char a2)
{
  *Block = &Blitter::`vftable'; /*0x7bc6a9*/
  if ( (a2 & 1) != 0 ) /*0x7bc6af*/
    __3_YAXPAX_Z(Block); /*0x7bc6b2*/
  return Block; /*0x7bc6bc*/
}



// ==== 0x007BC6C0  _BlitTrans_E::method_7BC6C0  this=BlitTrans  sig=csp ====
int __thiscall sub_7BC6C0(_BlitTrans_E *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(_BlitTrans_E *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 4))( /*0x7bc6ea*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}



// ==== 0x007BC6F0  _BlitTrans_E::method_7BC6F0  this=BlitTrans  sig=csp ====
int __thiscall sub_7BC6F0(_BlitTrans_E *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return (*(int (__thiscall **)(_BlitTrans_E *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 4))( /*0x7bc71a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}



// ==== 0x007BC720  _BlitTrans_E::method_7BC720  this=BlitTrans  sig=csp ====
int __thiscall sub_7BC720(_BlitTrans_E *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*(int (__thiscall **)(_BlitTrans_E *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 4))( /*0x7bc74a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}



// ==== 0x007BC750  _BlitPlain_E::method_7BC750  this=BlitPlain  sig=csp ====
unsigned int __thiscall sub_7BC750(
        _BlitPlain_E *this,
        const void *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  qmemcpy((void *)a2, (const void *)a3, a4); /*0x7bc763*/
  return a4; /*0x7bc76c*/
}



// ==== 0x007BC780  _BlitPlain_E::method_7BC780  this=BlitPlain  sig=csp ====
void *__thiscall sub_7BC780(_BlitPlain_E *this, void *Src, size_t Size, int Sizea, int a5, int a6, int a7)
{
  return memcpy(Src, (const void *)Size, Sizea); /*0x7bc797*/
}



// ==== 0x007BC7A0  _BlitPlain_E::method_7BC7A0  this=BlitPlain  sig=csp ====
unsigned int __thiscall sub_7BC7A0(
        _BlitPlain_E *this,
        const void *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  qmemcpy((void *)a2, (const void *)a3, a4); /*0x7bc7b3*/
  return a4; /*0x7bc7bc*/
}



// ==== 0x007BC7D0  _BlitPlain_E::method_7BC7D0  this=BlitPlain  sig=csp ====
void *__thiscall sub_7BC7D0(_BlitPlain_E *this, void *Src, size_t Size, int Sizea, int a5, int a6, int a7, int a8)
{
  return memcpy(Src, (const void *)Size, Sizea); /*0x7bc7e7*/
}



// ==== 0x007BC7F0  _BlitPlain_G::method_7BC7F0  this=BlitPlain  sig=csp ====
int __thiscall sub_7BC7F0(_BlitPlain_G *this, const void *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  qmemcpy((void *)a2, (const void *)a3, 2 * a4); /*0x7bc806*/
  return a4; /*0x7bc80f*/
}



// ==== 0x007BC820  _BlitPlain_G::method_7BC820  this=BlitPlain  sig=csp ====
void *__thiscall sub_7BC820(_BlitPlain_G *this, void *Src, int Srca, int a4, int a5, int a6, int a7)
{
  return memcpy(Src, (const void *)Srca, 2 * a4); /*0x7bc83a*/
}



// ==== 0x007BC840  _BlitPlain_G::method_7BC840  this=BlitPlain  sig=csp ====
int __thiscall sub_7BC840(_BlitPlain_G *this, const void *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  qmemcpy((void *)a2, (const void *)a3, 2 * a4); /*0x7bc856*/
  return a4; /*0x7bc85f*/
}



// ==== 0x007BC870  _BlitPlain_G::method_7BC870  this=BlitPlain  sig=csp ====
void *__thiscall sub_7BC870(_BlitPlain_G *this, void *Src, int Srca, int a4, int a5, int a6, int a7, int a8)
{
  return memcpy(Src, (const void *)Srca, 2 * a4); /*0x7bc88a*/
}



// ==== 0x007BC890  _BlitTrans_G::method_7BC890  this=BlitTrans  sig=csp ====
__int16 __stdcall sub_7BC890(_BlitTrans_G *this, __int16 *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  __int16 result; // ax
  int v11; // esi

  result = a3; /*0x7bc890*/
  if ( a3 > 0 ) /*0x7bc896*/
  {
    v11 = a3; /*0x7bc8a1*/
    do /*0x7bc8b5*/
    {
      result = *a2++; /*0x7bc8a3*/
      if ( result ) /*0x7bc8ac*/
        *(_WORD *)this->__pad_0 = result; /*0x7bc8ae*/
      this = (_BlitTrans_G *)((char *)this + 2); /*0x7bc8b1*/
      --v11; /*0x7bc8b4*/
    }
    while ( v11 ); /*0x7bc8b5*/
  }
  return result; /*0x7bc8b8*/
}



// ==== 0x007BC8C0  _BlitTrans_G::method_7BC8C0  this=BlitTrans  sig=csp ====
int __thiscall sub_7BC8C0(_BlitTrans_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(_BlitTrans_G *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 4))( /*0x7bc8ea*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}



// ==== 0x007BC8F0  _BlitTrans_G::method_7BC8F0  this=BlitTrans  sig=csp ====
int __thiscall sub_7BC8F0(_BlitTrans_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return (*(int (__thiscall **)(_BlitTrans_G *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 4))( /*0x7bc91a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}



// ==== 0x007BC920  _BlitTrans_G::method_7BC920  this=BlitTrans  sig=csp ====
int __thiscall sub_7BC920(_BlitTrans_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*(int (__thiscall **)(_BlitTrans_G *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 4))( /*0x7bc94a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}



// ==== 0x007BC950  sub_7BC950  this=-  sig=ida-proto ====
int sub_7BC950()
{
  dword_B78188 = 0; /*0x7bc952*/
  dword_B7818C = 0; /*0x7bc957*/
  dword_B78190 = 0; /*0x7bc95c*/
  dword_B78194 = 0; /*0x7bc961*/
  return 0; /*0x7bc966*/
}



// ==== 0x007BC970  BSurface::ConstructEx  this=BSurface  sig=csp ====
_DWORD *__thiscall BSurface::ConstructEx(BSurface *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  void *v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  void *Buffer; // ecx

  v6 = a2; /*0x7bc975*/
  v7 = a4; /*0x7bc979*/
  v8 = a5; /*0x7bc97f*/
  this->q00B = a5; /*0x7bc983*/
  *(_DWORD *)this->XSurface = v6; /*0x7bc988*/
  v9 = a3; /*0x7bc98a*/
  this->q00A = v7; /*0x7bc98e*/
  this->? = v9; /*0x7bc991*/
  this->? = v7; /*0x7bc994*/
  this->? = v8; /*0x7bc997*/
  this->Height = 2 * v7 * v8; /*0x7bc99f*/
  v10 = __2_YAPAXI_Z(0x20u); /*0x7bc9a7*/
  if ( v10 ) /*0x7bc9b0*/
  {
    v11 = this->q00A; /*0x7bc9b2*/
    v12 = this->q00B; /*0x7bc9b5*/
    *(_DWORD *)(v10 + 4) = v11; /*0x7bc9b8*/
    *(_DWORD *)(v10 + 8) = v12; /*0x7bc9c0*/
    *(_DWORD *)(v10 + 12) = 0; /*0x7bc9c8*/
    *(_DWORD *)v10 = &XSurface_Vtable; /*0x7bc9cb*/
    *(_DWORD *)(v10 + 16) = 2; /*0x7bc9d1*/
    Buffer::Init((Buffer *)(v10 + 20), 0, 2 * v12 * v11); /*0x7bc9d8*/
    *(_DWORD *)v10 = &BSurface_Vtable; /*0x7bc9dd*/
    v13 = (void *)v10; /*0x7bc9e3*/
  }
  else
  {
    v13 = 0; /*0x7bc9e7*/
  }
  v14 = this->q00A; /*0x7bc9ec*/
  a5 = this->q00B; /*0x7bc9ef*/
  this->Buffer = v13; /*0x7bc9f3*/
  a2 = 0; /*0x7bc9f6*/
  a3 = 0; /*0x7bc9fa*/
  a4 = v14; /*0x7bc9fe*/
  (*(void (__thiscall **)(void *, int *, int))(*(_DWORD *)v13 + 20))(v13, &a2, 0xFFFF); /*0x7bca0e*/
  v15 = (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this->Buffer + 92))(this->Buffer, 0, 0); /*0x7bca1c*/
  v16 = this->q00B; /*0x7bca1f*/
  *((_DWORD *)this + 6) = v15; /*0x7bca22*/
  v17 = this->q00A * v16; /*0x7bca25*/
  this->BytesPerPixel = 0; /*0x7bca29*/
  *((_DWORD *)this + 9) = 0x8000; /*0x7bca2c*/
  v18 = v15 + 2 * v17; /*0x7bca33*/
  Buffer = this->Buffer; /*0x7bca36*/
  *((_DWORD *)this + 7) = v18; /*0x7bca39*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)Buffer + 96))(Buffer); /*0x7bca3e*/
  return this->XSurface; /*0x7bca43*/
}



// ==== 0x007BCA50  ObjectClass::method_7BCA50  this=ObjectClass  sig=csp ====
int __thiscall sub_7BCA50(ObjectClass *this, int a2, int a3, int a4, int a5, int a6)
{
  _WORD *v8; // edi
  __int16 *v9; // esi
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  __int16 v14; // dx
  int v16; // [esp+14h] [ebp+4h]

  v8 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 92))(a2, a3, a4); /*0x7bca72*/
  v9 = (__int16 *)(this->? + this->?); /*0x7bca79*/
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x7bca7b*/
  v11 = a5; /*0x7bca81*/
  v12 = v10 / 2 - a5; /*0x7bca87*/
  if ( v8 && a6 > 0 ) /*0x7bca93*/
  {
    v16 = a6; /*0x7bca95*/
    do /*0x7bcac8*/
    {
      if ( v11 > 0 ) /*0x7bca9b*/
      {
        v13 = v11; /*0x7bca9d*/
        do /*0x7bcab6*/
        {
          v14 = *v9++; /*0x7bca9f*/
          *v8++ = v14; /*0x7bcaa5*/
          if ( (unsigned int)v9 >= this->? ) /*0x7bcab0*/
            v9 = (__int16 *)((char *)v9 - (unsigned int)this->?); /*0x7bcab2*/
          --v13; /*0x7bcab5*/
        }
        while ( v13 ); /*0x7bcab6*/
        v11 = a5; /*0x7bcab8*/
      }
      v8 += v12; /*0x7bcac0*/
      --v16; /*0x7bcac4*/
    }
    while ( v16 ); /*0x7bcac8*/
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x7bcad2*/
}



// ==== 0x007BCAE0  Stream::GetField  this=Stream  sig=csp ====
int __thiscall Stream::GetField(Stream *this)
{
  int (__thiscall ***v1)(_DWORD, int); // ecx
  int result; // eax

  v1 = (int (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 5); /*0x7bcae0*/
  if ( v1 ) /*0x7bcae5*/
    return (**v1)(v1, 1); /*0x7bcaeb*/
  return result; /*0x7bcaed*/
}



// ==== 0x007BCAF0  sub_7BCAF0  this=-  sig=csp ====
char *__stdcall sub_7BCAF0(char *a1, int a2, unsigned __int16 a3)
{
  char *v3; // edx
  int v4; // ebx
  char *result; // eax
  unsigned int v6; // esi

  v3 = a1; /*0x7bcaf0*/
  v4 = a2; /*0x7bcaf5*/
  if ( ((unsigned __int8)a1 & 2) != 0 && a2 ) /*0x7bcb06*/
  {
    *(_WORD *)a1 = a3; /*0x7bcb08*/
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
      *(_WORD *)result = a3; /*0x7bcb3d*/
  }
  return result; /*0x7bcb40*/
}



// ==== 0x007BCB50  Buffer::FillCircularBufferScroll2  this=Buffer  sig=csp ====
char *__thiscall Buffer::FillCircularBufferScroll2(Buffer *this, int a2, int a3, unsigned __int16 a4)
{
  signed int v5; // ebx
  char *result; // eax
  int v8; // edi
  unsigned int Buffer_field_18; // edx
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // edi
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int Buffer_field_10; // ecx
  int v25; // ebx
  int v26; // edx
  int v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // edx
  unsigned int v30; // ebx
  char *v31; // edx
  int v32; // eax
  unsigned __int16 *v33; // ecx
  unsigned int v34; // ebx
  int v35; // ecx
  __int64 v36; // rax
  int v37; // edx
  int v38; // ebx
  signed int v39; // eax
  unsigned __int16 *v40; // ebx
  int v41; // edx
  unsigned int v42; // esi
  bool v43; // zf
  int v44; // eax
  __int64 v45; // rax
  unsigned __int16 *v46; // edx
  int v47; // ebx
  unsigned __int16 *v48; // eax
  unsigned int v49; // esi
  int v50; // ecx
  int Buffer_field_14; // ecx
  int v52; // [esp+10h] [ebp-14h]
  int v53; // [esp+14h] [ebp-10h] BYREF
  int v54; // [esp+18h] [ebp-Ch]
  int v55; // [esp+1Ch] [ebp-8h]
  int v56; // [esp+20h] [ebp-4h]
  int v57; // [esp+2Ch] [ebp+8h]
  int v58; // [esp+30h] [ebp+Ch]

  v5 = *((_DWORD *)this + 10); /*0x7bcb60*/
  v52 = this->Buffer_field_10 / 2 % v5; /*0x7bcb72*/
  if ( (int)abs32(a2) > v5 || (result = (char *)abs32(a3), (int)result > *((_DWORD *)this + 11)) ) /*0x7bcb8e*/
  {
    v50 = *((_DWORD *)this + 11); /*0x7bcf06*/
    v53 = 0; /*0x7bcf0b*/
    v54 = 0; /*0x7bcf0f*/
    v56 = v50; /*0x7bcf17*/
    Buffer_field_14 = this->Buffer_field_14; /*0x7bcf1b*/
    v55 = v5; /*0x7bcf24*/
    result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)Buffer_field_14 + 20))( /*0x7bcf2f*/
                       Buffer_field_14,
                       &v53,
                       a4);
    this->Buffer_field_24 = 0x8000; /*0x7bcf32*/
    return result; /*0x7bcf32*/
  }
  v8 = a2 + this->Buffer_field_10 / 2 % v5; /*0x7bcb98*/
  if ( a2 ) /*0x7bcb9c*/
  {
    Buffer_field_18 = this->Buffer_field_18; /*0x7bcba5*/
    v10 = this->Buffer_field_10 + 2 * a2; /*0x7bcba8*/
    this->Buffer_field_10 = v10; /*0x7bcbab*/
    v11 = Buffer_field_18 + v10; /*0x7bcbae*/
    if ( v11 < Buffer_field_18 ) /*0x7bcbb2*/
      v11 += this->Buffer_field_20; /*0x7bcbb4*/
    if ( v11 >= this->Buffer_field_1C ) /*0x7bcbba*/
      v11 -= this->Buffer_field_20; /*0x7bcbbc*/
    this->Buffer_field_10 = v11 - this->Buffer_field_18; /*0x7bcbc4*/
    if ( a2 >= 0 ) /*0x7bcbc7*/
    {
      v53 = v52; /*0x7bcc6e*/
      if ( v8 < v5 ) /*0x7bcc64*/
      {
        v54 = 0; /*0x7bcccf*/
        v23 = *((_DWORD *)this + 11); /*0x7bccd3*/
        v55 = a2; /*0x7bccd6*/
        v22 = this->Buffer_field_14; /*0x7bccda*/
        v56 = v23; /*0x7bcce3*/
      }
      else
      {
        v18 = *((_DWORD *)this + 11); /*0x7bcc72*/
        v55 = v5 - v52; /*0x7bcc75*/
        v54 = 0; /*0x7bcc79*/
        v19 = this->Buffer_field_14; /*0x7bcc7d*/
        v56 = v18; /*0x7bcc82*/
        (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v19 + 20))(v19, &v53, a4); /*0x7bcc94*/
        v20 = v8 - *((_DWORD *)this + 10); /*0x7bcc9e*/
        v21 = *((_DWORD *)this + 11); /*0x7bcca0*/
        v54 = 0; /*0x7bcca3*/
        v22 = this->Buffer_field_14; /*0x7bcca7*/
        v53 = 0; /*0x7bccaa*/
        v55 = v20; /*0x7bccae*/
        v56 = v21; /*0x7bccb2*/
      }
      result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v22 + 20))(v22, &v53, a4); /*0x7bccbe*/
    }
    else if ( v8 >= 0 ) /*0x7bcbcf*/
    {
      v53 = v8; /*0x7bcc33*/
      v54 = 0; /*0x7bcc37*/
      v56 = *((_DWORD *)this + 11); /*0x7bcc3e*/
      v55 = -a2; /*0x7bcc46*/
      result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)this->Buffer_field_14 + 20))( /*0x7bcc5a*/
                         this->Buffer_field_14,
                         &v53,
                         a4);
    }
    else
    {
      v53 = 0; /*0x7bcbd5*/
      v55 = v52; /*0x7bcbdd*/
      v12 = *((_DWORD *)this + 11); /*0x7bcbe1*/
      v54 = 0; /*0x7bcbe4*/
      v13 = this->Buffer_field_14; /*0x7bcbe8*/
      v56 = v12; /*0x7bcbed*/
      (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v13 + 20))(v13, &v53, a4); /*0x7bcbff*/
      v14 = *((_DWORD *)this + 10); /*0x7bcc02*/
      v15 = *((_DWORD *)this + 11); /*0x7bcc05*/
      v16 = v14 + v8; /*0x7bcc08*/
      v54 = 0; /*0x7bcc0e*/
      v17 = this->Buffer_field_14; /*0x7bcc12*/
      v55 = v14 - v16; /*0x7bcc15*/
      v53 = v16; /*0x7bcc19*/
      v56 = v15; /*0x7bcc1d*/
      result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v17 + 20))(v17, &v53, a4); /*0x7bcc29*/
    }
  }
  if ( a3 ) /*0x7bccf8*/
  {
    Buffer_field_10 = this->Buffer_field_10; /*0x7bccfe*/
    v25 = *((_DWORD *)this + 10); /*0x7bcd01*/
    this->Buffer_field_24 -= a3; /*0x7bcd16*/
    v26 = Buffer_field_10 + 2 * a3 * v25; /*0x7bcd19*/
    this->Buffer_field_10 = v26; /*0x7bcd1c*/
    v27 = a3 + Buffer_field_10 / 2 / v25; /*0x7bcd1f*/
    v28 = this->Buffer_field_18; /*0x7bcd21*/
    v29 = v28 + v26; /*0x7bcd24*/
    v58 = v27; /*0x7bcd26*/
    if ( v29 < v28 ) /*0x7bcd2c*/
      v29 += this->Buffer_field_20; /*0x7bcd2e*/
    if ( v29 >= this->Buffer_field_1C ) /*0x7bcd34*/
      v29 -= this->Buffer_field_20; /*0x7bcd36*/
    v30 = v29 - v28; /*0x7bcd3f*/
    this->Buffer_field_10 = v29 - v28; /*0x7bcd43*/
    if ( a3 >= 0 ) /*0x7bcd46*/
    {
      v44 = *((_DWORD *)this + 11); /*0x7bce1d*/
      if ( v58 >= v44 ) /*0x7bce26*/
      {
        v45 = 2 * *((_DWORD *)this + 10) * v44 - Buffer_field_10; /*0x7bce34*/
        LODWORD(v45) = v45 - HIDWORD(v45); /*0x7bce35*/
        v46 = (unsigned __int16 *)(v28 + Buffer_field_10); /*0x7bce37*/
        v47 = (int)v45 >> 1; /*0x7bce3c*/
        if ( (((_BYTE)v28 + (_BYTE)Buffer_field_10) & 2) != 0 && v47 ) /*0x7bce45*/
        {
          *v46++ = a4; /*0x7bce47*/
          --v47; /*0x7bce4d*/
        }
        v48 = 0; /*0x7bce50*/
        if ( v47 >> 1 ) /*0x7bce55*/
        {
          memset32(v46, 65537 * a4, v47 >> 1); /*0x7bce70*/
          v48 = &v46[2 * (v47 >> 1)]; /*0x7bce76*/
        }
        if ( (v47 & 1) != 0 && v48 ) /*0x7bce80*/
          *v48 = a4; /*0x7bce82*/
        v37 = this->Buffer_field_18; /*0x7bce8b*/
        v38 = this->Buffer_field_10 / 2; /*0x7bce90*/
        if ( (v37 & 2) != 0 && v38 ) /*0x7bce99*/
        {
          *(_WORD *)v37 = a4; /*0x7bce9b*/
          v37 += 2; /*0x7bce9e*/
          --v38; /*0x7bcea1*/
        }
        result = 0; /*0x7bcea4*/
        v49 = v38 >> 1; /*0x7bcea9*/
        if ( !(v38 >> 1) ) /*0x7bceab*/
          goto LABEL_54; /*0x7bceab*/
LABEL_53:
        memset32((void *)v37, 65537 * a4, v49); /*0x7bcec0*/
        result = (char *)(v37 + 4 * v49); /*0x7bcec2*/
LABEL_54:
        v43 = (v38 & 1) == 0; /*0x7bcec5*/
LABEL_55:
        if ( !v43 ) /*0x7bcec8*/
        {
          if ( result ) /*0x7bcecc*/
            *(_WORD *)result = a4; /*0x7bcecf*/
        }
        return result; /*0x7bced8*/
      }
      v37 = v28 + Buffer_field_10; /*0x7bcee2*/
      v38 = (int)(v30 - Buffer_field_10) / 2; /*0x7bcee7*/
      if ( (((_BYTE)v28 + (_BYTE)Buffer_field_10) & 2) != 0 && v38 ) /*0x7bcef0*/
        goto LABEL_60; /*0x7bcef0*/
    }
    else
    {
      if ( v27 >= 0 ) /*0x7bcd50*/
      {
        v39 = Buffer_field_10 - v30; /*0x7bcdd7*/
        v40 = (unsigned __int16 *)v29; /*0x7bcdd9*/
        v41 = v39 / 2; /*0x7bcde0*/
        if ( ((unsigned __int8)v40 & 2) != 0 && v41 ) /*0x7bcde9*/
        {
          *v40++ = a4; /*0x7bcdeb*/
          --v41; /*0x7bcdf1*/
        }
        result = 0; /*0x7bcdf4*/
        v42 = v41 >> 1; /*0x7bcdf9*/
        if ( v41 >> 1 ) /*0x7bcdf9*/
        {
          memset32(v40, 65537 * a4, v42); /*0x7bce10*/
          result = (char *)&v40[2 * v42]; /*0x7bce12*/
        }
        v43 = (v41 & 1) == 0; /*0x7bce15*/
        goto LABEL_55; /*0x7bce18*/
      }
      v31 = (char *)v28; /*0x7bcd59*/
      v32 = Buffer_field_10 / 2; /*0x7bcd5b*/
      v57 = Buffer_field_10 / 2; /*0x7bcd60*/
      if ( (v28 & 2) != 0 && v32 ) /*0x7bcd68*/
      {
        *(_WORD *)v28 = a4; /*0x7bcd6a*/
        v31 = (char *)(v28 + 2); /*0x7bcd6d*/
        LOBYTE(v57) = --v32; /*0x7bcd71*/
      }
      v33 = 0; /*0x7bcd77*/
      v34 = v32 >> 1; /*0x7bcd7c*/
      if ( v32 >> 1 ) /*0x7bcd7c*/
      {
        memset32(v31, 65537 * a4, v34); /*0x7bcd93*/
        LOBYTE(v32) = v57; /*0x7bcd95*/
        v33 = (unsigned __int16 *)&v31[4 * v34]; /*0x7bcd99*/
      }
      if ( (v32 & 1) != 0 && v33 ) /*0x7bcda2*/
        *v33 = a4; /*0x7bcda4*/
      v35 = this->Buffer_field_10; /*0x7bcdaa*/
      v36 = 2 * *((_DWORD *)this + 10) * *((_DWORD *)this + 11) - v35; /*0x7bcdb5*/
      LODWORD(v36) = v36 - HIDWORD(v36); /*0x7bcdb6*/
      v37 = v35 + this->Buffer_field_18; /*0x7bcdbd*/
      v38 = (int)v36 >> 1; /*0x7bcdbf*/
      if ( (v37 & 2) != 0 && v38 ) /*0x7bcdcc*/
      {
LABEL_60:
        *(_WORD *)v37 = a4; /*0x7bcef2*/
        v37 += 2; /*0x7bcef5*/
        --v38; /*0x7bcef8*/
      }
    }
    result = 0; /*0x7bcef9*/
    v49 = v38 >> 1; /*0x7bcf00*/
    if ( !(v38 >> 1) ) /*0x7bcf02*/
      goto LABEL_54; /*0x7bcf02*/
    goto LABEL_53; /*0x7bcf02*/
  }
  return result; /*0x7bcece*/
}



// ==== 0x007BCF50  MapClass::isCellShrouded  this=MapClass  sig=csp ====
int __thiscall MapClass::isCellShrouded(MapClass *this, unsigned __int16 a2)
{
  void *MapClass_field_0x28; // eax
  void *MapClass_field_0x14; // ecx
  _DWORD v5[4]; // [esp+0h] [ebp-10h] BYREF

  v5[3] = this->MapClass_field_0x2C; /*0x7bcf58*/
  v5[0] = 0; /*0x7bcf60*/
  v5[1] = 0; /*0x7bcf64*/
  MapClass_field_0x28 = this->MapClass_field_0x28; /*0x7bcf68*/
  MapClass_field_0x14 = this->MapClass_field_0x14; /*0x7bcf6b*/
  v5[2] = MapClass_field_0x28; /*0x7bcf74*/
  return (*(int (__thiscall **)(void *, _DWORD *, _DWORD))(*(_DWORD *)MapClass_field_0x14 + 20))( /*0x7bcf83*/
           MapClass_field_0x14,
           v5,
           a2);
}



// ==== 0x007BCFB0  TacticalMap::FillScanlinesOpaque  this=TacticalMap  sig=csp ====
unsigned int __thiscall TacticalMap::FillScanlinesOpaque(TacticalMap *this, int a2, int a3, int a4, int a5)
{
  TacticalMap *v5; // edi
  int v6; // esi
  unsigned int result; // eax
  unsigned int v8; // edx
  int v9; // ecx
  char *v10; // ebp
  unsigned int v11; // eax
  char *v12; // edi
  int v13; // esi
  int v14; // eax
  float m_TintFactor; // ebx
  _WORD *v16; // ecx
  int v17; // esi
  int v18; // ebx
  char *v19; // ebp
  char *v20; // eax
  int v21; // esi
  int v23; // [esp+Ch] [ebp-Ch]
  float v24; // [esp+Ch] [ebp-Ch]
  char v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]

  v5 = this; /*0x7bcfbd*/
  v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)this->TacticalMap_field_14 + 92))( /*0x7bcfd0*/
         this->TacticalMap_field_14,
         a2,
         a3);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5->TacticalMap_field_14 + 96))(v5->TacticalMap_field_14); /*0x7bcfd4*/
  result = v5->TacticalMap_field_1C; /*0x7bcfda*/
  v8 = v6 + v5->TacticalMap_field_10; /*0x7bcfdd*/
  if ( v8 >= result ) /*0x7bcfe1*/
    v8 -= v5->TacticalMap_field_20; /*0x7bcfe3*/
  if ( a5 > 0 ) /*0x7bcfec*/
  {
    v26 = a5; /*0x7bcff4*/
    do /*0x7bd0cf*/
    {
      v9 = a4; /*0x7bcff8*/
      if ( v8 + 2 * a4 < result ) /*0x7bd001*/
      {
        v18 = a4; /*0x7bd0e2*/
        v19 = (char *)v8; /*0x7bd0e4*/
        if ( (v8 & 2) != 0 && a4 ) /*0x7bd0ea*/
        {
          *(_WORD *)v8 = -1; /*0x7bd0ec*/
          v19 = (char *)(v8 + 2); /*0x7bd0f1*/
          v18 = a4 - 1; /*0x7bd0f4*/
        }
        v20 = 0; /*0x7bd0f9*/
        v21 = v18 >> 1; /*0x7bd0fe*/
        if ( v18 >> 1 ) /*0x7bd0fe*/
        {
          memset(v19, 0xFFu, 4 * v21); /*0x7bd109*/
          v5 = this; /*0x7bd10b*/
          v20 = &v19[4 * v21]; /*0x7bd10f*/
        }
        if ( (v18 & 1) != 0 && v20 ) /*0x7bd11a*/
          *(_WORD *)v20 = -1; /*0x7bd11c*/
      }
      else
      {
        v10 = (char *)v8; /*0x7bd009*/
        v11 = (result - v8) >> 1; /*0x7bd00b*/
        v23 = v11; /*0x7bd012*/
        if ( (v8 & 2) != 0 && v11 ) /*0x7bd01a*/
        {
          *(_WORD *)v8 = -1; /*0x7bd01f*/
          v10 = (char *)(v8 + 2); /*0x7bd024*/
          v23 = v11 - 1; /*0x7bd027*/
        }
        v12 = 0; /*0x7bd02f*/
        v13 = v23 >> 1; /*0x7bd034*/
        if ( v23 >> 1 ) /*0x7bd034*/
        {
          memset(v10, 0xFFu, 4 * v13); /*0x7bd03f*/
          v9 = a4; /*0x7bd041*/
          v12 = &v10[4 * v13]; /*0x7bd045*/
        }
        if ( (v23 & 1) != 0 && v12 ) /*0x7bd052*/
          *(_WORD *)v12 = -1; /*0x7bd054*/
        v14 = v9 - v11; /*0x7bd05f*/
        m_TintFactor = this->m_TintFactor; /*0x7bd061*/
        v25 = v14; /*0x7bd064*/
        v24 = m_TintFactor; /*0x7bd06b*/
        if ( (LOBYTE(m_TintFactor) & 2) != 0 && v14 ) /*0x7bd073*/
        {
          *(_WORD *)LODWORD(m_TintFactor) = -1; /*0x7bd075*/
          LODWORD(m_TintFactor) += 2; /*0x7bd07a*/
          --v14; /*0x7bd07d*/
          v24 = m_TintFactor; /*0x7bd07e*/
          v25 = v14; /*0x7bd082*/
        }
        v16 = 0; /*0x7bd088*/
        v17 = v14 >> 1; /*0x7bd08d*/
        if ( v14 >> 1 ) /*0x7bd08d*/
        {
          memset((void *)LODWORD(m_TintFactor), 0xFFu, 4 * v17); /*0x7bd098*/
          v16 = (_WORD *)(LODWORD(v24) + 4 * v17); /*0x7bd09e*/
          LOBYTE(v14) = v25; /*0x7bd0a1*/
        }
        if ( (v14 & 1) != 0 && v16 ) /*0x7bd0ab*/
          *v16 = -1; /*0x7bd0ad*/
        v5 = this; /*0x7bd0b2*/
      }
      result = v5->TacticalMap_field_1C; /*0x7bd0b9*/
      v8 += 2 * v5[1].TacticalMap_field_04; /*0x7bd0bc*/
      if ( v8 >= result ) /*0x7bd0c1*/
        v8 -= v5->TacticalMap_field_20; /*0x7bd0c3*/
      --v26; /*0x7bd0cb*/
    }
    while ( v26 ); /*0x7bd0cf*/
  }
  return result; /*0x7bd0d7*/
}



// ==== 0x007BD130  Audio::GetSamplePosition  this=BSurface  sig=csp ====
int __thiscall Audio::GetSamplePosition(int *this, int a2, int a3)
{
  int v4; // edi
  int result; // eax

  v4 = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)this->Buffer + 92))(this->Buffer, a2, a3); /*0x7bd149*/
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)this->Buffer + 96))(this->Buffer); /*0x7bd14d*/
  result = v4 + this->Width; /*0x7bd156*/
  if ( result >= (unsigned int)*(this + 7) ) /*0x7bd15a*/
    result -= this->Height; /*0x7bd15c*/
  return result; /*0x7bd15f*/
}



// ==== 0x007BD170  ObjectClass::Audio_Render_7BD170  this=ObjectClass  sig=csp ====
int __thiscall Audio_Render_7BD170(UnitClass *this)
{
  int result; // eax
  char v3; // cl
  char v4; // dl
  int v5; // eax
  __int16 v6; // [esp+4h] [ebp-10h] BYREF
  char v7; // [esp+6h] [ebp-Eh]
  char v8; // [esp+7h] [ebp-Dh]
  int (__cdecl *v9)(int); // [esp+Ch] [ebp-8h]
  int (__cdecl *v10)(_DWORD *, int); // [esp+10h] [ebp-4h]

  if ( !*(_DWORD *)&this->ToolTipText[164] ) /*0x7bd176*/
    return -13; /*0x7bd180*/
  *(_DWORD *)&this->ToolTipText[184] = 0; /*0x7bd18a*/
  *(_DWORD *)&this->ToolTipText[188] = -1; /*0x7bd194*/
  *(_DWORD *)&this->ToolTipText[220] = 0; /*0x7bd19e*/
  v3 = BYTE2(this->ambientSoundController[0]); /*0x7bd1ac*/
  v4 = HIBYTE(this->ambientSoundController[0]); /*0x7bd1af*/
  v6 = this->ambientSoundController[0]; /*0x7bd1b2*/
  this->attachedBomb = 0; /*0x7bd1c1*/
  v7 = v3; /*0x7bd1c8*/
  v8 = v4; /*0x7bd1cc*/
  v9 = sub_7BD470; /*0x7bd1d0*/
  v10 = sub_7BD5C0; /*0x7bd1d8*/
  result = ((int (__cdecl *)(UnitClass *, int, __int16 *, int))this->customSound_controller[2])(this, 2, &v6, 16); /*0x7bd1e0*/
  if ( result >= -1 ) /*0x7bd1e8*/
  {
    v5 = *(_DWORD *)&this->ToolTipText[212]; /*0x7bd1ef*/
    if ( v5 >= 0 ) /*0x7bd1fa*/
      *(_DWORD *)&this->ToolTipText[212] = v5 | 0x80000000; /*0x7bd201*/
    return -1; /*0x7bd207*/
  }
  return result; /*0x7bd185*/
}



// ==== 0x007BD210  DSurface::LockAndPrepareRect  this=DSurface  sig=csp ====
int __thiscall DSurface::LockAndPrepareRect(DSurface *this)
{
  int v2; // eax
  int result; // eax

  if ( (*((_BYTE *)this + 1980) & 0x40) != 0 ) /*0x7bd21a*/
  {
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[44])(this, 7, 0, 0); /*0x7bd223*/
    v2 = *((_DWORD *)this + 495); /*0x7bd226*/
    LOBYTE(v2) = v2 & 0xBF; /*0x7bd22f*/
    *((_DWORD *)this + 495) = v2; /*0x7bd231*/
  }
  (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[44])(this, 3, 0, 0); /*0x7bd23e*/
  result = *((_DWORD *)this + 495); /*0x7bd241*/
  if ( (result & 0x80000000) == 1 ) /*0x7bd255*/
  {
    result &= ~0x80000000; /*0x7bd257*/
    *((_DWORD *)this + 495) = result; /*0x7bd25c*/
  }
  return result; /*0x7bd262*/
}



// ==== 0x007BD270  AudioStream::SetFlag4C  this=AudioStream  sig=csp ====
int __thiscall AudioStream::SetFlag4C(AudioStream *this)
{
  int result; // eax

  ((void (__cdecl *)(AudioStream *, int, _DWORD, _DWORD))this->AudioStream_field_0x58)(this, 4, 0, 0); /*0x7bd27a*/
  result = *((_DWORD *)this + 495); /*0x7bd27d*/
  LOBYTE(result) = result | 0x40; /*0x7bd286*/
  *((_DWORD *)this + 495) = result; /*0x7bd288*/
  return result; /*0x7bd28e*/
}



// ==== 0x007BD290  ObjectClass::Audio_Process_7BD290  this=ObjectClass  sig=csp ====
char __thiscall Audio_Process_7BD290(UnitClass *this)
{
  int v2; // eax

  ((void (__cdecl *)(UnitClass *, int, _DWORD, _DWORD))this->customSound_controller[2])(this, 6, 0, 0); /*0x7bd29a*/
  v2 = *(_DWORD *)&this->ToolTipText[212]; /*0x7bd29d*/
  LOBYTE(v2) = v2 & 0xBF; /*0x7bd2a6*/
  *(_DWORD *)&this->ToolTipText[212] = v2; /*0x7bd2a8*/
  return v2; /*0x7bd2ae*/
}



// ==== 0x007BD2B0  ObjectClass::Audio_Process_7BD2B0  this=ObjectClass  sig=csp ====
char __thiscall Audio_Process_7BD2B0(UnitClass *this)
{
  int v2; // eax

  ((void (__cdecl *)(UnitClass *, int, _DWORD, _DWORD))this->customSound_controller[2])(this, 7, 0, 0); /*0x7bd2ba*/
  v2 = *(_DWORD *)&this->ToolTipText[212]; /*0x7bd2bd*/
  LOBYTE(v2) = v2 & 0xBF; /*0x7bd2c6*/
  *(_DWORD *)&this->ToolTipText[212] = v2; /*0x7bd2c8*/
  return v2; /*0x7bd2ce*/
}



// ==== 0x007BD2D0  AudioStream::CalcReadPos  this=AudioStream  sig=csp ====
int __thiscall AudioStream::CalcReadPos(AudioStream *this)
{
  int v2; // ebp
  int v3; // eax
  int v4; // edi
  unsigned int v5; // ecx
  char *v6; // esi
  unsigned int v7; // ebp
  unsigned int v8; // eax
  unsigned int v9; // ecx
  int v11; // esi
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // esi
  unsigned int i; // ecx
  unsigned int v17; // [esp+10h] [ebp-Ch]

  if ( (this->__pad_5C[40] & 1) == 0 ) /*0x7bd2e1*/
    return -1; /*0x7bd2e1*/
  if ( !*((_DWORD *)this + 483) ) /*0x7bd2e7*/
    return -1; /*0x7bd2e7*/
  v2 = *((_DWORD *)this + 492); /*0x7bd2f5*/
  if ( !v2 ) /*0x7bd2fd*/
    return -1; /*0x7bd2fd*/
  v3 = *((_DWORD *)this + 491); /*0x7bd303*/
  v4 = *((_DWORD *)this + 484); /*0x7bd30f*/
  v5 = *(_DWORD *)this->__pad_9C; /*0x7bd315*/
  v6 = (char *)(v3 + *((_DWORD *)this + 490)); /*0x7bd31b*/
  v7 = v2 - v3; /*0x7bd31d*/
  v17 = *((_DWORD *)this + 484) / v5; /*0x7bd32b*/
  v8 = (v4 + v7) / v5; /*0x7bd332*/
  v9 = *((_DWORD *)this + 487); /*0x7bd334*/
  if ( v8 >= v9 ) /*0x7bd33c*/
    v8 -= v9; /*0x7bd33e*/
  if ( *(_BYTE *)(*((_DWORD *)this + 485) + v8) == 1 ) /*0x7bd34a*/
  {
    ++*(_DWORD *)&this->__pad_D8[180]; /*0x7bd355*/
    return -11; /*0x7bd365*/
  }
  if ( v17 > v8 ) /*0x7bd36a*/
  {
    v13 = (unsigned int)this->AudioStream_field_0x98 - v4; /*0x7bd3cd*/
    qmemcpy((void *)(*((_DWORD *)this + 483) + v4), v6, v13); /*0x7bd3e4*/
    qmemcpy(*((void **)this + 483), &v6[v13], v7 - v13); /*0x7bd404*/
    v14 = v17; /*0x7bd40f*/
    v15 = *((_DWORD *)this + 487); /*0x7bd413*/
    *((_DWORD *)this + 484) = v7 - v13; /*0x7bd41b*/
    *((_DWORD *)this + 492) = 0; /*0x7bd421*/
    *((_DWORD *)this + 491) = 0; /*0x7bd427*/
    if ( v17 < v15 ) /*0x7bd42d*/
    {
      do /*0x7bd443*/
      {
        ++v14; /*0x7bd435*/
        *(_BYTE *)(*((_DWORD *)this + 485) + v14 - 1) = 1; /*0x7bd436*/
      }
      while ( v14 < *((_DWORD *)this + 487) ); /*0x7bd443*/
    }
    for ( i = 0; i < v8; *(_BYTE *)(*((_DWORD *)this + 485) + i - 1) = 1 ) /*0x7bd449*/
      ++i; /*0x7bd451*/
    return -1; /*0x7bd459*/
  }
  qmemcpy((void *)(*((_DWORD *)this + 483) + v4), v6, v7); /*0x7bd37b*/
  v11 = *((_DWORD *)this + 484); /*0x7bd384*/
  *((_DWORD *)this + 492) = 0; /*0x7bd38c*/
  *((_DWORD *)this + 491) = 0; /*0x7bd392*/
  v12 = v17; /*0x7bd398*/
  *((_DWORD *)this + 484) = v7 + v11; /*0x7bd3a0*/
  if ( v17 >= v8 ) /*0x7bd3a6*/
    return -1; /*0x7bd45e*/
  do /*0x7bd3ba*/
  {
    ++v12; /*0x7bd3b2*/
    *(_BYTE *)(*((_DWORD *)this + 485) + v12 - 1) = 1; /*0x7bd3b5*/
  }
  while ( v12 < v8 ); /*0x7bd3ba*/
  return -1; /*0x7bd352*/
}



// ==== 0x007BD470  sub_7BD470  this=-  sig=ida-proto ====
int __cdecl sub_7BD470(int a1)
{
  int v1; // ebx
  int v2; // edi
  int v4; // ecx
  int v5; // esi
  int v6; // edx
  char v7; // bl
  int v8; // ecx
  int v9; // edx
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // ecx

  v1 = *(_DWORD *)(a1 + 1980); /*0x7bd476*/
  v2 = *(_DWORD *)(a1 + 156); /*0x7bd47c*/
  if ( (v1 & 0x200) != 0 ) /*0x7bd485*/
    return 0; /*0x7bd48b*/
  v4 = *(_DWORD *)(a1 + 1952); /*0x7bd492*/
  v5 = *(_DWORD *)(a1 + 1988); /*0x7bd49a*/
  if ( (*(_DWORD *)(a1 + 132) & 0x200) != 0 ) /*0x7bd4a3*/
  {
    v6 = v4 + 1; /*0x7bd4ab*/
    if ( (unsigned int)(v4 + 1) >= *(_DWORD *)(a1 + 1948) ) /*0x7bd4b0*/
      v6 = 0; /*0x7bd4b2*/
    if ( (v1 & 0x100) == 0 && !*(_BYTE *)(v6 + *(_DWORD *)(a1 + 1940)) ) /*0x7bd4bf*/
    {
      BYTE1(v1) |= 4u; /*0x7bd4c5*/
      *(_DWORD *)(a1 + 1980) = v1; /*0x7bd4c8*/
    }
  }
  v7 = 0; /*0x7bd4d4*/
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 1940) + v4) == 1 ) /*0x7bd4da*/
  {
    if ( *(_DWORD *)(a1 + 1956) == -1 ) /*0x7bd4e3*/
    {
      *(_DWORD *)(a1 + 1956) = v4; /*0x7bd4e5*/
      *(_DWORD *)(a1 + 1984) = v5; /*0x7bd4eb*/
    }
    v8 = v4 + 1; /*0x7bd4f7*/
    *(_WORD *)(*(_DWORD *)(a1 + 1944) + 2 * v8 - 2) = 0; /*0x7bd4f8*/
    v9 = v5 + v2; /*0x7bd505*/
    if ( v5 + v2 >= *(_DWORD *)(a1 + 152) ) /*0x7bd50a*/
    {
      v9 = 0; /*0x7bd50c*/
      v8 = 0; /*0x7bd50e*/
    }
    *(_DWORD *)(a1 + 1988) = v9; /*0x7bd510*/
    *(_DWORD *)(a1 + 1952) = v8; /*0x7bd516*/
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 1980); /*0x7bd51e*/
    if ( (v10 & 0x100) != 0 ) /*0x7bd527*/
    {
      v11 = *(_DWORD *)(a1 + 1936); /*0x7bd529*/
      BYTE1(v10) |= 2u; /*0x7bd52f*/
      *(_DWORD *)(a1 + 1980) = v10; /*0x7bd534*/
      if ( v5 >= v11 ) /*0x7bd53a*/
        return 0; /*0x7bd54a*/
      v2 = v11 - v5; /*0x7bd53e*/
    }
    else
    {
      LOBYTE(v10) = v10 | 0x80; /*0x7bd54b*/
      v5 -= v2; /*0x7bd54e*/
      *(_DWORD *)(a1 + 1980) = v10; /*0x7bd550*/
      v12 = v4 - 1; /*0x7bd55a*/
      v7 = 1; /*0x7bd55d*/
      ++*(_DWORD *)(a1 + 56); /*0x7bd55f*/
      if ( v5 < 0 ) /*0x7bd562*/
      {
        v5 = *(_DWORD *)(a1 + 152) - v2; /*0x7bd570*/
        v12 = *(_DWORD *)(a1 + 1948) - 1; /*0x7bd572*/
      }
      ++*(_WORD *)(*(_DWORD *)(a1 + 1944) + 2 * v12); /*0x7bd579*/
    }
  }
  if ( v2 > 0 ) /*0x7bd582*/
  {
    if ( v7 == 1 ) /*0x7bd588*/
    {
      (*(void (__cdecl **)(int, int, _DWORD, int))(a1 + 88))(a1, 5, *(_DWORD *)(a1 + 1976), v2); /*0x7bd594*/
      return v2; /*0x7bd5a0*/
    }
    (*(void (__cdecl **)(int, int, int, int))(a1 + 88))(a1, 5, v5 + *(_DWORD *)(a1 + 1932), v2); /*0x7bd5ad*/
  }
  return v2; /*0x7bd487*/
}



// ==== 0x007BD5C0  sub_7BD5C0  this=-  sig=ida-proto ====
int __cdecl sub_7BD5C0(_DWORD *a1, int a2)
{
  int v3; // ecx
  int v4; // edx
  __int16 v5; // si
  _WORD *v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // ebx

  if ( a2 != a1[483] + a1[496] && a2 != a1[494] ) /*0x7bd5e0*/
    return -19; /*0x7bd5e2*/
  v3 = a1[489]; /*0x7bd5e8*/
  if ( v3 == -1 ) /*0x7bd5f1*/
    return -20; /*0x7bd67f*/
  v4 = a1[486]; /*0x7bd5f7*/
  v5 = *(_WORD *)(v4 + 2 * v3); /*0x7bd5ff*/
  v6 = (_WORD *)(v4 + 2 * v3); /*0x7bd603*/
  if ( v5 ) /*0x7bd609*/
  {
    *v6 = v5 - 1; /*0x7bd679*/
    return -1; /*0x7bd676*/
  }
  else
  {
    v7 = v3 + 1; /*0x7bd611*/
    *(_BYTE *)(a1[485] + v7 - 1) = 0; /*0x7bd612*/
    if ( v7 >= a1[487] ) /*0x7bd61f*/
      v7 = 0; /*0x7bd621*/
    if ( *(_BYTE *)(a1[485] + v7) == 1 ) /*0x7bd62d*/
    {
      v8 = a1[39] + a1[496]; /*0x7bd63b*/
      a1[496] = v8; /*0x7bd63d*/
      if ( v8 >= a1[38] ) /*0x7bd64d*/
        a1[496] = 0; /*0x7bd64f*/
      a1[489] = v7; /*0x7bd659*/
      return -1; /*0x7bd660*/
    }
    else
    {
      a1[489] = -1; /*0x7bd665*/
      return -1; /*0x7bd670*/
    }
  }
}



// ==== 0x007BD690  Surface::CommitSurfaceBuffersAudio  this=Surface  sig=csp ====
int __thiscall Surface::CommitSurfaceBuffersAudio(BSurface *this)
{
  int v3; // eax
  char v4; // cl
  unsigned int v5; // eax
  unsigned int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  _WORD *v10; // ebp
  int v11; // ebx
  int v12; // ecx
  unsigned __int16 *v13; // edi
  int v14; // ecx
  unsigned __int16 *v15; // edi
  int v16; // edx
  int v17; // ecx
  _WORD *v18; // eax
  int v19; // ecx
  _WORD *v20; // eax
  _DWORD *v21; // ebx
  int v22; // eax
  int v23; // eax
  _DWORD *v24; // ebp
  int v25; // eax
  int v26; // ebx
  _DWORD *v27; // ebx
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  _DWORD *v32; // ebp
  int v33; // edx
  int v34; // eax
  int v35; // edi
  int v36; // edx
  __int16 v37; // ax
  int v38; // ecx
  unsigned __int8 v39; // cl
  int v40; // edx
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  unsigned int v48; // [esp-14h] [ebp-38h]
  int v49; // [esp-4h] [ebp-28h]
  int v50; // [esp-4h] [ebp-28h]
  int v51; // [esp-4h] [ebp-28h]
  int v52; // [esp+10h] [ebp-14h]
  int v53; // [esp+14h] [ebp-10h]
  int v54; // [esp+18h] [ebp-Ch]
  int v55; // [esp+1Ch] [ebp-8h]
  int v56; // [esp+1Ch] [ebp-8h]
  int v57; // [esp+1Ch] [ebp-8h]
  int v58; // [esp+20h] [ebp-4h]

  if ( !*((_DWORD *)this + 34) ) /*0x7bd699*/
    return -8; /*0x7bd6af*/
  v3 = *((unsigned __int8 *)this + 243) * *((unsigned __int8 *)this + 242) * *((unsigned __int16 *)this + 124) + 4; /*0x7bd6cf*/
  LOBYTE(v3) = v3 & 0xFC; /*0x7bd6d2*/
  *((_DWORD *)this + 477) = v3; /*0x7bd6d4*/
  v4 = *((_BYTE *)this + 264); /*0x7bd6da*/
  if ( v4 == 1 || v4 == 4 ) /*0x7bd6e8*/
    *((_DWORD *)this + 477) = 2 * v3; /*0x7bd6ec*/
  v5 = *(_DWORD *)((char *)this + 266); /*0x7bd6f2*/
  v6 = *((_DWORD *)this + 477); /*0x7bd6f8*/
  if ( v5 > v6 ) /*0x7bd700*/
    return -3; /*0x7bd70e*/
  if ( !v5 ) /*0x7bd711*/
    *(_DWORD *)((char *)this + 266) = v6; /*0x7bd713*/
  if ( *((int *)this + 35) > 0 ) /*0x7bd721*/
    goto LABEL_57; /*0x7bd721*/
  if ( *((_WORD *)this + 934) ) /*0x7bd727*/
    v7 = *((unsigned __int16 *)this + 935); /*0x7bd735*/
  else
    v7 = *((unsigned __int8 *)this + 245); /*0x7bd746*/
  if ( v7 != this->BytesPerPixel ) /*0x7bd74b*/
  {
    v8 = *((_DWORD *)this + 34); /*0x7bd75c*/
    v52 = 0; /*0x7bd762*/
    if ( v8 <= 1 ) /*0x7bd76d*/
      goto LABEL_56; /*0x7bd76d*/
    v52 = (v8 - 2) / v7 + 1; /*0x7bd77a*/
    if ( (*((_BYTE *)this + 132) & 0x20) == 0 ) /*0x7bd786*/
      goto LABEL_56; /*0x7bd786*/
    if ( !*((_WORD *)this + 906) ) /*0x7bd78c*/
    {
      v9 = (v8 - 2) / v7 + 3; /*0x7bd79c*/
      goto LABEL_55; /*0x7bd79f*/
    }
    v10 = (_WORD *)*((_DWORD *)this + 455); /*0x7bd7a4*/
    v11 = *((unsigned __int8 *)this + 245); /*0x7bd7ac*/
    v55 = *((unsigned __int16 *)this + 906); /*0x7bd7bb*/
    if ( *((_BYTE *)this + 245) ) /*0x7bd7ac*/
    {
      v12 = 0; /*0x7bd7c1*/
      v53 = 0; /*0x7bd7c5*/
      v54 = 0; /*0x7bd7c9*/
      if ( *((_WORD *)this + 906) ) /*0x7bd7b4*/
      {
        v13 = (unsigned __int16 *)*((_DWORD *)this + 455); /*0x7bd7cf*/
        while ( !(*v13 % v11) ) /*0x7bd7db*/
        {
          ++v12; /*0x7bd7e1*/
          v13 += 2; /*0x7bd7e2*/
          if ( v12 >= v55 ) /*0x7bd7e7*/
            goto LABEL_27; /*0x7bd7e7*/
        }
        v53 = 1; /*0x7bd7eb*/
      }
LABEL_27:
      v14 = 0; /*0x7bd7f3*/
      if ( *((_WORD *)this + 906) ) /*0x7bd7b4*/
      {
        v15 = v10 + 1; /*0x7bd801*/
        while ( !(*v15 % v11) ) /*0x7bd810*/
        {
          ++v14; /*0x7bd812*/
          v15 += 2; /*0x7bd813*/
          if ( v14 >= v55 ) /*0x7bd818*/
            goto LABEL_51; /*0x7bd818*/
        }
        v54 = 1; /*0x7bd81f*/
      }
LABEL_51:
      if ( !v53 ) /*0x7bd8db*/
        goto LABEL_53; /*0x7bd8db*/
    }
    else
    {
      v53 = 1; /*0x7bd837*/
      v54 = 1; /*0x7bd83b*/
      v16 = *((unsigned __int16 *)this + 934); /*0x7bd84b*/
      v58 = 0; /*0x7bd84d*/
      if ( *((_WORD *)this + 906) ) /*0x7bd7b4*/
      {
        while ( 1 ) /*0x7bd85b*/
        {
          if ( v53 ) /*0x7bd861*/
          {
            v17 = 0; /*0x7bd863*/
            if ( *((_WORD *)this + 934) ) /*0x7bd84b*/
            {
              v18 = (_WORD *)*((_DWORD *)this + 469); /*0x7bd86d*/
              while ( *v10 != *v18 ) /*0x7bd872*/
              {
                ++v17; /*0x7bd874*/
                v18 += 3; /*0x7bd875*/
                if ( v17 >= v16 ) /*0x7bd87a*/
                  goto LABEL_41; /*0x7bd87a*/
              }
              v53 = 0; /*0x7bd87e*/
            }
          }
LABEL_41:
          if ( v54 ) /*0x7bd88c*/
          {
            v19 = 0; /*0x7bd88e*/
            if ( *((_WORD *)this + 934) ) /*0x7bd84b*/
            {
              v20 = (_WORD *)*((_DWORD *)this + 469); /*0x7bd898*/
              while ( v10[1] != *v20 ) /*0x7bd89d*/
              {
                ++v19; /*0x7bd89f*/
                v20 += 3; /*0x7bd8a0*/
                if ( v19 >= v16 ) /*0x7bd8a5*/
                  goto LABEL_48; /*0x7bd8a5*/
              }
              v54 = 0; /*0x7bd8a9*/
            }
          }
LABEL_48:
          if ( !v53 && !v54 ) /*0x7bd8bf*/
            goto LABEL_56; /*0x7bd8bf*/
          v10 += 2; /*0x7bd8ca*/
          if ( ++v58 >= v55 ) /*0x7bd8d3*/
            goto LABEL_51; /*0x7bd8d3*/
        }
      }
    }
    ++v52; /*0x7bd8dd*/
LABEL_53:
    if ( !v54 ) /*0x7bd8e7*/
    {
LABEL_56:
      *((_DWORD *)this + 35) = v52 + 2; /*0x7bd8f2*/
      goto LABEL_57; /*0x7bd8f9*/
    }
    v9 = v52 + 1; /*0x7bd8ed*/
LABEL_55:
    v52 = v9; /*0x7bd8ee*/
    goto LABEL_56; /*0x7bd8ee*/
  }
  *((_DWORD *)this + 35) = 1; /*0x7bd74d*/
LABEL_57:
  v49 = *((_DWORD *)this + 477); /*0x7bd8ff*/
  *((_DWORD *)this + 85) |= 1u; /*0x7bd90f*/
  v21 = 0; /*0x7bd91b*/
  *((_DWORD *)this + 474) = (*(_DWORD *)((char *)this + 266) + 16) & 0xFFFFFFFC; /*0x7bd927*/
  v22 = (*((int (__cdecl **)(BSurface *, int, _DWORD, int))this + 17))(this, 2, 0, v49); /*0x7bd92d*/
  *((_DWORD *)this + 444) = v22; /*0x7bd935*/
  if ( !v22 ) /*0x7bd93b*/
    goto LABEL_103; /*0x7bd93b*/
  (*((void (__cdecl **)(BSurface *, int, int, _DWORD))this + 17))(this, 4, v22, *((_DWORD *)this + 477)); /*0x7bd95c*/
  *((_DWORD *)this + 12) += *((_DWORD *)this + 477); /*0x7bd96d*/
  v56 = 0; /*0x7bd978*/
  if ( *((int *)this + 35) > 0 ) /*0x7bd97c*/
  {
    while ( 1 ) /*0x7bd991*/
    {
      v23 = (*((int (__cdecl **)(BSurface *, int, _DWORD, int))this + 17))(this, 2, 0, *((_DWORD *)this + 474) + 24); /*0x7bd991*/
      v24 = (_DWORD *)v23; /*0x7bd994*/
      if ( !v23 ) /*0x7bd99b*/
        goto LABEL_103; /*0x7bd99b*/
      (*((void (__cdecl **)(BSurface *, int, int, int))this + 17))(this, 4, v23, *((_DWORD *)this + 474) + 24); /*0x7bd9af*/
      *((_DWORD *)this + 12) += *((_DWORD *)this + 474) + 24; /*0x7bd9c4*/
      memset(v24, 0, 0x18u); /*0x7bd9cc*/
      *v24 = v24 + 6; /*0x7bd9d6*/
      if ( v21 ) /*0x7bd9d9*/
      {
        v21[1] = v24; /*0x7bd9e3*/
        v24[2] = v21; /*0x7bd9e6*/
      }
      else
      {
        *((_DWORD *)this + 443) = v24; /*0x7bd9db*/
      }
      v21 = v24; /*0x7bd9f4*/
      if ( ++v56 >= *((_DWORD *)this + 35) ) /*0x7bd9fc*/
      {
        if ( v24 ) /*0x7bda00*/
        {
          v24[1] = *((_DWORD *)this + 443); /*0x7bda08*/
          *(_DWORD *)(*((_DWORD *)this + 443) + 8) = v24; /*0x7bda11*/
        }
        break; /*0x7bda11*/
      }
    }
  }
  v25 = *((_DWORD *)this + 443); /*0x7bda14*/
  v26 = *((_DWORD *)this + 474); /*0x7bda1a*/
  *((_DWORD *)this + 89) = v25; /*0x7bda20*/
  *((_DWORD *)this + 90) = v25; /*0x7bda26*/
  *((_DWORD *)this + 474) = v26 - 4; /*0x7bda31*/
  *((_DWORD *)this + 476) = 1020; /*0x7bda37*/
  v27 = 0; /*0x7bda69*/
  v28 = (2 /*0x7bda72*/
       * *((unsigned __int16 *)this + 120)
       / (int)*((unsigned __int8 *)this + 243)
       * (*((unsigned __int16 *)this + 119)
        / (int)*((unsigned __int8 *)this + 242))
       + 4)
      & 0xFFFFFFFC;
  *((_DWORD *)this + 478) = v28; /*0x7bda75*/
  if ( *((_WORD *)this + 127) ) /*0x7bda7b*/
  {
    v29 = *((unsigned __int16 *)this + 127); /*0x7bda8b*/
    if ( *((_WORD *)this + 116) > 2u ) /*0x7bda98*/
      v29 <<= 8; /*0x7bda9a*/
  }
  else
  {
    v29 = v28; /*0x7bda87*/
  }
  v30 = v29 + 8; /*0x7bdaa9*/
  v50 = *((_DWORD *)this + 478); /*0x7bdaac*/
  LOBYTE(v30) = v30 & 0xFC; /*0x7bdab1*/
  *((_DWORD *)this + 85) |= 2u; /*0x7bdab6*/
  *((_DWORD *)this + 475) = v30; /*0x7bdabc*/
  v31 = (*((int (__cdecl **)(BSurface *, int, _DWORD, int))this + 17))(this, 2, 0, v50); /*0x7bdac2*/
  *((_DWORD *)this + 442) = v31; /*0x7bdaca*/
  if ( !v31 ) /*0x7bdad0*/
  {
LABEL_103:
    DSurface::CommitBuffers((DSurface *)this); /*0x7bdf14*/
    return -8; /*0x7bdf27*/
  }
  (*((void (__cdecl **)(BSurface *, int, int, _DWORD))this + 17))(this, 4, v31, *((_DWORD *)this + 478)); /*0x7bdaf1*/
  *((_DWORD *)this + 12) += *((_DWORD *)this + 478); /*0x7bdb02*/
  v57 = 0; /*0x7bdb0d*/
  if ( *((int *)this + 34) > 0 ) /*0x7bdb11*/
  {
    while ( 1 ) /*0x7bdb30*/
    {
      v32 = (_DWORD *)(*((int (__cdecl **)(BSurface *, int, _DWORD, int))this + 17))( /*0x7bdb30*/
                        this,
                        2,
                        0,
                        *((_DWORD *)this + 476) + *((_DWORD *)this + 475) + 44);
      if ( !v32 ) /*0x7bdb37*/
        goto LABEL_103; /*0x7bdb37*/
      (*((void (__cdecl **)(BSurface *, int, _DWORD *, int))this + 17))( /*0x7bdb52*/
        this,
        4,
        v32,
        *((_DWORD *)this + 476) + *((_DWORD *)this + 475) + 44);
      *((_DWORD *)this + 12) += *((_DWORD *)this + 476) + *((_DWORD *)this + 475) + 44; /*0x7bdb71*/
      memset(v32, 0, 0x2Cu); /*0x7bdb79*/
      *v32 = v32 + 11; /*0x7bdb7e*/
      v33 = (int)v32 + *((_DWORD *)this + 475) + 44; /*0x7bdb89*/
      v32[1] = 0; /*0x7bdb8d*/
      v32[2] = v33; /*0x7bdb94*/
      if ( v27 ) /*0x7bdb97*/
      {
        v27[3] = v32; /*0x7bdba1*/
        v32[4] = v27; /*0x7bdba4*/
      }
      else
      {
        *((_DWORD *)this + 441) = v32; /*0x7bdb99*/
      }
      v27 = v32; /*0x7bdbb2*/
      if ( ++v57 >= *((_DWORD *)this + 34) ) /*0x7bdbba*/
      {
        v32[3] = *((_DWORD *)this + 441); /*0x7bdbca*/
        *(_DWORD *)(*((_DWORD *)this + 441) + 16) = v32; /*0x7bdbd3*/
        break; /*0x7bdbd3*/
      }
    }
  }
  v34 = *((_DWORD *)this + 441); /*0x7bdbd6*/
  v35 = *((_DWORD *)this + 476); /*0x7bdbdc*/
  v36 = *((_DWORD *)this + 475); /*0x7bdbe2*/
  *((_DWORD *)this + 92) = v34; /*0x7bdbe8*/
  *((_DWORD *)this + 104) = v34; /*0x7bdbee*/
  *((_DWORD *)this + 439) = v34; /*0x7bdbf4*/
  *((_DWORD *)this + 476) = v35 - 4; /*0x7bdc03*/
  *((_DWORD *)this + 475) = v36 - 4; /*0x7bdc09*/
  v37 = *((_WORD *)this + 117); /*0x7bdc0f*/
  if ( (v37 & 1) != 0 ) /*0x7bdc18*/
  {
    v38 = *((_DWORD *)this + 33); /*0x7bdc1e*/
    if ( (v38 & 1) != 0 ) /*0x7bdc27*/
    {
      if ( *((_WORD *)this + 116) >= 2u ) /*0x7bdc35*/
      {
        if ( (v38 & 0x40) != 0 && (v37 & 2) != 0 ) /*0x7bdc57*/
        {
          *((_WORD *)this + 30) = *((_WORD *)this + 130); /*0x7bdc60*/
          *((_BYTE *)this + 62) = *((_BYTE *)this + 262); /*0x7bdc6a*/
          v39 = *((_BYTE *)this + 263); /*0x7bdc6d*/
        }
        else
        {
          *((_WORD *)this + 30) = *((_WORD *)this + 128); /*0x7bdc7c*/
          *((_BYTE *)this + 62) = *((_BYTE *)this + 258); /*0x7bdc86*/
          v39 = *((_BYTE *)this + 259); /*0x7bdc89*/
        }
        v40 = *((unsigned __int16 *)this + 30) * (v39 >> 3); /*0x7bdc9c*/
        *((_BYTE *)this + 63) = v39; /*0x7bdc9f*/
        *((_DWORD *)this + 499) = *((unsigned __int8 *)this + 62) * v40; /*0x7bdcaa*/
      }
      else
      {
        *((_BYTE *)this + 62) = 1; /*0x7bdc3c*/
        *((_WORD *)this + 30) = 22050; /*0x7bdc40*/
        *((_BYTE *)this + 63) = 8; /*0x7bdc44*/
        *((_DWORD *)this + 499) = 22050; /*0x7bdc48*/
      }
      if ( *((_DWORD *)this + 38) == -1 ) /*0x7bdcb7*/
        *((_DWORD *)this + 38) = *((_DWORD *)this + 39) /*0x7bdcd2*/
                               * ((unsigned int)(*((_DWORD *)this + 499) + (*((_DWORD *)this + 499) >> 1))
                                / *((_DWORD *)this + 39));
      if ( *((int *)this + 38) <= 0 ) /*0x7bdce0*/
      {
        DSurface::CommitBuffers((DSurface *)this); /*0x7bdf2a*/
        return -18; /*0x7bdf3b*/
      }
      v41 = *((_DWORD *)this + 37); /*0x7bdce6*/
      if ( v41 ) /*0x7bdcee*/
      {
        *((_DWORD *)this + 483) = v41; /*0x7bdd3a*/
      }
      else
      {
        v42 = (*((int (__cdecl **)(BSurface *, int, _DWORD, _DWORD))this + 17))(this, 2, 0, *((_DWORD *)this + 38)); /*0x7bdcf5*/
        *((_DWORD *)this + 483) = v42; /*0x7bdcfb*/
        if ( !v42 ) /*0x7bdd03*/
          goto LABEL_103; /*0x7bdd03*/
        (*((void (__cdecl **)(BSurface *, int, int, _DWORD))this + 17))(this, 4, v42, *((_DWORD *)this + 38)); /*0x7bdd24*/
        *((_DWORD *)this + 12) += *((_DWORD *)this + 38); /*0x7bdd35*/
      }
      v51 = *((_DWORD *)this + 38) / *((_DWORD *)this + 39); /*0x7bdd4d*/
      *((_DWORD *)this + 487) = v51; /*0x7bdd53*/
      v43 = (*((int (__cdecl **)(BSurface *, int, _DWORD, int))this + 17))(this, 2, 0, v51); /*0x7bdd59*/
      *((_DWORD *)this + 485) = v43; /*0x7bdd5f*/
      if ( !v43 ) /*0x7bdd67*/
        goto LABEL_103; /*0x7bdd67*/
      (*((void (__cdecl **)(BSurface *, int, int, _DWORD))this + 17))(this, 4, v43, *((_DWORD *)this + 487)); /*0x7bdd88*/
      *((_DWORD *)this + 12) += *((_DWORD *)this + 487); /*0x7bdd96*/
      memset(*((void **)this + 485), 0, *((_DWORD *)this + 487)); /*0x7bddac*/
      v44 = (*((int (__cdecl **)(BSurface *, int, _DWORD, int))this + 17))(this, 2, 0, 2 * *((_DWORD *)this + 487)); /*0x7bddc3*/
      *((_DWORD *)this + 486) = v44; /*0x7bddc9*/
      if ( !v44 ) /*0x7bddd1*/
        goto LABEL_103; /*0x7bddd1*/
      (*((void (__cdecl **)(BSurface *, int, int, int))this + 17))(this, 4, v44, 2 * *((_DWORD *)this + 487)); /*0x7bddf4*/
      *((_DWORD *)this + 12) += 2 * *((_DWORD *)this + 487); /*0x7bde04*/
      memset(*((void **)this + 486), 0, 2 * *((_DWORD *)this + 487)); /*0x7bde1c*/
      v48 = 2 * (*((_DWORD *)this + 499) / (unsigned int)*((unsigned __int8 *)this + 244)) + 100; /*0x7bde3b*/
      *((_DWORD *)this + 493) = v48; /*0x7bde41*/
      v45 = (*((int (__cdecl **)(BSurface *, int, _DWORD, unsigned int))this + 17))(this, 2, 0, v48); /*0x7bde47*/
      *((_DWORD *)this + 490) = v45; /*0x7bde4d*/
      if ( !v45 ) /*0x7bde55*/
        goto LABEL_103; /*0x7bde55*/
      (*((void (__cdecl **)(BSurface *, int, int, _DWORD))this + 17))(this, 4, v45, *((_DWORD *)this + 493)); /*0x7bde76*/
      *((_DWORD *)this + 12) += *((_DWORD *)this + 493); /*0x7bde84*/
      v46 = (*((int (__cdecl **)(BSurface *, int, _DWORD, _DWORD))this + 17))(this, 2, 0, *((_DWORD *)this + 39)); /*0x7bde93*/
      *((_DWORD *)this + 494) = v46; /*0x7bde99*/
      if ( !v46 ) /*0x7bdea1*/
        goto LABEL_103; /*0x7bdea1*/
      (*((void (__cdecl **)(BSurface *, int, int, _DWORD))this + 17))(this, 4, v46, *((_DWORD *)this + 39)); /*0x7bdec2*/
      memset(*((void **)this + 494), 0, *((_DWORD *)this + 39)); /*0x7bded8*/
      *((_DWORD *)this + 12) += *((_DWORD *)this + 39); /*0x7bdeef*/
    }
  }
  v47 = (*((int (__cdecl **)(BSurface *, int, _DWORD, int))this + 17))( /*0x7bdf04*/
          this,
          2,
          0,
          4 * *((unsigned __int16 *)this + 118));
  *((_DWORD *)this + 473) = v47; /*0x7bdf0a*/
  if ( !v47 ) /*0x7bdf12*/
    goto LABEL_103; /*0x7bdf12*/
  (*((void (__cdecl **)(BSurface *, int, int, int))this + 17))(this, 4, v47, 4 * *((unsigned __int16 *)this + 118)); /*0x7bdf4d*/
  *((_DWORD *)this + 12) += 4 * *((unsigned __int16 *)this + 118); /*0x7bdf65*/
  return -1; /*0x7bd6a3*/
}



// ==== 0x007BDF80  DSurface::CommitBuffers  this=DSurface  sig=csp ====
int __thiscall DSurface::CommitBuffers(DSurface *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int i; // edi
  int v11; // ebp
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int j; // ebx
  int v17; // ebp
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // edi
  int v23; // eax
  int *v24; // eax
  int *v25; // ebp
  int v26; // ebx
  int v27; // edi
  bool v28; // zf
  int v29; // eax
  int v30; // eax
  int v31; // edi
  int v32; // eax
  int *v33; // eax
  int *v34; // ebp
  int v35; // ebx
  int v36; // edi
  int v37; // eax
  int v38; // eax
  int v39; // ecx
  int result; // eax
  int v41; // [esp+4h] [ebp-10h]
  int v42; // [esp+4h] [ebp-10h]
  int v43; // [esp+8h] [ebp-Ch]
  int v44; // [esp+8h] [ebp-Ch]
  int v45; // [esp+Ch] [ebp-8h]
  int v46; // [esp+Ch] [ebp-8h]
  int v47; // [esp+10h] [ebp-4h]
  int v48; // [esp+10h] [ebp-4h]

  v2 = *((_DWORD *)this + 445); /*0x7bdf86*/
  if ( v2 ) /*0x7bdf8e*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])(this, 5, v2, *((_DWORD *)this + 446)); /*0x7bdf9b*/
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 445), 0); /*0x7bdfaa*/
  }
  v3 = *((_DWORD *)this + 473); /*0x7bdfb0*/
  if ( v3 ) /*0x7bdfb8*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])( /*0x7bdfcb*/
      this,
      5,
      v3,
      4 * *(unsigned __int16 *)&this->__pad_2C[192]);
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 473), 0); /*0x7bdfda*/
  }
  if ( !*(_DWORD *)&this->__pad_2C[104] ) /*0x7bdfe0*/
  {
    v4 = *((_DWORD *)this + 483); /*0x7bdfea*/
    if ( v4 ) /*0x7bdff2*/
    {
      (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])( /*0x7bdfff*/
        this,
        5,
        v4,
        *(_DWORD *)&this->__pad_2C[108]);
      (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 483), 0); /*0x7be00e*/
    }
  }
  v5 = *((_DWORD *)this + 485); /*0x7be014*/
  if ( v5 ) /*0x7be01c*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])(this, 5, v5, *((_DWORD *)this + 487)); /*0x7be029*/
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 485), 0); /*0x7be038*/
  }
  v6 = *((_DWORD *)this + 486); /*0x7be03e*/
  if ( v6 ) /*0x7be046*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v6, 2 * *((_DWORD *)this + 487)); /*0x7be055*/
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 486), 0); /*0x7be064*/
  }
  v7 = *((_DWORD *)this + 490); /*0x7be06a*/
  if ( v7 ) /*0x7be072*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])(this, 5, v7, *((_DWORD *)this + 493)); /*0x7be07f*/
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 490), 0); /*0x7be08e*/
  }
  v8 = *((_DWORD *)this + 494); /*0x7be094*/
  if ( v8 ) /*0x7be09c*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])( /*0x7be0a9*/
      this,
      5,
      v8,
      *(_DWORD *)&this->__pad_2C[112]);
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 494), 0); /*0x7be0b8*/
  }
  v9 = 0; /*0x7be0c6*/
  for ( i = *((_DWORD *)this + 441); v9 < *(_DWORD *)&this->__pad_2C[92]; i = v11 ) /*0x7be0d1*/
  {
    if ( !i ) /*0x7be0d5*/
      break; /*0x7be0d5*/
    v11 = *(_DWORD *)(i + 12); /*0x7be0e3*/
    v12 = *((_DWORD *)this + 475) + 4; /*0x7be0eb*/
    v13 = this->q1DC + 4; /*0x7be0ed*/
    this->q1DC = v13; /*0x7be0f1*/
    *((_DWORD *)this + 475) = v12; /*0x7be0f7*/
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, i, v12 + v13 + 44); /*0x7be106*/
    (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])(this, 3, i, 0); /*0x7be10f*/
    ++v9; /*0x7be11b*/
  }
  if ( (this->__pad_11F[53] & 2) != 0 ) /*0x7be129*/
  {
    v14 = *((_DWORD *)this + 442); /*0x7be12b*/
    if ( v14 ) /*0x7be133*/
    {
      (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])(this, 5, v14, *((_DWORD *)this + 478)); /*0x7be140*/
      (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 442), 0); /*0x7be14f*/
      *((_DWORD *)this + 442) = 0; /*0x7be155*/
    }
  }
  v15 = *((_DWORD *)this + 443); /*0x7be165*/
  for ( j = 0; j < *(_DWORD *)&this->__pad_2C[96]; v15 = v17 ) /*0x7be16f*/
  {
    if ( !v15 ) /*0x7be173*/
      break; /*0x7be173*/
    v17 = *(_DWORD *)(v15 + 4); /*0x7be17b*/
    v18 = *((_DWORD *)this + 474) + 4; /*0x7be17e*/
    *((_DWORD *)this + 474) = v18; /*0x7be183*/
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v15, v18 + 24); /*0x7be191*/
    (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])(this, 3, v15, 0); /*0x7be19a*/
    ++j; /*0x7be1a6*/
  }
  if ( (this->__pad_11F[53] & 1) != 0 ) /*0x7be1b4*/
  {
    v19 = this->q1BC; /*0x7be1b6*/
    if ( v19 ) /*0x7be1be*/
    {
      (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])(this, 5, v19, *((_DWORD *)this + 477)); /*0x7be1cb*/
      (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, this->q1BC, 0); /*0x7be1da*/
      this->q1BC = 0; /*0x7be1e0*/
    }
  }
  v20 = this->q1D8; /*0x7be1ea*/
  if ( v20 ) /*0x7be1f2*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])( /*0x7be204*/
      this,
      5,
      v20,
      2 * *((unsigned __int16 *)this + 940));
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, this->q1D8, 0); /*0x7be213*/
  }
  v21 = *((_DWORD *)this + 469); /*0x7be219*/
  if ( v21 ) /*0x7be221*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])( /*0x7be236*/
      this,
      5,
      v21,
      6 * *((unsigned __int16 *)this + 934));
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 469), 0); /*0x7be245*/
  }
  v22 = *((_DWORD *)this + 463); /*0x7be24b*/
  v47 = v22; /*0x7be253*/
  if ( v22 ) /*0x7be257*/
  {
    v23 = 0; /*0x7be25d*/
    v41 = 0; /*0x7be25f*/
    v43 = 0; /*0x7be267*/
    v45 = *((_DWORD *)this + 463); /*0x7be26b*/
    do /*0x7be2e9*/
    {
      v24 = (int *)(*((_DWORD *)this + 466) + v23); /*0x7be275*/
      v25 = (int *)v24[2]; /*0x7be277*/
      v26 = *v24; /*0x7be27a*/
      v27 = *v25; /*0x7be27c*/
      if ( *v25 ) /*0x7be27c*/
      {
        (*(void (__cdecl **)(DSurface *, int, int, unsigned int))&this->__pad_2C[24])( /*0x7be29d*/
          this,
          5,
          v27,
          v26 * ((*(_DWORD *)(*((_DWORD *)this + 465) + v41 + 4) + 1) & 0xFFFFFFFE));
        (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])(this, 3, v27, 0); /*0x7be2a6*/
      }
      if ( v25 ) /*0x7be2ae*/
      {
        (*(void (__cdecl **)(DSurface *, int, int *, int))&this->__pad_2C[24])(this, 5, v25, 12 * v26); /*0x7be2bb*/
        (*(void (__cdecl **)(DSurface *, int, int *, _DWORD))&this->__pad_2C[24])(this, 3, v25, 0); /*0x7be2c4*/
      }
      v23 = v43 + 12; /*0x7be2d6*/
      v28 = v45 == 1; /*0x7be2dc*/
      v43 += 12; /*0x7be2dd*/
      v41 += 16; /*0x7be2e1*/
      --v45; /*0x7be2e5*/
    }
    while ( !v28 ); /*0x7be2e9*/
    v22 = v47; /*0x7be2eb*/
  }
  v29 = *((_DWORD *)this + 466); /*0x7be2ef*/
  if ( v29 ) /*0x7be2f7*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v29, 12 * v22); /*0x7be304*/
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 466), 0); /*0x7be313*/
  }
  v30 = *((_DWORD *)this + 465); /*0x7be319*/
  if ( v30 ) /*0x7be321*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v30, 16 * v22); /*0x7be32b*/
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 465), 0); /*0x7be33a*/
  }
  v31 = *((_DWORD *)this + 457); /*0x7be340*/
  v48 = v31; /*0x7be348*/
  if ( v31 ) /*0x7be34c*/
  {
    v32 = 0; /*0x7be352*/
    v42 = 0; /*0x7be354*/
    v46 = 0; /*0x7be35c*/
    v44 = *((_DWORD *)this + 457); /*0x7be360*/
    do /*0x7be3de*/
    {
      v33 = (int *)(*((_DWORD *)this + 462) + v32); /*0x7be36a*/
      v34 = (int *)v33[2]; /*0x7be36c*/
      v35 = *v33; /*0x7be36f*/
      v36 = *v34; /*0x7be371*/
      if ( *v34 ) /*0x7be371*/
      {
        (*(void (__cdecl **)(DSurface *, int, int, unsigned int))&this->__pad_2C[24])( /*0x7be392*/
          this,
          5,
          v36,
          v35 * ((*(_DWORD *)(*((_DWORD *)this + 461) + v42 + 8) + 1) & 0xFFFFFFFE));
        (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])(this, 3, v36, 0); /*0x7be39b*/
      }
      if ( v34 ) /*0x7be3a3*/
      {
        (*(void (__cdecl **)(DSurface *, int, int *, int))&this->__pad_2C[24])(this, 5, v34, 12 * v35); /*0x7be3b0*/
        (*(void (__cdecl **)(DSurface *, int, int *, _DWORD))&this->__pad_2C[24])(this, 3, v34, 0); /*0x7be3b9*/
      }
      v32 = v46 + 12; /*0x7be3cb*/
      v28 = v44 == 1; /*0x7be3d1*/
      v46 += 12; /*0x7be3d2*/
      v42 += 16; /*0x7be3d6*/
      --v44; /*0x7be3da*/
    }
    while ( !v28 ); /*0x7be3de*/
    v31 = v48; /*0x7be3e0*/
  }
  v37 = *((_DWORD *)this + 462); /*0x7be3e4*/
  if ( v37 ) /*0x7be3ec*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v37, 12 * v31); /*0x7be3f9*/
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 462), 0); /*0x7be408*/
  }
  v38 = *((_DWORD *)this + 461); /*0x7be40e*/
  if ( v38 ) /*0x7be416*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v38, 16 * v31); /*0x7be420*/
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 461), 0); /*0x7be42f*/
  }
  v39 = *((_DWORD *)this + 460); /*0x7be435*/
  if ( v39 ) /*0x7be440*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v39, 24 * this->q1C8); /*0x7be453*/
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 460), 0); /*0x7be462*/
  }
  result = *((_DWORD *)this + 455); /*0x7be468*/
  if ( result ) /*0x7be470*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])( /*0x7be483*/
      this,
      5,
      result,
      4 * *((unsigned __int16 *)this + 906));
    return (*(int (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])( /*0x7be492*/
             this,
             3,
             *((_DWORD *)this + 455),
             0);
  }
  return result; /*0x7be498*/
}



// ==== 0x007BE4A0  ObjectClass::Audio_Process_7BE4A0  this=ObjectClass  sig=csp ====
int __thiscall Audio_Process_7BE4A0(ObjectClass *this)
{
  unsigned int v2; // ebp
  int customSound; // eax
  void *v4; // ebx
  char v5; // al
  unsigned int v6; // edi
  int v7; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // [esp+10h] [ebp-4h]

  v2 = this->customSound_controller[4]; /*0x7be4a7*/
  if ( v2 == -1 || (customSound = this->customSound, customSound == -1) ) /*0x7be4b5*/
  {
    v2 = *((unsigned __int16 *)this + 119); /*0x7be4c2*/
    v11 = *((unsigned __int16 *)this + 120); /*0x7be4c9*/
    if ( (this->needsRedraw & 8) == 0 ) /*0x7be4d5*/
      goto LABEL_6; /*0x7be4d5*/
    v2 += *((unsigned __int16 *)this + 125); /*0x7be4e9*/
    customSound = *((unsigned __int16 *)this + 126) + v11; /*0x7be4ef*/
  }
  v11 = customSound; /*0x7be4f1*/
LABEL_6:
  v4 = (void *)this->customSound_controller[3]; /*0x7be4f5*/
  if ( (this->needsRedraw & 1) != 0 ) /*0x7be500*/
  {
    if ( !v4 ) /*0x7be508*/
    {
      v5 = *((_BYTE *)this + 264); /*0x7be512*/
      v6 = v2 * v11; /*0x7be518*/
      if ( v5 == 1 || v5 == 4 ) /*0x7be521*/
        v6 *= 2; /*0x7be523*/
      v7 = ((int (__cdecl *)(ObjectClass *, int, _DWORD, unsigned int))this->ambientSoundController[2])(this, 2, 0, v6); /*0x7be52b*/
      v4 = (void *)v7; /*0x7be52e*/
      if ( !v7 ) /*0x7be535*/
        return -8; /*0x7be541*/
      this->nextObject = (ObjectClass *)((char *)this->nextObject + v6); /*0x7be54c*/
      ((void (__cdecl *)(ObjectClass *, int, int, unsigned int))this->ambientSoundController[2])(this, 4, v7, v6); /*0x7be54f*/
      memset(v4, 0, v6); /*0x7be55d*/
      *((_DWORD *)this + 86) = v4; /*0x7be56d*/
      this->q058 = v11; /*0x7be573*/
      v9 = this->q054; /*0x7be579*/
      LOBYTE(v9) = v9 | 0x20; /*0x7be57f*/
      *((_DWORD *)this + 87) = v2; /*0x7be581*/
      this->q054 = v9; /*0x7be587*/
    }
    goto LABEL_15; /*0x7be58d*/
  }
  if ( v4 ) /*0x7be591*/
  {
LABEL_15:
    Audio_Process_7C3270((int)this, (int)v4, v2, v11, *(_DWORD *)&this->bombVisible, this->health); /*0x7be593*/
    v10 = this->q054; /*0x7be5aa*/
    LOBYTE(v10) = v10 | 0x10; /*0x7be5b0*/
    this->q054 = v10; /*0x7be5b3*/
    return -1; /*0x7be5c0*/
  }
  return -9; /*0x7be537*/
}



// ==== 0x007BE5D0  AllocCallback::Dispatch  this=AllocCallback  sig=csp ====
_DWORD *__cdecl AllocCallback_Dispatch(int a1, int a2, _DWORD *Block, size_t Size)
{
  _DWORD *result; // eax

  switch ( a2 ) /*0x7be5df*/
  {
    case 2: /*0x7be5df*/
      result = malloc(Size); /*0x7be5eb*/
      break; /*0x7be5f6*/
    case 3: /*0x7be5df*/
      free(Block); /*0x7be5fc*/
      result = 0; /*0x7be604*/
      break; /*0x7be607*/
    case 4: /*0x7be5df*/
    case 5: /*0x7be5df*/
      result = Block; /*0x7be60c*/
      break; /*0x7be60f*/
    case 6: /*0x7be5df*/
      *Block = -1; /*0x7be614*/
      goto LABEL_6; /*0x7be614*/
    default:
LABEL_6:
      result = 0; /*0x7be61a*/
      break; /*0x7be61a*/
  }
  return result; /*0x7be5f5*/
}



// ==== 0x007BE640  Stream::CopyFromTemplate  this=Stream  sig=csp ====
void __thiscall Stream::CopyFromTemplate(Stream *this)
{
  qmemcpy(this, &unk_84E738, 0x88u); /*0x7be64e*/
}



// ==== 0x007BE660  ObjectClass::Audio_Process_7BE660  this=ObjectClass  sig=csp ====
int __thiscall Audio_Process_7BE660(TechnoClass *this)
{
  *((_DWORD *)this + 436) = -1; /*0x7be663*/
  return -1; /*0x7be669*/
}



// ==== 0x007BE670  ObjectClass::Audio_Render_7BE670  this=ObjectClass  sig=csp ====
int __thiscall Audio_Render_7BE670(TechnoClass *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v8; // ecx

  *((_DWORD *)this + 433) = HIWORD(this->radioLinks[3]) / (int)BYTE2(this->flashing[0]); /*0x7be689*/
  v2 = LOWORD(this->flashing[0]) / (int)HIBYTE(this->flashing[0]); /*0x7be69f*/
  v3 = *((_DWORD *)this + 433); /*0x7be6a1*/
  HIWORD(v4) = 0; /*0x7be6a7*/
  *((_DWORD *)this + 434) = v2; /*0x7be6ac*/
  *((_DWORD *)this + 435) = v2 * v3; /*0x7be6b2*/
  BYTE1(v4) = BYTE2(this->flashing[0]); /*0x7be6b8*/
  LOBYTE(v4) = HIBYTE(this->flashing[0]); /*0x7be6c3*/
  *((_DWORD *)this + 481) = nullsub_49; /*0x7be6c9*/
  *((_DWORD *)this + 482) = nullsub_49; /*0x7be6cf*/
  v5 = *(_DWORD *)this->needsRedraw; /*0x7be6d5*/
  this->spawnStatus = _underflow___basic_streambuf_DU__char_traits_D_std___std__MAEHXZ_7; /*0x7be6dd*/
  if ( (v5 & 1) != 0 ) /*0x7be6e7*/
  {
    *((_DWORD *)this + 479) = sub_7BF140; /*0x7be6ff*/
    this->spawnStatus = sub_7BF190; /*0x7be709*/
  }
  else
  {
    *((_DWORD *)this + 479) = sub_7BEA40; /*0x7be6e9*/
    this->spawnStatus = sub_7BF0B0; /*0x7be6f3*/
  }
  v6 = v4 - 1026; /*0x7be713*/
  if ( !v6 ) /*0x7be719*/
  {
    v8 = LOBYTE(this->animation[4]); /*0x7be7d0*/
    if ( (_BYTE)v8 ) /*0x7be7d8*/
    {
      if ( (_BYTE)v8 == 4 ) /*0x7be7dd*/
      {
        *((_DWORD *)this + 481) = sub_7C4260; /*0x7be7df*/
        *((_DWORD *)this + 482) = DecodeSHPFrame16bpp; /*0x7be7e9*/
        return -1; /*0x7be7f7*/
      }
    }
    else
    {
      *((_DWORD *)this + 481) = sub_7C6D40; /*0x7be7f8*/
      if ( (this->radioLinks[2] & 0x40000) != 0 ) /*0x7be80b*/
      {
        if ( (v5 & 0x80u) != 0 ) /*0x7be80f*/
        {
          *((_DWORD *)this + 482) = DrawTileBlock2Sub; /*0x7be811*/
          return -1; /*0x7be81f*/
        }
        *((_DWORD *)this + 482) = DrawTileBlock2; /*0x7be820*/
      }
    }
    return -1; /*0x7be7dd*/
  }
  if ( v6 != 2 ) /*0x7be722*/
    return -1; /*0x7be82a*/
  if ( LOBYTE(this->animation[4]) ) /*0x7be72a*/
  {
    if ( LOBYTE(this->animation[4]) == 1 ) /*0x7be736*/
    {
      *((_DWORD *)this + 481) = sub_7C6FC8; /*0x7be75a*/
      *((_DWORD *)this + 482) = IsoTile::Decode16BitV2; /*0x7be764*/
      return -1; /*0x7be772*/
    }
    if ( LOBYTE(this->animation[4]) == 4 ) /*0x7be73b*/
    {
      *((_DWORD *)this + 481) = sub_7C3D60; /*0x7be741*/
      *((_DWORD *)this + 482) = IsoTile::Decode8Bit; /*0x7be74b*/
      return -1; /*0x7be759*/
    }
    return -1; /*0x7be73b*/
  }
  *((_DWORD *)this + 481) = sub_7C6DD6; /*0x7be773*/
  if ( (this->radioLinks[2] & 0x40000) == 0 ) /*0x7be786*/
  {
    if ( (v5 & 0x40) != 0 ) /*0x7be7bf*/
    {
      *((_DWORD *)this + 481) = sub_7C6E94; /*0x7be7c1*/
      return -1; /*0x7be7cf*/
    }
    return -1; /*0x7be7bf*/
  }
  if ( (v5 & 0x80u) == 0 ) /*0x7be78a*/
  {
    if ( (v5 & 0x40) != 0 ) /*0x7be79d*/
      *((_DWORD *)this + 482) = DrawTileBlock8BPP; /*0x7be79f*/
    else
      *((_DWORD *)this + 482) = DrawTile4x4Block; /*0x7be7ae*/
    return -1; /*0x7be7a9*/
  }
  else
  {
    *((_DWORD *)this + 482) = DrawTileBlock16BPP; /*0x7be78c*/
    return -1; /*0x7be796*/
  }
}



// ==== 0x007BE830  Audio_Process_7BE830  this=ObjectClass  sig=ida-proto ====
int __fastcall sub_7BE830(int a1, int a2)
{
  int v3; // ebp
  int v4; // ebx
  int *v5; // eax
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // edi
  bool v9; // zf
  int result; // eax
  int v11; // ebp
  int v12; // ebx
  int *v13; // eax
  int v14; // ecx
  int v15; // eax
  _DWORD *v16; // edi
  int v17; // [esp+10h] [ebp-10h]
  int v18; // [esp+10h] [ebp-10h]
  int v19; // [esp+14h] [ebp-Ch]
  int v20; // [esp+14h] [ebp-Ch]
  int v21; // [esp+18h] [ebp-8h]
  int v22; // [esp+18h] [ebp-8h]

  v3 = 0; /*0x7be838*/
  if ( *(_DWORD *)(a1 + 1828) ) /*0x7be83b*/
  {
    v17 = 0; /*0x7be849*/
    v21 = *(_DWORD *)(a1 + 1828); /*0x7be84d*/
    do /*0x7be8b7*/
    {
      v4 = *(_DWORD *)(*(_DWORD *)(a1 + 1844) + v3); /*0x7be861*/
      v5 = (int *)(v17 + *(_DWORD *)(a1 + 1848)); /*0x7be864*/
      v6 = v5[2]; /*0x7be867*/
      v7 = *v5; /*0x7be86b*/
      if ( v7 ) /*0x7be86f*/
      {
        v8 = (_DWORD *)(v6 + 4); /*0x7be871*/
        v19 = v7; /*0x7be874*/
        do /*0x7be89e*/
        {
          if ( v8[1] == a2 ) /*0x7be881*/
            (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(a1 + 72))(a1, v4, *(v8 - 1), *v8); /*0x7be88c*/
          v8 += 3; /*0x7be896*/
          --v19; /*0x7be89a*/
        }
        while ( v19 ); /*0x7be89e*/
      }
      v3 += 16; /*0x7be8a8*/
      v9 = v21 == 1; /*0x7be8ae*/
      v17 += 12; /*0x7be8af*/
      --v21; /*0x7be8b3*/
    }
    while ( !v9 ); /*0x7be8b7*/
  }
  result = *(_DWORD *)(a1 + 1852); /*0x7be8b9*/
  v11 = 0; /*0x7be8bf*/
  if ( result ) /*0x7be8c3*/
  {
    v18 = 0; /*0x7be8c5*/
    v20 = *(_DWORD *)(a1 + 1852); /*0x7be8c9*/
    do /*0x7be933*/
    {
      v12 = *(_DWORD *)(*(_DWORD *)(a1 + 1860) + v11); /*0x7be8dd*/
      v13 = (int *)(*(_DWORD *)(a1 + 1864) + v18); /*0x7be8e0*/
      v14 = v13[2]; /*0x7be8e3*/
      v15 = *v13; /*0x7be8e7*/
      if ( v15 ) /*0x7be8eb*/
      {
        v16 = (_DWORD *)(v14 + 4); /*0x7be8ed*/
        v22 = v15; /*0x7be8f0*/
        do /*0x7be91a*/
        {
          if ( v16[1] == a2 ) /*0x7be8fd*/
            (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(a1 + 72))(a1, v12, *(v16 - 1), *v16); /*0x7be908*/
          v16 += 3; /*0x7be912*/
          --v22; /*0x7be916*/
        }
        while ( v22 ); /*0x7be91a*/
      }
      v11 += 16; /*0x7be924*/
      result = v20 - 1; /*0x7be92a*/
      v9 = v20 == 1; /*0x7be92a*/
      v18 += 12; /*0x7be92b*/
      --v20; /*0x7be92f*/
    }
    while ( !v9 ); /*0x7be933*/
  }
  return result; /*0x7be935*/
}



// ==== 0x007BE940  sub_7BE940  this=ObjectClass  sig=csp ====
char __fastcall sub_7BE940(int a1, int *a2)
{
  int v4; // eax
  _DWORD *v5; // ebx
  int (__cdecl *v6)(int, int, _DWORD, _DWORD); // eax
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  int v10; // ebp
  int v11; // eax
  int v12; // ebx
  int v14; // [esp-8h] [ebp-24h]
  _DWORD *v15; // [esp+Ch] [ebp-10h]
  int v16; // [esp+10h] [ebp-Ch]
  int v17; // [esp+14h] [ebp-8h]

  LOBYTE(v4) = *(_BYTE *)(a1 + 420); /*0x7be94a*/
  v5 = (_DWORD *)a2[1]; /*0x7be954*/
  v15 = v5; /*0x7be959*/
  if ( (v4 & 2) == 0 /*0x7be982*/
    && ((v6 = *(int (__cdecl **)(int, int, _DWORD, _DWORD))(a1 + 72)) != 0 && (v4 = v6(a1, 6, 0, 0)) != 0
     || (v4 = *(_DWORD *)(a1 + 424)) != 0) )
  {
    v7 = *(_DWORD *)(a1 + 1732); /*0x7be988*/
    v8 = *(_DWORD *)(a1 + 1736); /*0x7be98e*/
    v9 = v4 + *(_DWORD *)(a1 + 444); /*0x7be99b*/
    v17 = v7; /*0x7be9a2*/
    v16 = v8; /*0x7be9a6*/
    if ( (a2[5] & 0x40) != 0 ) /*0x7be9aa*/
      v10 = *(_DWORD *)(a1 + 1768); /*0x7be9ac*/
    else
      v10 = *a2; /*0x7be9b4*/
    v11 = v5[3]; /*0x7be9b7*/
    if ( (v11 & 4) != 0 ) /*0x7be9bc*/
      v12 = *(_DWORD *)(a1 + 1776); /*0x7be9be*/
    else
      v12 = *v5; /*0x7be9c6*/
    if ( *(_DWORD *)(a1 + 72) && (v11 & 8) != 0 ) /*0x7be9d0*/
    {
      LOBYTE(v11) = v11 & 0xF7; /*0x7be9d6*/
      v15[3] = v11; /*0x7be9d8*/
      (*(void (__cdecl **)(int, int, int, _DWORD))(a1 + 72))(a1, 3, v12, v15[5]); /*0x7be9e3*/
      v8 = v16; /*0x7be9e6*/
      v7 = v17; /*0x7be9ea*/
    }
    v14 = *(_DWORD *)(a1 + 428); /*0x7be9ff*/
    if ( (a2[5] & 0x20) != 0 ) /*0x7bea05*/
      (*(void (__cdecl **)(int, int, int, int, int, int))(a1 + 1928))(v12, v10, v9, v7, v8, v14); /*0x7bea0f*/
    else
      (*(void (__cdecl **)(int, int, int, int, int, int))(a1 + 1924))(v12, v10, v9, v7, v8, v14); /*0x7bea07*/
    v4 = *(_DWORD *)(a1 + 72); /*0x7bea15*/
    if ( v4 ) /*0x7bea1e*/
      LOBYTE(v4) = ((int (__cdecl *)(int, int, _DWORD, _DWORD))v4)(a1, 7, 0, 0); /*0x7bea27*/
  }
  return v4; /*0x7bea2c*/
}



// ==== 0x007BEA40  ObjectClass::method_7BEA40  this=ObjectClass  sig=csp ====
int __thiscall sub_7BEA40(TechnoClass *this)
{
  int result; // eax
  int v3; // eax

  result = AudioStream::ProcessStream((int)this); /*0x7bea43*/
  if ( result == -1 ) /*0x7bea4b*/
  {
    sub_7BEFE0((int)this); /*0x7bea4f*/
    v3 = this->ironTintTimer[1]; /*0x7bea54*/
    *((_DWORD *)this + 439) = v3; /*0x7bea5a*/
    if ( (this->ironTintTimer[2] & 8) == 0 ) /*0x7bea69*/
      this->ironTintTimer[1] = *(_DWORD *)(v3 + 12); /*0x7bea6e*/
    return -1; /*0x7bea74*/
  }
  return result; /*0x7bea77*/
}



// ==== 0x007BEA80  AudioStream::ProcessStream  this=AudioStream  sig=csp ====
int __thiscall AudioStream::ProcessStream(int this)
{
  int v1; // esi
  int v2; // ebp
  int *v3; // ebx
  int v4; // edi
  char v5; // al
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // eax
  int Position; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  signed int v15; // ecx
  int v16; // ecx
  int v17; // edi
  int v18; // eax
  int v19; // edi
  int v20; // ecx
  int v21; // edi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  void (__cdecl *v25)(int, int, _DWORD, _DWORD); // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int (__cdecl *v29)(_DWORD, _DWORD); // eax
  int v30; // edx
  char v31; // al
  int v32; // eax
  int v33; // [esp+10h] [ebp-Ch]
  signed int v35; // [esp+18h] [ebp-4h]

  v1 = this; /*0x7bea86*/
  v2 = *(_DWORD *)(this + 416); /*0x7bea8d*/
  v3 = (int *)(this + 416); /*0x7bea93*/
  v4 = this + 64; /*0x7bea99*/
  if ( (*(_BYTE *)(v2 + 20) & 1) != 0 )
  {
    if ( (*(_BYTE *)(this + 420) & 0x10) != 0 ) /*0x7beafb*/
    {
      *(_DWORD *)(this + 1744) = *(_DWORD *)(*(_DWORD *)(this + 416) + 28); /*0x7beb04*/
      *(_DWORD *)(this + 420) |= 8u; /*0x7beb10*/
      v10 = *(_DWORD *)(v2 + 20); /*0x7beb13*/
      LOBYTE(v10) = v10 | 0x80; /*0x7beb16*/
      *(_DWORD *)(v2 + 20) = v10; /*0x7beb18*/
      return -1; /*0x7beb23*/
    }
    if ( (*(_BYTE *)(this + 132) & 2) != 0 ) /*0x7beb28*/
    {
      *(_DWORD *)(this + 1744) = *(_DWORD *)(v2 + 28); /*0x7beb2d*/
      CalcAudioStreamOffset(this, 60 * *(_DWORD *)(v2 + 28) / *(_DWORD *)(this + 116)); /*0x7beb48*/
      return -1; /*0x7beb57*/
    }
    Position = AudioStream::GetPosition((AudioStream *)this); /*0x7beb5f*/
    v12 = v3[332]; /*0x7beb66*/
    if ( (v3[1] & 2) != 0 ) /*0x7beb6c*/
      v13 = v12 + 2; /*0x7beb71*/
    else
      v13 = v12 + 1; /*0x7beb6e*/
    if ( Position >= 60 * v13 / *(_DWORD *)(v4 + 52) )
    {
      v15 = Audio_Process_7BEE20(v1, v4, (int)v3, v2, Position); /*0x7bebfd*/
      v35 = v15; /*0x7bec04*/
      if ( (*(_BYTE *)(v4 + 64) & 4) != 0 ) /*0x7bec08*/
      {
        v3[332] = *(_DWORD *)(*v3 + 28); /*0x7bec15*/
        return -1; /*0x7bec1f*/
      }
      v33 = *(_DWORD *)(v4 + 48) / 3 - 1; /*0x7bec35*/
      if ( v33 < 0 ) /*0x7bec39*/
        v33 = 0; /*0x7bec3b*/
      if ( *(_DWORD *)(v2 + 28) != v15 )
      {
        do
        {
          if ( (*(_BYTE *)(v2 + 20) & 2) != 0 ) /*0x7bec50*/
            break; /*0x7bec50*/
          v16 = *(_DWORD *)(v1 + 320); /*0x7bec58*/
          v17 = *(_DWORD *)(*v3 + 28); /*0x7bec5e*/
          v18 = v3[332]; /*0x7bec61*/
          if ( v17 < v18 || v17 > v16 )
          {
            v20 = v16 - v3[332]; /*0x7bec8a*/
            if ( v20 >= 0 )
            {
              v21 = v17 - *(_DWORD *)(v1 + 296); /*0x7bec92*/
              v19 = v21 >= 0 ? v21 + v20 + 1 : *(_DWORD *)(v1 + 112) / 3;
            }
            else
            {
              v19 = *(_DWORD *)(v1 + 112) / 3; /*0x7bec8e*/
            }
          }
          else
          {
            v19 = v17 - v18; /*0x7bec6f*/
          }
          if ( v19 > v33 ) /*0x7beca6*/
            break; /*0x7beca6*/
          v22 = *(_DWORD *)(v2 + 20); /*0x7becac*/
          if ( (v22 & 4) != 0 ) /*0x7becb1*/
          {
            if ( (v22 & 8) != 0 ) /*0x7becb5*/
            {
              *(_DWORD *)(v2 + 40) = AudioCodec::Decode( /*0x7beccd*/
                                       (unsigned __int8 *)(*(_DWORD *)(v2 + 8) + *(_DWORD *)(v2 + 36)),
                                       *(char **)(v2 + 8),
                                       *(_DWORD *)(v1 + 1904));
              v23 = *(_DWORD *)(v2 + 20); /*0x7becd0*/
              LOBYTE(v23) = v23 & 0xF7; /*0x7becd6*/
              *(_DWORD *)(v2 + 20) = v23; /*0x7becd8*/
            }
            qmemcpy(v3 + 9, *(const void **)(v2 + 8), *(_DWORD *)(v2 + 40)); /*0x7bece9*/
            v24 = v3[1]; /*0x7becf2*/
            v1 = this; /*0x7becf8*/
            LOBYTE(v24) = v24 | 1; /*0x7becfc*/
            v3[8] = *(_DWORD *)(v2 + 40); /*0x7becfe*/
            v3[1] = v24; /*0x7bed01*/
          }
          v25 = *(void (__cdecl **)(int, int, _DWORD, _DWORD))(v1 + 72); /*0x7bed04*/
          if ( v25 ) /*0x7bed09*/
          {
            if ( (*(_DWORD *)(v2 + 20) & 0x100) != 0 ) /*0x7bed11*/
            {
              v25(v1, 4, *(_DWORD *)(v2 + 28), *(_DWORD *)(v1 + 288)); /*0x7bed21*/
              v26 = *(_DWORD *)(v2 + 20); /*0x7bed23*/
              BYTE1(v26) &= ~1u; /*0x7bed29*/
              *(_DWORD *)(v2 + 20) = v26; /*0x7bed2c*/
            }
            if ( (*(_DWORD *)(v2 + 20) & 0x200) != 0 ) /*0x7bed35*/
            {
              (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(v1 + 72))( /*0x7bed45*/
                v1,
                5,
                *(_DWORD *)(v2 + 28),
                *(_DWORD *)(v1 + 288));
              v27 = *(_DWORD *)(v2 + 20); /*0x7bed48*/
              BYTE1(v27) &= ~2u; /*0x7bed4e*/
              *(_DWORD *)(v2 + 20) = v27; /*0x7bed51*/
            }
            if ( (*(_DWORD *)(v2 + 20) & 0x400) != 0 ) /*0x7bed5a*/
            {
              Audio_Process_7BE830(v1, *(_DWORD *)(v2 + 28)); /*0x7bed61*/
              v28 = *(_DWORD *)(v2 + 20); /*0x7bed66*/
              BYTE1(v28) &= ~4u; /*0x7bed69*/
              *(_DWORD *)(v2 + 20) = v28; /*0x7bed6c*/
            }
          }
          v29 = *(int (__cdecl **)(_DWORD, _DWORD))(v1 + 76); /*0x7bed6f*/
          if ( v29 && v29(0, *(_DWORD *)(v2 + 28)) ) /*0x7bed7c*/
            return -2; /*0x7bedd6*/
          v30 = *(_DWORD *)(v2 + 20); /*0x7bed85*/
          *(_DWORD *)(v2 + 20) = 0; /*0x7bed88*/
          *(_DWORD *)(v2 + 24) = v30; /*0x7bed8f*/
          v2 = *(_DWORD *)(v2 + 12); /*0x7bed92*/
          *v3 = v2; /*0x7bed95*/
          ++*(_DWORD *)(v1 + 28); /*0x7bed9b*/
          if ( (*(_BYTE *)(v2 + 20) & 1) == 0 ) /*0x7beda3*/
          {
            v31 = *((_BYTE *)v3 + 4); /*0x7beddd*/
            ++v3[334]; /*0x7bede3*/
            if ( (v31 & 4) != 0 && (*(_BYTE *)(v1 + 336) & 4) == 0 ) /*0x7bedf2*/
            {
              v32 = *(_DWORD *)(*v3 + 16); /*0x7bedf9*/
              *v3 = v32; /*0x7bedfc*/
              *(_DWORD *)(v32 + 20) = *(_DWORD *)(v32 + 24); /*0x7bee02*/
              return -1; /*0x7bee0b*/
            }
            return -9; /*0x7bedf2*/
          }
        }
        while ( *(_DWORD *)(v2 + 28) != v35 );
      }
      v3[332] = *(_DWORD *)(*v3 + 28); /*0x7bedb4*/
      return -1; /*0x7bedb9*/
    }
    if ( (v3[1] & 4) != 0 ) /*0x7beb89*/
    {
      if ( Audio_Process_7BEE20(v1, v4, (int)v3, v2, Position) == v3[332] && (*(_BYTE *)(v2 + 20) & 0x80) != 0 ) /*0x7beba9*/
      {
        v3[332] = *(_DWORD *)(v2 + 28); /*0x7bebb0*/
        return -1; /*0x7bebb7*/
      }
      else
      {
        v14 = v3[1] | 8; /*0x7bebc5*/
        v3[332] = *(_DWORD *)(v2 + 28); /*0x7bebc8*/
        v3[1] = v14; /*0x7bebce*/
        *(_DWORD *)(v2 + 20) |= 0x80u; /*0x7bebd7*/
        return -1; /*0x7bebdc*/
      }
    }
    else
    {
      return -10; /*0x7bebe7*/
    }
  }
  else
  {
    v5 = *(_BYTE *)(this + 420); /*0x7beaa8*/
    ++*(_DWORD *)(this + 1752); /*0x7beaae*/
    if ( (v5 & 4) != 0 && (*(_BYTE *)(this + 336) & 4) == 0 ) /*0x7beac1*/
    {
      v6 = *(_DWORD *)(v2 + 16); /*0x7beac9*/
      *v3 = v6; /*0x7beacc*/
      *(_DWORD *)(v6 + 20) = *(_DWORD *)(v6 + 24); /*0x7bead1*/
      v7 = *(_DWORD *)(this + 420); /*0x7bead4*/
      if ( (v7 & 0x10) != 0 ) /*0x7bead9*/
      {
        LOBYTE(v7) = v7 | 8; /*0x7beadf*/
        *(_DWORD *)(this + 420) = v7; /*0x7beae2*/
        v8 = *(_DWORD *)(v2 + 20); /*0x7beae5*/
        LOBYTE(v8) = v8 | 0x80; /*0x7beae8*/
        *(_DWORD *)(v2 + 20) = v8; /*0x7beaeb*/
        return -1; /*0x7beaf6*/
      }
      return -1; /*0x7bedc9*/
    }
    return -9; /*0x7bee0c*/
  }
}



// ==== 0x007BEE20  Audio_Process_7BEE20  this=AudioStream  sig=csp ====
signed int __fastcall Audio_Process_7BEE20(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebp
  signed int v7; // esi
  signed int result; // eax
  char v9; // bl
  int v10; // ecx
  int v11; // esi
  int Position; // eax
  bool v13; // zf
  int v14; // edx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // esi
  int v19; // ecx
  signed int v21; // [esp+14h] [ebp-4h]
  signed int v22; // [esp+20h] [ebp+8h]

  v5 = *(_DWORD *)(a2 + 48); /*0x7bee25*/
  v7 = *(_DWORD *)(a4 + 28); /*0x7bee37*/
  result = a5 * v5 / 0x3Cu; /*0x7bee4b*/
  v21 = v7; /*0x7bee51*/
  if ( (*(_BYTE *)(a3 + 4) & 2) != 0 ) /*0x7bee58*/
    --result; /*0x7bee5a*/
  v9 = 0; /*0x7bee61*/
  v22 = *(_DWORD *)(a1 + 300); /*0x7bee63*/
  v10 = *(_DWORD *)(a1 + 336); /*0x7bee67*/
  if ( (v10 & 0x80u) != 0 ) /*0x7bee70*/
  {
    if ( (v10 & 0x100) != 0 ) /*0x7bee75*/
      v22 = *(_DWORD *)(a1 + 320); /*0x7bee7d*/
    do /*0x7beeee*/
    {
      if ( ((*(_DWORD *)(a2 + 64) & 4) != 0 || result <= v22) /*0x7beea1*/
        && ((*(_DWORD *)(a2 + 64) & 4) == 0 || v7 != *(_DWORD *)(a1 + 296) || v9) )
      {
        break; /*0x7beea1*/
      }
      v11 = *(_DWORD *)(a1 + 296) - v22 - 1; /*0x7beeb1*/
      Audio_Process_7C3950(a1, 60 * v11 / v5); /*0x7beec0*/
      Position = AudioStream::GetPosition((AudioStream *)a1); /*0x7beec7*/
      v9 = 1; /*0x7beeda*/
      v13 = v11 == 0; /*0x7beee6*/
      v7 = v21; /*0x7beee8*/
      result = v5 * Position / 60; /*0x7beeec*/
    }
    while ( !v13 ); /*0x7beeee*/
  }
  v14 = a2; /*0x7beef0*/
  if ( (*(_BYTE *)(a2 + 64) & 4) != 0 ) /*0x7beef8*/
  {
    if ( result <= v7 ) /*0x7beefc*/
    {
      v16 = *(_DWORD *)(a1 + 336); /*0x7bef3e*/
      BYTE1(v16) &= ~8u; /*0x7bef44*/
      *(_DWORD *)(a1 + 336) = v16; /*0x7bef47*/
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 234) & 1) == 0 || (*(_BYTE *)(a2 + 68) & 1) == 0 ) /*0x7bef10*/
        Audio_Process_7C3950(a1, 60 * (v7 - result) / v5); /*0x7bef22*/
      v15 = *(_DWORD *)(a1 + 336); /*0x7bef27*/
      v14 = a2; /*0x7bef2d*/
      BYTE1(v15) |= 8u; /*0x7bef31*/
      result = v7; /*0x7bef34*/
      *(_DWORD *)(a1 + 336) = v15; /*0x7bef36*/
    }
  }
  if ( v9 ) /*0x7bef4f*/
  {
    if ( (*(_BYTE *)(a3 + 4) & 2) != 0 && (*(_BYTE *)(v14 + 64) & 4) == 0 && --result < *(_DWORD *)(a1 + 296) ) /*0x7bef6a*/
      result = v22; /*0x7bef6c*/
    v17 = *(_DWORD *)(a1 + 312); /*0x7bef70*/
    if ( v17 != -1 ) /*0x7bef7b*/
    {
      v18 = *(_DWORD *)(a1 + 316); /*0x7bef7d*/
      *(_DWORD *)(a1 + 316) = -1; /*0x7bef83*/
      *(_DWORD *)(a1 + 296) = v18; /*0x7bef89*/
      *(_DWORD *)(a1 + 300) = v17; /*0x7bef8f*/
      *(_DWORD *)(a1 + 312) = -1; /*0x7bef95*/
    }
    v19 = *(_DWORD *)(a1 + 336); /*0x7bef9b*/
    if ( (v19 & 0x100) == 0 ) /*0x7befa4*/
    {
      *(_DWORD *)(a1 + 324) = *(_DWORD *)(a1 + 296); /*0x7befac*/
      *(_DWORD *)(a1 + 320) = *(_DWORD *)(a1 + 300); /*0x7befb8*/
    }
    *(_DWORD *)(a1 + 336) = v19 & 0xFFFFFE7F; /*0x7befc4*/
  }
  return result; /*0x7befca*/
}



// ==== 0x007BEFE0  ObjectClass::method_7BEFE0  this=ObjectClass  sig=csp ====
char __thiscall sub_7BEFE0(int this)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  char *v6; // ecx
  int v7; // eax
  int v8; // eax
  char *v9; // ecx

  v2 = *(_DWORD *)(this + 416); /*0x7befe5*/
  LOBYTE(v3) = *(_BYTE *)(this + 420); /*0x7befeb*/
  v4 = *(_DWORD *)(v2 + 4); /*0x7beff3*/
  if ( (v3 & 2) == 0 ) /*0x7beff6*/
  {
    v5 = *(_DWORD *)(v4 + 12); /*0x7beffc*/
    if ( (v5 & 2) != 0 ) /*0x7bf001*/
    {
      if ( (*(_BYTE *)(this + 340) & 1) != 0 ) /*0x7bf00a*/
      {
        v6 = *(char **)(this + 1776); /*0x7bf00c*/
        LOBYTE(v5) = v5 | 4; /*0x7bf012*/
        *(_DWORD *)(v4 + 12) = v5; /*0x7bf014*/
      }
      else
      {
        v6 = *(char **)v4; /*0x7bf019*/
      }
      *(_DWORD *)(v4 + 20) = AudioCodec::Decode( /*0x7bf030*/
                               (unsigned __int8 *)(*(_DWORD *)v4 + *(_DWORD *)(v4 + 16)),
                               v6,
                               *(_DWORD *)(this + 1908));
      v7 = *(_DWORD *)(v4 + 12); /*0x7bf033*/
      LOBYTE(v7) = v7 & 0xFD; /*0x7bf039*/
      *(_DWORD *)(v4 + 12) = v7; /*0x7bf03b*/
    }
    if ( (*(_BYTE *)(v2 + 20) & 8) != 0 ) /*0x7bf042*/
    {
      *(_DWORD *)(v2 + 40) = AudioCodec::Decode( /*0x7bf05a*/
                               (unsigned __int8 *)(*(_DWORD *)(v2 + 8) + *(_DWORD *)(v2 + 36)),
                               *(char **)(v2 + 8),
                               *(_DWORD *)(this + 1904));
      v8 = *(_DWORD *)(v2 + 20); /*0x7bf05d*/
      LOBYTE(v8) = v8 & 0xF7; /*0x7bf063*/
      *(_DWORD *)(v2 + 20) = v8; /*0x7bf065*/
    }
    v3 = *(_DWORD *)(v2 + 20); /*0x7bf068*/
    if ( (v3 & 0x10) != 0 ) /*0x7bf06d*/
    {
      if ( (*(_BYTE *)(this + 340) & 2) != 0 ) /*0x7bf076*/
      {
        v9 = *(char **)(this + 1768); /*0x7bf078*/
        LOBYTE(v3) = v3 | 0x40; /*0x7bf07e*/
        *(_DWORD *)(v2 + 20) = v3; /*0x7bf080*/
      }
      else
      {
        v9 = *(char **)v2; /*0x7bf085*/
      }
      AudioCodec::Decode((unsigned __int8 *)(*(_DWORD *)v2 + *(_DWORD *)(v2 + 32)), v9, *(_DWORD *)(this + 1912)); /*0x7bf097*/
      v3 = *(_DWORD *)(v2 + 20); /*0x7bf09c*/
      LOBYTE(v3) = v3 & 0xEF; /*0x7bf0a2*/
      *(_DWORD *)(v2 + 20) = v3; /*0x7bf0a4*/
    }
  }
  return v3; /*0x7bf0a7*/
}



// ==== 0x007BF0B0  ObjectClass::method_7BF0B0  this=ObjectClass  sig=csp ====
int __thiscall sub_7BF0B0(TechnoClass *this)
{
  int *v2; // edi
  void (__cdecl *v3)(TechnoClass *, int, int, int); // eax
  int v4; // eax
  void (__cdecl *v5)(TechnoClass *, int, char *, int); // eax
  int (__cdecl *v6)(TechnoClass *, int); // eax

  v2 = (int *)*((_DWORD *)this + 439); /*0x7bf0b4*/
  if ( (v2[5] & 4) != 0 || (this->ironTintTimer[2] & 1) != 0 ) /*0x7bf0c9*/
  {
    if ( (v2[5] & 4) != 0 ) /*0x7bf0cd*/
    {
      v3 = (void (__cdecl *)(TechnoClass *, int, int, int))this->ambientSoundController[3]; /*0x7bf0cf*/
      if ( v3 ) /*0x7bf0d4*/
        v3(this, 2, v2[2], v2[10]); /*0x7bf0dd*/
    }
    else
    {
      v4 = this->ironTintTimer[2]; /*0x7bf0df*/
      if ( (v4 & 1) != 0 ) /*0x7bf0e7*/
      {
        LOBYTE(v4) = v4 & 0xFE; /*0x7bf0e9*/
        this->ironTintTimer[2] = v4; /*0x7bf0eb*/
        v5 = (void (__cdecl *)(TechnoClass *, int, char *, int))this->ambientSoundController[3]; /*0x7bf0f1*/
        if ( v5 ) /*0x7bf0f6*/
          v5(this, 2, this->__pad_1C4, this->airstrikeTintTimer[2]); /*0x7bf109*/
      }
    }
  }
  sub_7BE940((int)this, v2); /*0x7bf112*/
  v6 = (int (__cdecl *)(TechnoClass *, int))this->ambientSoundController[4]; /*0x7bf117*/
  if ( v6 && v6(this, v2[7]) ) /*0x7bf123*/
    return -2; /*0x7bf12d*/
  else
    return -1; /*0x7bf135*/
}



// ==== 0x007BF140  ObjectClass::method_7BF140  this=ObjectClass  sig=csp ====
int __thiscall sub_7BF140(TechnoClass *this)
{
  int result; // eax
  int *v3; // edi

  result = AudioStream::ProcessStream((int)this); /*0x7bf143*/
  if ( result == -1 ) /*0x7bf14b*/
  {
    sub_7BEFE0((int)this); /*0x7bf150*/
    v3 = (int *)this->ironTintTimer[1]; /*0x7bf155*/
    sub_7BE940((int)this, v3); /*0x7bf15f*/
    *((_DWORD *)this + 439) = v3; /*0x7bf164*/
    if ( (this->ironTintTimer[2] & 8) == 0 ) /*0x7bf172*/
      this->ironTintTimer[1] = v3[3]; /*0x7bf177*/
    return -1; /*0x7bf17d*/
  }
  return result; /*0x7bf181*/
}



// ==== 0x007BF190  ObjectClass::method_7BF190  this=ObjectClass  sig=csp ====
int __thiscall sub_7BF190(TechnoClass *this)
{
  _DWORD *v2; // edi
  void (__cdecl *v3)(TechnoClass *, int, _DWORD, _DWORD); // eax
  int v4; // eax
  void (__cdecl *v5)(TechnoClass *, int, char *, int); // eax
  int (__cdecl *v6)(TechnoClass *, _DWORD); // eax

  v2 = (_DWORD *)*((_DWORD *)this + 439); /*0x7bf194*/
  if ( (v2[5] & 4) != 0 || (this->ironTintTimer[2] & 1) != 0 ) /*0x7bf1a9*/
  {
    if ( (v2[5] & 4) != 0 ) /*0x7bf1ad*/
    {
      v3 = (void (__cdecl *)(TechnoClass *, int, _DWORD, _DWORD))this->ambientSoundController[3]; /*0x7bf1af*/
      if ( v3 ) /*0x7bf1b4*/
        v3(this, 2, v2[2], v2[10]); /*0x7bf1bd*/
    }
    else
    {
      v4 = this->ironTintTimer[2]; /*0x7bf1bf*/
      if ( (v4 & 1) != 0 ) /*0x7bf1c7*/
      {
        LOBYTE(v4) = v4 & 0xFE; /*0x7bf1c9*/
        this->ironTintTimer[2] = v4; /*0x7bf1cb*/
        v5 = (void (__cdecl *)(TechnoClass *, int, char *, int))this->ambientSoundController[3]; /*0x7bf1d1*/
        if ( v5 ) /*0x7bf1d6*/
          v5(this, 2, this->__pad_1C4, this->airstrikeTintTimer[2]); /*0x7bf1e9*/
      }
    }
  }
  v6 = (int (__cdecl *)(TechnoClass *, _DWORD))this->ambientSoundController[4]; /*0x7bf1ee*/
  if ( v6 && v6(this, v2[7]) ) /*0x7bf1fa*/
    return -2; /*0x7bf204*/
  else
    return -1; /*0x7bf20c*/
}



// ==== 0x007BF220  nullsub_49  this=-  sig=ida-proto ====
void nullsub_49()
{
  ; /*0x7bf220*/
}



// ==== 0x007BF230  ?underflow_?$basic_streambuf_DU?$char_traits_D_std___std__MAEHXZ_7  this=-  sig=ida-proto ====
int _underflow___basic_streambuf_DU__char_traits_D_std___std__MAEHXZ_7()
{
  return -1; /*0x7bf233*/
}



// ==== 0x007BF240  sub_7BF240  this=-  sig=ida-proto ====
int __cdecl sub_7BF240(int a1, int a2, char *DstBuf, int MaxCharCount)
{
  int result; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax

  result = 0; /*0x7bf24a*/
  v5 = *(_DWORD *)(a1 + 184); /*0x7bf24d*/
  switch ( a2 ) /*0x7bf25c*/
  {
    case 1: /*0x7bf25c*/
    case 2: /*0x7bf25c*/
      return 0;
    case 3: /*0x7bf25c*/
      result = _open(DstBuf, 0x8000); /*0x7bf26d*/
      if ( result != -1 ) /*0x7bf278*/
      {
        *(_DWORD *)(a1 + 184) = result; /*0x7bf27e*/
        return 0; /*0x7bf285*/
      }
      return result; /*0x7bf288*/
    case 4: /*0x7bf25c*/
      _close(*(_DWORD *)(a1 + 184)); /*0x7bf365*/
      return 0; /*0x7bf36d*/
    case 5: /*0x7bf25c*/
      v6 = MaxCharCount; /*0x7bf289*/
      return _read(v5, DstBuf, MaxCharCount) != v6; /*0x7bf2a7*/
    case 6: /*0x7bf25c*/
      return 1; /*0x7bf2af*/
    case 7: /*0x7bf25c*/
      v7 = _lseek(v5, MaxCharCount, (int)DstBuf); /*0x7bf2ba*/
      return v7 == -1; /*0x7bf2ba*/
    case 8: /*0x7bf25c*/
      if ( MaxCharCount <= 0 ) /*0x7bf2c2*/
      {
        result = _lseek(v5, MaxCharCount, (int)DstBuf) == -1; /*0x7bf317*/
        if ( !result ) /*0x7bf31b*/
        {
          result = _read(v5, &MaxCharCount, 1u) != 1; /*0x7bf332*/
          if ( !result ) /*0x7bf334*/
          {
            v7 = _lseek(v5, -1, 1); /*0x7bf33b*/
            return v7 == -1; /*0x7bf340*/
          }
        }
      }
      else
      {
        result = _lseek(v5, MaxCharCount - 1, (int)DstBuf) == -1; /*0x7bf2dc*/
        if ( !result ) /*0x7bf2e0*/
          return _read(v5, &MaxCharCount, 1u) != 1; /*0x7bf2fc*/
      }
      return result;
    case 9: /*0x7bf25c*/
      *(_DWORD *)DstBuf = _filelength(*(_DWORD *)(a1 + 184)); /*0x7bf35d*/
      return 0; /*0x7bf363*/
    default:
      return result;
  }
}



// ==== 0x007BF3A0  sub_7BF3A0  this=-  sig=ida-proto ====
int __cdecl sub_7BF3A0(_DWORD *a1, int a2, void *a3, signed int a4)
{
  int result; // eax
  int v5; // edi
  int v6; // esi

  result = 0; /*0x7bf3a8*/
  switch ( a2 ) /*0x7bf3b6*/
  {
    case 1: /*0x7bf3b6*/
    case 2: /*0x7bf3b6*/
    case 3: /*0x7bf3b6*/
    case 4: /*0x7bf3b6*/
    case 9: /*0x7bf3b6*/
      return 0;
    case 5: /*0x7bf3b6*/
      v5 = a1[449]; /*0x7bf3bd*/
      if ( v5 + a4 > a1[448] ) /*0x7bf3d2*/
        return 1; /*0x7bf3d2*/
      qmemcpy(a3, (const void *)(v5 + a1[445]), a4); /*0x7bf3e8*/
      a1[449] += a4; /*0x7bf3fd*/
      return 0; /*0x7bf404*/
    case 6: /*0x7bf3b6*/
      return 1;
    case 7: /*0x7bf3b6*/
    case 8: /*0x7bf3b6*/
      if ( !a3 ) /*0x7bf40c*/
      {
        v6 = a1[447]; /*0x7bf428*/
        if ( a4 >= v6 ) /*0x7bf434*/
        {
          a1[449] = a4 - v6; /*0x7bf439*/
          return result; /*0x7bf440*/
        }
        return 1; /*0x7bf434*/
      }
      if ( a3 != (void *)1 ) /*0x7bf40f*/
        return 1; /*0x7bf441*/
      a1[449] += a4; /*0x7bf41d*/
      return 0;
    default:
      return result;
  }
}



// ==== 0x007BF470  FillAudioStreamBuffer  this=DSurface  sig=ida-proto ====
int __fastcall AudioStream_FillBuffer(int a1, int a2)
{
  int v3; // ebx
  char v4; // al
  int v5; // ecx
  int v6; // edx
  int v7; // ebp
  int v8; // eax
  int v9; // edi
  int v10; // eax
  _DWORD *v11; // ecx
  int v12; // edi
  int (__cdecl *v13)(int, int, int, int); // eax
  int result; // eax
  int v15; // eax
  int v16; // eax
  unsigned __int16 *v17; // edi
  int v18; // ecx
  char v19; // [esp+13h] [ebp-19h]
  int v20; // [esp+14h] [ebp-18h]
  _DWORD *i; // [esp+18h] [ebp-14h]
  int v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+20h] [ebp-Ch] BYREF
  int v24; // [esp+24h] [ebp-8h]
  int v25; // [esp+28h] [ebp-4h]

  v24 = a2; /*0x7bf478*/
  v3 = 0; /*0x7bf47c*/
  v4 = *(_BYTE *)(a1 + 132); /*0x7bf47e*/
  v5 = *(_DWORD *)(a1 + 1892); /*0x7bf484*/
  v6 = *(_DWORD *)(a1 + 384); /*0x7bf48a*/
  v7 = 0; /*0x7bf490*/
  v25 = 0; /*0x7bf495*/
  v22 = v5; /*0x7bf499*/
  v20 = v6; /*0x7bf49d*/
  v19 = 0; /*0x7bf4a1*/
  if ( (v4 & 0x20) != 0 && (*(_BYTE *)(a1 + 340) & 4) != 0 ) /*0x7bf4b3*/
  {
    v8 = *(_DWORD *)(a1 + 288); /*0x7bf4b9*/
    if ( v8 >= 0 ) /*0x7bf4c1*/
    {
      if ( v6 < *(_DWORD *)(a1 + 16) ) /*0x7bf4ca*/
        v7 = 2 * (*(_DWORD *)(v5 + 4 * v6) & 0xFFFFFFF); /*0x7bf4d5*/
      if ( v6 == *(_DWORD *)(a1 + 296) && v8 != *(_DWORD *)(a1 + 1808) ) /*0x7bf4e9*/
      {
        if ( v6 != *(_DWORD *)(a1 + 1800) ) /*0x7bf4f5*/
        {
          *(_DWORD *)(a1 + 1788) = v7; /*0x7bf4f7*/
          *(_DWORD *)(a1 + 1792) = 0; /*0x7bf4fd*/
          *(_DWORD *)(a1 + 1796) = 0; /*0x7bf503*/
        }
        *(_DWORD *)(a1 + 1808) = *(_DWORD *)(a1 + 288); /*0x7bf50f*/
        *(_DWORD *)(a1 + 1800) = *(_DWORD *)(a1 + 296); /*0x7bf51b*/
        *(_DWORD *)(a1 + 1804) = -1; /*0x7bf521*/
        v9 = *(_DWORD *)(a1 + 296); /*0x7bf52b*/
        v10 = *(_DWORD *)(a1 + 300); /*0x7bf531*/
        if ( v9 <= v10 ) /*0x7bf539*/
        {
          v11 = (_DWORD *)(v5 + 4 * v9); /*0x7bf53f*/
          for ( i = v11; ; v11 = i ) /*0x7bf542*/
          {
            if ( v9 >= *(_DWORD *)(a1 + 16) - 1 ) /*0x7bf552*/
            {
              if ( (*(int (__cdecl **)(int, int, int *, _DWORD))(a1 + 64))(a1, 9, &v23, 0) ) /*0x7bf579*/
                break; /*0x7bf581*/
              v10 = *(_DWORD *)(a1 + 300); /*0x7bf583*/
              v3 += v23 - 2 * (*(_DWORD *)(v22 + 4 * v10) & 0xFFFFFFF); /*0x7bf59e*/
            }
            else
            {
              v3 += 2 * (v11[1] & 0xFFFFFFF) - 2 * (*v11 & 0xFFFFFFF); /*0x7bf56b*/
            }
            if ( v3 >= *(_DWORD *)(a1 + 1784) ) /*0x7bf5a6*/
              break; /*0x7bf5a6*/
            ++v9; /*0x7bf5ac*/
            ++i; /*0x7bf5b2*/
            if ( v9 > v10 ) /*0x7bf5b6*/
              goto LABEL_21; /*0x7bf5b6*/
          }
          *(_DWORD *)(a1 + 1804) = v9 - 1; /*0x7bf5ba*/
LABEL_21:
          v6 = v20; /*0x7bf5c1*/
        }
        if ( v3 < *(_DWORD *)(a1 + 1784) && *(_DWORD *)(a1 + 1804) == -1 ) /*0x7bf5d4*/
          *(_DWORD *)(a1 + 1804) = *(_DWORD *)(a1 + 300); /*0x7bf5dc*/
        v5 = v22; /*0x7bf5e2*/
      }
      if ( v6 >= *(_DWORD *)(a1 + 1800) && v6 <= *(_DWORD *)(a1 + 1804) ) /*0x7bf5f8*/
      {
        if ( v7 != *(_DWORD *)(a1 + 1788) + *(_DWORD *)(a1 + 1792) ) /*0x7bf60e*/
          goto LABEL_40; /*0x7bf60e*/
        if ( v6 >= *(_DWORD *)(a1 + 16) - 1 ) /*0x7bf61a*/
        {
          if ( (*(int (__cdecl **)(int, int, int *, _DWORD))(a1 + 64))(a1, 9, &v23, 0) ) /*0x7bf636*/
            goto LABEL_39; /*0x7bf63e*/
          v6 = v20; /*0x7bf644*/
          v12 = v23 - v7; /*0x7bf648*/
        }
        else
        {
          v12 = 2 * (*(_DWORD *)(v5 + 4 * v6 + 4) & 0xFFFFFFF) - v7; /*0x7bf628*/
        }
        if ( v12 <= 0 ) /*0x7bf64c*/
          goto LABEL_40; /*0x7bf64c*/
        v13 = *(int (__cdecl **)(int, int, int, int))(a1 + 64); /*0x7bf64e*/
        if ( v13 != sub_7BF3A0 ) /*0x7bf656*/
          v13(a1, 7, 0, v7); /*0x7bf65e*/
        if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))( /*0x7bf676*/
               a1,
               5,
               *(_DWORD *)(a1 + 1780) + *(_DWORD *)(a1 + 1796),
               v12) )
        {
          return -4; /*0x7bf68c*/
        }
        *(_DWORD *)(a1 + 1792) += v12; /*0x7bf68d*/
LABEL_39:
        v6 = v20; /*0x7bf693*/
LABEL_40:
        v15 = *(_DWORD *)(a1 + 1788); /*0x7bf697*/
        if ( v7 < v15 + *(_DWORD *)(a1 + 1792) ) /*0x7bf6a7*/
        {
          v19 = 1; /*0x7bf6ab*/
          *(_DWORD *)(a1 + 1796) = v7 - v15; /*0x7bf6b0*/
          v25 = *(_DWORD *)(a1 + 64); /*0x7bf6b9*/
          *(_DWORD *)(a1 + 64) = sub_7BF3A0; /*0x7bf6bd*/
        }
      }
    }
  }
  if ( !v6 ) /*0x7bf6c6*/
  {
LABEL_49:
    if ( (v24 & 0x20) == 0 ) /*0x7bf702*/
      *(_DWORD *)(a1 + 360) = *(_DWORD *)(a1 + 356); /*0x7bf70a*/
    goto LABEL_51; /*0x7bf70a*/
  }
  v16 = *(unsigned __int16 *)(a1 + 1812); /*0x7bf6ca*/
  if ( (_WORD)v16 && (*(_BYTE *)(a1 + 1814) & 3) != 0 ) /*0x7bf6dc*/
  {
    v17 = *(unsigned __int16 **)(a1 + 1820); /*0x7bf6de*/
    v18 = 0; /*0x7bf6e4*/
    while ( v6 != *v17 ) /*0x7bf6f1*/
    {
      ++v18; /*0x7bf6f3*/
      v17 += 2; /*0x7bf6f4*/
      if ( v18 >= v16 ) /*0x7bf6f9*/
        goto LABEL_51; /*0x7bf6f9*/
    }
    goto LABEL_49; /*0x7bf6f1*/
  }
LABEL_51:
  result = DSP_AudioMixBuffers(a1, v24); /*0x7bf710*/
  if ( v19 ) /*0x7bf721*/
    *(_DWORD *)(a1 + 64) = v25; /*0x7bf727*/
  return result; /*0x7bf680*/
}



// ==== 0x007BF740  DSP_AudioMixBuffers  this=DSurface  sig=ida-proto ====
int __fastcall DSP_AudioMixBuffers(int a1, int a2)
{
  int v3; // eax
  _DWORD *v4; // edi
  int v5; // ecx
  int v6; // esi
  int v7; // ebx
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int result; // eax
  int v13; // eax
  unsigned __int16 *v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  _DWORD *v18; // edx
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  _DWORD *v28; // ebx
  unsigned int v29; // eax
  int v30; // ecx
  _DWORD *v31; // esi
  int v32; // edi
  int v33; // eax
  int v34; // eax
  int v35; // eax
  bool v36; // zf
  int v37; // eax
  unsigned int v38; // esi
  int v39; // ebx
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  unsigned int v47; // eax
  __int16 v48; // cx
  __int16 v49; // ax
  _DWORD *v50; // esi
  int v51; // ea... [30368 chars total]



// ==== 0x007B0090  sub_7B0090  this=-  sig=ida-proto ====
int sub_7B0090()
{
  dword_B77F54 = 0; /*0x7b0095*/
  return atexit(sub_7B00B0); /*0x7b00a5*/
}



// ==== 0x007B00B0  sub_7B00B0  this=-  sig=ida-proto ====
void __cdecl sub_7B00B0()
{
  if ( dword_B77F54 ) /*0x7b00b7*/
  {
    __3_YAXPAX_Z(dword_B77F54); /*0x7b00ba*/
    dword_B77F54 = 0; /*0x7b00c2*/
  }
}



// ==== 0x007B00D0  sub_7B00D0  this=-  sig=ida-proto ====
int sub_7B00D0()
{
  dword_B77F60 = 0; /*0x7b00d5*/
  return atexit(sub_7B00F0); /*0x7b00e5*/
}



// ==== 0x007B00F0  sub_7B00F0  this=-  sig=ida-proto ====
void __cdecl sub_7B00F0()
{
  if ( dword_B77F60 ) /*0x7b00f7*/
  {
    __3_YAXPAX_Z(dword_B77F60); /*0x7b00fa*/
    dword_B77F60 = 0; /*0x7b0102*/
  }
}



// ==== 0x007B0110  sub_7B0110  this=-  sig=ida-proto ====
int sub_7B0110()
{
  ComPtr::Constructor(&dword_B77F58); /*0x7b0115*/
  dword_B77F58 = (int)&rc_ptr<WDTState>::`vftable'; /*0x7b011f*/
  return atexit(sub_7B0130); /*0x7b012f*/
}



// ==== 0x007B0130  sub_7B0130  this=-  sig=ida-proto ====
void __cdecl sub_7B0130()
{
  dword_B77F58 = (int)&rc_ptr<WDTState>::`vftable'; /*0x7b0130*/
  ComPtr::Release(&dword_B77F58); /*0x7b013f*/
}



// ==== 0x007B0150  sub_7B0150  this=-  sig=ida-proto ====
int sub_7B0150()
{
  ComPtr::Constructor(&dword_B77F70); /*0x7b0155*/
  dword_B77F70 = (int)&rc_ptr<WDTState>::`vftable'; /*0x7b015f*/
  return atexit(sub_7B0170); /*0x7b016f*/
}



// ==== 0x007B0170  sub_7B0170  this=-  sig=ida-proto ====
void __cdecl sub_7B0170()
{
  dword_B77F70 = (int)&rc_ptr<WDTState>::`vftable'; /*0x7b0170*/
  ComPtr::Release(&dword_B77F70); /*0x7b017f*/
}



// ==== 0x007B0190  sub_7B0190  this=-  sig=ida-proto ====
int sub_7B0190()
{
  ComPtr::Constructor(&stru_B77F68); /*0x7b0195*/
  stru_B77F68 = (int)&rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7b019f*/
  return atexit(sub_7B01B0); /*0x7b01af*/
}



// ==== 0x007B01B0  sub_7B01B0  this=-  sig=ida-proto ====
void __cdecl sub_7B01B0()
{
  stru_B77F68 = (int)&rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7b01b0*/
  ComPtr::Release(&stru_B77F68); /*0x7b01bf*/
}



// ==== 0x007B01D0  sub_7B01D0  this=-  sig=ida-proto ====
int sub_7B01D0()
{
  ComPtr::Constructor(&dword_B77F78); /*0x7b01d5*/
  dword_B77F78 = (int)&rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7b01df*/
  return atexit(sub_7B01F0); /*0x7b01ef*/
}



// ==== 0x007B01F0  sub_7B01F0  this=-  sig=ida-proto ====
void __cdecl sub_7B01F0()
{
  dword_B77F78 = (int)&rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7b01f0*/
  ComPtr::Release(&dword_B77F78); /*0x7b01ff*/
}



// ==== 0x007B0210  FindLobbyIDWOL_Find  this=-  sig=ida-proto ====
int *sub_7B0210()
{
  return &dword_B77F58; /*0x7b0215*/
}



// ==== 0x007B0220  ComStreamClass::seekToPosition  this=ComStreamClass  sig=csp ====
_DWORD *__thiscall ComStreamClass::seekToPosition(ComStreamClass *this)
{
  _DWORD *_76BE90; // eax
  _DWORD *v3; // eax
  rc_ptr v5[4]; // [esp+4h] [ebp-10h] BYREF
  rc_ptr v6[4]; // [esp+Ch] [ebp-8h] BYREF

  ComPtr::Set((ComPtr *)&stru_B77EB0.lineTrailer, this->ComStreamClass_field_0x04); /*0x7b022f*/
  _76BE90 = Audio_Create_76BE90(v6, (int)this); /*0x7b023a*/
  v3 = Audio_Create(v5, (const char **)&g_WindowManager.__pad_EC[684], (int)_76BE90); /*0x7b0249*/
  ComPtr::Set(&stru_B77F68, v3[1]); /*0x7b0257*/
  *(_DWORD *)v5 = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7b0260*/
  ComPtr::Release((ComPtr *)v5); /*0x7b0268*/
  *(_DWORD *)v6 = &rc_ptr<WorldDominationTour::CampaignProperties>::`vftable'; /*0x7b0271*/
  return ComPtr::Release((ComPtr *)v6); /*0x7b027e*/
}



// ==== 0x007B0290  sub_7B0290  this=-  sig=ida-proto ====
int *sub_7B0290()
{
  return &dword_B77F70; /*0x7b0295*/
}



// ==== 0x007B02A0  ComStreamClass::getStreamSize  this=ComStreamClass  sig=csp ====
_DWORD *__thiscall ComStreamClass::getStreamSize(ComStreamClass *this)
{
  _DWORD *_76BE90; // eax
  _DWORD *v3; // eax
  rc_ptr v5[4]; // [esp+4h] [ebp-10h] BYREF
  rc_ptr v6[4]; // [esp+Ch] [ebp-8h] BYREF

  ComPtr::Set((ComPtr *)&stru_B77F68.ComPtr_field_0x08, this->ComStreamClass_field_0x04); /*0x7b02af*/
  _76BE90 = Audio_Create_76BE90(v6, (int)this); /*0x7b02ba*/
  v3 = Audio_Create(v5, (const char **)&g_WindowManager.__pad_EC[684], (int)_76BE90); /*0x7b02c9*/
  ComPtr::Set((ComPtr *)&stru_B77F68.ComPtr_field_0x10, v3[1]); /*0x7b02d7*/
  *(_DWORD *)v5 = &rc_ptr<WorldDominationTour::Campaign>::`vftable'; /*0x7b02e0*/
  ComPtr::Release((ComPtr *)v5); /*0x7b02e8*/
  *(_DWORD *)v6 = &rc_ptr<WorldDominationTour::CampaignProperties>::`vftable'; /*0x7b02f1*/
  return ComPtr::Release((ComPtr *)v6); /*0x7b02fe*/
}



// ==== 0x007B0310  sub_7B0310  this=-  sig=ida-proto ====
void *sub_7B0310()
{
  return dword_B77F54; /*0x7b0315*/
}



// ==== 0x007B0340  sub_7B0340  this=-  sig=ida-proto ====
void *sub_7B0340()
{
  return dword_B77F60; /*0x7b0345*/
}



// ==== 0x007B0370  RequestMatchWOL_Helper  this=-  sig=ida-proto ====
int *sub_7B0370()
{
  return &stru_B77F68; /*0x7b0375*/
}



// ==== 0x007B0380  sub_7B0380  this=-  sig=ida-proto ====
int *sub_7B0380()
{
  return &dword_B77F78; /*0x7b0385*/
}



// ==== 0x007B0390  rc_ptr::FindWDTTerritoryClass  this=rc_ptr  sig=csp ====
_DWORD *__fastcall FindWDTTerritoryClass(rc_ptr *this, int a2)
{
  char v3; // bl
  _DWORD *v4; // edi
  _DWORD v6[2]; // [esp+Ch] [ebp-18h] BYREF
  _DWORD v7[4]; // [esp+14h] [ebp-10h] BYREF

  v3 = 0; /*0x7b03a2*/
  v7[3] = 0; /*0x7b03a6*/
  FindWDTTerritoryClass_Find((char *)stru_B77F68.ComPtr_field_0x04, v7, a2); /*0x7b03aa*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(v7[0] + 4))(v7) ) /*0x7b03b7*/
  {
    v4 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(v7[1] + 4) + 8 * v7[2] + 4) + 8); /*0x7b03d0*/
  }
  else
  {
    ComPtr::Constructor((ComPtr *)v6); /*0x7b03d9*/
    v6[0] = &rc_ptr<WDTTerritory>::`vftable'; /*0x7b03de*/
    v3 = 1; /*0x7b03e6*/
    v4 = v6; /*0x7b03eb*/
  }
  ComPtr::Constructor((ComPtr *)this); /*0x7b03f1*/
  *(_DWORD *)this = &rc_ptr<WDTTerritory>::`vftable'; /*0x7b03f6*/
  ComPtr::Set((ComPtr *)this, v4[1]); /*0x7b0402*/
  if ( (v3 & 1) != 0 ) /*0x7b040a*/
  {
    v6[0] = &rc_ptr<WDTTerritory>::`vftable'; /*0x7b0410*/
    ComPtr::Release((ComPtr *)v6); /*0x7b0418*/
  }
  return this; /*0x7b041f*/
}



// ==== 0x007B0430  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_23  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_23(std::codecvt_base *this)
{
  return 1; /*0x7b0432*/
}



// ==== 0x007B0440  FactionSelectDialogControl_WorldDominationTour::QueryInterface  this=FactionSelectDialogControl@WorldDominationTour  sig=csp ====
_DWORD *__thiscall StreamWrapper::QueryInterface(FactionSelectDialogControl_WorldDominationTour *this, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx

  v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 4); /*0x7b0443*/
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::FactionSelectDialogControl::`vftable'; /*0x7b0446*/
  if ( v3 ) /*0x7b044e*/
    (**v3)(v3, 1); /*0x7b0454*/
  v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 5); /*0x7b0456*/
  if ( v4 ) /*0x7b045b*/
    (**v4)(v4, 1); /*0x7b0461*/
  v5 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 6); /*0x7b0463*/
  if ( v5 ) /*0x7b0468*/
    (**v5)(v5, 1); /*0x7b046e*/
  OwnerDrawControl::InitVtable((OwnerDrawControl *)this); /*0x7b0472*/
  if ( (a2 & 1) != 0 ) /*0x7b047c*/
    __3_YAXPAX_Z(this); /*0x7b047f*/
  return this->__pad_0; /*0x7b0489*/
}



// ==== 0x007B0490  FactionSelectDialogControl@WorldDominationTour::Team_Start_7B0490  this=FactionSelectDialogControl@WorldDominationTour  sig=csp ====
_DWORD *__thiscall sub_7B0490(_DWORD *this)
{
  _DWORD v3[22]; // [esp+8h] [ebp-6Ch] BYREF
  _BYTE v4[12]; // [esp+60h] [ebp-14h] BYREF
  int v5; // [esp+6Ch] [ebp-8h]

  SimpleDialogControl::Constructor(this); /*0x7b0497*/
  *(this + 3) = 0; /*0x7b04a7*/
  *(this + 4) = 0; /*0x7b04aa*/
  *(this + 5) = 0; /*0x7b04ad*/
  *(this + 6) = 0; /*0x7b04b0*/
  *this = &WorldDominationTour::FactionSelectDialogControl::`vftable'; /*0x7b04b3*/
  CCFileClass::Construct(v3, aWdtfsbsmPcx); /*0x7b04b9*/
  *(this + 4) = DecodeFrameSHP((int)v3, 0, 0, 0); /*0x7b04cf*/
  v3[0] = &CCFileClass::`vftable'; /*0x7b04d2*/
  v5 = 0; /*0x7b04da*/
  Vector::Clear((int)v4); /*0x7b04de*/
  v3[0] = &off_7E1668; /*0x7b04e7*/
  BufferIOFileClass::Dtor(v3); /*0x7b04ef*/
  if ( !*(this + 5) ) /*0x7b04f4*/
  {
    CCFileClass::Construct(v3, aWdtfsasmPcx); /*0x7b0502*/
    *(this + 5) = DecodeFrameSHP((int)v3, 0, 0, 0); /*0x7b0518*/
    v3[0] = &CCFileClass::`vftable'; /*0x7b051b*/
    v5 = 0; /*0x7b0523*/
    Vector::Clear((int)v4); /*0x7b0527*/
    v3[0] = &off_7E1668; /*0x7b0530*/
    BufferIOFileClass::Dtor(v3); /*0x7b0538*/
  }
  if ( !*(this + 6) ) /*0x7b053d*/
  {
    CCFileClass::Construct(v3, aWdtfsssmPcx); /*0x7b054b*/
    *(this + 6) = DecodeFrameSHP((int)v3, 0, 0, 0); /*0x7b0561*/
    v3[0] = &CCFileClass::`vftable'; /*0x7b0564*/
    v5 = 0; /*0x7b056c*/
    Vector::Clear((int)v4); /*0x7b0570*/
    v3[0] = &off_7E1668; /*0x7b0579*/
    BufferIOFileClass::Dtor(v3); /*0x7b0581*/
  }
  *(this + 7) = *(this + 4); /*0x7b058a*/
  return this; /*0x7b0589*/
}



// ==== 0x007B05A0  sub_7B05A0  this=-  sig=ida-proto ====
int sub_7B05A0()
{
  dword_B77FA0 = 0; /*0x7b05a2*/
  dword_B77FA4 = 0; /*0x7b05a7*/
  dword_B77FA8 = 0; /*0x7b05ac*/
  dword_B77FAC = 0; /*0x7b05b1*/
  return 0; /*0x7b05b6*/
}



// ==== 0x007B05C0  CompressScreenshot  this=-  sig=csp ====
char __fastcall Screenshot_Compress(int *a1, int *a2, void *Src)
{
  int v5; // ebx
  int v6; // eax
  __int16 v7; // ax
  int v8; // edx
  __int16 v9; // ax
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  __int16 v15; // ax
  int v16; // edx
  size_t v17; // eax
  void *v18; // eax
  int v19; // edx
  size_t v20; // eax
  size_t v21; // eax
  void *v22; // eax
  int v23; // edx
  int v24; // eax
  char *v25; // ebx
  int v26; // edx
  _BYTE *v27; // edi
  unsigned __int16 v28; // bx
  char v29; // al
  char v30; // dl
  int v31; // eax
  int v32; // edi
  int v33; // edi
  char *v35; // edi
  char v36; // al
  char v37; // dl
  char v38; // cl
  int v39; // edx
  int v40; // edx
  int v41; // edx
  int v42; // [esp+30h] [ebp-3C0h]
  char v43; // [esp+43h] [ebp-3ADh] BYREF
  char v44; // [esp+44h] [ebp-3ACh] BYREF
  char v45; // [esp+45h] [ebp-3ABh]
  char v46; // [esp+46h] [ebp-3AAh] BYREF
  char v47; // [esp+47h] [ebp-3A9h] BYREF
  int v48; // [esp+48h] [ebp-3A8h]
  void *v49; // [esp+4Ch] [ebp-3A4h]
  int v50; // [esp+50h] [ebp-3A0h]
  void *v51; // [esp+54h] [ebp-39Ch]
  unsigned __int16 *v52; // [esp+58h] [ebp-398h]
  void *Block; // [esp+5Ch] [ebp-394h]
  _BYTE v54[4]; // [esp+60h] [ebp-390h] BYREF
  __int16 v55; // [esp+64h] [ebp-38Ch]
  __int16 v56; // [esp+66h] [ebp-38Ah]
  __int16 v57; // [esp+68h] [ebp-388h]
  unsigned __int16 v58; // [esp+6Ah] [ebp-386h]
  __int16 v59; // [esp+6Ch] [ebp-384h]
  __int16 v60; // [esp+6Eh] [ebp-382h]
  char v61; // [esp+70h] [ebp-380h]
  char v62; // [esp+71h] [ebp-37Fh]
  char v63; // [esp+72h] [ebp-37Eh]
  char v64; // [esp+73h] [ebp-37Dh]
  char v65; // [esp+74h] [ebp-37Ch]
  char v66; // [esp+75h] [ebp-37Bh]
  char v67; // [esp+76h] [ebp-37Ah]
  char v68; // [esp+77h] [ebp-379h]
  char v69; // [esp+78h] [ebp-378h]
  char v70; // [esp+79h] [ebp-377h]
  char v71; // [esp+7Ah] [ebp-376h]
  char v72; // [esp+7Bh] [ebp-375h]
  char v73; // [esp+7Ch] [ebp-374h]
  char v74; // [esp+7Dh] [ebp-373h]
  char v75; // [esp+7Eh] [ebp-372h]
  char v76; // [esp+7Fh] [ebp-371h]
  char v77; // [esp+80h] [ebp-370h]
  char v78; // [esp+81h] [ebp-36Fh]
  char v79; // [esp+82h] [ebp-36Eh]
  char v80; // [esp+83h] [ebp-36Dh]
  char v81; // [esp+84h] [ebp-36Ch]
  char v82; // [esp+85h] [ebp-36Bh]
  char v83; // [esp+86h] [ebp-36Ah]
  char v84; // [esp+87h] [ebp-369h]
  char v85; // [esp+88h] [ebp-368h]
  char v86; // [esp+89h] [ebp-367h]
  char v87; // [esp+8Ah] [ebp-366h]
  char v88; // [esp+8Bh] [ebp-365h]
  char v89; // [esp+8Ch] [ebp-364h]
  char v90; // [esp+8Dh] [ebp-363h]
  int v91; // [esp+8Eh] [ebp-362h]
  char v92; // [esp+92h] [ebp-35Eh]
  char v93; // [esp+93h] [ebp-35Dh]
  char v94; // [esp+94h] [ebp-35Ch]
  char v95; // [esp+95h] [ebp-35Bh]
  char v96; // [esp+96h] [ebp-35Ah]
  char v97; // [esp+97h] [ebp-359h]
  char v98; // [esp+98h] [ebp-358h]
  char v99; // [esp+99h] [ebp-357h]
  char v100; // [esp+9Ah] [ebp-356h]
  char v101; // [esp+9Bh] [ebp-355h]
  char v102; // [esp+9Ch] [ebp-354h]
  char v103; // [esp+9Dh] [ebp-353h]
  char v104; // [esp+9Eh] [ebp-352h]
  char v105; // [esp+9Fh] [ebp-351h]
  char v106; // [esp+A0h] [ebp-350h]
  char v107; // [esp+A1h] [ebp-34Fh]
  unsigned __int16 v108; // [esp+A2h] [ebp-34Eh]
  __int16 v109; // [esp+A4h] [ebp-34Ch]
  __int16 v110; // [esp+A6h] [ebp-34Ah]
  __int16 v111; // [esp+A8h] [ebp-348h]
  char v112; // [esp+AAh] [ebp-346h]
  _BYTE v113[53]; // [esp+ABh] [ebp-345h] BYREF
  int v114; // [esp+E0h] [ebp-310h]
  int v115; // [esp+E4h] [ebp-30Ch]
  char *v116; // [esp+E8h] [ebp-308h]
  _BYTE v117[768]; // [esp+F0h] [ebp-300h] BYREF

  v5 = 0; /*0x7b05cd*/
  v6 = *a2; /*0x7b05cf*/
  v54[0] = 10; /*0x7b05d4*/
  v54[1] = 5; /*0x7b05d9*/
  v54[2] = 1; /*0x7b05de*/
  v54[3] = 8; /*0x7b05e3*/
  v55 = 0; /*0x7b05e8*/
  v56 = 0; /*0x7b05ed*/
  v7 = (*(int (__thiscall **)(int *))(v6 + 124))(a2); /*0x7b05f2*/
  v8 = *a2; /*0x7b05f5*/
  v57 = v7 - 1; /*0x7b05fa*/
  v58 = (*(int (__thiscall **)(int *))(v8 + 128))(a2) - 1; /*0x7b0608*/
  v9 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x7b060f*/
  v10 = *a2; /*0x7b0612*/
  v59 = v9; /*0x7b0616*/
  v60 = (*(int (__thiscall **)(int *))(v10 + 128))(a2); /*0x7b0621*/
  v11 = *a2; /*0x7b0626*/
  v61 = 0; /*0x7b0628*/
  v62 = 0; /*0x7b062c*/
  v63 = 0; /*0x7b0630*/
  v64 = 0; /*0x7b0634*/
  v65 = 0; /*0x7b0638*/
  v66 = 0; /*0x7b063c*/
  v67 = 0; /*0x7b0640*/
  v68 = 0; /*0x7b0644*/
  v69 = 0; /*0x7b0648*/
  v70 = 0; /*0x7b064c*/
  v71 = 0; /*0x7b0650*/
  v72 = 0; /*0x7b0654*/
  v73 = 0; /*0x7b0658*/
  v74 = 0; /*0x7b065c*/
  v75 = 0; /*0x7b0660*/
  v76 = 0; /*0x7b0664*/
  v77 = 0; /*0x7b0668*/
  v78 = 0; /*0x7b066c*/
  v79 = 0; /*0x7b0670*/
  v80 = 0; /*0x7b0674*/
  v81 = 0; /*0x7b0678*/
  v82 = 0; /*0x7b067c*/
  v83 = 0; /*0x7b0680*/
  v84 = 0; /*0x7b0684*/
  v85 = 0; /*0x7b0688*/
  v86 = 0; /*0x7b068c*/
  v87 = 0; /*0x7b0690*/
  v88 = 0; /*0x7b0694*/
  v89 = 0; /*0x7b0698*/
  v90 = 0; /*0x7b069c*/
  v91 = 0; /*0x7b06a0*/
  v92 = 0; /*0x7b06b0*/
  v93 = 0; /*0x7b06b4*/
  v94 = 0; /*0x7b06b8*/
  v95 = 0; /*0x7b06bc*/
  v96 = 0; /*0x7b06c0*/
  v97 = 0; /*0x7b06c4*/
  v98 = 0; /*0x7b06c8*/
  v99 = 0; /*0x7b06cc*/
  v100 = 0; /*0x7b06d0*/
  v101 = 0; /*0x7b06d4*/
  v102 = 0; /*0x7b06d8*/
  v103 = 0; /*0x7b06dc*/
  v104 = 0; /*0x7b06e0*/
  v105 = 0; /*0x7b06e4*/
  v106 = 0; /*0x7b06e8*/
  v12 = (*(int (__thiscall **)(int *))(v11 + 112))(a2); /*0x7b06ee*/
  v13 = *a2; /*0x7b06f4*/
  v107 = v12 != 2 ? 1 : 3;
  v108 = (*(int (__thiscall **)(int *))(v13 + 124))(a2); /*0x7b0707*/
  v14 = *a2; /*0x7b070c*/
  v109 = 1; /*0x7b0710*/
  v15 = (*(int (__thiscall **)(int *))(v14 + 124))(a2); /*0x7b0717*/
  v16 = *a2; /*0x7b071a*/
  v110 = v15; /*0x7b071e*/
  v111 = (*(int (__thiscall **)(int *))(v16 + 128))(a2); /*0x7b0729*/
  v112 = 0; /*0x7b0739*/
  v45 = 0; /*0x7b073d*/
  memset(v113, 0, sizeof(v113)); /*0x7b0741*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(*a1 + 24))(a1) ) /*0x7b0749*/
  {
    (*(void (__thiscall **)(int *, int))(*a1 + 28))(a1, 2); /*0x7b0757*/
    v45 = 1; /*0x7b075a*/
  }
  (*(void (__thiscall **)(int *, _BYTE *, int))(*a1 + 48))(a1, v54, 128); /*0x7b076e*/
  if ( (*(int (__thiscall **)(int *))(*a2 + 112))(a2) != 2 ) /*0x7b077b*/
  {
    if ( v58 + 1 <= 0 ) /*0x7b097c*/
      goto LABEL_33; /*0x7b097c*/
    v116 = 0; /*0x7b0982*/
    while ( 1 ) /*0x7b0999*/
    {
      v35 = (char *)(*(int (__thiscall **)(int *, char *, int))(*a2 + 92))(a2, v116, v5); /*0x7b0999*/
      v36 = 1; /*0x7b099b*/
      v37 = *v35; /*0x7b09a1*/
      v43 = *v35; /*0x7b09ac*/
      if ( v108 > 1u ) /*0x7b09b0*/
      {
        v48 = v108 - 1; /*0x7b09b7*/
        do /*0x7b0a3a*/
        {
          v38 = *++v35; /*0x7b09bb*/
          v46 = v38; /*0x7b09c1*/
          if ( v38 == v37 ) /*0x7b09c5*/
          {
            if ( ++v36 == 47 ) /*0x7b09cb*/
            {
              (*(void (__thiscall **)(int *, char *, int))(*a1 + 48))(a1, &byte_7F7930, 1); /*0x7b09d9*/
              (*(void (__thiscall **)(int *, char *, int))(*a1 + 48))(a1, &v46, 1); /*0x7b09e8*/
              v36 = 0; /*0x7b09eb*/
              v37 = v43; /*0x7b09ed*/
            }
          }
          else
          {
            if ( v36 ) /*0x7b09f5*/
            {
              if ( v36 != 1 || (v37 & 0xC0) == 0xC0 ) /*0x7b0a01*/
              {
                v39 = *a1; /*0x7b0a03*/
                v44 = v36 | 0xC0; /*0x7b0a08*/
                (*(void (__thiscall **)(int *, char *, int))(v39 + 48))(a1, &v44, 1); /*0x7b0a15*/
              }
              (*(void (__thiscall **)(int *, char *, int))(*a1 + 48))(a1, &v43, 1); /*0x7b0a24*/
            }
            v37 = v46; /*0x7b0a27*/
            v36 = 1; /*0x7b0a2b*/
            v43 = v46; /*0x7b0a2d*/
          }
          --v48; /*0x7b0a36*/
        }
        while ( v48 ); /*0x7b0a3a*/
        if ( !v36 ) /*0x7b0a42*/
          goto LABEL_32; /*0x7b0a42*/
        if ( v36 != 1 ) /*0x7b0a46*/
          goto LABEL_30; /*0x7b0a46*/
      }
      if ( (v37 & 0xC0) == 0xC0 ) /*0x7b0a4e*/
      {
LABEL_30:
        v40 = *a1; /*0x7b0a50*/
        v44 = v36 | 0xC0; /*0x7b0a55*/
        (*(void (__thiscall **)(int *, char *, int))(v40 + 48))(a1, &v44, 1); /*0x7b0a62*/
      }
      (*(void (__thiscall **)(int *, char *, int))(*a1 + 48))(a1, &v43, 1); /*0x7b0a71*/
LABEL_32:
      (*(void (__thiscall **)(int *))(*a2 + 96))(a2); /*0x7b0a74*/
      if ( ++v5 >= v58 + 1 ) /*0x7b0a88*/
        goto LABEL_33; /*0x7b0a88*/
    }
  }
  v17 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x7b0785*/
  v18 = __2_YAPAXI_Z(v17); /*0x7b0789*/
  v19 = *a2; /*0x7b078e*/
  Block = v18; /*0x7b0795*/
  v20 = (*(int (__thiscall **)(int *))(v19 + 124))(a2); /*0x7b0799*/
  v49 = __2_YAPAXI_Z(v20); /*0x7b07a2*/
  v21 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x7b07ad*/
  v22 = __2_YAPAXI_Z(v21); /*0x7b07b1*/
  v23 = *a2; /*0x7b07b6*/
  v51 = v22; /*0x7b07bd*/
  v24 = (*(int (__thiscall **)(int *))(v23 + 124))(a2); /*0x7b07c1*/
  v25 = (char *)__2_YAPAXI_Z(10 * v24); /*0x7b07dc*/
  v116 = v25; /*0x7b07df*/
  v50 = 0; /*0x7b07e8*/
  if ( v58 + 1 <= 0 ) /*0x7b07f0*/
  {
LABEL_11:
    __3_YAXPAX_Z(Block); /*0x7b0934*/
    __3_YAXPAX_Z(v49); /*0x7b0943*/
    __3_YAXPAX_Z(v51); /*0x7b094d*/
    __3_YAXPAX_Z(v25); /*0x7b0953*/
LABEL_33:
    v41 = *a1; /*0x7b0a8e*/
    v47 = 12; /*0x7b0a9a*/
    (*(void (__thiscall **)(int *, char *, int))(v41 + 48))(a1, &v47, 1); /*0x7b0a9f*/
    if ( (*(int (__thiscall **)(int *))(*a2 + 112))(a2) == 1 ) /*0x7b0aac*/
    {
      memcpy(v117, Src, sizeof(v117)); /*0x7b0ac3*/
      (*(void (__thiscall **)(int *, _BYTE *, int))(*a1 + 48))(a1, v117, 768); /*0x7b0add*/
    }
    if ( v45 ) /*0x7b0ae6*/
      (*(void (__thiscall **)(int *))(*a1 + 52))(a1); /*0x7b0aed*/
    return 0; /*0x7b0af3*/
  }
  while ( 1 ) /*0x7b0807*/
  {
    v52 = (unsigned __int16 *)(*(int (__thiscall **)(int *, _DWORD, int))(*a2 + 92))(a2, 0, v50); /*0x7b0807*/
    if ( !v52 ) /*0x7b080b*/
      return 1; /*0x7b0960*/
    v26 = *a2; /*0x7b0811*/
    v48 = 0; /*0x7b0815*/
    if ( (*(int (__thiscall **)(int *))(v26 + 124))(a2) > 0 ) /*0x7b0822*/
    {
      v27 = v49; /*0x7b0828*/
      v114 = (_BYTE *)Block - (_BYTE *)v49; /*0x7b0834*/
      v115 = (_BYTE *)v51 - (_BYTE *)v49; /*0x7b0841*/
      do /*0x7b08b9*/
      {
        v28 = *v52++; /*0x7b0853*/
        v29 = (unsigned __int8)(v28 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x7b086a*/
        v30 = (unsigned __int8)(v28 >> g_BitMask_Green) << g_BitMask_Blue; /*0x7b087c*/
        LOBYTE(v28) = (unsigned __int8)(v28 >> g_BitShift_Blue) << g_BitMask_Red; /*0x7b088e*/
        v27[v114] = v29; /*0x7b0897*/
        *v27 = v30; /*0x7b089a*/
        v27[v115] = v28; /*0x7b08a5*/
        v31 = *a2; /*0x7b08ac*/
        ++v48; /*0x7b08af*/
        ++v27; /*0x7b08b3*/
      }
      while ( v48 < (*(int (__thiscall **)(int *))(v31 + 124))(a2) ); /*0x7b08b9*/
      v25 = v116; /*0x7b08bb*/
    }
    (*(void (__thiscall **)(int *))(*a2 + 96))(a2); /*0x7b08c6*/
    (*(void (__thiscall **)(int *, char *))(*a2 + 124))(a2, v25); /*0x7b08ce*/
    v32 = EncodeScreenshotRLE(v42); /*0x7b08de*/
    (*(void (__thiscall **)(int *))(*a2 + 124))(a2); /*0x7b08e6*/
    v33 = EncodeScreenshotRLE(&v25[v32]) + v32; /*0x7b08f6*/
    (*(void (__thiscall **)(int *))(*a2 + 124))(a2); /*0x7b08fe*/
    v42 = EncodeScreenshotRLE(&v25[v33]) + v33; /*0x7b0911*/
    (*(void (__thiscall **)(int *, char *))(*a1 + 48))(a1, v25); /*0x7b0915*/
    if ( ++v50 >= v58 + 1 ) /*0x7b092e*/
      goto LABEL_11; /*0x7b092e*/
  }
}



// ==== 0x007B0B00  EncodeScreenshotRLE  this=-  sig=csp ====
int __fastcall Screenshot_EncodeRLE(int a1, char *a2, int a3)
{
  int result; // eax
  char v5; // dl
  char v6; // bl
  int v7; // ebp
  char v8; // cl
  int v9; // eax
  int v10; // eax

  result = 0; /*0x7b0b09*/
  v5 = 1; /*0x7b0b0e*/
  v6 = *a2; /*0x7b0b10*/
  if ( a1 <= 1 ) /*0x7b0b12*/
  {
LABEL_15:
    if ( (v6 & 0xC0) != 0xC0 ) /*0x7b0b82*/
    {
LABEL_17:
      *(_BYTE *)(result + a3) = v6; /*0x7b0b8b*/
      return ++result; /*0x7b0b8e*/
    }
LABEL_16:
    *(_BYTE *)(result + a3) = v5 | 0xC0; /*0x7b0b84*/
    ++result; /*0x7b0b8a*/
    goto LABEL_17; /*0x7b0b8a*/
  }
  v7 = a1 - 1; /*0x7b0b15*/
  do /*0x7b0b6e*/
  {
    v8 = *++a2; /*0x7b0b18*/
    if ( v8 == v6 ) /*0x7b0b22*/
    {
      if ( ++v5 == 47 ) /*0x7b0b29*/
      {
        *(_BYTE *)(result + a3) = -17; /*0x7b0b31*/
        v9 = result + 1; /*0x7b0b34*/
        *(_BYTE *)(v9 + a3) = v8; /*0x7b0b35*/
        result = v9 + 1; /*0x7b0b38*/
        v5 = 0; /*0x7b0b39*/
      }
    }
    else
    {
      if ( v5 ) /*0x7b0b3f*/
      {
        if ( v5 != 1 || (v6 & 0xC0) == 0xC0 ) /*0x7b0b4e*/
        {
          *(_BYTE *)(result + a3) = v5 | 0xC0; /*0x7b0b61*/
          v10 = result + 1; /*0x7b0b64*/
          *(_BYTE *)(v10 + a3) = v6; /*0x7b0b65*/
          result = v10 + 1; /*0x7b0b68*/
        }
        else
        {
          *(_BYTE *)(result + a3) = v6; /*0x7b0b54*/
          ++result; /*0x7b0b57*/
        }
      }
      v6 = v8; /*0x7b0b69*/
      v5 = 1; /*0x7b0b6b*/
    }
    --v7; /*0x7b0b6d*/
  }
  while ( v7 ); /*0x7b0b6e*/
  if ( v5 ) /*0x7b0b73*/
  {
    if ( v5 != 1 ) /*0x7b0b78*/
      goto LABEL_16; /*0x7b0b78*/
    goto LABEL_15; /*0x7b0b78*/
  }
  return result; /*0x7b0b8f*/
}



// ==== 0x007B0BA0  sub_7B0BA0  this=-  sig=ida-proto ====
void sub_7B0BA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7b0bac*/
  dbl_B77FC0 = Math::Sqrt(v0 + v0); /*0x7b0bbe*/
}



// ==== 0x007B0BD0  sub_7B0BD0  this=-  sig=ida-proto ====
void sub_7B0BD0()
{
  dbl_B78010 = dbl_B77FC0 / 60.0; /*0x7b0bdc*/
}



// ==== 0x007B0BF0  sub_7B0BF0  this=-  sig=ida-proto ====
void sub_7B0BF0()
{
  dbl_B77FF8 = 1.0 / dbl_B78010; /*0x7b0bfc*/
}



// ==== 0x007B0C10  sub_7B0C10  this=-  sig=ida-proto ====
void sub_7B0C10()
{
  dbl_B77FF0 = 0.0174532925199433 * 45.0; /*0x7b0c1c*/
}



// ==== 0x007B0C30  sub_7B0C30  this=-  sig=ida-proto ====
void sub_7B0C30()
{
  dbl_B77FC8 = 0.0174532925199433 * 60.0; /*0x7b0c3c*/
}



// ==== 0x007B0C50  sub_7B0C50  this=-  sig=ida-proto ====
void sub_7B0C50()
{
  dbl_B77FB0 = 0.0174532925199433 * 90.0; /*0x7b0c5c*/
}



// ==== 0x007B0C70  sub_7B0C70  this=-  sig=ida-proto ====
__int64 sub_7B0C70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B77FB0 - dbl_B77FC8); /*0x7b0c82*/
  result = Math::RoundToInt(v0 * dbl_B77FC0 * 0.5); /*0x7b0c96*/
  dword_B78018 = result; /*0x7b0c9b*/
  return result; /*0x7b0ca0*/
}



// ==== 0x007B0CB0  sub_7B0CB0  this=-  sig=ida-proto ====
void sub_7B0CB0()
{
  dbl_B77FD0 = Math::ArcTan((double)dword_B78018 * 0.00390625); /*0x7b0cc7*/
}



// ==== 0x007B0CE0  sub_7B0CE0  this=-  sig=ida-proto ====
void sub_7B0CE0()
{
  dbl_B77FE8 = Math::ArcTan((double)(2 * dword_B78018) / dbl_B77FC0); /*0x7b0d02*/
}



// ==== 0x007B0D10  sub_7B0D10  this=-  sig=ida-proto ====
__int64 sub_7B0D10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B78018) + 0.5); /*0x7b0d2b*/
  dword_B7800C = result; /*0x7b0d30*/
  return result; /*0x7b0d36*/
}



// ==== 0x007B0D40  sub_7B0D40  this=-  sig=ida-proto ====
int sub_7B0D40()
{
  word_B77FB8 = 0; /*0x7b0d42*/
  word_B77FBA = 0; /*0x7b0d48*/
  return 0; /*0x7b0d4e*/
}



// ==== 0x007B0D50  sub_7B0D50  this=-  sig=ida-proto ====
int sub_7B0D50()
{
  dword_B77FD8 = 0; /*0x7b0d52*/
  dword_B77FDC = 0; /*0x7b0d57*/
  dword_B77FE0 = 0; /*0x7b0d5c*/
  return 0; /*0x7b0d61*/
}



// ==== 0x007B0D70  sub_7B0D70  this=-  sig=ida-proto ====
int sub_7B0D70()
{
  dword_B78008 = 0; /*0x7b0d75*/
  dword_B78000 = 128; /*0x7b0d7f*/
  dword_B78004 = 128; /*0x7b0d84*/
  return 128; /*0x7b0d89*/
}



// ==== 0x007B0D90  IPXInterfaceClass::Construct  this=IPXInterfaceClass  sig=csp ====
_DWORD *__thiscall IPXInterfaceClass::Construct(IPXInterfaceClass *this)
{
  IPXInterfaceClass::bindSocket((char *)this); /*0x7b0d93*/
  this->Socket = (int)&IPXInterfaceClass::`vftable'; /*0x7b0da4*/
  *((_DWORD *)this + 64703) = -1; /*0x7b0dad*/
  *((_DWORD *)this + 64704) = -1; /*0x7b0db3*/
  *((_WORD *)this + 129410) = -1; /*0x7b0db8*/
  *(_DWORD *)((char *)this + 258822) = -1; /*0x7b0dc2*/
  *((_WORD *)this + 129413) = -1; /*0x7b0dc8*/
  return &this->Socket; /*0x7b0dce*/
}



// ==== 0x007B0DD0  IPXInterfaceClass::initSocket  this=IPXInterfaceClass  sig=csp ====
int __thiscall IPXInterfaceClass::initSocket(IPXInterfaceClass *this, int a2, int a3)
{
  SOCKET v4; // esi
  int v6; // eax
  __int16 v7; // dx
  char optval[4]; // [esp+Ch] [ebp-34h] BYREF
  int optlen; // [esp+10h] [ebp-30h] BYREF
  int v10; // [esp+14h] [ebp-2Ch] BYREF
  struct sockaddr name; // [esp+18h] [ebp-28h] BYREF
  char v12[24]; // [esp+28h] [ebp-18h] BYREF

  v4 = socket(6, 2, 1000); /*0x7b0de6*/
  if ( v4 == -1 ) /*0x7b0deb*/
    return 0; /*0x7b0df5*/
  memset(name.sa_data, 0, 12); /*0x7b0dfe*/
  name.sa_family = 6; /*0x7b0e13*/
  if ( bind(v4, &name, 14) == -1 ) /*0x7b0e22*/
  {
    closesocket(v4); /*0x7b0e25*/
    return 0; /*0x7b0e32*/
  }
  *(_DWORD *)optval = 1; /*0x7b0e44*/
  optlen = 4; /*0x7b0e4e*/
  if ( stru_887598.onBridge && stru_887598.AbstractClass == (void *)4 && !stru_887598.? ) /*0x7b0e63*/
  {
    Debug::Log(); /*0x7b0eae*/
  }
  else if ( getsockopt(v4, 1000, 16397, optval, &optlen) ) /*0x7b0e7a*/
  {
    WSAGetLastError(); /*0x7b0e94*/
    Debug::Log(); /*0x7b0e9f*/
  }
  else if ( a2 >= *(int *)optval ) /*0x7b0e87*/
  {
    return 0; /*0x7b0e91*/
  }
  memset(v12, 0, sizeof(v12)); /*0x7b0ec2*/
  *(_DWORD *)v12 = a2; /*0x7b0ed9*/
  v10 = 24; /*0x7b0edd*/
  if ( getsockopt(v4, 1000, 16391, v12, &v10) == -1 ) /*0x7b0eee*/
  {
    WSAGetLastError(); /*0x7b0ef0*/
    Debug::Log(); /*0x7b0efc*/
    closesocket(v4); /*0x7b0f05*/
    return 0; /*0x7b0f0c*/
  }
  else
  {
    v6 = *(_DWORD *)&v12[4]; /*0x7b0f19*/
    v7 = *(_WORD *)&v12[12]; /*0x7b0f1d*/
    *(_DWORD *)(a3 + 2) = *(_DWORD *)&v12[4]; /*0x7b0f23*/
    *((_DWORD *)this + 64703) = v6; /*0x7b0f26*/
    *(_DWORD *)(a3 + 6) = *(_DWORD *)&v12[8]; /*0x7b0f33*/
    *(_WORD *)(a3 + 10) = v7; /*0x7b0f35*/
    closesocket(v4); /*0x7b0f39*/
    return 1; /*0x7b0f40*/
  }
}



// ==== 0x007B0F50  NetworkOptions::ApplySettings  this=AbstractClass  sig=csp ====
int __thiscall sub_7B0F50(int this, int a2, char *a3, signed int a4)
{
  int v5; // eax
  int v6; // ebx
  _BYTE v7[6]; // [esp+8h] [ebp-110h] BYREF
  unsigned __int8 v8; // [esp+Eh] [ebp-10Ah]
  unsigned __int8 v9; // [esp+Fh] [ebp-109h]
  unsigned __int8 v10; // [esp+10h] [ebp-108h]
  unsigned __int8 v11; // [esp+11h] [ebp-107h]
  unsigned __int8 v12; // [esp+12h] [ebp-106h]
  int v13; // [esp+13h] [ebp-105h]
  char Buffer[256]; // [esp+18h] [ebp-100h] BYREF

  if ( !*(_BYTE *)(this + 258152) ) /*0x7b0f50*/
    return 0; /*0x7b0f6c*/
  v5 = IPXInterfaceClass::initSocket((_DWORD *)this, a2, (int)v7); /*0x7b0f7c*/
  v6 = v5; /*0x7b0f81*/
  if ( v5 )
  {
    if ( v5 == 2 )
      sprintf(Buffer, "?? ?? ?? ?? : %02x %02x %02x %02x %02x %02x", v8, v9, v10, v11, v12, (unsigned __int8)v13);
    else
      sprintf(
        Buffer,
        "%02x %02x %02x %02x : %02x %02x %02x %02x %02x %02x",
        v7[2],
        v7[3],
        v7[4],
        v7[5],
        v8,
        v9,
        v10,
        v11,
        v12,
        (unsigned __int8)v13);
    if ( (int)strlen(Buffer) >= a4 ) /*0x7b1078*/
      return 0; /*0x7b1084*/
    strcpy(a3, Buffer); /*0x7b10a5*/
  }
  return v6; /*0x7b0f62*/
}



// ==== 0x007B10C0  IPXInterfaceClass::Bind  this=IPXInterfaceClass  sig=csp ====
char __thiscall IPXInterfaceClass::Bind(IPXInterfaceClass *this, int hostshort)
{
  char result; // al
  int v4; // eax
  __int16 v5; // dx
  char v6[4]; // [esp+4h] [ebp-18h] BYREF
  char optval[4]; // [esp+8h] [ebp-14h] BYREF
  struct sockaddr name; // [esp+Ch] [ebp-10h] BYREF

  if ( *((_BYTE *)this + 258152) ) /*0x7b10c6*/
  {
    if ( *((_DWORD *)this + 64539) != -1 ) /*0x7b10e7*/
      return 0; /*0x7b10ef*/
  }
  else
  {
    result = WinsockInterface::Init((WinsockInterface *)this); /*0x7b10d0*/
    if ( !result ) /*0x7b10d7*/
      return result; /*0x7b10d7*/
  }
  *((_DWORD *)this + 64707) = hostshort; /*0x7b10fd*/
  Debug::Log(); /*0x7b1103*/
  *(_DWORD *)&name.sa_data[4] = -1; /*0x7b110e*/
  name.sa_family = 6; /*0x7b1112*/
  *(_DWORD *)name.sa_data = 0; /*0x7b111a*/
  *(_WORD *)&name.sa_data[8] = -1; /*0x7b1122*/
  *(_WORD *)&name.sa_data[10] = htons(hostshort); /*0x7b1131*/
  Debug::Log(); /*0x7b1136*/
  v4 = socket(6, 2, 1000); /*0x7b1147*/
  *((_DWORD *)this + 64539) = v4; /*0x7b114f*/
  if ( v4 == -1 ) /*0x7b1156*/
  {
    WSAGetLastError(); /*0x7b1158*/
    Debug::Log(); /*0x7b1163*/
    closesocket(*((_DWORD *)this + 64539)); /*0x7b1172*/
    return 0; /*0x7b1177*/
  }
  else
  {
    Debug::Log(); /*0x7b1185*/
    if ( IPXInterfaceClass::initSocket(this, *((_DWORD *)this + 64702), (int)&name) ) /*0x7b119b*/
    {
      Debug::Log(); /*0x7b1236*/
      v5 = *(_WORD *)&name.sa_data[8]; /*0x7b123f*/
      *(_DWORD *)((char *)this + 258822) = *(_DWORD *)&name.sa_data[4]; /*0x7b124f*/
      *((_WORD *)this + 129413) = v5; /*0x7b1251*/
      Debug::Log(); /*0x7b1255*/
      if ( bind(*((_DWORD *)this + 64539), &name, 16) == -1 ) /*0x7b1273*/
      {
        WSAGetLastError(); /*0x7b1275*/
        Debug::Log(); /*0x7b1280*/
        closesocket(*((_DWORD *)this + 64539)); /*0x7b128f*/
        return 0; /*0x7b1294*/
      }
      else
      {
        Debug::Log(); /*0x7b12a2*/
        *(_DWORD *)optval = 1; /*0x7b12ac*/
        *(_DWORD *)v6 = 4; /*0x7b12b4*/
        Debug::Log(); /*0x7b12bc*/
        if ( setsockopt(*((_DWORD *)this + 64539), 0xFFFF, 32, optval, 4) == -1 ) /*0x7b12e1*/
          WSAGetLastError(); /*0x7b12e3*/
        Debug::Log(); /*0x7b12ee*/
        Debug::Log(); /*0x7b130a*/
        if ( setsockopt(*((_DWORD *)this + 64539), 1000, 0x4000, v6, 4) == -1 ) /*0x7b1332*/
          WSAGetLastError(); /*0x7b1334*/
        Debug::Log(); /*0x7b133f*/
        Debug::Log(); /*0x7b135b*/
        if ( setsockopt(*((_DWORD *)this + 64539), 1000, 16385, v6, 4) == -1 ) /*0x7b1383*/
          WSAGetLastError(); /*0x7b1385*/
        Debug::Log(); /*0x7b1390*/
        Socket::ConfigureBuffers((WinsockInterfaceClass *)this, 0xFFFFFFFF); /*0x7b13ab*/
        Debug::Log(); /*0x7b13b5*/
        return 1; /*0x7b13bd*/
      }
    }
    else
    {
      Debug::Log(); /*0x7b11a9*/
      closesocket(*((_DWORD *)this + 64539)); /*0x7b11b8*/
      return 0; /*0x7b11bd*/
    }
  }
}



// ==== 0x007B13D0  IPXInterfaceClass::SendPacket  this=IPXInterfaceClass  sig=csp ====
int __thiscall IPXInterfaceClass::SendPacket(IPXInterfaceClass *this, int a2, int a3, int a4, unsigned int fromlen)
{
  Network *v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  SOCKET v11; // eax
  int v12; // eax
  int v13; // ecx
  _WORD *v14; // edi
  int *v15; // esi
  bool v16; // zf
  int v17; // esi
  NetworkID *v18; // ebx
  int v19; // eax
  int v20; // ecx
  int *p_LocalNetwork; // ebp
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  u_short v25; // [esp-4h] [ebp-30h]
  int v26; // [esp+10h] [ebp-1Ch]
  int v27; // [esp+14h] [ebp-18h] BYREF
  __int16 v28; // [esp+18h] [ebp-14h]
  struct sockaddr to; // [esp+1Ch] [ebp-10h] BYREF

  if ( a3 != 1139 ) /*0x7b13e2*/
    return 1; /*0x7b13f0*/
  if ( (unsigned __int16)fromlen != 1 ) /*0x7b13ff*/
  {
    if ( (unsigned __int16)fromlen == 2 ) /*0x7b1406*/
    {
      if ( HIWORD(fromlen) ) /*0x7b140c*/
      {
LABEL_6:
        (*(void (__thiscall **)(IPXInterfaceClass *, _DWORD))(this->Socket + 36))(this, *((_DWORD *)this + 64539)); /*0x7b1411*/
        return 0; /*0x7b1429*/
      }
      if ( this->LocalNode ) /*0x7b142c*/
      {
        while ( 1 ) /*0x7b1446*/
        {
          v25 = *((_WORD *)this + 129414); /*0x7b1446*/
          v7 = (Network *)**((_DWORD **)this + 9); /*0x7b1447*/
          to.sa_family = 6; /*0x7b1449*/
          *(_WORD *)&to.sa_data[10] = htons(v25); /*0x7b1453*/
          if ( v7->__pad_14[0] ) /*0x7b1458*/
          {
            *(_DWORD *)to.sa_data = *((_DWORD *)this + 64703); /*0x7b146b*/
            *(_DWORD *)&to.sa_data[4] = *((_DWORD *)this + 64704); /*0x7b1471*/
            *(_WORD *)&to.sa_data[8] = *((_WORD *)this + 129410); /*0x7b1479*/
          }
          else
          {
            Network::CopyAddress(v7, &a3, (int)&v27); /*0x7b148c*/
            *(_DWORD *)to.sa_data = a3; /*0x7b149e*/
            *(_DWORD *)&to.sa_data[4] = v27; /*0x7b14a2*/
            *(_WORD *)&to.sa_data[8] = v28; /*0x7b14a6*/
          }
          if ( sendto(*((_DWORD *)this + 64539), &v7->__pad_14[8], (int)v7->Network_field_0x10 + 4, 0, &to, 14) == -1 /*0x7b14da*/
            && WSAGetLastError() != 10035 )
          {
            break; /*0x7b14da*/
          }
          v8 = this->LocalNode; /*0x7b14e0*/
          if ( v8 > 0 ) /*0x7b14e5*/
          {
            v9 = v8 - 1; /*0x7b14e7*/
            v10 = 0; /*0x7b14ea*/
            for ( this->LocalNode = v9; /*0x7b14f1*/
                  v10 < this->LocalNode;
                  *(_DWORD *)(*((_DWORD *)this + 9) + 4 * v10 - 4) = *(_DWORD *)(*((_DWORD *)this + 9) + 4 * v10) )
            {
              ++v10; /*0x7b14f6*/
            }
          }
          if ( v7->__pad_14[2] ) /*0x7b1505*/
          {
            __3_YAXPAX_Z(v7); /*0x7b150d*/
          }
          else
          {
            v7->__pad_14[1] = 0; /*0x7b1517*/
            --*((_DWORD *)this + 64536); /*0x7b1522*/
          }
          if ( !this->LocalNode ) /*0x7b1528*/
            return 0; /*0x7b153c*/
        }
        goto LABEL_6; /*0x7b14da*/
      }
    }
    return 0; /*0x7b1431*/
  }
  if ( HIWORD(fromlen) ) /*0x7b153f*/
  {
    (*(void (__thiscall **)(IPXInterfaceClass *, _DWORD))(this->Socket + 36))(this, *((_DWORD *)this + 64539)); /*0x7b1550*/
    return 0; /*0x7b155c*/
  }
  v11 = *((_DWORD *)this + 64539); /*0x7b1577*/
  fromlen = 14; /*0x7b157d*/
  v12 = recvfrom(v11, (char *)this + 258164, 640, 0, &to, (int *)&fromlen); /*0x7b1586*/
  v26 = v12; /*0x7b158e*/
  if ( v12 == -1 ) /*0x7b1592*/
  {
    if ( WSAGetLastError() != 10035 ) /*0x7b159e*/
    {
      (*(void (__thiscall **)(IPXInterfaceClass *, _DWORD))(this->Socket + 36))(this, *((_DWORD *)this + 64539)); /*0x7b15b0*/
      return 0; /*0x7b15bc*/
    }
    return 0; /*0x7b159e*/
  }
  if ( !v12 ) /*0x7b15c1*/
    return 0; /*0x7b15c1*/
  v27 = *(_DWORD *)&to.sa_data[4]; /*0x7b15d4*/
  a3 = *(_DWORD *)to.sa_data; /*0x7b15d8*/
  v28 = *(_WORD *)&to.sa_data[8]; /*0x7b15e6*/
  if ( *(_DWORD *)to.sa_data == *((_DWORD *)this + 64703) ) /*0x7b15ef*/
  {
    v13 = 3; /*0x7b15f1*/
    v14 = (_WORD *)((char *)this + 258822); /*0x7b15f6*/
    v15 = &v27; /*0x7b15fc*/
    v16 = 1; /*0x7b1600*/
    do /*0x7b1602*/
    {
      if ( !v13 ) /*0x7b1602*/
        break; /*0x7b1602*/
      v16 = *(_WORD *)v15 == *v14; /*0x7b1602*/
      v15 = (int *)((char *)v15 + 2); /*0x7b1602*/
      ++v14; /*0x7b1602*/
      --v13; /*0x7b1602*/
    }
    while ( v16 ); /*0x7b1602*/
    if ( v16 ) /*0x7b1605*/
      return 0; /*0x7b1605*/
  }
  v17 = Network_Process_7B2730(); /*0x7b1610*/
  if ( v17 > 0 && Random::Range(&Randomizer_Global, 0, 99) <= v17 ) /*0x7b1626*/
    return 0; /*0x7b1717*/
  v18 = (NetworkID *)IPXInterfaceClass::processPacket(this); /*0x7b1633*/
  *(_DWORD *)v18[2].__pad_0 = v26 - 4; /*0x7b1646*/
  v18[3].NetworkID_field_0x04 = *((_DWORD *)this + 64541); /*0x7b1651*/
  qmemcpy(&v18[4], (char *)this + 258168, v26 - 4); /*0x7b1657*/
  if ( (*(unsigned __int8 (__thiscall **)(IPXInterfaceClass *, NetworkID *))(this->Socket + 88))(this, v18) ) /*0x7b1665*/
  {
    NetworkID::Assign(v18, &a3, (int)&v27, 0); /*0x7b16d0*/
    v19 = *(_DWORD *)&this->LocalNode[4]; /*0x7b16d5*/
    v20 = this->BoundSocket; /*0x7b16d8*/
    p_LocalNetwork = &this->LocalNetwork; /*0x7b16db*/
    if ( v20 < v19 /*0x7b16fe*/
      || (*((_BYTE *)p_LocalNetwork + 13) || !v19)
      && (v22 = p_LocalNetwork[5], v22 > 0)
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*p_LocalNetwork + 8))(p_LocalNetwork, v19 + v22, 0) )
    {
      v23 = p_LocalNetwork[4]; /*0x7b1705*/
      v24 = p_LocalNetwork[1]; /*0x7b1708*/
      p_LocalNetwork[4] = v23 + 1; /*0x7b170e*/
      *(_DWORD *)(v24 + 4 * v23) = v18; /*0x7b1711*/
    }
    return 0; /*0x7b1711*/
  }
  Debug::Log(); /*0x7b1671*/
  if ( !byte_B7801C ) /*0x7b1680*/
    byte_B7801C = 1; /*0x7b1682*/
  if ( BYTE2(v18[2].NetworkID_field_0x04) ) /*0x7b1689*/
  {
    __3_YAXPAX_Z(v18); /*0x7b1691*/
  }
  else
  {
    BYTE1(v18[2].NetworkID_field_0x04) = 0; /*0x7b16a5*/
    --*((_DWORD *)this + 64536); /*0x7b16b1*/
  }
  return 0; /*0x7b13e4*/
}



// ==== 0x007B1720  WinsockInterfaceClass::StubReturnFalse  this=WinsockInterfaceClass  sig=csp ====
void __stdcall IPXInterfaceClass::StubReturnFalse(WinsockInterfaceClass *this, int a2)
{
  ; /*0x7b1720*/
}



// ==== 0x007B1730  WinsockInterfaceClass::GetQueueSize  this=WinsockInterfaceClass  sig=csp ====
void IPXInterfaceClass::GetQueueSize(WinsockInterfaceClass *this)
{
  ; /*0x7b1730*/
}



// ==== 0x007B1740  WinsockInterfaceClass::COMStub_Return0  this=WinsockInterfaceClass  sig=csp ====
int IPXInterfaceClass::COMStub_Return0(WinsockInterfaceClass *this)
{
  return 0; /*0x7b1742*/
}



// ==== 0x007B1750  WinsockInterfaceClass::Send  this=WinsockInterfaceClass  sig=csp ====
int __stdcall IPXInterfaceClass::Send(WinsockInterfaceClass *this)
{
  return 0; /*0x7b1752*/
}



// ==== 0x007B1760  WinsockInterfaceClass::GetLocalAddress  this=WinsockInterfaceClass  sig=csp ====
int __thiscall IPXInterfaceClass::GetLocalAddress(WinsockInterfaceClass *this, int a2)
{
  *((_DWORD *)this + 64702) = a2; /*0x7b1764*/
  return a2; /*0x7b176a*/
}



// ==== 0x007B1770  IPXInterfaceClass::COMStub_Return1  this=IPXInterfaceClass  sig=csp ====
int IPXInterfaceClass::COMStub_Return1(IPXInterfaceClass *this)
{
  return 1; /*0x7b1775*/
}



// ==== 0x007B1780  IPXInterfaceClass::COMStub_Ret1139  this=IPXInterfaceClass  sig=csp ====
int __stdcall IPXInterfaceClass::COMStub_Ret1139(IPXInterfaceClass *this)
{
  return 1139; /*0x7b1785*/
}



// ==== 0x007B1790  IPXInterfaceClass::QueryInterface  this=IPXInterfaceClass  sig=csp ====
void *__thiscall IPXInterfaceClass::QueryInterface(IPXInterfaceClass *this, char a2)
{
  WinsockInterfaceClass::WinsockInterfaceClass((int)this); /*0x7b1793*/
  if ( (a2 & 1) != 0 ) /*0x7b179d*/
    __3_YAXPAX_Z(this); /*0x7b17a0*/
  return this; /*0x7b17aa*/
}



// ==== 0x007B17B0  sub_7B17B0  this=-  sig=ida-proto ====
int sub_7B17B0()
{
  dword_B78028 = 0; /*0x7b17b2*/
  dword_B7802C = 0; /*0x7b17b7*/
  dword_B78030 = 0; /*0x7b17bc*/
  dword_B78034 = 0; /*0x7b17c1*/
  return 0; /*0x7b17c6*/
}



// ==== 0x007B17D0  sub_7B17D0  this=-  sig=ida-proto ====
void sub_7B17D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7b17dc*/
  dbl_B78040 = Math::Sqrt(v0 + v0); /*0x7b17ee*/
}



// ==== 0x007B1800  sub_7B1800  this=-  sig=ida-proto ====
void sub_7B1800()
{
  dbl_B78090 = dbl_B78040 / 60.0; /*0x7b180c*/
}



// ==== 0x007B1820  sub_7B1820  this=-  sig=ida-proto ====
void sub_7B1820()
{
  dbl_B78078 = 1.0 / dbl_B78090; /*0x7b182c*/
}



// ==== 0x007B1840  sub_7B1840  this=-  sig=ida-proto ====
void sub_7B1840()
{
  dbl_B78070 = 0.0174532925199433 * 45.0; /*0x7b184c*/
}



// ==== 0x007B1860  sub_7B1860  this=-  sig=ida-proto ====
void sub_7B1860()
{
  dbl_B78048 = 0.0174532925199433 * 60.0; /*0x7b186c*/
}



// ==== 0x007B1880  sub_7B1880  this=-  sig=ida-proto ====
void sub_7B1880()
{
  dbl_B78020 = 0.0174532925199433 * 90.0; /*0x7b188c*/
}



// ==== 0x007B18A0  sub_7B18A0  this=-  sig=ida-proto ====
__int64 sub_7B18A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B78020 - dbl_B78048); /*0x7b18b2*/
  result = Math::RoundToInt(v0 * dbl_B78040 * 0.5); /*0x7b18c6*/
  dword_B78098 = result; /*0x7b18cb*/
  return result; /*0x7b18d0*/
}



// ==== 0x007B18E0  sub_7B18E0  this=-  sig=ida-proto ====
void sub_7B18E0()
{
  dbl_B78050 = Math::ArcTan((double)dword_B78098 * 0.00390625); /*0x7b18f7*/
}



// ==== 0x007B1910  sub_7B1910  this=-  sig=ida-proto ====
void sub_7B1910()
{
  dbl_B78068 = Math::ArcTan((double)(2 * dword_B78098) / dbl_B78040); /*0x7b1932*/
}



// ==== 0x007B1940  sub_7B1940  this=-  sig=ida-proto ====
__int64 sub_7B1940()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B78098) + 0.5); /*0x7b195b*/
  dword_B7808C = result; /*0x7b1960*/
  return result; /*0x7b1966*/
}



// ==== 0x007B1970  sub_7B1970  this=-  sig=ida-proto ====
int sub_7B1970()
{
  word_B78038 = 0; /*0x7b1972*/
  word_B7803A = 0; /*0x7b1978*/
  return 0; /*0x7b197e*/
}



// ==== 0x007B1980  sub_7B1980  this=-  sig=ida-proto ====
int sub_7B1980()
{
  dword_B78058 = 0; /*0x7b1982*/
  dword_B7805C = 0; /*0x7b1987*/
  dword_B78060 = 0; /*0x7b198c*/
  return 0; /*0x7b1991*/
}



// ==== 0x007B19A0  sub_7B19A0  this=-  sig=ida-proto ====
int sub_7B19A0()
{
  dword_B78088 = 0; /*0x7b19a5*/
  dword_B78080 = 128; /*0x7b19af*/
  dword_B78084 = 128; /*0x7b19b4*/
  return 128; /*0x7b19b9*/
}



// ==== 0x007B19C0  IPXInterfaceClass::bindSocket  this=WinsockInterfaceClass  sig=csp ====
char *__thiscall sub_7B19C0(char *this)
{
  _BYTE *v2; // eax
  int v3; // edx

  *((_DWORD *)this + 3) = 0; /*0x7b19d2*/
  this->u32_4 = 0; /*0x7b19d5*/
  *(this + 20) = 1; /*0x7b19d8*/
  *(this + 21) = 0; /*0x7b19db*/
  this->u32_8 = &DynamicVectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b19de*/
  *((_DWORD *)this + 7) = 10; /*0x7b19e1*/
  this->BoundPort = 0; /*0x7b19e4*/
  *((_DWORD *)this + 9) = 0; /*0x7b19e7*/
  *((_DWORD *)this + 10) = 0; /*0x7b19ea*/
  *(this + 44) = 1; /*0x7b19ed*/
  *(this + 45) = 0; /*0x7b19f0*/
  this->u32_8 = &DynamicVectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b19f3*/
  *((_DWORD *)this + 13) = 10; /*0x7b19f6*/
  *((_DWORD *)this + 12) = 0; /*0x7b19f9*/
  *((_DWORD *)this + 19) = 10; /*0x7b19fc*/
  *((_DWORD *)this + 15) = 0; /*0x7b1a02*/
  this->u32_4 = 0; /*0x7b1a05*/
  *(this + 68) = 1; /*0x7b1a08*/
  *(this + 69) = 0; /*0x7b1a0b*/
  *((_DWORD *)this + 14) = &DynamicVectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b1a0e*/
  *((_DWORD *)this + 18) = 0; /*0x7b1a11*/
  *((_DWORD *)this + 64539) = -1; /*0x7b1a14*/
  *((_DWORD *)this + 64540) = -1; /*0x7b1a1a*/
  *(_DWORD *)this = &WinsockInterfaceClass::`vftable'; /*0x7b1a20*/
  *(this + 258152) = 0; /*0x7b1a26*/
  v2 = this + 102; /*0x7b1a2c*/
  v3 = 128; /*0x7b1a2f*/
  do /*0x7b1a6f*/
  {
    *(v2 - 1) = 0; /*0x7b1a34*/
    *v2 = 0; /*0x7b1a37*/
    v2[86015] = 0; /*0x7b1a39*/
    v2[86016] = 0; /*0x7b1a3f*/
    v2[86017] = 0; /*0x7b1a45*/
    v2[86018] = 0; /*0x7b1a4b*/
    v2[172031] = 0; /*0x7b1a51*/
    v2[172032] = 0; /*0x7b1a57*/
    v2[172033] = 1; /*0x7b1a5d*/
    v2[172034] = 0; /*0x7b1a63*/
    v2 += 672; /*0x7b1a69*/
    --v3; /*0x7b1a6e*/
  }
  while ( v3 ); /*0x7b1a6f*/
  *((_DWORD *)this + 64535) = 0; /*0x7b1a76*/
  *((_DWORD *)this + 64536) = 0; /*0x7b1a7c*/
  *((_DWORD *)this + 64537) = 0; /*0x7b1a82*/
  *((_DWORD *)this + 64532) = 0; /*0x7b1a88*/
  *((_DWORD *)this + 64533) = 0; /*0x7b1a8e*/
  this->u32_4 = 576; /*0x7b1a94*/
  Debug::Log(); /*0x7b1a9b*/
  return this; /*0x7b1aa5*/
}



// ==== 0x007B1AB0  WinsockInterfaceClass::WinsockInterfaceClass  this=WinsockInterfaceClass  sig=csp ====
void __thiscall WinsockInterfaceClass_Destructor(int this)
{
  char v2; // al
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax

  v2 = *(_BYTE *)(this + 258152); /*0x7b1ab6*/
  *(_DWORD *)this = &WinsockInterfaceClass::`vftable'; /*0x7b1abc*/
  if ( v2 ) /*0x7b1ac4*/
  {
    NetworkClass::UnregisterAsync((SOCKET *)this); /*0x7b1ac6*/
    (*(void (__thiscall **)(int))(this->u32_4)(this); /*0x7b1ad0*/
    WSACleanup(); /*0x7b1ad3*/
    *(_BYTE *)(this + 258152) = 0; /*0x7b1ad8*/
  }
  v3 = *(void **)(this + 60); /*0x7b1ade*/
  *(_DWORD *)(this + 56) = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b1ae1*/
  if ( v3 && *(_BYTE *)(this + 69) ) /*0x7b1aec*/
  {
    __3_YAXPAX_Z(v3); /*0x7b1af2*/
    *(_DWORD *)(this + 60) = 0; /*0x7b1afa*/
  }
  *(_BYTE *)(this + 69) = 0; /*0x7b1afd*/
  *(_DWORD *)(this + 64) = 0; /*0x7b1b00*/
  v4 = *(void **)(this + 36); /*0x7b1b03*/
  *(_DWORD *)(this + 32) = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b1b06*/
  if ( v4 && *(_BYTE *)(this + 45) ) /*0x7b1b11*/
  {
    __3_YAXPAX_Z(v4); /*0x7b1b17*/
    *(_DWORD *)(this + 36) = 0; /*0x7b1b1f*/
  }
  *(_BYTE *)(this + 45) = 0; /*0x7b1b22*/
  *(_DWORD *)(this + 40) = 0; /*0x7b1b25*/
  v5 = *(void **)(this + 12); /*0x7b1b28*/
  *(_DWORD *)(this + 8) = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b1b2b*/
  if ( v5 && *(_BYTE *)(this + 21) ) /*0x7b1b36*/
  {
    __3_YAXPAX_Z(v5); /*0x7b1b3c*/
    *(_DWORD *)(this + 12) = 0; /*0x7b1b44*/
  }
  *(_BYTE *)(this + 21) = 0; /*0x7b1b47*/
  *(_DWORD *)(this + 16) = 0; /*0x7b1b4a*/
}



// ==== 0x007B1B50  UDPInterfaceClass::connect  this=UDPInterfaceClass  sig=csp ====
char __thiscall UDPInterfaceClass::connect(UDPInterfaceClass *this)
{
  char result; // al

  result = *((_BYTE *)this + 258152); /*0x7b1b53*/
  if ( result ) /*0x7b1b5b*/
  {
    (*(void (__thiscall **)(UDPInterfaceClass *))(this->Socket + 32))(this); /*0x7b1b5f*/
    (*(void (__thiscall **)(UDPInterfaceClass *))(this->Socket + 4))(this); /*0x7b1b66*/
    result = WSACleanup(); /*0x7b1b69*/
    *((_BYTE *)this + 258152) = 0; /*0x7b1b6e*/
  }
  return result; /*0x7b1b75*/
}



// ==== 0x007B1B80  WinsockInterfaceClass::AddRef  this=WinsockInterfaceClass  sig=csp ====
int __thiscall IPXInterfaceClass::AddRef(WinsockInterfaceClass *this)
{
  int result; // eax

  if ( *((_DWORD *)this + 64539) != -1 ) /*0x7b1b8c*/
  {
    closesocket(*((_DWORD *)this + 64539)); /*0x7b1b8f*/
    *((_DWORD *)this + 64539) = -1; /*0x7b1b94*/
  }
  result = *((_DWORD *)this + 64540); /*0x7b1b9e*/
  if ( result != -1 ) /*0x7b1ba7*/
  {
    result = closesocket(*((_DWORD *)this + 64540)); /*0x7b1baa*/
    *((_DWORD *)this + 64540) = -1; /*0x7b1baf*/
  }
  return result; /*0x7b1bb9*/
}



// ==== 0x007B1BC0  WinsockInterfaceClass::Receive  this=WinsockInterfaceClass  sig=csp ====
char __thiscall IPXInterfaceClass::Receive(WinsockInterfaceClass *this)
{
  HWND v2; // eax
  int v4; // eax
  HWND v5; // eax
  int v6; // [esp+0h] [ebp-4h]
  int v7; // [esp+0h] [ebp-4h]

  v2 = (HWND)(*(int (__thiscall **)(WinsockInterfaceClass *, int))(this->Socket + 56))(this, -1); /*0x7b1bc9*/
  if ( WSAAsyncSelect(*((AnimClass **)this + 64539), (SOCKET)g_hWnd, v2, 3u, v6) != (AnimClass *)-1 ) /*0x7b1be3*/
  {
    v4 = *((_DWORD *)this + 64540); /*0x7b1bfc*/
    if ( v4 == -1 ) /*0x7b1c05*/
      return 1; /*0x7b1c05*/
    v5 = (HWND)(*(int (__thiscall **)(WinsockInterfaceClass *, int))(this->Socket + 56))(this, v4); /*0x7b1c0e*/
    if ( WSAAsyncSelect(*((AnimClass **)this + 64540), (SOCKET)g_hWnd, v5, 3u, v7) != (AnimClass *)-1 ) /*0x7b1c27*/
      return 1; /*0x7b1c40*/
  }
  WSAGetLastError(); /*0x7b1be5*/
  Debug::Log(); /*0x7b1bf0*/
  return 0; /*0x7b1bfa*/
}



// ==== 0x007B1C50  WinsockInterfaceClass::UnregisterAsync  this=WinsockInterfaceClass  sig=csp ====
SOCKET __thiscall NetworkClass_UnregisterAsync(SOCKET *this)
{
  HWND v2; // ecx
  SOCKET v3; // eax
  SOCKET result; // eax

  v2 = g_hWnd; /*0x7b1c53*/
  v3 = *(this + 64539); /*0x7b1c59*/
  if ( v3 != -1 && g_hWnd ) /*0x7b1c66*/
  {
    WSAAsyncSelect(v3, g_hWnd, 0, 0); /*0x7b1c6e*/
    v2 = g_hWnd; /*0x7b1c73*/
  }
  result = *(this + 64540); /*0x7b1c79*/
  if ( result != -1 ) /*0x7b1c83*/
  {
    if ( v2 ) /*0x7b1c87*/
      return WSAAsyncSelect(result, v2, 0, 0); /*0x7b1c8f*/
  }
  return result; /*0x7b1c7f*/
}



// ==== 0x007B1CA0  WinsockInterfaceClass::Disconnect  this=WinsockInterfaceClass  sig=csp ====
void __thiscall IPXInterfaceClass::Disconnect(WinsockInterfaceClass *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // eax

  while ( this->BoundPort ) /*0x7b1ca6*/
  {
    v2 = **((_DWORD **)this + 3); /*0x7b1cae*/
    if ( *(_BYTE *)(v2 + 22) ) /*0x7b1cb0*/
    {
      __3_YAXPAX_Z(**((void ***)this + 3)); /*0x7b1cb6*/
    }
    else
    {
      *(_BYTE *)(v2 + 21) = 0; /*0x7b1cc0*/
      --*((_DWORD *)this + 64535); /*0x7b1cca*/
    }
    v3 = this->BoundPort; /*0x7b1cd0*/
    if ( v3 > 0 ) /*0x7b1cd5*/
    {
      v4 = v3 - 1; /*0x7b1cd7*/
      v5 = 0; /*0x7b1cda*/
      for ( this->BoundPort = v4; /*0x7b1ce1*/
            v5 < this->BoundPort;
            *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v5 - 4) = *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v5) )
      {
        ++v5; /*0x7b1ce6*/
      }
    }
  }
  *((_DWORD *)this + 64535) = 0; /*0x7b1cfa*/
  *((_DWORD *)this + 64532) = 0; /*0x7b1d00*/
}



// ==== 0x007B1D10  WinsockInterfaceClass::Cleanup  this=WinsockInterfaceClass  sig=csp ====
void __thiscall AudioQueue::Cleanup(WinsockInterfaceClass *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax

  while ( *((_DWORD *)this + 12) ) /*0x7b1d16*/
  {
    v2 = **((_DWORD **)this + 9); /*0x7b1d1e*/
    if ( *(_BYTE *)(v2 + 22) ) /*0x7b1d20*/
    {
      __3_YAXPAX_Z(**((void ***)this + 9)); /*0x7b1d26*/
    }
    else
    {
      *(_BYTE *)(v2 + 21) = 0; /*0x7b1d30*/
      --*((_DWORD *)this + 64536); /*0x7b1d3a*/
    }
    v3 = *((_DWORD *)this + 12); /*0x7b1d40*/
    if ( v3 > 0 ) /*0x7b1d45*/
    {
      v4 = v3 - 1; /*0x7b1d47*/
      v5 = 0; /*0x7b1d4a*/
      for ( *((_DWORD *)this + 12) = v4; /*0x7b1d51*/
            v5 < *((_DWORD *)this + 12);
            *(_DWORD *)(*((_DWORD *)this + 9) + 4 * v5 - 4) = *(_DWORD *)(*((_DWORD *)this + 9) + 4 * v5) )
      {
        ++v5; /*0x7b1d56*/
      }
    }
  }
  *((_DWORD *)this + 64536) = 0; /*0x7b1d6a*/
  *((_DWORD *)this + 64533) = 0; /*0x7b1d70*/
  while ( *((_DWORD *)this + 18) ) /*0x7b1d76*/
  {
    v6 = **((_DWORD **)this + 15); /*0x7b1d7e*/
    if ( *(_BYTE *)(v6 + 22) ) /*0x7b1d80*/
    {
      __3_YAXPAX_Z(**((void ***)this + 15)); /*0x7b1d86*/
    }
    else
    {
      *(_BYTE *)(v6 + 21) = 0; /*0x7b1d90*/
      --*((_DWORD *)this + 64537); /*0x7b1d9a*/
    }
    v7 = *((_DWORD *)this + 18); /*0x7b1da0*/
    if ( v7 > 0 ) /*0x7b1da5*/
    {
      v8 = v7 - 1; /*0x7b1da7*/
      v9 = 0; /*0x7b1daa*/
      for ( *((_DWORD *)this + 18) = v8; /*0x7b1db1*/
            v9 < *((_DWORD *)this + 18);
            *(_DWORD *)(*((_DWORD *)this + 15) + 4 * v9 - 4) = *(_DWORD *)(*((_DWORD *)this + 15) + 4 * v9) )
      {
        ++v9; /*0x7b1db6*/
      }
    }
  }
  *((_DWORD *)this + 64537) = 0; /*0x7b1dca*/
  *((_DWORD *)this + 64534) = 0; /*0x7b1dd0*/
}



// ==== 0x007B1DE0  WinsockInterface::Init  this=WinsockInterface  sig=csp ====
int __thiscall WinsockInterface::Init(WinsockInterface *this)
{
  int result; // eax
  int v3; // eax
  int v4; // edx
  struct WSAData *v5; // esi
  INT v6; // eax
  int v7; // ebp
  int *v8; // esi
  INT v9; // ebx
  int v10; // eax
  struct WSAData *v11; // [esp+8h] [ebp-1008h]
  DWORD dwBufferLength; // [esp+Ch] [ebp-1004h] BYREF
  _BYTE ProtocolBuffer[24]; // [esp+10h] [ebp-1000h] BYREF
  char v14; // [esp+28h] [ebp-FE8h] BYREF

  Debug::Log(); /*0x7b1df3*/
  if ( LOBYTE(this->m_3F068) ) /*0x7b1df8*/
  {
    result = Debug::Log(); /*0x7b1e0a*/
    LOBYTE(result) = 1; /*0x7b1e12*/
  }
  else
  {
    if ( dword_B780A0 > 0 && !byte_B7809C ) /*0x7b1e2d*/
    {
      byte_B7809C = 1; /*0x7b1e41*/
      MessageBoxA(g_hWnd, aWarningPacketL, Caption, 0); /*0x7b1e48*/
    }
    v3 = __2_YAPAXI_Z(0x590u); /*0x7b1e53*/
    v4 = *(_DWORD *)this->__pad_0; /*0x7b1e58*/
    v5 = (struct WSAData *)v3; /*0x7b1e5a*/
    v11 = (struct WSAData *)v3; /*0x7b1e61*/
    this->u32_3F06C = -1; /*0x7b1e65*/
    (*(void (__thiscall **)(WinsockInterface *))(v4 + 20))(this); /*0x7b1e6f*/
    (*(void (__thiscall **)(WinsockInterface *))(*(_DWORD *)this->__pad_0 + 24))(this); /*0x7b1e76*/
    Debug::Log(); /*0x7b1e7e*/
    if ( WSAStartup(0x101u, v5) ) /*0x7b1e8c*/
    {
      Debug::Log(); /*0x7b1e9b*/
      __3_YAXPAX_Z(v5); /*0x7b1ea1*/
      LOBYTE(result) = 0; /*0x7b1ea9*/
    }
    else
    {
      Debug::Log(); /*0x7b1eb9*/
      if ( (unsigned __int8)v5->wVersion != 1 || ((v5->wVersion ^ 0x100) & 0xFFFFFF00) != 0 ) /*0x7b1ee2*/
      {
        Debug::Log(); /*0x7b1fad*/
        __3_YAXPAX_Z(v5); /*0x7b1fb3*/
        LOBYTE(result) = 0; /*0x7b1fbb*/
      }
      else
      {
        Debug::Log(); /*0x7b1efa*/
        *(_DWORD *)&this->m_1[3] = 546; /*0x7b1f0a*/
        dwBufferLength = 4096; /*0x7b1f18*/
        v6 = EnumProtocolsA(&iProtocols, ProtocolBuffer, &dwBufferLength); /*0x7b1f20*/
        if ( v6 == -1 ) /*0x7b1f28*/
        {
          Debug::Log(); /*0x7b1f9e*/
        }
        else
        {
          v7 = 0x7FFFFFFF; /*0x7b1f2c*/
          if ( v6 > 0 ) /*0x7b1f31*/
          {
            v8 = (int *)&v14; /*0x7b1f34*/
            v9 = v6; /*0x7b1f38*/
            do /*0x7b1f63*/
            {
              Debug::Log(); /*0x7b1f46*/
              v10 = *v8; /*0x7b1f4b*/
              if ( *v8 && v10 != -1 && v7 >= v10 ) /*0x7b1f5b*/
                v7 = *v8; /*0x7b1f5d*/
              v8 += 8; /*0x7b1f5f*/
              --v9; /*0x7b1f62*/
            }
            while ( v9 ); /*0x7b1f63*/
            if ( v7 != 0x7FFFFFFF && v7 > 400 ) /*0x7b1f74*/
              *(_DWORD *)&this->m_1[3] = v7; /*0x7b1f76*/
            v5 = v11; /*0x7b1f79*/
          }
        }
        LOBYTE(this->m_3F068) = 1; /*0x7b1f7e*/
        __3_YAXPAX_Z(v5); /*0x7b1f85*/
        LOBYTE(result) = 1; /*0x7b1f8d*/
      }
    }
  }
  return result; /*0x7b1e14*/
}



// ==== 0x007B1FD0  WinsockInterfaceClass::SetAddress  this=WinsockInterfaceClass  sig=csp ====
int __stdcall IPXInterfaceClass::SetAddress(WinsockInterfaceClass *this)
{
  int v1; // ebx
  WinsockInterfaceClass *v2; // ebp
  int v3; // eax
  int *v4; // esi
  int result; // eax
  int v6; // edx
  int v7; // edi

  v1 = 0; /*0x7b1fd8*/
  v2 = (WinsockInterfaceClass *)((char *)this + 28); /*0x7b1fdd*/
  v3 = this->u32_4; /*0x7b1fe0*/
  *((_DWORD *)this + 7) = 0; /*0x7b1fe4*/
  v4 = (int *)((char *)this + 32); /*0x7b1fed*/
  result = v3 / 4; /*0x7b1ff0*/
  if ( result > 0 ) /*0x7b1ff5*/
  {
    do /*0x7b2012*/
    {
      v6 = *v4++; /*0x7b1ff7*/
      ComputeHash(v2, v6); /*0x7b1ffe*/
      ++v1; /*0x7b2006*/
      result = this->u32_4 / 4; /*0x7b200d*/
    }
    while ( v1 < result ); /*0x7b2012*/
  }
  v7 = this->u32_4 & 3; /*0x7b2017*/
  if ( v7 ) /*0x7b201a*/
    return ComputeHash(v2, *v4 & (0xFFFFFFFF >> (32 - 8 * v7))); /*0x7b2035*/
  return result; /*0x7b203a*/
}



// ==== 0x007B2050  WinsockInterfaceClass::VerifyCRC  this=WinsockInterfaceClass  sig=csp ====
char __stdcall Winsock::VerifyCRC(WinsockInterfaceClass *this)
{
  WinsockInterfaceClass *v1; // ebx
  int v2; // eax
  int v3; // edi
  int *v4; // esi
  int v5; // edx
  int v6; // eax

  v1 = this; /*0x7b2051*/
  v2 = this->u32_4; /*0x7b2055*/
  if ( v2 < 640 ) /*0x7b205d*/
  {
    v3 = 0; /*0x7b206a*/
    v4 = (int *)((char *)this + 32); /*0x7b206c*/
    this = 0; /*0x7b2071*/
    if ( v2 / 4 > 0 ) /*0x7b2075*/
    {
      do /*0x7b2094*/
      {
        v5 = *v4++; /*0x7b2077*/
        ComputeHash(&this, v5); /*0x7b2080*/
        ++v3; /*0x7b2088*/
      }
      while ( v3 < *(_DWORD *)&v1[1].Initialized / 4 ); /*0x7b2094*/
    }
    v6 = *(_DWORD *)&v1[1].Initialized & 3; /*0x7b2099*/
    if ( v6 ) /*0x7b209c*/
      ComputeHash(&this, *v4 & (0xFFFFFFFF >> (32 - 8 * v6))); /*0x7b20b5*/
    if ( this == *(WinsockInterfaceClass **)&v1[2].Initialized ) /*0x7b20c5*/
      return 1; /*0x7b20ca*/
    Debug::Log(); /*0x7b20d2*/
  }
  return 0; /*0x7b20c9*/
}



// ==== 0x007B20E0  AudioQueue::AllocBuffer  this=AudioQueue  sig=csp ====
_BYTE *__thiscall AudioQueue::AllocBuffer(AudioQueue *this, char a2)
{
  _BYTE *result; // eax
  int v3; // edi
  int v4; // esi
  int v5; // edi
  int v6; // esi

  result = 0; /*0x7b20e7*/
  if ( a2 ) /*0x7b20ed*/
  {
    if ( *((_DWORD *)this + 64537) == 128 ) /*0x7b219e*/
    {
      result = (_BYTE *)__2_YAPAXI_Z(0x2A0u); /*0x7b21a5*/
      result[22] = 1; /*0x7b21af*/
      result[21] = 1; /*0x7b21b2*/
    }
    else
    {
      v5 = 0; /*0x7b21b7*/
      while ( 1 ) /*0x7b21b9*/
      {
        v6 = *((_DWORD *)this + 64534); /*0x7b21b9*/
        *((_DWORD *)this + 64534) = v6 + 1; /*0x7b21c5*/
        if ( v6 + 1 > 127 ) /*0x7b21cb*/
          *((_DWORD *)this + 64534) = 0; /*0x7b21cd*/
        if ( !*((_BYTE *)this + 672 * v6 + 172133) ) /*0x7b21e2*/
          break; /*0x7b21e2*/
        if ( ++v5 >= 128 ) /*0x7b21f2*/
          return result; /*0x7b21f2*/
      }
      result = (char *)this + 672 * v6 + 172112; /*0x7b220b*/
      *((_BYTE *)this + 672 * v6 + 172133) = 1; /*0x7b2212*/
      ++*((_DWORD *)this + 64537); /*0x7b221c*/
    }
    if ( result ) /*0x7b2224*/
    {
      result[23] = 1; /*0x7b2226*/
      result[24] = 0; /*0x7b2229*/
    }
  }
  else
  {
    if ( *((_DWORD *)this + 64536) == 128 ) /*0x7b20fd*/
    {
      result = (_BYTE *)__2_YAPAXI_Z(0x2A0u); /*0x7b2104*/
      result[22] = 1; /*0x7b210e*/
      result[21] = 1; /*0x7b2111*/
    }
    else
    {
      v3 = 0; /*0x7b2116*/
      while ( 1 ) /*0x7b2118*/
      {
        v4 = *((_DWORD *)this + 64533); /*0x7b2118*/
        *((_DWORD *)this + 64533) = v4 + 1; /*0x7b2124*/
        if ( v4 + 1 > 127 ) /*0x7b212a*/
          *((_DWORD *)this + 64533) = 0; /*0x7b212c*/
        if ( !*((_BYTE *)this + 672 * v4 + 86117) ) /*0x7b2141*/
          break; /*0x7b2141*/
        if ( ++v3 >= 128 ) /*0x7b2151*/
          return result; /*0x7b2151*/
      }
      result = (char *)this + 672 * v4 + 86096; /*0x7b2168*/
      *((_BYTE *)this + 672 * v4 + 86117) = 1; /*0x7b216f*/
      ++*((_DWORD *)this + 64536); /*0x7b217a*/
    }
    if ( result ) /*0x7b2182*/
    {
      result[23] = 0; /*0x7b2188*/
      result[24] = 0; /*0x7b218c*/
    }
  }
  return result; /*0x7b2153*/
}



// ==== 0x007B2240  IPXInterfaceClass::processPacket  this=IPXInterfaceClass  sig=csp ====
_BYTE *__thiscall IPXInterfaceClass::processPacket(IPXInterfaceClass *this)
{
  _BYTE *result; // eax
  int v2; // edi
  int v3; // esi

  result = 0; /*0x7b2249*/
  if ( *((_DWORD *)this + 64535) == 128 ) /*0x7b2253*/
  {
    result = (_BYTE *)__2_YAPAXI_Z(0x2A0u); /*0x7b225a*/
    result[22] = 1; /*0x7b2264*/
    result[21] = 1; /*0x7b2267*/
  }
  else
  {
    v2 = 0; /*0x7b226c*/
    while ( 1 ) /*0x7b226e*/
    {
      v3 = *((_DWORD *)this + 64532); /*0x7b226e*/
      *((_DWORD *)this + 64532) = v3 + 1; /*0x7b227a*/
      if ( v3 + 1 > 127 ) /*0x7b2280*/
        *((_DWORD *)this + 64532) = 0; /*0x7b2282*/
      if ( !*((_BYTE *)this + 672 * v3 + 101) ) /*0x7b2297*/
        break; /*0x7b2297*/
      if ( ++v2 >= 128 ) /*0x7b22a4*/
        return result; /*0x7b22a4*/
    }
    result = (char *)this + 672 * v3 + 80; /*0x7b22b9*/
    *((_BYTE *)this + 672 * v3 + 101) = 1; /*0x7b22bd*/
    ++*((_DWORD *)this + 64535); /*0x7b22c8*/
  }
  if ( result ) /*0x7b22d0*/
  {
    result[23] = 0; /*0x7b22d2*/
    result[24] = 0; /*0x7b22d5*/
  }
  return result; /*0x7b22a6*/
}



// ==== 0x007B22E0  WinsockInterfaceClass::ReadBuffer  this=WinsockInterfaceClass  sig=csp ====
int __thiscall AudioQueue::ReadBuffer(
        WinsockInterfaceClass *this,
        void *a2,
        int a3,
        void *a4,
        unsigned int *a5,
        _WORD *a6)
{
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // ecx
  int v11; // edx
  int v12; // ecx

  EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x7b22e9*/
  if ( !this->BoundPort ) /*0x7b22ee*/
    return 0; /*0x7b22f5*/
  v8 = **((_DWORD **)this + 3); /*0x7b2304*/
  qmemcpy(a2, (const void *)(v8 + 32), *(_DWORD *)(v8 + 16)); /*0x7b2311*/
  v9 = *a5; /*0x7b231e*/
  if ( *a5 > 0x10 ) /*0x7b2323*/
    v9 = 16; /*0x7b2325*/
  *a5 = v9; /*0x7b232e*/
  qmemcpy(a4, (const void *)v8, v9); /*0x7b2337*/
  *a6 = *(_WORD *)(v8 + 26); /*0x7b234c*/
  *(_DWORD *)a3 = *(_DWORD *)(v8 + 16); /*0x7b2352*/
  v10 = this->BoundPort; /*0x7b2354*/
  if ( v10 > 0 ) /*0x7b2359*/
  {
    v11 = v10 - 1; /*0x7b235b*/
    v12 = 0; /*0x7b235e*/
    for ( this->BoundPort = v11; /*0x7b2365*/
          v12 < this->BoundPort;
          *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v12 - 4) = *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v12) )
    {
      ++v12; /*0x7b236a*/
    }
  }
  if ( *(_BYTE *)(v8 + 22) ) /*0x7b2379*/
  {
    __3_YAXPAX_Z((void *)v8); /*0x7b2381*/
  }
  else
  {
    *(_BYTE *)(v8 + 21) = 0; /*0x7b2391*/
    --*((_DWORD *)this + 64535); /*0x7b239d*/
  }
  return *(_DWORD *)a3; /*0x7b22f7*/
}



// ==== 0x007B23B0  WinsockInterfaceClass::WriteBuffer  this=WinsockInterfaceClass  sig=csp ====
__int16 __thiscall AudioQueue::WriteBuffer(
        WinsockInterfaceClass *this,
        const void *a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        char a6,
        char a7,
        __int16 a8)
{
  _BYTE *v9; // ebp
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // edx
  UINT v19; // eax

  v9 = AudioQueue::AllocBuffer((AudioQueue *)this, a6); /*0x7b23c4*/
  qmemcpy(v9 + 32, a2, a3); /*0x7b23d5*/
  *((_DWORD *)v9 + 4) = a3; /*0x7b23e6*/
  v9[20] = 0; /*0x7b23f4*/
  v9[24] = a7; /*0x7b23f8*/
  qmemcpy(v9, a4, a5); /*0x7b23fb*/
  *((_WORD *)v9 + 13) = a8; /*0x7b2409*/
  (*(void (__thiscall **)(WinsockInterfaceClass *, _BYTE *))(this->Socket + 84))(this, v9); /*0x7b2411*/
  if ( a6 ) /*0x7b241a*/
  {
    v10 = this->u32_4; /*0x7b241c*/
    if ( *((_DWORD *)this + 18) < v10 /*0x7b2444*/
      || (*((_BYTE *)this + 69) || !v10)
      && (v11 = *((_DWORD *)this + 19), v11 > 0)
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)this + 14) + 8))(
           (char *)this + 56,
           v10 + v11,
           0) )
    {
      v12 = *((_DWORD *)this + 18); /*0x7b244b*/
      v13 = *((_DWORD *)this + 15); /*0x7b244e*/
      *((_DWORD *)this + 18) = v12 + 1; /*0x7b2454*/
      *(_DWORD *)(v13 + 4 * v12) = v9; /*0x7b2457*/
    }
    v14 = *((_DWORD *)this + 64540); /*0x7b245a*/
  }
  else
  {
    v15 = *((_DWORD *)this + 10); /*0x7b2462*/
    if ( *((_DWORD *)this + 12) < v15 /*0x7b248a*/
      || (*((_BYTE *)this + 45) || !v15)
      && (v16 = *((_DWORD *)this + 13), v16 > 0)
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(this->u32_8 + 8))(
           (char *)this + 32,
           v15 + v16,
           0) )
    {
      v17 = *((_DWORD *)this + 12); /*0x7b2491*/
      v18 = *((_DWORD *)this + 9); /*0x7b2494*/
      *((_DWORD *)this + 12) = v17 + 1; /*0x7b249a*/
      *(_DWORD *)(v18 + 4 * v17) = v9; /*0x7b249d*/
    }
    v14 = *((_DWORD *)this + 64539); /*0x7b24a0*/
  }
  v19 = (*(int (__thiscall **)(WinsockInterfaceClass *, int))(this->Socket + 56))(this, v14); /*0x7b24af*/
  SendMessageA(g_hWnd, v19, 0, 2); /*0x7b24b9*/
  return EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x7b24ca*/
}



// ==== 0x007B24E0  WinsockInterfaceClass::Connect  this=WinsockInterfaceClass  sig=csp ====
__int16 __thiscall IPXInterfaceClass::Connect(WinsockInterfaceClass *this, const void *a2, unsigned int a3, char a4)
{
  _BYTE *v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  UINT v15; // eax

  v5 = AudioQueue::AllocBuffer((AudioQueue *)this, a4); /*0x7b24f4*/
  qmemcpy(v5 + 32, a2, a3); /*0x7b2505*/
  *((_DWORD *)v5 + 4) = a3; /*0x7b250e*/
  (*(void (__thiscall **)(WinsockInterfaceClass *, _BYTE *))(this->Socket + 84))(this, v5); /*0x7b2516*/
  v5[20] = 1; /*0x7b251d*/
  if ( a4 ) /*0x7b2523*/
  {
    v6 = this->u32_4; /*0x7b2525*/
    if ( *((_DWORD *)this + 18) < v6 /*0x7b254d*/
      || (*((_BYTE *)this + 69) || !v6)
      && (v7 = *((_DWORD *)this + 19), v7 > 0)
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)this + 14) + 8))(
           (char *)this + 56,
           v6 + v7,
           0) )
    {
      v8 = *((_DWORD *)this + 18); /*0x7b2554*/
      v9 = *((_DWORD *)this + 15); /*0x7b2557*/
      *((_DWORD *)this + 18) = v8 + 1; /*0x7b255d*/
      *(_DWORD *)(v9 + 4 * v8) = v5; /*0x7b2560*/
    }
    v10 = *((_DWORD *)this + 64540); /*0x7b2563*/
  }
  else
  {
    v11 = *((_DWORD *)this + 10); /*0x7b256b*/
    if ( *((_DWORD *)this + 12) < v11 /*0x7b2593*/
      || (*((_BYTE *)this + 45) || !v11)
      && (v12 = *((_DWORD *)this + 13), v12 > 0)
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(this->u32_8 + 8))(
           (char *)this + 32,
           v11 + v12,
           0) )
    {
      v13 = *((_DWORD *)this + 12); /*0x7b259a*/
      v14 = *((_DWORD *)this + 9); /*0x7b259d*/
      *((_DWORD *)this + 12) = v13 + 1; /*0x7b25a3*/
      *(_DWORD *)(v14 + 4 * v13) = v5; /*0x7b25a6*/
    }
    v10 = *((_DWORD *)this + 64539); /*0x7b25a9*/
  }
  v15 = (*(int (__thiscall **)(WinsockInterfaceClass *, int))(this->Socket + 56))(this, v10); /*0x7b25b9*/
  SendMessageA(g_hWnd, v15, 0, 2); /*0x7b25c3*/
  return EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x7b25d4*/
}



// ==== 0x007B25E0  WinsockInterfaceClass::GetAddress  this=WinsockInterfaceClass  sig=csp ====
int __stdcall IPXInterfaceClass::GetAddress(WinsockInterfaceClass *this)
{
  WinsockInterfaceClass *v1; // esi
  int optlen; // [esp+4h] [ebp-4h] BYREF

  v1 = this; /*0x7b25e6*/
  optlen = 4; /*0x7b25fb*/
  getsockopt((SOCKET)this, 0xFFFF, 4103, (char *)&this, &optlen); /*0x7b2603*/
  this = 0; /*0x7b261d*/
  return setsockopt((SOCKET)v1, 0xFFFF, 4103, (const char *)&this, optlen); /*0x7b262a*/
}



// ==== 0x007B2630  WinsockInterfaceClass::ConfigureBuffers  this=WinsockInterfaceClass  sig=csp ====
int __thiscall Socket::ConfigureBuffers(WinsockInterfaceClass *this, SOCKET s)
{
  SOCKET v2; // esi
  int result; // eax

  v2 = s; /*0x7b2631*/
  if ( s == -1 ) /*0x7b2638*/
    v2 = *((_DWORD *)this + 64539); /*0x7b263a*/
  if ( setsockopt(v2, 0xFFFF, 4098, optval, 4) == -1 ) /*0x7b265a*/
    WSAGetLastError(); /*0x7b265c*/
  Debug::Log(); /*0x7b2667*/
  if ( setsockopt(v2, 0xFFFF, 4097, byte_84DD9C, 4) == -1 ) /*0x7b2699*/
    WSAGetLastError(); /*0x7b269b*/
  result = Debug::Log(); /*0x7b26a6*/
  LOBYTE(result) = 1; /*0x7b26ae*/
  return result; /*0x7b26b0*/
}



// ==== 0x007B26D0  WinsockInterfaceClass::ReceivePacket  this=WinsockInterfaceClass  sig=csp ====
char __stdcall IPXInterfaceClass::ReceivePacket(WinsockInterfaceClass *this, int namelen)
{
  if ( gethostname((char *)this, namelen) == -1 ) /*0x7b26e3*/
  {
    WSAGetLastError(); /*0x7b26e5*/
    Debug::Log(); /*0x7b26f0*/
    return 0; /*0x7b26f8*/
  }
  else
  {
    Debug::Log(); /*0x7b2704*/
    return 1; /*0x7b270c*/
  }
}



// ==== 0x007B2720  SessionClass::SetInstance  this=SessionClass  sig=csp ====
void __thiscall SessionClass::SetInstance(SessionClass *this)
{
  dword_B780A0 = (int)this; /*0x7b2720*/
}



// ==== 0x007B2730  Network_Process_7B2730  this=-  sig=ida-proto ====
int sub_7B2730()
{
  return dword_B780A0; /*0x7b2735*/
}



// ==== 0x007B2740  WinsockInterfaceClass::Destru_vt13  this=WinsockInterfaceClass  sig=csp ====
int WinsockInterfaceClass::Destru_vt13(WinsockInterfaceClass *this)
{
  return 0; /*0x7b2742*/
}



// ==== 0x007B2750  WinsockInterfaceClass::Destru_vt14  this=WinsockInterfaceClass  sig=csp ====
int __stdcall WinsockInterfaceClass::Destru_vt14(WinsockInterfaceClass *this)
{
  return 0; /*0x7b2752*/
}



// ==== 0x007B2760  WinsockInterfaceClass::Destru_vt15  this=WinsockInterfaceClass  sig=csp ====
char __stdcall WinsockInterfaceClass::Destru_vt15(WinsockInterfaceClass *this)
{
  return 0; /*0x7b2762*/
}



// ==== 0x007B2770  WinsockInterfaceClass::Destru_vt16  this=WinsockInterfaceClass  sig=csp ====
int __stdcall WinsockInterfaceClass::Destru_vt16(WinsockInterfaceClass *this, int a2, int a3, int a4)
{
  return 1; /*0x7b2775*/
}



// ==== 0x007B2780  WinsockInterfaceClass::Destru_vt00  this=WinsockInterfaceClass  sig=csp ====
SOCKET *__thiscall WinsockInterfaceClass::Destru_vt00(WinsockInterfaceClass *this, char a2)
{
  char v3; // al
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax

  v3 = *((_BYTE *)this + 258152); /*0x7b2786*/
  this->Socket = (int)&WinsockInterfaceClass::`vftable'; /*0x7b278c*/
  if ( v3 ) /*0x7b2794*/
  {
    NetworkClass::UnregisterAsync(this); /*0x7b2796*/
    (*(void (__thiscall **)(WinsockInterfaceClass *))(this->Socket + 4))(this); /*0x7b27a0*/
    WSACleanup(); /*0x7b27a3*/
    *((_BYTE *)this + 258152) = 0; /*0x7b27a8*/
  }
  v4 = (void *)*((_DWORD *)this + 15); /*0x7b27ae*/
  *((_DWORD *)this + 14) = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b27b1*/
  if ( v4 && *((_BYTE *)this + 69) ) /*0x7b27bc*/
  {
    __3_YAXPAX_Z(v4); /*0x7b27c2*/
    *((_DWORD *)this + 15) = 0; /*0x7b27ca*/
  }
  *((_BYTE *)this + 69) = 0; /*0x7b27cd*/
  this->u32_4 = 0; /*0x7b27d0*/
  v5 = (void *)*((_DWORD *)this + 9); /*0x7b27d3*/
  this->u32_8 = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b27d6*/
  if ( v5 && *((_BYTE *)this + 45) ) /*0x7b27e1*/
  {
    __3_YAXPAX_Z(v5); /*0x7b27e7*/
    *((_DWORD *)this + 9) = 0; /*0x7b27ef*/
  }
  *((_BYTE *)this + 45) = 0; /*0x7b27f2*/
  *((_DWORD *)this + 10) = 0; /*0x7b27f5*/
  v6 = (void *)*((_DWORD *)this + 3); /*0x7b27f8*/
  this->LocalAddress = (int)&VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b27fb*/
  if ( v6 && *((_BYTE *)this + 21) ) /*0x7b2806*/
  {
    __3_YAXPAX_Z(v6); /*0x7b280c*/
    *((_DWORD *)this + 3) = 0; /*0x7b2814*/
  }
  *((_BYTE *)this + 21) = 0; /*0x7b281b*/
  this->u32_4 = 0; /*0x7b2820*/
  if ( (a2 & 1) != 0 ) /*0x7b2823*/
    __3_YAXPAX_Z(this); /*0x7b2826*/
  return (SOCKET *)this; /*0x7b2830*/
}



// ==== 0x007B2840  _DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass::getSocketCount  this=DynamicVector  sig=csp ====
void __thiscall IPXInterfaceClass::getSocketCount(_DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x7b2846*/
  this->m_10 = 0; /*0x7b2849*/
  if ( v2 && BYTE1(this->m_C) ) /*0x7b2850*/
  {
    __3_YAXPAX_Z(v2); /*0x7b2856*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7b285e*/
  }
  BYTE1(this->m_C) = 0; /*0x7b2861*/
  this->m_8 = 0; /*0x7b2864*/
}



// ==== 0x007B2870  _DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass::resetSocket  this=DynamicVector  sig=csp ====
unsigned int __thiscall IPXInterfaceClass::resetSocket(
        _DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7b2870*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7b2885*/
  else
    return 0; /*0x7b2877*/
}



// ==== 0x007B2890  _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Get(
        _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x7b289a*/
}



// ==== 0x007B28A0  _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Add(
        _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x7b28a2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x7b28ad*/
  {
    v3 = 0; /*0x7b28af*/
    if ( m_8 <= 0 ) /*0x7b28b3*/
      return 1; /*0x7b28d3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x7b28b5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x7b28bb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x7b28c4*/
    {
      ++v3; /*0x7b28c6*/
      ++v4; /*0x7b28c7*/
      if ( v3 >= m_8 ) /*0x7b28cc*/
        return 1; /*0x7b28cc*/
    }
  }
  return 0; /*0x7b28ce*/
}



// ==== 0x007B28E0  _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Release(
        _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x7b28ec*/
  {
    LOBYTE(this->m_C) = 0; /*0x7b28f6*/
    if ( a3 ) /*0x7b28fc*/
      v4 = a3; /*0x7b2912*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x7b290e*/
    LOBYTE(this->m_C) = 1; /*0x7b2916*/
    if ( v4 ) /*0x7b291a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x7b2925*/
      {
        m_8 = this->m_8; /*0x7b292c*/
        if ( a2 < m_8 ) /*0x7b2931*/
          m_8 = a2; /*0x7b2933*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7b2939*/
          ++i; /*0x7b293e*/
        if ( BYTE1(this->m_C) ) /*0x7b294b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7b2956*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x7b295e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x7b2967*/
      this->m_8 = a2; /*0x7b296f*/
      BYTE1(this->m_C) = a3 == 0; /*0x7b2972*/
      return 1; /*0x7b2978*/
    }
    else
    {
      return 0; /*0x7b291f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUWinsockBufferType_WinsockInterfaceClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x7b2982*/
    return 1; /*0x7b2988*/
  }
}



// ==== 0x007B2990  _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::Remove(
        _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x7b299d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7b29a3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7b29ab*/
  }
  BYTE1(this->m_C) = 0; /*0x7b29ae*/
  this->m_8 = 0; /*0x7b29b1*/
}



// ==== 0x007B29C0  _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::GetSize(
        _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x7b29c0*/
    return 0; /*0x7b29c8*/
  m_8 = this->m_8; /*0x7b29ce*/
  result = 0; /*0x7b29d1*/
  if ( m_8 <= 0 ) /*0x7b29d5*/
    return -1; /*0x7b29ec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7b29db*/
  {
    if ( ++result >= m_8 ) /*0x7b29ea*/
      return -1; /*0x7b29ea*/
  }
  return result; /*0x7b29ca*/
}



// ==== 0x007B2A00  _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::GetCapacity(
        _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7b2a00*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7b2a15*/
  else
    return 0; /*0x7b2a07*/
}



// ==== 0x007B2A20  _DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass::getSocketState  this=DynamicVector  sig=csp ====
char __thiscall IPXInterfaceClass::getSocketState(
        _DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7b2a2c*/
  {
    LOBYTE(this->m_C) = 0; /*0x7b2a32*/
    if ( a3 ) /*0x7b2a38*/
      v4 = a3; /*0x7b2a4e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x7b2a4a*/
    LOBYTE(this->m_C) = 1; /*0x7b2a52*/
    if ( !v4 ) /*0x7b2a56*/
      return 0; /*0x7b2aca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x7b2a58*/
    {
      m_8 = this->m_8; /*0x7b2a5f*/
      if ( a2 < m_8 ) /*0x7b2a64*/
        m_8 = a2; /*0x7b2a66*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7b2a6c*/
        ++i; /*0x7b2a71*/
      if ( BYTE1(this->m_C) ) /*0x7b2a7e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7b2a89*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x7b2a91*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x7b2a9a*/
    this->m_8 = a2; /*0x7b2aa2*/
    BYTE1(this->m_C) = a3 == 0; /*0x7b2aa5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass *))(*(_DWORD *)this->__pad_0 /*0x7b2aae*/
                                                                                             + 12))(this);
  }
  v7 = this->m_8; /*0x7b2ab1*/
  if ( v7 < this->m_10 ) /*0x7b2ab9*/
    this->m_10 = v7; /*0x7b2abb*/
  return 1; /*0x7b2abe*/
}



// ==== 0x007B2AD0  _DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass::initSession  this=DynamicVector  sig=csp ====
int __thiscall IPXInterfaceClass::initSession(
        _DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x7b2ad0*/
  result = 0; /*0x7b2ad3*/
  if ( m_10 <= 0 ) /*0x7b2ad8*/
    return -1; /*0x7b2aef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7b2ade*/
  {
    if ( ++result >= m_10 ) /*0x7b2aed*/
      return -1; /*0x7b2aed*/
  }
  return result; /*0x7b2af2*/
}



// ==== 0x007B2B00  _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_WinsockBufferType_WinsockInterfaceClass::QueryInterface(
        _VectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7b2b03*/
  *(_DWORD *)this->__pad_0 = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b2b06*/
  if ( v3 && BYTE1(this->m_C) ) /*0x7b2b10*/
  {
    __3_YAXPAX_Z(v3); /*0x7b2b18*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7b2b20*/
  }
  BYTE1(this->m_C) = 0; /*0x7b2b2b*/
  this->m_8 = 0; /*0x7b2b31*/
  if ( (a2 & 1) != 0 ) /*0x7b2b38*/
    __3_YAXPAX_Z(this); /*0x7b2b3b*/
  return this->__pad_0; /*0x7b2b45*/
}



// ==== 0x007B2B50  _DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass::closeSession  this=DynamicVector  sig=csp ====
_DWORD *__thiscall IPXInterfaceClass::closeSession(
        _DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7b2b53*/
  *(_DWORD *)this->__pad_0 = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable'; /*0x7b2b56*/
  if ( v3 && BYTE1(this->m_C) ) /*0x7b2b60*/
  {
    __3_YAXPAX_Z(v3); /*0x7b2b68*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7b2b70*/
  }
  BYTE1(this->m_C) = 0; /*0x7b2b7b*/
  this->m_8 = 0; /*0x7b2b81*/
  if ( (a2 & 1) != 0 ) /*0x7b2b88*/
    __3_YAXPAX_Z(this); /*0x7b2b8b*/
  return this->__pad_0; /*0x7b2b95*/
}



// ==== 0x007B2BA0  sub_7B2BA0  this=-  sig=ida-proto ====
void sub_7B2BA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7b2bac*/
  dbl_B780C8 = Math::Sqrt(v0 + v0); /*0x7b2bbe*/
}



// ==== 0x007B2BD0  sub_7B2BD0  this=-  sig=ida-proto ====
void sub_7B2BD0()
{
  dbl_B78118 = dbl_B780C8 / 60.0; /*0x7b2bdc*/
}



// ==== 0x007B2BF0  sub_7B2BF0  this=-  sig=ida-proto ====
void sub_7B2BF0()
{
  dbl_B78100 = 1.0 / dbl_B78118; /*0x7b2bfc*/
}



// ==== 0x007B2C10  sub_7B2C10  this=-  sig=ida-proto ====
void sub_7B2C10()
{
  dbl_B780F8 = 0.0174532925199433 * 45.0; /*0x7b2c1c*/
}



// ==== 0x007B2C30  sub_7B2C30  this=-  sig=ida-proto ====
void sub_7B2C30()
{
  dbl_B780D0 = 0.0174532925199433 * 60.0; /*0x7b2c3c*/
}



// ==== 0x007B2C50  sub_7B2C50  this=-  sig=ida-proto ====
void sub_7B2C50()
{
  dbl_B780A8 = 0.0174532925199433 * 90.0; /*0x7b2c5c*/
}



// ==== 0x007B2C70  sub_7B2C70  this=-  sig=ida-proto ====
__int64 sub_7B2C70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B780A8 - dbl_B780D0); /*0x7b2c82*/
  result = Math::RoundToInt(v0 * dbl_B780C8 * 0.5); /*0x7b2c96*/
  dword_B78120 = result; /*0x7b2c9b*/
  return result; /*0x7b2ca0*/
}



// ==== 0x007B2CB0  sub_7B2CB0  this=-  sig=ida-proto ====
void sub_7B2CB0()
{
  dbl_B780D8 = Math::ArcTan((double)dword_B78120 * 0.00390625); /*0x7b2cc7*/
}



// ==== 0x007B2CE0  sub_7B2CE0  this=-  sig=ida-proto ====
void sub_7B2CE0()
{
  dbl_B780F0 = Math::ArcTan((double)(2 * dword_B78120) / dbl_B780C8); /*0x7b2d02*/
}



// ==== 0x007B2D10  sub_7B2D10  this=-  sig=ida-proto ====
__int64 sub_7B2D10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B78120) + 0.5); /*0x7b2d2b*/
  dword_B78114 = result; /*0x7b2d30*/
  return result; /*0x7b2d36*/
}



// ==== 0x007B2D40  sub_7B2D40  this=-  sig=ida-proto ====
int sub_7B2D40()
{
  word_B780C0 = 0; /*0x7b2d42*/
  word_B780C2 = 0; /*0x7b2d48*/
  return 0; /*0x7b2d4e*/
}



// ==== 0x007B2D50  sub_7B2D50  this=-  sig=ida-proto ====
int sub_7B2D50()
{
  dword_B780E0 = 0; /*0x7b2d52*/
  dword_B780E4 = 0; /*0x7b2d57*/
  dword_B780E8 = 0; /*0x7b2d5c*/
  return 0; /*0x7b2d61*/
}



// ==== 0x007B2D70  sub_7B2D70  this=-  sig=ida-proto ====
int sub_7B2D70()
{
  dword_B78110 = 0; /*0x7b2d75*/
  dword_B78108 = 128; /*0x7b2d7f*/
  dword_B7810C = 128; /*0x7b2d84*/
  return 128; /*0x7b2d89*/
}



// ==== 0x007B2D90  sub_7B2D90  this=-  sig=ida-proto ====
int sub_7B2D90()
{
  dword_B780B0 = 0; /*0x7b2d92*/
  dword_B780B4 = 0; /*0x7b2d97*/
  dword_B780B8 = 0; /*0x7b2d9c*/
  dword_B780BC = 0; /*0x7b2da1*/
  return 0; /*0x7b2da6*/
}



// ==== 0x007B2DB0  Network::finalizeSession  this=UDPInterfaceClass  sig=csp ====
int __thiscall Network::finalizeSession(Network *this)
{
  IPXInterfaceClass::bindSocket((char *)this); /*0x7b2db3*/
  *((_DWORD *)this + 64719) = 0; /*0x7b2dc4*/
  *((_DWORD *)this + 64720) = 0; /*0x7b2dca*/
  *((_BYTE *)this + 258884) = 1; /*0x7b2dd0*/
  *((_BYTE *)this + 258885) = 0; /*0x7b2dd7*/
  *((_DWORD *)this + 64718) = &DynamicVectorClass<unsigned char *>::`vftable'; /*0x7b2ddd*/
  *((_DWORD *)this + 64723) = 10; /*0x7b2de3*/
  *((_DWORD *)this + 64722) = 0; /*0x7b2de9*/
  *((_DWORD *)this + 64853) = 0; /*0x7b2def*/
  *((_DWORD *)this + 64854) = 0; /*0x7b2df5*/
  *((_BYTE *)this + 259420) = 1; /*0x7b2dfb*/
  *((_BYTE *)this + 259421) = 0; /*0x7b2e02*/
  *((_DWORD *)this + 64852) = &DynamicVectorClass<unsigned char *>::`vftable'; /*0x7b2e08*/
  *((_DWORD *)this + 64857) = 10; /*0x7b2e0e*/
  *((_DWORD *)this + 64856) = 0; /*0x7b2e14*/
  *((_WORD *)this + 129406) = 0; /*0x7b2e1a*/
  *((_DWORD *)this + 64716) = 0; /*0x7b2e21*/
  *((_DWORD *)this + 64858) = 0; /*0x7b2e27*/
  this->Network_field_0x0 = (int)&UDPInterfaceClass::`vftable'; /*0x7b2e2d*/
  *((_DWORD *)this + 64717) = -1; /*0x7b2e33*/
  return (int)this; /*0x7b2e3f*/
}



// ==== 0x007B2E50  UDPInterfaceClass::method_7B2E50  this=UDPInterfaceClass  sig=csp ====
void __thiscall sub_7B2E50(UDPInterfaceClass *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  void *v8; // eax
  void *v9; // eax

  this->Socket = (int)&UDPInterfaceClass::`vftable'; /*0x7b2e56*/
  while ( *((_DWORD *)this + 64722) ) /*0x7b2e5c*/
  {
    __3_YAXPAX_Z(**((void ***)this + 64719)); /*0x7b2e6f*/
    v2 = *((_DWORD *)this + 64722); /*0x7b2e74*/
    if ( v2 > 0 ) /*0x7b2e7f*/
    {
      v3 = v2 - 1; /*0x7b2e81*/
      v4 = 0; /*0x7b2e84*/
      for ( *((_DWORD *)this + 64722) = v3; /*0x7b2e8e*/
            v4 < *((_DWORD *)this + 64722);
            *(_DWORD *)(*((_DWORD *)this + 64719) + 4 * v4 - 4) = *(_DWORD *)(*((_DWORD *)this + 64719) + 4 * v4) )
      {
        ++v4; /*0x7b2e96*/
      }
    }
  }
  while ( *((_DWORD *)this + 64856) ) /*0x7b2eb0*/
  {
    __3_YAXPAX_Z(**((void ***)this + 64853)); /*0x7b2ec1*/
    v5 = *((_DWORD *)this + 64856); /*0x7b2ec6*/
    if ( v5 > 0 ) /*0x7b2ed1*/
    {
      v6 = v5 - 1; /*0x7b2ed3*/
      v7 = 0; /*0x7b2ed6*/
      for ( *((_DWORD *)this + 64856) = v6; /*0x7b2ee0*/
            v7 < *((_DWORD *)this + 64856);
            *(_DWORD *)(*((_DWORD *)this + 64853) + 4 * v7 - 4) = *(_DWORD *)(*((_DWORD *)this + 64853) + 4 * v7) )
      {
        ++v7; /*0x7b2ee8*/
      }
    }
  }
  UDPInterfaceClass::connect(this); /*0x7b2f04*/
  v8 = (void *)*((_DWORD *)this + 64853); /*0x7b2f09*/
  *((_DWORD *)this + 64852) = &VectorClass<unsigned char *>::`vftable'; /*0x7b2f0f*/
  if ( v8 && *((_BYTE *)this + 259421) ) /*0x7b2f1d*/
  {
    __3_YAXPAX_Z(v8); /*0x7b2f26*/
    *((_DWORD *)this + 64853) = 0; /*0x7b2f2e*/
  }
  *((_BYTE *)this + 259421) = 0; /*0x7b2f34*/
  *((_DWORD *)this + 64854) = 0; /*0x7b2f3a*/
  v9 = (void *)*((_DWORD *)this + 64719); /*0x7b2f40*/
  *((_DWORD *)this + 64718) = &VectorClass<unsigned char *>::`vftable'; /*0x7b2f46*/
  if ( v9 && *((_BYTE *)this + 258885) ) /*0x7b2f54*/
  {
    __3_YAXPAX_Z(v9); /*0x7b2f5d*/
    *((_DWORD *)this + 64719) = 0; /*0x7b2f65*/
  }
  *((_BYTE *)this + 258885) = 0; /*0x7b2f6d*/
  *((_DWORD *)this + 64720) = 0; /*0x7b2f73*/
  WinsockInterfaceClass::WinsockInterfaceClass((int)this); /*0x7b2f79*/
}



// ==== 0x007B2F90  UDPInterfaceClass::GetQueueSize  this=UDPInterfaceClass  sig=csp ====
int __thiscall UDPInterfaceClass_Destru::GetQueueSize(UDPInterfaceClass *this)
{
  int result; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // eax

  for ( result = *((_DWORD *)this + 64722); result; result = *((_DWORD *)this + 64722) ) /*0x7b2f9b*/
  {
    __3_YAXPAX_Z(**((void ***)this + 64719)); /*0x7b2fa6*/
    v3 = *((_DWORD *)this + 64722); /*0x7b2fab*/
    if ( v3 > 0 ) /*0x7b2fb6*/
    {
      v4 = v3 - 1; /*0x7b2fb8*/
      v5 = 0; /*0x7b2fbb*/
      for ( *((_DWORD *)this + 64722) = v4; /*0x7b2fc5*/
            v5 < *((_DWORD *)this + 64722);
            *(_DWORD *)(*((_DWORD *)this + 64719) + 4 * v5 - 4) = *(_DWORD *)(*((_DWORD *)this + 64719) + 4 * v5) )
      {
        ++v5; /*0x7b2fcd*/
      }
    }
  }
  return result; /*0x7b2fe9*/
}



// ==== 0x007B2FF0  UDPInterfaceClass::Flush  this=UDPInterfaceClass  sig=csp ====
int __thiscall UDPInterfaceClass_Destru::Flush(UDPInterfaceClass *this, char *Buffer, u_short a3)
{
  _BYTE *v4; // edi
  u_short v5; // ax
  int v6; // ecx
  UDPInterfaceClass *v7; // esi
  int result; // eax
  int v9; // ecx
  int v10; // edx
  char v11; // [esp+8h] [ebp-10h] BYREF
  char v12; // [esp+Ch] [ebp-Ch] BYREF
  char v13; // [esp+10h] [ebp-8h] BYREF
  char v14; // [esp+14h] [ebp-4h] BYREF

  v4 = (_BYTE *)__2_YAPAXI_Z(4u); /*0x7b2ffe*/
  sscanf(Buffer, "%d.%d.%d.%d", &v11, &v12, &v13, &v14); /*0x7b301e*/
  *v4 = v11; /*0x7b302a*/
  v4[1] = v12; /*0x7b3030*/
  v5 = a3; /*0x7b3037*/
  v4[2] = v13; /*0x7b303b*/
  v4[3] = v14; /*0x7b3045*/
  if ( !a3 ) /*0x7b3048*/
    v5 = hostshort; /*0x7b304a*/
  v6 = *((_DWORD *)this + 64722); /*0x7b304f*/
  v7 = this + 32359; /*0x7b3055*/
  *((_WORD *)&v7[3].Socket + v6) = v5; /*0x7b305b*/
  result = v7[1].Socket; /*0x7b3060*/
  if ( v7[2].Socket < result /*0x7b3088*/
    || (v7[1].__pad_5[0] || !result)
    && (v9 = *(_DWORD *)&v7[2].Initialized, v9 > 0)
    && (result = (*(int (__thiscall **)(UDPInterfaceClass *, int, _DWORD))(v7->Socket + 8))(v7, result + v9, 0),
        (_BYTE)result) )
  {
    result = v7[2].Socket; /*0x7b308a*/
    v10 = *(_DWORD *)&v7->Initialized; /*0x7b308d*/
    v7[2].Socket = result + 1; /*0x7b3093*/
    *(_DWORD *)(v10 + 4 * result) = v4; /*0x7b3096*/
  }
  return result; /*0x7b3099*/
}



// ==== 0x007B30B0  UDPInterfaceClass::Send  this=UDPInterfaceClass  sig=csp ====
char __thiscall UDPInterfaceClass_Destru::Send(UDPInterfaceClass *this, u_short a2)
{
  int v3; // eax
  __int16 v5; // ax
  SOCKET v6; // edx
  char optval[2]; // [esp+4h] [ebp-14h] BYREF
  __int16 v8; // [esp+6h] [ebp-12h]
  struct sockaddr name; // [esp+8h] [ebp-10h] BYREF

  if ( *((_DWORD *)this + 64539) != -1 ) /*0x7b30bf*/
  {
    closesocket(*((_DWORD *)this + 64539)); /*0x7b30c2*/
    *((_DWORD *)this + 64539) = -1; /*0x7b30c7*/
  }
  Debug::Log(); /*0x7b30d6*/
  v3 = socket(2, 2, 0); /*0x7b30e4*/
  *((_DWORD *)this + 64539) = v3; /*0x7b30ec*/
  if ( v3 == -1 ) /*0x7b30f2*/
    return 0; /*0x7b30f4*/
  name.sa_family = 2; /*0x7b3105*/
  if ( a2 ) /*0x7b310c*/
  {
    *((_WORD *)this + 129406) = a2; /*0x7b310e*/
    v5 = htons(a2); /*0x7b3116*/
  }
  else
  {
    *((_WORD *)this + 129406) = 0; /*0x7b3118*/
    v5 = htons(hostshort); /*0x7b3128*/
  }
  *(_WORD *)name.sa_data = v5; /*0x7b312f*/
  *(_DWORD *)&name.sa_data[2] = htonl(0); /*0x7b313f*/
  Debug::Log(); /*0x7b3149*/
  if ( bind(*((_DWORD *)this + 64539), &name, 16) == -1 ) /*0x7b3168*/
  {
    WSAGetLastError(); /*0x7b316a*/
    Debug::Log(); /*0x7b3175*/
    (*(void (__thiscall **)(UDPInterfaceClass *))(this->Socket + 4))(this); /*0x7b3181*/
    return 0; /*0x7b3184*/
  }
  else
  {
    v6 = *((_DWORD *)this + 64539); /*0x7b318d*/
    *(_WORD *)optval = 0; /*0x7b31a5*/
    v8 = 0; /*0x7b31ac*/
    setsockopt(v6, 0xFFFF, 128, optval, 4); /*0x7b31b3*/
    Socket::ConfigureBuffers((WinsockInterfaceClass *)this, 0xFFFFFFFF); /*0x7b31bc*/
    Debug::Log(); /*0x7b31c6*/
    return 1; /*0x7b31ce*/
  }
}



// ==== 0x007B31E0  UDPInterfaceClass::SetAddress  this=UDPInterfaceClass  sig=csp ====
char __thiscall UDPInterfaceClass_Destru::SetAddress(UDPInterfaceClass *this, u_short hostshort)
{
  int v4; // ecx
  int v5; // eax
  UDPInterfaceClass *v6; // edx
  SOCKET v7; // esi
  struct sockaddr name; // [esp+10h] [ebp-10h] BYREF

  if ( !hostshort ) /*0x7b31f0*/
    return 0; /*0x7b31fb*/
  v4 = *((_DWORD *)this + 64716); /*0x7b31fe*/
  v5 = 0; /*0x7b3204*/
  if ( v4 > 0 ) /*0x7b3208*/
  {
    v6 = this + 32356; /*0x7b320a*/
    while ( LOWORD(v6->Socket) != hostshort ) /*0x7b3213*/
    {
      ++v5; /*0x7b3219*/
      v6 = (UDPInterfaceClass *)((char *)v6 + 2); /*0x7b321a*/
      if ( v5 >= v4 ) /*0x7b321f*/
        goto LABEL_7; /*0x7b321f*/
    }
    return 0; /*0x7b3213*/
  }
LABEL_7:
  Debug::Log(); /*0x7b3221*/
  v7 = socket(2, 2, 0); /*0x7b3239*/
  if ( v7 == -1 ) /*0x7b323e*/
    return 0; /*0x7b3249*/
  Debug::Log(); /*0x7b3252*/
  name.sa_family = 2; /*0x7b325a*/
  *(_WORD *)name.sa_data = htons(hostshort); /*0x7b3269*/
  *(_DWORD *)&name.sa_data[2] = htonl(0); /*0x7b3275*/
  Debug::Log(); /*0x7b3285*/
  if ( bind(v7, &name, 16) == -1 ) /*0x7b329d*/
  {
    closesocket(v7); /*0x7b32a0*/
    Debug::Log(); /*0x7b32ab*/
    return 0; /*0x7b32bc*/
  }
  *((_WORD *)this + *((_DWORD *)this + 64716) + 129424) = hostshort; /*0x7b32c6*/
  *((_DWORD *)this + (*((_DWORD *)this + 64716))++ + 64704) = v7; /*0x7b32d6*/
  Socket::ConfigureBuffers((WinsockInterfaceClass *)this, v7); /*0x7b32ea*/
  Debug::Log(); /*0x7b32f4*/
  return 1; /*0x7b31f2*/
}



// ==== 0x007B3310  UDPInterfaceClass::CheckStatus  this=UDPInterfaceClass  sig=csp ====
void __thiscall UDPInterfaceClass::CheckStatus(UDPInterfaceClass *this, __int16 a2)
{
  int v3; // ecx
  int v4; // edi
  UDPInterfaceClass *i; // eax
  SOCKET *v6; // ebx
  int v7; // edx
  _WORD *v8; // ecx
  _DWORD *v9; // eax

  if ( a2 ) /*0x7b331c*/
  {
    v3 = *((_DWORD *)this + 64716); /*0x7b3322*/
    v4 = 0; /*0x7b3328*/
    if ( v3 > 0 ) /*0x7b332c*/
    {
      for ( i = this + 32356; LOWORD(i->Socket) != a2; i = (UDPInterfaceClass *)((char *)i + 2) ) /*0x7b3332*/
      {
        if ( ++v4 >= v3 ) /*0x7b3343*/
          return; /*0x7b3343*/
      }
      v6 = (SOCKET *)this + v4 + 64704; /*0x7b3352*/
      Debug::Log(); /*0x7b335f*/
      closesocket(*v6); /*0x7b336a*/
      if ( *v6 == *((_DWORD *)this + 64717) ) /*0x7b3379*/
        *((_DWORD *)this + 64717) = -1; /*0x7b337b*/
      v7 = v4; /*0x7b338b*/
      if ( v4 < *((_DWORD *)this + 64716) - 1 ) /*0x7b3390*/
      {
        v8 = (_WORD *)this + v4 + 129424; /*0x7b3392*/
        v9 = (_DWORD *)this + v4 + 64704; /*0x7b3399*/
        do /*0x7b33b7*/
        {
          ++v7; /*0x7b339e*/
          *v9 = v9[1]; /*0x7b339f*/
          *v8 = v8[1]; /*0x7b33a5*/
          ++v9; /*0x7b33ae*/
          ++v8; /*0x7b33b1*/
        }
        while ( v7 < *((_DWORD *)this + 64716) - 1 ); /*0x7b33b7*/
      }
      --*((_DWORD *)this + 64716); /*0x7b33c1*/
    }
  }
}



// ==== 0x007B33D0  UDPInterfaceClass::GetStatistics  this=UDPInterfaceClass  sig=csp ====
void __thiscall UDPInterfaceClass::GetStatistics(UDPInterfaceClass *this, unsigned __int16 a2)
{
  int v2; // esi
  int v3; // eax
  UDPInterfaceClass *v4; // edx

  if ( !a2 || a2 == *(_DWORD *)&hostshort || (v2 = *((_DWORD *)this + 64716), v3 = 0, v2 <= 0) ) /*0x7b33f6*/
  {
LABEL_7:
    *((_DWORD *)this + 64717) = -1; /*0x7b340b*/
  }
  else
  {
    v4 = this + 32356; /*0x7b33f8*/
    while ( LOWORD(v4->Socket) != a2 ) /*0x7b3401*/
    {
      ++v3; /*0x7b3403*/
      v4 = (UDPInterfaceClass *)((char *)v4 + 2); /*0x7b3404*/
      if ( v3 >= v2 ) /*0x7b3409*/
        goto LABEL_7; /*0x7b3409*/
    }
    *((_DWORD *)this + 64717) = *((_DWORD *)this + v3 + 64704); /*0x7b3422*/
  }
}



// ==== 0x007B3430  UDPInterfaceClass::GetAddress  this=UDPInterfaceClass  sig=csp ====
char __thiscall UDPInterfaceClass_Destru::GetAddress(UDPInterfaceClass *this)
{
  if ( !(unsigned __int8)WinsockInterface::Init((WinsockInterface *)this) ) /*0x7b3433*/
    return 0; /*0x7b344a*/
  *((_DWORD *)this + 64716) = 0; /*0x7b343c*/
  return 1; /*0x7b3448*/
}



// ==== 0x007B3450  UDPInterfaceClass::Bind  this=UDPInterfaceClass  sig=csp ====
char __thiscall UDPInterfaceClass_Destru::Bind(UDPInterfaceClass *this, int a2)
{
  char result; // al
  struct hostent *v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  char *i; // eax
  _DWORD *v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  SOCKET v15; // [esp-10h] [ebp-B8h]
  char **h_addr_list; // [esp+Ch] [ebp-9Ch]
  char optval[4]; // [esp+10h] [ebp-98h] BYREF
  int v18; // [esp+14h] [ebp-94h]
  struct sockaddr v19; // [esp+18h] [ebp-90h] BYREF
  char name[128]; // [esp+28h] [ebp-80h] BYREF

  if ( *((_BYTE *)this + 258152) /*0x7b346b*/
    || (result = (*(int (__thiscall **)(UDPInterfaceClass *))(this->Socket + 100))(this)) != 0 )
  {
    (*(void (__thiscall **)(UDPInterfaceClass *, u_short))(this->Socket + 92))(this, hostshort); /*0x7b3483*/
    Debug::Log(); /*0x7b348b*/
    if ( gethostname(name, 128) ) /*0x7b349d*/
      Debug::Log(); /*0x7b34b0*/
    Debug::Log(); /*0x7b34bd*/
    v4 = gethostbyname(name); /*0x7b34cf*/
    if ( !v4 ) /*0x7b34d3*/
    {
      WSAGetLastError(); /*0x7b34d5*/
      Debug::Log(); /*0x7b34e0*/
    }
    while ( *((_DWORD *)this + 64856) ) /*0x7b34e8*/
    {
      __3_YAXPAX_Z(**((void ***)this + 64853)); /*0x7b34fb*/
      v5 = *((_DWORD *)this + 64856); /*0x7b3500*/
      if ( v5 > 0 ) /*0x7b350b*/
      {
        v6 = v5 - 1; /*0x7b350d*/
        v7 = 0; /*0x7b3510*/
        for ( *((_DWORD *)this + 64856) = v6; /*0x7b351a*/
              v7 < *((_DWORD *)this + 64856);
              *(_DWORD *)(*((_DWORD *)this + 64853) + 4 * v7 - 4) = *(_DWORD *)(*((_DWORD *)this + 64853) + 4 * v7) )
        {
          ++v7; /*0x7b3522*/
        }
      }
    }
    h_addr_list = v4->h_addr_list; /*0x7b3541*/
    for ( i = *h_addr_list; *h_addr_list; i = *h_addr_list ) /*0x7b3545*/
    {
      v18 = *(_DWORD *)i; /*0x7b3565*/
      ++h_addr_list; /*0x7b3569*/
      Debug::Log(); /*0x7b3587*/
      v9 = (_DWORD *)__2_YAPAXI_Z(4u); /*0x7b3593*/
      *v9 = v18; /*0x7b3598*/
      v10 = *((_DWORD *)this + 64854); /*0x7b359b*/
      if ( *((_DWORD *)this + 64856) >= v10 ) /*0x7b35a1*/
      {
        if ( !*((_BYTE *)this + 259421) && v10 ) /*0x7b35ac*/
          continue; /*0x7b35ac*/
        v11 = *((_DWORD *)this + 64857); /*0x7b35ae*/
        if ( v11 <= 0 /*0x7b35be*/
          || !(*(unsigned __int8 (__thiscall **)(UDPInterfaceClass *, int, _DWORD))(*((_DWORD *)this + 64852) + 8))(
                this + 32426,
                v10 + v11,
                0) )
        {
          continue; /*0x7b35be*/
        }
      }
      v12 = *((_DWORD *)this + 64856); /*0x7b35c5*/
      v13 = *((_DWORD *)this + 64853); /*0x7b35c8*/
      *((_DWORD *)this + 64856) = v12 + 1; /*0x7b35ce*/
      *(_DWORD *)(v13 + 4 * v12) = v9; /*0x7b35d1*/
    }
    Debug::Log(); /*0x7b35e9*/
    v14 = socket(2, 2, 0); /*0x7b35f8*/
    *((_DWORD *)this + 64540) = v14; /*0x7b3600*/
    if ( v14 == -1 ) /*0x7b3606*/
    {
      return 0; /*0x7b3609*/
    }
    else
    {
      v19.sa_family = 2; /*0x7b361c*/
      *(_WORD *)v19.sa_data = htons(dword_841F38); /*0x7b362a*/
      *(_DWORD *)&v19.sa_data[2] = htonl(0); /*0x7b3639*/
      Debug::Log(); /*0x7b363d*/
      if ( bind(*((_DWORD *)this + 64540), &v19, 16) == -1 ) /*0x7b365b*/
      {
        (*(void (__thiscall **)(UDPInterfaceClass *))(this->Socket + 4))(this); /*0x7b3661*/
        return 0; /*0x7b3665*/
      }
      else
      {
        v15 = *((_DWORD *)this + 64540); /*0x7b3688*/
        memset(optval, 0, sizeof(optval)); /*0x7b3689*/
        setsockopt(v15, 0xFFFF, 128, optval, 4); /*0x7b3693*/
        Socket::ConfigureBuffers((WinsockInterfaceClass *)this, *((_DWORD *)this + 64540)); /*0x7b36a1*/
        Debug::Log(); /*0x7b36ab*/
        return 1; /*0x7b36b3*/
      }
    }
  }
  return result; /*0x7b346d*/
}



// ==== 0x007B36C0  UDPInterfaceClass::ddtor  this=UDPInterfaceClass  sig=csp ====
__int16 __thiscall UDPInterfaceClass_Destru::ddtor(
        UDPInterfaceClass *this,
        const void *a2,
        unsigned int a3,
        _BYTE *a4,
        unsigned int a5,
        int a6,
        char a7,
        __int16 a8)
{
  if ( a4 && Network::IsBroadcastAddr((Network *)a4) ) /*0x7b36ce*/
    return (*(__int16 (__thiscall **)(UDPInterfaceClass *, const void *, unsigned int, int))(this->Socket + 16))( /*0x7b36ea*/
             this,
             a2,
             a3,
             a6);
  else
    return AudioQueue::WriteBuffer((WinsockInterfaceClass *)this, a2, a3, a4, a5, a6, a7, a8); /*0x7b3713*/
}



// ==== 0x007B3720  UDPInterfaceClass::Connect  this=UDPInterfaceClass  sig=csp ====
int __userpurge UDPInterfaceClass_Destru::Connect@<eax>(
        UDPInterfaceClass *this,
        int a2@<edi>,
        const void *a3,
        unsigned int a4,
        char a5,
        char a6)
{
  int v6; // ecx
  int v7; // ebx
  int result; // eax
  _BYTE *v9; // ebp
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  WPARAM v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  UINT v20; // eax
  WPARAM v21; // [esp-8h] [ebp-20h]
  _WORD *v23; // [esp+10h] [ebp-8h]
  int v24; // [esp+14h] [ebp-4h]

  v7 = v6; /*0x7b3724*/
  v24 = 0; /*0x7b3726*/
  result = *(_DWORD *)(v6 + 258888); /*0x7b372e*/
  if ( result > 0 ) /*0x7b3736*/
  {
    v23 = (_WORD *)(v6 + 258896); /*0x7b3745*/
    do /*0x7b3875*/
    {
      v9 = AudioQueue::AllocBuffer((AudioQueue *)v7, a4); /*0x7b3759*/
      qmemcpy(v9 + 32, this, (unsigned int)a3); /*0x7b376a*/
      *((_DWORD *)v9 + 4) = a3; /*0x7b3773*/
      v9[20] = 1; /*0x7b377a*/
      *(_DWORD *)v9 = 0; /*0x7b377e*/
      v10 = v24; /*0x7b3780*/
      *((_DWORD *)v9 + 1) = 0; /*0x7b3784*/
      *((_DWORD *)v9 + 2) = 0; /*0x7b3787*/
      *((_DWORD *)v9 + 3) = 0; /*0x7b378a*/
      *((_DWORD *)v9 + 1) = **(_DWORD **)(*(_DWORD *)(v7 + 258876) + 4 * v24); /*0x7b379c*/
      *((_WORD *)v9 + 13) = *v23; /*0x7b37a2*/
      (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v7 + 84))(v7, v9, a2); /*0x7b37aa*/
      if ( a5 ) /*0x7b37b3*/
      {
        v11 = *(_DWORD *)(v7 + 64); /*0x7b37b5*/
        if ( *(_DWORD *)(v7 + 72) < v11 /*0x7b37dd*/
          || (*(_BYTE *)(v7 + 69) || !v11)
          && (v12 = *(_DWORD *)(v7 + 76), v12 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v7 + 56) + 8))(v7 + 56, v11 + v12, 0) )
        {
          v13 = *(_DWORD *)(v7 + 72); /*0x7b37e4*/
          v14 = *(_DWORD *)(v7 + 60); /*0x7b37e7*/
          *(_DWORD *)(v7 + 72) = v13 + 1; /*0x7b37ed*/
          *(_DWORD *)(v14 + 4 * v13) = v9; /*0x7b37f0*/
        }
        v15 = *(_DWORD *)(v7 + 258160); /*0x7b37f3*/
      }
      else
      {
        v16 = *(_DWORD *)(v7 + 40); /*0x7b37fb*/
        if ( *(_DWORD *)(v7 + 48) < v16 /*0x7b3823*/
          || (*(_BYTE *)(v7 + 45) || !v16)
          && (v17 = *(_DWORD *)(v7 + 52), v17 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v7 + 32) + 8))(v7 + 32, v16 + v17, 0) )
        {
          v18 = *(_DWORD *)(v7 + 48); /*0x7b382a*/
          v19 = *(_DWORD *)(v7 + 36); /*0x7b382d*/
          *(_DWORD *)(v7 + 48) = v18 + 1; /*0x7b3833*/
          *(_DWORD *)(v19 + 4 * v18) = v9; /*0x7b3836*/
        }
        v15 = *(_DWORD *)(v7 + 258156); /*0x7b3839*/
      }
      a2 = 2; /*0x7b3841*/
      v21 = v15; /*0x7b3845*/
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 56))(v7); /*0x7b3848*/
      SendMessageA(g_hWnd, v20, v21, 0); /*0x7b3852*/
      MessageLoop(); /*0x7b3858*/
      result = *(_DWORD *)(v7 + 258888); /*0x7b3861*/
      ++v24; /*0x7b386d*/
      ++v23; /*0x7b3871*/
    }
    while ( v10 + 1 < result ); /*0x7b3875*/
  }
  return result; /*0x7b387e*/
}



// ==== 0x007B3890  UDPInterfaceClass::Receive  this=UDPInterfaceClass  sig=csp ====
int __thiscall UDPInterfaceClass_Destru::Receive(UDPInterfaceClass *this)
{
  int v2; // ebx
  AnimClass **v3; // edi
  HWND v4; // eax
  int result; // eax
  int v6; // [esp+0h] [ebp-Ch]

  if ( IPXInterfaceClass::Receive((WinsockInterfaceClass *)this) && (v2 = 0, *((int *)this + 64716) > 0) ) /*0x7b38a8*/
  {
    v3 = (AnimClass **)(this + 32352); /*0x7b38aa*/
    while ( 1 ) /*0x7b38b8*/
    {
      v4 = (HWND)(*(int (__thiscall **)(UDPInterfaceClass *, int))(this->Socket + 56))(this, -1); /*0x7b38b8*/
      if ( WSAAsyncSelect(*v3, (SOCKET)g_hWnd, v4, 3u, v6) == (AnimClass *)-1 ) /*0x7b38ce*/
        break; /*0x7b38ce*/
      ++v2; /*0x7b38d6*/
      ++v3; /*0x7b38d7*/
      if ( v2 >= *((_DWORD *)this + 64716) ) /*0x7b38dc*/
        goto LABEL_6; /*0x7b38dc*/
    }
    result = Debug::Log(); /*0x7b38ee*/
    LOBYTE(result) = 0; /*0x7b38f6*/
  }
  else
  {
LABEL_6:
    result = (int)MessageLoop(); /*0x7b38de*/
    LOBYTE(result) = 1; /*0x7b38e5*/
  }
  return result; /*0x7b38e3*/
}



// ==== 0x007B3900  UDPInterfaceClass::CheckStatus  this=UDPInterfaceClass  sig=csp ====
int __thiscall UDPInterfaceClass_Destru::CheckStatus(UDPInterfaceClass *this)
{
  NetworkClass::UnregisterAsync((WinsockInterfaceClass *)this); /*0x7b3903*/
  return (*(int (__thiscall **)(UDPInterfaceClass *))(this->Socket + 112))(this); /*0x7b390f*/
}



// ==== 0x007B3920  UDPInterfaceClass::Reset  this=UDPInterfaceClass  sig=csp ====
void __thiscall UDPInterfaceClass_Destru::Reset(UDPInterfaceClass *this, _DWORD *a2, __int16 a3)
{
  int v4; // edi
  __int16 v5; // bp
  int v6; // eax
  _DWORD *v7; // edx
  _WORD *v8; // ecx

  v4 = *((_DWORD *)this + 64858); /*0x7b3926*/
  if ( v4 < 16 ) /*0x7b392f*/
  {
    v5 = a3; /*0x7b3939*/
    v6 = 0; /*0x7b393d*/
    if ( v4 > 0 ) /*0x7b3941*/
    {
      v7 = (_DWORD *)this + 64859; /*0x7b3943*/
      v8 = (_WORD *)this + 129750; /*0x7b3949*/
      do /*0x7b3967*/
      {
        if ( v5 == *v8 ) /*0x7b3952*/
        {
          if ( *a2 == *v7 ) /*0x7b3958*/
            return; /*0x7b3958*/
          v5 = a3; /*0x7b395a*/
        }
        ++v6; /*0x7b395e*/
        ++v8; /*0x7b395f*/
        ++v7; /*0x7b3962*/
      }
      while ( v6 < v4 ); /*0x7b3967*/
    }
    Debug::Log(); /*0x7b398d*/
    *((_DWORD *)this + *((_DWORD *)this + 64858) + 64859) = *a2; /*0x7b399d*/
    *((_WORD *)this + (*((_DWORD *)this + 64858))++ + 129750) = v5; /*0x7b39aa*/
  }
}



// ==== 0x007B39D0  ObjectClass::method_7B39D0  this=ObjectClass  sig=csp ====
char __thiscall sub_7B39D0(ObjectClass *this, _DWORD *a2, __int16 a3)
{
  int v3; // esi
  int v4; // eax
  ObjectClass *v5; // edx
  _WORD *i; // ecx

  v3 = *((_DWORD *)this + 64858); /*0x7b39d3*/
  v4 = 0; /*0x7b39d9*/
  if ( v3 <= 0 ) /*0x7b39de*/
    return 1; /*0x7b3a0b*/
  v5 = (ObjectClass *)((char *)this + 259436); /*0x7b39e9*/
  for ( i = (_WORD *)((char *)this + 259500); a3 != *i || (void *)*a2 != v5->AbstractClass; ++i ) /*0x7b39ef*/
  {
    ++v4; /*0x7b3a00*/
    v5 = (ObjectClass *)((char *)v5 + 4); /*0x7b3a04*/
    if ( v4 >= v3 ) /*0x7b3a09*/
      return 1; /*0x7b3a09*/
  }
  return 0; /*0x7b3a0b*/
}



// ==== 0x007B3A20  UDPInterfaceClass::Flush  this=UDPInterfaceClass  sig=csp ====
int __thiscall UDPInterfaceClass::Flush(UDPInterfaceClass *this)
{
  int v1; // esi
  int v3; // ebx
  int result; // eax
  AnimClass **v5; // esi
  int v6; // [esp-4h] [ebp-Ch]

  v3 = 0; /*0x7b3a24*/
  result = *((_DWORD *)this + 64716); /*0x7b3a26*/
  if ( result <= 0 ) /*0x7b3a2e*/
  {
    *((_DWORD *)this + 64716) = 0; /*0x7b3a88*/
    *((_DWORD *)this + 64717) = -1; /*0x7b3a92*/
  }
  else
  {
    v6 = v1; /*0x7b3a30*/
    v5 = (AnimClass **)(this + 32352); /*0x7b3a31*/
    do /*0x7b3a6e*/
    {
      Debug::Log(); /*0x7b3a3f*/
      WSAAsyncSelect(*v5, (SOCKET)g_hWnd, 0, 0, v6); /*0x7b3a55*/
      closesocket((SOCKET)*v5); /*0x7b3a5d*/
      result = *((_DWORD *)this + 64716); /*0x7b3a62*/
      ++v3; /*0x7b3a68*/
      ++v5; /*0x7b3a69*/
    }
    while ( v3 < result ); /*0x7b3a6e*/
    *((_DWORD *)this + 64716) = 0; /*0x7b3a70*/
    *((_DWORD *)this + 64717) = -1; /*0x7b3a7a*/
  }
  return result; /*0x7b3a85*/
}



// ==== 0x007B3AA0  UDPInterfaceClass::ProcessSocketIO  this=UDPInterfaceClass  sig=csp ====
int __thiscall UDPInterfaceClass::ProcessSocketIO(UDPInterfaceClass *this, int a2, SOCKET s, int a4, unsigned int a5)
{
  SOCKET v6; // ebx
  int v7; // edx
  int v8; // eax
  UDPInterfaceClass *v9; // ecx
  int v11; // edi
  UDPInterfaceClass *v12; // esi
  _BYTE *v13; // ebx
  u_short v14; // ax
  __int16 v15; // ax
  int v16; // edx
  int v17; // ecx
  _DWORD *v18; // eax
  _WORD *v19; // edi
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // esi
  int v28; // ecx
  int v29; // eax
  _DWORD **v30; // edx
  int v31; // edi
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  UDPInterfaceClass *v35; // ebp
  int v36; // eax
  int Socket; // eax
  int v38; // edx
  char v39; // [esp+13h] [ebp-1Dh]
  int fromlen; // [esp+14h] [ebp-1Ch] BYREF
  int v41; // [esp+18h] [ebp-18h]
  struct sockaddr netshort; // [esp+20h] [ebp-10h] BYREF
  SOCKET sa; // [esp+38h] [ebp+8h]
  __int16 v44; // [esp+3Ch] [ebp+Ch]
  unsigned int v45; // [esp+40h] [ebp+10h]

  v39 = 0; /*0x7b3ab2*/
  if ( s == 1140 ) /*0x7b3ab7*/
  {
    v6 = *((_DWORD *)this + 64539); /*0x7b3ab9*/
    sa = v6; /*0x7b3ac5*/
    if ( a4 != v6 ) /*0x7b3ac9*/
    {
      v7 = *((_DWORD *)this + 64716); /*0x7b3acb*/
      v8 = 0; /*0x7b3ad1*/
      if ( v7 > 0 ) /*0x7b3ad5*/
      {
        v9 = this + 32352; /*0x7b3ad7*/
        while ( v9->Socket != a4 ) /*0x7b3adf*/
        {
          ++v8; /*0x7b3ae1*/
          v9 = (UDPInterfaceClass *)((char *)v9 + 4); /*0x7b3ae2*/
          if ( v8 >= v7 ) /*0x7b3ae7*/
            goto LABEL_11; /*0x7b3ae7*/
        }
        v6 = *((_DWORD *)this + v8 + 64704); /*0x7b3aeb*/
        sa = v6; /*0x7b3af2*/
      }
    }
  }
  else
  {
    if ( s != 1141 ) /*0x7b3afd*/
      return 1; /*0x7b40dd*/
    v6 = *((_DWORD *)this + 64540); /*0x7b3b03*/
    v39 = 1; /*0x7b3b09*/
    sa = v6; /*0x7b3b0e*/
  }
LABEL_11:
  if ( (unsigned __int16)a5 == 1 ) /*0x7b3b1e*/
  {
    if ( HIWORD(a5) ) /*0x7b3ebb*/
    {
LABEL_22:
      Debug::Log(); /*0x7b3b8b*/
      (*(void (__thiscall **)(UDPInterfaceClass *, SOCKET))(this->Socket + 36))(this, v6); /*0x7b3b99*/
      return 0; /*0x7b3ba5*/
    }
    fromlen = 16; /*0x7b3ee4*/
    v26 = recvfrom(v6, (char *)this + 258164, 640, 0, &netshort, &fromlen); /*0x7b3eec*/
    v27 = v26; /*0x7b3ef1*/
    if ( v26 == -1 ) /*0x7b3ef6*/
    {
      (*(void (__thiscall **)(UDPInterfaceClass *, SOCKET))(this->Socket + 36))(this, v6); /*0x7b3efe*/
      return 0; /*0x7b3f0a*/
    }
    if ( v26 ) /*0x7b3f0f*/
    {
      if ( !v39 && !byte_A8DBA0 ) /*0x7b3f24*/
      {
        v28 = *((_DWORD *)this + 64856); /*0x7b3f26*/
        v29 = 0; /*0x7b3f2c*/
        if ( v28 > 0 ) /*0x7b3f30*/
        {
          v30 = (_DWORD **)*((_DWORD *)this + 64853); /*0x7b3f32*/
          while ( **v30 != *(_DWORD *)&netshort.sa_data[2] ) /*0x7b3f42*/
          {
            ++v29; /*0x7b3f48*/
            ++v30; /*0x7b3f49*/
            if ( v29 >= v28 ) /*0x7b3f4e*/
              goto LABEL_71; /*0x7b3f4e*/
          }
          return 0; /*0x7b3f42*/
        }
      }
LABEL_71:
      v31 = Network_Process_7B2730(); /*0x7b3f50*/
      if ( v31 > 0 && Random::Range(&Randomizer_Global, 0, 99) <= v31 ) /*0x7b3f6b*/
        return 0; /*0x7b3f76*/
      v13 = IPXInterfaceClass::processPacket((IPXInterfaceClass *)this); /*0x7b3f80*/
      *((_DWORD *)v13 + 4) = v27 - 4; /*0x7b3f8f*/
      *((_DWORD *)v13 + 7) = *((_DWORD *)this + 64541); /*0x7b3f98*/
      v13[23] = v39; /*0x7b3fa0*/
      v13[24] = 0; /*0x7b3fa6*/
      qmemcpy(v13 + 32, this + 32271, v27 - 4); /*0x7b3fab*/
      if ( !(*(unsigned __int8 (__thiscall **)(UDPInterfaceClass *, _BYTE *))(this->Socket + 88))(this, v13) ) /*0x7b3fb9*/
      {
        *((_DWORD *)v13 + 1) = *(_DWORD *)&netshort.sa_data[2]; /*0x7b3fc4*/
        ntohs(*(u_short *)netshort.sa_data); /*0x7b3fd4*/
        Debug::Log(); /*0x7b4000*/
        if ( !byte_B78124 ) /*0x7b400f*/
          byte_B78124 = 1; /*0x7b4011*/
        if ( v13[22] ) /*0x7b4018*/
        {
          __3_YAXPAX_Z(v13); /*0x7b4024*/
          return 0; /*0x7b4035*/
        }
LABEL_60:
        v13[21] = 0; /*0x7b3e9e*/
        --*((_DWORD *)this + 64536); /*0x7b3eaa*/
        return 0; /*0x7b3eb8*/
      }
      *(_DWORD *)v13 = 0; /*0x7b4041*/
      *((_DWORD *)v13 + 1) = 0; /*0x7b4043*/
      *((_DWORD *)v13 + 2) = 0; /*0x7b4046*/
      *((_DWORD *)v13 + 3) = 0; /*0x7b4049*/
      v32 = htonl(0x7F000001u); /*0x7b404c*/
      if ( *(_DWORD *)&netshort.sa_data[2] == v32 ) /*0x7b4055*/
      {
        *((_WORD *)v13 + 13) = 0; /*0x7b4057*/
        *(NetworkID *)v13 = qword_A8DBB0; /*0x7b4065*/
        *((_DWORD *)v13 + 2) = dword_A8DBB8; /*0x7b4075*/
      }
      else
      {
        *((_WORD *)v13 + 13) = ntohs(*(u_short *)netshort.sa_data); /*0x7b4084*/
        *((_DWORD *)v13 + 1) = *(_DWORD *)&netshort.sa_data[2]; /*0x7b408c*/
      }
      v33 = this->Initialized; /*0x7b408f*/
      v34 = this->BoundPort; /*0x7b4092*/
      v35 = this + 1; /*0x7b4095*/
      if ( v34 < v33 /*0x7b40b8*/
        || (v35[1].__pad_5[0] || !v33)
        && (v36 = *(_DWORD *)&v35[2].Initialized, v36 > 0)
        && (*(unsigned __int8 (__thiscall **)(UDPInterfaceClass *, int, _DWORD))(v35->Socket + 8))(v35, v33 + v36, 0) )
      {
        Socket = v35[2].Socket; /*0x7b40bf*/
        v38 = *(_DWORD *)&v35->Initialized; /*0x7b40c2*/
        v35[2].Socket = Socket + 1; /*0x7b40c8*/
        *(_DWORD *)(v38 + 4 * Socket) = v13; /*0x7b40cb*/
      }
    }
    return 0; /*0x7b40d7*/
  }
  if ( (unsigned __int16)a5 != 2 ) /*0x7b3b25*/
    return 0; /*0x7b3b30*/
  if ( *((_DWORD *)this + 64717) != -1 ) /*0x7b3b3a*/
  {
    v11 = 0; /*0x7b3b42*/
    if ( *((int *)this + 64716) > 0 ) /*0x7b3b46*/
    {
      v12 = this + 32352; /*0x7b3b48*/
      do /*0x7b3b76*/
      {
        if ( v12->Socket == *((_DWORD *)this + 64717) ) /*0x7b3b58*/
        {
          v6 = *((_DWORD *)this + 64717); /*0x7b3b5a*/
          Debug::Log(); /*0x7b3b62*/
        }
        ++v11; /*0x7b3b70*/
        v12 = (UDPInterfaceClass *)((char *)v12 + 4); /*0x7b3b71*/
      }
      while ( v11 < *((_DWORD *)this + 64716) ); /*0x7b3b76*/
      sa = v6; /*0x7b3b78*/
    }
  }
  if ( HIWORD(a5) ) /*0x7b3b80*/
    goto LABEL_22; /*0x7b3b83*/
  if ( v39 ) /*0x7b3bae*/
  {
    if ( !*((_DWORD *)this + 18) ) /*0x7b3bb0*/
    {
LABEL_25:
      Debug::Log(); /*0x7b3bb7*/
      return 0; /*0x7b3bcd*/
    }
    v13 = (_BYTE *)**((_DWORD **)this + 15); /*0x7b3bd3*/
  }
  else
  {
    if ( !*((_DWORD *)this + 12) ) /*0x7b3bdc*/
      goto LABEL_25; /*0x7b3bdc*/
    v13 = (_BYTE *)**((_DWORD **)this + 9); /*0x7b3bfa*/
  }
  v45 = (unsigned int)v13; /*0x7b3bff*/
  *(_DWORD *)&netshort.sa_data[2] = *((_DWORD *)v13 + 1); /*0x7b3c03*/
  *(_WORD *)netshort.sa_data = htons(*((_WORD *)v13 + 13)); /*0x7b3c11*/
  netshort.sa_family = 2; /*0x7b3c1c*/
  if ( v39 ) /*0x7b3c23*/
  {
    if ( *(_DWORD *)&netshort.sa_data[2] != htonl(0x7F000001u) ) /*0x7b3c33*/
    {
      *(_WORD *)netshort.sa_data = htons(dword_841F34); /*0x7b3c4b*/
      *(_DWORD *)&netshort.sa_data[2] = htonl(0x7F000001u); /*0x7b3c55*/
    }
  }
  else
  {
    v14 = *((_WORD *)v13 + 13); /*0x7b3c5b*/
    if ( !v14 ) /*0x7b3c62*/
      v14 = hostshort; /*0x7b3c64*/
    *(_WORD *)netshort.sa_data = htons(v14); /*0x7b3c75*/
    if ( *((_DWORD *)v13 + 1) == qword_A8DBB0.NetworkID_field_0x04 /*0x7b3c9a*/
      && (!dword_A8DA84 || (unsigned __int8)GUID::Compare(qword_A8DBB0.__pad_0, *dword_A8DA78 + 40)) )
    {
      *(_DWORD *)&netshort.sa_data[2] = htonl(0x7F000001u); /*0x7b3cb4*/
      *(_WORD *)netshort.sa_data = htons(dword_841F3C); /*0x7b3cbe*/
    }
  }
  v41 = *(_DWORD *)&netshort.sa_data[2]; /*0x7b3ccc*/
  v15 = ntohs(*(u_short *)netshort.sa_data); /*0x7b3cd0*/
  v16 = *((_DWORD *)this + 64858); /*0x7b3cd5*/
  v17 = 0; /*0x7b3cdb*/
  v44 = v15; /*0x7b3cdf*/
  if ( v16 <= 0 ) /*0x7b3ce3*/
  {
LABEL_43:
    ntohs(*(u_short *)netshort.sa_data); /*0x7b3d18*/
    Debug::Log(); /*0x7b3d54*/
    if ( sendto(sa, v13 + 28, *((_DWORD *)v13 + 4) + 4, 0, &netshort, 16) == -1 && WSAGetLastError() != 10035 ) /*0x7b3d89*/
    {
      WSAGetLastError(); /*0x7b3d8b*/
      Debug::Log(); /*0x7b3d96*/
      (*(void (__thiscall **)(UDPInterfaceClass *, SOCKET))(this->Socket + 36))(this, sa); /*0x7b3da4*/
      return 0; /*0x7b3db0*/
    }
  }
  else
  {
    v18 = (_DWORD *)this + 64859; /*0x7b3ce5*/
    v19 = (_WORD *)this + 129750; /*0x7b3ceb*/
    while ( v44 != *v19 || v41 != *v18 ) /*0x7b3d03*/
    {
      v13 = (_BYTE *)v45; /*0x7b3d09*/
      ++v17; /*0x7b3d0d*/
      ++v19; /*0x7b3d0e*/
      ++v18; /*0x7b3d11*/
      if ( v17 >= v16 ) /*0x7b3d16*/
        goto LABEL_43; /*0x7b3d16*/
    }
    ntohs(*(u_short *)netshort.sa_data); /*0x7b3db8*/
    Debug::Log(); /*0x7b3def*/
    v13 = (_BYTE *)v45; /*0x7b3df4*/
  }
  if ( !v39 ) /*0x7b3e01*/
  {
    v23 = *((_DWORD *)this + 12); /*0x7b3e5f*/
    if ( v23 > 0 ) /*0x7b3e64*/
    {
      v24 = v23 - 1; /*0x7b3e66*/
      v25 = 0; /*0x7b3e67*/
      for ( *((_DWORD *)this + 12) = v24; /*0x7b3e6e*/
            v25 < *((_DWORD *)this + 12);
            *(_DWORD *)(*((_DWORD *)this + 9) + 4 * v25 - 4) = *(_DWORD *)(*((_DWORD *)this + 9) + 4 * v25) )
      {
        ++v25; /*0x7b3e73*/
      }
    }
    if ( v13[22] ) /*0x7b3e82*/
    {
      __3_YAXPAX_Z(v13); /*0x7b3e8a*/
      return 0; /*0x7b3e9b*/
    }
    goto LABEL_60; /*0x7b3e87*/
  }
  v20 = *((_DWORD *)this + 18); /*0x7b3e03*/
  if ( v20 > 0 ) /*0x7b3e08*/
  {
    v21 = v20 - 1; /*0x7b3e0a*/
    v22 = 0; /*0x7b3e0b*/
    for ( *((_DWORD *)this + 18) = v21; /*0x7b3e12*/
          v22 < *((_DWORD *)this + 18);
          *(_DWORD *)(*((_DWORD *)this + 15) + 4 * v22 - 4) = *(_DWORD *)(*((_DWORD *)this + 15) + 4 * v22) )
    {
      ++v22; /*0x7b3e17*/
    }
  }
  if ( v13[22] ) /*0x7b3e26*/
  {
    __3_YAXPAX_Z(v13); /*0x7b3e2e*/
  }
  else
  {
    v13[21] = 0; /*0x7b3e42*/
    --*((_DWORD *)this + 64537); /*0x7b3e4e*/
  }
  return 0; /*0x7b3b27*/
}



// ==== 0x007B40F0  UDPInterfaceClass::COMStub_Ret2  this=UDPInterfaceClass  sig=csp ====
int UDPInterfaceClass_Destru::COMStub_Ret2(UDPInterfaceClass *this)
{
  return 2; /*0x7b40f5*/
}



// ==== 0x007B4100  UDPInterfaceClass::GetStatistics  this=UDPInterfaceClass  sig=csp ====
int __thiscall UDPInterfaceClass_Destru::GetStatistics(UDPInterfaceClass *this, int a2)
{
  if ( a2 == *((_DWORD *)this + 64539) || a2 == -1 )
    return 1140; /*0x7b412e*/
  else
    return a2 != *((_DWORD *)this + 64540) ? 0 : 0x475;
}



// ==== 0x007B4140  UDPInterfaceClass::COMStub  this=UDPInterfaceClass  sig=csp ====
int __thiscall UDPInterfaceClass_Destru::COMStub(UDPInterfaceClass *this)
{
  return *((_DWORD *)this + 64856); /*0x7b4146*/
}



// ==== 0x007B4150  UDPInterfaceClass::Connect  this=UDPInterfaceClass  sig=csp ====
int __thiscall UDPInterfaceClass::Connect(UDPInterfaceClass *this, int a2)
{
  return *(_DWORD *)(*((_DWORD *)this + 64853) + 4 * a2); /*0x7b415d*/
}



// ==== 0x007B4160  UDPInterfaceClass::Receive  this=UDPInterfaceClass  sig=csp ====
__int16 __thiscall UDPInterfaceClass::Receive(UDPInterfaceClass *this)
{
  return *((_WORD *)this + 129406); /*0x7b4167*/
}



// ==== 0x007B4170  UDPInterfaceClass::Destructor  this=UDPInterfaceClass  sig=csp ====
void ***__thiscall UDPInterfaceClass::Destructor(UDPInterfaceClass *this, char a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  void *v9; // eax
  void *v10; // eax

  this->Socket = (int)&UDPInterfaceClass::`vftable'; /*0x7b4176*/
  while ( *((_DWORD *)this + 64722) ) /*0x7b417c*/
  {
    __3_YAXPAX_Z(**((void ***)this + 64719)); /*0x7b418f*/
    v3 = *((_DWORD *)this + 64722); /*0x7b4194*/
    if ( v3 > 0 ) /*0x7b419f*/
    {
      v4 = v3 - 1; /*0x7b41a1*/
      v5 = 0; /*0x7b41a4*/
      for ( *((_DWORD *)this + 64722) = v4; /*0x7b41ae*/
            v5 < *((_DWORD *)this + 64722);
            *(_DWORD *)(*((_DWORD *)this + 64719) + 4 * v5 - 4) = *(_DWORD *)(*((_DWORD *)this + 64719) + 4 * v5) )
      {
        ++v5; /*0x7b41b6*/
      }
    }
  }
  while ( *((_DWORD *)this + 64856) ) /*0x7b41d0*/
  {
    __3_YAXPAX_Z(**((void ***)this + 64853)); /*0x7b41e1*/
    v6 = *((_DWORD *)this + 64856); /*0x7b41e6*/
    if ( v6 > 0 ) /*0x7b41f1*/
    {
      v7 = v6 - 1; /*0x7b41f3*/
      v8 = 0; /*0x7b41f6*/
      for ( *((_DWORD *)this + 64856) = v7; /*0x7b4200*/
            v8 < *((_DWORD *)this + 64856);
            *(_DWORD *)(*((_DWORD *)this + 64853) + 4 * v8 - 4) = *(_DWORD *)(*((_DWORD *)this + 64853) + 4 * v8) )
      {
        ++v8; /*0x7b4208*/
      }
    }
  }
  UDPInterfaceClass::connect(this); /*0x7b4224*/
  v9 = (void *)*((_DWORD *)this + 64853); /*0x7b4229*/
  *((_DWORD *)this + 64852) = &VectorClass<unsigned char *>::`vftable'; /*0x7b422f*/
  if ( v9 && *((_BYTE *)this + 259421) ) /*0x7b423d*/
  {
    __3_YAXPAX_Z(v9); /*0x7b4246*/
    *((_DWORD *)this + 64853) = 0; /*0x7b424e*/
  }
  *((_BYTE *)this + 259421) = 0; /*0x7b4254*/
  *((_DWORD *)this + 64854) = 0; /*0x7b425a*/
  v10 = (void *)*((_DWORD *)this + 64719); /*0x7b4260*/
  *((_DWORD *)this + 64718) = &VectorClass<unsigned char *>::`vftable'; /*0x7b4266*/
  if ( v10 && *((_BYTE *)this + 258885) ) /*0x7b4274*/
  {
    __3_YAXPAX_Z(v10); /*0x7b427d*/
    *((_DWORD *)this + 64719) = 0; /*0x7b4285*/
  }
  *((_BYTE *)this + 258885) = 0; /*0x7b428d*/
  *((_DWORD *)this + 64720) = 0; /*0x7b4293*/
  WinsockInterfaceClass::WinsockInterfaceClass((int)this); /*0x7b4299*/
  if ( (a2 & 1) != 0 ) /*0x7b42a3*/
    __3_YAXPAX_Z(this); /*0x7b42a6*/
  return (void ***)this; /*0x7b42b0*/
}



// ==== 0x007B42C0  _DynamicVectorClass_PAE::disconnect  this=DynamicVector  sig=csp ====
void __thiscall UDPInterfaceClass::disconnect(_DynamicVectorClass_PAE *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x7b42c6*/
  this->m_10 = 0; /*0x7b42c9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x7b42d0*/
  {
    __3_YAXPAX_Z(v2); /*0x7b42d6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7b42de*/
  }
  BYTE1(this->m_C) = 0; /*0x7b42e1*/
  this->m_8 = 0; /*0x7b42e4*/
}



// ==== 0x007B42F0  _DynamicVectorClass_PAE::reset  this=DynamicVector  sig=csp ====
unsigned int __thiscall UDPInterfaceClass::reset(_DynamicVectorClass_PAE *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7b42f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7b4305*/
  else
    return 0; /*0x7b42f7*/
}



// ==== 0x007B4310  _VectorClass_PAE::Count  this=VectorClass  sig=csp ====
int __thiscall VectorClass_PAE::Count(_VectorClass_PAE *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x7b431a*/
}



// ==== 0x007B4320  _VectorClass_PAE::Get  this=VectorClass  sig=csp ====
char __thiscall VectorClass_PAE::Get(_VectorClass_PAE *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x7b4322*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x7b432d*/
  {
    v3 = 0; /*0x7b432f*/
    if ( m_8 <= 0 ) /*0x7b4333*/
      return 1; /*0x7b4353*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x7b4335*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x7b433b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x7b4344*/
    {
      ++v3; /*0x7b4346*/
      ++v4; /*0x7b4347*/
      if ( v3 >= m_8 ) /*0x7b434c*/
        return 1; /*0x7b434c*/
    }
  }
  return 0; /*0x7b434e*/
}



// ==== 0x007B4360  _VectorClass_PAE::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_PAE::Release(_VectorClass_PAE *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x7b436c*/
  {
    LOBYTE(this->m_C) = 0; /*0x7b4376*/
    if ( a3 ) /*0x7b437c*/
      v4 = a3; /*0x7b4392*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x7b438e*/
    LOBYTE(this->m_C) = 1; /*0x7b4396*/
    if ( v4 ) /*0x7b439a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x7b43a5*/
      {
        m_8 = this->m_8; /*0x7b43ac*/
        if ( a2 < m_8 ) /*0x7b43b1*/
          m_8 = a2; /*0x7b43b3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7b43b9*/
          ++i; /*0x7b43be*/
        if ( BYTE1(this->m_C) ) /*0x7b43cb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7b43d6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x7b43de*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x7b43e7*/
      this->m_8 = a2; /*0x7b43ef*/
      BYTE1(this->m_C) = a3 == 0; /*0x7b43f2*/
      return 1; /*0x7b43f8*/
    }
    else
    {
      return 0; /*0x7b439f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAE *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x7b4402*/
    return 1; /*0x7b4408*/
  }
}



// ==== 0x007B4410  _VectorClass_PAE::Set  this=VectorClass  sig=csp ====
void __thiscall VectorClass_PAE::Set(_VectorClass_PAE *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x7b441d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7b4423*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7b442b*/
  }
  BYTE1(this->m_C) = 0; /*0x7b442e*/
  this->m_8 = 0; /*0x7b4431*/
}



// ==== 0x007B4440  _VectorClass_PAE::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_PAE::GetSize(_VectorClass_PAE *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x7b4440*/
    return 0; /*0x7b4448*/
  m_8 = this->m_8; /*0x7b444e*/
  result = 0; /*0x7b4451*/
  if ( m_8 <= 0 ) /*0x7b4455*/
    return -1; /*0x7b446c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7b445b*/
  {
    if ( ++result >= m_8 ) /*0x7b446a*/
      return -1; /*0x7b446a*/
  }
  return result; /*0x7b444a*/
}



// ==== 0x007B4480  _VectorClass_PAE::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_PAE::GetCapacity(_VectorClass_PAE *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x7b4480*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7b4495*/
  else
    return 0; /*0x7b4487*/
}



// ==== 0x007B44A0  _DynamicVectorClass_PAE::flush  this=DynamicVector  sig=csp ====
char __thiscall UDPInterfaceClass::flush(_DynamicVectorClass_PAE *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7b44ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x7b44b2*/
    if ( a3 ) /*0x7b44b8*/
      v4 = a3; /*0x7b44ce*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x7b44ca*/
    LOBYTE(this->m_C) = 1; /*0x7b44d2*/
    if ( !v4 ) /*0x7b44d6*/
      return 0; /*0x7b454a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x7b44d8*/
    {
      m_8 = this->m_8; /*0x7b44df*/
      if ( a2 < m_8 ) /*0x7b44e4*/
        m_8 = a2; /*0x7b44e6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7b44ec*/
        ++i; /*0x7b44f1*/
      if ( BYTE1(this->m_C) ) /*0x7b44fe*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x7b4509*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x7b4511*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x7b451a*/
    this->m_8 = a2; /*0x7b4522*/
    BYTE1(this->m_C) = a3 == 0; /*0x7b4525*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAE *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x7b452e*/
  }
  v7 = this->m_8; /*0x7b4531*/
  if ( v7 < this->m_10 ) /*0x7b4539*/
    this->m_10 = v7; /*0x7b453b*/
  return 1; /*0x7b453e*/
}



// ==== 0x007B4550  _DynamicVectorClass_PAE::sendPacket  this=DynamicVector  sig=csp ====
int __thiscall UDPInterfaceClass::sendPacket(_DynamicVectorClass_PAE *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x7b4550*/
  result = 0; /*0x7b4553*/
  if ( m_10 <= 0 ) /*0x7b4558*/
    return -1; /*0x7b456f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7b455e*/
  {
    if ( ++result >= m_10 ) /*0x7b456d*/
      return -1; /*0x7b456d*/
  }
  return result; /*0x7b4572*/
}



// ==== 0x007B4580  _VectorClass_PAE::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_PAE::QueryInterface(_VectorClass_PAE *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7b4583*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned char *>::`vftable'; /*0x7b4586*/
  if ( v3 && BYTE1(this->m_C) ) /*0x7b4590*/
  {
    __3_YAXPAX_Z(v3); /*0x7b4598*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7b45a0*/
  }
  BYTE1(this->m_C) = 0; /*0x7b45ab*/
  this->m_8 = 0; /*0x7b45b1*/
  if ( (a2 & 1) != 0 ) /*0x7b45b8*/
    __3_YAXPAX_Z(this); /*0x7b45bb*/
  return this->__pad_0; /*0x7b45c5*/
}



// ==== 0x007B45D0  _DynamicVectorClass_PAE::receivePacket  this=DynamicVector  sig=csp ====
_DWORD *__thiscall UDPInterfaceClass::receivePacket(_DynamicVectorClass_PAE *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7b45d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned char *>::`vftable'; /*0x7b45d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x7b45e0*/
  {
    __3_YAXPAX_Z(v3); /*0x7b45e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7b45f0*/
  }
  BYTE1(this->m_C) = 0; /*0x7b45fb*/
  this->m_8 = 0; /*0x7b4601*/
  if ( (a2 & 1) != 0 ) /*0x7b4608*/
    __3_YAXPAX_Z(this); /*0x7b460b*/
  return this->__pad_0; /*0x7b4615*/
}



// ==== 0x007B4620  ObjectClass::unknown_libname_73  this=DeleteAndZero  sig=csp ====
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_73(_DWORD *this)
{
  *this = 0; /*0x7b4622*/
  return this; /*0x7b4628*/
}



// ==== 0x007B4630  String::Assign  this=ObjectClass  sig=csp ====
char **__thiscall String::Assign(String *this, const char *a2)
{
  size_t v3; // ecx
  _BYTE *v4; // eax

  *(_DWORD *)this->__pad_0 = 0; /*0x7b463b*/
  if ( a2 ) /*0x7b4641*/
    v3 = strlen(a2) + 1; /*0x7b464a*/
  else
    v3 = 1; /*0x7b4650*/
  v4 = (_BYTE *)__2_YAPAXI_Z(v3); /*0x7b4656*/
  *(_DWORD *)this->__pad_0 = v4; /*0x7b465e*/
  *v4 = 0; /*0x7b4662*/
  if ( a2 ) /*0x7b4665*/
    strcpy(*(char **)this->__pad_0, a2); /*0x7b467d*/
  return (char **)this; /*0x7b4686*/
}



// ==== 0x007B4690  String::AssignFromPtr  this=ObjectClass  sig=csp ====
char **__thiscall String::AssignFromPtr(String *this, const char **a2)
{
  char *v3; // edx

  *(_DWORD *)this->__pad_0 = 0; /*0x7b4699*/
  if ( *a2 ) /*0x7b469f*/
  {
    v3 = (char *)__2_YAPAXI_Z(strlen(*a2) + 1); /*0x7b46b4*/
    *(_DWORD *)this->__pad_0 = v3; /*0x7b46b9*/
    strcpy(v3, *a2); /*0x7b46d1*/
  }
  return (char **)this; /*0x7b46da*/
}



// ==== 0x007B46F0  ObjectClass::DeleteAndZero  this=ObjectClass  sig=csp ====
int __thiscall DeleteAndZero(ObjectClass *this)
{
  int result; // eax

  result = (int)this->AbstractClass; /*0x7b46f3*/
  if ( this->AbstractClass ) /*0x7b46f3*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b46fa*/
  this->AbstractClass = 0; /*0x7b4702*/
  return result; /*0x7b4708*/
}



// ==== 0x007B4710  String::Equals_Alt  this=AbstractClass  sig=csp ====
int __thiscall String::Equals_Alt(String *this, const char *a2)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x7b4710*/
  if ( *(_DWORD *)this->__pad_0 || a2 ) /*0x7b471d*/
  {
    if ( result && a2 ) /*0x7b472b*/
    {
      result = strcmp((const char *)result, a2); /*0x7b4736*/
      if ( result ) /*0x7b4750*/
        LOBYTE(result) = 0; /*0x7b4767*/
      else
        return 1; /*0x7b4752*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x7b476d*/
    }
  }
  else
  {
    LOBYTE(result) = 1; /*0x7b471f*/
  }
  return result; /*0x7b4721*/
}



// ==== 0x007B4780  String::Compare  this=IUnknown  sig=csp ====
int __thiscall String::Compare(String *this, const char **a2)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x7b4780*/
  if ( *(_DWORD *)this->__pad_0 || *a2 ) /*0x7b478b*/
  {
    if ( result && *a2 ) /*0x7b479a*/
    {
      result = strcmp((const char *)result, *a2); /*0x7b47a9*/
      if ( result ) /*0x7b47c3*/
        LOBYTE(result) = 0; /*0x7b47da*/
      else
        return 1; /*0x7b47c5*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x7b47e0*/
    }
  }
  else
  {
    LOBYTE(result) = 1; /*0x7b4790*/
  }
  return result; /*0x7b4792*/
}



// ==== 0x007B47F0  String::NotEquals  this=ObjectClass  sig=csp ====
int __thiscall String::NotEquals(String *this, const char *a2)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x7b47f0*/
  if ( *(_DWORD *)this->__pad_0 || a2 ) /*0x7b47fd*/
  {
    if ( result && a2 ) /*0x7b480b*/
    {
      result = strcmp((const char *)result, a2); /*0x7b4816*/
      if ( result ) /*0x7b4837*/
        LOBYTE(result) = 1; /*0x7b4847*/
    }
    else
    {
      LOBYTE(result) = 1; /*0x7b484d*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x7b47ff*/
  }
  return result; /*0x7b4801*/
}



// ==== 0x007B4860  VectorClass_Wstring::SetCapacity  this=VectorClass_Wstring  sig=csp ====
bool __thiscall VectorClass_Wstring::SetCapacity(VectorClass_Wstring *this, const char **a2)
{
  const char *v2; // eax
  int v3; // eax

  v2 = *(const char **)this->__pad_0; /*0x7b4860*/
  if ( *(_DWORD *)this->__pad_0 || *a2 ) /*0x7b486b*/
  {
    if ( v2 && *a2 ) /*0x7b487a*/
    {
      v3 = strcmp(v2, *a2); /*0x7b4889*/
      if ( v3 ) /*0x7b48a3*/
        LOBYTE(v3) = 1; /*0x7b48ba*/
    }
    else
    {
      LOBYTE(v3) = 1; /*0x7b48c0*/
    }
  }
  else
  {
    LOBYTE(v3) = 0; /*0x7b4870*/
  }
  return v3; /*0x7b4872*/
}



// ==== 0x007B48D0  String::Assign_Alt  this=DeleteAndZero  sig=csp ====
void **__thiscall String::Assign_Alt(String *this, const char *a2)
{
  size_t v3; // ecx
  _BYTE *v4; // eax

  if ( *(_DWORD *)this->__pad_0 ) /*0x7b48d5*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b48dc*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b48e8*/
  if ( a2 ) /*0x7b48f0*/
    v3 = strlen(a2) + 1; /*0x7b48f9*/
  else
    v3 = 1; /*0x7b48ff*/
  v4 = (_BYTE *)__2_YAPAXI_Z(v3); /*0x7b4905*/
  *(_DWORD *)this->__pad_0 = v4; /*0x7b490d*/
  *v4 = 0; /*0x7b4911*/
  if ( a2 ) /*0x7b4914*/
    strcpy(*(char **)this->__pad_0, a2); /*0x7b492c*/
  return (void **)this; /*0x7b4935*/
}



// ==== 0x007B4940  String::Reassign  this=String  sig=csp ====
char **__thiscall String::Reassign(String *this, const char **a2)
{
  void *v3; // edi
  char *v4; // esi
  size_t v5; // ecx
  _BYTE *v6; // eax

  v3 = *(void **)this->__pad_0; /*0x7b4949*/
  if ( (*(_DWORD *)this->__pad_0 || *a2) && (!v3 || !*a2 || strcmp(*(const char **)this->__pad_0, *a2)) ) /*0x7b496c*/
  {
    v4 = (char *)*a2; /*0x7b4994*/
    if ( !*a2 ) /*0x7b4994*/
      v4 = &g_INI_DefaultBuffer; /*0x7b499a*/
    if ( v3 ) /*0x7b49a1*/
      __3_YAXPAX_Z(v3); /*0x7b49a4*/
    *(_DWORD *)this->__pad_0 = 0; /*0x7b49ae*/
    if ( v4 ) /*0x7b49b5*/
      v5 = strlen(v4) + 1; /*0x7b49be*/
    else
      v5 = 1; /*0x7b49c4*/
    v6 = (_BYTE *)__2_YAPAXI_Z(v5); /*0x7b49ca*/
    *(_DWORD *)this->__pad_0 = v6; /*0x7b49d2*/
    *v6 = 0; /*0x7b49d7*/
    if ( v4 ) /*0x7b49da*/
      strcpy(*(char **)this->__pad_0, v4); /*0x7b49f3*/
  }
  return (char **)this; /*0x7b49fc*/
}



// ==== 0x007B4A10  ObjectClass::String_Process_7B4A10  this=ObjectClass  sig=csp ====
char __thiscall String_Process_7B4A10(ObjectClass *this, const char *a2)
{
  const char *v2; // esi
  char *ptr_0; // ebx
  unsigned int v6; // kr08_4
  size_t v7; // edx
  _BYTE *v8; // eax

  v2 = a2; /*0x7b4a12*/
  if ( !a2 ) /*0x7b4a1a*/
    return 1; /*0x7b4a1d*/
  ptr_0 = (char *)this->AbstractClass; /*0x7b4a2c*/
  v6 = strlen(a2) + 1; /*0x7b4a2f*/
  v7 = v6; /*0x7b4a36*/
  if ( ptr_0 ) /*0x7b4a39*/
    v7 = strlen((const char *)this->AbstractClass) + v6; /*0x7b4a45*/
  v8 = (_BYTE *)__2_YAPAXI_Z(v7); /*0x7b4a48*/
  this->AbstractClass = v8; /*0x7b4a54*/
  if ( ptr_0 ) /*0x7b4a57*/
  {
    strcpy(v8, ptr_0); /*0x7b4a6f*/
    v2 = a2; /*0x7b4a78*/
  }
  else
  {
    *v8 = 0; /*0x7b4a7e*/
  }
  strcat((char *)this->AbstractClass, v2); /*0x7b4aa0*/
  if ( ptr_0 ) /*0x7b4aab*/
    __3_YAXPAX_Z(ptr_0); /*0x7b4aae*/
  return 1; /*0x7b4a1c*/
}



// ==== 0x007B4AC0  ObjectClass::method_7B4AC0  this=ObjectClass  sig=csp ====
char __thiscall sub_7B4AC0(ObjectClass *this, size_t Count, char *Source)
{
  size_t v4; // edx
  char *ptr_0; // ebx
  _BYTE *v6; // eax

  v4 = Count + 1; /*0x7b4ac9*/
  ptr_0 = (char *)this->AbstractClass; /*0x7b4acc*/
  if ( this->AbstractClass ) /*0x7b4acc*/
    v4 = strlen((const char *)this->AbstractClass) + 1 + Count; /*0x7b4adf*/
  v6 = (_BYTE *)__2_YAPAXI_Z(v4); /*0x7b4ae2*/
  this->AbstractClass = v6; /*0x7b4aee*/
  if ( ptr_0 ) /*0x7b4af1*/
    strcpy(v6, ptr_0); /*0x7b4b0a*/
  else
    *v6 = 0; /*0x7b4b16*/
  if ( Source ) /*0x7b4b1f*/
    strncat((char *)this->AbstractClass, Source, Count); /*0x7b4b2b*/
  if ( ptr_0 ) /*0x7b4b35*/
    __3_YAXPAX_Z(ptr_0); /*0x7b4b38*/
  return 1; /*0x7b4b40*/
}



// ==== 0x007B4B50  ObjectClass::method_7B4B50  this=ObjectClass  sig=csp ====
char __thiscall sub_7B4B50(ObjectClass *this, char **a2)
{
  char *v2; // eax
  const char *v4; // esi
  unsigned int v5; // kr08_4
  char *ptr_0; // ebx
  size_t v7; // edx
  _BYTE *v8; // eax
  char *v10; // [esp+10h] [ebp+4h]

  v2 = *a2; /*0x7b4b57*/
  if ( *a2 ) /*0x7b4b57*/
  {
    v10 = *a2; /*0x7b4b6a*/
    v4 = v2; /*0x7b4b6e*/
  }
  else
  {
    v4 = &g_INI_DefaultBuffer; /*0x7b4b5f*/
    v10 = &g_INI_DefaultBuffer; /*0x7b4b64*/
  }
  if ( v4 ) /*0x7b4b72*/
  {
    v5 = strlen(v4) + 1; /*0x7b4b80*/
    ptr_0 = (char *)this->AbstractClass; /*0x7b4b82*/
    v7 = v5; /*0x7b4b8a*/
    if ( this->AbstractClass ) /*0x7b4b82*/
      v7 = strlen((const char *)this->AbstractClass) + v5; /*0x7b4b99*/
    v8 = (_BYTE *)__2_YAPAXI_Z(v7); /*0x7b4b9c*/
    this->AbstractClass = v8; /*0x7b4ba8*/
    if ( ptr_0 ) /*0x7b4bab*/
    {
      strcpy(v8, ptr_0); /*0x7b4bc3*/
      v4 = v10; /*0x7b4bcc*/
    }
    else
    {
      *v8 = 0; /*0x7b4bd2*/
    }
    strcat((char *)this->AbstractClass, v4); /*0x7b4bf4*/
    if ( ptr_0 ) /*0x7b4c00*/
      __3_YAXPAX_Z(ptr_0); /*0x7b4c03*/
  }
  return 1; /*0x7b4c0b*/
}



// ==== 0x007B4C20  String::Append  this=String  sig=csp ====
const char **__thiscall String::Append(String *this, const char *a2)
{
  const char *v2; // esi
  unsigned int v4; // kr08_4
  char *v5; // ebx
  size_t v6; // edx
  char *v7; // eax

  v2 = a2; /*0x7b4c23*/
  if ( a2 ) /*0x7b4c2b*/
  {
    v4 = strlen(a2) + 1; /*0x7b4c39*/
    v5 = *(char **)this->__pad_0; /*0x7b4c3b*/
    v6 = v4; /*0x7b4c43*/
    if ( *(_DWORD *)this->__pad_0 ) /*0x7b4c3b*/
      v6 = strlen(*(const char **)this->__pad_0) + v4; /*0x7b4c52*/
    v7 = (char *)__2_YAPAXI_Z(v6); /*0x7b4c55*/
    *(_DWORD *)this->__pad_0 = v7; /*0x7b4c61*/
    if ( v5 ) /*0x7b4c64*/
    {
      strcpy(v7, v5); /*0x7b4c7c*/
      v2 = a2; /*0x7b4c85*/
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



// ==== 0x007B4CD0  String::Append2  this=String  sig=csp ====
const char **__thiscall String::Append2(String *this, char **a2)
{
  char *v2; // eax
  const char *v4; // esi
  unsigned int v5; // kr08_4
  char *v6; // ebx
  size_t v7; // edx
  char *v8; // eax
  char *v10; // [esp+10h] [ebp+4h]

  v2 = *a2; /*0x7b4cd7*/
  if ( *a2 ) /*0x7b4cd7*/
  {
    v10 = *a2; /*0x7b4cea*/
    v4 = v2; /*0x7b4cee*/
  }
  else
  {
    v4 = &g_INI_DefaultBuffer; /*0x7b4cdf*/
    v10 = &g_INI_DefaultBuffer; /*0x7b4ce4*/
  }
  if ( v4 ) /*0x7b4cf2*/
  {
    v5 = strlen(v4) + 1; /*0x7b4d00*/
    v6 = *(char **)this->__pad_0; /*0x7b4d02*/
    v7 = v5; /*0x7b4d0a*/
    if ( *(_DWORD *)this->__pad_0 ) /*0x7b4d02*/
      v7 = strlen(*(const char **)this->__pad_0) + v5; /*0x7b4d19*/
    v8 = (char *)__2_YAPAXI_Z(v7); /*0x7b4d1c*/
    *(_DWORD *)this->__pad_0 = v8; /*0x7b4d28*/
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



// ==== 0x007B4DA0  String::Concat2  this=String  sig=csp ====
char **__thiscall String::Concat2(String *this, char **a2, const char *a3)
{
  char *v4; // ebx
  const char *v5; // esi
  char *v6; // ebp
  unsigned int v7; // kr14_4
  size_t v8; // edx
  char *v9; // eax
  char *v10; // edx

  v4 = 0; /*0x7b4da6*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b4da8*/
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



// ==== 0x007B4ED0  String::Concat  this=ObjectClass  sig=csp ====
char **__thiscall String::Concat(String *this, char **a2, char **a3)
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
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b4ed8*/
  {
    v4 = (char *)__2_YAPAXI_Z(strlen(*(const char **)this->__pad_0) + 1); /*0x7b4eef*/
    strcpy(v4, *(const char **)this->__pad_0); /*0x7b4f08*/
  }
  v5 = *a3; /*0x7b4f15*/
  if ( *a3 ) /*0x7b4f15*/
  {
    v13 = *a3; /*0x7b4f26*/
    v6 = v5; /*0x7b4f2a*/
  }
  else
  {
    v6 = &g_INI_DefaultBuffer; /*0x7b4f1b*/
    v13 = &g_INI_DefaultBuffer; /*0x7b4f20*/
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
  *a2 = 0; /*0x7b4fc6*/
  if ( v4 ) /*0x7b4fcd*/
  {
    v11 = (char *)__2_YAPAXI_Z(strlen(v4) + 1); /*0x7b4fe0*/
    *a2 = v11; /*0x7b4fe9*/
    strcpy(v11, v4); /*0x7b4ffc*/
    __3_YAXPAX_Z(v4); /*0x7b5005*/
  }
  return a2; /*0x7b500d*/
}



// ==== 0x007B5020  String::Erase  this=String  sig=csp ====
int __thiscall String::Erase(String *this, int a2, int a3)
{
  int v4; // ebp
  int v5; // esi
  unsigned int v6; // kr04_4
  int result; // eax
  char *v8; // [esp+14h] [ebp+4h]

  v4 = a2; /*0x7b502d*/
  v5 = a3; /*0x7b5031*/
  v6 = strlen(*(const char **)this->__pad_0) + 1; /*0x7b5035*/
  result = a3 + a2; /*0x7b503a*/
  if ( a3 + a2 > (int)(v6 - 1) ) /*0x7b503f*/
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
    *(_BYTE *)(*(_DWORD *)this->__pad_0 + v4) = 0; /*0x7b506f*/
    *(_BYTE *)(v4 + *(_DWORD *)this->__pad_0 + v5 - 1) = 0; /*0x7b507a*/
    strcpy(v8, *(const char **)this->__pad_0); /*0x7b5092*/
    strcat(v8, (const char *)(a3 + v4 + *(_DWORD *)this->__pad_0)); /*0x7b50c1*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b50cd*/
    *(_DWORD *)this->__pad_0 = v8; /*0x7b50d9*/
    LOBYTE(result) = 1; /*0x7b50db*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x7b5058*/
  }
  return result; /*0x7b5055*/
}



// ==== 0x007B50F0  ObjectClass::method_7B50F0  this=ObjectClass  sig=csp ====
char __thiscall sub_7B50F0(ObjectClass *this, char a2)
{
  char v3; // bl
  const char *ptr_0; // edx
  unsigned int v6; // esi
  char *v7; // eax
  char *v8; // ebx

  v3 = 0; /*0x7b50f4*/
  ptr_0 = (const char *)this->AbstractClass; /*0x7b50f6*/
  if ( !this->AbstractClass ) /*0x7b50f6*/
    return 0; /*0x7b50fe*/
  v6 = strlen(ptr_0); /*0x7b5119*/
  v7 = strchr(ptr_0, a2); /*0x7b511b*/
  if ( v7 ) /*0x7b5125*/
  {
    do /*0x7b5157*/
    {
      memcpy(v7, v7 + 1, (char *)this->AbstractClass - (char *)v7 + v6-- - 1); /*0x7b513b*/
      *((_BYTE *)this->AbstractClass + v6) = 0; /*0x7b5145*/
      v7 = strchr((const char *)this->AbstractClass, a2); /*0x7b514d*/
    }
    while ( v7 ); /*0x7b5157*/
    v8 = (char *)__2_YAPAXI_Z(strlen((const char *)this->AbstractClass) + 1); /*0x7b516c*/
    strcpy(v8, (const char *)this->AbstractClass); /*0x7b5182*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b518f*/
    this->AbstractClass = v8; /*0x7b5194*/
    return 1; /*0x7b5197*/
  }
  return v3; /*0x7b50fd*/
}



// ==== 0x007B51D0  String::TrimLeft  this=String  sig=csp ====
int __thiscall String::TrimLeft(String *this, const char **a2)
{
  int result; // eax
  int i; // esi
  signed int v5; // ecx
  char *v6; // eax

  for ( i = 0; ; ++i ) /*0x7b51da*/
  {
    if ( *(_DWORD *)this->__pad_0 ) /*0x7b51dc*/
    {
      result = 0; /*0x7b51eb*/
      v5 = strlen(*(const char **)this->__pad_0); /*0x7b51f1*/
    }
    else
    {
      v5 = 0; /*0x7b51e2*/
    }
    if ( i >= v5 ) /*0x7b51f4*/
      break; /*0x7b51f4*/
    v6 = (char *)*a2; /*0x7b51f6*/
    if ( !*a2 ) /*0x7b51f6*/
      v6 = &g_INI_DefaultBuffer; /*0x7b51fd*/
    result = (int)strchr(v6, *(char *)(*(_DWORD *)this->__pad_0 + i)); /*0x7b5208*/
    if ( !result ) /*0x7b5212*/
      break; /*0x7b5212*/
  }
  if ( i > 0 ) /*0x7b5219*/
    return String::Erase(this, 0, i); /*0x7b5220*/
  return result; /*0x7b5225*/
}



// ==== 0x007B5230  String::TrimRight  this=String  sig=csp ====
void __thiscall String::TrimRight(String *this, const char **a2)
{
  unsigned int v3; // esi
  unsigned int v4; // eax
  unsigned int v5; // esi
  char *v6; // eax
  size_t v8; // esi
  const char *v9; // edi
  char *v10; // eax
  char *v11; // ebx
  const char *v12; // esi
  size_t v13; // ecx
  _BYTE *v14; // eax

  if ( *(_DWORD *)this->__pad_0 ) /*0x7b5236*/
    v3 = strlen(*(const char **)this->__pad_0); /*0x7b524b*/
  else
    v3 = 0; /*0x7b523d*/
  v4 = v3; /*0x7b524d*/
  v5 = v3 - 1; /*0x7b524f*/
  if ( v4 ) /*0x7b5252*/
  {
    do /*0x7b527d*/
    {
      v6 = (char *)*a2; /*0x7b5258*/
      if ( !*a2 ) /*0x7b5258*/
        v6 = &g_INI_DefaultBuffer; /*0x7b525e*/
      if ( !strchr(v6, *(char *)(*(_DWORD *)this->__pad_0 + v5)) ) /*0x7b526c*/
        break; /*0x7b5276*/
    }
    while ( v5-- ); /*0x7b527d*/
  }
  v8 = v5 + 1; /*0x7b5282*/
  v9 = &g_INI_DefaultBuffer; /*0x7b5285*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b527f*/
    v9 = *(const char **)this->__pad_0; /*0x7b528c*/
  v10 = (char *)__2_YAPAXI_Z(v8 + 1); /*0x7b5292*/
  v11 = v10; /*0x7b5297*/
  *v10 = 0; /*0x7b529e*/
  if ( v9 ) /*0x7b52a1*/
    strncpy(v10, v9, v8); /*0x7b52a6*/
  v11[v8] = 0; /*0x7b52ae*/
  v12 = &g_INI_DefaultBuffer; /*0x7b52b2*/
  if ( v11 ) /*0x7b52b9*/
    v12 = v11; /*0x7b52bb*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b52bd*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b52c5*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b52cf*/
  if ( v12 ) /*0x7b52d6*/
    v13 = strlen(v12) + 1; /*0x7b52df*/
  else
    v13 = 1; /*0x7b52e5*/
  v14 = (_BYTE *)__2_YAPAXI_Z(v13); /*0x7b52eb*/
  *(_DWORD *)this->__pad_0 = v14; /*0x7b52f3*/
  *v14 = 0; /*0x7b52f8*/
  if ( v12 ) /*0x7b52fb*/
    strcpy(*(char **)this->__pad_0, v12); /*0x7b5314*/
  if ( v11 ) /*0x7b531f*/
    __3_YAXPAX_Z(v11); /*0x7b5322*/
}



// ==== 0x007B5340  DeleteAndZero::Alt2  this=DeleteAndZero  sig=csp ====
int __thiscall DeleteAndZero::Alt2(DeleteAndZero *this)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x7b5343*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b5343*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b534a*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b5352*/
  return result; /*0x7b5358*/
}



// ==== 0x007B5360  ObjectClass::method_7B5360  this=ObjectClass  sig=csp ====
void __thiscall sub_7B5360(ObjectClass *this, int Size)
{
  void *v3; // edi

  if ( this->AbstractClass ) /*0x7b5364*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b536b*/
  this->AbstractClass = 0; /*0x7b5377*/
  if ( Size >= 0 ) /*0x7b537f*/
  {
    v3 = (void *)__2_YAPAXI_Z(Size); /*0x7b538a*/
    this->AbstractClass = v3; /*0x7b5393*/
    memset(v3, 0, Size); /*0x7b5398*/
  }
}



// ==== 0x007B53B0  ObjectClass::method_7B53B0  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_7B53B0(ObjectClass *this, char *Destination, size_t Count)
{
  unsigned int v4; // kr08_4
  unsigned int result; // eax

  strncpy(Destination, (const char *)this->AbstractClass, Count); /*0x7b53c2*/
  v4 = strlen((const char *)this->AbstractClass) + 1; /*0x7b53d1*/
  result = v4 - 1; /*0x7b53d6*/
  if ( v4 - 1 < Count ) /*0x7b53da*/
  {
    result = 538976288; /*0x7b53e3*/
    memset(&Destination[v4 - 1], 0x20u, Count - (v4 - 1)); /*0x7b53ed*/
  }
  Destination[Count] = 0; /*0x7b53f6*/
  return result; /*0x7b53fa*/
}



// ==== 0x007B5400  String::GetOrEmpty  this=AbstractClass  sig=csp ====
char *__thiscall String::GetOrEmpty(String *this)
{
  char *result; // eax

  result = *(char **)this->__pad_0; /*0x7b5400*/
  if ( !*(_DWORD *)this->__pad_0 ) /*0x7b5400*/
    return &g_INI_DefaultBuffer; /*0x7b5406*/
  return result; /*0x7b540b*/
}



// ==== 0x007B5410  ObjectClass::method_7B5410  this=ObjectClass  sig=csp ====
char __thiscall sub_7B5410(ObjectClass *this, unsigned int a2)
{
  _BYTE *ptr_0; // edx

  ptr_0 = this->AbstractClass; /*0x7b5410*/
  if ( a2 >= strlen((const char *)this->AbstractClass) ) /*0x7b5426*/
    return 0; /*0x7b542e*/
  else
    return ptr_0[a2]; /*0x7b5428*/
}



// ==== 0x007B5440  String::GetOrEmpty_Alt  this=AbstractClass  sig=csp ====
char *__thiscall String::GetOrEmpty_Alt(String *this)
{
  char *result; // eax

  result = *(char **)this->__pad_0; /*0x7b5440*/
  if ( !*(_DWORD *)this->__pad_0 ) /*0x7b5440*/
    return &g_INI_DefaultBuffer; /*0x7b5446*/
  return result; /*0x7b544b*/
}



// ==== 0x007B54B0  String::Length  this=ObjectClass  sig=csp ====
int __thiscall String::Length(String *this)
{
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b54b1*/
    return strlen(*(const char **)this->__pad_0); /*0x7b54c6*/
  else
    return 0; /*0x7b54b7*/
}



// ==== 0x007B54D0  ObjectClass::method_7B54D0  this=ObjectClass  sig=csp ====
char __thiscall sub_7B54D0(ObjectClass *this, const char *Src, unsigned int a3)
{
  const char *ptr_0; // edx
  size_t v5; // ecx
  _BYTE *v6; // eax
  char *v8; // ebp

  ptr_0 = (const char *)this->AbstractClass; /*0x7b54d5*/
  if ( this->AbstractClass ) /*0x7b54d5*/
  {
    if ( a3 > strlen((const char *)this->AbstractClass) ) /*0x7b5542*/
      a3 = strlen(ptr_0); /*0x7b5550*/
    v8 = (char *)__2_YAPAXI_Z(strlen(ptr_0) + 1 + strlen(Src)); /*0x7b557d*/
    memset(v8, 0, strlen((const char *)this->AbstractClass) + 1 + strlen(Src)); /*0x7b55a0*/
    strcpy(v8, (const char *)this->AbstractClass); /*0x7b55c3*/
    memcpy(&v8[strlen(Src) + a3], &v8[a3], strlen((const char *)this->AbstractClass) + 1 - a3); /*0x7b55ff*/
    memcpy(&v8[a3], Src, strlen(Src)); /*0x7b5617*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b561f*/
    this->AbstractClass = v8; /*0x7b5627*/
    return 1; /*0x7b5629*/
  }
  else
  {
    this->AbstractClass = 0; /*0x7b54df*/
    if ( Src ) /*0x7b54e3*/
      v5 = strlen(Src) + 1; /*0x7b54ec*/
    else
      v5 = 1; /*0x7b54f2*/
    v6 = (_BYTE *)__2_YAPAXI_Z(v5); /*0x7b54f8*/
    this->AbstractClass = v6; /*0x7b5500*/
    *v6 = 0; /*0x7b5504*/
    if ( Src ) /*0x7b5507*/
      strcpy((char *)this->AbstractClass, Src); /*0x7b551f*/
    return 1; /*0x7b552a*/
  }
}



// ==== 0x007B5640  ObjectClass::method_7B5640  this=ObjectClass  sig=csp ====
char __thiscall sub_7B5640(ObjectClass *this, char a2, unsigned int a3)
{
  size_t v4; // ecx
  _BYTE *v5; // eax
  unsigned int v7; // kr0C_4
  char *v8; // eax
  _BYTE *ptr_0; // ecx
  char *v10; // ebx
  char v11; // dl
  int v12; // [esp+0h] [ebp-10h] BYREF
  char v13; // [esp+Eh] [ebp-2h] BYREF
  char v14; // [esp+Fh] [ebp-1h]

  if ( this->AbstractClass ) /*0x7b5646*/
  {
    v7 = strlen((const char *)this->AbstractClass) + 1; /*0x7b56c0*/
    if ( a3 > v7 - 1 ) /*0x7b56cb*/
      a3 = v7 - 1; /*0x7b56cd*/
    v8 = (char *)__2_YAPAXI_Z(v7 - 1 + 2); /*0x7b56d6*/
    ptr_0 = this->AbstractClass; /*0x7b56db*/
    v10 = v8; /*0x7b56e2*/
    v14 = 0; /*0x7b56e4*/
    v11 = ptr_0[a3]; /*0x7b56ef*/
    ptr_0[a3] = 0; /*0x7b56f1*/
    strcpy(v8, (const char *)this->AbstractClass); /*0x7b5708*/
    *((_BYTE *)this->AbstractClass + a3) = v11; /*0x7b571c*/
    v13 = a2; /*0x7b5723*/
    strcat(v8, &v13); /*0x7b5743*/
    strcat(v8, (const char *)this->AbstractClass + a3); /*0x7b5771*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b577e*/
    this->AbstractClass = v10; /*0x7b5786*/
    return 1; /*0x7b5789*/
  }
  else
  {
    v13 = a2; /*0x7b5657*/
    v14 = 0; /*0x7b565b*/
    this->AbstractClass = 0; /*0x7b5660*/
    if ( &v12 == (int *)-14 ) /*0x7b5663*/
      v4 = 1; /*0x7b5674*/
    else
      v4 = strlen(&v13) + 1; /*0x7b566e*/
    v5 = (_BYTE *)__2_YAPAXI_Z(v4); /*0x7b567a*/
    this->AbstractClass = v5; /*0x7b5686*/
    *v5 = 0; /*0x7b5689*/
    if ( &v13 ) /*0x7b568e*/
      strcpy((char *)this->AbstractClass, &v13); /*0x7b56a9*/
    return 1; /*0x7b56b4*/
  }
}



// ==== 0x007B57A0  String::Replace  this=String  sig=csp ====
char __thiscall String::Replace(String *this, char *SubStr, const char *a3)
{
  void **v3; // edi
  char *v4; // ebx
  const char *v5; // ebp
  char *v6; // eax
  size_t v7; // eax
  char *v8; // esi
  size_t v9; // edx
  char *v10; // eax
  const char *v11; // esi
  char *v12; // ebp
  unsigned int v13; // kr1C_4
  size_t v14; // edx
  char *v15; // eax
  const char *v16; // esi
  unsigned int v17; // kr30_4
  size_t v18; // edx
  char *v19; // eax
  const char *v20; // esi
  size_t v21; // ecx
  _BYTE *v22; // eax
  char *Block; // [esp+10h] [ebp-Ch]
  size_t Count; // [esp+14h] [ebp-8h]
  char *v27; // [esp+18h] [ebp-4h]
  char *v28; // [esp+24h] [ebp+8h]

  v3 = (void **)this; /*0x7b57a6*/
  v4 = 0; /*0x7b57a8*/
  v5 = *(const char **)this->__pad_0; /*0x7b57ae*/
  if ( !*(_DWORD *)this->__pad_0 ) /*0x7b57ae*/
    v5 = &g_INI_DefaultBuffer; /*0x7b57b4*/
  if ( !v5 ) /*0x7b57bc*/
    goto LABEL_33; /*0x7b57bc*/
  while ( *v5 ) /*0x7b57c6*/
  {
    v6 = strstr(v5, SubStr); /*0x7b57d2*/
    v27 = v6; /*0x7b57da*/
    if ( !v6 ) /*0x7b57e0*/
    {
      v16 = v4; /*0x7b5924*/
      v17 = strlen(v5) + 1; /*0x7b5926*/
      v28 = v4; /*0x7b592b*/
      v18 = v17; /*0x7b5931*/
      if ( v4 ) /*0x7b5934*/
        v18 = strlen(v4) + v17; /*0x7b5940*/
      v19 = (char *)__2_YAPAXI_Z(v18); /*0x7b5943*/
      v4 = v19; /*0x7b594b*/
      if ( v16 ) /*0x7b594f*/
        strcpy(v19, v16); /*0x7b5967*/
      else
        *v19 = 0; /*0x7b5972*/
      strcat(v19, v5); /*0x7b5993*/
      if ( v28 ) /*0x7b59a2*/
        __3_YAXPAX_Z(v28); /*0x7b59a5*/
      break; /*0x7b59a5*/
    }
    v7 = v6 - v5; /*0x7b57e6*/
    Count = v7; /*0x7b57e8*/
    if ( v7 ) /*0x7b57ec*/
    {
      v8 = v4; /*0x7b57ee*/
      v9 = v7 + 1; /*0x7b57f0*/
      Block = v4; /*0x7b57f5*/
      if ( v4 ) /*0x7b57f9*/
        v9 = strlen(v4) + 1 + v7; /*0x7b5807*/
      v10 = (char *)__2_YAPAXI_Z(v9); /*0x7b580a*/
      v4 = v10; /*0x7b5812*/
      if ( v8 ) /*0x7b5816*/
      {
        strcpy(v10, v8); /*0x7b582e*/
        v8 = Block; /*0x7b5837*/
      }
      else
      {
        *v10 = 0; /*0x7b583d*/
      }
      strncat(v10, v5, Count); /*0x7b5847*/
      if ( v8 ) /*0x7b5851*/
        __3_YAXPAX_Z(v8); /*0x7b5854*/
    }
    v11 = a3; /*0x7b585c*/
    if ( a3 ) /*0x7b5862*/
    {
      v12 = v4; /*0x7b586f*/
      v13 = strlen(a3) + 1; /*0x7b5871*/
      v14 = v13; /*0x7b5878*/
      if ( v4 ) /*0x7b587b*/
        v14 = strlen(v4) + v13; /*0x7b5887*/
      v15 = (char *)__2_YAPAXI_Z(v14); /*0x7b588a*/
      v4 = v15; /*0x7b5892*/
      if ( v12 ) /*0x7b5896*/
      {
        strcpy(v15, v12); /*0x7b58ae*/
        v11 = a3; /*0x7b58b7*/
      }
      else
      {
        *v15 = 0; /*0x7b58bd*/
      }
      strcat(v15, v11); /*0x7b58de*/
      if ( v12 ) /*0x7b58e9*/
        __3_YAXPAX_Z(v12); /*0x7b58ec*/
    }
    v5 = &v27[strlen(SubStr)]; /*0x7b5908*/
    if ( !v5 ) /*0x7b590a*/
      break; /*0x7b590a*/
  }
  if ( !v4 ) /*0x7b59af*/
  {
    v3 = (void **)this; /*0x7b59b1*/
LABEL_33:
    v20 = &g_INI_DefaultBuffer; /*0x7b59b5*/
    goto LABEL_35; /*0x7b59ba*/
  }
  v3 = (void **)this; /*0x7b59bc*/
  v20 = v4; /*0x7b59c0*/
LABEL_35:
  if ( *v3 ) /*0x7b59c2*/
    __3_YAXPAX_Z(*v3); /*0x7b59c9*/
  *v3 = 0; /*0x7b59d3*/
  if ( v20 ) /*0x7b59d9*/
    v21 = strlen(v20) + 1; /*0x7b59e2*/
  else
    v21 = 1; /*0x7b59e8*/
  v22 = (_BYTE *)__2_YAPAXI_Z(v21); /*0x7b59ee*/
  *(_DWORD *)this->__pad_0 = v22; /*0x7b59fc*/
  *v22 = 0; /*0x7b59fe*/
  if ( v20 ) /*0x7b5a01*/
    strcpy(*(char **)this->__pad_0, v20); /*0x7b5a1d*/
  if ( v4 ) /*0x7b5a29*/
    __3_YAXPAX_Z(v4); /*0x7b5a2c*/
  return 1; /*0x7b5a34*/
}



// ==== 0x007B5A40  String::Assign_Bool  this=DeleteAndZero  sig=csp ====
int __thiscall String::Assign_Bool(String *this, const char *a2)
{
  size_t v3; // ecx
  int result; // eax

  if ( *(_DWORD *)this->__pad_0 ) /*0x7b5a45*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b5a4c*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b5a58*/
  if ( a2 ) /*0x7b5a60*/
    v3 = strlen(a2) + 1; /*0x7b5a69*/
  else
    v3 = 1; /*0x7b5a6f*/
  result = __2_YAPAXI_Z(v3); /*0x7b5a75*/
  *(_DWORD *)this->__pad_0 = result; /*0x7b5a7d*/
  *(_BYTE *)result = 0; /*0x7b5a81*/
  if ( a2 ) /*0x7b5a84*/
  {
    result = strlen(a2) + 1; /*0x7b5a8d*/
    qmemcpy(*(void **)this->__pad_0, a2, result); /*0x7b5a9c*/
  }
  LOBYTE(result) = 1; /*0x7b5aa7*/
  return result; /*0x7b5aa5*/
}



// ==== 0x007B5B30  String::ToLower  this=String  sig=csp ====
int __thiscall String::ToLower(String *this)
{
  unsigned int i; // esi
  int result; // eax
  char v4; // dl

  for ( i = 0; *(_DWORD *)this->__pad_0; ++i ) /*0x7b5b35*/
  {
    result = 0; /*0x7b5b42*/
    if ( i >= strlen(*(const char **)this->__pad_0) ) /*0x7b5b4b*/
      break; /*0x7b5b4b*/
    v4 = *(_BYTE *)(*(_DWORD *)this->__pad_0 + i); /*0x7b5b4d*/
    if ( v4 >= 65 && v4 <= 90 ) /*0x7b5b58*/
    {
      result = tolower(v4); /*0x7b5b5e*/
      *(_BYTE *)(*(_DWORD *)this->__pad_0 + i) = result; /*0x7b5b68*/
    }
  }
  return result; /*0x7b5b6e*/
}



// ==== 0x007B5B80  String::ToLowerCopy  this=String  sig=csp ====
char **__thiscall String::ToLowerCopy(String *this, char **a2)
{
  char *v3; // ebx
  unsigned int i; // esi
  char v5; // al
  char *v6; // edx

  v3 = 0; /*0x7b5b86*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b5b88*/
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
  *a2 = 0; /*0x7b5bfa*/
  if ( v3 ) /*0x7b5c01*/
  {
    v6 = (char *)__2_YAPAXI_Z(strlen(v3) + 1); /*0x7b5c14*/
    *a2 = v6; /*0x7b5c1d*/
    strcpy(v6, v3); /*0x7b5c30*/
    __3_YAXPAX_Z(v3); /*0x7b5c39*/
  }
  return a2; /*0x7b5c41*/
}



// ==== 0x007B5C50  ObjectClass::method_7B5C50  this=ObjectClass  sig=csp ====
void __thiscall sub_7B5C50(ObjectClass *this)
{
  unsigned int i; // esi
  char v3; // dl

  for ( i = 0; this->AbstractClass && i < strlen((const char *)this->AbstractClass); ++i ) /*0x7b5c55*/
  {
    v3 = *((_BYTE *)this->AbstractClass + i); /*0x7b5c6d*/
    if ( v3 >= 97 && v3 <= 122 ) /*0x7b5c78*/
      *((_BYTE *)this->AbstractClass + i) = toupper(v3); /*0x7b5c88*/
  }
}



// ==== 0x007B5CA0  ObjectClass::method_7B5CA0  this=ObjectClass  sig=csp ====
char **__thiscall sub_7B5CA0(ObjectClass *this, char **a2)
{
  char *v3; // ebx
  unsigned int i; // esi
  char v5; // al
  char *v6; // edx

  v3 = 0; /*0x7b5ca6*/
  if ( this->AbstractClass ) /*0x7b5ca8*/
  {
    v3 = (char *)__2_YAPAXI_Z(strlen((const char *)this->AbstractClass) + 1); /*0x7b5cbf*/
    strcpy(v3, (const char *)this->AbstractClass); /*0x7b5cd8*/
  }
  for ( i = 0; v3 && i < strlen(v3); ++i ) /*0x7b5ce1*/
  {
    v5 = v3[i]; /*0x7b5cf7*/
    if ( v5 >= 97 && v5 <= 122 ) /*0x7b5d00*/
      v3[i] = toupper(v5); /*0x7b5d0e*/
  }
  *a2 = 0; /*0x7b5d1a*/
  if ( v3 ) /*0x7b5d21*/
  {
    v6 = (char *)__2_YAPAXI_Z(strlen(v3) + 1); /*0x7b5d34*/
    *a2 = v6; /*0x7b5d3d*/
    strcpy(v6, v3); /*0x7b5d50*/
    __3_YAXPAX_Z(v3); /*0x7b5d59*/
  }
  return a2; /*0x7b5d61*/
}



// ==== 0x007B5D70  String::CopyTruncated  this=String  sig=csp ====
char __thiscall String::CopyTruncated(String *this, size_t Count)
{
  const char *v3; // esi
  char *v4; // eax
  char *v5; // ebp
  const char *v6; // esi
  size_t v7; // ecx
  _BYTE *v8; // eax

  v3 = *(const char **)this->__pad_0; /*0x7b5d75*/
  if ( !*(_DWORD *)this->__pad_0 ) /*0x7b5d75*/
    v3 = &g_INI_DefaultBuffer; /*0x7b5d7c*/
  v4 = (char *)__2_YAPAXI_Z(Count + 1); /*0x7b5d89*/
  v5 = v4; /*0x7b5d8e*/
  *v4 = 0; /*0x7b5d95*/
  if ( v3 ) /*0x7b5d99*/
    strncpy(v4, v3, Count); /*0x7b5d9e*/
  v5[Count] = 0; /*0x7b5da8*/
  v6 = &g_INI_DefaultBuffer; /*0x7b5dac*/
  if ( v5 ) /*0x7b5db1*/
    v6 = v5; /*0x7b5db3*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b5db5*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b5dbc*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b5dc6*/
  if ( v6 ) /*0x7b5dcc*/
    v7 = strlen(v6) + 1; /*0x7b5dd5*/
  else
    v7 = 1; /*0x7b5ddb*/
  v8 = (_BYTE *)__2_YAPAXI_Z(v7); /*0x7b5de1*/
  *(_DWORD *)this->__pad_0 = v8; /*0x7b5de9*/
  *v8 = 0; /*0x7b5ded*/
  if ( v6 ) /*0x7b5df0*/
    strcpy(*(char **)this->__pad_0, v6); /*0x7b5e08*/
  if ( v5 ) /*0x7b5e13*/
    __3_YAXPAX_Z(v5); /*0x7b5e16*/
  return 1; /*0x7b5e1e*/
}



// ==== 0x007B5E30  CChatEventSink::EncodeString  this=CChatEventSink  sig=csp ====
char __thiscall CChatEventSink::EncodeString(CChatEventSink *this, char a2)
{
  char *v4; // eax
  char *v5; // eax
  size_t v6; // esi
  const char *v7; // edi
  char *v8; // eax
  char *v9; // ebp
  const char *v10; // esi
  size_t v11; // ecx
  _BYTE *v12; // eax

  if ( !*(_DWORD *)this->__pad_0 ) /*0x7b5e33*/
    return 0; /*0x7b5e39*/
  v4 = strchr(*(const char **)this->__pad_0, a2); /*0x7b5e46*/
  if ( !v4 ) /*0x7b5e50*/
    return 0; /*0x7b5e52*/
  v5 = &v4[-*(_DWORD *)this->__pad_0]; /*0x7b5e5c*/
  v6 = (size_t)v5; /*0x7b5e5f*/
  v7 = &g_INI_DefaultBuffer; /*0x7b5e63*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b5e58*/
    v7 = *(const char **)this->__pad_0; /*0x7b5e6a*/
  v8 = (char *)__2_YAPAXI_Z((size_t)(v5 + 1)); /*0x7b5e70*/
  v9 = v8; /*0x7b5e75*/
  *v8 = 0; /*0x7b5e7c*/
  if ( v7 ) /*0x7b5e80*/
    strncpy(v8, v7, v6); /*0x7b5e85*/
  v9[v6] = 0; /*0x7b5e8d*/
  v10 = &g_INI_DefaultBuffer; /*0x7b5e91*/
  if ( v9 ) /*0x7b5e98*/
    v10 = v9; /*0x7b5e9a*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b5e9c*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b5ea3*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b5ead*/
  if ( v10 ) /*0x7b5eb3*/
    v11 = strlen(v10) + 1; /*0x7b5ebc*/
  else
    v11 = 1; /*0x7b5ec2*/
  v12 = (_BYTE *)__2_YAPAXI_Z(v11); /*0x7b5ec8*/
  *(_DWORD *)this->__pad_0 = v12; /*0x7b5ed0*/
  *v12 = 0; /*0x7b5ed4*/
  if ( v10 ) /*0x7b5ed7*/
    strcpy(*(char **)this->__pad_0, v10); /*0x7b5eef*/
  if ( v9 ) /*0x7b5efa*/
    __3_YAXPAX_Z(v9); /*0x7b5efd*/
  return 1; /*0x7b5e3b*/
}



// ==== 0x007B5F10  String::Tokenize  this=AbstractClass  sig=csp ====
int __thiscall String::Tokenize(String *this, int a2, char *Str, void **a4)
{
  int v4; // esi
  signed int v7; // ecx
  signed int v8; // ecx
  signed int v9; // ecx
  char *v10; // ebp
  const char *v11; // esi
  size_t v12; // ecx
  _BYTE *v13; // eax
  const char *v14; // edi
  size_t v15; // esi
  char *v16; // eax
  char *v17; // ebp
  const char *v18; // esi
  size_t v19; // ecx
  _BYTE *v20; // eax
  int v21; // [esp+14h] [ebp+4h]
  char *Stra; // [esp+18h] [ebp+8h]

  v4 = a2; /*0x7b5f13*/
  if ( a2 < 0 ) /*0x7b5f1c*/
    return -1; /*0x7b5f21*/
  while ( 1 )
  {
    v7 = *(_DWORD *)this->__pad_0 ? strlen(*(const char **)this->__pad_0) : 0;
    if ( v4 >= v7 || !strchr(Str, *(char *)(*(_DWORD *)this->__pad_0 + v4)) ) /*0x7b5f4c*/
      break; /*0x7b5f4c*/
    ++v4; /*0x7b5f58*/
  }
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b5f5b*/
    v8 = strlen(*(const char **)this->__pad_0); /*0x7b5f6e*/
  else
    v8 = 0; /*0x7b5f61*/
  if ( v4 >= v8 ) /*0x7b5f71*/
    return -1; /*0x7b5f76*/
  v21 = v4; /*0x7b5f7d*/
  while ( 1 )
  {
    v9 = *(_DWORD *)this->__pad_0 ? strlen(*(const char **)this->__pad_0) : 0;
    if ( v4 >= v9 || strchr(Str, *(char *)(*(_DWORD *)this->__pad_0 + v4)) ) /*0x7b5fa1*/
      break; /*0x7b5fa1*/
    ++v4; /*0x7b5fad*/
  }
  v10 = (char *)(v4 - 1); /*0x7b5fb4*/
  v11 = (const char *)(v21 + *(_DWORD *)this->__pad_0); /*0x7b5fbd*/
  Stra = v10; /*0x7b5fbf*/
  if ( *a4 ) /*0x7b5fc3*/
    __3_YAXPAX_Z(*a4); /*0x7b5fca*/
  *a4 = 0; /*0x7b5fd4*/
  if ( v11 ) /*0x7b5fda*/
    v12 = strlen(v11) + 1; /*0x7b5fe3*/
  else
    v12 = 1; /*0x7b5fe9*/
  v13 = (_BYTE *)__2_YAPAXI_Z(v12); /*0x7b5fef*/
  *a4 = v13; /*0x7b5ff7*/
  *v13 = 0; /*0x7b5ffb*/
  if ( v11 ) /*0x7b5ffe*/
    strcpy((char *)*a4, v11); /*0x7b6016*/
  v14 = &g_INI_DefaultBuffer; /*0x7b6029*/
  v15 = (size_t)&v10[-v21 + 1]; /*0x7b602e*/
  if ( *a4 ) /*0x7b6023*/
    v14 = (const char *)*a4; /*0x7b6033*/
  v16 = (char *)__2_YAPAXI_Z((size_t)&v10[-v21 + 2]); /*0x7b6039*/
  v17 = v16; /*0x7b603e*/
  *v16 = 0; /*0x7b6045*/
  if ( v14 ) /*0x7b6049*/
    strncpy(v16, v14, v15); /*0x7b604e*/
  v17[v15] = 0; /*0x7b6056*/
  v18 = &g_INI_DefaultBuffer; /*0x7b605a*/
  if ( v17 ) /*0x7b6061*/
    v18 = v17; /*0x7b6063*/
  if ( *a4 ) /*0x7b6065*/
    __3_YAXPAX_Z(*a4); /*0x7b606c*/
  *a4 = 0; /*0x7b6076*/
  if ( v18 ) /*0x7b607c*/
    v19 = strlen(v18) + 1; /*0x7b6085*/
  else
    v19 = 1; /*0x7b608b*/
  v20 = (_BYTE *)__2_YAPAXI_Z(v19); /*0x7b6091*/
  *a4 = v20; /*0x7b6099*/
  *v20 = 0; /*0x7b609d*/
  if ( v18 ) /*0x7b60a0*/
    strcpy((char *)*a4, v18); /*0x7b60b8*/
  if ( v17 ) /*0x7b60c3*/
    __3_YAXPAX_Z(v17); /*0x7b60c6*/
  return (int)(Stra + 1); /*0x7b5f1e*/
}



// ==== 0x007B60E0  ObjectClass::method_7B60E0  this=ObjectClass  sig=csp ====
int __thiscall sub_7B60E0(ObjectClass *this, signed int a2, void **a3)
{
  signed int v5; // esi
  signed int v6; // ecx
  signed int v8; // ecx
  _BYTE *ptr_0; // eax
  const char *v10; // esi
  size_t v11; // ecx
  _BYTE *v12; // eax
  const char *v13; // edi
  size_t v14; // esi
  char *v15; // eax
  char *v16; // ebp
  const char *v17; // esi
  size_t v18; // ecx
  _BYTE *v19; // eax
  signed int v20; // [esp+14h] [ebp+4h]

  v5 = a2; /*0x7b60ec*/
  if ( this->AbstractClass ) /*0x7b60ea*/
    v6 = strlen((const char *)this->AbstractClass); /*0x7b60ff*/
  else
    v6 = 0; /*0x7b60f2*/
  if ( a2 >= v6 ) /*0x7b6102*/
    return -1; /*0x7b6107*/
  while ( 1 )
  {
    v8 = this->AbstractClass ? strlen((const char *)this->AbstractClass) : 0;
    if ( v5 >= v8 || strchr(String2, *((char *)this->AbstractClass + v5)) ) /*0x7b6132*/
      break; /*0x7b6132*/
    ++v5; /*0x7b613e*/
  }
  ptr_0 = this->AbstractClass; /*0x7b6141*/
  v20 = v5; /*0x7b6143*/
  if ( *((_BYTE *)this->AbstractClass + v5) == 13 && ptr_0[v5 + 1] == 10 ) /*0x7b6152*/
    v20 = v5 + 1; /*0x7b6155*/
  v10 = &ptr_0[a2]; /*0x7b615d*/
  if ( *a3 ) /*0x7b6160*/
    __3_YAXPAX_Z(*a3); /*0x7b6167*/
  *a3 = 0; /*0x7b6171*/
  if ( v10 ) /*0x7b6177*/
    v11 = strlen(v10) + 1; /*0x7b6180*/
  else
    v11 = 1; /*0x7b6186*/
  v12 = (_BYTE *)__2_YAPAXI_Z(v11); /*0x7b618c*/
  *a3 = v12; /*0x7b6194*/
  *v12 = 0; /*0x7b6198*/
  if ( v10 ) /*0x7b619b*/
    strcpy((char *)*a3, v10); /*0x7b61b3*/
  v13 = &g_INI_DefaultBuffer; /*0x7b61c4*/
  v14 = v20 - a2 + 1; /*0x7b61c9*/
  if ( *a3 ) /*0x7b61c0*/
    v13 = (const char *)*a3; /*0x7b61ce*/
  v15 = (char *)__2_YAPAXI_Z(v20 - a2 + 2); /*0x7b61d4*/
  v16 = v15; /*0x7b61d9*/
  *v15 = 0; /*0x7b61e0*/
  if ( v13 ) /*0x7b61e4*/
    strncpy(v15, v13, v14); /*0x7b61e9*/
  v16[v14] = 0; /*0x7b61f1*/
  v17 = &g_INI_DefaultBuffer; /*0x7b61f5*/
  if ( v16 ) /*0x7b61fc*/
    v17 = v16; /*0x7b61fe*/
  if ( *a3 ) /*0x7b6200*/
    __3_YAXPAX_Z(*a3); /*0x7b6207*/
  *a3 = 0; /*0x7b6211*/
  if ( v17 ) /*0x7b6217*/
    v18 = strlen(v17) + 1; /*0x7b6220*/
  else
    v18 = 1; /*0x7b6226*/
  v19 = (_BYTE *)__2_YAPAXI_Z(v18); /*0x7b622c*/
  *a3 = v19; /*0x7b6234*/
  *v19 = 0; /*0x7b6238*/
  if ( v17 ) /*0x7b623b*/
    strcpy((char *)*a3, v17); /*0x7b6253*/
  if ( v16 ) /*0x7b625e*/
    __3_YAXPAX_Z(v16); /*0x7b6261*/
  return v20 + 1; /*0x7b6104*/
}



// ==== 0x007B6280  ObjectClass::??1_Timevec_std__QAE_XZ  this=ObjectClass  sig=csp ====
void __thiscall __1_Timevec_std__QAE_XZ(const char **this)
{
  atoi(*this); /*0x7b6283*/
}



// ==== 0x007B6290  FromStringInt  this=-  sig=csp ====
char **__fastcall String_FromInt(char **a1, int a2)
{
  size_t v3; // ecx
  char *v4; // eax
  char Buffer[16]; // [esp+8h] [ebp-10h] BYREF

  sprintf(Buffer, "%d", a2); /*0x7b62a2*/
  *a1 = 0; /*0x7b62b0*/
  if ( Buffer ) /*0x7b62b6*/
    v3 = strlen(Buffer) + 1; /*0x7b62c1*/
  else
    v3 = 1; /*0x7b62c7*/
  v4 = (char *)__2_YAPAXI_Z(v3); /*0x7b62cd*/
  *a1 = v4; /*0x7b62d9*/
  *v4 = 0; /*0x7b62db*/
  if ( Buffer ) /*0x7b62e0*/
    strcpy(*a1, Buffer); /*0x7b62fb*/
  return a1; /*0x7b6307*/
}



// ==== 0x007B6320  FormatStringInt  this=-  sig=csp ====
char **__fastcall String_FormatInt(char **a1, int a2, int a3)
{
  size_t v5; // ecx
  char *v6; // eax
  char Buffer[16]; // [esp+Ch] [ebp-10h] BYREF

  sprintf(Buffer, "%%0%dd", a3); /*0x7b6339*/
  sprintf(Buffer, Buffer, a2); /*0x7b6349*/
  *a1 = 0; /*0x7b6357*/
  if ( Buffer ) /*0x7b635d*/
    v5 = strlen(Buffer) + 1; /*0x7b6368*/
  else
    v5 = 1; /*0x7b636e*/
  v6 = (char *)__2_YAPAXI_Z(v5); /*0x7b6374*/
  *a1 = v6; /*0x7b6380*/
  *v6 = 0; /*0x7b6382*/
  if ( Buffer ) /*0x7b6387*/
    strcpy(*a1, Buffer); /*0x7b63a1*/
  return a1; /*0x7b63aa*/
}



// ==== 0x007B63C0  ProcessStringAndCopy  this=-  sig=csp ====
char **__fastcall String_ProcessAndCopy(char **a1, const char *a2, char **a3)
{
  size_t v5; // ecx
  char *v6; // ebx
  char *v7; // eax
  char *v8; // edx
  char *Block; // [esp+10h] [ebp-4h]

  if ( a2 ) /*0x7b63cb*/
    v5 = strlen(a2) + 1; /*0x7b63d4*/
  else
    v5 = 1; /*0x7b63da*/
  v6 = (char *)__2_YAPAXI_Z(v5); /*0x7b63e5*/
  *v6 = 0; /*0x7b63ec*/
  if ( a2 ) /*0x7b63ef*/
    strcpy(v6, a2); /*0x7b6407*/
  Block = 0; /*0x7b6412*/
  if ( v6 ) /*0x7b641a*/
  {
    Block = (char *)__2_YAPAXI_Z(strlen(v6) + 1); /*0x7b6439*/
    strcpy(Block, v6); /*0x7b644c*/
  }
  v7 = *a3; /*0x7b6459*/
  if ( !*a3 ) /*0x7b6459*/
    v7 = &g_INI_DefaultBuffer; /*0x7b645f*/
  String_Process_7B4A10(v7); /*0x7b6469*/
  *a1 = 0; /*0x7b6472*/
  if ( Block ) /*0x7b647b*/
  {
    v8 = (char *)__2_YAPAXI_Z(strlen(Block) + 1); /*0x7b6490*/
    *a1 = v8; /*0x7b649a*/
    strcpy(v8, Block); /*0x7b64ac*/
    __3_YAXPAX_Z(Block); /*0x7b64be*/
  }
  if ( v6 ) /*0x7b64c8*/
    __3_YAXPAX_Z(v6); /*0x7b64cb*/
  return a1; /*0x7b64d3*/
}



// ==== 0x007B64E0  ConcatStringAlloc  this=-  sig=csp ====
char **__fastcall String_ConcatAlloc(char **a1, const char **a2, char **a3)
{
  char **v4; // ebp
  char *v5; // ebx
  const char *v6; // eax
  const char *v7; // esi
  char *v8; // ebp
  unsigned int v9; // kr14_4
  size_t v10; // edx
  char *v11; // eax
  char *v12; // edx
  char *v15; // [esp+18h] [ebp+4h]

  v4 = a1; /*0x7b64e7*/
  v5 = 0; /*0x7b64eb*/
  if ( *a2 ) /*0x7b64e9*/
  {
    v5 = (char *)__2_YAPAXI_Z(strlen(*a2) + 1); /*0x7b6506*/
    strcpy(v5, *a2); /*0x7b651f*/
  }
  v6 = *a3; /*0x7b652c*/
  if ( *a3 ) /*0x7b652c*/
  {
    v15 = *a3; /*0x7b653d*/
    v7 = v6; /*0x7b6541*/
  }
  else
  {
    v7 = &g_INI_DefaultBuffer; /*0x7b6532*/
    v15 = &g_INI_DefaultBuffer; /*0x7b6537*/
  }
  if ( v7 ) /*0x7b6545*/
  {
    v8 = v5; /*0x7b6552*/
    v9 = strlen(v7) + 1; /*0x7b6554*/
    v10 = v9; /*0x7b655b*/
    if ( v5 ) /*0x7b655e*/
      v10 = strlen(v5) + v9; /*0x7b656a*/
    v11 = (char *)__2_YAPAXI_Z(v10); /*0x7b656d*/
    v5 = v11; /*0x7b6575*/
    if ( v8 ) /*0x7b6579*/
    {
      strcpy(v11, v8); /*0x7b6591*/
      v7 = v15; /*0x7b659a*/
    }
    else
    {
      *v11 = 0; /*0x7b65a0*/
    }
    strcat(v11, v7); /*0x7b65c1*/
    if ( v8 ) /*0x7b65cc*/
      __3_YAXPAX_Z(v8); /*0x7b65cf*/
    v4 = a1; /*0x7b65d7*/
  }
  *v4 = 0; /*0x7b65dd*/
  if ( v5 ) /*0x7b65e4*/
  {
    v12 = (char *)__2_YAPAXI_Z(strlen(v5) + 1); /*0x7b65f7*/
    *v4 = v12; /*0x7b6600*/
    strcpy(v12, v5); /*0x7b6613*/
    __3_YAXPAX_Z(v5); /*0x7b661c*/
  }
  return v4; /*0x7b6624*/
}



// ==== 0x007B6630  ValidateStringContains  this=ObjectClass  sig=csp ====
int __fastcall ValidateStringContains(const char **a1, const char *a2, char *Control)
{
  int result; // eax

  if ( Control && *a1 ) /*0x7b6639*/
    return strcspn(*a1, Control) < strlen(a2); /*0x7b665f*/
  LOBYTE(result) = 0; /*0x7b6665*/
  return result; /*0x7b6661*/
}



// ==== 0x007B66C0  ObjectClass::unknown_libname_74  this=GameSetup  sig=csp ====
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_74(_DWORD *this)
{
  *this = 0; /*0x7b66c2*/
  return this; /*0x7b66c8*/
}



// ==== 0x007B66D0  WideString::Assign  this=WideString  sig=csp ====
wchar_t **__thiscall WideString::Assign(WideString *this, wchar_t *String)
{
  int v3; // eax
  _WORD *v4; // eax

  *(_DWORD *)this = 0; /*0x7b66da*/
  if ( String ) /*0x7b66e0*/
    v3 = wcslen(String) + 1; /*0x7b66eb*/
  else
    v3 = 1; /*0x7b66ee*/
  v4 = (_WORD *)__2_YAPAXI_Z(2 * v3); /*0x7b66f6*/
  *(_DWORD *)this = v4; /*0x7b66fe*/
  *v4 = 0; /*0x7b6702*/
  if ( String ) /*0x7b6707*/
    wcscpy(*(wchar_t **)this, String); /*0x7b670d*/
  return (wchar_t **)this; /*0x7b6717*/
}



// ==== 0x007B6720  WideString::AssignFromPtr  this=MultiplayerGameMode  sig=csp ====
wchar_t **__thiscall WideString::AssignFromPtr(WideString *this, const wchar_t **a2)
{
  int v3; // eax
  wchar_t *v4; // eax

  *(_DWORD *)this = 0; /*0x7b6728*/
  if ( *a2 ) /*0x7b672e*/
  {
    v3 = wcslen(*a2); /*0x7b6735*/
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3 + 2); /*0x7b673f*/
    *(_DWORD *)this = v4; /*0x7b6744*/
    wcscpy(v4, *a2); /*0x7b674a*/
  }
  return (wchar_t **)this; /*0x7b6754*/
}



// ==== 0x007B6760  DeleteAndZero::Alt  this=DeleteAndZero  sig=csp ====
int __thiscall DeleteAndZero::Alt(DeleteAndZero *this)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x7b6763*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b6763*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b676a*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b6772*/
  return result; /*0x7b6778*/
}



// ==== 0x007B6780  ObjectClass::String_Helper  this=ObjectClass  sig=csp ====
bool __thiscall String_Helper(ObjectClass *this, wchar_t *String2)
{
  const wchar_t *ptr_0; // eax

  ptr_0 = (const wchar_t *)this->AbstractClass; /*0x7b6780*/
  if ( !this->AbstractClass && !String2 ) /*0x7b678c*/
    return 1; /*0x7b678e*/
  if ( ptr_0 && String2 ) /*0x7b6799*/
    return wcscmp(ptr_0, String2) == 0; /*0x7b67a7*/
  return 0; /*0x7b6790*/
}



// ==== 0x007B67C0  ObjectClass::SendMultiplayerStartSignal_Start_77EBA0_Start  this=ObjectClass  sig=csp ====
bool __thiscall SendMultiplayerStartSignal_Start_77EBA0_Start(ObjectClass *this, const wchar_t **a2)
{
  const wchar_t *ptr_0; // eax

  ptr_0 = (const wchar_t *)this->AbstractClass; /*0x7b67c0*/
  if ( !this->AbstractClass && !*a2 ) /*0x7b67ca*/
    return 1; /*0x7b67cf*/
  if ( ptr_0 && *a2 ) /*0x7b67d8*/
    return wcscmp(ptr_0, *a2) == 0; /*0x7b67ea*/
  return 0; /*0x7b67d1*/
}



// ==== 0x007B6880  WideString::Assign_Alt  this=SafeDelete  sig=csp ====
void **__thiscall WideString::Assign_Alt(WideString *this, wchar_t *String)
{
  int v3; // eax
  _WORD *v4; // eax

  if ( *(_DWORD *)this ) /*0x7b6884*/
    __3_YAXPAX_Z(*(void **)this); /*0x7b688b*/
  *(_DWORD *)this = 0; /*0x7b6897*/
  if ( String ) /*0x7b689f*/
    v3 = wcslen(String) + 1; /*0x7b68aa*/
  else
    v3 = 1; /*0x7b68ad*/
  v4 = (_WORD *)__2_YAPAXI_Z(2 * v3); /*0x7b68b5*/
  *(_DWORD *)this = v4; /*0x7b68bd*/
  *v4 = 0; /*0x7b68c1*/
  if ( String ) /*0x7b68c6*/
    wcscpy(*(wchar_t **)this, String); /*0x7b68cc*/
  return (void **)this; /*0x7b68d6*/
}



// ==== 0x007B68E0  WideString::Reassign_Alt  this=MultiplayerGameMode  sig=csp ====
void **__thiscall WideString::Reassign_Alt(WideString *this, const wchar_t **a2)
{
  const wchar_t *v3; // eax
  wchar_t *v4; // edi
  int v5; // eax
  _WORD *v6; // eax

  v3 = *(const wchar_t **)this; /*0x7b68e8*/
  if ( (*(_DWORD *)this || *a2) && (!v3 || !*a2 || wcscmp(v3, *a2)) ) /*0x7b68ff*/
  {
    v4 = (wchar_t *)*a2; /*0x7b690b*/
    if ( !*a2 ) /*0x7b690b*/
      v4 = &g_TypeClass_DefaultString; /*0x7b6911*/
    if ( *(_DWORD *)this ) /*0x7b6916*/
      __3_YAXPAX_Z(*(void **)this); /*0x7b691d*/
    *(_DWORD *)this = 0; /*0x7b6927*/
    if ( v4 ) /*0x7b692d*/
      v5 = wcslen(v4) + 1; /*0x7b6938*/
    else
      v5 = 1; /*0x7b693b*/
    v6 = (_WORD *)__2_YAPAXI_Z(2 * v5); /*0x7b6943*/
    *(_DWORD *)this = v6; /*0x7b694b*/
    *v6 = 0; /*0x7b694f*/
    if ( v4 ) /*0x7b6954*/
      wcscpy(*(wchar_t **)this, v4); /*0x7b695a*/
  }
  return (void **)this; /*0x7b6964*/
}



// ==== 0x007B6970  WString::Append  this=WString  sig=csp ====
int __thiscall WString::Append(WString *this, wchar_t *String)
{
  int result; // eax
  wchar_t *v4; // esi
  int v5; // edi
  wchar_t *v6; // eax

  if ( String ) /*0x7b697a*/
  {
    v4 = *(wchar_t **)this->__pad_0; /*0x7b6984*/
    v5 = wcslen(String) + 1; /*0x7b6992*/
    if ( v4 ) /*0x7b6995*/
      v5 += wcslen(v4); /*0x7b69a0*/
    v6 = (wchar_t *)__2_YAPAXI_Z(4 * v5); /*0x7b69aa*/
    *(_DWORD *)this->__pad_0 = v6; /*0x7b69b2*/
    if ( v4 ) /*0x7b69b6*/
      wcscpy(v6, v4); /*0x7b69ba*/
    else
      *v6 = 0; /*0x7b69c4*/
    result = (int)wcscat(*(wchar_t **)this->__pad_0, String); /*0x7b69cd*/
    if ( v4 ) /*0x7b69d7*/
      __3_YAXPAX_Z(v4); /*0x7b69da*/
    LOBYTE(result) = 1; /*0x7b69e5*/
  }
  else
  {
    LOBYTE(result) = 1; /*0x7b697d*/
  }
  return result; /*0x7b697c*/
}



// ==== 0x007B69F0  ObjectClass::method_7B69F0  this=ObjectClass  sig=csp ====
char __thiscall sub_7B69F0(ObjectClass *this, size_t Count, wchar_t *Source)
{
  size_t v4; // ebx
  wchar_t *ptr_0; // esi
  _WORD *v6; // eax

  v4 = Count + 1; /*0x7b69fa*/
  ptr_0 = (wchar_t *)this->AbstractClass; /*0x7b69fd*/
  if ( this->AbstractClass ) /*0x7b69fd*/
    v4 += wcslen((const wchar_t *)this->AbstractClass); /*0x7b6a0c*/
  v6 = (_WORD *)__2_YAPAXI_Z(4 * v4); /*0x7b6a16*/
  this->AbstractClass = v6; /*0x7b6a1e*/
  if ( ptr_0 ) /*0x7b6a22*/
    wcscpy(v6, ptr_0); /*0x7b6a26*/
  else
    *v6 = 0; /*0x7b6a30*/
  if ( Source ) /*0x7b6a3b*/
    wcsncat((wchar_t *)this->AbstractClass, Source, Count); /*0x7b6a42*/
  if ( ptr_0 ) /*0x7b6a4c*/
    __3_YAXPAX_Z(ptr_0); /*0x7b6a4f*/
  return 1; /*0x7b6a57*/
}



// ==== 0x007B6A60  ObjectClass::method_7B6A60  this=ObjectClass  sig=csp ====
char __thiscall sub_7B6A60(ObjectClass *this, const wchar_t **a2)
{
  wchar_t *v2; // ebp
  wchar_t *ptr_0; // esi
  int v5; // edi
  _WORD *v6; // eax

  v2 = (wchar_t *)*a2; /*0x7b6a67*/
  if ( *a2 || (v2 = &g_TypeClass_DefaultString) != 0 ) /*0x7b6a76*/
  {
    ptr_0 = (wchar_t *)this->AbstractClass; /*0x7b6a78*/
    v5 = wcslen(v2) + 1; /*0x7b6a86*/
    if ( ptr_0 ) /*0x7b6a89*/
      v5 += wcslen(ptr_0); /*0x7b6a94*/
    v6 = (_WORD *)__2_YAPAXI_Z(4 * v5); /*0x7b6a9e*/
    this->AbstractClass = v6; /*0x7b6aa6*/
    if ( ptr_0 ) /*0x7b6aab*/
      wcscpy(v6, ptr_0); /*0x7b6aaf*/
    else
      *v6 = 0; /*0x7b6ab9*/
    wcscat((wchar_t *)this->AbstractClass, v2); /*0x7b6ac2*/
    if ( ptr_0 ) /*0x7b6acc*/
      __3_YAXPAX_Z(ptr_0); /*0x7b6acf*/
  }
  return 1; /*0x7b6ad7*/
}



// ==== 0x007B6AE0  WideString::Append2  this=WideString  sig=csp ====
wchar_t **__thiscall WideString::Append2(WideString *this, wchar_t *String)
{
  wchar_t *v3; // esi
  int v4; // edi
  wchar_t *v5; // eax

  if ( String ) /*0x7b6aeb*/
  {
    v3 = *(wchar_t **)this; /*0x7b6aed*/
    v4 = wcslen(String) + 1; /*0x7b6afb*/
    if ( v3 ) /*0x7b6afe*/
      v4 += wcslen(v3); /*0x7b6b09*/
    v5 = (wchar_t *)__2_YAPAXI_Z(4 * v4); /*0x7b6b13*/
    *(_DWORD *)this = v5; /*0x7b6b1b*/
    if ( v3 ) /*0x7b6b20*/
      wcscpy(v5, v3); /*0x7b6b24*/
    else
      *v5 = 0; /*0x7b6b2e*/
    wcscat(*(wchar_t **)this, String); /*0x7b6b37*/
    if ( v3 ) /*0x7b6b41*/
      __3_YAXPAX_Z(v3); /*0x7b6b44*/
  }
  return (wchar_t **)this; /*0x7b6b4c*/
}



// ==== 0x007B6B60  WideString::Append  this=WideString  sig=csp ====
wchar_t **__thiscall WideString::Append(WideString *this, const wchar_t **a2)
{
  wchar_t *v2; // ebp
  wchar_t *v4; // esi
  int v5; // edi
  wchar_t *v6; // eax

  v2 = (wchar_t *)*a2; /*0x7b6b67*/
  if ( *a2 || (v2 = &g_TypeClass_DefaultString) != 0 ) /*0x7b6b76*/
  {
    v4 = *(wchar_t **)this; /*0x7b6b78*/
    v5 = wcslen(v2) + 1; /*0x7b6b86*/
    if ( v4 ) /*0x7b6b89*/
      v5 += wcslen(v4); /*0x7b6b94*/
    v6 = (wchar_t *)__2_YAPAXI_Z(4 * v5); /*0x7b6b9e*/
    *(_DWORD *)this = v6; /*0x7b6ba6*/
    if ( v4 ) /*0x7b6bab*/
      wcscpy(v6, v4); /*0x7b6baf*/
    else
      *v6 = 0; /*0x7b6bb9*/
    wcscat(*(wchar_t **)this, v2); /*0x7b6bc2*/
    if ( v4 ) /*0x7b6bcc*/
      __3_YAXPAX_Z(v4); /*0x7b6bcf*/
  }
  return (wchar_t **)this; /*0x7b6bd7*/
}



// ==== 0x007B6BE0  WideString::AssignConcat  this=ObjectClass  sig=csp ====
wchar_t **__thiscall WideString::AssignConcat(WideString *this, wchar_t **a2, wchar_t *String)
{
  wchar_t *v4; // esi
  int v5; // eax
  wchar_t *v6; // ebx
  int v7; // edi
  wchar_t *v8; // eax
  int v9; // eax
  wchar_t *v10; // eax

  v4 = 0; /*0x7b6be4*/
  if ( *(_DWORD *)this ) /*0x7b6be6*/
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



// ==== 0x007B6CB0  WideString::ConcatAlloc  this=ObjectClass  sig=csp ====
wchar_t **__thiscall WideString::ConcatAlloc(WideString *this, wchar_t **a2, const wchar_t **a3)
{
  wchar_t *v4; // esi
  int v5; // eax
  wchar_t *v6; // ebp
  wchar_t *v7; // ebx
  int v8; // edi
  wchar_t *v9; // eax
  int v10; // eax
  wchar_t *v11; // eax

  v4 = 0; /*0x7b6cb4*/
  if ( *(_DWORD *)this ) /*0x7b6cb6*/
  {
    v5 = wcslen(*(const wchar_t **)this); /*0x7b6cbd*/
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v5 + 2); /*0x7b6cce*/
    wcscpy(v4, *(const wchar_t **)this); /*0x7b6cd2*/
  }
  v6 = (wchar_t *)*a3; /*0x7b6ce0*/
  if ( *a3 || (v6 = &g_TypeClass_DefaultString) != 0 ) /*0x7b6ced*/
  {
    v7 = v4; /*0x7b6cf0*/
    v8 = wcslen(v6) + 1; /*0x7b6cfc*/
    if ( v4 ) /*0x7b6cff*/
      v8 += wcslen(v4); /*0x7b6d0a*/
    v9 = (wchar_t *)__2_YAPAXI_Z(4 * v8); /*0x7b6d14*/
    v4 = v9; /*0x7b6d1c*/
    if ( v7 ) /*0x7b6d20*/
      wcscpy(v9, v7); /*0x7b6d24*/
    else
      *v9 = 0; /*0x7b6d2e*/
    wcscat(v4, v6); /*0x7b6d35*/
    if ( v7 ) /*0x7b6d3f*/
      __3_YAXPAX_Z(v7); /*0x7b6d42*/
  }
  *a2 = 0; /*0x7b6d51*/
  if ( v4 ) /*0x7b6d58*/
  {
    v10 = wcslen(v4); /*0x7b6d5b*/
    v11 = (wchar_t *)__2_YAPAXI_Z(2 * v10 + 2); /*0x7b6d65*/
    *a2 = v11; /*0x7b6d6c*/
    wcscpy(v11, v4); /*0x7b6d6e*/
    __3_YAXPAX_Z(v4); /*0x7b6d74*/
  }
  return a2; /*0x7b6d7e*/
}



// ==== 0x007B6D90  WideString::Erase  this=ObjectClass  sig=csp ====
__int16 __thiscall WideString::Erase(WideString *this, int a2, int a3)
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
  *(_WORD *)(*(_DWORD *)this + 2 * v5) = 0; /*0x7b6de2*/
  v9 = 2 * (v6 + v5); /*0x7b6dec*/
  *(_WORD *)(v9 + *(_DWORD *)this - 2) = 0; /*0x7b6dee*/
  wcscpy(v8, *(const wchar_t **)this); /*0x7b6df9*/
  wcscat(v8, (const wchar_t *)(*(_DWORD *)this + v9)); /*0x7b6e02*/
  __3_YAXPAX_Z(*(void **)this); /*0x7b6e0a*/
  *(_DWORD *)this = v8; /*0x7b6e12*/
  return 1; /*0x7b6dbf*/
}



// ==== 0x007B6E20  WideString::RemoveChar  this=WideString  sig=csp ====
char __thiscall WideString::RemoveChar(WideString *this, wchar_t a2)
{
  char v3; // bl
  int v5; // edi
  wchar_t *v6; // eax
  int v7; // edi
  int v8; // eax
  wchar_t *v9; // edi

  v3 = 0; /*0x7b6e24*/
  if ( !*(_DWORD *)this ) /*0x7b6e26*/
    return 0; /*0x7b6e2d*/
  v5 = wcslen(*(const wchar_t **)this); /*0x7b6e3f*/
  v6 = wcschr(*(const wchar_t **)this, a2); /*0x7b6e45*/
  if ( v6 ) /*0x7b6e4f*/
  {
    v3 = 1; /*0x7b6e51*/
    v7 = 2 * v5; /*0x7b6e53*/
    do /*0x7b6e88*/
    {
      memcpy(v6, v6 + 1, v7 - (((int)v6 - *(_DWORD *)this) >> 1) - 2); /*0x7b6e6a*/
      v7 -= 2; /*0x7b6e71*/
      *(_WORD *)(v7 + *(_DWORD *)this) = 0; /*0x7b6e75*/
      v6 = wcschr(*(const wchar_t **)this, a2); /*0x7b6e7e*/
    }
    while ( v6 ); /*0x7b6e88*/
    v8 = wcslen(*(const wchar_t **)this); /*0x7b6e8d*/
    v9 = (wchar_t *)__2_YAPAXI_Z(2 * v8 + 2); /*0x7b6e9c*/
    wcscpy(v9, *(const wchar_t **)this); /*0x7b6ea2*/
    __3_YAXPAX_Z(*(void **)this); /*0x7b6eaa*/
    *(_DWORD *)this = v9; /*0x7b6eb2*/
  }
  return v3; /*0x7b6e2c*/
}



// ==== 0x007B6EE0  ObjectClass::method_7B6EE0  this=ObjectClass  sig=csp ====
__int16 __thiscall sub_7B6EE0(ObjectClass *this, const wchar_t **a2)
{
  unsigned int i; // esi
  wchar_t *ptr_0; // eax
  wchar_t *v5; // eax

  for ( i = 0; ; ++i ) /*0x7b6ee9*/
  {
    ptr_0 = (wchar_t *)this->ptr_0; /*0x7b6eeb*/
    if ( !this->ptr_0 ) /*0x7b6eeb*/
      break; /*0x7b6eeb*/
    ptr_0 = (wchar_t *)wcslen((const wchar_t *)this->ptr_0); /*0x7b6ef2*/
    if ( i >= (unsigned int)ptr_0 ) /*0x7b6efc*/
      break; /*0x7b6efc*/
    v5 = (wchar_t *)*a2; /*0x7b6efe*/
    if ( !*a2 ) /*0x7b6efe*/
      v5 = &g_TypeClass_DefaultString; /*0x7b6f04*/
    ptr_0 = wcschr(v5, *(_WORD *)(this->ptr_0 + 2 * i)); /*0x7b6f11*/
    if ( !ptr_0 ) /*0x7b6f1b*/
      break; /*0x7b6f1b*/
  }
  if ( i ) /*0x7b6f22*/
    LOWORD(ptr_0) = WideString::Erase((WideString *)this, 0, i); /*0x7b6f29*/
  return (__int16)ptr_0; /*0x7b6f2e*/
}



// ==== 0x007B6F40  WString::TrimRight  this=WString  sig=csp ====
void __thiscall WString::TrimRight(WString *this, const wchar_t **a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // esi
  wchar_t *v6; // eax
  size_t v8; // esi
  const wchar_t *v9; // ebx
  wchar_t *v10; // eax
  wchar_t *v11; // edi
  const wchar_t *v12; // esi
  int v13; // eax
  _WORD *v14; // eax

  if ( *(_DWORD *)this->__pad_0 ) /*0x7b6f45*/
    v3 = wcslen(*(const wchar_t **)this->__pad_0); /*0x7b6f59*/
  else
    v3 = 0; /*0x7b6f4c*/
  v4 = v3; /*0x7b6f5b*/
  v5 = v3 - 1; /*0x7b6f5d*/
  if ( v4 ) /*0x7b6f60*/
  {
    do /*0x7b6f8b*/
    {
      v6 = (wchar_t *)*a2; /*0x7b6f66*/
      if ( !*a2 ) /*0x7b6f66*/
        v6 = &g_TypeClass_DefaultString; /*0x7b6f6c*/
      if ( !wcschr(v6, *(_WORD *)(*(_DWORD *)this->__pad_0 + 2 * v5)) ) /*0x7b6f7a*/
        break; /*0x7b6f84*/
    }
    while ( v5-- ); /*0x7b6f8b*/
  }
  v8 = v5 + 1; /*0x7b6f90*/
  v9 = &g_TypeClass_DefaultString; /*0x7b6f92*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b6f8d*/
    v9 = *(const wchar_t **)this->__pad_0; /*0x7b6f9b*/
  v10 = (wchar_t *)__2_YAPAXI_Z(2 * v8 + 2); /*0x7b6fa2*/
  v11 = v10; /*0x7b6fa7*/
  *v10 = 0; /*0x7b6fae*/
  if ( v9 ) /*0x7b6fb3*/
    wcsncpy(v10, v9, v8); /*0x7b6fb8*/
  v11[v8] = 0; /*0x7b6fc0*/
  v12 = &g_TypeClass_DefaultString; /*0x7b6fc9*/
  if ( v11 ) /*0x7b6fce*/
    v12 = v11; /*0x7b6fd0*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b6fd2*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b6fda*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b6fe4*/
  if ( v12 ) /*0x7b6feb*/
    v13 = wcslen(v12) + 1; /*0x7b6ff6*/
  else
    v13 = 1; /*0x7b6ff9*/
  v14 = (_WORD *)__2_YAPAXI_Z(2 * v13); /*0x7b7002*/
  *(_DWORD *)this->__pad_0 = v14; /*0x7b700a*/
  *v14 = 0; /*0x7b700f*/
  if ( v12 ) /*0x7b7014*/
    wcscpy(*(wchar_t **)this->__pad_0, v12); /*0x7b701b*/
  if ( v11 ) /*0x7b7025*/
    __3_YAXPAX_Z(v11); /*0x7b7028*/
}



// ==== 0x007B7040  SafeDelete::Ptr  this=SafeDelete  sig=csp ====
int __thiscall SafeDelete::Ptr(SafeDelete *this)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x7b7043*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b7043*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b704a*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b7052*/
  return result; /*0x7b7058*/
}



// ==== 0x007B70B0  ObjectClass::method_7B70B0  this=ObjectClass  sig=csp ====
int __thiscall sub_7B70B0(ObjectClass *this, wchar_t *Destination, size_t Count)
{
  int result; // eax
  wchar_t *v5; // edi
  unsigned int v6; // ecx
  char v7; // cf
  wchar_t *v8; // edi
  int i; // ecx

  wcsncpy(Destination, (const wchar_t *)this->AbstractClass, Count); /*0x7b70c2*/
  result = wcslen((const wchar_t *)this->AbstractClass); /*0x7b70ca*/
  if ( result < Count ) /*0x7b70d4*/
  {
    v5 = &Destination[result]; /*0x7b70d8*/
    v6 = Count - result; /*0x7b70db*/
    result = 2097184; /*0x7b70dd*/
    v7 = v6 & 1; /*0x7b70e2*/
    v6 >>= 1; /*0x7b70e2*/
    memset32(v5, 2097184, v6); /*0x7b70e4*/
    v8 = &v5[2 * v6]; /*0x7b70e4*/
    for ( i = v7; i; --i ) /*0x7b70e6*/
      *v8++ = 32; /*0x7b70e8*/
  }
  Destination[Count] = 0; /*0x7b70eb*/
  return result; /*0x7b70f1*/
}



// ==== 0x007B7100  WideString::GetOrEmpty  this=WideString  sig=csp ====
wchar_t *__thiscall WideString::GetOrEmpty(WideString *this)
{
  wchar_t *result; // eax

  result = *(wchar_t **)this; /*0x7b7100*/
  if ( !*(_DWORD *)this ) /*0x7b7100*/
    return &g_TypeClass_DefaultString; /*0x7b7106*/
  return result; /*0x7b710b*/
}



// ==== 0x007B7110  MSPrintAnim::GetCharAt  this=MSPrintAnim  sig=csp ====
int __thiscall MSPrintAnim::GetCharAt(MSPrintAnim *this, size_t a2)
{
  int result; // eax

  result = wcslen(*(const wchar_t **)this->__pad_0); /*0x7b7116*/
  if ( a2 >= result ) /*0x7b7124*/
    LOWORD(result) = 0; /*0x7b7130*/
  else
    LOWORD(result) = *(_WORD *)(*(_DWORD *)this->__pad_0 + 2 * a2); /*0x7b7129*/
  return result; /*0x7b7128*/
}



// ==== 0x007B7140  WideString::GetOrEmpty_Alt  this=AbstractClass  sig=csp ====
wchar_t *__thiscall WideString::GetOrEmpty_Alt(WideString *this)
{
  wchar_t *result; // eax

  result = *(wchar_t **)this; /*0x7b7140*/
  if ( !*(_DWORD *)this ) /*0x7b7140*/
    return &g_TypeClass_DefaultString; /*0x7b7146*/
  return result; /*0x7b714b*/
}



// ==== 0x007B7180  WideString::GetChar  this=MultiplayerGameMode  sig=csp ====
int __thiscall WideString::GetChar(WideString *this, size_t a2)
{
  int result; // eax

  result = wcslen(*(const wchar_t **)this); /*0x7b7186*/
  if ( a2 >= result ) /*0x7b7194*/
    return 0; /*0x7b71a0*/
  LOWORD(result) = *(_WORD *)(*(_DWORD *)this + 2 * a2); /*0x7b7199*/
  return result; /*0x7b7198*/
}



// ==== 0x007B71B0  WideString::Length  this=MultiplayerGameMode  sig=csp ====
const wchar_t *__thiscall WideString::Length(WideString *this)
{
  const wchar_t *result; // eax

  result = *(const wchar_t **)this; /*0x7b71b0*/
  if ( *(_DWORD *)this ) /*0x7b71b0*/
    return (const wchar_t *)wcslen(*(const wchar_t **)this); /*0x7b71b8*/
  return result; /*0x7b71b6*/
}



// ==== 0x007B71D0  ObjectClass::Render_Helper_7B71D0  this=ObjectClass  sig=csp ====
char __thiscall Render_Helper_7B71D0(ObjectClass *this, const wchar_t *Src, size_t a3)
{
  int v4; // eax
  _WORD *v5; // eax
  int v7; // edi
  int v8; // eax
  char *v9; // ebx
  int v10; // edi
  int v11; // eax
  int v12; // eax
  size_t v13; // [esp-Ch] [ebp-14h]

  if ( this->AbstractClass ) /*0x7b71d4*/
  {
    if ( a3 > wcslen((const wchar_t *)this->AbstractClass) ) /*0x7b722d*/
      a3 = wcslen((const wchar_t *)this->AbstractClass); /*0x7b723a*/
    v7 = wcslen((const wchar_t *)this->AbstractClass); /*0x7b724c*/
    v8 = wcslen(Src); /*0x7b724f*/
    v9 = (char *)__2_YAPAXI_Z(2 * (v8 + v7) + 2); /*0x7b7262*/
    v10 = wcslen((const wchar_t *)this->AbstractClass); /*0x7b726b*/
    memset(v9, 0, 2 * (wcslen(Src) + v10) + 2); /*0x7b7281*/
    wcscpy((wchar_t *)v9, (const wchar_t *)this->AbstractClass); /*0x7b728e*/
    v13 = 2 * (1 - a3 + wcslen((const wchar_t *)this->AbstractClass)); /*0x7b72b0*/
    v11 = wcslen(Src); /*0x7b72b3*/
    memcpy(&v9[2 * a3 + 2 * v11], &v9[2 * a3], v13); /*0x7b72c5*/
    v12 = wcslen(Src); /*0x7b72cb*/
    memcpy(&v9[2 * a3], Src, 2 * v12); /*0x7b72d5*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b72dd*/
    this->AbstractClass = v9; /*0x7b72e5*/
    return 1; /*0x7b72e7*/
  }
  else
  {
    this->AbstractClass = 0; /*0x7b71de*/
    if ( Src ) /*0x7b71e2*/
      v4 = wcslen(Src) + 1; /*0x7b71ed*/
    else
      v4 = 1; /*0x7b71f0*/
    v5 = (_WORD *)__2_YAPAXI_Z(2 * v4); /*0x7b71f8*/
    this->AbstractClass = v5; /*0x7b7200*/
    *v5 = 0; /*0x7b7204*/
    if ( Src ) /*0x7b7209*/
      wcscpy((wchar_t *)this->AbstractClass, Src); /*0x7b720f*/
    return 1; /*0x7b7218*/
  }
}



// ==== 0x007B72F0  EditControl::GrowBuffer  this=EditControl  sig=csp ====
char __thiscall EditControl::GrowBuffer(EditControl *this, wchar_t a2, size_t a3)
{
  int v4; // eax
  _WORD *v5; // eax
  size_t v7; // eax
  size_t v8; // edi
  int v9; // edi
  wchar_t *v10; // ebx
  wchar_t *v11; // eax
  const wchar_t *v12; // [esp-10h] [ebp-18h]
  int v13; // [esp+0h] [ebp-8h] BYREF
  wchar_t String; // [esp+4h] [ebp-4h] BYREF
  __int16 v15; // [esp+6h] [ebp-2h]

  if ( *(_DWORD *)this->__pad_0 ) /*0x7b72f4*/
  {
    v7 = wcslen(*(const wchar_t **)this->__pad_0); /*0x7b7362*/
    v8 = a3; /*0x7b7367*/
    if ( a3 > v7 ) /*0x7b7370*/
      v8 = v7; /*0x7b7372*/
    v9 = 2 * v8; /*0x7b7380*/
    v10 = (wchar_t *)__2_YAPAXI_Z(2 * v7 + 4); /*0x7b7382*/
    v11 = (wchar_t *)(v9 + *(_DWORD *)this->__pad_0); /*0x7b7388*/
    String = *v11; /*0x7b738b*/
    *v11 = 0; /*0x7b7390*/
    v12 = *(const wchar_t **)this->__pad_0; /*0x7b7397*/
    v15 = 0; /*0x7b7399*/
    wcscpy(v10, v12); /*0x7b73a0*/
    *(_WORD *)(v9 + *(_DWORD *)this->__pad_0) = String; /*0x7b73b1*/
    String = a2; /*0x7b73bb*/
    wcscat(v10, &String); /*0x7b73c0*/
    wcscat(v10, (const wchar_t *)(*(_DWORD *)this->__pad_0 + v9)); /*0x7b73c9*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b73d1*/
    *(_DWORD *)this->__pad_0 = v10; /*0x7b73d9*/
    return 1; /*0x7b73db*/
  }
  else
  {
    String = a2; /*0x7b7305*/
    v15 = 0; /*0x7b730a*/
    *(_DWORD *)this->__pad_0 = 0; /*0x7b7311*/
    if ( &v13 == (int *)-4 ) /*0x7b7317*/
      v4 = 1; /*0x7b7329*/
    else
      v4 = wcslen(&String) + 1; /*0x7b7326*/
    v5 = (_WORD *)__2_YAPAXI_Z(2 * v4); /*0x7b7331*/
    *(_DWORD *)this->__pad_0 = v5; /*0x7b733d*/
    *v5 = 0; /*0x7b733f*/
    if ( &String ) /*0x7b7346*/
      wcscpy(*(wchar_t **)this->__pad_0, &String); /*0x7b7350*/
    return 1; /*0x7b7358*/
  }
}



// ==== 0x007B73F0  WideString::Replace  this=GameSetup  sig=csp ====
char __thiscall WideString::Replace(WideString *this, wchar_t *SubStr, wchar_t *String)
{
  void **v3; // ebx
  const wchar_t *v4; // edi
  wchar_t *v5; // esi
  wchar_t *v6; // eax
  size_t v7; // ebp
  wchar_t *v8; // ebx
  wchar_t *v9; // eax
  wchar_t *v10; // ebx
  int v11; // edi
  wchar_t *v12; // eax
  wchar_t *v13; // ebp
  int v14; // ebx
  wchar_t *v15; // eax
  const wchar_t *v16; // edi
  int v17; // eax
  _WORD *v18; // eax
  size_t v20; // [esp+Ch] [ebp-Ch]
  wchar_t *v22; // [esp+14h] [ebp-4h]

  v3 = (void **)this; /*0x7b73f4*/
  v4 = *(const wchar_t **)this; /*0x7b73f8*/
  v5 = 0; /*0x7b73fa*/
  if ( !*(_DWORD *)this ) /*0x7b73f8*/
  {
    v4 = &g_TypeClass_DefaultString; /*0x7b7404*/
    if ( !&g_TypeClass_DefaultString ) /*0x7b740b*/
      goto LABEL_33; /*0x7b740b*/
  }
  while ( *v4 ) /*0x7b7416*/
  {
    v6 = wcsstr(v4, SubStr); /*0x7b7422*/
    v22 = v6; /*0x7b742a*/
    if ( !v6 ) /*0x7b7430*/
    {
      if ( v4 ) /*0x7b7521*/
      {
        v13 = v5; /*0x7b7524*/
        v14 = wcslen(v4) + 1; /*0x7b7530*/
        if ( v5 ) /*0x7b7533*/
          v14 += wcslen(v5); /*0x7b753e*/
        v15 = (wchar_t *)__2_YAPAXI_Z(4 * v14); /*0x7b7548*/
        v5 = v15; /*0x7b7550*/
        if ( v13 ) /*0x7b7554*/
          wcscpy(v15, v13); /*0x7b7558*/
        else
          *v15 = 0; /*0x7b7562*/
        wcscat(v5, v4); /*0x7b7569*/
        if ( v13 ) /*0x7b7573*/
          __3_YAXPAX_Z(v13); /*0x7b7576*/
      }
      break; /*0x7b7576*/
    }
    v7 = (char *)v6 - (char *)v4; /*0x7b7438*/
    if ( v6 != v4 ) /*0x7b743a*/
    {
      v8 = v5; /*0x7b743f*/
      v20 = v7 + 1; /*0x7b7443*/
      if ( v5 ) /*0x7b7447*/
        v20 += wcslen(v5); /*0x7b7458*/
      v9 = (wchar_t *)__2_YAPAXI_Z(4 * v20); /*0x7b7468*/
      v5 = v9; /*0x7b7470*/
      if ( v8 ) /*0x7b7474*/
        wcscpy(v9, v8); /*0x7b7478*/
      else
        *v9 = 0; /*0x7b7482*/
      wcsncat(v5, v4, v7); /*0x7b748a*/
      if ( v8 ) /*0x7b7494*/
        __3_YAXPAX_Z(v8); /*0x7b7497*/
    }
    if ( String ) /*0x7b74a5*/
    {
      v10 = v5; /*0x7b74a8*/
      v11 = wcslen(String) + 1; /*0x7b74b4*/
      if ( v5 ) /*0x7b74b7*/
        v11 += wcslen(v5); /*0x7b74c2*/
      v12 = (wchar_t *)__2_YAPAXI_Z(4 * v11); /*0x7b74cc*/
      v5 = v12; /*0x7b74d4*/
      if ( v10 ) /*0x7b74d8*/
        wcscpy(v12, v10); /*0x7b74dc*/
      else
        *v12 = 0; /*0x7b74e6*/
      wcscat(v5, String); /*0x7b74ed*/
      if ( v10 ) /*0x7b74f7*/
        __3_YAXPAX_Z(v10); /*0x7b74fa*/
    }
    v4 = &v22[wcslen(SubStr)]; /*0x7b7513*/
    if ( !v4 ) /*0x7b7518*/
      break; /*0x7b7518*/
  }
  if ( !v5 ) /*0x7b7581*/
  {
    v3 = (void **)this; /*0x7b7583*/
LABEL_33:
    v16 = &g_TypeClass_DefaultString; /*0x7b7587*/
    goto LABEL_35; /*0x7b758c*/
  }
  v3 = (void **)this; /*0x7b758e*/
  v16 = v5; /*0x7b7592*/
LABEL_35:
  if ( *v3 ) /*0x7b7594*/
    __3_YAXPAX_Z(*v3); /*0x7b759b*/
  *v3 = 0; /*0x7b75a5*/
  if ( v16 ) /*0x7b75ab*/
    v17 = wcslen(v16) + 1; /*0x7b75b6*/
  else
    v17 = 1; /*0x7b75b9*/
  v18 = (_WORD *)__2_YAPAXI_Z(2 * v17); /*0x7b75c1*/
  *v3 = v18; /*0x7b75c9*/
  *v18 = 0; /*0x7b75cd*/
  if ( v16 ) /*0x7b75d2*/
    wcscpy((wchar_t *)*v3, v16); /*0x7b75d8*/
  if ( v5 ) /*0x7b75e2*/
    __3_YAXPAX_Z(v5); /*0x7b75e5*/
  return 1; /*0x7b75ed*/
}



// ==== 0x007B7600  WideString::Reassign  this=GameSetup  sig=csp ====
__int16 __thiscall WideString::Reassign(WideString *this, wchar_t *String)
{
  int v3; // eax
  _WORD *v4; // eax

  if ( *(_DWORD *)this ) /*0x7b7604*/
    __3_YAXPAX_Z(*(void **)this); /*0x7b760b*/
  *(_DWORD *)this = 0; /*0x7b7617*/
  if ( String ) /*0x7b761f*/
    v3 = wcslen(String) + 1; /*0x7b762a*/
  else
    v3 = 1; /*0x7b762d*/
  v4 = (_WORD *)__2_YAPAXI_Z(2 * v3); /*0x7b7635*/
  *(_DWORD *)this = v4; /*0x7b763d*/
  *v4 = 0; /*0x7b7641*/
  if ( String ) /*0x7b7646*/
    wcscpy(*(wchar_t **)this, String); /*0x7b764c*/
  return 1; /*0x7b7654*/
}



// ==== 0x007B7660  ObjectClass::String_Helper_7B7660  this=ObjectClass  sig=csp ====
char __thiscall String_Helper_7B7660(ObjectClass *this, wchar_t a2, size_t a3)
{
  if ( a3 >= wcslen((const wchar_t *)this->AbstractClass) ) /*0x7b7674*/
    return 0; /*0x7b7676*/
  *((_WORD *)this->AbstractClass + a3) = a2; /*0x7b7684*/
  return 1; /*0x7b7678*/
}



// ==== 0x007B7740  ObjectClass::SendMultiplayerStartSignal_Start_77EBA0_Start_7B7740  this=ObjectClass  sig=csp ====
wchar_t **__thiscall SendMultiplayerStartSignal_Start_77EBA0_Start_7B7740(ObjectClass *this, wchar_t **a2)
{
  wchar_t *v3; // esi
  int v4; // eax
  unsigned int v5; // ebx
  wchar_t *v6; // edi
  int v7; // eax
  wchar_t *v8; // eax

  v3 = 0; /*0x7b7744*/
  if ( this->AbstractClass ) /*0x7b7746*/
  {
    v4 = wcslen((const wchar_t *)this->AbstractClass); /*0x7b774d*/
    v3 = (wchar_t *)__2_YAPAXI_Z(2 * v4 + 2); /*0x7b775e*/
    wcscpy(v3, (const wchar_t *)this->AbstractClass); /*0x7b7762*/
  }
  v5 = 0; /*0x7b776b*/
  v6 = v3; /*0x7b776d*/
  while ( v3 && v5 < wcslen(v3) ) /*0x7b777e*/
  {
    if ( *v6 >= 0x41u && *v6 <= 0x5Au ) /*0x7b778d*/
      *v6 = tolower(*v6); /*0x7b779d*/
    ++v5; /*0x7b77a0*/
    ++v6; /*0x7b77a1*/
  }
  *a2 = 0; /*0x7b77ad*/
  if ( v3 ) /*0x7b77b3*/
  {
    v7 = wcslen(v3); /*0x7b77b6*/
    v8 = (wchar_t *)__2_YAPAXI_Z(2 * v7 + 2); /*0x7b77c0*/
    *a2 = v8; /*0x7b77c7*/
    wcscpy(v8, v3); /*0x7b77c9*/
    __3_YAXPAX_Z(v3); /*0x7b77cf*/
  }
  return a2; /*0x7b77d9*/
}



// ==== 0x007B78D0  String::TruncateTo  this=String  sig=csp ====
char __thiscall String::TruncateTo(String *this, size_t Count)
{
  const wchar_t *v3; // esi
  wchar_t *v4; // eax
  wchar_t *v5; // edi
  const wchar_t *v6; // esi
  int v7; // eax
  _WORD *v8; // eax

  v3 = *(const wchar_t **)this->__pad_0; /*0x7b78d5*/
  if ( !*(_DWORD *)this->__pad_0 ) /*0x7b78d5*/
    v3 = &g_TypeClass_DefaultString; /*0x7b78db*/
  v4 = (wchar_t *)__2_YAPAXI_Z(2 * Count + 2); /*0x7b78ea*/
  v5 = v4; /*0x7b78ef*/
  *v4 = 0; /*0x7b78f6*/
  if ( v3 ) /*0x7b78fb*/
    wcsncpy(v4, v3, Count); /*0x7b7900*/
  v5[Count] = 0; /*0x7b7908*/
  v6 = &g_TypeClass_DefaultString; /*0x7b7911*/
  if ( v5 ) /*0x7b7916*/
    v6 = v5; /*0x7b7918*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b791a*/
    __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x7b7921*/
  *(_DWORD *)this->__pad_0 = 0; /*0x7b792b*/
  if ( v6 ) /*0x7b7931*/
    v7 = wcslen(v6) + 1; /*0x7b793c*/
  else
    v7 = 1; /*0x7b793f*/
  v8 = (_WORD *)__2_YAPAXI_Z(2 * v7); /*0x7b7948*/
  *(_DWORD *)this->__pad_0 = v8; /*0x7b7950*/
  *v8 = 0; /*0x7b7954*/
  if ( v6 ) /*0x7b7959*/
    wcscpy(*(wchar_t **)this->__pad_0, v6); /*0x7b795f*/
  if ( v5 ) /*0x7b7969*/
    __3_YAXPAX_Z(v5); /*0x7b796c*/
  return 1; /*0x7b7974*/
}



// ==== 0x007B7980  ObjectClass::UI_Helper_7B7980  this=ObjectClass  sig=csp ====
char __thiscall UI_Helper_7B7980(ObjectClass *this, wchar_t a2)
{
  wchar_t *v4; // eax
  signed int v5; // eax
  size_t v6; // esi
  const wchar_t *ptr_0; // ebp
  wchar_t *v8; // eax
  wchar_t *v9; // ebx
  const wchar_t *v10; // esi
  int v11; // eax
  _WORD *v12; // eax

  if ( !this->AbstractClass ) /*0x7b7983*/
    return 0; /*0x7b7989*/
  v4 = wcschr((const wchar_t *)this->AbstractClass, a2); /*0x7b7995*/
  if ( !v4 ) /*0x7b799f*/
    return 0; /*0x7b79a1*/
  v5 = ((char *)v4 - (char *)this->AbstractClass) >> 1; /*0x7b79ad*/
  v6 = v5; /*0x7b79b0*/
  ptr_0 = &g_TypeClass_DefaultString; /*0x7b79b4*/
  if ( this->AbstractClass ) /*0x7b79a7*/
    ptr_0 = (const wchar_t *)this->AbstractClass; /*0x7b79bb*/
  v8 = (wchar_t *)__2_YAPAXI_Z(2 * v5 + 2); /*0x7b79c2*/
  v9 = v8; /*0x7b79c7*/
  *v8 = 0; /*0x7b79ce*/
  if ( ptr_0 ) /*0x7b79d3*/
    wcsncpy(v8, ptr_0, v6); /*0x7b79d8*/
  v9[v6] = 0; /*0x7b79e0*/
  v10 = &g_TypeClass_DefaultString; /*0x7b79e6*/
  if ( v9 ) /*0x7b79ed*/
    v10 = v9; /*0x7b79ef*/
  if ( this->AbstractClass ) /*0x7b79f1*/
    __3_YAXPAX_Z(this->AbstractClass); /*0x7b79f8*/
  this->AbstractClass = 0; /*0x7b7a02*/
  if ( v10 ) /*0x7b7a08*/
    v11 = wcslen(v10) + 1; /*0x7b7a13*/
  else
    v11 = 1; /*0x7b7a16*/
  v12 = (_WORD *)__2_YAPAXI_Z(2 * v11); /*0x7b7a1e*/
  this->AbstractClass = v12; /*0x7b7a26*/
  *v12 = 0; /*0x7b7a2a*/
  if ( v10 ) /*0x7b7a2f*/
    wcscpy((wchar_t *)this->AbstractClass, v10); /*0x7b7a35*/
  if ( v9 ) /*0x7b7a3f*/
    __3_YAXPAX_Z(v9); /*0x7b7a42*/
  return 1; /*0x7b798b*/
}



// ==== 0x007B7A60  String::Tokenize2  this=String  sig=csp ====
int __thiscall String::Tokenize2(String *this, int a2, wchar_t *Str, void **a4)
{
  int v4; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int v11; // ebx
  const wchar_t *v12; // esi
  int v13; // eax
  _WORD *v14; // eax
  int v15; // esi
  const wchar_t *v16; // ebp
  size_t v17; // esi
  wchar_t *v18; // eax
  wchar_t *v19; // ebx
  const wchar_t *v20; // esi
  int v21; // eax
  _WORD *v22; // eax
  int v23; // [esp+10h] [ebp+4h]

  v4 = a2; /*0x7b7a62*/
  if ( a2 < 0 ) /*0x7b7a6b*/
    return -1; /*0x7b7a6f*/
  while ( 1 ) /*0x7b7a7a*/
  {
    v7 = *(_DWORD *)this->__pad_0; /*0x7b7a7a*/
    if ( *(_DWORD *)this->__pad_0 ) /*0x7b7a7a*/
      v7 = wcslen(*(const wchar_t **)this->__pad_0); /*0x7b7a81*/
    if ( v4 >= v7 || !wcschr(Str, *(_WORD *)(*(_DWORD *)this->__pad_0 + 2 * v4)) ) /*0x7b7a95*/
      break; /*0x7b7a95*/
    ++v4; /*0x7b7aa1*/
  }
  v8 = *(_DWORD *)this->__pad_0; /*0x7b7aa4*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x7b7aa4*/
    v8 = wcslen(*(const wchar_t **)this->__pad_0); /*0x7b7aab*/
  if ( v4 >= v8 ) /*0x7b7ab5*/
    return -1; /*0x7b7ab9*/
  v9 = v4; /*0x7b7ac1*/
  while ( 1 ) /*0x7b7ac3*/
  {
    v10 = *(_DWORD *)this->__pad_0; /*0x7b7ac3*/
    if ( *(_DWORD *)this->__pad_0 ) /*0x7b7ac3*/
      v10 = wcslen(*(const wchar_t **)this->__pad_0); /*0x7b7aca*/
    if ( v4 >= v10 || wcschr(Str, *(_WORD *)(*(_DWORD *)this->__pad_0 + 2 * v4)) ) /*0x7b7ade*/
      break; /*0x7b7ade*/
    ++v4; /*0x7b7aea*/
  }
  v11 = v4 - 1; /*0x7b7af3*/
  v23 = v4 - 1; /*0x7b7af8*/
  v12 = (const wchar_t *)(*(_DWORD *)this->__pad_0 + 2 * v9); /*0x7b7afe*/
  if ( *a4 ) /*0x7b7af6*/
    __3_YAXPAX_Z(*a4); /*0x7b7b04*/
  *a4 = 0; /*0x7b7b0e*/
  if ( v12 ) /*0x7b7b14*/
    v13 = wcslen(v12) + 1; /*0x7b7b1f*/
  else
    v13 = 1; /*0x7b7b22*/
  v14 = (_WORD *)__2_YAPAXI_Z(2 * v13); /*0x7b7b2b*/
  *a4 = v14; /*0x7b7b33*/
  *v14 = 0; /*0x7b7b37*/
  if ( v12 ) /*0x7b7b3c*/
    wcscpy((wchar_t *)*a4, v12); /*0x7b7b42*/
  v15 = v11 - v9; /*0x7b7b4e*/
  v16 = &g_TypeClass_DefaultString; /*0x7b7b50*/
  v17 = v15 + 1; /*0x7b7b55*/
  if ( *a4 ) /*0x7b7b4a*/
    v16 = (const wchar_t *)*a4; /*0x7b7b5a*/
  v18 = (wchar_t *)__2_YAPAXI_Z(2 * v17 + 2); /*0x7b7b61*/
  v19 = v18; /*0x7b7b66*/
  *v18 = 0; /*0x7b7b6d*/
  if ( v16 ) /*0x7b7b72*/
    wcsncpy(v18, v16, v17); /*0x7b7b77*/
  v19[v17] = 0; /*0x7b7b7f*/
  v20 = &g_TypeClass_DefaultString; /*0x7b7b88*/
  if ( v19 ) /*0x7b7b8d*/
    v20 = v19; /*0x7b7b8f*/
  if ( *a4 ) /*0x7b7b91*/
    __3_YAXPAX_Z(*a4); /*0x7b7b98*/
  *a4 = 0; /*0x7b7ba2*/
  if ( v20 ) /*0x7b7ba8*/
    v21 = wcslen(v20) + 1; /*0x7b7bb3*/
  else
    v21 = 1; /*0x7b7bb6*/
  v22 = (_WORD *)__2_YAPAXI_Z(2 * v21); /*0x7b7bbf*/
  *a4 = v22; /*0x7b7bc7*/
  *v22 = 0; /*0x7b7bcb*/
  if ( v20 ) /*0x7b7bd0*/
    wcscpy((wchar_t *)*a4, v20); /*0x7b7bd6*/
  if ( v19 ) /*0x7b7be0*/
    __3_YAXPAX_Z(v19); /*0x7b7be3*/
  return v23 + 1; /*0x7b7a6d*/
}



// ==== 0x007B7C00  ObjectClass::method_7B7C00  this=ObjectClass  sig=csp ====
int __thiscall sub_7B7C00(ObjectClass *this, int a2, void **a3)
{
  int v5; // esi
  void *ptr_0; // eax
  void *v8; // eax
  _WORD *v9; // eax
  int v10; // esi
  const wchar_t *v11; // esi
  int v12; // eax
  _WORD *v13; // eax
  size_t v14; // esi
  const wchar_t *v15; // ebp
  wchar_t *v16; // eax
  wchar_t *v17; // ebx
  const wchar_t *v18; // esi
  int v19; // eax
  _WORD *v20; // eax
  int v21; // [esp+10h] [ebp+4h]

  v5 = a2; /*0x7b7c09*/
  ptr_0 = this->AbstractClass; /*0x7b7c0b*/
  if ( this->AbstractClass ) /*0x7b7c0b*/
    ptr_0 = (void *)wcslen((const wchar_t *)this->AbstractClass); /*0x7b7c12*/
  if ( a2 >= (int)ptr_0 ) /*0x7b7c1c*/
    return -1; /*0x7b7c20*/
  while ( 1 ) /*0x7b7c27*/
  {
    v8 = this->AbstractClass; /*0x7b7c27*/
    if ( this->AbstractClass ) /*0x7b7c27*/
      v8 = (void *)wcslen((const wchar_t *)this->AbstractClass); /*0x7b7c2e*/
    if ( v5 >= (int)v8 || strchr(String2, *((unsigned __int16 *)this->AbstractClass + v5)) ) /*0x7b7c48*/
      break; /*0x7b7c48*/
    ++v5; /*0x7b7c54*/
  }
  v9 = this->AbstractClass; /*0x7b7c57*/
  v21 = v5; /*0x7b7c59*/
  if ( *((_WORD *)this->AbstractClass + v5) == 13 ) /*0x7b7c62*/
  {
    v10 = v5 + 1; /*0x7b7c64*/
    if ( v9[v10] == 10 ) /*0x7b7c6a*/
      v21 = v10; /*0x7b7c6c*/
  }
  v11 = &v9[a2]; /*0x7b7c74*/
  if ( *a3 ) /*0x7b7c77*/
    __3_YAXPAX_Z(*a3); /*0x7b7c7e*/
  *a3 = 0; /*0x7b7c88*/
  if ( v11 ) /*0x7b7c8e*/
    v12 = wcslen(v11) + 1; /*0x7b7c99*/
  else
    v12 = 1; /*0x7b7c9c*/
  v13 = (_WORD *)__2_YAPAXI_Z(2 * v12); /*0x7b7ca5*/
  *a3 = v13; /*0x7b7cad*/
  *v13 = 0; /*0x7b7cb1*/
  if ( v11 ) /*0x7b7cb6*/
    wcscpy((wchar_t *)*a3, v11); /*0x7b7cbc*/
  v14 = v21 - a2 + 1; /*0x7b7ccd*/
  v15 = &g_TypeClass_DefaultString; /*0x7b7cce*/
  if ( *a3 ) /*0x7b7cc8*/
    v15 = (const wchar_t *)*a3; /*0x7b7cd7*/
  v16 = (wchar_t *)__2_YAPAXI_Z(2 * v14 + 2); /*0x7b7cde*/
  v17 = v16; /*0x7b7ce3*/
  *v16 = 0; /*0x7b7cea*/
  if ( v15 ) /*0x7b7cef*/
    wcsncpy(v16, v15, v14); /*0x7b7cf4*/
  v17[v14] = 0; /*0x7b7cfc*/
  v18 = &g_TypeClass_DefaultString; /*0x7b7d05*/
  if ( v17 ) /*0x7b7d0a*/
    v18 = v17; /*0x7b7d0c*/
  if ( *a3 ) /*0x7b7d0e*/
    __3_YAXPAX_Z(*a3); /*0x7b7d15*/
  *a3 = 0; /*0x7b7d1f*/
  if ( v18 ) /*0x7b7d25*/
    v19 = wcslen(v18) + 1; /*0x7b7d30*/
  else
    v19 = 1; /*0x7b7d33*/
  v20 = (_WORD *)__2_YAPAXI_Z(2 * v19); /*0x7b7d3c*/
  *a3 = v20; /*0x7b7d44*/
  *v20 = 0; /*0x7b7d48*/
  if ( v18 ) /*0x7b7d4d*/
    wcscpy((wchar_t *)*a3, v18); /*0x7b7d53*/
  if ( v17 ) /*0x7b7d5d*/
    __3_YAXPAX_Z(v17); /*0x7b7d60*/
  return v21 + 1; /*0x7b7c1e*/
}



// ==== 0x007B7D80  Pipe::GetField  this=Pipe  sig=csp ====
int __thiscall Pipe::GetField(Pipe *this)
{
  return wcstol(*(const wchar_t **)this->__pad_0, 0, 10); /*0x7b7d8f*/
}



// ==== 0x007B7D90  WideString::IsASCII  this=WideString  sig=csp ====
int __thiscall WideString::IsASCII(WideString *this)
{
  int result; // eax
  int v3; // ecx
  _WORD *v4; // edx

  result = *(_DWORD *)this; /*0x7b7d93*/
  if ( *(_DWORD *)this && (result = wcslen(*(const wchar_t **)this), v3 = 0, result > 0) ) /*0x7b7da6*/
  {
    v4 = *(_WORD **)this; /*0x7b7da8*/
    while ( *v4 < 0x100u ) /*0x7b7daf*/
    {
      ++v3; /*0x7b7db1*/
      ++v4; /*0x7b7db2*/
      if ( v3 >= result ) /*0x7b7db7*/
        goto LABEL_6; /*0x7b7db7*/
    }
    LOBYTE(result) = 0; /*0x7b7dbd*/
  }
  else
  {
LABEL_6:
    LOBYTE(result) = 1; /*0x7b7db9*/
  }
  return result; /*0x7b7dbb*/
}



// ==== 0x007B7DD0  FormatWideString  this=-  sig=csp ====
wchar_t **__fastcall WideString_Format(wchar_t **a1, const wchar_t *a2)
{
  size_t v3; // eax
  wchar_t *v4; // eax
  wchar_t String[32]; // [esp+4h] [ebp-40h] BYREF

  swprintf(String, (const size_t)&g_Str_Fmt_PctD, a2); /*0x7b7de1*/
  *a1 = 0; /*0x7b7def*/
  if ( String ) /*0x7b7df5*/
    v3 = wcslen(String) + 1; /*0x7b7e04*/
  else
    v3 = 1; /*0x7b7e07*/
  v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3); /*0x7b7e0f*/
  *a1 = v4; /*0x7b7e1b*/
  *v4 = 0; /*0x7b7e1d*/
  if ( String ) /*0x7b7e24*/
    wcscpy(*a1, String); /*0x7b7e2e*/
  return a1; /*0x7b7e38*/
}



// ==== 0x007B7E40  WDTGame_Helper  this=-  sig=csp ====
wchar_t **__fastcall sub_7B7E40(wchar_t **a1, const wchar_t *a2, wchar_t *Format)
{
  size_t v5; // eax
  wchar_t *v6; // eax
  wchar_t String[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(String, (const size_t)a0Dd_0, Format); /*0x7b7e58*/
  swprintf(String, (const size_t)String, a2); /*0x7b7e68*/
  *a1 = 0; /*0x7b7e76*/
  if ( String ) /*0x7b7e7c*/
    v5 = wcslen(String) + 1; /*0x7b7e8b*/
  else
    v5 = 1; /*0x7b7e8e*/
  v6 = (wchar_t *)__2_YAPAXI_Z(2 * v5); /*0x7b7e96*/
  *a1 = v6; /*0x7b7ea2*/
  *v6 = 0; /*0x7b7ea4*/
  if ( String ) /*0x7b7eab*/
    wcscpy(*a1, String); /*0x7b7eb5*/
  return a1; /*0x7b7ebf*/
}



// ==== 0x007B7ED0  CharStringToWide  this=-  sig=csp ====
wchar_t **__fastcall String_CharToWide(wchar_t **a1, const char **a2)
{
  int v4; // esi
  wchar_t *v5; // edi
  char *v6; // eax
  size_t v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // esi
  size_t v10; // eax
  wchar_t *v11; // eax

  if ( *a2 ) /*0x7b7ed8*/
    v4 = strlen(*a2); /*0x7b7eec*/
  else
    v4 = 0; /*0x7b7ede*/
  v5 = (wchar_t *)__2_YAPAXI_Z(2 * v4 + 2); /*0x7b7ef8*/
  v6 = (char *)*a2; /*0x7b7efa*/
  if ( !*a2 ) /*0x7b7efa*/
    v6 = &g_INI_DefaultBuffer; /*0x7b7f03*/
  BulkCharToWide(v5, (unsigned __int8 *)v6, v4); /*0x7b7f0d*/
  if ( v5 ) /*0x7b7f14*/
    v7 = wcslen(v5) + 1; /*0x7b7f1f*/
  else
    v7 = 1; /*0x7b7f22*/
  v8 = (wchar_t *)__2_YAPAXI_Z(2 * v7); /*0x7b7f2b*/
  v9 = v8; /*0x7b7f30*/
  *v8 = 0; /*0x7b7f37*/
  if ( v5 ) /*0x7b7f3c*/
    wcscpy(v8, v5); /*0x7b7f40*/
  __3_YAXPAX_Z(v5); /*0x7b7f49*/
  *a1 = 0; /*0x7b7f51*/
  if ( v9 ) /*0x7b7f5a*/
  {
    v10 = wcslen(v9); /*0x7b7f5d*/
    v11 = (wchar_t *)__2_YAPAXI_Z(2 * v10 + 2); /*0x7b7f67*/
    *a1 = v11; /*0x7b7f6e*/
    wcscpy(v11, v9); /*0x7b7f71*/
    __3_YAXPAX_Z(v9); /*0x7b7f77*/
  }
  return a1; /*0x7b7f7f*/
}



// ==== 0x007B7F90  ToWideStringCharAlt  this=-  sig=csp ====
char **__fastcall sub_7B7F90(char **a1, const wchar_t **a2)
{
  char **v3; // esi
  size_t v4; // edi
  char *v5; // ebp
  wchar_t *v6; // eax
  size_t v7; // ecx
  char *v8; // ebx
  char *v9; // edx

  v3 = a1; /*0x7b7f95*/
  if ( *a2 ) /*0x7b7f97*/
    v4 = wcslen(*a2); /*0x7b7faf*/
  else
    v4 = 0; /*0x7b7fa2*/
  v5 = (char *)__2_YAPAXI_Z(v4 + 1); /*0x7b7fbb*/
  v6 = (wchar_t *)*a2; /*0x7b7fbd*/
  if ( !*a2 ) /*0x7b7fbd*/
    v6 = &g_TypeClass_DefaultString; /*0x7b7fc6*/
  CopyWideToChar(v5, (char *)v6, v4); /*0x7b7fd0*/
  if ( v5 ) /*0x7b7fd7*/
    v7 = strlen(v5) + 1; /*0x7b7fe0*/
  else
    v7 = 1; /*0x7b7fe6*/
  v8 = (char *)__2_YAPAXI_Z(v7); /*0x7b7ff1*/
  *v8 = 0; /*0x7b7ff8*/
  if ( v5 ) /*0x7b7ffb*/
  {
    strcpy(v8, v5); /*0x7b8013*/
    v3 = a1; /*0x7b801c*/
  }
  __3_YAXPAX_Z(v5); /*0x7b8021*/
  *v3 = 0; /*0x7b8029*/
  if ( !v8 ) /*0x7b8032*/
    return v3; /*0x7b807a*/
  v9 = (char *)__2_YAPAXI_Z(strlen(v8) + 1); /*0x7b8045*/
  *v3 = v9; /*0x7b804e*/
  strcpy(v9, v8); /*0x7b8060*/
  __3_YAXPAX_Z(v8); /*0x7b8069*/
  return a1; /*0x7b8075*/
}



// ==== 0x007B8090  FormatWideStringPrefix  this=-  sig=csp ====
wchar_t **__fastcall FormatWideStringPrefix(wchar_t **a1, const wchar_t *a2, wchar_t **a3)
{
  int v5; // eax
  wchar_t *v6; // eax
  wchar_t *v7; // edi
  int v8; // eax
  wchar_t *v9; // eax
  int v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // ecx
  wchar_t *String; // [esp+Ch] [ebp-4h] BYREF

  if ( a2 ) /*0x7b809a*/
    v5 = wcslen(a2) + 1; /*0x7b80a5*/
  else
    v5 = 1; /*0x7b80a8*/
  v6 = (wchar_t *)__2_YAPAXI_Z(2 * v5); /*0x7b80b0*/
  v7 = v6; /*0x7b80b5*/
  *v6 = 0; /*0x7b80bc*/
  if ( a2 ) /*0x7b80c1*/
    wcscpy(v6, a2); /*0x7b80c5*/
  String = 0; /*0x7b80cf*/
  if ( v7 ) /*0x7b80d7*/
  {
    v8 = wcslen(v7); /*0x7b80da*/
    String = (wchar_t *)__2_YAPAXI_Z(2 * v8 + 2); /*0x7b80eb*/
    wcscpy(String, v7); /*0x7b80ef*/
  }
  v9 = *a3; /*0x7b80fb*/
  if ( !*a3 ) /*0x7b80fb*/
    v9 = &g_TypeClass_DefaultString; /*0x7b8101*/
  WString::Append(&String, v9); /*0x7b810b*/
  *a1 = 0; /*0x7b8110*/
  if ( String ) /*0x7b811c*/
  {
    v10 = wcslen(String); /*0x7b811f*/
    v11 = (wchar_t *)__2_YAPAXI_Z(2 * v10 + 2); /*0x7b8129*/
    v12 = String; /*0x7b812e*/
    *a1 = v11; /*0x7b8132*/
    wcscpy(v11, v12); /*0x7b8136*/
    if ( String ) /*0x7b8144*/
      __3_YAXPAX_Z(String); /*0x7b8147*/
  }
  if ( v7 ) /*0x7b8151*/
    __3_YAXPAX_Z(v7); /*0x7b8154*/
  return a1; /*0x7b815c*/
}



// ==== 0x007B8170  ConcatWString  this=-  sig=csp ====
wchar_t **__fastcall WString_Concat(wchar_t **a1, const wchar_t **a2, const wchar_t **a3)
{
  wchar_t **v4; // ebx
  wchar_t *v5; // esi
  size_t v6; // eax
  const wchar_t *v7; // ebp
  wchar_t *v8; // ebx
  size_t v9; // edi
  wchar_t *v10; // eax
  size_t v11; // eax
  wchar_t *v12; // eax

  v4 = a1; /*0x7b8176*/
  v5 = 0; /*0x7b8178*/
  if ( *a2 ) /*0x7b817a*/
  {
    v6 = wcslen(*a2); /*0x7b8185*/
    v5 = (wchar_t *)__2_YAPAXI_Z(2 * v6 + 2); /*0x7b8196*/
    wcscpy(v5, *a2); /*0x7b819a*/
  }
  v7 = *a3; /*0x7b81a7*/
  if ( *a3 || (v7 = &g_TypeClass_DefaultString) != 0 ) /*0x7b81b4*/
  {
    v8 = v5; /*0x7b81b7*/
    v9 = wcslen(v7) + 1; /*0x7b81c3*/
    if ( v5 ) /*0x7b81c6*/
      v9 += wcslen(v5); /*0x7b81d1*/
    v10 = (wchar_t *)__2_YAPAXI_Z(4 * v9); /*0x7b81db*/
    v5 = v10; /*0x7b81e3*/
    if ( v8 ) /*0x7b81e7*/
      wcscpy(v10, v8); /*0x7b81eb*/
    else
      *v10 = 0; /*0x7b81f5*/
    wcscat(v5, v7); /*0x7b81fc*/
    if ( v8 ) /*0x7b8206*/
      __3_YAXPAX_Z(v8); /*0x7b8209*/
    v4 = a1; /*0x7b8211*/
  }
  *v4 = 0; /*0x7b8217*/
  if ( v5 ) /*0x7b821e*/
  {
    v11 = wcslen(v5); /*0x7b8221*/
    v12 = (wchar_t *)__2_YAPAXI_Z(2 * v11 + 2); /*0x7b822b*/
    *v4 = v12; /*0x7b8232*/
    wcscpy(v12, v5); /*0x7b8234*/
    __3_YAXPAX_Z(v5); /*0x7b823a*/
  }
  return v4; /*0x7b8242*/
}



// ==== 0x007B8250  ObjectClass::method_7B8250  this=ObjectClass  sig=csp ====
bool __thiscall sub_7B8250(ObjectClass *this, wchar_t *Control)
{
  size_t v3; // edi

  if ( !Control || !this->AbstractClass ) /*0x7b825c*/
    return 0; /*0x7b8284*/
  v3 = wcslen((const wchar_t *)this->AbstractClass); /*0x7b8269*/
  return wcscspn((const wchar_t *)this->AbstractClass, Control) < v3; /*0x7b827c*/
}



// ==== 0x007B82E0  Game_Set  this=-  sig=csp ====
char **__fastcall sub_7B82E0(char **a1, const wchar_t **a2)
{
  const wchar_t *v3; // eax
  int v4; // esi
  char *v5; // ebp
  wchar_t *v6; // eax
  size_t v7; // ecx
  char *v8; // ebx
  char *v9; // edx

  v3 = *a2; /*0x7b82eb*/
  if ( *a2 ) /*0x7b82eb*/
    v3 = (const wchar_t *)wcslen(*a2); /*0x7b82f2*/
  v4 = 16 * ((_DWORD)v3 + 1); /*0x7b8302*/
  v5 = (char *)__2_YAPAXI_Z((v4 + 6) / 7); /*0x7b831c*/
  v6 = (wchar_t *)*a2; /*0x7b831e*/
  if ( !*a2 ) /*0x7b831e*/
    v6 = &g_TypeClass_DefaultString; /*0x7b8327*/
  BinkMovieClass::AllocateRenderSurface(v6, v5, v4); /*0x7b8331*/
  if ( v5 ) /*0x7b8338*/
    v7 = strlen(v5) + 1; /*0x7b8341*/
  else
    v7 = 1; /*0x7b8347*/
  v8 = (char *)__2_YAPAXI_Z(v7); /*0x7b8352*/
  *v8 = 0; /*0x7b8359*/
  if ( v5 ) /*0x7b835c*/
    strcpy(v8, v5); /*0x7b8374*/
  __3_YAXPAX_Z(v5); /*0x7b837e*/
  *a1 = 0; /*0x7b838c*/
  if ( v8 ) /*0x7b8393*/
  {
    v9 = (char *)__2_YAPAXI_Z(strlen(v8) + 1); /*0x7b83a6*/
    *a1 = v9; /*0x7b83af*/
    strcpy(v9, v8); /*0x7b83c2*/
    __3_YAXPAX_Z(v8); /*0x7b83cb*/
  }
  return a1; /*0x7b83d3*/
}



// ==== 0x007B83E0  UI_Setup_7B83E0  this=-  sig=csp ====
wchar_t **__fastcall sub_7B83E0(wchar_t **a1, const char **a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // esi
  wchar_t *v6; // edi
  char *v7; // eax
  size_t v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // esi
  size_t v11; // eax
  wchar_t *v12; // eax

  if ( *a2 ) /*0x7b83e8*/
    v4 = strlen(*a2); /*0x7b83fb*/
  else
    v4 = 0; /*0x7b83ee*/
  v5 = (int)(((7 * (v4 + 1)) >> 3) + 1) / 2; /*0x7b840f*/
  v6 = (wchar_t *)__2_YAPAXI_Z(2 * v5 + 2); /*0x7b841b*/
  v7 = (char *)*a2; /*0x7b841d*/
  if ( !*a2 ) /*0x7b841d*/
    v7 = &g_INI_DefaultBuffer; /*0x7b8426*/
  BinkMovieClass::OpenFile((unsigned __int8 *)v7, v6, v5); /*0x7b8430*/
  if ( v6 ) /*0x7b8437*/
    v8 = wcslen(v6) + 1; /*0x7b8442*/
  else
    v8 = 1; /*0x7b8445*/
  v9 = (wchar_t *)__2_YAPAXI_Z(2 * v8); /*0x7b844e*/
  v10 = v9; /*0x7b8453*/
  *v9 = 0; /*0x7b845a*/
  if ( v6 ) /*0x7b845f*/
    wcscpy(v9, v6); /*0x7b8463*/
  __3_YAXPAX_Z(v6); /*0x7b846c*/
  *a1 = 0; /*0x7b8474*/
  if ( v10 ) /*0x7b847d*/
  {
    v11 = wcslen(v10); /*0x7b8480*/
    v12 = (wchar_t *)__2_YAPAXI_Z(2 * v11 + 2); /*0x7b848a*/
    *a1 = v12; /*0x7b8491*/
    wcscpy(v12, v10); /*0x7b8494*/
    __3_YAXPAX_Z(v10); /*0x7b849a*/
  }
  return a1; /*0x7b84a2*/
}



// ==== 0x007B84B0  sub_7B84B0  this=-  sig=ida-proto ====
int sub_7B84B0()
{
  dword_B78128 = 0; /*0x7b84b2*/
  dword_B7812C = 0; /*0x7b84b7*/
  dword_B78130 = 0; /*0x7b84bc*/
  dword_B78134 = 0; /*0x7b84c1*/
  return 0; /*0x7b84c6*/
}



// ==== 0x007B84D0  Audio_Update  this=-  sig=ida-proto ====
int sub_7B84D0()
{
  int result; // eax

  result = dword_B7816C; /*0x7b84d0*/
  if ( !dword_B7816C ) /*0x7b84d7*/
  {
    if ( dword_B78164 ) /*0x7b84e1*/
      return WWMouseClass::UpdateCursorMovement((LONG *)dword_B78164); /*0x7b84e3*/
  }
  return result; /*0x7b84e8*/
}



// ==== 0x007B84F0  WinMain_Helper_7B84F0  this=-  sig=ida-proto ====
HANDLE sub_7B84F0()
{
  HANDLE result; // eax
  DWORD LastError; // eax
  CHAR Buffer[1024]; // [esp+4h] [ebp-400h] BYREF

  result = hMutex; /*0x7b84f0*/
  if ( !hMutex ) /*0x7b8500*/
  {
    result = CreateMutexA(0, 0, 0); /*0x7b8505*/
    hMutex = result; /*0x7b850b*/
  }
  if ( !dword_B7816C ) /*0x7b8516*/
  {
    if ( result ) /*0x7b851e*/
    {
      dword_B78138 = 0; /*0x7b8524*/
      dword_B78140 = 0; /*0x7b852a*/
      dword_B78150 = 0; /*0x7b8530*/
      dword_B78148 = 16; /*0x7b8536*/
      dword_B7814C = 0; /*0x7b8540*/
      dword_B7813C = 0; /*0x7b8546*/
      result = CreateThread(0, 0x1000u, (LPTHREAD_START_ROUTINE)sub_7B8610, &dword_B78138, 0, &dword_B78158); /*0x7b8562*/
      dword_B78154 = result; /*0x7b856a*/
      if ( result ) /*0x7b856f*/
      {
        dword_B7816C = 1; /*0x7b8578*/
        result = (HANDLE)SetThreadPriority(result, 15); /*0x7b8582*/
        if ( !result ) /*0x7b858a*/
        {
          LastError = GetLastError(); /*0x7b8598*/
          FormatMessageA(0x1000u, 0, LastError, 0, Buffer, 0x400u, 0); /*0x7b85a5*/
          Debug::Log(); /*0x7b85b5*/
          while ( !dword_B78140 ) /*0x7b85c4*/
            Sleep(0); /*0x7b85ce*/
          WaitForSingleObject(dword_B78154, 0x1388u); /*0x7b85e6*/
          result = (HANDLE)CloseHandle(dword_B78154); /*0x7b85f2*/
          dword_B7816C = 0; /*0x7b85f8*/
        }
      }
    }
  }
  return result; /*0x7b85fe*/
}



// ==== 0x007B8610  sub_7B8610  this=-  sig=csp ====
DWORD __stdcall sub_7B8610(_DWORD *lpThreadParameter)
{
  lpThreadParameter[6] = 1; /*0x7b861a*/
  lpThreadParameter[2] = 0; /*0x7b861d*/
  if ( *lpThreadParameter ) /*0x7b8624*/
  {
    lpThreadParameter[2] = 1; /*0x7b86a7*/
    return 0; /*0x7b86aa*/
  }
  else
  {
    do /*0x7b8695*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b8650*/
        Debug::Log(); /*0x7b8661*/
      if ( dword_B78164 ) /*0x7b8671*/
        WWMouseClass::UpdateCursorMovement((LONG *)dword_B78164); /*0x7b8673*/
      ReleaseMutex(hMutex); /*0x7b867f*/
      Sleep(lpThreadParameter[4]); /*0x7b8688*/
      ++lpThreadParameter[1]; /*0x7b868e*/
    }
    while ( !*lpThreadParameter ); /*0x7b8695*/
    lpThreadParameter[2] = 1; /*0x7b8697*/
    return 0; /*0x7b86a1*/
  }
}



// ==== 0x007B8730  MouseClass::Construct  this=MouseClass  sig=csp ====
_DWORD *__thiscall MouseClass::Construct(MouseClass *this, int a2, int a3)
{
  char *pad_2C; // edi
  char *v5; // ecx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // ecx
  int v11; // edi

  pad_2C = this->__pad_2C; /*0x7b8742*/
  *(_DWORD *)&this->__pad_18[12] = a2; /*0x7b8745*/
  this->MouseClass_field_0x0 = &Mouse::`vftable'; /*0x7b8748*/
  this->MouseClass_field_0x4 = 0; /*0x7b874e*/
  this->MouseClass_field_0x8 = 0; /*0x7b8751*/
  this->MouseClass_field_0xC = (void *)-1; /*0x7b8754*/
  LOBYTE(this->MouseClass_field_0x10) = 0; /*0x7b8757*/
  this->MouseClass_field_0x14 = 0; /*0x7b875a*/
  *(_DWORD *)this->__pad_18 = 0; /*0x7b875d*/
  *(_DWORD *)&this->__pad_18[4] = 0; /*0x7b8760*/
  *(_DWORD *)&this->__pad_18[8] = 0; /*0x7b8763*/
  this->MouseClass_field_0x28 = a3; /*0x7b8766*/
  v5 = this->__pad_2C; /*0x7b876f*/
  *(_DWORD *)v5 = dword_B78128; /*0x7b8776*/
  *((_DWORD *)v5 + 1) = dword_B7812C; /*0x7b877e*/
  *((_DWORD *)v5 + 2) = dword_B78130; /*0x7b8787*/
  v6 = dword_B78134; /*0x7b878a*/
  *(_DWORD *)this->__pad_3C = 0; /*0x7b8790*/
  *(_DWORD *)&this->__pad_3C[4] = 0; /*0x7b8793*/
  *((_DWORD *)v5 + 3) = v6; /*0x7b8796*/
  *(_DWORD *)&this->__pad_3C[8] = 0; /*0x7b8799*/
  *(_DWORD *)&this->__pad_3C[12] = dword_B78128; /*0x7b87a5*/
  *(_DWORD *)&this->__pad_3C[16] = dword_B7812C; /*0x7b87ae*/
  *(_DWORD *)&this->__pad_3C[20] = dword_B78130; /*0x7b87b7*/
  v7 = dword_B78134; /*0x7b87ba*/
  *(_DWORD *)&this->__pad_3C[28] = 0; /*0x7b87c0*/
  *(_DWORD *)&this->__pad_3C[24] = v7; /*0x7b87c3*/
  *(_DWORD *)&this->__pad_3C[32] = dword_B78128; /*0x7b87cf*/
  *(_DWORD *)&this->__pad_3C[36] = dword_B7812C; /*0x7b87d8*/
  *(_DWORD *)&this->__pad_3C[40] = dword_B78130; /*0x7b87e1*/
  v8 = dword_B78134; /*0x7b87e4*/
  *(_DWORD *)this->__pad_6C = 0; /*0x7b87ea*/
  this->MouseClass_field_0x68 = v8; /*0x7b87ed*/
  this->MouseClass_field_0x70 = (CampaignClass *)dword_B78128; /*0x7b87f9*/
  *(_DWORD *)this->__pad_74 = dword_B7812C; /*0x7b8802*/
  *(_DWORD *)&this->__pad_74[4] = dword_B78130; /*0x7b880b*/
  *(_DWORD *)&this->__pad_74[8] = dword_B78134; /*0x7b8814*/
  *(_DWORD *)&this->__pad_74[12] = dword_B78128; /*0x7b8823*/
  *(_DWORD *)&this->__pad_74[16] = dword_B7812C; /*0x7b882f*/
  *(_DWORD *)&this->__pad_74[20] = dword_B78130; /*0x7b8838*/
  v9 = dword_B78134; /*0x7b883b*/
  *(_DWORD *)&this->__pad_74[28] = -1; /*0x7b8841*/
  *(_DWORD *)&this->__pad_74[32] = 0; /*0x7b8847*/
  *(_DWORD *)&this->__pad_74[24] = v9; /*0x7b884d*/
  this->MouseClass_field_0x0 = &WWMouseClass::`vftable'; /*0x7b8850*/
  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b8867*/
    Debug::Log(); /*0x7b8878*/
  MouseClass::CalcConfiningRect(this); /*0x7b8882*/
  v10 = *(_DWORD *)pad_2C; /*0x7b888a*/
  v11 = *(_DWORD *)&this->MouseClass_field_0x2D[3]; /*0x7b888f*/
  *(_DWORD *)this->__pad_3C = v10 + *(_DWORD *)&this->__pad_31[3] / 2; /*0x7b8896*/
  *(_DWORD *)&this->__pad_3C[4] = v11 + this->MouseClass_field_0x38[0] / 2; /*0x7b88a3*/
  dword_B78164 = (WWMouseClass *)this; /*0x7b88ad*/
  ReleaseMutex(hMutex); /*0x7b88b3*/
  ShowCursor(0); /*0x7b88ba*/
  return &this->MouseClass_field_0x0; /*0x7b88c2*/
}



// ==== 0x007B88D0  WWMouseClass::loadCursorImages  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::loadCursorImages(WWMouseClass *this)
{
  int result; // eax
  int (__thiscall ***WWMouseClass_field_0x44)(_DWORD, int); // ecx
  int (__thiscall ***WWMouseClass_field_0x58)(_DWORD, int); // ecx
  MouseClass *WWMouseClass_field_0x6C; // ecx

  *(_DWORD *)this->__pad_0 = &WWMouseClass::`vftable'; /*0x7b88d9*/
  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b88f0*/
    Debug::Log(); /*0x7b8901*/
  if ( dword_B78164 == this ) /*0x7b8912*/
    dword_B78164 = 0; /*0x7b8914*/
  result = ReleaseMutex(hMutex); /*0x7b8921*/
  WWMouseClass_field_0x44 = (int (__thiscall ***)(_DWORD, int))this->WWMouseClass_field_0x44; /*0x7b8927*/
  if ( WWMouseClass_field_0x44 ) /*0x7b892c*/
  {
    result = (**WWMouseClass_field_0x44)(WWMouseClass_field_0x44, 1); /*0x7b8932*/
    this->WWMouseClass_field_0x44 = 0; /*0x7b8934*/
  }
  WWMouseClass_field_0x58 = (int (__thiscall ***)(_DWORD, int))this->WWMouseClass_field_0x58; /*0x7b8937*/
  if ( WWMouseClass_field_0x58 ) /*0x7b893c*/
  {
    result = (**WWMouseClass_field_0x58)(WWMouseClass_field_0x58, 1); /*0x7b8942*/
    this->WWMouseClass_field_0x58 = 0; /*0x7b8944*/
  }
  WWMouseClass_field_0x6C = this->WWMouseClass_field_0x6C; /*0x7b8947*/
  if ( WWMouseClass_field_0x6C ) /*0x7b894c*/
  {
    result = (*(int (__thiscall **)(MouseClass *, int))WWMouseClass_field_0x6C->MouseClass_field_0x0)( /*0x7b8952*/
               WWMouseClass_field_0x6C,
               1);
    this->WWMouseClass_field_0x6C = 0; /*0x7b8954*/
  }
  *(_DWORD *)this->__pad_0 = &Mouse::`vftable'; /*0x7b8957*/
  return result; /*0x7b895d*/
}



// ==== 0x007B8960  MouseClass::CalcConfiningRect  this=MouseClass  sig=csp ====
void __thiscall MouseClass::CalcConfiningRect(MouseClass *this)
{
  MouseClass *v1; // esi
  HWND v2; // eax
  LONG y; // edi
  int v4; // ecx
  int v5; // eax
  HWND MouseClass_field_0x28; // [esp-8h] [ebp-30h]
  struct tagPOINT Point; // [esp+8h] [ebp-20h] BYREF
  struct tagPOINT v8; // [esp+10h] [ebp-18h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  v1 = this; /*0x7b8964*/
  GetClientRect((HWND)this->MouseClass_field_0x28, &Rect); /*0x7b8970*/
  Point.x = Rect.left; /*0x7b8984*/
  MouseClass_field_0x28 = (HWND)v1->MouseClass_field_0x28; /*0x7b8990*/
  Point.y = Rect.top; /*0x7b8991*/
  ClientToScreen(MouseClass_field_0x28, &Point); /*0x7b8995*/
  v8.x = Rect.right; /*0x7b899f*/
  v2 = (HWND)v1->MouseClass_field_0x28; /*0x7b89a3*/
  v8.y = Rect.bottom; /*0x7b89aa*/
  ClientToScreen(v2, &v8); /*0x7b89b0*/
  y = Point.y; /*0x7b89b6*/
  v1 = (MouseClass *)((char *)v1 + 44); /*0x7b89c2*/
  v4 = v8.y - Point.y; /*0x7b89c5*/
  v5 = v8.x - Point.x; /*0x7b89c7*/
  v1->MouseClass_field_0x0 = (void *)Point.x; /*0x7b89ca*/
  v1->MouseClass_field_0x4 = (void *)y; /*0x7b89cf*/
  v1->MouseClass_field_0x8 = (void *)v5; /*0x7b89d7*/
  v1->MouseClass_field_0xC = (void *)v4; /*0x7b89da*/
  Debug::Log(); /*0x7b89dd*/
}



// ==== 0x007B89F0  WWMouseClass::COMStub  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::COMStub(WWMouseClass *this)
{
  return (int)this->WWMouseClass_field_0xC; /*0x7b89f3*/
}



// ==== 0x007B8A00  WWMouseClass::AddRef  this=WWMouseClass  sig=csp ====
void __thiscall WWMouseClass::AddRef(WWMouseClass *this, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  void *v4; // ebx
  DWORD (__stdcall *v6)(HANDLE, DWORD); // edi
  int WWMouseClass_field_0x24; // ecx
  int WWMouseClass_field_0x44; // ebp
  int v9; // edx
  int v10; // edi
  int v11; // ebx
  char *v12; // edx
  void (__stdcall *v13)(HANDLE); // ebp
  int v14; // eax
  _DWORD *inited; // eax
  char *v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // [esp-18h] [ebp-40h]
  char *v20; // [esp+8h] [ebp-20h] BYREF
  int v21; // [esp+Ch] [ebp-1Ch]
  int v22; // [esp+10h] [ebp-18h]
  int v23; // [esp+14h] [ebp-14h]
  char *v24; // [esp+18h] [ebp-10h] BYREF
  char *v25; // [esp+1Ch] [ebp-Ch]
  int v26; // [esp+20h] [ebp-8h]
  int v27; // [esp+24h] [ebp-4h]

  v4 = (void *)a3; /*0x7b8a04*/
  if ( a3 ) /*0x7b8a0d*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 28))(this) ) /*0x7b8a15*/
    {
      v6 = WaitForSingleObject; /*0x7b8a28*/
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b8a3b*/
        Debug::Log(); /*0x7b8a4c*/
      if ( (*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 8))(this) ) /*0x7b8a58*/
      {
        v13 = (void (__stdcall *)(HANDLE))ReleaseMutex; /*0x7b8b0e*/
      }
      else
      {
        if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b8a75*/
          Debug::Log(); /*0x7b8a86*/
        if ( *(int *)&this->__pad_48[8] > 0 && *(int *)&this->__pad_48[12] > 0 ) /*0x7b8a9a*/
        {
          WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b8a9c*/
          if ( WWMouseClass_field_0x24 ) /*0x7b8aa1*/
          {
            WWMouseClass_field_0x44 = this->WWMouseClass_field_0x44; /*0x7b8aa3*/
            if ( WWMouseClass_field_0x44 ) /*0x7b8aa8*/
            {
              v9 = *(_DWORD *)&this->__pad_48[4]; /*0x7b8aad*/
              v10 = *(_DWORD *)&this->__pad_48[8]; /*0x7b8ab3*/
              v11 = *(_DWORD *)&this->__pad_48[12]; /*0x7b8ab6*/
              v24 = (char *)this->WWMouseClass_field_0x2C + *(_DWORD *)this->__pad_48; /*0x7b8abb*/
              v12 = (char *)this->WWMouseClass_field_0x30 + v9; /*0x7b8ac2*/
              v20 = 0; /*0x7b8ac6*/
              v21 = 0; /*0x7b8aca*/
              v26 = v10; /*0x7b8ad4*/
              v27 = v11; /*0x7b8ad8*/
              v25 = v12; /*0x7b8adc*/
              v22 = v10; /*0x7b8ae0*/
              v23 = v11; /*0x7b8ae4*/
              (*(void (__thiscall **)(int, char **, int, char **, _DWORD, int))(*(_DWORD *)WWMouseClass_field_0x24 + 8))( /*0x7b8af0*/
                WWMouseClass_field_0x24,
                &v24,
                WWMouseClass_field_0x44,
                &v20,
                0,
                1);
              v4 = (void *)a3; /*0x7b8af3*/
              v6 = WaitForSingleObject; /*0x7b8af7*/
            }
          }
        }
        v13 = (void (__stdcall *)(HANDLE))ReleaseMutex; /*0x7b8b03*/
        ReleaseMutex(hMutex); /*0x7b8b0a*/
      }
      this->WWMouseClass_field_0x4 = v4; /*0x7b8b1c*/
      this->WWMouseClass_field_0x8 = (void *)a4; /*0x7b8b1f*/
      *(_DWORD *)this->__pad_3C = *a2; /*0x7b8b24*/
      v14 = *(_DWORD *)this->__pad_0; /*0x7b8b2a*/
      *(_DWORD *)&this->__pad_3C[4] = a2[1]; /*0x7b8b2e*/
      if ( !(*(unsigned __int8 (__thiscall **)(WWMouseClass *))(v14 + 8))(this) ) /*0x7b8b31*/
      {
        if ( v6(hMutex, 0x2710u) == 258 ) /*0x7b8b4f*/
          Debug::Log(); /*0x7b8b60*/
        if ( (unsigned __int8)BSurface::CreateTripleBuffer((int)this) ) /*0x7b8b6a*/
        {
          if ( this->WWMouseClass_field_0x24 ) /*0x7b8b77*/
          {
            inited = WWMouseClass::initCursorState(this, &v24); /*0x7b8b87*/
            *(_DWORD *)this->__pad_48 = *inited; /*0x7b8b96*/
            *(_DWORD *)&this->__pad_48[4] = inited[1]; /*0x7b8b9b*/
            *(_DWORD *)&this->__pad_48[8] = inited[2]; /*0x7b8ba1*/
            *(_DWORD *)&this->__pad_48[12] = inited[3]; /*0x7b8ba7*/
            v20 = (char *)*inited; /*0x7b8bac*/
            v16 = (char *)this->WWMouseClass_field_0x2C + (unsigned int)v20; /*0x7b8bb3*/
            v21 = inited[1]; /*0x7b8bb6*/
            v22 = inited[2]; /*0x7b8bbd*/
            v17 = inited[3]; /*0x7b8bc1*/
            v20 = v16; /*0x7b8bc4*/
            v18 = this->WWMouseClass_field_0x44; /*0x7b8bcd*/
            v21 += (int)this->WWMouseClass_field_0x30; /*0x7b8bd0*/
            v19 = this->WWMouseClass_field_0x24; /*0x7b8bdc*/
            v23 = v17; /*0x7b8bdd*/
            v24 = 0; /*0x7b8be1*/
            v25 = 0; /*0x7b8be5*/
            v26 = v22; /*0x7b8be9*/
            v27 = v17; /*0x7b8bed*/
            (*(void (__thiscall **)(int, char **, int, char **, _DWORD, int))(*(_DWORD *)v18 + 8))( /*0x7b8bf8*/
              v18,
              &v24,
              v19,
              &v20,
              0,
              1);
          }
        }
        Mouse::DrawCursor((Mouse *)this, (int *)this->WWMouseClass_field_0x24, 0, 0); /*0x7b8c05*/
        v13(hMutex); /*0x7b8c11*/
      }
      v13(hMutex); /*0x7b8c1a*/
    }
    else
    {
      this->WWMouseClass_field_0x4 = (void *)a3; /*0x7b8c2a*/
      this->WWMouseClass_field_0x8 = (void *)a4; /*0x7b8c2d*/
      *(_DWORD *)this->__pad_3C = *a2; /*0x7b8c36*/
      *(_DWORD *)&this->__pad_3C[4] = a2[1]; /*0x7b8c3c*/
    }
  }
}



// ==== 0x007B8C60  BSurface::CreateTripleBuffer  this=IUnknown  sig=csp ====
int __thiscall BSurface::CreateTripleBuffer(int this)
{
  int v2; // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int v4; // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int v6; // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx
  _DWORD *v8; // edi
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  int v12; // eax
  _DWORD *v13; // edi
  int v14; // eax
  int v15; // ebx
  int v16; // ebp
  int v17; // eax
  _DWORD *v18; // edi
  int v19; // eax
  int v20; // ebx
  int v21; // ebp
  int v22; // eax
  int result; // eax

  if ( *(_DWORD *)(this + 4) ) /*0x7b8c66*/
  {
    v2 = *(_DWORD *)(this + 68); /*0x7b8c6f*/
    if ( v2 /*0x7b8c9a*/
      && (*(__int16 *)(*(_DWORD *)(this + 4) + 2) > (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 124))(v2)
       || *(__int16 *)(*(_DWORD *)(this + 4) + 4) > (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 68) + 128))(*(_DWORD *)(this + 68))) )
    {
      v3 = *(void (__thiscall ****)(_DWORD, int))(this + 68); /*0x7b8c9c*/
      if ( v3 ) /*0x7b8ca1*/
        (**v3)(v3, 1); /*0x7b8ca7*/
      *(_DWORD *)(this + 68) = 0; /*0x7b8ca9*/
    }
    v4 = *(_DWORD *)(this + 88); /*0x7b8cac*/
    if ( v4 /*0x7b8cd7*/
      && (*(__int16 *)(*(_DWORD *)(this + 4) + 2) > (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 124))(v4)
       || *(__int16 *)(*(_DWORD *)(this + 4) + 4) > (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 128))(*(_DWORD *)(this + 88))) )
    {
      v5 = *(void (__thiscall ****)(_DWORD, int))(this + 88); /*0x7b8cd9*/
      if ( v5 ) /*0x7b8cde*/
        (**v5)(v5, 1); /*0x7b8ce4*/
      *(_DWORD *)(this + 88) = 0; /*0x7b8ce6*/
    }
    v6 = *(_DWORD *)(this + 108); /*0x7b8ce9*/
    if ( v6 /*0x7b8d14*/
      && (*(__int16 *)(*(_DWORD *)(this + 4) + 2) > (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 124))(v6)
       || *(__int16 *)(*(_DWORD *)(this + 4) + 4) > (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 108) + 128))(*(_DWORD *)(this + 108))) )
    {
      v7 = *(void (__thiscall ****)(_DWORD, int))(this + 108); /*0x7b8d16*/
      if ( v7 ) /*0x7b8d1b*/
        (**v7)(v7, 1); /*0x7b8d21*/
      *(_DWORD *)(this + 108) = 0; /*0x7b8d23*/
    }
    if ( *(_DWORD *)(this + 36) ) /*0x7b8d26*/
    {
      if ( !*(_DWORD *)(this + 68) ) /*0x7b8d33*/
      {
        v8 = __2_YAPAXI_Z(0x20u); /*0x7b8d3f*/
        if ( v8 ) /*0x7b8d46*/
        {
          v9 = *(_DWORD *)(this + 4); /*0x7b8d4b*/
          v10 = *(__int16 *)(v9 + 4); /*0x7b8d50*/
          v11 = *(__int16 *)(v9 + 2); /*0x7b8d54*/
          v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 112))(*(_DWORD *)(this + 36)); /*0x7b8d58*/
          v8[4] = v12; /*0x7b8d5b*/
          v8[1] = v11; /*0x7b8d6a*/
          v8[2] = v10; /*0x7b8d6d*/
          v8[3] = 0; /*0x7b8d70*/
          *v8 = &XSurface_Vtable; /*0x7b8d77*/
          Buffer::Init(v8 + 5, 0, v10 * v11 * v12); /*0x7b8d7d*/
          *v8 = &BSurface_Vtable; /*0x7b8d82*/
        }
        else
        {
          v8 = 0; /*0x7b8d8a*/
        }
        *(_DWORD *)(this + 68) = v8; /*0x7b8d8c*/
      }
      if ( !*(_DWORD *)(this + 88) ) /*0x7b8d8f*/
      {
        v13 = __2_YAPAXI_Z(0x20u); /*0x7b8d9d*/
        if ( v13 ) /*0x7b8da4*/
        {
          v14 = *(_DWORD *)(this + 4); /*0x7b8da6*/
          v15 = *(__int16 *)(v14 + 4); /*0x7b8dac*/
          v16 = *(__int16 *)(v14 + 2); /*0x7b8db0*/
          v17 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 112))(*(_DWORD *)(this + 36)); /*0x7b8db6*/
          v13[4] = v17; /*0x7b8db9*/
          v13[1] = v16; /*0x7b8dc8*/
          v13[2] = v15; /*0x7b8dcb*/
          v13[3] = 0; /*0x7b8dce*/
          *v13 = &XSurface_Vtable; /*0x7b8dd5*/
          Buffer::Init(v13 + 5, 0, v15 * v16 * v17); /*0x7b8ddb*/
          *v13 = &BSurface_Vtable; /*0x7b8de0*/
        }
        else
        {
          v13 = 0; /*0x7b8de8*/
        }
        *(_DWORD *)(this + 88) = v13; /*0x7b8dea*/
      }
      if ( !*(_DWORD *)(this + 108) ) /*0x7b8ded*/
      {
        v18 = __2_YAPAXI_Z(0x20u); /*0x7b8dfb*/
        if ( v18 ) /*0x7b8e02*/
        {
          v19 = *(_DWORD *)(this + 4); /*0x7b8e07*/
          v20 = *(__int16 *)(v19 + 4); /*0x7b8e0c*/
          v21 = *(__int16 *)(v19 + 2); /*0x7b8e10*/
          v22 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 112))(*(_DWORD *)(this + 36)); /*0x7b8e14*/
          v18[4] = v22; /*0x7b8e17*/
          v18[1] = v21; /*0x7b8e26*/
          v18[2] = v20; /*0x7b8e29*/
          v18[3] = 0; /*0x7b8e2c*/
          *v18 = &XSurface_Vtable; /*0x7b8e33*/
          Buffer::Init(v18 + 5, 0, v20 * v21 * v22); /*0x7b8e39*/
          *v18 = &BSurface_Vtable; /*0x7b8e3e*/
        }
        else
        {
          v18 = 0; /*0x7b8e46*/
        }
        *(_DWORD *)(this + 108) = v18; /*0x7b8e48*/
      }
    }
    return *(_DWORD *)(this + 68) && *(_DWORD *)(this + 88) && *(_DWORD *)(this + 108); /*0x7b8e63*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x7b8e70*/
  }
  return result; /*0x7b8e62*/
}



// ==== 0x007B8E80  WWMouseClass::initCursorState  this=WWMouseClass  sig=csp ====
_DWORD *__thiscall WWMouseClass::initCursorState(WWMouseClass *this, _DWORD *a2)
{
  int v3; // edi
  void *WWMouseClass_field_0x4; // eax
  int v5; // ebx
  int v6; // ebp
  int v7; // ecx
  int *FoundationSize; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // edx
  int v12; // ebx
  _DWORD v14[3]; // [esp+10h] [ebp-10h] BYREF
  int v15; // [esp+1Ch] [ebp-4h]

  v3 = 0; /*0x7b8e89*/
  WWMouseClass_field_0x4 = this->WWMouseClass_field_0x4; /*0x7b8e8b*/
  v5 = 0; /*0x7b8e8e*/
  v6 = 0; /*0x7b8e90*/
  v7 = 0; /*0x7b8e92*/
  if ( WWMouseClass_field_0x4 ) /*0x7b8e96*/
  {
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b8eae*/
      Debug::Log(); /*0x7b8ebf*/
    FoundationSize = Building::GetFoundationSize(v14, (unsigned int)this->WWMouseClass_field_0x8); /*0x7b8ed3*/
    v9 = *FoundationSize; /*0x7b8ed8*/
    v10 = *(_DWORD *)this->__pad_14; /*0x7b8eda*/
    v11 = *(_DWORD *)&this->__pad_14[4]; /*0x7b8edd*/
    v12 = FoundationSize[1]; /*0x7b8ee0*/
    v6 = FoundationSize[2]; /*0x7b8ee3*/
    v15 = FoundationSize[3]; /*0x7b8ee9*/
    v3 = v10 - *(_DWORD *)this->__pad_3C + v9; /*0x7b8efd*/
    v5 = v11 - *(_DWORD *)&this->__pad_3C[4] + v12; /*0x7b8eff*/
    ReleaseMutex(hMutex); /*0x7b8f01*/
    v7 = v15; /*0x7b8f07*/
  }
  *a2 = v3; /*0x7b8f11*/
  a2[1] = v5; /*0x7b8f15*/
  a2[2] = v6; /*0x7b8f18*/
  a2[3] = v7; /*0x7b8f1d*/
  return a2; /*0x7b8f13*/
}



// ==== 0x007B8F30  WWMouseClass::updateCursorRect  this=WWMouseClass  sig=csp ====
char __thiscall WWMouseClass::updateCursorRect(WWMouseClass *this)
{
  int WWMouseClass_field_0x24; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // ebp
  int v6; // eax
  int *FoundationSize; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // edx
  int v11; // ebx
  char *v12; // edx
  int v13; // edx
  char *v14; // ebx
  int WWMouseClass_field_0x44; // ecx
  _DWORD v17[4]; // [esp+4h] [ebp-30h] BYREF
  _DWORD v18[3]; // [esp+14h] [ebp-20h] BYREF
  int v19; // [esp+20h] [ebp-14h]
  int v20[4]; // [esp+24h] [ebp-10h] BYREF

  LOBYTE(WWMouseClass_field_0x24) = BSurface::CreateTripleBuffer((int)this); /*0x7b8f36*/
  if ( (_BYTE)WWMouseClass_field_0x24 ) /*0x7b8f3d*/
  {
    WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b8f43*/
    if ( WWMouseClass_field_0x24 ) /*0x7b8f48*/
    {
      v3 = 0; /*0x7b8f54*/
      v4 = 0; /*0x7b8f56*/
      v5 = 0; /*0x7b8f58*/
      v6 = 0; /*0x7b8f5a*/
      if ( this->WWMouseClass_field_0x4 ) /*0x7b8f4e*/
      {
        if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b8f76*/
          Debug::Log(); /*0x7b8f87*/
        FoundationSize = Building::GetFoundationSize(v20, (unsigned int)this->WWMouseClass_field_0x8); /*0x7b8f9b*/
        v8 = *FoundationSize; /*0x7b8fa0*/
        v9 = *(_DWORD *)this->__pad_14; /*0x7b8fa2*/
        v10 = *(_DWORD *)&this->__pad_14[4]; /*0x7b8fa5*/
        v11 = FoundationSize[1]; /*0x7b8fa8*/
        v5 = FoundationSize[2]; /*0x7b8fab*/
        v19 = FoundationSize[3]; /*0x7b8fb1*/
        v3 = v9 - *(_DWORD *)this->__pad_3C + v8; /*0x7b8fbf*/
        v4 = v10 - *(_DWORD *)&this->__pad_3C[4] + v11; /*0x7b8fc7*/
        ReleaseMutex(hMutex); /*0x7b8fc9*/
        v6 = v19; /*0x7b8fcf*/
      }
      v12 = (char *)this->WWMouseClass_field_0x2C + v3; /*0x7b8fd9*/
      *(_DWORD *)this->__pad_48 = v3; /*0x7b8fdf*/
      v17[0] = v12; /*0x7b8fe1*/
      *(_DWORD *)&this->__pad_48[4] = v4; /*0x7b8fe9*/
      v18[0] = 0; /*0x7b8fec*/
      v18[1] = 0; /*0x7b8ff0*/
      *(_DWORD *)&this->__pad_48[8] = v5; /*0x7b8ff5*/
      v13 = this->WWMouseClass_field_0x24; /*0x7b8ffd*/
      *(_DWORD *)&this->__pad_48[12] = v6; /*0x7b9000*/
      v14 = (char *)this->WWMouseClass_field_0x30 + v4; /*0x7b9006*/
      WWMouseClass_field_0x44 = this->WWMouseClass_field_0x44; /*0x7b9008*/
      v17[2] = v5; /*0x7b900c*/
      v17[3] = v6; /*0x7b9010*/
      v17[1] = v14; /*0x7b9014*/
      v18[2] = v5; /*0x7b9018*/
      v19 = v6; /*0x7b901c*/
      LOBYTE(WWMouseClass_field_0x24) = (*(int (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)WWMouseClass_field_0x44 + 8))( /*0x7b9027*/
                                          WWMouseClass_field_0x44,
                                          v18,
                                          v13,
                                          v17,
                                          0,
                                          1);
    }
  }
  return WWMouseClass_field_0x24; /*0x7b902d*/
}



// ==== 0x007B9040  WWMouseClass::initSurface  this=WWMouseClass  sig=csp ====
_DWORD *__thiscall WWMouseClass::initSurface(WWMouseClass *this)
{
  _DWORD *result; // eax
  int WWMouseClass_field_0x24; // ecx
  int v3; // ebp
  int v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // edx
  _DWORD v8[4]; // [esp+4h] [ebp-20h] BYREF
  _DWORD v9[4]; // [esp+14h] [ebp-10h] BYREF

  result = this->__pad_0; /*0x7b9040*/
  if ( *(int *)&this->__pad_48[8] > 0 && *(int *)&this->__pad_48[12] > 0 ) /*0x7b9052*/
  {
    WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b9054*/
    if ( WWMouseClass_field_0x24 ) /*0x7b9059*/
    {
      v3 = result[17]; /*0x7b905b*/
      if ( v3 ) /*0x7b9060*/
      {
        v4 = result[21]; /*0x7b9069*/
        v5 = result[19]; /*0x7b906d*/
        v6 = result[20]; /*0x7b9071*/
        v9[0] = result[11] + result[18]; /*0x7b9074*/
        v7 = result[12]; /*0x7b9078*/
        v8[0] = 0; /*0x7b907f*/
        v8[1] = 0; /*0x7b9083*/
        v9[2] = v6; /*0x7b908f*/
        v9[3] = v4; /*0x7b9093*/
        v9[1] = v7 + v5; /*0x7b9097*/
        v8[2] = v6; /*0x7b909b*/
        v8[3] = v4; /*0x7b909f*/
        return (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)WWMouseClass_field_0x24 /*0x7b90ab*/
                                                                                          + 8))(
                           WWMouseClass_field_0x24,
                           v9,
                           v3,
                           v8,
                           0,
                           1);
      }
    }
  }
  return result; /*0x7b90b1*/
}



// ==== 0x007B90C0  WWMouseClass::DrawCursorBuffered  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::DrawCursorBuffered(WWMouseClass *this, int *a2, char a3)
{
  int result; // eax
  MouseClass *WWMouseClass_field_0x6C; // ebx
  WWMouseClass *pad_5C; // esi
  int v8; // esi
  void *WWMouseClass_field_0x8; // ecx
  void *WWMouseClass_field_0xC; // edx
  void (__thiscall **MouseClass_field_0x0)(MouseClass *, int *, int *, WWMouseClass *, _DWORD, int); // edx
  int v12; // eax
  int v13; // ebx
  void *WWMouseClass_field_0x4; // eax
  int WWMouseClass_field_0x44; // ecx
  void *v16; // eax
  void *v17; // esi
  void *v18; // edx
  int v19; // ecx
  int v20; // [esp+14h] [ebp-20h] BYREF
  void *v21; // [esp+18h] [ebp-1Ch]
  void *v22; // [esp+1Ch] [ebp-18h]
  void *v23; // [esp+20h] [ebp-14h]
  int v24; // [esp+24h] [ebp-10h] BYREF
  int v25; // [esp+28h] [ebp-Ch]
  void *v26; // [esp+2Ch] [ebp-8h]
  void *v27; // [esp+30h] [ebp-4h]
  int v28; // [esp+38h] [ebp+4h]

  result = (*(int (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 8))(this); /*0x7b90cb*/
  if ( !(_BYTE)result ) /*0x7b90d0*/
  {
    result = (*(int (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 28))(this); /*0x7b90da*/
    if ( (_BYTE)result ) /*0x7b90df*/
    {
      result = 0; /*0x7b90e9*/
      if ( a2 ) /*0x7b90ed*/
      {
        if ( a2 != (int *)this->WWMouseClass_field_0x24 ) /*0x7b90f6*/
        {
          if ( a3 ) /*0x7b9108*/
          {
            if ( LOBYTE(stru_A8EB00.ObjectTypeClass[31]) ) /*0x7b910c*/
              result = -*(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x7b9113*/
            WWMouseClass_field_0x6C = this->WWMouseClass_field_0x6C; /*0x7b9115*/
            v28 = result; /*0x7b9118*/
            pad_5C = this + 1; /*0x7b911c*/
          }
          else
          {
            if ( !LOBYTE(stru_A8EB00.ObjectTypeClass[31]) ) /*0x7b9123*/
            {
              v8 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2) - *(_DWORD *)&DSurface_ViewBounds.__pad_8[16]; /*0x7b913d*/
              if ( -(*((int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 31))(DSurface_Sidebar) <= v8 ) /*0x7b9146*/
                result = (*(int (__thiscall **)(int *))(*a2 + 124))(a2) - *(_DWORD *)&DSurface_ViewBounds.__pad_8[16]; /*0x7b915f*/
              else
                result = -(*((int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 31))(DSurface_Sidebar); /*0x7b9153*/
            }
            WWMouseClass_field_0x6C = (MouseClass *)this->WWMouseClass_field_0x58; /*0x7b9165*/
            v28 = result; /*0x7b9168*/
            pad_5C = (WWMouseClass *)this->__pad_5C; /*0x7b916c*/
          }
          if ( WWMouseClass_field_0x6C && (result = this->WWMouseClass_field_0x44) != 0 ) /*0x7b917c*/
          {
            if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9198*/
              Debug::Log(); /*0x7b91a9*/
            *(_DWORD *)pad_5C->__pad_0 = *(_DWORD *)this->__pad_48; /*0x7b91ba*/
            pad_5C->WWMouseClass_field_0x4 = *(void **)&this->__pad_48[4]; /*0x7b91bf*/
            pad_5C->WWMouseClass_field_0x8 = *(void **)&this->__pad_48[8]; /*0x7b91c5*/
            pad_5C->WWMouseClass_field_0xC = *(void **)&this->__pad_48[12]; /*0x7b91cb*/
            WWMouseClass_field_0x8 = pad_5C->WWMouseClass_field_0x8; /*0x7b91d4*/
            WWMouseClass_field_0xC = pad_5C->WWMouseClass_field_0xC; /*0x7b91d9*/
            *(_DWORD *)pad_5C->__pad_0 += v28; /*0x7b91dc*/
            v20 = 0; /*0x7b91e0*/
            v21 = 0; /*0x7b91e4*/
            v23 = WWMouseClass_field_0xC; /*0x7b91e9*/
            MouseClass_field_0x0 = (void (__thiscall **)(MouseClass *, int *, int *, WWMouseClass *, _DWORD, int))WWMouseClass_field_0x6C->MouseClass_field_0x0; /*0x7b91ed*/
            v22 = WWMouseClass_field_0x8; /*0x7b91f4*/
            MouseClass_field_0x0[2](WWMouseClass_field_0x6C, &v20, a2, pad_5C, 0, 1); /*0x7b91fc*/
            if ( a3 /*0x7b921b*/
              && (v12 = *(_DWORD *)pad_5C->__pad_0, *(int *)pad_5C->__pad_0 < 0)
              && (v13 = -v12,
                  -v12 < (*(int (__thiscall **)(int))(*(_DWORD *)this->WWMouseClass_field_0x44 + 124))(this->WWMouseClass_field_0x44)) )
            {
              WWMouseClass_field_0x4 = pad_5C->WWMouseClass_field_0x4; /*0x7b921d*/
              WWMouseClass_field_0x44 = this->WWMouseClass_field_0x44; /*0x7b9220*/
              v20 = 0; /*0x7b9227*/
              v21 = WWMouseClass_field_0x4; /*0x7b922b*/
              v16 = pad_5C->WWMouseClass_field_0x8; /*0x7b922f*/
              v17 = pad_5C->WWMouseClass_field_0xC; /*0x7b9232*/
              v25 = 0; /*0x7b9235*/
              v22 = v16; /*0x7b923e*/
              v23 = v17; /*0x7b9243*/
              v24 = v13; /*0x7b9247*/
              v26 = v16; /*0x7b924b*/
              v27 = v17; /*0x7b924f*/
              (*(void (__thiscall **)(int, int *, int *, int *, _DWORD, int))(*(_DWORD *)WWMouseClass_field_0x44 + 8))( /*0x7b925b*/
                WWMouseClass_field_0x44,
                &v24,
                a2,
                &v20,
                0,
                1);
            }
            else
            {
              v18 = pad_5C->WWMouseClass_field_0xC; /*0x7b9263*/
              v26 = pad_5C->WWMouseClass_field_0x8; /*0x7b9268*/
              v19 = this->WWMouseClass_field_0x44; /*0x7b926c*/
              v24 = 0; /*0x7b9271*/
              v25 = 0; /*0x7b9275*/
              v27 = v18; /*0x7b927a*/
              (*(void (__thiscall **)(int, int *, int *, WWMouseClass *, _DWORD, int))(*(_DWORD *)v19 + 8))( /*0x7b9287*/
                v19,
                &v24,
                a2,
                pad_5C,
                0,
                1);
            }
            Mouse::DrawCursor((Mouse *)this, a2, v28, 0); /*0x7b9294*/
            return ReleaseMutex(hMutex); /*0x7b92a0*/
          }
          else
          {
            pad_5C->WWMouseClass_field_0x8 = 0; /*0x7b92b0*/
          }
        }
      }
    }
  }
  return result; /*0x7b92a6*/
}



// ==== 0x007B92D0  WWMouseClass::updateCursor  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::updateCursor(WWMouseClass *this, int *a2, char a3)
{
  int result; // eax
  int WWMouseClass_field_0x58; // edi
  WWMouseClass *pad_5C; // esi
  int v7; // edx
  _DWORD v8[2]; // [esp+Ch] [ebp-20h] BYREF
  void *WWMouseClass_field_0x8; // [esp+14h] [ebp-18h]
  void *WWMouseClass_field_0xC; // [esp+18h] [ebp-14h]
  _DWORD v11[4]; // [esp+1Ch] [ebp-10h] BYREF

  result = (*(int (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 8))(this); /*0x7b92da*/
  if ( !(_BYTE)result ) /*0x7b92df*/
  {
    result = (*(int (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 28))(this); /*0x7b92e9*/
    if ( (_BYTE)result ) /*0x7b92ee*/
    {
      if ( a2 ) /*0x7b92fa*/
      {
        if ( a2 != (int *)this->WWMouseClass_field_0x24 ) /*0x7b9303*/
        {
          WWMouseClass_field_0x58 = this->WWMouseClass_field_0x58; /*0x7b9309*/
          if ( WWMouseClass_field_0x58 ) /*0x7b930e*/
          {
            result = (int)this->WWMouseClass_field_0x6C; /*0x7b9314*/
            if ( result ) /*0x7b9319*/
            {
              if ( a3 ) /*0x7b9325*/
              {
                pad_5C = this + 1; /*0x7b9327*/
                WWMouseClass_field_0x58 = result; /*0x7b932a*/
              }
              else
              {
                pad_5C = (WWMouseClass *)this->__pad_5C; /*0x7b9349*/
              }
              v8[0] = *(_DWORD *)pad_5C->__pad_0; /*0x7b932e*/
              v8[1] = pad_5C->WWMouseClass_field_0x4; /*0x7b9335*/
              WWMouseClass_field_0x8 = pad_5C->WWMouseClass_field_0x8; /*0x7b933c*/
              WWMouseClass_field_0xC = pad_5C->WWMouseClass_field_0xC; /*0x7b9343*/
              if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9382*/
                Debug::Log(); /*0x7b9393*/
              v7 = *a2; /*0x7b93a3*/
              v11[2] = WWMouseClass_field_0x8; /*0x7b93a6*/
              v11[3] = WWMouseClass_field_0xC; /*0x7b93b0*/
              v11[0] = 0; /*0x7b93bf*/
              v11[1] = 0; /*0x7b93c7*/
              (*(void (__thiscall **)(int *, _DWORD *, int, _DWORD *, _DWORD, int))(v7 + 8))( /*0x7b93cf*/
                a2,
                v8,
                WWMouseClass_field_0x58,
                v11,
                0,
                1);
              return ReleaseMutex(hMutex); /*0x7b93d9*/
            }
          }
        }
      }
    }
  }
  return result; /*0x7b93df*/
}



// ==== 0x007B93F0  Mouse::DrawCursor  this=IUnknown  sig=csp ====
void __thiscall Mouse::DrawCursor(Mouse *this, int *a2, int a3, int a4)
{
  MixFileClass *v5; // ecx
  int v6; // ebx
  int v7; // ebp
  int v8; // esi
  int v9; // edi
  int SubFile; // eax
  int v11; // eax
  _DWORD *v12; // [esp-2Ch] [ebp-78h]
  int v13; // [esp+4h] [ebp-48h] BYREF
  int v14; // [esp+8h] [ebp-44h]
  int v15; // [esp+Ch] [ebp-40h] BYREF
  int v16; // [esp+10h] [ebp-3Ch]
  int v17; // [esp+14h] [ebp-38h]
  int v18; // [esp+18h] [ebp-34h]
  _BYTE v19[16]; // [esp+1Ch] [ebp-30h] BYREF
  int v20[5]; // [esp+2Ch] [ebp-20h] BYREF
  int v21[3]; // [esp+40h] [ebp-Ch] BYREF

  v13 = (int)this; /*0x7b93f5*/
  v5 = *(MixFileClass **)&this->m_1[3]; /*0x7b93f9*/
  if ( v5 && a2 && *(_DWORD *)&stru_87F5F0.__pad_58[128] ) /*0x7b9418*/
  {
    v6 = this->u32_14; /*0x7b942e*/
    v7 = this->q054; /*0x7b9431*/
    v8 = a3 + this->q048; /*0x7b9438*/
    v9 = a4 + this->q04C; /*0x7b943e*/
    SubFile = MixFileClass::GetSubFile(v5, *(_DWORD *)&this->__pad_5[3]); /*0x7b9440*/
    v20[1] = v6; /*0x7b9447*/
    v20[2] = v7; /*0x7b9454*/
    v20[3] = 0; /*0x7b9458*/
    v20[4] = 1; /*0x7b9468*/
    Buffer::Init((Buffer *)v21, SubFile, v7 * v6); /*0x7b9470*/
    v20[0] = (int)&BSurface_Vtable; /*0x7b947d*/
    if ( a2 == *(int **)(v13 + 36) ) /*0x7b9488*/
    {
      v15 = 0; /*0x7b9499*/
      v16 = 0; /*0x7b949d*/
      v12 = (_DWORD *)(v13 + 44); /*0x7b94a6*/
      v13 = v8; /*0x7b94b8*/
      v14 = v9; /*0x7b94bc*/
      v17 = v6; /*0x7b94c0*/
      v18 = v7; /*0x7b94c4*/
    }
    else
    {
      v15 = 0; /*0x7b94da*/
      v16 = 0; /*0x7b94de*/
      v11 = *a2; /*0x7b94e3*/
      v13 = v8; /*0x7b94e6*/
      v14 = v9; /*0x7b94ea*/
      v17 = v6; /*0x7b94ee*/
      v18 = v7; /*0x7b94f2*/
      v12 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v11 + 120))(a2, v19); /*0x7b94f9*/
    }
    BlitterDrawSHP(a2, *(int *)&stru_87F5F0.__pad_58[128], v20, &v15, &v13, v12, 0, 0, 0, 0, 1000, 0, 0); /*0x7b94c8*/
    Vector::Clear((int)v21); /*0x7b951f*/
  }
}



// ==== 0x007B9530  ObjectClass::method_7B9530  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_7B9530(ObjectClass *this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // ebp
  int v5; // eax
  int *FoundationSize; // eax
  int v7; // edi
  int abstractFlags; // edx
  int v9; // ebx
  int v10; // ecx
  int nextArrayIndex; // eax
  int v12; // ecx
  ObjectClass *nextObject; // ecx
  char *v14; // ebx
  int v15; // ecx
  int occupant; // [esp-1Ch] [ebp-50h]
  _DWORD v18[4]; // [esp+4h] [ebp-30h] BYREF
  _DWORD v19[3]; // [esp+14h] [ebp-20h] BYREF
  int v20; // [esp+20h] [ebp-14h]
  _DWORD v21[4]; // [esp+24h] [ebp-10h] BYREF

  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b954c*/
    Debug::Log(); /*0x7b955d*/
  if ( (unsigned __int8)BSurface::CreateTripleBuffer((int)this) && this->occupant ) /*0x7b9574*/
  {
    v2 = 0; /*0x7b9585*/
    v3 = 0; /*0x7b9587*/
    v4 = 0; /*0x7b9589*/
    v5 = 0; /*0x7b958b*/
    if ( this->? ) /*0x7b957f*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b95a8*/
        Debug::Log(); /*0x7b95b9*/
      FoundationSize = Building::GetFoundationSize(v21, (unsigned int)this->?); /*0x7b95cd*/
      v7 = *FoundationSize; /*0x7b95d2*/
      abstractFlags = this->?; /*0x7b95d4*/
      v9 = FoundationSize[1]; /*0x7b95d7*/
      v4 = FoundationSize[2]; /*0x7b95da*/
      v10 = FoundationSize[3]; /*0x7b95dd*/
      nextArrayIndex = this->?; /*0x7b95e0*/
      v20 = v10; /*0x7b95e3*/
      v2 = abstractFlags - this->ambientSoundController[0] + v7; /*0x7b95f2*/
      v3 = nextArrayIndex - this->ambientSoundController[1] + v9; /*0x7b95fa*/
      ReleaseMutex(hMutex); /*0x7b95fc*/
      v5 = v20; /*0x7b9602*/
    }
    v12 = v2 + this->fallRate; /*0x7b960c*/
    this->ambientSoundController[3] = v2; /*0x7b9610*/
    v18[0] = v12; /*0x7b9616*/
    nextObject = this->nextObject; /*0x7b961a*/
    this->ambientSoundController[4] = v3; /*0x7b961d*/
    v14 = (char *)nextObject + v3; /*0x7b9620*/
    v15 = this->ambientSoundController[2]; /*0x7b9622*/
    v18[2] = v4; /*0x7b9625*/
    this->customSound_controller[0] = v4; /*0x7b9629*/
    v18[3] = v5; /*0x7b962c*/
    v18[1] = v14; /*0x7b9630*/
    v19[2] = v4; /*0x7b9634*/
    this->customSound_controller[1] = v5; /*0x7b9638*/
    v19[0] = 0; /*0x7b963d*/
    v19[1] = 0; /*0x7b9641*/
    occupant = this->occupant; /*0x7b964e*/
    v20 = v5; /*0x7b964f*/
    (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)v15 + 8))( /*0x7b965a*/
      v15,
      v19,
      occupant,
      v18,
      0,
      1);
  }
  Mouse::DrawCursor((Mouse *)this, (int *)this->occupant, 0, 0); /*0x7b966a*/
  return ReleaseMutex(hMutex); /*0x7b967c*/
}



// ==== 0x007B9690  WWMouseClass::renderDragSelectionRect  this=WWMouseClass  sig=csp ====
BOOL __thiscall WWMouseClass::renderDragSelectionRect(WWMouseClass *this)
{
  int WWMouseClass_field_0x24; // ecx
  int WWMouseClass_field_0x44; // ebp
  int v4; // edx
  int v5; // ebx
  int v6; // edi
  char *WWMouseClass_field_0x30; // eax
  _DWORD v9[4]; // [esp+8h] [ebp-20h] BYREF
  _DWORD v10[4]; // [esp+18h] [ebp-10h] BYREF

  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b96ad*/
    Debug::Log(); /*0x7b96be*/
  if ( *(int *)&this->__pad_48[8] > 0 && *(int *)&this->__pad_48[12] > 0 ) /*0x7b96d2*/
  {
    WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b96d4*/
    if ( WWMouseClass_field_0x24 ) /*0x7b96d9*/
    {
      WWMouseClass_field_0x44 = this->WWMouseClass_field_0x44; /*0x7b96db*/
      if ( WWMouseClass_field_0x44 ) /*0x7b96e0*/
      {
        v4 = *(_DWORD *)&this->__pad_48[4]; /*0x7b96e5*/
        v5 = *(_DWORD *)&this->__pad_48[12]; /*0x7b96ec*/
        v6 = *(_DWORD *)&this->__pad_48[8]; /*0x7b96f0*/
        v10[0] = (char *)this->WWMouseClass_field_0x2C + *(_DWORD *)this->__pad_48; /*0x7b96f3*/
        WWMouseClass_field_0x30 = (char *)this->WWMouseClass_field_0x30; /*0x7b96f7*/
        v9[0] = 0; /*0x7b9700*/
        v9[1] = 0; /*0x7b9704*/
        v10[2] = v6; /*0x7b970e*/
        v10[3] = v5; /*0x7b9712*/
        v10[1] = &WWMouseClass_field_0x30[v4]; /*0x7b9716*/
        v9[2] = v6; /*0x7b971a*/
        v9[3] = v5; /*0x7b971e*/
        (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)WWMouseClass_field_0x24 + 8))( /*0x7b972a*/
          WWMouseClass_field_0x24,
          v10,
          WWMouseClass_field_0x44,
          v9,
          0,
          1);
      }
    }
  }
  return ReleaseMutex(hMutex); /*0x7b973c*/
}



// ==== 0x007B9750  WWMouseClass::showCursor  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::showCursor(WWMouseClass *this)
{
  int result; // eax
  char *v3; // eax
  int *FoundationSize; // eax
  int v5; // edi
  int v6; // edx
  int v7; // edi
  int X; // eax
  int Y; // ecx
  int Width; // edx
  int Height; // edi
  char *v12; // ebp
  int *WWMouseClass_field_0x44; // eax
  int v14; // ebp
  _DWORD *v15; // eax
  int WWMouseClass_field_0x24; // [esp-1Ch] [ebp-50h]
  Rect v17; // [esp+4h] [ebp-30h] BYREF
  _DWORD v18[4]; // [esp+14h] [ebp-20h] BYREF
  Rect v19; // [esp+24h] [ebp-10h] BYREF

  result = (int)this->WWMouseClass_field_0xC; /*0x7b9756*/
  if ( result ) /*0x7b975b*/
  {
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b977b*/
      Debug::Log(); /*0x7b978c*/
    v3 = (char *)this->WWMouseClass_field_0xC + 1; /*0x7b979d*/
    this->WWMouseClass_field_0xC = v3; /*0x7b979e*/
    if ( !v3 ) /*0x7b97a1*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 28))(this) ) /*0x7b97ab*/
      {
        if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b97c8*/
          Debug::Log(); /*0x7b97d9*/
        if ( (unsigned __int8)BSurface::CreateTripleBuffer((int)this) && this->WWMouseClass_field_0x24 ) /*0x7b97f0*/
        {
          Rect::Set(&v17, 0, 0, 0, 0); /*0x7b9807*/
          if ( this->WWMouseClass_field_0x4 ) /*0x7b980c*/
          {
            UI_Helper_7BA2C0(); /*0x7b9813*/
            FoundationSize = Building::GetFoundationSize(&v19, (unsigned int)this->WWMouseClass_field_0x8); /*0x7b9824*/
            v17.X = *FoundationSize; /*0x7b982d*/
            v17.Y = FoundationSize[1]; /*0x7b9834*/
            v17.Width = FoundationSize[2]; /*0x7b983b*/
            v5 = *(_DWORD *)this->__pad_3C; /*0x7b983f*/
            v17.Height = FoundationSize[3]; /*0x7b9845*/
            v6 = *(_DWORD *)this->__pad_14 - v5; /*0x7b984c*/
            v7 = *(_DWORD *)&this->__pad_3C[4]; /*0x7b984e*/
            v17.X += v6; /*0x7b9853*/
            v17.Y += *(_DWORD *)&this->__pad_14[4] - v7; /*0x7b985e*/
            ReleaseMutex(hMutex); /*0x7b9869*/
          }
          X = v17.X; /*0x7b986b*/
          Y = v17.Y; /*0x7b986f*/
          Width = v17.Width; /*0x7b9879*/
          Height = v17.Height; /*0x7b987d*/
          v18[0] = v17.X; /*0x7b9881*/
          *(_DWORD *)this->__pad_48 = v17.X; /*0x7b9885*/
          v18[2] = Width; /*0x7b9888*/
          v18[3] = Height; /*0x7b988c*/
          *(_DWORD *)&this->__pad_48[4] = Y; /*0x7b9892*/
          *(_DWORD *)&this->__pad_48[8] = Width; /*0x7b9897*/
          *(_DWORD *)&this->__pad_48[12] = Height; /*0x7b989a*/
          v12 = (char *)this->WWMouseClass_field_0x2C + X; /*0x7b98a0*/
          WWMouseClass_field_0x44 = (int *)this->WWMouseClass_field_0x44; /*0x7b98a2*/
          v18[0] = v12; /*0x7b98a5*/
          v18[1] = (char *)this->WWMouseClass_field_0x30 + Y; /*0x7b98ae*/
          v14 = *WWMouseClass_field_0x44; /*0x7b98b2*/
          WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b98bc*/
          v15 = Rect::Set(&v19, 0, 0, Width, Height); /*0x7b98c7*/
          (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(v14 + 8))( /*0x7b98d0*/
            this->WWMouseClass_field_0x44,
            v15,
            WWMouseClass_field_0x24,
            v18,
            0,
            1);
        }
        Mouse::DrawCursor((Mouse *)this, (int *)this->WWMouseClass_field_0x24, 0, 0); /*0x7b98de*/
        ReleaseMutex(hMutex); /*0x7b98ea*/
      }
      else
      {
        while ( ShowCursor(1) < 0 ) /*0x7b98fa*/
          ; /*0x7b98fc*/
      }
    }
    if ( (int)this->WWMouseClass_field_0xC > 0 ) /*0x7b9909*/
      this->WWMouseClass_field_0xC = 0; /*0x7b990b*/
    return ReleaseMutex(hMutex); /*0x7b9918*/
  }
  return result; /*0x7b991c*/
}



// ==== 0x007B9930  WWMouseClass::hideCursor  this=WWMouseClass  sig=csp ====
BOOL __thiscall WWMouseClass::hideCursor(WWMouseClass *this)
{
  int WWMouseClass_field_0x24; // ecx
  int WWMouseClass_field_0x44; // ebp
  int v4; // edx
  int v5; // edi
  int v6; // ebx
  char *v7; // edx
  _DWORD v9[4]; // [esp+8h] [ebp-20h] BYREF
  _DWORD v10[4]; // [esp+18h] [ebp-10h] BYREF

  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b994f*/
    Debug::Log(); /*0x7b9960*/
  if ( !this->WWMouseClass_field_0xC ) /*0x7b9968*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 28))(this) ) /*0x7b9977*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9994*/
        Debug::Log(); /*0x7b99a5*/
      if ( *(int *)&this->__pad_48[8] > 0 && *(int *)&this->__pad_48[12] > 0 ) /*0x7b99ba*/
      {
        WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b99bc*/
        if ( WWMouseClass_field_0x24 ) /*0x7b99c1*/
        {
          WWMouseClass_field_0x44 = this->WWMouseClass_field_0x44; /*0x7b99c3*/
          if ( WWMouseClass_field_0x44 ) /*0x7b99c8*/
          {
            v4 = *(_DWORD *)&this->__pad_48[4]; /*0x7b99cd*/
            v5 = *(_DWORD *)&this->__pad_48[8]; /*0x7b99d3*/
            v6 = *(_DWORD *)&this->__pad_48[12]; /*0x7b99d7*/
            v10[0] = (char *)this->WWMouseClass_field_0x2C + *(_DWORD *)this->__pad_48; /*0x7b99da*/
            v7 = (char *)this->WWMouseClass_field_0x30 + v4; /*0x7b99e1*/
            v9[0] = 0; /*0x7b99e7*/
            v9[1] = 0; /*0x7b99eb*/
            v10[2] = v5; /*0x7b99f4*/
            v10[3] = v6; /*0x7b99f9*/
            v10[1] = v7; /*0x7b99fd*/
            v9[2] = v5; /*0x7b9a01*/
            v9[3] = v6; /*0x7b9a05*/
            (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)WWMouseClass_field_0x24 + 8))( /*0x7b9a11*/
              WWMouseClass_field_0x24,
              v10,
              WWMouseClass_field_0x44,
              v9,
              0,
              1);
          }
        }
      }
      ReleaseMutex(hMutex); /*0x7b9a1c*/
    }
    else
    {
      while ( ShowCursor(0) >= 0 ) /*0x7b9a31*/
        ; /*0x7b9a33*/
    }
  }
  --this->WWMouseClass_field_0xC; /*0x7b9a3f*/
  return ReleaseMutex(hMutex); /*0x7b9a4f*/
}



// ==== 0x007B9A60  WWMouseClass::captureMouse  this=WWMouseClass  sig=csp ====
void __thiscall WWMouseClass::captureMouse(WWMouseClass *this)
{
  int v2; // edx
  int *FoundationSize; // eax
  int v4; // edi
  int v5; // edx
  int v6; // edi
  int X; // eax
  int Y; // ecx
  int Width; // edx
  int Height; // edi
  char *v11; // ebp
  int *WWMouseClass_field_0x44; // eax
  int v13; // ebp
  _DWORD *v14; // eax
  int WWMouseClass_field_0x24; // [esp-1Ch] [ebp-50h]
  Rect v16; // [esp+4h] [ebp-30h] BYREF
  _DWORD v17[4]; // [esp+14h] [ebp-20h] BYREF
  Rect v18; // [esp+24h] [ebp-10h] BYREF

  if ( this && !(*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 28))(this) ) /*0x7b9a70*/
  {
    Debug::Log(); /*0x7b9a82*/
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9aa3*/
      Debug::Log(); /*0x7b9ab4*/
    v2 = *(_DWORD *)this->__pad_0; /*0x7b9abc*/
    LOBYTE(this->WWMouseClass_field_0x10) = 1; /*0x7b9ac0*/
    if ( !(*(unsigned __int8 (__thiscall **)(WWMouseClass *))(v2 + 8))(this) ) /*0x7b9ac4*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9ae7*/
        Debug::Log(); /*0x7b9af8*/
      if ( (unsigned __int8)BSurface::CreateTripleBuffer((int)this) && this->WWMouseClass_field_0x24 ) /*0x7b9b0f*/
      {
        Rect::Set(&v16, 0, 0, 0, 0); /*0x7b9b26*/
        if ( this->WWMouseClass_field_0x4 ) /*0x7b9b2b*/
        {
          UI_Helper_7BA2C0(); /*0x7b9b32*/
          FoundationSize = Building::GetFoundationSize(&v18, (unsigned int)this->WWMouseClass_field_0x8); /*0x7b9b43*/
          v16.X = *FoundationSize; /*0x7b9b4c*/
          v16.Y = FoundationSize[1]; /*0x7b9b53*/
          v16.Width = FoundationSize[2]; /*0x7b9b5a*/
          v4 = *(_DWORD *)this->__pad_3C; /*0x7b9b5e*/
          v16.Height = FoundationSize[3]; /*0x7b9b64*/
          v5 = *(_DWORD *)this->__pad_14 - v4; /*0x7b9b6b*/
          v6 = *(_DWORD *)&this->__pad_3C[4]; /*0x7b9b6d*/
          v16.X += v5; /*0x7b9b72*/
          v16.Y += *(_DWORD *)&this->__pad_14[4] - v6; /*0x7b9b7d*/
          ReleaseMutex(hMutex); /*0x7b9b88*/
        }
        X = v16.X; /*0x7b9b8a*/
        Y = v16.Y; /*0x7b9b8e*/
        Width = v16.Width; /*0x7b9b98*/
        Height = v16.Height; /*0x7b9b9c*/
        v17[0] = v16.X; /*0x7b9ba0*/
        *(_DWORD *)this->__pad_48 = v16.X; /*0x7b9ba4*/
        v17[2] = Width; /*0x7b9ba7*/
        v17[3] = Height; /*0x7b9bab*/
        *(_DWORD *)&this->__pad_48[4] = Y; /*0x7b9bb1*/
        *(_DWORD *)&this->__pad_48[8] = Width; /*0x7b9bb6*/
        *(_DWORD *)&this->__pad_48[12] = Height; /*0x7b9bb9*/
        v11 = (char *)this->WWMouseClass_field_0x2C + X; /*0x7b9bbf*/
        WWMouseClass_field_0x44 = (int *)this->WWMouseClass_field_0x44; /*0x7b9bc1*/
        v17[0] = v11; /*0x7b9bc4*/
        v17[1] = (char *)this->WWMouseClass_field_0x30 + Y; /*0x7b9bcd*/
        v13 = *WWMouseClass_field_0x44; /*0x7b9bd1*/
        WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b9bdb*/
        v14 = Rect::Set(&v18, 0, 0, Width, Height); /*0x7b9be6*/
        (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(v13 + 8))( /*0x7b9bef*/
          this->WWMouseClass_field_0x44,
          v14,
          WWMouseClass_field_0x24,
          v17,
          0,
          1);
      }
      Mouse::DrawCursor((Mouse *)this, (int *)this->WWMouseClass_field_0x24, 0, 0); /*0x7b9bfd*/
      ReleaseMutex(hMutex); /*0x7b9c09*/
    }
    ShowCursor(0); /*0x7b9c0d*/
    ReleaseMutex(hMutex); /*0x7b9c19*/
  }
}



// ==== 0x007B9C30  WWMouseClass::releaseMouse  this=WWMouseClass  sig=csp ====
void __thiscall WWMouseClass::releaseMouse(WWMouseClass *this)
{
  int v2; // edx
  int WWMouseClass_field_0x24; // ecx
  int WWMouseClass_field_0x44; // ebx
  int v5; // edx
  int v6; // edi
  int v7; // ebp
  char *v8; // edx
  _DWORD v9[4]; // [esp+4h] [ebp-20h] BYREF
  _DWORD v10[4]; // [esp+14h] [ebp-10h] BYREF

  if ( this && (*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 28))(this) ) /*0x7b9c40*/
  {
    Debug::Log(); /*0x7b9c51*/
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9c72*/
      Debug::Log(); /*0x7b9c83*/
    v2 = *(_DWORD *)this->__pad_0; /*0x7b9c8b*/
    LOBYTE(this->WWMouseClass_field_0x10) = 0; /*0x7b9c8f*/
    if ( !(*(unsigned __int8 (__thiscall **)(WWMouseClass *))(v2 + 8))(this) ) /*0x7b9c93*/
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9cb0*/
        Debug::Log(); /*0x7b9cc1*/
      if ( *(int *)&this->__pad_48[8] > 0 && *(int *)&this->__pad_48[12] > 0 ) /*0x7b9cd6*/
      {
        WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b9cd8*/
        if ( WWMouseClass_field_0x24 ) /*0x7b9cdd*/
        {
          WWMouseClass_field_0x44 = this->WWMouseClass_field_0x44; /*0x7b9cdf*/
          if ( WWMouseClass_field_0x44 ) /*0x7b9ce4*/
          {
            v5 = *(_DWORD *)&this->__pad_48[4]; /*0x7b9ce9*/
            v6 = *(_DWORD *)&this->__pad_48[8]; /*0x7b9cef*/
            v7 = *(_DWORD *)&this->__pad_48[12]; /*0x7b9cf3*/
            v10[0] = (char *)this->WWMouseClass_field_0x2C + *(_DWORD *)this->__pad_48; /*0x7b9cf6*/
            v8 = (char *)this->WWMouseClass_field_0x30 + v5; /*0x7b9cfd*/
            v9[0] = 0; /*0x7b9d03*/
            v9[1] = 0; /*0x7b9d07*/
            v10[2] = v6; /*0x7b9d10*/
            v10[3] = v7; /*0x7b9d15*/
            v10[1] = v8; /*0x7b9d19*/
            v9[2] = v6; /*0x7b9d1d*/
            v9[3] = v7; /*0x7b9d21*/
            (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)WWMouseClass_field_0x24 + 8))( /*0x7b9d2d*/
              WWMouseClass_field_0x24,
              v10,
              WWMouseClass_field_0x44,
              v9,
              0,
              1);
          }
        }
      }
      ReleaseMutex(hMutex); /*0x7b9d38*/
      while ( ShowCursor(1) < 0 ) /*0x7b9d4b*/
        ; /*0x7b9d4d*/
    }
    ReleaseMutex(hMutex); /*0x7b9d5c*/
  }
}



// ==== 0x007B9D70  WWMouseClass::checkStatus  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::checkStatus(WWMouseClass *this, int a2, int a3, int a4, int a5)
{
  return (*(int (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x7b9d75*/
}



// ==== 0x007B9D80  WWMouseClass::checkVisible  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::checkVisible(WWMouseClass *this)
{
  return (*(int (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 16))(this);
}



// ==== 0x007B9D90  WWMouseClass::processFrame  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::processFrame(WWMouseClass *this, int *a2, int *a3)
{
  void *WWMouseClass_field_0x34; // esi
  void *WWMouseClass_field_0x38; // ecx
  int result; // eax

  *a2 -= (int)this->WWMouseClass_field_0x2C; /*0x7b9da1*/
  *a3 -= (int)this->WWMouseClass_field_0x30; /*0x7b9daa*/
  if ( *a2 < 0 ) /*0x7b9db0*/
    *a2 = 0; /*0x7b9db2*/
  if ( *a3 < 0 && !byte_B78160 ) /*0x7b9dc7*/
    *a3 = 0; /*0x7b9dc9*/
  WWMouseClass_field_0x34 = this->WWMouseClass_field_0x34; /*0x7b9dcf*/
  if ( *a2 >= (int)WWMouseClass_field_0x34 ) /*0x7b9dd6*/
    *a2 = (int)WWMouseClass_field_0x34 - 1; /*0x7b9dd9*/
  WWMouseClass_field_0x38 = this->WWMouseClass_field_0x38; /*0x7b9ddb*/
  result = *a3; /*0x7b9dde*/
  if ( *a3 >= (int)WWMouseClass_field_0x38 ) /*0x7b9de4*/
    *a3 = (int)WWMouseClass_field_0x38 - 1; /*0x7b9de7*/
  return result; /*0x7b9de0*/
}



// ==== 0x007B9DF0  ObjectClass::method_7B9DF0  this=ObjectClass  sig=csp ====
int __thiscall sub_7B9DF0(ObjectClass *this, LONG *a2, LONG *a3)
{
  LONG y; // edx
  struct tagPOINT Point; // [esp+4h] [ebp-8h] BYREF

  GetCursorPos(&Point); /*0x7b9dfb*/
  y = Point.y; /*0x7b9e09*/
  *a2 = Point.x; /*0x7b9e0d*/
  *a3 = y; /*0x7b9e15*/
  return (*((int (__thiscall **)(ObjectClass *, LONG *, LONG *))this->AbstractClass + 17))(this, a2, a3); /*0x7b9e1e*/
}



// ==== 0x007B9E30  WWMouseClass::FlipCursorBuffer  this=WWMouseClass  sig=csp ====
BOOL __thiscall WWMouseClass::FlipCursorBuffer(WWMouseClass *this, unsigned int a2, unsigned int a3, char a4)
{
  DWORD (__stdcall *v4)(HANDLE, DWORD); // edi
  int WWMouseClass_field_0x24; // ecx
  int WWMouseClass_field_0x44; // ebx
  int v8; // edx
  char *v9; // edi
  char *v10; // ebp
  char *v11; // edx
  int v12; // edx
  char **inited; // eax
  char *WWMouseClass_field_0x2C; // ebp
  char *v15; // ecx
  void *WWMouseClass_field_0x30; // ebp
  char *v17; // eax
  int v18; // ecx
  int v20; // [esp-Ch] [ebp-40h]
  char *v21; // [esp+14h] [ebp-20h] BYREF
  char *v22; // [esp+18h] [ebp-1Ch]
  char *v23; // [esp+1Ch] [ebp-18h]
  char *v24; // [esp+20h] [ebp-14h]
  char *v25; // [esp+24h] [ebp-10h] BYREF
  char *v26; // [esp+28h] [ebp-Ch]
  char *v27; // [esp+2Ch] [ebp-8h]
  char *v28; // [esp+30h] [ebp-4h]

  v4 = WaitForSingleObject; /*0x7b9e3c*/
  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9e51*/
    Debug::Log(); /*0x7b9e62*/
  if ( a2 != *(_DWORD *)this->__pad_14 || a3 != *(_DWORD *)&this->__pad_14[4] || a4 ) /*0x7b9e86*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 28))(this) /*0x7b9eb1*/
      && !(*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 8))(this)
      && stru_A8EB00.?[412] )
    {
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7b9ec9*/
        Debug::Log(); /*0x7b9eda*/
      if ( *(int *)&this->__pad_48[8] > 0 && *(int *)&this->__pad_48[12] > 0 ) /*0x7b9eee*/
      {
        WWMouseClass_field_0x24 = this->WWMouseClass_field_0x24; /*0x7b9ef0*/
        if ( WWMouseClass_field_0x24 ) /*0x7b9ef5*/
        {
          WWMouseClass_field_0x44 = this->WWMouseClass_field_0x44; /*0x7b9ef7*/
          if ( WWMouseClass_field_0x44 ) /*0x7b9efc*/
          {
            v8 = *(_DWORD *)&this->__pad_48[4]; /*0x7b9f01*/
            v9 = *(char **)&this->__pad_48[8]; /*0x7b9f07*/
            v10 = *(char **)&this->__pad_48[12]; /*0x7b9f0a*/
            v25 = (char *)this->WWMouseClass_field_0x2C + *(_DWORD *)this->__pad_48; /*0x7b9f0f*/
            v11 = (char *)this->WWMouseClass_field_0x30 + v8; /*0x7b9f16*/
            v21 = 0; /*0x7b9f1a*/
            v22 = 0; /*0x7b9f1e*/
            v27 = v9; /*0x7b9f28*/
            v28 = v10; /*0x7b9f2c*/
            v26 = v11; /*0x7b9f30*/
            v23 = v9; /*0x7b9f34*/
            v24 = v10; /*0x7b9f38*/
            (*(void (__thiscall **)(int, char **, int, char **, _DWORD, int))(*(_DWORD *)WWMouseClass_field_0x24 + 8))( /*0x7b9f44*/
              WWMouseClass_field_0x24,
              &v25,
              WWMouseClass_field_0x44,
              &v21,
              0,
              1);
            v4 = WaitForSingleObject; /*0x7b9f47*/
          }
        }
      }
      ReleaseMutex(hMutex); /*0x7b9f54*/
    }
    *(_DWORD *)this->__pad_14 = a2; /*0x7b9f62*/
    v12 = *(_DWORD *)this->__pad_0; /*0x7b9f65*/
    *(_DWORD *)&this->__pad_14[4] = a3; /*0x7b9f69*/
    if ( (*(unsigned __int8 (__thiscall **)(WWMouseClass *))(v12 + 28))(this) /*0x7b9f8d*/
      && !(*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 8))(this)
      && stru_A8EB00.?[412] )
    {
      if ( v4(hMutex, 0x2710u) == 258 ) /*0x7b9fa6*/
        Debug::Log(); /*0x7b9fb7*/
      if ( (unsigned __int8)BSurface::CreateTripleBuffer((int)this) && this->WWMouseClass_field_0x24 ) /*0x7b9fce*/
      {
        inited = (char **)WWMouseClass::initCursorState(this, &v25); /*0x7b9fde*/
        WWMouseClass_field_0x2C = (char *)this->WWMouseClass_field_0x2C; /*0x7b9fe8*/
        *(_DWORD *)this->__pad_48 = *inited; /*0x7b9ff0*/
        *(_DWORD *)&this->__pad_48[4] = inited[1]; /*0x7b9ff5*/
        *(_DWORD *)&this->__pad_48[8] = inited[2]; /*0x7b9ffb*/
        *(_DWORD *)&this->__pad_48[12] = inited[3]; /*0x7ba001*/
        v21 = *inited; /*0x7ba006*/
        v22 = inited[1]; /*0x7ba00d*/
        v15 = &v21[(_DWORD)WWMouseClass_field_0x2C]; /*0x7ba014*/
        WWMouseClass_field_0x30 = this->WWMouseClass_field_0x30; /*0x7ba016*/
        v23 = inited[2]; /*0x7ba019*/
        v17 = inited[3]; /*0x7ba01d*/
        v21 = v15; /*0x7ba022*/
        v18 = this->WWMouseClass_field_0x44; /*0x7ba026*/
        v22 = &v22[(_DWORD)WWMouseClass_field_0x30]; /*0x7ba029*/
        v24 = v17; /*0x7ba031*/
        v20 = this->WWMouseClass_field_0x24; /*0x7ba039*/
        v25 = 0; /*0x7ba03a*/
        v26 = 0; /*0x7ba03e*/
        v27 = v23; /*0x7ba042*/
        v28 = v17; /*0x7ba046*/
        (*(void (__thiscall **)(int, char **, int, char **, _DWORD, int))(*(_DWORD *)v18 + 8))( /*0x7ba051*/
          v18,
          &v25,
          v20,
          &v21,
          0,
          1);
      }
      Mouse::DrawCursor((Mouse *)this, (int *)this->WWMouseClass_field_0x24, 0, 0); /*0x7ba05e*/
      ReleaseMutex(hMutex); /*0x7ba06a*/
    }
  }
  return ReleaseMutex(hMutex); /*0x7ba07d*/
}



// ==== 0x007BA090  WWMouseClass::UpdateCursorMovement  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::UpdateCursorMovement(WWMouseClass *this)
{
  int result; // eax
  void *WWMouseClass_field_0x20; // edx
  int v4; // eax
  void *v5; // ecx
  LONG v6; // eax
  LONG v7; // edi
  void *v8; // ebp
  char v9; // bl
  int v10; // eax
  LONG y; // [esp+10h] [ebp-10h] BYREF
  void *WWMouseClass_field_0x1C; // [esp+14h] [ebp-Ch] BYREF
  struct tagPOINT Point; // [esp+18h] [ebp-8h] BYREF

  result = this->WWMouseClass_field_0x24; /*0x7ba096*/
  if ( result ) /*0x7ba09b*/
  {
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7ba0b7*/
      Debug::Log(); /*0x7ba0c8*/
    if ( UI_Update() ) /*0x7ba0d0*/
    {
      WWMouseClass_field_0x20 = this->WWMouseClass_field_0x20; /*0x7ba0dc*/
      WWMouseClass_field_0x1C = this->WWMouseClass_field_0x1C; /*0x7ba0df*/
      y = (LONG)WWMouseClass_field_0x20; /*0x7ba0e3*/
    }
    else
    {
      GetCursorPos(&Point); /*0x7ba0ee*/
      v4 = *(_DWORD *)this->__pad_0; /*0x7ba0fc*/
      WWMouseClass_field_0x1C = (void *)Point.x; /*0x7ba0fe*/
      y = Point.y; /*0x7ba102*/
      (*(void (__thiscall **)(WWMouseClass *, void **, LONG *))(v4 + 68))(this, &WWMouseClass_field_0x1C, &y); /*0x7ba112*/
      v5 = (void *)y; /*0x7ba119*/
      this->WWMouseClass_field_0x1C = WWMouseClass_field_0x1C; /*0x7ba11d*/
      this->WWMouseClass_field_0x20 = v5; /*0x7ba120*/
    }
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this->WWMouseClass_field_0x24 + 104))( /*0x7ba13d*/
           this->WWMouseClass_field_0x24,
           0,
           0)
      || byte_B78170 )
    {
      v7 = y; /*0x7ba16d*/
      v8 = WWMouseClass_field_0x1C; /*0x7ba173*/
      v9 = byte_B78170; /*0x7ba17d*/
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7ba18a*/
        Debug::Log(); /*0x7ba19b*/
      if ( v8 != *(void **)this->__pad_14 || v7 != *(_DWORD *)&this->__pad_14[4] || v9 ) /*0x7ba1af*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 28))(this) /*0x7ba1d2*/
          && !(*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 8))(this)
          && stru_A8EB00.?[412] )
        {
          if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7ba1eb*/
            Debug::Log(); /*0x7ba1fc*/
          WWMouseClass::initSurface(this); /*0x7ba206*/
          ReleaseMutex(hMutex); /*0x7ba212*/
        }
        v10 = *(_DWORD *)this->__pad_0; /*0x7ba218*/
        *(_DWORD *)this->__pad_14 = v8; /*0x7ba21c*/
        *(_DWORD *)&this->__pad_14[4] = v7; /*0x7ba21f*/
        if ( (*(unsigned __int8 (__thiscall **)(WWMouseClass *))(v10 + 28))(this) /*0x7ba23b*/
          && !(*(unsigned __int8 (__thiscall **)(WWMouseClass *))(*(_DWORD *)this->__pad_0 + 8))(this)
          && stru_A8EB00.?[412] )
        {
          if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7ba253*/
            Debug::Log(); /*0x7ba264*/
          WWMouseClass::updateCursorRect(this); /*0x7ba26e*/
          Mouse::DrawCursor((Mouse *)this, (int *)this->WWMouseClass_field_0x24, 0, 0); /*0x7ba27d*/
          ReleaseMutex(hMutex); /*0x7ba289*/
        }
      }
      ReleaseMutex(hMutex); /*0x7ba295*/
      byte_B78170 = 0; /*0x7ba2a3*/
      return ReleaseMutex(hMutex); /*0x7ba2ab*/
    }
    else
    {
      v6 = y; /*0x7ba143*/
      *(_DWORD *)this->__pad_14 = WWMouseClass_field_0x1C; /*0x7ba147*/
      *(_DWORD *)&this->__pad_14[4] = v6; /*0x7ba14a*/
      byte_B78170 = 1; /*0x7ba153*/
      return ReleaseMutex(hMutex); /*0x7ba15b*/
    }
  }
  return result; /*0x7ba162*/
}



// ==== 0x007BA2C0  UI_Helper_7BA2C0  this=-  sig=ida-proto ====
void sub_7BA2C0()
{
  if ( WaitForSingleObject(hMutex, 0x2710u) == 258 ) /*0x7ba2d6*/
    Debug::Log(); /*0x7ba2e7*/
}



// ==== 0x007BA2F0  ?__CxxRestoreUnhandledExceptionFilter_YAXXZ  this=-  sig=ida-proto ====
void __cdecl ___CxxRestoreUnhandledExceptionFilter_YAXXZ()
{
  ReleaseMutex(hMutex); /*0x7ba2f6*/
}



// ==== 0x007BA300  Mouse::updateHotspot  this=MouseClass  sig=csp ====
_DWORD *__thiscall WWMouseClass::updateHotspot(Mouse *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &Mouse::`vftable'; /*0x7ba309*/
  if ( (a2 & 1) != 0 ) /*0x7ba30f*/
    __3_YAXPAX_Z(this); /*0x7ba312*/
  return this->__pad_0; /*0x7ba31c*/
}



// ==== 0x007BA320  WWMouseClass::drawCursor  this=WWMouseClass  sig=csp ====
BOOL __thiscall IsRefCountNegative(WWMouseClass *this)
{
  return (int)this->WWMouseClass_field_0xC < 0; /*0x7ba32a*/
}



// ==== 0x007BA330  WWMouseClass::checkCapture  this=WWMouseClass  sig=csp ====
char __thiscall WWMouseClass::checkCapture(WWMouseClass *this)
{
  return this->WWMouseClass_field_0x10; /*0x7ba333*/
}



// ==== 0x007BA340  WWMouseClass::checkRegion  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::checkRegion(WWMouseClass *this)
{
  return (int)this->WWMouseClass_field_0x1C; /*0x7ba343*/
}



// ==== 0x007BA350  WWMouseClass::checkBounds  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::checkBounds(WWMouseClass *this)
{
  return (int)this->WWMouseClass_field_0x20; /*0x7ba353*/
}



// ==== 0x007BA360  WWMouseClass::updatePosition  this=WWMouseClass  sig=csp ====
_DWORD *__thiscall WWMouseClass::updatePosition(WWMouseClass *this, _DWORD *a2)
{
  void *WWMouseClass_field_0x1C; // edx
  void *WWMouseClass_field_0x20; // ecx

  WWMouseClass_field_0x1C = this->WWMouseClass_field_0x1C; /*0x7ba364*/
  WWMouseClass_field_0x20 = this->WWMouseClass_field_0x20; /*0x7ba367*/
  *a2 = WWMouseClass_field_0x1C; /*0x7ba36a*/
  a2[1] = WWMouseClass_field_0x20; /*0x7ba36c*/
  return a2; /*0x7ba36f*/
}



// ==== 0x007BA380  WWMouseClass::checkHotspot  this=WWMouseClass  sig=csp ====
int __thiscall WWMouseClass::checkHotspot(WWMouseClass *this, int a2, int a3)
{
  this->WWMouseClass_field_0x1C = (void *)a2; /*0x7ba388*/
  this->WWMouseClass_field_0x20 = (void *)a3; /*0x7ba38b*/
  return a2; /*0x7ba38e*/
}



// ==== 0x007BA3A0  WWMouseClass::QueryInterface  this=WWMouseClass  sig=csp ====
_DWORD *__thiscall WWMouseClass::QueryInterface(WWMouseClass *this, char a2)
{
  WWMouseClass::loadCursorImages(this); /*0x7ba3a3*/
  if ( (a2 & 1) != 0 ) /*0x7ba3ad*/
    __3_YAXPAX_Z(this); /*0x7ba3b0*/
  return this->__pad_0; /*0x7ba3ba*/
}



// ==== 0x007BA3C0  BufferPipe::processNetworkPacket  this=BufferPipe  sig=csp ====
int __thiscall GameClass::processNetworkPacket(BufferPipe *this, void *Src, signed int Size)
{
  int result; // eax
  int v5; // edx
  int v6; // eax
  signed int v7; // edi
  signed int v8; // eax

  result = 0; /*0x7ba3c4*/
  v5 = this->q00C; /*0x7ba3c6*/
  if ( v5 && Src && Size > 0 ) /*0x7ba3db*/
  {
    v6 = this->q004; /*0x7ba3dd*/
    v7 = Size; /*0x7ba3e3*/
    if ( v6 ) /*0x7ba3e5*/
    {
      v8 = v6 - this->q018; /*0x7ba3ea*/
      v7 = Size; /*0x7ba3ec*/
      if ( Size >= v8 ) /*0x7ba3f0*/
        v7 = v8; /*0x7ba3f2*/
    }
    if ( v7 > 0 ) /*0x7ba3f6*/
      memcpy((void *)(v5 + this->q018), Src, v7); /*0x7ba400*/
    this->q018 += v7; /*0x7ba40d*/
    return v7; /*0x7ba410*/
  }
  return result; /*0x7ba413*/
}



// ==== 0x007BA420  FilePipe::Destructor  this=FilePipe  sig=csp ====
int __thiscall FilePipe::Destructor(Pipe *this)
{
  int Pipe_field_0x0C; // ecx

  Pipe_field_0x0C = this->Pipe_field_0x0C; /*0x7ba423*/
  *(_DWORD *)this->__pad_0 = &FilePipe::`vftable'; /*0x7ba426*/
  if ( Pipe_field_0x0C && this->q004 ) /*0x7ba430*/
  {
    this->q004 = 0; /*0x7ba437*/
    (*(void (__thiscall **)(int))(*(_DWORD *)Pipe_field_0x0C + 52))(Pipe_field_0x0C); /*0x7ba43d*/
    this->Pipe_field_0x0C = 0; /*0x7ba440*/
  }
  return Pipe::Dtor(this); /*0x7ba44e*/
}



// ==== 0x007BA450  FilePipe::Release  this=FilePipe  sig=csp ====
int __thiscall FilePipe::Release(FilePipe *this)
{
  int v2; // eax
  int FilePipe_field_0x0C; // ecx
  int v4; // edi

  v2 = (*(int (__thiscall **)(FilePipe *))(*(_DWORD *)this->__pad_0 + 4))(this); /*0x7ba456*/
  FilePipe_field_0x0C = this->FilePipe_field_0x0C; /*0x7ba459*/
  v4 = v2; /*0x7ba45c*/
  if ( FilePipe_field_0x0C && this->q004 ) /*0x7ba462*/
  {
    this->q004 = 0; /*0x7ba469*/
    (*(void (__thiscall **)(int))(*(_DWORD *)FilePipe_field_0x0C + 52))(FilePipe_field_0x0C); /*0x7ba46f*/
  }
  return v4; /*0x7ba474*/
}



// ==== 0x007BA480  FilePipe::Read  this=FilePipe  sig=csp ====
int __thiscall FilePipe::Read(FilePipe *this, int a2, int a3)
{
  int FilePipe_field_0x0C; // ecx
  int v5; // ecx

  FilePipe_field_0x0C = this->FilePipe_field_0x0C; /*0x7ba485*/
  if ( !FilePipe_field_0x0C || !a2 || a3 <= 0 ) /*0x7ba49a*/
    return 0; /*0x7ba4c5*/
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)FilePipe_field_0x0C + 24))(FilePipe_field_0x0C) ) /*0x7ba49e*/
  {
    v5 = this->FilePipe_field_0x0C; /*0x7ba4a5*/
    this->q004 = 1; /*0x7ba4a8*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 28))(v5, 2); /*0x7ba4b0*/
  }
  return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)this->FilePipe_field_0x0C + 48))( /*0x7ba4bd*/
           this->FilePipe_field_0x0C,
           a2,
           a3);
}



// ==== 0x007BA4D0  BufferStraw::ReadFromBuffer  this=BufferStraw  sig=csp ====
int __thiscall DisplayClass::ReadFromBuffer(BufferStraw *this, void *a2, signed int Size)
{
  int result; // eax
  int v5; // edx
  int v6; // eax
  signed int v7; // edi
  signed int v8; // eax

  result = 0; /*0x7ba4d4*/
  v5 = this->q00C; /*0x7ba4d6*/
  if ( v5 && a2 && Size > 0 ) /*0x7ba4eb*/
  {
    v6 = this->q004; /*0x7ba4ed*/
    v7 = Size; /*0x7ba4f3*/
    if ( v6 ) /*0x7ba4f5*/
    {
      v8 = v6 - this->q018; /*0x7ba4fa*/
      v7 = Size; /*0x7ba4fc*/
      if ( Size >= v8 ) /*0x7ba500*/
        v7 = v8; /*0x7ba502*/
    }
    if ( v7 > 0 ) /*0x7ba506*/
      memcpy(a2, (const void *)(v5 + this->q018), v7); /*0x7ba510*/
    this->q018 += v7; /*0x7ba51d*/
    return v7; /*0x7ba520*/
  }
  return result; /*0x7ba523*/
}



// ==== 0x007BA530  FileStraw::Release  this=FileStraw  sig=csp ====
int __thiscall FileStraw_Destru::Release(FileStraw *this, int a2, int a3)
{
  int v4; // ecx
  int v5; // ecx

  v4 = *((_DWORD *)this + 3); /*0x7ba535*/
  if ( v4 /*0x7ba56e*/
    && a2
    && a3 > 0
    && ((*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 24))(v4)
     || (v5 = *((_DWORD *)this + 3),
         this->q004 = 1,
         (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 20))(v5, 0))
     && (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 3) + 28))(*((_DWORD *)this + 3), 1)) )
  {
    return (*(int (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 3) + 36))(*((_DWORD *)this + 3), a2, a3); /*0x7ba57c*/
  }
  else
  {
    return 0; /*0x7ba587*/
  }
}



// ==== 0x007BA590  FileStraw::Destructor  this=FileStraw  sig=csp ====
int __thiscall FileStraw::Destructor(Straw *this)
{
  int v2; // ecx

  v2 = *((_DWORD *)this + 3); /*0x7ba593*/
  *(_DWORD *)this->__pad_0 = &FileStraw::`vftable'; /*0x7ba596*/
  if ( v2 && this->q004 ) /*0x7ba5a0*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 52))(v2); /*0x7ba5a9*/
    this->q004 = 0; /*0x7ba5ac*/
    *((_DWORD *)this + 3) = 0; /*0x7ba5b0*/
  }
  return Straw::Dtor(this); /*0x7ba5be*/
}



// ==== 0x007BA5C0  sub_7BA5C0  this=-  sig=ida-proto ====
int sub_7BA5C0()
{
  dword_B78178 = 0; /*0x7ba5c2*/
  dword_B7817C = 0; /*0x7ba5c7*/
  dword_B78180 = 0; /*0x7ba5cc*/
  dword_B78184 = 0; /*0x7ba5d1*/
  return 0; /*0x7ba5d6*/
}



// ==== 0x007BA5E0  XSurface::DrawLine  this=XSurface  sig=csp ====
int __thiscall XSurface::DrawLine(XSurface *this, _DWORD *a2, _DWORD *a3, __int16 a4)
{
  int v5; // eax
  int result; // eax
  _BYTE v7[16]; // [esp+4h] [ebp-10h] BYREF

  v5 = (*(int (__thiscall **)(XSurface *, _BYTE *))(*(_DWORD *)this->Surface + 120))(this, v7); /*0x7ba5fe*/
  LOBYTE(result) = XSurface::DrawLineEx(this, v5, a2, a3, a4); /*0x7ba604*/
  return result; /*0x7ba609*/
}



// ==== 0x007BA610  XSurface::DrawLineEx  this=XSurface  sig=csp ====
char __thiscall XSurface::DrawLineEx(XSurface *this, int a2, _DWORD *a3, _DWORD *a4, __int16 a5)
{
  int *v6; // eax
  int *v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ebp
  __int16 *v13; // edi
  int v14; // edx
  unsigned int v15; // esi
  int v16; // eax
  int i; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  int v22; // esi
  int v23; // ebp
  int v24; // eax
  int v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  __int16 v30; // dx
  int v31; // edx
  int v32; // ecx
  __int16 v33; // ax
  int v34; // [esp+10h] [ebp-44h]
  int v35; // [esp+14h] [ebp-40h] BYREF
  int v36; // [esp+18h] [ebp-3Ch]
  int v37; // [esp+1Ch] [ebp-38h] BYREF
  int v38; // [esp+20h] [ebp-34h]
  int v39; // [esp+24h] [ebp-30h] BYREF
  int v40; // [esp+28h] [ebp-2Ch]
  int v41; // [esp+2Ch] [ebp-28h]
  int v42; // [esp+30h] [ebp-24h]
  _BYTE v43[16]; // [esp+34h] [ebp-20h] BYREF
  int v44[4]; // [esp+44h] [ebp-10h] BYREF
  int v45; // [esp+58h] [ebp+4h]
  _DWORD *v46; // [esp+5Ch] [ebp+8h]
  int v47; // [esp+60h] [ebp+Ch]

  v6 = (int *)(*(int (__thiscall **)(XSurface *, _BYTE *))(*(_DWORD *)this->Surface + 120))(this, v43); /*0x7ba622*/
  v7 = ClipRectIntersection(v44, (int *)a2, v6, 0, 0); /*0x7ba632*/
  v39 = *v7; /*0x7ba639*/
  v40 = v7[1]; /*0x7ba640*/
  v41 = v7[2]; /*0x7ba647*/
  v42 = v7[3]; /*0x7ba652*/
  v8 = v40 + a3[1]; /*0x7ba65d*/
  v35 = v39 + *a3; /*0x7ba65f*/
  v36 = v8; /*0x7ba663*/
  v9 = v39 + *a4; /*0x7ba672*/
  v38 = v40 + a4[1]; /*0x7ba674*/
  v37 = v9; /*0x7ba685*/
  if ( !(unsigned __int8)ClipLine(&v35, &v37, &v39) ) /*0x7ba689*/
    return 0; /*0x7ba689*/
  v10 = v35; /*0x7ba696*/
  if ( v35 > v37 ) /*0x7ba6a0*/
  {
    v11 = v36; /*0x7ba6a2*/
    v35 = v37; /*0x7ba6a6*/
    v37 = v10; /*0x7ba6ae*/
    v36 = v38; /*0x7ba6b2*/
    v38 = v11; /*0x7ba6b6*/
  }
  v12 = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 112))(this); /*0x7ba6c7*/
  v46 = (_DWORD *)v12; /*0x7ba6d1*/
  v13 = (__int16 *)(*(int (__thiscall **)(XSurface *, int, int))(*(_DWORD *)this->Surface + 92))(this, v35, v36); /*0x7ba6d8*/
  if ( !v13 ) /*0x7ba6dc*/
    return 0; /*0x7ba8b4*/
  if ( v36 == v38 ) /*0x7ba6ec*/
  {
    if ( v12 == 1 ) /*0x7ba6f1*/
    {
      HIWORD(v14) = HIWORD(v35); /*0x7ba6f7*/
      LOBYTE(v14) = a5; /*0x7ba701*/
      BYTE1(v14) = a5; /*0x7ba704*/
      v15 = v37 - v35 + 1; /*0x7ba706*/
      v16 = v14 << 16; /*0x7ba70a*/
      LOWORD(v16) = v14; /*0x7ba70d*/
      memset32(v13, v16, v15 >> 2); /*0x7ba713*/
      memset(&v13[2 * (v15 >> 2)], a5, v15 & 3); /*0x7ba71a*/
      (*(void (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7ba720*/
      return 1; /*0x7ba72c*/
    }
    for ( i = 0; i <= v37 - v35; ++v13 ) /*0x7ba73b*/
    {
      *v13 = a5; /*0x7ba745*/
      ++i; /*0x7ba750*/
    }
  }
  else if ( v35 == v37 ) /*0x7ba777*/
  {
    if ( v36 <= v38 ) /*0x7ba77b*/
      v19 = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 116))(this); /*0x7ba791*/
    else
      v19 = -(*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 116))(this); /*0x7ba786*/
    v20 = abs32(v38 - v36); /*0x7ba7a0*/
    if ( v20 >= 0 ) /*0x7ba7a2*/
    {
      v21 = v20 + 1; /*0x7ba7a8*/
      do /*0x7ba7be*/
      {
        if ( v12 == 1 ) /*0x7ba7b2*/
          *(_BYTE *)v13 = a5; /*0x7ba7b4*/
        else
          *v13 = a5; /*0x7ba7b8*/
        v13 = (__int16 *)((char *)v13 + v19); /*0x7ba7bb*/
        --v21; /*0x7ba7bd*/
      }
      while ( v21 ); /*0x7ba7be*/
    }
  }
  else
  {
    v22 = v38 - v36; /*0x7ba7d7*/
    v23 = v37 - v35; /*0x7ba7db*/
    v24 = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 116))(this); /*0x7ba7df*/
    v45 = v24; /*0x7ba7e4*/
    if ( v22 < 0 ) /*0x7ba7e8*/
      v45 = -v24; /*0x7ba7ec*/
    v25 = v22; /*0x7ba7f0*/
    v26 = 2 * v23; /*0x7ba7f2*/
    v27 = abs32(v25); /*0x7ba7f9*/
    v47 = 2 * v27; /*0x7ba800*/
    if ( v23 <= v27 ) /*0x7ba804*/
    {
      v31 = 0; /*0x7ba85c*/
      v32 = v26 - v27; /*0x7ba85e*/
      if ( v27 > 0 ) /*0x7ba862*/
      {
        v34 = v27; /*0x7ba864*/
        v33 = a5; /*0x7ba868*/
        do /*0x7ba89c*/
        {
          if ( v46 == (_DWORD *)1 ) /*0x7ba871*/
          {
            *((_BYTE *)v13 + v31) = v33; /*0x7ba873*/
          }
          else
          {
            v13[v31] = v33; /*0x7ba878*/
            v33 = a5; /*0x7ba87c*/
          }
          if ( v32 > 0 ) /*0x7ba882*/
          {
            ++v31; /*0x7ba888*/
            v32 -= v47; /*0x7ba889*/
          }
          v32 += v26; /*0x7ba88f*/
          v13 = (__int16 *)((char *)v13 + v45); /*0x7ba891*/
          --v34; /*0x7ba898*/
        }
        while ( v34 ); /*0x7ba89c*/
      }
    }
    else
    {
      v28 = 0; /*0x7ba808*/
      v29 = 2 * v27 - v23; /*0x7ba80a*/
      if ( v23 > 0 ) /*0x7ba80e*/
      {
        v30 = a5; /*0x7ba814*/
        do /*0x7ba845*/
        {
          if ( v46 == (_DWORD *)1 ) /*0x7ba81d*/
          {
            *((_BYTE *)v13 + v28) = v30; /*0x7ba81f*/
          }
          else
          {
            v13[v28] = v30; /*0x7ba824*/
            v30 = a5; /*0x7ba828*/
          }
          if ( v29 > 0 ) /*0x7ba82e*/
          {
            v13 = (__int16 *)((char *)v13 + v45); /*0x7ba834*/
            v29 -= 2 * v23; /*0x7ba83a*/
          }
          v29 += v47; /*0x7ba840*/
          ++v28; /*0x7ba842*/
        }
        while ( v28 < v23 ); /*0x7ba845*/
      }
    }
  }
  (*(void (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7ba84b*/
  return 1; /*0x7ba723*/
}



// ==== 0x007BA8C0  XSurface::DrawDashedLine  this=XSurface  sig=csp ====
int __thiscall XSurface::DrawDashedLine(XSurface *this, int *a2, int *a3, __int16 a4, int a5, int a6)
{
  int v7; // ebx
  int v8; // edi
  int v9; // ebp
  bool v10; // cc
  signed int v11; // esi
  signed int v12; // eax
  int v13; // esi
  __int16 *v14; // eax
  int v15; // edi
  int v16; // ecx
  int v17; // esi
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // esi
  int v22; // ebp
  int v23; // edi
  int v24; // eax
  int v25; // ebx
  int v26; // eax
  int v27; // ebp
  int v28; // eax
  int v29; // ecx
  int i; // eax
  int v31; // esi
  int v32; // edx
  int v33; // ecx
  int v34; // edi
  int v35; // esi
  int v38; // [esp+14h] [ebp-Ch]
  int v39; // [esp+18h] [ebp-8h]
  int v40; // [esp+1Ch] [ebp-4h]
  int v41; // [esp+24h] [ebp+4h]
  int *v42; // [esp+28h] [ebp+8h]
  __int16 *v43; // [esp+34h] [ebp+14h]

  v7 = *a2; /*0x7ba8cd*/
  v40 = a2[1]; /*0x7ba8cf*/
  v8 = *a3; /*0x7ba8dc*/
  v9 = a3[1]; /*0x7ba8de*/
  v10 = *a2 <= *a3; /*0x7ba8e1*/
  v41 = 1; /*0x7ba8e3*/
  if ( v10 ) /*0x7ba8eb*/
  {
    v13 = a6; /*0x7ba936*/
  }
  else
  {
    v7 = *a3; /*0x7ba8ed*/
    v8 = *a2; /*0x7ba8ef*/
    v9 = a2[1]; /*0x7ba8f3*/
    v40 = a3[1]; /*0x7ba8f8*/
    v11 = abs32(*a3 - *a2); /*0x7ba907*/
    v12 = abs32(v40 - v9) + 1; /*0x7ba90e*/
    if ( v11 < v12 ) /*0x7ba911*/
      v11 = v12; /*0x7ba913*/
    v13 = (a6 + v11) % 16; /*0x7ba927*/
    v41 = -1; /*0x7ba92c*/
  }
  v42 = (int *)(*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 112))(this); /*0x7ba947*/
  v14 = (__int16 *)(*(int (__thiscall **)(XSurface *, int, int))(*(_DWORD *)this->Surface + 92))(this, v7, v40); /*0x7ba94f*/
  v43 = v14; /*0x7ba954*/
  if ( v14 )
  {
    if ( v40 == v9 )
    {
      v15 = v8 - v7; /*0x7ba966*/
      if ( v15 >= 0 )
      {
        v16 = v15 + 1; /*0x7ba972*/
        do
        {
          v17 = v13 + (v13 < 0 ? 0x10 : 0);
          if ( v17 >= 16 ) /*0x7ba983*/
            v17 -= 16; /*0x7ba985*/
          if ( *(_BYTE *)(a5 + v17) ) /*0x7ba988*/
            *v14 = a4; /*0x7ba98e*/
          ++v14; /*0x7ba995*/
          v13 = v41 + v17; /*0x7ba998*/
          --v16; /*0x7ba99a*/
        }
        while ( v16 );
      }
    }
    else if ( v7 == v8 )
    {
      if ( v40 <= v9 ) /*0x7ba9ac*/
        v18 = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 116))(this); /*0x7ba9be*/
      else
        v18 = -(*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 116))(this); /*0x7ba9b5*/
      v19 = abs32(v9 - v40); /*0x7ba9cb*/
      if ( v19 >= 0 )
      {
        v20 = v19 + 1; /*0x7ba9db*/
        do
        {
          v21 = v13 + (v13 < 0 ? 0x10 : 0);
          if ( v21 >= 16 ) /*0x7ba9e6*/
            v21 -= 16; /*0x7ba9e8*/
          if ( *(_BYTE *)(a5 + v21) ) /*0x7ba9eb*/
          {
            if ( v42 == (int *)1 ) /*0x7ba9fc*/
              *(_BYTE *)v43 = a4; /*0x7ba9fe*/
            else
              *v43 = a4; /*0x7baa02*/
          }
          v13 = v41 + v21; /*0x7baa0f*/
          --v20; /*0x7baa11*/
          v43 = (__int16 *)((char *)v43 + v18); /*0x7baa12*/
        }
        while ( v20 );
      }
    }
    else
    {
      v22 = v9 - v40; /*0x7baa1d*/
      v23 = v8 - v7; /*0x7baa23*/
      v24 = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 116))(this); /*0x7baa27*/
      v25 = v24; /*0x7baa2a*/
      v39 = v24; /*0x7baa2e*/
      if ( v22 < 0 ) /*0x7baa32*/
      {
        v25 = -v24; /*0x7baa34*/
        v39 = -v24; /*0x7baa36*/
      }
      v26 = v22; /*0x7baa3a*/
      v27 = 2 * v23; /*0x7baa3c*/
      v28 = abs32(v26); /*0x7baa42*/
      v38 = 2 * v28; /*0x7baa49*/
      if ( v23 <= v28 )
      {
        v32 = 0; /*0x7baabd*/
        v33 = v27 - v28; /*0x7baabf*/
        if ( v28 > 0 )
        {
          v34 = v28; /*0x7baac5*/
          do
          {
            v35 = v13 + (v13 < 0 ? 0x10 : 0);
            if ( v35 >= 16 ) /*0x7baad5*/
              v35 -= 16; /*0x7baad7*/
            if ( *(_BYTE *)(a5 + v35) ) /*0x7baade*/
            {
              if ( v42 == (int *)1 ) /*0x7baaef*/
                *((_BYTE *)v43 + v32) = a4; /*0x7baaf1*/
              else
                v43[v32] = a4; /*0x7baaf6*/
            }
            if ( v33 > 0 ) /*0x7baafc*/
            {
              ++v32; /*0x7bab02*/
              v33 -= v38; /*0x7bab03*/
            }
            v33 += v27; /*0x7bab09*/
            v43 = (__int16 *)((char *)v43 + v39); /*0x7bab0b*/
            v13 = v41 + v35; /*0x7bab13*/
            --v34; /*0x7bab15*/
          }
          while ( v34 );
        }
      }
      else
      {
        v29 = 2 * v28 - v23; /*0x7baa4f*/
        for ( i = 0; i < v23; v13 = v41 + v31 )
        {
          v31 = v13 + (v13 < 0 ? 0x10 : 0);
          if ( v31 >= 16 ) /*0x7baa65*/
            v31 -= 16; /*0x7baa67*/
          if ( *(_BYTE *)(a5 + v31) ) /*0x7baa6e*/
          {
            if ( v42 == (int *)1 ) /*0x7baa79*/
              *((_BYTE *)v43 + i) = a4; /*0x7baa83*/
            else
              v43[i] = a4; /*0x7baa91*/
          }
          if ( v29 > 0 ) /*0x7baa97*/
          {
            v43 = (__int16 *)((char *)v43 + v25); /*0x7baa9f*/
            v29 -= 2 * v23; /*0x7baaa6*/
          }
          v29 += v38; /*0x7baaac*/
          ++i; /*0x7baab2*/
        }
      }
    }
    (*(void (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7bab1e*/
  }
  return v13; /*0x7bab23*/
}



// ==== 0x007BAB30  XSurface::entry_4C_  this=XSurface  sig=csp ====
int __stdcall XSurface::entry_4C_(XSurface *this, int a2, int a3, int a4, int a5, int a6)
{
  return 0; /*0x7bab32*/
}



// ==== 0x007BAB40  XSurface::entry_50_  this=XSurface  sig=csp ====
char __stdcall XSurface::entry_50_(XSurface *this, int a2, int a3, int a4)
{
  return 0; /*0x7bab42*/
}



// ==== 0x007BAB50  XSurface::entry_34_  this=XSurface  sig=csp ====
char __stdcall XSurface::entry_34_(XSurface *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return 0; /*0x7bab52*/
}



// ==== 0x007BAB60  XSurface::entry_38_  this=XSurface  sig=csp ====
char __stdcall XSurface::entry_38_(XSurface *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return 0; /*0x7bab62*/
}



// ==== 0x007BAB70  XSurface::entry_3C_  this=XSurface  sig=csp ====
char __stdcall XSurface::entry_3C_(
        XSurface *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  return 0; /*0x7bab72*/
}



// ==== 0x007BAB80  XSurface::entry_40_  this=XSurface  sig=csp ====
char __stdcall XSurface::entry_40_(XSurface *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return 0; /*0x7bab82*/
}



// ==== 0x007BAB90  XSurface::WalkLine  this=XSurface  sig=csp ====
char __thiscall XSurface::WalkLine(XSurface *this, int a2, _DWORD *a3, _DWORD *a4, void (__thiscall *a5)(int *))
{
  int v5; // eax
  int *v6; // eax
  int *v7; // eax
  int v8; // ecx
  int v9; // eax
  char result; // al
  int v11; // ecx
  int v12; // edi
  int v13; // esi
  int v14; // ebp
  int v15; // edi
  int v16; // ebp
  int v17; // ebx
  int v18; // edi
  int v19; // ebx
  int v20; // esi
  int v21; // eax
  int v22; // esi
  int i; // ebx
  int v24; // esi
  int v25; // edi
  int v26; // [esp+4h] [ebp-44h] BYREF
  int v27; // [esp+8h] [ebp-40h]
  XSurface *v28; // [esp+14h] [ebp-34h]
  int v29; // [esp+18h] [ebp-30h] BYREF
  int v30; // [esp+1Ch] [ebp-2Ch]
  int v31; // [esp+20h] [ebp-28h] BYREF
  int v32; // [esp+24h] [ebp-24h]
  int v33; // [esp+28h] [ebp-20h] BYREF
  int v34; // [esp+2Ch] [ebp-1Ch]
  int v35; // [esp+38h] [ebp-10h] BYREF
  int v36; // [esp+3Ch] [ebp-Ch]
  int v37; // [esp+40h] [ebp-8h]
  int v38; // [esp+44h] [ebp-4h]
  int v39; // [esp+4Ch] [ebp+4h]
  int v40; // [esp+50h] [ebp+8h]
  int v41; // [esp+54h] [ebp+Ch]

  v5 = *(_DWORD *)this->Surface; /*0x7bab93*/
  v28 = this; /*0x7bab9b*/
  v6 = (int *)(*(int (__stdcall **)(int *))(v5 + 120))(&v33); /*0x7bab9f*/
  v7 = ClipRectIntersection(&v26, (int *)a2, v6, 0, 0); /*0x7babaf*/
  v35 = *v7; /*0x7babb6*/
  v36 = v7[1]; /*0x7babbd*/
  v37 = v7[2]; /*0x7babc4*/
  v38 = v7[3]; /*0x7babcf*/
  v8 = v36 + a3[1]; /*0x7babda*/
  v29 = v35 + *a3; /*0x7babdc*/
  v30 = v8; /*0x7babe0*/
  v9 = v35 + *a4; /*0x7babef*/
  v32 = v36 + a4[1]; /*0x7babf1*/
  v31 = v9; /*0x7bac02*/
  result = ClipLine(&v29, &v31, &v35); /*0x7bac06*/
  if ( result ) /*0x7bac0d*/
  {
    v11 = v29; /*0x7bac16*/
    v12 = v31; /*0x7bac1d*/
    if ( v29 <= v31 ) /*0x7bac23*/
    {
      v14 = v30; /*0x7bac45*/
      v13 = v32; /*0x7bac49*/
    }
    else
    {
      v13 = v30; /*0x7bac25*/
      v14 = v32; /*0x7bac29*/
      v11 = v31; /*0x7bac2f*/
      v12 = v29; /*0x7bac31*/
      v29 = v31; /*0x7bac33*/
      v30 = v32; /*0x7bac37*/
      v31 = v12; /*0x7bac3b*/
      v32 = v13; /*0x7bac3f*/
    }
    if ( v14 == v13 ) /*0x7bac4f*/
    {
      v15 = v12 - v11; /*0x7bac51*/
      v16 = 0; /*0x7bac53*/
      if ( v15 >= 0 ) /*0x7bac58*/
      {
        while ( 1 ) /*0x7bac73*/
        {
          v26 = v11 + v16; /*0x7bac73*/
          v27 = v13; /*0x7bac77*/
          a5(&v26); /*0x7bac7b*/
          if ( ++v16 > v15 ) /*0x7bac80*/
            break; /*0x7bac80*/
          v11 = v29; /*0x7bac64*/
          v13 = v32; /*0x7bac68*/
        }
      }
    }
    else if ( v11 == v12 ) /*0x7bac89*/
    {
      v17 = abs32(v14 - v13); /*0x7bac94*/
      if ( v14 <= v13 ) /*0x7bac98*/
        v13 = v14; /*0x7bac9a*/
      v18 = 0; /*0x7bac9c*/
      if ( v17 >= 0 ) /*0x7baca0*/
      {
        while ( 1 ) /*0x7bacb0*/
        {
          v26 = v11; /*0x7bacb0*/
          v27 = v18 + v13; /*0x7bacbb*/
          a5(&v26); /*0x7bacbf*/
          if ( ++v18 > v17 ) /*0x7bacc4*/
            break; /*0x7bacc4*/
          v11 = v29; /*0x7bacac*/
        }
      }
    }
    else
    {
      v39 = v11; /*0x7baccd*/
      v19 = v12 - v11; /*0x7bacd1*/
      v20 = v13 - v14; /*0x7bacd3*/
      v41 = 1; /*0x7bacd7*/
      if ( v20 < 0 ) /*0x7bacdf*/
        v41 = -1; /*0x7bace1*/
      v21 = abs32(v20); /*0x7bacec*/
      v40 = 2 * v19; /*0x7bacf3*/
      v26 = 2 * v21; /*0x7bacfa*/
      if ( v19 <= v21 ) /*0x7bacfe*/
      {
        v24 = v40 - v21; /*0x7bad39*/
        if ( v21 >= 0 ) /*0x7bad3d*/
        {
          v25 = v21 + 1; /*0x7bad43*/
          do /*0x7bad78*/
          {
            v33 = v39; /*0x7bad4e*/
            v34 = v14; /*0x7bad52*/
            a5(&v33); /*0x7bad56*/
            if ( v24 > 0 ) /*0x7bad5a*/
            {
              v24 -= v26; /*0x7bad65*/
              ++v39; /*0x7bad67*/
            }
            v24 += v40; /*0x7bad73*/
            v14 += v41; /*0x7bad75*/
            --v25; /*0x7bad77*/
          }
          while ( v25 ); /*0x7bad78*/
        }
      }
      else
      {
        v22 = 2 * v21 - v19; /*0x7bad00*/
        for ( i = v11; i <= v12; ++i ) /*0x7bad06*/
        {
          v33 = i; /*0x7bad0c*/
          v34 = v14; /*0x7bad10*/
          a5(&v33); /*0x7bad14*/
          if ( v22 > 0 ) /*0x7bad1a*/
          {
            v22 -= v40; /*0x7bad24*/
            v14 += v41; /*0x7bad26*/
          }
          v22 += v26; /*0x7bad2c*/
        }
      }
    }
    (*(void (__thiscall **)(XSurface *))(*(_DWORD *)v28->Surface + 96))(v28); /*0x7bad80*/
    return 1; /*0x7bad86*/
  }
  return result; /*0x7bac0f*/
}



// ==== 0x007BAD90  XSurface::DrawRect  this=XSurface  sig=csp ====
int __thiscall XSurface::DrawRect(XSurface *this, _DWORD *a2, int a3)
{
  int v4; // eax
  int result; // eax
  _BYTE v6[16]; // [esp+4h] [ebp-10h] BYREF

  v4 = (*(int (__thiscall **)(XSurface *, _BYTE *))(*(_DWORD *)this->Surface + 120))(this, v6); /*0x7bada9*/
  LOBYTE(result) = XSurface::DrawRectEx(this, v4, a2, a3); /*0x7badaf*/
  return result; /*0x7badb4*/
}



// ==== 0x007BADC0  XSurface::DrawRectEx  this=XSurface  sig=csp ====
char __thiscall XSurface::DrawRectEx(XSurface *this, int a2, _DWORD *a3, int a4)
{
  int v5; // edx
  int v6; // eax
  int v7; // edi
  _DWORD v9[2]; // [esp+20h] [ebp-20h] BYREF
  _DWORD v10[2]; // [esp+28h] [ebp-18h] BYREF
  _DWORD v11[2]; // [esp+30h] [ebp-10h] BYREF
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
  (*(void (__thiscall **)(XSurface *, int, _DWORD *, _DWORD *, int))(*(_DWORD *)this->Surface + 44))( /*0x7bae17*/
    this,
    a2,
    v9,
    v10,
    a4);
  (*(void (__thiscall **)(XSurface *, int, _DWORD *, int *, int))(*(_DWORD *)this->Surface + 44))( /*0x7bae2a*/
    this,
    a2,
    v9,
    &v12,
    a4);
  (*(void (__thiscall **)(XSurface *, int, _DWORD *, _DWORD *, int))(*(_DWORD *)this->Surface + 44))( /*0x7bae3d*/
    this,
    a2,
    v10,
    v11,
    a4);
  (*(void (__thiscall **)(XSurface *, int, int *, _DWORD *, int))(*(_DWORD *)this->Surface + 44))( /*0x7bae50*/
    this,
    a2,
    &v12,
    v11,
    a4);
  return 1; /*0x7bae53*/
}



// ==== 0x007BAE60  XSurface::GetPixel  this=XSurface  sig=csp ====
int __thiscall XSurface::GetPixel(XSurface *this, _DWORD *a2)
{
  int v3; // ebx
  _WORD *v4; // edi

  v3 = 0; /*0x7bae74*/
  v4 = (_WORD *)(*(int (__thiscall **)(XSurface *, _DWORD, _DWORD))(*(_DWORD *)this->Surface + 92))(this, *a2, a2[1]); /*0x7bae79*/
  if ( v4 ) /*0x7bae7d*/
  {
    if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 112))(this) == 2 ) /*0x7bae89*/
    {
      LOWORD(v3) = *v4; /*0x7bae8d*/
      (*(void (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7bae92*/
      return v3; /*0x7bae9a*/
    }
    v3 = *(unsigned __int8 *)v4; /*0x7baea1*/
    (*(void (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7baea5*/
  }
  return v3; /*0x7bae95*/
}



// ==== 0x007BAEB0  XSurface::SetPixel  this=XSurface  sig=csp ====
int __thiscall XSurface::SetPixel(XSurface *this, _DWORD *a2, __int16 a3)
{
  int result; // eax
  __int16 *v5; // edi

  result = (*(int (__thiscall **)(XSurface *, _DWORD, _DWORD))(*(_DWORD *)this->Surface + 92))(this, *a2, a2[1]); /*0x7baec3*/
  v5 = (__int16 *)result; /*0x7baec6*/
  if ( result ) /*0x7baeca*/
  {
    if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 112))(this) == 2 ) /*0x7baed6*/
      *v5 = a3; /*0x7baedf*/
    else
      *(_BYTE *)v5 = a3; /*0x7baef2*/
    result = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7baee4*/
    LOBYTE(result) = 1; /*0x7baee8*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x7baf03*/
  }
  return result; /*0x7baee7*/
}



// ==== 0x007BAF10  XSurface::GetPixelAtCoords  this=XSurface  sig=csp ====
int __thiscall XSurface::GetPixelAtCoords(XSurface *this, _DWORD *a2, _DWORD *a3)
{
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  _WORD *v7; // esi

  v4 = 0; /*0x7baf19*/
  if ( *a2 >= *a3 && *a2 < *a3 + a3[2] ) /*0x7baf30*/
  {
    v5 = a2[1]; /*0x7baf32*/
    v6 = a3[1]; /*0x7baf35*/
    if ( v5 >= v6 && v5 < v6 + a3[3] ) /*0x7baf43*/
    {
      v7 = (_WORD *)(*(int (__thiscall **)(XSurface *, _DWORD, _DWORD))(*(_DWORD *)this->Surface + 92))( /*0x7baf50*/
                      this,
                      *a2,
                      a2[1]);
      if ( v7 ) /*0x7baf54*/
      {
        if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 112))(this) == 2 ) /*0x7baf60*/
        {
          LOWORD(v4) = *v7; /*0x7baf64*/
          (*(void (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7baf69*/
          return v4; /*0x7baf71*/
        }
        v4 = *(unsigned __int8 *)v7; /*0x7baf78*/
        (*(void (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7baf7c*/
      }
    }
  }
  return v4; /*0x7baf6c*/
}



// ==== 0x007BAF90  XSurface::PutPixel  this=XSurface  sig=csp ====
int __thiscall XSurface::PutPixel(XSurface *this, _DWORD *a2, __int16 a3, _DWORD *a4)
{
  int result; // eax
  int v6; // ecx
  int v7; // edx
  __int16 *v8; // esi

  result = (int)a4; /*0x7baf90*/
  if ( *a2 >= *a4 /*0x7bafd3*/
    && *a2 < *a4 + a4[2]
    && (v6 = a2[1], v7 = a4[1], v6 >= v7)
    && (result = v7 + a4[3], v6 < result)
    && (result = (*(int (__thiscall **)(XSurface *, _DWORD, _DWORD))(*(_DWORD *)this->Surface + 92))(this, *a2, a2[1]),
        (v8 = (__int16 *)result) != 0) )
  {
    if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 112))(this) == 2 ) /*0x7bafdf*/
      *v8 = a3; /*0x7bafe8*/
    else
      *(_BYTE *)v8 = a3; /*0x7baffb*/
    result = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7bafed*/
    LOBYTE(result) = 1; /*0x7baff1*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x7bb00c*/
  }
  return result; /*0x7baff0*/
}



// ==== 0x007BB020  XSurface::FillRect  this=XSurface  sig=csp ====
int __thiscall XSurface::FillRect(XSurface *this, _DWORD *a2, int a3)
{
  int *v4; // eax
  int result; // eax
  _BYTE v6[16]; // [esp+4h] [ebp-10h] BYREF

  v4 = (int *)(*(int (__thiscall **)(XSurface *, _BYTE *))(*(_DWORD *)this->Surface + 120))(this, v6); /*0x7bb032*/
  LOBYTE(result) = XSurface::FillRectEx(this, a2, v4, a3); /*0x7bb03d*/
  return result; /*0x7bb042*/
}



// ==== 0x007BB050  XSurface::FillRectEx  this=XSurface  sig=csp ====
char __thiscall XSurface::FillRectEx(XSurface *this, _DWORD *a2, int *a3, int a4)
{
  XSurface *v4; // edi
  int v5; // eax
  int *v6; // eax
  int *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ebx
  int v11; // ecx
  int v12; // edx
  int *v13; // eax
  _DWORD *v14; // eax
  int v15; // ebx
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // esi
  int v19; // edx
  char v20; // dl
  int v21; // eax
  unsigned int v22; // ecx
  _WORD *v24; // edi
  int i; // ecx
  _DWORD *v26; // eax
  int v27; // ebx
  char v28; // dl
  __int16 v29; // bx
  int v30; // edx
  signed int v31; // ecx
  char *v32; // edi
  _WORD *v33; // eax
  char v34; // dl
  __int16 v35; // bx
  int v36; // edx
  signed int v37; // ecx
  char *v38; // edi
  _WORD *v39; // eax
  bool v40; // zf
  XSurface *v41; // [esp-4h] [ebp-7Ch]
  XSurface *v42; // [esp-4h] [ebp-7Ch]
  int v43[4]; // [esp+Ch] [ebp-6Ch] BYREF
  Rect v44; // [esp+1Ch] [ebp-5Ch] BYREF
  int v45[4]; // [esp+2Ch] [ebp-4Ch] BYREF
  int v46[4]; // [esp+3Ch] [ebp-3Ch] BYREF
  _DWORD v47[2]; // [esp+4Ch] [ebp-2Ch] BYREF
  unsigned int v48; // [esp+54h] [ebp-24h]
  int v49; // [esp+58h] [ebp-20h]
  int v50; // [esp+5Ch] [ebp-1Ch] BYREF
  int v51; // [esp+64h] [ebp-14h] BYREF
  int v52; // [esp+68h] [ebp-10h]
  char *v53; // [esp+6Ch] [ebp-Ch]
  signed int v54; // [esp+70h] [ebp-8h]
  XSurface *v55; // [esp+74h] [ebp-4h]
  _DWORD *v56; // [esp+80h] [ebp+8h]
  _DWORD *v57; // [esp+80h] [ebp+8h]
  int *v58; // [esp+84h] [ebp+Ch]
  int v59; // [esp+88h] [ebp+10h]
  int v60; // [esp+88h] [ebp+10h]

  v4 = this; /*0x7bb05c*/
  v5 = a3[2]; /*0x7bb05e*/
  v55 = this; /*0x7bb061*/
  if ( v5 <= 0 ) /*0x7bb066*/
    return 0; /*0x7bb066*/
  if ( a3[3] <= 0 ) /*0x7bb071*/
    return 0; /*0x7bb071*/
  v6 = (int *)(*(int (__thiscall **)(XSurface *, int *))(*(_DWORD *)this->Surface + 120))(this, v45); /*0x7bb07f*/
  v7 = ClipRectIntersection(&v50, a2, v6, 0, 0); /*0x7bb08f*/
  v46[0] = *v7; /*0x7bb096*/
  v46[1] = v7[1]; /*0x7bb09c*/
  v8 = *a3; /*0x7bb09f*/
  v46[2] = v7[2]; /*0x7bb0a4*/
  v9 = a3[1]; /*0x7bb0a7*/
  v46[3] = v7[3]; /*0x7bb0ad*/
  v10 = a2[1]; /*0x7bb0b2*/
  v51 = v8 + *a2; /*0x7bb0b7*/
  v11 = v9 + v10; /*0x7bb0bd*/
  v12 = a3[2]; /*0x7bb0c0*/
  v52 = v11; /*0x7bb0c3*/
  v13 = Rect::Construct(&v44, &v51, v12, a3[3]); /*0x7bb0cf*/
  v45[0] = *v13; /*0x7bb0d8*/
  v45[1] = v13[1]; /*0x7bb0e0*/
  v45[2] = v13[2]; /*0x7bb0e6*/
  v45[3] = v13[3]; /*0x7bb0f2*/
  v14 = ClipRectIntersection(v43, v46, v45, 0, 0); /*0x7bb0f9*/
  v47[0] = *v14; /*0x7bb100*/
  v47[1] = v14[1]; /*0x7bb106*/
  v15 = v14[2]; /*0x7bb109*/
  v48 = v15; /*0x7bb10c*/
  v16 = v14[3]; /*0x7bb10f*/
  v49 = v16; /*0x7bb114*/
  if ( v15 <= 0 ) /*0x7bb117*/
    return 0; /*0x7bb117*/
  if ( v16 <= 0 ) /*0x7bb11f*/
    return 0; /*0x7bb11f*/
  v56 = (_DWORD *)v16; /*0x7bb125*/
  v58 = (int *)(*(int (__thiscall **)(XSurface *))(*(_DWORD *)v4->Surface + 116))(v4); /*0x7bb132*/
  v17 = CellStruct::Copy((CellStruct *)v47, &v51); /*0x7bb139*/
  v18 = (*(int (__thiscall **)(XSurface *, _DWORD, _DWORD))(*(_DWORD *)v4->Surface + 92))(v4, *v17, v17[1]); /*0x7bb154*/
  v53 = (char *)v18; /*0x7bb158*/
  if ( !v18 ) /*0x7bb15b*/
    return 0; /*0x7bb333*/
  if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)v4->Surface + 112))(v4) == 1 ) /*0x7bb16b*/
  {
    v57 = 0; /*0x7bb170*/
    if ( v49 > 0 ) /*0x7bb179*/
    {
      do /*0x7bb1b2*/
      {
        LOBYTE(v15) = a4; /*0x7bb185*/
        v20 = v48; /*0x7bb187*/
        BYTE1(v15) = a4; /*0x7bb189*/
        v21 = v15 << 16; /*0x7bb18f*/
        LOWORD(v21) = v15; /*0x7bb192*/
        v22 = v48 >> 2; /*0x7bb195*/
        memset32((void *)v18, v21, v48 >> 2); /*0x7bb198*/
        memset((void *)(v18 + 4 * v22), a4, v20 & 3); /*0x7bb19f*/
        v18 += (int)v58; /*0x7bb1aa*/
        v57 = (_DWORD *)((char *)v57 + 1); /*0x7bb1af*/
      }
      while ( (int)v57 < v49 ); /*0x7bb1b2*/
LABEL_9:
      (*(void (__thiscall **)(XSurface *))(*(_DWORD *)v55->Surface + 96))(v55); /*0x7bb1b4*/
      return 1; /*0x7bb1c6*/
    }
  }
  else if ( (v18 & 3) != 0 ) /*0x7bb1d1*/
  {
    if ( (v18 & 3) == 2 ) /*0x7bb1da*/
    {
      if ( v15 > 1 ) /*0x7bb22f*/
      {
        v27 = v15 - 1; /*0x7bb262*/
        v28 = v27; /*0x7bb263*/
        v54 = v27 >> 1; /*0x7bb267*/
        v29 = a4; /*0x7bb26a*/
        v30 = v28 & 1; /*0x7bb26f*/
        v53 = (char *)(a4 | (a4 << 16)); /*0x7bb277*/
        v59 = (int)v56; /*0x7bb285*/
        do /*0x7bb2b8*/
        {
          *(_WORD *)v18 = v29; /*0x7bb28b*/
          v41 = v4; /*0x7bb291*/
          v31 = v54; /*0x7bb292*/
          v32 = (char *)(v18 + 2); /*0x7bb295*/
          if ( v54 > 0 ) /*0x7bb29b*/
          {
            memset32(v32, (int)v53, v54); /*0x7bb2a0*/
            v32 += 4 * v31; /*0x7bb2a0*/
          }
          v33 = v32; /*0x7bb2a2*/
          v4 = v41; /*0x7bb2a4*/
          if ( v30 ) /*0x7bb2a7*/
            *v33 = v29; /*0x7bb2a9*/
          v18 += (int)v58; /*0x7bb2b2*/
          --v59; /*0x7bb2b5*/
        }
        while ( v59 ); /*0x7bb2b8*/
        goto LABEL_9; /*0x7bb2b8*/
      }
      v26 = v56; /*0x7bb237*/
      do /*0x7bb24e*/
      {
        *(_WORD *)v18 = a4; /*0x7bb248*/
        v18 += (int)v58; /*0x7bb24b*/
        v26 = (_DWORD *)((char *)v26 - 1); /*0x7bb24d*/
      }
      while ( v26 ); /*0x7bb24e*/
    }
    else
    {
      do /*0x7bb218*/
      {
        LOWORD(v19) = a4; /*0x7bb1f3*/
        v19 <<= 16; /*0x7bb1f8*/
        LOWORD(v19) = a4; /*0x7bb1fb*/
        memset32((void *)v18, v19, (unsigned int)v15 >> 1); /*0x7bb202*/
        v24 = (_WORD *)(v18 + 4 * ((unsigned int)v15 >> 1)); /*0x7bb202*/
        for ( i = v15 & 1; i; --i ) /*0x7bb204*/
          *v24++ = a4; /*0x7bb206*/
        v4 = v55; /*0x7bb209*/
        v18 += (int)v58; /*0x7bb212*/
        v56 = (_DWORD *)((char *)v56 - 1); /*0x7bb215*/
      }
      while ( v56 ); /*0x7bb218*/
    }
  }
  else
  {
    v34 = v15; /*0x7bb2cf*/
    v54 = v15 >> 1; /*0x7bb2d3*/
    v35 = a4; /*0x7bb2d6*/
    v36 = v34 & 1; /*0x7bb2db*/
    v52 = a4 | (a4 << 16); /*0x7bb2e3*/
    v60 = (int)v56; /*0x7bb2ed*/
    do /*0x7bb31a*/
    {
      v42 = v4; /*0x7bb2f0*/
      v37 = v54; /*0x7bb2f1*/
      v38 = v53; /*0x7bb2f4*/
      if ( v54 > 0 ) /*0x7bb2fa*/
      {
        memset32(v53, v52, v54); /*0x7bb2ff*/
        v38 += 4 * v37; /*0x7bb2ff*/
      }
      v39 = v38; /*0x7bb301*/
      v4 = v42; /*0x7bb303*/
      if ( v36 ) /*0x7bb306*/
        *v39 = v35; /*0x7bb308*/
      v18 += (int)v58; /*0x7bb311*/
      v40 = v60 == 1; /*0x7bb313*/
      v53 = (char *)v18; /*0x7bb314*/
      --v60; /*0x7bb317*/
    }
    while ( !v40 ); /*0x7bb31a*/
    v4 = v55; /*0x7bb31c*/
  }
  (*(void (__thiscall **)(XSurface *))(*(_DWORD *)v4->Surface + 96))(v4); /*0x7bb21e*/
  return 1; /*0x7bb1c0*/
}



// ==== 0x007BB340  XSurface::entry_1C_  this=XSurface  sig=csp ====
char __stdcall XSurface::entry_1C_(XSurface *this, int a2, int a3)
{
  return 0; /*0x7bb342*/
}



// ==== 0x007BB350  XSurface::DrawEllipseOutline  this=XSurface  sig=csp ====
int __thiscall XSurface::DrawEllipseOutline(
        XSurface *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v17; // ecx
  int v18; // ebp
  int v19; // edi
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  int v28; // ebp
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // ebp
  int v33; // esi
  int v34; // edx
  int v35; // edi
  int v36; // ecx
  int v37; // edi
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  _WORD *v42; // [esp+28h] [ebp-38h]
  _WORD *v43; // [esp+28h] [ebp-38h]
  _WORD *v44; // [esp+2Ch] [ebp-34h]
  _WORD *v45; // [esp+2Ch] [ebp-34h]
  int v46; // [esp+30h] [ebp-30h]
  int v47; // [esp+30h] [ebp-30h]
  int v48; // [esp+34h] [ebp-2Ch]
  int v49; // [esp+34h] [ebp-2Ch]
  int v50; // [esp+38h] [ebp-28h]
  int v51; // [esp+3Ch] [ebp-24h]
  int v52; // [esp+3Ch] [ebp-24h]
  int v53; // [esp+40h] [ebp-20h]
  int v54; // [esp+44h] [ebp-1Ch]
  int v56; // [esp+4Ch] [ebp-14h]
  int v57; // [esp+50h] [ebp-10h] BYREF
  int v58; // [esp+54h] [ebp-Ch]
  int v59; // [esp+58h] [ebp-8h] BYREF
  int v60; // [esp+5Ch] [ebp-4h]
  _WORD *v61; // [esp+6Ch] [ebp+Ch]
  _WORD *v62; // [esp+6Ch] [ebp+Ch]
  int v63; // [esp+70h] [ebp+10h]
  _WORD *v64; // [esp+70h] [ebp+10h]
  _WORD *v65; // [esp+70h] [ebp+10h]

  v54 = (*(int (__fastcall **)(XSurface *))(*(_DWORD *)this->Surface + 116))(this) >> 1; /*0x7bb374*/
  v12 = a3 + a5; /*0x7bb378*/
  v63 = a3 + a5; /*0x7bb37d*/
  if ( a2 >= a6 && a2 < a6 + a8 && v12 >= a7 && v12 < a9 + a7 ) /*0x7bb39d*/
  {
    v58 = v12; /*0x7bb3a3*/
    v13 = *(_DWORD *)this->Surface; /*0x7bb3a7*/
    v57 = a2; /*0x7bb3b1*/
    (*(void (__thiscall **)(XSurface *, int *, int))(v13 + 36))(this, &v57, a10); /*0x7bb3b5*/
  }
  v14 = a3 - a5; /*0x7bb3bc*/
  v51 = a3 - a5; /*0x7bb3c0*/
  if ( a2 >= a6 && a2 < a6 + a8 && v14 >= a7 && v14 < a9 + a7 ) /*0x7bb3e0*/
  {
    v58 = a3 - a5; /*0x7bb3e6*/
    v15 = *(_DWORD *)this->Surface; /*0x7bb3ea*/
    v57 = a2; /*0x7bb3f4*/
    (*(void (__thiscall **)(XSurface *, int *, int))(v15 + 36))(this, &v57, a10); /*0x7bb3f8*/
  }
  v53 = a5 * a5; /*0x7bb409*/
  v17 = a5 * a4 * a4; /*0x7bb40f*/
  v56 = a4 * a4; /*0x7bb412*/
  v58 = a5; /*0x7bb416*/
  v48 = 0; /*0x7bb41d*/
  v46 = 2 * v17; /*0x7bb425*/
  v18 = a4 * a4 / 4 - v17; /*0x7bb438*/
  v19 = (*(int (__thiscall **)(XSurface *, _DWORD, _DWORD))(*(_DWORD *)this->Surface + 92))(this, 0, 0); /*0x7bb449*/
  v50 = a2; /*0x7bb44f*/
  v20 = v54 * v63; /*0x7bb453*/
  v64 = (_WORD *)(v19 + 2 * (v54 * v63 + a2)); /*0x7bb45c*/
  v21 = v54 * v51; /*0x7bb464*/
  v52 = a2; /*0x7bb467*/
  v61 = (_WORD *)(v19 + 2 * (a2 + v21)); /*0x7bb478*/
  v42 = v61; /*0x7bb47f*/
  v44 = (_WORD *)(v19 + 2 * (a2 + v20)); /*0x7bb483*/
  while ( 1 ) /*0x7bb491*/
  {
    v18 += v53 + v48; /*0x7bb491*/
    if ( v18 < 0 ) /*0x7bb493*/
    {
      v22 = v46; /*0x7bb4e2*/
    }
    else
    {
      v22 = v46 - 2 * v56; /*0x7bb49f*/
      v18 -= v22; /*0x7bb4aa*/
      v46 = v22; /*0x7bb4ad*/
      --v58; /*0x7bb4b1*/
      v64 -= v54; /*0x7bb4be*/
      v61 += v54; /*0x7bb4c8*/
      v42 += v54; /*0x7bb4d2*/
      v44 -= v54; /*0x7bb4dc*/
    }
    v48 += 2 * v53; /*0x7bb4f6*/
    ++v52; /*0x7bb4fa*/
    --v50; /*0x7bb503*/
    ++v64; /*0x7bb50e*/
    --v61; /*0x7bb519*/
    ++v42; /*0x7bb524*/
    --v44; /*0x7bb531*/
    if ( v48 >= v22 ) /*0x7bb535*/
      break; /*0x7bb535*/
    v23 = a6; /*0x7bb543*/
    v60 = v58 + a3; /*0x7bb54d*/
    if ( v52 >= a6 && v52 < a6 + a8 && v60 >= a7 && v60 < a9 + a7 ) /*0x7bb577*/
      *v64 = a10; /*0x7bb582*/
    v24 = a3 - v58; /*0x7bb58d*/
    if ( v50 >= a6 ) /*0x7bb595*/
    {
      if ( v50 < a6 + a8 && v24 >= a7 && v24 < a9 + a7 ) /*0x7bb5b5*/
        *v61 = a10; /*0x7bb5c0*/
      v23 = a6; /*0x7bb5c3*/
    }
    v25 = a3 - v58; /*0x7bb5cf*/
    if ( v52 >= v23 ) /*0x7bb5d7*/
    {
      if ( v52 < v23 + a8 && v25 >= a7 && v25 < a9 + a7 ) /*0x7bb5f7*/
        *v42 = a10; /*0x7bb602*/
      v23 = a6; /*0x7bb605*/
    }
    v26 = a3 + v58; /*0x7bb611*/
    if ( v50 >= v23 && v50 < a6 + a8 && v26 >= a7 && v26 < a9 + a7 ) /*0x7bb64b*/
      *v44 = a10; /*0x7bb65a*/
  }
  v27 = a6; /*0x7bb662*/
  if ( a2 + a4 < a6 ) /*0x7bb66f*/
  {
    v28 = a3; /*0x7bb7bd*/
  }
  else
  {
    v28 = a3; /*0x7bb679*/
    if ( a2 + a4 < a6 + a8 && a3 >= a7 ) /*0x7bb689*/
    {
      if ( a3 < a9 + a7 ) /*0x7bb693*/
      {
        v59 = a2 + a4; /*0x7bb699*/
        v60 = a3; /*0x7bb6a1*/
        (*(void (__thiscall **)(XSurface *, int *, int))(*(_DWORD *)this->Surface + 36))(this, &v59, a10); /*0x7bb6ad*/
      }
      v27 = a6; /*0x7bb6b0*/
    }
  }
  if ( a2 - a4 >= v27 && a2 - a4 < v27 + a8 && v28 >= a7 && v28 < a9 + a7 ) /*0x7bb6da*/
  {
    v59 = a2 - a4; /*0x7bb6e5*/
    v29 = *(_DWORD *)this->Surface; /*0x7bb6e9*/
    v60 = v28; /*0x7bb6f0*/
    (*(void (__thiscall **)(XSurface *, int *, int))(v29 + 36))(this, &v59, a10); /*0x7bb6f4*/
  }
  v58 = 0; /*0x7bb700*/
  v47 = 0; /*0x7bb704*/
  v49 = 2 * a4 * v53; /*0x7bb70f*/
  v57 = a4; /*0x7bb713*/
  v30 = v53 / 4 - a4 * v53; /*0x7bb720*/
  v31 = v54 * v28 - a4; /*0x7bb72c*/
  v65 = (_WORD *)(v19 + 2 * (a4 + v54 * v28 + a2)); /*0x7bb733*/
  v32 = v54 * v28; /*0x7bb73e*/
  v33 = a2 - a4; /*0x7bb74e*/
  v43 = (_WORD *)(v19 + 2 * (a4 + a2 + v32)); /*0x7bb75b*/
  v34 = a2 + a4; /*0x7bb75f*/
  v62 = (_WORD *)(v19 + 2 * (a2 + v32 - a4)); /*0x7bb763*/
  v45 = (_WORD *)(v19 + 2 * (a2 + v31)); /*0x7bb767*/
  while ( 1 ) /*0x7bb775*/
  {
    v30 += v56 + v47; /*0x7bb775*/
    if ( v30 < 0 ) /*0x7bb777*/
    {
      v35 = v49; /*0x7bb7c6*/
    }
    else
    {
      v35 = v49 - 2 * v53; /*0x7bb783*/
      v30 -= v35; /*0x7bb78e*/
      --v65; /*0x7bb790*/
      --v34; /*0x7bb79b*/
      ++v62; /*0x7bb79c*/
      ++v33; /*0x7bb7a7*/
      --v43; /*0x7bb7a8*/
      v49 = v35; /*0x7bb7b3*/
      ++v45; /*0x7bb7b7*/
    }
    v47 += 2 * v56; /*0x7bb7d6*/
    ++v58; /*0x7bb7df*/
    v65 += v54; /*0x7bb7eb*/
    v62 -= v54; /*0x7bb7f5*/
    v43 -= v54; /*0x7bb7ff*/
    v45 += v54; /*0x7bb80f*/
    if ( v47 > v35 ) /*0x7bb813*/
      break; /*0x7bb813*/
    v36 = v58 + a3; /*0x7bb821*/
    if ( v34 < a6 || v34 >= a6 + a8 ) /*0x7bb82f*/
    {
      v37 = a7; /*0x7bb852*/
    }
    else
    {
      v37 = a7; /*0x7bb831*/
      if ( v36 >= a7 && v36 < a7 + a9 ) /*0x7bb841*/
        *v65 = a10; /*0x7bb84c*/
    }
    v38 = a3 - v58; /*0x7bb85e*/
    if ( v33 >= a6 && v33 < a6 + a8 && v38 >= v37 && v38 < v37 + a9 ) /*0x7bb87a*/
      *v62 = a10; /*0x7bb885*/
    v39 = a3 - v58; /*0x7bb891*/
    if ( v34 >= a6 && v34 < a6 + a8 && v39 >= v37 && v39 < v37 + a9 ) /*0x7bb8ad*/
      *v43 = a10; /*0x7bb8b8*/
    v40 = a3 + v58; /*0x7bb8c4*/
    if ( v33 >= a6 && v33 < a6 + a8 && v40 >= v37 && v40 < a9 + v37 ) /*0x7bb8ec*/
      *v45 = a10; /*0x7bb8fb*/
  }
  return (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 96))(this); /*0x7bb90c*/
}



// ==== 0x007BB920  Draw::Ellipse  this=Draw  sig=csp ====
int __thiscall Draw::Ellipse(Draw *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // ebp
  int v11; // ebx
  int v12; // edi
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int Draw_field_00; // edx
  int v17; // eax
  int v18; // edi
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int result; // eax
  int v25; // [esp+40h] [ebp-48h]
  int v26; // [esp+44h] [ebp-44h]
  int v27; // [esp+48h] [ebp-40h]
  int v28; // [esp+4Ch] [ebp-3Ch]
  _DWORD v29[2]; // [esp+50h] [ebp-38h] BYREF
  _DWORD v30[2]; // [esp+58h] [ebp-30h] BYREF
  _DWORD v31[2]; // [esp+60h] [ebp-28h] BYREF
  _DWORD v32[2]; // [esp+68h] [ebp-20h] BYREF
  _DWORD v33[2]; // [esp+70h] [ebp-18h] BYREF
  _DWORD v34[2]; // [esp+78h] [ebp-10h] BYREF
  _DWORD v35[2]; // [esp+80h] [ebp-8h] BYREF

  v10 = a3; /*0x7bb92c*/
  v11 = a2; /*0x7bb933*/
  v27 = a4; /*0x7bb943*/
  v12 = 0; /*0x7bb947*/
  v26 = 3 - 2 * a4; /*0x7bb949*/
  v13 = -a4; /*0x7bb94d*/
  v14 = a3 + a4; /*0x7bb94f*/
  v28 = 0; /*0x7bb951*/
  a4 = -a4; /*0x7bb955*/
  v25 = v14; /*0x7bb959*/
  while ( 1 ) /*0x7bb970*/
  {
    a3 = v12 + v10; /*0x7bb970*/
    a2 = v11 + v27; /*0x7bb974*/
    v15 = v13 + v11; /*0x7bb978*/
    Draw_field_00 = this->Draw_field_00; /*0x7bb97b*/
    v29[1] = v12 + v10; /*0x7bb97d*/
    v29[0] = v15; /*0x7bb985*/
    (*(void (__thiscall **)(Draw *, int *, _DWORD *, int *, int))(Draw_field_00 + 44))(this, &a5, v29, &a2, a9); /*0x7bb99b*/
    v17 = v12 + v11; /*0x7bb9a2*/
    v18 = -v12; /*0x7bb9a5*/
    v30[0] = v17; /*0x7bb9a7*/
    v30[1] = v25; /*0x7bb9b2*/
    v31[0] = v18 + v11; /*0x7bb9b6*/
    v19 = this->Draw_field_00; /*0x7bb9bc*/
    v31[1] = v25; /*0x7bb9be*/
    (*(void (__thiscall **)(Draw *, int *, _DWORD *, _DWORD *, int))(v19 + 44))(this, &a5, v31, v30, a9); /*0x7bb9d4*/
    v32[1] = v18 + v10; /*0x7bb9de*/
    v20 = this->Draw_field_00; /*0x7bb9e8*/
    v32[0] = v11 + v27; /*0x7bb9ea*/
    v33[1] = v18 + v10; /*0x7bb9f4*/
    v33[0] = v11 + a4; /*0x7bb9f8*/
    (*(void (__thiscall **)(Draw *, int *, _DWORD *, _DWORD *, int))(v20 + 44))(this, &a5, v33, v32, a9); /*0x7bba12*/
    v21 = this->Draw_field_00; /*0x7bba24*/
    v34[1] = a4 + v10; /*0x7bba26*/
    v35[1] = a4 + v10; /*0x7bba2a*/
    v34[0] = v11 + v28; /*0x7bba32*/
    v35[0] = v11 + v18; /*0x7bba48*/
    (*(void (__thiscall **)(Draw *, int *, _DWORD *, _DWORD *, int))(v21 + 44))(this, &a5, v35, v34, a9); /*0x7bba4c*/
    if ( v26 >= 0 ) /*0x7bba59*/
    {
      v22 = v28 - v27--; /*0x7bba69*/
      v26 += 4 * v22 + 10; /*0x7bba79*/
      --v25; /*0x7bba82*/
      ++a4; /*0x7bba86*/
    }
    else
    {
      v26 += 4 * v28 + 6; /*0x7bba5f*/
    }
    result = v28 + 1; /*0x7bba92*/
    if ( v27 < ++v28 ) /*0x7bba93*/
      break; /*0x7bba99*/
    v12 = v28; /*0x7bb95f*/
    v13 = a4; /*0x7bb963*/
  }
  return result; /*0x7bba9f*/
}



// ==== 0x007BBAB0  XSurface::Fill  this=XSurface  sig=csp ====
int __thiscall XSurface::Fill(XSurface *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  _BYTE v7[20]; // [esp+8h] [ebp-20h] BYREF
  _BYTE v8[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v3 = *(_DWORD *)this->Surface; /*0x7bbabf*/
  v4 = (*(int (__thiscall **)(XSurface *, _BYTE *, int))(*(_DWORD *)this->Surface + 120))(this, v7, a2); /*0x7bbac5*/
  v5 = (*(int (__thiscall **)(XSurface *, _BYTE *, int))(*(_DWORD *)this->Surface + 120))(this, v8, v4); /*0x7bbad2*/
  return (*(int (__thiscall **)(XSurface *, int))(v3 + 16))(this, v5); /*0x7bbadb*/
}



// ==== 0x007BBAF0  XSurface::BlitWhole  this=XSurface  sig=csp ====
int __thiscall XSurface::BlitWhole(XSurface *this, int *a2, int a3, int a4)
{
  int *v5; // eax
  int v6; // edx
  int v7; // eax
  int *v8; // eax
  int v9; // edx
  int v10; // eax
  int v12; // [esp+Ch] [ebp-30h] BYREF
  int v13; // [esp+10h] [ebp-2Ch]
  int v14; // [esp+14h] [ebp-28h]
  int v15; // [esp+18h] [ebp-24h]
  int v16; // [esp+1Ch] [ebp-20h] BYREF
  int v17; // [esp+20h] [ebp-1Ch]
  int v18; // [esp+24h] [ebp-18h]
  int v19; // [esp+28h] [ebp-14h]
  _BYTE v20[16]; // [esp+2Ch] [ebp-10h] BYREF

  v5 = (int *)(*(int (__thiscall **)(XSurface *, _BYTE *))(*(_DWORD *)this->Surface + 120))(this, v20); /*0x7bbb01*/
  v16 = *v5; /*0x7bbb0a*/
  v17 = v5[1]; /*0x7bbb13*/
  v18 = v5[2]; /*0x7bbb1c*/
  v6 = *a2; /*0x7bbb20*/
  v7 = v5[3]; /*0x7bbb22*/
  v16 = 0; /*0x7bbb25*/
  v19 = v7; /*0x7bbb29*/
  v17 = 0; /*0x7bbb32*/
  v8 = (int *)(*(int (__thiscall **)(int *, _BYTE *))(v6 + 120))(a2, v20); /*0x7bbb36*/
  v12 = *v8; /*0x7bbb3b*/
  v13 = v8[1]; /*0x7bbb42*/
  v14 = v8[2]; /*0x7bbb49*/
  v9 = v8[3]; /*0x7bbb51*/
  v10 = *(_DWORD *)this->Surface; /*0x7bbb54*/
  v15 = v9; /*0x7bbb56*/
  v12 = 0; /*0x7bbb6d*/
  v13 = 0; /*0x7bbb71*/
  return (*(int (__thiscall **)(XSurface *, int *, int *, int *, int, int))(v10 + 8))(this, &v16, a2, &v12, a3, a4); /*0x7bbb78*/
}



// ==== 0x007BBB90  XSurface::BlitPart  this=XSurface  sig=csp ====
char __thiscall XSurface::BlitPart(XSurface *this, void **a2, void **a3, void **a4, void **a5, int a6)
{
  void **v6; // edi
  int v8; // ebx
  int v9; // eax
  int v10; // edx
  int v12[4]; // [esp+Ch] [ebp-40h] BYREF
  int v13[4]; // [esp+1Ch] [ebp-30h] BYREF
  _BYTE v14[16]; // [esp+2Ch] [ebp-20h] BYREF
  _BYTE v15[16]; // [esp+3Ch] [ebp-10h] BYREF

  v6 = a3; /*0x7bbb96*/
  v8 = (*((int (__thiscall **)(void **, _BYTE *))*a3 + 30))(a3, v14); /*0x7bbbaa*/
  v9 = (*(int (__thiscall **)(XSurface *, _BYTE *))(*(_DWORD *)this->Surface + 120))(this, v15); /*0x7bbbb3*/
  v13[0] = (int)*a2; /*0x7bbbbd*/
  v13[1] = (int)a2[1]; /*0x7bbbc4*/
  v13[2] = (int)a2[2]; /*0x7bbbcb*/
  v13[3] = (int)a2[3]; /*0x7bbbd6*/
  v12[0] = (int)*a4; /*0x7bbbdc*/
  v12[1] = (int)a4[1]; /*0x7bbbe3*/
  v12[2] = (int)a4[2]; /*0x7bbbea*/
  v12[3] = (int)a4[3]; /*0x7bbbf6*/
  if ( !(unsigned __int8)IntersectSurfaceRects(v13, v9, v12, v8) ) /*0x7bbc00*/
    return 0; /*0x7bbcda*/
  v10 = *(_DWORD *)this->Surface; /*0x7bbc11*/
  if ( (_BYTE)a5 ) /*0x7bbc17*/
  {
    if ( (*(int (__thiscall **)(XSurface *))(v10 + 112))(this) == 1 ) /*0x7bbc1f*/
    {
      a5 = &BlitTrans<unsigned char>::`vftable'; /*0x7bbc3d*/
      return BlitterCopySimpleSHP((int *)this->Surface, v13, (int)v6, (int)v12, (int *)&a5, 0, 3, 1000, 0); /*0x7bbc45*/
    }
    else
    {
      a3 = &BlitTrans<unsigned short>::`vftable'; /*0x7bbc5c*/
      return BlitterCopySimpleSHP((int *)this->Surface, v13, (int)v6, (int)v12, (int *)&a3, 0, 3, 1000, 0); /*0x7bbc6a*/
    }
  }
  else if ( (*(int (__thiscall **)(XSurface *))(v10 + 112))(this) == 1 ) /*0x7bbc72*/
  {
    a2 = &BlitPlain<unsigned char>::`vftable'; /*0x7bbc90*/
    return BlitterCopySimpleSHP((int *)this->Surface, v13, (int)v6, (int)v12, (int *)&a2, 0, 3, 1000, 0); /*0x7bbc98*/
  }
  else
  {
    a4 = &BlitPlain<unsigned short>::`vftable'; /*0x7bbcaf*/
    return BlitterCopySimpleSHP((int *)this->Surface, v13, (int)v6, (int)v12, (int *)&a4, 0, 3, 1000, 0); /*0x7bbcca*/
  }
}



// ==== 0x007BBCF0  XSurface::Blit  this=XSurface  sig=csp ====
char __thiscall XSurface::Blit(XSurface *this, int a2, void **a3, int a4, int a5, _DWORD *a6, void **a7, int a8)
{
  int v10[4]; // [esp+4h] [ebp-20h] BYREF
  int v11[4]; // [esp+14h] [ebp-10h] BYREF

  v11[0] = (int)*a3; /*0x7bbcfc*/
  v11[1] = (int)a3[1]; /*0x7bbd03*/
  v11[2] = (int)a3[2]; /*0x7bbd0a*/
  v11[3] = (int)a3[3]; /*0x7bbd15*/
  v10[0] = *a6; /*0x7bbd1b*/
  v10[1] = a6[1]; /*0x7bbd22*/
  v10[2] = a6[2]; /*0x7bbd29*/
  v10[3] = a6[3]; /*0x7bbd39*/
  if ( !(unsigned __int8)IntersectSurfaceRects(v11, a2, v10, a5) ) /*0x7bbd46*/
    return 0; /*0x7bbe0d*/
  if ( (_BYTE)a7 ) /*0x7bbd59*/
  {
    if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 112))(this) == 1 ) /*0x7bbd65*/
    {
      a7 = &BlitTrans<unsigned char>::`vftable'; /*0x7bbd70*/
      return BlitterCopySimpleSHP((int *)this->Surface, v11, a4, (int)v10, (int *)&a7, 0, 3, 1000, 0); /*0x7bbd7e*/
    }
    else
    {
      a3 = &BlitTrans<unsigned short>::`vftable'; /*0x7bbd89*/
      return BlitterCopySimpleSHP((int *)this->Surface, v11, a4, (int)v10, (int *)&a3, 0, 3, 1000, 0); /*0x7bbda8*/
    }
  }
  else if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->Surface + 112))(this) == 1 ) /*0x7bbdbe*/
  {
    a7 = &BlitPlain<unsigned char>::`vftable'; /*0x7bbdc9*/
    return BlitterCopySimpleSHP((int *)this->Surface, v11, a4, (int)v10, (int *)&a7, 0, 3, 1000, 0); /*0x7bbdd7*/
  }
  else
  {
    a3 = &BlitPlain<unsigned short>::`vftable'; /*0x7bbde2*/
    return BlitterCopySimpleSHP((int *)this->Surface, v11, a4, (int)v10, (int *)&a3, 0, 3, 1000, 0); /*0x7bbe01*/
  }
}



// ==== 0x007BBE20  IntersectSurfaceRects  this=IUnknown  sig=csp ====
int __fastcall IntersectSurfaceRects(int *a1, int a2, int *a3, int a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int *v20; // eax
  int *v21; // eax
  _DWORD v23[4]; // [esp+Ch] [ebp-10h] BYREF

  v5 = a3[2]; /*0x7bbe2c*/
  if ( a1[2] == v5 && a1[3] == a3[3] ) /*0x7bbe40*/
  {
    if ( *a1 < 0 ) /*0x7bbe4a*/
    {
      *a3 -= *a1; /*0x7bbe50*/
      a3[2] = v5 + *a1; /*0x7bbe56*/
      v6 = *a1; /*0x7bbe59*/
      v7 = a1[2]; /*0x7bbe5b*/
      *a1 = 0; /*0x7bbe5e*/
      a1[2] = v6 + v7; /*0x7bbe66*/
    }
    v8 = a1[1]; /*0x7bbe69*/
    if ( v8 < 0 ) /*0x7bbe6e*/
    {
      v9 = a3[3]; /*0x7bbe73*/
      a3[1] -= v8; /*0x7bbe78*/
      a3[3] = a1[1] + v9; /*0x7bbe80*/
      v10 = a1[1]; /*0x7bbe83*/
      v11 = a1[3]; /*0x7bbe86*/
      a1[1] = 0; /*0x7bbe89*/
      a1[3] = v10 + v11; /*0x7bbe92*/
    }
    v12 = a1[2] + *a1 - *(_DWORD *)(a2 + 8); /*0x7bbe9f*/
    if ( v12 > 0 ) /*0x7bbea3*/
    {
      a3[2] -= v12; /*0x7bbeaa*/
      a1[2] -= v12; /*0x7bbeb2*/
    }
    v13 = a1[1] + a1[3] - *(_DWORD *)(a2 + 12); /*0x7bbec0*/
    if ( v13 > 0 ) /*0x7bbec4*/
    {
      a3[3] -= v13; /*0x7bbecb*/
      a1[3] -= v13; /*0x7bbed3*/
    }
    if ( *a3 < 0 ) /*0x7bbeda*/
    {
      *a1 -= *a3; /*0x7bbee0*/
      v14 = *a3; /*0x7bbee2*/
      a3[2] += *a3; /*0x7bbee9*/
      a1[2] += v14; /*0x7bbef1*/
      *a3 = 0; /*0x7bbef4*/
    }
    v15 = a3[1]; /*0x7bbefa*/
    if ( v15 < 0 ) /*0x7bbeff*/
    {
      a1[1] -= v15; /*0x7bbf06*/
      v16 = a3[1]; /*0x7bbf09*/
      a3[3] += v16; /*0x7bbf11*/
      a1[3] += v16; /*0x7bbf19*/
      a3[1] = 0; /*0x7bbf1c*/
    }
    v17 = *a3 + a3[2] - *(_DWORD *)(a4 + 8); /*0x7bbf33*/
    if ( v17 > 0 ) /*0x7bbf37*/
    {
      a3[2] = *(_DWORD *)(a4 + 8) - *a3; /*0x7bbf3b*/
      a1[2] -= v17; /*0x7bbf43*/
    }
    v18 = *(_DWORD *)(a4 + 12); /*0x7bbf49*/
    v19 = a3[3] + a3[1] - v18; /*0x7bbf51*/
    if ( v19 > 0 ) /*0x7bbf55*/
    {
      a3[3] = v18 - a3[1]; /*0x7bbf59*/
      a1[3] -= v19; /*0x7bbf61*/
    }
  }
  else
  {
    v20 = ClipRectIntersection(v23, a1, (int *)a2, 0, 0); /*0x7bbf71*/
    *a1 = *v20; /*0x7bbf7e*/
    a1[1] = v20[1]; /*0x7bbf83*/
    a1[2] = v20[2]; /*0x7bbf89*/
    a1[3] = v20[3]; /*0x7bbf93*/
    v21 = ClipRectIntersection(v23, a3, (int *)a4, 0, 0); /*0x7bbf9d*/
    *a3 = *v21; /*0x7bbfa6*/
    a3[1] = v21[1]; /*0x7bbfab*/
    a3[2] = v21[2]; /*0x7bbfb1*/
    a3[3] = v21[3]; /*0x7bbfb7*/
  }
  return a1[2] > 0 && a1[3] > 0 && a3[2] > 0 && a3[3] > 0; /*0x7bbfd6*/
}



// ==== 0x007BBFF0  sub_7BBFF0  this=-  sig=ida-proto ====
char __fastcall sub_7BBFF0(int a1, int a2, int *a3, int a4, _BYTE *a5, int *a6, int *a7)
{
  int v9; // eax
  int *v11; // [esp-10h] [ebp-3Ch]
  _BYTE v12[20]; // [esp+Ch] [ebp-20h] BYREF
  int v13[3]; // [esp+20h] [ebp-Ch] BYREF

  v11 = (int *)(*(int (__thiscall **)(int *, _BYTE *, int))(*a3 + 120))(a3, v12, a4); /*0x7bc022*/
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 120))(a1); /*0x7bc02a*/
  return CalcSurfaceBlitRects(a1, v9, v13, a2, a3, v11, a5, a6, a7); /*0x7bc036*/
}



// ==== 0x007BC040  CalcSurfaceBlitRects  this=-  sig=csp ====
char __fastcall CalcSurfaceBlitRects(
        int a1,
        CellStruct *a2,
        CellStruct *a3,
        int a4,
        CellStruct *a5,
        CellStruct *a6,
        _BYTE *a7,
        int *a8,
        int *a9)
{
  int v9; // ebx
  CellStruct *v10; // ebp
  int v11; // eax
  int v12; // edx
  int v13; // ebx
  int v14; // eax
  int v15; // ecx
  Coord2D *v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  Coord2D *v19; // eax
  _DWORD *v20; // eax
  int v21; // eax
  _DWORD *v23; // [esp-4h] [ebp-2Ch]
  _DWORD *v24; // [esp-4h] [ebp-2Ch]
  _DWORD v25[2]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v26[2]; // [esp+18h] [ebp-10h] BYREF
  _DWORD v27[2]; // [esp+20h] [ebp-8h] BYREF

  v9 = a1; /*0x7bc049*/
  v10 = a2; /*0x7bc04f*/
  *a7 = 0; /*0x7bc05a*/
  *a8 = 0; /*0x7bc05d*/
  *a9 = 0; /*0x7bc063*/
  v11 = *(_DWORD *)a3->__pad_8; /*0x7bc069*/
  v26[0] = a2; /*0x7bc06f*/
  v25[0] = a1; /*0x7bc073*/
  if ( v11 <= 0 /*0x7bc0d8*/
    || *(int *)&a3->__pad_8[4] <= 0
    || *(int *)a2->__pad_8 <= 0
    || *(int *)&a2->__pad_8[4] <= 0
    || *(int *)a6->__pad_8 <= 0
    || *(int *)&a6->__pad_8[4] <= 0
    || *(int *)a5->__pad_8 <= 0
    || *(int *)&a5->__pad_8[4] <= 0
    || !(unsigned __int8)IntersectSurfaceRects(&a3->field_0, (int)a2, &a6->field_0, (int)a5) )
  {
    return 0; /*0x7bc0d8*/
  }
  *a7 = 0; /*0x7bc0e9*/
  if ( a4 == v9 ) /*0x7bc0f2*/
  {
    v12 = a3->field_0; /*0x7bc0f4*/
    v13 = a6->field_0; /*0x7bc0f9*/
    if ( a6->field_0 < a3->field_0 + *(_DWORD *)a3->__pad_8 ) /*0x7bc0ff*/
    {
      v14 = (int)a3->field_4; /*0x7bc101*/
      v15 = (int)a6->field_4; /*0x7bc107*/
      if ( v15 < v14 + *(_DWORD *)&a3->__pad_8[4] /*0x7bc12a*/
        && *(_DWORD *)a6->__pad_8 + v13 > v12
        && *(_DWORD *)&a6->__pad_8[4] + v15 > v14
        && (v15 < v14 || v15 == v14 && v13 < v12) )
      {
        *a7 = 1; /*0x7bc130*/
      }
      v10 = (CellStruct *)v26[0]; /*0x7bc133*/
    }
    v9 = v25[0]; /*0x7bc137*/
  }
  v23 = CellStruct::Copy(a3, v26); /*0x7bc14f*/
  v16 = (Coord2D *)CellStruct::Copy(v10, v27); /*0x7bc154*/
  v17 = Coord2D::Add(v16, v25, v23); /*0x7bc15b*/
  v18 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v9 + 92))(v9, *v17, v17[1]); /*0x7bc173*/
  *a8 = v18; /*0x7bc17c*/
  if ( !v18 ) /*0x7bc17e*/
    return 0; /*0x7bc17e*/
  v24 = CellStruct::Copy(a6, v27); /*0x7bc190*/
  v19 = (Coord2D *)CellStruct::Copy(a5, v25); /*0x7bc19b*/
  v20 = Coord2D::Add(v19, v26, v24); /*0x7bc1a2*/
  v21 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a4 + 92))(a4, *v20, v20[1]); /*0x7bc1bc*/
  *a9 = v21; /*0x7bc1c5*/
  if ( !v21 ) /*0x7bc1c7*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9); /*0x7bc1cd*/
    return 0; /*0x7bc1d9*/
  }
  return 1; /*0x7bc1d2*/
}



// ==== 0x007BC1F0  sub_7BC1F0  this=-  sig=ida-proto ====
char __fastcall sub_7BC1F0(int *a1, int *a2, int a3, int a4)
{
  void **v7; // [esp+8h] [ebp-4h] BYREF

  if ( (*(int (__thiscall **)(int *))(*a1 + 112))(a1) == 1 ) /*0x7bc1ff*/
  {
    v7 = &BlitPlain<unsigned char>::`vftable'; /*0x7bc20a*/
    return BlitterCopySimpleSHP(a1, a2, a3, a4, (int *)&v7, 0, 3, 1000, 0); /*0x7bc218*/
  }
  else
  {
    v7 = &BlitPlain<unsigned short>::`vftable'; /*0x7bc223*/
    return BlitterCopySimpleSHP(a1, a2, a3, a4, (int *)&v7, 0, 3, 1000, 0); /*0x7bc240*/
  }
}



// ==== 0x007BC250  sub_7BC250  this=-  sig=ida-proto ====
char __fastcall sub_7BC250(int *a1, int *a2, int a3, int a4)
{
  void **v7; // [esp+8h] [ebp-4h] BYREF

  if ( (*(int (__thiscall **)(int *))(*a1 + 112))(a1) == 1 ) /*0x7bc25f*/
  {
    v7 = &BlitTrans<unsigned char>::`vftable'; /*0x7bc26a*/
    return BlitterCopySimpleSHP(a1, a2, a3, a4, (int *)&v7, 0, 3, 1000, 0); /*0x7bc278*/
  }
  else
  {
    v7 = &BlitTrans<unsigned short>::`vftable'; /*0x7bc283*/
    return BlitterCopySimpleSHP(a1, a2, a3, a4, (int *)&v7, 0, 3, 1000, 0); /*0x7bc2a0*/
  }
}



// ==== 0x007BC2B0  ClipLine  this=-  sig=csp ====
int __fastcall ClipLine(int *a1, int *a2, int *a3)
{
  int v4; // esi
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st4
  int v9; // edx
  int result; // eax
  int v11; // ecx
  char v12; // fps^1
  bool v13; // c0
  char v14; // c2
  bool v15; // c3
  char v16; // fps^1
  bool v17; // c0
  char v18; // c2
  bool v19; // c3
  double v20; // st4
  double v21; // kr00_8
  char v22; // fps^1
  bool v23; // c0
  char v24; // c2
  bool v25; // c3
  bool v26; // c0
  char v27; // c2
  bool v28; // c3
  char v29; // fps^1
  bool v30; // c0
  char v31; // c2
  bool v32; // c3
  bool v33; // c0
  char v34; // c2
  bool v35; // c3
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // [esp+10h] [ebp-60h]
  int v40; // [esp+14h] [ebp-5Ch]
  double v42; // [esp+28h] [ebp-48h]
  double v43; // [esp+30h] [ebp-40h]
  double v44; // [esp+38h] [ebp-38h]
  double v45; // [esp+40h] [ebp-30h]
  double v46; // [esp+48h] [ebp-28h]
  double v47; // [esp+50h] [ebp-20h]
  double v48; // [esp+58h] [ebp-18h]
  double v49; // [esp+60h] [ebp-10h]
  double v50; // [esp+68h] [ebp-8h]

  v4 = a3[1]; /*0x7bc2c9*/
  v5 = (double)*a3; /*0x7bc2d3*/
  v43 = v5; /*0x7bc2dd*/
  v6 = (double)v4; /*0x7bc2e1*/
  v40 = *a3 + a3[2]; /*0x7bc2e5*/
  v7 = v6; /*0x7bc2e9*/
  v44 = (double)*a1; /*0x7bc2ed*/
  v42 = (double)a1[1]; /*0x7bc2f6*/
  v8 = (double)*a2; /*0x7bc2fa*/
  v50 = v8; /*0x7bc2fc*/
  v45 = (double)a2[1]; /*0x7bc303*/
  v48 = (v8 - v44) / (v45 - v42); /*0x7bc31b*/
  v49 = (v45 - v42) / (v8 - v44); /*0x7bc321*/
  v46 = (double)v40; /*0x7bc32b*/
  if ( v44 < v46 ) /*0x7bc338*/
    v9 = v44 < v5; /*0x7bc34c*/
  else
    v9 = 2; /*0x7bc33c*/
  result = v4 + a3[3]; /*0x7bc354*/
  v39 = result; /*0x7bc356*/
  v47 = (double)result; /*0x7bc35e*/
  if ( v42 < v47 ) /*0x7bc36f*/
  {
    if ( v42 < v6 ) /*0x7bc381*/
      v9 |= 8u; /*0x7bc383*/
  }
  else
  {
    v9 |= 4u; /*0x7bc371*/
  }
  if ( v8 < v46 ) /*0x7bc391*/
    v11 = v8 < v5; /*0x7bc3a5*/
  else
    v11 = 2; /*0x7bc395*/
  v13 = v45 < v47; /*0x7bc3ae*/
  v14 = 0; /*0x7bc3ae*/
  v15 = v45 == v47; /*0x7bc3ae*/
  BYTE1(result) = v12; /*0x7bc3b2*/
  if ( v45 < v47 ) /*0x7bc3b7*/
  {
    v17 = v45 < v6; /*0x7bc3c2*/
    v18 = 0; /*0x7bc3c2*/
    v19 = v45 == v6; /*0x7bc3c2*/
    BYTE1(result) = v16; /*0x7bc3c4*/
    if ( v45 < v6 ) /*0x7bc3c9*/
      goto LABEL_14; /*0x7bc3c9*/
  }
  else
  {
    v11 |= 4u; /*0x7bc3b9*/
  }
  while ( 1 ) /*0x7bc3ce*/
  {
    if ( !v9 && !v11 ) /*0x7bc3d4*/
    {
      LOWORD(v36) = Math::RoundToInt(v44); /*0x7bc533*/
      *a1 = v36; /*0x7bc540*/
      LOWORD(v37) = Math::RoundToInt(v42); /*0x7bc542*/
      a1[1] = v37; /*0x7bc54b*/
      LOWORD(v38) = Math::RoundToInt(v50); /*0x7bc54e*/
      *a2 = v38; /*0x7bc557*/
      LOWORD(result) = Math::RoundToInt(v45); /*0x7bc559*/
      a2[1] = result; /*0x7bc55e*/
      LOBYTE(result) = 1; /*0x7bc561*/
      return result; /*0x7bc569*/
    }
    if ( (v11 & v9) != 0 ) /*0x7bc3dc*/
      break; /*0x7bc3dc*/
    result = v9; /*0x7bc3e4*/
    if ( !v9 ) /*0x7bc3e6*/
      result = v11; /*0x7bc3e8*/
    if ( (result & 8) != 0 ) /*0x7bc3ec*/
    {
      v43 = (v6 - v42) * v48 + v44; /*0x7bc3fe*/
      v7 = v6; /*0x7bc402*/
    }
    else
    {
      if ( (result & 4) != 0 ) /*0x7bc408*/
      {
        v7 = (double)(v39 - 1); /*0x7bc415*/
        v20 = (v7 - v42) * v48 + v44; /*0x7bc423*/
LABEL_28:
        v43 = v20; /*0x7bc474*/
        goto LABEL_29; /*0x7bc474*/
      }
      if ( (result & 2) != 0 ) /*0x7bc42b*/
      {
        v21 = (double)(v40 - 1); /*0x7bc448*/
        v43 = v21; /*0x7bc44c*/
        v7 = (v21 - v44) * v49 + v42; /*0x7bc458*/
      }
      else if ( (result & 1) != 0 ) /*0x7bc460*/
      {
        v7 = (v5 - v44) * v49 + v42; /*0x7bc46e*/
        v20 = v5; /*0x7bc472*/
        goto LABEL_28; /*0x7bc472*/
      }
    }
LABEL_29:
    if ( result == v9 ) /*0x7bc47e*/
    {
      v44 = v43; /*0x7bc480*/
      v42 = v7; /*0x7bc488*/
      if ( v43 < v46 ) /*0x7bc495*/
        v9 = v43 < v5; /*0x7bc4a9*/
      else
        v9 = 2; /*0x7bc499*/
      v23 = v7 < v47; /*0x7bc4ae*/
      v24 = 0; /*0x7bc4ae*/
      v25 = v7 == v47; /*0x7bc4ae*/
      BYTE1(result) = v22; /*0x7bc4b2*/
      if ( v7 < v47 ) /*0x7bc4b7*/
      {
        v26 = v7 < v6; /*0x7bc4c1*/
        v27 = 0; /*0x7bc4c1*/
        v28 = v7 == v6; /*0x7bc4c1*/
        BYTE1(result) = v22; /*0x7bc4c3*/
        if ( v7 < v6 ) /*0x7bc4c8*/
          v9 |= 8u; /*0x7bc4ce*/
      }
      else
      {
        v9 |= 4u; /*0x7bc4b9*/
      }
    }
    else
    {
      v50 = v43; /*0x7bc4d6*/
      v45 = v7; /*0x7bc4de*/
      if ( v43 < v46 ) /*0x7bc4eb*/
        v11 = v43 < v5; /*0x7bc4ff*/
      else
        v11 = 2; /*0x7bc4ef*/
      v30 = v7 < v47; /*0x7bc504*/
      v31 = 0; /*0x7bc504*/
      v32 = v7 == v47; /*0x7bc504*/
      BYTE1(result) = v29; /*0x7bc508*/
      if ( v7 < v47 ) /*0x7bc50d*/
      {
        v33 = v7 < v6; /*0x7bc517*/
        v34 = 0; /*0x7bc517*/
        v35 = v7 == v6; /*0x7bc517*/
        BYTE1(result) = v29; /*0x7bc519*/
        if ( v7 < v6 ) /*0x7bc51e*/
LABEL_14:
          v11 |= 8u; /*0x7bc3cb*/
      }
      else
      {
        v11 |= 4u; /*0x7bc50f*/
      }
    }
  }
  LOBYTE(result) = 0; /*0x7bc574*/
  return result; /*0x7bc563*/
}



// ==== 0x007BC580  ObjectClass::method_7BC580  this=ObjectClass  sig=csp ====
int __thiscall sub_7BC580(ObjectClass *this, double a2, double a3)
{
  int v3; // edx
  void *ptr_4; // [esp+8h] [ebp-4h]

  if ( (double)((unsigned int)this->AbstractClass + (unsigned int)this->?) > a2 ) /*0x7bc5a3*/
    v3 = (double)(int)this->AbstractClass > a2; /*0x7bc5bb*/
  else
    v3 = 2; /*0x7bc5a5*/
  ptr_4 = this->?; /*0x7bc5c8*/
  if ( (double)(int)((int)ptr_4 + (unsigned int)this->?) <= a3 ) /*0x7bc5dd*/
    return v3 | 4; /*0x7bc5e2*/
  if ( (double)(int)ptr_4 > a3 ) /*0x7bc5f7*/
    return v3 | 8; /*0x7bc5f9*/
  return v3; /*0x7bc5e4*/
}



// ==== 0x007BC610  _BlitTrans_E::method_7BC610  this=BlitTrans  sig=csp ====
void __stdcall sub_7BC610(_BlitTrans_E *this, char *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  char *v9; // edi
  int v10; // ecx
  char v11; // al

  v9 = (char *)this - 1; /*0x7bc623*/
  v10 = a3 + 1; /*0x7bc624*/
  while ( --v10 ) /*0x7bc625*/
  {
    v11 = *a2; /*0x7bc628*/
    ++v9; /*0x7bc62a*/
    ++a2; /*0x7bc62b*/
    if ( v11 ) /*0x7bc62e*/
      *v9 = v11; /*0x7bc630*/
  }
}



// ==== 0x007BC640  _BlitPlain_E::??_Gfacet_locale_std__UAEPAXI_Z_148  this=BlitPlain  sig=csp ====
_DWORD *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_148(_DWORD *Block, char a2)
{
  *Block = &Blitter::`vftable'; /*0x7bc649*/
  if ( (a2 & 1) != 0 ) /*0x7bc64f*/
    __3_YAXPAX_Z(Block); /*0x7bc652*/
  return Block; /*0x7bc65c*/
}



// ==== 0x007BC660  _BlitPlain_G::??_Gfacet_locale_std__UAEPAXI_Z_149  this=BlitPlain  sig=csp ====
_DWORD *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_149(_DWORD *Block, char a2)
{
  *Block = &Blitter::`vftable'; /*0x7bc669*/
  if ( (a2 & 1) != 0 ) /*0x7bc66f*/
    __3_YAXPAX_Z(Block); /*0x7bc672*/
  return Block; /*0x7bc67c*/
}



// ==== 0x007BC680  _BlitTrans_E::??_Gfacet_locale_std__UAEPAXI_Z_150  this=BlitTrans  sig=csp ====
_DWORD *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_150(_DWORD *Block, char a2)
{
  *Block = &Blitter::`vftable'; /*0x7bc689*/
  if ( (a2 & 1) != 0 ) /*0x7bc68f*/
    __3_YAXPAX_Z(Block); /*0x7bc692*/
  return Block; /*0x7bc69c*/
}



// ==== 0x007BC6A0  _BlitTrans_G::??_Gfacet_locale_std__UAEPAXI_Z_151  this=BlitTrans  sig=csp ====
_DWORD *__thiscall ___Gfacet_locale_std__UAEPAXI_Z_151(_DWORD *Block, char a2)
{
  *Block = &Blitter::`vftable'; /*0x7bc6a9*/
  if ( (a2 & 1) != 0 ) /*0x7bc6af*/
    __3_YAXPAX_Z(Block); /*0x7bc6b2*/
  return Block; /*0x7bc6bc*/
}



// ==== 0x007BC6C0  _BlitTrans_E::method_7BC6C0  this=BlitTrans  sig=csp ====
int __thiscall sub_7BC6C0(_BlitTrans_E *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(_BlitTrans_E *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 4))( /*0x7bc6ea*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}



// ==== 0x007BC6F0  _BlitTrans_E::method_7BC6F0  this=BlitTrans  sig=csp ====
int __thiscall sub_7BC6F0(_BlitTrans_E *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return (*(int (__thiscall **)(_BlitTrans_E *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 4))( /*0x7bc71a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}



// ==== 0x007BC720  _BlitTrans_E::method_7BC720  this=BlitTrans  sig=csp ====
int __thiscall sub_7BC720(_BlitTrans_E *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*(int (__thiscall **)(_BlitTrans_E *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 4))( /*0x7bc74a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}



// ==== 0x007BC750  _BlitPlain_E::method_7BC750  this=BlitPlain  sig=csp ====
unsigned int __thiscall sub_7BC750(
        _BlitPlain_E *this,
        const void *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  qmemcpy((void *)a2, (const void *)a3, a4); /*0x7bc763*/
  return a4; /*0x7bc76c*/
}



// ==== 0x007BC780  _BlitPlain_E::method_7BC780  this=BlitPlain  sig=csp ====
void *__thiscall sub_7BC780(_BlitPlain_E *this, void *Src, size_t Size, int Sizea, int a5, int a6, int a7)
{
  return memcpy(Src, (const void *)Size, Sizea); /*0x7bc797*/
}



// ==== 0x007BC7A0  _BlitPlain_E::method_7BC7A0  this=BlitPlain  sig=csp ====
unsigned int __thiscall sub_7BC7A0(
        _BlitPlain_E *this,
        const void *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  qmemcpy((void *)a2, (const void *)a3, a4); /*0x7bc7b3*/
  return a4; /*0x7bc7bc*/
}



// ==== 0x007BC7D0  _BlitPlain_E::method_7BC7D0  this=BlitPlain  sig=csp ====
void *__thiscall sub_7BC7D0(_BlitPlain_E *this, void *Src, size_t Size, int Sizea, int a5, int a6, int a7, int a8)
{
  return memcpy(Src, (const void *)Size, Sizea); /*0x7bc7e7*/
}



// ==== 0x007BC7F0  _BlitPlain_G::method_7BC7F0  this=BlitPlain  sig=csp ====
int __thiscall sub_7BC7F0(_BlitPlain_G *this, const void *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  qmemcpy((void *)a2, (const void *)a3, 2 * a4); /*0x7bc806*/
  return a4; /*0x7bc80f*/
}



// ==== 0x007BC820  _BlitPlain_G::method_7BC820  this=BlitPlain  sig=csp ====
void *__thiscall sub_7BC820(_BlitPlain_G *this, void *Src, int Srca, int a4, int a5, int a6, int a7)
{
  return memcpy(Src, (const void *)Srca, 2 * a4); /*0x7bc83a*/
}



// ==== 0x007BC840  _BlitPlain_G::method_7BC840  this=BlitPlain  sig=csp ====
int __thiscall sub_7BC840(_BlitPlain_G *this, const void *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  qmemcpy((void *)a2, (const void *)a3, 2 * a4); /*0x7bc856*/
  return a4; /*0x7bc85f*/
}



// ==== 0x007BC870  _BlitPlain_G::method_7BC870  this=BlitPlain  sig=csp ====
void *__thiscall sub_7BC870(_BlitPlain_G *this, void *Src, int Srca, int a4, int a5, int a6, int a7, int a8)
{
  return memcpy(Src, (const void *)Srca, 2 * a4); /*0x7bc88a*/
}



// ==== 0x007BC890  _BlitTrans_G::method_7BC890  this=BlitTrans  sig=csp ====
__int16 __stdcall sub_7BC890(_BlitTrans_G *this, __int16 *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  __int16 result; // ax
  int v11; // esi

  result = a3; /*0x7bc890*/
  if ( a3 > 0 ) /*0x7bc896*/
  {
    v11 = a3; /*0x7bc8a1*/
    do /*0x7bc8b5*/
    {
      result = *a2++; /*0x7bc8a3*/
      if ( result ) /*0x7bc8ac*/
        *(_WORD *)this->__pad_0 = result; /*0x7bc8ae*/
      this = (_BlitTrans_G *)((char *)this + 2); /*0x7bc8b1*/
      --v11; /*0x7bc8b4*/
    }
    while ( v11 ); /*0x7bc8b5*/
  }
  return result; /*0x7bc8b8*/
}



// ==== 0x007BC8C0  _BlitTrans_G::method_7BC8C0  this=BlitTrans  sig=csp ====
int __thiscall sub_7BC8C0(_BlitTrans_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(_BlitTrans_G *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 4))( /*0x7bc8ea*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}



// ==== 0x007BC8F0  _BlitTrans_G::method_7BC8F0  this=BlitTrans  sig=csp ====
int __thiscall sub_7BC8F0(_BlitTrans_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return (*(int (__thiscall **)(_BlitTrans_G *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 4))( /*0x7bc91a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}



// ==== 0x007BC920  _BlitTrans_G::method_7BC920  this=BlitTrans  sig=csp ====
int __thiscall sub_7BC920(_BlitTrans_G *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*(int (__thiscall **)(_BlitTrans_G *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 4))( /*0x7bc94a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}



// ==== 0x007BC950  sub_7BC950  this=-  sig=ida-proto ====
int sub_7BC950()
{
  dword_B78188 = 0; /*0x7bc952*/
  dword_B7818C = 0; /*0x7bc957*/
  dword_B78190 = 0; /*0x7bc95c*/
  dword_B78194 = 0; /*0x7bc961*/
  return 0; /*0x7bc966*/
}



// ==== 0x007BC970  BSurface::ConstructEx  this=BSurface  sig=csp ====
_DWORD *__thiscall BSurface::ConstructEx(BSurface *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  void *v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  void *Buffer; // ecx

  v6 = a2; /*0x7bc975*/
  v7 = a4; /*0x7bc979*/
  v8 = a5; /*0x7bc97f*/
  this->q00B = a5; /*0x7bc983*/
  *(_DWORD *)this->XSurface = v6; /*0x7bc988*/
  v9 = a3; /*0x7bc98a*/
  this->q00A = v7; /*0x7bc98e*/
  this->? = v9; /*0x7bc991*/
  this->? = v7; /*0x7bc994*/
  this->? = v8; /*0x7bc997*/
  this->Height = 2 * v7 * v8; /*0x7bc99f*/
  v10 = __2_YAPAXI_Z(0x20u); /*0x7bc9a7*/
  if ( v10 ) /*0x7bc9b0*/
  {
    v11 = this->q00A; /*0x7bc9b2*/
    v12 = this->q00B; /*0x7bc9b5*/
    *(_DWORD *)(v10 + 4) = v11; /*0x7bc9b8*/
    *(_DWORD *)(v10 + 8) = v12; /*0x7bc9c0*/
    *(_DWORD *)(v10 + 12) = 0; /*0x7bc9c8*/
    *(_DWORD *)v10 = &XSurface_Vtable; /*0x7bc9cb*/
    *(_DWORD *)(v10 + 16) = 2; /*0x7bc9d1*/
    Buffer::Init((Buffer *)(v10 + 20), 0, 2 * v12 * v11); /*0x7bc9d8*/
    *(_DWORD *)v10 = &BSurface_Vtable; /*0x7bc9dd*/
    v13 = (void *)v10; /*0x7bc9e3*/
  }
  else
  {
    v13 = 0; /*0x7bc9e7*/
  }
  v14 = this->q00A; /*0x7bc9ec*/
  a5 = this->q00B; /*0x7bc9ef*/
  this->Buffer = v13; /*0x7bc9f3*/
  a2 = 0; /*0x7bc9f6*/
  a3 = 0; /*0x7bc9fa*/
  a4 = v14; /*0x7bc9fe*/
  (*(void (__thiscall **)(void *, int *, int))(*(_DWORD *)v13 + 20))(v13, &a2, 0xFFFF); /*0x7bca0e*/
  v15 = (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this->Buffer + 92))(this->Buffer, 0, 0); /*0x7bca1c*/
  v16 = this->q00B; /*0x7bca1f*/
  *((_DWORD *)this + 6) = v15; /*0x7bca22*/
  v17 = this->q00A * v16; /*0x7bca25*/
  this->BytesPerPixel = 0; /*0x7bca29*/
  *((_DWORD *)this + 9) = 0x8000; /*0x7bca2c*/
  v18 = v15 + 2 * v17; /*0x7bca33*/
  Buffer = this->Buffer; /*0x7bca36*/
  *((_DWORD *)this + 7) = v18; /*0x7bca39*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)Buffer + 96))(Buffer); /*0x7bca3e*/
  return this->XSurface; /*0x7bca43*/
}



// ==== 0x007BCA50  ObjectClass::method_7BCA50  this=ObjectClass  sig=csp ====
int __thiscall sub_7BCA50(ObjectClass *this, int a2, int a3, int a4, int a5, int a6)
{
  _WORD *v8; // edi
  __int16 *v9; // esi
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  __int16 v14; // dx
  int v16; // [esp+14h] [ebp+4h]

  v8 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 92))(a2, a3, a4); /*0x7bca72*/
  v9 = (__int16 *)(this->? + this->?); /*0x7bca79*/
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x7bca7b*/
  v11 = a5; /*0x7bca81*/
  v12 = v10 / 2 - a5; /*0x7bca87*/
  if ( v8 && a6 > 0 ) /*0x7bca93*/
  {
    v16 = a6; /*0x7bca95*/
    do /*0x7bcac8*/
    {
      if ( v11 > 0 ) /*0x7bca9b*/
      {
        v13 = v11; /*0x7bca9d*/
        do /*0x7bcab6*/
        {
          v14 = *v9++; /*0x7bca9f*/
          *v8++ = v14; /*0x7bcaa5*/
          if ( (unsigned int)v9 >= this->? ) /*0x7bcab0*/
            v9 = (__int16 *)((char *)v9 - (unsigned int)this->?); /*0x7bcab2*/
          --v13; /*0x7bcab5*/
        }
        while ( v13 ); /*0x7bcab6*/
        v11 = a5; /*0x7bcab8*/
      }
      v8 += v12; /*0x7bcac0*/
      --v16; /*0x7bcac4*/
    }
    while ( v16 ); /*0x7bcac8*/
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x7bcad2*/
}



// ==== 0x007BCAE0  Stream::GetField  this=Stream  sig=csp ====
int __thiscall Stream::GetField(Stream *this)
{
  int (__thiscall ***v1)(_DWORD, int); // ecx
  int result; // eax

  v1 = (int (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 5); /*0x7bcae0*/
  if ( v1 ) /*0x7bcae5*/
    return (**v1)(v1, 1); /*0x7bcaeb*/
  return result; /*0x7bcaed*/
}



// ==== 0x007BCAF0  sub_7BCAF0  this=-  sig=csp ====
char *__stdcall sub_7BCAF0(char *a1, int a2, unsigned __int16 a3)
{
  char *v3; // edx
  int v4; // ebx
  char *result; // eax
  unsigned int v6; // esi

  v3 = a1; /*0x7bcaf0*/
  v4 = a2; /*0x7bcaf5*/
  if ( ((unsigned __int8)a1 & 2) != 0 && a2 ) /*0x7bcb06*/
  {
    *(_WORD *)a1 = a3; /*0x7bcb08*/
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
      *(_WORD *)result = a3; /*0x7bcb3d*/
  }
  return result; /*0x7bcb40*/
}



// ==== 0x007BCB50  Buffer::FillCircularBufferScroll2  this=Buffer  sig=csp ====
char *__thiscall Buffer::FillCircularBufferScroll2(Buffer *this, int a2, int a3, unsigned __int16 a4)
{
  signed int v5; // ebx
  char *result; // eax
  int v8; // edi
  unsigned int Buffer_field_18; // edx
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // edi
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int Buffer_field_10; // ecx
  int v25; // ebx
  int v26; // edx
  int v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // edx
  unsigned int v30; // ebx
  char *v31; // edx
  int v32; // eax
  unsigned __int16 *v33; // ecx
  unsigned int v34; // ebx
  int v35; // ecx
  __int64 v36; // rax
  int v37; // edx
  int v38; // ebx
  signed int v39; // eax
  unsigned __int16 *v40; // ebx
  int v41; // edx
  unsigned int v42; // esi
  bool v43; // zf
  int v44; // eax
  __int64 v45; // rax
  unsigned __int16 *v46; // edx
  int v47; // ebx
  unsigned __int16 *v48; // eax
  unsigned int v49; // esi
  int v50; // ecx
  int Buffer_field_14; // ecx
  int v52; // [esp+10h] [ebp-14h]
  int v53; // [esp+14h] [ebp-10h] BYREF
  int v54; // [esp+18h] [ebp-Ch]
  int v55; // [esp+1Ch] [ebp-8h]
  int v56; // [esp+20h] [ebp-4h]
  int v57; // [esp+2Ch] [ebp+8h]
  int v58; // [esp+30h] [ebp+Ch]

  v5 = *((_DWORD *)this + 10); /*0x7bcb60*/
  v52 = this->Buffer_field_10 / 2 % v5; /*0x7bcb72*/
  if ( (int)abs32(a2) > v5 || (result = (char *)abs32(a3), (int)result > *((_DWORD *)this + 11)) ) /*0x7bcb8e*/
  {
    v50 = *((_DWORD *)this + 11); /*0x7bcf06*/
    v53 = 0; /*0x7bcf0b*/
    v54 = 0; /*0x7bcf0f*/
    v56 = v50; /*0x7bcf17*/
    Buffer_field_14 = this->Buffer_field_14; /*0x7bcf1b*/
    v55 = v5; /*0x7bcf24*/
    result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)Buffer_field_14 + 20))( /*0x7bcf2f*/
                       Buffer_field_14,
                       &v53,
                       a4);
    this->Buffer_field_24 = 0x8000; /*0x7bcf32*/
    return result; /*0x7bcf32*/
  }
  v8 = a2 + this->Buffer_field_10 / 2 % v5; /*0x7bcb98*/
  if ( a2 ) /*0x7bcb9c*/
  {
    Buffer_field_18 = this->Buffer_field_18; /*0x7bcba5*/
    v10 = this->Buffer_field_10 + 2 * a2; /*0x7bcba8*/
    this->Buffer_field_10 = v10; /*0x7bcbab*/
    v11 = Buffer_field_18 + v10; /*0x7bcbae*/
    if ( v11 < Buffer_field_18 ) /*0x7bcbb2*/
      v11 += this->Buffer_field_20; /*0x7bcbb4*/
    if ( v11 >= this->Buffer_field_1C ) /*0x7bcbba*/
      v11 -= this->Buffer_field_20; /*0x7bcbbc*/
    this->Buffer_field_10 = v11 - this->Buffer_field_18; /*0x7bcbc4*/
    if ( a2 >= 0 ) /*0x7bcbc7*/
    {
      v53 = v52; /*0x7bcc6e*/
      if ( v8 < v5 ) /*0x7bcc64*/
      {
        v54 = 0; /*0x7bcccf*/
        v23 = *((_DWORD *)this + 11); /*0x7bccd3*/
        v55 = a2; /*0x7bccd6*/
        v22 = this->Buffer_field_14; /*0x7bccda*/
        v56 = v23; /*0x7bcce3*/
      }
      else
      {
        v18 = *((_DWORD *)this + 11); /*0x7bcc72*/
        v55 = v5 - v52; /*0x7bcc75*/
        v54 = 0; /*0x7bcc79*/
        v19 = this->Buffer_field_14; /*0x7bcc7d*/
        v56 = v18; /*0x7bcc82*/
        (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v19 + 20))(v19, &v53, a4); /*0x7bcc94*/
        v20 = v8 - *((_DWORD *)this + 10); /*0x7bcc9e*/
        v21 = *((_DWORD *)this + 11); /*0x7bcca0*/
        v54 = 0; /*0x7bcca3*/
        v22 = this->Buffer_field_14; /*0x7bcca7*/
        v53 = 0; /*0x7bccaa*/
        v55 = v20; /*0x7bccae*/
        v56 = v21; /*0x7bccb2*/
      }
      result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v22 + 20))(v22, &v53, a4); /*0x7bccbe*/
    }
    else if ( v8 >= 0 ) /*0x7bcbcf*/
    {
      v53 = v8; /*0x7bcc33*/
      v54 = 0; /*0x7bcc37*/
      v56 = *((_DWORD *)this + 11); /*0x7bcc3e*/
      v55 = -a2; /*0x7bcc46*/
      result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)this->Buffer_field_14 + 20))( /*0x7bcc5a*/
                         this->Buffer_field_14,
                         &v53,
                         a4);
    }
    else
    {
      v53 = 0; /*0x7bcbd5*/
      v55 = v52; /*0x7bcbdd*/
      v12 = *((_DWORD *)this + 11); /*0x7bcbe1*/
      v54 = 0; /*0x7bcbe4*/
      v13 = this->Buffer_field_14; /*0x7bcbe8*/
      v56 = v12; /*0x7bcbed*/
      (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v13 + 20))(v13, &v53, a4); /*0x7bcbff*/
      v14 = *((_DWORD *)this + 10); /*0x7bcc02*/
      v15 = *((_DWORD *)this + 11); /*0x7bcc05*/
      v16 = v14 + v8; /*0x7bcc08*/
      v54 = 0; /*0x7bcc0e*/
      v17 = this->Buffer_field_14; /*0x7bcc12*/
      v55 = v14 - v16; /*0x7bcc15*/
      v53 = v16; /*0x7bcc19*/
      v56 = v15; /*0x7bcc1d*/
      result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v17 + 20))(v17, &v53, a4); /*0x7bcc29*/
    }
  }
  if ( a3 ) /*0x7bccf8*/
  {
    Buffer_field_10 = this->Buffer_field_10; /*0x7bccfe*/
    v25 = *((_DWORD *)this + 10); /*0x7bcd01*/
    this->Buffer_field_24 -= a3; /*0x7bcd16*/
    v26 = Buffer_field_10 + 2 * a3 * v25; /*0x7bcd19*/
    this->Buffer_field_10 = v26; /*0x7bcd1c*/
    v27 = a3 + Buffer_field_10 / 2 / v25; /*0x7bcd1f*/
    v28 = this->Buffer_field_18; /*0x7bcd21*/
    v29 = v28 + v26; /*0x7bcd24*/
    v58 = v27; /*0x7bcd26*/
    if ( v29 < v28 ) /*0x7bcd2c*/
      v29 += this->Buffer_field_20; /*0x7bcd2e*/
    if ( v29 >= this->Buffer_field_1C ) /*0x7bcd34*/
      v29 -= this->Buffer_field_20; /*0x7bcd36*/
    v30 = v29 - v28; /*0x7bcd3f*/
    this->Buffer_field_10 = v29 - v28; /*0x7bcd43*/
    if ( a3 >= 0 ) /*0x7bcd46*/
    {
      v44 = *((_DWORD *)this + 11); /*0x7bce1d*/
      if ( v58 >= v44 ) /*0x7bce26*/
      {
        v45 = 2 * *((_DWORD *)this + 10) * v44 - Buffer_field_10; /*0x7bce34*/
        LODWORD(v45) = v45 - HIDWORD(v45); /*0x7bce35*/
        v46 = (unsigned __int16 *)(v28 + Buffer_field_10); /*0x7bce37*/
        v47 = (int)v45 >> 1; /*0x7bce3c*/
        if ( (((_BYTE)v28 + (_BYTE)Buffer_field_10) & 2) != 0 && v47 ) /*0x7bce45*/
        {
          *v46++ = a4; /*0x7bce47*/
          --v47; /*0x7bce4d*/
        }
        v48 = 0; /*0x7bce50*/
        if ( v47 >> 1 ) /*0x7bce55*/
        {
          memset32(v46, 65537 * a4, v47 >> 1); /*0x7bce70*/
          v48 = &v46[2 * (v47 >> 1)]; /*0x7bce76*/
        }
        if ( (v47 & 1) != 0 && v48 ) /*0x7bce80*/
          *v48 = a4; /*0x7bce82*/
        v37 = this->Buffer_field_18; /*0x7bce8b*/
        v38 = this->Buffer_field_10 / 2; /*0x7bce90*/
        if ( (v37 & 2) != 0 && v38 ) /*0x7bce99*/
        {
          *(_WORD *)v37 = a4; /*0x7bce9b*/
          v37 += 2; /*0x7bce9e*/
          --v38; /*0x7bcea1*/
        }
        result = 0; /*0x7bcea4*/
        v49 = v38 >> 1; /*0x7bcea9*/
        if ( !(v38 >> 1) ) /*0x7bceab*/
          goto LABEL_54; /*0x7bceab*/
LABEL_53:
        memset32((void *)v37, 65537 * a4, v49); /*0x7bcec0*/
        result = (char *)(v37 + 4 * v49); /*0x7bcec2*/
LABEL_54:
        v43 = (v38 & 1) == 0; /*0x7bcec5*/
LABEL_55:
        if ( !v43 ) /*0x7bcec8*/
        {
          if ( result ) /*0x7bcecc*/
            *(_WORD *)result = a4; /*0x7bcecf*/
        }
        return result; /*0x7bced8*/
      }
      v37 = v28 + Buffer_field_10; /*0x7bcee2*/
      v38 = (int)(v30 - Buffer_field_10) / 2; /*0x7bcee7*/
      if ( (((_BYTE)v28 + (_BYTE)Buffer_field_10) & 2) != 0 && v38 ) /*0x7bcef0*/
        goto LABEL_60; /*0x7bcef0*/
    }
    else
    {
      if ( v27 >= 0 ) /*0x7bcd50*/
      {
        v39 = Buffer_field_10 - v30; /*0x7bcdd7*/
        v40 = (unsigned __int16 *)v29; /*0x7bcdd9*/
        v41 = v39 / 2; /*0x7bcde0*/
        if ( ((unsigned __int8)v40 & 2) != 0 && v41 ) /*0x7bcde9*/
        {
          *v40++ = a4; /*0x7bcdeb*/
          --v41; /*0x7bcdf1*/
        }
        result = 0; /*0x7bcdf4*/
        v42 = v41 >> 1; /*0x7bcdf9*/
        if ( v41 >> 1 ) /*0x7bcdf9*/
        {
          memset32(v40, 65537 * a4, v42); /*0x7bce10*/
          result = (char *)&v40[2 * v42]; /*0x7bce12*/
        }
        v43 = (v41 & 1) == 0; /*0x7bce15*/
        goto LABEL_55; /*0x7bce18*/
      }
      v31 = (char *)v28; /*0x7bcd59*/
      v32 = Buffer_field_10 / 2; /*0x7bcd5b*/
      v57 = Buffer_field_10 / 2; /*0x7bcd60*/
      if ( (v28 & 2) != 0 && v32 ) /*0x7bcd68*/
      {
        *(_WORD *)v28 = a4; /*0x7bcd6a*/
        v31 = (char *)(v28 + 2); /*0x7bcd6d*/
        LOBYTE(v57) = --v32; /*0x7bcd71*/
      }
      v33 = 0; /*0x7bcd77*/
      v34 = v32 >> 1; /*0x7bcd7c*/
      if ( v32 >> 1 ) /*0x7bcd7c*/
      {
        memset32(v31, 65537 * a4, v34); /*0x7bcd93*/
        LOBYTE(v32) = v57; /*0x7bcd95*/
        v33 = (unsigned __int16 *)&v31[4 * v34]; /*0x7bcd99*/
      }
      if ( (v32 & 1) != 0 && v33 ) /*0x7bcda2*/
        *v33 = a4; /*0x7bcda4*/
      v35 = this->Buffer_field_10; /*0x7bcdaa*/
      v36 = 2 * *((_DWORD *)this + 10) * *((_DWORD *)this + 11) - v35; /*0x7bcdb5*/
      LODWORD(v36) = v36 - HIDWORD(v36); /*0x7bcdb6*/
      v37 = v35 + this->Buffer_field_18; /*0x7bcdbd*/
      v38 = (int)v36 >> 1; /*0x7bcdbf*/
      if ( (v37 & 2) != 0 && v38 ) /*0x7bcdcc*/
      {
LABEL_60:
        *(_WORD *)v37 = a4; /*0x7bcef2*/
        v37 += 2; /*0x7bcef5*/
        --v38; /*0x7bcef8*/
      }
    }
    result = 0; /*0x7bcef9*/
    v49 = v38 >> 1; /*0x7bcf00*/
    if ( !(v38 >> 1) ) /*0x7bcf02*/
      goto LABEL_54; /*0x7bcf02*/
    goto LABEL_53; /*0x7bcf02*/
  }
  return result; /*0x7bcece*/
}



// ==== 0x007BCF50  MapClass::isCellShrouded  this=MapClass  sig=csp ====
int __thiscall MapClass::isCellShrouded(MapClass *this, unsigned __int16 a2)
{
  void *MapClass_field_0x28; // eax
  void *MapClass_field_0x14; // ecx
  _DWORD v5[4]; // [esp+0h] [ebp-10h] BYREF

  v5[3] = this->MapClass_field_0x2C; /*0x7bcf58*/
  v5[0] = 0; /*0x7bcf60*/
  v5[1] = 0; /*0x7bcf64*/
  MapClass_field_0x28 = this->MapClass_field_0x28; /*0x7bcf68*/
  MapClass_field_0x14 = this->MapClass_field_0x14; /*0x7bcf6b*/
  v5[2] = MapClass_field_0x28; /*0x7bcf74*/
  return (*(int (__thiscall **)(void *, _DWORD *, _DWORD))(*(_DWORD *)MapClass_field_0x14 + 20))( /*0x7bcf83*/
           MapClass_field_0x14,
           v5,
           a2);
}



// ==== 0x007BCFB0  TacticalMap::FillScanlinesOpaque  this=TacticalMap  sig=csp ====
unsigned int __thiscall TacticalMap::FillScanlinesOpaque(TacticalMap *this, int a2, int a3, int a4, int a5)
{
  TacticalMap *v5; // edi
  int v6; // esi
  unsigned int result; // eax
  unsigned int v8; // edx
  int v9; // ecx
  char *v10; // ebp
  unsigned int v11; // eax
  char *v12; // edi
  int v13; // esi
  int v14; // eax
  float m_TintFactor; // ebx
  _WORD *v16; // ecx
  int v17; // esi
  int v18; // ebx
  char *v19; // ebp
  char *v20; // eax
  int v21; // esi
  int v23; // [esp+Ch] [ebp-Ch]
  float v24; // [esp+Ch] [ebp-Ch]
  char v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]

  v5 = this; /*0x7bcfbd*/
  v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)this->TacticalMap_field_14 + 92))( /*0x7bcfd0*/
         this->TacticalMap_field_14,
         a2,
         a3);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5->TacticalMap_field_14 + 96))(v5->TacticalMap_field_14); /*0x7bcfd4*/
  result = v5->TacticalMap_field_1C; /*0x7bcfda*/
  v8 = v6 + v5->TacticalMap_field_10; /*0x7bcfdd*/
  if ( v8 >= result ) /*0x7bcfe1*/
    v8 -= v5->TacticalMap_field_20; /*0x7bcfe3*/
  if ( a5 > 0 ) /*0x7bcfec*/
  {
    v26 = a5; /*0x7bcff4*/
    do /*0x7bd0cf*/
    {
      v9 = a4; /*0x7bcff8*/
      if ( v8 + 2 * a4 < result ) /*0x7bd001*/
      {
        v18 = a4; /*0x7bd0e2*/
        v19 = (char *)v8; /*0x7bd0e4*/
        if ( (v8 & 2) != 0 && a4 ) /*0x7bd0ea*/
        {
          *(_WORD *)v8 = -1; /*0x7bd0ec*/
          v19 = (char *)(v8 + 2); /*0x7bd0f1*/
          v18 = a4 - 1; /*0x7bd0f4*/
        }
        v20 = 0; /*0x7bd0f9*/
        v21 = v18 >> 1; /*0x7bd0fe*/
        if ( v18 >> 1 ) /*0x7bd0fe*/
        {
          memset(v19, 0xFFu, 4 * v21); /*0x7bd109*/
          v5 = this; /*0x7bd10b*/
          v20 = &v19[4 * v21]; /*0x7bd10f*/
        }
        if ( (v18 & 1) != 0 && v20 ) /*0x7bd11a*/
          *(_WORD *)v20 = -1; /*0x7bd11c*/
      }
      else
      {
        v10 = (char *)v8; /*0x7bd009*/
        v11 = (result - v8) >> 1; /*0x7bd00b*/
        v23 = v11; /*0x7bd012*/
        if ( (v8 & 2) != 0 && v11 ) /*0x7bd01a*/
        {
          *(_WORD *)v8 = -1; /*0x7bd01f*/
          v10 = (char *)(v8 + 2); /*0x7bd024*/
          v23 = v11 - 1; /*0x7bd027*/
        }
        v12 = 0; /*0x7bd02f*/
        v13 = v23 >> 1; /*0x7bd034*/
        if ( v23 >> 1 ) /*0x7bd034*/
        {
          memset(v10, 0xFFu, 4 * v13); /*0x7bd03f*/
          v9 = a4; /*0x7bd041*/
          v12 = &v10[4 * v13]; /*0x7bd045*/
        }
        if ( (v23 & 1) != 0 && v12 ) /*0x7bd052*/
          *(_WORD *)v12 = -1; /*0x7bd054*/
        v14 = v9 - v11; /*0x7bd05f*/
        m_TintFactor = this->m_TintFactor; /*0x7bd061*/
        v25 = v14; /*0x7bd064*/
        v24 = m_TintFactor; /*0x7bd06b*/
        if ( (LOBYTE(m_TintFactor) & 2) != 0 && v14 ) /*0x7bd073*/
        {
          *(_WORD *)LODWORD(m_TintFactor) = -1; /*0x7bd075*/
          LODWORD(m_TintFactor) += 2; /*0x7bd07a*/
          --v14; /*0x7bd07d*/
          v24 = m_TintFactor; /*0x7bd07e*/
          v25 = v14; /*0x7bd082*/
        }
        v16 = 0; /*0x7bd088*/
        v17 = v14 >> 1; /*0x7bd08d*/
        if ( v14 >> 1 ) /*0x7bd08d*/
        {
          memset((void *)LODWORD(m_TintFactor), 0xFFu, 4 * v17); /*0x7bd098*/
          v16 = (_WORD *)(LODWORD(v24) + 4 * v17); /*0x7bd09e*/
          LOBYTE(v14) = v25; /*0x7bd0a1*/
        }
        if ( (v14 & 1) != 0 && v16 ) /*0x7bd0ab*/
          *v16 = -1; /*0x7bd0ad*/
        v5 = this; /*0x7bd0b2*/
      }
      result = v5->TacticalMap_field_1C; /*0x7bd0b9*/
      v8 += 2 * v5[1].TacticalMap_field_04; /*0x7bd0bc*/
      if ( v8 >= result ) /*0x7bd0c1*/
        v8 -= v5->TacticalMap_field_20; /*0x7bd0c3*/
      --v26; /*0x7bd0cb*/
    }
    while ( v26 ); /*0x7bd0cf*/
  }
  return result; /*0x7bd0d7*/
}



// ==== 0x007BD130  Audio::GetSamplePosition  this=BSurface  sig=csp ====
int __thiscall Audio::GetSamplePosition(int *this, int a2, int a3)
{
  int v4; // edi
  int result; // eax

  v4 = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)this->Buffer + 92))(this->Buffer, a2, a3); /*0x7bd149*/
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)this->Buffer + 96))(this->Buffer); /*0x7bd14d*/
  result = v4 + this->Width; /*0x7bd156*/
  if ( result >= (unsigned int)*(this + 7) ) /*0x7bd15a*/
    result -= this->Height; /*0x7bd15c*/
  return result; /*0x7bd15f*/
}



// ==== 0x007BD170  ObjectClass::Audio_Render_7BD170  this=ObjectClass  sig=csp ====
int __thiscall Audio_Render_7BD170(UnitClass *this)
{
  int result; // eax
  char v3; // cl
  char v4; // dl
  int v5; // eax
  __int16 v6; // [esp+4h] [ebp-10h] BYREF
  char v7; // [esp+6h] [ebp-Eh]
  char v8; // [esp+7h] [ebp-Dh]
  int (__cdecl *v9)(int); // [esp+Ch] [ebp-8h]
  int (__cdecl *v10)(_DWORD *, int); // [esp+10h] [ebp-4h]

  if ( !*(_DWORD *)&this->ToolTipText[164] ) /*0x7bd176*/
    return -13; /*0x7bd180*/
  *(_DWORD *)&this->ToolTipText[184] = 0; /*0x7bd18a*/
  *(_DWORD *)&this->ToolTipText[188] = -1; /*0x7bd194*/
  *(_DWORD *)&this->ToolTipText[220] = 0; /*0x7bd19e*/
  v3 = BYTE2(this->ambientSoundController[0]); /*0x7bd1ac*/
  v4 = HIBYTE(this->ambientSoundController[0]); /*0x7bd1af*/
  v6 = this->ambientSoundController[0]; /*0x7bd1b2*/
  this->attachedBomb = 0; /*0x7bd1c1*/
  v7 = v3; /*0x7bd1c8*/
  v8 = v4; /*0x7bd1cc*/
  v9 = sub_7BD470; /*0x7bd1d0*/
  v10 = sub_7BD5C0; /*0x7bd1d8*/
  result = ((int (__cdecl *)(UnitClass *, int, __int16 *, int))this->customSound_controller[2])(this, 2, &v6, 16); /*0x7bd1e0*/
  if ( result >= -1 ) /*0x7bd1e8*/
  {
    v5 = *(_DWORD *)&this->ToolTipText[212]; /*0x7bd1ef*/
    if ( v5 >= 0 ) /*0x7bd1fa*/
      *(_DWORD *)&this->ToolTipText[212] = v5 | 0x80000000; /*0x7bd201*/
    return -1; /*0x7bd207*/
  }
  return result; /*0x7bd185*/
}



// ==== 0x007BD210  DSurface::LockAndPrepareRect  this=DSurface  sig=csp ====
int __thiscall DSurface::LockAndPrepareRect(DSurface *this)
{
  int v2; // eax
  int result; // eax

  if ( (*((_BYTE *)this + 1980) & 0x40) != 0 ) /*0x7bd21a*/
  {
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[44])(this, 7, 0, 0); /*0x7bd223*/
    v2 = *((_DWORD *)this + 495); /*0x7bd226*/
    LOBYTE(v2) = v2 & 0xBF; /*0x7bd22f*/
    *((_DWORD *)this + 495) = v2; /*0x7bd231*/
  }
  (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[44])(this, 3, 0, 0); /*0x7bd23e*/
  result = *((_DWORD *)this + 495); /*0x7bd241*/
  if ( (result & 0x80000000) == 1 ) /*0x7bd255*/
  {
    result &= ~0x80000000; /*0x7bd257*/
    *((_DWORD *)this + 495) = result; /*0x7bd25c*/
  }
  return result; /*0x7bd262*/
}



// ==== 0x007BD270  AudioStream::SetFlag4C  this=AudioStream  sig=csp ====
int __thiscall AudioStream::SetFlag4C(AudioStream *this)
{
  int result; // eax

  ((void (__cdecl *)(AudioStream *, int, _DWORD, _DWORD))this->AudioStream_field_0x58)(this, 4, 0, 0); /*0x7bd27a*/
  result = *((_DWORD *)this + 495); /*0x7bd27d*/
  LOBYTE(result) = result | 0x40; /*0x7bd286*/
  *((_DWORD *)this + 495) = result; /*0x7bd288*/
  return result; /*0x7bd28e*/
}



// ==== 0x007BD290  ObjectClass::Audio_Process_7BD290  this=ObjectClass  sig=csp ====
char __thiscall Audio_Process_7BD290(UnitClass *this)
{
  int v2; // eax

  ((void (__cdecl *)(UnitClass *, int, _DWORD, _DWORD))this->customSound_controller[2])(this, 6, 0, 0); /*0x7bd29a*/
  v2 = *(_DWORD *)&this->ToolTipText[212]; /*0x7bd29d*/
  LOBYTE(v2) = v2 & 0xBF; /*0x7bd2a6*/
  *(_DWORD *)&this->ToolTipText[212] = v2; /*0x7bd2a8*/
  return v2; /*0x7bd2ae*/
}



// ==== 0x007BD2B0  ObjectClass::Audio_Process_7BD2B0  this=ObjectClass  sig=csp ====
char __thiscall Audio_Process_7BD2B0(UnitClass *this)
{
  int v2; // eax

  ((void (__cdecl *)(UnitClass *, int, _DWORD, _DWORD))this->customSound_controller[2])(this, 7, 0, 0); /*0x7bd2ba*/
  v2 = *(_DWORD *)&this->ToolTipText[212]; /*0x7bd2bd*/
  LOBYTE(v2) = v2 & 0xBF; /*0x7bd2c6*/
  *(_DWORD *)&this->ToolTipText[212] = v2; /*0x7bd2c8*/
  return v2; /*0x7bd2ce*/
}



// ==== 0x007BD2D0  AudioStream::CalcReadPos  this=AudioStream  sig=csp ====
int __thiscall AudioStream::CalcReadPos(AudioStream *this)
{
  int v2; // ebp
  int v3; // eax
  int v4; // edi
  unsigned int v5; // ecx
  char *v6; // esi
  unsigned int v7; // ebp
  unsigned int v8; // eax
  unsigned int v9; // ecx
  int v11; // esi
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // esi
  unsigned int i; // ecx
  unsigned int v17; // [esp+10h] [ebp-Ch]

  if ( (this->__pad_5C[40] & 1) == 0 ) /*0x7bd2e1*/
    return -1; /*0x7bd2e1*/
  if ( !*((_DWORD *)this + 483) ) /*0x7bd2e7*/
    return -1; /*0x7bd2e7*/
  v2 = *((_DWORD *)this + 492); /*0x7bd2f5*/
  if ( !v2 ) /*0x7bd2fd*/
    return -1; /*0x7bd2fd*/
  v3 = *((_DWORD *)this + 491); /*0x7bd303*/
  v4 = *((_DWORD *)this + 484); /*0x7bd30f*/
  v5 = *(_DWORD *)this->__pad_9C; /*0x7bd315*/
  v6 = (char *)(v3 + *((_DWORD *)this + 490)); /*0x7bd31b*/
  v7 = v2 - v3; /*0x7bd31d*/
  v17 = *((_DWORD *)this + 484) / v5; /*0x7bd32b*/
  v8 = (v4 + v7) / v5; /*0x7bd332*/
  v9 = *((_DWORD *)this + 487); /*0x7bd334*/
  if ( v8 >= v9 ) /*0x7bd33c*/
    v8 -= v9; /*0x7bd33e*/
  if ( *(_BYTE *)(*((_DWORD *)this + 485) + v8) == 1 ) /*0x7bd34a*/
  {
    ++*(_DWORD *)&this->__pad_D8[180]; /*0x7bd355*/
    return -11; /*0x7bd365*/
  }
  if ( v17 > v8 ) /*0x7bd36a*/
  {
    v13 = (unsigned int)this->AudioStream_field_0x98 - v4; /*0x7bd3cd*/
    qmemcpy((void *)(*((_DWORD *)this + 483) + v4), v6, v13); /*0x7bd3e4*/
    qmemcpy(*((void **)this + 483), &v6[v13], v7 - v13); /*0x7bd404*/
    v14 = v17; /*0x7bd40f*/
    v15 = *((_DWORD *)this + 487); /*0x7bd413*/
    *((_DWORD *)this + 484) = v7 - v13; /*0x7bd41b*/
    *((_DWORD *)this + 492) = 0; /*0x7bd421*/
    *((_DWORD *)this + 491) = 0; /*0x7bd427*/
    if ( v17 < v15 ) /*0x7bd42d*/
    {
      do /*0x7bd443*/
      {
        ++v14; /*0x7bd435*/
        *(_BYTE *)(*((_DWORD *)this + 485) + v14 - 1) = 1; /*0x7bd436*/
      }
      while ( v14 < *((_DWORD *)this + 487) ); /*0x7bd443*/
    }
    for ( i = 0; i < v8; *(_BYTE *)(*((_DWORD *)this + 485) + i - 1) = 1 ) /*0x7bd449*/
      ++i; /*0x7bd451*/
    return -1; /*0x7bd459*/
  }
  qmemcpy((void *)(*((_DWORD *)this + 483) + v4), v6, v7); /*0x7bd37b*/
  v11 = *((_DWORD *)this + 484); /*0x7bd384*/
  *((_DWORD *)this + 492) = 0; /*0x7bd38c*/
  *((_DWORD *)this + 491) = 0; /*0x7bd392*/
  v12 = v17; /*0x7bd398*/
  *((_DWORD *)this + 484) = v7 + v11; /*0x7bd3a0*/
  if ( v17 >= v8 ) /*0x7bd3a6*/
    return -1; /*0x7bd45e*/
  do /*0x7bd3ba*/
  {
    ++v12; /*0x7bd3b2*/
    *(_BYTE *)(*((_DWORD *)this + 485) + v12 - 1) = 1; /*0x7bd3b5*/
  }
  while ( v12 < v8 ); /*0x7bd3ba*/
  return -1; /*0x7bd352*/
}



// ==== 0x007BD470  sub_7BD470  this=-  sig=ida-proto ====
int __cdecl sub_7BD470(int a1)
{
  int v1; // ebx
  int v2; // edi
  int v4; // ecx
  int v5; // esi
  int v6; // edx
  char v7; // bl
  int v8; // ecx
  int v9; // edx
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // ecx

  v1 = *(_DWORD *)(a1 + 1980); /*0x7bd476*/
  v2 = *(_DWORD *)(a1 + 156); /*0x7bd47c*/
  if ( (v1 & 0x200) != 0 ) /*0x7bd485*/
    return 0; /*0x7bd48b*/
  v4 = *(_DWORD *)(a1 + 1952); /*0x7bd492*/
  v5 = *(_DWORD *)(a1 + 1988); /*0x7bd49a*/
  if ( (*(_DWORD *)(a1 + 132) & 0x200) != 0 ) /*0x7bd4a3*/
  {
    v6 = v4 + 1; /*0x7bd4ab*/
    if ( (unsigned int)(v4 + 1) >= *(_DWORD *)(a1 + 1948) ) /*0x7bd4b0*/
      v6 = 0; /*0x7bd4b2*/
    if ( (v1 & 0x100) == 0 && !*(_BYTE *)(v6 + *(_DWORD *)(a1 + 1940)) ) /*0x7bd4bf*/
    {
      BYTE1(v1) |= 4u; /*0x7bd4c5*/
      *(_DWORD *)(a1 + 1980) = v1; /*0x7bd4c8*/
    }
  }
  v7 = 0; /*0x7bd4d4*/
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 1940) + v4) == 1 ) /*0x7bd4da*/
  {
    if ( *(_DWORD *)(a1 + 1956) == -1 ) /*0x7bd4e3*/
    {
      *(_DWORD *)(a1 + 1956) = v4; /*0x7bd4e5*/
      *(_DWORD *)(a1 + 1984) = v5; /*0x7bd4eb*/
    }
    v8 = v4 + 1; /*0x7bd4f7*/
    *(_WORD *)(*(_DWORD *)(a1 + 1944) + 2 * v8 - 2) = 0; /*0x7bd4f8*/
    v9 = v5 + v2; /*0x7bd505*/
    if ( v5 + v2 >= *(_DWORD *)(a1 + 152) ) /*0x7bd50a*/
    {
      v9 = 0; /*0x7bd50c*/
      v8 = 0; /*0x7bd50e*/
    }
    *(_DWORD *)(a1 + 1988) = v9; /*0x7bd510*/
    *(_DWORD *)(a1 + 1952) = v8; /*0x7bd516*/
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 1980); /*0x7bd51e*/
    if ( (v10 & 0x100) != 0 ) /*0x7bd527*/
    {
      v11 = *(_DWORD *)(a1 + 1936); /*0x7bd529*/
      BYTE1(v10) |= 2u; /*0x7bd52f*/
      *(_DWORD *)(a1 + 1980) = v10; /*0x7bd534*/
      if ( v5 >= v11 ) /*0x7bd53a*/
        return 0; /*0x7bd54a*/
      v2 = v11 - v5; /*0x7bd53e*/
    }
    else
    {
      LOBYTE(v10) = v10 | 0x80; /*0x7bd54b*/
      v5 -= v2; /*0x7bd54e*/
      *(_DWORD *)(a1 + 1980) = v10; /*0x7bd550*/
      v12 = v4 - 1; /*0x7bd55a*/
      v7 = 1; /*0x7bd55d*/
      ++*(_DWORD *)(a1 + 56); /*0x7bd55f*/
      if ( v5 < 0 ) /*0x7bd562*/
      {
        v5 = *(_DWORD *)(a1 + 152) - v2; /*0x7bd570*/
        v12 = *(_DWORD *)(a1 + 1948) - 1; /*0x7bd572*/
      }
      ++*(_WORD *)(*(_DWORD *)(a1 + 1944) + 2 * v12); /*0x7bd579*/
    }
  }
  if ( v2 > 0 ) /*0x7bd582*/
  {
    if ( v7 == 1 ) /*0x7bd588*/
    {
      (*(void (__cdecl **)(int, int, _DWORD, int))(a1 + 88))(a1, 5, *(_DWORD *)(a1 + 1976), v2); /*0x7bd594*/
      return v2; /*0x7bd5a0*/
    }
    (*(void (__cdecl **)(int, int, int, int))(a1 + 88))(a1, 5, v5 + *(_DWORD *)(a1 + 1932), v2); /*0x7bd5ad*/
  }
  return v2; /*0x7bd487*/
}



// ==== 0x007BD5C0  sub_7BD5C0  this=-  sig=ida-proto ====
int __cdecl sub_7BD5C0(_DWORD *a1, int a2)
{
  int v3; // ecx
  int v4; // edx
  __int16 v5; // si
  _WORD *v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // ebx

  if ( a2 != a1[483] + a1[496] && a2 != a1[494] ) /*0x7bd5e0*/
    return -19; /*0x7bd5e2*/
  v3 = a1[489]; /*0x7bd5e8*/
  if ( v3 == -1 ) /*0x7bd5f1*/
    return -20; /*0x7bd67f*/
  v4 = a1[486]; /*0x7bd5f7*/
  v5 = *(_WORD *)(v4 + 2 * v3); /*0x7bd5ff*/
  v6 = (_WORD *)(v4 + 2 * v3); /*0x7bd603*/
  if ( v5 ) /*0x7bd609*/
  {
    *v6 = v5 - 1; /*0x7bd679*/
    return -1; /*0x7bd676*/
  }
  else
  {
    v7 = v3 + 1; /*0x7bd611*/
    *(_BYTE *)(a1[485] + v7 - 1) = 0; /*0x7bd612*/
    if ( v7 >= a1[487] ) /*0x7bd61f*/
      v7 = 0; /*0x7bd621*/
    if ( *(_BYTE *)(a1[485] + v7) == 1 ) /*0x7bd62d*/
    {
      v8 = a1[39] + a1[496]; /*0x7bd63b*/
      a1[496] = v8; /*0x7bd63d*/
      if ( v8 >= a1[38] ) /*0x7bd64d*/
        a1[496] = 0; /*0x7bd64f*/
      a1[489] = v7; /*0x7bd659*/
      return -1; /*0x7bd660*/
    }
    else
    {
      a1[489] = -1; /*0x7bd665*/
      return -1; /*0x7bd670*/
    }
  }
}



// ==== 0x007BD690  Surface::CommitSurfaceBuffersAudio  this=Surface  sig=csp ====
int __thiscall Surface::CommitSurfaceBuffersAudio(BSurface *this)
{
  int v3; // eax
  char v4; // cl
  unsigned int v5; // eax
  unsigned int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  _WORD *v10; // ebp
  int v11; // ebx
  int v12; // ecx
  unsigned __int16 *v13; // edi
  int v14; // ecx
  unsigned __int16 *v15; // edi
  int v16; // edx
  int v17; // ecx
  _WORD *v18; // eax
  int v19; // ecx
  _WORD *v20; // eax
  _DWORD *v21; // ebx
  int v22; // eax
  int v23; // eax
  _DWORD *v24; // ebp
  int v25; // eax
  int v26; // ebx
  _DWORD *v27; // ebx
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  _DWORD *v32; // ebp
  int v33; // edx
  int v34; // eax
  int v35; // edi
  int v36; // edx
  __int16 v37; // ax
  int v38; // ecx
  unsigned __int8 v39; // cl
  int v40; // edx
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  unsigned int v48; // [esp-14h] [ebp-38h]
  int v49; // [esp-4h] [ebp-28h]
  int v50; // [esp-4h] [ebp-28h]
  int v51; // [esp-4h] [ebp-28h]
  int v52; // [esp+10h] [ebp-14h]
  int v53; // [esp+14h] [ebp-10h]
  int v54; // [esp+18h] [ebp-Ch]
  int v55; // [esp+1Ch] [ebp-8h]
  int v56; // [esp+1Ch] [ebp-8h]
  int v57; // [esp+1Ch] [ebp-8h]
  int v58; // [esp+20h] [ebp-4h]

  if ( !*((_DWORD *)this + 34) ) /*0x7bd699*/
    return -8; /*0x7bd6af*/
  v3 = *((unsigned __int8 *)this + 243) * *((unsigned __int8 *)this + 242) * *((unsigned __int16 *)this + 124) + 4; /*0x7bd6cf*/
  LOBYTE(v3) = v3 & 0xFC; /*0x7bd6d2*/
  *((_DWORD *)this + 477) = v3; /*0x7bd6d4*/
  v4 = *((_BYTE *)this + 264); /*0x7bd6da*/
  if ( v4 == 1 || v4 == 4 ) /*0x7bd6e8*/
    *((_DWORD *)this + 477) = 2 * v3; /*0x7bd6ec*/
  v5 = *(_DWORD *)((char *)this + 266); /*0x7bd6f2*/
  v6 = *((_DWORD *)this + 477); /*0x7bd6f8*/
  if ( v5 > v6 ) /*0x7bd700*/
    return -3; /*0x7bd70e*/
  if ( !v5 ) /*0x7bd711*/
    *(_DWORD *)((char *)this + 266) = v6; /*0x7bd713*/
  if ( *((int *)this + 35) > 0 ) /*0x7bd721*/
    goto LABEL_57; /*0x7bd721*/
  if ( *((_WORD *)this + 934) ) /*0x7bd727*/
    v7 = *((unsigned __int16 *)this + 935); /*0x7bd735*/
  else
    v7 = *((unsigned __int8 *)this + 245); /*0x7bd746*/
  if ( v7 != this->BytesPerPixel ) /*0x7bd74b*/
  {
    v8 = *((_DWORD *)this + 34); /*0x7bd75c*/
    v52 = 0; /*0x7bd762*/
    if ( v8 <= 1 ) /*0x7bd76d*/
      goto LABEL_56; /*0x7bd76d*/
    v52 = (v8 - 2) / v7 + 1; /*0x7bd77a*/
    if ( (*((_BYTE *)this + 132) & 0x20) == 0 ) /*0x7bd786*/
      goto LABEL_56; /*0x7bd786*/
    if ( !*((_WORD *)this + 906) ) /*0x7bd78c*/
    {
      v9 = (v8 - 2) / v7 + 3; /*0x7bd79c*/
      goto LABEL_55; /*0x7bd79f*/
    }
    v10 = (_WORD *)*((_DWORD *)this + 455); /*0x7bd7a4*/
    v11 = *((unsigned __int8 *)this + 245); /*0x7bd7ac*/
    v55 = *((unsigned __int16 *)this + 906); /*0x7bd7bb*/
    if ( *((_BYTE *)this + 245) ) /*0x7bd7ac*/
    {
      v12 = 0; /*0x7bd7c1*/
      v53 = 0; /*0x7bd7c5*/
      v54 = 0; /*0x7bd7c9*/
      if ( *((_WORD *)this + 906) ) /*0x7bd7b4*/
      {
        v13 = (unsigned __int16 *)*((_DWORD *)this + 455); /*0x7bd7cf*/
        while ( !(*v13 % v11) ) /*0x7bd7db*/
        {
          ++v12; /*0x7bd7e1*/
          v13 += 2; /*0x7bd7e2*/
          if ( v12 >= v55 ) /*0x7bd7e7*/
            goto LABEL_27; /*0x7bd7e7*/
        }
        v53 = 1; /*0x7bd7eb*/
      }
LABEL_27:
      v14 = 0; /*0x7bd7f3*/
      if ( *((_WORD *)this + 906) ) /*0x7bd7b4*/
      {
        v15 = v10 + 1; /*0x7bd801*/
        while ( !(*v15 % v11) ) /*0x7bd810*/
        {
          ++v14; /*0x7bd812*/
          v15 += 2; /*0x7bd813*/
          if ( v14 >= v55 ) /*0x7bd818*/
            goto LABEL_51; /*0x7bd818*/
        }
        v54 = 1; /*0x7bd81f*/
      }
LABEL_51:
      if ( !v53 ) /*0x7bd8db*/
        goto LABEL_53; /*0x7bd8db*/
    }
    else
    {
      v53 = 1; /*0x7bd837*/
      v54 = 1; /*0x7bd83b*/
      v16 = *((unsigned __int16 *)this + 934); /*0x7bd84b*/
      v58 = 0; /*0x7bd84d*/
      if ( *((_WORD *)this + 906) ) /*0x7bd7b4*/
      {
        while ( 1 ) /*0x7bd85b*/
        {
          if ( v53 ) /*0x7bd861*/
          {
            v17 = 0; /*0x7bd863*/
            if ( *((_WORD *)this + 934) ) /*0x7bd84b*/
            {
              v18 = (_WORD *)*((_DWORD *)this + 469); /*0x7bd86d*/
              while ( *v10 != *v18 ) /*0x7bd872*/
              {
                ++v17; /*0x7bd874*/
                v18 += 3; /*0x7bd875*/
                if ( v17 >= v16 ) /*0x7bd87a*/
                  goto LABEL_41; /*0x7bd87a*/
              }
              v53 = 0; /*0x7bd87e*/
            }
          }
LABEL_41:
          if ( v54 ) /*0x7bd88c*/
          {
            v19 = 0; /*0x7bd88e*/
            if ( *((_WORD *)this + 934) ) /*0x7bd84b*/
            {
              v20 = (_WORD *)*((_DWORD *)this + 469); /*0x7bd898*/
              while ( v10[1] != *v20 ) /*0x7bd89d*/
              {
                ++v19; /*0x7bd89f*/
                v20 += 3; /*0x7bd8a0*/
                if ( v19 >= v16 ) /*0x7bd8a5*/
                  goto LABEL_48; /*0x7bd8a5*/
              }
              v54 = 0; /*0x7bd8a9*/
            }
          }
LABEL_48:
          if ( !v53 && !v54 ) /*0x7bd8bf*/
            goto LABEL_56; /*0x7bd8bf*/
          v10 += 2; /*0x7bd8ca*/
          if ( ++v58 >= v55 ) /*0x7bd8d3*/
            goto LABEL_51; /*0x7bd8d3*/
        }
      }
    }
    ++v52; /*0x7bd8dd*/
LABEL_53:
    if ( !v54 ) /*0x7bd8e7*/
    {
LABEL_56:
      *((_DWORD *)this + 35) = v52 + 2; /*0x7bd8f2*/
      goto LABEL_57; /*0x7bd8f9*/
    }
    v9 = v52 + 1; /*0x7bd8ed*/
LABEL_55:
    v52 = v9; /*0x7bd8ee*/
    goto LABEL_56; /*0x7bd8ee*/
  }
  *((_DWORD *)this + 35) = 1; /*0x7bd74d*/
LABEL_57:
  v49 = *((_DWORD *)this + 477); /*0x7bd8ff*/
  *((_DWORD *)this + 85) |= 1u; /*0x7bd90f*/
  v21 = 0; /*0x7bd91b*/
  *((_DWORD *)this + 474) = (*(_DWORD *)((char *)this + 266) + 16) & 0xFFFFFFFC; /*0x7bd927*/
  v22 = (*((int (__cdecl **)(BSurface *, int, _DWORD, int))this + 17))(this, 2, 0, v49); /*0x7bd92d*/
  *((_DWORD *)this + 444) = v22; /*0x7bd935*/
  if ( !v22 ) /*0x7bd93b*/
    goto LABEL_103; /*0x7bd93b*/
  (*((void (__cdecl **)(BSurface *, int, int, _DWORD))this + 17))(this, 4, v22, *((_DWORD *)this + 477)); /*0x7bd95c*/
  *((_DWORD *)this + 12) += *((_DWORD *)this + 477); /*0x7bd96d*/
  v56 = 0; /*0x7bd978*/
  if ( *((int *)this + 35) > 0 ) /*0x7bd97c*/
  {
    while ( 1 ) /*0x7bd991*/
    {
      v23 = (*((int (__cdecl **)(BSurface *, int, _DWORD, int))this + 17))(this, 2, 0, *((_DWORD *)this + 474) + 24); /*0x7bd991*/
      v24 = (_DWORD *)v23; /*0x7bd994*/
      if ( !v23 ) /*0x7bd99b*/
        goto LABEL_103; /*0x7bd99b*/
      (*((void (__cdecl **)(BSurface *, int, int, int))this + 17))(this, 4, v23, *((_DWORD *)this + 474) + 24); /*0x7bd9af*/
      *((_DWORD *)this + 12) += *((_DWORD *)this + 474) + 24; /*0x7bd9c4*/
      memset(v24, 0, 0x18u); /*0x7bd9cc*/
      *v24 = v24 + 6; /*0x7bd9d6*/
      if ( v21 ) /*0x7bd9d9*/
      {
        v21[1] = v24; /*0x7bd9e3*/
        v24[2] = v21; /*0x7bd9e6*/
      }
      else
      {
        *((_DWORD *)this + 443) = v24; /*0x7bd9db*/
      }
      v21 = v24; /*0x7bd9f4*/
      if ( ++v56 >= *((_DWORD *)this + 35) ) /*0x7bd9fc*/
      {
        if ( v24 ) /*0x7bda00*/
        {
          v24[1] = *((_DWORD *)this + 443); /*0x7bda08*/
          *(_DWORD *)(*((_DWORD *)this + 443) + 8) = v24; /*0x7bda11*/
        }
        break; /*0x7bda11*/
      }
    }
  }
  v25 = *((_DWORD *)this + 443); /*0x7bda14*/
  v26 = *((_DWORD *)this + 474); /*0x7bda1a*/
  *((_DWORD *)this + 89) = v25; /*0x7bda20*/
  *((_DWORD *)this + 90) = v25; /*0x7bda26*/
  *((_DWORD *)this + 474) = v26 - 4; /*0x7bda31*/
  *((_DWORD *)this + 476) = 1020; /*0x7bda37*/
  v27 = 0; /*0x7bda69*/
  v28 = (2 /*0x7bda72*/
       * *((unsigned __int16 *)this + 120)
       / (int)*((unsigned __int8 *)this + 243)
       * (*((unsigned __int16 *)this + 119)
        / (int)*((unsigned __int8 *)this + 242))
       + 4)
      & 0xFFFFFFFC;
  *((_DWORD *)this + 478) = v28; /*0x7bda75*/
  if ( *((_WORD *)this + 127) ) /*0x7bda7b*/
  {
    v29 = *((unsigned __int16 *)this + 127); /*0x7bda8b*/
    if ( *((_WORD *)this + 116) > 2u ) /*0x7bda98*/
      v29 <<= 8; /*0x7bda9a*/
  }
  else
  {
    v29 = v28; /*0x7bda87*/
  }
  v30 = v29 + 8; /*0x7bdaa9*/
  v50 = *((_DWORD *)this + 478); /*0x7bdaac*/
  LOBYTE(v30) = v30 & 0xFC; /*0x7bdab1*/
  *((_DWORD *)this + 85) |= 2u; /*0x7bdab6*/
  *((_DWORD *)this + 475) = v30; /*0x7bdabc*/
  v31 = (*((int (__cdecl **)(BSurface *, int, _DWORD, int))this + 17))(this, 2, 0, v50); /*0x7bdac2*/
  *((_DWORD *)this + 442) = v31; /*0x7bdaca*/
  if ( !v31 ) /*0x7bdad0*/
  {
LABEL_103:
    DSurface::CommitBuffers((DSurface *)this); /*0x7bdf14*/
    return -8; /*0x7bdf27*/
  }
  (*((void (__cdecl **)(BSurface *, int, int, _DWORD))this + 17))(this, 4, v31, *((_DWORD *)this + 478)); /*0x7bdaf1*/
  *((_DWORD *)this + 12) += *((_DWORD *)this + 478); /*0x7bdb02*/
  v57 = 0; /*0x7bdb0d*/
  if ( *((int *)this + 34) > 0 ) /*0x7bdb11*/
  {
    while ( 1 ) /*0x7bdb30*/
    {
      v32 = (_DWORD *)(*((int (__cdecl **)(BSurface *, int, _DWORD, int))this + 17))( /*0x7bdb30*/
                        this,
                        2,
                        0,
                        *((_DWORD *)this + 476) + *((_DWORD *)this + 475) + 44);
      if ( !v32 ) /*0x7bdb37*/
        goto LABEL_103; /*0x7bdb37*/
      (*((void (__cdecl **)(BSurface *, int, _DWORD *, int))this + 17))( /*0x7bdb52*/
        this,
        4,
        v32,
        *((_DWORD *)this + 476) + *((_DWORD *)this + 475) + 44);
      *((_DWORD *)this + 12) += *((_DWORD *)this + 476) + *((_DWORD *)this + 475) + 44; /*0x7bdb71*/
      memset(v32, 0, 0x2Cu); /*0x7bdb79*/
      *v32 = v32 + 11; /*0x7bdb7e*/
      v33 = (int)v32 + *((_DWORD *)this + 475) + 44; /*0x7bdb89*/
      v32[1] = 0; /*0x7bdb8d*/
      v32[2] = v33; /*0x7bdb94*/
      if ( v27 ) /*0x7bdb97*/
      {
        v27[3] = v32; /*0x7bdba1*/
        v32[4] = v27; /*0x7bdba4*/
      }
      else
      {
        *((_DWORD *)this + 441) = v32; /*0x7bdb99*/
      }
      v27 = v32; /*0x7bdbb2*/
      if ( ++v57 >= *((_DWORD *)this + 34) ) /*0x7bdbba*/
      {
        v32[3] = *((_DWORD *)this + 441); /*0x7bdbca*/
        *(_DWORD *)(*((_DWORD *)this + 441) + 16) = v32; /*0x7bdbd3*/
        break; /*0x7bdbd3*/
      }
    }
  }
  v34 = *((_DWORD *)this + 441); /*0x7bdbd6*/
  v35 = *((_DWORD *)this + 476); /*0x7bdbdc*/
  v36 = *((_DWORD *)this + 475); /*0x7bdbe2*/
  *((_DWORD *)this + 92) = v34; /*0x7bdbe8*/
  *((_DWORD *)this + 104) = v34; /*0x7bdbee*/
  *((_DWORD *)this + 439) = v34; /*0x7bdbf4*/
  *((_DWORD *)this + 476) = v35 - 4; /*0x7bdc03*/
  *((_DWORD *)this + 475) = v36 - 4; /*0x7bdc09*/
  v37 = *((_WORD *)this + 117); /*0x7bdc0f*/
  if ( (v37 & 1) != 0 ) /*0x7bdc18*/
  {
    v38 = *((_DWORD *)this + 33); /*0x7bdc1e*/
    if ( (v38 & 1) != 0 ) /*0x7bdc27*/
    {
      if ( *((_WORD *)this + 116) >= 2u ) /*0x7bdc35*/
      {
        if ( (v38 & 0x40) != 0 && (v37 & 2) != 0 ) /*0x7bdc57*/
        {
          *((_WORD *)this + 30) = *((_WORD *)this + 130); /*0x7bdc60*/
          *((_BYTE *)this + 62) = *((_BYTE *)this + 262); /*0x7bdc6a*/
          v39 = *((_BYTE *)this + 263); /*0x7bdc6d*/
        }
        else
        {
          *((_WORD *)this + 30) = *((_WORD *)this + 128); /*0x7bdc7c*/
          *((_BYTE *)this + 62) = *((_BYTE *)this + 258); /*0x7bdc86*/
          v39 = *((_BYTE *)this + 259); /*0x7bdc89*/
        }
        v40 = *((unsigned __int16 *)this + 30) * (v39 >> 3); /*0x7bdc9c*/
        *((_BYTE *)this + 63) = v39; /*0x7bdc9f*/
        *((_DWORD *)this + 499) = *((unsigned __int8 *)this + 62) * v40; /*0x7bdcaa*/
      }
      else
      {
        *((_BYTE *)this + 62) = 1; /*0x7bdc3c*/
        *((_WORD *)this + 30) = 22050; /*0x7bdc40*/
        *((_BYTE *)this + 63) = 8; /*0x7bdc44*/
        *((_DWORD *)this + 499) = 22050; /*0x7bdc48*/
      }
      if ( *((_DWORD *)this + 38) == -1 ) /*0x7bdcb7*/
        *((_DWORD *)this + 38) = *((_DWORD *)this + 39) /*0x7bdcd2*/
                               * ((unsigned int)(*((_DWORD *)this + 499) + (*((_DWORD *)this + 499) >> 1))
                                / *((_DWORD *)this + 39));
      if ( *((int *)this + 38) <= 0 ) /*0x7bdce0*/
      {
        DSurface::CommitBuffers((DSurface *)this); /*0x7bdf2a*/
        return -18; /*0x7bdf3b*/
      }
      v41 = *((_DWORD *)this + 37); /*0x7bdce6*/
      if ( v41 ) /*0x7bdcee*/
      {
        *((_DWORD *)this + 483) = v41; /*0x7bdd3a*/
      }
      else
      {
        v42 = (*((int (__cdecl **)(BSurface *, int, _DWORD, _DWORD))this + 17))(this, 2, 0, *((_DWORD *)this + 38)); /*0x7bdcf5*/
        *((_DWORD *)this + 483) = v42; /*0x7bdcfb*/
        if ( !v42 ) /*0x7bdd03*/
          goto LABEL_103; /*0x7bdd03*/
        (*((void (__cdecl **)(BSurface *, int, int, _DWORD))this + 17))(this, 4, v42, *((_DWORD *)this + 38)); /*0x7bdd24*/
        *((_DWORD *)this + 12) += *((_DWORD *)this + 38); /*0x7bdd35*/
      }
      v51 = *((_DWORD *)this + 38) / *((_DWORD *)this + 39); /*0x7bdd4d*/
      *((_DWORD *)this + 487) = v51; /*0x7bdd53*/
      v43 = (*((int (__cdecl **)(BSurface *, int, _DWORD, int))this + 17))(this, 2, 0, v51); /*0x7bdd59*/
      *((_DWORD *)this + 485) = v43; /*0x7bdd5f*/
      if ( !v43 ) /*0x7bdd67*/
        goto LABEL_103; /*0x7bdd67*/
      (*((void (__cdecl **)(BSurface *, int, int, _DWORD))this + 17))(this, 4, v43, *((_DWORD *)this + 487)); /*0x7bdd88*/
      *((_DWORD *)this + 12) += *((_DWORD *)this + 487); /*0x7bdd96*/
      memset(*((void **)this + 485), 0, *((_DWORD *)this + 487)); /*0x7bddac*/
      v44 = (*((int (__cdecl **)(BSurface *, int, _DWORD, int))this + 17))(this, 2, 0, 2 * *((_DWORD *)this + 487)); /*0x7bddc3*/
      *((_DWORD *)this + 486) = v44; /*0x7bddc9*/
      if ( !v44 ) /*0x7bddd1*/
        goto LABEL_103; /*0x7bddd1*/
      (*((void (__cdecl **)(BSurface *, int, int, int))this + 17))(this, 4, v44, 2 * *((_DWORD *)this + 487)); /*0x7bddf4*/
      *((_DWORD *)this + 12) += 2 * *((_DWORD *)this + 487); /*0x7bde04*/
      memset(*((void **)this + 486), 0, 2 * *((_DWORD *)this + 487)); /*0x7bde1c*/
      v48 = 2 * (*((_DWORD *)this + 499) / (unsigned int)*((unsigned __int8 *)this + 244)) + 100; /*0x7bde3b*/
      *((_DWORD *)this + 493) = v48; /*0x7bde41*/
      v45 = (*((int (__cdecl **)(BSurface *, int, _DWORD, unsigned int))this + 17))(this, 2, 0, v48); /*0x7bde47*/
      *((_DWORD *)this + 490) = v45; /*0x7bde4d*/
      if ( !v45 ) /*0x7bde55*/
        goto LABEL_103; /*0x7bde55*/
      (*((void (__cdecl **)(BSurface *, int, int, _DWORD))this + 17))(this, 4, v45, *((_DWORD *)this + 493)); /*0x7bde76*/
      *((_DWORD *)this + 12) += *((_DWORD *)this + 493); /*0x7bde84*/
      v46 = (*((int (__cdecl **)(BSurface *, int, _DWORD, _DWORD))this + 17))(this, 2, 0, *((_DWORD *)this + 39)); /*0x7bde93*/
      *((_DWORD *)this + 494) = v46; /*0x7bde99*/
      if ( !v46 ) /*0x7bdea1*/
        goto LABEL_103; /*0x7bdea1*/
      (*((void (__cdecl **)(BSurface *, int, int, _DWORD))this + 17))(this, 4, v46, *((_DWORD *)this + 39)); /*0x7bdec2*/
      memset(*((void **)this + 494), 0, *((_DWORD *)this + 39)); /*0x7bded8*/
      *((_DWORD *)this + 12) += *((_DWORD *)this + 39); /*0x7bdeef*/
    }
  }
  v47 = (*((int (__cdecl **)(BSurface *, int, _DWORD, int))this + 17))( /*0x7bdf04*/
          this,
          2,
          0,
          4 * *((unsigned __int16 *)this + 118));
  *((_DWORD *)this + 473) = v47; /*0x7bdf0a*/
  if ( !v47 ) /*0x7bdf12*/
    goto LABEL_103; /*0x7bdf12*/
  (*((void (__cdecl **)(BSurface *, int, int, int))this + 17))(this, 4, v47, 4 * *((unsigned __int16 *)this + 118)); /*0x7bdf4d*/
  *((_DWORD *)this + 12) += 4 * *((unsigned __int16 *)this + 118); /*0x7bdf65*/
  return -1; /*0x7bd6a3*/
}



// ==== 0x007BDF80  DSurface::CommitBuffers  this=DSurface  sig=csp ====
int __thiscall DSurface::CommitBuffers(DSurface *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int i; // edi
  int v11; // ebp
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int j; // ebx
  int v17; // ebp
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // edi
  int v23; // eax
  int *v24; // eax
  int *v25; // ebp
  int v26; // ebx
  int v27; // edi
  bool v28; // zf
  int v29; // eax
  int v30; // eax
  int v31; // edi
  int v32; // eax
  int *v33; // eax
  int *v34; // ebp
  int v35; // ebx
  int v36; // edi
  int v37; // eax
  int v38; // eax
  int v39; // ecx
  int result; // eax
  int v41; // [esp+4h] [ebp-10h]
  int v42; // [esp+4h] [ebp-10h]
  int v43; // [esp+8h] [ebp-Ch]
  int v44; // [esp+8h] [ebp-Ch]
  int v45; // [esp+Ch] [ebp-8h]
  int v46; // [esp+Ch] [ebp-8h]
  int v47; // [esp+10h] [ebp-4h]
  int v48; // [esp+10h] [ebp-4h]

  v2 = *((_DWORD *)this + 445); /*0x7bdf86*/
  if ( v2 ) /*0x7bdf8e*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])(this, 5, v2, *((_DWORD *)this + 446)); /*0x7bdf9b*/
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 445), 0); /*0x7bdfaa*/
  }
  v3 = *((_DWORD *)this + 473); /*0x7bdfb0*/
  if ( v3 ) /*0x7bdfb8*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])( /*0x7bdfcb*/
      this,
      5,
      v3,
      4 * *(unsigned __int16 *)&this->__pad_2C[192]);
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 473), 0); /*0x7bdfda*/
  }
  if ( !*(_DWORD *)&this->__pad_2C[104] ) /*0x7bdfe0*/
  {
    v4 = *((_DWORD *)this + 483); /*0x7bdfea*/
    if ( v4 ) /*0x7bdff2*/
    {
      (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])( /*0x7bdfff*/
        this,
        5,
        v4,
        *(_DWORD *)&this->__pad_2C[108]);
      (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 483), 0); /*0x7be00e*/
    }
  }
  v5 = *((_DWORD *)this + 485); /*0x7be014*/
  if ( v5 ) /*0x7be01c*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])(this, 5, v5, *((_DWORD *)this + 487)); /*0x7be029*/
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 485), 0); /*0x7be038*/
  }
  v6 = *((_DWORD *)this + 486); /*0x7be03e*/
  if ( v6 ) /*0x7be046*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v6, 2 * *((_DWORD *)this + 487)); /*0x7be055*/
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 486), 0); /*0x7be064*/
  }
  v7 = *((_DWORD *)this + 490); /*0x7be06a*/
  if ( v7 ) /*0x7be072*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])(this, 5, v7, *((_DWORD *)this + 493)); /*0x7be07f*/
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 490), 0); /*0x7be08e*/
  }
  v8 = *((_DWORD *)this + 494); /*0x7be094*/
  if ( v8 ) /*0x7be09c*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])( /*0x7be0a9*/
      this,
      5,
      v8,
      *(_DWORD *)&this->__pad_2C[112]);
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 494), 0); /*0x7be0b8*/
  }
  v9 = 0; /*0x7be0c6*/
  for ( i = *((_DWORD *)this + 441); v9 < *(_DWORD *)&this->__pad_2C[92]; i = v11 ) /*0x7be0d1*/
  {
    if ( !i ) /*0x7be0d5*/
      break; /*0x7be0d5*/
    v11 = *(_DWORD *)(i + 12); /*0x7be0e3*/
    v12 = *((_DWORD *)this + 475) + 4; /*0x7be0eb*/
    v13 = this->q1DC + 4; /*0x7be0ed*/
    this->q1DC = v13; /*0x7be0f1*/
    *((_DWORD *)this + 475) = v12; /*0x7be0f7*/
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, i, v12 + v13 + 44); /*0x7be106*/
    (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])(this, 3, i, 0); /*0x7be10f*/
    ++v9; /*0x7be11b*/
  }
  if ( (this->__pad_11F[53] & 2) != 0 ) /*0x7be129*/
  {
    v14 = *((_DWORD *)this + 442); /*0x7be12b*/
    if ( v14 ) /*0x7be133*/
    {
      (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])(this, 5, v14, *((_DWORD *)this + 478)); /*0x7be140*/
      (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 442), 0); /*0x7be14f*/
      *((_DWORD *)this + 442) = 0; /*0x7be155*/
    }
  }
  v15 = *((_DWORD *)this + 443); /*0x7be165*/
  for ( j = 0; j < *(_DWORD *)&this->__pad_2C[96]; v15 = v17 ) /*0x7be16f*/
  {
    if ( !v15 ) /*0x7be173*/
      break; /*0x7be173*/
    v17 = *(_DWORD *)(v15 + 4); /*0x7be17b*/
    v18 = *((_DWORD *)this + 474) + 4; /*0x7be17e*/
    *((_DWORD *)this + 474) = v18; /*0x7be183*/
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v15, v18 + 24); /*0x7be191*/
    (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])(this, 3, v15, 0); /*0x7be19a*/
    ++j; /*0x7be1a6*/
  }
  if ( (this->__pad_11F[53] & 1) != 0 ) /*0x7be1b4*/
  {
    v19 = this->q1BC; /*0x7be1b6*/
    if ( v19 ) /*0x7be1be*/
    {
      (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])(this, 5, v19, *((_DWORD *)this + 477)); /*0x7be1cb*/
      (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, this->q1BC, 0); /*0x7be1da*/
      this->q1BC = 0; /*0x7be1e0*/
    }
  }
  v20 = this->q1D8; /*0x7be1ea*/
  if ( v20 ) /*0x7be1f2*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])( /*0x7be204*/
      this,
      5,
      v20,
      2 * *((unsigned __int16 *)this + 940));
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, this->q1D8, 0); /*0x7be213*/
  }
  v21 = *((_DWORD *)this + 469); /*0x7be219*/
  if ( v21 ) /*0x7be221*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])( /*0x7be236*/
      this,
      5,
      v21,
      6 * *((unsigned __int16 *)this + 934));
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 469), 0); /*0x7be245*/
  }
  v22 = *((_DWORD *)this + 463); /*0x7be24b*/
  v47 = v22; /*0x7be253*/
  if ( v22 ) /*0x7be257*/
  {
    v23 = 0; /*0x7be25d*/
    v41 = 0; /*0x7be25f*/
    v43 = 0; /*0x7be267*/
    v45 = *((_DWORD *)this + 463); /*0x7be26b*/
    do /*0x7be2e9*/
    {
      v24 = (int *)(*((_DWORD *)this + 466) + v23); /*0x7be275*/
      v25 = (int *)v24[2]; /*0x7be277*/
      v26 = *v24; /*0x7be27a*/
      v27 = *v25; /*0x7be27c*/
      if ( *v25 ) /*0x7be27c*/
      {
        (*(void (__cdecl **)(DSurface *, int, int, unsigned int))&this->__pad_2C[24])( /*0x7be29d*/
          this,
          5,
          v27,
          v26 * ((*(_DWORD *)(*((_DWORD *)this + 465) + v41 + 4) + 1) & 0xFFFFFFFE));
        (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])(this, 3, v27, 0); /*0x7be2a6*/
      }
      if ( v25 ) /*0x7be2ae*/
      {
        (*(void (__cdecl **)(DSurface *, int, int *, int))&this->__pad_2C[24])(this, 5, v25, 12 * v26); /*0x7be2bb*/
        (*(void (__cdecl **)(DSurface *, int, int *, _DWORD))&this->__pad_2C[24])(this, 3, v25, 0); /*0x7be2c4*/
      }
      v23 = v43 + 12; /*0x7be2d6*/
      v28 = v45 == 1; /*0x7be2dc*/
      v43 += 12; /*0x7be2dd*/
      v41 += 16; /*0x7be2e1*/
      --v45; /*0x7be2e5*/
    }
    while ( !v28 ); /*0x7be2e9*/
    v22 = v47; /*0x7be2eb*/
  }
  v29 = *((_DWORD *)this + 466); /*0x7be2ef*/
  if ( v29 ) /*0x7be2f7*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v29, 12 * v22); /*0x7be304*/
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 466), 0); /*0x7be313*/
  }
  v30 = *((_DWORD *)this + 465); /*0x7be319*/
  if ( v30 ) /*0x7be321*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v30, 16 * v22); /*0x7be32b*/
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 465), 0); /*0x7be33a*/
  }
  v31 = *((_DWORD *)this + 457); /*0x7be340*/
  v48 = v31; /*0x7be348*/
  if ( v31 ) /*0x7be34c*/
  {
    v32 = 0; /*0x7be352*/
    v42 = 0; /*0x7be354*/
    v46 = 0; /*0x7be35c*/
    v44 = *((_DWORD *)this + 457); /*0x7be360*/
    do /*0x7be3de*/
    {
      v33 = (int *)(*((_DWORD *)this + 462) + v32); /*0x7be36a*/
      v34 = (int *)v33[2]; /*0x7be36c*/
      v35 = *v33; /*0x7be36f*/
      v36 = *v34; /*0x7be371*/
      if ( *v34 ) /*0x7be371*/
      {
        (*(void (__cdecl **)(DSurface *, int, int, unsigned int))&this->__pad_2C[24])( /*0x7be392*/
          this,
          5,
          v36,
          v35 * ((*(_DWORD *)(*((_DWORD *)this + 461) + v42 + 8) + 1) & 0xFFFFFFFE));
        (*(void (__cdecl **)(DSurface *, int, int, _DWORD))&this->__pad_2C[24])(this, 3, v36, 0); /*0x7be39b*/
      }
      if ( v34 ) /*0x7be3a3*/
      {
        (*(void (__cdecl **)(DSurface *, int, int *, int))&this->__pad_2C[24])(this, 5, v34, 12 * v35); /*0x7be3b0*/
        (*(void (__cdecl **)(DSurface *, int, int *, _DWORD))&this->__pad_2C[24])(this, 3, v34, 0); /*0x7be3b9*/
      }
      v32 = v46 + 12; /*0x7be3cb*/
      v28 = v44 == 1; /*0x7be3d1*/
      v46 += 12; /*0x7be3d2*/
      v42 += 16; /*0x7be3d6*/
      --v44; /*0x7be3da*/
    }
    while ( !v28 ); /*0x7be3de*/
    v31 = v48; /*0x7be3e0*/
  }
  v37 = *((_DWORD *)this + 462); /*0x7be3e4*/
  if ( v37 ) /*0x7be3ec*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v37, 12 * v31); /*0x7be3f9*/
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 462), 0); /*0x7be408*/
  }
  v38 = *((_DWORD *)this + 461); /*0x7be40e*/
  if ( v38 ) /*0x7be416*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v38, 16 * v31); /*0x7be420*/
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 461), 0); /*0x7be42f*/
  }
  v39 = *((_DWORD *)this + 460); /*0x7be435*/
  if ( v39 ) /*0x7be440*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v39, 24 * this->q1C8); /*0x7be453*/
    (*(void (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])(this, 3, *((_DWORD *)this + 460), 0); /*0x7be462*/
  }
  result = *((_DWORD *)this + 455); /*0x7be468*/
  if ( result ) /*0x7be470*/
  {
    (*(void (__cdecl **)(DSurface *, int, int, int))&this->__pad_2C[24])( /*0x7be483*/
      this,
      5,
      result,
      4 * *((unsigned __int16 *)this + 906));
    return (*(int (__cdecl **)(DSurface *, int, _DWORD, _DWORD))&this->__pad_2C[24])( /*0x7be492*/
             this,
             3,
             *((_DWORD *)this + 455),
             0);
  }
  return result; /*0x7be498*/
}



// ==== 0x007BE4A0  ObjectClass::Audio_Process_7BE4A0  this=ObjectClass  sig=csp ====
int __thiscall Audio_Process_7BE4A0(ObjectClass *this)
{
  unsigned int v2; // ebp
  int customSound; // eax
  void *v4; // ebx
  char v5; // al
  unsigned int v6; // edi
  int v7; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // [esp+10h] [ebp-4h]

  v2 = this->customSound_controller[4]; /*0x7be4a7*/
  if ( v2 == -1 || (customSound = this->customSound, customSound == -1) ) /*0x7be4b5*/
  {
    v2 = *((unsigned __int16 *)this + 119); /*0x7be4c2*/
    v11 = *((unsigned __int16 *)this + 120); /*0x7be4c9*/
    if ( (this->needsRedraw & 8) == 0 ) /*0x7be4d5*/
      goto LABEL_6; /*0x7be4d5*/
    v2 += *((unsigned __int16 *)this + 125); /*0x7be4e9*/
    customSound = *((unsigned __int16 *)this + 126) + v11; /*0x7be4ef*/
  }
  v11 = customSound; /*0x7be4f1*/
LABEL_6:
  v4 = (void *)this->customSound_controller[3]; /*0x7be4f5*/
  if ( (this->needsRedraw & 1) != 0 ) /*0x7be500*/
  {
    if ( !v4 ) /*0x7be508*/
    {
      v5 = *((_BYTE *)this + 264); /*0x7be512*/
      v6 = v2 * v11; /*0x7be518*/
      if ( v5 == 1 || v5 == 4 ) /*0x7be521*/
        v6 *= 2; /*0x7be523*/
      v7 = ((int (__cdecl *)(ObjectClass *, int, _DWORD, unsigned int))this->ambientSoundController[2])(this, 2, 0, v6); /*0x7be52b*/
      v4 = (void *)v7; /*0x7be52e*/
      if ( !v7 ) /*0x7be535*/
        return -8; /*0x7be541*/
      this->nextObject = (ObjectClass *)((char *)this->nextObject + v6); /*0x7be54c*/
      ((void (__cdecl *)(ObjectClass *, int, int, unsigned int))this->ambientSoundController[2])(this, 4, v7, v6); /*0x7be54f*/
      memset(v4, 0, v6); /*0x7be55d*/
      *((_DWORD *)this + 86) = v4; /*0x7be56d*/
      this->q058 = v11; /*0x7be573*/
      v9 = this->q054; /*0x7be579*/
      LOBYTE(v9) = v9 | 0x20; /*0x7be57f*/
      *((_DWORD *)this + 87) = v2; /*0x7be581*/
      this->q054 = v9; /*0x7be587*/
    }
    goto LABEL_15; /*0x7be58d*/
  }
  if ( v4 ) /*0x7be591*/
  {
LABEL_15:
    Audio_Process_7C3270((int)this, (int)v4, v2, v11, *(_DWORD *)&this->bombVisible, this->health); /*0x7be593*/
    v10 = this->q054; /*0x7be5aa*/
    LOBYTE(v10) = v10 | 0x10; /*0x7be5b0*/
    this->q054 = v10; /*0x7be5b3*/
    return -1; /*0x7be5c0*/
  }
  return -9; /*0x7be537*/
}



// ==== 0x007BE5D0  AllocCallback::Dispatch  this=AllocCallback  sig=csp ====
_DWORD *__cdecl AllocCallback_Dispatch(int a1, int a2, _DWORD *Block, size_t Size)
{
  _DWORD *result; // eax

  switch ( a2 ) /*0x7be5df*/
  {
    case 2: /*0x7be5df*/
      result = malloc(Size); /*0x7be5eb*/
      break; /*0x7be5f6*/
    case 3: /*0x7be5df*/
      free(Block); /*0x7be5fc*/
      result = 0; /*0x7be604*/
      break; /*0x7be607*/
    case 4: /*0x7be5df*/
    case 5: /*0x7be5df*/
      result = Block; /*0x7be60c*/
      break; /*0x7be60f*/
    case 6: /*0x7be5df*/
      *Block = -1; /*0x7be614*/
      goto LABEL_6; /*0x7be614*/
    default:
LABEL_6:
      result = 0; /*0x7be61a*/
      break; /*0x7be61a*/
  }
  return result; /*0x7be5f5*/
}



// ==== 0x007BE640  Stream::CopyFromTemplate  this=Stream  sig=csp ====
void __thiscall Stream::CopyFromTemplate(Stream *this)
{
  qmemcpy(this, &unk_84E738, 0x88u); /*0x7be64e*/
}



// ==== 0x007BE660  ObjectClass::Audio_Process_7BE660  this=ObjectClass  sig=csp ====
int __thiscall Audio_Process_7BE660(TechnoClass *this)
{
  *((_DWORD *)this + 436) = -1; /*0x7be663*/
  return -1; /*0x7be669*/
}



// ==== 0x007BE670  ObjectClass::Audio_Render_7BE670  this=ObjectClass  sig=csp ====
int __thiscall Audio_Render_7BE670(TechnoClass *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v8; // ecx

  *((_DWORD *)this + 433) = HIWORD(this->radioLinks[3]) / (int)BYTE2(this->flashing[0]); /*0x7be689*/
  v2 = LOWORD(this->flashing[0]) / (int)HIBYTE(this->flashing[0]); /*0x7be69f*/
  v3 = *((_DWORD *)this + 433); /*0x7be6a1*/
  HIWORD(v4) = 0; /*0x7be6a7*/
  *((_DWORD *)this + 434) = v2; /*0x7be6ac*/
  *((_DWORD *)this + 435) = v2 * v3; /*0x7be6b2*/
  BYTE1(v4) = BYTE2(this->flashing[0]); /*0x7be6b8*/
  LOBYTE(v4) = HIBYTE(this->flashing[0]); /*0x7be6c3*/
  *((_DWORD *)this + 481) = nullsub_49; /*0x7be6c9*/
  *((_DWORD *)this + 482) = nullsub_49; /*0x7be6cf*/
  v5 = *(_DWORD *)this->needsRedraw; /*0x7be6d5*/
  this->spawnStatus = _underflow___basic_streambuf_DU__char_traits_D_std___std__MAEHXZ_7; /*0x7be6dd*/
  if ( (v5 & 1) != 0 ) /*0x7be6e7*/
  {
    *((_DWORD *)this + 479) = sub_7BF140; /*0x7be6ff*/
    this->spawnStatus = sub_7BF190; /*0x7be709*/
  }
  else
  {
    *((_DWORD *)this + 479) = sub_7BEA40; /*0x7be6e9*/
    this->spawnStatus = sub_7BF0B0; /*0x7be6f3*/
  }
  v6 = v4 - 1026; /*0x7be713*/
  if ( !v6 ) /*0x7be719*/
  {
    v8 = LOBYTE(this->animation[4]); /*0x7be7d0*/
    if ( (_BYTE)v8 ) /*0x7be7d8*/
    {
      if ( (_BYTE)v8 == 4 ) /*0x7be7dd*/
      {
        *((_DWORD *)this + 481) = sub_7C4260; /*0x7be7df*/
        *((_DWORD *)this + 482) = DecodeSHPFrame16bpp; /*0x7be7e9*/
        return -1; /*0x7be7f7*/
      }
    }
    else
    {
      *((_DWORD *)this + 481) = sub_7C6D40; /*0x7be7f8*/
      if ( (this->radioLinks[2] & 0x40000) != 0 ) /*0x7be80b*/
      {
        if ( (v5 & 0x80u) != 0 ) /*0x7be80f*/
        {
          *((_DWORD *)this + 482) = DrawTileBlock2Sub; /*0x7be811*/
          return -1; /*0x7be81f*/
        }
        *((_DWORD *)this + 482) = DrawTileBlock2; /*0x7be820*/
      }
    }
    return -1; /*0x7be7dd*/
  }
  if ( v6 != 2 ) /*0x7be722*/
    return -1; /*0x7be82a*/
  if ( LOBYTE(this->animation[4]) ) /*0x7be72a*/
  {
    if ( LOBYTE(this->animation[4]) == 1 ) /*0x7be736*/
    {
      *((_DWORD *)this + 481) = sub_7C6FC8; /*0x7be75a*/
      *((_DWORD *)this + 482) = IsoTile::Decode16BitV2; /*0x7be764*/
      return -1; /*0x7be772*/
    }
    if ( LOBYTE(this->animation[4]) == 4 ) /*0x7be73b*/
    {
      *((_DWORD *)this + 481) = sub_7C3D60; /*0x7be741*/
      *((_DWORD *)this + 482) = IsoTile::Decode8Bit; /*0x7be74b*/
      return -1; /*0x7be759*/
    }
    return -1; /*0x7be73b*/
  }
  *((_DWORD *)this + 481) = sub_7C6DD6; /*0x7be773*/
  if ( (this->radioLinks[2] & 0x40000) == 0 ) /*0x7be786*/
  {
    if ( (v5 & 0x40) != 0 ) /*0x7be7bf*/
    {
      *((_DWORD *)this + 481) = sub_7C6E94; /*0x7be7c1*/
      return -1; /*0x7be7cf*/
    }
    return -1; /*0x7be7bf*/
  }
  if ( (v5 & 0x80u) == 0 ) /*0x7be78a*/
  {
    if ( (v5 & 0x40) != 0 ) /*0x7be79d*/
      *((_DWORD *)this + 482) = DrawTileBlock8BPP; /*0x7be79f*/
    else
      *((_DWORD *)this + 482) = DrawTile4x4Block; /*0x7be7ae*/
    return -1; /*0x7be7a9*/
  }
  else
  {
    *((_DWORD *)this + 482) = DrawTileBlock16BPP; /*0x7be78c*/
    return -1; /*0x7be796*/
  }
}



// ==== 0x007BE830  Audio_Process_7BE830  this=ObjectClass  sig=ida-proto ====
int __fastcall sub_7BE830(int a1, int a2)
{
  int v3; // ebp
  int v4; // ebx
  int *v5; // eax
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // edi
  bool v9; // zf
  int result; // eax
  int v11; // ebp
  int v12; // ebx
  int *v13; // eax
  int v14; // ecx
  int v15; // eax
  _DWORD *v16; // edi
  int v17; // [esp+10h] [ebp-10h]
  int v18; // [esp+10h] [ebp-10h]
  int v19; // [esp+14h] [ebp-Ch]
  int v20; // [esp+14h] [ebp-Ch]
  int v21; // [esp+18h] [ebp-8h]
  int v22; // [esp+18h] [ebp-8h]

  v3 = 0; /*0x7be838*/
  if ( *(_DWORD *)(a1 + 1828) ) /*0x7be83b*/
  {
    v17 = 0; /*0x7be849*/
    v21 = *(_DWORD *)(a1 + 1828); /*0x7be84d*/
    do /*0x7be8b7*/
    {
      v4 = *(_DWORD *)(*(_DWORD *)(a1 + 1844) + v3); /*0x7be861*/
      v5 = (int *)(v17 + *(_DWORD *)(a1 + 1848)); /*0x7be864*/
      v6 = v5[2]; /*0x7be867*/
      v7 = *v5; /*0x7be86b*/
      if ( v7 ) /*0x7be86f*/
      {
        v8 = (_DWORD *)(v6 + 4); /*0x7be871*/
        v19 = v7; /*0x7be874*/
        do /*0x7be89e*/
        {
          if ( v8[1] == a2 ) /*0x7be881*/
            (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(a1 + 72))(a1, v4, *(v8 - 1), *v8); /*0x7be88c*/
          v8 += 3; /*0x7be896*/
          --v19; /*0x7be89a*/
        }
        while ( v19 ); /*0x7be89e*/
      }
      v3 += 16; /*0x7be8a8*/
      v9 = v21 == 1; /*0x7be8ae*/
      v17 += 12; /*0x7be8af*/
      --v21; /*0x7be8b3*/
    }
    while ( !v9 ); /*0x7be8b7*/
  }
  result = *(_DWORD *)(a1 + 1852); /*0x7be8b9*/
  v11 = 0; /*0x7be8bf*/
  if ( result ) /*0x7be8c3*/
  {
    v18 = 0; /*0x7be8c5*/
    v20 = *(_DWORD *)(a1 + 1852); /*0x7be8c9*/
    do /*0x7be933*/
    {
      v12 = *(_DWORD *)(*(_DWORD *)(a1 + 1860) + v11); /*0x7be8dd*/
      v13 = (int *)(*(_DWORD *)(a1 + 1864) + v18); /*0x7be8e0*/
      v14 = v13[2]; /*0x7be8e3*/
      v15 = *v13; /*0x7be8e7*/
      if ( v15 ) /*0x7be8eb*/
      {
        v16 = (_DWORD *)(v14 + 4); /*0x7be8ed*/
        v22 = v15; /*0x7be8f0*/
        do /*0x7be91a*/
        {
          if ( v16[1] == a2 ) /*0x7be8fd*/
            (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(a1 + 72))(a1, v12, *(v16 - 1), *v16); /*0x7be908*/
          v16 += 3; /*0x7be912*/
          --v22; /*0x7be916*/
        }
        while ( v22 ); /*0x7be91a*/
      }
      v11 += 16; /*0x7be924*/
      result = v20 - 1; /*0x7be92a*/
      v9 = v20 == 1; /*0x7be92a*/
      v18 += 12; /*0x7be92b*/
      --v20; /*0x7be92f*/
    }
    while ( !v9 ); /*0x7be933*/
  }
  return result; /*0x7be935*/
}



// ==== 0x007BE940  sub_7BE940  this=ObjectClass  sig=csp ====
char __fastcall sub_7BE940(int a1, int *a2)
{
  int v4; // eax
  _DWORD *v5; // ebx
  int (__cdecl *v6)(int, int, _DWORD, _DWORD); // eax
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  int v10; // ebp
  int v11; // eax
  int v12; // ebx
  int v14; // [esp-8h] [ebp-24h]
  _DWORD *v15; // [esp+Ch] [ebp-10h]
  int v16; // [esp+10h] [ebp-Ch]
  int v17; // [esp+14h] [ebp-8h]

  LOBYTE(v4) = *(_BYTE *)(a1 + 420); /*0x7be94a*/
  v5 = (_DWORD *)a2[1]; /*0x7be954*/
  v15 = v5; /*0x7be959*/
  if ( (v4 & 2) == 0 /*0x7be982*/
    && ((v6 = *(int (__cdecl **)(int, int, _DWORD, _DWORD))(a1 + 72)) != 0 && (v4 = v6(a1, 6, 0, 0)) != 0
     || (v4 = *(_DWORD *)(a1 + 424)) != 0) )
  {
    v7 = *(_DWORD *)(a1 + 1732); /*0x7be988*/
    v8 = *(_DWORD *)(a1 + 1736); /*0x7be98e*/
    v9 = v4 + *(_DWORD *)(a1 + 444); /*0x7be99b*/
    v17 = v7; /*0x7be9a2*/
    v16 = v8; /*0x7be9a6*/
    if ( (a2[5] & 0x40) != 0 ) /*0x7be9aa*/
      v10 = *(_DWORD *)(a1 + 1768); /*0x7be9ac*/
    else
      v10 = *a2; /*0x7be9b4*/
    v11 = v5[3]; /*0x7be9b7*/
    if ( (v11 & 4) != 0 ) /*0x7be9bc*/
      v12 = *(_DWORD *)(a1 + 1776); /*0x7be9be*/
    else
      v12 = *v5; /*0x7be9c6*/
    if ( *(_DWORD *)(a1 + 72) && (v11 & 8) != 0 ) /*0x7be9d0*/
    {
      LOBYTE(v11) = v11 & 0xF7; /*0x7be9d6*/
      v15[3] = v11; /*0x7be9d8*/
      (*(void (__cdecl **)(int, int, int, _DWORD))(a1 + 72))(a1, 3, v12, v15[5]); /*0x7be9e3*/
      v8 = v16; /*0x7be9e6*/
      v7 = v17; /*0x7be9ea*/
    }
    v14 = *(_DWORD *)(a1 + 428); /*0x7be9ff*/
    if ( (a2[5] & 0x20) != 0 ) /*0x7bea05*/
      (*(void (__cdecl **)(int, int, int, int, int, int))(a1 + 1928))(v12, v10, v9, v7, v8, v14); /*0x7bea0f*/
    else
      (*(void (__cdecl **)(int, int, int, int, int, int))(a1 + 1924))(v12, v10, v9, v7, v8, v14); /*0x7bea07*/
    v4 = *(_DWORD *)(a1 + 72); /*0x7bea15*/
    if ( v4 ) /*0x7bea1e*/
      LOBYTE(v4) = ((int (__cdecl *)(int, int, _DWORD, _DWORD))v4)(a1, 7, 0, 0); /*0x7bea27*/
  }
  return v4; /*0x7bea2c*/
}



// ==== 0x007BEA40  ObjectClass::method_7BEA40  this=ObjectClass  sig=csp ====
int __thiscall sub_7BEA40(TechnoClass *this)
{
  int result; // eax
  int v3; // eax

  result = AudioStream::ProcessStream((int)this); /*0x7bea43*/
  if ( result == -1 ) /*0x7bea4b*/
  {
    sub_7BEFE0((int)this); /*0x7bea4f*/
    v3 = this->ironTintTimer[1]; /*0x7bea54*/
    *((_DWORD *)this + 439) = v3; /*0x7bea5a*/
    if ( (this->ironTintTimer[2] & 8) == 0 ) /*0x7bea69*/
      this->ironTintTimer[1] = *(_DWORD *)(v3 + 12); /*0x7bea6e*/
    return -1; /*0x7bea74*/
  }
  return result; /*0x7bea77*/
}



// ==== 0x007BEA80  AudioStream::ProcessStream  this=AudioStream  sig=csp ====
int __thiscall AudioStream::ProcessStream(int this)
{
  int v1; // esi
  int v2; // ebp
  int *v3; // ebx
  int v4; // edi
  char v5; // al
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // eax
  int Position; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  signed int v15; // ecx
  int v16; // ecx
  int v17; // edi
  int v18; // eax
  int v19; // edi
  int v20; // ecx
  int v21; // edi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  void (__cdecl *v25)(int, int, _DWORD, _DWORD); // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int (__cdecl *v29)(_DWORD, _DWORD); // eax
  int v30; // edx
  char v31; // al
  int v32; // eax
  int v33; // [esp+10h] [ebp-Ch]
  signed int v35; // [esp+18h] [ebp-4h]

  v1 = this; /*0x7bea86*/
  v2 = *(_DWORD *)(this + 416); /*0x7bea8d*/
  v3 = (int *)(this + 416); /*0x7bea93*/
  v4 = this + 64; /*0x7bea99*/
  if ( (*(_BYTE *)(v2 + 20) & 1) != 0 )
  {
    if ( (*(_BYTE *)(this + 420) & 0x10) != 0 ) /*0x7beafb*/
    {
      *(_DWORD *)(this + 1744) = *(_DWORD *)(*(_DWORD *)(this + 416) + 28); /*0x7beb04*/
      *(_DWORD *)(this + 420) |= 8u; /*0x7beb10*/
      v10 = *(_DWORD *)(v2 + 20); /*0x7beb13*/
      LOBYTE(v10) = v10 | 0x80; /*0x7beb16*/
      *(_DWORD *)(v2 + 20) = v10; /*0x7beb18*/
      return -1; /*0x7beb23*/
    }
    if ( (*(_BYTE *)(this + 132) & 2) != 0 ) /*0x7beb28*/
    {
      *(_DWORD *)(this + 1744) = *(_DWORD *)(v2 + 28); /*0x7beb2d*/
      CalcAudioStreamOffset(this, 60 * *(_DWORD *)(v2 + 28) / *(_DWORD *)(this + 116)); /*0x7beb48*/
      return -1; /*0x7beb57*/
    }
    Position = AudioStream::GetPosition((AudioStream *)this); /*0x7beb5f*/
    v12 = v3[332]; /*0x7beb66*/
    if ( (v3[1] & 2) != 0 ) /*0x7beb6c*/
      v13 = v12 + 2; /*0x7beb71*/
    else
      v13 = v12 + 1; /*0x7beb6e*/
    if ( Position >= 60 * v13 / *(_DWORD *)(v4 + 52) )
    {
      v15 = Audio_Process_7BEE20(v1, v4, (int)v3, v2, Position); /*0x7bebfd*/
      v35 = v15; /*0x7bec04*/
      if ( (*(_BYTE *)(v4 + 64) & 4) != 0 ) /*0x7bec08*/
      {
        v3[332] = *(_DWORD *)(*v3 + 28); /*0x7bec15*/
        return -1; /*0x7bec1f*/
      }
      v33 = *(_DWORD *)(v4 + 48) / 3 - 1; /*0x7bec35*/
      if ( v33 < 0 ) /*0x7bec39*/
        v33 = 0; /*0x7bec3b*/
      if ( *(_DWORD *)(v2 + 28) != v15 )
      {
        do
        {
          if ( (*(_BYTE *)(v2 + 20) & 2) != 0 ) /*0x7bec50*/
            break; /*0x7bec50*/
          v16 = *(_DWORD *)(v1 + 320); /*0x7bec58*/
          v17 = *(_DWORD *)(*v3 + 28); /*0x7bec5e*/
          v18 = v3[332]; /*0x7bec61*/
          if ( v17 < v18 || v17 > v16 )
          {
            v20 = v16 - v3[332]; /*0x7bec8a*/
            if ( v20 >= 0 )
            {
              v21 = v17 - *(_DWORD *)(v1 + 296); /*0x7bec92*/
              v19 = v21 >= 0 ? v21 + v20 + 1 : *(_DWORD *)(v1 + 112) / 3;
            }
            else
            {
              v19 = *(_DWORD *)(v1 + 112) / 3; /*0x7bec8e*/
            }
          }
          else
          {
            v19 = v17 - v18; /*0x7bec6f*/
          }
          if ( v19 > v33 ) /*0x7beca6*/
            break; /*0x7beca6*/
          v22 = *(_DWORD *)(v2 + 20); /*0x7becac*/
          if ( (v22 & 4) != 0 ) /*0x7becb1*/
          {
            if ( (v22 & 8) != 0 ) /*0x7becb5*/
            {
              *(_DWORD *)(v2 + 40) = AudioCodec::Decode( /*0x7beccd*/
                                       (unsigned __int8 *)(*(_DWORD *)(v2 + 8) + *(_DWORD *)(v2 + 36)),
                                       *(char **)(v2 + 8),
                                       *(_DWORD *)(v1 + 1904));
              v23 = *(_DWORD *)(v2 + 20); /*0x7becd0*/
              LOBYTE(v23) = v23 & 0xF7; /*0x7becd6*/
              *(_DWORD *)(v2 + 20) = v23; /*0x7becd8*/
            }
            qmemcpy(v3 + 9, *(const void **)(v2 + 8), *(_DWORD *)(v2 + 40)); /*0x7bece9*/
            v24 = v3[1]; /*0x7becf2*/
            v1 = this; /*0x7becf8*/
            LOBYTE(v24) = v24 | 1; /*0x7becfc*/
            v3[8] = *(_DWORD *)(v2 + 40); /*0x7becfe*/
            v3[1] = v24; /*0x7bed01*/
          }
          v25 = *(void (__cdecl **)(int, int, _DWORD, _DWORD))(v1 + 72); /*0x7bed04*/
          if ( v25 ) /*0x7bed09*/
          {
            if ( (*(_DWORD *)(v2 + 20) & 0x100) != 0 ) /*0x7bed11*/
            {
              v25(v1, 4, *(_DWORD *)(v2 + 28), *(_DWORD *)(v1 + 288)); /*0x7bed21*/
              v26 = *(_DWORD *)(v2 + 20); /*0x7bed23*/
              BYTE1(v26) &= ~1u; /*0x7bed29*/
              *(_DWORD *)(v2 + 20) = v26; /*0x7bed2c*/
            }
            if ( (*(_DWORD *)(v2 + 20) & 0x200) != 0 ) /*0x7bed35*/
            {
              (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(v1 + 72))( /*0x7bed45*/
                v1,
                5,
                *(_DWORD *)(v2 + 28),
                *(_DWORD *)(v1 + 288));
              v27 = *(_DWORD *)(v2 + 20); /*0x7bed48*/
              BYTE1(v27) &= ~2u; /*0x7bed4e*/
              *(_DWORD *)(v2 + 20) = v27; /*0x7bed51*/
            }
            if ( (*(_DWORD *)(v2 + 20) & 0x400) != 0 ) /*0x7bed5a*/
            {
              Audio_Process_7BE830(v1, *(_DWORD *)(v2 + 28)); /*0x7bed61*/
              v28 = *(_DWORD *)(v2 + 20); /*0x7bed66*/
              BYTE1(v28) &= ~4u; /*0x7bed69*/
              *(_DWORD *)(v2 + 20) = v28; /*0x7bed6c*/
            }
          }
          v29 = *(int (__cdecl **)(_DWORD, _DWORD))(v1 + 76); /*0x7bed6f*/
          if ( v29 && v29(0, *(_DWORD *)(v2 + 28)) ) /*0x7bed7c*/
            return -2; /*0x7bedd6*/
          v30 = *(_DWORD *)(v2 + 20); /*0x7bed85*/
          *(_DWORD *)(v2 + 20) = 0; /*0x7bed88*/
          *(_DWORD *)(v2 + 24) = v30; /*0x7bed8f*/
          v2 = *(_DWORD *)(v2 + 12); /*0x7bed92*/
          *v3 = v2; /*0x7bed95*/
          ++*(_DWORD *)(v1 + 28); /*0x7bed9b*/
          if ( (*(_BYTE *)(v2 + 20) & 1) == 0 ) /*0x7beda3*/
          {
            v31 = *((_BYTE *)v3 + 4); /*0x7beddd*/
            ++v3[334]; /*0x7bede3*/
            if ( (v31 & 4) != 0 && (*(_BYTE *)(v1 + 336) & 4) == 0 ) /*0x7bedf2*/
            {
              v32 = *(_DWORD *)(*v3 + 16); /*0x7bedf9*/
              *v3 = v32; /*0x7bedfc*/
              *(_DWORD *)(v32 + 20) = *(_DWORD *)(v32 + 24); /*0x7bee02*/
              return -1; /*0x7bee0b*/
            }
            return -9; /*0x7bedf2*/
          }
        }
        while ( *(_DWORD *)(v2 + 28) != v35 );
      }
      v3[332] = *(_DWORD *)(*v3 + 28); /*0x7bedb4*/
      return -1; /*0x7bedb9*/
    }
    if ( (v3[1] & 4) != 0 ) /*0x7beb89*/
    {
      if ( Audio_Process_7BEE20(v1, v4, (int)v3, v2, Position) == v3[332] && (*(_BYTE *)(v2 + 20) & 0x80) != 0 ) /*0x7beba9*/
      {
        v3[332] = *(_DWORD *)(v2 + 28); /*0x7bebb0*/
        return -1; /*0x7bebb7*/
      }
      else
      {
        v14 = v3[1] | 8; /*0x7bebc5*/
        v3[332] = *(_DWORD *)(v2 + 28); /*0x7bebc8*/
        v3[1] = v14; /*0x7bebce*/
        *(_DWORD *)(v2 + 20) |= 0x80u; /*0x7bebd7*/
        return -1; /*0x7bebdc*/
      }
    }
    else
    {
      return -10; /*0x7bebe7*/
    }
  }
  else
  {
    v5 = *(_BYTE *)(this + 420); /*0x7beaa8*/
    ++*(_DWORD *)(this + 1752); /*0x7beaae*/
    if ( (v5 & 4) != 0 && (*(_BYTE *)(this + 336) & 4) == 0 ) /*0x7beac1*/
    {
      v6 = *(_DWORD *)(v2 + 16); /*0x7beac9*/
      *v3 = v6; /*0x7beacc*/
      *(_DWORD *)(v6 + 20) = *(_DWORD *)(v6 + 24); /*0x7bead1*/
      v7 = *(_DWORD *)(this + 420); /*0x7bead4*/
      if ( (v7 & 0x10) != 0 ) /*0x7bead9*/
      {
        LOBYTE(v7) = v7 | 8; /*0x7beadf*/
        *(_DWORD *)(this + 420) = v7; /*0x7beae2*/
        v8 = *(_DWORD *)(v2 + 20); /*0x7beae5*/
        LOBYTE(v8) = v8 | 0x80; /*0x7beae8*/
        *(_DWORD *)(v2 + 20) = v8; /*0x7beaeb*/
        return -1; /*0x7beaf6*/
      }
      return -1; /*0x7bedc9*/
    }
    return -9; /*0x7bee0c*/
  }
}



// ==== 0x007BEE20  Audio_Process_7BEE20  this=AudioStream  sig=csp ====
signed int __fastcall Audio_Process_7BEE20(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebp
  signed int v7; // esi
  signed int result; // eax
  char v9; // bl
  int v10; // ecx
  int v11; // esi
  int Position; // eax
  bool v13; // zf
  int v14; // edx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // esi
  int v19; // ecx
  signed int v21; // [esp+14h] [ebp-4h]
  signed int v22; // [esp+20h] [ebp+8h]

  v5 = *(_DWORD *)(a2 + 48); /*0x7bee25*/
  v7 = *(_DWORD *)(a4 + 28); /*0x7bee37*/
  result = a5 * v5 / 0x3Cu; /*0x7bee4b*/
  v21 = v7; /*0x7bee51*/
  if ( (*(_BYTE *)(a3 + 4) & 2) != 0 ) /*0x7bee58*/
    --result; /*0x7bee5a*/
  v9 = 0; /*0x7bee61*/
  v22 = *(_DWORD *)(a1 + 300); /*0x7bee63*/
  v10 = *(_DWORD *)(a1 + 336); /*0x7bee67*/
  if ( (v10 & 0x80u) != 0 ) /*0x7bee70*/
  {
    if ( (v10 & 0x100) != 0 ) /*0x7bee75*/
      v22 = *(_DWORD *)(a1 + 320); /*0x7bee7d*/
    do /*0x7beeee*/
    {
      if ( ((*(_DWORD *)(a2 + 64) & 4) != 0 || result <= v22) /*0x7beea1*/
        && ((*(_DWORD *)(a2 + 64) & 4) == 0 || v7 != *(_DWORD *)(a1 + 296) || v9) )
      {
        break; /*0x7beea1*/
      }
      v11 = *(_DWORD *)(a1 + 296) - v22 - 1; /*0x7beeb1*/
      Audio_Process_7C3950(a1, 60 * v11 / v5); /*0x7beec0*/
      Position = AudioStream::GetPosition((AudioStream *)a1); /*0x7beec7*/
      v9 = 1; /*0x7beeda*/
      v13 = v11 == 0; /*0x7beee6*/
      v7 = v21; /*0x7beee8*/
      result = v5 * Position / 60; /*0x7beeec*/
    }
    while ( !v13 ); /*0x7beeee*/
  }
  v14 = a2; /*0x7beef0*/
  if ( (*(_BYTE *)(a2 + 64) & 4) != 0 ) /*0x7beef8*/
  {
    if ( result <= v7 ) /*0x7beefc*/
    {
      v16 = *(_DWORD *)(a1 + 336); /*0x7bef3e*/
      BYTE1(v16) &= ~8u; /*0x7bef44*/
      *(_DWORD *)(a1 + 336) = v16; /*0x7bef47*/
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 234) & 1) == 0 || (*(_BYTE *)(a2 + 68) & 1) == 0 ) /*0x7bef10*/
        Audio_Process_7C3950(a1, 60 * (v7 - result) / v5); /*0x7bef22*/
      v15 = *(_DWORD *)(a1 + 336); /*0x7bef27*/
      v14 = a2; /*0x7bef2d*/
      BYTE1(v15) |= 8u; /*0x7bef31*/
      result = v7; /*0x7bef34*/
      *(_DWORD *)(a1 + 336) = v15; /*0x7bef36*/
    }
  }
  if ( v9 ) /*0x7bef4f*/
  {
    if ( (*(_BYTE *)(a3 + 4) & 2) != 0 && (*(_BYTE *)(v14 + 64) & 4) == 0 && --result < *(_DWORD *)(a1 + 296) ) /*0x7bef6a*/
      result = v22; /*0x7bef6c*/
    v17 = *(_DWORD *)(a1 + 312); /*0x7bef70*/
    if ( v17 != -1 ) /*0x7bef7b*/
    {
      v18 = *(_DWORD *)(a1 + 316); /*0x7bef7d*/
      *(_DWORD *)(a1 + 316) = -1; /*0x7bef83*/
      *(_DWORD *)(a1 + 296) = v18; /*0x7bef89*/
      *(_DWORD *)(a1 + 300) = v17; /*0x7bef8f*/
      *(_DWORD *)(a1 + 312) = -1; /*0x7bef95*/
    }
    v19 = *(_DWORD *)(a1 + 336); /*0x7bef9b*/
    if ( (v19 & 0x100) == 0 ) /*0x7befa4*/
    {
      *(_DWORD *)(a1 + 324) = *(_DWORD *)(a1 + 296); /*0x7befac*/
      *(_DWORD *)(a1 + 320) = *(_DWORD *)(a1 + 300); /*0x7befb8*/
    }
    *(_DWORD *)(a1 + 336) = v19 & 0xFFFFFE7F; /*0x7befc4*/
  }
  return result; /*0x7befca*/
}



// ==== 0x007BEFE0  ObjectClass::method_7BEFE0  this=ObjectClass  sig=csp ====
char __thiscall sub_7BEFE0(int this)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  char *v6; // ecx
  int v7; // eax
  int v8; // eax
  char *v9; // ecx

  v2 = *(_DWORD *)(this + 416); /*0x7befe5*/
  LOBYTE(v3) = *(_BYTE *)(this + 420); /*0x7befeb*/
  v4 = *(_DWORD *)(v2 + 4); /*0x7beff3*/
  if ( (v3 & 2) == 0 ) /*0x7beff6*/
  {
    v5 = *(_DWORD *)(v4 + 12); /*0x7beffc*/
    if ( (v5 & 2) != 0 ) /*0x7bf001*/
    {
      if ( (*(_BYTE *)(this + 340) & 1) != 0 ) /*0x7bf00a*/
      {
        v6 = *(char **)(this + 1776); /*0x7bf00c*/
        LOBYTE(v5) = v5 | 4; /*0x7bf012*/
        *(_DWORD *)(v4 + 12) = v5; /*0x7bf014*/
      }
      else
      {
        v6 = *(char **)v4; /*0x7bf019*/
      }
      *(_DWORD *)(v4 + 20) = AudioCodec::Decode( /*0x7bf030*/
                               (unsigned __int8 *)(*(_DWORD *)v4 + *(_DWORD *)(v4 + 16)),
                               v6,
                               *(_DWORD *)(this + 1908));
      v7 = *(_DWORD *)(v4 + 12); /*0x7bf033*/
      LOBYTE(v7) = v7 & 0xFD; /*0x7bf039*/
      *(_DWORD *)(v4 + 12) = v7; /*0x7bf03b*/
    }
    if ( (*(_BYTE *)(v2 + 20) & 8) != 0 ) /*0x7bf042*/
    {
      *(_DWORD *)(v2 + 40) = AudioCodec::Decode( /*0x7bf05a*/
                               (unsigned __int8 *)(*(_DWORD *)(v2 + 8) + *(_DWORD *)(v2 + 36)),
                               *(char **)(v2 + 8),
                               *(_DWORD *)(this + 1904));
      v8 = *(_DWORD *)(v2 + 20); /*0x7bf05d*/
      LOBYTE(v8) = v8 & 0xF7; /*0x7bf063*/
      *(_DWORD *)(v2 + 20) = v8; /*0x7bf065*/
    }
    v3 = *(_DWORD *)(v2 + 20); /*0x7bf068*/
    if ( (v3 & 0x10) != 0 ) /*0x7bf06d*/
    {
      if ( (*(_BYTE *)(this + 340) & 2) != 0 ) /*0x7bf076*/
      {
        v9 = *(char **)(this + 1768); /*0x7bf078*/
        LOBYTE(v3) = v3 | 0x40; /*0x7bf07e*/
        *(_DWORD *)(v2 + 20) = v3; /*0x7bf080*/
      }
      else
      {
        v9 = *(char **)v2; /*0x7bf085*/
      }
      AudioCodec::Decode((unsigned __int8 *)(*(_DWORD *)v2 + *(_DWORD *)(v2 + 32)), v9, *(_DWORD *)(this + 1912)); /*0x7bf097*/
      v3 = *(_DWORD *)(v2 + 20); /*0x7bf09c*/
      LOBYTE(v3) = v3 & 0xEF; /*0x7bf0a2*/
      *(_DWORD *)(v2 + 20) = v3; /*0x7bf0a4*/
    }
  }
  return v3; /*0x7bf0a7*/
}



// ==== 0x007BF0B0  ObjectClass::method_7BF0B0  this=ObjectClass  sig=csp ====
int __thiscall sub_7BF0B0(TechnoClass *this)
{
  int *v2; // edi
  void (__cdecl *v3)(TechnoClass *, int, int, int); // eax
  int v4; // eax
  void (__cdecl *v5)(TechnoClass *, int, char *, int); // eax
  int (__cdecl *v6)(TechnoClass *, int); // eax

  v2 = (int *)*((_DWORD *)this + 439); /*0x7bf0b4*/
  if ( (v2[5] & 4) != 0 || (this->ironTintTimer[2] & 1) != 0 ) /*0x7bf0c9*/
  {
    if ( (v2[5] & 4) != 0 ) /*0x7bf0cd*/
    {
      v3 = (void (__cdecl *)(TechnoClass *, int, int, int))this->ambientSoundController[3]; /*0x7bf0cf*/
      if ( v3 ) /*0x7bf0d4*/
        v3(this, 2, v2[2], v2[10]); /*0x7bf0dd*/
    }
    else
    {
      v4 = this->ironTintTimer[2]; /*0x7bf0df*/
      if ( (v4 & 1) != 0 ) /*0x7bf0e7*/
      {
        LOBYTE(v4) = v4 & 0xFE; /*0x7bf0e9*/
        this->ironTintTimer[2] = v4; /*0x7bf0eb*/
        v5 = (void (__cdecl *)(TechnoClass *, int, char *, int))this->ambientSoundController[3]; /*0x7bf0f1*/
        if ( v5 ) /*0x7bf0f6*/
          v5(this, 2, this->__pad_1C4, this->airstrikeTintTimer[2]); /*0x7bf109*/
      }
    }
  }
  sub_7BE940((int)this, v2); /*0x7bf112*/
  v6 = (int (__cdecl *)(TechnoClass *, int))this->ambientSoundController[4]; /*0x7bf117*/
  if ( v6 && v6(this, v2[7]) ) /*0x7bf123*/
    return -2; /*0x7bf12d*/
  else
    return -1; /*0x7bf135*/
}



// ==== 0x007BF140  ObjectClass::method_7BF140  this=ObjectClass  sig=csp ====
int __thiscall sub_7BF140(TechnoClass *this)
{
  int result; // eax
  int *v3; // edi

  result = AudioStream::ProcessStream((int)this); /*0x7bf143*/
  if ( result == -1 ) /*0x7bf14b*/
  {
    sub_7BEFE0((int)this); /*0x7bf150*/
    v3 = (int *)this->ironTintTimer[1]; /*0x7bf155*/
    sub_7BE940((int)this, v3); /*0x7bf15f*/
    *((_DWORD *)this + 439) = v3; /*0x7bf164*/
    if ( (this->ironTintTimer[2] & 8) == 0 ) /*0x7bf172*/
      this->ironTintTimer[1] = v3[3]; /*0x7bf177*/
    return -1; /*0x7bf17d*/
  }
  return result; /*0x7bf181*/
}



// ==== 0x007BF190  ObjectClass::method_7BF190  this=ObjectClass  sig=csp ====
int __thiscall sub_7BF190(TechnoClass *this)
{
  _DWORD *v2; // edi
  void (__cdecl *v3)(TechnoClass *, int, _DWORD, _DWORD); // eax
  int v4; // eax
  void (__cdecl *v5)(TechnoClass *, int, char *, int); // eax
  int (__cdecl *v6)(TechnoClass *, _DWORD); // eax

  v2 = (_DWORD *)*((_DWORD *)this + 439); /*0x7bf194*/
  if ( (v2[5] & 4) != 0 || (this->ironTintTimer[2] & 1) != 0 ) /*0x7bf1a9*/
  {
    if ( (v2[5] & 4) != 0 ) /*0x7bf1ad*/
    {
      v3 = (void (__cdecl *)(TechnoClass *, int, _DWORD, _DWORD))this->ambientSoundController[3]; /*0x7bf1af*/
      if ( v3 ) /*0x7bf1b4*/
        v3(this, 2, v2[2], v2[10]); /*0x7bf1bd*/
    }
    else
    {
      v4 = this->ironTintTimer[2]; /*0x7bf1bf*/
      if ( (v4 & 1) != 0 ) /*0x7bf1c7*/
      {
        LOBYTE(v4) = v4 & 0xFE; /*0x7bf1c9*/
        this->ironTintTimer[2] = v4; /*0x7bf1cb*/
        v5 = (void (__cdecl *)(TechnoClass *, int, char *, int))this->ambientSoundController[3]; /*0x7bf1d1*/
        if ( v5 ) /*0x7bf1d6*/
          v5(this, 2, this->__pad_1C4, this->airstrikeTintTimer[2]); /*0x7bf1e9*/
      }
    }
  }
  v6 = (int (__cdecl *)(TechnoClass *, _DWORD))this->ambientSoundController[4]; /*0x7bf1ee*/
  if ( v6 && v6(this, v2[7]) ) /*0x7bf1fa*/
    return -2; /*0x7bf204*/
  else
    return -1; /*0x7bf20c*/
}



// ==== 0x007BF220  nullsub_49  this=-  sig=ida-proto ====
void nullsub_49()
{
  ; /*0x7bf220*/
}



// ==== 0x007BF230  ?underflow_?$basic_streambuf_DU?$char_traits_D_std___std__MAEHXZ_7  this=-  sig=ida-proto ====
int _underflow___basic_streambuf_DU__char_traits_D_std___std__MAEHXZ_7()
{
  return -1; /*0x7bf233*/
}



// ==== 0x007BF240  sub_7BF240  this=-  sig=ida-proto ====
int __cdecl sub_7BF240(int a1, int a2, char *DstBuf, int MaxCharCount)
{
  int result; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax

  result = 0; /*0x7bf24a*/
  v5 = *(_DWORD *)(a1 + 184); /*0x7bf24d*/
  switch ( a2 ) /*0x7bf25c*/
  {
    case 1: /*0x7bf25c*/
    case 2: /*0x7bf25c*/
      return 0;
    case 3: /*0x7bf25c*/
      result = _open(DstBuf, 0x8000); /*0x7bf26d*/
      if ( result != -1 ) /*0x7bf278*/
      {
        *(_DWORD *)(a1 + 184) = result; /*0x7bf27e*/
        return 0; /*0x7bf285*/
      }
      return result; /*0x7bf288*/
    case 4: /*0x7bf25c*/
      _close(*(_DWORD *)(a1 + 184)); /*0x7bf365*/
      return 0; /*0x7bf36d*/
    case 5: /*0x7bf25c*/
      v6 = MaxCharCount; /*0x7bf289*/
      return _read(v5, DstBuf, MaxCharCount) != v6; /*0x7bf2a7*/
    case 6: /*0x7bf25c*/
      return 1; /*0x7bf2af*/
    case 7: /*0x7bf25c*/
      v7 = _lseek(v5, MaxCharCount, (int)DstBuf); /*0x7bf2ba*/
      return v7 == -1; /*0x7bf2ba*/
    case 8: /*0x7bf25c*/
      if ( MaxCharCount <= 0 ) /*0x7bf2c2*/
      {
        result = _lseek(v5, MaxCharCount, (int)DstBuf) == -1; /*0x7bf317*/
        if ( !result ) /*0x7bf31b*/
        {
          result = _read(v5, &MaxCharCount, 1u) != 1; /*0x7bf332*/
          if ( !result ) /*0x7bf334*/
          {
            v7 = _lseek(v5, -1, 1); /*0x7bf33b*/
            return v7 == -1; /*0x7bf340*/
          }
        }
      }
      else
      {
        result = _lseek(v5, MaxCharCount - 1, (int)DstBuf) == -1; /*0x7bf2dc*/
        if ( !result ) /*0x7bf2e0*/
          return _read(v5, &MaxCharCount, 1u) != 1; /*0x7bf2fc*/
      }
      return result;
    case 9: /*0x7bf25c*/
      *(_DWORD *)DstBuf = _filelength(*(_DWORD *)(a1 + 184)); /*0x7bf35d*/
      return 0; /*0x7bf363*/
    default:
      return result;
  }
}



// ==== 0x007BF3A0  sub_7BF3A0  this=-  sig=ida-proto ====
int __cdecl sub_7BF3A0(_DWORD *a1, int a2, void *a3, signed int a4)
{
  int result; // eax
  int v5; // edi
  int v6; // esi

  result = 0; /*0x7bf3a8*/
  switch ( a2 ) /*0x7bf3b6*/
  {
    case 1: /*0x7bf3b6*/
    case 2: /*0x7bf3b6*/
    case 3: /*0x7bf3b6*/
    case 4: /*0x7bf3b6*/
    case 9: /*0x7bf3b6*/
      return 0;
    case 5: /*0x7bf3b6*/
      v5 = a1[449]; /*0x7bf3bd*/
      if ( v5 + a4 > a1[448] ) /*0x7bf3d2*/
        return 1; /*0x7bf3d2*/
      qmemcpy(a3, (const void *)(v5 + a1[445]), a4); /*0x7bf3e8*/
      a1[449] += a4; /*0x7bf3fd*/
      return 0; /*0x7bf404*/
    case 6: /*0x7bf3b6*/
      return 1;
    case 7: /*0x7bf3b6*/
    case 8: /*0x7bf3b6*/
      if ( !a3 ) /*0x7bf40c*/
      {
        v6 = a1[447]; /*0x7bf428*/
        if ( a4 >= v6 ) /*0x7bf434*/
        {
          a1[449] = a4 - v6; /*0x7bf439*/
          return result; /*0x7bf440*/
        }
        return 1; /*0x7bf434*/
      }
      if ( a3 != (void *)1 ) /*0x7bf40f*/
        return 1; /*0x7bf441*/
      a1[449] += a4; /*0x7bf41d*/
      return 0;
    default:
      return result;
  }
}



// ==== 0x007BF470  FillAudioStreamBuffer  this=DSurface  sig=ida-proto ====
int __fastcall AudioStream_FillBuffer(int a1, int a2)
{
  int v3; // ebx
  char v4; // al
  int v5; // ecx
  int v6; // edx
  int v7; // ebp
  int v8; // eax
  int v9; // edi
  int v10; // eax
  _DWORD *v11; // ecx
  int v12; // edi
  int (__cdecl *v13)(int, int, int, int); // eax
  int result; // eax
  int v15; // eax
  int v16; // eax
  unsigned __int16 *v17; // edi
  int v18; // ecx
  char v19; // [esp+13h] [ebp-19h]
  int v20; // [esp+14h] [ebp-18h]
  _DWORD *i; // [esp+18h] [ebp-14h]
  int v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+20h] [ebp-Ch] BYREF
  int v24; // [esp+24h] [ebp-8h]
  int v25; // [esp+28h] [ebp-4h]

  v24 = a2; /*0x7bf478*/
  v3 = 0; /*0x7bf47c*/
  v4 = *(_BYTE *)(a1 + 132); /*0x7bf47e*/
  v5 = *(_DWORD *)(a1 + 1892); /*0x7bf484*/
  v6 = *(_DWORD *)(a1 + 384); /*0x7bf48a*/
  v7 = 0; /*0x7bf490*/
  v25 = 0; /*0x7bf495*/
  v22 = v5; /*0x7bf499*/
  v20 = v6; /*0x7bf49d*/
  v19 = 0; /*0x7bf4a1*/
  if ( (v4 & 0x20) != 0 && (*(_BYTE *)(a1 + 340) & 4) != 0 ) /*0x7bf4b3*/
  {
    v8 = *(_DWORD *)(a1 + 288); /*0x7bf4b9*/
    if ( v8 >= 0 ) /*0x7bf4c1*/
    {
      if ( v6 < *(_DWORD *)(a1 + 16) ) /*0x7bf4ca*/
        v7 = 2 * (*(_DWORD *)(v5 + 4 * v6) & 0xFFFFFFF); /*0x7bf4d5*/
      if ( v6 == *(_DWORD *)(a1 + 296) && v8 != *(_DWORD *)(a1 + 1808) ) /*0x7bf4e9*/
      {
        if ( v6 != *(_DWORD *)(a1 + 1800) ) /*0x7bf4f5*/
        {
          *(_DWORD *)(a1 + 1788) = v7; /*0x7bf4f7*/
          *(_DWORD *)(a1 + 1792) = 0; /*0x7bf4fd*/
          *(_DWORD *)(a1 + 1796) = 0; /*0x7bf503*/
        }
        *(_DWORD *)(a1 + 1808) = *(_DWORD *)(a1 + 288); /*0x7bf50f*/
        *(_DWORD *)(a1 + 1800) = *(_DWORD *)(a1 + 296); /*0x7bf51b*/
        *(_DWORD *)(a1 + 1804) = -1; /*0x7bf521*/
        v9 = *(_DWORD *)(a1 + 296); /*0x7bf52b*/
        v10 = *(_DWORD *)(a1 + 300); /*0x7bf531*/
        if ( v9 <= v10 ) /*0x7bf539*/
        {
          v11 = (_DWORD *)(v5 + 4 * v9); /*0x7bf53f*/
          for ( i = v11; ; v11 = i ) /*0x7bf542*/
          {
            if ( v9 >= *(_DWORD *)(a1 + 16) - 1 ) /*0x7bf552*/
            {
              if ( (*(int (__cdecl **)(int, int, int *, _DWORD))(a1 + 64))(a1, 9, &v23, 0) ) /*0x7bf579*/
                break; /*0x7bf581*/
              v10 = *(_DWORD *)(a1 + 300); /*0x7bf583*/
              v3 += v23 - 2 * (*(_DWORD *)(v22 + 4 * v10) & 0xFFFFFFF); /*0x7bf59e*/
            }
            else
            {
              v3 += 2 * (v11[1] & 0xFFFFFFF) - 2 * (*v11 & 0xFFFFFFF); /*0x7bf56b*/
            }
            if ( v3 >= *(_DWORD *)(a1 + 1784) ) /*0x7bf5a6*/
              break; /*0x7bf5a6*/
            ++v9; /*0x7bf5ac*/
            ++i; /*0x7bf5b2*/
            if ( v9 > v10 ) /*0x7bf5b6*/
              goto LABEL_21; /*0x7bf5b6*/
          }
          *(_DWORD *)(a1 + 1804) = v9 - 1; /*0x7bf5ba*/
LABEL_21:
          v6 = v20; /*0x7bf5c1*/
        }
        if ( v3 < *(_DWORD *)(a1 + 1784) && *(_DWORD *)(a1 + 1804) == -1 ) /*0x7bf5d4*/
          *(_DWORD *)(a1 + 1804) = *(_DWORD *)(a1 + 300); /*0x7bf5dc*/
        v5 = v22; /*0x7bf5e2*/
      }
      if ( v6 >= *(_DWORD *)(a1 + 1800) && v6 <= *(_DWORD *)(a1 + 1804) ) /*0x7bf5f8*/
      {
        if ( v7 != *(_DWORD *)(a1 + 1788) + *(_DWORD *)(a1 + 1792) ) /*0x7bf60e*/
          goto LABEL_40; /*0x7bf60e*/
        if ( v6 >= *(_DWORD *)(a1 + 16) - 1 ) /*0x7bf61a*/
        {
          if ( (*(int (__cdecl **)(int, int, int *, _DWORD))(a1 + 64))(a1, 9, &v23, 0) ) /*0x7bf636*/
            goto LABEL_39; /*0x7bf63e*/
          v6 = v20; /*0x7bf644*/
          v12 = v23 - v7; /*0x7bf648*/
        }
        else
        {
          v12 = 2 * (*(_DWORD *)(v5 + 4 * v6 + 4) & 0xFFFFFFF) - v7; /*0x7bf628*/
        }
        if ( v12 <= 0 ) /*0x7bf64c*/
          goto LABEL_40; /*0x7bf64c*/
        v13 = *(int (__cdecl **)(int, int, int, int))(a1 + 64); /*0x7bf64e*/
        if ( v13 != sub_7BF3A0 ) /*0x7bf656*/
          v13(a1, 7, 0, v7); /*0x7bf65e*/
        if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))( /*0x7bf676*/
               a1,
               5,
               *(_DWORD *)(a1 + 1780) + *(_DWORD *)(a1 + 1796),
               v12) )
        {
          return -4; /*0x7bf68c*/
        }
        *(_DWORD *)(a1 + 1792) += v12; /*0x7bf68d*/
LABEL_39:
        v6 = v20; /*0x7bf693*/
LABEL_40:
        v15 = *(_DWORD *)(a1 + 1788); /*0x7bf697*/
        if ( v7 < v15 + *(_DWORD *)(a1 + 1792) ) /*0x7bf6a7*/
        {
          v19 = 1; /*0x7bf6ab*/
          *(_DWORD *)(a1 + 1796) = v7 - v15; /*0x7bf6b0*/
          v25 = *(_DWORD *)(a1 + 64); /*0x7bf6b9*/
          *(_DWORD *)(a1 + 64) = sub_7BF3A0; /*0x7bf6bd*/
        }
      }
    }
  }
  if ( !v6 ) /*0x7bf6c6*/
  {
LABEL_49:
    if ( (v24 & 0x20) == 0 ) /*0x7bf702*/
      *(_DWORD *)(a1 + 360) = *(_DWORD *)(a1 + 356); /*0x7bf70a*/
    goto LABEL_51; /*0x7bf70a*/
  }
  v16 = *(unsigned __int16 *)(a1 + 1812); /*0x7bf6ca*/
  if ( (_WORD)v16 && (*(_BYTE *)(a1 + 1814) & 3) != 0 ) /*0x7bf6dc*/
  {
    v17 = *(unsigned __int16 **)(a1 + 1820); /*0x7bf6de*/
    v18 = 0; /*0x7bf6e4*/
    while ( v6 != *v17 ) /*0x7bf6f1*/
    {
      ++v18; /*0x7bf6f3*/
      v17 += 2; /*0x7bf6f4*/
      if ( v18 >= v16 ) /*0x7bf6f9*/
        goto LABEL_51; /*0x7bf6f9*/
    }
    goto LABEL_49; /*0x7bf6f1*/
  }
LABEL_51:
  result = DSP_AudioMixBuffers(a1, v24); /*0x7bf710*/
  if ( v19 ) /*0x7bf721*/
    *(_DWORD *)(a1 + 64) = v25; /*0x7bf727*/
  return result; /*0x7bf680*/
}



// ==== 0x007BF740  DSP_AudioMixBuffers  this=DSurface  sig=ida-proto ====
int __fastcall DSP_AudioMixBuffers(int a1, int a2)
{
  int v3; // eax
  _DWORD *v4; // edi
  int v5; // ecx
  int v6; // esi
  int v7; // ebx
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int result; // eax
  int v13; // eax
  unsigned __int16 *v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  _DWORD *v18; // edx
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  _DWORD *v28; // ebx
  unsigned int v29; // eax
  int v30; // ecx
  _DWORD *v31; // esi
  int v32; // edi
  int v33; // eax
  int v34; // eax
  int v35; // eax
  bool v36; // zf
  int v37; // eax
  unsigned int v38; // esi
  int v39; // ebx
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  unsigned int v47; // eax
  __int16 v48; // cx
  __int16 v49; // ax
  _DWORD *v50; // esi
  int v51; // ea... [30368 chars total]


