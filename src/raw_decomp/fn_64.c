// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x006403A0  PowerClass::getDrain  this=PowerClass  sig=csp ====
char __thiscall PowerClass::_vt34(void *this)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-1Ch] BYREF
  int v4; // [esp+8h] [ebp-18h]
  int v5; // [esp+Ch] [ebp-14h]
  int v6; // [esp+10h] [ebp-10h]
  int v7; // [esp+14h] [ebp-Ch]
  int v8; // [esp+18h] [ebp-8h]
  char v9; // [esp+1Ch] [ebp-4h]

  RadarClass::Destru_vt34((int)this); /*0x6403a3*/
  v1 = 0; /*0x6403ae*/
  if ( MEMORY[0x887368] ) /*0x6403b2*/
  {
    v4 = 0; /*0x6403bf*/
    v5 = 0; /*0x6403c3*/
    v6 = 0; /*0x6403c7*/
    v7 = 0; /*0x6403cb*/
    v9 = 0; /*0x6403cf*/
    v3 = 999; /*0x6403d3*/
    v8 = 0; /*0x6403db*/
    if ( !*((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6403df*/
      v1 = 5; /*0x6403e9*/
    v4 = v1 + MEMORY[0x886F90]; /*0x6403fb*/
    v5 = MEMORY[0x886F94] + 69; /*0x640417*/
    v6 = 8; /*0x64041b*/
    v7 = MEMORY[0xB0B504]; /*0x640423*/
    HashTable::Remove((int *)MEMORY[0x887368], 999); /*0x640427*/
    LOBYTE(v1) = CommandClass::AddAction(MEMORY[0x887368], (int)&v3); /*0x640437*/
  }
  return v1; /*0x64043d*/
}


// ==== 0x00640450  PowerClass::getAvailable  this=PowerClass  sig=csp ====
wchar_t *__thiscall PowerClass::_vt33(_DWORD *this, int a2)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v4; // [esp-8h] [ebp-8h]
  int v5; // [esp-4h] [ebp-4h]

  if ( a2 != 999 ) /*0x640459*/
    return RadarClass::Destru_vt33(this, a2); /*0x64049b*/
  v5 = *((_DWORD *)HouseClass_Player + 5354); /*0x64046c*/
  v4 = (const wchar_t *)*((_DWORD *)HouseClass_Player + 5353); /*0x64046d*/
  StringCSF = GetStringCSF(MEMORY[0x836DA8], 0, MEMORY[0x836DB8], 670); /*0x64047f*/
  swprintf(&MEMORY[0xAC4D30], (const size_t)StringCSF, v4, v5); /*0x64048a*/
  return &MEMORY[0xAC4D30]; /*0x640497*/
}


// ==== 0x006404B0  PowerClass::Initialize  this=PowerClass  sig=csp ====
PowerClass *__thiscall PowerClass::Initialize(_DWORD *Block, char a2)
{
  RadarClass::Destruct(Block); /*0x6404b3*/
  if ( (a2 & 1) != 0 ) /*0x6404bd*/
    __3_YAXPAX_Z(Block); /*0x6404c0*/
  return (PowerClass *)Block; /*0x6404ca*/
}


// ==== 0x006404D0  sub_6404D0  this=-  sig=ida-proto ====
int sub_6404D0()
{
  MEMORY[0xAC4E98] = 0; /*0x6404d2*/
  MEMORY[0xAC4E9C] = 0; /*0x6404d7*/
  MEMORY[0xAC4EA0] = 0; /*0x6404dc*/
  MEMORY[0xAC4EA4] = 0; /*0x6404e1*/
  return 0; /*0x6404e6*/
}


// ==== 0x006404F0  sub_6404F0  this=-  sig=ida-proto ====
void sub_6404F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6404fc*/
  MEMORY[0xAC4EB0] = Math::Sqrt(v0 + v0); /*0x64050e*/
}


// ==== 0x00640520  sub_640520  this=-  sig=ida-proto ====
void sub_640520()
{
  MEMORY[0xAC4F00] = MEMORY[0xAC4EB0] / 60.0; /*0x64052c*/
}


// ==== 0x00640540  sub_640540  this=-  sig=ida-proto ====
void sub_640540()
{
  MEMORY[0xAC4EE8] = 1.0 / MEMORY[0xAC4F00]; /*0x64054c*/
}


// ==== 0x00640560  sub_640560  this=-  sig=ida-proto ====
void sub_640560()
{
  MEMORY[0xAC4EE0] = 0.0174532925199433 * 45.0; /*0x64056c*/
}


// ==== 0x00640580  sub_640580  this=-  sig=ida-proto ====
void sub_640580()
{
  MEMORY[0xAC4EB8] = 0.0174532925199433 * 60.0; /*0x64058c*/
}


// ==== 0x006405A0  sub_6405A0  this=-  sig=ida-proto ====
void sub_6405A0()
{
  MEMORY[0xAC4E88] = 0.0174532925199433 * 90.0; /*0x6405ac*/
}


// ==== 0x006405C0  sub_6405C0  this=-  sig=ida-proto ====
__int64 sub_6405C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC4E88] - MEMORY[0xAC4EB8]); /*0x6405d2*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC4EB0] * 0.5); /*0x6405e6*/
  MEMORY[0xAC4F08] = result; /*0x6405eb*/
  return result; /*0x6405f0*/
}


// ==== 0x00640600  sub_640600  this=-  sig=ida-proto ====
void sub_640600()
{
  MEMORY[0xAC4EC0] = Math::ArcTan((double)MEMORY[0xAC4F08] * 0.00390625); /*0x640617*/
}


// ==== 0x00640630  sub_640630  this=-  sig=ida-proto ====
void sub_640630()
{
  MEMORY[0xAC4ED8] = Math::ArcTan((double)(2 * MEMORY[0xAC4F08]) / MEMORY[0xAC4EB0]); /*0x640652*/
}


// ==== 0x00640660  sub_640660  this=-  sig=ida-proto ====
__int64 sub_640660()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC4F08]) + 0.5); /*0x64067b*/
  MEMORY[0xAC4EFC] = result; /*0x640680*/
  return result; /*0x640686*/
}


// ==== 0x00640690  sub_640690  this=-  sig=ida-proto ====
int sub_640690()
{
  MEMORY[0xAC4EA8] = 0; /*0x640692*/
  MEMORY[0xAC4EAA] = 0; /*0x640698*/
  return 0; /*0x64069e*/
}


// ==== 0x006406A0  sub_6406A0  this=-  sig=ida-proto ====
int sub_6406A0()
{
  MEMORY[0xAC4EC8] = 0; /*0x6406a2*/
  MEMORY[0xAC4ECC] = 0; /*0x6406a7*/
  MEMORY[0xAC4ED0] = 0; /*0x6406ac*/
  return 0; /*0x6406b1*/
}


// ==== 0x006406C0  sub_6406C0  this=-  sig=ida-proto ====
int sub_6406C0()
{
  MEMORY[0xAC4EF8] = 0; /*0x6406c5*/
  MEMORY[0xAC4EF0] = 128; /*0x6406cf*/
  MEMORY[0xAC4EF4] = 128; /*0x6406d4*/
  return 128; /*0x6406d9*/
}


// ==== 0x006406E0  ObjectClass::unknown_libname_27  this=ObjectClass  sig=csp ====
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_27(_DWORD *this)
{
  *this = 0; /*0x6406e2*/
  return this; /*0x6406e8*/
}


// ==== 0x006406F0  ComPtr::Dtor  this=IUnknown  sig=csp ====
int __thiscall ComPtr_Dtor(_DWORD *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = (int (__thiscall ***)(_DWORD, int))*this; /*0x6406f3*/
  if ( v2 ) /*0x6406f7*/
  {
    result = (**v2)(v2, 1); /*0x6406fd*/
    *this = 0; /*0x6406ff*/
  }
  return result; /*0x640705*/
}


// ==== 0x00640710  Skirmish::RenderPreview  this=IUnknown  sig=csp ====
int __thiscall Skirmish::RenderPreview(_DWORD *this, SkirmishDialog *aP1)
{
  int result; // eax
  HWND DlgItem; // eax
  int v5; // ecx
  int *v6; // eax
  int v7; // ecx
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // esi
  int v13; // eax
  int BuildingAnimByName; // eax
  ScenarioClass *v15; // ecx
  int v16; // ebp
  int v17; // esi
  int v18; // edi
  int v19; // edx
  int v20; // ebx
  int *v21; // eax
  _DWORD *v22; // eax
  int v23; // [esp+24h] [ebp-80h] BYREF
  int v24[2]; // [esp+28h] [ebp-7Ch] BYREF
  ConvertClass *v25; // [esp+30h] [ebp-74h]
  _DWORD v26[4]; // [esp+34h] [ebp-70h] BYREF
  int v27[4]; // [esp+44h] [ebp-60h] BYREF
  LONG left; // [esp+54h] [ebp-50h] BYREF
  LONG top; // [esp+58h] [ebp-4Ch]
  int v30; // [esp+5Ch] [ebp-48h]
  int v31; // [esp+60h] [ebp-44h]
  int v32; // [esp+64h] [ebp-40h]
  int v33; // [esp+68h] [ebp-3Ch]
  int v34; // [esp+6Ch] [ebp-38h] BYREF
  int v35; // [esp+70h] [ebp-34h]
  struct tagRECT Rect; // [esp+74h] [ebp-30h] BYREF
  char v37[16]; // [esp+84h] [ebp-20h] BYREF
  char v38[16]; // [esp+94h] [ebp-10h] BYREF

  result = ValidateRect((HWND)aP1, 0); /*0x640726*/
  if ( *this ) /*0x64072c*/
  {
    DlgItem = GetDlgItem((HWND)aP1, 1128); /*0x64073f*/
    ScreenDialogToClient(DlgItem, &Rect); /*0x640749*/
    left = Rect.left; /*0x64075a*/
    top = Rect.top; /*0x640764*/
    v5 = *this; /*0x64076a*/
    v31 = Rect.bottom - Rect.top; /*0x64076c*/
    v30 = Rect.right - Rect.left; /*0x640770*/
    v6 = (int *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v5 + 120))(v5, v26); /*0x64077b*/
    v27[0] = *v6; /*0x640784*/
    v27[1] = v6[1]; /*0x64078f*/
    v7 = v6[2]; /*0x640793*/
    v8 = v6[3]; /*0x640796*/
    v24[0] = 1000 * v31 / v8; /*0x6407a8*/
    v9 = 1000 * v30 / v7; /*0x6407ba*/
    if ( v24[0] < v9 ) /*0x6407c2*/
      v9 = 1000 * v31 / v8; /*0x6407c4*/
    v10 = v9 * v7; /*0x6407c6*/
    v24[0] = v9; /*0x6407c9*/
    v11 = v9 * v8; /*0x6407d4*/
    v25 = (ConvertClass *)(v10 / 2000); /*0x6407e7*/
    v32 = left + v30 / 2 - v10 / 2000; /*0x6407fc*/
    v33 = top + v31 / 2 - v11 / 2000; /*0x640822*/
    v34 = v10 / 1000; /*0x640842*/
    v35 = v11 / 1000; /*0x640856*/
    (*(void (__thiscall **)(_DWORD, LONG *, _DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412] + 20))( /*0x64085d*/
      *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
      &left,
      0);
    v12 = **(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412]; /*0x64086c*/
    v13 = (*(int (__thiscall **)(_DWORD, int *, _DWORD, _DWORD))(*(_DWORD *)*this + 120))(*this, v27, 0, 0); /*0x640875*/
    (*(void (__thiscall **)(_DWORD, int *, _DWORD, int))(v12 + 8))( /*0x640887*/
      *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
      &v34,
      *this,
      v13);
    HIBYTE(v23) = 0; /*0x640896*/
    if ( (*(_BYTE *)(&g_MatrixTransformState + 6176) & 1) == 0 ) /*0x64089b*/
    {
      *((_BYTE *)&g_MatrixTransformState + 24704) |= 1u; /*0x6408a8*/
      *(&g_MatrixTransformState + 6172) = (CoordStruct *)LoadFileSHP(&stru_830620.__pad_579C[4136], (bool *)&v23 + 3); /*0x6408b2*/
    }
    v25 = VtableStub_72E280(); /*0x6408c3*/
    BuildingAnimByName = FindBuildingAnimByName(stru_820524, 1); /*0x6408c7*/
    v15 = MEMORY[0xA8B230]; /*0x6408cc*/
    v16 = BuildingAnimByName; /*0x6408d2*/
    result = MEMORY[0xA8B230]->numberStartingPoints; /*0x6408d4*/
    if ( result > 0 && result <= 8 ) /*0x6408e5*/
    {
      v17 = 0; /*0x6408eb*/
      do /*0x640a29*/
      {
        v18 = v32 + v34 * (1000 * (v15->startingPoints[2 * v17] - v15->startX) / v15->width) / 1000; /*0x640944*/
        v19 = v33 + v35 * (1000 * (v15->startingPoints[2 * v17 + 1] - v15->startY) / v15->height) / 1000; /*0x64097a*/
        v20 = v19; /*0x64097e*/
        if ( *(&g_MatrixTransformState + 6172) ) /*0x640980*/
        {
          v24[0] = v18 - 9; /*0x640994*/
          v24[1] = v19 - 6; /*0x6409a3*/
          v21 = (int *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412] + 120))( /*0x6409b6*/
                         *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
                         v37);
          DrawToSurfaceSHP( /*0x6409d2*/
            *(int *)&MEMORY[0x87F8E4].__pad_5568[9412],
            (int)v25,
            (int)*(&g_MatrixTransformState + 6172),
            0,
            v24,
            v21,
            1024,
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
        ++v17; /*0x6409e3*/
        v26[0] = v18 - 2; /*0x6409ef*/
        v26[1] = v20 - 6; /*0x6409f3*/
        v22 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412] + 120))( /*0x640a01*/
                          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
                          v38);
        result = (int)TextRenderer::DrawText( /*0x640a15*/
                        v27,
                        (size_t)g_Str_Fmt_PctD,
                        *(int *)&MEMORY[0x87F8E4].__pad_5568[9412],
                        v22,
                        (int)v26,
                        v16,
                        8,
                        25);
        v15 = MEMORY[0xA8B230]; /*0x640a1a*/
      }
      while ( v17 < MEMORY[0xA8B230]->numberStartingPoints ); /*0x640a29*/
    }
  }
  return result; /*0x640a2f*/
}


// ==== 0x00640A40  Tactical::Radar_Render  this=AbstractClass  sig=csp ====
int *__userpurge Tactical_Radar_Render@<eax>(
        int **a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5,
        char a6,
        int a7,
        int *a8)
{
  int *result; // eax
  int v9; // ebp
  int v10; // ebx
  int i; // eax
  _DWORD *v12; // esi
  int v13; // esi
  int v14; // edi
  int v15; // edx
  int v16; // esi
  int j; // edi
  int v18; // ebx
  int v19; // esi
  int v20; // edi
  int v21; // esi
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // esi
  int *v27; // ecx
  int *v28; // eax
  int v29; // edi
  int v30; // ebx
  int v31; // ebp
  char *v32; // eax
  char *v33; // esi
  _DWORD *v34; // edi
  int v35; // ebx
  int v36; // eax
  int v37; // ebx
  int v38; // ebp
  int v39; // edi
  int v40; // edx
  int v41; // edx
  int v42; // eax
  int v43; // eax
  int *v44; // edi
  int v45; // ebx
  int v46; // eax
  int v50; // [esp+2Ch] [ebp-88h]
  int k; // [esp+2Ch] [ebp-88h]
  int v53; // [esp+38h] [ebp-7Ch] BYREF
  _DWORD *v54; // [esp+3Ch] [ebp-78h]
  int v55; // [esp+40h] [ebp-74h] BYREF
  int v56; // [esp+44h] [ebp-70h]
  int v57; // [esp+48h] [ebp-6Ch] BYREF
  int v58; // [esp+4Ch] [ebp-68h]
  int v59; // [esp+50h] [ebp-64h]
  int v60; // [esp+54h] [ebp-60h] BYREF
  int v61; // [esp+58h] [ebp-5Ch] BYREF
  int v62; // [esp+5Ch] [ebp-58h]
  int v63; // [esp+60h] [ebp-54h] BYREF
  int v64; // [esp+64h] [ebp-50h] BYREF
  int v65; // [esp+68h] [ebp-4Ch]
  int v66; // [esp+6Ch] [ebp-48h] BYREF
  _DWORD v67[3]; // [esp+70h] [ebp-44h] BYREF
  int v68; // [esp+7Ch] [ebp-38h]
  int v69; // [esp+80h] [ebp-34h] BYREF
  int v70; // [esp+84h] [ebp-30h] BYREF
  int v71; // [esp+88h] [ebp-2Ch]
  int v72; // [esp+8Ch] [ebp-28h] BYREF
  _DWORD v73[2]; // [esp+90h] [ebp-24h] BYREF
  int v74; // [esp+98h] [ebp-1Ch] BYREF
  int v75; // [esp+9Ch] [ebp-18h]
  _DWORD v76[3]; // [esp+A0h] [ebp-14h] BYREF
  _BYTE v77[8]; // [esp+ACh] [ebp-8h] BYREF

  result = *a1; /*0x640a46*/
  if ( *a1 ) /*0x640a46*/
  {
    LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x640a5d*/
    v9 = 10000; /*0x640a62*/
    v62 = 10000; /*0x640a6c*/
    v56 = 10000; /*0x640a70*/
    v50 = 0; /*0x640a74*/
    v10 = 0; /*0x640a7c*/
    for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x640a85*/
    {
      v12 = (_DWORD *)(i + 36); /*0x640a8b*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea(i + 36, 0) ) /*0x640a96*/
      {
        v54 = (_DWORD *)*v12; /*0x640aa7*/
        v13 = (SHIWORD(v54) << 8) + 128; /*0x640ab9*/
        v14 = ((__int16)v54 << 8) + 128; /*0x640ac3*/
        Coord::Subtract(&v64, v14, v13, 0); /*0x640acb*/
        Coord::Subtract(&v69, v14, v13, 0); /*0x640ad8*/
        IsoCoord::ToScreenOffset(v69, v65, &v53, &v57); /*0x640af7*/
        v15 = v57 / 30; /*0x640b2a*/
        if ( v53 / 60 < v9 ) /*0x640b2e*/
        {
          v62 = v53 / 60; /*0x640b30*/
          v9 = v53 / 60; /*0x640b34*/
        }
        if ( v53 / 60 > v50 ) /*0x640b3a*/
          v50 = v53 / 60; /*0x640b3c*/
        if ( v15 < v56 ) /*0x640b44*/
          v56 = v57 / 30; /*0x640b46*/
        if ( v15 > v10 ) /*0x640b4c*/
          v10 = v57 / 30; /*0x640b4e*/
      }
    }
    v16 = 0; /*0x640b62*/
    for ( j = 0; j < 8; ++j ) /*0x640b64*/
    {
      if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid(j) ) /*0x640b71*/
        ++v16; /*0x640b7a*/
    }
    v18 = 0; /*0x640b81*/
    v57 = j; /*0x640b83*/
    for ( k = v16; v18 < v16; ++v18 ) /*0x640b8d*/
    {
      if ( (!v18 || v18 <= j) && (unsigned __int8)ScenarioClass::Is_Waypoint_Valid(v18) ) /*0x640ba6*/
      {
        v54 = *(_DWORD **)ScenarioClass::Get_Waypoint_Location(&v63, v18); /*0x640bc8*/
        v19 = (SHIWORD(v54) << 8) + 128; /*0x640bde*/
        v20 = ((__int16)v54 << 8) + 128; /*0x640be4*/
        Coord::Subtract(&v69, v20, v19, 0); /*0x640bec*/
        Coord::Subtract(&v64, v20, v19, 0); /*0x640bf9*/
        IsoCoord::ToScreenOffset(v64, v70, &v53, &v55); /*0x640c18*/
        v74 = 4; /*0x640c61*/
        v73[1] = v55 / 30 - v56 - 1; /*0x640c65*/
        v75 = 4; /*0x640c6d*/
        v73[0] = 2 * (v53 / 60 - v9) - 1; /*0x640c74*/
        v21 = **a1; /*0x640c8a*/
        v22 = (*(int (__thiscall **)(int *, _DWORD *, _DWORD *, _DWORD))(v21 + 120))(*a1, v76, v73, 0); /*0x640cc4*/
        (*(void (__thiscall **)(_DWORD, int))(v21 + 16))(*v54, v22); /*0x640cce*/
        v16 = k; /*0x640cd1*/
        j = v57; /*0x640cd5*/
      }
    }
    if ( MEMORY[0x8A00A4] == 800 ) /*0x640cef*/
    {
      v23 = 499; /*0x640cf1*/
      v24 = 379; /*0x640cf6*/
      v25 = 216; /*0x640cfb*/
      v26 = 166; /*0x640d00*/
    }
    else if ( MEMORY[0x8A00A4] == 1024 ) /*0x640d0d*/
    {
      v23 = 570; /*0x640d0f*/
      v24 = 424; /*0x640d14*/
      v25 = 300; /*0x640d19*/
      v26 = 260; /*0x640d1e*/
    }
    else
    {
      v25 = 200; /*0x640d25*/
      v23 = 385; /*0x640d2a*/
      v24 = 270; /*0x640d2f*/
      v26 = 200; /*0x640d34*/
    }
    v59 = v24; /*0x640d36*/
    v58 = v23; /*0x640d3e*/
    v60 = v25; /*0x640d42*/
    v27 = *a1; /*0x640d46*/
    v61 = v26; /*0x640d48*/
    v28 = (int *)(*(int (__thiscall **)(int *, _DWORD *, int, int, int))(*v27 + 120))(v27, v76, a4, a3, a2); /*0x640d56*/
    v75 = *v28; /*0x640d5f*/
    v76[0] = v28[1]; /*0x640d6a*/
    v29 = v28[2]; /*0x640d6e*/
    v30 = v28[3]; /*0x640d71*/
    v31 = 1000 * v64 / v30; /*0x640d83*/
    if ( v31 >= 1000 * v63 / v29 ) /*0x640d96*/
      v31 = 1000 * v63 / v29; /*0x640d98*/
    v68 = (v63 - v31 * v29 / 1000) / 2; /*0x640dd6*/
    v69 = (v64 - v31 * v30 / 1000) / 2; /*0x640ddf*/
    v70 = v63 - 2 * v68; /*0x640dea*/
    v71 = v64 - 2 * v69; /*0x640dee*/
    v32 = (char *)__2_YAPAXI_Z(0x24u); /*0x640df2*/
    if ( v32 ) /*0x640dfc*/
      v33 = DSurface::Construct(v32, v63, v64, 1, 0); /*0x640e13*/
    else
      v33 = 0; /*0x640e17*/
    v34 = (_DWORD *)v55; /*0x640e19*/
    v35 = *(_DWORD *)v33; /*0x640e1d*/
    v36 = (*(int (__thiscall **)(_DWORD, _BYTE *, _DWORD, _DWORD))(**(_DWORD **)v55 + 120))(*(_DWORD *)v55, v77, 0, 0); /*0x640e2f*/
    (*(void (__thiscall **)(char *, int *, _DWORD, int))(v35 + 8))(v33, &v70, *v34, v36); /*0x640e3d*/
    HIBYTE(v54) = 0; /*0x640e49*/
    v55 = LoadFileSHP(MEMORY[0x836DF4]); /*0x640e53*/
    v37 = 0; /*0x640e5b*/
    v56 = 0; /*0x640e5f*/
    if ( v53 > 0 ) /*0x640e63*/
    {
      v38 = 4480; /*0x640e6f*/
      v57 = 4480; /*0x640e74*/
      do /*0x64106b*/
      {
        if ( v38 == 4480 || v37 <= v60 ) /*0x640e84*/
        {
          if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid(v37) ) /*0x640e8b*/
          {
            v58 = *(_DWORD *)ScenarioClass::Get_Waypoint_Location(&a6, v37); /*0x640eb0*/
            v39 = (SHIWORD(v58) << 8) + 128; /*0x640ec2*/
            Coord::Subtract(&v72, ((__int16)v58 << 8) + 128, v39, 0); /*0x640ed4*/
            IsoCoord::ToScreenOffset(v72, v39, &v74, &v66); /*0x640eef*/
            v40 = *(_DWORD *)((char *)MEMORY[0xA8B230] + v38); /*0x640f3a*/
            if ( v40 != -1 ) /*0x640f40*/
            {
              v41 = *(_DWORD *)(*((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(*((_DWORD *)HouseClass_Array + v40) + 90196)) /*0x640f66*/
                              + 780);
              v58 = v41; /*0x640f6c*/
              if ( v55 ) /*0x640f70*/
              {
                if ( v41 ) /*0x640f78*/
                {
                  v67[0] = v70 * (1000000 * (v74 / 60 - v65) / *((_DWORD *)MEMORY[0xA8B230] + 1101)) / 1000000 + v68 - 3; /*0x640fd6*/
                  v42 = *(_DWORD *)v33; /*0x641015*/
                  v67[1] = v71 * (1000000 * (v66 / 30 - v59) / *((_DWORD *)MEMORY[0xA8B230] + 1102)) / 1000000 + v69 - 2; /*0x641025*/
                  v43 = (*(int (__thiscall **)(char *, _BYTE *))(v42 + 120))(v33, v77); /*0x641029*/
                  DrawToSurfaceSHP(v55, 0, v67, v43, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x64103e*/
                  v37 = v56; /*0x641049*/
                }
              }
            }
          }
        }
        ++v37; /*0x64105d*/
        v38 = v57 + 4; /*0x64105e*/
        v56 = v37; /*0x641063*/
        v57 += 4; /*0x641067*/
      }
      while ( v37 < v53 ); /*0x64106b*/
    }
    v44 = a8; /*0x641071*/
    (*(void (__thiscall **)(int *, int *, _DWORD))(*a8 + 20))(a8, &v61, 0); /*0x641083*/
    v45 = *v44; /*0x641088*/
    v46 = (*(int (__thiscall **)(char *, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)v33 + 120))(v33, v77, 0, 0); /*0x641098*/
    result = (int *)(*(int (__thiscall **)(int *, int *, char *, int))(v45 + 8))(v44, &v60, v33, v46); /*0x6410a4*/
    if ( v33 ) /*0x6410ac*/
      return (int *)(**(int (__thiscall ***)(char *, int))v33)(v33, 1); /*0x6410b4*/
  }
  return result; /*0x6410b6*/
}


// ==== 0x00641140  MiniMap::Render  this=AbstractClass  sig=csp ====
int __thiscall MiniMap_Render(char **this)
{
  char **v1; // edi
  int v2; // ebx
  int v3; // esi
  int v4; // ebp
  int Bit; // eax
  int *v6; // esi
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // esi
  int v10; // ebp
  char *v11; // eax
  char *v12; // eax
  int v13; // ebp
  unsigned int v14; // edi
  _DWORD *v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // ebx
  _BYTE *v19; // edi
  __int16 *RadarColor; // eax
  int v21; // esi
  unsigned __int8 v22; // al
  int v23; // ebp
  int v24; // edi
  int v25; // ebp
  char **v26; // esi
  int v27; // ebx
  char *v28; // ecx
  int v29; // eax
  char *v30; // ecx
  int v31; // edi
  int v32; // eax
  int v33; // esi
  int v34; // esi
  int v35; // eax
  int v37; // [esp+10h] [ebp-B8h]
  int v38; // [esp+10h] [ebp-B8h]
  char v39; // [esp+2Fh] [ebp-99h]
  int v40; // [esp+30h] [ebp-98h] BYREF
  int v41; // [esp+34h] [ebp-94h]
  int v42; // [esp+38h] [ebp-90h] BYREF
  int v43; // [esp+3Ch] [ebp-8Ch] BYREF
  int v44; // [esp+40h] [ebp-88h]
  char **v45; // [esp+44h] [ebp-84h]
  int v46; // [esp+48h] [ebp-80h] BYREF
  __int16 v47; // [esp+4Ch] [ebp-7Ch]
  unsigned __int8 v48; // [esp+4Eh] [ebp-7Ah]
  int v49; // [esp+54h] [ebp-74h] BYREF
  int v50; // [esp+58h] [ebp-70h] BYREF
  int v51; // [esp+5Ch] [ebp-6Ch] BYREF
  _DWORD v52[2]; // [esp+60h] [ebp-68h] BYREF
  _DWORD v53[2]; // [esp+68h] [ebp-60h] BYREF
  _DWORD v54[4]; // [esp+70h] [ebp-58h] BYREF
  int v55; // [esp+80h] [ebp-48h] BYREF
  int v56; // [esp+84h] [ebp-44h]
  _DWORD v57[3]; // [esp+8Ch] [ebp-3Ch] BYREF
  int v58; // [esp+98h] [ebp-30h]
  _BYTE v59[16]; // [esp+A8h] [ebp-20h] BYREF
  char v60[16]; // [esp+B8h] [ebp-10h] BYREF

  v1 = this; /*0x64114a*/
  v45 = this; /*0x641151*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x641155*/
  v2 = 10000; /*0x64115a*/
  v3 = 0; /*0x64115f*/
  v46 = 10000; /*0x641166*/
  v44 = 10000; /*0x64116a*/
  v4 = 0; /*0x64116e*/
  v41 = 0; /*0x641170*/
  Bit = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x641174*/
  if ( Bit ) /*0x64117b*/
  {
    do /*0x641256*/
    {
      v6 = (int *)(Bit + 36); /*0x641181*/
      if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)(Bit + 36), 0) ) /*0x64118c*/
      {
        v40 = *v6; /*0x64119d*/
        Coord::Subtract(&v55, ((__int16)v40 << 8) + 128, (SHIWORD(v40) << 8) + 128, 0); /*0x6411c1*/
        v37 = v56; /*0x6411d4*/
        v7 = (_DWORD *)CoordStruct::Set2(&v40, 0); /*0x6411e3*/
        IsoCoord::ToScreenOffset(*v7, v37, &v42, &v51); /*0x6411f1*/
        v8 = v51 / 30; /*0x641224*/
        if ( v42 / 60 < v2 ) /*0x641228*/
        {
          v46 = v42 / 60; /*0x64122a*/
          v2 = v42 / 60; /*0x64122e*/
        }
        if ( v42 / 60 > v4 ) /*0x641232*/
          v4 = v42 / 60; /*0x641234*/
        if ( v8 < v44 ) /*0x64123a*/
          v44 = v51 / 30; /*0x64123c*/
        if ( v8 > v41 ) /*0x641244*/
          v41 = v51 / 30; /*0x641246*/
      }
      Bit = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x64124f*/
    }
    while ( Bit ); /*0x641256*/
    v3 = v41; /*0x64125c*/
  }
  v9 = v3 - v44; /*0x641266*/
  v10 = 2 * (v4 - v2); /*0x64126a*/
  if ( *v1 ) /*0x641268*/
    (**(void (__thiscall ***)(char *, int))*v1)(*v1, 1); /*0x641274*/
  v11 = (char *)__2_YAPAXI_Z(0x24u); /*0x641278*/
  if ( v11 ) /*0x641282*/
    v12 = DSurface::Construct(v11, v10, v9, 1, 0); /*0x64128c*/
  else
    v12 = 0; /*0x641293*/
  *v1 = v12; /*0x641295*/
  (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v12 + 24))(v12, 0); /*0x64129d*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x6412a5*/
  v13 = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x6412b6*/
  (*(void (__thiscall **)(char *, _DWORD, _DWORD))(*(_DWORD *)*v1 + 92))(*v1, 0, 0); /*0x6412c0*/
  for ( ; v13; v13 = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x6412c5*/
  {
    v42 = *(_DWORD *)(v13 + 36); /*0x6412d0*/
    if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v42, 0) ) /*0x6412de*/
    {
      HIBYTE(v43) = 0; /*0x6412fc*/
      CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v42); /*0x641301*/
      v14 = GetBridgeCellColor((char *)&v43 + 3, 0); /*0x641312*/
      v41 = v14; /*0x641335*/
      v40 = v42; /*0x641339*/
      Coord::Subtract(v57, ((__int16)v42 << 8) + 128, (SHIWORD(v42) << 8) + 128, 0); /*0x64133d*/
      v38 = v57[1]; /*0x641350*/
      v15 = (_DWORD *)CoordStruct::Set2(&v40, 0); /*0x64135c*/
      IsoCoord::ToScreenOffset(*v15, v38, &v49, &v50); /*0x64136a*/
      v39 = 0; /*0x641385*/
      v16 = *(_DWORD *)(v13 + 68); /*0x6413aa*/
      v17 = 0; /*0x6413b1*/
      v56 = v50 / 30 - v44; /*0x6413b6*/
      v58 = 2 * (v49 / 60 - v2); /*0x6413ba*/
      v18 = 100; /*0x6413be*/
      if ( v16 == -1 ) /*0x6413c3*/
      {
        v25 = *(_DWORD *)(v13 + 228); /*0x6415e1*/
        if ( v25 && (*(int (__stdcall **)(int))(*(_DWORD *)(v25 + 4) + 12))(v25 + 4) == 36 ) /*0x6415fc*/
        {
          v39 = 1; /*0x641610*/
          v18 = 75; /*0x64161b*/
          v17 = (*(unsigned __int8 *)(*(_DWORD *)(v25 + 200) + 668) >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x641662*/
              | (*(unsigned __int8 *)(*(_DWORD *)(v25 + 200) + 669) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
              | (*(unsigned __int8 *)(*(_DWORD *)(v25 + 200) + 670) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
        }
      }
      else
      {
        v19 = (_BYTE *)*((_DWORD *)MEMORY[0xA83D84] + v16); /*0x6413d3*/
        RadarColor = (__int16 *)OverlayTypeClass::GetRadarColor(&v51, *(unsigned __int8 *)(v13 + 286)); /*0x6413e2*/
        v47 = *RadarColor; /*0x6413ea*/
        v48 = *((_BYTE *)RadarColor + 2); /*0x6413f2*/
        if ( v19[681] ) /*0x6413f6*/
        {
          v21 = (unsigned __int8)v19[694] >> MEMORY[0x8A0DD4]; /*0x641425*/
          v40 = (unsigned __int8)MEMORY[0x8A0DD4]; /*0x641427*/
          v17 = ((unsigned __int8)v19[696] >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x64146e*/
              | ((unsigned __int8)v19[695] >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
              | (v21 << MEMORY[0x8A0DD0]);
          if ( v17 <= 5 ) /*0x641473*/
            v17 = (v48 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x6414b7*/
                | (HIBYTE(v47) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                | ((unsigned __int8)v47 >> v40 << MEMORY[0x8A0DD0]);
          v22 = *(_BYTE *)(v13 + 286); /*0x6414b9*/
          v18 = 75; /*0x6414bf*/
          v39 = 1; /*0x6414c6*/
          if ( v22 >= 2u ) /*0x6414cb*/
          {
            if ( v22 < 5u ) /*0x6414d6*/
              v18 = 50; /*0x6414d8*/
          }
          else
          {
            v18 = 25; /*0x6414cd*/
          }
          v41 = (unsigned __int16)BlendMinimapPixel(v18); /*0x6414ee*/
        }
        else
        {
          v40 = (unsigned __int8)MEMORY[0x8A0DD4]; /*0x641541*/
          v17 = (v48 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x641582*/
              | (HIBYTE(v47) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
              | ((unsigned __int8)v47 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
          if ( v17 <= 5 ) /*0x641587*/
            v17 = ((unsigned __int8)v19[696] >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x6415cd*/
                | ((unsigned __int8)v19[695] >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                | ((unsigned __int8)v19[694] >> v40 << MEMORY[0x8A0DD0]);
          if ( v17 ) /*0x6415d1*/
            v39 = 1; /*0x6415d7*/
        }
        v14 = v41; /*0x6414f2*/
      }
      v23 = (unsigned __int16)v14; /*0x6414fc*/
      v24 = HIWORD(v14); /*0x641502*/
      if ( v39 ) /*0x641507*/
      {
        if ( v18 == 100 ) /*0x641510*/
        {
          v23 = v17; /*0x641516*/
          v24 = v17; /*0x641518*/
        }
        else
        {
          v23 = (unsigned __int16)BlendMinimapPixel(v18); /*0x64167d*/
          v24 = (unsigned __int16)BlendMinimapPixel(v18); /*0x641689*/
        }
      }
      if ( !v24 || !v23 ) /*0x641691*/
      {
        Debug::Log(MEMORY[0x836E00], (__int16)v42, SHIWORD(v42)); /*0x6416a4*/
        v24 = (128 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x6416ed*/
            | (128 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
            | (128 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
        v23 = v24; /*0x6416ef*/
      }
      v26 = v45; /*0x6416f5*/
      v27 = v56; /*0x6416f9*/
      v52[0] = v58; /*0x6416fd*/
      v28 = *v45; /*0x641701*/
      v52[1] = v56; /*0x641703*/
      v40 = *(_DWORD *)v28; /*0x641711*/
      v29 = (*(int (__thiscall **)(char *, char *))(v40 + 120))(v28, v60); /*0x641715*/
      (*(void (__thiscall **)(char *, _DWORD *, int, int))(v40 + 136))(*v26, v52, v24, v29); /*0x641725*/
      v30 = *v26; /*0x64172f*/
      v53[1] = v27; /*0x641732*/
      v53[0] = v58 + 1; /*0x641736*/
      v31 = *(_DWORD *)v30; /*0x64173a*/
      v32 = (*(int (__thiscall **)(char *, _BYTE *))(*(_DWORD *)v30 + 120))(v30, v59); /*0x641744*/
      (*(void (__thiscall **)(char *, _DWORD *, int, int))(v31 + 136))(*v26, v53, v23, v32); /*0x641750*/
      v2 = v46; /*0x641756*/
      v1 = v26; /*0x64175a*/
    }
  }
  v33 = 0; /*0x641770*/
  v45 = 0; /*0x641777*/
  do /*0x64188e*/
  {
    if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid(v33) ) /*0x641782*/
    {
      v50 = *(_DWORD *)ScenarioClass::Get_Waypoint_Location(&v40, v33); /*0x6417a6*/
      IsoCoord::ToScreenOffset(((__int16)v50 << 8) + 128, (SHIWORD(v50) << 8) + 128, &v49, &v46); /*0x6417d1*/
      v54[2] = 4; /*0x6417ec*/
      v54[0] = 2 * (v49 / 60 - v2) - 1; /*0x641816*/
      v54[1] = v46 / 30 - v44 - 1; /*0x641821*/
      v54[3] = 4; /*0x64182f*/
      v34 = *(_DWORD *)*v1; /*0x64183f*/
      v35 = (*(int (__thiscall **)(char *, _BYTE *, _DWORD *, int))(v34 + 120))( /*0x641874*/
              *v1,
              v59,
              v54,
              240 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
      (*(void (__thiscall **)(char *, int))(v34 + 16))(*v1, v35); /*0x64187a*/
      v33 = (int)v45; /*0x64187d*/
    }
    v45 = (char **)++v33; /*0x64188a*/
  }
  while ( v33 < 8 ); /*0x64188e*/
  return (*(int (__thiscall **)(char *))(*(_DWORD *)*v1 + 96))(*v1); /*0x64189b*/
}


// ==== 0x006418B0  MiniMap::SavePreviewToINI  this=MiniMap  sig=csp ====
bool __thiscall MiniMap::SavePreviewToINI(char **this, char *a2)
{
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // eax
  char *v10; // ecx
  int i; // edi
  char *v12; // ecx
  unsigned __int16 v13; // ax
  signed int v14; // ebx
  int v15; // eax
  char v17; // [esp+21h] [ebp-5Dh]
  __int16 v18; // [esp+22h] [ebp-5Ch]
  __int16 Src; // [esp+26h] [ebp-58h] BYREF
  char v20; // [esp+28h] [ebp-56h]
  _DWORD v21[4]; // [esp+2Ah] [ebp-54h] BYREF
  int v22[3]; // [esp+3Ah] [ebp-44h] BYREF
  _DWORD v23[4]; // [esp+46h] [ebp-38h] BYREF
  int v24[10]; // [esp+56h] [ebp-28h] BYREF

  v17 = 0; /*0x6418b9*/
  if ( !*this ) /*0x6418be*/
  {
    MiniMap::Render(this); /*0x6418c3*/
    v17 = 1; /*0x6418c8*/
  }
  INIClass::ClearSection((int)a2, (int)MEMORY[0x836DDC], 0); /*0x6418db*/
  v3 = (_DWORD *)(*(int (__thiscall **)(char *, _DWORD *))(*(_DWORD *)*this + 120))(*this, v21); /*0x6418e9*/
  INIClass::SetRect(a2, (unsigned __int8 *)MEMORY[0x836DDC], g_INI_Key_Size, v3); /*0x6418fb*/
  v4 = 0; /*0x641906*/
  v5 = 0; /*0x641908*/
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 128))(MEMORY[0x887310]); /*0x641918*/
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 124))(MEMORY[0x887310]) * v6; /*0x64191f*/
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 112))(MEMORY[0x887310]) * v7; /*0x64192d*/
  v9 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 92))(MEMORY[0x887310], 0, 0); /*0x64193a*/
  v22[1] = 0; /*0x641943*/
  v22[2] = 0; /*0x641947*/
  v22[0] = (int)&vt_Pipe; /*0x64194b*/
  Buffer::Init(v23, v9, v8); /*0x641953*/
  v23[3] = 0; /*0x641962*/
  v22[0] = (int)&vt_BufferPipe; /*0x641966*/
  LZOPipe::Constructor(v24, 0, 0x2000); /*0x64196e*/
  Pipe::SetDelegate(v24, (int)v22); /*0x64197c*/
  v10 = *this; /*0x641981*/
  Src = 0; /*0x641985*/
  v20 = 0; /*0x64198f*/
  (*(void (__thiscall **)(char *, _DWORD, _DWORD))(*(_DWORD *)v10 + 92))(v10, 0, 0); /*0x64199a*/
  if ( (*(int (__thiscall **)(char *))(*(_DWORD *)*this + 128))(*this) > 0 ) /*0x6419a9*/
  {
    do /*0x641a53*/
    {
      for ( i = 0; i < (*(int (__thiscall **)(char *))(*(_DWORD *)*this + 124))(*this); ++i ) /*0x6419ba*/
      {
        v12 = *this; /*0x6419c0*/
        v21[0] = i; /*0x6419c2*/
        v21[1] = v5; /*0x6419c6*/
        v13 = (*(int (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v12 + 40))(v12, v21); /*0x6419d1*/
        LOBYTE(v18) = (unsigned __int8)(v13 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x6419f1*/
        HIBYTE(v18) = (unsigned __int8)(v13 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x641a12*/
        Src = v18; /*0x641a22*/
        v20 = (unsigned __int8)(v13 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x641a2b*/
        v4 += Compression::Read((int)v24, (int)&Src, 3); /*0x641a36*/
      }
      ++v5; /*0x641a48*/
    }
    while ( v5 < (*(int (__thiscall **)(char *))(*(_DWORD *)*this + 128))(*this) ); /*0x641a53*/
  }
  (*(void (__thiscall **)(char *))(*(_DWORD *)*this + 96))(*this); /*0x641a5d*/
  v14 = (*(int (__thiscall **)(int *))(v24[0] + 4))(v24) + v4; /*0x641a6f*/
  INIClass::ClearSection((int)a2, (int)MEMORY[0x836DD0], 0); /*0x641a7b*/
  if ( v14 > 0 ) /*0x641a82*/
  {
    v15 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 92))(MEMORY[0x887310], 0, 0); /*0x641a93*/
    INIClass::ReadBase64Data(a2, (unsigned __int8 *)MEMORY[0x836DD0], v15, v14); /*0x641aa0*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 96))(MEMORY[0x887310]); /*0x641aad*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 96))(MEMORY[0x887310]); /*0x641ab8*/
  if ( v17 ) /*0x641ac1*/
  {
    if ( *this ) /*0x641ac3*/
      (**(void (__thiscall ***)(char *, int))*this)(*this, 1); /*0x641acd*/
    *this = 0; /*0x641acf*/
  }
  LZOPipe::Destructor(v24); /*0x641ad9*/
  Vector::Clear((int)v23); /*0x641ae2*/
  Pipe::Dtor(v22); /*0x641aeb*/
  return v14 > 0; /*0x641af0*/
}


// ==== 0x00641B00  ObjectClass::LoadMapPreviewImage  this=AbstractTypeClass  sig=csp ====
char __thiscall LoadMapPreviewImage(char **this, _DWORD *a2)
{
  unsigned int *v3; // eax
  int v4; // edi
  int v5; // ebp
  char *v6; // eax
  char *v7; // eax
  int v8; // edi
  int v9; // edi
  size_t v10; // edi
  int v11; // eax
  int Base64DataINIClass; // edi
  int v13; // eax
  char *v14; // ecx
  unsigned int v15; // edi
  char *v16; // eax
  __int16 v18; // [esp+20h] [ebp-5Ch] BYREF
  unsigned __int8 v19; // [esp+22h] [ebp-5Ah]
  unsigned int v20; // [esp+28h] [ebp-54h] BYREF
  unsigned int v21; // [esp+2Ch] [ebp-50h]
  int v22[3]; // [esp+38h] [ebp-44h] BYREF
  _DWORD v23[4]; // [esp+44h] [ebp-38h] BYREF
  int v24[10]; // [esp+54h] [ebp-28h] BYREF
  unsigned int v25; // [esp+80h] [ebp+4h]

  INIClass::ResetSection(a2); /*0x641b0f*/
  if ( *this ) /*0x641b14*/
  {
    (**(void (__thiscall ***)(char *, int))*this)(*this, 1); /*0x641b20*/
    *this = 0; /*0x641b22*/
  }
  v3 = INIClass::ParseValue( /*0x641b3c*/
         (int)a2,
         (unsigned int *)v22,
         (unsigned __int8 *)MEMORY[0x836DDC],
         (unsigned __int8 *)g_INI_Key_Size,
         (unsigned int *)&MEMORY[0x87F8E4]);
  v20 = *v3; /*0x641b45*/
  v21 = v3[1]; /*0x641b4c*/
  v4 = v3[2]; /*0x641b50*/
  v5 = v3[3]; /*0x641b53*/
  v6 = (char *)__2_YAPAXI_Z(0x24u); /*0x641b56*/
  if ( v6 ) /*0x641b60*/
    v7 = DSurface::Construct(v6, v4, v5, 1, 0); /*0x641b69*/
  else
    v7 = 0; /*0x641b70*/
  *this = v7; /*0x641b72*/
  (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v7 + 24))(v7, 0); /*0x641b79*/
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 128))(MEMORY[0x887310]); /*0x641b90*/
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 124))(MEMORY[0x887310]) * v8; /*0x641b97*/
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 112))(MEMORY[0x887310]) * v9; /*0x641ba5*/
  v11 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 92))(MEMORY[0x887310], 0, 0); /*0x641bb4*/
  if ( !v11 ) /*0x641bb9*/
    return 1; /*0x641bb9*/
  Base64DataINIClass = INIClass::GetBase64Data(a2, MEMORY[0x836DD0], v11, v10); /*0x641bd0*/
  if ( Base64DataINIClass <= 0 ) /*0x641bd4*/
  {
LABEL_14:
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 96))(MEMORY[0x887310]); /*0x641d4e*/
    return 1; /*0x641d62*/
  }
  v13 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 92))(MEMORY[0x887310], 0, 0); /*0x641be6*/
  v22[1] = 0; /*0x641bef*/
  v22[2] = 0; /*0x641bf3*/
  v22[0] = (int)&vt_Straw; /*0x641bf7*/
  Buffer::Init(v23, v13, Base64DataINIClass); /*0x641bff*/
  v23[3] = 0; /*0x641c0f*/
  v22[0] = (int)&vt_BufferStraw; /*0x641c13*/
  LZOStraw::Constructor(v24, 1, 0x2000); /*0x641c1b*/
  Delegate::Set(v24, (int)v22); /*0x641c29*/
  v14 = *this; /*0x641c2e*/
  v18 = 0; /*0x641c30*/
  v19 = 0; /*0x641c38*/
  (*(void (__thiscall **)(char *, _DWORD, _DWORD))(*(_DWORD *)v14 + 92))(v14, 0, 0); /*0x641c42*/
  v25 = 0; /*0x641c47*/
  if ( (*(int (__thiscall **)(char *))(*(_DWORD *)*this + 128))(*this) <= 0 ) /*0x641c55*/
  {
LABEL_13:
    (*(void (__thiscall **)(char *))(*(_DWORD *)*this + 96))(*this); /*0x641d1f*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 96))(MEMORY[0x887310]); /*0x641d30*/
    LZOStraw::Destructor(v24); /*0x641d37*/
    Vector::Clear((int)v23); /*0x641d40*/
    Straw::Dtor(v22); /*0x641d49*/
    goto LABEL_14; /*0x641d49*/
  }
  while ( 1 ) /*0x641c5d*/
  {
    v15 = 0; /*0x641c5d*/
    if ( (*(int (__thiscall **)(char *))(*(_DWORD *)*this + 124))(*this) > 0 ) /*0x641c66*/
      break; /*0x641c66*/
LABEL_12:
    if ( (int)++v25 >= (*(int (__thiscall **)(char *))(*(_DWORD *)*this + 128))(*this) ) /*0x641d19*/
      goto LABEL_13; /*0x641d19*/
  }
  while ( LCW::Decompress((int)v24, (char *)&v18, 3) == 3 ) /*0x641c7f*/
  {
    v21 = v25; /*0x641c91*/
    v16 = *this; /*0x641caf*/
    v20 = v15; /*0x641cb1*/
    (*(void (__thiscall **)(char *, unsigned int *, int))(*(_DWORD *)v16 + 36))( /*0x641cef*/
      v16,
      &v20,
      ((unsigned __int8)v18 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0])
    | (HIBYTE(v18) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
    | (v19 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]));
    if ( (int)++v15 >= (*(int (__thiscall **)(char *))(*(_DWORD *)*this + 124))(*this) ) /*0x641cfc*/
      goto LABEL_12; /*0x641cfc*/
  }
  (*(void (__thiscall **)(char *))(*(_DWORD *)*this + 96))(*this); /*0x641d69*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 96))(MEMORY[0x887310]); /*0x641d74*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 96))(MEMORY[0x887310]); /*0x641d7f*/
  LZOStraw::Destructor(v24); /*0x641d86*/
  Vector::Clear((int)v23); /*0x641d8f*/
  Straw::Dtor(v22); /*0x641d98*/
  return 0; /*0x641d59*/
}


// ==== 0x00641DB0  Surface::LoadToSurfaceSHP  this=AbstractClass  sig=csp ====
char __thiscall SHP_LoadToSurface(char **this, char *Source)
{
  _DWORD *v3; // esi
  char *v4; // ebx
  int v5; // eax
  char *v6; // eax
  int v8; // [esp+0h] [ebp-84h]
  _DWORD v9[22]; // [esp+18h] [ebp-6Ch] BYREF
  _BYTE v10[12]; // [esp+70h] [ebp-14h] BYREF
  int v11; // [esp+7Ch] [ebp-8h]

  CCFileClass::Construct(v9, Source); /*0x641dc0*/
  if ( !CCFileClass::Open(v9, 0) ) /*0x641dcb*/
    goto LABEL_11; /*0x641dcb*/
  if ( *this ) /*0x641dd8*/
  {
    (**(void (__thiscall ***)(char *, int))*this)(*this, 1); /*0x641de2*/
    *this = 0; /*0x641de4*/
  }
  v3 = DecodeFrameSHP((int)v9, 0, 0, 0); /*0x641df9*/
  if ( v3 && (*(int (__thiscall **)(_DWORD *))(*v3 + 124))(v3) && (*(int (__thiscall **)(_DWORD *))(*v3 + 128))(v3) ) /*0x641e16*/
  {
    v4 = (char *)__2_YAPAXI_Z(0x24u); /*0x641e2c*/
    if ( v4 ) /*0x641e33*/
    {
      v8 = (*(int (__thiscall **)(_DWORD *))(*v3 + 128))(v3); /*0x641e45*/
      v5 = (*(int (__thiscall **)(_DWORD *))(*v3 + 124))(v3); /*0x641e48*/
      v6 = DSurface::Construct(v4, v5, v8, 1, 0); /*0x641e4e*/
    }
    else
    {
      v6 = 0; /*0x641e55*/
    }
    *this = v6; /*0x641e57*/
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v6 + 24))(v6, 0); /*0x641e5f*/
    (*(void (__thiscall **)(char *, _DWORD *, _DWORD, int))(*(_DWORD *)*this + 4))(*this, v3, 0, 1); /*0x641e6b*/
    (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x641e74*/
    v9[0] = &vt_CCFileClass; /*0x641e7a*/
    v11 = 0; /*0x641e82*/
    Vector::Clear((int)v10); /*0x641e8a*/
    v9[0] = &off_7E1668; /*0x641e93*/
    BufferIOFileClass::Dtor(v9); /*0x641e9b*/
    return 1; /*0x641ea2*/
  }
  else
  {
LABEL_11:
    v9[0] = &vt_CCFileClass; /*0x641eaf*/
    v11 = 0; /*0x641eb7*/
    Vector::Clear((int)v10); /*0x641ebf*/
    v9[0] = &off_7E1668; /*0x641ec8*/
    BufferIOFileClass::Dtor(v9); /*0x641ed0*/
    return 0; /*0x641ed6*/
  }
}


// ==== 0x00641EE0  PreviewClass::ReadPreview  this=IUnknown  sig=csp ====
char __thiscall PreviewClass::ReadPreview(char **this, char *Source)
{
  int v2; // ebp
  void *v3; // esi
  signed int v4; // edi
  char *v5; // eax
  char *v6; // edi
  char MapPreviewImage; // [esp+13h] [ebp-13Dh]
  int v10[3]; // [esp+18h] [ebp-138h] BYREF
  _DWORD v11[4]; // [esp+24h] [ebp-12Ch] BYREF
  int v12[22]; // [esp+34h] [ebp-11Ch] BYREF
  _BYTE v13[12]; // [esp+8Ch] [ebp-C4h] BYREF
  int v14; // [esp+98h] [ebp-B8h]
  void *v15[16]; // [esp+A0h] [ebp-B0h] BYREF
  char v16; // [esp+E0h] [ebp-70h]
  void *v17[16]; // [esp+F8h] [ebp-58h] BYREF
  char v18; // [esp+138h] [ebp-18h]

  CCFileClass::Construct(v12, Source); /*0x641efa*/
  if ( CCFileClass::Open(v12, 0) && FileClass::Load(v12, 1) ) /*0x641f19*/
  {
    INIClass::INIClass(v15); /*0x641f2d*/
    v16 = 0; /*0x641f41*/
    v15[0] = &CCINIClass_Vtable; /*0x641f48*/
    CCINIClass::Load(v15, (int)v12, 1, 0); /*0x641f53*/
    INIClass::ResetSection(v15); /*0x641f5f*/
    PreviewClass::RenderMapPreview((int *)MEMORY[0xA8B230], v15); /*0x641f72*/
    v2 = 0; /*0x641f77*/
    v3 = 0; /*0x641f79*/
    while ( 1 ) /*0x641f7f*/
    {
      v2 += 25; /*0x641f7f*/
      v4 = v2 * CCFileClass::GetSize(v12) / 100; /*0x641f9f*/
      if ( v3 ) /*0x641fa1*/
        __3_YAXPAX_Z(v3); /*0x641fa4*/
      v3 = __2_YAPAXI_Z(v4 + 1); /*0x641fb5*/
      if ( !v3 ) /*0x641fbc*/
        goto LABEL_10; /*0x641fbc*/
      BufferIOFileClass::Seek(v12, 0, 0); /*0x641fc4*/
      CCFileClass::Read(v12, v3, v4); /*0x641fcf*/
      *((_BYTE *)v3 + v4) = 0; /*0x641fda*/
      v5 = strstr((const char *)v3, MEMORY[0x836E5C]); /*0x641fdd*/
      v6 = v5; /*0x641fe2*/
      if ( v5 ) /*0x641fe9*/
        break; /*0x641fe9*/
      if ( v2 >= 100 ) /*0x641fee*/
      {
        __3_YAXPAX_Z(v3); /*0x641ff1*/
LABEL_10:
        HashTable::DestroyHashTableINIClass(v15); /*0x641ff9*/
        goto LABEL_11; /*0x642000*/
      }
    }
    *v5 = 0; /*0x642047*/
    INIClass::INIClass(v17); /*0x642049*/
    v18 = 0; /*0x642055*/
    v17[0] = &CCINIClass_Vtable; /*0x64205e*/
    v10[1] = 0; /*0x642069*/
    v10[2] = 0; /*0x64206d*/
    Buffer::Init(v11, (int)v3, v6 - (_BYTE *)v3 - 1); /*0x642079*/
    v11[3] = 0; /*0x64208c*/
    v10[0] = (int)&vt_BufferStraw; /*0x642090*/
    CCINIClass::LoadAndVerifyDigest((int)v17, (int)v10, 0, 0); /*0x642098*/
    MapPreviewImage = LoadMapPreviewImage(this, v17); /*0x6420af*/
    __3_YAXPAX_Z(v3); /*0x6420b3*/
    Vector::Clear((int)v11); /*0x6420bf*/
    Straw::Dtor(v10); /*0x6420c8*/
    HashTable::DestroyHashTableINIClass(v17); /*0x6420d4*/
    HashTable::DestroyHashTableINIClass(v15); /*0x6420e0*/
    v12[0] = (int)&vt_CCFileClass; /*0x6420ec*/
    v14 = 0; /*0x6420f4*/
    Vector::Clear((int)v13); /*0x6420fb*/
    v12[0] = (int)&off_7E1668; /*0x642104*/
    BufferIOFileClass::Dtor(v12); /*0x64210c*/
    return MapPreviewImage; /*0x642111*/
  }
  else
  {
LABEL_11:
    v12[0] = (int)&vt_CCFileClass; /*0x642005*/
    v14 = 0; /*0x642014*/
    Vector::Clear((int)v13); /*0x64201b*/
    v12[0] = (int)&off_7E1668; /*0x642024*/
    BufferIOFileClass::Dtor(v12); /*0x64202c*/
    return 0; /*0x642034*/
  }
}


// ==== 0x00642130  Palette::Preview_Generate  this=IUnknown  sig=csp ====
int *__userpurge Palette::Preview_Generate@<eax>(int *a1@<ecx>, char a2@<sil>, int a3, AbstractClass **a4)
{
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  CCINIClass *v11; // ebx
  int v12; // eax
  int v13; // ebp
  unsigned __int16 Pixel; // ax
  int v15; // edi
  int v16; // ebx
  int v17; // esi
  int v18; // esi
  int v19; // eax
  int v20; // edi
  AbstractClass *v21; // eax
  int v22; // ecx
  int v23; // ebp
  int v24; // eax
  CCINIClass *v25; // esi
  int v26; // eax
  int v27; // ecx
  unsigned __int16 v28; // ax
  int v29; // ebp
  AbstractClass *v30; // edi
  int v31; // ecx
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rax
  XSurface *v35; // ecx
  int v36; // eax
  AbstractClass *v37; // ebx
  int v38; // ebp
  XSurface *v39; // eax
  int v41; // [esp+8h] [ebp-70h]
  AbstractClass *v42; // [esp+8h] [ebp-70h]
  int v43; // [esp+8h] [ebp-70h]
  int v44; // [esp+Ch] [ebp-6Ch]
  int v45; // [esp+Ch] [ebp-6Ch]
  AbstractClass *Block; // [esp+10h] [ebp-68h]
  AbstractClass *Blocka; // [esp+10h] [ebp-68h]
  CCINIClass *v48; // [esp+14h] [ebp-64h]
  XSurface *v49; // [esp+18h] [ebp-60h]
  XSurface *v50; // [esp+1Ch] [ebp-5Ch]
  int v51; // [esp+20h] [ebp-58h]
  XSurface *v52; // [esp+24h] [ebp-54h]
  _DWORD v53[2]; // [esp+2Ch] [ebp-4Ch] BYREF
  int v54; // [esp+34h] [ebp-44h] BYREF
  int v55[3]; // [esp+38h] [ebp-40h] BYREF
  int v56; // [esp+44h] [ebp-34h] BYREF
  int v57; // [esp+48h] [ebp-30h]
  int v58; // [esp+4Ch] [ebp-2Ch]
  int v59; // [esp+50h] [ebp-28h]
  int v60; // [esp+54h] [ebp-24h] BYREF
  char v61[4]; // [esp+58h] [ebp-20h] BYREF
  int v62; // [esp+5Ch] [ebp-1Ch]
  int v63; // [esp+60h] [ebp-18h]

  if ( !*a1 ) /*0x642139*/
    return 0; /*0x642146*/
  v6 = *a1; /*0x64214b*/
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 128))(v6); /*0x642153*/
  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 124))(v6, v7 / 2); /*0x642163*/
  DSurface::Construct(v61, (IUnknown *)(v8 / 2), 0, 0, a2); /*0x642170*/
  v58 = 0; /*0x642181*/
  v9 = *a1; /*0x642185*/
  v59 = v62; /*0x642187*/
  v57 = 0; /*0x64218b*/
  v60 = v63; /*0x64218f*/
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 120))(v9); /*0x64219c*/
  DSurface::BlitPart(&v60, (int)&v56, *a1, v10, (int)v55, 0); /*0x6421ac*/
  v11 = (CCINIClass *)__2_YAPAXI_Z(0x4000u); /*0x6421bb*/
  memset(v11, 0, 0x4000u); /*0x6421c6*/
  v48 = v11; /*0x6421cd*/
  Block = 0; /*0x6421d1*/
  DSurface::Lock(&v60, 0, 0); /*0x6421db*/
  v41 = 0; /*0x6421e4*/
  if ( v62 > 0 ) /*0x6421ea*/
  {
    v12 = *(_DWORD *)v61; /*0x6421f0*/
    do /*0x6422f7*/
    {
      v13 = 0; /*0x6421f4*/
      if ( v12 > 0 ) /*0x6421f8*/
      {
        do /*0x6422de*/
        {
          v54 = v13; /*0x64220b*/
          v55[0] = v41; /*0x64220f*/
          Pixel = XSurface::GetPixel(&v60, &v54); /*0x642213*/
          v53[0] = v13; /*0x64222c*/
          v15 = ((unsigned __int8)(Pixel >> MEMORY[0x89F690].__pad_14B0[656]) << MEMORY[0x89F690].__pad_14B0[660]) /*0x642248*/
              & 0xF0;
          v16 = ((unsigned __int8)(Pixel >> MEMORY[0x89F690].__pad_14B0[672]) << MEMORY[0x89F690].__pad_14B0[676]) /*0x64225c*/
              & 0xF0;
          v53[1] = v41; /*0x642268*/
          v17 = ((unsigned __int8)(Pixel >> MEMORY[0x89F690].__pad_14B0[664]) << MEMORY[0x89F690].__pad_14B0[668]) /*0x64227f*/
              & 0xF0;
          XSurface::SetPixel( /*0x6422b5*/
            &v60,
            v53,
            (v17 >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664])
          | (v16 >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
          | (v15 >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]));
          v18 = v16 | (16 * v15) | (v17 >> 4); /*0x6422c6*/
          v19 = *(_DWORD *)&v48->__pad_0[4 * v18]; /*0x6422c8*/
          if ( !v19 ) /*0x6422cd*/
            Block = (AbstractClass *)((char *)Block + 1); /*0x6422cf*/
          ++v13; /*0x6422d4*/
          *(_DWORD *)&v48->__pad_0[4 * v18] = v19 + 1; /*0x6422d5*/
          v12 = *(_DWORD *)v61; /*0x6422d8*/
        }
        while ( v13 < *(int *)v61 ); /*0x6422de*/
        v11 = v48; /*0x6422e4*/
      }
      ++v41; /*0x6422f3*/
    }
    while ( v41 < v62 ); /*0x6422f7*/
  }
  DSurface::Unlock(&v60); /*0x642301*/
  v20 = a3; /*0x642306*/
  v21 = (AbstractClass *)__2_YAPAXI_Z(2 * a3); /*0x642311*/
  Blocka = v21; /*0x642319*/
  v44 = 0; /*0x64231f*/
  if ( a3 > 0 ) /*0x642327*/
  {
    v42 = v21; /*0x642329*/
    do /*0x642370*/
    {
      v22 = -1; /*0x64232d*/
      v23 = 0; /*0x642330*/
      v24 = 0; /*0x642332*/
      v25 = v11; /*0x642334*/
      do /*0x642349*/
      {
        if ( *(_DWORD *)v25->__pad_0 > v23 ) /*0x64233a*/
        {
          v23 = *(_DWORD *)v25->__pad_0; /*0x64233c*/
          v22 = v24; /*0x64233e*/
        }
        ++v24; /*0x642340*/
        v25 = (CCINIClass *)((char *)v25 + 4); /*0x642341*/
      }
      while ( v24 < 4096 ); /*0x642349*/
      if ( v22 == -1 ) /*0x64234e*/
        break; /*0x64234e*/
      *(_DWORD *)&v11->__pad_0[4 * v22] = 0; /*0x642358*/
      *(_WORD *)v42->__pad_0 = v22; /*0x642360*/
      ++v44; /*0x642368*/
      v42 = (AbstractClass *)((char *)v42 + 2); /*0x64236c*/
    }
    while ( v44 < a3 ); /*0x642370*/
  }
  v52 = (XSurface *)__2_YAPAXI_Z(v62 * *(_DWORD *)v61); /*0x642384*/
  v50 = v52; /*0x642388*/
  DSurface::Lock(&v60, 0, 0); /*0x642396*/
  v43 = 0; /*0x64239f*/
  if ( v62 > 0 ) /*0x6423a9*/
  {
    v26 = *(_DWORD *)v61; /*0x6423af*/
    while ( 1 ) /*0x6423b3*/
    {
      v27 = 0; /*0x6423b3*/
      v51 = 0; /*0x6423b7*/
      if ( v26 > 0 ) /*0x6423bb*/
        break; /*0x6423bb*/
LABEL_37:
      if ( ++v43 >= v62 ) /*0x642529*/
        goto LABEL_38; /*0x642529*/
    }
    while ( 1 ) /*0x6423c1*/
    {
      v56 = v27; /*0x6423c1*/
      v57 = v43; /*0x6423cd*/
      v28 = XSurface::GetPixel(&v60, &v56); /*0x6423d6*/
      v29 = 0; /*0x6423ed*/
      v45 = -1; /*0x6423ef*/
      v49 = (XSurface *)0xFFFF; /*0x6423f7*/
      LOBYTE(v54) = (unsigned __int8)(v28 >> MEMORY[0x89F690].__pad_14B0[656]) << MEMORY[0x89F690].__pad_14B0[660]; /*0x642408*/
      BYTE1(v54) = (unsigned __int8)(v28 >> MEMORY[0x89F690].__pad_14B0[672]) << MEMORY[0x89F690].__pad_14B0[676]; /*0x642429*/
      BYTE2(v54) = (unsigned __int8)(v28 >> MEMORY[0x89F690].__pad_14B0[664]) << MEMORY[0x89F690].__pad_14B0[668]; /*0x642431*/
      if ( v20 > 0 ) /*0x642435*/
      {
        v30 = Blocka; /*0x642447*/
        v31 = (unsigned __int8)v54; /*0x642451*/
        v53[0] = BYTE1(v54); /*0x642460*/
        while ( 1 ) /*0x642490*/
        {
          v32 = 16 * (*(_WORD *)v30->__pad_0 & 0xF) - BYTE2(v54); /*0x642490*/
          v33 = (HIDWORD(v32) ^ v32) - HIDWORD(v32) + abs32(((*(unsigned __int16 *)v30->__pad_0 >> 4) & 0xF0) - v31); /*0x642499*/
          v34 = (*(_WORD *)v30->__pad_0 & 0xF0) - v53[0]; /*0x6424a4*/
          v35 = (XSurface *)((HIDWORD(v34) ^ v34) - HIDWORD(v34) + v33); /*0x6424a9*/
          if ( !v35 ) /*0x6424ab*/
            break; /*0x6424ab*/
          if ( (int)v35 < (int)v49 ) /*0x6424b1*/
          {
            v49 = v35; /*0x6424b3*/
            v45 = v29; /*0x6424b7*/
          }
          ++v29; /*0x6424c2*/
          v30 = (AbstractClass *)((char *)v30 + 2); /*0x6424c3*/
          if ( v29 >= a3 ) /*0x6424c8*/
          {
            v36 = v45; /*0x6424ca*/
            goto LABEL_31; /*0x6424ce*/
          }
          v31 = (unsigned __int8)v54; /*0x642466*/
        }
        v36 = v29; /*0x6424d0*/
LABEL_31:
        if ( v36 != -1 && v36 < 256 ) /*0x6424dc*/
        {
          v20 = a3; /*0x6424f3*/
          goto LABEL_36; /*0x6424f3*/
        }
        v20 = a3; /*0x6424de*/
      }
      LOBYTE(v36) = 0; /*0x6424ed*/
LABEL_36:
      v50->__pad_0[0] = v36; /*0x6424fa*/
      v26 = *(_DWORD *)v61; /*0x642500*/
      v50 = (XSurface *)((char *)v50 + 1); /*0x642505*/
      v27 = ++v51; /*0x64250d*/
      if ( v51 >= *(int *)v61 ) /*0x642514*/
        goto LABEL_37; /*0x642514*/
    }
  }
LABEL_38:
  DSurface::Unlock(&v60); /*0x64252f*/
  v37 = (AbstractClass *)(2 * v20 + 12 + v62 * *(_DWORD *)v61); /*0x642545*/
  v53[0] = 2 * v20 + 12; /*0x642547*/
  v38 = __2_YAPAXI_Z((size_t)v37); /*0x642551*/
  *(_DWORD *)v38 = *(_DWORD *)v61; /*0x64255b*/
  *(_DWORD *)(v38 + 4) = v62; /*0x642562*/
  *(_DWORD *)(v38 + 8) = v20; /*0x64256a*/
  v39 = (XSurface *)v53[0]; /*0x642570*/
  qmemcpy((void *)(v38 + 12), Blocka, 2 * v20); /*0x642577*/
  qmemcpy(&v39->__pad_0[v38], v52, v62 * *(_DWORD *)v61); /*0x642595*/
  __3_YAXPAX_Z(Blocka); /*0x6425a3*/
  __3_YAXPAX_Z(v52); /*0x6425ad*/
  __3_YAXPAX_Z(v48); /*0x6425b7*/
  *a4 = v37; /*0x6425c9*/
  Debug::Log(); /*0x6425cb*/
  DSurface::Destroy(&v60); /*0x6425d7*/
  return (int *)v38; /*0x64213f*/
}


// ==== 0x006425F0  ModemGame::RenderPaletteImage  this=ModemGame  sig=csp ====
int __thiscall ModemGame::RenderPaletteImage(char **this, CCINIClass *aP1)
{
  DSurface *v4; // ebx
  int *v5; // esi
  char *v6; // ecx
  char *v7; // eax
  DSurface *v8; // eax
  int result; // eax
  int v10; // edi
  int v11; // edx
  unsigned int v12; // eax
  char *v13; // ecx
  unsigned int v14; // esi
  int v15; // ebx
  int v16; // eax
  int v17; // [esp+18h] [ebp-28h]
  int v18; // [esp+1Ch] [ebp-24h]
  unsigned __int8 *i; // [esp+1Ch] [ebp-24h]
  int *v20; // [esp+20h] [ebp-20h]
  DSurface *v21; // [esp+24h] [ebp-1Ch]
  _DWORD v22[2]; // [esp+28h] [ebp-18h] BYREF
  char v23[16]; // [esp+30h] [ebp-10h] BYREF
  IUnknown *aP1a; // [esp+44h] [ebp+4h]

  v4 = (DSurface *)aP1->headNode[0]; /*0x6425fd*/
  v5 = &aP1->headNode[1]; /*0x642605*/
  aP1a = *(IUnknown **)aP1->__pad_0; /*0x642608*/
  v21 = v4; /*0x64260c*/
  v20 = v5; /*0x642612*/
  v18 = *v5; /*0x642616*/
  v6 = *this; /*0x64261a*/
  if ( v6 ) /*0x64261f*/
    (**(void (__thiscall ***)(char *, int))v6)(v6, 1); /*0x642625*/
  v7 = (char *)__2_YAPAXI_Z(0x24u); /*0x642629*/
  if ( v7 ) /*0x642633*/
    v8 = (DSurface *)DSurface::Construct(v7, aP1a, v4, (ObjectClass *)1, 0); /*0x642641*/
  else
    v8 = 0; /*0x642648*/
  *this = (char *)v8; /*0x64264a*/
  (*(void (__thiscall **)(DSurface *, _DWORD))(v8->field_0 + 24))(v8, 0); /*0x642653*/
  result = v18; /*0x642656*/
  v17 = 0; /*0x64265a*/
  for ( i = (unsigned __int8 *)&aP1->headNode[2] + 2 * v18; v17 < (int)v4; ++v17 ) /*0x64266c*/
  {
    v10 = 0; /*0x642676*/
    if ( (int)aP1a > 0 ) /*0x64267a*/
    {
      do /*0x642718*/
      {
        v22[0] = v10; /*0x642686*/
        v11 = *i++; /*0x64268a*/
        v12 = *((unsigned __int16 *)v5 + v11 + 2); /*0x64269c*/
        v13 = *this; /*0x6426eb*/
        v14 = ((int)(16 * (v12 & 0xF)) >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]) /*0x6426ee*/
            | ((unsigned __int8)(v12 & 0xF0) >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
            | (((v12 >> 4) & 0xF0) >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]);
        v22[1] = v17; /*0x6426f4*/
        v15 = *(_DWORD *)v13; /*0x6426f8*/
        v16 = (*(int (__thiscall **)(char *, char *))(*(_DWORD *)v13 + 120))(v13, v23); /*0x6426fa*/
        (*(void (__thiscall **)(char *, _DWORD *, unsigned int, int))(v15 + 136))(*this, v22, v14, v16); /*0x642707*/
        v5 = v20; /*0x642711*/
        ++v10; /*0x642715*/
      }
      while ( v10 < (int)aP1a ); /*0x642718*/
      v4 = v21; /*0x64271e*/
    }
    result = v17 + 1; /*0x642726*/
  }
  return result; /*0x642733*/
}


// ==== 0x00642740  CoordStruct::Set2  this=ParticleSystemClass  sig=csp ====
_DWORD *__thiscall CoordStruct::Set2(_DWORD *this, IUnknown *aP1, AbstractClass *aP2)
{
  int v4; // edx

  v4 = SLOWORD(aP1->field_0) << 8; /*0x642756*/
  this->vtable2 = (SHIWORD(aP1->field_0) << 8) + 128; /*0x642759*/
  this->vtable3 = aP2; /*0x642766*/
  *this = v4 + 128; /*0x642769*/
  return this; /*0x64276b*/
}


// ==== 0x00642770  sub_642770  this=-  sig=ida-proto ====
int sub_642770()
{
  MEMORY[0xAC4F18] = 0; /*0x642772*/
  MEMORY[0xAC4F1C] = 0; /*0x642777*/
  MEMORY[0xAC4F20] = 0; /*0x64277c*/
  MEMORY[0xAC4F24] = 0; /*0x642781*/
  return 0; /*0x642786*/
}


// ==== 0x00642790  sub_642790  this=-  sig=ida-proto ====
void sub_642790()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x64279c*/
  MEMORY[0xAC4F30] = Math::Sqrt(v0 + v0); /*0x6427ae*/
}


// ==== 0x006427C0  sub_6427C0  this=-  sig=ida-proto ====
void sub_6427C0()
{
  MEMORY[0xAC5008] = MEMORY[0xAC4F30] / 60.0; /*0x6427cc*/
}


// ==== 0x006427E0  sub_6427E0  this=-  sig=ida-proto ====
void sub_6427E0()
{
  MEMORY[0xAC4FF0] = 1.0 / MEMORY[0xAC5008]; /*0x6427ec*/
}


// ==== 0x00642800  sub_642800  this=-  sig=ida-proto ====
void sub_642800()
{
  MEMORY[0xAC4FE8] = 0.0174532925199433 * 45.0; /*0x64280c*/
}


// ==== 0x00642820  sub_642820  this=-  sig=ida-proto ====
void sub_642820()
{
  MEMORY[0xAC4F38] = 0.0174532925199433 * 60.0; /*0x64282c*/
}


// ==== 0x00642840  sub_642840  this=-  sig=ida-proto ====
void sub_642840()
{
  MEMORY[0xAC4F10] = 0.0174532925199433 * 90.0; /*0x64284c*/
}


// ==== 0x00642860  sub_642860  this=-  sig=ida-proto ====
__int64 sub_642860()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC4F10] - MEMORY[0xAC4F38]); /*0x642872*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC4F30] * 0.5); /*0x642886*/
  MEMORY[0xAC5010] = result; /*0x64288b*/
  return result; /*0x642890*/
}


// ==== 0x006428A0  sub_6428A0  this=-  sig=ida-proto ====
void sub_6428A0()
{
  MEMORY[0xAC4F40] = Math::ArcTan((double)MEMORY[0xAC5010] * 0.00390625); /*0x6428b7*/
}


// ==== 0x006428D0  sub_6428D0  this=-  sig=ida-proto ====
void sub_6428D0()
{
  MEMORY[0xAC4FE0] = Math::ArcTan((double)(2 * MEMORY[0xAC5010]) / MEMORY[0xAC4F30]); /*0x6428f2*/
}


// ==== 0x00642900  sub_642900  this=-  sig=ida-proto ====
__int64 sub_642900()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC5010]) + 0.5); /*0x64291b*/
  MEMORY[0xAC5004] = result; /*0x642920*/
  return result; /*0x642926*/
}


// ==== 0x00642930  sub_642930  this=-  sig=ida-proto ====
int sub_642930()
{
  MEMORY[0xAC4F28] = 0; /*0x642932*/
  MEMORY[0xAC4F2A] = 0; /*0x642938*/
  return 0; /*0x64293e*/
}


// ==== 0x00642940  sub_642940  this=-  sig=ida-proto ====
int sub_642940()
{
  MEMORY[0xAC4F48] = 0; /*0x642942*/
  MEMORY[0xAC4F4C] = 0; /*0x642947*/
  MEMORY[0xAC4F50] = 0; /*0x64294c*/
  return 0; /*0x642951*/
}


// ==== 0x00642960  sub_642960  this=-  sig=ida-proto ====
int sub_642960()
{
  MEMORY[0xAC5000] = 0; /*0x642965*/
  MEMORY[0xAC4FF8] = 128; /*0x64296f*/
  MEMORY[0xAC4FFC] = 128; /*0x642974*/
  return 128; /*0x642979*/
}


// ==== 0x00642980  sub_642980  this=-  sig=ida-proto ====
int sub_642980()
{
  sub_6429E0(MEMORY[0xAC4F58]); /*0x642985*/
  return atexit(sub_6429A0); /*0x642995*/
}


// ==== 0x006429A0  sub_6429A0  this=-  sig=ida-proto ====
void __cdecl sub_6429A0()
{
  MEMORY[0xAC4F58][0] = (int)&vt_ProgressScreenClass; /*0x6429a5*/
  if ( MEMORY[0xAC4FB0] ) /*0x6429b1*/
  {
    __3_YAXPAX_Z(MEMORY[0xAC4FAC]); /*0x6429b9*/
    MEMORY[0xAC4FB0] = 0; /*0x6429c1*/
  }
  MEMORY[0xAC4FAC] = 0; /*0x6429c8*/
}


// ==== 0x006429E0  ObjectClass::method_6429E0  this=ProgressScreenClass  sig=csp ====
_DWORD *__thiscall sub_6429E0(ProgressScreenClass *this)
{
  this->field_48 = 0; /*0x6429e8*/
  *(_DWORD *)this->__pad_4C = 0; /*0x6429eb*/
  *(_DWORD *)&this->__pad_4C[4] = 0; /*0x6429ee*/
  this->field_54 = 0; /*0x6429f1*/
  *((_BYTE *)this + 88) = 0; /*0x6429f4*/
  *((_DWORD *)this + 23) = 0; /*0x6429f7*/
  *((_BYTE *)this + 96) = 0; /*0x6429fa*/
  *((_BYTE *)this + 97) = 0; /*0x6429fd*/
  *((_BYTE *)this + 98) = 0; /*0x642a00*/
  *((_DWORD *)this + 25) = 0; /*0x642a03*/
  *((_DWORD *)this + 26) = 0; /*0x642a06*/
  *((_DWORD *)this + 27) = 0; /*0x642a09*/
  *((_DWORD *)this + 30) = -1; /*0x642a0c*/
  *((_DWORD *)this + 32) = -1; /*0x642a0f*/
  *((_BYTE *)this + 112) = 0; /*0x642a1d*/
  *((_DWORD *)this + 31) = 0; /*0x642a20*/
  *(_DWORD *)this->__pad_0 = &vt_ProgressScreenClass; /*0x642a23*/
  memset(&this->__pad_0[8], 0, 0x40u); /*0x642a29*/
  return this->__pad_0; /*0x642a2d*/
}


// ==== 0x00642A60  ProgressAnim::Init  this=ProgressAnim  sig=csp ====
int __thiscall ProgressAnim::Init(ProgressScreenClass *this, ProgressScreenClass *aP1, int a3, char a4, int a5)
{
  int v6; // ecx
  char *v7; // eax
  int result; // eax

  this->field_48 = (int)aP1; /*0x642a6e*/
  *(_DWORD *)this->__pad_4C = a3; /*0x642a75*/
  v6 = 0; /*0x642a78*/
  *((_BYTE *)this + 97) = a4; /*0x642a7c*/
  if ( a4 > 0 ) /*0x642a7f*/
  {
    v7 = &this->__pad_0[8]; /*0x642a81*/
    do /*0x642a93*/
    {
      *(_DWORD *)v7 = 0; /*0x642a84*/
      *((_DWORD *)v7 + 1) = 0; /*0x642a86*/
      ++v6; /*0x642a8d*/
      v7 += 8; /*0x642a8e*/
    }
    while ( v6 < *((char *)this + 97) ); /*0x642a93*/
  }
  result = a5; /*0x642a95*/
  *((_BYTE *)this + 96) = 1; /*0x642a99*/
  if ( a5 ) /*0x642a9f*/
    *((_DWORD *)this + 25) = a5; /*0x642aa1*/
  else
    result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9408] + 24))( /*0x642abc*/
               *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9408],
               0);
  *(_DWORD *)&this->__pad_4C[4] = 0; /*0x642aa4*/
  *((_DWORD *)this + 31) = -1; /*0x642aa7*/
  return result; /*0x642aae*/
}


// ==== 0x00642AD0  Scenario::SetByte96  this=Scenario  sig=csp ====
void __thiscall Scenario::SetByte96(ProgressScreenClass *this)
{
  this->q060 = 0; /*0x642ad0*/
}


// ==== 0x00642B10  Scenario::SetDword32  this=Scenario  sig=csp ====
int __thiscall Scenario::SetDword32(ProgressScreenClass *this, int a2)
{
  this->q020 = a2; /*0x642b14*/
  return a2; /*0x642b1a*/
}


// ==== 0x00642B20  LoadingScreen::GetValue  this=LoadingScreen  sig=csp ====
int __thiscall LoadingScreen::GetValue(ProgressScreenClass *this)
{
  return this->q020; /*0x642b26*/
}


// ==== 0x00642B30  LoadingScreen::FindLoadScreenAnim  this=LoadingScreen  sig=csp ====
int __thiscall LoadingScreen::FindLoadScreenAnim(ProgressScreenClass *this)
{
  if ( this->q020 ) /*0x642b30*/
    return FindBuildingAnimByName(&stru_830620.__pad_579C[4344], 1); /*0x642b4e*/
  else
    return FindBuildingAnimByName(&stru_830620.__pad_579C[4356], 1); /*0x642b44*/
}


// ==== 0x00642B60  LoadingScreen::GetColorScheme  this=LoadingScreen  sig=csp ====
int __thiscall LoadingScreen::GetColorScheme(ProgressScreenClass *this)
{
  if ( (MEMORY[0xA8B238] == (CellStruct *)3 || MEMORY[0xA8B238] == (CellStruct *)4) /*0x642b7a*/
    && *(_DWORD *)(**(_DWORD **)&MEMORY[0xA8D63C].__pad_430[12] + 107) == -1 )
  {
    return FindBuildingAnimByName(&stru_830620.__pad_579C[4368], 1); /*0x642b86*/
  }
  if ( this->q020 ) /*0x642b8b*/
    return FindBuildingAnimByName(&stru_830620.__pad_579C[4344], 1); /*0x642ba9*/
  return FindBuildingAnimByName(&stru_830620.__pad_579C[4356], 1);
}


// ==== 0x00642BB0  Render_Render_642BB0  this=-  sig=csp ====
int __stdcall sub_642BB0(unsigned int a1)
{
  int result; // eax
  unsigned int PlayerColor; // eax

  result = 0; /*0x642bba*/
  if ( (MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4) /*0x642bd8*/
    && *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * a1) + 107) == -1 )
  {
    return *((_DWORD *)MEMORY[0xB054D4] + SessionClass::GetPlayerColorScheme(0xFFFFFFFE)); /*0x642bed*/
  }
  if ( a1 < 8 ) /*0x642bf5*/
  {
    PlayerColor = SessionClass::GetPlayerColor(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * a1)); /*0x642bff*/
    return *((_DWORD *)MEMORY[0xB054D4] + SessionClass::GetPlayerColorScheme(PlayerColor)); /*0x642c15*/
  }
  return result; /*0x642bec*/
}


// ==== 0x00642C20  SHPClass::Load  this=SHPClass  sig=csp ====
void __thiscall SHPClass::Load(
        ProgressScreenClass *this,
        char *Source,
        ProgressScreenClass *aP2,
        ProgressScreenClass *aP3)
{
  int v4; // ebp
  void *FileSHP; // eax

  if ( Source ) /*0x642c2a*/
  {
    if ( this->field_54 ) /*0x642c2c*/
    {
      if ( *((_BYTE *)this + 88) ) /*0x642c33*/
      {
        __3_YAXPAX_Z((void *)this->field_54); /*0x642c3b*/
        *((_BYTE *)this + 88) = 0; /*0x642c43*/
      }
      this->field_54 = 0; /*0x642c47*/
    }
    FileSHP = LoadFileSHP(Source, (bool *)this + 88); /*0x642c53*/
    this->field_54 = (int)FileSHP; /*0x642c5a*/
    if ( FileSHP ) /*0x642c5d*/
    {
      if ( aP2 ) /*0x642c65*/
      {
        *((_DWORD *)this + 23) = aP2; /*0x642c69*/
        Render_Load(aP2->__pad_0, 0, v4); /*0x642c6c*/
      }
      *((_DWORD *)this + 29) = aP3; /*0x642c75*/
    }
  }
}


// ==== 0x00642C80  TextRenderer::MeasureBuilding  this=TextRenderer  sig=csp ====
char __thiscall TextRenderer::MeasureBuilding(
        ProgressScreenClass *this,
        int a2,
        ProgressScreenClass *aP2,
        ProgressScreenClass *aP3,
        ProgressScreenClass *aP4,
        char a6)
{
  _DWORD *FoundationSize; // eax
  int v8; // ebx
  int Default; // edi
  int *v10; // ebp
  int v11; // eax
  int v12; // ebp
  int v13; // edi
  int *Viewport; // eax
  int v15; // kr04_4
  int v16; // eax
  AbstractClass *Instance; // [esp+4h] [ebp-3Ch]
  int v19; // [esp+8h] [ebp-38h]
  int v20; // [esp+Ch] [ebp-34h]
  int v21; // [esp+18h] [ebp-28h]
  int v22[7]; // [esp+20h] [ebp-20h] BYREF
  __int16 v23; // [esp+3Eh] [ebp-2h]
  int v24; // [esp+44h] [ebp+4h]

  if ( a2 == -1 && aP2 == (ProgressScreenClass *)-1 ) /*0x642c9a*/
  {
    v20 = *((char *)this + 97); /*0x642cb1*/
    FoundationSize = Building::GetFoundationSize(v22, 0); /*0x642cb5*/
    v8 = 0; /*0x642cbc*/
    Default = 0; /*0x642cc2*/
    v21 = FoundationSize[2]; /*0x642cce*/
    v19 = FoundationSize[3] + 6; /*0x642cd8*/
    if ( (_BYTE)aP4 ) /*0x642ce2*/
    {
      Default = BuildingType::FindDefault(0); /*0x642ceb*/
      if ( Default ) /*0x642cef*/
      {
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x642cfc*/
        Default = (*(int (__thiscall **)(int))(*(_DWORD *)Default + 128))(Default); /*0x642d04*/
      }
    }
    Instance = TextRenderer::GetInstance(); /*0x642d10*/
    v10 = v22; /*0x642d14*/
    v24 = 15; /*0x642d18*/
    do /*0x642d3d*/
    {
      *(_WORD *)v10 = *(_WORD *)CharToWideString(MEMORY[0x8258C0]); /*0x642d2d*/
      v10 = (int *)((char *)v10 + 2); /*0x642d35*/
      --v24; /*0x642d39*/
    }
    while ( v24 ); /*0x642d3d*/
    v23 = 0; /*0x642d4c*/
    v11 = Text::MeasureWidth((int)v22, 0); /*0x642d53*/
    if ( v19 > Default ) /*0x642d6b*/
      Default = v19; /*0x642d6d*/
    if ( Default <= Instance->referenceCount ) /*0x642d71*/
      Default = Instance->referenceCount; /*0x642d73*/
    v12 = v8 + v11 + v21 + 36; /*0x642d79*/
    v13 = Default + 4; /*0x642d7c*/
    if ( v20 > 1 ) /*0x642d82*/
      v13 *= v20; /*0x642d87*/
    Viewport = Display::GetViewport(v22); /*0x642d8d*/
    v15 = Viewport[2] - v12; /*0x642dac*/
    v16 = Viewport[3] - v13; /*0x642db0*/
    *((_DWORD *)this + 26) = v15 / 2; /*0x642dbb*/
    *((_DWORD *)this + 27) = v16 / 2; /*0x642dbe*/
  }
  else
  {
    *((_DWORD *)this + 26) = a2; /*0x642dc4*/
    *((_DWORD *)this + 27) = aP2; /*0x642dc7*/
  }
  *(_DWORD *)&this->__pad_4C[4] = aP3; /*0x642dd6*/
  *((_BYTE *)this + 112) = (_BYTE)aP4; /*0x642dd9*/
  *((_BYTE *)this + 113) = a6; /*0x642ddc*/
  return a6; /*0x642ddf*/
}


// ==== 0x00642DF0  Scenario::SetDword30  this=Scenario  sig=csp ====
int __thiscall Scenario::SetDword30(ProgressScreenClass *this, int a2)
{
  this->q078 = a2; /*0x642df4*/
  return a2; /*0x642df7*/
}


// ==== 0x00642E00  UI_Render  this=-  sig=csp ====
_DWORD *__thiscall UI_Render(ProgressScreenClass *this)
{
  _DWORD *FoundationSize; // eax
  int v2; // ecx
  _DWORD v4[4]; // [esp+10h] [ebp-10h] BYREF
  _DWORD *v5; // [esp+24h] [ebp+4h]
  _DWORD *v6; // [esp+28h] [ebp+8h]

  FoundationSize = Building::GetFoundationSize(v4, 0); /*0x642e0d*/
  v2 = FoundationSize[3]; /*0x642e2b*/
  *v5 = FoundationSize[2] + 6; /*0x642e2e*/
  *v6 = v2 + 6; /*0x642e37*/
  return v6; /*0x642e39*/
}


// ==== 0x00642E40  UI_Render_642E40  this=-  sig=csp ====
int __thiscall UI_Render_642E40(ProgressScreenClass *this)
{
  int Default; // eax
  int v2; // esi
  int result; // eax
  _DWORD *v4; // [esp+8h] [ebp+4h]
  _DWORD *v5; // [esp+Ch] [ebp+8h]

  Default = BuildingType::FindDefault(0); /*0x642e43*/
  v2 = Default; /*0x642e48*/
  if ( Default ) /*0x642e4c*/
  {
    *v4 = (*(int (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x642e69*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 128))(v2); /*0x642e6f*/
    *v5 = result; /*0x642e7a*/
  }
  else
  {
    *v4 = 0; /*0x642e56*/
    *v5 = 0; /*0x642e58*/
    return (int)v4; /*0x642e4e*/
  }
  return result; /*0x642e5a*/
}


// ==== 0x00642E80  UI_Render_642E80  this=-  sig=csp ====
int __fastcall sub_642E80(int *a1, _DWORD *a2)
{
  int Instance; // ebx
  _WORD *v4; // esi
  int v5; // edi
  int result; // eax
  _BYTE v8[30]; // [esp+14h] [ebp-20h] BYREF
  __int16 v9; // [esp+32h] [ebp-2h]

  Instance = TextRenderer::GetInstance(); /*0x642e97*/
  v4 = v8; /*0x642e99*/
  v5 = 15; /*0x642e9d*/
  do /*0x642eb6*/
  {
    *v4++ = *(_WORD *)CharToWideString(MEMORY[0x8258C0]); /*0x642eaf*/
    --v5; /*0x642eb5*/
  }
  while ( v5 ); /*0x642eb6*/
  v9 = 0; /*0x642ec1*/
  *a1 = Text::MeasureWidth((int)v8, 0); /*0x642ed3*/
  result = *(_DWORD *)(Instance + 28); /*0x642ed5*/
  *a2 = result; /*0x642ed8*/
  return result; /*0x642ed1*/
}


// ==== 0x00642EF0  TextRenderer::MeasureBuilding2  this=TextRenderer  sig=csp ====
int *__thiscall TextRenderer::MeasureBuilding2(ProgressScreenClass *this)
{
  _DWORD *FoundationSize; // eax
  int v2; // ebp
  int v3; // edi
  int Default; // eax
  int v5; // esi
  AbstractClass *Instance; // ebx
  CampaignScore *v10; // esi
  int v8; // eax
  int referenceCount; // ebx
  int *result; // eax
  int v11; // edi
  int v12; // [esp+10h] [ebp-34h]
  CampaignScore *v16; // [esp+1Ch] [ebp-28h]
  _DWORD v14[7]; // [esp+24h] [ebp-20h] BYREF
  __int16 v15; // [esp+42h] [ebp-2h]
  _DWORD *arg0; // [esp+48h] [ebp+4h]
  int *v17; // [esp+4Ch] [ebp+8h]
  int v18; // [esp+50h] [ebp+Ch]
  char v19; // [esp+54h] [ebp+10h]
  int v20; // [esp+54h] [ebp+10h]

  FoundationSize = Building::GetFoundationSize(v14, 0); /*0x642f01*/
  v2 = 0; /*0x642f08*/
  v3 = 0; /*0x642f0e*/
  v16 = (CampaignScore *)FoundationSize[2]; /*0x642f1a*/
  v12 = FoundationSize[3] + 6; /*0x642f24*/
  if ( v19 ) /*0x642f2e*/
  {
    Default = BuildingType::FindDefault(0); /*0x642f32*/
    v5 = Default; /*0x642f37*/
    if ( Default ) /*0x642f3b*/
    {
      v2 = (*(int (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x642f44*/
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 128))(v5); /*0x642f50*/
    }
  }
  Instance = TextRenderer::GetInstance(); /*0x642f5c*/
  v10 = (CampaignScore *)v14; /*0x642f5e*/
  v20 = 15; /*0x642f62*/
  do /*0x642f86*/
  {
    *(_WORD *)v10->__pad_0 = *(_WORD *)CharToWideString(MEMORY[0x8258C0]); /*0x642f7b*/
    v10 = (CampaignScore *)((char *)v10 + 2); /*0x642f7e*/
    --v20; /*0x642f82*/
  }
  while ( v20 ); /*0x642f86*/
  v15 = 0; /*0x642f91*/
  v8 = Text::MeasureWidth((int)v14, 0); /*0x642f98*/
  referenceCount = Instance->referenceCount; /*0x642fa1*/
  *arg0 = (char *)&v16->CampaignScore_field_0x18 + v2 + v8 + 2; /*0x642fb4*/
  if ( v12 > v3 ) /*0x642fb6*/
    v3 = v12; /*0x642fb8*/
  result = v17; /*0x642fba*/
  *v17 = v3; /*0x642fc0*/
  if ( v3 <= referenceCount ) /*0x642fc2*/
    v3 = referenceCount; /*0x642fc4*/
  *v17 = v3; /*0x642fc6*/
  *arg0 += 10; /*0x642fd1*/
  v11 = *v17 + 4; /*0x642fd5*/
  *v17 = v11; /*0x642fdb*/
  if ( v18 > 1 ) /*0x642fe3*/
    *v17 = v18 * v11; /*0x642fe8*/
  return result; /*0x642fdf*/
}


// ==== 0x00642FF0  sub_642FF0  this=-  sig=csp ====
int __stdcall sub_642FF0(int a1, int a2, char a3)
{
  int v3; // ebx
  int Default; // eax
  int v5; // esi
  int Instance; // ebp
  _WORD *v7; // esi
  int v8; // edi
  int v9; // ebp
  int v11; // [esp+Ch] [ebp-34h]
  _DWORD v12[7]; // [esp+20h] [ebp-20h] BYREF
  __int16 v13; // [esp+3Eh] [ebp-2h]

  v3 = 0; /*0x643007*/
  v11 = Building::GetFoundationSize(v12, 0)[3] + 6; /*0x643021*/
  if ( a3 ) /*0x64302b*/
  {
    Default = BuildingType::FindDefault(0); /*0x64302f*/
    v5 = Default; /*0x643034*/
    if ( Default ) /*0x643038*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x64303e*/
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 128))(v5); /*0x64304b*/
    }
  }
  Instance = TextRenderer::GetInstance(); /*0x643058*/
  v7 = v12; /*0x64305a*/
  v8 = 15; /*0x64305e*/
  do /*0x643077*/
  {
    *v7++ = *(_WORD *)CharToWideString(MEMORY[0x8258C0]); /*0x643070*/
    --v8; /*0x643076*/
  }
  while ( v8 ); /*0x643077*/
  v13 = 0; /*0x643082*/
  Text::MeasureWidth((int)v12, 0); /*0x643089*/
  v9 = *(_DWORD *)(Instance + 28); /*0x643092*/
  if ( v11 > v3 ) /*0x643098*/
    v3 = v11; /*0x64309a*/
  if ( v3 <= v9 ) /*0x64309e*/
    v3 = v9; /*0x6430a0*/
  return a1 + a2 * (v3 + 4); /*0x6430ae*/
}


// ==== 0x006430C0  sub_6430C0  this=-  sig=csp ====
int __stdcall sub_6430C0(char a1)
{
  int v1; // ebx
  int Default; // eax
  int v3; // esi
  int Instance; // ebp
  _WORD *v5; // esi
  int v6; // edi
  int v7; // esi
  int v8; // ebp
  int v10; // [esp+Ch] [ebp-38h]
  _DWORD v11[7]; // [esp+24h] [ebp-20h] BYREF
  __int16 v12; // [esp+42h] [ebp-2h]

  v1 = 0; /*0x6430db*/
  v10 = Building::GetFoundationSize(v11, 0)[3] + 6; /*0x6430f5*/
  if ( a1 ) /*0x6430ff*/
  {
    Default = BuildingType::FindDefault(0); /*0x643103*/
    v3 = Default; /*0x643108*/
    if ( Default ) /*0x64310c*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x643112*/
      v1 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 128))(v3); /*0x64311f*/
    }
  }
  Instance = TextRenderer::GetInstance(); /*0x64312c*/
  v5 = v11; /*0x64312e*/
  v6 = 15; /*0x643132*/
  do /*0x64314b*/
  {
    *v5++ = *(_WORD *)CharToWideString(MEMORY[0x8258C0]); /*0x643144*/
    --v6; /*0x64314a*/
  }
  while ( v6 ); /*0x64314b*/
  v12 = 0; /*0x643156*/
  Text::MeasureWidth((int)v11, 0); /*0x64315d*/
  v7 = v10; /*0x643162*/
  v8 = *(_DWORD *)(Instance + 28); /*0x643166*/
  if ( v10 <= v1 ) /*0x64316c*/
    v7 = v1; /*0x64316e*/
  if ( v7 <= v8 ) /*0x643172*/
    v7 = v8; /*0x643174*/
  return (v7 - Building::GetFoundationSize(v11, 0)[3] - 2) / 2; /*0x6431a4*/
}


// ==== 0x006431C0  sub_6431C0  this=-  sig=csp ====
int __stdcall sub_6431C0(char a1)
{
  int v1; // edi
  int Default; // eax
  int v3; // esi
  int Instance; // ebp
  _WORD *v5; // esi
  int v6; // ebx
  int v7; // ebp
  int v8; // edi
  int v9; // esi
  int v11; // [esp+8h] [ebp-34h]
  _DWORD v12[7]; // [esp+1Ch] [ebp-20h] BYREF
  __int16 v13; // [esp+3Ah] [ebp-2h]

  v1 = 0; /*0x6431d6*/
  v11 = Building::GetFoundationSize(v12, 0)[3] + 6; /*0x6431f0*/
  if ( a1 ) /*0x6431fa*/
  {
    Default = BuildingType::FindDefault(0); /*0x6431fe*/
    v3 = Default; /*0x643203*/
    if ( Default ) /*0x643207*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x64320d*/
      v1 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 128))(v3); /*0x64321a*/
    }
  }
  Instance = TextRenderer::GetInstance(); /*0x643228*/
  v5 = v12; /*0x64322a*/
  v6 = 15; /*0x64322e*/
  do /*0x643247*/
  {
    *v5++ = *(_WORD *)CharToWideString(MEMORY[0x8258C0]); /*0x643240*/
    --v6; /*0x643246*/
  }
  while ( v6 ); /*0x643247*/
  v13 = 0; /*0x643252*/
  Text::MeasureWidth((int)v12, 0); /*0x643259*/
  v7 = *(_DWORD *)(Instance + 28); /*0x643262*/
  if ( v11 > v1 ) /*0x643267*/
    v1 = v11; /*0x643269*/
  if ( v1 <= v7 ) /*0x64326d*/
    v1 = v7; /*0x64326f*/
  v8 = v1 + 4; /*0x643273*/
  v9 = BuildingType::FindDefault(0); /*0x64327b*/
  if ( !v9 ) /*0x643281*/
    return v8 / 2; /*0x64328e*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 124))(v9); /*0x64329a*/
  return (v8 - (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 128))(v9)) / 2; /*0x643289*/
}


// ==== 0x006432C0  sub_6432C0  this=-  sig=csp ====
int __stdcall sub_6432C0(char a1)
{
  int v1; // ebx
  int Default; // eax
  int v3; // esi
  int Instance; // ebp
  _WORD *v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ebp
  int v9; // ebp
  int v10; // ebx
  _WORD *v11; // esi
  int v12; // edi
  int v14; // [esp+10h] [ebp-34h]
  _DWORD v15[7]; // [esp+24h] [ebp-20h] BYREF
  __int16 v16; // [esp+42h] [ebp-2h]

  v1 = 0; /*0x6432d8*/
  v14 = Building::GetFoundationSize(v15, 0)[3] + 6; /*0x6432f2*/
  if ( a1 ) /*0x6432fc*/
  {
    Default = BuildingType::FindDefault(0); /*0x643300*/
    v3 = Default; /*0x643305*/
    if ( Default ) /*0x643309*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x64330f*/
      v1 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 128))(v3); /*0x64331c*/
    }
  }
  Instance = TextRenderer::GetInstance(); /*0x643328*/
  v5 = v15; /*0x64332a*/
  v6 = 15; /*0x64332e*/
  do /*0x643347*/
  {
    *v5++ = *(_WORD *)CharToWideString(MEMORY[0x8258C0]); /*0x643340*/
    --v6; /*0x643346*/
  }
  while ( v6 ); /*0x643347*/
  v16 = 0; /*0x643352*/
  Text::MeasureWidth((int)v15, 0); /*0x643359*/
  v7 = *(_DWORD *)(Instance + 28); /*0x64335e*/
  v8 = v14; /*0x643361*/
  if ( v14 <= v1 ) /*0x643367*/
    v8 = v1; /*0x643369*/
  if ( v8 <= v7 ) /*0x64336d*/
    v8 = v7; /*0x64336f*/
  v9 = v8 + 4; /*0x643376*/
  v10 = TextRenderer::GetInstance(); /*0x64337e*/
  v11 = v15; /*0x643380*/
  v12 = 15; /*0x643384*/
  do /*0x64339d*/
  {
    *v11++ = *(_WORD *)CharToWideString(MEMORY[0x8258C0]); /*0x643396*/
    --v12; /*0x64339c*/
  }
  while ( v12 ); /*0x64339d*/
  v16 = 0; /*0x6433a8*/
  Text::MeasureWidth((int)v15, 0); /*0x6433af*/
  return (v9 - *(_DWORD *)(v10 + 28)) / 2; /*0x6433bb*/
}


// ==== 0x006433D0  Progress::GetAverage  this=Progress  sig=csp ====
double __thiscall Progress_GetAverage(int this)
{
  int v1; // edx
  double v2; // st7
  double *v3; // eax

  v1 = *(char *)(this + 97); /*0x6433d1*/
  v2 = 0.0; /*0x6433d5*/
  if ( v1 > 0 ) /*0x6433e1*/
  {
    v3 = (double *)(this + 8); /*0x6433e3*/
    do /*0x6433ec*/
    {
      v2 = v2 + *v3++; /*0x6433e6*/
      --v1; /*0x6433eb*/
    }
    while ( v1 ); /*0x6433ec*/
  }
  return v2 / (double)*(char *)(this + 97) / *(double *)(this + 72); /*0x6433f6*/
}


// ==== 0x00643400  LoadScreen::RenderProgressBackground  this=LoadScreen  sig=csp ====
// local variable allocation has failed, the output may be wrong!
void __thiscall LoadScreen::RenderProgressBackground(
        ProgressScreenClass *this,
        ProgressScreenClass *aP1,
        ProgressScreenClass *aP2,
        int *a3,
        int a5)
{
  _DWORD *FoundationSize; // eax
  int v7; // edi
  int v8; // ebp
  int BuildingAnimByName; // eax
  int *v10; // ebx
  int v11; // eax
  unsigned __int8 v12; // dl
  int v13; // eax
  struct tagRECT *v14; // [esp+0h] [ebp-58h]
  int v15; // [esp+4h] [ebp-54h]
  int v16; // [esp+8h] [ebp-50h]
  __int16 v17; // [esp+10h] [ebp-48h]
  char *v18; // [esp+18h] [ebp-40h]
  _DWORD v19[4]; // [esp+28h] [ebp-30h] BYREF
  int v20[2]; // [esp+38h] [ebp-20h] BYREF
  int v21; // [esp+40h] [ebp-18h]
  int v22; // [esp+44h] [ebp-14h]
  _DWORD v23[4]; // [esp+48h] [ebp-10h] BYREF
  ProgressScreenClass *aP1a; // [esp+5Ch] [ebp+4h]
  int *a3a; // [esp+6Ch] [ebp+14h]
  int v26; // [esp+70h] [ebp+18h] BYREF

  FoundationSize = Building::GetFoundationSize(v23, 0); /*0x643413*/
  v7 = FoundationSize[2]; /*0x643430*/
  v8 = FoundationSize[3]; /*0x64343c*/
  v19[1] = &aP2->__pad_0[3]; /*0x643446*/
  v18 = &aP1->__pad_0[3]; /*0x64344e*/
  v19[0] = &aP1->__pad_0[3]; /*0x643452*/
  v19[2] = v7; /*0x643456*/
  v19[3] = v8; /*0x64345a*/
  Rect::Inflate(v14, v15, v16); /*0x64345e*/
  BuildingAnimByName = v26; /*0x643463*/
  if ( v26 ) /*0x643469*/
  {
    aP1a = *(ProgressScreenClass **)(v26 + 780); /*0x64348c*/
  }
  else
  {
    BuildingAnimByName = FindBuildingAnimByName(&stru_830620.__pad_579C[4380], 1); /*0x643475*/
    aP1a = (ProgressScreenClass *)MEMORY[0x87F6C4]; /*0x643480*/
  }
  if ( *((_DWORD *)this + 29) ) /*0x643490*/
    aP1a = (ProgressScreenClass *)*((_DWORD *)this + 29); /*0x643497*/
  v10 = a3a; /*0x64349e*/
  if ( *((_BYTE *)this + 113) ) /*0x64349b*/
  {
    v11 = Color::ConvertToRGB((unsigned __int8 *)(BuildingAnimByName + 776), (int)&v26); /*0x6434b5*/
    v17 = *(_WORD *)v11; /*0x6434bd*/
    v12 = *(_BYTE *)(v11 + 2); /*0x6434c8*/
    v13 = *v10; /*0x6434cb*/
    v10 = a3a; /*0x643521*/
    (*(void (__thiscall **)(int *, _DWORD *, int))(v13 + 88))( /*0x643529*/
      a3a,
      v19,
      ((unsigned __int8)v17 >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656])
    | (HIBYTE(v17) >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
    | (v12 >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]));
  }
  v20[0] = (int)v18; /*0x643538*/
  v20[1] = (int)&aP2->__pad_0[3]; /*0x64353c*/
  v21 = v7; /*0x643544*/
  v22 = v8; /*0x643548*/
  v21 = Math::RoundToInt((double)v7 * *(double *)&a3); /*0x643551*/
  a3 = 0; /*0x64357f*/
  a5 = 0; /*0x643586*/
  DrawToSurfaceSHP((int)v10, (int)aP1a, this->field_54, 0, (int *)&a3, v20, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x643594*/
}


// ==== 0x006435B0  sub_6435B0  this=-  sig=csp ====
char __stdcall sub_6435B0(int a1, int a2, int a3)
{
  int Default; // eax
  int v4; // esi
  int v5; // edi
  char result; // al
  int v7; // esi
  int v8[4]; // [esp+8h] [ebp-10h] BYREF

  Default = BuildingType::FindDefault(0); /*0x6435b7*/
  v4 = Default; /*0x6435bc*/
  if ( Default ) /*0x6435c0*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x6435d1*/
    Default = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 128))(v4); /*0x6435d3*/
  }
  else
  {
    v5 = 0; /*0x6435c2*/
  }
  v8[0] = a1; /*0x6435e2*/
  v8[3] = Default; /*0x6435f8*/
  v8[1] = a2; /*0x6435fe*/
  v8[2] = v5; /*0x64360f*/
  result = 0; /*0x64361b*/
  v7 = (255 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) | (255 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]); /*0x643635*/
  if ( MEMORY[0x88730C] ) /*0x643639*/
  {
    result = sub_4BAFE0((_DWORD *)MEMORY[0x88730C]); /*0x64363b*/
    if ( !result ) /*0x643642*/
      return Surface::BlitTransparent(v8, MEMORY[0x88730C], a3, v7); /*0x64365b*/
  }
  return result; /*0x643660*/
}


// ==== 0x00643670  UI_Render  this=-  sig=csp ====
int *__thiscall UI_Render_643670(ProgressScreenClass *this)
{
  AbstractClass *Instance; // ebx
  _WORD *v2; // esi
  int v3; // edi
  int v4; // eax
  int referenceCount; // ecx
  int v7; // [esp+Ch] [ebp-38h] BYREF
  _DWORD v8[4]; // [esp+14h] [ebp-30h] BYREF
  _BYTE v9[30]; // [esp+24h] [ebp-20h] BYREF
  __int16 v10; // [esp+42h] [ebp-2h]
  int v11; // [esp+48h] [ebp+4h] BYREF
  int v12; // [esp+4Ch] [ebp+8h]
  size_t v13; // [esp+50h] [ebp+Ch]
  int v14; // [esp+54h] [ebp+10h]
  int v15; // [esp+58h] [ebp+14h]

  Instance = TextRenderer::GetInstance(); /*0x643680*/
  v2 = v9; /*0x643682*/
  v3 = 15; /*0x643686*/
  do /*0x64369f*/
  {
    *v2++ = *(_WORD *)CharToWideString(MEMORY[0x8258C0]); /*0x643698*/
    --v3; /*0x64369e*/
  }
  while ( v3 ); /*0x64369f*/
  v10 = 0; /*0x6436ab*/
  v4 = Text::MeasureWidth((int)v9, 0); /*0x6436b0*/
  referenceCount = Instance->referenceCount; /*0x6436b9*/
  if ( v15 != -1 ) /*0x6436bf*/
    v4 = v15; /*0x6436c1*/
  v8[2] = v4 + v11; /*0x6436d5*/
  v8[3] = referenceCount + v12; /*0x6436d9*/
  v8[0] = 0; /*0x6436fa*/
  v8[1] = 0; /*0x6436fe*/
  return TextRenderer::DrawText(&v7, v13, (int)MEMORY[0x88730C], v8, (int)&v11, v14, 0, 25); /*0x64370a*/
}


// ==== 0x00643720  ObjectClass::RenderBuildingProductionButton  this=ObjectClass  sig=csp ====
int __thiscall RenderBuildingProductionButton(
        int this,
        int a2,
        ProgressScreenClass *aP2,
        ProgressScreenClass *aP3,
        int a5,
        char a6)
{
  int *v7; // eax
  int v8; // edi
  int *FoundationSize; // eax
  int *v10; // eax
  int v11; // ecx
  ProgressScreenClass *v12; // ecx
  int v13; // edx
  ProgressScreenClass *v14; // eax
  int v15; // ecx
  int v16; // eax
  ProgressScreenClass *v17; // ebp
  int v18; // ecx
  int v19; // eax
  int Default; // eax
  int v21; // eax
  int v22; // edx
  int PlayerSide; // eax
  int v24; // ebp
  int v25; // edi
  int v26; // eax
  __int16 v27; // di
  int v29; // [esp+10h] [ebp-4Ch] BYREF
  int v30; // [esp+14h] [ebp-48h] BYREF
  int v31; // [esp+18h] [ebp-44h]
  int v32; // [esp+1Ch] [ebp-40h] BYREF
  int v33; // [esp+20h] [ebp-3Ch]
  int v34; // [esp+24h] [ebp-38h]
  int v35; // [esp+28h] [ebp-34h]
  int v36; // [esp+2Ch] [ebp-30h]
  int v37; // [esp+30h] [ebp-2Ch]
  int *a3[2]; // [esp+34h] [ebp-28h]
  ProgressScreenClass *aP1[4]; // [esp+3Ch] [ebp-20h] BYREF
  int v40; // [esp+4Ch] [ebp-10h]
  int v41; // [esp+50h] [ebp-Ch]
  int v42; // [esp+54h] [ebp-8h]
  int v43; // [esp+58h] [ebp-4h]
  int v44; // [esp+70h] [ebp+14h]

  if ( a5 < *(char *)(this + 97) ) /*0x643733*/
  {
    *(double *)a3 = *(double *)(this + 8 * a5 + 8) / *(double *)(this + 72); /*0x64374c*/
  }
  else
  {
    v7 = *(int **)(this + 76); /*0x643738*/
    a3[0] = *(int **)(this + 72); /*0x64373b*/
    a3[1] = v7; /*0x64373f*/
  }
  v30 = *(_DWORD *)&aP3->__pad_0[4]; /*0x643762*/
  v31 = 0; /*0x643770*/
  v29 = 0; /*0x643774*/
  TextRenderer::MeasureBuilding2((ProgressScreenClass *)this); /*0x643778*/
  v8 = v30; /*0x643793*/
  FoundationSize = Building::GetFoundationSize(aP1, 0); /*0x643795*/
  v40 = *FoundationSize; /*0x64379c*/
  v41 = FoundationSize[1]; /*0x6437a3*/
  v42 = FoundationSize[2]; /*0x6437aa*/
  v43 = FoundationSize[3]; /*0x6437b7*/
  v29 = 0; /*0x6437bb*/
  v31 = 0; /*0x6437bf*/
  if ( a6 ) /*0x6437c3*/
    UI_Render_642E40((ProgressScreenClass *)this); /*0x6437d1*/
  v30 = 0; /*0x6437de*/
  v32 = 0; /*0x6437e2*/
  UI_Render_642E80(&v30, &v32); /*0x6437e6*/
  v31 = v29 + v30 + v42 + 36; /*0x643800*/
  if ( *(_DWORD *)(this + 120) != -1 ) /*0x64380a*/
    v31 = *(_DWORD *)(this + 120); /*0x64380c*/
  v10 = Building::GetFoundationSize(aP1, 0); /*0x643819*/
  v11 = *v10; /*0x64381e*/
  v32 = 0; /*0x643820*/
  v40 = v11; /*0x643824*/
  v30 = 0; /*0x643828*/
  v41 = v10[1]; /*0x64382f*/
  v42 = v10[2]; /*0x643836*/
  v12 = *(ProgressScreenClass **)&aP3->__pad_0[4]; /*0x64383a*/
  v13 = v10[3]; /*0x64383d*/
  v14 = *(ProgressScreenClass **)aP3->__pad_0; /*0x643840*/
  v43 = v13; /*0x643843*/
  aP1[0] = v14; /*0x64384b*/
  aP1[1] = v12; /*0x64384f*/
  TextRenderer::MeasureBuilding2((ProgressScreenClass *)this); /*0x643862*/
  v33 = 0; /*0x643873*/
  v29 = 0; /*0x643877*/
  UI_Render((ProgressScreenClass *)this); /*0x64387b*/
  aP1[0] = (ProgressScreenClass *)((char *)aP1[0] + 5); /*0x643891*/
  v15 = *(_DWORD *)aP3->__pad_0; /*0x6438a4*/
  v16 = *(_DWORD *)&aP3->__pad_0[4]; /*0x6438a6*/
  v17 = (ProgressScreenClass *)(v8 + v30 / 2); /*0x6438a9*/
  v37 = v16; /*0x6438ab*/
  v18 = v15 + v42 + 21; /*0x6438af*/
  v36 = v18; /*0x6438b9*/
  v40 = v18; /*0x6438bd*/
  v41 = v16; /*0x6438c1*/
  if ( a6 ) /*0x6438c5*/
  {
    v33 = 0; /*0x6438d6*/
    v30 = 0; /*0x6438da*/
    TextRenderer::MeasureBuilding2((ProgressScreenClass *)this); /*0x6438de*/
    v32 = 0; /*0x6438ef*/
    v29 = 0; /*0x6438f3*/
    UI_Render_642E40((ProgressScreenClass *)this); /*0x6438f7*/
    v18 = v36; /*0x643906*/
    v41 = v8 + v30 / 2; /*0x643915*/
    v16 = v37; /*0x643919*/
  }
  v34 = v18; /*0x64391d*/
  v35 = v16; /*0x643930*/
  v33 = 0; /*0x643934*/
  v30 = 0; /*0x643938*/
  TextRenderer::MeasureBuilding2((ProgressScreenClass *)this); /*0x64393c*/
  v32 = 0; /*0x643949*/
  v29 = 0; /*0x64394d*/
  UI_Render_642E80(&v32, &v29); /*0x643951*/
  v19 = (v30 - v29) / 2; /*0x643967*/
  v30 = v19; /*0x64396b*/
  if ( a6 ) /*0x64396f*/
  {
    Default = BuildingType::FindDefault(0); /*0x643973*/
    v33 = Default; /*0x64397a*/
    if ( Default ) /*0x64397e*/
    {
      v32 = (*(int (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x64398f*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v33 + 128))(v33); /*0x643995*/
      v21 = v32; /*0x64399b*/
    }
    else
    {
      v21 = 0; /*0x643980*/
    }
    v22 = v21 + v36 + 10; /*0x6439a3*/
    v19 = v30; /*0x6439a7*/
    v34 = v22; /*0x6439ab*/
  }
  v35 = v8 + v19; /*0x6439bb*/
  LoadScreen::RenderProgressBackground((ProgressScreenClass *)this, aP1[0], v17, a3[0], (int)a3[1]); /*0x6439d3*/
  if ( a6 ) /*0x6439dc*/
  {
    PlayerSide = SessionClass::GetPlayerSide(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * a5)); /*0x6439ef*/
    if ( (MEMORY[0xA8B238] == (CellStruct *)3 || MEMORY[0xA8B238] == (CellStruct *)4) /*0x643a11*/
      && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * a5) + 107) == -1 )
    {
      PlayerSide = -3; /*0x643a13*/
    }
    v44 = BuildingType::FindDefault((void *)PlayerSide); /*0x643a21*/
    if ( v44 ) /*0x643a25*/
    {
      v24 = BuildingType::FindDefault(0); /*0x643a2e*/
      if ( v24 ) /*0x643a32*/
      {
        v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 124))(v24); /*0x643a47*/
        v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 128))(v24); /*0x643a49*/
      }
      else
      {
        v25 = 0; /*0x643a34*/
        v26 = 0; /*0x643a36*/
      }
      Rect::Set(aP1, v40, v41, v25, v26); /*0x643a5f*/
      v27 = PackRGB565(255, 0, 255); /*0x643a7b*/
      if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9408] && !sub_4BAFE0(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9408]) ) /*0x643a81*/
        Surface::BlitTransparent((int *)aP1, *(int *)&MEMORY[0x87F8E4].__pad_5568[9408], v44, v27); /*0x643aa0*/
    }
  }
  return (int)UI_Render_643670((ProgressScreenClass *)this); /*0x643ad1*/
}


// ==== 0x00643AE0  LoadScreen::Render  this=LoadScreen  sig=csp ====
char __thiscall LoadScreen::Render(ProgressScreenClass *this)
{
  int v2; // eax
  HWND v3; // eax
  HWND DlgItem; // eax
  char v5; // dl
  Frame *v6; // ecx
  char v7; // al
  ProgressScreenClass *v8; // edi
  int BuildingAnimByName; // eax
  signed int v10; // edi
  int v11; // eax
  __int64 v13; // [esp+8h] [ebp-18h] BYREF
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF
  __int64 a3; // [esp+24h] [ebp+4h]
  double a3a; // [esp+24h] [ebp+4h]

  LOBYTE(v2) = this->q018; /*0x643ae7*/
  if ( (_BYTE)v2 ) /*0x643aec*/
  {
    v2 = this->field_54; /*0x643af2*/
    if ( v2 ) /*0x643af7*/
    {
      v3 = (HWND)this->q064; /*0x643afd*/
      if ( v3 ) /*0x643b02*/
      {
        DlgItem = GetDlgItem(v3, 1593); /*0x643b0a*/
        ScreenDialogToClient(DlgItem, &Rect); /*0x643b16*/
        v5 = *((_BYTE *)this + 97); /*0x643b1b*/
        v13 = *(_QWORD *)&Rect.left; /*0x643b26*/
        if ( v5 > 0 ) /*0x643b30*/
          a3a = *(double *)&this->__pad_0[8] / *(double *)&this->field_48; /*0x643b48*/
        else
          a3a = *(double *)&this->field_48; /*0x643b38*/
        LoadScreen::RenderProgressBackground( /*0x643b63*/
          this,
          (ProgressScreenClass *)Rect.left,
          (ProgressScreenClass *)Rect.top,
          (int *)LODWORD(a3a),
          SHIDWORD(a3a));
      }
      else
      {
        v6 = (Frame *)HIDWORD(a3); /*0x643b74*/
        v13 = a3; /*0x643b7b*/
        if ( a3 == __PAIR64__(a3, -1) ) /*0x643b83*/
        {
          v6 = (Frame *)*((_DWORD *)this + 27); /*0x643b8c*/
          LODWORD(v13) = this->q068; /*0x643b8f*/
          HIDWORD(v13) = v6; /*0x643b93*/
        }
        v7 = *((_BYTE *)this + 97); /*0x643b97*/
        v8 = *(ProgressScreenClass **)&this->__pad_4C[4]; /*0x643b9a*/
        if ( v7 == 1 ) /*0x643b9f*/
        {
          if ( MEMORY[0xA8B238] ) /*0x643ba8*/
          {
            if ( !v8 ) /*0x643bdc*/
              v8 = **(ProgressScreenClass ***)&MEMORY[0xA8D63C].__pad_430[12]; /*0x643be4*/
            BuildingAnimByName = Render_Render_642BB0(0); /*0x643bea*/
          }
          else
          {
            if ( !v8 ) /*0x643bac*/
              v8 = (ProgressScreenClass *)&MEMORY[0x87F8E4].__pad_5568[10472]; /*0x643bae*/
            if ( this->q008 ) /*0x643bb3*/
              BuildingAnimByName = FindBuildingAnimByName(&stru_830620.__pad_579C[4344], 1); /*0x643bd3*/
            else
              BuildingAnimByName = FindBuildingAnimByName(&stru_830620.__pad_579C[4356], 1); /*0x643bc7*/
          }
          RenderBuildingProductionButton( /*0x643bfe*/
            (int)this,
            BuildingAnimByName,
            v8,
            (ProgressScreenClass *)&v13,
            0,
            *((_BYTE *)this + 112));
        }
        else
        {
          v10 = 0; /*0x643c05*/
          if ( v7 > 0 ) /*0x643c09*/
          {
            do /*0x643c36*/
            {
              v11 = Render_Render_642BB0(v10); /*0x643c0e*/
              RenderBuildingProductionButton( /*0x643c2a*/
                (int)this,
                v11,
                *(ProgressScreenClass **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10),
                (ProgressScreenClass *)&v13,
                v10,
                *((_BYTE *)this + 112));
              ++v10; /*0x643c33*/
            }
            while ( v10 < *((char *)this + 97) ); /*0x643c36*/
          }
        }
        LOBYTE(v6) = 1; /*0x643c40*/
        LOBYTE(v2) = Frame::Present(v6, 0); /*0x643c42*/
      }
    }
  }
  return v2; /*0x643b68*/
}


// ==== 0x00643C50  Network::UpdateLatencyDisplay  this=Network  sig=csp ====
// local variable allocation has failed, the output may be wrong!
void __thiscall Network::UpdateLatencyDisplay(
        ProgressScreenClass *this,
        ProgressScreenClass *aP1,
        ProgressScreenClass *aP2,
        ProgressScreenClass *aP3)
{
  double v5; // st7
  int v6; // ecx
  double *v7; // eax
  int v8; // edx
  double v9; // st7
  double v10; // st6
  int v11; // ecx
  double v12; // st7
  double *v13; // eax
  int v14; // eax
  void (__thiscall ***v15)(_DWORD, int, _DWORD *); // ecx
  HWND v16; // eax
  _DWORD v17[2]; // [esp+8h] [ebp-8h] BYREF

  v5 = 0.0; /*0x643c5c*/
  v6 = *((char *)this + 97); /*0x643c62*/
  if ( v6 > 0 ) /*0x643c6c*/
  {
    v7 = (double *)&this->__pad_0[8]; /*0x643c6e*/
    do /*0x643c77*/
    {
      v5 = v5 + *v7++; /*0x643c71*/
      --v6; /*0x643c76*/
    }
    while ( v6 ); /*0x643c77*/
  }
  v8 = Math::RoundToInt(v5); /*0x643c90*/
  v9 = *(double *)&this->__pad_0[8 * (_DWORD)aP1 + 8]; /*0x643c94*/
  v10 = *(double *)&this->field_48 * 0.01 * *(double *)&aP2; /*0x643ca1*/
  *(double *)&this->__pad_0[8 * (_DWORD)aP1 + 8] = v10; /*0x643ca4*/
  if ( v10 > *(double *)&this->field_48 ) /*0x643cb0*/
  {
    *(_DWORD *)&this->__pad_0[8 * (_DWORD)aP1 + 8] = this->field_48; /*0x643cb5*/
    *(_DWORD *)&this->__pad_0[8 * (_DWORD)aP1 + 12] = *(_DWORD *)this->__pad_4C; /*0x643cbc*/
  }
  if ( v9 != *(double *)&this->__pad_0[8 * (_DWORD)aP1 + 8] ) /*0x643cc9*/
  {
    v11 = *((char *)this + 97); /*0x643ccf*/
    v12 = 0.0; /*0x643cd3*/
    if ( v11 > 0 ) /*0x643cdf*/
    {
      v13 = (double *)&this->__pad_0[8]; /*0x643ce1*/
      do /*0x643cea*/
      {
        v12 = v12 + *v13++; /*0x643ce4*/
        --v11; /*0x643ce9*/
      }
      while ( v11 ); /*0x643cea*/
    }
    v17[0] = v8; /*0x643cf0*/
    v14 = Math::RoundToInt(v12); /*0x643cff*/
    v15 = *(void (__thiscall ****)(_DWORD, int, _DWORD *))&this->__pad_0[4]; /*0x643d04*/
    v17[1] = v14; /*0x643d07*/
    if ( v15 && this->q060 ) /*0x643d11*/
      (**v15)(v15, 4526, v17); /*0x643d24*/
    v16 = (HWND)this->q064; /*0x643d26*/
    if ( v16 ) /*0x643d2b*/
      SendMessageA(v16, 0xFu, 0, 0); /*0x643d34*/
    else
      LoadScreen::Render(this); /*0x643d4b*/
  }
}


// ==== 0x00643E60  LoadScreen::IsActive  this=LoadScreen  sig=csp ====
BOOL __thiscall LoadScreen::IsActive(ProgressScreenClass *this)
{
  return this->q064 != 0; /*0x643e6a*/
}


// ==== 0x00643E70  VtableStub::643E70  this=VtableStub  sig=csp ====
void __thiscall VtableStub::643E70(_DWORD *this)
{
  this->q064 = 0; /*0x643e70*/
}


// ==== 0x00643E80  Function::643E80  this=Function  sig=csp ====
int __thiscall Function::643E80(_DWORD *this, int a2)
{
  this->q004 = a2; /*0x643e84*/
  return a2; /*0x643e87*/
}


// ==== 0x00643E90  Progress::GetWeighted  this=Progress  sig=csp ====
double __thiscall Progress::GetWeighted(ProgressScreenClass *this, int a2)
{
  if ( a2 < *((char *)this + 97) ) /*0x643e9a*/
    return *(double *)&this->__pad_0[8 * a2 + 8] / *(double *)&this->field_48; /*0x643ea6*/
  else
    return *(double *)&this->field_48; /*0x643e9c*/
}


// ==== 0x00643EB0  sub_643EB0  this=-  sig=ida-proto ====
void sub_643EB0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x643ebc*/
  MEMORY[0xAC5028] = Math::Sqrt(v0 + v0); /*0x643ece*/
}


// ==== 0x00643EE0  sub_643EE0  this=-  sig=ida-proto ====
void sub_643EE0()
{
  MEMORY[0xAC5078] = MEMORY[0xAC5028] / 60.0; /*0x643eec*/
}


// ==== 0x00643F00  sub_643F00  this=-  sig=ida-proto ====
void sub_643F00()
{
  MEMORY[0xAC5060] = 1.0 / MEMORY[0xAC5078]; /*0x643f0c*/
}


// ==== 0x00643F20  sub_643F20  this=-  sig=ida-proto ====
void sub_643F20()
{
  MEMORY[0xAC5058] = 0.0174532925199433 * 45.0; /*0x643f2c*/
}


// ==== 0x00643F40  sub_643F40  this=-  sig=ida-proto ====
void sub_643F40()
{
  MEMORY[0xAC5030] = 0.0174532925199433 * 60.0; /*0x643f4c*/
}


// ==== 0x00643F60  sub_643F60  this=-  sig=ida-proto ====
void sub_643F60()
{
  MEMORY[0xAC5018] = 0.0174532925199433 * 90.0; /*0x643f6c*/
}


// ==== 0x00643F80  sub_643F80  this=-  sig=ida-proto ====
__int64 sub_643F80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC5018] - MEMORY[0xAC5030]); /*0x643f92*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC5028] * 0.5); /*0x643fa6*/
  MEMORY[0xAC5080] = result; /*0x643fab*/
  return result; /*0x643fb0*/
}


// ==== 0x00643FC0  sub_643FC0  this=-  sig=ida-proto ====
void sub_643FC0()
{
  MEMORY[0xAC5038] = Math::ArcTan((double)MEMORY[0xAC5080] * 0.00390625); /*0x643fd7*/
}


// ==== 0x00643FF0  sub_643FF0  this=-  sig=ida-proto ====
void sub_643FF0()
{
  MEMORY[0xAC5050] = Math::ArcTan((double)(2 * MEMORY[0xAC5080]) / MEMORY[0xAC5028]); /*0x644012*/
}


// ==== 0x00644020  sub_644020  this=-  sig=ida-proto ====
__int64 sub_644020()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC5080]) + 0.5); /*0x64403b*/
  MEMORY[0xAC5074] = result; /*0x644040*/
  return result; /*0x644046*/
}


// ==== 0x00644050  sub_644050  this=-  sig=ida-proto ====
int sub_644050()
{
  MEMORY[0xAC5020] = 0; /*0x644052*/
  MEMORY[0xAC5022] = 0; /*0x644058*/
  return 0; /*0x64405e*/
}


// ==== 0x00644060  sub_644060  this=-  sig=ida-proto ====
int sub_644060()
{
  MEMORY[0xAC5040] = 0; /*0x644062*/
  MEMORY[0xAC5044] = 0; /*0x644067*/
  MEMORY[0xAC5048] = 0; /*0x64406c*/
  return 0; /*0x644071*/
}


// ==== 0x00644080  sub_644080  this=-  sig=ida-proto ====
int sub_644080()
{
  MEMORY[0xAC5070] = 0; /*0x644085*/
  MEMORY[0xAC5068] = 128; /*0x64408f*/
  MEMORY[0xAC506C] = 128; /*0x644094*/
  return 128; /*0x644099*/
}


// ==== 0x006440A0  OverlayTypeClass::Construct  this=ParticleSystemTypeClass  sig=csp ====
_DWORD *__thiscall OverlayTypeClass::Construct(_DWORD *this, ObjectClass *aP1)
{
  ParticleSystemTypeClass *v3; // eax

  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP1); /*0x6440a9*/
  this->q294 = -1; /*0x6440b3*/
  this->q2B4 = -1; /*0x6440b9*/
  this->q2B8 = -1; /*0x6440bf*/
  this->q298 = 0; /*0x6440c5*/
  this->q29C = 1; /*0x6440cb*/
  this->q2A0 = 0; /*0x6440d5*/
  this->q2A4 = 50; /*0x6440db*/
  this->q2A8 = 0; /*0x6440e5*/
  this->q2AC = 0; /*0x6440eb*/
  this->DamageDelay = 0; /*0x6440f1*/
  this->ParticleSystemTypeClass_field_2C0 = 0; /*0x6440fc*/
  this->StartScale = 0; /*0x644102*/
  this->ParticleSystemTypeClass_field_2C8 = 0; /*0x644108*/
  this->Beam = -1717986918; /*0x64410e*/
  this->q2D0 = -1717986918; /*0x644114*/
  this->q0B6 = 0; /*0x64411a*/
  this->q0B8 = 0; /*0x644120*/
  this->q2E8 = 0; /*0x644126*/
  this->q2F0 = 0; /*0x64412c*/
  this->q0BE = 0; /*0x644132*/
  this->q2CC = 1069128089; /*0x64413b*/
  this->ParticleSystemTypeClass_field_bool_2D4 = 1067030937; /*0x644145*/
  this->q0B7 = 1077477376; /*0x64414f*/
  this->q2E4 = 0; /*0x644159*/
  this->q2EC = 0; /*0x64415f*/
  this->q0BD = 0; /*0x644165*/
  this->q0BF = 0; /*0x64416b*/
  this->q300 = 0; /*0x644171*/
  this->q304 = 0; /*0x644177*/
  this->q308 = 0; /*0x64417d*/
  this->q0C3 = 0; /*0x644196*/
  *this = &ParticleSystemTypeClass::`vftable'; /*0x64419c*/
  this->vtable2 = &ParticleSystemTypeClass::`vftable'; /*0x6441a2*/
  this->vtable3 = &ParticleSystemTypeClass::`vftable'; /*0x6441a8*/
  this->vtable4 = &vt_ParticleSystemTypeClass; /*0x6441af*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x6441b6*/
  if ( (int)MEMORY[0xA83D78] < MEMORY[0xA83D70] /*0x6441ef*/
    || (MEMORY[0xA83D75] || !MEMORY[0xA83D70])
    && MEMORY[0xA83D7C] > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))MEMORY[0xA83D68]->field_8)(
         &MEMORY[0xA83D68],
         MEMORY[0xA83D70] + MEMORY[0xA83D7C],
         0) )
  {
    v3 = MEMORY[0xA83D78]; /*0x6441fc*/
    MEMORY[0xA83D78] = (ParticleSystemTypeClass *)((char *)MEMORY[0xA83D78] + 1); /*0x6441ff*/
    *(_DWORD *)&MEMORY[0xA83D6C]->__pad_0[4 * (_DWORD)v3] = this; /*0x64420b*/
  }
  this->q234 = 1; /*0x64420e*/
  return this; /*0x644217*/
}


// ==== 0x006442D0  ParticleSystemTypeClass::GetType  this=ParticleSystemTypeClass  sig=csp ====
char __thiscall ParticleSystemTypeClass::GetType(int this, unsigned __int8 ***aP1)
{
  int v3; // eax
  char v4; // cl
  char Bool_Overwrite; // al
  int Int_Overwrite; // eax
  CCINIClass *v7; // ecx
  int v8; // eax
  double v9; // st7
  double Double_Overwrite; // st7
  CCINIClass *v11; // edx
  bool v12; // zf
  int v13; // eax
  float *XYZFromINI; // eax
  double v15; // st7
  INIClass *v16; // eax
  double v17; // st7
  INIClass *v18; // edx
  double v19; // st7
  INIClass *v20; // ecx
  double v21; // st7
  INIClass *v22; // eax
  double v23; // st7
  INIClass *v24; // edx
  double v25; // st7
  char v26; // al
  int Coord; // eax
  Color *v31; // ecx
  int v29; // eax
  char v30; // al
  INIClass *aP3; // [esp+0h] [ebp-68h]
  INIClass *aP3a; // [esp+0h] [ebp-68h]
  INIClass *aP3_4; // [esp+4h] [ebp-64h]
  INIClass *aP3_4a; // [esp+4h] [ebp-64h]
  CCINIClass var54; // [esp+14h] [ebp-54h] BYREF

  INIClass::ResetSection(aP1); /*0x6442e3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)aP1) ) /*0x6442eb*/
    return 0; /*0x644622*/
  INIClass::GetString( /*0x64430f*/
    aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&stru_830620.__pad_579C[4852],
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    (INIClass *)&var54.sectionHead[1],
    64);
  v3 = BuildingTypeClass::FindOrCreateEx((char *)&var54.sectionHead[1]); /*0x644318*/
  v4 = *(_BYTE *)(this + 664); /*0x64431d*/
  *(_DWORD *)(this + 660) = v3; /*0x644323*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &stru_8184C8, v4); /*0x644332*/
  aP3_4 = *(INIClass **)(this + 668); /*0x64433f*/
  *(_BYTE *)(this + 664) = Bool_Overwrite; /*0x644346*/
  *(_DWORD *)(this + 668) = INIClass::ReadInt_Overwrite( /*0x644351*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_830620.__pad_579C[4840],
                              aP3_4);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644366*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_830620.__pad_579C[4828],
                    *(INIClass **)(this + 676));
  v7 = *(CCINIClass **)(this + 680); /*0x64436b*/
  *(_DWORD *)(this + 676) = Int_Overwrite; /*0x644371*/
  v8 = INIClass::ReadInt_Overwrite( /*0x644380*/
         (int)aP1,
         (unsigned __int8 *)(this + 36),
         (CCINIClass *)&stru_830620.__pad_579C[4816],
         (INIClass *)v7);
  v9 = *(float *)(this + 672); /*0x644385*/
  *(_DWORD *)(this + 680) = v8; /*0x644390*/
  *(float *)(this + 672) = INIClass::ReadDouble_Overwrite( /*0x6443a4*/
                             (int)aP1,
                             (INIClass *)(this + 36),
                             (unsigned __int8 *)&stru_830620.__pad_579C[4804],
                             (INIClass *)LODWORD(v9));
  *(float *)(this + 684) = INIClass::ReadDouble_Overwrite( /*0x6443c3*/
                             (int)aP1,
                             (INIClass *)(this + 36),
                             (unsigned __int8 *)&stru_830620.__pad_579C[4792],
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 684)));
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x6443dd*/
                       (int)aP1,
                       (INIClass *)(this + 36),
                       (unsigned __int8 *)&stru_830620.__pad_579C[4768],
                       (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 688)));
  v11 = *(CCINIClass **)(this + 696); /*0x6443e2*/
  *(float *)(this + 688) = Double_Overwrite; /*0x6443ea*/
  *(_DWORD *)(this + 696) = INIClass::ReadInt_Overwrite( /*0x6443fc*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_830620.__pad_579C[4756],
                              (INIClass *)v11);
  INIClass::GetString( /*0x644416*/
    aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&stru_830620.__pad_579C[4744],
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    (INIClass *)&var54.sectionHead[1],
    64);
  var54.headNode[0] = 0; /*0x64441b*/
  *(_DWORD *)var54.__pad_0 = &stru_830620.__pad_579C[4388]; /*0x644423*/
  while ( 1 ) /*0x64443f*/
  {
    v12 = _strcmpi((char *)&var54.sectionHead[1], **(char ***)var54.__pad_0) == 0; /*0x64443f*/
    v13 = var54.headNode[0]; /*0x644441*/
    if ( v12 ) /*0x644445*/
      break; /*0x644445*/
    ++var54.headNode[0]; /*0x644448*/
    *(_DWORD *)var54.__pad_0 += 4; /*0x644458*/
    if ( *(int *)var54.__pad_0 >= (int)&stru_830620.__pad_579C[4408] ) /*0x64445c*/
    {
      v13 = -1; /*0x64445e*/
      break; /*0x64445e*/
    }
  }
  *(_DWORD *)(this + 692) = v13; /*0x644461*/
  XYZFromINI = ParticleSystemTypeClass::ReadXYZFromINI( /*0x64447b*/
                 aP1,
                 (float *)&var54.headNode[1],
                 (CCINIClass *)(this + 36),
                 (unsigned __int8 *)&stru_830620.__pad_579C[4728],
                 (float *)(this + 700));
  *(float *)(this + 700) = *XYZFromINI; /*0x644482*/
  *(float *)(this + 704) = XYZFromINI[1]; /*0x64448b*/
  aP3 = *(INIClass **)(this + 712); /*0x6444a1*/
  *(float *)(this + 708) = XYZFromINI[2]; /*0x6444aa*/
  v15 = INIClass::ReadDouble_Overwrite( /*0x6444b0*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[4708],
          aP3);
  v16 = *(INIClass **)(this + 720); /*0x6444bb*/
  *(double *)(this + 712) = v15; /*0x6444c1*/
  v17 = INIClass::ReadDouble_Overwrite( /*0x6444d1*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[4688],
          v16);
  v18 = *(INIClass **)(this + 728); /*0x6444dc*/
  *(double *)(this + 720) = v17; /*0x6444e2*/
  v19 = INIClass::ReadDouble_Overwrite( /*0x6444f2*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[4672],
          v18);
  v20 = *(INIClass **)(this + 736); /*0x6444fd*/
  *(double *)(this + 728) = v19; /*0x644503*/
  v21 = INIClass::ReadDouble_Overwrite( /*0x644513*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[4640],
          v20);
  v22 = *(INIClass **)(this + 744); /*0x64451e*/
  *(double *)(this + 736) = v21; /*0x644524*/
  v23 = INIClass::ReadDouble_Overwrite( /*0x644534*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[4608],
          v22);
  v24 = *(INIClass **)(this + 752); /*0x64453f*/
  *(double *)(this + 744) = v23; /*0x644545*/
  v25 = INIClass::ReadDouble_Overwrite( /*0x644555*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[4576],
          v24);
  v26 = *(_BYTE *)(this + 779); /*0x64455a*/
  *(double *)(this + 752) = v25; /*0x644562*/
  *(_BYTE *)(this + 779) = INIClass::ReadBool_Overwrite( /*0x644574*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[4568],
                             v26);
  Coord = INIClass::GetCoord( /*0x64458e*/
            aP1,
            &var54,
            (INIClass *)(this + 36),
            (Color *)&stru_830620.__pad_579C[4556],
            (Color *)(this + 776));
  v31 = *(Color **)(this + 768); /*0x644596*/
  *(_WORD *)(this + 776) = *(_WORD *)Coord; /*0x64459c*/
  *(_BYTE *)(this + 778) = *(_BYTE *)(Coord + 2); /*0x6445af*/
  v29 = INIClass::ReadInt_Overwrite( /*0x6445b5*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[4536],
          (INIClass *)v31);
  aP3_4a = *(INIClass **)(this + 772); /*0x6445c2*/
  *(_DWORD *)(this + 768) = v29; /*0x6445c9*/
  *(_DWORD *)(this + 772) = INIClass::ReadInt_Overwrite( /*0x6445d4*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_830620.__pad_579C[4524],
                              aP3_4a);
  v30 = INIClass::ReadBool_Overwrite( /*0x6445e9*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[4508],
          *(_BYTE *)(this + 780));
  aP3a = *(INIClass **)(this + 760); /*0x6445fb*/
  *(_BYTE *)(this + 780) = v30; /*0x644604*/
  *(double *)(this + 760) = INIClass::ReadDouble_Overwrite( /*0x64460f*/
                              (int)aP1,
                              (INIClass *)(this + 36),
                              (unsigned __int8 *)&stru_830620.__pad_579C[4484],
                              aP3a);
  return 1; /*0x644617*/
}


// ==== 0x00644630  WarheadTypeClass::applyDamage  this=IUnknown  sig=csp ====
int __thiscall WarheadTypeClass::applyDamage(ObjectClass *Source)
{
  int v2; // esi
  _DWORD *v3; // eax
  ParticleSystemTypeClass *v4; // eax
  int v6; // ecx
  ParticleSystemTypeClass **i; // edx

  if ( !_strcmpi(Source, &stru_817460.sectionHead[1]) || !strlen(Source->__pad_0) ) /*0x644649*/
    return -1; /*0x644653*/
  v2 = 0; /*0x64465a*/
  if ( *(int *)HouseClass_Player.__pad_2C <= 0 ) /*0x64465e*/
  {
LABEL_6:
    v3 = (_DWORD *)__2_YAPAXI_Z(0x310u); /*0x644683*/
    if ( v3 ) /*0x644692*/
      v4 = (ParticleSystemTypeClass *)OverlayTypeClass::Construct(v3, Source); /*0x644697*/
    else
      v4 = 0; /*0x6446a4*/
    v6 = 0; /*0x6446ac*/
    if ( *(int *)HouseClass_Player.__pad_2C > 0 ) /*0x6446b0*/
    {
      for ( i = *(ParticleSystemTypeClass ***)&HouseClass_Player.__pad_18[8]; *i != v4; ++i ) /*0x6446b2*/
      {
        if ( ++v6 >= *(int *)HouseClass_Player.__pad_2C ) /*0x6446c2*/
          return -1; /*0x6446c2*/
      }
      return v6; /*0x6446cd*/
    }
    return -1; /*0x6446ca*/
  }
  while ( _strcmpi(Source, (const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_18[8] + 4 * v2) + 36)) ) /*0x644677*/
  {
    if ( ++v2 >= *(int *)HouseClass_Player.__pad_2C ) /*0x644681*/
      goto LABEL_6; /*0x644681*/
  }
  return v2; /*0x6446a0*/
}


// ==== 0x00644700  ParticleSystemTypeClass::PowerDrainUpdate  this=ParticleSystemTypeClass  sig=csp ====
int __thiscall ParticleSystemTypeClass::_vt13(int this, int *a2)
{
  int v3; // ecx

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x644709*/
  Power::TimerProcess(*(_DWORD *)(this + 660)); /*0x644717*/
  LOBYTE(v3) = *(_BYTE *)(this + 664); /*0x64471c*/
  Power::FlagProcess(a2, v3); /*0x644725*/
  Power::TimerProcess(*(_DWORD *)(this + 668)); /*0x644733*/
  Checksummer::Add_float((unsigned int *)a2, *(_DWORD *)(this + 672)); /*0x644741*/
  Power::TimerProcess(*(_DWORD *)(this + 676)); /*0x64474f*/
  Power::TimerProcess(*(_DWORD *)(this + 680)); /*0x64475d*/
  Checksummer::Add_float((unsigned int *)a2, *(_DWORD *)(this + 684)); /*0x64476b*/
  Checksummer::Add_float((unsigned int *)a2, *(_DWORD *)(this + 688)); /*0x644779*/
  Power::TimerProcess(*(_DWORD *)(this + 692)); /*0x644787*/
  return Power::TimerProcess(*(_DWORD *)(this + 696)); /*0x64479a*/
}


// ==== 0x006447A0  ParticleSystemTypeClass::GetClassIdentifier  this=ParticleSystemTypeClass  sig=csp ====
int __stdcall ParticleSystemTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6447a6*/
    return -2147467261; /*0x6447a8*/
  *a2 = 1883112522; /*0x6447b6*/
  a2[1] = 298979249; /*0x6447be*/
  a2[2] = 1610642049; /*0x6447c7*/
  a2[3] = -1252326136; /*0x6447d0*/
  return 0; /*0x6447ad*/
}


// ==== 0x006447E0  ParticleSystemTypeClass::SaveLoad_Prefix  this=ParticleSystemTypeClass  sig=csp ====
int __stdcall ParticleSystemTypeClass::SaveLoad_Prefix(ObjectTypeClass *aP0, int aP1)
{
  if ( ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1) >= 0 && aP0 ) /*0x6447f6*/
  {
    ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1); /*0x6447ff*/
    *(_DWORD *)aP0->__pad_0 = &ParticleSystemTypeClass::`vftable'; /*0x644804*/
    *(_DWORD *)&aP0->__pad_0[4] = &ParticleSystemTypeClass::`vftable'; /*0x64480a*/
    *(_DWORD *)&aP0->__pad_0[8] = &ParticleSystemTypeClass::`vftable'; /*0x644811*/
    *(_DWORD *)&aP0->__pad_0[12] = &vt_ParticleSystemTypeClass; /*0x644818*/
  }
  return 0; /*0x644821*/
}


// ==== 0x00644830  ParticleSystemTypeClass::SaveLoad_Prefix_0  this=ParticleSystemTypeClass  sig=csp ====
int __stdcall ParticleSystemTypeClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, ObjectTypeClass *aP1, int aP2)
{
  AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2); /*0x64483f*/
  return 0; /*0x644846*/
}


// ==== 0x00644850  ObjectClass::method  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall sub_644850(void *this)
{
  ObjectClass *v2; // edi
  const void **v3; // esi

  v2 = 0; /*0x644855*/
  v3 = (const void **)&stru_830620.__pad_579C[4388]; /*0x644857*/
  while ( _strcmpi(this, *v3) ) /*0x64486a*/
  {
    ++v3; /*0x64486c*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x64486f*/
    if ( (int)v3 >= (int)&stru_830620.__pad_579C[4408] ) /*0x644876*/
      return (ObjectClass *)-1; /*0x64487e*/
  }
  return v2; /*0x644878*/
}


// ==== 0x00644890  BuildingTypeClass::LoadOrGet  this=AbstractClass  sig=csp ====
ParticleSystemTypeClass *__thiscall BuildingTypeClass::LoadOrGet(ObjectClass *Source)
{
  int v2; // esi
  _DWORD *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x6448ac*/
    return 0; /*0x64490f*/
  v2 = 0; /*0x6448bd*/
  if ( *(int *)HouseClass_Player.__pad_2C <= 0 ) /*0x6448c1*/
  {
LABEL_6:
    v3 = (_DWORD *)__2_YAPAXI_Z(0x310u); /*0x6448e6*/
    if ( v3 ) /*0x6448f5*/
      return (ParticleSystemTypeClass *)OverlayTypeClass::Construct(v3, Source); /*0x644901*/
    return 0; /*0x6448f5*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_18[8] + 4 * v2) + 36), Source) ) /*0x6448da*/
  {
    if ( ++v2 >= *(int *)HouseClass_Player.__pad_2C ) /*0x6448e4*/
      goto LABEL_6; /*0x6448e4*/
  }
  return *(ParticleSystemTypeClass **)(*(_DWORD *)&HouseClass_Player.__pad_18[8] + 4 * v2); /*0x6448ff*/
}


// ==== 0x00644920  ParticleSystemTypeClass::GetObjectSize  this=ParticleSystemTypeClass  sig=csp ====
int ParticleSystemTypeClass::_vt12()
{
  return 784; /*0x644925*/
}


// ==== 0x00644930  ParticleSystemTypeClass::GetTypeIdentifier  this=ParticleSystemTypeClass  sig=csp ====
int ParticleSystemTypeClass::_vt11()
{
  return 25; /*0x644935*/
}


// ==== 0x00644940  ParticleSystemTypeClass::Stub  this=ParticleSystemTypeClass  sig=csp ====
char __stdcall ParticleSystemTypeClass::_vt32(int a1, int a2)
{
  return 0; /*0x644942*/
}


// ==== 0x00644950  ParticleSystemTypeClass::StubReturnFalse  this=ParticleSystemTypeClass  sig=csp ====
int __stdcall ParticleSystemTypeClass::_vt35(int a1)
{
  return 0; /*0x644952*/
}


// ==== 0x00644960  ParticleSystemTypeClass::ddtor  this=ParticleSystemTypeClass  sig=csp ====
ParticleSystemTypeClass *__thiscall ParticleSystemTypeClass::ddtor(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &ParticleSystemTypeClass::`vftable'; /*0x644966*/
  *(Block + 1) = &ParticleSystemTypeClass::`vftable'; /*0x64496c*/
  *(Block + 2) = &ParticleSystemTypeClass::`vftable'; /*0x644973*/
  *(Block + 3) = &vt_ParticleSystemTypeClass; /*0x64497a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x644981*/
  v5 = Block; /*0x644996*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA83D68] + 16))(&MEMORY[0xA83D68], &v5); /*0x64499a*/
  if ( v3 != -1 && v3 < MEMORY[0xA83D78] && v3 < --MEMORY[0xA83D78] ) /*0x6449b5*/
  {
    do /*0x6449cd*/
    {
      ++v3; /*0x6449bd*/
      *((_DWORD *)MEMORY[0xA83D6C] + v3 - 1) = *((_DWORD *)MEMORY[0xA83D6C] + v3); /*0x6449c1*/
    }
    while ( v3 < MEMORY[0xA83D78] ); /*0x6449cd*/
  }
  ObjectTypeClass::Destruct((int)Block); /*0x6449d1*/
  if ( (a2 & 1) != 0 ) /*0x6449db*/
    OperatorDelete(Block); /*0x6449de*/
  return (ParticleSystemTypeClass *)Block; /*0x6449e8*/
}


// ==== 0x006449F0  sub_6449F0  this=-  sig=ida-proto ====
void sub_6449F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6449fc*/
  MEMORY[0xAC5098] = Math::Sqrt(v0 + v0); /*0x644a0e*/
}


// ==== 0x00644A20  sub_644A20  this=-  sig=ida-proto ====
void sub_644A20()
{
  MEMORY[0xAC50E8] = MEMORY[0xAC5098] / 60.0; /*0x644a2c*/
}


// ==== 0x00644A40  sub_644A40  this=-  sig=ida-proto ====
void sub_644A40()
{
  MEMORY[0xAC50D0] = 1.0 / MEMORY[0xAC50E8]; /*0x644a4c*/
}


// ==== 0x00644A60  sub_644A60  this=-  sig=ida-proto ====
void sub_644A60()
{
  MEMORY[0xAC50C8] = 0.0174532925199433 * 45.0; /*0x644a6c*/
}


// ==== 0x00644A80  sub_644A80  this=-  sig=ida-proto ====
void sub_644A80()
{
  MEMORY[0xAC50A0] = 0.0174532925199433 * 60.0; /*0x644a8c*/
}


// ==== 0x00644AA0  sub_644AA0  this=-  sig=ida-proto ====
void sub_644AA0()
{
  MEMORY[0xAC5088] = 0.0174532925199433 * 90.0; /*0x644aac*/
}


// ==== 0x00644AC0  sub_644AC0  this=-  sig=ida-proto ====
__int64 sub_644AC0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC5088] - MEMORY[0xAC50A0]); /*0x644ad2*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC5098] * 0.5); /*0x644ae6*/
  MEMORY[0xAC50F0] = result; /*0x644aeb*/
  return result; /*0x644af0*/
}


// ==== 0x00644B00  sub_644B00  this=-  sig=ida-proto ====
void sub_644B00()
{
  MEMORY[0xAC50A8] = Math::ArcTan((double)MEMORY[0xAC50F0] * 0.00390625); /*0x644b17*/
}


// ==== 0x00644B30  sub_644B30  this=-  sig=ida-proto ====
void sub_644B30()
{
  MEMORY[0xAC50C0] = Math::ArcTan((double)(2 * MEMORY[0xAC50F0]) / MEMORY[0xAC5098]); /*0x644b52*/
}


// ==== 0x00644B60  sub_644B60  this=-  sig=ida-proto ====
__int64 sub_644B60()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC50F0]) + 0.5); /*0x644b7b*/
  MEMORY[0xAC50E4] = result; /*0x644b80*/
  return result; /*0x644b86*/
}


// ==== 0x00644B90  sub_644B90  this=-  sig=ida-proto ====
int sub_644B90()
{
  MEMORY[0xAC5090] = 0; /*0x644b92*/
  MEMORY[0xAC5092] = 0; /*0x644b98*/
  return 0; /*0x644b9e*/
}


// ==== 0x00644BA0  sub_644BA0  this=-  sig=ida-proto ====
int sub_644BA0()
{
  MEMORY[0xAC50B0] = 0; /*0x644ba2*/
  MEMORY[0xAC50B4] = 0; /*0x644ba7*/
  MEMORY[0xAC50B8] = 0; /*0x644bac*/
  return 0; /*0x644bb1*/
}


// ==== 0x00644BC0  sub_644BC0  this=-  sig=ida-proto ====
int sub_644BC0()
{
  MEMORY[0xAC50E0] = 0; /*0x644bc5*/
  MEMORY[0xAC50D8] = 128; /*0x644bcf*/
  MEMORY[0xAC50DC] = 128; /*0x644bd4*/
  return 128; /*0x644bd9*/
}


// ==== 0x00644BE0  BuildingTypeClass::Construct  this=ParticleTypeClass  sig=csp ====
_DWORD *__thiscall BuildingTypeClass::Construct(_DWORD *this, AbstractClass *aP1)
{
  ParticleTypeClass *v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull((int)this, aP1); /*0x644beb*/
  this->q0A5 = 0; /*0x644bf8*/
  this->q0A6 = 0; /*0x644bfe*/
  this->q0A7 = 0; /*0x644c04*/
  this->q2B0 = 0; /*0x644c10*/
  this->q2A0 = 1; /*0x644c19*/
  this->q2A4 = 1; /*0x644c1f*/
  this->q2A8 = 0; /*0x644c25*/
  this->q2AC = 1; /*0x644c2b*/
  this->q2B4 = 0; /*0x644c31*/
  BuildingTypeClass::loadBuildingProperty_b_5478850(this + 174, 0, 0); /*0x644c37*/
  this->q2CC = 10; /*0x644c3c*/
  this->q2C8 = 0; /*0x644c43*/
  this->q2B8 = &vt_TypeList_RGBClass; /*0x644c46*/
  this->q2D4 = 0; /*0x644c4c*/
  *((_BYTE *)this + 728) = 0; /*0x644c66*/
  *((_BYTE *)this + 729) = 0; /*0x644c6c*/
  *((_BYTE *)this + 781) = -1; /*0x644c72*/
  this->q30E = -1; /*0x644c78*/
  this->q2DC = 0; /*0x644c81*/
  this->q2E0 = 1; /*0x644c87*/
  this->q2E4 = 0; /*0x644c8d*/
  this->q2E8 = 0; /*0x644c93*/
  this->q2EC = 0; /*0x644c99*/
  this->q2F0 = 1; /*0x644c9f*/
  this->q2F4 = 0; /*0x644ca5*/
  this->q2F8 = 0; /*0x644cab*/
  this->q0BF = 0; /*0x644cb1*/
  this->q300 = 0; /*0x644cb7*/
  this->q304 = 0; /*0x644cbd*/
  *((_BYTE *)this + 776) = 0; /*0x644cc3*/
  *((_BYTE *)this + 777) = 0; /*0x644cc9*/
  this->q30A = 0; /*0x644ccf*/
  *((_BYTE *)this + 779) = 4; /*0x644cd5*/
  this->q0C3 = 0; /*0x644cdc*/
  *((_BYTE *)this + 783) = 0; /*0x644ce2*/
  this->q310 = -1; /*0x644ce8*/
  this->q314 = -1; /*0x644cee*/
  *this = &ParticleTypeClass::`vftable'; /*0x644cf4*/
  this->vtable2 = &ParticleTypeClass::`vftable'; /*0x644cfa*/
  this->vtable3 = &ParticleTypeClass::`vftable'; /*0x644d01*/
  this->vtable4 = &vt_ParticleTypeClass; /*0x644d08*/
  if ( (int)MEMORY[0xA83DA8] < MEMORY[0xA83DA0] /*0x644d43*/
    || (MEMORY[0xA83DA5] || !MEMORY[0xA83DA0])
    && MEMORY[0xA83DAC] > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))MEMORY[0xA83D98]->field_8)(
         &MEMORY[0xA83D98],
         MEMORY[0xA83DA0] + MEMORY[0xA83DAC],
         0) )
  {
    v3 = MEMORY[0xA83DA8]; /*0x644d50*/
    MEMORY[0xA83DA8] = (ParticleTypeClass *)((char *)MEMORY[0xA83DA8] + 1); /*0x644d53*/
    *(_DWORD *)&MEMORY[0xA83D9C]->__pad_0[4 * (_DWORD)v3] = this; /*0x644d5f*/
  }
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[9964] < *(int *)&MEMORY[0xB077F8].__pad_579C[9956] /*0x644d96*/
    || (MEMORY[0xB077F8].__pad_579C[9961] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9956])
    && *(int *)&MEMORY[0xB077F8].__pad_579C[9968] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9948] + 8))(
         &MEMORY[0xB077F8].__pad_579C[9948],
         *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9956] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9968],
         0) )
  {
    v4 = (*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9964])++; /*0x644da3*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9952] + 4 * v4) = this; /*0x644db2*/
  }
  this->q234 = 0; /*0x644db5*/
  return this; /*0x644dbd*/
}


// ==== 0x00644F50  ParticleTypeClass::LoadFromINI  this=ParticleTypeClass  sig=csp ====
// local variable allocation has failed, the output may be wrong!
char __thiscall ParticleTypeClass::LoadFromINI(int this, unsigned __int8 ***aP1)
{
  INIClass *inited; // eax
  _DWORD *RGBColorList; // ebp
  int Int_Overwrite; // eax
  int v6; // eax
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  CCINIClass *v10; // ecx
  int v11; // eax
  int v12; // eax
  double v13; // st7
  double Double_Overwrite; // st7
  CCINIClass *v15; // eax
  int v16; // eax
  char v17; // cl
  char Bool_Overwrite; // al
  char v19; // al
  char v20; // al
  char v21; // cl
  char v22; // al
  int *v23; // edx
  INIClass *eax5d; // eax
  double v25; // st7
  CCINIClass *v24; // ecx
  int eax5e; // eax
  int v28; // eax
  CCINIClass *v27; // ecx
  int v30; // eax
  int *Coord2; // eax
  int Coord; // eax
  int eax5j; // eax
  __int16 v34; // dx
  char al5d; // al
  int v36; // ebp
  _DWORD *v37; // eax
  ParticleTypeClass *v33; // eax
  int v39; // ecx
  ObjectClass *v35; // edx
  int v41; // ebx
  char **v42; // edi
  void **v44[2]; // [esp-14h] [ebp-F8h] BYREF
  VectorClass *v40; // [esp-Ch] [ebp-F0h]
  unsigned __int8 *p_ownsFile; // [esp-8h] [ebp-ECh]
  INIClass *v47; // [esp-4h] [ebp-E8h]
  CCINIClass *v43; // [esp+0h] [ebp-E4h] OVERLAPPED
  int aP3_4; // [esp+4h] [ebp-E0h]
  CCINIClass v50; // [esp+18h] [ebp-CCh] BYREF

  INIClass::ResetSection(aP1); /*0x644f65*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)aP1) ) /*0x644f6d*/
    return 0; /*0x645417*/
  ParticleTypeClass::Constructor(v44, 0, 0); /*0x644f85*/
  v44[0] = &vt_TypeList_RGBClass; /*0x644f8a*/
  inited = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(this + 36)); /*0x644f9a*/
  RGBColorList = (_DWORD *)INIClass::ReadRGBColorList( /*0x644fac*/
                             aP1,
                             (int)&v50.__pad_20[4],
                             (unsigned __int8 *)inited,
                             (unsigned __int8 *)&stru_830620.__pad_579C[5252],
                             v44[0],
                             v44[1],
                             (int)v40,
                             (__int16)p_ownsFile,
                             (int)v47,
                             (int)v43,
                             aP3_4);
  ParticleTypeClass::EnsureCapacity((_DWORD *)(this + 696), RGBColorList); /*0x644fb5*/
  *(_DWORD *)(this + 712) = RGBColorList[4]; /*0x644fbd*/
  *(_DWORD *)(this + 716) = RGBColorList[5]; /*0x644fc6*/
  *(_DWORD *)(this + 720) = RGBColorList[6]; /*0x644fd3*/
  *(_DWORD *)&v50.__pad_20[4] = &vt_VectorClass_RGBClass; /*0x644fd9*/
  FilePipe_38::ddtor((int)&v50.__pad_20[4]); /*0x644fe1*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644ff5*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_830620.__pad_579C[5244],
                    *(INIClass **)(this + 732));
  aP3_4 = *(_DWORD *)(this + 736); /*0x645002*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[5236]; /*0x645003*/
  v47 = (INIClass *)(this + 36); /*0x645008*/
  *(_DWORD *)(this + 732) = Int_Overwrite; /*0x645009*/
  *(_DWORD *)(this + 736) = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4); /*0x645014*/
  v6 = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &stru_81859C, *(INIClass **)(this + 744)); /*0x645029*/
  v7 = *(_DWORD *)(this + 740); /*0x64502e*/
  aP3_4 = 128; /*0x645038*/
  v43 = (CCINIClass *)&v50.CCINIClass_field_4C; /*0x64503d*/
  v47 = (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760]; /*0x64503e*/
  p_ownsFile = &unk_8183B4; /*0x645043*/
  v40 = (VectorClass *)(this + 36); /*0x645048*/
  *(_DWORD *)(this + 744) = v6; /*0x64504b*/
  if ( INIClass::GetString(aP1, (INIClass *)v40, p_ownsFile, v47, (INIClass *)v43, aP3_4) ) /*0x645051*/
    v8 = WarheadTypeClass::FindOrCreate((char *)&v50.CCINIClass_field_4C); /*0x64505e*/
  else
    v8 = v7; /*0x645065*/
  aP3_4 = *(_DWORD *)(this + 748); /*0x64506f*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[5224]; /*0x645070*/
  v47 = (INIClass *)(this + 36); /*0x645075*/
  *(_DWORD *)(this + 740) = v8; /*0x645076*/
  *(_DWORD *)(this + 748) = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4); /*0x645081*/
  v9 = INIClass::ReadInt_Overwrite( /*0x645096*/
         (int)aP1,
         (unsigned __int8 *)(this + 36),
         (CCINIClass *)&stru_830620.__pad_579C[5208],
         *(INIClass **)(this + 752));
  v10 = *(CCINIClass **)(this + 756); /*0x64509b*/
  *(_DWORD *)(this + 752) = v9; /*0x6450a1*/
  v11 = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &unk_818524, (INIClass *)v10); /*0x6450b0*/
  aP3_4 = *(_DWORD *)(this + 760); /*0x6450bd*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[5196]; /*0x6450be*/
  v47 = (INIClass *)(this + 36); /*0x6450c3*/
  *(_DWORD *)(this + 756) = v11; /*0x6450c4*/
  v12 = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4); /*0x6450ca*/
  v13 = *(float *)(this + 764); /*0x6450cf*/
  *(_DWORD *)(this + 760) = v12; /*0x6450da*/
  *(double *)&v43 = v13; /*0x6450e0*/
  *(float *)(this + 764) = INIClass::ReadDouble_Overwrite( /*0x6450ee*/
                             (int)aP1,
                             (INIClass *)(this + 36),
                             (unsigned __int8 *)&stru_830620.__pad_579C[5184],
                             (INIClass *)LODWORD(v13));
  *(double *)&v43 = *(float *)(this + 768); /*0x6450ff*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x645108*/
                       (int)aP1,
                       (INIClass *)(this + 36),
                       (unsigned __int8 *)&stru_830620.__pad_579C[5176],
                       (INIClass *)v43);
  v15 = *(CCINIClass **)(this + 772); /*0x64510d*/
  *(float *)(this + 768) = Double_Overwrite; /*0x645115*/
  v16 = INIClass::ReadInt_Overwrite( /*0x645122*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[5168],
          (INIClass *)v15);
  v17 = *(_BYTE *)(this + 776); /*0x645127*/
  *(_DWORD *)(this + 772) = v16; /*0x64512d*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x64513c*/
                     (int)aP1,
                     (unsigned __int8 *)(this + 36),
                     (CCINIClass *)&stru_830620.__pad_579C[5148],
                     v17);
  aP3_4 = *(char *)(this + 777); /*0x645148*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[5136]; /*0x645149*/
  v47 = (INIClass *)(this + 36); /*0x64514e*/
  *(_BYTE *)(this + 776) = Bool_Overwrite; /*0x645151*/
  *(_BYTE *)(this + 777) = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4); /*0x64515c*/
  v19 = INIClass::ReadInt_Overwrite( /*0x645172*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[5120],
          (INIClass *)*(char *)(this + 778));
  aP3_4 = *(char *)(this + 779); /*0x64517e*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[5104]; /*0x64517f*/
  v47 = (INIClass *)(this + 36); /*0x645184*/
  *(_BYTE *)(this + 778) = v19; /*0x645187*/
  *(_BYTE *)(this + 779) = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4); /*0x645192*/
  *(_BYTE *)(this + 782) = INIClass::ReadInt_Overwrite( /*0x6451ae*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[5084],
                             (INIClass *)*(unsigned __int8 *)(this + 782));
  v20 = INIClass::ReadInt_Overwrite( /*0x6451c5*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[5064],
          (INIClass *)*(unsigned __int8 *)(this + 781));
  v21 = *(_BYTE *)(this + 783); /*0x6451ca*/
  *(_BYTE *)(this + 781) = v20; /*0x6451d0*/
  v22 = INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &unk_818610, v21); /*0x6451df*/
  v23 = *(int **)(this + 692); /*0x6451e4*/
  *(_BYTE *)(this + 783) = v22; /*0x6451ea*/
  eax5d = *(INIClass **)(this + 688); /*0x6451f0*/
  aP3_4 = (int)v23; /*0x6451f6*/
  v25 = INIClass::ReadDouble_Overwrite( /*0x645200*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[5052],
          eax5d);
  v24 = *(CCINIClass **)(this + 672); /*0x645205*/
  *(double *)(this + 688) = v25; /*0x64520b*/
  eax5e = INIClass::ReadInt_Overwrite( /*0x64521a*/
            (int)aP1,
            (unsigned __int8 *)(this + 36),
            (CCINIClass *)&stru_830620.__pad_579C[5040],
            (INIClass *)v24);
  aP3_4 = *(_DWORD *)(this + 676); /*0x645227*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[5028]; /*0x645228*/
  v47 = (INIClass *)(this + 36); /*0x64522d*/
  *(_DWORD *)(this + 672) = eax5e; /*0x64522e*/
  *(_DWORD *)(this + 676) = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4); /*0x645239*/
  v28 = INIClass::ReadInt_Overwrite( /*0x64524e*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[5012],
          *(INIClass **)(this + 680));
  v27 = *(CCINIClass **)(this + 684); /*0x645253*/
  *(_DWORD *)(this + 680) = v28; /*0x645259*/
  v30 = INIClass::ReadInt_Overwrite( /*0x645268*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[4996],
          (INIClass *)v27);
  aP3_4 = this + 660; /*0x645277*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[4976]; /*0x645278*/
  v47 = (INIClass *)(this + 36); /*0x64527d*/
  p_ownsFile = (unsigned __int8 *)&v50.ownsFile; /*0x64527e*/
  *(_DWORD *)(this + 684) = v30; /*0x645281*/
  Coord2 = INIClass::GetCoord2(aP1, (int *)p_ownsFile, (CCINIClass *)v47, (unsigned __int8 *)v43, (int *)aP3_4); /*0x645287*/
  *(_DWORD *)(this + 660) = *Coord2; /*0x64528e*/
  *(_DWORD *)(this + 664) = Coord2[1]; /*0x645298*/
  *(_DWORD *)(this + 668) = Coord2[2]; /*0x64529e*/
  Coord = INIClass::GetCoord( /*0x6452b1*/
            aP1,
            &v50,
            (INIClass *)(this + 36),
            (Color *)&stru_830620.__pad_579C[4964],
            (Color *)(this + 724));
  *(_WORD *)(this + 724) = *(_WORD *)Coord; /*0x6452bd*/
  *(_BYTE *)(this + 726) = *(_BYTE *)(Coord + 2); /*0x6452c4*/
  eax5j = INIClass::GetCoord( /*0x6452d7*/
            aP1,
            &v50,
            (INIClass *)(this + 36),
            (Color *)&stru_830620.__pad_579C[4952],
            (Color *)(this + 727));
  v34 = *(_WORD *)eax5j; /*0x6452e3*/
  aP3_4 = *(char *)(this + 777); /*0x6452e6*/
  *(_WORD *)(this + 727) = v34; /*0x6452e7*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[4932]; /*0x6452eb*/
  LOBYTE(eax5j) = *(_BYTE *)(eax5j + 2); /*0x6452f0*/
  v47 = (INIClass *)(this + 36); /*0x6452f3*/
  *(_BYTE *)(this + 729) = eax5j; /*0x6452f6*/
  al5d = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4); /*0x6452f9*/
  aP3_4 = 32; /*0x645302*/
  v43 = (CCINIClass *)v50.headNode; /*0x645304*/
  v47 = 0; /*0x645305*/
  p_ownsFile = (unsigned __int8 *)&stru_830620.__pad_579C[4916]; /*0x645307*/
  v40 = (VectorClass *)(this + 36); /*0x64530c*/
  *(_BYTE *)(this + 780) = al5d; /*0x64530f*/
  if ( INIClass::GetString(aP1, (INIClass *)v40, p_ownsFile, v47, (INIClass *)v43, aP3_4) ) /*0x645315*/
  {
    if ( _strcmpi((char *)v50.headNode, (char *)&stru_817460.sectionHead[1]) ) /*0x64532c*/
    {
      v36 = 0; /*0x64533d*/
      if ( (int)MEMORY[0xA83DA8] <= 0 ) /*0x645341*/
      {
LABEL_10:
        v37 = (_DWORD *)__2_YAPAXI_Z(0x318u); /*0x64536b*/
        if ( v37 ) /*0x64537a*/
          v33 = (ParticleTypeClass *)BuildingTypeClass::Construct(v37, (AbstractClass *)v50.headNode); /*0x645383*/
        else
          v33 = 0; /*0x64538a*/
        v39 = 0; /*0x645392*/
        if ( (int)MEMORY[0xA83DA8] <= 0 ) /*0x645396*/
        {
LABEL_17:
          v39 = -1; /*0x6453aa*/
        }
        else
        {
          v35 = (ObjectClass *)MEMORY[0xA83D9C]; /*0x645398*/
          while ( *(ParticleTypeClass **)v35->__pad_0 != v33 ) /*0x6453a0*/
          {
            ++v39; /*0x6453a2*/
            v35 = (ObjectClass *)((char *)v35 + 4); /*0x6453a3*/
            if ( v39 >= (int)MEMORY[0xA83DA8] ) /*0x6453a8*/
              goto LABEL_17; /*0x6453a8*/
          }
        }
        v36 = v39; /*0x6453ad*/
      }
      else
      {
        while ( _strcmpi((char *)v50.headNode, (char *)(*(_DWORD *)&MEMORY[0xA83D9C]->__pad_0[4 * v36] + 36)) ) /*0x64535f*/
        {
          if ( ++v36 >= (int)MEMORY[0xA83DA8] ) /*0x645369*/
            goto LABEL_10; /*0x645369*/
        }
      }
    }
    else
    {
      v36 = -1; /*0x6453b1*/
    }
    *(_DWORD *)(this + 784) = v36; /*0x6453b4*/
  }
  LOBYTE(v50.headNode[0]) = 0; /*0x6453cb*/
  INIClass::GetString( /*0x6453d0*/
    aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&stru_830620.__pad_579C[4744],
    0,
    (INIClass *)v50.headNode,
    32);
  v41 = 0; /*0x6453d5*/
  v42 = (char **)&stru_830620.__pad_579C[4864]; /*0x6453d7*/
  while ( _strcmpi((char *)v50.headNode, *v42) ) /*0x6453ee*/
  {
    ++v42; /*0x6453f0*/
    ++v41; /*0x6453f3*/
    if ( (int)v42 >= (int)&stru_830620.__pad_579C[4884] ) /*0x6453fa*/
    {
      v41 = -1; /*0x6453fc*/
      break; /*0x6453fc*/
    }
  }
  *(_DWORD *)(this + 788) = v41; /*0x6453ff*/
  return 1; /*0x645407*/
}


// ==== 0x00645430  BuildingTypeClass::FindOrCreateEx  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::FindOrCreateEx(AbstractClass *Source)
{
  int v2; // esi
  _DWORD *v3; // eax
  ParticleTypeClass *v4; // eax
  int v6; // ecx
  ObjectClass *i; // edx

  if ( !_strcmpi(Source, &stru_817460.sectionHead[1]) ) /*0x645444*/
    return -1; /*0x645444*/
  v2 = 0; /*0x64544b*/
  if ( *(int *)&HouseClass_Player.__pad_3C[32] <= 0 ) /*0x64544f*/
  {
LABEL_5:
    v3 = (_DWORD *)__2_YAPAXI_Z(0x318u); /*0x645474*/
    if ( v3 ) /*0x645483*/
      v4 = (ParticleTypeClass *)BuildingTypeClass::Construct(v3, Source); /*0x645488*/
    else
      v4 = 0; /*0x645494*/
    v6 = 0; /*0x64549c*/
    if ( *(int *)&HouseClass_Player.__pad_3C[32] > 0 ) /*0x6454a0*/
    {
      for ( i = *(ObjectClass **)&HouseClass_Player.__pad_3C[20]; /*0x6454a2*/
            *(ParticleTypeClass **)i->__pad_0 != v4;
            i = (ObjectClass *)((char *)i + 4) )
      {
        if ( ++v6 >= *(int *)&HouseClass_Player.__pad_3C[32] ) /*0x6454b2*/
          return -1; /*0x6454b2*/
      }
      return v6; /*0x6454bb*/
    }
    return -1; /*0x6454b9*/
  }
  while ( _strcmpi(Source, (const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_3C[20] + 4 * v2) + 36)) ) /*0x645468*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_3C[32] ) /*0x645472*/
      goto LABEL_5; /*0x645472*/
  }
  return v2; /*0x645491*/
}


// ==== 0x006454E0  ParticleTypeClass::ProcessPower  this=ParticleTypeClass  sig=csp ====
int __thiscall ParticleTypeClass::ProcessPower(int this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6454e9*/
  Power::TimerProcess(*(_DWORD *)(this + 732)); /*0x6454f7*/
  Power::TimerProcess(*(_DWORD *)(this + 736)); /*0x645505*/
  Power::TimerProcess(*(_DWORD *)(this + 744)); /*0x645513*/
  Power::TimerProcess(*(_DWORD *)(this + 748)); /*0x645521*/
  Power::TimerProcess(*(_DWORD *)(this + 752)); /*0x64552f*/
  Power::TimerProcess(*(_DWORD *)(this + 756)); /*0x64553d*/
  Power::TimerProcess(*(_DWORD *)(this + 760)); /*0x64554b*/
  Checksummer::Add_float(*(_DWORD *)(this + 764)); /*0x645559*/
  Checksummer::Add_float(*(_DWORD *)(this + 768)); /*0x645567*/
  Power::TimerProcess(*(_DWORD *)(this + 772)); /*0x645575*/
  LOBYTE(v3) = *(_BYTE *)(this + 776); /*0x64557a*/
  Power::FlagProcess(a2, v3); /*0x645583*/
  LOBYTE(v4) = *(_BYTE *)(this + 777); /*0x645588*/
  v5 = Power::FinalizeDrain(a2, v4); /*0x645591*/
  LOBYTE(v5) = *(_BYTE *)(this + 778); /*0x645596*/
  Power::FinalizeDrain(a2, v5); /*0x64559f*/
  LOBYTE(v6) = *(_BYTE *)(this + 779); /*0x6455a4*/
  Power::FinalizeDrain(a2, v6); /*0x6455ad*/
  Power::TimerProcess(*(unsigned __int8 *)(this + 781)); /*0x6455bd*/
  Power::TimerProcess(*(unsigned __int8 *)(this + 782)); /*0x6455cd*/
  LOBYTE(v7) = *(_BYTE *)(this + 783); /*0x6455d2*/
  Power::FlagProcess(a2, v7); /*0x6455db*/
  Power::TimerProcess(*(_DWORD *)(this + 784)); /*0x6455e9*/
  Power::TimerProcess(*(_DWORD *)(this + 788)); /*0x6455f7*/
  return Checksummer::Add_double(*(_DWORD *)(this + 688), *(_DWORD *)(this + 692)); /*0x645611*/
}


// ==== 0x00645620  ParticleTypeClass::ddtor  this=ParticleTypeClass  sig=csp ====
int __stdcall C07F0188::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x645626*/
    return -2147467261; /*0x645628*/
  *a2 = 1883112523; /*0x645636*/
  a2[1] = 298979249; /*0x64563e*/
  a2[2] = 1610642049; /*0x645647*/
  a2[3] = -1252326136; /*0x645650*/
  return 0; /*0x64562d*/
}


// ==== 0x00645660  ParticleTypeClass::SaveLoad_Prefix  this=ParticleTypeClass  sig=csp ====
int __stdcall ParticleTypeClass::SaveLoad_Prefix(int a1, int a2)
{
  int *v2; // ebp
  int v3; // edi
  int result; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // [esp+28h] [ebp-4h]

  v2 = (int *)a2; /*0x645663*/
  v3 = a1; /*0x645669*/
  result = ObjectTypeClass::LoadCleanup(a1, a2); /*0x64566f*/
  if ( result >= 0 ) /*0x645678*/
  {
    if ( v3 ) /*0x645680*/
    {
      ObjectTypeClass::Construct((_DWORD *)v3, (int)&a2); /*0x645689*/
      ParticleTypeClass::Constructor((_DWORD *)(v3 + 696), 0, 0); /*0x645698*/
      *(_DWORD *)(v3 + 696) = &vt_TypeList_RGBClass; /*0x64569d*/
      *(_DWORD *)v3 = &ParticleTypeClass::`vftable'; /*0x6456a3*/
      *(_DWORD *)(v3 + 4) = &ParticleTypeClass::`vftable'; /*0x6456a9*/
      *(_DWORD *)(v3 + 8) = &ParticleTypeClass::`vftable'; /*0x6456b0*/
      *(_DWORD *)(v3 + 12) = &vt_ParticleTypeClass; /*0x6456b7*/
    }
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v3 + 740)); /*0x6456ca*/
    v5 = *v2; /*0x6456cf*/
    a1 = 0; /*0x6456db*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v5 + 12))(v2, &a1, 4, 0); /*0x6456df*/
    if ( result >= 0 ) /*0x6456e4*/
    {
      v14 = 0; /*0x6456ee*/
      if ( a1 <= 0 ) /*0x6456f4*/
      {
LABEL_14:
        ObjectTypeClass::Load2DArt((char *)v3); /*0x645783*/
        return 0; /*0x64578a*/
      }
      else
      {
        while ( 1 ) /*0x6456fa*/
        {
          v6 = *v2; /*0x6456fa*/
          LOWORD(a2) = 0; /*0x645706*/
          BYTE2(a2) = 0; /*0x64570e*/
          result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 12))(v2, &a2, 3, 0); /*0x645712*/
          if ( result < 0 ) /*0x645717*/
            break; /*0x645717*/
          v7 = *(_DWORD *)(v3 + 704); /*0x645719*/
          if ( *(_DWORD *)(v3 + 712) < v7 /*0x645747*/
            || (*(_BYTE *)(v3 + 709) || !v7)
            && (v8 = *(_DWORD *)(v3 + 716), v8 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v3 + 696) + 8))(v3 + 696, v7 + v8, 0) )
          {
            v9 = *(_DWORD *)(v3 + 712); /*0x64574e*/
            v10 = v9 + 1; /*0x645751*/
            v11 = 3 * v9; /*0x645754*/
            v12 = *(_DWORD *)(v3 + 700); /*0x645757*/
            *(_DWORD *)(v3 + 712) = v10; /*0x64575a*/
            v13 = v12 + v11; /*0x64575d*/
            *(_WORD *)v13 = a2; /*0x645764*/
            *(_BYTE *)(v13 + 2) = BYTE2(a2); /*0x64576b*/
          }
          if ( ++v14 >= a1 ) /*0x64577d*/
            goto LABEL_14; /*0x64577d*/
        }
      }
    }
  }
  return result; /*0x64578c*/
}


// ==== 0x006457A0  ParticleTypeClass::SaveLoad_Prefix_0  this=ParticleTypeClass  sig=csp ====
int __stdcall ParticleTypeClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, int aP1, int aP2)
{
  int result; // eax
  int v4; // edx
  int v5; // ebp
  int v6; // edi

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, (ObjectTypeClass *)aP1, (TechnoTypeClass *)aP2); /*0x6457b3*/
  if ( result >= 0 ) /*0x6457ba*/
  {
    v4 = *(_DWORD *)aP1; /*0x6457c2*/
    aP2 = aP0->MyEffectivenessCoefficient; /*0x6457ce*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v4 + 16))(aP1, &aP2, 4, 0); /*0x6457d2*/
    if ( result >= 0 ) /*0x6457d7*/
    {
      v5 = 0; /*0x6457dd*/
      if ( aP2 > 0 ) /*0x6457e1*/
      {
        v6 = 0; /*0x6457e3*/
        do /*0x645806*/
        {
          if ( (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)aP1 + 16))(aP1, v6 + aP0->?, 3, 0) < 0 ) /*0x6457fa*/
            break; /*0x6457fa*/
          ++v5; /*0x645800*/
          v6 += 3; /*0x645801*/
        }
        while ( v5 < aP2 ); /*0x645806*/
      }
      return 0; /*0x645808*/
    }
  }
  return result; /*0x64580a*/
}


// ==== 0x00645820  NetworkEventClass::Process  this=ObjectClass  sig=csp ====
ParticleTypeClass *__thiscall NetworkEventClass::Process(AbstractClass *Source)
{
  int v2; // esi
  _DWORD *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x64583c*/
    return 0; /*0x64589f*/
  v2 = 0; /*0x64584d*/
  if ( *(int *)&HouseClass_Player.__pad_3C[32] <= 0 ) /*0x645851*/
  {
LABEL_6:
    v3 = (_DWORD *)__2_YAPAXI_Z(0x318u); /*0x645876*/
    if ( v3 ) /*0x645885*/
      return (ParticleTypeClass *)BuildingTypeClass::Construct(v3, Source); /*0x645891*/
    return 0; /*0x645885*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_3C[20] + 4 * v2) + 36), Source) ) /*0x64586a*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_3C[32] ) /*0x645874*/
      goto LABEL_6; /*0x645874*/
  }
  return *(ParticleTypeClass **)(*(_DWORD *)&HouseClass_Player.__pad_3C[20] + 4 * v2); /*0x64588f*/
}


// ==== 0x006458B0  ParticleTypeClass::GetType  this=ParticleTypeClass  sig=csp ====
int __thiscall ParticleTypeClass::_vt10(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = this->q2E4; /*0x6458b0*/
  if ( result == a2 ) /*0x6458bc*/
    this->q2E4 = 0; /*0x6458be*/
  return result; /*0x6458c8*/
}


// ==== 0x006458D0  ObjectClass::method_6458D0  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall sub_6458D0(void *this)
{
  ObjectClass *v2; // edi
  const void **v3; // esi

  v2 = 0; /*0x6458d5*/
  v3 = (const void **)&stru_830620.__pad_579C[4864]; /*0x6458d7*/
  while ( _strcmpi(this, *v3) ) /*0x6458ea*/
  {
    ++v3; /*0x6458ec*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x6458ef*/
    if ( (int)v3 >= (int)&stru_830620.__pad_579C[4884] ) /*0x6458f6*/
      return (ObjectClass *)-1; /*0x6458fe*/
  }
  return v2; /*0x6458f8*/
}


// ==== 0x00645910  ParticleTypeClass::GetObjectSize  this=ParticleTypeClass  sig=csp ====
int ParticleTypeClass::_vt12()
{
  return 792; /*0x645915*/
}


// ==== 0x00645920  ParticleTypeClass::GetTypeIdentifier  this=ParticleTypeClass  sig=csp ====
int ParticleTypeClass::_vt11()
{
  return 23; /*0x645925*/
}


// ==== 0x00645930  ParticleTypeClass::Stub  this=ParticleTypeClass  sig=csp ====
char __stdcall ParticleTypeClass::_vt32(int a1, int a2)
{
  return 0; /*0x645932*/
}


// ==== 0x00645940  ParticleTypeClass::StubReturnFalse  this=ParticleTypeClass  sig=csp ====
int __stdcall ParticleTypeClass::_vt35(int a1)
{
  return 0; /*0x645942*/
}


// ==== 0x00645950  ParticleTypeClass::ddtor  this=ParticleTypeClass  sig=csp ====
ParticleTypeClass *__thiscall ParticleTypeClass::ddtor(void **Block, char a2)
{
  int v3; // eax
  int v4; // eax
  void *v5; // eax
  void **v7; // [esp+4h] [ebp-4h] BYREF

  *Block = &ParticleTypeClass::`vftable'; /*0x645956*/
  *(Block + 1) = &ParticleTypeClass::`vftable'; /*0x64595c*/
  *(Block + 2) = &ParticleTypeClass::`vftable'; /*0x645963*/
  *(Block + 3) = &vt_ParticleTypeClass; /*0x64596a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x645971*/
  v7 = Block; /*0x645986*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v7); /*0x64598a*/
  if ( v3 != -1 && v3 < MEMORY[0xB0F680] && v3 < --MEMORY[0xB0F680] ) /*0x6459a5*/
  {
    do /*0x6459bd*/
    {
      ++v3; /*0x6459ad*/
      *((_DWORD *)MEMORY[0xB0F674] + v3 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v3); /*0x6459b1*/
    }
    while ( v3 < MEMORY[0xB0F680] ); /*0x6459bd*/
  }
  v7 = Block; /*0x6459cf*/
  v4 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA83D98] + 16))(&MEMORY[0xA83D98], &v7); /*0x6459d3*/
  if ( v4 != -1 && v4 < MEMORY[0xA83DA8] && v4 < --MEMORY[0xA83DA8] ) /*0x6459ee*/
  {
    do /*0x645a06*/
    {
      ++v4; /*0x6459f6*/
      *((_DWORD *)MEMORY[0xA83D9C] + v4 - 1) = *((_DWORD *)MEMORY[0xA83D9C] + v4); /*0x6459fa*/
    }
    while ( v4 < MEMORY[0xA83DA8] ); /*0x645a06*/
  }
  v5 = *(Block + 175); /*0x645a08*/
  *(Block + 174) = &vt_VectorClass_RGBClass; /*0x645a0e*/
  if ( v5 && *((_BYTE *)Block + 709) ) /*0x645a1c*/
  {
    OperatorDelete(v5); /*0x645a27*/
    *(Block + 175) = 0; /*0x645a2f*/
  }
  *((_BYTE *)Block + 709) = 0; /*0x645a3b*/
  *(Block + 176) = 0; /*0x645a42*/
  ObjectTypeClass::Destruct((int)Block); /*0x645a4c*/
  if ( (a2 & 1) != 0 ) /*0x645a56*/
    OperatorDelete(Block); /*0x645a59*/
  return (ParticleTypeClass *)Block; /*0x645a63*/
}


// ==== 0x00645A70  ParticleTypeClass::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_645A70(_DWORD *this, int a2, int a3)
{
  _BYTE *v4; // eax
  int v5; // ecx
  char *v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx

  this->Items = 0; /*0x645a7d*/
  this->Capacity = a2; /*0x645a80*/
  this->q030 = 1; /*0x645a83*/
  this->q034 = 0; /*0x645a87*/
  *this = &vt_VectorClass_RGBClass; /*0x645a8a*/
  if ( a2 ) /*0x645a90*/
  {
    if ( a3 ) /*0x645a98*/
    {
      if ( a2 - 1 >= 0 ) /*0x645a9f*/
      {
        v4 = (_BYTE *)(a3 + 2); /*0x645aa1*/
        v5 = a2; /*0x645aa4*/
        do /*0x645ab1*/
        {
          *(v4 - 2) = 0; /*0x645aa5*/
          *(v4 - 1) = 0; /*0x645aa8*/
          *v4 = 0; /*0x645aab*/
          v4 += 3; /*0x645aad*/
          --v5; /*0x645ab0*/
        }
        while ( v5 ); /*0x645ab1*/
      }
      this->Items = a3; /*0x645ab3*/
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(3 * a2); /*0x645abc*/
      if ( v6 ) /*0x645ac6*/
      {
        if ( a2 - 1 >= 0 ) /*0x645acd*/
        {
          v7 = v6 + 2; /*0x645acf*/
          v8 = a2; /*0x645ad2*/
          do /*0x645adf*/
          {
            *(v7 - 2) = 0; /*0x645ad3*/
            *(v7 - 1) = 0; /*0x645ad6*/
            *v7 = 0; /*0x645ad9*/
            v7 += 3; /*0x645adb*/
            --v8; /*0x645ade*/
          }
          while ( v8 ); /*0x645adf*/
        }
      }
      else
      {
        v6 = 0; /*0x645ae3*/
      }
      this->Items = v6; /*0x645ae5*/
      this->q034 = 1; /*0x645ae8*/
    }
  }
  *this = &vt_DynamicVectorClass_RGBClass; /*0x645aec*/
  this->q005 = 10; /*0x645af2*/
  this->q010 = 0; /*0x645af9*/
  return this; /*0x645afe*/
}


// ==== 0x00645B10  ?$DynamicVectorClass@VRGBClass@@::getTeamIndex  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall AbstractClass::getTeamIndex(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x645b13*/
  *Block = &vt_VectorClass_RGBClass; /*0x645b16*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x645b20*/
  {
    __3_YAXPAX_Z(v3); /*0x645b28*/
    *(Block + 1) = 0; /*0x645b30*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x645b3b*/
  *(Block + 2) = 0; /*0x645b41*/
  if ( (a2 & 1) != 0 ) /*0x645b48*/
    __3_YAXPAX_Z(Block); /*0x645b4b*/
  return (DynamicVector *)Block; /*0x645b55*/
}


// ==== 0x00645B60  ObjectClass::method_645B60  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall sub_645B60(void *this)
{
  ObjectClass *v2; // edi
  const void **v3; // esi

  v2 = 0; /*0x645b65*/
  v3 = (const void **)&off_7F0248; /*0x645b67*/
  while ( _strcmpi(this, *v3) ) /*0x645b7a*/
  {
    ++v3; /*0x645b7c*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x645b7f*/
    if ( (int)v3 >= (int)&flt_7F0278 ) /*0x645b86*/
      return 0; /*0x645b8d*/
  }
  return v2; /*0x645b88*/
}


// ==== 0x00645BA0  sub_645BA0  this=-  sig=ida-proto ====
char *__fastcall sub_645BA0(int a1)
{
  return off_7F0248[a1]; /*0x645ba7*/
}


// ==== 0x00645BB0  ObjectClass::GetSuperWeaponTypeFlag  this=ObjectClass  sig=csp ====
int __thiscall GetSuperWeaponTypeFlag(void *this)
{
  int result; // eax

  switch ( (unsigned int)this ) /*0x645bb8*/
  {
    case 2u: /*0x645bb8*/
      result = 32; /*0x645bbf*/
      break; /*0x645bc4*/
    case 3u: /*0x645bb8*/
      result = 64; /*0x645bc5*/
      break; /*0x645bca*/
    case 4u: /*0x645bb8*/
      result = 8; /*0x645bcb*/
      break; /*0x645bd0*/
    case 5u: /*0x645bb8*/
      result = 16; /*0x645bd1*/
      break; /*0x645bd6*/
    case 6u: /*0x645bb8*/
      result = 4096; /*0x645bd7*/
      break; /*0x645bdc*/
    case 7u: /*0x645bb8*/
      result = 0x2000; /*0x645bdd*/
      break; /*0x645be2*/
    case 9u: /*0x645bb8*/
      result = 2048; /*0x645be3*/
      break; /*0x645be8*/
    case 0xAu: /*0x645bb8*/
      result = 0x8000; /*0x645be9*/
      break; /*0x645bee*/
    case 0xBu: /*0x645bb8*/
      result = 0x10000; /*0x645bef*/
      break; /*0x645bf4*/
    default:
      result = 0; /*0x645bf5*/
      break; /*0x645bf5*/
  }
  return result; /*0x645bc4*/
}


// ==== 0x00645C30  Int4::Set  this=Int4  sig=csp ====
_DWORD *__thiscall Int4::Set(_DWORD *this, IUnknown *aP1, IUnknown *aP2, IUnknown *aP3, int a5)
{
  *this = aP1; /*0x645c3a*/
  this->q004 = aP2; /*0x645c40*/
  this->q008 = aP3; /*0x645c47*/
  this->q00C = a5; /*0x645c4a*/
  return this; /*0x645c4d*/
}


// ==== 0x00645C50  Int4::Set2  this=Int4  sig=csp ====
int __thiscall Int4_Set2(_DWORD *this, int a2, int a3, int a4, int a5)
{
  *this = a2; /*0x645c58*/
  this->q004 = a3; /*0x645c5e*/
  this->q008 = a4; /*0x645c65*/
  this->q00C = a5; /*0x645c68*/
  return a4; /*0x645c6b*/
}


// ==== 0x00645CD0  ObjectClass::method_645CD0  this=ObjectClass  sig=csp ====
void __thiscall sub_645CD0(float *this, float a2)
{
  *this = a2 * *this; /*0x645cd6*/
  this->vtable2 = a2 * this->vtable2; /*0x645cdf*/
  this->vtable3 = a2 * this->vtable3; /*0x645ce9*/
  this->vtable4 = a2 * this->vtable4; /*0x645cf3*/
}


// ==== 0x00645D00  Function::645D00  this=Function  sig=csp ====
char *__thiscall Function::645D00(char *this, int a2)
{
  return this + 4 * a2; /*0x645d07*/
}


// ==== 0x00645D20  Float4::Copy  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Float4::Copy(float *this, IUnknown *aP1, IUnknown *aP2)
{
  *this = *(float *)&aP2->field_0; /*0x645d27*/
  this->vtable2 = *(float *)&aP2->field_4; /*0x645d2c*/
  this->vtable3 = *(float *)&aP2->field_8; /*0x645d32*/
  this->vtable4 = *(float *)&aP2->field_C; /*0x645d3c*/
  aP1->field_0 = *(int *)this; /*0x645d43*/
  aP1->field_4 = *(int *)(this + 1); /*0x645d48*/
  aP1->field_8 = *(int *)(this + 2); /*0x645d4e*/
  aP1->field_C = *(int *)(this + 3); /*0x645d55*/
  return &aP1->field_0; /*0x645d54*/
}


// ==== 0x00645D60  ObjectClass::method_645D60  this=ObjectClass  sig=csp ====
float *__thiscall sub_645D60(float *this, float *a2)
{
  float *v3; // eax
  float *v4; // eax
  double v5; // st7
  int v6; // edx
  int v7; // ecx
  double v8; // st7
  float *v9; // eax
  float *v10; // eax
  float *v11; // eax
  int v12; // edx
  unsigned __int8 v14; // c0
  unsigned __int8 v15; // c3
  int v17; // [esp+0h] [ebp-78h]
  int v18; // [esp+4h] [ebp-74h]
  int v19; // [esp+8h] [ebp-70h]
  int v20; // [esp+Ch] [ebp-6Ch]
  float v21; // [esp+18h] [ebp-60h] BYREF
  int v22; // [esp+1Ch] [ebp-5Ch]
  int v23; // [esp+20h] [ebp-58h]
  int v24; // [esp+24h] [ebp-54h]
  int v25; // [esp+28h] [ebp-50h]
  int v26; // [esp+2Ch] [ebp-4Ch]
  int v27; // [esp+30h] [ebp-48h]
  int v28; // [esp+34h] [ebp-44h]
  float v29[4]; // [esp+38h] [ebp-40h] BYREF
  float v30[4]; // [esp+48h] [ebp-30h] BYREF
  float v31[4]; // [esp+58h] [ebp-20h] BYREF
  float v32[4]; // [esp+68h] [ebp-10h] BYREF

  v21 = *this; /*0x645d6f*/
  v22 = this->vtable2; /*0x645d76*/
  v23 = this->vtable3; /*0x645d7d*/
  v24 = this->vtable4; /*0x645d88*/
  v3 = sub_6460C0(v29, a2); /*0x645d8e*/
  v4 = QuaternionMathMultiply(v30, &v21, v3); /*0x645d9c*/
  v5 = this->vtable4; /*0x645da3*/
  v6 = *((_DWORD *)v4 + 1); /*0x645da6*/
  v25 = *(_DWORD *)v4; /*0x645da9*/
  v7 = *((_DWORD *)v4 + 2); /*0x645daf*/
  v26 = v6; /*0x645db2*/
  v27 = v7; /*0x645db7*/
  *(float *)&v20 = -v5; /*0x645dbe*/
  v8 = this->vtable3; /*0x645dc1*/
  v28 = *((_DWORD *)v4 + 3); /*0x645dc5*/
  *(float *)&v19 = -v8; /*0x645dcb*/
  *(float *)&v18 = -this->vtable2; /*0x645dd4*/
  *(float *)&v17 = -*this; /*0x645de0*/
  v9 = (float *)Int4::Set(v30, v17, v18, v19, v20); /*0x645de3*/
  v29[0] = *v9; /*0x645dea*/
  v29[1] = v9[1]; /*0x645df1*/
  v29[2] = v9[2]; /*0x645df8*/
  v29[3] = v9[3]; /*0x645e03*/
  v10 = sub_6460C0(v31, a2); /*0x645e09*/
  v11 = QuaternionMathMultiply(v32, v29, v10); /*0x645e17*/
  v21 = *v11; /*0x645e1e*/
  v22 = *((_DWORD *)v11 + 1); /*0x645e25*/
  v12 = *((_DWORD *)v11 + 3); /*0x645e30*/
  v23 = *((_DWORD *)v11 + 2); /*0x645e33*/
  v24 = v12; /*0x645e3b*/
  if ( !(v14 | v15) ) /*0x645e97*/
  {
    *this = -*this; /*0x645ea2*/
    this->vtable2 = -this->vtable2; /*0x645ea9*/
    this->vtable3 = -this->vtable3; /*0x645eb1*/
    this->vtable4 = -this->vtable4; /*0x645eb9*/
  }
  return this; /*0x645ebe*/
}


// ==== 0x00645ED0  QuaternionMathMultiply  this=-  sig=csp ====
float *__fastcall QuaternionMathMultiply(ObjectClass *aP0, float *a1, float *a2)
{
  double v4; // st6
  double v5; // st7
  float v7; // [esp+4h] [ebp-40h]
  float v8; // [esp+8h] [ebp-3Ch]
  float v9; // [esp+Ch] [ebp-38h]
  float v10; // [esp+10h] [ebp-34h]
  float v11; // [esp+14h] [ebp-30h]
  float v12; // [esp+14h] [ebp-30h]
  float v13; // [esp+18h] [ebp-2Ch]
  float v14; // [esp+18h] [ebp-2Ch]
  float v15; // [esp+1Ch] [ebp-28h]
  float v16; // [esp+1Ch] [ebp-28h]
  float v17; // [esp+28h] [ebp-1Ch]
  float v18; // [esp+2Ch] [ebp-18h]
  float v19; // [esp+38h] [ebp-Ch]
  float v20; // [esp+3Ch] [ebp-8h]
  float a2a; // [esp+48h] [ebp+4h]

  v11 = *a2; /*0x645eea*/
  v13 = a2[1]; /*0x645ef4*/
  v15 = a2[2]; /*0x645efb*/
  a2a = a2[3]; /*0x645eff*/
  v17 = a1[1] * a2a; /*0x645f0f*/
  v18 = a1[2] * a2a; /*0x645f1b*/
  v4 = a1[3]; /*0x645f1f*/
  v12 = v4 * v11; /*0x645f28*/
  v14 = v13 * v4; /*0x645f32*/
  v16 = v15 * v4; /*0x645f3c*/
  v19 = a1[2] * *a2 - a2[2] * *a1; /*0x645f5c*/
  v20 = a2[1] * *a1 - a1[1] * *a2; /*0x645f6c*/
  v7 = a1[1] * a2[2] - a1[2] * a2[1] + v12 + *a1 * a2a; /*0x645f76*/
  v8 = v17 + v14 + v19; /*0x645f88*/
  v9 = v18 + v16 + v20; /*0x645f98*/
  v10 = v4 * a2[3] - (a1[2] * a2[2] + a1[1] * a2[1] + *a1 * *a2); /*0x645fb9*/
  v5 = v9 * v9 + v8 * v8 + v10 * v10 + v7 * v7; /*0x645fe1*/
  if ( 0.0 != v5 ) /*0x645ff0*/
  {
    v7 = v7 / v5; /*0x645ff8*/
    v8 = v8 / v5; /*0x646002*/
    v9 = v9 / v5; /*0x64600c*/
    v10 = v10 / v5; /*0x646016*/
  }
  *(float *)aP0->__pad_0 = v7; /*0x646022*/
  *(float *)&aP0->__pad_0[4] = v8; /*0x646028*/
  *(float *)&aP0->__pad_0[8] = v9; /*0x64602f*/
  *(float *)&aP0->__pad_0[12] = v10; /*0x646036*/
  return (float *)aP0->__pad_0; /*0x646039*/
}


// ==== 0x00646040  sub_646040  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_646040(ObjectClass *aP0, float *a1, float *a2)
{
  double v4; // st7
  float *v5; // eax
  float v7; // [esp+4h] [ebp-20h] BYREF
  float v8; // [esp+8h] [ebp-1Ch]
  float v9; // [esp+Ch] [ebp-18h]
  ObjectClass *v10; // [esp+10h] [ebp-14h]
  float v11[4]; // [esp+14h] [ebp-10h] BYREF

  v7 = -*a2; /*0x64604e*/
  v8 = -a2[1]; /*0x646057*/
  v9 = -a2[2]; /*0x646064*/
  v4 = a2[3]; /*0x646068*/
  v11[1] = v8; /*0x64606f*/
  v11[0] = v7; /*0x646073*/
  *(float *)&v10 = v4; /*0x64607b*/
  v11[2] = v9; /*0x646083*/
  LODWORD(v11[3]) = v10; /*0x64608b*/
  v5 = QuaternionMathMultiply((ObjectClass *)&v7, a1, v11); /*0x646094*/
  *(float *)aP0->__pad_0 = *v5; /*0x64609d*/
  *(float *)&aP0->__pad_0[4] = v5[1]; /*0x6460a2*/
  *(float *)&aP0->__pad_0[8] = v5[2]; /*0x6460a8*/
  *(float *)&aP0->__pad_0[12] = v5[3]; /*0x6460ae*/
  return aP0->__pad_0; /*0x6460b3*/
}


// ==== 0x006460C0  sub_6460C0  this=-  sig=csp ====
float *__fastcall sub_6460C0(float *a0, ObjectClass *aP1)
{
  float v3; // [esp+0h] [ebp-10h]
  float v4; // [esp+4h] [ebp-Ch]
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  v3 = -*(float *)aP1->__pad_0; /*0x6460c7*/
  v4 = -*(float *)&aP1->__pad_0[4]; /*0x6460d0*/
  v5 = -*(float *)&aP1->__pad_0[8]; /*0x6460d9*/
  v6 = *(float *)&aP1->__pad_0[12]; /*0x6460e6*/
  *a0 = v3; /*0x6460ea*/
  a0[1] = v4; /*0x6460f0*/
  a0[2] = v5; /*0x6460f7*/
  a0[3] = v6; /*0x6460fe*/
  return a0; /*0x646101*/
}


// ==== 0x00646110  sub_646110  this=-  sig=ida-proto ====
float *__fastcall sub_646110(float *a1, float *a2)
{
  float v3; // [esp+0h] [ebp-10h]
  float v4; // [esp+4h] [ebp-Ch]
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  v3 = -*a2; /*0x646117*/
  v4 = -a2[1]; /*0x646120*/
  v5 = -a2[2]; /*0x646129*/
  v6 = a2[3]; /*0x646136*/
  *a1 = v3; /*0x64613a*/
  a1[1] = v4; /*0x646140*/
  a1[2] = v5; /*0x646147*/
  a1[3] = v6; /*0x64614e*/
  return a1; /*0x646151*/
}


// ==== 0x00646464  ObjectClass::method  this=ObjectClass  sig=csp ====
// positive sp value has been detected, the output may be wrong!
int __userpurge sub_646464@<eax>(int a1@<eax>, int a2@<ecx>, int a3@<esi>, int a4, int a5, int a6, int a7, int a8)
{
  *(_DWORD *)(a2 + 12) = a1; /*0x646464*/
  return a3; /*0x64646e*/
}


// ==== 0x00646480  FromQuaternionAxisAngle  this=IUnknown  sig=csp ====
float *__fastcall Quaternion_FromAxisAngle(float *a1, float *a2, float a3)
{
  float v3; // ebx
  float v4; // ebp
  float v5; // edi
  double v7; // st7
  double v8; // st7
  double v9; // st7
  float v11; // [esp+18h] [ebp-28h]
  float v12; // [esp+24h] [ebp-1Ch]
  float v13; // [esp+28h] [ebp-18h]
  float v14; // [esp+2Ch] [ebp-14h]
  float v15; // [esp+30h] [ebp-10h]
  float v16; // [esp+30h] [ebp-10h]
  float v17; // [esp+34h] [ebp-Ch]
  float v18; // [esp+34h] [ebp-Ch]
  float v19; // [esp+38h] [ebp-8h]
  float v20; // [esp+38h] [ebp-8h]
  float v21; // [esp+3Ch] [ebp-4h]

  v3 = a2[1]; /*0x646484*/
  v4 = a2[2]; /*0x646488*/
  v5 = *a2; /*0x6464a5*/
  v11 = *a2; /*0x6464ac*/
  v7 = Math::Sqrt(v4 * v4 + v3 * v3 + v11 * v11); /*0x6464bf*/
  if ( v7 == 0.0 ) /*0x6464d2*/
  {
    v12 = v5; /*0x64650c*/
    v13 = v3; /*0x646510*/
    v14 = v4; /*0x646514*/
  }
  else
  {
    v15 = v11 / v7; /*0x6464da*/
    v12 = v15; /*0x6464e8*/
    v17 = v3 / v7; /*0x6464ec*/
    v13 = v17; /*0x6464f8*/
    v19 = v4 / v7; /*0x6464fc*/
    v14 = v19; /*0x646504*/
  }
  v8 = Math::SinCos(a3 * 0.5); /*0x646530*/
  v16 = v12 * v8; /*0x64653d*/
  v18 = v13 * v8; /*0x646547*/
  v20 = v14 * v8; /*0x646551*/
  v9 = Math::ArcTan2(a3 * 0.5); /*0x646557*/
  v21 = v9; /*0x646569*/
  *a1 = v16; /*0x64656d*/
  a1[1] = v18; /*0x646575*/
  a1[2] = v20; /*0x64657e*/
  a1[3] = v21; /*0x646581*/
  return a1; /*0x64657c*/
}


// ==== 0x00646590  Math::QuaternionSlerp  this=Math  sig=csp ====
_DWORD *__fastcall sub_646590(_DWORD *a1, float *a2, float *a3, float a4)
{
  double v6; // st7
  double v7; // st6
  double v8; // st7
  float *v9; // eax
  int v10; // edx
  double v11; // st6
  double v12; // st5
  double v13; // st7
  float *v14; // eax
  int v15; // edx
  double v16; // st6
  double v17; // st5
  int v18; // eax
  int v19; // edx
  int v20; // eax
  double v22; // [esp+18h] [ebp-28h]
  double v23; // [esp+18h] [ebp-28h]
  double v24; // [esp+20h] [ebp-20h]
  double v25; // [esp+20h] [ebp-20h]
  double v26; // [esp+28h] [ebp-18h]
  int v27; // [esp+30h] [ebp-10h] BYREF
  int v28; // [esp+34h] [ebp-Ch]
  int v29; // [esp+38h] [ebp-8h]
  int v30; // [esp+3Ch] [ebp-4h]

  v6 = a2[3] * a3[3]; /*0x6465a6*/
  v7 = a2[2] * a3[2]; /*0x6465ac*/
  v27 = 0; /*0x6465af*/
  v28 = 0; /*0x6465b7*/
  v29 = 0; /*0x6465bf*/
  v30 = 1065353216; /*0x6465c7*/
  v22 = v6 + v7 + a2[1] * a3[1] + *a2 * *a3; /*0x6465df*/
  if ( v22 + 1.0 <= 0.00001 ) /*0x6465f4*/
  {
    v25 = Math::SinCos((1.0 - a4) * 1.570796326794895); /*0x6466c1*/
    v13 = Math::SinCos(a4 * 1.570796326794895); /*0x6466d1*/
    v14 = a2; /*0x6466df*/
    v15 = 4; /*0x6466e3*/
    do /*0x6466fd*/
    {
      v16 = *(float *)((char *)v14 + (char *)a3 - (char *)a2) * v13; /*0x6466eb*/
      v17 = *v14++ * v25; /*0x6466ef*/
      --v15; /*0x6466f6*/
      *(float *)((char *)v14 + (char *)&v27 - (char *)a2 - 4) = v16 + v17; /*0x6466f9*/
    }
    while ( v15 ); /*0x6466fd*/
  }
  else
  {
    if ( 1.0 - v22 <= 0.00001 ) /*0x64660f*/
    {
      v24 = 1.0 - a4; /*0x646678*/
      v8 = a4; /*0x64667c*/
    }
    else
    {
      v23 = Math::ArcTan2_Table(v22); /*0x646620*/
      v26 = Math::SinCos(v23); /*0x646633*/
      v24 = Math::SinCos((1.0 - a4) * v23) / v26; /*0x646653*/
      v8 = Math::SinCos(a4 * v23) / v26; /*0x646666*/
    }
    v9 = a2; /*0x646685*/
    v10 = 4; /*0x646689*/
    do /*0x6466a3*/
    {
      v11 = *(float *)((char *)v9 + (char *)a3 - (char *)a2) * v8; /*0x646691*/
      v12 = *v9++ * v24; /*0x646695*/
      --v10; /*0x64669c*/
      *(float *)((char *)v9 + (char *)&v27 - (char *)a2 - 4) = v11 + v12; /*0x64669f*/
    }
    while ( v10 ); /*0x6466a3*/
  }
  v18 = v28; /*0x646703*/
  *a1 = v27; /*0x64670b*/
  v19 = v29; /*0x64670d*/
  a1[1] = v18; /*0x646713*/
  v20 = v30; /*0x646716*/
  a1[2] = v19; /*0x64671a*/
  a1[3] = v20; /*0x64671d*/
  return a1; /*0x646722*/
}


// ==== 0x00646730  ConvertMatrixToQuaternion  this=-  sig=csp ====
float *__fastcall ConvertMatrixToQuaternion(float *a1, float *a2)
{
  double v3; // st7
  float *v4; // edi
  int v5; // ebx
  double v6; // st7
  float v7; // edx
  float *result; // eax
  float v9; // ecx
  float v10; // edx
  double v11; // st7
  double v12; // st7
  int v13; // ebp
  int v14; // edi
  double v15; // st7
  double v16; // st7
  int v17; // eax
  int v18; // edx
  double v19; // st6
  int v20; // ecx
  int v21; // eax
  float v22; // eax
  float v23; // edx
  float v24; // eax
  _DWORD v26[3]; // [esp+1Ch] [ebp-4Ch]
  float v27; // [esp+28h] [ebp-40h]
  float v28; // [esp+2Ch] [ebp-3Ch]
  float v29; // [esp+30h] [ebp-38h]
  float v30; // [esp+34h] [ebp-34h]
  _DWORD v31[12]; // [esp+38h] [ebp-30h]

  v26[2] = 10; /*0x64673d*/
  v3 = a2[10] + a2[5]; /*0x646744*/
  v31[10] = 10; /*0x646747*/
  v4 = a1; /*0x64674b*/
  v5 = 0; /*0x64674d*/
  v6 = v3 + *a2; /*0x646754*/
  v27 = 0.0; /*0x64675a*/
  v28 = 0.0; /*0x646762*/
  v29 = 0.0; /*0x64676a*/
  v30 = 1.0; /*0x646778*/
  v26[0] = 0; /*0x646780*/
  v26[1] = 5; /*0x646784*/
  v31[0] = 0; /*0x646788*/
  v31[1] = 1; /*0x64678c*/
  v31[2] = 2; /*0x646794*/
  v31[3] = 3; /*0x64679e*/
  v31[4] = 4; /*0x6467a6*/
  v31[5] = 5; /*0x6467b1*/
  v31[6] = 6; /*0x6467b5*/
  v31[7] = 7; /*0x6467bd*/
  v31[8] = 8; /*0x6467c5*/
  v31[9] = 9; /*0x6467cd*/
  v31[11] = 11; /*0x6467d5*/
  if ( v6 == 0.0 ) /*0x6467dd*/
  {
    v7 = v28; /*0x6467e3*/
    result = a1; /*0x6467e7*/
    *a1 = v27; /*0x6467ec*/
    v9 = v29; /*0x6467ee*/
    v4[1] = v7; /*0x6467f4*/
    v10 = v30; /*0x6467f7*/
    v4[2] = v9; /*0x6467fb*/
    v4[3] = v10; /*0x6467fe*/
  }
  else
  {
    if ( v6 <= 0.0 ) /*0x646810*/
    {
      v13 = *a2 < (double)a2[5]; /*0x646876*/
      if ( a2[v26[v13]] < (double)a2[10] ) /*0x64688c*/
        v13 = 2; /*0x64688e*/
      if ( v13 == 1 ) /*0x646896*/
      {
        v14 = 2; /*0x6468b0*/
      }
      else if ( v13 == 2 ) /*0x646899*/
      {
        v14 = 0; /*0x6468a7*/
        v5 = 1; /*0x6468a9*/
      }
      else
      {
        v14 = 1; /*0x64689b*/
        v5 = 2; /*0x6468a0*/
      }
      v15 = Math::Sqrt(a2[v26[v13]] - (a2[v26[v5]] + a2[v26[v14]]) + 1.0); /*0x6468de*/
      *(&v27 + v13) = v15 * 0.5; /*0x6468eb*/
      v16 = 0.5 / v15; /*0x6468f5*/
      v17 = v31[4 * v14 + v13]; /*0x646913*/
      v18 = v31[4 * v13 + v14]; /*0x646917*/
      v30 = (a2[v31[4 * v5 + v14]] - a2[v31[4 * v14 + v5]]) * v16; /*0x64691d*/
      v19 = a2[v17] + a2[v18]; /*0x646924*/
      v20 = v31[4 * v5 + v13]; /*0x64692f*/
      v21 = v31[4 * v13 + v5]; /*0x646933*/
      *(&v27 + v14) = v19 * v16; /*0x646939*/
      v4 = a1; /*0x646943*/
      *(&v27 + v5) = (a2[v20] + a2[v21]) * v16; /*0x646949*/
    }
    else
    {
      v11 = Math::Sqrt(v6 + 1.0); /*0x64681e*/
      v30 = v11 * 0.5; /*0x64682b*/
      v12 = 0.5 / v11; /*0x646832*/
      v27 = (a2[9] - a2[6]) * v12; /*0x646840*/
      v28 = (a2[2] - a2[8]) * v12; /*0x64684c*/
      v29 = (a2[4] - a2[1]) * v12; /*0x646858*/
    }
    v22 = v28; /*0x646953*/
    *v4 = v27; /*0x646959*/
    v23 = v29; /*0x64695b*/
    v4[1] = v22; /*0x64695f*/
    v24 = v30; /*0x646962*/
    v4[2] = v23; /*0x646966*/
    v4[3] = v24; /*0x646969*/
    return v4; /*0x64696c*/
  }
  return result; /*0x646801*/
}


// ==== 0x00646980  ToQuaternionMatrix  this=-  sig=csp ====
float *__fastcall Quaternion_ToMatrix(float *a1, float *a2)
{
  double v2; // st7
  double v4; // st6
  double v5; // st5
  double v6; // st4
  double v7; // st7
  double v8; // st6
  float v9; // [esp+8h] [ebp-40h]
  float v10; // [esp+Ch] [ebp-3Ch]
  float v11; // [esp+10h] [ebp-38h]
  float v12; // [esp+14h] [ebp-34h]
  float v13[12]; // [esp+18h] [ebp-30h] BYREF

  v2 = a2[2] * a2[2]; /*0x646988*/
  v12 = a2[1] * a2[1]; /*0x646995*/
  v13[0] = 1.0 - (v12 + v2 + v12 + v2); /*0x6469a9*/
  v4 = a2[1] * *a2; /*0x6469b0*/
  v5 = a2[3] * a2[2]; /*0x6469b5*/
  v13[1] = v4 - v5 + v4 - v5; /*0x6469be*/
  v10 = a2[3] * a2[1]; /*0x6469c8*/
  v6 = *a2 * a2[2]; /*0x6469ce*/
  v9 = v6; /*0x6469d1*/
  v13[2] = v6 + v10 + v6 + v10; /*0x6469db*/
  v13[4] = v5 + v4 + v5 + v4; /*0x6469e3*/
  v11 = *a2 * *a2; /*0x6469ef*/
  v13[5] = 1.0 - (v11 + v2 + v11 + v2); /*0x646a03*/
  v7 = a2[1] * a2[2]; /*0x646a0c*/
  v8 = a2[3] * *a2; /*0x646a12*/
  v13[6] = v7 - v8 + v7 - v8; /*0x646a1a*/
  v13[8] = v9 - v10 + v9 - v10; /*0x646a28*/
  v13[11] = 0.0; /*0x646a39*/
  v13[7] = 0.0; /*0x646a41*/
  v13[3] = 0.0; /*0x646a49*/
  v13[9] = v8 + v7 + v8 + v7; /*0x646a53*/
  v13[10] = 1.0 - (v11 + v12 + v11 + v12); /*0x646a69*/
  qmemcpy(a1, v13, 0x30u); /*0x646a6d*/
  return a1; /*0x646a6f*/
}


// ==== 0x00646A80  sub_646A80  this=-  sig=ida-proto ====
void sub_646A80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x646a8c*/
  MEMORY[0xAC6650] = Math::Sqrt(v0 + v0); /*0x646a9e*/
}


// ==== 0x00646AB0  sub_646AB0  this=-  sig=ida-proto ====
void sub_646AB0()
{
  dbl_AFA460 = MEMORY[0xAC6650] / 60.0; /*0x646abc*/
}


// ==== 0x00646AD0  sub_646AD0  this=-  sig=ida-proto ====
void sub_646AD0()
{
  dbl_AFA410 = 1.0 / dbl_AFA460; /*0x646adc*/
}


// ==== 0x00646AF0  sub_646AF0  this=-  sig=ida-proto ====
void sub_646AF0()
{
  dbl_AFA408 = 0.0174532925199433 * 45.0; /*0x646afc*/
}


// ==== 0x00646B10  sub_646B10  this=-  sig=ida-proto ====
void sub_646B10()
{
  dbl_AFA260 = 0.0174532925199433 * 60.0; /*0x646b1c*/
}


// ==== 0x00646B30  sub_646B30  this=-  sig=ida-proto ====
void sub_646B30()
{
  MEMORY[0xAC5208] = 0.0174532925199433 * 90.0; /*0x646b3c*/
}


// ==== 0x00646B50  sub_646B50  this=-  sig=ida-proto ====
__int64 sub_646B50()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC5208] - dbl_AFA260); /*0x646b62*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC6650] * 0.5); /*0x646b76*/
  dword_B0446C = result; /*0x646b7b*/
  return result; /*0x646b80*/
}


// ==== 0x00646B90  sub_646B90  this=-  sig=ida-proto ====
void sub_646B90()
{
  dbl_AFA270 = Math::ArcTan((double)dword_B0446C * 0.00390625); /*0x646ba7*/
}


// ==== 0x00646BC0  sub_646BC0  this=-  sig=ida-proto ====
void sub_646BC0()
{
  dbl_AFA330 = Math::ArcTan((double)(2 * dword_B0446C) / MEMORY[0xAC6650]); /*0x646be2*/
}


// ==== 0x00646BF0  sub_646BF0  this=-  sig=ida-proto ====
__int64 sub_646BF0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0446C) + 0.5); /*0x646c0b*/
  dword_AFA45C = result; /*0x646c10*/
  return result; /*0x646c16*/
}


// ==== 0x00646C20  sub_646C20  this=-  sig=ida-proto ====
int sub_646C20()
{
  MEMORY[0xAC6640] = 0; /*0x646c22*/
  return 0; /*0x646c2e*/
}


// ==== 0x00646C30  sub_646C30  this=-  sig=ida-proto ====
int sub_646C30()
{
  dword_AFA320 = 0; /*0x646c32*/
  dword_AFA324 = 0; /*0x646c37*/
  dword_AFA328 = 0; /*0x646c3c*/
  return 0; /*0x646c41*/
}


// ==== 0x00646C50  sub_646C50  this=-  sig=ida-proto ====
int sub_646C50()
{
  dword_AFA428 = 0; /*0x646c55*/
  dword_AFA420 = 128; /*0x646c5f*/
  dword_AFA424 = 128; /*0x646c64*/
  return 128; /*0x646c69*/
}


// ==== 0x00646C70  sub_646C70  this=-  sig=ida-proto ====
int sub_646C70()
{
  MEMORY[0xAC6630] = 0; /*0x646c72*/
  MEMORY[0xAC6634] = 0; /*0x646c77*/
  MEMORY[0xAC6638] = 0; /*0x646c7c*/
  MEMORY[0xAC663C] = 0; /*0x646c81*/
  return 0; /*0x646c86*/
}


// ==== 0x00646D00  ObjectClass::method_646D00  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_646D00(_DWORD *this)
{
  *this = -1; /*0x646d04*/
  this->vtable2 = 0; /*0x646d0a*/
  this->vtable3 = 0; /*0x646d0d*/
  this->vtable4 = 0; /*0x646d10*/
  this->uniqueId = 0; /*0x646d13*/
  this->abstractFlags = 0; /*0x646d16*/
  return this; /*0x646d19*/
}


// ==== 0x00646D20  sub_646D20  this=-  sig=ida-proto ====
_DWORD *sub_646D20()
{
  _DWORD *result; // eax
  int v1; // edx

  result = &unk_AFA280; /*0x646d20*/
  v1 = 7; /*0x646d25*/
  do /*0x646d45*/
  {
    *(result - 2) = -1; /*0x646d2c*/
    *(result - 1) = 0; /*0x646d33*/
    *result = 0; /*0x646d36*/
    result[1] = 0; /*0x646d38*/
    result[2] = 0; /*0x646d3b*/
    result[3] = 0; /*0x646d3e*/
    result += 6; /*0x646d41*/
    --v1; /*0x646d44*/
  }
  while ( v1 ); /*0x646d45*/
  return result; /*0x646d47*/
}


// ==== 0x00646D70  Network_Disconnect  this=-  sig=ida-proto ====
int sub_646D70()
{
  int result; // eax

  if ( MEMORY[0xA8B238][0] == 4 ) /*0x646d77*/
    return Network::Disconnect(MEMORY[0xA8E9C0]); /*0x646d7e*/
  return result; /*0x646d83*/
}


// ==== 0x00646D90  sub_646D90  this=-  sig=ida-proto ====
int sub_646D90()
{
  MEMORY[0xAC6648] = Timer::GetTicks(); /*0x646d9f*/
  return atexit(nullsub_216); /*0x646daa*/
}


// ==== 0x00646DB0  nullsub_216  this=-  sig=ida-proto ====
void __cdecl nullsub_216()
{
  ; /*0x646db0*/
}


// ==== 0x00646DC0  sub_646DC0  this=-  sig=ida-proto ====
_DWORD *sub_646DC0()
{
  _DWORD *result; // eax
  int v1; // edx

  result = &unk_AFA360; /*0x646dc0*/
  v1 = 7; /*0x646dc5*/
  do /*0x646de5*/
  {
    *(result - 2) = -1; /*0x646dcc*/
    *(result - 1) = 0; /*0x646dd3*/
    *result = 0; /*0x646dd6*/
    result[1] = 0; /*0x646dd8*/
    result[2] = 0; /*0x646ddb*/
    result[3] = 0; /*0x646dde*/
    result += 6; /*0x646de1*/
    --v1; /*0x646de4*/
  }
  while ( v1 ); /*0x646de5*/
  return result; /*0x646de7*/
}


// ==== 0x00646DF0  Network_Helper_646DF0  this=-  sig=ida-proto ====
DWORD __fastcall sub_646DF0(int a1)
{
  DWORD result; // eax

  result = timeGetTime(); /*0x646df3*/
  dword_AFA36C[6 * a1] = result; /*0x646dfd*/
  return result; /*0x646dfc*/
}


// ==== 0x00646E90  Object_Init  this=-  sig=ida-proto ====
char __fastcall Object_Init(char a1, int a2, int a3, char a4, int a5)
{
  IUnknown *v5; // eax
  char v7[112]; // [esp+8h] [ebp-70h] BYREF

  v5 = ScriptAction::InitActionFields( /*0x646ef0*/
         v7,
         *(_DWORD *)(HouseClass_Player.field_0 + 48),
         a3,
         a4,
         a1,
         *(_DWORD *)a2,
         *(_BYTE *)(a2 + 4),
         *(_DWORD *)a5,
         *(_BYTE *)(a5 + 4),
         a3,
         0);
  if ( Networking_LastEventIndex >= 128 ) /*0x646eff*/
    return 0; /*0x646f59*/
  qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v5, 0x6Fu); /*0x646f1b*/
  g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x646f2c*/
  ++Networking_LastEventIndex; /*0x646f43*/
  Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x646f48*/
  return 1; /*0x646f50*/
}


// ==== 0x00646F70  sub_646F70  this=-  sig=ida-proto ====
char __fastcall sub_646F70(IUnknown *a1, int a2, int a3, char a4, int a5, int a6, int a7)
{
  char *v7; // eax
  IUnknown *v9; // [esp-20h] [ebp-98h]
  char v10[112]; // [esp+8h] [ebp-70h] BYREF

  LOBYTE(v9) = a4; /*0x646fbd*/
  v7 = sub_4C68E0( /*0x646fcd*/
         (AnimClass *)v10,
         *(_DWORD *)&HouseClass_Player->__pad_28[8],
         a3,
         v9,
         a1,
         *(_DWORD *)a2,
         *(_BYTE *)(a2 + 4),
         *(_DWORD *)a5,
         *(_BYTE *)(a5 + 4),
         a6,
         a7);
  if ( Networking_LastEventIndex >= 128 ) /*0x646fdc*/
    return 0; /*0x647036*/
  qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v7, 0x6Fu); /*0x646ff8*/
  g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x647009*/
  ++Networking_LastEventIndex; /*0x647020*/
  Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x647025*/
  return 1; /*0x64702d*/
}


// ==== 0x00647040  ObjectClass::UI_Create  this=ObjectClass  sig=csp ====
char sub_647040()
{
  char *v0; // eax
  char v2[112]; // [esp+0h] [ebp-70h] BYREF

  if ( *((_BYTE *)HouseClass_Player + 503) ) /*0x647048*/
    return 0; /*0x647048*/
  if ( *((_BYTE *)HouseClass_Player + 504) ) /*0x647056*/
    return 0; /*0x647056*/
  if ( *((_BYTE *)HouseClass_Player + 502) ) /*0x647060*/
    return 0; /*0x647060*/
  v0 = EventClass::AddEvent(v2, *((_DWORD *)HouseClass_Player + 12), 0xCu); /*0x647074*/
  if ( Networking_LastEventIndex >= 128 ) /*0x647083*/
    return 0; /*0x6470dc*/
  qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v0, 0x6Fu); /*0x6470a1*/
  g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x6470b4*/
  ++Networking_LastEventIndex; /*0x6470cb*/
  Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x6470d0*/
  return 1; /*0x6470d8*/
}


// ==== 0x006470F0  ObjectClass::UI_Add  this=ObjectClass  sig=csp ====
char sub_6470F0()
{
  char *v0; // eax
  char v2[112]; // [esp+0h] [ebp-70h] BYREF

  if ( *((_BYTE *)HouseClass_Player + 503) ) /*0x6470f8*/
    return 0; /*0x6470f8*/
  if ( *((_BYTE *)HouseClass_Player + 504) ) /*0x647106*/
    return 0; /*0x647106*/
  if ( *((_BYTE *)HouseClass_Player + 502) ) /*0x647110*/
    return 0; /*0x647110*/
  v0 = EventClass::AddEvent(v2, *((_DWORD *)HouseClass_Player + 12), 0x22u); /*0x647124*/
  if ( Networking_LastEventIndex >= 128 ) /*0x647133*/
    return 0; /*0x64718c*/
  qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v0, 0x6Fu); /*0x647151*/
  g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x647164*/
  ++Networking_LastEventIndex; /*0x64717b*/
  Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x647180*/
  return 1; /*0x647188*/
}


// ==== 0x006471A0  Network::AddFrameEvent  this=Network  sig=csp ====
char Network_AddFrameEvent()
{
  char *v0; // eax
  unsigned __int8 v2; // [esp+0h] [ebp-74h]
  char v3[112]; // [esp+4h] [ebp-70h] BYREF

  v2 = 19; /*0x6471a8*/
  if ( MEMORY[0xA8B238][0] == 4 /*0x6471cb*/
    && MEMORY[0xA8DBA0]
    && MEMORY[0xA8DA84] > 2
    && SessionClass::IsValidHouse((int)MEMORY[0xA8B238], 0) )
  {
    v2 = 39; /*0x6471d4*/
  }
  v0 = EventClass::AddEvent(v3, *((_DWORD *)HouseClass_Player + 12), v2); /*0x6471ec*/
  if ( Networking_LastEventIndex >= 128 ) /*0x6471fb*/
    return 0; /*0x647254*/
  qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v0, 0x6Fu); /*0x647219*/
  g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x64722c*/
  ++Networking_LastEventIndex; /*0x647243*/
  Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x647248*/
  return 1; /*0x647250*/
}


// ==== 0x00647260  ObjectClass::ProcessNetworkEvents  this=ObjectClass  sig=csp ====
void ProcessNetworkEvents()
{
  int v0; // ecx
  int v1; // ebx
  char *v2; // edi
  char *v3; // esi
  char *v4; // edi
  int Buffer; // [esp+10h] [ebp-74h] BYREF
  _BYTE v6[108]; // [esp+14h] [ebp-70h] BYREF
  __int16 v7; // [esp+80h] [ebp-4h]
  char v8; // [esp+82h] [ebp-2h]

  if ( (MEMORY[0xA8D5F8] & 2) != 0 ) /*0x64726e*/
  {
    v6[0] = 0; /*0x64727a*/
    if ( EventQueue::Process(MEMORY[0x87F770]) ) /*0x64727f*/
    {
      if ( EventQueue::Read(MEMORY[0x87F770]) == 27 || (MEMORY[0xA8D5F8] & 4) != 0 ) /*0x6472a5*/
      {
        MEMORY[0xA8E9A0] = 0; /*0x6472aa*/
        return; /*0x6472b5*/
      }
    }
    else if ( (MEMORY[0xA8D5F8] & 4) != 0 /*0x6472eb*/
           && (int)MEMORY[0xA8ED84] > 0
           && (MEMORY[0xAC50F8] != (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 44))(MEMORY[0x887640])
            || MEMORY[0xAC5200] != (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 48))(MEMORY[0x887640])) )
    {
      MEMORY[0xA8E9A0] = 0; /*0x6472f0*/
      return; /*0x6472fb*/
    }
    MEMORY[0xAC50F8] = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 44))(MEMORY[0x887640]); /*0x64730d*/
    MEMORY[0xAC5200] = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 48))(MEMORY[0x887640]); /*0x647317*/
    ComputeNetworkFrameCRC(); /*0x64731c*/
    v0 = (int)MEMORY[0xA8ED84]; /*0x647321*/
    dword_B04474[(unsigned __int8)MEMORY[0xA8ED84]] = *(_DWORD *)MEMORY[0xAC51FC]; /*0x647334*/
    if ( v0 >= MEMORY[0xA8E30C] ) /*0x647342*/
    {
      if ( byte_B04880 ) /*0x64734b*/
        LogMultiplayToSync_MPDEBUG(v0 % 256, 0); /*0x64735f*/
      else
        Multiplay::LogToSYNC_NOMPDEBUG(0); /*0x647368*/
      GameClass::Shutdown(); /*0x64736d*/
      ExitProgram(0); /*0x647374*/
    }
    if ( v0 ) /*0x647386*/
    {
      if ( MEMORY[0xA8B238][0] /*0x6473b7*/
        && MEMORY[0xA8B238][0] != 5
        && MEMORY[0xA8B24C] == 2
        && v0 != MEMORY[0xA8B554] * ((MEMORY[0xA8B554] + v0 - 1) / (unsigned int)MEMORY[0xA8B554]) )
      {
        return; /*0x6473b7*/
      }
    }
    else if ( MEMORY[0xA8B238][0] ) /*0x64738a*/
    {
      return; /*0x64738a*/
    }
    if ( CCFileClass::Read(MEMORY[0xA8D58C], &Buffer, 4) != 4 ) /*0x6473cf*/
      goto LABEL_30; /*0x6473cf*/
    v1 = 0; /*0x6473d9*/
    if ( Buffer > 0 ) /*0x6473dd*/
    {
      while ( CCFileClass::Read(MEMORY[0xA8D58C], v6, 111) == 111 ) /*0x6473fd*/
      {
        v6[1] &= ~1u; /*0x647414*/
        if ( dword_8B41F8 < 0x4000 ) /*0x647418*/
        {
          v2 = &unk_8B4204[111 * unk_8B4200]; /*0x64742e*/
          qmemcpy(v2, v6, 0x6Cu); /*0x647435*/
          v2 += 108; /*0x647435*/
          *(_WORD *)v2 = v7; /*0x647437*/
          v2[2] = v8; /*0x647439*/
          dword_A70204[unk_8B4200] = timeGetTime(); /*0x647442*/
          unk_8B4200 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64745c*/
          ++dword_8B41F8; /*0x647462*/
        }
        if ( ++v1 >= Buffer ) /*0x64746e*/
          goto LABEL_29; /*0x64746e*/
      }
      goto LABEL_30; /*0x6473fd*/
    }
LABEL_29:
    if ( !Network::ProcessEventList(0, 0, 0) ) /*0x6474a0*/
    {
LABEL_30:
      MEMORY[0xA8E9A0] = 0; /*0x6474a9*/
      return; /*0x6474b7*/
    }
LABEL_31:
    Network_Process_64D990(0); /*0x6474b8*/
  }
  else
  {
    switch ( MEMORY[0xA8B238][0] ) /*0x6474d5*/
    {
      case 0: /*0x6474d5*/
      case 5: /*0x6474d5*/
        while ( Networking_LastEventIndex ) /*0x6474e3*/
        {
          byte_A802D5[111 * g_NetworkEventIndex] &= ~1u; /*0x647504*/
          if ( dword_8B41F8 < 0x4000 ) /*0x647515*/
          {
            v3 = &g_NetworkPacketIndex[111 * g_NetworkEventIndex]; /*0x647522*/
            v4 = &unk_8B4204[111 * unk_8B4200]; /*0x647539*/
            qmemcpy(v4, v3, 0x6Cu); /*0x647540*/
            v3 += 108; /*0x647540*/
            v4 += 108; /*0x647540*/
            *(_WORD *)v4 = *(_WORD *)v3; /*0x647542*/
            v4[2] = v3[2]; /*0x647544*/
            dword_A70204[unk_8B4200] = timeGetTime(); /*0x64754d*/
            unk_8B4200 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64755f*/
            ++dword_8B41F8; /*0x64756a*/
          }
          Network_Process_652540(&Networking_LastEventIndex); /*0x647574*/
        }
        if ( (MEMORY[0xA8D5F8] & 1) != 0 ) /*0x64758d*/
          Network_Process_64D9E0(); /*0x64758f*/
        if ( Network::ProcessEventList(0, 0, 0) ) /*0x6475ae*/
          goto LABEL_31; /*0x6475b5*/
        MEMORY[0xA8E9A0] = 0; /*0x6475be*/
        break; /*0x6475c7*/
      case 1: /*0x6474d5*/
      case 2: /*0x6474d5*/
      case 3: /*0x6474d5*/
      case 4: /*0x6474d5*/
        Network::QueueProcessingLoop(); /*0x6475c8*/
        break; /*0x6475c8*/
      default:
        return;
    }
  }
}


// ==== 0x006475F0  Network::QueueProcessingLoop  this=Network  sig=csp ====
void Network::QueueProcessingLoop()
{
  CellStruct *v0; // eax
  char *v1; // ebp
  IUnknown *v2; // ecx
  int v3; // esi
  int v4; // ebx
  bool v5; // zf
  unsigned int v6; // esi
  unsigned int v7; // eax
  _DWORD *TextBufferEntry; // esi
  char *v9; // edi
  _DWORD *v10; // eax
  int v11; // edx
  _DWORD *v12; // eax
  int v13; // ecx
  CellStruct *v14; // esi
  char v15; // bl
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // eax
  int *v20; // edx
  int v21; // esi
  int v22; // esi
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // eax
  int updated; // esi
  unsigned int v30; // ebx
  int v31; // edi
  unsigned int *v32; // ebp
  unsigned int v33; // esi
  int v34; // ebp
  int v35; // edi
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  int v39; // esi
  char v40; // al
  int v41; // edx
  char *v42; // edi
  int v43; // eax
  char *v44; // edi
  int v45; // eax
  int v46; // esi
  int v47; // eax
  IUnknown *v48; // esi
  wchar_t *v49; // eax
  wchar_t *v50; // eax
  wchar_t *v51; // eax
  wchar_t *v52; // eax
  IUnknown *v53; // edx
  IUnknown *v54; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-ACh]
  wchar_t *v56; // [esp-10h] [ebp-ACh]
  wchar_t *v57; // [esp-10h] [ebp-ACh]
  wchar_t *v58; // [esp-10h] [ebp-ACh]
  wchar_t *v59; // [esp-10h] [ebp-ACh]
  wchar_t *v60; // [esp-10h] [ebp-ACh]
  wchar_t *v61; // [esp-10h] [ebp-ACh]
  wchar_t *v62; // [esp-10h] [ebp-ACh]
  int v63; // [esp+0h] [ebp-9Ch]
  int v64; // [esp+10h] [ebp-8Ch]
  int v65; // [esp+14h] [ebp-88h]
  char *v66; // [esp+18h] [ebp-84h]
  char *v67; // [esp+1Ch] [ebp-80h]
  unsigned __int8 v68; // [esp+20h] [ebp-7Ch]
  CampaignScore *v69; // [esp+24h] [ebp-78h]
  _BYTE v70[108]; // [esp+2Ch] [ebp-70h] BYREF
  __int16 v71; // [esp+98h] [ebp-4h]
  char v72; // [esp+9Ah] [ebp-2h]

  v0 = *(CellStruct **)&HouseClass_Player.__pad_5568[8068];
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 5 )
    return;
  if ( (byte_AFA268 & 1) == 0 )
  {
    byte_AFA268 |= 1u;
    dword_AFA450 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248];
    dword_AFA458 = 0;
    atexit(nullsub_32);
    v0 = *(CellStruct **)&HouseClass_Player.__pad_5568[8068];
  }
  if ( (int)v0 < 3 || (int)v0 > 4 )
  {
    v67 = *(char **)&HouseClass_Player.__pad_5568[22464];
    v64 = *(_DWORD *)&HouseClass_Player.__pad_5568[22468] - 14;
    v1 = &HouseClass_Player.__pad_5568[22460];
  }
  else
  {
    v67 = &HouseClass_Player.__pad_5568[17758];
    v64 = *(_DWORD *)&HouseClass_Player.__pad_5568[18316];
    v1 = &HouseClass_Player.__pad_5568[22284];
  }
  v66 = v1;
  ComputeNetworkFrameCRC();
  v2 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248];
  v3 = (int)*(&g_MatrixTransformState + 6395);
  v4 = *(_DWORD *)&HouseClass_Player.__pad_5568[9732];
  v5 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248] == 0;
  dword_B04474[(unsigned __int8)HouseClass_Player.__pad_5568[23248]] = (int)*(&g_MatrixTransformState + 6395);
  if ( !v5 && !v4 )
  {
    if ( ((unsigned __int8)v2 & 0x7F) == 0 )
    {
      v6 = (*(int (__thiscall **)(char *))(*(_DWORD *)v1 + 48))(v1);
      switch ( *(_DWORD *)&HouseClass_Player.__pad_5568[18664] )
      {
        case 0:
          goto LABEL_15;
        case 1:
          v6 += v6 >> 1;
          goto LABEL_15;
        case 2:
          v6 *= 2;
          goto LABEL_15;
        case 3:
          v6 *= 3;
LABEL_15:
          Debug::Log();
          break;
        default:
          break;
      }
      v7 = 8 * v6 + 15;
      if ( v7 < 0x78 )
        v7 = 120;
      (*(void (__thiscall **)(char *, unsigned int, int, unsigned int, _DWORD))(*(_DWORD *)v1 + 52))(
        v1,
        v6 + 10,
        -1,
        v7,
        0);
      if ( dword_B04874 )
      {
        Network_Process();
        TextBufferEntry = (_DWORD *)GetTextBufferEntry(4);
        Network::validateConnection(TextBufferEntry, 0, 23);
        Debug::Printf(*(IUnknown **)&HouseClass_Player.__pad_5568[8876]);
        Mouse::HideWindow();
      }
      v70[0] = 33;
      *(_DWORD *)&v70[3] = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
      *(_WORD *)&v70[7] = *(_DWORD *)&HouseClass_Player.__pad_5568[8876]
                        / *(_DWORD *)&HouseClass_Player.__pad_5568[8880];
      v70[2] = *(_BYTE *)(HouseClass_Player.field_0 + 48);
      if ( Networking_LastEventIndex < 128 )
      {
        v9 = &g_NetworkPacketIndex[111 * Networking_NextPacketIndex];
        qmemcpy(v9, v70, 0x6Cu);
        v9 += 108;
        *(_WORD *)v9 = v71;
        v9[2] = v72;
        g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
        Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F;
        ++Networking_LastEventIndex;
      }
      *(_DWORD *)&HouseClass_Player.__pad_5568[8876] = 0;
      *(_DWORD *)&HouseClass_Player.__pad_5568[8880] = 0;
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4
        && (*(_WORD *)&HouseClass_Player.__pad_5568[23248] & 0x7FF) == 0 )
      {
        (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v1 + 44))(v1, 0);
      }
    }
    goto LABEL_59;
  }
  v10 = &unk_AFA35C;
  do
  {
    *(v10 - 1) = -1;
    *v10 = 0;
    v10[1] = 0;
    v10[2] = 0;
    v10[4] = 0;
    v10[3] = 20;
    v10 += 6;
  }
  while ( (int)v10 < (int)&dword_AFA404 );
  dword_AFA450 = v2;
  v11 = 0;
  dword_AFA454 = v69;
  dword_AFA458 = (int)&v2->__pad_FC[4];
  LOWORD(dword_AFA400) = 0;
  memset(dword_B04474, 0, sizeof(dword_B04474));
  memset(dword_AFA42C, 0, sizeof(dword_AFA42C));
  dword_B04884 = 0;
  dword_B04888 = 0;
  byte_B0488C = 0;
  byte_B0488D = 0;
  byte_B04878 = 0;
  memset(dword_AFA338, 0, sizeof(dword_AFA338));
  do
  {
    v12 = (CoordStruct **)((char *)&g_MatrixTransformState + v11 + 25324);
    v13 = 8;
    do
    {
      *v12 = 0;
      v12 += 8;
      --v13;
    }
    while ( v13 );
    v11 += 4;
  }
  while ( v11 < 32 );
  if ( v4 )
    *(_DWORD *)&HouseClass_Player.__pad_5568[21748] = *(_DWORD *)&HouseClass_Player.__pad_5568[9736] == 0 ? v3 : 0;
  dword_B0487C = 0;
  *(&g_MatrixTransformState + 7694) = (CoordStruct *)Timer::GetTicks();
  *(&g_MatrixTransformState + 7695) = (CoordStruct *)v69;
  SendNetworkFrameSync((int *)v1, (__int16)dword_AFA400);
  v14 = (CellStruct *)QueueNetworkProcessor(
                        (CellStruct *)1,
                        (int *)v1,
                        *(_DWORD *)&stru_830620.__pad_579C[16 * *(_DWORD *)&HouseClass_Player.__pad_5568[8068] + 5508],
                        *(_DWORD *)&stru_830620.__pad_579C[16 * *(_DWORD *)&HouseClass_Player.__pad_5568[8068] + 5512],
                        *(ScenarioClass **)&stru_830620.__pad_579C[16 * *(_DWORD *)&HouseClass_Player.__pad_5568[8068]
                                                                 + 5520],
                        (int)v67,
                        (__int16)dword_AFA400,
                        &dword_AFA358);
  if ( v14 )
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
      Timer::UpdateDelta();
    v15 = 1;
    ++*(_DWORD *)&HouseClass_Player.__pad_5568[18432];
    if ( v14 == (CellStruct *)7 )
    {
      StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_579C[5860], 1036);
      v16 = GetStringCSF(g_Str_TXT_SYSTEM_NOT_RESPONDING, 0, &stru_830620.__pad_579C[5860], 1036);
      Dialog::ShowMessageBox((int)v16, StringCSF, 0, 0, 0, v63);
      goto LABEL_46;
    }
    if ( v14 == (CellStruct *)2 )
    {
      v56 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_579C[5860], 1039);
      v17 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[5832], 0, &stru_830620.__pad_579C[5860], 1039);
      Dialog::ShowMessageBox((int)v17, v56, 0, 0, 0, v63);
      goto LABEL_46;
    }
    if ( v14 == (CellStruct *)3 )
    {
      v57 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_579C[5860], 1042);
      v18 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[5816], 0, &stru_830620.__pad_579C[5860], 1042);
      Dialog::ShowMessageBox((int)v18, v57, 0, 0, 0, v63);
      goto LABEL_46;
    }
    if ( v14 != (CellStruct *)8 )
    {
      if ( v14 != (CellStruct *)9 )
        goto LABEL_46;
      v58 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_579C[5860], 1048);
      v19 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[5796], 0, &stru_830620.__pad_579C[5860], 1048);
      Dialog::ShowMessageBox((int)v19, v58, 0, 0, 0, v63);
    }
    v15 = 0;
LABEL_46:
    --*(_DWORD *)&HouseClass_Player.__pad_5568[18432];
    *(_DWORD *)&HouseClass_Player.__pad_5568[9732] = 0;
    *(_DWORD *)&HouseClass_Player.__pad_5568[9736] = 0;
    HouseClass_Player.__pad_5568[22252] = 0;
    if ( !dword_B04874 )
      goto LABEL_48;
    goto LABEL_47;
  }
  v20 = &dword_AFA358;
  memset(&HouseClass_Player.__pad_5568[18632], 0, 0x1Cu);
  do
  {
    *v20 = 0;
    v20 += 6;
  }
  while ( (int)v20 < (int)&dword_AFA400 );
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)v1 + 44))(v1, 1);
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8088] == 2
    && *(_DWORD *)&HouseClass_Player.__pad_5568[23248] != *(_DWORD *)&HouseClass_Player.__pad_5568[8864]
                                                        * ((unsigned int)(*(_DWORD *)&HouseClass_Player.__pad_5568[8864]
                                                                        + *(_DWORD *)&HouseClass_Player.__pad_5568[23248]
                                                                        - 1)
                                                         / *(_DWORD *)&HouseClass_Player.__pad_5568[8864]) )
  {
    (*(void (__fastcall **)(char *, unsigned int))(*(_DWORD *)v1 + 4))(
      v1,
      (unsigned int)(*(_DWORD *)&HouseClass_Player.__pad_5568[8864] + *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - 1)
    % *(_DWORD *)&HouseClass_Player.__pad_5568[8864]);
    if ( dword_B04874 )
      Mouse::HideWindow();
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[9732] )
  {
    *(_DWORD *)&HouseClass_Player.__pad_5568[9736] = 0;
    *(_DWORD *)&HouseClass_Player.__pad_5568[9732] = 0;
  }
LABEL_59:
  if ( SessionClass::IsValidHouse((int)&HouseClass_Player.__pad_5568[8068], 0)
    && (*(_DWORD *)&HouseClass_Player.__pad_5568[8888]
     || *(_DWORD *)&HouseClass_Player.__pad_5568[8892]
     || !HouseClass_Player.__pad_5568[23248]) )
  {
    v21 = (unsigned __int16)dword_AFA400;
    v70[0] = 0;
    Debug::Log();
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8888] || *(_DWORD *)&HouseClass_Player.__pad_5568[8892] )
    {
      Debug::Log();
      *(_WORD *)&v70[7] = *(_WORD *)&HouseClass_Player.__pad_5568[8892];
      *(_WORD *)&v70[9] = *(_WORD *)&HouseClass_Player.__pad_5568[8888];
      v70[0] = 32;
      v70[11] = *(_DWORD *)&HouseClass_Player.__pad_5568[8892] > 0x1Eu ? 10 : 5;
      v70[2] = *(_BYTE *)(HouseClass_Player.field_0 + 48);
      *(_DWORD *)&v70[3] = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
      if ( Networking_LastEventIndex < 128 )
      {
        v44 = &g_NetworkPacketIndex[111 * Networking_NextPacketIndex];
        qmemcpy(v44, v70, 0x6Cu);
        v44 += 108;
        *(_WORD *)v44 = v71;
        v44[2] = v72;
        g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
        Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F;
        ++Networking_LastEventIndex;
      }
      *(_DWORD *)&HouseClass_Player.__pad_5568[8888] = 0;
      *(_DWORD *)&HouseClass_Player.__pad_5568[8892] = 0;
    }
    else if ( v21 >= 5 )
    {
      v22 = 0;
      v23 = 0;
      if ( *(int *)&HouseClass_Player.__pad_5568[18384] <= 0 )
      {
LABEL_73:
        v26 = 60;
LABEL_76:
        v65 = v26;
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[22700] )
        {
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[22700] == 1 )
            v28 = 45;
          else
            v28 = 60 / *(_DWORD *)&HouseClass_Player.__pad_5568[22700];
        }
        else
        {
          v28 = 60;
        }
        if ( v26 >= v28 )
          v65 = v28;
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 && HouseClass_Player.__pad_5568[18668] )
        {
          updated = Network::updateLatency(v1);
          v30 = 0;
          v31 = 0;
          if ( (*(int (__thiscall **)(char *))(*(_DWORD *)v1 + 16))(v1) > 0 )
          {
            v32 = (unsigned int *)&unk_AFA368;
            do
            {
              if ( v30 <= *v32 )
                v30 = *v32;
              ++v31;
              v32 += 6;
            }
            while ( v31 < (*(int (__thiscall **)(char *))(*(_DWORD *)v66 + 16))(v66) );
          }
          v33 = v30 + updated;
        }
        else
        {
          v33 = (*(int (__thiscall **)(char *))(*(_DWORD *)v1 + 48))(v1);
        }
        v34 = (*(int (__thiscall **)(char *))(*(_DWORD *)v66 + 48))(v66);
        v68 = HouseClass_Player.__pad_5568[8864];
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
          v68 = v65 <= 30 ? 5 : 10;
        v35 = 0;
        if ( v33 )
        {
          switch ( *(_DWORD *)&HouseClass_Player.__pad_5568[18664] )
          {
            case 0:
              goto LABEL_99;
            case 1:
              v33 += v33 >> 1;
              v35 = 10;
              v34 += v34 / 2;
              goto LABEL_99;
            case 2:
              v33 *= 2;
              v34 *= 2;
              v35 = 20;
              goto LABEL_99;
            case 3:
              v33 *= 3;
              v34 *= 3;
              v35 = 30;
LABEL_99:
              Debug::Log();
              break;
            default:
              break;
          }
        }
        v36 = v35 + v65 * v33 / 0x78;
        if ( v36 > *(int *)&HouseClass_Player.__pad_5568[8860]
          && v36 >= v68 + *(_DWORD *)&HouseClass_Player.__pad_5568[8860] )
        {
          v36 = v68 + *(_DWORD *)&HouseClass_Player.__pad_5568[8860];
        }
        v37 = v68;
        v38 = (v36 + v37 - 1) / v37;
        v39 = v68 * v38;
        if ( v37 * v38 <= 3 * v37 )
          v39 = 3 * v68;
        if ( v39 >= v68 * ((v68 + 249) / v68) )
          v39 = v68 * ((v68 + 249) / v68);
        *(_DWORD *)&v70[3] = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
        *(_WORD *)&v70[7] = v65;
        v40 = *(_BYTE *)(HouseClass_Player.field_0 + 48);
        v70[0] = 32;
        v41 = **(_DWORD **)&HouseClass_Player.__pad_5568[8060];
        v70[2] = v40;
        v70[11] = v68;
        *(_WORD *)&v70[9] = v39 + ((v41 & 0x1000) != 0 ? 0xA : 0);
        if ( Networking_LastEventIndex < 128 )
        {
          v42 = &g_NetworkPacketIndex[111 * Networking_NextPacketIndex];
          qmemcpy(v42, v70, 0x6Cu);
          v42 += 108;
          *(_WORD *)v42 = v71;
          v42[2] = v72;
          g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
          Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F;
          ++Networking_LastEventIndex;
        }
        v43 = 8 * v34 + 15;
        if ( v43 < 120 )
          v43 = 120;
        (*(void (__thiscall **)(char *, int, int, int, _DWORD))(*(_DWORD *)v66 + 52))(v66, v34 + 10, -1, v43, 0);
        v1 = v66;
      }
      else
      {
        v24 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372];
        while ( 1 )
        {
          v25 = *(_DWORD *)(*(_DWORD *)v24 + 115);
          if ( v25 == -1 )
            break;
          if ( v25 > v22 )
            v22 = *(_DWORD *)(*(_DWORD *)v24 + 115);
          ++v23;
          v24 += 4;
          if ( v23 >= *(int *)&HouseClass_Player.__pad_5568[18384] )
          {
            if ( !v22 )
              goto LABEL_73;
            v27 = 1000 / v22;
            v26 = 1;
            if ( v27 >= 1 )
              v26 = v27;
            goto LABEL_76;
          }
        }
      }
    }
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8088] != 2
    || *(_DWORD *)&HouseClass_Player.__pad_5568[23248] == *(_DWORD *)&HouseClass_Player.__pad_5568[8864]
                                                        * ((unsigned int)(*(_DWORD *)&HouseClass_Player.__pad_5568[8864]
                                                                        + *(_DWORD *)&HouseClass_Player.__pad_5568[23248]
                                                                        - 1)
                                                         / *(_DWORD *)&HouseClass_Player.__pad_5568[8864]) )
  {
    v45 = (unsigned __int16)BuildNetworkEventPacket(
                              (int)v1,
                              (int)v67,
                              v64,
                              *(int *)&HouseClass_Player.__pad_5568[8860],
                              (__int16)dword_AFA400);
    LOWORD(dword_AFA400) = v45 + (_WORD)dword_AFA400;
    if ( v45 )
      Debug::Log();
    if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[23248] )
    {
      if ( !dword_B04874 )
        return;
      goto LABEL_162;
    }
    v46 = *(_DWORD *)&stru_830620.__pad_579C[16 * *(_DWORD *)&HouseClass_Player.__pad_5568[8068] + 5516];
    if ( 3 * (*(int (__thiscall **)(char *))(*(_DWORD *)v1 + 48))(v1) <= v46 )
      v47 = v46;
    else
      v47 = 3 * (*(int (__thiscall **)(char *))(*(_DWORD *)v1 + 48))(v1);
    v48 = (IUnknown *)QueueNetworkProcessor(
                        0,
                        (int *)v1,
                        180,
                        v47,
                        *(ScenarioClass **)&stru_830620.__pad_579C[16 * *(_DWORD *)&HouseClass_Player.__pad_5568[8068]
                                                                 + 5520],
                        (int)v67,
                        (__int16)dword_AFA400,
                        &dword_AFA358);
    if ( !v48 )
    {
      if ( (HouseClass_Player.__pad_5568[17220] & 1) != 0 )
        Network_Process_64D9E0();
      if ( Network::ProcessEventList((int)v1, (int *)&dword_AFA450, (int)&dword_AFA358) )
      {
        v53 = (IUnknown *)dword_8B41F8;
        if ( dword_8B41F8 )
        {
          v54 = (IUnknown *)word_8B41FC;
          do
          {
            if ( (*((_BYTE *)&unk_8B4205 + 111 * (_DWORD)v54) & 1) == 0
              && *(int *)&HouseClass_Player.__pad_5568[23248] <= *(_DWORD *)((char *)&unk_8B4207 + 111 * (_DWORD)v54) )
            {
              break;
            }
            if ( !v53 )
              break;
            v54 = (IUnknown *)(((_WORD)v54 + 1) & 0x3FFF);
            v53 = (IUnknown *)((char *)v53 - 1);
            word_8B41FC = v54;
            dword_8B41F8 = v53;
          }
          while ( v53 );
        }
        if ( dword_B04874 )
          goto LABEL_162;
        return;
      }
      Debug::Log();
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
        Timer::UpdateDelta();
      *(_DWORD *)&HouseClass_Player.__pad_5568[9732] = 0;
      *(_DWORD *)&HouseClass_Player.__pad_5568[9736] = 0;
      HouseClass_Player.__pad_5568[22252] = 0;
      if ( dword_B04874 )
        Mouse::HideWindow();
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
      {
        stru_B05488.__pad_579C[4436] = 1;
        goto LABEL_152;
      }
LABEL_154:
      MouseClass::LoadCursors();
      ToggleDisplayMode(0);
      return;
    }
    Debug::Log();
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
      Timer::UpdateDelta();
    v15 = 1;
    ++*(_DWORD *)&HouseClass_Player.__pad_5568[18432];
    if ( v48 == (IUnknown *)7 )
    {
      v59 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_579C[5860], 1194);
      v49 = GetStringCSF(g_Str_TXT_SYSTEM_NOT_RESPONDING, 0, &stru_830620.__pad_579C[5860], 1194);
      Dialog::ShowMessageBox((int)v49, v59, 0, 0, 0, v63);
      goto LABEL_141;
    }
    if ( v48 == (IUnknown *)2 )
    {
      v60 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_579C[5860], 1198);
      v50 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[5832], 0, &stru_830620.__pad_579C[5860], 1198);
      Dialog::ShowMessageBox((int)v50, v60, 0, 0, 0, v63);
      goto LABEL_141;
    }
    if ( v48 == (IUnknown *)3 )
    {
      v61 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_579C[5860], 1202);
      v51 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[5816], 0, &stru_830620.__pad_579C[5860], 1202);
      Dialog::ShowMessageBox((int)v51, v61, 0, 0, 0, v63);
      goto LABEL_141;
    }
    if ( v48 != (IUnknown *)8 )
    {
      if ( v48 != (IUnknown *)9 )
        goto LABEL_141;
      v62 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_579C[5860], 1210);
      v52 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[5796], 0, &stru_830620.__pad_579C[5860], 1210);
      Dialog::ShowMessageBox((int)v52, v62, 0, 0, 0, v63);
    }
    v15 = 0;
LABEL_141:
    --*(_DWORD *)&HouseClass_Player.__pad_5568[18432];
    *(_DWORD *)&HouseClass_Player.__pad_5568[9732] = 0;
    *(_DWORD *)&HouseClass_Player.__pad_5568[9736] = 0;
    HouseClass_Player.__pad_5568[22252] = 0;
    if ( !dword_B04874 )
    {
LABEL_48:
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
      {
        stru_B05488.__pad_579C[4436] = 1;
        if ( !v15 )
        {
LABEL_153:
          HouseClass_Player.__pad_5568[9742] = 1;
          Timer::UpdateDelta();
          ProcessGameResults(0);
          goto LABEL_154;
        }
LABEL_152:
        HouseClass_Player.__pad_5568[9741] = 1;
        goto LABEL_153;
      }
      goto LABEL_154;
    }
LABEL_47:
    Mouse::HideWindow();
    goto LABEL_48;
  }
  (*(void (__fastcall **)(char *, unsigned int))(*(_DWORD *)v1 + 4))(
    v1,
    (unsigned int)(*(_DWORD *)&HouseClass_Player.__pad_5568[8864] + *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - 1)
  % *(_DWORD *)&HouseClass_Player.__pad_5568[8864]);
  if ( dword_B04874 )
  {
    Mouse::HideWindow();
    if ( dword_B04874 )
LABEL_162:
      Mouse::HideWindow();
  }
}


// ==== 0x00648340  nullsub_32  this=-  sig=ida-proto ====
void __cdecl nullsub_32()
{
  ; /*0x648340*/
}


// ==== 0x00648350  ObjectClass::RunNetworkGameLoop  this=ObjectClass  sig=csp ====
void RunNetworkGameLoop()
{
  int v0; // eax
  void *v1; // ebx
  int *v2; // esi
  int v3; // edi
  signed int v4; // eax
  int v5; // edi
  signed int v6; // eax
  int v7; // edi
  int v8; // ecx
  wchar_t *v9; // ebx
  int v10; // edi
  int *v11; // ebp
  void *v12; // [esp+10h] [ebp-60h]
  unsigned int v13; // [esp+18h] [ebp-58h] BYREF
  int v14; // [esp+1Ch] [ebp-54h] BYREF
  int v15; // [esp+20h] [ebp-50h] BYREF
  int v16; // [esp+24h] [ebp-4Ch] BYREF
  int v17; // [esp+28h] [ebp-48h] BYREF
  DWORD v18; // [esp+2Ch] [ebp-44h] BYREF
  DWORD TicksTimer; // [esp+34h] [ebp-3Ch]
  int v20; // [esp+38h] [ebp-38h]
  int v21; // [esp+3Ch] [ebp-34h]
  DWORD v22; // [esp+40h] [ebp-30h]
  int v23; // [esp+44h] [ebp-2Ch]
  int v24; // [esp+48h] [ebp-28h]
  DWORD v25; // [esp+4Ch] [ebp-24h]
  int v26; // [esp+50h] [ebp-20h]
  int v27; // [esp+54h] [ebp-1Ch]
  DWORD v28; // [esp+58h] [ebp-18h]
  int v29; // [esp+5Ch] [ebp-14h]
  int v30; // [esp+60h] [ebp-10h]
  DWORD v31; // [esp+64h] [ebp-Ch]
  int v32; // [esp+68h] [ebp-8h]
  int v33; // [esp+6Ch] [ebp-4h]

  Debug::Log(); /*0x64835c*/
  if ( MEMORY[0xA8B238][0] < 3 || MEMORY[0xA8B238][0] > 4 ) /*0x648371*/
  {
    v12 = (void *)MEMORY[0xA8EA74]; /*0x648393*/
    v2 = &MEMORY[0xA8EA70]; /*0x648397*/
    v1 = (void *)MEMORY[0xA8EA74]; /*0x64839c*/
    v0 = MEMORY[0xA8EA78] - 14; /*0x6483a0*/
  }
  else
  {
    v0 = MEMORY[0xA8DA40]; /*0x648373*/
    v1 = &MEMORY[0xA8D812]; /*0x648378*/
    v12 = &MEMORY[0xA8D812]; /*0x64837d*/
    v2 = MEMORY[0xA8E9C0]; /*0x648381*/
  }
  LOWORD(dword_AFA400) = BuildNetworkEventPacket((int)v2, (int)v1, v0, (int)MEMORY[0xA8B550], dword_AFA400) /*0x6483c1*/
                       + dword_AFA400;
  TicksTimer = Timer::GetTicks(); /*0x6483d5*/
  v21 = 15; /*0x6483d9*/
  v22 = Timer::GetTicks(); /*0x6483ea*/
  v24 = 600; /*0x6483ee*/
  v18 = Timer::GetTicks(); /*0x6483fb*/
  Debug::Log(); /*0x648404*/
  while ( 2 ) /*0x64840c*/
  {
    EventQueue::Process(MEMORY[0x87F770]); /*0x64840c*/
    v3 = v21; /*0x64841b*/
    if ( TicksTimer == -1 ) /*0x648424*/
    {
LABEL_9:
      if ( v3 ) /*0x64843b*/
        goto LABEL_11; /*0x64843b*/
      goto LABEL_10; /*0x64843b*/
    }
    v4 = Timer::GetTicks() - TicksTimer; /*0x64842f*/
    if ( v4 < v3 ) /*0x648435*/
    {
      v3 -= v4; /*0x648437*/
      goto LABEL_9; /*0x648437*/
    }
LABEL_10:
    v25 = Timer::GetTicks(); /*0x64843d*/
    v27 = 15; /*0x648458*/
    TicksTimer = v25; /*0x64845c*/
    v20 = v26; /*0x648460*/
    v21 = 15; /*0x648464*/
    Debug::Log(); /*0x648468*/
    SendNetworkFrameSync(v2, dword_AFA400); /*0x64847e*/
LABEL_11:
    (*(void (__thiscall **)(int *))(*v2 + 4))(v2); /*0x648483*/
    v5 = v24; /*0x64848e*/
    if ( v22 != -1 ) /*0x648494*/
    {
      v6 = Timer::GetTicks() - v22; /*0x64849f*/
      if ( v6 >= v5 ) /*0x6484a5*/
      {
LABEL_33:
        Debug::Log(); /*0x648664*/
        return; /*0x648678*/
      }
      v5 -= v6; /*0x6484ab*/
    }
    if ( !v5 ) /*0x6484af*/
      goto LABEL_33; /*0x6484af*/
    v7 = 1; /*0x6484b5*/
    do /*0x64858f*/
    {
      if ( !(*(int (__thiscall **)(int *, void *, unsigned int *, int *))(*v2 + 12))(v2, v1, &v13, &v14) ) /*0x6484c9*/
        break; /*0x6484ce*/
      EventQueue::Process(MEMORY[0x87F770]); /*0x6484da*/
      if ( MEMORY[0xA8B238][0] == 1 || MEMORY[0xA8B238][0] == 2 ) /*0x6484ec*/
      {
        switch ( ProcessNetworkMessage((int)v1, 0) ) /*0x648528*/
        {
          case 0: /*0x648528*/
            goto LABEL_23;
          case 4: /*0x648528*/
            (*(void (__thiscall **)(int *))(*v2 + 4))(v2); /*0x648533*/
            v28 = Timer::GetTicks(); /*0x648544*/
            TicksTimer = v28; /*0x648548*/
            v30 = 15; /*0x648550*/
            v21 = 15; /*0x648554*/
            v20 = v29; /*0x64855c*/
            v31 = Timer::GetTicks(); /*0x64856e*/
            v33 = 600; /*0x648572*/
            v22 = v31; /*0x648576*/
            v23 = v32; /*0x64857a*/
            v24 = 600; /*0x64857e*/
            goto LABEL_23; /*0x64857e*/
          default:
            return;
        }
        return;
      }
      if ( ProcessNetworkFrameSync((int)v2, (int)v1, v14, v13, (int)&dword_AFA358, &v18) == 3 ) /*0x64850e*/
        goto LABEL_33; /*0x64850e*/
LABEL_23:
      (*(void (__thiscall **)(int *))(*v2 + 4))(v2); /*0x648586*/
      v8 = v7++; /*0x648589*/
    }
    while ( v8 < 64 ); /*0x64858f*/
    Event::Dispatch(); /*0x648595*/
    if ( !MEMORY[0xA8EDA0] ) /*0x6485a1*/
    {
      InputManager_ProcessEvents::Vtable((int *)&MEMORY[0x87F7E8], &v15, &v17, &v16); /*0x6485b7*/
      SyncDelayClass::ProcessNetworkSync(&v15); /*0x6485c0*/
      ((void (__thiscall *)(LPPERSISTSTREAM))MEMORY[0x887324]->__tail_0[2].GetSizeMax)(MEMORY[0x887324]); /*0x6485cd*/
      TacticalMap::Redraw(&MEMORY[0x87F7E8]); /*0x6485d5*/
    }
    v9 = MEMORY[0xA8ED84] + 500; /*0x6485e7*/
    v10 = 0; /*0x6485ed*/
    if ( (*(int (__thiscall **)(int *))(*v2 + 16))(v2) > 0 ) /*0x6485f4*/
    {
      v11 = &dword_AFA358; /*0x6485f6*/
      do /*0x648615*/
      {
        if ( *v11 < (int)v9 ) /*0x648600*/
          v9 = (wchar_t *)*v11; /*0x648602*/
        ++v10; /*0x64860c*/
        v11 += 6; /*0x64860d*/
      }
      while ( v10 < (*(int (__thiscall **)(int *))(*v2 + 16))(v2) ); /*0x648615*/
    }
    if ( (int)((char *)v9 + MEMORY[0xA8B554]) < (int)MEMORY[0xA8ED84] ) /*0x64862a*/
    {
      Debug::Log(); /*0x64863e*/
      v1 = v12; /*0x648643*/
      continue; /*0x64864a*/
    }
    break;
  }
  Debug::Log(); /*0x64867f*/
  Debug::Log(); /*0x648689*/
  SendNetworkFrameSync(v2, dword_AFA400); /*0x64869f*/
  SendNetworkFrameSync(v2, dword_AFA400); /*0x6486b2*/
  SendNetworkFrameSync(v2, dword_AFA400); /*0x6486c5*/
  SendNetworkFrameSync(v2, dword_AFA400); /*0x6486d8*/
}


// ==== 0x00648710  QueueNetworkProcessor  this=WinModemClass  sig=csp ====
int __fastcall QueueNetworkProcessor(
        CellStruct *aP0,
        int *a1,
        int arg0,
        int arg4,
        ScenarioClass *a4,
        int a6,
        __int16 arg10,
        int *a7)
{
  int *v8; // ebx
  MSVQAnim *v9; // esi
  ObjectClass *v10; // ebp
  ObjectClass *Time; // edi
  int *v12; // ebp
  ObjectClass *v13; // edi
  ObjectClass *v14; // esi
  ObjectClass *v15; // eax
  char *v16; // eax
  IPXManagerClass *v17; // edx
  int v18; // esi
  int v19; // eax
  _WORD *v20; // edi
  int v21; // edx
  int v22; // esi
  signed int eax18; // eax
  MSVQAnim *v23; // esi
  signed int eax25; // eax
  MSVQAnim *v25; // esi
  int v27; // eax
  int v28; // eax
  BOOL v29; // edi
  int v30; // esi
  char *v31; // eax
  int v32; // ebp
  char *v33; // esi
  char *v34; // edi
  SkirmishDialog *Indirect; // eax
  int RemainingMs; // kr04_4
  HWND DlgItem; // esi
  wchar_t *StringCSF; // eax
  ObjectClass *v38; // esi
  CellStruct *v40; // ebp
  CellStruct *v41; // eax
  int v42; // edx
  int *v43; // edi
  int ConnectionSpeed; // eax
  CellStruct *v44; // eax
  wchar_t *v46; // eax
  wchar_t *v47; // eax
  wchar_t *v48; // eax
  wchar_t *v49; // eax
  wchar_t *v50; // eax
  wchar_t *v51; // eax
  wchar_t *v52; // eax
  int v53; // edx
  int i; // esi
  int v55; // eax
  int j; // esi
  int v57; // eax
  ScenarioClass *v58; // esi
  signed int v59; // eax
  ObjectClass *v60; // eax
  int v61; // eax
  ObjectClass *v62; // eax
  ObjectClass *v63; // eax
  int v64; // eax
  bool v65; // cc
  int v66; // eax
  int v67; // ebp
  int *v68; // edi
  int v69; // esi
  int v70; // ebx
  int *v71; // edi
  int v72; // esi
  int *edi133; // edi
  ObjectClass *v73; // edi
  CCINIClass *v75; // edx
  int edx158; // edx
  ObjectClass *v76; // esi
  HWND esi181; // esi
  MSVQAnim *v79; // esi
  HWND v81; // esi
  HWND v82; // esi
  HWND v83; // esi
  HWND esi224; // esi
  CCINIClass *v84; // eax
  wchar_t *v86; // [esp-2h] [ebp-738h]
  wchar_t *_FFFFFFFEa; // [esp-2h] [ebp-738h]
  MSVQAnim *v87; // [esp+2h] [ebp-734h]
  MSVQAnim *v88; // [esp+2h] [ebp-734h]
  MSVQAnim *Class; // [esp+2h] [ebp-734h]
  MSVQAnim *v90; // [esp+2h] [ebp-734h]
  MSVQAnim *v91; // [esp+2h] [ebp-734h]
  ObjectClass *v92; // [esp+6h] [ebp-730h]
  CampaignScore *_A; // [esp+Ah] [ebp-72Ch]
  char v95; // [esp+19h] [ebp-71Dh]
  ObjectClass *v94; // [esp+1Ah] [ebp-71Ch]
  ObjectClass *v96; // [esp+22h] [ebp-714h]
  ObjectClass *v97; // [esp+22h] [ebp-714h]
  ObjectClass *Ticks; // [esp+2Ah] [ebp-70Ch]
  MSVQAnim *v100; // [esp+32h] [ebp-704h]
  MSVQAnim *v101; // [esp+36h] [ebp-700h] BYREF
  ObjectClass *v102; // [esp+3Ah] [ebp-6FCh]
  ScenarioClass *v103; // [esp+3Eh] [ebp-6F8h]
  DWORD v106; // [esp+42h] [ebp-6F4h]
  MSVQAnim *v105; // [esp+46h] [ebp-6F0h]
  MSVQAnim *v108; // [esp+4Ah] [ebp-6ECh]
  ObjectClass *v107; // [esp+4Eh] [ebp-6E8h]
  CCINIClass **var6E4; // [esp+52h] [ebp-6E4h]
  ObjectClass *v109; // [esp+56h] [ebp-6E0h]
  MSVQAnim *v110; // [esp+5Ah] [ebp-6DCh]
  ObjectClass *v111; // [esp+5Eh] [ebp-6D8h]
  int v114; // [esp+62h] [ebp-6D4h]
  ObjectClass *v113; // [esp+66h] [ebp-6D0h]
  MSVQAnim *v116; // [esp+6Ah] [ebp-6CCh]
  ScenarioClass *v117; // [esp+6Eh] [ebp-6C8h]
  int v118; // [esp+72h] [ebp-6C4h]
  _DWORD var6C0[2]; // [esp+76h] [ebp-6C0h] BYREF
  DWORD v120; // [esp+7Eh] [ebp-6B8h]
  IPXManagerClass *v119; // [esp+82h] [ebp-6B4h]
  int v122; // [esp+86h] [ebp-6B0h]
  IPXManagerClass *v121; // [esp+8Ah] [ebp-6ACh] BYREF
  int v124; // [esp+8Eh] [ebp-6A8h]
  int v125; // [esp+92h] [ebp-6A4h]
  int var6A0; // [esp+96h] [ebp-6A0h]
  int var69C; // [esp+9Ah] [ebp-69Ch] BYREF
  MouseClass *v126; // [esp+9Eh] [ebp-698h]
  ObjectClass *v127; // [esp+A2h] [ebp-694h]
  BOOL var690; // [esp+A6h] [ebp-690h]
  ObjectClass *v129; // [esp+AAh] [ebp-68Ch]
  ObjectClass *v130; // [esp+AEh] [ebp-688h] BYREF
  unsigned int var684; // [esp+B2h] [ebp-684h] BYREF
  int v134[7]; // [esp+B6h] [ebp-680h] BYREF
  ObjectClass *v133; // [esp+D2h] [ebp-664h]
  IPXManagerClass *var660; // [esp+D6h] [ebp-660h]
  int var65C; // [esp+DAh] [ebp-65Ch]
  ObjectClass *v136; // [esp+DEh] [ebp-658h]
  ObjectClass *v137; // [esp+E2h] [ebp-654h]
  ObjectClass *v138; // [esp+E6h] [ebp-650h]
  ObjectClass *v139; // [esp+EAh] [ebp-64Ch]
  MSVQAnim *var648; // [esp+EEh] [ebp-648h]
  ObjectClass *v141; // [esp+F2h] [ebp-644h]
  ScenarioClass *v142; // [esp+F6h] [ebp-640h]
  ObjectClass *var63C; // [esp+FAh] [ebp-63Ch]
  ScenarioClass *v146; // [esp+FEh] [ebp-638h]
  ObjectClass *v145; // [esp+102h] [ebp-634h]
  ObjectClass *var630; // [esp+106h] [ebp-630h]
  ScenarioClass *var62C; // [esp+10Ah] [ebp-62Ch]
  ObjectClass *v148; // [esp+10Eh] [ebp-628h]
  ObjectClass *v149; // [esp+112h] [ebp-624h]
  int var620; // [esp+116h] [ebp-620h]
  ObjectClass *v151; // [esp+11Ah] [ebp-61Ch]
  ObjectClass *v152; // [esp+122h] [ebp-614h]
  DWORD v155; // [esp+126h] [ebp-610h]
  MSVQAnim *v156; // [esp+12Ah] [ebp-60Ch]
  ObjectClass *var608; // [esp+12Eh] [ebp-608h]
  ObjectClass *v158; // [esp+132h] [ebp-604h]
  ObjectClass *v157; // [esp+13Ah] [ebp-5FCh]
  _DWORD v160[4]; // [esp+13Eh] [ebp-5F8h] BYREF
  char v161; // [esp+14Eh] [ebp-5E8h] BYREF
  DWORD v162; // [esp+152h] [ebp-5E4h]
  int v163; // [esp+15Ah] [ebp-5DCh]
  DWORD v164; // [esp+15Eh] [ebp-5D8h]
  int v165; // [esp+166h] [ebp-5D0h]
  int a3; // [esp+16Ah] [ebp-5CCh] BYREF
  wchar_t lParam[512]; // [esp+16Eh] [ebp-5C8h] BYREF
  int v168; // [esp+56Eh] [ebp-1C8h] BYREF
  char Destination[43]; // [esp+572h] [ebp-1C4h] BYREF
  int v170; // [esp+59Dh] [ebp-199h]
  int v171; // [esp+5A1h] [ebp-195h]
  MouseClass *v172; // [esp+5A5h] [ebp-191h]
  ObjectClass *v173; // [esp+5A9h] [ebp-18Dh]

  v8 = a1;
  v9 = 0;
  v95 = 0;
  var6E4 = *(CCINIClass ***)&stru_87C374.__pad_579C[22520];
  Timer::GetTicks();
  Timer::GetTicks();
  Timer::GetTicks();
  Timer::GetTicks();
  Timer::GetTicks();
  v94 = 0;
  v10 = (ObjectClass *)arg4;
  v162 = Timer::GetTicks();
  v163 = 2 * arg4;
  v164 = Timer::GetTicks();
  v165 = arg4 / 2;
  v107 = 0;
  Ticks = (ObjectClass *)Timer::GetTicks();
  v100 = (MSVQAnim *)arg0;
  v106 = Timer::GetTicks();
  v105 = v116;
  v108 = (MSVQAnim *)arg4;
  v101 = (MSVQAnim *)Timer::GetTicks();
  v102 = (ObjectClass *)v116;
  v103 = a4;
  var6C0[0] = Timer::GetTicks();
  var6C0[1] = v129;
  v111 = (ObjectClass *)180;
  v109 = (ObjectClass *)Timer::GetTicks();
  v110 = v116;
  v120 = Timer::GetTicks();
  v122 = 300;
  v118 = 0;
  Time = (ObjectClass *)timeGetTime();
  if ( (*(int (__thiscall **)(int *))(*v8 + 16))(v8) > 0 )
  {
    v12 = a7 + 5;
    do
    {
      *v12 = (int)Time;
      v9 = (MSVQAnim *)((char *)v9 + 1);
      v12 += 6;
    }
    while ( (int)v9 < (*(int (__thiscall **)(int *))(*v8 + 16))(v8) );
LABEL_4:
    v10 = (ObjectClass *)arg4;
  }
  v13 = (ObjectClass *)arg0;
  EventQueue::Process(*(_DWORD **)&stru_87C374.__pad_14B0[8012]);
  v14 = (ObjectClass *)v100;
  if ( Ticks == (ObjectClass *)-1 )
  {
LABEL_8:
    if ( v14 )
      goto LABEL_17;
    goto LABEL_9;
  }
  v15 = (ObjectClass *)(Timer::GetTicks() - (_DWORD)Ticks);
  if ( (int)v15 < (int)v100 )
  {
    v14 = (ObjectClass *)((char *)v100 - (char *)v15);
    goto LABEL_8;
  }
LABEL_9:
  v151 = (ObjectClass *)Timer::GetTicks();
  Ticks = v151;
  v152 = (ObjectClass *)arg0;
  v100 = (MSVQAnim *)arg0;
  SendNetworkFrameSync(v8, arg10);
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 && HouseClass_Player.__pad_5568[18668] )
  {
    Network::Disconnect(&HouseClass_Player.__pad_5568[22284]);
    Debug::Log();
    v168 = 39;
    v16 = ToWideStringChar(**(IUnknown ***)&HouseClass_Player.__pad_5568[18372]);
    strncpy(Destination, v16, (IUnknown *)0x14);
    HIWORD(v17) = *(_WORD *)&HouseClass_Player.__pad_5568[18674];
    v170 = *(_DWORD *)(HouseClass_Player.field_0 + 48);
    var69C = *(_DWORD *)&HouseClass_Player.__pad_5568[18672];
    LOWORD(v17) = *(_WORD *)&HouseClass_Player.__pad_5568[18696];
    v127 = *(ObjectClass **)&HouseClass_Player.__pad_5568[18680];
    v126 = *(MouseClass **)&HouseClass_Player.__pad_5568[18676];
    Network::SetPort(&var69C, v17);
    v18 = 1;
    v171 = var69C;
    v172 = v126;
    v173 = v127;
    if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 1 )
    {
      v19 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372];
      v20 = (_WORD *)(&HouseClass_Player + 42344);
      do
      {
        v21 = *(_DWORD *)(*(_DWORD *)(v19 + 4 * v18) + 111);
        if ( v21 != *(_DWORD *)(HouseClass_Player.field_0 + 48) )
        {
          LOWORD(v21) = *v20;
          Network::SendMessage(
            (int)&HouseClass_Player.__pad_5568[22284],
            (int)&v168,
            91,
            0,
            *(_DWORD *)(v19 + 4 * v18) + 40,
            v21,
            0);
          v19 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372];
        }
        ++v18;
        ++v20;
      }
      while ( v18 < *(int *)&HouseClass_Player.__pad_5568[18384] );
    }
    Event::Dispatch();
    v13 = (ObjectClass *)arg0;
  }
LABEL_17:
  v22 = v122;
  if ( v120 != -1 )
  {
    eax18 = Timer::GetTicks() - v120;
    if ( eax18 >= v22 )
      goto LABEL_21;
    v22 -= eax18;
  }
  if ( !v22 )
  {
LABEL_21:
    if ( !aP0 )
    {
      v133 = (ObjectClass *)Timer::GetTicks();
      var65C = 300;
      v120 = (DWORD)v133;
      v119 = var660;
      v122 = 300;
      goto LABEL_34;
    }
    goto LABEL_24;
  }
  if ( !aP0 )
    goto LABEL_34;
LABEL_24:
  v23 = (MSVQAnim *)v111;
  if ( v109 == (ObjectClass *)-1 )
    goto LABEL_27;
  eax25 = Timer::GetTicks() - (_DWORD)v109;
  if ( eax25 < (int)v23 )
  {
    v23 = (MSVQAnim *)((char *)v23 - eax25);
LABEL_27:
    if ( v23 )
      goto LABEL_34;
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 1
    || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 2
    || HouseClass_Player.__pad_5568[18668] )
  {
    Debug::Log();
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
      Network::Disconnect(&HouseClass_Player.__pad_5568[22284]);
    Multiplayer::ShowProgress(
      &HouseClass_Player.__pad_5568[8068],
      *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13501) != 0 ? 200 : 100);
    v148 = (ObjectClass *)Timer::GetTicks();
    var620 = 180;
    v109 = v148;
    v110 = (MSVQAnim *)v149;
    v111 = (ObjectClass *)180;
  }
LABEL_34:
  (*(void (__thiscall **)(int *))(*v8 + 4))(v8);
  v25 = v108;
  if ( v106 != -1 )
  {
    v27 = Timer::GetTicks() - v106;
    if ( v27 >= (int)v25 )
      goto LABEL_38;
    v25 = (MSVQAnim *)((char *)v25 - v27);
  }
  if ( v25 )
    goto LABEL_93;
LABEL_38:
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
    Network::Disconnect(&HouseClass_Player.__pad_5568[22284]);
  v28 = *v8;
  v29 = v94 == 0;
  var690 = aP0 == 0;
  v30 = (*(int (__thiscall **)(int *))(v28 + 16))(v8);
  v114 = v30;
  dword_AFA418 = Timer::GetTicks() - var6C0[0];
  if ( v30 > 0 )
  {
    v31 = (char *)&unk_AFA278;
    v32 = v30;
    do
    {
      v33 = &v31[(char *)a7 - (char *)&unk_AFA278];
      v34 = v31;
      v31 += 24;
      --v32;
      qmemcpy(v34, v33, 0x18u);
    }
    while ( v32 );
    v29 = v94 == 0;
  }
  if ( v29 )
  {
    byte_B04894 = HouseClass_Player.__pad_5568[20676];
    HouseClass_Player.__pad_5568[20676] = 0;
    dword_B04468 = -1;
    Indirect = (SkirmishDialog *)CreateDialogIndirect(g_hInstance, (HWND)0xEA, g_hWnd, NetworkScore::DlgProc, 0);
    *(&g_MatrixTransformState + 7698) = (CoordStruct *)Indirect;
    if ( !Indirect )
      goto LABEL_50;
    SetWindowLongA((HWND)Indirect, 8, (LONG)&dword_B04468);
    SetupDialog(*(&g_MatrixTransformState + 7698), 234);
    ShowWindow((HWND)*(&g_MatrixTransformState + 7698), 1);
    SendMessageA((HWND)*(&g_MatrixTransformState + 7698), 0x4A9u, 0, 1);
    byte_B04470 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 28))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
    if ( byte_B04470 )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 20))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
  }
  Indirect = (SkirmishDialog *)*(&g_MatrixTransformState + 7698);
LABEL_50:
  if ( dword_B04468 == 2 )
  {
    CloseDialog((HWND)Indirect, 0);
    if ( byte_B04470 )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 24))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
    HouseClass_Player.__pad_5568[20676] = byte_B04894;
    MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2);
    if ( v94 )
    {
      v76 = (ObjectClass *)Dialog::FindByHandle((void *)0xEA);
      if ( v76 )
      {
        if ( byte_B04470 )
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 24))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
        CloseDialog((HWND)v76, 0);
        HouseClass_Player.__pad_5568[20676] = byte_B04894;
        MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2);
        if ( HouseClass_Player.__pad_5568[20676] )
          TacticalMap::Redraw(&stru_87C374.__pad_14B0[8132]);
      }
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
      Connection::Close(&HouseClass_Player.__pad_5568[22284]);
    if ( byte_B04878 )
    {
      Network::SendUnreachable();
      return 9;
    }
    else
    {
      Network::SendUnreachable();
      return 8;
    }
  }
  RemainingMs = Timer::GetRemainingMs((signed int *)&v101);
  if ( v29 )
    goto LABEL_54;
  if ( (wchar_t *)(RemainingMs / 60) != dword_B04898 )
  {
    v29 = v94 == 0;
LABEL_54:
    dword_B04898 = (wchar_t *)(RemainingMs / 60);
    DlgItem = GetDlgItem((HWND)*(&g_MatrixTransformState + 7698), 1616);
    if ( DlgItem )
    {
      v87 = (MSVQAnim *)dword_B04898;
      StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[6488], 0, &stru_830620.__pad_579C[5860], 3853);
      swprintf(lParam, (const size_t)StringCSF, (const wchar_t *const)v87, (CampaignScore *)v92);
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam);
    }
    if ( ((unsigned __int8)dword_B04898 & 1) == 0 )
      PostMessageA((HWND)*(&g_MatrixTransformState + 7698), 0xFu, 0, 0);
    if ( v29 )
    {
      while ( *(_DWORD *)&HouseClass_Player.__pad_5568[10372] )
      {
        __3_YAXPAX_Z(**(void ***)&HouseClass_Player.__pad_5568[10360]);
        Network_Process_652560(&HouseClass_Player.__pad_5568[10356], 0);
      }
      memset(&HouseClass_Player.__pad_5568[10380], 0, 0x20u);
      memset(&HouseClass_Player.__pad_5568[10412], 0xFFu, 0x100u);
      v38 = (ObjectClass *)GetDlgItem((HWND)*(&g_MatrixTransformState + 7698), 1617);
      if ( v38 )
      {
        if ( var690 )
        {
          v40 = 0;
          v41 = 0;
          v42 = 0x7FFFFFFF;
          if ( v114 > 0 )
          {
            v43 = a7;
            do
            {
              if ( *v43 < v42 )
              {
                v42 = *v43;
                v40 = v41;
              }
              v41 = (CellStruct *)((char *)v41 + 1);
              v43 += 6;
            }
            while ( (int)v41 < v114 );
          }
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 3
            || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
          {
            ConnectionSpeed = Network::GetConnectionSpeed(&HouseClass_Player.__pad_5568[22284], v40);
            Class = (MSVQAnim *)Network::GetClass((int *)&HouseClass_Player.__pad_5568[22284], ConnectionSpeed);
            _FFFFFFFEa = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[6468], 0, &stru_830620.__pad_579C[5860], 3908);
            swprintf(lParam, (const size_t)_FFFFFFFEa, (const wchar_t *const)Class, (CampaignScore *)v92);
          }
          else
          {
            v88 = *(MSVQAnim **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4);
            v86 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[6468], 0, &stru_830620.__pad_579C[5860], 3914);
            swprintf(lParam, (const size_t)v86, (const wchar_t *const)v88, (CampaignScore *)v92);
          }
          DrawDialogText((ObjectClass *)0xFFFFFFFF, lParam, (HWND)v38);
          DrawDialogText((ObjectClass *)0xFFFFFFFF, (const wchar_t *)&stru_87C374.__pad_579C[23588], (HWND)v38);
          v44 = *(CellStruct **)&HouseClass_Player.__pad_5568[8068];
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
          {
            v46 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[6448], 0, &stru_830620.__pad_579C[5860], 3928);
            wcscpy(lParam, v46);
            wcscat(lParam, &stru_82083C);
            v47 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[6424], 0, &stru_830620.__pad_579C[5860], 3930);
            wcscat(lParam, (CampaignScore *)v47);
            wcscat(lParam, &stru_82083C);
            v48 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[6400], 0, &stru_830620.__pad_579C[5860], 3932);
            wcscat(lParam, (CampaignScore *)v48);
            DrawDialogText((ObjectClass *)0xFFFFFFFF, lParam, (HWND)v38);
            DrawDialogText((ObjectClass *)0xFFFFFFFF, (const wchar_t *)&stru_87C374.__pad_579C[23588], (HWND)v38);
            v44 = *(CellStruct **)&HouseClass_Player.__pad_5568[8068];
            if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
              goto LABEL_75;
          }
          if ( v44 == (CellStruct *)3 )
          {
LABEL_75:
            v49 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[6380], 0, &stru_830620.__pad_579C[5860], 3939);
            wcscpy(lParam, v49);
            wcscat(lParam, &stru_82083C);
            if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
            {
              v90 = (MSVQAnim *)GetStringCSF(
                                  (wchar_t *)&stru_830620.__pad_579C[6356],
                                  0,
                                  &stru_830620.__pad_579C[5860],
                                  3943);
              wcscat(lParam, (CampaignScore *)v90);
            }
            else if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 3 )
            {
              v91 = (MSVQAnim *)GetStringCSF(
                                  (wchar_t *)&stru_830620.__pad_579C[6336],
                                  0,
                                  &stru_830620.__pad_579C[5860],
                                  3945);
              wcscat(lParam, (CampaignScore *)v91);
            }
            DrawDialogText((ObjectClass *)0xFFFFFFFF, lParam, (HWND)v38);
            DrawDialogText((ObjectClass *)0xFFFFFFFF, (const wchar_t *)&stru_87C374.__pad_579C[23588], (HWND)v38);
          }
          DrawDialogText((ObjectClass *)0xFFFFFFFF, (const wchar_t *)&stru_87C374.__pad_579C[23588], (HWND)v38);
          v50 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[6316], 0, &stru_830620.__pad_579C[5860], 3955);
          DrawDialogText((ObjectClass *)0xFFFFFFFF, v50, (HWND)v38);
          v51 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[6296], 0, &stru_830620.__pad_579C[5860], 3960);
          DrawDialogText((ObjectClass *)0xFFFFFFFF, v51, (HWND)v38);
          DrawDialogText((ObjectClass *)0xFFFFFFFF, (const wchar_t *)&stru_87C374.__pad_579C[23588], (HWND)v38);
        }
        else
        {
          v52 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[6268], 0, &stru_830620.__pad_579C[5860], 3963);
          swprintf(lParam, (const size_t)v52, (const wchar_t *const)v92, _A);
          DrawDialogText((ObjectClass *)0xFFFFFFFF, lParam, (HWND)v38);
        }
      }
    }
  }
  if ( *(int *)&HouseClass_Player.__pad_5568[10372] > 0 )
  {
    Network_Process_64AD10(
      *(_DWORD *)(**(_DWORD **)&HouseClass_Player.__pad_5568[10360] + 51),
      *(_DWORD *)(**(_DWORD **)&HouseClass_Player.__pad_5568[10360] + 47));
    __3_YAXPAX_Z(**(void ***)&HouseClass_Player.__pad_5568[10360]);
    Network_Process_652560(&HouseClass_Player.__pad_5568[10356], 0);
  }
  v53 = *(_DWORD *)&HouseClass_Player.__pad_5568[18384];
  for ( i = 0; i < *(int *)&HouseClass_Player.__pad_5568[18384]; ++i )
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[4
                                                * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372]
                                                                        + 4 * i)
                                                            + 111)
                                                + 10380] >= v53 - 1 )
    {
      Debug::Log();
      if ( !i )
      {
        Debug::Log();
        for ( j = 1; j < *(int *)&HouseClass_Player.__pad_5568[18384]; ++j )
        {
          v57 = (*(int (__thiscall **)(int *, _DWORD))(*v8 + 24))(
                  v8,
                  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * j) + 111));
          KickNetworkPlayerNow((int)v8, v57, (int)a7, 0);
        }
        break;
      }
      v55 = (*(int (__thiscall **)(int *, _DWORD))(*v8 + 24))(
              v8,
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * i) + 111));
      KickNetworkPlayerNow((int)v8, v55, (int)a7, 1u);
    }
    v53 = *(_DWORD *)&HouseClass_Player.__pad_5568[18384];
  }
  v10 = (ObjectClass *)arg4;
  v13 = (ObjectClass *)arg0;
  v94 = (ObjectClass *)1;
LABEL_93:
  v58 = v103;
  if ( v101 == (MSVQAnim *)-1 )
    goto LABEL_96;
  v59 = Timer::GetTicks() - (_DWORD)v101;
  if ( v59 < (int)v58 )
  {
    v58 = (ScenarioClass *)((char *)v58 - v59);
LABEL_96:
    if ( v58 )
    {
LABEL_100:
      v96 = (ObjectClass *)1;
      while ( 1 )
      {
        if ( !(*(int (__thiscall **)(int *, int, unsigned int *, ObjectClass **))(*v8 + 12))(v8, a6, &var684, &v130) )
          goto LABEL_120;
        EventQueue::Process(*(_DWORD **)&stru_87C374.__pad_14B0[8012]);
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 1 || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 2 )
        {
          v61 = ProcessNetworkMessage(a6, (int)aP0);
          switch ( v61 )
          {
            case 4:
              (*(void (__thiscall **)(int *))(*v8 + 4))(v8);
              v158 = (ObjectClass *)Timer::GetTicks();
              Ticks = v158;
              v157 = v13;
              v100 = (MSVQAnim *)v13;
              v62 = (ObjectClass *)Timer::GetTicks();
              v141 = v10;
              v108 = (MSVQAnim *)v10;
              v139 = v62;
              v106 = (DWORD)v62;
              v105 = var648;
              v142 = (ScenarioClass *)Timer::GetTicks();
              v101 = (MSVQAnim *)v142;
              v146 = a4;
              v102 = var63C;
              v103 = a4;
              goto LABEL_116;
            case 5:
              if ( aP0 )
                v107 = (ObjectClass *)((char *)v107 + 1);
LABEL_120:
              if ( v94 )
                (*(void (__thiscall **)(int *))(*v8 + 16))(v8);
              if ( aP0 )
              {
                v66 = (*(int (__thiscall **)(int *))(*v8 + 16))(v8);
                if ( (int)v107 < v66 )
                {
LABEL_162:
                  Event::Dispatch();
                  if ( !aP0 && !*(_DWORD *)&HouseClass_Player.__pad_5568[23276] && !v94 )
                  {
                    InputManager_ProcessEvents::Vtable(
                      (int *)&stru_87C374.__pad_14B0[8132],
                      (MouseClass *)v134,
                      (MouseClass *)&v161,
                      &a3);
                    SyncDelayClass::ProcessNetworkSync(v134);
                    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22548] + 92))(*(_DWORD *)&stru_87C374.__pad_579C[22548]);
                    TacticalMap::Redraw(&stru_87C374.__pad_14B0[8132]);
                  }
                  ++v118;
                  goto LABEL_4;
                }
LABEL_223:
                if ( v94 )
                {
                  esi224 = (HWND)Dialog::FindByHandle((void *)0xEA);
                  if ( esi224 )
                  {
                    if ( byte_B04470 )
                      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 24))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
                    CloseDialog(esi224, 0);
                    HouseClass_Player.__pad_5568[20676] = byte_B04894;
                    MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2);
                    if ( HouseClass_Player.__pad_5568[20676] )
                      TacticalMap::Redraw(&stru_87C374.__pad_14B0[8132]);
                  }
                  if ( (*(int (__thiscall **)(int *))(*a1 + 16))(a1) > 0 )
                  {
                    dword_B77780 = 0;
                    dword_B77CE0 = 0;
                  }
                }
                if ( v95 && HouseClass_Player.__pad_5568[9728] && HouseClass_Player.__pad_5568[9729] )
                {
                  v84 = *var6E4;
                  v121 = (IPXManagerClass *)100;
                  v124 = 400;
                  v125 = 540;
                  var6A0 = 4;
                  ((void (__thiscall *)(CCINIClass **, IPXManagerClass **, _DWORD))v84->sectionHead[1])(
                    var6E4,
                    &v121,
                    0);
                }
                if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
                  Connection::Close(&HouseClass_Player.__pad_5568[22284]);
                return 0;
              }
              v67 = -1;
              v97 = *(ObjectClass **)&HouseClass_Player.__pad_5568[8860];
              if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8856] == 1 )
                goto LABEL_223;
              v68 = a1;
              v69 = 0;
              v70 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248] + 1000;
              if ( (*(int (__thiscall **)(int *))(*a1 + 16))(a1) > 0 )
              {
                v71 = a7;
                do
                {
                  if ( *v71 < v70 )
                  {
                    v70 = *v71;
                    v67 = v69;
                  }
                  ++v69;
                  v71 += 6;
                }
                while ( v69 < (*(int (__thiscall **)(int *))(*a1 + 16))(a1) );
                v68 = a1;
              }
              v72 = 0;
              if ( (*(int (__thiscall **)(int *))(*v68 + 16))(v68) <= 0 )
              {
LABEL_136:
                if ( *(int *)&HouseClass_Player.__pad_5568[23248] < (int)&v97->__pad_0[v70] )
                  goto LABEL_223;
                v72 = -1;
              }
              else
              {
                edi133 = a7 + 1;
                while ( edi133[1] >= (unsigned int)*edi133 )
                {
                  ++v72;
                  edi133 += 6;
                  if ( v72 >= (*(int (__thiscall **)(int *))(*a1 + 16))(a1) )
                    goto LABEL_136;
                }
              }
              if ( *(int *)&HouseClass_Player.__pad_5568[23248] < (int)&v97->__pad_0[v70] )
                v67 = -1;
              if ( HouseClass_Player.__pad_5568[9728]
                && HouseClass_Player.__pad_5568[9729]
                && v118 > 0
                && (!v95 || v67 != -1 || v72 != -1) )
              {
                DrawHUD();
                goto LABEL_148;
              }
              if ( !v95 )
              {
LABEL_148:
                if ( v67 == -1 )
                {
                  v73 = (ObjectClass *)var6E4;
                }
                else
                {
                  if ( HouseClass_Player.__pad_5568[9728] && HouseClass_Player.__pad_5568[9729] )
                  {
                    v73 = (ObjectClass *)var6E4;
                    v160[1] = 400;
                    v160[0] = 20 * (5 * v67 + 5);
                    v75 = *var6E4;
                    v160[2] = 35;
                    v160[3] = 3;
                    ((void (__thiscall *)(CCINIClass **, _DWORD *, int))v75->sectionHead[1])(
                      var6E4,
                      v160,
                      (255 >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120])
                    | (255 >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
                    | (40 >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]));
                  }
                  else
                  {
                    v73 = (ObjectClass *)var6E4;
                  }
                  ++*(_DWORD *)&HouseClass_Player.__pad_5568[104 * v67 + 8980];
                }
                if ( v72 != -1 )
                {
                  if ( HouseClass_Player.__pad_5568[9728] && HouseClass_Player.__pad_5568[9729] )
                  {
                    edx158 = *(_DWORD *)v73->__pad_0;
                    v124 = 400;
                    v125 = 40;
                    var6A0 = 3;
                    v121 = (IPXManagerClass *)(100 * v72 + 140);
                    (*(void (__thiscall **)(ObjectClass *, IPXManagerClass **, int))(edx158 + 20))(
                      v73,
                      &v121,
                      (255 >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120])
                    | (40 >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
                    | (40 >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]));
                  }
                  ++*(_DWORD *)&HouseClass_Player.__pad_5568[104 * v67 + 8984];
                }
                v95 = 1;
              }
              v8 = a1;
              goto LABEL_162;
            case 6:
              if ( !Network_Process_64B410((int)v8, a7) )
              {
                if ( v94 )
                {
                  v81 = (HWND)Dialog::FindByHandle((void *)0xEA);
                  if ( v81 )
                  {
                    if ( byte_B04470 )
                      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 24))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
                    CloseDialog(v81, 0);
                    HouseClass_Player.__pad_5568[20676] = byte_B04894;
                    MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2);
                    if ( HouseClass_Player.__pad_5568[20676] )
                      TacticalMap::Redraw(&stru_87C374.__pad_14B0[8132]);
                  }
                }
                if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
                  Connection::Close(&HouseClass_Player.__pad_5568[22284]);
                Network::SendUnreachable();
                return 7;
              }
              MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2);
              TacticalMap::Redraw(&stru_87C374.__pad_14B0[8132]);
              v63 = (ObjectClass *)Timer::GetTicks();
              v134[6] = (int)v13;
              v100 = (MSVQAnim *)v13;
              v134[4] = (int)v63;
              Ticks = v63;
              v136 = (ObjectClass *)Timer::GetTicks();
              v106 = (DWORD)v136;
              v138 = v10;
              v108 = (MSVQAnim *)v10;
              v105 = (MSVQAnim *)v137;
              v113 = (ObjectClass *)Timer::GetTicks();
              v117 = a4;
              v101 = (MSVQAnim *)v113;
              v102 = (ObjectClass *)v116;
              v103 = a4;
              break;
            default:
              if ( v61 )
                goto LABEL_120;
              break;
          }
        }
        v64 = ProcessNetworkFrameSync((int)v8, a6, (int)v130, var684, (int)a7, var6C0);
        switch ( v64 )
        {
          case 1:
            v107 = (ObjectClass *)((char *)v107 + 1);
            break;
          case 2:
            if ( v94 )
            {
              v82 = (HWND)Dialog::FindByHandle((void *)0xEA);
              if ( v82 )
              {
                if ( byte_B04470 )
                  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 24))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
                CloseDialog(v82, 0);
                HouseClass_Player.__pad_5568[20676] = byte_B04894;
                MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2);
                if ( HouseClass_Player.__pad_5568[20676] )
                  TacticalMap::Redraw(&stru_87C374.__pad_14B0[8132]);
              }
            }
            if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
              Connection::Close(&HouseClass_Player.__pad_5568[22284]);
            return 2;
          case 3:
            if ( v94 )
            {
              v83 = (HWND)Dialog::FindByHandle((void *)0xEA);
              if ( v83 )
              {
                if ( byte_B04470 )
                  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 24))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
                CloseDialog(v83, 0);
                HouseClass_Player.__pad_5568[20676] = byte_B04894;
                MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2);
                if ( HouseClass_Player.__pad_5568[20676] )
                  TacticalMap::Redraw(&stru_87C374.__pad_14B0[8132]);
              }
            }
            if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
              Connection::Close(&HouseClass_Player.__pad_5568[22284]);
            Network::SendUnreachable();
            return 3;
        }
        (*(void (__thiscall **)(int *))(*v8 + 4))(v8);
LABEL_116:
        v65 = (int)v96 < 64;
        v96 = (ObjectClass *)((char *)v96 + 1);
        if ( !v65 )
          goto LABEL_120;
      }
    }
  }
  if ( aP0 )
  {
    if ( v94 )
    {
      esi181 = (HWND)Dialog::FindByHandle((void *)0xEA);
      if ( esi181 )
      {
        if ( byte_B04470 )
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 24))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
        CloseDialog(esi181, 0);
        HouseClass_Player.__pad_5568[20676] = byte_B04894;
        MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2);
        if ( HouseClass_Player.__pad_5568[20676] )
          TacticalMap::Redraw(&stru_87C374.__pad_14B0[8132]);
      }
    }
    Network::SendUnreachable();
  }
  else
  {
    if ( Network_Process_64B410((int)v8, a7) )
    {
      MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2);
      TacticalMap::Redraw(&stru_87C374.__pad_14B0[8132]);
      v60 = (ObjectClass *)Timer::GetTicks();
      v134[3] = (int)v13;
      v100 = (MSVQAnim *)v13;
      v134[1] = (int)v60;
      Ticks = v60;
      v155 = Timer::GetTicks();
      v106 = v155;
      var608 = v10;
      v108 = (MSVQAnim *)v10;
      v105 = v156;
      v145 = (ObjectClass *)Timer::GetTicks();
      var62C = a4;
      v101 = (MSVQAnim *)v145;
      v102 = var630;
      v103 = a4;
      goto LABEL_100;
    }
    if ( v94 )
    {
      v79 = (MSVQAnim *)Dialog::FindByHandle((void *)0xEA);
      if ( v79 )
      {
        if ( byte_B04470 )
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 24))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
        CloseDialog((HWND)v79, 0);
        HouseClass_Player.__pad_5568[20676] = byte_B04894;
        MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2);
        if ( HouseClass_Player.__pad_5568[20676] )
          TacticalMap::Redraw(&stru_87C374.__pad_14B0[8132]);
      }
    }
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
    Connection::Close(&HouseClass_Player.__pad_5568[22284]);
  return 7;
}


// ==== 0x00649CA0  BuildNetworkEventPacket  this=-  sig=csp ====
int __fastcall BuildNetworkEventPacket(int a1, int a2, int a3, int a4, __int16 a5)
{
  int v6; // ecx
  int v8; // ecx
  int v9; // ebp
  int v10; // eax
  int v11; // eax
  int v12; // edx
  char *v13; // esi
  char *v14; // edi
  char *v15; // esi
  char v16; // al
  int v17; // edi
  int v18; // ebp
  char v19; // al
  int v20; // esi
  int v22; // [esp+10h] [ebp-1Ch]
  int v23; // [esp+14h] [ebp-18h]
  int v24; // [esp+18h] [ebp-14h]
  int v25; // [esp+1Ch] [ebp-10h]
  int v26; // [esp+20h] [ebp-Ch]
  int v27; // [esp+24h] [ebp-8h] BYREF
  int v28; // [esp+28h] [ebp-4h]

  v6 = Networking_LastEventIndex; /*0x649caf*/
  v26 = a1; /*0x649cc4*/
  v25 = 0; /*0x649cc8*/
  v22 = Networking_LastEventIndex; /*0x649ccc*/
  if ( Networking_LastEventIndex > 0x2000 - dword_8B41F8 ) /*0x649cd0*/
    v22 = 0x2000 - dword_8B41F8; /*0x649cd2*/
  v28 = Networking_LastEventIndex; /*0x649cd6*/
  while ( 1 )
  {
    if ( !v22 || !v6 || (v24 = 1, MEMORY[0xA8B54C] == 1) ) /*0x649cf9*/
      v24 = 0; /*0x649cfb*/
    *(_BYTE *)a2 = 28; /*0x649cff*/
    v27 = 0; /*0x649d0a*/
    v8 = a4; /*0x649d1b*/
    *(_DWORD *)(a2 + 3) = MEMORY[0xA8B24C] == 2
                        ? (wchar_t *)(MEMORY[0xA8B554]
                                    * (((unsigned int)MEMORY[0xA8ED84] + MEMORY[0xA8B554] + a4 - 1)
                                     / MEMORY[0xA8B554]))
                        : (wchar_t *)((char *)MEMORY[0xA8ED84] + a4);
    *(_BYTE *)(a2 + 2) = *((_BYTE *)HouseClass_Player + 48); /*0x649d49*/
    *(_DWORD *)(a2 + 7) = *(_DWORD *)MEMORY[0xAC51FC]; /*0x649d57*/
    *(_WORD *)(a2 + 11) = a5; /*0x649d5a*/
    *(_BYTE *)(a2 + 13) = a4; /*0x649d5e*/
    v9 = MEMORY[0xA8B24C] != 0 ? 14 : 111;
    if ( MEMORY[0xA8B24C] )
    {
      v9 = MEMORY[0xA8B24C] <= 0 || MEMORY[0xA8B24C] > 2
         ? 0
         : CompressNetworkMegaMission(a2, a3, a4, MEMORY[0xA8B24C] != 0 ? 14 : 111, v22, &v27);
    }
    else
    {
      v23 = 0; /*0x649da7*/
      if ( Networking_LastEventIndex )
      {
        v10 = g_NetworkEventIndex; /*0x649db7*/
        while ( v23 < v22 )
        {
          v11 = 37 * v10; /*0x649dcf*/
          v12 = g_NetworkPacketIndex[3 * v11] == 31 ? *(int *)((char *)&dword_A802DF + 3 * v11) + 111 : 111;
          if ( v9 + v12 > a3 ) /*0x649df5*/
            break; /*0x649df5*/
          *(int *)((char *)&dword_A802D7 + 3 * v11) = (int)MEMORY[0xA8ED84] + v8; /*0x649e03*/
          byte_A802D6[111 * g_NetworkEventIndex] = *((_BYTE *)HouseClass_Player + 48); /*0x649e1e*/
          byte_A802D5[111 * g_NetworkEventIndex] &= ~1u; /*0x649e3a*/
          if ( dword_8B41F8 >= 0x4000 ) /*0x649e4b*/
            break; /*0x649e4b*/
          v13 = &g_NetworkPacketIndex[111 * g_NetworkEventIndex]; /*0x649e61*/
          v14 = &unk_8B4204[111 * unk_8B4200]; /*0x649e73*/
          qmemcpy(v14, v13, 0x6Cu); /*0x649e7a*/
          v13 += 108; /*0x649e7a*/
          v14 += 108; /*0x649e7a*/
          *(_WORD *)v14 = *(_WORD *)v13; /*0x649e7c*/
          v14[2] = v13[2]; /*0x649e7e*/
          dword_A70204[unk_8B4200] = timeGetTime(); /*0x649e8e*/
          ++dword_8B41F8; /*0x649eae*/
          unk_8B4200 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x649eb7*/
          v15 = &g_NetworkPacketIndex[111 * g_NetworkEventIndex]; /*0x649ec5*/
          v16 = *v15; /*0x649ecc*/
          qmemcpy((void *)(a2 + v9), v15, 0x6Cu); /*0x649ed3*/
          v15 += 108; /*0x649ed3*/
          v17 = a2 + v9 + 108; /*0x649ed3*/
          *(_WORD *)v17 = *(_WORD *)v15; /*0x649ed5*/
          *(_BYTE *)(v17 + 2) = v15[2]; /*0x649ed9*/
          if ( v16 == 31 ) /*0x649eda*/
          {
            v18 = v9 + 111; /*0x649ee1*/
            qmemcpy( /*0x649f00*/
              (void *)(a2 + v18),
              *(const void **)((char *)&dword_A802DB + 111 * g_NetworkEventIndex),
              *(int *)((char *)&dword_A802DF + 111 * g_NetworkEventIndex));
            v19 = g_NetworkEventIndex; /*0x649f09*/
            v9 = *(int *)((char *)&dword_A802DF + 111 * g_NetworkEventIndex) + v18; /*0x649f14*/
          }
          else
          {
            v19 = g_NetworkEventIndex; /*0x649f1d*/
            v9 += 111; /*0x649f22*/
          }
          ++v23; /*0x649f32*/
          if ( !Networking_LastEventIndex /*0x649f48*/
            || (v10 = (v19 + 1) & 0x7F,
                g_NetworkEventIndex = v10,
                --Networking_LastEventIndex,
                !Networking_LastEventIndex) )
          {
            a1 = v26; /*0x649f57*/
            break; /*0x649f57*/
          }
          a1 = v26; /*0x649f4a*/
          v8 = a4; /*0x649f4e*/
        }
      }
    }
    v22 -= v27; /*0x649f5b*/
    v20 = v27 + v25; /*0x649f6d*/
    v25 += v27; /*0x649f71*/
    if ( v27 ) /*0x649f75*/
    {
      Debug::Log(); /*0x649f84*/
      v24 = 1; /*0x649f8c*/
    }
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)a1 + 8))(a1, a2, v9, v24, -1); /*0x649fa1*/
    ++dword_B0487C; /*0x649fab*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x649fb5*/
    v6 = Networking_LastEventIndex; /*0x649fb8*/
    if ( !Networking_LastEventIndex || Networking_LastEventIndex > v28 ) /*0x649fc6*/
      break; /*0x649fc6*/
    if ( !v22 ) /*0x649fce*/
    {
      v20 = v25; /*0x649fd4*/
      break; /*0x649fd4*/
    }
  }
  if ( v20 ) /*0x649fda*/
    Debug::Log(); /*0x649fe8*/
  return v20; /*0x649ff2*/
}


// ==== 0x0064A000  SendNetworkFrameSync  this=-  sig=csp ====
int __fastcall Network_SendFrameSync(int *a1, __int16 a2)
{
  char v3; // dl
  int v4; // edx
  _BYTE v6[108]; // [esp+Ch] [ebp-70h] BYREF
  __int16 v7; // [esp+78h] [ebp-4h]
  char v8; // [esp+7Ah] [ebp-2h]

  memset(v6, 0, sizeof(v6)); /*0x64a015*/
  v7 = 0; /*0x64a017*/
  v8 = 0; /*0x64a019*/
  v6[0] = 25; /*0x64a01f*/
  if ( MEMORY[0xA8B24C] == 2 ) /*0x64a027*/
    *(_DWORD *)&v6[3] = MEMORY[0xA8B554] /*0x64a04a*/
                      * (((unsigned int)MEMORY[0xA8ED84] + (int)MEMORY[0xA8B550] + MEMORY[0xA8B554] - 1)
                       / MEMORY[0xA8B554]);
  else
    *(_DWORD *)&v6[3] = (char *)MEMORY[0xA8ED84] + (_DWORD)MEMORY[0xA8B550]; /*0x64a05f*/
  v3 = *((_BYTE *)HouseClass_Player + 48); /*0x64a06e*/
  *(_DWORD *)&v6[7] = MEMORY[0xA8E7A8]; /*0x64a076*/
  v6[2] = v3; /*0x64a07a*/
  v4 = *a1; /*0x64a07e*/
  v6[13] = (_BYTE)MEMORY[0xA8B550]; /*0x64a084*/
  *(_WORD *)&v6[11] = a2; /*0x64a08b*/
  (*(void (__thiscall **)(int *, _BYTE *, int, _DWORD, int))(v4 + 8))(a1, v6, 14, 0, -1); /*0x64a090*/
  ((void (*)(const char *, ...))Debug::Log)(MEMORY[0x8377DC]); /*0x64a098*/
  return ++dword_B0487C; /*0x64a0a6*/
}


// ==== 0x0064A0C0  ProcessNetworkFrameSync  this=-  sig=csp ====
int __fastcall Network_ProcessFrameSync(int a1, int a2, int a3, unsigned int a4, int a5, _DWORD *a6)
{
  int v6; // edi
  int v7; // ebx
  int v8; // esi
  char v9; // al
  int v10; // esi
  bool v11; // cc
  char *v12; // ebx
  int v13; // ebp
  int v14; // eax
  int v15; // ecx
  int *v16; // esi
  char *v17; // eax
  int v18; // eax
  char *Class; // eax
  int v20; // eax
  unsigned int v21; // ecx
  char *v22; // eax
  _DWORD *v24; // ebp
  int v25; // eax
  int v26; // ebx
  int v27; // eax
  char v28; // al
  _BYTE *v29; // ebp
  void *v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned __int16 v33; // si
  unsigned int v34; // [esp+10h] [ebp-88h]
  unsigned int v35; // [esp+10h] [ebp-88h]
  int v37; // [esp+14h] [ebp-84h]
  int v38; // [esp+18h] [ebp-80h]
  _DWORD *v39; // [esp+18h] [ebp-80h]
  int v41; // [esp+20h] [ebp-78h]
  int v42; // [esp+24h] [ebp-74h]
  char v43[112]; // [esp+28h] [ebp-70h] BYREF

  v6 = a2; /*0x64a0cc*/
  v7 = 0; /*0x64a0d5*/
  v41 = 0; /*0x64a0e0*/
  v8 = (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 24))(a3); /*0x64a0e7*/
  if ( MEMORY[0xA8DBA0] ) /*0x64a0f0*/
  {
    v9 = *(_BYTE *)v6; /*0x64a0f6*/
    if ( *(_BYTE *)v6 == 37 || v9 == 38 ) /*0x64a0fe*/
    {
      v10 = *(char *)(v6 + 2); /*0x64a104*/
      v42 = v10; /*0x64a10a*/
      v34 = 0; /*0x64a10e*/
      if ( v9 == 38 || v9 == 37 ) /*0x64a11d*/
        Debug::Log(); /*0x64a124*/
      v11 = v10 <= 0; /*0x64a12c*/
      if ( !v10 ) /*0x64a12e*/
      {
        Debug::Log(); /*0x64a135*/
        v11 = 1; /*0x64a13d*/
      }
      if ( !v11 ) /*0x64a13f*/
      {
        v12 = (char *)(v6 + 7); /*0x64a145*/
        v38 = v10; /*0x64a148*/
        v13 = v6 + 7; /*0x64a14c*/
        do /*0x64a372*/
        {
          if ( *(_BYTE *)v6 == 37 ) /*0x64a151*/
          {
            v14 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 24))(a1, *(char *)(v13 + 11)); /*0x64a162*/
            if ( v14 != -1 ) /*0x64a168*/
            {
              v15 = *(_DWORD *)v13 - *(unsigned __int8 *)(v13 + 10); /*0x64a17d*/
              v16 = (int *)(a5 + 24 * v14); /*0x64a182*/
              if ( *v16 >= v15 ) /*0x64a187*/
              {
                if ( Network::GetClass(MEMORY[0xA8E9C0], *(char *)(v13 + 11)) ) /*0x64a1fd*/
                {
                  Class = (char *)Network::GetClass(MEMORY[0xA8E9C0], *(char *)(v13 + 11)); /*0x64a213*/
                  ToWideStringChar(Class); /*0x64a21a*/
                  Debug::Log(); /*0x64a225*/
                }
              }
              else
              {
                *v16 = v15; /*0x64a189*/
                Network_Process_652110(a5, v14); /*0x64a194*/
                if ( Network::GetClass(MEMORY[0xA8E9C0], *(char *)(v13 + 11)) ) /*0x64a1a3*/
                {
                  v17 = (char *)Network::GetClass(MEMORY[0xA8E9C0], *(char *)(v13 + 11)); /*0x64a1b9*/
                  ToWideStringChar(v17); /*0x64a1c0*/
                  Debug::Log(); /*0x64a1cb*/
                }
                v18 = *(unsigned __int16 *)(v13 + 8); /*0x64a1d8*/
                if ( v16[1] < (unsigned int)(unsigned __int16)v18 ) /*0x64a1de*/
                {
                  v16[1] = v18; /*0x64a1e6*/
                  Debug::Log(); /*0x64a1e9*/
                }
              }
              if ( (*(_BYTE *)(v13 + 12) & 1) == 0 ) /*0x64a231*/
                v16[3] = Timer::GetTicks() - *a6; /*0x64a24f*/
            }
          }
          else if ( *v12 == *((_DWORD *)HouseClass_Player + 12) ) /*0x64a263*/
          {
            MEMORY[0xA8E2D4] = *(_DWORD *)(v12 + 2); /*0x64a268*/
            Debug::Log(); /*0x64a289*/
          }
          else
          {
            v20 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 24))(a1, *v12); /*0x64a29d*/
            if ( v20 != -1 ) /*0x64a2a3*/
            {
              v21 = *(_DWORD *)(v12 + 2); /*0x64a2b0*/
              *(_DWORD *)(a5 + 24 * v20 + 16) = v21; /*0x64a2b6*/
              MEMORY[0xAC5210][v20] = v21; /*0x64a2ba*/
              if ( v34 <= v21 ) /*0x64a2c5*/
                v34 = v21; /*0x64a2c7*/
              if ( v12[1] ) /*0x64a2cb*/
              {
                if ( SessionClass::IsValidHouse((int)MEMORY[0xA8B238], 0) ) /*0x64a2dd*/
                {
                  if ( MEMORY[0xA8E2CC] != *v12 ) /*0x64a2ef*/
                  {
                    v22 = EventClass::Add2(v43, *((_DWORD *)HouseClass_Player + 12), 0x28u, *v12); /*0x64a301*/
                    if ( Networking_LastEventIndex < 128 ) /*0x64a310*/
                    {
                      qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v22, 0x6Fu); /*0x64a32c*/
                      v6 = a2; /*0x64a33d*/
                      g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x64a341*/
                      Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x64a358*/
                      ++Networking_LastEventIndex; /*0x64a35e*/
                    }
                  }
                }
              }
            }
          }
          v13 += 13; /*0x64a367*/
          v12 += 8; /*0x64a36a*/
          --v38; /*0x64a36e*/
        }
        while ( v38 ); /*0x64a372*/
        v10 = v42; /*0x64a378*/
        v7 = v34; /*0x64a37c*/
      }
      if ( v10 && v7 ) /*0x64a38a*/
      {
        MEMORY[0xA8E2C4] = v7; /*0x64a396*/
        return 0; /*0x64a3a4*/
      }
      return v41; /*0x64a610*/
    }
  }
  v24 = (_DWORD *)(a5 + 24 * v8); /*0x64a3b9*/
  v39 = v24; /*0x64a3be*/
  if ( *v24 < *(_DWORD *)(v6 + 3) - *(unsigned __int8 *)(v6 + 13) ) /*0x64a3c7*/
  {
    if ( *v24 == -1 ) /*0x64a3cc*/
    {
      v41 = 1; /*0x64a3d3*/
      Debug::Log(); /*0x64a3db*/
    }
    *v24 = *(_DWORD *)(v6 + 3) - *(unsigned __int8 *)(v6 + 13); /*0x64a3ef*/
    Network_Process_652110(a5, v8); /*0x64a3f4*/
  }
  v25 = *(unsigned __int16 *)(v6 + 11); /*0x64a3fe*/
  if ( (unsigned int)(unsigned __int16)v25 > v24[1] ) /*0x64a404*/
    v24[1] = v25; /*0x64a406*/
  if ( *(_BYTE *)v6 == 25 ) /*0x64a40c*/
  {
    if ( MEMORY[0xA8B238][0] == 4 || MEMORY[0xA8B238][0] == 3 ) /*0x64a5b0*/
    {
      Network::GetClass(MEMORY[0xA8E9C0], a3); /*0x64a5ca*/
      Debug::Log(); /*0x64a5d5*/
    }
    if ( *(_DWORD *)(v6 + 7) != MEMORY[0xA8E7A8] ) /*0x64a5e8*/
      return 2; /*0x64a5f9*/
    v24[3] = Timer::GetTicks() - *a6; /*0x64a60d*/
    return v41; /*0x64a60d*/
  }
  v26 = 0; /*0x64a417*/
  if ( MEMORY[0xA8B24C] ) /*0x64a41b*/
  {
    v27 = DecodeNetworkEvents((char *)v6, a4); /*0x64a426*/
    goto LABEL_59; /*0x64a42b*/
  }
  v37 = 0; /*0x64a437*/
  v35 = a4; /*0x64a43e*/
  if ( a4 < 0x6F ) /*0x64a442*/
  {
LABEL_58:
    v27 = v37; /*0x64a539*/
    goto LABEL_59; /*0x64a539*/
  }
  while ( 1 ) /*0x64a448*/
  {
    v28 = *(_BYTE *)(v26 + v6); /*0x64a448*/
    v29 = (_BYTE *)(v26 + v6); /*0x64a44b*/
    if ( v28 != 25 ) /*0x64a450*/
      break; /*0x64a450*/
LABEL_52:
    v26 += 111; /*0x64a502*/
    v35 -= 111; /*0x64a50f*/
    if ( v35 < 0x6F ) /*0x64a513*/
    {
      v24 = v39; /*0x64a535*/
      goto LABEL_58; /*0x64a535*/
    }
  }
  v29[1] &= ~1u; /*0x64a45e*/
  if ( v28 == 31 ) /*0x64a461*/
  {
    v30 = __2_YAPAXI_Z(*(_DWORD *)(v29 + 11)); /*0x64a467*/
    v31 = *(_DWORD *)(v29 + 11); /*0x64a46c*/
    *(_DWORD *)(v29 + 7) = v30; /*0x64a472*/
    qmemcpy(v30, (const void *)(v6 + 111), v31); /*0x64a47f*/
    v32 = *(_DWORD *)(v29 + 11); /*0x64a488*/
    v6 = a2; /*0x64a48f*/
    v26 += v32; /*0x64a493*/
    v35 -= v32; /*0x64a497*/
  }
  if ( dword_8B41F8 < 0x4000 ) /*0x64a4a5*/
  {
    qmemcpy(&unk_8B4204[111 * unk_8B4200], v29, 0x6Fu); /*0x64a4c0*/
    v6 = a2; /*0x64a4d1*/
    dword_A70204[unk_8B4200] = timeGetTime(); /*0x64a4d5*/
    unk_8B4200 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64a4ee*/
    ++dword_8B41F8; /*0x64a4f8*/
    ++v37; /*0x64a4fe*/
    goto LABEL_52; /*0x64a4fe*/
  }
  if ( *v29 == 31 ) /*0x64a51e*/
    __3_YAXPAX_Z(*(void **)(v29 + 7)); /*0x64a524*/
  v24 = v39; /*0x64a52c*/
  v27 = -1; /*0x64a530*/
LABEL_59:
  v33 = v27; /*0x64a53d*/
  if ( v27 == -1 ) /*0x64a542*/
  {
    Debug::Log(); /*0x64a549*/
    return 3; /*0x64a551*/
  }
  else
  {
    if ( *(_BYTE *)v6 == 28 && v27 > 0 ) /*0x64a56a*/
      v33 = v27 - 1; /*0x64a56c*/
    Debug::Log(); /*0x64a57c*/
    v24[2] += v33; /*0x64a590*/
    return v41; /*0x64a593*/
  }
}


// ==== 0x0064A630  ProcessNetworkMessage  this=-  sig=ida-proto ====
int __fastcall Network_ProcessMessage(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  char *v5; // ebp
  wchar_t *v6; // edi
  int v7; // eax
  char *v8; // ebx
  int v9; // esi
  int v10; // eax
  int v11; // eax

  v2 = a1; /*0x64a631*/
  v3 = *(_DWORD *)a1; /*0x64a635*/
  if ( a2 ) /*0x64a638*/
  {
    if ( v3 == 102 ) /*0x64a63d*/
    {
LABEL_7:
      HandlePlayerDisconnection(*(char *)(a1 + 29), 0); /*0x64a650*/
      return 5; /*0x64a662*/
    }
  }
  else if ( v3 == 102 || v3 == 105 || v3 == 106 ) /*0x64a64e*/
  {
    goto LABEL_7; /*0x64a64e*/
  }
  if ( v3 == 104 ) /*0x64a666*/
  {
    v5 = CharToWideString((_BYTE *)(a1 + 4)); /*0x64a678*/
    v6 = (wchar_t *)(v2 + 25); /*0x64a67f*/
    v7 = Math::RoundToInt(*(double *)&MEMORY[0x8871E0][1].__pad_A0 * 900.0); /*0x64a68e*/
    if ( !((int (__stdcall *)(wchar_t *, int, wchar_t *, int))ScrollingText::AddLine)( /*0x64a6a1*/
            (wchar_t *)v5,
            *(unsigned __int8 *)(v2 + 24),
            (wchar_t *)(v2 + 25),
            v7) )
    {
      v8 = CharToWideString((_BYTE *)(v2 + 4)); /*0x64a6b1*/
      v9 = *(unsigned __int8 *)(v2 + 24); /*0x64a6cb*/
      v10 = Math::RoundToInt(*(double *)&MEMORY[0x8871E0][1].__pad_A0 * 900.0); /*0x64a6cd*/
      MessageListClass::AddMessage(MEMORY[0xA8BC60], (wchar_t *)v8, v9, v6, v9, 16454, v10, 0); /*0x64a6e1*/
      PlayVocClass(MEMORY[0x8871E0]->MovieOn, 0x2000, 1.0, 0); /*0x64a6fe*/
    }
    if ( wcslen(v6) ) /*0x64a704*/
      wcscpy((wchar_t *)&MEMORY[0xA8D110] + 1, v6); /*0x64a718*/
    MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x64a727*/
    return 4; /*0x64a727*/
  }
  if ( v3 == 120 ) /*0x64a737*/
  {
    if ( (_BYTE)MEMORY[0xA8D110] && MEMORY[0xA8B238][0] == 3 || BYTE1(MEMORY[0xA8D110]) && MEMORY[0xA8B238][0] == 4 ) /*0x64a759*/
    {
      LOBYTE(a1) = *(_BYTE *)(a1 + 25); /*0x64a75b*/
      ((void (__thiscall *)(int))PlayTauntClass)(a1); /*0x64a75e*/
      return 4; /*0x64a76a*/
    }
    return 4; /*0x64a733*/
  }
  if ( v3 >= 100 && v3 < 109 /*0x64a790*/
    || v3 >= 110 && v3 <= 116
    || MEMORY[0xA8B54C] == 1
    || !*(_BYTE *)a1
    || *(_BYTE *)a1 >= 0x2Fu )
  {
    return 4; /*0x64a790*/
  }
  v11 = -(*((_DWORD *)HouseClass_Player + 12) != *(char *)(a1 + 2)); /*0x64a7a4*/
  LOBYTE(v11) = v11 & 0xFA; /*0x64a7a7*/
  return v11 + 6; /*0x64a660*/
}


// ==== 0x0064A7B0  ObjectClass::RenderPlayerLatencyBars  this=ObjectClass  sig=csp ====
int __thiscall RenderPlayerLatencyBars(HWND this)
{
  int result; // eax
  int v2; // ebx
  HWND DlgItem; // eax
  int v4; // edi
  int v5; // eax
  unsigned int v6; // ebp
  int v7; // esi
  DWORD v8; // edx
  int v9; // ecx
  int v10; // ebp
  signed int v11; // edi
  int v12; // edi
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int i; // [esp+20h] [ebp-6Ch]
  int v17; // [esp+24h] [ebp-68h]
  LONG left; // [esp+2Ch] [ebp-60h]
  LONG top; // [esp+30h] [ebp-5Ch]
  int v21; // [esp+38h] [ebp-54h]
  _DWORD v22[4]; // [esp+3Ch] [ebp-50h] BYREF
  struct tagRECT Rect; // [esp+4Ch] [ebp-40h] BYREF
  _DWORD v24[4]; // [esp+5Ch] [ebp-30h] BYREF
  char v25[16]; // [esp+6Ch] [ebp-20h] BYREF
  char v26[16]; // [esp+7Ch] [ebp-10h] BYREF

  result = MEMORY[0xA8DA84]; /*0x64a7b3*/
  v2 = 0; /*0x64a7b9*/
  for ( i = 0; v2 < MEMORY[0xA8DA84]; i = v2 )
  {
    DlgItem = GetDlgItem(this, MEMORY[0x837320][v2]); /*0x64a7df*/
    ScreenDialogToClient(DlgItem, &Rect); /*0x64a7e9*/
    v4 = Rect.right - Rect.left; /*0x64a7fc*/
    left = Rect.left; /*0x64a802*/
    v24[0] = Rect.left; /*0x64a806*/
    top = Rect.top; /*0x64a812*/
    v21 = Rect.bottom - Rect.top; /*0x64a816*/
    v24[1] = Rect.top; /*0x64a81a*/
    v24[2] = Rect.right - Rect.left; /*0x64a824*/
    v24[3] = Rect.bottom - Rect.top; /*0x64a828*/
    if ( MEMORY[0xA8B238][0] == 1 || MEMORY[0xA8B238][0] == 2 ) /*0x64a83a*/
    {
      v17 = 0; /*0x64a84d*/
      v5 = 0; /*0x64a855*/
    }
    else
    {
      v5 = IPXManagerClass::send(*(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v2) + 111)); /*0x64a842*/
      v17 = v5; /*0x64a847*/
    }
    if ( v2 ) /*0x64a85b*/
      v6 = dword_AFA418 - dword_AFA284[6 * v5]; /*0x64a86a*/
    else
      v6 = 0; /*0x64a85d*/
    v7 = 200 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0]; /*0x64a8ac*/
    if ( v6 > 0xF0 ) /*0x64a8b4*/
    {
      v7 = (200 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0]) | (200 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]); /*0x64a8d1*/
      if ( v6 > 0x1E0 ) /*0x64a8d9*/
      {
        v7 = 200 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]; /*0x64a8f3*/
        v8 = (60 * timeGetTime() - 60 * dword_AFA28C[6 * v17]) / 0x3E8; /*0x64a924*/
        if ( v8 < 0x1A4 ) /*0x64a92d*/
        {
          v6 = v8; /*0x64a942*/
          v7 = 200 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]; /*0x64a948*/
        }
      }
      v2 = i; /*0x64a96e*/
    }
    v9 = 25 * v6; /*0x64a97b*/
    v10 = 6; /*0x64a97f*/
    v11 = ((int)(100 - 4 * v9 / 0x4B0u) <= 0 ? 0 : 100 - 4 * v9 / 0x4B0u) * v4;
    if ( v11 / 100 >= 6 ) /*0x64a9b4*/
      v10 = v11 / 100; /*0x64a9b6*/
    v12 = *(_DWORD *)MEMORY[0x887310]; /*0x64aa0b*/
    v13 = (*(int (__thiscall **)(int, char *, _DWORD *, int))(*(_DWORD *)MEMORY[0x887310] + 120))( /*0x64aa1a*/
            MEMORY[0x887310],
            v25,
            v24,
            ((unsigned __int8)MEMORY[0xA8EAE4] >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0])
          | ((unsigned __int8)MEMORY[0xA8EAE5] >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
          | (HIBYTE(MEMORY[0xA8EAE5]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]));
    (*(void (__thiscall **)(int, int))(v12 + 84))(MEMORY[0x887310], v13); /*0x64aa24*/
    v22[2] = v10 - 4; /*0x64aa45*/
    v22[1] = top + 2; /*0x64aa55*/
    v22[3] = v21 - 4; /*0x64aa59*/
    v22[0] = left + 2; /*0x64aa61*/
    v14 = *(_DWORD *)MEMORY[0x887310]; /*0x64aa65*/
    v15 = (*(int (__thiscall **)(int, char *, _DWORD *, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 120))( /*0x64aa6e*/
            MEMORY[0x887310],
            v26,
            v22,
            (unsigned __int16)v7);
    (*(void (__thiscall **)(int, int))(v14 + 16))(MEMORY[0x887310], v15); /*0x64aa78*/
    result = MEMORY[0xA8DA84]; /*0x64aa7b*/
    ++v2; /*0x64aa80*/
  }
  return result; /*0x64aa90*/
}


// ==== 0x0064AAA0  ObjectClass::method_64AAA0  this=ObjectClass  sig=csp ====
LRESULT __thiscall sub_64AAA0(HWND hWnd)
{
  LRESULT v2; // esi

  v2 = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x64aab7*/
  if ( v2 > 50 ) /*0x64aabc*/
  {
    SendMessageA(hWnd, 0x182u, 0, 0); /*0x64aac8*/
    --v2; /*0x64aaca*/
  }
  return SendMessageA(hWnd, 0x197u, v2 - 1, 0); /*0x64aad7*/
}


// ==== 0x0064AAE0  KickNetworkPlayer  this=-  sig=csp ====
void __fastcall KickNetworkPlayer(HWND hDlg, LPARAM lParam)
{
  HWND DlgItem; // eax
  HWND v5; // esi
  wchar_t *StringCSF; // eax
  void (__stdcall *v7)(HWND, UINT, WPARAM, LPARAM); // ebx
  LRESULT v8; // edi
  wchar_t *v9; // eax
  char *v10; // eax
  int v11; // eax
  int v12; // esi
  HWND v13; // [esp-4h] [ebp-1D8h]
  int v14; // [esp+Ch] [ebp-1C8h] BYREF
  char Destination[43]; // [esp+10h] [ebp-1C4h] BYREF
  int i; // [esp+3Bh] [ebp-199h]
  int v17; // [esp+3Fh] [ebp-195h]

  if ( lParam >= 0 && lParam < MEMORY[0xA8DA84] ) /*0x64aafb*/
  {
    Debug::Log(); /*0x64ab16*/
    DlgItem = GetDlgItem(hDlg, 1617); /*0x64ab24*/
    v5 = DlgItem; /*0x64ab2c*/
    if ( !lParam ) /*0x64ab2e*/
    {
      v13 = DlgItem; /*0x64ab30*/
      StringCSF = GetStringCSF(MEMORY[0x8379E8], 0, MEMORY[0x8374A0], 3375); /*0x64ab42*/
      DrawDialogText(-1, StringCSF, v13); /*0x64ab4c*/
      v7 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x64ab51*/
      v8 = SendMessageA(v5, 0x18Bu, 0, 0); /*0x64ab61*/
      if ( v8 > 50 ) /*0x64ab66*/
        goto LABEL_9; /*0x64ab66*/
      goto LABEL_10; /*0x64ab66*/
    }
    if ( MEMORY[0xA8B238][0] == 4 && *(_DWORD *)dword_B779C4 ) /*0x64ab7a*/
    {
      v9 = GetStringCSF(MEMORY[0x8379D8], 0, MEMORY[0x8374A0], 3385); /*0x64ab8e*/
      DrawDialogText(-1, v9, v5); /*0x64ab98*/
      v7 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x64ab9d*/
      v8 = SendMessageA(v5, 0x18Bu, 0, 0); /*0x64abaf*/
      if ( v8 > 50 ) /*0x64abb4*/
      {
LABEL_9:
        v7(v5, 0x182u, 0, 0); /*0x64abb6*/
        --v8; /*0x64abc2*/
      }
LABEL_10:
      v7(v5, 0x197u, v8 - 1, 0); /*0x64abc3*/
      return; /*0x64abd8*/
    }
    v14 = 28; /*0x64abdf*/
    v10 = ToWideStringChar(*(char **)MEMORY[0xA8DA78]); /*0x64abeb*/
    strncpy(Destination, v10, 0x14u); /*0x64abf6*/
    v11 = MEMORY[0xA8DA78]; /*0x64abfb*/
    v12 = 1; /*0x64ac00*/
    v17 = *(_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 111); /*0x64ac0d*/
    for ( i = *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * lParam) + 111); v12 < MEMORY[0xA8DA84]; v11 = MEMORY[0xA8DA78] ) /*0x64ac23*/
    {
      Debug::Log(); /*0x64ac2e*/
      Network::SendMessage( /*0x64ac58*/
        (int)MEMORY[0xA8E9C0],
        (int)&v14,
        455,
        1,
        *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v12++) + 40,
        0,
        0);
    }
    Network_Process_64AD10(*(_DWORD *)(*(_DWORD *)v11 + 111), *(_DWORD *)(*(_DWORD *)(v11 + 4 * lParam) + 111)); /*0x64ac77*/
  }
}


// ==== 0x0064AC90  Network::syncGameState  this=Network  sig=csp ====
int __thiscall sub_64AC90(_BYTE *this)
{
  void *v2; // ebx
  int result; // eax

  v2 = __2_YAPAXI_Z(0x1C7u); /*0x64ac9f*/
  qmemcpy(v2, this, 0x1C4u); /*0x64acab*/
  this += 452; /*0x64acab*/
  *((_WORD *)v2 + 226) = *(_WORD *)this; /*0x64acad*/
  *((_BYTE *)v2 + 454) = this->q002; /*0x64acaf*/
  result = MEMORY[0xA8BB30]; /*0x64acb0*/
  if ( MEMORY[0xA8BB38] < MEMORY[0xA8BB30] /*0x64aceb*/
    || (MEMORY[0xA8BB35] || !MEMORY[0xA8BB30])
    && MEMORY[0xA8BB3C] > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8BB28] + 8))(
                   &MEMORY[0xA8BB28],
                   MEMORY[0xA8BB30] + MEMORY[0xA8BB3C],
                   0),
        (_BYTE)result) )
  {
    result = MEMORY[0xA8BB38]++; /*0x64acf3*/
    *(_DWORD *)(MEMORY[0xA8BB2C] + 4 * result) = v2; /*0x64ad02*/
  }
  return result; /*0x64ad05*/
}


// ==== 0x0064AD10  Network_Process_64AD10  this=-  sig=ida-proto ====
LRESULT __fastcall sub_64AD10(int a1, int a2)
{
  LRESULT v3; // edi
  LRESULT result; // eax
  int *v5; // edx
  const wchar_t *Class; // edi
  wchar_t *StringCSF; // eax
  HWND Current; // eax
  HWND DlgItem; // esi
  LRESULT v10; // edi
  int v11; // [esp-4h] [ebp-210h]
  wchar_t Buffer[256]; // [esp+Ch] [ebp-200h] BYREF

  v3 = 0; /*0x64ad1b*/
  result = MEMORY[0xA8BB40][a2]; /*0x64ad1d*/
  if ( result <= 0 ) /*0x64ad26*/
  {
LABEL_5:
    MEMORY[0xA8BB60][8 * a2 + result] = a1; /*0x64ad41*/
    ++MEMORY[0xA8BB40][a2]; /*0x64ad53*/
    result = MEMORY[0xA8B238][0]; /*0x64ad5a*/
    if ( MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4 ) /*0x64ad67*/
    {
      Class = (const wchar_t *)Network::GetClass(MEMORY[0xA8E9C0], a1); /*0x64ad78*/
      if ( !Class ) /*0x64ad7c*/
        Class = *(const wchar_t **)MEMORY[0xA8DA78]; /*0x64ad84*/
      Network::GetClass(MEMORY[0xA8E9C0], a2); /*0x64ad8c*/
      Debug::Log(); /*0x64ad98*/
      v11 = Network::GetClass(MEMORY[0xA8E9C0], a2); /*0x64adb2*/
      StringCSF = GetStringCSF(MEMORY[0x837A30], 0, MEMORY[0x8374A0], 3485); /*0x64adbe*/
      swprintf(Buffer, (const size_t)StringCSF, Class, v11); /*0x64adc9*/
      Current = Dialog::GetCurrent(); /*0x64add1*/
      DlgItem = GetDlgItem(Current, 1617); /*0x64ade2*/
      DrawDialogText(-1, Buffer, DlgItem); /*0x64adec*/
      v10 = SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x64ae03*/
      if ( v10 > 50 ) /*0x64ae08*/
      {
        SendMessageA(DlgItem, 0x182u, 0, 0); /*0x64ae14*/
        --v10; /*0x64ae16*/
      }
      return SendMessageA(DlgItem, 0x197u, v10 - 1, 0); /*0x64ae21*/
    }
  }
  else
  {
    v5 = &MEMORY[0xA8BB60][8 * a2]; /*0x64ad2b*/
    while ( *v5 != a1 ) /*0x64ad33*/
    {
      ++v3; /*0x64ad39*/
      ++v5; /*0x64ad3a*/
      if ( v3 >= result ) /*0x64ad3f*/
        goto LABEL_5; /*0x64ad3f*/
    }
  }
  return result; /*0x64ae23*/
}


// ==== 0x0064AE30  sub_64AE30  this=-  sig=ida-proto ====
int sub_64AE30()
{
  dword_B04884 = 0; /*0x64ae32*/
  dword_B04888 = 0; /*0x64ae37*/
  byte_B0488C = 0; /*0x64ae3c*/
  byte_B0488D = 0; /*0x64ae41*/
  byte_B04878 = 0; /*0x64ae46*/
  return 0; /*0x64ae4b*/
}


// ==== 0x0064AE50  NetworkScore::DlgProc  this=NetworkScore  sig=csp ====
INT_PTR __stdcall NetworkScore::DlgProc(HWND hWnd, UINT a2, HWND a3, char *a4)
{
  HWND v4; // ebp
  _DWORD *WindowLongA; // esi
  INT_PTR result; // eax
  int v7; // eax
  int i; // esi
  HWND DlgItem; // eax
  HWND v10; // eax
  int v11; // esi
  HWND v12; // ebp

  v4 = hWnd; /*0x64ae51*/
  WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x64ae60*/
  if ( a2 > 0x111 ) /*0x64ae6b*/
  {
    if ( a2 > 0x138 ) /*0x64afc1*/
    {
      if ( a2 == 1175 ) /*0x64b0e3*/
      {
        DialogQueue::PushEntry(v4); /*0x64b0ec*/
        for ( i = 0; i < 32; i += 4 ) /*0x64b0fd*/
        {
          DlgItem = GetDlgItem(v4, *(_DWORD *)&stru_830620.__pad_579C[i + 5444]); /*0x64b107*/
          EnableWindow(DlgItem, 0); /*0x64b10c*/
          v10 = GetDlgItem(v4, *(_DWORD *)&stru_830620.__pad_579C[i + 5476]); /*0x64b116*/
          EnableWindow(v10, 0); /*0x64b11b*/
        }
        v11 = 0; /*0x64b125*/
        while ( 1 ) /*0x64b13f*/
        {
          v12 = GetDlgItem(v4, *(_DWORD *)&stru_830620.__pad_579C[4 * v11 + 5444]); /*0x64b13f*/
          a3 = GetDlgItem(hWnd, *(_DWORD *)&stru_830620.__pad_579C[4 * v11 + 5476]); /*0x64b149*/
          if ( v11 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x64b154*/
          {
            DestroyWindow(v12); /*0x64b185*/
            DestroyWindow(a3); /*0x64b18c*/
          }
          else
          {
            SendMessageA(v12, 0x4B2u, 0, *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v11)); /*0x64b168*/
            EnableWindow(v12, 1); /*0x64b171*/
            EnableWindow(a3, 1); /*0x64b17a*/
          }
          if ( ++v11 >= 8 ) /*0x64b192*/
            break; /*0x64b192*/
          v4 = hWnd; /*0x64b129*/
        }
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x64b19d*/
        {
          dword_B77780 = 0; /*0x64b1ae*/
          dword_B77CE0 = 0; /*0x64b1b3*/
          byte_B0488C = 0; /*0x64b1b8*/
          byte_B0488D = 0; /*0x64b1bd*/
          dword_B04890 = 0; /*0x64b1c2*/
          byte_B04878 = 0; /*0x64b1c7*/
          SetTimer(hWnd, 1u, 0x3E8u, 0); /*0x64b1cc*/
        }
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x64b1da*/
      }
      return 0; /*0x64b1df*/
    }
    if ( a2 >= 0x132 ) /*0x64afcc*/
      return (INT_PTR)GetStockObject(4); /*0x64b0db*/
    if ( a2 != 275 /*0x64affc*/
      || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 4
      || a3 != (HWND)1
      || !*(&g_MatrixTransformState + 2264) )
    {
      return 0; /*0x64affc*/
    }
    if ( (int)dword_B77780 < 5 ) /*0x64b00f*/
    {
      (*(void (__stdcall **)(_DWORD, char *, int, HWND *))((*(&g_MatrixTransformState + 2264))->X + 24))( /*0x64b023*/
        *(&g_MatrixTransformState + 2264),
        byte_B77930,
        1000,
        &hWnd);
      dword_B77780 = (ObjectClass *)((char *)dword_B77780 + 1); /*0x64b026*/
    }
    v7 = ++dword_B04890; /*0x64b037*/
    if ( !dword_B779C4 ) /*0x64b03f*/
      goto LABEL_45; /*0x64b03f*/
    if ( byte_B0488C || v7 <= 5 || dword_B77CE0 ) /*0x64b057*/
    {
      if ( !byte_B0488D && v7 > 10 && !dword_B77CE0 ) /*0x64b07e*/
      {
        byte_B0488D = 1; /*0x64b085*/
        ++dword_B04888; /*0x64b08d*/
      }
    }
    else
    {
      byte_B0488C = 1; /*0x64b05e*/
      ++dword_B04884; /*0x64b066*/
    }
    if ( dword_B04884 <= 5 && dword_B04888 <= 2 ) /*0x64b0a1*/
    {
LABEL_45:
      SetTimer(v4, 1u, 0x3E8u, 0); /*0x64b0c2*/
      return 0; /*0x64b0cd*/
    }
    byte_B04878 = 1; /*0x64b0a3*/
LABEL_44:
    *WindowLongA = 2; /*0x64b0aa*/
    return 0; /*0x64b0b5*/
  }
  if ( a2 != 273 ) /*0x64ae71*/
  {
    switch ( a2 ) /*0x64ae87*/
    {
      case 2u: /*0x64ae87*/
        DialogQueue::RemoveEntry(v4); /*0x64ae90*/
        return 0; /*0x64ae9a*/
      case 0xFu: /*0x64ae87*/
        Dialog::DrawBackground(v4); /*0x64aeb3*/
        RenderPlayerLatencyBars(v4); /*0x64aeba*/
        ValidateRect(v4, 0); /*0x64aec2*/
        return 0; /*0x64aecd*/
      case 0x14u: /*0x64ae87*/
        goto LABEL_6;
      case 0x2Bu: /*0x64ae87*/
        Dialog::Resize(a4); /*0x64aea1*/
LABEL_6:
        result = 1; /*0x64aea6*/
        break; /*0x64aeae*/
      default:
        return 0;
    }
    return result; /*0x64aeae*/
  }
  if ( (unsigned __int16)a3 <= 0x643u ) /*0x64aede*/
  {
    if ( (unsigned __int16)a3 == 1603 ) /*0x64aee0*/
    {
      KickNetworkPlayer(v4, 3); /*0x64af4a*/
      return 0; /*0x64af54*/
    }
    if ( (unsigned __int16)a3 > 0x641u ) /*0x64aee7*/
    {
      if ( (unsigned __int16)a3 == 1602 ) /*0x64af29*/
      {
        KickNetworkPlayer(v4, 1); /*0x64af36*/
        return 0; /*0x64af40*/
      }
      return 0; /*0x64af29*/
    }
    if ( (unsigned __int16)a3 == 1601 ) /*0x64aee9*/
    {
      KickNetworkPlayer(v4, 2); /*0x64af17*/
      return 0; /*0x64af21*/
    }
    if ( (unsigned __int16)a3 != 2 ) /*0x64aeee*/
    {
      if ( (unsigned __int16)a3 == 1600 ) /*0x64aef9*/
      {
        KickNetworkPlayer(v4, 0); /*0x64af03*/
        return 0; /*0x64af0d*/
      }
      return 0; /*0x64aef9*/
    }
    goto LABEL_44; /*0x64aeee*/
  }
  switch ( (__int16)a3 ) /*0x64af65*/
  {
    case 1604: /*0x64af65*/
      KickNetworkPlayer(v4, 4); /*0x64af73*/
      result = 0; /*0x64af7a*/
      break; /*0x64af7d*/
    case 1605: /*0x64af65*/
      KickNetworkPlayer(v4, 5); /*0x64af87*/
      result = 0; /*0x64af8e*/
      break; /*0x64af91*/
    case 1606: /*0x64af65*/
      KickNetworkPlayer(v4, 6); /*0x64af9b*/
      result = 0; /*0x64afa2*/
      break; /*0x64afa5*/
    case 1607: /*0x64af65*/
      KickNetworkPlayer(v4, 7); /*0x64afaf*/
      result = 0; /*0x64afb6*/
      break; /*0x64afb9*/
    default:
      return 0;
  }
  return result; /*0x64ae95*/
}


// ==== 0x0064B240  KickNetworkPlayerNow  this=-  sig=csp ====
void __fastcall Network_KickPlayerNow(int a1, int a2, int a3, unsigned __int8 a4)
{
  int v6; // edi
  int i; // ecx
  _BYTE *v8; // eax
  int v9; // eax
  int *v10; // ebx
  int v11; // ebp
  _DWORD *v12; // eax
  bool v13; // [esp+13h] [ebp-Dh]
  int v14; // [esp+14h] [ebp-Ch]
  _DWORD *v16; // [esp+24h] [ebp+4h]

  v13 = time(0) - dword_B0489C < 60; /*0x64b270*/
  dword_B0489C = time(0); /*0x64b27e*/
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 20))(a1, a2); /*0x64b292*/
  Debug::Log(); /*0x64b29f*/
  if ( v6 == -1 ) /*0x64b2aa*/
  {
    Debug::Log(); /*0x64b2b1*/
  }
  else
  {
    *(_BYTE *)(*((_DWORD *)HouseClass_Array + v6) + 520) = 1; /*0x64b2cc*/
    if ( Network::CountDisconnectedHouses(*((_DWORD *)HouseClass_Array + v6)) == 1 /*0x64b2f4*/
      && MEMORY[0xA8B238][0] == 4
      && !MEMORY[0xA8F900] )
    {
      Timer::UpdateDelta(); /*0x64b2f6*/
      MEMORY[0xB0BD78] = 1; /*0x64b2ff*/
      if ( !v13 ) /*0x64b307*/
        MEMORY[0xA8B8C1] = 1; /*0x64b309*/
      for ( i = 0; i < HouseClass_Count; ++i ) /*0x64b318*/
      {
        v8 = (_BYTE *)*((_DWORD *)HouseClass_Array + i); /*0x64b320*/
        if ( v8 && !v8[501] && v8[492] ) /*0x64b331*/
          v8[520] = 1; /*0x64b33b*/
      }
      ProcessGameResults(0); /*0x64b34d*/
    }
    if ( Network::CountDisconnectedHouses(*((_DWORD *)HouseClass_Array + v6)) > 1 && !v13 ) /*0x64b369*/
      *(_BYTE *)(*((_DWORD *)HouseClass_Array + v6) + 583) = 1; /*0x64b374*/
    v14 = a2; /*0x64b37f*/
    if ( a2 < (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) - 1 ) /*0x64b389*/
    {
      v9 = 4 * a2 + 11057984; /*0x64b394*/
      v10 = &MEMORY[0xA8BB60][8 * a2]; /*0x64b39e*/
      v11 = a3 + 24 * a2; /*0x64b3a4*/
      while ( 1 ) /*0x64b3b7*/
      {
        v12 = (_DWORD *)(v9 + 4); /*0x64b3b7*/
        qmemcpy((void *)v11, (const void *)(v11 + 24), 0x18u); /*0x64b3ba*/
        *(v12 - 1) = *v12; /*0x64b3c1*/
        v11 += 24; /*0x64b3cb*/
        qmemcpy(v10, v10 + 8, 0x20u); /*0x64b3ce*/
        v16 = v12; /*0x64b3d9*/
        ++v14; /*0x64b3df*/
        v10 += 8; /*0x64b3e3*/
        if ( v14 >= (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) - 1 ) /*0x64b3ec*/
          break; /*0x64b3ec*/
        v9 = (int)v16; /*0x64b3a9*/
      }
    }
    HandleNetworkPlayerDisconnect(v6, a4); /*0x64b3fe*/
  }
}


// ==== 0x0064B410  Network_Process_64B410  this=-  sig=csp ====
int __fastcall sub_64B410(int a1, int *a2)
{
  int *v2; // ebp
  int v4; // edi
  int v5; // ebx
  int v7; // [esp+8h] [ebp-8h]

  v2 = a2; /*0x64b419*/
  if ( MEMORY[0xA8B238][0] == 1 || MEMORY[0xA8B238][0] == 2 ) /*0x64b42a*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) ) /*0x64b491*/
    {
      ++MEMORY[0xA8DAB4]; /*0x64b498*/
      if ( !Network_Process_5F0120((int)v2) ) /*0x64b49e*/
      {
        --MEMORY[0xA8DAB4]; /*0x64b4ae*/
        return 0; /*0x64b4b9*/
      }
      --MEMORY[0xA8DAB4]; /*0x64b4bb*/
    }
    return 1; /*0x64b4bb*/
  }
  if ( MEMORY[0xA8B238][0] != 3 && MEMORY[0xA8B238][0] != 4 ) /*0x64b434*/
    return 1; /*0x64b4c1*/
  v4 = 0; /*0x64b43e*/
  v5 = 0x7FFFFFFF; /*0x64b442*/
  v7 = 0; /*0x64b447*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) > 0 ) /*0x64b450*/
  {
    do /*0x64b46c*/
    {
      if ( *v2 < v5 ) /*0x64b457*/
      {
        v5 = *v2; /*0x64b459*/
        v7 = v4; /*0x64b45b*/
      }
      ++v4; /*0x64b463*/
      v2 += 6; /*0x64b464*/
    }
    while ( v4 < (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) ); /*0x64b46c*/
    v2 = a2; /*0x64b46e*/
  }
  KickNetworkPlayerNow(a1, v7, (int)v2, 1u); /*0x64b47b*/
  return 1; /*0x64b487*/
}


// ==== 0x0064B4D0  DictionaryCompressLookup  this=-  sig=csp ====
char __fastcall Compress_DictionaryLookup(unsigned __int8 *a1, _DWORD *a2, _BYTE *a3, const void *a4, char a5)
{
  unsigned __int8 v5; // dl
  int v6; // ecx
  char *v7; // ebx
  int *v8; // eax
  int v9; // ebx
  int v10; // ebp
  int v11; // edi
  int *v12; // esi
  int v13; // ecx
  char result; // al
  char *v15; // ecx
  char v16; // [esp+10h] [ebp-14h]
  int v18; // [esp+18h] [ebp-Ch]
  unsigned __int8 v19; // [esp+1Ch] [ebp-8h]

  v5 = *a1; /*0x64b4d8*/
  v19 = *a1; /*0x64b4e4*/
  if ( *a1 > 1u ) /*0x64b4e8*/
  {
    v16 = 0; /*0x64b4ec*/
    v6 = v5; /*0x64b4f4*/
    v7 = (char *)&MEMORY[0xAC5235]; /*0x64b4fa*/
    v18 = v5; /*0x64b4ff*/
    v8 = dword_AFA338; /*0x64b503*/
    do /*0x64b508*/
    {
      if ( v6 == *v8 ) /*0x64b50c*/
      {
        if ( !memcmp(v7 - 5, a3, 5u) && !memcmp(v7, a4, 5 * *v8 - 5) ) /*0x64b52e*/
        {
          if ( a5 ) /*0x64b59c*/
            *a2 += 5 - 5 * v18; /*0x64b5b0*/
          result = 1; /*0x64b5b4*/
          if ( a5 ) /*0x64b5b6*/
          {
            *a1 = 0; /*0x64b5c6*/
            a3[6] = v16; /*0x64b5cf*/
          }
          return result; /*0x64b5d5*/
        }
        v6 = v18; /*0x64b530*/
        v5 = v19; /*0x64b534*/
      }
      ++v8; /*0x64b53c*/
      v7 += 640; /*0x64b540*/
      ++v16; /*0x64b54b*/
    }
    while ( (int)v8 < (int)&dword_AFA358 ); /*0x64b508*/
  }
  if ( a5 && v5 > 1u ) /*0x64b560*/
  {
    v9 = -1; /*0x64b566*/
    v10 = -1; /*0x64b569*/
    v11 = 0; /*0x64b56c*/
    v12 = dword_AFA42C; /*0x64b56e*/
    while ( 1 ) /*0x64b573*/
    {
      v13 = *v12; /*0x64b573*/
      if ( !*v12 ) /*0x64b573*/
        break; /*0x64b573*/
      if ( (int)MEMORY[0xA8ED84] - v13 > v10 ) /*0x64b582*/
      {
        v10 = (int)MEMORY[0xA8ED84] - v13; /*0x64b584*/
        v9 = v11; /*0x64b586*/
      }
      ++v12; /*0x64b588*/
      ++v11; /*0x64b58b*/
      if ( (int)v12 >= (int)&dword_AFA44C ) /*0x64b592*/
        goto LABEL_21; /*0x64b592*/
    }
    v9 = v11; /*0x64b5d8*/
LABEL_21:
    if ( v9 == -1 ) /*0x64b5dd*/
      v9 = 0; /*0x64b5df*/
    Debug::Log(); /*0x64b5ee*/
    dword_AFA42C[v9] = (int)MEMORY[0xA8ED84]; /*0x64b600*/
    v15 = (char *)&MEMORY[0xAC5230] + 640 * v9; /*0x64b60f*/
    *(_DWORD *)v15 = *(_DWORD *)a3; /*0x64b61d*/
    v15[4] = a3[4]; /*0x64b626*/
    qmemcpy((char *)&MEMORY[0xAC5235] + 640 * v9, a4, 5 * *a1 - 5); /*0x64b63a*/
    dword_AFA338[v9] = *a1; /*0x64b647*/
    a3[6] = v9; /*0x64b64e*/
  }
  return 0; /*0x64b5c4*/
}


// ==== 0x0064B660  CompressNetworkMegaMission  this=-  sig=csp ====
int __fastcall Network_CompressMegaMission(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v7; // ecx
  unsigned __int8 v8; // al
  unsigned int v9; // ebp
  int v10; // edi
  _BYTE *v11; // ecx
  unsigned int v12; // eax
  #375 *v13; // edx
  int v14; // eax
  char *v15; // esi
  char *v16; // edi
  int v17; // eax
  _BYTE *v18; // edx
  char *v19; // esi
  int v20; // eax
  int result; // eax
  char v22; // [esp+13h] [ebp-91h]
  int v23; // [esp+14h] [ebp-90h] BYREF
  char v24; // [esp+1Bh] [ebp-89h]
  _BYTE *v25; // [esp+1Ch] [ebp-88h]
  _BYTE *v26; // [esp+20h] [ebp-84h]
  _BYTE *v27; // [esp+24h] [ebp-80h]
  int v28; // [esp+28h] [ebp-7Ch]
  int v29; // [esp+2Ch] [ebp-78h]
  int v30; // [esp+30h] [ebp-74h]
  _WORD v31[54]; // [esp+34h] [ebp-70h] BYREF
  __int16 v32; // [esp+A0h] [ebp-4h]
  char v33; // [esp+A2h] [ebp-2h]

  memset(v31, 0, sizeof(v31)); /*0x64b67e*/
  v32 = 0; /*0x64b680*/
  v33 = 0; /*0x64b682*/
  v30 = a2; /*0x64b688*/
  v28 = 0; /*0x64b68e*/
  v25 = 0; /*0x64b692*/
  LOBYTE(v23) = 0; /*0x64b696*/
  v22 = 0; /*0x64b69b*/
  v24 = 0; /*0x64b6a0*/
  v26 = 0; /*0x64b6a5*/
  v27 = 0; /*0x64b6a9*/
  if ( MEMORY[0xA8ED74] ) /*0x64b6ad*/
    Debug::Log(); /*0x64b6ba*/
  if ( Networking_LastEventIndex ) /*0x64b6c8*/
  {
    v7 = g_NetworkEventIndex; /*0x64b6ce*/
    while ( v28 < a5 ) /*0x64b6d4*/
    {
      v8 = g_NetworkPacketIndex[111 * v7]; /*0x64b6ef*/
      LOBYTE(v29) = v8; /*0x64b6f6*/
      v9 = (unsigned __int8)byte_8208EC[v8]; /*0x64b70c*/
      if ( v8 == 31 ) /*0x64b70e*/
        v10 = *(int *)((char *)&dword_A802DF + 111 * v7) + v9 + 1; /*0x64b717*/
      else
        v10 = v9 + 1; /*0x64b71d*/
      if ( LOBYTE(v31[0]) == 4 ) /*0x64b725*/
      {
        if ( v8 == 4 ) /*0x64b72d*/
        {
          if ( !v24 /*0x64b798*/
            && (v24 = *((_BYTE *)&dword_A802DF + 111 * v7 + 1), v24 == LOBYTE(v31[6]))
            && byte_A802E6[111 * v7] == LOBYTE(v31[9])
            && *(int *)((char *)&dword_A802DF + 111 * v7 + 3) == *(_DWORD *)&v31[7]
            && byte_A802EB[111 * v7] == HIBYTE(v31[11])
            && *(_DWORD *)((char *)&unk_A802E7 + 111 * v7) == *(_DWORD *)((char *)&v31[9] + 1) )
          {
            if ( MEMORY[0xA8ED74] ) /*0x64b7a5*/
            {
              FromNameIndex(v24); /*0x64b821*/
              Debug::Log(); /*0x64b82d*/
              v7 = g_NetworkEventIndex; /*0x64b832*/
            }
            v9 = 5; /*0x64b83f*/
            v10 = 5; /*0x64b846*/
            LOBYTE(v23) = v23 + 1; /*0x64b848*/
            v22 = 1; /*0x64b84c*/
          }
          else
          {
            if ( MEMORY[0xA8ED74] ) /*0x64b85d*/
              Debug::Log(); /*0x64b864*/
            Debug::Log(); /*0x64b87c*/
            DictionaryCompressLookup((unsigned __int8 *)&v23, &a4, v27, v26, 1); /*0x64b89b*/
            ++v10; /*0x64b8a0*/
            v22 = 0; /*0x64b8a9*/
            *v25 = v23; /*0x64b8ae*/
            LOBYTE(v23) = 1; /*0x64b8b7*/
            v7 = g_NetworkEventIndex; /*0x64b8c0*/
            v25 = (_BYTE *)(a1 + a4 + 1); /*0x64b8c6*/
          }
        }
        else
        {
          Debug::Log(); /*0x64b8de*/
          DictionaryCompressLookup((unsigned __int8 *)&v23, &a4, v27, v26, 1); /*0x64b8fd*/
          v11 = v25; /*0x64b902*/
          v25 = 0; /*0x64b90a*/
          v22 = 0; /*0x64b912*/
          *v11 = v23; /*0x64b917*/
          v7 = g_NetworkEventIndex; /*0x64b919*/
          LOBYTE(v23) = 0; /*0x64b91f*/
        }
      }
      else if ( v8 == 4 ) /*0x64b928*/
      {
        if ( MEMORY[0xA8ED74] ) /*0x64b931*/
        {
          Debug::Log(); /*0x64b938*/
          v7 = g_NetworkEventIndex; /*0x64b93d*/
        }
        ++v10; /*0x64b94d*/
        LOBYTE(v23) = 1; /*0x64b94e*/
        v22 = 0; /*0x64b953*/
        v25 = (_BYTE *)(a1 + a4 + 1); /*0x64b95c*/
      }
      v24 = 0; /*0x64b96d*/
      if ( a4 + v10 > v30 ) /*0x64b974*/
      {
        if ( (_BYTE)v29 == 4 && v22 ) /*0x64bd5d*/
        {
          LOBYTE(v23) = v23 - 1; /*0x64bd65*/
          Debug::Log(); /*0x64bd79*/
          DictionaryCompressLookup((unsigned __int8 *)&v23, &a4, v27, v26, 1); /*0x64bd98*/
          *v25 = v23; /*0x64bda5*/
        }
        break; /*0x64bda5*/
      }
      if ( MEMORY[0xA8B24C] == 2 ) /*0x64b981*/
        v12 = MEMORY[0xA8B554] * (((unsigned int)MEMORY[0xA8ED84] + MEMORY[0xA8B554] + a3 - 1) / MEMORY[0xA8B554]); /*0x64b9a0*/
      else
        v12 = (unsigned int)MEMORY[0xA8ED84] + a3; /*0x64b9b1*/
      v13 = HouseClass_Player; /*0x64b9b9*/
      *(int *)((char *)&dword_A802D7 + 111 * v7) = v12; /*0x64b9bf*/
      byte_A802D6[111 * g_NetworkEventIndex] = *((_BYTE *)v13 + 48); /*0x64b9d4*/
      byte_A802D5[111 * g_NetworkEventIndex] &= ~1u; /*0x64b9f0*/
      if ( dword_8B41F8 >= 0x4000 ) /*0x64ba01*/
        break; /*0x64ba01*/
      v14 = g_CrateSystemState[g_NetworkEventIndex]; /*0x64ba12*/
      v15 = &g_NetworkPacketIndex[111 * g_NetworkEventIndex]; /*0x64ba19*/
      v16 = &unk_8B4204[111 * unk_8B4200]; /*0x64ba2c*/
      qmemcpy(v16, v15, 0x6Cu); /*0x64ba38*/
      v15 += 108; /*0x64ba38*/
      v16 += 108; /*0x64ba38*/
      *(_WORD *)v16 = *(_WORD *)v15; /*0x64ba3a*/
      v16[2] = v15[2]; /*0x64ba3c*/
      dword_A70204[unk_8B4200] = v14; /*0x64ba43*/
      unk_8B4200 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64ba5b*/
      ++dword_8B41F8; /*0x64ba6a*/
      switch ( (_BYTE)v29 ) /*0x64ba70*/
      {
        case 4: /*0x64ba70*/
          *v25 = v23; /*0x64bbc1*/
          if ( v22 ) /*0x64bbc3*/
          {
            qmemcpy((void *)(a1 + a4), (char *)&dword_A802DB + 111 * g_NetworkEventIndex, v9); /*0x64bbec*/
            a4 += v9; /*0x64bc06*/
            if ( Networking_LastEventIndex == 1 || v28 == a5 - 1 ) /*0x64bc1d*/
            {
              Debug::Log(); /*0x64bc7d*/
              DictionaryCompressLookup((unsigned __int8 *)&v23, &a4, v27, v26, 1); /*0x64bc9c*/
              *v25 = v23; /*0x64bca9*/
            }
            else if ( DictionaryCompressLookup((unsigned __int8 *)&v23, &a4, v27, v26, 0) ) /*0x64bc36*/
            {
              Debug::Log(); /*0x64bc52*/
              v24 = 1; /*0x64bc62*/
              *v25 = v23; /*0x64bc67*/
            }
            goto LABEL_47; /*0x64bc69*/
          }
          *(_BYTE *)(a1 + a4) = 4; /*0x64bcb4*/
          v18 = (_BYTE *)(a1 + a4 + 2); /*0x64bcc9*/
          v27 = v18; /*0x64bcd2*/
          qmemcpy(v18, (char *)&dword_A802DB + 111 * g_NetworkEventIndex, v9); /*0x64bce2*/
          v26 = &v18[v9]; /*0x64bcf5*/
          v17 = a4 + v9 + 2; /*0x64bcf9*/
          break;
        case 0x1B: /*0x64ba70*/
          *(_BYTE *)(a1 + a4) = 27; /*0x64bb6d*/
          qmemcpy((void *)(a1 + a4 + 1), (const void *)(111 * g_NetworkEventIndex + 11010785), v9); /*0x64bb93*/
          a4 += v9 + 1; /*0x64bba7*/
          goto LABEL_47; /*0x64bbae*/
        case 0x1F: /*0x64ba70*/
          *(_BYTE *)(a1 + a4) = 31; /*0x64bad9*/
          qmemcpy((void *)(a1 + a4 + 1), (char *)&dword_A802DF + 111 * g_NetworkEventIndex, v9); /*0x64baff*/
          a4 += v9 + 1; /*0x64bb18*/
          qmemcpy( /*0x64bb3b*/
            (void *)(a1 + a4),
            *(const void **)((char *)&dword_A802DB + 111 * g_NetworkEventIndex),
            *(int *)((char *)&dword_A802DF + 111 * g_NetworkEventIndex));
          v17 = *(int *)((char *)&dword_A802DF + 111 * g_NetworkEventIndex) + a4; /*0x64bb5d*/
          break;
        default:
          *(_BYTE *)(a1 + a4) = v29; /*0x64ba89*/
          qmemcpy((void *)(a1 + a4 + 1), (char *)&dword_A802DB + 111 * g_NetworkEventIndex, v9); /*0x64bab0*/
          a4 += v9 + 1; /*0x64bac4*/
          goto LABEL_47; /*0x64bacb*/
      }
      a4 = v17; /*0x64bcfd*/
LABEL_47:
      ++v28; /*0x64bd04*/
      v19 = &g_NetworkPacketIndex[111 * g_NetworkEventIndex]; /*0x64bd22*/
      v20 = Networking_LastEventIndex; /*0x64bd29*/
      qmemcpy(v31, v19, sizeof(v31)); /*0x64bd2e*/
      v19 += 108; /*0x64bd2e*/
      v32 = *(_WORD *)v19; /*0x64bd30*/
      v33 = v19[2]; /*0x64bd34*/
      if ( Networking_LastEventIndex ) /*0x64bd35*/
      {
        v7 = ((_BYTE)g_NetworkEventIndex + 1) & 0x7F; /*0x64bd3a*/
        g_NetworkEventIndex = v7; /*0x64bd3e*/
        --Networking_LastEventIndex; /*0x64bd44*/
        if ( v20 != 1 ) /*0x64bd49*/
          continue; /*0x64bd49*/
      }
      break; /*0x64bd49*/
    }
  }
  result = a4; /*0x64bda7*/
  *a6 = v28; /*0x64bdbc*/
  return result; /*0x64bdb9*/
}


// ==== 0x0064BDD0  DecodeNetworkEvents  this=-  sig=csp ====
int __fastcall Network_DecodeEvents(char *a1, unsigned int a2)
{
  char *v2; // esi
  int v3; // ebx
  int v4; // ebp
  char *v5; // edi
  int v6; // edx
  unsigned __int8 v7; // al
  int v8; // ecx
  unsigned int v9; // eax
  unsigned __int8 v10; // cl
  unsigned int v11; // ecx
  char *v12; // esi
  char *v13; // edi
  char *v14; // ebp
  unsigned int v15; // esi
  char v16; // cl
  int v17; // esi
  char *v18; // eax
  char *v19; // edi
  char v20; // cl
  unsigned __int8 v21; // dl
  int v22; // esi
  char *v23; // ecx
  void **v24; // ebp
  char *v25; // edi
  void **v26; // esi
  char v27; // al
  char v28; // cl
  bool v29; // zf
  char *v30; // edi
  unsigned int v31; // ecx
  unsigned __int8 v33; // [esp+13h] [ebp-99h]
  unsigned int v34; // [esp+14h] [ebp-98h]
  int v35; // [esp+18h] [ebp-94h]
  char *v36; // [esp+1Ch] [ebp-90h]
  int v37; // [esp+1Ch] [ebp-90h]
  int v38; // [esp+20h] [ebp-8Ch]
  int v40; // [esp+28h] [ebp-84h]
  void **v41; // [esp+2Ch] [ebp-80h]
  char *v42; // [esp+30h] [ebp-7Ch]
  int v43; // [esp+34h] [ebp-78h]
  unsigned __int8 v44; // [esp+38h] [ebp-74h]
  _DWORD v45[28]; // [esp+3Ch] [ebp-70h] BYREF

  v2 = a1; /*0x64bdd9*/
  v3 = 0; /*0x64bddc*/
  memset(v45, 0, 111); /*0x64bded*/
  v34 = a2; /*0x64bdfd*/
  v35 = 0; /*0x64be01*/
  v33 = 0; /*0x64be05*/
  v4 = 13; /*0x64be09*/
  v5 = a1; /*0x64be0e*/
  v40 = a1[2]; /*0x64be10*/
  if ( a2 < 0xE ) /*0x64be14*/
    return v35; /*0x64c370*/
  v6 = unk_8B4200; /*0x64be1a*/
  while ( 1 ) /*0x64be20*/
  {
    v7 = *v5; /*0x64be20*/
    v44 = *v5; /*0x64be24*/
    if ( *v5 == 25 ) /*0x64be28*/
    {
      v3 += v4 + 1; /*0x64c33e*/
      v31 = -1 - v4 + v34; /*0x64c342*/
      v4 = 13; /*0x64c344*/
      v34 = v31; /*0x64c349*/
      v5 = &v2[v3]; /*0x64c34d*/
      goto LABEL_48; /*0x64c350*/
    }
    if ( v7 == 28 ) /*0x64be30*/
    {
      v8 = *(_DWORD *)(v5 + 3); /*0x64be35*/
      BYTE2(v45[0]) = v5[2]; /*0x64be38*/
      v3 += 6; /*0x64be40*/
      *(_DWORD *)((char *)v45 + 3) = v8; /*0x64be43*/
      v9 = v34 - 6; /*0x64be47*/
    }
    else
    {
      if ( v7 != 4 ) /*0x64be4e*/
        goto LABEL_9; /*0x64be4e*/
      v10 = v2[++v3]; /*0x64be50*/
      v33 = v10; /*0x64be59*/
      v9 = v34 - 1; /*0x64be5d*/
    }
    v34 = v9; /*0x64be5e*/
LABEL_9:
    memset((char *)&v45[1] + 3, 0, 0x68u); /*0x64be6d*/
    LOBYTE(v45[0]) = v44; /*0x64be75*/
    v11 = (unsigned __int8)byte_8208EC[v44]; /*0x64be85*/
    v38 = v11; /*0x64be8d*/
    if ( v44 != 4 ) /*0x64be91*/
    {
      if ( v44 == 27 ) /*0x64be99*/
      {
        v12 = &v2[v3 + 1]; /*0x64bf10*/
        v13 = (char *)&v45[3] + 1; /*0x64bf14*/
      }
      else
      {
        v12 = &v2[v3 + 1]; /*0x64be9d*/
        if ( v44 == 31 ) /*0x64bea1*/
        {
          qmemcpy((char *)&v45[2] + 3, v12, v11); /*0x64bec7*/
          v15 = *(_DWORD *)((char *)&v45[2] + 3); /*0x64bed0*/
          v14 = (char *)__2_YAPAXI_Z(*(_DWORD *)((char *)&v45[2] + 3)); /*0x64bede*/
          *(_DWORD *)((char *)&v45[1] + 3) = v14; /*0x64beed*/
          qmemcpy(v14, &a1[v3 + 1 + v38], v15); /*0x64befa*/
          v3 += v15; /*0x64befe*/
          v34 -= v15; /*0x64bf05*/
LABEL_39:
          v6 = unk_8B4200; /*0x64c250*/
          goto LABEL_40; /*0x64c250*/
        }
        v13 = (char *)&v45[1] + 3; /*0x64bea3*/
      }
      qmemcpy(v13, v12, v11); /*0x64beac*/
      goto LABEL_14; /*0x64beac*/
    }
    qmemcpy((char *)&v45[1] + 3, &v2[v3 + 1], v11); /*0x64bf29*/
    if ( v33 > 1u ) /*0x64bf38*/
    {
      v3 += v11 + 1; /*0x64bf41*/
      v34 += -1 - v11; /*0x64bf52*/
      v38 = 5; /*0x64bf56*/
      Debug::Log(); /*0x64bf5e*/
      v16 = HIBYTE(v45[2]); /*0x64bf70*/
      v17 = SBYTE1(v45[3]) + 8 * v40; /*0x64bf77*/
      v18 = (char *)&unk_AFA468 + 640 * v17; /*0x64bf84*/
      *(_DWORD *)v18 = *(_DWORD *)((char *)&v45[1] + 3); /*0x64bf89*/
      v18[4] = v16; /*0x64bf8b*/
      v43 = 1; /*0x64bf93*/
      MEMORY[0xAC50FC][v17] = 1; /*0x64bf97*/
      if ( !*(_DWORD *)((char *)v45 + 3) || !LOBYTE(v45[0]) ) /*0x64bfac*/
        Debug::Log(); /*0x64bfba*/
      v36 = &a1[v3]; /*0x64bfe0*/
      v42 = (char *)&unk_AFA46D + 640 * v17; /*0x64bfe4*/
      while ( dword_8B41F8 < 0x4000 ) /*0x64bff2*/
      {
        v19 = &unk_8B4204[111 * unk_8B4200]; /*0x64c00c*/
        qmemcpy(v19, v45, 0x6Cu); /*0x64c013*/
        v19 += 108; /*0x64c013*/
        *(_WORD *)v19 = v45[27]; /*0x64c015*/
        v19[2] = BYTE2(v45[27]); /*0x64c017*/
        dword_A70204[unk_8B4200] = timeGetTime(); /*0x64c028*/
        unk_8B4200 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64c047*/
        ++dword_8B41F8; /*0x64c051*/
        v14 = *(char **)v36; /*0x64c057*/
        v20 = v36[4]; /*0x64c05e*/
        ++v35; /*0x64c063*/
        *(_DWORD *)v42 = *(_DWORD *)v36; /*0x64c06b*/
        HIBYTE(v45[2]) = v20; /*0x64c06d*/
        v42[4] = v20; /*0x64c071*/
        v21 = v33 - 1; /*0x64c078*/
        v33 = v21; /*0x64c081*/
        *(_DWORD *)((char *)&v45[1] + 3) = v14; /*0x64c085*/
        ++v43; /*0x64c089*/
        v42 += 5; /*0x64c08d*/
        MEMORY[0xAC50FC][v17] = v43; /*0x64c091*/
        if ( v21 == 1 ) /*0x64c098*/
        {
          v38 = 4; /*0x64c0d3*/
          Debug::Log(); /*0x64c0db*/
          goto LABEL_39; /*0x64c0e3*/
        }
        v3 += 5; /*0x64c0a7*/
        v36 += 5; /*0x64c0ad*/
        v34 -= 5; /*0x64c0b3*/
        if ( !v21 ) /*0x64c0b7*/
          goto LABEL_39; /*0x64c0b7*/
      }
      return -1; /*0x64bff2*/
    }
    if ( !v33 ) /*0x64c0ea*/
      break; /*0x64c0ea*/
LABEL_14:
    v14 = *(char **)((char *)&v45[1] + 3); /*0x64beb5*/
LABEL_40:
    if ( !*(_DWORD *)((char *)v45 + 3) || !LOBYTE(v45[0]) ) /*0x64c264*/
    {
      Debug::Log(); /*0x64c271*/
      v6 = unk_8B4200; /*0x64c276*/
    }
    if ( dword_8B41F8 >= 0x4000 ) /*0x64c289*/
    {
      if ( LOBYTE(v45[0]) == 31 ) /*0x64c357*/
        __3_YAXPAX_Z(v14); /*0x64c35a*/
      return -1; /*0x64c35a*/
    }
    v30 = &unk_8B4204[111 * v6]; /*0x64c29e*/
    qmemcpy(v30, v45, 0x6Cu); /*0x64c2a5*/
    v30 += 108; /*0x64c2a5*/
    *(_WORD *)v30 = v45[27]; /*0x64c2a7*/
    v30[2] = BYTE2(v45[27]); /*0x64c2a9*/
    dword_A70204[unk_8B4200] = timeGetTime(); /*0x64c2bd*/
    v6 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64c2d6*/
    v3 += v38 + 1; /*0x64c2de*/
    v29 = -1 - v38 + v34 == 0; /*0x64c2e8*/
    unk_8B4200 = v6; /*0x64c2ea*/
    ++dword_8B41F8; /*0x64c2f0*/
    ++v35; /*0x64c2f6*/
    v34 += -1 - v38; /*0x64c2fa*/
    if ( v29 ) /*0x64c2fe*/
      return v35; /*0x64c2fe*/
    v5 = &a1[v3]; /*0x64c306*/
    v4 = (unsigned __int8)byte_8208EC[(unsigned __int8)a1[v3]]; /*0x64c31c*/
    if ( a1[v3] == 4 ) /*0x64c31e*/
      ++v4; /*0x64c320*/
    v2 = a1; /*0x64c321*/
LABEL_48:
    if ( v34 < v4 + 1 ) /*0x64c32e*/
      return v35; /*0x64c32e*/
  }
  v3 += v11 + 1; /*0x64c0f9*/
  v38 = 5; /*0x64c0fd*/
  v37 = 1; /*0x64c105*/
  v22 = SBYTE1(v45[3]) + 8 * v40; /*0x64c10d*/
  v33 = MEMORY[0xAC50FC][v22]; /*0x64c11c*/
  v34 += -1 - v11; /*0x64c126*/
  v23 = (char *)&unk_AFA468 + 640 * v22; /*0x64c130*/
  v14 = *(char **)v23; /*0x64c136*/
  *(_DWORD *)((char *)&v45[1] + 3) = *(_DWORD *)v23; /*0x64c138*/
  HIBYTE(v45[2]) = v23[4]; /*0x64c13f*/
  if ( !*(_DWORD *)((char *)v45 + 3) || !LOBYTE(v45[0]) ) /*0x64c151*/
  {
    Debug::Log(); /*0x64c165*/
    v6 = unk_8B4200; /*0x64c16a*/
  }
  if ( !v33 ) /*0x64c179*/
    goto LABEL_40; /*0x64c179*/
  v24 = (void **)((char *)&unk_AFA46D + 640 * v22); /*0x64c185*/
  while ( dword_8B41F8 < 0x4000 ) /*0x64c19b*/
  {
    v25 = &unk_8B4204[111 * v6]; /*0x64c1b0*/
    qmemcpy(v25, v45, 0x6Cu); /*0x64c1b7*/
    v25 += 108; /*0x64c1b7*/
    *(_WORD *)v25 = v45[27]; /*0x64c1b9*/
    v25[2] = BYTE2(v45[27]); /*0x64c1bb*/
    v26 = v24; /*0x64c1cc*/
    dword_A70204[unk_8B4200] = timeGetTime(); /*0x64c1d1*/
    v41 = (void **)((char *)v24 + 5); /*0x64c1e8*/
    v6 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64c1ec*/
    ++dword_8B41F8; /*0x64c1f3*/
    v27 = v33 - 1; /*0x64c1fd*/
    unk_8B4200 = v6; /*0x64c200*/
    v14 = (char *)*v24; /*0x64c206*/
    ++v37; /*0x64c208*/
    v28 = *((_BYTE *)v26 + 4); /*0x64c20c*/
    v29 = v33 == 2; /*0x64c20f*/
    ++v35; /*0x64c211*/
    --v33; /*0x64c215*/
    *(_DWORD *)((char *)&v45[1] + 3) = v14; /*0x64c219*/
    HIBYTE(v45[2]) = v28; /*0x64c21d*/
    if ( v29 ) /*0x64c221*/
    {
      v38 = -1; /*0x64c231*/
      Debug::Log(); /*0x64c248*/
      goto LABEL_39; /*0x64c248*/
    }
    if ( !v27 ) /*0x64c225*/
      goto LABEL_40; /*0x64c225*/
    v24 = v41; /*0x64c18d*/
  }
  return -1; /*0x64c362*/
}


// ==== 0x0064C380  Network::ProcessEventList  this=Network  sig=csp ====
int __stdcall Network::ProcessEventList(int a1, int *a2, int a3)
{
  IUnknown *v3; // ebx
  IUnknown *v4; // edi
  int v5; // esi
  IUnknown *v6; // ecx
  IUnknown *v7; // eax
  int v8; // ecx
  int i; // esi
  IUnknown *v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // ebp
  int v14; // ebx
  int v15; // eax
  int v16; // edx
  char v17; // dl
  int v18; // esi
  int v19; // edx
  int v20; // esi
  _BYTE *v21; // ecx
  char *v22; // esi
  char *v23; // edi
  HouseClass *v24; // eax
  int v25; // ecx
  int v26; // esi
  int v27; // eax
  int v28; // esi
  int v29; // ebx
  int v30; // ebp
  int v31; // esi
  wchar_t *StringCSF; // eax
  int v33; // esi
  int v34; // ebx
  char v35; // dl
  bool v36; // cl
  char *v37; // edx
  char *v38; // eax
  int v39; // edx
  unsigned __int8 v41; // si
  int v42; // edi
  wchar_t *v43; // eax
  wchar_t *v44; // [esp-10h] [ebp-60h]
  int v45; // [esp+0h] [ebp-50h]
  int v46; // [esp+10h] [ebp-40h]
  int v47; // [esp+14h] [ebp-3Ch]
  int v48; // [esp+14h] [ebp-3Ch]
  int v49; // [esp+18h] [ebp-38h]
  int v50; // [esp+1Ch] [ebp-34h]
  IUnknown *v51; // [esp+20h] [ebp-30h]
  int v52; // [esp+24h] [ebp-2Ch]
  int var28; // [esp+28h] [ebp-28h]
  char v54; // [esp+2Ch] [ebp-24h]
  VectorClass *v53; // [esp+30h] [ebp-20h]
  char v56; // [esp+34h] [ebp-1Ch]
  char Destination[20]; // [esp+38h] [ebp-18h] BYREF
  char v58; // [esp+4Ch] [ebp-4h]

  v3 = HouseClass_Count; /*0x64c384*/
  v4 = (IUnknown *)dword_8B41F8; /*0x64c38d*/
  v5 = 0; /*0x64c395*/
  v50 = dword_8B41F8; /*0x64c399*/
  v51 = HouseClass_Count; /*0x64c39d*/
  if ( dword_8B41F8 > 0 ) /*0x64c3a1*/
  {
    v6 = *(IUnknown **)&HouseClass_Player.__pad_5568[7976]; /*0x64c3a3*/
    do /*0x64c40b*/
    {
      if ( *((_BYTE *)&unk_8B4204 + 111 * (((_WORD)v5 + word_8B41FC) & 0x3FFF)) != 28 ) /*0x64c3c3*/
      {
        v7 = *(IUnknown **)((char *)&unk_8B4207 + 111 * (((_WORD)v5 + word_8B41FC) & 0x3FFF)); /*0x64c3c5*/
        if ( (int)v7 > *(int *)&HouseClass_Player.__pad_5568[8004] && (int)v7 < (int)v6 ) /*0x64c3d8*/
        {
          Debug::Log(); /*0x64c3e1*/
          v6 = *(IUnknown **)&HouseClass_Player.__pad_5568[7976]; /*0x64c3fb*/
          *(_DWORD *)((char *)&unk_8B4207 + 111 * (((_WORD)v5 + word_8B41FC) & 0x3FFF)) = *(_DWORD *)&HouseClass_Player.__pad_5568[7976]; /*0x64c401*/
        }
      }
      ++v5; /*0x64c408*/
    }
    while ( v5 < (int)v4 ); /*0x64c40b*/
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[20516] ) /*0x64c413*/
  {
    v8 = *(_DWORD *)&HouseClass_Player.__pad_5568[20520]; /*0x64c419*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[20520] ) /*0x64c421*/
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[20524] != -1 ) /*0x64c42e*/
      {
        for ( i = 0; i < (int)v4; ++i ) /*0x64c438*/
        {
          if ( *((_BYTE *)&unk_8B4204 + 111 * ((word_8B41FC + (_WORD)i) & 0x3FFF)) == 19 /*0x64c466*/
            && *((char *)&unk_8B4206 + 111 * ((word_8B41FC + (_WORD)i) & 0x3FFF)) == *(_DWORD *)&HouseClass_Player.__pad_5568[20524] )
          {
            v10 = *(IUnknown **)((char *)&unk_8B4207 + 111 * ((word_8B41FC + (_WORD)i) & 0x3FFF)); /*0x64c468*/
            if ( (int)v10 > *(int *)&HouseClass_Player.__pad_5568[20516] && (int)v10 < v8 ) /*0x64c47b*/
            {
              Debug::Log(); /*0x64c484*/
              v8 = *(_DWORD *)&HouseClass_Player.__pad_5568[20520]; /*0x64c49e*/
              *(_DWORD *)((char *)&unk_8B4207 + 111 * (((_WORD)i + word_8B41FC) & 0x3FFF)) = *(_DWORD *)&HouseClass_Player.__pad_5568[20520]; /*0x64c4a4*/
            }
          }
        }
        if ( *(int *)&HouseClass_Player.__pad_5568[23248] > v8 ) /*0x64c4b8*/
        {
          *(_DWORD *)&HouseClass_Player.__pad_5568[20516] = 0; /*0x64c4ba*/
          *(_DWORD *)&HouseClass_Player.__pad_5568[20520] = 0; /*0x64c4c0*/
          *(_DWORD *)&HouseClass_Player.__pad_5568[20524] = -1; /*0x64c4c6*/
        }
      }
    }
  }
  v46 = 0; /*0x64c4d2*/
  if ( (int)v3 <= 0 ) /*0x64c4d6*/
    return 1; /*0x64cc5e*/
  v11 = *(_DWORD *)&HouseClass_Player.__pad_160[40]; /*0x64c4dc*/
  while ( 1 ) /*0x64c4ec*/
  {
    v12 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v46]; /*0x64c4ec*/
    v47 = v12; /*0x64c4f1*/
    if ( v12 ) /*0x64c4f5*/
    {
      if ( *(_BYTE *)(v12 + 492) || *(_BYTE *)(v12 + 493) ) /*0x64c505*/
        break; /*0x64c505*/
    }
LABEL_119:
    if ( ++v46 >= (int)v51 ) /*0x64cc4c*/
      return 1; /*0x64cc4c*/
  }
  v13 = 0; /*0x64c517*/
  v49 = 0; /*0x64c51b*/
  if ( v50 <= 0 ) /*0x64c51f*/
  {
LABEL_97:
    v33 = 0; /*0x64cae8*/
    v34 = -1; /*0x64caef*/
    v35 = 0; /*0x64caf2*/
    v54 = 0; /*0x64caf6*/
    v48 = 0; /*0x64cafa*/
    if ( *(int *)&HouseClass_Player.__pad_160[36] > 0 ) /*0x64cafe*/
    {
      while ( 1 ) /*0x64cb0a*/
      {
        v36 = 0; /*0x64cb0a*/
        if ( v34 != -1 ) /*0x64cb0f*/
        {
          v36 = HouseClass_Player.__pad_160[111 * (unsigned __int8)(v11 + v33) + 60] != (unsigned __int8)v34; /*0x64cb28*/
          if ( HouseClass_Player.__pad_160[111 * (unsigned __int8)(v11 + v33) + 66] != v35 /*0x64cb5e*/
            || *(VectorClass **)&HouseClass_Player.__pad_160[111 * (unsigned __int8)(v11 + v33) + 62] != v53
            || HouseClass_Player.__pad_160[111 * (unsigned __int8)(v11 + v33) + 71] != v54
            || *(_DWORD *)&HouseClass_Player.__pad_160[111 * (unsigned __int8)(v11 + v33) + 67] != var28 )
          {
            v36 = 1; /*0x64cb60*/
          }
        }
        v34 = HouseClass_Player.__pad_160[111 * (unsigned __int8)(v11 + v33) + 60]; /*0x64cb72*/
        v37 = &HouseClass_Player.__pad_160[111 * (unsigned __int8)(v11 + v33) + 62]; /*0x64cb7a*/
        v38 = &HouseClass_Player.__pad_160[111 * (unsigned __int8)(v11 + v33) + 67]; /*0x64cb81*/
        v53 = *(VectorClass **)v37; /*0x64cb8a*/
        v56 = v37[4]; /*0x64cb91*/
        var28 = *(_DWORD *)v38; /*0x64cb97*/
        v54 = v38[4]; /*0x64cb9e*/
        if ( v36 ) /*0x64cba2*/
        {
          if ( v33 - v48 > 1 ) /*0x64cbaf*/
          {
            ProcessNetworkMapEvent(v48, v33 - v48); /*0x64cbb1*/
            v11 = *(_DWORD *)&HouseClass_Player.__pad_160[40]; /*0x64cbb6*/
          }
          v48 = v33; /*0x64cbbc*/
        }
        else if ( v33 == *(_DWORD *)&HouseClass_Player.__pad_160[36] - 1 ) /*0x64cbcb*/
        {
          v39 = v33 - v48 + 1; /*0x64cbd5*/
          if ( v39 > 1 ) /*0x64cbd9*/
          {
            ProcessNetworkMapEvent(v48, v39); /*0x64cbdb*/
            v11 = *(_DWORD *)&HouseClass_Player.__pad_160[40]; /*0x64cbe0*/
          }
        }
        if ( ++v33 >= *(int *)&HouseClass_Player.__pad_160[36] ) /*0x64cbee*/
          break; /*0x64cbee*/
        v35 = v56; /*0x64cb06*/
      }
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_160[36] ) /*0x64cbfb*/
    {
      while ( 1 ) /*0x64cc0a*/
      {
        EventClass::ProcessEvent((int)&HouseClass_Player.__pad_160[111 * v11 + 48]); /*0x64cc0a*/
        if ( !*(_DWORD *)&HouseClass_Player.__pad_160[36] ) /*0x64cc16*/
          break; /*0x64cc16*/
        v11 = (unsigned __int8)(HouseClass_Player.__pad_160[40] + 1); /*0x64cc21*/
        *(_DWORD *)&HouseClass_Player.__pad_160[40] = v11; /*0x64cc28*/
        if ( !--*(_DWORD *)&HouseClass_Player.__pad_160[36] ) /*0x64cc33*/
          goto LABEL_119; /*0x64cc33*/
      }
      v11 = *(_DWORD *)&HouseClass_Player.__pad_160[40]; /*0x64cc37*/
    }
    goto LABEL_119; /*0x64cc37*/
  }
  v14 = a1; /*0x64c525*/
  while ( 1 ) /*0x64c536*/
  {
    v15 = (word_8B41FC + (_WORD)v13) & 0x3FFF; /*0x64c536*/
    v52 = *((char *)&unk_8B4206 + 111 * v15); /*0x64c54c*/
    if ( v52 != *(_DWORD *)(v47 + 48) ) /*0x64c550*/
      goto LABEL_96; /*0x64c550*/
    v16 = *(_DWORD *)((char *)&unk_8B4207 + 111 * v15); /*0x64c556*/
    if ( *(int *)&HouseClass_Player.__pad_5568[23248] < v16 || (*((_BYTE *)&unk_8B4205 + 111 * v15) & 1) != 0 ) /*0x64c573*/
      goto LABEL_96; /*0x64c573*/
    if ( *(int *)&HouseClass_Player.__pad_5568[23248] <= v16 /*0x64c5a9*/
      || *((_BYTE *)&unk_8B4204 + 111 * v15) == 28
      || !*(_DWORD *)&HouseClass_Player.__pad_5568[8068]
      || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 5 )
    {
      break; /*0x64c5a9*/
    }
    Debug::Log(); /*0x64c5b4*/
    Debug::Log(); /*0x64c5be*/
    Debug::Log(); /*0x64c5d4*/
    Debug::Log(); /*0x64c5e2*/
    Debug::Log(); /*0x64c5f1*/
    Debug::Log(); /*0x64c602*/
    Debug::Log(); /*0x64c613*/
    Debug::Log(); /*0x64c623*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 16))(v14); /*0x64c62f*/
    v11 = *(_DWORD *)&HouseClass_Player.__pad_160[40]; /*0x64c632*/
LABEL_96:
    v49 = ++v13; /*0x64cade*/
    if ( v13 >= v50 ) /*0x64cae2*/
      goto LABEL_97; /*0x64cae2*/
  }
  v17 = *((_BYTE *)&unk_8B4204 + 111 * v15); /*0x64c63d*/
  if ( v17 == 19 ) /*0x64c647*/
  {
    v24 = HouseClass_Array; /*0x64c7bf*/
    v25 = 0; /*0x64c7cc*/
    while ( 1 ) /*0x64c7d3*/
    {
      v26 = *(_DWORD *)v24->__pad_0; /*0x64c7d3*/
      if ( *(_DWORD *)v24->__pad_0 ) /*0x64c7d3*/
      {
        if ( *(_DWORD *)(v26 + 48) == v52 ) /*0x64c7dc*/
          break; /*0x64c7dc*/
      }
      ++v25; /*0x64c7de*/
      v24 = (HouseClass *)((char *)v24 + 4); /*0x64c7df*/
      if ( v25 >= (int)v51 ) /*0x64c7e3*/
        goto LABEL_57; /*0x64c7e3*/
    }
    *(_BYTE *)(v26 + 584) = 1; /*0x64c7e7*/
LABEL_57:
    if ( Network::CountDisconnectedHouses((void *)v26) == 1 ) /*0x64c7f8*/
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 4 || HouseClass_Player.__pad_5568[26188] ) /*0x64c809*/
      {
LABEL_66:
        if ( !Network::processQueue((_BYTE *)v26) ) /*0x64c852*/
          Network::SendOffer(v26); /*0x64c85d*/
        goto LABEL_68; /*0x64c85d*/
      }
      HouseClass_Player.__pad_5568[9741] = 1; /*0x64c80b*/
      Timer::UpdateDelta(); /*0x64c812*/
      ProcessGameResults(0); /*0x64c819*/
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 /*0x64c83a*/
      && !HouseClass_Player.__pad_5568[26188]
      && HouseClass_Player.field_0
      && HouseClass_Player.field_0 == v26 )
    {
      Debug::Log(); /*0x64c841*/
      ProcessGameResults(0); /*0x64c84b*/
    }
    goto LABEL_66; /*0x64c84b*/
  }
  if ( v17 == 12 || v17 == 34 ) /*0x64c659*/
  {
LABEL_68:
    if ( HouseClass_Player.__pad_5568[23232] /*0x64c885*/
      && *((_BYTE *)&unk_8B4204 + 111 * (((_WORD)v13 + word_8B41FC) & 0x3FFF)) == 19 )
    {
      Debug::Log(); /*0x64c8b3*/
    }
    v27 = (word_8B41FC + (_WORD)v13) & 0x3FFF; /*0x64c8cd*/
    if ( *((char *)&unk_8B4206 + 111 * v27) != *(_DWORD *)(HouseClass_Player.field_0 + 48) ) /*0x64c8e2*/
    {
      if ( *((_BYTE *)&unk_8B4204 + 111 * v27) == 19 ) /*0x64c923*/
      {
        Debug::Log(); /*0x64c935*/
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 1 || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 2 ) /*0x64c94a*/
        {
          HandlePlayerDisconnection(v46, 0); /*0x64c9be*/
        }
        else if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 3 /*0x64c954*/
               || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
        {
          if ( a1 ) /*0x64c95c*/
          {
            v29 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 24))(a1, v46); /*0x64c96c*/
            if ( v29 != -1 ) /*0x64c971*/
            {
              if ( v29 < (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) - 1 ) /*0x64c97d*/
              {
                v30 = a3 + 24 * v29; /*0x64c986*/
                do /*0x64c9a5*/
                {
                  ++v29; /*0x64c993*/
                  qmemcpy((void *)v30, (const void *)(v30 + 24), 0x18u); /*0x64c994*/
                  v30 += 24; /*0x64c99a*/
                }
                while ( v29 < (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) - 1 ); /*0x64c9a5*/
                v13 = v49; /*0x64c9a7*/
              }
              HandleNetworkPlayerDisconnect((wchar_t *)v46, 0); /*0x64c9b1*/
            }
          }
        }
        if ( (HouseClass_Player.__pad_5568[17220] & 2) != 0 /*0x64c9ea*/
          && *((_BYTE *)&unk_8B4204 + 111 * (((_WORD)v13 + word_8B41FC) & 0x3FFF)) == 19 )
        {
          v31 = v47; /*0x64c9f0*/
          *(_BYTE *)(v47 + 492) = 0; /*0x64c9f4*/
          *(_DWORD *)(v47 + 588) = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5172); /*0x64ca07*/
          HouseClass::CanDetect(); /*0x64ca0d*/
          if ( g_INI_Key_Computer ) /*0x64ca19*/
          {
            strncpy(Destination, g_INI_Key_Computer, (IUnknown *)0x14); /*0x64ca2d*/
            v58 = 0; /*0x64ca35*/
          }
          else
          {
            Destination[0] = (unsigned __int8)g_INI_Key_Computer; /*0x64ca1b*/
          }
          if ( Destination != (char *)(v47 + 90100) ) /*0x64ca46*/
          {
            qmemcpy((void *)(v47 + 90100), Destination, 0x14u); /*0x64ca51*/
            *(_BYTE *)(v47 + 90120) = v58; /*0x64ca53*/
            v31 = v47; /*0x64ca54*/
          }
          StringCSF = GetStringCSF(g_Str_TXT_COMPUTER, 0, &stru_830620.__pad_579C[5860], 5672); /*0x64ca6b*/
          wcsncpy((wchar_t *)(v31 + 90154), StringCSF, (DropListClass *)0x15); /*0x64ca78*/
          *(_WORD *)(v31 + 90194) = 0; /*0x64ca8c*/
          Debug::Log(); /*0x64ca95*/
          --*(_DWORD *)&HouseClass_Player.__pad_5568[8856]; /*0x64caa3*/
        }
      }
      goto LABEL_95; /*0x64caa3*/
    }
    v28 = dword_A70204[v27]; /*0x64c8e4*/
    *(_DWORD *)&stru_830620.__pad_579C[5604] = timeGetTime() - v28; /*0x64c8f3*/
    v21 = (char *)&unk_8B4204 + 111 * (((_WORD)v13 + word_8B41FC) & 0x3FFF); /*0x64c90a*/
LABEL_73:
    EventClass::ProcessEvent((int)v21); /*0x64c911*/
    goto LABEL_95; /*0x64c916*/
  }
  if ( v17 != 28 ) /*0x64c662*/
  {
    v20 = dword_A70204[v15]; /*0x64c6fd*/
    *(_DWORD *)&stru_830620.__pad_579C[5604] = timeGetTime() - v20; /*0x64c70c*/
    v21 = (char *)&unk_8B4204 + 111 * (((_WORD)v13 + word_8B41FC) & 0x3FFF); /*0x64c723*/
    if ( *v21 == 4 ) /*0x64c733*/
    {
      if ( *(int *)&HouseClass_Player.__pad_160[36] < 256 ) /*0x64c743*/
      {
        v22 = (char *)&unk_8B4204 + 111 * ((word_8B41FC + (_WORD)v13) & 0x3FFF); /*0x64c762*/
        v23 = &HouseClass_Player.__pad_160[111 * *(_DWORD *)&HouseClass_Player.__pad_160[44] + 48]; /*0x64c774*/
        qmemcpy(v23, v22, 0x6Cu); /*0x64c77b*/
        v22 += 108; /*0x64c77b*/
        v23 += 108; /*0x64c77b*/
        *(_WORD *)v23 = *(_WORD *)v22; /*0x64c77d*/
        v23[2] = v22[2]; /*0x64c77f*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[4 * *(_DWORD *)&HouseClass_Player.__pad_160[44] + 6952] = timeGetTime(); /*0x64c78c*/
        *(_DWORD *)&HouseClass_Player.__pad_160[44] = (unsigned __int8)(HouseClass_Player.__pad_160[44] + 1); /*0x64c7a6*/
        ++*(_DWORD *)&HouseClass_Player.__pad_160[36]; /*0x64c7ac*/
      }
      goto LABEL_95; /*0x64c7b1*/
    }
    goto LABEL_73; /*0x64c733*/
  }
  if ( a2 ) /*0x64c66e*/
  {
    v18 = *a2; /*0x64c670*/
    v19 = a2[2]; /*0x64c672*/
    if ( *a2 == -1 ) /*0x64c678*/
      goto LABEL_43; /*0x64c678*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v18 < v19 ) /*0x64c683*/
    {
      v19 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v18; /*0x64c685*/
LABEL_43:
      if ( v19 ) /*0x64c689*/
        goto LABEL_95; /*0x64c689*/
    }
  }
  if ( *(_DWORD *)((char *)&unk_8B4207 + 111 * v15) != *(_DWORD *)&HouseClass_Player.__pad_5568[23248] /*0x64c6f2*/
    || dword_B04474[(unsigned __int8)(*(_DWORD *)((char *)&unk_8B4207 + 111 * ((word_8B41FC + (_WORD)v13) & 0x3FFF))
                                    - byte_8B4211[111 * ((word_8B41FC + (_WORD)v13) & 0x3FFF)])] == *(_DWORD *)((char *)&unk_8B420B + 111 * ((word_8B41FC + (_WORD)v13) & 0x3FFF)) )
  {
LABEL_95:
    v14 = a1; /*0x64caa8*/
    *((_BYTE *)&unk_8B4205 + 111 * ((word_8B41FC + (_WORD)v13) & 0x3FFF)) |= 1u; /*0x64caca*/
    v11 = *(_DWORD *)&HouseClass_Player.__pad_160[40]; /*0x64cad1*/
    goto LABEL_96; /*0x64cad1*/
  }
  if ( byte_B04880 ) /*0x64cc68*/
  {
    v41 = 0; /*0x64cc6e*/
    v42 = 256; /*0x64cc70*/
    do /*0x64cc9f*/
    {
      LogMultiplayToSync_MPDEBUG(v41++, (unsigned __int8 *)&unk_8B4204 + 111 * ((word_8B41FC + (_WORD)v49) & 0x3FFF)); /*0x64cc98*/
      --v42; /*0x64cc9e*/
    }
    while ( v42 ); /*0x64cc9f*/
  }
  else
  {
    Multiplay::LogToSYNC_NOMPDEBUG((unsigned __int8 *)&unk_8B4204 + 111 * ((word_8B41FC + (_WORD)v13) & 0x3FFF)); /*0x64ccba*/
  }
  ++*(_DWORD *)&HouseClass_Player.__pad_5568[18432]; /*0x64ccdd*/
  v44 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[8252], 0, &stru_830620.__pad_579C[5860], 5723); /*0x64ccf7*/
  v43 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[8236], 0, &stru_830620.__pad_579C[5860], 5722); /*0x64cd02*/
  Dialog::ShowMessageBox((int)v43, v44, 0, 0, 0, v45); /*0x64cd0c*/
  --*(_DWORD *)&HouseClass_Player.__pad_5568[18432]; /*0x64cd1b*/
  return 0; /*0x64cc52*/
}


// ==== 0x0064CD30  sub_64CD30  this=-  sig=ida-proto ====
void __fastcall sub_64CD30(int a1, int a2, int a3, char a4, int a5)
{
  int v5; // edi
  char *v6; // edx

  v5 = a1 + a2; /*0x64cd34*/
  if ( a1 <= a1 + a2 ) /*0x64cd39*/
  {
    while ( a4 != MEMORY[0xA83EE7][111 * (unsigned __int8)(MEMORY[0xA83ED4] + a1)] /*0x64cd67*/
         || a3 != *(int *)((char *)&MEMORY[0xA83EE3] + 111 * (unsigned __int8)(MEMORY[0xA83ED4] + a1)) )
    {
      if ( ++a1 > v5 ) /*0x64cd6c*/
        return; /*0x64cd6c*/
    }
    v6 = (char *)&MEMORY[0xA83EEF] + 111 * (unsigned __int8)(MEMORY[0xA83ED4] + a1); /*0x64cd7e*/
    *(_DWORD *)v6 = *(_DWORD *)a5; /*0x64cd8b*/
    v6[4] = *(_BYTE *)(a5 + 4); /*0x64cd90*/
  }
}


// ==== 0x0064CDA0  ProcessNetworkMapEvent  this=-  sig=ida-proto ====
void __fastcall Network_ProcessMapEvent(int a1, int a2)
{
  int v2; // ebx
  _DWORD *v4; // eax
  int v5; // ebp
  int v6; // edi
  _BYTE *v7; // eax
  _BYTE *v8; // esi
  int v9; // eax
  int v10; // esi
  _DWORD *v11; // eax
  int v12; // edi
  int v13; // edi
  int v14; // ebp
  int v15; // ebx
  _DWORD *v16; // eax
  float *v17; // eax
  int v18; // eax
  _DWORD *v19; // ebx
  int v20; // edi
  int v21; // eax
  signed int v22; // ebp
  size_t v23; // eax
  _DWORD *v24; // esi
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // esi
  _DWORD *v29; // ebp
  _DWORD *v30; // eax
  int v31; // ecx
  _DWORD *v32; // eax
  int v33; // esi
  int v34; // edi
  int v35; // ebx
  int v36; // ebx
  double v37; // st7
  float v38; // eax
  float v39; // ecx
  float v40; // edx
  int v41; // edx
  _DWORD *v42; // esi
  int v43; // edi
  int v44; // ecx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  _DWORD *v48; // eax
  signed int v49; // ecx
  signed int v50; // eax
  int v51; // ecx
  int v52; // eax
  _DWORD *v53; // eax
  _BYTE *v54; // eax
  int v55; // ecx
  char v56; // dl
  char *v57; // eax
  _DWORD *v58; // eax
  int v59; // ecx
  int v60; // eax
  _WORD *v61; // edi
  _WORD *v62; // eax
  _DWORD *v63; // eax
  _BYTE *WaypointCoords; // eax
  int v65; // ecx
  char v66; // dl
  char *v67; // eax
  int k; // esi
  _DWORD *v69; // eax
  int v70; // edx
  int v71; // [esp+30h] [ebp-138h]
  char v72; // [esp+4Bh] [ebp-11Dh]
  _DWORD *v73; // [esp+4Ch] [ebp-11Ch] BYREF
  int v74; // [esp+50h] [ebp-118h]
  _DWORD *v75; // [esp+54h] [ebp-114h] BYREF
  _DWORD *v76; // [esp+58h] [ebp-110h] BYREF
  void **v77; // [esp+5Ch] [ebp-10Ch] BYREF
  void *Block; // [esp+60h] [ebp-108h]
  int v79; // [esp+64h] [ebp-104h]
  char v80; // [esp+69h] [ebp-FFh]
  int v81; // [esp+6Ch] [ebp-FCh]
  int v82; // [esp+70h] [ebp-F8h]
  int TileIndex; // [esp+74h] [ebp-F4h] BYREF
  int v84; // [esp+78h] [ebp-F0h]
  float v85; // [esp+7Ch] [ebp-ECh]
  float v86; // [esp+80h] [ebp-E8h]
  float v87; // [esp+84h] [ebp-E4h]
  int i; // [esp+88h] [ebp-E0h]
  void *Base; // [esp+8Ch] [ebp-DCh]
  size_t NumOfElements; // [esp+90h] [ebp-D8h]
  signed int v91; // [esp+94h] [ebp-D4h]
  int v92; // [esp+98h] [ebp-D0h]
  float v93; // [esp+9Ch] [ebp-CCh]
  void **v94; // [esp+A0h] [ebp-C8h] BYREF
  void *v95; // [esp+A4h] [ebp-C4h]
  int v96; // [esp+A8h] [ebp-C0h]
  int v97; // [esp+ACh] [ebp-BCh]
  int j; // [esp+B0h] [ebp-B8h]
  int v99; // [esp+B4h] [ebp-B4h]
  void **v100; // [esp+B8h] [ebp-B0h] BYREF
  void *v101; // [esp+BCh] [ebp-ACh]
  int v102; // [esp+C0h] [ebp-A8h]
  int v103; // [esp+C4h] [ebp-A4h]
  int v104; // [esp+C8h] [ebp-A0h]
  int v105; // [esp+CCh] [ebp-9Ch]
  float v106; // [esp+D0h] [ebp-98h] BYREF
  float v107; // [esp+D4h] [ebp-94h]
  float v108; // [esp+D8h] [ebp-90h]
  float v109; // [esp+DCh] [ebp-8Ch]
  float v110; // [esp+E0h] [ebp-88h]
  float v111; // [esp+E4h] [ebp-84h]
  float v112; // [esp+E8h] [ebp-80h] BYREF
  float v113; // [esp+ECh] [ebp-7Ch]
  float v114; // [esp+F0h] [ebp-78h]
  float v115; // [esp+F4h] [ebp-74h] BYREF
  float v116; // [esp+F8h] [ebp-70h]
  float v117; // [esp+FCh] [ebp-6Ch]
  _WORD v118[2]; // [esp+100h] [ebp-68h] BYREF
  int v119; // [esp+104h] [ebp-64h]
  int v120; // [esp+108h] [ebp-60h]
  _DWORD *v121; // [esp+10Ch] [ebp-5Ch]
  _DWORD *v122; // [esp+110h] [ebp-58h] BYREF
  int v123; // [esp+114h] [ebp-54h] BYREF
  char v124; // [esp+118h] [ebp-50h]
  int v125; // [esp+11Ch] [ebp-4Ch] BYREF
  char v126; // [esp+120h] [ebp-48h]
  int v127; // [esp+124h] [ebp-44h]
  int v128; // [esp+128h] [ebp-40h]
  int v129; // [esp+130h] [ebp-38h]
  _DWORD v130[3]; // [esp+138h] [ebp-30h] BYREF
  char v131[4]; // [esp+144h] [ebp-24h] BYREF
  char v132[4]; // [esp+148h] [ebp-20h] BYREF
  char v133[8]; // [esp+14Ch] [ebp-1Ch] BYREF
  char v134[8]; // [esp+154h] [ebp-14h] BYREF
  char v135[12]; // [esp+15Ch] [ebp-Ch] BYREF

  v2 = a1; /*0x64cdb2*/
  v84 = a1; /*0x64cdc0*/
  if ( MEMORY[0xA83EF3][111 * (unsigned __int8)(a1 + MEMORY[0xA83ED4])] == 11 ) /*0x64cdd3*/
  {
    v4 = (_DWORD *)Network_Process_6E7C20((char *)&MEMORY[0xA83EEF] + 111 * (unsigned __int8)(a1 + MEMORY[0xA83ED4])); /*0x64cde9*/
    if ( v4 ) /*0x64cdf0*/
    {
      if ( v4 != g_CellClassArray ) /*0x64cdfb*/
      {
        v73 = (_DWORD *)v4[9]; /*0x64ce0b*/
        if ( v73 != (_DWORD *)MEMORY[0xAC6640] ) /*0x64ce0f*/
        {
          ObjectVector::Construct(&v77, 0, 0); /*0x64ce2b*/
          v5 = v2 + a2; /*0x64ce30*/
          v77 = &vt_DynamicVectorClass_ObjectClass; /*0x64ce33*/
          v82 = 10; /*0x64ce3d*/
          v81 = 0; /*0x64ce45*/
          v6 = v2; /*0x64ce4d*/
          for ( i = v2 + a2; v6 < v5; ++v6 ) /*0x64ce53*/
          {
            v7 = BuildingLoadQueue::Find((_BYTE *)&MEMORY[0xA83EE3] + 111 * (unsigned __int8)(v6 + MEMORY[0xA83ED4])); /*0x64ce72*/
            v8 = v7; /*0x64ce77*/
            if ( v7 /*0x64cec3*/
              && (v7[20] & 4) != 0
              && (char)v7[1668] < 0
              && (v81 < v79
               || (v80 || !v79)
               && v82 > 0
               && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v77[2])(&v77, v82 + v79, 0)) )
            {
              v9 = v81++; /*0x64cece*/
              *((_DWORD *)Block + v9) = v8; /*0x64ced9*/
            }
          }
          v10 = 0; /*0x64cee9*/
          if ( v81 > 0 ) /*0x64ceed*/
          {
            v11 = (_DWORD *)Network_Process_5F6790(&v106, &v77); /*0x64cefe*/
            v130[0] = *v11; /*0x64cf05*/
            v130[1] = v11[1]; /*0x64cf0f*/
            v130[2] = v11[2]; /*0x64cf1d*/
            v12 = Network_Process_5F6810(&v77, v130); /*0x64cf30*/
            v76 = (_DWORD *)v12; /*0x64cf38*/
            Base = 0; /*0x64cf3c*/
            NumOfElements = 0; /*0x64cf40*/
            v91 = 0; /*0x64cf44*/
            LOBYTE(v92) = 0; /*0x64cf48*/
            v93 = 0.0; /*0x64cf4d*/
            if ( v81 > 0 ) /*0x64cf51*/
            {
              do /*0x64d029*/
              {
                v13 = v76[39]; /*0x64cf67*/
                v14 = v76[40]; /*0x64cf6b*/
                v15 = v76[41]; /*0x64cf6e*/
                v16 = (_DWORD *)(*(int (__thiscall **)(_DWORD, float *))(**((_DWORD **)Block + v10) + 72))( /*0x64cf79*/
                                  *((_DWORD *)Block + v10),
                                  &v112);
                v17 = (float *)Coord::Subtract(&v115, *v16 - v13, v16[1] - v14, v16[2] - v15); /*0x64cf94*/
                v106 = *v17; /*0x64cf9b*/
                v107 = v17[1]; /*0x64cfac*/
                v108 = v17[2]; /*0x64cfb6*/
                v18 = Coord::Length((int *)&v106); /*0x64cfbd*/
                v19 = (char *)Block + 4 * v10; /*0x64cfcc*/
                v20 = v10 + 1000 * v18; /*0x64cfd6*/
                v21 = v91; /*0x64cfdc*/
                if ( (int)(NumOfElements + 1) <= v91 ) /*0x64cfe2*/
                  goto LABEL_22; /*0x64cfe2*/
                if ( !v91 ) /*0x64cfe6*/
                  v21 = 10; /*0x64cfe8*/
                if ( (unsigned __int8)Network_Process_6525A0(v21) ) /*0x64cff2*/
                {
LABEL_22:
                  *((_DWORD *)Base + 2 * NumOfElements) = v20; /*0x64d003*/
                  *((_DWORD *)Base + 2 * NumOfElements + 1) = *v19; /*0x64d010*/
                  LOBYTE(v92) = 0; /*0x64d019*/
                  ++NumOfElements; /*0x64d01e*/
                }
                ++v10; /*0x64d026*/
              }
              while ( v10 < v81 ); /*0x64d029*/
              v2 = v84; /*0x64d02f*/
              v12 = (int)v76; /*0x64d033*/
            }
            v81 = 0; /*0x64d03f*/
            if ( Block && v80 ) /*0x64d04b*/
            {
              __3_YAXPAX_Z(Block); /*0x64d04e*/
              Block = 0; /*0x64d056*/
            }
            v80 = 0; /*0x64d063*/
            v79 = 0; /*0x64d068*/
            VectorClass::CellConstructor(&v100, 0, 0); /*0x64d06c*/
            v100 = &vt_DynamicVectorClass_Cell; /*0x64d07c*/
            v105 = 10; /*0x64d087*/
            v104 = 0; /*0x64d08e*/
            BoolVector::Construct(0, 0); /*0x64d095*/
            v99 = 10; /*0x64d09a*/
            v22 = 0; /*0x64d09e*/
            v23 = NumOfElements; /*0x64d0a0*/
            v94 = &vt_DynamicVectorClass_bool; /*0x64d0a4*/
            for ( j = 0; v22 < (int)NumOfElements; ++v22 ) /*0x64d0b2*/
            {
              if ( !(_BYTE)v92 ) /*0x64d0c2*/
              {
                qsort(Base, v23, 8u, sub_652630); /*0x64d0d1*/
                v93 = 0.0; /*0x64d0d9*/
                LOBYTE(v92) = 1; /*0x64d0dd*/
              }
              v24 = (char *)Base + 8 * v22 + 4; /*0x64d0f0*/
              if ( v81 < v79 /*0x64d117*/
                || (v80 || !v79)
                && v82 > 0
                && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v77[2])(&v77, v82 + v79, 0) )
              {
                v25 = v81++; /*0x64d126*/
                *((_DWORD *)Block + v25) = *v24; /*0x64d12f*/
              }
              if ( v104 < v102 /*0x64d171*/
                || (BYTE1(v103) || !v102)
                && v105 > 0
                && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v100[2])(&v100, v105 + v102, 0) )
              {
                v26 = v104++; /*0x64d186*/
                *((_DWORD *)v101 + v26) = v73; /*0x64d194*/
              }
              if ( j < v96 /*0x64d1c4*/
                || (BYTE1(v97) || !v96)
                && v99 > 0
                && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v94[2])(&v94, v99 + v96, 0) )
              {
                v27 = j++; /*0x64d1cf*/
                *((_BYTE *)v95 + v27) = 0; /*0x64d1da*/
              }
              v23 = NumOfElements; /*0x64d1de*/
            }
            v28 = 0; /*0x64d1fc*/
            v120 = *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v12 + 440))(v12, &TileIndex); /*0x64d202*/
            v119 = 0; /*0x64d20b*/
            if ( v81 > 0 ) /*0x64d212*/
            {
              while ( 1 ) /*0x64d222*/
              {
                v29 = (_DWORD *)*((_DWORD *)Block + v28); /*0x64d222*/
                v76 = v73; /*0x64d225*/
                if ( !v28 ) /*0x64d229*/
                {
                  v30 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v73); /*0x64d235*/
                  v31 = v30[80]; /*0x64d23a*/
                  BYTE1(v31) |= 0x80u; /*0x64d245*/
                  v30[80] = v31; /*0x64d248*/
                  *(_BYTE *)v95 = 1; /*0x64d24e*/
                  goto LABEL_84; /*0x64d251*/
                }
                if ( !*((_BYTE *)v95 + v28) ) /*0x64d25a*/
                  break; /*0x64d25a*/
LABEL_84:
                v60 = v81; /*0x64d76b*/
                TileIndex = ++v28; /*0x64d772*/
                if ( v28 < v81 ) /*0x64d776*/
                {
                  do /*0x64d889*/
                  {
                    if ( !*((_BYTE *)v95 + v28) ) /*0x64d780*/
                    {
                      v61 = (_WORD *)(*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)Block + v28) + 440))( /*0x64d7a4*/
                                       *((_DWORD *)Block + v28),
                                       v131);
                      v62 = (_WORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v29 + 440))(v29, v132); /*0x64d7b0*/
                      if ( *v62 == *v61 && v62[1] == v61[1] ) /*0x64d7ca*/
                      {
                        v63 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v76); /*0x64d7da*/
                        ScriptAction::GetWaypointCoords(&v125, v63); /*0x64d7e7*/
                        WaypointCoords = ScriptAction::GetWaypointCoords(v134, *((_DWORD **)Block + v28)); /*0x64d7fb*/
                        v128 = *(_DWORD *)WaypointCoords; /*0x64d802*/
                        v65 = v2; /*0x64d809*/
                        if ( v2 <= i ) /*0x64d814*/
                        {
                          while ( WaypointCoords[4] != MEMORY[0xA83EE7][111 * (unsigned __int8)(v65 + MEMORY[0xA83ED4])] /*0x64d841*/
                               || v128 != *(int *)((char *)&MEMORY[0xA83EE3]
                                                 + 111 * (unsigned __int8)(v65 + MEMORY[0xA83ED4])) )
                          {
                            if ( ++v65 > i ) /*0x64d84a*/
                              goto LABEL_94; /*0x64d84a*/
                          }
                          v66 = v126; /*0x64d863*/
                          v67 = (char *)&MEMORY[0xA83EEF] + 111 * (unsigned __int8)(v65 + MEMORY[0xA83ED4]); /*0x64d86a*/
                          *(_DWORD *)v67 = v125; /*0x64d871*/
                          v67[4] = v66; /*0x64d873*/
LABEL_94:
                          v2 = v84; /*0x64d876*/
                        }
                        *((_BYTE *)v95 + v28) = 1; /*0x64d87e*/
                      }
                    }
                    v60 = v81; /*0x64d882*/
                    ++v28; /*0x64d886*/
                  }
                  while ( v28 < v81 ); /*0x64d889*/
                  v28 = TileIndex; /*0x64d88f*/
                }
                v119 = v28; /*0x64d895*/
                if ( v28 >= v60 ) /*0x64d89c*/
                  goto LABEL_99; /*0x64d89c*/
              }
              v122 = v73; /*0x64d26b*/
              v32 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *, _DWORD))(*v29 + 76))(v29, v135, 0); /*0x64d27a*/
              v33 = *v32 / 256; /*0x64d2a4*/
              v34 = v32[1] / 256; /*0x64d2a7*/
              v35 = (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v73) + 80) >> 8) & 1; /*0x64d2c2*/
              v36 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v73) + 283) + 4 * v35; /*0x64d2df*/
              v112 = (double)(__int16)v73 + 0.5; /*0x64d2fe*/
              v114 = 0.0; /*0x64d30b*/
              v74 = (__int16)v33 - (__int16)v120; /*0x64d316*/
              v87 = 0.0; /*0x64d31a*/
              v113 = (double)SHIWORD(v73) + 0.5; /*0x64d330*/
              v85 = (float)v74; /*0x64d33e*/
              v74 = (__int16)v34 - SHIWORD(v120); /*0x64d344*/
              v86 = (float)v74; /*0x64d34c*/
              v37 = Math::Sqrt(v86 * v86 + v85 * v85); /*0x64d365*/
              if ( v37 == 0.0 ) /*0x64d378*/
              {
                v38 = v85; /*0x64d3c6*/
                v39 = v86; /*0x64d3ca*/
                v40 = v87; /*0x64d3ce*/
                v115 = v85; /*0x64d3d2*/
                v116 = v86; /*0x64d3db*/
              }
              else
              {
                v106 = v85 / v37; /*0x64d380*/
                v38 = v106; /*0x64d38d*/
                v115 = v106; /*0x64d394*/
                v107 = v86 / v37; /*0x64d39b*/
                v39 = v107; /*0x64d3a2*/
                v116 = v107; /*0x64d3af*/
                v108 = 0.0 / v37; /*0x64d3b6*/
                v40 = v108; /*0x64d3bd*/
              }
              v117 = v40; /*0x64d3e2*/
              v87 = v40; /*0x64d3e9*/
              v41 = *v29; /*0x64d3ed*/
              v86 = v39; /*0x64d3f0*/
              v85 = v38; /*0x64d3f6*/
              v74 = 0; /*0x64d3fa*/
              v72 = 0; /*0x64d402*/
              v127 = (*(int (__thiscall **)(_DWORD *))(v41 + 132))(v29); /*0x64d40d*/
              TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v73, *(_DWORD *)(v127 + 1460), 1); /*0x64d42c*/
              while ( 1 ) /*0x64d43e*/
              {
                v109 = v115 + v112; /*0x64d43e*/
                v112 = v109; /*0x64d45a*/
                v110 = v116 + v113; /*0x64d461*/
                v113 = v110; /*0x64d47d*/
                v111 = v117 + v114; /*0x64d484*/
                v114 = v111; /*0x64d499*/
                LOWORD(v121) = Math::RoundToInt(v109); /*0x64d4ac*/
                HIWORD(v121) = Math::RoundToInt(v110); /*0x64d4b9*/
                v75 = v121; /*0x64d4d2*/
                v42 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v75); /*0x64d4df*/
                if ( !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v75, 1) ) /*0x64d4f0*/
                  goto LABEL_75; /*0x64d4f0*/
                v43 = MapClass::GetTileIndex( /*0x64d520*/
                        &MEMORY[0x87F7E8],
                        (__int16 *)&v75,
                        *(_DWORD *)(v127 + 1460),
                        BYTE1(v42[80]) & 1);
                v44 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int, int, _DWORD, int))(*v29 + 428))( /*0x64d535*/
                        v29,
                        v42,
                        -1,
                        v36,
                        0,
                        1);
                if ( v43 != TileIndex ) /*0x64d53b*/
                  goto LABEL_68; /*0x64d53b*/
                v45 = v42[80]; /*0x64d53d*/
                if ( (v45 & 0x8000) == 0 ) /*0x64d546*/
                  break; /*0x64d546*/
                v122 = v75; /*0x64d54c*/
LABEL_69:
                if ( ++v74 >= 6 ) /*0x64d5b3*/
                {
                  v48 = &v122; /*0x64d5b9*/
                  goto LABEL_77; /*0x64d5c0*/
                }
              }
              if ( (v45 & 0x100) != 0 ) /*0x64d55d*/
              {
                v46 = v36 - *((char *)v42 + 283) - 4; /*0x64d56d*/
                if ( (int)((HIDWORD(v46) ^ v46) - HIDWORD(v46)) > 2 ) /*0x64d575*/
                  goto LABEL_75; /*0x64d575*/
              }
              if ( (v42[80] & 0x100) == 0 ) /*0x64d57d*/
              {
                v47 = v36 - *((char *)v42 + 283); /*0x64d58a*/
                if ( (int)((HIDWORD(v47) ^ v47) - HIDWORD(v47)) > 2 ) /*0x64d592*/
                  goto LABEL_75; /*0x64d592*/
              }
              if ( v44 < 4 || v44 == 6 ) /*0x64d5a0*/
              {
                if ( v72 ) /*0x64d5cb*/
                {
                  v49 = abs32((__int16)v75 - (__int16)v73); /*0x64d5e7*/
                  v50 = abs32(SHIWORD(v75) - SHIWORD(v73)); /*0x64d5f3*/
                  if ( v49 > v50 ) /*0x64d5f7*/
                    v50 = v49; /*0x64d5f9*/
                  TileIndex = v50 + 3; /*0x64d600*/
                  v51 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v73) + 80) >> 8; /*0x64d61d*/
                  LOBYTE(v51) = v51 & 1; /*0x64d620*/
                  v71 = v51; /*0x64d623*/
                  v52 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v75) + 80) >> 8; /*0x64d639*/
                  LOBYTE(v52) = v52 & 1; /*0x64d63c*/
                  Pathfinding::CalcDistance( /*0x64d64b*/
                    (int)MEMORY[0x87E8B8],
                    (__int16 *)&v75,
                    (__int16 *)&v73,
                    (int)v29,
                    v52,
                    v71,
                    -1);
LABEL_75:
                  v48 = &v122; /*0x64d650*/
                  goto LABEL_77; /*0x64d657*/
                }
                v118[0] = Math::RoundToInt(v109); /*0x64d66c*/
                v118[1] = Math::RoundToInt(v110); /*0x64d679*/
                v48 = v118; /*0x64d681*/
LABEL_77:
                v28 = v119; /*0x64d688*/
                v76 = (_DWORD *)*v48; /*0x64d698*/
                *((_DWORD *)v101 + v119) = v76; /*0x64d6a0*/
                v53 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v76); /*0x64d6a9*/
                ScriptAction::GetWaypointCoords(&v123, v53); /*0x64d6b6*/
                v54 = ScriptAction::GetWaypointCoords(v133, v29); /*0x64d6c3*/
                v129 = *(_DWORD *)v54; /*0x64d6ca*/
                v55 = v84; /*0x64d6d1*/
                if ( v84 <= i ) /*0x64d6de*/
                {
                  while ( v54[4] != MEMORY[0xA83EE7][111 * (unsigned __int8)(v55 + MEMORY[0xA83ED4])] /*0x64d70b*/
                       || v129 != *(int *)((char *)&MEMORY[0xA83EE3] + 111 * (unsigned __int8)(v55 + MEMORY[0xA83ED4])) )
                  {
                    if ( ++v55 > i ) /*0x64d714*/
                      goto LABEL_83; /*0x64d714*/
                  }
                  v56 = v124; /*0x64d72d*/
                  v57 = (char *)&MEMORY[0xA83EEF] + 111 * (unsigned __int8)(v55 + MEMORY[0xA83ED4]); /*0x64d734*/
                  *(_DWORD *)v57 = v123; /*0x64d73b*/
                  v57[4] = v56; /*0x64d73d*/
                }
LABEL_83:
                v58 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v76); /*0x64d740*/
                v59 = v58[80]; /*0x64d74f*/
                v2 = v84; /*0x64d75a*/
                BYTE1(v59) |= 0x80u; /*0x64d75e*/
                v58[80] = v59; /*0x64d761*/
                *((_BYTE *)v95 + v28) = 1; /*0x64d767*/
                goto LABEL_84; /*0x64d767*/
              }
LABEL_68:
              v72 = 1; /*0x64d5a2*/
              goto LABEL_69; /*0x64d5a2*/
            }
LABEL_99:
            for ( k = 0; k < v104; v69[80] = v70 ) /*0x64d8af*/
            {
              v69 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v101 + 2 * k); /*0x64d8c1*/
              v70 = v69[80]; /*0x64d8c6*/
              BYTE1(v70) &= ~0x80u; /*0x64d8d1*/
              ++k; /*0x64d8d4*/
            }
            v94 = &vt_VectorClass_bool; /*0x64d8e6*/
            if ( v95 && BYTE1(v97) ) /*0x64d8f8*/
            {
              __3_YAXPAX_Z(v95); /*0x64d8fb*/
              v95 = 0; /*0x64d903*/
            }
            BYTE1(v97) = 0; /*0x64d90e*/
            v96 = 0; /*0x64d915*/
            v100 = &vt_VectorClass_Cell; /*0x64d919*/
            if ( v101 && BYTE1(v103) ) /*0x64d92f*/
            {
              __3_YAXPAX_Z(v101); /*0x64d932*/
              v101 = 0; /*0x64d93a*/
            }
            BYTE1(v103) = 0; /*0x64d945*/
            v102 = 0; /*0x64d94e*/
            __3_YAXPAX_Z(Base); /*0x64d955*/
          }
          v77 = &vt_VectorClass_ObjectClass; /*0x64d963*/
          if ( Block ) /*0x64d96d*/
          {
            if ( v80 ) /*0x64d975*/
              __3_YAXPAX_Z(Block); /*0x64d978*/
          }
        }
      }
    }
  }
}


// ==== 0x0064D990  ObjectClass::Network_Process_64D990  this=ObjectClass  sig=csp ====
void sub_64D990()
{
  int v0; // edx
  int v1; // eax

  v0 = dword_8B41F8; /*0x64d990*/
  if ( dword_8B41F8 ) /*0x64d999*/
  {
    v1 = word_8B41FC; /*0x64d9a1*/
    do /*0x64d9d5*/
    {
      if ( (unk_8B4205[111 * v1] & 1) == 0 && (int)MEMORY[0xA8ED84] <= *(int *)((char *)&unk_8B4207 + 111 * v1) ) /*0x64d9bd*/
        break; /*0x64d9bd*/
      if ( !v0 ) /*0x64d9c1*/
        break; /*0x64d9c1*/
      v1 = ((_WORD)v1 + 1) & 0x3FFF; /*0x64d9c4*/
      --v0; /*0x64d9c9*/
      word_8B41FC = v1; /*0x64d9ca*/
      dword_8B41F8 = v0; /*0x64d9cf*/
    }
    while ( v0 ); /*0x64d9d5*/
  }
}


// ==== 0x0064D9E0  ObjectClass::Network_Process_64D9E0  this=ObjectClass  sig=csp ====
int sub_64D9E0()
{
  int result; // eax
  int v1; // edi
  __int16 v2; // cx
  int v3; // esi
  int i; // esi
  int Buffer; // [esp+8h] [ebp-4h] BYREF

  if ( MEMORY[0xA8ED84] || (result = MEMORY[0xA8B238][0]) == 0 ) /*0x64d9f4*/
  {
    v1 = 0; /*0x64da00*/
    Buffer = 0; /*0x64da06*/
    if ( dword_8B41F8 > 0 ) /*0x64da0a*/
    {
      v2 = word_8B41FC; /*0x64da0c*/
      v3 = dword_8B41F8; /*0x64da13*/
      do /*0x64da37*/
      {
        if ( MEMORY[0xA8ED84] == *(wchar_t **)((char *)&unk_8B4207 + 111 * (v2 & 0x3FFF)) /*0x64da32*/
          && (unk_8B4205[111 * (v2 & 0x3FFF)] & 1) == 0 )
        {
          ++v1; /*0x64da34*/
        }
        ++v2; /*0x64da35*/
        --v3; /*0x64da36*/
      }
      while ( v3 ); /*0x64da37*/
      Buffer = v1; /*0x64da39*/
    }
    FileClass::Write(MEMORY[0xA8D58C], &Buffer, 4u); /*0x64da4a*/
    result = dword_8B41F8; /*0x64da4f*/
    for ( i = 0; i < dword_8B41F8; ++i ) /*0x64da59*/
    {
      if ( MEMORY[0xA8ED84] == *(wchar_t **)((char *)&unk_8B4207 + 111 * (((_WORD)word_8B41FC + (_WORD)i) & 0x3FFF)) /*0x64da85*/
        && (unk_8B4205[111 * (((_WORD)word_8B41FC + (_WORD)i) & 0x3FFF)] & 1) == 0 )
      {
        FileClass::Write(MEMORY[0xA8D58C], &unk_8B4204[111 * (((_WORD)word_8B41FC + (_WORD)i) & 0x3FFF)], 0x6Fu); /*0x64da96*/
        --Buffer; /*0x64da9b*/
      }
      result = dword_8B41F8; /*0x64da9f*/
    }
  }
  return result; /*0x64daa9*/
}


// ==== 0x0064DAB0  ObjectClass::ComputeNetworkFrameCRC  this=ObjectClass  sig=csp ====
int ComputeNetworkFrameCRC()
{
  unsigned int v0; // eax
  int v1; // esi
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int i; // ebx
  int v6; // edi
  int v7; // ebp
  int v8; // esi
  _DWORD *Value; // eax
  int j; // esi
  int v11; // eax
  int v12; // edi
  int v13; // ebx
  int v14; // edi
  HouseClass *v15; // edx
  int v16; // ecx
  int *v17; // ebp
  int v18; // edi
  bool v19; // cc
  _DWORD *v20; // esi
  int v21; // edi
  int v22; // ebx
  int v23; // edx
  int v24; // eax
  int k; // ebp
  _DWORD *v26; // esi
  int v27; // edi
  int v28; // ebx
  int v29; // edx
  int v31; // [esp+10h] [ebp-14h] BYREF
  _DWORD v32[2]; // [esp+14h] [ebp-10h] BYREF
  int v33; // [esp+1Ch] [ebp-8h]
  int v34; // [esp+20h] [ebp-4h]

  v0 = 0; /*0x64dab9*/
  v1 = 0; /*0x64dabe*/
  for ( *(_DWORD *)MEMORY[0xAC51FC] = 0; v1 < MEMORY[0xA83DF8]; *(_DWORD *)MEMORY[0xAC51FC] = v0 ) /*0x64dac8*/
  {
    v2 = *((_DWORD *)MEMORY[0xA83DEC] + v1); /*0x64dad3*/
    v3 = *(_DWORD *)(v2 + 156); /*0x64dadc*/
    v4 = *(_DWORD *)(v2 + 160); /*0x64dae2*/
    v34 = *(_DWORD *)(v2 + 164); /*0x64daf3*/
    v0 = v3 / 10 /*0x64db41*/
       + ((v4 / 10) << 16)
       + (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)(v2 + 904), &v31) >> 7) + 1) >> 1)
       + (*(_DWORD *)MEMORY[0xAC51FC] >> 31)
       + 2 * *(_DWORD *)MEMORY[0xAC51FC];
    ++v1; /*0x64db49*/
  }
  for ( i = 0; i < MEMORY[0x8B4118]; *(_DWORD *)MEMORY[0xAC51FC] = v0 ) /*0x64db61*/
  {
    v6 = *((_DWORD *)MEMORY[0x8B410C] + i); /*0x64db6d*/
    v7 = *(_DWORD *)(v6 + 156); /*0x64db76*/
    v33 = *(_DWORD *)(v6 + 160); /*0x64db7f*/
    v34 = *(_DWORD *)(v6 + 164); /*0x64db8a*/
    v8 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)(v6 + 904), &v31) >> 7) + 1) >> 1); /*0x64dbad*/
    Value = ProgressTimer::GetValue((_WORD *)(v6 + 928), v32); /*0x64dbb3*/
    v0 = (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1) /*0x64dc09*/
       + v8
       + ((v33 / 10) << 16)
       + v7 / 10
       + (*(_DWORD *)MEMORY[0xAC51FC] >> 31)
       + 2 * *(_DWORD *)MEMORY[0xAC51FC];
    ++i; /*0x64dc0b*/
  }
  for ( j = 0; j < MEMORY[0xA8EB50]; *(_DWORD *)MEMORY[0xAC51FC] = v0 ) /*0x64dc23*/
  {
    v11 = *((_DWORD *)MEMORY[0xA8EB44] + j); /*0x64dc2f*/
    v12 = *(_DWORD *)(v11 + 156); /*0x64dc38*/
    v13 = *(_DWORD *)(v11 + 160); /*0x64dc3e*/
    v34 = *(_DWORD *)(v11 + 164); /*0x64dc48*/
    v0 = v12 / 10 /*0x64dc9d*/
       + ((v13 / 10) << 16)
       + (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)(v11 + 904), v32) >> 7) + 1) >> 1)
       + (*(_DWORD *)MEMORY[0xAC51FC] >> 31)
       + 2 * *(_DWORD *)MEMORY[0xAC51FC];
    ++j; /*0x64dca5*/
  }
  v14 = HouseClass_Count; /*0x64dcb3*/
  if ( HouseClass_Count > 0 ) /*0x64dcbb*/
  {
    v15 = HouseClass_Array; /*0x64dcbd*/
    do /*0x64dce2*/
    {
      v16 = *(_DWORD *)v15->__pad_0; /*0x64dcc3*/
      v15 = (HouseClass *)((char *)v15 + 4); /*0x64dcc7*/
      v0 = *(unsigned __int8 *)(v16 + 577) + (v0 >> 31) + 2 * v0; /*0x64dcda*/
      --v14; /*0x64dcdc*/
      *(_DWORD *)MEMORY[0xAC51FC] = v0; /*0x64dcdd*/
    }
    while ( v14 ); /*0x64dce2*/
  }
  v17 = MEMORY[0x8A0370]; /*0x64dce4*/
  do /*0x64dd92*/
  {
    v18 = 0; /*0x64dcec*/
    v19 = *v17 <= 0; /*0x64dcee*/
    v31 = 0; /*0x64dcf0*/
    if ( !v19 ) /*0x64dcf4*/
    {
      do /*0x64dd83*/
      {
        v20 = *(_DWORD **)(*(v17 - 3) + 4 * v18); /*0x64dcfd*/
        if ( (*(int (__thiscall **)(_DWORD *))(*v20 + 44))(v20) != 4 /*0x64dd19*/
          || (*(int (__stdcall **)(_DWORD *))(v20[1] + 16))(v20 + 1) != -2 )
        {
          v21 = v20[39]; /*0x64dd23*/
          v22 = v20[40]; /*0x64dd25*/
          v23 = *v20; /*0x64dd2b*/
          v34 = v20[41]; /*0x64dd2d*/
          v24 = v21 / 10 + ((v22 / 10) << 16) + (*(int (__thiscall **)(_DWORD *))(v23 + 44))(v20); /*0x64dd5d*/
          v18 = v31; /*0x64dd67*/
          *(_DWORD *)MEMORY[0xAC51FC] = v24 + (*(_DWORD *)MEMORY[0xAC51FC] >> 31) + 2 * *(_DWORD *)MEMORY[0xAC51FC]; /*0x64dd73*/
        }
        v19 = ++v18 < *v17; /*0x64dd7d*/
        v31 = v18; /*0x64dd7f*/
      }
      while ( v19 ); /*0x64dd83*/
    }
    v17 += 6; /*0x64dd89*/
  }
  while ( (int)v17 < (int)&MEMORY[0x8A03E8] ); /*0x64dd92*/
  for ( k = 0; k < MEMORY[0x87F788]; ++k ) /*0x64dda1*/
  {
    v26 = (_DWORD *)*((_DWORD *)MEMORY[0x87F77C] + k); /*0x64ddad*/
    if ( (*(int (__thiscall **)(_DWORD *))(*v26 + 44))(v26) != 4 /*0x64ddc9*/
      || (*(int (__stdcall **)(_DWORD *))(v26[1] + 16))(v26 + 1) != -2 )
    {
      v27 = v26[39]; /*0x64ddd3*/
      v28 = v26[40]; /*0x64ddd5*/
      v29 = *v26; /*0x64dddb*/
      v34 = v26[41]; /*0x64dddd*/
      *(_DWORD *)MEMORY[0xAC51FC] = v27 / 10 /*0x64de1f*/
                                  + ((v28 / 10) << 16)
                                  + (*(int (__thiscall **)(_DWORD *))(v29 + 44))(v26)
                                  + (*(_DWORD *)MEMORY[0xAC51FC] >> 31)
                                  + 2 * *(_DWORD *)MEMORY[0xAC51FC];
    }
  }
  *(_DWORD *)MEMORY[0xAC51FC] = Random::State((_DWORD *)MEMORY[0xA8B230] + 134) /*0x64de54*/
                              + (*(_DWORD *)MEMORY[0xAC51FC] >> 31)
                              + 2 * *(_DWORD *)MEMORY[0xAC51FC];
  return AllocateTriggerLog((int)MEMORY[0xA8ED84] % 256); /*0x64de75*/
}


// ==== 0x0064DE80  ComputeHash  this=-  sig=csp ====
int __fastcall Hash_Compute(_DWORD *a1, int a2)
{
  int result; // eax

  result = a2 + (*a1 >> 31) + 2 * *a1; /*0x64de8c*/
  *a1 = result; /*0x64de8e*/
  return result; /*0x64de8b*/
}


// ==== 0x0064DEA0  Multiplay::LogToSYNC_NOMPDEBUG  this=Multiplay  sig=csp ====
void __thiscall Multiplay::LogToSYNC_NOMPDEBUG(unsigned __int8 *this)
{
  FILE *v1; // eax
  MouseClass *v2; // esi
  char *ModuleVersion; // eax
  char *ModuleInternalVersion; // eax
  CellStruct *v5; // eax
  char *Name; // eax
  unsigned int v7; // eax
  int i; // edi
  _DWORD *v9; // eax
  char *v10; // edi
  CellStruct *v11; // ebp
  int *v12; // edi
  IUnknown *v14; // eax
  int j; // ebp
  int v15; // edi
  char *v16; // eax
  char *v17; // ecx
  int v18; // ebp
  int v19; // eax
  _DWORD *v20; // edi
  int v21; // ebp
  _DWORD *Value; // eax
  int *v23; // ebp
  CellStruct **v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // edx
  void *v28; // eax
  int *v29; // ebp
  ParticleSystemClass *v30; // edx
  int v31; // eax
  char *v32; // edx
  int v33; // eax
  void *v34; // eax
  _DWORD *v35; // eax
  int v36; // ebx
  int v37; // ebp
  int v38; // eax
  int v39; // eax
  CellStruct **v40; // eax
  char *v41; // ecx
  int v42; // ebp
  int v43; // eax
  _DWORD *v44; // edi
  int v45; // ebp
  int *v46; // ebp
  ParticleSystemClass **v47; // eax
  int v48; // edx
  int v49; // eax
  int v50; // edx
  void *v51; // eax
  int *v52; // ebp
  CellStruct *v54; // edx
  int eax35; // eax
  void *v55; // eax
  int v56; // ebp
  int v57; // ebx
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  CellStruct **v63; // eax
  char *v64; // ecx
  int v65; // ebp
  int v66; // eax
  _DWORD *v67; // edi
  int v68; // ebp
  int v69; // ecx
  int *v70; // ebp
  CellStruct **v71; // eax
  int v72; // edx
  void *v73; // eax
  int v74; // ebp
  int v75; // eax
  int v76; // eax
  CellStruct **v77; // eax
  char *v78; // ecx
  int v79; // ebp
  int v80; // eax
  _DWORD *v81; // edi
  int v82; // ebp
  int v83; // ecx
  int *v84; // ebp
  CellStruct **v85; // eax
  int v86; // edx
  void *v87; // eax
  int v88; // ebp
  int v89; // eax
  int v90; // eax
  CellStruct **v91; // eax
  char *v92; // ebp
  _DWORD *v93; // edi
  int v94; // ebx
  int v95; // edx
  int v96; // eax
  int v97; // ebx
  int v98; // eax
  int v99; // eax
  void *v100; // eax
  char *v101; // eax
  void *v102; // eax
  char *v103; // eax
  int v104; // eax
  IUnknown *v105; // ecx
  char *v106; // eax
  _DWORD *v107; // edi
  CellStruct *v109; // ebx
  int edx78; // edx
  int v110; // eax
  int v111; // ebx
  int v112; // eax
  int v113; // ebx
  int v114; // eax
  int v115; // ebx
  int v116; // eax
  int v117; // ebx
  int v118; // eax
  int v119; // ebx
  int v120; // eax
  int v121; // ebx
  int v122; // eax
  int v123; // ebx
  int v124; // eax
  int v125; // ebx
  int v126; // eax
  int v127; // ebx
  int v128; // eax
  int v129; // eax
  IUnknown *v130; // ecx
  unsigned __int8 *v131; // edi
  _DWORD *v132; // eax
  void *v133; // ebp
  CellStruct *mm; // edi
  _DWORD *v135; // eax
  void *v136; // ebp
  CellStruct *nn; // edi
  _DWORD *v138; // eax
  void *v139; // ebp
  CellStruct *i1; // edi
  _DWORD *v141; // eax
  void *v142; // ebp
  CellStruct *i2; // edi
  _DWORD *v144; // eax
  void *v145; // ebp
  CellStruct *i3; // edi
  _DWORD *v147; // eax
  void *v148; // ebp
  CellStruct *i4; // edi
  _DWORD *v150; // eax
  void *v151; // ebp
  CellStruct *i5; // edi
  _DWORD *v153; // eax
  void *v154; // ebp
  CellStruct *i6; // edi
  _DWORD *v156; // eax
  void *v157; // ebp
  CellStruct *i7; // edi
  _DWORD *v159; // eax
  void *v160; // ebp
  CellStruct *i8; // edi
  _DWORD *v162; // eax
  void *v163; // ebp
  CellStruct *i9; // ebx
  _DWORD *v165; // edi
  _DWORD *v166; // eax
  void *v167; // ebp
  CellStruct *i10; // edi
  _DWORD *v169; // eax
  void *v170; // ebp
  CellStruct *i11; // edi
  _DWORD *v172; // eax
  void *v173; // ebp
  CellStruct *i12; // edi
  _DWORD *v175; // eax
  void *v176; // ebp
  CellStruct *i13; // edi
  _DWORD *v178; // eax
  void *v179; // ebp
  CellStruct *i14; // edi
  _DWORD *v181; // eax
  void *v182; // ebp
  CellStruct *i15; // edi
  _DWORD *v184; // eax
  void *v185; // ebp
  CellStruct *i16; // edi
  _DWORD *v187; // eax
  void *v188; // ebp
  CellStruct *i17; // edi
  _DWORD *v190; // eax
  void *v191; // ebp
  CellStruct *i18; // edi
  _DWORD *v193; // eax
  void *v194; // ebp
  CellStruct *i19; // edi
  _DWORD *v196; // eax
  void *v197; // ebp
  CellStruct *i20; // edi
  _DWORD *v199; // eax
  void *v200; // ebp
  CellStruct *i21; // edi
  _DWORD *v202; // eax
  void *v203; // ebp
  CellStruct *i22; // edi
  _DWORD *v205; // eax
  void *v206; // ebp
  CellStruct *i23; // edi
  _DWORD *v208; // eax
  void *v209; // ebp
  CellStruct *i24; // edi
  _DWORD *v211; // eax
  void *v212; // ebp
  CellStruct *i25; // edi
  _DWORD *v214; // eax
  void *v215; // ebp
  CellStruct *i26; // edi
  _DWORD *v217; // eax
  void *v218; // ebp
  CellStruct *i27; // edi
  _DWORD *v220; // eax
  void *v221; // ebp
  CellStruct *i28; // edi
  _DWORD *v223; // eax
  void *v224; // ebp
  CellStruct *i29; // edi
  _DWORD *v226; // eax
  void *v227; // ebp
  CellStruct *i30; // edi
  _DWORD *v229; // eax
  void *v230; // ebp
  CellStruct *i31; // edi
  _DWORD *v232; // eax
  void *v233; // ebp
  CellStruct *i32; // edi
  _DWORD *v235; // eax
  void *v236; // ebp
  CellStruct *i33; // edi
  _DWORD *v238; // eax
  void *v239; // ebp
  CellStruct *i34; // edi
  _DWORD *v241; // eax
  void *v242; // ebp
  CellStruct *i35; // edi
  _DWORD *v244; // eax
  void *v245; // ebp
  CellStruct *i36; // edi
  _DWORD *v247; // eax
  void *v248; // ebp
  CellStruct *i37; // edi
  _DWORD *v250; // eax
  void *v251; // ebp
  CellStruct *i38; // edi
  _DWORD *v253; // eax
  void *v254; // ebp
  CellStruct *i39; // edi
  _DWORD *v256; // eax
  void *v257; // ebp
  CellStruct *i40; // edi
  _DWORD *v259; // eax
  void *v260; // ebp
  CellStruct *i41; // edi
  CellStruct *v262; // [esp+48h] [ebp-450h]
  CellStruct *v263; // [esp+48h] [ebp-450h]
  CellStruct *v264; // [esp+48h] [ebp-450h]
  CellStruct *v265; // [esp+48h] [ebp-450h]
  CellStruct *v266; // [esp+48h] [ebp-450h]
  CellStruct *v267; // [esp+48h] [ebp-450h]
  CellStruct *v268; // [esp+48h] [ebp-450h]
  CellStruct *v269; // [esp+48h] [ebp-450h]
  CellStruct *v270; // [esp+48h] [ebp-450h]
  CellStruct *v271; // [esp+48h] [ebp-450h]
  CellStruct *v272; // [esp+48h] [ebp-450h]
  CellStruct *v273; // [esp+48h] [ebp-450h]
  CellStruct *v274; // [esp+48h] [ebp-450h]
  CellStruct *v275; // [esp+48h] [ebp-450h]
  CellStruct *v276; // [esp+48h] [ebp-450h]
  CellStruct *v277; // [esp+48h] [ebp-450h]
  CellStruct *v278; // [esp+48h] [ebp-450h]
  CellStruct *v279; // [esp+48h] [ebp-450h]
  CellStruct *v280; // [esp+48h] [ebp-450h]
  CellStruct *v281; // [esp+48h] [ebp-450h]
  CellStruct *v282; // [esp+48h] [ebp-450h]
  CellStruct *v283; // [esp+48h] [ebp-450h]
  CellStruct *v284; // [esp+48h] [ebp-450h]
  CellStruct *v285; // [esp+48h] [ebp-450h]
  CellStruct *v286; // [esp+48h] [ebp-450h]
  CellStruct *v287; // [esp+48h] [ebp-450h]
  CellStruct *v288; // [esp+48h] [ebp-450h]
  CellStruct *v289; // [esp+48h] [ebp-450h]
  CellStruct *v290; // [esp+48h] [ebp-450h]
  CellStruct *v291; // [esp+48h] [ebp-450h]
  CellStruct *v292; // [esp+48h] [ebp-450h]
  CellStruct *v293; // [esp+48h] [ebp-450h]
  CellStruct *v294; // [esp+48h] [ebp-450h]
  CellStruct *v295; // [esp+48h] [ebp-450h]
  CellStruct *v296; // [esp+48h] [ebp-450h]
  CellStruct *v297; // [esp+48h] [ebp-450h]
  CellStruct *v298; // [esp+48h] [ebp-450h]
  CellStruct *v299; // [esp+48h] [ebp-450h]
  CellStruct *v300; // [esp+48h] [ebp-450h]
  CellStruct *v301; // [esp+48h] [ebp-450h]
  CellStruct *v302; // [esp+48h] [ebp-450h]
  CellStruct *v303; // [esp+48h] [ebp-450h]
  CellStruct *v304; // [esp+48h] [ebp-450h]
  IUnknown *v305; // [esp+4Ch] [ebp-44Ch]
  CellStruct *v306; // [esp+50h] [ebp-448h]
  CellStruct *v307; // [esp+50h] [ebp-448h]
  CellStruct *v308; // [esp+50h] [ebp-448h]
  CellStruct *v309; // [esp+50h] [ebp-448h]
  CellStruct *v310; // [esp+50h] [ebp-448h]
  CellStruct *v311; // [esp+50h] [ebp-448h]
  CellStruct *v312; // [esp+50h] [ebp-448h]
  CellStruct *v313; // [esp+50h] [ebp-448h]
  CellStruct *v314; // [esp+50h] [ebp-448h]
  CellStruct *v315; // [esp+50h] [ebp-448h]
  CellStruct *v316; // [esp+50h] [ebp-448h]
  CellStruct *v317; // [esp+50h] [ebp-448h]
  CellStruct *v318; // [esp+50h] [ebp-448h]
  CellStruct *v319; // [esp+50h] [ebp-448h]
  CellStruct *v320; // [esp+50h] [ebp-448h]
  CellStruct *v321; // [esp+50h] [ebp-448h]
  CellStruct *v322; // [esp+50h] [ebp-448h]
  CellStruct *v323; // [esp+50h] [ebp-448h]
  CellStruct *v324; // [esp+50h] [ebp-448h]
  CellStruct *v325; // [esp+50h] [ebp-448h]
  CellStruct *v326; // [esp+50h] [ebp-448h]
  CellStruct *v327; // [esp+50h] [ebp-448h]
  CellStruct *v328; // [esp+50h] [ebp-448h]
  CellStruct *v329; // [esp+50h] [ebp-448h]
  CellStruct *v330; // [esp+50h] [ebp-448h]
  CellStruct *v331; // [esp+50h] [ebp-448h]
  CellStruct *v332; // [esp+50h] [ebp-448h]
  CellStruct *v333; // [esp+50h] [ebp-448h]
  CellStruct *v334; // [esp+50h] [ebp-448h]
  CellStruct *v335; // [esp+50h] [ebp-448h]
  CellStruct *v336; // [esp+50h] [ebp-448h]
  CellStruct *v337; // [esp+50h] [ebp-448h]
  CellStruct *v338; // [esp+50h] [ebp-448h]
  CellStruct *v339; // [esp+50h] [ebp-448h]
  CellStruct *v340; // [esp+50h] [ebp-448h]
  CellStruct *v341; // [esp+50h] [ebp-448h]
  CellStruct *v342; // [esp+50h] [ebp-448h]
  CellStruct *v343; // [esp+50h] [ebp-448h]
  CellStruct *v344; // [esp+50h] [ebp-448h]
  CellStruct *_50bm; // [esp+50h] [ebp-448h]
  CellStruct *_50bn; // [esp+50h] [ebp-448h]
  CellStruct *v347; // [esp+50h] [ebp-448h]
  CellStruct *v348; // [esp+50h] [ebp-448h]
  CellStruct *v349; // [esp+50h] [ebp-448h]
  CellStruct *v350; // [esp+50h] [ebp-448h]
  CellStruct *v351; // [esp+50h] [ebp-448h]
  CellStruct *v352; // [esp+50h] [ebp-448h]
  CellStruct *v353; // [esp+50h] [ebp-448h]
  CellStruct *v354; // [esp+50h] [ebp-448h]
  CellStruct *v355; // [esp+50h] [ebp-448h]
  CellStruct *v356; // [esp+50h] [ebp-448h]
  CellStruct *v357; // [esp+50h] [ebp-448h]
  CellStruct *v358; // [esp+54h] [ebp-444h]
  CellStruct *v359; // [esp+58h] [ebp-440h]
  CellStruct *v360; // [esp+58h] [ebp-440h]
  CellStruct *v361; // [esp+58h] [ebp-440h]
  CellStruct *v362; // [esp+58h] [ebp-440h]
  CellStruct *v363; // [esp+58h] [ebp-440h]
  CellStruct *v364; // [esp+58h] [ebp-440h]
  CellStruct *v365; // [esp+58h] [ebp-440h]
  CellStruct *v366; // [esp+58h] [ebp-440h]
  CellStruct *v367; // [esp+58h] [ebp-440h]
  CellStruct *v368; // [esp+58h] [ebp-440h]
  CellStruct *v369; // [esp+58h] [ebp-440h]
  CellStruct *v370; // [esp+58h] [ebp-440h]
  CellStruct *v371; // [esp+58h] [ebp-440h]
  CellStruct *v372; // [esp+58h] [ebp-440h]
  CellStruct *v373; // [esp+58h] [ebp-440h]
  CellStruct *v374; // [esp+58h] [ebp-440h]
  CellStruct *v375; // [esp+58h] [ebp-440h]
  CellStruct *v376; // [esp+58h] [ebp-440h]
  CellStruct *v377; // [esp+58h] [ebp-440h]
  CellStruct *v378; // [esp+58h] [ebp-440h]
  CellStruct *v379; // [esp+58h] [ebp-440h]
  CellStruct *v380; // [esp+58h] [ebp-440h]
  CellStruct *v381; // [esp+58h] [ebp-440h]
  CellStruct *v382; // [esp+58h] [ebp-440h]
  CellStruct *v383; // [esp+58h] [ebp-440h]
  CellStruct *v384; // [esp+58h] [ebp-440h]
  CellStruct *v385; // [esp+58h] [ebp-440h]
  CellStruct *v386; // [esp+58h] [ebp-440h]
  CellStruct *v387; // [esp+58h] [ebp-440h]
  CellStruct *v388; // [esp+58h] [ebp-440h]
  CellStruct *v389; // [esp+58h] [ebp-440h]
  CellStruct *v390; // [esp+58h] [ebp-440h]
  CellStruct *v391; // [esp+58h] [ebp-440h]
  CellStruct *v392; // [esp+58h] [ebp-440h]
  CellStruct *v393; // [esp+58h] [ebp-440h]
  CellStruct *v394; // [esp+58h] [ebp-440h]
  CellStruct *v395; // [esp+58h] [ebp-440h]
  CellStruct *v396; // [esp+58h] [ebp-440h]
  CellStruct *v397; // [esp+58h] [ebp-440h]
  CellStruct *v398; // [esp+58h] [ebp-440h]
  CellStruct *v399; // [esp+58h] [ebp-440h]
  CellStruct *v400; // [esp+58h] [ebp-440h]
  CellStruct *v401; // [esp+58h] [ebp-440h]
  CellStruct *v402; // [esp+58h] [ebp-440h]
  CellStruct *v403; // [esp+58h] [ebp-440h]
  CellStruct *aP2; // [esp+68h] [ebp-430h]
  CellStruct *aP2a; // [esp+68h] [ebp-430h]
  CellStruct *aP2b; // [esp+68h] [ebp-430h]
  CellStruct *aP2c; // [esp+68h] [ebp-430h]
  CellStruct *aP2d; // [esp+68h] [ebp-430h]
  CellStruct *aP2e; // [esp+68h] [ebp-430h]
  CellStruct *v410; // [esp+6Ch] [ebp-42Ch]
  CellStruct *v411; // [esp+6Ch] [ebp-42Ch]
  CellStruct *v412; // [esp+6Ch] [ebp-42Ch]
  CellStruct *v413; // [esp+6Ch] [ebp-42Ch]
  CellStruct *k; // [esp+6Ch] [ebp-42Ch]
  char v415; // [esp+77h] [ebp-421h] BYREF
  char *v416; // [esp+78h] [ebp-420h]
  CellStruct *v417; // [esp+7Ch] [ebp-41Ch]
  char *v418; // [esp+80h] [ebp-418h]
  int v419; // [esp+84h] [ebp-414h] BYREF
  IUnknown *TextBufferEntry; // [esp+88h] [ebp-410h]
  int v421; // [esp+8Ch] [ebp-40Ch]
  int v422; // [esp+90h] [ebp-408h]
  int v423; // [esp+94h] [ebp-404h]
  int v424; // [esp+98h] [ebp-400h]
  char *v425; // [esp+9Ch] [ebp-3FCh]
  ParticleSystemClass *v345; // [esp+A0h] [ebp-3F8h]
  ParticleSystemClass *v346; // [esp+A4h] [ebp-3F4h] BYREF
  int v428; // [esp+A8h] [ebp-3F0h] BYREF
  _DWORD v429[3]; // [esp+ACh] [ebp-3ECh] BYREF
  int v430; // [esp+B8h] [ebp-3E0h]
  int v431; // [esp+BCh] [ebp-3DCh]
  int v432; // [esp+C0h] [ebp-3D8h] BYREF
  unsigned __int8 *v433; // [esp+C4h] [ebp-3D4h]
  char v434[4]; // [esp+C8h] [ebp-3D0h] BYREF
  char v435[4]; // [esp+CCh] [ebp-3CCh] BYREF
  int v436; // [esp+D0h] [ebp-3C8h]
  char v437[4]; // [esp+D4h] [ebp-3C4h] BYREF
  char v438[8]; // [esp+D8h] [ebp-3C0h] BYREF
  char v439[4]; // [esp+E0h] [ebp-3B8h] BYREF
  char v440[8]; // [esp+E4h] [ebp-3B4h] BYREF
  char v441[8]; // [esp+ECh] [ebp-3ACh] BYREF
  char v442[4]; // [esp+F4h] [ebp-3A4h] BYREF
  int v443; // [esp+F8h] [ebp-3A0h] BYREF
  int v444; // [esp+FCh] [ebp-39Ch] BYREF
  char v445[8]; // [esp+100h] [ebp-398h] BYREF
  char v446[4]; // [esp+108h] [ebp-390h] BYREF
  char v447[12]; // [esp+10Ch] [ebp-38Ch] BYREF
  char v448[128]; // [esp+118h] [ebp-380h] BYREF
  char Destination[128]; // [esp+198h] [ebp-300h] BYREF
  char v450[128]; // [esp+218h] [ebp-280h] BYREF
  char Buffer[512]; // [esp+298h] [ebp-200h] BYREF

  v433 = this;
  sprintf(Buffer, (ObjectClass *)&stru_830620.__pad_579C[12532], *(INIClass **)(HouseClass_Player.field_0 + 48));
  Debug::Log();
  TextBufferEntry = (IUnknown *)GetTextBufferEntry(4);
  TextBuffer::Init(TextBufferEntry);
  Network::validateConnection(TextBufferEntry, 0, 0);
  v1 = fopen(Buffer, Mode);
  v2 = (MouseClass *)v1;
  if ( v1 )
  {
    fprintf((MouseClass *)v1, &stru_830620.__pad_579C[12420], v359);
    ModuleVersion = GetModuleVersion();
    fprintf(v2, &stru_830620.__pad_579C[12404], (CellStruct *)ModuleVersion);
    ModuleInternalVersion = GetModuleInternalVersion((int)&HouseClass_Player.__pad_5568[23084]);
    fprintf(v2, &stru_830620.__pad_579C[12380], (CellStruct *)ModuleInternalVersion);
    v448[0] = 0;
    Time::FormatDate(v448);
    String::CopyConstant(Destination);
    v5 = (CellStruct *)String::FormatDword(v450);
    fprintf(v2, (const char *const)stru_821F08.headNode, v5);
    v432 = 5;
    v415 = 0;
    GetVersionString(&v432, &v415, 0, 0);
    Name = PlayerType::GetName();
    fprintf(v2, g_Str_Trace_CPU__s__MMX__s__Vendor_, (CellStruct *)Name);
    fprintf(v2, g_Str_Trace_Frames_, *(CellStruct **)&HouseClass_Player.__pad_5568[23248]);
    if ( g_FrameCounter_Samples )
      v7 = g_FrameCounter_Total / (unsigned int)g_FrameCounter_Samples;
    else
      v7 = 0;
    fprintf(v2, g_Str_Trace_Average_FPS_, (CellStruct *)v7);
    fprintf(v2, g_Str_Trace_Max_MaxAhead_, *(CellStruct **)&HouseClass_Player.__pad_5568[8884]);
    fprintf(v2, g_Str_Trace_Latency_setting_, *(CellStruct **)&HouseClass_Player.__pad_5568[18664]);
    fprintf(v2, g_Str_Trace_Game_speed_setting_, *(CellStruct **)&HouseClass_Player.__pad_5568[22700]);
    fprintf(v2, &stru_830620.__pad_579C[12360], *(CellStruct **)&HouseClass_Player.__pad_5568[8864]);
    if ( *(_DWORD *)&stru_87C374.__pad_579C[23320] )
    {
      for ( i = 0;
            i < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23320] + 72))(*(_DWORD *)&stru_87C374.__pad_579C[23320]);
            ++i )
      {
        v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[23320] + 76))(
                         *(_DWORD *)&stru_87C374.__pad_579C[23320],
                         i);
        if ( v9 )
          fprintf(v2, g_Str_Trace_Local_address___d__d__d, (CellStruct *)(unsigned __int8)*v9);
      }
    }
    v10 = &HouseClass_Player.__pad_5568[8976];
    do
    {
      if ( *(v10 - 80) )
      {
        Network::CopyAddress((_DWORD *)v10 + 3, &v419, (int)v429);
        fprintf(v2, g_Str_Trace_Name_, (CellStruct *)(v10 - 80));
        fprintf(v2, &stru_830620.__pad_579C[12336], (CellStruct *)LOBYTE(v429[0]));
        fprintf(v2, g_Str_Trace_Max_avg_round_trip_, *(CellStruct **)v10);
        fprintf(v2, g_Str_Trace_Max_round_trip_, *((CellStruct **)v10 - 4));
        fprintf(v2, g_Str_Trace_Resends_, *((CellStruct **)v10 - 3));
        fprintf(v2, g_Str_Trace_Frame_sync_stalls_, *((CellStruct **)v10 + 1));
        fprintf(v2, g_Str_Trace_Command_cound_stalls_, *((CellStruct **)v10 + 2));
        fprintf(v2, g_Str_Trace_Lost_, *((CellStruct **)v10 - 2));
        fprintf(v2, g_Str_Trace_Percent_lost_, *((CellStruct **)v10 - 1));
      }
      v10 += 104;
    }
    while ( (int)v10 < (int)&HouseClass_Player.__pad_5568[9808] );
    v11 = 0;
    v12 = dword_B04474;
    do
    {
      fprintf(v2, &stru_830620.__pad_579C[12324], v11);
      ++v12;
      v11 = (CellStruct *)((char *)v11 + 1);
    }
    while ( (int)v12 < (int)&dword_B04874 );
    fprintf(v2, &stru_830620.__pad_579C[12300], v360);
    v14 = HouseClass_Count;
    for ( j = 0; j < (int)HouseClass_Count; ++j )
    {
      *(&g_MatrixTransformState + 6395) = 0;
      v15 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * j];
      v16 = ToWideStringChar((IUnknown *)(v15 + 90154));
      fprintf(v2, &stru_830620.__pad_579C[12184], (CellStruct *)v16);
      Debug::Printf((IUnknown *)(*(_DWORD *)(v15 + 52) + 36));
      v14 = HouseClass_Count;
    }
    v17 = 0;
    v410 = 0;
    if ( (int)v14 > 0 )
    {
      do
      {
        v18 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * (_DWORD)v17];
        *(&g_MatrixTransformState + 6395) = 0;
        v424 = v18;
        fprintf(v2, &stru_830620.__pad_579C[12108], (CellStruct *)(*(_DWORD *)(v18 + 52) + 36));
        v19 = 0;
        for ( aP2 = 0; v19 < *(int *)&HouseClass_Player.__pad_74[56]; aP2 = (CellStruct *)v19 )
        {
          v20 = *(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_74[44] + 4 * v19);
          if ( v20[135] == v18 )
          {
            v21 = v20[39];
            v422 = v20[40];
            v423 = v20[41];
            Value = ProgressTimer::GetValue((_WORD *)v20 + 452, (IUnknown *)&v419);
            *(&g_MatrixTransformState + 6395) = (CoordStruct *)(v21 / 10
                                                              + ((v422 / 10) << 16)
                                                              + (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1)
                                                              + ((unsigned int)*(&g_MatrixTransformState + 6395) >> 31)
                                                              + 2 * (_DWORD)*(&g_MatrixTransformState + 6395));
            v23 = (int *)v20[173];
            v417 = 0;
            v416 = 0;
            if ( v23 )
            {
              v24 = (CellStruct **)(*(int (__thiscall **)(int *, _DWORD *))(*v23 + 72))(v23, v429);
              v25 = *v23;
              v417 = *v24;
              v26 = (*(int (__thiscall **)(int *, char *))(v25 + 72))(v23, v445);
              v27 = *v23;
              v416 = *(char **)(v26 + 4);
              v28 = (void *)(*(int (__thiscall **)(int *))(v27 + 44))(v23);
              AbstractType::FindName(v28);
            }
            v29 = (int *)v20[361];
            v345 = 0;
            v418 = 0;
            v425 = &stru_830620.__pad_579C[5608];
            if ( v29 )
            {
              v30 = *(ParticleSystemClass **)(*(int (__thiscall **)(int *, char *))(*v29 + 72))(v29, v447);
              v31 = *v29;
              v345 = v30;
              v32 = *(char **)((*(int (__thiscall **)(int *, char *))(v31 + 72))(v29, v437) + 4);
              v33 = *v29;
              v418 = v32;
              v34 = (void *)(*(int (__thiscall **)(int *))(v33 + 44))(v29);
              v425 = AbstractType::FindName(v34);
            }
            v35 = ProgressTimer::GetValue((_WORD *)v20 + 452, (IUnknown *)&v428);
            v36 = v20[432];
            v37 = (unsigned __int8)((unsigned int)((*v35 >> 7) + 1) >> 1);
            Math::RoundToInt(*((double *)v20 + 175) * 256.0);
            v38 = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v20 + 388))(v20, *(_DWORD *)(v36 + 3576), v36 + 36);
            v39 = (*(int (__thiscall **)(_DWORD *, char *, int, int))(*v20 + 72))(v20, v442, v37, v38);
            v40 = (CellStruct **)(*(int (__thiscall **)(_DWORD *, char *, _DWORD))(*v20 + 72))(
                                   v20,
                                   v440,
                                   *(_DWORD *)(v39 + 4));
            fprintf(v2, &stru_830620.__pad_579C[12012], *v40);
            v18 = v424;
            v19 = (int)aP2;
          }
          ++v19;
        }
        Debug::Printf((IUnknown *)(*(_DWORD *)(v18 + 52) + 36));
        v14 = HouseClass_Count;
        v17 = (char *)&v410->field_0 + 1;
        v410 = (CellStruct *)((char *)v410 + 1);
      }
      while ( (int)v410 < (int)HouseClass_Count );
    }
    v41 = 0;
    v411 = 0;
    if ( (int)v14 > 0 )
    {
      do
      {
        v42 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * (_DWORD)v41];
        *(&g_MatrixTransformState + 6395) = 0;
        v419 = v42;
        fprintf(v2, &stru_830620.__pad_579C[11940], (CellStruct *)(*(_DWORD *)(v42 + 52) + 36));
        v43 = 0;
        for ( aP2a = 0; v43 < *(int *)&stru_89E138.__pad_579C[67652]; aP2a = (CellStruct *)v43 )
        {
          v44 = *(_DWORD **)(*(_DWORD *)&stru_89E138.__pad_579C[67640] + 4 * v43);
          if ( v44[135] == v42 )
          {
            v421 = v44[39];
            v422 = v44[40];
            v423 = v44[41];
            v45 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)v44 + 452, (IUnknown *)&v443) >> 7)
                                                 + 1) >> 1);
            v424 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)v44 + 464, (IUnknown *)&v444) >> 7)
                                                  + 1) >> 1);
            v418 = &stru_830620.__pad_579C[5608];
            v345 = 0;
            *(&g_MatrixTransformState + 6395) = (CoordStruct *)(v424
                                                              + v45
                                                              + ((v422 / 10) << 16)
                                                              + v421 / 10
                                                              + ((unsigned int)*(&g_MatrixTransformState + 6395) >> 31)
                                                              + 2 * (_DWORD)*(&g_MatrixTransformState + 6395));
            v46 = (int *)v44[173];
            v425 = 0;
            if ( v46 )
            {
              v47 = (ParticleSystemClass **)(*(int (__thiscall **)(int *, char *))(*v46 + 72))(v46, v439);
              v48 = *v46;
              v345 = *v47;
              v49 = (*(int (__thiscall **)(int *, char *))(v48 + 72))(v46, v441);
              v50 = *v46;
              v425 = *(char **)(v49 + 4);
              v51 = (void *)(*(int (__thiscall **)(int *))(v50 + 44))(v46);
              v418 = AbstractType::FindName(v51);
            }
            v52 = (int *)v44[361];
            v417 = 0;
            v416 = &stru_830620.__pad_579C[5608];
            if ( v52 )
            {
              v54 = *(CellStruct **)(*(int (__thiscall **)(int *, char *))(*v52 + 72))(v52, v437);
              eax35 = *v52;
              v417 = v54;
              (*(int (__thiscall **)(int *, char *))(eax35 + 72))(v52, v447);
              v55 = (void *)(*(int (__thiscall **)(int *))(*v52 + 44))(v52);
              v416 = AbstractType::FindName(v55);
            }
            if ( !v44[413] )
              WinAPI::Wrapper(-2147467261);
            v424 = v44[413];
            if ( !v424 )
              WinAPI::Wrapper(-2147467261);
            v430 = v44[413];
            if ( !v430 )
              WinAPI::Wrapper(-2147467261);
            v431 = v44[413];
            v428 = v44[433] + 36;
            v56 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)v44 + 464, (IUnknown *)&v346) >> 7)
                                                 + 1) >> 1);
            v57 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)v44 + 452, (IUnknown *)v429) >> 7)
                                                 + 1) >> 1);
            v58 = (*(int (__stdcall **)(int))(*(_DWORD *)v424 + 196))(v424);
            v59 = (*(int (__stdcall **)(int, int))(*(_DWORD *)v430 + 192))(v430, v58);
            v60 = (*(int (__stdcall **)(int, int))(*(_DWORD *)v432 + 188))(v432, v59);
            v61 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, IUnknown *, int, ParticleSystemClass *, char *, int, char *, int))(*v44 + 388))(
                    v44,
                    *(_DWORD *)(v44[433] + 3576),
                    v429[1],
                    TextBufferEntry,
                    v428,
                    v346,
                    v418,
                    v419,
                    v416,
                    v60);
            v62 = (*(int (__thiscall **)(_DWORD *, char *, int, int, int))(*v44 + 72))(v44, v446, v57, v56, v61);
            v63 = (CellStruct **)(*(int (__thiscall **)(_DWORD *, char *, _DWORD))(*v44 + 72))(
                                   v44,
                                   v435,
                                   *(_DWORD *)(v62 + 4));
            fprintf(v2, &stru_830620.__pad_579C[11808], *v63);
            v42 = v419;
            v43 = (int)aP2a;
          }
          ++v43;
        }
        Debug::Printf((IUnknown *)(*(_DWORD *)(v42 + 52) + 36));
        v14 = HouseClass_Count;
        v41 = (char *)&v411->field_0 + 1;
        v411 = (CellStruct *)((char *)v411 + 1);
      }
      while ( (int)v411 < (int)HouseClass_Count );
    }
    v64 = 0;
    v412 = 0;
    if ( (int)v14 > 0 )
    {
      do
      {
        v65 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * (_DWORD)v64];
        *(&g_MatrixTransformState + 6395) = 0;
        v419 = v65;
        fprintf(v2, &stru_830620.__pad_579C[11732], (CellStruct *)(*(_DWORD *)(v65 + 52) + 36));
        v66 = 0;
        for ( aP2b = 0; v66 < *(int *)&HouseClass_Player.__pad_5568[22684]; aP2b = (CellStruct *)v66 )
        {
          v67 = *(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672] + 4 * v66);
          if ( v67[135] == v65 )
          {
            v68 = v67[39];
            v422 = v67[40];
            v423 = v67[41];
            v69 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)v67 + 452, (IUnknown *)v429) >> 7)
                                                 + 1) >> 1);
            v416 = &stru_830620.__pad_579C[5608];
            *(&g_MatrixTransformState + 6395) = (CoordStruct *)(v68 / 10
                                                              + ((v422 / 10) << 16)
                                                              + v69
                                                              + ((unsigned int)*(&g_MatrixTransformState + 6395) >> 31)
                                                              + 2 * (_DWORD)*(&g_MatrixTransformState + 6395));
            v70 = (int *)v67[173];
            v417 = 0;
            if ( v70 )
            {
              v71 = (CellStruct **)(*(int (__thiscall **)(int *, char *))(*v70 + 72))(v70, v434);
              v72 = *v70;
              v417 = *v71;
              (*(int (__thiscall **)(int *, char *))(v72 + 72))(v70, v439);
              v73 = (void *)(*(int (__thiscall **)(int *))(*v70 + 44))(v70);
              v416 = AbstractType::FindName(v73);
            }
            v74 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)v67 + 452, (IUnknown *)&v346) >> 7)
                                                 + 1) >> 1);
            v75 = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v67 + 388))(
                    v67,
                    *(_DWORD *)(v67[328] + 3576),
                    v67[328] + 36);
            v76 = (*(int (__thiscall **)(_DWORD *, char *, int, int))(*v67 + 72))(v67, v442, v74, v75);
            v77 = (CellStruct **)(*(int (__thiscall **)(_DWORD *, char *, _DWORD))(*v67 + 72))(
                                   v67,
                                   v438,
                                   *(_DWORD *)(v76 + 4));
            fprintf(v2, &stru_830620.__pad_579C[11664], *v77);
            v65 = v419;
            v66 = (int)aP2b;
          }
          ++v66;
        }
        Debug::Printf((IUnknown *)(*(_DWORD *)(v65 + 52) + 36));
        v14 = HouseClass_Count;
        v64 = (char *)&v412->field_0 + 1;
        v412 = (CellStruct *)((char *)v412 + 1);
      }
      while ( (int)v412 < (int)HouseClass_Count );
    }
    v78 = 0;
    v413 = 0;
    if ( (int)v14 > 0 )
    {
      do
      {
        v79 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * (_DWORD)v78];
        *(&g_MatrixTransformState + 6395) = 0;
        v419 = v79;
        fprintf(v2, &stru_830620.__pad_579C[11584], (CellStruct *)(*(_DWORD *)(v79 + 52) + 36));
        v80 = 0;
        for ( aP2c = 0; v80 < *(int *)&HouseClass_Player.__pad_5568[20716]; aP2c = (CellStruct *)v80 )
        {
          v81 = *(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[20704] + 4 * v80);
          if ( v81[135] == v79 )
          {
            v82 = v81[39];
            v422 = v81[40];
            v423 = v81[41];
            v83 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)v81 + 452, (IUnknown *)v429) >> 7)
                                                 + 1) >> 1);
            v416 = &stru_830620.__pad_579C[5608];
            *(&g_MatrixTransformState + 6395) = (CoordStruct *)(v82 / 10
                                                              + ((v422 / 10) << 16)
                                                              + v83
                                                              + ((unsigned int)*(&g_MatrixTransformState + 6395) >> 31)
                                                              + 2 * (_DWORD)*(&g_MatrixTransformState + 6395));
            v84 = (int *)v81[173];
            v417 = 0;
            if ( v84 )
            {
              v85 = (CellStruct **)(*(int (__thiscall **)(int *, char *))(*v84 + 72))(v84, v434);
              v86 = *v84;
              v417 = *v85;
              (*(int (__thiscall **)(int *, char *))(v86 + 72))(v84, v439);
              v87 = (void *)(*(int (__thiscall **)(int *))(*v84 + 44))(v84);
              v416 = AbstractType::FindName(v87);
            }
            v88 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)v81 + 452, (IUnknown *)&v346) >> 7)
                                                 + 1) >> 1);
            v89 = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v81 + 388))(
                    v81,
                    *(_DWORD *)(v81[433] + 3576),
                    v81[433] + 36);
            v90 = (*(int (__thiscall **)(_DWORD *, char *, int, int))(*v81 + 72))(v81, v442, v88, v89);
            v91 = (CellStruct **)(*(int (__thiscall **)(_DWORD *, char *, _DWORD))(*v81 + 72))(
                                   v81,
                                   v438,
                                   *(_DWORD *)(v90 + 4));
            fprintf(v2, &stru_830620.__pad_579C[11664], *v91);
            v79 = v419;
            v80 = (int)aP2c;
          }
          ++v80;
        }
        Debug::Printf((IUnknown *)(*(_DWORD *)(v79 + 52) + 36));
        v78 = (char *)&v413->field_0 + 1;
        v413 = (CellStruct *)((char *)v413 + 1);
      }
      while ( (int)v413 < (int)HouseClass_Count );
    }
    v92 = &stru_89E138.__pad_14B0[3464];
    *(&g_MatrixTransformState + 6395) = 0;
    aP2d = 0;
    v418 = &stru_89E138.__pad_14B0[3464];
    do
    {
      fprintf(v2, &stru_830620.__pad_579C[11544], aP2d);
      for ( k = 0; (int)k < *(_DWORD *)v92; k = (CellStruct *)((char *)k + 1) )
      {
        v93 = *(_DWORD **)(*((_DWORD *)v92 - 3) + 4 * (_DWORD)k);
        if ( (*(int (__thiscall **)(_DWORD *))(*v93 + 44))(v93) != 4
          || (*(int (__stdcall **)(_DWORD *))(v93[1] + 16))(v93 + 1) != -2 )
        {
          v94 = v93[39];
          v422 = v93[40];
          v95 = *v93;
          v423 = v93[41];
          v96 = (*(int (__thiscall **)(_DWORD *))(v95 + 44))(v93);
          *(&g_MatrixTransformState + 6395) = (CoordStruct *)(v94 / 10
                                                            + ((v422 / 10) << 16)
                                                            + v96
                                                            + ((unsigned int)*(&g_MatrixTransformState + 6395) >> 31)
                                                            + 2 * (_DWORD)*(&g_MatrixTransformState + 6395));
          v436 = v93[41];
          fprintf(v2, &stru_830620.__pad_579C[11528], k);
          if ( (*(int (__thiscall **)(_DWORD *))(*v93 + 44))(v93) == 43
            || (*(int (__thiscall **)(_DWORD *))(*v93 + 44))(v93) == 19 )
          {
            v102 = (void *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v93 + 44))(v93, 0);
            v103 = AbstractType::FindName(v102);
            fprintf(v2, &stru_830620.__pad_579C[11492], (CellStruct *)v103);
          }
          else
          {
            v97 = (*(int (__thiscall **)(_DWORD *))(*v93 + 136))(v93) + 36;
            v98 = (*(int (__thiscall **)(_DWORD *))(*v93 + 136))(v93);
            v99 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v98 + 64))(v98, v97);
            v100 = (void *)(*(int (__thiscall **)(_DWORD *, int))(*v93 + 44))(v93, v99);
            v101 = AbstractType::FindName(v100);
            fprintf(v2, &stru_830620.__pad_579C[11508], (CellStruct *)v101);
          }
          v104 = (*(int (__thiscall **)(_DWORD *))(*v93 + 60))(v93);
          if ( v104 )
            fprintf(v2, &stru_830620.__pad_579C[11476], (CellStruct *)(*(_DWORD *)(v104 + 52) + 36));
          else
            fprintf(v2, &stru_830620.__pad_579C[11460], v361);
          v92 = v418;
        }
      }
      v92 += 24;
      aP2d = (CellStruct *)((char *)aP2d + 1);
      v418 = v92;
    }
    while ( (int)v92 < (int)&stru_89E138.__pad_14B0[3584] );
    v305 = TextBufferEntry;
    Debug::Printf(TextBufferEntry);
    *(&g_MatrixTransformState + 6395) = 0;
    fprintf(v2, &stru_830620.__pad_579C[11416], (CellStruct *)v305);
    v105 = *(IUnknown **)&stru_87C374.__pad_14B0[8036];
    v106 = 0;
    for ( aP2e = 0; (int)aP2e < *(int *)&stru_87C374.__pad_14B0[8036]; aP2e = (CellStruct *)((char *)aP2e + 1) )
    {
      v107 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8024] + 4 * (_DWORD)v106);
      if ( (*(int (__thiscall **)(_DWORD *))(*v107 + 44))(v107) != 4
        || (*(int (__stdcall **)(_DWORD *))(v107[1] + 16))(v107 + 1) != -2 )
      {
        v109 = (CellStruct *)v107[39];
        v422 = v107[40];
        edx78 = *v107;
        v423 = v107[41];
        v110 = (*(int (__thiscall **)(_DWORD *))(edx78 + 44))(v107);
        *(&g_MatrixTransformState + 6395) = (CoordStruct *)((int)v109 / 10
                                                          + ((v422 / 10) << 16)
                                                          + v110
                                                          + ((unsigned int)*(&g_MatrixTransformState + 6395) >> 31)
                                                          + 2 * (_DWORD)*(&g_MatrixTransformState + 6395));
        v436 = v107[41];
        fprintf(v2, &stru_830620.__pad_579C[11528], aP2e);
        if ( (*(int (__thiscall **)(_DWORD *))(*v107 + 44))(v107) == 2 )
        {
          v111 = (*(int (__thiscall **)(_DWORD *))(*v107 + 136))(v107) + 36;
          v112 = (*(int (__thiscall **)(_DWORD *))(*v107 + 136))(v107);
          v306 = (CellStruct *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v112 + 64))(v112, v111);
          fprintf(v2, &stru_830620.__pad_579C[11388], v306);
        }
        else if ( (*(int (__thiscall **)(_DWORD *))(*v107 + 44))(v107) == 4 )
        {
          v113 = (*(int (__thiscall **)(_DWORD *))(*v107 + 136))(v107) + 36;
          v114 = (*(int (__thiscall **)(_DWORD *))(*v107 + 136))(v107);
          v307 = (CellStruct *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v114 + 64))(v114, v113);
          fprintf(v2, &stru_830620.__pad_579C[11360], v307);
        }
        else if ( (*(int (__thiscall **)(_DWORD *))(*v107 + 44))(v107) == 6 )
        {
          v115 = (*(int (__thiscall **)(_DWORD *))(*v107 + 136))(v107) + 36;
          v116 = (*(int (__thiscall **)(_DWORD *))(*v107 + 136))(v107);
          v308 = (CellStruct *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v116 + 64))(v116, v115);
          fprintf(v2, &stru_830620.__pad_579C[11332], v308);
        }
        else if ( (*(int (__thiscall **)(_DWORD *))(*v107 + 44))(v107) == 8 )
        {
          v117 = (*(int (__thiscall **)(_DWORD *))(*v107 + 136))(v107) + 36;
          v118 = (*(int (__thiscall **)(_DWORD *))(*v107 + 136))(v107);
          v309 = (CellStruct *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v118 + 64))(v118, v117);
          fprintf(v2, &stru_830620.__pad_579C[11304], v309);
        }
        else if ( (*(int (__thiscall **)(_DWORD *))(*v107 + 44))(v107) == 15 )
        {
          v119 = (*(int (__thiscall **)(_DWORD *))(*v107 + 136))(v107) + 36;
          v120 = (*(int (__thiscall **)(_DWORD *))(*v107 + 136))(v107);
          v310 = (CellStruct *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v120 + 64))(v120, v119);
          fprintf(v2, &stru_830620.__pad_579C[11276], v310);
        }
        else if ( (*(int (__thiscall **)(_DWORD *))(*v107 + 44))(v107) == 20 )
        {
          v121 = (*(int (__thiscall **)(_DWORD *))(*v107 + 136))(v107) + 36;
          v122 = (*(int (__thiscall **)(_DWORD *))(*v107 + 136))(v107);
          v311 = (CellStruct *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v122 + 64))(v122, v121);
          fprintf(v2, &stru_830620.__pad_579C[11248], v311);
        }
        else if ( (*(int (__thiscall **)(_DWORD *))(*v107 + 44))(v107) == 29 )
        {
          v123 = (*(int (__thiscall **)(_DWORD *))(*v107 + 136))(v107) + 36;
          v124 = (*(int (__thiscall **)(_DWORD *))(*v107 + 136))(v107);
          v312 = (CellStruct *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v124 + 64))(v124, v123);
          fprintf(v2, &stru_830620.__pad_579C[11220], v312);
        }
        else if ( (*(int (__thiscall **)(_DWORD *))(*v107 + 44))(v107) == 36 )
        {
          v125 = (*(int (__thiscall **)(_DWORD *))(*v107 + 136))(v107) + 36;
          v126 = (*(int (__thiscall **)(_DWORD *))(*v107 + 136))(v107);
          v313 = (CellStruct *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v126 + 64))(v126, v125);
          fprintf(v2, &stru_830620.__pad_579C[11192], v313);
        }
        else if ( (*(int (__thiscall **)(_DWORD *))(*v107 + 44))(v107) == 1 )
        {
          v127 = (*(int (__thiscall **)(_DWORD *))(*v107 + 136))(v107) + 36;
          v128 = (*(int (__thiscall **)(_DWORD *))(*v107 + 136))(v107);
          v314 = (CellStruct *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v128 + 64))(v128, v127);
          fprintf(v2, &stru_830620.__pad_579C[11164], v314);
        }
        v129 = (*(int (__thiscall **)(_DWORD *))(*v107 + 60))(v107);
        if ( v129 )
          fprintf(v2, &stru_830620.__pad_579C[11152], (CellStruct *)(*(_DWORD *)(v129 + 52) + 36));
        else
          fprintf(v2, &stru_830620.__pad_579C[11460], v361);
      }
      v105 = *(IUnknown **)&stru_87C374.__pad_14B0[8036];
      v106 = (char *)&aP2e->field_0 + 1;
    }
    Debug::Printf(v105);
    v358 = (CellStruct *)Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536));
    Debug::Printf(v130);
    fprintf(v2, &stru_830620.__pad_579C[11100], v358);
    Debug::Printf(*(IUnknown **)&HouseClass_Player.__pad_5568[23248]);
    fprintf(v2, &stru_830620.__pad_579C[11068], *(CellStruct **)&HouseClass_Player.__pad_5568[23248]);
    v131 = v433;
    if ( v433 )
    {
      fprintf(v2, &stru_830620.__pad_579C[11048], v361);
      fprintf(v2, &stru_830620.__pad_579C[11028], (CellStruct *)*v131);
      fprintf(v2, &stru_830620.__pad_579C[11008], *(CellStruct **)(v131 + 3));
      fprintf(v2, &stru_830620.__pad_579C[10988], (CellStruct *)(char)v131[2]);
      fprintf(v2, &stru_830620.__pad_579C[10968], *(CellStruct **)(v131 + 7));
      fprintf(v2, &stru_830620.__pad_579C[10948], (CellStruct *)*(unsigned __int16 *)(v131 + 11));
      fprintf(v2, &stru_830620.__pad_579C[10928], (CellStruct *)v131[13]);
    }
    v132 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v132 )
    {
      *v132 = 0;
      v132[1] = 0;
      v132[2] = 0;
      v133 = v132;
    }
    else
    {
      v133 = 0;
    }
    fprintf(v2, &stru_830620.__pad_579C[10876], v361);
    fprintf(v2, &stru_830620.__pad_579C[10860], v315);
    fprintf(v2, &stru_830620.__pad_579C[10812], v262);
    for ( mm = 0; (int)mm < g_SuperWeaponTypeArray; mm = (CellStruct *)((char *)mm + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**((_DWORD **)g_SuperWeaponTypeCount + (_DWORD)mm) + 52))(
        *((_DWORD *)g_SuperWeaponTypeCount + (_DWORD)mm),
        v133);
      fprintf(v2, &stru_830620.__pad_579C[10796], mm);
    }
    fprintf(v2, &stru_830620.__pad_579C[10744], v362);
    fprintf(v2, &stru_830620.__pad_579C[10860], v316);
    fprintf(v2, &stru_830620.__pad_579C[10812], v263);
    __3_YAXPAX_Z(v133);
    v135 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v135 )
    {
      *v135 = 0;
      v135[1] = 0;
      v135[2] = 0;
      v136 = v135;
    }
    else
    {
      v136 = 0;
    }
    for ( nn = 0; (int)nn < (int)HouseClass_Count; nn = (CellStruct *)((char *)nn + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)&HouseClass_Array->__pad_0[4 * (_DWORD)nn] + 52))(
        *(_DWORD *)&HouseClass_Array->__pad_0[4 * (_DWORD)nn],
        v136);
      fprintf(v2, &stru_830620.__pad_579C[10796], nn);
    }
    fprintf(v2, &stru_830620.__pad_579C[10692], v363);
    fprintf(v2, &stru_830620.__pad_579C[10860], v317);
    fprintf(v2, &stru_830620.__pad_579C[10812], v264);
    __3_YAXPAX_Z(v136);
    v138 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v138 )
    {
      *v138 = 0;
      v138[1] = 0;
      v138[2] = 0;
      v139 = v138;
    }
    else
    {
      v139 = 0;
    }
    for ( i1 = 0; (int)i1 < (int)g_CrateCount; i1 = (CellStruct *)((char *)i1 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)&g_UnitTypeCount2->__pad_0[4 * (_DWORD)i1] + 52))(
        *(_DWORD *)&g_UnitTypeCount2->__pad_0[4 * (_DWORD)i1],
        v139);
      fprintf(v2, &stru_830620.__pad_579C[10796], i1);
    }
    fprintf(v2, &stru_830620.__pad_579C[10648], v364);
    fprintf(v2, &stru_830620.__pad_579C[10860], v318);
    fprintf(v2, &stru_830620.__pad_579C[10812], v265);
    __3_YAXPAX_Z(v139);
    v141 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v141 )
    {
      *v141 = 0;
      v141[1] = 0;
      v141[2] = 0;
      v142 = v141;
    }
    else
    {
      v142 = 0;
    }
    for ( i2 = 0; (int)i2 < *(int *)&stru_89E138.__pad_579C[67652]; i2 = (CellStruct *)((char *)i2 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&stru_89E138.__pad_579C[67640] + 4 * (_DWORD)i2)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[67640] + 4 * (_DWORD)i2),
        v142);
      fprintf(v2, &stru_830620.__pad_579C[10796], i2);
    }
    fprintf(v2, &stru_830620.__pad_579C[10592], v365);
    fprintf(v2, &stru_830620.__pad_579C[10860], v319);
    fprintf(v2, &stru_830620.__pad_579C[10812], v266);
    __3_YAXPAX_Z(v142);
    v144 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v144 )
    {
      *v144 = 0;
      v144[1] = 0;
      v144[2] = 0;
      v145 = v144;
    }
    else
    {
      v145 = 0;
    }
    for ( i3 = 0; (int)i3 < *(int *)&HouseClass_Player.__pad_5568[20644]; i3 = (CellStruct *)((char *)i3 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[20632]
                                                           + 4 * (_DWORD)i3)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20632] + 4 * (_DWORD)i3),
        v145);
      fprintf(v2, &stru_830620.__pad_579C[10796], i3);
    }
    fprintf(v2, &stru_830620.__pad_579C[10544], v366);
    fprintf(v2, &stru_830620.__pad_579C[10860], v320);
    fprintf(v2, &stru_830620.__pad_579C[10812], v267);
    __3_YAXPAX_Z(v145);
    v147 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v147 )
    {
      *v147 = 0;
      v147[1] = 0;
      v147[2] = 0;
      v148 = v147;
    }
    else
    {
      v148 = 0;
    }
    for ( i4 = 0; (int)i4 < *(int *)&HouseClass_Player.__pad_74[56]; i4 = (CellStruct *)((char *)i4 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_74[44] + 4 * (_DWORD)i4)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_74[44] + 4 * (_DWORD)i4),
        v148);
      fprintf(v2, &stru_830620.__pad_579C[10796], i4);
    }
    fprintf(v2, &stru_830620.__pad_579C[10492], v367);
    fprintf(v2, &stru_830620.__pad_579C[10860], v321);
    fprintf(v2, &stru_830620.__pad_579C[10812], v268);
    __3_YAXPAX_Z(v148);
    v150 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v150 )
    {
      *v150 = 0;
      v150[1] = 0;
      v150[2] = 0;
      v151 = v150;
    }
    else
    {
      v151 = 0;
    }
    for ( i5 = 0; (int)i5 < (int)g_TriggerClassCount; i5 = (CellStruct *)((char *)i5 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**((_DWORD **)g_TriggerTypeCount + (_DWORD)i5) + 52))(
        *((_DWORD *)g_TriggerTypeCount + (_DWORD)i5),
        v151);
      fprintf(v2, &stru_830620.__pad_579C[10796], i5);
    }
    fprintf(v2, &stru_830620.__pad_579C[10444], v368);
    fprintf(v2, &stru_830620.__pad_579C[10860], v322);
    fprintf(v2, &stru_830620.__pad_579C[10812], v269);
    __3_YAXPAX_Z(v151);
    v153 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v153 )
    {
      *v153 = 0;
      v153[1] = 0;
      v153[2] = 0;
      v154 = v153;
    }
    else
    {
      v154 = 0;
    }
    for ( i6 = 0; (int)i6 < *(int *)&HouseClass_Player.__pad_5568[22684]; i6 = (CellStruct *)((char *)i6 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672]
                                                           + 4 * (_DWORD)i6)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672] + 4 * (_DWORD)i6),
        v154);
      fprintf(v2, &stru_830620.__pad_579C[10796], i6);
    }
    fprintf(v2, &stru_830620.__pad_579C[10388], v369);
    fprintf(v2, &stru_830620.__pad_579C[10860], v323);
    fprintf(v2, &stru_830620.__pad_579C[10812], v270);
    __3_YAXPAX_Z(v154);
    v156 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v156 )
    {
      *v156 = 0;
      v156[1] = 0;
      v156[2] = 0;
      v157 = v156;
    }
    else
    {
      v157 = 0;
    }
    for ( i7 = 0; (int)i7 < *(int *)&HouseClass_Player.__pad_5568[8052]; i7 = (CellStruct *)((char *)i7 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[8040]
                                                           + 4 * (_DWORD)i7)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8040] + 4 * (_DWORD)i7),
        v157);
      fprintf(v2, &stru_830620.__pad_579C[10796], i7);
    }
    fprintf(v2, &stru_830620.__pad_579C[10340], v370);
    fprintf(v2, &stru_830620.__pad_579C[10860], v324);
    fprintf(v2, &stru_830620.__pad_579C[10812], v271);
    __3_YAXPAX_Z(v157);
    v159 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v159 )
    {
      *v159 = 0;
      v159[1] = 0;
      v159[2] = 0;
      v160 = v159;
    }
    else
    {
      v160 = 0;
    }
    for ( i8 = 0; (int)i8 < *(int *)&HouseClass_Player.__pad_5568[20716]; i8 = (CellStruct *)((char *)i8 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[20704]
                                                           + 4 * (_DWORD)i8)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20704] + 4 * (_DWORD)i8),
        v160);
      fprintf(v2, &stru_830620.__pad_579C[10796], i8);
    }
    fprintf(v2, &stru_830620.__pad_579C[10296], v371);
    fprintf(v2, &stru_830620.__pad_579C[10860], v325);
    fprintf(v2, &stru_830620.__pad_579C[10812], v272);
    __3_YAXPAX_Z(v160);
    v162 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v162 )
    {
      *v162 = 0;
      v162[1] = 0;
      v162[2] = 0;
      v163 = v162;
    }
    else
    {
      v163 = 0;
    }
    for ( i9 = 0; (int)i9 < *(int *)&HouseClass_Player.__pad_5568[22276]; i9 = (CellStruct *)((char *)i9 + 1) )
    {
      v165 = *(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22264] + 4 * (_DWORD)i9);
      if ( (*(int (__stdcall **)(_DWORD *))(v165[1] + 16))(v165 + 1) != -2 )
      {
        (*(void (__thiscall **)(_DWORD *, void *))(*v165 + 52))(v165, v163);
        fprintf(v2, &stru_830620.__pad_579C[10796], i9);
      }
    }
    fprintf(v2, &stru_830620.__pad_579C[10244], v372);
    fprintf(v2, &stru_830620.__pad_579C[10860], v326);
    fprintf(v2, &stru_830620.__pad_579C[10812], v273);
    __3_YAXPAX_Z(v163);
    v166 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    v167 = 0;
    if ( v166 )
    {
      *v166 = 0;
      v166[1] = 0;
      v166[2] = 0;
      v167 = v166;
    }
    for ( i10 = 0; (int)i10 < *(int *)&stru_89E138.__pad_1600D[27]; i10 = (CellStruct *)((char *)i10 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * (_DWORD)i10)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * (_DWORD)i10),
        v167);
      fprintf(v2, &stru_830620.__pad_579C[10796], i10);
    }
    fprintf(v2, &stru_830620.__pad_579C[10192], v373);
    fprintf(v2, &stru_830620.__pad_579C[10860], v327);
    fprintf(v2, &stru_830620.__pad_579C[10812], v274);
    __3_YAXPAX_Z(v167);
    v169 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v169 )
    {
      *v169 = 0;
      v169[1] = 0;
      v169[2] = 0;
      v170 = v169;
    }
    else
    {
      v170 = 0;
    }
    for ( i11 = 0; (int)i11 < *(int *)&HouseClass_Player.__pad_5568[22060]; i11 = (CellStruct *)((char *)i11 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22048]
                                                           + 4 * (_DWORD)i11)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22048] + 4 * (_DWORD)i11),
        v170);
      fprintf(v2, &stru_830620.__pad_579C[10796], i11);
    }
    fprintf(v2, &stru_830620.__pad_579C[10140], v374);
    fprintf(v2, &stru_830620.__pad_579C[10860], v328);
    fprintf(v2, &stru_830620.__pad_579C[10812], v275);
    __3_YAXPAX_Z(v170);
    v172 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v172 )
    {
      *v172 = 0;
      v172[1] = 0;
      v172[2] = 0;
      v173 = v172;
    }
    else
    {
      v173 = 0;
    }
    for ( i12 = 0; (int)i12 < *(int *)&HouseClass_Player.__pad_5568[23036]; i12 = (CellStruct *)((char *)i12 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[23024]
                                                           + 4 * (_DWORD)i12)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[23024] + 4 * (_DWORD)i12),
        v173);
      fprintf(v2, &stru_830620.__pad_579C[10796], i12);
    }
    fprintf(v2, &stru_830620.__pad_579C[10096], v375);
    fprintf(v2, &stru_830620.__pad_579C[10860], v329);
    fprintf(v2, &stru_830620.__pad_579C[10812], v276);
    __3_YAXPAX_Z(v173);
    v175 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v175 )
    {
      *v175 = 0;
      v175[1] = 0;
      v175[2] = 0;
      v176 = v175;
    }
    else
    {
      v176 = 0;
    }
    for ( i13 = 0; (int)i13 < *(int *)&stru_89E138.__pad_579C[67620]; i13 = (CellStruct *)((char *)i13 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&stru_89E138.__pad_579C[67608] + 4 * (_DWORD)i13)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[67608] + 4 * (_DWORD)i13),
        v176);
      fprintf(v2, &stru_830620.__pad_579C[10796], i13);
    }
    fprintf(v2, &stru_830620.__pad_579C[10044], v376);
    fprintf(v2, &stru_830620.__pad_579C[10860], v330);
    fprintf(v2, &stru_830620.__pad_579C[10812], v277);
    __3_YAXPAX_Z(v176);
    v178 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v178 )
    {
      *v178 = 0;
      v178[1] = 0;
      v178[2] = 0;
      v179 = v178;
    }
    else
    {
      v179 = 0;
    }
    for ( i14 = 0; (int)i14 < dword_8B41D8; i14 = (CellStruct *)((char *)i14 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**((_DWORD **)unk_8B41CC + (_DWORD)i14) + 52))(
        *((_DWORD *)unk_8B41CC + (_DWORD)i14),
        v179);
      fprintf(v2, &stru_830620.__pad_579C[10796], i14);
    }
    fprintf(v2, &stru_830620.__pad_579C[9996], v377);
    fprintf(v2, &stru_830620.__pad_579C[10860], v331);
    fprintf(v2, &stru_830620.__pad_579C[10812], v278);
    __3_YAXPAX_Z(v179);
    v181 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v181 )
    {
      *v181 = 0;
      v181[1] = 0;
      v181[2] = 0;
      v182 = v181;
    }
    else
    {
      v182 = 0;
    }
    for ( i15 = 0; (int)i15 < *(int *)&stru_87C374.__pad_579C[22448]; i15 = (CellStruct *)((char *)i15 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[22436] + 4 * (_DWORD)i15)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22436] + 4 * (_DWORD)i15),
        v182);
      fprintf(v2, &stru_830620.__pad_579C[10796], i15);
    }
    fprintf(v2, &stru_830620.__pad_579C[9948], v378);
    fprintf(v2, &stru_830620.__pad_579C[10860], v332);
    fprintf(v2, &stru_830620.__pad_579C[10812], v279);
    __3_YAXPAX_Z(v182);
    v184 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v184 )
    {
      *v184 = 0;
      v184[1] = 0;
      v184[2] = 0;
      v185 = v184;
    }
    else
    {
      v185 = 0;
    }
    for ( i16 = 0; (int)i16 < *(int *)&stru_B05488.__pad_579C[15212]; i16 = (CellStruct *)((char *)i16 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&stru_B05488.__pad_579C[15200] + 4 * (_DWORD)i16)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15200] + 4 * (_DWORD)i16),
        v185);
      fprintf(v2, &stru_830620.__pad_579C[10796], i16);
    }
    fprintf(v2, &stru_830620.__pad_579C[9904], v379);
    fprintf(v2, &stru_830620.__pad_579C[10860], v333);
    fprintf(v2, &stru_830620.__pad_579C[10812], v280);
    __3_YAXPAX_Z(v185);
    v187 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v187 )
    {
      *v187 = 0;
      v187[1] = 0;
      v187[2] = 0;
      v188 = v187;
    }
    else
    {
      v188 = 0;
    }
    for ( i17 = 0; (int)i17 < *(int *)&stru_B05488.__pad_579C[15116]; i17 = (CellStruct *)((char *)i17 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&stru_B05488.__pad_579C[15104] + 4 * (_DWORD)i17)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15104] + 4 * (_DWORD)i17),
        v188);
      fprintf(v2, &stru_830620.__pad_579C[10796], i17);
    }
    fprintf(v2, &stru_830620.__pad_579C[9852], v380);
    fprintf(v2, &stru_830620.__pad_579C[10860], v334);
    fprintf(v2, &stru_830620.__pad_579C[10812], v281);
    __3_YAXPAX_Z(v188);
    v190 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v190 )
    {
      *v190 = 0;
      v190[1] = 0;
      v190[2] = 0;
      v191 = v190;
    }
    else
    {
      v191 = 0;
    }
    for ( i18 = 0; (int)i18 < dword_8B4188; i18 = (CellStruct *)((char *)i18 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**((_DWORD **)unk_8B417C + (_DWORD)i18) + 52))(
        *((_DWORD *)unk_8B417C + (_DWORD)i18),
        v191);
      fprintf(v2, &stru_830620.__pad_579C[10796], i18);
    }
    fprintf(v2, &stru_830620.__pad_579C[9804], v381);
    fprintf(v2, &stru_830620.__pad_579C[10860], v335);
    fprintf(v2, &stru_830620.__pad_579C[10812], v282);
    __3_YAXPAX_Z(v191);
    v193 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v193 )
    {
      *v193 = 0;
      v193[1] = 0;
      v193[2] = 0;
      v194 = v193;
    }
    else
    {
      v194 = 0;
    }
    for ( i19 = 0; (int)i19 < *(int *)&HouseClass_Player.__pad_5568[22596]; i19 = (CellStruct *)((char *)i19 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22584]
                                                           + 4 * (_DWORD)i19)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22584] + 4 * (_DWORD)i19),
        v194);
      fprintf(v2, &stru_830620.__pad_579C[10796], i19);
    }
    fprintf(v2, &stru_830620.__pad_579C[9756], v382);
    fprintf(v2, &stru_830620.__pad_579C[10860], v336);
    fprintf(v2, &stru_830620.__pad_579C[10812], v283);
    __3_YAXPAX_Z(v194);
    v196 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v196 )
    {
      *v196 = 0;
      v196[1] = 0;
      v196[2] = 0;
      v197 = v196;
    }
    else
    {
      v197 = 0;
    }
    for ( i20 = 0; (int)i20 < *(int *)&stru_B05488.__pad_579C[14916]; i20 = (CellStruct *)((char *)i20 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&stru_B05488.__pad_579C[14904] + 4 * (_DWORD)i20)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[14904] + 4 * (_DWORD)i20),
        v197);
      fprintf(v2, &stru_830620.__pad_579C[10796], i20);
    }
    fprintf(v2, &stru_830620.__pad_579C[9708], v383);
    fprintf(v2, &stru_830620.__pad_579C[10860], v337);
    fprintf(v2, &stru_830620.__pad_579C[10812], v284);
    __3_YAXPAX_Z(v197);
    v199 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v199 )
    {
      *v199 = 0;
      v199[1] = 0;
      v199[2] = 0;
      v200 = v199;
    }
    else
    {
      v200 = 0;
    }
    for ( i21 = 0; (int)i21 < *(int *)&stru_B05488.__pad_579C[17804]; i21 = (CellStruct *)((char *)i21 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&stru_B05488.__pad_579C[17792] + 4 * (_DWORD)i21)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[17792] + 4 * (_DWORD)i21),
        v200);
      fprintf(v2, &stru_830620.__pad_579C[10796], i21);
    }
    fprintf(v2, &stru_830620.__pad_579C[9660], v384);
    fprintf(v2, &stru_830620.__pad_579C[10860], v338);
    fprintf(v2, &stru_830620.__pad_579C[10812], v285);
    __3_YAXPAX_Z(v200);
    v202 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v202 )
    {
      *v202 = 0;
      v202[1] = 0;
      v202[2] = 0;
      v203 = v202;
    }
    else
    {
      v203 = 0;
    }
    for ( i22 = 0; (int)i22 < *(int *)&HouseClass_Player.__pad_74[128]; i22 = (CellStruct *)((char *)i22 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_74[116]
                                                           + 4 * (_DWORD)i22)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_74[116] + 4 * (_DWORD)i22),
        v203);
      fprintf(v2, &stru_830620.__pad_579C[10796], i22);
    }
    fprintf(v2, &stru_830620.__pad_579C[9604], v385);
    fprintf(v2, &stru_830620.__pad_579C[10860], v339);
    fprintf(v2, &stru_830620.__pad_579C[10812], v286);
    __3_YAXPAX_Z(v203);
    v205 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v205 )
    {
      *v205 = 0;
      v205[1] = 0;
      v205[2] = 0;
      v206 = v205;
    }
    else
    {
      v206 = 0;
    }
    for ( i23 = 0; (int)i23 < *(int *)&HouseClass_Player.__pad_5568[22660]; i23 = (CellStruct *)((char *)i23 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22648]
                                                           + 4 * (_DWORD)i23)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22648] + 4 * (_DWORD)i23),
        v206);
      fprintf(v2, &stru_830620.__pad_579C[10796], i23);
    }
    fprintf(v2, &stru_830620.__pad_579C[9552], v386);
    fprintf(v2, &stru_830620.__pad_579C[10860], v340);
    fprintf(v2, &stru_830620.__pad_579C[10812], v287);
    __3_YAXPAX_Z(v206);
    v208 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v208 )
    {
      *v208 = 0;
      v208[1] = 0;
      v208[2] = 0;
      v209 = v208;
    }
    else
    {
      v209 = 0;
    }
    for ( i24 = 0; (int)i24 < *(int *)&stru_87C374.__pad_579C[22664]; i24 = (CellStruct *)((char *)i24 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[22652] + 4 * (_DWORD)i24)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22652] + 4 * (_DWORD)i24),
        v209);
      fprintf(v2, &stru_830620.__pad_579C[10796], i24);
    }
    fprintf(v2, &stru_830620.__pad_579C[9504], v387);
    fprintf(v2, &stru_830620.__pad_579C[10860], v341);
    fprintf(v2, &stru_830620.__pad_579C[10812], v288);
    __3_YAXPAX_Z(v209);
    v211 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v211 )
    {
      *v211 = 0;
      v211[1] = 0;
      v211[2] = 0;
      v212 = v211;
    }
    else
    {
      v212 = 0;
    }
    for ( i25 = 0; (int)i25 < *(int *)&stru_87C374.__pad_579C[22976]; i25 = (CellStruct *)((char *)i25 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[22964] + 4 * (_DWORD)i25)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22964] + 4 * (_DWORD)i25),
        v212);
      fprintf(v2, &stru_830620.__pad_579C[10796], i25);
    }
    fprintf(v2, &stru_830620.__pad_579C[9456], v388);
    fprintf(v2, &stru_830620.__pad_579C[10860], v342);
    fprintf(v2, &stru_830620.__pad_579C[10812], v289);
    __3_YAXPAX_Z(v212);
    v214 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v214 )
    {
      *v214 = 0;
      v214[1] = 0;
      v214[2] = 0;
      v215 = v214;
    }
    else
    {
      v215 = 0;
    }
    for ( i26 = 0; (int)i26 < *(int *)&stru_87C374.__pad_579C[23144]; i26 = (CellStruct *)((char *)i26 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[23132] + 4 * (_DWORD)i26)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23132] + 4 * (_DWORD)i26),
        v215);
      fprintf(v2, &stru_830620.__pad_579C[10796], i26);
    }
    fprintf(v2, &stru_830620.__pad_579C[9400], v389);
    fprintf(v2, &stru_830620.__pad_579C[10860], v343);
    fprintf(v2, &stru_830620.__pad_579C[10812], v290);
    __3_YAXPAX_Z(v215);
    v217 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v217 )
    {
      *v217 = 0;
      v217[1] = 0;
      v217[2] = 0;
      v218 = v217;
    }
    else
    {
      v218 = 0;
    }
    for ( i27 = 0; (int)i27 < *(int *)&HouseClass_Player.__pad_3C[32]; i27 = (CellStruct *)((char *)i27 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_3C[20] + 4 * (_DWORD)i27)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_3C[20] + 4 * (_DWORD)i27),
        v218);
      fprintf(v2, &stru_830620.__pad_579C[10796], i27);
    }
    fprintf(v2, &stru_830620.__pad_579C[9352], v390);
    fprintf(v2, &stru_830620.__pad_579C[10860], v344);
    fprintf(v2, &stru_830620.__pad_579C[10812], v291);
    __3_YAXPAX_Z(v218);
    v220 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v220 )
    {
      *v220 = 0;
      v220[1] = 0;
      v220[2] = 0;
      v221 = v220;
    }
    else
    {
      v221 = 0;
    }
    for ( i28 = 0; (int)i28 < *(int *)&HouseClass_Player.__pad_74[24]; i28 = (CellStruct *)((char *)i28 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_74[12] + 4 * (_DWORD)i28)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_74[12] + 4 * (_DWORD)i28),
        v221);
      fprintf(v2, &stru_830620.__pad_579C[10796], i28);
    }
    fprintf(v2, &stru_830620.__pad_579C[9296], v391);
    fprintf(v2, &stru_830620.__pad_579C[10860], _50bm);
    fprintf(v2, &stru_830620.__pad_579C[10812], v292);
    __3_YAXPAX_Z(v221);
    v223 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v223 )
    {
      *v223 = 0;
      v223[1] = 0;
      v223[2] = 0;
      v224 = v223;
    }
    else
    {
      v224 = 0;
    }
    for ( i29 = 0; (int)i29 < g_GameCleanupState; i29 = (CellStruct *)((char *)i29 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)&dword_A8020C->__pad_0[4 * (_DWORD)i29] + 52))(
        *(_DWORD *)&dword_A8020C->__pad_0[4 * (_DWORD)i29],
        v224);
      fprintf(v2, &stru_830620.__pad_579C[10796], i29);
    }
    fprintf(v2, &stru_830620.__pad_579C[9236], v392);
    fprintf(v2, &stru_830620.__pad_579C[10860], _50bn);
    fprintf(v2, &stru_830620.__pad_579C[10812], v293);
    __3_YAXPAX_Z(v224);
    v226 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v226 )
    {
      *v226 = 0;
      v226[1] = 0;
      v226[2] = 0;
      v227 = v226;
    }
    else
    {
      v227 = 0;
    }
    for ( i30 = 0; (int)i30 < *(int *)HouseClass_Player.__pad_2C; i30 = (CellStruct *)((char *)i30 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_18[8] + 4 * (_DWORD)i30)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_18[8] + 4 * (_DWORD)i30),
        v227);
      fprintf(v2, &stru_830620.__pad_579C[10796], i30);
    }
    fprintf(v2, &stru_830620.__pad_579C[9188], v393);
    fprintf(v2, &stru_830620.__pad_579C[10860], v347);
    fprintf(v2, &stru_830620.__pad_579C[10812], v294);
    __3_YAXPAX_Z(v227);
    v229 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v229 )
    {
      *v229 = 0;
      v229[1] = 0;
      v229[2] = 0;
      v230 = v229;
    }
    else
    {
      v230 = 0;
    }
    for ( i31 = 0; (int)i31 < (int)g_BulletTypeInitState; i31 = (CellStruct *)((char *)i31 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)&dword_A83C84->__pad_0[4 * (_DWORD)i31] + 52))(
        *(_DWORD *)&dword_A83C84->__pad_0[4 * (_DWORD)i31],
        v230);
      fprintf(v2, &stru_830620.__pad_579C[10796], i31);
    }
    fprintf(v2, &stru_830620.__pad_579C[9140], v394);
    fprintf(v2, &stru_830620.__pad_579C[10860], v348);
    fprintf(v2, &stru_830620.__pad_579C[10812], v295);
    __3_YAXPAX_Z(v230);
    v232 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v232 )
    {
      *v232 = 0;
      v232[1] = 0;
      v232[2] = 0;
      v233 = v232;
    }
    else
    {
      v233 = 0;
    }
    for ( i32 = 0; (int)i32 < *(int *)&HouseClass_Player.__pad_5568[23196]; i32 = (CellStruct *)((char *)i32 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[23184]
                                                           + 4 * (_DWORD)i32)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[23184] + 4 * (_DWORD)i32),
        v233);
      fprintf(v2, &stru_830620.__pad_579C[10796], i32);
    }
    fprintf(v2, &stru_830620.__pad_579C[9084], v395);
    fprintf(v2, &stru_830620.__pad_579C[10860], v349);
    fprintf(v2, &stru_830620.__pad_579C[10812], v296);
    __3_YAXPAX_Z(v233);
    v235 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v235 )
    {
      *v235 = 0;
      v235[1] = 0;
      v235[2] = 0;
      v236 = v235;
    }
    else
    {
      v236 = 0;
    }
    for ( i33 = 0; (int)i33 < dword_B72618; i33 = (CellStruct *)((char *)i33 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)&dword_B7260C->__pad_0[4 * (_DWORD)i33] + 52))(
        *(_DWORD *)&dword_B7260C->__pad_0[4 * (_DWORD)i33],
        v236);
      fprintf(v2, &stru_830620.__pad_579C[10796], i33);
    }
    fprintf(v2, &stru_830620.__pad_579C[9032], v396);
    fprintf(v2, &stru_830620.__pad_579C[10860], v350);
    fprintf(v2, &stru_830620.__pad_579C[10812], v297);
    __3_YAXPAX_Z(v236);
    v238 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v238 )
    {
      *v238 = 0;
      v238[1] = 0;
      v238[2] = 0;
      v239 = v238;
    }
    else
    {
      v239 = 0;
    }
    for ( i34 = 0; (int)i34 < *(int *)&HouseClass_Player.__pad_5568[22900]; i34 = (CellStruct *)((char *)i34 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22888]
                                                           + 4 * (_DWORD)i34)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22888] + 4 * (_DWORD)i34),
        v239);
      fprintf(v2, &stru_830620.__pad_579C[10796], i34);
    }
    fprintf(v2, &stru_830620.__pad_579C[8980], v397);
    fprintf(v2, &stru_830620.__pad_579C[10860], v351);
    fprintf(v2, &stru_830620.__pad_579C[10812], v298);
    __3_YAXPAX_Z(v239);
    v241 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v241 )
    {
      *v241 = 0;
      v241[1] = 0;
      v241[2] = 0;
      v242 = v241;
    }
    else
    {
      v242 = 0;
    }
    for ( i35 = 0; (int)i35 < *(int *)&HouseClass_Player.__pad_3C[8]; i35 = (CellStruct *)((char *)i35 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(HouseClass_Player.field_38 + 4 * (_DWORD)i35) + 52))(
        *(_DWORD *)(HouseClass_Player.field_38 + 4 * (_DWORD)i35),
        v242);
      fprintf(v2, &stru_830620.__pad_579C[10796], i35);
    }
    fprintf(v2, &stru_830620.__pad_579C[8928], v398);
    fprintf(v2, &stru_830620.__pad_579C[10860], v352);
    fprintf(v2, &stru_830620.__pad_579C[10812], v299);
    __3_YAXPAX_Z(v242);
    v244 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v244 )
    {
      *v244 = 0;
      v244[1] = 0;
      v244[2] = 0;
      v245 = v244;
    }
    else
    {
      v245 = 0;
    }
    for ( i36 = 0; (int)i36 < g_BridgeCellPool; i36 = (CellStruct *)((char *)i36 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)&dword_ABCA14->__pad_0[4 * (_DWORD)i36] + 52))(
        *(_DWORD *)&dword_ABCA14->__pad_0[4 * (_DWORD)i36],
        v245);
      fprintf(v2, &stru_830620.__pad_579C[10796], i36);
    }
    fprintf(v2, &stru_830620.__pad_579C[8872], v399);
    fprintf(v2, &stru_830620.__pad_579C[10860], v353);
    fprintf(v2, &stru_830620.__pad_579C[10812], v300);
    __3_YAXPAX_Z(v245);
    v247 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v247 )
    {
      *v247 = 0;
      v247[1] = 0;
      v247[2] = 0;
      v248 = v247;
    }
    else
    {
      v248 = 0;
    }
    for ( i37 = 0; (int)i37 < dword_8B41A0; i37 = (CellStruct *)((char *)i37 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**((_DWORD **)unk_8B4194 + (_DWORD)i37) + 52))(
        *((_DWORD *)unk_8B4194 + (_DWORD)i37),
        v248);
      fprintf(v2, &stru_830620.__pad_579C[10796], i37);
    }
    fprintf(v2, &stru_830620.__pad_579C[8828], v400);
    fprintf(v2, &stru_830620.__pad_579C[10860], v354);
    fprintf(v2, &stru_830620.__pad_579C[10812], v301);
    __3_YAXPAX_Z(v248);
    v250 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v250 )
    {
      *v250 = 0;
      v250[1] = 0;
      v250[2] = 0;
      v251 = v250;
    }
    else
    {
      v251 = 0;
    }
    for ( i38 = 0; (int)i38 < *(int *)&stru_89E138.__pad_1600D[3]; i38 = (CellStruct *)((char *)i38 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&stru_89E138.__pad_15FF8[12] + 4 * (_DWORD)i38)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_15FF8[12] + 4 * (_DWORD)i38),
        v251);
      fprintf(v2, &stru_830620.__pad_579C[10796], i38);
    }
    fprintf(v2, &stru_830620.__pad_579C[8780], v401);
    fprintf(v2, &stru_830620.__pad_579C[10860], v355);
    fprintf(v2, &stru_830620.__pad_579C[10812], v302);
    __3_YAXPAX_Z(v251);
    v253 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v253 )
    {
      *v253 = 0;
      v253[1] = 0;
      v253[2] = 0;
      v254 = v253;
    }
    else
    {
      v254 = 0;
    }
    for ( i39 = 0; (int)i39 < *(int *)stru_89E138.__pad_15FF8; i39 = (CellStruct *)((char *)i39 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&stru_89E138.__pad_579C[67664] + 4 * (_DWORD)i39)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[67664] + 4 * (_DWORD)i39),
        v254);
      fprintf(v2, &stru_830620.__pad_579C[10796], i39);
    }
    fprintf(v2, &stru_830620.__pad_579C[8732], v402);
    fprintf(v2, &stru_830620.__pad_579C[10860], v356);
    fprintf(v2, &stru_830620.__pad_579C[10812], v303);
    __3_YAXPAX_Z(v254);
    v256 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v256 )
    {
      *v256 = 0;
      v256[1] = 0;
      v256[2] = 0;
      v257 = v256;
    }
    else
    {
      v257 = 0;
    }
    for ( i40 = 0; (int)i40 < *(int *)&stru_B05488.__pad_579C[18644]; i40 = (CellStruct *)((char *)i40 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&stru_B05488.__pad_579C[18632] + 4 * (_DWORD)i40)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18632] + 4 * (_DWORD)i40),
        v257);
      fprintf(v2, &stru_830620.__pad_579C[10796], i40);
    }
    fprintf(v2, &stru_830620.__pad_579C[8684], v403);
    fprintf(v2, &stru_830620.__pad_579C[10860], v357);
    fprintf(v2, &stru_830620.__pad_579C[10812], v304);
    __3_YAXPAX_Z(v257);
    v259 = (_DWORD *)__2_YAPAXI_Z(0xCu);
    if ( v259 )
    {
      *v259 = 0;
      v259[1] = 0;
      v259[2] = 0;
      v260 = v259;
    }
    else
    {
      v260 = 0;
    }
    for ( i41 = 0; (int)i41 < *(int *)&stru_89E138.__pad_566C[220]; i41 = (CellStruct *)((char *)i41 + 1) )
    {
      (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)&stru_89E138.__pad_566C[208] + 4 * (_DWORD)i41)
                                             + 52))(
        *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_566C[208] + 4 * (_DWORD)i41),
        v260);
      fprintf(v2, &stru_830620.__pad_579C[10796], i41);
    }
    __3_YAXPAX_Z(v260);
    fclose(v2);
  }
  else
  {
    GetLastError();
    Debug::Log();
  }
}


